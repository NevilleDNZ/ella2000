
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
/* UNAME:LXIBTRN */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t112,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 4 CHAR */
struct A68t113{
struct A68t114  Access;
A_PAD_ISTRUCT(A68_114 ,PAD_24)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE114)  */

A_PROCEDURE(struct A68t111 *,A68t115,(A68_VC ,struct A68t113 ,struct A68t97 ),(A68_VC ,struct A68t113 ,struct A68t97 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,MODE113,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE111) MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE111,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t111 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE111,MODE26,MODE97) MODE35 */
struct A68t120{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_25)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_26)
A68_SINT  Device;
A_PAD_SINT(PAD_27)
A68_SINT  Links;
A_PAD_SINT(PAD_28)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_29)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_30)
A68_LINT  Size;
A_PAD_LINT(PAD_31)
A68_LINT  Accessed;
A_PAD_LINT(PAD_32)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_33)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_34)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t122 ;

A_PROCEDURE(struct A68t120 *,A68t121,(struct A68t122 ,struct A68t97 ),(struct A68t122 ,struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122,MODE97) REF MODE120 */
struct A68t122 { A68_INT mode; union {
struct A68t111 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(REF MODE111,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t111 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE111,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t111 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE111,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t111 *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE111,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ),(A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t130,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t131,(void),(void *));
typedef struct A68t131  A68_131 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t134{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t134 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC *),(A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t139,(void),(void *));
typedef struct A68t139  A68_139 ;    /* PROC BOOL */
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t141 ,struct A68t97 ),(struct A68t141 ,struct A68t97 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE141,MODE97) VOID */
A_VECTOR(struct A68t142 ,A68t141);
typedef struct A68t141  A68_141 ;    /* VECTOR [] MODE142 */
struct A68t142{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t143,(void),(void *));
typedef struct A68t143  A68_143 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t147,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REAL) REAL */
struct A68t148{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t149,(A68_BOOL ,struct A68t148 *),(A68_BOOL ,struct A68t148 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(BOOL) MODE148 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t148 ,A68_BOOL ),(struct A68t148 ,A68_BOOL ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE148,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t148 *),(struct A68t148 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC MODE148 */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t154 ;
struct A68t155 ;

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,struct A68t143 ,struct A68t154 ,struct A68t155 ),(A68_VC ,struct A68t143 ,struct A68t154 ,struct A68t155 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE143,MODE154,MODE155) VOID */

A_PROCEDURE(A68_BOOL ,A68t154,(A68_VC ,struct A68t136 ),(A68_VC ,struct A68t136 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE136) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t156 ,struct A68t97 ),(struct A68t156 ,struct A68t97 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE156,MODE97) VOID */
struct A68t158{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t159{
A68_VC  Id;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t160{
A68_INT  Int;
A_PAD_INT(PAD_36)
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
A_PAD_INT(PAD_37)
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
A_PAD_INT(PAD_38)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT)  */
struct A68t167{
A68_INT  Sort;
A_PAD_INT(PAD_39)
A68_VC  Attrname;
struct A68t161  Value;
struct A68t168 * Usage;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,REF MODE26,MODE161,REF MODE168)  */
struct A68t168{
A68_INT  Contextno;
A_PAD_INT(PAD_40)
A68_INT  Closureno;
A_PAD_INT(PAD_41)
A68_INT  Libv_spec;
A_PAD_INT(PAD_42)
A68_INT  Libv_body;
A_PAD_INT(PAD_43)
A68_BOOL  Import;
A_PAD_BOOL(PAD_44)
A68_BOOL  Export;
A_PAD_BOOL(PAD_45)
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
A_PAD_INT(PAD_46)
A68_VC  Text;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t172{
A68_INT  Sort;
A_PAD_INT(PAD_47)
struct A68t170  Test;
struct A68t170  Standard;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,MODE170,MODE170)  */
struct A68t173{
A68_INT  Nameno;
A_PAD_INT(PAD_48)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT)  */
struct A68t174{
A68_INT  Intno;
A_PAD_INT(PAD_49)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT)  */
struct A68t175{
struct A68t170  Left;
A68_INT  Sort;
A_PAD_INT(PAD_50)
struct A68t170  Right;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE170,INT,MODE170)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_51)
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
A_PAD_INT(PAD_52)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_INT  Fnull;
A_PAD_INT(PAD_53)
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
A_PAD_INT(PAD_54)
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
A_PAD_INT(PAD_55)
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
A_PAD_INT(PAD_56)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Tnull;
A_PAD_INT(PAD_57)
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
A_PAD_INT(PAD_58)
A68_VC  Typename;
struct A68t161  Attr;
struct A68t199  Body;
struct A68t168 * Usage;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE199,REF MODE168)  */
struct A68t202{
A68_INT  Constno;
A_PAD_INT(PAD_59)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT)  */
struct A68t203{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Primno;
A_PAD_INT(PAD_61)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT)  */
struct A68t204{
A68_INT  Typeno;
A_PAD_INT(PAD_62)
struct A68t170  Index;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,MODE170)  */
struct A68t205{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
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
A_PAD_INT(PAD_64)
A68_VC  Constname;
struct A68t161  Attr;
struct A68t208  Value;
struct A68t168 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE208,REF MODE168)  */
struct A68t209{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
struct A68t32  String;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t210{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_67)
A68_INT  Firstno;
A_PAD_INT(PAD_68)
A68_INT  Lastno;
A_PAD_INT(PAD_69)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,INT,INT)  */
struct A68t212{
struct A68t208  Alt;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE208,REF MODE212)  */
struct A68t213{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_INT  Nameno;
A_PAD_INT(PAD_71)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT)  */
struct A68t214{
struct A68t208  Sink;
struct A68t208  Source;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t215{
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
struct A68t208  Assoc;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,INT,MODE208)  */
struct A68t216{
struct A68t208  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_74)
A68_INT  Altno;
A_PAD_INT(PAD_75)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t217{
struct A68t208  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_76)
A68_INT  Nameno;
A_PAD_INT(PAD_77)
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
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
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
A_PAD_INT(PAD_80)
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
A_PAD_INT(PAD_81)
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
A_PAD_INT(PAD_82)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT)  */
struct A68t239{
A68_INT  Fnno;
A_PAD_INT(PAD_83)
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
A_PAD_INT(PAD_84)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
struct A68t244  Join;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE244,REF MODE247)  */
struct A68t249{
A68_INT  Nameno;
A_PAD_INT(PAD_85)
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
A_PAD_INT(PAD_86)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT)  */
struct A68t266{
struct A68t170  Size;
struct A68t257  Elem;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t267{
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t208  Test;
struct A68t257  Output;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(BOOL,INT,MODE208,MODE257,REF MODE267)  */
struct A68t268{
A68_BOOL  Check;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
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
A_PAD_BOOL(PAD_91)
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
A_PAD_INT(PAD_92)
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT)  */
struct A68t273{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_93)
struct A68t158  Ctname;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t274{
A68_INT  Sort;
A_PAD_INT(PAD_94)
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
A_PAD_INT(PAD_95)
struct A68t170  Interval;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,MODE170,MODE208,MODE170)  */
struct A68t278{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
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
A_PAD_BOOL(PAD_98)
struct A68t280  Fnbody;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE160,BOOL,MODE280)  */
struct A68t281{
A68_INT  Bodynull;
A_PAD_INT(PAD_99)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT)  */
struct A68t282{
A68_INT  Sort;
A_PAD_INT(PAD_100)
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
A_PAD_INT(PAD_101)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_102)
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
A_PAD_INT(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
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
A_PAD_INT(PAD_105)
struct A68t294 * Outers;
struct A68t294 * Freelist;
struct A68t295 * Outerslist;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,REF MODE294,REF MODE294,REF MODE295)  */
A_VECTOR(struct A68t294 *,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] REF MODE294 */

A_PROCEDURE(struct A68t173 *,A68t299,(A68_INT ),(A68_INT ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(INT) REF MODE173 */

A_PROCEDURE(struct A68t174 *,A68t300,(A68_INT ),(A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT) REF MODE174 */

A_PROCEDURE(struct A68t178 *,A68t301,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE170) REF MODE178 */

A_PROCEDURE(struct A68t181 *,A68t302,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE170) REF MODE181 */

A_PROCEDURE(struct A68t187 *,A68t303,(A68_INT ),(A68_INT ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT) REF MODE187 */

A_PROCEDURE(struct A68t191 *,A68t304,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE186) REF MODE191 */

A_PROCEDURE(struct A68t195 *,A68t305,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE186) REF MODE195 */

A_PROCEDURE(struct A68t202 *,A68t306,(A68_INT ),(A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(INT) REF MODE202 */

A_PROCEDURE(struct A68t206 *,A68t307,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE186) REF MODE206 */

A_PROCEDURE(struct A68t258 *,A68t308,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE242) REF MODE258 */

A_PROCEDURE(struct A68t259 *,A68t309,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE242) REF MODE259 */

A_PROCEDURE(struct A68t234 *,A68t310,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE208) REF MODE234 */

A_PROCEDURE(struct A68t253 *,A68t311,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE208) REF MODE253 */

A_PROCEDURE(struct A68t239 *,A68t312,(A68_INT ),(A68_INT ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(INT) REF MODE239 */

A_PROCEDURE(struct A68t271 *,A68t313,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE170) REF MODE271 */

A_PROCEDURE(struct A68t276 *,A68t314,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE208) REF MODE276 */

A_PROCEDURE(struct A68t179 *,A68t315,(A68_INT ),(A68_INT ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t162 *,A68t316,(A68_INT ),(A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) REF MODE162 */

A_PROCEDURE(struct A68t169 *,A68t317,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE161) REF MODE169 */

A_PROCEDURE(struct A68t165 *,A68t318,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE161) REF MODE165 */
A_VECTOR(struct A68t159 *,A68t319);
typedef struct A68t319  A68_319 ;    /* VECTOR [] REF MODE159 */
struct A68t320{
struct A68t161  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE161,BOOL)  */
struct A68t321{
struct A68t164 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(REF MODE164,BOOL)  */
struct A68t322{
struct A68t167 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(REF MODE167,BOOL)  */
struct A68t323{
struct A68t170  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE170,BOOL)  */
struct A68t324{
struct A68t182 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(REF MODE182,BOOL)  */
struct A68t325{
struct A68t183 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(REF MODE183,BOOL)  */
struct A68t326{
struct A68t185  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE185,BOOL)  */
struct A68t327{
struct A68t184  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(MODE184,BOOL)  */
struct A68t328{
struct A68t189 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE189,BOOL)  */
struct A68t329{
struct A68t186  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE186,BOOL)  */
struct A68t330{
struct A68t197  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE197,BOOL)  */
struct A68t331{
struct A68t200  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE200,BOOL)  */
struct A68t332{
struct A68t199  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE199,BOOL)  */
struct A68t333{
struct A68t201 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(REF MODE201,BOOL)  */
struct A68t334{
struct A68t207 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE207,BOOL)  */
struct A68t335{
struct A68t212 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(REF MODE212,BOOL)  */
struct A68t336{
struct A68t223 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t336  A68_336 ;    /* STRUCT(REF MODE223,BOOL)  */
struct A68t337{
struct A68t268 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(REF MODE268,BOOL)  */
struct A68t338{
struct A68t208  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE208,BOOL)  */
struct A68t339{
struct A68t252  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(MODE252,BOOL)  */
struct A68t340{
struct A68t250  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE250,BOOL)  */
struct A68t341{
struct A68t248  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t341  A68_341 ;    /* STRUCT(MODE248,BOOL)  */
struct A68t342{
struct A68t269  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(MODE269,BOOL)  */
struct A68t343{
struct A68t254 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t343  A68_343 ;    /* STRUCT(REF MODE254,BOOL)  */
struct A68t344{
struct A68t240 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t344  A68_344 ;    /* STRUCT(REF MODE240,BOOL)  */
struct A68t345{
struct A68t241 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(REF MODE241,BOOL)  */
struct A68t346{
struct A68t249 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE249,BOOL)  */
struct A68t347{
struct A68t242 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(REF MODE242,BOOL)  */
struct A68t348{
struct A68t267 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t348  A68_348 ;    /* STRUCT(REF MODE267,BOOL)  */
struct A68t349{
struct A68t257  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t349  A68_349 ;    /* STRUCT(MODE257,BOOL)  */
struct A68t350{
struct A68t256 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(REF MODE256,BOOL)  */
struct A68t351{
struct A68t243 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t351  A68_351 ;    /* STRUCT(REF MODE243,BOOL)  */
struct A68t352{
struct A68t244 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t352  A68_352 ;    /* STRUCT(REF MODE244,BOOL)  */
struct A68t353{
struct A68t247 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t353  A68_353 ;    /* STRUCT(REF MODE247,BOOL)  */
struct A68t354{
struct A68t238  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(MODE238,BOOL)  */
struct A68t355{
struct A68t237 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t355  A68_355 ;    /* STRUCT(REF MODE237,BOOL)  */
struct A68t356{
struct A68t280  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t356  A68_356 ;    /* STRUCT(MODE280,BOOL)  */
struct A68t357{
struct A68t282  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t357  A68_357 ;    /* STRUCT(MODE282,BOOL)  */
struct A68t358{
struct A68t285  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t358  A68_358 ;    /* STRUCT(REF MODE285,BOOL)  */
struct A68t359{
struct A68t284 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(REF MODE284,BOOL)  */
struct A68t360{
struct A68t293  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t360  A68_360 ;    /* STRUCT(MODE293,BOOL)  */
struct A68t361{
struct A68t297 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(REF MODE297,BOOL)  */
struct A68t362 ;

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t161 ,struct A68t362 *,struct A68t320 *),(struct A68t161 ,struct A68t362 *,struct A68t320 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE161,REF MODE362) MODE320 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t164 *,struct A68t362 *,struct A68t321 *),(struct A68t164 *,struct A68t362 *,struct A68t321 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE164,REF MODE362) MODE321 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t167 *,struct A68t362 *,struct A68t322 *),(struct A68t167 *,struct A68t362 *,struct A68t322 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE167,REF MODE362) MODE322 */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t170 ,struct A68t362 *,struct A68t323 *),(struct A68t170 ,struct A68t362 *,struct A68t323 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE170,REF MODE362) MODE323 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t182 *,struct A68t362 *,struct A68t324 *),(struct A68t182 *,struct A68t362 *,struct A68t324 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE182,REF MODE362) MODE324 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t183 *,struct A68t362 *,struct A68t325 *),(struct A68t183 *,struct A68t362 *,struct A68t325 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE183,REF MODE362) MODE325 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t185 ,struct A68t362 *,struct A68t326 *),(struct A68t185 ,struct A68t362 *,struct A68t326 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE185,REF MODE362) MODE326 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t184 ,struct A68t362 *,struct A68t327 *),(struct A68t184 ,struct A68t362 *,struct A68t327 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE184,REF MODE362) MODE327 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t189 *,struct A68t362 *,struct A68t328 *),(struct A68t189 *,struct A68t362 *,struct A68t328 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE189,REF MODE362) MODE328 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t186 ,struct A68t362 *,struct A68t329 *),(struct A68t186 ,struct A68t362 *,struct A68t329 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE186,REF MODE362) MODE329 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t197 ,struct A68t362 *,struct A68t330 *),(struct A68t197 ,struct A68t362 *,struct A68t330 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE197,REF MODE362) MODE330 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t200 ,struct A68t362 *,struct A68t331 *),(struct A68t200 ,struct A68t362 *,struct A68t331 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE200,REF MODE362) MODE331 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t199 ,struct A68t362 *,struct A68t332 *),(struct A68t199 ,struct A68t362 *,struct A68t332 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE199,REF MODE362) MODE332 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t201 *,struct A68t362 *,struct A68t333 *),(struct A68t201 *,struct A68t362 *,struct A68t333 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE201,REF MODE362) MODE333 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t207 *,struct A68t362 *,struct A68t334 *),(struct A68t207 *,struct A68t362 *,struct A68t334 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE207,REF MODE362) MODE334 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t212 *,struct A68t362 *,struct A68t335 *),(struct A68t212 *,struct A68t362 *,struct A68t335 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE212,REF MODE362) MODE335 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t223 *,struct A68t362 *,struct A68t336 *),(struct A68t223 *,struct A68t362 *,struct A68t336 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE223,REF MODE362) MODE336 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t268 *,struct A68t362 *,struct A68t337 *),(struct A68t268 *,struct A68t362 *,struct A68t337 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE268,REF MODE362) MODE337 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t208 ,struct A68t362 *,struct A68t338 *),(struct A68t208 ,struct A68t362 *,struct A68t338 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE208,REF MODE362) MODE338 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t252 ,struct A68t362 *,struct A68t339 *),(struct A68t252 ,struct A68t362 *,struct A68t339 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE252,REF MODE362) MODE339 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t250 ,struct A68t362 *,struct A68t340 *),(struct A68t250 ,struct A68t362 *,struct A68t340 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE250,REF MODE362) MODE340 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t248 ,struct A68t362 *,struct A68t341 *),(struct A68t248 ,struct A68t362 *,struct A68t341 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE248,REF MODE362) MODE341 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t269 ,struct A68t362 *,struct A68t342 *),(struct A68t269 ,struct A68t362 *,struct A68t342 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE269,REF MODE362) MODE342 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t254 *,struct A68t362 *,struct A68t343 *),(struct A68t254 *,struct A68t362 *,struct A68t343 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE254,REF MODE362) MODE343 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t240 *,struct A68t362 *,struct A68t344 *),(struct A68t240 *,struct A68t362 *,struct A68t344 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE240,REF MODE362) MODE344 */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t241 *,struct A68t362 *,struct A68t345 *),(struct A68t241 *,struct A68t362 *,struct A68t345 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE241,REF MODE362) MODE345 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t249 *,struct A68t362 *,struct A68t346 *),(struct A68t249 *,struct A68t362 *,struct A68t346 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE249,REF MODE362) MODE346 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t242 *,struct A68t362 *,struct A68t347 *),(struct A68t242 *,struct A68t362 *,struct A68t347 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(REF MODE242,REF MODE362) MODE347 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t267 *,struct A68t362 *,struct A68t348 *),(struct A68t267 *,struct A68t362 *,struct A68t348 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(REF MODE267,REF MODE362) MODE348 */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t257 ,struct A68t362 *,struct A68t349 *),(struct A68t257 ,struct A68t362 *,struct A68t349 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE257,REF MODE362) MODE349 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t256 *,struct A68t362 *,struct A68t350 *),(struct A68t256 *,struct A68t362 *,struct A68t350 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE256,REF MODE362) MODE350 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t243 *,struct A68t362 *,struct A68t351 *),(struct A68t243 *,struct A68t362 *,struct A68t351 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE243,REF MODE362) MODE351 */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t244 *,struct A68t362 *,struct A68t352 *),(struct A68t244 *,struct A68t362 *,struct A68t352 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE244,REF MODE362) MODE352 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t247 *,struct A68t362 *,struct A68t353 *),(struct A68t247 *,struct A68t362 *,struct A68t353 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE247,REF MODE362) MODE353 */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t238 ,struct A68t362 *,struct A68t354 *),(struct A68t238 ,struct A68t362 *,struct A68t354 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE238,REF MODE362) MODE354 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t237 *,struct A68t362 *,struct A68t355 *),(struct A68t237 *,struct A68t362 *,struct A68t355 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE237,REF MODE362) MODE355 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t280 ,struct A68t362 *,struct A68t356 *),(struct A68t280 ,struct A68t362 *,struct A68t356 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE280,REF MODE362) MODE356 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t282 ,struct A68t362 *,struct A68t357 *),(struct A68t282 ,struct A68t362 *,struct A68t357 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE282,REF MODE362) MODE357 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t285 ,struct A68t362 *,struct A68t358 *),(struct A68t285 ,struct A68t362 *,struct A68t358 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE285,REF MODE362) MODE358 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t284 *,struct A68t362 *,struct A68t359 *),(struct A68t284 *,struct A68t362 *,struct A68t359 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE284,REF MODE362) MODE359 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t293 ,struct A68t362 *,struct A68t360 *),(struct A68t293 ,struct A68t362 *,struct A68t360 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE293,REF MODE362) MODE360 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t297 *,struct A68t362 *,struct A68t97 ,struct A68t361 *),(struct A68t297 *,struct A68t362 *,struct A68t97 ,struct A68t361 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE297,REF MODE362,MODE97) MODE361 */
struct A68t362{
struct A68t363  Attr;
struct A68t364  Attrstr;
struct A68t365  Attrdec;
struct A68t366  Formula;
struct A68t367  Formulas;
struct A68t368  Intdec;
struct A68t369  Range;
struct A68t370  Formularange;
struct A68t371  Tstr;
struct A68t372  Type;
struct A68t373  Alternative;
struct A68t374  Alternatives;
struct A68t375  Typebody;
struct A68t376  Typedec;
struct A68t377  Constdec;
struct A68t378  Ualts;
struct A68t379  Ustr;
struct A68t380  Uchoices;
struct A68t381  Unit;
struct A68t382  Mparam;
struct A68t383  Macparams;
struct A68t384  Instance;
struct A68t385  Declaration;
struct A68t386  Printitems;
struct A68t387  Print;
struct A68t388  Fault;
struct A68t389  Names;
struct A68t390  Let;
struct A68t391  Seqchoices;
struct A68t392  Seqstep;
struct A68t393  Sequence;
struct A68t394  Make;
struct A68t395  Join;
struct A68t396  Joins;
struct A68t397  Step;
struct A68t398  Series;
struct A68t399  Fnbody;
struct A68t400  Macspec;
struct A68t401  Macspecs;
struct A68t402  Fndec;
struct A68t403  Outer;
struct A68t404  Closure;
struct A68t362 * Rest;
};
typedef struct A68t362  A68_362 ;    /* STRUCT(MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,MODE403,MODE404,REF MODE362)  */
struct A68t406 ;

A_PROCEDURE(struct A68t362 *,A68t405,(struct A68t362 *,struct A68t406 ),(struct A68t362 *,struct A68t406 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE362,MODE406) REF MODE362 */
A_VECTOR(struct A68t407 ,A68t406);
typedef struct A68t406  A68_406 ;    /* VECTOR [] MODE407 */
struct A68t407 { A68_INT mode; union {
struct A68t363  mode1;
struct A68t364  mode2;
struct A68t365  mode3;
struct A68t366  mode4;
struct A68t367  mode5;
struct A68t368  mode6;
struct A68t369  mode7;
struct A68t370  mode8;
struct A68t371  mode9;
struct A68t372  mode10;
struct A68t373  mode11;
struct A68t374  mode12;
struct A68t375  mode13;
struct A68t376  mode14;
struct A68t377  mode15;
struct A68t378  mode16;
struct A68t379  mode17;
struct A68t380  mode18;
struct A68t381  mode19;
struct A68t382  mode20;
struct A68t383  mode21;
struct A68t384  mode22;
struct A68t385  mode23;
struct A68t386  mode24;
struct A68t387  mode25;
struct A68t388  mode26;
struct A68t389  mode27;
struct A68t390  mode28;
struct A68t391  mode29;
struct A68t392  mode30;
struct A68t393  mode31;
struct A68t394  mode32;
struct A68t395  mode33;
struct A68t396  mode34;
struct A68t397  mode35;
struct A68t398  mode36;
struct A68t399  mode37;
struct A68t400  mode38;
struct A68t401  mode39;
struct A68t402  mode40;
struct A68t403  mode41;
struct A68t404  mode42;
} data; };
typedef struct A68t407  A68_407 ;    /* UNION(MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,MODE403,MODE404)  */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t362 *),(struct A68t362 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE362) VOID */

A_PROCEDURE(struct A68t171 *,A68t409,(A68_INT ),(A68_INT ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(INT) REF MODE171 */

A_PROCEDURE(A68_INT ,A68t410,(struct A68t170 ,struct A68t97 ),(struct A68t170 ,struct A68t97 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE170,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t411,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE170) INT */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t170 ,struct A68t170 *),(struct A68t170 ,struct A68t170 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE170) MODE170 */

A_PROCEDURE(struct A68t167 *,A68t413,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE293) REF MODE167 */

A_PROCEDURE(struct A68t183 *,A68t414,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE293) REF MODE183 */

A_PROCEDURE(struct A68t201 *,A68t415,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE293) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t416,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE293) REF MODE207 */

A_PROCEDURE(struct A68t284 *,A68t417,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE293) REF MODE284 */

A_PROCEDURE(A68_INT ,A68t418,(struct A68t168 *,struct A68t288 ),(struct A68t168 *,struct A68t288 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE168,REF MODE288) INT */

A_PROCEDURE(A68_INT ,A68t419,(struct A68t168 *,struct A68t289 ),(struct A68t168 *,struct A68t289 ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE168,REF MODE289) INT */

A_PROCEDURE(A68_INT ,A68t420,(struct A68t168 *,struct A68t290 ),(struct A68t168 *,struct A68t290 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE168,REF MODE290) INT */

A_PROCEDURE(A68_INT ,A68t421,(struct A68t168 *,struct A68t291 ),(struct A68t168 *,struct A68t291 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE168,REF MODE291) INT */

A_PROCEDURE(A68_INT ,A68t422,(struct A68t168 *,struct A68t292 ),(struct A68t168 *,struct A68t292 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE168,REF MODE292) INT */

A_PROCEDURE(struct A68t167 *,A68t423,(struct A68t162 ,struct A68t297 *,struct A68t287 *),(struct A68t162 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE162,REF MODE297,REF MODE287) REF MODE167 */

A_PROCEDURE(struct A68t183 *,A68t424,(struct A68t174 ,struct A68t297 *,struct A68t287 *),(struct A68t174 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE174,REF MODE297,REF MODE287) REF MODE183 */

A_PROCEDURE(struct A68t201 *,A68t425,(struct A68t187 ,struct A68t297 *,struct A68t287 *),(struct A68t187 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE187,REF MODE297,REF MODE287) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t426,(struct A68t202 ,struct A68t297 *,struct A68t287 *),(struct A68t202 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE202,REF MODE297,REF MODE287) REF MODE207 */

A_PROCEDURE(struct A68t284 *,A68t427,(struct A68t239 ,struct A68t297 *,struct A68t287 *),(struct A68t239 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE239,REF MODE297,REF MODE287) REF MODE284 */

A_PROCEDURE(struct A68t190 *,A68t428,(struct A68t284 *),(struct A68t284 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE284) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t189 *,struct A68t170 *),(struct A68t189 *,struct A68t170 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(REF MODE189) MODE170 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t186 ,struct A68t287 *,struct A68t170 *),(struct A68t186 ,struct A68t287 *,struct A68t170 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE186,REF MODE287) MODE170 */

A_PROCEDURE(struct A68t284 *,A68t431,(struct A68t284 *,struct A68t287 *,struct A68t287 *),(struct A68t284 *,struct A68t287 *,struct A68t287 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE284,REF MODE287,REF MODE287) REF MODE284 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t249 *,struct A68t284 *,struct A68t186 *),(struct A68t249 *,struct A68t284 *,struct A68t186 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE249,REF MODE284) MODE186 */

A_PROCEDURE(A68_INT ,A68t433,(struct A68t249 *),(struct A68t249 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE249) INT */

A_PROCEDURE(A68_INT ,A68t434,(struct A68t249 *,A68_INT ),(struct A68t249 *,A68_INT ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE249,INT) INT */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t208 ,struct A68t284 *,struct A68t287 *,struct A68t186 *),(struct A68t208 ,struct A68t284 *,struct A68t287 *,struct A68t186 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE208,REF MODE284,REF MODE287) MODE186 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t186 ,struct A68t287 *,struct A68t186 *),(struct A68t186 ,struct A68t287 *,struct A68t186 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE186,REF MODE287) MODE186 */

A_PROCEDURE(A68_BOOL ,A68t437,(struct A68t186 ,struct A68t186 ,struct A68t287 *,struct A68t287 *,A68_BOOL ),(struct A68t186 ,struct A68t186 ,struct A68t287 *,struct A68t287 *,A68_BOOL ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE186,MODE186,REF MODE287,REF MODE287,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t438,(struct A68t217 *,struct A68t287 *),(struct A68t217 *,struct A68t287 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE217,REF MODE287) INT */
struct A68t439{
A68_BITS  Options;
A_PAD_BITS(PAD_148)
};
typedef struct A68t439  A68_439 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t439 ,struct A68t439 ,struct A68t439 *),(struct A68t439 ,struct A68t439 ,struct A68t439 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE439,MODE439) MODE439 */

A_PROCEDURE(struct A68t439 *,A68t441,(struct A68t439 *,struct A68t439 ),(struct A68t439 *,struct A68t439 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE439,MODE439) REF MODE439 */

A_PROCEDURE(A68_BOOL ,A68t442,(struct A68t439 ,struct A68t439 ),(struct A68t439 ,struct A68t439 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE439,MODE439) BOOL */

A_PROCEDURE(A68_BOOL ,A68t443,(struct A68t439 ,A68_INT ),(struct A68t439 ,A68_INT ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE439,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t444,(A68_INT ,struct A68t439 *),(A68_INT ,struct A68t439 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(INT) MODE439 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 61 CHAR */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t439 *),(struct A68t439 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC MODE439 */
A_ISTRUCT(A68_CHAR ,54,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,66,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 66 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t454);
typedef struct A68t454  A68_454 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_VC ,6,A68t455);
typedef struct A68t455  A68_455 ;    /* STRUCT 6 MODE26 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t297 *,struct A68t439 ,struct A68t97 ,struct A68t361 *),(struct A68t297 *,struct A68t439 ,struct A68t97 ,struct A68t361 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE297,MODE439,MODE97) MODE361 */
A_ISTRUCT(A68_CHAR ,3,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t458);
typedef struct A68t458  A68_458 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t460,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t102 *,A68_VC ,A68_INT ,A68_VC *),(struct A68t102 *,A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF REF MODE102,MODE26,INT) REF MODE26 */
A_ISTRUCT(struct A68t52 ,2,A68t462);
typedef struct A68t462  A68_462 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_INT ,A68t463,(struct A68t284 *),(struct A68t284 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE284) INT */

A_PROCEDURE(A68_VOID ,A68t464,(A68_BOOL ,struct A68t292 *),(A68_BOOL ,struct A68t292 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(BOOL) MODE292 */

A_PROCEDURE(A68_VOID ,A68t465,(A68_INT ,struct A68t284 *),(A68_INT ,struct A68t284 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(INT,REF MODE284) VOID */

A_PROCEDURE(A68_VOID ,A68t466,(A68_INT ,struct A68t186 *),(A68_INT ,struct A68t186 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(INT) MODE186 */
A_ISTRUCT(A68_CHAR ,20,A68t467);
typedef struct A68t467  A68_467 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t468);
typedef struct A68t468  A68_468 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t469);
typedef struct A68t469  A68_469 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t470,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t471,(A68_BOOL ,struct A68t286 *),(A68_BOOL ,struct A68t286 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(BOOL) MODE286 */
A_VECTOR(struct A68t242 *,A68t472);
typedef struct A68t472  A68_472 ;    /* VECTOR [] REF MODE242 */

A_PROCEDURE(A68_VOID ,A68t473,(A68_BOOL ,struct A68t472 *),(A68_BOOL ,struct A68t472 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(BOOL) MODE472 */

A_PROCEDURE(struct A68t213 *,A68t474,(void),(void *));
typedef struct A68t474  A68_474 ;    /* PROC REF MODE213 */

A_PROCEDURE(struct A68t213 *,A68t475,(struct A68t283 ,struct A68t186 ,A68_INT ),(struct A68t283 ,struct A68t186 ,A68_INT ,void *));
typedef struct A68t475  A68_475 ;    /* PROC(MODE283,MODE186,INT) REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE238) VOID */

A_PROCEDURE(A68_VOID ,A68t477,(A68_INT ,struct A68t208 ),(A68_INT ,struct A68t208 ,void *));
typedef struct A68t477  A68_477 ;    /* PROC(INT,MODE208) VOID */

A_PROCEDURE(struct A68t213 *,A68t478,(A68_VC ,struct A68t186 ,struct A68t208 ),(A68_VC ,struct A68t186 ,struct A68t208 ,void *));
typedef struct A68t478  A68_478 ;    /* PROC(REF MODE26,MODE186,MODE208) REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t283 ,struct A68t208 ,struct A68t213 *),(struct A68t283 ,struct A68t208 ,struct A68t213 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE283,MODE208,REF MODE213) VOID */

A_PROCEDURE(A68_VOID ,A68t480,(A68_VC *),(A68_VC *,void *));
typedef struct A68t480  A68_480 ;    /* PROC REF MODE26 */
A_ISTRUCT(struct A68t407 ,4,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 4 MODE407 */

A_PROCEDURE(A68_BOOL ,A68t482,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t482  A68_482 ;    /* PROC(MODE208) BOOL */

A_PROCEDURE(A68_VOID ,A68t483,(struct A68t225 *,A68_BOOL ,struct A68t362 *,struct A68t338 *),(struct A68t225 *,A68_BOOL ,struct A68t362 *,struct A68t338 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(REF MODE225,BOOL,REF MODE362) MODE338 */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t226 *,A68_BOOL ,struct A68t362 *,struct A68t338 *),(struct A68t226 *,A68_BOOL ,struct A68t362 *,struct A68t338 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(REF MODE226,BOOL,REF MODE362) MODE338 */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t208 ,A68_BOOL ,struct A68t362 *,struct A68t338 *),(struct A68t208 ,A68_BOOL ,struct A68t362 *,struct A68t338 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(MODE208,BOOL,REF MODE362) MODE338 */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t208 ,struct A68t338 *),(struct A68t208 ,struct A68t338 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(MODE208) MODE338 */

A_PROCEDURE(struct A68t213 *,A68t487,(struct A68t213 *),(struct A68t213 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(REF MODE213) REF MODE213 */
struct A68t488 { A68_INT mode; union {
struct A68t338  mode1;
struct A68t223 * mode2;
} data; };
typedef struct A68t488  A68_488 ;    /* UNION(MODE338,REF MODE223)  */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t208 ,struct A68t488 *),(struct A68t208 ,struct A68t488 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE208) MODE488 */

A_PROCEDURE(A68_VOID ,A68t490,(struct A68t218 *,struct A68t338 *),(struct A68t218 *,struct A68t338 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(REF MODE218) MODE338 */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t219 *,struct A68t338 *),(struct A68t219 *,struct A68t338 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF MODE219) MODE338 */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t224 *,struct A68t338 *),(struct A68t224 *,struct A68t338 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(REF MODE224) MODE338 */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t208 ,struct A68t208 ,A68_BOOL ,A68_BOOL ,struct A68t338 *),(struct A68t208 ,struct A68t208 ,A68_BOOL ,A68_BOOL ,struct A68t338 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE208,MODE208,BOOL,BOOL) MODE338 */

A_PROCEDURE(A68_VOID ,A68t494,(struct A68t338 *),(struct A68t338 *,void *));
typedef struct A68t494  A68_494 ;    /* PROC MODE338 */
A_ISTRUCT(struct A68t407 ,3,A68t495);
typedef struct A68t495  A68_495 ;    /* STRUCT 3 MODE407 */

A_PROCEDURE(A68_VOID ,A68t496,(struct A68t269 ,struct A68t362 *,struct A68t354 *),(struct A68t269 ,struct A68t362 *,struct A68t354 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(MODE269,REF MODE362) MODE354 */

A_PROCEDURE(A68_VOID ,A68t497,(struct A68t242 *,struct A68t362 *,struct A68t354 *),(struct A68t242 *,struct A68t362 *,struct A68t354 *,void *));
typedef struct A68t497  A68_497 ;    /* PROC(REF MODE242,REF MODE362) MODE354 */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t208 ,struct A68t208 *),(struct A68t208 ,struct A68t208 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE208) MODE208 */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t249 *,struct A68t213 *,struct A68t208 ),(struct A68t249 *,struct A68t213 *,struct A68t208 ,void *));
typedef struct A68t499  A68_499 ;    /* PROC(REF MODE249,REF MODE213,MODE208) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t500);
typedef struct A68t500  A68_500 ;    /* STRUCT 13 CHAR */
struct A68t501{
struct A68t213 * Uname;
struct A68t501 * Rest;
};
typedef struct A68t501  A68_501 ;    /* STRUCT(REF MODE213,REF MODE501)  */

A_PROCEDURE(A68_VOID ,A68t502,(struct A68t243 *,struct A68t362 *,struct A68t354 *),(struct A68t243 *,struct A68t362 *,struct A68t354 *,void *));
typedef struct A68t502  A68_502 ;    /* PROC(REF MODE243,REF MODE362) MODE354 */

A_PROCEDURE(A68_VOID ,A68t503,(struct A68t182 *,struct A68t208 *),(struct A68t182 *,struct A68t208 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE182) MODE208 */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t182 *,struct A68t186 *),(struct A68t182 *,struct A68t186 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(REF MODE182) MODE186 */

A_PROCEDURE(A68_VOID ,A68t505,(struct A68t244 *,struct A68t362 *,struct A68t354 *),(struct A68t244 *,struct A68t362 *,struct A68t354 *,void *));
typedef struct A68t505  A68_505 ;    /* PROC(REF MODE244,REF MODE362) MODE354 */

A_PROCEDURE(A68_VOID ,A68t506,(struct A68t208 ,A68_INT ,struct A68t208 *),(struct A68t208 ,A68_INT ,struct A68t208 *,void *));
typedef struct A68t506  A68_506 ;    /* PROC(MODE208,INT) MODE208 */
A_ISTRUCT(A68_CHAR ,28,A68t507);
typedef struct A68t507  A68_507 ;    /* STRUCT 28 CHAR */
struct A68t508{
struct A68t249 * Input;
struct A68t249 * Output;
A68_BOOL  Changed;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t508  A68_508 ;    /* STRUCT(REF MODE249,REF MODE249,BOOL)  */
A_ISTRUCT(A68_CHAR ,7,A68t509);
typedef struct A68t509  A68_509 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t510);
typedef struct A68t510  A68_510 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t511);
typedef struct A68t511  A68_511 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t512);
typedef struct A68t512  A68_512 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t513,(struct A68t284 *,struct A68t508 *),(struct A68t284 *,struct A68t508 *,void *));
typedef struct A68t513  A68_513 ;    /* PROC(REF MODE284) MODE508 */

A_PROCEDURE(A68_VOID ,A68t514,(A68_VC ,struct A68t280 ,struct A68t508 ,struct A68t286 ,struct A68t248 *),(A68_VC ,struct A68t280 ,struct A68t508 ,struct A68t286 ,struct A68t248 *,void *));
typedef struct A68t514  A68_514 ;    /* PROC(REF MODE26,MODE280,MODE508,REF MODE286) MODE248 */

A_PROCEDURE(A68_VOID ,A68t515,(struct A68t508 ,struct A68t208 ,struct A68t359 *),(struct A68t508 ,struct A68t208 ,struct A68t359 *,void *));
typedef struct A68t515  A68_515 ;    /* PROC(MODE508,MODE208) MODE359 */

A_PROCEDURE(A68_VOID ,A68t516,(struct A68t253 *,struct A68t362 *,struct A68t359 *),(struct A68t253 *,struct A68t362 *,struct A68t359 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(REF MODE253,REF MODE362) MODE359 */
A_ISTRUCT(struct A68t407 ,5,A68t517);
typedef struct A68t517  A68_517 ;    /* STRUCT 5 MODE407 */

A_PROCEDURE(A68_VOID ,A68t518,(struct A68t272 *,struct A68t362 *,struct A68t359 *),(struct A68t272 *,struct A68t362 *,struct A68t359 *,void *));
typedef struct A68t518  A68_518 ;    /* PROC(REF MODE272,REF MODE362) MODE359 */

A_PROCEDURE(A68_BOOL ,A68t519,(struct A68t186 ,struct A68t186 ),(struct A68t186 ,struct A68t186 ,void *));
typedef struct A68t519  A68_519 ;    /* PROC(MODE186,MODE186) BOOL */
struct A68t524 { A68_INT mode; union {
struct A68t521 * mode1;
struct A68t522 * mode2;
struct A68t523 * mode3;
} data; };
typedef struct A68t524  A68_524 ;    /* UNION(REF MODE521,REF MODE522,REF MODE523,VOID)  */
struct A68t521{
A68_INT  Rsize;
A_PAD_INT(PAD_150)
struct A68t524  Container;
};
typedef struct A68t521  A68_521 ;    /* STRUCT(INT,MODE524)  */
struct A68t522{
A68_INT  Size;
A_PAD_INT(PAD_151)
A68_BOOL  Same;
A_PAD_BOOL(PAD_152)
struct A68t524  Container;
};
typedef struct A68t522  A68_522 ;    /* STRUCT(INT,BOOL,MODE524)  */
struct A68t523{
A68_INT  Ssize;
A_PAD_INT(PAD_153)
struct A68t524  Container;
};
typedef struct A68t523  A68_523 ;    /* STRUCT(INT,MODE524)  */
struct A68t525{
struct A68t208  Unit;
struct A68t186  Type;
struct A68t524  Container;
struct A68t525 * Rest;
};
typedef struct A68t525  A68_525 ;    /* STRUCT(MODE208,MODE186,MODE524,REF MODE525)  */
struct A68t526{
struct A68t208  U;
struct A68t186  T;
struct A68t524  F;
};
typedef struct A68t526  A68_526 ;    /* STRUCT(MODE208,MODE186,MODE524)  */

A_PROCEDURE(A68_BOOL ,A68t527,(struct A68t524 ,struct A68t524 ),(struct A68t524 ,struct A68t524 ,void *));
typedef struct A68t527  A68_527 ;    /* PROC(MODE524,MODE524) BOOL */

A_PROCEDURE(A68_BOOL ,A68t528,(struct A68t526 ,struct A68t526 ),(struct A68t526 ,struct A68t526 ,void *));
typedef struct A68t528  A68_528 ;    /* PROC(MODE526,MODE526) BOOL */

A_PROCEDURE(struct A68t525 *,A68t529,(struct A68t186 ,struct A68t208 ),(struct A68t186 ,struct A68t208 ,void *));
typedef struct A68t529  A68_529 ;    /* PROC(MODE186,MODE208) REF MODE525 */

A_PROCEDURE(A68_VOID ,A68t530,(struct A68t186 ,struct A68t208 ,struct A68t524 ),(struct A68t186 ,struct A68t208 ,struct A68t524 ,void *));
typedef struct A68t530  A68_530 ;    /* PROC(MODE186,MODE208,MODE524) VOID */

A_PROCEDURE(A68_VOID ,A68t531,(struct A68t526 ,struct A68t526 *),(struct A68t526 ,struct A68t526 *,void *));
typedef struct A68t531  A68_531 ;    /* PROC(MODE526) MODE526 */
A_VECTOR(struct A68t526 ,A68t532);
typedef struct A68t532  A68_532 ;    /* VECTOR [] MODE526 */

A_PROCEDURE(A68_VOID ,A68t533,(struct A68t532 ,struct A68t186 ,struct A68t526 *),(struct A68t532 ,struct A68t186 ,struct A68t526 *,void *));
typedef struct A68t533  A68_533 ;    /* PROC(MODE532,MODE186) MODE526 */

A_PROCEDURE(A68_VOID ,A68t534,(struct A68t526 ,struct A68t170 ,struct A68t170 ,struct A68t526 *),(struct A68t526 ,struct A68t170 ,struct A68t170 ,struct A68t526 *,void *));
typedef struct A68t534  A68_534 ;    /* PROC(MODE526,MODE170,MODE170) MODE526 */

A_PROCEDURE(A68_VOID ,A68t535,(struct A68t526 *),(struct A68t526 *,void *));
typedef struct A68t535  A68_535 ;    /* PROC MODE526 */

A_PROCEDURE(A68_VOID ,A68t536,(struct A68t526 ,struct A68t526 ,struct A68t526 *),(struct A68t526 ,struct A68t526 ,struct A68t526 *,void *));
typedef struct A68t536  A68_536 ;    /* PROC(MODE526,MODE526) MODE526 */

A_PROCEDURE(A68_VOID ,A68t537,(struct A68t186 ,struct A68t525 *,struct A68t208 *),(struct A68t186 ,struct A68t525 *,struct A68t208 *,void *));
typedef struct A68t537  A68_537 ;    /* PROC(MODE186,REF MODE525) MODE208 */

A_PROCEDURE(A68_VOID ,A68t538,(struct A68t186 ,struct A68t526 *),(struct A68t186 ,struct A68t526 *,void *));
typedef struct A68t538  A68_538 ;    /* PROC(MODE186) MODE526 */

A_PROCEDURE(A68_VOID ,A68t539,(A68_BOOL ,struct A68t532 *),(A68_BOOL ,struct A68t532 *,void *));
typedef struct A68t539  A68_539 ;    /* PROC(BOOL) MODE532 */
A_ISTRUCT(struct A68t407 ,2,A68t540);
typedef struct A68t540  A68_540 ;    /* STRUCT 2 MODE407 */

A_PROCEDURE(A68_VOID ,A68t541,(struct A68t271 *,struct A68t359 *),(struct A68t271 *,struct A68t359 *,void *));
typedef struct A68t541  A68_541 ;    /* PROC(REF MODE271) MODE359 */

A_PROCEDURE(A68_VOID ,A68t542,(struct A68t280 ,struct A68t359 *),(struct A68t280 ,struct A68t359 *,void *));
typedef struct A68t542  A68_542 ;    /* PROC(MODE280) MODE359 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from options --- */
extern A68_BOOL  MBAAOST_includes(struct A68t439 ,struct A68t439 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_439 *);
/* --- End of imports from options --- */


/* --- Imports from modeprocs --- */
extern A68_INT  TNMATRN_formula_int(struct A68t170 ,struct A68t97 );
extern A68_INT  XOMATRN_int(struct A68t170 );
extern A68_284 * CQMATRN_get_outerfn(struct A68t293 );
extern A68_190 * MUNATRN_fndec_tfn(struct A68t284 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t208 ,struct A68t284 *,struct A68t287 *,A68_186 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from transformprocs --- */
extern A68_362 * THJATRN_make_newtprocs(struct A68t362 *,struct A68t406 );
extern A68_362 * AWLATRN_nulltprocs;
extern A68_VOID  DWLATRN_null_attr(struct A68t161 ,struct A68t362 *,A68_320 *);
extern A68_VOID  IWLATRN_null_formula(struct A68t170 ,struct A68t362 *,A68_323 *);
extern A68_VOID  NWLATRN_null_type(struct A68t186 ,struct A68t362 *,A68_329 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_189 * GAAATRN_niltstr;
extern A68_223 * IAAATRN_nilustr;
extern A68_249 * NAAATRN_nilnames;
extern A68_237 * SAAATRN_nilseries;
extern A68_201 * WAAATRN_niltypedec;
extern A68_284 * YAAATRN_nilfndec;
extern A68_250  ABAATRN_nilmacparams;
extern A68_182 * BBAATRN_nilformulas;
extern A68_168 * CBAATRN_nilusage;
extern A68_187 * IFAATRN_maketname(A68_INT );
extern A68_253 * WGAATRN_makeunittag(struct A68t208 );
extern A68_239 * LHAATRN_makefnname(A68_INT );
extern A68_166  ZHAATRN_attrnull;
extern A68_194  DIAATRN_tnull;
extern A68_236  FIAATRN_unull;
extern A68_272  NIAATRN_reform;
#define TIAATRN_flattenleft 1
#define UIAATRN_flattenright 2
#define VIAATRN_flattenboth 3
#define KKAATRN_usource 1
#define PKAATRN_localdec 2
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from osinterface --- */
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
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


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAOST(void);   /* options */
extern void HNMATRN(void);   /* modeprocs */
extern void IHJATRN(void);   /* transformprocs */
extern void BAAATRN(void);   /* assmodes */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_447   PXIBTRN = {"$Id: lets_transform.a68,v 34.2 1995/03/29 13:02:57 ella Exp $"}; 
A_GISVEC(A68_VC ,QXIBTRN,PXIBTRN,61)
static A68_449   KYIBTRN = {"Generate artificial names for signals in each function"}; 
A_GISVEC(A68_VC ,LYIBTRN,KYIBTRN,54)
static A68_450   MYIBTRN = {"Do not simplify UNITs"}; 
A_GISVEC(A68_VC ,NYIBTRN,MYIBTRN,21)
static A68_451   OYIBTRN = {"Do not recognise adjacent objects in strutures and CONCs in REFORM"}; 
A_GISVEC(A68_VC ,PYIBTRN,OYIBTRN,66)
static A68_452   QYIBTRN = {"Do not break down UNIT to name all instances"}; 
A_GISVEC(A68_VC ,RYIBTRN,QYIBTRN,44)
static A68_453   SYIBTRN = {"Do not break down UNIT to name all primitive nodes"}; 
A_GISVEC(A68_VC ,TYIBTRN,SYIBTRN,50)
static A68_454   UYIBTRN = {"Generate names for unnamed inputs"}; 
A_GISVEC(A68_VC ,VYIBTRN,UYIBTRN,33)
A68_46  XYIBTRN_lets_options;
static A68_457   OZIBTRN = {"_L_"}; 
A_GISVEC(A68_VC ,PZIBTRN,OZIBTRN,3)
static A68_458   SZIBTRN = {"_RTOS"}; 
A_GISVEC(A68_VC ,TZIBTRN,SZIBTRN,5)
static A68_458   WZIBTRN = {"_STOR"}; 
A_GISVEC(A68_VC ,XZIBTRN,WZIBTRN,5)
static A68_459   AAJBTRN = {"_l_input"}; 
A_GISVEC(A68_VC ,BAJBTRN,AAJBTRN,8)
#define EAJBTRN_nstep 25
static A68_467   AEJBTRN = {"Lets transform:  FN "}; 
A_GISVEC(A68_VC ,BEJBTRN,AEJBTRN,20)
static A68_468   GEJBTRN = {"  "}; 
A_GISVEC(A68_VC ,HEJBTRN,GEJBTRN,2)
static A68_467   TEJBTRN = {"Lets transform:  FN "}; 
A_GISVEC(A68_VC ,UEJBTRN,TEJBTRN,20)
static A68_468   ZEJBTRN = {"  "}; 
A_GISVEC(A68_VC ,AFJBTRN,ZEJBTRN,2)
#define UFJBTRN_vecstep 10
static A68_458   HLJBTRN = {"_l_fn"}; 
A_GISVEC(A68_VC ,JLJBTRN,HLJBTRN,5)
static A68_114   OLJBTRN = {"_l_m"}; 
A_GISVEC(A68_VC ,QLJBTRN,OLJBTRN,4)
static A68_114   VLJBTRN = {"_l_p"}; 
A_GISVEC(A68_VC ,XLJBTRN,VLJBTRN,4)
static A68_457   BAKBTRN = {"_lu"}; 
A_GISVEC(A68_VC ,CAKBTRN,BAKBTRN,3)
static A68_500   WCKBTRN = {"Reused nameno"}; 
A_GISVEC(A68_VC ,XCKBTRN,WCKBTRN,13)
#define GDKBTRN_nilunames (A68_501 *)A68_NIL
static A68_507   FHKBTRN = {"Unexpected \"to\" UNIT in JOIN"}; 
A_GISVEC(A68_VC ,GHKBTRN,FHKBTRN,28)
static A68_467   QHKBTRN = {"USTR expected in LET"}; 
A_GISVEC(A68_VC ,RHKBTRN,QHKBTRN,20)
static A68_509   FJKBTRN = {"NIL LET"}; 
A_GISVEC(A68_VC ,GJKBTRN,FJKBTRN,7)
static A68_510   LJKBTRN = {"Illegal nameno in LET = "}; 
A_GISVEC(A68_VC ,MJKBTRN,LJKBTRN,24)
static A68_458   YJKBTRN = {"Name "}; 
A_GISVEC(A68_VC ,ZJKBTRN,YJKBTRN,5)
static A68_511   DKKBTRN = {" not defined"}; 
A_GISVEC(A68_VC ,EKKBTRN,DKKBTRN,12)
#define ARKBTRN_nilcomponent (A68_525 *)A68_NIL
typedef struct   /* env of non-global proc */
{
int dummy;
} IAJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_461  VAJBTRN_make_name;
} XAJBTRN_make_name;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_461  VAJBTRN_make_name;
A68_102 * NAJBTRN_call_names;
A68_102 * OAJBTRN_multilet_names;
A68_102 * PAJBTRN_prims_names;
A68_BOOL  JZIBTRN_not_nameinst;
A_PAD_BOOL(PAD_158)
A68_213 * UBJBTRN_null_uname;
A68_BOOL  LZIBTRN_not_nameprim;
A_PAD_BOOL(PAD_162)
A68_BOOL  DZIBTRN_generated_names;
A_PAD_BOOL(PAD_165)
A68_BOOL  FZIBTRN_not_simplified;
A_PAD_BOOL(PAD_168)
A68_VC  DAJBTRN_input_name;
A68_BOOL  NZIBTRN_name_input;
A_PAD_BOOL(PAD_171)
A68_BOOL  HZIBTRN_not_adjacent;
A_PAD_BOOL(PAD_174)
A68_VC  ZZIBTRN_string_to_row;
A68_VC  VZIBTRN_row_to_string;
A68_102 * RAJBTRN_fnname_names;
A68_VC  RZIBTRN_dummy_fnname;
} ACJBTRN_transform_outerfn;
typedef struct   /* env of non-global proc */
{
A68_102 * Table;
} BBJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_292 * CCJBTRN_fns;
A68_BOOL * DCJBTRN_newdec;
} HCJBTRN_add_fndec;
typedef struct   /* env of non-global proc */
{
A68_BOOL * DCJBTRN_newdec;
A68_292 * CCJBTRN_fns;
} ZCJBTRN_replace_fndec;
typedef struct   /* env of non-global proc */
{
A68_293  Outer;
} LDJBTRN_output_type;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_461  VAJBTRN_make_name;
A68_102 * NAJBTRN_call_names;
A68_102 * OAJBTRN_multilet_names;
A68_102 * PAJBTRN_prims_names;
A68_BOOL  JZIBTRN_not_nameinst;
A_PAD_BOOL(PAD_159)
A68_213 * UBJBTRN_null_uname;
A68_287 * BCJBTRN_env;
A68_BOOL  LZIBTRN_not_nameprim;
A_PAD_BOOL(PAD_163)
A68_BOOL  DZIBTRN_generated_names;
A_PAD_BOOL(PAD_166)
A68_BOOL  FZIBTRN_not_simplified;
A_PAD_BOOL(PAD_169)
A68_465  XCJBTRN_replace_fndec;
A68_402  RDJBTRN_fndec;
A68_466  JDJBTRN_output_type;
A68_VC  DAJBTRN_input_name;
A68_BOOL  NZIBTRN_name_input;
A_PAD_BOOL(PAD_172)
A68_463  FCJBTRN_add_fndec;
A68_BOOL  HZIBTRN_not_adjacent;
A_PAD_BOOL(PAD_175)
A68_VC  ZZIBTRN_string_to_row;
A68_VC  VZIBTRN_row_to_string;
A68_102 * RAJBTRN_fnname_names;
A68_VC  RZIBTRN_dummy_fnname;
A68_INT * ODJBTRN_n_fnnames;
} TDJBTRN_fndec;
typedef struct   /* env of non-global proc */
{
A68_292 * CCJBTRN_fns;
} LCJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_292 * CCJBTRN_fns;
} DDJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_284 * Fdec;
} YDJBTRN_flt;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_284 * Fdec;
} REJBTRN_sys;
typedef struct   /* env of non-global proc */
{
A68_INT  MFJBTRN_empty;
A_PAD_INT(PAD_154)
A68_97  Msg;
} QFJBTRN_get_int;
typedef struct   /* env of non-global proc */
{
A68_INT  WFJBTRN_n_translations;
A_PAD_INT(PAD_155)
} AGJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WFJBTRN_n_translations;
A_PAD_INT(PAD_156)
} IGJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_286  VFJBTRN_nametypes;
} TGJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_286 * WGJBTRN_nametable;
} HHJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OHJBTRN_n_names;
A68_286 * WGJBTRN_nametable;
A68_472 * KHJBTRN_lettable;
A68_187 * YGJBTRN_illegalt;
} RHJBTRN_allocate_name;
typedef struct   /* env of non-global proc */
{
A68_474  PHJBTRN_allocate_name;
A68_286 * WGJBTRN_nametable;
A68_32  DGJBTRN_translations;
} FJJBTRN_add_nametype;
typedef struct   /* env of non-global proc */
{
A68_237 *** NJJBTRN_seriesptr;
A68_BOOL * OJJBTRN_have_series;
} SJJBTRN_add_step;
typedef struct   /* env of non-global proc */
{
A68_476  QJJBTRN_add_step;
A68_472 * KHJBTRN_lettable;
} ZJJBTRN_make_let;
typedef struct   /* env of non-global proc */
{
A68_475  DJJBTRN_add_nametype;
A68_477  XJJBTRN_make_let;
} MKJBTRN_make_uname;
typedef struct   /* env of non-global proc */
{
A68_286 * WGJBTRN_nametable;
A68_477  XJJBTRN_make_let;
} YKJBTRN_fill_uname;
typedef struct   /* env of non-global proc */
{
A68_461  VAJBTRN_make_name;
A68_102 * NAJBTRN_call_names;
A68_INT * BLJBTRN_n_calls;
} GLJBTRN_call_name;
typedef struct   /* env of non-global proc */
{
A68_461  VAJBTRN_make_name;
A68_102 * OAJBTRN_multilet_names;
A68_INT * CLJBTRN_n_multilets;
} NLJBTRN_multilet_name;
typedef struct   /* env of non-global proc */
{
A68_461  VAJBTRN_make_name;
A68_102 * PAJBTRN_prims_names;
A68_INT * DLJBTRN_n_prims;
} ULJBTRN_prims_name;
typedef struct   /* env of non-global proc */
{
A68_BOOL * ZLJBTRN_has_instance;
} EMJBTRN_look_for_instance;
typedef struct   /* env of non-global proc */
{
A68_BOOL * ZLJBTRN_has_instance;
A68_381  CMJBTRN_look_for_instance;
A68_362 * VMJBTRN_has_named;
} ZMJBTRN_unit_has_named;
typedef struct   /* env of non-global proc */
{
A68_BOOL  JZIBTRN_not_nameinst;
A_PAD_BOOL(PAD_157)
A68_362 * Tprocs;
A68_213 * UBJBTRN_null_uname;
A68_474  PHJBTRN_allocate_name;
A68_480  ELJBTRN_call_name;
A68_284 * Fdec;
A68_287 * BCJBTRN_env;
A68_479  WKJBTRN_fill_uname;
} HNJBTRN_uminst;
typedef struct   /* env of non-global proc */
{
A68_BOOL  JZIBTRN_not_nameinst;
A_PAD_BOOL(PAD_160)
A68_362 * Tprocs;
A68_482  XMJBTRN_unit_has_named;
A68_213 * UBJBTRN_null_uname;
A68_474  PHJBTRN_allocate_name;
A68_480  ELJBTRN_call_name;
A68_284 * Fdec;
A68_287 * BCJBTRN_env;
A68_479  WKJBTRN_fill_uname;
} FOJBTRN_udinst;
typedef struct   /* env of non-global proc */
{
A68_BOOL  LZIBTRN_not_nameprim;
A_PAD_BOOL(PAD_161)
A68_362 * Tprocs;
A68_213 * UBJBTRN_null_uname;
A68_474  PHJBTRN_allocate_name;
A68_480  SLJBTRN_prims_name;
A68_284 * Fdec;
A68_287 * BCJBTRN_env;
A68_479  WKJBTRN_fill_uname;
} TPJBTRN_uprim;
typedef struct   /* env of non-global proc */
{
A68_32  DGJBTRN_translations;
A68_485  RPJBTRN_uprim;
A68_483  FNJBTRN_uminst;
A68_484  DOJBTRN_udinst;
} OQJBTRN_unit;
typedef struct   /* env of non-global proc */
{
A68_INT * OHJBTRN_n_names;
A68_472 * KHJBTRN_lettable;
A68_BOOL  DZIBTRN_generated_names;
A_PAD_BOOL(PAD_164)
A68_286  VFJBTRN_nametypes;
A68_BOOL  FZIBTRN_not_simplified;
A_PAD_BOOL(PAD_167)
} ZRJBTRN_simplify_units;
typedef struct   /* env of non-global proc */
{
A68_287 * BCJBTRN_env;
A68_465  XCJBTRN_replace_fndec;
A68_402  RDJBTRN_fndec;
A68_476  QJJBTRN_add_step;
} WAKBTRN_declaration;
typedef struct   /* env of non-global proc */
{
A68_483  FNJBTRN_uminst;
A68_484  DOJBTRN_udinst;
A68_485  RPJBTRN_uprim;
A68_479  WKJBTRN_fill_uname;
A68_286  VFJBTRN_nametypes;
A68_32  DGJBTRN_translations;
A68_36  PEJBTRN_sys;
A68_474  PHJBTRN_allocate_name;
A68_213 * UBJBTRN_null_uname;
A68_480  LLJBTRN_multilet_name;
} SBKBTRN_let;
typedef struct   /* env of non-global proc */
{
A68_466  JDJBTRN_output_type;
A68_478  KKJBTRN_make_uname;
A68_480  ELJBTRN_call_name;
A68_411  OFJBTRN_get_int;
A68_286  VFJBTRN_nametypes;
A68_475  DJJBTRN_add_nametype;
A68_INT * BLJBTRN_n_calls;
A68_477  XJJBTRN_make_let;
} PEKBTRN_make;
typedef struct   /* env of non-global proc */
{
A68_32  DGJBTRN_translations;
A68_411  OFJBTRN_get_int;
A68_36  PEJBTRN_sys;
A68_472 * KHJBTRN_lettable;
A68_36  WDJBTRN_flt;
} MGKBTRN_join;
typedef struct   /* env of non-global proc */
{
A68_496  UAKBTRN_declaration;
A68_497  QBKBTRN_let;
A68_502  NEKBTRN_make;
A68_505  KGKBTRN_join;
} MIKBTRN_step;
typedef struct   /* env of non-global proc */
{
A68_472 * KHJBTRN_lettable;
A68_INT * OHJBTRN_n_names;
A68_36  WDJBTRN_flt;
A68_286 * WGJBTRN_nametable;
A68_187 * YGJBTRN_illegalt;
} AJKBTRN_check_names;
typedef struct   /* env of non-global proc */
{
A68_474  PHJBTRN_allocate_name;
A68_286  VFJBTRN_nametypes;
A68_475  DJJBTRN_add_nametype;
A68_477  XJJBTRN_make_let;
A68_286 * WGJBTRN_nametable;
A68_VC  DAJBTRN_input_name;
A68_32  DGJBTRN_translations;
A68_BOOL  NZIBTRN_name_input;
A_PAD_BOOL(PAD_170)
} MKKBTRN_process_iospec;
typedef struct   /* env of non-global proc */
{
A68_463  FCJBTRN_add_fndec;
A68_284 * Fdec;
A68_476  QJJBTRN_add_step;
} ANKBTRN_add_fnbody;
typedef struct   /* env of non-global proc */
{
A68_284 * Fdec;
A68_286 * WGJBTRN_nametable;
A68_INT * OHJBTRN_n_names;
A68_BOOL * OJJBTRN_have_series;
A68_237 ** MJJBTRN_series;
} ONKBTRN_new_fndec;
typedef struct   /* env of non-global proc */
{
A68_397  KIKBTRN_step;
A68_381  MQJBTRN_unit;
A68_513  KKKBTRN_process_iospec;
A68_284 * Fdec;
A68_143  YIKBTRN_check_names;
A68_515  MNKBTRN_new_fndec;
A68_486  XRJBTRN_simplify_units;
} FOKBTRN_unit_body;
typedef struct   /* env of non-global proc */
{
A68_287 * BCJBTRN_env;
A68_BOOL  HZIBTRN_not_adjacent;
A_PAD_BOOL(PAD_176)
A68_VC  ZZIBTRN_string_to_row;
A68_VC  VZIBTRN_row_to_string;
A68_514  YMKBTRN_add_fnbody;
A68_286  VFJBTRN_nametypes;
A68_480  ELJBTRN_call_name;
A68_475  DJJBTRN_add_nametype;
A68_477  XJJBTRN_make_let;
A68_513  KKKBTRN_process_iospec;
A68_284 * Fdec;
A68_286 * WGJBTRN_nametable;
A68_143  YIKBTRN_check_names;
A68_515  MNKBTRN_new_fndec;
} EPKBTRN_reformp;
typedef struct   /* env of non-global proc */
{
A68_513  KKKBTRN_process_iospec;
A68_284 * Fdec;
A68_514  YMKBTRN_add_fnbody;
A68_461  VAJBTRN_make_name;
A68_102 * RAJBTRN_fnname_names;
A68_VC  RZIBTRN_dummy_fnname;
A68_INT * ODJBTRN_n_fnnames;
A68_286  VFJBTRN_nametypes;
A68_515  MNKBTRN_new_fndec;
A68_478  KKJBTRN_make_uname;
A68_480  ELJBTRN_call_name;
A68_286 * WGJBTRN_nametable;
} OELBTRN_arith;
typedef struct   /* env of non-global proc */
{
A68_513  KKKBTRN_process_iospec;
A68_284 * Fdec;
A68_514  YMKBTRN_add_fnbody;
A68_461  VAJBTRN_make_name;
A68_102 * RAJBTRN_fnname_names;
A68_VC  RZIBTRN_dummy_fnname;
A68_INT * ODJBTRN_n_fnnames;
A68_286 * WGJBTRN_nametable;
A68_515  MNKBTRN_new_fndec;
A68_478  KKJBTRN_make_uname;
A68_480  ELJBTRN_call_name;
} NFLBTRN_non_unit_body;
typedef struct   /* env of non-global proc */
{
A68_286 * WGJBTRN_nametable;
} VHJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_286 * WGJBTRN_nametable;
} DIJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OHJBTRN_n_names;
} DSJBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_54  GSJBTRN_let_simplified;
A68_381  MSJBTRN_simplify_unit;
A68_472 * KHJBTRN_lettable;
} OSJBTRN_simplify_unit;
typedef struct   /* env of non-global proc */
{
A68_483  FNJBTRN_uminst;
A68_362 * Tprocs;
A68_484  DOJBTRN_udinst;
A68_485  RPJBTRN_uprim;
A68_498  VBKBTRN_do_unit;
A68_242 * L;
} XBKBTRN_do_unit;
typedef struct   /* env of non-global proc */
{
A68_479  WKJBTRN_fill_uname;
A68_286  VFJBTRN_nametypes;
A68_32  DGJBTRN_translations;
A68_36  PEJBTRN_sys;
} TCKBTRN_do_name;
typedef struct   /* env of non-global proc */
{
A68_478  KKJBTRN_make_uname;
A68_480  ELJBTRN_call_name;
A68_186  REKBTRN_type;
A68_243 * M;
A68_411  OFJBTRN_get_int;
A68_503  TEKBTRN_do_dimension;
} VEKBTRN_do_dimension;
typedef struct   /* env of non-global proc */
{
A68_186  REKBTRN_type;
A68_504  NFKBTRN_rowtype;
} PFKBTRN_rowtype;
typedef struct   /* env of non-global proc */
{
A68_32  DGJBTRN_translations;
A68_506  TGKBTRN_get_inst;
A68_411  OFJBTRN_get_int;
A68_36  PEJBTRN_sys;
A68_472 * KHJBTRN_lettable;
A68_36  WDJBTRN_flt;
} VGKBTRN_get_inst;
typedef struct   /* env of non-global proc */
{
A68_287 * BCJBTRN_env;
A68_372  IPKBTRN_simplify_type;
} KPKBTRN_simplify_type;
typedef struct   /* env of non-global proc */
{
A68_519  CQKBTRN_;
} EQKBTRN_;
typedef struct   /* env of non-global proc */
{
A68_BOOL  HZIBTRN_not_adjacent;
A_PAD_BOOL(PAD_173)
A68_519  CQKBTRN_;
} TRKBTRN_adjacent;
typedef struct   /* env of non-global proc */
{
A68_519  CQKBTRN_;
} YSKBTRN_break_down_unit;
typedef struct   /* env of non-global proc */
{
A68_VC  ZZIBTRN_string_to_row;
A68_VC  VZIBTRN_row_to_string;
A68_514  YMKBTRN_add_fnbody;
A68_286  VFJBTRN_nametypes;
A68_480  ELJBTRN_call_name;
A68_475  DJJBTRN_add_nametype;
A68_477  XJJBTRN_make_let;
} DVKBTRN_string_row;
typedef struct   /* env of non-global proc */
{
A68_531  BVKBTRN_string_row;
A68_528  RRKBTRN_adjacent;
} YWKBTRN_conc_unit;
typedef struct   /* env of non-global proc */
{
A68_533  WWKBTRN_conc_unit;
A68_519  CQKBTRN_;
} DBLBTRN_build_unit;
typedef struct   /* env of non-global proc */
{
A68_54  GSJBTRN_let_simplified;
A68_381  MSJBTRN_simplify_unit;
A68_472 * KHJBTRN_lettable;
A68_362 * Tprocs;
} TSJBTRN_simplify_uname;
typedef struct   /* env of non-global proc */
{
A68_381  MSJBTRN_simplify_unit;
A68_362 * Tprocs;
A68_487  RSJBTRN_simplify_uname;
A68_472 * KHJBTRN_lettable;
} ETJBTRN_simplify_to_str;
typedef struct   /* env of non-global proc */
{
A68_489  CTJBTRN_simplify_to_str;
A68_208  U;
} XTJBTRN_index_unit;
typedef struct   /* env of non-global proc */
{
A68_489  CTJBTRN_simplify_to_str;
A68_208  U;
} PUJBTRN_trim_unit;
typedef struct   /* env of non-global proc */
{
A68_381  MSJBTRN_simplify_unit;
A68_362 * Tprocs;
} QVJBTRN_conc_unit;
typedef struct   /* env of non-global proc */
{
A68_525 *** ATKBTRN_cptr;
A68_530  ETKBTRN_sub_unit;
A68_519  CQKBTRN_;
} GTKBTRN_sub_unit;
typedef struct   /* env of non-global proc */
{
A68_BOOL  BXKBTRN_string;
A_PAD_BOOL(PAD_177)
A68_531  BVKBTRN_string_row;
} HXKBTRN_trim;
typedef struct   /* env of non-global proc */
{
A68_534  FXKBTRN_trim;
} CZKBTRN_add_trim;
typedef struct   /* env of non-global proc */
{
A68_526 * TZKBTRN_ans;
A68_526 * YZKBTRN_most_recent;
A68_BOOL * ZZKBTRN_flatten_left;
A68_BOOL * AALBTRN_flatten_right;
A68_BOOL  BXKBTRN_string;
A_PAD_BOOL(PAD_178)
} DALBTRN_do_most_recent;
typedef struct   /* env of non-global proc */
{
A68_525 ** EBLBTRN_cptr;
A68_538  GBLBTRN_make_unit;
A68_533  WWKBTRN_conc_unit;
A68_519  CQKBTRN_;
} IBLBTRN_make_unit;
typedef struct   /* env of non-global proc */
{
A68_338  SVJBTRN_l;
A68_338  UVJBTRN_r;
A68_224 * Uconc;
A68_208  VVJBTRN_left;
A68_208  WVJBTRN_right;
} ZWJBTRN_new_conc;
typedef struct   /* env of non-global proc */
{
A68_526  Fu;
A68_170  Lwb;
A68_170  Upb;
A68_186  PXKBTRN_t;
} SXKBTRN_utrim;
typedef struct   /* env of non-global proc */
{
A68_188 * NBLBTRN_tr;
} RBLBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * BCLBTRN_n;
} HCLBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_192 * ZCLBTRN_ts;
} DDLBTRN_generator;

A68_VOID  RXIBTRN_lets_gennames(A68_439  *ReturnedValue);

A68_VOID  UXIBTRN_lets_nosimplify(A68_439  *ReturnedValue);

A68_VOID  XXIBTRN_lets_noadjacent(A68_439  *ReturnedValue);

A68_VOID  AYIBTRN_lets_noinst(A68_439  *ReturnedValue);

A68_VOID  DYIBTRN_lets_noprim(A68_439  *ReturnedValue);

A68_VOID  GYIBTRN_lets_nameinputs(A68_439  *ReturnedValue);

A68_VOID  BZIBTRN_lets_transform(A68_297 * Closure, A68_439  Options, A68_97  Msg, A68_361  *ReturnedValue);

A_STATIC A68_VOID  HAJBTRN_generator(A68_BOOL  FAJBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WAJBTRN_make_name(A68_102 * Table, A68_VC  Name, A68_INT  Index, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ABJBTRN_generator(A68_BOOL  YAJBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZBJBTRN_transform_outerfn(A68_293  Outer, A68_362 * Tprocs, A68_360  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  GCJBTRN_add_fndec(A68_284 * Fndec, void *NonLocals);

A_STATIC A68_VOID  KCJBTRN_generator(A68_BOOL  ICJBTRN_anonymous, A68_292  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YCJBTRN_replace_fndec(A68_INT  Fnno, A68_284 * Fndec, void *NonLocals);

A_STATIC A68_VOID  CDJBTRN_generator(A68_BOOL  ADJBTRN_anonymous, A68_292  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KDJBTRN_output_type(A68_INT  Fnno, A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SDJBTRN_fndec(A68_284 * Fdec, A68_362 * Tprocs, A68_359  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XDJBTRN_flt(A68_VC  Info, void *NonLocals);

A_STATIC A68_VOID  QEJBTRN_sys(A68_VC  Info, void *NonLocals);

A_STATIC A68_171 * IFJBTRN_makefint(A68_INT  Int);

A_STATIC A68_INT  PFJBTRN_get_int(A68_170  F, void *NonLocals);

A_STATIC A68_VOID  ZFJBTRN_generator(A68_BOOL  XFJBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HGJBTRN_generator(A68_BOOL  FGJBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SGJBTRN_generator(A68_BOOL  QGJBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GHJBTRN_generator(A68_BOOL  EHJBTRN_anonymous, A68_472  *ReturnedValue, void *NonLocals);

A_STATIC A68_213 * QHJBTRN_allocate_name(void *NonLocals);

A_STATIC A68_VOID  UHJBTRN_generator(A68_BOOL  SHJBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CIJBTRN_generator(A68_BOOL  AIJBTRN_anonymous, A68_472  *ReturnedValue, void *NonLocals);

A_STATIC A68_213 * EJJBTRN_add_nametype(A68_283  Nt, A68_186  Type, A68_INT  Old_index, void *NonLocals);

A_STATIC A68_VOID  RJJBTRN_add_step(A68_238  Step, void *NonLocals);

A_STATIC A68_VOID  YJJBTRN_make_let(A68_INT  Nameno, A68_208  Unit, void *NonLocals);

A_STATIC A68_213 * LKJBTRN_make_uname(A68_VC  Name, A68_186  Type, A68_208  Unit, void *NonLocals);

A_STATIC A68_VOID  XKJBTRN_fill_uname(A68_283  Nametype, A68_208  Unit, A68_213 * Uname, void *NonLocals);

A_STATIC A68_VOID  FLJBTRN_call_name(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MLJBTRN_multilet_name(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TLJBTRN_prims_name(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DMJBTRN_look_for_instance(A68_208  U, A68_362 * Tprocs, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  YMJBTRN_unit_has_named(A68_208  U, void *NonLocals);

A_STATIC A68_VOID  GNJBTRN_uminst(A68_225 * Um, A68_BOOL  Named, A68_362 * Newtprocs, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EOJBTRN_udinst(A68_226 * Ud, A68_BOOL  Named_outside, A68_362 * Newtprocs, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SPJBTRN_uprim(A68_208  Unit, A68_BOOL  Named, A68_362 * Newtprocs, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NQJBTRN_unit(A68_208  U, A68_362 * Tprocs, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YRJBTRN_simplify_units(A68_208  U, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CSJBTRN_generator(A68_BOOL  ASJBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NSJBTRN_simplify_unit(A68_208  U, A68_362 * Tprocs, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_213 * SSJBTRN_simplify_uname(A68_213 * Un, void *NonLocals);

A_STATIC A68_VOID  DTJBTRN_simplify_to_str(A68_208  U, A68_488  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WTJBTRN_index_unit(A68_218 * Uindex, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OUJBTRN_trim_unit(A68_219 * Utrim, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PVJBTRN_conc_unit(A68_224 * Uconc, A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BWJBTRN_add_ustr(A68_208  Left, A68_208  Right, A68_BOOL  Lstr, A68_BOOL  Rstr, A68_338  *ReturnedValue);

A_STATIC A68_VOID  YWJBTRN_new_conc(A68_338  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VAKBTRN_declaration(A68_269  D, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBKBTRN_let(A68_242 * L, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WBKBTRN_do_unit(A68_208  Unit, A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SCKBTRN_do_name(A68_249 * Name, A68_213 * Uname, A68_208  Unit, void *NonLocals);

A_STATIC A68_VOID  OEKBTRN_make(A68_243 * M, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UEKBTRN_do_dimension(A68_182 * Size, A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OFKBTRN_rowtype(A68_182 * Size, A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LGKBTRN_join(A68_244 * J, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UGKBTRN_get_inst(A68_208  U, A68_INT  Index, A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LIKBTRN_step(A68_238  S, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZIKBTRN_check_names(void *NonLocals);

A_STATIC A68_VOID  LKKBTRN_process_iospec(A68_284 * Fdec, A68_508  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZMKBTRN_add_fnbody(A68_VC  Name, A68_280  Body, A68_508  Iospec, A68_286  Nametypes, A68_248  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NNKBTRN_new_fndec(A68_508  Newspec, A68_208  Newunit, A68_359  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EOKBTRN_unit_body(A68_253 * Ut, A68_362 * Tprocs, A68_359  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DPKBTRN_reformp(A68_272 * Re, A68_362 * Tprocs, A68_359  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JPKBTRN_simplify_type(A68_186  Type, A68_362 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  DQKBTRN_(A68_186  A, A68_186  B, void *NonLocals);

A_STATIC A68_BOOL  DRKBTRN_(A68_524  A, A68_524  B);

A_STATIC A68_BOOL  SRKBTRN_adjacent(A68_526  L, A68_526  R, void *NonLocals);

A_STATIC A68_525 * XSKBTRN_break_down_unit(A68_186  Type, A68_208  Unit, void *NonLocals);

A_STATIC A68_VOID  FTKBTRN_sub_unit(A68_186  Type, A68_208  Unit, A68_524  Container, void *NonLocals);

A_STATIC A68_VOID  CVKBTRN_string_row(A68_526  Fu, A68_526  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XWKBTRN_conc_unit(A68_532  Elems, A68_186  Type, A68_526  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GXKBTRN_trim(A68_526  Fu, A68_170  Lwb, A68_170  Upb, A68_526  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RXKBTRN_utrim(A68_526  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BZKBTRN_add_trim(A68_526  L, A68_526  R, A68_526  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CALBTRN_do_most_recent(void *NonLocals);

A_STATIC A68_VOID  CBLBTRN_build_unit(A68_186  Type, A68_525 * List, A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HBLBTRN_make_unit(A68_186  Type, A68_526  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QBLBTRN_generator(A68_BOOL  OBLBTRN_anonymous, A68_532  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GCLBTRN_generator(A68_BOOL  ECLBTRN_anonymous, A68_532  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CDLBTRN_generator(A68_BOOL  ADLBTRN_anonymous, A68_532  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NELBTRN_arith(A68_271 * Arith, A68_359  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MFLBTRN_non_unit_body(A68_280  Body, A68_359  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BWJBTRN_add_ustr(A68_208  Left, A68_208  Right, A68_BOOL  Lstr, A68_BOOL  Rstr, A68_338  *ReturnedValue)
{ 
A68_223 * CWJBTRN_ans;
A68_223 ** DWJBTRN_uptr;
A68_208  EWJBTRN;  /* united object - for case conformity */
A68_223 * FWJBTRN_lu;
A68_223 * GWJBTRN;  /* clause result */
A68_223 * HWJBTRN_lptr;
A68_223  IWJBTRN;  /* collateral clause result */
A68_223 * JWJBTRN;  /* YIELD */
A68_223  KWJBTRN;  /* collateral clause result */
A68_223 * LWJBTRN;  /* YIELD */
A68_208  MWJBTRN;  /* united object - for case conformity */
A68_223 * NWJBTRN_ru;
A68_223 * OWJBTRN;  /* clause result */
A68_223 * PWJBTRN_rptr;
A68_223  QWJBTRN;  /* collateral clause result */
A68_223 * RWJBTRN;  /* YIELD */
A68_223  SWJBTRN;  /* collateral clause result */
A68_223 * TWJBTRN;  /* YIELD */
A68_338  UWJBTRN;  /* collateral clause result */
A68_208  VWJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  WWJBTRN;  /* clause result */
A_PROC_ENTRY(add_ustr);
 /* line 541: */
 /* line 542: */
{ 
 /* line 543: */
DWJBTRN_uptr = (&CWJBTRN_ans);
 /* line 544: */
 /* line 545: */
if ( Lstr )
{ 
EWJBTRN = Left ;
switch ( EWJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
FWJBTRN_lu = (EWJBTRN.data.mode21);
GWJBTRN = FWJBTRN_lu;
break;
default: 
A_IMP_SKIP ;
break;
} 
HWJBTRN_lptr = GWJBTRN;
 /* line 546: */
for ( ;; )
{ 
 /* line 547: */
if ( !((HWJBTRN_lptr!=IAAATRN_nilustr)) ) break;
 /* line 548: */
IWJBTRN.Elem = (*(&(HWJBTRN_lptr->Elem)));
IWJBTRN.Rest = IAAATRN_nilustr;
JWJBTRN = A_HEAP(A68_223 ) ;
(*JWJBTRN) = IWJBTRN ;
DWJBTRN_uptr = (&(((*DWJBTRN_uptr) = JWJBTRN)->Rest));
 /* line 549: */
 /* line 550: */
HWJBTRN_lptr = (*(&(HWJBTRN_lptr->Rest)));
}
 /* line 551: */
} 
else
{ 
KWJBTRN.Elem = Left;
 /* line 552: */
KWJBTRN.Rest = IAAATRN_nilustr;
LWJBTRN = A_HEAP(A68_223 ) ;
(*LWJBTRN) = KWJBTRN ;
(*DWJBTRN_uptr) = LWJBTRN;
} 
 /* line 553: */
 /* line 554: */
if ( Rstr )
{ 
MWJBTRN = Right ;
switch ( MWJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
NWJBTRN_ru = (MWJBTRN.data.mode21);
OWJBTRN = NWJBTRN_ru;
break;
default: 
A_IMP_SKIP ;
break;
} 
PWJBTRN_rptr = OWJBTRN;
 /* line 555: */
for ( ;; )
{ 
 /* line 556: */
if ( !((PWJBTRN_rptr!=IAAATRN_nilustr)) ) break;
 /* line 557: */
QWJBTRN.Elem = (*(&(PWJBTRN_rptr->Elem)));
QWJBTRN.Rest = IAAATRN_nilustr;
RWJBTRN = A_HEAP(A68_223 ) ;
(*RWJBTRN) = QWJBTRN ;
DWJBTRN_uptr = (&(((*DWJBTRN_uptr) = RWJBTRN)->Rest));
 /* line 558: */
 /* line 559: */
PWJBTRN_rptr = (*(&(PWJBTRN_rptr->Rest)));
}
 /* line 560: */
} 
else
{ 
SWJBTRN.Elem = Right;
 /* line 561: */
SWJBTRN.Rest = IAAATRN_nilustr;
TWJBTRN = A_HEAP(A68_223 ) ;
(*TWJBTRN) = SWJBTRN ;
(*DWJBTRN_uptr) = TWJBTRN;
} 
 /* line 562: */
UWJBTRN.U = A_UNITE(VWJBTRN,mode21,21,CWJBTRN_ans);
 /* line 563: */
UWJBTRN.C = A68_TRUE;
WWJBTRN = UWJBTRN;
} 
A_PROC_EXIT(add_ustr);
*ReturnedValue = (WWJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YWJBTRN_new_conc(A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZWJBTRN_new_conc *)NonLocals)->x)
{ 
A68_BOOL  AXJBTRN;  /* optbool result */
A68_338  BXJBTRN;  /* collateral clause result */
A68_224  CXJBTRN;  /* collateral clause result */
A68_224 * DXJBTRN;  /* YIELD */
A68_208  EXJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  FXJBTRN;  /* clause result */
A68_338  GXJBTRN;  /* collateral clause result */
A68_208  HXJBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(new_conc);
 /* line 568: */
AXJBTRN = NL(SVJBTRN_l).C;
if ( ! AXJBTRN )
{AXJBTRN = NL(UVJBTRN_r).C;
}
if ( AXJBTRN )
{ 
CXJBTRN.String = A68_FALSE;
CXJBTRN.Sort = (*(&(NL(Uconc)->Sort)));
CXJBTRN.Left = NL(VVJBTRN_left);
CXJBTRN.Right = NL(WVJBTRN_right);
DXJBTRN = A_HEAP(A68_224 ) ;
(*DXJBTRN) = CXJBTRN ;
BXJBTRN.U = A_UNITE(EXJBTRN,mode22,22,DXJBTRN);
 /* line 569: */
BXJBTRN.C = A68_TRUE;
FXJBTRN = BXJBTRN;
} 
else
{ 
GXJBTRN.U = A_UNITE(HXJBTRN,mode22,22,NL(Uconc));
 /* line 570: */
GXJBTRN.C = A68_FALSE;
FXJBTRN = GXJBTRN;
} 
A_PROC_EXIT(new_conc);
*ReturnedValue = (FXJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RXKBTRN_utrim(A68_526  *ReturnedValue, void *NonLocals)
#define NL(x) (((SXKBTRN_utrim *)NonLocals)->x)
{ 
A68_526  TXKBTRN;  /* collateral clause result */
A68_219  UXKBTRN;  /* collateral clause result */
A68_219 * VXKBTRN;  /* YIELD */
A68_208  WXKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  XXKBTRN;  /* united object - for case conformity */
A68_523 * YXKBTRN_fc;
A68_521 * ZXKBTRN_fr;
A68_522 * AYKBTRN_fs;
A68_524  BYKBTRN;  /* OPERATORS - mode -> union mode */
A68_526  CYKBTRN;  /* clause result */
A_PROC_ENTRY(utrim);
UXKBTRN.Unit = NL(Fu).U;
UXKBTRN.Range.Lwb = NL(Lwb);
UXKBTRN.Range.Upb = NL(Upb);
VXKBTRN = A_HEAP(A68_219 ) ;
(*VXKBTRN) = UXKBTRN ;
TXKBTRN.U = A_UNITE(WXKBTRN,mode17,17,VXKBTRN);
 /* line 1293: */
TXKBTRN.T = NL(PXKBTRN_t);
 /* line 1294: */
XXKBTRN = NL(Fu).F ;
switch ( XXKBTRN.mode )
{ 
case 3: /* REF STRUCT(INT,MODE524)  */
YXKBTRN_fc = (XXKBTRN.data.mode3);
 /* line 1295: */
TXKBTRN.F = (*(&(YXKBTRN_fc->Container)));
break;
case 1: /* REF STRUCT(INT,MODE524)  */
ZXKBTRN_fr = (XXKBTRN.data.mode1);
 /* line 1296: */
TXKBTRN.F = (*(&(ZXKBTRN_fr->Container)));
break;
case 2: /* REF STRUCT(INT,BOOL,MODE524)  */
AYKBTRN_fs = (XXKBTRN.data.mode2);
 /* line 1297: */
 /* line 1298: */
TXKBTRN.F = (*(&(AYKBTRN_fs->Container)));
break;
default: 
 /* line 1299: */
TXKBTRN.F = A_EMPTY(BYKBTRN,4);
break;
} 
CYKBTRN = TXKBTRN;
A_PROC_EXIT(utrim);
*ReturnedValue = (CYKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QBLBTRN_generator(A68_BOOL  OBLBTRN_anonymous, A68_532  *ReturnedValue, void *NonLocals)
#define NL(x) (((RBLBTRN_generator *)NonLocals)->x)
{ 
A68_532  SBLBTRN;  /* clause result */
A68_532  TBLBTRN;  /* OPERATORS - dynamic generator */
{ 
TBLBTRN.upb = XOMATRN_int((*(&(NL(NBLBTRN_tr)->Size)))) ;
( OBLBTRN_anonymous? A_VLOC(A68_526 ,TBLBTRN): A_VHEAP(A68_526 ,TBLBTRN) );
SBLBTRN = TBLBTRN;
} 
*ReturnedValue = (SBLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GCLBTRN_generator(A68_BOOL  ECLBTRN_anonymous, A68_532  *ReturnedValue, void *NonLocals)
#define NL(x) (((HCLBTRN_generator *)NonLocals)->x)
{ 
A68_532  ICLBTRN;  /* clause result */
A68_532  JCLBTRN;  /* OPERATORS - dynamic generator */
{ 
JCLBTRN.upb = (*NL(BCLBTRN_n)) ;
( ECLBTRN_anonymous? A_VLOC(A68_526 ,JCLBTRN): A_VHEAP(A68_526 ,JCLBTRN) );
ICLBTRN = JCLBTRN;
} 
*ReturnedValue = (ICLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CDLBTRN_generator(A68_BOOL  ADLBTRN_anonymous, A68_532  *ReturnedValue, void *NonLocals)
#define NL(x) (((DDLBTRN_generator *)NonLocals)->x)
{ 
A68_532  EDLBTRN;  /* clause result */
A68_532  FDLBTRN;  /* OPERATORS - dynamic generator */
{ 
FDLBTRN.upb = XOMATRN_int((*(&(NL(ZCLBTRN_ts)->Size)))) ;
( ADLBTRN_anonymous? A_VLOC(A68_526 ,FDLBTRN): A_VHEAP(A68_526 ,FDLBTRN) );
EDLBTRN = FDLBTRN;
} 
*ReturnedValue = (EDLBTRN);
return;
} 
#undef NL

A_STATIC A68_213 * SSJBTRN_simplify_uname(A68_213 * Un, void *NonLocals)
#define NL(x) (((TSJBTRN_simplify_uname *)NonLocals)->x)
{ 
A68_INT  USJBTRN_nameno;
A68_BOOL  VSJBTRN;  /* optbool result */
A68_BOOL * WSJBTRN;  /* YIELD */
A68_338  XSJBTRN;  /* avoid structure result */
A68_338  YSJBTRN_uc;
A68_208 * ZSJBTRN;  /* YIELD */
A68_213 * ATJBTRN;  /* clause result */
A_PROC_ENTRY(simplify_uname);
 /* line 459: */
 /* line 460: */
{ 
USJBTRN_nameno = (*(&(Un->Nameno)));
 /* line 461: */
 /* line 462: */
VSJBTRN = (USJBTRN_nameno>2);
if ( VSJBTRN )
{ /* line 463: */
VSJBTRN = !(*(&A_VINDEX(NL(GSJBTRN_let_simplified),USJBTRN_nameno)));
}
if ( VSJBTRN )
{ 
WSJBTRN = (&A_VINDEX(NL(GSJBTRN_let_simplified),USJBTRN_nameno)) ;
(*WSJBTRN) = A68_TRUE;
 /* line 464: */
 /* line 465: */
A_CALLPROC(NL(MSJBTRN_simplify_unit),((*(&((*(&A_VINDEX((*NL(KHJBTRN_lettable)),USJBTRN_nameno)))->Unit))), NL(Tprocs), &XSJBTRN),((*(&((*(&A_VINDEX((*NL(KHJBTRN_lettable)),USJBTRN_nameno)))->Unit))), NL(Tprocs), &XSJBTRN,(NL(MSJBTRN_simplify_unit)).nonlocals));
YSJBTRN_uc = XSJBTRN;
 /* line 466: */
if ( YSJBTRN_uc.C )
{ 
 /* line 467: */
ZSJBTRN = (&((*(&A_VINDEX((*NL(KHJBTRN_lettable)),USJBTRN_nameno)))->Unit)) ;
(*ZSJBTRN) = YSJBTRN_uc.U;
} 
} 
 /* line 468: */
 /* line 469: */
ATJBTRN = Un;
} 
A_PROC_EXIT(simplify_uname);
return( ATJBTRN );
} 
#undef NL

A_STATIC A68_VOID  DTJBTRN_simplify_to_str(A68_208  U, A68_488  *ReturnedValue, void *NonLocals)
#define NL(x) (((ETJBTRN_simplify_to_str *)NonLocals)->x)
{ 
A68_338  FTJBTRN;  /* avoid structure result */
A68_338  GTJBTRN_uc;
A68_208  HTJBTRN;  /* united object - for case conformity */
A68_213 * ITJBTRN_uname;
A68_213 * JTJBTRN_un;
A68_INT  KTJBTRN;  /* YIELD */
A68_208  LTJBTRN;  /* united object - for case conformity */
A68_223 * MTJBTRN_ustr;
A68_488  NTJBTRN;  /* clause result */
A68_488  OTJBTRN;  /* OPERATORS - mode -> union mode */
A68_488  PTJBTRN;  /* OPERATORS - mode -> union mode */
A68_488  QTJBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * RTJBTRN_ustr;
A68_488  STJBTRN;  /* OPERATORS - mode -> union mode */
A68_488  TTJBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(simplify_to_str);
 /* line 473: */
 /* line 474: */
{ 
A_CALLPROC(NL(MSJBTRN_simplify_unit),(U, NL(Tprocs), &FTJBTRN),(U, NL(Tprocs), &FTJBTRN,(NL(MSJBTRN_simplify_unit)).nonlocals));
GTJBTRN_uc = FTJBTRN;
 /* line 475: */
 /* line 476: */
HTJBTRN = GTJBTRN_uc.U ;
switch ( HTJBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
ITJBTRN_uname = (HTJBTRN.data.mode11);
 /* line 477: */
{ 
JTJBTRN_un = A_CALLPROC(NL(RSJBTRN_simplify_uname),(ITJBTRN_uname),(ITJBTRN_uname,(NL(RSJBTRN_simplify_uname)).nonlocals));
 /* line 478: */
 /* line 479: */
if ( ((*(&(JTJBTRN_un->Nameno)))>2) )
{ 
 /* line 480: */
KTJBTRN = (*(&(JTJBTRN_un->Nameno))) ;
LTJBTRN = (*(&((*(&A_VINDEX((*NL(KHJBTRN_lettable)),KTJBTRN)))->Unit))) ;
switch ( LTJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
MTJBTRN_ustr = (LTJBTRN.data.mode21);
 /* line 481: */
 /* line 482: */
NTJBTRN = A_UNITE(OTJBTRN,mode2,2,MTJBTRN_ustr);
break;
default: 
 /* line 483: */
 /* line 484: */
NTJBTRN = A_UNITE(PTJBTRN,mode1,1,GTJBTRN_uc);
break;
} 
} 
else
{ 
 /* line 485: */
 /* line 486: */
NTJBTRN = A_UNITE(QTJBTRN,mode1,1,GTJBTRN_uc);
} 
} 
break;
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
RTJBTRN_ustr = (HTJBTRN.data.mode21);
 /* line 488: */
 /* line 489: */
NTJBTRN = A_UNITE(STJBTRN,mode2,2,RTJBTRN_ustr);
break;
default: 
 /* line 490: */
NTJBTRN = A_UNITE(TTJBTRN,mode1,1,GTJBTRN_uc);
break;
} 
} 
A_PROC_EXIT(simplify_to_str);
*ReturnedValue = (NTJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WTJBTRN_index_unit(A68_218 * Uindex, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((XTJBTRN_index_unit *)NonLocals)->x)
{ 
A68_488  YTJBTRN;  /* avoid structure result */
A68_488  ZTJBTRN;  /* united object - for case conformity */
A68_223 * AUJBTRN_ustr;
A68_223 * BUJBTRN_uptr;
A68_INT  CUJBTRN;  /* to part of loop */
A68_INT  DUJBTRN;  /* loop control */
A68_338  EUJBTRN;  /* collateral clause result */
A68_338  FUJBTRN;  /* clause result */
A68_338  GUJBTRN_uc;
A68_338  HUJBTRN;  /* collateral clause result */
A68_218  IUJBTRN;  /* collateral clause result */
A68_218 * JUJBTRN;  /* YIELD */
A68_208  KUJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  LUJBTRN;  /* collateral clause result */
A_PROC_ENTRY(index_unit);
 /* line 494: */
 /* line 495: */
A_CALLPROC(NL(CTJBTRN_simplify_to_str),((*(&(Uindex->Unit))), &YTJBTRN),((*(&(Uindex->Unit))), &YTJBTRN,(NL(CTJBTRN_simplify_to_str)).nonlocals));
ZTJBTRN = YTJBTRN ;
switch ( ZTJBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE208,REF MODE223)  */
AUJBTRN_ustr = (ZTJBTRN.data.mode2);
 /* line 496: */
 /* line 497: */
{ 
BUJBTRN_uptr = AUJBTRN_ustr;
 /* line 498: */
CUJBTRN = (XOMATRN_int((*(&(Uindex->Index))))-1);
for ( DUJBTRN = 1;
DUJBTRN <= CUJBTRN;
DUJBTRN += 1 )
{ 
BUJBTRN_uptr = (*(&(BUJBTRN_uptr->Rest)));
}
 /* line 499: */
EUJBTRN.U = (*(&(BUJBTRN_uptr->Elem)));
 /* line 500: */
 /* line 501: */
EUJBTRN.C = A68_TRUE;
FUJBTRN = EUJBTRN;
} 
break;
case 1: /* STRUCT(MODE208,BOOL)  */
GUJBTRN_uc = (ZTJBTRN.data.mode1);
 /* line 502: */
 /* line 503: */
if ( GUJBTRN_uc.C )
{ 
IUJBTRN.Unit = GUJBTRN_uc.U;
IUJBTRN.Index = (*(&(Uindex->Index)));
JUJBTRN = A_HEAP(A68_218 ) ;
(*JUJBTRN) = IUJBTRN ;
HUJBTRN.U = A_UNITE(KUJBTRN,mode16,16,JUJBTRN);
 /* line 504: */
HUJBTRN.C = A68_TRUE;
FUJBTRN = HUJBTRN;
} 
else
{ 
LUJBTRN.U = NL(U);
 /* line 505: */
 /* line 506: */
LUJBTRN.C = A68_FALSE;
FUJBTRN = LUJBTRN;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(index_unit);
*ReturnedValue = (FUJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OUJBTRN_trim_unit(A68_219 * Utrim, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((PUJBTRN_trim_unit *)NonLocals)->x)
{ 
A68_488  QUJBTRN;  /* avoid structure result */
A68_488  RUJBTRN;  /* united object - for case conformity */
A68_223 * SUJBTRN_ustr;
A68_223 * TUJBTRN_uptr;
A68_INT  UUJBTRN_off;
A68_INT  VUJBTRN_upb;
A68_INT  WUJBTRN;  /* to part of loop */
A68_INT  XUJBTRN;  /* loop control */
A68_223 * YUJBTRN_ans;
A68_223 ** ZUJBTRN_nptr;
A68_INT  AVJBTRN;  /* to part of loop */
A68_INT  BVJBTRN;  /* loop control */
A68_223  CVJBTRN;  /* collateral clause result */
A68_223 * DVJBTRN;  /* YIELD */
A68_338  EVJBTRN;  /* collateral clause result */
A68_208  FVJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  GVJBTRN;  /* clause result */
A68_338  HVJBTRN_uc;
A68_338  IVJBTRN;  /* collateral clause result */
A68_219  JVJBTRN;  /* collateral clause result */
A68_219 * KVJBTRN;  /* YIELD */
A68_208  LVJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  MVJBTRN;  /* collateral clause result */
A_PROC_ENTRY(trim_unit);
 /* line 510: */
 /* line 511: */
A_CALLPROC(NL(CTJBTRN_simplify_to_str),((*(&(Utrim->Unit))), &QUJBTRN),((*(&(Utrim->Unit))), &QUJBTRN,(NL(CTJBTRN_simplify_to_str)).nonlocals));
RUJBTRN = QUJBTRN ;
switch ( RUJBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE208,REF MODE223)  */
SUJBTRN_ustr = (RUJBTRN.data.mode2);
 /* line 512: */
 /* line 513: */
{ 
TUJBTRN_uptr = SUJBTRN_ustr;
 /* line 514: */
UUJBTRN_off = (XOMATRN_int((*(&((&(Utrim->Range))->Lwb))))-1);
 /* line 515: */
VUJBTRN_upb = XOMATRN_int((*(&((&(Utrim->Range))->Upb))));
 /* line 516: */
WUJBTRN = UUJBTRN_off;
for ( XUJBTRN = 1;
XUJBTRN <= WUJBTRN;
XUJBTRN += 1 )
{ 
TUJBTRN_uptr = (*(&(TUJBTRN_uptr->Rest)));
}
 /* line 517: */
 /* line 518: */
ZUJBTRN_nptr = (&YUJBTRN_ans);
 /* line 519: */
 /* line 520: */
AVJBTRN = (VUJBTRN_upb-UUJBTRN_off);
for ( BVJBTRN = 1;
BVJBTRN <= AVJBTRN;
BVJBTRN += 1 )
{ 
 /* line 521: */
CVJBTRN.Elem = (*(&(TUJBTRN_uptr->Elem)));
CVJBTRN.Rest = IAAATRN_nilustr;
DVJBTRN = A_HEAP(A68_223 ) ;
(*DVJBTRN) = CVJBTRN ;
ZUJBTRN_nptr = (&(((*ZUJBTRN_nptr) = DVJBTRN)->Rest));
 /* line 522: */
 /* line 523: */
TUJBTRN_uptr = (*(&(TUJBTRN_uptr->Rest)));
}
 /* line 524: */
EVJBTRN.U = A_UNITE(FVJBTRN,mode21,21,YUJBTRN_ans);
 /* line 525: */
 /* line 526: */
EVJBTRN.C = A68_TRUE;
GVJBTRN = EVJBTRN;
} 
break;
case 1: /* STRUCT(MODE208,BOOL)  */
HVJBTRN_uc = (RUJBTRN.data.mode1);
 /* line 527: */
 /* line 528: */
if ( HVJBTRN_uc.C )
{ 
JVJBTRN.Unit = HVJBTRN_uc.U;
JVJBTRN.Range = (*(&(Utrim->Range)));
KVJBTRN = A_HEAP(A68_219 ) ;
(*KVJBTRN) = JVJBTRN ;
IVJBTRN.U = A_UNITE(LVJBTRN,mode17,17,KVJBTRN);
 /* line 529: */
IVJBTRN.C = A68_TRUE;
GVJBTRN = IVJBTRN;
} 
else
{ 
MVJBTRN.U = NL(U);
 /* line 530: */
 /* line 531: */
MVJBTRN.C = A68_FALSE;
GVJBTRN = MVJBTRN;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(trim_unit);
*ReturnedValue = (GVJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PVJBTRN_conc_unit(A68_224 * Uconc, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((QVJBTRN_conc_unit *)NonLocals)->x)
{ 
A68_338  RVJBTRN;  /* avoid structure result */
A68_338  SVJBTRN_l;
A68_338  TVJBTRN;  /* avoid structure result */
A68_338  UVJBTRN_r;
A68_208  VVJBTRN_left;
A68_208  WVJBTRN_right;
A68_494  XWJBTRN_new_conc;   /* proc value of non-global proc */
A68_208  IXJBTRN;  /* united object - for case conformity */
A68_223 * JXJBTRN_ustr;
A68_338  KXJBTRN;  /* clause result */
A68_208  LXJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  MXJBTRN;  /* avoid structure result */
A68_338  NXJBTRN;  /* avoid structure result */
A68_208  OXJBTRN;  /* united object - for case conformity */
A68_223 * PXJBTRN_ustr;
A68_208  QXJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  RXJBTRN;  /* avoid structure result */
A68_338  SXJBTRN;  /* avoid structure result */
A68_208  TXJBTRN;  /* united object - for case conformity */
A68_223 * UXJBTRN_lustr;
A68_208  VXJBTRN;  /* united object - for case conformity */
A68_223 * WXJBTRN_rustr;
A68_208  XXJBTRN;  /* OPERATORS - mode -> union mode */
A68_208  YXJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  ZXJBTRN;  /* avoid structure result */
A68_338  AYJBTRN;  /* avoid structure result */
A68_338  BYJBTRN;  /* avoid structure result */
A68_338  CYJBTRN;  /* collateral clause result */
A68_208  DYJBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(conc_unit);
 /* line 535: */
 /* line 536: */
if ( !(*(&(Uconc->String))) )
{ 
A_CALLPROC(NL(MSJBTRN_simplify_unit),((*(&(Uconc->Left))), NL(Tprocs), &RVJBTRN),((*(&(Uconc->Left))), NL(Tprocs), &RVJBTRN,(NL(MSJBTRN_simplify_unit)).nonlocals));
SVJBTRN_l = RVJBTRN;
 /* line 537: */
A_CALLPROC(NL(MSJBTRN_simplify_unit),((*(&(Uconc->Right))), NL(Tprocs), &TVJBTRN),((*(&(Uconc->Right))), NL(Tprocs), &TVJBTRN,(NL(MSJBTRN_simplify_unit)).nonlocals));
UVJBTRN_r = TVJBTRN;
 /* line 538: */
VVJBTRN_left = SVJBTRN_l.U;
WVJBTRN_right = UVJBTRN_r.U;
 /* line 540: */
 /* line 566: */
 /* line 567: */
A_CLOSURE( XWJBTRN_new_conc, YWJBTRN_new_conc, ZWJBTRN_new_conc );
(( ZWJBTRN_new_conc * ) ( XWJBTRN_new_conc.nonlocals )) -> SVJBTRN_l = SVJBTRN_l;
(( ZWJBTRN_new_conc * ) ( XWJBTRN_new_conc.nonlocals )) -> UVJBTRN_r = UVJBTRN_r;
(( ZWJBTRN_new_conc * ) ( XWJBTRN_new_conc.nonlocals )) -> Uconc = Uconc;
(( ZWJBTRN_new_conc * ) ( XWJBTRN_new_conc.nonlocals )) -> VVJBTRN_left = VVJBTRN_left;
(( ZWJBTRN_new_conc * ) ( XWJBTRN_new_conc.nonlocals )) -> WVJBTRN_right = WVJBTRN_right;
 /* line 573: */
 /* line 574: */
if ( ((*(&(Uconc->Sort)))==TIAATRN_flattenleft) )
{ 
 /* line 575: */
IXJBTRN = VVJBTRN_left ;
switch ( IXJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
JXJBTRN_ustr = (IXJBTRN.data.mode21);
 /* line 576: */
 /* line 577: */
BWJBTRN_add_ustr( A_UNITE(LXJBTRN,mode21,21,JXJBTRN_ustr), WVJBTRN_right, A68_TRUE, A68_FALSE, &MXJBTRN );
KXJBTRN = MXJBTRN;
break;
default: 
 /* line 578: */
A_CALLPROC(XWJBTRN_new_conc,( &NXJBTRN),( &NXJBTRN,(XWJBTRN_new_conc).nonlocals));
KXJBTRN = NXJBTRN;
break;
} 
} 
else
{ 
 /* line 579: */
if ( ((*(&(Uconc->Sort)))==UIAATRN_flattenright) )
{ 
 /* line 580: */
OXJBTRN = WVJBTRN_right ;
switch ( OXJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
PXJBTRN_ustr = (OXJBTRN.data.mode21);
 /* line 581: */
 /* line 582: */
BWJBTRN_add_ustr( VVJBTRN_left, A_UNITE(QXJBTRN,mode21,21,PXJBTRN_ustr), A68_FALSE, A68_TRUE, &RXJBTRN );
KXJBTRN = RXJBTRN;
break;
default: 
 /* line 583: */
A_CALLPROC(XWJBTRN_new_conc,( &SXJBTRN),( &SXJBTRN,(XWJBTRN_new_conc).nonlocals));
KXJBTRN = SXJBTRN;
break;
} 
} 
else
{ 
 /* line 584: */
TXJBTRN = VVJBTRN_left ;
switch ( TXJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
UXJBTRN_lustr = (TXJBTRN.data.mode21);
 /* line 585: */
 /* line 586: */
VXJBTRN = WVJBTRN_right ;
switch ( VXJBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
WXJBTRN_rustr = (VXJBTRN.data.mode21);
 /* line 587: */
 /* line 588: */
 /* line 589: */
BWJBTRN_add_ustr( A_UNITE(YXJBTRN,mode21,21,UXJBTRN_lustr), A_UNITE(XXJBTRN,mode21,21,WXJBTRN_rustr), A68_TRUE, A68_TRUE, &ZXJBTRN );
KXJBTRN = ZXJBTRN;
break;
default: 
 /* line 590: */
 /* line 591: */
A_CALLPROC(XWJBTRN_new_conc,( &AYJBTRN),( &AYJBTRN,(XWJBTRN_new_conc).nonlocals));
KXJBTRN = AYJBTRN;
break;
} 
break;
default: 
 /* line 592: */
 /* line 593: */
A_CALLPROC(XWJBTRN_new_conc,( &BYJBTRN),( &BYJBTRN,(XWJBTRN_new_conc).nonlocals));
KXJBTRN = BYJBTRN;
break;
} 
} 
} 
} 
else
{ 
CYJBTRN.U = A_UNITE(DYJBTRN,mode22,22,Uconc);
 /* line 594: */
CYJBTRN.C = A68_FALSE;
KXJBTRN = CYJBTRN;
} 
A_PROC_EXIT(conc_unit);
*ReturnedValue = (KXJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FTKBTRN_sub_unit(A68_186  Type, A68_208  Unit, A68_524  Container, void *NonLocals)
#define NL(x) (((GTKBTRN_sub_unit *)NonLocals)->x)
{ 
A68_186  HTKBTRN;  /* united object - for case conformity */
A68_525  ITKBTRN;  /* collateral clause result */
A68_525 * JTKBTRN;  /* YIELD */
A68_188 * KTKBTRN_tr;
A68_INT  LTKBTRN_size;
A68_521  MTKBTRN;  /* collateral clause result */
A68_521 * NTKBTRN;  /* YIELD */
A68_524  OTKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  PTKBTRN_ft;
A68_INT  QTKBTRN_i;
A68_INT  RTKBTRN;  /* to part of loop */
A68_218  STKBTRN;  /* collateral clause result */
A68_170  TTKBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * UTKBTRN;  /* YIELD */
A68_218 * VTKBTRN;  /* YIELD */
A68_208  WTKBTRN;  /* OPERATORS - mode -> union mode */
A68_189 * XTKBTRN_tstr;
A68_189 * YTKBTRN_tptr;
A68_INT  ZTKBTRN_size;
A68_BOOL  AUKBTRN_same_type;
A68_522  BUKBTRN;  /* collateral clause result */
A68_522 * CUKBTRN;  /* YIELD */
A68_524  DUKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  EUKBTRN_ft;
A68_INT  FUKBTRN_n;
A68_218  GUKBTRN;  /* collateral clause result */
A68_170  HUKBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * IUKBTRN;  /* YIELD */
A68_218 * JUKBTRN;  /* YIELD */
A68_208  KUKBTRN;  /* OPERATORS - mode -> union mode */
A68_192 * LUKBTRN_ts;
A68_INT  MUKBTRN_size;
A68_523  NUKBTRN;  /* collateral clause result */
A68_523 * OUKBTRN;  /* YIELD */
A68_524  PUKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  QUKBTRN_ft;
A68_INT  RUKBTRN_i;
A68_INT  SUKBTRN;  /* to part of loop */
A68_218  TUKBTRN;  /* collateral clause result */
A68_170  UUKBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * VUKBTRN;  /* YIELD */
A68_218 * WUKBTRN;  /* YIELD */
A68_208  XUKBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sub_unit);
 /* line 1193: */
 /* line 1194: */
HTKBTRN = Type ;
switch ( HTKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
 /* line 1195: */
 /* line 1196: */
ITKBTRN.Unit = Unit;
ITKBTRN.Type = Type;
ITKBTRN.Container = Container;
ITKBTRN.Rest = ARKBTRN_nilcomponent;
 /* line 1197: */
JTKBTRN = A_HEAP(A68_525 ) ;
(*JTKBTRN) = ITKBTRN ;
(*NL(ATKBTRN_cptr)) = (&(((**NL(ATKBTRN_cptr)) = JTKBTRN)->Rest));
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
KTKBTRN_tr = (HTKBTRN.data.mode2);
 /* line 1198: */
{ 
LTKBTRN_size = XOMATRN_int((*(&(KTKBTRN_tr->Size))));
 /* line 1199: */
MTKBTRN.Rsize = LTKBTRN_size;
MTKBTRN.Container = Container;
NTKBTRN = A_HEAP(A68_521 ) ;
(*NTKBTRN) = MTKBTRN ;
PTKBTRN_ft = A_UNITE(OTKBTRN,mode1,1,NTKBTRN);
 /* line 1200: */
 /* line 1201: */
RTKBTRN = LTKBTRN_size;
for ( QTKBTRN_i = 1;
QTKBTRN_i <= RTKBTRN;
QTKBTRN_i += 1 )
{ 
STKBTRN.Unit = Unit;
UTKBTRN = IFJBTRN_makefint(QTKBTRN_i) ;
STKBTRN.Index = A_UNITE(TTKBTRN,mode1,1,UTKBTRN);
VTKBTRN = A_HEAP(A68_218 ) ;
(*VTKBTRN) = STKBTRN ;
A_CALLPROC(NL(ETKBTRN_sub_unit),((*(&(KTKBTRN_tr->Elem))), A_UNITE(WTKBTRN,mode16,16,VTKBTRN), PTKBTRN_ft),((*(&(KTKBTRN_tr->Elem))), A_UNITE(WTKBTRN,mode16,16,VTKBTRN), PTKBTRN_ft,(NL(ETKBTRN_sub_unit)).nonlocals));
}
 /* line 1202: */
 /* line 1203: */
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
XTKBTRN_tstr = (HTKBTRN.data.mode3);
 /* line 1204: */
{ 
YTKBTRN_tptr = XTKBTRN_tstr;
 /* line 1205: */
ZTKBTRN_size = 0;
 /* line 1206: */
AUKBTRN_same_type = A68_TRUE;
 /* line 1207: */
for ( ;; )
{ 
 /* line 1208: */
if ( !((YTKBTRN_tptr!=GAAATRN_niltstr)) ) break;
ZTKBTRN_size+=1;
 /* line 1209: */
 /* line 1210: */
if ( !A_CALLPROC(NL(CQKBTRN_),((*(&(XTKBTRN_tstr->Elem))), (*(&(YTKBTRN_tptr->Elem)))),((*(&(XTKBTRN_tstr->Elem))), (*(&(YTKBTRN_tptr->Elem))),(NL(CQKBTRN_)).nonlocals)) )
{ 
 /* line 1211: */
AUKBTRN_same_type = A68_FALSE;
} 
 /* line 1212: */
 /* line 1213: */
YTKBTRN_tptr = (*(&(YTKBTRN_tptr->Rest)));
}
 /* line 1214: */
BUKBTRN.Size = ZTKBTRN_size;
BUKBTRN.Same = AUKBTRN_same_type;
BUKBTRN.Container = Container;
CUKBTRN = A_HEAP(A68_522 ) ;
(*CUKBTRN) = BUKBTRN ;
EUKBTRN_ft = A_UNITE(DUKBTRN,mode2,2,CUKBTRN);
 /* line 1215: */
FUKBTRN_n = 0;
 /* line 1216: */
YTKBTRN_tptr = XTKBTRN_tstr;
 /* line 1217: */
for ( ;; )
{ 
 /* line 1218: */
if ( !((YTKBTRN_tptr!=GAAATRN_niltstr)) ) break;
 /* line 1219: */
GUKBTRN.Unit = Unit;
IUKBTRN = IFJBTRN_makefint(FUKBTRN_n+=1) ;
GUKBTRN.Index = A_UNITE(HUKBTRN,mode1,1,IUKBTRN);
 /* line 1221: */
JUKBTRN = A_HEAP(A68_218 ) ;
(*JUKBTRN) = GUKBTRN ;
A_CALLPROC(NL(ETKBTRN_sub_unit),((*(&(YTKBTRN_tptr->Elem))), A_UNITE(KUKBTRN,mode16,16,JUKBTRN), EUKBTRN_ft),((*(&(YTKBTRN_tptr->Elem))), A_UNITE(KUKBTRN,mode16,16,JUKBTRN), EUKBTRN_ft,(NL(ETKBTRN_sub_unit)).nonlocals));
 /* line 1222: */
 /* line 1223: */
YTKBTRN_tptr = (*(&(YTKBTRN_tptr->Rest)));
}
 /* line 1224: */
 /* line 1225: */
} 
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
LUKBTRN_ts = (HTKBTRN.data.mode6);
 /* line 1226: */
{ 
MUKBTRN_size = XOMATRN_int((*(&(LUKBTRN_ts->Size))));
 /* line 1227: */
NUKBTRN.Ssize = MUKBTRN_size;
NUKBTRN.Container = Container;
OUKBTRN = A_HEAP(A68_523 ) ;
(*OUKBTRN) = NUKBTRN ;
QUKBTRN_ft = A_UNITE(PUKBTRN,mode3,3,OUKBTRN);
 /* line 1228: */
 /* line 1229: */
SUKBTRN = MUKBTRN_size;
for ( RUKBTRN_i = 1;
RUKBTRN_i <= SUKBTRN;
RUKBTRN_i += 1 )
{ 
TUKBTRN.Unit = Unit;
VUKBTRN = IFJBTRN_makefint(RUKBTRN_i) ;
TUKBTRN.Index = A_UNITE(UUKBTRN,mode1,1,VUKBTRN);
WUKBTRN = A_HEAP(A68_218 ) ;
(*WUKBTRN) = TUKBTRN ;
A_CALLPROC(NL(ETKBTRN_sub_unit),((*(&(LUKBTRN_ts->Char))), A_UNITE(XUKBTRN,mode16,16,WUKBTRN), QUKBTRN_ft),((*(&(LUKBTRN_ts->Char))), A_UNITE(XUKBTRN,mode16,16,WUKBTRN), QUKBTRN_ft,(NL(ETKBTRN_sub_unit)).nonlocals));
}
 /* line 1230: */
 /* line 1231: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(sub_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  GXKBTRN_trim(A68_526  Fu, A68_170  Lwb, A68_170  Upb, A68_526  *ReturnedValue, void *NonLocals)
#define NL(x) (((HXKBTRN_trim *)NonLocals)->x)
{ 
A68_192  IXKBTRN;  /* collateral clause result */
A68_186  JXKBTRN;  /* clause result */
A68_192 * KXKBTRN;  /* YIELD */
A68_186  LXKBTRN;  /* OPERATORS - mode -> union mode */
A68_188  MXKBTRN;  /* collateral clause result */
A68_188 * NXKBTRN;  /* YIELD */
A68_186  OXKBTRN;  /* OPERATORS - mode -> union mode */
A68_186  PXKBTRN_t;
A68_535  QXKBTRN_utrim;   /* proc value of non-global proc */
A68_526  DYKBTRN;  /* collateral clause result */
A68_524  EYKBTRN;  /* OPERATORS - mode -> union mode */
A68_526  FYKBTRN_funit;
A68_INT  GYKBTRN_up;
A68_524  HYKBTRN;  /* united object - for case conformity */
A68_523 * IYKBTRN_fc;
A68_526  JYKBTRN;  /* collateral clause result */
A68_526  KYKBTRN;  /* clause result */
A68_526  LYKBTRN;  /* avoid structure result */
A68_526  MYKBTRN;  /* avoid structure result */
A68_521 * NYKBTRN_fr;
A68_526  OYKBTRN;  /* avoid structure result */
A68_526  PYKBTRN;  /* collateral clause result */
A68_526  QYKBTRN;  /* avoid structure result */
A68_522 * RYKBTRN_fs;
A68_BOOL  SYKBTRN;  /* optbool result */
A68_526  TYKBTRN;  /* avoid structure result */
A68_526  UYKBTRN;  /* collateral clause result */
A68_526  VYKBTRN;  /* avoid structure result */
A68_526  WYKBTRN;  /* avoid structure result */
A68_526  XYKBTRN;  /* avoid structure result */
A_PROC_ENTRY(trim);
 /* line 1280: */
 /* line 1287: */
{ 
 /* line 1288: */
if ( NL(BXKBTRN_string) )
{ 
IXKBTRN.Size = Upb;
 /* line 1289: */
IXKBTRN.Char = Fu.T;
KXKBTRN = A_HEAP(A68_192 ) ;
(*KXKBTRN) = IXKBTRN ;
JXKBTRN = A_UNITE(LXKBTRN,mode6,6,KXKBTRN);
} 
else
{ 
MXKBTRN.Size = Upb;
 /* line 1290: */
MXKBTRN.Elem = Fu.T;
NXKBTRN = A_HEAP(A68_188 ) ;
(*NXKBTRN) = MXKBTRN ;
JXKBTRN = A_UNITE(OXKBTRN,mode2,2,NXKBTRN);
} 
PXKBTRN_t = JXKBTRN;
 /* line 1292: */
A_CLOSURE( QXKBTRN_utrim, RXKBTRN_utrim, SXKBTRN_utrim );
(( SXKBTRN_utrim * ) ( QXKBTRN_utrim.nonlocals )) -> Fu = Fu;
(( SXKBTRN_utrim * ) ( QXKBTRN_utrim.nonlocals )) -> Lwb = Lwb;
(( SXKBTRN_utrim * ) ( QXKBTRN_utrim.nonlocals )) -> Upb = Upb;
(( SXKBTRN_utrim * ) ( QXKBTRN_utrim.nonlocals )) -> PXKBTRN_t = PXKBTRN_t;
 /* line 1301: */
DYKBTRN.U = Fu.U;
DYKBTRN.T = PXKBTRN_t;
DYKBTRN.F = A_EMPTY(EYKBTRN,4);
FYKBTRN_funit = DYKBTRN;
 /* line 1303: */
GYKBTRN_up = XOMATRN_int(Upb);
 /* line 1304: */
 /* line 1305: */
if ( (XOMATRN_int(Lwb)==1) )
{ 
 /* line 1306: */
HYKBTRN = Fu.F ;
switch ( HYKBTRN.mode )
{ 
case 3: /* REF STRUCT(INT,MODE524)  */
IYKBTRN_fc = (HYKBTRN.data.mode3);
 /* line 1307: */
 /* line 1308: */
if ( ((*(&(IYKBTRN_fc->Ssize)))==GYKBTRN_up) )
{ 
 /* line 1309: */
if ( NL(BXKBTRN_string) )
{ 
JYKBTRN.U = Fu.U;
JYKBTRN.T = PXKBTRN_t;
 /* line 1310: */
JYKBTRN.F = (*(&(IYKBTRN_fc->Container)));
KYKBTRN = JYKBTRN;
} 
else
{ 
 /* line 1311: */
 /* line 1312: */
 /* line 1313: */
A_CALLPROC(NL(BVKBTRN_string_row),(FYKBTRN_funit, &LYKBTRN),(FYKBTRN_funit, &LYKBTRN,(NL(BVKBTRN_string_row)).nonlocals));
KYKBTRN = LYKBTRN;
} 
} 
else
{ 
 /* line 1314: */
A_CALLPROC(QXKBTRN_utrim,( &MYKBTRN),( &MYKBTRN,(QXKBTRN_utrim).nonlocals));
KYKBTRN = MYKBTRN;
} 
break;
case 1: /* REF STRUCT(INT,MODE524)  */
NYKBTRN_fr = (HYKBTRN.data.mode1);
 /* line 1315: */
 /* line 1316: */
if ( ((*(&(NYKBTRN_fr->Rsize)))==GYKBTRN_up) )
{ 
 /* line 1317: */
if ( NL(BXKBTRN_string) )
{ 
 /* line 1318: */
A_CALLPROC(NL(BVKBTRN_string_row),(FYKBTRN_funit, &OYKBTRN),(FYKBTRN_funit, &OYKBTRN,(NL(BVKBTRN_string_row)).nonlocals));
KYKBTRN = OYKBTRN;
} 
else
{ 
PYKBTRN.U = Fu.U;
PYKBTRN.T = PXKBTRN_t;
 /* line 1319: */
 /* line 1320: */
 /* line 1321: */
PYKBTRN.F = (*(&(NYKBTRN_fr->Container)));
KYKBTRN = PYKBTRN;
} 
} 
else
{ 
 /* line 1322: */
A_CALLPROC(QXKBTRN_utrim,( &QYKBTRN),( &QYKBTRN,(QXKBTRN_utrim).nonlocals));
KYKBTRN = QYKBTRN;
} 
break;
case 2: /* REF STRUCT(INT,BOOL,MODE524)  */
RYKBTRN_fs = (HYKBTRN.data.mode2);
 /* line 1323: */
SYKBTRN = (*(&(RYKBTRN_fs->Same)));
if ( SYKBTRN )
{ /* line 1324: */
SYKBTRN = ((*(&(RYKBTRN_fs->Size)))==GYKBTRN_up);
}
if ( SYKBTRN )
{ 
 /* line 1325: */
if ( NL(BXKBTRN_string) )
{ 
 /* line 1326: */
A_CALLPROC(NL(BVKBTRN_string_row),(FYKBTRN_funit, &TYKBTRN),(FYKBTRN_funit, &TYKBTRN,(NL(BVKBTRN_string_row)).nonlocals));
KYKBTRN = TYKBTRN;
} 
else
{ 
UYKBTRN.U = Fu.U;
UYKBTRN.T = PXKBTRN_t;
 /* line 1327: */
 /* line 1328: */
 /* line 1329: */
UYKBTRN.F = (*(&(RYKBTRN_fs->Container)));
KYKBTRN = UYKBTRN;
} 
} 
else
{ 
 /* line 1330: */
 /* line 1331: */
A_CALLPROC(QXKBTRN_utrim,( &VYKBTRN),( &VYKBTRN,(QXKBTRN_utrim).nonlocals));
KYKBTRN = VYKBTRN;
} 
break;
default: 
 /* line 1332: */
 /* line 1333: */
A_CALLPROC(QXKBTRN_utrim,( &WYKBTRN),( &WYKBTRN,(QXKBTRN_utrim).nonlocals));
KYKBTRN = WYKBTRN;
break;
} 
} 
else
{ 
 /* line 1334: */
A_CALLPROC(QXKBTRN_utrim,( &XYKBTRN),( &XYKBTRN,(QXKBTRN_utrim).nonlocals));
KYKBTRN = XYKBTRN;
} 
} 
A_PROC_EXIT(trim);
*ReturnedValue = (KYKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BZKBTRN_add_trim(A68_526  L, A68_526  R, A68_526  *ReturnedValue, void *NonLocals)
#define NL(x) (((CZKBTRN_add_trim *)NonLocals)->x)
{ 
A68_208  DZKBTRN;  /* united object - for case conformity */
A68_218 * EZKBTRN_lui;
A68_208  FZKBTRN;  /* united object - for case conformity */
A68_218 * GZKBTRN_rui;
A68_526  HZKBTRN;  /* collateral clause result */
A68_526  IZKBTRN;  /* clause result */
A68_526  JZKBTRN;  /* avoid structure result */
A68_219 * KZKBTRN_lt;
A68_208  LZKBTRN;  /* united object - for case conformity */
A68_218 * MZKBTRN_rti;
A68_526  NZKBTRN;  /* collateral clause result */
A68_526  OZKBTRN;  /* avoid structure result */
A_PROC_ENTRY(add_trim);
 /* line 1338: */
 /* line 1339: */
{ 
 /* line 1340: */
DZKBTRN = L.U ;
switch ( DZKBTRN.mode )
{ 
case 16: /* REF STRUCT(MODE208,MODE170)  */
EZKBTRN_lui = (DZKBTRN.data.mode16);
 /* line 1341: */
 /* line 1342: */
FZKBTRN = R.U ;
switch ( FZKBTRN.mode )
{ 
case 16: /* REF STRUCT(MODE208,MODE170)  */
GZKBTRN_rui = (FZKBTRN.data.mode16);
 /* line 1344: */
HZKBTRN.U = (*(&(EZKBTRN_lui->Unit)));
HZKBTRN.T = L.T;
HZKBTRN.F = L.F;
 /* line 1345: */
 /* line 1346: */
 /* line 1347: */
A_CALLPROC(NL(FXKBTRN_trim),(HZKBTRN, (*(&(EZKBTRN_lui->Index))), (*(&(GZKBTRN_rui->Index))), &JZKBTRN),(HZKBTRN, (*(&(EZKBTRN_lui->Index))), (*(&(GZKBTRN_rui->Index))), &JZKBTRN,(NL(FXKBTRN_trim)).nonlocals));
IZKBTRN = JZKBTRN;
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
KZKBTRN_lt = (DZKBTRN.data.mode17);
 /* line 1348: */
 /* line 1349: */
LZKBTRN = R.U ;
switch ( LZKBTRN.mode )
{ 
case 16: /* REF STRUCT(MODE208,MODE170)  */
MZKBTRN_rti = (LZKBTRN.data.mode16);
 /* line 1351: */
NZKBTRN.U = (*(&(KZKBTRN_lt->Unit)));
NZKBTRN.T = R.T;
NZKBTRN.F = R.F;
 /* line 1352: */
 /* line 1353: */
 /* line 1354: */
 /* line 1355: */
A_CALLPROC(NL(FXKBTRN_trim),(NZKBTRN, (*(&((&(KZKBTRN_lt->Range))->Lwb))), (*(&(MZKBTRN_rti->Index))), &OZKBTRN),(NZKBTRN, (*(&((&(KZKBTRN_lt->Range))->Lwb))), (*(&(MZKBTRN_rti->Index))), &OZKBTRN,(NL(FXKBTRN_trim)).nonlocals));
IZKBTRN = OZKBTRN;
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(add_trim);
*ReturnedValue = (IZKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CALBTRN_do_most_recent(void *NonLocals)
#define NL(x) (((DALBTRN_do_most_recent *)NonLocals)->x)
{ 
A68_208  EALBTRN;  /* united object - for case conformity */
A68_208  FALBTRN_val;
A68_INT  GALBTRN;  /* clause result */
A68_222  HALBTRN;  /* collateral clause result */
A68_170  IALBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * JALBTRN;  /* YIELD */
A68_222 * KALBTRN;  /* YIELD */
A68_208  LALBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  MALBTRN_sort;
A68_526  NALBTRN;  /* collateral clause result */
A68_224  OALBTRN;  /* collateral clause result */
A68_224 * PALBTRN;  /* YIELD */
A68_208  QALBTRN;  /* OPERATORS - mode -> union mode */
A68_186  RALBTRN;  /* OPERATORS - mode -> union mode */
A68_524  SALBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(do_most_recent);
 /* line 1363: */
EALBTRN = (*(&(NL(TZKBTRN_ans)->U))) ;
switch ( EALBTRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1364: */
{ 
(*NL(TZKBTRN_ans)) = (*NL(YZKBTRN_most_recent));
 /* line 1365: */
(*NL(ZZKBTRN_flatten_left)) = (*NL(AALBTRN_flatten_right));
 /* line 1366: */
 /* line 1367: */
 /* line 1368: */
(*NL(AALBTRN_flatten_right)) = A68_FALSE;
} 
break;
default: 
{ 
FALBTRN_val = (*(&(NL(TZKBTRN_ans)->U)));
 /* line 1369: */
 /* line 1370: */
if ( (*NL(ZZKBTRN_flatten_left)) )
{ 
 /* line 1371: */
 /* line 1372: */
if ( (*NL(AALBTRN_flatten_right)) )
{ 
 /* line 1373: */
GALBTRN = VIAATRN_flattenboth;
} 
else
{ 
 /* line 1374: */
 /* line 1375: */
GALBTRN = TIAATRN_flattenleft;
} 
} 
else
{ 
 /* line 1376: */
if ( (*NL(AALBTRN_flatten_right)) )
{ 
GALBTRN = UIAATRN_flattenright;
} 
else
{ 
JALBTRN = IFJBTRN_makefint(1) ;
HALBTRN.Size = A_UNITE(IALBTRN,mode1,1,JALBTRN);
HALBTRN.Elem = FALBTRN_val;
KALBTRN = A_HEAP(A68_222 ) ;
(*KALBTRN) = HALBTRN ;
FALBTRN_val = A_UNITE(LALBTRN,mode20,20,KALBTRN);
 /* line 1377: */
 /* line 1378: */
GALBTRN = TIAATRN_flattenleft;
} 
} 
MALBTRN_sort = GALBTRN;
 /* line 1379: */
 /* line 1380: */
OALBTRN.String = NL(BXKBTRN_string);
OALBTRN.Sort = MALBTRN_sort;
OALBTRN.Left = FALBTRN_val;
OALBTRN.Right = (*(&(NL(YZKBTRN_most_recent)->U)));
 /* line 1381: */
PALBTRN = A_HEAP(A68_224 ) ;
(*PALBTRN) = OALBTRN ;
NALBTRN.U = A_UNITE(QALBTRN,mode22,22,PALBTRN);
NALBTRN.T = A_UNITE(RALBTRN,mode9,9,(&DIAATRN_tnull));
NALBTRN.F = A_EMPTY(SALBTRN,4);
(*NL(TZKBTRN_ans)) = NALBTRN;
 /* line 1382: */
 /* line 1383: */
 /* line 1384: */
(*NL(ZZKBTRN_flatten_left)) = A68_TRUE;
} 
break;
} 
A_PROC_EXIT(do_most_recent);
return;
} 
#undef NL

A_STATIC A68_VOID  HBLBTRN_make_unit(A68_186  Type, A68_526  *ReturnedValue, void *NonLocals)
#define NL(x) (((IBLBTRN_make_unit *)NonLocals)->x)
{ 
A68_186  JBLBTRN;  /* united object - for case conformity */
A68_526  KBLBTRN;  /* collateral clause result */
A68_526  LBLBTRN_named;
A68_526  MBLBTRN;  /* clause result */
A68_188 * NBLBTRN_tr;
A68_539  PBLBTRN_generator;   /* proc value of non-global proc */
A68_532  VBLBTRN;  /* avoid structure result */
A68_532  UBLBTRN_elems;
A68_526 * WBLBTRN_elem;
A68_INT  XBLBTRN;  /* forall loop counter */
A68_526  YBLBTRN;  /* avoid structure result */
A68_526  ZBLBTRN;  /* avoid structure result */
A68_189 * ACLBTRN_tstr;
A68_INT  BCLBTRN_n;
A68_189 * CCLBTRN_tptr;
A68_BOOL  DCLBTRN_same;
A68_539  FCLBTRN_generator;   /* proc value of non-global proc */
A68_532  LCLBTRN;  /* avoid structure result */
A68_532  KCLBTRN_elems;
A68_526 * MCLBTRN_elem;
A68_INT  NCLBTRN;  /* forall loop counter */
A68_526  OCLBTRN;  /* avoid structure result */
A68_526  PCLBTRN;  /* avoid structure result */
A68_223 * QCLBTRN_ans;
A68_223 ** RCLBTRN_uptr;
A68_223  SCLBTRN;  /* collateral clause result */
A68_526  TCLBTRN;  /* avoid structure result */
A68_223 * UCLBTRN;  /* YIELD */
A68_526  VCLBTRN;  /* collateral clause result */
A68_208  WCLBTRN;  /* OPERATORS - mode -> union mode */
A68_186  XCLBTRN;  /* OPERATORS - mode -> union mode */
A68_524  YCLBTRN;  /* OPERATORS - mode -> union mode */
A68_192 * ZCLBTRN_ts;
A68_539  BDLBTRN_generator;   /* proc value of non-global proc */
A68_532  HDLBTRN;  /* avoid structure result */
A68_532  GDLBTRN_elems;
A68_526 * IDLBTRN_elem;
A68_INT  JDLBTRN;  /* forall loop counter */
A68_526  KDLBTRN;  /* avoid structure result */
A68_526  LDLBTRN;  /* avoid structure result */
A_PROC_ENTRY(make_unit);
 /* line 1407: */
 /* line 1408: */
JBLBTRN = Type ;
switch ( JBLBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
 /* line 1409: */
{ 
KBLBTRN.U = (*(&((*NL(EBLBTRN_cptr))->Unit)));
KBLBTRN.T = (*(&((*NL(EBLBTRN_cptr))->Type)));
KBLBTRN.F = (*(&((*NL(EBLBTRN_cptr))->Container)));
LBLBTRN_named = KBLBTRN;
 /* line 1410: */
(*NL(EBLBTRN_cptr)) = (*(&((*NL(EBLBTRN_cptr))->Rest)));
 /* line 1411: */
 /* line 1412: */
 /* line 1413: */
MBLBTRN = LBLBTRN_named;
} 
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
NBLBTRN_tr = (JBLBTRN.data.mode2);
 /* line 1414: */
{ 
A_CLOSURE( PBLBTRN_generator, QBLBTRN_generator, RBLBTRN_generator );
(( RBLBTRN_generator * ) ( PBLBTRN_generator.nonlocals )) -> NBLBTRN_tr = NBLBTRN_tr;
A_CALLPROC(PBLBTRN_generator,(A68_TRUE, &VBLBTRN),(A68_TRUE, &VBLBTRN,(PBLBTRN_generator).nonlocals));
UBLBTRN_elems = VBLBTRN;
 /* line 1415: */
XBLBTRN = UBLBTRN_elems.upb -1;
WBLBTRN_elem = UBLBTRN_elems.data;
for (;XBLBTRN-- >= 0;
(WBLBTRN_elem++
) )
{
A_CALLPROC(NL(GBLBTRN_make_unit),((*(&(NBLBTRN_tr->Elem))), &YBLBTRN),((*(&(NBLBTRN_tr->Elem))), &YBLBTRN,(NL(GBLBTRN_make_unit)).nonlocals));
(*WBLBTRN_elem) = YBLBTRN;
}
 /* line 1416: */
 /* line 1417: */
 /* line 1418: */
A_CALLPROC(NL(WWKBTRN_conc_unit),(UBLBTRN_elems, Type, &ZBLBTRN),(UBLBTRN_elems, Type, &ZBLBTRN,(NL(WWKBTRN_conc_unit)).nonlocals));
MBLBTRN = ZBLBTRN;
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
ACLBTRN_tstr = (JBLBTRN.data.mode3);
 /* line 1419: */
{ 
BCLBTRN_n = 0;
 /* line 1420: */
CCLBTRN_tptr = ACLBTRN_tstr;
 /* line 1421: */
DCLBTRN_same = A68_TRUE;
 /* line 1422: */
for ( ;; )
{ 
 /* line 1423: */
if ( !((CCLBTRN_tptr!=GAAATRN_niltstr)) ) break;
BCLBTRN_n+=1;
 /* line 1424: */
if ( !A_CALLPROC(NL(CQKBTRN_),((*(&(ACLBTRN_tstr->Elem))), (*(&(CCLBTRN_tptr->Elem)))),((*(&(ACLBTRN_tstr->Elem))), (*(&(CCLBTRN_tptr->Elem))),(NL(CQKBTRN_)).nonlocals)) )
{ 
DCLBTRN_same = A68_FALSE;
} 
 /* line 1425: */
 /* line 1426: */
CCLBTRN_tptr = (*(&(CCLBTRN_tptr->Rest)));
}
 /* line 1427: */
CCLBTRN_tptr = ACLBTRN_tstr;
 /* line 1428: */
 /* line 1429: */
if ( DCLBTRN_same )
{ 
A_CLOSURE( FCLBTRN_generator, GCLBTRN_generator, HCLBTRN_generator );
(( HCLBTRN_generator * ) ( FCLBTRN_generator.nonlocals )) -> BCLBTRN_n = (&BCLBTRN_n);
A_CALLPROC(FCLBTRN_generator,(A68_TRUE, &LCLBTRN),(A68_TRUE, &LCLBTRN,(FCLBTRN_generator).nonlocals));
KCLBTRN_elems = LCLBTRN;
 /* line 1430: */
 /* line 1431: */
NCLBTRN = KCLBTRN_elems.upb -1;
MCLBTRN_elem = KCLBTRN_elems.data;
for (;NCLBTRN-- >= 0;
(MCLBTRN_elem++
) )
{
A_CALLPROC(NL(GBLBTRN_make_unit),((*(&(CCLBTRN_tptr->Elem))), &OCLBTRN),((*(&(CCLBTRN_tptr->Elem))), &OCLBTRN,(NL(GBLBTRN_make_unit)).nonlocals));
(*MCLBTRN_elem) = OCLBTRN;
 /* line 1432: */
 /* line 1433: */
CCLBTRN_tptr = (*(&(CCLBTRN_tptr->Rest)));
}
 /* line 1434: */
 /* line 1435: */
A_CALLPROC(NL(WWKBTRN_conc_unit),(KCLBTRN_elems, Type, &PCLBTRN),(KCLBTRN_elems, Type, &PCLBTRN,(NL(WWKBTRN_conc_unit)).nonlocals));
MBLBTRN = PCLBTRN;
} 
else
{ 
QCLBTRN_ans = IAAATRN_nilustr;
 /* line 1436: */
RCLBTRN_uptr = (&QCLBTRN_ans);
 /* line 1437: */
for ( ;; )
{ 
 /* line 1438: */
if ( !((CCLBTRN_tptr!=GAAATRN_niltstr)) ) break;
 /* line 1439: */
 /* line 1440: */
A_CALLPROC(NL(GBLBTRN_make_unit),((*(&(CCLBTRN_tptr->Elem))), &TCLBTRN),((*(&(CCLBTRN_tptr->Elem))), &TCLBTRN,(NL(GBLBTRN_make_unit)).nonlocals));
SCLBTRN.Elem = TCLBTRN.U;
SCLBTRN.Rest = IAAATRN_nilustr;
UCLBTRN = A_HEAP(A68_223 ) ;
(*UCLBTRN) = SCLBTRN ;
RCLBTRN_uptr = (&(((*RCLBTRN_uptr) = UCLBTRN)->Rest));
 /* line 1441: */
 /* line 1442: */
CCLBTRN_tptr = (*(&(CCLBTRN_tptr->Rest)));
}
 /* line 1443: */
VCLBTRN.U = A_UNITE(WCLBTRN,mode21,21,QCLBTRN_ans);
VCLBTRN.T = A_UNITE(XCLBTRN,mode3,3,ACLBTRN_tstr);
 /* line 1444: */
 /* line 1445: */
 /* line 1446: */
VCLBTRN.F = A_EMPTY(YCLBTRN,4);
MBLBTRN = VCLBTRN;
} 
} 
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
ZCLBTRN_ts = (JBLBTRN.data.mode6);
 /* line 1447: */
{ 
A_CLOSURE( BDLBTRN_generator, CDLBTRN_generator, DDLBTRN_generator );
(( DDLBTRN_generator * ) ( BDLBTRN_generator.nonlocals )) -> ZCLBTRN_ts = ZCLBTRN_ts;
A_CALLPROC(BDLBTRN_generator,(A68_TRUE, &HDLBTRN),(A68_TRUE, &HDLBTRN,(BDLBTRN_generator).nonlocals));
GDLBTRN_elems = HDLBTRN;
 /* line 1448: */
JDLBTRN = GDLBTRN_elems.upb -1;
IDLBTRN_elem = GDLBTRN_elems.data;
for (;JDLBTRN-- >= 0;
(IDLBTRN_elem++
) )
{
A_CALLPROC(NL(GBLBTRN_make_unit),((*(&(ZCLBTRN_ts->Char))), &KDLBTRN),((*(&(ZCLBTRN_ts->Char))), &KDLBTRN,(NL(GBLBTRN_make_unit)).nonlocals));
(*IDLBTRN_elem) = KDLBTRN;
}
 /* line 1449: */
 /* line 1450: */
 /* line 1452: */
A_CALLPROC(NL(WWKBTRN_conc_unit),(GDLBTRN_elems, Type, &LDLBTRN),(GDLBTRN_elems, Type, &LDLBTRN,(NL(WWKBTRN_conc_unit)).nonlocals));
MBLBTRN = LDLBTRN;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(make_unit);
*ReturnedValue = (MBLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UHJBTRN_generator(A68_BOOL  SHJBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((VHJBTRN_generator *)NonLocals)->x)
{ 
A68_286  WHJBTRN;  /* clause result */
A68_286  XHJBTRN;  /* OPERATORS - dynamic generator */
{ 
XHJBTRN.upb = ((*NL(WGJBTRN_nametable)).upb+UFJBTRN_vecstep) ;
( SHJBTRN_anonymous? A_VLOC(A68_283 ,XHJBTRN): A_VHEAP(A68_283 ,XHJBTRN) );
WHJBTRN = XHJBTRN;
} 
*ReturnedValue = (WHJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CIJBTRN_generator(A68_BOOL  AIJBTRN_anonymous, A68_472  *ReturnedValue, void *NonLocals)
#define NL(x) (((DIJBTRN_generator *)NonLocals)->x)
{ 
A68_472  EIJBTRN;  /* clause result */
A68_472  FIJBTRN;  /* OPERATORS - dynamic generator */
{ 
FIJBTRN.upb = ((*NL(WGJBTRN_nametable)).upb+UFJBTRN_vecstep) ;
( AIJBTRN_anonymous? A_VLOC(A68_242 *,FIJBTRN): A_VHEAP(A68_242 *,FIJBTRN) );
EIJBTRN = FIJBTRN;
} 
*ReturnedValue = (EIJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CSJBTRN_generator(A68_BOOL  ASJBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((DSJBTRN_generator *)NonLocals)->x)
{ 
A68_54  ESJBTRN;  /* clause result */
A68_54  FSJBTRN;  /* OPERATORS - dynamic generator */
{ 
FSJBTRN.upb = (*NL(OHJBTRN_n_names)) ;
( ASJBTRN_anonymous? A_VLOC(A68_BOOL ,FSJBTRN): A_VHEAP(A68_BOOL ,FSJBTRN) );
ESJBTRN = FSJBTRN;
} 
*ReturnedValue = (ESJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NSJBTRN_simplify_unit(A68_208  U, A68_362 * Tprocs, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((OSJBTRN_simplify_unit *)NonLocals)->x)
{ 
A68_487  RSJBTRN_simplify_uname;   /* proc value of non-global proc */
A68_489  CTJBTRN_simplify_to_str;   /* proc value of non-global proc */
A68_490  VTJBTRN_index_unit;   /* proc value of non-global proc */
A68_491  NUJBTRN_trim_unit;   /* proc value of non-global proc */
A68_492  OVJBTRN_conc_unit;   /* proc value of non-global proc */
A68_208  EYJBTRN;  /* united object - for case conformity */
A68_213 * FYJBTRN_un;
A68_338  GYJBTRN;  /* collateral clause result */
A68_208  HYJBTRN;  /* OPERATORS - mode -> union mode */
A68_213 * IYJBTRN;  /* YIELD */
A68_338  JYJBTRN;  /* clause result */
A68_218 * KYJBTRN_ui;
A68_338  LYJBTRN;  /* avoid structure result */
A68_219 * MYJBTRN_ut;
A68_338  NYJBTRN;  /* avoid structure result */
A68_222 * OYJBTRN_ur;
A68_223 * PYJBTRN_ans;
A68_INT  QYJBTRN;  /* to part of loop */
A68_INT  RYJBTRN;  /* loop control */
A68_223  SYJBTRN;  /* collateral clause result */
A68_223 * TYJBTRN;  /* YIELD */
A68_338  UYJBTRN;  /* collateral clause result */
A68_208  VYJBTRN;  /* OPERATORS - mode -> union mode */
A68_224 * WYJBTRN_uc;
A68_338  XYJBTRN;  /* avoid structure result */
A68_231 * YYJBTRN_user;
A68_381  ZYJBTRN;  /* CALL */
A68_338  AZJBTRN;  /* avoid structure result */
A68_338  BZJBTRN_uc;
A68_338  CZJBTRN;  /* collateral clause result */
A68_231  DZJBTRN;  /* collateral clause result */
A68_231 * EZJBTRN;  /* YIELD */
A68_208  FZJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  GZJBTRN;  /* collateral clause result */
A68_232 * HZJBTRN_ua;
A68_338  IZJBTRN;  /* collateral clause result */
A68_338  JZJBTRN;  /* avoid structure result */
A68_234 * KZJBTRN_ub;
A68_338  LZJBTRN;  /* collateral clause result */
A68_338  MZJBTRN;  /* avoid structure result */
A68_381  NZJBTRN;  /* CALL */
A68_338  OZJBTRN;  /* avoid structure result */
A_PROC_ENTRY(simplify_unit);
 /* line 455: */
 /* line 458: */
{ 
A_CLOSURE( RSJBTRN_simplify_uname, SSJBTRN_simplify_uname, TSJBTRN_simplify_uname );
(( TSJBTRN_simplify_uname * ) ( RSJBTRN_simplify_uname.nonlocals )) -> GSJBTRN_let_simplified = NL(GSJBTRN_let_simplified);
(( TSJBTRN_simplify_uname * ) ( RSJBTRN_simplify_uname.nonlocals )) -> MSJBTRN_simplify_unit = NL(MSJBTRN_simplify_unit);
(( TSJBTRN_simplify_uname * ) ( RSJBTRN_simplify_uname.nonlocals )) -> KHJBTRN_lettable = NL(KHJBTRN_lettable);
(( TSJBTRN_simplify_uname * ) ( RSJBTRN_simplify_uname.nonlocals )) -> Tprocs = Tprocs;
 /* line 472: */
A_CLOSURE( CTJBTRN_simplify_to_str, DTJBTRN_simplify_to_str, ETJBTRN_simplify_to_str );
(( ETJBTRN_simplify_to_str * ) ( CTJBTRN_simplify_to_str.nonlocals )) -> MSJBTRN_simplify_unit = NL(MSJBTRN_simplify_unit);
(( ETJBTRN_simplify_to_str * ) ( CTJBTRN_simplify_to_str.nonlocals )) -> Tprocs = Tprocs;
(( ETJBTRN_simplify_to_str * ) ( CTJBTRN_simplify_to_str.nonlocals )) -> RSJBTRN_simplify_uname = RSJBTRN_simplify_uname;
(( ETJBTRN_simplify_to_str * ) ( CTJBTRN_simplify_to_str.nonlocals )) -> KHJBTRN_lettable = NL(KHJBTRN_lettable);
 /* line 493: */
A_CLOSURE( VTJBTRN_index_unit, WTJBTRN_index_unit, XTJBTRN_index_unit );
(( XTJBTRN_index_unit * ) ( VTJBTRN_index_unit.nonlocals )) -> CTJBTRN_simplify_to_str = CTJBTRN_simplify_to_str;
(( XTJBTRN_index_unit * ) ( VTJBTRN_index_unit.nonlocals )) -> U = U;
 /* line 509: */
A_CLOSURE( NUJBTRN_trim_unit, OUJBTRN_trim_unit, PUJBTRN_trim_unit );
(( PUJBTRN_trim_unit * ) ( NUJBTRN_trim_unit.nonlocals )) -> CTJBTRN_simplify_to_str = CTJBTRN_simplify_to_str;
(( PUJBTRN_trim_unit * ) ( NUJBTRN_trim_unit.nonlocals )) -> U = U;
 /* line 534: */
A_CLOSURE( OVJBTRN_conc_unit, PVJBTRN_conc_unit, QVJBTRN_conc_unit );
(( QVJBTRN_conc_unit * ) ( OVJBTRN_conc_unit.nonlocals )) -> MSJBTRN_simplify_unit = NL(MSJBTRN_simplify_unit);
(( QVJBTRN_conc_unit * ) ( OVJBTRN_conc_unit.nonlocals )) -> Tprocs = Tprocs;
 /* line 598: */
 /* line 599: */
EYJBTRN = U ;
switch ( EYJBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
FYJBTRN_un = (EYJBTRN.data.mode11);
 /* line 600: */
IYJBTRN = A_CALLPROC(RSJBTRN_simplify_uname,(FYJBTRN_un),(FYJBTRN_un,(RSJBTRN_simplify_uname).nonlocals)) ;
GYJBTRN.U = A_UNITE(HYJBTRN,mode11,11,IYJBTRN);
 /* line 601: */
GYJBTRN.C = A68_FALSE;
JYJBTRN = GYJBTRN;
break;
case 16: /* REF STRUCT(MODE208,MODE170)  */
KYJBTRN_ui = (EYJBTRN.data.mode16);
 /* line 602: */
 /* line 603: */
A_CALLPROC(VTJBTRN_index_unit,(KYJBTRN_ui, &LYJBTRN),(KYJBTRN_ui, &LYJBTRN,(VTJBTRN_index_unit).nonlocals));
JYJBTRN = LYJBTRN;
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
MYJBTRN_ut = (EYJBTRN.data.mode17);
 /* line 604: */
 /* line 605: */
A_CALLPROC(NUJBTRN_trim_unit,(MYJBTRN_ut, &NYJBTRN),(MYJBTRN_ut, &NYJBTRN,(NUJBTRN_trim_unit).nonlocals));
JYJBTRN = NYJBTRN;
break;
case 20: /* REF STRUCT(MODE170,MODE208)  */
OYJBTRN_ur = (EYJBTRN.data.mode20);
 /* line 606: */
 /* line 607: */
{ 
PYJBTRN_ans = IAAATRN_nilustr;
 /* line 608: */
QYJBTRN = XOMATRN_int((*(&(OYJBTRN_ur->Size))));
for ( RYJBTRN = 1;
RYJBTRN <= QYJBTRN;
RYJBTRN += 1 )
{ 
SYJBTRN.Elem = (*(&(OYJBTRN_ur->Elem)));
SYJBTRN.Rest = PYJBTRN_ans;
TYJBTRN = A_HEAP(A68_223 ) ;
(*TYJBTRN) = SYJBTRN ;
PYJBTRN_ans = TYJBTRN;
}
 /* line 609: */
UYJBTRN.U = A_UNITE(VYJBTRN,mode21,21,PYJBTRN_ans);
 /* line 610: */
 /* line 611: */
UYJBTRN.C = A68_TRUE;
JYJBTRN = UYJBTRN;
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE208,MODE208)  */
WYJBTRN_uc = (EYJBTRN.data.mode22);
 /* line 612: */
 /* line 613: */
A_CALLPROC(OVJBTRN_conc_unit,(WYJBTRN_uc, &XYJBTRN),(WYJBTRN_uc, &XYJBTRN,(OVJBTRN_conc_unit).nonlocals));
JYJBTRN = XYJBTRN;
break;
case 29: /* REF STRUCT(REF MODE237,MODE208)  */
YYJBTRN_user = (EYJBTRN.data.mode29);
 /* line 614: */
 /* line 616: */
{ 
ZYJBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(ZYJBTRN,((*(&(YYJBTRN_user->Output))), Tprocs, &AZJBTRN),((*(&(YYJBTRN_user->Output))), Tprocs, &AZJBTRN,(ZYJBTRN).nonlocals));
BZJBTRN_uc = AZJBTRN;
 /* line 617: */
 /* line 618: */
if ( BZJBTRN_uc.C )
{ 
DZJBTRN.Body = (*(&(YYJBTRN_user->Body)));
DZJBTRN.Output = BZJBTRN_uc.U;
 /* line 619: */
EZJBTRN = A_HEAP(A68_231 ) ;
(*EZJBTRN) = DZJBTRN ;
CZJBTRN.U = A_UNITE(FZJBTRN,mode29,29,EZJBTRN);
 /* line 620: */
CZJBTRN.C = A68_TRUE;
JYJBTRN = CZJBTRN;
} 
else
{ 
GZJBTRN.U = U;
 /* line 621: */
 /* line 622: */
 /* line 623: */
GZJBTRN.C = A68_FALSE;
JYJBTRN = GZJBTRN;
} 
} 
break;
case 30: /* REF STRUCT(MODE208,MODE161)  */
HZJBTRN_ua = (EYJBTRN.data.mode30);
 /* line 624: */
A_CALLPROC(NL(MSJBTRN_simplify_unit),((*(&(HZJBTRN_ua->Unit))), Tprocs, &JZJBTRN),((*(&(HZJBTRN_ua->Unit))), Tprocs, &JZJBTRN,(NL(MSJBTRN_simplify_unit)).nonlocals));
IZJBTRN.U = JZJBTRN.U;
 /* line 625: */
IZJBTRN.C = A68_TRUE;
JYJBTRN = IZJBTRN;
break;
case 32: /* REF STRUCT(MODE208)  */
KZJBTRN_ub = (EYJBTRN.data.mode32);
 /* line 626: */
A_CALLPROC(NL(MSJBTRN_simplify_unit),((*(&(KZJBTRN_ub->Unit))), Tprocs, &MZJBTRN),((*(&(KZJBTRN_ub->Unit))), Tprocs, &MZJBTRN,(NL(MSJBTRN_simplify_unit)).nonlocals));
LZJBTRN.U = MZJBTRN.U;
 /* line 627: */
 /* line 628: */
LZJBTRN.C = A68_TRUE;
JYJBTRN = LZJBTRN;
break;
default: 
 /* line 629: */
 /* line 630: */
NZJBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(NZJBTRN,(U, Tprocs, &OZJBTRN),(U, Tprocs, &OZJBTRN,(NZJBTRN).nonlocals));
JYJBTRN = OZJBTRN;
break;
} 
} 
A_PROC_EXIT(simplify_unit);
*ReturnedValue = (JYJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WBKBTRN_do_unit(A68_208  Unit, A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((XBKBTRN_do_unit *)NonLocals)->x)
{ 
A68_208  YBKBTRN;  /* united object - for case conformity */
A68_225 * ZBKBTRN_um;
A68_338  ACKBTRN;  /* clause result */
A68_338  BCKBTRN;  /* avoid structure result */
A68_226 * CCKBTRN_ud;
A68_338  DCKBTRN;  /* avoid structure result */
A68_338  ECKBTRN;  /* avoid structure result */
A68_338  FCKBTRN;  /* avoid structure result */
A68_338  GCKBTRN;  /* avoid structure result */
A68_338  HCKBTRN;  /* avoid structure result */
A68_338  ICKBTRN;  /* avoid structure result */
A68_214 * JCKBTRN_ufn;
A68_208  KCKBTRN;  /* avoid structure result */
A68_381  LCKBTRN;  /* CALL */
A68_338  MCKBTRN;  /* avoid structure result */
A68_208  NCKBTRN;  /* clause result */
A_PROC_ENTRY(do_unit);
 /* line 688: */
 /* line 689: */
YBKBTRN = Unit ;
switch ( YBKBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE248,MODE208)  */
ZBKBTRN_um = (YBKBTRN.data.mode23);
 /* line 690: */
A_CALLPROC(NL(FNJBTRN_uminst),(ZBKBTRN_um, A68_TRUE, NL(Tprocs), &BCKBTRN),(ZBKBTRN_um, A68_TRUE, NL(Tprocs), &BCKBTRN,(NL(FNJBTRN_uminst)).nonlocals));
ACKBTRN = BCKBTRN;
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
CCKBTRN_ud = (YBKBTRN.data.mode24);
 /* line 691: */
A_CALLPROC(NL(DOJBTRN_udinst),(CCKBTRN_ud, A68_TRUE, NL(Tprocs), &DCKBTRN),(CCKBTRN_ud, A68_TRUE, NL(Tprocs), &DCKBTRN,(NL(DOJBTRN_udinst)).nonlocals));
ACKBTRN = DCKBTRN;
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
 /* line 692: */
A_CALLPROC(NL(RPJBTRN_uprim),(Unit, A68_TRUE, NL(Tprocs), &ECKBTRN),(Unit, A68_TRUE, NL(Tprocs), &ECKBTRN,(NL(RPJBTRN_uprim)).nonlocals));
ACKBTRN = ECKBTRN;
break;
case 14: /* REF STRUCT(MODE208,INT,INT)  */
 /* line 693: */
A_CALLPROC(NL(RPJBTRN_uprim),(Unit, A68_TRUE, NL(Tprocs), &FCKBTRN),(Unit, A68_TRUE, NL(Tprocs), &FCKBTRN,(NL(RPJBTRN_uprim)).nonlocals));
ACKBTRN = FCKBTRN;
break;
case 18: /* REF STRUCT(MODE208,MODE208)  */
 /* line 694: */
A_CALLPROC(NL(RPJBTRN_uprim),(Unit, A68_TRUE, NL(Tprocs), &GCKBTRN),(Unit, A68_TRUE, NL(Tprocs), &GCKBTRN,(NL(RPJBTRN_uprim)).nonlocals));
ACKBTRN = GCKBTRN;
break;
case 19: /* REF STRUCT(MODE208,MODE208,MODE208)  */
 /* line 695: */
A_CALLPROC(NL(RPJBTRN_uprim),(Unit, A68_TRUE, NL(Tprocs), &HCKBTRN),(Unit, A68_TRUE, NL(Tprocs), &HCKBTRN,(NL(RPJBTRN_uprim)).nonlocals));
ACKBTRN = HCKBTRN;
break;
case 25: /* REF STRUCT(MODE208,REF MODE268)  */
 /* line 696: */
A_CALLPROC(NL(RPJBTRN_uprim),(Unit, A68_TRUE, NL(Tprocs), &ICKBTRN),(Unit, A68_TRUE, NL(Tprocs), &ICKBTRN,(NL(RPJBTRN_uprim)).nonlocals));
ACKBTRN = ICKBTRN;
break;
case 12: /* REF STRUCT(MODE208,MODE208)  */
JCKBTRN_ufn = (YBKBTRN.data.mode12);
A_CALLPROC(NL(VBKBTRN_do_unit),((*(&(JCKBTRN_ufn->Source))), &KCKBTRN),((*(&(JCKBTRN_ufn->Source))), &KCKBTRN,(NL(VBKBTRN_do_unit)).nonlocals));
ACKBTRN.U = KCKBTRN;
 /* line 700: */
ACKBTRN.C = A68_TRUE;
break;
default: 
 /* line 701: */
LCKBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(LCKBTRN,((*(&(NL(L)->Unit))), NL(Tprocs), &MCKBTRN),((*(&(NL(L)->Unit))), NL(Tprocs), &MCKBTRN,(LCKBTRN).nonlocals));
ACKBTRN = MCKBTRN;
break;
} 
NCKBTRN = ACKBTRN.U;
A_PROC_EXIT(do_unit);
*ReturnedValue = (NCKBTRN);
return;
} 
#undef NL
 /* line 705: */

A_STATIC A68_VOID  SCKBTRN_do_name(A68_249 * Name, A68_213 * Uname, A68_208  Unit, void *NonLocals)
#define NL(x) (((TCKBTRN_do_name *)NonLocals)->x)
{ 
A68_INT  UCKBTRN_old;
A68_INT  VCKBTRN_new;
A68_INT * YCKBTRN;  /* YIELD */
A_PROC_ENTRY(do_name);
 /* line 706: */
 /* line 707: */
{ 
UCKBTRN_old = (*(&(Name->Nameno)));
VCKBTRN_new = (*(&(Uname->Nameno)));
 /* line 708: */
A_CALLPROC(NL(WKJBTRN_fill_uname),((*(&A_VINDEX(NL(VFJBTRN_nametypes),UCKBTRN_old))), Unit, Uname),((*(&A_VINDEX(NL(VFJBTRN_nametypes),UCKBTRN_old))), Unit, Uname,(NL(WKJBTRN_fill_uname)).nonlocals));
 /* line 709: */
if ( ((*(&A_VINDEX(NL(DGJBTRN_translations),UCKBTRN_old)))!=(-1)) )
{ 
A_CALLPROC(NL(PEJBTRN_sys),(XCKBTRN),(XCKBTRN,(NL(PEJBTRN_sys)).nonlocals));
} 
 /* line 710: */
 /* line 711: */
YCKBTRN = (&A_VINDEX(NL(DGJBTRN_translations),UCKBTRN_old)) ;
(*YCKBTRN) = VCKBTRN_new;
} 
A_PROC_EXIT(do_name);
return;
} 
#undef NL

A_STATIC A68_VOID  UEKBTRN_do_dimension(A68_182 * Size, A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((VEKBTRN_do_dimension *)NonLocals)->x)
{ 
A68_225  WEKBTRN;  /* collateral clause result */
A68_208  XEKBTRN;  /* OPERATORS - mode -> union mode */
A68_208  YEKBTRN;  /* clause result */
A68_225 * ZEKBTRN;  /* YIELD */
A68_208  AFKBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BFKBTRN;  /* avoid structure result */
A68_208  CFKBTRN;  /* OPERATORS - mode -> union mode */
A68_213 * DFKBTRN;  /* YIELD */
A68_223 * EFKBTRN_ustr;
A68_223 ** FFKBTRN_uptr;
A68_INT  GFKBTRN;  /* to part of loop */
A68_INT  HFKBTRN;  /* loop control */
A68_223  IFKBTRN;  /* collateral clause result */
A68_208  JFKBTRN;  /* avoid structure result */
A68_223 * KFKBTRN;  /* YIELD */
A68_208  LFKBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(do_dimension);
 /* line 776: */
 /* line 777: */
 /* line 781: */
if ( (Size==BBAATRN_nilformulas) )
{ 
 /* line 782: */
WEKBTRN.Inst = (*(&(NL(M)->Inst)));
WEKBTRN.Right = A_UNITE(XEKBTRN,mode34,34,(&FIAATRN_unull));
 /* line 783: */
ZEKBTRN = A_HEAP(A68_225 ) ;
(*ZEKBTRN) = WEKBTRN ;
A_CALLPROC(NL(ELJBTRN_call_name),( &BFKBTRN),( &BFKBTRN,(NL(ELJBTRN_call_name)).nonlocals));
DFKBTRN = A_CALLPROC(NL(KKJBTRN_make_uname),(BFKBTRN, NL(REKBTRN_type), A_UNITE(AFKBTRN,mode23,23,ZEKBTRN)),(BFKBTRN, NL(REKBTRN_type), A_UNITE(AFKBTRN,mode23,23,ZEKBTRN),(NL(KKJBTRN_make_uname)).nonlocals)) ;
YEKBTRN = A_UNITE(CFKBTRN,mode11,11,DFKBTRN);
} 
else
{ 
 /* line 784: */
FFKBTRN_uptr = (&EFKBTRN_ustr);
 /* line 785: */
 /* line 786: */
GFKBTRN = A_CALLPROC(NL(OFJBTRN_get_int),((*(&(Size->Formula)))),((*(&(Size->Formula))),(NL(OFJBTRN_get_int)).nonlocals));
for ( HFKBTRN = 1;
HFKBTRN <= GFKBTRN;
HFKBTRN += 1 )
{ 
 /* line 787: */
A_CALLPROC(NL(TEKBTRN_do_dimension),((*(&(Size->Rest))), &JFKBTRN),((*(&(Size->Rest))), &JFKBTRN,(NL(TEKBTRN_do_dimension)).nonlocals));
IFKBTRN.Elem = JFKBTRN;
IFKBTRN.Rest = IAAATRN_nilustr;
 /* line 788: */
KFKBTRN = A_HEAP(A68_223 ) ;
(*KFKBTRN) = IFKBTRN ;
FFKBTRN_uptr = (&(((*FFKBTRN_uptr) = KFKBTRN)->Rest));
}
 /* line 789: */
 /* line 790: */
YEKBTRN = A_UNITE(LFKBTRN,mode21,21,EFKBTRN_ustr);
} 
A_PROC_EXIT(do_dimension);
*ReturnedValue = (YEKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OFKBTRN_rowtype(A68_182 * Size, A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((PFKBTRN_rowtype *)NonLocals)->x)
{ 
A68_186  QFKBTRN;  /* clause result */
A68_188  RFKBTRN;  /* collateral clause result */
A68_186  SFKBTRN;  /* avoid structure result */
A68_188 * TFKBTRN;  /* YIELD */
A68_186  UFKBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(rowtype);
 /* line 793: */
 /* line 794: */
 /* line 795: */
if ( (Size==BBAATRN_nilformulas) )
{ 
QFKBTRN = NL(REKBTRN_type);
} 
else
{ 
RFKBTRN.Size = (*(&(Size->Formula)));
 /* line 796: */
A_CALLPROC(NL(NFKBTRN_rowtype),((*(&(Size->Rest))), &SFKBTRN),((*(&(Size->Rest))), &SFKBTRN,(NL(NFKBTRN_rowtype)).nonlocals));
RFKBTRN.Elem = SFKBTRN;
TFKBTRN = A_HEAP(A68_188 ) ;
(*TFKBTRN) = RFKBTRN ;
QFKBTRN = A_UNITE(UFKBTRN,mode2,2,TFKBTRN);
} 
A_PROC_EXIT(rowtype);
*ReturnedValue = (QFKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UGKBTRN_get_inst(A68_208  U, A68_INT  Index, A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((VGKBTRN_get_inst *)NonLocals)->x)
{ 
A68_208  WGKBTRN;  /* united object - for case conformity */
A68_213 * XGKBTRN_un;
A68_213  YGKBTRN;  /* collateral clause result */
A68_INT  ZGKBTRN;  /* YIELD */
A68_208  AHKBTRN;  /* clause result */
A68_213 * BHKBTRN;  /* YIELD */
A68_208  CHKBTRN;  /* OPERATORS - mode -> union mode */
A68_218 * DHKBTRN_ui;
A68_208  EHKBTRN;  /* avoid structure result */
A68_208  HHKBTRN;  /* OPERATORS - mode -> union mode */
A68_208  IHKBTRN_new;
A68_208  JHKBTRN;  /* clause result */
A68_208  KHKBTRN;  /* united object - for case conformity */
A68_213 * LHKBTRN_un;
A68_INT  MHKBTRN;  /* YIELD */
A68_208  NHKBTRN;  /* united object - for case conformity */
A68_223 * OHKBTRN_us;
A68_223 * PHKBTRN;  /* clause result */
A68_223 * SHKBTRN_uptr;
A68_INT  THKBTRN;  /* to part of loop */
A68_INT  UHKBTRN;  /* loop control */
A_PROC_ENTRY(get_inst);
 /* line 828: */
 /* line 830: */
{ 
 /* line 831: */
WGKBTRN = U ;
switch ( WGKBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
XGKBTRN_un = (WGKBTRN.data.mode11);
 /* line 833: */
YGKBTRN.Sort = (*(&(XGKBTRN_un->Sort)));
ZGKBTRN = (*(&(XGKBTRN_un->Nameno))) ;
YGKBTRN.Nameno = (*(&A_VINDEX(NL(DGJBTRN_translations),ZGKBTRN)));
 /* line 834: */
BHKBTRN = A_HEAP(A68_213 ) ;
(*BHKBTRN) = YGKBTRN ;
AHKBTRN = A_UNITE(CHKBTRN,mode11,11,BHKBTRN);
break;
case 16: /* REF STRUCT(MODE208,MODE170)  */
DHKBTRN_ui = (WGKBTRN.data.mode16);
 /* line 835: */
 /* line 836: */
A_CALLPROC(NL(TGKBTRN_get_inst),((*(&(DHKBTRN_ui->Unit))), A_CALLPROC(NL(OFJBTRN_get_int),((*(&(DHKBTRN_ui->Index)))),((*(&(DHKBTRN_ui->Index))),(NL(OFJBTRN_get_int)).nonlocals)), &EHKBTRN),((*(&(DHKBTRN_ui->Unit))), A_CALLPROC(NL(OFJBTRN_get_int),((*(&(DHKBTRN_ui->Index)))),((*(&(DHKBTRN_ui->Index))),(NL(OFJBTRN_get_int)).nonlocals)), &EHKBTRN,(NL(TGKBTRN_get_inst)).nonlocals));
AHKBTRN = EHKBTRN;
break;
default: 
A_CALLPROC(NL(PEJBTRN_sys),(GHKBTRN),(GHKBTRN,(NL(PEJBTRN_sys)).nonlocals));
 /* line 837: */
 /* line 838: */
AHKBTRN = A_UNITE(HHKBTRN,mode34,34,(&FIAATRN_unull));
break;
} 
IHKBTRN_new = AHKBTRN;
 /* line 839: */
 /* line 840: */
 /* line 841: */
if ( (Index==0) )
{ 
 /* line 842: */
JHKBTRN = IHKBTRN_new;
} 
else
{ 
 /* line 843: */
KHKBTRN = IHKBTRN_new ;
switch ( KHKBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
LHKBTRN_un = (KHKBTRN.data.mode11);
 /* line 844: */
 /* line 845: */
MHKBTRN = (*(&(LHKBTRN_un->Nameno))) ;
NHKBTRN = (*(&((*(&A_VINDEX((*NL(KHJBTRN_lettable)),MHKBTRN)))->Unit))) ;
switch ( NHKBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
OHKBTRN_us = (NHKBTRN.data.mode21);
 /* line 846: */
PHKBTRN = OHKBTRN_us;
break;
default: 
A_CALLPROC(NL(WDJBTRN_flt),(RHKBTRN),(RHKBTRN,(NL(WDJBTRN_flt)).nonlocals));
 /* line 847: */
 /* line 848: */
 /* line 849: */
PHKBTRN = IAAATRN_nilustr;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
SHKBTRN_uptr = PHKBTRN;
 /* line 850: */
THKBTRN = (Index-1);
for ( UHKBTRN = 1;
UHKBTRN <= THKBTRN;
UHKBTRN += 1 )
{ 
SHKBTRN_uptr = (*(&(SHKBTRN_uptr->Rest)));
}
 /* line 851: */
 /* line 852: */
 /* line 853: */
JHKBTRN = (*(&(SHKBTRN_uptr->Elem)));
} 
} 
A_PROC_EXIT(get_inst);
*ReturnedValue = (JHKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JPKBTRN_simplify_type(A68_186  Type, A68_362 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((KPKBTRN_simplify_type *)NonLocals)->x)
{ 
A68_186  LPKBTRN;  /* united object - for case conformity */
A68_187 * MPKBTRN_tn;
A68_290  NPKBTRN;  /* OPERATORS - simple index */
A68_INT  OPKBTRN;  /* YIELD */
A68_201 * PPKBTRN_typedec;
A68_199  QPKBTRN;  /* united object - for case conformity */
A68_195 * RPKBTRN_tag;
A68_329  SPKBTRN;  /* collateral clause result */
A68_329  TPKBTRN;  /* avoid structure result */
A68_329  UPKBTRN;  /* clause result */
A68_329  VPKBTRN;  /* collateral clause result */
A68_191 * WPKBTRN_tb;
A68_329  XPKBTRN;  /* collateral clause result */
A68_372  YPKBTRN;  /* CALL */
A68_329  ZPKBTRN;  /* avoid structure result */
A_PROC_ENTRY(simplify_type);
 /* line 1058: */
 /* line 1059: */
LPKBTRN = Type ;
switch ( LPKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
MPKBTRN_tn = (LPKBTRN.data.mode1);
 /* line 1060: */
{ 
NPKBTRN = (*(&(NL(BCJBTRN_env)->Types))) ;
OPKBTRN = (*(&(MPKBTRN_tn->Typeno))) ;
PPKBTRN_typedec = (*(&A_VINDEX(NPKBTRN,OPKBTRN)));
 /* line 1061: */
 /* line 1062: */
QPKBTRN = (*(&(PPKBTRN_typedec->Body))) ;
switch ( QPKBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE186)  */
RPKBTRN_tag = (QPKBTRN.data.mode3);
 /* line 1063: */
A_CALLPROC(NL(IPKBTRN_simplify_type),((*(&(RPKBTRN_tag->Tag))), Tprocs, &TPKBTRN),((*(&(RPKBTRN_tag->Tag))), Tprocs, &TPKBTRN,(NL(IPKBTRN_simplify_type)).nonlocals));
SPKBTRN.T = TPKBTRN.T;
 /* line 1064: */
SPKBTRN.C = A68_TRUE;
UPKBTRN = SPKBTRN;
break;
default: 
VPKBTRN.T = Type;
 /* line 1065: */
 /* line 1066: */
 /* line 1067: */
VPKBTRN.C = A68_FALSE;
UPKBTRN = VPKBTRN;
break;
} 
} 
break;
case 5: /* REF STRUCT(MODE186)  */
WPKBTRN_tb = (LPKBTRN.data.mode5);
 /* line 1068: */
XPKBTRN.T = (*(&(WPKBTRN_tb->Type)));
 /* line 1069: */
 /* line 1070: */
XPKBTRN.C = A68_TRUE;
UPKBTRN = XPKBTRN;
break;
default: 
 /* line 1071: */
YPKBTRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(YPKBTRN,(Type, Tprocs, &ZPKBTRN),(Type, Tprocs, &ZPKBTRN,(YPKBTRN).nonlocals));
UPKBTRN = ZPKBTRN;
break;
} 
A_PROC_EXIT(simplify_type);
*ReturnedValue = (UPKBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  DQKBTRN_(A68_186  A, A68_186  B, void *NonLocals)
#define NL(x) (((EQKBTRN_ *)NonLocals)->x)
{ 
A68_186  FQKBTRN;  /* united object - for case conformity */
A68_187 * GQKBTRN_tna;
A68_186  HQKBTRN;  /* united object - for case conformity */
A68_187 * IQKBTRN_tnb;
A68_BOOL  JQKBTRN;  /* clause result */
A68_188 * KQKBTRN_tra;
A68_186  LQKBTRN;  /* united object - for case conformity */
A68_188 * MQKBTRN_trb;
A68_BOOL  NQKBTRN;  /* optbool result */
A68_189 * OQKBTRN_tsa;
A68_186  PQKBTRN;  /* united object - for case conformity */
A68_189 * QQKBTRN_tsb;
A68_189 * RQKBTRN_aptr;
A68_189 * SQKBTRN_bptr;
A68_BOOL  TQKBTRN;  /* optbool result */
A68_BOOL  UQKBTRN;  /* optbool result */
A68_192 * VQKBTRN_tca;
A68_186  WQKBTRN;  /* united object - for case conformity */
A68_192 * XQKBTRN_tcb;
A68_BOOL  YQKBTRN;  /* optbool result */
A68_186  ZQKBTRN;  /* united object - for case conformity */
A_PROC_ENTRY(=);
 /* line 1075: */
 /* line 1076: */
FQKBTRN = A ;
switch ( FQKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
GQKBTRN_tna = (FQKBTRN.data.mode1);
 /* line 1077: */
 /* line 1078: */
HQKBTRN = B ;
switch ( HQKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
IQKBTRN_tnb = (HQKBTRN.data.mode1);
 /* line 1079: */
JQKBTRN = ((*(&(GQKBTRN_tna->Typeno)))==(*(&(IQKBTRN_tnb->Typeno))));
break;
default: 
 /* line 1080: */
 /* line 1081: */
JQKBTRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
KQKBTRN_tra = (FQKBTRN.data.mode2);
 /* line 1082: */
 /* line 1083: */
LQKBTRN = B ;
switch ( LQKBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE170,MODE186)  */
MQKBTRN_trb = (LQKBTRN.data.mode2);
 /* line 1084: */
 /* line 1085: */
NQKBTRN = (XOMATRN_int((*(&(KQKBTRN_tra->Size))))==XOMATRN_int((*(&(MQKBTRN_trb->Size)))));
if ( NQKBTRN )
{ /* line 1086: */
NQKBTRN = A_CALLPROC(NL(CQKBTRN_),((*(&(KQKBTRN_tra->Elem))), (*(&(MQKBTRN_trb->Elem)))),((*(&(KQKBTRN_tra->Elem))), (*(&(MQKBTRN_trb->Elem))),(NL(CQKBTRN_)).nonlocals));
}
JQKBTRN = NQKBTRN;
break;
default: 
 /* line 1087: */
 /* line 1088: */
JQKBTRN = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
OQKBTRN_tsa = (FQKBTRN.data.mode3);
 /* line 1089: */
 /* line 1090: */
PQKBTRN = B ;
switch ( PQKBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
QQKBTRN_tsb = (PQKBTRN.data.mode3);
 /* line 1091: */
{ 
RQKBTRN_aptr = OQKBTRN_tsa;
SQKBTRN_bptr = QQKBTRN_tsb;
 /* line 1092: */
for ( ;; )
{ 
TQKBTRN = (RQKBTRN_aptr!=GAAATRN_niltstr);
if ( TQKBTRN )
{ /* line 1093: */
TQKBTRN = (SQKBTRN_bptr!=GAAATRN_niltstr);
}
if ( TQKBTRN )
{ /* line 1094: */
TQKBTRN = A_CALLPROC(NL(CQKBTRN_),((*(&(RQKBTRN_aptr->Elem))), (*(&(SQKBTRN_bptr->Elem)))),((*(&(RQKBTRN_aptr->Elem))), (*(&(SQKBTRN_bptr->Elem))),(NL(CQKBTRN_)).nonlocals));
}
if ( !(TQKBTRN) ) break;
RQKBTRN_aptr = (*(&(RQKBTRN_aptr->Rest)));
 /* line 1095: */
 /* line 1096: */
SQKBTRN_bptr = (*(&(SQKBTRN_bptr->Rest)));
}
 /* line 1097: */
UQKBTRN = (RQKBTRN_aptr==GAAATRN_niltstr);
if ( UQKBTRN )
{ /* line 1098: */
UQKBTRN = (SQKBTRN_bptr==GAAATRN_niltstr);
}
 /* line 1099: */
JQKBTRN = UQKBTRN;
} 
break;
default: 
 /* line 1100: */
 /* line 1101: */
JQKBTRN = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
VQKBTRN_tca = (FQKBTRN.data.mode6);
 /* line 1102: */
 /* line 1103: */
WQKBTRN = B ;
switch ( WQKBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE170,MODE186)  */
XQKBTRN_tcb = (WQKBTRN.data.mode6);
 /* line 1104: */
 /* line 1105: */
YQKBTRN = (XOMATRN_int((*(&(VQKBTRN_tca->Size))))==XOMATRN_int((*(&(XQKBTRN_tcb->Size)))));
if ( YQKBTRN )
{ /* line 1106: */
YQKBTRN = A_CALLPROC(NL(CQKBTRN_),((*(&(VQKBTRN_tca->Char))), (*(&(XQKBTRN_tcb->Char)))),((*(&(VQKBTRN_tca->Char))), (*(&(XQKBTRN_tcb->Char))),(NL(CQKBTRN_)).nonlocals));
}
JQKBTRN = YQKBTRN;
break;
default: 
 /* line 1107: */
 /* line 1108: */
JQKBTRN = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(INT)  */
 /* line 1109: */
ZQKBTRN = B ;
switch ( ZQKBTRN.mode )
{ 
case 7: /* REF STRUCT(INT)  */
JQKBTRN = A68_TRUE;
break;
default: 
 /* line 1110: */
JQKBTRN = A68_FALSE;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(=);
return( JQKBTRN );
} 
#undef NL

A_STATIC A68_BOOL  DRKBTRN_(A68_524  A, A68_524  B)
{ 
A68_524  ERKBTRN;  /* united object - for case conformity */
A68_521 * FRKBTRN_ra;
A68_524  GRKBTRN;  /* united object - for case conformity */
A68_521 * HRKBTRN_rb;
A68_BOOL  IRKBTRN;  /* clause result */
A68_522 * JRKBTRN_sa;
A68_524  KRKBTRN;  /* united object - for case conformity */
A68_522 * LRKBTRN_sb;
A68_523 * MRKBTRN_ca;
A68_524  NRKBTRN;  /* united object - for case conformity */
A68_523 * ORKBTRN_cb;
A_PROC_ENTRY(=);
 /* line 1128: */
 /* line 1129: */
ERKBTRN = A ;
switch ( ERKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,MODE524)  */
FRKBTRN_ra = (ERKBTRN.data.mode1);
 /* line 1130: */
 /* line 1131: */
GRKBTRN = B ;
switch ( GRKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,MODE524)  */
HRKBTRN_rb = (GRKBTRN.data.mode1);
 /* line 1132: */
IRKBTRN = (FRKBTRN_ra==HRKBTRN_rb);
break;
default: 
 /* line 1133: */
 /* line 1134: */
IRKBTRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(INT,BOOL,MODE524)  */
JRKBTRN_sa = (ERKBTRN.data.mode2);
 /* line 1135: */
 /* line 1136: */
KRKBTRN = B ;
switch ( KRKBTRN.mode )
{ 
case 2: /* REF STRUCT(INT,BOOL,MODE524)  */
LRKBTRN_sb = (KRKBTRN.data.mode2);
 /* line 1137: */
IRKBTRN = (JRKBTRN_sa==LRKBTRN_sb);
break;
default: 
 /* line 1138: */
 /* line 1139: */
IRKBTRN = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(INT,MODE524)  */
MRKBTRN_ca = (ERKBTRN.data.mode3);
 /* line 1140: */
 /* line 1141: */
NRKBTRN = B ;
switch ( NRKBTRN.mode )
{ 
case 3: /* REF STRUCT(INT,MODE524)  */
ORKBTRN_cb = (NRKBTRN.data.mode3);
 /* line 1142: */
IRKBTRN = (MRKBTRN_ca==ORKBTRN_cb);
break;
default: 
 /* line 1143: */
 /* line 1144: */
IRKBTRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 1145: */
IRKBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( IRKBTRN );
} 
#undef NL

A_STATIC A68_BOOL  SRKBTRN_adjacent(A68_526  L, A68_526  R, void *NonLocals)
#define NL(x) (((TRKBTRN_adjacent *)NonLocals)->x)
{ 
A68_BOOL  URKBTRN;  /* clause result */
A68_208  VRKBTRN;  /* united object - for case conformity */
A68_218 * WRKBTRN_lui;
A68_BOOL  XRKBTRN;  /* optbool result */
A68_INT  YRKBTRN_lind;
A68_208  ZRKBTRN;  /* united object - for case conformity */
A68_218 * ASKBTRN_rui;
A68_INT  BSKBTRN_rind;
A68_BOOL  CSKBTRN;  /* optbool result */
A68_BOOL  DSKBTRN;  /* clause result */
A68_219 * ESKBTRN_lut;
A68_524  FSKBTRN;  /* united object - for case conformity */
A68_521 * GSKBTRN_fr;
A68_524  HSKBTRN;  /* clause result */
A68_522 * ISKBTRN_fs;
A68_523 * JSKBTRN_fc;
A68_524  KSKBTRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  LSKBTRN;  /* optbool result */
A68_INT  MSKBTRN_upb;
A68_208  NSKBTRN;  /* united object - for case conformity */
A68_218 * OSKBTRN_rut;
A68_186  PSKBTRN;  /* united object - for case conformity */
A68_188 * QSKBTRN_tr;
A68_BOOL  RSKBTRN;  /* clause result */
A68_192 * SSKBTRN_ts;
A68_BOOL  TSKBTRN;  /* clause result */
A_PROC_ENTRY(adjacent);
 /* line 1149: */
 /* line 1150: */
if ( NL(HZIBTRN_not_adjacent) )
{ 
 /* line 1151: */
URKBTRN = A68_FALSE;
} 
else
{ 
 /* line 1152: */
VRKBTRN = L.U ;
switch ( VRKBTRN.mode )
{ 
case 16: /* REF STRUCT(MODE208,MODE170)  */
WRKBTRN_lui = (VRKBTRN.data.mode16);
 /* line 1153: */
 /* line 1154: */
XRKBTRN = DRKBTRN_(L.F, R.F);
if ( XRKBTRN )
{{ 
YRKBTRN_lind = XOMATRN_int((*(&(WRKBTRN_lui->Index))));
 /* line 1155: */
 /* line 1156: */
ZRKBTRN = R.U ;
switch ( ZRKBTRN.mode )
{ 
case 16: /* REF STRUCT(MODE208,MODE170)  */
ASKBTRN_rui = (ZRKBTRN.data.mode16);
 /* line 1157: */
{ 
BSKBTRN_rind = XOMATRN_int((*(&(ASKBTRN_rui->Index))));
 /* line 1158: */
CSKBTRN = (BSKBTRN_rind==(YRKBTRN_lind+1));
if ( CSKBTRN )
{ /* line 1159: */
CSKBTRN = A_CALLPROC(NL(CQKBTRN_),(L.T, R.T),(L.T, R.T,(NL(CQKBTRN_)).nonlocals));
}
 /* line 1160: */
DSKBTRN = CSKBTRN;
} 
break;
default: 
 /* line 1161: */
 /* line 1162: */
DSKBTRN = A68_FALSE;
break;
} 
} 
XRKBTRN = DSKBTRN;
}
 /* line 1163: */
URKBTRN = XRKBTRN;
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
ESKBTRN_lut = (VRKBTRN.data.mode17);
 /* line 1164: */
 /* line 1165: */
FSKBTRN = R.F ;
switch ( FSKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,MODE524)  */
GSKBTRN_fr = (FSKBTRN.data.mode1);
 /* line 1166: */
HSKBTRN = (*(&(GSKBTRN_fr->Container)));
break;
case 2: /* REF STRUCT(INT,BOOL,MODE524)  */
ISKBTRN_fs = (FSKBTRN.data.mode2);
 /* line 1167: */
HSKBTRN = (*(&(ISKBTRN_fs->Container)));
break;
case 3: /* REF STRUCT(INT,MODE524)  */
JSKBTRN_fc = (FSKBTRN.data.mode3);
 /* line 1168: */
 /* line 1169: */
HSKBTRN = (*(&(JSKBTRN_fc->Container)));
break;
default: 
 /* line 1170: */
HSKBTRN = A_EMPTY(KSKBTRN,4);
break;
} 
LSKBTRN = DRKBTRN_(L.F, HSKBTRN);
if ( LSKBTRN )
{{ 
MSKBTRN_upb = XOMATRN_int((*(&((&(ESKBTRN_lut->Range))->Upb))));
 /* line 1171: */
 /* line 1172: */
NSKBTRN = R.U ;
switch ( NSKBTRN.mode )
{ 
case 16: /* REF STRUCT(MODE208,MODE170)  */
OSKBTRN_rut = (NSKBTRN.data.mode16);
 /* line 1173: */
 /* line 1174: */
PSKBTRN = L.T ;
switch ( PSKBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE170,MODE186)  */
QSKBTRN_tr = (PSKBTRN.data.mode2);
 /* line 1175: */
RSKBTRN = A_CALLPROC(NL(CQKBTRN_),((*(&(QSKBTRN_tr->Elem))), R.T),((*(&(QSKBTRN_tr->Elem))), R.T,(NL(CQKBTRN_)).nonlocals));
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
SSKBTRN_ts = (PSKBTRN.data.mode6);
 /* line 1176: */
RSKBTRN = A_CALLPROC(NL(CQKBTRN_),((*(&(SSKBTRN_ts->Char))), R.T),((*(&(SSKBTRN_ts->Char))), R.T,(NL(CQKBTRN_)).nonlocals));
break;
default: 
 /* line 1177: */
RSKBTRN = A68_FALSE;
break;
} 
if ( RSKBTRN )
{ /* line 1178: */
RSKBTRN = (XOMATRN_int((*(&(OSKBTRN_rut->Index))))==(MSKBTRN_upb+1));
}
TSKBTRN = RSKBTRN;
break;
default: 
 /* line 1179: */
 /* line 1180: */
 /* line 1182: */
TSKBTRN = A68_FALSE;
break;
} 
} 
LSKBTRN = TSKBTRN;
}
URKBTRN = LSKBTRN;
break;
default: 
 /* line 1183: */
 /* line 1184: */
URKBTRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(adjacent);
return( URKBTRN );
} 
#undef NL

A_STATIC A68_525 * XSKBTRN_break_down_unit(A68_186  Type, A68_208  Unit, void *NonLocals)
#define NL(x) (((YSKBTRN_break_down_unit *)NonLocals)->x)
{ 
A68_525 * ZSKBTRN_ans;
A68_525 ** ATKBTRN_cptr;
A68_530  ETKBTRN_sub_unit;   /* proc value of non-global proc */
A68_524  YUKBTRN;  /* OPERATORS - mode -> union mode */
A68_525 * ZUKBTRN;  /* clause result */
A_PROC_ENTRY(break_down_unit);
 /* line 1188: */
 /* line 1189: */
{ 
 /* line 1190: */
ATKBTRN_cptr = (&ZSKBTRN_ans);
 /* line 1192: */
A_CLOSURE( ETKBTRN_sub_unit, FTKBTRN_sub_unit, GTKBTRN_sub_unit );
(( GTKBTRN_sub_unit * ) ( ETKBTRN_sub_unit.nonlocals )) -> ATKBTRN_cptr = (&ATKBTRN_cptr);
(( GTKBTRN_sub_unit * ) ( ETKBTRN_sub_unit.nonlocals )) -> ETKBTRN_sub_unit = ETKBTRN_sub_unit;
(( GTKBTRN_sub_unit * ) ( ETKBTRN_sub_unit.nonlocals )) -> CQKBTRN_ = NL(CQKBTRN_);
 /* line 1233: */
A_CALLPROC(ETKBTRN_sub_unit,(Type, Unit, A_EMPTY(YUKBTRN,4)),(Type, Unit, A_EMPTY(YUKBTRN,4),(ETKBTRN_sub_unit).nonlocals));
 /* line 1235: */
 /* line 1236: */
ZUKBTRN = ZSKBTRN_ans;
} 
A_PROC_EXIT(break_down_unit);
return( ZUKBTRN );
} 
#undef NL

A_STATIC A68_VOID  CVKBTRN_string_row(A68_526  Fu, A68_526  *ReturnedValue, void *NonLocals)
#define NL(x) (((DVKBTRN_string_row *)NonLocals)->x)
{ 
A68_186  EVKBTRN;  /* united object - for case conformity */
A68_192 * FVKBTRN_ts;
A68_186  GVKBTRN;  /* clause result */
A68_188 * HVKBTRN_tr;
A68_186  IVKBTRN_base;
A68_186  JVKBTRN;  /* united object - for case conformity */
A68_192 * KVKBTRN_ts;
A68_170  LVKBTRN;  /* clause result */
A68_188 * MVKBTRN_tr;
A68_170  NVKBTRN_size;
A68_186  OVKBTRN;  /* united object - for case conformity */
A68_BOOL  PVKBTRN;  /* clause result */
A68_BOOL  QVKBTRN_to_string;
A68_192  RVKBTRN;  /* collateral clause result */
A68_186  SVKBTRN;  /* clause result */
A68_192 * TVKBTRN;  /* YIELD */
A68_186  UVKBTRN;  /* OPERATORS - mode -> union mode */
A68_188  VVKBTRN;  /* collateral clause result */
A68_188 * WVKBTRN;  /* YIELD */
A68_186  XVKBTRN;  /* OPERATORS - mode -> union mode */
A68_186  YVKBTRN_in_type;
A68_186  ZVKBTRN_out_type;
A68_508 * AWKBTRN_fnspec;
A68_VC  BWKBTRN;  /* clause result */
A68_VC  CWKBTRN_fnname;
A68_280  DWKBTRN;  /* OPERATORS - mode -> union mode */
A68_248  EWKBTRN;  /* avoid structure result */
A68_248  FWKBTRN_inst;
A68_225  GWKBTRN;  /* collateral clause result */
A68_225 * HWKBTRN;  /* YIELD */
A68_208  IWKBTRN;  /* OPERATORS - mode -> union mode */
A68_208  JWKBTRN_unit;
A68_283  KWKBTRN;  /* collateral clause result */
A68_VC  LWKBTRN;  /* avoid structure result */
A68_186  MWKBTRN;  /* OPERATORS - mode -> union mode */
A68_161  NWKBTRN;  /* OPERATORS - mode -> union mode */
A68_283  OWKBTRN_nt;
A68_213 * PWKBTRN_uname;
A68_526  QWKBTRN;  /* collateral clause result */
A68_208  RWKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  SWKBTRN;  /* OPERATORS - mode -> union mode */
A68_526  TWKBTRN;  /* clause result */
A_PROC_ENTRY(string_row);
 /* line 1240: */
 /* line 1241: */
{ 
 /* line 1242: */
EVKBTRN = Fu.T ;
switch ( EVKBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE170,MODE186)  */
FVKBTRN_ts = (EVKBTRN.data.mode6);
 /* line 1243: */
GVKBTRN = (*(&(FVKBTRN_ts->Char)));
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
HVKBTRN_tr = (EVKBTRN.data.mode2);
 /* line 1244: */
GVKBTRN = (*(&(HVKBTRN_tr->Elem)));
break;
default: 
A_IMP_SKIP ;
break;
} 
IVKBTRN_base = GVKBTRN;
 /* line 1245: */
 /* line 1246: */
JVKBTRN = Fu.T ;
switch ( JVKBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE170,MODE186)  */
KVKBTRN_ts = (JVKBTRN.data.mode6);
 /* line 1247: */
LVKBTRN = (*(&(KVKBTRN_ts->Size)));
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
MVKBTRN_tr = (JVKBTRN.data.mode2);
 /* line 1248: */
LVKBTRN = (*(&(MVKBTRN_tr->Size)));
break;
default: 
A_IMP_SKIP ;
break;
} 
NVKBTRN_size = LVKBTRN;
 /* line 1250: */
OVKBTRN = Fu.T ;
switch ( OVKBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE170,MODE186)  */
PVKBTRN = A68_FALSE;
break;
default: 
PVKBTRN = A68_TRUE;
break;
} 
QVKBTRN_to_string = PVKBTRN;
 /* line 1252: */
 /* line 1253: */
if ( QVKBTRN_to_string )
{ 
RVKBTRN.Size = NVKBTRN_size;
 /* line 1254: */
RVKBTRN.Char = IVKBTRN_base;
TVKBTRN = A_HEAP(A68_192 ) ;
(*TVKBTRN) = RVKBTRN ;
SVKBTRN = A_UNITE(UVKBTRN,mode6,6,TVKBTRN);
} 
else
{ 
VVKBTRN.Size = NVKBTRN_size;
 /* line 1255: */
VVKBTRN.Elem = IVKBTRN_base;
WVKBTRN = A_HEAP(A68_188 ) ;
(*WVKBTRN) = VVKBTRN ;
SVKBTRN = A_UNITE(XVKBTRN,mode2,2,WVKBTRN);
} 
YVKBTRN_in_type = SVKBTRN;
 /* line 1257: */
ZVKBTRN_out_type = Fu.T;
 /* line 1261: */
 /* line 1263: */
AWKBTRN_fnspec = (A_HEAP(A68_508 ));
 /* line 1265: */
if ( QVKBTRN_to_string )
{ 
BWKBTRN = NL(ZZIBTRN_string_to_row);
} 
else
{ 
BWKBTRN = NL(VZIBTRN_row_to_string);
} 
CWKBTRN_fnname = BWKBTRN;
 /* line 1266: */
A_CALLPROC(NL(YMKBTRN_add_fnbody),(CWKBTRN_fnname, A_UNITE(DWKBTRN,mode4,4,(&NIAATRN_reform)), (*AWKBTRN_fnspec), NL(VFJBTRN_nametypes), &EWKBTRN),(CWKBTRN_fnname, A_UNITE(DWKBTRN,mode4,4,(&NIAATRN_reform)), (*AWKBTRN_fnspec), NL(VFJBTRN_nametypes), &EWKBTRN,(NL(YMKBTRN_add_fnbody)).nonlocals));
FWKBTRN_inst = EWKBTRN;
 /* line 1267: */
GWKBTRN.Inst = FWKBTRN_inst;
GWKBTRN.Right = Fu.U;
HWKBTRN = A_HEAP(A68_225 ) ;
(*HWKBTRN) = GWKBTRN ;
JWKBTRN_unit = A_UNITE(IWKBTRN,mode23,23,HWKBTRN);
 /* line 1268: */
A_CALLPROC(NL(ELJBTRN_call_name),( &LWKBTRN),( &LWKBTRN,(NL(ELJBTRN_call_name)).nonlocals));
KWKBTRN.Name = LWKBTRN;
KWKBTRN.Type = A_UNITE(MWKBTRN,mode9,9,(&DIAATRN_tnull));
KWKBTRN.Attr = A_UNITE(NWKBTRN,mode5,5,(&ZHAATRN_attrnull));
OWKBTRN_nt = KWKBTRN;
 /* line 1269: */
PWKBTRN_uname = A_CALLPROC(NL(DJJBTRN_add_nametype),(OWKBTRN_nt, ZVKBTRN_out_type, 0),(OWKBTRN_nt, ZVKBTRN_out_type, 0,(NL(DJJBTRN_add_nametype)).nonlocals));
 /* line 1270: */
A_CALLPROC(NL(XJJBTRN_make_let),((*(&(PWKBTRN_uname->Nameno))), JWKBTRN_unit),((*(&(PWKBTRN_uname->Nameno))), JWKBTRN_unit,(NL(XJJBTRN_make_let)).nonlocals));
 /* line 1271: */
QWKBTRN.U = A_UNITE(RWKBTRN,mode11,11,PWKBTRN_uname);
QWKBTRN.T = ZVKBTRN_out_type;
 /* line 1272: */
QWKBTRN.F = A_EMPTY(SWKBTRN,4);
TWKBTRN = QWKBTRN;
} 
A_PROC_EXIT(string_row);
*ReturnedValue = (TWKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XWKBTRN_conc_unit(A68_532  Elems, A68_186  Type, A68_526  *ReturnedValue, void *NonLocals)
#define NL(x) (((YWKBTRN_conc_unit *)NonLocals)->x)
{ 
A68_186  ZWKBTRN;  /* united object - for case conformity */
A68_BOOL  AXKBTRN;  /* clause result */
A68_BOOL  BXKBTRN_string;
A68_534  FXKBTRN_trim;   /* proc value of non-global proc */
A68_536  AZKBTRN_add_trim;   /* proc value of non-global proc */
A68_526  PZKBTRN;  /* collateral clause result */
A68_208  QZKBTRN;  /* OPERATORS - mode -> union mode */
A68_186  RZKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  SZKBTRN;  /* OPERATORS - mode -> union mode */
A68_526  TZKBTRN_ans;
A68_526  UZKBTRN;  /* collateral clause result */
A68_208  VZKBTRN;  /* OPERATORS - mode -> union mode */
A68_186  WZKBTRN;  /* OPERATORS - mode -> union mode */
A68_524  XZKBTRN;  /* OPERATORS - mode -> union mode */
A68_526  YZKBTRN_most_recent;
A68_BOOL  ZZKBTRN_flatten_left;
A68_BOOL  AALBTRN_flatten_right;
A68_143  BALBTRN_do_most_recent;   /* proc value of non-global proc */
A68_526  TALBTRN_elem;
A68_526 * UALBTRN;  /* forall control - []x */
A68_INT  VALBTRN;  /* forall loop counter */
A68_526  WALBTRN;  /* avoid structure result */
A68_526  XALBTRN;  /* collateral clause result */
A68_526  YALBTRN;  /* clause result */
A_PROC_ENTRY(conc_unit);
 /* line 1276: */
 /* line 1277: */
{ 
ZWKBTRN = Type ;
switch ( ZWKBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE170,MODE186)  */
AXKBTRN = A68_TRUE;
break;
default: 
AXKBTRN = A68_FALSE;
break;
} 
BXKBTRN_string = AXKBTRN;
 /* line 1279: */
A_CLOSURE( FXKBTRN_trim, GXKBTRN_trim, HXKBTRN_trim );
(( HXKBTRN_trim * ) ( FXKBTRN_trim.nonlocals )) -> BXKBTRN_string = BXKBTRN_string;
(( HXKBTRN_trim * ) ( FXKBTRN_trim.nonlocals )) -> BVKBTRN_string_row = NL(BVKBTRN_string_row);
 /* line 1337: */
A_CLOSURE( AZKBTRN_add_trim, BZKBTRN_add_trim, CZKBTRN_add_trim );
(( CZKBTRN_add_trim * ) ( AZKBTRN_add_trim.nonlocals )) -> FXKBTRN_trim = FXKBTRN_trim;
 /* line 1358: */
PZKBTRN.U = A_UNITE(QZKBTRN,mode34,34,(&FIAATRN_unull));
PZKBTRN.T = A_UNITE(RZKBTRN,mode9,9,(&DIAATRN_tnull));
PZKBTRN.F = A_EMPTY(SZKBTRN,4);
TZKBTRN_ans = PZKBTRN;
UZKBTRN.U = A_UNITE(VZKBTRN,mode34,34,(&FIAATRN_unull));
UZKBTRN.T = A_UNITE(WZKBTRN,mode9,9,(&DIAATRN_tnull));
UZKBTRN.F = A_EMPTY(XZKBTRN,4);
YZKBTRN_most_recent = UZKBTRN;
 /* line 1359: */
ZZKBTRN_flatten_left = A68_FALSE;
AALBTRN_flatten_right = A68_FALSE;
 /* line 1361: */
 /* line 1362: */
A_CLOSURE( BALBTRN_do_most_recent, CALBTRN_do_most_recent, DALBTRN_do_most_recent );
(( DALBTRN_do_most_recent * ) ( BALBTRN_do_most_recent.nonlocals )) -> TZKBTRN_ans = (&TZKBTRN_ans);
(( DALBTRN_do_most_recent * ) ( BALBTRN_do_most_recent.nonlocals )) -> YZKBTRN_most_recent = (&YZKBTRN_most_recent);
(( DALBTRN_do_most_recent * ) ( BALBTRN_do_most_recent.nonlocals )) -> ZZKBTRN_flatten_left = (&ZZKBTRN_flatten_left);
(( DALBTRN_do_most_recent * ) ( BALBTRN_do_most_recent.nonlocals )) -> AALBTRN_flatten_right = (&AALBTRN_flatten_right);
(( DALBTRN_do_most_recent * ) ( BALBTRN_do_most_recent.nonlocals )) -> BXKBTRN_string = BXKBTRN_string;
 /* line 1387: */
 /* line 1388: */
VALBTRN = Elems.upb -1;
UALBTRN = Elems.data;
for (;VALBTRN-- >= 0;
(UALBTRN++
) )
{
TALBTRN_elem = *UALBTRN;
 /* line 1389: */
if ( A_CALLPROC(NL(RRKBTRN_adjacent),(YZKBTRN_most_recent, TALBTRN_elem),(YZKBTRN_most_recent, TALBTRN_elem,(NL(RRKBTRN_adjacent)).nonlocals)) )
{ 
A_CALLPROC(AZKBTRN_add_trim,(YZKBTRN_most_recent, TALBTRN_elem, &WALBTRN),(YZKBTRN_most_recent, TALBTRN_elem, &WALBTRN,(AZKBTRN_add_trim).nonlocals));
YZKBTRN_most_recent = WALBTRN;
 /* line 1390: */
 /* line 1391: */
AALBTRN_flatten_right = A68_TRUE;
} 
else
{ 
A_CALLPROC(BALBTRN_do_most_recent,(),((BALBTRN_do_most_recent).nonlocals));
 /* line 1392: */
YZKBTRN_most_recent = TALBTRN_elem;
 /* line 1393: */
 /* line 1394: */
 /* line 1395: */
AALBTRN_flatten_right = A68_FALSE;
} 
}
 /* line 1396: */
A_CALLPROC(BALBTRN_do_most_recent,(),((BALBTRN_do_most_recent).nonlocals));
 /* line 1398: */
XALBTRN.U = (*(&((&TZKBTRN_ans)->U)));
XALBTRN.T = Type;
 /* line 1399: */
XALBTRN.F = (*(&((&TZKBTRN_ans)->F)));
YALBTRN = XALBTRN;
} 
A_PROC_EXIT(conc_unit);
*ReturnedValue = (YALBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CBLBTRN_build_unit(A68_186  Type, A68_525 * List, A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBLBTRN_build_unit *)NonLocals)->x)
{ 
A68_525 * EBLBTRN_cptr;
A68_538  GBLBTRN_make_unit;   /* proc value of non-global proc */
A68_208  MDLBTRN;  /* clause result */
A68_526  NDLBTRN;  /* avoid structure result */
A_PROC_ENTRY(build_unit);
 /* line 1403: */
 /* line 1404: */
{ 
EBLBTRN_cptr = List;
 /* line 1406: */
A_CLOSURE( GBLBTRN_make_unit, HBLBTRN_make_unit, IBLBTRN_make_unit );
(( IBLBTRN_make_unit * ) ( GBLBTRN_make_unit.nonlocals )) -> EBLBTRN_cptr = (&EBLBTRN_cptr);
(( IBLBTRN_make_unit * ) ( GBLBTRN_make_unit.nonlocals )) -> GBLBTRN_make_unit = GBLBTRN_make_unit;
(( IBLBTRN_make_unit * ) ( GBLBTRN_make_unit.nonlocals )) -> WWKBTRN_conc_unit = NL(WWKBTRN_conc_unit);
(( IBLBTRN_make_unit * ) ( GBLBTRN_make_unit.nonlocals )) -> CQKBTRN_ = NL(CQKBTRN_);
 /* line 1454: */
 /* line 1455: */
A_CALLPROC(GBLBTRN_make_unit,(Type, &NDLBTRN),(Type, &NDLBTRN,(GBLBTRN_make_unit).nonlocals));
MDLBTRN = NDLBTRN.U;
} 
A_PROC_EXIT(build_unit);
*ReturnedValue = (MDLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KCJBTRN_generator(A68_BOOL  ICJBTRN_anonymous, A68_292  *ReturnedValue, void *NonLocals)
#define NL(x) (((LCJBTRN_generator *)NonLocals)->x)
{ 
A68_292  MCJBTRN;  /* clause result */
A68_292  NCJBTRN;  /* OPERATORS - dynamic generator */
{ 
NCJBTRN.upb = ((*NL(CCJBTRN_fns)).upb+1) ;
( ICJBTRN_anonymous? A_VLOC(A68_284 *,NCJBTRN): A_VHEAP(A68_284 *,NCJBTRN) );
MCJBTRN = NCJBTRN;
} 
*ReturnedValue = (MCJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CDJBTRN_generator(A68_BOOL  ADJBTRN_anonymous, A68_292  *ReturnedValue, void *NonLocals)
#define NL(x) (((DDJBTRN_generator *)NonLocals)->x)
{ 
A68_292  EDJBTRN;  /* clause result */
A68_292  FDJBTRN;  /* OPERATORS - dynamic generator */
{ 
FDJBTRN.upb = (*NL(CCJBTRN_fns)).upb ;
( ADJBTRN_anonymous? A_VLOC(A68_284 *,FDJBTRN): A_VHEAP(A68_284 *,FDJBTRN) );
EDJBTRN = FDJBTRN;
} 
*ReturnedValue = (EDJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XDJBTRN_flt(A68_VC  Info, void *NonLocals)
#define NL(x) (((YDJBTRN_flt *)NonLocals)->x)
{ 
A68_469  ZDJBTRN;  /* collateral clause result */
A68_52  CEJBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DEJBTRN;  /* YIELD */
A68_52  EEJBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FEJBTRN;  /* YIELD */
A68_52  IEJBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JEJBTRN;  /* YIELD */
A68_52  KEJBTRN;  /* OPERATORS - mode -> union mode */
A68_85  LEJBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  MEJBTRN;  /* avoid structure result */
A68_46  NEJBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
 /* line 173: */
DEJBTRN = BEJBTRN ;
ZDJBTRN.data[0] = A_UNITE(CEJBTRN,mode7,7,DEJBTRN);
 /* line 174: */
FEJBTRN = (*(&(NL(Fdec)->Fnname))) ;
ZDJBTRN.data[1] = A_UNITE(EEJBTRN,mode7,7,FEJBTRN);
JEJBTRN = HEJBTRN ;
ZDJBTRN.data[2] = A_UNITE(IEJBTRN,mode7,7,JEJBTRN);
ZDJBTRN.data[3] = A_UNITE(KEJBTRN,mode7,7,Info);
UJBAOSL_oneline( A_HISVEC(LEJBTRN,ZDJBTRN,4,A68_52 ), &MEJBTRN );
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(NEJBTRN,MEJBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(NEJBTRN,MEJBTRN,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  QEJBTRN_sys(A68_VC  Info, void *NonLocals)
#define NL(x) (((REJBTRN_sys *)NonLocals)->x)
{ 
A68_469  SEJBTRN;  /* collateral clause result */
A68_52  VEJBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  WEJBTRN;  /* YIELD */
A68_52  XEJBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  YEJBTRN;  /* YIELD */
A68_52  BFJBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CFJBTRN;  /* YIELD */
A68_52  DFJBTRN;  /* OPERATORS - mode -> union mode */
A68_85  EFJBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  FFJBTRN;  /* avoid structure result */
A68_46  GFJBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sys);
 /* line 177: */
WEJBTRN = UEJBTRN ;
SEJBTRN.data[0] = A_UNITE(VEJBTRN,mode7,7,WEJBTRN);
 /* line 178: */
YEJBTRN = (*(&(NL(Fdec)->Fnname))) ;
SEJBTRN.data[1] = A_UNITE(XEJBTRN,mode7,7,YEJBTRN);
CFJBTRN = AFJBTRN ;
SEJBTRN.data[2] = A_UNITE(BFJBTRN,mode7,7,CFJBTRN);
SEJBTRN.data[3] = A_UNITE(DFJBTRN,mode7,7,Info);
UJBAOSL_oneline( A_HISVEC(EFJBTRN,SEJBTRN,4,A68_52 ), &FFJBTRN );
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(GFJBTRN,FFJBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(GFJBTRN,FFJBTRN,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(sys);
return;
} 
#undef NL

A_STATIC A68_171 * IFJBTRN_makefint(A68_INT  Int)
{ 
A68_171  JFJBTRN;  /* collateral clause result */
A68_171 * KFJBTRN;  /* clause result */
A68_171 * LFJBTRN;  /* YIELD */
A_PROC_ENTRY(makefint);
JFJBTRN.Int = Int;
JFJBTRN.Text = EOAAOSL_nullstr;
LFJBTRN = A_HEAP(A68_171 ) ;
(*LFJBTRN) = JFJBTRN ;
KFJBTRN = LFJBTRN;
A_PROC_EXIT(makefint);
return( KFJBTRN );
} 
#undef NL

A_STATIC A68_INT  PFJBTRN_get_int(A68_170  F, void *NonLocals)
#define NL(x) (((QFJBTRN_get_int *)NonLocals)->x)
{ 
A68_170  RFJBTRN;  /* united object - for case conformity */
A68_171 * SFJBTRN_int;
A68_INT  TFJBTRN;  /* clause result */
A_PROC_ENTRY(get_int);
 /* line 185: */
 /* line 186: */
RFJBTRN = F ;
switch ( RFJBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
SFJBTRN_int = (RFJBTRN.data.mode1);
 /* line 187: */
TFJBTRN = (*(&(SFJBTRN_int->Int)));
break;
case 10: /* REF STRUCT(INT)  */
 /* line 188: */
TFJBTRN = NL(MFJBTRN_empty);
break;
default: 
 /* line 189: */
TFJBTRN = TNMATRN_formula_int(F, NL(Msg));
break;
} 
A_PROC_EXIT(get_int);
return( TFJBTRN );
} 
#undef NL

A_STATIC A68_VOID  ZFJBTRN_generator(A68_BOOL  XFJBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((AGJBTRN_generator *)NonLocals)->x)
{ 
A68_32  BGJBTRN;  /* clause result */
A68_32  CGJBTRN;  /* OPERATORS - dynamic generator */
{ 
CGJBTRN.upb = NL(WFJBTRN_n_translations) ;
( XFJBTRN_anonymous? A_VLOC(A68_INT ,CGJBTRN): A_VHEAP(A68_INT ,CGJBTRN) );
BGJBTRN = CGJBTRN;
} 
*ReturnedValue = (BGJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HGJBTRN_generator(A68_BOOL  FGJBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((IGJBTRN_generator *)NonLocals)->x)
{ 
A68_54  JGJBTRN;  /* clause result */
A68_54  KGJBTRN;  /* OPERATORS - dynamic generator */
{ 
KGJBTRN.upb = NL(WFJBTRN_n_translations) ;
( FGJBTRN_anonymous? A_VLOC(A68_BOOL ,KGJBTRN): A_VHEAP(A68_BOOL ,KGJBTRN) );
JGJBTRN = KGJBTRN;
} 
*ReturnedValue = (JGJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SGJBTRN_generator(A68_BOOL  QGJBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((TGJBTRN_generator *)NonLocals)->x)
{ 
A68_286  UGJBTRN;  /* clause result */
A68_286  VGJBTRN;  /* OPERATORS - dynamic generator */
{ 
VGJBTRN.upb = (NL(VFJBTRN_nametypes).upb+UFJBTRN_vecstep) ;
( QGJBTRN_anonymous? A_VLOC(A68_283 ,VGJBTRN): A_VHEAP(A68_283 ,VGJBTRN) );
UGJBTRN = VGJBTRN;
} 
*ReturnedValue = (UGJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GHJBTRN_generator(A68_BOOL  EHJBTRN_anonymous, A68_472  *ReturnedValue, void *NonLocals)
#define NL(x) (((HHJBTRN_generator *)NonLocals)->x)
{ 
A68_472  IHJBTRN;  /* clause result */
A68_472  JHJBTRN;  /* OPERATORS - dynamic generator */
{ 
JHJBTRN.upb = (*NL(WGJBTRN_nametable)).upb ;
( EHJBTRN_anonymous? A_VLOC(A68_242 *,JHJBTRN): A_VHEAP(A68_242 *,JHJBTRN) );
IHJBTRN = JHJBTRN;
} 
*ReturnedValue = (IHJBTRN);
return;
} 
#undef NL

A_STATIC A68_213 * QHJBTRN_allocate_name(void *NonLocals)
#define NL(x) (((RHJBTRN_allocate_name *)NonLocals)->x)
{ 
A68_471  THJBTRN_generator;   /* proc value of non-global proc */
A68_286  YHJBTRN;  /* avoid structure result */
A68_286  ZHJBTRN_newt;
A68_473  BIJBTRN_generator;   /* proc value of non-global proc */
A68_472  GIJBTRN;  /* avoid structure result */
A68_472  HIJBTRN_newl;
A68_286  IIJBTRN;  /* OPERATORS - trim index */
A68_286  JIJBTRN;  /* YIELD */
A68_472  KIJBTRN;  /* OPERATORS - trim index */
A68_472  LIJBTRN;  /* YIELD */
A68_283 * MIJBTRN_nt;
A68_286  NIJBTRN;  /* OPERATORS - trim index */
A68_286  OIJBTRN;  /* forall yield */
A68_INT  PIJBTRN;  /* forall loop counter */
A68_283  QIJBTRN;  /* collateral clause result */
A68_186  RIJBTRN;  /* OPERATORS - mode -> union mode */
A68_161  SIJBTRN;  /* OPERATORS - mode -> union mode */
A68_242 ** TIJBTRN_nl;
A68_472  UIJBTRN;  /* OPERATORS - trim index */
A68_472  VIJBTRN;  /* forall yield */
A68_INT  WIJBTRN;  /* forall loop counter */
A68_213  XIJBTRN;  /* collateral clause result */
A68_213 * YIJBTRN;  /* clause result */
A68_213 * ZIJBTRN;  /* YIELD */
A_PROC_ENTRY(allocate_name);
{ 
 /* line 217: */
if ( ((*NL(OHJBTRN_n_names))==(*NL(WGJBTRN_nametable)).upb) )
{ 
A_CLOSURE( THJBTRN_generator, UHJBTRN_generator, VHJBTRN_generator );
(( VHJBTRN_generator * ) ( THJBTRN_generator.nonlocals )) -> WGJBTRN_nametable = NL(WGJBTRN_nametable);
A_CALLPROC(THJBTRN_generator,(A68_FALSE, &YHJBTRN),(A68_FALSE, &YHJBTRN,(THJBTRN_generator).nonlocals));
ZHJBTRN_newt = YHJBTRN;
 /* line 218: */
A_CLOSURE( BIJBTRN_generator, CIJBTRN_generator, DIJBTRN_generator );
(( DIJBTRN_generator * ) ( BIJBTRN_generator.nonlocals )) -> WGJBTRN_nametable = NL(WGJBTRN_nametable);
A_CALLPROC(BIJBTRN_generator,(A68_FALSE, &GIJBTRN),(A68_FALSE, &GIJBTRN,(BIJBTRN_generator).nonlocals));
HIJBTRN_newl = GIJBTRN;
 /* line 219: */
JIJBTRN = A_VTRIM(IIJBTRN,(ZHJBTRN_newt),A_VTSCRIPT(&(IIJBTRN.upb),(ZHJBTRN_newt).upb,1,(*NL(OHJBTRN_n_names)))) ;
A_VASSIGN2((*NL(WGJBTRN_nametable)),JIJBTRN,A68_283 );
 /* line 220: */
LIJBTRN = A_VTRIM(KIJBTRN,(HIJBTRN_newl),A_VTSCRIPT(&(KIJBTRN.upb),(HIJBTRN_newl).upb,1,(*NL(OHJBTRN_n_names)))) ;
A_VASSIGN2((*NL(KHJBTRN_lettable)),LIJBTRN,A68_242 *);
 /* line 221: */
 /* line 222: */
OIJBTRN = A_VTRIM(NIJBTRN,(ZHJBTRN_newt),A_VTSCRIPT(&(NIJBTRN.upb),(ZHJBTRN_newt).upb,((*NL(OHJBTRN_n_names))+1),(ZHJBTRN_newt).upb)) ;
PIJBTRN = OIJBTRN.upb -1;
MIJBTRN_nt = OIJBTRN.data;
for (;PIJBTRN-- >= 0;
(MIJBTRN_nt++
) )
{
QIJBTRN.Name = TTCAOST_nullid;
QIJBTRN.Type = A_UNITE(RIJBTRN,mode1,1,NL(YGJBTRN_illegalt));
QIJBTRN.Attr = A_UNITE(SIJBTRN,mode5,5,(&ZHAATRN_attrnull));
(*MIJBTRN_nt) = QIJBTRN;
}
 /* line 223: */
VIJBTRN = A_VTRIM(UIJBTRN,(HIJBTRN_newl),A_VTSCRIPT(&(UIJBTRN.upb),(HIJBTRN_newl).upb,((*NL(OHJBTRN_n_names))+1),(HIJBTRN_newl).upb)) ;
WIJBTRN = VIJBTRN.upb -1;
TIJBTRN_nl = VIJBTRN.data;
for (;WIJBTRN-- >= 0;
(TIJBTRN_nl++
) )
{
(*TIJBTRN_nl) = (A68_242 *)A68_NIL;
}
 /* line 224: */
(*NL(WGJBTRN_nametable)) = ZHJBTRN_newt;
 /* line 225: */
 /* line 226: */
(*NL(KHJBTRN_lettable)) = HIJBTRN_newl;
} 
 /* line 228: */
XIJBTRN.Sort = KKAATRN_usource;
 /* line 229: */
XIJBTRN.Nameno = (*NL(OHJBTRN_n_names))+=1;
ZIJBTRN = A_HEAP(A68_213 ) ;
(*ZIJBTRN) = XIJBTRN ;
YIJBTRN = ZIJBTRN;
} 
A_PROC_EXIT(allocate_name);
return( YIJBTRN );
} 
#undef NL

A_STATIC A68_213 * EJJBTRN_add_nametype(A68_283  Nt, A68_186  Type, A68_INT  Old_index, void *NonLocals)
#define NL(x) (((FJJBTRN_add_nametype *)NonLocals)->x)
{ 
A68_213 * GJJBTRN_uname;
A68_INT  HJJBTRN_nameno;
A68_283  IJJBTRN;  /* collateral clause result */
A68_283 * JJJBTRN;  /* YIELD */
A68_INT * KJJBTRN;  /* YIELD */
A68_213 * LJJBTRN;  /* clause result */
A_PROC_ENTRY(add_nametype);
 /* line 233: */
 /* line 234: */
{ 
GJJBTRN_uname = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
 /* line 235: */
HJJBTRN_nameno = (*(&(GJJBTRN_uname->Nameno)));
 /* line 236: */
IJJBTRN.Name = Nt.Name;
IJJBTRN.Type = Type;
IJJBTRN.Attr = Nt.Attr;
JJJBTRN = (&A_VINDEX((*NL(WGJBTRN_nametable)),HJJBTRN_nameno)) ;
(*JJJBTRN) = IJJBTRN;
 /* line 237: */
if ( (Old_index>0) )
{ 
KJJBTRN = (&A_VINDEX(NL(DGJBTRN_translations),Old_index)) ;
(*KJJBTRN) = HJJBTRN_nameno;
} 
 /* line 238: */
 /* line 239: */
LJJBTRN = GJJBTRN_uname;
} 
A_PROC_EXIT(add_nametype);
return( LJJBTRN );
} 
#undef NL

A_STATIC A68_VOID  RJJBTRN_add_step(A68_238  Step, void *NonLocals)
#define NL(x) (((SJJBTRN_add_step *)NonLocals)->x)
{ 
A68_237  TJJBTRN;  /* collateral clause result */
A68_237 * UJJBTRN;  /* YIELD */
A_PROC_ENTRY(add_step);
 /* line 250: */
 /* line 251: */
{ 
 /* line 252: */
TJJBTRN.Step = Step;
TJJBTRN.Rest = SAAATRN_nilseries;
UJJBTRN = A_HEAP(A68_237 ) ;
(*UJJBTRN) = TJJBTRN ;
(*NL(NJJBTRN_seriesptr)) = (&(((**NL(NJJBTRN_seriesptr)) = UJJBTRN)->Rest));
 /* line 253: */
 /* line 254: */
(*NL(OJJBTRN_have_series)) = A68_TRUE;
} 
A_PROC_EXIT(add_step);
return;
} 
#undef NL

A_STATIC A68_VOID  YJJBTRN_make_let(A68_INT  Nameno, A68_208  Unit, void *NonLocals)
#define NL(x) (((ZJJBTRN_make_let *)NonLocals)->x)
{ 
A68_242  AKJBTRN;  /* collateral clause result */
A68_249  BKJBTRN;  /* collateral clause result */
A68_249 * CKJBTRN;  /* YIELD */
A68_242 * DKJBTRN;  /* YIELD */
A68_242 ** EKJBTRN;  /* YIELD */
A68_238  FKJBTRN;  /* OPERATORS - mode -> union mode */
A68_242 * GKJBTRN;  /* YIELD */
A_PROC_ENTRY(make_let);
 /* line 259: */
 /* line 260: */
BKJBTRN.Nameno = Nameno;
BKJBTRN.Rest = NAAATRN_nilnames;
CKJBTRN = A_HEAP(A68_249 ) ;
(*CKJBTRN) = BKJBTRN ;
AKJBTRN.Letnames = CKJBTRN;
AKJBTRN.Unit = Unit;
DKJBTRN = A_HEAP(A68_242 ) ;
(*DKJBTRN) = AKJBTRN ;
EKJBTRN = (&A_VINDEX((*NL(KHJBTRN_lettable)),Nameno)) ;
GKJBTRN = (*EKJBTRN) = DKJBTRN ;
A_CALLPROC(NL(QJJBTRN_add_step),(A_UNITE(FKJBTRN,mode8,8,GKJBTRN)),(A_UNITE(FKJBTRN,mode8,8,GKJBTRN),(NL(QJJBTRN_add_step)).nonlocals));
A_PROC_EXIT(make_let);
return;
} 
#undef NL

A_STATIC A68_213 * LKJBTRN_make_uname(A68_VC  Name, A68_186  Type, A68_208  Unit, void *NonLocals)
#define NL(x) (((MKJBTRN_make_uname *)NonLocals)->x)
{ 
A68_283  NKJBTRN;  /* collateral clause result */
A68_186  OKJBTRN;  /* OPERATORS - mode -> union mode */
A68_161  PKJBTRN;  /* OPERATORS - mode -> union mode */
A68_283  QKJBTRN_nt;
A68_213 * RKJBTRN_uname;
A68_213 * SKJBTRN;  /* clause result */
A_PROC_ENTRY(make_uname);
 /* line 263: */
 /* line 264: */
{ 
NKJBTRN.Name = Name;
NKJBTRN.Type = A_UNITE(OKJBTRN,mode9,9,(&DIAATRN_tnull));
NKJBTRN.Attr = A_UNITE(PKJBTRN,mode5,5,(&ZHAATRN_attrnull));
QKJBTRN_nt = NKJBTRN;
 /* line 265: */
RKJBTRN_uname = A_CALLPROC(NL(DJJBTRN_add_nametype),(QKJBTRN_nt, Type, 0),(QKJBTRN_nt, Type, 0,(NL(DJJBTRN_add_nametype)).nonlocals));
 /* line 266: */
A_CALLPROC(NL(XJJBTRN_make_let),((*(&(RKJBTRN_uname->Nameno))), Unit),((*(&(RKJBTRN_uname->Nameno))), Unit,(NL(XJJBTRN_make_let)).nonlocals));
 /* line 267: */
 /* line 268: */
SKJBTRN = RKJBTRN_uname;
} 
A_PROC_EXIT(make_uname);
return( SKJBTRN );
} 
#undef NL

A_STATIC A68_VOID  XKJBTRN_fill_uname(A68_283  Nametype, A68_208  Unit, A68_213 * Uname, void *NonLocals)
#define NL(x) (((YKJBTRN_fill_uname *)NonLocals)->x)
{ 
A68_INT  ZKJBTRN_nameno;
A68_283 * ALJBTRN;  /* YIELD */
A_PROC_ENTRY(fill_uname);
 /* line 273: */
 /* line 274: */
{ 
ZKJBTRN_nameno = (*(&(Uname->Nameno)));
 /* line 275: */
ALJBTRN = (&A_VINDEX((*NL(WGJBTRN_nametable)),ZKJBTRN_nameno)) ;
(*ALJBTRN) = Nametype;
 /* line 276: */
 /* line 277: */
A_CALLPROC(NL(XJJBTRN_make_let),(ZKJBTRN_nameno, Unit),(ZKJBTRN_nameno, Unit,(NL(XJJBTRN_make_let)).nonlocals));
} 
A_PROC_EXIT(fill_uname);
return;
} 
#undef NL

A_STATIC A68_VOID  FLJBTRN_call_name(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GLJBTRN_call_name *)NonLocals)->x)
{ 
A68_VC  ILJBTRN;  /* clause result */
A68_VC  KLJBTRN;  /* avoid structure result */
A_PROC_ENTRY(call_name);
A_CALLPROC(NL(VAJBTRN_make_name),(NL(NAJBTRN_call_names), JLJBTRN, (*NL(BLJBTRN_n_calls))+=1, &KLJBTRN),(NL(NAJBTRN_call_names), JLJBTRN, (*NL(BLJBTRN_n_calls))+=1, &KLJBTRN,(NL(VAJBTRN_make_name)).nonlocals));
ILJBTRN = KLJBTRN;
A_PROC_EXIT(call_name);
*ReturnedValue = (ILJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MLJBTRN_multilet_name(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NLJBTRN_multilet_name *)NonLocals)->x)
{ 
A68_VC  PLJBTRN;  /* clause result */
A68_VC  RLJBTRN;  /* avoid structure result */
A_PROC_ENTRY(multilet_name);
A_CALLPROC(NL(VAJBTRN_make_name),(NL(OAJBTRN_multilet_names), QLJBTRN, (*NL(CLJBTRN_n_multilets))+=1, &RLJBTRN),(NL(OAJBTRN_multilet_names), QLJBTRN, (*NL(CLJBTRN_n_multilets))+=1, &RLJBTRN,(NL(VAJBTRN_make_name)).nonlocals));
PLJBTRN = RLJBTRN;
A_PROC_EXIT(multilet_name);
*ReturnedValue = (PLJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TLJBTRN_prims_name(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ULJBTRN_prims_name *)NonLocals)->x)
{ 
A68_VC  WLJBTRN;  /* clause result */
A68_VC  YLJBTRN;  /* avoid structure result */
A_PROC_ENTRY(prims_name);
A_CALLPROC(NL(VAJBTRN_make_name),(NL(PAJBTRN_prims_names), XLJBTRN, (*NL(DLJBTRN_n_prims))+=1, &YLJBTRN),(NL(PAJBTRN_prims_names), XLJBTRN, (*NL(DLJBTRN_n_prims))+=1, &YLJBTRN,(NL(VAJBTRN_make_name)).nonlocals));
WLJBTRN = YLJBTRN;
A_PROC_EXIT(prims_name);
*ReturnedValue = (WLJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DMJBTRN_look_for_instance(A68_208  U, A68_362 * Tprocs, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((EMJBTRN_look_for_instance *)NonLocals)->x)
{ 
A68_208  FMJBTRN;  /* united object - for case conformity */
A68_338  GMJBTRN;  /* collateral clause result */
A68_338  HMJBTRN;  /* clause result */
A68_338  IMJBTRN;  /* collateral clause result */
A68_381  JMJBTRN;  /* CALL */
A68_338  KMJBTRN;  /* avoid structure result */
A_PROC_ENTRY(look_for_instance);
 /* line 298: */
 /* line 299: */
FMJBTRN = U ;
switch ( FMJBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE248,MODE208)  */
{ 
(*NL(ZLJBTRN_has_instance)) = A68_TRUE;
GMJBTRN.U = U;
 /* line 300: */
GMJBTRN.C = A68_FALSE;
HMJBTRN = GMJBTRN;
} 
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
{ 
(*NL(ZLJBTRN_has_instance)) = A68_TRUE;
IMJBTRN.U = U;
 /* line 301: */
IMJBTRN.C = A68_FALSE;
HMJBTRN = IMJBTRN;
} 
break;
default: 
 /* line 302: */
JMJBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(JMJBTRN,(U, Tprocs, &KMJBTRN),(U, Tprocs, &KMJBTRN,(JMJBTRN).nonlocals));
HMJBTRN = KMJBTRN;
break;
} 
A_PROC_EXIT(look_for_instance);
*ReturnedValue = (HMJBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  YMJBTRN_unit_has_named(A68_208  U, void *NonLocals)
#define NL(x) (((ZMJBTRN_unit_has_named *)NonLocals)->x)
{ 
A68_338  ANJBTRN;  /* avoid structure result */
A68_BOOL  BNJBTRN;  /* clause result */
A_PROC_ENTRY(unit_has_named);
 /* line 311: */
 /* line 313: */
{ 
(*NL(ZLJBTRN_has_instance)) = A68_FALSE;
 /* line 314: */
A_CALLPROC(NL(CMJBTRN_look_for_instance),(U, NL(VMJBTRN_has_named), &ANJBTRN),(U, NL(VMJBTRN_has_named), &ANJBTRN,(NL(CMJBTRN_look_for_instance)).nonlocals));
ANJBTRN;
 /* line 315: */
 /* line 316: */
BNJBTRN = (*NL(ZLJBTRN_has_instance));
} 
A_PROC_EXIT(unit_has_named);
return( BNJBTRN );
} 
#undef NL
 /* line 320: */

A_STATIC A68_VOID  GNJBTRN_uminst(A68_225 * Um, A68_BOOL  Named, A68_362 * Newtprocs, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((HNJBTRN_uminst *)NonLocals)->x)
{ 
A68_338  INJBTRN;  /* clause result */
A68_381  JNJBTRN;  /* CALL */
A68_208  KNJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  LNJBTRN;  /* avoid structure result */
A68_213 * MNJBTRN;  /* clause result */
A68_213 * NNJBTRN_uname;
A68_VC  ONJBTRN;  /* avoid structure result */
A68_VC  PNJBTRN_cname;
A68_381  QNJBTRN;  /* CALL */
A68_208  RNJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  SNJBTRN;  /* avoid structure result */
A68_338  TNJBTRN_call;
A68_186  UNJBTRN;  /* avoid structure result */
A68_186  VNJBTRN_type;
A68_283  WNJBTRN;  /* collateral clause result */
A68_161  XNJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  YNJBTRN;  /* collateral clause result */
A68_208  ZNJBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uminst);
 /* line 321: */
 /* line 322: */
if ( NL(JZIBTRN_not_nameinst) )
{ 
 /* line 323: */
 /* line 327: */
JNJBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(JNJBTRN,(A_UNITE(KNJBTRN,mode23,23,Um), Newtprocs, &LNJBTRN),(A_UNITE(KNJBTRN,mode23,23,Um), Newtprocs, &LNJBTRN,(JNJBTRN).nonlocals));
INJBTRN = LNJBTRN;
} 
else
{ 
if ( Named )
{ 
MNJBTRN = NL(UBJBTRN_null_uname);
} 
else
{ 
MNJBTRN = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
} 
NNJBTRN_uname = MNJBTRN;
 /* line 328: */
A_CALLPROC(NL(ELJBTRN_call_name),( &ONJBTRN),( &ONJBTRN,(NL(ELJBTRN_call_name)).nonlocals));
PNJBTRN_cname = ONJBTRN;
 /* line 329: */
QNJBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(QNJBTRN,(A_UNITE(RNJBTRN,mode23,23,Um), Newtprocs, &SNJBTRN),(A_UNITE(RNJBTRN,mode23,23,Um), Newtprocs, &SNJBTRN,(QNJBTRN).nonlocals));
TNJBTRN_call = SNJBTRN;
 /* line 330: */
 /* line 331: */
 /* line 332: */
if ( Named )
{ 
 /* line 333: */
INJBTRN = TNJBTRN_call;
} 
else
{ 
VUNATRN_unit_type( TNJBTRN_call.U, NL(Fdec), NL(BCJBTRN_env), &UNJBTRN );
VNJBTRN_type = UNJBTRN;
 /* line 334: */
WNJBTRN.Name = PNJBTRN_cname;
WNJBTRN.Type = VNJBTRN_type;
WNJBTRN.Attr = A_UNITE(XNJBTRN,mode5,5,(&ZHAATRN_attrnull));
A_CALLPROC(NL(WKJBTRN_fill_uname),(WNJBTRN, TNJBTRN_call.U, NNJBTRN_uname),(WNJBTRN, TNJBTRN_call.U, NNJBTRN_uname,(NL(WKJBTRN_fill_uname)).nonlocals));
 /* line 335: */
YNJBTRN.U = A_UNITE(ZNJBTRN,mode11,11,NNJBTRN_uname);
 /* line 336: */
 /* line 337: */
YNJBTRN.C = A68_TRUE;
INJBTRN = YNJBTRN;
} 
} 
A_PROC_EXIT(uminst);
*ReturnedValue = (INJBTRN);
return;
} 
#undef NL
 /* line 341: */

A_STATIC A68_VOID  EOJBTRN_udinst(A68_226 * Ud, A68_BOOL  Named_outside, A68_362 * Newtprocs, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((FOJBTRN_udinst *)NonLocals)->x)
{ 
A68_338  GOJBTRN;  /* clause result */
A68_381  HOJBTRN;  /* CALL */
A68_208  IOJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  JOJBTRN;  /* avoid structure result */
A68_BOOL  KOJBTRN;  /* optbool result */
A68_BOOL  LOJBTRN_named;
A68_381  MOJBTRN;  /* CALL */
A68_338  NOJBTRN;  /* avoid structure result */
A68_338  OOJBTRN_luc;
A68_213 * POJBTRN;  /* clause result */
A68_213 * QOJBTRN_uname;
A68_VC  ROJBTRN;  /* avoid structure result */
A68_VC  SOJBTRN_cname;
A68_381  TOJBTRN;  /* CALL */
A68_338  UOJBTRN;  /* avoid structure result */
A68_338  VOJBTRN_ruc;
A68_223  WOJBTRN;  /* collateral clause result */
A68_223  XOJBTRN;  /* collateral clause result */
A68_223 * YOJBTRN;  /* YIELD */
A68_223 * ZOJBTRN;  /* YIELD */
A68_208  APJBTRN;  /* OPERATORS - mode -> union mode */
A68_208  BPJBTRN_param;
A68_225 * CPJBTRN_call;
A68_225  DPJBTRN;  /* collateral clause result */
A68_338  EPJBTRN;  /* collateral clause result */
A68_208  FPJBTRN;  /* OPERATORS - mode -> union mode */
A68_208  GPJBTRN;  /* OPERATORS - mode -> union mode */
A68_186  HPJBTRN;  /* avoid structure result */
A68_186  IPJBTRN_type;
A68_283  JPJBTRN;  /* collateral clause result */
A68_161  KPJBTRN;  /* OPERATORS - mode -> union mode */
A68_208  LPJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  MPJBTRN;  /* collateral clause result */
A68_208  NPJBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(udinst);
 /* line 342: */
 /* line 343: */
if ( NL(JZIBTRN_not_nameinst) )
{ 
 /* line 344: */
 /* line 345: */
HOJBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(HOJBTRN,(A_UNITE(IOJBTRN,mode24,24,Ud), Newtprocs, &JOJBTRN),(A_UNITE(IOJBTRN,mode24,24,Ud), Newtprocs, &JOJBTRN,(HOJBTRN).nonlocals));
GOJBTRN = JOJBTRN;
} 
else
{ 
KOJBTRN = Named_outside;
if ( KOJBTRN )
{KOJBTRN = !A_CALLPROC(NL(XMJBTRN_unit_has_named),((*(&(Ud->Left)))),((*(&(Ud->Left))),(NL(XMJBTRN_unit_has_named)).nonlocals));
}
LOJBTRN_named = KOJBTRN;
 /* line 347: */
MOJBTRN = (*(&(Newtprocs->Unit))) ;
A_CALLPROC(MOJBTRN,((*(&(Ud->Left))), Newtprocs, &NOJBTRN),((*(&(Ud->Left))), Newtprocs, &NOJBTRN,(MOJBTRN).nonlocals));
OOJBTRN_luc = NOJBTRN;
 /* line 350: */
 /* line 351: */
if ( LOJBTRN_named )
{ 
POJBTRN = NL(UBJBTRN_null_uname);
} 
else
{ 
POJBTRN = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
} 
QOJBTRN_uname = POJBTRN;
 /* line 352: */
A_CALLPROC(NL(ELJBTRN_call_name),( &ROJBTRN),( &ROJBTRN,(NL(ELJBTRN_call_name)).nonlocals));
SOJBTRN_cname = ROJBTRN;
 /* line 354: */
TOJBTRN = (*(&(Newtprocs->Unit))) ;
A_CALLPROC(TOJBTRN,((*(&(Ud->Right))), Newtprocs, &UOJBTRN),((*(&(Ud->Right))), Newtprocs, &UOJBTRN,(TOJBTRN).nonlocals));
VOJBTRN_ruc = UOJBTRN;
 /* line 355: */
WOJBTRN.Elem = OOJBTRN_luc.U;
XOJBTRN.Elem = VOJBTRN_ruc.U;
XOJBTRN.Rest = IAAATRN_nilustr;
YOJBTRN = A_HEAP(A68_223 ) ;
(*YOJBTRN) = XOJBTRN ;
WOJBTRN.Rest = YOJBTRN;
ZOJBTRN = A_HEAP(A68_223 ) ;
(*ZOJBTRN) = WOJBTRN ;
BPJBTRN_param = A_UNITE(APJBTRN,mode21,21,ZOJBTRN);
 /* line 356: */
CPJBTRN_call = (A_HEAP(A68_225 ));
DPJBTRN.Inst = (*(&(Ud->Inst)));
DPJBTRN.Right = BPJBTRN_param;
(*CPJBTRN_call) = DPJBTRN;
 /* line 357: */
 /* line 358: */
if ( LOJBTRN_named )
{ 
EPJBTRN.U = A_UNITE(FPJBTRN,mode23,23,CPJBTRN_call);
 /* line 359: */
EPJBTRN.C = A68_TRUE;
GOJBTRN = EPJBTRN;
} 
else
{ 
VUNATRN_unit_type( A_UNITE(GPJBTRN,mode23,23,CPJBTRN_call), NL(Fdec), NL(BCJBTRN_env), &HPJBTRN );
IPJBTRN_type = HPJBTRN;
 /* line 360: */
JPJBTRN.Name = SOJBTRN_cname;
JPJBTRN.Type = IPJBTRN_type;
JPJBTRN.Attr = A_UNITE(KPJBTRN,mode5,5,(&ZHAATRN_attrnull));
A_CALLPROC(NL(WKJBTRN_fill_uname),(JPJBTRN, A_UNITE(LPJBTRN,mode23,23,CPJBTRN_call), QOJBTRN_uname),(JPJBTRN, A_UNITE(LPJBTRN,mode23,23,CPJBTRN_call), QOJBTRN_uname,(NL(WKJBTRN_fill_uname)).nonlocals));
 /* line 361: */
MPJBTRN.U = A_UNITE(NPJBTRN,mode11,11,QOJBTRN_uname);
 /* line 362: */
 /* line 363: */
MPJBTRN.C = A68_TRUE;
GOJBTRN = MPJBTRN;
} 
} 
A_PROC_EXIT(udinst);
*ReturnedValue = (GOJBTRN);
return;
} 
#undef NL
 /* line 367: */

A_STATIC A68_VOID  SPJBTRN_uprim(A68_208  Unit, A68_BOOL  Named, A68_362 * Newtprocs, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((TPJBTRN_uprim *)NonLocals)->x)
{ 
A68_338  UPJBTRN;  /* clause result */
A68_381  VPJBTRN;  /* CALL */
A68_338  WPJBTRN;  /* avoid structure result */
A68_213 * XPJBTRN;  /* clause result */
A68_213 * YPJBTRN_uname;
A68_VC  ZPJBTRN;  /* avoid structure result */
A68_VC  AQJBTRN_pname;
A68_381  BQJBTRN;  /* CALL */
A68_338  CQJBTRN;  /* avoid structure result */
A68_338  DQJBTRN_uc;
A68_186  EQJBTRN;  /* avoid structure result */
A68_186  FQJBTRN_type;
A68_283  GQJBTRN;  /* collateral clause result */
A68_161  HQJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  IQJBTRN;  /* collateral clause result */
A68_208  JQJBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uprim);
 /* line 368: */
 /* line 369: */
if ( NL(LZIBTRN_not_nameprim) )
{ 
 /* line 370: */
 /* line 373: */
VPJBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(VPJBTRN,(Unit, Newtprocs, &WPJBTRN),(Unit, Newtprocs, &WPJBTRN,(VPJBTRN).nonlocals));
UPJBTRN = WPJBTRN;
} 
else
{ 
if ( Named )
{ 
XPJBTRN = NL(UBJBTRN_null_uname);
} 
else
{ 
XPJBTRN = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
} 
YPJBTRN_uname = XPJBTRN;
 /* line 374: */
A_CALLPROC(NL(SLJBTRN_prims_name),( &ZPJBTRN),( &ZPJBTRN,(NL(SLJBTRN_prims_name)).nonlocals));
AQJBTRN_pname = ZPJBTRN;
 /* line 376: */
BQJBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(BQJBTRN,(Unit, Newtprocs, &CQJBTRN),(Unit, Newtprocs, &CQJBTRN,(BQJBTRN).nonlocals));
DQJBTRN_uc = CQJBTRN;
 /* line 377: */
 /* line 378: */
 /* line 379: */
if ( Named )
{ 
UPJBTRN = DQJBTRN_uc;
} 
else
{ 
VUNATRN_unit_type( Unit, NL(Fdec), NL(BCJBTRN_env), &EQJBTRN );
FQJBTRN_type = EQJBTRN;
 /* line 381: */
GQJBTRN.Name = AQJBTRN_pname;
GQJBTRN.Type = FQJBTRN_type;
GQJBTRN.Attr = A_UNITE(HQJBTRN,mode5,5,(&ZHAATRN_attrnull));
A_CALLPROC(NL(WKJBTRN_fill_uname),(GQJBTRN, DQJBTRN_uc.U, YPJBTRN_uname),(GQJBTRN, DQJBTRN_uc.U, YPJBTRN_uname,(NL(WKJBTRN_fill_uname)).nonlocals));
 /* line 382: */
IQJBTRN.U = A_UNITE(JQJBTRN,mode11,11,YPJBTRN_uname);
 /* line 383: */
 /* line 384: */
IQJBTRN.C = A68_TRUE;
UPJBTRN = IQJBTRN;
} 
} 
A_PROC_EXIT(uprim);
*ReturnedValue = (UPJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NQJBTRN_unit(A68_208  U, A68_362 * Tprocs, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((OQJBTRN_unit *)NonLocals)->x)
{ 
A68_208  PQJBTRN;  /* united object - for case conformity */
A68_213 * QQJBTRN_un;
A68_INT  RQJBTRN;  /* YIELD */
A68_338  SQJBTRN;  /* collateral clause result */
A68_338  TQJBTRN;  /* clause result */
A68_338  UQJBTRN;  /* collateral clause result */
A68_213  VQJBTRN;  /* collateral clause result */
A68_INT  WQJBTRN;  /* YIELD */
A68_213 * XQJBTRN;  /* YIELD */
A68_208  YQJBTRN;  /* OPERATORS - mode -> union mode */
A68_338  ZQJBTRN;  /* avoid structure result */
A68_338  ARJBTRN;  /* avoid structure result */
A68_338  BRJBTRN;  /* avoid structure result */
A68_338  CRJBTRN;  /* avoid structure result */
A68_225 * DRJBTRN_um;
A68_338  ERJBTRN;  /* avoid structure result */
A68_226 * FRJBTRN_ud;
A68_338  GRJBTRN;  /* avoid structure result */
A68_338  HRJBTRN;  /* avoid structure result */
A68_231 * IRJBTRN_us;
A68_237 * JRJBTRN_serptr;
A68_397  KRJBTRN;  /* CALL */
A68_354  LRJBTRN;  /* avoid structure result */
A68_338  MRJBTRN;  /* collateral clause result */
A68_381  NRJBTRN;  /* CALL */
A68_338  ORJBTRN;  /* avoid structure result */
A68_234 * PRJBTRN_ub;
A68_381  QRJBTRN;  /* CALL */
A68_338  RRJBTRN;  /* avoid structure result */
A68_338  SRJBTRN_uc;
A68_338  TRJBTRN;  /* collateral clause result */
A68_381  URJBTRN;  /* CALL */
A68_338  VRJBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit);
 /* line 388: */
 /* line 391: */
PQJBTRN = U ;
switch ( PQJBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
QQJBTRN_un = (PQJBTRN.data.mode11);
 /* line 392: */
 /* line 393: */
RQJBTRN = (*(&(QQJBTRN_un->Nameno))) ;
if ( ((*(&A_VINDEX(NL(DGJBTRN_translations),RQJBTRN)))==(*(&(QQJBTRN_un->Nameno)))) )
{ 
SQJBTRN.U = U;
 /* line 394: */
SQJBTRN.C = A68_FALSE;
TQJBTRN = SQJBTRN;
} 
else
{ 
 /* line 395: */
VQJBTRN.Sort = KKAATRN_usource;
WQJBTRN = (*(&(QQJBTRN_un->Nameno))) ;
VQJBTRN.Nameno = (*(&A_VINDEX(NL(DGJBTRN_translations),WQJBTRN)));
XQJBTRN = A_HEAP(A68_213 ) ;
(*XQJBTRN) = VQJBTRN ;
UQJBTRN.U = A_UNITE(YQJBTRN,mode11,11,XQJBTRN);
 /* line 396: */
 /* line 400: */
UQJBTRN.C = A68_TRUE;
TQJBTRN = UQJBTRN;
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
 /* line 401: */
A_CALLPROC(NL(RPJBTRN_uprim),(U, A68_FALSE, Tprocs, &ZQJBTRN),(U, A68_FALSE, Tprocs, &ZQJBTRN,(NL(RPJBTRN_uprim)).nonlocals));
TQJBTRN = ZQJBTRN;
break;
case 14: /* REF STRUCT(MODE208,INT,INT)  */
 /* line 405: */
A_CALLPROC(NL(RPJBTRN_uprim),(U, A68_FALSE, Tprocs, &ARJBTRN),(U, A68_FALSE, Tprocs, &ARJBTRN,(NL(RPJBTRN_uprim)).nonlocals));
TQJBTRN = ARJBTRN;
break;
case 18: /* REF STRUCT(MODE208,MODE208)  */
 /* line 406: */
A_CALLPROC(NL(RPJBTRN_uprim),(U, A68_FALSE, Tprocs, &BRJBTRN),(U, A68_FALSE, Tprocs, &BRJBTRN,(NL(RPJBTRN_uprim)).nonlocals));
TQJBTRN = BRJBTRN;
break;
case 19: /* REF STRUCT(MODE208,MODE208,MODE208)  */
 /* line 410: */
A_CALLPROC(NL(RPJBTRN_uprim),(U, A68_FALSE, Tprocs, &CRJBTRN),(U, A68_FALSE, Tprocs, &CRJBTRN,(NL(RPJBTRN_uprim)).nonlocals));
TQJBTRN = CRJBTRN;
break;
case 23: /* REF STRUCT(MODE248,MODE208)  */
DRJBTRN_um = (PQJBTRN.data.mode23);
 /* line 411: */
 /* line 413: */
A_CALLPROC(NL(FNJBTRN_uminst),(DRJBTRN_um, A68_FALSE, Tprocs, &ERJBTRN),(DRJBTRN_um, A68_FALSE, Tprocs, &ERJBTRN,(NL(FNJBTRN_uminst)).nonlocals));
TQJBTRN = ERJBTRN;
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
FRJBTRN_ud = (PQJBTRN.data.mode24);
 /* line 414: */
 /* line 416: */
A_CALLPROC(NL(DOJBTRN_udinst),(FRJBTRN_ud, A68_FALSE, Tprocs, &GRJBTRN),(FRJBTRN_ud, A68_FALSE, Tprocs, &GRJBTRN,(NL(DOJBTRN_udinst)).nonlocals));
TQJBTRN = GRJBTRN;
break;
case 25: /* REF STRUCT(MODE208,REF MODE268)  */
 /* line 420: */
A_CALLPROC(NL(RPJBTRN_uprim),(U, A68_FALSE, Tprocs, &HRJBTRN),(U, A68_FALSE, Tprocs, &HRJBTRN,(NL(RPJBTRN_uprim)).nonlocals));
TQJBTRN = HRJBTRN;
break;
case 29: /* REF STRUCT(REF MODE237,MODE208)  */
IRJBTRN_us = (PQJBTRN.data.mode29);
 /* line 421: */
{ 
JRJBTRN_serptr = (*(&(IRJBTRN_us->Body)));
 /* line 422: */
for ( ;; )
{ 
 /* line 423: */
 /* line 425: */
if ( !((JRJBTRN_serptr!=SAAATRN_nilseries)) ) break;
KRJBTRN = (*(&(Tprocs->Step))) ;
A_CALLPROC(KRJBTRN,((*(&(JRJBTRN_serptr->Step))), Tprocs, &LRJBTRN),((*(&(JRJBTRN_serptr->Step))), Tprocs, &LRJBTRN,(KRJBTRN).nonlocals));
LRJBTRN;
 /* line 426: */
 /* line 427: */
JRJBTRN_serptr = (*(&(JRJBTRN_serptr->Rest)));
}
 /* line 428: */
NRJBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NRJBTRN,((*(&(IRJBTRN_us->Output))), Tprocs, &ORJBTRN),((*(&(IRJBTRN_us->Output))), Tprocs, &ORJBTRN,(NRJBTRN).nonlocals));
MRJBTRN.U = ORJBTRN.U;
 /* line 429: */
 /* line 433: */
MRJBTRN.C = A68_TRUE;
TQJBTRN = MRJBTRN;
} 
break;
case 32: /* REF STRUCT(MODE208)  */
PRJBTRN_ub = (PQJBTRN.data.mode32);
 /* line 434: */
{ 
QRJBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QRJBTRN,((*(&(PRJBTRN_ub->Unit))), Tprocs, &RRJBTRN),((*(&(PRJBTRN_ub->Unit))), Tprocs, &RRJBTRN,(QRJBTRN).nonlocals));
SRJBTRN_uc = RRJBTRN;
 /* line 435: */
TRJBTRN.U = SRJBTRN_uc.U;
 /* line 436: */
 /* line 440: */
 /* line 443: */
TRJBTRN.C = A68_TRUE;
TQJBTRN = TRJBTRN;
} 
break;
default: 
 /* line 444: */
URJBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(URJBTRN,(U, Tprocs, &VRJBTRN),(U, Tprocs, &VRJBTRN,(URJBTRN).nonlocals));
TQJBTRN = VRJBTRN;
break;
} 
A_PROC_EXIT(unit);
*ReturnedValue = (TQJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YRJBTRN_simplify_units(A68_208  U, A68_338  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZRJBTRN_simplify_units *)NonLocals)->x)
{ 
A68_470  BSJBTRN_generator;   /* proc value of non-global proc */
A68_54  HSJBTRN;  /* avoid structure result */
A68_54  GSJBTRN_let_simplified;
A68_BOOL * ISJBTRN_b;
A68_INT  JSJBTRN;  /* forall loop counter */
A68_381  MSJBTRN_simplify_unit;   /* proc value of non-global proc */
A68_495  PZJBTRN;  /* collateral clause result */
A68_407  QZJBTRN;  /* OPERATORS - mode -> union mode */
A68_381  RZJBTRN;  /* YIELD */
A68_407  SZJBTRN;  /* OPERATORS - mode -> union mode */
A68_372  TZJBTRN;  /* procedure value */
A68_407  UZJBTRN;  /* OPERATORS - mode -> union mode */
A68_366  VZJBTRN;  /* procedure value */
A68_406  WZJBTRN;  /* OPERATORS - istruct -> vector */
A68_362 * XZJBTRN_newtprocs;
A68_INT  YZJBTRN_i;
A68_INT  ZZJBTRN;  /* to part of loop */
A68_462  AAKBTRN;  /* collateral clause result */
A68_52  DAKBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  EAKBTRN;  /* YIELD */
A68_52  FAKBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  GAKBTRN;  /* YIELD */
A68_85  HAKBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  IAKBTRN;  /* avoid structure result */
A68_VC * JAKBTRN;  /* YIELD */
A68_338  KAKBTRN;  /* collateral clause result */
A68_338  LAKBTRN;  /* clause result */
A68_242 ** MAKBTRN_let;
A68_472  NAKBTRN;  /* OPERATORS - trim index */
A68_472  OAKBTRN;  /* forall yield */
A68_INT  PAKBTRN;  /* forall loop counter */
A68_338  QAKBTRN;  /* avoid structure result */
A68_338  RAKBTRN;  /* avoid structure result */
A_PROC_ENTRY(simplify_units);
 /* line 450: */
 /* line 451: */
{ 
A_CLOSURE( BSJBTRN_generator, CSJBTRN_generator, DSJBTRN_generator );
(( DSJBTRN_generator * ) ( BSJBTRN_generator.nonlocals )) -> OHJBTRN_n_names = NL(OHJBTRN_n_names);
A_CALLPROC(BSJBTRN_generator,(A68_TRUE, &HSJBTRN),(A68_TRUE, &HSJBTRN,(BSJBTRN_generator).nonlocals));
GSJBTRN_let_simplified = HSJBTRN;
 /* line 452: */
JSJBTRN = GSJBTRN_let_simplified.upb -1;
ISJBTRN_b = GSJBTRN_let_simplified.data;
for (;JSJBTRN-- >= 0;
(ISJBTRN_b++
) )
{
(*ISJBTRN_b) = A68_FALSE;
}
 /* line 454: */
A_CLOSURE( MSJBTRN_simplify_unit, NSJBTRN_simplify_unit, OSJBTRN_simplify_unit );
(( OSJBTRN_simplify_unit * ) ( MSJBTRN_simplify_unit.nonlocals )) -> GSJBTRN_let_simplified = GSJBTRN_let_simplified;
(( OSJBTRN_simplify_unit * ) ( MSJBTRN_simplify_unit.nonlocals )) -> MSJBTRN_simplify_unit = MSJBTRN_simplify_unit;
(( OSJBTRN_simplify_unit * ) ( MSJBTRN_simplify_unit.nonlocals )) -> KHJBTRN_lettable = NL(KHJBTRN_lettable);
 /* line 633: */
 /* line 634: */
RZJBTRN = MSJBTRN_simplify_unit ;
PZJBTRN.data[0] = A_UNITE(QZJBTRN,mode19,19,RZJBTRN);
TZJBTRN.fn.fn_global = NWLATRN_null_type;
TZJBTRN.nonlocals = A68_NIL;
PZJBTRN.data[1] = A_UNITE(SZJBTRN,mode10,10,TZJBTRN);
VZJBTRN.fn.fn_global = IWLATRN_null_formula;
VZJBTRN.nonlocals = A68_NIL;
PZJBTRN.data[2] = A_UNITE(UZJBTRN,mode4,4,VZJBTRN);
XZJBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(WZJBTRN,PZJBTRN,3,A68_407 ));
 /* line 636: */
 /* line 637: */
if ( NL(DZIBTRN_generated_names) )
{ 
 /* line 638: */
ZZJBTRN = (*NL(OHJBTRN_n_names));
for ( YZJBTRN_i = 3;
YZJBTRN_i <= ZZJBTRN;
YZJBTRN_i += 1 )
{ 
 /* line 639: */
EAKBTRN = CAKBTRN ;
AAKBTRN.data[0] = A_UNITE(DAKBTRN,mode7,7,EAKBTRN);
AAKBTRN.data[1] = A_UNITE(FAKBTRN,mode1,1,YZJBTRN_i);
 /* line 640: */
GAKBTRN = (*(&((*(&((*(&A_VINDEX((*NL(KHJBTRN_lettable)),YZJBTRN_i)))->Letnames)))->Nameno))) ;
UJBAOSL_oneline( A_HISVEC(HAKBTRN,AAKBTRN,2,A68_52 ), &IAKBTRN );
JAKBTRN = (&((&A_VINDEX(NL(VFJBTRN_nametypes),GAKBTRN))->Name)) ;
(*JAKBTRN) = IAKBTRN;
}
 /* line 641: */
} 
 /* line 643: */
 /* line 644: */
if ( NL(FZIBTRN_not_simplified) )
{ 
KAKBTRN.U = U;
 /* line 645: */
KAKBTRN.C = A68_FALSE;
LAKBTRN = KAKBTRN;
} 
else
{ 
 /* line 646: */
OAKBTRN = A_VTRIM(NAKBTRN,((*NL(KHJBTRN_lettable))),A_VTSCRIPT(&(NAKBTRN.upb),((*NL(KHJBTRN_lettable))).upb,3,(*NL(OHJBTRN_n_names)))) ;
PAKBTRN = OAKBTRN.upb -1;
MAKBTRN_let = OAKBTRN.data;
for (;PAKBTRN-- >= 0;
(MAKBTRN_let++
) )
{
A_CALLPROC(MSJBTRN_simplify_unit,((*(&((*MAKBTRN_let)->Unit))), XZJBTRN_newtprocs, &QAKBTRN),((*(&((*MAKBTRN_let)->Unit))), XZJBTRN_newtprocs, &QAKBTRN,(MSJBTRN_simplify_unit).nonlocals));
QAKBTRN;
}
 /* line 647: */
 /* line 648: */
 /* line 649: */
A_CALLPROC(MSJBTRN_simplify_unit,(U, XZJBTRN_newtprocs, &RAKBTRN),(U, XZJBTRN_newtprocs, &RAKBTRN,(MSJBTRN_simplify_unit).nonlocals));
LAKBTRN = RAKBTRN;
} 
} 
A_PROC_EXIT(simplify_units);
*ReturnedValue = (LAKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VAKBTRN_declaration(A68_269  D, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals)
#define NL(x) (((WAKBTRN_declaration *)NonLocals)->x)
{ 
A68_269  XAKBTRN;  /* united object - for case conformity */
A68_239  YAKBTRN_fn;
A68_292  ZAKBTRN;  /* OPERATORS - simple index */
A68_INT  ABKBTRN;  /* YIELD */
A68_284 * BBKBTRN_dec;
A68_BOOL  CBKBTRN;  /* optbool result */
A68_359  DBKBTRN;  /* avoid structure result */
A68_238  EBKBTRN;  /* OPERATORS - unite union */
A68_187  FBKBTRN_t;
A68_290  GBKBTRN;  /* OPERATORS - simple index */
A68_INT  HBKBTRN;  /* YIELD */
A68_201 * IBKBTRN_td;
A68_BOOL  JBKBTRN;  /* optbool result */
A68_238  KBKBTRN;  /* OPERATORS - unite union */
A68_354  LBKBTRN;  /* collateral clause result */
A68_238  MBKBTRN;  /* OPERATORS - unite union */
A68_354  NBKBTRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 653: */
 /* line 654: */
{ 
 /* line 655: */
XAKBTRN = D ;
switch ( XAKBTRN.mode )
{ 
case 5: /* STRUCT(INT)  */
YAKBTRN_fn = (XAKBTRN.data.mode5);
 /* line 656: */
{ 
ZAKBTRN = (*(&(NL(BCJBTRN_env)->Fns))) ;
ABKBTRN = YAKBTRN_fn.Fnno ;
BBKBTRN_dec = (*(&A_VINDEX(ZAKBTRN,ABKBTRN)));
 /* line 657: */
CBKBTRN = (BBKBTRN_dec!=YAAATRN_nilfndec);
if ( CBKBTRN )
{ /* line 658: */
CBKBTRN = ((*(&(BBKBTRN_dec->Sort)))==PKAATRN_localdec);
}
if ( CBKBTRN )
{ 
A_CALLPROC(NL(RDJBTRN_fndec),(BBKBTRN_dec, Tprocs, &DBKBTRN),(BBKBTRN_dec, Tprocs, &DBKBTRN,(NL(RDJBTRN_fndec)).nonlocals));
A_CALLPROC(NL(XCJBTRN_replace_fndec),(YAKBTRN_fn.Fnno, DBKBTRN.F),(YAKBTRN_fn.Fnno, DBKBTRN.F,(NL(XCJBTRN_replace_fndec)).nonlocals));
 /* line 659: */
 /* line 660: */
 /* line 661: */
 /* line 662: */
A_CALLPROC(NL(QJJBTRN_add_step),(A_UUNITE(EBKBTRN,0,D)),(A_UUNITE(EBKBTRN,0,D),(NL(QJJBTRN_add_step)).nonlocals));
} 
} 
break;
case 3: /* STRUCT(INT)  */
FBKBTRN_t = (XAKBTRN.data.mode3);
 /* line 663: */
{ 
GBKBTRN = (*(&(NL(BCJBTRN_env)->Types))) ;
HBKBTRN = FBKBTRN_t.Typeno ;
IBKBTRN_td = (*(&A_VINDEX(GBKBTRN,HBKBTRN)));
 /* line 664: */
JBKBTRN = (IBKBTRN_td!=WAAATRN_niltypedec);
if ( JBKBTRN )
{ /* line 665: */
JBKBTRN = ((*(&(IBKBTRN_td->Sort)))==PKAATRN_localdec);
}
if ( JBKBTRN )
{ 
 /* line 666: */
 /* line 667: */
 /* line 668: */
 /* line 669: */
A_CALLPROC(NL(QJJBTRN_add_step),(A_UUNITE(KBKBTRN,0,D)),(A_UUNITE(KBKBTRN,0,D),(NL(QJJBTRN_add_step)).nonlocals));
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 670: */
LBKBTRN.S = A_UUNITE(MBKBTRN,0,D);
 /* line 671: */
LBKBTRN.C = A68_FALSE;
NBKBTRN = LBKBTRN;
} 
A_PROC_EXIT(declaration);
*ReturnedValue = (NBKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RBKBTRN_let(A68_242 * L, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals)
#define NL(x) (((SBKBTRN_let *)NonLocals)->x)
{ 
A68_249 * TBKBTRN_names;
A68_498  VBKBTRN_do_unit;   /* proc value of non-global proc */
A68_499  RCKBTRN_do_name;   /* proc value of non-global proc */
A68_213 * ZCKBTRN_uname;
A68_208  ADKBTRN;  /* avoid structure result */
A68_208  BDKBTRN;  /* united object - for case conformity */
A68_BOOL  CDKBTRN;  /* clause result */
A68_BOOL  DDKBTRN_named;
A68_213 * EDKBTRN;  /* clause result */
A68_213 * FDKBTRN_multilet;
A68_501 * HDKBTRN_unames;
A68_501 ** IDKBTRN_uptr;
A68_249 * JDKBTRN_nptr;
A68_189 * KDKBTRN_tstr;
A68_189 ** LDKBTRN_tptr;
A68_501  MDKBTRN;  /* collateral clause result */
A68_501 * NDKBTRN;  /* YIELD */
A68_189  ODKBTRN;  /* collateral clause result */
A68_INT  PDKBTRN;  /* YIELD */
A68_189 * QDKBTRN;  /* YIELD */
A68_208  RDKBTRN;  /* avoid structure result */
A68_208  SDKBTRN_newunit;
A68_VC  TDKBTRN;  /* avoid structure result */
A68_VC  UDKBTRN_id;
A68_208  VDKBTRN;  /* united object - for case conformity */
A68_213 * WDKBTRN_un;
A68_213 * XDKBTRN;  /* clause result */
A68_283  YDKBTRN;  /* collateral clause result */
A68_186  ZDKBTRN;  /* OPERATORS - mode -> union mode */
A68_161  AEKBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  BEKBTRN_index;
A68_218 * CEKBTRN_index;
A68_218  DEKBTRN;  /* collateral clause result */
A68_208  EEKBTRN;  /* OPERATORS - mode -> union mode */
A68_170  FEKBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * GEKBTRN;  /* YIELD */
A68_208  HEKBTRN;  /* OPERATORS - mode -> union mode */
A68_354  IEKBTRN;  /* collateral clause result */
A68_238  JEKBTRN;  /* OPERATORS - mode -> union mode */
A68_354  KEKBTRN;  /* clause result */
A_PROC_ENTRY(let);
 /* line 676: */
 /* line 684: */
{ 
TBKBTRN_names = (*(&(L->Letnames)));
 /* line 686: */
A_CLOSURE( VBKBTRN_do_unit, WBKBTRN_do_unit, XBKBTRN_do_unit );
(( XBKBTRN_do_unit * ) ( VBKBTRN_do_unit.nonlocals )) -> FNJBTRN_uminst = NL(FNJBTRN_uminst);
(( XBKBTRN_do_unit * ) ( VBKBTRN_do_unit.nonlocals )) -> Tprocs = Tprocs;
(( XBKBTRN_do_unit * ) ( VBKBTRN_do_unit.nonlocals )) -> DOJBTRN_udinst = NL(DOJBTRN_udinst);
(( XBKBTRN_do_unit * ) ( VBKBTRN_do_unit.nonlocals )) -> RPJBTRN_uprim = NL(RPJBTRN_uprim);
(( XBKBTRN_do_unit * ) ( VBKBTRN_do_unit.nonlocals )) -> VBKBTRN_do_unit = VBKBTRN_do_unit;
(( XBKBTRN_do_unit * ) ( VBKBTRN_do_unit.nonlocals )) -> L = L;
 /* line 704: */
A_CLOSURE( RCKBTRN_do_name, SCKBTRN_do_name, TCKBTRN_do_name );
(( TCKBTRN_do_name * ) ( RCKBTRN_do_name.nonlocals )) -> WKJBTRN_fill_uname = NL(WKJBTRN_fill_uname);
(( TCKBTRN_do_name * ) ( RCKBTRN_do_name.nonlocals )) -> VFJBTRN_nametypes = NL(VFJBTRN_nametypes);
(( TCKBTRN_do_name * ) ( RCKBTRN_do_name.nonlocals )) -> DGJBTRN_translations = NL(DGJBTRN_translations);
(( TCKBTRN_do_name * ) ( RCKBTRN_do_name.nonlocals )) -> PEJBTRN_sys = NL(PEJBTRN_sys);
 /* line 714: */
 /* line 715: */
if ( ((*(&(TBKBTRN_names->Rest)))==NAAATRN_nilnames) )
{ 
ZCKBTRN_uname = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
 /* line 716: */
 /* line 718: */
 /* line 720: */
A_CALLPROC(VBKBTRN_do_unit,((*(&(L->Unit))), &ADKBTRN),((*(&(L->Unit))), &ADKBTRN,(VBKBTRN_do_unit).nonlocals));
A_CALLPROC(RCKBTRN_do_name,(TBKBTRN_names, ZCKBTRN_uname, ADKBTRN),(TBKBTRN_names, ZCKBTRN_uname, ADKBTRN,(RCKBTRN_do_name).nonlocals));
} 
else
{ 
BDKBTRN = (*(&(L->Unit))) ;
switch ( BDKBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
 /* line 721: */
CDKBTRN = A68_TRUE;
break;
default: 
 /* line 722: */
CDKBTRN = A68_FALSE;
break;
} 
DDKBTRN_named = CDKBTRN;
 /* line 724: */
 /* line 725: */
if ( DDKBTRN_named )
{ 
EDKBTRN = NL(UBJBTRN_null_uname);
} 
else
{ 
EDKBTRN = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
} 
FDKBTRN_multilet = EDKBTRN;
 /* line 729: */
 /* line 730: */
 /* line 731: */
HDKBTRN_unames = GDKBTRN_nilunames;
 /* line 732: */
IDKBTRN_uptr = (&HDKBTRN_unames);
 /* line 733: */
JDKBTRN_nptr = TBKBTRN_names;
 /* line 734: */
KDKBTRN_tstr = GAAATRN_niltstr;
 /* line 735: */
LDKBTRN_tptr = (&KDKBTRN_tstr);
 /* line 736: */
for ( ;; )
{ 
 /* line 737: */
if ( !((JDKBTRN_nptr!=NAAATRN_nilnames)) ) break;
 /* line 738: */
MDKBTRN.Uname = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
MDKBTRN.Rest = GDKBTRN_nilunames;
NDKBTRN = A_HEAP(A68_501 ) ;
(*NDKBTRN) = MDKBTRN ;
IDKBTRN_uptr = (&(((*IDKBTRN_uptr) = NDKBTRN)->Rest));
 /* line 739: */
 /* line 740: */
 /* line 741: */
PDKBTRN = (*(&(JDKBTRN_nptr->Nameno))) ;
ODKBTRN.Elem = (*(&((&A_VINDEX(NL(VFJBTRN_nametypes),PDKBTRN))->Type)));
ODKBTRN.Rest = GAAATRN_niltstr;
QDKBTRN = A_HEAP(A68_189 ) ;
(*QDKBTRN) = ODKBTRN ;
LDKBTRN_tptr = (&(((*LDKBTRN_tptr) = QDKBTRN)->Rest));
 /* line 742: */
 /* line 743: */
JDKBTRN_nptr = (*(&(JDKBTRN_nptr->Rest)));
}
 /* line 745: */
A_CALLPROC(VBKBTRN_do_unit,((*(&(L->Unit))), &RDKBTRN),((*(&(L->Unit))), &RDKBTRN,(VBKBTRN_do_unit).nonlocals));
SDKBTRN_newunit = RDKBTRN;
 /* line 747: */
A_CALLPROC(NL(LLJBTRN_multilet_name),( &TDKBTRN),( &TDKBTRN,(NL(LLJBTRN_multilet_name)).nonlocals));
UDKBTRN_id = TDKBTRN;
 /* line 748: */
 /* line 749: */
if ( DDKBTRN_named )
{ 
VDKBTRN = SDKBTRN_newunit ;
switch ( VDKBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
WDKBTRN_un = (VDKBTRN.data.mode11);
 /* line 750: */
XDKBTRN = WDKBTRN_un;
break;
default: 
A_IMP_SKIP ;
break;
} 
FDKBTRN_multilet = XDKBTRN;
} 
else
{ 
YDKBTRN.Name = UDKBTRN_id;
YDKBTRN.Type = A_UNITE(ZDKBTRN,mode3,3,KDKBTRN_tstr);
YDKBTRN.Attr = A_UNITE(AEKBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 751: */
A_CALLPROC(NL(WKJBTRN_fill_uname),(YDKBTRN, SDKBTRN_newunit, FDKBTRN_multilet),(YDKBTRN, SDKBTRN_newunit, FDKBTRN_multilet,(NL(WKJBTRN_fill_uname)).nonlocals));
} 
 /* line 753: */
BEKBTRN_index = 0;
 /* line 754: */
IDKBTRN_uptr = (&HDKBTRN_unames);
JDKBTRN_nptr = TBKBTRN_names;
 /* line 755: */
for ( ;; )
{ 
 /* line 756: */
 /* line 757: */
if ( !((JDKBTRN_nptr!=NAAATRN_nilnames)) ) break;
CEKBTRN_index = (A_HEAP(A68_218 ));
DEKBTRN.Unit = A_UNITE(EEKBTRN,mode11,11,FDKBTRN_multilet);
GEKBTRN = IFJBTRN_makefint(BEKBTRN_index+=1) ;
DEKBTRN.Index = A_UNITE(FEKBTRN,mode1,1,GEKBTRN);
(*CEKBTRN_index) = DEKBTRN;
 /* line 758: */
A_CALLPROC(RCKBTRN_do_name,(JDKBTRN_nptr, (*(&((*IDKBTRN_uptr)->Uname))), A_UNITE(HEKBTRN,mode16,16,CEKBTRN_index)),(JDKBTRN_nptr, (*(&((*IDKBTRN_uptr)->Uname))), A_UNITE(HEKBTRN,mode16,16,CEKBTRN_index),(RCKBTRN_do_name).nonlocals));
 /* line 759: */
IDKBTRN_uptr = (&((*IDKBTRN_uptr)->Rest));
 /* line 760: */
JDKBTRN_nptr = (*(&(JDKBTRN_nptr->Rest)));
}
 /* line 761: */
} 
 /* line 766: */
IEKBTRN.S = A_UNITE(JEKBTRN,mode8,8,L);
 /* line 767: */
IEKBTRN.C = A68_FALSE;
KEKBTRN = IEKBTRN;
} 
A_PROC_EXIT(let);
*ReturnedValue = (KEKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OEKBTRN_make(A68_243 * M, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals)
#define NL(x) (((PEKBTRN_make *)NonLocals)->x)
{ 
A68_186  QEKBTRN;  /* avoid structure result */
A68_186  REKBTRN_type;
A68_503  TEKBTRN_do_dimension;   /* proc value of non-global proc */
A68_504  NFKBTRN_rowtype;   /* proc value of non-global proc */
A68_249 * VFKBTRN_nptr;
A68_INT  WFKBTRN;  /* YIELD */
A68_283  XFKBTRN_nt;
A68_186  YFKBTRN;  /* avoid structure result */
A68_213 * ZFKBTRN_uname;
A68_225  AGKBTRN;  /* collateral clause result */
A68_208  BGKBTRN;  /* OPERATORS - mode -> union mode */
A68_225 * CGKBTRN;  /* YIELD */
A68_208  DGKBTRN;  /* OPERATORS - mode -> union mode */
A68_208  EGKBTRN;  /* avoid structure result */
A68_354  FGKBTRN;  /* collateral clause result */
A68_238  GGKBTRN;  /* OPERATORS - mode -> union mode */
A68_354  HGKBTRN;  /* clause result */
A_PROC_ENTRY(make);
 /* line 771: */
 /* line 773: */
{ 
A_CALLPROC(NL(JDJBTRN_output_type),((*(&((&(M->Inst))->Fnno))), &QEKBTRN),((*(&((&(M->Inst))->Fnno))), &QEKBTRN,(NL(JDJBTRN_output_type)).nonlocals));
REKBTRN_type = QEKBTRN;
 /* line 775: */
A_CLOSURE( TEKBTRN_do_dimension, UEKBTRN_do_dimension, VEKBTRN_do_dimension );
(( VEKBTRN_do_dimension * ) ( TEKBTRN_do_dimension.nonlocals )) -> KKJBTRN_make_uname = NL(KKJBTRN_make_uname);
(( VEKBTRN_do_dimension * ) ( TEKBTRN_do_dimension.nonlocals )) -> ELJBTRN_call_name = NL(ELJBTRN_call_name);
(( VEKBTRN_do_dimension * ) ( TEKBTRN_do_dimension.nonlocals )) -> REKBTRN_type = REKBTRN_type;
(( VEKBTRN_do_dimension * ) ( TEKBTRN_do_dimension.nonlocals )) -> M = M;
(( VEKBTRN_do_dimension * ) ( TEKBTRN_do_dimension.nonlocals )) -> OFJBTRN_get_int = NL(OFJBTRN_get_int);
(( VEKBTRN_do_dimension * ) ( TEKBTRN_do_dimension.nonlocals )) -> TEKBTRN_do_dimension = TEKBTRN_do_dimension;
 /* line 792: */
A_CLOSURE( NFKBTRN_rowtype, OFKBTRN_rowtype, PFKBTRN_rowtype );
(( PFKBTRN_rowtype * ) ( NFKBTRN_rowtype.nonlocals )) -> REKBTRN_type = REKBTRN_type;
(( PFKBTRN_rowtype * ) ( NFKBTRN_rowtype.nonlocals )) -> NFKBTRN_rowtype = NFKBTRN_rowtype;
 /* line 799: */
VFKBTRN_nptr = (*(&(M->Makenames)));
 /* line 800: */
for ( ;; )
{ 
 /* line 801: */
 /* line 803: */
if ( !((VFKBTRN_nptr!=NAAATRN_nilnames)) ) break;
WFKBTRN = (*(&(VFKBTRN_nptr->Nameno))) ;
XFKBTRN_nt = (*(&A_VINDEX(NL(VFJBTRN_nametypes),WFKBTRN)));
 /* line 804: */
 /* line 805: */
A_CALLPROC(NFKBTRN_rowtype,((*(&(M->Sizes))), &YFKBTRN),((*(&(M->Sizes))), &YFKBTRN,(NFKBTRN_rowtype).nonlocals));
ZFKBTRN_uname = A_CALLPROC(NL(DJJBTRN_add_nametype),(XFKBTRN_nt, YFKBTRN, (*(&(VFKBTRN_nptr->Nameno)))),(XFKBTRN_nt, YFKBTRN, (*(&(VFKBTRN_nptr->Nameno))),(NL(DJJBTRN_add_nametype)).nonlocals));
 /* line 806: */
 /* line 807: */
 /* line 808: */
if ( ((*(&(M->Sizes)))==BBAATRN_nilformulas) )
{ 
(*NL(BLJBTRN_n_calls))+=1;
 /* line 809: */
 /* line 810: */
AGKBTRN.Inst = (*(&(M->Inst)));
AGKBTRN.Right = A_UNITE(BGKBTRN,mode34,34,(&FIAATRN_unull));
 /* line 811: */
CGKBTRN = A_HEAP(A68_225 ) ;
(*CGKBTRN) = AGKBTRN ;
A_CALLPROC(NL(XJJBTRN_make_let),((*(&(ZFKBTRN_uname->Nameno))), A_UNITE(DGKBTRN,mode23,23,CGKBTRN)),((*(&(ZFKBTRN_uname->Nameno))), A_UNITE(DGKBTRN,mode23,23,CGKBTRN),(NL(XJJBTRN_make_let)).nonlocals));
} 
else
{ 
 /* line 812: */
A_CALLPROC(TEKBTRN_do_dimension,((*(&(M->Sizes))), &EGKBTRN),((*(&(M->Sizes))), &EGKBTRN,(TEKBTRN_do_dimension).nonlocals));
A_CALLPROC(NL(XJJBTRN_make_let),((*(&(ZFKBTRN_uname->Nameno))), EGKBTRN),((*(&(ZFKBTRN_uname->Nameno))), EGKBTRN,(NL(XJJBTRN_make_let)).nonlocals));
} 
 /* line 813: */
 /* line 814: */
VFKBTRN_nptr = (*(&(VFKBTRN_nptr->Rest)));
}
 /* line 816: */
FGKBTRN.S = A_UNITE(GGKBTRN,mode9,9,M);
 /* line 817: */
FGKBTRN.C = A68_FALSE;
HGKBTRN = FGKBTRN;
} 
A_PROC_EXIT(make);
*ReturnedValue = (HGKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LGKBTRN_join(A68_244 * J, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals)
#define NL(x) (((MGKBTRN_join *)NonLocals)->x)
{ 
A68_381  NGKBTRN;  /* CALL */
A68_338  OGKBTRN;  /* avoid structure result */
A68_208  PGKBTRN_left;
A68_208  QGKBTRN_right;
A68_506  TGKBTRN_get_inst;   /* proc value of non-global proc */
A68_208  VHKBTRN;  /* avoid structure result */
A68_208  WHKBTRN;  /* united object - for case conformity */
A68_213 * XHKBTRN_un;
A68_213 * YHKBTRN;  /* clause result */
A68_213 * ZHKBTRN_uname;
A68_INT  AIKBTRN;  /* YIELD */
A68_242 * BIKBTRN_let;
A68_208  CIKBTRN;  /* united object - for case conformity */
A68_225 * DIKBTRN_um;
A68_208 * EIKBTRN;  /* YIELD */
A68_354  FIKBTRN;  /* collateral clause result */
A68_238  GIKBTRN;  /* OPERATORS - mode -> union mode */
A68_354  HIKBTRN;  /* clause result */
A_PROC_ENTRY(join);
 /* line 821: */
 /* line 822: */
{ 
NGKBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NGKBTRN,((*(&(J->From))), Tprocs, &OGKBTRN),((*(&(J->From))), Tprocs, &OGKBTRN,(NGKBTRN).nonlocals));
PGKBTRN_left = OGKBTRN.U;
 /* line 823: */
QGKBTRN_right = (*(&(J->To)));
 /* line 827: */
A_CLOSURE( TGKBTRN_get_inst, UGKBTRN_get_inst, VGKBTRN_get_inst );
(( VGKBTRN_get_inst * ) ( TGKBTRN_get_inst.nonlocals )) -> DGJBTRN_translations = NL(DGJBTRN_translations);
(( VGKBTRN_get_inst * ) ( TGKBTRN_get_inst.nonlocals )) -> TGKBTRN_get_inst = TGKBTRN_get_inst;
(( VGKBTRN_get_inst * ) ( TGKBTRN_get_inst.nonlocals )) -> OFJBTRN_get_int = NL(OFJBTRN_get_int);
(( VGKBTRN_get_inst * ) ( TGKBTRN_get_inst.nonlocals )) -> PEJBTRN_sys = NL(PEJBTRN_sys);
(( VGKBTRN_get_inst * ) ( TGKBTRN_get_inst.nonlocals )) -> KHJBTRN_lettable = NL(KHJBTRN_lettable);
(( VGKBTRN_get_inst * ) ( TGKBTRN_get_inst.nonlocals )) -> WDJBTRN_flt = NL(WDJBTRN_flt);
 /* line 855: */
 /* line 856: */
A_CALLPROC(TGKBTRN_get_inst,(QGKBTRN_right, 0, &VHKBTRN),(QGKBTRN_right, 0, &VHKBTRN,(TGKBTRN_get_inst).nonlocals));
WHKBTRN = VHKBTRN ;
switch ( WHKBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
XHKBTRN_un = (WHKBTRN.data.mode11);
 /* line 857: */
YHKBTRN = XHKBTRN_un;
break;
default: 
A_IMP_SKIP ;
break;
} 
ZHKBTRN_uname = YHKBTRN;
 /* line 859: */
AIKBTRN = (*(&(ZHKBTRN_uname->Nameno))) ;
BIKBTRN_let = (*(&A_VINDEX((*NL(KHJBTRN_lettable)),AIKBTRN)));
 /* line 861: */
 /* line 862: */
CIKBTRN = (*(&(BIKBTRN_let->Unit))) ;
switch ( CIKBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE248,MODE208)  */
DIKBTRN_um = (CIKBTRN.data.mode23);
 /* line 863: */
 /* line 864: */
EIKBTRN = (&(DIKBTRN_um->Right)) ;
(*EIKBTRN) = PGKBTRN_left;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 866: */
FIKBTRN.S = A_UNITE(GIKBTRN,mode10,10,J);
 /* line 867: */
FIKBTRN.C = A68_FALSE;
HIKBTRN = FIKBTRN;
} 
A_PROC_EXIT(join);
*ReturnedValue = (HIKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LIKBTRN_step(A68_238  S, A68_362 * Tprocs, A68_354  *ReturnedValue, void *NonLocals)
#define NL(x) (((MIKBTRN_step *)NonLocals)->x)
{ 
A68_238  NIKBTRN;  /* united object - for case conformity */
A68_269  OIKBTRN_d;
A68_354  PIKBTRN;  /* clause result */
A68_354  QIKBTRN;  /* avoid structure result */
A68_242 * RIKBTRN_l;
A68_354  SIKBTRN;  /* avoid structure result */
A68_243 * TIKBTRN_m;
A68_354  UIKBTRN;  /* avoid structure result */
A68_244 * VIKBTRN_j;
A68_354  WIKBTRN;  /* avoid structure result */
A68_354  XIKBTRN;  /* collateral clause result */
A_PROC_ENTRY(step);
 /* line 873: */
 /* line 874: */
NIKBTRN = S ;
switch ( NIKBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(OIKBTRN_d,NIKBTRN);
 /* line 875: */
A_CALLPROC(NL(UAKBTRN_declaration),(OIKBTRN_d, Tprocs, &QIKBTRN),(OIKBTRN_d, Tprocs, &QIKBTRN,(NL(UAKBTRN_declaration)).nonlocals));
PIKBTRN = QIKBTRN;
break;
case 8: /* REF STRUCT(REF MODE249,MODE208)  */
RIKBTRN_l = (NIKBTRN.data.mode8);
 /* line 876: */
A_CALLPROC(NL(QBKBTRN_let),(RIKBTRN_l, Tprocs, &SIKBTRN),(RIKBTRN_l, Tprocs, &SIKBTRN,(NL(QBKBTRN_let)).nonlocals));
PIKBTRN = SIKBTRN;
break;
case 9: /* REF STRUCT(REF MODE182,MODE248,REF MODE249)  */
TIKBTRN_m = (NIKBTRN.data.mode9);
 /* line 877: */
A_CALLPROC(NL(NEKBTRN_make),(TIKBTRN_m, Tprocs, &UIKBTRN),(TIKBTRN_m, Tprocs, &UIKBTRN,(NL(NEKBTRN_make)).nonlocals));
PIKBTRN = UIKBTRN;
break;
case 10: /* REF STRUCT(MODE208,MODE208)  */
VIKBTRN_j = (NIKBTRN.data.mode10);
 /* line 878: */
A_CALLPROC(NL(KGKBTRN_join),(VIKBTRN_j, Tprocs, &WIKBTRN),(VIKBTRN_j, Tprocs, &WIKBTRN,(NL(KGKBTRN_join)).nonlocals));
PIKBTRN = WIKBTRN;
break;
default: 
XIKBTRN.S = S;
 /* line 879: */
XIKBTRN.C = A68_FALSE;
PIKBTRN = XIKBTRN;
break;
} 
A_PROC_EXIT(step);
*ReturnedValue = (PIKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZIKBTRN_check_names(void *NonLocals)
#define NL(x) (((AJKBTRN_check_names *)NonLocals)->x)
{ 
A68_242 ** BJKBTRN_l;
A68_472  CJKBTRN;  /* OPERATORS - trim index */
A68_472  DJKBTRN;  /* forall yield */
A68_INT  EJKBTRN;  /* forall loop counter */
A68_INT  HJKBTRN_nameno;
A68_BOOL  IJKBTRN;  /* optbool result */
A68_BOOL  JJKBTRN;  /* clause result */
A68_462  KJKBTRN;  /* collateral clause result */
A68_52  NJKBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  OJKBTRN;  /* YIELD */
A68_52  PJKBTRN;  /* OPERATORS - mode -> union mode */
A68_85  QJKBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  RJKBTRN;  /* avoid structure result */
A68_INT  SJKBTRN_no;
A68_INT  TJKBTRN;  /* to part of loop */
A68_186  UJKBTRN;  /* united object - for case conformity */
A68_187 * VJKBTRN_tn;
A68_BOOL  WJKBTRN;  /* clause result */
A68_512  XJKBTRN;  /* collateral clause result */
A68_52  AKKBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BKKBTRN;  /* YIELD */
A68_52  CKKBTRN;  /* OPERATORS - mode -> union mode */
A68_52  FKKBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GKKBTRN;  /* YIELD */
A68_85  HKKBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  IKKBTRN;  /* avoid structure result */
A_PROC_ENTRY(check_names);
{ 
 /* line 890: */
DJKBTRN = A_VTRIM(CJKBTRN,((*NL(KHJBTRN_lettable))),A_VTSCRIPT(&(CJKBTRN.upb),((*NL(KHJBTRN_lettable))).upb,3,(*NL(OHJBTRN_n_names)))) ;
EJKBTRN = DJKBTRN.upb -1;
BJKBTRN_l = DJKBTRN.data;
for (;EJKBTRN-- >= 0;
(BJKBTRN_l++
) )
{
 /* line 891: */
if ( ((*BJKBTRN_l)==(A68_242 *)A68_NIL) )
{ 
 /* line 892: */
A_CALLPROC(NL(WDJBTRN_flt),(GJKBTRN),(GJKBTRN,(NL(WDJBTRN_flt)).nonlocals));
} 
else
{ 
{ 
HJKBTRN_nameno = (*(&((*(&((*BJKBTRN_l)->Letnames)))->Nameno)));
 /* line 893: */
IJKBTRN = (HJKBTRN_nameno<=0);
if ( ! IJKBTRN )
{ /* line 894: */
IJKBTRN = (HJKBTRN_nameno>(*NL(OHJBTRN_n_names)));
}
JJKBTRN = IJKBTRN;
if ( JJKBTRN )
{ 
OJKBTRN = MJKBTRN ;
KJKBTRN.data[0] = A_UNITE(NJKBTRN,mode7,7,OJKBTRN);
KJKBTRN.data[1] = A_UNITE(PJKBTRN,mode1,1,HJKBTRN_nameno);
 /* line 895: */
UJBAOSL_oneline( A_HISVEC(QJKBTRN,KJKBTRN,2,A68_52 ), &RJKBTRN );
A_CALLPROC(NL(WDJBTRN_flt),(RJKBTRN),(RJKBTRN,(NL(WDJBTRN_flt)).nonlocals));
} 
} 
} 
}
 /* line 897: */
 /* line 898: */
TJKBTRN = (*NL(OHJBTRN_n_names));
for ( SJKBTRN_no = 1;
SJKBTRN_no <= TJKBTRN;
SJKBTRN_no += 1 )
{ 
 /* line 896: */
 /* line 899: */
UJKBTRN = (*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),SJKBTRN_no))->Type))) ;
switch ( UJKBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
VJKBTRN_tn = (UJKBTRN.data.mode1);
 /* line 900: */
WJKBTRN = ((*(&(VJKBTRN_tn->Typeno)))==(*(&(NL(YGJBTRN_illegalt)->Typeno))));
break;
default: 
 /* line 901: */
 /* line 902: */
WJKBTRN = A68_FALSE;
break;
} 
if ( WJKBTRN )
{ 
BKKBTRN = ZJKBTRN ;
XJKBTRN.data[0] = A_UNITE(AKKBTRN,mode7,7,BKKBTRN);
XJKBTRN.data[1] = A_UNITE(CKKBTRN,mode1,1,SJKBTRN_no);
GKKBTRN = EKKBTRN ;
XJKBTRN.data[2] = A_UNITE(FKKBTRN,mode7,7,GKKBTRN);
 /* line 903: */
 /* line 904: */
UJBAOSL_oneline( A_HISVEC(HKKBTRN,XJKBTRN,3,A68_52 ), &IKKBTRN );
A_CALLPROC(NL(WDJBTRN_flt),(IKKBTRN),(IKKBTRN,(NL(WDJBTRN_flt)).nonlocals));
} 
}
 /* line 905: */
} 
A_PROC_EXIT(check_names);
return;
} 
#undef NL

A_STATIC A68_VOID  LKKBTRN_process_iospec(A68_284 * Fdec, A68_508  *ReturnedValue, void *NonLocals)
#define NL(x) (((MKKBTRN_process_iospec *)NonLocals)->x)
{ 
A68_BOOL  NKKBTRN_changed;
A68_213 * OKKBTRN_input;
A68_213 * PKKBTRN_output;
A68_249 * QKKBTRN_inptr;
A68_189 * RKKBTRN_tstr;
A68_189 ** SKKBTRN_tptr;
A68_INT  TKKBTRN_index;
A68_INT  UKKBTRN;  /* YIELD */
A68_283  VKKBTRN_nt;
A68_VC  WKKBTRN;  /* != */
A68_BOOL  XKKBTRN;  /* optbool result */
A68_213 * YKKBTRN_newinput;
A68_218  ZKKBTRN;  /* collateral clause result */
A68_208  ALKBTRN;  /* OPERATORS - mode -> union mode */
A68_170  BLKBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * CLKBTRN;  /* YIELD */
A68_218 * DLKBTRN;  /* YIELD */
A68_208  ELKBTRN;  /* OPERATORS - mode -> union mode */
A68_189  FLKBTRN;  /* collateral clause result */
A68_189 * GLKBTRN;  /* YIELD */
A68_249  HLKBTRN;  /* collateral clause result */
A68_249 * ILKBTRN;  /* YIELD */
A68_283  JLKBTRN;  /* collateral clause result */
A68_186  KLKBTRN;  /* OPERATORS - mode -> union mode */
A68_161  LLKBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  MLKBTRN;  /* YIELD */
A68_283 * NLKBTRN;  /* YIELD */
A68_INT  OLKBTRN;  /* YIELD */
A68_INT  PLKBTRN;  /* YIELD */
A68_283 * QLKBTRN;  /* YIELD */
A68_INT  RLKBTRN;  /* YIELD */
A68_INT * SLKBTRN;  /* YIELD */
A68_INT  TLKBTRN;  /* YIELD */
A68_VC  ULKBTRN;  /* == */
A68_BOOL  VLKBTRN;  /* optbool result */
A68_INT  WLKBTRN;  /* YIELD */
A68_INT  XLKBTRN;  /* YIELD */
A68_VC * YLKBTRN;  /* YIELD */
A68_249 * ZLKBTRN_outptr;
A68_189 * AMKBTRN_tstr;
A68_189 ** BMKBTRN_tptr;
A68_INT  CMKBTRN_index;
A68_INT  DMKBTRN;  /* YIELD */
A68_283  EMKBTRN_nt;
A68_189  FMKBTRN;  /* collateral clause result */
A68_189 * GMKBTRN;  /* YIELD */
A68_INT  HMKBTRN;  /* YIELD */
A68_186  IMKBTRN;  /* OPERATORS - mode -> union mode */
A68_186 * JMKBTRN;  /* YIELD */
A68_INT  KMKBTRN;  /* YIELD */
A68_INT  LMKBTRN;  /* YIELD */
A68_283 * MMKBTRN;  /* YIELD */
A68_INT  NMKBTRN;  /* YIELD */
A68_INT * OMKBTRN;  /* YIELD */
A68_BOOL  PMKBTRN;  /* optbool result */
A68_249  QMKBTRN;  /* collateral clause result */
A68_249 * RMKBTRN;  /* YIELD */
A68_508  SMKBTRN;  /* collateral clause result */
A68_508  TMKBTRN;  /* clause result */
A_PROC_ENTRY(process_iospec);
 /* line 909: */
 /* line 910: */
{ 
NKKBTRN_changed = A68_FALSE;
 /* line 914: */
OKKBTRN_input = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
PKKBTRN_output = A_CALLPROC(NL(PHJBTRN_allocate_name),(),((NL(PHJBTRN_allocate_name)).nonlocals));
 /* line 918: */
QKKBTRN_inptr = (*(&(Fdec->Inputs)));
 /* line 919: */
 /* line 920: */
 /* line 921: */
if ( ((*(&(QKKBTRN_inptr->Rest)))!=NAAATRN_nilnames) )
{ 
 /* line 922: */
SKKBTRN_tptr = (&RKKBTRN_tstr);
 /* line 923: */
for ( TKKBTRN_index = 1;;
TKKBTRN_index += 1 ) 
{ 
 /* line 924: */
if ( !((QKKBTRN_inptr!=NAAATRN_nilnames)) ) break;
UKKBTRN = (*(&(QKKBTRN_inptr->Nameno))) ;
VKKBTRN_nt = (*(&A_VINDEX(NL(VFJBTRN_nametypes),UKKBTRN)));
 /* line 925: */
WKKBTRN = VKKBTRN_nt.Name ;
XKKBTRN = ! A_VSTRUCTCOMP(WKKBTRN,YNAAOSL_nilstr);
if ( XKKBTRN )
{ /* line 926: */
XKKBTRN = (VKKBTRN_nt.Name.upb>0);
}
 /* line 927: */
if ( XKKBTRN )
{ 
YKKBTRN_newinput = A_CALLPROC(NL(DJJBTRN_add_nametype),(VKKBTRN_nt, VKKBTRN_nt.Type, (*(&(QKKBTRN_inptr->Nameno)))),(VKKBTRN_nt, VKKBTRN_nt.Type, (*(&(QKKBTRN_inptr->Nameno))),(NL(DJJBTRN_add_nametype)).nonlocals));
 /* line 928: */
 /* line 929: */
ZKKBTRN.Unit = A_UNITE(ALKBTRN,mode11,11,OKKBTRN_input);
CLKBTRN = IFJBTRN_makefint(TKKBTRN_index) ;
ZKKBTRN.Index = A_UNITE(BLKBTRN,mode1,1,CLKBTRN);
 /* line 930: */
DLKBTRN = A_HEAP(A68_218 ) ;
(*DLKBTRN) = ZKKBTRN ;
A_CALLPROC(NL(XJJBTRN_make_let),((*(&(YKKBTRN_newinput->Nameno))), A_UNITE(ELKBTRN,mode16,16,DLKBTRN)),((*(&(YKKBTRN_newinput->Nameno))), A_UNITE(ELKBTRN,mode16,16,DLKBTRN),(NL(XJJBTRN_make_let)).nonlocals));
} 
 /* line 931: */
 /* line 932: */
FLKBTRN.Elem = VKKBTRN_nt.Type;
FLKBTRN.Rest = GAAATRN_niltstr;
GLKBTRN = A_HEAP(A68_189 ) ;
(*GLKBTRN) = FLKBTRN ;
SKKBTRN_tptr = (&(((*SKKBTRN_tptr) = GLKBTRN)->Rest));
 /* line 933: */
 /* line 934: */
QKKBTRN_inptr = (*(&(QKKBTRN_inptr->Rest)));
}
 /* line 935: */
HLKBTRN.Nameno = (*(&(OKKBTRN_input->Nameno)));
HLKBTRN.Rest = NAAATRN_nilnames;
ILKBTRN = A_HEAP(A68_249 ) ;
(*ILKBTRN) = HLKBTRN ;
QKKBTRN_inptr = ILKBTRN;
 /* line 936: */
JLKBTRN.Name = NL(DAJBTRN_input_name);
JLKBTRN.Type = A_UNITE(KLKBTRN,mode3,3,RKKBTRN_tstr);
JLKBTRN.Attr = A_UNITE(LLKBTRN,mode5,5,(&ZHAATRN_attrnull));
MLKBTRN = (*(&(OKKBTRN_input->Nameno))) ;
NLKBTRN = (&A_VINDEX((*NL(WGJBTRN_nametable)),MLKBTRN)) ;
(*NLKBTRN) = JLKBTRN;
 /* line 937: */
 /* line 938: */
NKKBTRN_changed = A68_TRUE;
} 
else
{ 
OLKBTRN = (*(&(OKKBTRN_input->Nameno))) ;
PLKBTRN = (*(&(QKKBTRN_inptr->Nameno))) ;
QLKBTRN = (&A_VINDEX((*NL(WGJBTRN_nametable)),OLKBTRN)) ;
(*QLKBTRN) = (*(&A_VINDEX(NL(VFJBTRN_nametypes),PLKBTRN)));
 /* line 939: */
RLKBTRN = (*(&(OKKBTRN_input->Nameno))) ;
SLKBTRN = (&A_VINDEX(NL(DGJBTRN_translations),RLKBTRN)) ;
(*SLKBTRN) = (*(&(QKKBTRN_inptr->Nameno)));
 /* line 942: */
 /* line 943: */
TLKBTRN = 1 ;
ULKBTRN = (*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),TLKBTRN))->Name))) ;
VLKBTRN = (NL(NZIBTRN_name_input)&A_VSTRUCTCOMP(ULKBTRN,YNAAOSL_nilstr));
if ( ! VLKBTRN )
{ /* line 944: */
WLKBTRN = 1 ;
VLKBTRN = ((*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),WLKBTRN))->Name))).upb==0);
}
 /* line 945: */
if ( VLKBTRN )
{ 
XLKBTRN = 1 ;
YLKBTRN = (&((&A_VINDEX((*NL(WGJBTRN_nametable)),XLKBTRN))->Name)) ;
(*YLKBTRN) = NL(DAJBTRN_input_name);
 /* line 946: */
 /* line 947: */
 /* line 948: */
NKKBTRN_changed = A68_TRUE;
} 
} 
 /* line 952: */
ZLKBTRN_outptr = (*(&(Fdec->Outputs)));
 /* line 953: */
 /* line 954: */
 /* line 955: */
if ( ((*(&(ZLKBTRN_outptr->Rest)))!=NAAATRN_nilnames) )
{ 
 /* line 956: */
BMKBTRN_tptr = (&AMKBTRN_tstr);
 /* line 957: */
for ( CMKBTRN_index = 1;;
CMKBTRN_index += 1 ) 
{ 
 /* line 958: */
if ( !((ZLKBTRN_outptr!=NAAATRN_nilnames)) ) break;
DMKBTRN = (*(&(ZLKBTRN_outptr->Nameno))) ;
EMKBTRN_nt = (*(&A_VINDEX(NL(VFJBTRN_nametypes),DMKBTRN)));
 /* line 959: */
 /* line 960: */
FMKBTRN.Elem = EMKBTRN_nt.Type;
FMKBTRN.Rest = GAAATRN_niltstr;
GMKBTRN = A_HEAP(A68_189 ) ;
(*GMKBTRN) = FMKBTRN ;
BMKBTRN_tptr = (&(((*BMKBTRN_tptr) = GMKBTRN)->Rest));
 /* line 961: */
 /* line 962: */
ZLKBTRN_outptr = (*(&(ZLKBTRN_outptr->Rest)));
}
 /* line 963: */
HMKBTRN = (*(&(PKKBTRN_output->Nameno))) ;
JMKBTRN = (&((&A_VINDEX((*NL(WGJBTRN_nametable)),HMKBTRN))->Type)) ;
(*JMKBTRN) = A_UNITE(IMKBTRN,mode3,3,AMKBTRN_tstr);
 /* line 964: */
 /* line 965: */
NKKBTRN_changed = A68_TRUE;
} 
else
{ 
KMKBTRN = (*(&(PKKBTRN_output->Nameno))) ;
LMKBTRN = (*(&(ZLKBTRN_outptr->Nameno))) ;
MMKBTRN = (&A_VINDEX((*NL(WGJBTRN_nametable)),KMKBTRN)) ;
(*MMKBTRN) = (*(&A_VINDEX(NL(VFJBTRN_nametypes),LMKBTRN)));
 /* line 966: */
 /* line 967: */
NMKBTRN = (*(&(PKKBTRN_output->Nameno))) ;
OMKBTRN = (&A_VINDEX(NL(DGJBTRN_translations),NMKBTRN)) ;
(*OMKBTRN) = (*(&(ZLKBTRN_outptr->Nameno)));
} 
 /* line 968: */
 /* line 969: */
PMKBTRN = ((*(&(ZLKBTRN_outptr->Nameno)))!=(*(&(PKKBTRN_output->Nameno))));
if ( ! PMKBTRN )
{ /* line 970: */
PMKBTRN = ((*(&(ZLKBTRN_outptr->Rest)))!=NAAATRN_nilnames);
}
if ( PMKBTRN )
{ 
NKKBTRN_changed = A68_TRUE;
 /* line 971: */
QMKBTRN.Nameno = (*(&(PKKBTRN_output->Nameno)));
 /* line 972: */
QMKBTRN.Rest = NAAATRN_nilnames;
RMKBTRN = A_HEAP(A68_249 ) ;
(*RMKBTRN) = QMKBTRN ;
ZLKBTRN_outptr = RMKBTRN;
} 
 /* line 974: */
SMKBTRN.Input = QKKBTRN_inptr;
SMKBTRN.Output = ZLKBTRN_outptr;
 /* line 975: */
SMKBTRN.Changed = NKKBTRN_changed;
TMKBTRN = SMKBTRN;
} 
A_PROC_EXIT(process_iospec);
*ReturnedValue = (TMKBTRN);
return;
} 
#undef NL
 /* line 979: */

A_STATIC A68_VOID  ZMKBTRN_add_fnbody(A68_VC  Name, A68_280  Body, A68_508  Iospec, A68_286  Nametypes, A68_248  *ReturnedValue, void *NonLocals)
#define NL(x) (((ANKBTRN_add_fnbody *)NonLocals)->x)
{ 
A68_284  BNKBTRN;  /* collateral clause result */
A68_161  CNKBTRN;  /* OPERATORS - mode -> union mode */
A68_284 * DNKBTRN;  /* YIELD */
A68_INT  ENKBTRN_fnno;
A68_238  FNKBTRN;  /* OPERATORS - mode -> union mode */
A68_239  GNKBTRN;  /* YIELD */
A68_248  HNKBTRN;  /* collateral clause result */
A68_161  INKBTRN;  /* OPERATORS - mode -> union mode */
A68_248  JNKBTRN;  /* clause result */
A_PROC_ENTRY(add_fnbody);
 /* line 980: */
 /* line 995: */
{ 
 /* line 996: */
BNKBTRN.Sort = PKAATRN_localdec;
BNKBTRN.Macro = A68_FALSE;
BNKBTRN.Fnname = Name;
 /* line 997: */
BNKBTRN.Macspecs = (*(&(NL(Fdec)->Macspecs)));
BNKBTRN.Attr = A_UNITE(CNKBTRN,mode5,5,(&ZHAATRN_attrnull));
BNKBTRN.Inputs = Iospec.Input;
 /* line 998: */
BNKBTRN.Outputs = Iospec.Output;
BNKBTRN.Nametypes = Nametypes;
 /* line 999: */
BNKBTRN.Fnbody = Body;
BNKBTRN.Usage = CBAATRN_nilusage;
DNKBTRN = A_HEAP(A68_284 ) ;
(*DNKBTRN) = BNKBTRN ;
ENKBTRN_fnno = A_CALLPROC(NL(FCJBTRN_add_fndec),(DNKBTRN),(DNKBTRN,(NL(FCJBTRN_add_fndec)).nonlocals));
 /* line 1000: */
GNKBTRN = (*LHAATRN_makefnname(ENKBTRN_fnno)) ;
A_CALLPROC(NL(QJJBTRN_add_step),(A_UNITE(FNKBTRN,mode5,5,GNKBTRN)),(A_UNITE(FNKBTRN,mode5,5,GNKBTRN),(NL(QJJBTRN_add_step)).nonlocals));
 /* line 1002: */
HNKBTRN.Fnno = ENKBTRN_fnno;
HNKBTRN.Macparams = ABAATRN_nilmacparams;
 /* line 1003: */
HNKBTRN.Attr = A_UNITE(INKBTRN,mode5,5,(&ZHAATRN_attrnull));
JNKBTRN = HNKBTRN;
} 
A_PROC_EXIT(add_fnbody);
*ReturnedValue = (JNKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NNKBTRN_new_fndec(A68_508  Newspec, A68_208  Newunit, A68_359  *ReturnedValue, void *NonLocals)
#define NL(x) (((ONKBTRN_new_fndec *)NonLocals)->x)
{ 
A68_359  PNKBTRN;  /* collateral clause result */
A68_284  QNKBTRN;  /* collateral clause result */
A68_161  RNKBTRN;  /* OPERATORS - mode -> union mode */
A68_286  SNKBTRN;  /* OPERATORS - trim index */
A68_231  TNKBTRN;  /* collateral clause result */
A68_208  UNKBTRN;  /* clause result */
A68_231 * VNKBTRN;  /* YIELD */
A68_208  WNKBTRN;  /* OPERATORS - mode -> union mode */
A68_280  XNKBTRN;  /* OPERATORS - mode -> union mode */
A68_253 * YNKBTRN;  /* YIELD */
A68_284 * ZNKBTRN;  /* YIELD */
A68_359  AOKBTRN;  /* clause result */
A_PROC_ENTRY(new_fndec);
 /* line 1007: */
 /* line 1008: */
QNKBTRN.Sort = PKAATRN_localdec;
QNKBTRN.Macro = A68_FALSE;
QNKBTRN.Fnname = (*(&(NL(Fdec)->Fnname)));
 /* line 1009: */
QNKBTRN.Macspecs = (*(&(NL(Fdec)->Macspecs)));
QNKBTRN.Attr = A_UNITE(RNKBTRN,mode5,5,(&ZHAATRN_attrnull));
QNKBTRN.Inputs = Newspec.Input;
 /* line 1010: */
QNKBTRN.Outputs = Newspec.Output;
 /* line 1011: */
QNKBTRN.Nametypes = A_VTRIM(SNKBTRN,((*NL(WGJBTRN_nametable))),A_VTSCRIPT(&(SNKBTRN.upb),((*NL(WGJBTRN_nametable))).upb,1,(*NL(OHJBTRN_n_names))));
{ 
 /* line 1012: */
if ( (*NL(OJJBTRN_have_series)) )
{ 
TNKBTRN.Body = (*NL(MJJBTRN_series));
 /* line 1013: */
TNKBTRN.Output = Newunit;
 /* line 1014: */
VNKBTRN = A_HEAP(A68_231 ) ;
(*VNKBTRN) = TNKBTRN ;
UNKBTRN = A_UNITE(WNKBTRN,mode29,29,VNKBTRN);
} 
else
{ 
 /* line 1015: */
UNKBTRN = Newunit;
} 
} 
 /* line 1016: */
YNKBTRN = WGAATRN_makeunittag(UNKBTRN) ;
QNKBTRN.Fnbody = A_UNITE(XNKBTRN,mode1,1,YNKBTRN);
QNKBTRN.Usage = CBAATRN_nilusage;
 /* line 1017: */
ZNKBTRN = A_HEAP(A68_284 ) ;
(*ZNKBTRN) = QNKBTRN ;
PNKBTRN.F = ZNKBTRN;
 /* line 1018: */
PNKBTRN.C = A68_TRUE;
AOKBTRN = PNKBTRN;
A_PROC_EXIT(new_fndec);
*ReturnedValue = (AOKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EOKBTRN_unit_body(A68_253 * Ut, A68_362 * Tprocs, A68_359  *ReturnedValue, void *NonLocals)
#define NL(x) (((FOKBTRN_unit_body *)NonLocals)->x)
{ 
A68_517  GOKBTRN;  /* collateral clause result */
A68_407  HOKBTRN;  /* OPERATORS - mode -> union mode */
A68_397  IOKBTRN;  /* YIELD */
A68_407  JOKBTRN;  /* OPERATORS - mode -> union mode */
A68_381  KOKBTRN;  /* YIELD */
A68_407  LOKBTRN;  /* OPERATORS - mode -> union mode */
A68_363  MOKBTRN;  /* procedure value */
A68_407  NOKBTRN;  /* OPERATORS - mode -> union mode */
A68_372  OOKBTRN;  /* procedure value */
A68_407  POKBTRN;  /* OPERATORS - mode -> union mode */
A68_366  QOKBTRN;  /* procedure value */
A68_406  ROKBTRN;  /* OPERATORS - istruct -> vector */
A68_362 * SOKBTRN_newtprocs;
A68_508  TOKBTRN;  /* avoid structure result */
A68_508  UOKBTRN_new_spec;
A68_338  VOKBTRN;  /* avoid structure result */
A68_208  WOKBTRN_unit;
A68_359  XOKBTRN;  /* clause result */
A68_338  YOKBTRN;  /* avoid structure result */
A68_359  ZOKBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_body);
 /* line 1022: */
 /* line 1024: */
{ 
IOKBTRN = NL(KIKBTRN_step) ;
GOKBTRN.data[0] = A_UNITE(HOKBTRN,mode35,35,IOKBTRN);
KOKBTRN = NL(MQJBTRN_unit) ;
GOKBTRN.data[1] = A_UNITE(JOKBTRN,mode19,19,KOKBTRN);
 /* line 1025: */
MOKBTRN.fn.fn_global = DWLATRN_null_attr;
MOKBTRN.nonlocals = A68_NIL;
GOKBTRN.data[2] = A_UNITE(LOKBTRN,mode1,1,MOKBTRN);
OOKBTRN.fn.fn_global = NWLATRN_null_type;
OOKBTRN.nonlocals = A68_NIL;
GOKBTRN.data[3] = A_UNITE(NOKBTRN,mode10,10,OOKBTRN);
QOKBTRN.fn.fn_global = IWLATRN_null_formula;
QOKBTRN.nonlocals = A68_NIL;
GOKBTRN.data[4] = A_UNITE(POKBTRN,mode4,4,QOKBTRN);
SOKBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(ROKBTRN,GOKBTRN,5,A68_407 ));
 /* line 1027: */
A_CALLPROC(NL(KKKBTRN_process_iospec),(NL(Fdec), &TOKBTRN),(NL(Fdec), &TOKBTRN,(NL(KKKBTRN_process_iospec)).nonlocals));
UOKBTRN_new_spec = TOKBTRN;
 /* line 1029: */
A_CALLPROC(NL(MQJBTRN_unit),((*(&(Ut->Tag))), SOKBTRN_newtprocs, &VOKBTRN),((*(&(Ut->Tag))), SOKBTRN_newtprocs, &VOKBTRN,(NL(MQJBTRN_unit)).nonlocals));
WOKBTRN_unit = VOKBTRN.U;
 /* line 1030: */
A_CALLPROC(NL(YIKBTRN_check_names),(),((NL(YIKBTRN_check_names)).nonlocals));
 /* line 1031: */
 /* line 1032: */
A_CALLPROC(NL(XRJBTRN_simplify_units),(WOKBTRN_unit, &YOKBTRN),(WOKBTRN_unit, &YOKBTRN,(NL(XRJBTRN_simplify_units)).nonlocals));
A_CALLPROC(NL(MNKBTRN_new_fndec),(UOKBTRN_new_spec, YOKBTRN.U, &ZOKBTRN),(UOKBTRN_new_spec, YOKBTRN.U, &ZOKBTRN,(NL(MNKBTRN_new_fndec)).nonlocals));
XOKBTRN = ZOKBTRN;
} 
A_PROC_EXIT(unit_body);
*ReturnedValue = (XOKBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DPKBTRN_reformp(A68_272 * Re, A68_362 * Tprocs, A68_359  *ReturnedValue, void *NonLocals)
#define NL(x) (((EPKBTRN_reformp *)NonLocals)->x)
{ 
A68_372  IPKBTRN_simplify_type;   /* proc value of non-global proc */
A68_519  CQKBTRN_;   /* proc value of non-global proc */
A68_528  RRKBTRN_adjacent;   /* proc value of non-global proc */
A68_529  WSKBTRN_break_down_unit;   /* proc value of non-global proc */
A68_531  BVKBTRN_string_row;   /* proc value of non-global proc */
A68_533  WWKBTRN_conc_unit;   /* proc value of non-global proc */
A68_537  BBLBTRN_build_unit;   /* proc value of non-global proc */
A68_508  ODLBTRN;  /* avoid structure result */
A68_508  PDLBTRN_new_spec;
A68_540  QDLBTRN;  /* collateral clause result */
A68_407  RDLBTRN;  /* OPERATORS - mode -> union mode */
A68_372  SDLBTRN;  /* YIELD */
A68_407  TDLBTRN;  /* OPERATORS - mode -> union mode */
A68_366  UDLBTRN;  /* procedure value */
A68_406  VDLBTRN;  /* OPERATORS - istruct -> vector */
A68_362 * WDLBTRN_newtprocs;
A68_INT  XDLBTRN;  /* YIELD */
A68_329  YDLBTRN;  /* avoid structure result */
A68_186  ZDLBTRN_in_type;
A68_INT  AELBTRN;  /* YIELD */
A68_329  BELBTRN;  /* avoid structure result */
A68_186  CELBTRN_out_type;
A68_213  DELBTRN;  /* collateral clause result */
A68_213 * EELBTRN;  /* YIELD */
A68_208  FELBTRN;  /* OPERATORS - mode -> union mode */
A68_525 * GELBTRN_flattened_input;
A68_208  HELBTRN;  /* avoid structure result */
A68_208  IELBTRN_body;
A68_359  JELBTRN;  /* clause result */
A68_359  KELBTRN;  /* avoid structure result */
A_PROC_ENTRY(reformp);
 /* line 1036: */
 /* line 1056: */
{ 
A_CLOSURE( IPKBTRN_simplify_type, JPKBTRN_simplify_type, KPKBTRN_simplify_type );
(( KPKBTRN_simplify_type * ) ( IPKBTRN_simplify_type.nonlocals )) -> BCJBTRN_env = NL(BCJBTRN_env);
(( KPKBTRN_simplify_type * ) ( IPKBTRN_simplify_type.nonlocals )) -> IPKBTRN_simplify_type = IPKBTRN_simplify_type;
 /* line 1074: */
A_CLOSURE( CQKBTRN_, DQKBTRN_, EQKBTRN_ );
(( EQKBTRN_ * ) ( CQKBTRN_.nonlocals )) -> CQKBTRN_ = CQKBTRN_;
 /* line 1113: */
 /* line 1120: */
 /* line 1124: */
 /* line 1126: */
 /* line 1148: */
A_CLOSURE( RRKBTRN_adjacent, SRKBTRN_adjacent, TRKBTRN_adjacent );
(( TRKBTRN_adjacent * ) ( RRKBTRN_adjacent.nonlocals )) -> HZIBTRN_not_adjacent = NL(HZIBTRN_not_adjacent);
(( TRKBTRN_adjacent * ) ( RRKBTRN_adjacent.nonlocals )) -> CQKBTRN_ = CQKBTRN_;
 /* line 1187: */
A_CLOSURE( WSKBTRN_break_down_unit, XSKBTRN_break_down_unit, YSKBTRN_break_down_unit );
(( YSKBTRN_break_down_unit * ) ( WSKBTRN_break_down_unit.nonlocals )) -> CQKBTRN_ = CQKBTRN_;
 /* line 1239: */
A_CLOSURE( BVKBTRN_string_row, CVKBTRN_string_row, DVKBTRN_string_row );
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> ZZIBTRN_string_to_row = NL(ZZIBTRN_string_to_row);
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> VZIBTRN_row_to_string = NL(VZIBTRN_row_to_string);
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> YMKBTRN_add_fnbody = NL(YMKBTRN_add_fnbody);
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> VFJBTRN_nametypes = NL(VFJBTRN_nametypes);
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> ELJBTRN_call_name = NL(ELJBTRN_call_name);
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> DJJBTRN_add_nametype = NL(DJJBTRN_add_nametype);
(( DVKBTRN_string_row * ) ( BVKBTRN_string_row.nonlocals )) -> XJJBTRN_make_let = NL(XJJBTRN_make_let);
 /* line 1275: */
A_CLOSURE( WWKBTRN_conc_unit, XWKBTRN_conc_unit, YWKBTRN_conc_unit );
(( YWKBTRN_conc_unit * ) ( WWKBTRN_conc_unit.nonlocals )) -> BVKBTRN_string_row = BVKBTRN_string_row;
(( YWKBTRN_conc_unit * ) ( WWKBTRN_conc_unit.nonlocals )) -> RRKBTRN_adjacent = RRKBTRN_adjacent;
 /* line 1402: */
A_CLOSURE( BBLBTRN_build_unit, CBLBTRN_build_unit, DBLBTRN_build_unit );
(( DBLBTRN_build_unit * ) ( BBLBTRN_build_unit.nonlocals )) -> WWKBTRN_conc_unit = WWKBTRN_conc_unit;
(( DBLBTRN_build_unit * ) ( BBLBTRN_build_unit.nonlocals )) -> CQKBTRN_ = CQKBTRN_;
 /* line 1458: */
A_CALLPROC(NL(KKKBTRN_process_iospec),(NL(Fdec), &ODLBTRN),(NL(Fdec), &ODLBTRN,(NL(KKKBTRN_process_iospec)).nonlocals));
PDLBTRN_new_spec = ODLBTRN;
 /* line 1460: */
 /* line 1461: */
SDLBTRN = IPKBTRN_simplify_type ;
QDLBTRN.data[0] = A_UNITE(RDLBTRN,mode10,10,SDLBTRN);
UDLBTRN.fn.fn_global = IWLATRN_null_formula;
UDLBTRN.nonlocals = A68_NIL;
QDLBTRN.data[1] = A_UNITE(TDLBTRN,mode4,4,UDLBTRN);
WDLBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(VDLBTRN,QDLBTRN,2,A68_407 ));
 /* line 1463: */
XDLBTRN = 1 ;
A_CALLPROC(IPKBTRN_simplify_type,((*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),XDLBTRN))->Type))), WDLBTRN_newtprocs, &YDLBTRN),((*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),XDLBTRN))->Type))), WDLBTRN_newtprocs, &YDLBTRN,(IPKBTRN_simplify_type).nonlocals));
ZDLBTRN_in_type = YDLBTRN.T;
 /* line 1464: */
AELBTRN = 2 ;
A_CALLPROC(IPKBTRN_simplify_type,((*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),AELBTRN))->Type))), WDLBTRN_newtprocs, &BELBTRN),((*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),AELBTRN))->Type))), WDLBTRN_newtprocs, &BELBTRN,(IPKBTRN_simplify_type).nonlocals));
CELBTRN_out_type = BELBTRN.T;
 /* line 1466: */
 /* line 1467: */
DELBTRN.Sort = KKAATRN_usource;
DELBTRN.Nameno = 1;
EELBTRN = A_HEAP(A68_213 ) ;
(*EELBTRN) = DELBTRN ;
GELBTRN_flattened_input = A_CALLPROC(WSKBTRN_break_down_unit,(ZDLBTRN_in_type, A_UNITE(FELBTRN,mode11,11,EELBTRN)),(ZDLBTRN_in_type, A_UNITE(FELBTRN,mode11,11,EELBTRN),(WSKBTRN_break_down_unit).nonlocals));
 /* line 1469: */
A_CALLPROC(BBLBTRN_build_unit,(CELBTRN_out_type, GELBTRN_flattened_input, &HELBTRN),(CELBTRN_out_type, GELBTRN_flattened_input, &HELBTRN,(BBLBTRN_build_unit).nonlocals));
IELBTRN_body = HELBTRN;
 /* line 1470: */
A_CALLPROC(NL(YIKBTRN_check_names),(),((NL(YIKBTRN_check_names)).nonlocals));
 /* line 1471: */
 /* line 1472: */
A_CALLPROC(NL(MNKBTRN_new_fndec),(PDLBTRN_new_spec, IELBTRN_body, &KELBTRN),(PDLBTRN_new_spec, IELBTRN_body, &KELBTRN,(NL(MNKBTRN_new_fndec)).nonlocals));
JELBTRN = KELBTRN;
} 
A_PROC_EXIT(reformp);
*ReturnedValue = (JELBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NELBTRN_arith(A68_271 * Arith, A68_359  *ReturnedValue, void *NonLocals)
#define NL(x) (((OELBTRN_arith *)NonLocals)->x)
{ 
A68_508  PELBTRN;  /* avoid structure result */
A68_508  QELBTRN_new_spec;
A68_508  RELBTRN;  /* collateral clause result */
A68_280  SELBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TELBTRN;  /* avoid structure result */
A68_248  UELBTRN;  /* avoid structure result */
A68_248  VELBTRN_inst;
A68_225  WELBTRN;  /* collateral clause result */
A68_213  XELBTRN;  /* collateral clause result */
A68_213 * YELBTRN;  /* YIELD */
A68_208  ZELBTRN;  /* OPERATORS - mode -> union mode */
A68_225 * AFLBTRN;  /* YIELD */
A68_208  BFLBTRN;  /* OPERATORS - mode -> union mode */
A68_208  CFLBTRN_call;
A68_359  DFLBTRN;  /* clause result */
A68_INT  EFLBTRN;  /* YIELD */
A68_VC  FFLBTRN;  /* avoid structure result */
A68_208  GFLBTRN;  /* OPERATORS - mode -> union mode */
A68_213 * HFLBTRN;  /* YIELD */
A68_359  IFLBTRN;  /* avoid structure result */
A68_359  JFLBTRN;  /* collateral clause result */
A_PROC_ENTRY(arith);
 /* line 1476: */
 /* line 1477: */
{ 
A_CALLPROC(NL(KKKBTRN_process_iospec),(NL(Fdec), &PELBTRN),(NL(Fdec), &PELBTRN,(NL(KKKBTRN_process_iospec)).nonlocals));
QELBTRN_new_spec = PELBTRN;
 /* line 1478: */
 /* line 1479: */
 /* line 1482: */
if ( QELBTRN_new_spec.Changed )
{ 
 /* line 1483: */
 /* line 1484: */
RELBTRN.Input = (*(&(NL(Fdec)->Inputs)));
RELBTRN.Output = (*(&(NL(Fdec)->Outputs)));
RELBTRN.Changed = A68_FALSE;
 /* line 1485: */
A_CALLPROC(NL(VAJBTRN_make_name),(NL(RAJBTRN_fnname_names), NL(RZIBTRN_dummy_fnname), (*NL(ODJBTRN_n_fnnames))+=1, &TELBTRN),(NL(RAJBTRN_fnname_names), NL(RZIBTRN_dummy_fnname), (*NL(ODJBTRN_n_fnnames))+=1, &TELBTRN,(NL(VAJBTRN_make_name)).nonlocals));
A_CALLPROC(NL(YMKBTRN_add_fnbody),(TELBTRN, A_UNITE(SELBTRN,mode3,3,Arith), RELBTRN, NL(VFJBTRN_nametypes), &UELBTRN),(TELBTRN, A_UNITE(SELBTRN,mode3,3,Arith), RELBTRN, NL(VFJBTRN_nametypes), &UELBTRN,(NL(YMKBTRN_add_fnbody)).nonlocals));
VELBTRN_inst = UELBTRN;
 /* line 1486: */
 /* line 1487: */
WELBTRN.Inst = VELBTRN_inst;
XELBTRN.Sort = KKAATRN_usource;
XELBTRN.Nameno = 1;
YELBTRN = A_HEAP(A68_213 ) ;
(*YELBTRN) = XELBTRN ;
WELBTRN.Right = A_UNITE(ZELBTRN,mode11,11,YELBTRN);
AFLBTRN = A_HEAP(A68_225 ) ;
(*AFLBTRN) = WELBTRN ;
CFLBTRN_call = A_UNITE(BFLBTRN,mode23,23,AFLBTRN);
 /* line 1488: */
 /* line 1489: */
 /* line 1490: */
 /* line 1491: */
 /* line 1492: */
EFLBTRN = 2 ;
A_CALLPROC(NL(ELJBTRN_call_name),( &FFLBTRN),( &FFLBTRN,(NL(ELJBTRN_call_name)).nonlocals));
HFLBTRN = A_CALLPROC(NL(KKJBTRN_make_uname),(FFLBTRN, (*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),EFLBTRN))->Type))), CFLBTRN_call),(FFLBTRN, (*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),EFLBTRN))->Type))), CFLBTRN_call,(NL(KKJBTRN_make_uname)).nonlocals)) ;
A_CALLPROC(NL(MNKBTRN_new_fndec),(QELBTRN_new_spec, A_UNITE(GFLBTRN,mode11,11,HFLBTRN), &IFLBTRN),(QELBTRN_new_spec, A_UNITE(GFLBTRN,mode11,11,HFLBTRN), &IFLBTRN,(NL(MNKBTRN_new_fndec)).nonlocals));
DFLBTRN = IFLBTRN;
} 
else
{ 
JFLBTRN.F = NL(Fdec);
 /* line 1493: */
 /* line 1494: */
JFLBTRN.C = A68_FALSE;
DFLBTRN = JFLBTRN;
} 
} 
A_PROC_EXIT(arith);
*ReturnedValue = (DFLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MFLBTRN_non_unit_body(A68_280  Body, A68_359  *ReturnedValue, void *NonLocals)
#define NL(x) (((NFLBTRN_non_unit_body *)NonLocals)->x)
{ 
A68_508  OFLBTRN;  /* avoid structure result */
A68_508  PFLBTRN_new_spec;
A68_286  QFLBTRN;  /* OPERATORS - trim index */
A68_VC  RFLBTRN;  /* avoid structure result */
A68_248  SFLBTRN;  /* avoid structure result */
A68_248  TFLBTRN_inst;
A68_225  UFLBTRN;  /* collateral clause result */
A68_213  VFLBTRN;  /* collateral clause result */
A68_213 * WFLBTRN;  /* YIELD */
A68_208  XFLBTRN;  /* OPERATORS - mode -> union mode */
A68_225 * YFLBTRN;  /* YIELD */
A68_208  ZFLBTRN;  /* OPERATORS - mode -> union mode */
A68_208  AGLBTRN_call;
A68_359  BGLBTRN;  /* clause result */
A68_INT  CGLBTRN;  /* YIELD */
A68_VC  DGLBTRN;  /* avoid structure result */
A68_208  EGLBTRN;  /* OPERATORS - mode -> union mode */
A68_213 * FGLBTRN;  /* YIELD */
A68_359  GGLBTRN;  /* avoid structure result */
A68_359  HGLBTRN;  /* collateral clause result */
A_PROC_ENTRY(non_unit_body);
 /* line 1498: */
 /* line 1499: */
{ 
A_CALLPROC(NL(KKKBTRN_process_iospec),(NL(Fdec), &OFLBTRN),(NL(Fdec), &OFLBTRN,(NL(KKKBTRN_process_iospec)).nonlocals));
PFLBTRN_new_spec = OFLBTRN;
 /* line 1500: */
 /* line 1501: */
 /* line 1502: */
if ( PFLBTRN_new_spec.Changed )
{ 
 /* line 1503: */
 /* line 1504: */
A_CALLPROC(NL(VAJBTRN_make_name),(NL(RAJBTRN_fnname_names), NL(RZIBTRN_dummy_fnname), (*NL(ODJBTRN_n_fnnames))+=1, &RFLBTRN),(NL(RAJBTRN_fnname_names), NL(RZIBTRN_dummy_fnname), (*NL(ODJBTRN_n_fnnames))+=1, &RFLBTRN,(NL(VAJBTRN_make_name)).nonlocals));
A_CALLPROC(NL(YMKBTRN_add_fnbody),(RFLBTRN, Body, PFLBTRN_new_spec, A_VTRIM(QFLBTRN,((*NL(WGJBTRN_nametable))),A_VTSCRIPT(&(QFLBTRN.upb),((*NL(WGJBTRN_nametable))).upb,1,2)), &SFLBTRN),(RFLBTRN, Body, PFLBTRN_new_spec, A_VTRIM(QFLBTRN,((*NL(WGJBTRN_nametable))),A_VTSCRIPT(&(QFLBTRN.upb),((*NL(WGJBTRN_nametable))).upb,1,2)), &SFLBTRN,(NL(YMKBTRN_add_fnbody)).nonlocals));
TFLBTRN_inst = SFLBTRN;
 /* line 1505: */
 /* line 1506: */
UFLBTRN.Inst = TFLBTRN_inst;
VFLBTRN.Sort = KKAATRN_usource;
VFLBTRN.Nameno = 1;
WFLBTRN = A_HEAP(A68_213 ) ;
(*WFLBTRN) = VFLBTRN ;
UFLBTRN.Right = A_UNITE(XFLBTRN,mode11,11,WFLBTRN);
YFLBTRN = A_HEAP(A68_225 ) ;
(*YFLBTRN) = UFLBTRN ;
AGLBTRN_call = A_UNITE(ZFLBTRN,mode23,23,YFLBTRN);
 /* line 1507: */
 /* line 1508: */
 /* line 1509: */
 /* line 1510: */
 /* line 1511: */
CGLBTRN = 2 ;
A_CALLPROC(NL(ELJBTRN_call_name),( &DGLBTRN),( &DGLBTRN,(NL(ELJBTRN_call_name)).nonlocals));
FGLBTRN = A_CALLPROC(NL(KKJBTRN_make_uname),(DGLBTRN, (*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),CGLBTRN))->Type))), AGLBTRN_call),(DGLBTRN, (*(&((&A_VINDEX((*NL(WGJBTRN_nametable)),CGLBTRN))->Type))), AGLBTRN_call,(NL(KKJBTRN_make_uname)).nonlocals)) ;
A_CALLPROC(NL(MNKBTRN_new_fndec),(PFLBTRN_new_spec, A_UNITE(EGLBTRN,mode11,11,FGLBTRN), &GGLBTRN),(PFLBTRN_new_spec, A_UNITE(EGLBTRN,mode11,11,FGLBTRN), &GGLBTRN,(NL(MNKBTRN_new_fndec)).nonlocals));
BGLBTRN = GGLBTRN;
} 
else
{ 
HGLBTRN.F = NL(Fdec);
 /* line 1512: */
 /* line 1513: */
HGLBTRN.C = A68_FALSE;
BGLBTRN = HGLBTRN;
} 
} 
A_PROC_EXIT(non_unit_body);
*ReturnedValue = (BGLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ABJBTRN_generator(A68_BOOL  YAJBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((BBJBTRN_generator *)NonLocals)->x)
{ 
A68_102  CBJBTRN;  /* clause result */
A68_102  DBJBTRN;  /* OPERATORS - dynamic generator */
{ 
DBJBTRN.upb = ((*NL(Table)).upb+EAJBTRN_nstep) ;
( YAJBTRN_anonymous? A_VLOC(A68_VC ,DBJBTRN): A_VHEAP(A68_VC ,DBJBTRN) );
CBJBTRN = DBJBTRN;
} 
*ReturnedValue = (CBJBTRN);
return;
} 
#undef NL

A_STATIC A68_INT  GCJBTRN_add_fndec(A68_284 * Fndec, void *NonLocals)
#define NL(x) (((HCJBTRN_add_fndec *)NonLocals)->x)
{ 
A68_464  JCJBTRN_generator;   /* proc value of non-global proc */
A68_292  OCJBTRN;  /* avoid structure result */
A68_292  PCJBTRN_new;
A68_292  QCJBTRN;  /* OPERATORS - trim index */
A68_292  RCJBTRN;  /* YIELD */
A68_INT  SCJBTRN;  /* YIELD */
A68_284 ** TCJBTRN;  /* YIELD */
A68_INT  UCJBTRN;  /* clause result */
A_PROC_ENTRY(add_fndec);
 /* line 141: */
 /* line 142: */
{ 
A_CLOSURE( JCJBTRN_generator, KCJBTRN_generator, LCJBTRN_generator );
(( LCJBTRN_generator * ) ( JCJBTRN_generator.nonlocals )) -> CCJBTRN_fns = NL(CCJBTRN_fns);
A_CALLPROC(JCJBTRN_generator,(A68_FALSE, &OCJBTRN),(A68_FALSE, &OCJBTRN,(JCJBTRN_generator).nonlocals));
PCJBTRN_new = OCJBTRN;
 /* line 143: */
RCJBTRN = A_VTRIM(QCJBTRN,(PCJBTRN_new),A_VTSCRIPT(&(QCJBTRN.upb),(PCJBTRN_new).upb,1,(*NL(CCJBTRN_fns)).upb)) ;
A_VASSIGN2((*NL(CCJBTRN_fns)),RCJBTRN,A68_284 *);
 /* line 144: */
(*NL(CCJBTRN_fns)) = PCJBTRN_new;
 /* line 145: */
SCJBTRN = (*NL(CCJBTRN_fns)).upb ;
TCJBTRN = (&A_VINDEX((*NL(CCJBTRN_fns)),SCJBTRN)) ;
(*TCJBTRN) = Fndec;
 /* line 146: */
(*NL(DCJBTRN_newdec)) = A68_TRUE;
 /* line 147: */
 /* line 148: */
UCJBTRN = (*NL(CCJBTRN_fns)).upb;
} 
A_PROC_EXIT(add_fndec);
return( UCJBTRN );
} 
#undef NL

A_STATIC A68_VOID  YCJBTRN_replace_fndec(A68_INT  Fnno, A68_284 * Fndec, void *NonLocals)
#define NL(x) (((ZCJBTRN_replace_fndec *)NonLocals)->x)
{ 
A68_464  BDJBTRN_generator;   /* proc value of non-global proc */
A68_292  GDJBTRN;  /* avoid structure result */
A68_284 ** HDJBTRN;  /* YIELD */
A_PROC_ENTRY(replace_fndec);
 /* line 151: */
 /* line 152: */
{ 
 /* line 153: */
if ( !(*NL(DCJBTRN_newdec)) )
{ 
(*NL(DCJBTRN_newdec)) = A68_TRUE;
 /* line 154: */
A_CLOSURE( BDJBTRN_generator, CDJBTRN_generator, DDJBTRN_generator );
(( DDJBTRN_generator * ) ( BDJBTRN_generator.nonlocals )) -> CCJBTRN_fns = NL(CCJBTRN_fns);
 /* line 155: */
A_CALLPROC(BDJBTRN_generator,(A68_FALSE, &GDJBTRN),(A68_FALSE, &GDJBTRN,(BDJBTRN_generator).nonlocals));
A_VASSIGN2((*NL(CCJBTRN_fns)),GDJBTRN,A68_284 *) ;
(*NL(CCJBTRN_fns)) = GDJBTRN;
} 
 /* line 156: */
 /* line 157: */
HDJBTRN = (&A_VINDEX((*NL(CCJBTRN_fns)),Fnno)) ;
(*HDJBTRN) = Fndec;
} 
A_PROC_EXIT(replace_fndec);
return;
} 
#undef NL

A_STATIC A68_VOID  KDJBTRN_output_type(A68_INT  Fnno, A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((LDJBTRN_output_type *)NonLocals)->x)
{ 
A68_186  MDJBTRN;  /* clause result */
A68_292  NDJBTRN;  /* OPERATORS - simple index */
A_PROC_ENTRY(output_type);
 /* line 160: */
NDJBTRN = (*(&(NL(Outer).Environ->Fns))) ;
MDJBTRN = (*(&(MUNATRN_fndec_tfn((*(&A_VINDEX(NDJBTRN,Fnno))))->To)));
A_PROC_EXIT(output_type);
*ReturnedValue = (MDJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SDJBTRN_fndec(A68_284 * Fdec, A68_362 * Tprocs, A68_359  *ReturnedValue, void *NonLocals)
#define NL(x) (((TDJBTRN_fndec *)NonLocals)->x)
{ 
A68_36  WDJBTRN_flt;   /* proc value of non-global proc */
A68_36  PEJBTRN_sys;   /* proc value of non-global proc */
A68_INT  MFJBTRN_empty;
A68_411  OFJBTRN_get_int;   /* proc value of non-global proc */
A68_286  VFJBTRN_nametypes;
A68_INT  WFJBTRN_n_translations;
A68_33  YFJBTRN_generator;   /* proc value of non-global proc */
A68_32  EGJBTRN;  /* avoid structure result */
A68_32  DGJBTRN_translations;
A68_470  GGJBTRN_generator;   /* proc value of non-global proc */
A68_54  MGJBTRN;  /* avoid structure result */
A68_54  LGJBTRN_var_init;
A68_BOOL * NGJBTRN_v;
A68_INT * OGJBTRN_tr;
A68_INT  PGJBTRN;  /* forall loop counter */
A68_471  RGJBTRN_generator;   /* proc value of non-global proc */
A68_286  XGJBTRN;  /* avoid structure result */
A68_286  WGJBTRN_nametable;
A68_187 * YGJBTRN_illegalt;
A68_283 * ZGJBTRN_nt;
A68_INT  AHJBTRN;  /* forall loop counter */
A68_283  BHJBTRN;  /* collateral clause result */
A68_186  CHJBTRN;  /* OPERATORS - mode -> union mode */
A68_161  DHJBTRN;  /* OPERATORS - mode -> union mode */
A68_473  FHJBTRN_generator;   /* proc value of non-global proc */
A68_472  LHJBTRN;  /* avoid structure result */
A68_472  KHJBTRN_lettable;
A68_242 ** MHJBTRN_nl;
A68_INT  NHJBTRN;  /* forall loop counter */
A68_INT  OHJBTRN_n_names;
A68_474  PHJBTRN_allocate_name;   /* proc value of non-global proc */
A68_475  DJJBTRN_add_nametype;   /* proc value of non-global proc */
A68_237 * MJJBTRN_series;
A68_237 ** NJJBTRN_seriesptr;
A68_BOOL  OJJBTRN_have_series;
A68_476  QJJBTRN_add_step;   /* proc value of non-global proc */
A68_477  XJJBTRN_make_let;   /* proc value of non-global proc */
A68_478  KKJBTRN_make_uname;   /* proc value of non-global proc */
A68_479  WKJBTRN_fill_uname;   /* proc value of non-global proc */
A68_INT  BLJBTRN_n_calls;
A68_INT  CLJBTRN_n_multilets;
A68_INT  DLJBTRN_n_prims;
A68_480  ELJBTRN_call_name;   /* proc value of non-global proc */
A68_480  LLJBTRN_multilet_name;   /* proc value of non-global proc */
A68_480  SLJBTRN_prims_name;   /* proc value of non-global proc */
A68_BOOL  ZLJBTRN_has_instance;
A68_381  CMJBTRN_look_for_instance;   /* proc value of non-global proc */
A68_481  LMJBTRN;  /* collateral clause result */
A68_407  MMJBTRN;  /* OPERATORS - mode -> union mode */
A68_381  NMJBTRN;  /* YIELD */
A68_407  OMJBTRN;  /* OPERATORS - mode -> union mode */
A68_363  PMJBTRN;  /* procedure value */
A68_407  QMJBTRN;  /* OPERATORS - mode -> union mode */
A68_366  RMJBTRN;  /* procedure value */
A68_407  SMJBTRN;  /* OPERATORS - mode -> union mode */
A68_372  TMJBTRN;  /* procedure value */
A68_406  UMJBTRN;  /* OPERATORS - istruct -> vector */
A68_362 * VMJBTRN_has_named;
A68_482  XMJBTRN_unit_has_named;   /* proc value of non-global proc */
A68_483  FNJBTRN_uminst;   /* proc value of non-global proc */
A68_484  DOJBTRN_udinst;   /* proc value of non-global proc */
A68_485  RPJBTRN_uprim;   /* proc value of non-global proc */
A68_381  MQJBTRN_unit;   /* proc value of non-global proc */
A68_486  XRJBTRN_simplify_units;   /* proc value of non-global proc */
A68_496  UAKBTRN_declaration;   /* proc value of non-global proc */
A68_497  QBKBTRN_let;   /* proc value of non-global proc */
A68_502  NEKBTRN_make;   /* proc value of non-global proc */
A68_505  KGKBTRN_join;   /* proc value of non-global proc */
A68_397  KIKBTRN_step;   /* proc value of non-global proc */
A68_143  YIKBTRN_check_names;   /* proc value of non-global proc */
A68_513  KKKBTRN_process_iospec;   /* proc value of non-global proc */
A68_514  YMKBTRN_add_fnbody;   /* proc value of non-global proc */
A68_515  MNKBTRN_new_fndec;   /* proc value of non-global proc */
A68_516  DOKBTRN_unit_body;   /* proc value of non-global proc */
A68_518  CPKBTRN_reformp;   /* proc value of non-global proc */
A68_541  MELBTRN_arith;   /* proc value of non-global proc */
A68_542  LFLBTRN_non_unit_body;   /* proc value of non-global proc */
A68_280  IGLBTRN;  /* united object - for case conformity */
A68_253 * JGLBTRN_ut;
A68_359  KGLBTRN;  /* clause result */
A68_359  LGLBTRN;  /* avoid structure result */
A68_272 * MGLBTRN_re;
A68_359  NGLBTRN;  /* avoid structure result */
A68_271 * OGLBTRN_ar;
A68_359  PGLBTRN;  /* avoid structure result */
A68_359  QGLBTRN;  /* avoid structure result */
A68_359  RGLBTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec);
 /* line 169: */
 /* line 170: */
 /* line 172: */
if ( (Fdec!=YAAATRN_nilfndec) )
{ 
A_CLOSURE( WDJBTRN_flt, XDJBTRN_flt, YDJBTRN_flt );
(( YDJBTRN_flt * ) ( WDJBTRN_flt.nonlocals )) -> Msg = NL(Msg);
(( YDJBTRN_flt * ) ( WDJBTRN_flt.nonlocals )) -> Fdec = Fdec;
 /* line 176: */
A_CLOSURE( PEJBTRN_sys, QEJBTRN_sys, REJBTRN_sys );
(( REJBTRN_sys * ) ( PEJBTRN_sys.nonlocals )) -> Msg = NL(Msg);
(( REJBTRN_sys * ) ( PEJBTRN_sys.nonlocals )) -> Fdec = Fdec;
 /* line 180: */
 /* line 182: */
MFJBTRN_empty = (-1);
 /* line 184: */
A_CLOSURE( OFJBTRN_get_int, PFJBTRN_get_int, QFJBTRN_get_int );
(( QFJBTRN_get_int * ) ( OFJBTRN_get_int.nonlocals )) -> MFJBTRN_empty = MFJBTRN_empty;
(( QFJBTRN_get_int * ) ( OFJBTRN_get_int.nonlocals )) -> Msg = NL(Msg);
 /* line 194: */
 /* line 196: */
VFJBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 197: */
WFJBTRN_n_translations = VFJBTRN_nametypes.upb;
 /* line 198: */
A_CLOSURE( YFJBTRN_generator, ZFJBTRN_generator, AGJBTRN_generator );
(( AGJBTRN_generator * ) ( YFJBTRN_generator.nonlocals )) -> WFJBTRN_n_translations = WFJBTRN_n_translations;
A_CALLPROC(YFJBTRN_generator,(A68_TRUE, &EGJBTRN),(A68_TRUE, &EGJBTRN,(YFJBTRN_generator).nonlocals));
DGJBTRN_translations = EGJBTRN;
 /* line 199: */
A_CLOSURE( GGJBTRN_generator, HGJBTRN_generator, IGJBTRN_generator );
(( IGJBTRN_generator * ) ( GGJBTRN_generator.nonlocals )) -> WFJBTRN_n_translations = WFJBTRN_n_translations;
A_CALLPROC(GGJBTRN_generator,(A68_TRUE, &MGJBTRN),(A68_TRUE, &MGJBTRN,(GGJBTRN_generator).nonlocals));
LGJBTRN_var_init = MGJBTRN;
 /* line 200: */
PGJBTRN = LGJBTRN_var_init.upb -1;
if ( PGJBTRN != DGJBTRN_translations.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
NGJBTRN_v = LGJBTRN_var_init.data;
OGJBTRN_tr = DGJBTRN_translations.data;
for (;PGJBTRN-- >= 0;
(NGJBTRN_v++
,OGJBTRN_tr++
) )
{
(*OGJBTRN_tr) = (-1);
(*NGJBTRN_v) = A68_TRUE;
}
 /* line 202: */
 /* line 203: */
A_CLOSURE( RGJBTRN_generator, SGJBTRN_generator, TGJBTRN_generator );
(( TGJBTRN_generator * ) ( RGJBTRN_generator.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
A_CALLPROC(RGJBTRN_generator,(A68_FALSE, &XGJBTRN),(A68_FALSE, &XGJBTRN,(RGJBTRN_generator).nonlocals));
WGJBTRN_nametable = XGJBTRN;
 /* line 204: */
YGJBTRN_illegalt = IFAATRN_maketname((-9999));
 /* line 205: */
AHJBTRN = WGJBTRN_nametable.upb -1;
ZGJBTRN_nt = WGJBTRN_nametable.data;
for (;AHJBTRN-- >= 0;
(ZGJBTRN_nt++
) )
{
BHJBTRN.Name = TTCAOST_nullid;
BHJBTRN.Type = A_UNITE(CHJBTRN,mode1,1,YGJBTRN_illegalt);
BHJBTRN.Attr = A_UNITE(DHJBTRN,mode5,5,(&ZHAATRN_attrnull));
(*ZGJBTRN_nt) = BHJBTRN;
}
 /* line 209: */
A_CLOSURE( FHJBTRN_generator, GHJBTRN_generator, HHJBTRN_generator );
(( HHJBTRN_generator * ) ( FHJBTRN_generator.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
A_CALLPROC(FHJBTRN_generator,(A68_FALSE, &LHJBTRN),(A68_FALSE, &LHJBTRN,(FHJBTRN_generator).nonlocals));
KHJBTRN_lettable = LHJBTRN;
 /* line 210: */
NHJBTRN = KHJBTRN_lettable.upb -1;
MHJBTRN_nl = KHJBTRN_lettable.data;
for (;NHJBTRN-- >= 0;
(MHJBTRN_nl++
) )
{
(*MHJBTRN_nl) = (A68_242 *)A68_NIL;
}
 /* line 211: */
OHJBTRN_n_names = 0;
 /* line 214: */
 /* line 215: */
 /* line 216: */
A_CLOSURE( PHJBTRN_allocate_name, QHJBTRN_allocate_name, RHJBTRN_allocate_name );
(( RHJBTRN_allocate_name * ) ( PHJBTRN_allocate_name.nonlocals )) -> OHJBTRN_n_names = (&OHJBTRN_n_names);
(( RHJBTRN_allocate_name * ) ( PHJBTRN_allocate_name.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( RHJBTRN_allocate_name * ) ( PHJBTRN_allocate_name.nonlocals )) -> KHJBTRN_lettable = (&KHJBTRN_lettable);
(( RHJBTRN_allocate_name * ) ( PHJBTRN_allocate_name.nonlocals )) -> YGJBTRN_illegalt = YGJBTRN_illegalt;
 /* line 232: */
A_CLOSURE( DJJBTRN_add_nametype, EJJBTRN_add_nametype, FJJBTRN_add_nametype );
(( FJJBTRN_add_nametype * ) ( DJJBTRN_add_nametype.nonlocals )) -> PHJBTRN_allocate_name = PHJBTRN_allocate_name;
(( FJJBTRN_add_nametype * ) ( DJJBTRN_add_nametype.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( FJJBTRN_add_nametype * ) ( DJJBTRN_add_nametype.nonlocals )) -> DGJBTRN_translations = DGJBTRN_translations;
 /* line 245: */
MJJBTRN_series = SAAATRN_nilseries;
 /* line 246: */
NJJBTRN_seriesptr = (&MJJBTRN_series);
 /* line 247: */
OJJBTRN_have_series = A68_FALSE;
 /* line 249: */
A_CLOSURE( QJJBTRN_add_step, RJJBTRN_add_step, SJJBTRN_add_step );
(( SJJBTRN_add_step * ) ( QJJBTRN_add_step.nonlocals )) -> NJJBTRN_seriesptr = (&NJJBTRN_seriesptr);
(( SJJBTRN_add_step * ) ( QJJBTRN_add_step.nonlocals )) -> OJJBTRN_have_series = (&OJJBTRN_have_series);
 /* line 258: */
A_CLOSURE( XJJBTRN_make_let, YJJBTRN_make_let, ZJJBTRN_make_let );
(( ZJJBTRN_make_let * ) ( XJJBTRN_make_let.nonlocals )) -> QJJBTRN_add_step = QJJBTRN_add_step;
(( ZJJBTRN_make_let * ) ( XJJBTRN_make_let.nonlocals )) -> KHJBTRN_lettable = (&KHJBTRN_lettable);
 /* line 262: */
A_CLOSURE( KKJBTRN_make_uname, LKJBTRN_make_uname, MKJBTRN_make_uname );
(( MKJBTRN_make_uname * ) ( KKJBTRN_make_uname.nonlocals )) -> DJJBTRN_add_nametype = DJJBTRN_add_nametype;
(( MKJBTRN_make_uname * ) ( KKJBTRN_make_uname.nonlocals )) -> XJJBTRN_make_let = XJJBTRN_make_let;
 /* line 271: */
A_CLOSURE( WKJBTRN_fill_uname, XKJBTRN_fill_uname, YKJBTRN_fill_uname );
(( YKJBTRN_fill_uname * ) ( WKJBTRN_fill_uname.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( YKJBTRN_fill_uname * ) ( WKJBTRN_fill_uname.nonlocals )) -> XJJBTRN_make_let = XJJBTRN_make_let;
 /* line 283: */
BLJBTRN_n_calls = 0;
CLJBTRN_n_multilets = 0;
DLJBTRN_n_prims = 0;
 /* line 285: */
 /* line 286: */
A_CLOSURE( ELJBTRN_call_name, FLJBTRN_call_name, GLJBTRN_call_name );
(( GLJBTRN_call_name * ) ( ELJBTRN_call_name.nonlocals )) -> VAJBTRN_make_name = NL(VAJBTRN_make_name);
(( GLJBTRN_call_name * ) ( ELJBTRN_call_name.nonlocals )) -> NAJBTRN_call_names = NL(NAJBTRN_call_names);
(( GLJBTRN_call_name * ) ( ELJBTRN_call_name.nonlocals )) -> BLJBTRN_n_calls = (&BLJBTRN_n_calls);
 /* line 288: */
 /* line 289: */
A_CLOSURE( LLJBTRN_multilet_name, MLJBTRN_multilet_name, NLJBTRN_multilet_name );
(( NLJBTRN_multilet_name * ) ( LLJBTRN_multilet_name.nonlocals )) -> VAJBTRN_make_name = NL(VAJBTRN_make_name);
(( NLJBTRN_multilet_name * ) ( LLJBTRN_multilet_name.nonlocals )) -> OAJBTRN_multilet_names = NL(OAJBTRN_multilet_names);
(( NLJBTRN_multilet_name * ) ( LLJBTRN_multilet_name.nonlocals )) -> CLJBTRN_n_multilets = (&CLJBTRN_n_multilets);
 /* line 291: */
 /* line 292: */
A_CLOSURE( SLJBTRN_prims_name, TLJBTRN_prims_name, ULJBTRN_prims_name );
(( ULJBTRN_prims_name * ) ( SLJBTRN_prims_name.nonlocals )) -> VAJBTRN_make_name = NL(VAJBTRN_make_name);
(( ULJBTRN_prims_name * ) ( SLJBTRN_prims_name.nonlocals )) -> PAJBTRN_prims_names = NL(PAJBTRN_prims_names);
(( ULJBTRN_prims_name * ) ( SLJBTRN_prims_name.nonlocals )) -> DLJBTRN_n_prims = (&DLJBTRN_n_prims);
 /* line 295: */
 /* line 297: */
A_CLOSURE( CMJBTRN_look_for_instance, DMJBTRN_look_for_instance, EMJBTRN_look_for_instance );
(( EMJBTRN_look_for_instance * ) ( CMJBTRN_look_for_instance.nonlocals )) -> ZLJBTRN_has_instance = (&ZLJBTRN_has_instance);
 /* line 305: */
 /* line 306: */
NMJBTRN = CMJBTRN_look_for_instance ;
LMJBTRN.data[0] = A_UNITE(MMJBTRN,mode19,19,NMJBTRN);
 /* line 307: */
PMJBTRN.fn.fn_global = DWLATRN_null_attr;
PMJBTRN.nonlocals = A68_NIL;
LMJBTRN.data[1] = A_UNITE(OMJBTRN,mode1,1,PMJBTRN);
RMJBTRN.fn.fn_global = IWLATRN_null_formula;
RMJBTRN.nonlocals = A68_NIL;
LMJBTRN.data[2] = A_UNITE(QMJBTRN,mode4,4,RMJBTRN);
 /* line 308: */
TMJBTRN.fn.fn_global = NWLATRN_null_type;
TMJBTRN.nonlocals = A68_NIL;
LMJBTRN.data[3] = A_UNITE(SMJBTRN,mode10,10,TMJBTRN);
VMJBTRN_has_named = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(UMJBTRN,LMJBTRN,4,A68_407 ));
 /* line 310: */
A_CLOSURE( XMJBTRN_unit_has_named, YMJBTRN_unit_has_named, ZMJBTRN_unit_has_named );
(( ZMJBTRN_unit_has_named * ) ( XMJBTRN_unit_has_named.nonlocals )) -> ZLJBTRN_has_instance = (&ZLJBTRN_has_instance);
(( ZMJBTRN_unit_has_named * ) ( XMJBTRN_unit_has_named.nonlocals )) -> CMJBTRN_look_for_instance = CMJBTRN_look_for_instance;
(( ZMJBTRN_unit_has_named * ) ( XMJBTRN_unit_has_named.nonlocals )) -> VMJBTRN_has_named = VMJBTRN_has_named;
 /* line 319: */
A_CLOSURE( FNJBTRN_uminst, GNJBTRN_uminst, HNJBTRN_uminst );
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> JZIBTRN_not_nameinst = NL(JZIBTRN_not_nameinst);
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> Tprocs = Tprocs;
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> UBJBTRN_null_uname = NL(UBJBTRN_null_uname);
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> PHJBTRN_allocate_name = PHJBTRN_allocate_name;
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> ELJBTRN_call_name = ELJBTRN_call_name;
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> Fdec = Fdec;
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> BCJBTRN_env = NL(BCJBTRN_env);
(( HNJBTRN_uminst * ) ( FNJBTRN_uminst.nonlocals )) -> WKJBTRN_fill_uname = WKJBTRN_fill_uname;
 /* line 340: */
A_CLOSURE( DOJBTRN_udinst, EOJBTRN_udinst, FOJBTRN_udinst );
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> JZIBTRN_not_nameinst = NL(JZIBTRN_not_nameinst);
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> Tprocs = Tprocs;
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> XMJBTRN_unit_has_named = XMJBTRN_unit_has_named;
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> UBJBTRN_null_uname = NL(UBJBTRN_null_uname);
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> PHJBTRN_allocate_name = PHJBTRN_allocate_name;
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> ELJBTRN_call_name = ELJBTRN_call_name;
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> Fdec = Fdec;
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> BCJBTRN_env = NL(BCJBTRN_env);
(( FOJBTRN_udinst * ) ( DOJBTRN_udinst.nonlocals )) -> WKJBTRN_fill_uname = WKJBTRN_fill_uname;
 /* line 366: */
A_CLOSURE( RPJBTRN_uprim, SPJBTRN_uprim, TPJBTRN_uprim );
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> LZIBTRN_not_nameprim = NL(LZIBTRN_not_nameprim);
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> Tprocs = Tprocs;
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> UBJBTRN_null_uname = NL(UBJBTRN_null_uname);
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> PHJBTRN_allocate_name = PHJBTRN_allocate_name;
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> SLJBTRN_prims_name = SLJBTRN_prims_name;
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> Fdec = Fdec;
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> BCJBTRN_env = NL(BCJBTRN_env);
(( TPJBTRN_uprim * ) ( RPJBTRN_uprim.nonlocals )) -> WKJBTRN_fill_uname = WKJBTRN_fill_uname;
 /* line 387: */
A_CLOSURE( MQJBTRN_unit, NQJBTRN_unit, OQJBTRN_unit );
(( OQJBTRN_unit * ) ( MQJBTRN_unit.nonlocals )) -> DGJBTRN_translations = DGJBTRN_translations;
(( OQJBTRN_unit * ) ( MQJBTRN_unit.nonlocals )) -> RPJBTRN_uprim = RPJBTRN_uprim;
(( OQJBTRN_unit * ) ( MQJBTRN_unit.nonlocals )) -> FNJBTRN_uminst = FNJBTRN_uminst;
(( OQJBTRN_unit * ) ( MQJBTRN_unit.nonlocals )) -> DOJBTRN_udinst = DOJBTRN_udinst;
 /* line 449: */
A_CLOSURE( XRJBTRN_simplify_units, YRJBTRN_simplify_units, ZRJBTRN_simplify_units );
(( ZRJBTRN_simplify_units * ) ( XRJBTRN_simplify_units.nonlocals )) -> OHJBTRN_n_names = (&OHJBTRN_n_names);
(( ZRJBTRN_simplify_units * ) ( XRJBTRN_simplify_units.nonlocals )) -> KHJBTRN_lettable = (&KHJBTRN_lettable);
(( ZRJBTRN_simplify_units * ) ( XRJBTRN_simplify_units.nonlocals )) -> DZIBTRN_generated_names = NL(DZIBTRN_generated_names);
(( ZRJBTRN_simplify_units * ) ( XRJBTRN_simplify_units.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
(( ZRJBTRN_simplify_units * ) ( XRJBTRN_simplify_units.nonlocals )) -> FZIBTRN_not_simplified = NL(FZIBTRN_not_simplified);
 /* line 652: */
A_CLOSURE( UAKBTRN_declaration, VAKBTRN_declaration, WAKBTRN_declaration );
(( WAKBTRN_declaration * ) ( UAKBTRN_declaration.nonlocals )) -> BCJBTRN_env = NL(BCJBTRN_env);
(( WAKBTRN_declaration * ) ( UAKBTRN_declaration.nonlocals )) -> XCJBTRN_replace_fndec = NL(XCJBTRN_replace_fndec);
(( WAKBTRN_declaration * ) ( UAKBTRN_declaration.nonlocals )) -> RDJBTRN_fndec = NL(RDJBTRN_fndec);
(( WAKBTRN_declaration * ) ( UAKBTRN_declaration.nonlocals )) -> QJJBTRN_add_step = QJJBTRN_add_step;
 /* line 675: */
A_CLOSURE( QBKBTRN_let, RBKBTRN_let, SBKBTRN_let );
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> FNJBTRN_uminst = FNJBTRN_uminst;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> DOJBTRN_udinst = DOJBTRN_udinst;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> RPJBTRN_uprim = RPJBTRN_uprim;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> WKJBTRN_fill_uname = WKJBTRN_fill_uname;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> DGJBTRN_translations = DGJBTRN_translations;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> PEJBTRN_sys = PEJBTRN_sys;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> PHJBTRN_allocate_name = PHJBTRN_allocate_name;
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> UBJBTRN_null_uname = NL(UBJBTRN_null_uname);
(( SBKBTRN_let * ) ( QBKBTRN_let.nonlocals )) -> LLJBTRN_multilet_name = LLJBTRN_multilet_name;
 /* line 770: */
A_CLOSURE( NEKBTRN_make, OEKBTRN_make, PEKBTRN_make );
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> JDJBTRN_output_type = NL(JDJBTRN_output_type);
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> KKJBTRN_make_uname = KKJBTRN_make_uname;
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> ELJBTRN_call_name = ELJBTRN_call_name;
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> OFJBTRN_get_int = OFJBTRN_get_int;
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> DJJBTRN_add_nametype = DJJBTRN_add_nametype;
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> BLJBTRN_n_calls = (&BLJBTRN_n_calls);
(( PEKBTRN_make * ) ( NEKBTRN_make.nonlocals )) -> XJJBTRN_make_let = XJJBTRN_make_let;
 /* line 820: */
A_CLOSURE( KGKBTRN_join, LGKBTRN_join, MGKBTRN_join );
(( MGKBTRN_join * ) ( KGKBTRN_join.nonlocals )) -> DGJBTRN_translations = DGJBTRN_translations;
(( MGKBTRN_join * ) ( KGKBTRN_join.nonlocals )) -> OFJBTRN_get_int = OFJBTRN_get_int;
(( MGKBTRN_join * ) ( KGKBTRN_join.nonlocals )) -> PEJBTRN_sys = PEJBTRN_sys;
(( MGKBTRN_join * ) ( KGKBTRN_join.nonlocals )) -> KHJBTRN_lettable = (&KHJBTRN_lettable);
(( MGKBTRN_join * ) ( KGKBTRN_join.nonlocals )) -> WDJBTRN_flt = WDJBTRN_flt;
 /* line 870: */
A_CLOSURE( KIKBTRN_step, LIKBTRN_step, MIKBTRN_step );
(( MIKBTRN_step * ) ( KIKBTRN_step.nonlocals )) -> UAKBTRN_declaration = UAKBTRN_declaration;
(( MIKBTRN_step * ) ( KIKBTRN_step.nonlocals )) -> QBKBTRN_let = QBKBTRN_let;
(( MIKBTRN_step * ) ( KIKBTRN_step.nonlocals )) -> NEKBTRN_make = NEKBTRN_make;
(( MIKBTRN_step * ) ( KIKBTRN_step.nonlocals )) -> KGKBTRN_join = KGKBTRN_join;
 /* line 885: */
 /* line 887: */
 /* line 888: */
 /* line 889: */
A_CLOSURE( YIKBTRN_check_names, ZIKBTRN_check_names, AJKBTRN_check_names );
(( AJKBTRN_check_names * ) ( YIKBTRN_check_names.nonlocals )) -> KHJBTRN_lettable = (&KHJBTRN_lettable);
(( AJKBTRN_check_names * ) ( YIKBTRN_check_names.nonlocals )) -> OHJBTRN_n_names = (&OHJBTRN_n_names);
(( AJKBTRN_check_names * ) ( YIKBTRN_check_names.nonlocals )) -> WDJBTRN_flt = WDJBTRN_flt;
(( AJKBTRN_check_names * ) ( YIKBTRN_check_names.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( AJKBTRN_check_names * ) ( YIKBTRN_check_names.nonlocals )) -> YGJBTRN_illegalt = YGJBTRN_illegalt;
 /* line 908: */
A_CLOSURE( KKKBTRN_process_iospec, LKKBTRN_process_iospec, MKKBTRN_process_iospec );
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> PHJBTRN_allocate_name = PHJBTRN_allocate_name;
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> DJJBTRN_add_nametype = DJJBTRN_add_nametype;
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> XJJBTRN_make_let = XJJBTRN_make_let;
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> DAJBTRN_input_name = NL(DAJBTRN_input_name);
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> DGJBTRN_translations = DGJBTRN_translations;
(( MKKBTRN_process_iospec * ) ( KKKBTRN_process_iospec.nonlocals )) -> NZIBTRN_name_input = NL(NZIBTRN_name_input);
 /* line 978: */
A_CLOSURE( YMKBTRN_add_fnbody, ZMKBTRN_add_fnbody, ANKBTRN_add_fnbody );
(( ANKBTRN_add_fnbody * ) ( YMKBTRN_add_fnbody.nonlocals )) -> FCJBTRN_add_fndec = NL(FCJBTRN_add_fndec);
(( ANKBTRN_add_fnbody * ) ( YMKBTRN_add_fnbody.nonlocals )) -> Fdec = Fdec;
(( ANKBTRN_add_fnbody * ) ( YMKBTRN_add_fnbody.nonlocals )) -> QJJBTRN_add_step = QJJBTRN_add_step;
 /* line 1006: */
A_CLOSURE( MNKBTRN_new_fndec, NNKBTRN_new_fndec, ONKBTRN_new_fndec );
(( ONKBTRN_new_fndec * ) ( MNKBTRN_new_fndec.nonlocals )) -> Fdec = Fdec;
(( ONKBTRN_new_fndec * ) ( MNKBTRN_new_fndec.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( ONKBTRN_new_fndec * ) ( MNKBTRN_new_fndec.nonlocals )) -> OHJBTRN_n_names = (&OHJBTRN_n_names);
(( ONKBTRN_new_fndec * ) ( MNKBTRN_new_fndec.nonlocals )) -> OJJBTRN_have_series = (&OJJBTRN_have_series);
(( ONKBTRN_new_fndec * ) ( MNKBTRN_new_fndec.nonlocals )) -> MJJBTRN_series = (&MJJBTRN_series);
 /* line 1021: */
A_CLOSURE( DOKBTRN_unit_body, EOKBTRN_unit_body, FOKBTRN_unit_body );
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> KIKBTRN_step = KIKBTRN_step;
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> MQJBTRN_unit = MQJBTRN_unit;
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> KKKBTRN_process_iospec = KKKBTRN_process_iospec;
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> Fdec = Fdec;
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> YIKBTRN_check_names = YIKBTRN_check_names;
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> MNKBTRN_new_fndec = MNKBTRN_new_fndec;
(( FOKBTRN_unit_body * ) ( DOKBTRN_unit_body.nonlocals )) -> XRJBTRN_simplify_units = XRJBTRN_simplify_units;
 /* line 1035: */
A_CLOSURE( CPKBTRN_reformp, DPKBTRN_reformp, EPKBTRN_reformp );
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> BCJBTRN_env = NL(BCJBTRN_env);
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> HZIBTRN_not_adjacent = NL(HZIBTRN_not_adjacent);
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> ZZIBTRN_string_to_row = NL(ZZIBTRN_string_to_row);
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> VZIBTRN_row_to_string = NL(VZIBTRN_row_to_string);
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> YMKBTRN_add_fnbody = YMKBTRN_add_fnbody;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> ELJBTRN_call_name = ELJBTRN_call_name;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> DJJBTRN_add_nametype = DJJBTRN_add_nametype;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> XJJBTRN_make_let = XJJBTRN_make_let;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> KKKBTRN_process_iospec = KKKBTRN_process_iospec;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> Fdec = Fdec;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> YIKBTRN_check_names = YIKBTRN_check_names;
(( EPKBTRN_reformp * ) ( CPKBTRN_reformp.nonlocals )) -> MNKBTRN_new_fndec = MNKBTRN_new_fndec;
 /* line 1475: */
A_CLOSURE( MELBTRN_arith, NELBTRN_arith, OELBTRN_arith );
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> KKKBTRN_process_iospec = KKKBTRN_process_iospec;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> Fdec = Fdec;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> YMKBTRN_add_fnbody = YMKBTRN_add_fnbody;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> VAJBTRN_make_name = NL(VAJBTRN_make_name);
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> RAJBTRN_fnname_names = NL(RAJBTRN_fnname_names);
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> RZIBTRN_dummy_fnname = NL(RZIBTRN_dummy_fnname);
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> ODJBTRN_n_fnnames = NL(ODJBTRN_n_fnnames);
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> VFJBTRN_nametypes = VFJBTRN_nametypes;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> MNKBTRN_new_fndec = MNKBTRN_new_fndec;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> KKJBTRN_make_uname = KKJBTRN_make_uname;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> ELJBTRN_call_name = ELJBTRN_call_name;
(( OELBTRN_arith * ) ( MELBTRN_arith.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
 /* line 1497: */
A_CLOSURE( LFLBTRN_non_unit_body, MFLBTRN_non_unit_body, NFLBTRN_non_unit_body );
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> KKKBTRN_process_iospec = KKKBTRN_process_iospec;
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> Fdec = Fdec;
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> YMKBTRN_add_fnbody = YMKBTRN_add_fnbody;
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> VAJBTRN_make_name = NL(VAJBTRN_make_name);
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> RAJBTRN_fnname_names = NL(RAJBTRN_fnname_names);
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> RZIBTRN_dummy_fnname = NL(RZIBTRN_dummy_fnname);
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> ODJBTRN_n_fnnames = NL(ODJBTRN_n_fnnames);
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> WGJBTRN_nametable = (&WGJBTRN_nametable);
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> MNKBTRN_new_fndec = MNKBTRN_new_fndec;
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> KKJBTRN_make_uname = KKJBTRN_make_uname;
(( NFLBTRN_non_unit_body * ) ( LFLBTRN_non_unit_body.nonlocals )) -> ELJBTRN_call_name = ELJBTRN_call_name;
 /* line 1519: */
 /* line 1520: */
IGLBTRN = (*(&(Fdec->Fnbody))) ;
switch ( IGLBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE208)  */
JGLBTRN_ut = (IGLBTRN.data.mode1);
 /* line 1521: */
 /* line 1522: */
A_CALLPROC(DOKBTRN_unit_body,(JGLBTRN_ut, Tprocs, &LGLBTRN),(JGLBTRN_ut, Tprocs, &LGLBTRN,(DOKBTRN_unit_body).nonlocals));
KGLBTRN = LGLBTRN;
break;
case 4: /* REF STRUCT(INT)  */
MGLBTRN_re = (IGLBTRN.data.mode4);
 /* line 1523: */
 /* line 1524: */
A_CALLPROC(CPKBTRN_reformp,(MGLBTRN_re, Tprocs, &NGLBTRN),(MGLBTRN_re, Tprocs, &NGLBTRN,(CPKBTRN_reformp).nonlocals));
KGLBTRN = NGLBTRN;
break;
case 3: /* REF STRUCT(MODE170)  */
OGLBTRN_ar = (IGLBTRN.data.mode3);
 /* line 1525: */
 /* line 1526: */
A_CALLPROC(MELBTRN_arith,(OGLBTRN_ar, &PGLBTRN),(OGLBTRN_ar, &PGLBTRN,(MELBTRN_arith).nonlocals));
KGLBTRN = PGLBTRN;
break;
default: 
 /* line 1527: */
 /* line 1528: */
A_CALLPROC(LFLBTRN_non_unit_body,((*(&(Fdec->Fnbody))), &QGLBTRN),((*(&(Fdec->Fnbody))), &QGLBTRN,(LFLBTRN_non_unit_body).nonlocals));
KGLBTRN = QGLBTRN;
break;
} 
} 
else
{ 
RGLBTRN.F = Fdec;
 /* line 1529: */
RGLBTRN.C = A68_FALSE;
KGLBTRN = RGLBTRN;
} 
A_PROC_EXIT(fndec);
*ReturnedValue = (KGLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HAJBTRN_generator(A68_BOOL  FAJBTRN_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((IAJBTRN_generator *)NonLocals)->x)
{ 
A68_102  JAJBTRN;  /* clause result */
A68_102  KAJBTRN;  /* OPERATORS - dynamic generator */
{ 
KAJBTRN.upb = 0 ;
( FAJBTRN_anonymous? A_VLOC(A68_VC ,KAJBTRN): A_VHEAP(A68_VC ,KAJBTRN) );
JAJBTRN = KAJBTRN;
} 
*ReturnedValue = (JAJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WAJBTRN_make_name(A68_102 * Table, A68_VC  Name, A68_INT  Index, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XAJBTRN_make_name *)NonLocals)->x)
{ 
A68_460  ZAJBTRN_generator;   /* proc value of non-global proc */
A68_102  EBJBTRN;  /* avoid structure result */
A68_102  FBJBTRN_new;
A68_102  GBJBTRN;  /* OPERATORS - trim index */
A68_102  HBJBTRN;  /* YIELD */
A68_VC * IBJBTRN_name;
A68_102  JBJBTRN;  /* OPERATORS - trim index */
A68_102  KBJBTRN;  /* forall yield */
A68_INT  LBJBTRN;  /* forall loop counter */
A68_VC  MBJBTRN;  /* clause result */
A68_VC  NBJBTRN;  /* avoid structure result */
A68_VC * OBJBTRN_id;
A68_462  PBJBTRN;  /* collateral clause result */
A68_52  QBJBTRN;  /* OPERATORS - mode -> union mode */
A68_52  RBJBTRN;  /* OPERATORS - mode -> union mode */
A68_85  SBJBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  TBJBTRN;  /* avoid structure result */
A_PROC_ENTRY(make_name);
 /* line 113: */
 /* line 114: */
if ( (Index>(*Table).upb) )
{ 
A_CLOSURE( ZAJBTRN_generator, ABJBTRN_generator, BBJBTRN_generator );
(( BBJBTRN_generator * ) ( ZAJBTRN_generator.nonlocals )) -> Table = Table;
A_CALLPROC(ZAJBTRN_generator,(A68_FALSE, &EBJBTRN),(A68_FALSE, &EBJBTRN,(ZAJBTRN_generator).nonlocals));
FBJBTRN_new = EBJBTRN;
 /* line 115: */
HBJBTRN = A_VTRIM(GBJBTRN,(FBJBTRN_new),A_VTSCRIPT(&(GBJBTRN.upb),(FBJBTRN_new).upb,1,(*Table).upb)) ;
A_VASSIGN2((*Table),HBJBTRN,A68_VC );
 /* line 116: */
KBJBTRN = A_VTRIM(JBJBTRN,(FBJBTRN_new),A_VTSCRIPT(&(JBJBTRN.upb),(FBJBTRN_new).upb,((*Table).upb+1),(FBJBTRN_new).upb)) ;
LBJBTRN = KBJBTRN.upb -1;
IBJBTRN_name = KBJBTRN.data;
for (;LBJBTRN-- >= 0;
(IBJBTRN_name++
) )
{
(*IBJBTRN_name) = YNAAOSL_nilstr;
}
 /* line 117: */
(*Table) = FBJBTRN_new;
 /* line 118: */
 /* line 119: */
A_CALLPROC(NL(VAJBTRN_make_name),(Table, Name, Index, &NBJBTRN),(Table, Name, Index, &NBJBTRN,(NL(VAJBTRN_make_name)).nonlocals));
MBJBTRN = NBJBTRN;
} 
else
{ 
OBJBTRN_id = (&A_VINDEX((*Table),Index));
 /* line 120: */
 /* line 121: */
if ( A_VSTRUCTCOMP((*OBJBTRN_id),YNAAOSL_nilstr) )
{ 
PBJBTRN.data[0] = A_UNITE(QBJBTRN,mode7,7,Name);
PBJBTRN.data[1] = A_UNITE(RBJBTRN,mode1,1,Index);
 /* line 122: */
UJBAOSL_oneline( A_HISVEC(SBJBTRN,PBJBTRN,2,A68_52 ), &TBJBTRN );
(*OBJBTRN_id) = TBJBTRN;
} 
 /* line 123: */
 /* line 124: */
MBJBTRN = (*OBJBTRN_id);
} 
A_PROC_EXIT(make_name);
*ReturnedValue = (MBJBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZBJBTRN_transform_outerfn(A68_293  Outer, A68_362 * Tprocs, A68_360  *ReturnedValue, void *NonLocals)
#define NL(x) (((ACJBTRN_transform_outerfn *)NonLocals)->x)
{ 
A68_287 * BCJBTRN_env;
A68_292 * CCJBTRN_fns;
A68_BOOL  DCJBTRN_newdec;
A68_463  FCJBTRN_add_fndec;   /* proc value of non-global proc */
A68_465  XCJBTRN_replace_fndec;   /* proc value of non-global proc */
A68_466  JDJBTRN_output_type;   /* proc value of non-global proc */
A68_INT  ODJBTRN_n_fnnames;
A68_402  RDJBTRN_fndec;   /* proc value of non-global proc */
A68_407  SGLBTRN;  /* OPERATORS - mode -> union mode */
A68_402  TGLBTRN;  /* YIELD */
A68_406  UGLBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_362 * VGLBTRN_newtprocs;
A68_284 * WGLBTRN_oldfndec;
A68_359  XGLBTRN;  /* avoid structure result */
A68_359  YGLBTRN_dec;
A68_360  ZGLBTRN;  /* collateral clause result */
A68_360  AHLBTRN;  /* clause result */
A68_360  BHLBTRN;  /* collateral clause result */
A68_360  CHLBTRN;  /* collateral clause result */
A_PROC_ENTRY(transform_outerfn);
 /* line 134: */
 /* line 135: */
{ 
BCJBTRN_env = (A_HEAP(A68_287 ));
(*BCJBTRN_env) = (*Outer.Environ);
 /* line 137: */
CCJBTRN_fns = (&(BCJBTRN_env->Fns));
 /* line 138: */
DCJBTRN_newdec = A68_FALSE;
 /* line 140: */
A_CLOSURE( FCJBTRN_add_fndec, GCJBTRN_add_fndec, HCJBTRN_add_fndec );
(( HCJBTRN_add_fndec * ) ( FCJBTRN_add_fndec.nonlocals )) -> CCJBTRN_fns = CCJBTRN_fns;
(( HCJBTRN_add_fndec * ) ( FCJBTRN_add_fndec.nonlocals )) -> DCJBTRN_newdec = (&DCJBTRN_newdec);
 /* line 150: */
A_CLOSURE( XCJBTRN_replace_fndec, YCJBTRN_replace_fndec, ZCJBTRN_replace_fndec );
(( ZCJBTRN_replace_fndec * ) ( XCJBTRN_replace_fndec.nonlocals )) -> DCJBTRN_newdec = (&DCJBTRN_newdec);
(( ZCJBTRN_replace_fndec * ) ( XCJBTRN_replace_fndec.nonlocals )) -> CCJBTRN_fns = CCJBTRN_fns;
 /* line 159: */
A_CLOSURE( JDJBTRN_output_type, KDJBTRN_output_type, LDJBTRN_output_type );
(( LDJBTRN_output_type * ) ( JDJBTRN_output_type.nonlocals )) -> Outer = Outer;
 /* line 162: */
ODJBTRN_n_fnnames = 0;
 /* line 168: */
A_CLOSURE( RDJBTRN_fndec, SDJBTRN_fndec, TDJBTRN_fndec );
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> Msg = NL(Msg);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> VAJBTRN_make_name = NL(VAJBTRN_make_name);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> NAJBTRN_call_names = NL(NAJBTRN_call_names);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> OAJBTRN_multilet_names = NL(OAJBTRN_multilet_names);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> PAJBTRN_prims_names = NL(PAJBTRN_prims_names);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> JZIBTRN_not_nameinst = NL(JZIBTRN_not_nameinst);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> UBJBTRN_null_uname = NL(UBJBTRN_null_uname);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> BCJBTRN_env = BCJBTRN_env;
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> LZIBTRN_not_nameprim = NL(LZIBTRN_not_nameprim);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> DZIBTRN_generated_names = NL(DZIBTRN_generated_names);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> FZIBTRN_not_simplified = NL(FZIBTRN_not_simplified);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> XCJBTRN_replace_fndec = XCJBTRN_replace_fndec;
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> RDJBTRN_fndec = RDJBTRN_fndec;
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> JDJBTRN_output_type = JDJBTRN_output_type;
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> DAJBTRN_input_name = NL(DAJBTRN_input_name);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> NZIBTRN_name_input = NL(NZIBTRN_name_input);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> FCJBTRN_add_fndec = FCJBTRN_add_fndec;
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> HZIBTRN_not_adjacent = NL(HZIBTRN_not_adjacent);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> ZZIBTRN_string_to_row = NL(ZZIBTRN_string_to_row);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> VZIBTRN_row_to_string = NL(VZIBTRN_row_to_string);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> RAJBTRN_fnname_names = NL(RAJBTRN_fnname_names);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> RZIBTRN_dummy_fnname = NL(RZIBTRN_dummy_fnname);
(( TDJBTRN_fndec * ) ( RDJBTRN_fndec.nonlocals )) -> ODJBTRN_n_fnnames = (&ODJBTRN_n_fnnames);
 /* line 1532: */
TGLBTRN = RDJBTRN_fndec ;
VGLBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HVEC(UGLBTRN,A_UNITE(SGLBTRN,mode40,40,TGLBTRN),A68_407 ));
 /* line 1534: */
 /* line 1535: */
if ( (Outer.Sort==VKAATRN_outerfn) )
{ 
WGLBTRN_oldfndec = CQMATRN_get_outerfn(Outer);
 /* line 1536: */
A_CALLPROC(RDJBTRN_fndec,(WGLBTRN_oldfndec, VGLBTRN_newtprocs, &XGLBTRN),(WGLBTRN_oldfndec, VGLBTRN_newtprocs, &XGLBTRN,(RDJBTRN_fndec).nonlocals));
YGLBTRN_dec = XGLBTRN;
 /* line 1538: */
 /* line 1539: */
if ( YGLBTRN_dec.C )
{ 
A_CALLPROC(XCJBTRN_replace_fndec,(1, YGLBTRN_dec.F),(1, YGLBTRN_dec.F,(XCJBTRN_replace_fndec).nonlocals));
 /* line 1540: */
ZGLBTRN.O.Closureno = Outer.Closureno;
ZGLBTRN.O.Sort = VKAATRN_outerfn;
ZGLBTRN.O.Environ = BCJBTRN_env;
 /* line 1541: */
ZGLBTRN.C = A68_TRUE;
AHLBTRN = ZGLBTRN;
} 
else
{ 
BHLBTRN.O = Outer;
 /* line 1542: */
 /* line 1543: */
BHLBTRN.C = A68_FALSE;
AHLBTRN = BHLBTRN;
} 
} 
else
{ 
CHLBTRN.O = Outer;
 /* line 1544: */
 /* line 1545: */
CHLBTRN.C = A68_FALSE;
AHLBTRN = CHLBTRN;
} 
} 
A_PROC_EXIT(transform_outerfn);
*ReturnedValue = (AHLBTRN);
return;
} 
#undef NL

A68_VOID  RXIBTRN_lets_gennames(A68_439  *ReturnedValue)
{ 
A68_439  SXIBTRN;  /* clause result */
A68_439  TXIBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_gennames);
FCAAOST_makeoptions( 1, &TXIBTRN );
SXIBTRN = TXIBTRN;
A_PROC_EXIT(lets_gennames);
*ReturnedValue = (SXIBTRN);
return;
} 
#undef NL

A68_VOID  UXIBTRN_lets_nosimplify(A68_439  *ReturnedValue)
{ 
A68_439  VXIBTRN;  /* clause result */
A68_439  WXIBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_nosimplify);
FCAAOST_makeoptions( 2, &WXIBTRN );
VXIBTRN = WXIBTRN;
A_PROC_EXIT(lets_nosimplify);
*ReturnedValue = (VXIBTRN);
return;
} 
#undef NL

A68_VOID  XXIBTRN_lets_noadjacent(A68_439  *ReturnedValue)
{ 
A68_439  YXIBTRN;  /* clause result */
A68_439  ZXIBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_noadjacent);
FCAAOST_makeoptions( 3, &ZXIBTRN );
YXIBTRN = ZXIBTRN;
A_PROC_EXIT(lets_noadjacent);
*ReturnedValue = (YXIBTRN);
return;
} 
#undef NL

A68_VOID  AYIBTRN_lets_noinst(A68_439  *ReturnedValue)
{ 
A68_439  BYIBTRN;  /* clause result */
A68_439  CYIBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_noinst);
FCAAOST_makeoptions( 4, &CYIBTRN );
BYIBTRN = CYIBTRN;
A_PROC_EXIT(lets_noinst);
*ReturnedValue = (BYIBTRN);
return;
} 
#undef NL

A68_VOID  DYIBTRN_lets_noprim(A68_439  *ReturnedValue)
{ 
A68_439  EYIBTRN;  /* clause result */
A68_439  FYIBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_noprim);
FCAAOST_makeoptions( 5, &FYIBTRN );
EYIBTRN = FYIBTRN;
A_PROC_EXIT(lets_noprim);
*ReturnedValue = (EYIBTRN);
return;
} 
#undef NL

A68_VOID  GYIBTRN_lets_nameinputs(A68_439  *ReturnedValue)
{ 
A68_439  HYIBTRN;  /* clause result */
A68_439  IYIBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_nameinputs);
FCAAOST_makeoptions( 6, &IYIBTRN );
HYIBTRN = IYIBTRN;
A_PROC_EXIT(lets_nameinputs);
*ReturnedValue = (HYIBTRN);
return;
} 
#undef NL
 /* line 88: */

A68_VOID  BZIBTRN_lets_transform(A68_297 * Closure, A68_439  Options, A68_97  Msg, A68_361  *ReturnedValue)
{ 
A68_439  CZIBTRN;  /* avoid structure result */
A68_BOOL  DZIBTRN_generated_names;
A68_439  EZIBTRN;  /* avoid structure result */
A68_BOOL  FZIBTRN_not_simplified;
A68_439  GZIBTRN;  /* avoid structure result */
A68_BOOL  HZIBTRN_not_adjacent;
A68_439  IZIBTRN;  /* avoid structure result */
A68_BOOL  JZIBTRN_not_nameinst;
A68_439  KZIBTRN;  /* avoid structure result */
A68_BOOL  LZIBTRN_not_nameprim;
A68_439  MZIBTRN;  /* avoid structure result */
A68_BOOL  NZIBTRN_name_input;
A68_VC  QZIBTRN;  /* avoid structure result */
A68_VC  RZIBTRN_dummy_fnname;
A68_VC  UZIBTRN;  /* avoid structure result */
A68_VC  VZIBTRN_row_to_string;
A68_VC  YZIBTRN;  /* avoid structure result */
A68_VC  ZZIBTRN_string_to_row;
A68_VC  CAJBTRN;  /* avoid structure result */
A68_VC  DAJBTRN_input_name;
A68_460  GAJBTRN_generator;   /* proc value of non-global proc */
A68_102  LAJBTRN;  /* avoid structure result */
A68_102  MAJBTRN_nullrvc;
A68_102  NAJBTRN_call_names;
A68_102  OAJBTRN_multilet_names;
A68_102  PAJBTRN_prims_names;
A68_102  QAJBTRN_unname_names;
A68_102  RAJBTRN_fnname_names;
A68_461  VAJBTRN_make_name;   /* proc value of non-global proc */
A68_213 * UBJBTRN_null_uname;
A68_213  VBJBTRN;  /* collateral clause result */
A68_403  YBJBTRN_transform_outerfn;   /* proc value of non-global proc */
A68_407  DHLBTRN;  /* OPERATORS - mode -> union mode */
A68_403  EHLBTRN;  /* YIELD */
A68_406  FHLBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_362 * GHLBTRN_newtprocs;
A68_361  HHLBTRN;  /* clause result */
A68_404  IHLBTRN;  /* CALL */
A68_361  JHLBTRN;  /* avoid structure result */
A_PROC_ENTRY(lets_transform);
 /* line 89: */
 /* line 90: */
{ 
RXIBTRN_lets_gennames(  &CZIBTRN );
DZIBTRN_generated_names = MBAAOST_includes(Options, CZIBTRN);
 /* line 91: */
UXIBTRN_lets_nosimplify(  &EZIBTRN );
FZIBTRN_not_simplified = MBAAOST_includes(Options, EZIBTRN);
 /* line 92: */
XXIBTRN_lets_noadjacent(  &GZIBTRN );
HZIBTRN_not_adjacent = MBAAOST_includes(Options, GZIBTRN);
 /* line 93: */
AYIBTRN_lets_noinst(  &IZIBTRN );
JZIBTRN_not_nameinst = MBAAOST_includes(Options, IZIBTRN);
 /* line 94: */
DYIBTRN_lets_noprim(  &KZIBTRN );
LZIBTRN_not_nameprim = MBAAOST_includes(Options, KZIBTRN);
 /* line 95: */
GYIBTRN_lets_nameinputs(  &MZIBTRN );
NZIBTRN_name_input = MBAAOST_includes(Options, MZIBTRN);
 /* line 99: */
ZAAAOSI_makervc( PZIBTRN, &QZIBTRN );
RZIBTRN_dummy_fnname = QZIBTRN;
 /* line 100: */
ZAAAOSI_makervc( TZIBTRN, &UZIBTRN );
VZIBTRN_row_to_string = UZIBTRN;
 /* line 101: */
ZAAAOSI_makervc( XZIBTRN, &YZIBTRN );
ZZIBTRN_string_to_row = YZIBTRN;
 /* line 102: */
ZAAAOSI_makervc( BAJBTRN, &CAJBTRN );
DAJBTRN_input_name = CAJBTRN;
 /* line 104: */
A_CLOSURE( GAJBTRN_generator, HAJBTRN_generator, IAJBTRN_generator );
A_CALLPROC(GAJBTRN_generator,(A68_FALSE, &LAJBTRN),(A68_FALSE, &LAJBTRN,(GAJBTRN_generator).nonlocals));
MAJBTRN_nullrvc = LAJBTRN;
 /* line 105: */
NAJBTRN_call_names = MAJBTRN_nullrvc;
 /* line 106: */
OAJBTRN_multilet_names = MAJBTRN_nullrvc;
 /* line 107: */
PAJBTRN_prims_names = MAJBTRN_nullrvc;
 /* line 108: */
QAJBTRN_unname_names = MAJBTRN_nullrvc;
 /* line 109: */
RAJBTRN_fnname_names = MAJBTRN_nullrvc;
 /* line 111: */
A_CLOSURE( VAJBTRN_make_name, WAJBTRN_make_name, XAJBTRN_make_name );
(( XAJBTRN_make_name * ) ( VAJBTRN_make_name.nonlocals )) -> VAJBTRN_make_name = VAJBTRN_make_name;
 /* line 128: */
UBJBTRN_null_uname = (A_HEAP(A68_213 ));
VBJBTRN.Sort = KKAATRN_usource;
VBJBTRN.Nameno = 0;
(*UBJBTRN_null_uname) = VBJBTRN;
 /* line 133: */
A_CLOSURE( YBJBTRN_transform_outerfn, ZBJBTRN_transform_outerfn, ACJBTRN_transform_outerfn );
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> Msg = Msg;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> VAJBTRN_make_name = VAJBTRN_make_name;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> NAJBTRN_call_names = (&NAJBTRN_call_names);
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> OAJBTRN_multilet_names = (&OAJBTRN_multilet_names);
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> PAJBTRN_prims_names = (&PAJBTRN_prims_names);
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> JZIBTRN_not_nameinst = JZIBTRN_not_nameinst;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> UBJBTRN_null_uname = UBJBTRN_null_uname;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> LZIBTRN_not_nameprim = LZIBTRN_not_nameprim;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> DZIBTRN_generated_names = DZIBTRN_generated_names;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> FZIBTRN_not_simplified = FZIBTRN_not_simplified;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> DAJBTRN_input_name = DAJBTRN_input_name;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> NZIBTRN_name_input = NZIBTRN_name_input;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> HZIBTRN_not_adjacent = HZIBTRN_not_adjacent;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> ZZIBTRN_string_to_row = ZZIBTRN_string_to_row;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> VZIBTRN_row_to_string = VZIBTRN_row_to_string;
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> RAJBTRN_fnname_names = (&RAJBTRN_fnname_names);
(( ACJBTRN_transform_outerfn * ) ( YBJBTRN_transform_outerfn.nonlocals )) -> RZIBTRN_dummy_fnname = RZIBTRN_dummy_fnname;
 /* line 1548: */
EHLBTRN = YBJBTRN_transform_outerfn ;
GHLBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(FHLBTRN,A_UNITE(DHLBTRN,mode41,41,EHLBTRN),A68_407 ));
 /* line 1550: */
 /* line 1551: */
 /* line 1554: */
IHLBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(IHLBTRN,(Closure, GHLBTRN_newtprocs, Msg, &JHLBTRN),(Closure, GHLBTRN_newtprocs, Msg, &JHLBTRN,(IHLBTRN).nonlocals));
HHLBTRN = JHLBTRN;
} 
A_PROC_EXIT(lets_transform);
*ReturnedValue = (HHLBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void MXIBTRN(void)   /* initialise DECS lets_transform */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/lets_transform.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/modeprocs.m","./mfiles/transformprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_455  JYIBTRN;  /* collateral clause result */
A68_46  WYIBTRN;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOST();   /* USE options */
HNMATRN();   /* USE modeprocs */
IHJATRN();   /* USE transformprocs */
BAAATRN();   /* USE assmodes */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/lets_transform.a68";
A_config.translation_time = "Tue Apr  4 10:08:20 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LXIBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:08:20 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS lets_transform);
UEAALIB_a68config(LGAALIB_configinfo, QXIBTRN);
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
JYIBTRN.data[0] = LYIBTRN;
 /* line 79: */
JYIBTRN.data[1] = NYIBTRN;
 /* line 80: */
JYIBTRN.data[2] = PYIBTRN;
 /* line 81: */
JYIBTRN.data[3] = RYIBTRN;
 /* line 83: */
JYIBTRN.data[4] = TYIBTRN;
JYIBTRN.data[5] = VYIBTRN;
XYIBTRN_lets_options = A_HISVEC(WYIBTRN,JYIBTRN,6,A68_VC );
 /* line 87: */
 /* line 1556: */
A_PROC_EXIT(DECS lets_transform);
} 
#undef NL
/* end of translation of ./a68files/lets_transform.a68 */
