
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
/* UNAME:CBHAOST */
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
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE180) VOID */
struct A68t180 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t111  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(BOOL,MODE111,MODE26)  */
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
struct A68t176  Prompt;
struct A68t117 * Logfile;
struct A68t117 * Outfile;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE182,REF MODE183,MODE176,REF MODE117,REF MODE117)  */

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
struct A68t117 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_51)
A68_INT  Number;
A_PAD_INT(PAD_52)
A68_VC  Name;
struct A68t182 * Reader;
struct A68t183 * Previous;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE117,BOOL,INT,REF MODE26,REF MODE182,REF MODE183)  */
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

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE176) VOID */
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
struct A68t196{
A68_INT  C;
A_PAD_INT(PAD_54)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t197{
A68_BITS  A;
A_PAD_BITS(PAD_55)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(BITS)  */
struct A68t200 ;

A_PROCEDURE(A68_VOID ,A68t199,(A68_VC ,struct A68t200 ,struct A68t97 ),(A68_VC ,struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26,MODE200,MODE97) VOID */
struct A68t198{
A68_VC  Parameter;
struct A68t199  Proc;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE199)  */
A_VECTOR(struct A68t200 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE200 */
struct A68t201{
A68_INT  Choice;
A_PAD_INT(PAD_56)
struct A68t203  Params;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE203)  */
struct A68t202{
A68_INT  Sort;
A_PAD_INT(PAD_57)
A68_VC  Value;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t200 { A68_INT mode; union {
struct A68t201  mode1;
struct A68t202  mode2;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(MODE201,MODE202)  */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t200 ,struct A68t97 ),(struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE200,MODE97) VOID */
struct A68t207 ;

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t207 ,struct A68t97 ),(struct A68t207 ,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE207,MODE97) VOID */
struct A68t204 { A68_INT mode; union {
struct A68t198  mode1;
struct A68t205  mode2;
struct A68t206  mode3;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE198,MODE205,MODE206)  */
A_VECTOR(struct A68t202 ,A68t207);
typedef struct A68t207  A68_207 ;    /* VECTOR [] MODE202 */
struct A68t208 { A68_INT mode; union {
struct A68t209 * mode1;
struct A68t210 * mode2;
struct A68t211 * mode3;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE209,REF MODE210,REF MODE211)  */
A_VECTOR(struct A68t213 ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] MODE213 */
struct A68t216{
A68_BITS  Type;
A_PAD_BITS(PAD_58)
struct A68t217  Elements;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(BITS,REF MODE217)  */
struct A68t213 { A68_INT mode; union {
A68_INT * mode1;
struct A68t216  mode2;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(REF INT,MODE216)  */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t209 *,struct A68t34 *),(struct A68t209 *,struct A68t34 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE209,REF MODE34) VOID */
struct A68t214 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t215  mode3;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(REF MODE26,REF MODE102,MODE215)  */
struct A68t209{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t213  Parameter;
struct A68t197  Access;
struct A68t196  Continuation;
struct A68t214  Help;
struct A68t204  Command;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(REF MODE26,REF MODE26,MODE213,MODE197,MODE196,MODE214,MODE204)  */
A_VECTOR(struct A68t208 ,A68t212);
typedef struct A68t212  A68_212 ;    /* VECTOR [] MODE208 */
struct A68t210{
struct A68t209 * Group;
struct A68t212  Commands;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE209,REF MODE212)  */
struct A68t211{
struct A68t209 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t212  Locals;
struct A68t212  Globals;
struct A68t209 * Postlude;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE209,REF MODE26,REF REF MODE26,REF MODE212,REF MODE212,REF MODE209)  */
struct A68t218{
struct A68t211 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_59)
struct A68t102  Input_lines;
struct A68t218 * Caller;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE211,INT,REF MODE102,REF MODE218)  */
A_VECTOR(struct A68t225 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE225 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE97) REF MODE26 */
struct A68t226 { A68_INT mode; union {
struct A68t227  mode1;
A68_INT * mode2;
struct A68t216  mode3;
} data; };
typedef struct A68t226  A68_226 ;    /* UNION(MODE227,REF INT,MODE216)  */
struct A68t225{
A68_INT * Sort;
struct A68t226  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF INT,MODE226,REF MODE26,REF MODE26)  */
struct A68t219 ;

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t219 *,struct A68t209 *,struct A68t200 ,struct A68t97 ,struct A68t196 *),(struct A68t219 *,struct A68t209 *,struct A68t200 ,struct A68t97 ,struct A68t196 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE219,REF MODE209,MODE200,MODE97) MODE196 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE102) VOID */
struct A68t224 ;

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE224) VOID */
struct A68t219{
struct A68t218 * Stack;
struct A68t220  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_60)
A68_BOOL  Private;
A_PAD_BOOL(PAD_61)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_62)
struct A68t221  Caller;
struct A68t222  Report_error;
struct A68t223  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE218,REF MODE220,BOOL,BOOL,BOOL,MODE221,MODE222,MODE223,MODE97)  */
struct A68t224 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t228,(struct A68t196 ,struct A68t196 ),(struct A68t196 ,struct A68t196 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE196,MODE196) BOOL */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t212 ,struct A68t212 ,struct A68t212 *),(struct A68t212 ,struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE212,MODE212) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t212 ,struct A68t208 ,struct A68t212 *),(struct A68t212 ,struct A68t208 ,struct A68t212 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE212,MODE208) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t212 *,struct A68t212 ,struct A68t212 *),(struct A68t212 *,struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF REF MODE212,MODE212) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t212 *,struct A68t208 ,struct A68t212 *),(struct A68t212 *,struct A68t208 ,struct A68t212 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF REF MODE212,MODE208) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t212 ,struct A68t212 *),(struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE212) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t208 ,struct A68t212 *),(struct A68t208 ,struct A68t212 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE208) REF MODE212 */

A_PROCEDURE(struct A68t210 *,A68t235,(A68_VC ,A68_VC ,struct A68t197 ,struct A68t212 ),(A68_VC ,A68_VC ,struct A68t197 ,struct A68t212 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE26,MODE26,MODE197,MODE212) REF MODE210 */

A_PROCEDURE(struct A68t211 *,A68t236,(struct A68t209 *,A68_VC ,A68_VC *,struct A68t212 ,struct A68t212 ,struct A68t204 ),(struct A68t209 *,A68_VC ,A68_VC *,struct A68t212 ,struct A68t212 ,struct A68t204 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE209,MODE26,REF REF MODE26,REF MODE212,REF MODE212,MODE204) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE219,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t219 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t219 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE219,REF MODE34,BOOL,BOOL,MODE97) VOID */
struct A68t240 ;

A_PROCEDURE(struct A68t219 *,A68t239,(struct A68t222 ,struct A68t223 ,struct A68t97 ,struct A68t221 ,struct A68t240 *,struct A68t211 *,struct A68t200 ),(struct A68t222 ,struct A68t223 ,struct A68t97 ,struct A68t221 ,struct A68t240 *,struct A68t211 *,struct A68t200 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE222,MODE223,MODE97,MODE221,REF MODE240,REF MODE211,MODE200) REF MODE219 */
struct A68t240{
struct A68t225  Rule;
struct A68t240 * Rest;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE225,REF MODE240)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t219 *,struct A68t196 *),(struct A68t219 *,struct A68t196 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE219) MODE196 */

A_PROCEDURE(A68_BOOL ,A68t242,(struct A68t216 ),(struct A68t216 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE216) BOOL */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t217 ,struct A68t216 *),(struct A68t217 ,struct A68t216 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE217) MODE216 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t213 ,struct A68t216 *),(struct A68t213 ,struct A68t216 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE213) MODE216 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t213 ,struct A68t220 ,A68_VC *),(struct A68t213 ,struct A68t220 ,A68_VC *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE213,REF MODE220) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t34 *,struct A68t220 ),(struct A68t34 *,struct A68t220 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE34,REF MODE220) VOID */
struct A68t248 ;

A_PROCEDURE(struct A68t240 *,A68t247,(struct A68t240 *,struct A68t248 ),(struct A68t240 *,struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE240,MODE248) REF MODE240 */
A_VECTOR(struct A68t249 ,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] MODE249 */
struct A68t249{
A68_INT * No;
struct A68t226  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF INT,MODE226,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t200 ,struct A68t207 *),(struct A68t200 ,struct A68t207 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE200) REF MODE207 */

A_PROCEDURE(A68_BOOL ,A68t251,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t252,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t253,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(struct A68t182 *,A68t254,(A68_VC ,struct A68t184 ),(A68_VC ,struct A68t184 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE26,MODE184) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t182 ),(struct A68t182 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t257,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t220 ,struct A68t213 ,struct A68t97 ,struct A68t200 *),(struct A68t220 ,struct A68t213 ,struct A68t97 ,struct A68t200 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE220,MODE213,MODE97) MODE200 */

A_PROCEDURE(A68_CHAR ,A68t259,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t260,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t202 ,A68_INT ,struct A68t97 ),(struct A68t202 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE202,INT,MODE97) VOID */
struct A68t262{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_63)
A68_BOOL  Check;
A_PAD_BOOL(PAD_64)
};
typedef struct A68t262  A68_262 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t262 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t262 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE262,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t264,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t265,(struct A68t202 ),(struct A68t202 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE202) BOOL */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t202 ,struct A68t97 ,A68_VC *),(struct A68t202 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE202,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,A68_VC ,struct A68t252 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t252 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26,MODE26,MODE252,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t269,(A68_VC ),(A68_VC ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t270,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t262 ,struct A68t97 ,A68_VC *),(struct A68t262 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE262,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t272,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t273,(struct A68t202 ,struct A68t97 ),(struct A68t202 ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE202,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t202 ,A68_VC ,struct A68t97 ,struct A68t140 *),(struct A68t202 ,A68_VC ,struct A68t97 ,struct A68t140 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE202,MODE26,MODE97) MODE140 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t207 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t164 *),(struct A68t207 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t164 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE207,REF INT,REF MODE26,MODE97) MODE164 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t202 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t202 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE202,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t277,(struct A68t202 ,struct A68t97 ,struct A68t46 ),(struct A68t202 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE202,MODE97,MODE46) INT */
struct A68t278{
A68_INT  Lwb;
A_PAD_INT(PAD_65)
A68_INT  Upb;
A_PAD_INT(PAD_66)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t202 ,struct A68t278 ,struct A68t97 ,struct A68t278 *),(struct A68t202 ,struct A68t278 ,struct A68t97 ,struct A68t278 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE202,MODE278,MODE97) MODE278 */

A_PROCEDURE(A68_VOID ,A68t280,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t281,(struct A68t202 ,struct A68t97 ),(struct A68t202 ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE202,MODE97) CHAR */

A_PROCEDURE(struct A68t240 *,A68t282,(void),(void *));
typedef struct A68t282  A68_282 ;    /* PROC REF MODE240 */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE149) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t219 **,A68t287,(void),(void *));
typedef struct A68t287  A68_287 ;    /* PROC REF REF MODE219 */

A_PROCEDURE(A68_INT ,A68t288,(struct A68t207 ,struct A68t97 ),(struct A68t207 ,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE207,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t289,(A68_BOOL ,struct A68t117 *,struct A68t97 ),(A68_BOOL ,struct A68t117 *,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(BOOL,REF MODE117,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,26,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_VC ,2,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t212 ,struct A68t212 ),(struct A68t212 ,struct A68t212 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE212,REF MODE212) VOID */
struct A68t300{
struct A68t211 * Env;
struct A68t300 * Rest;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE211,REF MODE300)  */

A_PROCEDURE(A68_BOOL ,A68t301,(struct A68t211 *),(struct A68t211 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE211) BOOL */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t212 ),(struct A68t212 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE212) VOID */

A_PROCEDURE(A68_INT ,A68t303,(A68_VC ,A68_VC ,struct A68t212 ),(A68_VC ,A68_VC ,struct A68t212 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE26,MODE26,REF MODE212) INT */

A_PROCEDURE(struct A68t209 *,A68t304,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE209 */
A_ISTRUCT(A68_CHAR ,9,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_VC ,3,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t308,(A68_VC ,A68_VC ,struct A68t149 ,struct A68t287 ,struct A68t212 *),(A68_VC ,A68_VC ,struct A68t149 ,struct A68t287 ,struct A68t212 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE26,MODE26,MODE149,MODE287) REF MODE212 */
A_ISTRUCT(A68_CHAR ,600,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 600 CHAR */
A_ISTRUCT(struct A68t52 ,12,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 12 MODE52 */

A_PROCEDURE(A68_CHAR ,A68t311,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF BITS) CHAR */

A_PROCEDURE(A68_BITS ,A68t312,(void),(void *));
typedef struct A68t312  A68_312 ;    /* PROC BITS */
A_ISTRUCT(A68_CHAR ,11,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,261,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 261 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,76,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 76 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,75,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 75 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,60,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,50,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(struct A68t208 ,3,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 3 MODE208 */
A_ISTRUCT(A68_CHAR ,37,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t327);
typedef struct A68t327  A68_327 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t328);
typedef struct A68t328  A68_328 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,74,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 74 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t331);
typedef struct A68t331  A68_331 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t333);
typedef struct A68t333  A68_333 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t208 ,6,A68t336);
typedef struct A68t336  A68_336 ;    /* STRUCT 6 MODE208 */
A_ISTRUCT(A68_CHAR ,51,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t338);
typedef struct A68t338  A68_338 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t339);
typedef struct A68t339  A68_339 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,112,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 112 CHAR */
A_ISTRUCT(struct A68t52 ,9,A68t342);
typedef struct A68t342  A68_342 ;    /* STRUCT 9 MODE52 */
A_ISTRUCT(A68_CHAR ,14,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,84,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 84 CHAR */
A_ISTRUCT(A68_CHAR ,139,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 139 CHAR */
A_ISTRUCT(A68_CHAR ,275,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 275 CHAR */
A_ISTRUCT(A68_VC ,5,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,80,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 80 CHAR */
A_ISTRUCT(A68_CHAR ,65,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 65 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t352);
typedef struct A68t352  A68_352 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,121,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 121 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t213 ,2,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 2 MODE213 */
A_ISTRUCT(A68_CHAR ,66,A68t356);
typedef struct A68t356  A68_356 ;    /* STRUCT 66 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t357);
typedef struct A68t357  A68_357 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,31,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_VC ,9,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 9 MODE26 */
A_ISTRUCT(A68_CHAR ,22,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,78,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 78 CHAR */
A_ISTRUCT(struct A68t208 ,2,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 2 MODE208 */
A_ISTRUCT(A68_CHAR ,13,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,100,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 100 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t367);
typedef struct A68t367  A68_367 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,106,A68t369);
typedef struct A68t369  A68_369 ;    /* STRUCT 106 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,63,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,152,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 152 CHAR */
A_ISTRUCT(struct A68t52 ,16,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 16 MODE52 */
A_ISTRUCT(A68_CHAR ,212,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 212 CHAR */
A_ISTRUCT(A68_CHAR ,91,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 91 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t377);
typedef struct A68t377  A68_377 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,265,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 265 CHAR */
A_ISTRUCT(A68_CHAR ,140,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 140 CHAR */
A_ISTRUCT(A68_VC ,7,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 7 MODE26 */
A_ISTRUCT(A68_CHAR ,149,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 149 CHAR */
A_ISTRUCT(A68_CHAR ,109,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 109 CHAR */
A_ISTRUCT(A68_CHAR ,71,A68t384);
typedef struct A68t384  A68_384 ;    /* STRUCT 71 CHAR */
A_ISTRUCT(struct A68t208 ,5,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 5 MODE208 */
A_ISTRUCT(struct A68t208 ,36,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 36 MODE208 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
extern A68_VOID  JGAALIB_show_a68config(struct A68t36 );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandcaller --- */
extern A68_BOOL  FYGAOST_check_syntax;
extern A68_BOOL  GYGAOST_show_parameters;
/* --- End of imports from commandcaller --- */


/* --- Imports from kernelreader --- */
extern A68_VC  JDFAOST_int_str;
extern A68_213  AHFAOST_int_syntax;
extern A68_BOOL  GHFAOST_is_int(struct A68t202 );
extern A68_INT  KHFAOST_get_int(struct A68t202 ,struct A68t97 );
extern A68_213  ALFAOST_name_syntax;
extern A68_BOOL  ELFAOST_is_name(struct A68t202 );
extern A68_VOID  JLFAOST_get_name(struct A68t202 ,struct A68t97 ,A68_VC *);
extern A68_213  XLFAOST_string_syntax;
extern A68_BOOL  MMFAOST_is_string(struct A68t202 );
extern A68_VOID  QMFAOST_get_string(struct A68t202 ,struct A68t97 ,A68_VC *);
extern A68_VC  BNFAOST_filename_str;
extern A68_213  HNFAOST_filename_syntax;
extern A68_VOID  XNFAOST_get_filename(struct A68t202 ,A68_VC ,struct A68t97 ,A68_140 *);
extern A68_213  IOFAOST_text_syntax;
extern A68_BOOL  BPFAOST_is_text(struct A68t202 );
extern A68_VOID  FPFAOST_get_text(struct A68t202 ,struct A68t97 ,A68_VC *);
extern A68_213  DTFAOST_switch_syntax;
extern A68_VOID  WTFAOST_set_switch(struct A68t202 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_213  WVFAOST_word_syntax;
extern A68_INT  DWFAOST_get_word(struct A68t202 ,struct A68t97 ,struct A68t46 );
/* --- End of imports from kernelreader --- */


/* --- Imports from commandreader --- */
extern A68_BOOL  ZNBAOST_debug_reader;
extern A68_213  BECAOST_command_name_syntax;
extern A68_BOOL  BFCAOST_is_command_name(struct A68t202 );
extern A68_VOID  FFCAOST_get_command_name(struct A68t202 ,struct A68t97 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_213  SRAAOST_noparameters;
extern A68_VOID  ATAAOST_prod(struct A68t217 ,A68_216 *);
extern A68_VOID  LTAAOST_opt(struct A68t213 ,A68_216 *);
extern A68_VOID  DUAAOST_star(struct A68t213 ,A68_216 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t200 ,struct A68t97 );
extern A68_197  XMDAOST_normalaccess;
extern A68_197  BNDAOST_hiddenaccess;
extern A68_197  FNDAOST_secretaccess;
extern A68_197  RNDAOST_secretprivateaccess;
extern A68_196  ZNDAOST_continue;
extern A68_196  DODAOST_return;
extern A68_VOID  QQDAOST_addab(struct A68t212 *,struct A68t212 ,A68_212 *);
extern A68_VOID  ARDAOST_makecommands(struct A68t212 ,A68_212 *);
extern A68_210 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t197 ,struct A68t212 );
extern A68_VOID  JEEAOST_help(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 );
extern A68_VOID  BGEAOST_full_help(struct A68t219 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 );
extern A68_VOID  GMEAOST_syntax_help(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 );
/* --- End of imports from command --- */


/* --- Imports from variables --- */
#define YKCAOST_env_var 1
#define ZKCAOST_str_var 2
#define ALCAOST_bool_var 3
extern A68_VC  GLCAOST_true_var;
extern A68_VC  JLCAOST_false_var;
extern A68_VOID  QLCAOST_add_var(A68_VC ,A68_VC ,A68_INT ,struct A68t192 );
extern A68_VOID  HMCAOST_null_set_var(struct A68t191 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  LMCAOST_default_set_var(struct A68t191 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  FNCAOST_get_var(A68_VC ,A68_VC *);
extern A68_BOOL  SNCAOST_var_unset(A68_VC );
extern A68_VOID  TOCAOST_set_var(A68_VC ,A68_VC ,struct A68t97 );
extern A68_VOID  RQCAOST_show_var(A68_VC ,struct A68t97 );
/* --- End of imports from variables --- */


/* --- Imports from ioprocs --- */
extern A68_181  NJGAOST_iostate;
extern A68_VOID  SNGAOST_banner(A68_VC );
extern A68_VOID  TPGAOST_io_clearinputs(struct A68t97 );
extern A68_VOID  CQGAOST_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  FRGAOST_io_removefile(struct A68t97 );
extern A68_VOID  PRGAOST_io_showinput(struct A68t97 );
extern A68_VOID  SRGAOST_io_dontshowinput(struct A68t97 );
extern A68_VOID  VRGAOST_io_showoutput(struct A68t97 );
extern A68_VOID  YRGAOST_io_dontshowoutput(struct A68t97 );
extern A68_VOID  BSGAOST_io_showtime(struct A68t97 );
extern A68_VOID  ESGAOST_io_dontshowtime(struct A68t97 );
extern A68_VOID  HSGAOST_io_printtime(struct A68t97 );
extern A68_VOID  NSGAOST_io_message(A68_VC ,struct A68t97 );
extern A68_VOID  SSGAOST_io_comment(A68_VC ,struct A68t97 );
extern A68_VOID  WSGAOST_io_offline(struct A68t97 );
extern A68_VOID  BTGAOST_io_online(struct A68t97 );
extern A68_VOID  ITGAOST_io_log(A68_VC ,struct A68t97 );
extern A68_VOID  TTGAOST_io_dontlog(struct A68t97 );
extern A68_VOID  CUGAOST_io_output(A68_VC ,struct A68t97 );
extern A68_VOID  NUGAOST_io_dontoutput(struct A68t97 );
extern A68_VOID  WUGAOST_io_page(A68_INT ,struct A68t97 );
extern A68_VOID  FVGAOST_io_dontpage(struct A68t97 );
extern A68_VOID  JVGAOST_io_setwidth(A68_INT ,struct A68t97 );
/* --- End of imports from ioprocs --- */


/* --- Imports from testmode --- */
extern A68_VOID  SIBAOST_testmode_file_name(struct A68t117 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from basics --- */
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VOID  GEDAOST_time_str(A68_VC *);
extern A68_VC  DLDAOST_source_type;
extern A68_VC  MLDAOST_logfile_type;
extern A68_VC  PLDAOST_infile_type;
extern A68_VC  SLDAOST_outfile_type;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  DPBAOSI_io_ok;
extern A68_35  GPBAOSI_io_eof;
extern A68_35  GDAAOST_io_partline;
#define VPBAOSI_newline_char '\012'
extern A68_119  PNBAOSI_read_access;
extern A68_119  XNBAOSI_append_access;
extern A68_119  BOBAOSI_update_access;
extern A68_119  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_117 * FQBAOSI_open_file(A68_VC ,struct A68t119 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t117 *,struct A68t97 );
extern A68_VOID  SRBAOSI_read_line(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t117 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_LINT  WZBAOSI_get_time(void);
extern A68_INT  IACAOSI_execute_os_command(A68_VC ,struct A68t97 );
extern A68_VOID  BBCAOSI_get_login_name(A68_VC *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
extern A68_VOID  TBCAOSI_set_gc_diagnostics(A68_BITS );
extern A68_46  RBCAOSI_gc_diag_options;
extern A68_VOID  VBCAOSI_gc_statistics(struct A68t36 );
extern A68_VOID  CQAAOST_mem_statistics(struct A68t36 );
extern A68_BOOL  FQAAOST_os_debug;
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_VOID  UEAAOST_facility(A68_VC *);
extern A68_VOID  WEAAOST_version(A68_154 *);
extern A68_VC  EIAAOST_os_string;
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  WHAAOSI_user;
extern A68_INT  CKAAOSI_diagnostic_level;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  EYAAOSL_width(A68_VC ,A68_INT ,A68_58 *);
extern A68_VOID  XYAAOSL_after(A68_INT ,A68_62 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GABAOSL_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  FJBAOSL_putb(A68_VC ,struct A68t85 ,A68_VC *);
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AYGAOST(void);   /* commandcaller */
extern void TXEAOST(void);   /* kernelreader */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void FMDAOST(void);   /* command */
extern void TKCAOST(void);   /* variables */
extern void TIGAOST(void);   /* ioprocs */
extern void QFBAOST(void);   /* testmode */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_285   GBHAOST = {"$Id: globalcommands.a68,v 34.2 1995/03/29 13:02:24 ella Exp $"}; 
A_GISVEC(A68_VC ,HBHAOST,GBHAOST,61)
static A68_120   IBHAOST = {"edit"}; 
A_GISVEC(A68_VC ,JBHAOST,IBHAOST,4)
static A68_VC  KBHAOST_edit_var;
static A68_286   LBHAOST = {"showtime"}; 
A_GISVEC(A68_VC ,MBHAOST,LBHAOST,8)
static A68_VC  NBHAOST_showtime_var;
static A68_VC  OBHAOST_edit_type;
static A68_VC  QBHAOST_sysdir_var;
static A68_149  TBHAOST_print_issue;
static A68_287  VBHAOST_commandenv;
static A68_218 * WBHAOST_syntaxcheck_context;
static A68_290   OCHAOST = {"File  \""}; 
A_GISVEC(A68_VC ,PCHAOST,OCHAOST,7)
static A68_291   UCHAOST = {"\":"}; 
A_GISVEC(A68_VC ,VCHAOST,UCHAOST,2)
static A68_293   PDHAOST = {"Read failed - closing file"}; 
A_GISVEC(A68_VC ,QDHAOST,PDHAOST,26)
static A68_294   EEHAOST = {"Module configuration information:"}; 
A_GISVEC(A68_VC ,FEHAOST,EEHAOST,33)
static A68_296   PEHAOST = {"RSRE "}; 
A_GISVEC(A68_VC ,REHAOST,PEHAOST,5)
static A68_297   GGHAOST = {" sub-process"}; 
A_GISVEC(A68_VC ,HGHAOST,GGHAOST,12)
static A68_305   LIHAOST = {" - use  \""}; 
A_GISVEC(A68_VC ,MIHAOST,LIHAOST,9)
static A68_305   SIHAOST = {"Withdrawn"}; 
A_GISVEC(A68_VC ,TIHAOST,SIHAOST,9)
static A68_307   UIHAOST = {""}; 
A_GISVEC(A68_VC ,VIHAOST,UIHAOST,0)
static A68_120   RJHAOST = {"edit"}; 
A_GISVEC(A68_VC ,SJHAOST,RJHAOST,4)
static A68_305   GKHAOST = {"usage.log"}; 
A_GISVEC(A68_VC ,HKHAOST,GKHAOST,9)
static A68_291   QKHAOST = {"  "}; 
A_GISVEC(A68_VC ,RKHAOST,QKHAOST,2)
static A68_291   ZKHAOST = {" ["}; 
A_GISVEC(A68_VC ,ALHAOST,ZKHAOST,2)
static A68_291   MLHAOST = {"  "}; 
A_GISVEC(A68_VC ,NLHAOST,MLHAOST,2)
#define JMHAOST_cc 05403070037U
static A68_313   SNHAOST = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,TNHAOST,SNHAOST,11)
static A68_291   VNHAOST = {"CS"}; 
A_GISVEC(A68_VC ,WNHAOST,VNHAOST,2)
static A68_314   YNHAOST = 
{  'E', 'n', 'a', 'b', 'l', 'e', 's', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
   'l', 'i', 'n', 'e', ' ', 's', 'y', 'n',
   't', 'a', 'x', ' ', 'c', 'h', 'e', 'c',
   'k', 'i', 'n', 'g', '.', ' ', ' ', 'Y',
   'o', 'u', ' ', 'm', 'u', 's', 't', ' ',
   'u', 's', 'e', ' ', '\"', 'd', 'o', 'n',
   't', 'c', 'h', 'e', 'c', 'k', 's', 'y',
   'n', 't', 'a', 'x', '\"', ' ', '(', '\"',
   'd', 'c', 's', '\"', ')', ' ', 't', 'o',
   ' ', 's', 't', 'o', 'p', ' ', 's', 'y',
   'n', 't', 'a', 'x', ' ', 'c', 'h', 'e',
   'c', 'k', 'i', 'n', 'g', '.', ' ', ' ',
   'A', 'n', 'y', ' ', 's', 'y', 'n', 't',
   'a', 'x', ' ', 'e', 'r', 'r', 'o', 'r',
   's', ' ', 'w', 'i', 'l', 'l', ' ', 'b',
   'e', ' ', 'r', 'e', 'p', 'o', 'r', 't',
   'e', 'd', ' ', 'a', 'n', 'd', ' ', 'c',
   'h', 'e', 'c', 'k', 'i', 'n', 'g', ' ',
   'w', 'i', 'l', 'l', ' ', 'c', 'o', 'n',
   't', 'i', 'n', 'u', 'e', '.', ' ', ' ',
   'C', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
   'i', 'n', 'p', 'u', 't', ' ', 'f', 'i',
   'l', 'e', 's', ' ', 'w', 'i', 'l', 'l',
   ' ', 'b', 'e', ' ', 'o', 'p', 'e', 'n',
   'e', 'd', ' ', 'a', 'n', 'd', ' ', 'c',
   'l', 'o', 's', 'e', 'd', ' ', 'a', 's',
   ' ', 'n', 'o', 'r', 'm', 'a', 'l', ' ',
   'a', 'n', 'd', ' ', '\"', 'h', 'e', 'l',
   'p', '\"', ' ', 'w', 'i', 'l', 'l', ' ',
   'c', 'o', 'n', 't', 'i', 'n', 'u', 'e',
   ' ', 't', 'o', ' ', 'f', 'u', 'n', 'c',
   't', 'i', 'o', 'n', '.' 
} ; 
A_GISVEC(A68_VC ,ZNHAOST,YNHAOST,261)
static A68_315   FOHAOST = {"Command line syntax checking already active"}; 
A_GISVEC(A68_VC ,GOHAOST,FOHAOST,43)
static A68_316   JOHAOST = {"Command line syntax checking started - use \"dontchecksyntax\" (\"dcs\") to stop"}; 
A_GISVEC(A68_VC ,KOHAOST,JOHAOST,76)
static A68_296   VOHAOST = {"CLEAR"}; 
static A68_317   XOHAOST = {"INPUTS"}; 
A_GISVEC(A68_VC ,YOHAOST,XOHAOST,6)
static A68_318   APHAOST = {"Closes and removes all files from the input-file stack."}; 
A_GISVEC(A68_VC ,BPHAOST,APHAOST,55)
A_GISVEC(A68_VC ,OPHAOST,VOHAOST,5)
static A68_290   SPHAOST = {"COMMENT"}; 
A_GISVEC(A68_VC ,TPHAOST,SPHAOST,7)
static A68_291   VPHAOST = {"CO"}; 
A_GISVEC(A68_VC ,WPHAOST,VPHAOST,2)
static A68_319   AQHAOST = {"Has no functional effect.  Allows comments to be included in an input file."}; 
A_GISVEC(A68_VC ,BQHAOST,AQHAOST,75)
static A68_296   PQHAOST = {"DEBUG"}; 
static A68_291   SQHAOST = {"OS"}; 
A_GISVEC(A68_VC ,TQHAOST,SQHAOST,2)
static A68_320   VQHAOST = {"Enables monitoring of operating system responses where they are available"}; 
A_GISVEC(A68_VC ,WQHAOST,VQHAOST,73)
static A68_290   CRHAOST = {"OSdebug"}; 
A_GISVEC(A68_VC ,DRHAOST,CRHAOST,7)
static A68_120   MRHAOST = {"HEAP"}; 
A_GISVEC(A68_VC ,NRHAOST,MRHAOST,4)
static A68_321   QRHAOST = {"Sets the diagnostics level for the ALGOL68 garbage collector"}; 
A_GISVEC(A68_VC ,RRHAOST,QRHAOST,60)
static A68_322   ASHAOST = {"Heap diagnostic setting changed to "}; 
A_GISVEC(A68_VC ,BSHAOST,ASHAOST,35)
static A68_317   ZSHAOST = {"READER"}; 
A_GISVEC(A68_VC ,ATHAOST,ZSHAOST,6)
static A68_324   DTHAOST = {"Enables trace of command parameter syntax analysis"}; 
A_GISVEC(A68_VC ,ETHAOST,DTHAOST,50)
static A68_297   LTHAOST = {"Debug_reader"}; 
A_GISVEC(A68_VC ,MTHAOST,LTHAOST,12)
A_GISVEC(A68_VC ,AUHAOST,PQHAOST,5)
static A68_120   EUHAOST = {"DONT"}; 
static A68_313   HUHAOST = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,IUHAOST,HUHAOST,11)
static A68_291   KUHAOST = {"CS"}; 
A_GISVEC(A68_VC ,LUHAOST,KUHAOST,2)
static A68_326   NUHAOST = {"Disables command line syntax checking"}; 
A_GISVEC(A68_VC ,OUHAOST,NUHAOST,37)
static A68_327   WUHAOST = {"Syntax checking finished"}; 
A_GISVEC(A68_VC ,XUHAOST,WUHAOST,24)
static A68_326   EVHAOST = {"You haven't requested syntax checking"}; 
A_GISVEC(A68_VC ,FVHAOST,EVHAOST,37)
static A68_328   RVHAOST = {"LOG"}; 
A_GISVEC(A68_VC ,SVHAOST,RVHAOST,3)
static A68_328   UVHAOST = {"LOG"}; 
A_GISVEC(A68_VC ,VVHAOST,UVHAOST,3)
static A68_329   XVHAOST = {"Stops recording a log-file and closes it."}; 
A_GISVEC(A68_VC ,YVHAOST,XVHAOST,41)
static A68_317   KWHAOST = {"OUTPUT"}; 
A_GISVEC(A68_VC ,LWHAOST,KWHAOST,6)
static A68_328   NWHAOST = {"OUT"}; 
A_GISVEC(A68_VC ,OWHAOST,NWHAOST,3)
static A68_330   QWHAOST = {"Closes the current output file and resumes sending output to the terminal."}; 
A_GISVEC(A68_VC ,RWHAOST,QWHAOST,74)
static A68_327   DXHAOST = {"MONITORCOMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,EXHAOST,DXHAOST,24)
static A68_328   GXHAOST = {"MCP"}; 
A_GISVEC(A68_VC ,HXHAOST,GXHAOST,3)
static A68_331   JXHAOST = {"Stops the monitoring of parameters given to commands"}; 
A_GISVEC(A68_VC ,KXHAOST,JXHAOST,52)
static A68_332   RXHAOST = {"Parameter monitoring disabled"}; 
A_GISVEC(A68_VC ,SXHAOST,RXHAOST,29)
static A68_120   DYHAOST = {"SHOW"}; 
static A68_296   GYHAOST = {"INPUT"}; 
A_GISVEC(A68_VC ,HYHAOST,GYHAOST,5)
static A68_291   JYHAOST = {"IN"}; 
A_GISVEC(A68_VC ,KYHAOST,JYHAOST,2)
static A68_333   MYHAOST = {"Switches off screen-echoing of offline input."}; 
A_GISVEC(A68_VC ,NYHAOST,MYHAOST,45)
static A68_317   ZYHAOST = {"OUTPUT"}; 
A_GISVEC(A68_VC ,AZHAOST,ZYHAOST,6)
static A68_328   CZHAOST = {"OUT"}; 
A_GISVEC(A68_VC ,DZHAOST,CZHAOST,3)
static A68_331   FZHAOST = {"Switches off screen-echoing of file-directed output."}; 
A_GISVEC(A68_VC ,GZHAOST,FZHAOST,52)
static A68_120   SZHAOST = {"TIME"}; 
A_GISVEC(A68_VC ,TZHAOST,SZHAOST,4)
static A68_334   XZHAOST = {"Stops including the time-of-day and CPU-time used with the "}; 
A_GISVEC(A68_VC ,YZHAOST,XZHAOST,59)
static A68_286   AAIAOST = {" prompt."}; 
A_GISVEC(A68_VC ,BAIAOST,AAIAOST,8)
A_GISVEC(A68_VC ,PAIAOST,DYHAOST,4)
static A68_120   TAIAOST = {"PAGE"}; 
A_GISVEC(A68_VC ,UAIAOST,TAIAOST,4)
static A68_120   WAIAOST = {"PAGE"}; 
A_GISVEC(A68_VC ,XAIAOST,WAIAOST,4)
static A68_335   ZAIAOST = {"Switches off paged mode for screen output."}; 
A_GISVEC(A68_VC ,ABIAOST,ZAIAOST,42)
A_GISVEC(A68_VC ,NBIAOST,EUHAOST,4)
static A68_120   RBIAOST = {"EDIT"}; 
A_GISVEC(A68_VC ,SBIAOST,RBIAOST,4)
static A68_291   UBIAOST = {"ED"}; 
A_GISVEC(A68_VC ,VBIAOST,UBIAOST,2)
static A68_337   YBIAOST = {"Invokes the operating system editor defined by the "}; 
A_GISVEC(A68_VC ,ZBIAOST,YBIAOST,51)
static A68_338   BCIAOST = {" variable \"edit\" on the file name parameter."}; 
A_GISVEC(A68_VC ,CCIAOST,BCIAOST,44)
static A68_305   KCIAOST = {"command \""}; 
A_GISVEC(A68_VC ,LCIAOST,KCIAOST,9)
static A68_339   MCIAOST = {"\" is not defined"}; 
A_GISVEC(A68_VC ,NCIAOST,MCIAOST,16)
static A68_286   HDIAOST = {"\033\014\025\025\031\034\025\021"}; 
A_GISVEC(A68_VC ,IDIAOST,HDIAOST,8)
static A68_340   ODIAOST = {"Gives details of all the commands avaliable in "}; 
A_GISVEC(A68_VC ,PDIAOST,ODIAOST,47)
static A68_335   YDIAOST = {"LOW       display command names once only."}; 
A_GISVEC(A68_VC ,ZDIAOST,YDIAOST,42)
static A68_341   EEIAOST = {"MEDIUM    display command names in the contexts in which they occur marking those encountered elsewhere by \"***\""}; 
A_GISVEC(A68_VC ,FEIAOST,EEIAOST,112)
static A68_340   KEIAOST = {"HIGH      output help message for each command."}; 
A_GISVEC(A68_VC ,LEIAOST,KEIAOST,47)
static A68_328   WEIAOST = {"LOW"}; 
A_GISVEC(A68_VC ,XEIAOST,WEIAOST,3)
static A68_317   YEIAOST = {"MEDIUM"}; 
A_GISVEC(A68_VC ,ZEIAOST,YEIAOST,6)
static A68_120   AFIAOST = {"HIGH"}; 
A_GISVEC(A68_VC ,BFIAOST,AFIAOST,4)
static A68_343   LFIAOST = {"GARBAGECOLLECT"}; 
A_GISVEC(A68_VC ,MFIAOST,LFIAOST,14)
static A68_291   OFIAOST = {"GC"}; 
A_GISVEC(A68_VC ,PFIAOST,OFIAOST,2)
static A68_322   RFIAOST = {"Calls the ALGOL68 garbage collector"}; 
A_GISVEC(A68_VC ,SFIAOST,RFIAOST,35)
static A68_344   BGIAOST = {"Garbage collecting..."}; 
A_GISVEC(A68_VC ,CGIAOST,BGIAOST,21)
static A68_313   LGIAOST = {"...finished"}; 
A_GISVEC(A68_VC ,MGIAOST,LGIAOST,11)
static A68_120   GHIAOST = {"HELP"}; 
A_GISVEC(A68_VC ,HHIAOST,GHIAOST,4)
static A68_345   VHIAOST = {"With no argument, help displays two lists of the commands available in the selected "}; 
A_GISVEC(A68_VC ,WHIAOST,VHIAOST,84)
static A68_346   YHIAOST = {" environment; those in the first list are available only in the selected environment and those in the second list are available throughout "}; 
A_GISVEC(A68_VC ,ZHIAOST,YHIAOST,139)
static A68_347   BIIAOST = 
{  '.', ' ', ' ', 'C', 'o', 'm', 'm', 'a',
   'n', 'd', 's', ' ', 'w', 'h', 'i', 'c',
   'h', ' ', 's', 't', 'a', 'r', 't', ' ',
   'w', 'i', 't', 'h', ' ', 't', 'h', 'e',
   ' ', 's', 'a', 'm', 'e', ' ', 'f', 'i',
   'r', 's', 't', ' ', 'w', 'o', 'r', 'd',
   ',', ' ', 'g', 'r', 'o', 'u', 'p', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', 's',
   ',', ' ', 'a', 'r', 'e', ' ', 'l', 'i',
   's', 't', 'e', 'd', ' ', 'a', 's', ' ',
   '\"', '<', 'f', 'i', 'r', 's', 't', 'w',
   'o', 'r', 'd', '>', '.', '.', '.', '\"',
   '.', ' ', ' ', 'W', 'i', 't', 'h', ' ',
   'a', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'n', 'a', 'm', 'e', ' ', 'a',
   's', ' ', 'a', 'n', ' ', 'a', 'r', 'g',
   'u', 'm', 'e', 'n', 't', ',', ' ', 'h',
   'e', 'l', 'p', ' ', 'd', 'i', 's', 'p',
   'l', 'a', 'y', 's', ' ', 'i', 'n', 'f',
   'o', 'r', 'm', 'a', 't', 'i', 'o', 'n',
   ' ', 'a', 'b', 'o', 'u', 't', ' ', 't',
   'h', 'e', ' ', 'c', 'o', 'm', 'm', 'a',
   'n', 'd', '.', ' ', ' ', 'W', 'i', 't',
   'h', ' ', 'a', ' ', 'g', 'r', 'o', 'u',
   'p', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'n', 'a', 'm', 'e', ' ', 'a',
   's', ' ', 'a', 'r', 'g', 'u', 'm', 'e',
   'n', 't', ',', ' ', 'h', 'e', 'l', 'p',
   ' ', 'd', 'i', 's', 'p', 'l', 'a', 'y',
   's', ' ', 'a', ' ', 'l', 'i', 's', 't',
   ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ',
   'a', 'p', 'p', 'r', 'o', 'p', 'r', 'i',
   'a', 't', 'e', ' ', 'g', 'r', 'o', 'u',
   'p', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', 's', '.' 
} ; 
A_GISVEC(A68_VC ,CIIAOST,BIIAOST,275)
static A68_349   ZIIAOST = {"HELPSYNTAX"}; 
A_GISVEC(A68_VC ,AJIAOST,ZIIAOST,10)
static A68_291   CJIAOST = {"HS"}; 
A_GISVEC(A68_VC ,DJIAOST,CJIAOST,2)
static A68_350   KJIAOST = {"Provides a brief description of the syntactic units that form the parameters to "}; 
A_GISVEC(A68_VC ,LJIAOST,KJIAOST,80)
static A68_346   NJIAOST = {" commands.  When no parameter is given, a summary of the available readers is given.  Give \"full\" as a parameter to obtain a detailed list."}; 
A_GISVEC(A68_VC ,OJIAOST,NJIAOST,139)
static A68_120   WJIAOST = {"full"}; 
A_GISVEC(A68_VC ,ZJIAOST,WJIAOST,4)
static A68_344   AKIAOST = {"Extra parameter found"}; 
A_GISVEC(A68_VC ,BKIAOST,AKIAOST,21)
static A68_317   MKIAOST = {"HIDDEN"}; 
A_GISVEC(A68_VC ,NKIAOST,MKIAOST,6)
static A68_333   PKIAOST = {"Enables help of test and withdrawn facilities"}; 
A_GISVEC(A68_VC ,QKIAOST,PKIAOST,45)
static A68_317   XKIAOST = {"Hidden"}; 
A_GISVEC(A68_VC ,YKIAOST,XKIAOST,6)
static A68_296   LLIAOST = {"INPUT"}; 
A_GISVEC(A68_VC ,MLIAOST,LLIAOST,5)
static A68_291   OLIAOST = {"IN"}; 
A_GISVEC(A68_VC ,PLIAOST,OLIAOST,2)
static A68_319   RLIAOST = {"Adds the specified file to the input-file stack and starts reading from it."}; 
A_GISVEC(A68_VC ,SLIAOST,RLIAOST,75)
static A68_328   GMIAOST = {"LOG"}; 
A_GISVEC(A68_VC ,HMIAOST,GMIAOST,3)
static A68_351   JMIAOST = {"Opens a log-file and starts recording all input and output in it."}; 
A_GISVEC(A68_VC ,KMIAOST,JMIAOST,65)
static A68_290   YMIAOST = {"MESSAGE"}; 
A_GISVEC(A68_VC ,ZMIAOST,YMIAOST,7)
static A68_291   BNIAOST = {"ME"}; 
A_GISVEC(A68_VC ,CNIAOST,BNIAOST,2)
static A68_352   GNIAOST = {"Outputs a message."}; 
A_GISVEC(A68_VC ,HNIAOST,GNIAOST,18)
static A68_327   WNIAOST = {"MONITORCOMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,XNIAOST,WNIAOST,24)
static A68_328   ZNIAOST = {"MCP"}; 
A_GISVEC(A68_VC ,AOIAOST,ZNIAOST,3)
static A68_353   COIAOST = {"Monitors parameters given to commands by displaying them before the command is obeyed indicating which readers were used."}; 
A_GISVEC(A68_VC ,DOIAOST,COIAOST,121)
static A68_354   KOIAOST = {"Parameter monitoring enabled"}; 
A_GISVEC(A68_VC ,LOIAOST,KOIAOST,28)
static A68_120   XOIAOST = {"MORE"}; 
A_GISVEC(A68_VC ,YOIAOST,XOIAOST,4)
static A68_286   HPIAOST = {"Outputs "}; 
A_GISVEC(A68_VC ,IPIAOST,HPIAOST,8)
static A68_356   MPIAOST = {" to the screen a page at a time and to the log file if open.  The "}; 
A_GISVEC(A68_VC ,NPIAOST,MPIAOST,66)
static A68_357   RPIAOST = {" parameter may be used to specify the page size."}; 
A_GISVEC(A68_VC ,SPIAOST,RPIAOST,48)
static A68_120   PQIAOST = {"OBEY"}; 
A_GISVEC(A68_VC ,QQIAOST,PQIAOST,4)
static A68_305   WQIAOST = {"Suspends "}; 
A_GISVEC(A68_VC ,XQIAOST,WQIAOST,9)
static A68_354   ZQIAOST = {" and executes the specified "}; 
A_GISVEC(A68_VC ,ARIAOST,ZQIAOST,28)
static A68_316   BRIAOST = {" operating system command, or launches a sub-process in which a sequence of "}; 
A_GISVEC(A68_VC ,CRIAOST,BRIAOST,76)
static A68_326   DRIAOST = {" commands may be given.  The current "}; 
A_GISVEC(A68_VC ,ERIAOST,DRIAOST,37)
static A68_359   GRIAOST = {" session resumes on completion."}; 
A_GISVEC(A68_VC ,HRIAOST,GRIAOST,31)
static A68_296   VRIAOST = {"SPAWN"}; 
A_GISVEC(A68_VC ,WRIAOST,VRIAOST,5)
static A68_361   BSIAOST = {"See the \"obey\" command"}; 
A_GISVEC(A68_VC ,CSIAOST,BSIAOST,22)
static A68_290   PSIAOST = {"OFFLINE"}; 
A_GISVEC(A68_VC ,QSIAOST,PSIAOST,7)
static A68_328   SSIAOST = {"OFF"}; 
A_GISVEC(A68_VC ,TSIAOST,SSIAOST,3)
static A68_351   VSIAOST = {"Resumes reading from the file at the top of the input-file stack."}; 
A_GISVEC(A68_VC ,WSIAOST,VSIAOST,65)
static A68_317   ITIAOST = {"ONLINE"}; 
A_GISVEC(A68_VC ,JTIAOST,ITIAOST,6)
static A68_291   LTIAOST = {"ON"}; 
A_GISVEC(A68_VC ,MTIAOST,LTIAOST,2)
static A68_362   OTIAOST = {"Specifies a break-point in an input-file at which control is to return online."}; 
A_GISVEC(A68_VC ,PTIAOST,OTIAOST,78)
static A68_317   BUIAOST = {"OUTPUT"}; 
A_GISVEC(A68_VC ,CUIAOST,BUIAOST,6)
static A68_328   EUIAOST = {"OUT"}; 
A_GISVEC(A68_VC ,FUIAOST,EUIAOST,3)
static A68_326   HUIAOST = {"Directs output to the specified file."}; 
A_GISVEC(A68_VC ,IUIAOST,HUIAOST,37)
static A68_305   VUIAOST = {"OVERWRITE"}; 
static A68_296   YUIAOST = {"STACK"}; 
A_GISVEC(A68_VC ,ZUIAOST,YUIAOST,5)
static A68_335   CVIAOST = {"Overwrites <int> * 10 K Bytes of the stack"}; 
A_GISVEC(A68_VC ,DVIAOST,CVIAOST,42)
static A68_120   BWIAOST = {"HEAP"}; 
A_GISVEC(A68_VC ,CWIAOST,BWIAOST,4)
static A68_351   FWIAOST = {"Generates <int> * 10K 4-byte sized objects of garbage on the HEAP"}; 
A_GISVEC(A68_VC ,GWIAOST,FWIAOST,65)
static A68_120   QWIAOST = {"####"}; 
A_GISVEC(A68_VC ,ZWIAOST,VUIAOST,9)
static A68_120   DXIAOST = {"PAGE"}; 
A_GISVEC(A68_VC ,EXIAOST,DXIAOST,4)
static A68_331   IXIAOST = {"Sets paged mode (and page length) for screen output."}; 
A_GISVEC(A68_VC ,JXIAOST,IXIAOST,52)
static A68_296   UXIAOST = {"PRINT"}; 
static A68_364   XXIAOST = {"CONFIGURATION"}; 
A_GISVEC(A68_VC ,YXIAOST,XXIAOST,13)
static A68_317   AYIAOST = {"CONFIG"}; 
A_GISVEC(A68_VC ,BYIAOST,AYIAOST,6)
static A68_365   EYIAOST = {"Displays the configuration details of all the software modules used to build the current version of "}; 
A_GISVEC(A68_VC ,FYIAOST,EYIAOST,100)
static A68_296   TYIAOST = {"ISSUE"}; 
A_GISVEC(A68_VC ,UYIAOST,TYIAOST,5)
static A68_291   WYIAOST = {"IS"}; 
A_GISVEC(A68_VC ,XYIAOST,WYIAOST,2)
static A68_285   AZIAOST = {"Displays the configuration details of the current version of "}; 
A_GISVEC(A68_VC ,BZIAOST,AZIAOST,61)
static A68_120   PZIAOST = {"HEAP"}; 
A_GISVEC(A68_VC ,QZIAOST,PZIAOST,4)
static A68_366   SZIAOST = {"Gives a summary of the ALGOL68 HEAP memory statistics"}; 
A_GISVEC(A68_VC ,TZIAOST,SZIAOST,53)
static A68_317   NAJAOST = {"MEMORY"}; 
A_GISVEC(A68_VC ,OAJAOST,NAJAOST,6)
static A68_328   QAJAOST = {"MEM"}; 
A_GISVEC(A68_VC ,RAJAOST,QAJAOST,3)
static A68_366   TAJAOST = {"Gives a summary of the ALGOL68 HEAP memory statistics"}; 
A_GISVEC(A68_VC ,UAJAOST,TAJAOST,53)
static A68_120   OBJAOST = {"TIME"}; 
A_GISVEC(A68_VC ,PBJAOST,OBJAOST,4)
static A68_120   RBJAOST = {"TIME"}; 
A_GISVEC(A68_VC ,SBJAOST,RBJAOST,4)
static A68_367   UBJAOST = {"Displays time-of-day and CPU-time used."}; 
A_GISVEC(A68_VC ,VBJAOST,UBJAOST,39)
static A68_286   HCJAOST = {"VARIABLE"}; 
A_GISVEC(A68_VC ,ICJAOST,HCJAOST,8)
static A68_327   QCJAOST = {"Print the values of the "}; 
A_GISVEC(A68_VC ,RCJAOST,QCJAOST,24)
static A68_368   TCJAOST = {" variables, or all "}; 
A_GISVEC(A68_VC ,UCJAOST,TCJAOST,19)
static A68_322   WCJAOST = {" variables if none are specified.  "}; 
A_GISVEC(A68_VC ,XCJAOST,WCJAOST,35)
static A68_369   ZCJAOST = {" variables are used to define operating system commands and certain working environment parameters within "}; 
A_GISVEC(A68_VC ,ADJAOST,ZCJAOST,106)
static A68_307   NDJAOST = {""}; 
A_GISVEC(A68_VC ,ODJAOST,NDJAOST,0)
A_GISVEC(A68_VC ,WDJAOST,UXIAOST,5)
static A68_290   ZDJAOST = {"\021\017\030\013 \015\034"}; 
static A68_328   CEJAOST = {"\022\033\033"}; 
A_GISVEC(A68_VC ,DEJAOST,CEJAOST,3)
static A68_313   LEJAOST = {"Private OFF"}; 
A_GISVEC(A68_VC ,MEJAOST,LEJAOST,11)
static A68_291   XEJAOST = {"\022\023"}; 
static A68_361   GFJAOST = {"Command not recognised"}; 
A_GISVEC(A68_VC ,HFJAOST,GFJAOST,22)
static A68_370   PFJAOST = {"TESTINGINPROGRESS"}; 
A_GISVEC(A68_VC ,QFJAOST,PFJAOST,17)
A_GISVEC(A68_VC ,DGJAOST,XEJAOST,2)
A_GISVEC(A68_VC ,IGJAOST,ZDJAOST,7)
static A68_349   NGJAOST = {"REMOVEFILE"}; 
A_GISVEC(A68_VC ,OGJAOST,NGJAOST,10)
static A68_291   QGJAOST = {"RF"}; 
A_GISVEC(A68_VC ,RGJAOST,QGJAOST,2)
static A68_371   TGJAOST = {"Closes and removes a file from the top of the input-file stack."}; 
A_GISVEC(A68_VC ,UGJAOST,TGJAOST,63)
static A68_317   GHJAOST = {"REPORT"}; 
A_GISVEC(A68_VC ,HHJAOST,GHJAOST,6)
static A68_372   JHJAOST = {"Passes the rest of the line as a message to a central log file.  This command is designed for reporting bugs, comments, suggestions and general insults."}; 
A_GISVEC(A68_VC ,KHJAOST,JHJAOST,152)
static A68_332   ZHJAOST = {"REPORT facility not available"}; 
A_GISVEC(A68_VC ,AIJAOST,ZHJAOST,29)
static A68_307   CIJAOST = {""}; 
A_GISVEC(A68_VC ,DIJAOST,CIJAOST,0)
static A68_349   IIJAOST = {"report.log"}; 
A_GISVEC(A68_VC ,JIJAOST,IIJAOST,10)
static A68_291   XIJAOST = {"  "}; 
A_GISVEC(A68_VC ,YIJAOST,XIJAOST,2)
static A68_291   FJJAOST = {" ["}; 
A_GISVEC(A68_VC ,GJJAOST,FJJAOST,2)
static A68_291   SJJAOST = {"  "}; 
A_GISVEC(A68_VC ,TJJAOST,SJJAOST,2)
static A68_313   BKJAOST = {"Message:  \""}; 
A_GISVEC(A68_VC ,CKJAOST,BKJAOST,11)
static A68_313   PKJAOST = {"REPORT sent"}; 
A_GISVEC(A68_VC ,QKJAOST,PKJAOST,11)
static A68_317   CLJAOST = {"RECORD"}; 
A_GISVEC(A68_VC ,DLJAOST,CLJAOST,6)
static A68_374   JLJAOST = {"Records the current time and a message (<text>) in <filename>.  This command is designed to be called a number of times during a large run to allow the user to monitor progress by reading <filename> at intervals."}; 
A_GISVEC(A68_VC ,KLJAOST,JLJAOST,212)
static A68_120   QLJAOST = {".log"}; 
A_GISVEC(A68_VC ,RLJAOST,QLJAOST,4)
static A68_120   YMJAOST = {"TYPE"}; 
A_GISVEC(A68_VC ,ZMJAOST,YMJAOST,4)
static A68_291   BNJAOST = {"TY"}; 
A_GISVEC(A68_VC ,CNJAOST,BNJAOST,2)
static A68_286   FNJAOST = {"Outputs "}; 
A_GISVEC(A68_VC ,GNJAOST,FNJAOST,8)
static A68_375   KNJAOST = {" to the screen and to log file if open.  Use \"more\" is output is required a page at a time."}; 
A_GISVEC(A68_VC ,LNJAOST,KNJAOST,91)
static A68_120   EOJAOST = {"EXIT"}; 
A_GISVEC(A68_VC ,FOJAOST,EOJAOST,4)
static A68_376   LOJAOST = {"Exits from the current "}; 
A_GISVEC(A68_VC ,MOJAOST,LOJAOST,23)
static A68_340   ROJAOST = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,SOJAOST,ROJAOST,47)
static A68_317   GPJAOST = {"FINISH"}; 
A_GISVEC(A68_VC ,HPJAOST,GPJAOST,6)
static A68_344   NPJAOST = {"Finishes the current "}; 
A_GISVEC(A68_VC ,OPJAOST,NPJAOST,21)
static A68_340   TPJAOST = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,UPJAOST,TPJAOST,47)
static A68_120   IQJAOST = {"QUIT"}; 
A_GISVEC(A68_VC ,JQJAOST,IQJAOST,4)
static A68_368   PQJAOST = {"Aborts the current "}; 
A_GISVEC(A68_VC ,QQJAOST,PQJAOST,19)
static A68_340   VQJAOST = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,WQJAOST,VQJAOST,47)
static A68_317   KRJAOST = {"RETURN"}; 
A_GISVEC(A68_VC ,LRJAOST,KRJAOST,6)
static A68_377   RRJAOST = {"Returns from the current "}; 
A_GISVEC(A68_VC ,SRJAOST,RRJAOST,25)
static A68_322   XRJAOST = {" session to the calling environment"}; 
A_GISVEC(A68_VC ,YRJAOST,XRJAOST,35)
static A68_317   MSJAOST = {"SECRET"}; 
A_GISVEC(A68_VC ,NSJAOST,MSJAOST,6)
static A68_333   PSJAOST = {"Enables help of test and withdrawn facilities"}; 
A_GISVEC(A68_VC ,QSJAOST,PSJAOST,45)
static A68_317   XSJAOST = {"Secret"}; 
A_GISVEC(A68_VC ,YSJAOST,XSJAOST,6)
static A68_328   KTJAOST = {"SET"}; 
static A68_378   NTJAOST = {"DIAGNOSTICLEVEL"}; 
A_GISVEC(A68_VC ,OTJAOST,NTJAOST,15)
static A68_291   QTJAOST = {"DL"}; 
A_GISVEC(A68_VC ,RTJAOST,QTJAOST,2)
static A68_379   TTJAOST = 
{  'S', 'e', 't', 's', ' ', 't', 'h', 'e',
   ' ', 'd', 'i', 'a', 'g', 'n', 'o', 's',
   't', 'i', 'c', ' ', 'l', 'e', 'v', 'e',
   'l', ' ', 't', 'o', ' ', '<', 'i', 'n',
   't', '>', '.', ' ', ' ', 'T', 'h', 'i',
   's', ' ', 'f', 'l', 'a', 'g', ' ', 'i',
   's', ' ', 'u', 's', 'e', 'd', ' ', 't',
   'o', ' ', 'c', 'o', 'n', 't', 'r', 'o',
   'l', ' ', 't', 'h', 'e', ' ', 'a', 'm',
   'o', 'u', 'n', 't', ' ', 'o', 'f', ' ',
   'd', 'i', 'a', 'g', 'n', 'o', 's', 't',
   'i', 'c', ' ', 'i', 'n', 'f', 'o', 'r',
   'm', 'a', 't', 'i', 'o', 'n', ' ', 's',
   'e', 'n', 't', ' ', 't', 'o', ' ', 't',
   'h', 'e', ' ', 's', 'c', 'r', 'e', 'e',
   'n', ' ', 'o', 'r', ' ', 'o', 'u', 't',
   'p', 'u', 't', ' ', 'f', 'i', 'l', 'e',
   '.', ' ', ' ', 'T', 'h', 'e', ' ', 'd',
   'e', 'f', 'a', 'u', 'l', 't', ' ', 'v',
   'a', 'l', 'u', 'e', ' ', 'i', 's', ' ',
   '\"', '0', '\"', ' ', '-', ' ', 'n', 'o',
   ' ', 'd', 'i', 'a', 'g', 'n', 'o', 's',
   't', 'i', 'c', ' ', 'i', 'n', 'f', 'o',
   'r', 'm', 'a', 't', 'i', 'o', 'n', '.',
   ' ', ' ', '\"', '1', '\"', ' ', 'w', 'i',
   'l', 'l', ' ', 'm', 'o', 'n', 'i', 't',
   'o', 'r', ' ', 'g', 'e', 'n', 'e', 'r',
   'a', 'l', ' ', 'o', 'p', 'e', 'r', 'a',
   't', 'i', 'o', 'n', 's', ' ', 'r', 'a',
   't', 'h', 'e', 'r', ' ', 'm', 'o', 'r',
   'e', ' ', 'd', 'e', 't', 'a', 'i', 'l',
   ' ', 'w', 'h', 'e', 'r', 'e', ' ', 'a',
   'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e',
   '.' 
} ; 
A_GISVEC(A68_VC ,UTJAOST,TTJAOST,265)
static A68_354   BUJAOST = {"Diagnostic level now set to "}; 
A_GISVEC(A68_VC ,CUJAOST,BUJAOST,28)
static A68_296   RUJAOST = {"WIDTH"}; 
A_GISVEC(A68_VC ,SUJAOST,RUJAOST,5)
static A68_380   BVJAOST = {"Sets the maximum length of lines written to the screen or to the log or output files - with no parameter, the width is reset to its default "}; 
A_GISVEC(A68_VC ,CVJAOST,BVJAOST,140)
static A68_293   FVJAOST = {"value.  (Current width is "}; 
A_GISVEC(A68_VC ,GVJAOST,FVJAOST,26)
static A68_286   CWJAOST = {"VARIABLE"}; 
A_GISVEC(A68_VC ,DWJAOST,CWJAOST,8)
static A68_286   NWJAOST = {"Set the "}; 
A_GISVEC(A68_VC ,OWJAOST,NWJAOST,8)
static A68_367   QWJAOST = {" variable to the new value specified.  "}; 
A_GISVEC(A68_VC ,RWJAOST,QWJAOST,39)
static A68_369   TWJAOST = {" variables are used to define operating system commands and certain working environment parameters within "}; 
A_GISVEC(A68_VC ,UWJAOST,TWJAOST,106)
static A68_307   GXJAOST = {""}; 
A_GISVEC(A68_VC ,HXJAOST,GXJAOST,0)
A_GISVEC(A68_VC ,RXJAOST,KTJAOST,3)
static A68_120   UXJAOST = {"SHOW"}; 
static A68_370   XXJAOST = {"COMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,YXJAOST,XXJAOST,17)
static A68_291   AYJAOST = {"CP"}; 
A_GISVEC(A68_VC ,BYJAOST,AYJAOST,2)
static A68_382   DYJAOST = {"As \"checksyntax\" but also displays a list of the parameters specified by the user.  Use \"dontchecksyntax\" (\"dcs\") to revert to normal interpretation."}; 
A_GISVEC(A68_VC ,EYJAOST,DYJAOST,149)
static A68_315   KYJAOST = {"Command line syntax checking already active"}; 
A_GISVEC(A68_VC ,LYJAOST,KYJAOST,43)
static A68_383   OYJAOST = {"Command line syntax checking started with display of input parameters - use \"dontchecksyntax\" (\"dcs\") to stop"}; 
A_GISVEC(A68_VC ,PYJAOST,OYJAOST,109)
static A68_296   BZJAOST = {"INPUT"}; 
A_GISVEC(A68_VC ,CZJAOST,BZJAOST,5)
static A68_291   EZJAOST = {"IN"}; 
A_GISVEC(A68_VC ,FZJAOST,EZJAOST,2)
static A68_338   HZJAOST = {"Switches on screen-echoing of offline input."}; 
A_GISVEC(A68_VC ,IZJAOST,HZJAOST,44)
static A68_317   UZJAOST = {"OUTPUT"}; 
A_GISVEC(A68_VC ,VZJAOST,UZJAOST,6)
static A68_328   XZJAOST = {"OUT"}; 
A_GISVEC(A68_VC ,YZJAOST,XZJAOST,3)
static A68_318   AAKAOST = {"Switches on the screen-echoing of file-directed output."}; 
A_GISVEC(A68_VC ,BAKAOST,AAKAOST,55)
static A68_290   NAKAOST = {"READERS"}; 
A_GISVEC(A68_VC ,OAKAOST,NAKAOST,7)
static A68_384   RAKAOST = {"Displays a list of the different sorts of basic command parameters used"}; 
A_GISVEC(A68_VC ,SAKAOST,RAKAOST,71)
static A68_120   EBKAOST = {"TIME"}; 
A_GISVEC(A68_VC ,FBKAOST,EBKAOST,4)
static A68_340   JBKAOST = {"Displays the time-of-day and CPU-time with the "}; 
A_GISVEC(A68_VC ,KBKAOST,JBKAOST,47)
static A68_286   MBKAOST = {" prompt."}; 
A_GISVEC(A68_VC ,NBKAOST,MBKAOST,8)
A_GISVEC(A68_VC ,BCKAOST,UXJAOST,4)
typedef struct   /* env of non-global proc */
{
A68_BOOL  Reset_paging;
A_PAD_BOOL(PAD_67)
A68_97  Msg;
A68_117 * F;
} MCHAOST_flt;
typedef struct   /* env of non-global proc */
{
int dummy;
} EDHAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} CGHAOST_new_msg;
typedef struct   /* env of non-global proc */
{
A68_300 ** RGHAOST_list;
} VGHAOST_new;
typedef struct   /* env of non-global proc */
{
A68_302  DHHAOST_add;
A68_301  TGHAOST_new;
A68_212  Globals;
} FHHAOST_add;
typedef struct   /* env of non-global proc */
{
A68_BOOL * WJHAOST_not_failed;
} BKHAOST_new_msg;
typedef struct   /* env of non-global proc */
{
int dummy;
} NMHAOST_rr;
typedef struct   /* env of non-global proc */
{
A68_311  LMHAOST_rr;
} CNHAOST_pchars;
typedef struct   /* env of non-global proc */
{
int dummy;
} GNHAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  KVIAOST_n;
A_PAD_INT(PAD_68)
} OVIAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Flt;
} XHJAOST_fault;
typedef struct   /* env of non-global proc */
{
A68_117 * NIJAOST_lf;
A68_97  VHJAOST_fault;
A68_97  Flt;
} SIJAOST_new_fault;
typedef struct   /* env of non-global proc */
{
A68_117 * EMJAOST_record_file;
A68_97  Flt;
} JMJAOST_new_flt;

A_STATIC A68_VOID  SBHAOST_anonymous(void);

A_STATIC A68_INT  ZBHAOST_opt_int(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  GCHAOST_type_more(A68_BOOL  Reset_paging, A68_117 * F, A68_97  Msg);

A_STATIC A68_VOID  LCHAOST_flt(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  DDHAOST_generator(A68_BOOL  BDHAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WDHAOST_set_showtime(A68_191  Var, A68_BOOL  Changed, A68_97  Msg);

A_STATIC A68_VOID  XDHAOST_when(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CEHAOST_print_configuration(void);

A_STATIC A68_VOID  NEHAOST_printer(A68_VC  S);

A_STATIC A68_VOID  SFHAOST_current_context(A68_VC  *ReturnedValue);

A_STATIC A68_INT  WFHAOST_obey_command(A68_VC  Command, A68_97  Msg);

A_STATIC A68_VOID  BGHAOST_new_msg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  PGHAOST_add_globals_to_compounds(A68_212  Globals, A68_212  Vec_with_commands);

A_STATIC A68_BOOL  UGHAOST_new(A68_211 * Next, void *NonLocals);

A_STATIC A68_VOID  EHHAOST_add(A68_212  Vec, void *NonLocals);

A68_INT  PHHAOST_find_command(A68_VC  Name, A68_VC  Abreviation, A68_212  Vec);

A_STATIC A68_VOID  EIHAOST_withdrawn_proc(A68_VC  Str, A68_200  Param, A68_97  Msg);

A68_209 * JIHAOST_withdrawn(A68_VC  Old, A68_VC  Old_abr, A68_VC  New);

A68_VOID  OJHAOST_make_globalcommands(A68_VC  Sysdir_varname, A68_VC  Default_edit_type, A68_149  Printissue, A68_287  Commandenv_proc, A68_212  *ReturnedValue);

A_STATIC A68_VOID  AKHAOST_new_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  AMHAOST_specialrvc(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_CHAR  MMHAOST_rr(A68_BITS * S, void *NonLocals);

A_STATIC A68_BITS  YMHAOST_tt(void);

A_STATIC A68_VOID  BNHAOST_pchars(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FNHAOST_generator(A68_BOOL  DNHAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EOHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  GPHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  GQHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  BRHAOST_anonymous(A68_207  Params, A68_97  Flt);

A_STATIC A68_VOID  WRHAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  JTHAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  TUHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  DWHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  WWHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  PXHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  SYHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  LZHAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  HAIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  FBIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  ICIAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  MDIAOST_anonymous(A68_209 * C, A68_34 * Ch);

A_STATIC A68_VOID  UEIAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  XFIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  TGIAOST_anonymous(A68_VC  S);

A_STATIC A68_VOID  QHIAOST_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  OIIAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  UJIAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  VKIAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  XLIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  PMIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  MNIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  IOIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  AQIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  NRIAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  HSIAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  BTIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  UTIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  NUIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  IVIAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  NVIAOST_generator(A68_BOOL  LVIAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LWIAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  OXIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  MYIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  IZIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  YZIAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  AAJAOST_anonymous(A68_VC  S);

A_STATIC A68_VOID  ZAJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  BBJAOST_anonymous(A68_VC  S);

A_STATIC A68_VOID  ACJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  IDJAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  IEJAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  EFJAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  VFJAOST_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  ZGJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  PHJAOST_anonymous(A68_207  Names, A68_97  Flt);

A_STATIC A68_VOID  WHJAOST_fault(A68_92  No, A68_46  Vs, void *NonLocals);

A_STATIC A68_VOID  RIJAOST_new_fault(A68_92  No, A68_46  Msg, void *NonLocals);

A_STATIC A68_VOID  PLJAOST_anonymous(A68_207  Names, A68_97  Flt);

A_STATIC A68_VOID  IMJAOST_new_flt(A68_92  No, A68_46  Msg, void *NonLocals);

A_STATIC A68_VOID  TNJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  JOJAOST_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  LPJAOST_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  NQJAOST_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  PRJAOST_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  VSJAOST_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  ZTJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  ZUJAOST_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  VVJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  CXJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  JYJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  NZJAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  GAKAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  XAKAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  TBKAOST_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  FNHAOST_generator(A68_BOOL  DNHAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GNHAOST_generator *)NonLocals)->x)
{ 
A68_VC  HNHAOST;  /* clause result */
A68_VC  INHAOST;  /* OPERATORS - dynamic generator */
{ 
INHAOST.upb = 8 ;
( DNHAOST_anonymous? A_VLOC(A68_CHAR ,INHAOST): A_VHEAP(A68_CHAR ,INHAOST) );
HNHAOST = INHAOST;
} 
*ReturnedValue = (HNHAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  TGIAOST_anonymous(A68_VC  S)
{ 
A68_295  UGIAOST;  /* collateral clause result */
A68_52  VGIAOST;  /* OPERATORS - mode -> union mode */
A68_52  WGIAOST;  /* OPERATORS - mode -> union mode */
A68_56  XGIAOST;  /* procedure value */
A68_85  YGIAOST;  /* OPERATORS - istruct -> vector */
UGIAOST.data[0] = A_UNITE(VGIAOST,mode7,7,S);
XGIAOST.fn.fn_global = LRAAOSL_newline;
XGIAOST.nonlocals = A68_NIL;
UGIAOST.data[1] = A_UNITE(WGIAOST,mode12,12,XGIAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YGIAOST,UGIAOST,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  NVIAOST_generator(A68_BOOL  LVIAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OVIAOST_generator *)NonLocals)->x)
{ 
A68_VC  PVIAOST;  /* clause result */
A68_VC  QVIAOST;  /* OPERATORS - dynamic generator */
{ 
QVIAOST.upb = (NL(KVIAOST_n)*10240) ;
( LVIAOST_anonymous? A_VLOC(A68_CHAR ,QVIAOST): A_VHEAP(A68_CHAR ,QVIAOST) );
PVIAOST = QVIAOST;
} 
*ReturnedValue = (PVIAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  AAJAOST_anonymous(A68_VC  S)
{ 
A68_295  BAJAOST;  /* collateral clause result */
A68_52  CAJAOST;  /* OPERATORS - mode -> union mode */
A68_52  DAJAOST;  /* OPERATORS - mode -> union mode */
A68_56  EAJAOST;  /* procedure value */
A68_85  FAJAOST;  /* OPERATORS - istruct -> vector */
BAJAOST.data[0] = A_UNITE(CAJAOST,mode7,7,S);
EAJAOST.fn.fn_global = LRAAOSL_newline;
EAJAOST.nonlocals = A68_NIL;
BAJAOST.data[1] = A_UNITE(DAJAOST,mode12,12,EAJAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(FAJAOST,BAJAOST,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  BBJAOST_anonymous(A68_VC  S)
{ 
A68_295  CBJAOST;  /* collateral clause result */
A68_52  DBJAOST;  /* OPERATORS - mode -> union mode */
A68_52  EBJAOST;  /* OPERATORS - mode -> union mode */
A68_56  FBJAOST;  /* procedure value */
A68_85  GBJAOST;  /* OPERATORS - istruct -> vector */
CBJAOST.data[0] = A_UNITE(DBJAOST,mode7,7,S);
FBJAOST.fn.fn_global = LRAAOSL_newline;
FBJAOST.nonlocals = A68_NIL;
CBJAOST.data[1] = A_UNITE(EBJAOST,mode12,12,FBJAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GBJAOST,CBJAOST,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  WHJAOST_fault(A68_92  No, A68_46  Vs, void *NonLocals)
#define NL(x) (((XHJAOST_fault *)NonLocals)->x)
{ 
A68_106  YHJAOST;  /* OPERATORS - mode -> union mode */
A68_46  BIJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fault);
 /* line 848: */
 /* line 849: */
if ( TKAAOSI_error_msg(A_UNITE(YHJAOST,mode1,1,No)) )
{ 
 /* line 850: */
A_CALLPROC(NL(Flt),(WHAAOSI_user, A_HVEC(BIJAOST,AIJAOST,A68_VC )),(WHAAOSI_user, A_HVEC(BIJAOST,AIJAOST,A68_VC ),(NL(Flt)).nonlocals));
} 
else
{ 
 /* line 851: */
A_CALLPROC(NL(Flt),(No, Vs),(No, Vs,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  RIJAOST_new_fault(A68_92  No, A68_46  Msg, void *NonLocals)
#define NL(x) (((SIJAOST_new_fault *)NonLocals)->x)
{ 
A_PROC_ENTRY(new_fault);
 /* line 860: */
{ 
XQBAOSI_close_file(NL(NIJAOST_lf), NL(VHJAOST_fault));
A_CALLPROC(NL(Flt),(No, Msg),(No, Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(new_fault);
return;
} 
#undef NL

A_STATIC A68_VOID  IMJAOST_new_flt(A68_92  No, A68_46  Msg, void *NonLocals)
#define NL(x) (((JMJAOST_new_flt *)NonLocals)->x)
{ 
A_PROC_ENTRY(new_flt);
 /* line 889: */
{ 
XQBAOSI_close_file(NL(EMJAOST_record_file), NL(Flt));
A_CALLPROC(NL(Flt),(No, Msg),(No, Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(new_flt);
return;
} 
#undef NL

A_STATIC A68_VOID  LCHAOST_flt(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((MCHAOST_flt *)NonLocals)->x)
{ 
A_PROC_ENTRY(flt);
 /* line 85: */
{ 
if ( NL(Reset_paging) )
{ 
FVGAOST_io_dontpage(NL(Msg));
} 
 /* line 86: */
XQBAOSI_close_file(NL(F), NL(Msg));
 /* line 87: */
 /* line 88: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  DDHAOST_generator(A68_BOOL  BDHAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EDHAOST_generator *)NonLocals)->x)
{ 
A68_VC  FDHAOST;  /* clause result */
A68_VC  GDHAOST;  /* OPERATORS - dynamic generator */
{ 
GDHAOST.upb = 4096 ;
( BDHAOST_anonymous? A_VLOC(A68_CHAR ,GDHAOST): A_VHEAP(A68_CHAR ,GDHAOST) );
FDHAOST = GDHAOST;
} 
*ReturnedValue = (FDHAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  NEHAOST_printer(A68_VC  S)
{ 
A68_BOOL  OEHAOST;  /* optbool result */
A68_VC  QEHAOST;  /* OPERATORS - trim index */
A68_INT  SEHAOST_index;
A68_BOOL  TEHAOST;  /* optbool result */
A68_VC  UEHAOST;  /* OPERATORS - trim index */
A68_52  VEHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WEHAOST;  /* YIELD */
A68_85  XEHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  YEHAOST_ver;
A68_BOOL  ZEHAOST;  /* optbool result */
A68_292  AFHAOST;  /* collateral clause result */
A68_62  BFHAOST;  /* avoid structure result */
A68_52  CFHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DFHAOST;  /* OPERATORS - trim index */
A68_58  EFHAOST;  /* avoid structure result */
A68_52  FFHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  GFHAOST;  /* OPERATORS - trim index */
A68_52  HFHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IFHAOST;  /* YIELD */
A68_52  JFHAOST;  /* OPERATORS - mode -> union mode */
A68_56  KFHAOST;  /* procedure value */
A68_85  LFHAOST;  /* OPERATORS - istruct -> vector */
A68_295  MFHAOST;  /* collateral clause result */
A68_52  NFHAOST;  /* OPERATORS - mode -> union mode */
A68_52  OFHAOST;  /* OPERATORS - mode -> union mode */
A68_56  PFHAOST;  /* procedure value */
A68_85  QFHAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printer);
 /* line 133: */
OEHAOST = (S.upb>5);
if ( OEHAOST )
{ /* line 134: */
OEHAOST = A_VC_EQ(A_VTRIM(QEHAOST,(S),A_VTSCRIPT(&(QEHAOST.upb),(S).upb,1,5)),REHAOST);
}
if ( OEHAOST )
{ 
SEHAOST_index = 5;
 /* line 136: */
for ( ;; )
{ 
TEHAOST = ((SEHAOST_index+=1)<=S.upb);
if ( TEHAOST )
{ /* line 137: */
TEHAOST = (A_VINDEX(S,SEHAOST_index)!=' ');
}
if ( !(TEHAOST) ) break;
/*SKIP*/;
}
 /* line 138: */
WEHAOST = A_VTRIM(UEHAOST,(S),A_VTSCRIPT(&(UEHAOST.upb),(S).upb,6,(SEHAOST_index-1))) ;
GFBAOSL_put(LEAAOST_out, A_HVEC(XEHAOST,A_UNITE(VEHAOST,mode7,7,WEHAOST),A68_52 ));
 /* line 139: */
YEHAOST_ver = SEHAOST_index;
 /* line 140: */
for ( ;; )
{ 
ZEHAOST = ((SEHAOST_index+=1)<=S.upb);
if ( ZEHAOST )
{ /* line 141: */
ZEHAOST = (A_VINDEX(S,SEHAOST_index)!=' ');
}
if ( !(ZEHAOST) ) break;
/*SKIP*/;
}
 /* line 142: */
 /* line 143: */
if ( (SEHAOST_index<S.upb) )
{ 
XYAAOSL_after( 20, &BFHAOST );
AFHAOST.data[0] = A_UNITE(CFHAOST,mode18,18,BFHAOST);
 /* line 144: */
EYAAOSL_width( A_VTRIM(DFHAOST,(S),A_VTSCRIPT(&(DFHAOST.upb),(S).upb,YEHAOST_ver,(SEHAOST_index-1))), 8, &EFHAOST );
AFHAOST.data[1] = A_UNITE(FFHAOST,mode14,14,EFHAOST);
IFHAOST = A_VTRIM(GFHAOST,(S),A_VTSCRIPT(&(GFHAOST.upb),(S).upb,SEHAOST_index,(S).upb)) ;
AFHAOST.data[2] = A_UNITE(HFHAOST,mode7,7,IFHAOST);
KFHAOST.fn.fn_global = LRAAOSL_newline;
KFHAOST.nonlocals = A68_NIL;
AFHAOST.data[3] = A_UNITE(JFHAOST,mode12,12,KFHAOST);
 /* line 145: */
 /* line 146: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(LFHAOST,AFHAOST,4,A68_52 ));
} 
} 
else
{ 
MFHAOST.data[0] = A_UNITE(NFHAOST,mode7,7,S);
PFHAOST.fn.fn_global = LRAAOSL_newline;
PFHAOST.nonlocals = A68_NIL;
MFHAOST.data[1] = A_UNITE(OFHAOST,mode12,12,PFHAOST);
 /* line 147: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(QFHAOST,MFHAOST,2,A68_52 ));
} 
A_PROC_EXIT(printer);
return;
} 
#undef NL

A_STATIC A68_VOID  BGHAOST_new_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((CGHAOST_new_msg *)NonLocals)->x)
{ 
A68_106  DGHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  EGHAOST;  /* avoid structure result */
A_PROC_ENTRY(new_msg);
 /* line 158: */
{ 
if ( TKAAOSI_error_msg(A_UNITE(DGHAOST,mode1,1,No)) )
{ 
SFHAOST_current_context(  &EGHAOST );
SNGAOST_banner(EGHAOST);
} 
 /* line 159: */
 /* line 160: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_BOOL  UGHAOST_new(A68_211 * Next, void *NonLocals)
#define NL(x) (((VGHAOST_new *)NonLocals)->x)
{ 
A68_BOOL  WGHAOST_not_found;
A68_300 * XGHAOST_ptr;
A68_BOOL  YGHAOST;  /* optbool result */
A68_300  ZGHAOST;  /* collateral clause result */
A68_300 * AHHAOST;  /* YIELD */
A68_BOOL  BHHAOST;  /* clause result */
A_PROC_ENTRY(new);
 /* line 187: */
 /* line 188: */
{ 
WGHAOST_not_found = A68_TRUE;
 /* line 189: */
XGHAOST_ptr = (*NL(RGHAOST_list));
 /* line 190: */
for ( ;; )
{ 
 /* line 191: */
YGHAOST = (XGHAOST_ptr!=(A68_300 *)A68_NIL);
if ( YGHAOST )
{YGHAOST = WGHAOST_not_found;
}
if ( !(YGHAOST) ) break;
WGHAOST_not_found = ((*(&(XGHAOST_ptr->Env)))!=Next);
XGHAOST_ptr = (*(&(XGHAOST_ptr->Rest)));
}
 /* line 192: */
if ( WGHAOST_not_found )
{ 
ZGHAOST.Env = Next;
ZGHAOST.Rest = (*NL(RGHAOST_list));
AHHAOST = A_HEAP(A68_300 ) ;
(*AHHAOST) = ZGHAOST ;
(*NL(RGHAOST_list)) = AHHAOST;
} 
 /* line 193: */
 /* line 194: */
BHHAOST = WGHAOST_not_found;
} 
A_PROC_EXIT(new);
return( BHHAOST );
} 
#undef NL

A_STATIC A68_VOID  EHHAOST_add(A68_212  Vec, void *NonLocals)
#define NL(x) (((FHHAOST_add *)NonLocals)->x)
{ 
A68_208 * GHHAOST_command;
A68_INT  HHHAOST;  /* forall loop counter */
A68_208  IHHAOST;  /* united object - for case conformity */
A68_210 * JHHAOST_group;
A68_211 * KHHAOST_compound;
A68_212  LHHAOST;  /* avoid structure result */
A_PROC_ENTRY(add);
 /* line 197: */
 /* line 198: */
HHHAOST = Vec.upb -1;
GHHAOST_command = Vec.data;
for (;HHHAOST-- >= 0;
(GHHAOST_command++
) )
{
 /* line 199: */
IHHAOST = (*GHHAOST_command) ;
switch ( IHHAOST.mode )
{ 
case 2: /* REF STRUCT(REF MODE209,REF MODE212)  */
JHHAOST_group = (IHHAOST.data.mode2);
 /* line 200: */
 /* line 201: */
A_CALLPROC(NL(DHHAOST_add),((*(&(JHHAOST_group->Commands)))),((*(&(JHHAOST_group->Commands))),(NL(DHHAOST_add)).nonlocals));
break;
case 3: /* REF STRUCT(REF MODE209,REF MODE26,REF REF MODE26,REF MODE212,REF MODE212,REF MODE209)  */
KHHAOST_compound = (IHHAOST.data.mode3);
 /* line 202: */
 /* line 203: */
if ( A_CALLPROC(NL(TGHAOST_new),(KHHAOST_compound),(KHHAOST_compound,(NL(TGHAOST_new)).nonlocals)) )
{ 
A_CALLPROC(NL(DHHAOST_add),((*(&(KHHAOST_compound->Globals)))),((*(&(KHHAOST_compound->Globals))),(NL(DHHAOST_add)).nonlocals));
 /* line 204: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
QQDAOST_addab( (&(KHHAOST_compound->Globals)), NL(Globals), &LHHAOST );
LHHAOST;
} 
break;
default: 
 /* line 208: */
/*SKIP*/;
break;
} 
}
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  AKHAOST_new_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((BKHAOST_new_msg *)NonLocals)->x)
{ 
A68_106  CKHAOST;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(new_msg);
 /* line 277: */
if ( TKAAOSI_error_msg(A_UNITE(CKHAOST,mode1,1,No)) )
{ 
(*NL(WJHAOST_not_failed)) = A68_FALSE;
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  AMHAOST_specialrvc(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  CMHAOST;  /* avoid structure result */
A68_VC  BMHAOST_ans;
A68_CHAR * DMHAOST_s;
A68_INT  EMHAOST;  /* forall loop counter */
A68_INT  FMHAOST;  /* ADICOPS - MOD */
A68_INT  GMHAOST;  /* ADICOPS - MOD */
A68_INT  HMHAOST;  /* ADICOPS - MOD */
A68_VC  IMHAOST;  /* clause result */
A_PROC_ENTRY(specialrvc);
 /* line 295: */
 /* line 296: */
{ 
ZAAAOSI_makervc( Str, &CMHAOST );
BMHAOST_ans = CMHAOST;
 /* line 297: */
EMHAOST = BMHAOST_ans.upb -1;
DMHAOST_s = BMHAOST_ans.data;
for (;EMHAOST-- >= 0;
(DMHAOST_s++
) )
{
GMHAOST = (32-(A68_INT)(unsigned char)(*DMHAOST_s)) ;
HMHAOST = 26 ;
(*DMHAOST_s) = (A68_CHAR)(A_MOD(GMHAOST,HMHAOST,FMHAOST)+65);
}
 /* line 298: */
 /* line 299: */
IMHAOST = BMHAOST_ans;
} 
A_PROC_EXIT(specialrvc);
*ReturnedValue = (IMHAOST);
return;
} 
#undef NL

A_STATIC A68_CHAR  MMHAOST_rr(A68_BITS * S, void *NonLocals)
#define NL(x) (((NMHAOST_rr *)NonLocals)->x)
{ 
A68_BITS  OMHAOST_t;
A68_INT  PMHAOST;  /* loop control */
A68_INT  QMHAOST;  /* SHL */
A68_INT  RMHAOST;  /* SHL */
A68_INT  SMHAOST;  /* SHL */
A68_INT  TMHAOST;  /* SHL */
A68_CHAR  UMHAOST;  /* clause result */
A68_INT  VMHAOST;  /* ADICOPS - MOD */
A68_INT  WMHAOST;  /* ADICOPS - MOD */
A68_INT  XMHAOST;  /* ADICOPS - MOD */
A_PROC_ENTRY(rr);
 /* line 304: */
 /* line 305: */
{ 
OMHAOST_t = 0X0U;
 /* line 306: */
 /* line 307: */
for ( PMHAOST = 1;
PMHAOST <= 23;
PMHAOST += 1 )
{ 
 /* line 308: */
QMHAOST = 1 ;
if ( ((A68_INT )A_SHL((*S),QMHAOST)<0) )
{ 
 /* line 309: */
(*S) = (A68_BITS )((A68_BITS )((*S)&~JMHAOST_cc)|(A68_BITS )(~(*S)&JMHAOST_cc));
} 
 /* line 310: */
RMHAOST = 1 ;
(*S) = A_SHL((*S),RMHAOST);
 /* line 311: */
SMHAOST = 1 ;
OMHAOST_t = A_SHL(OMHAOST_t,SMHAOST);
 /* line 312: */
TMHAOST = 1 ;
if ( ((A68_INT )A_SHL((*S),TMHAOST)<0) )
{ 
 /* line 313: */
OMHAOST_t = (A68_BITS )(OMHAOST_t|0X1U);
} 
}
 /* line 314: */
 /* line 315: */
WMHAOST = (A68_INT )OMHAOST_t ;
XMHAOST = 26 ;
UMHAOST = (A68_CHAR)(65+A_MOD(WMHAOST,XMHAOST,VMHAOST));
} 
A_PROC_EXIT(rr);
return( UMHAOST );
} 
#undef NL

A_STATIC A68_BITS  YMHAOST_tt(void)
{ 
A68_BITS  ZMHAOST;  /* clause result */
A_PROC_ENTRY(tt);
ZMHAOST = (A68_BITS )((DZCAOST_seconds()/10800)+362680);
A_PROC_EXIT(tt);
return( ZMHAOST );
} 
#undef NL

A_STATIC A68_VOID  BNHAOST_pchars(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CNHAOST_pchars *)NonLocals)->x)
{ 
A68_31  ENHAOST_generator;   /* proc value of non-global proc */
A68_VC  JNHAOST;  /* avoid structure result */
A68_VC  KNHAOST_ans;
A68_INT  LNHAOST_t;
A68_BITS  MNHAOST_s;
A68_CHAR * NNHAOST_c;
A68_INT  ONHAOST;  /* forall loop counter */
A68_VC  PNHAOST;  /* clause result */
A_PROC_ENTRY(pchars);
{ 
A_CLOSURE( ENHAOST_generator, FNHAOST_generator, GNHAOST_generator );
A_CALLPROC(ENHAOST_generator,(A68_FALSE, &JNHAOST),(A68_FALSE, &JNHAOST,(ENHAOST_generator).nonlocals));
KNHAOST_ans = JNHAOST;
 /* line 322: */
LNHAOST_t = (A68_INT )(A68_BITS )(YMHAOST_tt()&077777U);
 /* line 323: */
MNHAOST_s = (A68_BITS )(LNHAOST_t*LNHAOST_t);
 /* line 324: */
ONHAOST = KNHAOST_ans.upb -1;
NNHAOST_c = KNHAOST_ans.data;
for (;ONHAOST-- >= 0;
(NNHAOST_c++
) )
{
(*NNHAOST_c) = A_CALLPROC(NL(LMHAOST_rr),((&MNHAOST_s)),((&MNHAOST_s),(NL(LMHAOST_rr)).nonlocals));
}
 /* line 325: */
 /* line 326: */
PNHAOST = KNHAOST_ans;
} 
A_PROC_EXIT(pchars);
*ReturnedValue = (PNHAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  EOHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_46  HOHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_295  IOHAOST;  /* collateral clause result */
A68_52  LOHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  MOHAOST;  /* YIELD */
A68_52  NOHAOST;  /* OPERATORS - mode -> union mode */
A68_56  OOHAOST;  /* procedure value */
A68_85  POHAOST;  /* OPERATORS - istruct -> vector */
 /* line 340: */
 /* line 341: */
if ( FYGAOST_check_syntax )
{ 
 /* line 342: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(HOHAOST,GOHAOST,A68_VC )),(WHAAOSI_user, A_HVEC(HOHAOST,GOHAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
FYGAOST_check_syntax = A68_TRUE;
 /* line 344: */
WBHAOST_syntaxcheck_context = (*(&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Stack)));
 /* line 345: */
 /* line 346: */
 /* line 347: */
MOHAOST = KOHAOST ;
IOHAOST.data[0] = A_UNITE(LOHAOST,mode7,7,MOHAOST);
OOHAOST.fn.fn_global = LRAAOSL_newline;
OOHAOST.nonlocals = A68_NIL;
IOHAOST.data[1] = A_UNITE(NOHAOST,mode12,12,OOHAOST);
 /* line 348: */
 /* line 349: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(POHAOST,IOHAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GPHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 359: */
TPGAOST_io_clearinputs(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  GQHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  HQHAOST;  /* YIELD */
A68_INT  IQHAOST;  /* YIELD */
A68_VC  JQHAOST;  /* avoid structure result */
 /* line 368: */
HQHAOST = 1 ;
if ( BPFAOST_is_text((*(&A_VINDEX(V,HQHAOST)))) )
{ 
 /* line 369: */
IQHAOST = 1 ;
FPFAOST_get_text( (*(&A_VINDEX(V,IQHAOST))), Msg, &JQHAOST );
SSGAOST_io_comment(JQHAOST, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  BRHAOST_anonymous(A68_207  Params, A68_97  Flt)
{ 
A68_INT  ERHAOST;  /* YIELD */
A68_VC  FRHAOST;  /* avoid structure result */
 /* line 379: */
 /* line 380: */
ERHAOST = 1 ;
WTFAOST_set_switch( (*(&A_VINDEX(Params,ERHAOST))), (&FQAAOST_os_debug), DRHAOST, Flt, &FRHAOST );
FRHAOST;
return;
} 
#undef NL

A_STATIC A68_VOID  WRHAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  XRHAOST;  /* YIELD */
A68_BITS  YRHAOST_heapdebug;
A68_323  ZRHAOST;  /* collateral clause result */
A68_52  CSHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DSHAOST;  /* YIELD */
A68_52  ESHAOST;  /* OPERATORS - mode -> union mode */
A68_52  FSHAOST;  /* OPERATORS - mode -> union mode */
A68_56  GSHAOST;  /* procedure value */
A68_85  HSHAOST;  /* OPERATORS - istruct -> vector */
A68_BITS  ISHAOST_mask;
A68_VC  JSHAOST_opt;
A68_VC * KSHAOST;  /* forall control - []x */
A68_INT  LSHAOST;  /* forall loop counter */
A68_BOOL  MSHAOST;  /* optbool result */
A68_295  NSHAOST;  /* collateral clause result */
A68_52  OSHAOST;  /* OPERATORS - mode -> union mode */
A68_52  PSHAOST;  /* OPERATORS - mode -> union mode */
A68_56  QSHAOST;  /* procedure value */
A68_85  RSHAOST;  /* OPERATORS - istruct -> vector */
A68_INT  SSHAOST;  /* SHL */
 /* line 388: */
{ 
XRHAOST = 1 ;
YRHAOST_heapdebug = (A68_BITS )KHFAOST_get_int((*(&A_VINDEX(Params,XRHAOST))), Msg);
 /* line 389: */
DSHAOST = BSHAOST ;
ZRHAOST.data[0] = A_UNITE(CSHAOST,mode7,7,DSHAOST);
 /* line 390: */
ZRHAOST.data[1] = A_UNITE(ESHAOST,mode3,3,YRHAOST_heapdebug);
GSHAOST.fn.fn_global = LRAAOSL_newline;
GSHAOST.nonlocals = A68_NIL;
ZRHAOST.data[2] = A_UNITE(FSHAOST,mode12,12,GSHAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HSHAOST,ZRHAOST,3,A68_52 ));
 /* line 391: */
TBCAOSI_set_gc_diagnostics(YRHAOST_heapdebug);
 /* line 392: */
ISHAOST_mask = 0X1U;
 /* line 393: */
 /* line 394: */
LSHAOST = RBCAOSI_gc_diag_options.upb -1;
KSHAOST = RBCAOSI_gc_diag_options.data;
for (;LSHAOST-- >= 0;
(KSHAOST++
) )
{
JSHAOST_opt = *KSHAOST;
MSHAOST = ((A68_BITS )(YRHAOST_heapdebug&ISHAOST_mask)==ISHAOST_mask);
if ( MSHAOST )
{ /* line 395: */
MSHAOST = (JSHAOST_opt.upb>0);
}
if ( MSHAOST )
{ 
NSHAOST.data[0] = A_UNITE(OSHAOST,mode7,7,JSHAOST_opt);
QSHAOST.fn.fn_global = LRAAOSL_newline;
QSHAOST.nonlocals = A68_NIL;
NSHAOST.data[1] = A_UNITE(PSHAOST,mode12,12,QSHAOST);
 /* line 396: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RSHAOST,NSHAOST,2,A68_52 ));
} 
 /* line 397: */
 /* line 398: */
SSHAOST = 1 ;
ISHAOST_mask = A_SHL(ISHAOST_mask,SSHAOST);
}
 /* line 399: */
 /* line 400: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  JTHAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_295  KTHAOST;  /* collateral clause result */
A68_INT  NTHAOST;  /* YIELD */
A68_VC  OTHAOST;  /* avoid structure result */
A68_52  PTHAOST;  /* OPERATORS - mode -> union mode */
A68_52  QTHAOST;  /* OPERATORS - mode -> union mode */
A68_56  RTHAOST;  /* procedure value */
A68_85  STHAOST;  /* OPERATORS - istruct -> vector */
 /* line 407: */
 /* line 408: */
NTHAOST = 1 ;
WTFAOST_set_switch( (*(&A_VINDEX(Params,NTHAOST))), (&ZNBAOST_debug_reader), MTHAOST, Msg, &OTHAOST );
KTHAOST.data[0] = A_UNITE(PTHAOST,mode7,7,OTHAOST);
RTHAOST.fn.fn_global = LRAAOSL_newline;
RTHAOST.nonlocals = A68_NIL;
KTHAOST.data[1] = A_UNITE(QTHAOST,mode12,12,RTHAOST);
 /* line 409: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(STHAOST,KTHAOST,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  TUHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_218 ** UUHAOST;  /* YIELD */
A68_295  VUHAOST;  /* collateral clause result */
A68_52  YUHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZUHAOST;  /* YIELD */
A68_52  AVHAOST;  /* OPERATORS - mode -> union mode */
A68_56  BVHAOST;  /* procedure value */
A68_85  CVHAOST;  /* OPERATORS - istruct -> vector */
A68_295  DVHAOST;  /* collateral clause result */
A68_52  GVHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HVHAOST;  /* YIELD */
A68_52  IVHAOST;  /* OPERATORS - mode -> union mode */
A68_56  JVHAOST;  /* procedure value */
A68_85  KVHAOST;  /* OPERATORS - istruct -> vector */
 /* line 420: */
 /* line 421: */
if ( FYGAOST_check_syntax )
{ 
 /* line 422: */
if ( FYGAOST_check_syntax )
{ 
 /* line 423: */
UUHAOST = (&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Stack)) ;
(*UUHAOST) = WBHAOST_syntaxcheck_context;
 /* line 424: */
GYGAOST_show_parameters = FYGAOST_check_syntax = A68_FALSE;
 /* line 425: */
 /* line 426: */
ZUHAOST = XUHAOST ;
VUHAOST.data[0] = A_UNITE(YUHAOST,mode7,7,ZUHAOST);
BVHAOST.fn.fn_global = LRAAOSL_newline;
BVHAOST.nonlocals = A68_NIL;
VUHAOST.data[1] = A_UNITE(AVHAOST,mode12,12,BVHAOST);
 /* line 427: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CVHAOST,VUHAOST,2,A68_52 ));
} 
else
{ 
 /* line 428: */
HVHAOST = FVHAOST ;
DVHAOST.data[0] = A_UNITE(GVHAOST,mode7,7,HVHAOST);
JVHAOST.fn.fn_global = LRAAOSL_newline;
JVHAOST.nonlocals = A68_NIL;
DVHAOST.data[1] = A_UNITE(IVHAOST,mode12,12,JVHAOST);
 /* line 429: */
 /* line 430: */
 /* line 431: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KVHAOST,DVHAOST,2,A68_52 ));
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DWHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 438: */
TTGAOST_io_dontlog(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  WWHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 446: */
NUGAOST_io_dontoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PXHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_295  QXHAOST;  /* collateral clause result */
A68_52  TXHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UXHAOST;  /* YIELD */
A68_52  VXHAOST;  /* OPERATORS - mode -> union mode */
A68_56  WXHAOST;  /* procedure value */
A68_85  XXHAOST;  /* OPERATORS - istruct -> vector */
 /* line 453: */
{ 
GYGAOST_show_parameters = A68_FALSE;
 /* line 454: */
UXHAOST = SXHAOST ;
QXHAOST.data[0] = A_UNITE(TXHAOST,mode7,7,UXHAOST);
WXHAOST.fn.fn_global = LRAAOSL_newline;
WXHAOST.nonlocals = A68_NIL;
QXHAOST.data[1] = A_UNITE(VXHAOST,mode12,12,WXHAOST);
 /* line 455: */
 /* line 456: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XXHAOST,QXHAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  SYHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 465: */
 /* line 466: */
SRGAOST_io_dontshowinput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  LZHAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 474: */
 /* line 475: */
YRGAOST_io_dontshowoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HAIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 483: */
 /* line 484: */
TOCAOST_set_var(NBHAOST_showtime_var, JLCAOST_false_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  FBIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 493: */
FVGAOST_io_dontpage(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  ICIAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_306  JCIAOST;  /* collateral clause result */
A68_46  OCIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  PCIAOST;  /* avoid structure result */
A68_46  QCIAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RCIAOST;  /* YIELD */
A68_140  SCIAOST;  /* avoid structure result */
A68_VC  TCIAOST_name;
A68_VC  UCIAOST;  /* avoid structure result */
A68_VC  VCIAOST_cmd;
A68_306  WCIAOST;  /* collateral clause result */
A68_VC  XCIAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  YCIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ZCIAOST;  /* avoid structure result */
A68_VC  ADIAOST_command;
 /* line 502: */
 /* line 503: */
if ( SNCAOST_var_unset(KBHAOST_edit_var) )
{ 
JCIAOST.data[0] = LCIAOST;
 /* line 504: */
JCIAOST.data[1] = KBHAOST_edit_var;
JCIAOST.data[2] = NCIAOST;
 /* line 505: */
 /* line 506: */
JBAAOSI_concat( A_HISVEC(OCIAOST,JCIAOST,3,A68_VC ), &PCIAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(QCIAOST,PCIAOST,A68_VC )),(WHAAOSI_user, A_HVEC(QCIAOST,PCIAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
RCIAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,RCIAOST))), OBHAOST_edit_type, Msg, &SCIAOST );
TCIAOST_name = SCIAOST.Filename;
 /* line 507: */
FNCAOST_get_var( KBHAOST_edit_var, &UCIAOST );
VCIAOST_cmd = UCIAOST;
 /* line 508: */
WCIAOST.data[0] = VCIAOST_cmd;
WCIAOST.data[1] = A_HVEC(XCIAOST,' ',A68_CHAR );
WCIAOST.data[2] = TCIAOST_name;
JBAAOSI_concat( A_HISVEC(YCIAOST,WCIAOST,3,A68_VC ), &ZCIAOST );
ADIAOST_command = ZCIAOST;
 /* line 509: */
 /* line 510: */
 /* line 511: */
WFHAOST_obey_command(ADIAOST_command, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  MDIAOST_anonymous(A68_209 * C, A68_34 * Ch)
{ 
A68_342  NDIAOST;  /* collateral clause result */
A68_52  QDIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RDIAOST;  /* YIELD */
A68_VC  SDIAOST;  /* avoid structure result */
A68_52  TDIAOST;  /* OPERATORS - mode -> union mode */
A68_52  UDIAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  VDIAOST;  /* YIELD */
A68_52  WDIAOST;  /* OPERATORS - mode -> union mode */
A68_56  XDIAOST;  /* procedure value */
A68_52  AEIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BEIAOST;  /* YIELD */
A68_52  CEIAOST;  /* OPERATORS - mode -> union mode */
A68_56  DEIAOST;  /* procedure value */
A68_52  GEIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HEIAOST;  /* YIELD */
A68_52  IEIAOST;  /* OPERATORS - mode -> union mode */
A68_56  JEIAOST;  /* procedure value */
A68_52  MEIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  NEIAOST;  /* YIELD */
A68_85  OEIAOST;  /* OPERATORS - istruct -> vector */
 /* line 517: */
 /* line 518: */
RDIAOST = PDIAOST ;
NDIAOST.data[0] = A_UNITE(QDIAOST,mode7,7,RDIAOST);
UEAAOST_facility(  &SDIAOST );
NDIAOST.data[1] = A_UNITE(TDIAOST,mode7,7,SDIAOST);
 /* line 519: */
VDIAOST = ':' ;
NDIAOST.data[2] = A_UNITE(UDIAOST,mode6,6,VDIAOST);
 /* line 520: */
XDIAOST.fn.fn_global = LRAAOSL_newline;
XDIAOST.nonlocals = A68_NIL;
NDIAOST.data[3] = A_UNITE(WDIAOST,mode12,12,XDIAOST);
BEIAOST = ZDIAOST ;
NDIAOST.data[4] = A_UNITE(AEIAOST,mode7,7,BEIAOST);
 /* line 522: */
DEIAOST.fn.fn_global = LRAAOSL_newline;
DEIAOST.nonlocals = A68_NIL;
NDIAOST.data[5] = A_UNITE(CEIAOST,mode12,12,DEIAOST);
 /* line 523: */
HEIAOST = FEIAOST ;
NDIAOST.data[6] = A_UNITE(GEIAOST,mode7,7,HEIAOST);
 /* line 525: */
JEIAOST.fn.fn_global = LRAAOSL_newline;
JEIAOST.nonlocals = A68_NIL;
NDIAOST.data[7] = A_UNITE(IEIAOST,mode12,12,JEIAOST);
NEIAOST = LEIAOST ;
NDIAOST.data[8] = A_UNITE(MEIAOST,mode7,7,NEIAOST);
GFBAOSL_put(Ch, A_HISVEC(OEIAOST,NDIAOST,9,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  UEIAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_306  VEIAOST;  /* collateral clause result */
A68_INT  CFIAOST;  /* clause result */
A68_46  DFIAOST;  /* OPERATORS - istruct -> vector */
A68_INT  EFIAOST;  /* YIELD */
 /* line 527: */
VEIAOST.data[0] = XEIAOST;
VEIAOST.data[1] = ZEIAOST;
VEIAOST.data[2] = BFIAOST;
 /* line 528: */
EFIAOST = 1 ;
CFIAOST = DWFAOST_get_word((*(&A_VINDEX(Names,EFIAOST))), Msg, A_HISVEC(DFIAOST,VEIAOST,3,A68_VC ));
switch ( CFIAOST )
{ 
case 1: 
 /* line 529: */
BGEAOST_full_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), LEAAOST_out, A68_TRUE, A68_FALSE, Msg);
break;
case 2: 
 /* line 530: */
BGEAOST_full_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), LEAAOST_out, A68_FALSE, A68_FALSE, Msg);
break;
case 3: 
 /* line 531: */
 /* line 532: */
BGEAOST_full_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), LEAAOST_out, A68_TRUE, A68_TRUE, Msg);
break;
default: 
A_IMP_SKIP ;
break;
} 
return;
} 
#undef NL

A_STATIC A68_VOID  XFIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_323  YFIAOST;  /* collateral clause result */
A68_VC  ZFIAOST;  /* avoid structure result */
A68_52  AGIAOST;  /* OPERATORS - mode -> union mode */
A68_52  DGIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  EGIAOST;  /* YIELD */
A68_52  FGIAOST;  /* OPERATORS - mode -> union mode */
A68_56  GGIAOST;  /* procedure value */
A68_85  HGIAOST;  /* OPERATORS - istruct -> vector */
A68_323  IGIAOST;  /* collateral clause result */
A68_VC  JGIAOST;  /* avoid structure result */
A68_52  KGIAOST;  /* OPERATORS - mode -> union mode */
A68_52  NGIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OGIAOST;  /* YIELD */
A68_52  PGIAOST;  /* OPERATORS - mode -> union mode */
A68_56  QGIAOST;  /* procedure value */
A68_85  RGIAOST;  /* OPERATORS - istruct -> vector */
A68_36  ZGIAOST;  /* procedure value */
 /* line 539: */
{ 
GEDAOST_time_str(  &ZFIAOST );
YFIAOST.data[0] = A_UNITE(AGIAOST,mode7,7,ZFIAOST);
EGIAOST = CGIAOST ;
YFIAOST.data[1] = A_UNITE(DGIAOST,mode7,7,EGIAOST);
GGIAOST.fn.fn_global = LRAAOSL_newline;
GGIAOST.nonlocals = A68_NIL;
YFIAOST.data[2] = A_UNITE(FGIAOST,mode12,12,GGIAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HGIAOST,YFIAOST,3,A68_52 ));
 /* line 540: */
PBCAOSI_garbage_collect();
 /* line 541: */
GEDAOST_time_str(  &JGIAOST );
IGIAOST.data[0] = A_UNITE(KGIAOST,mode7,7,JGIAOST);
OGIAOST = MGIAOST ;
IGIAOST.data[1] = A_UNITE(NGIAOST,mode7,7,OGIAOST);
QGIAOST.fn.fn_global = LRAAOSL_newline;
QGIAOST.nonlocals = A68_NIL;
IGIAOST.data[2] = A_UNITE(PGIAOST,mode12,12,QGIAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RGIAOST,IGIAOST,3,A68_52 ));
 /* line 542: */
 /* line 543: */
 /* line 544: */
ZGIAOST.fn.fn_global = TGIAOST_anonymous;
ZGIAOST.nonlocals = A68_NIL;
VBCAOSI_gc_statistics(ZGIAOST);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  QHIAOST_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_323  RHIAOST;  /* collateral clause result */
A68_52  SHIAOST;  /* OPERATORS - mode -> union mode */
A68_56  THIAOST;  /* procedure value */
A68_348  UHIAOST;  /* collateral clause result */
A68_VC  XHIAOST;  /* avoid structure result */
A68_VC  AIIAOST;  /* avoid structure result */
A68_46  DIIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  EIIAOST;  /* avoid structure result */
A68_52  FIIAOST;  /* OPERATORS - mode -> union mode */
A68_52  GIIAOST;  /* OPERATORS - mode -> union mode */
A68_56  HIIAOST;  /* procedure value */
A68_85  IIIAOST;  /* OPERATORS - istruct -> vector */
 /* line 550: */
THIAOST.fn.fn_global = LRAAOSL_newline;
THIAOST.nonlocals = A68_NIL;
RHIAOST.data[0] = A_UNITE(SHIAOST,mode12,12,THIAOST);
 /* line 553: */
UHIAOST.data[0] = WHIAOST;
 /* line 554: */
SFHAOST_current_context(  &XHIAOST );
UHIAOST.data[1] = XHIAOST;
 /* line 555: */
 /* line 556: */
UHIAOST.data[2] = ZHIAOST;
 /* line 557: */
UEAAOST_facility(  &AIIAOST );
UHIAOST.data[3] = AIIAOST;
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 561: */
 /* line 563: */
UHIAOST.data[4] = CIIAOST;
JBAAOSI_concat( A_HISVEC(DIIAOST,UHIAOST,5,A68_VC ), &EIIAOST );
RHIAOST.data[1] = A_UNITE(FIIAOST,mode7,7,EIIAOST);
HIIAOST.fn.fn_global = LRAAOSL_newline;
HIIAOST.nonlocals = A68_NIL;
RHIAOST.data[2] = A_UNITE(GIIAOST,mode12,12,HIIAOST);
GFBAOSL_put(Ch, A_HISVEC(IIIAOST,RHIAOST,3,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  OIIAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  PIIAOST;  /* YIELD */
A68_202 * QIIAOST_name;
A68_INT  RIIAOST;  /* forall loop counter */
A68_VC  SIIAOST;  /* avoid structure result */
 /* line 565: */
 /* line 566: */
PIIAOST = 1 ;
if ( BFCAOST_is_command_name((*(&A_VINDEX(Names,PIIAOST)))) )
{ 
 /* line 567: */
RIIAOST = Names.upb -1;
QIIAOST_name = Names.data;
for (;RIIAOST-- >= 0;
(QIIAOST_name++
) )
{
 /* line 568: */
 /* line 569: */
FFCAOST_get_command_name( (*QIIAOST_name), Msg, &SIIAOST );
JEEAOST_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), KEAAOST_screen, SIIAOST, A68_FALSE, Msg);
}
 /* line 570: */
} 
else
{ 
 /* line 571: */
 /* line 572: */
JEEAOST_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), KEAAOST_screen, EOAAOSL_nullstr, A68_FALSE, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  UJIAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  VJIAOST;  /* YIELD */
A68_INT  XJIAOST;  /* YIELD */
A68_VC  YJIAOST;  /* avoid structure result */
A68_46  CKIAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_202 * DKIAOST_name;
A68_INT  EKIAOST;  /* forall loop counter */
A68_VC  FKIAOST;  /* avoid structure result */
 /* line 583: */
 /* line 584: */
VJIAOST = 1 ;
if ( !MMFAOST_is_string((*(&A_VINDEX(Names,VJIAOST)))) )
{ 
 /* line 585: */
GMEAOST_syntax_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), KEAAOST_screen, EOAAOSL_nullstr, A68_FALSE, Msg);
} 
else
{ 
 /* line 586: */
XJIAOST = 1 ;
QMFAOST_get_string( (*(&A_VINDEX(Names,XJIAOST))), Msg, &YJIAOST );
if ( A_VC_EQ(YJIAOST,ZJIAOST) )
{ 
GMEAOST_syntax_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), KEAAOST_screen, EOAAOSL_nullstr, A68_TRUE, Msg);
 /* line 587: */
if ( (Names.upb>1) )
{ 
 /* line 588: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(CKIAOST,BKIAOST,A68_VC )),(WHAAOSI_user, A_HVEC(CKIAOST,BKIAOST,A68_VC ),(Msg).nonlocals));
} 
} 
else
{ 
 /* line 589: */
EKIAOST = Names.upb -1;
DKIAOST_name = Names.data;
for (;EKIAOST-- >= 0;
(DKIAOST_name++
) )
{
 /* line 590: */
 /* line 591: */
QMFAOST_get_string( (*DKIAOST_name), Msg, &FKIAOST );
GMEAOST_syntax_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), KEAAOST_screen, FKIAOST, A68_TRUE, Msg);
}
 /* line 592: */
 /* line 593: */
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  VKIAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_295  WKIAOST;  /* collateral clause result */
A68_INT  ZKIAOST;  /* YIELD */
A68_VC  ALIAOST;  /* avoid structure result */
A68_52  BLIAOST;  /* OPERATORS - mode -> union mode */
A68_52  CLIAOST;  /* OPERATORS - mode -> union mode */
A68_56  DLIAOST;  /* procedure value */
A68_85  ELIAOST;  /* OPERATORS - istruct -> vector */
 /* line 600: */
 /* line 601: */
ZKIAOST = 1 ;
WTFAOST_set_switch( (*(&A_VINDEX(Params,ZKIAOST))), (&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Hidden)), YKIAOST, Msg, &ALIAOST );
WKIAOST.data[0] = A_UNITE(BLIAOST,mode7,7,ALIAOST);
DLIAOST.fn.fn_global = LRAAOSL_newline;
DLIAOST.nonlocals = A68_NIL;
WKIAOST.data[1] = A_UNITE(CLIAOST,mode12,12,DLIAOST);
 /* line 602: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ELIAOST,WKIAOST,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  XLIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  YLIAOST;  /* YIELD */
A68_140  ZLIAOST;  /* avoid structure result */
 /* line 610: */
 /* line 611: */
YLIAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(V,YLIAOST))), PLDAOST_infile_type, Msg, &ZLIAOST );
CQGAOST_io_input(ZLIAOST.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PMIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  QMIAOST;  /* YIELD */
A68_140  RMIAOST;  /* avoid structure result */
 /* line 619: */
 /* line 620: */
QMIAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(V,QMIAOST))), MLDAOST_logfile_type, Msg, &RMIAOST );
ITGAOST_io_log(RMIAOST.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  MNIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  NNIAOST;  /* YIELD */
A68_INT  ONIAOST;  /* YIELD */
A68_VC  PNIAOST;  /* avoid structure result */
 /* line 627: */
NNIAOST = 1 ;
if ( BPFAOST_is_text((*(&A_VINDEX(V,NNIAOST)))) )
{ 
 /* line 628: */
ONIAOST = 1 ;
FPFAOST_get_text( (*(&A_VINDEX(V,ONIAOST))), Msg, &PNIAOST );
NSGAOST_io_message(PNIAOST, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  IOIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_295  JOIAOST;  /* collateral clause result */
A68_52  MOIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  NOIAOST;  /* YIELD */
A68_52  OOIAOST;  /* OPERATORS - mode -> union mode */
A68_56  POIAOST;  /* procedure value */
A68_85  QOIAOST;  /* OPERATORS - istruct -> vector */
 /* line 637: */
{ 
GYGAOST_show_parameters = A68_TRUE;
 /* line 638: */
NOIAOST = LOIAOST ;
JOIAOST.data[0] = A_UNITE(MOIAOST,mode7,7,NOIAOST);
POIAOST.fn.fn_global = LRAAOSL_newline;
POIAOST.nonlocals = A68_NIL;
JOIAOST.data[1] = A_UNITE(OOIAOST,mode12,12,POIAOST);
 /* line 639: */
 /* line 640: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QOIAOST,JOIAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  AQIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  BQIAOST;  /* YIELD */
A68_140  CQIAOST;  /* avoid structure result */
A68_140  DQIAOST_fn;
A68_INT  EQIAOST;  /* clause result */
A68_INT  FQIAOST;  /* YIELD */
A68_INT  GQIAOST_size;
A68_117 * HQIAOST_f;
A68_BOOL  IQIAOST_paging;
 /* line 649: */
{ 
BQIAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(V,BQIAOST))), DLDAOST_source_type, Msg, &CQIAOST );
DQIAOST_fn = CQIAOST;
 /* line 650: */
if ( (V.upb==2) )
{ 
FQIAOST = 2 ;
EQIAOST = KHFAOST_get_int((*(&A_VINDEX(V,FQIAOST))), Msg);
} 
else
{ 
EQIAOST = 0;
} 
GQIAOST_size = EQIAOST;
 /* line 651: */
HQIAOST_f = FQBAOSI_open_file(DQIAOST_fn.Filename, PNBAOSI_read_access, Msg);
 /* line 652: */
IQIAOST_paging = (*(&((&NJGAOST_iostate)->Paging)));
 /* line 653: */
WUGAOST_io_page(GQIAOST_size, Msg);
 /* line 654: */
GCHAOST_type_more(!IQIAOST_paging, HQIAOST_f, Msg);
 /* line 655: */
if ( !IQIAOST_paging )
{ 
 /* line 656: */
 /* line 657: */
FVGAOST_io_dontpage(Msg);
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  NRIAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  ORIAOST;  /* YIELD */
 /* line 668: */
 /* line 669: */
ORIAOST = 1 ;
WFHAOST_obey_command((*(&((&A_VINDEX(Params,ORIAOST))->Value))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HSIAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  ISIAOST;  /* YIELD */
 /* line 675: */
 /* line 676: */
ISIAOST = 1 ;
WFHAOST_obey_command((*(&((&A_VINDEX(Params,ISIAOST))->Value))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BTIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 684: */
WSGAOST_io_offline(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  UTIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 692: */
BTGAOST_io_online(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NUIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  OUIAOST;  /* YIELD */
A68_140  PUIAOST;  /* avoid structure result */
 /* line 699: */
 /* line 700: */
OUIAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(V,OUIAOST))), SLDAOST_outfile_type, Msg, &PUIAOST );
CUGAOST_io_output(PUIAOST.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IVIAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  JVIAOST;  /* YIELD */
A68_INT  KVIAOST_n;
A68_31  MVIAOST_generator;   /* proc value of non-global proc */
A68_VC  SVIAOST;  /* avoid structure result */
A68_VC  RVIAOST_array;
A68_CHAR * TVIAOST_a;
A68_INT  UVIAOST;  /* forall loop counter */
 /* line 710: */
 /* line 711: */
{ 
JVIAOST = 1 ;
KVIAOST_n = KHFAOST_get_int((*(&A_VINDEX(Names,JVIAOST))), Msg);
 /* line 712: */
A_CLOSURE( MVIAOST_generator, NVIAOST_generator, OVIAOST_generator );
(( OVIAOST_generator * ) ( MVIAOST_generator.nonlocals )) -> KVIAOST_n = KVIAOST_n;
A_CALLPROC(MVIAOST_generator,(A68_TRUE, &SVIAOST),(A68_TRUE, &SVIAOST,(MVIAOST_generator).nonlocals));
RVIAOST_array = SVIAOST;
 /* line 713: */
UVIAOST = RVIAOST_array.upb -1;
TVIAOST_a = RVIAOST_array.data;
for (;UVIAOST-- >= 0;
(TVIAOST_a++
) )
{
(*TVIAOST_a) = '*';
}
 /* line 714: */
 /* line 715: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  LWIAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  MWIAOST;  /* YIELD */
A68_INT  NWIAOST;  /* to part of loop */
A68_INT  OWIAOST;  /* loop control */
A68_INT  PWIAOST;  /* loop control */
A68_120 * RWIAOST;  /* YIELD */
 /* line 723: */
MWIAOST = 1 ;
NWIAOST = KHFAOST_get_int((*(&A_VINDEX(Names,MWIAOST))), Msg);
for ( OWIAOST = 1;
OWIAOST <= NWIAOST;
OWIAOST += 1 )
{ 
 /* line 724: */
for ( PWIAOST = 1;
PWIAOST <= 10240;
PWIAOST += 1 )
{ 
RWIAOST = A_HEAP(A68_120 ) ;
(*RWIAOST) = QWIAOST;
}
}
 /* line 725: */
return;
} 
#undef NL

A_STATIC A68_VOID  OXIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 734: */
WUGAOST_io_page(ZBHAOST_opt_int(V, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  MYIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 746: */
CEHAOST_print_configuration();
return;
} 
#undef NL

A_STATIC A68_VOID  IZIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 754: */
A_CALLPROC(TBHAOST_print_issue,(),((TBHAOST_print_issue).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  YZIAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_36  GAJAOST;  /* procedure value */
 /* line 761: */
 /* line 762: */
GAJAOST.fn.fn_global = AAJAOST_anonymous;
GAJAOST.nonlocals = A68_NIL;
VBCAOSI_gc_statistics(GAJAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ZAJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_36  HBJAOST;  /* procedure value */
 /* line 769: */
 /* line 770: */
HBJAOST.fn.fn_global = BBJAOST_anonymous;
HBJAOST.nonlocals = A68_NIL;
CQAAOST_mem_statistics(HBJAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ACJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 777: */
HSGAOST_io_printtime(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IDJAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  JDJAOST;  /* YIELD */
A68_202 * KDJAOST_v;
A68_INT  LDJAOST;  /* forall loop counter */
A68_VC  MDJAOST;  /* avoid structure result */
 /* line 788: */
 /* line 789: */
JDJAOST = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Params,JDJAOST)))) )
{ 
 /* line 790: */
LDJAOST = Params.upb -1;
KDJAOST_v = Params.data;
for (;LDJAOST-- >= 0;
(KDJAOST_v++
) )
{
JLFAOST_get_name( (*KDJAOST_v), Msg, &MDJAOST );
RQCAOST_show_var(MDJAOST, Msg);
}
 /* line 791: */
} 
else
{ 
 /* line 792: */
 /* line 793: */
RQCAOST_show_var(ODJAOST, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  IEJAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_BOOL * JEJAOST;  /* YIELD */
A68_295  KEJAOST;  /* collateral clause result */
A68_52  NEJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OEJAOST;  /* YIELD */
A68_52  PEJAOST;  /* OPERATORS - mode -> union mode */
A68_56  QEJAOST;  /* procedure value */
A68_85  REJAOST;  /* OPERATORS - istruct -> vector */
 /* line 804: */
{ 
JEJAOST = (&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Private)) ;
(*JEJAOST) = A68_FALSE;
 /* line 805: */
OEJAOST = MEJAOST ;
KEJAOST.data[0] = A_UNITE(NEJAOST,mode7,7,OEJAOST);
QEJAOST.fn.fn_global = LRAAOSL_newline;
QEJAOST.nonlocals = A68_NIL;
KEJAOST.data[1] = A_UNITE(PEJAOST,mode12,12,QEJAOST);
 /* line 806: */
 /* line 807: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(REJAOST,KEJAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  EFJAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_BOOL * FFJAOST;  /* YIELD */
A68_46  IFJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 815: */
{ 
FFJAOST = (&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Private)) ;
(*FFJAOST) = A68_TRUE;
 /* line 816: */
 /* line 817: */
 /* line 818: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(IFJAOST,HFJAOST,A68_VC )),(WHAAOSI_user, A_HVEC(IFJAOST,HFJAOST,A68_VC ),(Msg).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  VFJAOST_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_BOOL * WFJAOST;  /* YIELD */
 /* line 824: */
 /* line 825: */
WFJAOST = (&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Private)) ;
(*WFJAOST) = A68_TRUE;
return;
} 
#undef NL

A_STATIC A68_VOID  ZGJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 836: */
FRGAOST_io_removefile(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PHJAOST_anonymous(A68_207  Names, A68_97  Flt)
{ 
A68_INT  QHJAOST;  /* YIELD */
A68_VC  RHJAOST;  /* avoid structure result */
A68_VC  SHJAOST_text;
A68_97  VHJAOST_fault;   /* proc value of non-global proc */
A68_46  EIJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FIJAOST;  /* avoid structure result */
A68_VC  GIJAOST_dir;
A68_298  HIJAOST;  /* collateral clause result */
A68_46  KIJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  LIJAOST;  /* avoid structure result */
A68_VC  MIJAOST_fname;
A68_117 * NIJAOST_lf;
A68_97  QIJAOST_new_fault;   /* proc value of non-global proc */
A68_309  TIJAOST_buffer;
A68_373  UIJAOST;  /* collateral clause result */
A68_VC  VIJAOST;  /* avoid structure result */
A68_52  WIJAOST;  /* OPERATORS - mode -> union mode */
A68_52  ZIJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  AJJAOST;  /* YIELD */
A68_VC  BJJAOST;  /* avoid structure result */
A68_52  CJJAOST;  /* OPERATORS - mode -> union mode */
A68_62  DJJAOST;  /* avoid structure result */
A68_52  EJJAOST;  /* OPERATORS - mode -> union mode */
A68_52  HJJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IJJAOST;  /* YIELD */
A68_VC  JJJAOST;  /* avoid structure result */
A68_52  KJJAOST;  /* OPERATORS - mode -> union mode */
A68_52  LJJAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  MJJAOST;  /* YIELD */
A68_62  NJJAOST;  /* avoid structure result */
A68_52  OJJAOST;  /* OPERATORS - mode -> union mode */
A68_154  PJJAOST;  /* avoid structure result */
A68_52  QJJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RJJAOST;  /* YIELD */
A68_52  UJJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  VJJAOST;  /* YIELD */
A68_154  WJJAOST;  /* avoid structure result */
A68_52  XJJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YJJAOST;  /* YIELD */
A68_62  ZJJAOST;  /* avoid structure result */
A68_52  AKJAOST;  /* OPERATORS - mode -> union mode */
A68_52  DKJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  EKJAOST;  /* YIELD */
A68_52  FKJAOST;  /* OPERATORS - mode -> union mode */
A68_52  GKJAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  HKJAOST;  /* YIELD */
A68_52  IKJAOST;  /* OPERATORS - mode -> union mode */
A68_85  JKJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  KKJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  LKJAOST;  /* avoid structure result */
A68_VC  MKJAOST_line;
A68_35  NKJAOST;  /* avoid structure result */
A68_295  OKJAOST;  /* collateral clause result */
A68_52  RKJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SKJAOST;  /* YIELD */
A68_52  TKJAOST;  /* OPERATORS - mode -> union mode */
A68_56  UKJAOST;  /* procedure value */
A68_85  VKJAOST;  /* OPERATORS - istruct -> vector */
 /* line 844: */
 /* line 845: */
{ 
QHJAOST = 1 ;
FPFAOST_get_text( (*(&A_VINDEX(Names,QHJAOST))), Flt, &RHJAOST );
SHJAOST_text = RHJAOST;
 /* line 847: */
A_CLOSURE( VHJAOST_fault, WHJAOST_fault, XHJAOST_fault );
(( XHJAOST_fault * ) ( VHJAOST_fault.nonlocals )) -> Flt = Flt;
 /* line 853: */
if ( SNCAOST_var_unset(QBHAOST_sysdir_var) )
{ 
A_CALLPROC(VHJAOST_fault,(WHAAOSI_user, A_HVEC(EIJAOST,DIJAOST,A68_VC )),(WHAAOSI_user, A_HVEC(EIJAOST,DIJAOST,A68_VC ),(VHJAOST_fault).nonlocals));
} 
 /* line 855: */
FNCAOST_get_var( QBHAOST_sysdir_var, &FIJAOST );
GIJAOST_dir = FIJAOST;
 /* line 856: */
HIJAOST.data[0] = GIJAOST_dir;
HIJAOST.data[1] = JIJAOST;
JBAAOSI_concat( A_HISVEC(KIJAOST,HIJAOST,2,A68_VC ), &LIJAOST );
MIJAOST_fname = LIJAOST;
 /* line 857: */
NIJAOST_lf = FQBAOSI_open_file(MIJAOST_fname, XNBAOSI_append_access, VHJAOST_fault);
 /* line 859: */
A_CLOSURE( QIJAOST_new_fault, RIJAOST_new_fault, SIJAOST_new_fault );
(( SIJAOST_new_fault * ) ( QIJAOST_new_fault.nonlocals )) -> NIJAOST_lf = NIJAOST_lf;
(( SIJAOST_new_fault * ) ( QIJAOST_new_fault.nonlocals )) -> VHJAOST_fault = VHJAOST_fault;
(( SIJAOST_new_fault * ) ( QIJAOST_new_fault.nonlocals )) -> Flt = Flt;
 /* line 862: */
 /* line 863: */
XDHAOST_when(  &VIJAOST );
UIJAOST.data[0] = A_UNITE(WIJAOST,mode7,7,VIJAOST);
AJJAOST = YIJAOST ;
UIJAOST.data[1] = A_UNITE(ZIJAOST,mode7,7,AJJAOST);
UEAAOST_facility(  &BJJAOST );
UIJAOST.data[2] = A_UNITE(CJJAOST,mode7,7,BJJAOST);
XYAAOSL_after( 36, &DJJAOST );
UIJAOST.data[3] = A_UNITE(EJJAOST,mode18,18,DJJAOST);
 /* line 864: */
IJJAOST = GJJAOST ;
UIJAOST.data[4] = A_UNITE(HJJAOST,mode7,7,IJJAOST);
BBCAOSI_get_login_name(  &JJJAOST );
UIJAOST.data[5] = A_UNITE(KJJAOST,mode7,7,JJJAOST);
MJJAOST = ']' ;
UIJAOST.data[6] = A_UNITE(LJJAOST,mode6,6,MJJAOST);
 /* line 865: */
XYAAOSL_after( 54, &NJJAOST );
UIJAOST.data[7] = A_UNITE(OJJAOST,mode18,18,NJJAOST);
WEAAOST_version(  &PJJAOST );
RJJAOST = PJJAOST.Date ;
UIJAOST.data[8] = A_UNITE(QJJAOST,mode7,7,RJJAOST);
 /* line 866: */
VJJAOST = TJJAOST ;
UIJAOST.data[9] = A_UNITE(UJJAOST,mode7,7,VJJAOST);
WEAAOST_version(  &WJJAOST );
YJJAOST = WJJAOST.Version ;
UIJAOST.data[10] = A_UNITE(XJJAOST,mode7,7,YJJAOST);
 /* line 867: */
XYAAOSL_after( 80, &ZJJAOST );
UIJAOST.data[11] = A_UNITE(AKJAOST,mode18,18,ZJJAOST);
EKJAOST = CKJAOST ;
UIJAOST.data[12] = A_UNITE(DKJAOST,mode7,7,EKJAOST);
UIJAOST.data[13] = A_UNITE(FKJAOST,mode7,7,SHJAOST_text);
 /* line 868: */
HKJAOST = '\"' ;
UIJAOST.data[14] = A_UNITE(GKJAOST,mode6,6,HKJAOST);
UIJAOST.data[15] = A_UNITE(IKJAOST,mode6,6,VPBAOSI_newline_char);
FJBAOSL_putb( A_ISVEC(KKJAOST,(&TIJAOST_buffer),600,A68_CHAR ), A_HISVEC(JKJAOST,UIJAOST,16,A68_52 ), &LKJAOST );
MKJAOST_line = LKJAOST;
 /* line 869: */
JSBAOSI_write_buffer( NIJAOST_lf, MKJAOST_line, QIJAOST_new_fault, &NKJAOST );
NKJAOST;
 /* line 870: */
XQBAOSI_close_file(NIJAOST_lf, Flt);
 /* line 871: */
SKJAOST = QKJAOST ;
OKJAOST.data[0] = A_UNITE(RKJAOST,mode7,7,SKJAOST);
UKJAOST.fn.fn_global = LRAAOSL_newline;
UKJAOST.nonlocals = A68_NIL;
OKJAOST.data[1] = A_UNITE(TKJAOST,mode12,12,UKJAOST);
 /* line 872: */
 /* line 873: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VKJAOST,OKJAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  PLJAOST_anonymous(A68_207  Names, A68_97  Flt)
{ 
A68_INT  SLJAOST;  /* YIELD */
A68_140  TLJAOST;  /* avoid structure result */
A68_VC  ULJAOST_filename;
A68_INT  VLJAOST;  /* YIELD */
A68_VC  WLJAOST;  /* avoid structure result */
A68_VC  XLJAOST_text;
A68_306  YLJAOST;  /* collateral clause result */
A68_VC  ZLJAOST;  /* avoid structure result */
A68_VC  AMJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  BMJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CMJAOST;  /* avoid structure result */
A68_VC  DMJAOST_message;
A68_117 * EMJAOST_record_file;
A68_97  HMJAOST_new_flt;   /* proc value of non-global proc */
A68_35  KMJAOST;  /* avoid structure result */
A68_295  LMJAOST;  /* collateral clause result */
A68_VC  MMJAOST;  /* OPERATORS - trim index */
A68_52  NMJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OMJAOST;  /* YIELD */
A68_52  PMJAOST;  /* OPERATORS - mode -> union mode */
A68_56  QMJAOST;  /* procedure value */
A68_85  RMJAOST;  /* OPERATORS - istruct -> vector */
 /* line 883: */
 /* line 884: */
{ 
SLJAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Names,SLJAOST))), RLJAOST, Flt, &TLJAOST );
ULJAOST_filename = TLJAOST.Filename;
 /* line 885: */
VLJAOST = 2 ;
FPFAOST_get_text( (*(&A_VINDEX(Names,VLJAOST))), Flt, &WLJAOST );
XLJAOST_text = WLJAOST;
 /* line 886: */
GEDAOST_time_str(  &ZLJAOST );
YLJAOST.data[0] = ZLJAOST;
YLJAOST.data[1] = XLJAOST_text;
YLJAOST.data[2] = A_HVEC(AMJAOST,VPBAOSI_newline_char,A68_CHAR );
JBAAOSI_concat( A_HISVEC(BMJAOST,YLJAOST,3,A68_VC ), &CMJAOST );
DMJAOST_message = CMJAOST;
 /* line 887: */
EMJAOST_record_file = FQBAOSI_open_file(ULJAOST_filename, XNBAOSI_append_access, Flt);
 /* line 888: */
A_CLOSURE( HMJAOST_new_flt, IMJAOST_new_flt, JMJAOST_new_flt );
(( JMJAOST_new_flt * ) ( HMJAOST_new_flt.nonlocals )) -> EMJAOST_record_file = EMJAOST_record_file;
(( JMJAOST_new_flt * ) ( HMJAOST_new_flt.nonlocals )) -> Flt = Flt;
 /* line 890: */
JSBAOSI_write_buffer( EMJAOST_record_file, DMJAOST_message, HMJAOST_new_flt, &KMJAOST );
KMJAOST;
 /* line 891: */
XQBAOSI_close_file(EMJAOST_record_file, Flt);
 /* line 892: */
OMJAOST = A_VTRIM(MMJAOST,(DMJAOST_message),A_VTSCRIPT(&(MMJAOST.upb),(DMJAOST_message).upb,1,(DMJAOST_message.upb-1))) ;
LMJAOST.data[0] = A_UNITE(NMJAOST,mode7,7,OMJAOST);
QMJAOST.fn.fn_global = LRAAOSL_newline;
QMJAOST.nonlocals = A68_NIL;
LMJAOST.data[1] = A_UNITE(PMJAOST,mode12,12,QMJAOST);
 /* line 893: */
 /* line 894: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RMJAOST,LMJAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  TNJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  UNJAOST;  /* YIELD */
A68_140  VNJAOST;  /* avoid structure result */
A68_140  WNJAOST_fn;
A68_117 * XNJAOST_f;
 /* line 903: */
{ 
UNJAOST = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(V,UNJAOST))), DLDAOST_source_type, Msg, &VNJAOST );
WNJAOST_fn = VNJAOST;
 /* line 904: */
XNJAOST_f = FQBAOSI_open_file(WNJAOST_fn.Filename, PNBAOSI_read_access, Msg);
 /* line 905: */
 /* line 906: */
 /* line 907: */
GCHAOST_type_more(A68_FALSE, XNJAOST_f, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  JOJAOST_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  KOJAOST;  /* collateral clause result */
A68_52  NOJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OOJAOST;  /* YIELD */
A68_VC  POJAOST;  /* avoid structure result */
A68_52  QOJAOST;  /* OPERATORS - mode -> union mode */
A68_52  TOJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UOJAOST;  /* YIELD */
A68_52  VOJAOST;  /* OPERATORS - mode -> union mode */
A68_56  WOJAOST;  /* procedure value */
A68_85  XOJAOST;  /* OPERATORS - istruct -> vector */
 /* line 912: */
OOJAOST = MOJAOST ;
KOJAOST.data[0] = A_UNITE(NOJAOST,mode7,7,OOJAOST);
 /* line 913: */
SFHAOST_current_context(  &POJAOST );
KOJAOST.data[1] = A_UNITE(QOJAOST,mode7,7,POJAOST);
 /* line 914: */
UOJAOST = SOJAOST ;
KOJAOST.data[2] = A_UNITE(TOJAOST,mode7,7,UOJAOST);
WOJAOST.fn.fn_global = LRAAOSL_newline;
WOJAOST.nonlocals = A68_NIL;
KOJAOST.data[3] = A_UNITE(VOJAOST,mode12,12,WOJAOST);
GFBAOSL_put(Ch, A_HISVEC(XOJAOST,KOJAOST,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  LPJAOST_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  MPJAOST;  /* collateral clause result */
A68_52  PPJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  QPJAOST;  /* YIELD */
A68_VC  RPJAOST;  /* avoid structure result */
A68_52  SPJAOST;  /* OPERATORS - mode -> union mode */
A68_52  VPJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WPJAOST;  /* YIELD */
A68_52  XPJAOST;  /* OPERATORS - mode -> union mode */
A68_56  YPJAOST;  /* procedure value */
A68_85  ZPJAOST;  /* OPERATORS - istruct -> vector */
 /* line 921: */
QPJAOST = OPJAOST ;
MPJAOST.data[0] = A_UNITE(PPJAOST,mode7,7,QPJAOST);
 /* line 922: */
SFHAOST_current_context(  &RPJAOST );
MPJAOST.data[1] = A_UNITE(SPJAOST,mode7,7,RPJAOST);
 /* line 923: */
WPJAOST = UPJAOST ;
MPJAOST.data[2] = A_UNITE(VPJAOST,mode7,7,WPJAOST);
YPJAOST.fn.fn_global = LRAAOSL_newline;
YPJAOST.nonlocals = A68_NIL;
MPJAOST.data[3] = A_UNITE(XPJAOST,mode12,12,YPJAOST);
GFBAOSL_put(Ch, A_HISVEC(ZPJAOST,MPJAOST,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  NQJAOST_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  OQJAOST;  /* collateral clause result */
A68_52  RQJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SQJAOST;  /* YIELD */
A68_VC  TQJAOST;  /* avoid structure result */
A68_52  UQJAOST;  /* OPERATORS - mode -> union mode */
A68_52  XQJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YQJAOST;  /* YIELD */
A68_52  ZQJAOST;  /* OPERATORS - mode -> union mode */
A68_56  ARJAOST;  /* procedure value */
A68_85  BRJAOST;  /* OPERATORS - istruct -> vector */
 /* line 930: */
SQJAOST = QQJAOST ;
OQJAOST.data[0] = A_UNITE(RQJAOST,mode7,7,SQJAOST);
 /* line 931: */
SFHAOST_current_context(  &TQJAOST );
OQJAOST.data[1] = A_UNITE(UQJAOST,mode7,7,TQJAOST);
 /* line 932: */
YQJAOST = WQJAOST ;
OQJAOST.data[2] = A_UNITE(XQJAOST,mode7,7,YQJAOST);
ARJAOST.fn.fn_global = LRAAOSL_newline;
ARJAOST.nonlocals = A68_NIL;
OQJAOST.data[3] = A_UNITE(ZQJAOST,mode12,12,ARJAOST);
GFBAOSL_put(Ch, A_HISVEC(BRJAOST,OQJAOST,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  PRJAOST_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  QRJAOST;  /* collateral clause result */
A68_52  TRJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  URJAOST;  /* YIELD */
A68_VC  VRJAOST;  /* avoid structure result */
A68_52  WRJAOST;  /* OPERATORS - mode -> union mode */
A68_52  ZRJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ASJAOST;  /* YIELD */
A68_52  BSJAOST;  /* OPERATORS - mode -> union mode */
A68_56  CSJAOST;  /* procedure value */
A68_85  DSJAOST;  /* OPERATORS - istruct -> vector */
 /* line 939: */
URJAOST = SRJAOST ;
QRJAOST.data[0] = A_UNITE(TRJAOST,mode7,7,URJAOST);
 /* line 940: */
SFHAOST_current_context(  &VRJAOST );
QRJAOST.data[1] = A_UNITE(WRJAOST,mode7,7,VRJAOST);
 /* line 941: */
ASJAOST = YRJAOST ;
QRJAOST.data[2] = A_UNITE(ZRJAOST,mode7,7,ASJAOST);
CSJAOST.fn.fn_global = LRAAOSL_newline;
CSJAOST.nonlocals = A68_NIL;
QRJAOST.data[3] = A_UNITE(BSJAOST,mode12,12,CSJAOST);
GFBAOSL_put(Ch, A_HISVEC(DSJAOST,QRJAOST,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  VSJAOST_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_295  WSJAOST;  /* collateral clause result */
A68_INT  ZSJAOST;  /* YIELD */
A68_VC  ATJAOST;  /* avoid structure result */
A68_52  BTJAOST;  /* OPERATORS - mode -> union mode */
A68_52  CTJAOST;  /* OPERATORS - mode -> union mode */
A68_56  DTJAOST;  /* procedure value */
A68_85  ETJAOST;  /* OPERATORS - istruct -> vector */
 /* line 950: */
 /* line 951: */
ZSJAOST = 1 ;
WTFAOST_set_switch( (*(&A_VINDEX(Params,ZSJAOST))), (&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Secret)), YSJAOST, Msg, &ATJAOST );
WSJAOST.data[0] = A_UNITE(BTJAOST,mode7,7,ATJAOST);
DTJAOST.fn.fn_global = LRAAOSL_newline;
DTJAOST.nonlocals = A68_NIL;
WSJAOST.data[1] = A_UNITE(CTJAOST,mode12,12,DTJAOST);
 /* line 952: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ETJAOST,WSJAOST,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  ZTJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_323  AUJAOST;  /* collateral clause result */
A68_52  DUJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  EUJAOST;  /* YIELD */
A68_INT  FUJAOST;  /* YIELD */
A68_52  GUJAOST;  /* OPERATORS - mode -> union mode */
A68_INT  HUJAOST;  /* YIELD */
A68_52  IUJAOST;  /* OPERATORS - mode -> union mode */
A68_56  JUJAOST;  /* procedure value */
A68_85  KUJAOST;  /* OPERATORS - istruct -> vector */
 /* line 966: */
 /* line 967: */
EUJAOST = CUJAOST ;
AUJAOST.data[0] = A_UNITE(DUJAOST,mode7,7,EUJAOST);
 /* line 968: */
FUJAOST = 1 ;
HUJAOST = CKAAOSI_diagnostic_level = KHFAOST_get_int((*(&A_VINDEX(V,FUJAOST))), Msg) ;
AUJAOST.data[1] = A_UNITE(GUJAOST,mode1,1,HUJAOST);
JUJAOST.fn.fn_global = LRAAOSL_newline;
JUJAOST.nonlocals = A68_NIL;
AUJAOST.data[2] = A_UNITE(IUJAOST,mode12,12,JUJAOST);
 /* line 969: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KUJAOST,AUJAOST,3,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  ZUJAOST_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_358  AVJAOST;  /* collateral clause result */
A68_52  DVJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  EVJAOST;  /* YIELD */
A68_52  HVJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IVJAOST;  /* YIELD */
A68_52  JVJAOST;  /* OPERATORS - mode -> union mode */
A68_INT  KVJAOST;  /* YIELD */
A68_52  LVJAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  MVJAOST;  /* YIELD */
A68_52  NVJAOST;  /* OPERATORS - mode -> union mode */
A68_56  OVJAOST;  /* procedure value */
A68_85  PVJAOST;  /* OPERATORS - istruct -> vector */
 /* line 975: */
 /* line 976: */
 /* line 977: */
 /* line 978: */
EVJAOST = CVJAOST ;
AVJAOST.data[0] = A_UNITE(DVJAOST,mode7,7,EVJAOST);
IVJAOST = GVJAOST ;
AVJAOST.data[1] = A_UNITE(HVJAOST,mode7,7,IVJAOST);
 /* line 979: */
KVJAOST = (*(&((&NJGAOST_iostate)->Width))) ;
AVJAOST.data[2] = A_UNITE(JVJAOST,mode1,1,KVJAOST);
MVJAOST = ')' ;
AVJAOST.data[3] = A_UNITE(LVJAOST,mode6,6,MVJAOST);
OVJAOST.fn.fn_global = LRAAOSL_newline;
OVJAOST.nonlocals = A68_NIL;
AVJAOST.data[4] = A_UNITE(NVJAOST,mode12,12,OVJAOST);
GFBAOSL_put(Ch, A_HISVEC(PVJAOST,AVJAOST,5,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  VVJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 981: */
 /* line 982: */
JVGAOST_io_setwidth(ZBHAOST_opt_int(V, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CXJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_VC  DXJAOST;  /* clause result */
A68_INT  EXJAOST;  /* YIELD */
A68_VC  FXJAOST;  /* avoid structure result */
A68_INT  IXJAOST;  /* YIELD */
A68_VC  JXJAOST;  /* avoid structure result */
 /* line 992: */
 /* line 993: */
if ( (V.upb==2) )
{ 
EXJAOST = 2 ;
FPFAOST_get_text( (*(&A_VINDEX(V,EXJAOST))), Msg, &FXJAOST );
DXJAOST = FXJAOST;
} 
else
{ 
DXJAOST = HXJAOST;
} 
 /* line 994: */
 /* line 995: */
IXJAOST = 1 ;
JLFAOST_get_name( (*(&A_VINDEX(V,IXJAOST))), Msg, &JXJAOST );
TOCAOST_set_var(JXJAOST, DXJAOST, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  JYJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_46  MYJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_295  NYJAOST;  /* collateral clause result */
A68_52  QYJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RYJAOST;  /* YIELD */
A68_52  SYJAOST;  /* OPERATORS - mode -> union mode */
A68_56  TYJAOST;  /* procedure value */
A68_85  UYJAOST;  /* OPERATORS - istruct -> vector */
 /* line 1008: */
 /* line 1009: */
if ( FYGAOST_check_syntax )
{ 
 /* line 1010: */
 /* line 1011: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(MYJAOST,LYJAOST,A68_VC )),(WHAAOSI_user, A_HVEC(MYJAOST,LYJAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
GYGAOST_show_parameters = FYGAOST_check_syntax = A68_TRUE;
 /* line 1012: */
WBHAOST_syntaxcheck_context = (*(&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Stack)));
 /* line 1013: */
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
RYJAOST = PYJAOST ;
NYJAOST.data[0] = A_UNITE(QYJAOST,mode7,7,RYJAOST);
TYJAOST.fn.fn_global = LRAAOSL_newline;
TYJAOST.nonlocals = A68_NIL;
NYJAOST.data[1] = A_UNITE(SYJAOST,mode12,12,TYJAOST);
 /* line 1017: */
 /* line 1018: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UYJAOST,NYJAOST,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  NZJAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1025: */
PRGAOST_io_showinput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  GAKAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1033: */
VRGAOST_io_showoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  XAKAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1041: */
 /* line 1042: */
GMEAOST_syntax_help((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals))), KEAAOST_screen, EOAAOSL_nullstr, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  TBKAOST_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1050: */
 /* line 1051: */
TOCAOST_set_var(NBHAOST_showtime_var, GLCAOST_true_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  SBHAOST_anonymous(void)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_INT  ZBHAOST_opt_int(A68_207  V, A68_97  Msg)
{ 
A68_INT  ACHAOST;  /* YIELD */
A68_INT  BCHAOST;  /* clause result */
A68_INT  CCHAOST;  /* YIELD */
A_PROC_ENTRY(opt_int);
 /* line 80: */
ACHAOST = 1 ;
if ( GHFAOST_is_int((*(&A_VINDEX(V,ACHAOST)))) )
{ 
CCHAOST = 1 ;
BCHAOST = KHFAOST_get_int((*(&A_VINDEX(V,CCHAOST))), Msg);
} 
else
{ 
BCHAOST = 0;
} 
A_PROC_EXIT(opt_int);
return( BCHAOST );
} 
#undef NL

A_STATIC A68_VOID  GCHAOST_type_more(A68_BOOL  Reset_paging, A68_117 * F, A68_97  Msg)
{ 
A68_97  KCHAOST_flt;   /* proc value of non-global proc */
A68_292  NCHAOST;  /* collateral clause result */
A68_52  QCHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RCHAOST;  /* YIELD */
A68_VC  SCHAOST;  /* avoid structure result */
A68_52  TCHAOST;  /* OPERATORS - mode -> union mode */
A68_52  WCHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XCHAOST;  /* YIELD */
A68_64  YCHAOST;  /* avoid structure result */
A68_52  ZCHAOST;  /* OPERATORS - mode -> union mode */
A68_85  ADHAOST;  /* OPERATORS - istruct -> vector */
A68_31  CDHAOST_generator;   /* proc value of non-global proc */
A68_VC  IDHAOST;  /* avoid structure result */
A68_VC  HDHAOST_buffer;
A68_INT  JDHAOST_l;
A68_35  KDHAOST;  /* avoid structure result */
A68_35  LDHAOST_r;
A68_VC  MDHAOST;  /* OPERATORS - trim index */
A68_BOOL  NDHAOST;  /* clause result */
A68_VC  ODHAOST;  /* OPERATORS - trim index */
A68_46  RDHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  SDHAOST;  /* clause result */
A_PROC_ENTRY(type_more);
 /* line 83: */
 /* line 84: */
{ 
A_CLOSURE( KCHAOST_flt, LCHAOST_flt, MCHAOST_flt );
(( MCHAOST_flt * ) ( KCHAOST_flt.nonlocals )) -> Reset_paging = Reset_paging;
(( MCHAOST_flt * ) ( KCHAOST_flt.nonlocals )) -> Msg = Msg;
(( MCHAOST_flt * ) ( KCHAOST_flt.nonlocals )) -> F = F;
 /* line 90: */
RCHAOST = PCHAOST ;
NCHAOST.data[0] = A_UNITE(QCHAOST,mode7,7,RCHAOST);
SIBAOST_testmode_file_name( F, &SCHAOST );
NCHAOST.data[1] = A_UNITE(TCHAOST,mode7,7,SCHAOST);
XCHAOST = VCHAOST ;
NCHAOST.data[2] = A_UNITE(WCHAOST,mode7,7,XCHAOST);
HZAAOSL_lines( 2, &YCHAOST );
NCHAOST.data[3] = A_UNITE(ZCHAOST,mode20,20,YCHAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ADHAOST,NCHAOST,4,A68_52 ));
 /* line 91: */
A_CLOSURE( CDHAOST_generator, DDHAOST_generator, EDHAOST_generator );
A_CALLPROC(CDHAOST_generator,(A68_TRUE, &IDHAOST),(A68_TRUE, &IDHAOST,(CDHAOST_generator).nonlocals));
HDHAOST_buffer = IDHAOST;
 /* line 92: */
 /* line 93: */
for ( ;; )
{ 
 /* line 94: */
SOAAOST_flt_if_interrupted(KCHAOST_flt);
 /* line 95: */
SRBAOSI_read_line( F, HDHAOST_buffer, (&JDHAOST_l), KCHAOST_flt, &KDHAOST );
LDHAOST_r = KDHAOST;
 /* line 96: */
 /* line 97: */
if ( PPBAOSI_(LDHAOST_r, DPBAOSI_io_ok) )
{ 
GABAOSL_putstr(KEAAOST_screen, A_VTRIM(MDHAOST,(HDHAOST_buffer),A_VTSCRIPT(&(MDHAOST.upb),(HDHAOST_buffer).upb,1,JDHAOST_l)));
 /* line 98: */
LRAAOSL_newline(KEAAOST_screen);
 /* line 99: */
 /* line 100: */
NDHAOST = A68_TRUE;
} 
else
{ 
 /* line 101: */
if ( PPBAOSI_(LDHAOST_r, GDAAOST_io_partline) )
{ 
GABAOSL_putstr(KEAAOST_screen, A_VTRIM(ODHAOST,(HDHAOST_buffer),A_VTSCRIPT(&(ODHAOST.upb),(HDHAOST_buffer).upb,1,JDHAOST_l)));
 /* line 102: */
 /* line 103: */
NDHAOST = A68_TRUE;
} 
else
{ 
 /* line 104: */
if ( PPBAOSI_(LDHAOST_r, GPBAOSI_io_eof) )
{ 
 /* line 105: */
NDHAOST = A68_FALSE;
} 
else
{ 
A_CALLPROC(KCHAOST_flt,(WHAAOSI_user, A_HVEC(RDHAOST,QDHAOST,A68_VC )),(WHAAOSI_user, A_HVEC(RDHAOST,QDHAOST,A68_VC ),(KCHAOST_flt).nonlocals));
 /* line 106: */
 /* line 107: */
 /* line 108: */
NDHAOST = A68_FALSE;
} 
} 
} 
SDHAOST = NDHAOST;
if ( !SDHAOST ) break;
/*SKIP*/;
}
 /* line 109: */
 /* line 110: */
XQBAOSI_close_file(F, Msg);
} 
A_PROC_EXIT(type_more);
return;
} 
#undef NL

A_STATIC A68_VOID  WDHAOST_set_showtime(A68_191  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A_PROC_ENTRY(set_showtime);
 /* line 114: */
 /* line 115: */
if ( A_VC_EQ(Var.Value,GLCAOST_true_var) )
{ 
 /* line 116: */
BSGAOST_io_showtime(Msg);
} 
else
{ 
 /* line 117: */
ESGAOST_io_dontshowtime(Msg);
} 
A_PROC_EXIT(set_showtime);
return;
} 
#undef NL

A_STATIC A68_VOID  XDHAOST_when(A68_VC  *ReturnedValue)
{ 
A68_VC  YDHAOST;  /* avoid structure result */
A68_VC  ZDHAOST_dt;
A68_VC  AEHAOST;  /* clause result */
A68_VC  BEHAOST;  /* OPERATORS - trim index */
A_PROC_ENTRY(when);
{ 
QDDAOST_date_time( (A68_INT )WZBAOSI_get_time(), &YDHAOST );
ZDHAOST_dt = YDHAOST;
 /* line 123: */
if ( (ZDHAOST_dt.upb==21) )
{ 
AEHAOST = A_VTRIM(BEHAOST,(ZDHAOST_dt),A_VTSCRIPT(&(BEHAOST.upb),(ZDHAOST_dt).upb,1,18));
} 
else
{ 
 /* line 124: */
AEHAOST = ZDHAOST_dt;
} 
} 
A_PROC_EXIT(when);
*ReturnedValue = (AEHAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  CEHAOST_print_configuration(void)
{ 
A68_295  DEHAOST;  /* collateral clause result */
A68_52  GEHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HEHAOST;  /* YIELD */
A68_64  IEHAOST;  /* avoid structure result */
A68_52  JEHAOST;  /* OPERATORS - mode -> union mode */
A68_85  KEHAOST;  /* OPERATORS - istruct -> vector */
A68_36  RFHAOST;  /* procedure value */
A_PROC_ENTRY(print_configuration);
{ 
HEHAOST = FEHAOST ;
DEHAOST.data[0] = A_UNITE(GEHAOST,mode7,7,HEHAOST);
HZAAOSL_lines( 2, &IEHAOST );
DEHAOST.data[1] = A_UNITE(JEHAOST,mode20,20,IEHAOST);
GFBAOSL_put(LEAAOST_out, A_HISVEC(KEHAOST,DEHAOST,2,A68_52 ));
 /* line 131: */
 /* line 148: */
 /* line 149: */
RFHAOST.fn.fn_global = NEHAOST_printer;
RFHAOST.nonlocals = A68_NIL;
JGAALIB_show_a68config(RFHAOST);
} 
A_PROC_EXIT(print_configuration);
return;
} 
#undef NL

A_STATIC A68_VOID  SFHAOST_current_context(A68_VC  *ReturnedValue)
{ 
A68_VC  TFHAOST;  /* clause result */
A_PROC_ENTRY(current_context);
TFHAOST = (*(&((*(&((*(&((*A_CALLPROC(VBHAOST_commandenv,(),((VBHAOST_commandenv).nonlocals)))->Stack)))->Current_context)))->Context)));
A_PROC_EXIT(current_context);
*ReturnedValue = (TFHAOST);
return;
} 
#undef NL

A_STATIC A68_INT  WFHAOST_obey_command(A68_VC  Command, A68_97  Msg)
{ 
A68_97  AGHAOST_new_msg;   /* proc value of non-global proc */
A68_298  FGHAOST;  /* collateral clause result */
A68_46  IGHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JGHAOST;  /* avoid structure result */
A68_INT  KGHAOST_return;
A68_VC  LGHAOST;  /* avoid structure result */
A68_INT  MGHAOST;  /* clause result */
A_PROC_ENTRY(obey_command);
 /* line 156: */
 /* line 157: */
{ 
A_CLOSURE( AGHAOST_new_msg, BGHAOST_new_msg, CGHAOST_new_msg );
(( CGHAOST_new_msg * ) ( AGHAOST_new_msg.nonlocals )) -> Msg = Msg;
 /* line 162: */
if ( (Command.upb==0) )
{ 
FGHAOST.data[0] = EIAAOST_os_string;
FGHAOST.data[1] = HGHAOST;
 /* line 163: */
JBAAOSI_concat( A_HISVEC(IGHAOST,FGHAOST,2,A68_VC ), &JGHAOST );
SNGAOST_banner(JGHAOST);
} 
else
{ 
 /* line 164: */
SNGAOST_banner(Command);
} 
 /* line 165: */
LRAAOSL_newline(KEAAOST_screen);
 /* line 167: */
KGHAOST_return = IACAOSI_execute_os_command(Command, AGHAOST_new_msg);
 /* line 168: */
SFHAOST_current_context(  &LGHAOST );
SNGAOST_banner(LGHAOST);
 /* line 169: */
 /* line 170: */
MGHAOST = KGHAOST_return;
} 
A_PROC_EXIT(obey_command);
return( MGHAOST );
} 
#undef NL

A68_VOID  PGHAOST_add_globals_to_compounds(A68_212  Globals, A68_212  Vec_with_commands)
{ 
A68_300 * RGHAOST_list;
A68_301  TGHAOST_new;   /* proc value of non-global proc */
A68_302  DHHAOST_add;   /* proc value of non-global proc */
A_PROC_ENTRY(add_globals_to_compounds);
 /* line 176: */
 /* line 183: */
{ 
 /* line 184: */
RGHAOST_list = (A68_300 *)A68_NIL;
 /* line 186: */
A_CLOSURE( TGHAOST_new, UGHAOST_new, VGHAOST_new );
(( VGHAOST_new * ) ( TGHAOST_new.nonlocals )) -> RGHAOST_list = (&RGHAOST_list);
 /* line 196: */
A_CLOSURE( DHHAOST_add, EHHAOST_add, FHHAOST_add );
(( FHHAOST_add * ) ( DHHAOST_add.nonlocals )) -> DHHAOST_add = DHHAOST_add;
(( FHHAOST_add * ) ( DHHAOST_add.nonlocals )) -> TGHAOST_new = TGHAOST_new;
(( FHHAOST_add * ) ( DHHAOST_add.nonlocals )) -> Globals = Globals;
 /* line 210: */
 /* line 211: */
A_CALLPROC(DHHAOST_add,(Vec_with_commands),(Vec_with_commands,(DHHAOST_add).nonlocals));
} 
A_PROC_EXIT(add_globals_to_compounds);
return;
} 
#undef NL

A68_INT  PHHAOST_find_command(A68_VC  Name, A68_VC  Abreviation, A68_212  Vec)
{ 
A68_INT  QHHAOST_index;
A68_208 * RHHAOST_command;
A68_INT  SHHAOST;  /* forall loop counter */
A68_208  THHAOST;  /* united object - for case conformity */
A68_209 * UHHAOST_s;
A68_209 * VHHAOST;  /* clause result */
A68_210 * WHHAOST_g;
A68_211 * XHHAOST_c;
A68_209 * YHHAOST_prelude;
A68_BOOL  ZHHAOST;  /* optbool result */
A68_INT  AIHAOST;  /* clause result */
A_PROC_ENTRY(find_command);
 /* line 215: */
 /* line 216: */
{ 
QHHAOST_index = 0;
 /* line 217: */
SHHAOST = Vec.upb -1;
RHHAOST_command = Vec.data;
for (;SHHAOST-- >= 0;
(RHHAOST_command++
) )
{
 /* line 218: */
if ( !(((QHHAOST_index-=1)<0)) ) break;
THHAOST = (*RHHAOST_command) ;
switch ( THHAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE213,MODE197,MODE196,MODE214,MODE204)  */
UHHAOST_s = (THHAOST.data.mode1);
 /* line 219: */
VHHAOST = UHHAOST_s;
break;
case 2: /* REF STRUCT(REF MODE209,REF MODE212)  */
WHHAOST_g = (THHAOST.data.mode2);
 /* line 220: */
VHHAOST = (*(&(WHHAOST_g->Group)));
break;
case 3: /* REF STRUCT(REF MODE209,REF MODE26,REF REF MODE26,REF MODE212,REF MODE212,REF MODE209)  */
XHHAOST_c = (THHAOST.data.mode3);
 /* line 221: */
VHHAOST = (*(&(XHHAOST_c->Prelude)));
break;
default: 
A_IMP_SKIP ;
break;
} 
YHHAOST_prelude = VHHAOST;
 /* line 222: */
ZHHAOST = A_VC_EQ(Name,(*(&(YHHAOST_prelude->Name))));
if ( ZHHAOST )
{ /* line 223: */
ZHHAOST = A_VC_EQ(Abreviation,(*(&(YHHAOST_prelude->Abreviation))));
}
if ( ZHHAOST )
{ 
 /* line 224: */
 /* line 225: */
QHHAOST_index = (-QHHAOST_index);
} 
}
 /* line 226: */
if ( (QHHAOST_index<0) )
{ 
AIHAOST = 0;
} 
else
{ 
 /* line 227: */
AIHAOST = QHHAOST_index;
} 
} 
A_PROC_EXIT(find_command);
return( AIHAOST );
} 
#undef NL

A_STATIC A68_VOID  EIHAOST_withdrawn_proc(A68_VC  Str, A68_200  Param, A68_97  Msg)
{ 
A68_46  FIHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(withdrawn_proc);
 /* line 233: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(FIHAOST,Str,A68_VC )),(WHAAOSI_user, A_HVEC(FIHAOST,Str,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(withdrawn_proc);
return;
} 
#undef NL

A68_209 * JIHAOST_withdrawn(A68_VC  Old, A68_VC  Old_abr, A68_VC  New)
{ 
A68_306  KIHAOST;  /* collateral clause result */
A68_VC  NIHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  OIHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  PIHAOST;  /* avoid structure result */
A68_VC  QIHAOST_new_name;
A68_298  RIHAOST;  /* collateral clause result */
A68_46  WIHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  XIHAOST;  /* avoid structure result */
A68_VC  YIHAOST_message;
A68_209  ZIHAOST;  /* collateral clause result */
A68_VC  AJHAOST;  /* avoid structure result */
A68_VC  BJHAOST;  /* avoid structure result */
A68_216  CJHAOST;  /* avoid structure result */
A68_213  DJHAOST;  /* OPERATORS - mode -> union mode */
A68_214  EJHAOST;  /* OPERATORS - mode -> union mode */
A68_198  FJHAOST;  /* collateral clause result */
A68_199  GJHAOST;  /* procedure value */
A68_204  HJHAOST;  /* OPERATORS - mode -> union mode */
A68_209 * IJHAOST;  /* clause result */
A68_209 * JJHAOST;  /* YIELD */
A_PROC_ENTRY(withdrawn);
 /* line 237: */
 /* line 241: */
{ 
KIHAOST.data[0] = MIHAOST;
KIHAOST.data[1] = New;
KIHAOST.data[2] = A_HVEC(NIHAOST,'\"',A68_CHAR );
JBAAOSI_concat( A_HISVEC(OIHAOST,KIHAOST,3,A68_VC ), &PIHAOST );
QIHAOST_new_name = PIHAOST;
 /* line 242: */
 /* line 243: */
RIHAOST.data[0] = TIHAOST;
if ( (New.upb==0) )
{ 
RIHAOST.data[1] = VIHAOST;
} 
else
{ 
RIHAOST.data[1] = QIHAOST_new_name;
} 
JBAAOSI_concat( A_HISVEC(WIHAOST,RIHAOST,2,A68_VC ), &XIHAOST );
YIHAOST_message = XIHAOST;
 /* line 244: */
 /* line 245: */
ZAAAOSI_makervc( Old, &AJHAOST );
ZIHAOST.Name = AJHAOST;
ZAAAOSI_makervc( Old_abr, &BJHAOST );
ZIHAOST.Abreviation = BJHAOST;
 /* line 246: */
LTAAOST_opt( IOFAOST_text_syntax, &CJHAOST );
ZIHAOST.Parameter = A_UNITE(DJHAOST,mode2,2,CJHAOST);
ZIHAOST.Access = BNDAOST_hiddenaccess;
ZIHAOST.Continuation = ZNDAOST_continue;
 /* line 247: */
ZIHAOST.Help = A_UNITE(EJHAOST,mode1,1,YIHAOST_message);
FJHAOST.Parameter = YIHAOST_message;
 /* line 248: */
GJHAOST.fn.fn_global = EIHAOST_withdrawn_proc;
GJHAOST.nonlocals = A68_NIL;
FJHAOST.Proc = GJHAOST;
 /* line 249: */
ZIHAOST.Command = A_UNITE(HJHAOST,mode1,1,FJHAOST);
JJHAOST = A_HEAP(A68_209 ) ;
(*JJHAOST) = ZIHAOST ;
IJHAOST = JJHAOST;
} 
A_PROC_EXIT(withdrawn);
return( IJHAOST );
} 
#undef NL
 /* line 255: */
 /* line 256: */
 /* line 258: */

A68_VOID  OJHAOST_make_globalcommands(A68_VC  Sysdir_varname, A68_VC  Default_edit_type, A68_149  Printissue, A68_287  Commandenv_proc, A68_212  *ReturnedValue)
{ 
A68_VC  PJHAOST;  /* avoid structure result */
A68_VC  QJHAOST;  /* avoid structure result */
A68_192  TJHAOST;  /* procedure value */
A68_192  UJHAOST;  /* procedure value */
A68_192  VJHAOST;  /* procedure value */
A68_BOOL  WJHAOST_not_failed;
A68_97  ZJHAOST_new_msg;   /* proc value of non-global proc */
A68_VC  DKHAOST;  /* avoid structure result */
A68_VC  EKHAOST_dir;
A68_298  FKHAOST;  /* collateral clause result */
A68_46  IKHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JKHAOST;  /* avoid structure result */
A68_VC  KKHAOST_fname;
A68_117 * LKHAOST_lf;
A68_309  MKHAOST_buffer;
A68_310  NKHAOST;  /* collateral clause result */
A68_VC  OKHAOST;  /* avoid structure result */
A68_52  PKHAOST;  /* OPERATORS - mode -> union mode */
A68_52  SKHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  TKHAOST;  /* YIELD */
A68_154  UKHAOST;  /* avoid structure result */
A68_52  VKHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WKHAOST;  /* YIELD */
A68_62  XKHAOST;  /* avoid structure result */
A68_52  YKHAOST;  /* OPERATORS - mode -> union mode */
A68_52  BLHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  CLHAOST;  /* YIELD */
A68_VC  DLHAOST;  /* avoid structure result */
A68_52  ELHAOST;  /* OPERATORS - mode -> union mode */
A68_52  FLHAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  GLHAOST;  /* YIELD */
A68_62  HLHAOST;  /* avoid structure result */
A68_52  ILHAOST;  /* OPERATORS - mode -> union mode */
A68_154  JLHAOST;  /* avoid structure result */
A68_52  KLHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  LLHAOST;  /* YIELD */
A68_52  OLHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  PLHAOST;  /* YIELD */
A68_154  QLHAOST;  /* avoid structure result */
A68_52  RLHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SLHAOST;  /* YIELD */
A68_52  TLHAOST;  /* OPERATORS - mode -> union mode */
A68_85  ULHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  VLHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  WLHAOST;  /* avoid structure result */
A68_VC  XLHAOST_line;
A68_35  YLHAOST;  /* avoid structure result */
A68_311  LMHAOST_rr;   /* proc value of non-global proc */
A68_176  ANHAOST_pchars;   /* proc value of non-global proc */
A68_386  QNHAOST;  /* collateral clause result */
A68_209  RNHAOST;  /* collateral clause result */
A68_VC  UNHAOST;  /* avoid structure result */
A68_VC  XNHAOST;  /* avoid structure result */
A68_VC  AOHAOST;  /* avoid structure result */
A68_214  BOHAOST;  /* OPERATORS - mode -> union mode */
A68_204  QOHAOST;  /* OPERATORS - mode -> union mode */
A68_206  ROHAOST;  /* YIELD */
A68_206  SOHAOST;  /* procedure value */
A68_209 * TOHAOST;  /* YIELD */
A68_208  UOHAOST;  /* OPERATORS - mode -> union mode */
A68_209  WOHAOST;  /* collateral clause result */
A68_VC  ZOHAOST;  /* avoid structure result */
A68_VC  CPHAOST;  /* avoid structure result */
A68_214  DPHAOST;  /* OPERATORS - mode -> union mode */
A68_204  HPHAOST;  /* OPERATORS - mode -> union mode */
A68_206  IPHAOST;  /* YIELD */
A68_206  JPHAOST;  /* procedure value */
A68_209 * KPHAOST;  /* YIELD */
A68_208  LPHAOST;  /* OPERATORS - mode -> union mode */
A68_212  MPHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NPHAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  PPHAOST;  /* OPERATORS - mode -> union mode */
A68_210 * QPHAOST;  /* YIELD */
A68_209  RPHAOST;  /* collateral clause result */
A68_VC  UPHAOST;  /* avoid structure result */
A68_VC  XPHAOST;  /* avoid structure result */
A68_216  YPHAOST;  /* avoid structure result */
A68_213  ZPHAOST;  /* OPERATORS - mode -> union mode */
A68_VC  CQHAOST;  /* avoid structure result */
A68_214  DQHAOST;  /* OPERATORS - mode -> union mode */
A68_204  KQHAOST;  /* OPERATORS - mode -> union mode */
A68_206  LQHAOST;  /* YIELD */
A68_206  MQHAOST;  /* procedure value */
A68_209 * NQHAOST;  /* YIELD */
A68_208  OQHAOST;  /* OPERATORS - mode -> union mode */
A68_325  QQHAOST;  /* collateral clause result */
A68_209  RQHAOST;  /* collateral clause result */
A68_VC  UQHAOST;  /* avoid structure result */
A68_VC  XQHAOST;  /* avoid structure result */
A68_214  YQHAOST;  /* OPERATORS - mode -> union mode */
A68_204  GRHAOST;  /* OPERATORS - mode -> union mode */
A68_206  HRHAOST;  /* YIELD */
A68_206  IRHAOST;  /* procedure value */
A68_209 * JRHAOST;  /* YIELD */
A68_208  KRHAOST;  /* OPERATORS - mode -> union mode */
A68_209  LRHAOST;  /* collateral clause result */
A68_VC  ORHAOST;  /* avoid structure result */
A68_VC  PRHAOST;  /* avoid structure result */
A68_VC  SRHAOST;  /* avoid structure result */
A68_214  TRHAOST;  /* OPERATORS - mode -> union mode */
A68_204  TSHAOST;  /* OPERATORS - mode -> union mode */
A68_206  USHAOST;  /* YIELD */
A68_206  VSHAOST;  /* procedure value */
A68_209 * WSHAOST;  /* YIELD */
A68_208  XSHAOST;  /* OPERATORS - mode -> union mode */
A68_209  YSHAOST;  /* collateral clause result */
A68_VC  BTHAOST;  /* avoid structure result */
A68_VC  CTHAOST;  /* avoid structure result */
A68_VC  FTHAOST;  /* avoid structure result */
A68_214  GTHAOST;  /* OPERATORS - mode -> union mode */
A68_204  TTHAOST;  /* OPERATORS - mode -> union mode */
A68_206  UTHAOST;  /* YIELD */
A68_206  VTHAOST;  /* procedure value */
A68_209 * WTHAOST;  /* YIELD */
A68_208  XTHAOST;  /* OPERATORS - mode -> union mode */
A68_212  YTHAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ZTHAOST;  /* avoid structure result */
A68_VC  BUHAOST;  /* avoid structure result */
A68_208  CUHAOST;  /* OPERATORS - mode -> union mode */
A68_210 * DUHAOST;  /* YIELD */
A68_336  FUHAOST;  /* collateral clause result */
A68_209  GUHAOST;  /* collateral clause result */
A68_VC  JUHAOST;  /* avoid structure result */
A68_VC  MUHAOST;  /* avoid structure result */
A68_VC  PUHAOST;  /* avoid structure result */
A68_214  QUHAOST;  /* OPERATORS - mode -> union mode */
A68_204  LVHAOST;  /* OPERATORS - mode -> union mode */
A68_206  MVHAOST;  /* YIELD */
A68_206  NVHAOST;  /* procedure value */
A68_209 * OVHAOST;  /* YIELD */
A68_208  PVHAOST;  /* OPERATORS - mode -> union mode */
A68_209  QVHAOST;  /* collateral clause result */
A68_VC  TVHAOST;  /* avoid structure result */
A68_VC  WVHAOST;  /* avoid structure result */
A68_VC  ZVHAOST;  /* avoid structure result */
A68_214  AWHAOST;  /* OPERATORS - mode -> union mode */
A68_204  EWHAOST;  /* OPERATORS - mode -> union mode */
A68_206  FWHAOST;  /* YIELD */
A68_206  GWHAOST;  /* procedure value */
A68_209 * HWHAOST;  /* YIELD */
A68_208  IWHAOST;  /* OPERATORS - mode -> union mode */
A68_209  JWHAOST;  /* collateral clause result */
A68_VC  MWHAOST;  /* avoid structure result */
A68_VC  PWHAOST;  /* avoid structure result */
A68_VC  SWHAOST;  /* avoid structure result */
A68_214  TWHAOST;  /* OPERATORS - mode -> union mode */
A68_204  XWHAOST;  /* OPERATORS - mode -> union mode */
A68_206  YWHAOST;  /* YIELD */
A68_206  ZWHAOST;  /* procedure value */
A68_209 * AXHAOST;  /* YIELD */
A68_208  BXHAOST;  /* OPERATORS - mode -> union mode */
A68_209  CXHAOST;  /* collateral clause result */
A68_VC  FXHAOST;  /* avoid structure result */
A68_VC  IXHAOST;  /* avoid structure result */
A68_VC  LXHAOST;  /* avoid structure result */
A68_214  MXHAOST;  /* OPERATORS - mode -> union mode */
A68_204  YXHAOST;  /* OPERATORS - mode -> union mode */
A68_206  ZXHAOST;  /* YIELD */
A68_206  AYHAOST;  /* procedure value */
A68_209 * BYHAOST;  /* YIELD */
A68_208  CYHAOST;  /* OPERATORS - mode -> union mode */
A68_325  EYHAOST;  /* collateral clause result */
A68_209  FYHAOST;  /* collateral clause result */
A68_VC  IYHAOST;  /* avoid structure result */
A68_VC  LYHAOST;  /* avoid structure result */
A68_VC  OYHAOST;  /* avoid structure result */
A68_214  PYHAOST;  /* OPERATORS - mode -> union mode */
A68_204  TYHAOST;  /* OPERATORS - mode -> union mode */
A68_206  UYHAOST;  /* YIELD */
A68_206  VYHAOST;  /* procedure value */
A68_209 * WYHAOST;  /* YIELD */
A68_208  XYHAOST;  /* OPERATORS - mode -> union mode */
A68_209  YYHAOST;  /* collateral clause result */
A68_VC  BZHAOST;  /* avoid structure result */
A68_VC  EZHAOST;  /* avoid structure result */
A68_VC  HZHAOST;  /* avoid structure result */
A68_214  IZHAOST;  /* OPERATORS - mode -> union mode */
A68_204  MZHAOST;  /* OPERATORS - mode -> union mode */
A68_206  NZHAOST;  /* YIELD */
A68_206  OZHAOST;  /* procedure value */
A68_209 * PZHAOST;  /* YIELD */
A68_208  QZHAOST;  /* OPERATORS - mode -> union mode */
A68_209  RZHAOST;  /* collateral clause result */
A68_VC  UZHAOST;  /* avoid structure result */
A68_VC  VZHAOST;  /* avoid structure result */
A68_306  WZHAOST;  /* collateral clause result */
A68_VC  ZZHAOST;  /* avoid structure result */
A68_46  CAIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  DAIAOST;  /* avoid structure result */
A68_214  EAIAOST;  /* OPERATORS - mode -> union mode */
A68_204  IAIAOST;  /* OPERATORS - mode -> union mode */
A68_206  JAIAOST;  /* YIELD */
A68_206  KAIAOST;  /* procedure value */
A68_209 * LAIAOST;  /* YIELD */
A68_208  MAIAOST;  /* OPERATORS - mode -> union mode */
A68_212  NAIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  OAIAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  QAIAOST;  /* OPERATORS - mode -> union mode */
A68_210 * RAIAOST;  /* YIELD */
A68_209  SAIAOST;  /* collateral clause result */
A68_VC  VAIAOST;  /* avoid structure result */
A68_VC  YAIAOST;  /* avoid structure result */
A68_VC  BBIAOST;  /* avoid structure result */
A68_214  CBIAOST;  /* OPERATORS - mode -> union mode */
A68_204  GBIAOST;  /* OPERATORS - mode -> union mode */
A68_206  HBIAOST;  /* YIELD */
A68_206  IBIAOST;  /* procedure value */
A68_209 * JBIAOST;  /* YIELD */
A68_208  KBIAOST;  /* OPERATORS - mode -> union mode */
A68_212  LBIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  MBIAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  OBIAOST;  /* OPERATORS - mode -> union mode */
A68_210 * PBIAOST;  /* YIELD */
A68_209  QBIAOST;  /* collateral clause result */
A68_VC  TBIAOST;  /* avoid structure result */
A68_VC  WBIAOST;  /* avoid structure result */
A68_306  XBIAOST;  /* collateral clause result */
A68_VC  ACIAOST;  /* avoid structure result */
A68_46  DCIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ECIAOST;  /* avoid structure result */
A68_214  FCIAOST;  /* OPERATORS - mode -> union mode */
A68_204  BDIAOST;  /* OPERATORS - mode -> union mode */
A68_206  CDIAOST;  /* YIELD */
A68_206  DDIAOST;  /* procedure value */
A68_209 * EDIAOST;  /* YIELD */
A68_208  FDIAOST;  /* OPERATORS - mode -> union mode */
A68_209  GDIAOST;  /* collateral clause result */
A68_VC  JDIAOST;  /* avoid structure result */
A68_214  PEIAOST;  /* OPERATORS - mode -> union mode */
A68_215  QEIAOST;  /* YIELD */
A68_215  REIAOST;  /* procedure value */
A68_204  FFIAOST;  /* OPERATORS - mode -> union mode */
A68_206  GFIAOST;  /* YIELD */
A68_206  HFIAOST;  /* procedure value */
A68_209 * IFIAOST;  /* YIELD */
A68_208  JFIAOST;  /* OPERATORS - mode -> union mode */
A68_209  KFIAOST;  /* collateral clause result */
A68_VC  NFIAOST;  /* avoid structure result */
A68_VC  QFIAOST;  /* avoid structure result */
A68_VC  TFIAOST;  /* avoid structure result */
A68_214  UFIAOST;  /* OPERATORS - mode -> union mode */
A68_204  AHIAOST;  /* OPERATORS - mode -> union mode */
A68_206  BHIAOST;  /* YIELD */
A68_206  CHIAOST;  /* procedure value */
A68_209 * DHIAOST;  /* YIELD */
A68_208  EHIAOST;  /* OPERATORS - mode -> union mode */
A68_209  FHIAOST;  /* collateral clause result */
A68_VC  IHIAOST;  /* avoid structure result */
A68_VC  JHIAOST;  /* avoid structure result */
A68_216  KHIAOST;  /* avoid structure result */
A68_213  LHIAOST;  /* OPERATORS - mode -> union mode */
A68_216  MHIAOST;  /* avoid structure result */
A68_213  NHIAOST;  /* OPERATORS - mode -> union mode */
A68_214  JIIAOST;  /* OPERATORS - mode -> union mode */
A68_215  KIIAOST;  /* YIELD */
A68_215  LIIAOST;  /* procedure value */
A68_204  TIIAOST;  /* OPERATORS - mode -> union mode */
A68_206  UIIAOST;  /* YIELD */
A68_206  VIIAOST;  /* procedure value */
A68_209 * WIIAOST;  /* YIELD */
A68_208  XIIAOST;  /* OPERATORS - mode -> union mode */
A68_209  YIIAOST;  /* collateral clause result */
A68_VC  BJIAOST;  /* avoid structure result */
A68_VC  EJIAOST;  /* avoid structure result */
A68_216  FJIAOST;  /* avoid structure result */
A68_213  GJIAOST;  /* OPERATORS - mode -> union mode */
A68_216  HJIAOST;  /* avoid structure result */
A68_213  IJIAOST;  /* OPERATORS - mode -> union mode */
A68_306  JJIAOST;  /* collateral clause result */
A68_VC  MJIAOST;  /* avoid structure result */
A68_46  PJIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  QJIAOST;  /* avoid structure result */
A68_214  RJIAOST;  /* OPERATORS - mode -> union mode */
A68_204  GKIAOST;  /* OPERATORS - mode -> union mode */
A68_206  HKIAOST;  /* YIELD */
A68_206  IKIAOST;  /* procedure value */
A68_209 * JKIAOST;  /* YIELD */
A68_208  KKIAOST;  /* OPERATORS - mode -> union mode */
A68_209  LKIAOST;  /* collateral clause result */
A68_VC  OKIAOST;  /* avoid structure result */
A68_VC  RKIAOST;  /* avoid structure result */
A68_214  SKIAOST;  /* OPERATORS - mode -> union mode */
A68_204  FLIAOST;  /* OPERATORS - mode -> union mode */
A68_206  GLIAOST;  /* YIELD */
A68_206  HLIAOST;  /* procedure value */
A68_209 * ILIAOST;  /* YIELD */
A68_208  JLIAOST;  /* OPERATORS - mode -> union mode */
A68_209  KLIAOST;  /* collateral clause result */
A68_VC  NLIAOST;  /* avoid structure result */
A68_VC  QLIAOST;  /* avoid structure result */
A68_VC  TLIAOST;  /* avoid structure result */
A68_214  ULIAOST;  /* OPERATORS - mode -> union mode */
A68_204  AMIAOST;  /* OPERATORS - mode -> union mode */
A68_206  BMIAOST;  /* YIELD */
A68_206  CMIAOST;  /* procedure value */
A68_209 * DMIAOST;  /* YIELD */
A68_208  EMIAOST;  /* OPERATORS - mode -> union mode */
A68_209  FMIAOST;  /* collateral clause result */
A68_VC  IMIAOST;  /* avoid structure result */
A68_VC  LMIAOST;  /* avoid structure result */
A68_214  MMIAOST;  /* OPERATORS - mode -> union mode */
A68_204  SMIAOST;  /* OPERATORS - mode -> union mode */
A68_206  TMIAOST;  /* YIELD */
A68_206  UMIAOST;  /* procedure value */
A68_209 * VMIAOST;  /* YIELD */
A68_208  WMIAOST;  /* OPERATORS - mode -> union mode */
A68_209  XMIAOST;  /* collateral clause result */
A68_VC  ANIAOST;  /* avoid structure result */
A68_VC  DNIAOST;  /* avoid structure result */
A68_216  ENIAOST;  /* avoid structure result */
A68_213  FNIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  INIAOST;  /* avoid structure result */
A68_214  JNIAOST;  /* OPERATORS - mode -> union mode */
A68_204  QNIAOST;  /* OPERATORS - mode -> union mode */
A68_206  RNIAOST;  /* YIELD */
A68_206  SNIAOST;  /* procedure value */
A68_209 * TNIAOST;  /* YIELD */
A68_208  UNIAOST;  /* OPERATORS - mode -> union mode */
A68_209  VNIAOST;  /* collateral clause result */
A68_VC  YNIAOST;  /* avoid structure result */
A68_VC  BOIAOST;  /* avoid structure result */
A68_VC  EOIAOST;  /* avoid structure result */
A68_214  FOIAOST;  /* OPERATORS - mode -> union mode */
A68_204  ROIAOST;  /* OPERATORS - mode -> union mode */
A68_206  SOIAOST;  /* YIELD */
A68_206  TOIAOST;  /* procedure value */
A68_209 * UOIAOST;  /* YIELD */
A68_208  VOIAOST;  /* OPERATORS - mode -> union mode */
A68_209  WOIAOST;  /* collateral clause result */
A68_VC  ZOIAOST;  /* avoid structure result */
A68_355  APIAOST;  /* collateral clause result */
A68_216  BPIAOST;  /* avoid structure result */
A68_213  CPIAOST;  /* OPERATORS - mode -> union mode */
A68_217  DPIAOST;  /* OPERATORS - istruct -> vector */
A68_216  EPIAOST;  /* avoid structure result */
A68_213  FPIAOST;  /* OPERATORS - mode -> union mode */
A68_358  GPIAOST;  /* collateral clause result */
A68_52  JPIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  KPIAOST;  /* YIELD */
A68_52  LPIAOST;  /* OPERATORS - mode -> union mode */
A68_52  OPIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  PPIAOST;  /* YIELD */
A68_52  QPIAOST;  /* OPERATORS - mode -> union mode */
A68_52  TPIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UPIAOST;  /* YIELD */
A68_85  VPIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  WPIAOST;  /* avoid structure result */
A68_214  XPIAOST;  /* OPERATORS - mode -> union mode */
A68_204  JQIAOST;  /* OPERATORS - mode -> union mode */
A68_206  KQIAOST;  /* YIELD */
A68_206  LQIAOST;  /* procedure value */
A68_209 * MQIAOST;  /* YIELD */
A68_208  NQIAOST;  /* OPERATORS - mode -> union mode */
A68_209  OQIAOST;  /* collateral clause result */
A68_VC  RQIAOST;  /* avoid structure result */
A68_VC  SQIAOST;  /* avoid structure result */
A68_216  TQIAOST;  /* avoid structure result */
A68_213  UQIAOST;  /* OPERATORS - mode -> union mode */
A68_360  VQIAOST;  /* collateral clause result */
A68_VC  YQIAOST;  /* avoid structure result */
A68_VC  FRIAOST;  /* avoid structure result */
A68_46  IRIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JRIAOST;  /* avoid structure result */
A68_214  KRIAOST;  /* OPERATORS - mode -> union mode */
A68_204  PRIAOST;  /* OPERATORS - mode -> union mode */
A68_206  QRIAOST;  /* YIELD */
A68_206  RRIAOST;  /* procedure value */
A68_209 * SRIAOST;  /* YIELD */
A68_208  TRIAOST;  /* OPERATORS - mode -> union mode */
A68_209  URIAOST;  /* collateral clause result */
A68_VC  XRIAOST;  /* avoid structure result */
A68_VC  YRIAOST;  /* avoid structure result */
A68_216  ZRIAOST;  /* avoid structure result */
A68_213  ASIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DSIAOST;  /* avoid structure result */
A68_214  ESIAOST;  /* OPERATORS - mode -> union mode */
A68_204  JSIAOST;  /* OPERATORS - mode -> union mode */
A68_206  KSIAOST;  /* YIELD */
A68_206  LSIAOST;  /* procedure value */
A68_209 * MSIAOST;  /* YIELD */
A68_208  NSIAOST;  /* OPERATORS - mode -> union mode */
A68_209  OSIAOST;  /* collateral clause result */
A68_VC  RSIAOST;  /* avoid structure result */
A68_VC  USIAOST;  /* avoid structure result */
A68_VC  XSIAOST;  /* avoid structure result */
A68_214  YSIAOST;  /* OPERATORS - mode -> union mode */
A68_204  CTIAOST;  /* OPERATORS - mode -> union mode */
A68_206  DTIAOST;  /* YIELD */
A68_206  ETIAOST;  /* procedure value */
A68_209 * FTIAOST;  /* YIELD */
A68_208  GTIAOST;  /* OPERATORS - mode -> union mode */
A68_209  HTIAOST;  /* collateral clause result */
A68_VC  KTIAOST;  /* avoid structure result */
A68_VC  NTIAOST;  /* avoid structure result */
A68_VC  QTIAOST;  /* avoid structure result */
A68_214  RTIAOST;  /* OPERATORS - mode -> union mode */
A68_204  VTIAOST;  /* OPERATORS - mode -> union mode */
A68_206  WTIAOST;  /* YIELD */
A68_206  XTIAOST;  /* procedure value */
A68_209 * YTIAOST;  /* YIELD */
A68_208  ZTIAOST;  /* OPERATORS - mode -> union mode */
A68_209  AUIAOST;  /* collateral clause result */
A68_VC  DUIAOST;  /* avoid structure result */
A68_VC  GUIAOST;  /* avoid structure result */
A68_VC  JUIAOST;  /* avoid structure result */
A68_214  KUIAOST;  /* OPERATORS - mode -> union mode */
A68_204  QUIAOST;  /* OPERATORS - mode -> union mode */
A68_206  RUIAOST;  /* YIELD */
A68_206  SUIAOST;  /* procedure value */
A68_209 * TUIAOST;  /* YIELD */
A68_208  UUIAOST;  /* OPERATORS - mode -> union mode */
A68_363  WUIAOST;  /* collateral clause result */
A68_209  XUIAOST;  /* collateral clause result */
A68_VC  AVIAOST;  /* avoid structure result */
A68_VC  BVIAOST;  /* avoid structure result */
A68_VC  EVIAOST;  /* avoid structure result */
A68_214  FVIAOST;  /* OPERATORS - mode -> union mode */
A68_204  VVIAOST;  /* OPERATORS - mode -> union mode */
A68_206  WVIAOST;  /* YIELD */
A68_206  XVIAOST;  /* procedure value */
A68_209 * YVIAOST;  /* YIELD */
A68_208  ZVIAOST;  /* OPERATORS - mode -> union mode */
A68_209  AWIAOST;  /* collateral clause result */
A68_VC  DWIAOST;  /* avoid structure result */
A68_VC  EWIAOST;  /* avoid structure result */
A68_VC  HWIAOST;  /* avoid structure result */
A68_214  IWIAOST;  /* OPERATORS - mode -> union mode */
A68_204  SWIAOST;  /* OPERATORS - mode -> union mode */
A68_206  TWIAOST;  /* YIELD */
A68_206  UWIAOST;  /* procedure value */
A68_209 * VWIAOST;  /* YIELD */
A68_208  WWIAOST;  /* OPERATORS - mode -> union mode */
A68_212  XWIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  YWIAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  AXIAOST;  /* OPERATORS - mode -> union mode */
A68_210 * BXIAOST;  /* YIELD */
A68_209  CXIAOST;  /* collateral clause result */
A68_VC  FXIAOST;  /* avoid structure result */
A68_216  GXIAOST;  /* avoid structure result */
A68_213  HXIAOST;  /* OPERATORS - mode -> union mode */
A68_VC  KXIAOST;  /* avoid structure result */
A68_214  LXIAOST;  /* OPERATORS - mode -> union mode */
A68_204  PXIAOST;  /* OPERATORS - mode -> union mode */
A68_206  QXIAOST;  /* YIELD */
A68_206  RXIAOST;  /* procedure value */
A68_209 * SXIAOST;  /* YIELD */
A68_208  TXIAOST;  /* OPERATORS - mode -> union mode */
A68_336  VXIAOST;  /* collateral clause result */
A68_209  WXIAOST;  /* collateral clause result */
A68_VC  ZXIAOST;  /* avoid structure result */
A68_VC  CYIAOST;  /* avoid structure result */
A68_298  DYIAOST;  /* collateral clause result */
A68_VC  GYIAOST;  /* avoid structure result */
A68_46  HYIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  IYIAOST;  /* avoid structure result */
A68_214  JYIAOST;  /* OPERATORS - mode -> union mode */
A68_204  NYIAOST;  /* OPERATORS - mode -> union mode */
A68_206  OYIAOST;  /* YIELD */
A68_206  PYIAOST;  /* procedure value */
A68_209 * QYIAOST;  /* YIELD */
A68_208  RYIAOST;  /* OPERATORS - mode -> union mode */
A68_209  SYIAOST;  /* collateral clause result */
A68_VC  VYIAOST;  /* avoid structure result */
A68_VC  YYIAOST;  /* avoid structure result */
A68_298  ZYIAOST;  /* collateral clause result */
A68_VC  CZIAOST;  /* avoid structure result */
A68_46  DZIAOST;  /* OPERATORS - istruct -> vector */
A68_VC  EZIAOST;  /* avoid structure result */
A68_214  FZIAOST;  /* OPERATORS - mode -> union mode */
A68_204  JZIAOST;  /* OPERATORS - mode -> union mode */
A68_206  KZIAOST;  /* YIELD */
A68_206  LZIAOST;  /* procedure value */
A68_209 * MZIAOST;  /* YIELD */
A68_208  NZIAOST;  /* OPERATORS - mode -> union mode */
A68_209  OZIAOST;  /* collateral clause result */
A68_VC  RZIAOST;  /* avoid structure result */
A68_VC  UZIAOST;  /* avoid structure result */
A68_214  VZIAOST;  /* OPERATORS - mode -> union mode */
A68_204  HAJAOST;  /* OPERATORS - mode -> union mode */
A68_206  IAJAOST;  /* YIELD */
A68_206  JAJAOST;  /* procedure value */
A68_209 * KAJAOST;  /* YIELD */
A68_208  LAJAOST;  /* OPERATORS - mode -> union mode */
A68_209  MAJAOST;  /* collateral clause result */
A68_VC  PAJAOST;  /* avoid structure result */
A68_VC  SAJAOST;  /* avoid structure result */
A68_VC  VAJAOST;  /* avoid structure result */
A68_214  WAJAOST;  /* OPERATORS - mode -> union mode */
A68_204  IBJAOST;  /* OPERATORS - mode -> union mode */
A68_206  JBJAOST;  /* YIELD */
A68_206  KBJAOST;  /* procedure value */
A68_209 * LBJAOST;  /* YIELD */
A68_208  MBJAOST;  /* OPERATORS - mode -> union mode */
A68_209  NBJAOST;  /* collateral clause result */
A68_VC  QBJAOST;  /* avoid structure result */
A68_VC  TBJAOST;  /* avoid structure result */
A68_VC  WBJAOST;  /* avoid structure result */
A68_214  XBJAOST;  /* OPERATORS - mode -> union mode */
A68_204  BCJAOST;  /* OPERATORS - mode -> union mode */
A68_206  CCJAOST;  /* YIELD */
A68_206  DCJAOST;  /* procedure value */
A68_209 * ECJAOST;  /* YIELD */
A68_208  FCJAOST;  /* OPERATORS - mode -> union mode */
A68_209  GCJAOST;  /* collateral clause result */
A68_VC  JCJAOST;  /* avoid structure result */
A68_VC  KCJAOST;  /* avoid structure result */
A68_216  LCJAOST;  /* avoid structure result */
A68_213  MCJAOST;  /* OPERATORS - mode -> union mode */
A68_216  NCJAOST;  /* avoid structure result */
A68_213  OCJAOST;  /* OPERATORS - mode -> union mode */
A68_360  PCJAOST;  /* collateral clause result */
A68_VC  SCJAOST;  /* avoid structure result */
A68_VC  VCJAOST;  /* avoid structure result */
A68_VC  YCJAOST;  /* avoid structure result */
A68_VC  BDJAOST;  /* avoid structure result */
A68_VC  CDJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  DDJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  EDJAOST;  /* avoid structure result */
A68_214  FDJAOST;  /* OPERATORS - mode -> union mode */
A68_204  PDJAOST;  /* OPERATORS - mode -> union mode */
A68_206  QDJAOST;  /* YIELD */
A68_206  RDJAOST;  /* procedure value */
A68_209 * SDJAOST;  /* YIELD */
A68_208  TDJAOST;  /* OPERATORS - mode -> union mode */
A68_212  UDJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  VDJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  XDJAOST;  /* OPERATORS - mode -> union mode */
A68_210 * YDJAOST;  /* YIELD */
A68_363  AEJAOST;  /* collateral clause result */
A68_209  BEJAOST;  /* collateral clause result */
A68_VC  EEJAOST;  /* avoid structure result */
A68_214  FEJAOST;  /* OPERATORS - mode -> union mode */
A68_204  SEJAOST;  /* OPERATORS - mode -> union mode */
A68_206  TEJAOST;  /* YIELD */
A68_206  UEJAOST;  /* procedure value */
A68_209 * VEJAOST;  /* YIELD */
A68_208  WEJAOST;  /* OPERATORS - mode -> union mode */
A68_363  YEJAOST;  /* collateral clause result */
A68_209  ZEJAOST;  /* collateral clause result */
A68_VC  AFJAOST;  /* avoid structure result */
A68_214  BFJAOST;  /* OPERATORS - mode -> union mode */
A68_204  JFJAOST;  /* OPERATORS - mode -> union mode */
A68_206  KFJAOST;  /* YIELD */
A68_206  LFJAOST;  /* procedure value */
A68_209 * MFJAOST;  /* YIELD */
A68_208  NFJAOST;  /* OPERATORS - mode -> union mode */
A68_209  OFJAOST;  /* collateral clause result */
A68_VC  RFJAOST;  /* avoid structure result */
A68_214  SFJAOST;  /* OPERATORS - mode -> union mode */
A68_204  XFJAOST;  /* OPERATORS - mode -> union mode */
A68_206  YFJAOST;  /* YIELD */
A68_206  ZFJAOST;  /* procedure value */
A68_209 * AGJAOST;  /* YIELD */
A68_208  BGJAOST;  /* OPERATORS - mode -> union mode */
A68_212  CGJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  EGJAOST;  /* avoid structure result */
A68_208  FGJAOST;  /* OPERATORS - mode -> union mode */
A68_210 * GGJAOST;  /* YIELD */
A68_212  HGJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JGJAOST;  /* avoid structure result */
A68_208  KGJAOST;  /* OPERATORS - mode -> union mode */
A68_210 * LGJAOST;  /* YIELD */
A68_209  MGJAOST;  /* collateral clause result */
A68_VC  PGJAOST;  /* avoid structure result */
A68_VC  SGJAOST;  /* avoid structure result */
A68_VC  VGJAOST;  /* avoid structure result */
A68_214  WGJAOST;  /* OPERATORS - mode -> union mode */
A68_204  AHJAOST;  /* OPERATORS - mode -> union mode */
A68_206  BHJAOST;  /* YIELD */
A68_206  CHJAOST;  /* procedure value */
A68_209 * DHJAOST;  /* YIELD */
A68_208  EHJAOST;  /* OPERATORS - mode -> union mode */
A68_209  FHJAOST;  /* collateral clause result */
A68_VC  IHJAOST;  /* avoid structure result */
A68_VC  LHJAOST;  /* avoid structure result */
A68_214  MHJAOST;  /* OPERATORS - mode -> union mode */
A68_204  WKJAOST;  /* OPERATORS - mode -> union mode */
A68_206  XKJAOST;  /* YIELD */
A68_206  YKJAOST;  /* procedure value */
A68_209 * ZKJAOST;  /* YIELD */
A68_208  ALJAOST;  /* OPERATORS - mode -> union mode */
A68_209  BLJAOST;  /* collateral clause result */
A68_VC  ELJAOST;  /* avoid structure result */
A68_355  FLJAOST;  /* collateral clause result */
A68_217  GLJAOST;  /* OPERATORS - istruct -> vector */
A68_216  HLJAOST;  /* avoid structure result */
A68_213  ILJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  LLJAOST;  /* avoid structure result */
A68_214  MLJAOST;  /* OPERATORS - mode -> union mode */
A68_204  SMJAOST;  /* OPERATORS - mode -> union mode */
A68_206  TMJAOST;  /* YIELD */
A68_206  UMJAOST;  /* procedure value */
A68_209 * VMJAOST;  /* YIELD */
A68_208  WMJAOST;  /* OPERATORS - mode -> union mode */
A68_209  XMJAOST;  /* collateral clause result */
A68_VC  ANJAOST;  /* avoid structure result */
A68_VC  DNJAOST;  /* avoid structure result */
A68_323  ENJAOST;  /* collateral clause result */
A68_52  HNJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  INJAOST;  /* YIELD */
A68_52  JNJAOST;  /* OPERATORS - mode -> union mode */
A68_52  MNJAOST;  /* OPERATORS - mode -> union mode */
A68_VC  NNJAOST;  /* YIELD */
A68_85  ONJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  PNJAOST;  /* avoid structure result */
A68_214  QNJAOST;  /* OPERATORS - mode -> union mode */
A68_204  YNJAOST;  /* OPERATORS - mode -> union mode */
A68_206  ZNJAOST;  /* YIELD */
A68_206  AOJAOST;  /* procedure value */
A68_209 * BOJAOST;  /* YIELD */
A68_208  COJAOST;  /* OPERATORS - mode -> union mode */
A68_209  DOJAOST;  /* collateral clause result */
A68_VC  GOJAOST;  /* avoid structure result */
A68_214  YOJAOST;  /* OPERATORS - mode -> union mode */
A68_215  ZOJAOST;  /* YIELD */
A68_215  APJAOST;  /* procedure value */
A68_204  BPJAOST;  /* OPERATORS - mode -> union mode */
A68_205  CPJAOST;  /* procedure value */
A68_209 * DPJAOST;  /* YIELD */
A68_208  EPJAOST;  /* OPERATORS - mode -> union mode */
A68_209  FPJAOST;  /* collateral clause result */
A68_VC  IPJAOST;  /* avoid structure result */
A68_214  AQJAOST;  /* OPERATORS - mode -> union mode */
A68_215  BQJAOST;  /* YIELD */
A68_215  CQJAOST;  /* procedure value */
A68_204  DQJAOST;  /* OPERATORS - mode -> union mode */
A68_205  EQJAOST;  /* procedure value */
A68_209 * FQJAOST;  /* YIELD */
A68_208  GQJAOST;  /* OPERATORS - mode -> union mode */
A68_209  HQJAOST;  /* collateral clause result */
A68_VC  KQJAOST;  /* avoid structure result */
A68_214  CRJAOST;  /* OPERATORS - mode -> union mode */
A68_215  DRJAOST;  /* YIELD */
A68_215  ERJAOST;  /* procedure value */
A68_204  FRJAOST;  /* OPERATORS - mode -> union mode */
A68_205  GRJAOST;  /* procedure value */
A68_209 * HRJAOST;  /* YIELD */
A68_208  IRJAOST;  /* OPERATORS - mode -> union mode */
A68_209  JRJAOST;  /* collateral clause result */
A68_VC  MRJAOST;  /* avoid structure result */
A68_214  ESJAOST;  /* OPERATORS - mode -> union mode */
A68_215  FSJAOST;  /* YIELD */
A68_215  GSJAOST;  /* procedure value */
A68_204  HSJAOST;  /* OPERATORS - mode -> union mode */
A68_205  ISJAOST;  /* procedure value */
A68_209 * JSJAOST;  /* YIELD */
A68_208  KSJAOST;  /* OPERATORS - mode -> union mode */
A68_209  LSJAOST;  /* collateral clause result */
A68_VC  OSJAOST;  /* avoid structure result */
A68_VC  RSJAOST;  /* avoid structure result */
A68_214  SSJAOST;  /* OPERATORS - mode -> union mode */
A68_204  FTJAOST;  /* OPERATORS - mode -> union mode */
A68_206  GTJAOST;  /* YIELD */
A68_206  HTJAOST;  /* procedure value */
A68_209 * ITJAOST;  /* YIELD */
A68_208  JTJAOST;  /* OPERATORS - mode -> union mode */
A68_325  LTJAOST;  /* collateral clause result */
A68_209  MTJAOST;  /* collateral clause result */
A68_VC  PTJAOST;  /* avoid structure result */
A68_VC  STJAOST;  /* avoid structure result */
A68_VC  VTJAOST;  /* avoid structure result */
A68_214  WTJAOST;  /* OPERATORS - mode -> union mode */
A68_204  LUJAOST;  /* OPERATORS - mode -> union mode */
A68_206  MUJAOST;  /* YIELD */
A68_206  NUJAOST;  /* procedure value */
A68_209 * OUJAOST;  /* YIELD */
A68_208  PUJAOST;  /* OPERATORS - mode -> union mode */
A68_209  QUJAOST;  /* collateral clause result */
A68_VC  TUJAOST;  /* avoid structure result */
A68_VC  UUJAOST;  /* avoid structure result */
A68_216  VUJAOST;  /* avoid structure result */
A68_213  WUJAOST;  /* OPERATORS - mode -> union mode */
A68_214  QVJAOST;  /* OPERATORS - mode -> union mode */
A68_215  RVJAOST;  /* YIELD */
A68_215  SVJAOST;  /* procedure value */
A68_204  WVJAOST;  /* OPERATORS - mode -> union mode */
A68_206  XVJAOST;  /* YIELD */
A68_206  YVJAOST;  /* procedure value */
A68_209 * ZVJAOST;  /* YIELD */
A68_208  AWJAOST;  /* OPERATORS - mode -> union mode */
A68_209  BWJAOST;  /* collateral clause result */
A68_VC  EWJAOST;  /* avoid structure result */
A68_VC  FWJAOST;  /* avoid structure result */
A68_355  GWJAOST;  /* collateral clause result */
A68_216  HWJAOST;  /* avoid structure result */
A68_213  IWJAOST;  /* OPERATORS - mode -> union mode */
A68_217  JWJAOST;  /* OPERATORS - istruct -> vector */
A68_216  KWJAOST;  /* avoid structure result */
A68_213  LWJAOST;  /* OPERATORS - mode -> union mode */
A68_381  MWJAOST;  /* collateral clause result */
A68_VC  PWJAOST;  /* avoid structure result */
A68_VC  SWJAOST;  /* avoid structure result */
A68_VC  VWJAOST;  /* avoid structure result */
A68_VC  WWJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  XWJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  YWJAOST;  /* avoid structure result */
A68_214  ZWJAOST;  /* OPERATORS - mode -> union mode */
A68_204  KXJAOST;  /* OPERATORS - mode -> union mode */
A68_206  LXJAOST;  /* YIELD */
A68_206  MXJAOST;  /* procedure value */
A68_209 * NXJAOST;  /* YIELD */
A68_208  OXJAOST;  /* OPERATORS - mode -> union mode */
A68_212  PXJAOST;  /* OPERATORS - istruct -> vector */
A68_VC  QXJAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  SXJAOST;  /* OPERATORS - mode -> union mode */
A68_210 * TXJAOST;  /* YIELD */
A68_385  VXJAOST;  /* collateral clause result */
A68_209  WXJAOST;  /* collateral clause result */
A68_VC  ZXJAOST;  /* avoid structure result */
A68_VC  CYJAOST;  /* avoid structure result */
A68_VC  FYJAOST;  /* avoid structure result */
A68_214  GYJAOST;  /* OPERATORS - mode -> union mode */
A68_204  VYJAOST;  /* OPERATORS - mode -> union mode */
A68_206  WYJAOST;  /* YIELD */
A68_206  XYJAOST;  /* procedure value */
A68_209 * YYJAOST;  /* YIELD */
A68_208  ZYJAOST;  /* OPERATORS - mode -> union mode */
A68_209  AZJAOST;  /* collateral clause result */
A68_VC  DZJAOST;  /* avoid structure result */
A68_VC  GZJAOST;  /* avoid structure result */
A68_VC  JZJAOST;  /* avoid structure result */
A68_214  KZJAOST;  /* OPERATORS - mode -> union mode */
A68_204  OZJAOST;  /* OPERATORS - mode -> union mode */
A68_206  PZJAOST;  /* YIELD */
A68_206  QZJAOST;  /* procedure value */
A68_209 * RZJAOST;  /* YIELD */
A68_208  SZJAOST;  /* OPERATORS - mode -> union mode */
A68_209  TZJAOST;  /* collateral clause result */
A68_VC  WZJAOST;  /* avoid structure result */
A68_VC  ZZJAOST;  /* avoid structure result */
A68_VC  CAKAOST;  /* avoid structure result */
A68_214  DAKAOST;  /* OPERATORS - mode -> union mode */
A68_204  HAKAOST;  /* OPERATORS - mode -> union mode */
A68_206  IAKAOST;  /* YIELD */
A68_206  JAKAOST;  /* procedure value */
A68_209 * KAKAOST;  /* YIELD */
A68_208  LAKAOST;  /* OPERATORS - mode -> union mode */
A68_209  MAKAOST;  /* collateral clause result */
A68_VC  PAKAOST;  /* avoid structure result */
A68_VC  QAKAOST;  /* avoid structure result */
A68_VC  TAKAOST;  /* avoid structure result */
A68_214  UAKAOST;  /* OPERATORS - mode -> union mode */
A68_204  YAKAOST;  /* OPERATORS - mode -> union mode */
A68_206  ZAKAOST;  /* YIELD */
A68_206  ABKAOST;  /* procedure value */
A68_209 * BBKAOST;  /* YIELD */
A68_208  CBKAOST;  /* OPERATORS - mode -> union mode */
A68_209  DBKAOST;  /* collateral clause result */
A68_VC  GBKAOST;  /* avoid structure result */
A68_VC  HBKAOST;  /* avoid structure result */
A68_306  IBKAOST;  /* collateral clause result */
A68_VC  LBKAOST;  /* avoid structure result */
A68_46  OBKAOST;  /* OPERATORS - istruct -> vector */
A68_VC  PBKAOST;  /* avoid structure result */
A68_214  QBKAOST;  /* OPERATORS - mode -> union mode */
A68_204  UBKAOST;  /* OPERATORS - mode -> union mode */
A68_206  VBKAOST;  /* YIELD */
A68_206  WBKAOST;  /* procedure value */
A68_209 * XBKAOST;  /* YIELD */
A68_208  YBKAOST;  /* OPERATORS - mode -> union mode */
A68_212  ZBKAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ACKAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  CCKAOST;  /* OPERATORS - mode -> union mode */
A68_210 * DCKAOST;  /* YIELD */
A68_212  ECKAOST;  /* clause result */
A68_212  FCKAOST;  /* OPERATORS - istruct -> vector */
A68_212  GCKAOST;  /* avoid structure result */
A_PROC_ENTRY(make_globalcommands);
 /* line 259: */
 /* line 262: */
{ 
ZAAAOSI_makervc( Default_edit_type, &PJHAOST );
OBHAOST_edit_type = PJHAOST;
 /* line 263: */
ZAAAOSI_makervc( Sysdir_varname, &QJHAOST );
QBHAOST_sysdir_var = QJHAOST;
 /* line 264: */
TBHAOST_print_issue = Printissue;
 /* line 265: */
VBHAOST_commandenv = Commandenv_proc;
 /* line 269: */
TJHAOST.fn.fn_global = LMCAOST_default_set_var;
TJHAOST.nonlocals = A68_NIL;
QLCAOST_add_var(KBHAOST_edit_var, SJHAOST, ZKCAOST_str_var, TJHAOST);
 /* line 270: */
UJHAOST.fn.fn_global = WDHAOST_set_showtime;
UJHAOST.nonlocals = A68_NIL;
QLCAOST_add_var(NBHAOST_showtime_var, JLCAOST_false_var, ALCAOST_bool_var, UJHAOST);
 /* line 271: */
VJHAOST.fn.fn_global = HMCAOST_null_set_var;
VJHAOST.nonlocals = A68_NIL;
QLCAOST_add_var(QBHAOST_sysdir_var, QBHAOST_sysdir_var, YKCAOST_env_var, VJHAOST);
 /* line 275: */
WJHAOST_not_failed = A68_TRUE;
 /* line 276: */
A_CLOSURE( ZJHAOST_new_msg, AKHAOST_new_msg, BKHAOST_new_msg );
(( BKHAOST_new_msg * ) ( ZJHAOST_new_msg.nonlocals )) -> WJHAOST_not_failed = (&WJHAOST_not_failed);
 /* line 279: */
FNCAOST_get_var( QBHAOST_sysdir_var, &DKHAOST );
EKHAOST_dir = DKHAOST;
 /* line 280: */
FKHAOST.data[0] = EKHAOST_dir;
FKHAOST.data[1] = HKHAOST;
JBAAOSI_concat( A_HISVEC(IKHAOST,FKHAOST,2,A68_VC ), &JKHAOST );
KKHAOST_fname = JKHAOST;
 /* line 281: */
LKHAOST_lf = FQBAOSI_open_file(KKHAOST_fname, XNBAOSI_append_access, ZJHAOST_new_msg);
 /* line 282: */
 /* line 283: */
XDHAOST_when(  &OKHAOST );
NKHAOST.data[0] = A_UNITE(PKHAOST,mode7,7,OKHAOST);
TKHAOST = RKHAOST ;
NKHAOST.data[1] = A_UNITE(SKHAOST,mode7,7,TKHAOST);
WEAAOST_version(  &UKHAOST );
WKHAOST = UKHAOST.Name ;
NKHAOST.data[2] = A_UNITE(VKHAOST,mode7,7,WKHAOST);
XYAAOSL_after( 36, &XKHAOST );
NKHAOST.data[3] = A_UNITE(YKHAOST,mode18,18,XKHAOST);
 /* line 284: */
CLHAOST = ALHAOST ;
NKHAOST.data[4] = A_UNITE(BLHAOST,mode7,7,CLHAOST);
BBCAOSI_get_login_name(  &DLHAOST );
NKHAOST.data[5] = A_UNITE(ELHAOST,mode7,7,DLHAOST);
GLHAOST = ']' ;
NKHAOST.data[6] = A_UNITE(FLHAOST,mode6,6,GLHAOST);
XYAAOSL_after( 54, &HLHAOST );
NKHAOST.data[7] = A_UNITE(ILHAOST,mode18,18,HLHAOST);
 /* line 285: */
WEAAOST_version(  &JLHAOST );
LLHAOST = JLHAOST.Date ;
NKHAOST.data[8] = A_UNITE(KLHAOST,mode7,7,LLHAOST);
PLHAOST = NLHAOST ;
NKHAOST.data[9] = A_UNITE(OLHAOST,mode7,7,PLHAOST);
WEAAOST_version(  &QLHAOST );
SLHAOST = QLHAOST.Version ;
NKHAOST.data[10] = A_UNITE(RLHAOST,mode7,7,SLHAOST);
NKHAOST.data[11] = A_UNITE(TLHAOST,mode6,6,VPBAOSI_newline_char);
FJBAOSL_putb( A_ISVEC(VLHAOST,(&MKHAOST_buffer),600,A68_CHAR ), A_HISVEC(ULHAOST,NKHAOST,12,A68_52 ), &WLHAOST );
XLHAOST_line = WLHAOST;
 /* line 286: */
 /* line 287: */
if ( WJHAOST_not_failed )
{ 
JSBAOSI_write_buffer( LKHAOST_lf, XLHAOST_line, ZJHAOST_new_msg, &YLHAOST );
YLHAOST;
 /* line 288: */
 /* line 289: */
XQBAOSI_close_file(LKHAOST_lf, ZJHAOST_new_msg);
} 
 /* line 294: */
 /* line 301: */
 /* line 303: */
A_CLOSURE( LMHAOST_rr, MMHAOST_rr, NMHAOST_rr );
 /* line 317: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
A_CLOSURE( ANHAOST_pchars, BNHAOST_pchars, CNHAOST_pchars );
(( CNHAOST_pchars * ) ( ANHAOST_pchars.nonlocals )) -> LMHAOST_rr = LMHAOST_rr;
 /* line 329: */
 /* line 331: */
 /* line 332: */
ZAAAOSI_makervc( TNHAOST, &UNHAOST );
RNHAOST.Name = UNHAOST;
 /* line 333: */
ZAAAOSI_makervc( WNHAOST, &XNHAOST );
RNHAOST.Abreviation = XNHAOST;
RNHAOST.Parameter = SRAAOST_noparameters;
RNHAOST.Access = XMDAOST_normalaccess;
 /* line 335: */
RNHAOST.Continuation = ZNDAOST_continue;
 /* line 336: */
 /* line 337: */
 /* line 338: */
 /* line 339: */
ZAAAOSI_makervc( ZNHAOST, &AOHAOST );
RNHAOST.Help = A_UNITE(BOHAOST,mode1,1,AOHAOST);
SOHAOST.fn.fn_global = EOHAOST_anonymous;
SOHAOST.nonlocals = A68_NIL;
ROHAOST = SOHAOST ;
RNHAOST.Command = A_UNITE(QOHAOST,mode3,3,ROHAOST);
 /* line 352: */
TOHAOST = A_HEAP(A68_209 ) ;
(*TOHAOST) = RNHAOST ;
QNHAOST.data[0] = A_UNITE(UOHAOST,mode1,1,TOHAOST);
 /* line 353: */
 /* line 354: */
ZAAAOSI_makervc( YOHAOST, &ZOHAOST );
WOHAOST.Name = ZOHAOST;
 /* line 355: */
WOHAOST.Abreviation = EOAAOSL_nullstr;
WOHAOST.Parameter = SRAAOST_noparameters;
WOHAOST.Access = XMDAOST_normalaccess;
 /* line 357: */
WOHAOST.Continuation = ZNDAOST_continue;
 /* line 358: */
ZAAAOSI_makervc( BPHAOST, &CPHAOST );
WOHAOST.Help = A_UNITE(DPHAOST,mode1,1,CPHAOST);
 /* line 360: */
JPHAOST.fn.fn_global = GPHAOST_anonymous;
JPHAOST.nonlocals = A68_NIL;
IPHAOST = JPHAOST ;
WOHAOST.Command = A_UNITE(HPHAOST,mode3,3,IPHAOST);
 /* line 362: */
KPHAOST = A_HEAP(A68_209 ) ;
(*KPHAOST) = WOHAOST ;
QPHAOST = NSDAOST_make_group(OPHAOST, A_HVEC(NPHAOST,'C',A68_CHAR ), XMDAOST_normalaccess, A_HVEC(MPHAOST,A_UNITE(LPHAOST,mode1,1,KPHAOST),A68_208 )) ;
QNHAOST.data[1] = A_UNITE(PPHAOST,mode2,2,QPHAOST);
 /* line 363: */
ZAAAOSI_makervc( TPHAOST, &UPHAOST );
RPHAOST.Name = UPHAOST;
 /* line 364: */
ZAAAOSI_makervc( WPHAOST, &XPHAOST );
RPHAOST.Abreviation = XPHAOST;
LTAAOST_opt( IOFAOST_text_syntax, &YPHAOST );
RPHAOST.Parameter = A_UNITE(ZPHAOST,mode2,2,YPHAOST);
RPHAOST.Access = XMDAOST_normalaccess;
 /* line 366: */
RPHAOST.Continuation = ZNDAOST_continue;
 /* line 367: */
ZAAAOSI_makervc( BQHAOST, &CQHAOST );
RPHAOST.Help = A_UNITE(DQHAOST,mode1,1,CQHAOST);
MQHAOST.fn.fn_global = GQHAOST_anonymous;
MQHAOST.nonlocals = A68_NIL;
LQHAOST = MQHAOST ;
RPHAOST.Command = A_UNITE(KQHAOST,mode3,3,LQHAOST);
 /* line 372: */
NQHAOST = A_HEAP(A68_209 ) ;
(*NQHAOST) = RPHAOST ;
QNHAOST.data[2] = A_UNITE(OQHAOST,mode1,1,NQHAOST);
 /* line 373: */
 /* line 374: */
ZAAAOSI_makervc( TQHAOST, &UQHAOST );
RQHAOST.Name = UQHAOST;
RQHAOST.Abreviation = YNAAOSL_nilstr;
 /* line 375: */
RQHAOST.Parameter = DTFAOST_switch_syntax;
RQHAOST.Access = RNDAOST_secretprivateaccess;
 /* line 377: */
RQHAOST.Continuation = ZNDAOST_continue;
 /* line 378: */
ZAAAOSI_makervc( WQHAOST, &XQHAOST );
RQHAOST.Help = A_UNITE(YQHAOST,mode1,1,XQHAOST);
IRHAOST.fn.fn_global = BRHAOST_anonymous;
IRHAOST.nonlocals = A68_NIL;
HRHAOST = IRHAOST ;
RQHAOST.Command = A_UNITE(GRHAOST,mode3,3,HRHAOST);
 /* line 382: */
JRHAOST = A_HEAP(A68_209 ) ;
(*JRHAOST) = RQHAOST ;
QQHAOST.data[0] = A_UNITE(KRHAOST,mode1,1,JRHAOST);
 /* line 383: */
ZAAAOSI_makervc( NRHAOST, &ORHAOST );
LRHAOST.Name = ORHAOST;
NAAAOSI_makervc( 'H', &PRHAOST );
LRHAOST.Abreviation = PRHAOST;
 /* line 384: */
LRHAOST.Parameter = AHFAOST_int_syntax;
LRHAOST.Access = RNDAOST_secretprivateaccess;
 /* line 386: */
LRHAOST.Continuation = ZNDAOST_continue;
 /* line 387: */
ZAAAOSI_makervc( RRHAOST, &SRHAOST );
LRHAOST.Help = A_UNITE(TRHAOST,mode1,1,SRHAOST);
VSHAOST.fn.fn_global = WRHAOST_anonymous;
VSHAOST.nonlocals = A68_NIL;
USHAOST = VSHAOST ;
LRHAOST.Command = A_UNITE(TSHAOST,mode3,3,USHAOST);
 /* line 402: */
WSHAOST = A_HEAP(A68_209 ) ;
(*WSHAOST) = LRHAOST ;
QQHAOST.data[1] = A_UNITE(XSHAOST,mode1,1,WSHAOST);
 /* line 403: */
ZAAAOSI_makervc( ATHAOST, &BTHAOST );
YSHAOST.Name = BTHAOST;
NAAAOSI_makervc( 'R', &CTHAOST );
YSHAOST.Abreviation = CTHAOST;
 /* line 404: */
YSHAOST.Parameter = DTFAOST_switch_syntax;
YSHAOST.Access = RNDAOST_secretprivateaccess;
 /* line 405: */
YSHAOST.Continuation = ZNDAOST_continue;
 /* line 406: */
ZAAAOSI_makervc( ETHAOST, &FTHAOST );
YSHAOST.Help = A_UNITE(GTHAOST,mode1,1,FTHAOST);
 /* line 410: */
VTHAOST.fn.fn_global = JTHAOST_anonymous;
VTHAOST.nonlocals = A68_NIL;
UTHAOST = VTHAOST ;
YSHAOST.Command = A_UNITE(TTHAOST,mode3,3,UTHAOST);
 /* line 411: */
WTHAOST = A_HEAP(A68_209 ) ;
(*WTHAOST) = YSHAOST ;
QQHAOST.data[2] = A_UNITE(XTHAOST,mode1,1,WTHAOST);
 /* line 414: */
NAAAOSI_makervc( 'D', &ZTHAOST );
ZAAAOSI_makervc( AUHAOST, &BUHAOST );
DUHAOST = NSDAOST_make_group(BUHAOST, ZTHAOST, RNDAOST_secretprivateaccess, A_HISVEC(YTHAOST,QQHAOST,3,A68_208 )) ;
QNHAOST.data[3] = A_UNITE(CUHAOST,mode2,2,DUHAOST);
 /* line 415: */
 /* line 416: */
ZAAAOSI_makervc( IUHAOST, &JUHAOST );
GUHAOST.Name = JUHAOST;
 /* line 417: */
ZAAAOSI_makervc( LUHAOST, &MUHAOST );
GUHAOST.Abreviation = MUHAOST;
GUHAOST.Parameter = SRAAOST_noparameters;
GUHAOST.Access = XMDAOST_normalaccess;
 /* line 418: */
GUHAOST.Continuation = ZNDAOST_continue;
 /* line 419: */
ZAAAOSI_makervc( OUHAOST, &PUHAOST );
GUHAOST.Help = A_UNITE(QUHAOST,mode1,1,PUHAOST);
NVHAOST.fn.fn_global = TUHAOST_anonymous;
NVHAOST.nonlocals = A68_NIL;
MVHAOST = NVHAOST ;
GUHAOST.Command = A_UNITE(LVHAOST,mode3,3,MVHAOST);
 /* line 433: */
OVHAOST = A_HEAP(A68_209 ) ;
(*OVHAOST) = GUHAOST ;
FUHAOST.data[0] = A_UNITE(PVHAOST,mode1,1,OVHAOST);
 /* line 434: */
ZAAAOSI_makervc( SVHAOST, &TVHAOST );
QVHAOST.Name = TVHAOST;
 /* line 435: */
ZAAAOSI_makervc( VVHAOST, &WVHAOST );
QVHAOST.Abreviation = WVHAOST;
QVHAOST.Parameter = SRAAOST_noparameters;
QVHAOST.Access = XMDAOST_normalaccess;
 /* line 436: */
QVHAOST.Continuation = ZNDAOST_continue;
 /* line 437: */
ZAAAOSI_makervc( YVHAOST, &ZVHAOST );
QVHAOST.Help = A_UNITE(AWHAOST,mode1,1,ZVHAOST);
GWHAOST.fn.fn_global = DWHAOST_anonymous;
GWHAOST.nonlocals = A68_NIL;
FWHAOST = GWHAOST ;
QVHAOST.Command = A_UNITE(EWHAOST,mode3,3,FWHAOST);
 /* line 440: */
HWHAOST = A_HEAP(A68_209 ) ;
(*HWHAOST) = QVHAOST ;
FUHAOST.data[1] = A_UNITE(IWHAOST,mode1,1,HWHAOST);
 /* line 441: */
ZAAAOSI_makervc( LWHAOST, &MWHAOST );
JWHAOST.Name = MWHAOST;
 /* line 442: */
ZAAAOSI_makervc( OWHAOST, &PWHAOST );
JWHAOST.Abreviation = PWHAOST;
JWHAOST.Parameter = SRAAOST_noparameters;
JWHAOST.Access = XMDAOST_normalaccess;
 /* line 444: */
JWHAOST.Continuation = ZNDAOST_continue;
 /* line 445: */
ZAAAOSI_makervc( RWHAOST, &SWHAOST );
JWHAOST.Help = A_UNITE(TWHAOST,mode1,1,SWHAOST);
ZWHAOST.fn.fn_global = WWHAOST_anonymous;
ZWHAOST.nonlocals = A68_NIL;
YWHAOST = ZWHAOST ;
JWHAOST.Command = A_UNITE(XWHAOST,mode3,3,YWHAOST);
 /* line 448: */
AXHAOST = A_HEAP(A68_209 ) ;
(*AXHAOST) = JWHAOST ;
FUHAOST.data[2] = A_UNITE(BXHAOST,mode1,1,AXHAOST);
 /* line 449: */
ZAAAOSI_makervc( EXHAOST, &FXHAOST );
CXHAOST.Name = FXHAOST;
 /* line 450: */
ZAAAOSI_makervc( HXHAOST, &IXHAOST );
CXHAOST.Abreviation = IXHAOST;
CXHAOST.Parameter = SRAAOST_noparameters;
CXHAOST.Access = BNDAOST_hiddenaccess;
 /* line 451: */
CXHAOST.Continuation = ZNDAOST_continue;
 /* line 452: */
ZAAAOSI_makervc( KXHAOST, &LXHAOST );
CXHAOST.Help = A_UNITE(MXHAOST,mode1,1,LXHAOST);
AYHAOST.fn.fn_global = PXHAOST_anonymous;
AYHAOST.nonlocals = A68_NIL;
ZXHAOST = AYHAOST ;
CXHAOST.Command = A_UNITE(YXHAOST,mode3,3,ZXHAOST);
 /* line 459: */
BYHAOST = A_HEAP(A68_209 ) ;
(*BYHAOST) = CXHAOST ;
FUHAOST.data[3] = A_UNITE(CYHAOST,mode1,1,BYHAOST);
 /* line 460: */
 /* line 461: */
ZAAAOSI_makervc( HYHAOST, &IYHAOST );
FYHAOST.Name = IYHAOST;
 /* line 462: */
ZAAAOSI_makervc( KYHAOST, &LYHAOST );
FYHAOST.Abreviation = LYHAOST;
FYHAOST.Parameter = SRAAOST_noparameters;
FYHAOST.Access = XMDAOST_normalaccess;
 /* line 463: */
FYHAOST.Continuation = ZNDAOST_continue;
 /* line 464: */
ZAAAOSI_makervc( NYHAOST, &OYHAOST );
FYHAOST.Help = A_UNITE(PYHAOST,mode1,1,OYHAOST);
VYHAOST.fn.fn_global = SYHAOST_anonymous;
VYHAOST.nonlocals = A68_NIL;
UYHAOST = VYHAOST ;
FYHAOST.Command = A_UNITE(TYHAOST,mode3,3,UYHAOST);
 /* line 468: */
WYHAOST = A_HEAP(A68_209 ) ;
(*WYHAOST) = FYHAOST ;
EYHAOST.data[0] = A_UNITE(XYHAOST,mode1,1,WYHAOST);
 /* line 469: */
ZAAAOSI_makervc( AZHAOST, &BZHAOST );
YYHAOST.Name = BZHAOST;
 /* line 470: */
ZAAAOSI_makervc( DZHAOST, &EZHAOST );
YYHAOST.Abreviation = EZHAOST;
YYHAOST.Parameter = SRAAOST_noparameters;
YYHAOST.Access = XMDAOST_normalaccess;
 /* line 472: */
YYHAOST.Continuation = ZNDAOST_continue;
 /* line 473: */
ZAAAOSI_makervc( GZHAOST, &HZHAOST );
YYHAOST.Help = A_UNITE(IZHAOST,mode1,1,HZHAOST);
OZHAOST.fn.fn_global = LZHAOST_anonymous;
OZHAOST.nonlocals = A68_NIL;
NZHAOST = OZHAOST ;
YYHAOST.Command = A_UNITE(MZHAOST,mode3,3,NZHAOST);
 /* line 477: */
PZHAOST = A_HEAP(A68_209 ) ;
(*PZHAOST) = YYHAOST ;
EYHAOST.data[1] = A_UNITE(QZHAOST,mode1,1,PZHAOST);
 /* line 478: */
ZAAAOSI_makervc( TZHAOST, &UZHAOST );
RZHAOST.Name = UZHAOST;
 /* line 479: */
NAAAOSI_makervc( 'T', &VZHAOST );
RZHAOST.Abreviation = VZHAOST;
RZHAOST.Parameter = SRAAOST_noparameters;
RZHAOST.Access = XMDAOST_normalaccess;
 /* line 480: */
RZHAOST.Continuation = ZNDAOST_continue;
 /* line 481: */
WZHAOST.data[0] = YZHAOST;
UEAAOST_facility(  &ZZHAOST );
WZHAOST.data[1] = ZZHAOST;
WZHAOST.data[2] = BAIAOST;
 /* line 482: */
JBAAOSI_concat( A_HISVEC(CAIAOST,WZHAOST,3,A68_VC ), &DAIAOST );
RZHAOST.Help = A_UNITE(EAIAOST,mode1,1,DAIAOST);
 /* line 485: */
KAIAOST.fn.fn_global = HAIAOST_anonymous;
KAIAOST.nonlocals = A68_NIL;
JAIAOST = KAIAOST ;
RZHAOST.Command = A_UNITE(IAIAOST,mode3,3,JAIAOST);
 /* line 486: */
LAIAOST = A_HEAP(A68_209 ) ;
(*LAIAOST) = RZHAOST ;
EYHAOST.data[2] = A_UNITE(MAIAOST,mode1,1,LAIAOST);
 /* line 488: */
RAIAOST = NSDAOST_make_group(PAIAOST, A_HVEC(OAIAOST,'S',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(NAIAOST,EYHAOST,3,A68_208 )) ;
FUHAOST.data[4] = A_UNITE(QAIAOST,mode2,2,RAIAOST);
 /* line 489: */
ZAAAOSI_makervc( UAIAOST, &VAIAOST );
SAIAOST.Name = VAIAOST;
 /* line 490: */
ZAAAOSI_makervc( XAIAOST, &YAIAOST );
SAIAOST.Abreviation = YAIAOST;
SAIAOST.Parameter = SRAAOST_noparameters;
SAIAOST.Access = XMDAOST_normalaccess;
 /* line 491: */
SAIAOST.Continuation = ZNDAOST_continue;
 /* line 492: */
ZAAAOSI_makervc( ABIAOST, &BBIAOST );
SAIAOST.Help = A_UNITE(CBIAOST,mode1,1,BBIAOST);
 /* line 494: */
IBIAOST.fn.fn_global = FBIAOST_anonymous;
IBIAOST.nonlocals = A68_NIL;
HBIAOST = IBIAOST ;
SAIAOST.Command = A_UNITE(GBIAOST,mode3,3,HBIAOST);
 /* line 495: */
JBIAOST = A_HEAP(A68_209 ) ;
(*JBIAOST) = SAIAOST ;
FUHAOST.data[5] = A_UNITE(KBIAOST,mode1,1,JBIAOST);
 /* line 497: */
PBIAOST = NSDAOST_make_group(NBIAOST, A_HVEC(MBIAOST,'D',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(LBIAOST,FUHAOST,6,A68_208 )) ;
QNHAOST.data[4] = A_UNITE(OBIAOST,mode2,2,PBIAOST);
 /* line 498: */
ZAAAOSI_makervc( SBIAOST, &TBIAOST );
QBIAOST.Name = TBIAOST;
ZAAAOSI_makervc( VBIAOST, &WBIAOST );
QBIAOST.Abreviation = WBIAOST;
QBIAOST.Parameter = HNFAOST_filename_syntax;
QBIAOST.Access = XMDAOST_normalaccess;
 /* line 499: */
QBIAOST.Continuation = ZNDAOST_continue;
 /* line 500: */
XBIAOST.data[0] = ZBIAOST;
UEAAOST_facility(  &ACIAOST );
XBIAOST.data[1] = ACIAOST;
XBIAOST.data[2] = CCIAOST;
 /* line 501: */
JBAAOSI_concat( A_HISVEC(DCIAOST,XBIAOST,3,A68_VC ), &ECIAOST );
QBIAOST.Help = A_UNITE(FCIAOST,mode1,1,ECIAOST);
DDIAOST.fn.fn_global = ICIAOST_anonymous;
DDIAOST.nonlocals = A68_NIL;
CDIAOST = DDIAOST ;
QBIAOST.Command = A_UNITE(BDIAOST,mode3,3,CDIAOST);
 /* line 513: */
EDIAOST = A_HEAP(A68_209 ) ;
(*EDIAOST) = QBIAOST ;
QNHAOST.data[5] = A_UNITE(FDIAOST,mode1,1,EDIAOST);
 /* line 514: */
AMHAOST_specialrvc( IDIAOST, &JDIAOST );
GDIAOST.Name = JDIAOST;
GDIAOST.Abreviation = EOAAOSL_nullstr;
 /* line 515: */
GDIAOST.Parameter = WVFAOST_word_syntax;
GDIAOST.Access = RNDAOST_secretprivateaccess;
 /* line 516: */
GDIAOST.Continuation = ZNDAOST_continue;
 /* line 526: */
REIAOST.fn.fn_global = MDIAOST_anonymous;
REIAOST.nonlocals = A68_NIL;
QEIAOST = REIAOST ;
GDIAOST.Help = A_UNITE(PEIAOST,mode3,3,QEIAOST);
HFIAOST.fn.fn_global = UEIAOST_anonymous;
HFIAOST.nonlocals = A68_NIL;
GFIAOST = HFIAOST ;
GDIAOST.Command = A_UNITE(FFIAOST,mode3,3,GFIAOST);
 /* line 534: */
IFIAOST = A_HEAP(A68_209 ) ;
(*IFIAOST) = GDIAOST ;
QNHAOST.data[6] = A_UNITE(JFIAOST,mode1,1,IFIAOST);
 /* line 535: */
ZAAAOSI_makervc( MFIAOST, &NFIAOST );
KFIAOST.Name = NFIAOST;
ZAAAOSI_makervc( PFIAOST, &QFIAOST );
KFIAOST.Abreviation = QFIAOST;
 /* line 536: */
KFIAOST.Parameter = SRAAOST_noparameters;
KFIAOST.Access = RNDAOST_secretprivateaccess;
 /* line 537: */
KFIAOST.Continuation = ZNDAOST_continue;
 /* line 538: */
ZAAAOSI_makervc( SFIAOST, &TFIAOST );
KFIAOST.Help = A_UNITE(UFIAOST,mode1,1,TFIAOST);
CHIAOST.fn.fn_global = XFIAOST_anonymous;
CHIAOST.nonlocals = A68_NIL;
BHIAOST = CHIAOST ;
KFIAOST.Command = A_UNITE(AHIAOST,mode3,3,BHIAOST);
 /* line 546: */
DHIAOST = A_HEAP(A68_209 ) ;
(*DHIAOST) = KFIAOST ;
QNHAOST.data[7] = A_UNITE(EHIAOST,mode1,1,DHIAOST);
 /* line 547: */
ZAAAOSI_makervc( HHIAOST, &IHIAOST );
FHIAOST.Name = IHIAOST;
 /* line 548: */
NAAAOSI_makervc( 'H', &JHIAOST );
FHIAOST.Abreviation = JHIAOST;
LTAAOST_opt( BECAOST_command_name_syntax, &KHIAOST );
DUAAOST_star( A_UNITE(LHIAOST,mode2,2,KHIAOST), &MHIAOST );
FHIAOST.Parameter = A_UNITE(NHIAOST,mode2,2,MHIAOST);
FHIAOST.Access = XMDAOST_normalaccess;
 /* line 549: */
FHIAOST.Continuation = ZNDAOST_continue;
 /* line 564: */
LIIAOST.fn.fn_global = QHIAOST_anonymous;
LIIAOST.nonlocals = A68_NIL;
KIIAOST = LIIAOST ;
FHIAOST.Help = A_UNITE(JIIAOST,mode3,3,KIIAOST);
VIIAOST.fn.fn_global = OIIAOST_anonymous;
VIIAOST.nonlocals = A68_NIL;
UIIAOST = VIIAOST ;
FHIAOST.Command = A_UNITE(TIIAOST,mode3,3,UIIAOST);
 /* line 574: */
WIIAOST = A_HEAP(A68_209 ) ;
(*WIIAOST) = FHIAOST ;
QNHAOST.data[8] = A_UNITE(XIIAOST,mode1,1,WIIAOST);
 /* line 575: */
ZAAAOSI_makervc( AJIAOST, &BJIAOST );
YIIAOST.Name = BJIAOST;
 /* line 576: */
ZAAAOSI_makervc( DJIAOST, &EJIAOST );
YIIAOST.Abreviation = EJIAOST;
LTAAOST_opt( XLFAOST_string_syntax, &FJIAOST );
DUAAOST_star( A_UNITE(GJIAOST,mode2,2,FJIAOST), &HJIAOST );
YIIAOST.Parameter = A_UNITE(IJIAOST,mode2,2,HJIAOST);
YIIAOST.Access = BNDAOST_hiddenaccess;
 /* line 577: */
YIIAOST.Continuation = ZNDAOST_continue;
 /* line 578: */
JJIAOST.data[0] = LJIAOST;
 /* line 579: */
UEAAOST_facility(  &MJIAOST );
JJIAOST.data[1] = MJIAOST;
 /* line 580: */
 /* line 581: */
JJIAOST.data[2] = OJIAOST;
 /* line 582: */
JBAAOSI_concat( A_HISVEC(PJIAOST,JJIAOST,3,A68_VC ), &QJIAOST );
YIIAOST.Help = A_UNITE(RJIAOST,mode1,1,QJIAOST);
IKIAOST.fn.fn_global = UJIAOST_anonymous;
IKIAOST.nonlocals = A68_NIL;
HKIAOST = IKIAOST ;
YIIAOST.Command = A_UNITE(GKIAOST,mode3,3,HKIAOST);
 /* line 595: */
JKIAOST = A_HEAP(A68_209 ) ;
(*JKIAOST) = YIIAOST ;
QNHAOST.data[9] = A_UNITE(KKIAOST,mode1,1,JKIAOST);
 /* line 596: */
ZAAAOSI_makervc( NKIAOST, &OKIAOST );
LKIAOST.Name = OKIAOST;
LKIAOST.Abreviation = EOAAOSL_nullstr;
 /* line 597: */
LKIAOST.Parameter = DTFAOST_switch_syntax;
LKIAOST.Access = FNDAOST_secretaccess;
 /* line 598: */
LKIAOST.Continuation = ZNDAOST_continue;
 /* line 599: */
ZAAAOSI_makervc( QKIAOST, &RKIAOST );
LKIAOST.Help = A_UNITE(SKIAOST,mode1,1,RKIAOST);
HLIAOST.fn.fn_global = VKIAOST_anonymous;
HLIAOST.nonlocals = A68_NIL;
GLIAOST = HLIAOST ;
LKIAOST.Command = A_UNITE(FLIAOST,mode3,3,GLIAOST);
 /* line 604: */
ILIAOST = A_HEAP(A68_209 ) ;
(*ILIAOST) = LKIAOST ;
QNHAOST.data[10] = A_UNITE(JLIAOST,mode1,1,ILIAOST);
 /* line 605: */
ZAAAOSI_makervc( MLIAOST, &NLIAOST );
KLIAOST.Name = NLIAOST;
 /* line 606: */
ZAAAOSI_makervc( PLIAOST, &QLIAOST );
KLIAOST.Abreviation = QLIAOST;
KLIAOST.Parameter = HNFAOST_filename_syntax;
KLIAOST.Access = XMDAOST_normalaccess;
 /* line 608: */
KLIAOST.Continuation = ZNDAOST_continue;
 /* line 609: */
ZAAAOSI_makervc( SLIAOST, &TLIAOST );
KLIAOST.Help = A_UNITE(ULIAOST,mode1,1,TLIAOST);
CMIAOST.fn.fn_global = XLIAOST_anonymous;
CMIAOST.nonlocals = A68_NIL;
BMIAOST = CMIAOST ;
KLIAOST.Command = A_UNITE(AMIAOST,mode3,3,BMIAOST);
 /* line 613: */
DMIAOST = A_HEAP(A68_209 ) ;
(*DMIAOST) = KLIAOST ;
QNHAOST.data[11] = A_UNITE(EMIAOST,mode1,1,DMIAOST);
 /* line 614: */
ZAAAOSI_makervc( HMIAOST, &IMIAOST );
FMIAOST.Name = IMIAOST;
 /* line 615: */
FMIAOST.Abreviation = EOAAOSL_nullstr;
FMIAOST.Parameter = HNFAOST_filename_syntax;
FMIAOST.Access = XMDAOST_normalaccess;
 /* line 617: */
FMIAOST.Continuation = ZNDAOST_continue;
 /* line 618: */
ZAAAOSI_makervc( KMIAOST, &LMIAOST );
FMIAOST.Help = A_UNITE(MMIAOST,mode1,1,LMIAOST);
UMIAOST.fn.fn_global = PMIAOST_anonymous;
UMIAOST.nonlocals = A68_NIL;
TMIAOST = UMIAOST ;
FMIAOST.Command = A_UNITE(SMIAOST,mode3,3,TMIAOST);
 /* line 622: */
VMIAOST = A_HEAP(A68_209 ) ;
(*VMIAOST) = FMIAOST ;
QNHAOST.data[12] = A_UNITE(WMIAOST,mode1,1,VMIAOST);
 /* line 623: */
ZAAAOSI_makervc( ZMIAOST, &ANIAOST );
XMIAOST.Name = ANIAOST;
 /* line 624: */
ZAAAOSI_makervc( CNIAOST, &DNIAOST );
XMIAOST.Abreviation = DNIAOST;
LTAAOST_opt( IOFAOST_text_syntax, &ENIAOST );
XMIAOST.Parameter = A_UNITE(FNIAOST,mode2,2,ENIAOST);
XMIAOST.Access = XMDAOST_normalaccess;
 /* line 625: */
XMIAOST.Continuation = ZNDAOST_continue;
 /* line 626: */
ZAAAOSI_makervc( HNIAOST, &INIAOST );
XMIAOST.Help = A_UNITE(JNIAOST,mode1,1,INIAOST);
SNIAOST.fn.fn_global = MNIAOST_anonymous;
SNIAOST.nonlocals = A68_NIL;
RNIAOST = SNIAOST ;
XMIAOST.Command = A_UNITE(QNIAOST,mode3,3,RNIAOST);
 /* line 630: */
TNIAOST = A_HEAP(A68_209 ) ;
(*TNIAOST) = XMIAOST ;
QNHAOST.data[13] = A_UNITE(UNIAOST,mode1,1,TNIAOST);
 /* line 631: */
ZAAAOSI_makervc( XNIAOST, &YNIAOST );
VNIAOST.Name = YNIAOST;
 /* line 632: */
ZAAAOSI_makervc( AOIAOST, &BOIAOST );
VNIAOST.Abreviation = BOIAOST;
VNIAOST.Parameter = SRAAOST_noparameters;
VNIAOST.Access = BNDAOST_hiddenaccess;
 /* line 634: */
VNIAOST.Continuation = ZNDAOST_continue;
 /* line 635: */
 /* line 636: */
ZAAAOSI_makervc( DOIAOST, &EOIAOST );
VNIAOST.Help = A_UNITE(FOIAOST,mode1,1,EOIAOST);
TOIAOST.fn.fn_global = IOIAOST_anonymous;
TOIAOST.nonlocals = A68_NIL;
SOIAOST = TOIAOST ;
VNIAOST.Command = A_UNITE(ROIAOST,mode3,3,SOIAOST);
 /* line 642: */
UOIAOST = A_HEAP(A68_209 ) ;
(*UOIAOST) = VNIAOST ;
QNHAOST.data[14] = A_UNITE(VOIAOST,mode1,1,UOIAOST);
 /* line 643: */
ZAAAOSI_makervc( YOIAOST, &ZOIAOST );
WOIAOST.Name = ZOIAOST;
 /* line 644: */
WOIAOST.Abreviation = EOAAOSL_nullstr;
APIAOST.data[0] = HNFAOST_filename_syntax;
LTAAOST_opt( AHFAOST_int_syntax, &BPIAOST );
APIAOST.data[1] = A_UNITE(CPIAOST,mode2,2,BPIAOST);
ATAAOST_prod( A_HISVEC(DPIAOST,APIAOST,2,A68_213 ), &EPIAOST );
WOIAOST.Parameter = A_UNITE(FPIAOST,mode2,2,EPIAOST);
WOIAOST.Access = XMDAOST_normalaccess;
 /* line 645: */
WOIAOST.Continuation = ZNDAOST_continue;
KPIAOST = IPIAOST ;
GPIAOST.data[0] = A_UNITE(JPIAOST,mode7,7,KPIAOST);
 /* line 646: */
GPIAOST.data[1] = A_UNITE(LPIAOST,mode7,7,BNFAOST_filename_str);
PPIAOST = NPIAOST ;
GPIAOST.data[2] = A_UNITE(OPIAOST,mode7,7,PPIAOST);
 /* line 647: */
GPIAOST.data[3] = A_UNITE(QPIAOST,mode7,7,JDFAOST_int_str);
UPIAOST = SPIAOST ;
GPIAOST.data[4] = A_UNITE(TPIAOST,mode7,7,UPIAOST);
 /* line 648: */
UJBAOSL_oneline( A_HISVEC(VPIAOST,GPIAOST,5,A68_52 ), &WPIAOST );
WOIAOST.Help = A_UNITE(XPIAOST,mode1,1,WPIAOST);
LQIAOST.fn.fn_global = AQIAOST_anonymous;
LQIAOST.nonlocals = A68_NIL;
KQIAOST = LQIAOST ;
WOIAOST.Command = A_UNITE(JQIAOST,mode3,3,KQIAOST);
 /* line 659: */
MQIAOST = A_HEAP(A68_209 ) ;
(*MQIAOST) = WOIAOST ;
QNHAOST.data[15] = A_UNITE(NQIAOST,mode1,1,MQIAOST);
 /* line 660: */
ZAAAOSI_makervc( QQIAOST, &RQIAOST );
OQIAOST.Name = RQIAOST;
NAAAOSI_makervc( '!', &SQIAOST );
OQIAOST.Abreviation = SQIAOST;
 /* line 661: */
LTAAOST_opt( IOFAOST_text_syntax, &TQIAOST );
OQIAOST.Parameter = A_UNITE(UQIAOST,mode2,2,TQIAOST);
OQIAOST.Access = XMDAOST_normalaccess;
 /* line 662: */
OQIAOST.Continuation = ZNDAOST_continue;
VQIAOST.data[0] = XQIAOST;
UEAAOST_facility(  &YQIAOST );
VQIAOST.data[1] = YQIAOST;
 /* line 663: */
VQIAOST.data[2] = ARIAOST;
 /* line 664: */
VQIAOST.data[3] = EIAAOST_os_string;
VQIAOST.data[4] = CRIAOST;
 /* line 665: */
VQIAOST.data[5] = EIAAOST_os_string;
VQIAOST.data[6] = ERIAOST;
 /* line 666: */
UEAAOST_facility(  &FRIAOST );
VQIAOST.data[7] = FRIAOST;
VQIAOST.data[8] = HRIAOST;
 /* line 667: */
JBAAOSI_concat( A_HISVEC(IRIAOST,VQIAOST,9,A68_VC ), &JRIAOST );
OQIAOST.Help = A_UNITE(KRIAOST,mode1,1,JRIAOST);
RRIAOST.fn.fn_global = NRIAOST_anonymous;
RRIAOST.nonlocals = A68_NIL;
QRIAOST = RRIAOST ;
OQIAOST.Command = A_UNITE(PRIAOST,mode3,3,QRIAOST);
 /* line 671: */
SRIAOST = A_HEAP(A68_209 ) ;
(*SRIAOST) = OQIAOST ;
QNHAOST.data[16] = A_UNITE(TRIAOST,mode1,1,SRIAOST);
 /* line 672: */
ZAAAOSI_makervc( WRIAOST, &XRIAOST );
URIAOST.Name = XRIAOST;
NAAAOSI_makervc( '$', &YRIAOST );
URIAOST.Abreviation = YRIAOST;
 /* line 673: */
LTAAOST_opt( IOFAOST_text_syntax, &ZRIAOST );
URIAOST.Parameter = A_UNITE(ASIAOST,mode2,2,ZRIAOST);
URIAOST.Access = BNDAOST_hiddenaccess;
URIAOST.Continuation = ZNDAOST_continue;
 /* line 674: */
ZAAAOSI_makervc( CSIAOST, &DSIAOST );
URIAOST.Help = A_UNITE(ESIAOST,mode1,1,DSIAOST);
LSIAOST.fn.fn_global = HSIAOST_anonymous;
LSIAOST.nonlocals = A68_NIL;
KSIAOST = LSIAOST ;
URIAOST.Command = A_UNITE(JSIAOST,mode3,3,KSIAOST);
 /* line 678: */
MSIAOST = A_HEAP(A68_209 ) ;
(*MSIAOST) = URIAOST ;
QNHAOST.data[17] = A_UNITE(NSIAOST,mode1,1,MSIAOST);
 /* line 679: */
ZAAAOSI_makervc( QSIAOST, &RSIAOST );
OSIAOST.Name = RSIAOST;
 /* line 680: */
ZAAAOSI_makervc( TSIAOST, &USIAOST );
OSIAOST.Abreviation = USIAOST;
OSIAOST.Parameter = SRAAOST_noparameters;
OSIAOST.Access = XMDAOST_normalaccess;
 /* line 682: */
OSIAOST.Continuation = ZNDAOST_continue;
 /* line 683: */
ZAAAOSI_makervc( WSIAOST, &XSIAOST );
OSIAOST.Help = A_UNITE(YSIAOST,mode1,1,XSIAOST);
ETIAOST.fn.fn_global = BTIAOST_anonymous;
ETIAOST.nonlocals = A68_NIL;
DTIAOST = ETIAOST ;
OSIAOST.Command = A_UNITE(CTIAOST,mode3,3,DTIAOST);
 /* line 686: */
FTIAOST = A_HEAP(A68_209 ) ;
(*FTIAOST) = OSIAOST ;
QNHAOST.data[18] = A_UNITE(GTIAOST,mode1,1,FTIAOST);
 /* line 687: */
ZAAAOSI_makervc( JTIAOST, &KTIAOST );
HTIAOST.Name = KTIAOST;
 /* line 688: */
ZAAAOSI_makervc( MTIAOST, &NTIAOST );
HTIAOST.Abreviation = NTIAOST;
HTIAOST.Parameter = SRAAOST_noparameters;
HTIAOST.Access = XMDAOST_normalaccess;
 /* line 690: */
HTIAOST.Continuation = ZNDAOST_continue;
 /* line 691: */
ZAAAOSI_makervc( PTIAOST, &QTIAOST );
HTIAOST.Help = A_UNITE(RTIAOST,mode1,1,QTIAOST);
XTIAOST.fn.fn_global = UTIAOST_anonymous;
XTIAOST.nonlocals = A68_NIL;
WTIAOST = XTIAOST ;
HTIAOST.Command = A_UNITE(VTIAOST,mode3,3,WTIAOST);
 /* line 694: */
YTIAOST = A_HEAP(A68_209 ) ;
(*YTIAOST) = HTIAOST ;
QNHAOST.data[19] = A_UNITE(ZTIAOST,mode1,1,YTIAOST);
 /* line 695: */
ZAAAOSI_makervc( CUIAOST, &DUIAOST );
AUIAOST.Name = DUIAOST;
 /* line 696: */
ZAAAOSI_makervc( FUIAOST, &GUIAOST );
AUIAOST.Abreviation = GUIAOST;
AUIAOST.Parameter = HNFAOST_filename_syntax;
AUIAOST.Access = XMDAOST_normalaccess;
 /* line 697: */
AUIAOST.Continuation = ZNDAOST_continue;
 /* line 698: */
ZAAAOSI_makervc( IUIAOST, &JUIAOST );
AUIAOST.Help = A_UNITE(KUIAOST,mode1,1,JUIAOST);
SUIAOST.fn.fn_global = NUIAOST_anonymous;
SUIAOST.nonlocals = A68_NIL;
RUIAOST = SUIAOST ;
AUIAOST.Command = A_UNITE(QUIAOST,mode3,3,RUIAOST);
 /* line 703: */
TUIAOST = A_HEAP(A68_209 ) ;
(*TUIAOST) = AUIAOST ;
QNHAOST.data[20] = A_UNITE(UUIAOST,mode1,1,TUIAOST);
 /* line 704: */
 /* line 705: */
 /* line 706: */
ZAAAOSI_makervc( ZUIAOST, &AVIAOST );
XUIAOST.Name = AVIAOST;
NAAAOSI_makervc( 'S', &BVIAOST );
XUIAOST.Abreviation = BVIAOST;
 /* line 707: */
XUIAOST.Parameter = AHFAOST_int_syntax;
XUIAOST.Access = RNDAOST_secretprivateaccess;
 /* line 708: */
XUIAOST.Continuation = ZNDAOST_continue;
 /* line 709: */
ZAAAOSI_makervc( DVIAOST, &EVIAOST );
XUIAOST.Help = A_UNITE(FVIAOST,mode1,1,EVIAOST);
XVIAOST.fn.fn_global = IVIAOST_anonymous;
XVIAOST.nonlocals = A68_NIL;
WVIAOST = XVIAOST ;
XUIAOST.Command = A_UNITE(VVIAOST,mode3,3,WVIAOST);
 /* line 717: */
YVIAOST = A_HEAP(A68_209 ) ;
(*YVIAOST) = XUIAOST ;
WUIAOST.data[0] = A_UNITE(ZVIAOST,mode1,1,YVIAOST);
 /* line 718: */
ZAAAOSI_makervc( CWIAOST, &DWIAOST );
AWIAOST.Name = DWIAOST;
NAAAOSI_makervc( 'H', &EWIAOST );
AWIAOST.Abreviation = EWIAOST;
AWIAOST.Parameter = AHFAOST_int_syntax;
 /* line 719: */
AWIAOST.Access = RNDAOST_secretprivateaccess;
 /* line 721: */
AWIAOST.Continuation = ZNDAOST_continue;
 /* line 722: */
ZAAAOSI_makervc( GWIAOST, &HWIAOST );
AWIAOST.Help = A_UNITE(IWIAOST,mode1,1,HWIAOST);
 /* line 726: */
UWIAOST.fn.fn_global = LWIAOST_anonymous;
UWIAOST.nonlocals = A68_NIL;
TWIAOST = UWIAOST ;
AWIAOST.Command = A_UNITE(SWIAOST,mode3,3,TWIAOST);
 /* line 727: */
VWIAOST = A_HEAP(A68_209 ) ;
(*VWIAOST) = AWIAOST ;
WUIAOST.data[1] = A_UNITE(WWIAOST,mode1,1,VWIAOST);
 /* line 729: */
BXIAOST = NSDAOST_make_group(ZWIAOST, A_HVEC(YWIAOST,'O',A68_CHAR ), RNDAOST_secretprivateaccess, A_HISVEC(XWIAOST,WUIAOST,2,A68_208 )) ;
QNHAOST.data[21] = A_UNITE(AXIAOST,mode2,2,BXIAOST);
 /* line 730: */
ZAAAOSI_makervc( EXIAOST, &FXIAOST );
CXIAOST.Name = FXIAOST;
 /* line 731: */
CXIAOST.Abreviation = EOAAOSL_nullstr;
LTAAOST_opt( AHFAOST_int_syntax, &GXIAOST );
CXIAOST.Parameter = A_UNITE(HXIAOST,mode2,2,GXIAOST);
CXIAOST.Access = XMDAOST_normalaccess;
 /* line 732: */
CXIAOST.Continuation = ZNDAOST_continue;
 /* line 733: */
ZAAAOSI_makervc( JXIAOST, &KXIAOST );
CXIAOST.Help = A_UNITE(LXIAOST,mode1,1,KXIAOST);
RXIAOST.fn.fn_global = OXIAOST_anonymous;
RXIAOST.nonlocals = A68_NIL;
QXIAOST = RXIAOST ;
CXIAOST.Command = A_UNITE(PXIAOST,mode3,3,QXIAOST);
 /* line 737: */
SXIAOST = A_HEAP(A68_209 ) ;
(*SXIAOST) = CXIAOST ;
QNHAOST.data[22] = A_UNITE(TXIAOST,mode1,1,SXIAOST);
 /* line 738: */
 /* line 739: */
ZAAAOSI_makervc( YXIAOST, &ZXIAOST );
WXIAOST.Name = ZXIAOST;
ZAAAOSI_makervc( BYIAOST, &CYIAOST );
WXIAOST.Abreviation = CYIAOST;
 /* line 740: */
WXIAOST.Parameter = SRAAOST_noparameters;
WXIAOST.Access = BNDAOST_hiddenaccess;
 /* line 741: */
WXIAOST.Continuation = ZNDAOST_continue;
 /* line 742: */
 /* line 743: */
DYIAOST.data[0] = FYIAOST;
UEAAOST_facility(  &GYIAOST );
DYIAOST.data[1] = GYIAOST;
 /* line 744: */
JBAAOSI_concat( A_HISVEC(HYIAOST,DYIAOST,2,A68_VC ), &IYIAOST );
WXIAOST.Help = A_UNITE(JYIAOST,mode1,1,IYIAOST);
PYIAOST.fn.fn_global = MYIAOST_anonymous;
PYIAOST.nonlocals = A68_NIL;
OYIAOST = PYIAOST ;
WXIAOST.Command = A_UNITE(NYIAOST,mode3,3,OYIAOST);
 /* line 748: */
QYIAOST = A_HEAP(A68_209 ) ;
(*QYIAOST) = WXIAOST ;
VXIAOST.data[0] = A_UNITE(RYIAOST,mode1,1,QYIAOST);
 /* line 749: */
ZAAAOSI_makervc( UYIAOST, &VYIAOST );
SYIAOST.Name = VYIAOST;
ZAAAOSI_makervc( XYIAOST, &YYIAOST );
SYIAOST.Abreviation = YYIAOST;
 /* line 750: */
SYIAOST.Parameter = SRAAOST_noparameters;
SYIAOST.Access = XMDAOST_normalaccess;
 /* line 751: */
SYIAOST.Continuation = ZNDAOST_continue;
 /* line 752: */
ZYIAOST.data[0] = BZIAOST;
UEAAOST_facility(  &CZIAOST );
ZYIAOST.data[1] = CZIAOST;
 /* line 753: */
JBAAOSI_concat( A_HISVEC(DZIAOST,ZYIAOST,2,A68_VC ), &EZIAOST );
SYIAOST.Help = A_UNITE(FZIAOST,mode1,1,EZIAOST);
LZIAOST.fn.fn_global = IZIAOST_anonymous;
LZIAOST.nonlocals = A68_NIL;
KZIAOST = LZIAOST ;
SYIAOST.Command = A_UNITE(JZIAOST,mode3,3,KZIAOST);
 /* line 756: */
MZIAOST = A_HEAP(A68_209 ) ;
(*MZIAOST) = SYIAOST ;
VXIAOST.data[1] = A_UNITE(NZIAOST,mode1,1,MZIAOST);
 /* line 757: */
ZAAAOSI_makervc( QZIAOST, &RZIAOST );
OZIAOST.Name = RZIAOST;
OZIAOST.Abreviation = YNAAOSL_nilstr;
 /* line 758: */
OZIAOST.Parameter = SRAAOST_noparameters;
OZIAOST.Access = RNDAOST_secretprivateaccess;
 /* line 759: */
OZIAOST.Continuation = ZNDAOST_continue;
 /* line 760: */
ZAAAOSI_makervc( TZIAOST, &UZIAOST );
OZIAOST.Help = A_UNITE(VZIAOST,mode1,1,UZIAOST);
JAJAOST.fn.fn_global = YZIAOST_anonymous;
JAJAOST.nonlocals = A68_NIL;
IAJAOST = JAJAOST ;
OZIAOST.Command = A_UNITE(HAJAOST,mode3,3,IAJAOST);
 /* line 764: */
KAJAOST = A_HEAP(A68_209 ) ;
(*KAJAOST) = OZIAOST ;
VXIAOST.data[2] = A_UNITE(LAJAOST,mode1,1,KAJAOST);
 /* line 765: */
ZAAAOSI_makervc( OAJAOST, &PAJAOST );
MAJAOST.Name = PAJAOST;
ZAAAOSI_makervc( RAJAOST, &SAJAOST );
MAJAOST.Abreviation = SAJAOST;
 /* line 766: */
MAJAOST.Parameter = SRAAOST_noparameters;
MAJAOST.Access = RNDAOST_secretprivateaccess;
 /* line 767: */
MAJAOST.Continuation = ZNDAOST_continue;
 /* line 768: */
ZAAAOSI_makervc( UAJAOST, &VAJAOST );
MAJAOST.Help = A_UNITE(WAJAOST,mode1,1,VAJAOST);
KBJAOST.fn.fn_global = ZAJAOST_anonymous;
KBJAOST.nonlocals = A68_NIL;
JBJAOST = KBJAOST ;
MAJAOST.Command = A_UNITE(IBJAOST,mode3,3,JBJAOST);
 /* line 772: */
LBJAOST = A_HEAP(A68_209 ) ;
(*LBJAOST) = MAJAOST ;
VXIAOST.data[3] = A_UNITE(MBJAOST,mode1,1,LBJAOST);
 /* line 773: */
ZAAAOSI_makervc( PBJAOST, &QBJAOST );
NBJAOST.Name = QBJAOST;
 /* line 774: */
ZAAAOSI_makervc( SBJAOST, &TBJAOST );
NBJAOST.Abreviation = TBJAOST;
NBJAOST.Parameter = SRAAOST_noparameters;
NBJAOST.Access = XMDAOST_normalaccess;
 /* line 775: */
NBJAOST.Continuation = ZNDAOST_continue;
 /* line 776: */
ZAAAOSI_makervc( VBJAOST, &WBJAOST );
NBJAOST.Help = A_UNITE(XBJAOST,mode1,1,WBJAOST);
DCJAOST.fn.fn_global = ACJAOST_anonymous;
DCJAOST.nonlocals = A68_NIL;
CCJAOST = DCJAOST ;
NBJAOST.Command = A_UNITE(BCJAOST,mode3,3,CCJAOST);
 /* line 779: */
ECJAOST = A_HEAP(A68_209 ) ;
(*ECJAOST) = NBJAOST ;
VXIAOST.data[4] = A_UNITE(FCJAOST,mode1,1,ECJAOST);
 /* line 780: */
ZAAAOSI_makervc( ICJAOST, &JCJAOST );
GCJAOST.Name = JCJAOST;
 /* line 781: */
NAAAOSI_makervc( 'V', &KCJAOST );
GCJAOST.Abreviation = KCJAOST;
DUAAOST_star( ALFAOST_name_syntax, &LCJAOST );
LTAAOST_opt( A_UNITE(MCJAOST,mode2,2,LCJAOST), &NCJAOST );
GCJAOST.Parameter = A_UNITE(OCJAOST,mode2,2,NCJAOST);
GCJAOST.Access = XMDAOST_normalaccess;
 /* line 782: */
GCJAOST.Continuation = ZNDAOST_continue;
PCJAOST.data[0] = RCJAOST;
 /* line 783: */
UEAAOST_facility(  &SCJAOST );
PCJAOST.data[1] = SCJAOST;
PCJAOST.data[2] = UCJAOST;
 /* line 784: */
UEAAOST_facility(  &VCJAOST );
PCJAOST.data[3] = VCJAOST;
PCJAOST.data[4] = XCJAOST;
 /* line 785: */
UEAAOST_facility(  &YCJAOST );
PCJAOST.data[5] = YCJAOST;
 /* line 786: */
PCJAOST.data[6] = ADJAOST;
UEAAOST_facility(  &BDJAOST );
PCJAOST.data[7] = BDJAOST;
PCJAOST.data[8] = A_HVEC(CDJAOST,'.',A68_CHAR );
 /* line 787: */
JBAAOSI_concat( A_HISVEC(DDJAOST,PCJAOST,9,A68_VC ), &EDJAOST );
GCJAOST.Help = A_UNITE(FDJAOST,mode1,1,EDJAOST);
 /* line 794: */
RDJAOST.fn.fn_global = IDJAOST_anonymous;
RDJAOST.nonlocals = A68_NIL;
QDJAOST = RDJAOST ;
GCJAOST.Command = A_UNITE(PDJAOST,mode3,3,QDJAOST);
 /* line 795: */
SDJAOST = A_HEAP(A68_209 ) ;
(*SDJAOST) = GCJAOST ;
VXIAOST.data[5] = A_UNITE(TDJAOST,mode1,1,SDJAOST);
 /* line 798: */
YDJAOST = NSDAOST_make_group(WDJAOST, A_HVEC(VDJAOST,'P',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(UDJAOST,VXIAOST,6,A68_208 )) ;
QNHAOST.data[23] = A_UNITE(XDJAOST,mode2,2,YDJAOST);
 /* line 799: */
 /* line 800: */
 /* line 801: */
AMHAOST_specialrvc( DEJAOST, &EEJAOST );
BEJAOST.Name = EEJAOST;
BEJAOST.Abreviation = EOAAOSL_nullstr;
 /* line 802: */
BEJAOST.Parameter = SRAAOST_noparameters;
BEJAOST.Access = RNDAOST_secretprivateaccess;
BEJAOST.Continuation = ZNDAOST_continue;
 /* line 803: */
BEJAOST.Help = A_UNITE(FEJAOST,mode1,1,EOAAOSL_nullstr);
UEJAOST.fn.fn_global = IEJAOST_anonymous;
UEJAOST.nonlocals = A68_NIL;
TEJAOST = UEJAOST ;
BEJAOST.Command = A_UNITE(SEJAOST,mode3,3,TEJAOST);
 /* line 809: */
VEJAOST = A_HEAP(A68_209 ) ;
(*VEJAOST) = BEJAOST ;
AEJAOST.data[0] = A_UNITE(WEJAOST,mode1,1,VEJAOST);
 /* line 810: */
 /* line 811: */
 /* line 812: */
A_CALLPROC(ANHAOST_pchars,( &AFJAOST),( &AFJAOST,(ANHAOST_pchars).nonlocals));
ZEJAOST.Name = AFJAOST;
ZEJAOST.Abreviation = EOAAOSL_nullstr;
ZEJAOST.Parameter = SRAAOST_noparameters;
ZEJAOST.Access = FNDAOST_secretaccess;
 /* line 813: */
ZEJAOST.Continuation = ZNDAOST_continue;
 /* line 814: */
ZEJAOST.Help = A_UNITE(BFJAOST,mode1,1,EOAAOSL_nullstr);
LFJAOST.fn.fn_global = EFJAOST_anonymous;
LFJAOST.nonlocals = A68_NIL;
KFJAOST = LFJAOST ;
ZEJAOST.Command = A_UNITE(JFJAOST,mode3,3,KFJAOST);
 /* line 820: */
MFJAOST = A_HEAP(A68_209 ) ;
(*MFJAOST) = ZEJAOST ;
YEJAOST.data[0] = A_UNITE(NFJAOST,mode1,1,MFJAOST);
 /* line 821: */
ZAAAOSI_makervc( QFJAOST, &RFJAOST );
OFJAOST.Name = RFJAOST;
OFJAOST.Abreviation = EOAAOSL_nullstr;
 /* line 822: */
OFJAOST.Parameter = SRAAOST_noparameters;
OFJAOST.Access = FNDAOST_secretaccess;
OFJAOST.Continuation = ZNDAOST_continue;
 /* line 823: */
OFJAOST.Help = A_UNITE(SFJAOST,mode1,1,EOAAOSL_nullstr);
 /* line 826: */
ZFJAOST.fn.fn_global = VFJAOST_anonymous;
ZFJAOST.nonlocals = A68_NIL;
YFJAOST = ZFJAOST ;
OFJAOST.Command = A_UNITE(XFJAOST,mode3,3,YFJAOST);
AGJAOST = A_HEAP(A68_209 ) ;
(*AGJAOST) = OFJAOST ;
YEJAOST.data[1] = A_UNITE(BGJAOST,mode1,1,AGJAOST);
 /* line 827: */
 /* line 828: */
AMHAOST_specialrvc( DGJAOST, &EGJAOST );
GGJAOST = NSDAOST_make_group(EGJAOST, EOAAOSL_nullstr, FNDAOST_secretaccess, A_HISVEC(CGJAOST,YEJAOST,2,A68_208 )) ;
AEJAOST.data[1] = A_UNITE(FGJAOST,mode2,2,GGJAOST);
 /* line 830: */
AMHAOST_specialrvc( IGJAOST, &JGJAOST );
LGJAOST = NSDAOST_make_group(JGJAOST, EOAAOSL_nullstr, FNDAOST_secretaccess, A_HISVEC(HGJAOST,AEJAOST,2,A68_208 )) ;
QNHAOST.data[24] = A_UNITE(KGJAOST,mode2,2,LGJAOST);
 /* line 831: */
ZAAAOSI_makervc( OGJAOST, &PGJAOST );
MGJAOST.Name = PGJAOST;
 /* line 832: */
ZAAAOSI_makervc( RGJAOST, &SGJAOST );
MGJAOST.Abreviation = SGJAOST;
MGJAOST.Parameter = SRAAOST_noparameters;
MGJAOST.Access = XMDAOST_normalaccess;
 /* line 834: */
MGJAOST.Continuation = ZNDAOST_continue;
 /* line 835: */
ZAAAOSI_makervc( UGJAOST, &VGJAOST );
MGJAOST.Help = A_UNITE(WGJAOST,mode1,1,VGJAOST);
CHJAOST.fn.fn_global = ZGJAOST_anonymous;
CHJAOST.nonlocals = A68_NIL;
BHJAOST = CHJAOST ;
MGJAOST.Command = A_UNITE(AHJAOST,mode3,3,BHJAOST);
 /* line 838: */
DHJAOST = A_HEAP(A68_209 ) ;
(*DHJAOST) = MGJAOST ;
QNHAOST.data[25] = A_UNITE(EHJAOST,mode1,1,DHJAOST);
 /* line 839: */
ZAAAOSI_makervc( HHJAOST, &IHJAOST );
FHJAOST.Name = IHJAOST;
FHJAOST.Abreviation = EOAAOSL_nullstr;
FHJAOST.Parameter = IOFAOST_text_syntax;
FHJAOST.Access = BNDAOST_hiddenaccess;
 /* line 841: */
FHJAOST.Continuation = ZNDAOST_continue;
 /* line 842: */
 /* line 843: */
ZAAAOSI_makervc( KHJAOST, &LHJAOST );
FHJAOST.Help = A_UNITE(MHJAOST,mode1,1,LHJAOST);
YKJAOST.fn.fn_global = PHJAOST_anonymous;
YKJAOST.nonlocals = A68_NIL;
XKJAOST = YKJAOST ;
FHJAOST.Command = A_UNITE(WKJAOST,mode3,3,XKJAOST);
 /* line 875: */
ZKJAOST = A_HEAP(A68_209 ) ;
(*ZKJAOST) = FHJAOST ;
QNHAOST.data[26] = A_UNITE(ALJAOST,mode1,1,ZKJAOST);
 /* line 876: */
ZAAAOSI_makervc( DLJAOST, &ELJAOST );
BLJAOST.Name = ELJAOST;
BLJAOST.Abreviation = EOAAOSL_nullstr;
FLJAOST.data[0] = HNFAOST_filename_syntax;
FLJAOST.data[1] = IOFAOST_text_syntax;
 /* line 877: */
ATAAOST_prod( A_HISVEC(GLJAOST,FLJAOST,2,A68_213 ), &HLJAOST );
BLJAOST.Parameter = A_UNITE(ILJAOST,mode2,2,HLJAOST);
BLJAOST.Access = FNDAOST_secretaccess;
 /* line 879: */
BLJAOST.Continuation = ZNDAOST_continue;
 /* line 880: */
 /* line 881: */
 /* line 882: */
ZAAAOSI_makervc( KLJAOST, &LLJAOST );
BLJAOST.Help = A_UNITE(MLJAOST,mode1,1,LLJAOST);
UMJAOST.fn.fn_global = PLJAOST_anonymous;
UMJAOST.nonlocals = A68_NIL;
TMJAOST = UMJAOST ;
BLJAOST.Command = A_UNITE(SMJAOST,mode3,3,TMJAOST);
 /* line 896: */
VMJAOST = A_HEAP(A68_209 ) ;
(*VMJAOST) = BLJAOST ;
QNHAOST.data[27] = A_UNITE(WMJAOST,mode1,1,VMJAOST);
 /* line 897: */
ZAAAOSI_makervc( ZMJAOST, &ANJAOST );
XMJAOST.Name = ANJAOST;
 /* line 898: */
ZAAAOSI_makervc( CNJAOST, &DNJAOST );
XMJAOST.Abreviation = DNJAOST;
XMJAOST.Parameter = HNFAOST_filename_syntax;
XMJAOST.Access = XMDAOST_normalaccess;
 /* line 899: */
XMJAOST.Continuation = ZNDAOST_continue;
INJAOST = GNJAOST ;
ENJAOST.data[0] = A_UNITE(HNJAOST,mode7,7,INJAOST);
 /* line 900: */
ENJAOST.data[1] = A_UNITE(JNJAOST,mode7,7,BNFAOST_filename_str);
 /* line 901: */
NNJAOST = LNJAOST ;
ENJAOST.data[2] = A_UNITE(MNJAOST,mode7,7,NNJAOST);
 /* line 902: */
UJBAOSL_oneline( A_HISVEC(ONJAOST,ENJAOST,3,A68_52 ), &PNJAOST );
XMJAOST.Help = A_UNITE(QNJAOST,mode1,1,PNJAOST);
AOJAOST.fn.fn_global = TNJAOST_anonymous;
AOJAOST.nonlocals = A68_NIL;
ZNJAOST = AOJAOST ;
XMJAOST.Command = A_UNITE(YNJAOST,mode3,3,ZNJAOST);
 /* line 909: */
BOJAOST = A_HEAP(A68_209 ) ;
(*BOJAOST) = XMJAOST ;
QNHAOST.data[28] = A_UNITE(COJAOST,mode1,1,BOJAOST);
 /* line 910: */
ZAAAOSI_makervc( FOJAOST, &GOJAOST );
DOJAOST.Name = GOJAOST;
DOJAOST.Abreviation = EOAAOSL_nullstr;
DOJAOST.Parameter = SRAAOST_noparameters;
DOJAOST.Access = XMDAOST_normalaccess;
 /* line 911: */
DOJAOST.Continuation = DODAOST_return;
 /* line 916: */
APJAOST.fn.fn_global = JOJAOST_anonymous;
APJAOST.nonlocals = A68_NIL;
ZOJAOST = APJAOST ;
DOJAOST.Help = A_UNITE(YOJAOST,mode3,3,ZOJAOST);
CPJAOST.fn.fn_global = MMDAOST_nullcommand;
CPJAOST.nonlocals = A68_NIL;
DOJAOST.Command = A_UNITE(BPJAOST,mode2,2,CPJAOST);
 /* line 918: */
DPJAOST = A_HEAP(A68_209 ) ;
(*DPJAOST) = DOJAOST ;
QNHAOST.data[29] = A_UNITE(EPJAOST,mode1,1,DPJAOST);
 /* line 919: */
ZAAAOSI_makervc( HPJAOST, &IPJAOST );
FPJAOST.Name = IPJAOST;
FPJAOST.Abreviation = EOAAOSL_nullstr;
FPJAOST.Parameter = SRAAOST_noparameters;
FPJAOST.Access = FNDAOST_secretaccess;
 /* line 920: */
FPJAOST.Continuation = DODAOST_return;
 /* line 925: */
CQJAOST.fn.fn_global = LPJAOST_anonymous;
CQJAOST.nonlocals = A68_NIL;
BQJAOST = CQJAOST ;
FPJAOST.Help = A_UNITE(AQJAOST,mode3,3,BQJAOST);
EQJAOST.fn.fn_global = MMDAOST_nullcommand;
EQJAOST.nonlocals = A68_NIL;
FPJAOST.Command = A_UNITE(DQJAOST,mode2,2,EQJAOST);
 /* line 927: */
FQJAOST = A_HEAP(A68_209 ) ;
(*FQJAOST) = FPJAOST ;
QNHAOST.data[30] = A_UNITE(GQJAOST,mode1,1,FQJAOST);
 /* line 928: */
ZAAAOSI_makervc( JQJAOST, &KQJAOST );
HQJAOST.Name = KQJAOST;
HQJAOST.Abreviation = EOAAOSL_nullstr;
HQJAOST.Parameter = SRAAOST_noparameters;
HQJAOST.Access = XMDAOST_normalaccess;
 /* line 929: */
HQJAOST.Continuation = DODAOST_return;
 /* line 934: */
ERJAOST.fn.fn_global = NQJAOST_anonymous;
ERJAOST.nonlocals = A68_NIL;
DRJAOST = ERJAOST ;
HQJAOST.Help = A_UNITE(CRJAOST,mode3,3,DRJAOST);
GRJAOST.fn.fn_global = MMDAOST_nullcommand;
GRJAOST.nonlocals = A68_NIL;
HQJAOST.Command = A_UNITE(FRJAOST,mode2,2,GRJAOST);
 /* line 936: */
HRJAOST = A_HEAP(A68_209 ) ;
(*HRJAOST) = HQJAOST ;
QNHAOST.data[31] = A_UNITE(IRJAOST,mode1,1,HRJAOST);
 /* line 937: */
ZAAAOSI_makervc( LRJAOST, &MRJAOST );
JRJAOST.Name = MRJAOST;
JRJAOST.Abreviation = EOAAOSL_nullstr;
JRJAOST.Parameter = SRAAOST_noparameters;
JRJAOST.Access = BNDAOST_hiddenaccess;
 /* line 938: */
JRJAOST.Continuation = DODAOST_return;
 /* line 943: */
GSJAOST.fn.fn_global = PRJAOST_anonymous;
GSJAOST.nonlocals = A68_NIL;
FSJAOST = GSJAOST ;
JRJAOST.Help = A_UNITE(ESJAOST,mode3,3,FSJAOST);
ISJAOST.fn.fn_global = MMDAOST_nullcommand;
ISJAOST.nonlocals = A68_NIL;
JRJAOST.Command = A_UNITE(HSJAOST,mode2,2,ISJAOST);
 /* line 945: */
JSJAOST = A_HEAP(A68_209 ) ;
(*JSJAOST) = JRJAOST ;
QNHAOST.data[32] = A_UNITE(KSJAOST,mode1,1,JSJAOST);
 /* line 946: */
ZAAAOSI_makervc( NSJAOST, &OSJAOST );
LSJAOST.Name = OSJAOST;
LSJAOST.Abreviation = EOAAOSL_nullstr;
 /* line 947: */
LSJAOST.Parameter = DTFAOST_switch_syntax;
LSJAOST.Access = RNDAOST_secretprivateaccess;
 /* line 948: */
LSJAOST.Continuation = ZNDAOST_continue;
 /* line 949: */
ZAAAOSI_makervc( QSJAOST, &RSJAOST );
LSJAOST.Help = A_UNITE(SSJAOST,mode1,1,RSJAOST);
HTJAOST.fn.fn_global = VSJAOST_anonymous;
HTJAOST.nonlocals = A68_NIL;
GTJAOST = HTJAOST ;
LSJAOST.Command = A_UNITE(FTJAOST,mode3,3,GTJAOST);
 /* line 955: */
ITJAOST = A_HEAP(A68_209 ) ;
(*ITJAOST) = LSJAOST ;
QNHAOST.data[33] = A_UNITE(JTJAOST,mode1,1,ITJAOST);
 /* line 956: */
 /* line 957: */
ZAAAOSI_makervc( OTJAOST, &PTJAOST );
MTJAOST.Name = PTJAOST;
 /* line 958: */
ZAAAOSI_makervc( RTJAOST, &STJAOST );
MTJAOST.Abreviation = STJAOST;
MTJAOST.Parameter = AHFAOST_int_syntax;
MTJAOST.Access = BNDAOST_hiddenaccess;
 /* line 960: */
MTJAOST.Continuation = ZNDAOST_continue;
 /* line 961: */
 /* line 962: */
 /* line 963: */
 /* line 964: */
 /* line 965: */
ZAAAOSI_makervc( UTJAOST, &VTJAOST );
MTJAOST.Help = A_UNITE(WTJAOST,mode1,1,VTJAOST);
NUJAOST.fn.fn_global = ZTJAOST_anonymous;
NUJAOST.nonlocals = A68_NIL;
MUJAOST = NUJAOST ;
MTJAOST.Command = A_UNITE(LUJAOST,mode3,3,MUJAOST);
 /* line 971: */
OUJAOST = A_HEAP(A68_209 ) ;
(*OUJAOST) = MTJAOST ;
LTJAOST.data[0] = A_UNITE(PUJAOST,mode1,1,OUJAOST);
 /* line 972: */
ZAAAOSI_makervc( SUJAOST, &TUJAOST );
QUJAOST.Name = TUJAOST;
 /* line 973: */
NAAAOSI_makervc( 'W', &UUJAOST );
QUJAOST.Abreviation = UUJAOST;
LTAAOST_opt( AHFAOST_int_syntax, &VUJAOST );
QUJAOST.Parameter = A_UNITE(WUJAOST,mode2,2,VUJAOST);
QUJAOST.Access = XMDAOST_normalaccess;
 /* line 974: */
QUJAOST.Continuation = ZNDAOST_continue;
 /* line 980: */
SVJAOST.fn.fn_global = ZUJAOST_anonymous;
SVJAOST.nonlocals = A68_NIL;
RVJAOST = SVJAOST ;
QUJAOST.Help = A_UNITE(QVJAOST,mode3,3,RVJAOST);
YVJAOST.fn.fn_global = VVJAOST_anonymous;
YVJAOST.nonlocals = A68_NIL;
XVJAOST = YVJAOST ;
QUJAOST.Command = A_UNITE(WVJAOST,mode3,3,XVJAOST);
 /* line 984: */
ZVJAOST = A_HEAP(A68_209 ) ;
(*ZVJAOST) = QUJAOST ;
LTJAOST.data[1] = A_UNITE(AWJAOST,mode1,1,ZVJAOST);
 /* line 985: */
ZAAAOSI_makervc( DWJAOST, &EWJAOST );
BWJAOST.Name = EWJAOST;
 /* line 986: */
NAAAOSI_makervc( 'V', &FWJAOST );
BWJAOST.Abreviation = FWJAOST;
GWJAOST.data[0] = ALFAOST_name_syntax;
LTAAOST_opt( IOFAOST_text_syntax, &HWJAOST );
GWJAOST.data[1] = A_UNITE(IWJAOST,mode2,2,HWJAOST);
ATAAOST_prod( A_HISVEC(JWJAOST,GWJAOST,2,A68_213 ), &KWJAOST );
BWJAOST.Parameter = A_UNITE(LWJAOST,mode2,2,KWJAOST);
BWJAOST.Access = XMDAOST_normalaccess;
 /* line 987: */
BWJAOST.Continuation = ZNDAOST_continue;
MWJAOST.data[0] = OWJAOST;
 /* line 988: */
UEAAOST_facility(  &PWJAOST );
MWJAOST.data[1] = PWJAOST;
MWJAOST.data[2] = RWJAOST;
 /* line 989: */
UEAAOST_facility(  &SWJAOST );
MWJAOST.data[3] = SWJAOST;
 /* line 990: */
MWJAOST.data[4] = UWJAOST;
UEAAOST_facility(  &VWJAOST );
MWJAOST.data[5] = VWJAOST;
MWJAOST.data[6] = A_HVEC(WWJAOST,'.',A68_CHAR );
 /* line 991: */
JBAAOSI_concat( A_HISVEC(XWJAOST,MWJAOST,7,A68_VC ), &YWJAOST );
BWJAOST.Help = A_UNITE(ZWJAOST,mode1,1,YWJAOST);
 /* line 996: */
MXJAOST.fn.fn_global = CXJAOST_anonymous;
MXJAOST.nonlocals = A68_NIL;
LXJAOST = MXJAOST ;
BWJAOST.Command = A_UNITE(KXJAOST,mode3,3,LXJAOST);
 /* line 997: */
NXJAOST = A_HEAP(A68_209 ) ;
(*NXJAOST) = BWJAOST ;
LTJAOST.data[2] = A_UNITE(OXJAOST,mode1,1,NXJAOST);
 /* line 1000: */
TXJAOST = NSDAOST_make_group(RXJAOST, A_HVEC(QXJAOST,'S',A68_CHAR ), BNDAOST_hiddenaccess, A_HISVEC(PXJAOST,LTJAOST,3,A68_208 )) ;
QNHAOST.data[34] = A_UNITE(SXJAOST,mode2,2,TXJAOST);
 /* line 1001: */
 /* line 1002: */
ZAAAOSI_makervc( YXJAOST, &ZXJAOST );
WXJAOST.Name = ZXJAOST;
 /* line 1003: */
ZAAAOSI_makervc( BYJAOST, &CYJAOST );
WXJAOST.Abreviation = CYJAOST;
WXJAOST.Parameter = SRAAOST_noparameters;
WXJAOST.Access = BNDAOST_hiddenaccess;
 /* line 1005: */
WXJAOST.Continuation = ZNDAOST_continue;
 /* line 1006: */
 /* line 1007: */
ZAAAOSI_makervc( EYJAOST, &FYJAOST );
WXJAOST.Help = A_UNITE(GYJAOST,mode1,1,FYJAOST);
XYJAOST.fn.fn_global = JYJAOST_anonymous;
XYJAOST.nonlocals = A68_NIL;
WYJAOST = XYJAOST ;
WXJAOST.Command = A_UNITE(VYJAOST,mode3,3,WYJAOST);
 /* line 1020: */
YYJAOST = A_HEAP(A68_209 ) ;
(*YYJAOST) = WXJAOST ;
VXJAOST.data[0] = A_UNITE(ZYJAOST,mode1,1,YYJAOST);
 /* line 1021: */
ZAAAOSI_makervc( CZJAOST, &DZJAOST );
AZJAOST.Name = DZJAOST;
 /* line 1022: */
ZAAAOSI_makervc( FZJAOST, &GZJAOST );
AZJAOST.Abreviation = GZJAOST;
AZJAOST.Parameter = SRAAOST_noparameters;
AZJAOST.Access = XMDAOST_normalaccess;
 /* line 1023: */
AZJAOST.Continuation = ZNDAOST_continue;
 /* line 1024: */
ZAAAOSI_makervc( IZJAOST, &JZJAOST );
AZJAOST.Help = A_UNITE(KZJAOST,mode1,1,JZJAOST);
QZJAOST.fn.fn_global = NZJAOST_anonymous;
QZJAOST.nonlocals = A68_NIL;
PZJAOST = QZJAOST ;
AZJAOST.Command = A_UNITE(OZJAOST,mode3,3,PZJAOST);
 /* line 1027: */
RZJAOST = A_HEAP(A68_209 ) ;
(*RZJAOST) = AZJAOST ;
VXJAOST.data[1] = A_UNITE(SZJAOST,mode1,1,RZJAOST);
 /* line 1028: */
ZAAAOSI_makervc( VZJAOST, &WZJAOST );
TZJAOST.Name = WZJAOST;
 /* line 1029: */
ZAAAOSI_makervc( YZJAOST, &ZZJAOST );
TZJAOST.Abreviation = ZZJAOST;
TZJAOST.Parameter = SRAAOST_noparameters;
TZJAOST.Access = XMDAOST_normalaccess;
 /* line 1031: */
TZJAOST.Continuation = ZNDAOST_continue;
 /* line 1032: */
ZAAAOSI_makervc( BAKAOST, &CAKAOST );
TZJAOST.Help = A_UNITE(DAKAOST,mode1,1,CAKAOST);
JAKAOST.fn.fn_global = GAKAOST_anonymous;
JAKAOST.nonlocals = A68_NIL;
IAKAOST = JAKAOST ;
TZJAOST.Command = A_UNITE(HAKAOST,mode3,3,IAKAOST);
 /* line 1035: */
KAKAOST = A_HEAP(A68_209 ) ;
(*KAKAOST) = TZJAOST ;
VXJAOST.data[2] = A_UNITE(LAKAOST,mode1,1,KAKAOST);
 /* line 1036: */
ZAAAOSI_makervc( OAKAOST, &PAKAOST );
MAKAOST.Name = PAKAOST;
 /* line 1037: */
NAAAOSI_makervc( 'R', &QAKAOST );
MAKAOST.Abreviation = QAKAOST;
MAKAOST.Parameter = SRAAOST_noparameters;
MAKAOST.Access = BNDAOST_hiddenaccess;
 /* line 1039: */
MAKAOST.Continuation = ZNDAOST_continue;
 /* line 1040: */
ZAAAOSI_makervc( SAKAOST, &TAKAOST );
MAKAOST.Help = A_UNITE(UAKAOST,mode1,1,TAKAOST);
ABKAOST.fn.fn_global = XAKAOST_anonymous;
ABKAOST.nonlocals = A68_NIL;
ZAKAOST = ABKAOST ;
MAKAOST.Command = A_UNITE(YAKAOST,mode3,3,ZAKAOST);
 /* line 1044: */
BBKAOST = A_HEAP(A68_209 ) ;
(*BBKAOST) = MAKAOST ;
VXJAOST.data[3] = A_UNITE(CBKAOST,mode1,1,BBKAOST);
 /* line 1045: */
ZAAAOSI_makervc( FBKAOST, &GBKAOST );
DBKAOST.Name = GBKAOST;
 /* line 1046: */
NAAAOSI_makervc( 'T', &HBKAOST );
DBKAOST.Abreviation = HBKAOST;
DBKAOST.Parameter = SRAAOST_noparameters;
DBKAOST.Access = XMDAOST_normalaccess;
 /* line 1047: */
DBKAOST.Continuation = ZNDAOST_continue;
 /* line 1048: */
IBKAOST.data[0] = KBKAOST;
UEAAOST_facility(  &LBKAOST );
IBKAOST.data[1] = LBKAOST;
IBKAOST.data[2] = NBKAOST;
 /* line 1049: */
JBAAOSI_concat( A_HISVEC(OBKAOST,IBKAOST,3,A68_VC ), &PBKAOST );
DBKAOST.Help = A_UNITE(QBKAOST,mode1,1,PBKAOST);
 /* line 1052: */
WBKAOST.fn.fn_global = TBKAOST_anonymous;
WBKAOST.nonlocals = A68_NIL;
VBKAOST = WBKAOST ;
DBKAOST.Command = A_UNITE(UBKAOST,mode3,3,VBKAOST);
 /* line 1053: */
XBKAOST = A_HEAP(A68_209 ) ;
(*XBKAOST) = DBKAOST ;
VXJAOST.data[4] = A_UNITE(YBKAOST,mode1,1,XBKAOST);
 /* line 1054: */
 /* line 1055: */
DCKAOST = NSDAOST_make_group(BCKAOST, A_HVEC(ACKAOST,'S',A68_CHAR ), BNDAOST_hiddenaccess, A_HISVEC(ZBKAOST,VXJAOST,5,A68_208 )) ;
QNHAOST.data[35] = A_UNITE(CCKAOST,mode2,2,DCKAOST);
 /* line 1057: */
ARDAOST_makecommands( A_HISVEC(FCKAOST,QNHAOST,36,A68_208 ), &GCKAOST );
ECKAOST = GCKAOST;
} 
A_PROC_EXIT(make_globalcommands);
*ReturnedValue = (ECKAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void DBHAOST(void)   /* initialise DECS globalcommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/globalcommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/commandcaller.m","./mfiles/kernelreader.m","./mfiles/commandreader.m","./mfiles/commandsyntax.m","./mfiles/command.m","./mfiles/variables.m","./mfiles/ioprocs.m","./mfiles/testmode.m","./mfiles/basics.m","./mfiles/osinterface.m","./mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  PBHAOST;  /* OPERATORS - nil -> mode */
A68_VC  RBHAOST;  /* OPERATORS - nil -> mode */
A68_149  UBHAOST;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AYGAOST();   /* USE commandcaller */
TXEAOST();   /* USE kernelreader */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
FMDAOST();   /* USE command */
TKCAOST();   /* USE variables */
TIGAOST();   /* USE ioprocs */
QFBAOST();   /* USE testmode */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/globalcommands.a68";
A_config.translation_time = "Tue Apr  4 09:50:22 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "CBHAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:50:22 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS globalcommands);
UEAALIB_a68config(LGAALIB_configinfo, HBHAOST);
 /* line 67: */
KBHAOST_edit_var = JBHAOST;
NBHAOST_showtime_var = MBHAOST;
 /* line 71: */
OBHAOST_edit_type = (A_VVAC(PBHAOST));
QBHAOST_sysdir_var = (A_VVAC(RBHAOST));
 /* line 72: */
UBHAOST.fn.fn_global = SBHAOST_anonymous;
UBHAOST.nonlocals = A68_NIL;
TBHAOST_print_issue = (UBHAOST);
 /* line 74: */
 /* line 75: */
 /* line 79: */
 /* line 82: */
 /* line 113: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 152: */
 /* line 153: */
 /* line 155: */
 /* line 175: */
 /* line 214: */
 /* line 232: */
 /* line 236: */
 /* line 253: */
 /* line 254: */
 /* line 1058: */
A_PROC_EXIT(DECS globalcommands);
} 
#undef NL
/* end of translation of ./a68files/globalcommands.a68 */
