
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
/* UNAME:ZXGAOST */
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
struct A68t180{
A68_INT  C;
A_PAD_INT(PAD_39)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
A68_BITS  A;
A_PAD_BITS(PAD_40)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t183,(A68_VC ,struct A68t163 ,struct A68t97 ),(A68_VC ,struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE26,MODE163,MODE97) VOID */
struct A68t182{
A68_VC  Parameter;
struct A68t183  Proc;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,MODE183)  */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t163 ,struct A68t97 ),(struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE163,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE162,MODE97) VOID */
struct A68t184 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t185  mode2;
struct A68t186  mode3;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(MODE182,MODE185,MODE186)  */
struct A68t187 { A68_INT mode; union {
struct A68t188 * mode1;
struct A68t189 * mode2;
struct A68t190 * mode3;
} data; };
typedef struct A68t187  A68_187 ;    /* UNION(REF MODE188,REF MODE189,REF MODE190)  */
struct A68t188 ;

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t188 *,struct A68t34 *),(struct A68t188 *,struct A68t34 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE188,REF MODE34) VOID */
struct A68t192 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t193  mode3;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF MODE26,REF MODE102,MODE193)  */
struct A68t188{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t160  Parameter;
struct A68t181  Access;
struct A68t180  Continuation;
struct A68t192  Help;
struct A68t184  Command;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE26,REF MODE26,MODE160,MODE181,MODE180,MODE192,MODE184)  */
A_VECTOR(struct A68t187 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE187 */
struct A68t189{
struct A68t188 * Group;
struct A68t191  Commands;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE188,REF MODE191)  */
struct A68t190{
struct A68t188 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t191  Locals;
struct A68t191  Globals;
struct A68t188 * Postlude;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE188,REF MODE26,REF REF MODE26,REF MODE191,REF MODE191,REF MODE188)  */
struct A68t194{
struct A68t190 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_41)
struct A68t102  Input_lines;
struct A68t194 * Caller;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE190,INT,REF MODE102,REF MODE194)  */
struct A68t195 ;

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t195 *,struct A68t188 *,struct A68t163 ,struct A68t97 ,struct A68t180 *),(struct A68t195 *,struct A68t188 *,struct A68t163 ,struct A68t97 ,struct A68t180 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE195,REF MODE188,MODE163,MODE97) MODE180 */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE102) VOID */
struct A68t199 ;

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t199 ),(struct A68t199 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE199) VOID */
struct A68t195{
struct A68t194 * Stack;
struct A68t174  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_42)
A68_BOOL  Private;
A_PAD_BOOL(PAD_43)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_44)
struct A68t196  Caller;
struct A68t197  Report_error;
struct A68t198  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE194,REF MODE174,BOOL,BOOL,BOOL,MODE196,MODE197,MODE198,MODE97)  */
struct A68t199 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t200,(struct A68t180 ,struct A68t180 ),(struct A68t180 ,struct A68t180 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE180,MODE180) BOOL */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t191 ,struct A68t191 ,struct A68t191 *),(struct A68t191 ,struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE191,MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t191 ,struct A68t187 ,struct A68t191 *),(struct A68t191 ,struct A68t187 ,struct A68t191 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE191,MODE187) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t191 *,struct A68t191 ,struct A68t191 *),(struct A68t191 *,struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF REF MODE191,MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t191 *,struct A68t187 ,struct A68t191 *),(struct A68t191 *,struct A68t187 ,struct A68t191 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF REF MODE191,MODE187) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t191 ,struct A68t191 *),(struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t187 ,struct A68t191 *),(struct A68t187 ,struct A68t191 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE187) REF MODE191 */

A_PROCEDURE(struct A68t189 *,A68t207,(A68_VC ,A68_VC ,struct A68t181 ,struct A68t191 ),(A68_VC ,A68_VC ,struct A68t181 ,struct A68t191 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,MODE26,MODE181,MODE191) REF MODE189 */

A_PROCEDURE(struct A68t190 *,A68t208,(struct A68t188 *,A68_VC ,A68_VC *,struct A68t191 ,struct A68t191 ,struct A68t184 ),(struct A68t188 *,A68_VC ,A68_VC *,struct A68t191 ,struct A68t191 ,struct A68t184 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE188,MODE26,REF REF MODE26,REF MODE191,REF MODE191,MODE184) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t195 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t195 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE195,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t195 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t195 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE195,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t195 *,A68t211,(struct A68t197 ,struct A68t198 ,struct A68t97 ,struct A68t196 ,struct A68t169 *,struct A68t190 *,struct A68t163 ),(struct A68t197 ,struct A68t198 ,struct A68t97 ,struct A68t196 ,struct A68t169 *,struct A68t190 *,struct A68t163 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE197,MODE198,MODE97,MODE196,REF MODE169,REF MODE190,MODE163) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t195 *,struct A68t180 *),(struct A68t195 *,struct A68t180 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE195) MODE180 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_VC *),(A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC REF MODE26 */
struct A68t213{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_45)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_46)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_47)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_48)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_49)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_50)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_51)
A68_INT  Width;
A_PAD_INT(PAD_52)
A68_INT  Page_count;
A_PAD_INT(PAD_53)
A68_INT  Page_length;
A_PAD_INT(PAD_54)
A68_INT  Eof_count;
A_PAD_INT(PAD_55)
struct A68t214 * Standard_reader;
struct A68t215 * Infile;
struct A68t216  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE214,REF MODE215,MODE216,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t217,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t214{
A68_VC  Rdbuffer;
struct A68t217  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_56)
A68_INT  Rdcharno;
A_PAD_INT(PAD_57)
A68_INT  Start_of_word;
A_PAD_INT(PAD_58)
struct A68t218 * Stack;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(REF MODE26,MODE217,INT,INT,INT,REF MODE218)  */
struct A68t215{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_59)
A68_INT  Number;
A_PAD_INT(PAD_60)
A68_VC  Name;
struct A68t214 * Reader;
struct A68t215 * Previous;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE214,REF MODE215)  */
struct A68t218{
A68_VC  Line;
struct A68t218 * Rest;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,REF MODE218)  */

A_PROCEDURE(struct A68t213 *,A68t219,(void),(void *));
typedef struct A68t219  A68_219 ;    /* PROC REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t216 ),(struct A68t216 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE216) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t225,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(struct A68t52 ,6,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,11,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 7 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  JPGAOST_io_fault(struct A68t97 );
/* --- End of imports from ioprocs --- */


/* --- Imports from command --- */
extern A68_180  ZNDAOST_continue;
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_VOID  QZAAOST_simplify_params(struct A68t163 ,A68_162 *);
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
extern A68_97  ZLBAOSI_global_msg;
extern A68_VOID  KFAAOST_default_msg(struct A68t92 ,struct A68t46 );
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
extern A68_34 * MEAAOST_err;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_INT  YOAAOSL_charnumber(struct A68t34 *);
extern A68_VOID  JYAAOSL_justify(A68_VC ,A68_INT ,A68_59 *);
extern A68_VOID  NYAAOSL_tab(A68_INT ,A68_60 *);
extern A68_VOID  RZAAOSL_resetindent(struct A68t34 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TIGAOST(void);   /* ioprocs */
extern void FMDAOST(void);   /* command */
extern void LRAAOST(void);   /* commandsyntax */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_226   DYGAOST = {"$Id: commandcaller.a68,v 34.2 1995/03/29 13:02:23 ella Exp $"}; 
A_GISVEC(A68_VC ,EYGAOST,DYGAOST,60)
A68_BOOL  FYGAOST_check_syntax;
A68_BOOL  GYGAOST_show_parameters;
static A68_229   GAHAOST = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,HAHAOST,GAHAOST,11)
static A68_230   JAHAOST = {"REMOVEFILE"}; 
A_GISVEC(A68_VC ,KAHAOST,JAHAOST,10)
static A68_231   LAHAOST = {"INPUT"}; 
A_GISVEC(A68_VC ,MAHAOST,LAHAOST,5)
static A68_232   NAHAOST = {"INPUTS"}; 
A_GISVEC(A68_VC ,OAHAOST,NAHAOST,6)
static A68_233   PAHAOST = {"OFFLINE"}; 
A_GISVEC(A68_VC ,QAHAOST,PAHAOST,7)
static A68_232   RAHAOST = {"ONLINE"}; 
A_GISVEC(A68_VC ,SAHAOST,RAHAOST,6)
static A68_114   TAHAOST = {"HELP"}; 
A_GISVEC(A68_VC ,UAHAOST,TAHAOST,4)

A68_VOID  IYGAOST_report_error(A68_102  Lines);

A68_VOID  YYGAOST_set_default_msg(A68_199  Proc);

A68_VOID  HZGAOST_call_command(A68_195 * Env, A68_188 * Command, A68_163  Param, A68_97  Msg, A68_180  *ReturnedValue);

A68_VOID  IYGAOST_report_error(A68_102  Lines)
{ 
A68_52  JYGAOST;  /* OPERATORS - mode -> union mode */
A68_56  KYGAOST;  /* procedure value */
A68_85  LYGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  MYGAOST;  /* OPERATORS - mode -> union mode */
A68_56  NYGAOST;  /* procedure value */
A68_85  OYGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * PYGAOST_line;
A68_INT  QYGAOST;  /* forall loop counter */
A68_227  RYGAOST;  /* collateral clause result */
A68_52  SYGAOST;  /* OPERATORS - mode -> union mode */
A68_52  TYGAOST;  /* OPERATORS - mode -> union mode */
A68_56  UYGAOST;  /* procedure value */
A68_85  VYGAOST;  /* OPERATORS - istruct -> vector */
A68_97  WYGAOST;  /* procedure value */
A_PROC_ENTRY(report_error);
 /* line 63: */
 /* line 64: */
{ 
KYGAOST.fn.fn_global = RZAAOSL_resetindent;
KYGAOST.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(LYGAOST,A_UNITE(JYGAOST,mode12,12,KYGAOST),A68_52 ));
 /* line 65: */
if ( (YOAAOSL_charnumber(KEAAOST_screen)>1) )
{ 
LRAAOSL_newline(KEAAOST_screen);
} 
 /* line 66: */
NYGAOST.fn.fn_global = RZAAOSL_resetindent;
NYGAOST.nonlocals = A68_NIL;
GFBAOSL_put(LEAAOST_out, A_HVEC(OYGAOST,A_UNITE(MYGAOST,mode12,12,NYGAOST),A68_52 ));
 /* line 67: */
if ( (YOAAOSL_charnumber(LEAAOST_out)>1) )
{ 
LRAAOSL_newline(LEAAOST_out);
} 
 /* line 68: */
QYGAOST = Lines.upb -1;
PYGAOST_line = Lines.data;
for (;QYGAOST-- >= 0;
(PYGAOST_line++
) )
{
RYGAOST.data[0] = A_UNITE(SYGAOST,mode7,7,(*PYGAOST_line));
UYGAOST.fn.fn_global = LRAAOSL_newline;
UYGAOST.nonlocals = A68_NIL;
RYGAOST.data[1] = A_UNITE(TYGAOST,mode12,12,UYGAOST);
GFBAOSL_put(MEAAOST_err, A_HISVEC(VYGAOST,RYGAOST,2,A68_52 ));
}
 /* line 69: */
 /* line 70: */
WYGAOST.fn.fn_global = KFAAOST_default_msg;
WYGAOST.nonlocals = A68_NIL;
JPGAOST_io_fault(WYGAOST);
} 
A_PROC_EXIT(report_error);
return;
} 
#undef NL

A68_VOID  YYGAOST_set_default_msg(A68_199  Proc)
{ 
A68_199  ZYGAOST;  /* united object - for case conformity */
A68_97  AZGAOST_msg;
A68_97  BZGAOST;  /* clause result */
A68_97  CZGAOST;  /* procedure value */
A_PROC_ENTRY(set_default_msg);
 /* line 75: */
ZYGAOST = Proc ;
switch ( ZYGAOST.mode )
{ 
case 1: /* PROC(MODE92,MODE46) VOID */
AZGAOST_msg = (ZYGAOST.data.mode1);
BZGAOST = AZGAOST_msg;
break;
default: 
CZGAOST.fn.fn_global = KFAAOST_default_msg;
CZGAOST.nonlocals = A68_NIL;
BZGAOST = CZGAOST;
break;
} 
ZLBAOSI_global_msg = BZGAOST;
A_PROC_EXIT(set_default_msg);
return;
} 
#undef NL
 /* line 80: */

A68_VOID  HZGAOST_call_command(A68_195 * Env, A68_188 * Command, A68_163  Param, A68_97  Msg, A68_180  *ReturnedValue)
{ 
A68_162  IZGAOST;  /* avoid structure result */
A68_162  JZGAOST_vals;
A68_INT  KZGAOST;  /* YIELD */
A68_161 * LZGAOST_v;
A68_INT  MZGAOST;  /* forall loop counter */
A68_228  NZGAOST;  /* collateral clause result */
A68_VC  OZGAOST;  /* avoid structure result */
A68_59  PZGAOST;  /* avoid structure result */
A68_52  QZGAOST;  /* OPERATORS - mode -> union mode */
A68_52  RZGAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  SZGAOST;  /* YIELD */
A68_174  TZGAOST;  /* OPERATORS - simple index */
A68_INT  UZGAOST;  /* YIELD */
A68_52  VZGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WZGAOST;  /* YIELD */
A68_60  XZGAOST;  /* avoid structure result */
A68_52  YZGAOST;  /* OPERATORS - mode -> union mode */
A68_52  ZZGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  AAHAOST;  /* YIELD */
A68_52  BAHAOST;  /* OPERATORS - mode -> union mode */
A68_56  CAHAOST;  /* procedure value */
A68_85  DAHAOST;  /* OPERATORS - istruct -> vector */
A68_BOOL  EAHAOST;  /* optbool result */
A68_VC  FAHAOST_name;
A68_BOOL  IAHAOST;  /* optbool result */
A68_BOOL  VAHAOST;  /* clause result */
A68_180  WAHAOST;  /* clause result */
A68_184  XAHAOST;  /* united object - for case conformity */
A68_182  YAHAOST_rvcproc;
A68_183  ZAHAOST;  /* CALL */
A68_185  ABHAOST_cpproc;
A68_186  BBHAOST_vproc;
A68_162  CBHAOST;  /* avoid structure result */
A_PROC_ENTRY(call_command);
 /* line 81: */
 /* line 89: */
{ 
 /* line 90: */
if ( GYGAOST_show_parameters )
{ 
QZAAOST_simplify_params( Param, &IZGAOST );
JZGAOST_vals = IZGAOST;
 /* line 92: */
 /* line 93: */
KZGAOST = 1 ;
if ( ((*(&((&A_VINDEX(JZGAOST_vals,KZGAOST))->Sort)))!=0) )
{ 
 /* line 94: */
MZGAOST = JZGAOST_vals.upb -1;
LZGAOST_v = JZGAOST_vals.data;
for (;MZGAOST-- >= 0;
(LZGAOST_v++
) )
{
FCAAOSI_intchars( (*(&(LZGAOST_v->Sort))), &OZGAOST );
JYAAOSL_justify( OZGAOST, 3, &PZGAOST );
NZGAOST.data[0] = A_UNITE(QZGAOST,mode15,15,PZGAOST);
 /* line 95: */
SZGAOST = ' ' ;
NZGAOST.data[1] = A_UNITE(RZGAOST,mode6,6,SZGAOST);
 /* line 96: */
TZGAOST = (*(&(Env->Analysers))) ;
UZGAOST = (*(&(LZGAOST_v->Sort))) ;
WZGAOST = (*(&((&A_VINDEX(TZGAOST,UZGAOST))->Description))) ;
NZGAOST.data[2] = A_UNITE(VZGAOST,mode7,7,WZGAOST);
NYAAOSL_tab( 20, &XZGAOST );
NZGAOST.data[3] = A_UNITE(YZGAOST,mode16,16,XZGAOST);
AAHAOST = (*(&(LZGAOST_v->Value))) ;
NZGAOST.data[4] = A_UNITE(ZZGAOST,mode7,7,AAHAOST);
CAHAOST.fn.fn_global = LRAAOSL_newline;
CAHAOST.nonlocals = A68_NIL;
NZGAOST.data[5] = A_UNITE(BAHAOST,mode12,12,CAHAOST);
 /* line 97: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DAHAOST,NZGAOST,6,A68_52 ));
}
 /* line 98: */
 /* line 99: */
} 
} 
 /* line 101: */
 /* line 102: */
EAHAOST = FYGAOST_check_syntax;
if ( EAHAOST )
{{ 
FAHAOST_name = (*(&(Command->Name)));
 /* line 103: */
IAHAOST = A_VC_NE(FAHAOST_name,HAHAOST);
if ( IAHAOST )
{IAHAOST = A_VC_NE(FAHAOST_name,KAHAOST);
}
 /* line 104: */
if ( IAHAOST )
{IAHAOST = A_VC_NE(FAHAOST_name,MAHAOST);
}
if ( IAHAOST )
{IAHAOST = A_VC_NE(FAHAOST_name,OAHAOST);
}
 /* line 105: */
if ( IAHAOST )
{IAHAOST = A_VC_NE(FAHAOST_name,QAHAOST);
}
if ( IAHAOST )
{IAHAOST = A_VC_NE(FAHAOST_name,SAHAOST);
}
if ( IAHAOST )
{ /* line 106: */
IAHAOST = A_VC_NE(FAHAOST_name,UAHAOST);
}
 /* line 107: */
VAHAOST = IAHAOST;
} 
EAHAOST = VAHAOST;
}
 /* line 108: */
if ( EAHAOST )
{ 
WAHAOST = ZNDAOST_continue;
} 
else
{ 
 /* line 109: */
XAHAOST = (*(&(Command->Command))) ;
switch ( XAHAOST.mode )
{ 
case 1: /* STRUCT(REF MODE26,MODE183)  */
YAHAOST_rvcproc = (XAHAOST.data.mode1);
 /* line 110: */
 /* line 111: */
ZAHAOST = YAHAOST_rvcproc.Proc ;
A_CALLPROC(ZAHAOST,(YAHAOST_rvcproc.Parameter, Param, Msg),(YAHAOST_rvcproc.Parameter, Param, Msg,(ZAHAOST).nonlocals));
break;
case 2: /* PROC(MODE163,MODE97) VOID */
ABHAOST_cpproc = (XAHAOST.data.mode2);
 /* line 112: */
 /* line 113: */
A_CALLPROC(ABHAOST_cpproc,(Param, Msg),(Param, Msg,(ABHAOST_cpproc).nonlocals));
break;
case 3: /* PROC(REF MODE162,MODE97) VOID */
BBHAOST_vproc = (XAHAOST.data.mode3);
 /* line 114: */
 /* line 115: */
QZAAOST_simplify_params( Param, &CBHAOST );
A_CALLPROC(BBHAOST_vproc,(CBHAOST, Msg),(CBHAOST, Msg,(BBHAOST_vproc).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 122: */
WAHAOST = (*(&(Command->Continuation)));
} 
} 
A_PROC_EXIT(call_command);
*ReturnedValue = (WAHAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void AYGAOST(void)   /* initialise DECS commandcaller */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/commandcaller.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/ioprocs.m","./mfiles/command.m","./mfiles/commandsyntax.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
FMDAOST();   /* USE command */
LRAAOST();   /* USE commandsyntax */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/commandcaller.a68";
A_config.translation_time = "Tue Apr  4 09:50:18 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ZXGAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:50:18 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandcaller);
UEAALIB_a68config(LGAALIB_configinfo, EYGAOST);
 /* line 55: */
FYGAOST_check_syntax = A68_FALSE;
GYGAOST_show_parameters = A68_FALSE;
 /* line 62: */
 /* line 73: */
 /* line 79: */
 /* line 124: */
A_PROC_EXIT(DECS commandcaller);
} 
#undef NL
/* end of translation of ./a68files/commandcaller.a68 */
