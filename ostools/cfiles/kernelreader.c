
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
/* UNAME:SXEAOST */
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
A_VECTOR(struct A68t175 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE175 */
struct A68t173{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t174  Elements;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS,REF MODE174)  */
struct A68t175 { A68_INT mode; union {
A68_INT * mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF INT,MODE173)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
A_VECTOR(struct A68t178 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE178 */
struct A68t179{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t180  Params;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t178 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t176  mode2;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(MODE179,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE97) REF MODE26 */
struct A68t181 { A68_INT mode; union {
struct A68t182  mode1;
A68_INT * mode2;
struct A68t173  mode3;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(MODE182,REF INT,MODE173)  */
struct A68t183{
A68_INT * Sort;
struct A68t181  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF INT,MODE181,REF MODE26,REF MODE26)  */
struct A68t184{
struct A68t183  Rule;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE183,REF MODE184)  */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE173) BOOL */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t174 ,struct A68t173 *),(struct A68t174 ,struct A68t173 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE174) MODE173 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t175 ,struct A68t173 *),(struct A68t175 ,struct A68t173 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE175) MODE173 */
struct A68t189 ;

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t175 ,struct A68t189 ,A68_VC *),(struct A68t175 ,struct A68t189 ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE175,REF MODE189) REF MODE26 */
A_VECTOR(struct A68t183 ,A68t189);
typedef struct A68t189  A68_189 ;    /* VECTOR [] MODE183 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t34 *,struct A68t189 ),(struct A68t34 *,struct A68t189 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE34,REF MODE189) VOID */
struct A68t192 ;

A_PROCEDURE(struct A68t184 *,A68t191,(struct A68t184 *,struct A68t192 ),(struct A68t184 *,struct A68t192 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE184,MODE192) REF MODE184 */
A_VECTOR(struct A68t193 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE193 */
struct A68t193{
A68_INT * No;
struct A68t181  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF INT,MODE181,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t178 ,struct A68t177 *),(struct A68t178 ,struct A68t177 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE178) REF MODE177 */

A_PROCEDURE(A68_BOOL ,A68t195,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t196,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t197,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t199,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t198{
A68_VC  Rdbuffer;
struct A68t199  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t200 * Stack;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE199,INT,INT,INT,REF MODE200)  */
struct A68t200{
A68_VC  Line;
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE26,REF MODE200)  */

A_PROCEDURE(struct A68t198 *,A68t201,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,MODE199) REF MODE198 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *),(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE189,MODE175,MODE97) MODE178 */

A_PROCEDURE(A68_CHAR ,A68t206,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t176 ,A68_INT ,struct A68t97 ),(struct A68t176 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE176,INT,MODE97) VOID */
struct A68t209{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE209,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t176 ,struct A68t97 ,A68_VC *),(struct A68t176 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE176,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t223,(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26,MODE26,MODE196,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t224,(A68_VC ),(A68_VC ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,8,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,502,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 502 CHAR */

A_PROCEDURE(A68_BOOL ,A68t227,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t228,(A68_CHAR ,A68_INT ,A68_INT *),(A68_CHAR ,A68_INT ,A68_INT *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(CHAR,INT,REF INT) BOOL */
A_ISTRUCT(A68_CHAR ,22,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t230,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT,INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,5,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_INT ,5,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 5 INT */
A_ISTRUCT(A68_CHAR ,21,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t209 ,struct A68t97 ,A68_VC *),(struct A68t209 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE209,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t238,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE176,MODE97) INT */
A_ISTRUCT(A68_CHAR ,12,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,137,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 137 CHAR */
A_ISTRUCT(A68_CHAR ,195,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 195 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,97,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 97 CHAR */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,87,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 87 CHAR */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE176,MODE26,MODE97) MODE134 */
A_ISTRUCT(A68_CHAR ,42,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,67,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 67 CHAR */
A_ISTRUCT(A68_CHAR ,127,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 127 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 23 CHAR */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *),(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE177,REF INT,REF MODE26,MODE97) MODE158 */
A_ISTRUCT(A68_CHAR ,98,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 98 CHAR */

A_PROCEDURE(A68_VOID ,A68t256,(A68_BOOL ,struct A68t174 *),(A68_BOOL ,struct A68t174 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(BOOL) MODE174 */
A_ISTRUCT(A68_CHAR ,2,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE176,REF BOOL,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,30,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_INT ,A68t260,(struct A68t176 ,struct A68t97 ,struct A68t46 ),(struct A68t176 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE176,MODE97,MODE46) INT */
A_ISTRUCT(A68_CHAR ,9,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,210,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 210 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 31 CHAR */
struct A68t267{
A68_INT  Lwb;
A_PAD_INT(PAD_44)
A68_INT  Upb;
A_PAD_INT(PAD_45)
};
typedef struct A68t267  A68_267 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t176 ,struct A68t267 ,struct A68t97 ,struct A68t267 *),(struct A68t176 ,struct A68t267 ,struct A68t97 ,struct A68t267 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE176,MODE267,MODE97) MODE267 */
A_ISTRUCT(A68_CHAR ,136,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 136 CHAR */

A_PROCEDURE(A68_VOID ,A68t270,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,28,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 28 CHAR */

A_PROCEDURE(A68_CHAR ,A68t272,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE176,MODE97) CHAR */

A_PROCEDURE(struct A68t184 *,A68t273,(void),(void *));
typedef struct A68t273  A68_273 ;    /* PROC REF MODE184 */
A_ISTRUCT(struct A68t175 ,2,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 2 MODE175 */
A_ISTRUCT(struct A68t193 ,22,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 22 MODE193 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_BOOL  FJBAOST_instring(A68_CHAR ,A68_VC );
#define KJBAOST_sp ' '
#define LJBAOST_sep ','
extern A68_BOOL  QJBAOST_space(A68_CHAR );
extern A68_BOOL  TJBAOST_separator(A68_CHAR );
extern A68_BOOL  XJBAOST_visible_space(A68_CHAR );
extern A68_BOOL  AKBAOST_digit(A68_CHAR );
extern A68_BOOL  EKBAOST_letter(A68_CHAR );
extern A68_BOOL  IKBAOST_bold(A68_CHAR );
extern A68_CHAR  MKBAOST_upper_case(A68_CHAR );
extern A68_VC * UKBAOST_rdbuffer;
extern A68_INT * VKBAOST_rdcharend;
extern A68_INT * WKBAOST_rdcharno;
extern A68_INT * XKBAOST_start_of_word;
extern A68_CHAR  YMBAOST_next_char(struct A68t97 );
extern A68_CHAR  BNBAOST_first_char(struct A68t97 );
extern A68_CHAR  FNBAOST_next_first_char(struct A68t97 );
extern A68_VOID  ZACAOST_nothing_read(A68_VC *);
extern A68_VOID  GBCAOST_check_read(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_VOID  BCCAOST_check_value(struct A68t176 ,A68_INT ,struct A68t97 );
extern A68_209  NCCAOST_first_and_check;
extern A68_209  PCCAOST_get_first;
extern A68_209  TCCAOST_not_first;
extern A68_VOID  XCCAOST_read_token(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_VOID  PDCAOST_read_char(A68_CHAR ,struct A68t97 ,A68_VC *);
extern A68_INT  ZDCAOST_command_name_no;
extern A68_VC  VDCAOST_command_name_str;
extern A68_VC  YDCAOST_command_name_help;
extern A68_VOID  DECAOST_read_command_name(struct A68t97 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
#define DSAAOST_opt_syn 0X2U
extern A68_VOID  PSAAOST_alt(struct A68t174 ,A68_173 *);
extern A68_184 * EZAAOST_add_readers(struct A68t184 *,struct A68t192 );
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
#define OSCAOST_maxid 255
extern A68_INT  XVCAOST_charstoint(A68_VC ,A68_BOOL *);
extern A68_INT  AJDAOST_maxint;
extern A68_INT  HJDAOST_largeint;
extern A68_INT  IJDAOST_minint;
extern A68_INT  JJDAOST_largeminint;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
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
extern A68_92  SHAAOSI_system;
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_216   WXEAOST = {"$Id: kernelreader.a68,v 34.2 1995/03/29 13:02:27 ella Exp $"}; 
A_GISVEC(A68_VC ,XXEAOST,WXEAOST,59)
static A68_217   YXEAOST = {"+-*/%<>=:.$#^@"}; 
A_GISVEC(A68_VC ,ZXEAOST,YXEAOST,14)
static A68_VC  AYEAOST_opsymbols;
static A68_219   JYEAOST = {"No "}; 
A_GISVEC(A68_VC ,KYEAOST,JYEAOST,3)
static A68_220   OYEAOST = {" may have more than "}; 
A_GISVEC(A68_VC ,PYEAOST,OYEAOST,20)
static A68_221   TYEAOST = {" characters"}; 
A_GISVEC(A68_VC ,UYEAOST,TYEAOST,11)
A68_VC  QZEAOST_plus_str;
A68_VC  SZEAOST_minus_str;
A68_VC  UZEAOST_period_str;
A68_VC  WZEAOST_semicolon_str;
A68_VC  YZEAOST_comma_str;
A68_VC  AAFAOST_openrnd_str;
A68_VC  CAFAOST_closernd_str;
A68_VC  EAFAOST_ampersand_str;
static A68_INT  FAFAOST_plus_no;
static A68_INT  GAFAOST_minus_no;
static A68_INT  HAFAOST_period_no;
static A68_INT  IAFAOST_semicolon_no;
static A68_INT  JAFAOST_comma_no;
static A68_INT  KAFAOST_openrnd_no;
static A68_INT  LAFAOST_closernd_no;
static A68_INT  MAFAOST_ampersand_no;
A68_175  OAFAOST_plus_syntax;
A68_175  QAFAOST_minus_syntax;
A68_175  SAFAOST_period_syntax;
A68_175  UAFAOST_semicolon_syntax;
A68_175  WAFAOST_comma_syntax;
A68_175  YAFAOST_openrnd_syntax;
A68_175  ABFAOST_closernd_syntax;
A68_175  CBFAOST_ampersand_syntax;
static A68_225   HDFAOST = {"<number>"}; 
A_GISVEC(A68_VC ,IDFAOST,HDFAOST,8)
A68_VC  JDFAOST_int_str;
static A68_226   KDFAOST = 
{  'T', 'h', 'e', ' ', 'c', 'h', 'a', 'r',
   'a', 'c', 't', 'e', 'r', ' ', 'r', 'e',
   'p', 'r', 'e', 's', 'e', 'n', 't', 'a',
   't', 'i', 'o', 'n', ' ', 'o', 'f', ' ',
   'a', ' ', '3', '2', '-', 'b', 'i', 't',
   ' ', '(', '2', '\'', 's', ' ', 'c', 'o',
   'm', 'p', 'l', 'e', 'm', 'e', 'n', 't',
   ')', ' ', 'i', 'n', 't', 'e', 'g', 'e',
   'r', '.', ' ', ' ', 'B', 'y', ' ', 'd',
   'e', 'f', 'a', 'u', 'l', 't', ' ', 't',
   'h', 'e', ' ', 'n', 'u', 'm', 'b', 'e',
   'r', ' ', 's', 'h', 'o', 'u', 'l', 'd',
   ' ', 'b', 'e', ' ', 'g', 'i', 'v', 'e',
   'n', ' ', 'i', 'n', ' ', 'd', 'e', 'c',
   'i', 'm', 'a', 'l', ' ', 'r', 'e', 'p',
   'r', 'e', 's', 'e', 'n', 't', 'a', 't',
   'i', 'o', 'n', ' ', 'c', 'o', 'm', 'p',
   'r', 'i', 's', 'i', 'n', 'g', ' ', 'a',
   'n', ' ', 'o', 'p', 't', 'i', 'o', 'n',
   'a', 'l', ' ', 's', 'i', 'g', 'n', ' ',
   'c', 'h', 'a', 'r', 'a', 'c', 't', 'e',
   'r', ' ', '(', '\"', '+', '\"', ' ', 'o',
   'r', ' ', '\"', '-', '\"', ')', ' ', 'f',
   'o', 'l', 'l', 'o', 'w', 'e', 'd', ' ',
   'b', 'y', ' ', 'd', 'i', 'g', 'i', 't',
   's', ' ', '\"', '0', '\"', ' ', 't', 'o',
   ' ', '\"', '9', '\"', '.', ' ', ' ', 'A',
   'l', 't', 'e', 'r', 'n', 'a', 't', 'i',
   'v', 'e', 'l', 'y', ',', ' ', 't', 'h',
   'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r',
   ' ', 'm', 'a', 'y', ' ', 'b', 'e', ' ',
   's', 'p', 'e', 'c', 'i', 'f', 'i', 'e',
   'd', ' ', 'i', 'n', ' ', 'r', 'a', 'd',
   'i', 'x', ' ', '2', ',', ' ', '4', ',',
   ' ', '8', ' ', 'o', 'r', ' ', '1', '6',
   ' ', 'b', 'y', ' ', 'p', 'r', 'e', 'f',
   'i', 'x', 'i', 'n', 'g', ' ', 'i', 't',
   ' ', 'w', 'i', 't', 'h', ' ', 't', 'h',
   'e', ' ', 'r', 'a', 'd', 'i', 'x', ' ',
   'f', 'o', 'l', 'l', 'o', 'w', 'e', 'd',
   ' ', 'b', 'y', ' ', 't', 'h', 'e', ' ',
   'l', 'e', 't', 't', 'e', 'r', ' ', '\"',
   'r', '\"', '.', ' ', ' ', 'T', 'h', 'e',
   ' ', 'l', 'e', 't', 't', 'e', 'r', 's',
   ' ', '\"', 'a', '\"', ' ', 't', 'o', ' ',
   '\"', 'f', '\"', ' ', '(', 'i', 'n', ' ',
   'e', 'i', 't', 'h', 'e', 'r', ' ', 'c',
   'a', 's', 'e', ')', ' ', 'a', 'r', 'e',
   ' ', 'u', 's', 'e', 'd', ' ', 't', 'o',
   ' ', 'r', 'e', 'p', 'r', 'e', 's', 'e',
   'n', 't', ' ', 't', 'h', 'e', ' ', 'd',
   'i', 'g', 'i', 't', 's', ' ', '1', '0',
   ' ', 't', 'o', ' ', '1', '5', ' ', 'r',
   'e', 's', 'p', 'e', 'c', 't', 'i', 'v',
   'e', 'l', 'y', ' ', 'i', 'n', ' ', 'r',
   'a', 'd', 'i', 'x', ' ', '1', '6', '.',
   ' ', ' ', 'F', 'o', 'r', ' ', 'e', 'x',
   'a', 'm', 'p', 'l', 'e', ',', ' ', '\"',
   '-', '1', '6', 'r', 'f', 'f', '\"', ' ',
   'm', 'a', 'y', ' ', 'b', 'e', ' ', 'u',
   's', 'e', 'd', ' ', 't', 'o', ' ', 'r',
   'e', 'p', 'r', 'e', 's', 'e', 'n', 't',
   ' ', '-', '2', '5', '5', '.' 
} ; 
A_GISVEC(A68_VC ,LDFAOST,KDFAOST,502)
static A68_VC  MDFAOST_int_help;
static A68_INT  NDFAOST_zero;
static A68_229   AEFAOST = {"0123456789ABCDEFabcdef"}; 
A_GISVEC(A68_VC ,BEFAOST,AEFAOST,22)
static A68_231   TEFAOST = {"This "}; 
A_GISVEC(A68_VC ,UEFAOST,TEFAOST,5)
static A68_232   YEFAOST = {" is too large"}; 
A_GISVEC(A68_VC ,ZEFAOST,YEFAOST,13)
static A68_235   SFFAOST = {" expected after radix"}; 
A_GISVEC(A68_VC ,TFFAOST,SFFAOST,21)
static A68_231   AGFAOST = {"This "}; 
A_GISVEC(A68_VC ,BGFAOST,AGFAOST,5)
static A68_235   FGFAOST = {" has an illegal radix"}; 
A_GISVEC(A68_VC ,GGFAOST,FGFAOST,21)
static A68_INT  YGFAOST_int_no;
A68_175  AHFAOST_int_syntax;
static A68_239   AIFAOST = {"<identifier>"}; 
A_GISVEC(A68_VC ,BIFAOST,AIFAOST,12)
A68_VC  CIFAOST_ident_str;
static A68_240   DIFAOST = {"An ELLA MAKE, LET, INT or TYPE name.  This is a lower case letter followed by further lower case letters, digits or visible spaces (\"_\")."}; 
A_GISVEC(A68_VC ,EIFAOST,DIFAOST,137)
static A68_VC  FIFAOST_ident_help;
static A68_INT  GIFAOST_ident_no;
A68_175  IIFAOST_ident_syntax;
static A68_225   UIFAOST = {"<fnname>"}; 
A_GISVEC(A68_VC ,VIFAOST,UIFAOST,8)
A68_VC  WIFAOST_fnname_str;
static A68_241   XIFAOST = {"An ELLA FN or MACro name.  This is either an upper case letter followed by further upper case letters, digits or visible spaces (\"_\"), or, one or more of the symbol characters: \" + opsymbols + \"."}; 
A_GISVEC(A68_VC ,YIFAOST,XIFAOST,195)
static A68_VC  ZIFAOST_fnname_help;
static A68_INT  AJFAOST_fnname_no;
A68_175  CJFAOST_fnname_syntax;
static A68_242   NKFAOST = {"<name>"}; 
A_GISVEC(A68_VC ,OKFAOST,NKFAOST,6)
A68_VC  PKFAOST_name_str;
static A68_243   QKFAOST = {"<declname>"}; 
A_GISVEC(A68_VC ,RKFAOST,QKFAOST,10)
A68_VC  SKFAOST_declname_str;
static A68_244   TKFAOST = {"An ELLA function name or an ELLA identifier."}; 
A_GISVEC(A68_VC ,UKFAOST,TKFAOST,44)
static A68_VC  VKFAOST_name_help;
#define WKFAOST_declname_help VKFAOST_name_help
static A68_INT  XKFAOST_name_no;
static A68_INT  YKFAOST_declname_no;
A68_175  ALFAOST_name_syntax;
A68_175  CLFAOST_declname_syntax;
A68_212  LLFAOST_is_declname;
A68_213  NLFAOST_get_declname;
static A68_225   PLFAOST = {"<string>"}; 
A_GISVEC(A68_VC ,QLFAOST,PLFAOST,8)
A68_VC  RLFAOST_string_str;
static A68_245   SLFAOST = {"An arbitary string of printable characters excluding  characters used as separators (\" \" and \",\")"}; 
A_GISVEC(A68_VC ,TLFAOST,SLFAOST,97)
static A68_VC  ULFAOST_string_help;
static A68_INT  VLFAOST_string_no;
A68_175  XLFAOST_string_syntax;
static A68_243   ZMFAOST = {"<filename>"}; 
A_GISVEC(A68_VC ,ANFAOST,ZMFAOST,10)
A68_VC  BNFAOST_filename_str;
static A68_247   CNFAOST = {"A string of characters that the host operating system will accept as a valid file name."}; 
A_GISVEC(A68_VC ,DNFAOST,CNFAOST,87)
static A68_VC  ENFAOST_filename_help;
static A68_INT  FNFAOST_filename_no;
A68_175  HNFAOST_filename_syntax;
static A68_242   AOFAOST = {"<text>"}; 
A_GISVEC(A68_VC ,BOFAOST,AOFAOST,6)
A68_VC  COFAOST_text_str;
static A68_249   DOFAOST = {"The remainder of the current command line."}; 
A_GISVEC(A68_VC ,EOFAOST,DOFAOST,42)
static A68_VC  FOFAOST_text_help;
static A68_INT  GOFAOST_text_no;
A68_175  IOFAOST_text_syntax;
static A68_250   OOFAOST = {" may not continue onto the next line"}; 
A_GISVEC(A68_VC ,POFAOST,OOFAOST,36)
static A68_232   HPFAOST = {"<contextname>"}; 
A_GISVEC(A68_VC ,IPFAOST,HPFAOST,13)
A68_VC  JPFAOST_contextname_str;
static A68_232   KPFAOST = {"<importsname>"}; 
A_GISVEC(A68_VC ,LPFAOST,KPFAOST,13)
A68_VC  MPFAOST_importname_str;
static A68_251   NPFAOST = {"An ELLA contextname has the same syntax as an ELLA identifier name."}; 
A_GISVEC(A68_VC ,OPFAOST,NPFAOST,67)
static A68_VC  PPFAOST_contextname_help;
static A68_252   QPFAOST = {"The name of an imports region.  This is specified by the \"/\" character immediately followed by an identifier (lower case) name."}; 
A_GISVEC(A68_VC ,RPFAOST,QPFAOST,127)
static A68_VC  SPFAOST_importname_help;
static A68_INT  TPFAOST_contextname_no;
static A68_INT  UPFAOST_importname_no;
A68_175  WPFAOST_contextname_syntax;
A68_175  YPFAOST_importname_syntax;
static A68_253   OQFAOST = {" expected after \"/\" in "}; 
A_GISVEC(A68_VC ,PQFAOST,OQFAOST,23)
static A68_225   MSFAOST = {"ON | OFF"}; 
A_GISVEC(A68_VC ,NSFAOST,MSFAOST,8)
A68_VC  OSFAOST_switch_str;
static A68_255   PSFAOST = {"This is used by certain commands to set or reset a flag.\"ON\" or \"OFF\" may be given in either case."}; 
A_GISVEC(A68_VC ,QSFAOST,PSFAOST,98)
static A68_VC  RSFAOST_switch_help;
static A68_INT  SSFAOST_switch_no;
A68_175  DTFAOST_switch_syntax;
static A68_257   GTFAOST = {"ON"}; 
A_GISVEC(A68_VC ,HTFAOST,GTFAOST,2)
static A68_219   MTFAOST = {"OFF"}; 
A_GISVEC(A68_VC ,NTFAOST,MTFAOST,3)
static A68_257   XTFAOST = {"ON"}; 
A_GISVEC(A68_VC ,YTFAOST,XTFAOST,2)
static A68_114   FUFAOST = {"= ON"}; 
A_GISVEC(A68_VC ,GUFAOST,FUFAOST,4)
static A68_231   SUFAOST = {"= OFF"}; 
A_GISVEC(A68_VC ,TUFAOST,SUFAOST,5)
static A68_219   AVFAOST = {":= "}; 
A_GISVEC(A68_VC ,BVFAOST,AVFAOST,3)
static A68_219   EVFAOST = {"OFF"}; 
A_GISVEC(A68_VC ,FVFAOST,EVFAOST,3)
static A68_257   IVFAOST = {"ON"}; 
A_GISVEC(A68_VC ,JVFAOST,IVFAOST,2)
static A68_242   OVFAOST = {"<word>"}; 
A_GISVEC(A68_VC ,PVFAOST,OVFAOST,6)
A68_VC  QVFAOST_word_str;
static A68_259   RVFAOST = {"A word is like a command name."}; 
A_GISVEC(A68_VC ,SVFAOST,RVFAOST,30)
static A68_VC  TVFAOST_word_help;
static A68_INT  UVFAOST_word_no;
A68_175  WVFAOST_word_syntax;
static A68_219   WWFAOST = {" | "}; 
A_GISVEC(A68_VC ,XWFAOST,WWFAOST,3)
static A68_261   FXFAOST = {" expected"}; 
A_GISVEC(A68_VC ,GXFAOST,FXFAOST,9)
static A68_242   NXFAOST = {"<trim>"}; 
A_GISVEC(A68_VC ,OXFAOST,NXFAOST,6)
A68_VC  PXFAOST_trim_str;
static A68_262   QXFAOST = {"Enclosed in square brackets (\"[ ]\") either: \"<number> .. <number>\", \"<number>\" implying a trim of size one, \".. <number>\" implying everything up to <number>, or, \"<number> ..\" implying everything from <number>."}; 
A_GISVEC(A68_VC ,RXFAOST,QXFAOST,210)
static A68_VC  SXFAOST_trim_help;
static A68_INT  TXFAOST_trim_no;
A68_175  VXFAOST_trim_syntax;
#define WXFAOST_trimsep ','
static A68_263   HYFAOST = {"\"..\" expected in "}; 
A_GISVEC(A68_VC ,IYFAOST,HYFAOST,17)
static A68_264   FZFAOST = {"\"]\" expected in "}; 
A_GISVEC(A68_VC ,GZFAOST,FZFAOST,16)
static A68_265   WZFAOST = {"\"..\" or \"]\" expected in "}; 
A_GISVEC(A68_VC ,XZFAOST,WZFAOST,24)
static A68_266   GAGAOST = {" or \"..\" expected after \"[\" in "}; 
A_GISVEC(A68_VC ,HAGAOST,GAGAOST,31)
static A68_265   CBGAOST = {"get_trim:  illegal value"}; 
A_GISVEC(A68_VC ,DBGAOST,CBGAOST,24)
static A68_220   QBGAOST = {" can't be less than "}; 
A_GISVEC(A68_VC ,RBGAOST,QBGAOST,20)
static A68_220   CCGAOST = {" can't be more than "}; 
A_GISVEC(A68_VC ,DCGAOST,CCGAOST,20)
static A68_220   OCGAOST = {" can't be less than "}; 
A_GISVEC(A68_VC ,PCGAOST,OCGAOST,20)
static A68_INT  YCGAOST_quoted_string_no;
A68_175  ADGAOST_quoted_string_syntax;
static A68_243   BDGAOST = {"\"<string>\""}; 
A_GISVEC(A68_VC ,CDGAOST,BDGAOST,10)
A68_VC  DDGAOST_quoted_string_str;
static A68_269   EDGAOST = {"Any characters enclosed in string quotes (\" \").  If the string quote character is required within the string it should be repeated (\"\")."}; 
A_GISVEC(A68_VC ,FDGAOST,EDGAOST,136)
static A68_VC  GDGAOST_quoted_string_help;
static A68_271   HEGAOST = {" not finished at end of line"}; 
A_GISVEC(A68_VC ,JEGAOST,HEGAOST,28)
static A68_INT  UEGAOST_character_no;
A68_175  WEGAOST_character_syntax;
static A68_221   XEGAOST = {"<character>"}; 
A_GISVEC(A68_VC ,YEGAOST,XEGAOST,11)
A68_VC  ZEGAOST_character_str;
static A68_245   AFGAOST = {"Any single printable character except comma and space (\",\" and \" \") which are used as separators."}; 
A_GISVEC(A68_VC ,BFGAOST,AFGAOST,97)
static A68_VC  CFGAOST_character_help;
typedef struct   /* env of non-global proc */
{
A68_INT * Int;
A68_230  HEFAOST_ifrdintsub;
} JEFAOST_ifrdintsub;
typedef struct   /* env of non-global proc */
{
int dummy;
} LJFAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ODGAOST_generator;

A68_BOOL  CYEAOST_opsymbol(A68_CHAR  C);

A68_VOID  HYEAOST_check_length(A68_INT  Length, A68_VC  Name, A68_97  Msg);

A68_VOID  EZEAOST_check_separator(A68_VC  Word_read, A68_VC  Name, A68_196  Separator, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  JZEAOST_legal_read(A68_VC  Word);

A68_BOOL  NZEAOST_illegal_read(A68_VC  Word);

A_STATIC A68_VOID  EBFAOST_read_plus(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IBFAOST_read_minus(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MBFAOST_read_period(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QBFAOST_read_semicolon(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UBFAOST_read_comma(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YBFAOST_read_openrnd(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CCFAOST_read_closernd(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GCFAOST_read_ampersand(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  KCFAOST_is_plus(A68_176  V);

A68_BOOL  NCFAOST_is_minus(A68_176  V);

A68_BOOL  QCFAOST_is_period(A68_176  V);

A68_BOOL  TCFAOST_is_semicolon(A68_176  V);

A68_BOOL  WCFAOST_is_comma(A68_176  V);

A68_BOOL  ZCFAOST_is_openrnd(A68_176  V);

A68_BOOL  CDFAOST_is_closernd(A68_176  V);

A68_BOOL  FDFAOST_is_ampersand(A68_176  V);

A68_BOOL  QDFAOST_if_rd_int(A68_INT * Int, A68_97  Msg);

A_STATIC A68_BOOL  VDFAOST_isdigitvalue(A68_CHAR  C, A68_INT  Radix, A68_INT * I);

A_STATIC A68_BOOL  IEFAOST_ifrdintsub(A68_INT  Radix, A68_INT  Radixsign, A68_97  Msg, void *NonLocals);

A68_VOID  PGFAOST_read_int_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CHFAOST_read_int(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  GHFAOST_is_int(A68_176  V);

A68_INT  KHFAOST_get_int(A68_176  V, A68_97  Msg);

A68_VOID  PHFAOST_read_ident_basic(A68_209  Rc, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KIFAOST_read_ident(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  OIFAOST_is_ident(A68_176  V);

A68_VOID  SIFAOST_get_ident(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  FJFAOST_read_fnname_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KJFAOST_generator(A68_BOOL  IJFAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DKFAOST_read_fnname(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  HKFAOST_is_fnname(A68_176  V);

A68_VOID  LKFAOST_get_fnname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  ELFAOST_is_name(A68_176  V);

A68_VOID  JLFAOST_get_name(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  AMFAOST_read_string_basic(A68_BOOL  Uc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IMFAOST_read_string(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  MMFAOST_is_string(A68_176  V);

A68_VOID  QMFAOST_get_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UMFAOST_get_string_uc(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JNFAOST_read_filename(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  SNFAOST_is_filename(A68_176  V);

A68_VOID  XNFAOST_get_filename(A68_176  V, A68_VC  Default, A68_97  Msg, A68_134  *ReturnedValue);

A_STATIC A68_VOID  KOFAOST_read_text(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  BPFAOST_is_text(A68_176  V);

A68_VOID  FPFAOST_get_text(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AQFAOST_read_contextname(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  EQFAOST_anonymous(A68_CHAR  C);

A_STATIC A68_VOID  LQFAOST_read_importname(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  SQFAOST_anonymous(A68_CHAR  C);

A68_BOOL  ZQFAOST_is_contextname(A68_176  V);

A68_BOOL  CRFAOST_is_importname(A68_176  V);

A68_BOOL  FRFAOST_is_ctname(A68_176  V);

A68_VOID  KRFAOST_get_contextname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  ORFAOST_get_importname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  URFAOST_get_ctname(A68_177  Values, A68_INT * Index, A68_VC  Default_contextname, A68_97  Msg, A68_158  *ReturnedValue);

A_STATIC A68_VOID  VSFAOST_generator(A68_BOOL  USFAOST_anonymous, A68_174  *ReturnedValue);

A_STATIC A68_VOID  FTFAOST_read_switch(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  QTFAOST_is_switch(A68_176  V);

A68_VOID  WTFAOST_set_switch(A68_176  V, A68_BOOL * Flag, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  YVFAOST_is_word(A68_176  V);

A68_INT  DWFAOST_get_word(A68_176  V, A68_97  Msg, A68_46  Words);

A_STATIC A68_VOID  YXFAOST_read_trim(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  QAGAOST_is_trim(A68_176  V);

A68_VOID  VAGAOST_get_trim(A68_176  V, A68_267  Bounds, A68_97  Msg, A68_267  *ReturnedValue);

A68_VOID  KDGAOST_delimited_read(A68_CHAR  Delim, A68_VC  Missing, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NDGAOST_generator(A68_BOOL  LDGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GEGAOST_read_quoted_string(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  OEGAOST_is_quoted_string(A68_176  V);

A68_VOID  SEGAOST_get_quoted_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EFGAOST_read_character(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  MFGAOST_is_character(A68_176  V);

A68_CHAR  QFGAOST_get_character(A68_176  V, A68_97  Msg);

A68_184 * UFGAOST_make_kernel_readers(void);

A_STATIC A68_BOOL  VDFAOST_isdigitvalue(A68_CHAR  C, A68_INT  Radix, A68_INT * I)
{ 
A68_BOOL  WDFAOST;  /* optbool result */
A68_BOOL  XDFAOST;  /* clause result */
A68_INT  YDFAOST_j;
A68_INT  ZDFAOST_k;
A68_VC  CEFAOST;  /* OPERATORS - simple index */
A68_BOOL  DEFAOST;  /* optbool result */
A_PROC_ENTRY(isdigitvalue);
 /* line 222: */
 /* line 223: */
{ 
WDFAOST = AKBAOST_digit(C);
if ( WDFAOST )
{ /* line 224: */
WDFAOST = (Radix==10);
}
 /* line 225: */
if ( WDFAOST )
{ 
(*I) = ((A68_INT)(unsigned char)C-NDFAOST_zero);
 /* line 226: */
 /* line 227: */
XDFAOST = A68_TRUE;
} 
else
{ 
YDFAOST_j = 0;
 /* line 228: */
for ( ZDFAOST_k = 1;
ZDFAOST_k <= 22;
ZDFAOST_k += 1 )
{ 
 /* line 229: */
if ( !((YDFAOST_j==0)) ) break;
CEFAOST = BEFAOST ;
if ( (C==A_VINDEX(CEFAOST,ZDFAOST_k)) )
{ 
YDFAOST_j = ZDFAOST_k;
} 
}
 /* line 230: */
if ( (YDFAOST_j>16) )
{ 
YDFAOST_j-=6;
} 
 /* line 231: */
DEFAOST = (YDFAOST_j==0);
if ( ! DEFAOST )
{ /* line 232: */
DEFAOST = (YDFAOST_j>Radix);
}
if ( DEFAOST )
{ 
 /* line 233: */
XDFAOST = A68_FALSE;
} 
else
{ 
(*I) = (YDFAOST_j-1);
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
XDFAOST = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(isdigitvalue);
return( XDFAOST );
} 
#undef NL

A_STATIC A68_BOOL  IEFAOST_ifrdintsub(A68_INT  Radix, A68_INT  Radixsign, A68_97  Msg, void *NonLocals)
#define NL(x) (((JEFAOST_ifrdintsub *)NonLocals)->x)
{ 
A68_BOOL  KEFAOST_overflow;
A68_INT  LEFAOST_digitvalue;
A68_CHAR  MEFAOST_c;
A68_INT  NEFAOST_sign;
A68_BOOL  OEFAOST;  /* optbool result */
A68_BOOL  PEFAOST;  /* optbool result */
A68_BOOL  QEFAOST;  /* optbool result */
A68_BOOL  REFAOST;  /* clause result */
A68_233  SEFAOST;  /* collateral clause result */
A68_52  VEFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WEFAOST;  /* YIELD */
A68_52  XEFAOST;  /* OPERATORS - mode -> union mode */
A68_52  AFFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BFFAOST;  /* YIELD */
A68_85  CFFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  DFFAOST;  /* avoid structure result */
A68_46  EFFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FFFAOST;  /* optbool result */
A68_INT  GFFAOST_j;
A68_BOOL  HFFAOST_ok;
A68_234  IFFAOST;  /* collateral clause result */
A68_INT  JFFAOST_i;
A68_32  KFFAOST;  /* OPERATORS - istruct -> vector */
A68_32  LFFAOST;  /* forall yield */
A68_INT * MFFAOST;  /* forall control - []x */
A68_INT  NFFAOST;  /* forall loop counter */
A68_BOOL  OFFAOST;  /* clause result */
A68_BOOL  PFFAOST;  /* clause result */
A68_236  QFFAOST;  /* collateral clause result */
A68_52  RFFAOST;  /* OPERATORS - mode -> union mode */
A68_52  UFFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  VFFAOST;  /* YIELD */
A68_85  WFFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  XFFAOST;  /* avoid structure result */
A68_46  YFFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  ZFFAOST;  /* collateral clause result */
A68_52  CGFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DGFAOST;  /* YIELD */
A68_52  EGFAOST;  /* OPERATORS - mode -> union mode */
A68_52  HGFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IGFAOST;  /* YIELD */
A68_85  JGFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  KGFAOST;  /* avoid structure result */
A68_46  LGFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ifrdintsub);
 /* line 241: */
 /* line 242: */
{ 
 /* line 243: */
 /* line 244: */
MEFAOST_c = FNBAOST_next_first_char(Msg);
 /* line 245: */
NEFAOST_sign = Radixsign;
 /* line 246: */
OEFAOST = (MEFAOST_c=='+');
if ( ! OEFAOST )
{ /* line 247: */
OEFAOST = (MEFAOST_c=='-');
}
if ( OEFAOST )
{ 
if ( (MEFAOST_c=='-') )
{ 
NEFAOST_sign = (-NEFAOST_sign);
} 
 /* line 248: */
 /* line 249: */
MEFAOST_c = YMBAOST_next_char(Msg);
} 
 /* line 250: */
 /* line 251: */
if ( VDFAOST_isdigitvalue(MEFAOST_c, Radix, (&LEFAOST_digitvalue)) )
{ 
(*NL(Int)) = (LEFAOST_digitvalue*NEFAOST_sign);
 /* line 252: */
for ( ;; )
{ 
 /* line 253: */
if ( !(VDFAOST_isdigitvalue(MEFAOST_c = YMBAOST_next_char(Msg), Radix, (&LEFAOST_digitvalue))) ) break;
PEFAOST = ((*NL(Int))>=HJDAOST_largeint);
if ( ! PEFAOST )
{ /* line 254: */
PEFAOST = ((*NL(Int))<=JJDAOST_largeminint);
}
if ( PEFAOST )
{ 
 /* line 255: */
QEFAOST = ((*NL(Int))>(AJDAOST_maxint/Radix));
if ( ! QEFAOST )
{QEFAOST = ((*NL(Int))<(IJDAOST_minint/Radix));
}
 /* line 256: */
if ( ! QEFAOST )
{{ 
(*NL(Int))*=Radix;
 /* line 257: */
REFAOST = ((*NL(Int))>(AJDAOST_maxint-LEFAOST_digitvalue));
} 
QEFAOST = REFAOST;
}
if ( ! QEFAOST )
{ /* line 258: */
QEFAOST = ((*NL(Int))<(IJDAOST_minint+LEFAOST_digitvalue));
}
if ( QEFAOST )
{ 
WEFAOST = UEFAOST ;
SEFAOST.data[0] = A_UNITE(VEFAOST,mode7,7,WEFAOST);
 /* line 259: */
SEFAOST.data[1] = A_UNITE(XEFAOST,mode7,7,JDFAOST_int_str);
BFFAOST = ZEFAOST ;
SEFAOST.data[2] = A_UNITE(AFFAOST,mode7,7,BFFAOST);
 /* line 260: */
UJBAOSL_oneline( A_HISVEC(CFFAOST,SEFAOST,3,A68_52 ), &DFFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(EFFAOST,DFFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(EFFAOST,DFFAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 261: */
 /* line 262: */
(*NL(Int))+=(LEFAOST_digitvalue*NEFAOST_sign);
} 
} 
else
{ 
 /* line 263: */
 /* line 264: */
(*NL(Int))*=Radix ;
(*NL(Int))+=(LEFAOST_digitvalue*NEFAOST_sign);
} 
}
 /* line 265: */
FFFAOST = (MEFAOST_c=='r');
if ( ! FFFAOST )
{ /* line 266: */
FFFAOST = (MEFAOST_c=='R');
}
if ( FFFAOST )
{ 
{ 
GFFAOST_j = A_ABS((*NL(Int)));
 /* line 267: */
HFFAOST_ok = A68_FALSE;
 /* line 268: */
IFFAOST.data[0] = 2;
IFFAOST.data[1] = 4;
IFFAOST.data[2] = 8;
IFFAOST.data[3] = 10;
IFFAOST.data[4] = 16;
LFFAOST = A_HISVEC(KFFAOST,IFFAOST,5,A68_INT ) ;
NFFAOST = LFFAOST.upb -1;
MFFAOST = LFFAOST.data;
for (;NFFAOST-- >= 0;
(MFFAOST++
) )
{
JFFAOST_i = *MFFAOST;
 /* line 269: */
if ( !(!HFFAOST_ok) ) break;
HFFAOST_ok = (JFFAOST_i==GFFAOST_j);
}
 /* line 270: */
 /* line 271: */
 /* line 272: */
 /* line 273: */
OFFAOST = HFFAOST_ok;
} 
if ( OFFAOST )
{ 
 /* line 274: */
if ( A_CALLPROC(NL(HEFAOST_ifrdintsub),(A_ABS((*NL(Int))), A_SIGN((*NL(Int))), Msg),(A_ABS((*NL(Int))), A_SIGN((*NL(Int))), Msg,(NL(HEFAOST_ifrdintsub)).nonlocals)) )
{ 
 /* line 275: */
PFFAOST = A68_TRUE;
} 
else
{ 
 /* line 276: */
QFFAOST.data[0] = A_UNITE(RFFAOST,mode7,7,JDFAOST_int_str);
VFFAOST = TFFAOST ;
QFFAOST.data[1] = A_UNITE(UFFAOST,mode7,7,VFFAOST);
UJBAOSL_oneline( A_HISVEC(WFFAOST,QFFAOST,2,A68_52 ), &XFFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(YFFAOST,XFFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(YFFAOST,XFFAOST,A68_VC ),(Msg).nonlocals));
 /* line 277: */
 /* line 279: */
 /* line 280: */
PFFAOST = A68_FALSE;
} 
} 
else
{ 
DGFAOST = BGFAOST ;
ZFFAOST.data[0] = A_UNITE(CGFAOST,mode7,7,DGFAOST);
 /* line 281: */
ZFFAOST.data[1] = A_UNITE(EGFAOST,mode7,7,JDFAOST_int_str);
IGFAOST = GGFAOST ;
ZFFAOST.data[2] = A_UNITE(HGFAOST,mode7,7,IGFAOST);
UJBAOSL_oneline( A_HISVEC(JGFAOST,ZFFAOST,3,A68_52 ), &KGFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(LGFAOST,KGFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(LGFAOST,KGFAOST,A68_VC ),(Msg).nonlocals));
 /* line 282: */
 /* line 283: */
 /* line 284: */
PFFAOST = A68_FALSE;
} 
} 
else
{ 
 /* line 285: */
 /* line 286: */
PFFAOST = A68_TRUE;
} 
} 
else
{ 
 /* line 287: */
 /* line 288: */
PFFAOST = A68_FALSE;
} 
} 
A_PROC_EXIT(ifrdintsub);
return( PFFAOST );
} 
#undef NL

A_STATIC A68_VOID  KJFAOST_generator(A68_BOOL  IJFAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LJFAOST_generator *)NonLocals)->x)
{ 
A68_VC  MJFAOST;  /* clause result */
A68_VC  NJFAOST;  /* OPERATORS - dynamic generator */
{ 
NJFAOST.upb = (*VKBAOST_rdcharend) ;
( IJFAOST_anonymous? A_VLOC(A68_CHAR ,NJFAOST): A_VHEAP(A68_CHAR ,NJFAOST) );
MJFAOST = NJFAOST;
} 
*ReturnedValue = (MJFAOST);
return;
} 
#undef NL

A_STATIC A68_BOOL  EQFAOST_anonymous(A68_CHAR  C)
{ 
A68_BOOL  FQFAOST;  /* optbool result */
A68_BOOL  GQFAOST;  /* clause result */
FQFAOST = (C=='/');
if ( ! FQFAOST )
{FQFAOST = (C==')');
}
GQFAOST = FQFAOST;
return( GQFAOST );
} 
#undef NL

A_STATIC A68_BOOL  SQFAOST_anonymous(A68_CHAR  C)
{ 
A68_BOOL  TQFAOST;  /* clause result */
TQFAOST = (C==')');
return( TQFAOST );
} 
#undef NL

A_STATIC A68_VOID  NDGAOST_generator(A68_BOOL  LDGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ODGAOST_generator *)NonLocals)->x)
{ 
A68_VC  PDGAOST;  /* clause result */
A68_VC  QDGAOST;  /* OPERATORS - dynamic generator */
{ 
QDGAOST.upb = (*VKBAOST_rdcharend) ;
( LDGAOST_anonymous? A_VLOC(A68_CHAR ,QDGAOST): A_VHEAP(A68_CHAR ,QDGAOST) );
PDGAOST = QDGAOST;
} 
*ReturnedValue = (PDGAOST);
return;
} 
#undef NL

A68_BOOL  CYEAOST_opsymbol(A68_CHAR  C)
{ 
A68_BOOL  DYEAOST;  /* clause result */
A_PROC_ENTRY(opsymbol);
DYEAOST = FJBAOST_instring(C, AYEAOST_opsymbols);
A_PROC_EXIT(opsymbol);
return( DYEAOST );
} 
#undef NL

A68_VOID  HYEAOST_check_length(A68_INT  Length, A68_VC  Name, A68_97  Msg)
{ 
A68_222  IYEAOST;  /* collateral clause result */
A68_52  LYEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  MYEAOST;  /* YIELD */
A68_52  NYEAOST;  /* OPERATORS - mode -> union mode */
A68_52  QYEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RYEAOST;  /* YIELD */
A68_52  SYEAOST;  /* OPERATORS - mode -> union mode */
A68_52  VYEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WYEAOST;  /* YIELD */
A68_85  XYEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  YYEAOST;  /* avoid structure result */
A68_46  ZYEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_length);
 /* line 129: */
 /* line 130: */
if ( (Length>OSCAOST_maxid) )
{ 
MYEAOST = KYEAOST ;
IYEAOST.data[0] = A_UNITE(LYEAOST,mode7,7,MYEAOST);
IYEAOST.data[1] = A_UNITE(NYEAOST,mode7,7,Name);
 /* line 131: */
RYEAOST = PYEAOST ;
IYEAOST.data[2] = A_UNITE(QYEAOST,mode7,7,RYEAOST);
IYEAOST.data[3] = A_UNITE(SYEAOST,mode1,1,OSCAOST_maxid);
WYEAOST = UYEAOST ;
IYEAOST.data[4] = A_UNITE(VYEAOST,mode7,7,WYEAOST);
 /* line 132: */
UJBAOSL_oneline( A_HISVEC(XYEAOST,IYEAOST,5,A68_52 ), &YYEAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ZYEAOST,YYEAOST,A68_VC )),(WHAAOSI_user, A_HVEC(ZYEAOST,YYEAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(check_length);
return;
} 
#undef NL
 /* line 136: */

A68_VOID  EZEAOST_check_separator(A68_VC  Word_read, A68_VC  Name, A68_196  Separator, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  FZEAOST;  /* optbool result */
A68_VC  GZEAOST;  /* clause result */
A68_VC  HZEAOST;  /* avoid structure result */
A_PROC_ENTRY(check_separator);
 /* line 139: */
FZEAOST = ! A_VSTRUCTCOMP(Word_read,YNAAOSL_nilstr);
if ( FZEAOST )
{ /* line 140: */
FZEAOST = (Word_read.upb>0);
}
if ( FZEAOST )
{ 
 /* line 141: */
if ( A_CALLPROC(Separator,((*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno))))),((*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno)))),(Separator).nonlocals)) )
{ 
(*WKBAOST_rdcharno)-=1;
 /* line 142: */
 /* line 143: */
GZEAOST = Word_read;
} 
else
{ 
 /* line 144: */
 /* line 145: */
 /* line 146: */
GBCAOST_check_read( Word_read, Name, Msg, &HZEAOST );
GZEAOST = HZEAOST;
} 
} 
else
{ 
GZEAOST = Word_read;
} 
A_PROC_EXIT(check_separator);
*ReturnedValue = (GZEAOST);
return;
} 
#undef NL

A68_BOOL  JZEAOST_legal_read(A68_VC  Word)
{ 
A68_BOOL  KZEAOST;  /* optbool result */
A68_BOOL  LZEAOST;  /* clause result */
A_PROC_ENTRY(legal_read);
 /* line 150: */
KZEAOST = ! A_VSTRUCTCOMP(Word,YNAAOSL_nilstr);
if ( KZEAOST )
{KZEAOST = (Word.upb>0);
}
LZEAOST = KZEAOST;
A_PROC_EXIT(legal_read);
return( LZEAOST );
} 
#undef NL

A68_BOOL  NZEAOST_illegal_read(A68_VC  Word)
{ 
A68_BOOL  OZEAOST;  /* clause result */
A_PROC_ENTRY(illegal_read);
 /* line 153: */
OZEAOST = A_VSTRUCTCOMP(Word,YNAAOSL_nilstr);
A_PROC_EXIT(illegal_read);
return( OZEAOST );
} 
#undef NL

A_STATIC A68_VOID  EBFAOST_read_plus(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  FBFAOST;  /* clause result */
A68_VC  GBFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_plus);
PDCAOST_read_char( '+', Msg, &GBFAOST );
FBFAOST = GBFAOST;
A_PROC_EXIT(read_plus);
*ReturnedValue = (FBFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  IBFAOST_read_minus(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  JBFAOST;  /* clause result */
A68_VC  KBFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_minus);
PDCAOST_read_char( '-', Msg, &KBFAOST );
JBFAOST = KBFAOST;
A_PROC_EXIT(read_minus);
*ReturnedValue = (JBFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  MBFAOST_read_period(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  NBFAOST;  /* clause result */
A68_VC  OBFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_period);
PDCAOST_read_char( '.', Msg, &OBFAOST );
NBFAOST = OBFAOST;
A_PROC_EXIT(read_period);
*ReturnedValue = (NBFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  QBFAOST_read_semicolon(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  RBFAOST;  /* clause result */
A68_VC  SBFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_semicolon);
PDCAOST_read_char( ';', Msg, &SBFAOST );
RBFAOST = SBFAOST;
A_PROC_EXIT(read_semicolon);
*ReturnedValue = (RBFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  UBFAOST_read_comma(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  VBFAOST;  /* clause result */
A68_VC  WBFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_comma);
PDCAOST_read_char( ',', Msg, &WBFAOST );
VBFAOST = WBFAOST;
A_PROC_EXIT(read_comma);
*ReturnedValue = (VBFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  YBFAOST_read_openrnd(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ZBFAOST;  /* clause result */
A68_VC  ACFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_openrnd);
PDCAOST_read_char( '(', Msg, &ACFAOST );
ZBFAOST = ACFAOST;
A_PROC_EXIT(read_openrnd);
*ReturnedValue = (ZBFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  CCFAOST_read_closernd(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  DCFAOST;  /* clause result */
A68_VC  ECFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_closernd);
PDCAOST_read_char( ')', Msg, &ECFAOST );
DCFAOST = ECFAOST;
A_PROC_EXIT(read_closernd);
*ReturnedValue = (DCFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  GCFAOST_read_ampersand(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  HCFAOST;  /* clause result */
A68_VC  ICFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_ampersand);
PDCAOST_read_char( '&', Msg, &ICFAOST );
HCFAOST = ICFAOST;
A_PROC_EXIT(read_ampersand);
*ReturnedValue = (HCFAOST);
return;
} 
#undef NL

A68_BOOL  KCFAOST_is_plus(A68_176  V)
{ 
A68_BOOL  LCFAOST;  /* clause result */
A_PROC_ENTRY(is_plus);
LCFAOST = (V.Sort==FAFAOST_plus_no);
A_PROC_EXIT(is_plus);
return( LCFAOST );
} 
#undef NL

A68_BOOL  NCFAOST_is_minus(A68_176  V)
{ 
A68_BOOL  OCFAOST;  /* clause result */
A_PROC_ENTRY(is_minus);
OCFAOST = (V.Sort==GAFAOST_minus_no);
A_PROC_EXIT(is_minus);
return( OCFAOST );
} 
#undef NL

A68_BOOL  QCFAOST_is_period(A68_176  V)
{ 
A68_BOOL  RCFAOST;  /* clause result */
A_PROC_ENTRY(is_period);
RCFAOST = (V.Sort==HAFAOST_period_no);
A_PROC_EXIT(is_period);
return( RCFAOST );
} 
#undef NL

A68_BOOL  TCFAOST_is_semicolon(A68_176  V)
{ 
A68_BOOL  UCFAOST;  /* clause result */
A_PROC_ENTRY(is_semicolon);
UCFAOST = (V.Sort==FAFAOST_plus_no);
A_PROC_EXIT(is_semicolon);
return( UCFAOST );
} 
#undef NL

A68_BOOL  WCFAOST_is_comma(A68_176  V)
{ 
A68_BOOL  XCFAOST;  /* clause result */
A_PROC_ENTRY(is_comma);
XCFAOST = (V.Sort==GAFAOST_minus_no);
A_PROC_EXIT(is_comma);
return( XCFAOST );
} 
#undef NL

A68_BOOL  ZCFAOST_is_openrnd(A68_176  V)
{ 
A68_BOOL  ADFAOST;  /* clause result */
A_PROC_ENTRY(is_openrnd);
ADFAOST = (V.Sort==HAFAOST_period_no);
A_PROC_EXIT(is_openrnd);
return( ADFAOST );
} 
#undef NL

A68_BOOL  CDFAOST_is_closernd(A68_176  V)
{ 
A68_BOOL  DDFAOST;  /* clause result */
A_PROC_ENTRY(is_closernd);
DDFAOST = (V.Sort==FAFAOST_plus_no);
A_PROC_EXIT(is_closernd);
return( DDFAOST );
} 
#undef NL

A68_BOOL  FDFAOST_is_ampersand(A68_176  V)
{ 
A68_BOOL  GDFAOST;  /* clause result */
A_PROC_ENTRY(is_ampersand);
GDFAOST = (V.Sort==GAFAOST_minus_no);
A_PROC_EXIT(is_ampersand);
return( GDFAOST );
} 
#undef NL

A68_BOOL  QDFAOST_if_rd_int(A68_INT * Int, A68_97  Msg)
{ 
A68_230  HEFAOST_ifrdintsub;   /* proc value of non-global proc */
A68_BOOL  MGFAOST;  /* clause result */
A_PROC_ENTRY(if_rd_int);
 /* line 218: */
 /* line 221: */
{ 
 /* line 240: */
A_CLOSURE( HEFAOST_ifrdintsub, IEFAOST_ifrdintsub, JEFAOST_ifrdintsub );
(( JEFAOST_ifrdintsub * ) ( HEFAOST_ifrdintsub.nonlocals )) -> Int = Int;
(( JEFAOST_ifrdintsub * ) ( HEFAOST_ifrdintsub.nonlocals )) -> HEFAOST_ifrdintsub = HEFAOST_ifrdintsub;
 /* line 290: */
 /* line 291: */
MGFAOST = A_CALLPROC(HEFAOST_ifrdintsub,(10, 1, Msg),(10, 1, Msg,(HEFAOST_ifrdintsub).nonlocals));
} 
A_PROC_EXIT(if_rd_int);
return( MGFAOST );
} 
#undef NL

A68_VOID  PGFAOST_read_int_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_INT  QGFAOST_int;
A68_52  RGFAOST;  /* OPERATORS - mode -> union mode */
A68_85  SGFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TGFAOST;  /* avoid structure result */
A68_VC  UGFAOST_ans;
A68_VC  VGFAOST;  /* clause result */
A68_VC  WGFAOST;  /* avoid structure result */
A68_VC  XGFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_int_basic);
 /* line 295: */
 /* line 296: */
{ 
 /* line 297: */
 /* line 298: */
if ( Rc.Get_first )
{ 
BNBAOST_first_char(Msg);
 /* line 299: */
(*WKBAOST_rdcharno)-=1;
} 
 /* line 300: */
 /* line 301: */
 /* line 302: */
if ( QDFAOST_if_rd_int((&QGFAOST_int), Msg) )
{ 
UJBAOSL_oneline( A_HVEC(SGFAOST,A_UNITE(RGFAOST,mode1,1,QGFAOST_int),A68_52 ), &TGFAOST );
UGFAOST_ans = TGFAOST;
 /* line 303: */
if ( Rc.Check )
{ 
GBCAOST_check_read( UGFAOST_ans, JDFAOST_int_str, Msg, &WGFAOST );
VGFAOST = WGFAOST;
} 
else
{ 
 /* line 304: */
 /* line 305: */
VGFAOST = UGFAOST_ans;
} 
} 
else
{ 
 /* line 306: */
ZACAOST_nothing_read(  &XGFAOST );
VGFAOST = XGFAOST;
} 
} 
A_PROC_EXIT(read_int_basic);
*ReturnedValue = (VGFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  CHFAOST_read_int(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  DHFAOST;  /* clause result */
A68_VC  EHFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_int);
PGFAOST_read_int_basic( NCCAOST_first_and_check, Msg, &EHFAOST );
DHFAOST = EHFAOST;
A_PROC_EXIT(read_int);
*ReturnedValue = (DHFAOST);
return;
} 
#undef NL

A68_BOOL  GHFAOST_is_int(A68_176  V)
{ 
A68_BOOL  HHFAOST;  /* clause result */
A_PROC_ENTRY(is_int);
HHFAOST = (V.Sort==YGFAOST_int_no);
A_PROC_EXIT(is_int);
return( HHFAOST );
} 
#undef NL

A68_INT  KHFAOST_get_int(A68_176  V, A68_97  Msg)
{ 
A68_INT  LHFAOST;  /* clause result */
A_PROC_ENTRY(get_int);
 /* line 319: */
 /* line 320: */
{ 
BCCAOST_check_value(V, YGFAOST_int_no, Msg);
 /* line 321: */
 /* line 322: */
LHFAOST = XVCAOST_charstoint(V.Value, A_HEAP(A68_BOOL ));
} 
A_PROC_EXIT(get_int);
return( LHFAOST );
} 
#undef NL

A68_VOID  PHFAOST_read_ident_basic(A68_209  Rc, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  QHFAOST;  /* clause result */
A68_CHAR  RHFAOST_c;
A68_INT  SHFAOST_start;
A68_BOOL  THFAOST;  /* optbool result */
A68_VC  UHFAOST;  /* OPERATORS - trim index */
A68_VC  VHFAOST;  /* avoid structure result */
A68_VC  WHFAOST_ident;
A68_VC  XHFAOST;  /* clause result */
A68_VC  YHFAOST;  /* avoid structure result */
A68_VC  ZHFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_ident_basic);
 /* line 331: */
 /* line 333: */
{ 
if ( Rc.Get_first )
{ 
QHFAOST = BNBAOST_first_char(Msg);
} 
else
{ 
QHFAOST = FNBAOST_next_first_char(Msg);
} 
RHFAOST_c = QHFAOST;
 /* line 334: */
 /* line 335: */
if ( EKBAOST_letter(RHFAOST_c) )
{ 
SHFAOST_start = (*WKBAOST_rdcharno);
 /* line 336: */
for ( ;; )
{ 
THFAOST = EKBAOST_letter(RHFAOST_c);
if ( ! THFAOST )
{THFAOST = AKBAOST_digit(RHFAOST_c);
}
if ( ! THFAOST )
{ /* line 337: */
THFAOST = XJBAOST_visible_space(RHFAOST_c);
}
if ( !(THFAOST) ) break;
RHFAOST_c = YMBAOST_next_char(Msg);
}
 /* line 338: */
ZAAAOSI_makervc( A_VTRIM(UHFAOST,((*UKBAOST_rdbuffer)),A_VTSCRIPT(&(UHFAOST.upb),((*UKBAOST_rdbuffer)).upb,SHFAOST_start,((*WKBAOST_rdcharno)-1))), &VHFAOST );
WHFAOST_ident = VHFAOST;
 /* line 339: */
HYEAOST_check_length(WHFAOST_ident.upb, Name, Msg);
 /* line 340: */
if ( Rc.Check )
{ 
GBCAOST_check_read( WHFAOST_ident, Name, Msg, &YHFAOST );
XHFAOST = YHFAOST;
} 
else
{ 
 /* line 341: */
 /* line 342: */
XHFAOST = WHFAOST_ident;
} 
} 
else
{ 
 /* line 343: */
ZACAOST_nothing_read(  &ZHFAOST );
XHFAOST = ZHFAOST;
} 
} 
A_PROC_EXIT(read_ident_basic);
*ReturnedValue = (XHFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  KIFAOST_read_ident(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  LIFAOST;  /* clause result */
A68_VC  MIFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_ident);
 /* line 356: */
PHFAOST_read_ident_basic( NCCAOST_first_and_check, CIFAOST_ident_str, Msg, &MIFAOST );
LIFAOST = MIFAOST;
A_PROC_EXIT(read_ident);
*ReturnedValue = (LIFAOST);
return;
} 
#undef NL

A68_BOOL  OIFAOST_is_ident(A68_176  V)
{ 
A68_BOOL  PIFAOST;  /* clause result */
A_PROC_ENTRY(is_ident);
PIFAOST = (V.Sort==GIFAOST_ident_no);
A_PROC_EXIT(is_ident);
return( PIFAOST );
} 
#undef NL

A68_VOID  SIFAOST_get_ident(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  TIFAOST;  /* clause result */
A_PROC_ENTRY(get_ident);
 /* line 361: */
 /* line 362: */
{ 
BCCAOST_check_value(V, GIFAOST_ident_no, Msg);
 /* line 363: */
 /* line 364: */
TIFAOST = V.Value;
} 
A_PROC_EXIT(get_ident);
*ReturnedValue = (TIFAOST);
return;
} 
#undef NL

A68_VOID  FJFAOST_read_fnname_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  GJFAOST;  /* clause result */
A68_CHAR  HJFAOST_c;
A68_31  JJFAOST_generator;   /* proc value of non-global proc */
A68_VC  PJFAOST;  /* avoid structure result */
A68_VC  OJFAOST_answer;
A68_INT  QJFAOST_endanswer;
A68_BOOL  RJFAOST;  /* optbool result */
A68_INT  SJFAOST;  /* YIELD */
A68_CHAR * TJFAOST;  /* YIELD */
A68_INT  UJFAOST;  /* YIELD */
A68_CHAR * VJFAOST;  /* YIELD */
A68_VC  WJFAOST;  /* OPERATORS - trim index */
A68_VC  XJFAOST;  /* avoid structure result */
A68_VC  YJFAOST_ans;
A68_VC  ZJFAOST;  /* clause result */
A68_VC  AKFAOST;  /* avoid structure result */
A68_VC  BKFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_fnname_basic);
 /* line 382: */
 /* line 384: */
{ 
if ( Rc.Get_first )
{ 
GJFAOST = BNBAOST_first_char(Msg);
} 
else
{ 
GJFAOST = FNBAOST_next_first_char(Msg);
} 
HJFAOST_c = GJFAOST;
 /* line 385: */
A_CLOSURE( JJFAOST_generator, KJFAOST_generator, LJFAOST_generator );
A_CALLPROC(JJFAOST_generator,(A68_TRUE, &PJFAOST),(A68_TRUE, &PJFAOST,(JJFAOST_generator).nonlocals));
OJFAOST_answer = PJFAOST;
 /* line 386: */
QJFAOST_endanswer = 0;
 /* line 387: */
 /* line 388: */
if ( IKBAOST_bold(HJFAOST_c) )
{ 
for ( ;; )
{ 
RJFAOST = IKBAOST_bold(HJFAOST_c);
if ( ! RJFAOST )
{RJFAOST = AKBAOST_digit(HJFAOST_c);
}
if ( ! RJFAOST )
{ /* line 389: */
RJFAOST = XJBAOST_visible_space(HJFAOST_c);
}
if ( !(RJFAOST) ) break;
SJFAOST = QJFAOST_endanswer+=1 ;
TJFAOST = (&A_VINDEX(OJFAOST_answer,SJFAOST)) ;
(*TJFAOST) = HJFAOST_c;
 /* line 390: */
 /* line 391: */
HJFAOST_c = YMBAOST_next_char(Msg);
}
 /* line 392: */
} 
else
{ 
for ( ;; )
{ 
 /* line 393: */
if ( !(CYEAOST_opsymbol(HJFAOST_c)) ) break;
UJFAOST = QJFAOST_endanswer+=1 ;
VJFAOST = (&A_VINDEX(OJFAOST_answer,UJFAOST)) ;
(*VJFAOST) = HJFAOST_c;
 /* line 394: */
 /* line 395: */
HJFAOST_c = YMBAOST_next_char(Msg);
}
 /* line 396: */
} 
 /* line 397: */
 /* line 398: */
if ( (QJFAOST_endanswer>0) )
{ 
HYEAOST_check_length(QJFAOST_endanswer, WIFAOST_fnname_str, Msg);
 /* line 399: */
ZAAAOSI_makervc( A_VTRIM(WJFAOST,(OJFAOST_answer),A_VTSCRIPT(&(WJFAOST.upb),(OJFAOST_answer).upb,1,QJFAOST_endanswer)), &XJFAOST );
YJFAOST_ans = XJFAOST;
 /* line 400: */
if ( Rc.Check )
{ 
GBCAOST_check_read( YJFAOST_ans, WIFAOST_fnname_str, Msg, &AKFAOST );
ZJFAOST = AKFAOST;
} 
else
{ 
 /* line 401: */
 /* line 402: */
ZJFAOST = YJFAOST_ans;
} 
} 
else
{ 
 /* line 403: */
ZACAOST_nothing_read(  &BKFAOST );
ZJFAOST = BKFAOST;
} 
} 
A_PROC_EXIT(read_fnname_basic);
*ReturnedValue = (ZJFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  DKFAOST_read_fnname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EKFAOST;  /* clause result */
A68_VC  FKFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_fnname);
 /* line 407: */
FJFAOST_read_fnname_basic( NCCAOST_first_and_check, Msg, &FKFAOST );
EKFAOST = FKFAOST;
A_PROC_EXIT(read_fnname);
*ReturnedValue = (EKFAOST);
return;
} 
#undef NL

A68_BOOL  HKFAOST_is_fnname(A68_176  V)
{ 
A68_BOOL  IKFAOST;  /* clause result */
A_PROC_ENTRY(is_fnname);
IKFAOST = (V.Sort==AJFAOST_fnname_no);
A_PROC_EXIT(is_fnname);
return( IKFAOST );
} 
#undef NL

A68_VOID  LKFAOST_get_fnname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MKFAOST;  /* clause result */
A_PROC_ENTRY(get_fnname);
 /* line 412: */
 /* line 413: */
{ 
BCCAOST_check_value(V, AJFAOST_fnname_no, Msg);
 /* line 414: */
 /* line 415: */
MKFAOST = V.Value;
} 
A_PROC_EXIT(get_fnname);
*ReturnedValue = (MKFAOST);
return;
} 
#undef NL

A68_BOOL  ELFAOST_is_name(A68_176  V)
{ 
A68_BOOL  FLFAOST;  /* optbool result */
A68_BOOL  GLFAOST;  /* clause result */
A_PROC_ENTRY(is_name);
 /* line 432: */
FLFAOST = (V.Sort==GIFAOST_ident_no);
if ( ! FLFAOST )
{FLFAOST = (V.Sort==AJFAOST_fnname_no);
}
GLFAOST = FLFAOST;
A_PROC_EXIT(is_name);
return( GLFAOST );
} 
#undef NL

A68_VOID  JLFAOST_get_name(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  KLFAOST;  /* clause result */
A_PROC_ENTRY(get_name);
 /* line 435: */
 /* line 436: */
{ 
if ( (V.Sort!=GIFAOST_ident_no) )
{ 
BCCAOST_check_value(V, AJFAOST_fnname_no, Msg);
} 
 /* line 437: */
 /* line 438: */
KLFAOST = V.Value;
} 
A_PROC_EXIT(get_name);
*ReturnedValue = (KLFAOST);
return;
} 
#undef NL

A68_VOID  AMFAOST_read_string_basic(A68_BOOL  Uc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  BMFAOST_c;
A68_INT  CMFAOST_start;
A68_VC  DMFAOST;  /* clause result */
A68_VC  EMFAOST;  /* OPERATORS - trim index */
A68_VC  FMFAOST;  /* avoid structure result */
A68_VC  GMFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_string_basic);
 /* line 458: */
 /* line 460: */
{ 
BMFAOST_c = BNBAOST_first_char(Msg);
 /* line 461: */
CMFAOST_start = (*WKBAOST_rdcharno);
 /* line 462: */
for ( ;; )
{ 
 /* line 463: */
if ( !(!TJBAOST_separator(BMFAOST_c)) ) break;
BMFAOST_c = YMBAOST_next_char(Msg);
}
 /* line 464: */
 /* line 465: */
ZAAAOSI_makervc( A_VTRIM(EMFAOST,((*UKBAOST_rdbuffer)),A_VTSCRIPT(&(EMFAOST.upb),((*UKBAOST_rdbuffer)).upb,CMFAOST_start,((*WKBAOST_rdcharno)-1))), &FMFAOST );
GBCAOST_check_read( FMFAOST, RLFAOST_string_str, Msg, &GMFAOST );
DMFAOST = GMFAOST;
} 
A_PROC_EXIT(read_string_basic);
*ReturnedValue = (DMFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  IMFAOST_read_string(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  JMFAOST;  /* clause result */
A68_VC  KMFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_string);
AMFAOST_read_string_basic( A68_TRUE, Msg, &KMFAOST );
JMFAOST = KMFAOST;
A_PROC_EXIT(read_string);
*ReturnedValue = (JMFAOST);
return;
} 
#undef NL

A68_BOOL  MMFAOST_is_string(A68_176  V)
{ 
A68_BOOL  NMFAOST;  /* clause result */
A_PROC_ENTRY(is_string);
NMFAOST = (V.Sort==VLFAOST_string_no);
A_PROC_EXIT(is_string);
return( NMFAOST );
} 
#undef NL

A68_VOID  QMFAOST_get_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  RMFAOST;  /* clause result */
A_PROC_ENTRY(get_string);
 /* line 473: */
 /* line 474: */
{ 
BCCAOST_check_value(V, VLFAOST_string_no, Msg);
 /* line 475: */
 /* line 476: */
RMFAOST = V.Value;
} 
A_PROC_EXIT(get_string);
*ReturnedValue = (RMFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  UMFAOST_get_string_uc(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR * VMFAOST_c;
A68_VC  WMFAOST;  /* forall yield */
A68_INT  XMFAOST;  /* forall loop counter */
A68_VC  YMFAOST;  /* clause result */
A_PROC_ENTRY(get_string_uc);
 /* line 480: */
 /* line 481: */
{ 
BCCAOST_check_value(V, VLFAOST_string_no, Msg);
 /* line 482: */
WMFAOST = V.Value ;
XMFAOST = WMFAOST.upb -1;
VMFAOST_c = WMFAOST.data;
for (;XMFAOST-- >= 0;
(VMFAOST_c++
) )
{
if ( EKBAOST_letter((*VMFAOST_c)) )
{ 
(*VMFAOST_c) = MKBAOST_upper_case((*VMFAOST_c));
} 
}
 /* line 483: */
 /* line 484: */
YMFAOST = V.Value;
} 
A_PROC_EXIT(get_string_uc);
*ReturnedValue = (YMFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  JNFAOST_read_filename(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  KNFAOST_c;
A68_INT  LNFAOST_start;
A68_VC  MNFAOST;  /* clause result */
A68_VC  NNFAOST;  /* OPERATORS - trim index */
A68_VC  ONFAOST;  /* avoid structure result */
A68_VC  PNFAOST;  /* avoid structure result */
A68_VC  QNFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_filename);
 /* line 507: */
 /* line 509: */
{ 
KNFAOST_c = BNBAOST_first_char(Msg);
 /* line 510: */
LNFAOST_start = (*WKBAOST_rdcharno);
 /* line 513: */
for ( ;; )
{ 
 /* line 514: */
if ( !(!TJBAOST_separator(KNFAOST_c)) ) break;
KNFAOST_c = YMBAOST_next_char(Msg);
}
 /* line 515: */
 /* line 516: */
if ( (((*WKBAOST_rdcharno)-LNFAOST_start)>0) )
{ 
 /* line 517: */
 /* line 518: */
ZAAAOSI_makervc( A_VTRIM(NNFAOST,((*UKBAOST_rdbuffer)),A_VTSCRIPT(&(NNFAOST.upb),((*UKBAOST_rdbuffer)).upb,LNFAOST_start,((*WKBAOST_rdcharno)-1))), &ONFAOST );
GBCAOST_check_read( ONFAOST, BNFAOST_filename_str, Msg, &PNFAOST );
MNFAOST = PNFAOST;
} 
else
{ 
 /* line 519: */
ZACAOST_nothing_read(  &QNFAOST );
MNFAOST = QNFAOST;
} 
} 
A_PROC_EXIT(read_filename);
*ReturnedValue = (MNFAOST);
return;
} 
#undef NL

A68_BOOL  SNFAOST_is_filename(A68_176  V)
{ 
A68_BOOL  TNFAOST;  /* clause result */
A_PROC_ENTRY(is_filename);
TNFAOST = (V.Sort==FNFAOST_filename_no);
A_PROC_EXIT(is_filename);
return( TNFAOST );
} 
#undef NL

A68_VOID  XNFAOST_get_filename(A68_176  V, A68_VC  Default, A68_97  Msg, A68_134  *ReturnedValue)
{ 
A68_134  YNFAOST;  /* clause result */
A68_134  ZNFAOST;  /* avoid structure result */
A_PROC_ENTRY(get_filename);
 /* line 525: */
 /* line 526: */
{ 
BCCAOST_check_value(V, FNFAOST_filename_no, Msg);
 /* line 527: */
 /* line 528: */
TNCAOSI_parse_filename( V.Value, Default, Msg, &ZNFAOST );
YNFAOST = ZNFAOST;
} 
A_PROC_EXIT(get_filename);
*ReturnedValue = (YNFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  KOFAOST_read_text(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  LOFAOST;  /* optbool result */
A68_236  MOFAOST;  /* collateral clause result */
A68_52  NOFAOST;  /* OPERATORS - mode -> union mode */
A68_52  QOFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ROFAOST;  /* YIELD */
A68_85  SOFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  TOFAOST;  /* avoid structure result */
A68_46  UOFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VOFAOST;  /* clause result */
A68_VC  WOFAOST;  /* avoid structure result */
A68_VC  XOFAOST;  /* OPERATORS - trim index */
A68_VC  YOFAOST;  /* avoid structure result */
A68_VC  ZOFAOST_text;
A_PROC_ENTRY(read_text);
 /* line 543: */
 /* line 544: */
{ 
if ( ((*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno))))!=KJBAOST_sp) )
{ 
(*WKBAOST_rdcharno)+=1;
} 
 /* line 545: */
(*XKBAOST_start_of_word) = (*WKBAOST_rdcharno);
 /* line 546: */
for ( ;; )
{ 
LOFAOST = ((*WKBAOST_rdcharno)<(*VKBAOST_rdcharend));
if ( LOFAOST )
{ /* line 547: */
LOFAOST = QJBAOST_space((*(&A_VINDEX((*UKBAOST_rdbuffer),(*WKBAOST_rdcharno)))));
}
if ( !(LOFAOST) ) break;
(*WKBAOST_rdcharno)+=1;
}
 /* line 548: */
 /* line 549: */
if ( ((*(&A_VINDEX((*UKBAOST_rdbuffer),(*VKBAOST_rdcharend))))==KJBAOST_sp) )
{ 
 /* line 550: */
MOFAOST.data[0] = A_UNITE(NOFAOST,mode7,7,COFAOST_text_str);
ROFAOST = POFAOST ;
MOFAOST.data[1] = A_UNITE(QOFAOST,mode7,7,ROFAOST);
UJBAOSL_oneline( A_HISVEC(SOFAOST,MOFAOST,2,A68_52 ), &TOFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(UOFAOST,TOFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(UOFAOST,TOFAOST,A68_VC ),(Msg).nonlocals));
 /* line 551: */
 /* line 552: */
VOFAOST = YNAAOSL_nilstr;
} 
else
{ 
 /* line 553: */
 /* line 554: */
if ( ((*WKBAOST_rdcharno)==(*VKBAOST_rdcharend)) )
{ 
ZACAOST_nothing_read(  &WOFAOST );
VOFAOST = WOFAOST;
} 
else
{ 
ZAAAOSI_makervc( A_VTRIM(XOFAOST,((*UKBAOST_rdbuffer)),A_VTSCRIPT(&(XOFAOST.upb),((*UKBAOST_rdbuffer)).upb,(*WKBAOST_rdcharno),((*VKBAOST_rdcharend)-1))), &YOFAOST );
ZOFAOST_text = YOFAOST;
 /* line 555: */
(*WKBAOST_rdcharno) = ((*VKBAOST_rdcharend)-1);
 /* line 556: */
 /* line 557: */
 /* line 558: */
VOFAOST = ZOFAOST_text;
} 
} 
} 
A_PROC_EXIT(read_text);
*ReturnedValue = (VOFAOST);
return;
} 
#undef NL

A68_BOOL  BPFAOST_is_text(A68_176  V)
{ 
A68_BOOL  CPFAOST;  /* clause result */
A_PROC_ENTRY(is_text);
CPFAOST = (V.Sort==GOFAOST_text_no);
A_PROC_EXIT(is_text);
return( CPFAOST );
} 
#undef NL

A68_VOID  FPFAOST_get_text(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  GPFAOST;  /* clause result */
A_PROC_ENTRY(get_text);
 /* line 563: */
 /* line 564: */
{ 
BCCAOST_check_value(V, GOFAOST_text_no, Msg);
 /* line 565: */
 /* line 566: */
GPFAOST = V.Value;
} 
A_PROC_EXIT(get_text);
*ReturnedValue = (GPFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  AQFAOST_read_contextname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  BQFAOST;  /* avoid structure result */
A68_VC  CQFAOST_context;
A68_VC  HQFAOST;  /* clause result */
A68_196  IQFAOST;  /* procedure value */
A68_VC  JQFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_contextname);
 /* line 588: */
 /* line 595: */
{ 
PHFAOST_read_ident_basic( PCCAOST_get_first, JPFAOST_contextname_str, Msg, &BQFAOST );
CQFAOST_context = BQFAOST;
 /* line 596: */
 /* line 597: */
 /* line 598: */
IQFAOST.fn.fn_global = EQFAOST_anonymous;
IQFAOST.nonlocals = A68_NIL;
EZEAOST_check_separator( CQFAOST_context, JPFAOST_contextname_str, IQFAOST, Msg, &JQFAOST );
HQFAOST = JQFAOST;
} 
A_PROC_EXIT(read_contextname);
*ReturnedValue = (HQFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  LQFAOST_read_importname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MQFAOST;  /* avoid structure result */
A68_VC  NQFAOST_import;
A68_46  QQFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UQFAOST;  /* clause result */
A68_196  VQFAOST;  /* procedure value */
A68_VC  WQFAOST;  /* avoid structure result */
A68_VC  XQFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_importname);
 /* line 601: */
 /* line 602: */
if ( (BNBAOST_first_char(Msg)=='/') )
{ 
PHFAOST_read_ident_basic( TCCAOST_not_first, MPFAOST_importname_str, Msg, &MQFAOST );
NQFAOST_import = MQFAOST;
 /* line 603: */
 /* line 604: */
if ( !JZEAOST_legal_read(NQFAOST_import) )
{ 
 /* line 605: */
 /* line 606: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(QQFAOST,A_VC_PLUS(A_VC_PLUS(CIFAOST_ident_str,PQFAOST),MPFAOST_importname_str),A68_VC )),(WHAAOSI_user, A_HVEC(QQFAOST,A_VC_PLUS(A_VC_PLUS(CIFAOST_ident_str,PQFAOST),MPFAOST_importname_str),A68_VC ),(Msg).nonlocals));
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
VQFAOST.fn.fn_global = SQFAOST_anonymous;
VQFAOST.nonlocals = A68_NIL;
EZEAOST_check_separator( NQFAOST_import, MPFAOST_importname_str, VQFAOST, Msg, &WQFAOST );
UQFAOST = WQFAOST;
} 
else
{ 
ZACAOST_nothing_read(  &XQFAOST );
UQFAOST = XQFAOST;
} 
A_PROC_EXIT(read_importname);
*ReturnedValue = (UQFAOST);
return;
} 
#undef NL

A68_BOOL  ZQFAOST_is_contextname(A68_176  V)
{ 
A68_BOOL  ARFAOST;  /* clause result */
A_PROC_ENTRY(is_contextname);
ARFAOST = (V.Sort==TPFAOST_contextname_no);
A_PROC_EXIT(is_contextname);
return( ARFAOST );
} 
#undef NL

A68_BOOL  CRFAOST_is_importname(A68_176  V)
{ 
A68_BOOL  DRFAOST;  /* clause result */
A_PROC_ENTRY(is_importname);
DRFAOST = (V.Sort==UPFAOST_importname_no);
A_PROC_EXIT(is_importname);
return( DRFAOST );
} 
#undef NL

A68_BOOL  FRFAOST_is_ctname(A68_176  V)
{ 
A68_BOOL  GRFAOST;  /* optbool result */
A68_BOOL  HRFAOST;  /* clause result */
A_PROC_ENTRY(is_ctname);
 /* line 615: */
GRFAOST = (V.Sort==TPFAOST_contextname_no);
if ( ! GRFAOST )
{GRFAOST = (V.Sort==UPFAOST_importname_no);
}
HRFAOST = GRFAOST;
A_PROC_EXIT(is_ctname);
return( HRFAOST );
} 
#undef NL

A68_VOID  KRFAOST_get_contextname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  LRFAOST;  /* clause result */
A_PROC_ENTRY(get_contextname);
 /* line 619: */
 /* line 620: */
{ 
BCCAOST_check_value(V, TPFAOST_contextname_no, Msg);
 /* line 621: */
 /* line 622: */
LRFAOST = V.Value;
} 
A_PROC_EXIT(get_contextname);
*ReturnedValue = (LRFAOST);
return;
} 
#undef NL

A68_VOID  ORFAOST_get_importname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  PRFAOST;  /* clause result */
A_PROC_ENTRY(get_importname);
 /* line 625: */
 /* line 626: */
{ 
BCCAOST_check_value(V, UPFAOST_importname_no, Msg);
 /* line 627: */
 /* line 628: */
PRFAOST = V.Value;
} 
A_PROC_EXIT(get_importname);
*ReturnedValue = (PRFAOST);
return;
} 
#undef NL
 /* line 631: */

A68_VOID  URFAOST_get_ctname(A68_177  Values, A68_INT * Index, A68_VC  Default_contextname, A68_97  Msg, A68_158  *ReturnedValue)
{ 
A68_BOOL  VRFAOST;  /* optbool result */
A68_INT  WRFAOST;  /* YIELD */
A68_158  XRFAOST;  /* collateral clause result */
A68_158  YRFAOST;  /* clause result */
A68_INT  ZRFAOST;  /* YIELD */
A68_158  ASFAOST;  /* collateral clause result */
A68_INT  BSFAOST;  /* YIELD */
A68_158  CSFAOST_ans;
A68_BOOL  DSFAOST;  /* optbool result */
A68_INT  ESFAOST;  /* YIELD */
A68_INT  FSFAOST;  /* YIELD */
A68_VC * GSFAOST;  /* YIELD */
A68_INT  HSFAOST;  /* YIELD */
A68_158  ISFAOST;  /* collateral clause result */
A68_INT  JSFAOST;  /* YIELD */
A68_INT  KSFAOST;  /* YIELD */
A68_158  LSFAOST;  /* collateral clause result */
A_PROC_ENTRY(get_ctname);
 /* line 632: */
 /* line 639: */
{ 
VRFAOST = ((*Index)>=Values.upb);
if ( ! VRFAOST )
{ /* line 640: */
WRFAOST = ((*Index)+1) ;
VRFAOST = ((*(&((&A_VINDEX(Values,WRFAOST))->Sort)))==0);
}
if ( VRFAOST )
{ 
XRFAOST.Context = Default_contextname;
 /* line 641: */
XRFAOST.Import = EOAAOSL_nullstr;
YRFAOST = XRFAOST;
} 
else
{ 
 /* line 642: */
ZRFAOST = ((*Index)+1) ;
if ( ZQFAOST_is_contextname((*(&A_VINDEX(Values,ZRFAOST)))) )
{ 
BSFAOST = (*Index)+=1 ;
ASFAOST.Context = (*(&((&A_VINDEX(Values,BSFAOST))->Value)));
ASFAOST.Import = EOAAOSL_nullstr;
CSFAOST_ans = ASFAOST;
 /* line 643: */
DSFAOST = ((*Index)<Values.upb);
if ( DSFAOST )
{ /* line 644: */
ESFAOST = ((*Index)+1) ;
DSFAOST = CRFAOST_is_importname((*(&A_VINDEX(Values,ESFAOST))));
}
if ( DSFAOST )
{ 
 /* line 645: */
FSFAOST = (*Index)+=1 ;
GSFAOST = (&((&CSFAOST_ans)->Import)) ;
(*GSFAOST) = (*(&((&A_VINDEX(Values,FSFAOST))->Value)));
} 
 /* line 646: */
 /* line 647: */
YRFAOST = CSFAOST_ans;
} 
else
{ 
 /* line 648: */
HSFAOST = ((*Index)+1) ;
if ( CRFAOST_is_importname((*(&A_VINDEX(Values,HSFAOST)))) )
{ 
ISFAOST.Context = Default_contextname;
 /* line 649: */
JSFAOST = (*Index)+=1 ;
ISFAOST.Import = (*(&((&A_VINDEX(Values,JSFAOST))->Value)));
YRFAOST = ISFAOST;
} 
else
{ 
KSFAOST = ((*Index)+1) ;
BCCAOST_check_value((*(&A_VINDEX(Values,KSFAOST))), TPFAOST_contextname_no, Msg);
 /* line 650: */
LSFAOST.Context = EOAAOSL_nullstr;
 /* line 651: */
 /* line 652: */
LSFAOST.Import = EOAAOSL_nullstr;
YRFAOST = LSFAOST;
} 
} 
} 
} 
A_PROC_EXIT(get_ctname);
*ReturnedValue = (YRFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  VSFAOST_generator(A68_BOOL  USFAOST_anonymous, A68_174  *ReturnedValue)
{ 
A68_174  WSFAOST;  /* clause result */
A68_174  XSFAOST;  /* OPERATORS - dynamic generator */
{ 
XSFAOST.upb = 1 ;
( USFAOST_anonymous? A_VLOC(A68_175 ,XSFAOST): A_VHEAP(A68_175 ,XSFAOST) );
WSFAOST = XSFAOST;
} 
*ReturnedValue = (WSFAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  FTFAOST_read_switch(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ITFAOST;  /* avoid structure result */
A68_VC  JTFAOST_first_try;
A68_BOOL  KTFAOST;  /* clause result */
A68_VC  LTFAOST;  /* clause result */
A68_VC  OTFAOST;  /* avoid structure result */
A_PROC_ENTRY(read_switch);
 /* line 669: */
{ 
XCCAOST_read_token( NCCAOST_first_and_check, HTFAOST, Msg, &ITFAOST );
JTFAOST_first_try = ITFAOST;
 /* line 670: */
 /* line 671: */
 /* line 672: */
KTFAOST = JZEAOST_legal_read(JTFAOST_first_try);
if ( KTFAOST )
{ 
LTFAOST = JTFAOST_first_try;
} 
else
{ 
 /* line 673: */
XCCAOST_read_token( NCCAOST_first_and_check, NTFAOST, Msg, &OTFAOST );
LTFAOST = OTFAOST;
} 
} 
A_PROC_EXIT(read_switch);
*ReturnedValue = (LTFAOST);
return;
} 
#undef NL

A68_BOOL  QTFAOST_is_switch(A68_176  V)
{ 
A68_BOOL  RTFAOST;  /* clause result */
A_PROC_ENTRY(is_switch);
RTFAOST = (V.Sort==SSFAOST_switch_no);
A_PROC_EXIT(is_switch);
return( RTFAOST );
} 
#undef NL
 /* line 679: */

A68_VOID  WTFAOST_set_switch(A68_176  V, A68_BOOL * Flag, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_233  ZTFAOST;  /* collateral clause result */
A68_52  AUFAOST;  /* OPERATORS - mode -> union mode */
A68_52  BUFAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  CUFAOST;  /* YIELD */
A68_52  DUFAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  EUFAOST;  /* YIELD */
A68_52  HUFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IUFAOST;  /* YIELD */
A68_VC  JUFAOST;  /* clause result */
A68_85  KUFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  LUFAOST;  /* avoid structure result */
A68_233  MUFAOST;  /* collateral clause result */
A68_52  NUFAOST;  /* OPERATORS - mode -> union mode */
A68_52  OUFAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  PUFAOST;  /* YIELD */
A68_52  QUFAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  RUFAOST;  /* YIELD */
A68_52  UUFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  VUFAOST;  /* YIELD */
A68_85  WUFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  XUFAOST;  /* avoid structure result */
A68_233  YUFAOST;  /* collateral clause result */
A68_52  ZUFAOST;  /* OPERATORS - mode -> union mode */
A68_52  CVFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DVFAOST;  /* YIELD */
A68_52  GVFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HVFAOST;  /* YIELD */
A68_52  KVFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  LVFAOST;  /* YIELD */
A68_85  MVFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  NVFAOST;  /* avoid structure result */
A_PROC_ENTRY(set_switch);
 /* line 681: */
 /* line 682: */
if ( QTFAOST_is_switch(V) )
{ 
 /* line 683: */
if ( A_VC_EQ(V.Value,YTFAOST) )
{ 
ZTFAOST.data[0] = A_UNITE(AUFAOST,mode7,7,Name);
 /* line 684: */
 /* line 685: */
if ( (*Flag) )
{ 
CUFAOST = ' ' ;
ZTFAOST.data[1] = A_UNITE(BUFAOST,mode6,6,CUFAOST);
} 
else
{ 
(*Flag) = A68_TRUE;
 /* line 686: */
EUFAOST = ':' ;
ZTFAOST.data[1] = A_UNITE(DUFAOST,mode6,6,EUFAOST);
} 
IUFAOST = GUFAOST ;
ZTFAOST.data[2] = A_UNITE(HUFAOST,mode7,7,IUFAOST);
 /* line 687: */
UJBAOSL_oneline( A_HISVEC(KUFAOST,ZTFAOST,3,A68_52 ), &LUFAOST );
JUFAOST = LUFAOST;
} 
else
{ 
MUFAOST.data[0] = A_UNITE(NUFAOST,mode7,7,Name);
 /* line 688: */
if ( (*Flag) )
{ 
(*Flag) = A68_FALSE;
 /* line 689: */
 /* line 690: */
PUFAOST = ':' ;
MUFAOST.data[1] = A_UNITE(OUFAOST,mode6,6,PUFAOST);
} 
else
{ 
RUFAOST = ' ' ;
MUFAOST.data[1] = A_UNITE(QUFAOST,mode6,6,RUFAOST);
} 
VUFAOST = TUFAOST ;
MUFAOST.data[2] = A_UNITE(UUFAOST,mode7,7,VUFAOST);
 /* line 691: */
 /* line 692: */
UJBAOSL_oneline( A_HISVEC(WUFAOST,MUFAOST,3,A68_52 ), &XUFAOST );
JUFAOST = XUFAOST;
} 
} 
else
{ 
BCCAOST_check_value(V, 0, Msg);
 /* line 693: */
YUFAOST.data[0] = A_UNITE(ZUFAOST,mode7,7,Name);
DVFAOST = BVFAOST ;
YUFAOST.data[1] = A_UNITE(CVFAOST,mode7,7,DVFAOST);
 /* line 694: */
if ( (*Flag) )
{ 
(*Flag) = A68_FALSE;
 /* line 695: */
HVFAOST = FVFAOST ;
YUFAOST.data[2] = A_UNITE(GVFAOST,mode7,7,HVFAOST);
} 
else
{ 
(*Flag) = A68_TRUE;
 /* line 696: */
LVFAOST = JVFAOST ;
YUFAOST.data[2] = A_UNITE(KVFAOST,mode7,7,LVFAOST);
} 
 /* line 697: */
UJBAOSL_oneline( A_HISVEC(MVFAOST,YUFAOST,3,A68_52 ), &NVFAOST );
JUFAOST = NVFAOST;
} 
A_PROC_EXIT(set_switch);
*ReturnedValue = (JUFAOST);
return;
} 
#undef NL

A68_BOOL  YVFAOST_is_word(A68_176  V)
{ 
A68_BOOL  ZVFAOST;  /* clause result */
A_PROC_ENTRY(is_word);
ZVFAOST = (V.Sort==UVFAOST_word_no);
A_PROC_EXIT(is_word);
return( ZVFAOST );
} 
#undef NL

A68_INT  DWFAOST_get_word(A68_176  V, A68_97  Msg, A68_46  Words)
{ 
A68_INT  EWFAOST_index;
A68_INT  FWFAOST_count;
A68_VC  GWFAOST_test;
A68_VC * HWFAOST;  /* forall control - []x */
A68_INT  IWFAOST;  /* forall loop counter */
A68_INT  KWFAOST;  /* YIELD */
A68_52  LWFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  MWFAOST;  /* YIELD */
A68_85  NWFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OWFAOST;  /* avoid structure result */
A68_VC  JWFAOST_str;
A68_VC  PWFAOST_w;
A68_46  QWFAOST;  /* OPERATORS - trim index */
A68_46  RWFAOST;  /* forall yield */
A68_VC * SWFAOST;  /* forall control - []x */
A68_INT  TWFAOST;  /* forall loop counter */
A68_233  UWFAOST;  /* collateral clause result */
A68_52  VWFAOST;  /* OPERATORS - mode -> union mode */
A68_52  YWFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZWFAOST;  /* YIELD */
A68_52  AXFAOST;  /* OPERATORS - mode -> union mode */
A68_85  BXFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CXFAOST;  /* avoid structure result */
A68_236  DXFAOST;  /* collateral clause result */
A68_52  EXFAOST;  /* OPERATORS - mode -> union mode */
A68_52  HXFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IXFAOST;  /* YIELD */
A68_85  JXFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  KXFAOST;  /* avoid structure result */
A68_46  LXFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MXFAOST;  /* clause result */
A_PROC_ENTRY(get_word);
 /* line 715: */
 /* line 716: */
{ 
EWFAOST_index = 0;
FWFAOST_count = 0;
 /* line 717: */
 /* line 718: */
if ( YVFAOST_is_word(V) )
{ 
IWFAOST = Words.upb -1;
HWFAOST = Words.data;
for (;IWFAOST-- >= 0;
(HWFAOST++
) )
{
GWFAOST_test = *HWFAOST;
 /* line 719: */
if ( !((EWFAOST_index==0)) ) break;
FWFAOST_count+=1;
 /* line 720: */
if ( A_VC_EQ(GWFAOST_test,V.Value) )
{ 
 /* line 721: */
EWFAOST_index = FWFAOST_count;
} 
}
 /* line 722: */
} 
 /* line 723: */
 /* line 724: */
if ( (EWFAOST_index==0) )
{ 
KWFAOST = 1 ;
MWFAOST = A_VINDEX(Words,KWFAOST) ;
UJBAOSL_oneline( A_HVEC(NWFAOST,A_UNITE(LWFAOST,mode7,7,MWFAOST),A68_52 ), &OWFAOST );
JWFAOST_str = OWFAOST;
 /* line 725: */
RWFAOST = A_VTRIM(QWFAOST,(Words),A_VTSCRIPT(&(QWFAOST.upb),(Words).upb,2,(Words).upb)) ;
TWFAOST = RWFAOST.upb -1;
SWFAOST = RWFAOST.data;
for (;TWFAOST-- >= 0;
(SWFAOST++
) )
{
PWFAOST_w = *SWFAOST;
UWFAOST.data[0] = A_UNITE(VWFAOST,mode7,7,JWFAOST_str);
ZWFAOST = XWFAOST ;
UWFAOST.data[1] = A_UNITE(YWFAOST,mode7,7,ZWFAOST);
UWFAOST.data[2] = A_UNITE(AXFAOST,mode7,7,PWFAOST_w);
UJBAOSL_oneline( A_HISVEC(BXFAOST,UWFAOST,3,A68_52 ), &CXFAOST );
JWFAOST_str = CXFAOST;
}
 /* line 726: */
DXFAOST.data[0] = A_UNITE(EXFAOST,mode7,7,JWFAOST_str);
IXFAOST = GXFAOST ;
DXFAOST.data[1] = A_UNITE(HXFAOST,mode7,7,IXFAOST);
 /* line 727: */
UJBAOSL_oneline( A_HISVEC(JXFAOST,DXFAOST,2,A68_52 ), &KXFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(LXFAOST,KXFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(LXFAOST,KXFAOST,A68_VC ),(Msg).nonlocals));
} 
 /* line 728: */
 /* line 729: */
MXFAOST = EWFAOST_index;
} 
A_PROC_EXIT(get_word);
return( MXFAOST );
} 
#undef NL

A_STATIC A68_VOID  YXFAOST_read_trim(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ZXFAOST;  /* avoid structure result */
A68_VC  AYFAOST_int1;
A68_BOOL  BYFAOST;  /* clause result */
A68_VC  CYFAOST;  /* clause result */
A68_VC  DYFAOST;  /* avoid structure result */
A68_VC  EYFAOST_first;
A68_BOOL  FYFAOST;  /* clause result */
A68_236  GYFAOST;  /* collateral clause result */
A68_52  JYFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  KYFAOST;  /* YIELD */
A68_52  LYFAOST;  /* OPERATORS - mode -> union mode */
A68_85  MYFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  NYFAOST;  /* avoid structure result */
A68_46  OYFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PYFAOST;  /* avoid structure result */
A68_VC  QYFAOST_int2;
A68_BOOL  RYFAOST;  /* clause result */
A68_VC  SYFAOST;  /* clause result */
A68_VC  TYFAOST;  /* avoid structure result */
A68_VC  UYFAOST_second;
A68_233  VYFAOST;  /* collateral clause result */
A68_52  WYFAOST;  /* OPERATORS - mode -> union mode */
A68_52  XYFAOST;  /* OPERATORS - mode -> union mode */
A68_52  YYFAOST;  /* OPERATORS - mode -> union mode */
A68_85  ZYFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  AZFAOST;  /* avoid structure result */
A68_VC  BZFAOST_ans;
A68_VC  CZFAOST;  /* clause result */
A68_VC  DZFAOST;  /* avoid structure result */
A68_236  EZFAOST;  /* collateral clause result */
A68_52  HZFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IZFAOST;  /* YIELD */
A68_52  JZFAOST;  /* OPERATORS - mode -> union mode */
A68_85  KZFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  LZFAOST;  /* avoid structure result */
A68_46  MZFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NZFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  OZFAOST;  /* collateral clause result */
A68_52  PZFAOST;  /* OPERATORS - mode -> union mode */
A68_52  QZFAOST;  /* OPERATORS - mode -> union mode */
A68_52  RZFAOST;  /* OPERATORS - mode -> union mode */
A68_85  SZFAOST;  /* OPERATORS - istruct -> vector */
A68_VC  TZFAOST;  /* avoid structure result */
A68_VC  UZFAOST;  /* avoid structure result */
A68_236  VZFAOST;  /* collateral clause result */
A68_52  YZFAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZZFAOST;  /* YIELD */
A68_52  AAGAOST;  /* OPERATORS - mode -> union mode */
A68_85  BAGAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CAGAOST;  /* avoid structure result */
A68_46  DAGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  EAGAOST;  /* collateral clause result */
A68_52  FAGAOST;  /* OPERATORS - mode -> union mode */
A68_52  IAGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  JAGAOST;  /* YIELD */
A68_52  KAGAOST;  /* OPERATORS - mode -> union mode */
A68_85  LAGAOST;  /* OPERATORS - istruct -> vector */
A68_VC  MAGAOST;  /* avoid structure result */
A68_46  NAGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OAGAOST;  /* avoid structure result */
A_PROC_ENTRY(read_trim);
 /* line 753: */
 /* line 754: */
if ( (BNBAOST_first_char(Msg)=='[') )
{ 
{ 
PGFAOST_read_int_basic( PCCAOST_get_first, Msg, &ZXFAOST );
AYFAOST_int1 = ZXFAOST;
 /* line 755: */
 /* line 756: */
BYFAOST = JZEAOST_legal_read(AYFAOST_int1);
if ( BYFAOST )
{ 
(*WKBAOST_rdcharno)-=1;
 /* line 757: */
 /* line 758: */
 /* line 759: */
CYFAOST = AYFAOST_int1;
} 
else
{ 
NAAAOSI_makervc( '.', &DYFAOST );
CYFAOST = DYFAOST;
} 
} 
EYFAOST_first = CYFAOST;
 /* line 760: */
 /* line 761: */
if ( (BNBAOST_first_char(Msg)=='.') )
{ 
 /* line 762: */
if ( (YMBAOST_next_char(Msg)=='.') )
{ 
 /* line 763: */
FYFAOST = A68_TRUE;
} 
else
{ 
KYFAOST = IYFAOST ;
GYFAOST.data[0] = A_UNITE(JYFAOST,mode7,7,KYFAOST);
GYFAOST.data[1] = A_UNITE(LYFAOST,mode7,7,PXFAOST_trim_str);
UJBAOSL_oneline( A_HISVEC(MYFAOST,GYFAOST,2,A68_52 ), &NYFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(OYFAOST,NYFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(OYFAOST,NYFAOST,A68_VC ),(Msg).nonlocals));
 /* line 764: */
 /* line 765: */
 /* line 766: */
FYFAOST = A68_FALSE;
} 
} 
else
{ 
(*WKBAOST_rdcharno)-=1;
 /* line 767: */
 /* line 768: */
 /* line 769: */
 /* line 770: */
FYFAOST = A68_FALSE;
} 
if ( FYFAOST )
{ 
{ 
PGFAOST_read_int_basic( PCCAOST_get_first, Msg, &PYFAOST );
QYFAOST_int2 = PYFAOST;
 /* line 771: */
 /* line 772: */
RYFAOST = JZEAOST_legal_read(QYFAOST_int2);
if ( RYFAOST )
{ 
(*WKBAOST_rdcharno)-=1;
 /* line 773: */
 /* line 774: */
 /* line 775: */
SYFAOST = QYFAOST_int2;
} 
else
{ 
NAAAOSI_makervc( '.', &TYFAOST );
SYFAOST = TYFAOST;
} 
} 
UYFAOST_second = SYFAOST;
 /* line 776: */
 /* line 777: */
if ( (BNBAOST_first_char(Msg)==']') )
{ 
VYFAOST.data[0] = A_UNITE(WYFAOST,mode7,7,EYFAOST_first);
VYFAOST.data[1] = A_UNITE(XYFAOST,mode6,6,WXFAOST_trimsep);
VYFAOST.data[2] = A_UNITE(YYFAOST,mode7,7,UYFAOST_second);
UJBAOSL_oneline( A_HISVEC(ZYFAOST,VYFAOST,3,A68_52 ), &AZFAOST );
BZFAOST_ans = AZFAOST;
 /* line 778: */
YMBAOST_next_char(Msg);
 /* line 779: */
 /* line 780: */
GBCAOST_check_read( BZFAOST_ans, PXFAOST_trim_str, Msg, &DZFAOST );
CZFAOST = DZFAOST;
} 
else
{ 
IZFAOST = GZFAOST ;
EZFAOST.data[0] = A_UNITE(HZFAOST,mode7,7,IZFAOST);
EZFAOST.data[1] = A_UNITE(JZFAOST,mode7,7,PXFAOST_trim_str);
UJBAOSL_oneline( A_HISVEC(KZFAOST,EZFAOST,2,A68_52 ), &LZFAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(MZFAOST,LZFAOST,A68_VC )),(WHAAOSI_user, A_HVEC(MZFAOST,LZFAOST,A68_VC ),(Msg).nonlocals));
 /* line 781: */
 /* line 782: */
 /* line 783: */
CZFAOST = YNAAOSL_nilstr;
} 
} 
else
{ 
 /* line 784: */
if ( A_VC_NE(EYFAOST_first,A_HVEC(NZFAOST,'.',A68_CHAR )) )
{ 
 /* line 785: */
 /* line 786: */
if ( (BNBAOST_first_char(Msg)==']') )
{ 
YMBAOST_next_char(Msg);
 /* line 787: */
OZFAOST.data[0] = A_UNITE(PZFAOST,mode7,7,EYFAOST_first);
OZFAOST.data[1] = A_UNITE(QZFAOST,mode6,6,WXFAOST_trimsep);
OZFAOST.data[2] = A_UNITE(RZFAOST,mode7,7,EYFAOST_first);
 /* line 788: */
UJBAOSL_oneline( A_HISVEC(SZFAOST,OZFAOST,3,A68_52 ), &TZFAOST );
GBCAOST_check_read( TZFAOST, PXFAOST_trim_str, Msg, &UZFAOST );
CZFAOST = UZFAOST;
} 
else
{ 
 /* line 789: */
ZZFAOST = XZFAOST ;
VZFAOST.data[0] = A_UNITE(YZFAOST,mode7,7,ZZFAOST);
VZFAOST.data[1] = A_UNITE(AAGAOST,mode7,7,PXFAOST_trim_str);
UJBAOSL_oneline( A_HISVEC(BAGAOST,VZFAOST,2,A68_52 ), &CAGAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(DAGAOST,CAGAOST,A68_VC )),(WHAAOSI_user, A_HVEC(DAGAOST,CAGAOST,A68_VC ),(Msg).nonlocals));
 /* line 790: */
 /* line 791: */
 /* line 792: */
CZFAOST = YNAAOSL_nilstr;
} 
} 
else
{ 
 /* line 793: */
EAGAOST.data[0] = A_UNITE(FAGAOST,mode7,7,JDFAOST_int_str);
 /* line 794: */
JAGAOST = HAGAOST ;
EAGAOST.data[1] = A_UNITE(IAGAOST,mode7,7,JAGAOST);
EAGAOST.data[2] = A_UNITE(KAGAOST,mode7,7,PXFAOST_trim_str);
UJBAOSL_oneline( A_HISVEC(LAGAOST,EAGAOST,3,A68_52 ), &MAGAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(NAGAOST,MAGAOST,A68_VC )),(WHAAOSI_user, A_HVEC(NAGAOST,MAGAOST,A68_VC ),(Msg).nonlocals));
 /* line 795: */
 /* line 796: */
 /* line 797: */
 /* line 798: */
CZFAOST = YNAAOSL_nilstr;
} 
} 
} 
else
{ 
ZACAOST_nothing_read(  &OAGAOST );
CZFAOST = OAGAOST;
} 
A_PROC_EXIT(read_trim);
*ReturnedValue = (CZFAOST);
return;
} 
#undef NL

A68_BOOL  QAGAOST_is_trim(A68_176  V)
{ 
A68_BOOL  RAGAOST;  /* clause result */
A_PROC_ENTRY(is_trim);
RAGAOST = (V.Sort==TXFAOST_trim_no);
A_PROC_EXIT(is_trim);
return( RAGAOST );
} 
#undef NL

A68_VOID  VAGAOST_get_trim(A68_176  V, A68_267  Bounds, A68_97  Msg, A68_267  *ReturnedValue)
{ 
A68_267  WAGAOST_ans;
A68_VC  XAGAOST_trim;
A68_INT  YAGAOST_sep;
A68_INT  ZAGAOST_count;
A68_CHAR * ABGAOST_c;
A68_INT  BBGAOST;  /* forall loop counter */
A68_46  EBGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FBGAOST;  /* OPERATORS - trim index */
A68_VC  GBGAOST_int1;
A68_VC  HBGAOST;  /* OPERATORS - trim index */
A68_VC  IBGAOST_int2;
A68_VC  JBGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * KBGAOST;  /* YIELD */
A68_VC  LBGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * MBGAOST;  /* YIELD */
A68_233  NBGAOST;  /* collateral clause result */
A68_52  OBGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  PBGAOST;  /* YIELD */
A68_52  SBGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  TBGAOST;  /* YIELD */
A68_52  UBGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  VBGAOST;  /* YIELD */
A68_85  WBGAOST;  /* OPERATORS - istruct -> vector */
A68_VC  XBGAOST;  /* avoid structure result */
A68_46  YBGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  ZBGAOST;  /* collateral clause result */
A68_52  ACGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  BCGAOST;  /* YIELD */
A68_52  ECGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  FCGAOST;  /* YIELD */
A68_52  GCGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  HCGAOST;  /* YIELD */
A68_85  ICGAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JCGAOST;  /* avoid structure result */
A68_46  KCGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  LCGAOST;  /* collateral clause result */
A68_52  MCGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  NCGAOST;  /* YIELD */
A68_52  QCGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RCGAOST;  /* YIELD */
A68_52  SCGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  TCGAOST;  /* YIELD */
A68_85  UCGAOST;  /* OPERATORS - istruct -> vector */
A68_VC  VCGAOST;  /* avoid structure result */
A68_46  WCGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_267  XCGAOST;  /* clause result */
A_PROC_ENTRY(get_trim);
 /* line 806: */
 /* line 808: */
{ 
BCCAOST_check_value(V, TXFAOST_trim_no, Msg);
 /* line 809: */
WAGAOST_ans = Bounds;
 /* line 810: */
XAGAOST_trim = V.Value;
 /* line 811: */
YAGAOST_sep = 0;
ZAGAOST_count = 0;
 /* line 812: */
BBGAOST = XAGAOST_trim.upb -1;
ABGAOST_c = XAGAOST_trim.data;
for (;BBGAOST-- >= 0;
(ABGAOST_c++
) )
{
 /* line 813: */
if ( !((YAGAOST_sep==0)) ) break;
ZAGAOST_count+=1;
 /* line 814: */
if ( ((*ABGAOST_c)==WXFAOST_trimsep) )
{ 
 /* line 815: */
YAGAOST_sep = ZAGAOST_count;
} 
}
 /* line 816: */
if ( (YAGAOST_sep==0) )
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(EBGAOST,DBGAOST,A68_VC )),(SHAAOSI_system, A_HVEC(EBGAOST,DBGAOST,A68_VC ),(Msg).nonlocals));
} 
 /* line 817: */
GBGAOST_int1 = A_VTRIM(FBGAOST,(XAGAOST_trim),A_VTSCRIPT(&(FBGAOST.upb),(XAGAOST_trim).upb,1,(YAGAOST_sep-1)));
IBGAOST_int2 = A_VTRIM(HBGAOST,(XAGAOST_trim),A_VTSCRIPT(&(HBGAOST.upb),(XAGAOST_trim).upb,(YAGAOST_sep+1),(XAGAOST_trim).upb));
 /* line 818: */
if ( A_VC_NE(GBGAOST_int1,A_HVEC(JBGAOST,'.',A68_CHAR )) )
{ 
KBGAOST = (&((&WAGAOST_ans)->Lwb)) ;
(*KBGAOST) = XVCAOST_charstoint(GBGAOST_int1, A_HEAP(A68_BOOL ));
} 
 /* line 819: */
if ( A_VC_NE(IBGAOST_int2,A_HVEC(LBGAOST,'.',A68_CHAR )) )
{ 
MBGAOST = (&((&WAGAOST_ans)->Upb)) ;
(*MBGAOST) = XVCAOST_charstoint(IBGAOST_int2, A_HEAP(A68_BOOL ));
} 
 /* line 820: */
 /* line 821: */
if ( ((*(&((&WAGAOST_ans)->Lwb)))<Bounds.Lwb) )
{ 
 /* line 822: */
PBGAOST = (*(&((&WAGAOST_ans)->Lwb))) ;
NBGAOST.data[0] = A_UNITE(OBGAOST,mode1,1,PBGAOST);
TBGAOST = RBGAOST ;
NBGAOST.data[1] = A_UNITE(SBGAOST,mode7,7,TBGAOST);
VBGAOST = Bounds.Lwb ;
NBGAOST.data[2] = A_UNITE(UBGAOST,mode1,1,VBGAOST);
 /* line 823: */
UJBAOSL_oneline( A_HISVEC(WBGAOST,NBGAOST,3,A68_52 ), &XBGAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(YBGAOST,XBGAOST,A68_VC )),(WHAAOSI_user, A_HVEC(YBGAOST,XBGAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 824: */
if ( ((*(&((&WAGAOST_ans)->Upb)))>Bounds.Upb) )
{ 
 /* line 825: */
BCGAOST = (*(&((&WAGAOST_ans)->Upb))) ;
ZBGAOST.data[0] = A_UNITE(ACGAOST,mode1,1,BCGAOST);
FCGAOST = DCGAOST ;
ZBGAOST.data[1] = A_UNITE(ECGAOST,mode7,7,FCGAOST);
HCGAOST = Bounds.Upb ;
ZBGAOST.data[2] = A_UNITE(GCGAOST,mode1,1,HCGAOST);
 /* line 826: */
UJBAOSL_oneline( A_HISVEC(ICGAOST,ZBGAOST,3,A68_52 ), &JCGAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(KCGAOST,JCGAOST,A68_VC )),(WHAAOSI_user, A_HVEC(KCGAOST,JCGAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 827: */
if ( ((*(&((&WAGAOST_ans)->Upb)))<(*(&((&WAGAOST_ans)->Lwb)))) )
{ 
NCGAOST = (*(&((&WAGAOST_ans)->Upb))) ;
LCGAOST.data[0] = A_UNITE(MCGAOST,mode1,1,NCGAOST);
RCGAOST = PCGAOST ;
LCGAOST.data[1] = A_UNITE(QCGAOST,mode7,7,RCGAOST);
TCGAOST = (*(&((&WAGAOST_ans)->Lwb))) ;
LCGAOST.data[2] = A_UNITE(SCGAOST,mode1,1,TCGAOST);
 /* line 828: */
UJBAOSL_oneline( A_HISVEC(UCGAOST,LCGAOST,3,A68_52 ), &VCGAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(WCGAOST,VCGAOST,A68_VC )),(WHAAOSI_user, A_HVEC(WCGAOST,VCGAOST,A68_VC ),(Msg).nonlocals));
} 
} 
} 
 /* line 829: */
 /* line 830: */
XCGAOST = WAGAOST_ans;
} 
A_PROC_EXIT(get_trim);
*ReturnedValue = (XCGAOST);
return;
} 
#undef NL

A68_VOID  KDGAOST_delimited_read(A68_CHAR  Delim, A68_VC  Missing, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_31  MDGAOST_generator;   /* proc value of non-global proc */
A68_VC  SDGAOST;  /* avoid structure result */
A68_VC  RDGAOST_ans;
A68_INT  TDGAOST_index;
A68_46  UDGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  VDGAOST;  /* clause result */
A68_CHAR  WDGAOST_c;
A68_INT  XDGAOST;  /* YIELD */
A68_CHAR * YDGAOST;  /* YIELD */
A68_INT  ZDGAOST;  /* YIELD */
A68_CHAR * AEGAOST;  /* YIELD */
A68_BOOL  BEGAOST;  /* clause result */
A68_VC  CEGAOST;  /* clause result */
A68_VC  DEGAOST;  /* OPERATORS - trim index */
A68_VC  EEGAOST;  /* avoid structure result */
A_PROC_ENTRY(delimited_read);
 /* line 846: */
 /* line 848: */
{ 
A_CLOSURE( MDGAOST_generator, NDGAOST_generator, ODGAOST_generator );
A_CALLPROC(MDGAOST_generator,(A68_TRUE, &SDGAOST),(A68_TRUE, &SDGAOST,(MDGAOST_generator).nonlocals));
RDGAOST_ans = SDGAOST;
 /* line 849: */
TDGAOST_index = 0;
 /* line 850: */
for ( ;; )
{ 
 /* line 851: */
 /* line 852: */
if ( ((*WKBAOST_rdcharno)==(*VKBAOST_rdcharend)) )
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(UDGAOST,Missing,A68_VC )),(WHAAOSI_user, A_HVEC(UDGAOST,Missing,A68_VC ),(Msg).nonlocals));
 /* line 853: */
VDGAOST = A68_FALSE;
} 
else
{ 
WDGAOST_c = YMBAOST_next_char(Msg);
 /* line 854: */
 /* line 855: */
if ( (WDGAOST_c==Delim) )
{ 
 /* line 856: */
if ( (YMBAOST_next_char(Msg)==Delim) )
{ 
XDGAOST = TDGAOST_index+=1 ;
YDGAOST = (&A_VINDEX(RDGAOST_ans,XDGAOST)) ;
(*YDGAOST) = WDGAOST_c;
 /* line 857: */
 /* line 858: */
VDGAOST = A68_TRUE;
} 
else
{ 
 /* line 859: */
 /* line 860: */
VDGAOST = A68_FALSE;
} 
} 
else
{ 
ZDGAOST = TDGAOST_index+=1 ;
AEGAOST = (&A_VINDEX(RDGAOST_ans,ZDGAOST)) ;
(*AEGAOST) = WDGAOST_c;
 /* line 861: */
 /* line 862: */
 /* line 863: */
VDGAOST = A68_TRUE;
} 
} 
BEGAOST = VDGAOST;
if ( !BEGAOST ) break;
/*SKIP*/;
}
 /* line 864: */
 /* line 865: */
ZAAAOSI_makervc( A_VTRIM(DEGAOST,(RDGAOST_ans),A_VTSCRIPT(&(DEGAOST.upb),(RDGAOST_ans).upb,1,TDGAOST_index)), &EEGAOST );
CEGAOST = EEGAOST;
} 
A_PROC_EXIT(delimited_read);
*ReturnedValue = (CEGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  GEGAOST_read_quoted_string(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  IEGAOST;  /* clause result */
A68_VC  KEGAOST;  /* avoid structure result */
A68_VC  LEGAOST;  /* avoid structure result */
A68_VC  MEGAOST;  /* avoid structure result */
A_PROC_ENTRY(read_quoted_string);
 /* line 869: */
 /* line 870: */
if ( (BNBAOST_first_char(Msg)=='\"') )
{ 
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
KDGAOST_delimited_read( '\"', A_VC_PLUS(DDGAOST_quoted_string_str,JEGAOST), Msg, &KEGAOST );
GBCAOST_check_read( KEGAOST, DDGAOST_quoted_string_str, Msg, &LEGAOST );
IEGAOST = LEGAOST;
} 
else
{ 
ZACAOST_nothing_read(  &MEGAOST );
IEGAOST = MEGAOST;
} 
A_PROC_EXIT(read_quoted_string);
*ReturnedValue = (IEGAOST);
return;
} 
#undef NL

A68_BOOL  OEGAOST_is_quoted_string(A68_176  V)
{ 
A68_BOOL  PEGAOST;  /* clause result */
A_PROC_ENTRY(is_quoted_string);
PEGAOST = (V.Sort==YCGAOST_quoted_string_no);
A_PROC_EXIT(is_quoted_string);
return( PEGAOST );
} 
#undef NL

A68_VOID  SEGAOST_get_quoted_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  TEGAOST;  /* clause result */
A_PROC_ENTRY(get_quoted_string);
 /* line 880: */
 /* line 881: */
{ 
BCCAOST_check_value(V, YCGAOST_quoted_string_no, Msg);
 /* line 882: */
 /* line 883: */
TEGAOST = V.Value;
} 
A_PROC_EXIT(get_quoted_string);
*ReturnedValue = (TEGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  EFGAOST_read_character(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  FFGAOST_c;
A68_BOOL  GFGAOST;  /* clause result */
A68_VC  HFGAOST;  /* clause result */
A68_VC  IFGAOST;  /* avoid structure result */
A68_VC  JFGAOST;  /* avoid structure result */
A68_VC  KFGAOST;  /* avoid structure result */
A_PROC_ENTRY(read_character);
 /* line 896: */
{ 
FFGAOST_c = BNBAOST_first_char(Msg);
 /* line 897: */
 /* line 898: */
GFGAOST = (FFGAOST_c!=LJBAOST_sep);
if ( GFGAOST )
{ 
YMBAOST_next_char(Msg);
 /* line 899: */
 /* line 900: */
 /* line 901: */
NAAAOSI_makervc( FFGAOST_c, &IFGAOST );
GBCAOST_check_read( IFGAOST, ZEGAOST_character_str, Msg, &JFGAOST );
HFGAOST = JFGAOST;
} 
else
{ 
ZACAOST_nothing_read(  &KFGAOST );
HFGAOST = KFGAOST;
} 
} 
A_PROC_EXIT(read_character);
*ReturnedValue = (HFGAOST);
return;
} 
#undef NL

A68_BOOL  MFGAOST_is_character(A68_176  V)
{ 
A68_BOOL  NFGAOST;  /* clause result */
A_PROC_ENTRY(is_character);
NFGAOST = (V.Sort==UEGAOST_character_no);
A_PROC_EXIT(is_character);
return( NFGAOST );
} 
#undef NL

A68_CHAR  QFGAOST_get_character(A68_176  V, A68_97  Msg)
{ 
A68_CHAR  RFGAOST;  /* clause result */
A68_VC  SFGAOST;  /* OPERATORS - simple index */
A68_INT  TFGAOST;  /* YIELD */
A_PROC_ENTRY(get_character);
 /* line 907: */
 /* line 908: */
{ 
BCCAOST_check_value(V, UEGAOST_character_no, Msg);
 /* line 909: */
 /* line 910: */
SFGAOST = V.Value ;
TFGAOST = 1 ;
RFGAOST = (*(&A_VINDEX(SFGAOST,TFGAOST)));
} 
A_PROC_EXIT(get_character);
return( RFGAOST );
} 
#undef NL

A68_184 * UFGAOST_make_kernel_readers(void)
{ 
A68_184  VFGAOST;  /* collateral clause result */
A68_181  WFGAOST;  /* OPERATORS - mode -> union mode */
A68_182  XFGAOST;  /* procedure value */
A68_VC  YFGAOST;  /* avoid structure result */
A68_VC  ZFGAOST;  /* avoid structure result */
A68_275  AGGAOST;  /* collateral clause result */
A68_181  BGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  CGGAOST;  /* YIELD */
A68_182  DGGAOST;  /* procedure value */
A68_181  EGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  FGGAOST;  /* YIELD */
A68_182  GGGAOST;  /* procedure value */
A68_181  HGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  IGGAOST;  /* YIELD */
A68_182  JGGAOST;  /* procedure value */
A68_181  KGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  LGGAOST;  /* YIELD */
A68_182  MGGAOST;  /* procedure value */
A68_181  NGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  OGGAOST;  /* YIELD */
A68_182  PGGAOST;  /* procedure value */
A68_181  QGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  RGGAOST;  /* YIELD */
A68_182  SGGAOST;  /* procedure value */
A68_181  TGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  UGGAOST;  /* YIELD */
A68_182  VGGAOST;  /* procedure value */
A68_181  WGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  XGGAOST;  /* YIELD */
A68_182  YGGAOST;  /* procedure value */
A68_181  ZGGAOST;  /* OPERATORS - mode -> union mode */
A68_182  AHGAOST;  /* YIELD */
A68_182  BHGAOST;  /* procedure value */
A68_181  CHGAOST;  /* OPERATORS - mode -> union mode */
A68_182  DHGAOST;  /* YIELD */
A68_182  EHGAOST;  /* procedure value */
A68_274  FHGAOST;  /* collateral clause result */
A68_174  GHGAOST;  /* OPERATORS - istruct -> vector */
A68_173  HHGAOST;  /* avoid structure result */
A68_181  IHGAOST;  /* OPERATORS - mode -> union mode */
A68_274  JHGAOST;  /* collateral clause result */
A68_174  KHGAOST;  /* OPERATORS - istruct -> vector */
A68_173  LHGAOST;  /* avoid structure result */
A68_181  MHGAOST;  /* OPERATORS - mode -> union mode */
A68_181  NHGAOST;  /* OPERATORS - mode -> union mode */
A68_182  OHGAOST;  /* YIELD */
A68_182  PHGAOST;  /* procedure value */
A68_181  QHGAOST;  /* OPERATORS - mode -> union mode */
A68_182  RHGAOST;  /* YIELD */
A68_182  SHGAOST;  /* procedure value */
A68_181  THGAOST;  /* OPERATORS - mode -> union mode */
A68_182  UHGAOST;  /* YIELD */
A68_182  VHGAOST;  /* procedure value */
A68_181  WHGAOST;  /* OPERATORS - mode -> union mode */
A68_182  XHGAOST;  /* YIELD */
A68_182  YHGAOST;  /* procedure value */
A68_181  ZHGAOST;  /* OPERATORS - mode -> union mode */
A68_182  AIGAOST;  /* YIELD */
A68_182  BIGAOST;  /* procedure value */
A68_181  CIGAOST;  /* OPERATORS - mode -> union mode */
A68_182  DIGAOST;  /* YIELD */
A68_182  EIGAOST;  /* procedure value */
A68_181  FIGAOST;  /* OPERATORS - mode -> union mode */
A68_182  GIGAOST;  /* procedure value */
A68_181  HIGAOST;  /* OPERATORS - mode -> union mode */
A68_182  IIGAOST;  /* YIELD */
A68_182  JIGAOST;  /* procedure value */
A68_181  KIGAOST;  /* OPERATORS - mode -> union mode */
A68_182  LIGAOST;  /* YIELD */
A68_182  MIGAOST;  /* procedure value */
A68_181  NIGAOST;  /* OPERATORS - mode -> union mode */
A68_182  OIGAOST;  /* YIELD */
A68_182  PIGAOST;  /* procedure value */
A68_184 * QIGAOST;  /* clause result */
A68_192  RIGAOST;  /* OPERATORS - istruct -> vector */
A68_184 * SIGAOST;  /* YIELD */
A_PROC_ENTRY(make_kernel_readers);
 /* line 917: */
VFGAOST.Rule.Sort = (&ZDCAOST_command_name_no);
 /* line 918: */
XFGAOST.fn.fn_global = DECAOST_read_command_name;
XFGAOST.nonlocals = A68_NIL;
VFGAOST.Rule.Reader = A_UNITE(WFGAOST,mode1,1,XFGAOST);
ZAAAOSI_makervc( VDCAOST_command_name_str, &YFGAOST );
VFGAOST.Rule.Description = YFGAOST;
 /* line 919: */
ZAAAOSI_makervc( YDCAOST_command_name_help, &ZFGAOST );
VFGAOST.Rule.Help = ZFGAOST;
VFGAOST.Rest = (A68_184 *)A68_NIL;
 /* line 920: */
AGGAOST.data[0].No = (&FAFAOST_plus_no);
DGGAOST.fn.fn_global = EBFAOST_read_plus;
DGGAOST.nonlocals = A68_NIL;
CGGAOST = DGGAOST ;
AGGAOST.data[0].New = A_UNITE(BGGAOST,mode1,1,CGGAOST);
AGGAOST.data[0].Name = QZEAOST_plus_str;
 /* line 921: */
AGGAOST.data[0].Help = EOAAOSL_nullstr;
AGGAOST.data[1].No = (&GAFAOST_minus_no);
GGGAOST.fn.fn_global = IBFAOST_read_minus;
GGGAOST.nonlocals = A68_NIL;
FGGAOST = GGGAOST ;
AGGAOST.data[1].New = A_UNITE(EGGAOST,mode1,1,FGGAOST);
AGGAOST.data[1].Name = SZEAOST_minus_str;
 /* line 922: */
AGGAOST.data[1].Help = EOAAOSL_nullstr;
AGGAOST.data[2].No = (&HAFAOST_period_no);
JGGAOST.fn.fn_global = MBFAOST_read_period;
JGGAOST.nonlocals = A68_NIL;
IGGAOST = JGGAOST ;
AGGAOST.data[2].New = A_UNITE(HGGAOST,mode1,1,IGGAOST);
AGGAOST.data[2].Name = UZEAOST_period_str;
 /* line 923: */
AGGAOST.data[2].Help = EOAAOSL_nullstr;
AGGAOST.data[3].No = (&IAFAOST_semicolon_no);
MGGAOST.fn.fn_global = QBFAOST_read_semicolon;
MGGAOST.nonlocals = A68_NIL;
LGGAOST = MGGAOST ;
AGGAOST.data[3].New = A_UNITE(KGGAOST,mode1,1,LGGAOST);
AGGAOST.data[3].Name = WZEAOST_semicolon_str;
 /* line 924: */
AGGAOST.data[3].Help = EOAAOSL_nullstr;
AGGAOST.data[4].No = (&KAFAOST_openrnd_no);
PGGAOST.fn.fn_global = YBFAOST_read_openrnd;
PGGAOST.nonlocals = A68_NIL;
OGGAOST = PGGAOST ;
AGGAOST.data[4].New = A_UNITE(NGGAOST,mode1,1,OGGAOST);
AGGAOST.data[4].Name = AAFAOST_openrnd_str;
 /* line 925: */
AGGAOST.data[4].Help = EOAAOSL_nullstr;
AGGAOST.data[5].No = (&LAFAOST_closernd_no);
SGGAOST.fn.fn_global = CCFAOST_read_closernd;
SGGAOST.nonlocals = A68_NIL;
RGGAOST = SGGAOST ;
AGGAOST.data[5].New = A_UNITE(QGGAOST,mode1,1,RGGAOST);
AGGAOST.data[5].Name = CAFAOST_closernd_str;
 /* line 926: */
AGGAOST.data[5].Help = EOAAOSL_nullstr;
AGGAOST.data[6].No = (&MAFAOST_ampersand_no);
VGGAOST.fn.fn_global = GCFAOST_read_ampersand;
VGGAOST.nonlocals = A68_NIL;
UGGAOST = VGGAOST ;
AGGAOST.data[6].New = A_UNITE(TGGAOST,mode1,1,UGGAOST);
AGGAOST.data[6].Name = EAFAOST_ampersand_str;
 /* line 927: */
AGGAOST.data[6].Help = EOAAOSL_nullstr;
AGGAOST.data[7].No = (&YGFAOST_int_no);
YGGAOST.fn.fn_global = CHFAOST_read_int;
YGGAOST.nonlocals = A68_NIL;
XGGAOST = YGGAOST ;
AGGAOST.data[7].New = A_UNITE(WGGAOST,mode1,1,XGGAOST);
AGGAOST.data[7].Name = JDFAOST_int_str;
 /* line 928: */
AGGAOST.data[7].Help = MDFAOST_int_help;
AGGAOST.data[8].No = (&GIFAOST_ident_no);
BHGAOST.fn.fn_global = KIFAOST_read_ident;
BHGAOST.nonlocals = A68_NIL;
AHGAOST = BHGAOST ;
AGGAOST.data[8].New = A_UNITE(ZGGAOST,mode1,1,AHGAOST);
AGGAOST.data[8].Name = CIFAOST_ident_str;
 /* line 929: */
AGGAOST.data[8].Help = FIFAOST_ident_help;
AGGAOST.data[9].No = (&AJFAOST_fnname_no);
EHGAOST.fn.fn_global = DKFAOST_read_fnname;
EHGAOST.nonlocals = A68_NIL;
DHGAOST = EHGAOST ;
AGGAOST.data[9].New = A_UNITE(CHGAOST,mode1,1,DHGAOST);
AGGAOST.data[9].Name = WIFAOST_fnname_str;
 /* line 930: */
AGGAOST.data[9].Help = ZIFAOST_fnname_help;
AGGAOST.data[10].No = (&XKFAOST_name_no);
FHGAOST.data[0] = IIFAOST_ident_syntax;
FHGAOST.data[1] = CJFAOST_fnname_syntax;
PSAAOST_alt( A_HISVEC(GHGAOST,FHGAOST,2,A68_175 ), &HHGAOST );
AGGAOST.data[10].New = A_UNITE(IHGAOST,mode3,3,HHGAOST);
 /* line 931: */
AGGAOST.data[10].Name = PKFAOST_name_str;
 /* line 932: */
AGGAOST.data[10].Help = VKFAOST_name_help;
AGGAOST.data[11].No = (&YKFAOST_declname_no);
JHGAOST.data[0] = IIFAOST_ident_syntax;
JHGAOST.data[1] = CJFAOST_fnname_syntax;
 /* line 933: */
PSAAOST_alt( A_HISVEC(KHGAOST,JHGAOST,2,A68_175 ), &LHGAOST );
AGGAOST.data[11].New = A_UNITE(MHGAOST,mode3,3,LHGAOST);
AGGAOST.data[11].Name = SKFAOST_declname_str;
 /* line 934: */
AGGAOST.data[11].Help = WKFAOST_declname_help;
AGGAOST.data[12].No = (&VLFAOST_string_no);
PHGAOST.fn.fn_global = IMFAOST_read_string;
PHGAOST.nonlocals = A68_NIL;
OHGAOST = PHGAOST ;
AGGAOST.data[12].New = A_UNITE(NHGAOST,mode1,1,OHGAOST);
AGGAOST.data[12].Name = RLFAOST_string_str;
 /* line 935: */
AGGAOST.data[12].Help = ULFAOST_string_help;
AGGAOST.data[13].No = (&FNFAOST_filename_no);
SHGAOST.fn.fn_global = JNFAOST_read_filename;
SHGAOST.nonlocals = A68_NIL;
RHGAOST = SHGAOST ;
AGGAOST.data[13].New = A_UNITE(QHGAOST,mode1,1,RHGAOST);
AGGAOST.data[13].Name = BNFAOST_filename_str;
 /* line 936: */
AGGAOST.data[13].Help = ENFAOST_filename_help;
AGGAOST.data[14].No = (&GOFAOST_text_no);
VHGAOST.fn.fn_global = KOFAOST_read_text;
VHGAOST.nonlocals = A68_NIL;
UHGAOST = VHGAOST ;
AGGAOST.data[14].New = A_UNITE(THGAOST,mode1,1,UHGAOST);
AGGAOST.data[14].Name = COFAOST_text_str;
 /* line 937: */
AGGAOST.data[14].Help = FOFAOST_text_help;
AGGAOST.data[15].No = (&TPFAOST_contextname_no);
YHGAOST.fn.fn_global = AQFAOST_read_contextname;
YHGAOST.nonlocals = A68_NIL;
XHGAOST = YHGAOST ;
AGGAOST.data[15].New = A_UNITE(WHGAOST,mode1,1,XHGAOST);
 /* line 938: */
AGGAOST.data[15].Name = JPFAOST_contextname_str;
 /* line 939: */
AGGAOST.data[15].Help = PPFAOST_contextname_help;
AGGAOST.data[16].No = (&UPFAOST_importname_no);
BIGAOST.fn.fn_global = LQFAOST_read_importname;
BIGAOST.nonlocals = A68_NIL;
AIGAOST = BIGAOST ;
AGGAOST.data[16].New = A_UNITE(ZHGAOST,mode1,1,AIGAOST);
 /* line 940: */
AGGAOST.data[16].Name = MPFAOST_importname_str;
 /* line 941: */
AGGAOST.data[16].Help = SPFAOST_importname_help;
AGGAOST.data[17].No = (&SSFAOST_switch_no);
EIGAOST.fn.fn_global = FTFAOST_read_switch;
EIGAOST.nonlocals = A68_NIL;
DIGAOST = EIGAOST ;
AGGAOST.data[17].New = A_UNITE(CIGAOST,mode1,1,DIGAOST);
AGGAOST.data[17].Name = OSFAOST_switch_str;
 /* line 942: */
AGGAOST.data[17].Help = RSFAOST_switch_help;
AGGAOST.data[18].No = (&UVFAOST_word_no);
GIGAOST.fn.fn_global = DECAOST_read_command_name;
GIGAOST.nonlocals = A68_NIL;
AGGAOST.data[18].New = A_UNITE(FIGAOST,mode1,1,GIGAOST);
AGGAOST.data[18].Name = QVFAOST_word_str;
 /* line 943: */
AGGAOST.data[18].Help = TVFAOST_word_help;
AGGAOST.data[19].No = (&TXFAOST_trim_no);
JIGAOST.fn.fn_global = YXFAOST_read_trim;
JIGAOST.nonlocals = A68_NIL;
IIGAOST = JIGAOST ;
AGGAOST.data[19].New = A_UNITE(HIGAOST,mode1,1,IIGAOST);
AGGAOST.data[19].Name = PXFAOST_trim_str;
 /* line 944: */
AGGAOST.data[19].Help = SXFAOST_trim_help;
AGGAOST.data[20].No = (&YCGAOST_quoted_string_no);
MIGAOST.fn.fn_global = GEGAOST_read_quoted_string;
MIGAOST.nonlocals = A68_NIL;
LIGAOST = MIGAOST ;
AGGAOST.data[20].New = A_UNITE(KIGAOST,mode1,1,LIGAOST);
 /* line 945: */
AGGAOST.data[20].Name = DDGAOST_quoted_string_str;
 /* line 946: */
AGGAOST.data[20].Help = GDGAOST_quoted_string_help;
AGGAOST.data[21].No = (&UEGAOST_character_no);
PIGAOST.fn.fn_global = EFGAOST_read_character;
PIGAOST.nonlocals = A68_NIL;
OIGAOST = PIGAOST ;
AGGAOST.data[21].New = A_UNITE(NIGAOST,mode1,1,OIGAOST);
AGGAOST.data[21].Name = ZEGAOST_character_str;
 /* line 947: */
AGGAOST.data[21].Help = CFGAOST_character_help;
 /* line 951: */
SIGAOST = A_HEAP(A68_184 ) ;
(*SIGAOST) = VFGAOST ;
QIGAOST = EZAAOST_add_readers(SIGAOST, A_HISVEC(RIGAOST,AGGAOST,22,A68_193 ));
A_PROC_EXIT(make_kernel_readers);
return( QIGAOST );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void TXEAOST(void)   /* initialise DECS kernelreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/kernelreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/commandreader.m","./mfiles/commandsyntax.m","./mfiles/basics.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  PZEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RZEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TZEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VZEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XZEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZZEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BAFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DAFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_175  NAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  PAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  RAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  TAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  VAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  XAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  ZAFAOST;  /* OPERATORS - mode -> union mode */
A68_175  BBFAOST;  /* OPERATORS - mode -> union mode */
A68_175  ZGFAOST;  /* OPERATORS - mode -> union mode */
A68_175  HIFAOST;  /* OPERATORS - mode -> union mode */
A68_175  BJFAOST;  /* OPERATORS - mode -> union mode */
A68_175  ZKFAOST;  /* OPERATORS - mode -> union mode */
A68_175  BLFAOST;  /* OPERATORS - mode -> union mode */
A68_212  MLFAOST;  /* procedure value */
A68_213  OLFAOST;  /* procedure value */
A68_175  WLFAOST;  /* OPERATORS - mode -> union mode */
A68_175  GNFAOST;  /* OPERATORS - mode -> union mode */
A68_175  HOFAOST;  /* OPERATORS - mode -> union mode */
A68_175  VPFAOST;  /* OPERATORS - mode -> union mode */
A68_175  XPFAOST;  /* OPERATORS - mode -> union mode */
A68_173  TSFAOST;  /* collateral clause result */
A68_174  YSFAOST;  /* avoid structure result */
A68_175  ZSFAOST;  /* OPERATORS - mode -> union mode */
A68_174  ATFAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_174  BTFAOST;  /* OPERATORS - assign op */
A68_175  CTFAOST;  /* OPERATORS - mode -> union mode */
A68_175  VVFAOST;  /* OPERATORS - mode -> union mode */
A68_175  UXFAOST;  /* OPERATORS - mode -> union mode */
A68_175  ZCGAOST;  /* OPERATORS - mode -> union mode */
A68_175  VEGAOST;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/kernelreader.a68";
A_config.translation_time = "Tue Apr  4 09:49:58 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SXEAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:58 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kernelreader);
UEAALIB_a68config(LGAALIB_configinfo, XXEAOST);
 /* line 120: */
AYEAOST_opsymbols = ZXEAOST;
 /* line 122: */
 /* line 128: */
 /* line 135: */
 /* line 149: */
 /* line 152: */
 /* line 160: */
QZEAOST_plus_str = A_HVEC(PZEAOST,'+',A68_CHAR );
SZEAOST_minus_str = A_HVEC(RZEAOST,'-',A68_CHAR );
UZEAOST_period_str = A_HVEC(TZEAOST,'.',A68_CHAR );
WZEAOST_semicolon_str = A_HVEC(VZEAOST,';',A68_CHAR );
 /* line 161: */
YZEAOST_comma_str = A_HVEC(XZEAOST,',',A68_CHAR );
AAFAOST_openrnd_str = A_HVEC(ZZEAOST,'(',A68_CHAR );
CAFAOST_closernd_str = A_HVEC(BAFAOST,')',A68_CHAR );
 /* line 162: */
EAFAOST_ampersand_str = A_HVEC(DAFAOST,'&',A68_CHAR );
 /* line 164: */
 /* line 165: */
 /* line 168: */
OAFAOST_plus_syntax = A_UNITE(NAFAOST,mode1,1,(&FAFAOST_plus_no));
 /* line 169: */
QAFAOST_minus_syntax = A_UNITE(PAFAOST,mode1,1,(&GAFAOST_minus_no));
 /* line 170: */
SAFAOST_period_syntax = A_UNITE(RAFAOST,mode1,1,(&HAFAOST_period_no));
 /* line 171: */
UAFAOST_semicolon_syntax = A_UNITE(TAFAOST,mode1,1,(&IAFAOST_semicolon_no));
 /* line 172: */
WAFAOST_comma_syntax = A_UNITE(VAFAOST,mode1,1,(&JAFAOST_comma_no));
 /* line 173: */
YAFAOST_openrnd_syntax = A_UNITE(XAFAOST,mode1,1,(&KAFAOST_openrnd_no));
 /* line 174: */
ABFAOST_closernd_syntax = A_UNITE(ZAFAOST,mode1,1,(&LAFAOST_closernd_no));
 /* line 175: */
CBFAOST_ampersand_syntax = A_UNITE(BBFAOST,mode1,1,(&MAFAOST_ampersand_no));
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 205: */
JDFAOST_int_str = IDFAOST;
 /* line 207: */
 /* line 208: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
MDFAOST_int_help = LDFAOST;
 /* line 215: */
NDFAOST_zero = (A68_INT)(unsigned char)'0';
 /* line 217: */
 /* line 294: */
 /* line 310: */
 /* line 311: */
AHFAOST_int_syntax = A_UNITE(ZGFAOST,mode1,1,(&YGFAOST_int_no));
 /* line 314: */
 /* line 316: */
 /* line 318: */
 /* line 330: */
 /* line 347: */
CIFAOST_ident_str = BIFAOST;
 /* line 349: */
 /* line 350: */
FIFAOST_ident_help = EIFAOST;
 /* line 351: */
 /* line 352: */
IIFAOST_ident_syntax = A_UNITE(HIFAOST,mode1,1,(&GIFAOST_ident_no));
 /* line 355: */
 /* line 358: */
 /* line 360: */
 /* line 372: */
WIFAOST_fnname_str = VIFAOST;
 /* line 374: */
 /* line 375: */
 /* line 376: */
ZIFAOST_fnname_help = YIFAOST;
 /* line 377: */
 /* line 378: */
CJFAOST_fnname_syntax = A_UNITE(BJFAOST,mode1,1,(&AJFAOST_fnname_no));
 /* line 381: */
 /* line 406: */
 /* line 409: */
 /* line 411: */
 /* line 424: */
PKFAOST_name_str = OKFAOST;
SKFAOST_declname_str = RKFAOST;
 /* line 425: */
VKFAOST_name_help = UKFAOST;
 /* line 426: */
 /* line 427: */
 /* line 428: */
ALFAOST_name_syntax = A_UNITE(ZKFAOST,mode1,1,(&XKFAOST_name_no));
CLFAOST_declname_syntax = A_UNITE(BLFAOST,mode1,1,(&YKFAOST_declname_no));
 /* line 431: */
 /* line 434: */
 /* line 441: */
MLFAOST.fn.fn_global = ELFAOST_is_name;
MLFAOST.nonlocals = A68_NIL;
LLFAOST_is_declname = (MLFAOST);
 /* line 442: */
OLFAOST.fn.fn_global = JLFAOST_get_name;
OLFAOST.nonlocals = A68_NIL;
NLFAOST_get_declname = (OLFAOST);
 /* line 449: */
RLFAOST_string_str = QLFAOST;
 /* line 451: */
ULFAOST_string_help = TLFAOST;
 /* line 453: */
 /* line 454: */
XLFAOST_string_syntax = A_UNITE(WLFAOST,mode1,1,(&VLFAOST_string_no));
 /* line 457: */
 /* line 468: */
 /* line 470: */
 /* line 472: */
 /* line 479: */
 /* line 499: */
BNFAOST_filename_str = ANFAOST;
 /* line 501: */
ENFAOST_filename_help = DNFAOST;
 /* line 502: */
 /* line 503: */
HNFAOST_filename_syntax = A_UNITE(GNFAOST,mode1,1,(&FNFAOST_filename_no));
 /* line 506: */
 /* line 522: */
 /* line 524: */
 /* line 536: */
COFAOST_text_str = BOFAOST;
 /* line 537: */
FOFAOST_text_help = EOFAOST;
 /* line 538: */
 /* line 539: */
IOFAOST_text_syntax = A_UNITE(HOFAOST,mode1,1,(&GOFAOST_text_no));
 /* line 542: */
 /* line 560: */
 /* line 562: */
 /* line 575: */
JPFAOST_contextname_str = IPFAOST;
MPFAOST_importname_str = LPFAOST;
 /* line 577: */
PPFAOST_contextname_help = OPFAOST;
 /* line 579: */
 /* line 580: */
SPFAOST_importname_help = RPFAOST;
 /* line 581: */
 /* line 582: */
WPFAOST_contextname_syntax = A_UNITE(VPFAOST,mode1,1,(&TPFAOST_contextname_no));
 /* line 583: */
YPFAOST_importname_syntax = A_UNITE(XPFAOST,mode1,1,(&UPFAOST_importname_no));
 /* line 587: */
 /* line 600: */
 /* line 612: */
 /* line 613: */
 /* line 614: */
 /* line 618: */
 /* line 624: */
 /* line 630: */
 /* line 660: */
OSFAOST_switch_str = NSFAOST;
 /* line 662: */
RSFAOST_switch_help = QSFAOST;
 /* line 663: */
 /* line 664: */
 /* line 665: */
TSFAOST.Type = DSAAOST_opt_syn;
VSFAOST_generator( A68_FALSE, &YSFAOST );
BTFAOST = A_HVEC(ATFAOST,A_UNITE(ZSFAOST,mode1,1,(&SSFAOST_switch_no)),A68_175 ) ;
A_VASSIGN2(BTFAOST,YSFAOST,A68_175 ) ;
TSFAOST.Elements = YSFAOST;
DTFAOST_switch_syntax = A_UNITE(CTFAOST,mode2,2,TSFAOST);
 /* line 668: */
 /* line 676: */
 /* line 678: */
 /* line 705: */
QVFAOST_word_str = PVFAOST;
 /* line 706: */
TVFAOST_word_help = SVFAOST;
 /* line 707: */
 /* line 708: */
WVFAOST_word_syntax = A_UNITE(VVFAOST,mode1,1,(&UVFAOST_word_no));
 /* line 712: */
 /* line 714: */
 /* line 739: */
PXFAOST_trim_str = OXFAOST;
 /* line 741: */
 /* line 742: */
 /* line 743: */
SXFAOST_trim_help = RXFAOST;
 /* line 744: */
 /* line 745: */
VXFAOST_trim_syntax = A_UNITE(UXFAOST,mode1,1,(&TXFAOST_trim_no));
 /* line 747: */
 /* line 750: */
 /* line 801: */
 /* line 803: */
 /* line 805: */
 /* line 837: */
 /* line 838: */
ADGAOST_quoted_string_syntax = A_UNITE(ZCGAOST,mode1,1,(&YCGAOST_quoted_string_no));
 /* line 839: */
DDGAOST_quoted_string_str = CDGAOST;
 /* line 841: */
 /* line 842: */
GDGAOST_quoted_string_help = FDGAOST;
 /* line 845: */
 /* line 868: */
 /* line 877: */
 /* line 879: */
 /* line 889: */
 /* line 890: */
WEGAOST_character_syntax = A_UNITE(VEGAOST,mode1,1,(&UEGAOST_character_no));
 /* line 891: */
ZEGAOST_character_str = YEGAOST;
 /* line 893: */
CFGAOST_character_help = BFGAOST;
 /* line 895: */
 /* line 904: */
 /* line 906: */
 /* line 915: */
 /* line 916: */
 /* line 988: */
A_PROC_EXIT(DECS kernelreader);
} 
#undef NL
/* end of translation of ./a68files/kernelreader.a68 */
