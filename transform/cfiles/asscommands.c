
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
/* UNAME:YHRBTRN */
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
struct A68t192 ;

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t192 *,A68_INT ),(struct A68t192 *,A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE192,INT) VOID */
struct A68t192{
A68_INT  Max_closureno;
A_PAD_INT(PAD_53)
struct A68t193 * Outers;
struct A68t193 * Freelist;
struct A68t194 * Outerslist;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,REF MODE193,REF MODE193,REF MODE194)  */
struct A68t196{
A68_INT  Closureno;
A_PAD_INT(PAD_54)
A68_INT  Sort;
A_PAD_INT(PAD_55)
struct A68t197 * Environ;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,INT,REF MODE197)  */
struct A68t193{
struct A68t196  Outer;
struct A68t193 * Rest;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE196,REF MODE193)  */
A_VECTOR(struct A68t193 ,A68t195);
typedef struct A68t195  A68_195 ;    /* VECTOR [] MODE193 */
struct A68t194{
struct A68t195  Outers;
struct A68t194 * Rest;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE195,REF MODE194)  */
A_VECTOR(struct A68t330 *,A68t198);
typedef struct A68t198  A68_198 ;    /* VECTOR [] REF MODE330 */
A_VECTOR(struct A68t328 *,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] REF MODE328 */
A_VECTOR(struct A68t322 *,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] REF MODE322 */
A_VECTOR(struct A68t321 *,A68t201);
typedef struct A68t201  A68_201 ;    /* VECTOR [] REF MODE321 */
A_VECTOR(struct A68t203 *,A68t202);
typedef struct A68t202  A68_202 ;    /* VECTOR [] REF MODE203 */
struct A68t197{
struct A68t198  Attrs;
struct A68t199  Ints;
struct A68t200  Types;
struct A68t201  Consts;
struct A68t202  Fns;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202)  */
A_VECTOR(struct A68t319 ,A68t204);
typedef struct A68t204  A68_204 ;    /* VECTOR [] MODE319 */
struct A68t263{
A68_INT  Attrno;
A_PAD_INT(PAD_56)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT)  */
struct A68t264{
A68_INT  Intno;
A_PAD_INT(PAD_57)
};
typedef struct A68t264  A68_264 ;    /* STRUCT(INT)  */
struct A68t265{
A68_INT  Typeno;
A_PAD_INT(PAD_58)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT)  */
struct A68t226{
A68_INT  Constno;
A_PAD_INT(PAD_59)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */
struct A68t266{
A68_INT  Fnno;
A_PAD_INT(PAD_60)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT)  */
struct A68t320 { A68_INT mode; union {
struct A68t263  mode1;
struct A68t264  mode2;
struct A68t265  mode3;
struct A68t226  mode4;
struct A68t266  mode5;
} data; };
typedef struct A68t320  A68_320 ;    /* UNION(MODE263,MODE264,MODE265,MODE226,MODE266)  */
struct A68t319{
A68_INT  Sort;
A_PAD_INT(PAD_61)
struct A68t320  Spec;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(INT,MODE320)  */
struct A68t205 { A68_INT mode; union {
struct A68t263 * mode1;
struct A68t314 * mode2;
struct A68t315 * mode3;
struct A68t316 * mode4;
struct A68t317 * mode5;
} data; };
typedef struct A68t205  A68_205 ;    /* UNION(REF MODE263,REF MODE314,REF MODE315,REF MODE316,REF MODE317)  */
A_VECTOR(struct A68t313 ,A68t207);
typedef struct A68t207  A68_207 ;    /* VECTOR [] MODE313 */
struct A68t293 { A68_INT mode; union {
struct A68t265 * mode1;
struct A68t294 * mode2;
struct A68t295 * mode3;
struct A68t296 * mode4;
struct A68t232 * mode5;
struct A68t297 * mode6;
struct A68t298 * mode7;
struct A68t299 * mode8;
struct A68t300 * mode9;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(REF MODE265,REF MODE294,REF MODE295,REF MODE296,REF MODE232,REF MODE297,REF MODE298,REF MODE299,REF MODE300)  */
struct A68t313{
A68_VC  Name;
struct A68t293  Type;
struct A68t205  Attr;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(REF MODE26,MODE293,MODE205)  */
struct A68t208 { A68_INT mode; union {
struct A68t210 * mode1;
struct A68t211 * mode2;
struct A68t212 * mode3;
struct A68t213 * mode4;
struct A68t214 * mode5;
struct A68t215 * mode6;
struct A68t216 * mode7;
struct A68t217 * mode8;
struct A68t218 * mode9;
struct A68t219 * mode10;
struct A68t220 * mode11;
struct A68t221 * mode12;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221)  */
struct A68t203{
A68_INT  Sort;
A_PAD_INT(PAD_62)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_63)
A68_VC  Fnname;
struct A68t204  Macspecs;
struct A68t205  Attr;
struct A68t206 * Inputs;
struct A68t206 * Outputs;
struct A68t207  Nametypes;
struct A68t208  Fnbody;
struct A68t209 * Usage;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE204,MODE205,REF MODE206,REF MODE206,REF MODE207,MODE208,REF MODE209)  */
struct A68t206{
A68_INT  Nameno;
A_PAD_INT(PAD_64)
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,REF MODE206)  */
struct A68t209{
A68_INT  Contextno;
A_PAD_INT(PAD_65)
A68_INT  Closureno;
A_PAD_INT(PAD_66)
A68_INT  Libv_spec;
A_PAD_INT(PAD_67)
A68_INT  Libv_body;
A_PAD_INT(PAD_68)
A68_BOOL  Import;
A_PAD_BOOL(PAD_69)
A68_BOOL  Export;
A_PAD_BOOL(PAD_70)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t225 { A68_INT mode; union {
struct A68t226 * mode1;
struct A68t227 * mode2;
struct A68t228 * mode3;
struct A68t229 * mode4;
struct A68t230 * mode5;
struct A68t231 * mode6;
struct A68t232 * mode7;
struct A68t233 * mode8;
struct A68t234 * mode9;
struct A68t235 * mode10;
struct A68t236 * mode11;
struct A68t237 * mode12;
struct A68t238 * mode13;
struct A68t239 * mode14;
struct A68t240 * mode15;
struct A68t241 * mode16;
struct A68t242 * mode17;
struct A68t243 * mode18;
struct A68t244 * mode19;
struct A68t245 * mode20;
struct A68t246 * mode21;
struct A68t247 * mode22;
struct A68t248 * mode23;
struct A68t249 * mode24;
struct A68t250 * mode25;
struct A68t251 * mode26;
struct A68t252 * mode27;
struct A68t253 * mode28;
struct A68t254 * mode29;
struct A68t255 * mode30;
struct A68t256 * mode31;
struct A68t257 * mode32;
struct A68t258 * mode33;
struct A68t259 * mode34;
} data; };
typedef struct A68t225  A68_225 ;    /* UNION(REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259)  */
struct A68t210{
struct A68t225  Tag;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE225)  */
A_VECTOR(struct A68t309 ,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] MODE309 */
struct A68t311{
struct A68t205  Tag;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE205)  */
struct A68t224 { A68_INT mode; union {
struct A68t301 * mode1;
struct A68t260 * mode2;
struct A68t302 * mode3;
struct A68t264 * mode4;
struct A68t303 * mode5;
struct A68t304 * mode6;
struct A68t305 * mode7;
struct A68t306 * mode8;
struct A68t299 * mode9;
struct A68t307 * mode10;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE301,REF MODE260,REF MODE302,REF MODE264,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE299,REF MODE307)  */
struct A68t278{
struct A68t224  Tag;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE224)  */
struct A68t312{
struct A68t293  Tag;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(MODE293)  */
struct A68t223{
A68_INT  Fnno;
A_PAD_INT(PAD_71)
struct A68t308  Macparams;
struct A68t205  Attr;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,REF MODE308,MODE205)  */
struct A68t310 { A68_INT mode; union {
struct A68t311  mode1;
struct A68t278  mode2;
struct A68t312  mode3;
struct A68t210  mode4;
struct A68t223  mode5;
} data; };
typedef struct A68t310  A68_310 ;    /* UNION(MODE311,MODE278,MODE312,MODE210,MODE223)  */
struct A68t309{
A68_INT  Sort;
A_PAD_INT(PAD_72)
struct A68t310  Param;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(INT,MODE310)  */
struct A68t211{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_73)
A68_VC  Name;
struct A68t308  Macparams;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(BOOL,REF MODE26,REF MODE308)  */
struct A68t212{
struct A68t224  Output;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE224)  */
struct A68t213{
A68_INT  Reform;
A_PAD_INT(PAD_74)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT)  */
struct A68t214{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_75)
struct A68t167  Ctname;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(REF MODE26,INT,MODE167)  */
struct A68t215{
A68_INT  Sort;
A_PAD_INT(PAD_76)
struct A68t225  Init;
struct A68t224  Ambigtime;
struct A68t225  Ambig;
struct A68t224  Delaytime;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,MODE225,MODE224,MODE225,MODE224)  */
struct A68t216{
struct A68t225  Init;
struct A68t224  Delaytime;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE225,MODE224)  */
struct A68t217{
struct A68t225  Init;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE225)  */
struct A68t218{
A68_INT  Sort;
A_PAD_INT(PAD_77)
struct A68t224  Interval;
struct A68t225  Init;
struct A68t224  Skew;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,MODE224,MODE225,MODE224)  */
struct A68t219{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t223  Inst;
struct A68t224  Scale;
struct A68t225  Init;
struct A68t224  Skew;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(BOOL,INT,MODE223,MODE224,MODE225,MODE224)  */
struct A68t220{
struct A68t222 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_80)
struct A68t208  Fnbody;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE222,BOOL,MODE208)  */
struct A68t221{
A68_INT  Bodynull;
A_PAD_INT(PAD_81)
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT)  */
struct A68t222{
A68_INT  Int;
A_PAD_INT(PAD_82)
struct A68t222 * Rest;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT,REF MODE222)  */
struct A68t227{
A68_INT  Typeno;
A_PAD_INT(PAD_83)
A68_INT  Primno;
A_PAD_INT(PAD_84)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT)  */
struct A68t228{
A68_INT  Typeno;
A_PAD_INT(PAD_85)
struct A68t224  Index;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,MODE224)  */
struct A68t229{
struct A68t293  Querytype;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE293)  */
struct A68t230{
A68_INT  Typeno;
A_PAD_INT(PAD_86)
struct A68t32  String;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t231{
A68_INT  Cvoid;
A_PAD_INT(PAD_87)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT)  */
struct A68t232{
struct A68t293  Type;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE293)  */
struct A68t292{
struct A68t224  Lwb;
struct A68t224  Upb;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE224,MODE224)  */
struct A68t233{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
struct A68t292  Range;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,MODE292)  */
struct A68t234{
A68_INT  Typeno;
A_PAD_INT(PAD_89)
A68_INT  Firstno;
A_PAD_INT(PAD_90)
A68_INT  Lastno;
A_PAD_INT(PAD_91)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT,INT,INT)  */
struct A68t235{
struct A68t225  Alt;
struct A68t235 * Rest;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE225,REF MODE235)  */
struct A68t236{
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_INT  Nameno;
A_PAD_INT(PAD_93)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT,INT)  */
struct A68t237{
struct A68t225  Sink;
struct A68t225  Source;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t238{
A68_INT  Typeno;
A_PAD_INT(PAD_94)
A68_INT  Altno;
A_PAD_INT(PAD_95)
struct A68t225  Assoc;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(INT,INT,MODE225)  */
struct A68t239{
struct A68t225  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_96)
A68_INT  Altno;
A_PAD_INT(PAD_97)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE225,INT,INT)  */
struct A68t240{
struct A68t225  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_98)
A68_INT  Nameno;
A_PAD_INT(PAD_99)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE225,INT,INT)  */
struct A68t241{
struct A68t225  Unit;
struct A68t224  Index;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE225,MODE224)  */
struct A68t242{
struct A68t225  Unit;
struct A68t292  Range;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE225,MODE292)  */
struct A68t243{
struct A68t225  Unit;
struct A68t225  Index;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t244{
struct A68t225  Unit;
struct A68t225  Index;
struct A68t225  From;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE225,MODE225,MODE225)  */
struct A68t245{
struct A68t224  Size;
struct A68t225  Elem;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE224,MODE225)  */
struct A68t246{
struct A68t225  Elem;
struct A68t246 * Rest;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE225,REF MODE246)  */
struct A68t247{
A68_BOOL  String;
A_PAD_BOOL(PAD_100)
A68_INT  Sort;
A_PAD_INT(PAD_101)
struct A68t225  Left;
struct A68t225  Right;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(BOOL,INT,MODE225,MODE225)  */
struct A68t248{
struct A68t223  Inst;
struct A68t225  Right;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE223,MODE225)  */
struct A68t249{
struct A68t225  Left;
struct A68t223  Inst;
struct A68t225  Right;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE225,MODE223,MODE225)  */
struct A68t250{
struct A68t225  Input;
struct A68t291 * Choices;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE225,REF MODE291)  */
struct A68t251{
struct A68t224  Cond;
struct A68t225  True;
struct A68t225  False;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE224,MODE225,MODE225)  */
struct A68t252{
struct A68t224  Repl;
struct A68t225  Body;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE224,MODE225)  */
struct A68t253{
struct A68t279 * Body;
struct A68t225  Output;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(REF MODE279,MODE225)  */
struct A68t254{
struct A68t261 * Body;
struct A68t225  Output;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(REF MODE261,MODE225)  */
struct A68t255{
struct A68t225  Unit;
struct A68t205  Attr;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE225,MODE205)  */
struct A68t260{
A68_INT  Sort;
A_PAD_INT(PAD_102)
struct A68t224  Test;
struct A68t224  Standard;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT,MODE224,MODE224)  */
struct A68t256{
struct A68t225  Unit;
struct A68t260  Check;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE225,MODE260)  */
struct A68t257{
struct A68t225  Unit;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE225)  */
struct A68t258{
struct A68t224  Size;
struct A68t225  Char;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE224,MODE225)  */
struct A68t259{
A68_INT  Unull;
A_PAD_INT(PAD_103)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t262 { A68_INT mode; union {
struct A68t263  mode1;
struct A68t264  mode2;
struct A68t265  mode3;
struct A68t226  mode4;
struct A68t266  mode5;
struct A68t267 * mode6;
struct A68t268 * mode7;
struct A68t269 * mode8;
struct A68t270 * mode9;
struct A68t271 * mode10;
struct A68t272 * mode11;
struct A68t273 * mode12;
} data; };
typedef struct A68t262  A68_262 ;    /* UNION(MODE263,MODE264,MODE265,MODE226,MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE272,REF MODE273)  */
struct A68t261{
struct A68t262  Step;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE262,REF MODE261)  */
struct A68t267{
struct A68t224  Cond;
struct A68t276 * Print;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE224,REF MODE276)  */
struct A68t268{
struct A68t224  Cond;
struct A68t276 * Fault;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE224,REF MODE276)  */
struct A68t269{
struct A68t206 * Letnames;
struct A68t225  Unit;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE206,MODE225)  */
struct A68t270{
struct A68t274 * Sizes;
struct A68t223  Inst;
struct A68t206 * Makenames;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE274,MODE223,REF MODE206)  */
struct A68t271{
struct A68t225  From;
struct A68t225  To;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t272{
struct A68t274 * Repls;
struct A68t275 * Joins;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(REF MODE274,REF MODE275)  */
struct A68t273{
A68_INT  Stepnull;
A_PAD_INT(PAD_104)
};
typedef struct A68t273  A68_273 ;    /* STRUCT(INT)  */
struct A68t274{
struct A68t224  Formula;
struct A68t274 * Rest;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE224,REF MODE274)  */
struct A68t275{
struct A68t271  Join;
struct A68t275 * Rest;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE271,REF MODE275)  */
struct A68t277 { A68_INT mode; union {
A68_VC  mode1;
struct A68t278 * mode2;
} data; };
typedef struct A68t277  A68_277 ;    /* UNION(REF MODE26,REF MODE278)  */
struct A68t276{
struct A68t277  Item;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE277,REF MODE276)  */
struct A68t280 { A68_INT mode; union {
struct A68t263  mode1;
struct A68t264  mode2;
struct A68t265  mode3;
struct A68t226  mode4;
struct A68t266  mode5;
struct A68t267 * mode6;
struct A68t268 * mode7;
struct A68t281 * mode8;
struct A68t282 * mode9;
struct A68t283 * mode10;
struct A68t284 * mode11;
struct A68t285 * mode12;
struct A68t286 * mode13;
struct A68t287 * mode14;
struct A68t288 * mode15;
struct A68t279 * mode16;
struct A68t289 * mode17;
} data; };
typedef struct A68t280  A68_280 ;    /* UNION(MODE263,MODE264,MODE265,MODE226,MODE266,REF MODE267,REF MODE268,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE279,REF MODE289)  */
struct A68t279{
struct A68t280  Step;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE280,REF MODE279)  */
struct A68t281{
struct A68t269  Seqlet;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE269)  */
struct A68t282{
struct A68t269  Seqvar;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE269)  */
struct A68t283{
struct A68t206 * Pvarnames;
struct A68t225  Init;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE206,MODE225)  */
struct A68t284{
struct A68t225  To;
struct A68t225  From;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE225,MODE225)  */
struct A68t285{
struct A68t225  Input;
struct A68t290 * Choices;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE225,REF MODE290)  */
struct A68t286{
struct A68t224  Cond;
struct A68t280  True;
struct A68t280  False;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE224,MODE280,MODE280)  */
struct A68t287{
struct A68t224  Repl;
struct A68t280  Body;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE224,MODE280)  */
struct A68t288{
A68_INT  Seqnull;
A_PAD_INT(PAD_105)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT)  */
struct A68t289{
struct A68t224  Size;
struct A68t280  Elem;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE224,MODE280)  */
struct A68t290{
A68_BOOL  Check;
A_PAD_BOOL(PAD_106)
A68_INT  Sort;
A_PAD_INT(PAD_107)
struct A68t225  Test;
struct A68t280  Output;
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(BOOL,INT,MODE225,MODE280,REF MODE290)  */
struct A68t291{
A68_BOOL  Check;
A_PAD_BOOL(PAD_108)
A68_INT  Sort;
A_PAD_INT(PAD_109)
struct A68t225  Test;
struct A68t225  Output;
struct A68t291 * Rest;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BOOL,INT,MODE225,MODE225,REF MODE291)  */
struct A68t294{
struct A68t224  Size;
struct A68t293  Elem;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE224,MODE293)  */
struct A68t295{
struct A68t293  Elem;
struct A68t295 * Rest;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE293,REF MODE295)  */
struct A68t296{
struct A68t293  From;
struct A68t293  To;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE293,MODE293)  */
struct A68t297{
struct A68t224  Size;
struct A68t293  Char;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE224,MODE293)  */
struct A68t298{
A68_INT  Tvoid;
A_PAD_INT(PAD_110)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT)  */
struct A68t299{
A68_INT  Macparno;
A_PAD_INT(PAD_111)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT)  */
struct A68t300{
A68_INT  Tnull;
A_PAD_INT(PAD_112)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT)  */
struct A68t301{
A68_INT  Int;
A_PAD_INT(PAD_113)
A68_VC  Text;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t302{
A68_INT  Nameno;
A_PAD_INT(PAD_114)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT)  */
struct A68t303{
struct A68t224  Left;
A68_INT  Sort;
A_PAD_INT(PAD_115)
struct A68t224  Right;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE224,INT,MODE224)  */
struct A68t304{
A68_INT  Sort;
A_PAD_INT(PAD_116)
struct A68t224  Right;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,MODE224)  */
struct A68t305{
struct A68t224  Cond;
struct A68t224  True;
struct A68t224  False;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE224,MODE224,MODE224)  */
struct A68t306{
struct A68t224  Formula;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE224)  */
struct A68t307{
A68_INT  Fnull;
A_PAD_INT(PAD_117)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT)  */
struct A68t314{
A68_VC  Classname;
struct A68t318 * Strings;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(REF MODE26,REF MODE318)  */
struct A68t315{
struct A68t205  Elem;
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE205,REF MODE315)  */
struct A68t316{
struct A68t205  Attr;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE205)  */
struct A68t317{
A68_INT  Attrnull;
A_PAD_INT(PAD_118)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT)  */
struct A68t318{
A68_VC  Id;
struct A68t318 * Rest;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(REF MODE26,REF MODE318)  */
struct A68t321{
A68_INT  Sort;
A_PAD_INT(PAD_119)
A68_VC  Constname;
struct A68t205  Attr;
struct A68t225  Value;
struct A68t209 * Usage;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT,REF MODE26,MODE205,MODE225,REF MODE209)  */
A_VECTOR(struct A68t327 ,A68t324);
typedef struct A68t324  A68_324 ;    /* VECTOR [] MODE327 */
struct A68t327{
A68_VC  Altname;
struct A68t293  Assoc;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE26,MODE293)  */
struct A68t323 { A68_INT mode; union {
struct A68t324  mode1;
struct A68t325 * mode2;
struct A68t312 * mode3;
struct A68t326 * mode4;
} data; };
typedef struct A68t323  A68_323 ;    /* UNION(REF MODE324,REF MODE325,REF MODE312,REF MODE326)  */
struct A68t322{
A68_INT  Sort;
A_PAD_INT(PAD_120)
A68_VC  Typename;
struct A68t205  Attr;
struct A68t323  Body;
struct A68t209 * Usage;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,REF MODE26,MODE205,MODE323,REF MODE209)  */
struct A68t325{
A68_VC  Tagname;
struct A68t292  Range;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(REF MODE26,MODE292)  */
struct A68t326{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t329 { A68_INT mode; union {
struct A68t301 * mode1;
struct A68t260 * mode2;
struct A68t302 * mode3;
struct A68t264 * mode4;
struct A68t303 * mode5;
struct A68t304 * mode6;
struct A68t305 * mode7;
struct A68t306 * mode8;
struct A68t299 * mode9;
struct A68t307 * mode10;
struct A68t292  mode11;
} data; };
typedef struct A68t329  A68_329 ;    /* UNION(REF MODE301,REF MODE260,REF MODE302,REF MODE264,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE299,REF MODE307,MODE292)  */
struct A68t328{
A68_INT  Sort;
A_PAD_INT(PAD_121)
A68_VC  Intname;
struct A68t205  Attr;
struct A68t329  Value;
struct A68t209 * Usage;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT,REF MODE26,MODE205,MODE329,REF MODE209)  */
struct A68t330{
A68_INT  Sort;
A_PAD_INT(PAD_122)
A68_VC  Attrname;
struct A68t205  Value;
struct A68t209 * Usage;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(INT,REF MODE26,MODE205,REF MODE209)  */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t196 ,A68_INT ),(struct A68t196 ,A68_INT ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE196,INT) VOID */
A_VECTOR(struct A68t193 *,A68t332);
typedef struct A68t332  A68_332 ;    /* VECTOR [] REF MODE193 */

A_PROCEDURE(struct A68t302 *,A68t333,(A68_INT ),(A68_INT ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(INT) REF MODE302 */

A_PROCEDURE(struct A68t264 *,A68t334,(A68_INT ),(A68_INT ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(INT) REF MODE264 */

A_PROCEDURE(struct A68t306 *,A68t335,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE224) REF MODE306 */

A_PROCEDURE(struct A68t278 *,A68t336,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE224) REF MODE278 */

A_PROCEDURE(struct A68t265 *,A68t337,(A68_INT ),(A68_INT ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT) REF MODE265 */

A_PROCEDURE(struct A68t232 *,A68t338,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE293) REF MODE232 */

A_PROCEDURE(struct A68t312 *,A68t339,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE293) REF MODE312 */

A_PROCEDURE(struct A68t226 *,A68t340,(A68_INT ),(A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT) REF MODE226 */

A_PROCEDURE(struct A68t229 *,A68t341,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE293) REF MODE229 */

A_PROCEDURE(struct A68t281 *,A68t342,(struct A68t269 ),(struct A68t269 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE269) REF MODE281 */

A_PROCEDURE(struct A68t282 *,A68t343,(struct A68t269 ),(struct A68t269 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE269) REF MODE282 */

A_PROCEDURE(struct A68t257 *,A68t344,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE225) REF MODE257 */

A_PROCEDURE(struct A68t210 *,A68t345,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE225) REF MODE210 */

A_PROCEDURE(struct A68t266 *,A68t346,(A68_INT ),(A68_INT ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(INT) REF MODE266 */

A_PROCEDURE(struct A68t212 *,A68t347,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE224) REF MODE212 */

A_PROCEDURE(struct A68t217 *,A68t348,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE225) REF MODE217 */

A_PROCEDURE(struct A68t299 *,A68t349,(A68_INT ),(A68_INT ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(INT) REF MODE299 */

A_PROCEDURE(struct A68t263 *,A68t350,(A68_INT ),(A68_INT ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(INT) REF MODE263 */

A_PROCEDURE(struct A68t311 *,A68t351,(struct A68t205 ),(struct A68t205 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE205) REF MODE311 */

A_PROCEDURE(struct A68t316 *,A68t352,(struct A68t205 ),(struct A68t205 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE205) REF MODE316 */
A_VECTOR(struct A68t318 *,A68t353);
typedef struct A68t353  A68_353 ;    /* VECTOR [] REF MODE318 */
struct A68t354 ;

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t354 ,A68_BOOL ,struct A68t97 ),(struct A68t354 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE354,BOOL,MODE97) VOID */
struct A68t354{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_123)
struct A68t355  Set;
};
typedef struct A68t354  A68_354 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE355)  */

A_PROCEDURE(A68_VOID ,A68t356,(A68_VC ,A68_VC ,A68_INT ,struct A68t355 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t355 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE26,MODE26,INT,MODE355) VOID */

A_PROCEDURE(A68_BOOL ,A68t357,(A68_VC ),(A68_VC ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t358,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE26,MODE26,MODE97) VOID */
A_VECTOR(struct A68t361 ,A68t360);
typedef struct A68t360  A68_360 ;    /* VECTOR [] MODE361 */
struct A68t359{
A68_BITS  Type;
A_PAD_BITS(PAD_124)
struct A68t360  Elements;
};
typedef struct A68t359  A68_359 ;    /* STRUCT(BITS,REF MODE360)  */
struct A68t361 { A68_INT mode; union {
A68_INT * mode1;
struct A68t359  mode2;
} data; };
typedef struct A68t361  A68_361 ;    /* UNION(REF INT,MODE359)  */
struct A68t362{
A68_INT  Sort;
A_PAD_INT(PAD_125)
A68_VC  Value;
};
typedef struct A68t362  A68_362 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t362 ,A68t363);
typedef struct A68t363  A68_363 ;    /* VECTOR [] MODE362 */
A_VECTOR(struct A68t364 ,A68t366);
typedef struct A68t366  A68_366 ;    /* VECTOR [] MODE364 */
struct A68t365{
A68_INT  Choice;
A_PAD_INT(PAD_126)
struct A68t366  Params;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(INT,REF MODE366)  */
struct A68t364 { A68_INT mode; union {
struct A68t365  mode1;
struct A68t362  mode2;
} data; };
typedef struct A68t364  A68_364 ;    /* UNION(MODE365,MODE362)  */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE97) REF MODE26 */
struct A68t367 { A68_INT mode; union {
struct A68t368  mode1;
A68_INT * mode2;
struct A68t359  mode3;
} data; };
typedef struct A68t367  A68_367 ;    /* UNION(MODE368,REF INT,MODE359)  */
struct A68t369{
A68_INT * Sort;
struct A68t367  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t369  A68_369 ;    /* STRUCT(REF INT,MODE367,REF MODE26,REF MODE26)  */
struct A68t370{
struct A68t369  Rule;
struct A68t370 * Rest;
};
typedef struct A68t370  A68_370 ;    /* STRUCT(MODE369,REF MODE370)  */

A_PROCEDURE(A68_BOOL ,A68t371,(struct A68t359 ),(struct A68t359 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE359) BOOL */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t360 ,struct A68t359 *),(struct A68t360 ,struct A68t359 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE360) MODE359 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t361 ,struct A68t359 *),(struct A68t361 ,struct A68t359 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE361) MODE359 */
struct A68t375 ;

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t361 ,struct A68t375 ,A68_VC *),(struct A68t361 ,struct A68t375 ,A68_VC *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE361,REF MODE375) REF MODE26 */
A_VECTOR(struct A68t369 ,A68t375);
typedef struct A68t375  A68_375 ;    /* VECTOR [] MODE369 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t34 *,struct A68t375 ),(struct A68t34 *,struct A68t375 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE34,REF MODE375) VOID */
struct A68t378 ;

A_PROCEDURE(struct A68t370 *,A68t377,(struct A68t370 *,struct A68t378 ),(struct A68t370 *,struct A68t378 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE370,MODE378) REF MODE370 */
A_VECTOR(struct A68t379 ,A68t378);
typedef struct A68t378  A68_378 ;    /* VECTOR [] MODE379 */
struct A68t379{
A68_INT * No;
struct A68t367  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t379  A68_379 ;    /* STRUCT(REF INT,MODE367,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t364 ,struct A68t363 *),(struct A68t364 ,struct A68t363 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE364) REF MODE363 */
struct A68t381{
A68_INT  C;
A_PAD_INT(PAD_127)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT)  */
struct A68t382{
A68_BITS  A;
A_PAD_BITS(PAD_128)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t384,(A68_VC ,struct A68t364 ,struct A68t97 ),(A68_VC ,struct A68t364 ,struct A68t97 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE26,MODE364,MODE97) VOID */
struct A68t383{
A68_VC  Parameter;
struct A68t384  Proc;
};
typedef struct A68t383  A68_383 ;    /* STRUCT(REF MODE26,MODE384)  */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t364 ,struct A68t97 ),(struct A68t364 ,struct A68t97 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE364,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t363 ,struct A68t97 ),(struct A68t363 ,struct A68t97 ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE363,MODE97) VOID */
struct A68t385 { A68_INT mode; union {
struct A68t383  mode1;
struct A68t386  mode2;
struct A68t387  mode3;
} data; };
typedef struct A68t385  A68_385 ;    /* UNION(MODE383,MODE386,MODE387)  */
struct A68t388 { A68_INT mode; union {
struct A68t389 * mode1;
struct A68t390 * mode2;
struct A68t391 * mode3;
} data; };
typedef struct A68t388  A68_388 ;    /* UNION(REF MODE389,REF MODE390,REF MODE391)  */
struct A68t389 ;

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t389 *,struct A68t34 *),(struct A68t389 *,struct A68t34 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE389,REF MODE34) VOID */
struct A68t393 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t394  mode3;
} data; };
typedef struct A68t393  A68_393 ;    /* UNION(REF MODE26,REF MODE102,MODE394)  */
struct A68t389{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t361  Parameter;
struct A68t382  Access;
struct A68t381  Continuation;
struct A68t393  Help;
struct A68t385  Command;
};
typedef struct A68t389  A68_389 ;    /* STRUCT(REF MODE26,REF MODE26,MODE361,MODE382,MODE381,MODE393,MODE385)  */
A_VECTOR(struct A68t388 ,A68t392);
typedef struct A68t392  A68_392 ;    /* VECTOR [] MODE388 */
struct A68t390{
struct A68t389 * Group;
struct A68t392  Commands;
};
typedef struct A68t390  A68_390 ;    /* STRUCT(REF MODE389,REF MODE392)  */
struct A68t391{
struct A68t389 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t392  Locals;
struct A68t392  Globals;
struct A68t389 * Postlude;
};
typedef struct A68t391  A68_391 ;    /* STRUCT(REF MODE389,REF MODE26,REF REF MODE26,REF MODE392,REF MODE392,REF MODE389)  */
struct A68t395{
struct A68t391 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_129)
struct A68t102  Input_lines;
struct A68t395 * Caller;
};
typedef struct A68t395  A68_395 ;    /* STRUCT(REF MODE391,INT,REF MODE102,REF MODE395)  */
struct A68t396 ;

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t396 *,struct A68t389 *,struct A68t364 ,struct A68t97 ,struct A68t381 *),(struct A68t396 *,struct A68t389 *,struct A68t364 ,struct A68t97 ,struct A68t381 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE396,REF MODE389,MODE364,MODE97) MODE381 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE102) VOID */
struct A68t400 ;

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t400 ),(struct A68t400 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE400) VOID */
struct A68t396{
struct A68t395 * Stack;
struct A68t375  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_130)
A68_BOOL  Private;
A_PAD_BOOL(PAD_131)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_132)
struct A68t397  Caller;
struct A68t398  Report_error;
struct A68t399  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE395,REF MODE375,BOOL,BOOL,BOOL,MODE397,MODE398,MODE399,MODE97)  */
struct A68t400 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t400  A68_400 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t401,(struct A68t381 ,struct A68t381 ),(struct A68t381 ,struct A68t381 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE381,MODE381) BOOL */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t392 ,struct A68t392 ,struct A68t392 *),(struct A68t392 ,struct A68t392 ,struct A68t392 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE392,MODE392) REF MODE392 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t392 ,struct A68t388 ,struct A68t392 *),(struct A68t392 ,struct A68t388 ,struct A68t392 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE392,MODE388) REF MODE392 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t392 *,struct A68t392 ,struct A68t392 *),(struct A68t392 *,struct A68t392 ,struct A68t392 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF REF MODE392,MODE392) REF MODE392 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t392 *,struct A68t388 ,struct A68t392 *),(struct A68t392 *,struct A68t388 ,struct A68t392 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF REF MODE392,MODE388) REF MODE392 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t392 ,struct A68t392 *),(struct A68t392 ,struct A68t392 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE392) REF MODE392 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t388 ,struct A68t392 *),(struct A68t388 ,struct A68t392 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE388) REF MODE392 */

A_PROCEDURE(struct A68t390 *,A68t408,(A68_VC ,A68_VC ,struct A68t382 ,struct A68t392 ),(A68_VC ,A68_VC ,struct A68t382 ,struct A68t392 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE26,MODE26,MODE382,MODE392) REF MODE390 */

A_PROCEDURE(struct A68t391 *,A68t409,(struct A68t389 *,A68_VC ,A68_VC *,struct A68t392 ,struct A68t392 ,struct A68t385 ),(struct A68t389 *,A68_VC ,A68_VC *,struct A68t392 ,struct A68t392 ,struct A68t385 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE389,MODE26,REF REF MODE26,REF MODE392,REF MODE392,MODE385) REF MODE391 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t396 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t396 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE396,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t396 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t396 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE396,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t396 *,A68t412,(struct A68t398 ,struct A68t399 ,struct A68t97 ,struct A68t397 ,struct A68t370 *,struct A68t391 *,struct A68t364 ),(struct A68t398 ,struct A68t399 ,struct A68t97 ,struct A68t397 ,struct A68t370 *,struct A68t391 *,struct A68t364 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE398,MODE399,MODE97,MODE397,REF MODE370,REF MODE391,MODE364) REF MODE396 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t396 *,struct A68t381 *),(struct A68t396 *,struct A68t381 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE396) MODE381 */

A_PROCEDURE(A68_BOOL ,A68t414,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t415,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t416,(A68_VC ,A68_VC ,struct A68t414 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t414 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE26,MODE26,MODE414,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t417,(A68_VC ),(A68_VC ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t418,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF INT,MODE97) BOOL */
struct A68t420 ;

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t420 ,struct A68t97 ,A68_VC *),(struct A68t420 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE420,MODE97) REF MODE26 */
struct A68t420{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_133)
A68_BOOL  Check;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t420  A68_420 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t420 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t420 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE420,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t422,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t423,(struct A68t362 ),(struct A68t362 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE362) BOOL */

A_PROCEDURE(A68_INT ,A68t424,(struct A68t362 ,struct A68t97 ),(struct A68t362 ,struct A68t97 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE362,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t362 ,struct A68t97 ,A68_VC *),(struct A68t362 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE362,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t362 ,A68_VC ,struct A68t97 ,struct A68t144 *),(struct A68t362 ,A68_VC ,struct A68t97 ,struct A68t144 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE362,MODE26,MODE97) MODE144 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t363 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t167 *),(struct A68t363 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t167 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE363,REF INT,REF MODE26,MODE97) MODE167 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t362 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t362 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE362,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t429,(struct A68t362 ,struct A68t97 ,struct A68t46 ),(struct A68t362 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE362,MODE97,MODE46) INT */
struct A68t430{
A68_INT  Lwb;
A_PAD_INT(PAD_135)
A68_INT  Upb;
A_PAD_INT(PAD_136)
};
typedef struct A68t430  A68_430 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t362 ,struct A68t430 ,struct A68t97 ,struct A68t430 *),(struct A68t362 ,struct A68t430 ,struct A68t97 ,struct A68t430 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE362,MODE430,MODE97) MODE430 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t433,(struct A68t362 ,struct A68t97 ),(struct A68t362 ,struct A68t97 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE362,MODE97) CHAR */

A_PROCEDURE(struct A68t370 *,A68t434,(void),(void *));
typedef struct A68t434  A68_434 ;    /* PROC REF MODE370 */

A_PROCEDURE(A68_INT ,A68t435,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE192) INT */

A_PROCEDURE(struct A68t193 *,A68t436,(A68_INT ,struct A68t192 *,struct A68t97 ),(A68_INT ,struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(INT,REF MODE192,MODE97) REF MODE193 */

A_PROCEDURE(struct A68t193 *,A68t437,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE192) REF MODE193 */

A_PROCEDURE(struct A68t193 **,A68t438,(struct A68t196 ,struct A68t193 **,struct A68t192 *,struct A68t97 ),(struct A68t196 ,struct A68t193 **,struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE196,REF REF MODE193,REF MODE192,MODE97) REF REF MODE193 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t193 **,struct A68t192 *,struct A68t97 ),(struct A68t193 **,struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF REF MODE193,REF MODE192,MODE97) VOID */

A_PROCEDURE(struct A68t192 *,A68t440,(void),(void *));
typedef struct A68t440  A68_440 ;    /* PROC REF MODE192 */

A_PROCEDURE(A68_INT ,A68t441,(struct A68t192 *,struct A68t97 ),(struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE192,MODE97) INT */

A_PROCEDURE(struct A68t192 *,A68t442,(struct A68t192 *,struct A68t97 ),(struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE192,MODE97) REF MODE192 */
struct A68t443{
struct A68t205  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t443  A68_443 ;    /* STRUCT(MODE205,BOOL)  */
struct A68t444{
struct A68t315 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t444  A68_444 ;    /* STRUCT(REF MODE315,BOOL)  */
struct A68t445{
struct A68t330 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t445  A68_445 ;    /* STRUCT(REF MODE330,BOOL)  */
struct A68t446{
struct A68t224  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t446  A68_446 ;    /* STRUCT(MODE224,BOOL)  */
struct A68t447{
struct A68t274 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t447  A68_447 ;    /* STRUCT(REF MODE274,BOOL)  */
struct A68t448{
struct A68t328 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t448  A68_448 ;    /* STRUCT(REF MODE328,BOOL)  */
struct A68t449{
struct A68t292  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t449  A68_449 ;    /* STRUCT(MODE292,BOOL)  */
struct A68t450{
struct A68t329  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t450  A68_450 ;    /* STRUCT(MODE329,BOOL)  */
struct A68t451{
struct A68t295 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t451  A68_451 ;    /* STRUCT(REF MODE295,BOOL)  */
struct A68t452{
struct A68t293  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t452  A68_452 ;    /* STRUCT(MODE293,BOOL)  */
struct A68t453{
struct A68t327  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t453  A68_453 ;    /* STRUCT(MODE327,BOOL)  */
struct A68t454{
struct A68t324  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t454  A68_454 ;    /* STRUCT(REF MODE324,BOOL)  */
struct A68t455{
struct A68t323  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t455  A68_455 ;    /* STRUCT(MODE323,BOOL)  */
struct A68t456{
struct A68t322 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t456  A68_456 ;    /* STRUCT(REF MODE322,BOOL)  */
struct A68t457{
struct A68t321 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_151)
};
typedef struct A68t457  A68_457 ;    /* STRUCT(REF MODE321,BOOL)  */
struct A68t458{
struct A68t235 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_152)
};
typedef struct A68t458  A68_458 ;    /* STRUCT(REF MODE235,BOOL)  */
struct A68t459{
struct A68t246 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t459  A68_459 ;    /* STRUCT(REF MODE246,BOOL)  */
struct A68t460{
struct A68t291 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_154)
};
typedef struct A68t460  A68_460 ;    /* STRUCT(REF MODE291,BOOL)  */
struct A68t461{
struct A68t225  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_155)
};
typedef struct A68t461  A68_461 ;    /* STRUCT(MODE225,BOOL)  */
struct A68t462{
struct A68t310  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_156)
};
typedef struct A68t462  A68_462 ;    /* STRUCT(MODE310,BOOL)  */
struct A68t463{
struct A68t308  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_157)
};
typedef struct A68t463  A68_463 ;    /* STRUCT(REF MODE308,BOOL)  */
struct A68t464{
struct A68t223  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_158)
};
typedef struct A68t464  A68_464 ;    /* STRUCT(MODE223,BOOL)  */
struct A68t465{
struct A68t320  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t465  A68_465 ;    /* STRUCT(MODE320,BOOL)  */
struct A68t466{
struct A68t276 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_160)
};
typedef struct A68t466  A68_466 ;    /* STRUCT(REF MODE276,BOOL)  */
struct A68t467{
struct A68t267 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t467  A68_467 ;    /* STRUCT(REF MODE267,BOOL)  */
struct A68t468{
struct A68t268 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_162)
};
typedef struct A68t468  A68_468 ;    /* STRUCT(REF MODE268,BOOL)  */
struct A68t469{
struct A68t206 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_163)
};
typedef struct A68t469  A68_469 ;    /* STRUCT(REF MODE206,BOOL)  */
struct A68t470{
struct A68t269 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_164)
};
typedef struct A68t470  A68_470 ;    /* STRUCT(REF MODE269,BOOL)  */
struct A68t471{
struct A68t290 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_165)
};
typedef struct A68t471  A68_471 ;    /* STRUCT(REF MODE290,BOOL)  */
struct A68t472{
struct A68t280  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_166)
};
typedef struct A68t472  A68_472 ;    /* STRUCT(MODE280,BOOL)  */
struct A68t473{
struct A68t279 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_167)
};
typedef struct A68t473  A68_473 ;    /* STRUCT(REF MODE279,BOOL)  */
struct A68t474{
struct A68t270 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_168)
};
typedef struct A68t474  A68_474 ;    /* STRUCT(REF MODE270,BOOL)  */
struct A68t475{
struct A68t271 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_169)
};
typedef struct A68t475  A68_475 ;    /* STRUCT(REF MODE271,BOOL)  */
struct A68t476{
struct A68t275 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_170)
};
typedef struct A68t476  A68_476 ;    /* STRUCT(REF MODE275,BOOL)  */
struct A68t477{
struct A68t262  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_171)
};
typedef struct A68t477  A68_477 ;    /* STRUCT(MODE262,BOOL)  */
struct A68t478{
struct A68t261 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_172)
};
typedef struct A68t478  A68_478 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t479{
struct A68t208  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_173)
};
typedef struct A68t479  A68_479 ;    /* STRUCT(MODE208,BOOL)  */
struct A68t480{
struct A68t319  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_174)
};
typedef struct A68t480  A68_480 ;    /* STRUCT(MODE319,BOOL)  */
struct A68t481{
struct A68t204  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_175)
};
typedef struct A68t481  A68_481 ;    /* STRUCT(REF MODE204,BOOL)  */
struct A68t482{
struct A68t203 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_176)
};
typedef struct A68t482  A68_482 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t483{
struct A68t196  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_177)
};
typedef struct A68t483  A68_483 ;    /* STRUCT(MODE196,BOOL)  */
struct A68t484{
struct A68t192 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_178)
};
typedef struct A68t484  A68_484 ;    /* STRUCT(REF MODE192,BOOL)  */
struct A68t485 ;

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t205 ,struct A68t485 *,struct A68t443 *),(struct A68t205 ,struct A68t485 *,struct A68t443 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(MODE205,REF MODE485) MODE443 */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t315 *,struct A68t485 *,struct A68t444 *),(struct A68t315 *,struct A68t485 *,struct A68t444 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(REF MODE315,REF MODE485) MODE444 */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t330 *,struct A68t485 *,struct A68t445 *),(struct A68t330 *,struct A68t485 *,struct A68t445 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(REF MODE330,REF MODE485) MODE445 */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t224 ,struct A68t485 *,struct A68t446 *),(struct A68t224 ,struct A68t485 *,struct A68t446 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE224,REF MODE485) MODE446 */

A_PROCEDURE(A68_VOID ,A68t490,(struct A68t274 *,struct A68t485 *,struct A68t447 *),(struct A68t274 *,struct A68t485 *,struct A68t447 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(REF MODE274,REF MODE485) MODE447 */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t328 *,struct A68t485 *,struct A68t448 *),(struct A68t328 *,struct A68t485 *,struct A68t448 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF MODE328,REF MODE485) MODE448 */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t292 ,struct A68t485 *,struct A68t449 *),(struct A68t292 ,struct A68t485 *,struct A68t449 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(MODE292,REF MODE485) MODE449 */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t329 ,struct A68t485 *,struct A68t450 *),(struct A68t329 ,struct A68t485 *,struct A68t450 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE329,REF MODE485) MODE450 */

A_PROCEDURE(A68_VOID ,A68t494,(struct A68t295 *,struct A68t485 *,struct A68t451 *),(struct A68t295 *,struct A68t485 *,struct A68t451 *,void *));
typedef struct A68t494  A68_494 ;    /* PROC(REF MODE295,REF MODE485) MODE451 */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t293 ,struct A68t485 *,struct A68t452 *),(struct A68t293 ,struct A68t485 *,struct A68t452 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(MODE293,REF MODE485) MODE452 */

A_PROCEDURE(A68_VOID ,A68t496,(struct A68t327 ,struct A68t485 *,struct A68t453 *),(struct A68t327 ,struct A68t485 *,struct A68t453 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(MODE327,REF MODE485) MODE453 */

A_PROCEDURE(A68_VOID ,A68t497,(struct A68t324 ,struct A68t485 *,struct A68t454 *),(struct A68t324 ,struct A68t485 *,struct A68t454 *,void *));
typedef struct A68t497  A68_497 ;    /* PROC(REF MODE324,REF MODE485) MODE454 */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t323 ,struct A68t485 *,struct A68t455 *),(struct A68t323 ,struct A68t485 *,struct A68t455 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE323,REF MODE485) MODE455 */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t322 *,struct A68t485 *,struct A68t456 *),(struct A68t322 *,struct A68t485 *,struct A68t456 *,void *));
typedef struct A68t499  A68_499 ;    /* PROC(REF MODE322,REF MODE485) MODE456 */

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t321 *,struct A68t485 *,struct A68t457 *),(struct A68t321 *,struct A68t485 *,struct A68t457 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE321,REF MODE485) MODE457 */

A_PROCEDURE(A68_VOID ,A68t501,(struct A68t235 *,struct A68t485 *,struct A68t458 *),(struct A68t235 *,struct A68t485 *,struct A68t458 *,void *));
typedef struct A68t501  A68_501 ;    /* PROC(REF MODE235,REF MODE485) MODE458 */

A_PROCEDURE(A68_VOID ,A68t502,(struct A68t246 *,struct A68t485 *,struct A68t459 *),(struct A68t246 *,struct A68t485 *,struct A68t459 *,void *));
typedef struct A68t502  A68_502 ;    /* PROC(REF MODE246,REF MODE485) MODE459 */

A_PROCEDURE(A68_VOID ,A68t503,(struct A68t291 *,struct A68t485 *,struct A68t460 *),(struct A68t291 *,struct A68t485 *,struct A68t460 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE291,REF MODE485) MODE460 */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t225 ,struct A68t485 *,struct A68t461 *),(struct A68t225 ,struct A68t485 *,struct A68t461 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(MODE225,REF MODE485) MODE461 */

A_PROCEDURE(A68_VOID ,A68t505,(struct A68t310 ,struct A68t485 *,struct A68t462 *),(struct A68t310 ,struct A68t485 *,struct A68t462 *,void *));
typedef struct A68t505  A68_505 ;    /* PROC(MODE310,REF MODE485) MODE462 */

A_PROCEDURE(A68_VOID ,A68t506,(struct A68t308 ,struct A68t485 *,struct A68t463 *),(struct A68t308 ,struct A68t485 *,struct A68t463 *,void *));
typedef struct A68t506  A68_506 ;    /* PROC(REF MODE308,REF MODE485) MODE463 */

A_PROCEDURE(A68_VOID ,A68t507,(struct A68t223 ,struct A68t485 *,struct A68t464 *),(struct A68t223 ,struct A68t485 *,struct A68t464 *,void *));
typedef struct A68t507  A68_507 ;    /* PROC(MODE223,REF MODE485) MODE464 */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t320 ,struct A68t485 *,struct A68t465 *),(struct A68t320 ,struct A68t485 *,struct A68t465 *,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE320,REF MODE485) MODE465 */

A_PROCEDURE(A68_VOID ,A68t509,(struct A68t276 *,struct A68t485 *,struct A68t466 *),(struct A68t276 *,struct A68t485 *,struct A68t466 *,void *));
typedef struct A68t509  A68_509 ;    /* PROC(REF MODE276,REF MODE485) MODE466 */

A_PROCEDURE(A68_VOID ,A68t510,(struct A68t267 *,struct A68t485 *,struct A68t467 *),(struct A68t267 *,struct A68t485 *,struct A68t467 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(REF MODE267,REF MODE485) MODE467 */

A_PROCEDURE(A68_VOID ,A68t511,(struct A68t268 *,struct A68t485 *,struct A68t468 *),(struct A68t268 *,struct A68t485 *,struct A68t468 *,void *));
typedef struct A68t511  A68_511 ;    /* PROC(REF MODE268,REF MODE485) MODE468 */

A_PROCEDURE(A68_VOID ,A68t512,(struct A68t206 *,struct A68t485 *,struct A68t469 *),(struct A68t206 *,struct A68t485 *,struct A68t469 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(REF MODE206,REF MODE485) MODE469 */

A_PROCEDURE(A68_VOID ,A68t513,(struct A68t269 *,struct A68t485 *,struct A68t470 *),(struct A68t269 *,struct A68t485 *,struct A68t470 *,void *));
typedef struct A68t513  A68_513 ;    /* PROC(REF MODE269,REF MODE485) MODE470 */

A_PROCEDURE(A68_VOID ,A68t514,(struct A68t290 *,struct A68t485 *,struct A68t471 *),(struct A68t290 *,struct A68t485 *,struct A68t471 *,void *));
typedef struct A68t514  A68_514 ;    /* PROC(REF MODE290,REF MODE485) MODE471 */

A_PROCEDURE(A68_VOID ,A68t515,(struct A68t280 ,struct A68t485 *,struct A68t472 *),(struct A68t280 ,struct A68t485 *,struct A68t472 *,void *));
typedef struct A68t515  A68_515 ;    /* PROC(MODE280,REF MODE485) MODE472 */

A_PROCEDURE(A68_VOID ,A68t516,(struct A68t279 *,struct A68t485 *,struct A68t473 *),(struct A68t279 *,struct A68t485 *,struct A68t473 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(REF MODE279,REF MODE485) MODE473 */

A_PROCEDURE(A68_VOID ,A68t517,(struct A68t270 *,struct A68t485 *,struct A68t474 *),(struct A68t270 *,struct A68t485 *,struct A68t474 *,void *));
typedef struct A68t517  A68_517 ;    /* PROC(REF MODE270,REF MODE485) MODE474 */

A_PROCEDURE(A68_VOID ,A68t518,(struct A68t271 *,struct A68t485 *,struct A68t475 *),(struct A68t271 *,struct A68t485 *,struct A68t475 *,void *));
typedef struct A68t518  A68_518 ;    /* PROC(REF MODE271,REF MODE485) MODE475 */

A_PROCEDURE(A68_VOID ,A68t519,(struct A68t275 *,struct A68t485 *,struct A68t476 *),(struct A68t275 *,struct A68t485 *,struct A68t476 *,void *));
typedef struct A68t519  A68_519 ;    /* PROC(REF MODE275,REF MODE485) MODE476 */

A_PROCEDURE(A68_VOID ,A68t520,(struct A68t262 ,struct A68t485 *,struct A68t477 *),(struct A68t262 ,struct A68t485 *,struct A68t477 *,void *));
typedef struct A68t520  A68_520 ;    /* PROC(MODE262,REF MODE485) MODE477 */

A_PROCEDURE(A68_VOID ,A68t521,(struct A68t261 *,struct A68t485 *,struct A68t478 *),(struct A68t261 *,struct A68t485 *,struct A68t478 *,void *));
typedef struct A68t521  A68_521 ;    /* PROC(REF MODE261,REF MODE485) MODE478 */

A_PROCEDURE(A68_VOID ,A68t522,(struct A68t208 ,struct A68t485 *,struct A68t479 *),(struct A68t208 ,struct A68t485 *,struct A68t479 *,void *));
typedef struct A68t522  A68_522 ;    /* PROC(MODE208,REF MODE485) MODE479 */

A_PROCEDURE(A68_VOID ,A68t523,(struct A68t319 ,struct A68t485 *,struct A68t480 *),(struct A68t319 ,struct A68t485 *,struct A68t480 *,void *));
typedef struct A68t523  A68_523 ;    /* PROC(MODE319,REF MODE485) MODE480 */

A_PROCEDURE(A68_VOID ,A68t524,(struct A68t204 ,struct A68t485 *,struct A68t481 *),(struct A68t204 ,struct A68t485 *,struct A68t481 *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(REF MODE204,REF MODE485) MODE481 */

A_PROCEDURE(A68_VOID ,A68t525,(struct A68t203 *,struct A68t485 *,struct A68t482 *),(struct A68t203 *,struct A68t485 *,struct A68t482 *,void *));
typedef struct A68t525  A68_525 ;    /* PROC(REF MODE203,REF MODE485) MODE482 */

A_PROCEDURE(A68_VOID ,A68t526,(struct A68t196 ,struct A68t485 *,struct A68t483 *),(struct A68t196 ,struct A68t485 *,struct A68t483 *,void *));
typedef struct A68t526  A68_526 ;    /* PROC(MODE196,REF MODE485) MODE483 */

A_PROCEDURE(A68_VOID ,A68t527,(struct A68t192 *,struct A68t485 *,struct A68t97 ,struct A68t484 *),(struct A68t192 *,struct A68t485 *,struct A68t97 ,struct A68t484 *,void *));
typedef struct A68t527  A68_527 ;    /* PROC(REF MODE192,REF MODE485,MODE97) MODE484 */
struct A68t485{
struct A68t486  Attr;
struct A68t487  Attrstr;
struct A68t488  Attrdec;
struct A68t489  Formula;
struct A68t490  Formulas;
struct A68t491  Intdec;
struct A68t492  Range;
struct A68t493  Formularange;
struct A68t494  Tstr;
struct A68t495  Type;
struct A68t496  Alternative;
struct A68t497  Alternatives;
struct A68t498  Typebody;
struct A68t499  Typedec;
struct A68t500  Constdec;
struct A68t501  Ualts;
struct A68t502  Ustr;
struct A68t503  Uchoices;
struct A68t504  Unit;
struct A68t505  Mparam;
struct A68t506  Macparams;
struct A68t507  Instance;
struct A68t508  Declaration;
struct A68t509  Printitems;
struct A68t510  Print;
struct A68t511  Fault;
struct A68t512  Names;
struct A68t513  Let;
struct A68t514  Seqchoices;
struct A68t515  Seqstep;
struct A68t516  Sequence;
struct A68t517  Make;
struct A68t518  Join;
struct A68t519  Joins;
struct A68t520  Step;
struct A68t521  Series;
struct A68t522  Fnbody;
struct A68t523  Macspec;
struct A68t524  Macspecs;
struct A68t525  Fndec;
struct A68t526  Outer;
struct A68t527  Closure;
struct A68t485 * Rest;
};
typedef struct A68t485  A68_485 ;    /* STRUCT(MODE486,MODE487,MODE488,MODE489,MODE490,MODE491,MODE492,MODE493,MODE494,MODE495,MODE496,MODE497,MODE498,MODE499,MODE500,MODE501,MODE502,MODE503,MODE504,MODE505,MODE506,MODE507,MODE508,MODE509,MODE510,MODE511,MODE512,MODE513,MODE514,MODE515,MODE516,MODE517,MODE518,MODE519,MODE520,MODE521,MODE522,MODE523,MODE524,MODE525,MODE526,MODE527,REF MODE485)  */
struct A68t529 ;

A_PROCEDURE(struct A68t485 *,A68t528,(struct A68t485 *,struct A68t529 ),(struct A68t485 *,struct A68t529 ,void *));
typedef struct A68t528  A68_528 ;    /* PROC(REF MODE485,MODE529) REF MODE485 */
A_VECTOR(struct A68t530 ,A68t529);
typedef struct A68t529  A68_529 ;    /* VECTOR [] MODE530 */
struct A68t530 { A68_INT mode; union {
struct A68t486  mode1;
struct A68t487  mode2;
struct A68t488  mode3;
struct A68t489  mode4;
struct A68t490  mode5;
struct A68t491  mode6;
struct A68t492  mode7;
struct A68t493  mode8;
struct A68t494  mode9;
struct A68t495  mode10;
struct A68t496  mode11;
struct A68t497  mode12;
struct A68t498  mode13;
struct A68t499  mode14;
struct A68t500  mode15;
struct A68t501  mode16;
struct A68t502  mode17;
struct A68t503  mode18;
struct A68t504  mode19;
struct A68t505  mode20;
struct A68t506  mode21;
struct A68t507  mode22;
struct A68t508  mode23;
struct A68t509  mode24;
struct A68t510  mode25;
struct A68t511  mode26;
struct A68t512  mode27;
struct A68t513  mode28;
struct A68t514  mode29;
struct A68t515  mode30;
struct A68t516  mode31;
struct A68t517  mode32;
struct A68t518  mode33;
struct A68t519  mode34;
struct A68t520  mode35;
struct A68t521  mode36;
struct A68t522  mode37;
struct A68t523  mode38;
struct A68t524  mode39;
struct A68t525  mode40;
struct A68t526  mode41;
struct A68t527  mode42;
} data; };
typedef struct A68t530  A68_530 ;    /* UNION(MODE486,MODE487,MODE488,MODE489,MODE490,MODE491,MODE492,MODE493,MODE494,MODE495,MODE496,MODE497,MODE498,MODE499,MODE500,MODE501,MODE502,MODE503,MODE504,MODE505,MODE506,MODE507,MODE508,MODE509,MODE510,MODE511,MODE512,MODE513,MODE514,MODE515,MODE516,MODE517,MODE518,MODE519,MODE520,MODE521,MODE522,MODE523,MODE524,MODE525,MODE526,MODE527)  */

A_PROCEDURE(A68_VOID ,A68t531,(struct A68t485 *),(struct A68t485 *,void *));
typedef struct A68t531  A68_531 ;    /* PROC(REF MODE485) VOID */

A_PROCEDURE(A68_VOID ,A68t532,(struct A68t192 *,struct A68t97 ,struct A68t484 *),(struct A68t192 *,struct A68t97 ,struct A68t484 *,void *));
typedef struct A68t532  A68_532 ;    /* PROC(REF MODE192,MODE97) MODE484 */

A_PROCEDURE(A68_VOID ,A68t533,(struct A68t192 *,struct A68t318 *,A68_BOOL ,struct A68t97 ,struct A68t484 *),(struct A68t192 *,struct A68t318 *,A68_BOOL ,struct A68t97 ,struct A68t484 *,void *));
typedef struct A68t533  A68_533 ;    /* PROC(REF MODE192,REF MODE318,BOOL,MODE97) MODE484 */

A_PROCEDURE(A68_VOID ,A68t534,(struct A68t192 *,struct A68t111 ,struct A68t97 ,struct A68t484 *),(struct A68t192 *,struct A68t111 ,struct A68t97 ,struct A68t484 *,void *));
typedef struct A68t534  A68_534 ;    /* PROC(REF MODE192,MODE111,MODE97) MODE484 */

A_PROCEDURE(A68_VOID ,A68t535,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t535  A68_535 ;    /* PROC MODE111 */

A_PROCEDURE(A68_VOID ,A68t536,(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,struct A68t483 *),(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,struct A68t483 *,void *));
typedef struct A68t536  A68_536 ;    /* PROC(MODE196,REF MODE192,MODE111,MODE97) MODE483 */
struct A68t537{
A68_INT  Token;
A_PAD_INT(PAD_179)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_180)
};
typedef struct A68t537  A68_537 ;    /* STRUCT(INT,BOOL)  */
struct A68t539{
A68_INT  Index;
A_PAD_INT(PAD_181)
A68_INT  Count;
A_PAD_INT(PAD_182)
};
typedef struct A68t539  A68_539 ;    /* STRUCT(INT,INT)  */
struct A68t538 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t537  mode3;
struct A68t539  mode4;
} data; };
typedef struct A68t538  A68_538 ;    /* UNION(INT,MODE26,MODE537,MODE539)  */
struct A68t540{
struct A68t192 * Closure;
struct A68t102  Head_data;
};
typedef struct A68t540  A68_540 ;    /* STRUCT(REF MODE192,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t542,(struct A68t175 ,struct A68t97 ,struct A68t538 *),(struct A68t175 ,struct A68t97 ,struct A68t538 *,void *));
typedef struct A68t542  A68_542 ;    /* PROC(MODE175,MODE97) MODE538 */
struct A68t541{
struct A68t175  Getchar;
struct A68t542  Initem;
struct A68t543 * Ids_lookup;
};
typedef struct A68t541  A68_541 ;    /* STRUCT(MODE175,MODE542,REF REF MODE543)  */
A_VECTOR(struct A68t102 ,A68t543);
typedef struct A68t543  A68_543 ;    /* VECTOR [] REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t545,(struct A68t538 ,struct A68t36 ,struct A68t97 ),(struct A68t538 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t545  A68_545 ;    /* PROC(MODE538,MODE36,MODE97) VOID */
struct A68t544{
struct A68t36  Putstring;
struct A68t545  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_183)
};
typedef struct A68t544  A68_544 ;    /* STRUCT(MODE36,MODE545,BOOL)  */

A_PROCEDURE(A68_INT ,A68t546,(struct A68t541 ,struct A68t97 ),(struct A68t541 ,struct A68t97 ,void *));
typedef struct A68t546  A68_546 ;    /* PROC(MODE541,MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t547,(struct A68t541 ,struct A68t97 ),(struct A68t541 ,struct A68t97 ,void *));
typedef struct A68t547  A68_547 ;    /* PROC(MODE541,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t548,(struct A68t541 ,struct A68t97 ,struct A68t537 *),(struct A68t541 ,struct A68t97 ,struct A68t537 *,void *));
typedef struct A68t548  A68_548 ;    /* PROC(MODE541,MODE97) MODE537 */

A_PROCEDURE(A68_VOID ,A68t549,(struct A68t541 ,struct A68t97 ,A68_VC *),(struct A68t541 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t549  A68_549 ;    /* PROC(MODE541,MODE97) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t550,(struct A68t541 ,struct A68t97 ),(struct A68t541 ,struct A68t97 ,void *));
typedef struct A68t550  A68_550 ;    /* PROC(MODE541,MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t551,(struct A68t541 ,struct A68t97 ,A68_VC *),(struct A68t541 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t551  A68_551 ;    /* PROC(MODE541,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t552,(A68_CHAR ,struct A68t544 ,struct A68t97 ),(A68_CHAR ,struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t552  A68_552 ;    /* PROC(CHAR,MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t553,(A68_INT ,struct A68t544 ,struct A68t97 ),(A68_INT ,struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t553  A68_553 ;    /* PROC(INT,MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t554,(A68_VC ,struct A68t544 ,struct A68t97 ),(A68_VC ,struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t554  A68_554 ;    /* PROC(REF MODE26,MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t555,(A68_INT ,A68_BOOL ,struct A68t544 ,struct A68t97 ),(A68_INT ,A68_BOOL ,struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t555  A68_555 ;    /* PROC(INT,BOOL,MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t556,(A68_BOOL ,struct A68t544 ,struct A68t97 ),(A68_BOOL ,struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t556  A68_556 ;    /* PROC(BOOL,MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t557,(struct A68t175 ,struct A68t97 ,struct A68t541 *),(struct A68t175 ,struct A68t97 ,struct A68t541 *,void *));
typedef struct A68t557  A68_557 ;    /* PROC(MODE175,MODE97) MODE541 */

A_PROCEDURE(A68_VOID ,A68t558,(struct A68t541 ,struct A68t97 ,struct A68t540 *),(struct A68t541 ,struct A68t97 ,struct A68t540 *,void *));
typedef struct A68t558  A68_558 ;    /* PROC(MODE541,MODE97) MODE540 */

A_PROCEDURE(A68_VOID ,A68t559,(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t544 *),(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t544 *,void *));
typedef struct A68t559  A68_559 ;    /* PROC(MODE36,BOOL,BOOL,MODE97) MODE544 */

A_PROCEDURE(A68_VOID ,A68t560,(struct A68t540 ,struct A68t544 ,struct A68t97 ),(struct A68t540 ,struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t560  A68_560 ;    /* PROC(MODE540,MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t561,(struct A68t544 ,struct A68t97 ),(struct A68t544 ,struct A68t97 ,void *));
typedef struct A68t561  A68_561 ;    /* PROC(MODE544,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t562,(struct A68t192 *,struct A68t54 ,struct A68t97 ,struct A68t484 *),(struct A68t192 *,struct A68t54 ,struct A68t97 ,struct A68t484 *,void *));
typedef struct A68t562  A68_562 ;    /* PROC(REF MODE192,REF MODE54,MODE97) MODE484 */

A_PROCEDURE(A68_VOID ,A68t563,(struct A68t193 *,struct A68t97 ),(struct A68t193 *,struct A68t97 ,void *));
typedef struct A68t563  A68_563 ;    /* PROC(REF MODE193,MODE97) VOID */

A_PROCEDURE(struct A68t196 *,A68t564,(struct A68t196 *),(struct A68t196 *,void *));
typedef struct A68t564  A68_564 ;    /* PROC(REF MODE196) REF MODE196 */

A_PROCEDURE(A68_VOID ,A68t565,(A68_BOOL ,struct A68t53 *),(A68_BOOL ,struct A68t53 *,void *));
typedef struct A68t565  A68_565 ;    /* PROC(BOOL) MODE53 */

A_PROCEDURE(A68_BOOL ,A68t566,(struct A68t53 ,A68_INT ),(struct A68t53 ,A68_INT ,void *));
typedef struct A68t566  A68_566 ;    /* PROC(MODE53,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t567,(struct A68t53 ,A68_INT ,struct A68t53 *),(struct A68t53 ,A68_INT ,struct A68t53 *,void *));
typedef struct A68t567  A68_567 ;    /* PROC(REF MODE53,INT) REF MODE53 */

A_PROCEDURE(A68_VOID ,A68t568,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t568  A68_568 ;    /* PROC MODE53 */

A_PROCEDURE(A68_VOID ,A68t569,(struct A68t32 ,struct A68t53 *),(struct A68t32 ,struct A68t53 *,void *));
typedef struct A68t569  A68_569 ;    /* PROC(MODE32) MODE53 */

A_PROCEDURE(A68_VOID ,A68t570,(struct A68t196 ,struct A68t187 ,A68_INT ,struct A68t53 ,struct A68t111 ,struct A68t97 ),(struct A68t196 ,struct A68t187 ,A68_INT ,struct A68t53 ,struct A68t111 ,struct A68t97 ,void *));
typedef struct A68t570  A68_570 ;    /* PROC(MODE196,MODE187,INT,MODE53,MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t571,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t571  A68_571 ;    /* PROC(MODE152) VOID */

A_PROCEDURE(A68_VOID ,A68t572,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t572  A68_572 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t573);
typedef struct A68t573  A68_573 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t574);
typedef struct A68t574  A68_574 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_BOOL ,A68t575,(struct A68t192 *,struct A68t97 ),(struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t575  A68_575 ;    /* PROC(REF MODE192,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,15,A68t576);
typedef struct A68t576  A68_576 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t577);
typedef struct A68t577  A68_577 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t578);
typedef struct A68t578  A68_578 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t579);
typedef struct A68t579  A68_579 ;    /* STRUCT 13 CHAR */
struct A68t580{
struct A68t192 * Closure;
struct A68t580 * Rest;
};
typedef struct A68t580  A68_580 ;    /* STRUCT(REF MODE192,REF MODE580)  */
struct A68t581{
A68_VC  Name;
A68_INT  N;
A_PAD_INT(PAD_184)
};
typedef struct A68t581  A68_581 ;    /* STRUCT(REF MODE26,INT)  */
A_VECTOR(struct A68t581 ,A68t583);
typedef struct A68t583  A68_583 ;    /* VECTOR [] MODE581 */
struct A68t582{
A68_INT  Count;
A_PAD_INT(PAD_185)
A68_VC  Name;
A68_INT  Sort;
A_PAD_INT(PAD_186)
A68_INT  Cpu_time;
A_PAD_INT(PAD_187)
A68_INT  Status;
A_PAD_INT(PAD_188)
A68_INT  Type;
A_PAD_INT(PAD_189)
struct A68t32  Options;
struct A68t583  Fns;
struct A68t582 * Rest;
};
typedef struct A68t582  A68_582 ;    /* STRUCT(INT,REF MODE26,INT,INT,INT,INT,REF MODE32,REF MODE583,REF MODE582)  */

A_PROCEDURE(A68_VOID ,A68t584,(A68_BOOL ,struct A68t583 *),(A68_BOOL ,struct A68t583 *,void *));
typedef struct A68t584  A68_584 ;    /* PROC(BOOL) MODE583 */
#define A68_585  A68_VC 
#define A68t585 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_586  A68_46 
#define A68t586 A68t46            /* FLEX VECTOR [] MODE585 */

A_PROCEDURE(A68_VOID ,A68t587,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t587  A68_587 ;    /* PROC(BOOL) MODE102 */
A_ISTRUCT(A68_CHAR ,21,A68t588);
typedef struct A68t588  A68_588 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t589);
typedef struct A68t589  A68_589 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t590,(struct A68t582 *,A68_VC *),(struct A68t582 *,A68_VC *,void *));
typedef struct A68t590  A68_590 ;    /* PROC(REF MODE582) REF MODE26 */
A_ISTRUCT(struct A68t52 ,4,A68t591);
typedef struct A68t591  A68_591 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,10,A68t592);
typedef struct A68t592  A68_592 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t593);
typedef struct A68t593  A68_593 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,2,A68t594);
typedef struct A68t594  A68_594 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t595);
typedef struct A68t595  A68_595 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,19,A68t596);
typedef struct A68t596  A68_596 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t597);
typedef struct A68t597  A68_597 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t598);
typedef struct A68t598  A68_598 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t599);
typedef struct A68t599  A68_599 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t600);
typedef struct A68t600  A68_600 ;    /* STRUCT 7 MODE52 */
A_ISTRUCT(A68_CHAR ,11,A68t601);
typedef struct A68t601  A68_601 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_VC ,3,A68t602);
typedef struct A68t602  A68_602 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t603);
typedef struct A68t603  A68_603 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_VC ,6,A68t604);
typedef struct A68t604  A68_604 ;    /* STRUCT 6 MODE26 */

A_PROCEDURE(A68_VOID ,A68t605,(struct A68t582 *),(struct A68t582 *,void *));
typedef struct A68t605  A68_605 ;    /* PROC(REF MODE582) VOID */
A_ISTRUCT(A68_CHAR ,29,A68t606);
typedef struct A68t606  A68_606 ;    /* STRUCT 29 CHAR */
struct A68t607{
A68_VC  Id;
A68_INT  Contextno;
A_PAD_INT(PAD_190)
};
typedef struct A68t607  A68_607 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t608,(struct A68t196 ,struct A68t607 *),(struct A68t196 ,struct A68t607 *,void *));
typedef struct A68t608  A68_608 ;    /* PROC(MODE196) MODE607 */

A_PROCEDURE(struct A68t193 *,A68t609,(struct A68t363 ,struct A68t192 *,struct A68t97 ),(struct A68t363 ,struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t609  A68_609 ;    /* PROC(REF MODE363,REF MODE192,MODE97) REF MODE193 */
struct A68t610{
struct A68t111  Options;
struct A68t32  Options_record;
};
typedef struct A68t610  A68_610 ;    /* STRUCT(MODE111,REF MODE32)  */

A_PROCEDURE(A68_VOID ,A68t611,(struct A68t46 ,struct A68t363 ,struct A68t97 ,struct A68t610 *),(struct A68t46 ,struct A68t363 ,struct A68t97 ,struct A68t610 *,void *));
typedef struct A68t611  A68_611 ;    /* PROC(MODE46,REF MODE363,MODE97) MODE610 */
A_ISTRUCT(A68_CHAR ,38,A68t612);
typedef struct A68t612  A68_612 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t613);
typedef struct A68t613  A68_613 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t614,(A68_BOOL ,struct A68t363 ,struct A68t192 *,struct A68t570 ,struct A68t97 ),(A68_BOOL ,struct A68t363 ,struct A68t192 *,struct A68t570 ,struct A68t97 ,void *));
typedef struct A68t614  A68_614 ;    /* PROC(BOOL,REF MODE363,REF MODE192,MODE570,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t615,(struct A68t196 ,struct A68t111 ,struct A68t97 ),(struct A68t196 ,struct A68t111 ,struct A68t97 ,void *));
typedef struct A68t615  A68_615 ;    /* PROC(MODE196,MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t616,(struct A68t363 ,struct A68t192 *,A68_BOOL ,struct A68t97 ),(struct A68t363 ,struct A68t192 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t616  A68_616 ;    /* PROC(REF MODE363,REF MODE192,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,41,A68t617);
typedef struct A68t617  A68_617 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,80,A68t618);
typedef struct A68t618  A68_618 ;    /* STRUCT 80 CHAR */
A_ISTRUCT(A68_CHAR ,78,A68t619);
typedef struct A68t619  A68_619 ;    /* STRUCT 78 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t620);
typedef struct A68t620  A68_620 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t621);
typedef struct A68t621  A68_621 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t622);
typedef struct A68t622  A68_622 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_INT ,5,A68t623);
typedef struct A68t623  A68_623 ;    /* STRUCT 5 INT */

A_PROCEDURE(A68_VOID ,A68t624,(struct A68t209 *),(struct A68t209 *,void *));
typedef struct A68t624  A68_624 ;    /* PROC(REF MODE209) VOID */
A_ISTRUCT(A68_CHAR ,6,A68t625);
typedef struct A68t625  A68_625 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,12,A68t626);
typedef struct A68t626  A68_626 ;    /* STRUCT 12 MODE52 */
A_ISTRUCT(A68_CHAR ,33,A68t627);
typedef struct A68t627  A68_627 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t628);
typedef struct A68t628  A68_628 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t629,(struct A68t582 **,struct A68t97 ),(struct A68t582 **,struct A68t97 ,void *));
typedef struct A68t629  A68_629 ;    /* PROC(REF REF MODE582,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t630);
typedef struct A68t630  A68_630 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t52 ,8,A68t631);
typedef struct A68t631  A68_631 ;    /* STRUCT 8 MODE52 */

A_PROCEDURE(A68_VOID ,A68t632,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t632  A68_632 ;    /* PROC(REF MODE192) VOID */
struct A68t633 { A68_INT mode; union {
struct A68t532  mode1;
struct A68t534  mode2;
} data; };
typedef struct A68t633  A68_633 ;    /* UNION(MODE532,MODE534)  */

A_PROCEDURE(A68_VOID ,A68t634,(struct A68t196 ,struct A68t192 *,struct A68t97 ,struct A68t483 *),(struct A68t196 ,struct A68t192 *,struct A68t97 ,struct A68t483 *,void *));
typedef struct A68t634  A68_634 ;    /* PROC(MODE196,REF MODE192,MODE97) MODE483 */
struct A68t635 { A68_INT mode; union {
struct A68t634  mode1;
struct A68t536  mode2;
A68_BOOL  mode3;
} data; };
typedef struct A68t635  A68_635 ;    /* UNION(MODE634,MODE536,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t636,(struct A68t633 ,struct A68t635 ,A68_INT ,A68_VC ,struct A68t46 ,struct A68t363 ,struct A68t97 ),(struct A68t633 ,struct A68t635 ,A68_INT ,A68_VC ,struct A68t46 ,struct A68t363 ,struct A68t97 ,void *));
typedef struct A68t636  A68_636 ;    /* PROC(MODE633,MODE635,INT,MODE26,MODE46,REF MODE363,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,39,A68t637);
typedef struct A68t637  A68_637 ;    /* STRUCT 39 CHAR */
A_VECTOR(struct A68t196 *,A68t638);
typedef struct A68t638  A68_638 ;    /* VECTOR [] REF MODE196 */

A_PROCEDURE(A68_VOID ,A68t639,(A68_BOOL ,struct A68t638 *),(A68_BOOL ,struct A68t638 *,void *));
typedef struct A68t639  A68_639 ;    /* PROC(BOOL) MODE638 */
A_ISTRUCT(A68_CHAR ,14,A68t640);
typedef struct A68t640  A68_640 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t641);
typedef struct A68t641  A68_641 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(struct A68t52 ,10,A68t642);
typedef struct A68t642  A68_642 ;    /* STRUCT 10 MODE52 */
A_ISTRUCT(A68_CHAR ,76,A68t643);
typedef struct A68t643  A68_643 ;    /* STRUCT 76 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t644);
typedef struct A68t644  A68_644 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t645);
typedef struct A68t645  A68_645 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t646);
typedef struct A68t646  A68_646 ;    /* STRUCT 46 CHAR */

A_PROCEDURE(A68_VOID ,A68t647,(struct A68t46 ,A68_VC ,A68_VC ,A68_BOOL ,A68_VC ,struct A68t102 *),(struct A68t46 ,A68_VC ,A68_VC ,A68_BOOL ,A68_VC ,struct A68t102 *,void *));
typedef struct A68t647  A68_647 ;    /* PROC(MODE46,MODE26,MODE26,BOOL,MODE26) REF MODE102 */
A_ISTRUCT(A68_CHAR ,50,A68t648);
typedef struct A68t648  A68_648 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,77,A68t649);
typedef struct A68t649  A68_649 ;    /* STRUCT 77 CHAR */
A_ISTRUCT(A68_CHAR ,129,A68t650);
typedef struct A68t650  A68_650 ;    /* STRUCT 129 CHAR */
A_ISTRUCT(struct A68t52 ,13,A68t651);
typedef struct A68t651  A68_651 ;    /* STRUCT 13 MODE52 */

A_PROCEDURE(struct A68t389 *,A68t652,(A68_VC ,A68_VC ,struct A68t46 ,A68_BOOL ,A68_VC ,struct A68t387 ),(A68_VC ,A68_VC ,struct A68t46 ,A68_BOOL ,A68_VC ,struct A68t387 ,void *));
typedef struct A68t652  A68_652 ;    /* PROC(MODE26,MODE26,MODE46,BOOL,MODE26,MODE387) REF MODE389 */
A_ISTRUCT(struct A68t361 ,2,A68t653);
typedef struct A68t653  A68_653 ;    /* STRUCT 2 MODE361 */

A_PROCEDURE(A68_VOID ,A68t654,(struct A68t32 ,struct A68t363 *),(struct A68t32 ,struct A68t363 *,void *));
typedef struct A68t654  A68_654 ;    /* PROC(MODE32) REF MODE363 */

A_PROCEDURE(A68_VOID ,A68t655,(A68_BOOL ,struct A68t363 *),(A68_BOOL ,struct A68t363 *,void *));
typedef struct A68t655  A68_655 ;    /* PROC(BOOL) MODE363 */
A_ISTRUCT(A68_CHAR ,8,A68t656);
typedef struct A68t656  A68_656 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,107,A68t657);
typedef struct A68t657  A68_657 ;    /* STRUCT 107 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t658);
typedef struct A68t658  A68_658 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,62,A68t659);
typedef struct A68t659  A68_659 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t660);
typedef struct A68t660  A68_660 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,60,A68t661);
typedef struct A68t661  A68_661 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(A68_VOID ,A68t662,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t662  A68_662 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(struct A68t192 *,A68t663,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t663  A68_663 ;    /* PROC(MODE26,MODE97) REF MODE192 */
A_ISTRUCT(A68_VC ,2,A68t664);
typedef struct A68t664  A68_664 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t665,(struct A68t192 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t192 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t665  A68_665 ;    /* PROC(REF MODE192,MODE26,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t666);
typedef struct A68t666  A68_666 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_VC ,5,A68t667);
typedef struct A68t667  A68_667 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_VC ,4,A68t668);
typedef struct A68t668  A68_668 ;    /* STRUCT 4 MODE26 */

A_PROCEDURE(A68_VOID ,A68t669,(struct A68t392 ,A68_BOOL ,struct A68t387 ,struct A68t387 ,struct A68t392 *),(struct A68t392 ,A68_BOOL ,struct A68t387 ,struct A68t387 ,struct A68t392 *,void *));
typedef struct A68t669  A68_669 ;    /* PROC(REF MODE392,BOOL,MODE387,MODE387) REF MODE392 */
A_ISTRUCT(A68_CHAR ,123,A68t670);
typedef struct A68t670  A68_670 ;    /* STRUCT 123 CHAR */
A_ISTRUCT(A68_CHAR ,190,A68t671);
typedef struct A68t671  A68_671 ;    /* STRUCT 190 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t672);
typedef struct A68t672  A68_672 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(struct A68t388 ,2,A68t673);
typedef struct A68t673  A68_673 ;    /* STRUCT 2 MODE388 */
A_ISTRUCT(A68_CHAR ,61,A68t674);
typedef struct A68t674  A68_674 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(struct A68t388 ,3,A68t675);
typedef struct A68t675  A68_675 ;    /* STRUCT 3 MODE388 */
A_ISTRUCT(A68_CHAR ,69,A68t676);
typedef struct A68t676  A68_676 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t677);
typedef struct A68t677  A68_677 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,122,A68t678);
typedef struct A68t678  A68_678 ;    /* STRUCT 122 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t679);
typedef struct A68t679  A68_679 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,63,A68t680);
typedef struct A68t680  A68_680 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_INT ,3,A68t681);
typedef struct A68t681  A68_681 ;    /* STRUCT 3 INT */
A_ISTRUCT(struct A68t388 ,7,A68t682);
typedef struct A68t682  A68_682 ;    /* STRUCT 7 MODE388 */
A_ISTRUCT(A68_CHAR ,26,A68t683);
typedef struct A68t683  A68_683 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t684);
typedef struct A68t684  A68_684 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t685);
typedef struct A68t685  A68_685 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,216,A68t686);
typedef struct A68t686  A68_686 ;    /* STRUCT 216 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t687);
typedef struct A68t687  A68_687 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t688);
typedef struct A68t688  A68_688 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,175,A68t689);
typedef struct A68t689  A68_689 ;    /* STRUCT 175 CHAR */
A_ISTRUCT(A68_CHAR ,282,A68t690);
typedef struct A68t690  A68_690 ;    /* STRUCT 282 CHAR */
A_ISTRUCT(A68_CHAR ,329,A68t691);
typedef struct A68t691  A68_691 ;    /* STRUCT 329 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t692);
typedef struct A68t692  A68_692 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t693);
typedef struct A68t693  A68_693 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t694);
typedef struct A68t694  A68_694 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,105,A68t695);
typedef struct A68t695  A68_695 ;    /* STRUCT 105 CHAR */
A_ISTRUCT(A68_CHAR ,166,A68t696);
typedef struct A68t696  A68_696 ;    /* STRUCT 166 CHAR */
A_ISTRUCT(A68_CHAR ,68,A68t697);
typedef struct A68t697  A68_697 ;    /* STRUCT 68 CHAR */
A_ISTRUCT(A68_CHAR ,74,A68t698);
typedef struct A68t698  A68_698 ;    /* STRUCT 74 CHAR */
A_ISTRUCT(A68_CHAR ,79,A68t699);
typedef struct A68t699  A68_699 ;    /* STRUCT 79 CHAR */
A_ISTRUCT(A68_CHAR ,188,A68t700);
typedef struct A68t700  A68_700 ;    /* STRUCT 188 CHAR */
A_ISTRUCT(A68_CHAR ,140,A68t701);
typedef struct A68t701  A68_701 ;    /* STRUCT 140 CHAR */
A_ISTRUCT(A68_CHAR ,116,A68t702);
typedef struct A68t702  A68_702 ;    /* STRUCT 116 CHAR */
A_ISTRUCT(A68_CHAR ,72,A68t703);
typedef struct A68t703  A68_703 ;    /* STRUCT 72 CHAR */
A_ISTRUCT(A68_CHAR ,137,A68t704);
typedef struct A68t704  A68_704 ;    /* STRUCT 137 CHAR */
A_ISTRUCT(A68_CHAR ,148,A68t705);
typedef struct A68t705  A68_705 ;    /* STRUCT 148 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t706);
typedef struct A68t706  A68_706 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t707);
typedef struct A68t707  A68_707 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,89,A68t708);
typedef struct A68t708  A68_708 ;    /* STRUCT 89 CHAR */
A_ISTRUCT(A68_CHAR ,420,A68t709);
typedef struct A68t709  A68_709 ;    /* STRUCT 420 CHAR */
A_ISTRUCT(A68_CHAR ,128,A68t710);
typedef struct A68t710  A68_710 ;    /* STRUCT 128 CHAR */
A_ISTRUCT(struct A68t388 ,48,A68t711);
typedef struct A68t711  A68_711 ;    /* STRUCT 48 MODE388 */
A_ISTRUCT(A68_CHAR ,52,A68t712);
typedef struct A68t712  A68_712 ;    /* STRUCT 52 CHAR */

A_PROCEDURE(A68_VOID ,A68t713,(struct A68t363 ,struct A68t97 ,struct A68t540 *),(struct A68t363 ,struct A68t97 ,struct A68t540 *,void *));
typedef struct A68t713  A68_713 ;    /* PROC(REF MODE363,MODE97) MODE540 */

A_PROCEDURE(A68_VOID ,A68t714,(struct A68t363 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t713 ,struct A68t561 ,struct A68t152 ,struct A68t575 ,struct A68t97 ),(struct A68t363 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t713 ,struct A68t561 ,struct A68t152 ,struct A68t575 ,struct A68t97 ,void *));
typedef struct A68t714  A68_714 ;    /* PROC(REF MODE363,BOOL,REF MODE26,REF MODE26,MODE713,MODE561,MODE152,MODE575,MODE97) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from simple_layout --- */
extern A68_VOID  DFBATRN_no_indicators(A68_53 *);
extern A68_VOID  TFRBTRN_simple_layout(struct A68t196 ,struct A68t187 ,A68_INT ,struct A68t53 ,struct A68t111 ,struct A68t97 );
extern A68_46  NINBTRN_write_ella_options;
/* --- End of imports from simple_layout --- */


/* --- Imports from kexpand --- */
extern A68_196 * GGMBTRN_expandtoatomic(struct A68t196 *);
/* --- End of imports from kexpand --- */


/* --- Imports from lets_transform --- */
extern A68_46  XYIBTRN_lets_options;
extern A68_VOID  BZIBTRN_lets_transform(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
/* --- End of imports from lets_transform --- */


/* --- Imports from assdiagnostics --- */
extern A68_VOID  WCIBTRN_assemble_diagnostics(struct A68t192 *,struct A68t54 ,struct A68t97 ,A68_484 *);
extern A68_VOID  MTIBTRN_monitoring_order(struct A68t193 *,struct A68t97 );
/* --- End of imports from assdiagnostics --- */


/* --- Imports from openinterface --- */
#define CQCATRN_packed_format A68_TRUE
#define DQCATRN_unpacked_format A68_FALSE
extern A68_VOID  IAGATRN_read_signature(struct A68t175 ,struct A68t97 ,A68_541 *);
extern A68_VOID  GPDATRN_read_closure(struct A68t541 ,struct A68t97 ,A68_540 *);
extern A68_VOID  FBGATRN_write_signature(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,A68_544 *);
extern A68_VOID  RLFATRN_write_closure(struct A68t540 ,struct A68t544 ,struct A68t97 );
extern A68_VOID  KCGATRN_finish_write_closure(struct A68t544 ,struct A68t97 );
/* --- End of imports from openinterface --- */


/* --- Imports from tstr_trow --- */
extern A68_VOID  DMQBTRN_transform_tstr_trow(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from tstr_trow --- */


/* --- Imports from flatten_unit --- */
extern A68_VOID  QBIBTRN_transform_flatten_unit(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from flatten_unit --- */


/* --- Imports from delay --- */
extern A68_VOID  GHHBTRN_transform_delay(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from delay --- */


/* --- Imports from cquery --- */
extern A68_VOID  QFHBTRN_transform_cquery(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from cquery --- */


/* --- Imports from associated --- */
extern A68_VOID  OCQBTRN_transform_associated(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from associated --- */


/* --- Imports from local --- */
extern A68_VOID  VSPBTRN_transform_local(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from local --- */


/* --- Imports from alias --- */
extern A68_VOID  ZQOBTRN_transform_alias(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from alias --- */


/* --- Imports from attribute --- */
extern A68_VOID  MSGBTRN_outer_attribute(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  DBHBTRN_transform_attribute(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
/* --- End of imports from attribute --- */


/* --- Imports from dinst --- */
extern A68_VOID  FPGBTRN_outer_dinst(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  ZQGBTRN_transform_dinst(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
/* --- End of imports from dinst --- */


/* --- Imports from range --- */
extern A68_VOID  BLGBTRN_outer_range(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  JNGBTRN_transform_range(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
/* --- End of imports from range --- */


/* --- Imports from elseof --- */
extern A68_VOID  BXFBTRN_outer_elseof(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  FJGBTRN_transform_elseof(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  BWFBTRN_elseof_options;
/* --- End of imports from elseof --- */


/* --- Imports from macparams --- */
extern A68_VOID  CSFBTRN_outerfn_macparams(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  VUFBTRN_transform_macparams(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  WRFBTRN_macparams_options;
/* --- End of imports from macparams --- */


/* --- Imports from reform --- */
extern A68_VOID  IIFBTRN_outer_reform(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  QQFBTRN_transform_reform(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  CIFBTRN_reform_options;
/* --- End of imports from reform --- */


/* --- Imports from multilets --- */
extern A68_VOID  OWEBTRN_outer_multilets(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  MGFBTRN_transform_multilets(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  OVEBTRN_multilets_options;
/* --- End of imports from multilets --- */


/* --- Imports from multimakes --- */
extern A68_VOID  XKEBTRN_outer_multimakes(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  YTEBTRN_transform_multimakes(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  JKEBTRN_multimakes_options;
/* --- End of imports from multimakes --- */


/* --- Imports from names --- */
extern A68_VOID  CVDBTRN_transform_names(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  PZCBTRN_names_options;
/* --- End of imports from names --- */


/* --- Imports from brackets_transform --- */
extern A68_VOID  NXLATRN_brackets_transform(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
/* --- End of imports from brackets_transform --- */


/* --- Imports from portname --- */
extern A68_VOID  EWCBTRN_transform_portnames(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from portname --- */


/* --- Imports from joins --- */
extern A68_VOID  IVBBTRN_outerfn_joins(struct A68t196 ,struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_483 *);
extern A68_VOID  FVCBTRN_transform_joins(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  JUBBTRN_joins_options;
/* --- End of imports from joins --- */


/* --- Imports from timescale --- */
extern A68_VOID  NQBBTRN_transform_timescale(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from timescale --- */


/* --- Imports from sequence --- */
extern A68_VOID  AUYATRN_transform_sequences(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from sequence --- */


/* --- Imports from fntype --- */
extern A68_VOID  HVVATRN_transform_fntypes(struct A68t192 *,struct A68t111 ,struct A68t97 ,A68_484 *);
extern A68_46  DVVATRN_fntype_options;
/* --- End of imports from fntype --- */


/* --- Imports from macro --- */
extern A68_VOID  CXQATRN_expand(struct A68t192 *,struct A68t318 *,A68_BOOL ,struct A68t97 ,A68_484 *);
/* --- End of imports from macro --- */


/* --- Imports from import --- */
extern A68_VOID  MIOATRN_transform_imports(struct A68t192 *,struct A68t97 ,A68_484 *);
/* --- End of imports from import --- */


/* --- Imports from transformprocs --- */
extern A68_VOID  OLJATRN_clear_tprocs(void);
/* --- End of imports from transformprocs --- */


/* --- Imports from closureprocs --- */
extern A68_192 * DPCATRN_copy_closure(struct A68t192 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from kernelreader --- */
extern A68_VC  JDFAOST_int_str;
extern A68_361  AHFAOST_int_syntax;
extern A68_BOOL  GHFAOST_is_int(struct A68t362 );
extern A68_INT  KHFAOST_get_int(struct A68t362 ,struct A68t97 );
extern A68_VC  CIFAOST_ident_str;
extern A68_361  IIFAOST_ident_syntax;
extern A68_BOOL  OIFAOST_is_ident(struct A68t362 );
extern A68_VOID  SIFAOST_get_ident(struct A68t362 ,struct A68t97 ,A68_VC *);
extern A68_VC  WIFAOST_fnname_str;
extern A68_361  CJFAOST_fnname_syntax;
extern A68_BOOL  HKFAOST_is_fnname(struct A68t362 );
extern A68_VOID  LKFAOST_get_fnname(struct A68t362 ,struct A68t97 ,A68_VC *);
extern A68_361  ALFAOST_name_syntax;
extern A68_VC  SKFAOST_declname_str;
extern A68_361  CLFAOST_declname_syntax;
extern A68_423  LLFAOST_is_declname;
extern A68_425  NLFAOST_get_declname;
extern A68_VC  BNFAOST_filename_str;
extern A68_361  HNFAOST_filename_syntax;
extern A68_BOOL  SNFAOST_is_filename(struct A68t362 );
extern A68_VOID  XNFAOST_get_filename(struct A68t362 ,A68_VC ,struct A68t97 ,A68_144 *);
extern A68_361  WPFAOST_contextname_syntax;
extern A68_361  YPFAOST_importname_syntax;
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t364 ,struct A68t97 );
extern A68_382  XMDAOST_normalaccess;
extern A68_382  BNDAOST_hiddenaccess;
extern A68_381  ZNDAOST_continue;
extern A68_381  DODAOST_return;
extern A68_VOID  ARDAOST_makecommands(struct A68t392 ,A68_392 *);
extern A68_390 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t382 ,struct A68t392 );
extern A68_391 * GTDAOST_make_compound(struct A68t389 *,A68_VC ,A68_VC *,struct A68t392 ,struct A68t392 ,struct A68t385 );
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_361  SRAAOST_noparameters;
extern A68_VOID  ATAAOST_prod(struct A68t360 ,A68_359 *);
extern A68_VOID  LTAAOST_opt(struct A68t361 ,A68_359 *);
extern A68_VOID  DUAAOST_star(struct A68t361 ,A68_359 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from variables --- */
#define YKCAOST_env_var 1
extern A68_VC  GLCAOST_true_var;
extern A68_VC  JLCAOST_false_var;
extern A68_VOID  QLCAOST_add_var(A68_VC ,A68_VC ,A68_INT ,struct A68t355 );
extern A68_VOID  LMCAOST_default_set_var(struct A68t354 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  FNCAOST_get_var(A68_VC ,A68_VC *);
extern A68_BOOL  SNCAOST_var_unset(A68_VC );
extern A68_VOID  TOCAOST_set_var(A68_VC ,A68_VC ,struct A68t97 );
/* --- End of imports from variables --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_330 * UAAATRN_nilattrdec;
extern A68_328 * VAAATRN_nilintdec;
extern A68_322 * WAAATRN_niltypedec;
extern A68_321 * XAAATRN_nilconstdec;
extern A68_203 * YAAATRN_nilfndec;
extern A68_209 * CBAATRN_nilusage;
extern A68_197 * GBAATRN_nilenviron;
extern A68_193 * HBAATRN_nilouters;
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from ptassem --- */
extern A68_VOID  ZDJATRN_pt_outer(struct A68t196 ,A68_INT );
extern A68_VOID  HHJATRN_pt_idstable(void);
/* --- End of imports from ptassem --- */


/* --- Imports from ioprocs --- */
extern A68_INT  QPGAOST_current_width(void);
extern A68_VOID  SNGAOST_banner(A68_VC );
/* --- End of imports from ioprocs --- */


/* --- Imports from basics --- */
extern A68_VOID  GEDAOST_time_str(A68_VC *);
extern A68_VC  YLDAOST_assfile_type;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
#define VPBAOSI_newline_char '\012'
extern A68_125  PNBAOSI_read_access;
extern A68_125  TNBAOSI_write_access;
extern A68_125  BOBAOSI_update_access;
extern A68_125  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_121 * FQBAOSI_open_file(A68_VC ,struct A68t125 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t121 *,struct A68t97 );
extern A68_VOID  HRBAOSI_read_buffer(struct A68t121 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t121 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_INT  IACAOSI_execute_os_command(A68_VC ,struct A68t97 );
extern A68_INT  ZACAOSI_get_cpu_time(void);
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_144 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_VOID  UEAAOST_facility(A68_VC *);
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
extern A68_VOID  IIAAOST_prompt(A68_VC ,A68_VC *);
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from testmode --- */
extern A68_111  OHBAOST_testmode;
extern A68_VOID  SIBAOST_testmode_file_name(struct A68t121 *,A68_VC *);
extern A68_INT  PIBAOST_testmode_seconds(A68_INT );
/* --- End of imports from testmode --- */


/* --- Imports from options --- */
extern A68_111 * OAAAOST_plusab(struct A68t111 *,struct A68t111 );
extern A68_BOOL  EBAAOST_(struct A68t111 ,struct A68t111 );
extern A68_BOOL  MBAAOST_includes(struct A68t111 ,struct A68t111 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_111 *);
extern A68_111  OCAAOST_null_options;
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_31  OFAAOSI_anonymous;
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  WHAAOSI_user;
extern A68_BOOL  PKAAOSI_sysfault_msg(struct A68t106 );
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_BOOL  ZKAAOSI_abort_msg(struct A68t106 );
extern A68_BOOL  ELAAOSI_cli_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  ZXAAOSL_intwidth(A68_INT ,A68_INT ,A68_57 *);
extern A68_VOID  XYAAOSL_after(A68_INT ,A68_62 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BQQBTRN(void);   /* simple_layout */
extern void KHLBTRN(void);   /* kexpand */
extern void MXIBTRN(void);   /* lets_transform */
extern void GCIBTRN(void);   /* assdiagnostics */
extern void TPCATRN(void);   /* openinterface */
extern void WLQBTRN(void);   /* tstr_trow */
extern void EJHBTRN(void);   /* flatten_unit */
extern void GGHBTRN(void);   /* delay */
extern void JCHBTRN(void);   /* cquery */
extern void NBQBTRN(void);   /* associated */
extern void LFPBTRN(void);   /* local */
extern void DQOBTRN(void);   /* alias */
extern void PRGBTRN(void);   /* attribute */
extern void ZNGBTRN(void);   /* dinst */
extern void VJGBTRN(void);   /* range */
extern void KVFBTRN(void);   /* elseof */
extern void FRFBTRN(void);   /* macparams */
extern void LHFBTRN(void);   /* reform */
extern void XUEBTRN(void);   /* multilets */
extern void YJEBTRN(void);   /* multimakes */
extern void HYCBTRN(void);   /* names */
extern void VWLATRN(void);   /* brackets_transform */
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
extern void TKCAOST(void);   /* variables */
extern void BAAATRN(void);   /* assmodes */
extern void NCGATRN(void);   /* ptassem */
extern void TIGAOST(void);   /* ioprocs */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void QFBAOST(void);   /* testmode */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_573   CIRBTRN = {"$Id: asscommands.a68,v 34.4 1995/03/29 13:02:49 ella Exp $"}; 
A_GISVEC(A68_VC ,DIRBTRN,CIRBTRN,58)
static A68_574   EIRBTRN = {"ELLA Transformer"}; 
A_GISVEC(A68_VC ,FIRBTRN,EIRBTRN,16)
static A68_VC  GIRBTRN_environment;
static A68_BOOL  HIRBTRN_assembled;
static A68_192 * IIRBTRN_assclosure;
static A68_561  MIRBTRN_write_closureseeds;
static A68_152  PIRBTRN_zero_ctnos;
static A68_575  WIRBTRN_check_sim_closure;
static A68_VC  CJRBTRN_lbn;
static A68_576   EJRBTRN = {"default_library"}; 
A_GISVEC(A68_VC ,FJRBTRN,EJRBTRN,15)
static A68_VC  HJRBTRN_ctn;
static A68_576   JJRBTRN = {"default_context"}; 
A_GISVEC(A68_VC ,KJRBTRN,JJRBTRN,15)
static A68_VC  MJRBTRN_library_name;
static A68_VC  NJRBTRN_context_name;
static A68_VC  OJRBTRN_assprompt;
#define QJRBTRN_null_closure (A68_192 *)A68_NIL
static A68_577   RJRBTRN = {"trace"}; 
A_GISVEC(A68_VC ,SJRBTRN,RJRBTRN,5)
static A68_VC  TJRBTRN_trace_var;
static A68_578   UJRBTRN = {"ELLASIM"}; 
A_GISVEC(A68_VC ,VJRBTRN,UJRBTRN,7)
static A68_VC  WJRBTRN_sim_var;
static A68_579   XJRBTRN = {"ELLATRANSFORM"}; 
A_GISVEC(A68_VC ,YJRBTRN,XJRBTRN,13)
static A68_VC  ZJRBTRN_external_var;
static A68_BOOL  AKRBTRN_gcmode;
static A68_BOOL  BKRBTRN_show_options;
#define CKRBTRN_stackend (A68_580 *)A68_NIL
static A68_INT  DKRBTRN_max_stack_size;
static A68_580 * EKRBTRN_stack;
#define FKRBTRN_nochange 0
#define GKRBTRN_normal 1
#define HKRBTRN_overwrites 2
#define IKRBTRN_corrupts 3
#define JKRBTRN_original 0
#define KKRBTRN_undone 1
#define LKRBTRN_cancelled 2
#define MKRBTRN_transtype 1
#define NKRBTRN_readtype 2
#define OKRBTRN_externtype 3
#define PKRBTRN_ignoretype 4
#define QKRBTRN_no_outer A68_FALSE
#define RKRBTRN_have_outer A68_TRUE
static A68_32  WKRBTRN_nulloptions;
static A68_583  CLRBTRN_nullouterfns;
static A68_46  NLRBTRN_no_options;
static A68_INT  OLRBTRN_history_count;
static A68_582  VLRBTRN_endhistory;
static A68_582 * WLRBTRN_history;
static A68_102  BMRBTRN_title_str;
static A68_588   HMRBTRN = {"garbage collecting..."}; 
A_GISVEC(A68_VC ,IMRBTRN,HMRBTRN,21)
static A68_574   XMRBTRN = {" has been undone"}; 
A_GISVEC(A68_VC ,YMRBTRN,XMRBTRN,16)
static A68_592   FNRBTRN = {"  options:"}; 
A_GISVEC(A68_VC ,GNRBTRN,FNRBTRN,10)
static A68_594   WNRBTRN = {"  "}; 
A_GISVEC(A68_VC ,XNRBTRN,WNRBTRN,2)
static A68_594   CORBTRN = {" ("}; 
A_GISVEC(A68_VC ,DORBTRN,CORBTRN,2)
static A68_594   OORBTRN = {"  "}; 
A_GISVEC(A68_VC ,PORBTRN,OORBTRN,2)
static A68_596   DPRBTRN = {" (No change made)  "}; 
A_GISVEC(A68_VC ,EPRBTRN,DPRBTRN,19)
static A68_594   HPRBTRN = {"  "}; 
A_GISVEC(A68_VC ,IPRBTRN,HPRBTRN,2)
static A68_597   LPRBTRN = {" (Closure overwritten)  "}; 
A_GISVEC(A68_VC ,MPRBTRN,LPRBTRN,24)
static A68_598   PPRBTRN = {" (Closure corrupted)  "}; 
A_GISVEC(A68_VC ,QPRBTRN,PPRBTRN,22)
static A68_599   YPRBTRN = {" cS"}; 
A_GISVEC(A68_VC ,ZPRBTRN,YPRBTRN,3)
static A68_601   LQRBTRN = {"external..."}; 
A_GISVEC(A68_VC ,NQRBTRN,LQRBTRN,11)
static A68_603   ARRBTRN = {""}; 
A_GISVEC(A68_VC ,BRRBTRN,ARRBTRN,0)
static A68_603   DRRBTRN = {""}; 
A_GISVEC(A68_VC ,ERRBTRN,DRRBTRN,0)
static A68_606   XRRBTRN = {" previous closures remembered"}; 
A_GISVEC(A68_VC ,YRRBTRN,XRRBTRN,29)
static A68_592   FURBTRN = {" not found"}; 
A_GISVEC(A68_VC ,GURBTRN,FURBTRN,10)
static A68_612   KVRBTRN = {"You must choose options between 1 and "}; 
A_GISVEC(A68_VC ,LVRBTRN,KVRBTRN,38)
static A68_578   UVRBTRN = {"Option "}; 
A_GISVEC(A68_VC ,VVRBTRN,UVRBTRN,7)
static A68_613   ZVRBTRN = {" has already been specified"}; 
A_GISVEC(A68_VC ,AWRBTRN,ZVRBTRN,27)
static A68_617   DYRBTRN = {"Outer declarations in the current closure"}; 
A_GISVEC(A68_VC ,EYRBTRN,DYRBTRN,41)
static A68_618   JYRBTRN = {"   cl = closure number, ct = context number, ver = spec / body library versions,"}; 
A_GISVEC(A68_VC ,KYRBTRN,JYRBTRN,80)
static A68_619   PYRBTRN = {"  env = number of ATTR, INT, TYPE, CONST and FN/MAC entries in the environment"}; 
A_GISVEC(A68_VC ,QYRBTRN,PYRBTRN,78)
static A68_620   BZRBTRN = {"Unset - closure number = "}; 
A_GISVEC(A68_VC ,CZRBTRN,BZRBTRN,25)
static A68_621   GZRBTRN = {"  sort = "}; 
A_GISVEC(A68_VC ,HZRBTRN,GZRBTRN,9)
static A68_601   WZRBTRN = {"  Nil USAGE"}; 
A_GISVEC(A68_VC ,XZRBTRN,WZRBTRN,11)
static A68_126   GASBTRN = {" cl "}; 
A_GISVEC(A68_VC ,HASBTRN,GASBTRN,4)
static A68_577   MASBTRN = {"  ct "}; 
A_GISVEC(A68_VC ,NASBTRN,MASBTRN,5)
static A68_625   SASBTRN = {"  ver "}; 
A_GISVEC(A68_VC ,TASBTRN,SASBTRN,6)
static A68_625   CBSBTRN = {"  env "}; 
A_GISVEC(A68_VC ,DBSBTRN,CBSBTRN,6)
static A68_627   VBSBTRN = {"   --- closure number missmatch: "}; 
A_GISVEC(A68_VC ,WBSBTRN,VBSBTRN,33)
static A68_613   FCSBTRN = {"Missing - closure number = "}; 
A_GISVEC(A68_VC ,GCSBTRN,FCSBTRN,27)
static A68_621   KCSBTRN = {"  sort = "}; 
A_GISVEC(A68_VC ,LCSBTRN,KCSBTRN,9)
static A68_628   PCSBTRN = {"  environ = "}; 
A_GISVEC(A68_VC ,QCSBTRN,PCSBTRN,12)
static A68_625   BDSBTRN = {"ATTR  "}; 
A_GISVEC(A68_VC ,CDSBTRN,BDSBTRN,6)
static A68_577   MDSBTRN = {"INT  "}; 
A_GISVEC(A68_VC ,NDSBTRN,MDSBTRN,5)
static A68_625   XDSBTRN = {"TYPE  "}; 
A_GISVEC(A68_VC ,YDSBTRN,XDSBTRN,6)
static A68_578   IESBTRN = {"CONST  "}; 
A_GISVEC(A68_VC ,JESBTRN,IESBTRN,7)
static A68_577   TESBTRN = {"MAC  "}; 
A_GISVEC(A68_VC ,UESBTRN,TESBTRN,5)
static A68_126   XESBTRN = {"FN  "}; 
A_GISVEC(A68_VC ,YESBTRN,XESBTRN,4)
static A68_576   KFSBTRN = {"Nothing to undo"}; 
A_GISVEC(A68_VC ,LFSBTRN,KFSBTRN,15)
static A68_576   XFSBTRN = {"Nothing to undo"}; 
A_GISVEC(A68_VC ,YFSBTRN,XFSBTRN,15)
static A68_630   IGSBTRN = {" previous closure"}; 
A_GISVEC(A68_VC ,JGSBTRN,IGSBTRN,17)
static A68_126   MGSBTRN = {" has"}; 
A_GISVEC(A68_VC ,NGSBTRN,MGSBTRN,4)
static A68_625   QGSBTRN = {"s have"}; 
A_GISVEC(A68_VC ,RGSBTRN,QGSBTRN,6)
static A68_574   UGSBTRN = {" been retained ("}; 
A_GISVEC(A68_VC ,VGSBTRN,UGSBTRN,16)
static A68_126   AHSBTRN = {" has"}; 
A_GISVEC(A68_VC ,BHSBTRN,AHSBTRN,4)
static A68_577   EHSBTRN = {" have"}; 
A_GISVEC(A68_VC ,FHSBTRN,EHSBTRN,5)
static A68_574   IHSBTRN = {" been discarded)"}; 
A_GISVEC(A68_VC ,JHSBTRN,IHSBTRN,16)
static A68_637   BISBTRN = {"No further transformations are possible"}; 
A_GISVEC(A68_VC ,CISBTRN,BISBTRN,39)
static A68_599   AKSBTRN = {"FN "}; 
A_GISVEC(A68_VC ,BKSBTRN,AKSBTRN,3)
static A68_640   FKSBTRN = {" was not found"}; 
A_GISVEC(A68_VC ,GKSBTRN,FKSBTRN,14)
static A68_577   NKSBTRN = {"Only "}; 
A_GISVEC(A68_VC ,OKSBTRN,NKSBTRN,5)
static A68_574   TKSBTRN = {" versions of FN "}; 
A_GISVEC(A68_VC ,UKSBTRN,TKSBTRN,16)
static A68_601   YKSBTRN = {" were found"}; 
A_GISVEC(A68_VC ,ZKSBTRN,YKSBTRN,11)
static A68_641   QLSBTRN = {"An error occurred in transform "}; 
A_GISVEC(A68_VC ,RLSBTRN,QLSBTRN,31)
static A68_619   IMSBTRN = {"This might have been caused by applying transformations in the wrong sequence."}; 
A_GISVEC(A68_VC ,JMSBTRN,IMSBTRN,78)
static A68_643   QMSBTRN = {"If you wish to continue you are warned that the closure may be inconsistent."}; 
A_GISVEC(A68_VC ,RMSBTRN,QMSBTRN,76)
static A68_617   XMSBTRN = {"Do you wish to continue [yes] or crash ? "}; 
A_GISVEC(A68_VC ,YMSBTRN,XMSBTRN,41)
static A68_630   FNSBTRN = {"transform aborted"}; 
A_GISVEC(A68_VC ,GNSBTRN,FNSBTRN,17)
static A68_630   JNSBTRN = {"Transform aborted"}; 
A_GISVEC(A68_VC ,KNSBTRN,JNSBTRN,17)
static A68_592   TNSBTRN = {"Transform "}; 
A_GISVEC(A68_VC ,UNSBTRN,TNSBTRN,10)
static A68_644   YNSBTRN = {" aborted - the closure may be in an inconsistent state"}; 
A_GISVEC(A68_VC ,ZNSBTRN,YNSBTRN,54)
static A68_645   POSBTRN = {"No OUTER procedure"}; 
A_GISVEC(A68_VC ,QOSBTRN,POSBTRN,18)
static A68_646   KPSBTRN = {" - no further transformations may be performed"}; 
A_GISVEC(A68_VC ,LPSBTRN,KPSBTRN,46)
static A68_613   SPSBTRN = {" - change can not be undone"}; 
A_GISVEC(A68_VC ,TPSBTRN,SPSBTRN,27)
static A68_648   ZQSBTRN = {" - the options available (specified by the first ["}; 
A_GISVEC(A68_VC ,ARSBTRN,ZQSBTRN,50)
static A68_645   ERSBTRN = {"]* parameter) are:"}; 
A_GISVEC(A68_VC ,FRSBTRN,ERSBTRN,18)
static A68_606   MRSBTRN = {" - the options available are:"}; 
A_GISVEC(A68_VC ,NRSBTRN,MRSBTRN,29)
static A68_599   BSSBTRN = {":  "}; 
A_GISVEC(A68_VC ,CSSBTRN,BSSBTRN,3)
static A68_126   KSSBTRN = {"The "}; 
A_GISVEC(A68_VC ,LSSBTRN,KSSBTRN,4)
static A68_592   OSSBTRN = {"remaining "}; 
A_GISVEC(A68_VC ,PSSBTRN,OSSBTRN,10)
static A68_594   XSSBTRN = {" ["}; 
A_GISVEC(A68_VC ,YSSBTRN,XSSBTRN,2)
static A68_649   CTSBTRN = {"]]* parameters may be used to specify particular outer level functions to be "}; 
A_GISVEC(A68_VC ,DTSBTRN,CTSBTRN,77)
static A68_601   HTSBTRN = {".  Use the "}; 
A_GISVEC(A68_VC ,ITSBTRN,HTSBTRN,11)
static A68_650   MTSBTRN = {" parameter to distinguish between functions having the same name.  If no function names are specified, the whole closure will be "}; 
A_GISVEC(A68_VC ,NTSBTRN,MTSBTRN,129)
static A68_601   BVSBTRN = {"transformed"}; 
A_GISVEC(A68_VC ,CVSBTRN,BVSBTRN,11)
static A68_656   MWSBTRN = {"portname"}; 
A_GISVEC(A68_VC ,NWSBTRN,MWSBTRN,8)
static A68_625   UWSBTRN = {"import"}; 
A_GISVEC(A68_VC ,VWSBTRN,UWSBTRN,6)
static A68_577   IXSBTRN = {"macro"}; 
A_GISVEC(A68_VC ,JXSBTRN,IXSBTRN,5)
static A68_656   RXSBTRN = {"sequence"}; 
A_GISVEC(A68_VC ,SXSBTRN,RXSBTRN,8)
static A68_625   ZXSBTRN = {"fntype"}; 
A_GISVEC(A68_VC ,AYSBTRN,ZXSBTRN,6)
static A68_621   HYSBTRN = {"timescale"}; 
A_GISVEC(A68_VC ,IYSBTRN,HYSBTRN,9)
static A68_126   PYSBTRN = {"join"}; 
A_GISVEC(A68_VC ,QYSBTRN,PYSBTRN,4)
static A68_126   YYSBTRN = {"make"}; 
A_GISVEC(A68_VC ,ZYSBTRN,YYSBTRN,4)
static A68_126   HZSBTRN = {"name"}; 
A_GISVEC(A68_VC ,IZSBTRN,HZSBTRN,4)
static A68_625   PZSBTRN = {"elseof"}; 
A_GISVEC(A68_VC ,QZSBTRN,PZSBTRN,6)
static A68_577   YZSBTRN = {"range"}; 
A_GISVEC(A68_VC ,ZZSBTRN,YZSBTRN,5)
static A68_577   HATBTRN = {"dinst"}; 
A_GISVEC(A68_VC ,IATBTRN,HATBTRN,5)
static A68_599   QATBTRN = {"let"}; 
A_GISVEC(A68_VC ,RATBTRN,QATBTRN,3)
static A68_656   ZATBTRN = {"macparam"}; 
A_GISVEC(A68_VC ,ABTBTRN,ZATBTRN,8)
static A68_621   IBTBTRN = {"attribute"}; 
A_GISVEC(A68_VC ,JBTBTRN,IBTBTRN,9)
static A68_578   RBTBTRN = {"bracket"}; 
A_GISVEC(A68_VC ,SBTBTRN,RBTBTRN,7)
static A68_625   ZBTBTRN = {"reform"}; 
A_GISVEC(A68_VC ,ACTBTRN,ZBTBTRN,6)
static A68_577   ICTBTRN = {"alias"}; 
A_GISVEC(A68_VC ,JCTBTRN,ICTBTRN,5)
static A68_592   QCTBTRN = {"associated"}; 
A_GISVEC(A68_VC ,RCTBTRN,QCTBTRN,10)
static A68_577   YCTBTRN = {"local"}; 
A_GISVEC(A68_VC ,ZCTBTRN,YCTBTRN,5)
static A68_625   GDTBTRN = {"cquery"}; 
A_GISVEC(A68_VC ,HDTBTRN,GDTBTRN,6)
static A68_577   ODTBTRN = {"delay"}; 
A_GISVEC(A68_VC ,PDTBTRN,ODTBTRN,5)
static A68_628   WDTBTRN = {"flatten_unit"}; 
A_GISVEC(A68_VC ,XDTBTRN,WDTBTRN,12)
static A68_621   EETBTRN = {"tstr_trow"}; 
A_GISVEC(A68_VC ,FETBTRN,EETBTRN,9)
static A68_657   YETBTRN = {"To generate the text for Core ELLA use printcoreella (pce) which does printtext (pt) with options 1 2 and 3"}; 
A_GISVEC(A68_VC ,ZETBTRN,YETBTRN,107)
static A68_656   CGTBTRN = {"makejoin"}; 
A_GISVEC(A68_VC ,DGTBTRN,CGTBTRN,8)
static A68_644   LGTBTRN = {"Equality of types between LHS and RHS of LET statement"}; 
A_GISVEC(A68_VC ,MGTBTRN,LGTBTRN,54)
static A68_658   NGTBTRN = {"Equality of types between LHS and RHS of JOIN statement"}; 
A_GISVEC(A68_VC ,OGTBTRN,NGTBTRN,55)
static A68_659   PGTBTRN = {"Equality of types between parameters and spec of UMINST/UDINST"}; 
A_GISVEC(A68_VC ,QGTBTRN,PGTBTRN,62)
static A68_660   RGTBTRN = {"Check that UNAME has correct sort for LHS and RHS of JOIN"}; 
A_GISVEC(A68_VC ,SGTBTRN,RGTBTRN,57)
static A68_661   TGTBTRN = {"Check that an INSTANCE points to FN in with the correct name"}; 
A_GISVEC(A68_VC ,UGTBTRN,TGTBTRN,60)
static A68_646   VGTBTRN = {"Check that output type matches output of FNDEC"}; 
A_GISVEC(A68_VC ,WGTBTRN,VGTBTRN,46)
static A68_46  YGTBTRN_assembletest_options;
#define XHTBTRN_size 512
static A68_579   SITBTRN = {"Closing file "}; 
A_GISVEC(A68_VC ,TITBTRN,SITBTRN,13)
static A68_627   GJTBTRN = {"Premature end of dump stream file"}; 
A_GISVEC(A68_VC ,HJTBTRN,GJTBTRN,33)
static A68_606   OJTBTRN = {"Reading open interface file  "}; 
A_GISVEC(A68_VC ,PJTBTRN,OJTBTRN,29)
static A68_592   SKTBTRN = {"Read from "}; 
A_GISVEC(A68_VC ,TKTBTRN,SKTBTRN,10)
static A68_579   OLTBTRN = {"Closing file "}; 
A_GISVEC(A68_VC ,PLTBTRN,OLTBTRN,13)
static A68_606   FNTBTRN = {"Writing open interface file  "}; 
A_GISVEC(A68_VC ,GNTBTRN,FNTBTRN,29)
static A68_598   KNTBTRN = {"  (in unpacked format)"}; 
A_GISVEC(A68_VC ,LNTBTRN,KNTBTRN,22)
static A68_603   ONTBTRN = {""}; 
A_GISVEC(A68_VC ,PNTBTRN,ONTBTRN,0)
static A68_579   MOTBTRN = {"Transforms:  "}; 
A_GISVEC(A68_VC ,NOTBTRN,MOTBTRN,13)
static A68_601   BPTBTRN = {"Written to "}; 
A_GISVEC(A68_VC ,CPTBTRN,BPTBTRN,11)
static A68_621   KPTBTRN = {"command \""}; 
A_GISVEC(A68_VC ,LPTBTRN,KPTBTRN,9)
static A68_579   MPTBTRN = {"\" not defined"}; 
A_GISVEC(A68_VC ,NPTBTRN,MPTBTRN,13)
static A68_656   VPTBTRN = {"unpacked"}; 
A_GISVEC(A68_VC ,XPTBTRN,VPTBTRN,8)
static A68_588   AQTBTRN = {"Using unpacked format"}; 
A_GISVEC(A68_VC ,BQTBTRN,AQTBTRN,21)
static A68_666   IQTBTRN = {"Transform name expected"}; 
A_GISVEC(A68_VC ,JQTBTRN,IQTBTRN,23)
static A68_599   MQTBTRN = {" -s"}; 
A_GISVEC(A68_VC ,NQTBTRN,MQTBTRN,3)
static A68_603   OQTBTRN = {""}; 
A_GISVEC(A68_VC ,PQTBTRN,OQTBTRN,0)
static A68_599   QQTBTRN = {" -u"}; 
A_GISVEC(A68_VC ,RQTBTRN,QQTBTRN,3)
static A68_603   SQTBTRN = {""}; 
A_GISVEC(A68_VC ,TQTBTRN,SQTBTRN,0)
static A68_126   UQTBTRN = {" -f "}; 
A_GISVEC(A68_VC ,VQTBTRN,UQTBTRN,4)
static A68_126   KRTBTRN = {"_out"}; 
A_GISVEC(A68_VC ,LRTBTRN,KRTBTRN,4)
static A68_599   URTBTRN = {"_in"}; 
A_GISVEC(A68_VC ,VRTBTRN,URTBTRN,3)
static A68_645   DSTBTRN = {"Issuing command:  "}; 
A_GISVEC(A68_VC ,ESTBTRN,DSTBTRN,18)
static A68_656   PSTBTRN = {"External"}; 
A_GISVEC(A68_VC ,QSTBTRN,PSTBTRN,8)
static A68_621   JTTBTRN = {"command \""}; 
A_GISVEC(A68_VC ,KTTBTRN,JTTBTRN,9)
static A68_644   LTTBTRN = {"\" not defined - invoke simulator manually on the file "}; 
A_GISVEC(A68_VC ,MTTBTRN,LTTBTRN,54)
static A68_126   TTTBTRN = {" -s "}; 
A_GISVEC(A68_VC ,UTTBTRN,TTTBTRN,4)
static A68_578   ZTTBTRN = {" -t -s "}; 
A_GISVEC(A68_VC ,AUTBTRN,ZTTBTRN,7)
static A68_621   FUTBTRN = {"Calling \""}; 
A_GISVEC(A68_VC ,GUTBTRN,FUTBTRN,9)
static A68_592   KUTBTRN = {"\" on file "}; 
A_GISVEC(A68_VC ,LUTBTRN,KUTBTRN,10)
static A68_660   WUTBTRN = {"There is no simulator with the transform test environment"}; 
A_GISVEC(A68_VC ,XUTBTRN,WUTBTRN,57)
static A68_577   KVTBTRN = {"TRACE"}; 
A_GISVEC(A68_VC ,LVTBTRN,KVTBTRN,5)
static A68_658   NVTBTRN = {"Switches on diagnostic messages during macro expansion."}; 
A_GISVEC(A68_VC ,OVTBTRN,NVTBTRN,55)
static A68_625   AWTBTRN = {"GCMODE"}; 
A_GISVEC(A68_VC ,BWTBTRN,AWTBTRN,6)
static A68_670   DWTBTRN = {"Forces garbage collection after each transformation that produces a change (after the previous closure has been discarded)."}; 
A_GISVEC(A68_VC ,EWTBTRN,DWTBTRN,123)
static A68_126   PWTBTRN = {"SHOW"}; 
static A68_578   RWTBTRN = {"OPTIONS"}; 
A_GISVEC(A68_VC ,SWTBTRN,RWTBTRN,7)
static A68_599   UWTBTRN = {"OPT"}; 
A_GISVEC(A68_VC ,VWTBTRN,UWTBTRN,3)
static A68_644   XWTBTRN = {"Show the selected options given to a transform command"}; 
A_GISVEC(A68_VC ,YWTBTRN,XWTBTRN,54)
A_GISVEC(A68_VC ,LXTBTRN,PWTBTRN,4)
static A68_599   OXTBTRN = {"SET"}; 
static A68_592   QXTBTRN = {"MAXHISTORY"}; 
A_GISVEC(A68_VC ,RXTBTRN,QXTBTRN,10)
static A68_594   TXTBTRN = {"MH"}; 
A_GISVEC(A68_VC ,UXTBTRN,TXTBTRN,2)
static A68_671   XXTBTRN = {"Sets the maximum number of previous versions of the closure that are remembered.  If the number of remembered versions exceeds the new maximum, the excess are deleted.  The default value is "}; 
A_GISVEC(A68_VC ,YXTBTRN,XXTBTRN,190)
static A68_645   KYTBTRN = {"Stack size set to "}; 
A_GISVEC(A68_VC ,LYTBTRN,KYTBTRN,18)
A_GISVEC(A68_VC ,ZYTBTRN,OXTBTRN,3)
static A68_577   CZTBTRN = {"CLEAR"}; 
static A68_578   FZTBTRN = {"HISTORY"}; 
A_GISVEC(A68_VC ,GZTBTRN,FZTBTRN,7)
static A68_672   JZTBTRN = {"Clears the stack of previous closures remembered."}; 
A_GISVEC(A68_VC ,KZTBTRN,JZTBTRN,49)
static A68_625   WZTBTRN = {"TPROCS"}; 
A_GISVEC(A68_VC ,XZTBTRN,WZTBTRN,6)
static A68_594   ZZTBTRN = {"TP"}; 
A_GISVEC(A68_VC ,AAUBTRN,ZZTBTRN,2)
static A68_612   CAUBTRN = {"Discards the transform procs free-list"}; 
A_GISVEC(A68_VC ,DAUBTRN,CAUBTRN,38)
A_GISVEC(A68_VC ,QAUBTRN,CZTBTRN,5)
static A68_126   TAUBTRN = {"DONT"}; 
static A68_577   WAUBTRN = {"TRACE"}; 
A_GISVEC(A68_VC ,XAUBTRN,WAUBTRN,5)
static A68_627   ZAUBTRN = {"Switches off the diagnostic trace"}; 
A_GISVEC(A68_VC ,ABUBTRN,ZAUBTRN,33)
static A68_625   MBUBTRN = {"GCMODE"}; 
A_GISVEC(A68_VC ,NBUBTRN,MBUBTRN,6)
static A68_612   PBUBTRN = {"Switches off forced garbage collection"}; 
A_GISVEC(A68_VC ,QBUBTRN,PBUBTRN,38)
static A68_126   BCUBTRN = {"SHOW"}; 
static A68_578   DCUBTRN = {"OPTIONS"}; 
A_GISVEC(A68_VC ,ECUBTRN,DCUBTRN,7)
static A68_599   GCUBTRN = {"OPT"}; 
A_GISVEC(A68_VC ,HCUBTRN,GCUBTRN,3)
static A68_674   JCUBTRN = {"Do not show the selected options given to a transform command"}; 
A_GISVEC(A68_VC ,KCUBTRN,JCUBTRN,61)
A_GISVEC(A68_VC ,XCUBTRN,BCUBTRN,4)
A_GISVEC(A68_VC ,CDUBTRN,TAUBTRN,4)
static A68_577   FDUBTRN = {"PRINT"}; 
static A68_578   IDUBTRN = {"CLOSURE"}; 
A_GISVEC(A68_VC ,JDUBTRN,IDUBTRN,7)
static A68_594   LDUBTRN = {"CL"}; 
A_GISVEC(A68_VC ,MDUBTRN,LDUBTRN,2)
static A68_676   ODUBTRN = {"Prints basic information about each outer declaration in the closure."}; 
A_GISVEC(A68_VC ,PDUBTRN,ODUBTRN,69)
static A68_601   BEUBTRN = {"FULLCLOSURE"}; 
A_GISVEC(A68_VC ,CEUBTRN,BEUBTRN,11)
static A68_599   EEUBTRN = {"FCL"}; 
A_GISVEC(A68_VC ,FEUBTRN,EEUBTRN,3)
static A68_676   HEUBTRN = {"Prints basic information about each outer declaration in the closure."}; 
A_GISVEC(A68_VC ,IEUBTRN,HEUBTRN,69)
static A68_574   UEUBTRN = {"TRANSFORMHISTORY"}; 
A_GISVEC(A68_VC ,VEUBTRN,UEUBTRN,16)
static A68_594   XEUBTRN = {"TH"}; 
A_GISVEC(A68_VC ,YEUBTRN,XEUBTRN,2)
static A68_677   AFUBTRN = {"Shows which transformations have been called"}; 
A_GISVEC(A68_VC ,BFUBTRN,AFUBTRN,44)
static A68_645   NFUBTRN = {"INTERMEDIATEFORMAT"}; 
A_GISVEC(A68_VC ,OFUBTRN,NFUBTRN,18)
static A68_594   QFUBTRN = {"IF"}; 
A_GISVEC(A68_VC ,RFUBTRN,QFUBTRN,2)
static A68_678   DGUBTRN = {"Intermediate format printer for current closure or for  the <int>th declaration of a <name>. (default value of <int> is 1)"}; 
A_GISVEC(A68_VC ,EGUBTRN,DGUBTRN,122)
static A68_126   RGUBTRN = {"TEXT"}; 
A_GISVEC(A68_VC ,SGUBTRN,RGUBTRN,4)
static A68_578   NHUBTRN = {"printed"}; 
static A68_679   OHUBTRN = {"Text printer for a declaration or the current closure"}; 
A_GISVEC(A68_VC ,PHUBTRN,OHUBTRN,53)
A_GISVEC(A68_VC ,QHUBTRN,NHUBTRN,7)
static A68_656   DIUBTRN = {"COREELLA"}; 
A_GISVEC(A68_VC ,EIUBTRN,DIUBTRN,8)
static A68_594   GIUBTRN = {"CE"}; 
A_GISVEC(A68_VC ,HIUBTRN,GIUBTRN,2)
static A68_578   TIUBTRN = {"printed"}; 
static A68_680   UIUBTRN = {"Core ELLA text printer for a declaration or the current closure"}; 
A_GISVEC(A68_VC ,VIUBTRN,UIUBTRN,63)
A_GISVEC(A68_VC ,WIUBTRN,TIUBTRN,7)
static A68_577   MJUBTRN = {"TITLE"}; 
A_GISVEC(A68_VC ,NJUBTRN,MJUBTRN,5)
static A68_617   PJUBTRN = {"Prints the header string(s) for the modes"}; 
A_GISVEC(A68_VC ,QJUBTRN,PJUBTRN,41)
A_GISVEC(A68_VC ,KKUBTRN,FDUBTRN,5)
static A68_577   OKUBTRN = {"PTIDS"}; 
A_GISVEC(A68_VC ,PKUBTRN,OKUBTRN,5)
static A68_683   RKUBTRN = {"Print the names hash table"}; 
A_GISVEC(A68_VC ,SKUBTRN,RKUBTRN,26)
static A68_625   ELUBTRN = {"LAYOUT"}; 
A_GISVEC(A68_VC ,FLUBTRN,ELUBTRN,6)
static A68_684   RLUBTRN = {"Withdrawn - renamed PRINTTEXT (PT)"}; 
A_GISVEC(A68_VC ,SLUBTRN,RLUBTRN,34)
static A68_685   YLUBTRN = {"This command has been renamed PRINTTEXT."}; 
A_GISVEC(A68_VC ,ZLUBTRN,YLUBTRN,40)
static A68_576   HMUBTRN = {"MONITORINGORDER"}; 
A_GISVEC(A68_VC ,IMUBTRN,HMUBTRN,15)
static A68_594   KMUBTRN = {"MO"}; 
A_GISVEC(A68_VC ,LMUBTRN,KMUBTRN,2)
static A68_686   XMUBTRN = {"Prints out diagnostic table to show monitoring order for the current closure or for the <int>th declaration of a <name>. (default value of <int> is 1).  If no parameter is specified, the whole closure will be printed"}; 
A_GISVEC(A68_VC ,YMUBTRN,XMUBTRN,216)
static A68_656   JNUBTRN = {"PORTNAME"}; 
static A68_603   KNUBTRN = {""}; 
static A68_687   LNUBTRN = {"Removes portnames from the current closure"}; 
A_GISVEC(A68_VC ,MNUBTRN,LNUBTRN,42)
A_GISVEC(A68_VC ,NNUBTRN,KNUBTRN,0)
A_GISVEC(A68_VC ,ONUBTRN,JNUBTRN,8)
static A68_625   SNUBTRN = {"IMPORT"}; 
static A68_603   TNUBTRN = {""}; 
static A68_685   UNUBTRN = {"Removes imports from the current closure"}; 
A_GISVEC(A68_VC ,VNUBTRN,UNUBTRN,40)
A_GISVEC(A68_VC ,WNUBTRN,TNUBTRN,0)
A_GISVEC(A68_VC ,XNUBTRN,SNUBTRN,6)
static A68_577   BOUBTRN = {"MACRO"}; 
static A68_603   COUBTRN = {""}; 
static A68_679   DOUBTRN = {"Expands macros and replicators in the current closure"}; 
A_GISVEC(A68_VC ,EOUBTRN,DOUBTRN,53)
A_GISVEC(A68_VC ,FOUBTRN,COUBTRN,0)
A_GISVEC(A68_VC ,GOUBTRN,BOUBTRN,5)
static A68_625   KOUBTRN = {"FNTYPE"}; 
static A68_603   LOUBTRN = {""}; 
static A68_679   MOUBTRN = {"Removes fntypes and IO statements the current closure"}; 
A_GISVEC(A68_VC ,NOUBTRN,MOUBTRN,53)
A_GISVEC(A68_VC ,OOUBTRN,LOUBTRN,0)
A_GISVEC(A68_VC ,POUBTRN,KOUBTRN,6)
static A68_656   TOUBTRN = {"SEQUENCE"}; 
static A68_603   UOUBTRN = {""}; 
static A68_687   VOUBTRN = {"Removes sequences from the current closure"}; 
A_GISVEC(A68_VC ,WOUBTRN,VOUBTRN,42)
A_GISVEC(A68_VC ,XOUBTRN,UOUBTRN,0)
A_GISVEC(A68_VC ,YOUBTRN,TOUBTRN,8)
static A68_621   CPUBTRN = {"TIMESCALE"}; 
static A68_603   DPUBTRN = {""}; 
static A68_677   EPUBTRN = {"Removes timescaling from the current closure"}; 
A_GISVEC(A68_VC ,FPUBTRN,EPUBTRN,44)
A_GISVEC(A68_VC ,GPUBTRN,DPUBTRN,0)
A_GISVEC(A68_VC ,HPUBTRN,CPUBTRN,9)
static A68_126   LPUBTRN = {"JOIN"}; 
static A68_603   MPUBTRN = {""}; 
static A68_684   NPUBTRN = {"Removes multiple and partial JOINs"}; 
A_GISVEC(A68_VC ,OPUBTRN,NPUBTRN,34)
A_GISVEC(A68_VC ,PPUBTRN,MPUBTRN,0)
A_GISVEC(A68_VC ,QPUBTRN,LPUBTRN,4)
static A68_126   UPUBTRN = {"MAKE"}; 
static A68_603   VPUBTRN = {""}; 
static A68_641   WPUBTRN = {"Removes multi-dimensional makes"}; 
A_GISVEC(A68_VC ,XPUBTRN,WPUBTRN,31)
A_GISVEC(A68_VC ,YPUBTRN,VPUBTRN,0)
A_GISVEC(A68_VC ,ZPUBTRN,UPUBTRN,4)
static A68_625   DQUBTRN = {"ELSEOF"}; 
static A68_603   EQUBTRN = {""}; 
static A68_688   FQUBTRN = {"Replaces ELSEOF branches by equivalent CASE"}; 
A_GISVEC(A68_VC ,GQUBTRN,FQUBTRN,43)
A_GISVEC(A68_VC ,HQUBTRN,EQUBTRN,0)
A_GISVEC(A68_VC ,IQUBTRN,DQUBTRN,6)
static A68_656   MQUBTRN = {"STANDARD"}; 
static A68_603   NQUBTRN = {""}; 
static A68_689   OQUBTRN = {"Does the Portname, Import, Macro, Sequence, Timescaling, Macro, Make, Fntype and Join transformations.  These transformations must be done before running the current simulator"}; 
A_GISVEC(A68_VC ,PQUBTRN,OQUBTRN,175)
A_GISVEC(A68_VC ,QQUBTRN,NQUBTRN,0)
A_GISVEC(A68_VC ,RQUBTRN,MQUBTRN,8)
static A68_656   VQUBTRN = {"COREELLA"}; 
static A68_603   WQUBTRN = {""}; 
static A68_690   XQUBTRN = 
{  'D', 'o', 'e', 's', ' ', 't', 'h', 'e',
   ' ', 'P', 'o', 'r', 't', 'n', 'a', 'm',
   'e', ',', ' ', 'I', 'm', 'p', 'o', 'r',
   't', ',', ' ', 'M', 'a', 'c', 'r', 'o',
   ',', ' ', 'S', 'e', 'q', 'u', 'e', 'n',
   'c', 'e', ',', ' ', 'T', 'i', 'm', 'e',
   's', 'c', 'a', 'l', 'i', 'n', 'g', ',',
   ' ', 'M', 'a', 'c', 'r', 'o', ',', ' ',
   'M', 'a', 'k', 'e', '(', '1', ')', ',',
   ' ', 'F', 'n', 't', 'y', 'p', 'e', ',',
   ' ', 'J', 'o', 'i', 'n', '(', '2', ')',
   ',', ' ', 'L', 'e', 't', ',', ' ', 'E',
   'l', 's', 'e', 'o', 'f', ',', ' ', 'R',
   'a', 'n', 'g', 'e', ',', ' ', 'D', 'i',
   'n', 's', 't', ',', ' ', 'M', 'a', 'c',
   'p', 'a', 'r', 'a', 'm', ',', ' ', 'A',
   't', 't', 'r', 'i', 'b', 'u', 't', 'e',
   ',', ' ', 'N', 'a', 'm', 'e', '(', '2',
   ')', ' ', 'a', 'n', 'd', ' ', 'B', 'r',
   'a', 'c', 'k', 'e', 't', ' ', 't', 'r',
   'a', 'n', 's', 'f', 'o', 'r', 'm', 'a',
   't', 'i', 'o', 'n', 's', '.', ' ', 'T',
   'h', 'e', 's', 'e', ' ', 't', 'r', 'a',
   'n', 's', 'f', 'o', 'r', 'm', 'a', 't',
   'i', 'o', 'n', 's', ' ', 'm', 'u', 's',
   't', ' ', 'b', 'e', ' ', 'd', 'o', 'n',
   'e', ' ', 'b', 'e', 'f', 'o', 'r', 'e',
   ' ', 'o', 'u', 't', 'p', 'u', 't', 'i',
   'n', 'g', ' ', 't', 'e', 'x', 't', ' ',
   'f', 'o', 'r', ' ', 'C', 'o', 'r', 'e',
   ' ', 'E', 'L', 'L', 'A', ' ', 'u', 's',
   'i', 'n', 'g', ' ', 't', 'h', 'e', ' ',
   'p', 'r', 'i', 'n', 't', 'c', 'o', 'r',
   'e', 'e', 'l', 'l', 'a', '(', 'p', 'c',
   'e', ')', ' ', 'c', 'o', 'm', 'm', 'a',
   'n', 'd' 
} ; 
A_GISVEC(A68_VC ,YQUBTRN,XQUBTRN,282)
A_GISVEC(A68_VC ,ZQUBTRN,WQUBTRN,0)
A_GISVEC(A68_VC ,ARUBTRN,VQUBTRN,8)
static A68_656   ERUBTRN = {"ELLAVHDL"}; 
static A68_603   FRUBTRN = {""}; 
static A68_691   GRUBTRN = 
{  'D', 'o', 'e', 's', ' ', 't', 'h', 'e',
   ' ', 'P', 'o', 'r', 't', 'n', 'a', 'm',
   'e', ',', ' ', 'I', 'm', 'p', 'o', 'r',
   't', ',', ' ', 'M', 'a', 'c', 'r', 'o',
   ',', ' ', 'S', 'e', 'q', 'u', 'e', 'n',
   'c', 'e', ',', ' ', 'T', 'i', 'm', 'e',
   's', 'c', 'a', 'l', 'i', 'n', 'g', ',',
   ' ', 'M', 'a', 'c', 'r', 'o', ',', ' ',
   'M', 'a', 'k', 'e', ',', ' ', 'F', 'n',
   't', 'y', 'p', 'e', ',', ' ', 'J', 'o',
   'i', 'n', '(', '1', ')', ',', ' ', 'L',
   'e', 't', ',', ' ', 'R', 'e', 'f', 'o',
   'r', 'm', ',', ' ', 'D', 'i', 'n', 's',
   't', ',', ' ', 'M', 'a', 'c', 'p', 'a',
   'r', 'a', 'm', ',', ' ', 'A', 't', 't',
   'r', 'i', 'b', 'u', 't', 'e', ',', ' ',
   'L', 'o', 'c', 'a', 'l', ',', ' ', 'A',
   's', 's', 'o', 'c', 'i', 'a', 't', 'e',
   'd', ',', ' ', 'C', 'q', 'u', 'e', 'r',
   'y', ',', ' ', 'D', 'e', 'l', 'a', 'y',
   ',', ' ', 'F', 'l', 'a', 't', 't', 'e',
   'n', '_', 'u', 'n', 'i', 't', ',', ' ',
   'T', 's', 't', 'r', '_', 't', 'r', 'o',
   'w', ',', ' ', 'A', 'l', 'i', 'a', 's',
   ' ', 'a', 'n', 'd', ' ', 'N', 'a', 'm',
   'e', '(', '5', ')', ' ', 't', 'r', 'a',
   'n', 's', 'f', 'o', 'r', 'm', 'a', 't',
   'i', 'o', 'n', 's', '.', ' ', 'T', 'h',
   'e', 's', 'e', ' ', 't', 'r', 'a', 'n',
   's', 'f', 'o', 'r', 'm', 'a', 't', 'i',
   'o', 'n', 's', ' ', 'm', 'u', 's', 't',
   ' ', 'b', 'e', ' ', 'd', 'o', 'n', 'e',
   ' ', 'b', 'e', 'f', 'o', 'r', 'e', ' ',
   'o', 'u', 't', 'p', 'u', 't', 'i', 'n',
   'g', ' ', 'a', 'n', ' ', 'o', 'p', 'e',
   'n', ' ', 'i', 'n', 't', 'e', 'r', 'f',
   'a', 'c', 'e', ' ', 'f', 'i', 'l', 'e',
   ' ', 'f', 'o', 'r', ' ', 't', 'h', 'e',
   ' ', 'E', 'L', 'L', 'A', ' ', 't', 'o',
   ' ', 'V', 'H', 'D', 'L', ' ', 't', 'r',
   'a', 'n', 's', 'l', 'a', 't', 'o', 'r',
   '.' 
} ; 
A_GISVEC(A68_VC ,HRUBTRN,GRUBTRN,329)
A_GISVEC(A68_VC ,IRUBTRN,FRUBTRN,0)
A_GISVEC(A68_VC ,JRUBTRN,ERUBTRN,8)
static A68_599   NRUBTRN = {"LET"}; 
static A68_603   ORUBTRN = {""}; 
static A68_692   PRUBTRN = {"Expand out LETs that define more than one name at a time"}; 
A_GISVEC(A68_VC ,QRUBTRN,PRUBTRN,56)
A_GISVEC(A68_VC ,RRUBTRN,ORUBTRN,0)
A_GISVEC(A68_VC ,SRUBTRN,NRUBTRN,3)
static A68_625   WRUBTRN = {"REFORM"}; 
static A68_603   XRUBTRN = {""}; 
static A68_573   YRUBTRN = {"Replace REFORM function bodies by corresponding expression"}; 
A_GISVEC(A68_VC ,ZRUBTRN,YRUBTRN,58)
A_GISVEC(A68_VC ,ASUBTRN,XRUBTRN,0)
A_GISVEC(A68_VC ,BSUBTRN,WRUBTRN,6)
static A68_126   FSUBTRN = {"NAME"}; 
static A68_603   GSUBTRN = {""}; 
static A68_619   HSUBTRN = {"Convert illegal generated names into a form that the ELLA compiler will accept"}; 
A_GISVEC(A68_VC ,ISUBTRN,HSUBTRN,78)
A_GISVEC(A68_VC ,JSUBTRN,GSUBTRN,0)
A_GISVEC(A68_VC ,KSUBTRN,FSUBTRN,4)
static A68_577   OSUBTRN = {"RANGE"}; 
static A68_603   PSUBTRN = {""}; 
static A68_679   QSUBTRN = {"Change INT and CHAR ranges in choices to alternatives"}; 
A_GISVEC(A68_VC ,RSUBTRN,QSUBTRN,53)
A_GISVEC(A68_VC ,SSUBTRN,PSUBTRN,0)
A_GISVEC(A68_VC ,TSUBTRN,OSUBTRN,5)
static A68_577   XSUBTRN = {"DINST"}; 
static A68_603   YSUBTRN = {""}; 
static A68_677   ZSUBTRN = {"Change dyadic instances to monadic instances"}; 
A_GISVEC(A68_VC ,ATUBTRN,ZSUBTRN,44)
A_GISVEC(A68_VC ,BTUBTRN,YSUBTRN,0)
A_GISVEC(A68_VC ,CTUBTRN,XSUBTRN,5)
static A68_656   GTUBTRN = {"MACPARAM"}; 
static A68_603   HTUBTRN = {""}; 
static A68_680   ITUBTRN = {"Removes the skeletal MAC parameters left by the macro transform"}; 
A_GISVEC(A68_VC ,JTUBTRN,ITUBTRN,63)
A_GISVEC(A68_VC ,KTUBTRN,HTUBTRN,0)
A_GISVEC(A68_VC ,LTUBTRN,GTUBTRN,8)
static A68_621   PTUBTRN = {"ATTRIBUTE"}; 
static A68_603   QTUBTRN = {""}; 
static A68_693   RTUBTRN = {"Removes all references to attributes including declarations"}; 
A_GISVEC(A68_VC ,STUBTRN,RTUBTRN,59)
A_GISVEC(A68_VC ,TTUBTRN,QTUBTRN,0)
A_GISVEC(A68_VC ,UTUBTRN,PTUBTRN,9)
static A68_577   YTUBTRN = {"ALIAS"}; 
static A68_603   ZTUBTRN = {""}; 
static A68_685   AUUBTRN = {"Makes alias types for all compound types"}; 
A_GISVEC(A68_VC ,BUUBTRN,AUUBTRN,40)
A_GISVEC(A68_VC ,CUUBTRN,ZTUBTRN,0)
A_GISVEC(A68_VC ,DUUBTRN,YTUBTRN,5)
static A68_592   HUUBTRN = {"ASSOCIATED"}; 
static A68_603   IUUBTRN = {""}; 
static A68_680   JUUBTRN = {"Turns associated types into an equavelent set of ordinary types"}; 
A_GISVEC(A68_VC ,KUUBTRN,JUUBTRN,63)
A_GISVEC(A68_VC ,LUUBTRN,IUUBTRN,0)
A_GISVEC(A68_VC ,MUUBTRN,HUUBTRN,10)
static A68_577   QUUBTRN = {"LOCAL"}; 
static A68_603   RUUBTRN = {""}; 
static A68_694   SUUBTRN = {"Makes local declarations into outer declarations"}; 
A_GISVEC(A68_VC ,TUUBTRN,SUUBTRN,48)
A_GISVEC(A68_VC ,UUUBTRN,RUUBTRN,0)
A_GISVEC(A68_VC ,VUUBTRN,QUUBTRN,5)
static A68_625   ZUUBTRN = {"CQUERY"}; 
static A68_603   AVUBTRN = {""}; 
static A68_674   BVUBTRN = {"Turns query of rows or structs into rows or structs of querys"}; 
A_GISVEC(A68_VC ,CVUBTRN,BVUBTRN,61)
A_GISVEC(A68_VC ,DVUBTRN,AVUBTRN,0)
A_GISVEC(A68_VC ,EVUBTRN,ZUUBTRN,6)
static A68_577   IVUBTRN = {"DELAY"}; 
static A68_603   JVUBTRN = {""}; 
static A68_695   KVUBTRN = {"Makes delays have single input and output, ie. removes names of inputs and outputs, but leaves structure."}; 
A_GISVEC(A68_VC ,LVUBTRN,KVUBTRN,105)
A_GISVEC(A68_VC ,MVUBTRN,JVUBTRN,0)
A_GISVEC(A68_VC ,NVUBTRN,IVUBTRN,5)
static A68_601   RVUBTRN = {"FLATTENUNIT"}; 
static A68_603   SVUBTRN = {""}; 
static A68_694   TVUBTRN = {"Simplifies units for the ELLA to VHDL transform."}; 
A_GISVEC(A68_VC ,UVUBTRN,TVUBTRN,48)
A_GISVEC(A68_VC ,VVUBTRN,SVUBTRN,0)
A_GISVEC(A68_VC ,WVUBTRN,RVUBTRN,11)
static A68_656   AWUBTRN = {"TSTRTROW"}; 
static A68_603   BWUBTRN = {""}; 
static A68_680   CWUBTRN = {"Turns type structs of same type into type rows of suitable size"}; 
A_GISVEC(A68_VC ,DWUBTRN,CWUBTRN,63)
A_GISVEC(A68_VC ,EWUBTRN,BWUBTRN,0)
A_GISVEC(A68_VC ,FWUBTRN,AWUBTRN,8)
static A68_578   JWUBTRN = {"BRACKET"}; 
static A68_603   KWUBTRN = {""}; 
static A68_619   LWUBTRN = {"Inserts brackets where needed to define the correct bindings in generated text"}; 
A_GISVEC(A68_VC ,MWUBTRN,LWUBTRN,78)
A_GISVEC(A68_VC ,NWUBTRN,KWUBTRN,0)
A_GISVEC(A68_VC ,OWUBTRN,JWUBTRN,7)
static A68_621   SWUBTRN = {"LEGALTEXT"}; 
static A68_594   TWUBTRN = {"LT"}; 
static A68_696   UWUBTRN = {"Does the Macparams, Names and Brackets transforms to convert the ELLA data tree to a form that will enable legal ELLA text to be produced by the printtext(pt) command"}; 
A_GISVEC(A68_VC ,YWUBTRN,UWUBTRN,166)
A_GISVEC(A68_VC ,ZWUBTRN,TWUBTRN,2)
A_GISVEC(A68_VC ,AXUBTRN,SWUBTRN,9)
static A68_656   FXUBTRN = {"MAKEJOIN"}; 
A_GISVEC(A68_VC ,GXUBTRN,FXUBTRN,8)
static A68_594   IXUBTRN = {"MJ"}; 
A_GISVEC(A68_VC ,JXUBTRN,IXUBTRN,2)
static A68_697   LXUBTRN = {"Does the simulator transformations (KEEXPAND) on the current closure"}; 
A_GISVEC(A68_VC ,MXUBTRN,LXUBTRN,68)
static A68_579   UXUBTRN = {"TRANSFORMTEST"}; 
static A68_621   VXUBTRN = {"TRANSTEST"}; 
static A68_643   WXUBTRN = {"Runs one or more tests on the current closure.  The default is all the tests"}; 
static A68_579   AYUBTRN = {"transformtest"}; 
A_GISVEC(A68_VC ,BYUBTRN,AYUBTRN,13)
A_GISVEC(A68_VC ,GYUBTRN,WXUBTRN,76)
A_GISVEC(A68_VC ,HYUBTRN,VXUBTRN,9)
A_GISVEC(A68_VC ,IYUBTRN,UXUBTRN,13)
static A68_628   NYUBTRN = {"RECURSIVELET"}; 
A_GISVEC(A68_VC ,OYUBTRN,NYUBTRN,12)
static A68_594   QYUBTRN = {"RL"}; 
A_GISVEC(A68_VC ,RYUBTRN,QYUBTRN,2)
static A68_688   XYUBTRN = {"Simplifies function bodies in terms of LETs"}; 
A_GISVEC(A68_VC ,YYUBTRN,XYUBTRN,43)
static A68_698   FZUBTRN = {"********** WARNING - this transform is out of date and may fail **********"}; 
A_GISVEC(A68_VC ,GZUBTRN,FZUBTRN,74)
static A68_628   MZUBTRN = {"recursivelet"}; 
A_GISVEC(A68_VC ,NZUBTRN,MZUBTRN,12)
static A68_126   XZUBTRN = {"UNDO"}; 
A_GISVEC(A68_VC ,YZUBTRN,XZUBTRN,4)
static A68_699   AAVBTRN = {"Undoes that last transformation that caused a change to the closure if possible"}; 
A_GISVEC(A68_VC ,BAVBTRN,AAVBTRN,79)
static A68_577   NAVBTRN = {"WRITE"}; 
A_GISVEC(A68_VC ,OAVBTRN,NAVBTRN,5)
static A68_700   SAVBTRN = {"Writes the intermediate format in standard packed form to <filename>.  (The default name is <contextname>.ela).Use the command WRITEASCII to write an ascii form of the intermediate format."}; 
A_GISVEC(A68_VC ,TAVBTRN,SAVBTRN,188)
static A68_126   LBVBTRN = {"READ"}; 
A_GISVEC(A68_VC ,MBVBTRN,LBVBTRN,4)
static A68_701   OBVBTRN = {"Reads the intermediate format file <filename> (with default type .ela).  The resulting data is then used for all subsequent transformations."}; 
A_GISVEC(A68_VC ,PBVBTRN,OBVBTRN,140)
static A68_592   YBVBTRN = {"WRITEASCII"}; 
A_GISVEC(A68_VC ,ZBVBTRN,YBVBTRN,10)
static A68_702   DCVBTRN = {"Writes the intermediate format using an unpacked ascii form to <filename>.  (The default name is <contextname>.ela)."}; 
A_GISVEC(A68_VC ,ECVBTRN,DCVBTRN,116)
static A68_656   WCVBTRN = {"EXTERNAL"}; 
A_GISVEC(A68_VC ,XCVBTRN,WCVBTRN,8)
static A68_599   ZCVBTRN = {"EXT"}; 
A_GISVEC(A68_VC ,ADVBTRN,ZCVBTRN,3)
static A68_703   NDVBTRN = {"Runs external ELLA transformations via intermediate format files.  Each "}; 
A_GISVEC(A68_VC ,ODVBTRN,NDVBTRN,72)
static A68_704   SDVBTRN = {" parameter should be the name of a transformation known to the external command \"ellatransform\".  Each name may be followed by a list of "}; 
A_GISVEC(A68_VC ,TDVBTRN,SDVBTRN,137)
static A68_705   XDVBTRN = {"s to specify options for that transform.  If any changes are generated the resulting intermediate format is read back in as the new current closure."}; 
A_GISVEC(A68_VC ,YDVBTRN,XDVBTRN,148)
static A68_126   KEVBTRN = {"EASE"}; 
A_GISVEC(A68_VC ,LEVBTRN,KEVBTRN,4)
static A68_706   NEVBTRN = {"Returns to the main ELLA environment"}; 
A_GISVEC(A68_VC ,OEVBTRN,NEVBTRN,36)
static A68_656   WEVBTRN = {"SIMULATE"}; 
A_GISVEC(A68_VC ,XEVBTRN,WEVBTRN,8)
static A68_599   ZEVBTRN = {"SIM"}; 
A_GISVEC(A68_VC ,AFVBTRN,ZEVBTRN,3)
static A68_707   IFVBTRN = {"Invoke the ELLA simulator defined by the variable, "}; 
A_GISVEC(A68_VC ,JFVBTRN,IFVBTRN,51)
static A68_574   NFVBTRN = {".  The optional "}; 
A_GISVEC(A68_VC ,OFVBTRN,NFVBTRN,16)
static A68_644   SFVBTRN = {" parameter is name to be used for the open interface ("}; 
A_GISVEC(A68_VC ,TFVBTRN,SFVBTRN,54)
static A68_708   XFVBTRN = {") file used to communicate with the simulator - current  context name is used by defualt."}; 
A_GISVEC(A68_VC ,YFVBTRN,XFVBTRN,89)
static A68_709   DGVBTRN = 
{  'B', 'e', 'f', 'o', 'r', 'e', ' ', 'u',
   's', 'i', 'n', 'g', ' ', 't', 'h', 'i',
   's', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'i', 't', ' ', 'i', 's', ' ',
   'n', 'e', 'c', 'e', 's', 's', 'a', 'r',
   'y', ' ', 't', 'o', ' ', 'e', 'n', 's',
   'u', 'r', 'e', ' ', 't', 'h', 'a', 't',
   ' ', 't', 'h', 'e', ' ', 'a', 'p', 'p',
   'r', 'o', 'p', 'r', 'i', 'a', 't', 'e',
   ' ', 't', 'r', 'a', 'n', 's', 'f', 'o',
   'r', 'm', 'a', 't', 'i', 'o', 'n', 's',
   ' ', 'h', 'a', 'v', 'e', ' ', 'b', 'e',
   'e', 'n', ' ', 'a', 'p', 'p', 'l', 'i',
   'e', 'd', ' ', 't', 'o', ' ', 'r', 'e',
   'm', 'o', 'v', 'e', ' ', 'f', 'e', 'a',
   't', 'u', 'r', 'e', 's', ' ', 't', 'h',
   'a', 't', ' ', 't', 'h', 'e', ' ', 'E',
   'L', 'L', 'A', ' ', 's', 'i', 'm', 'u',
   'l', 'a', 't', 'o', 'r', ' ', 'c', 'a',
   'n', ' ', 'n', 'o', 't', ' ', 'h', 'a',
   'n', 'd', 'l', 'e', '.', ' ', ' ', 'T',
   'h', 'e', ' ', 's', 't', 'a', 'n', 'd',
   'a', 'r', 'd', ' ', 'E', 'L', 'L', 'A',
   ' ', 's', 'i', 'm', 'u', 'l', 'a', 't',
   'o', 'r', ' ', 'r', 'e', 'q', 'u', 'i',
   'r', 'e', 's', ' ', 'p', 'o', 'r', 't',
   'n', 'a', 'm', 'e', 's', ',', ' ', 'I',
   'M', 'P', 'O', 'R', 'T', 's', ',', ' ',
   'M', 'A', 'C', 'r', 'o', 's', ',', ' ',
   'S', 'E', 'Q', 'u', 'e', 'n', 'c', 'e',
   's', ',', ' ', 'F', 'A', 'S', 'T', 'E',
   'R', ',', ' ', 'S', 'L', 'O', 'W', 'E',
   'R', ',', ' ', 'm', 'u', 'l', 't', 'i',
   '-', 'd', 'i', 'm', 'e', 'n', 's', 'i',
   'o', 'n', 'a', 'l', ' ', 'M', 'A', 'K',
   'E', 's', ',', ' ', 'f', 'n', 't', 'y',
   'p', 'e', 's', ' ', 'a', 'n', 'd', ' ',
   'c', 'o', 'm', 'p', 'l', 'e', 'x', ' ',
   'J', 'O', 'I', 'N', 's', ' ', 't', 'o',
   ' ', 'b', 'e', ' ', 'r', 'e', 'm', 'o',
   'v', 'e', 'd', ' ', '(', 's', 'e', 'e',
   ' ', 't', 'h', 'e', ' ', '\"', 's', 't',
   'a', 'n', 'd', 'a', 'r', 'd', '\"', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', ')',
   '.', ' ', ' ', 'T', 'h', 'e', ' ', '\"',
   'w', 'r', 'i', 't', 'e', '\"', ' ', 'c',
   'o', 'm', 'm', 'a', 'n', 'd', ' ', 'm',
   'a', 'y', ' ', 'b', 'e', ' ', 'u', 's',
   'e', 'd', ' ', 't', 'o', ' ', 'g', 'e',
   'n', 'e', 'r', 'a', 't', 'e', ' ', 'a',
   ' ', 'p', 'u', 'b', 'l', 'i', 'c', ' ',
   'i', 'n', 't', 'e', 'r', 'f', 'a', 'c',
   'e', ' ', '(', '\"' 
} ; 
A_GISVEC(A68_VC ,EGVBTRN,DGVBTRN,420)
static A68_710   IGVBTRN = {") file so that the simulator (or other back-end) may be invoked manually in another window or by using the \"obey\" (\"!\") command."}; 
A_GISVEC(A68_VC ,JGVBTRN,IGVBTRN,128)
static A68_656   YGVBTRN = {"SIMULATE"}; 
A_GISVEC(A68_VC ,ZGVBTRN,YGVBTRN,8)
static A68_599   BHVBTRN = {"SIM"}; 
A_GISVEC(A68_VC ,CHVBTRN,BHVBTRN,3)
static A68_660   GHVBTRN = {"There is no simulator with the transform test environment"}; 
A_GISVEC(A68_VC ,HHVBTRN,GHVBTRN,57)
static A68_621   VHVBTRN = {"TRANSFORM"}; 
A_GISVEC(A68_VC ,WHVBTRN,VHVBTRN,9)
static A68_577   YHVBTRN = {"TRANS"}; 
A_GISVEC(A68_VC ,ZHVBTRN,YHVBTRN,5)
static A68_660   TIVBTRN = {"Enters the transfrom environment with no closure closure."}; 
A_GISVEC(A68_VC ,UIVBTRN,TIVBTRN,57)
static A68_579   FJVBTRN = {"TRANSFORMREAD"}; 
A_GISVEC(A68_VC ,GJVBTRN,FJVBTRN,13)
static A68_621   IJVBTRN = {"TRANSREAD"}; 
A_GISVEC(A68_VC ,JJVBTRN,IJVBTRN,9)
static A68_712   MJVBTRN = {"Assembles the closure from <filename> (with default "}; 
A_GISVEC(A68_VC ,NJVBTRN,MJVBTRN,52)
static A68_577   MKVBTRN = {"Trans"}; 
A_GISVEC(A68_VC ,NKVBTRN,MKVBTRN,5)
static A68_656   DLVBTRN = {"Assembly"}; 
A_GISVEC(A68_VC ,ELVBTRN,DLVBTRN,8)
typedef struct   /* env of non-global proc */
{
A68_INT * PURBTRN_index;
} VURBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_570  Layout;
} JXRBTRN_print_layout;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Full;
A_PAD_BOOL(PAD_191)
A68_32  QZRBTRN_sizes;
A68_INT  ZYRBTRN_closureno;
A_PAD_INT(PAD_192)
} UZRBTRN_usage;
typedef struct   /* env of non-global proc */
{
A68_INT * MISBTRN_n_fnnames;
} UISBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * MISBTRN_n_fnnames;
} EJSBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Name;
A68_INT  Sort;
A_PAD_INT(PAD_193)
A68_97  Msg;
} LLSBTRN_tmsg;
typedef struct   /* env of non-global proc */
{
A68_INT  GQSBTRN_n_lines;
A_PAD_INT(PAD_194)
} KQSBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OVSBTRN_top;
A_PAD_INT(PAD_195)
} SVSBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GHTBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BITBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  KITBTRN_filename;
A68_121 * IITBTRN_file;
A68_97  Msg;
} PITBTRN_ass_msg;
typedef struct   /* env of non-global proc */
{
A68_INT * GITBTRN_pos;
A68_INT * HITBTRN_end;
A68_121 * IITBTRN_file;
A68_VC  EITBTRN_buffer;
A68_97  NITBTRN_ass_msg;
A68_97  Msg;
A68_175  AJTBTRN_get_char;
} CJTBTRN_get_char;
typedef struct   /* env of non-global proc */
{
A68_VC  GLTBTRN_filename;
A68_121 * ELTBTRN_file;
A68_97  Msg;
} LLTBTRN_ass_msg;
typedef struct   /* env of non-global proc */
{
A68_INT  DLTBTRN_linesize;
A_PAD_INT(PAD_196)
} ZLTBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * EMTBTRN_pos;
A68_INT  DLTBTRN_linesize;
A_PAD_INT(PAD_197)
A68_VC  CMTBTRN_buffer;
A68_121 * ELTBTRN_file;
A68_97  JLTBTRN_ass_msg;
A68_36  GMTBTRN_buff_out_str;
} IMTBTRN_buff_out_str;
typedef struct   /* env of non-global proc */
{
A68_121 * ELTBTRN_file;
A68_97  JLTBTRN_ass_msg;
} ZMTBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} EOTBTRN_generator;

A_STATIC A68_VOID  LIRBTRN_anonymous(A68_544  W, A68_97  M);

A_STATIC A68_VOID  OIRBTRN_anonymous(void);

A_STATIC A68_BOOL  TIRBTRN_anonymous(A68_192 * Assclosure, A68_97  Msg);

A_STATIC A68_VOID  ZIRBTRN_generator(A68_BOOL  YIRBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TKRBTRN_generator(A68_BOOL  SKRBTRN_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  ZKRBTRN_generator(A68_BOOL  YKRBTRN_anonymous, A68_583  *ReturnedValue);

A_STATIC A68_VOID  FLRBTRN_generator(A68_BOOL  ELRBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  RLRBTRN_generator(A68_BOOL  QLRBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YLRBTRN_generator(A68_BOOL  XLRBTRN_anonymous, A68_102  *ReturnedValue);

A_STATIC A68_VOID  DMRBTRN_collectgarbage(void);

A_STATIC A68_VOID  PMRBTRN_show_latest(A68_582 * Transform, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GQRBTRN_tlist(A68_582 * Transform, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JRRBTRN_pth(A68_582 * Transform);

A_STATIC A68_VOID  RRRBTRN_print_transform_history(A68_582 * Transform);

A_STATIC A68_VOID  FSRBTRN_outer_idno(A68_196  O, A68_607  *ReturnedValue);

A_STATIC A68_193 * KTRBTRN_find_outers(A68_363  Names, A68_192 * Closure, A68_97  Msg);

A_STATIC A68_VOID  OURBTRN_get_options(A68_46  Options_description, A68_363  Params, A68_97  Msg, A68_610  *ReturnedValue);

A_STATIC A68_VOID  UURBTRN_generator(A68_BOOL  SURBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UWRBTRN_ptclosure(A68_BOOL  Diagnose, A68_363  Names, A68_192 * Closure, A68_570  Layout, A68_97  Msg);

A_STATIC A68_VOID  YWRBTRN_put_layout(A68_VC  Line, A68_97  Msg);

A_STATIC A68_VOID  IXRBTRN_print_layout(A68_196  Outerdec, A68_111  Options, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  ZXRBTRN_print_closure(A68_363  Params, A68_192 * Closure, A68_BOOL  Full, A68_97  Msg);

A_STATIC A68_VOID  TZRBTRN_usage(A68_209 * U, void *NonLocals);

A_STATIC A68_VOID  GFSBTRN_undo_latest(A68_582 ** History, A68_97  Msg);

A_STATIC A68_VOID  BGSBTRN_set_stack_max(A68_INT  Max);

A_STATIC A68_VOID  QHSBTRN_assign(A68_192 * Newclosure);

A_STATIC A68_VOID  AISBTRN_do_transform(A68_633  Transform, A68_635  Transform_outer, A68_INT  Sort, A68_VC  Name, A68_46  Options_description, A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  TISBTRN_generator(A68_BOOL  RISBTRN_anonymous, A68_583  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DJSBTRN_generator(A68_BOOL  BJSBTRN_anonymous, A68_638  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KLSBTRN_tmsg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  EQSBTRN_make_helptext(A68_46  Options_description, A68_VC  Nametype_str, A68_VC  Optype_str, A68_BOOL  Have_outer_proc, A68_VC  Help_msg, A68_102  *ReturnedValue);

A_STATIC A68_VOID  JQSBTRN_generator(A68_BOOL  HQSBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_389 * EUSBTRN_make_command(A68_VC  Name, A68_VC  Abreviation, A68_46  Options_description, A68_BOOL  Have_outer_proc, A68_VC  Help_msg, A68_387  Action);

A_STATIC A68_VOID  NVSBTRN_make_option_values(A68_32  Optvals, A68_363  *ReturnedValue);

A_STATIC A68_VOID  RVSBTRN_generator(A68_BOOL  PVSBTRN_anonymous, A68_363  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LWSBTRN_portname(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  TWSBTRN_import(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  BXSBTRN_macro(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  EXSBTRN_anonymous(A68_192 * C, A68_97  Msg, A68_484  *ReturnedValue);

A_STATIC A68_VOID  QXSBTRN_sequence(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  YXSBTRN_fntype(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  GYSBTRN_timescale(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  OYSBTRN_join(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  XYSBTRN_make(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  GZSBTRN_name(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  OZSBTRN_elseof(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  XZSBTRN_range(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  GATBTRN_dinst(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  PATBTRN_multilet(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  YATBTRN_macparam(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  HBTBTRN_attribute(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  QBTBTRN_bracket(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  YBTBTRN_reform(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  HCTBTRN_alias(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  PCTBTRN_associated(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  XCTBTRN_local(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  FDTBTRN_cquery(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  NDTBTRN_delay(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  VDTBTRN_flatten_unit(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  DETBTRN_tstr_trow(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  LETBTRN_standard(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  OETBTRN_coreella(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  HFTBTRN_ellavhdl(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  OFTBTRN_simulator(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  RFTBTRN_anonymous(A68_192 * Closure, A68_97  Msg, A68_484  *ReturnedValue);

A_STATIC A68_VOID  YFTBTRN_anonymous(A68_196  F, A68_192 * C, A68_97  Msg, A68_483  *ReturnedValue);

A_STATIC A68_VOID  CHTBTRN_assembletest(A68_192 * Closure, A68_111  Options, A68_97  Msg, A68_484  *ReturnedValue);

A_STATIC A68_VOID  FHTBTRN_generator(A68_BOOL  DHTBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_192 * WHTBTRN_read_assmodes(A68_VC  Fname, A68_97  Msg);

A_STATIC A68_VOID  AITBTRN_generator(A68_BOOL  YHTBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OITBTRN_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_CHAR  BJTBTRN_get_char(void *NonLocals);

A_STATIC A68_VOID  KKTBTRN_read_assfile(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  BLTBTRN_write_assmodes(A68_192 * Closure, A68_VC  Fname, A68_BOOL  Unpacked, A68_97  Msg);

A_STATIC A68_VOID  KLTBTRN_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  YLTBTRN_generator(A68_BOOL  WLTBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HMTBTRN_buff_out_str(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  YMTBTRN_anonymous(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  DOTBTRN_generator(A68_BOOL  BOTBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IPTBTRN_external(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  XSTBTRN_transform_postlude(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  BTTBTRN_call_simulator(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  UUTBTRN_call_nosimulator(A68_363  Params, A68_97  Msg);

A68_VOID  HVTBTRN_make_asscommands(A68_392  Globals, A68_BOOL  Simenviron, A68_387  Assemble_prelude, A68_387  Assemblefile_prelude, A68_392  *ReturnedValue);

A_STATIC A68_VOID  TVTBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  JWTBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  DXTBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  HYTBTRN_anonymous(A68_363  Values, A68_97  Msg);

A_STATIC A68_VOID  PZTBTRN_anonymous(A68_363  Values, A68_97  Msg);

A_STATIC A68_VOID  IAUBTRN_anonymous(A68_363  Values, A68_97  Msg);

A_STATIC A68_VOID  FBUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  VBUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  PCUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  UDUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  NEUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  GFUBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  JGUBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  VHUBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  BJUBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  VJUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  XKUBTRN_anonymous(A68_363  Values, A68_97  Msg);

A_STATIC A68_VOID  XLUBTRN_anonymous(A68_363  Names, A68_97  Flt);

A_STATIC A68_VOID  DNUBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  XWUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  ZXUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  DZUBTRN_anonymous(A68_363  Params, A68_97  Msg);

A_STATIC A68_VOID  GAVBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  YAVBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  JCVBTRN_anonymous(A68_363  Names, A68_97  Msg);

A_STATIC A68_VOID  GFVBTRN_anonymous(A68_389 * S, A68_34 * Ch);

A68_VOID  LKVBTRN_transform_prelude(A68_363  Names, A68_BOOL  Readass, A68_VC  Lbn, A68_VC  Ctn, A68_713  Get_assclosure, A68_561  Sw, A68_152  Zc, A68_575  Ckcl, A68_97  Msg);

A_STATIC A68_VOID  UURBTRN_generator(A68_BOOL  SURBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((VURBTRN_generator *)NonLocals)->x)
{ 
A68_32  WURBTRN;  /* clause result */
A68_32  XURBTRN;  /* OPERATORS - dynamic generator */
{ 
XURBTRN.upb = (*NL(PURBTRN_index)) ;
( SURBTRN_anonymous? A_VLOC(A68_INT ,XURBTRN): A_VHEAP(A68_INT ,XURBTRN) );
WURBTRN = XURBTRN;
} 
*ReturnedValue = (WURBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YWRBTRN_put_layout(A68_VC  Line, A68_97  Msg)
{ 
A68_593  ZWRBTRN;  /* collateral clause result */
A68_52  AXRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  BXRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  CXRBTRN;  /* procedure value */
A68_85  DXRBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(put_layout);
 /* line 364: */
 /* line 365: */
{ 
ZWRBTRN.data[0] = A_UNITE(AXRBTRN,mode7,7,Line);
CXRBTRN.fn.fn_global = LRAAOSL_newline;
CXRBTRN.nonlocals = A68_NIL;
ZWRBTRN.data[1] = A_UNITE(BXRBTRN,mode12,12,CXRBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(DXRBTRN,ZWRBTRN,2,A68_52 ));
 /* line 366: */
 /* line 367: */
SOAAOST_flt_if_interrupted(Msg);
} 
A_PROC_EXIT(put_layout);
return;
} 
#undef NL

A_STATIC A68_VOID  IXRBTRN_print_layout(A68_196  Outerdec, A68_111  Options, A68_97  Msg, void *NonLocals)
#define NL(x) (((JXRBTRN_print_layout *)NonLocals)->x)
{ 
A68_53  KXRBTRN;  /* avoid structure result */
A68_187  LXRBTRN;  /* procedure value */
A_PROC_ENTRY(print_layout);
 /* line 370: */
 /* line 371: */
DFBATRN_no_indicators(  &KXRBTRN );
LXRBTRN.fn.fn_global = YWRBTRN_put_layout;
LXRBTRN.nonlocals = A68_NIL;
A_CALLPROC(NL(Layout),(Outerdec, LXRBTRN, QPGAOST_current_width(), KXRBTRN, Options, Msg),(Outerdec, LXRBTRN, QPGAOST_current_width(), KXRBTRN, Options, Msg,(NL(Layout)).nonlocals));
A_PROC_EXIT(print_layout);
return;
} 
#undef NL

A_STATIC A68_VOID  TZRBTRN_usage(A68_209 * U, void *NonLocals)
#define NL(x) (((UZRBTRN_usage *)NonLocals)->x)
{ 
A68_593  VZRBTRN;  /* collateral clause result */
A68_52  YZRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZZRBTRN;  /* YIELD */
A68_52  AASBTRN;  /* OPERATORS - mode -> union mode */
A68_56  BASBTRN;  /* procedure value */
A68_85  CASBTRN;  /* OPERATORS - istruct -> vector */
A68_626  DASBTRN;  /* collateral clause result */
A68_62  EASBTRN;  /* avoid structure result */
A68_52  FASBTRN;  /* OPERATORS - mode -> union mode */
A68_52  IASBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JASBTRN;  /* YIELD */
A68_52  KASBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  LASBTRN;  /* YIELD */
A68_52  OASBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PASBTRN;  /* YIELD */
A68_52  QASBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  RASBTRN;  /* YIELD */
A68_52  UASBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VASBTRN;  /* YIELD */
A68_52  WASBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  XASBTRN;  /* YIELD */
A68_52  YASBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZASBTRN;  /* YIELD */
A68_52  ABSBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  BBSBTRN;  /* YIELD */
A68_52  EBSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FBSBTRN;  /* YIELD */
A68_52  GBSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  HBSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  IBSBTRN;  /* procedure value */
A68_85  JBSBTRN;  /* OPERATORS - istruct -> vector */
A68_591  KBSBTRN;  /* collateral clause result */
A68_52  LBSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  MBSBTRN;  /* YIELD */
A68_52  NBSBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  OBSBTRN;  /* YIELD */
A68_52  PBSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  QBSBTRN;  /* YIELD */
A68_52  RBSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  SBSBTRN;  /* procedure value */
A68_85  TBSBTRN;  /* OPERATORS - istruct -> vector */
A68_589  UBSBTRN;  /* collateral clause result */
A68_52  XBSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  YBSBTRN;  /* YIELD */
A68_52  ZBSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ACSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  BCSBTRN;  /* procedure value */
A68_85  CCSBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(usage);
 /* line 443: */
 /* line 444: */
if ( (U==CBAATRN_nilusage) )
{ 
ZZRBTRN = XZRBTRN ;
VZRBTRN.data[0] = A_UNITE(YZRBTRN,mode7,7,ZZRBTRN);
BASBTRN.fn.fn_global = LRAAOSL_newline;
BASBTRN.nonlocals = A68_NIL;
VZRBTRN.data[1] = A_UNITE(AASBTRN,mode12,12,BASBTRN);
 /* line 445: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(CASBTRN,VZRBTRN,2,A68_52 ));
} 
else
{ 
 /* line 446: */
if ( NL(Full) )
{ 
XYAAOSL_after( 27, &EASBTRN );
DASBTRN.data[0] = A_UNITE(FASBTRN,mode18,18,EASBTRN);
JASBTRN = HASBTRN ;
DASBTRN.data[1] = A_UNITE(IASBTRN,mode7,7,JASBTRN);
 /* line 447: */
LASBTRN = (*(&(U->Closureno))) ;
DASBTRN.data[2] = A_UNITE(KASBTRN,mode1,1,LASBTRN);
PASBTRN = NASBTRN ;
DASBTRN.data[3] = A_UNITE(OASBTRN,mode7,7,PASBTRN);
RASBTRN = (*(&(U->Contextno))) ;
DASBTRN.data[4] = A_UNITE(QASBTRN,mode1,1,RASBTRN);
 /* line 448: */
VASBTRN = TASBTRN ;
DASBTRN.data[5] = A_UNITE(UASBTRN,mode7,7,VASBTRN);
XASBTRN = (*(&(U->Libv_spec))) ;
DASBTRN.data[6] = A_UNITE(WASBTRN,mode1,1,XASBTRN);
ZASBTRN = '/' ;
DASBTRN.data[7] = A_UNITE(YASBTRN,mode6,6,ZASBTRN);
 /* line 449: */
BBSBTRN = (*(&(U->Libv_body))) ;
DASBTRN.data[8] = A_UNITE(ABSBTRN,mode1,1,BBSBTRN);
FBSBTRN = DBSBTRN ;
DASBTRN.data[9] = A_UNITE(EBSBTRN,mode7,7,FBSBTRN);
DASBTRN.data[10] = A_UNITE(GBSBTRN,mode2,2,NL(QZRBTRN_sizes));
IBSBTRN.fn.fn_global = LRAAOSL_newline;
IBSBTRN.nonlocals = A68_NIL;
DASBTRN.data[11] = A_UNITE(HBSBTRN,mode12,12,IBSBTRN);
 /* line 450: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(JBSBTRN,DASBTRN,12,A68_52 ));
} 
else
{ 
MBSBTRN = '(' ;
KBSBTRN.data[0] = A_UNITE(LBSBTRN,mode6,6,MBSBTRN);
OBSBTRN = (*(&(U->Libv_spec))) ;
KBSBTRN.data[1] = A_UNITE(NBSBTRN,mode1,1,OBSBTRN);
QBSBTRN = ')' ;
KBSBTRN.data[2] = A_UNITE(PBSBTRN,mode6,6,QBSBTRN);
SBSBTRN.fn.fn_global = LRAAOSL_newline;
SBSBTRN.nonlocals = A68_NIL;
KBSBTRN.data[3] = A_UNITE(RBSBTRN,mode12,12,SBSBTRN);
 /* line 451: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(TBSBTRN,KBSBTRN,4,A68_52 ));
} 
 /* line 452: */
 /* line 453: */
if ( (NL(ZYRBTRN_closureno)!=(*(&(U->Closureno)))) )
{ 
 /* line 454: */
YBSBTRN = WBSBTRN ;
UBSBTRN.data[0] = A_UNITE(XBSBTRN,mode7,7,YBSBTRN);
UBSBTRN.data[1] = A_UNITE(ZBSBTRN,mode1,1,NL(ZYRBTRN_closureno));
BCSBTRN.fn.fn_global = LRAAOSL_newline;
BCSBTRN.nonlocals = A68_NIL;
UBSBTRN.data[2] = A_UNITE(ACSBTRN,mode12,12,BCSBTRN);
 /* line 455: */
 /* line 456: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(CCSBTRN,UBSBTRN,3,A68_52 ));
} 
} 
A_PROC_EXIT(usage);
return;
} 
#undef NL

A_STATIC A68_VOID  TISBTRN_generator(A68_BOOL  RISBTRN_anonymous, A68_583  *ReturnedValue, void *NonLocals)
#define NL(x) (((UISBTRN_generator *)NonLocals)->x)
{ 
A68_583  VISBTRN;  /* clause result */
A68_583  WISBTRN;  /* OPERATORS - dynamic generator */
{ 
WISBTRN.upb = (*NL(MISBTRN_n_fnnames)) ;
( RISBTRN_anonymous? A_VLOC(A68_581 ,WISBTRN): A_VHEAP(A68_581 ,WISBTRN) );
VISBTRN = WISBTRN;
} 
*ReturnedValue = (VISBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DJSBTRN_generator(A68_BOOL  BJSBTRN_anonymous, A68_638  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJSBTRN_generator *)NonLocals)->x)
{ 
A68_638  FJSBTRN;  /* clause result */
A68_638  GJSBTRN;  /* OPERATORS - dynamic generator */
{ 
GJSBTRN.upb = (*NL(MISBTRN_n_fnnames)) ;
( BJSBTRN_anonymous? A_VLOC(A68_196 *,GJSBTRN): A_VHEAP(A68_196 *,GJSBTRN) );
FJSBTRN = GJSBTRN;
} 
*ReturnedValue = (FJSBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KLSBTRN_tmsg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((LLSBTRN_tmsg *)NonLocals)->x)
{ 
A68_106  MLSBTRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  NLSBTRN;  /* optbool result */
A68_106  OLSBTRN;  /* OPERATORS - mode -> union mode */
A68_642  PLSBTRN;  /* collateral clause result */
A68_52  SLSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TLSBTRN;  /* YIELD */
A68_52  ULSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  VLSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  WLSBTRN;  /* YIELD */
A68_52  XLSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  YLSBTRN;  /* procedure value */
A68_52  ZLSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  AMSBTRN;  /* YIELD */
A68_95  BMSBTRN;  /* avoid structure result */
A68_52  CMSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DMSBTRN;  /* YIELD */
A68_52  EMSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  FMSBTRN;  /* YIELD */
A68_52  GMSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  HMSBTRN;  /* procedure value */
A68_52  KMSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LMSBTRN;  /* YIELD */
A68_52  MMSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  NMSBTRN;  /* procedure value */
A68_85  OMSBTRN;  /* OPERATORS - istruct -> vector */
A68_593  PMSBTRN;  /* collateral clause result */
A68_52  SMSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TMSBTRN;  /* YIELD */
A68_52  UMSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  VMSBTRN;  /* procedure value */
A68_85  WMSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  ZMSBTRN;  /* avoid structure result */
A68_VC  ANSBTRN_ans;
A68_BOOL  BNSBTRN;  /* optbool result */
A68_INT  CNSBTRN;  /* YIELD */
A68_BOOL  DNSBTRN;  /* optbool result */
A68_INT  ENSBTRN;  /* YIELD */
A68_46  HNSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_593  INSBTRN;  /* collateral clause result */
A68_52  LNSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  MNSBTRN;  /* YIELD */
A68_52  NNSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ONSBTRN;  /* procedure value */
A68_85  PNSBTRN;  /* OPERATORS - istruct -> vector */
A68_106  QNSBTRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  RNSBTRN;  /* optbool result */
A68_591  SNSBTRN;  /* collateral clause result */
A68_52  VNSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  WNSBTRN;  /* YIELD */
A68_52  XNSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  AOSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BOSBTRN;  /* YIELD */
A68_52  COSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  DOSBTRN;  /* procedure value */
A68_85  EOSBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(tmsg);
 /* line 675: */
NLSBTRN = ZKAAOSI_abort_msg(A_UNITE(MLSBTRN,mode1,1,Msgno));
if ( ! NLSBTRN )
{ /* line 676: */
NLSBTRN = PKAAOSI_sysfault_msg(A_UNITE(OLSBTRN,mode1,1,Msgno));
}
if ( NLSBTRN )
{ 
TLSBTRN = RLSBTRN ;
PLSBTRN.data[0] = A_UNITE(SLSBTRN,mode7,7,TLSBTRN);
PLSBTRN.data[1] = A_UNITE(ULSBTRN,mode7,7,NL(Name));
WLSBTRN = ':' ;
PLSBTRN.data[2] = A_UNITE(VLSBTRN,mode6,6,WLSBTRN);
 /* line 677: */
YLSBTRN.fn.fn_global = LRAAOSL_newline;
YLSBTRN.nonlocals = A68_NIL;
PLSBTRN.data[3] = A_UNITE(XLSBTRN,mode12,12,YLSBTRN);
AMSBTRN = '\"' ;
PLSBTRN.data[4] = A_UNITE(ZLSBTRN,mode6,6,AMSBTRN);
ONAAOSI_translate_msg( Msgno, Params, &BMSBTRN );
DMSBTRN = BMSBTRN.Text ;
PLSBTRN.data[5] = A_UNITE(CMSBTRN,mode7,7,DMSBTRN);
 /* line 678: */
FMSBTRN = '\"' ;
PLSBTRN.data[6] = A_UNITE(EMSBTRN,mode6,6,FMSBTRN);
 /* line 679: */
HMSBTRN.fn.fn_global = LRAAOSL_newline;
HMSBTRN.nonlocals = A68_NIL;
PLSBTRN.data[7] = A_UNITE(GMSBTRN,mode12,12,HMSBTRN);
LMSBTRN = JMSBTRN ;
PLSBTRN.data[8] = A_UNITE(KMSBTRN,mode7,7,LMSBTRN);
NMSBTRN.fn.fn_global = LRAAOSL_newline;
NMSBTRN.nonlocals = A68_NIL;
PLSBTRN.data[9] = A_UNITE(MMSBTRN,mode12,12,NMSBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OMSBTRN,PLSBTRN,10,A68_52 ));
 /* line 680: */
 /* line 681: */
if ( (NL(Sort)>GKRBTRN_normal) )
{ 
 /* line 682: */
TMSBTRN = RMSBTRN ;
PMSBTRN.data[0] = A_UNITE(SMSBTRN,mode7,7,TMSBTRN);
VMSBTRN.fn.fn_global = LRAAOSL_newline;
VMSBTRN.nonlocals = A68_NIL;
PMSBTRN.data[1] = A_UNITE(UMSBTRN,mode12,12,VMSBTRN);
 /* line 683: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WMSBTRN,PMSBTRN,2,A68_52 ));
} 
 /* line 684: */
IIAAOST_prompt( YMSBTRN, &ZMSBTRN );
ANSBTRN_ans = ZMSBTRN;
 /* line 685: */
BNSBTRN = (ANSBTRN_ans.upb>0);
if ( BNSBTRN )
{CNSBTRN = 1 ;
DNSBTRN = ((*(&A_VINDEX(ANSBTRN_ans,CNSBTRN)))=='y');
if ( ! DNSBTRN )
{ENSBTRN = 1 ;
DNSBTRN = ((*(&A_VINDEX(ANSBTRN_ans,ENSBTRN)))=='Y');
}
 /* line 686: */
BNSBTRN = DNSBTRN;
}
if ( BNSBTRN )
{ 
 /* line 687: */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(HNSBTRN,GNSBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(HNSBTRN,GNSBTRN,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
MNSBTRN = KNSBTRN ;
INSBTRN.data[0] = A_UNITE(LNSBTRN,mode7,7,MNSBTRN);
ONSBTRN.fn.fn_global = LRAAOSL_newline;
ONSBTRN.nonlocals = A68_NIL;
INSBTRN.data[1] = A_UNITE(NNSBTRN,mode12,12,ONSBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PNSBTRN,INSBTRN,2,A68_52 ));
 /* line 688: */
 /* line 689: */
 /* line 690: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
} 
else
{ 
RNSBTRN = ELAAOSI_cli_msg(A_UNITE(QNSBTRN,mode1,1,Msgno));
if ( RNSBTRN )
{ /* line 691: */
RNSBTRN = (NL(Sort)>GKRBTRN_normal);
}
if ( RNSBTRN )
{ 
WNSBTRN = UNSBTRN ;
SNSBTRN.data[0] = A_UNITE(VNSBTRN,mode7,7,WNSBTRN);
 /* line 692: */
SNSBTRN.data[1] = A_UNITE(XNSBTRN,mode7,7,NL(Name));
BOSBTRN = ZNSBTRN ;
SNSBTRN.data[2] = A_UNITE(AOSBTRN,mode7,7,BOSBTRN);
DOSBTRN.fn.fn_global = LRAAOSL_newline;
DOSBTRN.nonlocals = A68_NIL;
SNSBTRN.data[3] = A_UNITE(COSBTRN,mode12,12,DOSBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EOSBTRN,SNSBTRN,4,A68_52 ));
 /* line 693: */
 /* line 694: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 695: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
} 
A_PROC_EXIT(tmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  JQSBTRN_generator(A68_BOOL  HQSBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((KQSBTRN_generator *)NonLocals)->x)
{ 
A68_102  LQSBTRN;  /* clause result */
A68_102  MQSBTRN;  /* OPERATORS - dynamic generator */
{ 
MQSBTRN.upb = NL(GQSBTRN_n_lines) ;
( HQSBTRN_anonymous? A_VLOC(A68_VC ,MQSBTRN): A_VHEAP(A68_VC ,MQSBTRN) );
LQSBTRN = MQSBTRN;
} 
*ReturnedValue = (LQSBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RVSBTRN_generator(A68_BOOL  PVSBTRN_anonymous, A68_363  *ReturnedValue, void *NonLocals)
#define NL(x) (((SVSBTRN_generator *)NonLocals)->x)
{ 
A68_363  TVSBTRN;  /* clause result */
A68_363  UVSBTRN;  /* OPERATORS - dynamic generator */
{ 
UVSBTRN.upb = NL(OVSBTRN_top) ;
( PVSBTRN_anonymous? A_VLOC(A68_362 ,UVSBTRN): A_VHEAP(A68_362 ,UVSBTRN) );
TVSBTRN = UVSBTRN;
} 
*ReturnedValue = (TVSBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EXSBTRN_anonymous(A68_192 * C, A68_97  Msg, A68_484  *ReturnedValue)
{ 
A68_484  FXSBTRN;  /* clause result */
A68_VC  GXSBTRN;  /* avoid structure result */
A68_484  HXSBTRN;  /* avoid structure result */
 /* line 890: */
FNCAOST_get_var( TJRBTRN_trace_var, &GXSBTRN );
CXQATRN_expand( C, (A68_318 *)A68_NIL, A_VC_EQ(GXSBTRN,GLCAOST_true_var), Msg, &HXSBTRN );
FXSBTRN = HXSBTRN;
*ReturnedValue = (FXSBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RFTBTRN_anonymous(A68_192 * Closure, A68_97  Msg, A68_484  *ReturnedValue)
{ 
A68_193 * SFTBTRN_os;
A68_484  TFTBTRN;  /* collateral clause result */
A68_484  UFTBTRN;  /* clause result */
 /* line 1059: */
{ 
SFTBTRN_os = (*(&(Closure->Outers)));
 /* line 1060: */
for ( ;; )
{ 
 /* line 1061: */
if ( !((SFTBTRN_os!=HBAATRN_nilouters)) ) break;
 /* line 1062: */
if ( ((*(&((&(SFTBTRN_os->Outer))->Sort)))==VKAATRN_outerfn) )
{ 
 /* line 1063: */
GGMBTRN_expandtoatomic((&(SFTBTRN_os->Outer)));
} 
 /* line 1064: */
 /* line 1065: */
SFTBTRN_os = (*(&(SFTBTRN_os->Rest)));
}
 /* line 1066: */
TFTBTRN.Cl = Closure;
 /* line 1067: */
TFTBTRN.C = A68_TRUE;
UFTBTRN = TFTBTRN;
} 
*ReturnedValue = (UFTBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YFTBTRN_anonymous(A68_196  F, A68_192 * C, A68_97  Msg, A68_483  *ReturnedValue)
{ 
A68_196  ZFTBTRN_fn;
A68_483  AGTBTRN;  /* collateral clause result */
A68_483  BGTBTRN;  /* clause result */
 /* line 1069: */
{ 
ZFTBTRN_fn = F;
 /* line 1070: */
 /* line 1071: */
if ( ((*(&((&ZFTBTRN_fn)->Sort)))==VKAATRN_outerfn) )
{ 
 /* line 1072: */
GGMBTRN_expandtoatomic((&ZFTBTRN_fn));
} 
 /* line 1073: */
AGTBTRN.O = ZFTBTRN_fn;
 /* line 1074: */
AGTBTRN.C = A68_TRUE;
BGTBTRN = AGTBTRN;
} 
*ReturnedValue = (BGTBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FHTBTRN_generator(A68_BOOL  DHTBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((GHTBTRN_generator *)NonLocals)->x)
{ 
A68_54  HHTBTRN;  /* clause result */
A68_54  IHTBTRN;  /* OPERATORS - dynamic generator */
{ 
IHTBTRN.upb = YGTBTRN_assembletest_options.upb ;
( DHTBTRN_anonymous? A_VLOC(A68_BOOL ,IHTBTRN): A_VHEAP(A68_BOOL ,IHTBTRN) );
HHTBTRN = IHTBTRN;
} 
*ReturnedValue = (HHTBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AITBTRN_generator(A68_BOOL  YHTBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BITBTRN_generator *)NonLocals)->x)
{ 
A68_VC  CITBTRN;  /* clause result */
A68_VC  DITBTRN;  /* OPERATORS - dynamic generator */
{ 
DITBTRN.upb = XHTBTRN_size ;
( YHTBTRN_anonymous? A_VLOC(A68_CHAR ,DITBTRN): A_VHEAP(A68_CHAR ,DITBTRN) );
CITBTRN = DITBTRN;
} 
*ReturnedValue = (CITBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OITBTRN_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((PITBTRN_ass_msg *)NonLocals)->x)
{ 
A68_106  QITBTRN;  /* OPERATORS - mode -> union mode */
A68_589  RITBTRN;  /* collateral clause result */
A68_52  UITBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VITBTRN;  /* YIELD */
A68_52  WITBTRN;  /* OPERATORS - mode -> union mode */
A68_52  XITBTRN;  /* OPERATORS - mode -> union mode */
A68_56  YITBTRN;  /* procedure value */
A68_85  ZITBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ass_msg);
 /* line 1112: */
 /* line 1113: */
{ 
 /* line 1114: */
if ( TKAAOSI_error_msg(A_UNITE(QITBTRN,mode1,1,Msgno)) )
{ 
VITBTRN = TITBTRN ;
RITBTRN.data[0] = A_UNITE(UITBTRN,mode7,7,VITBTRN);
RITBTRN.data[1] = A_UNITE(WITBTRN,mode7,7,NL(KITBTRN_filename));
YITBTRN.fn.fn_global = LRAAOSL_newline;
YITBTRN.nonlocals = A68_NIL;
RITBTRN.data[2] = A_UNITE(XITBTRN,mode12,12,YITBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZITBTRN,RITBTRN,3,A68_52 ));
 /* line 1115: */
 /* line 1116: */
XQBAOSI_close_file(NL(IITBTRN_file), NL(Msg));
} 
 /* line 1117: */
 /* line 1118: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(ass_msg);
return;
} 
#undef NL

A_STATIC A68_CHAR  BJTBTRN_get_char(void *NonLocals)
#define NL(x) (((CJTBTRN_get_char *)NonLocals)->x)
{ 
A68_35  DJTBTRN;  /* avoid structure result */
A68_35  EJTBTRN_reply;
A68_BOOL  FJTBTRN;  /* optbool result */
A68_46  IJTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  JJTBTRN;  /* clause result */
A68_INT  KJTBTRN;  /* YIELD */
A_PROC_ENTRY(get_char);
 /* line 1122: */
if ( ((*NL(GITBTRN_pos))>=(*NL(HITBTRN_end))) )
{ 
HRBAOSI_read_buffer( NL(IITBTRN_file), NL(EITBTRN_buffer), NL(HITBTRN_end), NL(NITBTRN_ass_msg), &DJTBTRN );
EJTBTRN_reply = DJTBTRN;
 /* line 1123: */
FJTBTRN = PPBAOSI_(EJTBTRN_reply, GPBAOSI_io_eof);
if ( FJTBTRN )
{ /* line 1124: */
FJTBTRN = ((*NL(HITBTRN_end))==0);
}
 /* line 1125: */
if ( FJTBTRN )
{ 
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(IJTBTRN,HJTBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(IJTBTRN,HJTBTRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1126: */
 /* line 1127: */
JJTBTRN = ' ';
} 
else
{ 
(*NL(GITBTRN_pos)) = 0;
 /* line 1128: */
 /* line 1129: */
 /* line 1130: */
JJTBTRN = A_CALLPROC(NL(AJTBTRN_get_char),(),((NL(AJTBTRN_get_char)).nonlocals));
} 
} 
else
{ 
 /* line 1131: */
KJTBTRN = (*NL(GITBTRN_pos))+=1 ;
JJTBTRN = (*(&A_VINDEX(NL(EITBTRN_buffer),KJTBTRN)));
} 
A_PROC_EXIT(get_char);
return( JJTBTRN );
} 
#undef NL

A_STATIC A68_VOID  KLTBTRN_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((LLTBTRN_ass_msg *)NonLocals)->x)
{ 
A68_106  MLTBTRN;  /* OPERATORS - mode -> union mode */
A68_589  NLTBTRN;  /* collateral clause result */
A68_52  QLTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RLTBTRN;  /* YIELD */
A68_52  SLTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  TLTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ULTBTRN;  /* procedure value */
A68_85  VLTBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ass_msg);
 /* line 1173: */
 /* line 1174: */
{ 
 /* line 1175: */
if ( TKAAOSI_error_msg(A_UNITE(MLTBTRN,mode1,1,Msgno)) )
{ 
RLTBTRN = PLTBTRN ;
NLTBTRN.data[0] = A_UNITE(QLTBTRN,mode7,7,RLTBTRN);
NLTBTRN.data[1] = A_UNITE(SLTBTRN,mode7,7,NL(GLTBTRN_filename));
ULTBTRN.fn.fn_global = LRAAOSL_newline;
ULTBTRN.nonlocals = A68_NIL;
NLTBTRN.data[2] = A_UNITE(TLTBTRN,mode12,12,ULTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VLTBTRN,NLTBTRN,3,A68_52 ));
 /* line 1176: */
 /* line 1177: */
XQBAOSI_close_file(NL(ELTBTRN_file), NL(Msg));
} 
 /* line 1178: */
 /* line 1179: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(ass_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  YLTBTRN_generator(A68_BOOL  WLTBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZLTBTRN_generator *)NonLocals)->x)
{ 
A68_VC  AMTBTRN;  /* clause result */
A68_VC  BMTBTRN;  /* OPERATORS - dynamic generator */
{ 
BMTBTRN.upb = (NL(DLTBTRN_linesize)+1) ;
( WLTBTRN_anonymous? A_VLOC(A68_CHAR ,BMTBTRN): A_VHEAP(A68_CHAR ,BMTBTRN) );
AMTBTRN = BMTBTRN;
} 
*ReturnedValue = (AMTBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HMTBTRN_buff_out_str(A68_VC  Str, void *NonLocals)
#define NL(x) (((IMTBTRN_buff_out_str *)NonLocals)->x)
{ 
A68_INT  JMTBTRN_l;
A68_VC  KMTBTRN;  /* OPERATORS - trim index */
A68_VC  LMTBTRN;  /* YIELD */
A68_INT  MMTBTRN_part;
A68_VC  NMTBTRN;  /* OPERATORS - trim index */
A68_VC  OMTBTRN;  /* OPERATORS - trim index */
A68_VC  PMTBTRN;  /* YIELD */
A68_VC  QMTBTRN;  /* OPERATORS - assign op */
A68_INT  RMTBTRN;  /* YIELD */
A68_CHAR * SMTBTRN;  /* YIELD */
A68_35  TMTBTRN;  /* avoid structure result */
A68_VC  UMTBTRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(buff_out_str);
 /* line 1193: */
 /* line 1194: */
if ( ((Str.upb+(*NL(EMTBTRN_pos)))<=NL(DLTBTRN_linesize)) )
{ 
JMTBTRN_l = ((*NL(EMTBTRN_pos))+1);
 /* line 1195: */
 /* line 1196: */
LMTBTRN = A_VTRIM(KMTBTRN,(NL(CMTBTRN_buffer)),A_VTSCRIPT(&(KMTBTRN.upb),(NL(CMTBTRN_buffer)).upb,JMTBTRN_l,((*NL(EMTBTRN_pos))+=Str.upb))) ;
A_VASSIGN2(Str,LMTBTRN,A68_CHAR );
} 
else
{ 
MMTBTRN_part = (NL(DLTBTRN_linesize)-(*NL(EMTBTRN_pos)));
 /* line 1197: */
PMTBTRN = A_VTRIM(NMTBTRN,(NL(CMTBTRN_buffer)),A_VTSCRIPT(&(NMTBTRN.upb),(NL(CMTBTRN_buffer)).upb,((*NL(EMTBTRN_pos))+1),NL(DLTBTRN_linesize))) ;
QMTBTRN = A_VTRIM(OMTBTRN,(Str),A_VTSCRIPT(&(OMTBTRN.upb),(Str).upb,1,MMTBTRN_part)) ;
A_VASSIGN2(QMTBTRN,PMTBTRN,A68_CHAR );
 /* line 1198: */
RMTBTRN = NL(CMTBTRN_buffer).upb ;
SMTBTRN = (&A_VINDEX(NL(CMTBTRN_buffer),RMTBTRN)) ;
(*SMTBTRN) = VPBAOSI_newline_char;
 /* line 1199: */
JSBAOSI_write_buffer( NL(ELTBTRN_file), NL(CMTBTRN_buffer), NL(JLTBTRN_ass_msg), &TMTBTRN );
TMTBTRN;
 /* line 1200: */
(*NL(EMTBTRN_pos)) = 0;
 /* line 1201: */
 /* line 1202: */
A_CALLPROC(NL(GMTBTRN_buff_out_str),(A_VTRIM(UMTBTRN,(Str),A_VTSCRIPT(&(UMTBTRN.upb),(Str).upb,(MMTBTRN_part+1),(Str).upb))),(A_VTRIM(UMTBTRN,(Str),A_VTSCRIPT(&(UMTBTRN.upb),(Str).upb,(MMTBTRN_part+1),(Str).upb)),(NL(GMTBTRN_buff_out_str)).nonlocals));
} 
A_PROC_EXIT(buff_out_str);
return;
} 
#undef NL

A_STATIC A68_VOID  YMTBTRN_anonymous(A68_VC  Str, void *NonLocals)
#define NL(x) (((ZMTBTRN_anonymous *)NonLocals)->x)
{ 
A68_35  ANTBTRN;  /* avoid structure result */
 /* line 1207: */
JSBAOSI_write_buffer( NL(ELTBTRN_file), Str, NL(JLTBTRN_ass_msg), &ANTBTRN );
ANTBTRN;
return;
} 
#undef NL

A_STATIC A68_VOID  DOTBTRN_generator(A68_BOOL  BOTBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((EOTBTRN_generator *)NonLocals)->x)
{ 
A68_102  FOTBTRN;  /* clause result */
A68_102  GOTBTRN;  /* OPERATORS - dynamic generator */
{ 
GOTBTRN.upb = (BMRBTRN_title_str.upb+1) ;
( BOTBTRN_anonymous? A_VLOC(A68_VC ,GOTBTRN): A_VHEAP(A68_VC ,GOTBTRN) );
FOTBTRN = GOTBTRN;
} 
*ReturnedValue = (FOTBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TVTBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1351: */
 /* line 1352: */
TOCAOST_set_var(TJRBTRN_trace_var, GLCAOST_true_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  JWTBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1361: */
AKRBTRN_gcmode = A68_TRUE;
return;
} 
#undef NL

A_STATIC A68_VOID  DXTBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1370: */
 /* line 1371: */
BKRBTRN_show_options = A68_TRUE;
return;
} 
#undef NL

A_STATIC A68_VOID  HYTBTRN_anonymous(A68_363  Values, A68_97  Msg)
{ 
A68_INT  IYTBTRN;  /* YIELD */
A68_589  JYTBTRN;  /* collateral clause result */
A68_52  MYTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NYTBTRN;  /* YIELD */
A68_52  OYTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  PYTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  QYTBTRN;  /* procedure value */
A68_85  RYTBTRN;  /* OPERATORS - istruct -> vector */
 /* line 1384: */
{ 
IYTBTRN = 1 ;
DKRBTRN_max_stack_size = KHFAOST_get_int((*(&A_VINDEX(Values,IYTBTRN))), Msg);
 /* line 1385: */
NYTBTRN = LYTBTRN ;
JYTBTRN.data[0] = A_UNITE(MYTBTRN,mode7,7,NYTBTRN);
 /* line 1386: */
JYTBTRN.data[1] = A_UNITE(OYTBTRN,mode1,1,DKRBTRN_max_stack_size);
QYTBTRN.fn.fn_global = LRAAOSL_newline;
QYTBTRN.nonlocals = A68_NIL;
JYTBTRN.data[2] = A_UNITE(PYTBTRN,mode12,12,QYTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RYTBTRN,JYTBTRN,3,A68_52 ));
 /* line 1387: */
 /* line 1388: */
 /* line 1389: */
BGSBTRN_set_stack_max(DKRBTRN_max_stack_size);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  PZTBTRN_anonymous(A68_363  Values, A68_97  Msg)
{ 
 /* line 1398: */
 /* line 1399: */
BGSBTRN_set_stack_max(0);
return;
} 
#undef NL

A_STATIC A68_VOID  IAUBTRN_anonymous(A68_363  Values, A68_97  Msg)
{ 
 /* line 1406: */
OLJATRN_clear_tprocs();
return;
} 
#undef NL

A_STATIC A68_VOID  FBUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1415: */
 /* line 1416: */
TOCAOST_set_var(TJRBTRN_trace_var, JLCAOST_false_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VBUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1423: */
AKRBTRN_gcmode = A68_FALSE;
return;
} 
#undef NL

A_STATIC A68_VOID  PCUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1432: */
 /* line 1433: */
BKRBTRN_show_options = A68_FALSE;
return;
} 
#undef NL

A_STATIC A68_VOID  UDUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1444: */
 /* line 1445: */
ZXRBTRN_print_closure(Params, IIRBTRN_assclosure, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NEUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1453: */
 /* line 1454: */
ZXRBTRN_print_closure(Params, IIRBTRN_assclosure, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  GFUBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
 /* line 1461: */
 /* line 1462: */
RRRBTRN_print_transform_history(WLRBTRN_history);
return;
} 
#undef NL

A_STATIC A68_VOID  JGUBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
A68_570  KGUBTRN;  /* OPERATORS - skip to mode */
 /* line 1483: */
 /* line 1484: */
UWRBTRN_ptclosure(A68_TRUE, Names, IIRBTRN_assclosure, KGUBTRN, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VHUBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
A68_570  WHUBTRN;  /* procedure value */
 /* line 1495: */
 /* line 1496: */
WHUBTRN.fn.fn_global = TFRBTRN_simple_layout;
WHUBTRN.nonlocals = A68_NIL;
UWRBTRN_ptclosure(A68_FALSE, Names, IIRBTRN_assclosure, WHUBTRN, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BJUBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
A68_681  CJUBTRN;  /* collateral clause result */
A68_32  DJUBTRN;  /* OPERATORS - istruct -> vector */
A68_363  EJUBTRN;  /* avoid structure result */
A68_570  FJUBTRN;  /* procedure value */
 /* line 1507: */
CJUBTRN.data[0] = 1;
CJUBTRN.data[1] = 2;
CJUBTRN.data[2] = 3;
 /* line 1508: */
 /* line 1509: */
NVSBTRN_make_option_values( A_HISVEC(DJUBTRN,CJUBTRN,3,A68_INT ), &EJUBTRN );
FJUBTRN.fn.fn_global = TFRBTRN_simple_layout;
FJUBTRN.nonlocals = A68_NIL;
UWRBTRN_ptclosure(A68_FALSE, EJUBTRN, IIRBTRN_assclosure, FJUBTRN, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VJUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
A68_VC * WJUBTRN_line;
A68_INT  XJUBTRN;  /* forall loop counter */
A68_593  YJUBTRN;  /* collateral clause result */
A68_52  ZJUBTRN;  /* OPERATORS - mode -> union mode */
A68_52  AKUBTRN;  /* OPERATORS - mode -> union mode */
A68_56  BKUBTRN;  /* procedure value */
A68_85  CKUBTRN;  /* OPERATORS - istruct -> vector */
 /* line 1516: */
{ 
LRAAOSL_newline(LEAAOST_out);
 /* line 1517: */
 /* line 1518: */
XJUBTRN = BMRBTRN_title_str.upb -1;
WJUBTRN_line = BMRBTRN_title_str.data;
for (;XJUBTRN-- >= 0;
(WJUBTRN_line++
) )
{
YJUBTRN.data[0] = A_UNITE(ZJUBTRN,mode7,7,(*WJUBTRN_line));
BKUBTRN.fn.fn_global = LRAAOSL_newline;
BKUBTRN.nonlocals = A68_NIL;
YJUBTRN.data[1] = A_UNITE(AKUBTRN,mode12,12,BKUBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(CKUBTRN,YJUBTRN,2,A68_52 ));
}
 /* line 1519: */
 /* line 1520: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  XKUBTRN_anonymous(A68_363  Values, A68_97  Msg)
{ 
 /* line 1527: */
HHJATRN_pt_idstable();
return;
} 
#undef NL

A_STATIC A68_VOID  XLUBTRN_anonymous(A68_363  Names, A68_97  Flt)
{ 
A68_46  AMUBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 1535: */
 /* line 1536: */
A_CALLPROC(Flt,(WHAAOSI_user, A_HVEC(AMUBTRN,ZLUBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(AMUBTRN,ZLUBTRN,A68_VC ),(Flt).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  DNUBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
 /* line 1547: */
 /* line 1548: */
MTIBTRN_monitoring_order(KTRBTRN_find_outers(Names, IIRBTRN_assclosure, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  XWUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
 /* line 1709: */
{ 
YATBTRN_macparam(Params, Msg);
 /* line 1710: */
GZSBTRN_name(Params, Msg);
 /* line 1711: */
 /* line 1712: */
 /* line 1713: */
QBTBTRN_bracket(Params, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ZXUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
A68_635  CYUBTRN;  /* OPERATORS - mode -> union mode */
A68_633  DYUBTRN;  /* OPERATORS - mode -> union mode */
A68_534  EYUBTRN;  /* YIELD */
A68_534  FYUBTRN;  /* procedure value */
 /* line 1729: */
 /* line 1730: */
 /* line 1731: */
 /* line 1732: */
FYUBTRN.fn.fn_global = CHTBTRN_assembletest;
FYUBTRN.nonlocals = A68_NIL;
EYUBTRN = FYUBTRN ;
AISBTRN_do_transform(A_UNITE(DYUBTRN,mode2,2,EYUBTRN), A_UNITE(CYUBTRN,mode3,3,QKRBTRN_no_outer), FKRBTRN_nochange, BYUBTRN, YGTBTRN_assembletest_options, Params, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  DZUBTRN_anonymous(A68_363  Params, A68_97  Msg)
{ 
A68_593  EZUBTRN;  /* collateral clause result */
A68_52  HZUBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  IZUBTRN;  /* YIELD */
A68_52  JZUBTRN;  /* OPERATORS - mode -> union mode */
A68_56  KZUBTRN;  /* procedure value */
A68_85  LZUBTRN;  /* OPERATORS - istruct -> vector */
A68_635  OZUBTRN;  /* OPERATORS - mode -> union mode */
A68_633  PZUBTRN;  /* OPERATORS - mode -> union mode */
A68_534  QZUBTRN;  /* procedure value */
 /* line 1738: */
{ 
 /* line 1739: */
 /* line 1740: */
IZUBTRN = GZUBTRN ;
EZUBTRN.data[0] = A_UNITE(HZUBTRN,mode7,7,IZUBTRN);
KZUBTRN.fn.fn_global = LRAAOSL_newline;
KZUBTRN.nonlocals = A68_NIL;
EZUBTRN.data[1] = A_UNITE(JZUBTRN,mode12,12,KZUBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LZUBTRN,EZUBTRN,2,A68_52 ));
 /* line 1741: */
 /* line 1742: */
 /* line 1743: */
 /* line 1744: */
 /* line 1745: */
QZUBTRN.fn.fn_global = BZIBTRN_lets_transform;
QZUBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(PZUBTRN,mode2,2,QZUBTRN), A_UNITE(OZUBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, NZUBTRN, XYIBTRN_lets_options, Params, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GAVBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
 /* line 1754: */
GFSBTRN_undo_latest((&WLRBTRN_history), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  YAVBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
A68_INT  ZAVBTRN;  /* YIELD */
A68_144  ABVBTRN;  /* clause result */
A68_INT  BBVBTRN;  /* YIELD */
A68_144  CBVBTRN;  /* avoid structure result */
A68_144  DBVBTRN;  /* avoid structure result */
A68_144  EBVBTRN_filename;
 /* line 1764: */
 /* line 1765: */
{ 
 /* line 1766: */
ZAVBTRN = 1 ;
if ( SNFAOST_is_filename((*(&A_VINDEX(Names,ZAVBTRN)))) )
{ 
 /* line 1767: */
BBVBTRN = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Names,BBVBTRN))), YLDAOST_assfile_type, Msg, &CBVBTRN );
ABVBTRN = CBVBTRN;
} 
else
{ 
 /* line 1768: */
 /* line 1769: */
TNCAOSI_parse_filename( NJRBTRN_context_name, YLDAOST_assfile_type, Msg, &DBVBTRN );
ABVBTRN = DBVBTRN;
} 
EBVBTRN_filename = ABVBTRN;
 /* line 1771: */
 /* line 1772: */
 /* line 1773: */
 /* line 1774: */
BLTBTRN_write_assmodes(IIRBTRN_assclosure, EBVBTRN_filename.Filename, A68_FALSE, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  JCVBTRN_anonymous(A68_363  Names, A68_97  Msg)
{ 
A68_INT  KCVBTRN;  /* YIELD */
A68_144  LCVBTRN;  /* clause result */
A68_INT  MCVBTRN;  /* YIELD */
A68_144  NCVBTRN;  /* avoid structure result */
A68_144  OCVBTRN;  /* avoid structure result */
A68_144  PCVBTRN_filename;
 /* line 1791: */
 /* line 1792: */
{ 
 /* line 1793: */
KCVBTRN = 1 ;
if ( SNFAOST_is_filename((*(&A_VINDEX(Names,KCVBTRN)))) )
{ 
 /* line 1794: */
MCVBTRN = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Names,MCVBTRN))), YLDAOST_assfile_type, Msg, &NCVBTRN );
LCVBTRN = NCVBTRN;
} 
else
{ 
 /* line 1795: */
 /* line 1796: */
TNCAOSI_parse_filename( NJRBTRN_context_name, YLDAOST_assfile_type, Msg, &OCVBTRN );
LCVBTRN = OCVBTRN;
} 
PCVBTRN_filename = LCVBTRN;
 /* line 1797: */
 /* line 1798: */
 /* line 1799: */
 /* line 1800: */
BLTBTRN_write_assmodes(IIRBTRN_assclosure, PCVBTRN_filename.Filename, A68_TRUE, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GFVBTRN_anonymous(A68_389 * S, A68_34 * Ch)
{ 
A68_626  HFVBTRN;  /* collateral clause result */
A68_52  KFVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LFVBTRN;  /* YIELD */
A68_52  MFVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  PFVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  QFVBTRN;  /* YIELD */
A68_52  RFVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  UFVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VFVBTRN;  /* YIELD */
A68_52  WFVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ZFVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  AGVBTRN;  /* YIELD */
A68_64  BGVBTRN;  /* avoid structure result */
A68_52  CGVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  FGVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GGVBTRN;  /* YIELD */
A68_52  HGVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  KGVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LGVBTRN;  /* YIELD */
A68_52  MGVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  NGVBTRN;  /* procedure value */
A68_85  OGVBTRN;  /* OPERATORS - istruct -> vector */
 /* line 1826: */
 /* line 1827: */
LFVBTRN = JFVBTRN ;
HFVBTRN.data[0] = A_UNITE(KFVBTRN,mode7,7,LFVBTRN);
HFVBTRN.data[1] = A_UNITE(MFVBTRN,mode7,7,WJRBTRN_sim_var);
QFVBTRN = OFVBTRN ;
HFVBTRN.data[2] = A_UNITE(PFVBTRN,mode7,7,QFVBTRN);
 /* line 1828: */
HFVBTRN.data[3] = A_UNITE(RFVBTRN,mode7,7,BNFAOST_filename_str);
VFVBTRN = TFVBTRN ;
HFVBTRN.data[4] = A_UNITE(UFVBTRN,mode7,7,VFVBTRN);
 /* line 1830: */
HFVBTRN.data[5] = A_UNITE(WFVBTRN,mode7,7,YLDAOST_assfile_type);
AGVBTRN = YFVBTRN ;
HFVBTRN.data[6] = A_UNITE(ZFVBTRN,mode7,7,AGVBTRN);
 /* line 1832: */
HZAAOSL_lines( 2, &BGVBTRN );
HFVBTRN.data[7] = A_UNITE(CGVBTRN,mode20,20,BGVBTRN);
 /* line 1833: */
 /* line 1834: */
 /* line 1835: */
 /* line 1836: */
 /* line 1837: */
 /* line 1838: */
 /* line 1839: */
GGVBTRN = EGVBTRN ;
HFVBTRN.data[8] = A_UNITE(FGVBTRN,mode7,7,GGVBTRN);
 /* line 1840: */
HFVBTRN.data[9] = A_UNITE(HGVBTRN,mode7,7,YLDAOST_assfile_type);
 /* line 1841: */
LGVBTRN = JGVBTRN ;
HFVBTRN.data[10] = A_UNITE(KGVBTRN,mode7,7,LGVBTRN);
NGVBTRN.fn.fn_global = LRAAOSL_newline;
NGVBTRN.nonlocals = A68_NIL;
HFVBTRN.data[11] = A_UNITE(MGVBTRN,mode12,12,NGVBTRN);
GFBAOSL_put(Ch, A_HISVEC(OGVBTRN,HFVBTRN,12,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  LIRBTRN_anonymous(A68_544  W, A68_97  M)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  OIRBTRN_anonymous(void)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_BOOL  TIRBTRN_anonymous(A68_192 * Assclosure, A68_97  Msg)
{ 
A68_BOOL  UIRBTRN;  /* clause result */
A68_BOOL  VIRBTRN;  /* OPERATORS - skip to mode */
UIRBTRN = VIRBTRN;
return( UIRBTRN );
} 
#undef NL

A_STATIC A68_VOID  ZIRBTRN_generator(A68_BOOL  YIRBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AJRBTRN;  /* clause result */
A68_VC  BJRBTRN;  /* OPERATORS - dynamic generator */
{ 
BJRBTRN.upb = 15 ;
( YIRBTRN_anonymous? A_VLOC(A68_CHAR ,BJRBTRN): A_VHEAP(A68_CHAR ,BJRBTRN) );
AJRBTRN = BJRBTRN;
} 
*ReturnedValue = (AJRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TKRBTRN_generator(A68_BOOL  SKRBTRN_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  UKRBTRN;  /* clause result */
A68_32  VKRBTRN;  /* OPERATORS - dynamic generator */
{ 
VKRBTRN.upb = 0 ;
( SKRBTRN_anonymous? A_VLOC(A68_INT ,VKRBTRN): A_VHEAP(A68_INT ,VKRBTRN) );
UKRBTRN = VKRBTRN;
} 
*ReturnedValue = (UKRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZKRBTRN_generator(A68_BOOL  YKRBTRN_anonymous, A68_583  *ReturnedValue)
{ 
A68_583  ALRBTRN;  /* clause result */
A68_583  BLRBTRN;  /* OPERATORS - dynamic generator */
{ 
BLRBTRN.upb = 0 ;
( YKRBTRN_anonymous? A_VLOC(A68_581 ,BLRBTRN): A_VHEAP(A68_581 ,BLRBTRN) );
ALRBTRN = BLRBTRN;
} 
*ReturnedValue = (ALRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FLRBTRN_generator(A68_BOOL  ELRBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  HLRBTRN;  /* OPERATORS - dynamic generator */
A68_586  GLRBTRN_anonymous;
A68_585 * ILRBTRN_anonymous;
A68_INT  JLRBTRN;  /* forall loop counter */
A68_VC  KLRBTRN;  /* avoid structure result */
A68_46  LLRBTRN;  /* clause result */
{ 
HLRBTRN.upb = 0 ;
( ELRBTRN_anonymous? A_VLOC(A68_VC ,HLRBTRN): A_VHEAP(A68_VC ,HLRBTRN) );
GLRBTRN_anonymous = HLRBTRN;
JLRBTRN = (*(&GLRBTRN_anonymous)).upb -1;
ILRBTRN_anonymous = (*(&GLRBTRN_anonymous)).data;
for (;JLRBTRN-- >= 0;
(ILRBTRN_anonymous++
) )
{
A_CALLPROC(OFAAOSI_anonymous,(ELRBTRN_anonymous, &KLRBTRN),(ELRBTRN_anonymous, &KLRBTRN,(OFAAOSI_anonymous).nonlocals));
(*ILRBTRN_anonymous) = KLRBTRN;
}
LLRBTRN = GLRBTRN_anonymous;
} 
*ReturnedValue = (LLRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RLRBTRN_generator(A68_BOOL  QLRBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SLRBTRN;  /* clause result */
A68_VC  TLRBTRN;  /* OPERATORS - dynamic generator */
{ 
TLRBTRN.upb = 0 ;
( QLRBTRN_anonymous? A_VLOC(A68_CHAR ,TLRBTRN): A_VHEAP(A68_CHAR ,TLRBTRN) );
SLRBTRN = TLRBTRN;
} 
*ReturnedValue = (SLRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YLRBTRN_generator(A68_BOOL  XLRBTRN_anonymous, A68_102  *ReturnedValue)
{ 
A68_102  ZLRBTRN;  /* clause result */
A68_102  AMRBTRN;  /* OPERATORS - dynamic generator */
{ 
AMRBTRN.upb = 0 ;
( XLRBTRN_anonymous? A_VLOC(A68_VC ,AMRBTRN): A_VHEAP(A68_VC ,AMRBTRN) );
ZLRBTRN = AMRBTRN;
} 
*ReturnedValue = (ZLRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DMRBTRN_collectgarbage(void)
{ 
A68_589  EMRBTRN;  /* collateral clause result */
A68_VC  FMRBTRN;  /* avoid structure result */
A68_52  GMRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  JMRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KMRBTRN;  /* YIELD */
A68_52  LMRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  MMRBTRN;  /* procedure value */
A68_85  NMRBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(collectgarbage);
if ( AKRBTRN_gcmode )
{ 
GEDAOST_time_str(  &FMRBTRN );
EMRBTRN.data[0] = A_UNITE(GMRBTRN,mode7,7,FMRBTRN);
KMRBTRN = IMRBTRN ;
EMRBTRN.data[1] = A_UNITE(JMRBTRN,mode7,7,KMRBTRN);
MMRBTRN.fn.fn_global = LRAAOSL_newline;
MMRBTRN.nonlocals = A68_NIL;
EMRBTRN.data[2] = A_UNITE(LMRBTRN,mode12,12,MMRBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NMRBTRN,EMRBTRN,3,A68_52 ));
 /* line 164: */
 /* line 165: */
PBCAOSI_garbage_collect();
} 
A_PROC_EXIT(collectgarbage);
return;
} 
#undef NL

A_STATIC A68_VOID  PMRBTRN_show_latest(A68_582 * Transform, A68_VC  *ReturnedValue)
{ 
A68_591  QMRBTRN;  /* collateral clause result */
A68_57  RMRBTRN;  /* avoid structure result */
A68_52  SMRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  TMRBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  UMRBTRN;  /* YIELD */
A68_52  VMRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  WMRBTRN;  /* YIELD */
A68_52  ZMRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ANRBTRN;  /* YIELD */
A68_VC  BNRBTRN;  /* clause result */
A68_85  CNRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  DNRBTRN;  /* avoid structure result */
A68_VC  ENRBTRN_options;
A68_VC  HNRBTRN;  /* avoid structure result */
A68_INT * INRBTRN_opt;
A68_32  JNRBTRN;  /* forall yield */
A68_INT  KNRBTRN;  /* forall loop counter */
A68_593  LNRBTRN;  /* collateral clause result */
A68_52  MNRBTRN;  /* OPERATORS - mode -> union mode */
A68_57  NNRBTRN;  /* avoid structure result */
A68_52  ONRBTRN;  /* OPERATORS - mode -> union mode */
A68_85  PNRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  QNRBTRN;  /* avoid structure result */
A68_581 * RNRBTRN_fn;
A68_583  SNRBTRN;  /* forall yield */
A68_INT  TNRBTRN;  /* forall loop counter */
A68_595  UNRBTRN;  /* collateral clause result */
A68_52  VNRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  YNRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZNRBTRN;  /* YIELD */
A68_52  AORBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BORBTRN;  /* YIELD */
A68_52  EORBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FORBTRN;  /* YIELD */
A68_52  GORBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  HORBTRN;  /* YIELD */
A68_52  IORBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  JORBTRN;  /* YIELD */
A68_85  KORBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  LORBTRN;  /* avoid structure result */
A68_589  MORBTRN;  /* collateral clause result */
A68_52  NORBTRN;  /* OPERATORS - mode -> union mode */
A68_52  QORBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RORBTRN;  /* YIELD */
A68_52  SORBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TORBTRN;  /* YIELD */
A68_85  UORBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  VORBTRN;  /* avoid structure result */
A68_600  WORBTRN;  /* collateral clause result */
A68_57  XORBTRN;  /* avoid structure result */
A68_52  YORBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ZORBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  APRBTRN;  /* YIELD */
A68_52  BPRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CPRBTRN;  /* YIELD */
A68_52  FPRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GPRBTRN;  /* YIELD */
A68_52  JPRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KPRBTRN;  /* YIELD */
A68_52  NPRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  OPRBTRN;  /* YIELD */
A68_52  RPRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  SPRBTRN;  /* YIELD */
A68_VC  TPRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  UPRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VPRBTRN;  /* YIELD */
A68_VC  WPRBTRN;  /* avoid structure result */
A68_52  XPRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  AQRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BQRBTRN;  /* YIELD */
A68_52  CQRBTRN;  /* OPERATORS - mode -> union mode */
A68_85  DQRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  EQRBTRN;  /* avoid structure result */
A_PROC_ENTRY(show_latest);
 /* line 171: */
 /* line 172: */
if ( ((*(&(Transform->Status)))==KKRBTRN_undone) )
{ 
ZXAAOSL_intwidth( (*(&(Transform->Count))), 2, &RMRBTRN );
QMRBTRN.data[0] = A_UNITE(SMRBTRN,mode13,13,RMRBTRN);
UMRBTRN = ' ' ;
QMRBTRN.data[1] = A_UNITE(TMRBTRN,mode6,6,UMRBTRN);
 /* line 173: */
WMRBTRN = (*(&(Transform->Name))) ;
QMRBTRN.data[2] = A_UNITE(VMRBTRN,mode7,7,WMRBTRN);
ANRBTRN = YMRBTRN ;
QMRBTRN.data[3] = A_UNITE(ZMRBTRN,mode7,7,ANRBTRN);
 /* line 174: */
UJBAOSL_oneline( A_HISVEC(CNRBTRN,QMRBTRN,4,A68_52 ), &DNRBTRN );
BNRBTRN = DNRBTRN;
} 
else
{ 
ENRBTRN_options = EOAAOSL_nullstr;
 /* line 175: */
 /* line 176: */
if ( ((*(&(Transform->Options))).upb>0) )
{ 
ZAAAOSI_makervc( GNRBTRN, &HNRBTRN );
ENRBTRN_options = HNRBTRN;
 /* line 177: */
 /* line 178: */
JNRBTRN = (*(&(Transform->Options))) ;
KNRBTRN = JNRBTRN.upb -1;
INRBTRN_opt = JNRBTRN.data;
for (;KNRBTRN-- >= 0;
(INRBTRN_opt++
) )
{
LNRBTRN.data[0] = A_UNITE(MNRBTRN,mode7,7,ENRBTRN_options);
ZXAAOSL_intwidth( (*INRBTRN_opt), 3, &NNRBTRN );
LNRBTRN.data[1] = A_UNITE(ONRBTRN,mode13,13,NNRBTRN);
UJBAOSL_oneline( A_HISVEC(PNRBTRN,LNRBTRN,2,A68_52 ), &QNRBTRN );
ENRBTRN_options = QNRBTRN;
}
 /* line 179: */
} 
 /* line 180: */
 /* line 181: */
if ( ((*(&(Transform->Fns))).upb>0) )
{ 
 /* line 182: */
SNRBTRN = (*(&(Transform->Fns))) ;
TNRBTRN = SNRBTRN.upb -1;
RNRBTRN_fn = SNRBTRN.data;
for (;TNRBTRN-- >= 0;
(RNRBTRN_fn++
) )
{
 /* line 183: */
if ( ((*(&(RNRBTRN_fn->N)))>1) )
{ 
UNRBTRN.data[0] = A_UNITE(VNRBTRN,mode7,7,ENRBTRN_options);
ZNRBTRN = XNRBTRN ;
UNRBTRN.data[1] = A_UNITE(YNRBTRN,mode7,7,ZNRBTRN);
 /* line 184: */
BORBTRN = (*(&(RNRBTRN_fn->Name))) ;
UNRBTRN.data[2] = A_UNITE(AORBTRN,mode7,7,BORBTRN);
FORBTRN = DORBTRN ;
UNRBTRN.data[3] = A_UNITE(EORBTRN,mode7,7,FORBTRN);
HORBTRN = (*(&(RNRBTRN_fn->N))) ;
UNRBTRN.data[4] = A_UNITE(GORBTRN,mode1,1,HORBTRN);
JORBTRN = ')' ;
UNRBTRN.data[5] = A_UNITE(IORBTRN,mode6,6,JORBTRN);
 /* line 185: */
UJBAOSL_oneline( A_HISVEC(KORBTRN,UNRBTRN,6,A68_52 ), &LORBTRN );
ENRBTRN_options = LORBTRN;
} 
else
{ 
MORBTRN.data[0] = A_UNITE(NORBTRN,mode7,7,ENRBTRN_options);
RORBTRN = PORBTRN ;
MORBTRN.data[1] = A_UNITE(QORBTRN,mode7,7,RORBTRN);
TORBTRN = (*(&(RNRBTRN_fn->Name))) ;
MORBTRN.data[2] = A_UNITE(SORBTRN,mode7,7,TORBTRN);
 /* line 186: */
 /* line 187: */
UJBAOSL_oneline( A_HISVEC(UORBTRN,MORBTRN,3,A68_52 ), &VORBTRN );
ENRBTRN_options = VORBTRN;
} 
}
 /* line 188: */
} 
 /* line 189: */
ZXAAOSL_intwidth( (*(&(Transform->Count))), 2, &XORBTRN );
WORBTRN.data[0] = A_UNITE(YORBTRN,mode13,13,XORBTRN);
APRBTRN = ' ' ;
WORBTRN.data[1] = A_UNITE(ZORBTRN,mode6,6,APRBTRN);
 /* line 190: */
CPRBTRN = (*(&(Transform->Name))) ;
WORBTRN.data[2] = A_UNITE(BPRBTRN,mode7,7,CPRBTRN);
 /* line 191: */
switch ( ((*(&(Transform->Sort)))+1) )
{ 
case 1: 
 /* line 192: */
GPRBTRN = EPRBTRN ;
WORBTRN.data[3] = A_UNITE(FPRBTRN,mode7,7,GPRBTRN);
break;
case 2: 
 /* line 193: */
KPRBTRN = IPRBTRN ;
WORBTRN.data[3] = A_UNITE(JPRBTRN,mode7,7,KPRBTRN);
break;
case 3: 
 /* line 195: */
OPRBTRN = MPRBTRN ;
WORBTRN.data[3] = A_UNITE(NPRBTRN,mode7,7,OPRBTRN);
break;
case 4: 
 /* line 196: */
SPRBTRN = QPRBTRN ;
WORBTRN.data[3] = A_UNITE(RPRBTRN,mode7,7,SPRBTRN);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 197: */
if ( ((*(&(Transform->Cpu_time)))<0) )
{ 
 /* line 198: */
VPRBTRN = A_HVEC(TPRBTRN,'?',A68_CHAR ) ;
WORBTRN.data[4] = A_UNITE(UPRBTRN,mode7,7,VPRBTRN);
} 
else
{ 
 /* line 199: */
FCAAOSI_intchars( PIBAOST_testmode_seconds((*(&(Transform->Cpu_time)))), &WPRBTRN );
WORBTRN.data[4] = A_UNITE(XPRBTRN,mode7,7,WPRBTRN);
} 
BQRBTRN = ZPRBTRN ;
WORBTRN.data[5] = A_UNITE(AQRBTRN,mode7,7,BQRBTRN);
WORBTRN.data[6] = A_UNITE(CQRBTRN,mode7,7,ENRBTRN_options);
 /* line 200: */
UJBAOSL_oneline( A_HISVEC(DQRBTRN,WORBTRN,7,A68_52 ), &EQRBTRN );
BNRBTRN = EQRBTRN;
} 
A_PROC_EXIT(show_latest);
*ReturnedValue = (BNRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GQRBTRN_tlist(A68_582 * Transform, A68_VC  *ReturnedValue)
{ 
A68_VC  HQRBTRN_ans;
A68_582 * IQRBTRN_ptr;
A68_BOOL  JQRBTRN;  /* optbool result */
A68_BOOL  KQRBTRN;  /* optbool result */
A68_VC  MQRBTRN;  /* clause result */
A68_VC  OQRBTRN_name;
A68_INT  PQRBTRN_o;
A68_INT  QQRBTRN_f;
A68_BOOL  RQRBTRN;  /* optbool result */
A68_602  SQRBTRN;  /* collateral clause result */
A68_VC  TQRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  UQRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  VQRBTRN;  /* avoid structure result */
A68_604  WQRBTRN;  /* collateral clause result */
A68_VC  XQRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YQRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZQRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CRRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  FRRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  GRRBTRN;  /* avoid structure result */
A68_VC  HRRBTRN;  /* clause result */
A_PROC_ENTRY(tlist);
 /* line 203: */
 /* line 204: */
{ 
HQRBTRN_ans = EOAAOSL_nullstr;
 /* line 205: */
IQRBTRN_ptr = Transform;
 /* line 206: */
for ( ;; )
{ 
JQRBTRN = (IQRBTRN_ptr!=(&VLRBTRN_endhistory));
if ( JQRBTRN )
{ /* line 207: */
JQRBTRN = ((*(&(IQRBTRN_ptr->Type)))!=NKRBTRN_readtype);
}
if ( !(JQRBTRN) ) break;
KQRBTRN = ((*(&(IQRBTRN_ptr->Type)))!=PKRBTRN_ignoretype);
if ( KQRBTRN )
{ /* line 208: */
KQRBTRN = ((*(&(IQRBTRN_ptr->Sort)))!=FKRBTRN_nochange);
}
if ( KQRBTRN )
{ 
 /* line 209: */
 /* line 210: */
if ( ((*(&(IQRBTRN_ptr->Type)))==OKRBTRN_externtype) )
{ 
 /* line 211: */
MQRBTRN = NQRBTRN;
} 
else
{ 
MQRBTRN = (*(&(IQRBTRN_ptr->Name)));
} 
OQRBTRN_name = MQRBTRN;
 /* line 212: */
PQRBTRN_o = (*(&(IQRBTRN_ptr->Options))).upb;
QQRBTRN_f = (*(&(IQRBTRN_ptr->Fns))).upb;
 /* line 213: */
RQRBTRN = (PQRBTRN_o==0);
if ( RQRBTRN )
{ /* line 214: */
RQRBTRN = (QQRBTRN_f==0);
}
if ( RQRBTRN )
{ 
SQRBTRN.data[0] = A_HVEC(TQRBTRN,' ',A68_CHAR );
SQRBTRN.data[1] = OQRBTRN_name;
SQRBTRN.data[2] = HQRBTRN_ans;
 /* line 215: */
JBAAOSI_concat( A_HISVEC(UQRBTRN,SQRBTRN,3,A68_VC ), &VQRBTRN );
HQRBTRN_ans = VQRBTRN;
} 
else
{ 
WQRBTRN.data[0] = A_HVEC(XQRBTRN,' ',A68_CHAR );
WQRBTRN.data[1] = OQRBTRN_name;
 /* line 216: */
WQRBTRN.data[2] = A_HVEC(YQRBTRN,' ',A68_CHAR );
if ( (PQRBTRN_o>0) )
{ 
WQRBTRN.data[3] = A_HVEC(ZQRBTRN,'*',A68_CHAR );
} 
else
{ 
 /* line 217: */
WQRBTRN.data[3] = BRRBTRN;
} 
if ( (QQRBTRN_f>0) )
{ 
WQRBTRN.data[4] = A_HVEC(CRRBTRN,'%',A68_CHAR );
} 
else
{ 
WQRBTRN.data[4] = ERRBTRN;
} 
WQRBTRN.data[5] = HQRBTRN_ans;
 /* line 218: */
JBAAOSI_concat( A_HISVEC(FRRBTRN,WQRBTRN,6,A68_VC ), &GRRBTRN );
HQRBTRN_ans = GRRBTRN;
} 
 /* line 219: */
 /* line 220: */
if ( ((*(&(IQRBTRN_ptr->Type)))==OKRBTRN_externtype) )
{ 
 /* line 221: */
IQRBTRN_ptr = (&VLRBTRN_endhistory);
} 
else
{ 
 /* line 222: */
 /* line 223: */
IQRBTRN_ptr = (*(&(IQRBTRN_ptr->Rest)));
} 
} 
else
{ 
 /* line 224: */
 /* line 225: */
IQRBTRN_ptr = (*(&(IQRBTRN_ptr->Rest)));
} 
}
 /* line 226: */
 /* line 227: */
HRRBTRN = HQRBTRN_ans;
} 
A_PROC_EXIT(tlist);
*ReturnedValue = (HRRBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JRRBTRN_pth(A68_582 * Transform)
{ 
A68_593  KRRBTRN;  /* collateral clause result */
A68_VC  LRRBTRN;  /* avoid structure result */
A68_52  MRRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  NRRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ORRBTRN;  /* procedure value */
A68_85  PRRBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pth);
 /* line 230: */
 /* line 231: */
if ( (Transform==(&VLRBTRN_endhistory)) )
{ 
 /* line 232: */
LRAAOSL_newline(LEAAOST_out);
} 
else
{ 
JRRBTRN_pth((*(&(Transform->Rest))));
 /* line 233: */
PMRBTRN_show_latest( Transform, &LRRBTRN );
KRRBTRN.data[0] = A_UNITE(MRRBTRN,mode7,7,LRRBTRN);
ORRBTRN.fn.fn_global = LRAAOSL_newline;
ORRBTRN.nonlocals = A68_NIL;
KRRBTRN.data[1] = A_UNITE(NRRBTRN,mode12,12,ORRBTRN);
 /* line 234: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(PRRBTRN,KRRBTRN,2,A68_52 ));
} 
A_PROC_EXIT(pth);
return;
} 
#undef NL

A_STATIC A68_VOID  RRRBTRN_print_transform_history(A68_582 * Transform)
{ 
A68_580 * SRRBTRN_ptr;
A68_INT  TRRBTRN_n;
A68_589  URRBTRN;  /* collateral clause result */
A68_57  VRRBTRN;  /* avoid structure result */
A68_52  WRRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ZRRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ASRBTRN;  /* YIELD */
A68_52  BSRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  CSRBTRN;  /* procedure value */
A68_85  DSRBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_transform_history);
 /* line 237: */
 /* line 238: */
{ 
JRRBTRN_pth(Transform);
 /* line 239: */
SRRBTRN_ptr = EKRBTRN_stack;
 /* line 240: */
TRRBTRN_n = 0;
 /* line 241: */
for ( ;; )
{ 
if ( !((SRRBTRN_ptr!=CKRBTRN_stackend)) ) break;
SRRBTRN_ptr = (*(&(SRRBTRN_ptr->Rest)));
TRRBTRN_n+=1;
}
 /* line 242: */
ZXAAOSL_intwidth( TRRBTRN_n, 2, &VRRBTRN );
URRBTRN.data[0] = A_UNITE(WRRBTRN,mode13,13,VRRBTRN);
ASRBTRN = YRRBTRN ;
URRBTRN.data[1] = A_UNITE(ZRRBTRN,mode7,7,ASRBTRN);
CSRBTRN.fn.fn_global = LRAAOSL_newline;
CSRBTRN.nonlocals = A68_NIL;
URRBTRN.data[2] = A_UNITE(BSRBTRN,mode12,12,CSRBTRN);
 /* line 243: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(DSRBTRN,URRBTRN,3,A68_52 ));
} 
A_PROC_EXIT(print_transform_history);
return;
} 
#undef NL

A_STATIC A68_VOID  FSRBTRN_outer_idno(A68_196  O, A68_607  *ReturnedValue)
{ 
A68_198  GSRBTRN;  /* OPERATORS - simple index */
A68_INT  HSRBTRN;  /* YIELD */
A68_330 * ISRBTRN_adec;
A68_607  JSRBTRN;  /* collateral clause result */
A68_607  KSRBTRN;  /* clause result */
A68_607  LSRBTRN;  /* collateral clause result */
A68_199  MSRBTRN;  /* OPERATORS - simple index */
A68_INT  NSRBTRN;  /* YIELD */
A68_328 * OSRBTRN_idec;
A68_607  PSRBTRN;  /* collateral clause result */
A68_607  QSRBTRN;  /* collateral clause result */
A68_200  RSRBTRN;  /* OPERATORS - simple index */
A68_INT  SSRBTRN;  /* YIELD */
A68_322 * TSRBTRN_tdec;
A68_607  USRBTRN;  /* collateral clause result */
A68_607  VSRBTRN;  /* collateral clause result */
A68_201  WSRBTRN;  /* OPERATORS - simple index */
A68_INT  XSRBTRN;  /* YIELD */
A68_321 * YSRBTRN_cdec;
A68_607  ZSRBTRN;  /* collateral clause result */
A68_607  ATRBTRN;  /* collateral clause result */
A68_202  BTRBTRN;  /* OPERATORS - simple index */
A68_INT  CTRBTRN;  /* YIELD */
A68_203 * DTRBTRN_fdec;
A68_607  ETRBTRN;  /* collateral clause result */
A68_607  FTRBTRN;  /* collateral clause result */
A68_607  GTRBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(outer_idno);
 /* line 251: */
 /* line 253: */
switch ( O.Sort )
{ 
case 1: 
{ 
GSRBTRN = (*(&(O.Environ->Attrs))) ;
HSRBTRN = 1 ;
ISRBTRN_adec = (*(&A_VINDEX(GSRBTRN,HSRBTRN)));
 /* line 254: */
 /* line 255: */
if ( (ISRBTRN_adec!=UAAATRN_nilattrdec) )
{ 
JSRBTRN.Id = (*(&(ISRBTRN_adec->Attrname)));
 /* line 256: */
JSRBTRN.Contextno = (*(&((*(&(ISRBTRN_adec->Usage)))->Contextno)));
KSRBTRN = JSRBTRN;
} 
else
{ 
LSRBTRN.Id = TTCAOST_nullid;
 /* line 257: */
 /* line 258: */
 /* line 260: */
LSRBTRN.Contextno = 0;
KSRBTRN = LSRBTRN;
} 
} 
break;
case 2: 
{ 
MSRBTRN = (*(&(O.Environ->Ints))) ;
NSRBTRN = 1 ;
OSRBTRN_idec = (*(&A_VINDEX(MSRBTRN,NSRBTRN)));
 /* line 261: */
 /* line 262: */
if ( (OSRBTRN_idec!=VAAATRN_nilintdec) )
{ 
PSRBTRN.Id = (*(&(OSRBTRN_idec->Intname)));
 /* line 263: */
PSRBTRN.Contextno = (*(&((*(&(OSRBTRN_idec->Usage)))->Contextno)));
KSRBTRN = PSRBTRN;
} 
else
{ 
QSRBTRN.Id = TTCAOST_nullid;
 /* line 264: */
 /* line 265: */
 /* line 267: */
QSRBTRN.Contextno = 0;
KSRBTRN = QSRBTRN;
} 
} 
break;
case 3: 
{ 
RSRBTRN = (*(&(O.Environ->Types))) ;
SSRBTRN = 1 ;
TSRBTRN_tdec = (*(&A_VINDEX(RSRBTRN,SSRBTRN)));
 /* line 268: */
 /* line 269: */
if ( (TSRBTRN_tdec!=WAAATRN_niltypedec) )
{ 
USRBTRN.Id = (*(&(TSRBTRN_tdec->Typename)));
 /* line 270: */
USRBTRN.Contextno = (*(&((*(&(TSRBTRN_tdec->Usage)))->Contextno)));
KSRBTRN = USRBTRN;
} 
else
{ 
VSRBTRN.Id = TTCAOST_nullid;
 /* line 271: */
 /* line 272: */
 /* line 274: */
VSRBTRN.Contextno = 0;
KSRBTRN = VSRBTRN;
} 
} 
break;
case 4: 
{ 
WSRBTRN = (*(&(O.Environ->Consts))) ;
XSRBTRN = 1 ;
YSRBTRN_cdec = (*(&A_VINDEX(WSRBTRN,XSRBTRN)));
 /* line 275: */
 /* line 276: */
if ( (YSRBTRN_cdec!=XAAATRN_nilconstdec) )
{ 
ZSRBTRN.Id = (*(&(YSRBTRN_cdec->Constname)));
 /* line 277: */
ZSRBTRN.Contextno = (*(&((*(&(YSRBTRN_cdec->Usage)))->Contextno)));
KSRBTRN = ZSRBTRN;
} 
else
{ 
ATRBTRN.Id = TTCAOST_nullid;
 /* line 278: */
 /* line 279: */
 /* line 281: */
ATRBTRN.Contextno = 0;
KSRBTRN = ATRBTRN;
} 
} 
break;
case 5: 
{ 
BTRBTRN = (*(&(O.Environ->Fns))) ;
CTRBTRN = 1 ;
DTRBTRN_fdec = (*(&A_VINDEX(BTRBTRN,CTRBTRN)));
 /* line 282: */
 /* line 283: */
if ( (DTRBTRN_fdec!=YAAATRN_nilfndec) )
{ 
ETRBTRN.Id = (*(&(DTRBTRN_fdec->Fnname)));
 /* line 284: */
ETRBTRN.Contextno = (*(&((*(&(DTRBTRN_fdec->Usage)))->Contextno)));
KSRBTRN = ETRBTRN;
} 
else
{ 
FTRBTRN.Id = TTCAOST_nullid;
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
FTRBTRN.Contextno = 0;
KSRBTRN = FTRBTRN;
} 
} 
break;
default: 
KSRBTRN = GTRBTRN;
break;
} 
A_PROC_EXIT(outer_idno);
*ReturnedValue = (KSRBTRN);
return;
} 
#undef NL

A_STATIC A68_193 * KTRBTRN_find_outers(A68_363  Names, A68_192 * Closure, A68_97  Msg)
{ 
A68_INT  LTRBTRN_ntop;
A68_BOOL  MTRBTRN;  /* optbool result */
A68_INT  NTRBTRN;  /* YIELD */
A68_193 * OTRBTRN_list;
A68_193 ** PTRBTRN_ptr;
A68_INT  QTRBTRN_number;
A68_INT  RTRBTRN_index;
A68_BOOL  STRBTRN;  /* optbool result */
A68_INT  TTRBTRN;  /* YIELD */
A68_VC  UTRBTRN;  /* avoid structure result */
A68_VC  VTRBTRN_id;
A68_BOOL  WTRBTRN;  /* optbool result */
A68_INT  XTRBTRN;  /* YIELD */
A68_INT  YTRBTRN;  /* clause result */
A68_INT  ZTRBTRN;  /* YIELD */
A68_196  AURBTRN_outer;
A68_193 * BURBTRN_os;
A68_BOOL  CURBTRN;  /* optbool result */
A68_607  DURBTRN;  /* avoid structure result */
A68_VC  EURBTRN_decname;
A68_46  HURBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_193  IURBTRN;  /* collateral clause result */
A68_193 * JURBTRN;  /* YIELD */
A68_193 * KURBTRN;  /* clause result */
A_PROC_ENTRY(find_outers);
 /* line 291: */
 /* line 292: */
{ 
LTRBTRN_ntop = Names.upb;
 /* line 293: */
MTRBTRN = (LTRBTRN_ntop>0);
if ( MTRBTRN )
{ /* line 294: */
NTRBTRN = 1 ;
MTRBTRN = A_CALLPROC(LLFAOST_is_declname,((*(&A_VINDEX(Names,NTRBTRN)))),((*(&A_VINDEX(Names,NTRBTRN))),(LLFAOST_is_declname).nonlocals));
}
if ( MTRBTRN )
{ 
OTRBTRN_list = HBAATRN_nilouters;
 /* line 295: */
PTRBTRN_ptr = (&OTRBTRN_list);
 /* line 296: */
QTRBTRN_number = 0;
 /* line 297: */
RTRBTRN_index = 0;
 /* line 298: */
for ( ;; )
{ 
STRBTRN = (RTRBTRN_index<LTRBTRN_ntop);
if ( STRBTRN )
{ /* line 299: */
STRBTRN = (QTRBTRN_number==0);
}
if ( !(STRBTRN) ) break;
TTRBTRN = RTRBTRN_index+=1 ;
A_CALLPROC(NLFAOST_get_declname,((*(&A_VINDEX(Names,TTRBTRN))), Msg, &UTRBTRN),((*(&A_VINDEX(Names,TTRBTRN))), Msg, &UTRBTRN,(NLFAOST_get_declname).nonlocals));
VTRBTRN_id = UTRBTRN;
 /* line 300: */
WTRBTRN = (LTRBTRN_ntop>RTRBTRN_index);
if ( WTRBTRN )
{ /* line 301: */
XTRBTRN = (RTRBTRN_index+1) ;
WTRBTRN = GHFAOST_is_int((*(&A_VINDEX(Names,XTRBTRN))));
}
if ( WTRBTRN )
{ 
 /* line 302: */
 /* line 303: */
ZTRBTRN = RTRBTRN_index+=1 ;
YTRBTRN = KHFAOST_get_int((*(&A_VINDEX(Names,ZTRBTRN))), Msg);
} 
else
{ 
YTRBTRN = 1;
} 
QTRBTRN_number = YTRBTRN;
 /* line 304: */
 /* line 305: */
BURBTRN_os = (*(&(Closure->Outers)));
 /* line 306: */
for ( ;; )
{ 
CURBTRN = (QTRBTRN_number!=0);
if ( CURBTRN )
{ /* line 307: */
CURBTRN = (BURBTRN_os!=HBAATRN_nilouters);
}
if ( !(CURBTRN) ) break;
FSRBTRN_outer_idno( (*(&(BURBTRN_os->Outer))), &DURBTRN );
EURBTRN_decname = DURBTRN.Id;
 /* line 308: */
 /* line 309: */
if ( A_VC_EQ(EURBTRN_decname,VTRBTRN_id) )
{ 
if ( (QTRBTRN_number==1) )
{ 
AURBTRN_outer = (*(&(BURBTRN_os->Outer)));
} 
 /* line 310: */
 /* line 311: */
QTRBTRN_number-=1;
} 
 /* line 312: */
 /* line 313: */
BURBTRN_os = (*(&(BURBTRN_os->Rest)));
}
 /* line 314: */
 /* line 315: */
if ( (QTRBTRN_number>0) )
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(HURBTRN,A_VC_PLUS(VTRBTRN_id,GURBTRN),A68_VC )),(WHAAOSI_user, A_HVEC(HURBTRN,A_VC_PLUS(VTRBTRN_id,GURBTRN),A68_VC ),(Msg).nonlocals));
 /* line 316: */
/*SKIP*/;
} 
else
{ 
IURBTRN.Outer = AURBTRN_outer;
IURBTRN.Rest = HBAATRN_nilouters;
JURBTRN = A_HEAP(A68_193 ) ;
(*JURBTRN) = IURBTRN ;
(*PTRBTRN_ptr) = JURBTRN;
 /* line 317: */
 /* line 318: */
 /* line 319: */
PTRBTRN_ptr = (&((*PTRBTRN_ptr)->Rest));
} 
}
 /* line 320: */
 /* line 321: */
 /* line 322: */
KURBTRN = OTRBTRN_list;
} 
else
{ 
 /* line 323: */
KURBTRN = (*(&(Closure->Outers)));
} 
} 
A_PROC_EXIT(find_outers);
return( KURBTRN );
} 
#undef NL
 /* line 327: */
 /* line 328: */

A_STATIC A68_VOID  OURBTRN_get_options(A68_46  Options_description, A68_363  Params, A68_97  Msg, A68_610  *ReturnedValue)
{ 
A68_INT  PURBTRN_index;
A68_362 * QURBTRN_param;
A68_INT  RURBTRN;  /* forall loop counter */
A68_33  TURBTRN_generator;   /* proc value of non-global proc */
A68_32  YURBTRN;  /* avoid structure result */
A68_32  ZURBTRN_options_record;
A68_111  AVRBTRN_options;
A68_INT  BVRBTRN_max;
A68_INT * CVRBTRN_record;
A68_362 * DVRBTRN_param;
A68_363  EVRBTRN;  /* OPERATORS - trim index */
A68_363  FVRBTRN;  /* forall yield */
A68_INT  GVRBTRN;  /* forall loop counter */
A68_INT  HVRBTRN_i;
A68_BOOL  IVRBTRN;  /* optbool result */
A68_593  JVRBTRN;  /* collateral clause result */
A68_52  MVRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NVRBTRN;  /* YIELD */
A68_52  OVRBTRN;  /* OPERATORS - mode -> union mode */
A68_85  PVRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  QVRBTRN;  /* avoid structure result */
A68_46  RVRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111  SVRBTRN;  /* avoid structure result */
A68_589  TVRBTRN;  /* collateral clause result */
A68_52  WVRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XVRBTRN;  /* YIELD */
A68_52  YVRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  BWRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CWRBTRN;  /* YIELD */
A68_85  DWRBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  EWRBTRN;  /* avoid structure result */
A68_46  FWRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111  GWRBTRN;  /* avoid structure result */
A68_593  HWRBTRN;  /* collateral clause result */
A68_52  IWRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JWRBTRN;  /* YIELD */
A68_52  KWRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  LWRBTRN;  /* procedure value */
A68_85  MWRBTRN;  /* OPERATORS - istruct -> vector */
A68_610  NWRBTRN;  /* collateral clause result */
A68_610  OWRBTRN;  /* clause result */
A_PROC_ENTRY(get_options);
 /* line 330: */
 /* line 331: */
{ 
PURBTRN_index = 0;
 /* line 332: */
RURBTRN = Params.upb -1;
QURBTRN_param = Params.data;
for (;RURBTRN-- >= 0;
(QURBTRN_param++
) )
{
 /* line 333: */
if ( !(GHFAOST_is_int((*QURBTRN_param))) ) break;
PURBTRN_index+=1;
}
 /* line 334: */
A_CLOSURE( TURBTRN_generator, UURBTRN_generator, VURBTRN_generator );
(( VURBTRN_generator * ) ( TURBTRN_generator.nonlocals )) -> PURBTRN_index = (&PURBTRN_index);
A_CALLPROC(TURBTRN_generator,(A68_FALSE, &YURBTRN),(A68_FALSE, &YURBTRN,(TURBTRN_generator).nonlocals));
ZURBTRN_options_record = YURBTRN;
 /* line 335: */
AVRBTRN_options = OCAAOST_null_options;
 /* line 337: */
BVRBTRN_max = Options_description.upb;
 /* line 338: */
 /* line 339: */
FVRBTRN = A_VTRIM(EVRBTRN,(Params),A_VTSCRIPT(&(EVRBTRN.upb),(Params).upb,1,PURBTRN_index)) ;
GVRBTRN = ZURBTRN_options_record.upb -1;
if ( GVRBTRN != FVRBTRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
CVRBTRN_record = ZURBTRN_options_record.data;
DVRBTRN_param = FVRBTRN.data;
for (;GVRBTRN-- >= 0;
(CVRBTRN_record++
,DVRBTRN_param++
) )
{
HVRBTRN_i = KHFAOST_get_int((*DVRBTRN_param), Msg);
 /* line 340: */
IVRBTRN = (HVRBTRN_i<=0);
if ( ! IVRBTRN )
{ /* line 341: */
IVRBTRN = (HVRBTRN_i>BVRBTRN_max);
}
if ( IVRBTRN )
{ 
NVRBTRN = LVRBTRN ;
JVRBTRN.data[0] = A_UNITE(MVRBTRN,mode7,7,NVRBTRN);
JVRBTRN.data[1] = A_UNITE(OVRBTRN,mode1,1,BVRBTRN_max);
 /* line 342: */
UJBAOSL_oneline( A_HISVEC(PVRBTRN,JVRBTRN,2,A68_52 ), &QVRBTRN );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(RVRBTRN,QVRBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(RVRBTRN,QVRBTRN,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 343: */
FCAAOST_makeoptions( HVRBTRN_i, &SVRBTRN );
if ( MBAAOST_includes(AVRBTRN_options, SVRBTRN) )
{ 
XVRBTRN = VVRBTRN ;
TVRBTRN.data[0] = A_UNITE(WVRBTRN,mode7,7,XVRBTRN);
TVRBTRN.data[1] = A_UNITE(YVRBTRN,mode1,1,HVRBTRN_i);
CWRBTRN = AWRBTRN ;
TVRBTRN.data[2] = A_UNITE(BWRBTRN,mode7,7,CWRBTRN);
 /* line 344: */
UJBAOSL_oneline( A_HISVEC(DWRBTRN,TVRBTRN,3,A68_52 ), &EWRBTRN );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(FWRBTRN,EWRBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(FWRBTRN,EWRBTRN,A68_VC ),(Msg).nonlocals));
} 
else
{ 
FCAAOST_makeoptions( (*CVRBTRN_record) = HVRBTRN_i, &GWRBTRN );
OAAAOST_plusab((&AVRBTRN_options), GWRBTRN);
 /* line 345: */
 /* line 346: */
if ( BKRBTRN_show_options )
{ 
JWRBTRN = A_VINDEX(Options_description,HVRBTRN_i) ;
HWRBTRN.data[0] = A_UNITE(IWRBTRN,mode7,7,JWRBTRN);
LWRBTRN.fn.fn_global = LRAAOSL_newline;
LWRBTRN.nonlocals = A68_NIL;
HWRBTRN.data[1] = A_UNITE(KWRBTRN,mode12,12,LWRBTRN);
 /* line 347: */
 /* line 348: */
 /* line 349: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(MWRBTRN,HWRBTRN,2,A68_52 ));
} 
} 
} 
}
 /* line 350: */
NWRBTRN.Options = AVRBTRN_options;
 /* line 351: */
NWRBTRN.Options_record = ZURBTRN_options_record;
OWRBTRN = NWRBTRN;
} 
A_PROC_EXIT(get_options);
*ReturnedValue = (OWRBTRN);
return;
} 
#undef NL
 /* line 360: */
 /* line 361: */

A_STATIC A68_VOID  UWRBTRN_ptclosure(A68_BOOL  Diagnose, A68_363  Names, A68_192 * Closure, A68_570  Layout, A68_97  Msg)
{ 
A68_615  HXRBTRN_print_layout;   /* proc value of non-global proc */
A68_46  MXRBTRN;  /* clause result */
A68_46  NXRBTRN_options_description;
A68_610  OXRBTRN;  /* avoid structure result */
A68_610  PXRBTRN_parse_options;
A68_111  QXRBTRN_options;
A68_32  RXRBTRN_options_record;
A68_INT  SXRBTRN_index;
A68_363  UXRBTRN;  /* OPERATORS - trim index */
A68_193 * TXRBTRN_os;
A_PROC_ENTRY(ptclosure);
 /* line 362: */
 /* line 363: */
{ 
 /* line 369: */
A_CLOSURE( HXRBTRN_print_layout, IXRBTRN_print_layout, JXRBTRN_print_layout );
(( JXRBTRN_print_layout * ) ( HXRBTRN_print_layout.nonlocals )) -> Layout = Layout;
 /* line 374: */
 /* line 375: */
if ( Diagnose )
{ 
 /* line 376: */
MXRBTRN = NLRBTRN_no_options;
} 
else
{ 
MXRBTRN = NINBTRN_write_ella_options;
} 
NXRBTRN_options_description = MXRBTRN;
 /* line 377: */
 /* line 379: */
OURBTRN_get_options( NXRBTRN_options_description, Names, Msg, &OXRBTRN );
PXRBTRN_parse_options = OXRBTRN;
 /* line 380: */
QXRBTRN_options = PXRBTRN_parse_options.Options;
 /* line 381: */
RXRBTRN_options_record = PXRBTRN_parse_options.Options_record;
 /* line 382: */
SXRBTRN_index = RXRBTRN_options_record.upb;
 /* line 383: */
TXRBTRN_os = KTRBTRN_find_outers(A_VTRIM(UXRBTRN,(Names),A_VTSCRIPT(&(UXRBTRN.upb),(Names).upb,(SXRBTRN_index+1),(Names).upb)), Closure, Msg);
 /* line 384: */
LRAAOSL_newline(LEAAOST_out);
 /* line 385: */
 /* line 386: */
if ( Diagnose )
{ 
for ( ;; )
{ 
 /* line 387: */
if ( !((TXRBTRN_os!=HBAATRN_nilouters)) ) break;
ZDJATRN_pt_outer((*(&(TXRBTRN_os->Outer))), 0);
 /* line 388: */
 /* line 389: */
TXRBTRN_os = (*(&(TXRBTRN_os->Rest)));
}
 /* line 390: */
} 
else
{ 
for ( ;; )
{ 
 /* line 391: */
if ( !((TXRBTRN_os!=HBAATRN_nilouters)) ) break;
A_CALLPROC(HXRBTRN_print_layout,((*(&(TXRBTRN_os->Outer))), QXRBTRN_options, Msg),((*(&(TXRBTRN_os->Outer))), QXRBTRN_options, Msg,(HXRBTRN_print_layout).nonlocals));
 /* line 392: */
 /* line 393: */
TXRBTRN_os = (*(&(TXRBTRN_os->Rest)));
}
 /* line 394: */
 /* line 395: */
} 
} 
A_PROC_EXIT(ptclosure);
return;
} 
#undef NL
 /* line 422: */

A_STATIC A68_VOID  ZXRBTRN_print_closure(A68_363  Params, A68_192 * Closure, A68_BOOL  Full, A68_97  Msg)
{ 
A68_600  AYRBTRN;  /* collateral clause result */
A68_52  BYRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  CYRBTRN;  /* procedure value */
A68_52  FYRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GYRBTRN;  /* YIELD */
A68_52  HYRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  IYRBTRN;  /* procedure value */
A68_52  LYRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  MYRBTRN;  /* YIELD */
A68_52  NYRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  OYRBTRN;  /* procedure value */
A68_52  RYRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  SYRBTRN;  /* YIELD */
A68_64  TYRBTRN;  /* avoid structure result */
A68_52  UYRBTRN;  /* OPERATORS - mode -> union mode */
A68_85  VYRBTRN;  /* OPERATORS - istruct -> vector */
A68_193 * WYRBTRN_outers;
A68_197 * XYRBTRN_env;
A68_INT  YYRBTRN_sort;
A68_INT  ZYRBTRN_closureno;
A68_622  AZRBTRN;  /* collateral clause result */
A68_52  DZRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  EZRBTRN;  /* YIELD */
A68_52  FZRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  IZRBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JZRBTRN;  /* YIELD */
A68_52  KZRBTRN;  /* OPERATORS - mode -> union mode */
A68_52  LZRBTRN;  /* OPERATORS - mode -> union mode */
A68_56  MZRBTRN;  /* procedure value */
A68_85  NZRBTRN;  /* OPERATORS - istruct -> vector */
A68_623  OZRBTRN;  /* collateral clause result */
A68_32  PZRBTRN;  /* OPERATORS - istruct -> vector */
A68_32  QZRBTRN_sizes;
A68_624  SZRBTRN_usage;   /* proc value of non-global proc */
A68_BOOL  DCSBTRN;  /* optbool result */
A68_600  ECSBTRN;  /* collateral clause result */
A68_52  HCSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ICSBTRN;  /* YIELD */
A68_52  JCSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  MCSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NCSBTRN;  /* YIELD */
A68_52  OCSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  RCSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  SCSBTRN;  /* YIELD */
A68_52  TCSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  UCSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  VCSBTRN;  /* procedure value */
A68_85  WCSBTRN;  /* OPERATORS - istruct -> vector */
A68_198  XCSBTRN;  /* OPERATORS - simple index */
A68_INT  YCSBTRN;  /* YIELD */
A68_330 * ZCSBTRN_attr;
A68_593  ADSBTRN;  /* collateral clause result */
A68_52  DDSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  EDSBTRN;  /* YIELD */
A68_52  FDSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GDSBTRN;  /* YIELD */
A68_85  HDSBTRN;  /* OPERATORS - istruct -> vector */
A68_199  IDSBTRN;  /* OPERATORS - simple index */
A68_INT  JDSBTRN;  /* YIELD */
A68_328 * KDSBTRN_int;
A68_593  LDSBTRN;  /* collateral clause result */
A68_52  ODSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PDSBTRN;  /* YIELD */
A68_52  QDSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RDSBTRN;  /* YIELD */
A68_85  SDSBTRN;  /* OPERATORS - istruct -> vector */
A68_200  TDSBTRN;  /* OPERATORS - simple index */
A68_INT  UDSBTRN;  /* YIELD */
A68_322 * VDSBTRN_type;
A68_593  WDSBTRN;  /* collateral clause result */
A68_52  ZDSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  AESBTRN;  /* YIELD */
A68_52  BESBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CESBTRN;  /* YIELD */
A68_85  DESBTRN;  /* OPERATORS - istruct -> vector */
A68_201  EESBTRN;  /* OPERATORS - simple index */
A68_INT  FESBTRN;  /* YIELD */
A68_321 * GESBTRN_const;
A68_593  HESBTRN;  /* collateral clause result */
A68_52  KESBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LESBTRN;  /* YIELD */
A68_52  MESBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NESBTRN;  /* YIELD */
A68_85  OESBTRN;  /* OPERATORS - istruct -> vector */
A68_202  PESBTRN;  /* OPERATORS - simple index */
A68_INT  QESBTRN;  /* YIELD */
A68_203 * RESBTRN_fn;
A68_593  SESBTRN;  /* collateral clause result */
A68_52  VESBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  WESBTRN;  /* YIELD */
A68_52  ZESBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  AFSBTRN;  /* YIELD */
A68_52  BFSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CFSBTRN;  /* YIELD */
A68_85  DFSBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_closure);
 /* line 423: */
 /* line 424: */
{ 
 /* line 425: */
 /* line 426: */
if ( Full )
{ 
CYRBTRN.fn.fn_global = LRAAOSL_newline;
CYRBTRN.nonlocals = A68_NIL;
AYRBTRN.data[0] = A_UNITE(BYRBTRN,mode12,12,CYRBTRN);
GYRBTRN = EYRBTRN ;
AYRBTRN.data[1] = A_UNITE(FYRBTRN,mode7,7,GYRBTRN);
 /* line 428: */
IYRBTRN.fn.fn_global = LRAAOSL_newline;
IYRBTRN.nonlocals = A68_NIL;
AYRBTRN.data[2] = A_UNITE(HYRBTRN,mode12,12,IYRBTRN);
MYRBTRN = KYRBTRN ;
AYRBTRN.data[3] = A_UNITE(LYRBTRN,mode7,7,MYRBTRN);
 /* line 429: */
OYRBTRN.fn.fn_global = LRAAOSL_newline;
OYRBTRN.nonlocals = A68_NIL;
AYRBTRN.data[4] = A_UNITE(NYRBTRN,mode12,12,OYRBTRN);
SYRBTRN = QYRBTRN ;
AYRBTRN.data[5] = A_UNITE(RYRBTRN,mode7,7,SYRBTRN);
HZAAOSL_lines( 2, &TYRBTRN );
AYRBTRN.data[6] = A_UNITE(UYRBTRN,mode20,20,TYRBTRN);
 /* line 430: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(VYRBTRN,AYRBTRN,7,A68_52 ));
} 
 /* line 431: */
WYRBTRN_outers = (*(&(Closure->Outers)));
 /* line 432: */
for ( ;; )
{ 
 /* line 433: */
if ( !((WYRBTRN_outers!=HBAATRN_nilouters)) ) break;
XYRBTRN_env = (*(&((&(WYRBTRN_outers->Outer))->Environ)));
 /* line 434: */
YYRBTRN_sort = (*(&((&(WYRBTRN_outers->Outer))->Sort)));
 /* line 435: */
ZYRBTRN_closureno = (*(&((&(WYRBTRN_outers->Outer))->Closureno)));
 /* line 436: */
 /* line 437: */
if ( (XYRBTRN_env==GBAATRN_nilenviron) )
{ 
EZRBTRN = CZRBTRN ;
AZRBTRN.data[0] = A_UNITE(DZRBTRN,mode7,7,EZRBTRN);
 /* line 438: */
AZRBTRN.data[1] = A_UNITE(FZRBTRN,mode1,1,ZYRBTRN_closureno);
JZRBTRN = HZRBTRN ;
AZRBTRN.data[2] = A_UNITE(IZRBTRN,mode7,7,JZRBTRN);
AZRBTRN.data[3] = A_UNITE(KZRBTRN,mode1,1,YYRBTRN_sort);
MZRBTRN.fn.fn_global = LRAAOSL_newline;
MZRBTRN.nonlocals = A68_NIL;
AZRBTRN.data[4] = A_UNITE(LZRBTRN,mode12,12,MZRBTRN);
 /* line 439: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(NZRBTRN,AZRBTRN,5,A68_52 ));
} 
else
{ 
OZRBTRN.data[0] = (*(&(XYRBTRN_env->Attrs))).upb;
 /* line 440: */
OZRBTRN.data[1] = (*(&(XYRBTRN_env->Ints))).upb;
OZRBTRN.data[2] = (*(&(XYRBTRN_env->Types))).upb;
 /* line 441: */
OZRBTRN.data[3] = (*(&(XYRBTRN_env->Consts))).upb;
OZRBTRN.data[4] = (*(&(XYRBTRN_env->Fns))).upb;
QZRBTRN_sizes = A_HISVEC(PZRBTRN,OZRBTRN,5,A68_INT );
 /* line 442: */
A_CLOSURE( SZRBTRN_usage, TZRBTRN_usage, UZRBTRN_usage );
(( UZRBTRN_usage * ) ( SZRBTRN_usage.nonlocals )) -> Full = Full;
(( UZRBTRN_usage * ) ( SZRBTRN_usage.nonlocals )) -> QZRBTRN_sizes = QZRBTRN_sizes;
(( UZRBTRN_usage * ) ( SZRBTRN_usage.nonlocals )) -> ZYRBTRN_closureno = ZYRBTRN_closureno;
 /* line 458: */
DCSBTRN = (YYRBTRN_sort<1);
if ( ! DCSBTRN )
{DCSBTRN = (YYRBTRN_sort>5);
}
if ( ! DCSBTRN )
{ /* line 459: */
DCSBTRN = (A_VINDEX(QZRBTRN_sizes,YYRBTRN_sort)<1);
}
if ( DCSBTRN )
{ 
ICSBTRN = GCSBTRN ;
ECSBTRN.data[0] = A_UNITE(HCSBTRN,mode7,7,ICSBTRN);
 /* line 460: */
ECSBTRN.data[1] = A_UNITE(JCSBTRN,mode1,1,ZYRBTRN_closureno);
NCSBTRN = LCSBTRN ;
ECSBTRN.data[2] = A_UNITE(MCSBTRN,mode7,7,NCSBTRN);
ECSBTRN.data[3] = A_UNITE(OCSBTRN,mode1,1,YYRBTRN_sort);
SCSBTRN = QCSBTRN ;
ECSBTRN.data[4] = A_UNITE(RCSBTRN,mode7,7,SCSBTRN);
ECSBTRN.data[5] = A_UNITE(TCSBTRN,mode2,2,QZRBTRN_sizes);
VCSBTRN.fn.fn_global = LRAAOSL_newline;
VCSBTRN.nonlocals = A68_NIL;
ECSBTRN.data[6] = A_UNITE(UCSBTRN,mode12,12,VCSBTRN);
 /* line 461: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(WCSBTRN,ECSBTRN,7,A68_52 ));
} 
else
{ 
 /* line 462: */
switch ( YYRBTRN_sort )
{ 
case 1: 
{ 
XCSBTRN = (*(&(XYRBTRN_env->Attrs))) ;
YCSBTRN = 1 ;
ZCSBTRN_attr = (*(&A_VINDEX(XCSBTRN,YCSBTRN)));
 /* line 463: */
EDSBTRN = CDSBTRN ;
ADSBTRN.data[0] = A_UNITE(DDSBTRN,mode7,7,EDSBTRN);
GDSBTRN = (*(&(ZCSBTRN_attr->Attrname))) ;
ADSBTRN.data[1] = A_UNITE(FDSBTRN,mode7,7,GDSBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(HDSBTRN,ADSBTRN,2,A68_52 ));
 /* line 464: */
 /* line 465: */
 /* line 466: */
A_CALLPROC(SZRBTRN_usage,((*(&(ZCSBTRN_attr->Usage)))),((*(&(ZCSBTRN_attr->Usage))),(SZRBTRN_usage).nonlocals));
} 
break;
case 2: 
{ 
IDSBTRN = (*(&(XYRBTRN_env->Ints))) ;
JDSBTRN = 1 ;
KDSBTRN_int = (*(&A_VINDEX(IDSBTRN,JDSBTRN)));
 /* line 467: */
PDSBTRN = NDSBTRN ;
LDSBTRN.data[0] = A_UNITE(ODSBTRN,mode7,7,PDSBTRN);
RDSBTRN = (*(&(KDSBTRN_int->Intname))) ;
LDSBTRN.data[1] = A_UNITE(QDSBTRN,mode7,7,RDSBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(SDSBTRN,LDSBTRN,2,A68_52 ));
 /* line 468: */
 /* line 469: */
 /* line 470: */
A_CALLPROC(SZRBTRN_usage,((*(&(KDSBTRN_int->Usage)))),((*(&(KDSBTRN_int->Usage))),(SZRBTRN_usage).nonlocals));
} 
break;
case 3: 
{ 
TDSBTRN = (*(&(XYRBTRN_env->Types))) ;
UDSBTRN = 1 ;
VDSBTRN_type = (*(&A_VINDEX(TDSBTRN,UDSBTRN)));
 /* line 471: */
AESBTRN = YDSBTRN ;
WDSBTRN.data[0] = A_UNITE(ZDSBTRN,mode7,7,AESBTRN);
CESBTRN = (*(&(VDSBTRN_type->Typename))) ;
WDSBTRN.data[1] = A_UNITE(BESBTRN,mode7,7,CESBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(DESBTRN,WDSBTRN,2,A68_52 ));
 /* line 472: */
 /* line 473: */
 /* line 474: */
A_CALLPROC(SZRBTRN_usage,((*(&(VDSBTRN_type->Usage)))),((*(&(VDSBTRN_type->Usage))),(SZRBTRN_usage).nonlocals));
} 
break;
case 4: 
{ 
EESBTRN = (*(&(XYRBTRN_env->Consts))) ;
FESBTRN = 1 ;
GESBTRN_const = (*(&A_VINDEX(EESBTRN,FESBTRN)));
 /* line 475: */
LESBTRN = JESBTRN ;
HESBTRN.data[0] = A_UNITE(KESBTRN,mode7,7,LESBTRN);
NESBTRN = (*(&(GESBTRN_const->Constname))) ;
HESBTRN.data[1] = A_UNITE(MESBTRN,mode7,7,NESBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(OESBTRN,HESBTRN,2,A68_52 ));
 /* line 476: */
 /* line 477: */
 /* line 478: */
A_CALLPROC(SZRBTRN_usage,((*(&(GESBTRN_const->Usage)))),((*(&(GESBTRN_const->Usage))),(SZRBTRN_usage).nonlocals));
} 
break;
case 5: 
{ 
PESBTRN = (*(&(XYRBTRN_env->Fns))) ;
QESBTRN = 1 ;
RESBTRN_fn = (*(&A_VINDEX(PESBTRN,QESBTRN)));
 /* line 479: */
if ( (*(&(RESBTRN_fn->Macro))) )
{ 
WESBTRN = UESBTRN ;
SESBTRN.data[0] = A_UNITE(VESBTRN,mode7,7,WESBTRN);
} 
else
{ 
 /* line 480: */
AFSBTRN = YESBTRN ;
SESBTRN.data[0] = A_UNITE(ZESBTRN,mode7,7,AFSBTRN);
} 
CFSBTRN = (*(&(RESBTRN_fn->Fnname))) ;
SESBTRN.data[1] = A_UNITE(BFSBTRN,mode7,7,CFSBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(DFSBTRN,SESBTRN,2,A68_52 ));
 /* line 481: */
 /* line 482: */
 /* line 483: */
 /* line 484: */
 /* line 485: */
A_CALLPROC(SZRBTRN_usage,((*(&(RESBTRN_fn->Usage)))),((*(&(RESBTRN_fn->Usage))),(SZRBTRN_usage).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
 /* line 486: */
 /* line 487: */
WYRBTRN_outers = (*(&(WYRBTRN_outers->Rest)));
}
 /* line 488: */
} 
A_PROC_EXIT(print_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  GFSBTRN_undo_latest(A68_582 ** History, A68_97  Msg)
{ 
A68_582 * HFSBTRN_ptr;
A68_BOOL  IFSBTRN;  /* optbool result */
A68_BOOL  JFSBTRN;  /* optbool result */
A68_46  MFSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * NFSBTRN;  /* YIELD */
A68_INT * OFSBTRN;  /* YIELD */
A68_582  PFSBTRN;  /* collateral clause result */
A68_582 * QFSBTRN;  /* YIELD */
A68_593  RFSBTRN;  /* collateral clause result */
A68_VC  SFSBTRN;  /* avoid structure result */
A68_52  TFSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  UFSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  VFSBTRN;  /* procedure value */
A68_85  WFSBTRN;  /* OPERATORS - istruct -> vector */
A68_46  ZFSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(undo_latest);
 /* line 495: */
 /* line 496: */
if ( (EKRBTRN_stack!=CKRBTRN_stackend) )
{ 
HFSBTRN_ptr = (*History);
 /* line 497: */
for ( ;; )
{ 
 /* line 498: */
IFSBTRN = (HFSBTRN_ptr!=(&VLRBTRN_endhistory));
if ( IFSBTRN )
{JFSBTRN = ((*(&(HFSBTRN_ptr->Sort)))==FKRBTRN_nochange);
if ( ! JFSBTRN )
{JFSBTRN = ((*(&(HFSBTRN_ptr->Status)))!=JKRBTRN_original);
}
 /* line 499: */
IFSBTRN = JFSBTRN;
}
if ( !(IFSBTRN) ) break;
HFSBTRN_ptr = (*(&(HFSBTRN_ptr->Rest)));
}
 /* line 500: */
 /* line 501: */
if ( (HFSBTRN_ptr==(&VLRBTRN_endhistory)) )
{ 
 /* line 502: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(MFSBTRN,LFSBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(MFSBTRN,LFSBTRN,A68_VC ),(Msg).nonlocals));
} 
else
{ 
NFSBTRN = (&(HFSBTRN_ptr->Status)) ;
(*NFSBTRN) = LKRBTRN_cancelled;
 /* line 503: */
OFSBTRN = (&(HFSBTRN_ptr->Type)) ;
(*OFSBTRN) = PKRBTRN_ignoretype;
 /* line 504: */
 /* line 505: */
PFSBTRN.Count = (*(&(HFSBTRN_ptr->Count)));
PFSBTRN.Name = (*(&(HFSBTRN_ptr->Name)));
PFSBTRN.Sort = GKRBTRN_normal;
 /* line 506: */
PFSBTRN.Cpu_time = 0;
PFSBTRN.Status = KKRBTRN_undone;
PFSBTRN.Type = PKRBTRN_ignoretype;
PFSBTRN.Options = WKRBTRN_nulloptions;
PFSBTRN.Fns = CLRBTRN_nullouterfns;
PFSBTRN.Rest = (*History);
QFSBTRN = A_HEAP(A68_582 ) ;
(*QFSBTRN) = PFSBTRN ;
(*History) = QFSBTRN;
 /* line 507: */
IIRBTRN_assclosure = (*(&(EKRBTRN_stack->Closure)));
 /* line 508: */
EKRBTRN_stack = (*(&(EKRBTRN_stack->Rest)));
 /* line 509: */
DMRBTRN_collectgarbage();
 /* line 510: */
PMRBTRN_show_latest( (*History), &SFSBTRN );
RFSBTRN.data[0] = A_UNITE(TFSBTRN,mode7,7,SFSBTRN);
VFSBTRN.fn.fn_global = LRAAOSL_newline;
VFSBTRN.nonlocals = A68_NIL;
RFSBTRN.data[1] = A_UNITE(UFSBTRN,mode12,12,VFSBTRN);
 /* line 511: */
 /* line 512: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WFSBTRN,RFSBTRN,2,A68_52 ));
} 
} 
else
{ 
 /* line 513: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ZFSBTRN,YFSBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(ZFSBTRN,YFSBTRN,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(undo_latest);
return;
} 
#undef NL

A_STATIC A68_VOID  BGSBTRN_set_stack_max(A68_INT  Max)
{ 
A68_INT  CGSBTRN_n;
A68_580 ** DGSBTRN_ptr;
A68_INT  EGSBTRN;  /* to part of loop */
A68_INT  FGSBTRN;  /* loop control */
A68_631  GGSBTRN;  /* collateral clause result */
A68_52  HGSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  KGSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LGSBTRN;  /* YIELD */
A68_52  OGSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PGSBTRN;  /* YIELD */
A68_52  SGSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TGSBTRN;  /* YIELD */
A68_52  WGSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XGSBTRN;  /* YIELD */
A68_52  YGSBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  ZGSBTRN;  /* YIELD */
A68_52  CHSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DHSBTRN;  /* YIELD */
A68_52  GHSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  HHSBTRN;  /* YIELD */
A68_52  KHSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LHSBTRN;  /* YIELD */
A68_52  MHSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  NHSBTRN;  /* procedure value */
A68_85  OHSBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_stack_max);
 /* line 517: */
 /* line 518: */
{ 
CGSBTRN_n = 0;
 /* line 519: */
DGSBTRN_ptr = (&EKRBTRN_stack);
 /* line 520: */
for ( ;; )
{ 
 /* line 521: */
if ( !(((*DGSBTRN_ptr)!=CKRBTRN_stackend)) ) break;
DGSBTRN_ptr = (&((*DGSBTRN_ptr)->Rest));
CGSBTRN_n+=1;
}
 /* line 522: */
 /* line 523: */
if ( (CGSBTRN_n>Max) )
{ 
DGSBTRN_ptr = (&EKRBTRN_stack);
 /* line 524: */
EGSBTRN = Max;
for ( FGSBTRN = 1;
FGSBTRN <= EGSBTRN;
FGSBTRN += 1 )
{ 
DGSBTRN_ptr = (&((*DGSBTRN_ptr)->Rest));
}
 /* line 525: */
(*DGSBTRN_ptr) = CKRBTRN_stackend;
 /* line 526: */
GGSBTRN.data[0] = A_UNITE(HGSBTRN,mode1,1,Max);
 /* line 527: */
LGSBTRN = JGSBTRN ;
GGSBTRN.data[1] = A_UNITE(KGSBTRN,mode7,7,LGSBTRN);
if ( (Max==1) )
{ 
PGSBTRN = NGSBTRN ;
GGSBTRN.data[2] = A_UNITE(OGSBTRN,mode7,7,PGSBTRN);
} 
else
{ 
 /* line 528: */
TGSBTRN = RGSBTRN ;
GGSBTRN.data[2] = A_UNITE(SGSBTRN,mode7,7,TGSBTRN);
} 
XGSBTRN = VGSBTRN ;
GGSBTRN.data[3] = A_UNITE(WGSBTRN,mode7,7,XGSBTRN);
 /* line 529: */
ZGSBTRN = (CGSBTRN_n-Max) ;
GGSBTRN.data[4] = A_UNITE(YGSBTRN,mode1,1,ZGSBTRN);
if ( ((CGSBTRN_n-Max)==1) )
{ 
DHSBTRN = BHSBTRN ;
GGSBTRN.data[5] = A_UNITE(CHSBTRN,mode7,7,DHSBTRN);
} 
else
{ 
 /* line 530: */
HHSBTRN = FHSBTRN ;
GGSBTRN.data[5] = A_UNITE(GHSBTRN,mode7,7,HHSBTRN);
} 
LHSBTRN = JHSBTRN ;
GGSBTRN.data[6] = A_UNITE(KHSBTRN,mode7,7,LHSBTRN);
NHSBTRN.fn.fn_global = LRAAOSL_newline;
NHSBTRN.nonlocals = A68_NIL;
GGSBTRN.data[7] = A_UNITE(MHSBTRN,mode12,12,NHSBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OHSBTRN,GGSBTRN,8,A68_52 ));
 /* line 531: */
 /* line 532: */
 /* line 533: */
DMRBTRN_collectgarbage();
} 
} 
A_PROC_EXIT(set_stack_max);
return;
} 
#undef NL

A_STATIC A68_VOID  QHSBTRN_assign(A68_192 * Newclosure)
{ 
A68_580  RHSBTRN;  /* collateral clause result */
A68_580 * SHSBTRN;  /* YIELD */
A_PROC_ENTRY(assign);
 /* line 537: */
 /* line 538: */
{ 
RHSBTRN.Closure = IIRBTRN_assclosure;
RHSBTRN.Rest = EKRBTRN_stack;
SHSBTRN = A_HEAP(A68_580 ) ;
(*SHSBTRN) = RHSBTRN ;
EKRBTRN_stack = SHSBTRN;
 /* line 539: */
IIRBTRN_assclosure = Newclosure;
 /* line 540: */
 /* line 541: */
BGSBTRN_set_stack_max(DKRBTRN_max_stack_size);
} 
A_PROC_EXIT(assign);
return;
} 
#undef NL
 /* line 550: */
 /* line 551: */
 /* line 552: */
 /* line 553: */

A_STATIC A68_VOID  AISBTRN_do_transform(A68_633  Transform, A68_635  Transform_outer, A68_INT  Sort, A68_VC  Name, A68_46  Options_description, A68_363  Params, A68_97  Msg)
{ 
A68_46  DISBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_610  EISBTRN;  /* avoid structure result */
A68_610  FISBTRN_parse_options;
A68_111  GISBTRN_options;
A68_32  HISBTRN_options_record;
A68_INT  IISBTRN_index;
A68_BOOL  JISBTRN;  /* optbool result */
A68_INT  KISBTRN;  /* YIELD */
A68_BOOL  LISBTRN_have_names;
A68_INT  MISBTRN_n_fnnames;
A68_362 * NISBTRN_param;
A68_363  OISBTRN;  /* OPERATORS - trim index */
A68_363  PISBTRN;  /* forall yield */
A68_INT  QISBTRN;  /* forall loop counter */
A68_584  SISBTRN_generator;   /* proc value of non-global proc */
A68_583  XISBTRN;  /* avoid structure result */
A68_583  YISBTRN_fnnames;
A68_192 * ZISBTRN;  /* clause result */
A68_192 * AJSBTRN_newclosure;
A68_639  CJSBTRN_generator;   /* proc value of non-global proc */
A68_638  IJSBTRN;  /* avoid structure result */
A68_638  HJSBTRN_new_fns;
A68_196 ** JJSBTRN_new;
A68_581 * KJSBTRN_fnname;
A68_INT  LJSBTRN;  /* forall loop counter */
A68_INT  MJSBTRN;  /* YIELD */
A68_VC  NJSBTRN;  /* avoid structure result */
A68_VC  OJSBTRN_name;
A68_581  PJSBTRN;  /* collateral clause result */
A68_BOOL  QJSBTRN;  /* optbool result */
A68_INT  RJSBTRN;  /* YIELD */
A68_INT  SJSBTRN;  /* YIELD */
A68_INT  TJSBTRN_number;
A68_196  UJSBTRN_outer;
A68_193 * VJSBTRN_os;
A68_BOOL  WJSBTRN;  /* optbool result */
A68_607  XJSBTRN;  /* avoid structure result */
A68_VC  YJSBTRN_decname;
A68_589  ZJSBTRN;  /* collateral clause result */
A68_52  CKSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DKSBTRN;  /* YIELD */
A68_52  EKSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  HKSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  IKSBTRN;  /* YIELD */
A68_85  JKSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  KKSBTRN;  /* avoid structure result */
A68_46  LKSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_622  MKSBTRN;  /* collateral clause result */
A68_52  PKSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  QKSBTRN;  /* YIELD */
A68_52  RKSBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  SKSBTRN;  /* YIELD */
A68_52  VKSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  WKSBTRN;  /* YIELD */
A68_52  XKSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ALSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BLSBTRN;  /* YIELD */
A68_85  CLSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  DLSBTRN;  /* avoid structure result */
A68_46  ELSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FLSBTRN_changed;
A68_INT  GLSBTRN_start;
A68_97  JLSBTRN_tmsg;   /* proc value of non-global proc */
A68_484  FOSBTRN;  /* collateral clause result */
A68_484  GOSBTRN_new;
A68_196 ** HOSBTRN_new;
A68_INT  IOSBTRN;  /* forall loop counter */
A68_635  JOSBTRN;  /* united object - for case conformity */
A68_634  KOSBTRN_o1;
A68_483  LOSBTRN;  /* clause result */
A68_483  MOSBTRN;  /* avoid structure result */
A68_536  NOSBTRN_o2;
A68_483  OOSBTRN;  /* avoid structure result */
A68_46  ROSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_483  SOSBTRN;  /* OPERATORS - skip to mode */
A68_483  TOSBTRN_newfn;
A68_484  UOSBTRN;  /* collateral clause result */
A68_633  VOSBTRN;  /* united object - for case conformity */
A68_532  WOSBTRN_t1;
A68_484  XOSBTRN;  /* avoid structure result */
A68_534  YOSBTRN_t2;
A68_484  ZOSBTRN;  /* avoid structure result */
A68_INT  APSBTRN_finish;
A68_INT  BPSBTRN;  /* clause result */
A68_INT  CPSBTRN_state;
A68_582  DPSBTRN;  /* collateral clause result */
A68_VC  EPSBTRN;  /* avoid structure result */
A68_582 * FPSBTRN;  /* YIELD */
A68_VC  GPSBTRN;  /* avoid structure result */
A68_52  HPSBTRN;  /* OPERATORS - mode -> union mode */
A68_85  IPSBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_593  JPSBTRN;  /* collateral clause result */
A68_52  MPSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NPSBTRN;  /* YIELD */
A68_52  OPSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  PPSBTRN;  /* procedure value */
A68_85  QPSBTRN;  /* OPERATORS - istruct -> vector */
A68_593  RPSBTRN;  /* collateral clause result */
A68_52  UPSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VPSBTRN;  /* YIELD */
A68_52  WPSBTRN;  /* OPERATORS - mode -> union mode */
A68_56  XPSBTRN;  /* procedure value */
A68_85  YPSBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(do_transform);
 /* line 554: */
 /* line 611: */
{ 
 /* line 612: */
if ( !HIRBTRN_assembled )
{ 
 /* line 613: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(DISBTRN,CISBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(DISBTRN,CISBTRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 616: */
 /* line 618: */
OURBTRN_get_options( Options_description, Params, Msg, &EISBTRN );
FISBTRN_parse_options = EISBTRN;
 /* line 619: */
GISBTRN_options = FISBTRN_parse_options.Options;
 /* line 620: */
HISBTRN_options_record = FISBTRN_parse_options.Options_record;
 /* line 621: */
IISBTRN_index = HISBTRN_options_record.upb;
 /* line 623: */
JISBTRN = (IISBTRN_index<Params.upb);
if ( JISBTRN )
{KISBTRN = (IISBTRN_index+1) ;
JISBTRN = HKFAOST_is_fnname((*(&A_VINDEX(Params,KISBTRN))));
}
LISBTRN_have_names = JISBTRN;
 /* line 624: */
MISBTRN_n_fnnames = 0;
 /* line 625: */
 /* line 626: */
if ( LISBTRN_have_names )
{ 
 /* line 627: */
PISBTRN = A_VTRIM(OISBTRN,(Params),A_VTSCRIPT(&(OISBTRN.upb),(Params).upb,(IISBTRN_index+1),(Params).upb)) ;
QISBTRN = PISBTRN.upb -1;
NISBTRN_param = PISBTRN.data;
for (;QISBTRN-- >= 0;
(NISBTRN_param++
) )
{
if ( HKFAOST_is_fnname((*NISBTRN_param)) )
{ 
MISBTRN_n_fnnames+=1;
} 
}
 /* line 628: */
} 
 /* line 636: */
A_CLOSURE( SISBTRN_generator, TISBTRN_generator, UISBTRN_generator );
(( UISBTRN_generator * ) ( SISBTRN_generator.nonlocals )) -> MISBTRN_n_fnnames = (&MISBTRN_n_fnnames);
A_CALLPROC(SISBTRN_generator,(A68_FALSE, &XISBTRN),(A68_FALSE, &XISBTRN,(SISBTRN_generator).nonlocals));
YISBTRN_fnnames = XISBTRN;
 /* line 637: */
 /* line 638: */
if ( LISBTRN_have_names )
{ 
 /* line 639: */
 /* line 640: */
ZISBTRN = DPCATRN_copy_closure(IIRBTRN_assclosure, Msg);
} 
else
{ 
ZISBTRN = QJRBTRN_null_closure;
} 
AJSBTRN_newclosure = ZISBTRN;
 /* line 641: */
A_CLOSURE( CJSBTRN_generator, DJSBTRN_generator, EJSBTRN_generator );
(( EJSBTRN_generator * ) ( CJSBTRN_generator.nonlocals )) -> MISBTRN_n_fnnames = (&MISBTRN_n_fnnames);
A_CALLPROC(CJSBTRN_generator,(A68_TRUE, &IJSBTRN),(A68_TRUE, &IJSBTRN,(CJSBTRN_generator).nonlocals));
HJSBTRN_new_fns = IJSBTRN;
 /* line 643: */
 /* line 644: */
LJSBTRN = HJSBTRN_new_fns.upb -1;
if ( LJSBTRN != YISBTRN_fnnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
JJSBTRN_new = HJSBTRN_new_fns.data;
KJSBTRN_fnname = YISBTRN_fnnames.data;
for (;LJSBTRN-- >= 0;
(JJSBTRN_new++
,KJSBTRN_fnname++
) )
{
MJSBTRN = IISBTRN_index+=1 ;
LKFAOST_get_fnname( (*(&A_VINDEX(Params,MJSBTRN))), Msg, &NJSBTRN );
OJSBTRN_name = NJSBTRN;
 /* line 645: */
PJSBTRN.Name = OJSBTRN_name;
QJSBTRN = (IISBTRN_index<Params.upb);
if ( QJSBTRN )
{ /* line 646: */
RJSBTRN = (IISBTRN_index+1) ;
QJSBTRN = GHFAOST_is_int((*(&A_VINDEX(Params,RJSBTRN))));
}
if ( QJSBTRN )
{ 
 /* line 647: */
 /* line 648: */
SJSBTRN = IISBTRN_index+=1 ;
PJSBTRN.N = KHFAOST_get_int((*(&A_VINDEX(Params,SJSBTRN))), Msg);
} 
else
{ 
 /* line 649: */
PJSBTRN.N = 1;
} 
(*KJSBTRN_fnname) = PJSBTRN;
 /* line 651: */
TJSBTRN_number = (*(&(KJSBTRN_fnname->N)));
 /* line 652: */
 /* line 653: */
VJSBTRN_os = (*(&(AJSBTRN_newclosure->Outers)));
 /* line 654: */
for ( ;; )
{ 
WJSBTRN = (TJSBTRN_number!=0);
if ( WJSBTRN )
{ /* line 655: */
WJSBTRN = (VJSBTRN_os!=HBAATRN_nilouters);
}
 /* line 656: */
if ( !(WJSBTRN) ) break;
FSRBTRN_outer_idno( (*(&(VJSBTRN_os->Outer))), &XJSBTRN );
YJSBTRN_decname = XJSBTRN.Id;
 /* line 657: */
 /* line 658: */
if ( A_VC_EQ(YJSBTRN_decname,OJSBTRN_name) )
{ 
if ( (TJSBTRN_number==1) )
{ 
(*JJSBTRN_new) = (&(VJSBTRN_os->Outer));
} 
 /* line 659: */
 /* line 660: */
TJSBTRN_number-=1;
} 
 /* line 661: */
 /* line 662: */
VJSBTRN_os = (*(&(VJSBTRN_os->Rest)));
}
 /* line 663: */
 /* line 664: */
if ( (TJSBTRN_number==(*(&(KJSBTRN_fnname->N)))) )
{ 
DKSBTRN = BKSBTRN ;
ZJSBTRN.data[0] = A_UNITE(CKSBTRN,mode7,7,DKSBTRN);
ZJSBTRN.data[1] = A_UNITE(EKSBTRN,mode7,7,OJSBTRN_name);
IKSBTRN = GKSBTRN ;
ZJSBTRN.data[2] = A_UNITE(HKSBTRN,mode7,7,IKSBTRN);
 /* line 665: */
UJBAOSL_oneline( A_HISVEC(JKSBTRN,ZJSBTRN,3,A68_52 ), &KKSBTRN );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(LKSBTRN,KKSBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(LKSBTRN,KKSBTRN,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 666: */
if ( (TJSBTRN_number!=0) )
{ 
QKSBTRN = OKSBTRN ;
MKSBTRN.data[0] = A_UNITE(PKSBTRN,mode7,7,QKSBTRN);
 /* line 667: */
SKSBTRN = ((*(&(KJSBTRN_fnname->N)))-TJSBTRN_number) ;
MKSBTRN.data[1] = A_UNITE(RKSBTRN,mode1,1,SKSBTRN);
WKSBTRN = UKSBTRN ;
MKSBTRN.data[2] = A_UNITE(VKSBTRN,mode7,7,WKSBTRN);
MKSBTRN.data[3] = A_UNITE(XKSBTRN,mode7,7,OJSBTRN_name);
BLSBTRN = ZKSBTRN ;
MKSBTRN.data[4] = A_UNITE(ALSBTRN,mode7,7,BLSBTRN);
 /* line 668: */
 /* line 669: */
UJBAOSL_oneline( A_HISVEC(CLSBTRN,MKSBTRN,5,A68_52 ), &DLSBTRN );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ELSBTRN,DLSBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(ELSBTRN,DLSBTRN,A68_VC ),(Msg).nonlocals));
} 
} 
}
 /* line 671: */
FLSBTRN_changed = A68_FALSE;
 /* line 672: */
GLSBTRN_start = ZACAOSI_get_cpu_time();
 /* line 674: */
A_CLOSURE( JLSBTRN_tmsg, KLSBTRN_tmsg, LLSBTRN_tmsg );
(( LLSBTRN_tmsg * ) ( JLSBTRN_tmsg.nonlocals )) -> Name = Name;
(( LLSBTRN_tmsg * ) ( JLSBTRN_tmsg.nonlocals )) -> Sort = Sort;
(( LLSBTRN_tmsg * ) ( JLSBTRN_tmsg.nonlocals )) -> Msg = Msg;
 /* line 698: */
FOSBTRN.Cl = QJRBTRN_null_closure;
FOSBTRN.C = A68_FALSE;
GOSBTRN_new = FOSBTRN;
 /* line 700: */
 /* line 701: */
 /* line 702: */
if ( LISBTRN_have_names )
{ 
 /* line 703: */
IOSBTRN = HJSBTRN_new_fns.upb -1;
HOSBTRN_new = HJSBTRN_new_fns.data;
for (;IOSBTRN-- >= 0;
(HOSBTRN_new++
) )
{
 /* line 704: */
 /* line 705: */
JOSBTRN = Transform_outer ;
switch ( JOSBTRN.mode )
{ 
case 1: /* PROC(MODE196,REF MODE192,MODE97) MODE483 */
KOSBTRN_o1 = (JOSBTRN.data.mode1);
 /* line 706: */
 /* line 707: */
A_CALLPROC(KOSBTRN_o1,((**HOSBTRN_new), IIRBTRN_assclosure, JLSBTRN_tmsg, &MOSBTRN),((**HOSBTRN_new), IIRBTRN_assclosure, JLSBTRN_tmsg, &MOSBTRN,(KOSBTRN_o1).nonlocals));
LOSBTRN = MOSBTRN;
break;
case 2: /* PROC(MODE196,REF MODE192,MODE111,MODE97) MODE483 */
NOSBTRN_o2 = (JOSBTRN.data.mode2);
 /* line 708: */
 /* line 709: */
A_CALLPROC(NOSBTRN_o2,((**HOSBTRN_new), IIRBTRN_assclosure, GISBTRN_options, JLSBTRN_tmsg, &OOSBTRN),((**HOSBTRN_new), IIRBTRN_assclosure, GISBTRN_options, JLSBTRN_tmsg, &OOSBTRN,(NOSBTRN_o2).nonlocals));
LOSBTRN = OOSBTRN;
break;
default: 
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(ROSBTRN,QOSBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(ROSBTRN,QOSBTRN,A68_VC ),(Msg).nonlocals));
 /* line 710: */
LOSBTRN = SOSBTRN;
} 
break;
} 
TOSBTRN_newfn = LOSBTRN;
 /* line 711: */
 /* line 712: */
if ( TOSBTRN_newfn.C )
{ 
FLSBTRN_changed = A68_TRUE;
 /* line 713: */
 /* line 714: */
 /* line 715: */
(**HOSBTRN_new) = TOSBTRN_newfn.O;
} 
}
 /* line 716: */
UOSBTRN.Cl = AJSBTRN_newclosure;
 /* line 717: */
 /* line 718: */
UOSBTRN.C = FLSBTRN_changed;
} 
else
{ 
 /* line 719: */
VOSBTRN = Transform ;
switch ( VOSBTRN.mode )
{ 
case 1: /* PROC(REF MODE192,MODE97) MODE484 */
WOSBTRN_t1 = (VOSBTRN.data.mode1);
 /* line 720: */
 /* line 721: */
A_CALLPROC(WOSBTRN_t1,(IIRBTRN_assclosure, JLSBTRN_tmsg, &XOSBTRN),(IIRBTRN_assclosure, JLSBTRN_tmsg, &XOSBTRN,(WOSBTRN_t1).nonlocals));
UOSBTRN = XOSBTRN;
break;
case 2: /* PROC(REF MODE192,MODE111,MODE97) MODE484 */
YOSBTRN_t2 = (VOSBTRN.data.mode2);
 /* line 722: */
 /* line 723: */
 /* line 724: */
A_CALLPROC(YOSBTRN_t2,(IIRBTRN_assclosure, GISBTRN_options, JLSBTRN_tmsg, &ZOSBTRN),(IIRBTRN_assclosure, GISBTRN_options, JLSBTRN_tmsg, &ZOSBTRN,(YOSBTRN_t2).nonlocals));
UOSBTRN = ZOSBTRN;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
GOSBTRN_new = UOSBTRN;
 /* line 726: */
APSBTRN_finish = ZACAOSI_get_cpu_time();
 /* line 727: */
if ( (*(&((&GOSBTRN_new)->C))) )
{ 
BPSBTRN = Sort;
} 
else
{ 
BPSBTRN = FKRBTRN_nochange;
} 
CPSBTRN_state = BPSBTRN;
 /* line 729: */
 /* line 730: */
DPSBTRN.Count = OLRBTRN_history_count+=1;
ZAAAOSI_makervc( Name, &EPSBTRN );
DPSBTRN.Name = EPSBTRN;
DPSBTRN.Sort = CPSBTRN_state;
 /* line 731: */
DPSBTRN.Cpu_time = (APSBTRN_finish-GLSBTRN_start);
DPSBTRN.Status = JKRBTRN_original;
DPSBTRN.Type = MKRBTRN_transtype;
DPSBTRN.Options = HISBTRN_options_record;
DPSBTRN.Fns = YISBTRN_fnnames;
DPSBTRN.Rest = WLRBTRN_history;
FPSBTRN = A_HEAP(A68_582 ) ;
(*FPSBTRN) = DPSBTRN ;
WLRBTRN_history = FPSBTRN;
 /* line 733: */
if ( (CPSBTRN_state!=FKRBTRN_nochange) )
{ 
QHSBTRN_assign((*(&((&GOSBTRN_new)->Cl))));
} 
 /* line 735: */
PMRBTRN_show_latest( WLRBTRN_history, &GPSBTRN );
GFBAOSL_put(KEAAOST_screen, A_HVEC(IPSBTRN,A_UNITE(HPSBTRN,mode7,7,GPSBTRN),A68_52 ));
 /* line 737: */
 /* line 738: */
if ( (CPSBTRN_state==IKRBTRN_corrupts) )
{ 
HIRBTRN_assembled = A68_FALSE;
 /* line 739: */
 /* line 740: */
NPSBTRN = LPSBTRN ;
JPSBTRN.data[0] = A_UNITE(MPSBTRN,mode7,7,NPSBTRN);
PPSBTRN.fn.fn_global = LRAAOSL_newline;
PPSBTRN.nonlocals = A68_NIL;
JPSBTRN.data[1] = A_UNITE(OPSBTRN,mode12,12,PPSBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QPSBTRN,JPSBTRN,2,A68_52 ));
 /* line 741: */
 /* line 742: */
BGSBTRN_set_stack_max(0);
} 
else
{ 
 /* line 743: */
if ( (CPSBTRN_state==HKRBTRN_overwrites) )
{ 
VPSBTRN = TPSBTRN ;
RPSBTRN.data[0] = A_UNITE(UPSBTRN,mode7,7,VPSBTRN);
XPSBTRN.fn.fn_global = LRAAOSL_newline;
XPSBTRN.nonlocals = A68_NIL;
RPSBTRN.data[1] = A_UNITE(WPSBTRN,mode12,12,XPSBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YPSBTRN,RPSBTRN,2,A68_52 ));
 /* line 744: */
 /* line 745: */
BGSBTRN_set_stack_max(0);
} 
else
{ 
 /* line 746: */
 /* line 747: */
LRAAOSL_newline(KEAAOST_screen);
} 
} 
} 
A_PROC_EXIT(do_transform);
return;
} 
#undef NL
 /* line 750: */
 /* line 751: */
 /* line 752: */

A_STATIC A68_VOID  EQSBTRN_make_helptext(A68_46  Options_description, A68_VC  Nametype_str, A68_VC  Optype_str, A68_BOOL  Have_outer_proc, A68_VC  Help_msg, A68_102  *ReturnedValue)
{ 
A68_INT  FQSBTRN;  /* clause result */
A68_INT  GQSBTRN_n_lines;
A68_587  IQSBTRN_generator;   /* proc value of non-global proc */
A68_102  NQSBTRN;  /* avoid structure result */
A68_102  OQSBTRN_help;
A68_BOOL  PQSBTRN_have_options;
A68_593  QQSBTRN;  /* collateral clause result */
A68_52  RQSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  SQSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  TQSBTRN;  /* YIELD */
A68_VC  UQSBTRN;  /* clause result */
A68_85  VQSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  WQSBTRN;  /* avoid structure result */
A68_591  XQSBTRN;  /* collateral clause result */
A68_52  YQSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  BRSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CRSBTRN;  /* YIELD */
A68_52  DRSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  GRSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  HRSBTRN;  /* YIELD */
A68_85  IRSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  JRSBTRN;  /* avoid structure result */
A68_593  KRSBTRN;  /* collateral clause result */
A68_52  LRSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ORSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PRSBTRN;  /* YIELD */
A68_85  QRSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  RRSBTRN;  /* avoid structure result */
A68_INT  SRSBTRN;  /* YIELD */
A68_VC * TRSBTRN;  /* YIELD */
A68_INT  URSBTRN_index;
A68_VC  VRSBTRN_descript;
A68_VC * WRSBTRN;  /* forall control - []x */
A68_INT  XRSBTRN;  /* forall loop counter */
A68_589  YRSBTRN;  /* collateral clause result */
A68_57  ZRSBTRN;  /* avoid structure result */
A68_52  ASSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  DSSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ESSBTRN;  /* YIELD */
A68_52  FSSBTRN;  /* OPERATORS - mode -> union mode */
A68_85  GSSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  HSSBTRN;  /* avoid structure result */
A68_VC * ISSBTRN;  /* YIELD */
A68_651  JSSBTRN;  /* collateral clause result */
A68_52  MSSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NSSBTRN;  /* YIELD */
A68_52  QSSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RSSBTRN;  /* YIELD */
A68_52  SSSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  TSSBTRN;  /* YIELD */
A68_52  USSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  VSSBTRN;  /* YIELD */
A68_52  WSSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ZSSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ATSBTRN;  /* YIELD */
A68_52  BTSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ETSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FTSBTRN;  /* YIELD */
A68_52  GTSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  JTSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KTSBTRN;  /* YIELD */
A68_52  LTSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  OTSBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PTSBTRN;  /* YIELD */
A68_52  QTSBTRN;  /* OPERATORS - mode -> union mode */
A68_52  RTSBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  STSBTRN;  /* YIELD */
A68_INT  TTSBTRN;  /* YIELD */
A68_85  UTSBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  VTSBTRN;  /* avoid structure result */
A68_VC * WTSBTRN;  /* YIELD */
A68_102  XTSBTRN;  /* clause result */
A_PROC_ENTRY(make_helptext);
 /* line 753: */
 /* line 754: */
{ 
 /* line 755: */
if ( Have_outer_proc )
{ 
FQSBTRN = 1;
} 
else
{ 
FQSBTRN = 0;
} 
GQSBTRN_n_lines = ((Options_description.upb+1)+FQSBTRN);
 /* line 756: */
A_CLOSURE( IQSBTRN_generator, JQSBTRN_generator, KQSBTRN_generator );
(( KQSBTRN_generator * ) ( IQSBTRN_generator.nonlocals )) -> GQSBTRN_n_lines = GQSBTRN_n_lines;
A_CALLPROC(IQSBTRN_generator,(A68_FALSE, &NQSBTRN),(A68_FALSE, &NQSBTRN,(IQSBTRN_generator).nonlocals));
OQSBTRN_help = NQSBTRN;
 /* line 757: */
PQSBTRN_have_options = (Options_description.upb>0);
 /* line 758: */
 /* line 759: */
if ( !PQSBTRN_have_options )
{ 
QQSBTRN.data[0] = A_UNITE(RQSBTRN,mode7,7,Help_msg);
TQSBTRN = '.' ;
QQSBTRN.data[1] = A_UNITE(SQSBTRN,mode6,6,TQSBTRN);
 /* line 760: */
 /* line 761: */
UJBAOSL_oneline( A_HISVEC(VQSBTRN,QQSBTRN,2,A68_52 ), &WQSBTRN );
UQSBTRN = WQSBTRN;
} 
else
{ 
if ( Have_outer_proc )
{ 
 /* line 762: */
XQSBTRN.data[0] = A_UNITE(YQSBTRN,mode7,7,Help_msg);
CRSBTRN = ARSBTRN ;
XQSBTRN.data[1] = A_UNITE(BRSBTRN,mode7,7,CRSBTRN);
XQSBTRN.data[2] = A_UNITE(DRSBTRN,mode7,7,JDFAOST_int_str);
HRSBTRN = FRSBTRN ;
XQSBTRN.data[3] = A_UNITE(GRSBTRN,mode7,7,HRSBTRN);
 /* line 763: */
UJBAOSL_oneline( A_HISVEC(IRSBTRN,XQSBTRN,4,A68_52 ), &JRSBTRN );
UQSBTRN = JRSBTRN;
} 
else
{ 
KRSBTRN.data[0] = A_UNITE(LRSBTRN,mode7,7,Help_msg);
PRSBTRN = NRSBTRN ;
KRSBTRN.data[1] = A_UNITE(ORSBTRN,mode7,7,PRSBTRN);
 /* line 764: */
UJBAOSL_oneline( A_HISVEC(QRSBTRN,KRSBTRN,2,A68_52 ), &RRSBTRN );
UQSBTRN = RRSBTRN;
} 
} 
SRSBTRN = 1 ;
TRSBTRN = (&A_VINDEX(OQSBTRN_help,SRSBTRN)) ;
(*TRSBTRN) = UQSBTRN;
 /* line 765: */
URSBTRN_index = 1;
 /* line 766: */
 /* line 767: */
XRSBTRN = Options_description.upb -1;
WRSBTRN = Options_description.data;
for (;XRSBTRN-- >= 0;
(WRSBTRN++
) )
{
VRSBTRN_descript = *WRSBTRN;
URSBTRN_index+=1;
 /* line 768: */
ZXAAOSL_intwidth( (URSBTRN_index-1), 2, &ZRSBTRN );
YRSBTRN.data[0] = A_UNITE(ASSBTRN,mode13,13,ZRSBTRN);
ESSBTRN = CSSBTRN ;
YRSBTRN.data[1] = A_UNITE(DSSBTRN,mode7,7,ESSBTRN);
YRSBTRN.data[2] = A_UNITE(FSSBTRN,mode7,7,VRSBTRN_descript);
 /* line 769: */
UJBAOSL_oneline( A_HISVEC(GSSBTRN,YRSBTRN,3,A68_52 ), &HSSBTRN );
ISSBTRN = (&A_VINDEX(OQSBTRN_help,URSBTRN_index)) ;
(*ISSBTRN) = HSSBTRN;
}
 /* line 770: */
 /* line 771: */
if ( Have_outer_proc )
{ 
 /* line 772: */
 /* line 773: */
NSSBTRN = LSSBTRN ;
JSSBTRN.data[0] = A_UNITE(MSSBTRN,mode7,7,NSSBTRN);
if ( PQSBTRN_have_options )
{ 
RSSBTRN = PSSBTRN ;
JSSBTRN.data[1] = A_UNITE(QSSBTRN,mode7,7,RSSBTRN);
} 
else
{ 
 /* line 774: */
TSSBTRN = ' ' ;
JSSBTRN.data[1] = A_UNITE(SSSBTRN,mode6,6,TSSBTRN);
} 
VSSBTRN = '[' ;
JSSBTRN.data[2] = A_UNITE(USSBTRN,mode6,6,VSSBTRN);
JSSBTRN.data[3] = A_UNITE(WSSBTRN,mode7,7,Nametype_str);
ATSBTRN = YSSBTRN ;
JSSBTRN.data[4] = A_UNITE(ZSSBTRN,mode7,7,ATSBTRN);
 /* line 775: */
JSSBTRN.data[5] = A_UNITE(BTSBTRN,mode7,7,JDFAOST_int_str);
 /* line 776: */
FTSBTRN = DTSBTRN ;
JSSBTRN.data[6] = A_UNITE(ETSBTRN,mode7,7,FTSBTRN);
 /* line 777: */
JSSBTRN.data[7] = A_UNITE(GTSBTRN,mode7,7,Optype_str);
KTSBTRN = ITSBTRN ;
JSSBTRN.data[8] = A_UNITE(JTSBTRN,mode7,7,KTSBTRN);
 /* line 779: */
JSSBTRN.data[9] = A_UNITE(LTSBTRN,mode7,7,JDFAOST_int_str);
 /* line 780: */
PTSBTRN = NTSBTRN ;
JSSBTRN.data[10] = A_UNITE(OTSBTRN,mode7,7,PTSBTRN);
JSSBTRN.data[11] = A_UNITE(QTSBTRN,mode7,7,Optype_str);
STSBTRN = '.' ;
JSSBTRN.data[12] = A_UNITE(RTSBTRN,mode6,6,STSBTRN);
 /* line 781: */
TTSBTRN = (URSBTRN_index+1) ;
UJBAOSL_oneline( A_HISVEC(UTSBTRN,JSSBTRN,13,A68_52 ), &VTSBTRN );
WTSBTRN = (&A_VINDEX(OQSBTRN_help,TTSBTRN)) ;
(*WTSBTRN) = VTSBTRN;
} 
 /* line 782: */
 /* line 783: */
XTSBTRN = OQSBTRN_help;
} 
A_PROC_EXIT(make_helptext);
*ReturnedValue = (XTSBTRN);
return;
} 
#undef NL
 /* line 786: */
 /* line 787: */

A_STATIC A68_389 * EUSBTRN_make_command(A68_VC  Name, A68_VC  Abreviation, A68_46  Options_description, A68_BOOL  Have_outer_proc, A68_VC  Help_msg, A68_387  Action)
{ 
A68_359  FUSBTRN;  /* avoid structure result */
A68_361  GUSBTRN;  /* OPERATORS - mode -> union mode */
A68_359  HUSBTRN;  /* avoid structure result */
A68_361  IUSBTRN;  /* OPERATORS - mode -> union mode */
A68_361  JUSBTRN_options_syntax;
A68_653  KUSBTRN;  /* collateral clause result */
A68_359  LUSBTRN;  /* avoid structure result */
A68_361  MUSBTRN;  /* OPERATORS - mode -> union mode */
A68_360  NUSBTRN;  /* OPERATORS - istruct -> vector */
A68_359  OUSBTRN;  /* avoid structure result */
A68_361  PUSBTRN;  /* OPERATORS - mode -> union mode */
A68_359  QUSBTRN;  /* avoid structure result */
A68_361  RUSBTRN;  /* OPERATORS - mode -> union mode */
A68_359  SUSBTRN;  /* avoid structure result */
A68_361  TUSBTRN;  /* OPERATORS - mode -> union mode */
A68_361  UUSBTRN_fnnames_syntax;
A68_361  VUSBTRN;  /* clause result */
A68_653  WUSBTRN;  /* collateral clause result */
A68_360  XUSBTRN;  /* OPERATORS - istruct -> vector */
A68_359  YUSBTRN;  /* avoid structure result */
A68_361  ZUSBTRN;  /* OPERATORS - mode -> union mode */
A68_361  AVSBTRN_syntax;
A68_102  DVSBTRN;  /* avoid structure result */
A68_102  EVSBTRN_help;
A68_389  FVSBTRN;  /* collateral clause result */
A68_VC  GVSBTRN;  /* avoid structure result */
A68_VC  HVSBTRN;  /* avoid structure result */
A68_393  IVSBTRN;  /* OPERATORS - mode -> union mode */
A68_385  JVSBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * KVSBTRN;  /* clause result */
A68_389 * LVSBTRN;  /* YIELD */
A_PROC_ENTRY(make_command);
 /* line 788: */
 /* line 843: */
{ 
LTAAOST_opt( AHFAOST_int_syntax, &FUSBTRN );
DUAAOST_star( A_UNITE(GUSBTRN,mode2,2,FUSBTRN), &HUSBTRN );
JUSBTRN_options_syntax = A_UNITE(IUSBTRN,mode2,2,HUSBTRN);
 /* line 844: */
 /* line 845: */
KUSBTRN.data[0] = CJFAOST_fnname_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &LUSBTRN );
KUSBTRN.data[1] = A_UNITE(MUSBTRN,mode2,2,LUSBTRN);
ATAAOST_prod( A_HISVEC(NUSBTRN,KUSBTRN,2,A68_361 ), &OUSBTRN );
LTAAOST_opt( A_UNITE(PUSBTRN,mode2,2,OUSBTRN), &QUSBTRN );
DUAAOST_star( A_UNITE(RUSBTRN,mode2,2,QUSBTRN), &SUSBTRN );
UUSBTRN_fnnames_syntax = A_UNITE(TUSBTRN,mode2,2,SUSBTRN);
 /* line 846: */
 /* line 847: */
if ( (Options_description.upb==0) )
{ 
 /* line 848: */
 /* line 849: */
if ( Have_outer_proc )
{ 
 /* line 850: */
VUSBTRN = UUSBTRN_fnnames_syntax;
} 
else
{ 
 /* line 851: */
 /* line 852: */
VUSBTRN = SRAAOST_noparameters;
} 
} 
else
{ 
if ( Have_outer_proc )
{ 
WUSBTRN.data[0] = JUSBTRN_options_syntax;
WUSBTRN.data[1] = UUSBTRN_fnnames_syntax;
 /* line 853: */
 /* line 854: */
ATAAOST_prod( A_HISVEC(XUSBTRN,WUSBTRN,2,A68_361 ), &YUSBTRN );
VUSBTRN = A_UNITE(ZUSBTRN,mode2,2,YUSBTRN);
} 
else
{ 
VUSBTRN = JUSBTRN_options_syntax;
} 
} 
AVSBTRN_syntax = VUSBTRN;
 /* line 855: */
 /* line 856: */
 /* line 857: */
 /* line 858: */
EQSBTRN_make_helptext( Options_description, WIFAOST_fnname_str, CVSBTRN, Have_outer_proc, Help_msg, &DVSBTRN );
EVSBTRN_help = DVSBTRN;
 /* line 860: */
ZAAAOSI_makervc( Name, &GVSBTRN );
FVSBTRN.Name = GVSBTRN;
ZAAAOSI_makervc( Abreviation, &HVSBTRN );
FVSBTRN.Abreviation = HVSBTRN;
 /* line 861: */
FVSBTRN.Parameter = AVSBTRN_syntax;
FVSBTRN.Access = XMDAOST_normalaccess;
FVSBTRN.Continuation = ZNDAOST_continue;
FVSBTRN.Help = A_UNITE(IVSBTRN,mode2,2,EVSBTRN_help);
 /* line 862: */
FVSBTRN.Command = A_UNITE(JVSBTRN,mode3,3,Action);
LVSBTRN = A_HEAP(A68_389 ) ;
(*LVSBTRN) = FVSBTRN ;
KVSBTRN = LVSBTRN;
} 
A_PROC_EXIT(make_command);
return( KVSBTRN );
} 
#undef NL

A_STATIC A68_VOID  NVSBTRN_make_option_values(A68_32  Optvals, A68_363  *ReturnedValue)
{ 
A68_INT  OVSBTRN_top;
A68_655  QVSBTRN_generator;   /* proc value of non-global proc */
A68_363  VVSBTRN;  /* avoid structure result */
A68_363  WVSBTRN_values;
A68_361  XVSBTRN;  /* united object - for case conformity */
A68_INT * YVSBTRN_i;
A68_INT  ZVSBTRN;  /* clause result */
A68_INT  AWSBTRN_int_no;
A68_362 * BWSBTRN_v;
A68_INT  CWSBTRN_i;
A68_INT * DWSBTRN;  /* forall control - []x */
A68_INT  EWSBTRN;  /* forall loop counter */
A68_362  FWSBTRN;  /* collateral clause result */
A68_VC  GWSBTRN;  /* avoid structure result */
A68_VC  HWSBTRN;  /* avoid structure result */
A68_363  IWSBTRN;  /* clause result */
A_PROC_ENTRY(make_option_values);
 /* line 865: */
 /* line 866: */
{ 
OVSBTRN_top = Optvals.upb;
 /* line 867: */
A_CLOSURE( QVSBTRN_generator, RVSBTRN_generator, SVSBTRN_generator );
(( SVSBTRN_generator * ) ( QVSBTRN_generator.nonlocals )) -> OVSBTRN_top = OVSBTRN_top;
A_CALLPROC(QVSBTRN_generator,(A68_FALSE, &VVSBTRN),(A68_FALSE, &VVSBTRN,(QVSBTRN_generator).nonlocals));
WVSBTRN_values = VVSBTRN;
 /* line 868: */
XVSBTRN = AHFAOST_int_syntax ;
switch ( XVSBTRN.mode )
{ 
case 1: /* REF INT */
YVSBTRN_i = (XVSBTRN.data.mode1);
ZVSBTRN = (*YVSBTRN_i);
break;
default: 
A_IMP_SKIP ;
break;
} 
AWSBTRN_int_no = ZVSBTRN;
 /* line 870: */
 /* line 871: */
EWSBTRN = WVSBTRN_values.upb -1;
if ( EWSBTRN != Optvals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
BWSBTRN_v = WVSBTRN_values.data;
DWSBTRN = Optvals.data;
for (;EWSBTRN-- >= 0;
(BWSBTRN_v++
,DWSBTRN++
) )
{
CWSBTRN_i = *DWSBTRN;
 /* line 872: */
FWSBTRN.Sort = AWSBTRN_int_no;
 /* line 873: */
FCAAOSI_intchars( CWSBTRN_i, &GWSBTRN );
ZAAAOSI_makervc( GWSBTRN, &HWSBTRN );
FWSBTRN.Value = HWSBTRN;
(*BWSBTRN_v) = FWSBTRN;
}
 /* line 874: */
 /* line 875: */
IWSBTRN = WVSBTRN_values;
} 
A_PROC_EXIT(make_option_values);
*ReturnedValue = (IWSBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LWSBTRN_portname(A68_363  Params, A68_97  Msg)
{ 
A68_635  OWSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  PWSBTRN;  /* OPERATORS - mode -> union mode */
A68_532  QWSBTRN;  /* procedure value */
A_PROC_ENTRY(portname);
 /* line 881: */
 /* line 882: */
QWSBTRN.fn.fn_global = EWCBTRN_transform_portnames;
QWSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(PWSBTRN,mode1,1,QWSBTRN), A_UNITE(OWSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, NWSBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(portname);
return;
} 
#undef NL

A_STATIC A68_VOID  TWSBTRN_import(A68_363  Params, A68_97  Msg)
{ 
A68_635  WWSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  XWSBTRN;  /* OPERATORS - mode -> union mode */
A68_532  YWSBTRN;  /* procedure value */
A_PROC_ENTRY(import);
 /* line 885: */
 /* line 886: */
YWSBTRN.fn.fn_global = MIOATRN_transform_imports;
YWSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(XWSBTRN,mode1,1,YWSBTRN), A_UNITE(WWSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, VWSBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(import);
return;
} 
#undef NL

A_STATIC A68_VOID  BXSBTRN_macro(A68_363  Params, A68_97  Msg)
{ 
A68_635  KXSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  LXSBTRN;  /* OPERATORS - mode -> union mode */
A68_532  MXSBTRN;  /* YIELD */
A68_532  NXSBTRN;  /* procedure value */
A_PROC_ENTRY(macro);
 /* line 889: */
 /* line 891: */
NXSBTRN.fn.fn_global = EXSBTRN_anonymous;
NXSBTRN.nonlocals = A68_NIL;
MXSBTRN = NXSBTRN ;
AISBTRN_do_transform(A_UNITE(LXSBTRN,mode1,1,MXSBTRN), A_UNITE(KXSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, JXSBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(macro);
return;
} 
#undef NL

A_STATIC A68_VOID  QXSBTRN_sequence(A68_363  Params, A68_97  Msg)
{ 
A68_635  TXSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  UXSBTRN;  /* OPERATORS - mode -> union mode */
A68_532  VXSBTRN;  /* procedure value */
A_PROC_ENTRY(sequence);
 /* line 894: */
 /* line 895: */
VXSBTRN.fn.fn_global = AUYATRN_transform_sequences;
VXSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(UXSBTRN,mode1,1,VXSBTRN), A_UNITE(TXSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, SXSBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(sequence);
return;
} 
#undef NL

A_STATIC A68_VOID  YXSBTRN_fntype(A68_363  Params, A68_97  Msg)
{ 
A68_635  BYSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  CYSBTRN;  /* OPERATORS - mode -> union mode */
A68_534  DYSBTRN;  /* procedure value */
A_PROC_ENTRY(fntype);
 /* line 898: */
 /* line 899: */
DYSBTRN.fn.fn_global = HVVATRN_transform_fntypes;
DYSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(CYSBTRN,mode2,2,DYSBTRN), A_UNITE(BYSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, AYSBTRN, DVVATRN_fntype_options, Params, Msg);
A_PROC_EXIT(fntype);
return;
} 
#undef NL

A_STATIC A68_VOID  GYSBTRN_timescale(A68_363  Params, A68_97  Msg)
{ 
A68_635  JYSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  KYSBTRN;  /* OPERATORS - mode -> union mode */
A68_532  LYSBTRN;  /* procedure value */
A_PROC_ENTRY(timescale);
 /* line 902: */
 /* line 903: */
LYSBTRN.fn.fn_global = NQBBTRN_transform_timescale;
LYSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(KYSBTRN,mode1,1,LYSBTRN), A_UNITE(JYSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, IYSBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(timescale);
return;
} 
#undef NL

A_STATIC A68_VOID  OYSBTRN_join(A68_363  Params, A68_97  Msg)
{ 
A68_635  RYSBTRN;  /* OPERATORS - mode -> union mode */
A68_536  SYSBTRN;  /* procedure value */
A68_633  TYSBTRN;  /* OPERATORS - mode -> union mode */
A68_534  UYSBTRN;  /* procedure value */
A_PROC_ENTRY(join);
 /* line 908: */
 /* line 909: */
SYSBTRN.fn.fn_global = IVBBTRN_outerfn_joins;
SYSBTRN.nonlocals = A68_NIL;
UYSBTRN.fn.fn_global = FVCBTRN_transform_joins;
UYSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(TYSBTRN,mode2,2,UYSBTRN), A_UNITE(RYSBTRN,mode2,2,SYSBTRN), GKRBTRN_normal, QYSBTRN, JUBBTRN_joins_options, Params, Msg);
A_PROC_EXIT(join);
return;
} 
#undef NL

A_STATIC A68_VOID  XYSBTRN_make(A68_363  Params, A68_97  Msg)
{ 
A68_635  AZSBTRN;  /* OPERATORS - mode -> union mode */
A68_536  BZSBTRN;  /* procedure value */
A68_633  CZSBTRN;  /* OPERATORS - mode -> union mode */
A68_534  DZSBTRN;  /* procedure value */
A_PROC_ENTRY(make);
 /* line 914: */
 /* line 915: */
BZSBTRN.fn.fn_global = XKEBTRN_outer_multimakes;
BZSBTRN.nonlocals = A68_NIL;
DZSBTRN.fn.fn_global = YTEBTRN_transform_multimakes;
DZSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(CZSBTRN,mode2,2,DZSBTRN), A_UNITE(AZSBTRN,mode2,2,BZSBTRN), GKRBTRN_normal, ZYSBTRN, JKEBTRN_multimakes_options, Params, Msg);
A_PROC_EXIT(make);
return;
} 
#undef NL

A_STATIC A68_VOID  GZSBTRN_name(A68_363  Params, A68_97  Msg)
{ 
A68_635  JZSBTRN;  /* OPERATORS - mode -> union mode */
A68_633  KZSBTRN;  /* OPERATORS - mode -> union mode */
A68_534  LZSBTRN;  /* procedure value */
A_PROC_ENTRY(name);
 /* line 919: */
 /* line 920: */
LZSBTRN.fn.fn_global = CVDBTRN_transform_names;
LZSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(KZSBTRN,mode2,2,LZSBTRN), A_UNITE(JZSBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, IZSBTRN, PZCBTRN_names_options, Params, Msg);
A_PROC_EXIT(name);
return;
} 
#undef NL

A_STATIC A68_VOID  OZSBTRN_elseof(A68_363  Params, A68_97  Msg)
{ 
A68_635  RZSBTRN;  /* OPERATORS - mode -> union mode */
A68_536  SZSBTRN;  /* procedure value */
A68_633  TZSBTRN;  /* OPERATORS - mode -> union mode */
A68_534  UZSBTRN;  /* procedure value */
A_PROC_ENTRY(elseof);
 /* line 924: */
 /* line 925: */
SZSBTRN.fn.fn_global = BXFBTRN_outer_elseof;
SZSBTRN.nonlocals = A68_NIL;
UZSBTRN.fn.fn_global = FJGBTRN_transform_elseof;
UZSBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(TZSBTRN,mode2,2,UZSBTRN), A_UNITE(RZSBTRN,mode2,2,SZSBTRN), GKRBTRN_normal, QZSBTRN, BWFBTRN_elseof_options, Params, Msg);
A_PROC_EXIT(elseof);
return;
} 
#undef NL

A_STATIC A68_VOID  XZSBTRN_range(A68_363  Params, A68_97  Msg)
{ 
A68_635  AATBTRN;  /* OPERATORS - mode -> union mode */
A68_536  BATBTRN;  /* procedure value */
A68_633  CATBTRN;  /* OPERATORS - mode -> union mode */
A68_534  DATBTRN;  /* procedure value */
A_PROC_ENTRY(range);
 /* line 929: */
 /* line 930: */
BATBTRN.fn.fn_global = BLGBTRN_outer_range;
BATBTRN.nonlocals = A68_NIL;
DATBTRN.fn.fn_global = JNGBTRN_transform_range;
DATBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(CATBTRN,mode2,2,DATBTRN), A_UNITE(AATBTRN,mode2,2,BATBTRN), GKRBTRN_normal, ZZSBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(range);
return;
} 
#undef NL

A_STATIC A68_VOID  GATBTRN_dinst(A68_363  Params, A68_97  Msg)
{ 
A68_635  JATBTRN;  /* OPERATORS - mode -> union mode */
A68_536  KATBTRN;  /* procedure value */
A68_633  LATBTRN;  /* OPERATORS - mode -> union mode */
A68_534  MATBTRN;  /* procedure value */
A_PROC_ENTRY(dinst);
 /* line 934: */
 /* line 935: */
KATBTRN.fn.fn_global = FPGBTRN_outer_dinst;
KATBTRN.nonlocals = A68_NIL;
MATBTRN.fn.fn_global = ZQGBTRN_transform_dinst;
MATBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(LATBTRN,mode2,2,MATBTRN), A_UNITE(JATBTRN,mode2,2,KATBTRN), GKRBTRN_normal, IATBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(dinst);
return;
} 
#undef NL

A_STATIC A68_VOID  PATBTRN_multilet(A68_363  Params, A68_97  Msg)
{ 
A68_635  SATBTRN;  /* OPERATORS - mode -> union mode */
A68_536  TATBTRN;  /* procedure value */
A68_633  UATBTRN;  /* OPERATORS - mode -> union mode */
A68_534  VATBTRN;  /* procedure value */
A_PROC_ENTRY(multilet);
 /* line 939: */
 /* line 940: */
TATBTRN.fn.fn_global = OWEBTRN_outer_multilets;
TATBTRN.nonlocals = A68_NIL;
VATBTRN.fn.fn_global = MGFBTRN_transform_multilets;
VATBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(UATBTRN,mode2,2,VATBTRN), A_UNITE(SATBTRN,mode2,2,TATBTRN), GKRBTRN_normal, RATBTRN, OVEBTRN_multilets_options, Params, Msg);
A_PROC_EXIT(multilet);
return;
} 
#undef NL

A_STATIC A68_VOID  YATBTRN_macparam(A68_363  Params, A68_97  Msg)
{ 
A68_635  BBTBTRN;  /* OPERATORS - mode -> union mode */
A68_536  CBTBTRN;  /* procedure value */
A68_633  DBTBTRN;  /* OPERATORS - mode -> union mode */
A68_534  EBTBTRN;  /* procedure value */
A_PROC_ENTRY(macparam);
 /* line 944: */
 /* line 945: */
CBTBTRN.fn.fn_global = CSFBTRN_outerfn_macparams;
CBTBTRN.nonlocals = A68_NIL;
EBTBTRN.fn.fn_global = VUFBTRN_transform_macparams;
EBTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(DBTBTRN,mode2,2,EBTBTRN), A_UNITE(BBTBTRN,mode2,2,CBTBTRN), GKRBTRN_normal, ABTBTRN, WRFBTRN_macparams_options, Params, Msg);
A_PROC_EXIT(macparam);
return;
} 
#undef NL

A_STATIC A68_VOID  HBTBTRN_attribute(A68_363  Params, A68_97  Msg)
{ 
A68_635  KBTBTRN;  /* OPERATORS - mode -> union mode */
A68_536  LBTBTRN;  /* procedure value */
A68_633  MBTBTRN;  /* OPERATORS - mode -> union mode */
A68_534  NBTBTRN;  /* procedure value */
A_PROC_ENTRY(attribute);
 /* line 949: */
 /* line 950: */
LBTBTRN.fn.fn_global = MSGBTRN_outer_attribute;
LBTBTRN.nonlocals = A68_NIL;
NBTBTRN.fn.fn_global = DBHBTRN_transform_attribute;
NBTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(MBTBTRN,mode2,2,NBTBTRN), A_UNITE(KBTBTRN,mode2,2,LBTBTRN), GKRBTRN_normal, JBTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(attribute);
return;
} 
#undef NL

A_STATIC A68_VOID  QBTBTRN_bracket(A68_363  Params, A68_97  Msg)
{ 
A68_635  TBTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  UBTBTRN;  /* OPERATORS - mode -> union mode */
A68_534  VBTBTRN;  /* procedure value */
A_PROC_ENTRY(bracket);
 /* line 954: */
 /* line 955: */
VBTBTRN.fn.fn_global = NXLATRN_brackets_transform;
VBTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(UBTBTRN,mode2,2,VBTBTRN), A_UNITE(TBTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, SBTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(bracket);
return;
} 
#undef NL

A_STATIC A68_VOID  YBTBTRN_reform(A68_363  Params, A68_97  Msg)
{ 
A68_635  BCTBTRN;  /* OPERATORS - mode -> union mode */
A68_536  CCTBTRN;  /* procedure value */
A68_633  DCTBTRN;  /* OPERATORS - mode -> union mode */
A68_534  ECTBTRN;  /* procedure value */
A_PROC_ENTRY(reform);
 /* line 958: */
 /* line 959: */
CCTBTRN.fn.fn_global = IIFBTRN_outer_reform;
CCTBTRN.nonlocals = A68_NIL;
ECTBTRN.fn.fn_global = QQFBTRN_transform_reform;
ECTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(DCTBTRN,mode2,2,ECTBTRN), A_UNITE(BCTBTRN,mode2,2,CCTBTRN), GKRBTRN_normal, ACTBTRN, CIFBTRN_reform_options, Params, Msg);
A_PROC_EXIT(reform);
return;
} 
#undef NL

A_STATIC A68_VOID  HCTBTRN_alias(A68_363  Params, A68_97  Msg)
{ 
A68_635  KCTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  LCTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  MCTBTRN;  /* procedure value */
A_PROC_ENTRY(alias);
 /* line 962: */
 /* line 963: */
MCTBTRN.fn.fn_global = ZQOBTRN_transform_alias;
MCTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(LCTBTRN,mode1,1,MCTBTRN), A_UNITE(KCTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, JCTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(alias);
return;
} 
#undef NL

A_STATIC A68_VOID  PCTBTRN_associated(A68_363  Params, A68_97  Msg)
{ 
A68_635  SCTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  TCTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  UCTBTRN;  /* procedure value */
A_PROC_ENTRY(associated);
 /* line 966: */
 /* line 967: */
UCTBTRN.fn.fn_global = OCQBTRN_transform_associated;
UCTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(TCTBTRN,mode1,1,UCTBTRN), A_UNITE(SCTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, RCTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(associated);
return;
} 
#undef NL

A_STATIC A68_VOID  XCTBTRN_local(A68_363  Params, A68_97  Msg)
{ 
A68_635  ADTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  BDTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  CDTBTRN;  /* procedure value */
A_PROC_ENTRY(local);
 /* line 970: */
 /* line 971: */
CDTBTRN.fn.fn_global = VSPBTRN_transform_local;
CDTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(BDTBTRN,mode1,1,CDTBTRN), A_UNITE(ADTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, ZCTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(local);
return;
} 
#undef NL

A_STATIC A68_VOID  FDTBTRN_cquery(A68_363  Params, A68_97  Msg)
{ 
A68_635  IDTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  JDTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  KDTBTRN;  /* procedure value */
A_PROC_ENTRY(cquery);
 /* line 974: */
 /* line 975: */
KDTBTRN.fn.fn_global = QFHBTRN_transform_cquery;
KDTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(JDTBTRN,mode1,1,KDTBTRN), A_UNITE(IDTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, HDTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(cquery);
return;
} 
#undef NL

A_STATIC A68_VOID  NDTBTRN_delay(A68_363  Params, A68_97  Msg)
{ 
A68_635  QDTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  RDTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  SDTBTRN;  /* procedure value */
A_PROC_ENTRY(delay);
 /* line 978: */
 /* line 979: */
SDTBTRN.fn.fn_global = GHHBTRN_transform_delay;
SDTBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(RDTBTRN,mode1,1,SDTBTRN), A_UNITE(QDTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, PDTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(delay);
return;
} 
#undef NL

A_STATIC A68_VOID  VDTBTRN_flatten_unit(A68_363  Params, A68_97  Msg)
{ 
A68_635  YDTBTRN;  /* OPERATORS - mode -> union mode */
A68_633  ZDTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  AETBTRN;  /* procedure value */
A_PROC_ENTRY(flatten_unit);
 /* line 982: */
 /* line 983: */
AETBTRN.fn.fn_global = QBIBTRN_transform_flatten_unit;
AETBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(ZDTBTRN,mode1,1,AETBTRN), A_UNITE(YDTBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, XDTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(flatten_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  DETBTRN_tstr_trow(A68_363  Params, A68_97  Msg)
{ 
A68_635  GETBTRN;  /* OPERATORS - mode -> union mode */
A68_633  HETBTRN;  /* OPERATORS - mode -> union mode */
A68_532  IETBTRN;  /* procedure value */
A_PROC_ENTRY(tstr_trow);
 /* line 986: */
 /* line 987: */
IETBTRN.fn.fn_global = DMQBTRN_transform_tstr_trow;
IETBTRN.nonlocals = A68_NIL;
AISBTRN_do_transform(A_UNITE(HETBTRN,mode1,1,IETBTRN), A_UNITE(GETBTRN,mode3,3,QKRBTRN_no_outer), GKRBTRN_normal, FETBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(tstr_trow);
return;
} 
#undef NL

A_STATIC A68_VOID  LETBTRN_standard(A68_363  Params, A68_97  Msg)
{ 
A_PROC_ENTRY(standard);
 /* line 991: */
{ 
LWSBTRN_portname(Params, Msg);
 /* line 992: */
TWSBTRN_import(Params, Msg);
 /* line 993: */
BXSBTRN_macro(Params, Msg);
 /* line 994: */
QXSBTRN_sequence(Params, Msg);
 /* line 995: */
GYSBTRN_timescale(Params, Msg);
 /* line 996: */
BXSBTRN_macro(Params, Msg);
 /* line 997: */
XYSBTRN_make(Params, Msg);
 /* line 998: */
YXSBTRN_fntype(Params, Msg);
 /* line 999: */
 /* line 1000: */
OYSBTRN_join(Params, Msg);
} 
A_PROC_EXIT(standard);
return;
} 
#undef NL

A_STATIC A68_VOID  OETBTRN_coreella(A68_363  Params, A68_97  Msg)
{ 
A68_32  PETBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  QETBTRN;  /* avoid structure result */
A68_32  RETBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  SETBTRN;  /* avoid structure result */
A68_32  TETBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  UETBTRN;  /* avoid structure result */
A68_589  VETBTRN;  /* collateral clause result */
A68_52  WETBTRN;  /* OPERATORS - mode -> union mode */
A68_56  XETBTRN;  /* procedure value */
A68_52  AFTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BFTBTRN;  /* YIELD */
A68_52  CFTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  DFTBTRN;  /* procedure value */
A68_85  EFTBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(coreella);
 /* line 1004: */
{ 
LWSBTRN_portname(Params, Msg);
 /* line 1005: */
TWSBTRN_import(Params, Msg);
 /* line 1006: */
BXSBTRN_macro(Params, Msg);
 /* line 1007: */
QXSBTRN_sequence(Params, Msg);
 /* line 1008: */
GYSBTRN_timescale(Params, Msg);
 /* line 1009: */
BXSBTRN_macro(Params, Msg);
 /* line 1010: */
NVSBTRN_make_option_values( A_HVEC(PETBTRN,1,A68_INT ), &QETBTRN );
XYSBTRN_make(QETBTRN, Msg);
 /* line 1011: */
YXSBTRN_fntype(Params, Msg);
 /* line 1012: */
NVSBTRN_make_option_values( A_HVEC(RETBTRN,2,A68_INT ), &SETBTRN );
OYSBTRN_join(SETBTRN, Msg);
 /* line 1013: */
PATBTRN_multilet(Params, Msg);
 /* line 1014: */
OZSBTRN_elseof(Params, Msg);
 /* line 1015: */
XZSBTRN_range(Params, Msg);
 /* line 1016: */
GATBTRN_dinst(Params, Msg);
 /* line 1017: */
YATBTRN_macparam(Params, Msg);
 /* line 1018: */
HBTBTRN_attribute(Params, Msg);
 /* line 1019: */
NVSBTRN_make_option_values( A_HVEC(TETBTRN,2,A68_INT ), &UETBTRN );
GZSBTRN_name(UETBTRN, Msg);
 /* line 1020: */
QBTBTRN_bracket(Params, Msg);
 /* line 1021: */
 /* line 1023: */
XETBTRN.fn.fn_global = LRAAOSL_newline;
XETBTRN.nonlocals = A68_NIL;
VETBTRN.data[0] = A_UNITE(WETBTRN,mode12,12,XETBTRN);
 /* line 1024: */
BFTBTRN = ZETBTRN ;
VETBTRN.data[1] = A_UNITE(AFTBTRN,mode7,7,BFTBTRN);
DFTBTRN.fn.fn_global = LRAAOSL_newline;
DFTBTRN.nonlocals = A68_NIL;
VETBTRN.data[2] = A_UNITE(CFTBTRN,mode12,12,DFTBTRN);
 /* line 1025: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EFTBTRN,VETBTRN,3,A68_52 ));
} 
A_PROC_EXIT(coreella);
return;
} 
#undef NL

A_STATIC A68_VOID  HFTBTRN_ellavhdl(A68_363  Params, A68_97  Msg)
{ 
A68_32  IFTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  JFTBTRN;  /* avoid structure result */
A68_32  KFTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_363  LFTBTRN;  /* avoid structure result */
A_PROC_ENTRY(ellavhdl);
 /* line 1029: */
{ 
LWSBTRN_portname(Params, Msg);
 /* line 1030: */
TWSBTRN_import(Params, Msg);
 /* line 1031: */
BXSBTRN_macro(Params, Msg);
 /* line 1032: */
QXSBTRN_sequence(Params, Msg);
 /* line 1033: */
GYSBTRN_timescale(Params, Msg);
 /* line 1034: */
BXSBTRN_macro(Params, Msg);
 /* line 1035: */
XYSBTRN_make(Params, Msg);
 /* line 1036: */
YXSBTRN_fntype(Params, Msg);
 /* line 1037: */
NVSBTRN_make_option_values( A_HVEC(IFTBTRN,1,A68_INT ), &JFTBTRN );
OYSBTRN_join(JFTBTRN, Msg);
 /* line 1038: */
PATBTRN_multilet(Params, Msg);
 /* line 1039: */
YBTBTRN_reform(Params, Msg);
 /* line 1040: */
GATBTRN_dinst(Params, Msg);
 /* line 1041: */
YATBTRN_macparam(Params, Msg);
 /* line 1042: */
HBTBTRN_attribute(Params, Msg);
 /* line 1043: */
XCTBTRN_local(Params, Msg);
 /* line 1044: */
PCTBTRN_associated(Params, Msg);
 /* line 1045: */
FDTBTRN_cquery(Params, Msg);
 /* line 1046: */
NDTBTRN_delay(Params, Msg);
 /* line 1047: */
VDTBTRN_flatten_unit(Params, Msg);
 /* line 1048: */
DETBTRN_tstr_trow(Params, Msg);
 /* line 1049: */
HCTBTRN_alias(Params, Msg);
 /* line 1050: */
 /* line 1051: */
NVSBTRN_make_option_values( A_HVEC(KFTBTRN,5,A68_INT ), &LFTBTRN );
GZSBTRN_name(LFTBTRN, Msg);
} 
A_PROC_EXIT(ellavhdl);
return;
} 
#undef NL

A_STATIC A68_VOID  OFTBTRN_simulator(A68_363  Params, A68_97  Msg)
{ 
A68_635  EGTBTRN;  /* OPERATORS - mode -> union mode */
A68_634  FGTBTRN;  /* YIELD */
A68_634  GGTBTRN;  /* procedure value */
A68_633  HGTBTRN;  /* OPERATORS - mode -> union mode */
A68_532  IGTBTRN;  /* YIELD */
A68_532  JGTBTRN;  /* procedure value */
A_PROC_ENTRY(simulator);
 /* line 1058: */
 /* line 1068: */
 /* line 1075: */
 /* line 1076: */
GGTBTRN.fn.fn_global = YFTBTRN_anonymous;
GGTBTRN.nonlocals = A68_NIL;
FGTBTRN = GGTBTRN ;
JGTBTRN.fn.fn_global = RFTBTRN_anonymous;
JGTBTRN.nonlocals = A68_NIL;
IGTBTRN = JGTBTRN ;
AISBTRN_do_transform(A_UNITE(HGTBTRN,mode1,1,IGTBTRN), A_UNITE(EGTBTRN,mode1,1,FGTBTRN), HKRBTRN_overwrites, DGTBTRN, NLRBTRN_no_options, Params, Msg);
A_PROC_EXIT(simulator);
return;
} 
#undef NL
 /* line 1090: */

A_STATIC A68_VOID  CHTBTRN_assembletest(A68_192 * Closure, A68_111  Options, A68_97  Msg, A68_484  *ReturnedValue)
{ 
A68_662  EHTBTRN_generator;   /* proc value of non-global proc */
A68_54  KHTBTRN;  /* avoid structure result */
A68_54  JHTBTRN_tests;
A68_BOOL  LHTBTRN_present;
A68_INT  MHTBTRN_i;
A68_INT  NHTBTRN;  /* to part of loop */
A68_111  OHTBTRN;  /* avoid structure result */
A68_BOOL * PHTBTRN;  /* YIELD */
A68_BOOL * QHTBTRN_t;
A68_INT  RHTBTRN;  /* forall loop counter */
A68_484  SHTBTRN;  /* clause result */
A68_484  THTBTRN;  /* avoid structure result */
A_PROC_ENTRY(assembletest);
 /* line 1091: */
 /* line 1092: */
{ 
A_CLOSURE( EHTBTRN_generator, FHTBTRN_generator, GHTBTRN_generator );
A_CALLPROC(EHTBTRN_generator,(A68_TRUE, &KHTBTRN),(A68_TRUE, &KHTBTRN,(EHTBTRN_generator).nonlocals));
JHTBTRN_tests = KHTBTRN;
 /* line 1093: */
LHTBTRN_present = A68_FALSE;
 /* line 1094: */
 /* line 1095: */
NHTBTRN = JHTBTRN_tests.upb;
for ( MHTBTRN_i = 1;
MHTBTRN_i <= NHTBTRN;
MHTBTRN_i += 1 )
{ 
FCAAOST_makeoptions( MHTBTRN_i, &OHTBTRN );
PHTBTRN = (&A_VINDEX(JHTBTRN_tests,MHTBTRN_i)) ;
if ( (*PHTBTRN) = MBAAOST_includes(Options, OHTBTRN) )
{ 
 /* line 1096: */
LHTBTRN_present = A68_TRUE;
} 
}
 /* line 1098: */
if ( !LHTBTRN_present )
{ 
RHTBTRN = JHTBTRN_tests.upb -1;
QHTBTRN_t = JHTBTRN_tests.data;
for (;RHTBTRN-- >= 0;
(QHTBTRN_t++
) )
{
(*QHTBTRN_t) = A68_TRUE;
}
} 
 /* line 1099: */
 /* line 1100: */
WCIBTRN_assemble_diagnostics( Closure, JHTBTRN_tests, Msg, &THTBTRN );
SHTBTRN = THTBTRN;
} 
A_PROC_EXIT(assembletest);
*ReturnedValue = (SHTBTRN);
return;
} 
#undef NL

A_STATIC A68_192 * WHTBTRN_read_assmodes(A68_VC  Fname, A68_97  Msg)
{ 
A68_31  ZHTBTRN_generator;   /* proc value of non-global proc */
A68_VC  FITBTRN;  /* avoid structure result */
A68_VC  EITBTRN_buffer;
A68_INT  GITBTRN_pos;
A68_INT  HITBTRN_end;
A68_121 * IITBTRN_file;
A68_VC  JITBTRN;  /* avoid structure result */
A68_VC  KITBTRN_filename;
A68_97  NITBTRN_ass_msg;   /* proc value of non-global proc */
A68_175  AJTBTRN_get_char;   /* proc value of non-global proc */
A68_591  LJTBTRN;  /* collateral clause result */
A68_52  MJTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  NJTBTRN;  /* procedure value */
A68_52  QJTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RJTBTRN;  /* YIELD */
A68_52  SJTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  TJTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  UJTBTRN;  /* procedure value */
A68_85  VJTBTRN;  /* OPERATORS - istruct -> vector */
A68_541  WJTBTRN;  /* avoid structure result */
A68_541  XJTBTRN_reader;
A68_540  YJTBTRN;  /* avoid structure result */
A68_540  ZJTBTRN_new_modes;
A68_VC * AKTBTRN_line;
A68_INT  BKTBTRN;  /* forall loop counter */
A68_593  CKTBTRN;  /* collateral clause result */
A68_52  DKTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  EKTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  FKTBTRN;  /* procedure value */
A68_85  GKTBTRN;  /* OPERATORS - istruct -> vector */
A68_192 * HKTBTRN;  /* clause result */
A_PROC_ENTRY(read_assmodes);
 /* line 1104: */
 /* line 1105: */
{ 
 /* line 1106: */
A_CLOSURE( ZHTBTRN_generator, AITBTRN_generator, BITBTRN_generator );
A_CALLPROC(ZHTBTRN_generator,(A68_TRUE, &FITBTRN),(A68_TRUE, &FITBTRN,(ZHTBTRN_generator).nonlocals));
EITBTRN_buffer = FITBTRN;
 /* line 1107: */
GITBTRN_pos = XHTBTRN_size;
HITBTRN_end = 0;
 /* line 1108: */
IITBTRN_file = FQBAOSI_open_file(Fname, PNBAOSI_read_access, Msg);
 /* line 1109: */
SIBAOST_testmode_file_name( IITBTRN_file, &JITBTRN );
KITBTRN_filename = JITBTRN;
 /* line 1111: */
A_CLOSURE( NITBTRN_ass_msg, OITBTRN_ass_msg, PITBTRN_ass_msg );
(( PITBTRN_ass_msg * ) ( NITBTRN_ass_msg.nonlocals )) -> KITBTRN_filename = KITBTRN_filename;
(( PITBTRN_ass_msg * ) ( NITBTRN_ass_msg.nonlocals )) -> IITBTRN_file = IITBTRN_file;
(( PITBTRN_ass_msg * ) ( NITBTRN_ass_msg.nonlocals )) -> Msg = Msg;
 /* line 1120: */
 /* line 1121: */
A_CLOSURE( AJTBTRN_get_char, BJTBTRN_get_char, CJTBTRN_get_char );
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> GITBTRN_pos = (&GITBTRN_pos);
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> HITBTRN_end = (&HITBTRN_end);
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> IITBTRN_file = IITBTRN_file;
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> EITBTRN_buffer = EITBTRN_buffer;
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> NITBTRN_ass_msg = NITBTRN_ass_msg;
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> Msg = Msg;
(( CJTBTRN_get_char * ) ( AJTBTRN_get_char.nonlocals )) -> AJTBTRN_get_char = AJTBTRN_get_char;
 /* line 1133: */
NJTBTRN.fn.fn_global = LRAAOSL_newline;
NJTBTRN.nonlocals = A68_NIL;
LJTBTRN.data[0] = A_UNITE(MJTBTRN,mode12,12,NJTBTRN);
RJTBTRN = PJTBTRN ;
LJTBTRN.data[1] = A_UNITE(QJTBTRN,mode7,7,RJTBTRN);
LJTBTRN.data[2] = A_UNITE(SJTBTRN,mode7,7,KITBTRN_filename);
UJTBTRN.fn.fn_global = LRAAOSL_newline;
UJTBTRN.nonlocals = A68_NIL;
LJTBTRN.data[3] = A_UNITE(TJTBTRN,mode12,12,UJTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VJTBTRN,LJTBTRN,4,A68_52 ));
 /* line 1135: */
IAGATRN_read_signature( AJTBTRN_get_char, Msg, &WJTBTRN );
XJTBTRN_reader = WJTBTRN;
 /* line 1136: */
GPDATRN_read_closure( XJTBTRN_reader, Msg, &YJTBTRN );
ZJTBTRN_new_modes = YJTBTRN;
 /* line 1137: */
XQBAOSI_close_file(IITBTRN_file, Msg);
 /* line 1140: */
if ( (WLRBTRN_history==(&VLRBTRN_endhistory)) )
{ 
SNGAOST_banner(GIRBTRN_environment);
LRAAOSL_newline(KEAAOST_screen);
} 
 /* line 1142: */
BMRBTRN_title_str = ZJTBTRN_new_modes.Head_data;
 /* line 1143: */
BKTBTRN = BMRBTRN_title_str.upb -1;
AKTBTRN_line = BMRBTRN_title_str.data;
for (;BKTBTRN-- >= 0;
(AKTBTRN_line++
) )
{
CKTBTRN.data[0] = A_UNITE(DKTBTRN,mode7,7,(*AKTBTRN_line));
FKTBTRN.fn.fn_global = LRAAOSL_newline;
FKTBTRN.nonlocals = A68_NIL;
CKTBTRN.data[1] = A_UNITE(EKTBTRN,mode12,12,FKTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GKTBTRN,CKTBTRN,2,A68_52 ));
}
 /* line 1144: */
A_CALLPROC(PIRBTRN_zero_ctnos,(),((PIRBTRN_zero_ctnos).nonlocals));
 /* line 1145: */
 /* line 1146: */
HKTBTRN = ZJTBTRN_new_modes.Closure;
} 
A_PROC_EXIT(read_assmodes);
return( HKTBTRN );
} 
#undef NL

A_STATIC A68_VOID  KKTBTRN_read_assfile(A68_363  Params, A68_97  Msg)
{ 
A68_INT  LKTBTRN;  /* YIELD */
A68_144  MKTBTRN;  /* avoid structure result */
A68_VC  NKTBTRN_fname;
A68_INT  OKTBTRN_start;
A68_INT  PKTBTRN_finish;
A68_582  QKTBTRN;  /* collateral clause result */
A68_664  RKTBTRN;  /* collateral clause result */
A68_46  UKTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  VKTBTRN;  /* avoid structure result */
A68_582 * WKTBTRN;  /* YIELD */
A_PROC_ENTRY(read_assfile);
 /* line 1150: */
 /* line 1151: */
{ 
LKTBTRN = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,LKTBTRN))), YLDAOST_assfile_type, Msg, &MKTBTRN );
NKTBTRN_fname = MKTBTRN.Filename;
 /* line 1152: */
OKTBTRN_start = ZACAOSI_get_cpu_time();
 /* line 1153: */
QHSBTRN_assign(WHTBTRN_read_assmodes(NKTBTRN_fname, Msg));
 /* line 1154: */
PKTBTRN_finish = ZACAOSI_get_cpu_time();
 /* line 1155: */
HIRBTRN_assembled = A68_TRUE;
 /* line 1156: */
 /* line 1157: */
QKTBTRN.Count = OLRBTRN_history_count+=1;
RKTBTRN.data[0] = TKTBTRN;
RKTBTRN.data[1] = NKTBTRN_fname;
JBAAOSI_concat( A_HISVEC(UKTBTRN,RKTBTRN,2,A68_VC ), &VKTBTRN );
QKTBTRN.Name = VKTBTRN;
QKTBTRN.Sort = GKRBTRN_normal;
 /* line 1158: */
QKTBTRN.Cpu_time = (PKTBTRN_finish-OKTBTRN_start);
QKTBTRN.Status = JKRBTRN_original;
QKTBTRN.Type = NKRBTRN_readtype;
QKTBTRN.Options = WKRBTRN_nulloptions;
QKTBTRN.Fns = CLRBTRN_nullouterfns;
 /* line 1159: */
QKTBTRN.Rest = WLRBTRN_history;
WKTBTRN = A_HEAP(A68_582 ) ;
(*WKTBTRN) = QKTBTRN ;
WLRBTRN_history = WKTBTRN;
} 
A_PROC_EXIT(read_assfile);
return;
} 
#undef NL
 /* line 1163: */

A_STATIC A68_VOID  BLTBTRN_write_assmodes(A68_192 * Closure, A68_VC  Fname, A68_BOOL  Unpacked, A68_97  Msg)
{ 
A68_INT  CLTBTRN;  /* clause result */
A68_INT  DLTBTRN_linesize;
A68_121 * ELTBTRN_file;
A68_VC  FLTBTRN;  /* avoid structure result */
A68_VC  GLTBTRN_filename;
A68_97  JLTBTRN_ass_msg;   /* proc value of non-global proc */
A68_31  XLTBTRN_generator;   /* proc value of non-global proc */
A68_VC  DMTBTRN;  /* avoid structure result */
A68_VC  CMTBTRN_buffer;
A68_INT  EMTBTRN_pos;
A68_36  GMTBTRN_buff_out_str;   /* proc value of non-global proc */
A68_36  VMTBTRN;  /* clause result */
A68_36  XMTBTRN_anonymous;   /* proc value of non-global proc */
A68_36  BNTBTRN_out_str;
A68_622  CNTBTRN;  /* collateral clause result */
A68_52  DNTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ENTBTRN;  /* procedure value */
A68_52  HNTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  INTBTRN;  /* YIELD */
A68_52  JNTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  MNTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NNTBTRN;  /* YIELD */
A68_52  QNTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RNTBTRN;  /* YIELD */
A68_52  SNTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  TNTBTRN;  /* procedure value */
A68_85  UNTBTRN;  /* OPERATORS - istruct -> vector */
A68_INT  VNTBTRN_start;
A68_BOOL  WNTBTRN;  /* clause result */
A68_544  XNTBTRN;  /* avoid structure result */
A68_544  YNTBTRN_writer;
A68_VC  ZNTBTRN;  /* avoid structure result */
A68_VC  AOTBTRN_transforms_done;
A68_587  COTBTRN_generator;   /* proc value of non-global proc */
A68_102  IOTBTRN;  /* avoid structure result */
A68_102  HOTBTRN_new_title;
A68_102  JOTBTRN;  /* OPERATORS - trim index */
A68_102  KOTBTRN;  /* YIELD */
A68_664  LOTBTRN;  /* collateral clause result */
A68_INT  OOTBTRN;  /* YIELD */
A68_46  POTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  QOTBTRN;  /* avoid structure result */
A68_VC * ROTBTRN;  /* YIELD */
A68_540  SOTBTRN;  /* collateral clause result */
A68_540  TOTBTRN;  /* collateral clause result */
A68_INT  UOTBTRN;  /* YIELD */
A68_CHAR * VOTBTRN;  /* YIELD */
A68_VC  WOTBTRN;  /* OPERATORS - trim index */
A68_35  XOTBTRN;  /* avoid structure result */
A68_INT  YOTBTRN_finish;
A68_582  ZOTBTRN;  /* collateral clause result */
A68_664  APTBTRN;  /* collateral clause result */
A68_46  DPTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  EPTBTRN;  /* avoid structure result */
A68_582 * FPTBTRN;  /* YIELD */
A_PROC_ENTRY(write_assmodes);
 /* line 1164: */
 /* line 1165: */
{ 
 /* line 1166: */
 /* line 1167: */
if ( Unpacked )
{ 
 /* line 1168: */
CLTBTRN = QPGAOST_current_width();
} 
else
{ 
CLTBTRN = 512;
} 
DLTBTRN_linesize = CLTBTRN;
 /* line 1169: */
ELTBTRN_file = FQBAOSI_open_file(Fname, TNBAOSI_write_access, Msg);
 /* line 1170: */
SIBAOST_testmode_file_name( ELTBTRN_file, &FLTBTRN );
GLTBTRN_filename = FLTBTRN;
 /* line 1172: */
A_CLOSURE( JLTBTRN_ass_msg, KLTBTRN_ass_msg, LLTBTRN_ass_msg );
(( LLTBTRN_ass_msg * ) ( JLTBTRN_ass_msg.nonlocals )) -> GLTBTRN_filename = GLTBTRN_filename;
(( LLTBTRN_ass_msg * ) ( JLTBTRN_ass_msg.nonlocals )) -> ELTBTRN_file = ELTBTRN_file;
(( LLTBTRN_ass_msg * ) ( JLTBTRN_ass_msg.nonlocals )) -> Msg = Msg;
 /* line 1189: */
A_CLOSURE( XLTBTRN_generator, YLTBTRN_generator, ZLTBTRN_generator );
(( ZLTBTRN_generator * ) ( XLTBTRN_generator.nonlocals )) -> DLTBTRN_linesize = DLTBTRN_linesize;
A_CALLPROC(XLTBTRN_generator,(A68_TRUE, &DMTBTRN),(A68_TRUE, &DMTBTRN,(XLTBTRN_generator).nonlocals));
CMTBTRN_buffer = DMTBTRN;
 /* line 1190: */
EMTBTRN_pos = 0;
 /* line 1192: */
A_CLOSURE( GMTBTRN_buff_out_str, HMTBTRN_buff_out_str, IMTBTRN_buff_out_str );
(( IMTBTRN_buff_out_str * ) ( GMTBTRN_buff_out_str.nonlocals )) -> EMTBTRN_pos = (&EMTBTRN_pos);
(( IMTBTRN_buff_out_str * ) ( GMTBTRN_buff_out_str.nonlocals )) -> DLTBTRN_linesize = DLTBTRN_linesize;
(( IMTBTRN_buff_out_str * ) ( GMTBTRN_buff_out_str.nonlocals )) -> CMTBTRN_buffer = CMTBTRN_buffer;
(( IMTBTRN_buff_out_str * ) ( GMTBTRN_buff_out_str.nonlocals )) -> ELTBTRN_file = ELTBTRN_file;
(( IMTBTRN_buff_out_str * ) ( GMTBTRN_buff_out_str.nonlocals )) -> JLTBTRN_ass_msg = JLTBTRN_ass_msg;
(( IMTBTRN_buff_out_str * ) ( GMTBTRN_buff_out_str.nonlocals )) -> GMTBTRN_buff_out_str = GMTBTRN_buff_out_str;
 /* line 1204: */
 /* line 1205: */
 /* line 1206: */
if ( Unpacked )
{ 
VMTBTRN = GMTBTRN_buff_out_str;
} 
else
{ 
A_CLOSURE( XMTBTRN_anonymous, YMTBTRN_anonymous, ZMTBTRN_anonymous );
(( ZMTBTRN_anonymous * ) ( XMTBTRN_anonymous.nonlocals )) -> ELTBTRN_file = ELTBTRN_file;
(( ZMTBTRN_anonymous * ) ( XMTBTRN_anonymous.nonlocals )) -> JLTBTRN_ass_msg = JLTBTRN_ass_msg;
VMTBTRN = XMTBTRN_anonymous;
} 
BNTBTRN_out_str = VMTBTRN;
 /* line 1210: */
ENTBTRN.fn.fn_global = LRAAOSL_newline;
ENTBTRN.nonlocals = A68_NIL;
CNTBTRN.data[0] = A_UNITE(DNTBTRN,mode12,12,ENTBTRN);
INTBTRN = GNTBTRN ;
CNTBTRN.data[1] = A_UNITE(HNTBTRN,mode7,7,INTBTRN);
 /* line 1211: */
CNTBTRN.data[2] = A_UNITE(JNTBTRN,mode7,7,GLTBTRN_filename);
if ( Unpacked )
{ 
NNTBTRN = LNTBTRN ;
CNTBTRN.data[3] = A_UNITE(MNTBTRN,mode7,7,NNTBTRN);
} 
else
{ 
 /* line 1212: */
RNTBTRN = PNTBTRN ;
CNTBTRN.data[3] = A_UNITE(QNTBTRN,mode7,7,RNTBTRN);
} 
TNTBTRN.fn.fn_global = LRAAOSL_newline;
TNTBTRN.nonlocals = A68_NIL;
CNTBTRN.data[4] = A_UNITE(SNTBTRN,mode12,12,TNTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UNTBTRN,CNTBTRN,5,A68_52 ));
 /* line 1214: */
VNTBTRN_start = ZACAOSI_get_cpu_time();
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
 /* line 1218: */
if ( Unpacked )
{ 
 /* line 1219: */
WNTBTRN = DQCATRN_unpacked_format;
} 
else
{ 
WNTBTRN = CQCATRN_packed_format;
} 
 /* line 1220: */
 /* line 1221: */
FBGATRN_write_signature( BNTBTRN_out_str, WNTBTRN, !Unpacked, JLTBTRN_ass_msg, &XNTBTRN );
YNTBTRN_writer = XNTBTRN;
 /* line 1225: */
GQRBTRN_tlist( WLRBTRN_history, &ZNTBTRN );
AOTBTRN_transforms_done = ZNTBTRN;
 /* line 1226: */
 /* line 1227: */
if ( (AOTBTRN_transforms_done.upb>0) )
{ 
A_CLOSURE( COTBTRN_generator, DOTBTRN_generator, EOTBTRN_generator );
A_CALLPROC(COTBTRN_generator,(A68_TRUE, &IOTBTRN),(A68_TRUE, &IOTBTRN,(COTBTRN_generator).nonlocals));
HOTBTRN_new_title = IOTBTRN;
 /* line 1228: */
KOTBTRN = A_VTRIM(JOTBTRN,(HOTBTRN_new_title),A_VTSCRIPT(&(JOTBTRN.upb),(HOTBTRN_new_title).upb,1,BMRBTRN_title_str.upb)) ;
A_VASSIGN2(BMRBTRN_title_str,KOTBTRN,A68_VC );
 /* line 1229: */
LOTBTRN.data[0] = NOTBTRN;
LOTBTRN.data[1] = AOTBTRN_transforms_done;
OOTBTRN = HOTBTRN_new_title.upb ;
JBAAOSI_concat( A_HISVEC(POTBTRN,LOTBTRN,2,A68_VC ), &QOTBTRN );
ROTBTRN = (&A_VINDEX(HOTBTRN_new_title,OOTBTRN)) ;
(*ROTBTRN) = QOTBTRN;
 /* line 1230: */
SOTBTRN.Closure = Closure;
SOTBTRN.Head_data = HOTBTRN_new_title;
 /* line 1231: */
RLFATRN_write_closure(SOTBTRN, YNTBTRN_writer, JLTBTRN_ass_msg);
} 
else
{ 
TOTBTRN.Closure = Closure;
TOTBTRN.Head_data = BMRBTRN_title_str;
 /* line 1232: */
RLFATRN_write_closure(TOTBTRN, YNTBTRN_writer, JLTBTRN_ass_msg);
} 
 /* line 1233: */
A_CALLPROC(MIRBTRN_write_closureseeds,(YNTBTRN_writer, JLTBTRN_ass_msg),(YNTBTRN_writer, JLTBTRN_ass_msg,(MIRBTRN_write_closureseeds).nonlocals));
 /* line 1234: */
KCGATRN_finish_write_closure(YNTBTRN_writer, JLTBTRN_ass_msg);
 /* line 1236: */
 /* line 1237: */
if ( (EMTBTRN_pos>0) )
{ 
UOTBTRN = (EMTBTRN_pos+1) ;
VOTBTRN = (&A_VINDEX(CMTBTRN_buffer,UOTBTRN)) ;
(*VOTBTRN) = VPBAOSI_newline_char;
 /* line 1238: */
 /* line 1239: */
JSBAOSI_write_buffer( ELTBTRN_file, A_VTRIM(WOTBTRN,(CMTBTRN_buffer),A_VTSCRIPT(&(WOTBTRN.upb),(CMTBTRN_buffer).upb,1,(EMTBTRN_pos+1))), JLTBTRN_ass_msg, &XOTBTRN );
XOTBTRN;
} 
 /* line 1240: */
XQBAOSI_close_file(ELTBTRN_file, Msg);
 /* line 1242: */
YOTBTRN_finish = ZACAOSI_get_cpu_time();
 /* line 1243: */
 /* line 1244: */
ZOTBTRN.Count = OLRBTRN_history_count+=1;
APTBTRN.data[0] = CPTBTRN;
APTBTRN.data[1] = GLTBTRN_filename;
 /* line 1245: */
JBAAOSI_concat( A_HISVEC(DPTBTRN,APTBTRN,2,A68_VC ), &EPTBTRN );
ZOTBTRN.Name = EPTBTRN;
ZOTBTRN.Sort = FKRBTRN_nochange;
ZOTBTRN.Cpu_time = (YOTBTRN_finish-VNTBTRN_start);
ZOTBTRN.Status = JKRBTRN_original;
ZOTBTRN.Type = PKRBTRN_ignoretype;
 /* line 1246: */
ZOTBTRN.Options = WKRBTRN_nulloptions;
ZOTBTRN.Fns = CLRBTRN_nullouterfns;
 /* line 1247: */
ZOTBTRN.Rest = WLRBTRN_history;
FPTBTRN = A_HEAP(A68_582 ) ;
(*FPTBTRN) = ZOTBTRN ;
WLRBTRN_history = FPTBTRN;
} 
A_PROC_EXIT(write_assmodes);
return;
} 
#undef NL

A_STATIC A68_VOID  IPTBTRN_external(A68_363  Params, A68_97  Msg)
{ 
A68_602  JPTBTRN;  /* collateral clause result */
A68_46  OPTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  PPTBTRN;  /* avoid structure result */
A68_46  QPTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RPTBTRN_root_fname;
A68_VC  SPTBTRN;  /* avoid structure result */
A68_VC  TPTBTRN_command_name;
A68_INT  UPTBTRN_first;
A68_VC  WPTBTRN;  /* avoid structure result */
A68_BOOL  YPTBTRN_unpacked;
A68_593  ZPTBTRN;  /* collateral clause result */
A68_52  CQTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DQTBTRN;  /* YIELD */
A68_52  EQTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  FQTBTRN;  /* procedure value */
A68_85  GQTBTRN;  /* OPERATORS - istruct -> vector */
A68_BOOL  HQTBTRN;  /* optbool result */
A68_46  KQTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_667  LQTBTRN;  /* collateral clause result */
A68_46  XQTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  YQTBTRN;  /* avoid structure result */
A68_VC  WQTBTRN_command;
A68_INT  ZQTBTRN_pstart;
A68_362 * ARTBTRN_param;
A68_363  BRTBTRN;  /* OPERATORS - trim index */
A68_363  CRTBTRN;  /* forall yield */
A68_INT  DRTBTRN;  /* forall loop counter */
A68_602  ERTBTRN;  /* collateral clause result */
A68_VC  FRTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  GRTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  HRTBTRN;  /* avoid structure result */
A68_593  IRTBTRN;  /* collateral clause result */
A68_52  JRTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  MRTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NRTBTRN;  /* YIELD */
A68_85  ORTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  PRTBTRN;  /* avoid structure result */
A68_144  QRTBTRN;  /* avoid structure result */
A68_144  RRTBTRN_outf;
A68_593  SRTBTRN;  /* collateral clause result */
A68_52  TRTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  WRTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XRTBTRN;  /* YIELD */
A68_85  YRTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  ZRTBTRN;  /* avoid structure result */
A68_144  ASTBTRN;  /* avoid structure result */
A68_144  BSTBTRN_inf;
A68_589  CSTBTRN;  /* collateral clause result */
A68_52  FSTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GSTBTRN;  /* YIELD */
A68_52  HSTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ISTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  JSTBTRN;  /* procedure value */
A68_85  KSTBTRN;  /* OPERATORS - istruct -> vector */
A68_INT  LSTBTRN_exit_status;
A68_BOOL  MSTBTRN_rebuild;
A68_582  NSTBTRN;  /* collateral clause result */
A68_664  OSTBTRN;  /* collateral clause result */
A68_VC  RSTBTRN;  /* OPERATORS - trim index */
A68_46  SSTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  TSTBTRN;  /* avoid structure result */
A68_582 * USTBTRN;  /* YIELD */
A_PROC_ENTRY(external);
 /* line 1252: */
 /* line 1256: */
{ 
 /* line 1257: */
if ( SNCAOST_var_unset(ZJRBTRN_external_var) )
{ 
JPTBTRN.data[0] = LPTBTRN;
JPTBTRN.data[1] = ZJRBTRN_external_var;
JPTBTRN.data[2] = NPTBTRN;
 /* line 1258: */
JBAAOSI_concat( A_HISVEC(OPTBTRN,JPTBTRN,3,A68_VC ), &PPTBTRN );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(QPTBTRN,PPTBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(QPTBTRN,PPTBTRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 1260: */
RPTBTRN_root_fname = MJRBTRN_library_name;
 /* line 1261: */
FNCAOST_get_var( ZJRBTRN_external_var, &SPTBTRN );
TPTBTRN_command_name = SPTBTRN;
 /* line 1263: */
UPTBTRN_first = 1;
 /* line 1264: */
SIFAOST_get_ident( (*(&A_VINDEX(Params,UPTBTRN_first))), Msg, &WPTBTRN );
YPTBTRN_unpacked = A_VC_EQ(WPTBTRN,XPTBTRN);
 /* line 1265: */
 /* line 1266: */
if ( YPTBTRN_unpacked )
{ 
DQTBTRN = BQTBTRN ;
ZPTBTRN.data[0] = A_UNITE(CQTBTRN,mode7,7,DQTBTRN);
FQTBTRN.fn.fn_global = LRAAOSL_newline;
FQTBTRN.nonlocals = A68_NIL;
ZPTBTRN.data[1] = A_UNITE(EQTBTRN,mode12,12,FQTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GQTBTRN,ZPTBTRN,2,A68_52 ));
 /* line 1267: */
UPTBTRN_first+=1;
 /* line 1268: */
HQTBTRN = (Params.upb==1);
if ( ! HQTBTRN )
{ /* line 1269: */
HQTBTRN = !OIFAOST_is_ident((*(&A_VINDEX(Params,UPTBTRN_first))));
}
if ( HQTBTRN )
{ 
 /* line 1270: */
 /* line 1271: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(KQTBTRN,JQTBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(KQTBTRN,JQTBTRN,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 1273: */
 /* line 1274: */
LQTBTRN.data[0] = TPTBTRN_command_name;
if ( BKRBTRN_show_options )
{ 
LQTBTRN.data[1] = NQTBTRN;
} 
else
{ 
 /* line 1275: */
LQTBTRN.data[1] = PQTBTRN;
} 
if ( YPTBTRN_unpacked )
{ 
LQTBTRN.data[2] = RQTBTRN;
} 
else
{ 
 /* line 1276: */
LQTBTRN.data[2] = TQTBTRN;
} 
LQTBTRN.data[3] = VQTBTRN;
LQTBTRN.data[4] = RPTBTRN_root_fname;
JBAAOSI_concat( A_HISVEC(XQTBTRN,LQTBTRN,5,A68_VC ), &YQTBTRN );
WQTBTRN_command = YQTBTRN;
 /* line 1277: */
ZQTBTRN_pstart = WQTBTRN_command.upb;
 /* line 1278: */
 /* line 1279: */
CRTBTRN = A_VTRIM(BRTBTRN,(Params),A_VTSCRIPT(&(BRTBTRN.upb),(Params).upb,UPTBTRN_first,(Params).upb)) ;
DRTBTRN = CRTBTRN.upb -1;
ARTBTRN_param = CRTBTRN.data;
for (;DRTBTRN-- >= 0;
(ARTBTRN_param++
) )
{
ERTBTRN.data[0] = WQTBTRN_command;
ERTBTRN.data[1] = A_HVEC(FRTBTRN,' ',A68_CHAR );
ERTBTRN.data[2] = (*(&(ARTBTRN_param->Value)));
JBAAOSI_concat( A_HISVEC(GRTBTRN,ERTBTRN,3,A68_VC ), &HRTBTRN );
WQTBTRN_command = HRTBTRN;
}
 /* line 1281: */
 /* line 1282: */
IRTBTRN.data[0] = A_UNITE(JRTBTRN,mode7,7,RPTBTRN_root_fname);
NRTBTRN = LRTBTRN ;
IRTBTRN.data[1] = A_UNITE(MRTBTRN,mode7,7,NRTBTRN);
UJBAOSL_oneline( A_HISVEC(ORTBTRN,IRTBTRN,2,A68_52 ), &PRTBTRN );
TNCAOSI_parse_filename( PRTBTRN, YLDAOST_assfile_type, Msg, &QRTBTRN );
RRTBTRN_outf = QRTBTRN;
 /* line 1283: */
SRTBTRN.data[0] = A_UNITE(TRTBTRN,mode7,7,RPTBTRN_root_fname);
XRTBTRN = VRTBTRN ;
SRTBTRN.data[1] = A_UNITE(WRTBTRN,mode7,7,XRTBTRN);
UJBAOSL_oneline( A_HISVEC(YRTBTRN,SRTBTRN,2,A68_52 ), &ZRTBTRN );
TNCAOSI_parse_filename( ZRTBTRN, YLDAOST_assfile_type, Msg, &ASTBTRN );
BSTBTRN_inf = ASTBTRN;
 /* line 1285: */
BLTBTRN_write_assmodes(IIRBTRN_assclosure, RRTBTRN_outf.Filename, YPTBTRN_unpacked, Msg);
 /* line 1286: */
GSTBTRN = ESTBTRN ;
CSTBTRN.data[0] = A_UNITE(FSTBTRN,mode7,7,GSTBTRN);
CSTBTRN.data[1] = A_UNITE(HSTBTRN,mode7,7,WQTBTRN_command);
JSTBTRN.fn.fn_global = LRAAOSL_newline;
JSTBTRN.nonlocals = A68_NIL;
CSTBTRN.data[2] = A_UNITE(ISTBTRN,mode12,12,JSTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KSTBTRN,CSTBTRN,3,A68_52 ));
 /* line 1287: */
LSTBTRN_exit_status = IACAOSI_execute_os_command(WQTBTRN_command, Msg);
 /* line 1288: */
SNGAOST_banner(GIRBTRN_environment);
 /* line 1290: */
MSTBTRN_rebuild = (LSTBTRN_exit_status==(A68_INT )0X200U);
 /* line 1292: */
if ( MSTBTRN_rebuild )
{ 
QHSBTRN_assign(WHTBTRN_read_assmodes(BSTBTRN_inf.Filename, Msg));
} 
 /* line 1293: */
 /* line 1294: */
NSTBTRN.Count = OLRBTRN_history_count+=1;
OSTBTRN.data[0] = QSTBTRN;
OSTBTRN.data[1] = A_VTRIM(RSTBTRN,(WQTBTRN_command),A_VTSCRIPT(&(RSTBTRN.upb),(WQTBTRN_command).upb,ZQTBTRN_pstart,(WQTBTRN_command).upb));
 /* line 1295: */
JBAAOSI_concat( A_HISVEC(SSTBTRN,OSTBTRN,2,A68_VC ), &TSTBTRN );
NSTBTRN.Name = TSTBTRN;
if ( MSTBTRN_rebuild )
{ 
NSTBTRN.Sort = GKRBTRN_normal;
} 
else
{ 
NSTBTRN.Sort = FKRBTRN_nochange;
} 
 /* line 1296: */
NSTBTRN.Cpu_time = (-1);
NSTBTRN.Status = JKRBTRN_original;
NSTBTRN.Type = OKRBTRN_externtype;
NSTBTRN.Options = WKRBTRN_nulloptions;
NSTBTRN.Fns = CLRBTRN_nullouterfns;
 /* line 1297: */
NSTBTRN.Rest = WLRBTRN_history;
USTBTRN = A_HEAP(A68_582 ) ;
(*USTBTRN) = NSTBTRN ;
WLRBTRN_history = USTBTRN;
} 
A_PROC_EXIT(external);
return;
} 
#undef NL

A_STATIC A68_VOID  XSTBTRN_transform_postlude(A68_363  Params, A68_97  Msg)
{ 
A68_VC  YSTBTRN;  /* avoid structure result */
A_PROC_ENTRY(transform_postlude);
 /* line 1300: */
 /* line 1301: */
{ 
IIRBTRN_assclosure = QJRBTRN_null_closure;
 /* line 1302: */
EKRBTRN_stack = CKRBTRN_stackend;
 /* line 1303: */
HIRBTRN_assembled = A68_FALSE;
 /* line 1304: */
 /* line 1305: */
UEAAOST_facility(  &YSTBTRN );
SNGAOST_banner(YSTBTRN);
} 
A_PROC_EXIT(transform_postlude);
return;
} 
#undef NL

A_STATIC A68_VOID  BTTBTRN_call_simulator(A68_363  Params, A68_97  Msg)
{ 
A68_INT  CTTBTRN;  /* YIELD */
A68_144  DTTBTRN;  /* clause result */
A68_INT  ETTBTRN;  /* YIELD */
A68_144  FTTBTRN;  /* avoid structure result */
A68_144  GTTBTRN;  /* avoid structure result */
A68_VC  HTTBTRN_sim_file_name;
A68_668  ITTBTRN;  /* collateral clause result */
A68_46  NTTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  OTTBTRN;  /* avoid structure result */
A68_46  PTTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QTTBTRN;  /* avoid structure result */
A68_VC  RTTBTRN_simcmd;
A68_602  STTBTRN;  /* collateral clause result */
A68_VC  VTTBTRN;  /* clause result */
A68_46  WTTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  XTTBTRN;  /* avoid structure result */
A68_602  YTTBTRN;  /* collateral clause result */
A68_46  BUTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  CUTBTRN;  /* avoid structure result */
A68_VC  DUTBTRN_command;
A68_622  EUTBTRN;  /* collateral clause result */
A68_52  HUTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  IUTBTRN;  /* YIELD */
A68_52  JUTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  MUTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NUTBTRN;  /* YIELD */
A68_52  OUTBTRN;  /* OPERATORS - mode -> union mode */
A68_52  PUTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  QUTBTRN;  /* procedure value */
A68_85  RUTBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(call_simulator);
 /* line 1308: */
 /* line 1309: */
{ 
A_CALLPROC(WIRBTRN_check_sim_closure,(IIRBTRN_assclosure, Msg),(IIRBTRN_assclosure, Msg,(WIRBTRN_check_sim_closure).nonlocals));
 /* line 1312: */
 /* line 1313: */
 /* line 1314: */
CTTBTRN = 1 ;
if ( SNFAOST_is_filename((*(&A_VINDEX(Params,CTTBTRN)))) )
{ 
 /* line 1315: */
ETTBTRN = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,ETTBTRN))), YLDAOST_assfile_type, Msg, &FTTBTRN );
DTTBTRN = FTTBTRN;
} 
else
{ 
 /* line 1316: */
TNCAOSI_parse_filename( NJRBTRN_context_name, YLDAOST_assfile_type, Msg, &GTTBTRN );
DTTBTRN = GTTBTRN;
} 
HTTBTRN_sim_file_name = DTTBTRN.Filename;
 /* line 1317: */
BLTBTRN_write_assmodes(IIRBTRN_assclosure, HTTBTRN_sim_file_name, A68_FALSE, Msg);
 /* line 1319: */
 /* line 1320: */
if ( SNCAOST_var_unset(WJRBTRN_sim_var) )
{ 
ITTBTRN.data[0] = KTTBTRN;
 /* line 1321: */
ITTBTRN.data[1] = WJRBTRN_sim_var;
 /* line 1322: */
ITTBTRN.data[2] = MTTBTRN;
ITTBTRN.data[3] = HTTBTRN_sim_file_name;
 /* line 1323: */
JBAAOSI_concat( A_HISVEC(NTTBTRN,ITTBTRN,4,A68_VC ), &OTTBTRN );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(PTTBTRN,OTTBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(PTTBTRN,OTTBTRN,A68_VC ),(Msg).nonlocals));
} 
else
{ 
FNCAOST_get_var( WJRBTRN_sim_var, &QTTBTRN );
RTTBTRN_simcmd = QTTBTRN;
 /* line 1324: */
 /* line 1325: */
if ( EBAAOST_(OHBAOST_testmode, OCAAOST_null_options) )
{ 
STTBTRN.data[0] = RTTBTRN_simcmd;
STTBTRN.data[1] = UTTBTRN;
STTBTRN.data[2] = HTTBTRN_sim_file_name;
 /* line 1326: */
JBAAOSI_concat( A_HISVEC(WTTBTRN,STTBTRN,3,A68_VC ), &XTTBTRN );
VTTBTRN = XTTBTRN;
} 
else
{ 
YTTBTRN.data[0] = RTTBTRN_simcmd;
YTTBTRN.data[1] = AUTBTRN;
YTTBTRN.data[2] = HTTBTRN_sim_file_name;
 /* line 1327: */
JBAAOSI_concat( A_HISVEC(BUTBTRN,YTTBTRN,3,A68_VC ), &CUTBTRN );
VTTBTRN = CUTBTRN;
} 
DUTBTRN_command = VTTBTRN;
 /* line 1328: */
IUTBTRN = GUTBTRN ;
EUTBTRN.data[0] = A_UNITE(HUTBTRN,mode7,7,IUTBTRN);
EUTBTRN.data[1] = A_UNITE(JUTBTRN,mode7,7,RTTBTRN_simcmd);
 /* line 1329: */
NUTBTRN = LUTBTRN ;
EUTBTRN.data[2] = A_UNITE(MUTBTRN,mode7,7,NUTBTRN);
EUTBTRN.data[3] = A_UNITE(OUTBTRN,mode7,7,HTTBTRN_sim_file_name);
QUTBTRN.fn.fn_global = LRAAOSL_newline;
QUTBTRN.nonlocals = A68_NIL;
EUTBTRN.data[4] = A_UNITE(PUTBTRN,mode12,12,QUTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RUTBTRN,EUTBTRN,5,A68_52 ));
 /* line 1330: */
IACAOSI_execute_os_command(DUTBTRN_command, Msg);
 /* line 1331: */
 /* line 1332: */
 /* line 1333: */
SNGAOST_banner(GIRBTRN_environment);
} 
} 
A_PROC_EXIT(call_simulator);
return;
} 
#undef NL

A_STATIC A68_VOID  UUTBTRN_call_nosimulator(A68_363  Params, A68_97  Msg)
{ 
A68_593  VUTBTRN;  /* collateral clause result */
A68_52  YUTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZUTBTRN;  /* YIELD */
A68_52  AVTBTRN;  /* OPERATORS - mode -> union mode */
A68_56  BVTBTRN;  /* procedure value */
A68_85  CVTBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(call_nosimulator);
 /* line 1336: */
 /* line 1337: */
ZUTBTRN = XUTBTRN ;
VUTBTRN.data[0] = A_UNITE(YUTBTRN,mode7,7,ZUTBTRN);
BVTBTRN.fn.fn_global = LRAAOSL_newline;
BVTBTRN.nonlocals = A68_NIL;
VUTBTRN.data[1] = A_UNITE(AVTBTRN,mode12,12,BVTBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CVTBTRN,VUTBTRN,2,A68_52 ));
A_PROC_EXIT(call_nosimulator);
return;
} 
#undef NL
 /* line 1340: */
 /* line 1341: */
 /* line 1343: */

A68_VOID  HVTBTRN_make_asscommands(A68_392  Globals, A68_BOOL  Simenviron, A68_387  Assemble_prelude, A68_387  Assemblefile_prelude, A68_392  *ReturnedValue)
{ 
A68_711  IVTBTRN;  /* collateral clause result */
A68_389  JVTBTRN;  /* collateral clause result */
A68_VC  MVTBTRN;  /* avoid structure result */
A68_VC  PVTBTRN;  /* avoid structure result */
A68_393  QVTBTRN;  /* OPERATORS - mode -> union mode */
A68_385  UVTBTRN;  /* OPERATORS - mode -> union mode */
A68_387  VVTBTRN;  /* YIELD */
A68_387  WVTBTRN;  /* procedure value */
A68_389 * XVTBTRN;  /* YIELD */
A68_388  YVTBTRN;  /* OPERATORS - mode -> union mode */
A68_389  ZVTBTRN;  /* collateral clause result */
A68_VC  CWTBTRN;  /* avoid structure result */
A68_VC  FWTBTRN;  /* avoid structure result */
A68_393  GWTBTRN;  /* OPERATORS - mode -> union mode */
A68_385  KWTBTRN;  /* OPERATORS - mode -> union mode */
A68_387  LWTBTRN;  /* YIELD */
A68_387  MWTBTRN;  /* procedure value */
A68_389 * NWTBTRN;  /* YIELD */
A68_388  OWTBTRN;  /* OPERATORS - mode -> union mode */
A68_389  QWTBTRN;  /* collateral clause result */
A68_VC  TWTBTRN;  /* avoid structure result */
A68_VC  WWTBTRN;  /* avoid structure result */
A68_VC  ZWTBTRN;  /* avoid structure result */
A68_393  AXTBTRN;  /* OPERATORS - mode -> union mode */
A68_385  EXTBTRN;  /* OPERATORS - mode -> union mode */
A68_387  FXTBTRN;  /* YIELD */
A68_387  GXTBTRN;  /* procedure value */
A68_389 * HXTBTRN;  /* YIELD */
A68_388  IXTBTRN;  /* OPERATORS - mode -> union mode */
A68_392  JXTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KXTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_388  MXTBTRN;  /* OPERATORS - mode -> union mode */
A68_390 * NXTBTRN;  /* YIELD */
A68_389  PXTBTRN;  /* collateral clause result */
A68_VC  SXTBTRN;  /* avoid structure result */
A68_VC  VXTBTRN;  /* avoid structure result */
A68_593  WXTBTRN;  /* collateral clause result */
A68_52  ZXTBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  AYTBTRN;  /* YIELD */
A68_52  BYTBTRN;  /* OPERATORS - mode -> union mode */
A68_85  CYTBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  DYTBTRN;  /* avoid structure result */
A68_393  EYTBTRN;  /* OPERATORS - mode -> union mode */
A68_385  SYTBTRN;  /* OPERATORS - mode -> union mode */
A68_387  TYTBTRN;  /* YIELD */
A68_387  UYTBTRN;  /* procedure value */
A68_389 * VYTBTRN;  /* YIELD */
A68_388  WYTBTRN;  /* OPERATORS - mode -> union mode */
A68_392  XYTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YYTBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_388  AZTBTRN;  /* OPERATORS - mode -> union mode */
A68_390 * BZTBTRN;  /* YIELD */
A68_673  DZTBTRN;  /* collateral clause result */
A68_389  EZTBTRN;  /* collateral clause result */
A68_VC  HZTBTRN;  /* avoid structure result */
A68_VC  IZTBTRN;  /* avoid structure result */
A68_VC  LZTBTRN;  /* avoid structure result */
A68_393  MZTBTRN;  /* OPERATORS - mode -> union mode */
A68_385  QZTBTRN;  /* OPERATORS - mode -> union mode */
A68_387  RZTBTRN;  /* YIELD */
A68_387  SZTBTRN;  /* procedure value */
A68_389 * TZTBTRN;  /* YIELD */
A68_388  UZTBTRN;  /* OPERATORS - mode -> union mode */
A68_389  VZTBTRN;  /* collateral clause result */
A68_VC  YZTBTRN;  /* avoid structure result */
A68_VC  BAUBTRN;  /* avoid structure result */
A68_VC  EAUBTRN;  /* avoid structure result */
A68_393  FAUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  JAUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  KAUBTRN;  /* YIELD */
A68_387  LAUBTRN;  /* procedure value */
A68_389 * MAUBTRN;  /* YIELD */
A68_388  NAUBTRN;  /* OPERATORS - mode -> union mode */
A68_392  OAUBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  PAUBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_388  RAUBTRN;  /* OPERATORS - mode -> union mode */
A68_390 * SAUBTRN;  /* YIELD */
A68_675  UAUBTRN;  /* collateral clause result */
A68_389  VAUBTRN;  /* collateral clause result */
A68_VC  YAUBTRN;  /* avoid structure result */
A68_VC  BBUBTRN;  /* avoid structure result */
A68_393  CBUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  GBUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  HBUBTRN;  /* YIELD */
A68_387  IBUBTRN;  /* procedure value */
A68_389 * JBUBTRN;  /* YIELD */
A68_388  KBUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  LBUBTRN;  /* collateral clause result */
A68_VC  OBUBTRN;  /* avoid structure result */
A68_VC  RBUBTRN;  /* avoid structure result */
A68_393  SBUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  WBUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  XBUBTRN;  /* YIELD */
A68_387  YBUBTRN;  /* procedure value */
A68_389 * ZBUBTRN;  /* YIELD */
A68_388  ACUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  CCUBTRN;  /* collateral clause result */
A68_VC  FCUBTRN;  /* avoid structure result */
A68_VC  ICUBTRN;  /* avoid structure result */
A68_VC  LCUBTRN;  /* avoid structure result */
A68_393  MCUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  QCUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  RCUBTRN;  /* YIELD */
A68_387  SCUBTRN;  /* procedure value */
A68_389 * TCUBTRN;  /* YIELD */
A68_388  UCUBTRN;  /* OPERATORS - mode -> union mode */
A68_392  VCUBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WCUBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_388  YCUBTRN;  /* OPERATORS - mode -> union mode */
A68_390 * ZCUBTRN;  /* YIELD */
A68_392  ADUBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  BDUBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_388  DDUBTRN;  /* OPERATORS - mode -> union mode */
A68_390 * EDUBTRN;  /* YIELD */
A68_682  GDUBTRN;  /* collateral clause result */
A68_389  HDUBTRN;  /* collateral clause result */
A68_VC  KDUBTRN;  /* avoid structure result */
A68_VC  NDUBTRN;  /* avoid structure result */
A68_VC  QDUBTRN;  /* avoid structure result */
A68_393  RDUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  VDUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  WDUBTRN;  /* YIELD */
A68_387  XDUBTRN;  /* procedure value */
A68_389 * YDUBTRN;  /* YIELD */
A68_388  ZDUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  AEUBTRN;  /* collateral clause result */
A68_VC  DEUBTRN;  /* avoid structure result */
A68_VC  GEUBTRN;  /* avoid structure result */
A68_VC  JEUBTRN;  /* avoid structure result */
A68_393  KEUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  OEUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  PEUBTRN;  /* YIELD */
A68_387  QEUBTRN;  /* procedure value */
A68_389 * REUBTRN;  /* YIELD */
A68_388  SEUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  TEUBTRN;  /* collateral clause result */
A68_VC  WEUBTRN;  /* avoid structure result */
A68_VC  ZEUBTRN;  /* avoid structure result */
A68_VC  CFUBTRN;  /* avoid structure result */
A68_393  DFUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  HFUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  IFUBTRN;  /* YIELD */
A68_387  JFUBTRN;  /* procedure value */
A68_389 * KFUBTRN;  /* YIELD */
A68_388  LFUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  MFUBTRN;  /* collateral clause result */
A68_VC  PFUBTRN;  /* avoid structure result */
A68_VC  SFUBTRN;  /* avoid structure result */
A68_653  TFUBTRN;  /* collateral clause result */
A68_359  UFUBTRN;  /* avoid structure result */
A68_361  VFUBTRN;  /* OPERATORS - mode -> union mode */
A68_360  WFUBTRN;  /* OPERATORS - istruct -> vector */
A68_359  XFUBTRN;  /* avoid structure result */
A68_361  YFUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  ZFUBTRN;  /* avoid structure result */
A68_361  AGUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  BGUBTRN;  /* avoid structure result */
A68_361  CGUBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FGUBTRN;  /* avoid structure result */
A68_393  GGUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  LGUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  MGUBTRN;  /* YIELD */
A68_387  NGUBTRN;  /* procedure value */
A68_389 * OGUBTRN;  /* YIELD */
A68_388  PGUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  QGUBTRN;  /* collateral clause result */
A68_VC  TGUBTRN;  /* avoid structure result */
A68_VC  UGUBTRN;  /* avoid structure result */
A68_653  VGUBTRN;  /* collateral clause result */
A68_359  WGUBTRN;  /* avoid structure result */
A68_361  XGUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  YGUBTRN;  /* avoid structure result */
A68_361  ZGUBTRN;  /* OPERATORS - mode -> union mode */
A68_653  AHUBTRN;  /* collateral clause result */
A68_359  BHUBTRN;  /* avoid structure result */
A68_361  CHUBTRN;  /* OPERATORS - mode -> union mode */
A68_360  DHUBTRN;  /* OPERATORS - istruct -> vector */
A68_359  EHUBTRN;  /* avoid structure result */
A68_361  FHUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  GHUBTRN;  /* avoid structure result */
A68_361  HHUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  IHUBTRN;  /* avoid structure result */
A68_361  JHUBTRN;  /* OPERATORS - mode -> union mode */
A68_360  KHUBTRN;  /* OPERATORS - istruct -> vector */
A68_359  LHUBTRN;  /* avoid structure result */
A68_361  MHUBTRN;  /* OPERATORS - mode -> union mode */
A68_102  RHUBTRN;  /* avoid structure result */
A68_393  SHUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  XHUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  YHUBTRN;  /* YIELD */
A68_387  ZHUBTRN;  /* procedure value */
A68_389 * AIUBTRN;  /* YIELD */
A68_388  BIUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  CIUBTRN;  /* collateral clause result */
A68_VC  FIUBTRN;  /* avoid structure result */
A68_VC  IIUBTRN;  /* avoid structure result */
A68_653  JIUBTRN;  /* collateral clause result */
A68_359  KIUBTRN;  /* avoid structure result */
A68_361  LIUBTRN;  /* OPERATORS - mode -> union mode */
A68_360  MIUBTRN;  /* OPERATORS - istruct -> vector */
A68_359  NIUBTRN;  /* avoid structure result */
A68_361  OIUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  PIUBTRN;  /* avoid structure result */
A68_361  QIUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  RIUBTRN;  /* avoid structure result */
A68_361  SIUBTRN;  /* OPERATORS - mode -> union mode */
A68_102  XIUBTRN;  /* avoid structure result */
A68_393  YIUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  GJUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  HJUBTRN;  /* YIELD */
A68_387  IJUBTRN;  /* procedure value */
A68_389 * JJUBTRN;  /* YIELD */
A68_388  KJUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  LJUBTRN;  /* collateral clause result */
A68_VC  OJUBTRN;  /* avoid structure result */
A68_VC  RJUBTRN;  /* avoid structure result */
A68_393  SJUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  DKUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  EKUBTRN;  /* YIELD */
A68_387  FKUBTRN;  /* procedure value */
A68_389 * GKUBTRN;  /* YIELD */
A68_388  HKUBTRN;  /* OPERATORS - mode -> union mode */
A68_392  IKUBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  JKUBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_388  LKUBTRN;  /* OPERATORS - mode -> union mode */
A68_390 * MKUBTRN;  /* YIELD */
A68_389  NKUBTRN;  /* collateral clause result */
A68_VC  QKUBTRN;  /* avoid structure result */
A68_VC  TKUBTRN;  /* avoid structure result */
A68_393  UKUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  YKUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  ZKUBTRN;  /* YIELD */
A68_387  ALUBTRN;  /* procedure value */
A68_389 * BLUBTRN;  /* YIELD */
A68_388  CLUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  DLUBTRN;  /* collateral clause result */
A68_VC  GLUBTRN;  /* avoid structure result */
A68_653  HLUBTRN;  /* collateral clause result */
A68_359  ILUBTRN;  /* avoid structure result */
A68_361  JLUBTRN;  /* OPERATORS - mode -> union mode */
A68_360  KLUBTRN;  /* OPERATORS - istruct -> vector */
A68_359  LLUBTRN;  /* avoid structure result */
A68_361  MLUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  NLUBTRN;  /* avoid structure result */
A68_361  OLUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  PLUBTRN;  /* avoid structure result */
A68_361  QLUBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TLUBTRN;  /* avoid structure result */
A68_393  ULUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  BMUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  CMUBTRN;  /* YIELD */
A68_387  DMUBTRN;  /* procedure value */
A68_389 * EMUBTRN;  /* YIELD */
A68_388  FMUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  GMUBTRN;  /* collateral clause result */
A68_VC  JMUBTRN;  /* avoid structure result */
A68_VC  MMUBTRN;  /* avoid structure result */
A68_653  NMUBTRN;  /* collateral clause result */
A68_359  OMUBTRN;  /* avoid structure result */
A68_361  PMUBTRN;  /* OPERATORS - mode -> union mode */
A68_360  QMUBTRN;  /* OPERATORS - istruct -> vector */
A68_359  RMUBTRN;  /* avoid structure result */
A68_361  SMUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  TMUBTRN;  /* avoid structure result */
A68_361  UMUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  VMUBTRN;  /* avoid structure result */
A68_361  WMUBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZMUBTRN;  /* avoid structure result */
A68_393  ANUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  ENUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  FNUBTRN;  /* YIELD */
A68_387  GNUBTRN;  /* procedure value */
A68_389 * HNUBTRN;  /* YIELD */
A68_388  INUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  PNUBTRN;  /* procedure value */
A68_388  QNUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * RNUBTRN;  /* YIELD */
A68_387  YNUBTRN;  /* procedure value */
A68_388  ZNUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * AOUBTRN;  /* YIELD */
A68_387  HOUBTRN;  /* procedure value */
A68_388  IOUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * JOUBTRN;  /* YIELD */
A68_387  QOUBTRN;  /* procedure value */
A68_388  ROUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * SOUBTRN;  /* YIELD */
A68_387  ZOUBTRN;  /* procedure value */
A68_388  APUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * BPUBTRN;  /* YIELD */
A68_387  IPUBTRN;  /* procedure value */
A68_388  JPUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * KPUBTRN;  /* YIELD */
A68_387  RPUBTRN;  /* procedure value */
A68_388  SPUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * TPUBTRN;  /* YIELD */
A68_387  AQUBTRN;  /* procedure value */
A68_388  BQUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * CQUBTRN;  /* YIELD */
A68_387  JQUBTRN;  /* procedure value */
A68_388  KQUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * LQUBTRN;  /* YIELD */
A68_387  SQUBTRN;  /* procedure value */
A68_388  TQUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * UQUBTRN;  /* YIELD */
A68_387  BRUBTRN;  /* procedure value */
A68_388  CRUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * DRUBTRN;  /* YIELD */
A68_387  KRUBTRN;  /* procedure value */
A68_388  LRUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * MRUBTRN;  /* YIELD */
A68_387  TRUBTRN;  /* procedure value */
A68_388  URUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * VRUBTRN;  /* YIELD */
A68_387  CSUBTRN;  /* procedure value */
A68_388  DSUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * ESUBTRN;  /* YIELD */
A68_387  LSUBTRN;  /* procedure value */
A68_388  MSUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * NSUBTRN;  /* YIELD */
A68_387  USUBTRN;  /* procedure value */
A68_388  VSUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * WSUBTRN;  /* YIELD */
A68_387  DTUBTRN;  /* procedure value */
A68_388  ETUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * FTUBTRN;  /* YIELD */
A68_387  MTUBTRN;  /* procedure value */
A68_388  NTUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * OTUBTRN;  /* YIELD */
A68_387  VTUBTRN;  /* procedure value */
A68_388  WTUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * XTUBTRN;  /* YIELD */
A68_387  EUUBTRN;  /* procedure value */
A68_388  FUUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * GUUBTRN;  /* YIELD */
A68_387  NUUBTRN;  /* procedure value */
A68_388  OUUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * PUUBTRN;  /* YIELD */
A68_387  WUUBTRN;  /* procedure value */
A68_388  XUUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * YUUBTRN;  /* YIELD */
A68_387  FVUBTRN;  /* procedure value */
A68_388  GVUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * HVUBTRN;  /* YIELD */
A68_387  OVUBTRN;  /* procedure value */
A68_388  PVUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * QVUBTRN;  /* YIELD */
A68_387  XVUBTRN;  /* procedure value */
A68_388  YVUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * ZVUBTRN;  /* YIELD */
A68_387  GWUBTRN;  /* procedure value */
A68_388  HWUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * IWUBTRN;  /* YIELD */
A68_387  PWUBTRN;  /* procedure value */
A68_388  QWUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * RWUBTRN;  /* YIELD */
A68_387  BXUBTRN;  /* procedure value */
A68_388  CXUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * DXUBTRN;  /* YIELD */
A68_389  EXUBTRN;  /* collateral clause result */
A68_VC  HXUBTRN;  /* avoid structure result */
A68_VC  KXUBTRN;  /* avoid structure result */
A68_VC  NXUBTRN;  /* avoid structure result */
A68_393  OXUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  PXUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  QXUBTRN;  /* YIELD */
A68_387  RXUBTRN;  /* procedure value */
A68_389 * SXUBTRN;  /* YIELD */
A68_388  TXUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  JYUBTRN;  /* procedure value */
A68_388  KYUBTRN;  /* OPERATORS - mode -> union mode */
A68_389 * LYUBTRN;  /* YIELD */
A68_389  MYUBTRN;  /* collateral clause result */
A68_VC  PYUBTRN;  /* avoid structure result */
A68_VC  SYUBTRN;  /* avoid structure result */
A68_359  TYUBTRN;  /* avoid structure result */
A68_361  UYUBTRN;  /* OPERATORS - mode -> union mode */
A68_359  VYUBTRN;  /* avoid structure result */
A68_361  WYUBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZYUBTRN;  /* avoid structure result */
A68_393  AZUBTRN;  /* OPERATORS - mode -> union mode */
A68_385  RZUBTRN;  /* OPERATORS - mode -> union mode */
A68_387  SZUBTRN;  /* YIELD */
A68_387  TZUBTRN;  /* procedure value */
A68_389 * UZUBTRN;  /* YIELD */
A68_388  VZUBTRN;  /* OPERATORS - mode -> union mode */
A68_389  WZUBTRN;  /* collateral clause result */
A68_VC  ZZUBTRN;  /* avoid structure result */
A68_VC  CAVBTRN;  /* avoid structure result */
A68_393  DAVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  HAVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  IAVBTRN;  /* YIELD */
A68_387  JAVBTRN;  /* procedure value */
A68_389 * KAVBTRN;  /* YIELD */
A68_388  LAVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  MAVBTRN;  /* collateral clause result */
A68_VC  PAVBTRN;  /* avoid structure result */
A68_359  QAVBTRN;  /* avoid structure result */
A68_361  RAVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  UAVBTRN;  /* avoid structure result */
A68_393  VAVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  FBVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  GBVBTRN;  /* YIELD */
A68_387  HBVBTRN;  /* procedure value */
A68_389 * IBVBTRN;  /* YIELD */
A68_388  JBVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  KBVBTRN;  /* collateral clause result */
A68_VC  NBVBTRN;  /* avoid structure result */
A68_VC  QBVBTRN;  /* avoid structure result */
A68_393  RBVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  SBVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  TBVBTRN;  /* YIELD */
A68_387  UBVBTRN;  /* procedure value */
A68_389 * VBVBTRN;  /* YIELD */
A68_388  WBVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  XBVBTRN;  /* collateral clause result */
A68_VC  ACVBTRN;  /* avoid structure result */
A68_359  BCVBTRN;  /* avoid structure result */
A68_361  CCVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FCVBTRN;  /* avoid structure result */
A68_393  GCVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  QCVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  RCVBTRN;  /* YIELD */
A68_387  SCVBTRN;  /* procedure value */
A68_389 * TCVBTRN;  /* YIELD */
A68_388  UCVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  VCVBTRN;  /* collateral clause result */
A68_VC  YCVBTRN;  /* avoid structure result */
A68_VC  BDVBTRN;  /* avoid structure result */
A68_653  CDVBTRN;  /* collateral clause result */
A68_359  DDVBTRN;  /* avoid structure result */
A68_361  EDVBTRN;  /* OPERATORS - mode -> union mode */
A68_359  FDVBTRN;  /* avoid structure result */
A68_361  GDVBTRN;  /* OPERATORS - mode -> union mode */
A68_360  HDVBTRN;  /* OPERATORS - istruct -> vector */
A68_359  IDVBTRN;  /* avoid structure result */
A68_361  JDVBTRN;  /* OPERATORS - mode -> union mode */
A68_359  KDVBTRN;  /* avoid structure result */
A68_361  LDVBTRN;  /* OPERATORS - mode -> union mode */
A68_622  MDVBTRN;  /* collateral clause result */
A68_52  PDVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  QDVBTRN;  /* YIELD */
A68_52  RDVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  UDVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VDVBTRN;  /* YIELD */
A68_52  WDVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  ZDVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  AEVBTRN;  /* YIELD */
A68_85  BEVBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  CEVBTRN;  /* avoid structure result */
A68_393  DEVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  EEVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  FEVBTRN;  /* YIELD */
A68_387  GEVBTRN;  /* procedure value */
A68_389 * HEVBTRN;  /* YIELD */
A68_388  IEVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  JEVBTRN;  /* collateral clause result */
A68_VC  MEVBTRN;  /* avoid structure result */
A68_VC  PEVBTRN;  /* avoid structure result */
A68_393  QEVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  REVBTRN;  /* OPERATORS - mode -> union mode */
A68_386  SEVBTRN;  /* procedure value */
A68_389 * TEVBTRN;  /* YIELD */
A68_388  UEVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  VEVBTRN;  /* collateral clause result */
A68_VC  YEVBTRN;  /* avoid structure result */
A68_VC  BFVBTRN;  /* avoid structure result */
A68_359  CFVBTRN;  /* avoid structure result */
A68_361  DFVBTRN;  /* OPERATORS - mode -> union mode */
A68_393  PGVBTRN;  /* OPERATORS - mode -> union mode */
A68_394  QGVBTRN;  /* YIELD */
A68_394  RGVBTRN;  /* procedure value */
A68_385  SGVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  TGVBTRN;  /* YIELD */
A68_387  UGVBTRN;  /* procedure value */
A68_389 * VGVBTRN;  /* YIELD */
A68_388  WGVBTRN;  /* OPERATORS - mode -> union mode */
A68_389  XGVBTRN;  /* collateral clause result */
A68_VC  AHVBTRN;  /* avoid structure result */
A68_VC  DHVBTRN;  /* avoid structure result */
A68_359  EHVBTRN;  /* avoid structure result */
A68_361  FHVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  IHVBTRN;  /* avoid structure result */
A68_393  JHVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  KHVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  LHVBTRN;  /* YIELD */
A68_387  MHVBTRN;  /* procedure value */
A68_389 * NHVBTRN;  /* YIELD */
A68_388  OHVBTRN;  /* OPERATORS - mode -> union mode */
A68_392  PHVBTRN;  /* OPERATORS - istruct -> vector */
A68_392  QHVBTRN;  /* avoid structure result */
A68_392  RHVBTRN_asscommands;
A68_355  SHVBTRN;  /* procedure value */
A68_673  THVBTRN;  /* collateral clause result */
A68_389  UHVBTRN;  /* collateral clause result */
A68_VC  XHVBTRN;  /* avoid structure result */
A68_VC  AIVBTRN;  /* avoid structure result */
A68_653  BIVBTRN;  /* collateral clause result */
A68_359  CIVBTRN;  /* avoid structure result */
A68_361  DIVBTRN;  /* OPERATORS - mode -> union mode */
A68_653  EIVBTRN;  /* collateral clause result */
A68_359  FIVBTRN;  /* avoid structure result */
A68_361  GIVBTRN;  /* OPERATORS - mode -> union mode */
A68_359  HIVBTRN;  /* avoid structure result */
A68_361  IIVBTRN;  /* OPERATORS - mode -> union mode */
A68_360  JIVBTRN;  /* OPERATORS - istruct -> vector */
A68_359  KIVBTRN;  /* avoid structure result */
A68_361  LIVBTRN;  /* OPERATORS - mode -> union mode */
A68_359  MIVBTRN;  /* avoid structure result */
A68_361  NIVBTRN;  /* OPERATORS - mode -> union mode */
A68_359  OIVBTRN;  /* avoid structure result */
A68_361  PIVBTRN;  /* OPERATORS - mode -> union mode */
A68_360  QIVBTRN;  /* OPERATORS - istruct -> vector */
A68_359  RIVBTRN;  /* avoid structure result */
A68_361  SIVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VIVBTRN;  /* avoid structure result */
A68_393  WIVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  XIVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  YIVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  ZIVBTRN;  /* YIELD */
A68_387  AJVBTRN;  /* procedure value */
A68_389 * BJVBTRN;  /* YIELD */
A68_388  CJVBTRN;  /* OPERATORS - mode -> union mode */
A68_391 * DJVBTRN;  /* YIELD */
A68_389  EJVBTRN;  /* collateral clause result */
A68_VC  HJVBTRN;  /* avoid structure result */
A68_VC  KJVBTRN;  /* avoid structure result */
A68_602  LJVBTRN;  /* collateral clause result */
A68_VC  OJVBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  PJVBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  QJVBTRN;  /* avoid structure result */
A68_393  RJVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  SJVBTRN;  /* OPERATORS - mode -> union mode */
A68_385  TJVBTRN;  /* OPERATORS - mode -> union mode */
A68_387  UJVBTRN;  /* YIELD */
A68_387  VJVBTRN;  /* procedure value */
A68_389 * WJVBTRN;  /* YIELD */
A68_388  XJVBTRN;  /* OPERATORS - mode -> union mode */
A68_391 * YJVBTRN;  /* YIELD */
A68_392  ZJVBTRN;  /* clause result */
A68_392  AKVBTRN;  /* OPERATORS - istruct -> vector */
A68_392  BKVBTRN;  /* avoid structure result */
A_PROC_ENTRY(make_asscommands);
 /* line 1344: */
 /* line 1347: */
{ 
 /* line 1348: */
ZAAAOSI_makervc( LVTBTRN, &MVTBTRN );
JVTBTRN.Name = MVTBTRN;
JVTBTRN.Abreviation = EOAAOSL_nullstr;
JVTBTRN.Parameter = SRAAOST_noparameters;
JVTBTRN.Access = XMDAOST_normalaccess;
 /* line 1349: */
JVTBTRN.Continuation = ZNDAOST_continue;
 /* line 1350: */
ZAAAOSI_makervc( OVTBTRN, &PVTBTRN );
JVTBTRN.Help = A_UNITE(QVTBTRN,mode1,1,PVTBTRN);
WVTBTRN.fn.fn_global = TVTBTRN_anonymous;
WVTBTRN.nonlocals = A68_NIL;
VVTBTRN = WVTBTRN ;
JVTBTRN.Command = A_UNITE(UVTBTRN,mode3,3,VVTBTRN);
 /* line 1355: */
XVTBTRN = A_HEAP(A68_389 ) ;
(*XVTBTRN) = JVTBTRN ;
IVTBTRN.data[0] = A_UNITE(YVTBTRN,mode1,1,XVTBTRN);
 /* line 1356: */
ZAAAOSI_makervc( BWTBTRN, &CWTBTRN );
ZVTBTRN.Name = CWTBTRN;
ZVTBTRN.Abreviation = EOAAOSL_nullstr;
ZVTBTRN.Parameter = SRAAOST_noparameters;
ZVTBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1358: */
ZVTBTRN.Continuation = ZNDAOST_continue;
 /* line 1359: */
 /* line 1360: */
ZAAAOSI_makervc( EWTBTRN, &FWTBTRN );
ZVTBTRN.Help = A_UNITE(GWTBTRN,mode1,1,FWTBTRN);
MWTBTRN.fn.fn_global = JWTBTRN_anonymous;
MWTBTRN.nonlocals = A68_NIL;
LWTBTRN = MWTBTRN ;
ZVTBTRN.Command = A_UNITE(KWTBTRN,mode3,3,LWTBTRN);
 /* line 1363: */
NWTBTRN = A_HEAP(A68_389 ) ;
(*NWTBTRN) = ZVTBTRN ;
IVTBTRN.data[1] = A_UNITE(OWTBTRN,mode1,1,NWTBTRN);
 /* line 1364: */
 /* line 1365: */
ZAAAOSI_makervc( SWTBTRN, &TWTBTRN );
QWTBTRN.Name = TWTBTRN;
ZAAAOSI_makervc( VWTBTRN, &WWTBTRN );
QWTBTRN.Abreviation = WWTBTRN;
 /* line 1366: */
QWTBTRN.Parameter = SRAAOST_noparameters;
QWTBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1368: */
QWTBTRN.Continuation = ZNDAOST_continue;
 /* line 1369: */
ZAAAOSI_makervc( YWTBTRN, &ZWTBTRN );
QWTBTRN.Help = A_UNITE(AXTBTRN,mode1,1,ZWTBTRN);
 /* line 1372: */
GXTBTRN.fn.fn_global = DXTBTRN_anonymous;
GXTBTRN.nonlocals = A68_NIL;
FXTBTRN = GXTBTRN ;
QWTBTRN.Command = A_UNITE(EXTBTRN,mode3,3,FXTBTRN);
 /* line 1374: */
HXTBTRN = A_HEAP(A68_389 ) ;
(*HXTBTRN) = QWTBTRN ;
NXTBTRN = NSDAOST_make_group(LXTBTRN, A_HVEC(KXTBTRN,'S',A68_CHAR ), XMDAOST_normalaccess, A_HVEC(JXTBTRN,A_UNITE(IXTBTRN,mode1,1,HXTBTRN),A68_388 )) ;
IVTBTRN.data[2] = A_UNITE(MXTBTRN,mode2,2,NXTBTRN);
 /* line 1375: */
 /* line 1376: */
ZAAAOSI_makervc( RXTBTRN, &SXTBTRN );
PXTBTRN.Name = SXTBTRN;
ZAAAOSI_makervc( UXTBTRN, &VXTBTRN );
PXTBTRN.Abreviation = VXTBTRN;
 /* line 1377: */
PXTBTRN.Parameter = AHFAOST_int_syntax;
PXTBTRN.Access = XMDAOST_normalaccess;
 /* line 1378: */
PXTBTRN.Continuation = ZNDAOST_continue;
 /* line 1379: */
 /* line 1380: */
 /* line 1381: */
 /* line 1382: */
AYTBTRN = YXTBTRN ;
WXTBTRN.data[0] = A_UNITE(ZXTBTRN,mode7,7,AYTBTRN);
WXTBTRN.data[1] = A_UNITE(BYTBTRN,mode1,1,DKRBTRN_max_stack_size);
 /* line 1383: */
UJBAOSL_oneline( A_HISVEC(CYTBTRN,WXTBTRN,2,A68_52 ), &DYTBTRN );
PXTBTRN.Help = A_UNITE(EYTBTRN,mode1,1,DYTBTRN);
 /* line 1390: */
UYTBTRN.fn.fn_global = HYTBTRN_anonymous;
UYTBTRN.nonlocals = A68_NIL;
TYTBTRN = UYTBTRN ;
PXTBTRN.Command = A_UNITE(SYTBTRN,mode3,3,TYTBTRN);
 /* line 1392: */
VYTBTRN = A_HEAP(A68_389 ) ;
(*VYTBTRN) = PXTBTRN ;
BZTBTRN = NSDAOST_make_group(ZYTBTRN, A_HVEC(YYTBTRN,'S',A68_CHAR ), XMDAOST_normalaccess, A_HVEC(XYTBTRN,A_UNITE(WYTBTRN,mode1,1,VYTBTRN),A68_388 )) ;
IVTBTRN.data[3] = A_UNITE(AZTBTRN,mode2,2,BZTBTRN);
 /* line 1393: */
 /* line 1394: */
ZAAAOSI_makervc( GZTBTRN, &HZTBTRN );
EZTBTRN.Name = HZTBTRN;
NAAAOSI_makervc( 'H', &IZTBTRN );
EZTBTRN.Abreviation = IZTBTRN;
 /* line 1395: */
EZTBTRN.Parameter = SRAAOST_noparameters;
EZTBTRN.Access = XMDAOST_normalaccess;
 /* line 1396: */
EZTBTRN.Continuation = ZNDAOST_continue;
 /* line 1397: */
ZAAAOSI_makervc( KZTBTRN, &LZTBTRN );
EZTBTRN.Help = A_UNITE(MZTBTRN,mode1,1,LZTBTRN);
SZTBTRN.fn.fn_global = PZTBTRN_anonymous;
SZTBTRN.nonlocals = A68_NIL;
RZTBTRN = SZTBTRN ;
EZTBTRN.Command = A_UNITE(QZTBTRN,mode3,3,RZTBTRN);
 /* line 1401: */
TZTBTRN = A_HEAP(A68_389 ) ;
(*TZTBTRN) = EZTBTRN ;
DZTBTRN.data[0] = A_UNITE(UZTBTRN,mode1,1,TZTBTRN);
 /* line 1402: */
ZAAAOSI_makervc( XZTBTRN, &YZTBTRN );
VZTBTRN.Name = YZTBTRN;
ZAAAOSI_makervc( AAUBTRN, &BAUBTRN );
VZTBTRN.Abreviation = BAUBTRN;
 /* line 1403: */
VZTBTRN.Parameter = SRAAOST_noparameters;
VZTBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1404: */
VZTBTRN.Continuation = ZNDAOST_continue;
 /* line 1405: */
ZAAAOSI_makervc( DAUBTRN, &EAUBTRN );
VZTBTRN.Help = A_UNITE(FAUBTRN,mode1,1,EAUBTRN);
 /* line 1407: */
LAUBTRN.fn.fn_global = IAUBTRN_anonymous;
LAUBTRN.nonlocals = A68_NIL;
KAUBTRN = LAUBTRN ;
VZTBTRN.Command = A_UNITE(JAUBTRN,mode3,3,KAUBTRN);
 /* line 1408: */
MAUBTRN = A_HEAP(A68_389 ) ;
(*MAUBTRN) = VZTBTRN ;
DZTBTRN.data[1] = A_UNITE(NAUBTRN,mode1,1,MAUBTRN);
 /* line 1410: */
SAUBTRN = NSDAOST_make_group(QAUBTRN, A_HVEC(PAUBTRN,'C',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(OAUBTRN,DZTBTRN,2,A68_388 )) ;
IVTBTRN.data[4] = A_UNITE(RAUBTRN,mode2,2,SAUBTRN);
 /* line 1411: */
 /* line 1412: */
ZAAAOSI_makervc( XAUBTRN, &YAUBTRN );
VAUBTRN.Name = YAUBTRN;
VAUBTRN.Abreviation = EOAAOSL_nullstr;
VAUBTRN.Parameter = SRAAOST_noparameters;
 /* line 1413: */
VAUBTRN.Access = XMDAOST_normalaccess;
VAUBTRN.Continuation = ZNDAOST_continue;
 /* line 1414: */
ZAAAOSI_makervc( ABUBTRN, &BBUBTRN );
VAUBTRN.Help = A_UNITE(CBUBTRN,mode1,1,BBUBTRN);
IBUBTRN.fn.fn_global = FBUBTRN_anonymous;
IBUBTRN.nonlocals = A68_NIL;
HBUBTRN = IBUBTRN ;
VAUBTRN.Command = A_UNITE(GBUBTRN,mode3,3,HBUBTRN);
 /* line 1418: */
JBUBTRN = A_HEAP(A68_389 ) ;
(*JBUBTRN) = VAUBTRN ;
UAUBTRN.data[0] = A_UNITE(KBUBTRN,mode1,1,JBUBTRN);
 /* line 1419: */
ZAAAOSI_makervc( NBUBTRN, &OBUBTRN );
LBUBTRN.Name = OBUBTRN;
 /* line 1420: */
LBUBTRN.Abreviation = EOAAOSL_nullstr;
LBUBTRN.Parameter = SRAAOST_noparameters;
LBUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1421: */
LBUBTRN.Continuation = ZNDAOST_continue;
 /* line 1422: */
ZAAAOSI_makervc( QBUBTRN, &RBUBTRN );
LBUBTRN.Help = A_UNITE(SBUBTRN,mode1,1,RBUBTRN);
YBUBTRN.fn.fn_global = VBUBTRN_anonymous;
YBUBTRN.nonlocals = A68_NIL;
XBUBTRN = YBUBTRN ;
LBUBTRN.Command = A_UNITE(WBUBTRN,mode3,3,XBUBTRN);
 /* line 1425: */
ZBUBTRN = A_HEAP(A68_389 ) ;
(*ZBUBTRN) = LBUBTRN ;
UAUBTRN.data[1] = A_UNITE(ACUBTRN,mode1,1,ZBUBTRN);
 /* line 1426: */
 /* line 1427: */
ZAAAOSI_makervc( ECUBTRN, &FCUBTRN );
CCUBTRN.Name = FCUBTRN;
 /* line 1428: */
ZAAAOSI_makervc( HCUBTRN, &ICUBTRN );
CCUBTRN.Abreviation = ICUBTRN;
CCUBTRN.Parameter = SRAAOST_noparameters;
CCUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1430: */
CCUBTRN.Continuation = ZNDAOST_continue;
 /* line 1431: */
ZAAAOSI_makervc( KCUBTRN, &LCUBTRN );
CCUBTRN.Help = A_UNITE(MCUBTRN,mode1,1,LCUBTRN);
 /* line 1434: */
SCUBTRN.fn.fn_global = PCUBTRN_anonymous;
SCUBTRN.nonlocals = A68_NIL;
RCUBTRN = SCUBTRN ;
CCUBTRN.Command = A_UNITE(QCUBTRN,mode3,3,RCUBTRN);
 /* line 1435: */
TCUBTRN = A_HEAP(A68_389 ) ;
(*TCUBTRN) = CCUBTRN ;
ZCUBTRN = NSDAOST_make_group(XCUBTRN, A_HVEC(WCUBTRN,'S',A68_CHAR ), XMDAOST_normalaccess, A_HVEC(VCUBTRN,A_UNITE(UCUBTRN,mode1,1,TCUBTRN),A68_388 )) ;
UAUBTRN.data[2] = A_UNITE(YCUBTRN,mode2,2,ZCUBTRN);
 /* line 1437: */
EDUBTRN = NSDAOST_make_group(CDUBTRN, A_HVEC(BDUBTRN,'D',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(ADUBTRN,UAUBTRN,3,A68_388 )) ;
IVTBTRN.data[5] = A_UNITE(DDUBTRN,mode2,2,EDUBTRN);
 /* line 1438: */
 /* line 1439: */
ZAAAOSI_makervc( JDUBTRN, &KDUBTRN );
HDUBTRN.Name = KDUBTRN;
ZAAAOSI_makervc( MDUBTRN, &NDUBTRN );
HDUBTRN.Abreviation = NDUBTRN;
 /* line 1440: */
HDUBTRN.Parameter = SRAAOST_noparameters;
HDUBTRN.Access = XMDAOST_normalaccess;
 /* line 1442: */
HDUBTRN.Continuation = ZNDAOST_continue;
 /* line 1443: */
ZAAAOSI_makervc( PDUBTRN, &QDUBTRN );
HDUBTRN.Help = A_UNITE(RDUBTRN,mode1,1,QDUBTRN);
XDUBTRN.fn.fn_global = UDUBTRN_anonymous;
XDUBTRN.nonlocals = A68_NIL;
WDUBTRN = XDUBTRN ;
HDUBTRN.Command = A_UNITE(VDUBTRN,mode3,3,WDUBTRN);
 /* line 1447: */
YDUBTRN = A_HEAP(A68_389 ) ;
(*YDUBTRN) = HDUBTRN ;
GDUBTRN.data[0] = A_UNITE(ZDUBTRN,mode1,1,YDUBTRN);
 /* line 1448: */
ZAAAOSI_makervc( CEUBTRN, &DEUBTRN );
AEUBTRN.Name = DEUBTRN;
ZAAAOSI_makervc( FEUBTRN, &GEUBTRN );
AEUBTRN.Abreviation = GEUBTRN;
 /* line 1449: */
AEUBTRN.Parameter = SRAAOST_noparameters;
AEUBTRN.Access = XMDAOST_normalaccess;
 /* line 1451: */
AEUBTRN.Continuation = ZNDAOST_continue;
 /* line 1452: */
ZAAAOSI_makervc( IEUBTRN, &JEUBTRN );
AEUBTRN.Help = A_UNITE(KEUBTRN,mode1,1,JEUBTRN);
QEUBTRN.fn.fn_global = NEUBTRN_anonymous;
QEUBTRN.nonlocals = A68_NIL;
PEUBTRN = QEUBTRN ;
AEUBTRN.Command = A_UNITE(OEUBTRN,mode3,3,PEUBTRN);
 /* line 1456: */
REUBTRN = A_HEAP(A68_389 ) ;
(*REUBTRN) = AEUBTRN ;
GDUBTRN.data[1] = A_UNITE(SEUBTRN,mode1,1,REUBTRN);
 /* line 1457: */
ZAAAOSI_makervc( VEUBTRN, &WEUBTRN );
TEUBTRN.Name = WEUBTRN;
ZAAAOSI_makervc( YEUBTRN, &ZEUBTRN );
TEUBTRN.Abreviation = ZEUBTRN;
 /* line 1458: */
TEUBTRN.Parameter = SRAAOST_noparameters;
TEUBTRN.Access = XMDAOST_normalaccess;
 /* line 1459: */
TEUBTRN.Continuation = ZNDAOST_continue;
 /* line 1460: */
ZAAAOSI_makervc( BFUBTRN, &CFUBTRN );
TEUBTRN.Help = A_UNITE(DFUBTRN,mode1,1,CFUBTRN);
JFUBTRN.fn.fn_global = GFUBTRN_anonymous;
JFUBTRN.nonlocals = A68_NIL;
IFUBTRN = JFUBTRN ;
TEUBTRN.Command = A_UNITE(HFUBTRN,mode3,3,IFUBTRN);
 /* line 1475: */
KFUBTRN = A_HEAP(A68_389 ) ;
(*KFUBTRN) = TEUBTRN ;
GDUBTRN.data[2] = A_UNITE(LFUBTRN,mode1,1,KFUBTRN);
 /* line 1476: */
ZAAAOSI_makervc( OFUBTRN, &PFUBTRN );
MFUBTRN.Name = PFUBTRN;
 /* line 1477: */
ZAAAOSI_makervc( RFUBTRN, &SFUBTRN );
MFUBTRN.Abreviation = SFUBTRN;
TFUBTRN.data[0] = CLFAOST_declname_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &UFUBTRN );
TFUBTRN.data[1] = A_UNITE(VFUBTRN,mode2,2,UFUBTRN);
 /* line 1478: */
ATAAOST_prod( A_HISVEC(WFUBTRN,TFUBTRN,2,A68_361 ), &XFUBTRN );
LTAAOST_opt( A_UNITE(YFUBTRN,mode2,2,XFUBTRN), &ZFUBTRN );
DUAAOST_star( A_UNITE(AGUBTRN,mode2,2,ZFUBTRN), &BGUBTRN );
MFUBTRN.Parameter = A_UNITE(CGUBTRN,mode2,2,BGUBTRN);
MFUBTRN.Access = XMDAOST_normalaccess;
 /* line 1480: */
MFUBTRN.Continuation = ZNDAOST_continue;
 /* line 1481: */
 /* line 1482: */
ZAAAOSI_makervc( EGUBTRN, &FGUBTRN );
MFUBTRN.Help = A_UNITE(GGUBTRN,mode1,1,FGUBTRN);
NGUBTRN.fn.fn_global = JGUBTRN_anonymous;
NGUBTRN.nonlocals = A68_NIL;
MGUBTRN = NGUBTRN ;
MFUBTRN.Command = A_UNITE(LGUBTRN,mode3,3,MGUBTRN);
 /* line 1486: */
OGUBTRN = A_HEAP(A68_389 ) ;
(*OGUBTRN) = MFUBTRN ;
GDUBTRN.data[3] = A_UNITE(PGUBTRN,mode1,1,OGUBTRN);
 /* line 1487: */
ZAAAOSI_makervc( SGUBTRN, &TGUBTRN );
QGUBTRN.Name = TGUBTRN;
 /* line 1488: */
NAAAOSI_makervc( 'T', &UGUBTRN );
QGUBTRN.Abreviation = UGUBTRN;
 /* line 1489: */
LTAAOST_opt( AHFAOST_int_syntax, &WGUBTRN );
DUAAOST_star( A_UNITE(XGUBTRN,mode2,2,WGUBTRN), &YGUBTRN );
VGUBTRN.data[0] = A_UNITE(ZGUBTRN,mode2,2,YGUBTRN);
AHUBTRN.data[0] = CLFAOST_declname_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &BHUBTRN );
AHUBTRN.data[1] = A_UNITE(CHUBTRN,mode2,2,BHUBTRN);
ATAAOST_prod( A_HISVEC(DHUBTRN,AHUBTRN,2,A68_361 ), &EHUBTRN );
LTAAOST_opt( A_UNITE(FHUBTRN,mode2,2,EHUBTRN), &GHUBTRN );
DUAAOST_star( A_UNITE(HHUBTRN,mode2,2,GHUBTRN), &IHUBTRN );
VGUBTRN.data[1] = A_UNITE(JHUBTRN,mode2,2,IHUBTRN);
 /* line 1490: */
ATAAOST_prod( A_HISVEC(KHUBTRN,VGUBTRN,2,A68_361 ), &LHUBTRN );
QGUBTRN.Parameter = A_UNITE(MHUBTRN,mode2,2,LHUBTRN);
QGUBTRN.Access = XMDAOST_normalaccess;
 /* line 1491: */
QGUBTRN.Continuation = ZNDAOST_continue;
 /* line 1492: */
 /* line 1493: */
 /* line 1494: */
EQSBTRN_make_helptext( NINBTRN_write_ella_options, SKFAOST_declname_str, QHUBTRN, RKRBTRN_have_outer, PHUBTRN, &RHUBTRN );
QGUBTRN.Help = A_UNITE(SHUBTRN,mode2,2,RHUBTRN);
ZHUBTRN.fn.fn_global = VHUBTRN_anonymous;
ZHUBTRN.nonlocals = A68_NIL;
YHUBTRN = ZHUBTRN ;
QGUBTRN.Command = A_UNITE(XHUBTRN,mode3,3,YHUBTRN);
 /* line 1498: */
AIUBTRN = A_HEAP(A68_389 ) ;
(*AIUBTRN) = QGUBTRN ;
GDUBTRN.data[4] = A_UNITE(BIUBTRN,mode1,1,AIUBTRN);
 /* line 1499: */
ZAAAOSI_makervc( EIUBTRN, &FIUBTRN );
CIUBTRN.Name = FIUBTRN;
 /* line 1500: */
ZAAAOSI_makervc( HIUBTRN, &IIUBTRN );
CIUBTRN.Abreviation = IIUBTRN;
JIUBTRN.data[0] = CLFAOST_declname_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &KIUBTRN );
JIUBTRN.data[1] = A_UNITE(LIUBTRN,mode2,2,KIUBTRN);
 /* line 1501: */
ATAAOST_prod( A_HISVEC(MIUBTRN,JIUBTRN,2,A68_361 ), &NIUBTRN );
LTAAOST_opt( A_UNITE(OIUBTRN,mode2,2,NIUBTRN), &PIUBTRN );
DUAAOST_star( A_UNITE(QIUBTRN,mode2,2,PIUBTRN), &RIUBTRN );
CIUBTRN.Parameter = A_UNITE(SIUBTRN,mode2,2,RIUBTRN);
CIUBTRN.Access = XMDAOST_normalaccess;
 /* line 1502: */
CIUBTRN.Continuation = ZNDAOST_continue;
 /* line 1503: */
 /* line 1505: */
 /* line 1506: */
EQSBTRN_make_helptext( NLRBTRN_no_options, SKFAOST_declname_str, WIUBTRN, RKRBTRN_have_outer, VIUBTRN, &XIUBTRN );
CIUBTRN.Help = A_UNITE(YIUBTRN,mode2,2,XIUBTRN);
IJUBTRN.fn.fn_global = BJUBTRN_anonymous;
IJUBTRN.nonlocals = A68_NIL;
HJUBTRN = IJUBTRN ;
CIUBTRN.Command = A_UNITE(GJUBTRN,mode3,3,HJUBTRN);
 /* line 1511: */
JJUBTRN = A_HEAP(A68_389 ) ;
(*JJUBTRN) = CIUBTRN ;
GDUBTRN.data[5] = A_UNITE(KJUBTRN,mode1,1,JJUBTRN);
 /* line 1512: */
ZAAAOSI_makervc( NJUBTRN, &OJUBTRN );
LJUBTRN.Name = OJUBTRN;
LJUBTRN.Abreviation = EOAAOSL_nullstr;
 /* line 1513: */
LJUBTRN.Parameter = SRAAOST_noparameters;
LJUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1514: */
LJUBTRN.Continuation = ZNDAOST_continue;
 /* line 1515: */
ZAAAOSI_makervc( QJUBTRN, &RJUBTRN );
LJUBTRN.Help = A_UNITE(SJUBTRN,mode1,1,RJUBTRN);
 /* line 1521: */
FKUBTRN.fn.fn_global = VJUBTRN_anonymous;
FKUBTRN.nonlocals = A68_NIL;
EKUBTRN = FKUBTRN ;
LJUBTRN.Command = A_UNITE(DKUBTRN,mode3,3,EKUBTRN);
GKUBTRN = A_HEAP(A68_389 ) ;
(*GKUBTRN) = LJUBTRN ;
GDUBTRN.data[6] = A_UNITE(HKUBTRN,mode1,1,GKUBTRN);
 /* line 1523: */
MKUBTRN = NSDAOST_make_group(KKUBTRN, A_HVEC(JKUBTRN,'P',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(IKUBTRN,GDUBTRN,7,A68_388 )) ;
IVTBTRN.data[6] = A_UNITE(LKUBTRN,mode2,2,MKUBTRN);
 /* line 1524: */
ZAAAOSI_makervc( PKUBTRN, &QKUBTRN );
NKUBTRN.Name = QKUBTRN;
NKUBTRN.Abreviation = EOAAOSL_nullstr;
NKUBTRN.Parameter = SRAAOST_noparameters;
NKUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1525: */
NKUBTRN.Continuation = ZNDAOST_continue;
 /* line 1526: */
ZAAAOSI_makervc( SKUBTRN, &TKUBTRN );
NKUBTRN.Help = A_UNITE(UKUBTRN,mode1,1,TKUBTRN);
ALUBTRN.fn.fn_global = XKUBTRN_anonymous;
ALUBTRN.nonlocals = A68_NIL;
ZKUBTRN = ALUBTRN ;
NKUBTRN.Command = A_UNITE(YKUBTRN,mode3,3,ZKUBTRN);
 /* line 1529: */
BLUBTRN = A_HEAP(A68_389 ) ;
(*BLUBTRN) = NKUBTRN ;
IVTBTRN.data[7] = A_UNITE(CLUBTRN,mode1,1,BLUBTRN);
 /* line 1530: */
ZAAAOSI_makervc( FLUBTRN, &GLUBTRN );
DLUBTRN.Name = GLUBTRN;
 /* line 1531: */
DLUBTRN.Abreviation = EOAAOSL_nullstr;
HLUBTRN.data[0] = CLFAOST_declname_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &ILUBTRN );
HLUBTRN.data[1] = A_UNITE(JLUBTRN,mode2,2,ILUBTRN);
 /* line 1532: */
ATAAOST_prod( A_HISVEC(KLUBTRN,HLUBTRN,2,A68_361 ), &LLUBTRN );
LTAAOST_opt( A_UNITE(MLUBTRN,mode2,2,LLUBTRN), &NLUBTRN );
DUAAOST_star( A_UNITE(OLUBTRN,mode2,2,NLUBTRN), &PLUBTRN );
DLUBTRN.Parameter = A_UNITE(QLUBTRN,mode2,2,PLUBTRN);
DLUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1533: */
DLUBTRN.Continuation = ZNDAOST_continue;
 /* line 1534: */
ZAAAOSI_makervc( SLUBTRN, &TLUBTRN );
DLUBTRN.Help = A_UNITE(ULUBTRN,mode1,1,TLUBTRN);
DMUBTRN.fn.fn_global = XLUBTRN_anonymous;
DMUBTRN.nonlocals = A68_NIL;
CMUBTRN = DMUBTRN ;
DLUBTRN.Command = A_UNITE(BMUBTRN,mode3,3,CMUBTRN);
 /* line 1538: */
EMUBTRN = A_HEAP(A68_389 ) ;
(*EMUBTRN) = DLUBTRN ;
IVTBTRN.data[8] = A_UNITE(FMUBTRN,mode1,1,EMUBTRN);
 /* line 1539: */
ZAAAOSI_makervc( IMUBTRN, &JMUBTRN );
GMUBTRN.Name = JMUBTRN;
 /* line 1540: */
ZAAAOSI_makervc( LMUBTRN, &MMUBTRN );
GMUBTRN.Abreviation = MMUBTRN;
NMUBTRN.data[0] = ALFAOST_name_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &OMUBTRN );
NMUBTRN.data[1] = A_UNITE(PMUBTRN,mode2,2,OMUBTRN);
 /* line 1541: */
ATAAOST_prod( A_HISVEC(QMUBTRN,NMUBTRN,2,A68_361 ), &RMUBTRN );
LTAAOST_opt( A_UNITE(SMUBTRN,mode2,2,RMUBTRN), &TMUBTRN );
DUAAOST_star( A_UNITE(UMUBTRN,mode2,2,TMUBTRN), &VMUBTRN );
GMUBTRN.Parameter = A_UNITE(WMUBTRN,mode2,2,VMUBTRN);
GMUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1543: */
GMUBTRN.Continuation = ZNDAOST_continue;
 /* line 1544: */
 /* line 1545: */
 /* line 1546: */
ZAAAOSI_makervc( YMUBTRN, &ZMUBTRN );
GMUBTRN.Help = A_UNITE(ANUBTRN,mode1,1,ZMUBTRN);
GNUBTRN.fn.fn_global = DNUBTRN_anonymous;
GNUBTRN.nonlocals = A68_NIL;
FNUBTRN = GNUBTRN ;
GMUBTRN.Command = A_UNITE(ENUBTRN,mode3,3,FNUBTRN);
 /* line 1552: */
HNUBTRN = A_HEAP(A68_389 ) ;
(*HNUBTRN) = GMUBTRN ;
IVTBTRN.data[9] = A_UNITE(INUBTRN,mode1,1,HNUBTRN);
 /* line 1553: */
 /* line 1555: */
PNUBTRN.fn.fn_global = LWSBTRN_portname;
PNUBTRN.nonlocals = A68_NIL;
RNUBTRN = EUSBTRN_make_command(ONUBTRN, NNUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, MNUBTRN, PNUBTRN) ;
IVTBTRN.data[10] = A_UNITE(QNUBTRN,mode1,1,RNUBTRN);
 /* line 1556: */
 /* line 1558: */
YNUBTRN.fn.fn_global = TWSBTRN_import;
YNUBTRN.nonlocals = A68_NIL;
AOUBTRN = EUSBTRN_make_command(XNUBTRN, WNUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, VNUBTRN, YNUBTRN) ;
IVTBTRN.data[11] = A_UNITE(ZNUBTRN,mode1,1,AOUBTRN);
 /* line 1559: */
 /* line 1560: */
 /* line 1562: */
HOUBTRN.fn.fn_global = BXSBTRN_macro;
HOUBTRN.nonlocals = A68_NIL;
JOUBTRN = EUSBTRN_make_command(GOUBTRN, FOUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, EOUBTRN, HOUBTRN) ;
IVTBTRN.data[12] = A_UNITE(IOUBTRN,mode1,1,JOUBTRN);
 /* line 1563: */
 /* line 1565: */
 /* line 1567: */
QOUBTRN.fn.fn_global = YXSBTRN_fntype;
QOUBTRN.nonlocals = A68_NIL;
SOUBTRN = EUSBTRN_make_command(POUBTRN, OOUBTRN, DVVATRN_fntype_options, QKRBTRN_no_outer, NOUBTRN, QOUBTRN) ;
IVTBTRN.data[13] = A_UNITE(ROUBTRN,mode1,1,SOUBTRN);
 /* line 1568: */
 /* line 1569: */
 /* line 1571: */
ZOUBTRN.fn.fn_global = QXSBTRN_sequence;
ZOUBTRN.nonlocals = A68_NIL;
BPUBTRN = EUSBTRN_make_command(YOUBTRN, XOUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, WOUBTRN, ZOUBTRN) ;
IVTBTRN.data[14] = A_UNITE(APUBTRN,mode1,1,BPUBTRN);
 /* line 1572: */
 /* line 1573: */
 /* line 1575: */
IPUBTRN.fn.fn_global = GYSBTRN_timescale;
IPUBTRN.nonlocals = A68_NIL;
KPUBTRN = EUSBTRN_make_command(HPUBTRN, GPUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, FPUBTRN, IPUBTRN) ;
IVTBTRN.data[15] = A_UNITE(JPUBTRN,mode1,1,KPUBTRN);
 /* line 1576: */
 /* line 1578: */
 /* line 1580: */
RPUBTRN.fn.fn_global = OYSBTRN_join;
RPUBTRN.nonlocals = A68_NIL;
TPUBTRN = EUSBTRN_make_command(QPUBTRN, PPUBTRN, JUBBTRN_joins_options, RKRBTRN_have_outer, OPUBTRN, RPUBTRN) ;
IVTBTRN.data[16] = A_UNITE(SPUBTRN,mode1,1,TPUBTRN);
 /* line 1581: */
 /* line 1583: */
 /* line 1585: */
AQUBTRN.fn.fn_global = XYSBTRN_make;
AQUBTRN.nonlocals = A68_NIL;
CQUBTRN = EUSBTRN_make_command(ZPUBTRN, YPUBTRN, JKEBTRN_multimakes_options, RKRBTRN_have_outer, XPUBTRN, AQUBTRN) ;
IVTBTRN.data[17] = A_UNITE(BQUBTRN,mode1,1,CQUBTRN);
 /* line 1586: */
 /* line 1588: */
 /* line 1590: */
JQUBTRN.fn.fn_global = OZSBTRN_elseof;
JQUBTRN.nonlocals = A68_NIL;
LQUBTRN = EUSBTRN_make_command(IQUBTRN, HQUBTRN, BWFBTRN_elseof_options, RKRBTRN_have_outer, GQUBTRN, JQUBTRN) ;
IVTBTRN.data[18] = A_UNITE(KQUBTRN,mode1,1,LQUBTRN);
 /* line 1591: */
 /* line 1592: */
 /* line 1593: */
 /* line 1595: */
 /* line 1597: */
SQUBTRN.fn.fn_global = LETBTRN_standard;
SQUBTRN.nonlocals = A68_NIL;
UQUBTRN = EUSBTRN_make_command(RQUBTRN, QQUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, PQUBTRN, SQUBTRN) ;
IVTBTRN.data[19] = A_UNITE(TQUBTRN,mode1,1,UQUBTRN);
 /* line 1599: */
 /* line 1600: */
 /* line 1601: */
 /* line 1602: */
 /* line 1603: */
 /* line 1605: */
 /* line 1607: */
BRUBTRN.fn.fn_global = OETBTRN_coreella;
BRUBTRN.nonlocals = A68_NIL;
DRUBTRN = EUSBTRN_make_command(ARUBTRN, ZQUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, YQUBTRN, BRUBTRN) ;
IVTBTRN.data[20] = A_UNITE(CRUBTRN,mode1,1,DRUBTRN);
 /* line 1609: */
 /* line 1610: */
 /* line 1611: */
 /* line 1612: */
 /* line 1613: */
 /* line 1614: */
 /* line 1616: */
 /* line 1620: */
KRUBTRN.fn.fn_global = HFTBTRN_ellavhdl;
KRUBTRN.nonlocals = A68_NIL;
MRUBTRN = EUSBTRN_make_command(JRUBTRN, IRUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, HRUBTRN, KRUBTRN) ;
IVTBTRN.data[21] = A_UNITE(LRUBTRN,mode1,1,MRUBTRN);
 /* line 1621: */
 /* line 1623: */
 /* line 1625: */
TRUBTRN.fn.fn_global = PATBTRN_multilet;
TRUBTRN.nonlocals = A68_NIL;
VRUBTRN = EUSBTRN_make_command(SRUBTRN, RRUBTRN, OVEBTRN_multilets_options, RKRBTRN_have_outer, QRUBTRN, TRUBTRN) ;
IVTBTRN.data[22] = A_UNITE(URUBTRN,mode1,1,VRUBTRN);
 /* line 1626: */
 /* line 1628: */
 /* line 1630: */
CSUBTRN.fn.fn_global = YBTBTRN_reform;
CSUBTRN.nonlocals = A68_NIL;
ESUBTRN = EUSBTRN_make_command(BSUBTRN, ASUBTRN, CIFBTRN_reform_options, RKRBTRN_have_outer, ZRUBTRN, CSUBTRN) ;
IVTBTRN.data[23] = A_UNITE(DSUBTRN,mode1,1,ESUBTRN);
 /* line 1632: */
 /* line 1634: */
 /* line 1636: */
LSUBTRN.fn.fn_global = GZSBTRN_name;
LSUBTRN.nonlocals = A68_NIL;
NSUBTRN = EUSBTRN_make_command(KSUBTRN, JSUBTRN, PZCBTRN_names_options, QKRBTRN_no_outer, ISUBTRN, LSUBTRN) ;
IVTBTRN.data[24] = A_UNITE(MSUBTRN,mode1,1,NSUBTRN);
 /* line 1637: */
 /* line 1639: */
 /* line 1641: */
USUBTRN.fn.fn_global = XZSBTRN_range;
USUBTRN.nonlocals = A68_NIL;
WSUBTRN = EUSBTRN_make_command(TSUBTRN, SSUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, RSUBTRN, USUBTRN) ;
IVTBTRN.data[25] = A_UNITE(VSUBTRN,mode1,1,WSUBTRN);
 /* line 1642: */
 /* line 1644: */
 /* line 1646: */
DTUBTRN.fn.fn_global = GATBTRN_dinst;
DTUBTRN.nonlocals = A68_NIL;
FTUBTRN = EUSBTRN_make_command(CTUBTRN, BTUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, ATUBTRN, DTUBTRN) ;
IVTBTRN.data[26] = A_UNITE(ETUBTRN,mode1,1,FTUBTRN);
 /* line 1648: */
 /* line 1650: */
 /* line 1652: */
MTUBTRN.fn.fn_global = YATBTRN_macparam;
MTUBTRN.nonlocals = A68_NIL;
OTUBTRN = EUSBTRN_make_command(LTUBTRN, KTUBTRN, WRFBTRN_macparams_options, RKRBTRN_have_outer, JTUBTRN, MTUBTRN) ;
IVTBTRN.data[27] = A_UNITE(NTUBTRN,mode1,1,OTUBTRN);
 /* line 1654: */
 /* line 1656: */
 /* line 1658: */
VTUBTRN.fn.fn_global = HBTBTRN_attribute;
VTUBTRN.nonlocals = A68_NIL;
XTUBTRN = EUSBTRN_make_command(UTUBTRN, TTUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, STUBTRN, VTUBTRN) ;
IVTBTRN.data[28] = A_UNITE(WTUBTRN,mode1,1,XTUBTRN);
 /* line 1659: */
 /* line 1661: */
 /* line 1663: */
EUUBTRN.fn.fn_global = HCTBTRN_alias;
EUUBTRN.nonlocals = A68_NIL;
GUUBTRN = EUSBTRN_make_command(DUUBTRN, CUUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, BUUBTRN, EUUBTRN) ;
IVTBTRN.data[29] = A_UNITE(FUUBTRN,mode1,1,GUUBTRN);
 /* line 1665: */
 /* line 1667: */
 /* line 1669: */
NUUBTRN.fn.fn_global = PCTBTRN_associated;
NUUBTRN.nonlocals = A68_NIL;
PUUBTRN = EUSBTRN_make_command(MUUBTRN, LUUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, KUUBTRN, NUUBTRN) ;
IVTBTRN.data[30] = A_UNITE(OUUBTRN,mode1,1,PUUBTRN);
 /* line 1670: */
 /* line 1672: */
 /* line 1674: */
WUUBTRN.fn.fn_global = XCTBTRN_local;
WUUBTRN.nonlocals = A68_NIL;
YUUBTRN = EUSBTRN_make_command(VUUBTRN, UUUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, TUUBTRN, WUUBTRN) ;
IVTBTRN.data[31] = A_UNITE(XUUBTRN,mode1,1,YUUBTRN);
 /* line 1676: */
 /* line 1678: */
 /* line 1680: */
FVUBTRN.fn.fn_global = FDTBTRN_cquery;
FVUBTRN.nonlocals = A68_NIL;
HVUBTRN = EUSBTRN_make_command(EVUBTRN, DVUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, CVUBTRN, FVUBTRN) ;
IVTBTRN.data[32] = A_UNITE(GVUBTRN,mode1,1,HVUBTRN);
 /* line 1682: */
 /* line 1684: */
 /* line 1686: */
OVUBTRN.fn.fn_global = NDTBTRN_delay;
OVUBTRN.nonlocals = A68_NIL;
QVUBTRN = EUSBTRN_make_command(NVUBTRN, MVUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, LVUBTRN, OVUBTRN) ;
IVTBTRN.data[33] = A_UNITE(PVUBTRN,mode1,1,QVUBTRN);
 /* line 1687: */
 /* line 1689: */
 /* line 1691: */
XVUBTRN.fn.fn_global = VDTBTRN_flatten_unit;
XVUBTRN.nonlocals = A68_NIL;
ZVUBTRN = EUSBTRN_make_command(WVUBTRN, VVUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, UVUBTRN, XVUBTRN) ;
IVTBTRN.data[34] = A_UNITE(YVUBTRN,mode1,1,ZVUBTRN);
 /* line 1693: */
 /* line 1695: */
 /* line 1697: */
GWUBTRN.fn.fn_global = DETBTRN_tstr_trow;
GWUBTRN.nonlocals = A68_NIL;
IWUBTRN = EUSBTRN_make_command(FWUBTRN, EWUBTRN, NLRBTRN_no_options, RKRBTRN_have_outer, DWUBTRN, GWUBTRN) ;
IVTBTRN.data[35] = A_UNITE(HWUBTRN,mode1,1,IWUBTRN);
 /* line 1699: */
 /* line 1701: */
 /* line 1703: */
PWUBTRN.fn.fn_global = QBTBTRN_bracket;
PWUBTRN.nonlocals = A68_NIL;
RWUBTRN = EUSBTRN_make_command(OWUBTRN, NWUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, MWUBTRN, PWUBTRN) ;
IVTBTRN.data[36] = A_UNITE(QWUBTRN,mode1,1,RWUBTRN);
 /* line 1705: */
 /* line 1706: */
 /* line 1707: */
 /* line 1708: */
 /* line 1717: */
BXUBTRN.fn.fn_global = XWUBTRN_anonymous;
BXUBTRN.nonlocals = A68_NIL;
DXUBTRN = EUSBTRN_make_command(AXUBTRN, ZWUBTRN, NLRBTRN_no_options, QKRBTRN_no_outer, YWUBTRN, BXUBTRN) ;
IVTBTRN.data[37] = A_UNITE(CXUBTRN,mode1,1,DXUBTRN);
ZAAAOSI_makervc( GXUBTRN, &HXUBTRN );
EXUBTRN.Name = HXUBTRN;
ZAAAOSI_makervc( JXUBTRN, &KXUBTRN );
EXUBTRN.Abreviation = KXUBTRN;
 /* line 1718: */
EXUBTRN.Parameter = SRAAOST_noparameters;
EXUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1720: */
EXUBTRN.Continuation = ZNDAOST_continue;
ZAAAOSI_makervc( MXUBTRN, &NXUBTRN );
EXUBTRN.Help = A_UNITE(OXUBTRN,mode1,1,NXUBTRN);
RXUBTRN.fn.fn_global = OFTBTRN_simulator;
RXUBTRN.nonlocals = A68_NIL;
QXUBTRN = RXUBTRN ;
EXUBTRN.Command = A_UNITE(PXUBTRN,mode3,3,QXUBTRN);
 /* line 1724: */
SXUBTRN = A_HEAP(A68_389 ) ;
(*SXUBTRN) = EXUBTRN ;
IVTBTRN.data[38] = A_UNITE(TXUBTRN,mode1,1,SXUBTRN);
 /* line 1725: */
 /* line 1727: */
 /* line 1728: */
 /* line 1734: */
JYUBTRN.fn.fn_global = ZXUBTRN_anonymous;
JYUBTRN.nonlocals = A68_NIL;
LYUBTRN = EUSBTRN_make_command(IYUBTRN, HYUBTRN, YGTBTRN_assembletest_options, QKRBTRN_no_outer, GYUBTRN, JYUBTRN) ;
IVTBTRN.data[39] = A_UNITE(KYUBTRN,mode1,1,LYUBTRN);
ZAAAOSI_makervc( OYUBTRN, &PYUBTRN );
MYUBTRN.Name = PYUBTRN;
 /* line 1735: */
ZAAAOSI_makervc( RYUBTRN, &SYUBTRN );
MYUBTRN.Abreviation = SYUBTRN;
LTAAOST_opt( AHFAOST_int_syntax, &TYUBTRN );
DUAAOST_star( A_UNITE(UYUBTRN,mode2,2,TYUBTRN), &VYUBTRN );
MYUBTRN.Parameter = A_UNITE(WYUBTRN,mode2,2,VYUBTRN);
MYUBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1736: */
MYUBTRN.Continuation = ZNDAOST_continue;
 /* line 1737: */
ZAAAOSI_makervc( YYUBTRN, &ZYUBTRN );
MYUBTRN.Help = A_UNITE(AZUBTRN,mode1,1,ZYUBTRN);
TZUBTRN.fn.fn_global = DZUBTRN_anonymous;
TZUBTRN.nonlocals = A68_NIL;
SZUBTRN = TZUBTRN ;
MYUBTRN.Command = A_UNITE(RZUBTRN,mode3,3,SZUBTRN);
 /* line 1749: */
UZUBTRN = A_HEAP(A68_389 ) ;
(*UZUBTRN) = MYUBTRN ;
IVTBTRN.data[40] = A_UNITE(VZUBTRN,mode1,1,UZUBTRN);
 /* line 1750: */
ZAAAOSI_makervc( YZUBTRN, &ZZUBTRN );
WZUBTRN.Name = ZZUBTRN;
WZUBTRN.Abreviation = EOAAOSL_nullstr;
WZUBTRN.Parameter = SRAAOST_noparameters;
WZUBTRN.Access = XMDAOST_normalaccess;
 /* line 1752: */
WZUBTRN.Continuation = ZNDAOST_continue;
 /* line 1753: */
ZAAAOSI_makervc( BAVBTRN, &CAVBTRN );
WZUBTRN.Help = A_UNITE(DAVBTRN,mode1,1,CAVBTRN);
JAVBTRN.fn.fn_global = GAVBTRN_anonymous;
JAVBTRN.nonlocals = A68_NIL;
IAVBTRN = JAVBTRN ;
WZUBTRN.Command = A_UNITE(HAVBTRN,mode3,3,IAVBTRN);
 /* line 1756: */
KAVBTRN = A_HEAP(A68_389 ) ;
(*KAVBTRN) = WZUBTRN ;
IVTBTRN.data[41] = A_UNITE(LAVBTRN,mode1,1,KAVBTRN);
 /* line 1757: */
ZAAAOSI_makervc( OAVBTRN, &PAVBTRN );
MAVBTRN.Name = PAVBTRN;
MAVBTRN.Abreviation = EOAAOSL_nullstr;
 /* line 1758: */
LTAAOST_opt( HNFAOST_filename_syntax, &QAVBTRN );
MAVBTRN.Parameter = A_UNITE(RAVBTRN,mode2,2,QAVBTRN);
MAVBTRN.Access = XMDAOST_normalaccess;
 /* line 1760: */
MAVBTRN.Continuation = ZNDAOST_continue;
 /* line 1761: */
 /* line 1762: */
 /* line 1763: */
ZAAAOSI_makervc( TAVBTRN, &UAVBTRN );
MAVBTRN.Help = A_UNITE(VAVBTRN,mode1,1,UAVBTRN);
HBVBTRN.fn.fn_global = YAVBTRN_anonymous;
HBVBTRN.nonlocals = A68_NIL;
GBVBTRN = HBVBTRN ;
MAVBTRN.Command = A_UNITE(FBVBTRN,mode3,3,GBVBTRN);
 /* line 1776: */
IBVBTRN = A_HEAP(A68_389 ) ;
(*IBVBTRN) = MAVBTRN ;
IVTBTRN.data[42] = A_UNITE(JBVBTRN,mode1,1,IBVBTRN);
 /* line 1777: */
ZAAAOSI_makervc( MBVBTRN, &NBVBTRN );
KBVBTRN.Name = NBVBTRN;
KBVBTRN.Abreviation = EOAAOSL_nullstr;
KBVBTRN.Parameter = HNFAOST_filename_syntax;
KBVBTRN.Access = XMDAOST_normalaccess;
 /* line 1779: */
KBVBTRN.Continuation = ZNDAOST_continue;
 /* line 1780: */
 /* line 1782: */
ZAAAOSI_makervc( PBVBTRN, &QBVBTRN );
KBVBTRN.Help = A_UNITE(RBVBTRN,mode1,1,QBVBTRN);
UBVBTRN.fn.fn_global = KKTBTRN_read_assfile;
UBVBTRN.nonlocals = A68_NIL;
TBVBTRN = UBVBTRN ;
KBVBTRN.Command = A_UNITE(SBVBTRN,mode3,3,TBVBTRN);
 /* line 1784: */
VBVBTRN = A_HEAP(A68_389 ) ;
(*VBVBTRN) = KBVBTRN ;
IVTBTRN.data[43] = A_UNITE(WBVBTRN,mode1,1,VBVBTRN);
 /* line 1785: */
ZAAAOSI_makervc( ZBVBTRN, &ACVBTRN );
XBVBTRN.Name = ACVBTRN;
XBVBTRN.Abreviation = EOAAOSL_nullstr;
LTAAOST_opt( HNFAOST_filename_syntax, &BCVBTRN );
XBVBTRN.Parameter = A_UNITE(CCVBTRN,mode2,2,BCVBTRN);
 /* line 1786: */
XBVBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1788: */
XBVBTRN.Continuation = ZNDAOST_continue;
 /* line 1789: */
 /* line 1790: */
ZAAAOSI_makervc( ECVBTRN, &FCVBTRN );
XBVBTRN.Help = A_UNITE(GCVBTRN,mode1,1,FCVBTRN);
SCVBTRN.fn.fn_global = JCVBTRN_anonymous;
SCVBTRN.nonlocals = A68_NIL;
RCVBTRN = SCVBTRN ;
XBVBTRN.Command = A_UNITE(QCVBTRN,mode3,3,RCVBTRN);
 /* line 1802: */
TCVBTRN = A_HEAP(A68_389 ) ;
(*TCVBTRN) = XBVBTRN ;
IVTBTRN.data[44] = A_UNITE(UCVBTRN,mode1,1,TCVBTRN);
 /* line 1803: */
ZAAAOSI_makervc( XCVBTRN, &YCVBTRN );
VCVBTRN.Name = YCVBTRN;
 /* line 1804: */
ZAAAOSI_makervc( ADVBTRN, &BDVBTRN );
VCVBTRN.Abreviation = BDVBTRN;
CDVBTRN.data[0] = IIFAOST_ident_syntax;
DUAAOST_star( AHFAOST_int_syntax, &DDVBTRN );
LTAAOST_opt( A_UNITE(EDVBTRN,mode2,2,DDVBTRN), &FDVBTRN );
CDVBTRN.data[1] = A_UNITE(GDVBTRN,mode2,2,FDVBTRN);
 /* line 1805: */
ATAAOST_prod( A_HISVEC(HDVBTRN,CDVBTRN,2,A68_361 ), &IDVBTRN );
DUAAOST_star( A_UNITE(JDVBTRN,mode2,2,IDVBTRN), &KDVBTRN );
VCVBTRN.Parameter = A_UNITE(LDVBTRN,mode2,2,KDVBTRN);
VCVBTRN.Access = XMDAOST_normalaccess;
 /* line 1806: */
VCVBTRN.Continuation = ZNDAOST_continue;
 /* line 1807: */
QDVBTRN = ODVBTRN ;
MDVBTRN.data[0] = A_UNITE(PDVBTRN,mode7,7,QDVBTRN);
 /* line 1808: */
MDVBTRN.data[1] = A_UNITE(RDVBTRN,mode7,7,CIFAOST_ident_str);
 /* line 1809: */
 /* line 1810: */
VDVBTRN = TDVBTRN ;
MDVBTRN.data[2] = A_UNITE(UDVBTRN,mode7,7,VDVBTRN);
 /* line 1811: */
MDVBTRN.data[3] = A_UNITE(WDVBTRN,mode7,7,JDFAOST_int_str);
 /* line 1812: */
AEVBTRN = YDVBTRN ;
MDVBTRN.data[4] = A_UNITE(ZDVBTRN,mode7,7,AEVBTRN);
 /* line 1814: */
UJBAOSL_oneline( A_HISVEC(BEVBTRN,MDVBTRN,5,A68_52 ), &CEVBTRN );
VCVBTRN.Help = A_UNITE(DEVBTRN,mode1,1,CEVBTRN);
GEVBTRN.fn.fn_global = IPTBTRN_external;
GEVBTRN.nonlocals = A68_NIL;
FEVBTRN = GEVBTRN ;
VCVBTRN.Command = A_UNITE(EEVBTRN,mode3,3,FEVBTRN);
 /* line 1816: */
HEVBTRN = A_HEAP(A68_389 ) ;
(*HEVBTRN) = VCVBTRN ;
IVTBTRN.data[45] = A_UNITE(IEVBTRN,mode1,1,HEVBTRN);
 /* line 1817: */
ZAAAOSI_makervc( LEVBTRN, &MEVBTRN );
JEVBTRN.Name = MEVBTRN;
JEVBTRN.Abreviation = EOAAOSL_nullstr;
JEVBTRN.Parameter = SRAAOST_noparameters;
JEVBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1818: */
JEVBTRN.Continuation = DODAOST_return;
 /* line 1819: */
ZAAAOSI_makervc( OEVBTRN, &PEVBTRN );
JEVBTRN.Help = A_UNITE(QEVBTRN,mode1,1,PEVBTRN);
SEVBTRN.fn.fn_global = MMDAOST_nullcommand;
SEVBTRN.nonlocals = A68_NIL;
JEVBTRN.Command = A_UNITE(REVBTRN,mode2,2,SEVBTRN);
 /* line 1821: */
TEVBTRN = A_HEAP(A68_389 ) ;
(*TEVBTRN) = JEVBTRN ;
IVTBTRN.data[46] = A_UNITE(UEVBTRN,mode1,1,TEVBTRN);
 /* line 1822: */
if ( Simenviron )
{ 
 /* line 1823: */
ZAAAOSI_makervc( XEVBTRN, &YEVBTRN );
VEVBTRN.Name = YEVBTRN;
ZAAAOSI_makervc( AFVBTRN, &BFVBTRN );
VEVBTRN.Abreviation = BFVBTRN;
 /* line 1824: */
LTAAOST_opt( HNFAOST_filename_syntax, &CFVBTRN );
VEVBTRN.Parameter = A_UNITE(DFVBTRN,mode2,2,CFVBTRN);
VEVBTRN.Access = XMDAOST_normalaccess;
 /* line 1825: */
VEVBTRN.Continuation = ZNDAOST_continue;
 /* line 1843: */
RGVBTRN.fn.fn_global = GFVBTRN_anonymous;
RGVBTRN.nonlocals = A68_NIL;
QGVBTRN = RGVBTRN ;
VEVBTRN.Help = A_UNITE(PGVBTRN,mode3,3,QGVBTRN);
 /* line 1844: */
UGVBTRN.fn.fn_global = BTTBTRN_call_simulator;
UGVBTRN.nonlocals = A68_NIL;
TGVBTRN = UGVBTRN ;
VEVBTRN.Command = A_UNITE(SGVBTRN,mode3,3,TGVBTRN);
 /* line 1845: */
VGVBTRN = A_HEAP(A68_389 ) ;
(*VGVBTRN) = VEVBTRN ;
IVTBTRN.data[47] = A_UNITE(WGVBTRN,mode1,1,VGVBTRN);
} 
else
{ 
 /* line 1846: */
ZAAAOSI_makervc( ZGVBTRN, &AHVBTRN );
XGVBTRN.Name = AHVBTRN;
ZAAAOSI_makervc( CHVBTRN, &DHVBTRN );
XGVBTRN.Abreviation = DHVBTRN;
 /* line 1847: */
LTAAOST_opt( HNFAOST_filename_syntax, &EHVBTRN );
XGVBTRN.Parameter = A_UNITE(FHVBTRN,mode2,2,EHVBTRN);
XGVBTRN.Access = BNDAOST_hiddenaccess;
 /* line 1848: */
XGVBTRN.Continuation = ZNDAOST_continue;
 /* line 1850: */
ZAAAOSI_makervc( HHVBTRN, &IHVBTRN );
XGVBTRN.Help = A_UNITE(JHVBTRN,mode1,1,IHVBTRN);
 /* line 1851: */
MHVBTRN.fn.fn_global = UUTBTRN_call_nosimulator;
MHVBTRN.nonlocals = A68_NIL;
LHVBTRN = MHVBTRN ;
XGVBTRN.Command = A_UNITE(KHVBTRN,mode3,3,LHVBTRN);
 /* line 1852: */
NHVBTRN = A_HEAP(A68_389 ) ;
(*NHVBTRN) = XGVBTRN ;
IVTBTRN.data[47] = A_UNITE(OHVBTRN,mode1,1,NHVBTRN);
} 
ARDAOST_makecommands( A_HISVEC(PHVBTRN,IVTBTRN,48,A68_388 ), &QHVBTRN );
RHVBTRN_asscommands = QHVBTRN;
 /* line 1855: */
SHVBTRN.fn.fn_global = LMCAOST_default_set_var;
SHVBTRN.nonlocals = A68_NIL;
QLCAOST_add_var(ZJRBTRN_external_var, ZJRBTRN_external_var, YKCAOST_env_var, SHVBTRN);
 /* line 1857: */
 /* line 1861: */
if ( Simenviron )
{ 
 /* line 1862: */
ZAAAOSI_makervc( WHVBTRN, &XHVBTRN );
UHVBTRN.Name = XHVBTRN;
 /* line 1863: */
ZAAAOSI_makervc( ZHVBTRN, &AIVBTRN );
UHVBTRN.Abreviation = AIVBTRN;
 /* line 1864: */
LTAAOST_opt( CJFAOST_fnname_syntax, &CIVBTRN );
BIVBTRN.data[0] = A_UNITE(DIVBTRN,mode2,2,CIVBTRN);
LTAAOST_opt( WPFAOST_contextname_syntax, &FIVBTRN );
EIVBTRN.data[0] = A_UNITE(GIVBTRN,mode2,2,FIVBTRN);
LTAAOST_opt( YPFAOST_importname_syntax, &HIVBTRN );
EIVBTRN.data[1] = A_UNITE(IIVBTRN,mode2,2,HIVBTRN);
 /* line 1865: */
ATAAOST_prod( A_HISVEC(JIVBTRN,EIVBTRN,2,A68_361 ), &KIVBTRN );
LTAAOST_opt( A_UNITE(LIVBTRN,mode2,2,KIVBTRN), &MIVBTRN );
DUAAOST_star( A_UNITE(NIVBTRN,mode2,2,MIVBTRN), &OIVBTRN );
BIVBTRN.data[1] = A_UNITE(PIVBTRN,mode2,2,OIVBTRN);
 /* line 1866: */
ATAAOST_prod( A_HISVEC(QIVBTRN,BIVBTRN,2,A68_361 ), &RIVBTRN );
UHVBTRN.Parameter = A_UNITE(SIVBTRN,mode2,2,RIVBTRN);
UHVBTRN.Access = XMDAOST_normalaccess;
 /* line 1867: */
UHVBTRN.Continuation = ZNDAOST_continue;
 /* line 1869: */
ZAAAOSI_makervc( UIVBTRN, &VIVBTRN );
UHVBTRN.Help = A_UNITE(WIVBTRN,mode1,1,VIVBTRN);
UHVBTRN.Command = A_UNITE(XIVBTRN,mode3,3,Assemble_prelude);
 /* line 1870: */
 /* line 1871: */
 /* line 1872: */
 /* line 1873: */
 /* line 1875: */
 /* line 1878: */
AJVBTRN.fn.fn_global = XSTBTRN_transform_postlude;
AJVBTRN.nonlocals = A68_NIL;
ZIVBTRN = AJVBTRN ;
BJVBTRN = A_HEAP(A68_389 ) ;
(*BJVBTRN) = UHVBTRN ;
DJVBTRN = GTDAOST_make_compound(BJVBTRN, GIRBTRN_environment, (&OJRBTRN_assprompt), RHVBTRN_asscommands, Globals, A_UNITE(YIVBTRN,mode3,3,ZIVBTRN)) ;
THVBTRN.data[0] = A_UNITE(CJVBTRN,mode3,3,DJVBTRN);
 /* line 1879: */
ZAAAOSI_makervc( GJVBTRN, &HJVBTRN );
EJVBTRN.Name = HJVBTRN;
ZAAAOSI_makervc( JJVBTRN, &KJVBTRN );
EJVBTRN.Abreviation = KJVBTRN;
 /* line 1880: */
EJVBTRN.Parameter = HNFAOST_filename_syntax;
EJVBTRN.Access = XMDAOST_normalaccess;
 /* line 1881: */
EJVBTRN.Continuation = ZNDAOST_continue;
 /* line 1882: */
LJVBTRN.data[0] = NJVBTRN;
LJVBTRN.data[1] = YLDAOST_assfile_type;
LJVBTRN.data[2] = A_HVEC(OJVBTRN,')',A68_CHAR );
 /* line 1884: */
JBAAOSI_concat( A_HISVEC(PJVBTRN,LJVBTRN,3,A68_VC ), &QJVBTRN );
EJVBTRN.Help = A_UNITE(RJVBTRN,mode1,1,QJVBTRN);
EJVBTRN.Command = A_UNITE(SJVBTRN,mode3,3,Assemblefile_prelude);
 /* line 1885: */
 /* line 1886: */
 /* line 1887: */
 /* line 1888: */
 /* line 1890: */
 /* line 1891: */
 /* line 1892: */
VJVBTRN.fn.fn_global = XSTBTRN_transform_postlude;
VJVBTRN.nonlocals = A68_NIL;
UJVBTRN = VJVBTRN ;
WJVBTRN = A_HEAP(A68_389 ) ;
(*WJVBTRN) = EJVBTRN ;
YJVBTRN = GTDAOST_make_compound(WJVBTRN, GIRBTRN_environment, (&OJRBTRN_assprompt), RHVBTRN_asscommands, Globals, A_UNITE(TJVBTRN,mode3,3,UJVBTRN)) ;
THVBTRN.data[1] = A_UNITE(XJVBTRN,mode3,3,YJVBTRN);
 /* line 1894: */
ARDAOST_makecommands( A_HISVEC(AKVBTRN,THVBTRN,2,A68_388 ), &BKVBTRN );
ZJVBTRN = BKVBTRN;
} 
else
{ 
 /* line 1896: */
ZJVBTRN = RHVBTRN_asscommands;
} 
} 
A_PROC_EXIT(make_asscommands);
*ReturnedValue = (ZJVBTRN);
return;
} 
#undef NL
 /* line 1901: */
 /* line 1902: */
 /* line 1904: */
 /* line 1905: */
 /* line 1906: */
 /* line 1907: */
 /* line 1908: */

A68_VOID  LKVBTRN_transform_prelude(A68_363  Names, A68_BOOL  Readass, A68_VC  Lbn, A68_VC  Ctn, A68_713  Get_assclosure, A68_561  Sw, A68_152  Zc, A68_575  Ckcl, A68_97  Msg)
{ 
A68_VC  OKVBTRN;  /* avoid structure result */
A68_INT  PKVBTRN_start;
A68_540  QKVBTRN;  /* avoid structure result */
A68_540  RKVBTRN_cl;
A68_589  SKVBTRN;  /* collateral clause result */
A68_52  TKVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  UKVBTRN;  /* procedure value */
A68_INT  VKVBTRN;  /* YIELD */
A68_52  WKVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XKVBTRN;  /* YIELD */
A68_52  YKVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ZKVBTRN;  /* procedure value */
A68_85  ALVBTRN;  /* OPERATORS - istruct -> vector */
A68_INT  BLVBTRN_finish;
A68_582  CLVBTRN;  /* collateral clause result */
A68_VC  FLVBTRN;  /* avoid structure result */
A68_582 * GLVBTRN;  /* YIELD */
A_PROC_ENTRY(transform_prelude);
 /* line 1909: */
 /* line 1910: */
{ 
MJRBTRN_library_name = Lbn;
 /* line 1911: */
NJRBTRN_context_name = Ctn;
 /* line 1912: */
MIRBTRN_write_closureseeds = Sw;
 /* line 1913: */
PIRBTRN_zero_ctnos = Zc;
 /* line 1914: */
WIRBTRN_check_sim_closure = Ckcl;
 /* line 1915: */
ZAAAOSI_makervc( NKVBTRN, &OKVBTRN );
OJRBTRN_assprompt = OKVBTRN;
 /* line 1916: */
AKRBTRN_gcmode = BKRBTRN_show_options = A68_FALSE;
 /* line 1917: */
EKRBTRN_stack = CKRBTRN_stackend;
 /* line 1918: */
WLRBTRN_history = (&VLRBTRN_endhistory);
 /* line 1919: */
OLRBTRN_history_count = 0;
 /* line 1920: */
HIRBTRN_assembled = A68_FALSE;
 /* line 1921: */
 /* line 1923: */
if ( Readass )
{ 
LRAAOSL_newline(KEAAOST_screen);
 /* line 1924: */
 /* line 1925: */
 /* line 1926: */
KKTBTRN_read_assfile(Names, Msg);
} 
else
{ 
PKVBTRN_start = ZACAOSI_get_cpu_time();
 /* line 1927: */
A_CALLPROC(Get_assclosure,(Names, Msg, &QKVBTRN),(Names, Msg, &QKVBTRN,(Get_assclosure).nonlocals));
RKVBTRN_cl = QKVBTRN;
 /* line 1928: */
 /* line 1929: */
if ( (RKVBTRN_cl.Closure!=QJRBTRN_null_closure) )
{ 
QHSBTRN_assign(RKVBTRN_cl.Closure);
 /* line 1930: */
BMRBTRN_title_str = RKVBTRN_cl.Head_data;
 /* line 1931: */
SNGAOST_banner(GIRBTRN_environment);
 /* line 1932: */
UKVBTRN.fn.fn_global = LRAAOSL_newline;
UKVBTRN.nonlocals = A68_NIL;
SKVBTRN.data[0] = A_UNITE(TKVBTRN,mode12,12,UKVBTRN);
VKVBTRN = 1 ;
XKVBTRN = (*(&A_VINDEX(BMRBTRN_title_str,VKVBTRN))) ;
SKVBTRN.data[1] = A_UNITE(WKVBTRN,mode7,7,XKVBTRN);
ZKVBTRN.fn.fn_global = LRAAOSL_newline;
ZKVBTRN.nonlocals = A68_NIL;
SKVBTRN.data[2] = A_UNITE(YKVBTRN,mode12,12,ZKVBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ALVBTRN,SKVBTRN,3,A68_52 ));
 /* line 1933: */
BLVBTRN_finish = ZACAOSI_get_cpu_time();
 /* line 1934: */
 /* line 1935: */
CLVBTRN.Count = OLRBTRN_history_count+=1;
ZAAAOSI_makervc( ELVBTRN, &FLVBTRN );
CLVBTRN.Name = FLVBTRN;
CLVBTRN.Sort = GKRBTRN_normal;
 /* line 1936: */
CLVBTRN.Cpu_time = (BLVBTRN_finish-PKVBTRN_start);
CLVBTRN.Status = JKRBTRN_original;
CLVBTRN.Type = PKRBTRN_ignoretype;
CLVBTRN.Options = WKRBTRN_nulloptions;
CLVBTRN.Fns = CLRBTRN_nullouterfns;
CLVBTRN.Rest = WLRBTRN_history;
GLVBTRN = A_HEAP(A68_582 ) ;
(*GLVBTRN) = CLVBTRN ;
WLRBTRN_history = GLVBTRN;
 /* line 1937: */
 /* line 1938: */
 /* line 1939: */
 /* line 1940: */
HIRBTRN_assembled = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(transform_prelude);
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
void ZHRBTRN(void)   /* initialise DECS asscommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/asscommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/simple_layout.m","./mfiles/kexpand.m","./mfiles/lets_transform.m","./mfiles/assdiagnostics.m","./mfiles/openinterface.m","./mfiles/tstr_trow.m","./mfiles/flatten_unit.m","./mfiles/delay.m","./mfiles/cquery.m","./mfiles/associated.m","./mfiles/local.m","./mfiles/alias.m","./mfiles/attribute.m","./mfiles/dinst.m","./mfiles/range.m","./mfiles/elseof.m","./mfiles/macparams.m","./mfiles/reform.m","./mfiles/multilets.m","./mfiles/multimakes.m","./mfiles/names.m","./mfiles/brackets_transform.m","./mfiles/portname.m","./mfiles/joins.m","./mfiles/timescale.m","./mfiles/sequence.m","./mfiles/fntype.m","./mfiles/macro.m","./mfiles/import.m","./mfiles/transformprocs.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/ostools/assoc/mfiles/variables.m","./mfiles/assmodes.m","./mfiles/ptassem.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_561  NIRBTRN;  /* procedure value */
A68_152  QIRBTRN;  /* procedure value */
A68_575  XIRBTRN;  /* procedure value */
A68_VC  DJRBTRN;  /* avoid structure result */
A68_VC  GJRBTRN;  /* OPERATORS - assign op */
A68_VC  IJRBTRN;  /* avoid structure result */
A68_VC  LJRBTRN;  /* OPERATORS - assign op */
A68_VC  PJRBTRN;  /* OPERATORS - nil -> mode */
A68_32  XKRBTRN;  /* avoid structure result */
A68_583  DLRBTRN;  /* avoid structure result */
A68_46  MLRBTRN;  /* avoid structure result */
A68_582  PLRBTRN;  /* collateral clause result */
A68_VC  ULRBTRN;  /* avoid structure result */
A68_102  CMRBTRN;  /* avoid structure result */
A68_604  KGTBTRN;  /* collateral clause result */
A68_46  XGTBTRN;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BQQBTRN();   /* USE simple_layout */
KHLBTRN();   /* USE kexpand */
MXIBTRN();   /* USE lets_transform */
GCIBTRN();   /* USE assdiagnostics */
TPCATRN();   /* USE openinterface */
WLQBTRN();   /* USE tstr_trow */
EJHBTRN();   /* USE flatten_unit */
GGHBTRN();   /* USE delay */
JCHBTRN();   /* USE cquery */
NBQBTRN();   /* USE associated */
LFPBTRN();   /* USE local */
DQOBTRN();   /* USE alias */
PRGBTRN();   /* USE attribute */
ZNGBTRN();   /* USE dinst */
VJGBTRN();   /* USE range */
KVFBTRN();   /* USE elseof */
FRFBTRN();   /* USE macparams */
LHFBTRN();   /* USE reform */
XUEBTRN();   /* USE multilets */
YJEBTRN();   /* USE multimakes */
HYCBTRN();   /* USE names */
VWLATRN();   /* USE brackets_transform */
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
TKCAOST();   /* USE variables */
BAAATRN();   /* USE assmodes */
NCGATRN();   /* USE ptassem */
TIGAOST();   /* USE ioprocs */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
QFBAOST();   /* USE testmode */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/asscommands.a68";
A_config.translation_time = "Tue Apr  4 10:11:26 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YHRBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:11:26 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS asscommands);
UEAALIB_a68config(LGAALIB_configinfo, DIRBTRN);
 /* line 108: */
GIRBTRN_environment = FIRBTRN;
 /* line 112: */
HIRBTRN_assembled = A68_FALSE;
 /* line 113: */
IIRBTRN_assclosure = (A68_192 *)A68_NIL;
 /* line 114: */
 /* line 115: */
NIRBTRN.fn.fn_global = LIRBTRN_anonymous;
NIRBTRN.nonlocals = A68_NIL;
MIRBTRN_write_closureseeds = (NIRBTRN);
 /* line 116: */
QIRBTRN.fn.fn_global = OIRBTRN_anonymous;
QIRBTRN.nonlocals = A68_NIL;
PIRBTRN_zero_ctnos = (QIRBTRN);
 /* line 117: */
 /* line 118: */
XIRBTRN.fn.fn_global = TIRBTRN_anonymous;
XIRBTRN.nonlocals = A68_NIL;
WIRBTRN_check_sim_closure = (XIRBTRN);
 /* line 119: */
ZIRBTRN_generator( A68_TRUE, &DJRBTRN );
CJRBTRN_lbn = DJRBTRN;
GJRBTRN = FJRBTRN ;
A_VASSIGN2(GJRBTRN,CJRBTRN_lbn,A68_CHAR );
 /* line 120: */
ZIRBTRN_generator( A68_TRUE, &IJRBTRN );
HJRBTRN_ctn = IJRBTRN;
LJRBTRN = KJRBTRN ;
A_VASSIGN2(LJRBTRN,HJRBTRN_ctn,A68_CHAR );
 /* line 121: */
MJRBTRN_library_name = CJRBTRN_lbn;
 /* line 122: */
NJRBTRN_context_name = HJRBTRN_ctn;
 /* line 123: */
OJRBTRN_assprompt = (A_VVAC(PJRBTRN));
 /* line 125: */
 /* line 127: */
TJRBTRN_trace_var = SJRBTRN;
WJRBTRN_sim_var = VJRBTRN;
 /* line 128: */
ZJRBTRN_external_var = YJRBTRN;
 /* line 129: */
AKRBTRN_gcmode = A68_FALSE;
BKRBTRN_show_options = A68_FALSE;
 /* line 135: */
 /* line 136: */
 /* line 137: */
DKRBTRN_max_stack_size = 5;
 /* line 138: */
EKRBTRN_stack = CKRBTRN_stackend;
 /* line 140: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
TKRBTRN_generator( A68_TRUE, &XKRBTRN );
WKRBTRN_nulloptions = XKRBTRN;
 /* line 153: */
ZKRBTRN_generator( A68_TRUE, &DLRBTRN );
CLRBTRN_nullouterfns = DLRBTRN;
 /* line 154: */
FLRBTRN_generator( A68_TRUE, &MLRBTRN );
NLRBTRN_no_options = MLRBTRN;
 /* line 155: */
OLRBTRN_history_count = 0;
 /* line 156: */
PLRBTRN.Count = OLRBTRN_history_count;
RLRBTRN_generator( A68_FALSE, &ULRBTRN );
PLRBTRN.Name = ULRBTRN;
PLRBTRN.Sort = GKRBTRN_normal;
 /* line 157: */
PLRBTRN.Cpu_time = 0;
PLRBTRN.Status = JKRBTRN_original;
PLRBTRN.Type = PKRBTRN_ignoretype;
PLRBTRN.Options = WKRBTRN_nulloptions;
PLRBTRN.Fns = CLRBTRN_nullouterfns;
PLRBTRN.Rest = (A68_582 *)A68_NIL;
VLRBTRN_endhistory = PLRBTRN;
 /* line 158: */
WLRBTRN_history = (&VLRBTRN_endhistory);
 /* line 159: */
YLRBTRN_generator( A68_FALSE, &CMRBTRN );
BMRBTRN_title_str = CMRBTRN;
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 170: */
 /* line 202: */
 /* line 229: */
 /* line 236: */
 /* line 248: */
 /* line 250: */
 /* line 290: */
 /* line 326: */
 /* line 353: */
 /* line 421: */
 /* line 494: */
 /* line 516: */
 /* line 536: */
 /* line 545: */
 /* line 546: */
 /* line 547: */
 /* line 749: */
 /* line 785: */
 /* line 864: */
 /* line 880: */
 /* line 884: */
 /* line 888: */
 /* line 893: */
 /* line 897: */
 /* line 901: */
 /* line 905: */
 /* line 911: */
 /* line 917: */
 /* line 922: */
 /* line 927: */
 /* line 932: */
 /* line 937: */
 /* line 942: */
 /* line 947: */
 /* line 952: */
 /* line 957: */
 /* line 961: */
 /* line 965: */
 /* line 969: */
 /* line 973: */
 /* line 977: */
 /* line 981: */
 /* line 985: */
 /* line 989: */
 /* line 1002: */
 /* line 1027: */
 /* line 1057: */
 /* line 1080: */
 /* line 1081: */
 /* line 1082: */
KGTBTRN.data[0] = MGTBTRN;
 /* line 1083: */
KGTBTRN.data[1] = OGTBTRN;
 /* line 1084: */
KGTBTRN.data[2] = QGTBTRN;
 /* line 1085: */
KGTBTRN.data[3] = SGTBTRN;
 /* line 1087: */
KGTBTRN.data[4] = UGTBTRN;
KGTBTRN.data[5] = WGTBTRN;
YGTBTRN_assembletest_options = A_HISVEC(XGTBTRN,KGTBTRN,6,A68_VC );
 /* line 1089: */
 /* line 1103: */
 /* line 1149: */
 /* line 1162: */
 /* line 1251: */
 /* line 1299: */
 /* line 1307: */
 /* line 1335: */
 /* line 1339: */
 /* line 1900: */
 /* line 1942: */
 /* line 1943: */
 /* line 1944: */
/*SKIP*/;
A_PROC_EXIT(DECS asscommands);
} 
#undef NL
/* end of translation of ./a68files/asscommands.a68 */
