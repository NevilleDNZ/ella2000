
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
/* UNAME:EBLBELA */
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

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE162) VOID */
struct A68t178 ;

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t178 ,struct A68t162 *),(struct A68t178 ,struct A68t162 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE178) MODE162 */
struct A68t178{
struct A68t179 * Context;
struct A68t180 * Region;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE179,REF MODE180)  */
struct A68t183{
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
typedef struct A68t183  A68_183 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t188 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE188 */
struct A68t188{
A68_INT  Sort;
A_PAD_INT(PAD_44)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_45)
A68_BOOL  Import;
A_PAD_BOOL(PAD_46)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_47)
A68_INT  Version;
A_PAD_INT(PAD_48)
A68_VC  Il;
struct A68t189 * Uses;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE189)  */
struct A68t179{
A68_VC  Name;
struct A68t183  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_49)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_50)
struct A68t184  Decls;
struct A68t185 * Declattributes;
struct A68t186 * Regions;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,MODE183,BOOL,BOOL,REF MODE184,REF MODE185,REF MODE186)  */
struct A68t180{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_51)
struct A68t181 * Imports;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(REF MODE26,INT,REF MODE181)  */
struct A68t182{
struct A68t162  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t183  Info;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE162,REF MODE26,REF MODE26,INT,MODE183)  */
struct A68t181{
struct A68t182  Binding;
struct A68t181 * Rest;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE182,REF MODE181)  */
A_VECTOR(struct A68t183 ,A68t187);
typedef struct A68t187  A68_187 ;    /* VECTOR [] MODE183 */
struct A68t185{
A68_INT  Key;
A_PAD_INT(PAD_53)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_54)
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
A_PAD_INT(PAD_55)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_56)
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE189)  */

A_PROCEDURE(A68_VOID ,A68t190,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t183 *,struct A68t183 *,struct A68t183 *,struct A68t97 ),(struct A68t183 *,struct A68t183 *,struct A68t183 *,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE183,REF MODE183,REF MODE183,MODE97) VOID */
struct A68t193 ;

A_PROCEDURE(struct A68t193 *,A68t192,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE97) REF MODE193 */
struct A68t193{
struct A68t179  Context;
struct A68t193 * Rest;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE179,REF MODE193)  */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t184 ,struct A68t97 ,struct A68t183 *),(struct A68t184 ,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE184,MODE97) MODE183 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t179 *,struct A68t97 ,struct A68t184 *),(struct A68t179 *,struct A68t97 ,struct A68t184 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE179,MODE97) REF MODE184 */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE184) VOID */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t179 *,A68_VC ,struct A68t97 ),(struct A68t179 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE179,REF MODE26,MODE97) INT */
struct A68t199 ;

A_PROCEDURE(struct A68t199 *,A68t198,(struct A68t179 *,A68_INT ),(struct A68t179 *,A68_INT ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE179,INT) REF MODE199 */
struct A68t199{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_57)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(struct A68t199 *,A68t200,(struct A68t178 ,A68_VC ),(struct A68t178 ,A68_VC ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE178,REF MODE26) REF MODE199 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(BOOL,MODE97) VOID */
struct A68t204 ;

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t204 *,struct A68t201 ,struct A68t97 ),(struct A68t204 *,struct A68t201 ,struct A68t97 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE204,MODE201,MODE97) VOID */
struct A68t204{
struct A68t205 * Database;
A68_VC  Description;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE205,REF MODE26)  */
struct A68t205{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t206 * Df;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE206)  */
A_VECTOR(struct A68t211 ,A68t210);
typedef struct A68t210  A68_210 ;    /* VECTOR [] MODE211 */
struct A68t212{
A68_INT  Block_num;
A_PAD_INT(PAD_58)
A68_INT  Offset;
A_PAD_INT(PAD_59)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT,INT)  */
struct A68t211{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_60)
struct A68t212  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_61)
A68_INT  Dp_elts;
A_PAD_INT(PAD_62)
A68_INT  Code;
A_PAD_INT(PAD_63)
A68_INT  Version;
A_PAD_INT(PAD_64)
A68_INT  Read_size;
A_PAD_INT(PAD_65)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(BOOL,MODE212,INT,INT,INT,INT,INT)  */
struct A68t206{
struct A68t183 * Root;
struct A68t183 * Indirs_dp;
struct A68t183 * Freelist_dp;
struct A68t183 * Pagetable_dp;
struct A68t183 * Append_dp;
struct A68t187  Free_block_dps;
struct A68t187  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t207 * Write_buffer;
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
struct A68t208 * Gc_ptrs;
struct A68t209 * Instore_vars;
struct A68t210  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(REF MODE183,REF MODE183,REF MODE183,REF MODE183,REF MODE183,REF MODE187,REF MODE187,REF REF MODE111,REF REF MODE111,REF MODE207,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE208,REF MODE209,REF MODE210,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t207{
A68_VC  Buffer;
struct A68t213 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(REF MODE26,REF MODE213,REF INT,REF INT,REF INT)  */
struct A68t208{
struct A68t212  Old;
struct A68t212  New;
struct A68t208 * Rest;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE212,MODE212,REF MODE208)  */
struct A68t209{
A68_INT  Indirection;
A_PAD_INT(PAD_66)
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,REF MODE209)  */
struct A68t213{
A68_INT  Lwb;
A_PAD_INT(PAD_67)
A68_INT  Upb;
A_PAD_INT(PAD_68)
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT,REF MODE213)  */

A_PROCEDURE(A68_VOID ,A68t214,(A68_VC ,struct A68t201 ,struct A68t97 ),(A68_VC ,struct A68t201 ,struct A68t97 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE26,MODE201,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t216,(A68_VC ,struct A68t184 ),(A68_VC ,struct A68t184 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE26,REF MODE184) INT */

A_PROCEDURE(A68_BOOL ,A68t217,(struct A68t179 *,struct A68t184 ,A68_INT ,struct A68t97 ),(struct A68t179 *,struct A68t184 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE179,REF MODE184,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,struct A68t178 *),(A68_INT ,struct A68t178 *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT) MODE178 */

A_PROCEDURE(A68_INT ,A68t219,(struct A68t178 ),(struct A68t178 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE178) INT */

A_PROCEDURE(A68_INT ,A68t220,(struct A68t178 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t178 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE178,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t97 ,struct A68t183 *),(struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE97) MODE183 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE162,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t178 ,A68_INT ,struct A68t97 ),(struct A68t178 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE178,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t178 ,struct A68t97 ),(struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE178,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t179 *,A68_VC ,struct A68t97 ),(struct A68t179 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE179,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t178 ,A68_VC ,struct A68t97 ),(struct A68t178 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE178,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t179 *,struct A68t97 ),(struct A68t179 *,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE179,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t179 *,A68_INT ,struct A68t97 ),(struct A68t179 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE179,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t178 ,struct A68t183 ,struct A68t97 ),(struct A68t178 ,struct A68t183 ,struct A68t97 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE178,MODE183,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t179 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t179 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE179,INT,BOOL,BOOL,MODE97) VOID */
struct A68t232{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_69)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_70)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_71)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_72)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_73)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_74)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_75)
A68_INT  Width;
A_PAD_INT(PAD_76)
A68_INT  Page_count;
A_PAD_INT(PAD_77)
A68_INT  Page_length;
A_PAD_INT(PAD_78)
A68_INT  Eof_count;
A_PAD_INT(PAD_79)
struct A68t233 * Standard_reader;
struct A68t234 * Infile;
struct A68t173  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE233,REF MODE234,MODE173,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t235,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t233{
A68_VC  Rdbuffer;
struct A68t235  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_80)
A68_INT  Rdcharno;
A_PAD_INT(PAD_81)
A68_INT  Start_of_word;
A_PAD_INT(PAD_82)
struct A68t236 * Stack;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(REF MODE26,MODE235,INT,INT,INT,REF MODE236)  */
struct A68t234{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_83)
A68_INT  Number;
A_PAD_INT(PAD_84)
A68_VC  Name;
struct A68t233 * Reader;
struct A68t234 * Previous;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE233,REF MODE234)  */
struct A68t236{
A68_VC  Line;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE26,REF MODE236)  */

A_PROCEDURE(struct A68t232 *,A68t237,(void),(void *));
typedef struct A68t237  A68_237 ;    /* PROC REF MODE232 */

A_PROCEDURE(A68_VOID ,A68t238,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE173) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(BOOL) VOID */
A_VECTOR(struct A68t243 ,A68t242);
typedef struct A68t242  A68_242 ;    /* VECTOR [] MODE243 */
struct A68t241{
A68_BITS  Type;
A_PAD_BITS(PAD_85)
struct A68t242  Elements;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(BITS,REF MODE242)  */
struct A68t243 { A68_INT mode; union {
A68_INT * mode1;
struct A68t241  mode2;
} data; };
typedef struct A68t243  A68_243 ;    /* UNION(REF INT,MODE241)  */
struct A68t244{
A68_INT  Sort;
A_PAD_INT(PAD_86)
A68_VC  Value;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t244 ,A68t245);
typedef struct A68t245  A68_245 ;    /* VECTOR [] MODE244 */
A_VECTOR(struct A68t246 ,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] MODE246 */
struct A68t247{
A68_INT  Choice;
A_PAD_INT(PAD_87)
struct A68t248  Params;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT,REF MODE248)  */
struct A68t246 { A68_INT mode; union {
struct A68t247  mode1;
struct A68t244  mode2;
} data; };
typedef struct A68t246  A68_246 ;    /* UNION(MODE247,MODE244)  */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE97) REF MODE26 */
struct A68t249 { A68_INT mode; union {
struct A68t250  mode1;
A68_INT * mode2;
struct A68t241  mode3;
} data; };
typedef struct A68t249  A68_249 ;    /* UNION(MODE250,REF INT,MODE241)  */
struct A68t251{
A68_INT * Sort;
struct A68t249  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF INT,MODE249,REF MODE26,REF MODE26)  */
struct A68t252{
struct A68t251  Rule;
struct A68t252 * Rest;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE251,REF MODE252)  */

A_PROCEDURE(A68_BOOL ,A68t253,(struct A68t241 ),(struct A68t241 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE241) BOOL */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t242 ,struct A68t241 *),(struct A68t242 ,struct A68t241 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE242) MODE241 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t243 ,struct A68t241 *),(struct A68t243 ,struct A68t241 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE243) MODE241 */
struct A68t257 ;

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t243 ,struct A68t257 ,A68_VC *),(struct A68t243 ,struct A68t257 ,A68_VC *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE243,REF MODE257) REF MODE26 */
A_VECTOR(struct A68t251 ,A68t257);
typedef struct A68t257  A68_257 ;    /* VECTOR [] MODE251 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t34 *,struct A68t257 ),(struct A68t34 *,struct A68t257 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE34,REF MODE257) VOID */
struct A68t260 ;

A_PROCEDURE(struct A68t252 *,A68t259,(struct A68t252 *,struct A68t260 ),(struct A68t252 *,struct A68t260 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE252,MODE260) REF MODE252 */
A_VECTOR(struct A68t261 ,A68t260);
typedef struct A68t260  A68_260 ;    /* VECTOR [] MODE261 */
struct A68t261{
A68_INT * No;
struct A68t249  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(REF INT,MODE249,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t246 ,struct A68t245 *),(struct A68t246 ,struct A68t245 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE246) REF MODE245 */

A_PROCEDURE(A68_BOOL ,A68t263,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t264,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t265,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(struct A68t233 *,A68t266,(A68_VC ,struct A68t235 ),(A68_VC ,struct A68t235 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE26,MODE235) REF MODE233 */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t233 ),(struct A68t233 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE233) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t257 ,struct A68t243 ,struct A68t97 ,struct A68t246 *),(struct A68t257 ,struct A68t243 ,struct A68t97 ,struct A68t246 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE257,MODE243,MODE97) MODE246 */

A_PROCEDURE(A68_CHAR ,A68t270,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t271,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t244 ,A68_INT ,struct A68t97 ),(struct A68t244 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE244,INT,MODE97) VOID */
struct A68t273{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_88)
A68_BOOL  Check;
A_PAD_BOOL(PAD_89)
};
typedef struct A68t273  A68_273 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t273 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t273 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE273,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t275,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t244 ),(struct A68t244 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE244) BOOL */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t244 ,struct A68t97 ,A68_VC *),(struct A68t244 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE244,MODE97) REF MODE26 */
struct A68t278{
A68_INT  C;
A_PAD_INT(PAD_90)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT)  */
struct A68t279{
A68_BITS  A;
A_PAD_BITS(PAD_91)
};
typedef struct A68t279  A68_279 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t281,(A68_VC ,struct A68t246 ,struct A68t97 ),(A68_VC ,struct A68t246 ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE26,MODE246,MODE97) VOID */
struct A68t280{
A68_VC  Parameter;
struct A68t281  Proc;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE26,MODE281)  */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t246 ,struct A68t97 ),(struct A68t246 ,struct A68t97 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE246,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t245 ,struct A68t97 ),(struct A68t245 ,struct A68t97 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE245,MODE97) VOID */
struct A68t282 { A68_INT mode; union {
struct A68t280  mode1;
struct A68t283  mode2;
struct A68t284  mode3;
} data; };
typedef struct A68t282  A68_282 ;    /* UNION(MODE280,MODE283,MODE284)  */
struct A68t285 { A68_INT mode; union {
struct A68t286 * mode1;
struct A68t287 * mode2;
struct A68t288 * mode3;
} data; };
typedef struct A68t285  A68_285 ;    /* UNION(REF MODE286,REF MODE287,REF MODE288)  */
struct A68t286 ;

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t286 *,struct A68t34 *),(struct A68t286 *,struct A68t34 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE286,REF MODE34) VOID */
struct A68t290 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t291  mode3;
} data; };
typedef struct A68t290  A68_290 ;    /* UNION(REF MODE26,REF MODE102,MODE291)  */
struct A68t286{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t243  Parameter;
struct A68t279  Access;
struct A68t278  Continuation;
struct A68t290  Help;
struct A68t282  Command;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(REF MODE26,REF MODE26,MODE243,MODE279,MODE278,MODE290,MODE282)  */
A_VECTOR(struct A68t285 ,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] MODE285 */
struct A68t287{
struct A68t286 * Group;
struct A68t289  Commands;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE286,REF MODE289)  */
struct A68t288{
struct A68t286 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t289  Locals;
struct A68t289  Globals;
struct A68t286 * Postlude;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE286,REF MODE26,REF REF MODE26,REF MODE289,REF MODE289,REF MODE286)  */
struct A68t292{
struct A68t288 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_92)
struct A68t102  Input_lines;
struct A68t292 * Caller;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE288,INT,REF MODE102,REF MODE292)  */
struct A68t293 ;

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t293 *,struct A68t286 *,struct A68t246 ,struct A68t97 ,struct A68t278 *),(struct A68t293 *,struct A68t286 *,struct A68t246 ,struct A68t97 ,struct A68t278 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF MODE293,REF MODE286,MODE246,MODE97) MODE278 */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE102) VOID */
struct A68t297 ;

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t297 ),(struct A68t297 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE297) VOID */
struct A68t293{
struct A68t292 * Stack;
struct A68t257  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_93)
A68_BOOL  Private;
A_PAD_BOOL(PAD_94)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_95)
struct A68t294  Caller;
struct A68t295  Report_error;
struct A68t296  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE292,REF MODE257,BOOL,BOOL,BOOL,MODE294,MODE295,MODE296,MODE97)  */
struct A68t297 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t297  A68_297 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t298,(struct A68t278 ,struct A68t278 ),(struct A68t278 ,struct A68t278 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE278,MODE278) BOOL */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t289 ,struct A68t289 ,struct A68t289 *),(struct A68t289 ,struct A68t289 ,struct A68t289 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE289,MODE289) REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t289 ,struct A68t285 ,struct A68t289 *),(struct A68t289 ,struct A68t285 ,struct A68t289 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE289,MODE285) REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t289 *,struct A68t289 ,struct A68t289 *),(struct A68t289 *,struct A68t289 ,struct A68t289 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF REF MODE289,MODE289) REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t289 *,struct A68t285 ,struct A68t289 *),(struct A68t289 *,struct A68t285 ,struct A68t289 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF REF MODE289,MODE285) REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t289 ,struct A68t289 *),(struct A68t289 ,struct A68t289 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE289) REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t285 ,struct A68t289 *),(struct A68t285 ,struct A68t289 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE285) REF MODE289 */

A_PROCEDURE(struct A68t287 *,A68t305,(A68_VC ,A68_VC ,struct A68t279 ,struct A68t289 ),(A68_VC ,A68_VC ,struct A68t279 ,struct A68t289 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE26,MODE26,MODE279,MODE289) REF MODE287 */

A_PROCEDURE(struct A68t288 *,A68t306,(struct A68t286 *,A68_VC ,A68_VC *,struct A68t289 ,struct A68t289 ,struct A68t282 ),(struct A68t286 *,A68_VC ,A68_VC *,struct A68t289 ,struct A68t289 ,struct A68t282 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE286,MODE26,REF REF MODE26,REF MODE289,REF MODE289,MODE282) REF MODE288 */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t293 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t293 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE293,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t293 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t293 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE293,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t293 *,A68t309,(struct A68t295 ,struct A68t296 ,struct A68t97 ,struct A68t294 ,struct A68t252 *,struct A68t288 *,struct A68t246 ),(struct A68t295 ,struct A68t296 ,struct A68t97 ,struct A68t294 ,struct A68t252 *,struct A68t288 *,struct A68t246 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE295,MODE296,MODE97,MODE294,REF MODE252,REF MODE288,MODE246) REF MODE293 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t293 *,struct A68t278 *),(struct A68t293 *,struct A68t278 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE293) MODE278 */

A_PROCEDURE(A68_VOID ,A68t311,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t312,(A68_VC ,A68_VC ,struct A68t264 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t264 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE26,MODE26,MODE264,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t313,(A68_VC ),(A68_VC ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t314,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t273 ,struct A68t97 ,A68_VC *),(struct A68t273 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE273,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t316,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t317,(struct A68t244 ,struct A68t97 ),(struct A68t244 ,struct A68t97 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE244,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t244 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t244 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE244,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t245 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t162 *),(struct A68t245 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t162 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE245,REF INT,REF MODE26,MODE97) MODE162 */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t244 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t244 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE244,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t321,(struct A68t244 ,struct A68t97 ,struct A68t46 ),(struct A68t244 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE244,MODE97,MODE46) INT */
struct A68t322{
A68_INT  Lwb;
A_PAD_INT(PAD_96)
A68_INT  Upb;
A_PAD_INT(PAD_97)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t244 ,struct A68t322 ,struct A68t97 ,struct A68t322 *),(struct A68t244 ,struct A68t322 ,struct A68t97 ,struct A68t322 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE244,MODE322,MODE97) MODE322 */

A_PROCEDURE(A68_VOID ,A68t324,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t325,(struct A68t244 ,struct A68t97 ),(struct A68t244 ,struct A68t97 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE244,MODE97) CHAR */

A_PROCEDURE(struct A68t252 *,A68t326,(void),(void *));
typedef struct A68t326  A68_326 ;    /* PROC REF MODE252 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t289 ,struct A68t289 ),(struct A68t289 ,struct A68t289 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE289,REF MODE289) VOID */

A_PROCEDURE(A68_INT ,A68t328,(A68_VC ,A68_VC ,struct A68t289 ),(A68_VC ,A68_VC ,struct A68t289 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE26,MODE26,REF MODE289) INT */

A_PROCEDURE(struct A68t286 *,A68t329,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE286 */
struct A68t331 ;

A_PROCEDURE(A68_VOID ,A68t330,(A68_VC ,A68_VC ,struct A68t143 ,struct A68t331 ,struct A68t289 *),(A68_VC ,A68_VC ,struct A68t143 ,struct A68t331 ,struct A68t289 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE26,MODE26,MODE143,MODE331) REF MODE289 */

A_PROCEDURE(struct A68t293 **,A68t331,(void),(void *));
typedef struct A68t331  A68_331 ;    /* PROC REF REF MODE293 */

A_PROCEDURE(struct A68t288 *,A68t332,(void),(void *));
typedef struct A68t332  A68_332 ;    /* PROC REF MODE288 */

A_PROCEDURE(A68_VOID ,A68t333,(A68_VC ,A68_BOOL ,struct A68t97 ),(A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t289 *),(struct A68t289 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t289 ,struct A68t289 *),(struct A68t289 ,struct A68t289 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE289) REF MODE289 */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,51,A68t338);
typedef struct A68t338  A68_338 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t339);
typedef struct A68t339  A68_339 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t342);
typedef struct A68t342  A68_342 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,16,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 7 MODE52 */
A_ISTRUCT(A68_CHAR ,55,A68t352);
typedef struct A68t352  A68_352 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 3 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from diagnostics --- */
extern A68_VOID  QUKBELA_make_diagnostics(A68_289 *);
/* --- End of imports from diagnostics --- */


/* --- Imports from simcommands --- */
extern A68_VOID  EUJBELA_make_simcommands(struct A68t289 ,A68_289 *);
/* --- End of imports from simcommands --- */


/* --- Imports from textcommands --- */
extern A68_VOID  CDJBELA_make_textcommands(A68_289 *);
/* --- End of imports from textcommands --- */


/* --- Imports from graphicscommands --- */
extern A68_VOID  EZIBELA_make_graphics_commands(A68_289 *);
/* --- End of imports from graphicscommands --- */


/* --- Imports from compcommands --- */
extern A68_VOID  HZHBELA_compile(A68_VC ,A68_BOOL ,struct A68t97 );
extern A68_VOID  REIBELA_make_compcommands(A68_289 *);
/* --- End of imports from compcommands --- */


/* --- Imports from libcommands --- */
extern A68_288 * QQGBELA_initialise_library(void);
/* --- End of imports from libcommands --- */


/* --- Imports from globalcommands --- */
extern A68_VOID  PGHAOST_add_globals_to_compounds(struct A68t289 ,struct A68t289 );
extern A68_VOID  OJHAOST_make_globalcommands(A68_VC ,A68_VC ,struct A68t143 ,struct A68t331 ,A68_289 *);
/* --- End of imports from globalcommands --- */


/* --- Imports from commandcaller --- */
extern A68_VOID  IYGAOST_report_error(struct A68t102 );
extern A68_VOID  YYGAOST_set_default_msg(struct A68t297 );
extern A68_VOID  HZGAOST_call_command(struct A68t293 *,struct A68t286 *,struct A68t246 ,struct A68t97 ,A68_278 *);
/* --- End of imports from commandcaller --- */


/* --- Imports from kernelreader --- */
extern A68_252 * UFGAOST_make_kernel_readers(void);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_299  GQDAOST_add;
extern A68_VOID  QQDAOST_addab(struct A68t289 *,struct A68t289 ,A68_289 *);
extern A68_293 * DPEAOST_initialise_commands(struct A68t295 ,struct A68t296 ,struct A68t97 ,struct A68t294 ,struct A68t252 *,struct A68t288 *,struct A68t246 );
extern A68_VOID  FSEAOST_interpret_commands(struct A68t293 *,A68_278 *);
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_246  ASAAOST_no_parameters;
/* --- End of imports from commandsyntax --- */


/* --- Imports from printissue --- */
extern A68_VOID  QKCAOST_print_title(A68_BOOL );
extern A68_VOID  SKCAOST_print_issue(void);
/* --- End of imports from printissue --- */


/* --- Imports from ellaversion --- */
extern A68_VOID  VEAAELA_ellaversion(A68_148 *);
/* --- End of imports from ellaversion --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  SNGAOST_banner(A68_VC );
extern A68_VOID  CQGAOST_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  FXGAOST_initialise_ioprocs(struct A68t173 );
/* --- End of imports from ioprocs --- */


/* --- Imports from libprocs --- */
extern A68_VOID  EZBBELA_create_library(A68_VC ,struct A68t97 );
/* --- End of imports from libprocs --- */


/* --- Imports from libinterface --- */
extern A68_VOID  CIBBELA_nullupdater(A68_INT ,A68_INT ,struct A68t97 );
extern A68_VOID  HIBBELA_open_library(A68_VC ,struct A68t201 ,struct A68t97 );
extern A68_VOID  OJBBELA_finish_library(struct A68t97 );
/* --- End of imports from libinterface --- */


/* --- Imports from basics --- */
extern A68_VC  UKDAOST_library_type;
extern A68_VC  DLDAOST_source_type;
extern A68_VC  PLDAOST_infile_type;
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_VOID  UHBAOST_set_testmode(struct A68t160 );
/* --- End of imports from testmode --- */


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
extern A68_150  TEAAOST_initialise_osinterface;
extern A68_VOID  UEAAOST_facility(A68_VC *);
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
extern A68_34 * MEAAOST_err;
extern A68_BOOL  LJAAOST_filename_arg(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL );
extern A68_VOID  OMAAOST_parse_arguments(A68_VC ,struct A68t143 ,struct A68t154 ,struct A68t155 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ETKBELA(void);   /* diagnostics */
extern void GEJBELA(void);   /* simcommands */
extern void XBJBELA(void);   /* textcommands */
extern void SHIBELA(void);   /* graphicscommands */
extern void ZYHBELA(void);   /* compcommands */
extern void DAGBELA(void);   /* libcommands */
extern void DBHAOST(void);   /* globalcommands */
extern void AYGAOST(void);   /* commandcaller */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void EGCAOST(void);   /* printissue */
extern void HEAAELA(void);   /* ellaversion */
extern void TIGAOST(void);   /* ioprocs */
extern void ZSBBELA(void);   /* libprocs */
extern void SOABELA(void);   /* libinterface */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_338   HBLBELA = {"$Id: ella.a68,v 34.3 1995/03/29 13:03:15 ella Exp $"}; 
A_GISVEC(A68_VC ,IBLBELA,HBLBELA,51)
static A68_339   JBLBELA = {"ELLASYSDIR"}; 
A_GISVEC(A68_VC ,KBLBELA,JBLBELA,10)
static A68_VC  LBLBELA_ellasysdir;
static A68_293 * MBLBELA_env;
static A68_BOOL  RBLBELA_create;
static A68_BOOL  SBLBELA_testmode;
static A68_BOOL  TBLBELA_silent;
static A68_VC  UBLBELA_lib_fname;
static A68_VC  VBLBELA_in_fname;
static A68_VC  WBLBELA_comp_fname;
static A68_340   BCLBELA = {"-c"}; 
A_GISVEC(A68_VC ,CCLBELA,BCLBELA,2)
static A68_341   DCLBELA = {"Library"}; 
A_GISVEC(A68_VC ,FCLBELA,DCLBELA,7)
static A68_340   HCLBELA = {"-t"}; 
A_GISVEC(A68_VC ,ICLBELA,HCLBELA,2)
static A68_340   JCLBELA = {"-s"}; 
A_GISVEC(A68_VC ,KCLBELA,JCLBELA,2)
static A68_340   LCLBELA = {"-i"}; 
A_GISVEC(A68_VC ,MCLBELA,LCLBELA,2)
static A68_342   NCLBELA = {"Input"}; 
A_GISVEC(A68_VC ,OCLBELA,NCLBELA,5)
static A68_343   QCLBELA = {"-compile"}; 
A_GISVEC(A68_VC ,RCLBELA,QCLBELA,8)
static A68_344   SCLBELA = {"Compiler input"}; 
A_GISVEC(A68_VC ,TCLBELA,SCLBELA,14)
static A68_345   YCLBELA = {"Unexpected option \""}; 
A_GISVEC(A68_VC ,ZCLBELA,YCLBELA,19)
static A68_347   JDLBELA = {"Extra argument \""}; 
A_GISVEC(A68_VC ,KDLBELA,JDLBELA,16)
static A68_341   TDLBELA = {"Library"}; 
A_GISVEC(A68_VC ,UDLBELA,TDLBELA,7)
static A68_348   CELBELA = {"   <file> = ELLA library"}; 
A_GISVEC(A68_VC ,DELBELA,CELBELA,24)
static A68_349   IELBELA = {"-c <file> = create new ELLA library"}; 
A_GISVEC(A68_VC ,JELBELA,IELBELA,35)
static A68_350   OELBELA = {"-i <file> = start reading input commands from <file>"}; 
A_GISVEC(A68_VC ,PELBELA,OELBELA,52)
static A68_352   VELBELA = {"Give ELLA library file name ([-i <file>] [-c] <file>): "}; 
A_GISVEC(A68_VC ,WELBELA,VELBELA,55)
static A68_353   BFLBELA = {"ELLA Library"}; 
A_GISVEC(A68_VC ,CFLBELA,BFLBELA,12)
static A68_288 * EFLBELA_outer_command;
static A68_289  FFLBELA_lib_globals;
static A68_289  IFLBELA_globals;
static A68_354   GGLBELA = {" finished"}; 
A_GISVEC(A68_VC ,HGLBELA,GGLBELA,9)

A_STATIC A68_VOID  NBLBELA_get_prompt(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XBLBELA_reset(void);

A_STATIC A68_BOOL  ACLBELA_check_arg(A68_VC  Arg, A68_136  Next);

A_STATIC A68_BOOL  WDLBELA_no_more(A68_BOOL  Ok);

A_STATIC A68_293 ** GFLBELA_anonymous(void);

A_STATIC A68_VOID  NBLBELA_get_prompt(A68_VC  *ReturnedValue)
{ 
A68_VC  OBLBELA;  /* clause result */
A_PROC_ENTRY(get_prompt);
OBLBELA = (*(*(&((*(&((*(&(MBLBELA_env->Stack)))->Current_context)))->Prompt))));
A_PROC_EXIT(get_prompt);
*ReturnedValue = (OBLBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XBLBELA_reset(void)
{ 
A_PROC_ENTRY(reset);
{ 
RBLBELA_create = SBLBELA_testmode = TBLBELA_silent = A68_FALSE;
 /* line 87: */
 /* line 88: */
UBLBELA_lib_fname = VBLBELA_in_fname = WBLBELA_comp_fname = EOAAOSL_nullstr;
} 
A_PROC_EXIT(reset);
return;
} 
#undef NL

A_STATIC A68_BOOL  ACLBELA_check_arg(A68_VC  Arg, A68_136  Next)
{ 
A68_BOOL  ECLBELA;  /* clause result */
A68_VC  GCLBELA;  /* avoid structure result */
A68_VC  PCLBELA;  /* avoid structure result */
A68_VC  UCLBELA;  /* avoid structure result */
A68_BOOL  VCLBELA;  /* optbool result */
A68_INT  WCLBELA;  /* YIELD */
A68_346  XCLBELA;  /* collateral clause result */
A68_52  ADLBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BDLBELA;  /* YIELD */
A68_52  CDLBELA;  /* OPERATORS - mode -> union mode */
A68_52  DDLBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  EDLBELA;  /* YIELD */
A68_52  FDLBELA;  /* OPERATORS - mode -> union mode */
A68_56  GDLBELA;  /* procedure value */
A68_85  HDLBELA;  /* OPERATORS - istruct -> vector */
A68_346  IDLBELA;  /* collateral clause result */
A68_52  LDLBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MDLBELA;  /* YIELD */
A68_52  NDLBELA;  /* OPERATORS - mode -> union mode */
A68_52  ODLBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  PDLBELA;  /* YIELD */
A68_52  QDLBELA;  /* OPERATORS - mode -> union mode */
A68_56  RDLBELA;  /* procedure value */
A68_85  SDLBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(check_arg);
 /* line 91: */
 /* line 92: */
if ( A_VC_EQ(Arg,CCLBELA) )
{ 
 /* line 93: */
A_CALLPROC(Next,( &GCLBELA),( &GCLBELA,(Next).nonlocals));
ECLBELA = RBLBELA_create = LJAAOST_filename_arg(GCLBELA, FCLBELA, UKDAOST_library_type, (&UBLBELA_lib_fname), A68_FALSE);
} 
else
{ 
if ( A_VC_EQ(Arg,ICLBELA) )
{ 
 /* line 94: */
ECLBELA = SBLBELA_testmode = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(Arg,KCLBELA) )
{ 
 /* line 95: */
ECLBELA = TBLBELA_silent = A68_TRUE;
} 
else
{ 
 /* line 96: */
if ( A_VC_EQ(Arg,MCLBELA) )
{ 
 /* line 97: */
A_CALLPROC(Next,( &PCLBELA),( &PCLBELA,(Next).nonlocals));
ECLBELA = LJAAOST_filename_arg(PCLBELA, OCLBELA, PLDAOST_infile_type, (&VBLBELA_in_fname), A68_TRUE);
} 
else
{ 
 /* line 98: */
if ( A_VC_EQ(Arg,RCLBELA) )
{ 
TBLBELA_silent = A68_TRUE;
 /* line 99: */
 /* line 100: */
A_CALLPROC(Next,( &UCLBELA),( &UCLBELA,(Next).nonlocals));
ECLBELA = LJAAOST_filename_arg(UCLBELA, TCLBELA, DLDAOST_source_type, (&WBLBELA_comp_fname), A68_TRUE);
} 
else
{ 
VCLBELA = (Arg.upb>=1);
if ( VCLBELA )
{ /* line 101: */
WCLBELA = 1 ;
VCLBELA = (A_VINDEX(Arg,WCLBELA)=='-');
}
if ( VCLBELA )
{ 
BDLBELA = ZCLBELA ;
XCLBELA.data[0] = A_UNITE(ADLBELA,mode7,7,BDLBELA);
XCLBELA.data[1] = A_UNITE(CDLBELA,mode7,7,Arg);
EDLBELA = '\"' ;
XCLBELA.data[2] = A_UNITE(DDLBELA,mode6,6,EDLBELA);
GDLBELA.fn.fn_global = LRAAOSL_newline;
GDLBELA.nonlocals = A68_NIL;
XCLBELA.data[3] = A_UNITE(FDLBELA,mode12,12,GDLBELA);
GFBAOSL_put(MEAAOST_err, A_HISVEC(HDLBELA,XCLBELA,4,A68_52 ));
 /* line 102: */
ECLBELA = A68_FALSE;
} 
else
{ 
 /* line 103: */
if ( (UBLBELA_lib_fname.upb>0) )
{ 
MDLBELA = KDLBELA ;
IDLBELA.data[0] = A_UNITE(LDLBELA,mode7,7,MDLBELA);
IDLBELA.data[1] = A_UNITE(NDLBELA,mode7,7,Arg);
PDLBELA = '\"' ;
IDLBELA.data[2] = A_UNITE(ODLBELA,mode6,6,PDLBELA);
RDLBELA.fn.fn_global = LRAAOSL_newline;
RDLBELA.nonlocals = A68_NIL;
IDLBELA.data[3] = A_UNITE(QDLBELA,mode12,12,RDLBELA);
GFBAOSL_put(MEAAOST_err, A_HISVEC(SDLBELA,IDLBELA,4,A68_52 ));
 /* line 104: */
ECLBELA = A68_FALSE;
} 
else
{ 
 /* line 105: */
ECLBELA = LJAAOST_filename_arg(Arg, UDLBELA, UKDAOST_library_type, (&UBLBELA_lib_fname), A68_TRUE);
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(check_arg);
return( ECLBELA );
} 
#undef NL

A_STATIC A68_BOOL  WDLBELA_no_more(A68_BOOL  Ok)
{ 
A68_BOOL  XDLBELA;  /* optbool result */
A68_BOOL  YDLBELA;  /* clause result */
A68_351  ZDLBELA;  /* collateral clause result */
A68_52  AELBELA;  /* OPERATORS - mode -> union mode */
A68_56  BELBELA;  /* procedure value */
A68_52  EELBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FELBELA;  /* YIELD */
A68_52  GELBELA;  /* OPERATORS - mode -> union mode */
A68_56  HELBELA;  /* procedure value */
A68_52  KELBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LELBELA;  /* YIELD */
A68_52  MELBELA;  /* OPERATORS - mode -> union mode */
A68_56  NELBELA;  /* procedure value */
A68_52  QELBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RELBELA;  /* YIELD */
A68_64  SELBELA;  /* avoid structure result */
A68_52  TELBELA;  /* OPERATORS - mode -> union mode */
A68_85  UELBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(no_more);
 /* line 109: */
XDLBELA = Ok;
if ( XDLBELA )
{ /* line 110: */
XDLBELA = (UBLBELA_lib_fname.upb>0);
}
if ( XDLBELA )
{ 
 /* line 111: */
YDLBELA = A68_TRUE;
} 
else
{ 
BELBELA.fn.fn_global = LRAAOSL_newline;
BELBELA.nonlocals = A68_NIL;
ZDLBELA.data[0] = A_UNITE(AELBELA,mode12,12,BELBELA);
 /* line 112: */
FELBELA = DELBELA ;
ZDLBELA.data[1] = A_UNITE(EELBELA,mode7,7,FELBELA);
HELBELA.fn.fn_global = LRAAOSL_newline;
HELBELA.nonlocals = A68_NIL;
ZDLBELA.data[2] = A_UNITE(GELBELA,mode12,12,HELBELA);
 /* line 113: */
LELBELA = JELBELA ;
ZDLBELA.data[3] = A_UNITE(KELBELA,mode7,7,LELBELA);
 /* line 114: */
NELBELA.fn.fn_global = LRAAOSL_newline;
NELBELA.nonlocals = A68_NIL;
ZDLBELA.data[4] = A_UNITE(MELBELA,mode12,12,NELBELA);
RELBELA = PELBELA ;
ZDLBELA.data[5] = A_UNITE(QELBELA,mode7,7,RELBELA);
HZAAOSL_lines( 2, &SELBELA );
ZDLBELA.data[6] = A_UNITE(TELBELA,mode20,20,SELBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UELBELA,ZDLBELA,7,A68_52 ));
 /* line 115: */
 /* line 116: */
YDLBELA = A68_FALSE;
} 
A_PROC_EXIT(no_more);
return( YDLBELA );
} 
#undef NL

A_STATIC A68_293 ** GFLBELA_anonymous(void)
{ 
A68_293 ** HFLBELA;  /* clause result */
HFLBELA = (&MBLBELA_env);
return( HFLBELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 9: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/ella.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/diagnostics.m","./mfiles/simcommands.m","./mfiles/textcommands.m","./mfiles/graphicscommands.m","./mfiles/compcommands.m","./mfiles/libcommands.m","/u/model/ella/ostools/assoc/mfiles/globalcommands.m","/u/model/ella/ostools/assoc/mfiles/commandcaller.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/ostools/assoc/mfiles/printissue.m","./mfiles/ellaversion.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/libprocs.m","./mfiles/libinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_148  PBLBELA;  /* avoid structure result */
A68_173  QBLBELA;  /* procedure value */
A68_143  XELBELA;  /* procedure value */
A68_154  YELBELA;  /* procedure value */
A68_155  ZELBELA;  /* procedure value */
A68_160  AFLBELA;  /* OPERATORS - mode -> union mode */
A68_201  DFLBELA;  /* procedure value */
A68_289  JFLBELA;  /* avoid structure result */
A68_143  KFLBELA;  /* procedure value */
A68_331  LFLBELA;  /* procedure value */
A68_289  MFLBELA;  /* avoid structure result */
A68_289  NFLBELA;  /* avoid structure result */
A68_289 * OFLBELA;  /* YIELD */
A68_289  PFLBELA;  /* avoid structure result */
A68_289  QFLBELA;  /* avoid structure result */
A68_289  RFLBELA;  /* avoid structure result */
A68_289  SFLBELA;  /* avoid structure result */
A68_289  TFLBELA;  /* avoid structure result */
A68_289  UFLBELA;  /* avoid structure result */
A68_289  VFLBELA;  /* avoid structure result */
A68_289  WFLBELA;  /* avoid structure result */
A68_289  XFLBELA;  /* avoid structure result */
A68_289  YFLBELA;  /* avoid structure result */
A68_295  ZFLBELA;  /* procedure value */
A68_296  AGLBELA;  /* procedure value */
A68_294  BGLBELA;  /* procedure value */
A68_278  CGLBELA;  /* avoid structure result */
A68_355  DGLBELA;  /* collateral clause result */
A68_VC  EGLBELA;  /* avoid structure result */
A68_52  FGLBELA;  /* OPERATORS - mode -> union mode */
A68_52  IGLBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JGLBELA;  /* YIELD */
A68_52  KGLBELA;  /* OPERATORS - mode -> union mode */
A68_56  LGLBELA;  /* procedure value */
A68_85  MGLBELA;  /* OPERATORS - istruct -> vector */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
ETKBELA();   /* USE diagnostics */
GEJBELA();   /* USE simcommands */
XBJBELA();   /* USE textcommands */
SHIBELA();   /* USE graphicscommands */
ZYHBELA();   /* USE compcommands */
DAGBELA();   /* USE libcommands */
DBHAOST();   /* USE globalcommands */
AYGAOST();   /* USE commandcaller */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
EGCAOST();   /* USE printissue */
HEAAELA();   /* USE ellaversion */
TIGAOST();   /* USE ioprocs */
ZSBBELA();   /* USE libprocs */
SOABELA();   /* USE libinterface */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/ella.a68";
A_config.translation_time = "Tue Apr  4 10:43:03 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "EBLBELA (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, IBLBELA);
 /* line 72: */
LBLBELA_ellasysdir = KBLBELA;
 /* line 73: */
 /* line 74: */
 /* line 76: */
VEAAELA_ellaversion(  &PBLBELA );
A_CALLPROC(TEAAOST_initialise_osinterface,(PBLBELA, A68_TRUE),(PBLBELA, A68_TRUE,(TEAAOST_initialise_osinterface).nonlocals));
 /* line 77: */
QBLBELA.fn.fn_global = NBLBELA_get_prompt;
QBLBELA.nonlocals = A68_NIL;
FXGAOST_initialise_ioprocs(QBLBELA);
 /* line 81: */
 /* line 82: */
UBLBELA_lib_fname = EOAAOSL_nullstr;
VBLBELA_in_fname = EOAAOSL_nullstr;
WBLBELA_comp_fname = EOAAOSL_nullstr;
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 90: */
 /* line 108: */
 /* line 119: */
 /* line 120: */
XELBELA.fn.fn_global = XBLBELA_reset;
XELBELA.nonlocals = A68_NIL;
YELBELA.fn.fn_global = ACLBELA_check_arg;
YELBELA.nonlocals = A68_NIL;
ZELBELA.fn.fn_global = WDLBELA_no_more;
ZELBELA.nonlocals = A68_NIL;
OMAAOST_parse_arguments(WELBELA, XELBELA, YELBELA, ZELBELA);
 /* line 122: */
QKCAOST_print_title(TBLBELA_silent);
 /* line 123: */
UHBAOST_set_testmode(A_UNITE(AFLBELA,mode1,1,SBLBELA_testmode));
 /* line 124: */
if ( !TBLBELA_silent )
{ 
SNGAOST_banner(CFLBELA);
} 
 /* line 128: */
if ( RBLBELA_create )
{ 
 /* line 129: */
EZBBELA_create_library(UBLBELA_lib_fname, ZLBAOSI_global_msg);
} 
else
{ 
 /* line 130: */
DFLBELA.fn.fn_global = CIBBELA_nullupdater;
DFLBELA.nonlocals = A68_NIL;
HIBBELA_open_library(UBLBELA_lib_fname, DFLBELA, ZLBAOSI_global_msg);
} 
 /* line 134: */
 /* line 135: */
if ( (WBLBELA_comp_fname.upb>0) )
{ 
HZHBELA_compile(WBLBELA_comp_fname, A68_FALSE, ZLBAOSI_global_msg);
 /* line 136: */
OJBBELA_finish_library(ZLBAOSI_global_msg);
 /* line 137: */
 /* line 138: */
BZBAOSI_exit(0);
} 
 /* line 142: */
EFLBELA_outer_command = QQGBELA_initialise_library();
 /* line 146: */
if ( (VBLBELA_in_fname.upb>0) )
{ 
CQGAOST_io_input(VBLBELA_in_fname, ZLBAOSI_global_msg);
} 
 /* line 150: */
FFLBELA_lib_globals = (*(&(EFLBELA_outer_command->Globals)));
 /* line 151: */
 /* line 152: */
 /* line 153: */
QUKBELA_make_diagnostics(  &JFLBELA );
KFLBELA.fn.fn_global = SKCAOST_print_issue;
KFLBELA.nonlocals = A68_NIL;
LFLBELA.fn.fn_global = GFLBELA_anonymous;
LFLBELA.nonlocals = A68_NIL;
OJHAOST_make_globalcommands( LBLBELA_ellasysdir, DLDAOST_source_type, KFLBELA, LFLBELA, &MFLBELA );
A_CALLPROC(GQDAOST_add,(MFLBELA, JFLBELA, &NFLBELA),(MFLBELA, JFLBELA, &NFLBELA,(GQDAOST_add).nonlocals));
IFLBELA_globals = NFLBELA;
 /* line 157: */
OFLBELA = (&(EFLBELA_outer_command->Globals)) ;
(*OFLBELA) = IFLBELA_globals;
 /* line 158: */
QQDAOST_addab( (&(EFLBELA_outer_command->Locals)), FFLBELA_lib_globals, &PFLBELA );
PFLBELA;
 /* line 159: */
QQDAOST_addab( (&IFLBELA_globals), FFLBELA_lib_globals, &QFLBELA );
QFLBELA;
 /* line 163: */
PGHAOST_add_globals_to_compounds(IFLBELA_globals, IFLBELA_globals);
 /* line 167: */
 /* line 168: */
 /* line 169: */
EUJBELA_make_simcommands( IFLBELA_globals, &RFLBELA );
CDJBELA_make_textcommands(  &SFLBELA );
EZIBELA_make_graphics_commands(  &TFLBELA );
REIBELA_make_compcommands(  &UFLBELA );
A_CALLPROC(GQDAOST_add,(UFLBELA, TFLBELA, &VFLBELA),(UFLBELA, TFLBELA, &VFLBELA,(GQDAOST_add).nonlocals));
A_CALLPROC(GQDAOST_add,(VFLBELA, SFLBELA, &WFLBELA),(VFLBELA, SFLBELA, &WFLBELA,(GQDAOST_add).nonlocals));
A_CALLPROC(GQDAOST_add,(WFLBELA, RFLBELA, &XFLBELA),(WFLBELA, RFLBELA, &XFLBELA,(GQDAOST_add).nonlocals));
QQDAOST_addab( (&(EFLBELA_outer_command->Locals)), XFLBELA, &YFLBELA );
YFLBELA;
 /* line 173: */
 /* line 174: */
 /* line 175: */
ZFLBELA.fn.fn_global = IYGAOST_report_error;
ZFLBELA.nonlocals = A68_NIL;
AGLBELA.fn.fn_global = YYGAOST_set_default_msg;
AGLBELA.nonlocals = A68_NIL;
BGLBELA.fn.fn_global = HZGAOST_call_command;
BGLBELA.nonlocals = A68_NIL;
MBLBELA_env = DPEAOST_initialise_commands(ZFLBELA, AGLBELA, ZLBAOSI_global_msg, BGLBELA, UFGAOST_make_kernel_readers(), EFLBELA_outer_command, ASAAOST_no_parameters);
 /* line 177: */
FSEAOST_interpret_commands( MBLBELA_env, &CGLBELA );
CGLBELA;
 /* line 179: */
UEAAOST_facility(  &EGLBELA );
DGLBELA.data[0] = A_UNITE(FGLBELA,mode7,7,EGLBELA);
JGLBELA = HGLBELA ;
DGLBELA.data[1] = A_UNITE(IGLBELA,mode7,7,JGLBELA);
LGLBELA.fn.fn_global = LRAAOSL_newline;
LGLBELA.nonlocals = A68_NIL;
DGLBELA.data[2] = A_UNITE(KGLBELA,mode12,12,LGLBELA);
 /* line 181: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(MGLBELA,DGLBELA,3,A68_52 ));
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/ella.a68 */
