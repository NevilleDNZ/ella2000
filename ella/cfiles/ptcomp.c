
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
/* UNAME:NYJBELA */
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
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160) VOID */
struct A68t160 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t161,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t162,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BITS,BITS) BITS */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ,A68_INT ),(struct A68t164 ,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t164,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(CHAR) VOID */
struct A68t166 ;

A_PROCEDURE(A68_INT ,A68t165,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166) INT */

A_PROCEDURE(A68_CHAR ,A68t166,(void),(void *));
typedef struct A68t166  A68_166 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t167,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t168,(A68_INT ),(A68_INT ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t169,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t170,(A68_VC *),(A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t171,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t174 ;
struct A68t175 ;
struct A68t176 ;
struct A68t177 ;

A_PROCEDURE(A68_VOID ,A68t173,(A68_BOOL ,struct A68t174 ,struct A68t175 ,struct A68t176 ,struct A68t43 ,struct A68t43 ,struct A68t177 ,struct A68t43 ,A68_BOOL *,struct A68t97 ),(A68_BOOL ,struct A68t174 ,struct A68t175 ,struct A68t176 ,struct A68t43 ,struct A68t43 ,struct A68t177 ,struct A68t43 ,A68_BOOL *,struct A68t97 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(BOOL,MODE174,MODE175,MODE176,MODE43,MODE43,MODE177,MODE43,REF BOOL,MODE97) VOID */
struct A68t174{
struct A68t179 * Context;
struct A68t180 * Region;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE179,REF MODE180)  */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC *,A68_INT *,struct A68t97 ),(A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF REF MODE26,REF INT,MODE97) BOOL */
struct A68t175 { A68_INT mode; union {
struct A68t111 * mode1;
struct A68t178  mode2;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF MODE111,MODE178)  */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(A68_VC ,A68_VC ,struct A68t158 ),(A68_VC ,A68_VC ,struct A68t158 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE26,REF MODE26,MODE158) VOID */
struct A68t183{
A68_BITS  Code;
A_PAD_BITS(PAD_36)
A68_INT  First_block;
A_PAD_INT(PAD_37)
A68_INT  First_offset;
A_PAD_INT(PAD_38)
A68_INT  Data_elts;
A_PAD_INT(PAD_39)
A68_INT  Dp_elts;
A_PAD_INT(PAD_40)
A68_INT  Version;
A_PAD_INT(PAD_41)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_42)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t188 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE188 */
struct A68t188{
A68_INT  Sort;
A_PAD_INT(PAD_43)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_44)
A68_BOOL  Import;
A_PAD_BOOL(PAD_45)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_46)
A68_INT  Version;
A_PAD_INT(PAD_47)
A68_VC  Il;
struct A68t189 * Uses;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE189)  */
struct A68t179{
A68_VC  Name;
struct A68t183  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_48)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_49)
struct A68t184  Decls;
struct A68t185 * Declattributes;
struct A68t186 * Regions;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,MODE183,BOOL,BOOL,REF MODE184,REF MODE185,REF MODE186)  */
struct A68t180{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_50)
struct A68t181 * Imports;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(REF MODE26,INT,REF MODE181)  */
struct A68t182{
struct A68t158  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t183  Info;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE158,REF MODE26,REF MODE26,INT,MODE183)  */
struct A68t181{
struct A68t182  Binding;
struct A68t181 * Rest;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE182,REF MODE181)  */
A_VECTOR(struct A68t183 ,A68t187);
typedef struct A68t187  A68_187 ;    /* VECTOR [] MODE183 */
struct A68t185{
A68_INT  Key;
A_PAD_INT(PAD_52)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_53)
struct A68t32  Version;
struct A68t187  Data;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE187,REF MODE185)  */
struct A68t186{
struct A68t180  Region;
struct A68t186 * Rest;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE180,REF MODE186)  */
struct A68t189{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_55)
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE189)  */

A_PROCEDURE(A68_VOID ,A68t190,(A68_BOOL ,struct A68t174 ,struct A68t175 ,struct A68t97 ,struct A68t183 *),(A68_BOOL ,struct A68t174 ,struct A68t175 ,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(BOOL,MODE174,MODE175,MODE97) MODE183 */
struct A68t191{
struct A68t192 * Database;
A68_VC  Description;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE192,REF MODE26)  */
struct A68t192{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t193 * Df;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE193)  */
A_VECTOR(struct A68t198 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE198 */
struct A68t199{
A68_INT  Block_num;
A_PAD_INT(PAD_56)
A68_INT  Offset;
A_PAD_INT(PAD_57)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT)  */
struct A68t198{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_58)
struct A68t199  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_59)
A68_INT  Dp_elts;
A_PAD_INT(PAD_60)
A68_INT  Code;
A_PAD_INT(PAD_61)
A68_INT  Version;
A_PAD_INT(PAD_62)
A68_INT  Read_size;
A_PAD_INT(PAD_63)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(BOOL,MODE199,INT,INT,INT,INT,INT)  */
struct A68t193{
struct A68t183 * Root;
struct A68t183 * Indirs_dp;
struct A68t183 * Freelist_dp;
struct A68t183 * Pagetable_dp;
struct A68t183 * Append_dp;
struct A68t187  Free_block_dps;
struct A68t187  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t194 * Write_buffer;
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
struct A68t195 * Gc_ptrs;
struct A68t196 * Instore_vars;
struct A68t197  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE183,REF MODE183,REF MODE183,REF MODE183,REF MODE183,REF MODE187,REF MODE187,REF REF MODE111,REF REF MODE111,REF MODE194,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE195,REF MODE196,REF MODE197,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t194{
A68_VC  Buffer;
struct A68t200 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE26,REF MODE200,REF INT,REF INT,REF INT)  */
struct A68t195{
struct A68t199  Old;
struct A68t199  New;
struct A68t195 * Rest;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE199,MODE199,REF MODE195)  */
struct A68t196{
A68_INT  Indirection;
A_PAD_INT(PAD_64)
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,REF MODE196)  */
struct A68t200{
A68_INT  Lwb;
A_PAD_INT(PAD_65)
A68_INT  Upb;
A_PAD_INT(PAD_66)
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,REF MODE200)  */

A_PROCEDURE(A68_BOOL ,A68t201,(struct A68t192 *,struct A68t183 ,struct A68t183 ),(struct A68t192 *,struct A68t183 ,struct A68t183 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE192,MODE183,MODE183) BOOL */

A_PROCEDURE(A68_INT ,A68t202,(struct A68t192 *,struct A68t183 ),(struct A68t192 *,struct A68t183 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE192,MODE183) INT */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t192 *,struct A68t183 *),(struct A68t192 *,struct A68t183 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE192) MODE183 */

A_PROCEDURE(struct A68t111 *,A68t204,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t111 *,A68_BOOL ,struct A68t192 *),(struct A68t111 *,A68_BOOL ,struct A68t192 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE111,BOOL) MODE192 */

A_PROCEDURE(A68_BOOL ,A68t206,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE192) BOOL */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t192 *,struct A68t183 ),(struct A68t192 *,struct A68t183 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE192,MODE183) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t192 *,struct A68t183 ,struct A68t97 ),(struct A68t192 *,struct A68t183 ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE192,MODE183,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t192 *,struct A68t97 ),(struct A68t192 *,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE192,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t210,(struct A68t192 *,A68_INT ),(struct A68t192 *,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE192,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t192 *,A68_INT ,struct A68t97 ),(struct A68t192 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE192,INT,MODE97) VOID */

A_PROCEDURE(struct A68t111 *,A68t212,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE192) REF MODE111 */

A_PROCEDURE(A68_INT ,A68t213,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE192) INT */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t192 *),(struct A68t192 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE192) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t216,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t217,(struct A68t191 *,struct A68t183 ),(struct A68t191 *,struct A68t183 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE191,MODE183) BOOL */
struct A68t218{
A68_VC  Rvc;
struct A68t218 * Rest;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,REF MODE218)  */
struct A68t219{
struct A68t191  Df;
struct A68t218  Head;
struct A68t218 * Current;
A68_INT  Index;
A_PAD_INT(PAD_67)
A68_INT  Type;
A_PAD_INT(PAD_68)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_69)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE191,MODE218,REF MODE218,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t219 *,A68t220,(struct A68t191 *,struct A68t87 ,A68_INT ),(struct A68t191 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE191,MODE87,INT) REF MODE219 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE219) VOID */

A_PROCEDURE(struct A68t219 *,A68t222,(struct A68t191 *,struct A68t183 ),(struct A68t191 *,struct A68t183 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE191,MODE183) REF MODE219 */

A_PROCEDURE(A68_CHAR ,A68t223,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE219) CHAR */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t219 *,A68_VC ),(struct A68t219 *,A68_VC ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE219,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t225,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE219) BOOL */

A_PROCEDURE(A68_INT ,A68t226,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE219) INT */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t219 *,A68_VC *),(struct A68t219 *,A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE219) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t191 *,struct A68t97 ),(struct A68t191 *,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE191,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t191 *,A68_VC ,struct A68t97 ,struct A68t183 *),(struct A68t191 *,A68_VC ,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE191,MODE26,MODE97) MODE183 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t191 *,struct A68t187 ,struct A68t97 ,struct A68t183 *),(struct A68t191 *,struct A68t187 ,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE191,MODE187,MODE97) MODE183 */

A_PROCEDURE(A68_INT ,A68t231,(struct A68t191 *,struct A68t183 ,struct A68t97 ),(struct A68t191 *,struct A68t183 ,struct A68t97 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE191,MODE183,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t191 *,A68_VC ,struct A68t183 ,struct A68t97 ),(struct A68t191 *,A68_VC ,struct A68t183 ,struct A68t97 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE191,REF MODE26,MODE183,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t191 *,struct A68t187 ,struct A68t183 ,struct A68t97 ),(struct A68t191 *,struct A68t187 ,struct A68t183 ,struct A68t97 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE191,REF MODE187,MODE183,MODE97) VOID */

A_PROCEDURE(struct A68t219 *,A68t234,(struct A68t191 *,struct A68t87 ),(struct A68t191 *,struct A68t87 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE191,MODE87) REF MODE219 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t219 *,struct A68t97 ),(struct A68t219 *,struct A68t97 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE219,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t219 *,struct A68t97 ,struct A68t183 *),(struct A68t219 *,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE219,MODE97) MODE183 */

A_PROCEDURE(A68_INT ,A68t237,(A68_CHAR ,struct A68t219 *,struct A68t97 ),(A68_CHAR ,struct A68t219 *,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(CHAR,REF MODE219,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t238,(A68_VC ,struct A68t219 *,struct A68t97 ),(A68_VC ,struct A68t219 *,struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE26,REF MODE219,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t239,(A68_INT ,struct A68t219 *,struct A68t97 ),(A68_INT ,struct A68t219 *,struct A68t97 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(INT,REF MODE219,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t240,(A68_VC ,struct A68t219 *,struct A68t97 ),(A68_VC ,struct A68t219 *,struct A68t97 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE26,REF MODE219,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t241,(A68_BOOL ,struct A68t219 *,struct A68t97 ),(A68_BOOL ,struct A68t219 *,struct A68t97 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL,REF MODE219,MODE97) INT */
struct A68t242{
A68_INT  Type;
A_PAD_INT(PAD_70)
A68_INT  Value;
A_PAD_INT(PAD_71)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT,INT)  */
struct A68t244 ;

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC REF MODE244 */
A_ROW(struct A68t242 ,A68t244,1);
typedef struct A68t244  A68_244 ;    /* [] MODE242 */
struct A68t246 ;

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC MODE246 */

A_PROCEDURE(A68_INT ,A68t246,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE26,BOOL) INT */
struct A68t247{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_72)
A68_BOOL  Login;
A_PAD_BOOL(PAD_73)
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE247)  */
struct A68t248{
struct A68t179  Context;
struct A68t248 * Rest;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE179,REF MODE248)  */
struct A68t249{
A68_VC  Name;
struct A68t111 * File;
struct A68t191 * Discfile;
struct A68t158  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_74)
struct A68t187  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_75)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t247 * Classes;
struct A68t248 * Contexts;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF MODE26,REF MODE111,REF MODE191,MODE158,REF MODE26,BOOL,MODE187,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE247,REF MODE248)  */

A_PROCEDURE(A68_VOID ,A68t250,(A68_BOOL ,struct A68t249 *),(A68_BOOL ,struct A68t249 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(BOOL) MODE249 */
struct A68t251{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_76)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t252,(struct A68t158 ,struct A68t158 ),(struct A68t158 ,struct A68t158 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE158,MODE158) BOOL */

A_PROCEDURE(A68_BOOL ,A68t253,(struct A68t174 ,struct A68t174 ),(struct A68t174 ,struct A68t174 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE174,MODE174) BOOL */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t158 ,A68_VC *),(struct A68t158 ,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE158) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t174 ,A68_VC *),(struct A68t174 ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE174) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t174 ,struct A68t158 *),(struct A68t174 ,struct A68t158 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE174) MODE158 */

A_PROCEDURE(A68_BOOL ,A68t257,(struct A68t179 *,struct A68t97 ),(struct A68t179 *,struct A68t97 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE179,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t258,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t249 *,A68t259,(void),(void *));
typedef struct A68t259  A68_259 ;    /* PROC REF MODE249 */

A_PROCEDURE(struct A68t179 *,A68t260,(A68_VC ),(A68_VC ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE26) REF MODE179 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t179 *,A68_VC ,struct A68t174 *),(struct A68t179 *,A68_VC ,struct A68t174 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE179,REF MODE26) MODE174 */

A_PROCEDURE(struct A68t181 *,A68t262,(struct A68t174 ),(struct A68t174 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE174) REF MODE181 */

A_PROCEDURE(struct A68t182 *,A68t263,(struct A68t174 ,A68_VC ),(struct A68t174 ,A68_VC ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE174,REF MODE26) REF MODE182 */

A_PROCEDURE(struct A68t179 *,A68t264,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE26,MODE97) REF MODE179 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t179 *,A68_VC ,struct A68t97 ,struct A68t174 *),(struct A68t179 *,A68_VC ,struct A68t97 ,struct A68t174 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE179,REF MODE26,MODE97) MODE174 */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t158 ,struct A68t97 ,struct A68t174 *),(struct A68t158 ,struct A68t97 ,struct A68t174 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE158,MODE97) MODE174 */

A_PROCEDURE(struct A68t182 *,A68t267,(struct A68t174 ,A68_VC ,struct A68t97 ),(struct A68t174 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE174,REF MODE26,MODE97) REF MODE182 */
struct A68t268{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_77)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_78)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_79)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_80)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_81)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_82)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_83)
A68_INT  Width;
A_PAD_INT(PAD_84)
A68_INT  Page_count;
A_PAD_INT(PAD_85)
A68_INT  Page_length;
A_PAD_INT(PAD_86)
A68_INT  Eof_count;
A_PAD_INT(PAD_87)
struct A68t269 * Standard_reader;
struct A68t270 * Infile;
struct A68t170  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE269,REF MODE270,MODE170,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t271,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t269{
A68_VC  Rdbuffer;
struct A68t271  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_88)
A68_INT  Rdcharno;
A_PAD_INT(PAD_89)
A68_INT  Start_of_word;
A_PAD_INT(PAD_90)
struct A68t272 * Stack;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE26,MODE271,INT,INT,INT,REF MODE272)  */
struct A68t270{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_91)
A68_INT  Number;
A_PAD_INT(PAD_92)
A68_VC  Name;
struct A68t269 * Reader;
struct A68t270 * Previous;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE269,REF MODE270)  */
struct A68t272{
A68_VC  Line;
struct A68t272 * Rest;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(REF MODE26,REF MODE272)  */

A_PROCEDURE(struct A68t268 *,A68t273,(void),(void *));
typedef struct A68t273  A68_273 ;    /* PROC REF MODE268 */

A_PROCEDURE(A68_VOID ,A68t274,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t275,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t276,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t279,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,26,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 17 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from libmodes --- */
extern A68_BOOL  UXIAELA_isnilptr(struct A68t191 *,struct A68t183 );
extern A68_249 * HXJAELA_library;
extern A68_191 * TYJAELA_discfile;
extern A68_187  UYJAELA_rootptrs;
extern A68_VOID  BAKAELA_ctos(struct A68t158 ,A68_VC *);
extern A68_179 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t179 *,A68_VC ,A68_174 *);
/* --- End of imports from libmodes --- */


/* --- Imports from charset --- */
/* --- End of imports from charset --- */


/* --- Imports from databasebuffers --- */
/* --- End of imports from databasebuffers --- */


/* --- Imports from compshell --- */
extern A68_VOID  NEDBELA_compile_shell(A68_BOOL ,struct A68t174 ,struct A68t175 ,struct A68t176 ,struct A68t43 ,struct A68t43 ,struct A68t177 ,struct A68t43 ,A68_BOOL *,struct A68t97 );
/* --- End of imports from compshell --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_VOID  XQBAOSI_close_file(struct A68t111 *,struct A68t97 );
extern A68_VOID  YPBAOSI_file_name(struct A68t111 *,A68_VC *);
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
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TIGAOST(void);   /* ioprocs */
extern void FTJAELA(void);   /* libmodes */
extern void GMAATRN(void);   /* charset */
extern void NWIAELA(void);   /* databasebuffers */
extern void MDDBELA(void);   /* compshell */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_280   RYJBELA = {"$Id: ptcomp.a68,v 34.2 1995/03/29 13:03:31 ella Exp $"}; 
A_GISVEC(A68_VC ,SYJBELA,RYJBELA,53)
#define TYJBELA_fnstart 43
#define UYJBELA_unchecked 3
static A68_114   XYJBELA = {"Zero"}; 
A_GISVEC(A68_VC ,ZYJBELA,XYJBELA,4)
static A68_281   AZJBELA = {"Iconst"}; 
A_GISVEC(A68_VC ,BZJBELA,AZJBELA,6)
static A68_282   CZJBELA = {"Iname"}; 
A_GISVEC(A68_VC ,DZJBELA,CZJBELA,5)
static A68_114   EZJBELA = {"Idop"}; 
A_GISVEC(A68_VC ,FZJBELA,EZJBELA,4)
static A68_114   GZJBELA = {"Imop"}; 
A_GISVEC(A68_VC ,HZJBELA,GZJBELA,4)
static A68_282   IZJBELA = {"Icond"}; 
A_GISVEC(A68_VC ,JZJBELA,IZJBELA,5)
static A68_281   KZJBELA = {"Iparam"}; 
A_GISVEC(A68_VC ,LZJBELA,KZJBELA,6)
static A68_283   MZJBELA = {"Ivarmult"}; 
A_GISVEC(A68_VC ,NZJBELA,MZJBELA,8)
static A68_281   OZJBELA = {"Icheck"}; 
A_GISVEC(A68_VC ,PZJBELA,OZJBELA,6)
static A68_284   QZJBELA = {"Iconsttext"}; 
A_GISVEC(A68_VC ,RZJBELA,QZJBELA,10)
static A68_282   SZJBELA = {"Tnull"}; 
A_GISVEC(A68_VC ,TZJBELA,SZJBELA,5)
static A68_281   UZJBELA = {"Tnamed"}; 
A_GISVEC(A68_VC ,VZJBELA,UZJBELA,6)
static A68_114   WZJBELA = {"Trow"}; 
A_GISVEC(A68_VC ,XZJBELA,WZJBELA,4)
static A68_285   YZJBELA = {"Tst"}; 
A_GISVEC(A68_VC ,ZZJBELA,YZJBELA,3)
static A68_281   AAKBELA = {"Tparam"}; 
A_GISVEC(A68_VC ,BAKBELA,AAKBELA,6)
static A68_285   CAKBELA = {"Tfn"}; 
A_GISVEC(A68_VC ,DAKBELA,CAKBELA,3)
static A68_282   EAKBELA = {"Cprim"}; 
A_GISVEC(A68_VC ,FAKBELA,EAKBELA,5)
static A68_281   GAKBELA = {"Cprimi"}; 
A_GISVEC(A68_VC ,HAKBELA,GAKBELA,6)
static A68_281   IAKBELA = {"Cprimr"}; 
A_GISVEC(A68_VC ,JAKBELA,IAKBELA,6)
static A68_281   KAKBELA = {"Cprimu"}; 
A_GISVEC(A68_VC ,LAKBELA,KAKBELA,6)
static A68_285   MAKBELA = {"Cst"}; 
A_GISVEC(A68_VC ,NAKBELA,MAKBELA,3)
static A68_114   OAKBELA = {"Crow"}; 
A_GISVEC(A68_VC ,PAKBELA,OAKBELA,4)
static A68_282   QAKBELA = {"Cnull"}; 
A_GISVEC(A68_VC ,RAKBELA,QAKBELA,5)
static A68_114   SAKBELA = {"Calt"}; 
A_GISVEC(A68_VC ,TAKBELA,SAKBELA,4)
static A68_282   UAKBELA = {"Vconc"}; 
A_GISVEC(A68_VC ,VAKBELA,UAKBELA,5)
static A68_282   WAKBELA = {"Vprim"}; 
A_GISVEC(A68_VC ,XAKBELA,WAKBELA,5)
static A68_281   YAKBELA = {"Vprimi"}; 
A_GISVEC(A68_VC ,ZAKBELA,YAKBELA,6)
static A68_282   ABKBELA = {"Vname"}; 
A_GISVEC(A68_VC ,BBKBELA,ABKBELA,5)
static A68_282   CBKBELA = {"Vtrim"}; 
A_GISVEC(A68_VC ,DBKBELA,CBKBELA,5)
static A68_281   EBKBELA = {"Vindex"}; 
A_GISVEC(A68_VC ,FBKBELA,EBKBELA,6)
static A68_281   GBKBELA = {"Vcallm"}; 
A_GISVEC(A68_VC ,HBKBELA,GBKBELA,6)
static A68_281   IBKBELA = {"Vcalld"}; 
A_GISVEC(A68_VC ,JBKBELA,IBKBELA,6)
static A68_114   KBKBELA = {"Vunn"}; 
A_GISVEC(A68_VC ,LBKBELA,KBKBELA,4)
static A68_281   MBKBELA = {"Vsharp"}; 
A_GISVEC(A68_VC ,NBKBELA,MBKBELA,6)
static A68_114   OBKBELA = {"Vrow"}; 
A_GISVEC(A68_VC ,PBKBELA,OBKBELA,4)
static A68_282   QBKBELA = {"Vcase"}; 
A_GISVEC(A68_VC ,RBKBELA,QBKBELA,5)
static A68_281   SBKBELA = {"Vquery"}; 
A_GISVEC(A68_VC ,TBKBELA,SBKBELA,6)
static A68_282   UBKBELA = {"Vcoll"}; 
A_GISVEC(A68_VC ,VBKBELA,UBKBELA,5)
static A68_285   WBKBELA = {"Vif"}; 
A_GISVEC(A68_VC ,XBKBELA,WBKBELA,3)
static A68_284   YBKBELA = {"Vtermindex"}; 
A_GISVEC(A68_VC ,ZBKBELA,YBKBELA,10)
static A68_283   ACKBELA = {"Vvarmult"}; 
A_GISVEC(A68_VC ,BCKBELA,ACKBELA,8)
static A68_281   CCKBELA = {"Vconst"}; 
A_GISVEC(A68_VC ,DCKBELA,CCKBELA,6)
static A68_285   ECKBELA = {"End"}; 
A_GISVEC(A68_VC ,FCKBELA,ECKBELA,3)
static A68_286   GCKBELA = {"Fnstart"}; 
A_GISVEC(A68_VC ,HCKBELA,GCKBELA,7)
static A68_282   ICKBELA = {"Fnend"}; 
A_GISVEC(A68_VC ,JCKBELA,ICKBELA,5)
static A68_282   KCKBELA = {"Bmake"}; 
A_GISVEC(A68_VC ,LCKBELA,KCKBELA,5)
static A68_282   MCKBELA = {"Bjoin"}; 
A_GISVEC(A68_VC ,NCKBELA,MCKBELA,5)
static A68_114   OCKBELA = {"Bfor"}; 
A_GISVEC(A68_VC ,PCKBELA,OCKBELA,4)
static A68_283   QCKBELA = {"Typename"}; 
A_GISVEC(A68_VC ,RCKBELA,QCKBELA,8)
static A68_281   SCKBELA = {"Biddec"}; 
A_GISVEC(A68_VC ,TCKBELA,SCKBELA,6)
static A68_286   UCKBELA = {"Pidalts"}; 
A_GISVEC(A68_VC ,VCKBELA,UCKBELA,7)
static A68_281   WCKBELA = {"Prange"}; 
A_GISVEC(A68_VC ,XCKBELA,WCKBELA,6)
static A68_281   YCKBELA = {"Idelay"}; 
A_GISVEC(A68_VC ,ZCKBELA,YCKBELA,6)
static A68_281   ADKBELA = {"Adelay"}; 
A_GISVEC(A68_VC ,BDKBELA,ADKBELA,6)
static A68_287   CDKBELA = {"Pt"}; 
A_GISVEC(A68_VC ,DDKBELA,CDKBELA,2)
static A68_282   EDKBELA = {"Ptflt"}; 
A_GISVEC(A68_VC ,FDKBELA,EDKBELA,5)
static A68_285   GDKBELA = {"Str"}; 
A_GISVEC(A68_VC ,HDKBELA,GDKBELA,3)
static A68_287   IDKBELA = {"57"}; 
A_GISVEC(A68_VC ,JDKBELA,IDKBELA,2)
static A68_282   KDKBELA = {"Dummy"}; 
A_GISVEC(A68_VC ,LDKBELA,KDKBELA,5)
static A68_286   MDKBELA = {"Velseof"}; 
A_GISVEC(A68_VC ,NDKBELA,MDKBELA,7)
static A68_282   ODKBELA = {"Velse"}; 
A_GISVEC(A68_VC ,PDKBELA,ODKBELA,5)
static A68_285   QDKBELA = {"Vfi"}; 
A_GISVEC(A68_VC ,RDKBELA,QDKBELA,3)
static A68_285   SDKBELA = {"Ram"}; 
A_GISVEC(A68_VC ,TDKBELA,SDKBELA,3)
static A68_287   UDKBELA = {"63"}; 
A_GISVEC(A68_VC ,VDKBELA,UDKBELA,2)
static A68_288   WDKBELA = {"Vvarmultend"}; 
A_GISVEC(A68_VC ,XDKBELA,WDKBELA,11)
static A68_282   YDKBELA = {"Ktype"}; 
A_GISVEC(A68_VC ,ZDKBELA,YDKBELA,5)
static A68_114   AEKBELA = {"Kint"}; 
A_GISVEC(A68_VC ,BEKBELA,AEKBELA,4)
static A68_285   CEKBELA = {"Kfn"}; 
A_GISVEC(A68_VC ,DEKBELA,CEKBELA,3)
static A68_281   EEKBELA = {"Kconst"}; 
A_GISVEC(A68_VC ,FEKBELA,EEKBELA,6)
static A68_282   GEKBELA = {"Kattr"}; 
A_GISVEC(A68_VC ,HEKBELA,GEKBELA,5)
static A68_114   IEKBELA = {"Kend"}; 
A_GISVEC(A68_VC ,JEKBELA,IEKBELA,4)
static A68_287   KEKBELA = {"71"}; 
A_GISVEC(A68_VC ,LEKBELA,KEKBELA,2)
static A68_281   MEKBELA = {"Kilend"}; 
A_GISVEC(A68_VC ,NEKBELA,MEKBELA,6)
static A68_287   OEKBELA = {"73"}; 
A_GISVEC(A68_VC ,PEKBELA,OEKBELA,2)
static A68_281   QEKBELA = {"Reform"}; 
A_GISVEC(A68_VC ,REKBELA,QEKBELA,6)
static A68_282   SEKBELA = {"Cconc"}; 
A_GISVEC(A68_VC ,TEKBELA,SEKBELA,5)
static A68_282   UEKBELA = {"Cattr"}; 
A_GISVEC(A68_VC ,VEKBELA,UEKBELA,5)
static A68_281   WEKBELA = {"Vcelse"}; 
A_GISVEC(A68_VC ,XEKBELA,WEKBELA,6)
static A68_286   YEKBELA = {"Vnormal"}; 
A_GISVEC(A68_VC ,ZEKBELA,YEKBELA,7)
static A68_286   AFKBELA = {"Vnoelse"}; 
A_GISVEC(A68_VC ,BFKBELA,AFKBELA,7)
static A68_114   CFKBELA = {"Vseq"}; 
A_GISVEC(A68_VC ,DFKBELA,CFKBELA,4)
static A68_114   EFKBELA = {"Vpar"}; 
A_GISVEC(A68_VC ,FFKBELA,EFKBELA,4)
static A68_289   GFKBELA = {"Vdynindex"}; 
A_GISVEC(A68_VC ,HFKBELA,GFKBELA,9)
static A68_283   IFKBELA = {"Vbracket"}; 
A_GISVEC(A68_VC ,JFKBELA,IFKBELA,8)
static A68_283   KFKBELA = {"Ibracket"}; 
A_GISVEC(A68_VC ,LFKBELA,KFKBELA,8)
static A68_283   MFKBELA = {"Tbracket"}; 
A_GISVEC(A68_VC ,NFKBELA,MFKBELA,8)
static A68_283   OFKBELA = {"Cbracket"}; 
A_GISVEC(A68_VC ,PFKBELA,OFKBELA,8)
static A68_114   QFKBELA = {"Biop"}; 
A_GISVEC(A68_VC ,RFKBELA,QFKBELA,4)
static A68_282   SFKBELA = {"Alien"}; 
A_GISVEC(A68_VC ,TFKBELA,SFKBELA,5)
static A68_281   UFKBELA = {"Parend"}; 
A_GISVEC(A68_VC ,VFKBELA,UFKBELA,6)
static A68_281   WFKBELA = {"Seqend"}; 
A_GISVEC(A68_VC ,XFKBELA,WFKBELA,6)
static A68_286   YFKBELA = {"Seqnull"}; 
A_GISVEC(A68_VC ,ZFKBELA,YFKBELA,7)
static A68_286   AGKBELA = {"Seqvoid"}; 
A_GISVEC(A68_VC ,BGKBELA,AGKBELA,7)
static A68_281   CGKBELA = {"Seqlet"}; 
A_GISVEC(A68_VC ,DGKBELA,CGKBELA,6)
static A68_281   EGKBELA = {"Seqvar"}; 
A_GISVEC(A68_VC ,FGKBELA,EGKBELA,6)
static A68_281   GGKBELA = {"Seqper"}; 
A_GISVEC(A68_VC ,HGKBELA,GGKBELA,6)
static A68_289   IGKBELA = {"Seqassign"}; 
A_GISVEC(A68_VC ,JGKBELA,IGKBELA,9)
static A68_286   KGKBELA = {"Seqcase"}; 
A_GISVEC(A68_VC ,LGKBELA,KGKBELA,7)
static A68_282   MGKBELA = {"Seqif"}; 
A_GISVEC(A68_VC ,NGKBELA,MGKBELA,5)
static A68_284   OGKBELA = {"Seqvarmult"}; 
A_GISVEC(A68_VC ,PGKBELA,OGKBELA,10)
static A68_281   QGKBELA = {"Sample"}; 
A_GISVEC(A68_VC ,RGKBELA,QGKBELA,6)
static A68_281   SGKBELA = {"Cindex"}; 
A_GISVEC(A68_VC ,TGKBELA,SGKBELA,6)
static A68_282   UGKBELA = {"Ctrim"}; 
A_GISVEC(A68_VC ,VGKBELA,UGKBELA,5)
static A68_283   WGKBELA = {"Cvarmult"}; 
A_GISVEC(A68_VC ,XGKBELA,WGKBELA,8)
static A68_285   YGKBELA = {"Cif"}; 
A_GISVEC(A68_VC ,ZGKBELA,YGKBELA,3)
static A68_284   AHKBELA = {"Seqbecomes"}; 
A_GISVEC(A68_VC ,BHKBELA,AHKBELA,10)
static A68_290   CHKBELA = {"Seqassignend"}; 
A_GISVEC(A68_VC ,DHKBELA,CHKBELA,12)
static A68_281   EHKBELA = {"Seqrow"}; 
A_GISVEC(A68_VC ,FHKBELA,EHKBELA,6)
static A68_286   GHKBELA = {"Seqelse"}; 
A_GISVEC(A68_VC ,HHKBELA,GHKBELA,7)
static A68_282   IHKBELA = {"Seqfi"}; 
A_GISVEC(A68_VC ,JHKBELA,IHKBELA,5)
static A68_291   KHKBELA = {"Seqvarmultend"}; 
A_GISVEC(A68_VC ,LHKBELA,KHKBELA,13)
static A68_282   MHKBELA = {"Vthen"}; 
A_GISVEC(A68_VC ,NHKBELA,MHKBELA,5)
static A68_286   OHKBELA = {"Seqthen"}; 
A_GISVEC(A68_VC ,PHKBELA,OHKBELA,7)
static A68_281   QHKBELA = {"Cttype"}; 
A_GISVEC(A68_VC ,RHKBELA,QHKBELA,6)
static A68_281   SHKBELA = {"Cquery"}; 
A_GISVEC(A68_VC ,THKBELA,SHKBELA,6)
static A68_283   UHKBELA = {"Imported"}; 
A_GISVEC(A68_VC ,VHKBELA,UHKBELA,8)
static A68_282   WHKBELA = {"Inull"}; 
A_GISVEC(A68_VC ,XHKBELA,WHKBELA,5)
static A68_281   YHKBELA = {"Normal"}; 
A_GISVEC(A68_VC ,ZHKBELA,YHKBELA,6)
static A68_282   AIKBELA = {"Brief"}; 
A_GISVEC(A68_VC ,BIKBELA,AIKBELA,5)
static A68_114   CIKBELA = {"Inst"}; 
A_GISVEC(A68_VC ,DIKBELA,CIKBELA,4)
static A68_283   EIKBELA = {"Macparam"}; 
A_GISVEC(A68_VC ,FIKBELA,EIKBELA,8)
static A68_286   GIKBELA = {"Intname"}; 
A_GISVEC(A68_VC ,HIKBELA,GIKBELA,7)
static A68_114   IIKBELA = {"Idef"}; 
A_GISVEC(A68_VC ,JIKBELA,IIKBELA,4)
static A68_283   KIKBELA = {"Multjoin"}; 
A_GISVEC(A68_VC ,LIKBELA,KIKBELA,8)
static A68_285   MIKBELA = {"124"}; 
A_GISVEC(A68_VC ,NIKBELA,MIKBELA,3)
static A68_281   OIKBELA = {"Eoflib"}; 
A_GISVEC(A68_VC ,PIKBELA,OIKBELA,6)
static A68_287   QIKBELA = {"In"}; 
A_GISVEC(A68_VC ,RIKBELA,QIKBELA,2)
static A68_283   SIKBELA = {"Inid-127"}; 
A_GISVEC(A68_VC ,TIKBELA,SIKBELA,8)
static A68_286   UIKBELA = {"Pstring"}; 
A_GISVEC(A68_VC ,VIKBELA,UIKBELA,7)
static A68_282   WIKBELA = {"Pchar"}; 
A_GISVEC(A68_VC ,XIKBELA,WIKBELA,5)
static A68_289   YIKBELA = {"Pcharange"}; 
A_GISVEC(A68_VC ,ZIKBELA,YIKBELA,9)
static A68_286   AJKBELA = {"Cstring"}; 
A_GISVEC(A68_VC ,BJKBELA,AJKBELA,7)
static A68_286   CJKBELA = {"Cprimch"}; 
A_GISVEC(A68_VC ,DJKBELA,CJKBELA,7)
static A68_286   EJKBELA = {"Cprimst"}; 
A_GISVEC(A68_VC ,FJKBELA,EJKBELA,7)
static A68_283   GJKBELA = {"Cprimchr"}; 
A_GISVEC(A68_VC ,HJKBELA,GJKBELA,8)
static A68_286   IJKBELA = {"Vstring"}; 
A_GISVEC(A68_VC ,JJKBELA,IJKBELA,7)
static A68_286   KJKBELA = {"Vprimch"}; 
A_GISVEC(A68_VC ,LJKBELA,KJKBELA,7)
static A68_286   MJKBELA = {"Vprimst"}; 
A_GISVEC(A68_VC ,NJKBELA,MJKBELA,7)
static A68_286   OJKBELA = {"Tstring"}; 
A_GISVEC(A68_VC ,PJKBELA,OJKBELA,7)
static A68_281   QJKBELA = {"Cnamed"}; 
A_GISVEC(A68_VC ,RJKBELA,QJKBELA,6)
static A68_289   SJKBELA = {"Constname"}; 
A_GISVEC(A68_VC ,TJKBELA,SJKBELA,9)
static A68_282   UJKBELA = {"Vnull"}; 
A_GISVEC(A68_VC ,VJKBELA,UJKBELA,5)
static A68_282   WJKBELA = {"Cvoid"}; 
A_GISVEC(A68_VC ,XJKBELA,WJKBELA,5)
static A68_281   YJKBELA = {"Cparam"}; 
A_GISVEC(A68_VC ,ZJKBELA,YJKBELA,6)
static A68_281   AKKBELA = {"Vprimc"}; 
A_GISVEC(A68_VC ,BKKBELA,AKKBELA,6)
static A68_281   CKKBELA = {"Faster"}; 
A_GISVEC(A68_VC ,DKKBELA,CKKBELA,6)
static A68_281   EKKBELA = {"Slower"}; 
A_GISVEC(A68_VC ,FKKBELA,EKKBELA,6)
static A68_283   GKKBELA = {"Bjoinend"}; 
A_GISVEC(A68_VC ,HKKBELA,GKKBELA,8)
static A68_282   IKKBELA = {"Tvoid"}; 
A_GISVEC(A68_VC ,JKKBELA,IKKBELA,5)
static A68_282   KKKBELA = {"Vvoid"}; 
A_GISVEC(A68_VC ,LKKBELA,KKKBELA,5)
static A68_283   MKKBELA = {"Vreplace"}; 
A_GISVEC(A68_VC ,NKKBELA,MKKBELA,8)
static A68_283   OKKBELA = {"Attrname"}; 
A_GISVEC(A68_VC ,PKKBELA,OKKBELA,8)
static A68_282   QKKBELA = {"Attid"}; 
A_GISVEC(A68_VC ,RKKBELA,QKKBELA,5)
static A68_286   SKKBELA = {"Attdata"}; 
A_GISVEC(A68_VC ,TKKBELA,SKKBELA,7)
static A68_284   UKKBELA = {"Attbracket"}; 
A_GISVEC(A68_VC ,VKKBELA,UKKBELA,10)
static A68_281   WKKBELA = {"Attstr"}; 
A_GISVEC(A68_VC ,XKKBELA,WKKBELA,6)
static A68_286   YKKBELA = {"Attnull"}; 
A_GISVEC(A68_VC ,ZKKBELA,YKKBELA,7)
static A68_285   ALKBELA = {"157"}; 
A_GISVEC(A68_VC ,BLKBELA,ALKBELA,3)
static A68_285   CLKBELA = {"158"}; 
A_GISVEC(A68_VC ,DLKBELA,CLKBELA,3)
static A68_114   ELKBELA = {"Inid"}; 
A_GISVEC(A68_VC ,FLKBELA,ELKBELA,4)
static A68_292   GLKBELA = {"Not recognised"}; 
A_GISVEC(A68_VC ,HLKBELA,GLKBELA,14)
static A68_BOOL  ILKBELA_initialise;
static A68_246  JLKBELA_lookup;
static A68_244  KLKBELA_charset;
static A68_291   WLKBELA = {"Closing file "}; 
A_GISVEC(A68_VC ,XLKBELA,WLKBELA,13)
static A68_284   KMKBELA = {"Unchecked "}; 
A_GISVEC(A68_VC ,LMKBELA,KMKBELA,10)
static A68_287   NNKBELA = {"\" "}; 
A_GISVEC(A68_VC ,ONKBELA,NNKBELA,2)
static A68_287   YNKBELA = {"' "}; 
A_GISVEC(A68_VC ,ZNKBELA,YNKBELA,2)
static A68_295   NOKBELA = {"Compiled outside a context"}; 
A_GISVEC(A68_VC ,OOKBELA,NOKBELA,26)
static A68_296   XOKBELA = {"Compiled in context  "}; 
A_GISVEC(A68_VC ,YOKBELA,XOKBELA,21)
static A68_298   SPKBELA = {"Failed to compile"}; 
A_GISVEC(A68_VC ,TPKBELA,SPKBELA,17)
static A68_291   AQKBELA = {"ELLA Compiled"}; 
A_GISVEC(A68_VC ,BQKBELA,AQKBELA,13)
typedef struct   /* env of non-global proc */
{
A68_111 * File;
A68_97  Flt;
} TLKBELA_msg;
typedef struct   /* env of non-global proc */
{
int dummy;
} IOKBELA_import;

A_STATIC A68_VOID  WYJBELA_ilword(A68_INT  I, A68_VC  *ReturnedValue);

A68_VOID  NLKBELA_ptcomp(A68_111 * File, A68_97  Flt);

A_STATIC A68_VOID  SLKBELA_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  HMKBELA_outints(A68_32  P);

A_STATIC A68_VOID  INKBELA_outid(A68_VC  Id);

A_STATIC A68_VOID  TNKBELA_outstring(A68_VC  Str);

A_STATIC A68_VOID  HOKBELA_import(A68_VC  Rename, A68_VC  Name, A68_158  Ctn, void *NonLocals);

A_STATIC A68_VOID  KOKBELA_mname(A68_VC  Id);

A_STATIC A68_VOID  SLKBELA_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((TLKBELA_msg *)NonLocals)->x)
{ 
A68_106  ULKBELA;  /* OPERATORS - mode -> union mode */
A68_293  VLKBELA;  /* collateral clause result */
A68_52  YLKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZLKBELA;  /* YIELD */
A68_VC  AMKBELA;  /* avoid structure result */
A68_52  BMKBELA;  /* OPERATORS - mode -> union mode */
A68_52  CMKBELA;  /* OPERATORS - mode -> union mode */
A68_56  DMKBELA;  /* procedure value */
A68_85  EMKBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(msg);
 /* line 133: */
 /* line 134: */
{ 
 /* line 135: */
if ( TKAAOSI_error_msg(A_UNITE(ULKBELA,mode1,1,No)) )
{ 
ZLKBELA = XLKBELA ;
VLKBELA.data[0] = A_UNITE(YLKBELA,mode7,7,ZLKBELA);
YPBAOSI_file_name( NL(File), &AMKBELA );
VLKBELA.data[1] = A_UNITE(BMKBELA,mode7,7,AMKBELA);
DMKBELA.fn.fn_global = LRAAOSL_newline;
DMKBELA.nonlocals = A68_NIL;
VLKBELA.data[2] = A_UNITE(CMKBELA,mode12,12,DMKBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EMKBELA,VLKBELA,3,A68_52 ));
 /* line 136: */
 /* line 137: */
XQBAOSI_close_file(NL(File), NL(Flt));
} 
 /* line 138: */
 /* line 139: */
A_CALLPROC(NL(Flt),(No, Params),(No, Params,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HMKBELA_outints(A68_32  P)
{ 
A68_BOOL  IMKBELA;  /* optbool result */
A68_INT  JMKBELA;  /* YIELD */
A68_52  MMKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NMKBELA;  /* YIELD */
A68_85  OMKBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_294  PMKBELA;  /* collateral clause result */
A68_INT  QMKBELA;  /* YIELD */
A68_VC  RMKBELA;  /* avoid structure result */
A68_52  SMKBELA;  /* OPERATORS - mode -> union mode */
A68_52  TMKBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  UMKBELA;  /* YIELD */
A68_85  VMKBELA;  /* OPERATORS - istruct -> vector */
A68_INT  WMKBELA_i;
A68_INT  XMKBELA;  /* to part of loop */
A68_294  YMKBELA;  /* collateral clause result */
A68_52  ZMKBELA;  /* OPERATORS - mode -> union mode */
A68_INT  ANKBELA;  /* YIELD */
A68_52  BNKBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  CNKBELA;  /* YIELD */
A68_85  DNKBELA;  /* OPERATORS - istruct -> vector */
A68_INT  ENKBELA;  /* YIELD */
A68_BOOL  FNKBELA;  /* optbool result */
A68_INT  GNKBELA;  /* YIELD */
A_PROC_ENTRY(outints);
 /* line 144: */
 /* line 145: */
{ 
IMKBELA = (P.upb==1);
if ( IMKBELA )
{ /* line 146: */
JMKBELA = 1 ;
IMKBELA = (A_VINDEX(P,JMKBELA)==UYJBELA_unchecked);
}
if ( IMKBELA )
{ 
 /* line 147: */
 /* line 148: */
NMKBELA = LMKBELA ;
GFBAOSL_put(LEAAOST_out, A_HVEC(OMKBELA,A_UNITE(MMKBELA,mode7,7,NMKBELA),A68_52 ));
} 
else
{ 
QMKBELA = 1 ;
WYJBELA_ilword( A_VINDEX(P,QMKBELA), &RMKBELA );
PMKBELA.data[0] = A_UNITE(SMKBELA,mode7,7,RMKBELA);
UMKBELA = ' ' ;
PMKBELA.data[1] = A_UNITE(TMKBELA,mode6,6,UMKBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(VMKBELA,PMKBELA,2,A68_52 ));
 /* line 149: */
XMKBELA = P.upb;
for ( WMKBELA_i = 2;
WMKBELA_i <= XMKBELA;
WMKBELA_i += 1 )
{ 
ANKBELA = A_VINDEX(P,WMKBELA_i) ;
YMKBELA.data[0] = A_UNITE(ZMKBELA,mode1,1,ANKBELA);
CNKBELA = ' ' ;
YMKBELA.data[1] = A_UNITE(BNKBELA,mode6,6,CNKBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(DNKBELA,YMKBELA,2,A68_52 ));
}
 /* line 150: */
} 
 /* line 151: */
ENKBELA = 1 ;
FNKBELA = (A_VINDEX(P,ENKBELA)==70);
if ( ! FNKBELA )
{GNKBELA = 1 ;
FNKBELA = (A_VINDEX(P,GNKBELA)==72);
}
if ( FNKBELA )
{ 
LRAAOSL_newline(LEAAOST_out);
 /* line 152: */
LRAAOSL_newline(LEAAOST_out);
} 
} 
A_PROC_EXIT(outints);
return;
} 
#undef NL

A_STATIC A68_VOID  INKBELA_outid(A68_VC  Id)
{ 
A68_293  JNKBELA;  /* collateral clause result */
A68_52  KNKBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  LNKBELA;  /* YIELD */
A68_52  MNKBELA;  /* OPERATORS - mode -> union mode */
A68_52  PNKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QNKBELA;  /* YIELD */
A68_85  RNKBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outid);
LNKBELA = '\"' ;
JNKBELA.data[0] = A_UNITE(KNKBELA,mode6,6,LNKBELA);
JNKBELA.data[1] = A_UNITE(MNKBELA,mode7,7,Id);
QNKBELA = ONKBELA ;
JNKBELA.data[2] = A_UNITE(PNKBELA,mode7,7,QNKBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(RNKBELA,JNKBELA,3,A68_52 ));
A_PROC_EXIT(outid);
return;
} 
#undef NL

A_STATIC A68_VOID  TNKBELA_outstring(A68_VC  Str)
{ 
A68_293  UNKBELA;  /* collateral clause result */
A68_52  VNKBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  WNKBELA;  /* YIELD */
A68_52  XNKBELA;  /* OPERATORS - mode -> union mode */
A68_52  AOKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BOKBELA;  /* YIELD */
A68_85  COKBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outstring);
 /* line 157: */
WNKBELA = '\'' ;
UNKBELA.data[0] = A_UNITE(VNKBELA,mode6,6,WNKBELA);
UNKBELA.data[1] = A_UNITE(XNKBELA,mode7,7,Str);
BOKBELA = ZNKBELA ;
UNKBELA.data[2] = A_UNITE(AOKBELA,mode7,7,BOKBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(COKBELA,UNKBELA,3,A68_52 ));
A_PROC_EXIT(outstring);
return;
} 
#undef NL

A_STATIC A68_VOID  HOKBELA_import(A68_VC  Rename, A68_VC  Name, A68_158  Ctn, void *NonLocals)
#define NL(x) (((IOKBELA_import *)NonLocals)->x)
{ 
A_PROC_ENTRY(import);
 /* line 160: */
{ 
INKBELA_outid(Rename);
INKBELA_outid(Name);
INKBELA_outid(Ctn.Context);
INKBELA_outid(Ctn.Import);
} 
A_PROC_EXIT(import);
return;
} 
#undef NL

A_STATIC A68_VOID  KOKBELA_mname(A68_VC  Id)
{ 
A_PROC_ENTRY(mname);
/*SKIP*/;
A_PROC_EXIT(mname);
return;
} 
#undef NL

A_STATIC A68_VOID  WYJBELA_ilword(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_VC  YYJBELA;  /* clause result */
A_PROC_ENTRY(ilword);
 /* line 86: */
 /* line 87: */
{ 
 /* line 88: */
switch ( (I+1) )
{ 
case 1: 
 /* line 89: */
YYJBELA = ZYJBELA;
break;
case 2: 
YYJBELA = BZJBELA;
break;
case 3: 
YYJBELA = DZJBELA;
break;
case 4: 
YYJBELA = FZJBELA;
break;
case 5: 
YYJBELA = HZJBELA;
break;
case 6: 
YYJBELA = JZJBELA;
break;
case 7: 
YYJBELA = LZJBELA;
break;
case 8: 
 /* line 90: */
YYJBELA = NZJBELA;
break;
case 9: 
YYJBELA = PZJBELA;
break;
case 10: 
 /* line 91: */
YYJBELA = RZJBELA;
break;
case 11: 
YYJBELA = TZJBELA;
break;
case 12: 
YYJBELA = VZJBELA;
break;
case 13: 
YYJBELA = XZJBELA;
break;
case 14: 
YYJBELA = ZZJBELA;
break;
case 15: 
YYJBELA = BAKBELA;
break;
case 16: 
 /* line 92: */
YYJBELA = DAKBELA;
break;
case 17: 
YYJBELA = FAKBELA;
break;
case 18: 
YYJBELA = HAKBELA;
break;
case 19: 
YYJBELA = JAKBELA;
break;
case 20: 
YYJBELA = LAKBELA;
break;
case 21: 
YYJBELA = NAKBELA;
break;
case 22: 
 /* line 93: */
YYJBELA = PAKBELA;
break;
case 23: 
YYJBELA = RAKBELA;
break;
case 24: 
 /* line 94: */
YYJBELA = TAKBELA;
break;
case 25: 
YYJBELA = VAKBELA;
break;
case 26: 
YYJBELA = XAKBELA;
break;
case 27: 
YYJBELA = ZAKBELA;
break;
case 28: 
YYJBELA = BBKBELA;
break;
case 29: 
YYJBELA = DBKBELA;
break;
case 30: 
YYJBELA = FBKBELA;
break;
case 31: 
 /* line 95: */
YYJBELA = HBKBELA;
break;
case 32: 
YYJBELA = JBKBELA;
break;
case 33: 
YYJBELA = LBKBELA;
break;
case 34: 
YYJBELA = NBKBELA;
break;
case 35: 
YYJBELA = PBKBELA;
break;
case 36: 
YYJBELA = RBKBELA;
break;
case 37: 
 /* line 96: */
YYJBELA = TBKBELA;
break;
case 38: 
YYJBELA = VBKBELA;
break;
case 39: 
YYJBELA = XBKBELA;
break;
case 40: 
YYJBELA = ZBKBELA;
break;
case 41: 
YYJBELA = BCKBELA;
break;
case 42: 
 /* line 97: */
YYJBELA = DCKBELA;
break;
case 43: 
YYJBELA = FCKBELA;
break;
case 44: 
YYJBELA = HCKBELA;
break;
case 45: 
YYJBELA = JCKBELA;
break;
case 46: 
YYJBELA = LCKBELA;
break;
case 47: 
YYJBELA = NCKBELA;
break;
case 48: 
YYJBELA = PCKBELA;
break;
case 49: 
 /* line 98: */
YYJBELA = RCKBELA;
break;
case 50: 
YYJBELA = TCKBELA;
break;
case 51: 
YYJBELA = VCKBELA;
break;
case 52: 
YYJBELA = XCKBELA;
break;
case 53: 
YYJBELA = ZCKBELA;
break;
case 54: 
YYJBELA = BDKBELA;
break;
case 55: 
 /* line 99: */
YYJBELA = DDKBELA;
break;
case 56: 
YYJBELA = FDKBELA;
break;
case 57: 
YYJBELA = HDKBELA;
break;
case 58: 
YYJBELA = JDKBELA;
break;
case 59: 
YYJBELA = LDKBELA;
break;
case 60: 
YYJBELA = NDKBELA;
break;
case 61: 
 /* line 100: */
YYJBELA = PDKBELA;
break;
case 62: 
YYJBELA = RDKBELA;
break;
case 63: 
YYJBELA = TDKBELA;
break;
case 64: 
YYJBELA = VDKBELA;
break;
case 65: 
 /* line 101: */
YYJBELA = XDKBELA;
break;
case 66: 
YYJBELA = ZDKBELA;
break;
case 67: 
YYJBELA = BEKBELA;
break;
case 68: 
YYJBELA = DEKBELA;
break;
case 69: 
YYJBELA = FEKBELA;
break;
case 70: 
YYJBELA = HEKBELA;
break;
case 71: 
 /* line 102: */
YYJBELA = JEKBELA;
break;
case 72: 
YYJBELA = LEKBELA;
break;
case 73: 
YYJBELA = NEKBELA;
break;
case 74: 
YYJBELA = PEKBELA;
break;
case 75: 
YYJBELA = REKBELA;
break;
case 76: 
YYJBELA = TEKBELA;
break;
case 77: 
 /* line 103: */
YYJBELA = VEKBELA;
break;
case 78: 
YYJBELA = XEKBELA;
break;
case 79: 
YYJBELA = ZEKBELA;
break;
case 80: 
YYJBELA = BFKBELA;
break;
case 81: 
YYJBELA = DFKBELA;
break;
case 82: 
YYJBELA = FFKBELA;
break;
case 83: 
 /* line 104: */
YYJBELA = HFKBELA;
break;
case 84: 
YYJBELA = JFKBELA;
break;
case 85: 
YYJBELA = LFKBELA;
break;
case 86: 
YYJBELA = NFKBELA;
break;
case 87: 
YYJBELA = PFKBELA;
break;
case 88: 
YYJBELA = RFKBELA;
break;
case 89: 
YYJBELA = TFKBELA;
break;
case 90: 
 /* line 105: */
YYJBELA = VFKBELA;
break;
case 91: 
YYJBELA = XFKBELA;
break;
case 92: 
YYJBELA = ZFKBELA;
break;
case 93: 
YYJBELA = BGKBELA;
break;
case 94: 
YYJBELA = DGKBELA;
break;
case 95: 
YYJBELA = FGKBELA;
break;
case 96: 
 /* line 106: */
YYJBELA = HGKBELA;
break;
case 97: 
YYJBELA = JGKBELA;
break;
case 98: 
YYJBELA = LGKBELA;
break;
case 99: 
YYJBELA = NGKBELA;
break;
case 100: 
YYJBELA = PGKBELA;
break;
case 101: 
 /* line 107: */
YYJBELA = RGKBELA;
break;
case 102: 
YYJBELA = TGKBELA;
break;
case 103: 
YYJBELA = VGKBELA;
break;
case 104: 
YYJBELA = XGKBELA;
break;
case 105: 
YYJBELA = ZGKBELA;
break;
case 106: 
YYJBELA = BHKBELA;
break;
case 107: 
 /* line 108: */
YYJBELA = DHKBELA;
break;
case 108: 
YYJBELA = FHKBELA;
break;
case 109: 
YYJBELA = HHKBELA;
break;
case 110: 
YYJBELA = JHKBELA;
break;
case 111: 
 /* line 109: */
YYJBELA = LHKBELA;
break;
case 112: 
YYJBELA = NHKBELA;
break;
case 113: 
YYJBELA = PHKBELA;
break;
case 114: 
YYJBELA = RHKBELA;
break;
case 115: 
YYJBELA = THKBELA;
break;
case 116: 
YYJBELA = VHKBELA;
break;
case 117: 
YYJBELA = XHKBELA;
break;
case 118: 
 /* line 110: */
YYJBELA = ZHKBELA;
break;
case 119: 
YYJBELA = BIKBELA;
break;
case 120: 
YYJBELA = DIKBELA;
break;
case 121: 
 /* line 111: */
YYJBELA = FIKBELA;
break;
case 122: 
YYJBELA = HIKBELA;
break;
case 123: 
YYJBELA = JIKBELA;
break;
case 124: 
YYJBELA = LIKBELA;
break;
case 125: 
YYJBELA = NIKBELA;
break;
case 126: 
 /* line 112: */
YYJBELA = PIKBELA;
break;
case 127: 
YYJBELA = RIKBELA;
break;
case 128: 
YYJBELA = TIKBELA;
break;
case 129: 
YYJBELA = VIKBELA;
break;
case 130: 
YYJBELA = XIKBELA;
break;
case 131: 
 /* line 113: */
YYJBELA = ZIKBELA;
break;
case 132: 
YYJBELA = BJKBELA;
break;
case 133: 
YYJBELA = DJKBELA;
break;
case 134: 
YYJBELA = FJKBELA;
break;
case 135: 
YYJBELA = HJKBELA;
break;
case 136: 
YYJBELA = JJKBELA;
break;
case 137: 
 /* line 114: */
YYJBELA = LJKBELA;
break;
case 138: 
YYJBELA = NJKBELA;
break;
case 139: 
YYJBELA = PJKBELA;
break;
case 140: 
YYJBELA = RJKBELA;
break;
case 141: 
 /* line 115: */
YYJBELA = TJKBELA;
break;
case 142: 
YYJBELA = VJKBELA;
break;
case 143: 
YYJBELA = XJKBELA;
break;
case 144: 
YYJBELA = ZJKBELA;
break;
case 145: 
YYJBELA = BKKBELA;
break;
case 146: 
YYJBELA = DKKBELA;
break;
case 147: 
 /* line 116: */
YYJBELA = FKKBELA;
break;
case 148: 
YYJBELA = HKKBELA;
break;
case 149: 
YYJBELA = JKKBELA;
break;
case 150: 
YYJBELA = LKKBELA;
break;
case 151: 
 /* line 117: */
YYJBELA = NKKBELA;
break;
case 152: 
YYJBELA = PKKBELA;
break;
case 153: 
YYJBELA = RKKBELA;
break;
case 154: 
YYJBELA = TKKBELA;
break;
case 155: 
YYJBELA = VKKBELA;
break;
case 156: 
YYJBELA = XKKBELA;
break;
case 157: 
YYJBELA = ZKKBELA;
break;
case 158: 
 /* line 118: */
YYJBELA = BLKBELA;
break;
case 159: 
 /* line 119: */
YYJBELA = DLKBELA;
break;
case 160: 
 /* line 120: */
YYJBELA = FLKBELA;
break;
default: 
 /* line 121: */
YYJBELA = HLKBELA;
break;
} 
} 
A_PROC_EXIT(ilword);
*ReturnedValue = (YYJBELA);
return;
} 
#undef NL

A68_VOID  NLKBELA_ptcomp(A68_111 * File, A68_97  Flt)
{ 
A68_97  RLKBELA_msg;   /* proc value of non-global proc */
A68_BOOL  FMKBELA_keptfn;
A68_177  GOKBELA_import;   /* proc value of non-global proc */
A68_INT  LOKBELA;  /* YIELD */
A68_293  MOKBELA;  /* collateral clause result */
A68_52  POKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QOKBELA;  /* YIELD */
A68_52  ROKBELA;  /* OPERATORS - mode -> union mode */
A68_56  SOKBELA;  /* procedure value */
A68_52  TOKBELA;  /* OPERATORS - mode -> union mode */
A68_56  UOKBELA;  /* procedure value */
A68_85  VOKBELA;  /* OPERATORS - istruct -> vector */
A68_297  WOKBELA;  /* collateral clause result */
A68_52  ZOKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  APKBELA;  /* YIELD */
A68_VC  BPKBELA;  /* avoid structure result */
A68_52  CPKBELA;  /* OPERATORS - mode -> union mode */
A68_52  DPKBELA;  /* OPERATORS - mode -> union mode */
A68_56  EPKBELA;  /* procedure value */
A68_52  FPKBELA;  /* OPERATORS - mode -> union mode */
A68_56  GPKBELA;  /* procedure value */
A68_85  HPKBELA;  /* OPERATORS - istruct -> vector */
A68_179 * IPKBELA_ct;
A68_174  JPKBELA;  /* avoid structure result */
A68_174  KPKBELA_cr;
A68_BOOL  LPKBELA_failed_compilation;
A68_175  MPKBELA;  /* OPERATORS - mode -> union mode */
A68_176  NPKBELA;  /* procedure value */
A68_43  OPKBELA;  /* procedure value */
A68_43  PPKBELA;  /* procedure value */
A68_43  QPKBELA;  /* procedure value */
A68_294  RPKBELA;  /* collateral clause result */
A68_52  UPKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VPKBELA;  /* YIELD */
A68_52  WPKBELA;  /* OPERATORS - mode -> union mode */
A68_56  XPKBELA;  /* procedure value */
A68_85  YPKBELA;  /* OPERATORS - istruct -> vector */
A68_294  ZPKBELA;  /* collateral clause result */
A68_52  CQKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DQKBELA;  /* YIELD */
A68_52  EQKBELA;  /* OPERATORS - mode -> union mode */
A68_56  FQKBELA;  /* procedure value */
A68_85  GQKBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ptcomp);
 /* line 130: */
 /* line 132: */
{ 
A_CLOSURE( RLKBELA_msg, SLKBELA_msg, TLKBELA_msg );
(( TLKBELA_msg * ) ( RLKBELA_msg.nonlocals )) -> File = File;
(( TLKBELA_msg * ) ( RLKBELA_msg.nonlocals )) -> Flt = Flt;
 /* line 141: */
FMKBELA_keptfn = A68_TRUE;
 /* line 143: */
 /* line 154: */
 /* line 156: */
 /* line 159: */
A_CLOSURE( GOKBELA_import, HOKBELA_import, IOKBELA_import );
 /* line 162: */
 /* line 165: */
 /* line 166: */
LOKBELA = 1 ;
if ( UXIAELA_isnilptr(TYJAELA_discfile, (*(&A_VINDEX(UYJAELA_rootptrs,LOKBELA)))) )
{ 
QOKBELA = OOKBELA ;
MOKBELA.data[0] = A_UNITE(POKBELA,mode7,7,QOKBELA);
SOKBELA.fn.fn_global = LRAAOSL_newline;
SOKBELA.nonlocals = A68_NIL;
MOKBELA.data[1] = A_UNITE(ROKBELA,mode12,12,SOKBELA);
UOKBELA.fn.fn_global = LRAAOSL_newline;
UOKBELA.nonlocals = A68_NIL;
MOKBELA.data[2] = A_UNITE(TOKBELA,mode12,12,UOKBELA);
 /* line 167: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(VOKBELA,MOKBELA,3,A68_52 ));
} 
else
{ 
APKBELA = YOKBELA ;
WOKBELA.data[0] = A_UNITE(ZOKBELA,mode7,7,APKBELA);
 /* line 168: */
BAKAELA_ctos( (*(&(HXJAELA_library->Currentct))), &BPKBELA );
WOKBELA.data[1] = A_UNITE(CPKBELA,mode7,7,BPKBELA);
EPKBELA.fn.fn_global = LRAAOSL_newline;
EPKBELA.nonlocals = A68_NIL;
WOKBELA.data[2] = A_UNITE(DPKBELA,mode12,12,EPKBELA);
GPKBELA.fn.fn_global = LRAAOSL_newline;
GPKBELA.nonlocals = A68_NIL;
WOKBELA.data[3] = A_UNITE(FPKBELA,mode12,12,GPKBELA);
 /* line 169: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(HPKBELA,WOKBELA,4,A68_52 ));
} 
 /* line 171: */
IPKBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 172: */
AEKAELA_get_region( IPKBELA_ct, (*(&((&(HXJAELA_library->Currentct))->Import))), &JPKBELA );
KPKBELA_cr = JPKBELA;
 /* line 174: */
LPKBELA_failed_compilation = A68_FALSE;
 /* line 175: */
 /* line 176: */
NPKBELA.fn.fn_global = HMKBELA_outints;
NPKBELA.nonlocals = A68_NIL;
OPKBELA.fn.fn_global = INKBELA_outid;
OPKBELA.nonlocals = A68_NIL;
PPKBELA.fn.fn_global = TNKBELA_outstring;
PPKBELA.nonlocals = A68_NIL;
QPKBELA.fn.fn_global = KOKBELA_mname;
QPKBELA.nonlocals = A68_NIL;
NEDBELA_compile_shell(A68_TRUE, KPKBELA_cr, A_UNITE(MPKBELA,mode1,1,File), NPKBELA, OPKBELA, PPKBELA, GOKBELA_import, QPKBELA, (&LPKBELA_failed_compilation), RLKBELA_msg);
 /* line 177: */
 /* line 178: */
if ( LPKBELA_failed_compilation )
{ 
VPKBELA = TPKBELA ;
RPKBELA.data[0] = A_UNITE(UPKBELA,mode7,7,VPKBELA);
XPKBELA.fn.fn_global = LRAAOSL_newline;
XPKBELA.nonlocals = A68_NIL;
RPKBELA.data[1] = A_UNITE(WPKBELA,mode12,12,XPKBELA);
 /* line 179: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YPKBELA,RPKBELA,2,A68_52 ));
} 
else
{ 
DQKBELA = BQKBELA ;
ZPKBELA.data[0] = A_UNITE(CQKBELA,mode7,7,DQKBELA);
FQKBELA.fn.fn_global = LRAAOSL_newline;
FQKBELA.nonlocals = A68_NIL;
ZPKBELA.data[1] = A_UNITE(EQKBELA,mode12,12,FQKBELA);
 /* line 180: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GQKBELA,ZPKBELA,2,A68_52 ));
} 
 /* line 182: */
 /* line 183: */
 /* line 186: */
XQBAOSI_close_file(File, Flt);
} 
A_PROC_EXIT(ptcomp);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void OYJBELA(void)   /* initialise DECS ptcomp */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/ptcomp.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/libmodes.m","/u/model/ella/transform/assoc/mfiles/charset.m","./mfiles/databasebuffers.m","./mfiles/compshell.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
FTJAELA();   /* USE libmodes */
GMAATRN();   /* USE charset */
NWIAELA();   /* USE databasebuffers */
MDDBELA();   /* USE compshell */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/ptcomp.a68";
A_config.translation_time = "Tue Apr  4 10:42:26 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "NYJBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:42:26 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ptcomp);
UEAALIB_a68config(LGAALIB_configinfo, SYJBELA);
 /* line 83: */
 /* line 85: */
 /* line 123: */
ILKBELA_initialise = A68_TRUE;
 /* line 124: */
 /* line 125: */
 /* line 129: */
 /* line 188: */
A_PROC_EXIT(DECS ptcomp);
} 
#undef NL
/* end of translation of ./a68files/ptcomp.a68 */
