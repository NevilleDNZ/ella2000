
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
/* UNAME:AAAAEXT */
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
struct A68t117{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t118,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 4 CHAR */
struct A68t119{
struct A68t120  Access;
A_PAD_ISTRUCT(A68_120 ,PAD_25)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE120)  */

A_PROCEDURE(struct A68t117 *,A68t121,(A68_VC ,struct A68t119 ,struct A68t97 ),(A68_VC ,struct A68t119 ,struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE119,MODE97) REF MODE117 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t117 *,struct A68t97 ),(struct A68t117 *,struct A68t97 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE117,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t117 *,A68_VC *),(struct A68t117 *,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE117) MODE26 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE117,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t117 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE117,MODE26,MODE97) MODE35 */
struct A68t126{
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
typedef struct A68t126  A68_126 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t128 ;

A_PROCEDURE(struct A68t126 *,A68t127,(struct A68t128 ,struct A68t97 ),(struct A68t128 ,struct A68t97 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE128,MODE97) REF MODE126 */
struct A68t128 { A68_INT mode; union {
struct A68t117 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE117,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t117 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE117,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t117 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE117,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t117 *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE117,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ),(A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t135,(void),(void *));
typedef struct A68t135  A68_135 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t136,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t137,(void),(void *));
typedef struct A68t137  A68_137 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t140{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t141,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t140 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t140 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE26,MODE26,MODE97) MODE140 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC *),(A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t145,(void),(void *));
typedef struct A68t145  A68_145 ;    /* PROC BOOL */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t147 ,struct A68t97 ),(struct A68t147 ,struct A68t97 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE147,MODE97) VOID */
A_VECTOR(struct A68t148 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE148 */
struct A68t148{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_36)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t149,(void),(void *));
typedef struct A68t149  A68_149 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t153,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REAL) REAL */
struct A68t154{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t155,(A68_BOOL ,struct A68t154 *),(A68_BOOL ,struct A68t154 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(BOOL) MODE154 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t154 ,A68_BOOL ),(struct A68t154 ,A68_BOOL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE154,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC MODE154 */

A_PROCEDURE(A68_BOOL ,A68t158,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t160 ;
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,struct A68t149 ,struct A68t160 ,struct A68t161 ),(A68_VC ,struct A68t149 ,struct A68t160 ,struct A68t161 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE149,MODE160,MODE161) VOID */

A_PROCEDURE(A68_BOOL ,A68t160,(A68_VC ,struct A68t142 ),(A68_VC ,struct A68t142 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,MODE142) BOOL */

A_PROCEDURE(A68_BOOL ,A68t161,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE162,MODE97) VOID */
struct A68t164{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t166 ;

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166) VOID */
struct A68t166 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t167,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t168,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BITS,BITS) BITS */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ,A68_INT ),(struct A68t170 ,A68_INT ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t170,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(CHAR) VOID */
struct A68t172 ;

A_PROCEDURE(A68_INT ,A68t171,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE172) INT */

A_PROCEDURE(A68_CHAR ,A68t172,(void),(void *));
typedef struct A68t172  A68_172 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t173,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ),(A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC *),(A68_VC *,void *));
typedef struct A68t176  A68_176 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t177,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t179{
A68_VC  Id;
struct A68t179 * Rest;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,REF MODE179)  */
struct A68t180{
A68_INT  Int;
A_PAD_INT(PAD_37)
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t181 { A68_INT mode; union {
struct A68t182 * mode1;
struct A68t183 * mode2;
struct A68t184 * mode3;
struct A68t185 * mode4;
struct A68t186 * mode5;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186)  */
struct A68t182{
A68_INT  Attrno;
A_PAD_INT(PAD_38)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_VC  Classname;
struct A68t179 * Strings;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE179)  */
struct A68t184{
struct A68t181  Elem;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE181,REF MODE184)  */
struct A68t185{
struct A68t181  Attr;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE181)  */
struct A68t186{
A68_INT  Attrnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_INT  Sort;
A_PAD_INT(PAD_40)
A68_VC  Attrname;
struct A68t181  Value;
struct A68t188 * Usage;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26,MODE181,REF MODE188)  */
struct A68t188{
A68_INT  Contextno;
A_PAD_INT(PAD_41)
A68_INT  Closureno;
A_PAD_INT(PAD_42)
A68_INT  Libv_spec;
A_PAD_INT(PAD_43)
A68_INT  Libv_body;
A_PAD_INT(PAD_44)
A68_BOOL  Import;
A_PAD_BOOL(PAD_45)
A68_BOOL  Export;
A_PAD_BOOL(PAD_46)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t189{
struct A68t181  Tag;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE181)  */
struct A68t190 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198 * mode8;
struct A68t199 * mode9;
struct A68t200 * mode10;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200)  */
struct A68t191{
A68_INT  Int;
A_PAD_INT(PAD_47)
A68_VC  Text;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t192{
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t190  Test;
struct A68t190  Standard;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,MODE190,MODE190)  */
struct A68t193{
A68_INT  Nameno;
A_PAD_INT(PAD_49)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Intno;
A_PAD_INT(PAD_50)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t190  Left;
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t190  Right;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE190,INT,MODE190)  */
struct A68t196{
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t190  Right;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,MODE190)  */
struct A68t197{
struct A68t190  Cond;
struct A68t190  True;
struct A68t190  False;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE190,MODE190,MODE190)  */
struct A68t198{
struct A68t190  Formula;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE190)  */
struct A68t199{
A68_INT  Macparno;
A_PAD_INT(PAD_53)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t200{
A68_INT  Fnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t201{
struct A68t190  Tag;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE190)  */
struct A68t202{
struct A68t190  Formula;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE190,REF MODE202)  */
struct A68t205{
struct A68t190  Lwb;
struct A68t190  Upb;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE190,MODE190)  */
struct A68t204 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198 * mode8;
struct A68t199 * mode9;
struct A68t200 * mode10;
struct A68t205  mode11;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,MODE205)  */
struct A68t203{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Intname;
struct A68t181  Attr;
struct A68t204  Value;
struct A68t188 * Usage;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE204,REF MODE188)  */
struct A68t206 { A68_INT mode; union {
struct A68t207 * mode1;
struct A68t208 * mode2;
struct A68t209 * mode3;
struct A68t210 * mode4;
struct A68t211 * mode5;
struct A68t212 * mode6;
struct A68t213 * mode7;
struct A68t199 * mode8;
struct A68t214 * mode9;
} data; };
typedef struct A68t206  A68_206 ;    /* UNION(REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE199,REF MODE214)  */
struct A68t207{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
struct A68t190  Size;
struct A68t206  Elem;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE190,MODE206)  */
struct A68t209{
struct A68t206  Elem;
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE206,REF MODE209)  */
struct A68t210{
struct A68t206  From;
struct A68t206  To;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t211{
struct A68t206  Type;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE206)  */
struct A68t212{
struct A68t190  Size;
struct A68t206  Char;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE190,MODE206)  */
struct A68t213{
A68_INT  Tvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT)  */
struct A68t214{
A68_INT  Tnull;
A_PAD_INT(PAD_58)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
struct A68t206  Tag;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE206)  */
struct A68t216{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t217{
A68_VC  Altname;
struct A68t206  Assoc;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE26,MODE206)  */
struct A68t218{
A68_VC  Tagname;
struct A68t205  Range;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,MODE205)  */
A_VECTOR(struct A68t217 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE217 */
struct A68t219 { A68_INT mode; union {
struct A68t220  mode1;
struct A68t218 * mode2;
struct A68t215 * mode3;
struct A68t216 * mode4;
} data; };
typedef struct A68t219  A68_219 ;    /* UNION(REF MODE220,REF MODE218,REF MODE215,REF MODE216)  */
struct A68t221{
A68_INT  Sort;
A_PAD_INT(PAD_59)
A68_VC  Typename;
struct A68t181  Attr;
struct A68t219  Body;
struct A68t188 * Usage;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE219,REF MODE188)  */
struct A68t222{
A68_INT  Constno;
A_PAD_INT(PAD_60)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT)  */
struct A68t223{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
A68_INT  Primno;
A_PAD_INT(PAD_62)
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,INT)  */
struct A68t224{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t190  Index;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT,MODE190)  */
struct A68t225{
A68_INT  Typeno;
A_PAD_INT(PAD_64)
struct A68t205  Range;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,MODE205)  */
struct A68t226{
struct A68t206  Querytype;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE206)  */
struct A68t228 { A68_INT mode; union {
struct A68t222 * mode1;
struct A68t223 * mode2;
struct A68t224 * mode3;
struct A68t226 * mode4;
struct A68t229 * mode5;
struct A68t230 * mode6;
struct A68t211 * mode7;
struct A68t225 * mode8;
struct A68t231 * mode9;
struct A68t232 * mode10;
struct A68t233 * mode11;
struct A68t234 * mode12;
struct A68t235 * mode13;
struct A68t236 * mode14;
struct A68t237 * mode15;
struct A68t238 * mode16;
struct A68t239 * mode17;
struct A68t240 * mode18;
struct A68t241 * mode19;
struct A68t242 * mode20;
struct A68t243 * mode21;
struct A68t244 * mode22;
struct A68t245 * mode23;
struct A68t246 * mode24;
struct A68t247 * mode25;
struct A68t248 * mode26;
struct A68t249 * mode27;
struct A68t250 * mode28;
struct A68t251 * mode29;
struct A68t252 * mode30;
struct A68t253 * mode31;
struct A68t254 * mode32;
struct A68t255 * mode33;
struct A68t256 * mode34;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(REF MODE222,REF MODE223,REF MODE224,REF MODE226,REF MODE229,REF MODE230,REF MODE211,REF MODE225,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_65)
A68_VC  Constname;
struct A68t181  Attr;
struct A68t228  Value;
struct A68t188 * Usage;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE228,REF MODE188)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_66)
struct A68t32  String;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t230{
A68_INT  Cvoid;
A_PAD_INT(PAD_67)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT)  */
struct A68t231{
A68_INT  Typeno;
A_PAD_INT(PAD_68)
A68_INT  Firstno;
A_PAD_INT(PAD_69)
A68_INT  Lastno;
A_PAD_INT(PAD_70)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,INT,INT)  */
struct A68t232{
struct A68t228  Alt;
struct A68t232 * Rest;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE228,REF MODE232)  */
struct A68t233{
A68_INT  Sort;
A_PAD_INT(PAD_71)
A68_INT  Nameno;
A_PAD_INT(PAD_72)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,INT)  */
struct A68t234{
struct A68t228  Sink;
struct A68t228  Source;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t235{
A68_INT  Typeno;
A_PAD_INT(PAD_73)
A68_INT  Altno;
A_PAD_INT(PAD_74)
struct A68t228  Assoc;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT,MODE228)  */
struct A68t236{
struct A68t228  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_75)
A68_INT  Altno;
A_PAD_INT(PAD_76)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE228,INT,INT)  */
struct A68t237{
struct A68t228  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_77)
A68_INT  Nameno;
A_PAD_INT(PAD_78)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE228,INT,INT)  */
struct A68t238{
struct A68t228  Unit;
struct A68t190  Index;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE228,MODE190)  */
struct A68t239{
struct A68t228  Unit;
struct A68t205  Range;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE228,MODE205)  */
struct A68t240{
struct A68t228  Unit;
struct A68t228  Index;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t241{
struct A68t228  Unit;
struct A68t228  Index;
struct A68t228  From;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE228,MODE228,MODE228)  */
struct A68t242{
struct A68t190  Size;
struct A68t228  Elem;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t243{
struct A68t228  Elem;
struct A68t243 * Rest;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE228,REF MODE243)  */
struct A68t244{
A68_BOOL  String;
A_PAD_BOOL(PAD_79)
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t228  Left;
struct A68t228  Right;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(BOOL,INT,MODE228,MODE228)  */
A_VECTOR(struct A68t271 ,A68t270);
typedef struct A68t270  A68_270 ;    /* VECTOR [] MODE271 */
struct A68t273{
struct A68t228  Tag;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE228)  */
struct A68t268{
A68_INT  Fnno;
A_PAD_INT(PAD_81)
struct A68t270  Macparams;
struct A68t181  Attr;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE270,MODE181)  */
struct A68t272 { A68_INT mode; union {
struct A68t189  mode1;
struct A68t201  mode2;
struct A68t215  mode3;
struct A68t273  mode4;
struct A68t268  mode5;
} data; };
typedef struct A68t272  A68_272 ;    /* UNION(MODE189,MODE201,MODE215,MODE273,MODE268)  */
struct A68t271{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t272  Param;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,MODE272)  */
struct A68t245{
struct A68t268  Inst;
struct A68t228  Right;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE268,MODE228)  */
struct A68t246{
struct A68t228  Left;
struct A68t268  Inst;
struct A68t228  Right;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE228,MODE268,MODE228)  */
struct A68t247{
struct A68t228  Input;
struct A68t288 * Choices;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE228,REF MODE288)  */
struct A68t248{
struct A68t190  Cond;
struct A68t228  True;
struct A68t228  False;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE190,MODE228,MODE228)  */
struct A68t249{
struct A68t190  Repl;
struct A68t228  Body;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t250{
struct A68t276 * Body;
struct A68t228  Output;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE276,MODE228)  */
struct A68t251{
struct A68t257 * Body;
struct A68t228  Output;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE257,MODE228)  */
struct A68t252{
struct A68t228  Unit;
struct A68t181  Attr;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE228,MODE181)  */
struct A68t253{
struct A68t228  Unit;
struct A68t192  Check;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE228,MODE192)  */
struct A68t254{
struct A68t228  Unit;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE228)  */
struct A68t255{
struct A68t190  Size;
struct A68t228  Char;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t256{
A68_INT  Unull;
A_PAD_INT(PAD_83)
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT)  */
struct A68t259{
A68_INT  Fnno;
A_PAD_INT(PAD_84)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t258 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
struct A68t260 * mode6;
struct A68t261 * mode7;
struct A68t262 * mode8;
struct A68t263 * mode9;
struct A68t264 * mode10;
struct A68t265 * mode11;
struct A68t266 * mode12;
} data; };
typedef struct A68t258  A68_258 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266)  */
struct A68t257{
struct A68t258  Step;
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE258,REF MODE257)  */
struct A68t260{
struct A68t190  Cond;
struct A68t274 * Print;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE190,REF MODE274)  */
struct A68t261{
struct A68t190  Cond;
struct A68t274 * Fault;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE190,REF MODE274)  */
struct A68t262{
struct A68t269 * Letnames;
struct A68t228  Unit;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(REF MODE269,MODE228)  */
struct A68t263{
struct A68t202 * Sizes;
struct A68t268  Inst;
struct A68t269 * Makenames;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE202,MODE268,REF MODE269)  */
struct A68t264{
struct A68t228  From;
struct A68t228  To;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t265{
struct A68t202 * Repls;
struct A68t267 * Joins;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(REF MODE202,REF MODE267)  */
struct A68t266{
A68_INT  Stepnull;
A_PAD_INT(PAD_85)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT)  */
struct A68t267{
struct A68t264  Join;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE264,REF MODE267)  */
struct A68t269{
A68_INT  Nameno;
A_PAD_INT(PAD_86)
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT,REF MODE269)  */
struct A68t275 { A68_INT mode; union {
A68_VC  mode1;
struct A68t201 * mode2;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(REF MODE26,REF MODE201)  */
struct A68t274{
struct A68t275  Item;
struct A68t274 * Rest;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE275,REF MODE274)  */
struct A68t277 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
struct A68t260 * mode6;
struct A68t261 * mode7;
struct A68t278 * mode8;
struct A68t279 * mode9;
struct A68t280 * mode10;
struct A68t281 * mode11;
struct A68t282 * mode12;
struct A68t283 * mode13;
struct A68t284 * mode14;
struct A68t285 * mode15;
struct A68t276 * mode16;
struct A68t286 * mode17;
} data; };
typedef struct A68t277  A68_277 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259,REF MODE260,REF MODE261,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE276,REF MODE286)  */
struct A68t276{
struct A68t277  Step;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE277,REF MODE276)  */
struct A68t278{
struct A68t262  Seqlet;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE262)  */
struct A68t279{
struct A68t262  Seqvar;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE262)  */
struct A68t280{
struct A68t269 * Pvarnames;
struct A68t228  Init;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE269,MODE228)  */
struct A68t281{
struct A68t228  To;
struct A68t228  From;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t282{
struct A68t228  Input;
struct A68t287 * Choices;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE228,REF MODE287)  */
struct A68t283{
struct A68t190  Cond;
struct A68t277  True;
struct A68t277  False;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE190,MODE277,MODE277)  */
struct A68t284{
struct A68t190  Repl;
struct A68t277  Body;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE190,MODE277)  */
struct A68t285{
A68_INT  Seqnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT)  */
struct A68t286{
struct A68t190  Size;
struct A68t277  Elem;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE190,MODE277)  */
struct A68t287{
A68_BOOL  Check;
A_PAD_BOOL(PAD_88)
A68_INT  Sort;
A_PAD_INT(PAD_89)
struct A68t228  Test;
struct A68t277  Output;
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(BOOL,INT,MODE228,MODE277,REF MODE287)  */
struct A68t288{
A68_BOOL  Check;
A_PAD_BOOL(PAD_90)
A68_INT  Sort;
A_PAD_INT(PAD_91)
struct A68t228  Test;
struct A68t228  Output;
struct A68t288 * Rest;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(BOOL,INT,MODE228,MODE228,REF MODE288)  */
struct A68t289 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
} data; };
typedef struct A68t289  A68_289 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259)  */
struct A68t290{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_92)
A68_VC  Name;
struct A68t270  Macparams;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(BOOL,REF MODE26,REF MODE270)  */
struct A68t291{
struct A68t190  Output;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE190)  */
struct A68t292{
A68_INT  Reform;
A_PAD_INT(PAD_93)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT)  */
struct A68t293{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_94)
struct A68t164  Ctname;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE26,INT,MODE164)  */
struct A68t294{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t228  Init;
struct A68t190  Ambigtime;
struct A68t228  Ambig;
struct A68t190  Delaytime;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,MODE228,MODE190,MODE228,MODE190)  */
struct A68t295{
struct A68t228  Init;
struct A68t190  Delaytime;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE228,MODE190)  */
struct A68t296{
struct A68t228  Init;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE228)  */
struct A68t297{
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t190  Interval;
struct A68t228  Init;
struct A68t190  Skew;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,MODE190,MODE228,MODE190)  */
struct A68t298{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_97)
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t268  Inst;
struct A68t190  Scale;
struct A68t228  Init;
struct A68t190  Skew;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(BOOL,INT,MODE268,MODE190,MODE228,MODE190)  */
struct A68t300 { A68_INT mode; union {
struct A68t273 * mode1;
struct A68t290 * mode2;
struct A68t291 * mode3;
struct A68t292 * mode4;
struct A68t293 * mode5;
struct A68t294 * mode6;
struct A68t295 * mode7;
struct A68t296 * mode8;
struct A68t297 * mode9;
struct A68t298 * mode10;
struct A68t299 * mode11;
struct A68t301 * mode12;
} data; };
typedef struct A68t300  A68_300 ;    /* UNION(REF MODE273,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE301)  */
struct A68t299{
struct A68t180 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_99)
struct A68t300  Fnbody;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE180,BOOL,MODE300)  */
struct A68t301{
A68_INT  Bodynull;
A_PAD_INT(PAD_100)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT)  */
struct A68t302{
A68_INT  Sort;
A_PAD_INT(PAD_101)
struct A68t289  Spec;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,MODE289)  */
struct A68t303{
A68_VC  Name;
struct A68t206  Type;
struct A68t181  Attr;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE26,MODE206,MODE181)  */
A_VECTOR(struct A68t302 ,A68t305);
typedef struct A68t305  A68_305 ;    /* VECTOR [] MODE302 */
A_VECTOR(struct A68t303 ,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] MODE303 */
struct A68t304{
A68_INT  Sort;
A_PAD_INT(PAD_102)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_103)
A68_VC  Fnname;
struct A68t305  Macspecs;
struct A68t181  Attr;
struct A68t269 * Inputs;
struct A68t269 * Outputs;
struct A68t306  Nametypes;
struct A68t300  Fnbody;
struct A68t188 * Usage;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE305,MODE181,REF MODE269,REF MODE269,REF MODE306,MODE300,REF MODE188)  */
A_VECTOR(struct A68t187 *,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] REF MODE187 */
A_VECTOR(struct A68t203 *,A68t309);
typedef struct A68t309  A68_309 ;    /* VECTOR [] REF MODE203 */
A_VECTOR(struct A68t221 *,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] REF MODE221 */
A_VECTOR(struct A68t227 *,A68t311);
typedef struct A68t311  A68_311 ;    /* VECTOR [] REF MODE227 */
A_VECTOR(struct A68t304 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE304 */
struct A68t307{
struct A68t308  Attrs;
struct A68t309  Ints;
struct A68t310  Types;
struct A68t311  Consts;
struct A68t312  Fns;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312)  */
struct A68t313{
A68_INT  Closureno;
A_PAD_INT(PAD_104)
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t307 * Environ;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT,INT,REF MODE307)  */
struct A68t314{
struct A68t313  Outer;
struct A68t314 * Rest;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE313,REF MODE314)  */
A_VECTOR(struct A68t314 ,A68t316);
typedef struct A68t316  A68_316 ;    /* VECTOR [] MODE314 */
struct A68t315{
struct A68t316  Outers;
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE316,REF MODE315)  */
struct A68t317{
A68_INT  Max_closureno;
A_PAD_INT(PAD_106)
struct A68t314 * Outers;
struct A68t314 * Freelist;
struct A68t315 * Outerslist;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT,REF MODE314,REF MODE314,REF MODE315)  */
A_VECTOR(struct A68t314 *,A68t318);
typedef struct A68t318  A68_318 ;    /* VECTOR [] REF MODE314 */

A_PROCEDURE(struct A68t193 *,A68t319,(A68_INT ),(A68_INT ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(INT) REF MODE193 */

A_PROCEDURE(struct A68t194 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE194 */

A_PROCEDURE(struct A68t198 *,A68t321,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE190) REF MODE198 */

A_PROCEDURE(struct A68t201 *,A68t322,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE190) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t323,(A68_INT ),(A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) REF MODE207 */

A_PROCEDURE(struct A68t211 *,A68t324,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE206) REF MODE211 */

A_PROCEDURE(struct A68t215 *,A68t325,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE206) REF MODE215 */

A_PROCEDURE(struct A68t222 *,A68t326,(A68_INT ),(A68_INT ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT) REF MODE222 */

A_PROCEDURE(struct A68t226 *,A68t327,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE206) REF MODE226 */

A_PROCEDURE(struct A68t278 *,A68t328,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE262) REF MODE278 */

A_PROCEDURE(struct A68t279 *,A68t329,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE262) REF MODE279 */

A_PROCEDURE(struct A68t254 *,A68t330,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE228) REF MODE254 */

A_PROCEDURE(struct A68t273 *,A68t331,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE228) REF MODE273 */

A_PROCEDURE(struct A68t259 *,A68t332,(A68_INT ),(A68_INT ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT) REF MODE259 */

A_PROCEDURE(struct A68t291 *,A68t333,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE190) REF MODE291 */

A_PROCEDURE(struct A68t296 *,A68t334,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE228) REF MODE296 */

A_PROCEDURE(struct A68t199 *,A68t335,(A68_INT ),(A68_INT ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT) REF MODE199 */

A_PROCEDURE(struct A68t182 *,A68t336,(A68_INT ),(A68_INT ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT) REF MODE182 */

A_PROCEDURE(struct A68t189 *,A68t337,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE181) REF MODE189 */

A_PROCEDURE(struct A68t185 *,A68t338,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE181) REF MODE185 */
A_VECTOR(struct A68t179 *,A68t339);
typedef struct A68t339  A68_339 ;    /* VECTOR [] REF MODE179 */
struct A68t340{
A68_INT  Token;
A_PAD_INT(PAD_107)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(INT,BOOL)  */
struct A68t342{
A68_INT  Index;
A_PAD_INT(PAD_109)
A68_INT  Count;
A_PAD_INT(PAD_110)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(INT,INT)  */
struct A68t341 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t340  mode3;
struct A68t342  mode4;
} data; };
typedef struct A68t341  A68_341 ;    /* UNION(INT,MODE26,MODE340,MODE342)  */
struct A68t343{
struct A68t317 * Closure;
struct A68t102  Head_data;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(REF MODE317,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t172 ,struct A68t97 ,struct A68t341 *),(struct A68t172 ,struct A68t97 ,struct A68t341 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE172,MODE97) MODE341 */
struct A68t344{
struct A68t172  Getchar;
struct A68t345  Initem;
struct A68t346 * Ids_lookup;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(MODE172,MODE345,REF REF MODE346)  */
A_VECTOR(struct A68t102 ,A68t346);
typedef struct A68t346  A68_346 ;    /* VECTOR [] REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t341 ,struct A68t36 ,struct A68t97 ),(struct A68t341 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE341,MODE36,MODE97) VOID */
struct A68t347{
struct A68t36  Putstring;
struct A68t348  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE36,MODE348,BOOL)  */

A_PROCEDURE(A68_INT ,A68t349,(struct A68t344 ,struct A68t97 ),(struct A68t344 ,struct A68t97 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE344,MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t350,(struct A68t344 ,struct A68t97 ),(struct A68t344 ,struct A68t97 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE344,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t344 ,struct A68t97 ,struct A68t340 *),(struct A68t344 ,struct A68t97 ,struct A68t340 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE344,MODE97) MODE340 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t344 ,struct A68t97 ,A68_VC *),(struct A68t344 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE344,MODE97) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t353,(struct A68t344 ,struct A68t97 ),(struct A68t344 ,struct A68t97 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE344,MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t344 ,struct A68t97 ,A68_VC *),(struct A68t344 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE344,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t355,(A68_CHAR ,struct A68t347 ,struct A68t97 ),(A68_CHAR ,struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(CHAR,MODE347,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(A68_INT ,struct A68t347 ,struct A68t97 ),(A68_INT ,struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(INT,MODE347,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(A68_VC ,struct A68t347 ,struct A68t97 ),(A68_VC ,struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE26,MODE347,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(A68_INT ,A68_BOOL ,struct A68t347 ,struct A68t97 ),(A68_INT ,A68_BOOL ,struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(INT,BOOL,MODE347,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t359,(A68_BOOL ,struct A68t347 ,struct A68t97 ),(A68_BOOL ,struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(BOOL,MODE347,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t172 ,struct A68t97 ,struct A68t344 *),(struct A68t172 ,struct A68t97 ,struct A68t344 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE172,MODE97) MODE344 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t344 ,struct A68t97 ,struct A68t343 *),(struct A68t344 ,struct A68t97 ,struct A68t343 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE344,MODE97) MODE343 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t347 *),(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t347 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE36,BOOL,BOOL,MODE97) MODE347 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t343 ,struct A68t347 ,struct A68t97 ),(struct A68t343 ,struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE343,MODE347,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t347 ,struct A68t97 ),(struct A68t347 ,struct A68t97 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE347,MODE97) VOID */
struct A68t365{
struct A68t181  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t365  A68_365 ;    /* STRUCT(MODE181,BOOL)  */
struct A68t366{
struct A68t184 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t366  A68_366 ;    /* STRUCT(REF MODE184,BOOL)  */
struct A68t367{
struct A68t187 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t367  A68_367 ;    /* STRUCT(REF MODE187,BOOL)  */
struct A68t368{
struct A68t190  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t368  A68_368 ;    /* STRUCT(MODE190,BOOL)  */
struct A68t369{
struct A68t202 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(REF MODE202,BOOL)  */
struct A68t370{
struct A68t203 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t370  A68_370 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t371{
struct A68t205  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t371  A68_371 ;    /* STRUCT(MODE205,BOOL)  */
struct A68t372{
struct A68t204  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(MODE204,BOOL)  */
struct A68t373{
struct A68t209 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t373  A68_373 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t374{
struct A68t206  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(MODE206,BOOL)  */
struct A68t375{
struct A68t217  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t375  A68_375 ;    /* STRUCT(MODE217,BOOL)  */
struct A68t376{
struct A68t220  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE220,BOOL)  */
struct A68t377{
struct A68t219  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(MODE219,BOOL)  */
struct A68t378{
struct A68t221 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE221,BOOL)  */
struct A68t379{
struct A68t227 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(REF MODE227,BOOL)  */
struct A68t380{
struct A68t232 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE232,BOOL)  */
struct A68t381{
struct A68t243 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(REF MODE243,BOOL)  */
struct A68t382{
struct A68t288 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(REF MODE288,BOOL)  */
struct A68t383{
struct A68t228  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(MODE228,BOOL)  */
struct A68t384{
struct A68t272  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(MODE272,BOOL)  */
struct A68t385{
struct A68t270  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(REF MODE270,BOOL)  */
struct A68t386{
struct A68t268  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(MODE268,BOOL)  */
struct A68t387{
struct A68t289  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(MODE289,BOOL)  */
struct A68t388{
struct A68t274 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE274,BOOL)  */
struct A68t389{
struct A68t260 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(REF MODE260,BOOL)  */
struct A68t390{
struct A68t261 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t391{
struct A68t269 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(REF MODE269,BOOL)  */
struct A68t392{
struct A68t262 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE262,BOOL)  */
struct A68t393{
struct A68t287 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(REF MODE287,BOOL)  */
struct A68t394{
struct A68t277  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(MODE277,BOOL)  */
struct A68t395{
struct A68t276 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t395  A68_395 ;    /* STRUCT(REF MODE276,BOOL)  */
struct A68t396{
struct A68t263 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE263,BOOL)  */
struct A68t397{
struct A68t264 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE264,BOOL)  */
struct A68t398{
struct A68t267 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(REF MODE267,BOOL)  */
struct A68t399{
struct A68t258  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(MODE258,BOOL)  */
struct A68t400{
struct A68t257 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(REF MODE257,BOOL)  */
struct A68t401{
struct A68t300  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(MODE300,BOOL)  */
struct A68t402{
struct A68t302  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(MODE302,BOOL)  */
struct A68t403{
struct A68t305  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t403  A68_403 ;    /* STRUCT(REF MODE305,BOOL)  */
struct A68t404{
struct A68t304 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_151)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(REF MODE304,BOOL)  */
struct A68t405{
struct A68t313  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_152)
};
typedef struct A68t405  A68_405 ;    /* STRUCT(MODE313,BOOL)  */
struct A68t406{
struct A68t317 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(REF MODE317,BOOL)  */
struct A68t407 ;

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t181 ,struct A68t407 *,struct A68t365 *),(struct A68t181 ,struct A68t407 *,struct A68t365 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE181,REF MODE407) MODE365 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t184 *,struct A68t407 *,struct A68t366 *),(struct A68t184 *,struct A68t407 *,struct A68t366 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE184,REF MODE407) MODE366 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t187 *,struct A68t407 *,struct A68t367 *),(struct A68t187 *,struct A68t407 *,struct A68t367 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE187,REF MODE407) MODE367 */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t190 ,struct A68t407 *,struct A68t368 *),(struct A68t190 ,struct A68t407 *,struct A68t368 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE190,REF MODE407) MODE368 */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t202 *,struct A68t407 *,struct A68t369 *),(struct A68t202 *,struct A68t407 *,struct A68t369 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE202,REF MODE407) MODE369 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t203 *,struct A68t407 *,struct A68t370 *),(struct A68t203 *,struct A68t407 *,struct A68t370 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE203,REF MODE407) MODE370 */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t205 ,struct A68t407 *,struct A68t371 *),(struct A68t205 ,struct A68t407 *,struct A68t371 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE205,REF MODE407) MODE371 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t204 ,struct A68t407 *,struct A68t372 *),(struct A68t204 ,struct A68t407 *,struct A68t372 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE204,REF MODE407) MODE372 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t209 *,struct A68t407 *,struct A68t373 *),(struct A68t209 *,struct A68t407 *,struct A68t373 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE209,REF MODE407) MODE373 */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t206 ,struct A68t407 *,struct A68t374 *),(struct A68t206 ,struct A68t407 *,struct A68t374 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE206,REF MODE407) MODE374 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t217 ,struct A68t407 *,struct A68t375 *),(struct A68t217 ,struct A68t407 *,struct A68t375 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE217,REF MODE407) MODE375 */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t220 ,struct A68t407 *,struct A68t376 *),(struct A68t220 ,struct A68t407 *,struct A68t376 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE220,REF MODE407) MODE376 */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t219 ,struct A68t407 *,struct A68t377 *),(struct A68t219 ,struct A68t407 *,struct A68t377 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE219,REF MODE407) MODE377 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t221 *,struct A68t407 *,struct A68t378 *),(struct A68t221 *,struct A68t407 *,struct A68t378 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE221,REF MODE407) MODE378 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t227 *,struct A68t407 *,struct A68t379 *),(struct A68t227 *,struct A68t407 *,struct A68t379 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE227,REF MODE407) MODE379 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t232 *,struct A68t407 *,struct A68t380 *),(struct A68t232 *,struct A68t407 *,struct A68t380 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE232,REF MODE407) MODE380 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t243 *,struct A68t407 *,struct A68t381 *),(struct A68t243 *,struct A68t407 *,struct A68t381 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE243,REF MODE407) MODE381 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t288 *,struct A68t407 *,struct A68t382 *),(struct A68t288 *,struct A68t407 *,struct A68t382 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE288,REF MODE407) MODE382 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t228 ,struct A68t407 *,struct A68t383 *),(struct A68t228 ,struct A68t407 *,struct A68t383 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE228,REF MODE407) MODE383 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t272 ,struct A68t407 *,struct A68t384 *),(struct A68t272 ,struct A68t407 *,struct A68t384 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE272,REF MODE407) MODE384 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t270 ,struct A68t407 *,struct A68t385 *),(struct A68t270 ,struct A68t407 *,struct A68t385 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE270,REF MODE407) MODE385 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t268 ,struct A68t407 *,struct A68t386 *),(struct A68t268 ,struct A68t407 *,struct A68t386 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE268,REF MODE407) MODE386 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t289 ,struct A68t407 *,struct A68t387 *),(struct A68t289 ,struct A68t407 *,struct A68t387 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE289,REF MODE407) MODE387 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t274 *,struct A68t407 *,struct A68t388 *),(struct A68t274 *,struct A68t407 *,struct A68t388 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE274,REF MODE407) MODE388 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t260 *,struct A68t407 *,struct A68t389 *),(struct A68t260 *,struct A68t407 *,struct A68t389 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE260,REF MODE407) MODE389 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t261 *,struct A68t407 *,struct A68t390 *),(struct A68t261 *,struct A68t407 *,struct A68t390 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE261,REF MODE407) MODE390 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t269 *,struct A68t407 *,struct A68t391 *),(struct A68t269 *,struct A68t407 *,struct A68t391 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE269,REF MODE407) MODE391 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t262 *,struct A68t407 *,struct A68t392 *),(struct A68t262 *,struct A68t407 *,struct A68t392 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE262,REF MODE407) MODE392 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t287 *,struct A68t407 *,struct A68t393 *),(struct A68t287 *,struct A68t407 *,struct A68t393 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE287,REF MODE407) MODE393 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t277 ,struct A68t407 *,struct A68t394 *),(struct A68t277 ,struct A68t407 *,struct A68t394 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE277,REF MODE407) MODE394 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t276 *,struct A68t407 *,struct A68t395 *),(struct A68t276 *,struct A68t407 *,struct A68t395 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE276,REF MODE407) MODE395 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t263 *,struct A68t407 *,struct A68t396 *),(struct A68t263 *,struct A68t407 *,struct A68t396 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE263,REF MODE407) MODE396 */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t264 *,struct A68t407 *,struct A68t397 *),(struct A68t264 *,struct A68t407 *,struct A68t397 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE264,REF MODE407) MODE397 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t267 *,struct A68t407 *,struct A68t398 *),(struct A68t267 *,struct A68t407 *,struct A68t398 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE267,REF MODE407) MODE398 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t258 ,struct A68t407 *,struct A68t399 *),(struct A68t258 ,struct A68t407 *,struct A68t399 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE258,REF MODE407) MODE399 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t257 *,struct A68t407 *,struct A68t400 *),(struct A68t257 *,struct A68t407 *,struct A68t400 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE257,REF MODE407) MODE400 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t300 ,struct A68t407 *,struct A68t401 *),(struct A68t300 ,struct A68t407 *,struct A68t401 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE300,REF MODE407) MODE401 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t302 ,struct A68t407 *,struct A68t402 *),(struct A68t302 ,struct A68t407 *,struct A68t402 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE302,REF MODE407) MODE402 */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t305 ,struct A68t407 *,struct A68t403 *),(struct A68t305 ,struct A68t407 *,struct A68t403 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE305,REF MODE407) MODE403 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t304 *,struct A68t407 *,struct A68t404 *),(struct A68t304 *,struct A68t407 *,struct A68t404 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE304,REF MODE407) MODE404 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t313 ,struct A68t407 *,struct A68t405 *),(struct A68t313 ,struct A68t407 *,struct A68t405 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE313,REF MODE407) MODE405 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t317 *,struct A68t407 *,struct A68t97 ,struct A68t406 *),(struct A68t317 *,struct A68t407 *,struct A68t97 ,struct A68t406 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE317,REF MODE407,MODE97) MODE406 */
struct A68t407{
struct A68t408  Attr;
struct A68t409  Attrstr;
struct A68t410  Attrdec;
struct A68t411  Formula;
struct A68t412  Formulas;
struct A68t413  Intdec;
struct A68t414  Range;
struct A68t415  Formularange;
struct A68t416  Tstr;
struct A68t417  Type;
struct A68t418  Alternative;
struct A68t419  Alternatives;
struct A68t420  Typebody;
struct A68t421  Typedec;
struct A68t422  Constdec;
struct A68t423  Ualts;
struct A68t424  Ustr;
struct A68t425  Uchoices;
struct A68t426  Unit;
struct A68t427  Mparam;
struct A68t428  Macparams;
struct A68t429  Instance;
struct A68t430  Declaration;
struct A68t431  Printitems;
struct A68t432  Print;
struct A68t433  Fault;
struct A68t434  Names;
struct A68t435  Let;
struct A68t436  Seqchoices;
struct A68t437  Seqstep;
struct A68t438  Sequence;
struct A68t439  Make;
struct A68t440  Join;
struct A68t441  Joins;
struct A68t442  Step;
struct A68t443  Series;
struct A68t444  Fnbody;
struct A68t445  Macspec;
struct A68t446  Macspecs;
struct A68t447  Fndec;
struct A68t448  Outer;
struct A68t449  Closure;
struct A68t407 * Rest;
};
typedef struct A68t407  A68_407 ;    /* STRUCT(MODE408,MODE409,MODE410,MODE411,MODE412,MODE413,MODE414,MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,REF MODE407)  */
struct A68t451 ;

A_PROCEDURE(struct A68t407 *,A68t450,(struct A68t407 *,struct A68t451 ),(struct A68t407 *,struct A68t451 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE407,MODE451) REF MODE407 */
A_VECTOR(struct A68t452 ,A68t451);
typedef struct A68t451  A68_451 ;    /* VECTOR [] MODE452 */
struct A68t452 { A68_INT mode; union {
struct A68t408  mode1;
struct A68t409  mode2;
struct A68t410  mode3;
struct A68t411  mode4;
struct A68t412  mode5;
struct A68t413  mode6;
struct A68t414  mode7;
struct A68t415  mode8;
struct A68t416  mode9;
struct A68t417  mode10;
struct A68t418  mode11;
struct A68t419  mode12;
struct A68t420  mode13;
struct A68t421  mode14;
struct A68t422  mode15;
struct A68t423  mode16;
struct A68t424  mode17;
struct A68t425  mode18;
struct A68t426  mode19;
struct A68t427  mode20;
struct A68t428  mode21;
struct A68t429  mode22;
struct A68t430  mode23;
struct A68t431  mode24;
struct A68t432  mode25;
struct A68t433  mode26;
struct A68t434  mode27;
struct A68t435  mode28;
struct A68t436  mode29;
struct A68t437  mode30;
struct A68t438  mode31;
struct A68t439  mode32;
struct A68t440  mode33;
struct A68t441  mode34;
struct A68t442  mode35;
struct A68t443  mode36;
struct A68t444  mode37;
struct A68t445  mode38;
struct A68t446  mode39;
struct A68t447  mode40;
struct A68t448  mode41;
struct A68t449  mode42;
} data; };
typedef struct A68t452  A68_452 ;    /* UNION(MODE408,MODE409,MODE410,MODE411,MODE412,MODE413,MODE414,MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449)  */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t407 *),(struct A68t407 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE407) VOID */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE149) VOID */

A_PROCEDURE(A68_VOID ,A68t455,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,66,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 66 CHAR */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t317 *,struct A68t97 ,struct A68t406 *),(struct A68t317 *,struct A68t97 ,struct A68t406 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE317,MODE97) MODE406 */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t317 *,struct A68t111 ,struct A68t97 ,struct A68t406 *),(struct A68t317 *,struct A68t111 ,struct A68t97 ,struct A68t406 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE317,MODE111,MODE97) MODE406 */
struct A68t460 { A68_INT mode; union {
struct A68t458  mode1;
struct A68t459  mode2;
} data; };
typedef struct A68t460  A68_460 ;    /* UNION(MODE458,MODE459)  */
struct A68t457{
A68_VC  Name;
struct A68t460  Transform;
struct A68t46  Options_descriptions;
};
typedef struct A68t457  A68_457 ;    /* STRUCT(MODE26,MODE460,MODE46)  */

A_PROCEDURE(A68_VOID ,A68t461,(A68_BOOL ,struct A68t457 *),(A68_BOOL ,struct A68t457 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(BOOL) MODE457 */
#define A68_462  A68_VC 
#define A68t462 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_463  A68_46 
#define A68t463 A68t46            /* FLEX VECTOR [] MODE462 */
#define A68_464  A68_457 
#define A68t464 A68t457            /* STRUCT(MODE462,MODE460,MODE463)  */
struct A68t465{
A68_INT  Status;
A_PAD_INT(PAD_154)
A68_VC  Message;
};
typedef struct A68t465  A68_465 ;    /* STRUCT(INT,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t466,(A68_BOOL ,struct A68t465 *),(A68_BOOL ,struct A68t465 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(BOOL) MODE465 */
#define A68_467  A68_465 
#define A68t467 A68t465            /* STRUCT(INT,MODE462)  */
A_ISTRUCT(A68_CHAR ,12,A68t468);
typedef struct A68t468  A68_468 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t469);
typedef struct A68t469  A68_469 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t465 ),(struct A68t465 ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE465) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t471);
typedef struct A68t471  A68_471 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t472);
typedef struct A68t472  A68_472 ;    /* STRUCT 18 CHAR */
A_VECTOR(struct A68t457 ,A68t473);
typedef struct A68t473  A68_473 ;    /* VECTOR [] MODE457 */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t473 ),(struct A68t473 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(MODE473) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t476);
typedef struct A68t476  A68_476 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t477);
typedef struct A68t477  A68_477 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t479);
typedef struct A68t479  A68_479 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t480);
typedef struct A68t480  A68_480 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,19,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t482);
typedef struct A68t482  A68_482 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,41,A68t483);
typedef struct A68t483  A68_483 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,71,A68t484);
typedef struct A68t484  A68_484 ;    /* STRUCT 71 CHAR */
struct A68t485{
A68_INT  Index;
A_PAD_INT(PAD_155)
struct A68t111  Options;
A68_VC  Opt_str;
};
typedef struct A68t485  A68_485 ;    /* STRUCT(INT,MODE111,REF MODE26)  */
A_VECTOR(struct A68t485 ,A68t486);
typedef struct A68t486  A68_486 ;    /* VECTOR [] MODE485 */

A_PROCEDURE(A68_VOID ,A68t487,(A68_BOOL ,struct A68t486 *),(A68_BOOL ,struct A68t486 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(BOOL) MODE486 */
A_ISTRUCT(A68_CHAR ,13,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t489);
typedef struct A68t489  A68_489 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t490);
typedef struct A68t490  A68_490 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t491);
typedef struct A68t491  A68_491 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,14,A68t492);
typedef struct A68t492  A68_492 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t493);
typedef struct A68t493  A68_493 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,26,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t495);
typedef struct A68t495  A68_495 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t496);
typedef struct A68t496  A68_496 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t497);
typedef struct A68t497  A68_497 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t498);
typedef struct A68t498  A68_498 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t499);
typedef struct A68t499  A68_499 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t500);
typedef struct A68t500  A68_500 ;    /* STRUCT 22 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
/* --- End of imports from transformprocs --- */


/* --- Imports from openinterface --- */
#define CQCATRN_packed_format A68_TRUE
#define DQCATRN_unpacked_format A68_FALSE
extern A68_VOID  IAGATRN_read_signature(struct A68t172 ,struct A68t97 ,A68_344 *);
extern A68_VOID  GPDATRN_read_closure(struct A68t344 ,struct A68t97 ,A68_343 *);
extern A68_VOID  FBGATRN_write_signature(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,A68_347 *);
extern A68_VOID  RLFATRN_write_closure(struct A68t343 ,struct A68t347 ,struct A68t97 );
extern A68_VOID  KCGATRN_finish_write_closure(struct A68t347 ,struct A68t97 );
/* --- End of imports from openinterface --- */


/* --- Imports from assmodes --- */
extern A68_179 * LAAATRN_nilids;
/* --- End of imports from assmodes --- */


/* --- Imports from basics --- */
extern A68_VOID  ZUCAOST_lowercase(A68_VC ,A68_VC *);
extern A68_INT  XVCAOST_charstoint(A68_VC ,A68_BOOL *);
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VOID  GEDAOST_time_str(A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
#define VPBAOSI_newline_char '\012'
extern A68_119  PNBAOSI_read_access;
extern A68_119  TNBAOSI_write_access;
extern A68_119  BOBAOSI_update_access;
extern A68_119  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_117 * FQBAOSI_open_file(A68_VC ,struct A68t119 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t117 *,struct A68t97 );
extern A68_VOID  YPBAOSI_file_name(struct A68t117 *,A68_VC *);
extern A68_VOID  HRBAOSI_read_buffer(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t117 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_INT  ZACAOSI_get_cpu_time(void);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_156  TEAAOST_initialise_osinterface;
extern A68_VOID  KFAAOST_default_msg(struct A68t92 ,struct A68t46 );
extern A68_34 * KEAAOST_screen;
extern A68_34 * MEAAOST_err;
extern A68_BOOL  LJAAOST_filename_arg(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL );
extern A68_VOID  OMAAOST_parse_arguments(A68_VC ,struct A68t149 ,struct A68t160 ,struct A68t161 );
/* --- End of imports from osinterface --- */


/* --- Imports from options --- */
extern A68_111 * OAAAOST_plusab(struct A68t111 *,struct A68t111 );
extern A68_BOOL  MBAAOST_includes(struct A68t111 ,struct A68t111 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_111 *);
extern A68_111  OCAAOST_null_options;
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_31  OFAAOSI_anonymous;
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  UHAAOSI_fatal;
extern A68_92  WHAAOSI_user;
extern A68_92  CIAAOSI_log;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  ZXAAOSL_intwidth(A68_INT ,A68_INT ,A68_57 *);
extern A68_VOID  NYAAOSL_tab(A68_INT ,A68_60 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void TPCATRN(void);   /* openinterface */
extern void BAAATRN(void);   /* assmodes */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_456   EAAAEXT = {"$Id: external_transforms.a68,v 34.2 1995/03/29 13:05:10 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAAEXT,EAAAEXT,66)
A68_461  GAAAEXT_anonymous;
static A68_466  YAAAEXT_anonymous;
static A68_468   HBAAEXT = {"Changes made"}; 
A_GISVEC(A68_VC ,IBAAEXT,HBAAEXT,12)
static A68_465  JBAAEXT_mess_changed;
static A68_469   LBAAEXT = {"No changes"}; 
A_GISVEC(A68_VC ,MBAAEXT,LBAAEXT,10)
static A68_465  NBAAEXT_mess_no_change;
static A68_471   RBAAEXT = {"_in"}; 
A_GISVEC(A68_VC ,SBAAEXT,RBAAEXT,3)
static A68_VC  TBAAEXT_outn;
static A68_120   UBAAEXT = {"_out"}; 
A_GISVEC(A68_VC ,VBAAEXT,UBAAEXT,4)
static A68_VC  WBAAEXT_inn;
static A68_120   XBAAEXT = {".ela"}; 
A_GISVEC(A68_VC ,YBAAEXT,XBAAEXT,4)
static A68_VC  ZBAAEXT_assfile_type;
#define ACAAEXT_linesize 160
#define BCAAEXT_maxlinesize 2048
static A68_472   CCAAEXT = {"EXTERNAL TRANSFORM"}; 
A_GISVEC(A68_VC ,DCAAEXT,CCAAEXT,18)
static A68_VC  ECAAEXT_name;
A68_46  NCAAEXT_no_options;
static A68_343  PCAAEXT_ass_build;
static A68_475   ADAAEXT = {"32.03"}; 
A_GISVEC(A68_VC ,BDAAEXT,ADAAEXT,5)
static A68_476   CDAAEXT = {"12:04:94"}; 
A_GISVEC(A68_VC ,DDAAEXT,CDAAEXT,8)
static A68_477   EDAAEXT = {""}; 
A_GISVEC(A68_VC ,FDAAEXT,EDAAEXT,0)
static A68_478   GDAAEXT = {"Sorry, its failed - Er Er Er Er....."}; 
A_GISVEC(A68_VC ,HDAAEXT,GDAAEXT,36)
static A68_479   QDAAEXT = {"-s"}; 
A_GISVEC(A68_VC ,RDAAEXT,QDAAEXT,2)
static A68_479   TDAAEXT = {"-f"}; 
A_GISVEC(A68_VC ,UDAAEXT,TDAAEXT,2)
static A68_475   AEAAEXT = {"Input"}; 
static A68_477   BEAAEXT = {""}; 
A_GISVEC(A68_VC ,CEAAEXT,BEAAEXT,0)
A_GISVEC(A68_VC ,DEAAEXT,AEAAEXT,5)
static A68_481   JEAAEXT = {"Unexpected option \""}; 
A_GISVEC(A68_VC ,KEAAEXT,JEAAEXT,19)
static A68_483   GFAAEXT = {"-f <file> = open interface file from ELLA"}; 
A_GISVEC(A68_VC ,HFAAEXT,GFAAEXT,41)
static A68_481   KFAAEXT = {"transform [options]"}; 
A_GISVEC(A68_VC ,LFAAEXT,KFAAEXT,19)
static A68_484   RFAAEXT = {"Give ELLA open interface file name ([-f <file>] <transform[ option]>): "}; 
A_GISVEC(A68_VC ,SFAAEXT,RFAAEXT,71)
static A68_469   UGAAEXT = {"Transform "}; 
A_GISVEC(A68_VC ,VGAAEXT,UGAAEXT,10)
static A68_488   ZGAAEXT = {" is not known"}; 
A_GISVEC(A68_VC ,AHAAEXT,ZGAAEXT,13)
static A68_489   FHAAEXT = {"The following transforms are available:"}; 
A_GISVEC(A68_VC ,GHAAEXT,FHAAEXT,39)
static A68_492   YHAAEXT = {"has no options"}; 
A_GISVEC(A68_VC ,ZHAAEXT,YHAAEXT,14)
static A68_471   PIAAEXT = {":  "}; 
A_GISVEC(A68_VC ,QIAAEXT,PIAAEXT,3)
static A68_481   XIAAEXT = {"Transform not known"}; 
A_GISVEC(A68_VC ,YIAAEXT,XIAAEXT,19)
static A68_488   KJAAEXT = {"Integer error"}; 
A_GISVEC(A68_VC ,LJAAEXT,KJAAEXT,13)
static A68_469   OJAAEXT = {"Transform "}; 
A_GISVEC(A68_VC ,PJAAEXT,OJAAEXT,10)
static A68_494   TJAAEXT = {" does not have any options"}; 
A_GISVEC(A68_VC ,UJAAEXT,TJAAEXT,26)
static A68_469   CKAAEXT = {"Transform "}; 
A_GISVEC(A68_VC ,DKAAEXT,CKAAEXT,10)
static A68_495   HKAAEXT = {" does not have an option "}; 
A_GISVEC(A68_VC ,IKAAEXT,HKAAEXT,25)
static A68_496   BLAAEXT = {"Reading closure"}; 
A_GISVEC(A68_VC ,CLAAEXT,BLAAEXT,15)
static A68_488   DMAAEXT = {"Closing file "}; 
A_GISVEC(A68_VC ,EMAAEXT,DMAAEXT,13)
static A68_497   SMAAEXT = {"Premature end of dump stream file"}; 
A_GISVEC(A68_VC ,TMAAEXT,SMAAEXT,33)
static A68_498   ANAAEXT = {"Reading open interface file  "}; 
A_GISVEC(A68_VC ,BNAAEXT,ANAAEXT,29)
static A68_496   KOAAEXT = {" transformation"}; 
A_GISVEC(A68_VC ,LOAAEXT,KOAAEXT,15)
static A68_479   QPAAEXT = {"  "}; 
A_GISVEC(A68_VC ,RPAAEXT,QPAAEXT,2)
static A68_479   WPAAEXT = {"cS"}; 
A_GISVEC(A68_VC ,XPAAEXT,WPAAEXT,2)
static A68_477   AQAAEXT = {""}; 
A_GISVEC(A68_VC ,BQAAEXT,AQAAEXT,0)
static A68_488   EQAAEXT = {"  (No change)"}; 
A_GISVEC(A68_VC ,FQAAEXT,EQAAEXT,13)
static A68_499   KQAAEXT = {"  options: "}; 
A_GISVEC(A68_VC ,LQAAEXT,KQAAEXT,11)
static A68_496   UQAAEXT = {"Writing closure"}; 
A_GISVEC(A68_VC ,VQAAEXT,UQAAEXT,15)
static A68_494   GRAAEXT = {"External ELLA transforms  "}; 
A_GISVEC(A68_VC ,HRAAEXT,GRAAEXT,26)
static A68_488   WRAAEXT = {"Closing file "}; 
A_GISVEC(A68_VC ,XRAAEXT,WRAAEXT,13)
static A68_500   TTAAEXT = {"End of transformations"}; 
A_GISVEC(A68_VC ,UTAAEXT,TTAAEXT,22)
typedef struct   /* env of non-global proc */
{
A68_VC * WCAAEXT_in_fname;
A68_179 ** SCAAEXT_params;
A68_179 *** TCAAEXT_ptail;
A68_INT * XCAAEXT_n_count;
A68_BOOL * UCAAEXT_show;
A68_BOOL * VCAAEXT_write_unpacked;
} KDAAEXT_reset;
typedef struct   /* env of non-global proc */
{
A68_BOOL * UCAAEXT_show;
A68_VC * WCAAEXT_in_fname;
A68_CHAR * YCAAEXT_fc;
A68_INT * XCAAEXT_n_count;
A68_179 *** TCAAEXT_ptail;
} PDAAEXT_check_arg;
typedef struct   /* env of non-global proc */
{
A68_VC * WCAAEXT_in_fname;
A68_INT * XCAAEXT_n_count;
} AFAAEXT_no_more;
typedef struct   /* env of non-global proc */
{
A68_INT * XCAAEXT_n_count;
} HGAAEXT_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LLAAEXT_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  VLAAEXT_filename;
A68_117 * TLAAEXT_file;
} AMAAEXT_ass_msg;
typedef struct   /* env of non-global proc */
{
A68_INT * QLAAEXT_pos;
A68_INT * RLAAEXT_end;
A68_117 * TLAAEXT_file;
A68_VC  OLAAEXT_buffer;
A68_97  YLAAEXT_ass_msg;
A68_172  MMAAEXT_get_char;
} OMAAEXT_get_char;
typedef struct   /* env of non-global proc */
{
A68_VC  ERAAEXT_filename;
A68_117 * TLAAEXT_file;
} TRAAEXT_ass_msg;
typedef struct   /* env of non-global proc */
{
int dummy;
} ISAAEXT_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * NSAAEXT_pos;
A68_VC  LSAAEXT_buffer;
A68_117 * TLAAEXT_file;
A68_97  RRAAEXT_ass_msg;
A68_36  PSAAEXT_buff_out_str;
} RSAAEXT_buff_out_str;
typedef struct   /* env of non-global proc */
{
A68_117 * TLAAEXT_file;
A68_97  RRAAEXT_ass_msg;
} ITAAEXT_anonymous;

A_STATIC A68_VOID  IAAAEXT_generator(A68_BOOL  HAAAEXT_anonymous, A68_457  *ReturnedValue);

A_STATIC A68_VOID  KAAAEXT_generator(A68_BOOL  JAAAEXT_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  ABAAEXT_generator(A68_BOOL  ZAAAEXT_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_VOID  PBAAEXT_stop_message(A68_465  Stat);

A_STATIC A68_VOID  GCAAEXT_generator(A68_BOOL  FCAAEXT_anonymous, A68_46  *ReturnedValue);

A68_VOID  RCAAEXT_do_transforms(A68_473  Transforms);

A_STATIC A68_VOID  JDAAEXT_reset(void *NonLocals);

A_STATIC A68_BOOL  ODAAEXT_check_arg(A68_VC  Arg, A68_142  Next, void *NonLocals);

A_STATIC A68_BOOL  ZEAAEXT_no_more(A68_BOOL  Ok, void *NonLocals);

A_STATIC A68_VOID  GGAAEXT_generator(A68_BOOL  EGAAEXT_anonymous, A68_486  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KLAAEXT_generator(A68_BOOL  ILAAEXT_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZLAAEXT_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_CHAR  NMAAEXT_get_char(void *NonLocals);

A_STATIC A68_VOID  SRAAEXT_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  HSAAEXT_generator(A68_BOOL  FSAAEXT_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QSAAEXT_buff_out_str(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  HTAAEXT_anonymous(A68_VC  Str, void *NonLocals);

A68_VOID  AUAAEXT_get_external_title(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KAAAEXT_generator(A68_BOOL  JAAAEXT_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  MAAAEXT;  /* OPERATORS - dynamic generator */
A68_463  LAAAEXT_anonymous;
A68_462 * NAAAEXT_anonymous;
A68_INT  OAAAEXT;  /* forall loop counter */
A68_VC  PAAAEXT;  /* avoid structure result */
A68_46  QAAAEXT;  /* clause result */
{ 
 /* line 60: */
MAAAEXT.upb = 0 ;
( JAAAEXT_anonymous? A_VLOC(A68_VC ,MAAAEXT): A_VHEAP(A68_VC ,MAAAEXT) );
LAAAEXT_anonymous = MAAAEXT;
OAAAEXT = (*(&LAAAEXT_anonymous)).upb -1;
NAAAEXT_anonymous = (*(&LAAAEXT_anonymous)).data;
for (;OAAAEXT-- >= 0;
(NAAAEXT_anonymous++
) )
{
A_CALLPROC(OFAAOSI_anonymous,(JAAAEXT_anonymous, &PAAAEXT),(JAAAEXT_anonymous, &PAAAEXT,(OFAAOSI_anonymous).nonlocals));
(*NAAAEXT_anonymous) = PAAAEXT;
}
QAAAEXT = LAAAEXT_anonymous;
} 
*ReturnedValue = (QAAAEXT);
return;
} 
#undef NL

A_STATIC A68_VOID  JDAAEXT_reset(void *NonLocals)
#define NL(x) (((KDAAEXT_reset *)NonLocals)->x)
{ 
A_PROC_ENTRY(reset);
{ 
(*NL(WCAAEXT_in_fname)) = EOAAOSL_nullstr;
 /* line 99: */
(*NL(SCAAEXT_params)) = LAAATRN_nilids;
 /* line 100: */
(*NL(TCAAEXT_ptail)) = NL(SCAAEXT_params);
 /* line 101: */
(*NL(XCAAEXT_n_count)) = 0;
 /* line 102: */
 /* line 103: */
(*NL(UCAAEXT_show)) = (*NL(VCAAEXT_write_unpacked)) = A68_FALSE;
} 
A_PROC_EXIT(reset);
return;
} 
#undef NL

A_STATIC A68_BOOL  ODAAEXT_check_arg(A68_VC  Arg, A68_142  Next, void *NonLocals)
#define NL(x) (((PDAAEXT_check_arg *)NonLocals)->x)
{ 
A68_BOOL  SDAAEXT;  /* clause result */
A68_480  VDAAEXT;  /* collateral clause result */
A68_VC  WDAAEXT;  /* avoid structure result */
A68_52  XDAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  YDAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  ZDAAEXT;  /* OPERATORS - mode -> union mode */
A68_85  EEAAEXT;  /* OPERATORS - istruct -> vector */
A68_VC  FEAAEXT;  /* avoid structure result */
A68_BOOL  GEAAEXT;  /* optbool result */
A68_INT  HEAAEXT;  /* YIELD */
A68_482  IEAAEXT;  /* collateral clause result */
A68_52  LEAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  MEAAEXT;  /* YIELD */
A68_52  NEAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  OEAAEXT;  /* OPERATORS - mode -> union mode */
A68_CHAR  PEAAEXT;  /* YIELD */
A68_52  QEAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  REAAEXT;  /* procedure value */
A68_85  SEAAEXT;  /* OPERATORS - istruct -> vector */
A68_BOOL  TEAAEXT;  /* optbool result */
A68_179  UEAAEXT;  /* collateral clause result */
A68_VC  VEAAEXT;  /* avoid structure result */
A68_179 * WEAAEXT;  /* YIELD */
A_PROC_ENTRY(check_arg);
 /* line 106: */
if ( A_VC_EQ(Arg,RDAAEXT) )
{ 
 /* line 107: */
SDAAEXT = (*NL(UCAAEXT_show)) = A68_TRUE;
} 
else
{ 
 /* line 108: */
if ( A_VC_EQ(Arg,UDAAEXT) )
{ 
A_CALLPROC(Next,( &WDAAEXT),( &WDAAEXT,(Next).nonlocals));
VDAAEXT.data[0] = A_UNITE(XDAAEXT,mode7,7,WDAAEXT);
VDAAEXT.data[1] = A_UNITE(YDAAEXT,mode7,7,WBAAEXT_inn);
VDAAEXT.data[2] = A_UNITE(ZDAAEXT,mode7,7,ZBAAEXT_assfile_type);
 /* line 109: */
 /* line 110: */
UJBAOSL_oneline( A_HISVEC(EEAAEXT,VDAAEXT,3,A68_52 ), &FEAAEXT );
SDAAEXT = LJAAOST_filename_arg(FEAAEXT, DEAAEXT, CEAAEXT, NL(WCAAEXT_in_fname), A68_TRUE);
} 
else
{ 
GEAAEXT = (Arg.upb>=1);
if ( GEAAEXT )
{ /* line 111: */
HEAAEXT = 1 ;
GEAAEXT = (((*NL(YCAAEXT_fc)) = A_VINDEX(Arg,HEAAEXT))=='-');
}
if ( GEAAEXT )
{ 
MEAAEXT = KEAAEXT ;
IEAAEXT.data[0] = A_UNITE(LEAAEXT,mode7,7,MEAAEXT);
IEAAEXT.data[1] = A_UNITE(NEAAEXT,mode7,7,Arg);
PEAAEXT = '\"' ;
IEAAEXT.data[2] = A_UNITE(OEAAEXT,mode6,6,PEAAEXT);
REAAEXT.fn.fn_global = LRAAOSL_newline;
REAAEXT.nonlocals = A68_NIL;
IEAAEXT.data[3] = A_UNITE(QEAAEXT,mode12,12,REAAEXT);
GFBAOSL_put(MEAAOST_err, A_HISVEC(SEAAEXT,IEAAEXT,4,A68_52 ));
 /* line 112: */
SDAAEXT = A68_FALSE;
} 
else
{ 
TEAAEXT = ((*NL(YCAAEXT_fc))<'0');
if ( ! TEAAEXT )
{ /* line 113: */
TEAAEXT = ((*NL(YCAAEXT_fc))>='9');
}
if ( TEAAEXT )
{ 
 /* line 114: */
(*NL(XCAAEXT_n_count))+=1;
} 
 /* line 115: */
ZAAAOSI_makervc( Arg, &VEAAEXT );
UEAAEXT.Id = VEAAEXT;
UEAAEXT.Rest = LAAATRN_nilids;
WEAAEXT = A_HEAP(A68_179 ) ;
(*WEAAEXT) = UEAAEXT ;
(**NL(TCAAEXT_ptail)) = WEAAEXT;
 /* line 116: */
(*NL(TCAAEXT_ptail)) = (&((**NL(TCAAEXT_ptail))->Rest));
 /* line 117: */
 /* line 118: */
SDAAEXT = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(check_arg);
return( SDAAEXT );
} 
#undef NL

A_STATIC A68_BOOL  ZEAAEXT_no_more(A68_BOOL  Ok, void *NonLocals)
#define NL(x) (((AFAAEXT_no_more *)NonLocals)->x)
{ 
A68_BOOL  BFAAEXT;  /* optbool result */
A68_BOOL  CFAAEXT;  /* clause result */
A68_482  DFAAEXT;  /* collateral clause result */
A68_52  EFAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  FFAAEXT;  /* procedure value */
A68_52  IFAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  JFAAEXT;  /* YIELD */
A68_52  MFAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  NFAAEXT;  /* YIELD */
A68_64  OFAAEXT;  /* avoid structure result */
A68_52  PFAAEXT;  /* OPERATORS - mode -> union mode */
A68_85  QFAAEXT;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(no_more);
 /* line 121: */
BFAAEXT = Ok;
if ( BFAAEXT )
{BFAAEXT = ((*NL(WCAAEXT_in_fname)).upb>0);
}
if ( BFAAEXT )
{ /* line 122: */
BFAAEXT = ((*NL(XCAAEXT_n_count))>0);
}
if ( BFAAEXT )
{ 
 /* line 123: */
CFAAEXT = A68_TRUE;
} 
else
{ 
FFAAEXT.fn.fn_global = LRAAOSL_newline;
FFAAEXT.nonlocals = A68_NIL;
DFAAEXT.data[0] = A_UNITE(EFAAEXT,mode12,12,FFAAEXT);
 /* line 124: */
JFAAEXT = HFAAEXT ;
DFAAEXT.data[1] = A_UNITE(IFAAEXT,mode7,7,JFAAEXT);
NFAAEXT = LFAAEXT ;
DFAAEXT.data[2] = A_UNITE(MFAAEXT,mode7,7,NFAAEXT);
HZAAOSL_lines( 2, &OFAAEXT );
DFAAEXT.data[3] = A_UNITE(PFAAEXT,mode20,20,OFAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QFAAEXT,DFAAEXT,4,A68_52 ));
 /* line 125: */
 /* line 126: */
CFAAEXT = A68_FALSE;
} 
A_PROC_EXIT(no_more);
return( CFAAEXT );
} 
#undef NL

A_STATIC A68_VOID  GGAAEXT_generator(A68_BOOL  EGAAEXT_anonymous, A68_486  *ReturnedValue, void *NonLocals)
#define NL(x) (((HGAAEXT_generator *)NonLocals)->x)
{ 
A68_486  IGAAEXT;  /* clause result */
A68_486  JGAAEXT;  /* OPERATORS - dynamic generator */
{ 
JGAAEXT.upb = (*NL(XCAAEXT_n_count)) ;
( EGAAEXT_anonymous? A_VLOC(A68_485 ,JGAAEXT): A_VHEAP(A68_485 ,JGAAEXT) );
IGAAEXT = JGAAEXT;
} 
*ReturnedValue = (IGAAEXT);
return;
} 
#undef NL

A_STATIC A68_VOID  KLAAEXT_generator(A68_BOOL  ILAAEXT_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LLAAEXT_generator *)NonLocals)->x)
{ 
A68_VC  MLAAEXT;  /* clause result */
A68_VC  NLAAEXT;  /* OPERATORS - dynamic generator */
{ 
NLAAEXT.upb = BCAAEXT_maxlinesize ;
( ILAAEXT_anonymous? A_VLOC(A68_CHAR ,NLAAEXT): A_VHEAP(A68_CHAR ,NLAAEXT) );
MLAAEXT = NLAAEXT;
} 
*ReturnedValue = (MLAAEXT);
return;
} 
#undef NL

A_STATIC A68_VOID  ZLAAEXT_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((AMAAEXT_ass_msg *)NonLocals)->x)
{ 
A68_106  BMAAEXT;  /* OPERATORS - mode -> union mode */
A68_480  CMAAEXT;  /* collateral clause result */
A68_52  FMAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  GMAAEXT;  /* YIELD */
A68_52  HMAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  IMAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  JMAAEXT;  /* procedure value */
A68_85  KMAAEXT;  /* OPERATORS - istruct -> vector */
A68_97  LMAAEXT;  /* procedure value */
A_PROC_ENTRY(ass_msg);
 /* line 205: */
 /* line 206: */
{ 
 /* line 207: */
if ( TKAAOSI_error_msg(A_UNITE(BMAAEXT,mode1,1,Msgno)) )
{ 
GMAAEXT = EMAAEXT ;
CMAAEXT.data[0] = A_UNITE(FMAAEXT,mode7,7,GMAAEXT);
CMAAEXT.data[1] = A_UNITE(HMAAEXT,mode7,7,NL(VLAAEXT_filename));
JMAAEXT.fn.fn_global = LRAAOSL_newline;
JMAAEXT.nonlocals = A68_NIL;
CMAAEXT.data[2] = A_UNITE(IMAAEXT,mode12,12,JMAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KMAAEXT,CMAAEXT,3,A68_52 ));
 /* line 208: */
 /* line 209: */
LMAAEXT.fn.fn_global = KFAAOST_default_msg;
LMAAEXT.nonlocals = A68_NIL;
XQBAOSI_close_file(NL(TLAAEXT_file), LMAAEXT);
} 
 /* line 210: */
 /* line 211: */
KFAAOST_default_msg(Msgno, Params);
} 
A_PROC_EXIT(ass_msg);
return;
} 
#undef NL

A_STATIC A68_CHAR  NMAAEXT_get_char(void *NonLocals)
#define NL(x) (((OMAAEXT_get_char *)NonLocals)->x)
{ 
A68_35  PMAAEXT;  /* avoid structure result */
A68_35  QMAAEXT_reply;
A68_BOOL  RMAAEXT;  /* optbool result */
A68_46  UMAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  VMAAEXT;  /* clause result */
A68_INT  WMAAEXT;  /* YIELD */
A_PROC_ENTRY(get_char);
 /* line 215: */
if ( ((*NL(QLAAEXT_pos))>=(*NL(RLAAEXT_end))) )
{ 
HRBAOSI_read_buffer( NL(TLAAEXT_file), NL(OLAAEXT_buffer), NL(RLAAEXT_end), NL(YLAAEXT_ass_msg), &PMAAEXT );
QMAAEXT_reply = PMAAEXT;
 /* line 216: */
RMAAEXT = PPBAOSI_(QMAAEXT_reply, GPBAOSI_io_eof);
if ( RMAAEXT )
{ /* line 217: */
RMAAEXT = ((*NL(RLAAEXT_end))==0);
}
 /* line 218: */
if ( RMAAEXT )
{ 
KFAAOST_default_msg(WHAAOSI_user, A_HVEC(UMAAEXT,TMAAEXT,A68_VC ));
 /* line 219: */
 /* line 220: */
VMAAEXT = ' ';
} 
else
{ 
(*NL(QLAAEXT_pos)) = 0;
 /* line 221: */
 /* line 222: */
 /* line 223: */
VMAAEXT = A_CALLPROC(NL(MMAAEXT_get_char),(),((NL(MMAAEXT_get_char)).nonlocals));
} 
} 
else
{ 
 /* line 224: */
WMAAEXT = (*NL(QLAAEXT_pos))+=1 ;
VMAAEXT = (*(&A_VINDEX(NL(OLAAEXT_buffer),WMAAEXT)));
} 
A_PROC_EXIT(get_char);
return( VMAAEXT );
} 
#undef NL

A_STATIC A68_VOID  SRAAEXT_ass_msg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((TRAAEXT_ass_msg *)NonLocals)->x)
{ 
A68_106  URAAEXT;  /* OPERATORS - mode -> union mode */
A68_480  VRAAEXT;  /* collateral clause result */
A68_52  YRAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  ZRAAEXT;  /* YIELD */
A68_52  ASAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  BSAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  CSAAEXT;  /* procedure value */
A68_85  DSAAEXT;  /* OPERATORS - istruct -> vector */
A68_97  ESAAEXT;  /* procedure value */
A_PROC_ENTRY(ass_msg);
 /* line 280: */
 /* line 281: */
{ 
 /* line 282: */
if ( TKAAOSI_error_msg(A_UNITE(URAAEXT,mode1,1,Msgno)) )
{ 
ZRAAEXT = XRAAEXT ;
VRAAEXT.data[0] = A_UNITE(YRAAEXT,mode7,7,ZRAAEXT);
VRAAEXT.data[1] = A_UNITE(ASAAEXT,mode7,7,NL(ERAAEXT_filename));
CSAAEXT.fn.fn_global = LRAAOSL_newline;
CSAAEXT.nonlocals = A68_NIL;
VRAAEXT.data[2] = A_UNITE(BSAAEXT,mode12,12,CSAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DSAAEXT,VRAAEXT,3,A68_52 ));
 /* line 283: */
 /* line 284: */
ESAAEXT.fn.fn_global = KFAAOST_default_msg;
ESAAEXT.nonlocals = A68_NIL;
XQBAOSI_close_file(NL(TLAAEXT_file), ESAAEXT);
} 
 /* line 285: */
 /* line 286: */
KFAAOST_default_msg(Msgno, Params);
} 
A_PROC_EXIT(ass_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HSAAEXT_generator(A68_BOOL  FSAAEXT_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ISAAEXT_generator *)NonLocals)->x)
{ 
A68_VC  JSAAEXT;  /* clause result */
A68_VC  KSAAEXT;  /* OPERATORS - dynamic generator */
{ 
KSAAEXT.upb = (ACAAEXT_linesize+1) ;
( FSAAEXT_anonymous? A_VLOC(A68_CHAR ,KSAAEXT): A_VHEAP(A68_CHAR ,KSAAEXT) );
JSAAEXT = KSAAEXT;
} 
*ReturnedValue = (JSAAEXT);
return;
} 
#undef NL

A_STATIC A68_VOID  QSAAEXT_buff_out_str(A68_VC  Str, void *NonLocals)
#define NL(x) (((RSAAEXT_buff_out_str *)NonLocals)->x)
{ 
A68_INT  SSAAEXT_l;
A68_VC  TSAAEXT;  /* OPERATORS - trim index */
A68_VC  USAAEXT;  /* YIELD */
A68_INT  VSAAEXT_part;
A68_VC  WSAAEXT;  /* OPERATORS - trim index */
A68_VC  XSAAEXT;  /* OPERATORS - trim index */
A68_VC  YSAAEXT;  /* YIELD */
A68_VC  ZSAAEXT;  /* OPERATORS - assign op */
A68_INT  ATAAEXT;  /* YIELD */
A68_CHAR * BTAAEXT;  /* YIELD */
A68_35  CTAAEXT;  /* avoid structure result */
A68_VC  DTAAEXT;  /* OPERATORS - trim index */
A_PROC_ENTRY(buff_out_str);
 /* line 292: */
 /* line 293: */
if ( ((Str.upb+(*NL(NSAAEXT_pos)))<=ACAAEXT_linesize) )
{ 
SSAAEXT_l = ((*NL(NSAAEXT_pos))+1);
 /* line 294: */
 /* line 295: */
USAAEXT = A_VTRIM(TSAAEXT,(NL(LSAAEXT_buffer)),A_VTSCRIPT(&(TSAAEXT.upb),(NL(LSAAEXT_buffer)).upb,SSAAEXT_l,((*NL(NSAAEXT_pos))+=Str.upb))) ;
A_VASSIGN2(Str,USAAEXT,A68_CHAR );
} 
else
{ 
VSAAEXT_part = (ACAAEXT_linesize-(*NL(NSAAEXT_pos)));
 /* line 296: */
YSAAEXT = A_VTRIM(WSAAEXT,(NL(LSAAEXT_buffer)),A_VTSCRIPT(&(WSAAEXT.upb),(NL(LSAAEXT_buffer)).upb,((*NL(NSAAEXT_pos))+1),ACAAEXT_linesize)) ;
ZSAAEXT = A_VTRIM(XSAAEXT,(Str),A_VTSCRIPT(&(XSAAEXT.upb),(Str).upb,1,VSAAEXT_part)) ;
A_VASSIGN2(ZSAAEXT,YSAAEXT,A68_CHAR );
 /* line 297: */
ATAAEXT = NL(LSAAEXT_buffer).upb ;
BTAAEXT = (&A_VINDEX(NL(LSAAEXT_buffer),ATAAEXT)) ;
(*BTAAEXT) = VPBAOSI_newline_char;
 /* line 298: */
JSBAOSI_write_buffer( NL(TLAAEXT_file), NL(LSAAEXT_buffer), NL(RRAAEXT_ass_msg), &CTAAEXT );
CTAAEXT;
 /* line 299: */
(*NL(NSAAEXT_pos)) = 0;
 /* line 300: */
 /* line 301: */
A_CALLPROC(NL(PSAAEXT_buff_out_str),(A_VTRIM(DTAAEXT,(Str),A_VTSCRIPT(&(DTAAEXT.upb),(Str).upb,(VSAAEXT_part+1),(Str).upb))),(A_VTRIM(DTAAEXT,(Str),A_VTSCRIPT(&(DTAAEXT.upb),(Str).upb,(VSAAEXT_part+1),(Str).upb)),(NL(PSAAEXT_buff_out_str)).nonlocals));
} 
A_PROC_EXIT(buff_out_str);
return;
} 
#undef NL

A_STATIC A68_VOID  HTAAEXT_anonymous(A68_VC  Str, void *NonLocals)
#define NL(x) (((ITAAEXT_anonymous *)NonLocals)->x)
{ 
A68_35  JTAAEXT;  /* avoid structure result */
 /* line 306: */
JSBAOSI_write_buffer( NL(TLAAEXT_file), Str, NL(RRAAEXT_ass_msg), &JTAAEXT );
JTAAEXT;
return;
} 
#undef NL

A_STATIC A68_VOID  IAAAEXT_generator(A68_BOOL  HAAAEXT_anonymous, A68_457  *ReturnedValue)
{ 
A68_464  RAAAEXT_anonymous;
A68_VC  SAAAEXT;  /* avoid structure result */
A68_462 * TAAAEXT;  /* YIELD */
A68_46  UAAAEXT;  /* avoid structure result */
A68_463 * VAAAEXT;  /* YIELD */
A68_457  WAAAEXT;  /* clause result */
{ 
A_CALLPROC(OFAAOSI_anonymous,(HAAAEXT_anonymous, &SAAAEXT),(HAAAEXT_anonymous, &SAAAEXT,(OFAAOSI_anonymous).nonlocals));
TAAAEXT = (&((&RAAAEXT_anonymous)->Name)) ;
(*TAAAEXT) = SAAAEXT;
KAAAEXT_generator( HAAAEXT_anonymous, &UAAAEXT );
VAAAEXT = (&((&RAAAEXT_anonymous)->Options_descriptions)) ;
(*VAAAEXT) = UAAAEXT;
WAAAEXT = RAAAEXT_anonymous;
} 
*ReturnedValue = (WAAAEXT);
return;
} 
#undef NL

A_STATIC A68_VOID  ABAAEXT_generator(A68_BOOL  ZAAAEXT_anonymous, A68_465  *ReturnedValue)
{ 
A68_467  BBAAEXT_anonymous;
A68_VC  CBAAEXT;  /* avoid structure result */
A68_462 * DBAAEXT;  /* YIELD */
A68_465  EBAAEXT;  /* clause result */
{ 
A_CALLPROC(OFAAOSI_anonymous,(ZAAAEXT_anonymous, &CBAAEXT),(ZAAAEXT_anonymous, &CBAAEXT,(OFAAOSI_anonymous).nonlocals));
DBAAEXT = (&((&BBAAEXT_anonymous)->Message)) ;
(*DBAAEXT) = CBAAEXT;
EBAAEXT = BBAAEXT_anonymous;
} 
*ReturnedValue = (EBAAEXT);
return;
} 
#undef NL

A_STATIC A68_VOID  PBAAEXT_stop_message(A68_465  Stat)
{ 
A68_46  QBAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(stop_message);
 /* line 68: */
 /* line 69: */
{ 
KFAAOST_default_msg(CIAAOSI_log, A_HVEC(QBAAEXT,Stat.Message,A68_VC ));
 /* line 70: */
 /* line 71: */
BZBAOSI_exit(Stat.Status);
} 
A_PROC_EXIT(stop_message);
return;
} 
#undef NL

A_STATIC A68_VOID  GCAAEXT_generator(A68_BOOL  FCAAEXT_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  ICAAEXT;  /* OPERATORS - dynamic generator */
A68_463  HCAAEXT_anonymous;
A68_462 * JCAAEXT_anonymous;
A68_INT  KCAAEXT;  /* forall loop counter */
A68_VC  LCAAEXT;  /* avoid structure result */
A68_46  MCAAEXT;  /* clause result */
{ 
ICAAEXT.upb = 0 ;
( FCAAEXT_anonymous? A_VLOC(A68_VC ,ICAAEXT): A_VHEAP(A68_VC ,ICAAEXT) );
HCAAEXT_anonymous = ICAAEXT;
KCAAEXT = (*(&HCAAEXT_anonymous)).upb -1;
JCAAEXT_anonymous = (*(&HCAAEXT_anonymous)).data;
for (;KCAAEXT-- >= 0;
(JCAAEXT_anonymous++
) )
{
A_CALLPROC(OFAAOSI_anonymous,(FCAAEXT_anonymous, &LCAAEXT),(FCAAEXT_anonymous, &LCAAEXT,(OFAAOSI_anonymous).nonlocals));
(*JCAAEXT_anonymous) = LCAAEXT;
}
MCAAEXT = HCAAEXT_anonymous;
} 
*ReturnedValue = (MCAAEXT);
return;
} 
#undef NL

A68_VOID  RCAAEXT_do_transforms(A68_473  Transforms)
{ 
A68_179 * SCAAEXT_params;
A68_179 ** TCAAEXT_ptail;
A68_BOOL  UCAAEXT_show;
A68_BOOL  VCAAEXT_write_unpacked;
A68_VC  WCAAEXT_in_fname;
A68_INT  XCAAEXT_n_count;
A68_CHAR  YCAAEXT_fc;
A68_154  ZCAAEXT;  /* collateral clause result */
A68_149  IDAAEXT_reset;   /* proc value of non-global proc */
A68_160  NDAAEXT_check_arg;   /* proc value of non-global proc */
A68_161  YEAAEXT_no_more;   /* proc value of non-global proc */
A68_INT  TFAAEXT_infnleng;
A68_INT  UFAAEXT_bdry;
A68_480  VFAAEXT;  /* collateral clause result */
A68_VC  WFAAEXT;  /* OPERATORS - trim index */
A68_52  XFAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  YFAAEXT;  /* YIELD */
A68_52  ZFAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  AGAAEXT;  /* OPERATORS - mode -> union mode */
A68_85  BGAAEXT;  /* OPERATORS - istruct -> vector */
A68_VC  CGAAEXT;  /* avoid structure result */
A68_VC  DGAAEXT_out_fname;
A68_487  FGAAEXT_generator;   /* proc value of non-global proc */
A68_486  LGAAEXT;  /* avoid structure result */
A68_486  KGAAEXT_data;
A68_485 * MGAAEXT_d;
A68_INT  NGAAEXT;  /* forall loop counter */
A68_VC  OGAAEXT;  /* avoid structure result */
A68_VC  PGAAEXT_name;
A68_INT * QGAAEXT_index;
A68_INT  RGAAEXT_i;
A68_INT  SGAAEXT;  /* to part of loop */
A68_490  TGAAEXT;  /* collateral clause result */
A68_52  WGAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  XGAAEXT;  /* YIELD */
A68_52  YGAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  BHAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  CHAAEXT;  /* YIELD */
A68_64  DHAAEXT;  /* avoid structure result */
A68_52  EHAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  HHAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  IHAAEXT;  /* YIELD */
A68_52  JHAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  KHAAEXT;  /* procedure value */
A68_85  LHAAEXT;  /* OPERATORS - istruct -> vector */
A68_457  MHAAEXT_tran;
A68_457 * NHAAEXT;  /* forall control - []x */
A68_INT  OHAAEXT;  /* forall loop counter */
A68_491  PHAAEXT;  /* collateral clause result */
A68_52  QHAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  RHAAEXT;  /* YIELD */
A68_52  SHAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  THAAEXT;  /* procedure value */
A68_85  UHAAEXT;  /* OPERATORS - istruct -> vector */
A68_480  VHAAEXT;  /* collateral clause result */
A68_60  WHAAEXT;  /* avoid structure result */
A68_52  XHAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  AIAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  BIAAEXT;  /* YIELD */
A68_52  CIAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  DIAAEXT;  /* procedure value */
A68_85  EIAAEXT;  /* OPERATORS - istruct -> vector */
A68_INT  FIAAEXT_n;
A68_VC  GIAAEXT_opt;
A68_46  HIAAEXT;  /* forall yield */
A68_VC * IIAAEXT;  /* forall control - []x */
A68_INT  JIAAEXT;  /* forall loop counter */
A68_493  KIAAEXT;  /* collateral clause result */
A68_60  LIAAEXT;  /* avoid structure result */
A68_52  MIAAEXT;  /* OPERATORS - mode -> union mode */
A68_57  NIAAEXT;  /* avoid structure result */
A68_52  OIAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  RIAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  SIAAEXT;  /* YIELD */
A68_52  TIAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  UIAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  VIAAEXT;  /* procedure value */
A68_85  WIAAEXT;  /* OPERATORS - istruct -> vector */
A68_46  ZIAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111 * AJAAEXT;  /* YIELD */
A68_VC * BJAAEXT;  /* YIELD */
A68_INT  CJAAEXT_options_count;
A68_BOOL  DJAAEXT;  /* optbool result */
A68_VC  EJAAEXT;  /* OPERATORS - simple index */
A68_INT  FJAAEXT;  /* YIELD */
A68_BOOL  GJAAEXT;  /* optbool result */
A68_BOOL  HJAAEXT;  /* clause result */
A68_BOOL  IJAAEXT_err;
A68_INT  JJAAEXT_opt;
A68_46  MJAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A68_480  NJAAEXT;  /* collateral clause result */
A68_52  QJAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  RJAAEXT;  /* YIELD */
A68_52  SJAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  VJAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  WJAAEXT;  /* YIELD */
A68_85  XJAAEXT;  /* OPERATORS - istruct -> vector */
A68_VC  YJAAEXT;  /* avoid structure result */
A68_46  ZJAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  AKAAEXT;  /* optbool result */
A68_482  BKAAEXT;  /* collateral clause result */
A68_52  EKAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  FKAAEXT;  /* YIELD */
A68_52  GKAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  JKAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  KKAAEXT;  /* YIELD */
A68_52  LKAAEXT;  /* OPERATORS - mode -> union mode */
A68_85  MKAAEXT;  /* OPERATORS - istruct -> vector */
A68_VC  NKAAEXT;  /* avoid structure result */
A68_46  OKAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111  PKAAEXT;  /* avoid structure result */
A68_491  QKAAEXT;  /* collateral clause result */
A68_52  RKAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  SKAAEXT;  /* YIELD */
A68_57  TKAAEXT;  /* avoid structure result */
A68_52  UKAAEXT;  /* OPERATORS - mode -> union mode */
A68_85  VKAAEXT;  /* OPERATORS - istruct -> vector */
A68_VC  WKAAEXT;  /* avoid structure result */
A68_VC * XKAAEXT;  /* YIELD */
A68_480  YKAAEXT;  /* collateral clause result */
A68_VC  ZKAAEXT;  /* avoid structure result */
A68_52  ALAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  DLAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  ELAAEXT;  /* YIELD */
A68_52  FLAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  GLAAEXT;  /* procedure value */
A68_85  HLAAEXT;  /* OPERATORS - istruct -> vector */
A68_31  JLAAEXT_generator;   /* proc value of non-global proc */
A68_VC  PLAAEXT;  /* avoid structure result */
A68_VC  OLAAEXT_buffer;
A68_INT  QLAAEXT_pos;
A68_INT  RLAAEXT_end;
A68_97  SLAAEXT;  /* procedure value */
A68_117 * TLAAEXT_file;
A68_VC  ULAAEXT;  /* avoid structure result */
A68_VC  VLAAEXT_filename;
A68_97  YLAAEXT_ass_msg;   /* proc value of non-global proc */
A68_172  MMAAEXT_get_char;   /* proc value of non-global proc */
A68_482  XMAAEXT;  /* collateral clause result */
A68_52  YMAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  ZMAAEXT;  /* procedure value */
A68_52  CNAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  DNAAEXT;  /* YIELD */
A68_52  ENAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  FNAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  GNAAEXT;  /* procedure value */
A68_85  HNAAEXT;  /* OPERATORS - istruct -> vector */
A68_97  INAAEXT;  /* procedure value */
A68_344  JNAAEXT;  /* avoid structure result */
A68_344  KNAAEXT_reader;
A68_97  LNAAEXT;  /* procedure value */
A68_343  MNAAEXT;  /* avoid structure result */
A68_97  NNAAEXT;  /* procedure value */
A68_VC * ONAAEXT_line;
A68_102  PNAAEXT;  /* forall yield */
A68_INT  QNAAEXT;  /* forall loop counter */
A68_491  RNAAEXT;  /* collateral clause result */
A68_52  SNAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  TNAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  UNAAEXT;  /* procedure value */
A68_85  VNAAEXT;  /* OPERATORS - istruct -> vector */
A68_52  WNAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  XNAAEXT;  /* procedure value */
A68_85  YNAAEXT;  /* OPERATORS - scalar -> [] or VEC[] */
A68_317 ** ZNAAEXT_closure;
A68_BOOL  AOAAEXT_changed;
A68_485 * BOAAEXT_d;
A68_INT  COAAEXT;  /* forall loop counter */
A68_INT  DOAAEXT_index;
A68_46  EOAAEXT_descriptions;
A68_482  FOAAEXT;  /* collateral clause result */
A68_VC  GOAAEXT;  /* avoid structure result */
A68_52  HOAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  IOAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  JOAAEXT;  /* YIELD */
A68_52  MOAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  NOAAEXT;  /* YIELD */
A68_52  OOAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  POAAEXT;  /* procedure value */
A68_85  QOAAEXT;  /* OPERATORS - istruct -> vector */
A68_INT  ROAAEXT_i;
A68_INT  SOAAEXT;  /* to part of loop */
A68_111  TOAAEXT;  /* avoid structure result */
A68_480  UOAAEXT;  /* collateral clause result */
A68_60  VOAAEXT;  /* avoid structure result */
A68_52  WOAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  XOAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  YOAAEXT;  /* YIELD */
A68_52  ZOAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  APAAEXT;  /* procedure value */
A68_85  BPAAEXT;  /* OPERATORS - istruct -> vector */
A68_INT  CPAAEXT_start;
A68_460  DPAAEXT;  /* united object - for case conformity */
A68_459  EPAAEXT_t1;
A68_406  FPAAEXT;  /* clause result */
A68_97  GPAAEXT;  /* procedure value */
A68_406  HPAAEXT;  /* avoid structure result */
A68_458  IPAAEXT_t2;
A68_97  JPAAEXT;  /* procedure value */
A68_406  KPAAEXT;  /* avoid structure result */
A68_406  LPAAEXT_cl;
A68_INT  MPAAEXT_finish;
A68_493  NPAAEXT;  /* collateral clause result */
A68_52  OPAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  PPAAEXT;  /* YIELD */
A68_52  SPAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  TPAAEXT;  /* YIELD */
A68_52  UPAAEXT;  /* OPERATORS - mode -> union mode */
A68_INT  VPAAEXT;  /* YIELD */
A68_52  YPAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  ZPAAEXT;  /* YIELD */
A68_52  CQAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  DQAAEXT;  /* YIELD */
A68_52  GQAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  HQAAEXT;  /* YIELD */
A68_85  IQAAEXT;  /* OPERATORS - istruct -> vector */
A68_491  JQAAEXT;  /* collateral clause result */
A68_52  MQAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  NQAAEXT;  /* YIELD */
A68_52  OQAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  PQAAEXT;  /* YIELD */
A68_85  QQAAEXT;  /* OPERATORS - istruct -> vector */
A68_480  RQAAEXT;  /* collateral clause result */
A68_VC  SQAAEXT;  /* avoid structure result */
A68_52  TQAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  WQAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  XQAAEXT;  /* YIELD */
A68_52  YQAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  ZQAAEXT;  /* procedure value */
A68_85  ARAAEXT;  /* OPERATORS - istruct -> vector */
A68_97  BRAAEXT;  /* procedure value */
A68_117 * CRAAEXT_ass_file;
A68_VC  DRAAEXT;  /* avoid structure result */
A68_VC  ERAAEXT_filename;
A68_491  FRAAEXT;  /* collateral clause result */
A68_52  IRAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  JRAAEXT;  /* YIELD */
A68_VC  KRAAEXT;  /* avoid structure result */
A68_52  LRAAEXT;  /* OPERATORS - mode -> union mode */
A68_85  MRAAEXT;  /* OPERATORS - istruct -> vector */
A68_VC  NRAAEXT;  /* avoid structure result */
A68_VC  ORAAEXT_title;
A68_97  RRAAEXT_ass_msg;   /* proc value of non-global proc */
A68_31  GSAAEXT_generator;   /* proc value of non-global proc */
A68_VC  MSAAEXT;  /* avoid structure result */
A68_VC  LSAAEXT_buffer;
A68_INT  NSAAEXT_pos;
A68_36  PSAAEXT_buff_out_str;   /* proc value of non-global proc */
A68_36  ETAAEXT;  /* clause result */
A68_36  GTAAEXT_anonymous;   /* proc value of non-global proc */
A68_36  KTAAEXT_out_str;
A68_BOOL  LTAAEXT;  /* clause result */
A68_347  MTAAEXT;  /* avoid structure result */
A68_347  NTAAEXT_writer;
A68_343  OTAAEXT;  /* collateral clause result */
A68_97  PTAAEXT;  /* procedure value */
A68_480  QTAAEXT;  /* collateral clause result */
A68_VC  RTAAEXT;  /* avoid structure result */
A68_52  STAAEXT;  /* OPERATORS - mode -> union mode */
A68_52  VTAAEXT;  /* OPERATORS - mode -> union mode */
A68_VC  WTAAEXT;  /* YIELD */
A68_52  XTAAEXT;  /* OPERATORS - mode -> union mode */
A68_56  YTAAEXT;  /* procedure value */
A68_85  ZTAAEXT;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(do_transforms);
 /* line 84: */
 /* line 85: */
{ 
SCAAEXT_params = LAAATRN_nilids;
 /* line 86: */
TCAAEXT_ptail = (&SCAAEXT_params);
 /* line 87: */
 /* line 88: */
 /* line 89: */
XCAAEXT_n_count = 0;
 /* line 90: */
 /* line 92: */
 /* line 93: */
ZCAAEXT.Name = ECAAEXT_name;
ZCAAEXT.Version = BDAAEXT;
ZCAAEXT.Date = DDAAEXT;
 /* line 94: */
ZCAAEXT.Msg = FDAAEXT;
ZCAAEXT.Sys_fault = HDAAEXT;
A_CALLPROC(TEAAOST_initialise_osinterface,(ZCAAEXT, A68_TRUE),(ZCAAEXT, A68_TRUE,(TEAAOST_initialise_osinterface).nonlocals));
 /* line 96: */
 /* line 97: */
 /* line 98: */
A_CLOSURE( IDAAEXT_reset, JDAAEXT_reset, KDAAEXT_reset );
(( KDAAEXT_reset * ) ( IDAAEXT_reset.nonlocals )) -> WCAAEXT_in_fname = (&WCAAEXT_in_fname);
(( KDAAEXT_reset * ) ( IDAAEXT_reset.nonlocals )) -> SCAAEXT_params = (&SCAAEXT_params);
(( KDAAEXT_reset * ) ( IDAAEXT_reset.nonlocals )) -> TCAAEXT_ptail = (&TCAAEXT_ptail);
(( KDAAEXT_reset * ) ( IDAAEXT_reset.nonlocals )) -> XCAAEXT_n_count = (&XCAAEXT_n_count);
(( KDAAEXT_reset * ) ( IDAAEXT_reset.nonlocals )) -> UCAAEXT_show = (&UCAAEXT_show);
(( KDAAEXT_reset * ) ( IDAAEXT_reset.nonlocals )) -> VCAAEXT_write_unpacked = (&VCAAEXT_write_unpacked);
 /* line 105: */
A_CLOSURE( NDAAEXT_check_arg, ODAAEXT_check_arg, PDAAEXT_check_arg );
(( PDAAEXT_check_arg * ) ( NDAAEXT_check_arg.nonlocals )) -> UCAAEXT_show = (&UCAAEXT_show);
(( PDAAEXT_check_arg * ) ( NDAAEXT_check_arg.nonlocals )) -> WCAAEXT_in_fname = (&WCAAEXT_in_fname);
(( PDAAEXT_check_arg * ) ( NDAAEXT_check_arg.nonlocals )) -> YCAAEXT_fc = (&YCAAEXT_fc);
(( PDAAEXT_check_arg * ) ( NDAAEXT_check_arg.nonlocals )) -> XCAAEXT_n_count = (&XCAAEXT_n_count);
(( PDAAEXT_check_arg * ) ( NDAAEXT_check_arg.nonlocals )) -> TCAAEXT_ptail = (&TCAAEXT_ptail);
 /* line 120: */
A_CLOSURE( YEAAEXT_no_more, ZEAAEXT_no_more, AFAAEXT_no_more );
(( AFAAEXT_no_more * ) ( YEAAEXT_no_more.nonlocals )) -> WCAAEXT_in_fname = (&WCAAEXT_in_fname);
(( AFAAEXT_no_more * ) ( YEAAEXT_no_more.nonlocals )) -> XCAAEXT_n_count = (&XCAAEXT_n_count);
 /* line 128: */
 /* line 129: */
 /* line 130: */
OMAAOST_parse_arguments(SFAAEXT, IDAAEXT_reset, NDAAEXT_check_arg, YEAAEXT_no_more);
 /* line 135: */
TFAAEXT_infnleng = WCAAEXT_in_fname.upb;
 /* line 136: */
UFAAEXT_bdry = ((TFAAEXT_infnleng-WBAAEXT_inn.upb)-ZBAAEXT_assfile_type.upb);
 /* line 137: */
YFAAEXT = A_VTRIM(WFAAEXT,(WCAAEXT_in_fname),A_VTSCRIPT(&(WFAAEXT.upb),(WCAAEXT_in_fname).upb,1,UFAAEXT_bdry)) ;
VFAAEXT.data[0] = A_UNITE(XFAAEXT,mode7,7,YFAAEXT);
VFAAEXT.data[1] = A_UNITE(ZFAAEXT,mode7,7,TBAAEXT_outn);
VFAAEXT.data[2] = A_UNITE(AGAAEXT,mode7,7,ZBAAEXT_assfile_type);
UJBAOSL_oneline( A_HISVEC(BGAAEXT,VFAAEXT,3,A68_52 ), &CGAAEXT );
DGAAEXT_out_fname = CGAAEXT;
 /* line 141: */
 /* line 142: */
A_CLOSURE( FGAAEXT_generator, GGAAEXT_generator, HGAAEXT_generator );
(( HGAAEXT_generator * ) ( FGAAEXT_generator.nonlocals )) -> XCAAEXT_n_count = (&XCAAEXT_n_count);
A_CALLPROC(FGAAEXT_generator,(A68_TRUE, &LGAAEXT),(A68_TRUE, &LGAAEXT,(FGAAEXT_generator).nonlocals));
KGAAEXT_data = LGAAEXT;
 /* line 144: */
 /* line 145: */
NGAAEXT = KGAAEXT_data.upb -1;
MGAAEXT_d = KGAAEXT_data.data;
for (;NGAAEXT-- >= 0;
(MGAAEXT_d++
) )
{
ZUCAOST_lowercase( (*(&(SCAAEXT_params->Id))), &OGAAEXT );
PGAAEXT_name = OGAAEXT;
 /* line 146: */
QGAAEXT_index = (&(MGAAEXT_d->Index));
 /* line 148: */
SCAAEXT_params = (*(&(SCAAEXT_params->Rest)));
 /* line 149: */
(*QGAAEXT_index) = 0;
 /* line 150: */
SGAAEXT = Transforms.upb;
for ( RGAAEXT_i = 1;
RGAAEXT_i <= SGAAEXT;
RGAAEXT_i += 1 )
{ 
 /* line 151: */
if ( !(((*QGAAEXT_index)==0)) ) break;
if ( A_VC_EQ(PGAAEXT_name,A_VINDEX(Transforms,RGAAEXT_i).Name) )
{ 
(*QGAAEXT_index) = RGAAEXT_i;
} 
}
 /* line 152: */
 /* line 153: */
if ( ((*QGAAEXT_index)==0) )
{ 
XGAAEXT = VGAAEXT ;
TGAAEXT.data[0] = A_UNITE(WGAAEXT,mode7,7,XGAAEXT);
TGAAEXT.data[1] = A_UNITE(YGAAEXT,mode7,7,PGAAEXT_name);
CHAAEXT = AHAAEXT ;
TGAAEXT.data[2] = A_UNITE(BHAAEXT,mode7,7,CHAAEXT);
 /* line 154: */
HZAAOSL_lines( 2, &DHAAEXT );
TGAAEXT.data[3] = A_UNITE(EHAAEXT,mode20,20,DHAAEXT);
 /* line 155: */
IHAAEXT = GHAAEXT ;
TGAAEXT.data[4] = A_UNITE(HHAAEXT,mode7,7,IHAAEXT);
KHAAEXT.fn.fn_global = LRAAOSL_newline;
KHAAEXT.nonlocals = A68_NIL;
TGAAEXT.data[5] = A_UNITE(JHAAEXT,mode12,12,KHAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LHAAEXT,TGAAEXT,6,A68_52 ));
 /* line 156: */
 /* line 157: */
OHAAEXT = Transforms.upb -1;
NHAAEXT = Transforms.data;
for (;OHAAEXT-- >= 0;
(NHAAEXT++
) )
{
MHAAEXT_tran = *NHAAEXT;
RHAAEXT = MHAAEXT_tran.Name ;
PHAAEXT.data[0] = A_UNITE(QHAAEXT,mode7,7,RHAAEXT);
THAAEXT.fn.fn_global = LRAAOSL_newline;
THAAEXT.nonlocals = A68_NIL;
PHAAEXT.data[1] = A_UNITE(SHAAEXT,mode12,12,THAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UHAAEXT,PHAAEXT,2,A68_52 ));
 /* line 158: */
 /* line 159: */
if ( (MHAAEXT_tran.Options_descriptions.upb==0) )
{ 
NYAAOSL_tab( 16, &WHAAEXT );
VHAAEXT.data[0] = A_UNITE(XHAAEXT,mode16,16,WHAAEXT);
BIAAEXT = ZHAAEXT ;
VHAAEXT.data[1] = A_UNITE(AIAAEXT,mode7,7,BIAAEXT);
DIAAEXT.fn.fn_global = LRAAOSL_newline;
DIAAEXT.nonlocals = A68_NIL;
VHAAEXT.data[2] = A_UNITE(CIAAEXT,mode12,12,DIAAEXT);
 /* line 160: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EIAAEXT,VHAAEXT,3,A68_52 ));
} 
else
{ 
FIAAEXT_n = 0;
 /* line 161: */
 /* line 162: */
HIAAEXT = MHAAEXT_tran.Options_descriptions ;
JIAAEXT = HIAAEXT.upb -1;
IIAAEXT = HIAAEXT.data;
for (;JIAAEXT-- >= 0;
(IIAAEXT++
) )
{
GIAAEXT_opt = *IIAAEXT;
NYAAOSL_tab( 16, &LIAAEXT );
KIAAEXT.data[0] = A_UNITE(MIAAEXT,mode16,16,LIAAEXT);
 /* line 163: */
ZXAAOSL_intwidth( FIAAEXT_n+=1, 2, &NIAAEXT );
KIAAEXT.data[1] = A_UNITE(OIAAEXT,mode13,13,NIAAEXT);
SIAAEXT = QIAAEXT ;
KIAAEXT.data[2] = A_UNITE(RIAAEXT,mode7,7,SIAAEXT);
KIAAEXT.data[3] = A_UNITE(TIAAEXT,mode7,7,GIAAEXT_opt);
VIAAEXT.fn.fn_global = LRAAOSL_newline;
VIAAEXT.nonlocals = A68_NIL;
KIAAEXT.data[4] = A_UNITE(UIAAEXT,mode12,12,VIAAEXT);
 /* line 164: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WIAAEXT,KIAAEXT,5,A68_52 ));
}
 /* line 165: */
 /* line 166: */
} 
}
 /* line 167: */
 /* line 168: */
KFAAOST_default_msg(UHAAOSI_fatal, A_HVEC(ZIAAEXT,YIAAEXT,A68_VC ));
} 
 /* line 170: */
AJAAEXT = (&(MGAAEXT_d->Options)) ;
(*AJAAEXT) = OCAAOST_null_options;
 /* line 171: */
BJAAEXT = (&(MGAAEXT_d->Opt_str)) ;
(*BJAAEXT) = EOAAOSL_nullstr;
 /* line 172: */
CJAAEXT_options_count = 0;
 /* line 173: */
for ( ;; )
{ 
 /* line 174: */
DJAAEXT = (SCAAEXT_params!=LAAATRN_nilids);
if ( DJAAEXT )
{{ 
EJAAEXT = (*(&(SCAAEXT_params->Id))) ;
FJAAEXT = 1 ;
YCAAEXT_fc = (*(&A_VINDEX(EJAAEXT,FJAAEXT)));
 /* line 175: */
GJAAEXT = (YCAAEXT_fc>='0');
if ( GJAAEXT )
{GJAAEXT = (YCAAEXT_fc<='9');
}
 /* line 176: */
HJAAEXT = GJAAEXT;
} 
DJAAEXT = HJAAEXT;
}
if ( !(DJAAEXT) ) break;
IJAAEXT_err = A68_FALSE;
 /* line 177: */
JJAAEXT_opt = XVCAOST_charstoint((*(&(SCAAEXT_params->Id))), (&IJAAEXT_err));
 /* line 179: */
SCAAEXT_params = (*(&(SCAAEXT_params->Rest)));
 /* line 180: */
 /* line 181: */
if ( IJAAEXT_err )
{ 
 /* line 182: */
KFAAOST_default_msg(SHAAOSI_system, A_HVEC(MJAAEXT,LJAAEXT,A68_VC ));
} 
 /* line 183: */
 /* line 184: */
if ( (A_VINDEX(Transforms,(*QGAAEXT_index)).Options_descriptions.upb==0) )
{ 
RJAAEXT = PJAAEXT ;
NJAAEXT.data[0] = A_UNITE(QJAAEXT,mode7,7,RJAAEXT);
 /* line 185: */
NJAAEXT.data[1] = A_UNITE(SJAAEXT,mode7,7,PGAAEXT_name);
WJAAEXT = UJAAEXT ;
NJAAEXT.data[2] = A_UNITE(VJAAEXT,mode7,7,WJAAEXT);
 /* line 186: */
UJBAOSL_oneline( A_HISVEC(XJAAEXT,NJAAEXT,3,A68_52 ), &YJAAEXT );
KFAAOST_default_msg(UHAAOSI_fatal, A_HVEC(ZJAAEXT,YJAAEXT,A68_VC ));
} 
else
{ 
 /* line 187: */
AKAAEXT = (JJAAEXT_opt<1);
if ( ! AKAAEXT )
{ /* line 188: */
AKAAEXT = (JJAAEXT_opt>A_VINDEX(Transforms,(*QGAAEXT_index)).Options_descriptions.upb);
}
if ( AKAAEXT )
{ 
FKAAEXT = DKAAEXT ;
BKAAEXT.data[0] = A_UNITE(EKAAEXT,mode7,7,FKAAEXT);
 /* line 189: */
BKAAEXT.data[1] = A_UNITE(GKAAEXT,mode7,7,PGAAEXT_name);
 /* line 190: */
KKAAEXT = IKAAEXT ;
BKAAEXT.data[2] = A_UNITE(JKAAEXT,mode7,7,KKAAEXT);
BKAAEXT.data[3] = A_UNITE(LKAAEXT,mode1,1,JJAAEXT_opt);
 /* line 191: */
UJBAOSL_oneline( A_HISVEC(MKAAEXT,BKAAEXT,4,A68_52 ), &NKAAEXT );
KFAAOST_default_msg(UHAAOSI_fatal, A_HVEC(OKAAEXT,NKAAEXT,A68_VC ));
} 
else
{ 
FCAAOST_makeoptions( JJAAEXT_opt, &PKAAEXT );
OAAAOST_plusab((&(MGAAEXT_d->Options)), PKAAEXT);
 /* line 192: */
SKAAEXT = (*(&(MGAAEXT_d->Opt_str))) ;
QKAAEXT.data[0] = A_UNITE(RKAAEXT,mode7,7,SKAAEXT);
ZXAAOSL_intwidth( JJAAEXT_opt, 3, &TKAAEXT );
QKAAEXT.data[1] = A_UNITE(UKAAEXT,mode13,13,TKAAEXT);
 /* line 193: */
 /* line 194: */
UJBAOSL_oneline( A_HISVEC(VKAAEXT,QKAAEXT,2,A68_52 ), &WKAAEXT );
XKAAEXT = (&(MGAAEXT_d->Opt_str)) ;
(*XKAAEXT) = WKAAEXT;
} 
} 
}
 /* line 195: */
}
 /* line 197: */
if ( UCAAEXT_show )
{ 
GEDAOST_time_str(  &ZKAAEXT );
YKAAEXT.data[0] = A_UNITE(ALAAEXT,mode7,7,ZKAAEXT);
ELAAEXT = CLAAEXT ;
YKAAEXT.data[1] = A_UNITE(DLAAEXT,mode7,7,ELAAEXT);
GLAAEXT.fn.fn_global = LRAAOSL_newline;
GLAAEXT.nonlocals = A68_NIL;
YKAAEXT.data[2] = A_UNITE(FLAAEXT,mode12,12,GLAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HLAAEXT,YKAAEXT,3,A68_52 ));
} 
 /* line 199: */
A_CLOSURE( JLAAEXT_generator, KLAAEXT_generator, LLAAEXT_generator );
A_CALLPROC(JLAAEXT_generator,(A68_TRUE, &PLAAEXT),(A68_TRUE, &PLAAEXT,(JLAAEXT_generator).nonlocals));
OLAAEXT_buffer = PLAAEXT;
 /* line 200: */
QLAAEXT_pos = ACAAEXT_linesize;
RLAAEXT_end = 0;
 /* line 201: */
SLAAEXT.fn.fn_global = KFAAOST_default_msg;
SLAAEXT.nonlocals = A68_NIL;
TLAAEXT_file = FQBAOSI_open_file(WCAAEXT_in_fname, PNBAOSI_read_access, SLAAEXT);
 /* line 202: */
YPBAOSI_file_name( TLAAEXT_file, &ULAAEXT );
VLAAEXT_filename = ULAAEXT;
 /* line 204: */
A_CLOSURE( YLAAEXT_ass_msg, ZLAAEXT_ass_msg, AMAAEXT_ass_msg );
(( AMAAEXT_ass_msg * ) ( YLAAEXT_ass_msg.nonlocals )) -> VLAAEXT_filename = VLAAEXT_filename;
(( AMAAEXT_ass_msg * ) ( YLAAEXT_ass_msg.nonlocals )) -> TLAAEXT_file = TLAAEXT_file;
 /* line 213: */
 /* line 214: */
A_CLOSURE( MMAAEXT_get_char, NMAAEXT_get_char, OMAAEXT_get_char );
(( OMAAEXT_get_char * ) ( MMAAEXT_get_char.nonlocals )) -> QLAAEXT_pos = (&QLAAEXT_pos);
(( OMAAEXT_get_char * ) ( MMAAEXT_get_char.nonlocals )) -> RLAAEXT_end = (&RLAAEXT_end);
(( OMAAEXT_get_char * ) ( MMAAEXT_get_char.nonlocals )) -> TLAAEXT_file = TLAAEXT_file;
(( OMAAEXT_get_char * ) ( MMAAEXT_get_char.nonlocals )) -> OLAAEXT_buffer = OLAAEXT_buffer;
(( OMAAEXT_get_char * ) ( MMAAEXT_get_char.nonlocals )) -> YLAAEXT_ass_msg = YLAAEXT_ass_msg;
(( OMAAEXT_get_char * ) ( MMAAEXT_get_char.nonlocals )) -> MMAAEXT_get_char = MMAAEXT_get_char;
 /* line 226: */
ZMAAEXT.fn.fn_global = LRAAOSL_newline;
ZMAAEXT.nonlocals = A68_NIL;
XMAAEXT.data[0] = A_UNITE(YMAAEXT,mode12,12,ZMAAEXT);
DNAAEXT = BNAAEXT ;
XMAAEXT.data[1] = A_UNITE(CNAAEXT,mode7,7,DNAAEXT);
XMAAEXT.data[2] = A_UNITE(ENAAEXT,mode7,7,VLAAEXT_filename);
GNAAEXT.fn.fn_global = LRAAOSL_newline;
GNAAEXT.nonlocals = A68_NIL;
XMAAEXT.data[3] = A_UNITE(FNAAEXT,mode12,12,GNAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HNAAEXT,XMAAEXT,4,A68_52 ));
 /* line 228: */
INAAEXT.fn.fn_global = KFAAOST_default_msg;
INAAEXT.nonlocals = A68_NIL;
IAGATRN_read_signature( MMAAEXT_get_char, INAAEXT, &JNAAEXT );
KNAAEXT_reader = JNAAEXT;
 /* line 229: */
LNAAEXT.fn.fn_global = KFAAOST_default_msg;
LNAAEXT.nonlocals = A68_NIL;
GPDATRN_read_closure( KNAAEXT_reader, LNAAEXT, &MNAAEXT );
PCAAEXT_ass_build = MNAAEXT;
 /* line 230: */
NNAAEXT.fn.fn_global = KFAAOST_default_msg;
NNAAEXT.nonlocals = A68_NIL;
XQBAOSI_close_file(TLAAEXT_file, NNAAEXT);
 /* line 232: */
if ( UCAAEXT_show )
{ 
 /* line 233: */
PNAAEXT = (*(&((&PCAAEXT_ass_build)->Head_data))) ;
QNAAEXT = PNAAEXT.upb -1;
ONAAEXT_line = PNAAEXT.data;
for (;QNAAEXT-- >= 0;
(ONAAEXT_line++
) )
{
RNAAEXT.data[0] = A_UNITE(SNAAEXT,mode7,7,(*ONAAEXT_line));
UNAAEXT.fn.fn_global = LRAAOSL_newline;
UNAAEXT.nonlocals = A68_NIL;
RNAAEXT.data[1] = A_UNITE(TNAAEXT,mode12,12,UNAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VNAAEXT,RNAAEXT,2,A68_52 ));
}
 /* line 234: */
} 
 /* line 236: */
XNAAEXT.fn.fn_global = LRAAOSL_newline;
XNAAEXT.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(YNAAEXT,A_UNITE(WNAAEXT,mode12,12,XNAAEXT),A68_52 ));
 /* line 238: */
ZNAAEXT_closure = (&((&PCAAEXT_ass_build)->Closure));
 /* line 239: */
AOAAEXT_changed = A68_FALSE;
 /* line 241: */
 /* line 242: */
COAAEXT = KGAAEXT_data.upb -1;
BOAAEXT_d = KGAAEXT_data.data;
for (;COAAEXT-- >= 0;
(BOAAEXT_d++
) )
{
DOAAEXT_index = (*(&(BOAAEXT_d->Index)));
 /* line 243: */
EOAAEXT_descriptions = A_VINDEX(Transforms,DOAAEXT_index).Options_descriptions;
 /* line 244: */
 /* line 245: */
if ( UCAAEXT_show )
{ 
GEDAOST_time_str(  &GOAAEXT );
FOAAEXT.data[0] = A_UNITE(HOAAEXT,mode7,7,GOAAEXT);
 /* line 246: */
JOAAEXT = A_VINDEX(Transforms,DOAAEXT_index).Name ;
FOAAEXT.data[1] = A_UNITE(IOAAEXT,mode7,7,JOAAEXT);
NOAAEXT = LOAAEXT ;
FOAAEXT.data[2] = A_UNITE(MOAAEXT,mode7,7,NOAAEXT);
POAAEXT.fn.fn_global = LRAAOSL_newline;
POAAEXT.nonlocals = A68_NIL;
FOAAEXT.data[3] = A_UNITE(OOAAEXT,mode12,12,POAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QOAAEXT,FOAAEXT,4,A68_52 ));
 /* line 247: */
 /* line 248: */
SOAAEXT = EOAAEXT_descriptions.upb;
for ( ROAAEXT_i = 1;
ROAAEXT_i <= SOAAEXT;
ROAAEXT_i += 1 )
{ 
 /* line 249: */
FCAAOST_makeoptions( ROAAEXT_i, &TOAAEXT );
if ( MBAAOST_includes((*(&(BOAAEXT_d->Options))), TOAAEXT) )
{ 
NYAAOSL_tab( 30, &VOAAEXT );
UOAAEXT.data[0] = A_UNITE(WOAAEXT,mode16,16,VOAAEXT);
YOAAEXT = A_VINDEX(EOAAEXT_descriptions,ROAAEXT_i) ;
UOAAEXT.data[1] = A_UNITE(XOAAEXT,mode7,7,YOAAEXT);
APAAEXT.fn.fn_global = LRAAOSL_newline;
APAAEXT.nonlocals = A68_NIL;
UOAAEXT.data[2] = A_UNITE(ZOAAEXT,mode12,12,APAAEXT);
 /* line 250: */
 /* line 251: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BPAAEXT,UOAAEXT,3,A68_52 ));
} 
}
 /* line 252: */
} 
 /* line 253: */
CPAAEXT_start = ZACAOSI_get_cpu_time();
 /* line 254: */
 /* line 255: */
DPAAEXT = A_VINDEX(Transforms,DOAAEXT_index).Transform ;
switch ( DPAAEXT.mode )
{ 
case 2: /* PROC(REF MODE317,MODE111,MODE97) MODE406 */
EPAAEXT_t1 = (DPAAEXT.data.mode2);
 /* line 256: */
 /* line 257: */
GPAAEXT.fn.fn_global = KFAAOST_default_msg;
GPAAEXT.nonlocals = A68_NIL;
A_CALLPROC(EPAAEXT_t1,((*ZNAAEXT_closure), (*(&(BOAAEXT_d->Options))), GPAAEXT, &HPAAEXT),((*ZNAAEXT_closure), (*(&(BOAAEXT_d->Options))), GPAAEXT, &HPAAEXT,(EPAAEXT_t1).nonlocals));
FPAAEXT = HPAAEXT;
break;
case 1: /* PROC(REF MODE317,MODE97) MODE406 */
IPAAEXT_t2 = (DPAAEXT.data.mode1);
 /* line 258: */
 /* line 259: */
JPAAEXT.fn.fn_global = KFAAOST_default_msg;
JPAAEXT.nonlocals = A68_NIL;
A_CALLPROC(IPAAEXT_t2,((*ZNAAEXT_closure), JPAAEXT, &KPAAEXT),((*ZNAAEXT_closure), JPAAEXT, &KPAAEXT,(IPAAEXT_t2).nonlocals));
FPAAEXT = KPAAEXT;
break;
default: 
A_IMP_SKIP ;
break;
} 
LPAAEXT_cl = FPAAEXT;
 /* line 260: */
MPAAEXT_finish = ZACAOSI_get_cpu_time();
 /* line 261: */
PPAAEXT = A_VINDEX(Transforms,DOAAEXT_index).Name ;
NPAAEXT.data[0] = A_UNITE(OPAAEXT,mode7,7,PPAAEXT);
TPAAEXT = RPAAEXT ;
NPAAEXT.data[1] = A_UNITE(SPAAEXT,mode7,7,TPAAEXT);
 /* line 262: */
VPAAEXT = (MPAAEXT_finish-CPAAEXT_start) ;
NPAAEXT.data[2] = A_UNITE(UPAAEXT,mode1,1,VPAAEXT);
ZPAAEXT = XPAAEXT ;
NPAAEXT.data[3] = A_UNITE(YPAAEXT,mode7,7,ZPAAEXT);
if ( LPAAEXT_cl.C )
{ 
DQAAEXT = BQAAEXT ;
NPAAEXT.data[4] = A_UNITE(CQAAEXT,mode7,7,DQAAEXT);
} 
else
{ 
HQAAEXT = FQAAEXT ;
NPAAEXT.data[4] = A_UNITE(GQAAEXT,mode7,7,HQAAEXT);
} 
GFBAOSL_put(KEAAOST_screen, A_HISVEC(IQAAEXT,NPAAEXT,5,A68_52 ));
 /* line 263: */
 /* line 264: */
if ( ((*(&(BOAAEXT_d->Opt_str))).upb>0) )
{ 
NQAAEXT = LQAAEXT ;
JQAAEXT.data[0] = A_UNITE(MQAAEXT,mode7,7,NQAAEXT);
PQAAEXT = (*(&(BOAAEXT_d->Opt_str))) ;
JQAAEXT.data[1] = A_UNITE(OQAAEXT,mode7,7,PQAAEXT);
 /* line 265: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QQAAEXT,JQAAEXT,2,A68_52 ));
} 
 /* line 266: */
LRAAOSL_newline(KEAAOST_screen);
 /* line 268: */
(*ZNAAEXT_closure) = LPAAEXT_cl.Cl;
 /* line 269: */
if ( LPAAEXT_cl.C )
{ 
 /* line 270: */
AOAAEXT_changed = A68_TRUE;
} 
}
 /* line 272: */
if ( UCAAEXT_show )
{ 
GEDAOST_time_str(  &SQAAEXT );
RQAAEXT.data[0] = A_UNITE(TQAAEXT,mode7,7,SQAAEXT);
XQAAEXT = VQAAEXT ;
RQAAEXT.data[1] = A_UNITE(WQAAEXT,mode7,7,XQAAEXT);
ZQAAEXT.fn.fn_global = LRAAOSL_newline;
ZQAAEXT.nonlocals = A68_NIL;
RQAAEXT.data[2] = A_UNITE(YQAAEXT,mode12,12,ZQAAEXT);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ARAAEXT,RQAAEXT,3,A68_52 ));
} 
 /* line 273: */
 /* line 274: */
if ( AOAAEXT_changed )
{ 
BRAAEXT.fn.fn_global = KFAAOST_default_msg;
BRAAEXT.nonlocals = A68_NIL;
CRAAEXT_ass_file = FQBAOSI_open_file(DGAAEXT_out_fname, TNBAOSI_write_access, BRAAEXT);
 /* line 275: */
YPBAOSI_file_name( CRAAEXT_ass_file, &DRAAEXT );
ERAAEXT_filename = DRAAEXT;
 /* line 276: */
 /* line 277: */
JRAAEXT = HRAAEXT ;
FRAAEXT.data[0] = A_UNITE(IRAAEXT,mode7,7,JRAAEXT);
QDDAOST_date_time( DZCAOST_seconds(), &KRAAEXT );
FRAAEXT.data[1] = A_UNITE(LRAAEXT,mode7,7,KRAAEXT);
UJBAOSL_oneline( A_HISVEC(MRAAEXT,FRAAEXT,2,A68_52 ), &NRAAEXT );
ORAAEXT_title = NRAAEXT;
 /* line 279: */
A_CLOSURE( RRAAEXT_ass_msg, SRAAEXT_ass_msg, TRAAEXT_ass_msg );
(( TRAAEXT_ass_msg * ) ( RRAAEXT_ass_msg.nonlocals )) -> ERAAEXT_filename = ERAAEXT_filename;
(( TRAAEXT_ass_msg * ) ( RRAAEXT_ass_msg.nonlocals )) -> TLAAEXT_file = TLAAEXT_file;
 /* line 288: */
A_CLOSURE( GSAAEXT_generator, HSAAEXT_generator, ISAAEXT_generator );
A_CALLPROC(GSAAEXT_generator,(A68_TRUE, &MSAAEXT),(A68_TRUE, &MSAAEXT,(GSAAEXT_generator).nonlocals));
LSAAEXT_buffer = MSAAEXT;
 /* line 289: */
NSAAEXT_pos = 0;
 /* line 291: */
A_CLOSURE( PSAAEXT_buff_out_str, QSAAEXT_buff_out_str, RSAAEXT_buff_out_str );
(( RSAAEXT_buff_out_str * ) ( PSAAEXT_buff_out_str.nonlocals )) -> NSAAEXT_pos = (&NSAAEXT_pos);
(( RSAAEXT_buff_out_str * ) ( PSAAEXT_buff_out_str.nonlocals )) -> LSAAEXT_buffer = LSAAEXT_buffer;
(( RSAAEXT_buff_out_str * ) ( PSAAEXT_buff_out_str.nonlocals )) -> TLAAEXT_file = TLAAEXT_file;
(( RSAAEXT_buff_out_str * ) ( PSAAEXT_buff_out_str.nonlocals )) -> RRAAEXT_ass_msg = RRAAEXT_ass_msg;
(( RSAAEXT_buff_out_str * ) ( PSAAEXT_buff_out_str.nonlocals )) -> PSAAEXT_buff_out_str = PSAAEXT_buff_out_str;
 /* line 303: */
 /* line 304: */
 /* line 305: */
if ( VCAAEXT_write_unpacked )
{ 
ETAAEXT = PSAAEXT_buff_out_str;
} 
else
{ 
A_CLOSURE( GTAAEXT_anonymous, HTAAEXT_anonymous, ITAAEXT_anonymous );
(( ITAAEXT_anonymous * ) ( GTAAEXT_anonymous.nonlocals )) -> TLAAEXT_file = TLAAEXT_file;
(( ITAAEXT_anonymous * ) ( GTAAEXT_anonymous.nonlocals )) -> RRAAEXT_ass_msg = RRAAEXT_ass_msg;
ETAAEXT = GTAAEXT_anonymous;
} 
KTAAEXT_out_str = ETAAEXT;
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
if ( VCAAEXT_write_unpacked )
{ 
 /* line 313: */
LTAAEXT = DQCATRN_unpacked_format;
} 
else
{ 
LTAAEXT = CQCATRN_packed_format;
} 
 /* line 314: */
 /* line 316: */
FBGATRN_write_signature( KTAAEXT_out_str, LTAAEXT, !VCAAEXT_write_unpacked, RRAAEXT_ass_msg, &MTAAEXT );
NTAAEXT_writer = MTAAEXT;
 /* line 318: */
OTAAEXT.Closure = (*ZNAAEXT_closure);
OTAAEXT.Head_data = (*(&((&PCAAEXT_ass_build)->Head_data)));
RLFATRN_write_closure(OTAAEXT, NTAAEXT_writer, RRAAEXT_ass_msg);
 /* line 319: */
KCGATRN_finish_write_closure(NTAAEXT_writer, RRAAEXT_ass_msg);
 /* line 320: */
PTAAEXT.fn.fn_global = KFAAOST_default_msg;
PTAAEXT.nonlocals = A68_NIL;
XQBAOSI_close_file(CRAAEXT_ass_file, PTAAEXT);
 /* line 322: */
 /* line 323: */
if ( UCAAEXT_show )
{ 
GEDAOST_time_str(  &RTAAEXT );
QTAAEXT.data[0] = A_UNITE(STAAEXT,mode7,7,RTAAEXT);
WTAAEXT = UTAAEXT ;
QTAAEXT.data[1] = A_UNITE(VTAAEXT,mode7,7,WTAAEXT);
YTAAEXT.fn.fn_global = LRAAOSL_newline;
YTAAEXT.nonlocals = A68_NIL;
QTAAEXT.data[2] = A_UNITE(XTAAEXT,mode12,12,YTAAEXT);
 /* line 324: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZTAAEXT,QTAAEXT,3,A68_52 ));
} 
 /* line 325: */
 /* line 326: */
 /* line 327: */
PBAAEXT_stop_message(JBAAEXT_mess_changed);
} 
else
{ 
 /* line 328: */
 /* line 329: */
PBAAEXT_stop_message(NBAAEXT_mess_no_change);
} 
} 
A_PROC_EXIT(do_transforms);
return;
} 
#undef NL

A68_VOID  AUAAEXT_get_external_title(A68_VC  *ReturnedValue)
{ 
A68_VC  BUAAEXT;  /* clause result */
A68_102  CUAAEXT;  /* OPERATORS - simple index */
A68_INT  DUAAEXT;  /* YIELD */
A_PROC_ENTRY(get_external_title);
CUAAEXT = (*(&((&PCAAEXT_ass_build)->Head_data))) ;
DUAAEXT = 1 ;
BUAAEXT = (*(&A_VINDEX(CUAAEXT,DUAAEXT)));
A_PROC_EXIT(get_external_title);
*ReturnedValue = (BUAAEXT);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void BAAAEXT(void)   /* initialise DECS external_transforms */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/external_transforms.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/transform/assoc/mfiles/transformprocs.m","/u/model/ella/transform/assoc/mfiles/openinterface.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_461  XAAAEXT;  /* procedure value */
A68_466  FBAAEXT;  /* procedure value */
A68_465  GBAAEXT;  /* collateral clause result */
A68_465  KBAAEXT;  /* collateral clause result */
A68_46  OCAAEXT;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
TPCATRN();   /* USE openinterface */
BAAATRN();   /* USE assmodes */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/external/assoc/./a68files/external_transforms.a68";
A_config.translation_time = "Tue Apr  4 11:37:23 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAAEXT (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:37:23 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS external_transforms);
UEAALIB_a68config(LGAALIB_configinfo, FAAAEXT);
 /* line 54: */
 /* line 59: */
XAAAEXT.fn.fn_global = IAAAEXT_generator;
XAAAEXT.nonlocals = A68_NIL;
GAAAEXT_anonymous = XAAAEXT;
 /* line 62: */
FBAAEXT.fn.fn_global = ABAAEXT_generator;
FBAAEXT.nonlocals = A68_NIL;
YAAAEXT_anonymous = FBAAEXT;
 /* line 64: */
GBAAEXT.Status = 2;
GBAAEXT.Message = IBAAEXT;
JBAAEXT_mess_changed = GBAAEXT;
 /* line 65: */
KBAAEXT.Status = 4;
KBAAEXT.Message = MBAAEXT;
NBAAEXT_mess_no_change = KBAAEXT;
 /* line 67: */
 /* line 73: */
TBAAEXT_outn = SBAAEXT;
WBAAEXT_inn = VBAAEXT;
ZBAAEXT_assfile_type = YBAAEXT;
 /* line 75: */
 /* line 76: */
 /* line 77: */
ECAAEXT_name = DCAAEXT;
 /* line 79: */
GCAAEXT_generator( A68_TRUE, &OCAAEXT );
NCAAEXT_no_options = OCAAEXT;
 /* line 81: */
 /* line 83: */
 /* line 331: */
 /* line 333: */
 /* line 335: */
 /* line 336: */
/*SKIP*/;
A_PROC_EXIT(DECS external_transforms);
} 
#undef NL
/* end of translation of ./a68files/external_transforms.a68 */
