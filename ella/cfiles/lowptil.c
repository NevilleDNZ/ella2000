
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
/* UNAME:GQKBELA */
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
struct A68t159 * Database;
A68_VC  Description;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE159,REF MODE26)  */
struct A68t159{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t160 * Df;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE160)  */
A_VECTOR(struct A68t161 ,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] MODE161 */
struct A68t161{
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
typedef struct A68t161  A68_161 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t167 ,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] MODE167 */
struct A68t168{
A68_INT  Block_num;
A_PAD_INT(PAD_43)
A68_INT  Offset;
A_PAD_INT(PAD_44)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT)  */
struct A68t167{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_45)
struct A68t168  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_46)
A68_INT  Dp_elts;
A_PAD_INT(PAD_47)
A68_INT  Code;
A_PAD_INT(PAD_48)
A68_INT  Version;
A_PAD_INT(PAD_49)
A68_INT  Read_size;
A_PAD_INT(PAD_50)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(BOOL,MODE168,INT,INT,INT,INT,INT)  */
struct A68t160{
struct A68t161 * Root;
struct A68t161 * Indirs_dp;
struct A68t161 * Freelist_dp;
struct A68t161 * Pagetable_dp;
struct A68t161 * Append_dp;
struct A68t162  Free_block_dps;
struct A68t162  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t163 * Write_buffer;
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
struct A68t164 * Gc_ptrs;
struct A68t165 * Instore_vars;
struct A68t166  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(REF MODE161,REF MODE161,REF MODE161,REF MODE161,REF MODE161,REF MODE162,REF MODE162,REF REF MODE111,REF REF MODE111,REF MODE163,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE164,REF MODE165,REF MODE166,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t163{
A68_VC  Buffer;
struct A68t169 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,REF MODE169,REF INT,REF INT,REF INT)  */
struct A68t164{
struct A68t168  Old;
struct A68t168  New;
struct A68t164 * Rest;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE168,MODE168,REF MODE164)  */
struct A68t165{
A68_INT  Indirection;
A_PAD_INT(PAD_51)
struct A68t165 * Rest;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,REF MODE165)  */
struct A68t169{
A68_INT  Lwb;
A_PAD_INT(PAD_52)
A68_INT  Upb;
A_PAD_INT(PAD_53)
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT,REF MODE169)  */

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t159 *,struct A68t161 ,struct A68t161 ),(struct A68t159 *,struct A68t161 ,struct A68t161 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE159,MODE161,MODE161) BOOL */

A_PROCEDURE(A68_INT ,A68t171,(struct A68t159 *,struct A68t161 ),(struct A68t159 *,struct A68t161 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE159,MODE161) INT */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t159 *,struct A68t161 *),(struct A68t159 *,struct A68t161 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE159) MODE161 */

A_PROCEDURE(struct A68t111 *,A68t173,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t111 *,A68_BOOL ,struct A68t159 *),(struct A68t111 *,A68_BOOL ,struct A68t159 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE111,BOOL) MODE159 */

A_PROCEDURE(A68_BOOL ,A68t175,(struct A68t159 *),(struct A68t159 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE159) BOOL */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t159 *,struct A68t161 ),(struct A68t159 *,struct A68t161 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE159,MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t159 *,struct A68t161 ,struct A68t97 ),(struct A68t159 *,struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE159,MODE161,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t159 *,struct A68t97 ),(struct A68t159 *,struct A68t97 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE159,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t179,(struct A68t159 *,A68_INT ),(struct A68t159 *,A68_INT ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE159,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t159 *,A68_INT ,struct A68t97 ),(struct A68t159 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE159,INT,MODE97) VOID */

A_PROCEDURE(struct A68t111 *,A68t181,(struct A68t159 *),(struct A68t159 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE159) REF MODE111 */

A_PROCEDURE(A68_INT ,A68t182,(struct A68t159 *),(struct A68t159 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE159) INT */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t159 *),(struct A68t159 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE159) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t186,(struct A68t158 *,struct A68t161 ),(struct A68t158 *,struct A68t161 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE158,MODE161) BOOL */
struct A68t187{
A68_VC  Rvc;
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,REF MODE187)  */
struct A68t188{
struct A68t158  Df;
struct A68t187  Head;
struct A68t187 * Current;
A68_INT  Index;
A_PAD_INT(PAD_54)
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_56)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE158,MODE187,REF MODE187,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t188 *,A68t189,(struct A68t158 *,struct A68t87 ,A68_INT ),(struct A68t158 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE158,MODE87,INT) REF MODE188 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t188 *),(struct A68t188 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE188) VOID */

A_PROCEDURE(struct A68t188 *,A68t191,(struct A68t158 *,struct A68t161 ),(struct A68t158 *,struct A68t161 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE158,MODE161) REF MODE188 */

A_PROCEDURE(A68_CHAR ,A68t192,(struct A68t188 *),(struct A68t188 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE188) CHAR */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t188 *,A68_VC ),(struct A68t188 *,A68_VC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE188,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t194,(struct A68t188 *),(struct A68t188 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE188) BOOL */

A_PROCEDURE(A68_INT ,A68t195,(struct A68t188 *),(struct A68t188 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE188) INT */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t188 *,A68_VC *),(struct A68t188 *,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE188) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t158 *,struct A68t97 ),(struct A68t158 *,struct A68t97 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE158,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t158 *,A68_VC ,struct A68t97 ,struct A68t161 *),(struct A68t158 *,A68_VC ,struct A68t97 ,struct A68t161 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE158,MODE26,MODE97) MODE161 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t158 *,struct A68t162 ,struct A68t97 ,struct A68t161 *),(struct A68t158 *,struct A68t162 ,struct A68t97 ,struct A68t161 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE158,MODE162,MODE97) MODE161 */

A_PROCEDURE(A68_INT ,A68t200,(struct A68t158 *,struct A68t161 ,struct A68t97 ),(struct A68t158 *,struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE158,MODE161,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t97 ),(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE158,REF MODE26,MODE161,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t158 *,struct A68t162 ,struct A68t161 ,struct A68t97 ),(struct A68t158 *,struct A68t162 ,struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE158,REF MODE162,MODE161,MODE97) VOID */

A_PROCEDURE(struct A68t188 *,A68t203,(struct A68t158 *,struct A68t87 ),(struct A68t158 *,struct A68t87 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE158,MODE87) REF MODE188 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t188 *,struct A68t97 ),(struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE188,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t188 *,struct A68t97 ,struct A68t161 *),(struct A68t188 *,struct A68t97 ,struct A68t161 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE188,MODE97) MODE161 */

A_PROCEDURE(A68_INT ,A68t206,(A68_CHAR ,struct A68t188 *,struct A68t97 ),(A68_CHAR ,struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(CHAR,REF MODE188,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t207,(A68_VC ,struct A68t188 *,struct A68t97 ),(A68_VC ,struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,REF MODE188,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t208,(A68_INT ,struct A68t188 *,struct A68t97 ),(A68_INT ,struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,REF MODE188,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t209,(A68_VC ,struct A68t188 *,struct A68t97 ),(A68_VC ,struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE26,REF MODE188,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t210,(A68_BOOL ,struct A68t188 *,struct A68t97 ),(A68_BOOL ,struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(BOOL,REF MODE188,MODE97) INT */
struct A68t211{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_57)
A68_BOOL  Login;
A_PAD_BOOL(PAD_58)
struct A68t211 * Rest;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE211)  */
struct A68t212{
A68_INT  Key;
A_PAD_INT(PAD_59)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_60)
struct A68t32  Version;
struct A68t162  Data;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE162,REF MODE212)  */
struct A68t213{
A68_INT  Sort;
A_PAD_INT(PAD_61)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_62)
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE213)  */
struct A68t214{
A68_INT  Sort;
A_PAD_INT(PAD_63)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_64)
A68_BOOL  Import;
A_PAD_BOOL(PAD_65)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_66)
A68_INT  Version;
A_PAD_INT(PAD_67)
A68_VC  Il;
struct A68t213 * Uses;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE213)  */
struct A68t216{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t215{
struct A68t216  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_68)
struct A68t161  Info;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE216,REF MODE26,REF MODE26,INT,MODE161)  */
struct A68t217{
struct A68t215  Binding;
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE215,REF MODE217)  */
struct A68t218{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_69)
struct A68t217 * Imports;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,INT,REF MODE217)  */
struct A68t219{
struct A68t218  Region;
struct A68t219 * Rest;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE218,REF MODE219)  */
A_VECTOR(struct A68t214 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE214 */
struct A68t220{
A68_VC  Name;
struct A68t161  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_70)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_71)
struct A68t221  Decls;
struct A68t212 * Declattributes;
struct A68t219 * Regions;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE26,MODE161,BOOL,BOOL,REF MODE221,REF MODE212,REF MODE219)  */
struct A68t222{
struct A68t220  Context;
struct A68t222 * Rest;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE220,REF MODE222)  */
struct A68t223{
A68_VC  Name;
struct A68t111 * File;
struct A68t158 * Discfile;
struct A68t216  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_72)
struct A68t162  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_73)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t211 * Classes;
struct A68t222 * Contexts;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(REF MODE26,REF MODE111,REF MODE158,MODE216,REF MODE26,BOOL,MODE162,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE211,REF MODE222)  */

A_PROCEDURE(A68_VOID ,A68t224,(A68_BOOL ,struct A68t223 *),(A68_BOOL ,struct A68t223 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(BOOL) MODE223 */
struct A68t225{
struct A68t220 * Context;
struct A68t218 * Region;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE220,REF MODE218)  */
struct A68t226{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_74)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t227,(struct A68t216 ,struct A68t216 ),(struct A68t216 ,struct A68t216 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE216,MODE216) BOOL */

A_PROCEDURE(A68_BOOL ,A68t228,(struct A68t225 ,struct A68t225 ),(struct A68t225 ,struct A68t225 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE225,MODE225) BOOL */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t216 ,A68_VC *),(struct A68t216 ,A68_VC *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE216) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t225 ,A68_VC *),(struct A68t225 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE225) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t225 ,struct A68t216 *),(struct A68t225 ,struct A68t216 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE225) MODE216 */

A_PROCEDURE(A68_BOOL ,A68t232,(struct A68t220 *,struct A68t97 ),(struct A68t220 *,struct A68t97 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE220,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t233,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t223 *,A68t234,(void),(void *));
typedef struct A68t234  A68_234 ;    /* PROC REF MODE223 */

A_PROCEDURE(struct A68t220 *,A68t235,(A68_VC ),(A68_VC ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE26) REF MODE220 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t220 *,A68_VC ,struct A68t225 *),(struct A68t220 *,A68_VC ,struct A68t225 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE220,REF MODE26) MODE225 */

A_PROCEDURE(struct A68t217 *,A68t237,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE225) REF MODE217 */

A_PROCEDURE(struct A68t215 *,A68t238,(struct A68t225 ,A68_VC ),(struct A68t225 ,A68_VC ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE225,REF MODE26) REF MODE215 */

A_PROCEDURE(struct A68t220 *,A68t239,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE26,MODE97) REF MODE220 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t220 *,A68_VC ,struct A68t97 ,struct A68t225 *),(struct A68t220 *,A68_VC ,struct A68t97 ,struct A68t225 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE220,REF MODE26,MODE97) MODE225 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t216 ,struct A68t97 ,struct A68t225 *),(struct A68t216 ,struct A68t97 ,struct A68t225 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE216,MODE97) MODE225 */

A_PROCEDURE(struct A68t215 *,A68t242,(struct A68t225 ,A68_VC ,struct A68t97 ),(struct A68t225 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE225,REF MODE26,MODE97) REF MODE215 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t220 *,A68_VC ,struct A68t161 ,struct A68t97 ),(struct A68t220 *,A68_VC ,struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE220,REF MODE26,MODE161,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t220 *,struct A68t97 ),(struct A68t220 *,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE220,MODE97) VOID */
struct A68t246 ;

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC MODE246 */
struct A68t247 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t247  A68_247 ;    /* UNION(INT,VOID)  */
struct A68t246{
A68_INT  Type;
A_PAD_INT(PAD_75)
struct A68t247  Val;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT,MODE247)  */
struct A68t249 ;

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t249 ),(struct A68t249 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE249) VOID */
A_VECTOR(A68_SBITS ,A68t250);
typedef struct A68t250  A68_250 ;    /* VECTOR [] SHORT BITS */
struct A68t249{
A68_INT  Test_index;
A_PAD_INT(PAD_76)
struct A68t250  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t246 * Lex;
struct A68t32 * Sidstack;
struct A68t53  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_77)
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,MODE250,REF INT,REF INT,REF MODE246,REF REF MODE32,MODE53,INT)  */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(A68_BOOL ,struct A68t249 *),(A68_BOOL ,struct A68t249 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BOOL) MODE249 */
struct A68t254 ;
struct A68t255 ;
struct A68t256 ;

A_PROCEDURE(A68_VOID ,A68t253,(A68_INT ,struct A68t250 ,struct A68t53 ,struct A68t143 ,struct A68t245 ,struct A68t248 ,struct A68t255 ,struct A68t256 ,struct A68t254 *),(A68_INT ,struct A68t250 ,struct A68t53 ,struct A68t143 ,struct A68t245 ,struct A68t248 ,struct A68t255 ,struct A68t256 ,struct A68t254 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(INT,MODE250,MODE53,MODE143,MODE245,MODE248,MODE255,MODE256) MODE254 */
struct A68t254 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t254  A68_254 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t255,(A68_INT ,A68_INT ,struct A68t247 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t247 ,A68_INT ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(INT,INT,MODE247,INT) VOID */

A_PROCEDURE(A68_INT ,A68t256,(A68_INT ,A68_INT ,struct A68t247 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t247 ,A68_INT ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(INT,INT,MODE247,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t257,(A68_INT ,struct A68t249 ),(A68_INT ,struct A68t249 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(INT,MODE249) BOOL */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t259,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_SBITS ,1836,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 1836 SHORT BITS */
A_ISTRUCT(A68_BITS ,90,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 90 BITS */
A_ISTRUCT(A68_CHAR ,19,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 26 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from sidanalyser --- */
extern A68_VOID  GBAAELA_analyser(A68_INT ,struct A68t250 ,struct A68t53 ,struct A68t143 ,struct A68t245 ,struct A68t248 ,struct A68t255 ,struct A68t256 ,A68_254 *);
/* --- End of imports from sidanalyser --- */


/* --- Imports from lowptilproc --- */
extern A68_VOID  FWFBELA_fnptilstart(struct A68t220 *,A68_VC ,struct A68t161 ,struct A68t97 );
extern A68_VOID  EXFBELA_lowptilstart(struct A68t220 *,struct A68t97 );
extern A68_VOID  MEEBELA_reader(A68_246 *);
extern A68_VOID  TEEBELA_failure(struct A68t249 );
extern A68_INT  WEEBELA_return(void);
extern A68_VOID  VEEBELA_fail(struct A68t85 );
extern A68_VOID  FFEBELA_integer(void);
extern A68_VOID  ZEEBELA_identifier(void);
extern A68_VOID  OSFBELA_start(void);
extern A68_VOID  PSFBELA_keep(void);
extern A68_VOID  URFBELA_fn(void);
extern A68_VOID  DSFBELA_fncall(void);
extern A68_VOID  QSFBELA_endofkeep(void);
extern A68_VOID  ORFBELA_kend(void);
extern A68_VOID  ZQFBELA_kconst(void);
extern A68_VOID  FRFBELA_kfn(void);
extern A68_VOID  SQFBELA_kint(void);
extern A68_VOID  YQFBELA_kint2(void);
extern A68_VOID  MQFBELA_ktype(void);
extern A68_VOID  DQFBELA_kilend(void);
extern A68_VOID  HHEBELA_icheck(void);
extern A68_VOID  NHEBELA_idef(void);
extern A68_VOID  DIEBELA_inull(void);
extern A68_VOID  XHEBELA_ibracket(void);
extern A68_VOID  BHEBELA_ivarmult(void);
extern A68_VOID  VGEBELA_iparam(void);
extern A68_VOID  PGEBELA_icond(void);
extern A68_VOID  JGEBELA_imop(void);
extern A68_VOID  DGEBELA_idop(void);
extern A68_VOID  XFEBELA_iname(void);
extern A68_VOID  LFEBELA_iconst(void);
extern A68_VOID  RFEBELA_iconsttext(void);
extern A68_VOID  TQEBELA_zero(void);
extern A68_VOID  VVFBELA_tstring(void);
extern A68_VOID  TJEBELA_tbracket(void);
extern A68_VOID  ZJEBELA_tfn(void);
extern A68_VOID  NJEBELA_tparam(void);
extern A68_VOID  HJEBELA_tst(void);
extern A68_VOID  BJEBELA_trow(void);
extern A68_VOID  VIEBELA_tnamed(void);
extern A68_VOID  JIEBELA_tnull(void);
extern A68_VOID  TPEBELA_pstring(void);
extern A68_VOID  NPEBELA_prange(void);
extern A68_VOID  HPEBELA_pidalts(void);
extern A68_VOID  JQEBELA_pcharange(void);
extern A68_VOID  ZPEBELA_pchar(void);
extern A68_VOID  JSEBELA_fnend(void);
extern A68_VOID  FREBELA_fnstart(void);
extern A68_VOID  ZQEBELA_end(void);
extern A68_VOID  XREBELA_normal(void);
extern A68_VOID  PVEBELA_imported(void);
extern A68_VOID  PSEBELA_biop(void);
extern A68_VOID  JVEBELA_reform(void);
extern A68_VOID  ZUEBELA_ram(void);
extern A68_VOID  TTEBELA_adelay(void);
extern A68_VOID  JTEBELA_idelay(void);
extern A68_VOID  XAFBELA_vvarmult(void);
extern A68_VOID  DBFBELA_vvarmultend(void);
extern A68_VOID  BUFBELA_vprimst(void);
extern A68_VOID  RTFBELA_vprimch(void);
extern A68_VOID  LTFBELA_vstring(void);
extern A68_VOID  NCFBELA_vbracket(void);
extern A68_VOID  VBFBELA_vdynindex(void);
extern A68_VOID  BCFBELA_vdynend(void);
extern A68_VOID  PBFBELA_vpar(void);
extern A68_VOID  PKFBELA_parend(void);
extern A68_VOID  JBFBELA_vseq(void);
extern A68_VOID  ZZEBELA_vif(void);
extern A68_VOID  FAFBELA_vthen(void);
extern A68_VOID  LAFBELA_velse(void);
extern A68_VOID  RAFBELA_vfi(void);
extern A68_VOID  TZEBELA_vcoll(void);
extern A68_VOID  NZEBELA_vquery(void);
extern A68_VOID  BZEBELA_vcase(void);
extern A68_VOID  HZEBELA_vcaseend(void);
extern A68_VOID  VYEBELA_vrow(void);
extern A68_VOID  PYEBELA_vsharp(void);
extern A68_VOID  JYEBELA_vunn(void);
extern A68_VOID  BWEBELA_vconst(void);
extern A68_VOID  DYEBELA_vcalld(void);
extern A68_VOID  XXEBELA_vcallm(void);
extern A68_VOID  LXEBELA_vindex(void);
extern A68_VOID  FXEBELA_vtrim(void);
extern A68_VOID  ZWEBELA_vname(void);
extern A68_VOID  NWEBELA_vprimi(void);
extern A68_VOID  HWEBELA_vprim(void);
extern A68_VOID  VVEBELA_vconc(void);
extern A68_VOID  TOFBELA_ptflt(void);
extern A68_VOID  ZOFBELA_ptfltend(void);
extern A68_VOID  HOFBELA_pt(void);
extern A68_VOID  NOFBELA_ptend(void);
extern A68_VOID  BOFBELA_adelay2(void);
extern A68_VOID  VNFBELA_idelay2(void);
extern A68_VOID  PNFBELA_prange2(void);
extern A68_VOID  JNFBELA_pidalts2(void);
extern A68_VOID  DNFBELA_biddec2(void);
extern A68_VOID  TLFBELA_bfor(void);
extern A68_VOID  ZLFBELA_multjoin(void);
extern A68_VOID  FMFBELA_bend(void);
extern A68_VOID  NLFBELA_bjoin(void);
extern A68_VOID  VKFBELA_bmake(void);
extern A68_VOID  BLFBELA_bmakeend(void);
extern A68_VOID  XPFBELA_str(void);
extern A68_VOID  FPFBELA_bvvarmult(void);
extern A68_VOID  LPFBELA_bjoinsbjoin(void);
extern A68_VOID  RPFBELA_bvvarmultend(void);
extern A68_VOID  TFFBELA_seqend(void);
extern A68_VOID  XJFBELA_intname(void);
extern A68_VOID  FJFBELA_seqvarmult(void);
extern A68_VOID  LJFBELA_seqvarmultend(void);
extern A68_VOID  BIFBELA_seqif(void);
extern A68_VOID  HIFBELA_seqthen(void);
extern A68_VOID  NIFBELA_seqelse(void);
extern A68_VOID  TIFBELA_seqfi(void);
extern A68_VOID  VHFBELA_seqcase(void);
extern A68_VOID  DHFBELA_seqassign(void);
extern A68_VOID  JHFBELA_seqbecomes(void);
extern A68_VOID  PHFBELA_seqassignend(void);
extern A68_VOID  XGFBELA_seqper(void);
extern A68_VOID  RGFBELA_seqvar(void);
extern A68_VOID  LGFBELA_seqlet(void);
extern A68_VOID  FGFBELA_seqvoid(void);
extern A68_VOID  ZFFBELA_seqnull(void);
extern A68_VOID  ZIFBELA_seqrow(void);
extern A68_VOID  RJFBELA_typename(void);
extern A68_VOID  LVFBELA_cprimchr(void);
extern A68_VOID  BVFBELA_cprimst(void);
extern A68_VOID  RUFBELA_cprimch(void);
extern A68_VOID  LUFBELA_cstring(void);
extern A68_VOID  PNEBELA_cindex(void);
extern A68_VOID  VNEBELA_ctrim(void);
extern A68_VOID  BOEBELA_crepl(void);
extern A68_VOID  LOEBELA_ccond(void);
extern A68_VOID  ROEBELA_cconc(void);
extern A68_VOID  BPEBELA_cattr(void);
extern A68_VOID  HMEBELA_cquery(void);
extern A68_VOID  BMEBELA_cttype(void);
extern A68_VOID  NMEBELA_cbracket(void);
extern A68_VOID  TMEBELA_calt(void);
extern A68_VOID  VLEBELA_cnull(void);
extern A68_VOID  PLEBELA_crow(void);
extern A68_VOID  JLEBELA_cst(void);
extern A68_VOID  DLEBELA_cprimu(void);
extern A68_VOID  XKEBELA_cprimr(void);
extern A68_VOID  RKEBELA_cprimi(void);
extern A68_VOID  LKEBELA_cprim(void);
extern A68_VOID  JKFBELA_unchecked(void);
extern A68_VOID  HFFBELA_vnoelse(void);
extern A68_VOID  BFFBELA_vnormal(void);
extern A68_VOID  NFFBELA_velseof(void);
extern A68_VOID  FKEBELA_cnamed(void);
extern A68_VOID  DKFBELA_constname(void);
extern A68_VOID  TCFBELA_vnull(void);
extern A68_VOID  ZMEBELA_cparam(void);
extern A68_VOID  TWEBELA_vprimc(void);
extern A68_VOID  ZSEBELA_alien(void);
extern A68_VOID  DUEBELA_sample(void);
extern A68_VOID  NUEBELA_faster(void);
extern A68_VOID  TUEBELA_slower(void);
extern A68_VOID  HLFBELA_bjoinend(void);
extern A68_VOID  PIEBELA_tvoid(void);
extern A68_VOID  ZCFBELA_vvoid(void);
extern A68_VOID  FDFBELA_vreplace(void);
extern A68_VOID  XDFBELA_kattr(void);
extern A68_VOID  VEFBELA_attrname(void);
extern A68_VOID  LDFBELA_attid(void);
extern A68_VOID  RDFBELA_attdata(void);
extern A68_VOID  DEFBELA_attbracket(void);
extern A68_VOID  JEFBELA_attstr(void);
extern A68_VOID  PEFBELA_attnull(void);
extern A68_VOID  DSEBELA_brief(void);
extern A68_VOID  RREBELA_inst(void);
extern A68_VOID  JNEBELA_cvoid(void);
extern A68_VOID  RXEBELA_vtermindex(void);
/* --- End of imports from lowptilproc --- */


/* --- Imports from libmodes --- */
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
/* --- End of imports from databasebuffers --- */


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
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAELA(void);   /* sidanalyser */
extern void SCEBELA(void);   /* lowptilproc */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_260   KQKBELA = {"$Id: lowptil.a68,v 34.2 1995/03/29 13:03:30 ella Exp $"}; 
A_GISVEC(A68_VC ,LQKBELA,KQKBELA,54)
static A68_250  OQKBELA_sid_code;
static A68_53  RQKBELA_sid_cblwds;
#define SQKBELA_sid_mult 160
static A68_263   WQKBELA = {"Attempt to pop/top "}; 
A_GISVEC(A68_VC ,XQKBELA,WQKBELA,19)
static A68_264   ZQKBELA = {" value off empty stack"}; 
A_GISVEC(A68_VC ,ARKBELA,ZQKBELA,22)
static A68_265   YRKBELA = {"Non-existent action called"}; 
A_GISVEC(A68_VC ,ZRKBELA,YRKBELA,26)
typedef struct   /* env of non-global proc */
{
A68_VC  YQKBELA_mess1;
A68_VC  BRKBELA_mess2;
A68_VC  Ucstack;
} FRKBELA_generator;

A_STATIC A68_VOID  TQKBELA_sid_initstacks(void);

A_STATIC A68_VOID  VQKBELA_sid_crash(A68_VC  Ucstack);

A_STATIC A68_VOID  ERKBELA_generator(A68_BOOL  CRKBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XRKBELA_sid_actions(A68_INT  Sid_no, A68_INT  Sid_index, A68_247  Sid_lv, A68_INT  Sid_stind);

A_STATIC A68_INT  HSKBELA_sid_returns(A68_INT  Sid_no, A68_INT  Sid_index, A68_247  Sid_lv, A68_INT  Sid_stind);

A68_VOID  MSKBELA_lowptil(A68_220 * Ct, A68_97  Msg);

A68_VOID  XSKBELA_ptfnil(A68_220 * Ct, A68_VC  Spec, A68_161  Dp, A68_97  Msg);

A_STATIC A68_VOID  ERKBELA_generator(A68_BOOL  CRKBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FRKBELA_generator *)NonLocals)->x)
{ 
A68_VC  GRKBELA;  /* clause result */
A68_VC  HRKBELA;  /* OPERATORS - dynamic generator */
{ 
HRKBELA.upb = ((NL(YQKBELA_mess1).upb+NL(BRKBELA_mess2).upb)+NL(Ucstack).upb) ;
( CRKBELA_anonymous? A_VLOC(A68_CHAR ,HRKBELA): A_VHEAP(A68_CHAR ,HRKBELA) );
GRKBELA = HRKBELA;
} 
*ReturnedValue = (GRKBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TQKBELA_sid_initstacks(void)
{ 
A_PROC_ENTRY(sid_initstacks);
/*SKIP*/;
A_PROC_EXIT(sid_initstacks);
return;
} 
#undef NL

A_STATIC A68_VOID  VQKBELA_sid_crash(A68_VC  Ucstack)
{ 
A68_VC  YQKBELA_mess1;
A68_VC  BRKBELA_mess2;
A68_31  DRKBELA_generator;   /* proc value of non-global proc */
A68_VC  JRKBELA;  /* avoid structure result */
A68_VC  IRKBELA_message;
A68_INT  KRKBELA_pos;
A68_VC  LRKBELA;  /* OPERATORS - trim index */
A68_VC  MRKBELA;  /* YIELD */
A68_VC  NRKBELA;  /* OPERATORS - trim index */
A68_VC  ORKBELA;  /* YIELD */
A68_VC  PRKBELA;  /* OPERATORS - trim index */
A68_VC  QRKBELA;  /* YIELD */
A68_52  RRKBELA;  /* OPERATORS - mode -> union mode */
A68_85  SRKBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sid_crash);
 /* line 454: */
{ 
YQKBELA_mess1 = XQKBELA;
 /* line 455: */
BRKBELA_mess2 = ARKBELA;
 /* line 456: */
A_CLOSURE( DRKBELA_generator, ERKBELA_generator, FRKBELA_generator );
(( FRKBELA_generator * ) ( DRKBELA_generator.nonlocals )) -> YQKBELA_mess1 = YQKBELA_mess1;
(( FRKBELA_generator * ) ( DRKBELA_generator.nonlocals )) -> BRKBELA_mess2 = BRKBELA_mess2;
(( FRKBELA_generator * ) ( DRKBELA_generator.nonlocals )) -> Ucstack = Ucstack;
A_CALLPROC(DRKBELA_generator,(A68_TRUE, &JRKBELA),(A68_TRUE, &JRKBELA,(DRKBELA_generator).nonlocals));
IRKBELA_message = JRKBELA;
 /* line 457: */
KRKBELA_pos = YQKBELA_mess1.upb;
 /* line 458: */
MRKBELA = A_VTRIM(LRKBELA,(IRKBELA_message),A_VTSCRIPT(&(LRKBELA.upb),(IRKBELA_message).upb,1,KRKBELA_pos)) ;
A_VASSIGN2(YQKBELA_mess1,MRKBELA,A68_CHAR );
 /* line 459: */
ORKBELA = A_VTRIM(NRKBELA,(IRKBELA_message),A_VTSCRIPT(&(NRKBELA.upb),(IRKBELA_message).upb,(KRKBELA_pos+1),(KRKBELA_pos+=Ucstack.upb))) ;
A_VASSIGN2(Ucstack,ORKBELA,A68_CHAR );
 /* line 460: */
QRKBELA = A_VTRIM(PRKBELA,(IRKBELA_message),A_VTSCRIPT(&(PRKBELA.upb),(IRKBELA_message).upb,(KRKBELA_pos+1),(IRKBELA_message).upb)) ;
A_VASSIGN2(BRKBELA_mess2,QRKBELA,A68_CHAR );
 /* line 461: */
 /* line 462: */
VEEBELA_fail(A_HVEC(SRKBELA,A_UNITE(RRKBELA,mode7,7,IRKBELA_message),A68_52 ));
} 
A_PROC_EXIT(sid_crash);
return;
} 
#undef NL
 /* line 466: */
 /* line 467: */
 /* line 468: */

A_STATIC A68_VOID  XRKBELA_sid_actions(A68_INT  Sid_no, A68_INT  Sid_index, A68_247  Sid_lv, A68_INT  Sid_stind)
{ 
A68_52  ASKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BSKBELA;  /* YIELD */
A68_85  CSKBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sid_actions);
 /* line 469: */
 /* line 470: */
 /* line 471: */
switch ( Sid_no )
{ 
case 1: 
 /* line 472: */
OSFBELA_start();
break;
case 2: 
 /* line 473: */
PSFBELA_keep();
break;
case 3: 
 /* line 474: */
URFBELA_fn();
break;
case 4: 
 /* line 475: */
DSFBELA_fncall();
break;
case 5: 
 /* line 476: */
QSFBELA_endofkeep();
break;
case 6: 
 /* line 477: */
DQFBELA_kilend();
break;
case 7: 
 /* line 478: */
ORFBELA_kend();
break;
case 8: 
 /* line 479: */
XDFBELA_kattr();
break;
case 9: 
 /* line 480: */
ZEEBELA_identifier();
break;
case 10: 
 /* line 481: */
FFEBELA_integer();
break;
case 11: 
 /* line 482: */
ZQFBELA_kconst();
break;
case 12: 
 /* line 483: */
FRFBELA_kfn();
break;
case 13: 
 /* line 484: */
TQEBELA_zero();
break;
case 14: 
 /* line 485: */
SQFBELA_kint();
break;
case 15: 
 /* line 486: */
YQFBELA_kint2();
break;
case 16: 
 /* line 487: */
MQFBELA_ktype();
break;
case 17: 
 /* line 488: */
PEFBELA_attnull();
break;
case 18: 
 /* line 489: */
JEFBELA_attstr();
break;
case 19: 
 /* line 490: */
DEFBELA_attbracket();
break;
case 20: 
 /* line 491: */
RDFBELA_attdata();
break;
case 21: 
 /* line 492: */
LDFBELA_attid();
break;
case 22: 
 /* line 493: */
TPEBELA_pstring();
break;
case 23: 
 /* line 494: */
ZQEBELA_end();
break;
case 24: 
 /* line 495: */
NPEBELA_prange();
break;
case 25: 
 /* line 496: */
HPEBELA_pidalts();
break;
case 26: 
 /* line 497: */
JQEBELA_pcharange();
break;
case 27: 
 /* line 498: */
ZPEBELA_pchar();
break;
case 28: 
 /* line 499: */
HHEBELA_icheck();
break;
case 29: 
 /* line 500: */
NHEBELA_idef();
break;
case 30: 
 /* line 501: */
DIEBELA_inull();
break;
case 31: 
 /* line 502: */
XHEBELA_ibracket();
break;
case 32: 
 /* line 503: */
RFEBELA_iconsttext();
break;
case 33: 
 /* line 504: */
BHEBELA_ivarmult();
break;
case 34: 
 /* line 505: */
VGEBELA_iparam();
break;
case 35: 
 /* line 506: */
PGEBELA_icond();
break;
case 36: 
 /* line 507: */
JGEBELA_imop();
break;
case 37: 
 /* line 508: */
DGEBELA_idop();
break;
case 38: 
 /* line 509: */
XFEBELA_iname();
break;
case 39: 
 /* line 510: */
LFEBELA_iconst();
break;
case 40: 
 /* line 511: */
PIEBELA_tvoid();
break;
case 41: 
 /* line 512: */
VVFBELA_tstring();
break;
case 42: 
 /* line 513: */
TJEBELA_tbracket();
break;
case 43: 
 /* line 514: */
ZJEBELA_tfn();
break;
case 44: 
 /* line 515: */
NJEBELA_tparam();
break;
case 45: 
 /* line 516: */
HJEBELA_tst();
break;
case 46: 
 /* line 517: */
BJEBELA_trow();
break;
case 47: 
 /* line 518: */
VIEBELA_tnamed();
break;
case 48: 
 /* line 519: */
JIEBELA_tnull();
break;
case 49: 
 /* line 520: */
ZMEBELA_cparam();
break;
case 50: 
 /* line 521: */
JNEBELA_cvoid();
break;
case 51: 
 /* line 522: */
FKEBELA_cnamed();
break;
case 52: 
 /* line 523: */
LVFBELA_cprimchr();
break;
case 53: 
 /* line 524: */
BVFBELA_cprimst();
break;
case 54: 
 /* line 525: */
RUFBELA_cprimch();
break;
case 55: 
 /* line 526: */
LUFBELA_cstring();
break;
case 56: 
 /* line 527: */
HMEBELA_cquery();
break;
case 57: 
 /* line 528: */
BMEBELA_cttype();
break;
case 58: 
 /* line 529: */
LOEBELA_ccond();
break;
case 59: 
 /* line 530: */
BOEBELA_crepl();
break;
case 60: 
 /* line 531: */
VNEBELA_ctrim();
break;
case 61: 
 /* line 532: */
PNEBELA_cindex();
break;
case 62: 
 /* line 533: */
NMEBELA_cbracket();
break;
case 63: 
 /* line 534: */
BPEBELA_cattr();
break;
case 64: 
 /* line 535: */
ROEBELA_cconc();
break;
case 65: 
 /* line 536: */
TMEBELA_calt();
break;
case 66: 
 /* line 537: */
VLEBELA_cnull();
break;
case 67: 
 /* line 538: */
PLEBELA_crow();
break;
case 68: 
 /* line 539: */
JLEBELA_cst();
break;
case 69: 
 /* line 540: */
DLEBELA_cprimu();
break;
case 70: 
 /* line 541: */
XKEBELA_cprimr();
break;
case 71: 
 /* line 542: */
RKEBELA_cprimi();
break;
case 72: 
 /* line 543: */
LKEBELA_cprim();
break;
case 73: 
 /* line 544: */
FREBELA_fnstart();
break;
case 74: 
 /* line 545: */
JSEBELA_fnend();
break;
case 75: 
 /* line 546: */
VEFBELA_attrname();
break;
case 76: 
 /* line 547: */
DKFBELA_constname();
break;
case 77: 
 /* line 548: */
XJFBELA_intname();
break;
case 78: 
 /* line 549: */
RJFBELA_typename();
break;
case 79: 
 /* line 550: */
DSEBELA_brief();
break;
case 80: 
 /* line 551: */
XREBELA_normal();
break;
case 81: 
 /* line 552: */
TUEBELA_slower();
break;
case 82: 
 /* line 553: */
NUEBELA_faster();
break;
case 83: 
 /* line 554: */
PVEBELA_imported();
break;
case 84: 
 /* line 555: */
DUEBELA_sample();
break;
case 85: 
 /* line 556: */
ZSEBELA_alien();
break;
case 86: 
 /* line 557: */
PSEBELA_biop();
break;
case 87: 
 /* line 558: */
JVEBELA_reform();
break;
case 88: 
 /* line 559: */
ZUEBELA_ram();
break;
case 89: 
 /* line 560: */
TTEBELA_adelay();
break;
case 90: 
 /* line 561: */
JTEBELA_idelay();
break;
case 91: 
 /* line 562: */
FDFBELA_vreplace();
break;
case 92: 
 /* line 563: */
ZCFBELA_vvoid();
break;
case 93: 
 /* line 564: */
TWEBELA_vprimc();
break;
case 94: 
 /* line 565: */
TCFBELA_vnull();
break;
case 95: 
 /* line 566: */
BUFBELA_vprimst();
break;
case 96: 
 /* line 567: */
RTFBELA_vprimch();
break;
case 97: 
 /* line 568: */
LTFBELA_vstring();
break;
case 98: 
 /* line 569: */
NCFBELA_vbracket();
break;
case 99: 
 /* line 570: */
VBFBELA_vdynindex();
break;
case 100: 
 /* line 571: */
BCFBELA_vdynend();
break;
case 101: 
 /* line 572: */
PBFBELA_vpar();
break;
case 102: 
 /* line 573: */
PKFBELA_parend();
break;
case 103: 
 /* line 574: */
JBFBELA_vseq();
break;
case 104: 
 /* line 575: */
BWEBELA_vconst();
break;
case 105: 
 /* line 576: */
XAFBELA_vvarmult();
break;
case 106: 
 /* line 577: */
DBFBELA_vvarmultend();
break;
case 107: 
 /* line 578: */
RXEBELA_vtermindex();
break;
case 108: 
 /* line 579: */
ZZEBELA_vif();
break;
case 109: 
 /* line 580: */
FAFBELA_vthen();
break;
case 110: 
 /* line 581: */
LAFBELA_velse();
break;
case 111: 
 /* line 582: */
RAFBELA_vfi();
break;
case 112: 
 /* line 583: */
TZEBELA_vcoll();
break;
case 113: 
 /* line 584: */
NZEBELA_vquery();
break;
case 114: 
 /* line 585: */
BZEBELA_vcase();
break;
case 115: 
 /* line 586: */
HZEBELA_vcaseend();
break;
case 116: 
 /* line 587: */
VYEBELA_vrow();
break;
case 117: 
 /* line 588: */
PYEBELA_vsharp();
break;
case 118: 
 /* line 589: */
JYEBELA_vunn();
break;
case 119: 
 /* line 590: */
DYEBELA_vcalld();
break;
case 120: 
 /* line 591: */
XXEBELA_vcallm();
break;
case 121: 
 /* line 592: */
LXEBELA_vindex();
break;
case 122: 
 /* line 593: */
FXEBELA_vtrim();
break;
case 123: 
 /* line 594: */
ZWEBELA_vname();
break;
case 124: 
 /* line 595: */
NWEBELA_vprimi();
break;
case 125: 
 /* line 596: */
HWEBELA_vprim();
break;
case 126: 
 /* line 597: */
VVEBELA_vconc();
break;
case 127: 
 /* line 598: */
TOFBELA_ptflt();
break;
case 128: 
 /* line 599: */
ZOFBELA_ptfltend();
break;
case 129: 
 /* line 600: */
HOFBELA_pt();
break;
case 130: 
 /* line 601: */
NOFBELA_ptend();
break;
case 131: 
 /* line 602: */
BOFBELA_adelay2();
break;
case 132: 
 /* line 603: */
VNFBELA_idelay2();
break;
case 133: 
 /* line 604: */
PNFBELA_prange2();
break;
case 134: 
 /* line 605: */
JNFBELA_pidalts2();
break;
case 135: 
 /* line 606: */
DNFBELA_biddec2();
break;
case 136: 
 /* line 607: */
TLFBELA_bfor();
break;
case 137: 
 /* line 608: */
ZLFBELA_multjoin();
break;
case 138: 
 /* line 609: */
FMFBELA_bend();
break;
case 139: 
 /* line 610: */
NLFBELA_bjoin();
break;
case 140: 
 /* line 611: */
HLFBELA_bjoinend();
break;
case 141: 
 /* line 612: */
VKFBELA_bmake();
break;
case 142: 
 /* line 613: */
BLFBELA_bmakeend();
break;
case 143: 
 /* line 614: */
XPFBELA_str();
break;
case 144: 
 /* line 615: */
FPFBELA_bvvarmult();
break;
case 145: 
 /* line 616: */
LPFBELA_bjoinsbjoin();
break;
case 146: 
 /* line 617: */
RPFBELA_bvvarmultend();
break;
case 147: 
 /* line 618: */
RREBELA_inst();
break;
case 148: 
 /* line 619: */
TFFBELA_seqend();
break;
case 149: 
 /* line 620: */
ZIFBELA_seqrow();
break;
case 150: 
 /* line 621: */
FJFBELA_seqvarmult();
break;
case 151: 
 /* line 622: */
LJFBELA_seqvarmultend();
break;
case 152: 
 /* line 623: */
BIFBELA_seqif();
break;
case 153: 
 /* line 624: */
HIFBELA_seqthen();
break;
case 154: 
 /* line 625: */
NIFBELA_seqelse();
break;
case 155: 
 /* line 626: */
TIFBELA_seqfi();
break;
case 156: 
 /* line 627: */
VHFBELA_seqcase();
break;
case 157: 
 /* line 628: */
DHFBELA_seqassign();
break;
case 158: 
 /* line 629: */
JHFBELA_seqbecomes();
break;
case 159: 
 /* line 630: */
PHFBELA_seqassignend();
break;
case 160: 
 /* line 631: */
XGFBELA_seqper();
break;
case 161: 
 /* line 632: */
RGFBELA_seqvar();
break;
case 162: 
 /* line 633: */
LGFBELA_seqlet();
break;
case 163: 
 /* line 634: */
FGFBELA_seqvoid();
break;
case 164: 
 /* line 635: */
ZFFBELA_seqnull();
break;
case 165: 
 /* line 636: */
HFFBELA_vnoelse();
break;
case 166: 
 /* line 637: */
BFFBELA_vnormal();
break;
case 167: 
 /* line 638: */
NFFBELA_velseof();
break;
case 168: 
 /* line 639: */
JKFBELA_unchecked();
break;
case 169: 
 /* line 640: */
BSKBELA = ZRKBELA ;
VEEBELA_fail(A_HVEC(CSKBELA,A_UNITE(ASKBELA,mode7,7,BSKBELA),A68_52 ));
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(sid_actions);
return;
} 
#undef NL
 /* line 644: */
 /* line 645: */
 /* line 646: */

A_STATIC A68_INT  HSKBELA_sid_returns(A68_INT  Sid_no, A68_INT  Sid_index, A68_247  Sid_lv, A68_INT  Sid_stind)
{ 
A68_INT  ISKBELA;  /* clause result */
A68_INT  JSKBELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(sid_returns);
 /* line 647: */
 /* line 648: */
 /* line 649: */
switch ( Sid_no )
{ 
case 1: 
 /* line 651: */
ISKBELA = WEEBELA_return();
break;
case 2: 
ISKBELA = JSKBELA;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(sid_returns);
return( ISKBELA );
} 
#undef NL

A68_VOID  MSKBELA_lowptil(A68_220 * Ct, A68_97  Msg)
{ 
A68_143  NSKBELA;  /* procedure value */
A68_245  OSKBELA;  /* procedure value */
A68_248  PSKBELA;  /* procedure value */
A68_255  QSKBELA;  /* procedure value */
A68_256  RSKBELA;  /* procedure value */
A68_254  SSKBELA;  /* avoid structure result */
A_PROC_ENTRY(lowptil);
 /* line 658: */
 /* line 659: */
{ 
EXFBELA_lowptilstart(Ct, Msg);
 /* line 660: */
 /* line 661: */
 /* line 662: */
NSKBELA.fn.fn_global = TQKBELA_sid_initstacks;
NSKBELA.nonlocals = A68_NIL;
OSKBELA.fn.fn_global = MEEBELA_reader;
OSKBELA.nonlocals = A68_NIL;
PSKBELA.fn.fn_global = TEEBELA_failure;
PSKBELA.nonlocals = A68_NIL;
QSKBELA.fn.fn_global = XRKBELA_sid_actions;
QSKBELA.nonlocals = A68_NIL;
RSKBELA.fn.fn_global = HSKBELA_sid_returns;
RSKBELA.nonlocals = A68_NIL;
GBAAELA_analyser( SQKBELA_sid_mult, OQKBELA_sid_code, RQKBELA_sid_cblwds, NSKBELA, OSKBELA, PSKBELA, QSKBELA, RSKBELA, &SSKBELA );
SSKBELA;
} 
A_PROC_EXIT(lowptil);
return;
} 
#undef NL
 /* line 665: */

A68_VOID  XSKBELA_ptfnil(A68_220 * Ct, A68_VC  Spec, A68_161  Dp, A68_97  Msg)
{ 
A68_143  YSKBELA;  /* procedure value */
A68_245  ZSKBELA;  /* procedure value */
A68_248  ATKBELA;  /* procedure value */
A68_255  BTKBELA;  /* procedure value */
A68_256  CTKBELA;  /* procedure value */
A68_254  DTKBELA;  /* avoid structure result */
A_PROC_ENTRY(ptfnil);
 /* line 666: */
 /* line 667: */
{ 
FWFBELA_fnptilstart(Ct, Spec, Dp, Msg);
 /* line 668: */
 /* line 669: */
 /* line 670: */
 /* line 673: */
YSKBELA.fn.fn_global = TQKBELA_sid_initstacks;
YSKBELA.nonlocals = A68_NIL;
ZSKBELA.fn.fn_global = MEEBELA_reader;
ZSKBELA.nonlocals = A68_NIL;
ATKBELA.fn.fn_global = TEEBELA_failure;
ATKBELA.nonlocals = A68_NIL;
BTKBELA.fn.fn_global = XRKBELA_sid_actions;
BTKBELA.nonlocals = A68_NIL;
CTKBELA.fn.fn_global = HSKBELA_sid_returns;
CTKBELA.nonlocals = A68_NIL;
GBAAELA_analyser( SQKBELA_sid_mult, OQKBELA_sid_code, RQKBELA_sid_cblwds, YSKBELA, ZSKBELA, ATKBELA, BTKBELA, CTKBELA, &DTKBELA );
DTKBELA;
} 
A_PROC_EXIT(ptfnil);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void HQKBELA(void)   /* initialise DECS lowptil */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/lowptil.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/sidanalyser.m","./mfiles/lowptilproc.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_261  MQKBELA;  /* collateral clause result */
A68_250  NQKBELA;  /* OPERATORS - istruct -> vector */
A68_262  PQKBELA;  /* collateral clause result */
A68_53  QQKBELA;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAELA();   /* USE sidanalyser */
SCEBELA();   /* USE lowptilproc */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/lowptil.a68";
A_config.translation_time = "Tue Apr  4 10:42:33 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GQKBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:42:33 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS lowptil);
UEAALIB_a68config(LGAALIB_configinfo, LQKBELA);
 /* line 54: */
 /* line 55: */
MQKBELA.data[0] = 0X0007U;
MQKBELA.data[1] = 0X03f2U;
MQKBELA.data[2] = 0X0049U;
MQKBELA.data[3] = 0X000dU;
 /* line 56: */
MQKBELA.data[4] = 0X03f2U;
MQKBELA.data[5] = 0X002eU;
MQKBELA.data[6] = 0X0007U;
MQKBELA.data[7] = 0X000fU;
MQKBELA.data[8] = 0X0003U;
 /* line 57: */
MQKBELA.data[9] = 0X0079U;
MQKBELA.data[10] = 0X000cU;
MQKBELA.data[11] = 0X00a8U;
MQKBELA.data[12] = 0X0014U;
MQKBELA.data[13] = 0X0011U;
 /* line 58: */
MQKBELA.data[14] = 0X0162U;
MQKBELA.data[15] = 0X0016U;
MQKBELA.data[16] = 0X001cU;
MQKBELA.data[17] = 0X19a0U;
MQKBELA.data[18] = 0X0024U;
 /* line 59: */
MQKBELA.data[19] = 0X0011U;
MQKBELA.data[20] = 0X000bU;
MQKBELA.data[21] = 0X00c1U;
MQKBELA.data[22] = 0X00f9U;
MQKBELA.data[23] = 0X000aU;
 /* line 60: */
MQKBELA.data[24] = 0X00aeU;
MQKBELA.data[25] = 0X002cU;
MQKBELA.data[26] = 0X000aU;
MQKBELA.data[27] = 0X00deU;
MQKBELA.data[28] = 0X0007U;
 /* line 61: */
MQKBELA.data[29] = 0X000fU;
MQKBELA.data[30] = 0X024aU;
MQKBELA.data[31] = 0X0131U;
MQKBELA.data[32] = 0X0034U;
MQKBELA.data[33] = 0X024aU;
 /* line 62: */
MQKBELA.data[34] = 0X0116U;
MQKBELA.data[35] = 0X0007U;
MQKBELA.data[36] = 0X000fU;
MQKBELA.data[37] = 0X023aU;
MQKBELA.data[38] = 0X0169U;
 /* line 63: */
MQKBELA.data[39] = 0X003cU;
MQKBELA.data[40] = 0X023aU;
MQKBELA.data[41] = 0X014eU;
MQKBELA.data[42] = 0X0007U;
MQKBELA.data[43] = 0X000fU;
 /* line 64: */
MQKBELA.data[44] = 0X0232U;
MQKBELA.data[45] = 0X01f9U;
MQKBELA.data[46] = 0X0007U;
MQKBELA.data[47] = 0X0044U;
MQKBELA.data[48] = 0X004cU;
 /* line 65: */
MQKBELA.data[49] = 0X0502U;
MQKBELA.data[50] = 0X0196U;
MQKBELA.data[51] = 0X0007U;
MQKBELA.data[52] = 0X0054U;
MQKBELA.data[53] = 0X03faU;
 /* line 66: */
MQKBELA.data[54] = 0X01b6U;
MQKBELA.data[55] = 0X0007U;
MQKBELA.data[56] = 0X0054U;
MQKBELA.data[57] = 0X03faU;
MQKBELA.data[58] = 0X01d6U;
 /* line 67: */
MQKBELA.data[59] = 0X0007U;
MQKBELA.data[60] = 0X0620U;
MQKBELA.data[61] = 0X06b1U;
MQKBELA.data[62] = 0X022aU;
MQKBELA.data[63] = 0X0309U;
 /* line 68: */
MQKBELA.data[64] = 0X0007U;
MQKBELA.data[65] = 0X005cU;
MQKBELA.data[66] = 0X004cU;
MQKBELA.data[67] = 0X0502U;
MQKBELA.data[68] = 0X0226U;
 /* line 69: */
MQKBELA.data[69] = 0X0007U;
MQKBELA.data[70] = 0X0054U;
MQKBELA.data[71] = 0X03faU;
MQKBELA.data[72] = 0X0246U;
MQKBELA.data[73] = 0X0007U;
 /* line 70: */
MQKBELA.data[74] = 0X0054U;
MQKBELA.data[75] = 0X03faU;
MQKBELA.data[76] = 0X0266U;
MQKBELA.data[77] = 0X0007U;
MQKBELA.data[78] = 0X0054U;
 /* line 71: */
MQKBELA.data[79] = 0X03faU;
MQKBELA.data[80] = 0X0286U;
MQKBELA.data[81] = 0X0007U;
MQKBELA.data[82] = 0X0054U;
MQKBELA.data[83] = 0X03faU;
 /* line 72: */
MQKBELA.data[84] = 0X02a6U;
MQKBELA.data[85] = 0X0007U;
MQKBELA.data[86] = 0X0054U;
MQKBELA.data[87] = 0X03faU;
MQKBELA.data[88] = 0X02c6U;
 /* line 73: */
MQKBELA.data[89] = 0X0007U;
MQKBELA.data[90] = 0X0620U;
MQKBELA.data[91] = 0X0860U;
MQKBELA.data[92] = 0X08f0U;
MQKBELA.data[93] = 0X1158U;
 /* line 74: */
MQKBELA.data[94] = 0X06b0U;
MQKBELA.data[95] = 0X11e9U;
MQKBELA.data[96] = 0X0222U;
MQKBELA.data[97] = 0X0469U;
MQKBELA.data[98] = 0X0007U;
 /* line 75: */
MQKBELA.data[99] = 0X0064U;
MQKBELA.data[100] = 0X0054U;
MQKBELA.data[101] = 0X03faU;
MQKBELA.data[102] = 0X0336U;
MQKBELA.data[103] = 0X0007U;
 /* line 76: */
MQKBELA.data[104] = 0X18d0U;
MQKBELA.data[105] = 0X006cU;
MQKBELA.data[106] = 0X000aU;
MQKBELA.data[107] = 0X035eU;
MQKBELA.data[108] = 0X0007U;
 /* line 77: */
MQKBELA.data[109] = 0X0054U;
MQKBELA.data[110] = 0X03faU;
MQKBELA.data[111] = 0X037eU;
MQKBELA.data[112] = 0X0007U;
MQKBELA.data[113] = 0X0054U;
 /* line 78: */
MQKBELA.data[114] = 0X03faU;
MQKBELA.data[115] = 0X039eU;
MQKBELA.data[116] = 0X0007U;
MQKBELA.data[117] = 0X0054U;
MQKBELA.data[118] = 0X03faU;
 /* line 79: */
MQKBELA.data[119] = 0X03beU;
MQKBELA.data[120] = 0X0007U;
MQKBELA.data[121] = 0X0054U;
MQKBELA.data[122] = 0X03faU;
MQKBELA.data[123] = 0X03deU;
 /* line 80: */
MQKBELA.data[124] = 0X0007U;
MQKBELA.data[125] = 0X0620U;
MQKBELA.data[126] = 0X0860U;
MQKBELA.data[127] = 0X08f0U;
MQKBELA.data[128] = 0X1158U;
 /* line 81: */
MQKBELA.data[129] = 0X1908U;
MQKBELA.data[130] = 0X1a18U;
MQKBELA.data[131] = 0X0054U;
MQKBELA.data[132] = 0X03faU;
MQKBELA.data[133] = 0X042eU;
 /* line 82: */
MQKBELA.data[134] = 0X0007U;
MQKBELA.data[135] = 0X0054U;
MQKBELA.data[136] = 0X03faU;
MQKBELA.data[137] = 0X044eU;
MQKBELA.data[138] = 0X0007U;
 /* line 83: */
MQKBELA.data[139] = 0X000fU;
MQKBELA.data[140] = 0X021aU;
MQKBELA.data[141] = 0X0539U;
MQKBELA.data[142] = 0X0007U;
MQKBELA.data[143] = 0X0074U;
 /* line 84: */
MQKBELA.data[144] = 0X004cU;
MQKBELA.data[145] = 0X0502U;
MQKBELA.data[146] = 0X0496U;
MQKBELA.data[147] = 0X0007U;
MQKBELA.data[148] = 0X0054U;
 /* line 85: */
MQKBELA.data[149] = 0X03faU;
MQKBELA.data[150] = 0X04b6U;
MQKBELA.data[151] = 0X0007U;
MQKBELA.data[152] = 0X0054U;
MQKBELA.data[153] = 0X03faU;
 /* line 86: */
MQKBELA.data[154] = 0X04d6U;
MQKBELA.data[155] = 0X0007U;
MQKBELA.data[156] = 0X0054U;
MQKBELA.data[157] = 0X03faU;
MQKBELA.data[158] = 0X04f6U;
 /* line 87: */
MQKBELA.data[159] = 0X0007U;
MQKBELA.data[160] = 0X0620U;
MQKBELA.data[161] = 0X0860U;
MQKBELA.data[162] = 0X06b0U;
MQKBELA.data[163] = 0X0b80U;
 /* line 88: */
MQKBELA.data[164] = 0X007cU;
MQKBELA.data[165] = 0X000fU;
MQKBELA.data[166] = 0X0212U;
MQKBELA.data[167] = 0X00feU;
MQKBELA.data[168] = 0X0007U;
 /* line 89: */
MQKBELA.data[169] = 0X0084U;
MQKBELA.data[170] = 0X004cU;
MQKBELA.data[171] = 0X0502U;
MQKBELA.data[172] = 0X0566U;
MQKBELA.data[173] = 0X0007U;
 /* line 90: */
MQKBELA.data[174] = 0X0054U;
MQKBELA.data[175] = 0X03faU;
MQKBELA.data[176] = 0X0586U;
MQKBELA.data[177] = 0X0007U;
MQKBELA.data[178] = 0X0054U;
 /* line 91: */
MQKBELA.data[179] = 0X03faU;
MQKBELA.data[180] = 0X05a6U;
MQKBELA.data[181] = 0X0007U;
MQKBELA.data[182] = 0X0054U;
MQKBELA.data[183] = 0X03faU;
 /* line 92: */
MQKBELA.data[184] = 0X05c6U;
MQKBELA.data[185] = 0X0007U;
MQKBELA.data[186] = 0X0054U;
MQKBELA.data[187] = 0X03faU;
MQKBELA.data[188] = 0X05e6U;
 /* line 93: */
MQKBELA.data[189] = 0X0007U;
MQKBELA.data[190] = 0X0620U;
MQKBELA.data[191] = 0X0860U;
MQKBELA.data[192] = 0X08f0U;
MQKBELA.data[193] = 0X06b0U;
 /* line 94: */
MQKBELA.data[194] = 0X09a9U;
MQKBELA.data[195] = 0X0502U;
MQKBELA.data[196] = 0X0626U;
MQKBELA.data[197] = 0X004cU;
MQKBELA.data[198] = 0X0502U;
 /* line 95: */
MQKBELA.data[199] = 0X063eU;
MQKBELA.data[200] = 0X0007U;
MQKBELA.data[201] = 0X0659U;
MQKBELA.data[202] = 0X03faU;
MQKBELA.data[203] = 0X000fU;
 /* line 96: */
MQKBELA.data[204] = 0X0054U;
MQKBELA.data[205] = 0X03faU;
MQKBELA.data[206] = 0X0676U;
MQKBELA.data[207] = 0X0007U;
MQKBELA.data[208] = 0X0054U;
 /* line 97: */
MQKBELA.data[209] = 0X03faU;
MQKBELA.data[210] = 0X0696U;
MQKBELA.data[211] = 0X0007U;
MQKBELA.data[212] = 0X0621U;
MQKBELA.data[213] = 0X04eaU;
 /* line 98: */
MQKBELA.data[214] = 0X06d9U;
MQKBELA.data[215] = 0X0007U;
MQKBELA.data[216] = 0X008cU;
MQKBELA.data[217] = 0X000fU;
MQKBELA.data[218] = 0X04e2U;
 /* line 99: */
MQKBELA.data[219] = 0X0731U;
MQKBELA.data[220] = 0X0007U;
MQKBELA.data[221] = 0X0094U;
MQKBELA.data[222] = 0X06b0U;
MQKBELA.data[223] = 0X0808U;
 /* line 100: */
MQKBELA.data[224] = 0X006cU;
MQKBELA.data[225] = 0X000aU;
MQKBELA.data[226] = 0X0716U;
MQKBELA.data[227] = 0X0007U;
MQKBELA.data[228] = 0X000fU;
 /* line 101: */
MQKBELA.data[229] = 0X04daU;
MQKBELA.data[230] = 0X0759U;
MQKBELA.data[231] = 0X0007U;
MQKBELA.data[232] = 0X009cU;
MQKBELA.data[233] = 0X06b1U;
 /* line 102: */
MQKBELA.data[234] = 0X04d2U;
MQKBELA.data[235] = 0X07c1U;
MQKBELA.data[236] = 0X0007U;
MQKBELA.data[237] = 0X00a4U;
MQKBELA.data[238] = 0X004cU;
 /* line 103: */
MQKBELA.data[239] = 0X0502U;
MQKBELA.data[240] = 0X0786U;
MQKBELA.data[241] = 0X0007U;
MQKBELA.data[242] = 0X0054U;
MQKBELA.data[243] = 0X03faU;
 /* line 104: */
MQKBELA.data[244] = 0X07a6U;
MQKBELA.data[245] = 0X0007U;
MQKBELA.data[246] = 0X0829U;
MQKBELA.data[247] = 0X04caU;
MQKBELA.data[248] = 0X06b6U;
 /* line 105: */
MQKBELA.data[249] = 0X0007U;
MQKBELA.data[250] = 0X00acU;
MQKBELA.data[251] = 0X0054U;
MQKBELA.data[252] = 0X03faU;
MQKBELA.data[253] = 0X07eeU;
 /* line 106: */
MQKBELA.data[254] = 0X0007U;
MQKBELA.data[255] = 0X000fU;
MQKBELA.data[256] = 0X0013U;
MQKBELA.data[257] = 0X000fU;
MQKBELA.data[258] = 0X06b0U;
 /* line 107: */
MQKBELA.data[259] = 0X0809U;
MQKBELA.data[260] = 0X0502U;
MQKBELA.data[261] = 0X000fU;
MQKBELA.data[262] = 0X004cU;
MQKBELA.data[263] = 0X0502U;
 /* line 108: */
MQKBELA.data[264] = 0X0846U;
MQKBELA.data[265] = 0X0007U;
MQKBELA.data[266] = 0X0829U;
MQKBELA.data[267] = 0X0502U;
MQKBELA.data[268] = 0X0866U;
 /* line 109: */
MQKBELA.data[269] = 0X004cU;
MQKBELA.data[270] = 0X0502U;
MQKBELA.data[271] = 0X087eU;
MQKBELA.data[272] = 0X0007U;
MQKBELA.data[273] = 0X0899U;
 /* line 110: */
MQKBELA.data[274] = 0X03faU;
MQKBELA.data[275] = 0X000fU;
MQKBELA.data[276] = 0X0054U;
MQKBELA.data[277] = 0X03faU;
MQKBELA.data[278] = 0X08b6U;
 /* line 111: */
MQKBELA.data[279] = 0X0007U;
MQKBELA.data[280] = 0X0054U;
MQKBELA.data[281] = 0X03faU;
MQKBELA.data[282] = 0X08d6U;
MQKBELA.data[283] = 0X0007U;
 /* line 112: */
MQKBELA.data[284] = 0X0861U;
MQKBELA.data[285] = 0X0502U;
MQKBELA.data[286] = 0X08f6U;
MQKBELA.data[287] = 0X004cU;
MQKBELA.data[288] = 0X0502U;
 /* line 113: */
MQKBELA.data[289] = 0X090eU;
MQKBELA.data[290] = 0X0007U;
MQKBELA.data[291] = 0X0929U;
MQKBELA.data[292] = 0X03faU;
MQKBELA.data[293] = 0X000fU;
 /* line 114: */
MQKBELA.data[294] = 0X0054U;
MQKBELA.data[295] = 0X03faU;
MQKBELA.data[296] = 0X0946U;
MQKBELA.data[297] = 0X0007U;
MQKBELA.data[298] = 0X0054U;
 /* line 115: */
MQKBELA.data[299] = 0X03faU;
MQKBELA.data[300] = 0X0966U;
MQKBELA.data[301] = 0X0007U;
MQKBELA.data[302] = 0X09a8U;
MQKBELA.data[303] = 0X006cU;
 /* line 116: */
MQKBELA.data[304] = 0X000aU;
MQKBELA.data[305] = 0X098eU;
MQKBELA.data[306] = 0X0007U;
MQKBELA.data[307] = 0X08f1U;
MQKBELA.data[308] = 0X001bU;
 /* line 117: */
MQKBELA.data[309] = 0X09c1U;
MQKBELA.data[310] = 0X09d9U;
MQKBELA.data[311] = 0X0023U;
MQKBELA.data[312] = 0X09aeU;
MQKBELA.data[313] = 0X0f51U;
 /* line 118: */
MQKBELA.data[314] = 0X040aU;
MQKBELA.data[315] = 0X0a69U;
MQKBELA.data[316] = 0X0007U;
MQKBELA.data[317] = 0X00b4U;
MQKBELA.data[318] = 0X004cU;
 /* line 119: */
MQKBELA.data[319] = 0X0502U;
MQKBELA.data[320] = 0X0a06U;
MQKBELA.data[321] = 0X0007U;
MQKBELA.data[322] = 0X0054U;
MQKBELA.data[323] = 0X03faU;
 /* line 120: */
MQKBELA.data[324] = 0X0a26U;
MQKBELA.data[325] = 0X0007U;
MQKBELA.data[326] = 0X0ae0U;
MQKBELA.data[327] = 0X015aU;
MQKBELA.data[328] = 0X0a46U;
 /* line 121: */
MQKBELA.data[329] = 0X0007U;
MQKBELA.data[330] = 0X00bcU;
MQKBELA.data[331] = 0X000fU;
MQKBELA.data[332] = 0X01a2U;
MQKBELA.data[333] = 0X0ab9U;
 /* line 122: */
MQKBELA.data[334] = 0X0007U;
MQKBELA.data[335] = 0X00c4U;
MQKBELA.data[336] = 0X004cU;
MQKBELA.data[337] = 0X0502U;
MQKBELA.data[338] = 0X0a96U;
 /* line 123: */
MQKBELA.data[339] = 0X0007U;
MQKBELA.data[340] = 0X0b80U;
MQKBELA.data[341] = 0X0b81U;
MQKBELA.data[342] = 0X019aU;
MQKBELA.data[343] = 0X09deU;
 /* line 124: */
MQKBELA.data[344] = 0X0007U;
MQKBELA.data[345] = 0X00ccU;
MQKBELA.data[346] = 0X0ee9U;
MQKBELA.data[347] = 0X041aU;
MQKBELA.data[348] = 0X0b41U;
 /* line 125: */
MQKBELA.data[349] = 0X0007U;
MQKBELA.data[350] = 0X00d4U;
MQKBELA.data[351] = 0X0502U;
MQKBELA.data[352] = 0X0b06U;
MQKBELA.data[353] = 0X0007U;
 /* line 126: */
MQKBELA.data[354] = 0X004cU;
MQKBELA.data[355] = 0X0502U;
MQKBELA.data[356] = 0X0b26U;
MQKBELA.data[357] = 0X0007U;
MQKBELA.data[358] = 0X0ae1U;
 /* line 127: */
MQKBELA.data[359] = 0X0412U;
MQKBELA.data[360] = 0X000fU;
MQKBELA.data[361] = 0X0007U;
MQKBELA.data[362] = 0X00dcU;
MQKBELA.data[363] = 0X0502U;
 /* line 128: */
MQKBELA.data[364] = 0X0b66U;
MQKBELA.data[365] = 0X0007U;
MQKBELA.data[366] = 0X0ae1U;
MQKBELA.data[367] = 0X004aU;
MQKBELA.data[368] = 0X0b99U;
 /* line 129: */
MQKBELA.data[369] = 0X0bb1U;
MQKBELA.data[370] = 0X002bU;
MQKBELA.data[371] = 0X0b86U;
MQKBELA.data[372] = 0X0c01U;
MQKBELA.data[373] = 0X004aU;
 /* line 130: */
MQKBELA.data[374] = 0X0bb6U;
MQKBELA.data[375] = 0X0007U;
MQKBELA.data[376] = 0X00e4U;
MQKBELA.data[377] = 0X0054U;
MQKBELA.data[378] = 0X03faU;
 /* line 131: */
MQKBELA.data[379] = 0X0bdeU;
MQKBELA.data[380] = 0X0007U;
MQKBELA.data[381] = 0X0b80U;
MQKBELA.data[382] = 0X0b81U;
MQKBELA.data[383] = 0X03daU;
 /* line 132: */
MQKBELA.data[384] = 0X0c41U;
MQKBELA.data[385] = 0X0007U;
MQKBELA.data[386] = 0X00ecU;
MQKBELA.data[387] = 0X03faU;
MQKBELA.data[388] = 0X0c26U;
 /* line 133: */
MQKBELA.data[389] = 0X0007U;
MQKBELA.data[390] = 0X000fU;
MQKBELA.data[391] = 0X03aaU;
MQKBELA.data[392] = 0X0c69U;
MQKBELA.data[393] = 0X0007U;
 /* line 134: */
MQKBELA.data[394] = 0X00f4U;
MQKBELA.data[395] = 0X000fU;
MQKBELA.data[396] = 0X02aaU;
MQKBELA.data[397] = 0X0c91U;
MQKBELA.data[398] = 0X0007U;
 /* line 135: */
MQKBELA.data[399] = 0X00fcU;
MQKBELA.data[400] = 0X0b81U;
MQKBELA.data[401] = 0X0052U;
MQKBELA.data[402] = 0X0cf9U;
MQKBELA.data[403] = 0X0007U;
 /* line 136: */
MQKBELA.data[404] = 0X0104U;
MQKBELA.data[405] = 0X0054U;
MQKBELA.data[406] = 0X03faU;
MQKBELA.data[407] = 0X0cbeU;
MQKBELA.data[408] = 0X0007U;
 /* line 137: */
MQKBELA.data[409] = 0X004cU;
MQKBELA.data[410] = 0X0502U;
MQKBELA.data[411] = 0X0cdeU;
MQKBELA.data[412] = 0X0007U;
MQKBELA.data[413] = 0X000fU;
 /* line 138: */
MQKBELA.data[414] = 0X0042U;
MQKBELA.data[415] = 0X0d41U;
MQKBELA.data[416] = 0X0007U;
MQKBELA.data[417] = 0X010cU;
MQKBELA.data[418] = 0X0054U;
 /* line 139: */
MQKBELA.data[419] = 0X03faU;
MQKBELA.data[420] = 0X0d26U;
MQKBELA.data[421] = 0X0007U;
MQKBELA.data[422] = 0X000fU;
MQKBELA.data[423] = 0X003aU;
 /* line 140: */
MQKBELA.data[424] = 0X0d89U;
MQKBELA.data[425] = 0X0007U;
MQKBELA.data[426] = 0X0114U;
MQKBELA.data[427] = 0X0054U;
MQKBELA.data[428] = 0X03faU;
 /* line 141: */
MQKBELA.data[429] = 0X0d6eU;
MQKBELA.data[430] = 0X0007U;
MQKBELA.data[431] = 0X000fU;
MQKBELA.data[432] = 0X0032U;
MQKBELA.data[433] = 0X0dc1U;
 /* line 142: */
MQKBELA.data[434] = 0X0007U;
MQKBELA.data[435] = 0X011cU;
MQKBELA.data[436] = 0X0b80U;
MQKBELA.data[437] = 0X0b80U;
MQKBELA.data[438] = 0X0b81U;
 /* line 143: */
MQKBELA.data[439] = 0X002aU;
MQKBELA.data[440] = 0X0e09U;
MQKBELA.data[441] = 0X0007U;
MQKBELA.data[442] = 0X0124U;
MQKBELA.data[443] = 0X0054U;
 /* line 144: */
MQKBELA.data[444] = 0X03faU;
MQKBELA.data[445] = 0X0deeU;
MQKBELA.data[446] = 0X0007U;
MQKBELA.data[447] = 0X0b81U;
MQKBELA.data[448] = 0X0022U;
 /* line 145: */
MQKBELA.data[449] = 0X0e59U;
MQKBELA.data[450] = 0X0007U;
MQKBELA.data[451] = 0X012cU;
MQKBELA.data[452] = 0X0054U;
MQKBELA.data[453] = 0X03faU;
 /* line 146: */
MQKBELA.data[454] = 0X0e36U;
MQKBELA.data[455] = 0X0007U;
MQKBELA.data[456] = 0X0b80U;
MQKBELA.data[457] = 0X0b81U;
MQKBELA.data[458] = 0X001aU;
 /* line 147: */
MQKBELA.data[459] = 0X0ea1U;
MQKBELA.data[460] = 0X0007U;
MQKBELA.data[461] = 0X0134U;
MQKBELA.data[462] = 0X0054U;
MQKBELA.data[463] = 0X03faU;
 /* line 148: */
MQKBELA.data[464] = 0X0e86U;
MQKBELA.data[465] = 0X0007U;
MQKBELA.data[466] = 0X000fU;
MQKBELA.data[467] = 0X0012U;
MQKBELA.data[468] = 0X0c06U;
 /* line 149: */
MQKBELA.data[469] = 0X0007U;
MQKBELA.data[470] = 0X013cU;
MQKBELA.data[471] = 0X0054U;
MQKBELA.data[472] = 0X03faU;
MQKBELA.data[473] = 0X0eceU;
 /* line 150: */
MQKBELA.data[474] = 0X0007U;
MQKBELA.data[475] = 0X000fU;
MQKBELA.data[476] = 0X0023U;
MQKBELA.data[477] = 0X0f29U;
MQKBELA.data[478] = 0X0f50U;
 /* line 151: */
MQKBELA.data[479] = 0X004cU;
MQKBELA.data[480] = 0X0502U;
MQKBELA.data[481] = 0X0f0eU;
MQKBELA.data[482] = 0X0007U;
MQKBELA.data[483] = 0X0ee9U;
 /* line 152: */
MQKBELA.data[484] = 0X015aU;
MQKBELA.data[485] = 0X0eeeU;
MQKBELA.data[486] = 0X0007U;
MQKBELA.data[487] = 0X00bcU;
MQKBELA.data[488] = 0X000fU;
 /* line 153: */
MQKBELA.data[489] = 0X04aaU;
MQKBELA.data[490] = 0X0f79U;
MQKBELA.data[491] = 0X0007U;
MQKBELA.data[492] = 0X0144U;
MQKBELA.data[493] = 0X000fU;
 /* line 154: */
MQKBELA.data[494] = 0X045aU;
MQKBELA.data[495] = 0X0fa9U;
MQKBELA.data[496] = 0X0007U;
MQKBELA.data[497] = 0X014cU;
MQKBELA.data[498] = 0X0b80U;
 /* line 155: */
MQKBELA.data[499] = 0X0f51U;
MQKBELA.data[500] = 0X02b2U;
MQKBELA.data[501] = 0X0fd1U;
MQKBELA.data[502] = 0X0007U;
MQKBELA.data[503] = 0X0154U;
 /* line 156: */
MQKBELA.data[504] = 0X0f51U;
MQKBELA.data[505] = 0X0082U;
MQKBELA.data[506] = 0X1001U;
MQKBELA.data[507] = 0X0007U;
MQKBELA.data[508] = 0X015cU;
 /* line 157: */
MQKBELA.data[509] = 0X0f50U;
MQKBELA.data[510] = 0X0f51U;
MQKBELA.data[511] = 0X007aU;
MQKBELA.data[512] = 0X1049U;
MQKBELA.data[513] = 0X0007U;
 /* line 158: */
MQKBELA.data[514] = 0X0164U;
MQKBELA.data[515] = 0X0054U;
MQKBELA.data[516] = 0X03faU;
MQKBELA.data[517] = 0X102eU;
MQKBELA.data[518] = 0X0007U;
 /* line 159: */
MQKBELA.data[519] = 0X000fU;
MQKBELA.data[520] = 0X0072U;
MQKBELA.data[521] = 0X1071U;
MQKBELA.data[522] = 0X0007U;
MQKBELA.data[523] = 0X016cU;
 /* line 160: */
MQKBELA.data[524] = 0X1111U;
MQKBELA.data[525] = 0X006aU;
MQKBELA.data[526] = 0X10a1U;
MQKBELA.data[527] = 0X0007U;
MQKBELA.data[528] = 0X0174U;
 /* line 161: */
MQKBELA.data[529] = 0X0b80U;
MQKBELA.data[530] = 0X0f51U;
MQKBELA.data[531] = 0X0062U;
MQKBELA.data[532] = 0X10e9U;
MQKBELA.data[533] = 0X0007U;
 /* line 162: */
MQKBELA.data[534] = 0X017cU;
MQKBELA.data[535] = 0X0054U;
MQKBELA.data[536] = 0X03faU;
MQKBELA.data[537] = 0X10ceU;
MQKBELA.data[538] = 0X0007U;
 /* line 163: */
MQKBELA.data[539] = 0X000fU;
MQKBELA.data[540] = 0X005aU;
MQKBELA.data[541] = 0X0f56U;
MQKBELA.data[542] = 0X0007U;
MQKBELA.data[543] = 0X0184U;
 /* line 164: */
MQKBELA.data[544] = 0X000fU;
MQKBELA.data[545] = 0X0023U;
MQKBELA.data[546] = 0X1131U;
MQKBELA.data[547] = 0X0f50U;
MQKBELA.data[548] = 0X1111U;
 /* line 165: */
MQKBELA.data[549] = 0X015aU;
MQKBELA.data[550] = 0X1116U;
MQKBELA.data[551] = 0X0007U;
MQKBELA.data[552] = 0X00bcU;
MQKBELA.data[553] = 0X000fU;
 /* line 166: */
MQKBELA.data[554] = 0X0502U;
MQKBELA.data[555] = 0X115eU;
MQKBELA.data[556] = 0X004cU;
MQKBELA.data[557] = 0X0502U;
MQKBELA.data[558] = 0X1176U;
 /* line 167: */
MQKBELA.data[559] = 0X0007U;
MQKBELA.data[560] = 0X1191U;
MQKBELA.data[561] = 0X03faU;
MQKBELA.data[562] = 0X000fU;
MQKBELA.data[563] = 0X0054U;
 /* line 168: */
MQKBELA.data[564] = 0X03faU;
MQKBELA.data[565] = 0X11aeU;
MQKBELA.data[566] = 0X0007U;
MQKBELA.data[567] = 0X0054U;
MQKBELA.data[568] = 0X03faU;
 /* line 169: */
MQKBELA.data[569] = 0X11ceU;
MQKBELA.data[570] = 0X0007U;
MQKBELA.data[571] = 0X1159U;
MQKBELA.data[572] = 0X0482U;
MQKBELA.data[573] = 0X1229U;
 /* line 170: */
MQKBELA.data[574] = 0X0007U;
MQKBELA.data[575] = 0X018cU;
MQKBELA.data[576] = 0X03faU;
MQKBELA.data[577] = 0X120eU;
MQKBELA.data[578] = 0X0007U;
 /* line 171: */
MQKBELA.data[579] = 0X000fU;
MQKBELA.data[580] = 0X047aU;
MQKBELA.data[581] = 0X1251U;
MQKBELA.data[582] = 0X0007U;
MQKBELA.data[583] = 0X0194U;
 /* line 172: */
MQKBELA.data[584] = 0X000fU;
MQKBELA.data[585] = 0X0462U;
MQKBELA.data[586] = 0X1299U;
MQKBELA.data[587] = 0X0007U;
MQKBELA.data[588] = 0X019cU;
 /* line 173: */
MQKBELA.data[589] = 0X0054U;
MQKBELA.data[590] = 0X03faU;
MQKBELA.data[591] = 0X127eU;
MQKBELA.data[592] = 0X0007U;
MQKBELA.data[593] = 0X000fU;
 /* line 174: */
MQKBELA.data[594] = 0X043aU;
MQKBELA.data[595] = 0X1319U;
MQKBELA.data[596] = 0X0007U;
MQKBELA.data[597] = 0X01a4U;
MQKBELA.data[598] = 0X03faU;
 /* line 175: */
MQKBELA.data[599] = 0X12beU;
MQKBELA.data[600] = 0X0007U;
MQKBELA.data[601] = 0X004cU;
MQKBELA.data[602] = 0X0502U;
MQKBELA.data[603] = 0X12deU;
 /* line 176: */
MQKBELA.data[604] = 0X0007U;
MQKBELA.data[605] = 0X004cU;
MQKBELA.data[606] = 0X0502U;
MQKBELA.data[607] = 0X12feU;
MQKBELA.data[608] = 0X0007U;
 /* line 177: */
MQKBELA.data[609] = 0X000fU;
MQKBELA.data[610] = 0X0432U;
MQKBELA.data[611] = 0X1379U;
MQKBELA.data[612] = 0X0007U;
MQKBELA.data[613] = 0X01acU;
 /* line 178: */
MQKBELA.data[614] = 0X03faU;
MQKBELA.data[615] = 0X133eU;
MQKBELA.data[616] = 0X0007U;
MQKBELA.data[617] = 0X0054U;
MQKBELA.data[618] = 0X03faU;
 /* line 179: */
MQKBELA.data[619] = 0X135eU;
MQKBELA.data[620] = 0X0007U;
MQKBELA.data[621] = 0X0829U;
MQKBELA.data[622] = 0X042aU;
MQKBELA.data[623] = 0X13d9U;
 /* line 180: */
MQKBELA.data[624] = 0X0007U;
MQKBELA.data[625] = 0X01b4U;
MQKBELA.data[626] = 0X03faU;
MQKBELA.data[627] = 0X139eU;
MQKBELA.data[628] = 0X0007U;
 /* line 181: */
MQKBELA.data[629] = 0X004cU;
MQKBELA.data[630] = 0X0502U;
MQKBELA.data[631] = 0X13beU;
MQKBELA.data[632] = 0X0007U;
MQKBELA.data[633] = 0X000fU;
 /* line 182: */
MQKBELA.data[634] = 0X0422U;
MQKBELA.data[635] = 0X1409U;
MQKBELA.data[636] = 0X0007U;
MQKBELA.data[637] = 0X01bcU;
MQKBELA.data[638] = 0X0b80U;
 /* line 183: */
MQKBELA.data[639] = 0X11e9U;
MQKBELA.data[640] = 0X039aU;
MQKBELA.data[641] = 0X1431U;
MQKBELA.data[642] = 0X0007U;
MQKBELA.data[643] = 0X01c4U;
 /* line 184: */
MQKBELA.data[644] = 0X0f51U;
MQKBELA.data[645] = 0X0392U;
MQKBELA.data[646] = 0X1459U;
MQKBELA.data[647] = 0X0007U;
MQKBELA.data[648] = 0X01ccU;
 /* line 185: */
MQKBELA.data[649] = 0X0f51U;
MQKBELA.data[650] = 0X034aU;
MQKBELA.data[651] = 0X1491U;
MQKBELA.data[652] = 0X0007U;
MQKBELA.data[653] = 0X01d4U;
 /* line 186: */
MQKBELA.data[654] = 0X0b80U;
MQKBELA.data[655] = 0X11e8U;
MQKBELA.data[656] = 0X11e9U;
MQKBELA.data[657] = 0X0342U;
MQKBELA.data[658] = 0X1509U;
 /* line 187: */
MQKBELA.data[659] = 0X0007U;
MQKBELA.data[660] = 0X01dcU;
MQKBELA.data[661] = 0X03faU;
MQKBELA.data[662] = 0X14b6U;
MQKBELA.data[663] = 0X0007U;
 /* line 188: */
MQKBELA.data[664] = 0X004cU;
MQKBELA.data[665] = 0X0502U;
MQKBELA.data[666] = 0X14d6U;
MQKBELA.data[667] = 0X0007U;
MQKBELA.data[668] = 0X06b0U;
 /* line 189: */
MQKBELA.data[669] = 0X0b80U;
MQKBELA.data[670] = 0X0b80U;
MQKBELA.data[671] = 0X11e9U;
MQKBELA.data[672] = 0X033aU;
MQKBELA.data[673] = 0X1541U;
 /* line 190: */
MQKBELA.data[674] = 0X0007U;
MQKBELA.data[675] = 0X01e4U;
MQKBELA.data[676] = 0X11e8U;
MQKBELA.data[677] = 0X0b80U;
MQKBELA.data[678] = 0X0b81U;
 /* line 191: */
MQKBELA.data[679] = 0X0332U;
MQKBELA.data[680] = 0X1571U;
MQKBELA.data[681] = 0X0007U;
MQKBELA.data[682] = 0X01ecU;
MQKBELA.data[683] = 0X11e8U;
 /* line 192: */
MQKBELA.data[684] = 0X0b81U;
MQKBELA.data[685] = 0X02baU;
MQKBELA.data[686] = 0X1599U;
MQKBELA.data[687] = 0X0007U;
MQKBELA.data[688] = 0X01f4U;
 /* line 193: */
MQKBELA.data[689] = 0X11e9U;
MQKBELA.data[690] = 0X026aU;
MQKBELA.data[691] = 0X15c9U;
MQKBELA.data[692] = 0X0007U;
MQKBELA.data[693] = 0X01fcU;
 /* line 194: */
MQKBELA.data[694] = 0X11e8U;
MQKBELA.data[695] = 0X06b1U;
MQKBELA.data[696] = 0X0262U;
MQKBELA.data[697] = 0X1631U;
MQKBELA.data[698] = 0X0007U;
 /* line 195: */
MQKBELA.data[699] = 0X0204U;
MQKBELA.data[700] = 0X03faU;
MQKBELA.data[701] = 0X15eeU;
MQKBELA.data[702] = 0X0007U;
MQKBELA.data[703] = 0X0054U;
 /* line 196: */
MQKBELA.data[704] = 0X03faU;
MQKBELA.data[705] = 0X160eU;
MQKBELA.data[706] = 0X0007U;
MQKBELA.data[707] = 0X11e8U;
MQKBELA.data[708] = 0X11e9U;
 /* line 197: */
MQKBELA.data[709] = 0X00c2U;
MQKBELA.data[710] = 0X1659U;
MQKBELA.data[711] = 0X0007U;
MQKBELA.data[712] = 0X020cU;
MQKBELA.data[713] = 0X1841U;
 /* line 198: */
MQKBELA.data[714] = 0X00baU;
MQKBELA.data[715] = 0X1681U;
MQKBELA.data[716] = 0X0007U;
MQKBELA.data[717] = 0X0214U;
MQKBELA.data[718] = 0X000fU;
 /* line 199: */
MQKBELA.data[719] = 0X00b2U;
MQKBELA.data[720] = 0X16b1U;
MQKBELA.data[721] = 0X0007U;
MQKBELA.data[722] = 0X021cU;
MQKBELA.data[723] = 0X0b80U;
 /* line 200: */
MQKBELA.data[724] = 0X11e9U;
MQKBELA.data[725] = 0X00aaU;
MQKBELA.data[726] = 0X16d9U;
MQKBELA.data[727] = 0X0007U;
MQKBELA.data[728] = 0X0224U;
 /* line 201: */
MQKBELA.data[729] = 0X1889U;
MQKBELA.data[730] = 0X00a2U;
MQKBELA.data[731] = 0X1741U;
MQKBELA.data[732] = 0X0007U;
MQKBELA.data[733] = 0X022cU;
 /* line 202: */
MQKBELA.data[734] = 0X0054U;
MQKBELA.data[735] = 0X03faU;
MQKBELA.data[736] = 0X1706U;
MQKBELA.data[737] = 0X0007U;
MQKBELA.data[738] = 0X0054U;
 /* line 203: */
MQKBELA.data[739] = 0X03faU;
MQKBELA.data[740] = 0X1726U;
MQKBELA.data[741] = 0X0007U;
MQKBELA.data[742] = 0X11e9U;
MQKBELA.data[743] = 0X009aU;
 /* line 204: */
MQKBELA.data[744] = 0X1791U;
MQKBELA.data[745] = 0X0007U;
MQKBELA.data[746] = 0X0234U;
MQKBELA.data[747] = 0X0054U;
MQKBELA.data[748] = 0X03faU;
 /* line 205: */
MQKBELA.data[749] = 0X176eU;
MQKBELA.data[750] = 0X0007U;
MQKBELA.data[751] = 0X0b80U;
MQKBELA.data[752] = 0X0b81U;
MQKBELA.data[753] = 0X0092U;
 /* line 206: */
MQKBELA.data[754] = 0X17d9U;
MQKBELA.data[755] = 0X0007U;
MQKBELA.data[756] = 0X023cU;
MQKBELA.data[757] = 0X0054U;
MQKBELA.data[758] = 0X03faU;
 /* line 207: */
MQKBELA.data[759] = 0X17beU;
MQKBELA.data[760] = 0X0007U;
MQKBELA.data[761] = 0X0b81U;
MQKBELA.data[762] = 0X008aU;
MQKBELA.data[763] = 0X11eeU;
 /* line 208: */
MQKBELA.data[764] = 0X0007U;
MQKBELA.data[765] = 0X0244U;
MQKBELA.data[766] = 0X0054U;
MQKBELA.data[767] = 0X03faU;
MQKBELA.data[768] = 0X1806U;
 /* line 209: */
MQKBELA.data[769] = 0X0007U;
MQKBELA.data[770] = 0X0054U;
MQKBELA.data[771] = 0X03faU;
MQKBELA.data[772] = 0X1826U;
MQKBELA.data[773] = 0X0007U;
 /* line 210: */
MQKBELA.data[774] = 0X000fU;
MQKBELA.data[775] = 0X0033U;
MQKBELA.data[776] = 0X1861U;
MQKBELA.data[777] = 0X11e8U;
MQKBELA.data[778] = 0X1841U;
 /* line 211: */
MQKBELA.data[779] = 0X015aU;
MQKBELA.data[780] = 0X1846U;
MQKBELA.data[781] = 0X0007U;
MQKBELA.data[782] = 0X00bcU;
MQKBELA.data[783] = 0X000fU;
 /* line 212: */
MQKBELA.data[784] = 0X0033U;
MQKBELA.data[785] = 0X18a9U;
MQKBELA.data[786] = 0X11e8U;
MQKBELA.data[787] = 0X1889U;
MQKBELA.data[788] = 0X015aU;
 /* line 213: */
MQKBELA.data[789] = 0X188eU;
MQKBELA.data[790] = 0X0007U;
MQKBELA.data[791] = 0X00bcU;
MQKBELA.data[792] = 0X000fU;
MQKBELA.data[793] = 0X03faU;
 /* line 214: */
MQKBELA.data[794] = 0X000fU;
MQKBELA.data[795] = 0X0054U;
MQKBELA.data[796] = 0X03faU;
MQKBELA.data[797] = 0X18eeU;
MQKBELA.data[798] = 0X0007U;
 /* line 215: */
MQKBELA.data[799] = 0X18d1U;
MQKBELA.data[800] = 0X0162U;
MQKBELA.data[801] = 0X1969U;
MQKBELA.data[802] = 0X19a0U;
MQKBELA.data[803] = 0X0054U;
 /* line 216: */
MQKBELA.data[804] = 0X03faU;
MQKBELA.data[805] = 0X192eU;
MQKBELA.data[806] = 0X0007U;
MQKBELA.data[807] = 0X0054U;
MQKBELA.data[808] = 0X03faU;
 /* line 217: */
MQKBELA.data[809] = 0X194eU;
MQKBELA.data[810] = 0X0007U;
MQKBELA.data[811] = 0X1909U;
MQKBELA.data[812] = 0X000aU;
MQKBELA.data[813] = 0X190eU;
 /* line 218: */
MQKBELA.data[814] = 0X006cU;
MQKBELA.data[815] = 0X000aU;
MQKBELA.data[816] = 0X1986U;
MQKBELA.data[817] = 0X0007U;
MQKBELA.data[818] = 0X000fU;
 /* line 219: */
MQKBELA.data[819] = 0X0162U;
MQKBELA.data[820] = 0X19a6U;
MQKBELA.data[821] = 0X0007U;
MQKBELA.data[822] = 0X024cU;
MQKBELA.data[823] = 0X0054U;
 /* line 220: */
MQKBELA.data[824] = 0X03faU;
MQKBELA.data[825] = 0X19ceU;
MQKBELA.data[826] = 0X0007U;
MQKBELA.data[827] = 0X1a18U;
MQKBELA.data[828] = 0X1eb8U;
 /* line 221: */
MQKBELA.data[829] = 0X0254U;
MQKBELA.data[830] = 0X016aU;
MQKBELA.data[831] = 0X19feU;
MQKBELA.data[832] = 0X0007U;
MQKBELA.data[833] = 0X000fU;
 /* line 222: */
MQKBELA.data[834] = 0X0502U;
MQKBELA.data[835] = 0X1a1eU;
MQKBELA.data[836] = 0X004cU;
MQKBELA.data[837] = 0X0502U;
MQKBELA.data[838] = 0X1a36U;
 /* line 223: */
MQKBELA.data[839] = 0X0007U;
MQKBELA.data[840] = 0X0054U;
MQKBELA.data[841] = 0X03faU;
MQKBELA.data[842] = 0X1a56U;
MQKBELA.data[843] = 0X0007U;
 /* line 224: */
MQKBELA.data[844] = 0X0054U;
MQKBELA.data[845] = 0X03faU;
MQKBELA.data[846] = 0X1a76U;
MQKBELA.data[847] = 0X0007U;
MQKBELA.data[848] = 0X0054U;
 /* line 225: */
MQKBELA.data[849] = 0X03faU;
MQKBELA.data[850] = 0X1a96U;
MQKBELA.data[851] = 0X0007U;
MQKBELA.data[852] = 0X1ac0U;
MQKBELA.data[853] = 0X06b0U;
 /* line 226: */
MQKBELA.data[854] = 0X1cd1U;
MQKBELA.data[855] = 0X03faU;
MQKBELA.data[856] = 0X000fU;
MQKBELA.data[857] = 0X0054U;
MQKBELA.data[858] = 0X03faU;
 /* line 227: */
MQKBELA.data[859] = 0X1adeU;
MQKBELA.data[860] = 0X0007U;
MQKBELA.data[861] = 0X1b00U;
MQKBELA.data[862] = 0X1ac1U;
MQKBELA.data[863] = 0X0162U;
 /* line 228: */
MQKBELA.data[864] = 0X1b19U;
MQKBELA.data[865] = 0X19a1U;
MQKBELA.data[866] = 0X04c2U;
MQKBELA.data[867] = 0X1b81U;
MQKBELA.data[868] = 0X0007U;
 /* line 229: */
MQKBELA.data[869] = 0X025cU;
MQKBELA.data[870] = 0X004cU;
MQKBELA.data[871] = 0X0502U;
MQKBELA.data[872] = 0X1b46U;
MQKBELA.data[873] = 0X0007U;
 /* line 230: */
MQKBELA.data[874] = 0X0054U;
MQKBELA.data[875] = 0X03faU;
MQKBELA.data[876] = 0X1b66U;
MQKBELA.data[877] = 0X0007U;
MQKBELA.data[878] = 0X06b1U;
 /* line 231: */
MQKBELA.data[879] = 0X046aU;
MQKBELA.data[880] = 0X1bf1U;
MQKBELA.data[881] = 0X0007U;
MQKBELA.data[882] = 0X0264U;
MQKBELA.data[883] = 0X004cU;
 /* line 232: */
MQKBELA.data[884] = 0X0502U;
MQKBELA.data[885] = 0X1baeU;
MQKBELA.data[886] = 0X0007U;
MQKBELA.data[887] = 0X0054U;
MQKBELA.data[888] = 0X03faU;
 /* line 233: */
MQKBELA.data[889] = 0X1bceU;
MQKBELA.data[890] = 0X0007U;
MQKBELA.data[891] = 0X06b0U;
MQKBELA.data[892] = 0X11e9U;
MQKBELA.data[893] = 0X03d2U;
 /* line 234: */
MQKBELA.data[894] = 0X1c61U;
MQKBELA.data[895] = 0X0007U;
MQKBELA.data[896] = 0X026cU;
MQKBELA.data[897] = 0X004cU;
MQKBELA.data[898] = 0X0502U;
 /* line 235: */
MQKBELA.data[899] = 0X1c1eU;
MQKBELA.data[900] = 0X0007U;
MQKBELA.data[901] = 0X0054U;
MQKBELA.data[902] = 0X03faU;
MQKBELA.data[903] = 0X1c3eU;
 /* line 236: */
MQKBELA.data[904] = 0X0007U;
MQKBELA.data[905] = 0X06b0U;
MQKBELA.data[906] = 0X0b81U;
MQKBELA.data[907] = 0X018aU;
MQKBELA.data[908] = 0X1b06U;
 /* line 237: */
MQKBELA.data[909] = 0X0007U;
MQKBELA.data[910] = 0X0274U;
MQKBELA.data[911] = 0X004cU;
MQKBELA.data[912] = 0X0502U;
MQKBELA.data[913] = 0X1c8eU;
 /* line 238: */
MQKBELA.data[914] = 0X0007U;
MQKBELA.data[915] = 0X0054U;
MQKBELA.data[916] = 0X03faU;
MQKBELA.data[917] = 0X1caeU;
MQKBELA.data[918] = 0X0007U;
 /* line 239: */
MQKBELA.data[919] = 0X06b0U;
MQKBELA.data[920] = 0X09a9U;
MQKBELA.data[921] = 0X03baU;
MQKBELA.data[922] = 0X1d29U;
MQKBELA.data[923] = 0X0007U;
 /* line 240: */
MQKBELA.data[924] = 0X027cU;
MQKBELA.data[925] = 0X1d58U;
MQKBELA.data[926] = 0X1d58U;
MQKBELA.data[927] = 0X0054U;
MQKBELA.data[928] = 0X03faU;
 /* line 241: */
MQKBELA.data[929] = 0X1d0eU;
MQKBELA.data[930] = 0X0007U;
MQKBELA.data[931] = 0X000fU;
MQKBELA.data[932] = 0X03b2U;
MQKBELA.data[933] = 0X1cd6U;
 /* line 242: */
MQKBELA.data[934] = 0X0007U;
MQKBELA.data[935] = 0X0284U;
MQKBELA.data[936] = 0X1dd0U;
MQKBELA.data[937] = 0X1dd1U;
MQKBELA.data[938] = 0X000aU;
 /* line 243: */
MQKBELA.data[939] = 0X1d91U;
MQKBELA.data[940] = 0X006cU;
MQKBELA.data[941] = 0X000aU;
MQKBELA.data[942] = 0X1d76U;
MQKBELA.data[943] = 0X0007U;
 /* line 244: */
MQKBELA.data[944] = 0X000fU;
MQKBELA.data[945] = 0X03faU;
MQKBELA.data[946] = 0X1d5eU;
MQKBELA.data[947] = 0X0054U;
MQKBELA.data[948] = 0X03faU;
 /* line 245: */
MQKBELA.data[949] = 0X1daeU;
MQKBELA.data[950] = 0X0007U;
MQKBELA.data[951] = 0X06b0U;
MQKBELA.data[952] = 0X1d59U;
MQKBELA.data[953] = 0X0023U;
 /* line 246: */
MQKBELA.data[954] = 0X1e19U;
MQKBELA.data[955] = 0X0f50U;
MQKBELA.data[956] = 0X1e40U;
MQKBELA.data[957] = 0X006cU;
MQKBELA.data[958] = 0X000aU;
 /* line 247: */
MQKBELA.data[959] = 0X1dfeU;
MQKBELA.data[960] = 0X0007U;
MQKBELA.data[961] = 0X1dd1U;
MQKBELA.data[962] = 0X015aU;
MQKBELA.data[963] = 0X1dd6U;
 /* line 248: */
MQKBELA.data[964] = 0X0007U;
MQKBELA.data[965] = 0X00bcU;
MQKBELA.data[966] = 0X000fU;
MQKBELA.data[967] = 0X03faU;
MQKBELA.data[968] = 0X000fU;
 /* line 249: */
MQKBELA.data[969] = 0X0054U;
MQKBELA.data[970] = 0X03faU;
MQKBELA.data[971] = 0X1e5eU;
MQKBELA.data[972] = 0X0007U;
MQKBELA.data[973] = 0X004cU;
 /* line 250: */
MQKBELA.data[974] = 0X0502U;
MQKBELA.data[975] = 0X1e7eU;
MQKBELA.data[976] = 0X0007U;
MQKBELA.data[977] = 0X1ea0U;
MQKBELA.data[978] = 0X1e41U;
 /* line 251: */
MQKBELA.data[979] = 0X0013U;
MQKBELA.data[980] = 0X000fU;
MQKBELA.data[981] = 0X06b1U;
MQKBELA.data[982] = 0X003bU;
MQKBELA.data[983] = 0X000fU;
 /* line 252: */
MQKBELA.data[984] = 0X1ed8U;
MQKBELA.data[985] = 0X18d1U;
MQKBELA.data[986] = 0X0043U;
MQKBELA.data[987] = 0X1ef1U;
MQKBELA.data[988] = 0X2209U;
 /* line 253: */
MQKBELA.data[989] = 0X004bU;
MQKBELA.data[990] = 0X1f09U;
MQKBELA.data[991] = 0X0b81U;
MQKBELA.data[992] = 0X049aU;
MQKBELA.data[993] = 0X1f31U;
 /* line 254: */
MQKBELA.data[994] = 0X0007U;
MQKBELA.data[995] = 0X028cU;
MQKBELA.data[996] = 0X38f1U;
MQKBELA.data[997] = 0X0492U;
MQKBELA.data[998] = 0X1f59U;
 /* line 255: */
MQKBELA.data[999] = 0X0007U;
MQKBELA.data[1000] = 0X0294U;
MQKBELA.data[1001] = 0X38f1U;
MQKBELA.data[1002] = 0X03a2U;
MQKBELA.data[1003] = 0X1f81U;
 /* line 256: */
MQKBELA.data[1004] = 0X0007U;
MQKBELA.data[1005] = 0X029cU;
MQKBELA.data[1006] = 0X000fU;
MQKBELA.data[1007] = 0X032aU;
MQKBELA.data[1008] = 0X1ff1U;
 /* line 257: */
MQKBELA.data[1009] = 0X0007U;
MQKBELA.data[1010] = 0X02a4U;
MQKBELA.data[1011] = 0X03faU;
MQKBELA.data[1012] = 0X1fa6U;
MQKBELA.data[1013] = 0X0007U;
 /* line 258: */
MQKBELA.data[1014] = 0X0054U;
MQKBELA.data[1015] = 0X03faU;
MQKBELA.data[1016] = 0X1fc6U;
MQKBELA.data[1017] = 0X0007U;
MQKBELA.data[1018] = 0X0b80U;
 /* line 259: */
MQKBELA.data[1019] = 0X11e8U;
MQKBELA.data[1020] = 0X0b81U;
MQKBELA.data[1021] = 0X02caU;
MQKBELA.data[1022] = 0X2059U;
MQKBELA.data[1023] = 0X0007U;
 /* line 260: */
MQKBELA.data[1024] = 0X02acU;
MQKBELA.data[1025] = 0X004cU;
MQKBELA.data[1026] = 0X0502U;
MQKBELA.data[1027] = 0X201eU;
MQKBELA.data[1028] = 0X0007U;
 /* line 261: */
MQKBELA.data[1029] = 0X0054U;
MQKBELA.data[1030] = 0X03faU;
MQKBELA.data[1031] = 0X203eU;
MQKBELA.data[1032] = 0X0007U;
MQKBELA.data[1033] = 0X30d9U;
 /* line 262: */
MQKBELA.data[1034] = 0X02c2U;
MQKBELA.data[1035] = 0X20c1U;
MQKBELA.data[1036] = 0X0007U;
MQKBELA.data[1037] = 0X02b4U;
MQKBELA.data[1038] = 0X004cU;
 /* line 263: */
MQKBELA.data[1039] = 0X0502U;
MQKBELA.data[1040] = 0X2086U;
MQKBELA.data[1041] = 0X0007U;
MQKBELA.data[1042] = 0X0054U;
MQKBELA.data[1043] = 0X03faU;
 /* line 264: */
MQKBELA.data[1044] = 0X20a6U;
MQKBELA.data[1045] = 0X0007U;
MQKBELA.data[1046] = 0X30d9U;
MQKBELA.data[1047] = 0X025aU;
MQKBELA.data[1048] = 0X2109U;
 /* line 265: */
MQKBELA.data[1049] = 0X0007U;
MQKBELA.data[1050] = 0X02bcU;
MQKBELA.data[1051] = 0X0054U;
MQKBELA.data[1052] = 0X03faU;
MQKBELA.data[1053] = 0X20eeU;
 /* line 266: */
MQKBELA.data[1054] = 0X0007U;
MQKBELA.data[1055] = 0X000fU;
MQKBELA.data[1056] = 0X01faU;
MQKBELA.data[1057] = 0X2149U;
MQKBELA.data[1058] = 0X0007U;
 /* line 267: */
MQKBELA.data[1059] = 0X02c4U;
MQKBELA.data[1060] = 0X03faU;
MQKBELA.data[1061] = 0X212eU;
MQKBELA.data[1062] = 0X0007U;
MQKBELA.data[1063] = 0X11e9U;
 /* line 268: */
MQKBELA.data[1064] = 0X01b2U;
MQKBELA.data[1065] = 0X21c1U;
MQKBELA.data[1066] = 0X0007U;
MQKBELA.data[1067] = 0X02ccU;
MQKBELA.data[1068] = 0X03faU;
 /* line 269: */
MQKBELA.data[1069] = 0X216eU;
MQKBELA.data[1070] = 0X0007U;
MQKBELA.data[1071] = 0X0054U;
MQKBELA.data[1072] = 0X03faU;
MQKBELA.data[1073] = 0X218eU;
 /* line 270: */
MQKBELA.data[1074] = 0X0007U;
MQKBELA.data[1075] = 0X11e8U;
MQKBELA.data[1076] = 0X0b80U;
MQKBELA.data[1077] = 0X11e8U;
MQKBELA.data[1078] = 0X0b81U;
 /* line 271: */
MQKBELA.data[1079] = 0X01aaU;
MQKBELA.data[1080] = 0X1edeU;
MQKBELA.data[1081] = 0X0007U;
MQKBELA.data[1082] = 0X02d4U;
MQKBELA.data[1083] = 0X03faU;
 /* line 272: */
MQKBELA.data[1084] = 0X21e6U;
MQKBELA.data[1085] = 0X0007U;
MQKBELA.data[1086] = 0X0b80U;
MQKBELA.data[1087] = 0X11e9U;
MQKBELA.data[1088] = 0X0043U;
 /* line 273: */
MQKBELA.data[1089] = 0X220eU;
MQKBELA.data[1090] = 0X2230U;
MQKBELA.data[1091] = 0X2ad8U;
MQKBELA.data[1092] = 0X38d9U;
MQKBELA.data[1093] = 0X0013U;
 /* line 274: */
MQKBELA.data[1094] = 0X2249U;
MQKBELA.data[1095] = 0X06b1U;
MQKBELA.data[1096] = 0X04baU;
MQKBELA.data[1097] = 0X2271U;
MQKBELA.data[1098] = 0X0007U;
 /* line 275: */
MQKBELA.data[1099] = 0X02dcU;
MQKBELA.data[1100] = 0X000fU;
MQKBELA.data[1101] = 0X04b2U;
MQKBELA.data[1102] = 0X2299U;
MQKBELA.data[1103] = 0X0007U;
 /* line 276: */
MQKBELA.data[1104] = 0X02e4U;
MQKBELA.data[1105] = 0X000fU;
MQKBELA.data[1106] = 0X048aU;
MQKBELA.data[1107] = 0X22e1U;
MQKBELA.data[1108] = 0X0007U;
 /* line 277: */
MQKBELA.data[1109] = 0X02ecU;
MQKBELA.data[1110] = 0X0054U;
MQKBELA.data[1111] = 0X03faU;
MQKBELA.data[1112] = 0X22c6U;
MQKBELA.data[1113] = 0X0007U;
 /* line 278: */
MQKBELA.data[1114] = 0X000fU;
MQKBELA.data[1115] = 0X0472U;
MQKBELA.data[1116] = 0X2309U;
MQKBELA.data[1117] = 0X0007U;
MQKBELA.data[1118] = 0X02f4U;
 /* line 279: */
MQKBELA.data[1119] = 0X000fU;
MQKBELA.data[1120] = 0X0452U;
MQKBELA.data[1121] = 0X2369U;
MQKBELA.data[1122] = 0X0007U;
MQKBELA.data[1123] = 0X02fcU;
 /* line 280: */
MQKBELA.data[1124] = 0X03faU;
MQKBELA.data[1125] = 0X232eU;
MQKBELA.data[1126] = 0X0007U;
MQKBELA.data[1127] = 0X0054U;
MQKBELA.data[1128] = 0X03faU;
 /* line 281: */
MQKBELA.data[1129] = 0X234eU;
MQKBELA.data[1130] = 0X0007U;
MQKBELA.data[1131] = 0X0829U;
MQKBELA.data[1132] = 0X044aU;
MQKBELA.data[1133] = 0X23c9U;
 /* line 282: */
MQKBELA.data[1134] = 0X0007U;
MQKBELA.data[1135] = 0X0304U;
MQKBELA.data[1136] = 0X03faU;
MQKBELA.data[1137] = 0X238eU;
MQKBELA.data[1138] = 0X0007U;
 /* line 283: */
MQKBELA.data[1139] = 0X004cU;
MQKBELA.data[1140] = 0X0502U;
MQKBELA.data[1141] = 0X23aeU;
MQKBELA.data[1142] = 0X0007U;
MQKBELA.data[1143] = 0X000fU;
 /* line 284: */
MQKBELA.data[1144] = 0X0442U;
MQKBELA.data[1145] = 0X23f1U;
MQKBELA.data[1146] = 0X0007U;
MQKBELA.data[1147] = 0X030cU;
MQKBELA.data[1148] = 0X0b81U;
 /* line 285: */
MQKBELA.data[1149] = 0X02a2U;
MQKBELA.data[1150] = 0X2419U;
MQKBELA.data[1151] = 0X0007U;
MQKBELA.data[1152] = 0X0314U;
MQKBELA.data[1153] = 0X000fU;
 /* line 286: */
MQKBELA.data[1154] = 0X029aU;
MQKBELA.data[1155] = 0X2469U;
MQKBELA.data[1156] = 0X0007U;
MQKBELA.data[1157] = 0X031cU;
MQKBELA.data[1158] = 0X2ab8U;
 /* line 287: */
MQKBELA.data[1159] = 0X015aU;
MQKBELA.data[1160] = 0X2446U;
MQKBELA.data[1161] = 0X0007U;
MQKBELA.data[1162] = 0X0324U;
MQKBELA.data[1163] = 0X000fU;
 /* line 288: */
MQKBELA.data[1164] = 0X0292U;
MQKBELA.data[1165] = 0X24b9U;
MQKBELA.data[1166] = 0X0007U;
MQKBELA.data[1167] = 0X032cU;
MQKBELA.data[1168] = 0X2b30U;
 /* line 289: */
MQKBELA.data[1169] = 0X02d2U;
MQKBELA.data[1170] = 0X2496U;
MQKBELA.data[1171] = 0X0007U;
MQKBELA.data[1172] = 0X0334U;
MQKBELA.data[1173] = 0X000fU;
 /* line 290: */
MQKBELA.data[1174] = 0X028aU;
MQKBELA.data[1175] = 0X24e1U;
MQKBELA.data[1176] = 0X0007U;
MQKBELA.data[1177] = 0X033cU;
MQKBELA.data[1178] = 0X31e1U;
 /* line 291: */
MQKBELA.data[1179] = 0X0152U;
MQKBELA.data[1180] = 0X2529U;
MQKBELA.data[1181] = 0X0007U;
MQKBELA.data[1182] = 0X0344U;
MQKBELA.data[1183] = 0X0054U;
 /* line 292: */
MQKBELA.data[1184] = 0X03faU;
MQKBELA.data[1185] = 0X250eU;
MQKBELA.data[1186] = 0X0007U;
MQKBELA.data[1187] = 0X000fU;
MQKBELA.data[1188] = 0X014aU;
 /* line 293: */
MQKBELA.data[1189] = 0X25d1U;
MQKBELA.data[1190] = 0X0007U;
MQKBELA.data[1191] = 0X034cU;
MQKBELA.data[1192] = 0X0054U;
MQKBELA.data[1193] = 0X03faU;
 /* line 294: */
MQKBELA.data[1194] = 0X2556U;
MQKBELA.data[1195] = 0X0007U;
MQKBELA.data[1196] = 0X004cU;
MQKBELA.data[1197] = 0X0502U;
MQKBELA.data[1198] = 0X2576U;
 /* line 295: */
MQKBELA.data[1199] = 0X0007U;
MQKBELA.data[1200] = 0X06b0U;
MQKBELA.data[1201] = 0X0b80U;
MQKBELA.data[1202] = 0X0b80U;
MQKBELA.data[1203] = 0X2ab8U;
 /* line 296: */
MQKBELA.data[1204] = 0X020aU;
MQKBELA.data[1205] = 0X25aeU;
MQKBELA.data[1206] = 0X0007U;
MQKBELA.data[1207] = 0X0354U;
MQKBELA.data[1208] = 0X000fU;
 /* line 297: */
MQKBELA.data[1209] = 0X0142U;
MQKBELA.data[1210] = 0X2639U;
MQKBELA.data[1211] = 0X0007U;
MQKBELA.data[1212] = 0X035cU;
MQKBELA.data[1213] = 0X0054U;
 /* line 298: */
MQKBELA.data[1214] = 0X03faU;
MQKBELA.data[1215] = 0X25feU;
MQKBELA.data[1216] = 0X0007U;
MQKBELA.data[1217] = 0X0054U;
MQKBELA.data[1218] = 0X03faU;
 /* line 299: */
MQKBELA.data[1219] = 0X261eU;
MQKBELA.data[1220] = 0X0007U;
MQKBELA.data[1221] = 0X000fU;
MQKBELA.data[1222] = 0X013aU;
MQKBELA.data[1223] = 0X26d9U;
 /* line 300: */
MQKBELA.data[1224] = 0X0007U;
MQKBELA.data[1225] = 0X0364U;
MQKBELA.data[1226] = 0X0b80U;
MQKBELA.data[1227] = 0X0382U;
MQKBELA.data[1228] = 0X2666U;
 /* line 301: */
MQKBELA.data[1229] = 0X0007U;
MQKBELA.data[1230] = 0X036cU;
MQKBELA.data[1231] = 0X2ab8U;
MQKBELA.data[1232] = 0X01eaU;
MQKBELA.data[1233] = 0X268eU;
 /* line 302: */
MQKBELA.data[1234] = 0X0007U;
MQKBELA.data[1235] = 0X0374U;
MQKBELA.data[1236] = 0X2ab8U;
MQKBELA.data[1237] = 0X01f2U;
MQKBELA.data[1238] = 0X26b6U;
 /* line 303: */
MQKBELA.data[1239] = 0X0007U;
MQKBELA.data[1240] = 0X037cU;
MQKBELA.data[1241] = 0X000fU;
MQKBELA.data[1242] = 0X0132U;
MQKBELA.data[1243] = 0X2721U;
 /* line 304: */
MQKBELA.data[1244] = 0X0007U;
MQKBELA.data[1245] = 0X0384U;
MQKBELA.data[1246] = 0X0054U;
MQKBELA.data[1247] = 0X03faU;
MQKBELA.data[1248] = 0X2706U;
 /* line 305: */
MQKBELA.data[1249] = 0X0007U;
MQKBELA.data[1250] = 0X000fU;
MQKBELA.data[1251] = 0X012aU;
MQKBELA.data[1252] = 0X2749U;
MQKBELA.data[1253] = 0X0007U;
 /* line 306: */
MQKBELA.data[1254] = 0X038cU;
MQKBELA.data[1255] = 0X0f51U;
MQKBELA.data[1256] = 0X0122U;
MQKBELA.data[1257] = 0X2799U;
MQKBELA.data[1258] = 0X0007U;
 /* line 307: */
MQKBELA.data[1259] = 0X0394U;
MQKBELA.data[1260] = 0X3820U;
MQKBELA.data[1261] = 0X015aU;
MQKBELA.data[1262] = 0X2776U;
MQKBELA.data[1263] = 0X0007U;
 /* line 308: */
MQKBELA.data[1264] = 0X039cU;
MQKBELA.data[1265] = 0X000fU;
MQKBELA.data[1266] = 0X011aU;
MQKBELA.data[1267] = 0X27c1U;
MQKBELA.data[1268] = 0X0007U;
 /* line 309: */
MQKBELA.data[1269] = 0X03a4U;
MQKBELA.data[1270] = 0X0b81U;
MQKBELA.data[1271] = 0X0112U;
MQKBELA.data[1272] = 0X2829U;
MQKBELA.data[1273] = 0X0007U;
 /* line 310: */
MQKBELA.data[1274] = 0X03acU;
MQKBELA.data[1275] = 0X0054U;
MQKBELA.data[1276] = 0X03faU;
MQKBELA.data[1277] = 0X27eeU;
MQKBELA.data[1278] = 0X0007U;
 /* line 311: */
MQKBELA.data[1279] = 0X0054U;
MQKBELA.data[1280] = 0X03faU;
MQKBELA.data[1281] = 0X280eU;
MQKBELA.data[1282] = 0X0007U;
MQKBELA.data[1283] = 0X000fU;
 /* line 312: */
MQKBELA.data[1284] = 0X010aU;
MQKBELA.data[1285] = 0X2891U;
MQKBELA.data[1286] = 0X0007U;
MQKBELA.data[1287] = 0X03b4U;
MQKBELA.data[1288] = 0X0054U;
 /* line 313: */
MQKBELA.data[1289] = 0X03faU;
MQKBELA.data[1290] = 0X2856U;
MQKBELA.data[1291] = 0X0007U;
MQKBELA.data[1292] = 0X0054U;
MQKBELA.data[1293] = 0X03faU;
 /* line 314: */
MQKBELA.data[1294] = 0X2876U;
MQKBELA.data[1295] = 0X0007U;
MQKBELA.data[1296] = 0X000fU;
MQKBELA.data[1297] = 0X0102U;
MQKBELA.data[1298] = 0X28b9U;
 /* line 315: */
MQKBELA.data[1299] = 0X0007U;
MQKBELA.data[1300] = 0X03bcU;
MQKBELA.data[1301] = 0X3069U;
MQKBELA.data[1302] = 0X00faU;
MQKBELA.data[1303] = 0X28e1U;
 /* line 316: */
MQKBELA.data[1304] = 0X0007U;
MQKBELA.data[1305] = 0X03c4U;
MQKBELA.data[1306] = 0X3069U;
MQKBELA.data[1307] = 0X00f2U;
MQKBELA.data[1308] = 0X2909U;
 /* line 317: */
MQKBELA.data[1309] = 0X0007U;
MQKBELA.data[1310] = 0X03ccU;
MQKBELA.data[1311] = 0X0b81U;
MQKBELA.data[1312] = 0X00eaU;
MQKBELA.data[1313] = 0X2939U;
 /* line 318: */
MQKBELA.data[1314] = 0X0007U;
MQKBELA.data[1315] = 0X03d4U;
MQKBELA.data[1316] = 0X0b80U;
MQKBELA.data[1317] = 0X0b81U;
MQKBELA.data[1318] = 0X00e2U;
 /* line 319: */
MQKBELA.data[1319] = 0X29a1U;
MQKBELA.data[1320] = 0X0007U;
MQKBELA.data[1321] = 0X03dcU;
MQKBELA.data[1322] = 0X0054U;
MQKBELA.data[1323] = 0X03faU;
 /* line 320: */
MQKBELA.data[1324] = 0X2966U;
MQKBELA.data[1325] = 0X0007U;
MQKBELA.data[1326] = 0X0054U;
MQKBELA.data[1327] = 0X03faU;
MQKBELA.data[1328] = 0X2986U;
 /* line 321: */
MQKBELA.data[1329] = 0X0007U;
MQKBELA.data[1330] = 0X000fU;
MQKBELA.data[1331] = 0X00daU;
MQKBELA.data[1332] = 0X29e9U;
MQKBELA.data[1333] = 0X0007U;
 /* line 322: */
MQKBELA.data[1334] = 0X03e4U;
MQKBELA.data[1335] = 0X0054U;
MQKBELA.data[1336] = 0X03faU;
MQKBELA.data[1337] = 0X29ceU;
MQKBELA.data[1338] = 0X0007U;
 /* line 323: */
MQKBELA.data[1339] = 0X0b81U;
MQKBELA.data[1340] = 0X00d2U;
MQKBELA.data[1341] = 0X2a51U;
MQKBELA.data[1342] = 0X0007U;
MQKBELA.data[1343] = 0X03ecU;
 /* line 324: */
MQKBELA.data[1344] = 0X0054U;
MQKBELA.data[1345] = 0X03faU;
MQKBELA.data[1346] = 0X2a16U;
MQKBELA.data[1347] = 0X0007U;
MQKBELA.data[1348] = 0X0054U;
 /* line 325: */
MQKBELA.data[1349] = 0X03faU;
MQKBELA.data[1350] = 0X2a36U;
MQKBELA.data[1351] = 0X0007U;
MQKBELA.data[1352] = 0X000fU;
MQKBELA.data[1353] = 0X00caU;
 /* line 326: */
MQKBELA.data[1354] = 0X2236U;
MQKBELA.data[1355] = 0X0007U;
MQKBELA.data[1356] = 0X03f4U;
MQKBELA.data[1357] = 0X0054U;
MQKBELA.data[1358] = 0X03faU;
 /* line 327: */
MQKBELA.data[1359] = 0X2a7eU;
MQKBELA.data[1360] = 0X0007U;
MQKBELA.data[1361] = 0X0054U;
MQKBELA.data[1362] = 0X03faU;
MQKBELA.data[1363] = 0X2a9eU;
 /* line 328: */
MQKBELA.data[1364] = 0X0007U;
MQKBELA.data[1365] = 0X000fU;
MQKBELA.data[1366] = 0X0053U;
MQKBELA.data[1367] = 0X2abeU;
MQKBELA.data[1368] = 0X2ad8U;
 /* line 329: */
MQKBELA.data[1369] = 0X2209U;
MQKBELA.data[1370] = 0X004aU;
MQKBELA.data[1371] = 0X000fU;
MQKBELA.data[1372] = 0X0007U;
MQKBELA.data[1373] = 0X00e4U;
 /* line 330: */
MQKBELA.data[1374] = 0X0054U;
MQKBELA.data[1375] = 0X03faU;
MQKBELA.data[1376] = 0X2b06U;
MQKBELA.data[1377] = 0X0007U;
MQKBELA.data[1378] = 0X0b80U;
 /* line 331: */
MQKBELA.data[1379] = 0X0b80U;
MQKBELA.data[1380] = 0X2ad9U;
MQKBELA.data[1381] = 0X005bU;
MQKBELA.data[1382] = 0X2b36U;
MQKBELA.data[1383] = 0X2b50U;
 /* line 332: */
MQKBELA.data[1384] = 0X31c9U;
MQKBELA.data[1385] = 0X0043U;
MQKBELA.data[1386] = 0X2b69U;
MQKBELA.data[1387] = 0X2231U;
MQKBELA.data[1388] = 0X0063U;
 /* line 333: */
MQKBELA.data[1389] = 0X2b81U;
MQKBELA.data[1390] = 0X1b01U;
MQKBELA.data[1391] = 0X004aU;
MQKBELA.data[1392] = 0X2b99U;
MQKBELA.data[1393] = 0X0bb1U;
 /* line 334: */
MQKBELA.data[1394] = 0X01c2U;
MQKBELA.data[1395] = 0X2bf1U;
MQKBELA.data[1396] = 0X0007U;
MQKBELA.data[1397] = 0X03fcU;
MQKBELA.data[1398] = 0X0b80U;
 /* line 335: */
MQKBELA.data[1399] = 0X2e40U;
MQKBELA.data[1400] = 0X015aU;
MQKBELA.data[1401] = 0X2bceU;
MQKBELA.data[1402] = 0X0007U;
MQKBELA.data[1403] = 0X0404U;
 /* line 336: */
MQKBELA.data[1404] = 0X000fU;
MQKBELA.data[1405] = 0X01baU;
MQKBELA.data[1406] = 0X2c49U;
MQKBELA.data[1407] = 0X0007U;
MQKBELA.data[1408] = 0X040cU;
 /* line 337: */
MQKBELA.data[1409] = 0X0b80U;
MQKBELA.data[1410] = 0X2e40U;
MQKBELA.data[1411] = 0X015aU;
MQKBELA.data[1412] = 0X2c26U;
MQKBELA.data[1413] = 0X0007U;
 /* line 338: */
MQKBELA.data[1414] = 0X0414U;
MQKBELA.data[1415] = 0X000fU;
MQKBELA.data[1416] = 0X01b2U;
MQKBELA.data[1417] = 0X2c71U;
MQKBELA.data[1418] = 0X0007U;
 /* line 339: */
MQKBELA.data[1419] = 0X041cU;
MQKBELA.data[1420] = 0X000fU;
MQKBELA.data[1421] = 0X01aaU;
MQKBELA.data[1422] = 0X2c99U;
MQKBELA.data[1423] = 0X0007U;
 /* line 340: */
MQKBELA.data[1424] = 0X0424U;
MQKBELA.data[1425] = 0X000fU;
MQKBELA.data[1426] = 0X01a2U;
MQKBELA.data[1427] = 0X2cc1U;
MQKBELA.data[1428] = 0X0007U;
 /* line 341: */
MQKBELA.data[1429] = 0X042cU;
MQKBELA.data[1430] = 0X000fU;
MQKBELA.data[1431] = 0X019aU;
MQKBELA.data[1432] = 0X2ce9U;
MQKBELA.data[1433] = 0X0007U;
 /* line 342: */
MQKBELA.data[1434] = 0X0434U;
MQKBELA.data[1435] = 0X000fU;
MQKBELA.data[1436] = 0X0192U;
MQKBELA.data[1437] = 0X2d11U;
MQKBELA.data[1438] = 0X0007U;
 /* line 343: */
MQKBELA.data[1439] = 0X043cU;
MQKBELA.data[1440] = 0X1dd1U;
MQKBELA.data[1441] = 0X0182U;
MQKBELA.data[1442] = 0X2d79U;
MQKBELA.data[1443] = 0X0007U;
 /* line 344: */
MQKBELA.data[1444] = 0X0444U;
MQKBELA.data[1445] = 0X2ec0U;
MQKBELA.data[1446] = 0X03e2U;
MQKBELA.data[1447] = 0X2d3eU;
MQKBELA.data[1448] = 0X0007U;
 /* line 345: */
MQKBELA.data[1449] = 0X044cU;
MQKBELA.data[1450] = 0X2f58U;
MQKBELA.data[1451] = 0X2fd0U;
MQKBELA.data[1452] = 0X0454U;
MQKBELA.data[1453] = 0X000fU;
 /* line 346: */
MQKBELA.data[1454] = 0X017aU;
MQKBELA.data[1455] = 0X2dc9U;
MQKBELA.data[1456] = 0X0007U;
MQKBELA.data[1457] = 0X045cU;
MQKBELA.data[1458] = 0X2ab8U;
 /* line 347: */
MQKBELA.data[1459] = 0X04a2U;
MQKBELA.data[1460] = 0X2da6U;
MQKBELA.data[1461] = 0X0007U;
MQKBELA.data[1462] = 0X0464U;
MQKBELA.data[1463] = 0X000fU;
 /* line 348: */
MQKBELA.data[1464] = 0X0172U;
MQKBELA.data[1465] = 0X2b56U;
MQKBELA.data[1466] = 0X0007U;
MQKBELA.data[1467] = 0X046cU;
MQKBELA.data[1468] = 0X3010U;
 /* line 349: */
MQKBELA.data[1469] = 0X0f50U;
MQKBELA.data[1470] = 0X0f50U;
MQKBELA.data[1471] = 0X3068U;
MQKBELA.data[1472] = 0X1e40U;
MQKBELA.data[1473] = 0X006cU;
 /* line 350: */
MQKBELA.data[1474] = 0X000aU;
MQKBELA.data[1475] = 0X2e1eU;
MQKBELA.data[1476] = 0X0007U;
MQKBELA.data[1477] = 0X0474U;
MQKBELA.data[1478] = 0X000fU;
 /* line 351: */
MQKBELA.data[1479] = 0X006bU;
MQKBELA.data[1480] = 0X000fU;
MQKBELA.data[1481] = 0X2e60U;
MQKBELA.data[1482] = 0X2e41U;
MQKBELA.data[1483] = 0X004bU;
 /* line 352: */
MQKBELA.data[1484] = 0X2e79U;
MQKBELA.data[1485] = 0X0b81U;
MQKBELA.data[1486] = 0X01caU;
MQKBELA.data[1487] = 0X2e66U;
MQKBELA.data[1488] = 0X0007U;
 /* line 353: */
MQKBELA.data[1489] = 0X047cU;
MQKBELA.data[1490] = 0X004cU;
MQKBELA.data[1491] = 0X0502U;
MQKBELA.data[1492] = 0X2ea6U;
MQKBELA.data[1493] = 0X0007U;
 /* line 354: */
MQKBELA.data[1494] = 0X000fU;
MQKBELA.data[1495] = 0X014aU;
MQKBELA.data[1496] = 0X2ec6U;
MQKBELA.data[1497] = 0X0007U;
MQKBELA.data[1498] = 0X0484U;
 /* line 355: */
MQKBELA.data[1499] = 0X0054U;
MQKBELA.data[1500] = 0X03faU;
MQKBELA.data[1501] = 0X2eeeU;
MQKBELA.data[1502] = 0X0007U;
MQKBELA.data[1503] = 0X004cU;
 /* line 356: */
MQKBELA.data[1504] = 0X0502U;
MQKBELA.data[1505] = 0X2f0eU;
MQKBELA.data[1506] = 0X0007U;
MQKBELA.data[1507] = 0X06b0U;
MQKBELA.data[1508] = 0X0b80U;
 /* line 357: */
MQKBELA.data[1509] = 0X0b80U;
MQKBELA.data[1510] = 0X2f41U;
MQKBELA.data[1511] = 0X014aU;
MQKBELA.data[1512] = 0X000fU;
MQKBELA.data[1513] = 0X2ec1U;
 /* line 358: */
MQKBELA.data[1514] = 0X0053U;
MQKBELA.data[1515] = 0X2f5eU;
MQKBELA.data[1516] = 0X2ab8U;
MQKBELA.data[1517] = 0X017aU;
MQKBELA.data[1518] = 0X2f76U;
 /* line 359: */
MQKBELA.data[1519] = 0X0007U;
MQKBELA.data[1520] = 0X048cU;
MQKBELA.data[1521] = 0X2ab8U;
MQKBELA.data[1522] = 0X04a2U;
MQKBELA.data[1523] = 0X2f9eU;
 /* line 360: */
MQKBELA.data[1524] = 0X0007U;
MQKBELA.data[1525] = 0X2fb9U;
MQKBELA.data[1526] = 0X0053U;
MQKBELA.data[1527] = 0X000fU;
MQKBELA.data[1528] = 0X2f59U;
 /* line 361: */
MQKBELA.data[1529] = 0X020aU;
MQKBELA.data[1530] = 0X2fd6U;
MQKBELA.data[1531] = 0X0007U;
MQKBELA.data[1532] = 0X0494U;
MQKBELA.data[1533] = 0X2ff9U;
 /* line 362: */
MQKBELA.data[1534] = 0X020aU;
MQKBELA.data[1535] = 0X000fU;
MQKBELA.data[1536] = 0X2fd1U;
MQKBELA.data[1537] = 0X004bU;
MQKBELA.data[1538] = 0X3031U;
 /* line 363: */
MQKBELA.data[1539] = 0X0b80U;
MQKBELA.data[1540] = 0X3011U;
MQKBELA.data[1541] = 0X000aU;
MQKBELA.data[1542] = 0X3016U;
MQKBELA.data[1543] = 0X006cU;
 /* line 364: */
MQKBELA.data[1544] = 0X000aU;
MQKBELA.data[1545] = 0X304eU;
MQKBELA.data[1546] = 0X0007U;
MQKBELA.data[1547] = 0X000fU;
MQKBELA.data[1548] = 0X03c2U;
 /* line 365: */
MQKBELA.data[1549] = 0X306eU;
MQKBELA.data[1550] = 0X0007U;
MQKBELA.data[1551] = 0X049cU;
MQKBELA.data[1552] = 0X0054U;
MQKBELA.data[1553] = 0X03faU;
 /* line 366: */
MQKBELA.data[1554] = 0X3096U;
MQKBELA.data[1555] = 0X0007U;
MQKBELA.data[1556] = 0X0054U;
MQKBELA.data[1557] = 0X03faU;
MQKBELA.data[1558] = 0X30b6U;
 /* line 367: */
MQKBELA.data[1559] = 0X0007U;
MQKBELA.data[1560] = 0X30d8U;
MQKBELA.data[1561] = 0X06b1U;
MQKBELA.data[1562] = 0X000aU;
MQKBELA.data[1563] = 0X3111U;
 /* line 368: */
MQKBELA.data[1564] = 0X006cU;
MQKBELA.data[1565] = 0X000aU;
MQKBELA.data[1566] = 0X30f6U;
MQKBELA.data[1567] = 0X0007U;
MQKBELA.data[1568] = 0X000fU;
 /* line 369: */
MQKBELA.data[1569] = 0X03faU;
MQKBELA.data[1570] = 0X30deU;
MQKBELA.data[1571] = 0X0054U;
MQKBELA.data[1572] = 0X03faU;
MQKBELA.data[1573] = 0X312eU;
 /* line 370: */
MQKBELA.data[1574] = 0X0007U;
MQKBELA.data[1575] = 0X3150U;
MQKBELA.data[1576] = 0X30d9U;
MQKBELA.data[1577] = 0X03c2U;
MQKBELA.data[1578] = 0X3169U;
 /* line 371: */
MQKBELA.data[1579] = 0X3069U;
MQKBELA.data[1580] = 0X0013U;
MQKBELA.data[1581] = 0X3181U;
MQKBELA.data[1582] = 0X06b1U;
MQKBELA.data[1583] = 0X0033U;
 /* line 372: */
MQKBELA.data[1584] = 0X3199U;
MQKBELA.data[1585] = 0X11e9U;
MQKBELA.data[1586] = 0X0023U;
MQKBELA.data[1587] = 0X31b1U;
MQKBELA.data[1588] = 0X0f51U;
 /* line 373: */
MQKBELA.data[1589] = 0X004bU;
MQKBELA.data[1590] = 0X3156U;
MQKBELA.data[1591] = 0X0b81U;
MQKBELA.data[1592] = 0X005bU;
MQKBELA.data[1593] = 0X000fU;
 /* line 374: */
MQKBELA.data[1594] = 0X2b31U;
MQKBELA.data[1595] = 0X0073U;
MQKBELA.data[1596] = 0X3221U;
MQKBELA.data[1597] = 0X3248U;
MQKBELA.data[1598] = 0X02daU;
 /* line 375: */
MQKBELA.data[1599] = 0X31feU;
MQKBELA.data[1600] = 0X0007U;
MQKBELA.data[1601] = 0X04a4U;
MQKBELA.data[1602] = 0X000fU;
MQKBELA.data[1603] = 0X02daU;
 /* line 376: */
MQKBELA.data[1604] = 0X31e6U;
MQKBELA.data[1605] = 0X0007U;
MQKBELA.data[1606] = 0X04a4U;
MQKBELA.data[1607] = 0X000fU;
MQKBELA.data[1608] = 0X0073U;
 /* line 377: */
MQKBELA.data[1609] = 0X324eU;
MQKBELA.data[1610] = 0X3268U;
MQKBELA.data[1611] = 0X3809U;
MQKBELA.data[1612] = 0X007bU;
MQKBELA.data[1613] = 0X3281U;
 /* line 378: */
MQKBELA.data[1614] = 0X32b1U;
MQKBELA.data[1615] = 0X0043U;
MQKBELA.data[1616] = 0X3299U;
MQKBELA.data[1617] = 0X2231U;
MQKBELA.data[1618] = 0X004aU;
 /* line 379: */
MQKBELA.data[1619] = 0X326eU;
MQKBELA.data[1620] = 0X0bb1U;
MQKBELA.data[1621] = 0X0063U;
MQKBELA.data[1622] = 0X32c9U;
MQKBELA.data[1623] = 0X1b01U;
 /* line 380: */
MQKBELA.data[1624] = 0X0362U;
MQKBELA.data[1625] = 0X32f9U;
MQKBELA.data[1626] = 0X0007U;
MQKBELA.data[1627] = 0X04acU;
MQKBELA.data[1628] = 0X3688U;
 /* line 381: */
MQKBELA.data[1629] = 0X0b81U;
MQKBELA.data[1630] = 0X0322U;
MQKBELA.data[1631] = 0X33a1U;
MQKBELA.data[1632] = 0X0007U;
MQKBELA.data[1633] = 0X04b4U;
 /* line 382: */
MQKBELA.data[1634] = 0X0054U;
MQKBELA.data[1635] = 0X03faU;
MQKBELA.data[1636] = 0X3326U;
MQKBELA.data[1637] = 0X0007U;
MQKBELA.data[1638] = 0X004cU;
 /* line 383: */
MQKBELA.data[1639] = 0X0502U;
MQKBELA.data[1640] = 0X3346U;
MQKBELA.data[1641] = 0X0007U;
MQKBELA.data[1642] = 0X06b0U;
MQKBELA.data[1643] = 0X0b80U;
 /* line 384: */
MQKBELA.data[1644] = 0X0b80U;
MQKBELA.data[1645] = 0X3688U;
MQKBELA.data[1646] = 0X037aU;
MQKBELA.data[1647] = 0X337eU;
MQKBELA.data[1648] = 0X0007U;
 /* line 385: */
MQKBELA.data[1649] = 0X04bcU;
MQKBELA.data[1650] = 0X000fU;
MQKBELA.data[1651] = 0X031aU;
MQKBELA.data[1652] = 0X3441U;
MQKBELA.data[1653] = 0X0007U;
 /* line 386: */
MQKBELA.data[1654] = 0X04c4U;
MQKBELA.data[1655] = 0X0b80U;
MQKBELA.data[1656] = 0X038aU;
MQKBELA.data[1657] = 0X33ceU;
MQKBELA.data[1658] = 0X0007U;
 /* line 387: */
MQKBELA.data[1659] = 0X04ccU;
MQKBELA.data[1660] = 0X3688U;
MQKBELA.data[1661] = 0X036aU;
MQKBELA.data[1662] = 0X33f6U;
MQKBELA.data[1663] = 0X0007U;
 /* line 388: */
MQKBELA.data[1664] = 0X04d4U;
MQKBELA.data[1665] = 0X3688U;
MQKBELA.data[1666] = 0X0372U;
MQKBELA.data[1667] = 0X341eU;
MQKBELA.data[1668] = 0X0007U;
 /* line 389: */
MQKBELA.data[1669] = 0X04dcU;
MQKBELA.data[1670] = 0X000fU;
MQKBELA.data[1671] = 0X0312U;
MQKBELA.data[1672] = 0X3489U;
MQKBELA.data[1673] = 0X0007U;
 /* line 390: */
MQKBELA.data[1674] = 0X04e4U;
MQKBELA.data[1675] = 0X36c0U;
MQKBELA.data[1676] = 0X015aU;
MQKBELA.data[1677] = 0X346eU;
MQKBELA.data[1678] = 0X0007U;
 /* line 391: */
MQKBELA.data[1679] = 0X000fU;
MQKBELA.data[1680] = 0X030aU;
MQKBELA.data[1681] = 0X3501U;
MQKBELA.data[1682] = 0X0007U;
MQKBELA.data[1683] = 0X04ecU;
 /* line 392: */
MQKBELA.data[1684] = 0X2ab8U;
MQKBELA.data[1685] = 0X0352U;
MQKBELA.data[1686] = 0X34b6U;
MQKBELA.data[1687] = 0X0007U;
MQKBELA.data[1688] = 0X04f4U;
 /* line 393: */
MQKBELA.data[1689] = 0X2ab8U;
MQKBELA.data[1690] = 0X035aU;
MQKBELA.data[1691] = 0X34deU;
MQKBELA.data[1692] = 0X0007U;
MQKBELA.data[1693] = 0X04fcU;
 /* line 394: */
MQKBELA.data[1694] = 0X000fU;
MQKBELA.data[1695] = 0X0302U;
MQKBELA.data[1696] = 0X3539U;
MQKBELA.data[1697] = 0X0007U;
MQKBELA.data[1698] = 0X0504U;
 /* line 395: */
MQKBELA.data[1699] = 0X11e8U;
MQKBELA.data[1700] = 0X0f50U;
MQKBELA.data[1701] = 0X1dd1U;
MQKBELA.data[1702] = 0X02faU;
MQKBELA.data[1703] = 0X3561U;
 /* line 396: */
MQKBELA.data[1704] = 0X0007U;
MQKBELA.data[1705] = 0X050cU;
MQKBELA.data[1706] = 0X1dd1U;
MQKBELA.data[1707] = 0X02f2U;
MQKBELA.data[1708] = 0X3589U;
 /* line 397: */
MQKBELA.data[1709] = 0X0007U;
MQKBELA.data[1710] = 0X0514U;
MQKBELA.data[1711] = 0X1dd1U;
MQKBELA.data[1712] = 0X02eaU;
MQKBELA.data[1713] = 0X35b1U;
 /* line 398: */
MQKBELA.data[1714] = 0X0007U;
MQKBELA.data[1715] = 0X051cU;
MQKBELA.data[1716] = 0X31e1U;
MQKBELA.data[1717] = 0X02e2U;
MQKBELA.data[1718] = 0X35d9U;
 /* line 399: */
MQKBELA.data[1719] = 0X0007U;
MQKBELA.data[1720] = 0X0524U;
MQKBELA.data[1721] = 0X000fU;
MQKBELA.data[1722] = 0X01c2U;
MQKBELA.data[1723] = 0X3631U;
 /* line 400: */
MQKBELA.data[1724] = 0X0007U;
MQKBELA.data[1725] = 0X03fcU;
MQKBELA.data[1726] = 0X0b80U;
MQKBELA.data[1727] = 0X2e40U;
MQKBELA.data[1728] = 0X015aU;
 /* line 401: */
MQKBELA.data[1729] = 0X360eU;
MQKBELA.data[1730] = 0X0007U;
MQKBELA.data[1731] = 0X0404U;
MQKBELA.data[1732] = 0X000fU;
MQKBELA.data[1733] = 0X01baU;
 /* line 402: */
MQKBELA.data[1734] = 0X32b6U;
MQKBELA.data[1735] = 0X0007U;
MQKBELA.data[1736] = 0X040cU;
MQKBELA.data[1737] = 0X0b80U;
MQKBELA.data[1738] = 0X2e40U;
 /* line 403: */
MQKBELA.data[1739] = 0X015aU;
MQKBELA.data[1740] = 0X3666U;
MQKBELA.data[1741] = 0X0007U;
MQKBELA.data[1742] = 0X0414U;
MQKBELA.data[1743] = 0X000fU;
 /* line 404: */
MQKBELA.data[1744] = 0X007bU;
MQKBELA.data[1745] = 0X36a1U;
MQKBELA.data[1746] = 0X32b1U;
MQKBELA.data[1747] = 0X0043U;
MQKBELA.data[1748] = 0X000fU;
 /* line 405: */
MQKBELA.data[1749] = 0X2208U;
MQKBELA.data[1750] = 0X32b1U;
MQKBELA.data[1751] = 0X0083U;
MQKBELA.data[1752] = 0X36c6U;
MQKBELA.data[1753] = 0X36e0U;
 /* line 406: */
MQKBELA.data[1754] = 0X37f1U;
MQKBELA.data[1755] = 0X008bU;
MQKBELA.data[1756] = 0X36f9U;
MQKBELA.data[1757] = 0X3729U;
MQKBELA.data[1758] = 0X0033U;
 /* line 407: */
MQKBELA.data[1759] = 0X36e6U;
MQKBELA.data[1760] = 0X11e8U;
MQKBELA.data[1761] = 0X2ad8U;
MQKBELA.data[1762] = 0X37c8U;
MQKBELA.data[1763] = 0X3689U;
 /* line 408: */
MQKBELA.data[1764] = 0X0282U;
MQKBELA.data[1765] = 0X3751U;
MQKBELA.data[1766] = 0X0007U;
MQKBELA.data[1767] = 0X052cU;
MQKBELA.data[1768] = 0X000fU;
 /* line 409: */
MQKBELA.data[1769] = 0X027aU;
MQKBELA.data[1770] = 0X3779U;
MQKBELA.data[1771] = 0X0007U;
MQKBELA.data[1772] = 0X0534U;
MQKBELA.data[1773] = 0X000fU;
 /* line 410: */
MQKBELA.data[1774] = 0X0272U;
MQKBELA.data[1775] = 0X37a1U;
MQKBELA.data[1776] = 0X0007U;
MQKBELA.data[1777] = 0X0374U;
MQKBELA.data[1778] = 0X000fU;
 /* line 411: */
MQKBELA.data[1779] = 0X01e2U;
MQKBELA.data[1780] = 0X372eU;
MQKBELA.data[1781] = 0X0007U;
MQKBELA.data[1782] = 0X053cU;
MQKBELA.data[1783] = 0X000fU;
 /* line 412: */
MQKBELA.data[1784] = 0X03faU;
MQKBELA.data[1785] = 0X000fU;
MQKBELA.data[1786] = 0X0007U;
MQKBELA.data[1787] = 0X0544U;
MQKBELA.data[1788] = 0X000fU;
 /* line 413: */
MQKBELA.data[1789] = 0X0083U;
MQKBELA.data[1790] = 0X000fU;
MQKBELA.data[1791] = 0X36c1U;
MQKBELA.data[1792] = 0X0073U;
MQKBELA.data[1793] = 0X000fU;
 /* line 414: */
MQKBELA.data[1794] = 0X3249U;
MQKBELA.data[1795] = 0X0083U;
MQKBELA.data[1796] = 0X3826U;
MQKBELA.data[1797] = 0X3840U;
MQKBELA.data[1798] = 0X38c1U;
 /* line 415: */
MQKBELA.data[1799] = 0X008bU;
MQKBELA.data[1800] = 0X3859U;
MQKBELA.data[1801] = 0X3729U;
MQKBELA.data[1802] = 0X0033U;
MQKBELA.data[1803] = 0X3846U;
 /* line 416: */
MQKBELA.data[1804] = 0X11e8U;
MQKBELA.data[1805] = 0X2ad8U;
MQKBELA.data[1806] = 0X3881U;
MQKBELA.data[1807] = 0X0043U;
MQKBELA.data[1808] = 0X3899U;
 /* line 417: */
MQKBELA.data[1809] = 0X2209U;
MQKBELA.data[1810] = 0X03faU;
MQKBELA.data[1811] = 0X3886U;
MQKBELA.data[1812] = 0X0007U;
MQKBELA.data[1813] = 0X0544U;
 /* line 418: */
MQKBELA.data[1814] = 0X2ab9U;
MQKBELA.data[1815] = 0X0083U;
MQKBELA.data[1816] = 0X000fU;
MQKBELA.data[1817] = 0X3821U;
MQKBELA.data[1818] = 0X0043U;
 /* line 419: */
MQKBELA.data[1819] = 0X000fU;
MQKBELA.data[1820] = 0X2209U;
MQKBELA.data[1821] = 0X03c2U;
MQKBELA.data[1822] = 0X38f6U;
MQKBELA.data[1823] = 0X3068U;
 /* line 420: */
MQKBELA.data[1824] = 0X0054U;
MQKBELA.data[1825] = 0X03faU;
MQKBELA.data[1826] = 0X3916U;
MQKBELA.data[1827] = 0X0007U;
MQKBELA.data[1828] = 0X0054U;
 /* line 421: */
MQKBELA.data[1829] = 0X03faU;
MQKBELA.data[1830] = 0X3936U;
MQKBELA.data[1831] = 0X0007U;
MQKBELA.data[1832] = 0X0b80U;
MQKBELA.data[1833] = 0X11e8U;
 /* line 422: */
MQKBELA.data[1834] = 0X0b81U;
MQKBELA.data[1835] = 0X0000U;
OQKBELA_sid_code = A_HISVEC(NQKBELA,MQKBELA,1836,A68_SBITS );
 /* line 424: */
 /* line 425: */
PQKBELA.data[0] = 0X80000000U;
PQKBELA.data[1] = 0X00000000U;
PQKBELA.data[2] = 0X7e800000U;
PQKBELA.data[3] = 0X00000000U;
PQKBELA.data[4] = 0X00000000U;
 /* line 426: */
PQKBELA.data[5] = 0X00000000U;
PQKBELA.data[6] = 0X00000000U;
PQKBELA.data[7] = 0X7e800000U;
PQKBELA.data[8] = 0X00000000U;
PQKBELA.data[9] = 0X00000000U;
PQKBELA.data[10] = 0X00000000U;
 /* line 427: */
PQKBELA.data[11] = 0X00000000U;
PQKBELA.data[12] = 0X00000000U;
PQKBELA.data[13] = 0X00000000U;
PQKBELA.data[14] = 0X000000f8U;
PQKBELA.data[15] = 0X00000000U;
PQKBELA.data[16] = 0X00003000U;
 /* line 428: */
PQKBELA.data[17] = 0X00000000U;
PQKBELA.data[18] = 0X00000000U;
PQKBELA.data[19] = 0X80000000U;
PQKBELA.data[20] = 0X003f0000U;
PQKBELA.data[21] = 0X00000000U;
PQKBELA.data[22] = 0X00000400U;
 /* line 429: */
PQKBELA.data[23] = 0X00000000U;
PQKBELA.data[24] = 0X00200800U;
PQKBELA.data[25] = 0X7f400000U;
PQKBELA.data[26] = 0X00000000U;
PQKBELA.data[27] = 0X00000800U;
PQKBELA.data[28] = 0X00000820U;
 /* line 430: */
PQKBELA.data[29] = 0X00000000U;
PQKBELA.data[30] = 0X0000ff00U;
PQKBELA.data[31] = 0X00000000U;
PQKBELA.data[32] = 0X00180200U;
PQKBELA.data[33] = 0X07806000U;
PQKBELA.data[34] = 0X1e130000U;
 /* line 431: */
PQKBELA.data[35] = 0X7fc000ffU;
PQKBELA.data[36] = 0Xffc00c02U;
PQKBELA.data[37] = 0X0020f980U;
PQKBELA.data[38] = 0X08001820U;
PQKBELA.data[39] = 0X01c4e6f8U;
PQKBELA.data[40] = 0X000000ffU;
 /* line 432: */
PQKBELA.data[41] = 0Xffc00000U;
PQKBELA.data[42] = 0X0000f000U;
PQKBELA.data[43] = 0X00000000U;
PQKBELA.data[44] = 0X01c486f8U;
PQKBELA.data[45] = 0X7fc00000U;
PQKBELA.data[46] = 0X00000000U;
 /* line 433: */
PQKBELA.data[47] = 0X00000800U;
PQKBELA.data[48] = 0X00000820U;
PQKBELA.data[49] = 0X00000000U;
PQKBELA.data[50] = 0X008000ffU;
PQKBELA.data[51] = 0Xffc00000U;
PQKBELA.data[52] = 0X0000f000U;
 /* line 434: */
PQKBELA.data[53] = 0X00000000U;
PQKBELA.data[54] = 0X01c486f8U;
PQKBELA.data[55] = 0X008000ffU;
PQKBELA.data[56] = 0Xffd7ff00U;
PQKBELA.data[57] = 0X0000f000U;
PQKBELA.data[58] = 0X00000040U;
 /* line 435: */
PQKBELA.data[59] = 0X01cc87f8U;
PQKBELA.data[60] = 0X00000000U;
PQKBELA.data[61] = 0X00108000U;
PQKBELA.data[62] = 0X00000000U;
PQKBELA.data[63] = 0X00000040U;
PQKBELA.data[64] = 0X00080100U;
 /* line 436: */
PQKBELA.data[65] = 0X7fc00000U;
PQKBELA.data[66] = 0X00000080U;
PQKBELA.data[67] = 0X00000800U;
PQKBELA.data[68] = 0X00000820U;
PQKBELA.data[69] = 0X00000000U;
PQKBELA.data[70] = 0X008000ffU;
 /* line 437: */
PQKBELA.data[71] = 0Xffd08300U;
PQKBELA.data[72] = 0X0000f01fU;
PQKBELA.data[73] = 0Xf0100040U;
PQKBELA.data[74] = 0X01cc87f8U;
PQKBELA.data[75] = 0X00000000U;
PQKBELA.data[76] = 0X00108300U;
 /* line 438: */
PQKBELA.data[77] = 0X0000001fU;
PQKBELA.data[78] = 0Xf0100040U;
PQKBELA.data[79] = 0X00080100U;
PQKBELA.data[80] = 0X0000ff00U;
PQKBELA.data[81] = 0X00000010U;
PQKBELA.data[82] = 0X001f0200U;
 /* line 439: */
PQKBELA.data[83] = 0X07806000U;
PQKBELA.data[84] = 0X1e130000U;
PQKBELA.data[85] = 0X00000000U;
PQKBELA.data[86] = 0X00000010U;
PQKBELA.data[87] = 0X00070000U;
PQKBELA.data[88] = 0X00000000U;
PQKBELA.data[89] = 0X00000000U;
RQKBELA_sid_cblwds = A_HISVEC(QQKBELA,PQKBELA,90,A68_BITS );
 /* line 441: */
 /* line 445: */
 /* line 446: */
 /* line 448: */
 /* line 453: */
 /* line 465: */
 /* line 643: */
 /* line 657: */
 /* line 664: */
 /* line 674: */
A_PROC_EXIT(DECS lowptil);
} 
#undef NL
/* end of translation of ./a68files/lowptil.a68 */
