
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
/* UNAME:YSBBELA */
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
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(BITS)  */
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160) VOID */
struct A68t160 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t158  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(BOOL,MODE158,MODE26)  */

A_PROCEDURE(A68_INT ,A68t161,(A68_INT ),(A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) INT */
struct A68t162{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t165,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t166,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(BITS,BITS) BITS */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ,A68_INT ),(struct A68t168 ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(CHAR) VOID */
struct A68t170 ;

A_PROCEDURE(A68_INT ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) INT */

A_PROCEDURE(A68_CHAR ,A68t170,(void),(void *));
typedef struct A68t170  A68_170 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t171,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t172,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC *),(A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t175,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t176{
struct A68t177 * Database;
A68_VC  Description;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE177,REF MODE26)  */
struct A68t177{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t178 * Df;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE178)  */
A_VECTOR(struct A68t179 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE179 */
struct A68t179{
A68_BITS  Code;
A_PAD_BITS(PAD_37)
A68_INT  First_block;
A_PAD_INT(PAD_38)
A68_INT  First_offset;
A_PAD_INT(PAD_39)
A68_INT  Data_elts;
A_PAD_INT(PAD_40)
A68_INT  Dp_elts;
A_PAD_INT(PAD_41)
A68_INT  Version;
A_PAD_INT(PAD_42)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_43)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t185 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE185 */
struct A68t186{
A68_INT  Block_num;
A_PAD_INT(PAD_44)
A68_INT  Offset;
A_PAD_INT(PAD_45)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT)  */
struct A68t185{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_46)
struct A68t186  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_47)
A68_INT  Dp_elts;
A_PAD_INT(PAD_48)
A68_INT  Code;
A_PAD_INT(PAD_49)
A68_INT  Version;
A_PAD_INT(PAD_50)
A68_INT  Read_size;
A_PAD_INT(PAD_51)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(BOOL,MODE186,INT,INT,INT,INT,INT)  */
struct A68t178{
struct A68t179 * Root;
struct A68t179 * Indirs_dp;
struct A68t179 * Freelist_dp;
struct A68t179 * Pagetable_dp;
struct A68t179 * Append_dp;
struct A68t180  Free_block_dps;
struct A68t180  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t181 * Write_buffer;
A68_VC  Name;
A68_VC  Block_buffer;
A68_INT * Generation;
A68_INT * File_size;
A68_INT * Old_file_size;
A68_INT * Freelist_index;
A68_INT * Current_free;
A68_INT * First_free;
A68_INT * Last_free;
A68_INT * Cbufpos;
A68_INT * Freeblock_ptr;
A68_INT * Freelist_ext_ptr;
A68_INT * Initial_free_block_dps;
A68_INT * Size_of_free_space;
A68_INT * Unusable_bytes;
A68_INT * Appended_data;
A68_INT * Read_transfers;
A68_INT * Write_transfers;
struct A68t32  Freelist;
struct A68t32  Freelist_ext;
struct A68t32  Pagetable_ext;
struct A68t182 * Gc_ptrs;
struct A68t183 * Instore_vars;
struct A68t184  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE180,REF MODE180,REF REF MODE111,REF REF MODE111,REF MODE181,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE182,REF MODE183,REF MODE184,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t181{
A68_VC  Buffer;
struct A68t187 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF MODE187,REF INT,REF INT,REF INT)  */
struct A68t182{
struct A68t186  Old;
struct A68t186  New;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE186,MODE186,REF MODE182)  */
struct A68t183{
A68_INT  Indirection;
A_PAD_INT(PAD_52)
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE183)  */
struct A68t187{
A68_INT  Lwb;
A_PAD_INT(PAD_53)
A68_INT  Upb;
A_PAD_INT(PAD_54)
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT,REF MODE187)  */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t177 *,struct A68t179 ,struct A68t179 ),(struct A68t177 *,struct A68t179 ,struct A68t179 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE177,MODE179,MODE179) BOOL */

A_PROCEDURE(A68_INT ,A68t189,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE177,MODE179) INT */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t177 *,struct A68t179 *),(struct A68t177 *,struct A68t179 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE177) MODE179 */

A_PROCEDURE(struct A68t111 *,A68t191,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t111 *,A68_BOOL ,struct A68t177 *),(struct A68t111 *,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE111,BOOL) MODE177 */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE177) BOOL */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE177,MODE179) VOID */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t177 *,struct A68t179 ,struct A68t97 ),(struct A68t177 *,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE177,MODE179,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t177 *,struct A68t97 ),(struct A68t177 *,struct A68t97 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE177,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t177 *,A68_INT ),(struct A68t177 *,A68_INT ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE177,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t177 *,A68_INT ,struct A68t97 ),(struct A68t177 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE177,INT,MODE97) VOID */

A_PROCEDURE(struct A68t111 *,A68t199,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE177) REF MODE111 */

A_PROCEDURE(A68_INT ,A68t200,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE177) INT */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t176 *,struct A68t179 ),(struct A68t176 *,struct A68t179 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE176,MODE179) BOOL */
struct A68t205{
A68_VC  Rvc;
struct A68t205 * Rest;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE26,REF MODE205)  */
struct A68t206{
struct A68t176  Df;
struct A68t205  Head;
struct A68t205 * Current;
A68_INT  Index;
A_PAD_INT(PAD_55)
A68_INT  Type;
A_PAD_INT(PAD_56)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_57)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE176,MODE205,REF MODE205,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t206 *,A68t207,(struct A68t176 *,struct A68t87 ,A68_INT ),(struct A68t176 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE176,MODE87,INT) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE206) VOID */

A_PROCEDURE(struct A68t206 *,A68t209,(struct A68t176 *,struct A68t179 ),(struct A68t176 *,struct A68t179 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE176,MODE179) REF MODE206 */

A_PROCEDURE(A68_CHAR ,A68t210,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE206) CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t206 *,A68_VC ),(struct A68t206 *,A68_VC ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE206,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE206) BOOL */

A_PROCEDURE(A68_INT ,A68t213,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE206) INT */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t206 *,A68_VC *),(struct A68t206 *,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE206) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t176 *,struct A68t97 ),(struct A68t176 *,struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t176 *,A68_VC ,struct A68t97 ,struct A68t179 *),(struct A68t176 *,A68_VC ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE176,MODE26,MODE97) MODE179 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t176 *,struct A68t180 ,struct A68t97 ,struct A68t179 *),(struct A68t176 *,struct A68t180 ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE176,MODE180,MODE97) MODE179 */

A_PROCEDURE(A68_INT ,A68t218,(struct A68t176 *,struct A68t179 ,struct A68t97 ),(struct A68t176 *,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE176,MODE179,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t97 ),(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE176,REF MODE26,MODE179,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t97 ),(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE176,REF MODE180,MODE179,MODE97) VOID */

A_PROCEDURE(struct A68t206 *,A68t221,(struct A68t176 *,struct A68t87 ),(struct A68t176 *,struct A68t87 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE176,MODE87) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t206 *,struct A68t97 ),(struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE206,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t206 *,struct A68t97 ,struct A68t179 *),(struct A68t206 *,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE206,MODE97) MODE179 */

A_PROCEDURE(A68_INT ,A68t224,(A68_CHAR ,struct A68t206 *,struct A68t97 ),(A68_CHAR ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(CHAR,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ,struct A68t206 *,struct A68t97 ),(A68_VC ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t226,(A68_INT ,struct A68t206 *,struct A68t97 ),(A68_INT ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t227,(A68_VC ,struct A68t206 *,struct A68t97 ),(A68_VC ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE26,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t228,(A68_BOOL ,struct A68t206 *,struct A68t97 ),(A68_BOOL ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(BOOL,REF MODE206,MODE97) INT */
struct A68t229{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_58)
A68_BOOL  Login;
A_PAD_BOOL(PAD_59)
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE229)  */
struct A68t230{
A68_INT  Key;
A_PAD_INT(PAD_60)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_61)
struct A68t32  Version;
struct A68t180  Data;
struct A68t230 * Rest;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE180,REF MODE230)  */
struct A68t231{
A68_INT  Sort;
A_PAD_INT(PAD_62)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_63)
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE231)  */
struct A68t232{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_65)
A68_BOOL  Import;
A_PAD_BOOL(PAD_66)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_67)
A68_INT  Version;
A_PAD_INT(PAD_68)
A68_VC  Il;
struct A68t231 * Uses;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE231)  */
struct A68t233{
struct A68t162  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t179  Info;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE162,REF MODE26,REF MODE26,INT,MODE179)  */
struct A68t234{
struct A68t233  Binding;
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE233,REF MODE234)  */
struct A68t235{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_70)
struct A68t234 * Imports;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,INT,REF MODE234)  */
struct A68t236{
struct A68t235  Region;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE235,REF MODE236)  */
A_VECTOR(struct A68t232 ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] MODE232 */
struct A68t237{
A68_VC  Name;
struct A68t179  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_71)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_72)
struct A68t238  Decls;
struct A68t230 * Declattributes;
struct A68t236 * Regions;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE26,MODE179,BOOL,BOOL,REF MODE238,REF MODE230,REF MODE236)  */
struct A68t239{
struct A68t237  Context;
struct A68t239 * Rest;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE237,REF MODE239)  */
struct A68t240{
A68_VC  Name;
struct A68t111 * File;
struct A68t176 * Discfile;
struct A68t162  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_73)
struct A68t180  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_74)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t229 * Classes;
struct A68t239 * Contexts;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(REF MODE26,REF MODE111,REF MODE176,MODE162,REF MODE26,BOOL,MODE180,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE229,REF MODE239)  */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t240 *),(A68_BOOL ,struct A68t240 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL) MODE240 */
struct A68t242{
struct A68t237 * Context;
struct A68t235 * Region;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE237,REF MODE235)  */
struct A68t243{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_75)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t244,(struct A68t162 ,struct A68t162 ),(struct A68t162 ,struct A68t162 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE162,MODE162) BOOL */

A_PROCEDURE(A68_BOOL ,A68t245,(struct A68t242 ,struct A68t242 ),(struct A68t242 ,struct A68t242 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE242,MODE242) BOOL */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t162 ,A68_VC *),(struct A68t162 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE162) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t242 ,A68_VC *),(struct A68t242 ,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE242) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t242 ,struct A68t162 *),(struct A68t242 ,struct A68t162 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE242) MODE162 */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t237 *,struct A68t97 ),(struct A68t237 *,struct A68t97 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE237,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t250,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t240 *,A68t251,(void),(void *));
typedef struct A68t251  A68_251 ;    /* PROC REF MODE240 */

A_PROCEDURE(struct A68t237 *,A68t252,(A68_VC ),(A68_VC ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE26) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t237 *,A68_VC ,struct A68t242 *),(struct A68t237 *,A68_VC ,struct A68t242 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE237,REF MODE26) MODE242 */

A_PROCEDURE(struct A68t234 *,A68t254,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE242) REF MODE234 */

A_PROCEDURE(struct A68t233 *,A68t255,(struct A68t242 ,A68_VC ),(struct A68t242 ,A68_VC ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE242,REF MODE26) REF MODE233 */

A_PROCEDURE(struct A68t237 *,A68t256,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE26,MODE97) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t237 *,A68_VC ,struct A68t97 ,struct A68t242 *),(struct A68t237 *,A68_VC ,struct A68t97 ,struct A68t242 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE237,REF MODE26,MODE97) MODE242 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t162 ,struct A68t97 ,struct A68t242 *),(struct A68t162 ,struct A68t97 ,struct A68t242 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE162,MODE97) MODE242 */

A_PROCEDURE(struct A68t233 *,A68t259,(struct A68t242 ,A68_VC ,struct A68t97 ),(struct A68t242 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE242,REF MODE26,MODE97) REF MODE233 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t179 *,struct A68t179 *,struct A68t179 *,struct A68t97 ),(struct A68t179 *,struct A68t179 *,struct A68t179 *,struct A68t97 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE179,REF MODE179,REF MODE179,MODE97) VOID */

A_PROCEDURE(struct A68t239 *,A68t263,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE97) REF MODE239 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t238 ,struct A68t97 ,struct A68t179 *),(struct A68t238 ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE238,MODE97) MODE179 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t237 *,struct A68t97 ,struct A68t238 *),(struct A68t237 *,struct A68t97 ,struct A68t238 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE237,MODE97) REF MODE238 */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE238) VOID */

A_PROCEDURE(A68_INT ,A68t267,(struct A68t237 *,A68_VC ,struct A68t97 ),(struct A68t237 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE237,REF MODE26,MODE97) INT */

A_PROCEDURE(struct A68t243 *,A68t268,(struct A68t237 *,A68_INT ),(struct A68t237 *,A68_INT ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE237,INT) REF MODE243 */

A_PROCEDURE(struct A68t243 *,A68t269,(struct A68t242 ,A68_VC ),(struct A68t242 ,A68_VC ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE242,REF MODE26) REF MODE243 */

A_PROCEDURE(A68_VOID ,A68t270,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t176 *,struct A68t270 ,struct A68t97 ),(struct A68t176 *,struct A68t270 ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE176,MODE270,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,struct A68t270 ,struct A68t97 ),(A68_VC ,struct A68t270 ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE270,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t274,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t275,(A68_VC ,struct A68t238 ),(A68_VC ,struct A68t238 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE26,REF MODE238) INT */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t97 ),(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE237,REF MODE238,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t277,(A68_INT ,struct A68t242 *),(A68_INT ,struct A68t242 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(INT) MODE242 */

A_PROCEDURE(A68_INT ,A68t278,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE242) INT */

A_PROCEDURE(A68_INT ,A68t279,(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE242,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t97 ,struct A68t179 *),(struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE97) MODE179 */

A_PROCEDURE(A68_VOID ,A68t281,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE26,MODE26,INT,INT,MODE97) VOID */

A_PROCEDURE(struct A68t229 *,A68t282,(A68_INT ),(A68_INT ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(INT) REF MODE229 */

A_PROCEDURE(A68_VOID ,A68t283,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(BOOL) VOID */
struct A68t285 ;

A_PROCEDURE(A68_BOOL ,A68t284,(struct A68t285 ),(struct A68t285 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE285) BOOL */

A_PROCEDURE(A68_BOOL ,A68t285,(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE26,INT,BOOL,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE26,MODE26,MODE97) VOID */

A_PROCEDURE(A68_INT ,A68t287,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(INT,MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t288,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE26,MODE26,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t289,(A68_VC ,struct A68t179 ,A68_INT ,struct A68t97 ),(A68_VC ,struct A68t179 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE26,MODE179,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(A68_VC ,A68_INT ,struct A68t97 ,struct A68t179 *),(A68_VC ,A68_INT ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE26,INT,MODE97) MODE179 */

A_PROCEDURE(A68_BOOL ,A68t291,(A68_INT ,struct A68t97 ,struct A68t97 ),(A68_INT ,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(INT,MODE97,MODE97) BOOL */
struct A68t292{
A68_INT  Version;
A_PAD_INT(PAD_76)
struct A68t179  Data;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,MODE179)  */

A_PROCEDURE(A68_VOID ,A68t293,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t294,(A68_INT ),(A68_INT ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t230 *,A68t295,(struct A68t237 *,A68_INT ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE237,INT,MODE97) REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t237 *,struct A68t97 ),(struct A68t237 *,struct A68t97 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE237,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t237 *,struct A68t32 ,struct A68t97 ),(struct A68t237 *,struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE237,MODE32,MODE97) VOID */
struct A68t299 ;

A_PROCEDURE(A68_BOOL ,A68t298,(struct A68t237 *,struct A68t299 ,struct A68t97 ),(struct A68t237 *,struct A68t299 ,struct A68t97 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE237,MODE299,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t299,(struct A68t230 *,struct A68t97 ),(struct A68t230 *,struct A68t97 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE230,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t237 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t180 ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t180 ,struct A68t97 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE237,INT,REF MODE32,INT,REF MODE180,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t230 *,A68_INT ,struct A68t292 ,struct A68t97 ),(struct A68t230 *,A68_INT ,struct A68t292 ,struct A68t97 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE230,INT,MODE292,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t230 *,A68_INT ,struct A68t97 ,struct A68t292 *),(struct A68t230 *,A68_INT ,struct A68t97 ,struct A68t292 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE230,INT,MODE97) MODE292 */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t230 *,A68_INT ,struct A68t97 ),(struct A68t230 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE230,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t237 *,A68_INT ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE237,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t306,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t308,(A68_BOOL ,struct A68t180 *),(A68_BOOL ,struct A68t180 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(BOOL) MODE180 */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t242 ,struct A68t97 ),(struct A68t242 ,struct A68t97 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE242,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t310,(struct A68t237 *),(struct A68t237 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE237) BOOL */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE162,MODE97) VOID */
A_ISTRUCT(A68_VC ,2,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(struct A68t179 ,6,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 6 MODE179 */
A_ISTRUCT(A68_CHAR ,5,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,44,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(A68_VOID ,A68t322,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,43,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t237 *,A68_VC ,A68_INT ),(struct A68t237 *,A68_VC ,A68_INT ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE237,REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t237 *,A68_VC ),(struct A68t237 *,A68_VC ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE237,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(struct A68t234 *,A68t327,(struct A68t234 *,A68_BOOL ),(struct A68t234 *,A68_BOOL ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE234,BOOL) REF MODE234 */

A_PROCEDURE(A68_BOOL ,A68t328,(A68_VC ,struct A68t162 ,struct A68t97 ),(A68_VC ,struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE26,MODE162,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t329,(struct A68t242 ,struct A68t179 ,struct A68t179 ,struct A68t97 ),(struct A68t242 ,struct A68t179 ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE242,MODE179,MODE179,MODE97) BOOL */
A_ISTRUCT(A68_VC ,3,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t179 ,struct A68t179 *,struct A68t180 *,struct A68t180 *,struct A68t180 *,struct A68t97 ,struct A68t238 *),(struct A68t179 ,struct A68t179 *,struct A68t180 *,struct A68t180 *,struct A68t180 *,struct A68t97 ,struct A68t238 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE179,REF MODE179,REF REF MODE180,REF REF MODE180,REF REF MODE180,MODE97) REF MODE238 */

A_PROCEDURE(A68_VOID ,A68t332,(A68_BOOL ,struct A68t238 *),(A68_BOOL ,struct A68t238 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(BOOL) MODE238 */

A_PROCEDURE(A68_BOOL ,A68t333,(A68_VC ,struct A68t231 *),(A68_VC ,struct A68t231 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE26,REF MODE231) BOOL */

A_PROCEDURE(A68_BOOL ,A68t334,(struct A68t232 ,struct A68t238 ),(struct A68t232 ,struct A68t238 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE232,REF MODE238) BOOL */
A_ISTRUCT(A68_CHAR ,11,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t237 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t237 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE237,INT,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t237 *,struct A68t238 ,A68_BOOL *,struct A68t97 ,struct A68t32 *),(struct A68t237 *,struct A68t238 ,A68_BOOL *,struct A68t97 ,struct A68t32 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(REF MODE237,REF MODE238,REF BOOL,MODE97) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t237 *,struct A68t238 ,A68_BOOL *,struct A68t32 *,struct A68t97 ,struct A68t238 *),(struct A68t237 *,struct A68t238 ,A68_BOOL *,struct A68t32 *,struct A68t97 ,struct A68t238 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE237,REF MODE238,REF BOOL,REF REF MODE32,MODE97) REF MODE238 */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t237 *,struct A68t238 ,struct A68t97 ),(struct A68t237 *,struct A68t238 ,struct A68t97 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE237,REF MODE238,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t242 ,struct A68t179 ,struct A68t97 ),(struct A68t242 ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE242,MODE179,MODE97) VOID */

A_PROCEDURE(struct A68t236 *,A68t341,(struct A68t236 *),(struct A68t236 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE236) REF MODE236 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t237 *,A68_VC ,struct A68t97 ),(struct A68t237 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE237,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t242 ,A68_VC ,struct A68t97 ),(struct A68t242 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE242,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t344,(struct A68t237 *,A68_INT ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE237,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t242 ,A68_INT ,struct A68t97 ),(struct A68t242 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE242,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t348,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(BOOL) MODE54 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from attrdecls --- */
extern A68_VOID  MZVAELA_introduce_decl_class(A68_VC ,A68_VC ,A68_INT ,struct A68t97 );
extern A68_VOID  JEWAELA_update_declattributes(struct A68t237 *,struct A68t32 ,struct A68t97 );
extern A68_VOID  FGWAELA_merge_declattribute(struct A68t237 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t180 ,struct A68t97 );
extern A68_VOID  CJWAELA_erase_declattributes(struct A68t237 *,A68_INT ,struct A68t97 );
extern A68_VOID  GJWAELA_clear_declattributes(struct A68t237 *,struct A68t97 );
/* --- End of imports from attrdecls --- */


/* --- Imports from attrlevel1 --- */
#define YWOAELA_body_life 3
extern A68_VOID  EBPAELA_introduce_class(A68_VC ,A68_VC ,struct A68t97 );
extern A68_INT  LCPAELA_login_class(A68_VC ,A68_VC ,struct A68t97 );
/* --- End of imports from attrlevel1 --- */


/* --- Imports from libinterface --- */
extern A68_VOID  YOABELA_changecurrentct(struct A68t162 );
extern A68_VOID  EPABELA_makeprompt(struct A68t242 ,A68_162 *);
extern A68_VOID  XABBELA_indecls(struct A68t238 );
extern A68_VOID  LEBBELA_get_decls(struct A68t237 *,struct A68t97 ,A68_238 *);
extern A68_INT  TEBBELA_get_decl(struct A68t237 *,A68_VC ,struct A68t97 );
extern A68_243 * CFBBELA_get_decl_source(struct A68t237 *,A68_INT );
extern A68_INT  IGBBELA_check_decl(struct A68t237 *,A68_VC ,struct A68t97 );
extern A68_VOID  CIBBELA_nullupdater(A68_INT ,A68_INT ,struct A68t97 );
extern A68_VOID  PGBBELA_readrootptrs(A68_BOOL ,struct A68t97 );
extern A68_VOID  IJBBELA_savelib(A68_BOOL ,struct A68t97 );
extern A68_VOID  HIBBELA_open_library(A68_VC ,struct A68t270 ,struct A68t97 );
extern A68_VOID  EJBBELA_reopen_library(struct A68t97 );
extern A68_VOID  OJBBELA_finish_library(struct A68t97 );
extern A68_BOOL  QJBBELA_save_library(struct A68t97 );
extern A68_INT  UJBBELA_finddecl(A68_VC ,struct A68t238 );
extern A68_BOOL  DKBBELA_loadable(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t97 );
extern A68_VOID  ZLBBELA_zero_ctnos(void);
extern A68_VOID  VOBBELA_newcontextptr(struct A68t97 ,A68_179 *);
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_179  UACAELA_nilptr;
extern A68_BOOL  UXIAELA_isnilptr(struct A68t176 *,struct A68t179 );
extern A68_VOID  LIBAELA_lib_msg(A68_INT ,A68_92 *);
extern A68_229 * KTJAELA_nilclasses;
extern A68_230 * LTJAELA_nildeclattributes;
extern A68_234 * GUJAELA_nilimports;
extern A68_231 * HUJAELA_niluses;
extern A68_238  RUJAELA_nodecls;
extern A68_238  UUJAELA_nildecls;
extern A68_235 * BVJAELA_nilregion;
extern A68_236 * CVJAELA_nilregions;
extern A68_237 * DVJAELA_nilcontxt;
extern A68_239 * EVJAELA_nilcontexts;
#define FVJAELA_new_mask 0X1U
#define GVJAELA_body_mask 0X2U
#define HVJAELA_spec_mask 0X4U
#define IVJAELA_imports_mask 0X8U
#define KVJAELA_kint 66
#define LVJAELA_kfn 67
#define OVJAELA_kmac 70
extern A68_VOID  QVJAELA_sort_id(A68_INT ,A68_VC *);
extern A68_240 * HXJAELA_library;
extern A68_162  VWJAELA_defaultct;
extern A68_INT * JZJAELA_body_key;
extern A68_INT * MZJAELA_info_key;
extern A68_INT * PZJAELA_spacemap_key;
extern A68_176 * TYJAELA_discfile;
extern A68_BOOL  SZJAELA_(struct A68t162 ,struct A68t162 );
extern A68_VOID  BAKAELA_ctos(struct A68t162 ,A68_VC *);
extern A68_VOID  UAKAELA_ctos(struct A68t242 ,A68_VC *);
extern A68_VOID  NBKAELA_ctn(struct A68t242 ,A68_162 *);
extern A68_INT  QBKAELA_lib_size(void);
extern A68_VOID  ZCKAELA_resetlibchanged(struct A68t97 );
extern A68_VOID  GDKAELA_settimedate(A68_VC *,A68_VC *);
extern A68_VOID  MDKAELA_setlibchanged(struct A68t97 );
extern A68_237 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t237 *,A68_VC ,A68_242 *);
extern A68_234 * HEKAELA_get_imports(struct A68t242 );
extern A68_233 * LEKAELA_get_binding(struct A68t242 ,A68_VC );
extern A68_237 * XEKAELA_check_context(A68_VC ,struct A68t97 );
extern A68_233 * BGKAELA_check_binding(struct A68t242 ,A68_VC ,struct A68t97 );
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
extern A68_111 * WPBAELA_create_db_file(A68_VC ,A68_INT ,struct A68t97 );
extern A68_VOID  RXHAELA_initialise_db(struct A68t111 *,A68_BOOL ,A68_177 *);
extern A68_INT  WNBAELA_increase_increment;
extern A68_BOOL  PEGAELA_can_increase(struct A68t177 *,A68_INT );
extern A68_VOID  MEGAELA_increase(struct A68t177 *,A68_INT ,struct A68t97 );
extern A68_199  DJJAELA_database_file;
extern A68_INT  BLEAELA_discfile_size(struct A68t177 *);
extern A68_INT  ELEAELA_size_of_free_space(struct A68t177 *);
extern A68_VOID  GYHAELA_compacting_garbage_collect(struct A68t111 *,struct A68t111 *,struct A68t97 );
extern A68_206 * WYIAELA_readbuffer(struct A68t176 *,struct A68t179 );
extern A68_VOID  CCJAELA_inid2(struct A68t206 *,A68_VC *);
extern A68_INT  PEJAELA_nchars(struct A68t176 *,struct A68t179 ,struct A68t97 );
extern A68_INT  UEJAELA_ndiscptrs(struct A68t176 *,struct A68t179 ,struct A68t97 );
extern A68_VOID  AFJAELA_myreadchars(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t97 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t97 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  TTCAOST_nullid;
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VC  UKDAOST_library_type;
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
extern A68_VOID  WIBAOST_testmode_fname(A68_VC ,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_111 * FQBAOSI_open_file(A68_VC ,struct A68t113 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t111 *,struct A68t97 );
extern A68_VOID  YPBAOSI_file_name(struct A68t111 *,A68_VC *);
extern A68_120 * GVBAOSI_nil_file_details;
extern A68_120 * NVBAOSI_get_file_details(struct A68t122 ,struct A68t97 );
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_134 *);
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
extern A68_92  WHAAOSI_user;
extern A68_92  EIAAOSI_output;
extern A68_46  VJAAOSI_nullmsg;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void DZVAELA(void);   /* attrdecls */
extern void MPOAELA(void);   /* attrlevel1 */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_307   CTBBELA = {"$Id: libprocs.a68,v 34.2 1995/03/29 13:03:29 ella Exp $"}; 
A_GISVEC(A68_VC ,DTBBELA,CTBBELA,55)
static A68_180  JTBBELA_nodps;
static A68_314   AVBBELA = {"_body"}; 
static A68_315   BVBBELA = {"_RSREbody"}; 
A_GISVEC(A68_VC ,CVBBELA,BVBBELA,9)
A_GISVEC(A68_VC ,DVBBELA,AVBBELA,5)
static A68_314   EVBBELA = {"_info"}; 
static A68_315   FVBBELA = {"_RSREinfo"}; 
A_GISVEC(A68_VC ,GVBBELA,FVBBELA,9)
A_GISVEC(A68_VC ,HVBBELA,EVBBELA,5)
static A68_315   IVBBELA = {"_spacemap"}; 
static A68_316   JVBBELA = {"_RSREspacemap"}; 
A_GISVEC(A68_VC ,KVBBELA,JVBBELA,13)
A_GISVEC(A68_VC ,LVBBELA,IVBBELA,9)
static A68_317   MVBBELA = {"_textattributes"}; 
static A68_318   NVBBELA = {"_RSREtextattributes"}; 
A_GISVEC(A68_VC ,OVBBELA,NVBBELA,19)
A_GISVEC(A68_VC ,PVBBELA,MVBBELA,15)
static A68_314   QVBBELA = {"_body"}; 
static A68_315   RVBBELA = {"_RSREbody"}; 
A_GISVEC(A68_VC ,SVBBELA,RVBBELA,9)
A_GISVEC(A68_VC ,TVBBELA,QVBBELA,5)
static A68_314   UVBBELA = {"_info"}; 
static A68_315   VVBBELA = {"_RSREinfo"}; 
A_GISVEC(A68_VC ,WVBBELA,VVBBELA,9)
A_GISVEC(A68_VC ,XVBBELA,UVBBELA,5)
static A68_315   YVBBELA = {"_spacemap"}; 
static A68_316   ZVBBELA = {"_RSREspacemap"}; 
A_GISVEC(A68_VC ,AWBBELA,ZVBBELA,13)
A_GISVEC(A68_VC ,BWBBELA,YVBBELA,9)
static A68_317   FWBBELA = {"Library size = "}; 
A_GISVEC(A68_VC ,GWBBELA,FWBBELA,15)
static A68_319   LWBBELA = {" bytes"}; 
A_GISVEC(A68_VC ,MWBBELA,LWBBELA,6)
static A68_321   YWBBELA = {"\"increaselibrary\" is not currently available"}; 
A_GISVEC(A68_VC ,ZWBBELA,YWBBELA,44)
static A68_323   OXBBELA = {"\"compactlibrary\" is not currently available"}; 
A_GISVEC(A68_VC ,PXBBELA,OXBBELA,43)
static A68_326   OACBELA = {"_cancel"}; 
A_GISVEC(A68_VC ,PACBELA,OACBELA,7)
static A68_326   BBCBELA = {"_cancel"}; 
A_GISVEC(A68_VC ,CBCBELA,BBCBELA,7)
static A68_335   QICBELA = {"- not known"}; 
A_GISVEC(A68_VC ,SICBELA,QICBELA,11)
static A68_319   PZCBELA = {"an INT"}; 
A_GISVEC(A68_VC ,QZCBELA,PZCBELA,6)
static A68_346   SZCBELA = {"a "}; 
A_GISVEC(A68_VC ,TZCBELA,SZCBELA,2)
static A68_315   QBDBELA = {" further "}; 
A_GISVEC(A68_VC ,RBDBELA,QBDBELA,9)
typedef struct   /* env of non-global proc */
{
A68_111 * CYBBELA_old_file;
A68_97  Msg;
A68_VC  ZXBBELA_old_name;
} HYBBELA_new_msg;
typedef struct   /* env of non-global proc */
{
A68_179  Dp;
A68_97  Msg;
} FFCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  KFCBELA_upb;
A_PAD_INT(PAD_77)
} OFCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_180  IFCBELA_dps;
A68_INT  UFCBELA_i;
A_PAD_INT(PAD_78)
A68_97  Msg;
} ZFCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  KFCBELA_upb;
A_PAD_INT(PAD_79)
} LGCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  KFCBELA_upb;
A_PAD_INT(PAD_80)
} WGCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  KFCBELA_upb;
A_PAD_INT(PAD_81)
} HHCBELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SHCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  Decls;
} YKCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  Decls;
} ILCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  From;
} NMCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  From;
A68_238  IMCBELA_to;
} ZMCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  TOCBELA_compiled;
} BPCBELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XPCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  TXCBELA_decls;
} XXCBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_238  LADBELA_decls;
} RADBELA_generator;

A_STATIC A68_VOID  FTBBELA_generator(A68_BOOL  ETBBELA_anonymous, A68_180  *ReturnedValue);

A_STATIC A68_VOID  MTBBELA_checkregionselected(A68_242  Cr, A68_97  Msg);

A_STATIC A68_VOID  RTBBELA_checksimple(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  WTBBELA_checkcompound(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_BOOL  AUBBELA_checklastimports(A68_237 * C);

A68_VOID  FUBBELA_setcurrentct(A68_162  Ctn, A68_97  Msg);

A_STATIC A68_VOID  PUBBELA_clearlib(A68_97  Msg);

A68_VOID  DWBBELA_printsizes(A68_97  Msg);

A68_VOID  TWBBELA_clear_library(A68_97  Msg);

A68_VOID  XWBBELA_increase_library(A68_INT  Size, A68_97  Msg);

A68_VOID  NXBBELA_compact_library(A68_VC  New_fname, A68_97  Msg);

A_STATIC A68_VOID  GYBBELA_new_msg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A68_VOID  SYBBELA_regress_library(A68_97  Msg);

A68_VOID  AZBBELA_save_libchanges(A68_97  Msg);

A68_VOID  EZBBELA_create_library(A68_VC  Db_name, A68_97  Msg);

A_STATIC A68_VOID  YZBBELA_newimport(A68_237 * Ct, A68_VC  Toname, A68_INT  Sort);

A_STATIC A68_VOID  FACBELA_removeimport(A68_237 * Ct, A68_VC  Declname);

A_STATIC A68_VOID  KACBELA_cancelimport(A68_237 * Ct, A68_VC  Declname);

A_STATIC A68_VOID  WACBELA_outputcancelled(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_234 * TBCBELA_copyimports(A68_234 * I, A68_BOOL  Copy);

A_STATIC A68_BOOL  BCCBELA_isimported(A68_VC  Declname, A68_162  Ctn, A68_97  Msg);

A_STATIC A68_BOOL  GDCBELA_closurecontains(A68_162  Ctna, A68_162  Ctnb);

A_STATIC A68_BOOL  TDCBELA_inimports(A68_242  Cr, A68_179  Impdp, A68_179  Info, A68_97  Msg);

A_STATIC A68_VOID  BFCBELA_incompiled(A68_179  Dp, A68_179 * Imports, A68_180 * Info, A68_180 * Bodies, A68_180 * Spacemaps, A68_97  Msg, A68_238  *ReturnedValue);

A_STATIC A68_VOID  EFCBELA_generator(A68_BOOL  CFCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NFCBELA_generator(A68_BOOL  LFCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YFCBELA_generator(A68_BOOL  WFCBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KGCBELA_generator(A68_BOOL  IGCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VGCBELA_generator(A68_BOOL  TGCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GHCBELA_generator(A68_BOOL  EHCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RHCBELA_generator(A68_BOOL  PHCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  BICBELA_inuses(A68_VC  Id, A68_231 * U);

A_STATIC A68_BOOL  GICBELA_usesindecls(A68_232  D, A68_238  Decls);

A68_VOID  OICBELA_info_chars(A68_237 * Ct, A68_INT  Declno, A68_97  Msg);

A68_VOID  FJCBELA_printdecl(A68_237 * Ct, A68_INT  Declno, A68_BOOL  Uses, A68_BOOL  Usedby, A68_97  Msg);

A_STATIC A68_VOID  UKCBELA_sortdecls(A68_237 * Ct, A68_238  Decls, A68_BOOL * Sorted, A68_97  Msg, A68_32  *ReturnedValue);

A_STATIC A68_VOID  XKCBELA_generator(A68_BOOL  VKCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HLCBELA_generator(A68_BOOL  FLCBELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GMCBELA_mergedecls(A68_237 * Ct, A68_238  From, A68_BOOL * Ok, A68_32 * Table, A68_97  Msg, A68_238  *ReturnedValue);

A_STATIC A68_VOID  MMCBELA_generator(A68_BOOL  KMCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YMCBELA_generator(A68_BOOL  WMCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  COCBELA_updatedecls(A68_237 * Ct, A68_238  Decls, A68_97  Msg);

A68_VOID  KOCBELA_merge_compiled(A68_242  Cr, A68_179  Ptrlastcomp, A68_97  Msg);

A_STATIC A68_VOID  APCBELA_generator(A68_BOOL  YOCBELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  TPCBELA_merge_imports(A68_242  Cr, A68_179  Ptrlastcomp, A68_97  Msg);

A_STATIC A68_VOID  WPCBELA_generator(A68_BOOL  UPCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A68_VOID  IQCBELA_make_context(A68_162  Newctname, A68_97  Msg);

A_STATIC A68_236 * WQCBELA_copyregions(A68_236 * R);

A_STATIC A68_BOOL  FRCBELA_containsexports(A68_237 * Ct, A68_97  Msg);

A68_VOID  PRCBELA_copy_context(A68_237 * Ct, A68_VC  Newctname, A68_97  Msg);

A68_VOID  BSCBELA_clear_context(A68_237 * Ct, A68_97  Msg);

A68_VOID  KSCBELA_erase_context(A68_237 * Ct, A68_97  Msg);

A68_VOID  USCBELA_clear_imports(A68_242  Cr, A68_97  Msg);

A68_VOID  QTCBELA_erase_region(A68_242  Cr, A68_97  Msg);

A68_VOID  CUCBELA_make_region(A68_237 * Ct, A68_VC  Newimpname, A68_97  Msg);

A68_VOID  TUCBELA_copy_region(A68_242  Cr, A68_VC  Newname, A68_97  Msg);

A68_VOID  LVCBELA_name_region(A68_237 * Ct, A68_VC  Newname, A68_97  Msg);

A68_VOID  WVCBELA_dont_name_region(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_BOOL  JWCBELA_dontexport(A68_237 * Ct, A68_INT  Declno, A68_97  Msg);

A68_VOID  DXCBELA_dont_import(A68_242  Cr, A68_INT  Declno, A68_97  Msg);

A68_VOID  RXCBELA_erase(A68_237 * Ct, A68_INT  Declno, A68_97  Msg);

A_STATIC A68_VOID  WXCBELA_generator(A68_BOOL  UXCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A68_VOID  EZCBELA_export(A68_237 * Ct, A68_INT  Declno, A68_97  Msg);

A68_VOID  JADBELA_exportall(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  QADBELA_generator(A68_BOOL  OADBELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A68_VOID  YBDBELA_dont_export(A68_237 * Ct, A68_INT  Declno, A68_97  Msg);

A68_VOID  HCDBELA_clear_exports(A68_237 * Ct, A68_97  Msg);

A68_INT  YCDBELA_ordercontexts(void);

A_STATIC A68_VOID  GYBBELA_new_msg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((HYBBELA_new_msg *)NonLocals)->x)
{ 
A68_106  IYBBELA;  /* OPERATORS - mode -> union mode */
A68_270  JYBBELA;  /* procedure value */
A_PROC_ENTRY(new_msg);
 /* line 266: */
 /* line 267: */
{ 
 /* line 268: */
 /* line 269: */
if ( TKAAOSI_error_msg(A_UNITE(IYBBELA,mode1,1,Msgno)) )
{ 
XQBAOSI_close_file(NL(CYBBELA_old_file), NL(Msg));
 /* line 270: */
 /* line 271: */
JYBBELA.fn.fn_global = CIBBELA_nullupdater;
JYBBELA.nonlocals = A68_NIL;
HIBBELA_open_library(NL(ZXBBELA_old_name), JYBBELA, NL(Msg));
} 
 /* line 272: */
 /* line 273: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  EFCBELA_generator(A68_BOOL  CFCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((FFCBELA_generator *)NonLocals)->x)
{ 
A68_180  GFCBELA;  /* clause result */
A68_180  HFCBELA;  /* OPERATORS - dynamic generator */
{ 
HFCBELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, NL(Dp), NL(Msg)) ;
( CFCBELA_anonymous? A_VLOC(A68_179 ,HFCBELA): A_VHEAP(A68_179 ,HFCBELA) );
GFCBELA = HFCBELA;
} 
*ReturnedValue = (GFCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NFCBELA_generator(A68_BOOL  LFCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((OFCBELA_generator *)NonLocals)->x)
{ 
A68_238  PFCBELA;  /* clause result */
A68_238  QFCBELA;  /* OPERATORS - dynamic generator */
{ 
QFCBELA.upb = NL(KFCBELA_upb) ;
( LFCBELA_anonymous? A_VLOC(A68_232 ,QFCBELA): A_VHEAP(A68_232 ,QFCBELA) );
PFCBELA = QFCBELA;
} 
*ReturnedValue = (PFCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YFCBELA_generator(A68_BOOL  WFCBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZFCBELA_generator *)NonLocals)->x)
{ 
A68_VC  AGCBELA;  /* clause result */
A68_VC  BGCBELA;  /* OPERATORS - dynamic generator */
A68_INT  CGCBELA;  /* YIELD */
{ 
CGCBELA = ((3*NL(UFCBELA_i))-2) ;
BGCBELA.upb = PEJAELA_nchars(TYJAELA_discfile, (*(&A_VINDEX(NL(IFCBELA_dps),CGCBELA))), NL(Msg)) ;
( WFCBELA_anonymous? A_VLOC(A68_CHAR ,BGCBELA): A_VHEAP(A68_CHAR ,BGCBELA) );
AGCBELA = BGCBELA;
} 
*ReturnedValue = (AGCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KGCBELA_generator(A68_BOOL  IGCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((LGCBELA_generator *)NonLocals)->x)
{ 
A68_180  MGCBELA;  /* clause result */
A68_180  NGCBELA;  /* OPERATORS - dynamic generator */
{ 
NGCBELA.upb = NL(KFCBELA_upb) ;
( IGCBELA_anonymous? A_VLOC(A68_179 ,NGCBELA): A_VHEAP(A68_179 ,NGCBELA) );
MGCBELA = NGCBELA;
} 
*ReturnedValue = (MGCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VGCBELA_generator(A68_BOOL  TGCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((WGCBELA_generator *)NonLocals)->x)
{ 
A68_180  XGCBELA;  /* clause result */
A68_180  YGCBELA;  /* OPERATORS - dynamic generator */
{ 
YGCBELA.upb = NL(KFCBELA_upb) ;
( TGCBELA_anonymous? A_VLOC(A68_179 ,YGCBELA): A_VHEAP(A68_179 ,YGCBELA) );
XGCBELA = YGCBELA;
} 
*ReturnedValue = (XGCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GHCBELA_generator(A68_BOOL  EHCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((HHCBELA_generator *)NonLocals)->x)
{ 
A68_180  IHCBELA;  /* clause result */
A68_180  JHCBELA;  /* OPERATORS - dynamic generator */
{ 
JHCBELA.upb = NL(KFCBELA_upb) ;
( EHCBELA_anonymous? A_VLOC(A68_179 ,JHCBELA): A_VHEAP(A68_179 ,JHCBELA) );
IHCBELA = JHCBELA;
} 
*ReturnedValue = (IHCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RHCBELA_generator(A68_BOOL  PHCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((SHCBELA_generator *)NonLocals)->x)
{ 
A68_180  THCBELA;  /* clause result */
A68_180  UHCBELA;  /* OPERATORS - dynamic generator */
{ 
UHCBELA.upb = 1 ;
( PHCBELA_anonymous? A_VLOC(A68_179 ,UHCBELA): A_VHEAP(A68_179 ,UHCBELA) );
THCBELA = UHCBELA;
} 
*ReturnedValue = (THCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XKCBELA_generator(A68_BOOL  VKCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((YKCBELA_generator *)NonLocals)->x)
{ 
A68_238  ZKCBELA;  /* clause result */
A68_238  ALCBELA;  /* OPERATORS - dynamic generator */
{ 
ALCBELA.upb = NL(Decls).upb ;
( VKCBELA_anonymous? A_VLOC(A68_232 ,ALCBELA): A_VHEAP(A68_232 ,ALCBELA) );
ZKCBELA = ALCBELA;
} 
*ReturnedValue = (ZKCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HLCBELA_generator(A68_BOOL  FLCBELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ILCBELA_generator *)NonLocals)->x)
{ 
A68_32  JLCBELA;  /* clause result */
A68_32  KLCBELA;  /* OPERATORS - dynamic generator */
{ 
KLCBELA.upb = NL(Decls).upb ;
( FLCBELA_anonymous? A_VLOC(A68_INT ,KLCBELA): A_VHEAP(A68_INT ,KLCBELA) );
JLCBELA = KLCBELA;
} 
*ReturnedValue = (JLCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MMCBELA_generator(A68_BOOL  KMCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((NMCBELA_generator *)NonLocals)->x)
{ 
A68_238  OMCBELA;  /* clause result */
A68_238  PMCBELA;  /* OPERATORS - dynamic generator */
{ 
PMCBELA.upb = NL(From).upb ;
( KMCBELA_anonymous? A_VLOC(A68_232 ,PMCBELA): A_VHEAP(A68_232 ,PMCBELA) );
OMCBELA = PMCBELA;
} 
*ReturnedValue = (OMCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YMCBELA_generator(A68_BOOL  WMCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZMCBELA_generator *)NonLocals)->x)
{ 
A68_238  ANCBELA;  /* clause result */
A68_238  BNCBELA;  /* OPERATORS - dynamic generator */
{ 
BNCBELA.upb = (NL(From).upb+NL(IMCBELA_to).upb) ;
( WMCBELA_anonymous? A_VLOC(A68_232 ,BNCBELA): A_VHEAP(A68_232 ,BNCBELA) );
ANCBELA = BNCBELA;
} 
*ReturnedValue = (ANCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  APCBELA_generator(A68_BOOL  YOCBELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BPCBELA_generator *)NonLocals)->x)
{ 
A68_32  CPCBELA;  /* clause result */
A68_32  DPCBELA;  /* OPERATORS - dynamic generator */
{ 
DPCBELA.upb = NL(TOCBELA_compiled).upb ;
( YOCBELA_anonymous? A_VLOC(A68_INT ,DPCBELA): A_VHEAP(A68_INT ,DPCBELA) );
CPCBELA = DPCBELA;
} 
*ReturnedValue = (CPCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WPCBELA_generator(A68_BOOL  UPCBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((XPCBELA_generator *)NonLocals)->x)
{ 
A68_180  YPCBELA;  /* clause result */
A68_180  ZPCBELA;  /* OPERATORS - dynamic generator */
{ 
ZPCBELA.upb = 2 ;
( UPCBELA_anonymous? A_VLOC(A68_179 ,ZPCBELA): A_VHEAP(A68_179 ,ZPCBELA) );
YPCBELA = ZPCBELA;
} 
*ReturnedValue = (YPCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WXCBELA_generator(A68_BOOL  UXCBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((XXCBELA_generator *)NonLocals)->x)
{ 
A68_238  YXCBELA;  /* clause result */
A68_238  ZXCBELA;  /* OPERATORS - dynamic generator */
{ 
ZXCBELA.upb = (NL(TXCBELA_decls).upb-1) ;
( UXCBELA_anonymous? A_VLOC(A68_232 ,ZXCBELA): A_VHEAP(A68_232 ,ZXCBELA) );
YXCBELA = ZXCBELA;
} 
*ReturnedValue = (YXCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QADBELA_generator(A68_BOOL  OADBELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((RADBELA_generator *)NonLocals)->x)
{ 
A68_54  SADBELA;  /* clause result */
A68_54  TADBELA;  /* OPERATORS - dynamic generator */
{ 
TADBELA.upb = NL(LADBELA_decls).upb ;
( OADBELA_anonymous? A_VLOC(A68_BOOL ,TADBELA): A_VHEAP(A68_BOOL ,TADBELA) );
SADBELA = TADBELA;
} 
*ReturnedValue = (SADBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FTBBELA_generator(A68_BOOL  ETBBELA_anonymous, A68_180  *ReturnedValue)
{ 
A68_180  GTBBELA;  /* clause result */
A68_180  HTBBELA;  /* OPERATORS - dynamic generator */
{ 
HTBBELA.upb = 0 ;
( ETBBELA_anonymous? A_VLOC(A68_179 ,HTBBELA): A_VHEAP(A68_179 ,HTBBELA) );
GTBBELA = HTBBELA;
} 
*ReturnedValue = (GTBBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MTBBELA_checkregionselected(A68_242  Cr, A68_97  Msg)
{ 
A68_46  NTBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  OTBBELA;  /* avoid structure result */
A_PROC_ENTRY(checkregionselected);
 /* line 118: */
 /* line 119: */
{ 
 /* line 120: */
if ( (Cr.Region==BVJAELA_nilregion) )
{ 
 /* line 121: */
 /* line 122: */
 /* line 123: */
LIBAELA_lib_msg( 17, &OTBBELA );
A_CALLPROC(Msg,(OTBBELA, A_HVEC(NTBBELA,(*(&(Cr.Context->Name))),A68_VC )),(OTBBELA, A_HVEC(NTBBELA,(*(&(Cr.Context->Name))),A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(checkregionselected);
return;
} 
#undef NL

A_STATIC A68_VOID  RTBBELA_checksimple(A68_237 * Ct, A68_97  Msg)
{ 
A68_46  STBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  TTBBELA;  /* avoid structure result */
A_PROC_ENTRY(checksimple);
 /* line 126: */
 /* line 127: */
{ 
 /* line 128: */
if ( A_VC_NE((*(&((&((*(&(Ct->Regions)))->Region))->Name))),TTCAOST_nullid) )
{ 
 /* line 129: */
 /* line 130: */
LIBAELA_lib_msg( 20, &TTBBELA );
A_CALLPROC(Msg,(TTBBELA, A_HVEC(STBBELA,(*(&(Ct->Name))),A68_VC )),(TTBBELA, A_HVEC(STBBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(checksimple);
return;
} 
#undef NL

A_STATIC A68_VOID  WTBBELA_checkcompound(A68_237 * Ct, A68_97  Msg)
{ 
A68_46  XTBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  YTBBELA;  /* avoid structure result */
A_PROC_ENTRY(checkcompound);
 /* line 133: */
 /* line 134: */
{ 
 /* line 135: */
if ( A_VC_EQ((*(&((&((*(&(Ct->Regions)))->Region))->Name))),TTCAOST_nullid) )
{ 
 /* line 136: */
 /* line 137: */
LIBAELA_lib_msg( 21, &YTBBELA );
A_CALLPROC(Msg,(YTBBELA, A_HVEC(XTBBELA,(*(&(Ct->Name))),A68_VC )),(YTBBELA, A_HVEC(XTBBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(checkcompound);
return;
} 
#undef NL

A_STATIC A68_BOOL  AUBBELA_checklastimports(A68_237 * C)
{ 
A68_BOOL  BUBBELA;  /* optbool result */
A68_BOOL  CUBBELA;  /* clause result */
A_PROC_ENTRY(checklastimports);
 /* line 140: */
 /* line 141: */
BUBBELA = ((*(&(C->Regions)))!=CVJAELA_nilregions);
if ( BUBBELA )
{ /* line 142: */
BUBBELA = ((*(&((*(&(C->Regions)))->Rest)))==CVJAELA_nilregions);
}
CUBBELA = BUBBELA;
A_PROC_EXIT(checklastimports);
return( CUBBELA );
} 
#undef NL

A68_VOID  FUBBELA_setcurrentct(A68_162  Ctn, A68_97  Msg)
{ 
A68_237 * GUBBELA_ct;
A68_242  HUBBELA;  /* avoid structure result */
A68_242  IUBBELA_cr;
A68_BOOL  JUBBELA;  /* optbool result */
A68_312  KUBBELA;  /* collateral clause result */
A68_46  LUBBELA;  /* OPERATORS - istruct -> vector */
A68_92  MUBBELA;  /* avoid structure result */
A68_162  NUBBELA;  /* avoid structure result */
A_PROC_ENTRY(setcurrentct);
 /* line 147: */
 /* line 148: */
{ 
GUBBELA_ct = XEKAELA_check_context(Ctn.Context, Msg);
 /* line 149: */
AEKAELA_get_region( GUBBELA_ct, Ctn.Import, &HUBBELA );
IUBBELA_cr = HUBBELA;
 /* line 150: */
JUBBELA = (IUBBELA_cr.Region==BVJAELA_nilregion);
if ( JUBBELA )
{ /* line 151: */
JUBBELA = A_VC_NE(Ctn.Import,TTCAOST_nullid);
}
if ( JUBBELA )
{ 
 /* line 152: */
KUBBELA.data[0] = Ctn.Import;
KUBBELA.data[1] = Ctn.Context;
 /* line 153: */
LIBAELA_lib_msg( 16, &MUBBELA );
A_CALLPROC(Msg,(MUBBELA, A_HISVEC(LUBBELA,KUBBELA,2,A68_VC )),(MUBBELA, A_HISVEC(LUBBELA,KUBBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 154: */
 /* line 155: */
EPABELA_makeprompt( IUBBELA_cr, &NUBBELA );
YOABELA_changecurrentct(NUBBELA);
} 
} 
A_PROC_EXIT(setcurrentct);
return;
} 
#undef NL

A_STATIC A68_VOID  PUBBELA_clearlib(A68_97  Msg)
{ 
A68_313  QUBBELA;  /* collateral clause result */
A68_180  RUBBELA;  /* OPERATORS - istruct -> vector */
A68_180  SUBBELA;  /* YIELD */
A68_180  TUBBELA;  /* OPERATORS - assign op */
A68_229 ** UUBBELA;  /* YIELD */
A68_236 * VUBBELA_reg;
A68_236  WUBBELA;  /* collateral clause result */
A68_239  XUBBELA;  /* collateral clause result */
A68_239 * YUBBELA;  /* YIELD */
A68_239 ** ZUBBELA;  /* YIELD */
A_PROC_ENTRY(clearlib);
 /* line 162: */
 /* line 163: */
{ 
QUBBELA.data[0] = UACAELA_nilptr;
QUBBELA.data[1] = UACAELA_nilptr;
QUBBELA.data[2] = UACAELA_nilptr;
QUBBELA.data[3] = UACAELA_nilptr;
QUBBELA.data[4] = UACAELA_nilptr;
QUBBELA.data[5] = UACAELA_nilptr;
SUBBELA = (HXJAELA_library->Rootptrs) ;
TUBBELA = A_HISVEC(RUBBELA,QUBBELA,6,A68_179 ) ;
A_VASSIGN2(TUBBELA,SUBBELA,A68_179 );
 /* line 164: */
UUBBELA = (&(HXJAELA_library->Classes)) ;
(*UUBBELA) = KTJAELA_nilclasses;
 /* line 165: */
GDKAELA_settimedate((&(HXJAELA_library->Timecleared)), (&(HXJAELA_library->Datecleared)));
 /* line 166: */
VUBBELA_reg = (A_HEAP(A68_236 ));
WUBBELA.Region.Name = VWJAELA_defaultct.Import;
WUBBELA.Region.Ctno = 0;
WUBBELA.Region.Imports = GUJAELA_nilimports;
WUBBELA.Rest = CVJAELA_nilregions;
(*VUBBELA_reg) = WUBBELA;
 /* line 167: */
 /* line 168: */
 /* line 169: */
XUBBELA.Context.Name = VWJAELA_defaultct.Context;
 /* line 170: */
XUBBELA.Context.Val = UACAELA_nilptr;
XUBBELA.Context.Loadable = A68_FALSE;
XUBBELA.Context.Changed = A68_TRUE;
XUBBELA.Context.Decls = RUJAELA_nodecls;
XUBBELA.Context.Declattributes = LTJAELA_nildeclattributes;
XUBBELA.Context.Regions = VUBBELA_reg;
XUBBELA.Rest = EVJAELA_nilcontexts;
YUBBELA = A_HEAP(A68_239 ) ;
(*YUBBELA) = XUBBELA ;
ZUBBELA = (&(HXJAELA_library->Contexts)) ;
(*ZUBBELA) = YUBBELA;
 /* line 171: */
YOABELA_changecurrentct(VWJAELA_defaultct);
 /* line 172: */
MZVAELA_introduce_decl_class(DVBBELA, CVBBELA, YWOAELA_body_life, Msg);
 /* line 173: */
MZVAELA_introduce_decl_class(HVBBELA, GVBBELA, YWOAELA_body_life, Msg);
 /* line 174: */
MZVAELA_introduce_decl_class(LVBBELA, KVBBELA, YWOAELA_body_life, Msg);
 /* line 175: */
EBPAELA_introduce_class(PVBBELA, OVBBELA, Msg);
 /* line 176: */
(*JZJAELA_body_key) = LCPAELA_login_class(TVBBELA, SVBBELA, Msg);
 /* line 177: */
(*MZJAELA_info_key) = LCPAELA_login_class(XVBBELA, WVBBELA, Msg);
 /* line 178: */
(*PZJAELA_spacemap_key) = LCPAELA_login_class(BWBBELA, AWBBELA, Msg);
 /* line 179: */
 /* line 180: */
MDKAELA_setlibchanged(Msg);
} 
A_PROC_EXIT(clearlib);
return;
} 
#undef NL

A68_VOID  DWBBELA_printsizes(A68_97  Msg)
{ 
A68_320  EWBBELA;  /* collateral clause result */
A68_52  HWBBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IWBBELA;  /* YIELD */
A68_52  JWBBELA;  /* OPERATORS - mode -> union mode */
A68_INT  KWBBELA;  /* YIELD */
A68_52  NWBBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OWBBELA;  /* YIELD */
A68_85  PWBBELA;  /* OPERATORS - istruct -> vector */
A68_VC  QWBBELA;  /* avoid structure result */
A68_46  RWBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printsizes);
 /* line 186: */
IWBBELA = GWBBELA ;
EWBBELA.data[0] = A_UNITE(HWBBELA,mode7,7,IWBBELA);
KWBBELA = QBKAELA_lib_size() ;
EWBBELA.data[1] = A_UNITE(JWBBELA,mode1,1,KWBBELA);
OWBBELA = MWBBELA ;
EWBBELA.data[2] = A_UNITE(NWBBELA,mode7,7,OWBBELA);
UJBAOSL_oneline( A_HISVEC(PWBBELA,EWBBELA,3,A68_52 ), &QWBBELA );
A_CALLPROC(Msg,(EIAAOSI_output, A_HVEC(RWBBELA,QWBBELA,A68_VC )),(EIAAOSI_output, A_HVEC(RWBBELA,QWBBELA,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(printsizes);
return;
} 
#undef NL

A68_VOID  TWBBELA_clear_library(A68_97  Msg)
{ 
A68_92  UWBBELA;  /* avoid structure result */
A_PROC_ENTRY(clear_library);
 /* line 194: */
 /* line 195: */
{ 
PUBBELA_clearlib(Msg);
 /* line 196: */
 /* line 197: */
LIBAELA_lib_msg( 35, &UWBBELA );
A_CALLPROC(Msg,(UWBBELA, VJAAOSI_nullmsg),(UWBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(clear_library);
return;
} 
#undef NL

A68_VOID  XWBBELA_increase_library(A68_INT  Size, A68_97  Msg)
{ 
A68_46  AXBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  BXBBELA_filesize;
A68_INT  CXBBELA_units;
A68_VC  DXBBELA;  /* avoid structure result */
A68_46  EXBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  FXBBELA;  /* avoid structure result */
A68_92  GXBBELA;  /* avoid structure result */
A68_VC  HXBBELA;  /* avoid structure result */
A68_46  IXBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  JXBBELA;  /* avoid structure result */
A68_BOOL * KXBBELA;  /* YIELD */
A_PROC_ENTRY(increase_library);
 /* line 200: */
 /* line 201: */
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(AXBBELA,ZWBBELA,A68_VC )),(WHAAOSI_user, A_HVEC(AXBBELA,ZWBBELA,A68_VC ),(Msg).nonlocals));
 /* line 202: */
BXBBELA_filesize = BLEAELA_discfile_size((*(&(TYJAELA_discfile->Database))));
 /* line 203: */
CXBBELA_units = (((Size+WNBAELA_increase_increment)-1)/WNBAELA_increase_increment);
 /* line 204: */
 /* line 205: */
if ( (Size<1) )
{ 
 /* line 206: */
 /* line 207: */
FCAAOSI_intchars( WNBAELA_increase_increment, &DXBBELA );
LIBAELA_lib_msg( 37, &FXBBELA );
A_CALLPROC(Msg,(FXBBELA, A_HVEC(EXBBELA,DXBBELA,A68_VC )),(FXBBELA, A_HVEC(EXBBELA,DXBBELA,A68_VC ),(Msg).nonlocals));
} 
 /* line 208: */
 /* line 209: */
if ( !PEGAELA_can_increase((*(&(TYJAELA_discfile->Database))), CXBBELA_units) )
{ 
 /* line 210: */
LIBAELA_lib_msg( 38, &GXBBELA );
A_CALLPROC(Msg,(GXBBELA, VJAAOSI_nullmsg),(GXBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 211: */
MEGAELA_increase((*(&(TYJAELA_discfile->Database))), CXBBELA_units, Msg);
 /* line 212: */
 /* line 213: */
FCAAOSI_intchars( (BLEAELA_discfile_size((*(&(TYJAELA_discfile->Database))))-BXBBELA_filesize), &HXBBELA );
LIBAELA_lib_msg( 39, &JXBBELA );
A_CALLPROC(Msg,(JXBBELA, A_HVEC(IXBBELA,HXBBELA,A68_VC )),(JXBBELA, A_HVEC(IXBBELA,HXBBELA,A68_VC ),(Msg).nonlocals));
 /* line 214: */
KXBBELA = (&(HXJAELA_library->Libchanged)) ;
(*KXBBELA) = A68_TRUE;
 /* line 215: */
QJBBELA_save_library(Msg);
 /* line 216: */
 /* line 217: */
DWBBELA_printsizes(Msg);
} 
A_PROC_EXIT(increase_library);
return;
} 
#undef NL

A68_VOID  NXBBELA_compact_library(A68_VC  New_fname, A68_97  Msg)
{ 
A68_46  QXBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  RXBBELA;  /* OPERATORS - mode -> union mode */
A68_46  SXBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  TXBBELA;  /* avoid structure result */
A68_INT  UXBBELA_min_size;
A68_INT  VXBBELA;  /* clause result */
A68_INT  WXBBELA_new_size;
A68_111 * XXBBELA_new_file;
A68_VC  YXBBELA;  /* avoid structure result */
A68_VC  ZXBBELA_old_name;
A68_VC  AYBBELA;  /* avoid structure result */
A68_VC  BYBBELA_new_name;
A68_111 * CYBBELA_old_file;
A68_97  FYBBELA_new_msg;   /* proc value of non-global proc */
A68_270  KYBBELA;  /* procedure value */
A68_VC  LYBBELA;  /* avoid structure result */
A68_46  MYBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  NYBBELA;  /* avoid structure result */
A68_VC  OYBBELA;  /* avoid structure result */
A68_46  PYBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  QYBBELA;  /* avoid structure result */
A_PROC_ENTRY(compact_library);
 /* line 220: */
 /* line 221: */
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(QXBBELA,PXBBELA,A68_VC )),(WHAAOSI_user, A_HVEC(QXBBELA,PXBBELA,A68_VC ),(Msg).nonlocals));
 /* line 228: */
 /* line 229: */
if ( (NVBAOSI_get_file_details(A_UNITE(RXBBELA,mode2,2,New_fname), Msg)!=GVBAOSI_nil_file_details) )
{ 
 /* line 230: */
 /* line 231: */
LIBAELA_lib_msg( 45, &TXBBELA );
A_CALLPROC(Msg,(TXBBELA, A_HVEC(SXBBELA,New_fname,A68_VC )),(TXBBELA, A_HVEC(SXBBELA,New_fname,A68_VC ),(Msg).nonlocals));
} 
 /* line 238: */
if ( !QJBBELA_save_library(Msg) )
{ 
EJBBELA_reopen_library(Msg);
} 
 /* line 242: */
 /* line 243: */
UXBBELA_min_size = (BLEAELA_discfile_size((*(&((*(&(HXJAELA_library->Discfile)))->Database))))-ELEAELA_size_of_free_space((*(&((*(&(HXJAELA_library->Discfile)))->Database)))));
 /* line 244: */
 /* line 245: */
 /* line 246: */
if ( (UXBBELA_min_size<WNBAELA_increase_increment) )
{ 
VXBBELA = WNBAELA_increase_increment;
} 
else
{ 
 /* line 247: */
 /* line 248: */
VXBBELA = ((((UXBBELA_min_size+WNBAELA_increase_increment)-1)/WNBAELA_increase_increment)*WNBAELA_increase_increment);
} 
WXBBELA_new_size = VXBBELA;
 /* line 250: */
XXBBELA_new_file = WPBAELA_create_db_file(New_fname, WXBBELA_new_size, Msg);
 /* line 252: */
YPBAOSI_file_name( (*(&(HXJAELA_library->File))), &YXBBELA );
ZXBBELA_old_name = YXBBELA;
 /* line 253: */
YPBAOSI_file_name( XXBBELA_new_file, &AYBBELA );
BYBBELA_new_name = AYBBELA;
 /* line 257: */
OJBBELA_finish_library(Msg);
 /* line 261: */
CYBBELA_old_file = FQBAOSI_open_file(ZXBBELA_old_name, BOBAOSI_update_access, Msg);
 /* line 265: */
A_CLOSURE( FYBBELA_new_msg, GYBBELA_new_msg, HYBBELA_new_msg );
(( HYBBELA_new_msg * ) ( FYBBELA_new_msg.nonlocals )) -> CYBBELA_old_file = CYBBELA_old_file;
(( HYBBELA_new_msg * ) ( FYBBELA_new_msg.nonlocals )) -> Msg = Msg;
(( HYBBELA_new_msg * ) ( FYBBELA_new_msg.nonlocals )) -> ZXBBELA_old_name = ZXBBELA_old_name;
 /* line 277: */
GYHAELA_compacting_garbage_collect(CYBBELA_old_file, XXBBELA_new_file, FYBBELA_new_msg);
 /* line 281: */
KYBBELA.fn.fn_global = CIBBELA_nullupdater;
KYBBELA.nonlocals = A68_NIL;
HIBBELA_open_library(BYBBELA_new_name, KYBBELA, Msg);
 /* line 283: */
 /* line 284: */
WIBAOST_testmode_fname( BYBBELA_new_name, &LYBBELA );
LIBAELA_lib_msg( 46, &NYBBELA );
A_CALLPROC(Msg,(NYBBELA, A_HVEC(MYBBELA,LYBBELA,A68_VC )),(NYBBELA, A_HVEC(MYBBELA,LYBBELA,A68_VC ),(Msg).nonlocals));
 /* line 285: */
DWBBELA_printsizes(Msg);
 /* line 286: */
 /* line 287: */
 /* line 288: */
WIBAOST_testmode_fname( ZXBBELA_old_name, &OYBBELA );
LIBAELA_lib_msg( 47, &QYBBELA );
A_CALLPROC(Msg,(QYBBELA, A_HVEC(PYBBELA,OYBBELA,A68_VC )),(QYBBELA, A_HVEC(PYBBELA,OYBBELA,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(compact_library);
return;
} 
#undef NL

A68_VOID  SYBBELA_regress_library(A68_97  Msg)
{ 
A68_VC  TYBBELA;  /* avoid structure result */
A68_46  UYBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  VYBBELA;  /* avoid structure result */
A68_VC  WYBBELA;  /* avoid structure result */
A68_46  XYBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  YYBBELA;  /* avoid structure result */
A_PROC_ENTRY(regress_library);
 /* line 291: */
 /* line 292: */
{ 
 /* line 293: */
if ( (*(&(HXJAELA_library->Libchanged))) )
{ 
PGBBELA_readrootptrs(A68_FALSE, Msg);
 /* line 294: */
 /* line 295: */
JIBAOST_version_str( (*(&(HXJAELA_library->Version))), &TYBBELA );
LIBAELA_lib_msg( 40, &VYBBELA );
A_CALLPROC(Msg,(VYBBELA, A_HVEC(UYBBELA,TYBBELA,A68_VC )),(VYBBELA, A_HVEC(UYBBELA,TYBBELA,A68_VC ),(Msg).nonlocals));
 /* line 296: */
 /* line 297: */
ZCKAELA_resetlibchanged(Msg);
} 
else
{ 
 /* line 298: */
 /* line 299: */
 /* line 300: */
JIBAOST_version_str( (*(&(HXJAELA_library->Version))), &WYBBELA );
LIBAELA_lib_msg( 41, &YYBBELA );
A_CALLPROC(Msg,(YYBBELA, A_HVEC(XYBBELA,WYBBELA,A68_VC )),(YYBBELA, A_HVEC(XYBBELA,WYBBELA,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(regress_library);
return;
} 
#undef NL

A68_VOID  AZBBELA_save_libchanges(A68_97  Msg)
{ 
A68_92  BZBBELA;  /* avoid structure result */
A_PROC_ENTRY(save_libchanges);
 /* line 303: */
 /* line 304: */
{ 
 /* line 305: */
if ( !QJBBELA_save_library(Msg) )
{ 
 /* line 306: */
 /* line 307: */
LIBAELA_lib_msg( 42, &BZBBELA );
A_CALLPROC(Msg,(BZBBELA, VJAAOSI_nullmsg),(BZBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(save_libchanges);
return;
} 
#undef NL

A68_VOID  EZBBELA_create_library(A68_VC  Db_name, A68_97  Msg)
{ 
A68_134  FZBBELA;  /* avoid structure result */
A68_134  GZBBELA_libname;
A68_111 * HZBBELA_new_libfile;
A68_177  IZBBELA;  /* avoid structure result */
A68_177 * JZBBELA;  /* YIELD */
A68_177 ** KZBBELA;  /* YIELD */
A68_111 * LZBBELA_file;
A68_111 ** MZBBELA;  /* YIELD */
A68_VC * NZBBELA;  /* YIELD */
A68_INT * OZBBELA;  /* YIELD */
A68_BOOL * PZBBELA;  /* YIELD */
A68_VC  QZBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  RZBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  SZBBELA;  /* avoid structure result */
A68_46  TZBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  UZBBELA;  /* avoid structure result */
A_PROC_ENTRY(create_library);
 /* line 311: */
 /* line 312: */
{ 
TNCAOSI_parse_filename( Db_name, UKDAOST_library_type, Msg, &FZBBELA );
GZBBELA_libname = FZBBELA;
 /* line 313: */
 /* line 314: */
HZBBELA_new_libfile = WPBAELA_create_db_file(GZBBELA_libname.Filename, WNBAELA_increase_increment, Msg);
 /* line 315: */
RXHAELA_initialise_db( HZBBELA_new_libfile, A68_TRUE, &IZBBELA );
JZBBELA = A_HEAP(A68_177 ) ;
(*JZBBELA) = IZBBELA ;
KZBBELA = (&(TYJAELA_discfile->Database)) ;
(*KZBBELA) = JZBBELA;
 /* line 316: */
LZBBELA_file = A_CALLPROC(DJJAELA_database_file,((*(&(TYJAELA_discfile->Database)))),((*(&(TYJAELA_discfile->Database))),(DJJAELA_database_file).nonlocals));
 /* line 317: */
MZBBELA = (&(HXJAELA_library->File)) ;
(*MZBBELA) = LZBBELA_file;
 /* line 318: */
NZBBELA = (&(HXJAELA_library->Name)) ;
(*NZBBELA) = GZBBELA_libname.Name;
 /* line 319: */
OZBBELA = (&(HXJAELA_library->Version)) ;
(*OZBBELA) = 0;
 /* line 320: */
PUBBELA_clearlib(Msg);
 /* line 321: */
IJBBELA_savelib(A68_FALSE, Msg);
 /* line 322: */
PZBBELA = (&(HXJAELA_library->Libchanged)) ;
(*PZBBELA) = A68_FALSE;
 /* line 323: */
LIBAELA_lib_msg( 25, &SZBBELA );
A_CALLPROC(Msg,(SZBBELA, A_HVEC(RZBBELA,A_HVEC(QZBBELA,'F',A68_CHAR ),A68_VC )),(SZBBELA, A_HVEC(RZBBELA,A_HVEC(QZBBELA,'F',A68_CHAR ),A68_VC ),(Msg).nonlocals));
 /* line 324: */
 /* line 325: */
 /* line 326: */
LIBAELA_lib_msg( 43, &UZBBELA );
A_CALLPROC(Msg,(UZBBELA, A_HVEC(TZBBELA,(*(&(HXJAELA_library->Name))),A68_VC )),(UZBBELA, A_HVEC(TZBBELA,(*(&(HXJAELA_library->Name))),A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(create_library);
return;
} 
#undef NL

A_STATIC A68_VOID  YZBBELA_newimport(A68_237 * Ct, A68_VC  Toname, A68_INT  Sort)
{ 
A68_234 ** ZZBBELA_i;
A68_236 * AACBELA_r;
A68_234  BACBELA;  /* collateral clause result */
A68_234 * CACBELA;  /* YIELD */
A_PROC_ENTRY(newimport);
 /* line 334: */
 /* line 336: */
{ 
 /* line 337: */
AACBELA_r = (*(&(Ct->Regions)));
 /* line 338: */
for ( ;; )
{ 
 /* line 339: */
if ( !((AACBELA_r!=CVJAELA_nilregions)) ) break;
ZZBBELA_i = (&((&(AACBELA_r->Region))->Imports));
 /* line 340: */
for ( ;; )
{ 
if ( !(((*ZZBBELA_i)!=GUJAELA_nilimports)) ) break;
ZZBBELA_i = (&((*ZZBBELA_i)->Rest));
}
 /* line 341: */
 /* line 342: */
BACBELA.Binding.Ctn.Context = TTCAOST_nullid;
BACBELA.Binding.Ctn.Import = TTCAOST_nullid;
BACBELA.Binding.Name = TTCAOST_nullid;
BACBELA.Binding.Rename = Toname;
BACBELA.Binding.Sort = Sort;
BACBELA.Binding.Info = UACAELA_nilptr;
BACBELA.Rest = GUJAELA_nilimports;
CACBELA = A_HEAP(A68_234 ) ;
(*CACBELA) = BACBELA ;
(*ZZBBELA_i) = CACBELA;
 /* line 343: */
 /* line 344: */
AACBELA_r = (*(&(AACBELA_r->Rest)));
}
 /* line 345: */
} 
A_PROC_EXIT(newimport);
return;
} 
#undef NL

A_STATIC A68_VOID  FACBELA_removeimport(A68_237 * Ct, A68_VC  Declname)
{ 
A68_234 ** GACBELA_i;
A68_236 * HACBELA_r;
A_PROC_ENTRY(removeimport);
 /* line 348: */
 /* line 350: */
{ 
 /* line 351: */
HACBELA_r = (*(&(Ct->Regions)));
 /* line 352: */
for ( ;; )
{ 
 /* line 353: */
if ( !((HACBELA_r!=CVJAELA_nilregions)) ) break;
GACBELA_i = (&((&(HACBELA_r->Region))->Imports));
 /* line 354: */
for ( ;; )
{ 
if ( !(A_VC_NE((*(&((&((*GACBELA_i)->Binding))->Rename))),Declname)) ) break;
GACBELA_i = (&((*GACBELA_i)->Rest));
}
 /* line 355: */
(*GACBELA_i) = (*(&((*GACBELA_i)->Rest)));
 /* line 356: */
 /* line 357: */
HACBELA_r = (*(&(HACBELA_r->Rest)));
}
 /* line 358: */
} 
A_PROC_EXIT(removeimport);
return;
} 
#undef NL

A_STATIC A68_VOID  KACBELA_cancelimport(A68_237 * Ct, A68_VC  Declname)
{ 
A68_236 * LACBELA_r;
A68_242  MACBELA;  /* collateral clause result */
A68_233 * NACBELA_b;
A68_VC  QACBELA;  /* avoid structure result */
A68_VC * RACBELA;  /* YIELD */
A68_162  SACBELA;  /* collateral clause result */
A68_162 * TACBELA;  /* YIELD */
A_PROC_ENTRY(cancelimport);
 /* line 361: */
 /* line 363: */
{ 
LACBELA_r = (*(&(Ct->Regions)));
 /* line 364: */
for ( ;; )
{ 
 /* line 365: */
if ( !((LACBELA_r!=CVJAELA_nilregions)) ) break;
MACBELA.Context = Ct;
MACBELA.Region = (&(LACBELA_r->Region));
NACBELA_b = LEKAELA_get_binding(MACBELA, Declname);
 /* line 366: */
RSCAOST_makeid( PACBELA, &QACBELA );
RACBELA = (&(NACBELA_b->Name)) ;
(*RACBELA) = QACBELA;
 /* line 367: */
SACBELA.Context = TTCAOST_nullid;
SACBELA.Import = TTCAOST_nullid;
TACBELA = (&(NACBELA_b->Ctn)) ;
(*TACBELA) = SACBELA;
 /* line 368: */
 /* line 369: */
LACBELA_r = (*(&(LACBELA_r->Rest)));
}
 /* line 370: */
} 
A_PROC_EXIT(cancelimport);
return;
} 
#undef NL

A_STATIC A68_VOID  WACBELA_outputcancelled(A68_237 * Ct, A68_97  Msg)
{ 
A68_234 ** XACBELA_i;
A68_BOOL  YACBELA_first;
A68_236 * ZACBELA_r;
A68_162  ABCBELA_ctn;
A68_VC * DBCBELA;  /* YIELD */
A68_162  EBCBELA;  /* collateral clause result */
A68_VC  FBCBELA;  /* avoid structure result */
A68_46  GBCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  HBCBELA;  /* avoid structure result */
A68_92  IBCBELA;  /* avoid structure result */
A68_46  JBCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  KBCBELA;  /* avoid structure result */
A68_92  LBCBELA;  /* avoid structure result */
A68_312  MBCBELA;  /* collateral clause result */
A68_VC  NBCBELA;  /* avoid structure result */
A68_46  OBCBELA;  /* OPERATORS - istruct -> vector */
A68_92  PBCBELA;  /* avoid structure result */
A68_92  QBCBELA;  /* avoid structure result */
A_PROC_ENTRY(outputcancelled);
 /* line 373: */
 /* line 375: */
{ 
 /* line 376: */
ZACBELA_r = (*(&(Ct->Regions)));
 /* line 377: */
 /* line 378: */
for ( ;; )
{ 
 /* line 379: */
if ( !((ZACBELA_r!=CVJAELA_nilregions)) ) break;
XACBELA_i = (&((&(ZACBELA_r->Region))->Imports));
 /* line 380: */
YACBELA_first = A68_TRUE;
 /* line 381: */
for ( ;; )
{ 
 /* line 382: */
if ( !(((*XACBELA_i)!=GUJAELA_nilimports)) ) break;
 /* line 383: */
if ( A_VC_EQ((*(&((&((*XACBELA_i)->Binding))->Name))),CBCBELA) )
{ 
DBCBELA = (&((&((*XACBELA_i)->Binding))->Name)) ;
(*DBCBELA) = TTCAOST_nullid;
 /* line 384: */
 /* line 385: */
if ( YACBELA_first )
{ 
YACBELA_first = A68_FALSE;
 /* line 386: */
EBCBELA.Context = (*(&(Ct->Name)));
EBCBELA.Import = (*(&((&(ZACBELA_r->Region))->Name)));
ABCBELA_ctn = EBCBELA;
 /* line 387: */
BAKAELA_ctos( ABCBELA_ctn, &FBCBELA );
LIBAELA_lib_msg( 23, &HBCBELA );
A_CALLPROC(Msg,(HBCBELA, A_HVEC(GBCBELA,FBCBELA,A68_VC )),(HBCBELA, A_HVEC(GBCBELA,FBCBELA,A68_VC ),(Msg).nonlocals));
 /* line 388: */
 /* line 389: */
if ( A_VC_EQ((*(&((&(ZACBELA_r->Region))->Name))),TTCAOST_nullid) )
{ 
 /* line 390: */
LIBAELA_lib_msg( 50, &IBCBELA );
A_CALLPROC(Msg,(IBCBELA, VJAAOSI_nullmsg),(IBCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 391: */
 /* line 392: */
 /* line 393: */
 /* line 394: */
LIBAELA_lib_msg( 51, &KBCBELA );
A_CALLPROC(Msg,(KBCBELA, A_HVEC(JBCBELA,(*(&((&(ZACBELA_r->Region))->Name))),A68_VC )),(KBCBELA, A_HVEC(JBCBELA,(*(&((&(ZACBELA_r->Region))->Name))),A68_VC ),(Msg).nonlocals));
} 
} 
else
{ 
 /* line 395: */
LIBAELA_lib_msg( 1, &LBCBELA );
A_CALLPROC(Msg,(LBCBELA, VJAAOSI_nullmsg),(LBCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 396: */
 /* line 397: */
QVJAELA_sort_id( (*(&((&((*XACBELA_i)->Binding))->Sort))), &NBCBELA );
MBCBELA.data[0] = NBCBELA;
MBCBELA.data[1] = (*(&((&((*XACBELA_i)->Binding))->Rename)));
 /* line 398: */
LIBAELA_lib_msg( 52, &PBCBELA );
A_CALLPROC(Msg,(PBCBELA, A_HISVEC(OBCBELA,MBCBELA,2,A68_VC )),(PBCBELA, A_HISVEC(OBCBELA,MBCBELA,2,A68_VC ),(Msg).nonlocals));
} 
 /* line 399: */
 /* line 400: */
XACBELA_i = (&((*XACBELA_i)->Rest));
}
 /* line 401: */
LIBAELA_lib_msg( 2, &QBCBELA );
A_CALLPROC(Msg,(QBCBELA, VJAAOSI_nullmsg),(QBCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 402: */
 /* line 403: */
ZACBELA_r = (*(&(ZACBELA_r->Rest)));
}
 /* line 404: */
} 
A_PROC_EXIT(outputcancelled);
return;
} 
#undef NL

A_STATIC A68_234 * TBCBELA_copyimports(A68_234 * I, A68_BOOL  Copy)
{ 
A68_234 * UBCBELA;  /* clause result */
A68_234 * VBCBELA_rest;
A68_234  WBCBELA;  /* collateral clause result */
A68_234 * XBCBELA;  /* YIELD */
A_PROC_ENTRY(copyimports);
 /* line 408: */
 /* line 410: */
{ 
 /* line 411: */
 /* line 412: */
if ( (I==GUJAELA_nilimports) )
{ 
UBCBELA = I;
} 
else
{ 
VBCBELA_rest = TBCBELA_copyimports((*(&(I->Rest))), Copy);
 /* line 413: */
 /* line 414: */
 /* line 415: */
if ( Copy )
{ 
WBCBELA.Binding = (*(&(I->Binding)));
 /* line 416: */
WBCBELA.Rest = VBCBELA_rest;
} 
else
{ 
WBCBELA.Binding.Ctn.Context = TTCAOST_nullid;
WBCBELA.Binding.Ctn.Import = TTCAOST_nullid;
WBCBELA.Binding.Name = TTCAOST_nullid;
 /* line 417: */
WBCBELA.Binding.Rename = (*(&((&(I->Binding))->Rename)));
WBCBELA.Binding.Sort = (*(&((&(I->Binding))->Sort)));
WBCBELA.Binding.Info = UACAELA_nilptr;
 /* line 418: */
 /* line 419: */
WBCBELA.Rest = VBCBELA_rest;
} 
 /* line 420: */
XBCBELA = A_HEAP(A68_234 ) ;
(*XBCBELA) = WBCBELA ;
UBCBELA = XBCBELA;
} 
} 
A_PROC_EXIT(copyimports);
return( UBCBELA );
} 
#undef NL

A_STATIC A68_BOOL  BCCBELA_isimported(A68_VC  Declname, A68_162  Ctn, A68_97  Msg)
{ 
A68_239 * CCCBELA_c;
A68_236 * DCCBELA_r;
A68_234 * ECCBELA_ips;
A68_162  FCCBELA_ctname;
A68_BOOL  GCCBELA_imported;
A68_BOOL  HCCBELA_continue;
A68_BOOL  ICCBELA_first_in_context;
A68_BOOL  JCCBELA;  /* optbool result */
A68_233 * KCCBELA_b;
A68_BOOL  LCCBELA;  /* optbool result */
A68_BOOL  MCCBELA;  /* optbool result */
A68_VC  NCCBELA;  /* avoid structure result */
A68_46  OCCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  PCCBELA;  /* avoid structure result */
A68_312  QCCBELA;  /* collateral clause result */
A68_VC  RCCBELA;  /* avoid structure result */
A68_46  SCCBELA;  /* OPERATORS - istruct -> vector */
A68_92  TCCBELA;  /* avoid structure result */
A68_162  UCCBELA;  /* collateral clause result */
A68_VC  VCCBELA;  /* avoid structure result */
A68_46  WCCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  XCCBELA;  /* avoid structure result */
A68_312  YCCBELA;  /* collateral clause result */
A68_VC  ZCCBELA;  /* avoid structure result */
A68_46  ADCBELA;  /* OPERATORS - istruct -> vector */
A68_92  BDCBELA;  /* avoid structure result */
A68_92  CDCBELA;  /* avoid structure result */
A68_BOOL  DDCBELA;  /* clause result */
A_PROC_ENTRY(isimported);
 /* line 425: */
 /* line 428: */
{ 
CCCBELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 429: */
 /* line 430: */
 /* line 431: */
GCCBELA_imported = A68_FALSE;
 /* line 432: */
for ( ;; )
{ 
 /* line 433: */
if ( !((CCCBELA_c!=EVJAELA_nilcontexts)) ) break;
DCCBELA_r = (*(&((&(CCCBELA_c->Context))->Regions)));
 /* line 434: */
for ( ;; )
{ 
 /* line 435: */
if ( !((DCCBELA_r!=CVJAELA_nilregions)) ) break;
ECCBELA_ips = (*(&((&(DCCBELA_r->Region))->Imports)));
 /* line 436: */
HCCBELA_continue = A68_TRUE;
 /* line 437: */
ICCBELA_first_in_context = A68_TRUE;
 /* line 438: */
for ( ;; )
{ 
 /* line 439: */
JCCBELA = (ECCBELA_ips!=GUJAELA_nilimports);
if ( JCCBELA )
{JCCBELA = HCCBELA_continue;
}
if ( !(JCCBELA) ) break;
KCCBELA_b = (&(ECCBELA_ips->Binding));
 /* line 440: */
 /* line 441: */
LCCBELA = A_VC_EQ((*(&(KCCBELA_b->Name))),Declname);
if ( LCCBELA )
{LCCBELA = A_VC_EQ((*(&((&(KCCBELA_b->Ctn))->Context))),Ctn.Context);
}
 /* line 442: */
if ( ! LCCBELA )
{MCCBELA = A_VC_EQ(Declname,TTCAOST_nullid);
if ( MCCBELA )
{MCCBELA = SZJAELA_((*(&(KCCBELA_b->Ctn))), Ctn);
}
 /* line 443: */
LCCBELA = MCCBELA;
}
if ( LCCBELA )
{ 
 /* line 444: */
if ( !GCCBELA_imported )
{ 
 /* line 445: */
if ( A_VC_EQ(Declname,TTCAOST_nullid) )
{ 
 /* line 446: */
 /* line 447: */
BAKAELA_ctos( Ctn, &NCCBELA );
LIBAELA_lib_msg( 53, &PCCBELA );
A_CALLPROC(Msg,(PCCBELA, A_HVEC(OCCBELA,NCCBELA,A68_VC )),(PCCBELA, A_HVEC(OCCBELA,NCCBELA,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 448: */
QVJAELA_sort_id( (*(&(KCCBELA_b->Sort))), &RCCBELA );
QCCBELA.data[0] = RCCBELA;
QCCBELA.data[1] = Declname;
 /* line 449: */
LIBAELA_lib_msg( 54, &TCCBELA );
A_CALLPROC(Msg,(TCCBELA, A_HISVEC(SCCBELA,QCCBELA,2,A68_VC )),(TCCBELA, A_HISVEC(SCCBELA,QCCBELA,2,A68_VC ),(Msg).nonlocals));
} 
 /* line 450: */
 /* line 451: */
GCCBELA_imported = A68_TRUE;
} 
 /* line 453: */
 /* line 454: */
if ( ICCBELA_first_in_context )
{ 
UCCBELA.Context = (*(&((&(CCCBELA_c->Context))->Name)));
UCCBELA.Import = (*(&((&(DCCBELA_r->Region))->Name)));
FCCBELA_ctname = UCCBELA;
 /* line 455: */
BAKAELA_ctos( FCCBELA_ctname, &VCCBELA );
LIBAELA_lib_msg( 55, &XCCBELA );
A_CALLPROC(Msg,(XCCBELA, A_HVEC(WCCBELA,VCCBELA,A68_VC )),(XCCBELA, A_HVEC(WCCBELA,VCCBELA,A68_VC ),(Msg).nonlocals));
 /* line 456: */
 /* line 457: */
ICCBELA_first_in_context = A68_FALSE;
} 
 /* line 458: */
QVJAELA_sort_id( (*(&(KCCBELA_b->Sort))), &ZCCBELA );
YCCBELA.data[0] = ZCCBELA;
YCCBELA.data[1] = (*(&(KCCBELA_b->Rename)));
LIBAELA_lib_msg( 56, &BDCBELA );
A_CALLPROC(Msg,(BDCBELA, A_HISVEC(ADCBELA,YCCBELA,2,A68_VC )),(BDCBELA, A_HISVEC(ADCBELA,YCCBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 460: */
if ( A_VC_NE(Declname,TTCAOST_nullid) )
{ 
 /* line 461: */
HCCBELA_continue = A68_FALSE;
} 
} 
 /* line 462: */
 /* line 463: */
ECCBELA_ips = (*(&(ECCBELA_ips->Rest)));
}
 /* line 464: */
 /* line 465: */
DCCBELA_r = (*(&(DCCBELA_r->Rest)));
}
 /* line 466: */
 /* line 467: */
CCCBELA_c = (*(&(CCCBELA_c->Rest)));
}
 /* line 468: */
if ( GCCBELA_imported )
{ 
LIBAELA_lib_msg( 2, &CDCBELA );
A_CALLPROC(Msg,(CDCBELA, VJAAOSI_nullmsg),(CDCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 469: */
 /* line 470: */
DDCBELA = GCCBELA_imported;
} 
A_PROC_EXIT(isimported);
return( DDCBELA );
} 
#undef NL

A_STATIC A68_BOOL  GDCBELA_closurecontains(A68_162  Ctna, A68_162  Ctnb)
{ 
A68_242  HDCBELA;  /* avoid structure result */
A68_242  IDCBELA_cr;
A68_234 * JDCBELA_i;
A68_BOOL  KDCBELA_ans;
A68_BOOL  LDCBELA;  /* optbool result */
A68_BOOL  MDCBELA;  /* optbool result */
A68_BOOL  NDCBELA;  /* optbool result */
A68_BOOL  ODCBELA;  /* clause result */
A_PROC_ENTRY(closurecontains);
 /* line 481: */
 /* line 482: */
{ 
AEKAELA_get_region( UDKAELA_get_context(Ctna.Context), Ctna.Import, &HDCBELA );
IDCBELA_cr = HDCBELA;
 /* line 483: */
JDCBELA_i = HEKAELA_get_imports(IDCBELA_cr);
 /* line 484: */
KDCBELA_ans = A68_FALSE;
 /* line 485: */
for ( ;; )
{ 
LDCBELA = !KDCBELA_ans;
if ( LDCBELA )
{ /* line 486: */
LDCBELA = (JDCBELA_i!=GUJAELA_nilimports);
}
if ( !(LDCBELA) ) break;
MDCBELA = SZJAELA_(Ctna, Ctnb);
if ( ! MDCBELA )
{ /* line 487: */
NDCBELA = A_VC_NE((*(&((&(JDCBELA_i->Binding))->Name))),TTCAOST_nullid);
if ( NDCBELA )
{ /* line 488: */
NDCBELA = GDCBELA_closurecontains((*(&((&(JDCBELA_i->Binding))->Ctn))), Ctnb);
}
MDCBELA = NDCBELA;
}
if ( MDCBELA )
{ 
 /* line 489: */
KDCBELA_ans = A68_TRUE;
} 
else
{ 
 /* line 490: */
 /* line 491: */
JDCBELA_i = (*(&(JDCBELA_i->Rest)));
} 
}
 /* line 492: */
 /* line 493: */
ODCBELA = KDCBELA_ans;
} 
A_PROC_EXIT(closurecontains);
return( ODCBELA );
} 
#undef NL

A_STATIC A68_BOOL  TDCBELA_inimports(A68_242  Cr, A68_179  Impdp, A68_179  Info, A68_97  Msg)
{ 
A68_BOOL  UDCBELA_change;
A68_VC  VDCBELA_ida;
A68_VC  WDCBELA_idb;
A68_162  XDCBELA_ctn;
A68_234 * YDCBELA_ips;
A68_206 * ZDCBELA_buffer;
A68_VC  AECBELA;  /* avoid structure result */
A68_VC  BECBELA;  /* avoid structure result */
A68_162  CECBELA;  /* collateral clause result */
A68_VC  DECBELA;  /* avoid structure result */
A68_VC  EECBELA;  /* avoid structure result */
A68_233 * FECBELA_b;
A68_BOOL  GECBELA;  /* optbool result */
A68_162  HECBELA;  /* avoid structure result */
A68_330  IECBELA;  /* collateral clause result */
A68_VC  JECBELA;  /* avoid structure result */
A68_VC  KECBELA;  /* avoid structure result */
A68_46  LECBELA;  /* OPERATORS - istruct -> vector */
A68_92  MECBELA;  /* avoid structure result */
A68_330  NECBELA;  /* collateral clause result */
A68_VC  OECBELA;  /* avoid structure result */
A68_46  PECBELA;  /* OPERATORS - istruct -> vector */
A68_92  QECBELA;  /* avoid structure result */
A68_VC * RECBELA;  /* YIELD */
A68_162 * SECBELA;  /* YIELD */
A68_179 * TECBELA;  /* YIELD */
A68_BOOL  UECBELA;  /* clause result */
A_PROC_ENTRY(inimports);
 /* line 497: */
 /* line 500: */
{ 
MTBBELA_checkregionselected(Cr, Msg);
 /* line 501: */
UDCBELA_change = A68_FALSE;
 /* line 502: */
 /* line 503: */
 /* line 504: */
 /* line 505: */
if ( !UXIAELA_isnilptr(TYJAELA_discfile, Impdp) )
{ 
ZDCBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, Impdp);
 /* line 506: */
for ( ;; )
{ 
 /* line 507: */
if ( !(((*(&(ZDCBELA_buffer->Index)))<(*(&((*(&(ZDCBELA_buffer->Current)))->Rvc))).upb)) ) break;
CCJAELA_inid2( ZDCBELA_buffer, &AECBELA );
VDCBELA_ida = AECBELA;
CCJAELA_inid2( ZDCBELA_buffer, &BECBELA );
WDCBELA_idb = BECBELA;
 /* line 508: */
CCJAELA_inid2( ZDCBELA_buffer, &DECBELA );
CECBELA.Context = DECBELA;
CCJAELA_inid2( ZDCBELA_buffer, &EECBELA );
CECBELA.Import = EECBELA;
XDCBELA_ctn = CECBELA;
 /* line 509: */
YDCBELA_ips = HEKAELA_get_imports(Cr);
 /* line 510: */
for ( ;; )
{ 
if ( !(A_VC_NE((*(&((&(YDCBELA_ips->Binding))->Rename))),VDCBELA_ida)) ) break;
YDCBELA_ips = (*(&(YDCBELA_ips->Rest)));
}
 /* line 511: */
FECBELA_b = (&(YDCBELA_ips->Binding));
 /* line 512: */
GECBELA = A_VC_NE((*(&(FECBELA_b->Name))),WDCBELA_idb);
if ( ! GECBELA )
{GECBELA = !SZJAELA_((*(&(FECBELA_b->Ctn))), XDCBELA_ctn);
}
 /* line 513: */
if ( GECBELA )
{ /* line 514: */
NBKAELA_ctn( Cr, &HECBELA );
GECBELA = GDCBELA_closurecontains(XDCBELA_ctn, HECBELA);
}
if ( GECBELA )
{ 
IECBELA.data[0] = WDCBELA_idb;
BAKAELA_ctos( XDCBELA_ctn, &JECBELA );
IECBELA.data[1] = JECBELA;
UAKAELA_ctos( Cr, &KECBELA );
IECBELA.data[2] = KECBELA;
 /* line 517: */
LIBAELA_lib_msg( 60, &MECBELA );
A_CALLPROC(Msg,(MECBELA, A_HISVEC(LECBELA,IECBELA,3,A68_VC )),(MECBELA, A_HISVEC(LECBELA,IECBELA,3,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 518: */
if ( A_VC_EQ((*(&((&XDCBELA_ctn)->Context))),(*(&(Cr.Context->Name)))) )
{ 
 /* line 519: */
 /* line 520: */
NECBELA.data[0] = WDCBELA_idb;
BAKAELA_ctos( XDCBELA_ctn, &OECBELA );
NECBELA.data[1] = OECBELA;
NECBELA.data[2] = (*(&(Cr.Region->Name)));
 /* line 521: */
LIBAELA_lib_msg( 61, &QECBELA );
A_CALLPROC(Msg,(QECBELA, A_HISVEC(PECBELA,NECBELA,3,A68_VC )),(QECBELA, A_HISVEC(PECBELA,NECBELA,3,A68_VC ),(Msg).nonlocals));
} 
else
{ 
RECBELA = (&(FECBELA_b->Name)) ;
(*RECBELA) = WDCBELA_idb;
SECBELA = (&(FECBELA_b->Ctn)) ;
(*SECBELA) = XDCBELA_ctn;
 /* line 522: */
TECBELA = (&(FECBELA_b->Info)) ;
(*TECBELA) = Info;
 /* line 523: */
 /* line 524: */
 /* line 525: */
UDCBELA_change = A68_TRUE;
} 
} 
}
 /* line 526: */
} 
 /* line 527: */
 /* line 528: */
UECBELA = UDCBELA_change;
} 
A_PROC_EXIT(inimports);
return( UECBELA );
} 
#undef NL
 /* line 531: */
 /* line 532: */

A_STATIC A68_VOID  BFCBELA_incompiled(A68_179  Dp, A68_179 * Imports, A68_180 * Info, A68_180 * Bodies, A68_180 * Spacemaps, A68_97  Msg, A68_238  *ReturnedValue)
{ 
A68_308  DFCBELA_generator;   /* proc value of non-global proc */
A68_180  JFCBELA;  /* avoid structure result */
A68_180  IFCBELA_dps;
A68_INT  KFCBELA_upb;
A68_332  MFCBELA_generator;   /* proc value of non-global proc */
A68_238  RFCBELA;  /* avoid structure result */
A68_238  SFCBELA_decls;
A68_INT  TFCBELA;  /* YIELD */
A68_INT  UFCBELA_i;
A68_INT  VFCBELA;  /* to part of loop */
A68_31  XFCBELA_generator;   /* proc value of non-global proc */
A68_VC  DGCBELA;  /* avoid structure result */
A68_VC  EGCBELA_c;
A68_INT  FGCBELA;  /* YIELD */
A68_VC * GGCBELA;  /* YIELD */
A68_BOOL * HGCBELA;  /* YIELD */
A68_308  JGCBELA_generator;   /* proc value of non-global proc */
A68_180  OGCBELA;  /* avoid structure result */
A68_INT  PGCBELA;  /* YIELD */
A68_179  QGCBELA_infodp;
A68_179 * RGCBELA_i;
A68_INT  SGCBELA;  /* forall loop counter */
A68_308  UGCBELA_generator;   /* proc value of non-global proc */
A68_180  ZGCBELA;  /* avoid structure result */
A68_INT  AHCBELA_i;
A68_INT  BHCBELA;  /* to part of loop */
A68_INT  CHCBELA;  /* YIELD */
A68_179 * DHCBELA;  /* YIELD */
A68_308  FHCBELA_generator;   /* proc value of non-global proc */
A68_180  KHCBELA;  /* avoid structure result */
A68_INT  LHCBELA_i;
A68_INT  MHCBELA;  /* to part of loop */
A68_INT  NHCBELA;  /* YIELD */
A68_179 * OHCBELA;  /* YIELD */
A68_308  QHCBELA_generator;   /* proc value of non-global proc */
A68_180  VHCBELA;  /* avoid structure result */
A68_INT  WHCBELA;  /* YIELD */
A68_179 * XHCBELA;  /* YIELD */
A68_238  YHCBELA;  /* clause result */
A_PROC_ENTRY(incompiled);
 /* line 533: */
 /* line 540: */
{ 
A_CLOSURE( DFCBELA_generator, EFCBELA_generator, FFCBELA_generator );
(( FFCBELA_generator * ) ( DFCBELA_generator.nonlocals )) -> Dp = Dp;
(( FFCBELA_generator * ) ( DFCBELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(DFCBELA_generator,(A68_TRUE, &JFCBELA),(A68_TRUE, &JFCBELA,(DFCBELA_generator).nonlocals));
IFCBELA_dps = JFCBELA;
 /* line 541: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, IFCBELA_dps, Dp, Msg);
 /* line 542: */
KFCBELA_upb = ((IFCBELA_dps.upb-2)/3);
 /* line 543: */
A_CLOSURE( MFCBELA_generator, NFCBELA_generator, OFCBELA_generator );
(( OFCBELA_generator * ) ( MFCBELA_generator.nonlocals )) -> KFCBELA_upb = KFCBELA_upb;
A_CALLPROC(MFCBELA_generator,(A68_FALSE, &RFCBELA),(A68_FALSE, &RFCBELA,(MFCBELA_generator).nonlocals));
SFCBELA_decls = RFCBELA;
 /* line 544: */
TFCBELA = IFCBELA_dps.upb ;
(*Imports) = (*(&A_VINDEX(IFCBELA_dps,TFCBELA)));
 /* line 546: */
 /* line 547: */
VFCBELA = SFCBELA_decls.upb;
for ( UFCBELA_i = 1;
UFCBELA_i <= VFCBELA;
UFCBELA_i += 1 )
{ 
A_CLOSURE( XFCBELA_generator, YFCBELA_generator, ZFCBELA_generator );
(( ZFCBELA_generator * ) ( XFCBELA_generator.nonlocals )) -> IFCBELA_dps = IFCBELA_dps;
(( ZFCBELA_generator * ) ( XFCBELA_generator.nonlocals )) -> UFCBELA_i = UFCBELA_i;
(( ZFCBELA_generator * ) ( XFCBELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(XFCBELA_generator,(A68_FALSE, &DGCBELA),(A68_FALSE, &DGCBELA,(XFCBELA_generator).nonlocals));
EGCBELA_c = DGCBELA;
 /* line 548: */
FGCBELA = ((3*UFCBELA_i)-2) ;
AFJAELA_myreadchars(TYJAELA_discfile, EGCBELA_c, (*(&A_VINDEX(IFCBELA_dps,FGCBELA))), Msg);
 /* line 549: */
GGCBELA = (&((&A_VINDEX(SFCBELA_decls,UFCBELA_i))->Il)) ;
(*GGCBELA) = EGCBELA_c;
 /* line 550: */
 /* line 551: */
HGCBELA = (&((&A_VINDEX(SFCBELA_decls,UFCBELA_i))->Export)) ;
(*HGCBELA) = A68_FALSE;
}
 /* line 552: */
XABBELA_indecls(SFCBELA_decls);
 /* line 554: */
A_CLOSURE( JGCBELA_generator, KGCBELA_generator, LGCBELA_generator );
(( LGCBELA_generator * ) ( JGCBELA_generator.nonlocals )) -> KFCBELA_upb = KFCBELA_upb;
A_CALLPROC(JGCBELA_generator,(A68_FALSE, &OGCBELA),(A68_FALSE, &OGCBELA,(JGCBELA_generator).nonlocals));
(*Info) = OGCBELA;
 /* line 555: */
PGCBELA = (IFCBELA_dps.upb-1) ;
QGCBELA_infodp = (*(&A_VINDEX(IFCBELA_dps,PGCBELA)));
 /* line 556: */
SGCBELA = (*Info).upb -1;
RGCBELA_i = (*Info).data;
for (;SGCBELA-- >= 0;
(RGCBELA_i++
) )
{
(*RGCBELA_i) = QGCBELA_infodp;
}
 /* line 557: */
A_CLOSURE( UGCBELA_generator, VGCBELA_generator, WGCBELA_generator );
(( WGCBELA_generator * ) ( UGCBELA_generator.nonlocals )) -> KFCBELA_upb = KFCBELA_upb;
A_CALLPROC(UGCBELA_generator,(A68_FALSE, &ZGCBELA),(A68_FALSE, &ZGCBELA,(UGCBELA_generator).nonlocals));
(*Bodies) = ZGCBELA;
 /* line 558: */
BHCBELA = KFCBELA_upb;
for ( AHCBELA_i = 1;
AHCBELA_i <= BHCBELA;
AHCBELA_i += 1 )
{ 
CHCBELA = ((3*AHCBELA_i)-1) ;
DHCBELA = (&A_VINDEX((*Bodies),AHCBELA_i)) ;
(*DHCBELA) = (*(&A_VINDEX(IFCBELA_dps,CHCBELA)));
}
 /* line 559: */
A_CLOSURE( FHCBELA_generator, GHCBELA_generator, HHCBELA_generator );
(( HHCBELA_generator * ) ( FHCBELA_generator.nonlocals )) -> KFCBELA_upb = KFCBELA_upb;
A_CALLPROC(FHCBELA_generator,(A68_FALSE, &KHCBELA),(A68_FALSE, &KHCBELA,(FHCBELA_generator).nonlocals));
(*Spacemaps) = KHCBELA;
 /* line 560: */
MHCBELA = KFCBELA_upb;
for ( LHCBELA_i = 1;
LHCBELA_i <= MHCBELA;
LHCBELA_i += 1 )
{ 
NHCBELA = (3*LHCBELA_i) ;
OHCBELA = (&A_VINDEX((*Spacemaps),LHCBELA_i)) ;
(*OHCBELA) = (*(&A_VINDEX(IFCBELA_dps,NHCBELA)));
}
 /* line 562: */
 /* line 563: */
if ( (KFCBELA_upb==0) )
{ 
A_CLOSURE( QHCBELA_generator, RHCBELA_generator, SHCBELA_generator );
A_CALLPROC(QHCBELA_generator,(A68_FALSE, &VHCBELA),(A68_FALSE, &VHCBELA,(QHCBELA_generator).nonlocals));
(*Info) = VHCBELA;
 /* line 564: */
 /* line 565: */
WHCBELA = 1 ;
XHCBELA = (&A_VINDEX((*Info),WHCBELA)) ;
(*XHCBELA) = QGCBELA_infodp;
} 
 /* line 566: */
 /* line 567: */
YHCBELA = SFCBELA_decls;
} 
A_PROC_EXIT(incompiled);
*ReturnedValue = (YHCBELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  BICBELA_inuses(A68_VC  Id, A68_231 * U)
{ 
A68_BOOL  CICBELA;  /* clause result */
A68_BOOL  DICBELA;  /* optbool result */
A_PROC_ENTRY(inuses);
 /* line 572: */
 /* line 573: */
{ 
 /* line 574: */
if ( (U==HUJAELA_niluses) )
{ 
 /* line 575: */
CICBELA = A68_FALSE;
} 
else
{ 
DICBELA = A_VC_EQ((*(&(U->Name))),Id);
if ( ! DICBELA )
{ /* line 576: */
DICBELA = BICBELA_inuses(Id, (*(&(U->Rest))));
}
 /* line 577: */
CICBELA = DICBELA;
} 
} 
A_PROC_EXIT(inuses);
return( CICBELA );
} 
#undef NL

A_STATIC A68_BOOL  GICBELA_usesindecls(A68_232  D, A68_238  Decls)
{ 
A68_231 * HICBELA_u;
A68_BOOL  IICBELA_used;
A68_BOOL  JICBELA;  /* optbool result */
A68_BOOL  KICBELA;  /* clause result */
A_PROC_ENTRY(usesindecls);
 /* line 580: */
 /* line 581: */
{ 
HICBELA_u = D.Uses;
 /* line 582: */
IICBELA_used = A68_TRUE;
 /* line 583: */
for ( ;; )
{ 
JICBELA = IICBELA_used;
if ( JICBELA )
{ /* line 584: */
JICBELA = (HICBELA_u!=HUJAELA_niluses);
}
if ( !(JICBELA) ) break;
 /* line 585: */
if ( (UJBBELA_finddecl((*(&(HICBELA_u->Name))), Decls)==0) )
{ 
 /* line 586: */
IICBELA_used = A68_FALSE;
} 
else
{ 
 /* line 587: */
 /* line 588: */
HICBELA_u = (*(&(HICBELA_u->Rest)));
} 
}
 /* line 589: */
 /* line 590: */
KICBELA = IICBELA_used;
} 
A_PROC_EXIT(usesindecls);
return( KICBELA );
} 
#undef NL

A68_VOID  OICBELA_info_chars(A68_237 * Ct, A68_INT  Declno, A68_97  Msg)
{ 
A68_243 * PICBELA_s;
A68_VC  RICBELA;  /* clause result */
A68_VC  TICBELA;  /* avoid structure result */
A68_VC  UICBELA;  /* avoid structure result */
A68_VC  VICBELA_date;
A68_46  WICBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  XICBELA;  /* avoid structure result */
A68_46  YICBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  ZICBELA;  /* avoid structure result */
A_PROC_ENTRY(info_chars);
 /* line 596: */
 /* line 597: */
{ 
PICBELA_s = CFBBELA_get_decl_source(Ct, Declno);
 /* line 598: */
 /* line 599: */
 /* line 600: */
if ( ((*(&(PICBELA_s->Date)))==0) )
{ 
ZAAAOSI_makervc( SICBELA, &TICBELA );
RICBELA = TICBELA;
} 
else
{ 
 /* line 601: */
QDDAOST_date_time( (*(&(PICBELA_s->Date))), &UICBELA );
RICBELA = UICBELA;
} 
VICBELA_date = RICBELA;
 /* line 602: */
LIBAELA_lib_msg( 62, &XICBELA );
A_CALLPROC(Msg,(XICBELA, A_HVEC(WICBELA,(*(&(PICBELA_s->Name))),A68_VC )),(XICBELA, A_HVEC(WICBELA,(*(&(PICBELA_s->Name))),A68_VC ),(Msg).nonlocals));
 /* line 603: */
 /* line 604: */
LIBAELA_lib_msg( 63, &ZICBELA );
A_CALLPROC(Msg,(ZICBELA, A_HVEC(YICBELA,VICBELA_date,A68_VC )),(ZICBELA, A_HVEC(YICBELA,VICBELA_date,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(info_chars);
return;
} 
#undef NL
 /* line 608: */

A68_VOID  FJCBELA_printdecl(A68_237 * Ct, A68_INT  Declno, A68_BOOL  Uses, A68_BOOL  Usedby, A68_97  Msg)
{ 
A68_238  GJCBELA;  /* avoid structure result */
A68_238  HJCBELA_decls;
A68_232  IJCBELA_decl;
A68_231 * JJCBELA_u;
A68_INT  KJCBELA_j;
A68_330  LJCBELA;  /* collateral clause result */
A68_VC  MJCBELA;  /* avoid structure result */
A68_VC  NJCBELA;  /* avoid structure result */
A68_46  OJCBELA;  /* OPERATORS - istruct -> vector */
A68_92  PJCBELA;  /* avoid structure result */
A68_BOOL  QJCBELA_first;
A68_92  RJCBELA;  /* avoid structure result */
A68_92  SJCBELA;  /* avoid structure result */
A68_312  TJCBELA;  /* collateral clause result */
A68_VC  UJCBELA;  /* avoid structure result */
A68_46  VJCBELA;  /* OPERATORS - istruct -> vector */
A68_92  WJCBELA;  /* avoid structure result */
A68_VC  XJCBELA;  /* avoid structure result */
A68_46  YJCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  ZJCBELA;  /* avoid structure result */
A68_92  AKCBELA;  /* avoid structure result */
A68_46  BKCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  CKCBELA;  /* avoid structure result */
A68_92  DKCBELA;  /* avoid structure result */
A68_INT  EKCBELA_i;
A68_INT  FKCBELA;  /* to part of loop */
A68_BOOL  GKCBELA;  /* optbool result */
A68_92  HKCBELA;  /* avoid structure result */
A68_VC  IKCBELA;  /* avoid structure result */
A68_46  JKCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  KKCBELA;  /* avoid structure result */
A68_312  LKCBELA;  /* collateral clause result */
A68_VC  MKCBELA;  /* avoid structure result */
A68_46  NKCBELA;  /* OPERATORS - istruct -> vector */
A68_92  OKCBELA;  /* avoid structure result */
A68_92  PKCBELA;  /* avoid structure result */
A_PROC_ENTRY(printdecl);
 /* line 609: */
 /* line 610: */
{ 
LEBBELA_get_decls( Ct, Msg, &GJCBELA );
HJCBELA_decls = GJCBELA;
 /* line 611: */
IJCBELA_decl = (*(&A_VINDEX(HJCBELA_decls,Declno)));
 /* line 612: */
 /* line 613: */
 /* line 614: */
QVJAELA_sort_id( IJCBELA_decl.Sort, &MJCBELA );
LJCBELA.data[0] = MJCBELA;
LJCBELA.data[1] = IJCBELA_decl.Name;
JIBAOST_version_str( IJCBELA_decl.Version, &NJCBELA );
LJCBELA.data[2] = NJCBELA;
LIBAELA_lib_msg( 64, &PJCBELA );
A_CALLPROC(Msg,(PJCBELA, A_HISVEC(OJCBELA,LJCBELA,3,A68_VC )),(PJCBELA, A_HISVEC(OJCBELA,LJCBELA,3,A68_VC ),(Msg).nonlocals));
 /* line 615: */
OICBELA_info_chars(Ct, Declno, Msg);
 /* line 616: */
QJCBELA_first = A68_TRUE;
 /* line 617: */
 /* line 618: */
if ( Uses )
{ 
LIBAELA_lib_msg( 65, &RJCBELA );
A_CALLPROC(Msg,(RJCBELA, VJAAOSI_nullmsg),(RJCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 619: */
JJCBELA_u = IJCBELA_decl.Uses;
 /* line 620: */
for ( ;; )
{ 
 /* line 621: */
if ( !((JJCBELA_u!=HUJAELA_niluses)) ) break;
if ( QJCBELA_first )
{ 
QJCBELA_first = A68_FALSE;
} 
else
{ 
LIBAELA_lib_msg( 1, &SJCBELA );
A_CALLPROC(Msg,(SJCBELA, VJAAOSI_nullmsg),(SJCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 622: */
QVJAELA_sort_id( (*(&(JJCBELA_u->Sort))), &UJCBELA );
TJCBELA.data[0] = UJCBELA;
TJCBELA.data[1] = (*(&(JJCBELA_u->Name)));
LIBAELA_lib_msg( 66, &WJCBELA );
A_CALLPROC(Msg,(WJCBELA, A_HISVEC(VJCBELA,TJCBELA,2,A68_VC )),(WJCBELA, A_HISVEC(VJCBELA,TJCBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 623: */
KJCBELA_j = TEBBELA_get_decl(Ct, (*(&(JJCBELA_u->Name))), Msg);
 /* line 624: */
 /* line 625: */
if ( ((*(&((&A_VINDEX(HJCBELA_decls,KJCBELA_j))->Version)))!=(*(&(JJCBELA_u->Version)))) )
{ 
 /* line 626: */
 /* line 627: */
JIBAOST_version_str( (*(&(JJCBELA_u->Version))), &XJCBELA );
LIBAELA_lib_msg( 67, &ZJCBELA );
A_CALLPROC(Msg,(ZJCBELA, A_HVEC(YJCBELA,XJCBELA,A68_VC )),(ZJCBELA, A_HVEC(YJCBELA,XJCBELA,A68_VC ),(Msg).nonlocals));
} 
 /* line 628: */
 /* line 629: */
JJCBELA_u = (*(&(JJCBELA_u->Rest)));
}
 /* line 630: */
 /* line 631: */
LIBAELA_lib_msg( 2, &AKCBELA );
A_CALLPROC(Msg,(AKCBELA, VJAAOSI_nullmsg),(AKCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 632: */
QJCBELA_first = A68_TRUE;
 /* line 633: */
 /* line 634: */
if ( Usedby )
{ 
LIBAELA_lib_msg( 23, &CKCBELA );
A_CALLPROC(Msg,(CKCBELA, A_HVEC(BKCBELA,(*(&(Ct->Name))),A68_VC )),(CKCBELA, A_HVEC(BKCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 635: */
LIBAELA_lib_msg( 68, &DKCBELA );
A_CALLPROC(Msg,(DKCBELA, VJAAOSI_nullmsg),(DKCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 636: */
KJCBELA_j = TEBBELA_get_decl(Ct, IJCBELA_decl.Name, Msg);
 /* line 637: */
 /* line 638: */
FKCBELA = HJCBELA_decls.upb;
for ( EKCBELA_i = 1;
EKCBELA_i <= FKCBELA;
EKCBELA_i += 1 )
{ 
GKCBELA = (EKCBELA_i!=KJCBELA_j);
if ( GKCBELA )
{ /* line 639: */
GKCBELA = BICBELA_inuses(IJCBELA_decl.Name, (*(&((&A_VINDEX(HJCBELA_decls,EKCBELA_i))->Uses))));
}
if ( GKCBELA )
{ 
if ( QJCBELA_first )
{ 
QJCBELA_first = A68_FALSE;
} 
else
{ 
LIBAELA_lib_msg( 1, &HKCBELA );
A_CALLPROC(Msg,(HKCBELA, VJAAOSI_nullmsg),(HKCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 640: */
 /* line 641: */
JIBAOST_version_str( (*(&((&A_VINDEX(HJCBELA_decls,EKCBELA_i))->Version))), &IKCBELA );
LIBAELA_lib_msg( 24, &KKCBELA );
A_CALLPROC(Msg,(KKCBELA, A_HVEC(JKCBELA,IKCBELA,A68_VC )),(KKCBELA, A_HVEC(JKCBELA,IKCBELA,A68_VC ),(Msg).nonlocals));
 /* line 642: */
 /* line 643: */
QVJAELA_sort_id( (*(&((&A_VINDEX(HJCBELA_decls,EKCBELA_i))->Sort))), &MKCBELA );
LKCBELA.data[0] = MKCBELA;
LKCBELA.data[1] = (*(&((&A_VINDEX(HJCBELA_decls,EKCBELA_i))->Name)));
 /* line 644: */
 /* line 645: */
LIBAELA_lib_msg( 69, &OKCBELA );
A_CALLPROC(Msg,(OKCBELA, A_HISVEC(NKCBELA,LKCBELA,2,A68_VC )),(OKCBELA, A_HISVEC(NKCBELA,LKCBELA,2,A68_VC ),(Msg).nonlocals));
} 
}
 /* line 646: */
 /* line 647: */
 /* line 648: */
LIBAELA_lib_msg( 2, &PKCBELA );
A_CALLPROC(Msg,(PKCBELA, VJAAOSI_nullmsg),(PKCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(printdecl);
return;
} 
#undef NL
 /* line 651: */

A_STATIC A68_VOID  UKCBELA_sortdecls(A68_237 * Ct, A68_238  Decls, A68_BOOL * Sorted, A68_97  Msg, A68_32  *ReturnedValue)
{ 
A68_332  WKCBELA_generator;   /* proc value of non-global proc */
A68_238  CLCBELA;  /* avoid structure result */
A68_238  BLCBELA_from;
A68_238  ELCBELA;  /* avoid structure result */
A68_238  DLCBELA_to;
A68_33  GLCBELA_generator;   /* proc value of non-global proc */
A68_32  LLCBELA;  /* avoid structure result */
A68_32  MLCBELA_table;
A68_BOOL  NLCBELA_goback;
A68_INT  OLCBELA_t;
A68_INT  PLCBELA_f;
A68_238  QLCBELA;  /* clause result */
A68_238  RLCBELA;  /* OPERATORS - trim index */
A68_BOOL  SLCBELA;  /* clause result */
A68_INT  TLCBELA;  /* YIELD */
A68_232 * ULCBELA;  /* YIELD */
A68_INT * VLCBELA;  /* YIELD */
A68_INT * WLCBELA;  /* YIELD */
A68_92  XLCBELA;  /* avoid structure result */
A68_INT  YLCBELA_f;
A68_INT  ZLCBELA;  /* to part of loop */
A68_32  AMCBELA;  /* clause result */
A_PROC_ENTRY(sortdecls);
 /* line 652: */
 /* line 653: */
{ 
A_CLOSURE( WKCBELA_generator, XKCBELA_generator, YKCBELA_generator );
(( YKCBELA_generator * ) ( WKCBELA_generator.nonlocals )) -> Decls = Decls;
A_CALLPROC(WKCBELA_generator,(A68_TRUE, &CLCBELA),(A68_TRUE, &CLCBELA,(WKCBELA_generator).nonlocals));
BLCBELA_from = CLCBELA;
A_CALLPROC(WKCBELA_generator,(A68_TRUE, &ELCBELA),(A68_TRUE, &ELCBELA,(WKCBELA_generator).nonlocals));
DLCBELA_to = ELCBELA;
 /* line 654: */
A_CLOSURE( GLCBELA_generator, HLCBELA_generator, ILCBELA_generator );
(( ILCBELA_generator * ) ( GLCBELA_generator.nonlocals )) -> Decls = Decls;
A_CALLPROC(GLCBELA_generator,(A68_FALSE, &LLCBELA),(A68_FALSE, &LLCBELA,(GLCBELA_generator).nonlocals));
MLCBELA_table = LLCBELA;
 /* line 655: */
A_VASSIGN2(Decls,BLCBELA_from,A68_232 );
 /* line 656: */
NLCBELA_goback = A68_FALSE;
OLCBELA_t = 0;
PLCBELA_f = 0;
 /* line 657: */
for ( ;; )
{ 
 /* line 658: */
if ( !(((PLCBELA_f+=1)<=BLCBELA_from.upb)) ) break;
 /* line 659: */
if ( ((*(&((&A_VINDEX(BLCBELA_from,PLCBELA_f))->Sort)))!=(-1)) )
{ 
if ( (OLCBELA_t==0) )
{ 
QLCBELA = RUJAELA_nodecls;
} 
else
{ 
QLCBELA = A_VTRIM(RLCBELA,(DLCBELA_to),A_VTSCRIPT(&(RLCBELA.upb),(DLCBELA_to).upb,1,OLCBELA_t));
} 
 /* line 660: */
SLCBELA = GICBELA_usesindecls((*(&A_VINDEX(BLCBELA_from,PLCBELA_f))), QLCBELA);
if ( SLCBELA )
{ 
TLCBELA = OLCBELA_t+=1 ;
ULCBELA = (&A_VINDEX(DLCBELA_to,TLCBELA)) ;
(*ULCBELA) = (*(&A_VINDEX(BLCBELA_from,PLCBELA_f)));
 /* line 661: */
VLCBELA = (&A_VINDEX(MLCBELA_table,PLCBELA_f)) ;
(*VLCBELA) = OLCBELA_t;
 /* line 662: */
WLCBELA = (&((&A_VINDEX(BLCBELA_from,PLCBELA_f))->Sort)) ;
(*WLCBELA) = (-1);
 /* line 663: */
if ( NLCBELA_goback )
{ 
NLCBELA_goback = A68_FALSE;
 /* line 664: */
PLCBELA_f = 0;
} 
} 
else
{ 
 /* line 665: */
 /* line 666: */
 /* line 667: */
NLCBELA_goback = A68_TRUE;
} 
} 
}
 /* line 668: */
 /* line 669: */
 /* line 671: */
if ( NLCBELA_goback )
{ 
LIBAELA_lib_msg( 70, &XLCBELA );
A_CALLPROC(Msg,(XLCBELA, VJAAOSI_nullmsg),(XLCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 672: */
 /* line 673: */
ZLCBELA = BLCBELA_from.upb;
for ( YLCBELA_f = 1;
YLCBELA_f <= ZLCBELA;
YLCBELA_f += 1 )
{ 
 /* line 674: */
if ( ((*(&((&A_VINDEX(BLCBELA_from,YLCBELA_f))->Sort)))!=(-1)) )
{ 
 /* line 675: */
 /* line 676: */
FJCBELA_printdecl(Ct, YLCBELA_f, A68_TRUE, A68_FALSE, Msg);
} 
}
 /* line 677: */
} 
else
{ 
 /* line 678: */
A_VASSIGN2(DLCBELA_to,Decls,A68_232 );
} 
 /* line 679: */
(*Sorted) = !NLCBELA_goback;
 /* line 680: */
 /* line 681: */
AMCBELA = MLCBELA_table;
} 
A_PROC_EXIT(sortdecls);
*ReturnedValue = (AMCBELA);
return;
} 
#undef NL
 /* line 685: */
 /* line 686: */

A_STATIC A68_VOID  GMCBELA_mergedecls(A68_237 * Ct, A68_238  From, A68_BOOL * Ok, A68_32 * Table, A68_97  Msg, A68_238  *ReturnedValue)
{ 
A68_238  HMCBELA;  /* avoid structure result */
A68_238  IMCBELA_to;
A68_238  JMCBELA;  /* clause result */
A68_332  LMCBELA_generator;   /* proc value of non-global proc */
A68_238  QMCBELA;  /* avoid structure result */
A68_238  RMCBELA_ans;
A68_232 * SMCBELA_a;
A68_232 * TMCBELA_f;
A68_INT  UMCBELA;  /* forall loop counter */
A68_INT * VMCBELA;  /* YIELD */
A68_332  XMCBELA_generator;   /* proc value of non-global proc */
A68_238  CNCBELA;  /* avoid structure result */
A68_238  DNCBELA_ans;
A68_INT  ENCBELA_d;
A68_INT  FNCBELA_ansend;
A68_BITS  GNCBELA_bstatus;
A68_BOOL  HNCBELA_specchanged;
A68_238  INCBELA;  /* OPERATORS - trim index */
A68_238  JNCBELA;  /* YIELD */
A68_232 * KNCBELA_f;
A68_INT  LNCBELA;  /* forall loop counter */
A68_BOOL  MNCBELA;  /* optbool result */
A68_BOOL  NNCBELA;  /* optbool result */
A68_BOOL  ONCBELA;  /* optbool result */
A68_232 * PNCBELA;  /* YIELD */
A68_BOOL * QNCBELA;  /* YIELD */
A68_INT * RNCBELA;  /* YIELD */
A68_INT  SNCBELA;  /* YIELD */
A68_232 * TNCBELA;  /* YIELD */
A68_INT * UNCBELA;  /* YIELD */
A68_238  VNCBELA;  /* OPERATORS - trim index */
A68_32  WNCBELA;  /* avoid structure result */
A68_238  XNCBELA;  /* OPERATORS - trim index */
A68_238  YNCBELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(mergedecls);
 /* line 687: */
 /* line 688: */
{ 
LEBBELA_get_decls( Ct, Msg, &HMCBELA );
IMCBELA_to = HMCBELA;
 /* line 689: */
 /* line 690: */
if ( (From.upb==0) )
{ 
(*Ok) = A68_TRUE;
 /* line 691: */
JMCBELA = IMCBELA_to;
} 
else
{ 
 /* line 692: */
if ( (IMCBELA_to.upb==0) )
{ 
A_CLOSURE( LMCBELA_generator, MMCBELA_generator, NMCBELA_generator );
(( NMCBELA_generator * ) ( LMCBELA_generator.nonlocals )) -> From = From;
A_CALLPROC(LMCBELA_generator,(A68_FALSE, &QMCBELA),(A68_FALSE, &QMCBELA,(LMCBELA_generator).nonlocals));
RMCBELA_ans = QMCBELA;
A_VASSIGN2(From,RMCBELA_ans,A68_232 );
 /* line 693: */
 /* line 694: */
UMCBELA = RMCBELA_ans.upb -1;
if ( UMCBELA != From.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
SMCBELA_a = RMCBELA_ans.data;
TMCBELA_f = From.data;
for (;UMCBELA-- >= 0;
(SMCBELA_a++
,TMCBELA_f++
) )
{
 /* line 695: */
if ( (*(&(TMCBELA_f->Import))) )
{ 
 /* line 696: */
YZBBELA_newimport(Ct, (*(&(TMCBELA_f->Name))), (*(&(TMCBELA_f->Sort))));
} 
 /* line 697: */
 /* line 698: */
VMCBELA = (&(SMCBELA_a->Status)) ;
(*VMCBELA) = (A68_INT )FVJAELA_new_mask;
}
 /* line 699: */
(*Ok) = A68_TRUE;
 /* line 700: */
JMCBELA = RMCBELA_ans;
} 
else
{ 
A_CLOSURE( XMCBELA_generator, YMCBELA_generator, ZMCBELA_generator );
(( ZMCBELA_generator * ) ( XMCBELA_generator.nonlocals )) -> From = From;
(( ZMCBELA_generator * ) ( XMCBELA_generator.nonlocals )) -> IMCBELA_to = IMCBELA_to;
A_CALLPROC(XMCBELA_generator,(A68_FALSE, &CNCBELA),(A68_FALSE, &CNCBELA,(XMCBELA_generator).nonlocals));
DNCBELA_ans = CNCBELA;
 /* line 701: */
FNCBELA_ansend = IMCBELA_to.upb;
 /* line 702: */
 /* line 703: */
JNCBELA = A_VTRIM(INCBELA,(DNCBELA_ans),A_VTSCRIPT(&(INCBELA.upb),(DNCBELA_ans).upb,1,IMCBELA_to.upb)) ;
A_VASSIGN2(IMCBELA_to,JNCBELA,A68_232 );
 /* line 704: */
 /* line 705: */
LNCBELA = From.upb -1;
KNCBELA_f = From.data;
for (;LNCBELA-- >= 0;
(KNCBELA_f++
) )
{
 /* line 706: */
if ( ((ENCBELA_d = TEBBELA_get_decl(Ct, (*(&(KNCBELA_f->Name))), Msg))!=0) )
{ 
GNCBELA_bstatus = 0X0U;
 /* line 707: */
HNCBELA_specchanged = ((*(&((&A_VINDEX(DNCBELA_ans,ENCBELA_d))->Version)))!=(*(&(KNCBELA_f->Version))));
 /* line 708: */
 /* line 709: */
MNCBELA = (*(&((&A_VINDEX(DNCBELA_ans,ENCBELA_d))->Import)));
if ( MNCBELA )
{MNCBELA = !(*(&(KNCBELA_f->Import)));
}
if ( MNCBELA )
{ 
FACBELA_removeimport(Ct, (*(&(KNCBELA_f->Name))));
 /* line 710: */
 /* line 711: */
GNCBELA_bstatus = IVJAELA_imports_mask;
} 
else
{ 
 /* line 712: */
NNCBELA = !(*(&((&A_VINDEX(DNCBELA_ans,ENCBELA_d))->Import)));
if ( NNCBELA )
{NNCBELA = (*(&(KNCBELA_f->Import)));
}
if ( NNCBELA )
{ 
YZBBELA_newimport(Ct, (*(&(KNCBELA_f->Name))), (*(&(KNCBELA_f->Sort))));
 /* line 713: */
 /* line 714: */
GNCBELA_bstatus = IVJAELA_imports_mask;
} 
else
{ 
ONCBELA = (*(&((&A_VINDEX(DNCBELA_ans,ENCBELA_d))->Import)));
if ( ONCBELA )
{ONCBELA = (*(&(KNCBELA_f->Import)));
}
 /* line 715: */
if ( ONCBELA )
{ONCBELA = HNCBELA_specchanged;
}
if ( ONCBELA )
{ 
 /* line 716: */
KACBELA_cancelimport(Ct, (*(&(KNCBELA_f->Name))));
} 
} 
} 
 /* line 717: */
PNCBELA = (&A_VINDEX(DNCBELA_ans,ENCBELA_d)) ;
(*PNCBELA) = (*KNCBELA_f);
 /* line 718: */
if ( (*(&((&A_VINDEX(IMCBELA_to,ENCBELA_d))->Export))) )
{ 
QNCBELA = (&((&A_VINDEX(DNCBELA_ans,ENCBELA_d))->Export)) ;
(*QNCBELA) = A68_TRUE;
} 
 /* line 719: */
if ( HNCBELA_specchanged )
{ 
GNCBELA_bstatus = (A68_BITS )(GNCBELA_bstatus|HVJAELA_spec_mask);
} 
 /* line 720: */
 /* line 721: */
RNCBELA = (&((&A_VINDEX(DNCBELA_ans,ENCBELA_d))->Status)) ;
(*RNCBELA) = (A68_INT )(A68_BITS )(GNCBELA_bstatus|GVJAELA_body_mask);
} 
else
{ 
 /* line 722: */
if ( (*(&(KNCBELA_f->Import))) )
{ 
 /* line 723: */
YZBBELA_newimport(Ct, (*(&(KNCBELA_f->Name))), (*(&(KNCBELA_f->Sort))));
} 
 /* line 724: */
SNCBELA = FNCBELA_ansend+=1 ;
TNCBELA = (&A_VINDEX(DNCBELA_ans,SNCBELA)) ;
(*TNCBELA) = (*KNCBELA_f);
 /* line 725: */
 /* line 726: */
 /* line 727: */
UNCBELA = (&((&A_VINDEX(DNCBELA_ans,FNCBELA_ansend))->Status)) ;
(*UNCBELA) = (A68_INT )FVJAELA_new_mask;
} 
}
 /* line 728: */
UKCBELA_sortdecls( Ct, A_VTRIM(VNCBELA,(DNCBELA_ans),A_VTSCRIPT(&(VNCBELA.upb),(DNCBELA_ans).upb,1,FNCBELA_ansend)), Ok, Msg, &WNCBELA );
(*Table) = WNCBELA;
 /* line 729: */
if ( (*Ok) )
{ 
JMCBELA = A_VTRIM(XNCBELA,(DNCBELA_ans),A_VTSCRIPT(&(XNCBELA.upb),(DNCBELA_ans).upb,1,FNCBELA_ansend));
} 
else
{ 
 /* line 730: */
 /* line 731: */
JMCBELA = YNCBELA;
} 
} 
} 
} 
A_PROC_EXIT(mergedecls);
*ReturnedValue = (JMCBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  COCBELA_updatedecls(A68_237 * Ct, A68_238  Decls, A68_97  Msg)
{ 
A68_BOOL * DOCBELA;  /* YIELD */
A68_238 * EOCBELA;  /* YIELD */
A68_BOOL  FOCBELA;  /* clause result */
A68_BOOL * GOCBELA;  /* YIELD */
A_PROC_ENTRY(updatedecls);
 /* line 736: */
 /* line 737: */
{ 
DOCBELA = (&(Ct->Changed)) ;
(*DOCBELA) = A68_TRUE;
 /* line 738: */
EOCBELA = (&(Ct->Decls)) ;
(*EOCBELA) = Decls;
 /* line 739: */
 /* line 740: */
if ( (Decls.upb==0) )
{ 
FOCBELA = A68_FALSE;
} 
else
{ 
FOCBELA = DKBBELA_loadable(Ct, Decls, 1, Msg);
} 
GOCBELA = (&(Ct->Loadable)) ;
(*GOCBELA) = FOCBELA;
 /* line 741: */
 /* line 742: */
MDKAELA_setlibchanged(Msg);
} 
A_PROC_EXIT(updatedecls);
return;
} 
#undef NL

A68_VOID  KOCBELA_merge_compiled(A68_242  Cr, A68_179  Ptrlastcomp, A68_97  Msg)
{ 
A68_237 * LOCBELA_ct;
A68_92  MOCBELA;  /* avoid structure result */
A68_179  NOCBELA_imports;
A68_180  OOCBELA_info;
A68_180  POCBELA_bodies;
A68_180  QOCBELA_spacemaps;
A68_32  ROCBELA_table;
A68_238  SOCBELA;  /* avoid structure result */
A68_238  TOCBELA_compiled;
A68_BOOL  UOCBELA_merged;
A68_238  WOCBELA;  /* avoid structure result */
A68_238  VOCBELA_decls;
A68_INT  XOCBELA;  /* YIELD */
A68_33  ZOCBELA_generator;   /* proc value of non-global proc */
A68_32  FPCBELA;  /* avoid structure result */
A68_32  EPCBELA_declnos;
A68_INT * GPCBELA_declno;
A68_232 * HPCBELA_decl;
A68_INT  IPCBELA;  /* forall loop counter */
A68_INT  JPCBELA_vnno;
A68_46  KPCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  LPCBELA;  /* avoid structure result */
A68_92  MPCBELA;  /* avoid structure result */
A68_92  NPCBELA;  /* avoid structure result */
A68_INT  OPCBELA;  /* YIELD */
A68_92  PPCBELA;  /* avoid structure result */
A_PROC_ENTRY(merge_compiled);
 /* line 747: */
 /* line 748: */
{ 
LOCBELA_ct = Cr.Context;
 /* line 749: */
 /* line 750: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, Ptrlastcomp) )
{ 
EJBBELA_reopen_library(Msg);
 /* line 751: */
 /* line 752: */
LIBAELA_lib_msg( 71, &MOCBELA );
A_CALLPROC(Msg,(MOCBELA, VJAAOSI_nullmsg),(MOCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 753: */
 /* line 754: */
 /* line 755: */
 /* line 756: */
BFCBELA_incompiled( Ptrlastcomp, (&NOCBELA_imports), (&OOCBELA_info), (&POCBELA_bodies), (&QOCBELA_spacemaps), Msg, &SOCBELA );
TOCBELA_compiled = SOCBELA;
 /* line 757: */
 /* line 758: */
if ( (TOCBELA_compiled.upb>0) )
{ 
UOCBELA_merged = A68_FALSE;
 /* line 759: */
 /* line 760: */
GMCBELA_mergedecls( LOCBELA_ct, TOCBELA_compiled, (&UOCBELA_merged), (&ROCBELA_table), Msg, &WOCBELA );
VOCBELA_decls = WOCBELA;
 /* line 761: */
 /* line 762: */
 /* line 763: */
if ( UOCBELA_merged )
{ 
XOCBELA = 1 ;
TDCBELA_inimports(Cr, NOCBELA_imports, (*(&A_VINDEX(OOCBELA_info,XOCBELA))), Msg);
 /* line 764: */
COCBELA_updatedecls(LOCBELA_ct, VOCBELA_decls, Msg);
 /* line 766: */
A_CLOSURE( ZOCBELA_generator, APCBELA_generator, BPCBELA_generator );
(( BPCBELA_generator * ) ( ZOCBELA_generator.nonlocals )) -> TOCBELA_compiled = TOCBELA_compiled;
A_CALLPROC(ZOCBELA_generator,(A68_TRUE, &FPCBELA),(A68_TRUE, &FPCBELA,(ZOCBELA_generator).nonlocals));
EPCBELA_declnos = FPCBELA;
 /* line 767: */
 /* line 768: */
IPCBELA = EPCBELA_declnos.upb -1;
if ( IPCBELA != TOCBELA_compiled.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
GPCBELA_declno = EPCBELA_declnos.data;
HPCBELA_decl = TOCBELA_compiled.data;
for (;IPCBELA-- >= 0;
(GPCBELA_declno++
,HPCBELA_decl++
) )
{
(*GPCBELA_declno) = IGBBELA_check_decl(LOCBELA_ct, (*(&(HPCBELA_decl->Name))), Msg);
}
 /* line 769: */
JPCBELA_vnno = (*(&(HXJAELA_library->Version)));
 /* line 770: */
JEWAELA_update_declattributes(LOCBELA_ct, ROCBELA_table, Msg);
 /* line 771: */
FGWAELA_merge_declattribute(LOCBELA_ct, (*JZJAELA_body_key), EPCBELA_declnos, JPCBELA_vnno, POCBELA_bodies, Msg);
 /* line 772: */
FGWAELA_merge_declattribute(LOCBELA_ct, (*MZJAELA_info_key), EPCBELA_declnos, JPCBELA_vnno, OOCBELA_info, Msg);
 /* line 773: */
 /* line 774: */
FGWAELA_merge_declattribute(LOCBELA_ct, (*PZJAELA_spacemap_key), EPCBELA_declnos, JPCBELA_vnno, QOCBELA_spacemaps, Msg);
 /* line 776: */
LIBAELA_lib_msg( 23, &LPCBELA );
A_CALLPROC(Msg,(LPCBELA, A_HVEC(KPCBELA,(*(&(LOCBELA_ct->Name))),A68_VC )),(LPCBELA, A_HVEC(KPCBELA,(*(&(LOCBELA_ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 777: */
LIBAELA_lib_msg( 72, &MPCBELA );
A_CALLPROC(Msg,(MPCBELA, VJAAOSI_nullmsg),(MPCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 778: */
if ( !(*(&(LOCBELA_ct->Loadable))) )
{ 
DKBBELA_loadable(LOCBELA_ct, VOCBELA_decls, 2, Msg);
} 
 /* line 779: */
 /* line 780: */
WACBELA_outputcancelled(LOCBELA_ct, Msg);
} 
else
{ 
EJBBELA_reopen_library(Msg);
 /* line 781: */
 /* line 782: */
 /* line 783: */
LIBAELA_lib_msg( 73, &NPCBELA );
A_CALLPROC(Msg,(NPCBELA, VJAAOSI_nullmsg),(NPCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
else
{ 
 /* line 784: */
OPCBELA = 1 ;
if ( TDCBELA_inimports(Cr, NOCBELA_imports, (*(&A_VINDEX(OOCBELA_info,OPCBELA))), Msg) )
{ 
MDKAELA_setlibchanged(Msg);
 /* line 785: */
 /* line 786: */
LIBAELA_lib_msg( 74, &PPCBELA );
A_CALLPROC(Msg,(PPCBELA, VJAAOSI_nullmsg),(PPCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 787: */
 /* line 788: */
 /* line 789: */
 /* line 790: */
EJBBELA_reopen_library(Msg);
} 
} 
} 
} 
A_PROC_EXIT(merge_compiled);
return;
} 
#undef NL

A68_VOID  TPCBELA_merge_imports(A68_242  Cr, A68_179  Ptrlastcomp, A68_97  Msg)
{ 
A68_308  VPCBELA_generator;   /* proc value of non-global proc */
A68_180  BQCBELA;  /* avoid structure result */
A68_180  AQCBELA_info_imports;
A68_INT  CQCBELA;  /* YIELD */
A68_INT  DQCBELA;  /* YIELD */
A68_92  EQCBELA;  /* avoid structure result */
A68_92  FQCBELA;  /* avoid structure result */
A_PROC_ENTRY(merge_imports);
 /* line 794: */
 /* line 795: */
{ 
 /* line 796: */
if ( !UXIAELA_isnilptr(TYJAELA_discfile, Ptrlastcomp) )
{ 
A_CLOSURE( VPCBELA_generator, WPCBELA_generator, XPCBELA_generator );
A_CALLPROC(VPCBELA_generator,(A68_TRUE, &BQCBELA),(A68_TRUE, &BQCBELA,(VPCBELA_generator).nonlocals));
AQCBELA_info_imports = BQCBELA;
 /* line 797: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, AQCBELA_info_imports, Ptrlastcomp, Msg);
 /* line 798: */
 /* line 799: */
CQCBELA = 1 ;
DQCBELA = 2 ;
if ( TDCBELA_inimports(Cr, (*(&A_VINDEX(AQCBELA_info_imports,DQCBELA))), (*(&A_VINDEX(AQCBELA_info_imports,CQCBELA))), Msg) )
{ 
MDKAELA_setlibchanged(Msg);
 /* line 800: */
 /* line 801: */
 /* line 802: */
LIBAELA_lib_msg( 74, &EQCBELA );
A_CALLPROC(Msg,(EQCBELA, VJAAOSI_nullmsg),(EQCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
else
{ 
 /* line 803: */
 /* line 804: */
LIBAELA_lib_msg( 71, &FQCBELA );
A_CALLPROC(Msg,(FQCBELA, VJAAOSI_nullmsg),(FQCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(merge_imports);
return;
} 
#undef NL

A68_VOID  IQCBELA_make_context(A68_162  Newctname, A68_97  Msg)
{ 
A68_46  JQCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  KQCBELA;  /* avoid structure result */
A68_236 * LQCBELA_newregion;
A68_236  MQCBELA;  /* collateral clause result */
A68_237  NQCBELA;  /* collateral clause result */
A68_179  OQCBELA;  /* avoid structure result */
A68_237  PQCBELA_newct;
A68_239  QQCBELA;  /* collateral clause result */
A68_239 * RQCBELA;  /* YIELD */
A68_239 ** SQCBELA;  /* YIELD */
A68_46  TQCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  UQCBELA;  /* avoid structure result */
A_PROC_ENTRY(make_context);
 /* line 810: */
 /* line 811: */
{ 
 /* line 812: */
if ( (UDKAELA_get_context(Newctname.Context)!=DVJAELA_nilcontxt) )
{ 
 /* line 813: */
LIBAELA_lib_msg( 79, &KQCBELA );
A_CALLPROC(Msg,(KQCBELA, A_HVEC(JQCBELA,Newctname.Context,A68_VC )),(KQCBELA, A_HVEC(JQCBELA,Newctname.Context,A68_VC ),(Msg).nonlocals));
} 
else
{ 
LQCBELA_newregion = (A_HEAP(A68_236 ));
 /* line 814: */
MQCBELA.Region.Name = Newctname.Import;
MQCBELA.Region.Ctno = 0;
MQCBELA.Region.Imports = GUJAELA_nilimports;
MQCBELA.Rest = CVJAELA_nilregions;
(*LQCBELA_newregion) = MQCBELA;
 /* line 815: */
NQCBELA.Name = Newctname.Context;
VOBBELA_newcontextptr( Msg, &OQCBELA );
NQCBELA.Val = OQCBELA;
NQCBELA.Loadable = A68_FALSE;
 /* line 816: */
NQCBELA.Changed = A68_TRUE;
NQCBELA.Decls = RUJAELA_nodecls;
NQCBELA.Declattributes = LTJAELA_nildeclattributes;
NQCBELA.Regions = LQCBELA_newregion;
PQCBELA_newct = NQCBELA;
 /* line 817: */
QQCBELA.Context = PQCBELA_newct;
QQCBELA.Rest = (*(&(HXJAELA_library->Contexts)));
RQCBELA = A_HEAP(A68_239 ) ;
(*RQCBELA) = QQCBELA ;
SQCBELA = (&(HXJAELA_library->Contexts)) ;
(*SQCBELA) = RQCBELA;
 /* line 818: */
LIBAELA_lib_msg( 80, &UQCBELA );
A_CALLPROC(Msg,(UQCBELA, A_HVEC(TQCBELA,Newctname.Context,A68_VC )),(UQCBELA, A_HVEC(TQCBELA,Newctname.Context,A68_VC ),(Msg).nonlocals));
 /* line 819: */
 /* line 820: */
 /* line 821: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(make_context);
return;
} 
#undef NL

A_STATIC A68_236 * WQCBELA_copyregions(A68_236 * R)
{ 
A68_236 * XQCBELA;  /* clause result */
A68_236 * YQCBELA_rest;
A68_235  ZQCBELA;  /* collateral clause result */
A68_235  ARCBELA_newregion;
A68_236  BRCBELA;  /* collateral clause result */
A68_236 * CRCBELA;  /* YIELD */
A_PROC_ENTRY(copyregions);
 /* line 825: */
 /* line 826: */
{ 
 /* line 827: */
 /* line 828: */
if ( (R==CVJAELA_nilregions) )
{ 
XQCBELA = R;
} 
else
{ 
YQCBELA_rest = WQCBELA_copyregions((*(&(R->Rest))));
 /* line 829: */
 /* line 830: */
ZQCBELA.Name = (*(&((&(R->Region))->Name)));
ZQCBELA.Ctno = 0;
ZQCBELA.Imports = TBCBELA_copyimports((*(&((&(R->Region))->Imports))), A68_TRUE);
ARCBELA_newregion = ZQCBELA;
 /* line 831: */
BRCBELA.Region = ARCBELA_newregion;
 /* line 832: */
BRCBELA.Rest = YQCBELA_rest;
 /* line 833: */
CRCBELA = A_HEAP(A68_236 ) ;
(*CRCBELA) = BRCBELA ;
XQCBELA = CRCBELA;
} 
} 
A_PROC_EXIT(copyregions);
return( XQCBELA );
} 
#undef NL

A_STATIC A68_BOOL  FRCBELA_containsexports(A68_237 * Ct, A68_97  Msg)
{ 
A68_238  GRCBELA;  /* avoid structure result */
A68_238  HRCBELA_decls;
A68_BOOL  IRCBELA_ans;
A68_232 * JRCBELA_d;
A68_INT  KRCBELA;  /* forall loop counter */
A68_BOOL  LRCBELA;  /* clause result */
A_PROC_ENTRY(containsexports);
 /* line 836: */
 /* line 837: */
{ 
LEBBELA_get_decls( Ct, Msg, &GRCBELA );
HRCBELA_decls = GRCBELA;
 /* line 838: */
IRCBELA_ans = A68_FALSE;
 /* line 839: */
KRCBELA = HRCBELA_decls.upb -1;
JRCBELA_d = HRCBELA_decls.data;
for (;KRCBELA-- >= 0;
(JRCBELA_d++
) )
{
 /* line 840: */
if ( !(!IRCBELA_ans) ) break;
if ( (*(&(JRCBELA_d->Export))) )
{ 
IRCBELA_ans = A68_TRUE;
} 
}
 /* line 841: */
 /* line 842: */
LRCBELA = IRCBELA_ans;
} 
A_PROC_EXIT(containsexports);
return( LRCBELA );
} 
#undef NL

A68_VOID  PRCBELA_copy_context(A68_237 * Ct, A68_VC  Newctname, A68_97  Msg)
{ 
A68_46  QRCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  RRCBELA;  /* avoid structure result */
A68_237  SRCBELA;  /* collateral clause result */
A68_237  TRCBELA_newct;
A68_239  URCBELA;  /* collateral clause result */
A68_239 * VRCBELA;  /* YIELD */
A68_239 ** WRCBELA;  /* YIELD */
A68_46  XRCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  YRCBELA;  /* avoid structure result */
A_PROC_ENTRY(copy_context);
 /* line 846: */
 /* line 847: */
{ 
 /* line 848: */
if ( (UDKAELA_get_context(Newctname)!=DVJAELA_nilcontxt) )
{ 
 /* line 849: */
LIBAELA_lib_msg( 79, &RRCBELA );
A_CALLPROC(Msg,(RRCBELA, A_HVEC(QRCBELA,Newctname,A68_VC )),(RRCBELA, A_HVEC(QRCBELA,Newctname,A68_VC ),(Msg).nonlocals));
} 
else
{ 
QJBBELA_save_library(Msg);
 /* line 850: */
SRCBELA.Name = Newctname;
SRCBELA.Val = (*(&(Ct->Val)));
SRCBELA.Loadable = (*(&(Ct->Loadable)));
SRCBELA.Changed = A68_TRUE;
 /* line 851: */
SRCBELA.Decls = UUJAELA_nildecls;
SRCBELA.Declattributes = LTJAELA_nildeclattributes;
SRCBELA.Regions = WQCBELA_copyregions((*(&(Ct->Regions))));
TRCBELA_newct = SRCBELA;
 /* line 852: */
URCBELA.Context = TRCBELA_newct;
URCBELA.Rest = (*(&(HXJAELA_library->Contexts)));
VRCBELA = A_HEAP(A68_239 ) ;
(*VRCBELA) = URCBELA ;
WRCBELA = (&(HXJAELA_library->Contexts)) ;
(*WRCBELA) = VRCBELA;
 /* line 853: */
LIBAELA_lib_msg( 80, &YRCBELA );
A_CALLPROC(Msg,(YRCBELA, A_HVEC(XRCBELA,Newctname,A68_VC )),(YRCBELA, A_HVEC(XRCBELA,Newctname,A68_VC ),(Msg).nonlocals));
 /* line 854: */
 /* line 855: */
 /* line 856: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(copy_context);
return;
} 
#undef NL

A68_VOID  BSCBELA_clear_context(A68_237 * Ct, A68_97  Msg)
{ 
A68_46  CSCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  DSCBELA;  /* avoid structure result */
A68_236 * ESCBELA_r;
A68_234 ** FSCBELA;  /* YIELD */
A68_46  GSCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  HSCBELA;  /* avoid structure result */
A_PROC_ENTRY(clear_context);
 /* line 860: */
 /* line 861: */
{ 
 /* line 862: */
if ( FRCBELA_containsexports(Ct, Msg) )
{ 
 /* line 864: */
LIBAELA_lib_msg( 81, &DSCBELA );
A_CALLPROC(Msg,(DSCBELA, A_HVEC(CSCBELA,(*(&(Ct->Name))),A68_VC )),(DSCBELA, A_HVEC(CSCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
else
{ 
COCBELA_updatedecls(Ct, RUJAELA_nodecls, Msg);
 /* line 865: */
GJWAELA_clear_declattributes(Ct, Msg);
 /* line 866: */
ESCBELA_r = (*(&(Ct->Regions)));
 /* line 867: */
for ( ;; )
{ 
 /* line 868: */
if ( !((ESCBELA_r!=CVJAELA_nilregions)) ) break;
FSCBELA = (&((&(ESCBELA_r->Region))->Imports)) ;
(*FSCBELA) = GUJAELA_nilimports;
 /* line 869: */
 /* line 870: */
ESCBELA_r = (*(&(ESCBELA_r->Rest)));
}
 /* line 871: */
 /* line 872: */
 /* line 873: */
LIBAELA_lib_msg( 82, &HSCBELA );
A_CALLPROC(Msg,(HSCBELA, A_HVEC(GSCBELA,(*(&(Ct->Name))),A68_VC )),(HSCBELA, A_HVEC(GSCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(clear_context);
return;
} 
#undef NL

A68_VOID  KSCBELA_erase_context(A68_237 * Ct, A68_97  Msg)
{ 
A68_46  LSCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  MSCBELA;  /* avoid structure result */
A68_46  NSCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  OSCBELA;  /* avoid structure result */
A68_239 ** PSCBELA_c;
A68_46  QSCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  RSCBELA;  /* avoid structure result */
A_PROC_ENTRY(erase_context);
 /* line 876: */
 /* line 877: */
{ 
 /* line 878: */
if ( A_VC_EQ((*(&(Ct->Name))),VWJAELA_defaultct.Context) )
{ 
 /* line 879: */
 /* line 880: */
LIBAELA_lib_msg( 83, &MSCBELA );
A_CALLPROC(Msg,(MSCBELA, A_HVEC(LSCBELA,(*(&(Ct->Name))),A68_VC )),(MSCBELA, A_HVEC(LSCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 881: */
if ( FRCBELA_containsexports(Ct, Msg) )
{ 
 /* line 882: */
 /* line 883: */
LIBAELA_lib_msg( 84, &OSCBELA );
A_CALLPROC(Msg,(OSCBELA, A_HVEC(NSCBELA,(*(&(Ct->Name))),A68_VC )),(OSCBELA, A_HVEC(NSCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
else
{ 
PSCBELA_c = (&(HXJAELA_library->Contexts));
 /* line 884: */
for ( ;; )
{ 
if ( !(!A_VC_EQ((*(&((&((*PSCBELA_c)->Context))->Name))),(*(&(Ct->Name))))) ) break;
PSCBELA_c = (&((*PSCBELA_c)->Rest));
}
 /* line 885: */
(*PSCBELA_c) = (*(&((*PSCBELA_c)->Rest)));
 /* line 886: */
LIBAELA_lib_msg( 85, &RSCBELA );
A_CALLPROC(Msg,(RSCBELA, A_HVEC(QSCBELA,(*(&(Ct->Name))),A68_VC )),(RSCBELA, A_HVEC(QSCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 887: */
 /* line 888: */
 /* line 889: */
MDKAELA_setlibchanged(Msg);
} 
} 
} 
A_PROC_EXIT(erase_context);
return;
} 
#undef NL

A68_VOID  USCBELA_clear_imports(A68_242  Cr, A68_97  Msg)
{ 
A68_233 * VSCBELA_b;
A68_234 * WSCBELA_is;
A68_VC  XSCBELA;  /* avoid structure result */
A68_46  YSCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  ZSCBELA;  /* avoid structure result */
A68_VC  ATCBELA;  /* avoid structure result */
A68_46  BTCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  CTCBELA;  /* avoid structure result */
A68_BOOL  DTCBELA_changed;
A68_VC * ETCBELA;  /* YIELD */
A68_162  FTCBELA;  /* collateral clause result */
A68_162 * GTCBELA;  /* YIELD */
A68_312  HTCBELA;  /* collateral clause result */
A68_VC  ITCBELA;  /* avoid structure result */
A68_46  JTCBELA;  /* OPERATORS - istruct -> vector */
A68_92  KTCBELA;  /* avoid structure result */
A68_VC  LTCBELA;  /* avoid structure result */
A68_46  MTCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  NTCBELA;  /* avoid structure result */
A_PROC_ENTRY(clear_imports);
 /* line 894: */
 /* line 895: */
{ 
MTBBELA_checkregionselected(Cr, Msg);
 /* line 896: */
 /* line 897: */
WSCBELA_is = HEKAELA_get_imports(Cr);
 /* line 898: */
 /* line 899: */
if ( (WSCBELA_is==GUJAELA_nilimports) )
{ 
 /* line 900: */
UAKAELA_ctos( Cr, &XSCBELA );
LIBAELA_lib_msg( 90, &ZSCBELA );
A_CALLPROC(Msg,(ZSCBELA, A_HVEC(YSCBELA,XSCBELA,A68_VC )),(ZSCBELA, A_HVEC(YSCBELA,XSCBELA,A68_VC ),(Msg).nonlocals));
} 
else
{ 
UAKAELA_ctos( Cr, &ATCBELA );
LIBAELA_lib_msg( 91, &CTCBELA );
A_CALLPROC(Msg,(CTCBELA, A_HVEC(BTCBELA,ATCBELA,A68_VC )),(CTCBELA, A_HVEC(BTCBELA,ATCBELA,A68_VC ),(Msg).nonlocals));
 /* line 901: */
DTCBELA_changed = A68_FALSE;
 /* line 902: */
for ( ;; )
{ 
 /* line 903: */
if ( !((WSCBELA_is!=GUJAELA_nilimports)) ) break;
VSCBELA_b = (&(WSCBELA_is->Binding));
 /* line 904: */
 /* line 905: */
if ( A_VC_NE((*(&(VSCBELA_b->Name))),TTCAOST_nullid) )
{ 
ETCBELA = (&((&(WSCBELA_is->Binding))->Name)) ;
(*ETCBELA) = TTCAOST_nullid;
 /* line 906: */
FTCBELA.Context = TTCAOST_nullid;
FTCBELA.Import = TTCAOST_nullid;
GTCBELA = (&((&(WSCBELA_is->Binding))->Ctn)) ;
(*GTCBELA) = FTCBELA;
 /* line 907: */
DTCBELA_changed = A68_TRUE;
 /* line 908: */
 /* line 909: */
QVJAELA_sort_id( (*(&(VSCBELA_b->Sort))), &ITCBELA );
HTCBELA.data[0] = ITCBELA;
HTCBELA.data[1] = (*(&(VSCBELA_b->Rename)));
 /* line 910: */
LIBAELA_lib_msg( 92, &KTCBELA );
A_CALLPROC(Msg,(KTCBELA, A_HISVEC(JTCBELA,HTCBELA,2,A68_VC )),(KTCBELA, A_HISVEC(JTCBELA,HTCBELA,2,A68_VC ),(Msg).nonlocals));
} 
 /* line 911: */
 /* line 912: */
WSCBELA_is = (*(&(WSCBELA_is->Rest)));
}
 /* line 913: */
if ( DTCBELA_changed )
{ 
MDKAELA_setlibchanged(Msg);
} 
 /* line 914: */
 /* line 915: */
 /* line 916: */
UAKAELA_ctos( Cr, &LTCBELA );
LIBAELA_lib_msg( 93, &NTCBELA );
A_CALLPROC(Msg,(NTCBELA, A_HVEC(MTCBELA,LTCBELA,A68_VC )),(NTCBELA, A_HVEC(MTCBELA,LTCBELA,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(clear_imports);
return;
} 
#undef NL

A68_VOID  QTCBELA_erase_region(A68_242  Cr, A68_97  Msg)
{ 
A68_92  RTCBELA;  /* avoid structure result */
A68_162  STCBELA;  /* avoid structure result */
A68_VC  TTCBELA;  /* avoid structure result */
A68_46  UTCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  VTCBELA;  /* avoid structure result */
A68_236 ** WTCBELA_rs;
A68_46  XTCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  YTCBELA;  /* avoid structure result */
A_PROC_ENTRY(erase_region);
 /* line 922: */
 /* line 923: */
{ 
MTBBELA_checkregionselected(Cr, Msg);
 /* line 924: */
WTBBELA_checkcompound(Cr.Context, Msg);
 /* line 925: */
 /* line 926: */
if ( AUBBELA_checklastimports(Cr.Context) )
{ 
 /* line 927: */
LIBAELA_lib_msg( 94, &RTCBELA );
A_CALLPROC(Msg,(RTCBELA, VJAAOSI_nullmsg),(RTCBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 928: */
NBKAELA_ctn( Cr, &STCBELA );
if ( BCCBELA_isimported(TTCAOST_nullid, STCBELA, Msg) )
{ 
 /* line 929: */
 /* line 930: */
UAKAELA_ctos( Cr, &TTCBELA );
LIBAELA_lib_msg( 95, &VTCBELA );
A_CALLPROC(Msg,(VTCBELA, A_HVEC(UTCBELA,TTCBELA,A68_VC )),(VTCBELA, A_HVEC(UTCBELA,TTCBELA,A68_VC ),(Msg).nonlocals));
} 
else
{ 
WTCBELA_rs = (&(Cr.Context->Regions));
 /* line 931: */
for ( ;; )
{ 
 /* line 932: */
if ( !(!A_VC_EQ((*(&((&((*WTCBELA_rs)->Region))->Name))),(*(&(Cr.Region->Name))))) ) break;
WTCBELA_rs = (&((*WTCBELA_rs)->Rest));
}
 /* line 933: */
(*WTCBELA_rs) = (*(&((*WTCBELA_rs)->Rest)));
 /* line 934: */
 /* line 935: */
LIBAELA_lib_msg( 96, &YTCBELA );
A_CALLPROC(Msg,(YTCBELA, A_HVEC(XTCBELA,(*(&(Cr.Region->Name))),A68_VC )),(YTCBELA, A_HVEC(XTCBELA,(*(&(Cr.Region->Name))),A68_VC ),(Msg).nonlocals));
 /* line 936: */
 /* line 937: */
 /* line 938: */
MDKAELA_setlibchanged(Msg);
} 
} 
} 
A_PROC_EXIT(erase_region);
return;
} 
#undef NL

A68_VOID  CUCBELA_make_region(A68_237 * Ct, A68_VC  Newimpname, A68_97  Msg)
{ 
A68_242  DUCBELA;  /* avoid structure result */
A68_312  EUCBELA;  /* collateral clause result */
A68_46  FUCBELA;  /* OPERATORS - istruct -> vector */
A68_92  GUCBELA;  /* avoid structure result */
A68_235  HUCBELA;  /* collateral clause result */
A68_235  IUCBELA_newregion;
A68_236  JUCBELA;  /* collateral clause result */
A68_236 * KUCBELA;  /* YIELD */
A68_236 ** LUCBELA;  /* YIELD */
A68_46  MUCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  NUCBELA;  /* avoid structure result */
A68_46  OUCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  PUCBELA;  /* avoid structure result */
A_PROC_ENTRY(make_region);
 /* line 941: */
 /* line 942: */
{ 
WTBBELA_checkcompound(Ct, Msg);
 /* line 943: */
 /* line 944: */
AEKAELA_get_region( Ct, Newimpname, &DUCBELA );
if ( (DUCBELA.Region!=BVJAELA_nilregion) )
{ 
 /* line 945: */
EUCBELA.data[0] = Newimpname;
EUCBELA.data[1] = (*(&(Ct->Name)));
 /* line 946: */
LIBAELA_lib_msg( 97, &GUCBELA );
A_CALLPROC(Msg,(GUCBELA, A_HISVEC(FUCBELA,EUCBELA,2,A68_VC )),(GUCBELA, A_HISVEC(FUCBELA,EUCBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
HUCBELA.Name = Newimpname;
 /* line 947: */
HUCBELA.Ctno = 0;
HUCBELA.Imports = TBCBELA_copyimports((*(&((&((*(&(Ct->Regions)))->Region))->Imports))), A68_FALSE);
IUCBELA_newregion = HUCBELA;
 /* line 948: */
JUCBELA.Region = IUCBELA_newregion;
JUCBELA.Rest = (*(&(Ct->Regions)));
KUCBELA = A_HEAP(A68_236 ) ;
(*KUCBELA) = JUCBELA ;
LUCBELA = (&(Ct->Regions)) ;
(*LUCBELA) = KUCBELA;
 /* line 949: */
LIBAELA_lib_msg( 23, &NUCBELA );
A_CALLPROC(Msg,(NUCBELA, A_HVEC(MUCBELA,(*(&(Ct->Name))),A68_VC )),(NUCBELA, A_HVEC(MUCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 950: */
LIBAELA_lib_msg( 98, &PUCBELA );
A_CALLPROC(Msg,(PUCBELA, A_HVEC(OUCBELA,Newimpname,A68_VC )),(PUCBELA, A_HVEC(OUCBELA,Newimpname,A68_VC ),(Msg).nonlocals));
 /* line 951: */
 /* line 952: */
 /* line 953: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(make_region);
return;
} 
#undef NL

A68_VOID  TUCBELA_copy_region(A68_242  Cr, A68_VC  Newname, A68_97  Msg)
{ 
A68_242  UUCBELA;  /* avoid structure result */
A68_312  VUCBELA;  /* collateral clause result */
A68_46  WUCBELA;  /* OPERATORS - istruct -> vector */
A68_92  XUCBELA;  /* avoid structure result */
A68_235  YUCBELA;  /* collateral clause result */
A68_235  ZUCBELA_newregion;
A68_236  AVCBELA;  /* collateral clause result */
A68_236 * BVCBELA;  /* YIELD */
A68_236 ** CVCBELA;  /* YIELD */
A68_VC  DVCBELA;  /* avoid structure result */
A68_46  EVCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  FVCBELA;  /* avoid structure result */
A68_46  GVCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  HVCBELA;  /* avoid structure result */
A_PROC_ENTRY(copy_region);
 /* line 957: */
 /* line 958: */
{ 
MTBBELA_checkregionselected(Cr, Msg);
 /* line 959: */
WTBBELA_checkcompound(Cr.Context, Msg);
 /* line 960: */
 /* line 961: */
AEKAELA_get_region( Cr.Context, Newname, &UUCBELA );
if ( (UUCBELA.Region!=BVJAELA_nilregion) )
{ 
 /* line 962: */
VUCBELA.data[0] = Newname;
VUCBELA.data[1] = (*(&(Cr.Context->Name)));
 /* line 963: */
 /* line 964: */
LIBAELA_lib_msg( 97, &XUCBELA );
A_CALLPROC(Msg,(XUCBELA, A_HISVEC(WUCBELA,VUCBELA,2,A68_VC )),(XUCBELA, A_HISVEC(WUCBELA,VUCBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
YUCBELA.Name = Newname;
YUCBELA.Ctno = 0;
YUCBELA.Imports = TBCBELA_copyimports((*(&(Cr.Region->Imports))), A68_TRUE);
ZUCBELA_newregion = YUCBELA;
 /* line 965: */
 /* line 966: */
AVCBELA.Region = ZUCBELA_newregion;
AVCBELA.Rest = (*(&(Cr.Context->Regions)));
BVCBELA = A_HEAP(A68_236 ) ;
(*BVCBELA) = AVCBELA ;
CVCBELA = (&(Cr.Context->Regions)) ;
(*CVCBELA) = BVCBELA;
 /* line 967: */
UAKAELA_ctos( Cr, &DVCBELA );
LIBAELA_lib_msg( 23, &FVCBELA );
A_CALLPROC(Msg,(FVCBELA, A_HVEC(EVCBELA,DVCBELA,A68_VC )),(FVCBELA, A_HVEC(EVCBELA,DVCBELA,A68_VC ),(Msg).nonlocals));
 /* line 968: */
LIBAELA_lib_msg( 98, &HVCBELA );
A_CALLPROC(Msg,(HVCBELA, A_HVEC(GVCBELA,Newname,A68_VC )),(HVCBELA, A_HVEC(GVCBELA,Newname,A68_VC ),(Msg).nonlocals));
 /* line 969: */
 /* line 970: */
 /* line 971: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(copy_region);
return;
} 
#undef NL

A68_VOID  LVCBELA_name_region(A68_237 * Ct, A68_VC  Newname, A68_97  Msg)
{ 
A68_162  MVCBELA;  /* collateral clause result */
A68_BOOL  NVCBELA;  /* clause result */
A68_46  OVCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  PVCBELA;  /* avoid structure result */
A68_VC * QVCBELA;  /* YIELD */
A68_312  RVCBELA;  /* collateral clause result */
A68_46  SVCBELA;  /* OPERATORS - istruct -> vector */
A68_92  TVCBELA;  /* avoid structure result */
A_PROC_ENTRY(name_region);
 /* line 974: */
 /* line 975: */
{ 
RTBBELA_checksimple(Ct, Msg);
 /* line 976: */
MVCBELA.Context = (*(&(Ct->Name)));
MVCBELA.Import = TTCAOST_nullid;
 /* line 977: */
NVCBELA = BCCBELA_isimported(TTCAOST_nullid, MVCBELA, Msg);
if ( NVCBELA )
{ 
 /* line 978: */
LIBAELA_lib_msg( 99, &PVCBELA );
A_CALLPROC(Msg,(PVCBELA, A_HVEC(OVCBELA,(*(&(Ct->Name))),A68_VC )),(PVCBELA, A_HVEC(OVCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
else
{ 
QVCBELA = (&((&((*(&(Ct->Regions)))->Region))->Name)) ;
(*QVCBELA) = Newname;
 /* line 979: */
RVCBELA.data[0] = (*(&(Ct->Name)));
RVCBELA.data[1] = Newname;
LIBAELA_lib_msg( 100, &TVCBELA );
A_CALLPROC(Msg,(TVCBELA, A_HISVEC(SVCBELA,RVCBELA,2,A68_VC )),(TVCBELA, A_HISVEC(SVCBELA,RVCBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 981: */
 /* line 982: */
 /* line 983: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(name_region);
return;
} 
#undef NL

A68_VOID  WVCBELA_dont_name_region(A68_237 * Ct, A68_97  Msg)
{ 
A68_46  XVCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  YVCBELA;  /* avoid structure result */
A68_162  ZVCBELA;  /* collateral clause result */
A68_BOOL  AWCBELA;  /* clause result */
A68_46  BWCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  CWCBELA;  /* avoid structure result */
A68_VC * DWCBELA;  /* YIELD */
A68_46  EWCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  FWCBELA;  /* avoid structure result */
A_PROC_ENTRY(dont_name_region);
 /* line 986: */
 /* line 987: */
{ 
WTBBELA_checkcompound(Ct, Msg);
 /* line 988: */
 /* line 989: */
if ( !AUBBELA_checklastimports(Ct) )
{ 
 /* line 990: */
 /* line 991: */
LIBAELA_lib_msg( 101, &YVCBELA );
A_CALLPROC(Msg,(YVCBELA, A_HVEC(XVCBELA,(*(&(Ct->Name))),A68_VC )),(YVCBELA, A_HVEC(XVCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
 /* line 992: */
ZVCBELA.Context = (*(&(Ct->Name)));
ZVCBELA.Import = (*(&((&((*(&(Ct->Regions)))->Region))->Name)));
 /* line 993: */
AWCBELA = BCCBELA_isimported(TTCAOST_nullid, ZVCBELA, Msg);
if ( AWCBELA )
{ 
 /* line 994: */
LIBAELA_lib_msg( 99, &CWCBELA );
A_CALLPROC(Msg,(CWCBELA, A_HVEC(BWCBELA,(*(&(Ct->Name))),A68_VC )),(CWCBELA, A_HVEC(BWCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
else
{ 
DWCBELA = (&((&((*(&(Ct->Regions)))->Region))->Name)) ;
(*DWCBELA) = TTCAOST_nullid;
 /* line 995: */
LIBAELA_lib_msg( 102, &FWCBELA );
A_CALLPROC(Msg,(FWCBELA, A_HVEC(EWCBELA,(*(&(Ct->Name))),A68_VC )),(FWCBELA, A_HVEC(EWCBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 996: */
 /* line 997: */
 /* line 998: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(dont_name_region);
return;
} 
#undef NL

A_STATIC A68_BOOL  JWCBELA_dontexport(A68_237 * Ct, A68_INT  Declno, A68_97  Msg)
{ 
A68_238  KWCBELA;  /* avoid structure result */
A68_238  LWCBELA_decls;
A68_232 * MWCBELA_decl;
A68_BOOL  NWCBELA_ans;
A68_312  OWCBELA;  /* collateral clause result */
A68_VC  PWCBELA;  /* avoid structure result */
A68_46  QWCBELA;  /* OPERATORS - istruct -> vector */
A68_92  RWCBELA;  /* avoid structure result */
A68_162  SWCBELA;  /* collateral clause result */
A68_BOOL  TWCBELA;  /* clause result */
A68_312  UWCBELA;  /* collateral clause result */
A68_VC  VWCBELA;  /* avoid structure result */
A68_46  WWCBELA;  /* OPERATORS - istruct -> vector */
A68_92  XWCBELA;  /* avoid structure result */
A68_BOOL * YWCBELA;  /* YIELD */
A68_BOOL  ZWCBELA;  /* clause result */
A_PROC_ENTRY(dontexport);
 /* line 1006: */
 /* line 1007: */
{ 
LEBBELA_get_decls( Ct, Msg, &KWCBELA );
LWCBELA_decls = KWCBELA;
 /* line 1008: */
MWCBELA_decl = (&A_VINDEX(LWCBELA_decls,Declno));
 /* line 1009: */
NWCBELA_ans = A68_FALSE;
 /* line 1010: */
 /* line 1011: */
if ( !(*(&(MWCBELA_decl->Export))) )
{ 
 /* line 1012: */
QVJAELA_sort_id( (*(&(MWCBELA_decl->Sort))), &PWCBELA );
OWCBELA.data[0] = PWCBELA;
OWCBELA.data[1] = (*(&(MWCBELA_decl->Name)));
 /* line 1013: */
LIBAELA_lib_msg( 111, &RWCBELA );
A_CALLPROC(Msg,(RWCBELA, A_HISVEC(QWCBELA,OWCBELA,2,A68_VC )),(RWCBELA, A_HISVEC(QWCBELA,OWCBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
SWCBELA.Context = (*(&(Ct->Name)));
SWCBELA.Import = TTCAOST_nullid;
 /* line 1014: */
TWCBELA = BCCBELA_isimported((*(&(MWCBELA_decl->Name))), SWCBELA, Msg);
if ( TWCBELA )
{ 
 /* line 1015: */
QVJAELA_sort_id( (*(&(MWCBELA_decl->Sort))), &VWCBELA );
UWCBELA.data[0] = VWCBELA;
UWCBELA.data[1] = (*(&(MWCBELA_decl->Name)));
 /* line 1016: */
LIBAELA_lib_msg( 113, &XWCBELA );
A_CALLPROC(Msg,(XWCBELA, A_HISVEC(WWCBELA,UWCBELA,2,A68_VC )),(XWCBELA, A_HISVEC(WWCBELA,UWCBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
YWCBELA = (&(MWCBELA_decl->Export)) ;
(*YWCBELA) = A68_FALSE;
 /* line 1017: */
NWCBELA_ans = A68_TRUE;
} 
} 
 /* line 1018: */
 /* line 1019: */
ZWCBELA = NWCBELA_ans;
} 
A_PROC_EXIT(dontexport);
return( ZWCBELA );
} 
#undef NL

A68_VOID  DXCBELA_dont_import(A68_242  Cr, A68_INT  Declno, A68_97  Msg)
{ 
A68_238  EXCBELA;  /* avoid structure result */
A68_VC  FXCBELA_declname;
A68_233 * GXCBELA_b;
A68_46  HXCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  IXCBELA;  /* avoid structure result */
A68_VC * JXCBELA;  /* YIELD */
A68_162  KXCBELA;  /* collateral clause result */
A68_162 * LXCBELA;  /* YIELD */
A68_46  MXCBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  NXCBELA;  /* avoid structure result */
A_PROC_ENTRY(dont_import);
 /* line 1025: */
 /* line 1026: */
{ 
MTBBELA_checkregionselected(Cr, Msg);
 /* line 1027: */
LEBBELA_get_decls( Cr.Context, Msg, &EXCBELA );
FXCBELA_declname = (*(&((&A_VINDEX(EXCBELA,Declno))->Name)));
 /* line 1028: */
GXCBELA_b = BGKAELA_check_binding(Cr, FXCBELA_declname, Msg);
 /* line 1029: */
 /* line 1030: */
if ( A_VC_EQ((*(&(GXCBELA_b->Name))),TTCAOST_nullid) )
{ 
 /* line 1031: */
LIBAELA_lib_msg( 106, &IXCBELA );
A_CALLPROC(Msg,(IXCBELA, A_HVEC(HXCBELA,FXCBELA_declname,A68_VC )),(IXCBELA, A_HVEC(HXCBELA,FXCBELA_declname,A68_VC ),(Msg).nonlocals));
} 
else
{ 
JXCBELA = (&(GXCBELA_b->Name)) ;
(*JXCBELA) = TTCAOST_nullid;
 /* line 1032: */
KXCBELA.Context = TTCAOST_nullid;
KXCBELA.Import = TTCAOST_nullid;
LXCBELA = (&(GXCBELA_b->Ctn)) ;
(*LXCBELA) = KXCBELA;
 /* line 1033: */
LIBAELA_lib_msg( 107, &NXCBELA );
A_CALLPROC(Msg,(NXCBELA, A_HVEC(MXCBELA,FXCBELA_declname,A68_VC )),(NXCBELA, A_HVEC(MXCBELA,FXCBELA_declname,A68_VC ),(Msg).nonlocals));
 /* line 1034: */
 /* line 1035: */
 /* line 1036: */
MDKAELA_setlibchanged(Msg);
} 
} 
A_PROC_EXIT(dont_import);
return;
} 
#undef NL

A68_VOID  RXCBELA_erase(A68_237 * Ct, A68_INT  Declno, A68_97  Msg)
{ 
A68_238  SXCBELA;  /* avoid structure result */
A68_238  TXCBELA_decls;
A68_332  VXCBELA_generator;   /* proc value of non-global proc */
A68_238  AYCBELA;  /* avoid structure result */
A68_238  BYCBELA_new;
A68_INT  CYCBELA_sort;
A68_VC  DYCBELA_name;
A68_312  EYCBELA;  /* collateral clause result */
A68_VC  FYCBELA;  /* avoid structure result */
A68_46  GYCBELA;  /* OPERATORS - istruct -> vector */
A68_92  HYCBELA;  /* avoid structure result */
A68_INT  IYCBELA_i;
A68_INT  JYCBELA;  /* to part of loop */
A68_BOOL  KYCBELA;  /* optbool result */
A68_312  LYCBELA;  /* collateral clause result */
A68_VC  MYCBELA;  /* avoid structure result */
A68_46  NYCBELA;  /* OPERATORS - istruct -> vector */
A68_92  OYCBELA;  /* avoid structure result */
A68_238  PYCBELA;  /* OPERATORS - trim index */
A68_238  QYCBELA;  /* OPERATORS - trim index */
A68_238  RYCBELA;  /* YIELD */
A68_238  SYCBELA;  /* OPERATORS - assign op */
A68_238  TYCBELA;  /* OPERATORS - trim index */
A68_238  UYCBELA;  /* OPERATORS - trim index */
A68_238  VYCBELA;  /* YIELD */
A68_238  WYCBELA;  /* OPERATORS - assign op */
A68_312  XYCBELA;  /* collateral clause result */
A68_VC  YYCBELA;  /* avoid structure result */
A68_46  ZYCBELA;  /* OPERATORS - istruct -> vector */
A68_92  AZCBELA;  /* avoid structure result */
A_PROC_ENTRY(erase);
 /* line 1039: */
 /* line 1040: */
{ 
LEBBELA_get_decls( Ct, Msg, &SXCBELA );
TXCBELA_decls = SXCBELA;
 /* line 1041: */
A_CLOSURE( VXCBELA_generator, WXCBELA_generator, XXCBELA_generator );
(( XXCBELA_generator * ) ( VXCBELA_generator.nonlocals )) -> TXCBELA_decls = TXCBELA_decls;
A_CALLPROC(VXCBELA_generator,(A68_FALSE, &AYCBELA),(A68_FALSE, &AYCBELA,(VXCBELA_generator).nonlocals));
BYCBELA_new = AYCBELA;
 /* line 1042: */
CYCBELA_sort = (*(&((&A_VINDEX(TXCBELA_decls,Declno))->Sort)));
 /* line 1043: */
DYCBELA_name = (*(&((&A_VINDEX(TXCBELA_decls,Declno))->Name)));
 /* line 1044: */
 /* line 1045: */
if ( (*(&((&A_VINDEX(TXCBELA_decls,Declno))->Export))) )
{ 
QVJAELA_sort_id( CYCBELA_sort, &FYCBELA );
EYCBELA.data[0] = FYCBELA;
EYCBELA.data[1] = DYCBELA_name;
 /* line 1046: */
LIBAELA_lib_msg( 108, &HYCBELA );
A_CALLPROC(Msg,(HYCBELA, A_HISVEC(GYCBELA,EYCBELA,2,A68_VC )),(HYCBELA, A_HISVEC(GYCBELA,EYCBELA,2,A68_VC ),(Msg).nonlocals));
} 
 /* line 1047: */
 /* line 1048: */
JYCBELA = TXCBELA_decls.upb;
for ( IYCBELA_i = 1;
IYCBELA_i <= JYCBELA;
IYCBELA_i += 1 )
{ 
KYCBELA = (IYCBELA_i!=Declno);
if ( KYCBELA )
{ /* line 1049: */
KYCBELA = BICBELA_inuses(DYCBELA_name, (*(&((&A_VINDEX(TXCBELA_decls,IYCBELA_i))->Uses))));
}
if ( KYCBELA )
{ 
FJCBELA_printdecl(Ct, Declno, A68_FALSE, A68_TRUE, Msg);
 /* line 1050: */
QVJAELA_sort_id( CYCBELA_sort, &MYCBELA );
LYCBELA.data[0] = MYCBELA;
LYCBELA.data[1] = DYCBELA_name;
 /* line 1051: */
 /* line 1052: */
LIBAELA_lib_msg( 109, &OYCBELA );
A_CALLPROC(Msg,(OYCBELA, A_HISVEC(NYCBELA,LYCBELA,2,A68_VC )),(OYCBELA, A_HISVEC(NYCBELA,LYCBELA,2,A68_VC ),(Msg).nonlocals));
} 
}
 /* line 1053: */
if ( (*(&((&A_VINDEX(TXCBELA_decls,Declno))->Import))) )
{ 
FACBELA_removeimport(Ct, DYCBELA_name);
} 
 /* line 1054: */
if ( (Declno>1) )
{ 
RYCBELA = A_VTRIM(PYCBELA,(BYCBELA_new),A_VTSCRIPT(&(PYCBELA.upb),(BYCBELA_new).upb,1,(Declno-1))) ;
SYCBELA = A_VTRIM(QYCBELA,(TXCBELA_decls),A_VTSCRIPT(&(QYCBELA.upb),(TXCBELA_decls).upb,1,(Declno-1))) ;
A_VASSIGN2(SYCBELA,RYCBELA,A68_232 );
} 
 /* line 1055: */
if ( (Declno<TXCBELA_decls.upb) )
{ 
VYCBELA = A_VTRIM(TYCBELA,(BYCBELA_new),A_VTSCRIPT(&(TYCBELA.upb),(BYCBELA_new).upb,Declno,(BYCBELA_new).upb)) ;
WYCBELA = A_VTRIM(UYCBELA,(TXCBELA_decls),A_VTSCRIPT(&(UYCBELA.upb),(TXCBELA_decls).upb,(Declno+1),(TXCBELA_decls).upb)) ;
A_VASSIGN2(WYCBELA,VYCBELA,A68_232 );
} 
 /* line 1056: */
COCBELA_updatedecls(Ct, BYCBELA_new, Msg);
 /* line 1057: */
CJWAELA_erase_declattributes(Ct, Declno, Msg);
 /* line 1058: */
QVJAELA_sort_id( CYCBELA_sort, &YYCBELA );
XYCBELA.data[0] = YYCBELA;
XYCBELA.data[1] = DYCBELA_name;
 /* line 1059: */
LIBAELA_lib_msg( 110, &AZCBELA );
A_CALLPROC(Msg,(AZCBELA, A_HISVEC(ZYCBELA,XYCBELA,2,A68_VC )),(AZCBELA, A_HISVEC(ZYCBELA,XYCBELA,2,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(erase);
return;
} 
#undef NL

A68_VOID  EZCBELA_export(A68_237 * Ct, A68_INT  Declno, A68_97  Msg)
{ 
A68_238  FZCBELA;  /* avoid structure result */
A68_238  GZCBELA_decls;
A68_INT  HZCBELA_sort;
A68_VC  IZCBELA_name;
A68_312  JZCBELA;  /* collateral clause result */
A68_VC  KZCBELA;  /* avoid structure result */
A68_46  LZCBELA;  /* OPERATORS - istruct -> vector */
A68_92  MZCBELA;  /* avoid structure result */
A68_BOOL  NZCBELA;  /* optbool result */
A68_312  OZCBELA;  /* collateral clause result */
A68_347  RZCBELA;  /* collateral clause result */
A68_52  UZCBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VZCBELA;  /* YIELD */
A68_VC  WZCBELA;  /* avoid structure result */
A68_52  XZCBELA;  /* OPERATORS - mode -> union mode */
A68_85  YZCBELA;  /* OPERATORS - istruct -> vector */
A68_VC  ZZCBELA;  /* avoid structure result */
A68_46  AADBELA;  /* OPERATORS - istruct -> vector */
A68_92  BADBELA;  /* avoid structure result */
A68_BOOL * CADBELA;  /* YIELD */
A68_312  DADBELA;  /* collateral clause result */
A68_VC  EADBELA;  /* avoid structure result */
A68_46  FADBELA;  /* OPERATORS - istruct -> vector */
A68_92  GADBELA;  /* avoid structure result */
A_PROC_ENTRY(export);
 /* line 1063: */
 /* line 1064: */
{ 
LEBBELA_get_decls( Ct, Msg, &FZCBELA );
GZCBELA_decls = FZCBELA;
 /* line 1065: */
HZCBELA_sort = (*(&((&A_VINDEX(GZCBELA_decls,Declno))->Sort)));
 /* line 1066: */
IZCBELA_name = (*(&((&A_VINDEX(GZCBELA_decls,Declno))->Name)));
 /* line 1067: */
 /* line 1068: */
if ( (*(&((&A_VINDEX(GZCBELA_decls,Declno))->Export))) )
{ 
QVJAELA_sort_id( HZCBELA_sort, &KZCBELA );
JZCBELA.data[0] = KZCBELA;
JZCBELA.data[1] = IZCBELA_name;
 /* line 1069: */
LIBAELA_lib_msg( 115, &MZCBELA );
A_CALLPROC(Msg,(MZCBELA, A_HISVEC(LZCBELA,JZCBELA,2,A68_VC )),(MZCBELA, A_HISVEC(LZCBELA,JZCBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
NZCBELA = (HZCBELA_sort!=LVJAELA_kfn);
if ( NZCBELA )
{ /* line 1070: */
NZCBELA = (HZCBELA_sort!=OVJAELA_kmac);
}
if ( NZCBELA )
{ 
 /* line 1071: */
OZCBELA.data[0] = IZCBELA_name;
 /* line 1072: */
if ( (HZCBELA_sort==KVJAELA_kint) )
{ 
OZCBELA.data[1] = QZCBELA;
} 
else
{ 
VZCBELA = TZCBELA ;
RZCBELA.data[0] = A_UNITE(UZCBELA,mode7,7,VZCBELA);
QVJAELA_sort_id( HZCBELA_sort, &WZCBELA );
RZCBELA.data[1] = A_UNITE(XZCBELA,mode7,7,WZCBELA);
 /* line 1073: */
 /* line 1074: */
UJBAOSL_oneline( A_HISVEC(YZCBELA,RZCBELA,2,A68_52 ), &ZZCBELA );
OZCBELA.data[1] = ZZCBELA;
} 
 /* line 1075: */
LIBAELA_lib_msg( 116, &BADBELA );
A_CALLPROC(Msg,(BADBELA, A_HISVEC(AADBELA,OZCBELA,2,A68_VC )),(BADBELA, A_HISVEC(AADBELA,OZCBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
CADBELA = (&((&A_VINDEX(GZCBELA_decls,Declno))->Export)) ;
(*CADBELA) = A68_TRUE;
 /* line 1076: */
COCBELA_updatedecls(Ct, GZCBELA_decls, Msg);
 /* line 1077: */
QVJAELA_sort_id( HZCBELA_sort, &EADBELA );
DADBELA.data[0] = EADBELA;
DADBELA.data[1] = IZCBELA_name;
 /* line 1078: */
 /* line 1079: */
LIBAELA_lib_msg( 117, &GADBELA );
A_CALLPROC(Msg,(GADBELA, A_HISVEC(FADBELA,DADBELA,2,A68_VC )),(GADBELA, A_HISVEC(FADBELA,DADBELA,2,A68_VC ),(Msg).nonlocals));
} 
} 
} 
A_PROC_EXIT(export);
return;
} 
#undef NL

A68_VOID  JADBELA_exportall(A68_237 * Ct, A68_97  Msg)
{ 
A68_238  KADBELA;  /* avoid structure result */
A68_238  LADBELA_decls;
A68_BOOL  MADBELA_changed;
A68_BOOL  NADBELA_somethingtoexport;
A68_348  PADBELA_generator;   /* proc value of non-global proc */
A68_54  VADBELA;  /* avoid structure result */
A68_54  UADBELA_state;
A68_BOOL * WADBELA_s;
A68_232 * XADBELA_d;
A68_INT  YADBELA;  /* forall loop counter */
A68_BOOL  ZADBELA;  /* optbool result */
A68_BOOL * ABDBELA;  /* YIELD */
A68_46  BBDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  CBDBELA;  /* avoid structure result */
A68_BOOL * DBDBELA_st;
A68_232 * EBDBELA_dc;
A68_INT  FBDBELA;  /* forall loop counter */
A68_BOOL  GBDBELA;  /* optbool result */
A68_312  HBDBELA;  /* collateral clause result */
A68_VC  IBDBELA;  /* avoid structure result */
A68_46  JBDBELA;  /* OPERATORS - istruct -> vector */
A68_92  KBDBELA;  /* avoid structure result */
A68_312  LBDBELA;  /* collateral clause result */
A68_VC  MBDBELA;  /* avoid structure result */
A68_46  NBDBELA;  /* OPERATORS - istruct -> vector */
A68_92  OBDBELA;  /* avoid structure result */
A68_312  PBDBELA;  /* collateral clause result */
A68_VC  SBDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  TBDBELA;  /* OPERATORS - istruct -> vector */
A68_92  UBDBELA;  /* avoid structure result */
A_PROC_ENTRY(exportall);
 /* line 1082: */
 /* line 1083: */
{ 
LEBBELA_get_decls( Ct, Msg, &KADBELA );
LADBELA_decls = KADBELA;
 /* line 1084: */
MADBELA_changed = A68_FALSE;
NADBELA_somethingtoexport = A68_FALSE;
 /* line 1085: */
A_CLOSURE( PADBELA_generator, QADBELA_generator, RADBELA_generator );
(( RADBELA_generator * ) ( PADBELA_generator.nonlocals )) -> LADBELA_decls = LADBELA_decls;
A_CALLPROC(PADBELA_generator,(A68_TRUE, &VADBELA),(A68_TRUE, &VADBELA,(PADBELA_generator).nonlocals));
UADBELA_state = VADBELA;
 /* line 1086: */
 /* line 1087: */
YADBELA = UADBELA_state.upb -1;
if ( YADBELA != LADBELA_decls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
WADBELA_s = UADBELA_state.data;
XADBELA_d = LADBELA_decls.data;
for (;YADBELA-- >= 0;
(WADBELA_s++
,XADBELA_d++
) )
{
ZADBELA = ((*(&(XADBELA_d->Sort)))==LVJAELA_kfn);
if ( ! ZADBELA )
{ /* line 1088: */
ZADBELA = ((*(&(XADBELA_d->Sort)))==OVJAELA_kmac);
}
if ( ZADBELA )
{ 
NADBELA_somethingtoexport = A68_TRUE;
 /* line 1089: */
(*WADBELA_s) = (*(&(XADBELA_d->Export)));
 /* line 1090: */
if ( !(*WADBELA_s) )
{ 
ABDBELA = (&(XADBELA_d->Export)) ;
(*ABDBELA) = A68_TRUE;
 /* line 1091: */
MADBELA_changed = A68_TRUE;
} 
} 
else
{ 
 /* line 1092: */
 /* line 1093: */
(*WADBELA_s) = A68_FALSE;
} 
}
 /* line 1094: */
 /* line 1095: */
if ( MADBELA_changed )
{ 
COCBELA_updatedecls(Ct, LADBELA_decls, Msg);
 /* line 1096: */
LIBAELA_lib_msg( 118, &CBDBELA );
A_CALLPROC(Msg,(CBDBELA, A_HVEC(BBDBELA,(*(&(Ct->Name))),A68_VC )),(CBDBELA, A_HVEC(BBDBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 1097: */
 /* line 1098: */
FBDBELA = UADBELA_state.upb -1;
if ( FBDBELA != LADBELA_decls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
DBDBELA_st = UADBELA_state.data;
EBDBELA_dc = LADBELA_decls.data;
for (;FBDBELA-- >= 0;
(DBDBELA_st++
,EBDBELA_dc++
) )
{
GBDBELA = ((*(&(EBDBELA_dc->Sort)))==LVJAELA_kfn);
if ( ! GBDBELA )
{ /* line 1099: */
GBDBELA = ((*(&(EBDBELA_dc->Sort)))==OVJAELA_kmac);
}
if ( GBDBELA )
{ 
 /* line 1100: */
if ( (*DBDBELA_st) )
{ 
 /* line 1101: */
QVJAELA_sort_id( (*(&(EBDBELA_dc->Sort))), &IBDBELA );
HBDBELA.data[0] = IBDBELA;
HBDBELA.data[1] = (*(&(EBDBELA_dc->Name)));
 /* line 1102: */
LIBAELA_lib_msg( 119, &KBDBELA );
A_CALLPROC(Msg,(KBDBELA, A_HISVEC(JBDBELA,HBDBELA,2,A68_VC )),(KBDBELA, A_HISVEC(JBDBELA,HBDBELA,2,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 1103: */
QVJAELA_sort_id( (*(&(EBDBELA_dc->Sort))), &MBDBELA );
LBDBELA.data[0] = MBDBELA;
LBDBELA.data[1] = (*(&(EBDBELA_dc->Name)));
 /* line 1104: */
 /* line 1105: */
 /* line 1106: */
LIBAELA_lib_msg( 120, &OBDBELA );
A_CALLPROC(Msg,(OBDBELA, A_HISVEC(NBDBELA,LBDBELA,2,A68_VC )),(OBDBELA, A_HISVEC(NBDBELA,LBDBELA,2,A68_VC ),(Msg).nonlocals));
} 
} 
}
 /* line 1107: */
} 
else
{ 
 /* line 1108: */
if ( NADBELA_somethingtoexport )
{ 
PBDBELA.data[0] = RBDBELA;
} 
else
{ 
 /* line 1109: */
PBDBELA.data[0] = A_HVEC(SBDBELA,' ',A68_CHAR );
} 
PBDBELA.data[1] = (*(&(Ct->Name)));
 /* line 1110: */
 /* line 1111: */
LIBAELA_lib_msg( 121, &UBDBELA );
A_CALLPROC(Msg,(UBDBELA, A_HISVEC(TBDBELA,PBDBELA,2,A68_VC )),(UBDBELA, A_HISVEC(TBDBELA,PBDBELA,2,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(exportall);
return;
} 
#undef NL

A68_VOID  YBDBELA_dont_export(A68_237 * Ct, A68_INT  Declno, A68_97  Msg)
{ 
A68_238  ZBDBELA;  /* avoid structure result */
A68_238  ACDBELA_decls;
A68_312  BCDBELA;  /* collateral clause result */
A68_VC  CCDBELA;  /* avoid structure result */
A68_46  DCDBELA;  /* OPERATORS - istruct -> vector */
A68_92  ECDBELA;  /* avoid structure result */
A_PROC_ENTRY(dont_export);
 /* line 1115: */
 /* line 1116: */
{ 
LEBBELA_get_decls( Ct, Msg, &ZBDBELA );
ACDBELA_decls = ZBDBELA;
 /* line 1117: */
 /* line 1118: */
if ( JWCBELA_dontexport(Ct, Declno, Msg) )
{ 
 /* line 1119: */
QVJAELA_sort_id( (*(&((&A_VINDEX(ACDBELA_decls,Declno))->Sort))), &CCDBELA );
BCDBELA.data[0] = CCDBELA;
BCDBELA.data[1] = (*(&((&A_VINDEX(ACDBELA_decls,Declno))->Name)));
LIBAELA_lib_msg( 124, &ECDBELA );
A_CALLPROC(Msg,(ECDBELA, A_HISVEC(DCDBELA,BCDBELA,2,A68_VC )),(ECDBELA, A_HISVEC(DCDBELA,BCDBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 1120: */
 /* line 1121: */
 /* line 1122: */
COCBELA_updatedecls(Ct, ACDBELA_decls, Msg);
} 
} 
A_PROC_EXIT(dont_export);
return;
} 
#undef NL

A68_VOID  HCDBELA_clear_exports(A68_237 * Ct, A68_97  Msg)
{ 
A68_46  ICDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  JCDBELA;  /* avoid structure result */
A68_BOOL  KCDBELA_change;
A68_238  LCDBELA;  /* avoid structure result */
A68_238  MCDBELA_decls;
A68_46  NCDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  OCDBELA;  /* avoid structure result */
A68_INT  PCDBELA_declno;
A68_INT  QCDBELA;  /* to part of loop */
A68_BOOL  RCDBELA;  /* optbool result */
A68_312  SCDBELA;  /* collateral clause result */
A68_VC  TCDBELA;  /* avoid structure result */
A68_46  UCDBELA;  /* OPERATORS - istruct -> vector */
A68_92  VCDBELA;  /* avoid structure result */
A68_46  WCDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  XCDBELA;  /* avoid structure result */
A_PROC_ENTRY(clear_exports);
 /* line 1125: */
 /* line 1126: */
{ 
 /* line 1127: */
if ( !FRCBELA_containsexports(Ct, Msg) )
{ 
 /* line 1128: */
LIBAELA_lib_msg( 122, &JCDBELA );
A_CALLPROC(Msg,(JCDBELA, A_HVEC(ICDBELA,(*(&(Ct->Name))),A68_VC )),(JCDBELA, A_HVEC(ICDBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
else
{ 
KCDBELA_change = A68_FALSE;
 /* line 1129: */
LEBBELA_get_decls( Ct, Msg, &LCDBELA );
MCDBELA_decls = LCDBELA;
 /* line 1130: */
LIBAELA_lib_msg( 123, &OCDBELA );
A_CALLPROC(Msg,(OCDBELA, A_HVEC(NCDBELA,(*(&(Ct->Name))),A68_VC )),(OCDBELA, A_HVEC(NCDBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 1131: */
 /* line 1132: */
QCDBELA = MCDBELA_decls.upb;
for ( PCDBELA_declno = 1;
PCDBELA_declno <= QCDBELA;
PCDBELA_declno += 1 )
{ 
RCDBELA = (*(&((&A_VINDEX(MCDBELA_decls,PCDBELA_declno))->Export)));
if ( RCDBELA )
{ /* line 1133: */
RCDBELA = JWCBELA_dontexport(Ct, PCDBELA_declno, Msg);
}
if ( RCDBELA )
{ 
 /* line 1134: */
QVJAELA_sort_id( (*(&((&A_VINDEX(MCDBELA_decls,PCDBELA_declno))->Sort))), &TCDBELA );
SCDBELA.data[0] = TCDBELA;
SCDBELA.data[1] = (*(&((&A_VINDEX(MCDBELA_decls,PCDBELA_declno))->Name)));
LIBAELA_lib_msg( 124, &VCDBELA );
A_CALLPROC(Msg,(VCDBELA, A_HISVEC(UCDBELA,SCDBELA,2,A68_VC )),(VCDBELA, A_HISVEC(UCDBELA,SCDBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 1135: */
 /* line 1136: */
 /* line 1137: */
KCDBELA_change = A68_TRUE;
} 
}
 /* line 1139: */
 /* line 1140: */
if ( KCDBELA_change )
{ 
COCBELA_updatedecls(Ct, MCDBELA_decls, Msg);
 /* line 1141: */
 /* line 1142: */
 /* line 1143: */
 /* line 1144: */
 /* line 1145: */
LIBAELA_lib_msg( 125, &XCDBELA );
A_CALLPROC(Msg,(XCDBELA, A_HVEC(WCDBELA,(*(&(Ct->Name))),A68_VC )),(XCDBELA, A_HVEC(WCDBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
} 
} 
} 
A_PROC_EXIT(clear_exports);
return;
} 
#undef NL

A68_INT  YCDBELA_ordercontexts(void)
{ 
A68_239 * ZCDBELA_c;
A68_236 * ADDBELA_r;
A68_INT  BDDBELA_no;
A68_237 * CDDBELA_ct;
A68_242  DDDBELA;  /* collateral clause result */
A68_242  EDDBELA_first;
A68_BOOL  FDDBELA;  /* optbool result */
A68_BOOL  GDDBELA;  /* optbool result */
A68_BOOL  HDDBELA;  /* optbool result */
A68_242  IDDBELA;  /* collateral clause result */
A68_BOOL  JDDBELA;  /* clause result */
A68_INT * KDDBELA;  /* YIELD */
A68_INT  LDDBELA;  /* clause result */
A_PROC_ENTRY(ordercontexts);
{ 
 /* line 1154: */
BDDBELA_no = 0;
 /* line 1155: */
ZLBBELA_zero_ctnos();
 /* line 1156: */
CDDBELA_ct = (&((*(&(HXJAELA_library->Contexts)))->Context));
 /* line 1157: */
DDDBELA.Context = CDDBELA_ct;
DDDBELA.Region = (&((*(&(CDDBELA_ct->Regions)))->Region));
EDDBELA_first = DDDBELA;
 /* line 1158: */
for ( ;; )
{ 
 /* line 1159: */
ZCDBELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 1160: */
for ( ;; )
{ 
 /* line 1161: */
if ( !((ZCDBELA_c!=EVJAELA_nilcontexts)) ) break;
ADDBELA_r = (*(&((&(ZCDBELA_c->Context))->Regions)));
 /* line 1162: */
for ( ;; )
{ 
 /* line 1163: */
if ( !((ADDBELA_r!=CVJAELA_nilregions)) ) break;
 /* line 1164: */
FDDBELA = ((*(&((&(ADDBELA_r->Region))->Ctno)))==0);
if ( FDDBELA )
{ /* line 1165: */
GDDBELA = ((*(&((*(&((&EDDBELA_first)->Region)))->Ctno)))!=0);
if ( ! GDDBELA )
{GDDBELA = A_VC_LT((*(&((&(ZCDBELA_c->Context))->Name))),(*(&((*(&((&EDDBELA_first)->Context)))->Name))));
}
 /* line 1166: */
if ( ! GDDBELA )
{ /* line 1167: */
HDDBELA = A_VC_EQ((*(&((&(ZCDBELA_c->Context))->Name))),(*(&((*(&((&EDDBELA_first)->Context)))->Name))));
if ( HDDBELA )
{HDDBELA = A_VC_LT((*(&((&(ADDBELA_r->Region))->Name))),(*(&((*(&((&EDDBELA_first)->Region)))->Name))));
}
GDDBELA = HDDBELA;
}
 /* line 1168: */
FDDBELA = GDDBELA;
}
if ( FDDBELA )
{ 
IDDBELA.Context = (&(ZCDBELA_c->Context));
 /* line 1169: */
IDDBELA.Region = (&(ADDBELA_r->Region));
EDDBELA_first = IDDBELA;
} 
 /* line 1170: */
 /* line 1171: */
ADDBELA_r = (*(&(ADDBELA_r->Rest)));
}
 /* line 1172: */
 /* line 1173: */
ZCDBELA_c = (*(&(ZCDBELA_c->Rest)));
}
 /* line 1174: */
 /* line 1175: */
JDDBELA = ((*(&((*(&((&EDDBELA_first)->Region)))->Ctno)))==0);
if ( !JDDBELA ) break;
KDDBELA = (&((*(&((&EDDBELA_first)->Region)))->Ctno)) ;
(*KDDBELA) = BDDBELA_no+=1;
}
 /* line 1176: */
 /* line 1177: */
 /* line 1180: */
LDDBELA = BDDBELA_no;
} 
A_PROC_EXIT(ordercontexts);
return( LDDBELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void ZSBBELA(void)   /* initialise DECS libprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/libprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/attrdecls.m","./mfiles/attrlevel1.m","./mfiles/libinterface.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_180  ITBBELA;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
DZVAELA();   /* USE attrdecls */
MPOAELA();   /* USE attrlevel1 */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/libprocs.a68";
A_config.translation_time = "Tue Apr  4 10:39:55 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YSBBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:39:55 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS libprocs);
UEAALIB_a68config(LGAALIB_configinfo, DTBBELA);
 /* line 115: */
FTBBELA_generator( A68_FALSE, &ITBBELA );
JTBBELA_nodps = ITBBELA;
 /* line 117: */
 /* line 125: */
 /* line 132: */
 /* line 139: */
 /* line 146: */
 /* line 161: */
 /* line 185: */
 /* line 193: */
 /* line 199: */
 /* line 219: */
 /* line 290: */
 /* line 302: */
 /* line 310: */
 /* line 333: */
 /* line 347: */
 /* line 360: */
 /* line 372: */
 /* line 407: */
 /* line 424: */
 /* line 480: */
 /* line 496: */
 /* line 530: */
 /* line 571: */
 /* line 579: */
 /* line 595: */
 /* line 607: */
 /* line 650: */
 /* line 684: */
 /* line 734: */
 /* line 746: */
 /* line 793: */
 /* line 809: */
 /* line 824: */
 /* line 835: */
 /* line 845: */
 /* line 859: */
 /* line 875: */
 /* line 893: */
 /* line 921: */
 /* line 940: */
 /* line 956: */
 /* line 973: */
 /* line 985: */
 /* line 1005: */
 /* line 1024: */
 /* line 1038: */
 /* line 1062: */
 /* line 1081: */
 /* line 1114: */
 /* line 1124: */
 /* line 1150: */
 /* line 1151: */
 /* line 1153: */
 /* line 1189: */
A_PROC_EXIT(DECS libprocs);
} 
#undef NL
/* end of translation of ./a68files/libprocs.a68 */
