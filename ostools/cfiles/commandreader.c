
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
/* UNAME:XIBAOST */
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
A_VECTOR(struct A68t160 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE160 */
struct A68t158{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t159  Elements;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(BITS,REF MODE159)  */
struct A68t160 { A68_INT mode; union {
A68_INT * mode1;
struct A68t158  mode2;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF INT,MODE158)  */
struct A68t161{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t161 ,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] MODE161 */
A_VECTOR(struct A68t163 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE163 */
struct A68t164{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t165  Params;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,REF MODE165)  */
struct A68t163 { A68_INT mode; union {
struct A68t164  mode1;
struct A68t161  mode2;
} data; };
typedef struct A68t163  A68_163 ;    /* UNION(MODE164,MODE161)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE97) REF MODE26 */
struct A68t166 { A68_INT mode; union {
struct A68t167  mode1;
A68_INT * mode2;
struct A68t158  mode3;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(MODE167,REF INT,MODE158)  */
struct A68t168{
A68_INT * Sort;
struct A68t166  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF INT,MODE166,REF MODE26,REF MODE26)  */
struct A68t169{
struct A68t168  Rule;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE168,REF MODE169)  */

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE158) BOOL */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t159 ,struct A68t158 *),(struct A68t159 ,struct A68t158 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE159) MODE158 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t160 ,struct A68t158 *),(struct A68t160 ,struct A68t158 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE160) MODE158 */
struct A68t174 ;

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t160 ,struct A68t174 ,A68_VC *),(struct A68t160 ,struct A68t174 ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE160,REF MODE174) REF MODE26 */
A_VECTOR(struct A68t168 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE168 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t34 *,struct A68t174 ),(struct A68t34 *,struct A68t174 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE34,REF MODE174) VOID */
struct A68t177 ;

A_PROCEDURE(struct A68t169 *,A68t176,(struct A68t169 *,struct A68t177 ),(struct A68t169 *,struct A68t177 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE169,MODE177) REF MODE169 */
A_VECTOR(struct A68t178 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE178 */
struct A68t178{
A68_INT * No;
struct A68t166  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF INT,MODE166,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t163 ,struct A68t162 *),(struct A68t163 ,struct A68t162 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE163) REF MODE162 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(A68_BOOL ,A68t183,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t184,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t185,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(CHAR) CHAR */
struct A68t186{
A68_VC  Line;
struct A68t186 * Rest;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26,REF MODE186)  */

A_PROCEDURE(A68_INT ,A68t188,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t187{
A68_VC  Rdbuffer;
struct A68t188  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t186 * Stack;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,MODE188,INT,INT,INT,REF MODE186)  */

A_PROCEDURE(struct A68t187 *,A68t189,(A68_VC ,struct A68t188 ),(A68_VC ,struct A68t188 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE26,MODE188) REF MODE187 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE187) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_INT ,A68t192,(struct A68t186 *,A68_INT ),(struct A68t186 *,A68_INT ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE186,INT) INT */

A_PROCEDURE(A68_VOID ,A68t193,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_CHAR ,A68t194,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(BOOL,MODE97) CHAR */

A_PROCEDURE(A68_CHAR ,A68t195,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE97) CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t198,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t174 ,struct A68t160 ,struct A68t97 ,struct A68t163 *),(struct A68t174 ,struct A68t160 ,struct A68t97 ,struct A68t163 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE174,MODE160,MODE97) MODE163 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t160 ,A68_VC *),(struct A68t160 ,A68_VC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE160) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE85) VOID */
A_ISTRUCT(struct A68t52 ,2,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,8,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t163 ),(struct A68t163 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE163) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t160 ,A68_BOOL ,struct A68t163 *),(struct A68t160 ,A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE160,BOOL) MODE163 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t160 ,struct A68t163 ),(struct A68t160 ,struct A68t163 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE160,MODE163) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t159 ,A68_BOOL ,struct A68t163 *),(struct A68t159 ,A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE159,BOOL) MODE163 */
A_ISTRUCT(A68_CHAR ,14,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t212,(A68_BOOL ,struct A68t165 *),(A68_BOOL ,struct A68t165 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(BOOL) MODE165 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t158 ,A68_BOOL ,struct A68t163 *),(struct A68t158 ,A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE158,BOOL) MODE163 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t158 ,struct A68t163 ,struct A68t164 *),(struct A68t158 ,struct A68t163 ,struct A68t164 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE158,MODE163) MODE164 */
struct A68t215{
struct A68t163  Param;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE163,REF MODE215)  */
A_ISTRUCT(A68_CHAR ,11,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t225,(A68_VC *),(A68_VC *,void *));
typedef struct A68t225  A68_225 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t226,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t161 ,A68_INT ,struct A68t97 ),(struct A68t161 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE161,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 33 CHAR */
struct A68t230{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t230 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t230 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE230,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(CHAR,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,185,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 185 CHAR */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE161) BOOL */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t161 ,struct A68t97 ,A68_VC *),(struct A68t161 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE161,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t236,(void),(void *));
typedef struct A68t236  A68_236 ;    /* PROC CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandsyntax --- */
extern A68_163  ASAAOST_no_parameters;
extern A68_BOOL  GSAAOST_is_alt(struct A68t158 );
extern A68_BOOL  JSAAOST_is_opt(struct A68t158 );
extern A68_BOOL  MSAAOST_is_star(struct A68t158 );
extern A68_VOID  PSAAOST_alt(struct A68t159 ,A68_158 *);
extern A68_VOID  ATAAOST_prod(struct A68t159 ,A68_158 *);
extern A68_VOID  WUAAOST_show_syntax(struct A68t160 ,struct A68t174 ,A68_VC *);
/* --- End of imports from commandsyntax --- */


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
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  NVAAOSL_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void LRAAOST(void);   /* commandsyntax */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_182   BJBAOST = {"$Id: commandreader.a68,v 34.2 1995/03/29 13:02:24 ella Exp $"}; 
A_GISVEC(A68_VC ,CJBAOST,BJBAOST,60)
#define KJBAOST_sp ' '
#define LJBAOST_sep ','
static A68_114   MJBAOST = {" <- "}; 
A_GISVEC(A68_VC ,NJBAOST,MJBAOST,4)
A68_VC  OJBAOST_arrow_str;
#define RKBAOST_no_lines (A68_186 *)A68_NIL
static A68_187  SKBAOST_current_details;
static A68_188 * TKBAOST_rdline;
A68_VC * UKBAOST_rdbuffer;
A68_INT * VKBAOST_rdcharend;
A68_INT * WKBAOST_rdcharno;
A68_INT * XKBAOST_start_of_word;
static A68_186 ** YKBAOST_line_stack;
static A68_196   KNBAOST = {"back_space:  no characters left"}; 
A_GISVEC(A68_VC ,LNBAOST,KNBAOST,31)
static A68_197   PNBAOST = {"same_char:  index zero"}; 
A_GISVEC(A68_VC ,QNBAOST,PNBAOST,22)
A68_BOOL  ZNBAOST_debug_reader;
static A68_203   CPBAOST = {"Reading "}; 
A_GISVEC(A68_VC ,DPBAOST,CPBAOST,8)
static A68_207   CQBAOST = {"Wrong sort of parameter - "}; 
A_GISVEC(A68_VC ,DQBAOST,CQBAOST,26)
static A68_208   JQBAOST = {" expected"}; 
A_GISVEC(A68_VC ,KQBAOST,JQBAOST,9)
static A68_211   XQBAOST = {" Alternatives "}; 
A_GISVEC(A68_VC ,YQBAOST,XQBAOST,14)
static A68_208   YSBAOST = {" Product "}; 
A_GISVEC(A68_VC ,ZSBAOST,YSBAOST,9)
static A68_211   UUBAOST = {"More than one "}; 
A_GISVEC(A68_VC ,VUBAOST,UUBAOST,14)
static A68_216   GWBAOST = {" Read rule "}; 
A_GISVEC(A68_VC ,HWBAOST,GWBAOST,11)
static A68_217   RWBAOST = {"read_rule - illegal reader: "}; 
A_GISVEC(A68_VC ,SWBAOST,RWBAOST,28)
static A68_218   DXBAOST = {"Wrong sort of parameter"}; 
A_GISVEC(A68_VC ,EXBAOST,DXBAOST,23)
static A68_219   JXBAOST = {"Nothing read"}; 
A_GISVEC(A68_VC ,KXBAOST,JXBAOST,12)
static A68_220   RXBAOST = {" \""}; 
A_GISVEC(A68_VC ,SXBAOST,RXBAOST,2)
static A68_222   NZBAOST = {"This command does not have parameters"}; 
A_GISVEC(A68_VC ,OZBAOST,NZBAOST,37)
static A68_207   XZBAOST = {"Wrong sort of parameter - "}; 
A_GISVEC(A68_VC ,YZBAOST,XZBAOST,26)
static A68_208   DACAOST = {" expected"}; 
A_GISVEC(A68_VC ,EACAOST,DACAOST,9)
static A68_223   KACAOST = {"Unexpected parameter"}; 
A_GISVEC(A68_VC ,LACAOST,KACAOST,20)
static A68_224   PACAOST = {"End"}; 
A_GISVEC(A68_VC ,QACAOST,PACAOST,3)
static A68_197   LBCAOST = {"Unexpected character \""}; 
A_GISVEC(A68_VC ,MBCAOST,LBCAOST,22)
static A68_227   QBCAOST = {"\" in "}; 
A_GISVEC(A68_VC ,RBCAOST,QBCAOST,5)
static A68_229   DCCAOST = {"check_no:  wrong parameter sort: "}; 
A_GISVEC(A68_VC ,ECCAOST,DCCAOST,33)
A68_230  NCCAOST_first_and_check;
A68_230  PCCAOST_get_first;
A68_230  RCCAOST_check_end;
A68_230  TCCAOST_not_first;
static A68_211   TDCAOST = {"<ELLA-command>"}; 
A_GISVEC(A68_VC ,UDCAOST,TDCAOST,14)
A68_VC  VDCAOST_command_name_str;
static A68_233   WDCAOST = {"An ELLA command must start with a letter which may be followed by further letters, digits of visible space characters (\"_\").  Commands are not case sensitive but certain parameters are."}; 
A_GISVEC(A68_VC ,XDCAOST,WDCAOST,185)
A68_VC  YDCAOST_command_name_help;
A68_INT  ZDCAOST_command_name_no;
A68_160  BECAOST_command_name_syntax;
static A68_208   WFCAOST = {" expected"}; 
A_GISVEC(A68_VC ,XFCAOST,WFCAOST,9)
typedef struct   /* env of non-global proc */
{
A68_102 * ILBAOST_ans;
A68_192  LLBAOST_add;
} NLBAOST_add;
typedef struct   /* env of non-global proc */
{
A68_INT * EOBAOST_indent;
} HOBAOST_inc_indent;
typedef struct   /* env of non-global proc */
{
A68_INT * EOBAOST_indent;
} KOBAOST_dec_indent;
typedef struct   /* env of non-global proc */
{
A68_174  Analysers;
} OOBAOST_show;
typedef struct   /* env of non-global proc */
{
A68_INT * EOBAOST_indent;
} UOBAOST_print;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_174  Analysers;
} AQBAOST_error;
typedef struct   /* env of non-global proc */
{
A68_143  FOBAOST_inc_indent;
A68_201  SOBAOST_print;
A68_200  MOBAOST_show;
A68_161  KPBAOST_illegal;
A68_205 * VPBAOST_read_rule;
A68_143  IOBAOST_dec_indent;
A68_206  YPBAOST_error;
} UQBAOST_alternative;
typedef struct   /* env of non-global proc */
{
A68_143  FOBAOST_inc_indent;
A68_201  SOBAOST_print;
A68_200  MOBAOST_show;
A68_205 * VPBAOST_read_rule;
A68_206  YPBAOST_error;
A68_143  IOBAOST_dec_indent;
} VSBAOST_product;
typedef struct   /* env of non-global proc */
{
A68_210  SQBAOST_alternative;
A68_210  TSBAOST_product;
} KUBAOST_alt_or_prod;
typedef struct   /* env of non-global proc */
{
A68_143  FOBAOST_inc_indent;
A68_201  SOBAOST_print;
A68_200  MOBAOST_show;
A68_213  IUBAOST_alt_or_prod;
A68_143  IOBAOST_dec_indent;
} SUBAOST_more_than_one;
typedef struct   /* env of non-global proc */
{
A68_143  FOBAOST_inc_indent;
A68_201  SOBAOST_print;
A68_200  MOBAOST_show;
A68_174  Analysers;
A68_97  Msg;
A68_205 * VPBAOST_read_rule;
A68_213  IUBAOST_alt_or_prod;
A68_214  QUBAOST_more_than_one;
A68_143  IOBAOST_dec_indent;
} DWBAOST_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} NECAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} MFCAOST_first;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_44)
} RLBAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SRBAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JSBAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_159  Words;
} LTBAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * GVBAOST_n;
} QVBAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MYBAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BZBAOST_generator;

A68_BOOL  FJBAOST_instring(A68_CHAR  C, A68_VC  Str);

A68_BOOL  QJBAOST_space(A68_CHAR  C);

A68_BOOL  TJBAOST_separator(A68_CHAR  C);

A68_BOOL  XJBAOST_visible_space(A68_CHAR  C);

A68_BOOL  AKBAOST_digit(A68_CHAR  C);

A68_BOOL  EKBAOST_letter(A68_CHAR  C);

A68_BOOL  IKBAOST_bold(A68_CHAR  C);

A68_CHAR  MKBAOST_upper_case(A68_CHAR  C);

A68_CHAR  PKBAOST_lower_case(A68_CHAR  C);

A68_187 * BLBAOST_set_reader(A68_VC  Buffer, A68_188  Reader);

A68_VOID  GLBAOST_reset_reader(A68_187  Details);

A68_VOID  HLBAOST_get_input_lines(A68_102  *ReturnedValue);

A_STATIC A68_INT  MLBAOST_add(A68_186 * Stack, A68_INT  N, void *NonLocals);

A_STATIC A68_VOID  QLBAOST_generator(A68_BOOL  OLBAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  DMBAOST_skip_command(void);

A_STATIC A68_CHAR  HMBAOST_rdchar(A68_BOOL  Stack, A68_97  Msg);

A68_CHAR  YMBAOST_next_char(A68_97  Msg);

A68_CHAR  BNBAOST_first_char(A68_97  Msg);

A68_CHAR  FNBAOST_next_first_char(A68_97  Msg);

A68_VOID  JNBAOST_put_back_char(A68_97  Msg);

A68_CHAR  ONBAOST_same_char(A68_97  Msg);

A68_BOOL  UNBAOST_check_for_more(A68_97  Msg);

A68_VOID  YNBAOST_skip_parameter(A68_97  Msg);

A68_VOID  DOBAOST_read_parameters(A68_174  Analysers, A68_160  Syntax, A68_97  Msg, A68_163  *ReturnedValue);

A_STATIC A68_VOID  GOBAOST_inc_indent(void *NonLocals);

A_STATIC A68_VOID  JOBAOST_dec_indent(void *NonLocals);

A_STATIC A68_VOID  NOBAOST_show(A68_160  Syntax, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TOBAOST_print(A68_85  Line, void *NonLocals);

A_STATIC A68_BOOL  MPBAOST_is_illegal(A68_163  P);

A_STATIC A68_BOOL  RPBAOST_is_legal(A68_163  P);

A_STATIC A68_VOID  ZPBAOST_error(A68_160  Syntax, A68_163  Param, void *NonLocals);

A_STATIC A68_VOID  TQBAOST_alternative(A68_159  Choices, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RRBAOST_generator(A68_BOOL  PRBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ISBAOST_generator(A68_BOOL  GSBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  USBAOST_product(A68_159  Words, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KTBAOST_generator(A68_BOOL  ITBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JUBAOST_alt_or_prod(A68_158  Rule, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RUBAOST_more_than_one(A68_158  Rule, A68_163  First, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PVBAOST_generator(A68_BOOL  NVBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CWBAOST_anonymous(A68_160  Unit, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LYBAOST_generator(A68_BOOL  JYBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AZBAOST_generator(A68_BOOL  YYBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A68_VOID  XACAOST_read_failed(A68_VC  *ReturnedValue);

A68_VOID  ZACAOST_nothing_read(A68_VC  *ReturnedValue);

A68_VOID  GBCAOST_check_read(A68_VC  Word_read, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  BCCAOST_check_value(A68_161  V, A68_INT  No, A68_97  Msg);

A68_VOID  XCCAOST_read_token(A68_230  Rc, A68_VC  Token, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  PDCAOST_read_char(A68_CHAR  Char, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  DECAOST_read_command_name(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MECAOST_generator(A68_BOOL  KECAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  BFCAOST_is_command_name(A68_161  V);

A68_VOID  FFCAOST_get_command_name(A68_161  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  IFCAOST_read_command(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_CHAR  LFCAOST_first(void *NonLocals);

A_STATIC A68_VOID  QLBAOST_generator(A68_BOOL  OLBAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((RLBAOST_generator *)NonLocals)->x)
{ 
A68_102  SLBAOST;  /* clause result */
A68_102  TLBAOST;  /* OPERATORS - dynamic generator */
{ 
TLBAOST.upb = NL(N) ;
( OLBAOST_anonymous? A_VLOC(A68_VC ,TLBAOST): A_VHEAP(A68_VC ,TLBAOST) );
SLBAOST = TLBAOST;
} 
*ReturnedValue = (SLBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  RRBAOST_generator(A68_BOOL  PRBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((SRBAOST_generator *)NonLocals)->x)
{ 
A68_165  TRBAOST;  /* clause result */
A68_165  URBAOST;  /* OPERATORS - dynamic generator */
{ 
URBAOST.upb = 1 ;
( PRBAOST_anonymous? A_VLOC(A68_163 ,URBAOST): A_VHEAP(A68_163 ,URBAOST) );
TRBAOST = URBAOST;
} 
*ReturnedValue = (TRBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ISBAOST_generator(A68_BOOL  GSBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((JSBAOST_generator *)NonLocals)->x)
{ 
A68_165  KSBAOST;  /* clause result */
A68_165  LSBAOST;  /* OPERATORS - dynamic generator */
{ 
LSBAOST.upb = 1 ;
( GSBAOST_anonymous? A_VLOC(A68_163 ,LSBAOST): A_VHEAP(A68_163 ,LSBAOST) );
KSBAOST = LSBAOST;
} 
*ReturnedValue = (KSBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  KTBAOST_generator(A68_BOOL  ITBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((LTBAOST_generator *)NonLocals)->x)
{ 
A68_165  MTBAOST;  /* clause result */
A68_165  NTBAOST;  /* OPERATORS - dynamic generator */
{ 
NTBAOST.upb = NL(Words).upb ;
( ITBAOST_anonymous? A_VLOC(A68_163 ,NTBAOST): A_VHEAP(A68_163 ,NTBAOST) );
MTBAOST = NTBAOST;
} 
*ReturnedValue = (MTBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  PVBAOST_generator(A68_BOOL  NVBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((QVBAOST_generator *)NonLocals)->x)
{ 
A68_165  RVBAOST;  /* clause result */
A68_165  SVBAOST;  /* OPERATORS - dynamic generator */
{ 
SVBAOST.upb = (*NL(GVBAOST_n)) ;
( NVBAOST_anonymous? A_VLOC(A68_163 ,SVBAOST): A_VHEAP(A68_163 ,SVBAOST) );
RVBAOST = SVBAOST;
} 
*ReturnedValue = (RVBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  LYBAOST_generator(A68_BOOL  JYBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((MYBAOST_generator *)NonLocals)->x)
{ 
A68_165  NYBAOST;  /* clause result */
A68_165  OYBAOST;  /* OPERATORS - dynamic generator */
{ 
OYBAOST.upb = 1 ;
( JYBAOST_anonymous? A_VLOC(A68_163 ,OYBAOST): A_VHEAP(A68_163 ,OYBAOST) );
NYBAOST = OYBAOST;
} 
*ReturnedValue = (NYBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  AZBAOST_generator(A68_BOOL  YYBAOST_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((BZBAOST_generator *)NonLocals)->x)
{ 
A68_165  CZBAOST;  /* clause result */
A68_165  DZBAOST;  /* OPERATORS - dynamic generator */
{ 
DZBAOST.upb = 1 ;
( YYBAOST_anonymous? A_VLOC(A68_163 ,DZBAOST): A_VHEAP(A68_163 ,DZBAOST) );
CZBAOST = DZBAOST;
} 
*ReturnedValue = (CZBAOST);
return;
} 
#undef NL

A_STATIC A68_INT  MLBAOST_add(A68_186 * Stack, A68_INT  N, void *NonLocals)
#define NL(x) (((NLBAOST_add *)NonLocals)->x)
{ 
A68_193  PLBAOST_generator;   /* proc value of non-global proc */
A68_102  ULBAOST;  /* avoid structure result */
A68_INT  VLBAOST;  /* clause result */
A68_INT  WLBAOST_ind;
A68_VC * XLBAOST;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 156: */
 /* line 157: */
if ( (Stack==RKBAOST_no_lines) )
{ 
A_CLOSURE( PLBAOST_generator, QLBAOST_generator, RLBAOST_generator );
(( RLBAOST_generator * ) ( PLBAOST_generator.nonlocals )) -> N = N;
A_CALLPROC(PLBAOST_generator,(A68_FALSE, &ULBAOST),(A68_FALSE, &ULBAOST,(PLBAOST_generator).nonlocals));
(*NL(ILBAOST_ans)) = ULBAOST;
 /* line 158: */
VLBAOST = 1;
} 
else
{ 
WLBAOST_ind = A_CALLPROC(NL(LLBAOST_add),((*(&(Stack->Rest))), (N+1)),((*(&(Stack->Rest))), (N+1),(NL(LLBAOST_add)).nonlocals));
 /* line 159: */
XLBAOST = (&A_VINDEX((*NL(ILBAOST_ans)),WLBAOST_ind)) ;
(*XLBAOST) = (*(&(Stack->Line)));
 /* line 160: */
 /* line 161: */
VLBAOST = (WLBAOST_ind+1);
} 
A_PROC_EXIT(add);
return( VLBAOST );
} 
#undef NL

A_STATIC A68_VOID  GOBAOST_inc_indent(void *NonLocals)
#define NL(x) (((HOBAOST_inc_indent *)NonLocals)->x)
{ 
A_PROC_ENTRY(inc_indent);
(*NL(EOBAOST_indent))+=2;
A_PROC_EXIT(inc_indent);
return;
} 
#undef NL

A_STATIC A68_VOID  JOBAOST_dec_indent(void *NonLocals)
#define NL(x) (((KOBAOST_dec_indent *)NonLocals)->x)
{ 
A_PROC_ENTRY(dec_indent);
(*NL(EOBAOST_indent))-=2;
A_PROC_EXIT(dec_indent);
return;
} 
#undef NL

A_STATIC A68_VOID  NOBAOST_show(A68_160  Syntax, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OOBAOST_show *)NonLocals)->x)
{ 
A68_VC  POBAOST;  /* clause result */
A68_VC  QOBAOST;  /* avoid structure result */
A_PROC_ENTRY(show);
WUAAOST_show_syntax( Syntax, NL(Analysers), &QOBAOST );
POBAOST = QOBAOST;
A_PROC_EXIT(show);
*ReturnedValue = (POBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  TOBAOST_print(A68_85  Line, void *NonLocals)
#define NL(x) (((UOBAOST_print *)NonLocals)->x)
{ 
A68_202  VOBAOST;  /* collateral clause result */
A68_52  WOBAOST;  /* OPERATORS - mode -> union mode */
A68_56  XOBAOST;  /* procedure value */
A68_VC  YOBAOST;  /* avoid structure result */
A68_52  ZOBAOST;  /* OPERATORS - mode -> union mode */
A68_85  APBAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print);
 /* line 295: */
{ 
GFBAOSL_put(KEAAOST_screen, Line);
XOBAOST.fn.fn_global = LRAAOSL_newline;
XOBAOST.nonlocals = A68_NIL;
VOBAOST.data[0] = A_UNITE(WOBAOST,mode12,12,XOBAOST);
NVAAOSL_( ' ', (*NL(EOBAOST_indent)), &YOBAOST );
VOBAOST.data[1] = A_UNITE(ZOBAOST,mode7,7,YOBAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(APBAOST,VOBAOST,2,A68_52 ));
} 
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_BOOL  MPBAOST_is_illegal(A68_163  P)
{ 
A68_163  NPBAOST;  /* united object - for case conformity */
A68_161  OPBAOST_v;
A68_BOOL  PPBAOST;  /* clause result */
A_PROC_ENTRY(is_illegal);
 /* line 302: */
NPBAOST = P ;
switch ( NPBAOST.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
OPBAOST_v = (NPBAOST.data.mode2);
PPBAOST = (OPBAOST_v.Sort==(-1));
break;
default: 
PPBAOST = A68_FALSE;
break;
} 
A_PROC_EXIT(is_illegal);
return( PPBAOST );
} 
#undef NL

A_STATIC A68_BOOL  RPBAOST_is_legal(A68_163  P)
{ 
A68_163  SPBAOST;  /* united object - for case conformity */
A68_161  TPBAOST_v;
A68_BOOL  UPBAOST;  /* clause result */
A_PROC_ENTRY(is_legal);
 /* line 305: */
SPBAOST = P ;
switch ( SPBAOST.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
TPBAOST_v = (SPBAOST.data.mode2);
UPBAOST = (TPBAOST_v.Sort>0);
break;
default: 
UPBAOST = A68_TRUE;
break;
} 
A_PROC_EXIT(is_legal);
return( UPBAOST );
} 
#undef NL

A_STATIC A68_VOID  ZPBAOST_error(A68_160  Syntax, A68_163  Param, void *NonLocals)
#define NL(x) (((AQBAOST_error *)NonLocals)->x)
{ 
A68_209  BQBAOST;  /* collateral clause result */
A68_52  EQBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  FQBAOST;  /* YIELD */
A68_52  GQBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HQBAOST;  /* avoid structure result */
A68_52  IQBAOST;  /* OPERATORS - mode -> union mode */
A68_52  LQBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  MQBAOST;  /* YIELD */
A68_85  NQBAOST;  /* OPERATORS - istruct -> vector */
A68_VC  OQBAOST;  /* avoid structure result */
A68_46  PQBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(error);
 /* line 311: */
 /* line 312: */
if ( MPBAOST_is_illegal(Param) )
{ 
YNBAOST_skip_parameter(NL(Msg));
 /* line 313: */
 /* line 314: */
 /* line 315: */
FQBAOST = DQBAOST ;
BQBAOST.data[0] = A_UNITE(EQBAOST,mode7,7,FQBAOST);
} 
else
{ 
 /* line 316: */
BQBAOST.data[0] = A_UNITE(GQBAOST,mode7,7,EOAAOSL_nullstr);
} 
WUAAOST_show_syntax( Syntax, NL(Analysers), &HQBAOST );
BQBAOST.data[1] = A_UNITE(IQBAOST,mode7,7,HQBAOST);
MQBAOST = KQBAOST ;
BQBAOST.data[2] = A_UNITE(LQBAOST,mode7,7,MQBAOST);
 /* line 317: */
UJBAOSL_oneline( A_HISVEC(NQBAOST,BQBAOST,3,A68_52 ), &OQBAOST );
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(PQBAOST,OQBAOST,A68_VC )),(WHAAOSI_user, A_HVEC(PQBAOST,OQBAOST,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(error);
return;
} 
#undef NL

A_STATIC A68_VOID  TQBAOST_alternative(A68_159  Choices, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((UQBAOST_alternative *)NonLocals)->x)
{ 
A68_209  VQBAOST;  /* collateral clause result */
A68_52  WQBAOST;  /* OPERATORS - mode -> union mode */
A68_52  ZQBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ARBAOST;  /* YIELD */
A68_158  BRBAOST;  /* avoid structure result */
A68_160  CRBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DRBAOST;  /* avoid structure result */
A68_52  ERBAOST;  /* OPERATORS - mode -> union mode */
A68_85  FRBAOST;  /* OPERATORS - istruct -> vector */
A68_163  HRBAOST;  /* OPERATORS - mode -> union mode */
A68_163  GRBAOST_p;
A68_INT  IRBAOST_choice;
A68_160 * JRBAOST_arm;
A68_INT  KRBAOST;  /* forall loop counter */
A68_163  LRBAOST;  /* avoid structure result */
A68_163  MRBAOST;  /* united object - for case conformity */
A68_161  NRBAOST_v;
A68_164  ORBAOST;  /* collateral clause result */
A68_212  QRBAOST_generator;   /* proc value of non-global proc */
A68_165  VRBAOST;  /* avoid structure result */
A68_163  WRBAOST;  /* OPERATORS - mode -> union mode */
A68_165  XRBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  YRBAOST;  /* OPERATORS - assign op */
A68_163  ZRBAOST;  /* clause result */
A68_163  ASBAOST;  /* OPERATORS - mode -> union mode */
A68_158  BSBAOST;  /* avoid structure result */
A68_160  CSBAOST;  /* OPERATORS - mode -> union mode */
A68_163  DSBAOST;  /* OPERATORS - mode -> union mode */
A68_164  ESBAOST_c;
A68_164  FSBAOST;  /* collateral clause result */
A68_212  HSBAOST_generator;   /* proc value of non-global proc */
A68_165  MSBAOST;  /* avoid structure result */
A68_163  NSBAOST;  /* OPERATORS - mode -> union mode */
A68_165  OSBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  PSBAOST;  /* OPERATORS - assign op */
A68_163  QSBAOST;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(alternative);
 /* line 322: */
 /* line 323: */
{ 
 /* line 324: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(FOBAOST_inc_indent),(),((NL(FOBAOST_inc_indent)).nonlocals));
 /* line 325: */
VQBAOST.data[0] = A_UNITE(WQBAOST,mode8,8,Expected);
ARBAOST = YQBAOST ;
VQBAOST.data[1] = A_UNITE(ZQBAOST,mode7,7,ARBAOST);
PSAAOST_alt( Choices, &BRBAOST );
A_CALLPROC(NL(MOBAOST_show),(A_UNITE(CRBAOST,mode2,2,BRBAOST), &DRBAOST),(A_UNITE(CRBAOST,mode2,2,BRBAOST), &DRBAOST,(NL(MOBAOST_show)).nonlocals));
VQBAOST.data[2] = A_UNITE(ERBAOST,mode7,7,DRBAOST);
 /* line 326: */
A_CALLPROC(NL(SOBAOST_print),(A_HISVEC(FRBAOST,VQBAOST,3,A68_52 )),(A_HISVEC(FRBAOST,VQBAOST,3,A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 328: */
GRBAOST_p = A_UNITE(HRBAOST,mode2,2,NL(KPBAOST_illegal));
 /* line 329: */
IRBAOST_choice = 0;
 /* line 330: */
KRBAOST = Choices.upb -1;
JRBAOST_arm = Choices.data;
for (;KRBAOST-- >= 0;
(JRBAOST_arm++
) )
{
 /* line 331: */
A_CALLPROC((*NL(VPBAOST_read_rule)),((*JRBAOST_arm), A68_FALSE, &LRBAOST),((*JRBAOST_arm), A68_FALSE, &LRBAOST,((*NL(VPBAOST_read_rule))).nonlocals));
if ( !(MPBAOST_is_illegal(GRBAOST_p = LRBAOST)) ) break;
IRBAOST_choice+=1;
}
 /* line 333: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(IOBAOST_dec_indent),(),((NL(IOBAOST_dec_indent)).nonlocals));
} 
 /* line 334: */
 /* line 335: */
MRBAOST = GRBAOST_p ;
switch ( MRBAOST.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
NRBAOST_v = (MRBAOST.data.mode2);
 /* line 336: */
 /* line 337: */
if ( RPBAOST_is_legal(GRBAOST_p) )
{ 
ORBAOST.Choice = IRBAOST_choice;
A_CLOSURE( QRBAOST_generator, RRBAOST_generator, SRBAOST_generator );
 /* line 338: */
A_CALLPROC(QRBAOST_generator,(A68_FALSE, &VRBAOST),(A68_FALSE, &VRBAOST,(QRBAOST_generator).nonlocals));
YRBAOST = A_HVEC(XRBAOST,A_UNITE(WRBAOST,mode2,2,NRBAOST_v),A68_163 ) ;
A_VASSIGN2(YRBAOST,VRBAOST,A68_163 ) ;
ORBAOST.Params = VRBAOST;
ZRBAOST = A_UNITE(ASBAOST,mode1,1,ORBAOST);
} 
else
{ 
if ( Expected )
{ 
PSAAOST_alt( Choices, &BSBAOST );
A_CALLPROC(NL(YPBAOST_error),(A_UNITE(CSBAOST,mode2,2,BSBAOST), GRBAOST_p),(A_UNITE(CSBAOST,mode2,2,BSBAOST), GRBAOST_p,(NL(YPBAOST_error)).nonlocals));
} 
 /* line 339: */
 /* line 340: */
 /* line 341: */
ZRBAOST = A_UNITE(DSBAOST,mode2,2,NRBAOST_v);
} 
break;
case 1: /* STRUCT(INT,REF MODE165)  */
ESBAOST_c = (MRBAOST.data.mode1);
 /* line 342: */
FSBAOST.Choice = IRBAOST_choice;
A_CLOSURE( HSBAOST_generator, ISBAOST_generator, JSBAOST_generator );
 /* line 343: */
A_CALLPROC(HSBAOST_generator,(A68_FALSE, &MSBAOST),(A68_FALSE, &MSBAOST,(HSBAOST_generator).nonlocals));
PSBAOST = A_HVEC(OSBAOST,A_UNITE(NSBAOST,mode1,1,ESBAOST_c),A68_163 ) ;
A_VASSIGN2(PSBAOST,MSBAOST,A68_163 ) ;
FSBAOST.Params = MSBAOST;
 /* line 344: */
ZRBAOST = A_UNITE(QSBAOST,mode1,1,FSBAOST);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(alternative);
*ReturnedValue = (ZRBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  USBAOST_product(A68_159  Words, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((VSBAOST_product *)NonLocals)->x)
{ 
A68_209  WSBAOST;  /* collateral clause result */
A68_52  XSBAOST;  /* OPERATORS - mode -> union mode */
A68_52  ATBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BTBAOST;  /* YIELD */
A68_158  CTBAOST;  /* avoid structure result */
A68_160  DTBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ETBAOST;  /* avoid structure result */
A68_52  FTBAOST;  /* OPERATORS - mode -> union mode */
A68_85  GTBAOST;  /* OPERATORS - istruct -> vector */
A68_BOOL  HTBAOST_should_find;
A68_212  JTBAOST_generator;   /* proc value of non-global proc */
A68_165  OTBAOST;  /* avoid structure result */
A68_165  PTBAOST_values;
A68_INT  QTBAOST_index;
A68_160 * RTBAOST_w;
A68_INT  STBAOST;  /* forall loop counter */
A68_INT  TTBAOST;  /* YIELD */
A68_163 * UTBAOST_val;
A68_163  VTBAOST;  /* avoid structure result */
A68_BOOL  WTBAOST;  /* clause result */
A68_160  XTBAOST;  /* united object - for case conformity */
A68_158  YTBAOST_r;
A68_BOOL  ZTBAOST;  /* clause result */
A68_BOOL  AUBAOST;  /* clause result */
A68_163  BUBAOST;  /* clause result */
A68_INT  CUBAOST;  /* YIELD */
A68_164  DUBAOST;  /* collateral clause result */
A68_165  EUBAOST;  /* OPERATORS - trim index */
A68_163  FUBAOST;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(product);
 /* line 349: */
 /* line 353: */
{ 
 /* line 354: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(FOBAOST_inc_indent),(),((NL(FOBAOST_inc_indent)).nonlocals));
 /* line 355: */
WSBAOST.data[0] = A_UNITE(XSBAOST,mode8,8,Expected);
BTBAOST = ZSBAOST ;
WSBAOST.data[1] = A_UNITE(ATBAOST,mode7,7,BTBAOST);
ATAAOST_prod( Words, &CTBAOST );
A_CALLPROC(NL(MOBAOST_show),(A_UNITE(DTBAOST,mode2,2,CTBAOST), &ETBAOST),(A_UNITE(DTBAOST,mode2,2,CTBAOST), &ETBAOST,(NL(MOBAOST_show)).nonlocals));
WSBAOST.data[2] = A_UNITE(FTBAOST,mode7,7,ETBAOST);
 /* line 356: */
A_CALLPROC(NL(SOBAOST_print),(A_HISVEC(GTBAOST,WSBAOST,3,A68_52 )),(A_HISVEC(GTBAOST,WSBAOST,3,A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 358: */
HTBAOST_should_find = Expected;
 /* line 359: */
A_CLOSURE( JTBAOST_generator, KTBAOST_generator, LTBAOST_generator );
(( LTBAOST_generator * ) ( JTBAOST_generator.nonlocals )) -> Words = Words;
A_CALLPROC(JTBAOST_generator,(A68_FALSE, &OTBAOST),(A68_FALSE, &OTBAOST,(JTBAOST_generator).nonlocals));
PTBAOST_values = OTBAOST;
 /* line 360: */
QTBAOST_index = 0;
 /* line 362: */
 /* line 363: */
STBAOST = Words.upb -1;
RTBAOST_w = Words.data;
for (;STBAOST-- >= 0;
(RTBAOST_w++
) )
{
 /* line 364: */
TTBAOST = (QTBAOST_index+1) ;
UTBAOST_val = (&A_VINDEX(PTBAOST_values,TTBAOST));
 /* line 365: */
A_CALLPROC((*NL(VPBAOST_read_rule)),((*RTBAOST_w), HTBAOST_should_find, &VTBAOST),((*RTBAOST_w), HTBAOST_should_find, &VTBAOST,((*NL(VPBAOST_read_rule))).nonlocals));
(*UTBAOST_val) = VTBAOST;
 /* line 366: */
 /* line 367: */
if ( RPBAOST_is_legal((*UTBAOST_val)) )
{ 
QTBAOST_index+=1;
 /* line 368: */
HTBAOST_should_find = A68_TRUE;
 /* line 369: */
 /* line 370: */
WTBAOST = A68_TRUE;
} 
else
{ 
XTBAOST = (*RTBAOST_w) ;
switch ( XTBAOST.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE159)  */
YTBAOST_r = (XTBAOST.data.mode2);
ZTBAOST = JSAAOST_is_opt(YTBAOST_r);
break;
default: 
 /* line 371: */
ZTBAOST = A68_FALSE;
break;
} 
if ( ZTBAOST )
{ 
(*UTBAOST_val) = ASAAOST_no_parameters;
 /* line 372: */
 /* line 373: */
 /* line 374: */
WTBAOST = A68_TRUE;
} 
else
{ 
 /* line 375: */
if ( HTBAOST_should_find )
{ 
 /* line 376: */
A_CALLPROC(NL(YPBAOST_error),((*RTBAOST_w), (*UTBAOST_val)),((*RTBAOST_w), (*UTBAOST_val),(NL(YPBAOST_error)).nonlocals));
} 
 /* line 377: */
 /* line 378: */
 /* line 379: */
WTBAOST = A68_FALSE;
} 
} 
AUBAOST = WTBAOST;
if ( !AUBAOST ) break;
/*SKIP*/;
}
 /* line 381: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(IOBAOST_dec_indent),(),((NL(IOBAOST_dec_indent)).nonlocals));
} 
 /* line 383: */
if ( (QTBAOST_index==0) )
{ 
CUBAOST = 1 ;
BUBAOST = (*(&A_VINDEX(PTBAOST_values,CUBAOST)));
} 
else
{ 
DUBAOST.Choice = 1;
DUBAOST.Params = A_VTRIM(EUBAOST,(PTBAOST_values),A_VTSCRIPT(&(EUBAOST.upb),(PTBAOST_values).upb,1,QTBAOST_index));
 /* line 384: */
BUBAOST = A_UNITE(FUBAOST,mode1,1,DUBAOST);
} 
} 
A_PROC_EXIT(product);
*ReturnedValue = (BUBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  JUBAOST_alt_or_prod(A68_158  Rule, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((KUBAOST_alt_or_prod *)NonLocals)->x)
{ 
A68_163  LUBAOST;  /* clause result */
A68_163  MUBAOST;  /* avoid structure result */
A68_163  NUBAOST;  /* avoid structure result */
A_PROC_ENTRY(alt_or_prod);
 /* line 388: */
 /* line 389: */
if ( GSAAOST_is_alt(Rule) )
{ 
 /* line 390: */
A_CALLPROC(NL(SQBAOST_alternative),(Rule.Elements, Expected, &MUBAOST),(Rule.Elements, Expected, &MUBAOST,(NL(SQBAOST_alternative)).nonlocals));
LUBAOST = MUBAOST;
} 
else
{ 
 /* line 391: */
A_CALLPROC(NL(TSBAOST_product),(Rule.Elements, Expected, &NUBAOST),(Rule.Elements, Expected, &NUBAOST,(NL(TSBAOST_product)).nonlocals));
LUBAOST = NUBAOST;
} 
A_PROC_EXIT(alt_or_prod);
*ReturnedValue = (LUBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  RUBAOST_more_than_one(A68_158  Rule, A68_163  First, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((SUBAOST_more_than_one *)NonLocals)->x)
{ 
A68_202  TUBAOST;  /* collateral clause result */
A68_52  WUBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XUBAOST;  /* YIELD */
A68_160  YUBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZUBAOST;  /* avoid structure result */
A68_52  AVBAOST;  /* OPERATORS - mode -> union mode */
A68_85  BVBAOST;  /* OPERATORS - istruct -> vector */
A68_215  DVBAOST;  /* collateral clause result */
A68_215 * FVBAOST;  /* YIELD */
A68_215 * EVBAOST_list;
A68_INT  GVBAOST_n;
A68_215 ** HVBAOST_ptr;
A68_163  IVBAOST;  /* avoid structure result */
A68_163  JVBAOST_p;
A68_BOOL  KVBAOST;  /* clause result */
A68_215  LVBAOST;  /* collateral clause result */
A68_215 * MVBAOST;  /* YIELD */
A68_212  OVBAOST_generator;   /* proc value of non-global proc */
A68_165  TVBAOST;  /* avoid structure result */
A68_165  UVBAOST_params;
A68_163 * VVBAOST_p;
A68_INT  WVBAOST;  /* forall loop counter */
A68_164  XVBAOST;  /* collateral clause result */
A68_164  YVBAOST;  /* clause result */
A_PROC_ENTRY(more_than_one);
 /* line 395: */
 /* line 396: */
{ 
 /* line 397: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(FOBAOST_inc_indent),(),((NL(FOBAOST_inc_indent)).nonlocals));
 /* line 398: */
XUBAOST = VUBAOST ;
TUBAOST.data[0] = A_UNITE(WUBAOST,mode7,7,XUBAOST);
A_CALLPROC(NL(MOBAOST_show),(A_UNITE(YUBAOST,mode2,2,Rule), &ZUBAOST),(A_UNITE(YUBAOST,mode2,2,Rule), &ZUBAOST,(NL(MOBAOST_show)).nonlocals));
TUBAOST.data[1] = A_UNITE(AVBAOST,mode7,7,ZUBAOST);
 /* line 399: */
A_CALLPROC(NL(SOBAOST_print),(A_HISVEC(BVBAOST,TUBAOST,2,A68_52 )),(A_HISVEC(BVBAOST,TUBAOST,2,A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 401: */
 /* line 402: */
DVBAOST.Param = First;
DVBAOST.Rest = (A68_215 *)A68_NIL;
FVBAOST = A_HEAP(A68_215 ) ;
(*FVBAOST) = DVBAOST ;
EVBAOST_list = FVBAOST;
 /* line 403: */
GVBAOST_n = 1;
 /* line 404: */
HVBAOST_ptr = (&(EVBAOST_list->Rest));
 /* line 405: */
for ( ;; )
{ 
 /* line 406: */
A_CALLPROC(NL(IUBAOST_alt_or_prod),(Rule, A68_FALSE, &IVBAOST),(Rule, A68_FALSE, &IVBAOST,(NL(IUBAOST_alt_or_prod)).nonlocals));
JVBAOST_p = IVBAOST;
 /* line 407: */
 /* line 408: */
KVBAOST = RPBAOST_is_legal(JVBAOST_p);
if ( !KVBAOST ) break;
GVBAOST_n+=1;
 /* line 409: */
LVBAOST.Param = JVBAOST_p;
LVBAOST.Rest = (A68_215 *)A68_NIL;
 /* line 410: */
MVBAOST = A_HEAP(A68_215 ) ;
(*MVBAOST) = LVBAOST ;
HVBAOST_ptr = (&(((*HVBAOST_ptr) = MVBAOST)->Rest));
}
 /* line 411: */
A_CLOSURE( OVBAOST_generator, PVBAOST_generator, QVBAOST_generator );
(( QVBAOST_generator * ) ( OVBAOST_generator.nonlocals )) -> GVBAOST_n = (&GVBAOST_n);
A_CALLPROC(OVBAOST_generator,(A68_FALSE, &TVBAOST),(A68_FALSE, &TVBAOST,(OVBAOST_generator).nonlocals));
UVBAOST_params = TVBAOST;
 /* line 412: */
 /* line 413: */
WVBAOST = UVBAOST_params.upb -1;
VVBAOST_p = UVBAOST_params.data;
for (;WVBAOST-- >= 0;
(VVBAOST_p++
) )
{
(*VVBAOST_p) = (*(&(EVBAOST_list->Param)));
EVBAOST_list = (*(&(EVBAOST_list->Rest)));
}
 /* line 415: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(IOBAOST_dec_indent),(),((NL(IOBAOST_dec_indent)).nonlocals));
} 
 /* line 416: */
XVBAOST.Choice = 0;
 /* line 417: */
XVBAOST.Params = UVBAOST_params;
YVBAOST = XVBAOST;
} 
A_PROC_EXIT(more_than_one);
*ReturnedValue = (YVBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  CWBAOST_anonymous(A68_160  Unit, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((DWBAOST_anonymous *)NonLocals)->x)
{ 
A68_209  EWBAOST;  /* collateral clause result */
A68_52  FWBAOST;  /* OPERATORS - mode -> union mode */
A68_52  IWBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  JWBAOST;  /* YIELD */
A68_VC  KWBAOST;  /* avoid structure result */
A68_52  LWBAOST;  /* OPERATORS - mode -> union mode */
A68_85  MWBAOST;  /* OPERATORS - istruct -> vector */
A68_160  NWBAOST;  /* united object - for case conformity */
A68_INT * OWBAOST_index;
A68_168 * PWBAOST_analyser;
A68_202  QWBAOST;  /* collateral clause result */
A68_52  TWBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UWBAOST;  /* YIELD */
A68_52  VWBAOST;  /* OPERATORS - mode -> union mode */
A68_85  WWBAOST;  /* OPERATORS - istruct -> vector */
A68_VC  XWBAOST;  /* avoid structure result */
A68_46  YWBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_166  ZWBAOST;  /* united object - for case conformity */
A68_167  AXBAOST_read;
A68_VC  BXBAOST;  /* avoid structure result */
A68_VC  CXBAOST_val;
A68_52  FXBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  GXBAOST;  /* YIELD */
A68_85  HXBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_161  IXBAOST;  /* collateral clause result */
A68_52  LXBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  MXBAOST;  /* YIELD */
A68_85  NXBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  OXBAOST;  /* collateral clause result */
A68_52  PXBAOST;  /* OPERATORS - mode -> union mode */
A68_INT  QXBAOST;  /* YIELD */
A68_52  TXBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UXBAOST;  /* YIELD */
A68_52  VXBAOST;  /* OPERATORS - mode -> union mode */
A68_52  WXBAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  XXBAOST;  /* YIELD */
A68_85  YXBAOST;  /* OPERATORS - istruct -> vector */
A68_163  ZXBAOST;  /* clause result */
A68_163  AYBAOST;  /* OPERATORS - mode -> union mode */
A68_160  BYBAOST_syntax;
A68_163  CYBAOST;  /* avoid structure result */
A68_158  DYBAOST_rule;
A68_163  EYBAOST;  /* avoid structure result */
A68_163  FYBAOST_p;
A68_164  GYBAOST;  /* avoid structure result */
A68_163  HYBAOST;  /* OPERATORS - mode -> union mode */
A68_164  IYBAOST;  /* collateral clause result */
A68_212  KYBAOST_generator;   /* proc value of non-global proc */
A68_165  PYBAOST;  /* avoid structure result */
A68_165  QYBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  RYBAOST;  /* OPERATORS - assign op */
A68_163  SYBAOST;  /* OPERATORS - mode -> union mode */
A68_163  TYBAOST;  /* avoid structure result */
A68_163  UYBAOST_p;
A68_164  VYBAOST;  /* avoid structure result */
A68_163  WYBAOST;  /* OPERATORS - mode -> union mode */
A68_164  XYBAOST;  /* collateral clause result */
A68_212  ZYBAOST_generator;   /* proc value of non-global proc */
A68_165  EZBAOST;  /* avoid structure result */
A68_165  FZBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  GZBAOST;  /* OPERATORS - assign op */
A68_163  HZBAOST;  /* OPERATORS - mode -> union mode */
A68_163  IZBAOST_ans;
A68_163  JZBAOST;  /* clause result */
 /* line 421: */
 /* line 422: */
{ 
 /* line 423: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(FOBAOST_inc_indent),(),((NL(FOBAOST_inc_indent)).nonlocals));
 /* line 424: */
EWBAOST.data[0] = A_UNITE(FWBAOST,mode8,8,Expected);
JWBAOST = HWBAOST ;
EWBAOST.data[1] = A_UNITE(IWBAOST,mode7,7,JWBAOST);
A_CALLPROC(NL(MOBAOST_show),(Unit, &KWBAOST),(Unit, &KWBAOST,(NL(MOBAOST_show)).nonlocals));
EWBAOST.data[2] = A_UNITE(LWBAOST,mode7,7,KWBAOST);
 /* line 425: */
A_CALLPROC(NL(SOBAOST_print),(A_HISVEC(MWBAOST,EWBAOST,3,A68_52 )),(A_HISVEC(MWBAOST,EWBAOST,3,A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 427: */
 /* line 428: */
 /* line 429: */
NWBAOST = Unit ;
switch ( NWBAOST.mode )
{ 
case 1: /* REF INT */
OWBAOST_index = (NWBAOST.data.mode1);
 /* line 430: */
{ 
PWBAOST_analyser = (&A_VINDEX(NL(Analysers),(*OWBAOST_index)));
 /* line 431: */
 /* line 432: */
if ( ((*(*(&(PWBAOST_analyser->Sort))))<1) )
{ 
 /* line 433: */
UWBAOST = SWBAOST ;
QWBAOST.data[0] = A_UNITE(TWBAOST,mode7,7,UWBAOST);
QWBAOST.data[1] = A_UNITE(VWBAOST,mode1,1,(*OWBAOST_index));
 /* line 434: */
UJBAOSL_oneline( A_HISVEC(WWBAOST,QWBAOST,2,A68_52 ), &XWBAOST );
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(YWBAOST,XWBAOST,A68_VC )),(SHAAOSI_system, A_HVEC(YWBAOST,XWBAOST,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 435: */
 /* line 436: */
ZWBAOST = (*(&(PWBAOST_analyser->Reader))) ;
switch ( ZWBAOST.mode )
{ 
case 1: /* PROC(MODE97) REF MODE26 */
AXBAOST_read = (ZWBAOST.data.mode1);
 /* line 438: */
{ 
A_CALLPROC(AXBAOST_read,(NL(Msg), &BXBAOST),(NL(Msg), &BXBAOST,(AXBAOST_read).nonlocals));
CXBAOST_val = BXBAOST;
 /* line 441: */
 /* line 442: */
if ( A_VSTRUCTCOMP(CXBAOST_val,YNAAOSL_nilstr) )
{ 
 /* line 443: */
if ( ZNBAOST_debug_reader )
{ 
 /* line 444: */
GXBAOST = EXBAOST ;
A_CALLPROC(NL(SOBAOST_print),(A_HVEC(HXBAOST,A_UNITE(FXBAOST,mode7,7,GXBAOST),A68_52 )),(A_HVEC(HXBAOST,A_UNITE(FXBAOST,mode7,7,GXBAOST),A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 445: */
IXBAOST.Sort = (-1);
 /* line 446: */
IXBAOST.Value = YNAAOSL_nilstr;
} 
else
{ 
 /* line 447: */
if ( (CXBAOST_val.upb==0) )
{ 
 /* line 448: */
if ( ZNBAOST_debug_reader )
{ 
 /* line 449: */
MXBAOST = KXBAOST ;
A_CALLPROC(NL(SOBAOST_print),(A_HVEC(NXBAOST,A_UNITE(LXBAOST,mode7,7,MXBAOST),A68_52 )),(A_HVEC(NXBAOST,A_UNITE(LXBAOST,mode7,7,MXBAOST),A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 450: */
IXBAOST.Sort = 0;
 /* line 451: */
IXBAOST.Value = EOAAOSL_nullstr;
} 
else
{ 
 /* line 452: */
if ( ZNBAOST_debug_reader )
{ 
 /* line 453: */
QXBAOST = (*(*(&(PWBAOST_analyser->Sort)))) ;
OXBAOST.data[0] = A_UNITE(PXBAOST,mode1,1,QXBAOST);
UXBAOST = SXBAOST ;
OXBAOST.data[1] = A_UNITE(TXBAOST,mode7,7,UXBAOST);
OXBAOST.data[2] = A_UNITE(VXBAOST,mode7,7,CXBAOST_val);
XXBAOST = '\"' ;
OXBAOST.data[3] = A_UNITE(WXBAOST,mode6,6,XXBAOST);
 /* line 454: */
A_CALLPROC(NL(SOBAOST_print),(A_HISVEC(YXBAOST,OXBAOST,4,A68_52 )),(A_HISVEC(YXBAOST,OXBAOST,4,A68_52 ),(NL(SOBAOST_print)).nonlocals));
} 
 /* line 455: */
IXBAOST.Sort = (*(*(&(PWBAOST_analyser->Sort))));
 /* line 456: */
 /* line 457: */
IXBAOST.Value = CXBAOST_val;
} 
} 
} 
 /* line 459: */
ZXBAOST = A_UNITE(AYBAOST,mode2,2,IXBAOST);
break;
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE159)  */
A_UNCPY(BYBAOST_syntax,ZWBAOST);
BYBAOST_syntax.mode -= 1;
 /* line 460: */
 /* line 461: */
 /* line 462: */
 /* line 464: */
A_CALLPROC((*NL(VPBAOST_read_rule)),(BYBAOST_syntax, Expected, &CYBAOST),(BYBAOST_syntax, Expected, &CYBAOST,((*NL(VPBAOST_read_rule))).nonlocals));
ZXBAOST = CYBAOST;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 2: /* STRUCT(BITS,REF MODE159)  */
DYBAOST_rule = (NWBAOST.data.mode2);
 /* line 465: */
{ 
 /* line 466: */
if ( JSAAOST_is_opt(DYBAOST_rule) )
{ 
A_CALLPROC(NL(IUBAOST_alt_or_prod),(DYBAOST_rule, A68_FALSE, &EYBAOST),(DYBAOST_rule, A68_FALSE, &EYBAOST,(NL(IUBAOST_alt_or_prod)).nonlocals));
FYBAOST_p = EYBAOST;
 /* line 467: */
 /* line 468: */
if ( RPBAOST_is_legal(FYBAOST_p) )
{ 
 /* line 469: */
if ( MSAAOST_is_star(DYBAOST_rule) )
{ 
 /* line 470: */
A_CALLPROC(NL(QUBAOST_more_than_one),(DYBAOST_rule, FYBAOST_p, &GYBAOST),(DYBAOST_rule, FYBAOST_p, &GYBAOST,(NL(QUBAOST_more_than_one)).nonlocals));
ZXBAOST = A_UNITE(HYBAOST,mode1,1,GYBAOST);
} 
else
{ 
IYBAOST.Choice = 0;
A_CLOSURE( KYBAOST_generator, LYBAOST_generator, MYBAOST_generator );
 /* line 471: */
A_CALLPROC(KYBAOST_generator,(A68_FALSE, &PYBAOST),(A68_FALSE, &PYBAOST,(KYBAOST_generator).nonlocals));
RYBAOST = A_HVEC(QYBAOST,FYBAOST_p,A68_163 ) ;
A_VASSIGN2(RYBAOST,PYBAOST,A68_163 ) ;
IYBAOST.Params = PYBAOST;
 /* line 472: */
 /* line 473: */
ZXBAOST = A_UNITE(SYBAOST,mode1,1,IYBAOST);
} 
} 
else
{ 
 /* line 474: */
 /* line 475: */
ZXBAOST = FYBAOST_p;
} 
} 
else
{ 
A_CALLPROC(NL(IUBAOST_alt_or_prod),(DYBAOST_rule, Expected, &TYBAOST),(DYBAOST_rule, Expected, &TYBAOST,(NL(IUBAOST_alt_or_prod)).nonlocals));
UYBAOST_p = TYBAOST;
 /* line 476: */
 /* line 477: */
 /* line 478: */
if ( !RPBAOST_is_legal(UYBAOST_p) )
{ 
ZXBAOST = UYBAOST_p;
} 
else
{ 
 /* line 479: */
if ( MSAAOST_is_star(DYBAOST_rule) )
{ 
 /* line 480: */
A_CALLPROC(NL(QUBAOST_more_than_one),(DYBAOST_rule, UYBAOST_p, &VYBAOST),(DYBAOST_rule, UYBAOST_p, &VYBAOST,(NL(QUBAOST_more_than_one)).nonlocals));
ZXBAOST = A_UNITE(WYBAOST,mode1,1,VYBAOST);
} 
else
{ 
XYBAOST.Choice = 0;
A_CLOSURE( ZYBAOST_generator, AZBAOST_generator, BZBAOST_generator );
 /* line 481: */
A_CALLPROC(ZYBAOST_generator,(A68_FALSE, &EZBAOST),(A68_FALSE, &EZBAOST,(ZYBAOST_generator).nonlocals));
GZBAOST = A_HVEC(FZBAOST,UYBAOST_p,A68_163 ) ;
A_VASSIGN2(GZBAOST,EZBAOST,A68_163 ) ;
XYBAOST.Params = EZBAOST;
 /* line 482: */
 /* line 483: */
 /* line 484: */
ZXBAOST = A_UNITE(HZBAOST,mode1,1,XYBAOST);
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
IZBAOST_ans = ZXBAOST;
 /* line 485: */
if ( ZNBAOST_debug_reader )
{ 
A_CALLPROC(NL(IOBAOST_dec_indent),(),((NL(IOBAOST_dec_indent)).nonlocals));
} 
 /* line 486: */
 /* line 487: */
JZBAOST = IZBAOST_ans;
} 
*ReturnedValue = (JZBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  MECAOST_generator(A68_BOOL  KECAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NECAOST_generator *)NonLocals)->x)
{ 
A68_VC  OECAOST;  /* clause result */
A68_VC  PECAOST;  /* OPERATORS - dynamic generator */
{ 
PECAOST.upb = (*VKBAOST_rdcharend) ;
( KECAOST_anonymous? A_VLOC(A68_CHAR ,PECAOST): A_VHEAP(A68_CHAR ,PECAOST) );
OECAOST = PECAOST;
} 
*ReturnedValue = (OECAOST);
return;
} 
#undef NL

A_STATIC A68_CHAR  LFCAOST_first(void *NonLocals)
#define NL(x) (((MFCAOST_first *)NonLocals)->x)
{ 
A68_CHAR  NFCAOST_c;
A68_CHAR  OFCAOST;  /* clause result */
A_PROC_ENTRY(first);
{ 
 /* line 665: */
for ( ;; )
{ 
if ( !(QJBAOST_space(NFCAOST_c = HMBAOST_rdchar(A68_FALSE, NL(Msg)))) ) break;
/*SKIP*/;
}
 /* line 666: */
 /* line 667: */
OFCAOST = NFCAOST_c;
} 
A_PROC_EXIT(first);
return( OFCAOST );
} 
#undef NL

A68_BOOL  FJBAOST_instring(A68_CHAR  C, A68_VC  Str)
{ 
A68_BOOL  GJBAOST_ans;
A68_INT  HJBAOST_i;
A68_INT  IJBAOST;  /* to part of loop */
A68_BOOL  JJBAOST;  /* clause result */
A_PROC_ENTRY(instring);
 /* line 60: */
 /* line 61: */
{ 
GJBAOST_ans = A68_FALSE;
 /* line 62: */
IJBAOST = Str.upb;
for ( HJBAOST_i = 1;
HJBAOST_i <= IJBAOST;
HJBAOST_i += 1 )
{ 
if ( !(!GJBAOST_ans) ) break;
GJBAOST_ans = (A_VINDEX(Str,HJBAOST_i)==C);
}
 /* line 63: */
 /* line 64: */
JJBAOST = GJBAOST_ans;
} 
A_PROC_EXIT(instring);
return( JJBAOST );
} 
#undef NL

A68_BOOL  QJBAOST_space(A68_CHAR  C)
{ 
A68_BOOL  RJBAOST;  /* clause result */
A_PROC_ENTRY(space);
RJBAOST = (C<=KJBAOST_sp);
A_PROC_EXIT(space);
return( RJBAOST );
} 
#undef NL

A68_BOOL  TJBAOST_separator(A68_CHAR  C)
{ 
A68_BOOL  UJBAOST;  /* optbool result */
A68_BOOL  VJBAOST;  /* clause result */
A_PROC_ENTRY(separator);
UJBAOST = (C<=KJBAOST_sp);
if ( ! UJBAOST )
{UJBAOST = (C==LJBAOST_sep);
}
VJBAOST = UJBAOST;
A_PROC_EXIT(separator);
return( VJBAOST );
} 
#undef NL

A68_BOOL  XJBAOST_visible_space(A68_CHAR  C)
{ 
A68_BOOL  YJBAOST;  /* clause result */
A_PROC_ENTRY(visible_space);
YJBAOST = (C=='_');
A_PROC_EXIT(visible_space);
return( YJBAOST );
} 
#undef NL

A68_BOOL  AKBAOST_digit(A68_CHAR  C)
{ 
A68_BOOL  BKBAOST;  /* optbool result */
A68_BOOL  CKBAOST;  /* clause result */
A_PROC_ENTRY(digit);
BKBAOST = (C>='0');
if ( BKBAOST )
{BKBAOST = (C<='9');
}
CKBAOST = BKBAOST;
A_PROC_EXIT(digit);
return( CKBAOST );
} 
#undef NL

A68_BOOL  EKBAOST_letter(A68_CHAR  C)
{ 
A68_BOOL  FKBAOST;  /* optbool result */
A68_BOOL  GKBAOST;  /* clause result */
A_PROC_ENTRY(letter);
FKBAOST = (C>='a');
if ( FKBAOST )
{FKBAOST = (C<='z');
}
GKBAOST = FKBAOST;
A_PROC_EXIT(letter);
return( GKBAOST );
} 
#undef NL

A68_BOOL  IKBAOST_bold(A68_CHAR  C)
{ 
A68_BOOL  JKBAOST;  /* optbool result */
A68_BOOL  KKBAOST;  /* clause result */
A_PROC_ENTRY(bold);
JKBAOST = (C>='A');
if ( JKBAOST )
{JKBAOST = (C<='Z');
}
KKBAOST = JKBAOST;
A_PROC_EXIT(bold);
return( KKBAOST );
} 
#undef NL

A68_CHAR  MKBAOST_upper_case(A68_CHAR  C)
{ 
A68_CHAR  NKBAOST;  /* clause result */
A_PROC_ENTRY(upper_case);
 /* line 85: */
if ( EKBAOST_letter(C) )
{ 
NKBAOST = (A68_CHAR)((A68_INT)(unsigned char)C-32);
} 
else
{ 
NKBAOST = C;
} 
A_PROC_EXIT(upper_case);
return( NKBAOST );
} 
#undef NL

A68_CHAR  PKBAOST_lower_case(A68_CHAR  C)
{ 
A68_CHAR  QKBAOST;  /* clause result */
A_PROC_ENTRY(lower_case);
 /* line 88: */
if ( IKBAOST_bold(C) )
{ 
QKBAOST = (A68_CHAR)((A68_INT)(unsigned char)C+32);
} 
else
{ 
QKBAOST = C;
} 
A_PROC_EXIT(lower_case);
return( QKBAOST );
} 
#undef NL
 /* line 124: */

A68_187 * BLBAOST_set_reader(A68_VC  Buffer, A68_188  Reader)
{ 
A68_INT  CLBAOST;  /* YIELD */
A68_CHAR * DLBAOST;  /* YIELD */
A68_187 * ELBAOST;  /* clause result */
A_PROC_ENTRY(set_reader);
 /* line 125: */
 /* line 128: */
{ 
(*UKBAOST_rdbuffer) = Buffer;
 /* line 129: */
(*TKBAOST_rdline) = Reader;
 /* line 130: */
(*WKBAOST_rdcharno) = (*XKBAOST_start_of_word) = 0;
 /* line 131: */
CLBAOST = (*VKBAOST_rdcharend) = 1 ;
DLBAOST = (&A_VINDEX((*UKBAOST_rdbuffer),CLBAOST)) ;
(*DLBAOST) = LJBAOST_sep;
 /* line 132: */
 /* line 133: */
ELBAOST = (&SKBAOST_current_details);
} 
A_PROC_EXIT(set_reader);
return( ELBAOST );
} 
#undef NL

A68_VOID  GLBAOST_reset_reader(A68_187  Details)
{ 
A_PROC_ENTRY(reset_reader);
 /* line 140: */
SKBAOST_current_details = Details;
A_PROC_EXIT(reset_reader);
return;
} 
#undef NL

A68_VOID  HLBAOST_get_input_lines(A68_102  *ReturnedValue)
{ 
A68_102  ILBAOST_ans;
A68_192  LLBAOST_add;   /* proc value of non-global proc */
A68_INT  YLBAOST;  /* YIELD */
A68_VC  ZLBAOST;  /* OPERATORS - trim index */
A68_VC  AMBAOST;  /* avoid structure result */
A68_VC * BMBAOST;  /* YIELD */
A68_102  CMBAOST;  /* clause result */
A_PROC_ENTRY(get_input_lines);
{ 
 /* line 155: */
A_CLOSURE( LLBAOST_add, MLBAOST_add, NLBAOST_add );
(( NLBAOST_add * ) ( LLBAOST_add.nonlocals )) -> ILBAOST_ans = (&ILBAOST_ans);
(( NLBAOST_add * ) ( LLBAOST_add.nonlocals )) -> LLBAOST_add = LLBAOST_add;
 /* line 162: */
YLBAOST = A_CALLPROC(LLBAOST_add,((*YKBAOST_line_stack), 1),((*YKBAOST_line_stack), 1,(LLBAOST_add).nonlocals)) ;
ZAAAOSI_makervc( A_VTRIM(ZLBAOST,((*UKBAOST_rdbuffer)),A_VTSCRIPT(&(ZLBAOST.upb),((*UKBAOST_rdbuffer)).upb,1,(*WKBAOST_rdcharno))), &AMBAOST );
BMBAOST = (&A_VINDEX(ILBAOST_ans,YLBAOST)) ;
(*BMBAOST) = AMBAOST;
 /* line 163: */
 /* line 164: */
CMBAOST = ILBAOST_ans;
} 
A_PROC_EXIT(get_input_lines);
*ReturnedValue = (CMBAOST);
return;
} 
#undef NL

A68_VOID  DMBAOST_skip_command(void)
{ 
A68_CHAR * EMBAOST;  /* YIELD */
A_PROC_ENTRY(skip_command);
{ 
EMBAOST = (&A_VINDEX((*UKBAOST_rdbuffer),(*VKBAOST_rdcharend))) ;
(*EMBAOST) = LJBAOST_sep;
 /* line 173: */
 /* line 174: */
(*WKBAOST_rdcharno) = ((*VKBAOST_rdcharend)-1);
} 
A_PROC_EXIT(skip_command);
return;
} 
#undef NL

A_STATIC A68_CHAR  HMBAOST_rdchar(A68_BOOL  Stack, A68_97  Msg)
{ 
A68_BOOL  IMBAOST;  /* optbool result */
A68_CHAR * JMBAOST;  /* YIELD */
A68_186  KMBAOST;  /* collateral clause result */
A68_VC  LMBAOST;  /* OPERATORS - trim index */
A68_VC  MMBAOST;  /* avoid structure result */
A68_186 * NMBAOST;  /* YIELD */
A68_BOOL  OMBAOST;  /* optbool result */
A68_BOOL  PMBAOST;  /* optbool result */
A68_INT  QMBAOST;  /* YIELD */
A68_INT  RMBAOST;  /* YIELD */
A68_CHAR * SMBAOST;  /* YIELD */
A68_INT  TMBAOST;  /* YIELD */
A68_CHAR * UMBAOST;  /* YIELD */
A68_CHAR  VMBAOST;  /* clause result */
A68_INT  WMBAOST;  /* YIELD */
A_PROC_ENTRY(rdchar);
 /* line 181: */
 /* line 183: */
{ 
 /* line 184: */
if ( ((*WKBAOST_rdcharno)>=(*VKBAOST_rdcharend)) )
{ 
IMBAOST = Stack;
if ( IMBAOST )
{IMBAOST = ((*VKBAOST_rdcharend)>0);
}
if ( IMBAOST )
{ /* line 185: */
IMBAOST = ((*(&A_VINDEX((*UKBAOST_rdbuffer),(*VKBAOST_rdcharend))))==KJBAOST_sp);
}
 /* line 186: */
if ( IMBAOST )
{ 
JMBAOST = (&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno))) ;
(*JMBAOST) = '.';
 /* line 187: */
 /* line 188: */
ZAAAOSI_makervc( A_VTRIM(LMBAOST,((*UKBAOST_rdbuffer)),A_VTSCRIPT(&(LMBAOST.upb),((*UKBAOST_rdbuffer)).upb,1,((*VKBAOST_rdcharend)+1))), &MMBAOST );
KMBAOST.Line = MMBAOST;
 /* line 189: */
KMBAOST.Rest = (*YKBAOST_line_stack);
NMBAOST = A_HEAP(A68_186 ) ;
(*NMBAOST) = KMBAOST ;
(*YKBAOST_line_stack) = NMBAOST;
} 
 /* line 190: */
(*WKBAOST_rdcharno) = (*XKBAOST_start_of_word) = 0;
 /* line 191: */
(*VKBAOST_rdcharend) = A_CALLPROC((*TKBAOST_rdline),(UKBAOST_rdbuffer, Msg),(UKBAOST_rdbuffer, Msg,((*TKBAOST_rdline)).nonlocals));
 /* line 192: */
for ( ;; )
{ 
OMBAOST = ((*VKBAOST_rdcharend)>=1);
if ( OMBAOST )
{ /* line 193: */
OMBAOST = QJBAOST_space((*(&A_VINDEX((*UKBAOST_rdbuffer),(*VKBAOST_rdcharend)))));
}
if ( !(OMBAOST) ) break;
(*VKBAOST_rdcharend)-=1;
}
 /* line 194: */
PMBAOST = ((*VKBAOST_rdcharend)>=2);
if ( PMBAOST )
{PMBAOST = ((*(&A_VINDEX((*UKBAOST_rdbuffer),(*VKBAOST_rdcharend))))=='.');
}
 /* line 195: */
if ( PMBAOST )
{ /* line 196: */
QMBAOST = ((*VKBAOST_rdcharend)-1) ;
PMBAOST = ((*(&A_VINDEX((*UKBAOST_rdbuffer),QMBAOST)))=='.');
}
if ( PMBAOST )
{ 
 /* line 197: */
 /* line 198: */
RMBAOST = (*VKBAOST_rdcharend)-=1 ;
SMBAOST = (&A_VINDEX((*UKBAOST_rdbuffer),RMBAOST)) ;
(*SMBAOST) = KJBAOST_sp;
} 
else
{ 
 /* line 199: */
 /* line 200: */
TMBAOST = (*VKBAOST_rdcharend)+=1 ;
UMBAOST = (&A_VINDEX((*UKBAOST_rdbuffer),TMBAOST)) ;
(*UMBAOST) = LJBAOST_sep;
} 
} 
 /* line 201: */
 /* line 202: */
WMBAOST = (*WKBAOST_rdcharno)+=1 ;
VMBAOST = (*(&A_VINDEX((*UKBAOST_rdbuffer),WMBAOST)));
} 
A_PROC_EXIT(rdchar);
return( VMBAOST );
} 
#undef NL

A68_CHAR  YMBAOST_next_char(A68_97  Msg)
{ 
A68_CHAR  ZMBAOST;  /* clause result */
A_PROC_ENTRY(next_char);
 /* line 207: */
if ( ((*WKBAOST_rdcharno)==(*VKBAOST_rdcharend)) )
{ 
ZMBAOST = KJBAOST_sp;
} 
else
{ 
ZMBAOST = HMBAOST_rdchar(A68_TRUE, Msg);
} 
A_PROC_EXIT(next_char);
return( ZMBAOST );
} 
#undef NL

A68_CHAR  BNBAOST_first_char(A68_97  Msg)
{ 
A68_CHAR  CNBAOST_c;
A68_CHAR  DNBAOST;  /* clause result */
A_PROC_ENTRY(first_char);
 /* line 211: */
 /* line 213: */
{ 
 /* line 214: */
for ( ;; )
{ 
if ( !(QJBAOST_space(CNBAOST_c = HMBAOST_rdchar(A68_TRUE, Msg))) ) break;
/*SKIP*/;
}
 /* line 216: */
(*XKBAOST_start_of_word) = ((*WKBAOST_rdcharno)-1);
 /* line 217: */
 /* line 218: */
DNBAOST = CNBAOST_c;
} 
A_PROC_EXIT(first_char);
return( DNBAOST );
} 
#undef NL

A68_CHAR  FNBAOST_next_first_char(A68_97  Msg)
{ 
A68_CHAR  GNBAOST_c;
A68_CHAR  HNBAOST;  /* clause result */
A_PROC_ENTRY(next_first_char);
 /* line 221: */
 /* line 226: */
{ 
GNBAOST_c = HMBAOST_rdchar(A68_TRUE, Msg);
 /* line 227: */
(*XKBAOST_start_of_word) = ((*WKBAOST_rdcharno)-1);
 /* line 228: */
 /* line 229: */
HNBAOST = GNBAOST_c;
} 
A_PROC_EXIT(next_first_char);
return( HNBAOST );
} 
#undef NL

A68_VOID  JNBAOST_put_back_char(A68_97  Msg)
{ 
A68_46  MNBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put_back_char);
 /* line 234: */
 /* line 235: */
if ( ((*WKBAOST_rdcharno)==0) )
{ 
 /* line 236: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(MNBAOST,LNBAOST,A68_VC )),(SHAAOSI_system, A_HVEC(MNBAOST,LNBAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 237: */
(*WKBAOST_rdcharno)-=1;
} 
A_PROC_EXIT(put_back_char);
return;
} 
#undef NL

A68_CHAR  ONBAOST_same_char(A68_97  Msg)
{ 
A68_46  RNBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  SNBAOST;  /* clause result */
A_PROC_ENTRY(same_char);
 /* line 241: */
 /* line 242: */
if ( ((*WKBAOST_rdcharno)==0) )
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(RNBAOST,QNBAOST,A68_VC )),(SHAAOSI_system, A_HVEC(RNBAOST,QNBAOST,A68_VC ),(Msg).nonlocals));
 /* line 243: */
SNBAOST = '\000';
} 
else
{ 
 /* line 244: */
SNBAOST = (*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno))));
} 
A_PROC_EXIT(same_char);
return( SNBAOST );
} 
#undef NL

A68_BOOL  UNBAOST_check_for_more(A68_97  Msg)
{ 
A68_CHAR  VNBAOST_c;
A68_BOOL  WNBAOST;  /* clause result */
A_PROC_ENTRY(check_for_more);
 /* line 249: */
 /* line 251: */
{ 
 /* line 252: */
for ( ;; )
{ 
if ( !(QJBAOST_space(VNBAOST_c = HMBAOST_rdchar(A68_TRUE, Msg))) ) break;
/*SKIP*/;
}
 /* line 253: */
 /* line 254: */
if ( (VNBAOST_c==LJBAOST_sep) )
{ 
(*WKBAOST_rdcharno)-=1;
 /* line 255: */
 /* line 256: */
 /* line 257: */
WNBAOST = A68_FALSE;
} 
else
{ 
for ( ;; )
{ 
if ( !(!TJBAOST_separator(YMBAOST_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 258: */
(*WKBAOST_rdcharno)-=1;
 /* line 259: */
 /* line 260: */
 /* line 261: */
WNBAOST = A68_TRUE;
} 
} 
A_PROC_EXIT(check_for_more);
return( WNBAOST );
} 
#undef NL

A68_VOID  YNBAOST_skip_parameter(A68_97  Msg)
{ 
A_PROC_ENTRY(skip_parameter);
 /* line 265: */
 /* line 268: */
{ 
for ( ;; )
{ 
if ( !(!TJBAOST_separator(YMBAOST_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 269: */
 /* line 270: */
(*WKBAOST_rdcharno)-=1;
} 
A_PROC_EXIT(skip_parameter);
return;
} 
#undef NL
 /* line 277: */
 /* line 279: */

A68_VOID  DOBAOST_read_parameters(A68_174  Analysers, A68_160  Syntax, A68_97  Msg, A68_163  *ReturnedValue)
{ 
A68_INT  EOBAOST_indent;
A68_143  FOBAOST_inc_indent;   /* proc value of non-global proc */
A68_143  IOBAOST_dec_indent;   /* proc value of non-global proc */
A68_200  MOBAOST_show;   /* proc value of non-global proc */
A68_201  SOBAOST_print;   /* proc value of non-global proc */
A68_202  BPBAOST;  /* collateral clause result */
A68_52  EPBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  FPBAOST;  /* YIELD */
A68_VC  GPBAOST;  /* avoid structure result */
A68_52  HPBAOST;  /* OPERATORS - mode -> union mode */
A68_85  IPBAOST;  /* OPERATORS - istruct -> vector */
A68_161  JPBAOST;  /* collateral clause result */
A68_161  KPBAOST_illegal;
A68_205  VPBAOST_read_rule;
A68_206  YPBAOST_error;   /* proc value of non-global proc */
A68_210  SQBAOST_alternative;   /* proc value of non-global proc */
A68_210  TSBAOST_product;   /* proc value of non-global proc */
A68_213  IUBAOST_alt_or_prod;   /* proc value of non-global proc */
A68_214  QUBAOST_more_than_one;   /* proc value of non-global proc */
A68_205  BWBAOST_anonymous;   /* proc value of non-global proc */
A68_160  KZBAOST;  /* united object - for case conformity */
A68_INT * LZBAOST_index;
A68_BOOL  MZBAOST;  /* clause result */
A68_46  PZBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_163  QZBAOST;  /* clause result */
A68_163  RZBAOST;  /* avoid structure result */
A68_163  SZBAOST_param;
A68_160  TZBAOST;  /* united object - for case conformity */
A68_BOOL  UZBAOST;  /* clause result */
A68_BOOL  VZBAOST;  /* clause result */
A68_209  WZBAOST;  /* collateral clause result */
A68_52  ZZBAOST;  /* OPERATORS - mode -> union mode */
A68_VC  AACAOST;  /* YIELD */
A68_VC  BACAOST;  /* avoid structure result */
A68_52  CACAOST;  /* OPERATORS - mode -> union mode */
A68_52  FACAOST;  /* OPERATORS - mode -> union mode */
A68_VC  GACAOST;  /* YIELD */
A68_85  HACAOST;  /* OPERATORS - istruct -> vector */
A68_VC  IACAOST;  /* avoid structure result */
A68_46  JACAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  MACAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_163  NACAOST_ans;
A68_202  OACAOST;  /* collateral clause result */
A68_52  RACAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SACAOST;  /* YIELD */
A68_52  TACAOST;  /* OPERATORS - mode -> union mode */
A68_56  UACAOST;  /* procedure value */
A68_85  VACAOST;  /* OPERATORS - istruct -> vector */
A68_163  WACAOST;  /* clause result */
A_PROC_ENTRY(read_parameters);
 /* line 280: */
 /* line 289: */
{ 
EOBAOST_indent = 0;
 /* line 290: */
A_CLOSURE( FOBAOST_inc_indent, GOBAOST_inc_indent, HOBAOST_inc_indent );
(( HOBAOST_inc_indent * ) ( FOBAOST_inc_indent.nonlocals )) -> EOBAOST_indent = (&EOBAOST_indent);
 /* line 291: */
A_CLOSURE( IOBAOST_dec_indent, JOBAOST_dec_indent, KOBAOST_dec_indent );
(( KOBAOST_dec_indent * ) ( IOBAOST_dec_indent.nonlocals )) -> EOBAOST_indent = (&EOBAOST_indent);
 /* line 292: */
A_CLOSURE( MOBAOST_show, NOBAOST_show, OOBAOST_show );
(( OOBAOST_show * ) ( MOBAOST_show.nonlocals )) -> Analysers = Analysers;
 /* line 294: */
A_CLOSURE( SOBAOST_print, TOBAOST_print, UOBAOST_print );
(( UOBAOST_print * ) ( SOBAOST_print.nonlocals )) -> EOBAOST_indent = (&EOBAOST_indent);
 /* line 297: */
if ( ZNBAOST_debug_reader )
{ 
FPBAOST = DPBAOST ;
BPBAOST.data[0] = A_UNITE(EPBAOST,mode7,7,FPBAOST);
A_CALLPROC(MOBAOST_show,(Syntax, &GPBAOST),(Syntax, &GPBAOST,(MOBAOST_show).nonlocals));
BPBAOST.data[1] = A_UNITE(HPBAOST,mode7,7,GPBAOST);
A_CALLPROC(SOBAOST_print,(A_HISVEC(IPBAOST,BPBAOST,2,A68_52 )),(A_HISVEC(IPBAOST,BPBAOST,2,A68_52 ),(SOBAOST_print).nonlocals));
} 
 /* line 299: */
JPBAOST.Sort = (-1);
JPBAOST.Value = YNAAOSL_nilstr;
KPBAOST_illegal = JPBAOST;
 /* line 301: */
 /* line 304: */
 /* line 308: */
 /* line 310: */
A_CLOSURE( YPBAOST_error, ZPBAOST_error, AQBAOST_error );
(( AQBAOST_error * ) ( YPBAOST_error.nonlocals )) -> Msg = Msg;
(( AQBAOST_error * ) ( YPBAOST_error.nonlocals )) -> Analysers = Analysers;
 /* line 320: */
A_CLOSURE( SQBAOST_alternative, TQBAOST_alternative, UQBAOST_alternative );
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> FOBAOST_inc_indent = FOBAOST_inc_indent;
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> SOBAOST_print = SOBAOST_print;
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> MOBAOST_show = MOBAOST_show;
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> KPBAOST_illegal = KPBAOST_illegal;
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> VPBAOST_read_rule = (&VPBAOST_read_rule);
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> IOBAOST_dec_indent = IOBAOST_dec_indent;
(( UQBAOST_alternative * ) ( SQBAOST_alternative.nonlocals )) -> YPBAOST_error = YPBAOST_error;
 /* line 347: */
A_CLOSURE( TSBAOST_product, USBAOST_product, VSBAOST_product );
(( VSBAOST_product * ) ( TSBAOST_product.nonlocals )) -> FOBAOST_inc_indent = FOBAOST_inc_indent;
(( VSBAOST_product * ) ( TSBAOST_product.nonlocals )) -> SOBAOST_print = SOBAOST_print;
(( VSBAOST_product * ) ( TSBAOST_product.nonlocals )) -> MOBAOST_show = MOBAOST_show;
(( VSBAOST_product * ) ( TSBAOST_product.nonlocals )) -> VPBAOST_read_rule = (&VPBAOST_read_rule);
(( VSBAOST_product * ) ( TSBAOST_product.nonlocals )) -> YPBAOST_error = YPBAOST_error;
(( VSBAOST_product * ) ( TSBAOST_product.nonlocals )) -> IOBAOST_dec_indent = IOBAOST_dec_indent;
 /* line 387: */
A_CLOSURE( IUBAOST_alt_or_prod, JUBAOST_alt_or_prod, KUBAOST_alt_or_prod );
(( KUBAOST_alt_or_prod * ) ( IUBAOST_alt_or_prod.nonlocals )) -> SQBAOST_alternative = SQBAOST_alternative;
(( KUBAOST_alt_or_prod * ) ( IUBAOST_alt_or_prod.nonlocals )) -> TSBAOST_product = TSBAOST_product;
 /* line 394: */
A_CLOSURE( QUBAOST_more_than_one, RUBAOST_more_than_one, SUBAOST_more_than_one );
(( SUBAOST_more_than_one * ) ( QUBAOST_more_than_one.nonlocals )) -> FOBAOST_inc_indent = FOBAOST_inc_indent;
(( SUBAOST_more_than_one * ) ( QUBAOST_more_than_one.nonlocals )) -> SOBAOST_print = SOBAOST_print;
(( SUBAOST_more_than_one * ) ( QUBAOST_more_than_one.nonlocals )) -> MOBAOST_show = MOBAOST_show;
(( SUBAOST_more_than_one * ) ( QUBAOST_more_than_one.nonlocals )) -> IUBAOST_alt_or_prod = IUBAOST_alt_or_prod;
(( SUBAOST_more_than_one * ) ( QUBAOST_more_than_one.nonlocals )) -> IOBAOST_dec_indent = IOBAOST_dec_indent;
 /* line 420: */
A_CLOSURE( BWBAOST_anonymous, CWBAOST_anonymous, DWBAOST_anonymous );
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> FOBAOST_inc_indent = FOBAOST_inc_indent;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> SOBAOST_print = SOBAOST_print;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> MOBAOST_show = MOBAOST_show;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> Analysers = Analysers;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> Msg = Msg;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> VPBAOST_read_rule = (&VPBAOST_read_rule);
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> IUBAOST_alt_or_prod = IUBAOST_alt_or_prod;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> QUBAOST_more_than_one = QUBAOST_more_than_one;
(( DWBAOST_anonymous * ) ( BWBAOST_anonymous.nonlocals )) -> IOBAOST_dec_indent = IOBAOST_dec_indent;
VPBAOST_read_rule = BWBAOST_anonymous;
 /* line 491: */
 /* line 492: */
KZBAOST = Syntax ;
switch ( KZBAOST.mode )
{ 
case 1: /* REF INT */
LZBAOST_index = (KZBAOST.data.mode1);
MZBAOST = ((*LZBAOST_index)==0);
break;
default: 
 /* line 493: */
MZBAOST = A68_FALSE;
break;
} 
if ( MZBAOST )
{ 
 /* line 494: */
if ( UNBAOST_check_for_more(Msg) )
{ 
 /* line 495: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(PZBAOST,OZBAOST,A68_VC )),(WHAAOSI_user, A_HVEC(PZBAOST,OZBAOST,A68_VC ),(Msg).nonlocals));
} 
 /* line 496: */
 /* line 497: */
QZBAOST = ASAAOST_no_parameters;
} 
else
{ 
A_CALLPROC(VPBAOST_read_rule,(Syntax, A68_TRUE, &RZBAOST),(Syntax, A68_TRUE, &RZBAOST,(VPBAOST_read_rule).nonlocals));
SZBAOST_param = RZBAOST;
 /* line 498: */
 /* line 500: */
TZBAOST = Syntax ;
switch ( TZBAOST.mode )
{ 
case 1: /* REF INT */
UZBAOST = A68_TRUE;
break;
default: 
 /* line 501: */
UZBAOST = A68_FALSE;
break;
} 
if ( UZBAOST )
{ /* line 502: */
UZBAOST = !RPBAOST_is_legal(SZBAOST_param);
}
VZBAOST = UZBAOST;
if ( VZBAOST )
{ 
 /* line 503: */
A_CALLPROC(YPBAOST_error,(Syntax, SZBAOST_param),(Syntax, SZBAOST_param,(YPBAOST_error).nonlocals));
} 
else
{ 
 /* line 504: */
if ( UNBAOST_check_for_more(Msg) )
{ 
 /* line 505: */
if ( MPBAOST_is_illegal(SZBAOST_param) )
{ 
 /* line 506: */
 /* line 507: */
AACAOST = YZBAOST ;
WZBAOST.data[0] = A_UNITE(ZZBAOST,mode7,7,AACAOST);
 /* line 508: */
WUAAOST_show_syntax( Syntax, Analysers, &BACAOST );
WZBAOST.data[1] = A_UNITE(CACAOST,mode7,7,BACAOST);
GACAOST = EACAOST ;
WZBAOST.data[2] = A_UNITE(FACAOST,mode7,7,GACAOST);
 /* line 509: */
 /* line 510: */
UJBAOSL_oneline( A_HISVEC(HACAOST,WZBAOST,3,A68_52 ), &IACAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(JACAOST,IACAOST,A68_VC )),(WHAAOSI_user, A_HVEC(JACAOST,IACAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 511: */
 /* line 512: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(MACAOST,LACAOST,A68_VC )),(WHAAOSI_user, A_HVEC(MACAOST,LACAOST,A68_VC ),(Msg).nonlocals));
} 
} 
} 
 /* line 513: */
if ( RPBAOST_is_legal(SZBAOST_param) )
{ 
QZBAOST = SZBAOST_param;
} 
else
{ 
 /* line 514: */
QZBAOST = ASAAOST_no_parameters;
} 
} 
NACAOST_ans = QZBAOST;
 /* line 515: */
if ( ZNBAOST_debug_reader )
{ 
SACAOST = QACAOST ;
OACAOST.data[0] = A_UNITE(RACAOST,mode7,7,SACAOST);
UACAOST.fn.fn_global = LRAAOSL_newline;
UACAOST.nonlocals = A68_NIL;
OACAOST.data[1] = A_UNITE(TACAOST,mode12,12,UACAOST);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VACAOST,OACAOST,2,A68_52 ));
} 
 /* line 516: */
 /* line 517: */
WACAOST = NACAOST_ans;
} 
A_PROC_EXIT(read_parameters);
*ReturnedValue = (WACAOST);
return;
} 
#undef NL

A68_VOID  XACAOST_read_failed(A68_VC  *ReturnedValue)
{ 
A68_VC  YACAOST;  /* clause result */
A_PROC_ENTRY(read_failed);
{ 
(*WKBAOST_rdcharno) = (*XKBAOST_start_of_word);
 /* line 525: */
 /* line 526: */
YACAOST = YNAAOSL_nilstr;
} 
A_PROC_EXIT(read_failed);
*ReturnedValue = (YACAOST);
return;
} 
#undef NL

A68_VOID  ZACAOST_nothing_read(A68_VC  *ReturnedValue)
{ 
A68_BOOL  ABCAOST;  /* optbool result */
A68_VC  BBCAOST;  /* clause result */
A68_VC  CBCAOST;  /* avoid structure result */
A_PROC_ENTRY(nothing_read);
ABCAOST = ((*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno))))==LJBAOST_sep);
if ( ABCAOST )
{ /* line 532: */
ABCAOST = ((*WKBAOST_rdcharno)<=((*XKBAOST_start_of_word)+1));
}
if ( ABCAOST )
{ 
(*WKBAOST_rdcharno)-=1;
 /* line 533: */
 /* line 534: */
 /* line 535: */
BBCAOST = EOAAOSL_nullstr;
} 
else
{ 
XACAOST_read_failed(  &CBCAOST );
BBCAOST = CBCAOST;
} 
A_PROC_EXIT(nothing_read);
*ReturnedValue = (BBCAOST);
return;
} 
#undef NL

A68_VOID  GBCAOST_check_read(A68_VC  Word_read, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  HBCAOST_c;
A68_BOOL  IBCAOST;  /* clause result */
A68_VC  JBCAOST;  /* clause result */
A68_221  KBCAOST;  /* collateral clause result */
A68_52  NBCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OBCAOST;  /* YIELD */
A68_52  PBCAOST;  /* OPERATORS - mode -> union mode */
A68_52  SBCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  TBCAOST;  /* YIELD */
A68_52  UBCAOST;  /* OPERATORS - mode -> union mode */
A68_85  VBCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  WBCAOST;  /* avoid structure result */
A68_46  XBCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_read);
 /* line 542: */
{ 
HBCAOST_c = (*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno))));
 /* line 543: */
 /* line 544: */
 /* line 545: */
IBCAOST = TJBAOST_separator(HBCAOST_c);
if ( IBCAOST )
{ 
if ( (HBCAOST_c==LJBAOST_sep) )
{ 
(*WKBAOST_rdcharno)-=1;
} 
 /* line 547: */
 /* line 548: */
JBCAOST = Word_read;
} 
else
{ 
for ( ;; )
{ 
if ( !(!TJBAOST_separator(YMBAOST_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 549: */
(*WKBAOST_rdcharno)-=1;
 /* line 550: */
 /* line 551: */
if ( (Name.upb>0) )
{ 
 /* line 552: */
OBCAOST = MBCAOST ;
KBCAOST.data[0] = A_UNITE(NBCAOST,mode7,7,OBCAOST);
KBCAOST.data[1] = A_UNITE(PBCAOST,mode6,6,HBCAOST_c);
TBCAOST = RBCAOST ;
KBCAOST.data[2] = A_UNITE(SBCAOST,mode7,7,TBCAOST);
KBCAOST.data[3] = A_UNITE(UBCAOST,mode7,7,Name);
 /* line 553: */
UJBAOSL_oneline( A_HISVEC(VBCAOST,KBCAOST,4,A68_52 ), &WBCAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(XBCAOST,WBCAOST,A68_VC )),(WHAAOSI_user, A_HVEC(XBCAOST,WBCAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 554: */
(*WKBAOST_rdcharno) = (*XKBAOST_start_of_word);
} 
 /* line 555: */
 /* line 556: */
JBCAOST = YNAAOSL_nilstr;
} 
} 
A_PROC_EXIT(check_read);
*ReturnedValue = (JBCAOST);
return;
} 
#undef NL

A68_VOID  BCCAOST_check_value(A68_161  V, A68_INT  No, A68_97  Msg)
{ 
A68_202  CCCAOST;  /* collateral clause result */
A68_52  FCCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  GCCAOST;  /* YIELD */
A68_52  HCCAOST;  /* OPERATORS - mode -> union mode */
A68_INT  ICCAOST;  /* YIELD */
A68_85  JCCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  KCCAOST;  /* avoid structure result */
A68_46  LCCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_value);
 /* line 562: */
 /* line 563: */
if ( (V.Sort!=No) )
{ 
GCCAOST = ECCAOST ;
CCCAOST.data[0] = A_UNITE(FCCAOST,mode7,7,GCCAOST);
ICCAOST = V.Sort ;
CCCAOST.data[1] = A_UNITE(HCCAOST,mode1,1,ICCAOST);
 /* line 564: */
UJBAOSL_oneline( A_HISVEC(JCCAOST,CCCAOST,2,A68_52 ), &KCCAOST );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(LCCAOST,KCCAOST,A68_VC )),(SHAAOSI_system, A_HVEC(LCCAOST,KCCAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(check_value);
return;
} 
#undef NL

A68_VOID  XCCAOST_read_token(A68_230  Rc, A68_VC  Token, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  YCCAOST;  /* clause result */
A68_CHAR  ZCCAOST_c;
A68_INT  ADCAOST;  /* YIELD */
A68_BOOL  BDCAOST_ok;
A68_CHAR  CDCAOST_char;
A68_VC  DDCAOST;  /* OPERATORS - trim index */
A68_VC  EDCAOST;  /* forall yield */
A68_CHAR * FDCAOST;  /* forall control - []x */
A68_INT  GDCAOST;  /* forall loop counter */
A68_VC  HDCAOST;  /* avoid structure result */
A68_VC  IDCAOST_ans;
A68_VC  JDCAOST;  /* clause result */
A68_VC  KDCAOST;  /* avoid structure result */
A68_VC  LDCAOST;  /* avoid structure result */
A68_VC  MDCAOST;  /* avoid structure result */
A_PROC_ENTRY(read_token);
 /* line 575: */
 /* line 578: */
{ 
if ( Rc.Get_first )
{ 
YCCAOST = BNBAOST_first_char(Msg);
} 
else
{ 
YCCAOST = FNBAOST_next_first_char(Msg);
} 
ZCCAOST_c = YCCAOST;
 /* line 579: */
 /* line 580: */
ADCAOST = 1 ;
if ( (MKBAOST_upper_case(ZCCAOST_c)==A_VINDEX(Token,ADCAOST)) )
{ 
BDCAOST_ok = A68_TRUE;
 /* line 581: */
EDCAOST = A_VTRIM(DDCAOST,(Token),A_VTSCRIPT(&(DDCAOST.upb),(Token).upb,2,(Token).upb)) ;
GDCAOST = EDCAOST.upb -1;
FDCAOST = EDCAOST.data;
for (;GDCAOST-- >= 0;
(FDCAOST++
) )
{
CDCAOST_char = *FDCAOST;
 /* line 582: */
if ( !(BDCAOST_ok) ) break;
BDCAOST_ok = (MKBAOST_upper_case(YMBAOST_next_char(Msg))==CDCAOST_char);
}
 /* line 583: */
 /* line 584: */
if ( BDCAOST_ok )
{ 
ZAAAOSI_makervc( Token, &HDCAOST );
IDCAOST_ans = HDCAOST;
 /* line 585: */
YMBAOST_next_char(Msg);
 /* line 586: */
if ( Rc.Check )
{ 
GBCAOST_check_read( IDCAOST_ans, Token, Msg, &KDCAOST );
JDCAOST = KDCAOST;
} 
else
{ 
 /* line 587: */
 /* line 588: */
JDCAOST = IDCAOST_ans;
} 
} 
else
{ 
 /* line 589: */
 /* line 590: */
XACAOST_read_failed(  &LDCAOST );
JDCAOST = LDCAOST;
} 
} 
else
{ 
 /* line 591: */
ZACAOST_nothing_read(  &MDCAOST );
JDCAOST = MDCAOST;
} 
} 
A_PROC_EXIT(read_token);
*ReturnedValue = (JDCAOST);
return;
} 
#undef NL

A68_VOID  PDCAOST_read_char(A68_CHAR  Char, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  QDCAOST;  /* clause result */
A68_VC  RDCAOST;  /* avoid structure result */
A68_VC  SDCAOST;  /* avoid structure result */
A_PROC_ENTRY(read_char);
 /* line 597: */
 /* line 598: */
 /* line 599: */
if ( (BNBAOST_first_char(Msg)==Char) )
{ 
 /* line 600: */
NAAAOSI_makervc( Char, &RDCAOST );
QDCAOST = RDCAOST;
} 
else
{ 
ZACAOST_nothing_read(  &SDCAOST );
QDCAOST = SDCAOST;
} 
A_PROC_EXIT(read_char);
*ReturnedValue = (QDCAOST);
return;
} 
#undef NL

A68_VOID  DECAOST_read_command_name(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  EECAOST_c;
A68_INT  FECAOST_index;
A68_BOOL  GECAOST;  /* optbool result */
A68_VC  HECAOST;  /* clause result */
A68_VC  IECAOST;  /* avoid structure result */
A68_BOOL  JECAOST;  /* optbool result */
A68_31  LECAOST_generator;   /* proc value of non-global proc */
A68_VC  RECAOST;  /* avoid structure result */
A68_VC  QECAOST_ans;
A68_BOOL  SECAOST;  /* optbool result */
A68_CHAR  TECAOST;  /* clause result */
A68_INT  UECAOST;  /* YIELD */
A68_CHAR * VECAOST;  /* YIELD */
A68_VC  WECAOST;  /* OPERATORS - trim index */
A68_VC  XECAOST;  /* avoid structure result */
A68_VC  YECAOST;  /* avoid structure result */
A68_VC  ZECAOST;  /* avoid structure result */
A_PROC_ENTRY(read_command_name);
 /* line 617: */
 /* line 618: */
{ 
EECAOST_c = BNBAOST_first_char(Msg);
 /* line 619: */
FECAOST_index = 0;
 /* line 620: */
GECAOST = (EECAOST_c=='!');
if ( ! GECAOST )
{ /* line 621: */
GECAOST = (EECAOST_c=='$');
}
 /* line 623: */
if ( GECAOST )
{ 
NAAAOSI_makervc( EECAOST_c, &IECAOST );
HECAOST = IECAOST;
} 
else
{ 
JECAOST = EKBAOST_letter(EECAOST_c);
if ( ! JECAOST )
{ /* line 624: */
JECAOST = IKBAOST_bold(EECAOST_c);
}
if ( JECAOST )
{ 
A_CLOSURE( LECAOST_generator, MECAOST_generator, NECAOST_generator );
A_CALLPROC(LECAOST_generator,(A68_TRUE, &RECAOST),(A68_TRUE, &RECAOST,(LECAOST_generator).nonlocals));
QECAOST_ans = RECAOST;
 /* line 625: */
for ( ;; )
{ 
SECAOST = EKBAOST_letter(EECAOST_c);
if ( ! SECAOST )
{SECAOST = IKBAOST_bold(EECAOST_c);
}
if ( ! SECAOST )
{SECAOST = AKBAOST_digit(EECAOST_c);
}
 /* line 626: */
if ( ! SECAOST )
{ /* line 627: */
SECAOST = XJBAOST_visible_space(EECAOST_c);
}
if ( !(SECAOST) ) break;
 /* line 628: */
if ( EKBAOST_letter(EECAOST_c) )
{ 
TECAOST = MKBAOST_upper_case(EECAOST_c);
} 
else
{ 
TECAOST = EECAOST_c;
} 
UECAOST = FECAOST_index+=1 ;
VECAOST = (&A_VINDEX(QECAOST_ans,UECAOST)) ;
(*VECAOST) = TECAOST;
 /* line 629: */
 /* line 630: */
EECAOST_c = YMBAOST_next_char(Msg);
}
 /* line 631: */
 /* line 632: */
 /* line 633: */
ZAAAOSI_makervc( A_VTRIM(WECAOST,(QECAOST_ans),A_VTSCRIPT(&(WECAOST.upb),(QECAOST_ans).upb,1,FECAOST_index)), &XECAOST );
GBCAOST_check_read( XECAOST, VDCAOST_command_name_str, Msg, &YECAOST );
HECAOST = YECAOST;
} 
else
{ 
 /* line 635: */
 /* line 636: */
ZACAOST_nothing_read(  &ZECAOST );
HECAOST = ZECAOST;
} 
} 
} 
A_PROC_EXIT(read_command_name);
*ReturnedValue = (HECAOST);
return;
} 
#undef NL

A68_BOOL  BFCAOST_is_command_name(A68_161  V)
{ 
A68_BOOL  CFCAOST;  /* clause result */
A_PROC_ENTRY(is_command_name);
CFCAOST = (V.Sort==ZDCAOST_command_name_no);
A_PROC_EXIT(is_command_name);
return( CFCAOST );
} 
#undef NL

A68_VOID  FFCAOST_get_command_name(A68_161  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  GFCAOST;  /* clause result */
A_PROC_ENTRY(get_command_name);
 /* line 643: */
 /* line 644: */
{ 
BCCAOST_check_value(V, ZDCAOST_command_name_no, Msg);
 /* line 645: */
 /* line 646: */
GFCAOST = V.Value;
} 
A_PROC_EXIT(get_command_name);
*ReturnedValue = (GFCAOST);
return;
} 
#undef NL

A68_VOID  IFCAOST_read_command(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_236  KFCAOST_first;   /* proc value of non-global proc */
A68_VC  PFCAOST_command;
A68_BOOL  QFCAOST;  /* optbool result */
A68_VC  RFCAOST;  /* avoid structure result */
A68_BOOL  SFCAOST;  /* optbool result */
A68_BOOL  TFCAOST;  /* clause result */
A68_202  UFCAOST;  /* collateral clause result */
A68_52  VFCAOST;  /* OPERATORS - mode -> union mode */
A68_52  YFCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZFCAOST;  /* YIELD */
A68_85  AGCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  BGCAOST;  /* avoid structure result */
A68_46  CGCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DGCAOST;  /* clause result */
A_PROC_ENTRY(read_command);
 /* line 655: */
 /* line 659: */
{ 
(*YKBAOST_line_stack) = RKBAOST_no_lines;
 /* line 661: */
 /* line 662: */
 /* line 664: */
A_CLOSURE( KFCAOST_first, LFCAOST_first, MFCAOST_first );
(( MFCAOST_first * ) ( KFCAOST_first.nonlocals )) -> Msg = Msg;
 /* line 669: */
 /* line 671: */
 /* line 672: */
QFCAOST = (A_CALLPROC(KFCAOST_first,(),((KFCAOST_first).nonlocals))!=LJBAOST_sep);
if ( ! QFCAOST )
{{ 
for ( ;; )
{ 
if ( !((A_CALLPROC(KFCAOST_first,(),((KFCAOST_first).nonlocals))==LJBAOST_sep)) ) break;
/*SKIP*/;
}
 /* line 673: */
(*WKBAOST_rdcharno)-=1;
 /* line 674: */
DECAOST_read_command_name( Msg, &RFCAOST );
PFCAOST_command = RFCAOST;
 /* line 675: */
SFCAOST = A_VSTRUCTCOMP(PFCAOST_command,YNAAOSL_nilstr);
if ( ! SFCAOST )
{ /* line 676: */
SFCAOST = (PFCAOST_command.upb==0);
}
 /* line 677: */
TFCAOST = SFCAOST;
} 
QFCAOST = TFCAOST;
}
if ( QFCAOST )
{ 
UFCAOST.data[0] = A_UNITE(VFCAOST,mode7,7,VDCAOST_command_name_str);
ZFCAOST = XFCAOST ;
UFCAOST.data[1] = A_UNITE(YFCAOST,mode7,7,ZFCAOST);
 /* line 678: */
UJBAOSL_oneline( A_HISVEC(AGCAOST,UFCAOST,2,A68_52 ), &BGCAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(CGCAOST,BGCAOST,A68_VC )),(WHAAOSI_user, A_HVEC(CGCAOST,BGCAOST,A68_VC ),(Msg).nonlocals));
} 
 /* line 679: */
 /* line 680: */
 /* line 684: */
DGCAOST = PFCAOST_command;
} 
A_PROC_EXIT(read_command);
*ReturnedValue = (DGCAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void YIBAOST(void)   /* initialise DECS commandreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/commandreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/commandsyntax.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_230  MCCAOST;  /* collateral clause result */
A68_230  OCCAOST;  /* collateral clause result */
A68_230  QCCAOST;  /* collateral clause result */
A68_230  SCCAOST;  /* collateral clause result */
A68_160  AECAOST;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
LRAAOST();   /* USE commandsyntax */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/commandreader.a68";
A_config.translation_time = "Tue Apr  4 09:49:20 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XIBAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:20 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandreader);
UEAALIB_a68config(LGAALIB_configinfo, CJBAOST);
 /* line 59: */
 /* line 67: */
 /* line 68: */
OJBAOST_arrow_str = NJBAOST;
 /* line 71: */
 /* line 74: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 82: */
 /* line 84: */
 /* line 87: */
 /* line 105: */
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 115: */
TKBAOST_rdline = (&((&SKBAOST_current_details)->Rdline));
 /* line 116: */
UKBAOST_rdbuffer = (&((&SKBAOST_current_details)->Rdbuffer));
 /* line 117: */
VKBAOST_rdcharend = (&((&SKBAOST_current_details)->Rdcharend));
 /* line 118: */
WKBAOST_rdcharno = (&((&SKBAOST_current_details)->Rdcharno));
 /* line 119: */
XKBAOST_start_of_word = (&((&SKBAOST_current_details)->Start_of_word));
 /* line 120: */
YKBAOST_line_stack = (&((&SKBAOST_current_details)->Stack));
 /* line 123: */
 /* line 135: */
 /* line 144: */
 /* line 145: */
 /* line 154: */
 /* line 167: */
 /* line 168: */
 /* line 172: */
 /* line 180: */
 /* line 205: */
 /* line 210: */
 /* line 220: */
 /* line 233: */
 /* line 240: */
 /* line 248: */
 /* line 264: */
 /* line 274: */
ZNBAOST_debug_reader = A68_FALSE;
 /* line 276: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
 /* line 529: */
 /* line 531: */
 /* line 538: */
 /* line 561: */
 /* line 568: */
 /* line 569: */
MCCAOST.Get_first = A68_TRUE;
MCCAOST.Check = A68_TRUE;
NCCAOST_first_and_check = MCCAOST;
OCCAOST.Get_first = A68_TRUE;
OCCAOST.Check = A68_FALSE;
PCCAOST_get_first = OCCAOST;
 /* line 570: */
QCCAOST.Get_first = A68_FALSE;
QCCAOST.Check = A68_TRUE;
RCCAOST_check_end = QCCAOST;
SCCAOST.Get_first = A68_FALSE;
SCCAOST.Check = A68_FALSE;
TCCAOST_not_first = SCCAOST;
 /* line 574: */
 /* line 595: */
 /* line 607: */
VDCAOST_command_name_str = UDCAOST;
 /* line 609: */
 /* line 610: */
 /* line 611: */
YDCAOST_command_name_help = XDCAOST;
 /* line 612: */
ZDCAOST_command_name_no = 1;
 /* line 613: */
BECAOST_command_name_syntax = A_UNITE(AECAOST,mode1,1,(&ZDCAOST_command_name_no));
 /* line 616: */
 /* line 639: */
 /* line 642: */
 /* line 654: */
 /* line 714: */
A_PROC_EXIT(DECS commandreader);
} 
#undef NL
/* end of translation of ./a68files/commandreader.a68 */
