
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
/* UNAME:RHIBELA */
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
struct A68t173{
struct A68t174 * Database;
A68_VC  Description;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE174,REF MODE26)  */
struct A68t174{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t175 * Df;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE175)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
struct A68t176{
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
typedef struct A68t176  A68_176 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t182 ,A68t181);
typedef struct A68t181  A68_181 ;    /* VECTOR [] MODE182 */
struct A68t183{
A68_INT  Block_num;
A_PAD_INT(PAD_43)
A68_INT  Offset;
A_PAD_INT(PAD_44)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT)  */
struct A68t182{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_45)
struct A68t183  Address;
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
typedef struct A68t182  A68_182 ;    /* STRUCT(BOOL,MODE183,INT,INT,INT,INT,INT)  */
struct A68t175{
struct A68t176 * Root;
struct A68t176 * Indirs_dp;
struct A68t176 * Freelist_dp;
struct A68t176 * Pagetable_dp;
struct A68t176 * Append_dp;
struct A68t177  Free_block_dps;
struct A68t177  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t178 * Write_buffer;
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
struct A68t179 * Gc_ptrs;
struct A68t180 * Instore_vars;
struct A68t181  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE176,REF MODE176,REF MODE176,REF MODE176,REF MODE176,REF MODE177,REF MODE177,REF REF MODE111,REF REF MODE111,REF MODE178,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE179,REF MODE180,REF MODE181,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t178{
A68_VC  Buffer;
struct A68t184 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE26,REF MODE184,REF INT,REF INT,REF INT)  */
struct A68t179{
struct A68t183  Old;
struct A68t183  New;
struct A68t179 * Rest;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE183,MODE183,REF MODE179)  */
struct A68t180{
A68_INT  Indirection;
A_PAD_INT(PAD_51)
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t184{
A68_INT  Lwb;
A_PAD_INT(PAD_52)
A68_INT  Upb;
A_PAD_INT(PAD_53)
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,REF MODE184)  */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t173 *,struct A68t176 ),(struct A68t173 *,struct A68t176 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE173,MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT) MODE92 */
struct A68t187{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_54)
A68_BOOL  Login;
A_PAD_BOOL(PAD_55)
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE187)  */
struct A68t188{
A68_INT  Key;
A_PAD_INT(PAD_56)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_57)
struct A68t32  Version;
struct A68t177  Data;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE177,REF MODE188)  */
struct A68t189{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_59)
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE189)  */
struct A68t190{
A68_INT  Sort;
A_PAD_INT(PAD_60)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_61)
A68_BOOL  Import;
A_PAD_BOOL(PAD_62)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_63)
A68_INT  Version;
A_PAD_INT(PAD_64)
A68_VC  Il;
struct A68t189 * Uses;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE189)  */
struct A68t191{
struct A68t158  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_65)
struct A68t176  Info;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE158,REF MODE26,REF MODE26,INT,MODE176)  */
struct A68t192{
struct A68t191  Binding;
struct A68t192 * Rest;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE191,REF MODE192)  */
struct A68t193{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_66)
struct A68t192 * Imports;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE26,INT,REF MODE192)  */
struct A68t194{
struct A68t193  Region;
struct A68t194 * Rest;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE193,REF MODE194)  */
A_VECTOR(struct A68t190 ,A68t196);
typedef struct A68t196  A68_196 ;    /* VECTOR [] MODE190 */
struct A68t195{
A68_VC  Name;
struct A68t176  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_67)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_68)
struct A68t196  Decls;
struct A68t188 * Declattributes;
struct A68t194 * Regions;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE26,MODE176,BOOL,BOOL,REF MODE196,REF MODE188,REF MODE194)  */
struct A68t197{
struct A68t195  Context;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE195,REF MODE197)  */
struct A68t198{
A68_VC  Name;
struct A68t111 * File;
struct A68t173 * Discfile;
struct A68t158  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_69)
struct A68t177  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_70)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t187 * Classes;
struct A68t197 * Contexts;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,REF MODE111,REF MODE173,MODE158,REF MODE26,BOOL,MODE177,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE187,REF MODE197)  */

A_PROCEDURE(A68_VOID ,A68t199,(A68_BOOL ,struct A68t198 *),(A68_BOOL ,struct A68t198 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(BOOL) MODE198 */
struct A68t200{
struct A68t195 * Context;
struct A68t193 * Region;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE195,REF MODE193)  */
struct A68t201{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_71)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t202,(struct A68t158 ,struct A68t158 ),(struct A68t158 ,struct A68t158 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE158,MODE158) BOOL */

A_PROCEDURE(A68_BOOL ,A68t203,(struct A68t200 ,struct A68t200 ),(struct A68t200 ,struct A68t200 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE200,MODE200) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t158 ,A68_VC *),(struct A68t158 ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE158) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t200 ,A68_VC *),(struct A68t200 ,A68_VC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE200) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t200 ,struct A68t158 *),(struct A68t200 ,struct A68t158 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE200) MODE158 */

A_PROCEDURE(A68_BOOL ,A68t207,(struct A68t195 *,struct A68t97 ),(struct A68t195 *,struct A68t97 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE195,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t198 *,A68t209,(void),(void *));
typedef struct A68t209  A68_209 ;    /* PROC REF MODE198 */

A_PROCEDURE(struct A68t195 *,A68t210,(A68_VC ),(A68_VC ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE26) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t195 *,A68_VC ,struct A68t200 *),(struct A68t195 *,A68_VC ,struct A68t200 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE195,REF MODE26) MODE200 */

A_PROCEDURE(struct A68t192 *,A68t212,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE200) REF MODE192 */

A_PROCEDURE(struct A68t191 *,A68t213,(struct A68t200 ,A68_VC ),(struct A68t200 ,A68_VC ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE200,REF MODE26) REF MODE191 */

A_PROCEDURE(struct A68t195 *,A68t214,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE26,MODE97) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t195 *,A68_VC ,struct A68t97 ,struct A68t200 *),(struct A68t195 *,A68_VC ,struct A68t97 ,struct A68t200 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE195,REF MODE26,MODE97) MODE200 */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t158 ,struct A68t97 ,struct A68t200 *),(struct A68t158 ,struct A68t97 ,struct A68t200 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE158,MODE97) MODE200 */

A_PROCEDURE(struct A68t191 *,A68t217,(struct A68t200 ,A68_VC ,struct A68t97 ),(struct A68t200 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE200,REF MODE26,MODE97) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t219,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t176 *,struct A68t176 *,struct A68t176 *,struct A68t97 ),(struct A68t176 *,struct A68t176 *,struct A68t176 *,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE176,REF MODE176,REF MODE176,MODE97) VOID */

A_PROCEDURE(struct A68t197 *,A68t221,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE97) REF MODE197 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t196 ,struct A68t97 ,struct A68t176 *),(struct A68t196 ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE196,MODE97) MODE176 */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t195 *,struct A68t97 ,struct A68t196 *),(struct A68t195 *,struct A68t97 ,struct A68t196 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE195,MODE97) REF MODE196 */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t196 ),(struct A68t196 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE196) VOID */

A_PROCEDURE(A68_INT ,A68t225,(struct A68t195 *,A68_VC ,struct A68t97 ),(struct A68t195 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE195,REF MODE26,MODE97) INT */

A_PROCEDURE(struct A68t201 *,A68t226,(struct A68t195 *,A68_INT ),(struct A68t195 *,A68_INT ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE195,INT) REF MODE201 */

A_PROCEDURE(struct A68t201 *,A68t227,(struct A68t200 ,A68_VC ),(struct A68t200 ,A68_VC ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE200,REF MODE26) REF MODE201 */

A_PROCEDURE(A68_VOID ,A68t228,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t229,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t173 *,struct A68t228 ,struct A68t97 ),(struct A68t173 *,struct A68t228 ,struct A68t97 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE173,MODE228,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(A68_VC ,struct A68t228 ,struct A68t97 ),(A68_VC ,struct A68t228 ,struct A68t97 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE26,MODE228,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t232,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t233,(A68_VC ,struct A68t196 ),(A68_VC ,struct A68t196 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE26,REF MODE196) INT */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t195 *,struct A68t196 ,A68_INT ,struct A68t97 ),(struct A68t195 *,struct A68t196 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE195,REF MODE196,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t235,(A68_INT ,struct A68t200 *),(A68_INT ,struct A68t200 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(INT) MODE200 */

A_PROCEDURE(A68_INT ,A68t236,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE200) INT */

A_PROCEDURE(A68_INT ,A68t237,(struct A68t200 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t200 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE200,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t97 ,struct A68t176 *),(struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE97) MODE176 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t158 ,struct A68t97 ),(struct A68t158 ,struct A68t97 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE158,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t200 ,A68_INT ,struct A68t97 ),(struct A68t200 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE200,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t200 ,struct A68t97 ),(struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE200,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t195 *,A68_VC ,struct A68t97 ),(struct A68t195 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE195,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t200 ,A68_VC ,struct A68t97 ),(struct A68t200 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE200,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t195 *,struct A68t97 ),(struct A68t195 *,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE195,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t195 *,A68_INT ,struct A68t97 ),(struct A68t195 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE195,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t200 ,struct A68t176 ,struct A68t97 ),(struct A68t200 ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE200,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t195 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t195 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE195,INT,BOOL,BOOL,MODE97) VOID */
struct A68t249{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_72)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_73)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_74)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_75)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_76)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_77)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_78)
A68_INT  Width;
A_PAD_INT(PAD_79)
A68_INT  Page_count;
A_PAD_INT(PAD_80)
A68_INT  Page_length;
A_PAD_INT(PAD_81)
A68_INT  Eof_count;
A_PAD_INT(PAD_82)
struct A68t250 * Standard_reader;
struct A68t251 * Infile;
struct A68t170  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE250,REF MODE251,MODE170,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t252,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t250{
A68_VC  Rdbuffer;
struct A68t252  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_83)
A68_INT  Rdcharno;
A_PAD_INT(PAD_84)
A68_INT  Start_of_word;
A_PAD_INT(PAD_85)
struct A68t253 * Stack;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE26,MODE252,INT,INT,INT,REF MODE253)  */
struct A68t251{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_86)
A68_INT  Number;
A_PAD_INT(PAD_87)
A68_VC  Name;
struct A68t250 * Reader;
struct A68t251 * Previous;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE250,REF MODE251)  */
struct A68t253{
A68_VC  Line;
struct A68t253 * Rest;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(REF MODE26,REF MODE253)  */

A_PROCEDURE(struct A68t249 *,A68t254,(void),(void *));
typedef struct A68t254  A68_254 ;    /* PROC REF MODE249 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE170) VOID */
struct A68t257{
A68_BITS  Options;
A_PAD_BITS(PAD_88)
};
typedef struct A68t257  A68_257 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t257 ,struct A68t257 ,struct A68t257 *),(struct A68t257 ,struct A68t257 ,struct A68t257 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE257,MODE257) MODE257 */

A_PROCEDURE(struct A68t257 *,A68t259,(struct A68t257 *,struct A68t257 ),(struct A68t257 *,struct A68t257 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE257,MODE257) REF MODE257 */

A_PROCEDURE(A68_BOOL ,A68t260,(struct A68t257 ,struct A68t257 ),(struct A68t257 ,struct A68t257 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE257,MODE257) BOOL */

A_PROCEDURE(A68_BOOL ,A68t261,(struct A68t257 ,A68_INT ),(struct A68t257 ,A68_INT ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE257,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t262,(A68_INT ,struct A68t257 *),(A68_INT ,struct A68t257 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(INT) MODE257 */

A_PROCEDURE(A68_INT ,A68t263,(struct A68t200 ,struct A68t97 ),(struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE200,MODE97) INT */
struct A68t265 ;
struct A68t266 ;

A_PROCEDURE(struct A68t265 *,A68t264,(struct A68t266 *,A68_BOOL ,struct A68t97 ),(struct A68t266 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE266,BOOL,MODE97) REF MODE265 */
struct A68t265{
A68_INT  Max_closureno;
A_PAD_INT(PAD_89)
struct A68t267 * Outers;
struct A68t267 * Freelist;
struct A68t268 * Outerslist;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,REF MODE267,REF MODE267,REF MODE268)  */
struct A68t266{
struct A68t200  Cregion;
A68_VC  Fnname;
struct A68t266 * Rest;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE200,REF MODE26,REF MODE266)  */
struct A68t270{
A68_INT  Closureno;
A_PAD_INT(PAD_90)
A68_INT  Sort;
A_PAD_INT(PAD_91)
struct A68t271 * Environ;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT,INT,REF MODE271)  */
struct A68t267{
struct A68t270  Outer;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE270,REF MODE267)  */
A_VECTOR(struct A68t267 ,A68t269);
typedef struct A68t269  A68_269 ;    /* VECTOR [] MODE267 */
struct A68t268{
struct A68t269  Outers;
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(REF MODE269,REF MODE268)  */
A_VECTOR(struct A68t404 *,A68t272);
typedef struct A68t272  A68_272 ;    /* VECTOR [] REF MODE404 */
A_VECTOR(struct A68t402 *,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] REF MODE402 */
A_VECTOR(struct A68t396 *,A68t274);
typedef struct A68t274  A68_274 ;    /* VECTOR [] REF MODE396 */
A_VECTOR(struct A68t395 *,A68t275);
typedef struct A68t275  A68_275 ;    /* VECTOR [] REF MODE395 */
A_VECTOR(struct A68t277 *,A68t276);
typedef struct A68t276  A68_276 ;    /* VECTOR [] REF MODE277 */
struct A68t271{
struct A68t272  Attrs;
struct A68t273  Ints;
struct A68t274  Types;
struct A68t275  Consts;
struct A68t276  Fns;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276)  */
A_VECTOR(struct A68t393 ,A68t278);
typedef struct A68t278  A68_278 ;    /* VECTOR [] MODE393 */
struct A68t337{
A68_INT  Attrno;
A_PAD_INT(PAD_92)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(INT)  */
struct A68t338{
A68_INT  Intno;
A_PAD_INT(PAD_93)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(INT)  */
struct A68t339{
A68_INT  Typeno;
A_PAD_INT(PAD_94)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(INT)  */
struct A68t300{
A68_INT  Constno;
A_PAD_INT(PAD_95)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT)  */
struct A68t340{
A68_INT  Fnno;
A_PAD_INT(PAD_96)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(INT)  */
struct A68t394 { A68_INT mode; union {
struct A68t337  mode1;
struct A68t338  mode2;
struct A68t339  mode3;
struct A68t300  mode4;
struct A68t340  mode5;
} data; };
typedef struct A68t394  A68_394 ;    /* UNION(MODE337,MODE338,MODE339,MODE300,MODE340)  */
struct A68t393{
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t394  Spec;
};
typedef struct A68t393  A68_393 ;    /* STRUCT(INT,MODE394)  */
struct A68t279 { A68_INT mode; union {
struct A68t337 * mode1;
struct A68t388 * mode2;
struct A68t389 * mode3;
struct A68t390 * mode4;
struct A68t391 * mode5;
} data; };
typedef struct A68t279  A68_279 ;    /* UNION(REF MODE337,REF MODE388,REF MODE389,REF MODE390,REF MODE391)  */
A_VECTOR(struct A68t387 ,A68t281);
typedef struct A68t281  A68_281 ;    /* VECTOR [] MODE387 */
struct A68t367 { A68_INT mode; union {
struct A68t339 * mode1;
struct A68t368 * mode2;
struct A68t369 * mode3;
struct A68t370 * mode4;
struct A68t306 * mode5;
struct A68t371 * mode6;
struct A68t372 * mode7;
struct A68t373 * mode8;
struct A68t374 * mode9;
} data; };
typedef struct A68t367  A68_367 ;    /* UNION(REF MODE339,REF MODE368,REF MODE369,REF MODE370,REF MODE306,REF MODE371,REF MODE372,REF MODE373,REF MODE374)  */
struct A68t387{
A68_VC  Name;
struct A68t367  Type;
struct A68t279  Attr;
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE26,MODE367,MODE279)  */
struct A68t282 { A68_INT mode; union {
struct A68t284 * mode1;
struct A68t285 * mode2;
struct A68t286 * mode3;
struct A68t287 * mode4;
struct A68t288 * mode5;
struct A68t289 * mode6;
struct A68t290 * mode7;
struct A68t291 * mode8;
struct A68t292 * mode9;
struct A68t293 * mode10;
struct A68t294 * mode11;
struct A68t295 * mode12;
} data; };
typedef struct A68t282  A68_282 ;    /* UNION(REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295)  */
struct A68t277{
A68_INT  Sort;
A_PAD_INT(PAD_98)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_99)
A68_VC  Fnname;
struct A68t278  Macspecs;
struct A68t279  Attr;
struct A68t280 * Inputs;
struct A68t280 * Outputs;
struct A68t281  Nametypes;
struct A68t282  Fnbody;
struct A68t283 * Usage;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE278,MODE279,REF MODE280,REF MODE280,REF MODE281,MODE282,REF MODE283)  */
struct A68t280{
A68_INT  Nameno;
A_PAD_INT(PAD_100)
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,REF MODE280)  */
struct A68t283{
A68_INT  Contextno;
A_PAD_INT(PAD_101)
A68_INT  Closureno;
A_PAD_INT(PAD_102)
A68_INT  Libv_spec;
A_PAD_INT(PAD_103)
A68_INT  Libv_body;
A_PAD_INT(PAD_104)
A68_BOOL  Import;
A_PAD_BOOL(PAD_105)
A68_BOOL  Export;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t299 { A68_INT mode; union {
struct A68t300 * mode1;
struct A68t301 * mode2;
struct A68t302 * mode3;
struct A68t303 * mode4;
struct A68t304 * mode5;
struct A68t305 * mode6;
struct A68t306 * mode7;
struct A68t307 * mode8;
struct A68t308 * mode9;
struct A68t309 * mode10;
struct A68t310 * mode11;
struct A68t311 * mode12;
struct A68t312 * mode13;
struct A68t313 * mode14;
struct A68t314 * mode15;
struct A68t315 * mode16;
struct A68t316 * mode17;
struct A68t317 * mode18;
struct A68t318 * mode19;
struct A68t319 * mode20;
struct A68t320 * mode21;
struct A68t321 * mode22;
struct A68t322 * mode23;
struct A68t323 * mode24;
struct A68t324 * mode25;
struct A68t325 * mode26;
struct A68t326 * mode27;
struct A68t327 * mode28;
struct A68t328 * mode29;
struct A68t329 * mode30;
struct A68t330 * mode31;
struct A68t331 * mode32;
struct A68t332 * mode33;
struct A68t333 * mode34;
} data; };
typedef struct A68t299  A68_299 ;    /* UNION(REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE307,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE318,REF MODE319,REF MODE320,REF MODE321,REF MODE322,REF MODE323,REF MODE324,REF MODE325,REF MODE326,REF MODE327,REF MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE332,REF MODE333)  */
struct A68t284{
struct A68t299  Tag;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE299)  */
A_VECTOR(struct A68t383 ,A68t382);
typedef struct A68t382  A68_382 ;    /* VECTOR [] MODE383 */
struct A68t385{
struct A68t279  Tag;
};
typedef struct A68t385  A68_385 ;    /* STRUCT(MODE279)  */
struct A68t298 { A68_INT mode; union {
struct A68t375 * mode1;
struct A68t334 * mode2;
struct A68t376 * mode3;
struct A68t338 * mode4;
struct A68t377 * mode5;
struct A68t378 * mode6;
struct A68t379 * mode7;
struct A68t380 * mode8;
struct A68t373 * mode9;
struct A68t381 * mode10;
} data; };
typedef struct A68t298  A68_298 ;    /* UNION(REF MODE375,REF MODE334,REF MODE376,REF MODE338,REF MODE377,REF MODE378,REF MODE379,REF MODE380,REF MODE373,REF MODE381)  */
struct A68t352{
struct A68t298  Tag;
};
typedef struct A68t352  A68_352 ;    /* STRUCT(MODE298)  */
struct A68t386{
struct A68t367  Tag;
};
typedef struct A68t386  A68_386 ;    /* STRUCT(MODE367)  */
struct A68t297{
A68_INT  Fnno;
A_PAD_INT(PAD_107)
struct A68t382  Macparams;
struct A68t279  Attr;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,REF MODE382,MODE279)  */
struct A68t384 { A68_INT mode; union {
struct A68t385  mode1;
struct A68t352  mode2;
struct A68t386  mode3;
struct A68t284  mode4;
struct A68t297  mode5;
} data; };
typedef struct A68t384  A68_384 ;    /* UNION(MODE385,MODE352,MODE386,MODE284,MODE297)  */
struct A68t383{
A68_INT  Sort;
A_PAD_INT(PAD_108)
struct A68t384  Param;
};
typedef struct A68t383  A68_383 ;    /* STRUCT(INT,MODE384)  */
struct A68t285{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_109)
A68_VC  Name;
struct A68t382  Macparams;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(BOOL,REF MODE26,REF MODE382)  */
struct A68t286{
struct A68t298  Output;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE298)  */
struct A68t287{
A68_INT  Reform;
A_PAD_INT(PAD_110)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT)  */
struct A68t288{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_111)
struct A68t158  Ctname;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t289{
A68_INT  Sort;
A_PAD_INT(PAD_112)
struct A68t299  Init;
struct A68t298  Ambigtime;
struct A68t299  Ambig;
struct A68t298  Delaytime;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT,MODE299,MODE298,MODE299,MODE298)  */
struct A68t290{
struct A68t299  Init;
struct A68t298  Delaytime;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE299,MODE298)  */
struct A68t291{
struct A68t299  Init;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE299)  */
struct A68t292{
A68_INT  Sort;
A_PAD_INT(PAD_113)
struct A68t298  Interval;
struct A68t299  Init;
struct A68t298  Skew;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,MODE298,MODE299,MODE298)  */
struct A68t293{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_114)
A68_INT  Sort;
A_PAD_INT(PAD_115)
struct A68t297  Inst;
struct A68t298  Scale;
struct A68t299  Init;
struct A68t298  Skew;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(BOOL,INT,MODE297,MODE298,MODE299,MODE298)  */
struct A68t294{
struct A68t296 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_116)
struct A68t282  Fnbody;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE296,BOOL,MODE282)  */
struct A68t295{
A68_INT  Bodynull;
A_PAD_INT(PAD_117)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT)  */
struct A68t296{
A68_INT  Int;
A_PAD_INT(PAD_118)
struct A68t296 * Rest;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,REF MODE296)  */
struct A68t301{
A68_INT  Typeno;
A_PAD_INT(PAD_119)
A68_INT  Primno;
A_PAD_INT(PAD_120)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,INT)  */
struct A68t302{
A68_INT  Typeno;
A_PAD_INT(PAD_121)
struct A68t298  Index;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,MODE298)  */
struct A68t303{
struct A68t367  Querytype;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE367)  */
struct A68t304{
A68_INT  Typeno;
A_PAD_INT(PAD_122)
struct A68t32  String;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t305{
A68_INT  Cvoid;
A_PAD_INT(PAD_123)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(INT)  */
struct A68t306{
struct A68t367  Type;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE367)  */
struct A68t366{
struct A68t298  Lwb;
struct A68t298  Upb;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(MODE298,MODE298)  */
struct A68t307{
A68_INT  Typeno;
A_PAD_INT(PAD_124)
struct A68t366  Range;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT,MODE366)  */
struct A68t308{
A68_INT  Typeno;
A_PAD_INT(PAD_125)
A68_INT  Firstno;
A_PAD_INT(PAD_126)
A68_INT  Lastno;
A_PAD_INT(PAD_127)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(INT,INT,INT)  */
struct A68t309{
struct A68t299  Alt;
struct A68t309 * Rest;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE299,REF MODE309)  */
struct A68t310{
A68_INT  Sort;
A_PAD_INT(PAD_128)
A68_INT  Nameno;
A_PAD_INT(PAD_129)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(INT,INT)  */
struct A68t311{
struct A68t299  Sink;
struct A68t299  Source;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE299,MODE299)  */
struct A68t312{
A68_INT  Typeno;
A_PAD_INT(PAD_130)
A68_INT  Altno;
A_PAD_INT(PAD_131)
struct A68t299  Assoc;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT,INT,MODE299)  */
struct A68t313{
struct A68t299  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_132)
A68_INT  Altno;
A_PAD_INT(PAD_133)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE299,INT,INT)  */
struct A68t314{
struct A68t299  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_134)
A68_INT  Nameno;
A_PAD_INT(PAD_135)
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE299,INT,INT)  */
struct A68t315{
struct A68t299  Unit;
struct A68t298  Index;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE299,MODE298)  */
struct A68t316{
struct A68t299  Unit;
struct A68t366  Range;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE299,MODE366)  */
struct A68t317{
struct A68t299  Unit;
struct A68t299  Index;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE299,MODE299)  */
struct A68t318{
struct A68t299  Unit;
struct A68t299  Index;
struct A68t299  From;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE299,MODE299,MODE299)  */
struct A68t319{
struct A68t298  Size;
struct A68t299  Elem;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE298,MODE299)  */
struct A68t320{
struct A68t299  Elem;
struct A68t320 * Rest;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE299,REF MODE320)  */
struct A68t321{
A68_BOOL  String;
A_PAD_BOOL(PAD_136)
A68_INT  Sort;
A_PAD_INT(PAD_137)
struct A68t299  Left;
struct A68t299  Right;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(BOOL,INT,MODE299,MODE299)  */
struct A68t322{
struct A68t297  Inst;
struct A68t299  Right;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE297,MODE299)  */
struct A68t323{
struct A68t299  Left;
struct A68t297  Inst;
struct A68t299  Right;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE299,MODE297,MODE299)  */
struct A68t324{
struct A68t299  Input;
struct A68t365 * Choices;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE299,REF MODE365)  */
struct A68t325{
struct A68t298  Cond;
struct A68t299  True;
struct A68t299  False;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE298,MODE299,MODE299)  */
struct A68t326{
struct A68t298  Repl;
struct A68t299  Body;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE298,MODE299)  */
struct A68t327{
struct A68t353 * Body;
struct A68t299  Output;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE353,MODE299)  */
struct A68t328{
struct A68t335 * Body;
struct A68t299  Output;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE335,MODE299)  */
struct A68t329{
struct A68t299  Unit;
struct A68t279  Attr;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE299,MODE279)  */
struct A68t334{
A68_INT  Sort;
A_PAD_INT(PAD_138)
struct A68t298  Test;
struct A68t298  Standard;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(INT,MODE298,MODE298)  */
struct A68t330{
struct A68t299  Unit;
struct A68t334  Check;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE299,MODE334)  */
struct A68t331{
struct A68t299  Unit;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(MODE299)  */
struct A68t332{
struct A68t298  Size;
struct A68t299  Char;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE298,MODE299)  */
struct A68t333{
A68_INT  Unull;
A_PAD_INT(PAD_139)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(INT)  */
struct A68t336 { A68_INT mode; union {
struct A68t337  mode1;
struct A68t338  mode2;
struct A68t339  mode3;
struct A68t300  mode4;
struct A68t340  mode5;
struct A68t341 * mode6;
struct A68t342 * mode7;
struct A68t343 * mode8;
struct A68t344 * mode9;
struct A68t345 * mode10;
struct A68t346 * mode11;
struct A68t347 * mode12;
} data; };
typedef struct A68t336  A68_336 ;    /* UNION(MODE337,MODE338,MODE339,MODE300,MODE340,REF MODE341,REF MODE342,REF MODE343,REF MODE344,REF MODE345,REF MODE346,REF MODE347)  */
struct A68t335{
struct A68t336  Step;
struct A68t335 * Rest;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(MODE336,REF MODE335)  */
struct A68t341{
struct A68t298  Cond;
struct A68t350 * Print;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(MODE298,REF MODE350)  */
struct A68t342{
struct A68t298  Cond;
struct A68t350 * Fault;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(MODE298,REF MODE350)  */
struct A68t343{
struct A68t280 * Letnames;
struct A68t299  Unit;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(REF MODE280,MODE299)  */
struct A68t344{
struct A68t348 * Sizes;
struct A68t297  Inst;
struct A68t280 * Makenames;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(REF MODE348,MODE297,REF MODE280)  */
struct A68t345{
struct A68t299  From;
struct A68t299  To;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(MODE299,MODE299)  */
struct A68t346{
struct A68t348 * Repls;
struct A68t349 * Joins;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE348,REF MODE349)  */
struct A68t347{
A68_INT  Stepnull;
A_PAD_INT(PAD_140)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(INT)  */
struct A68t348{
struct A68t298  Formula;
struct A68t348 * Rest;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE298,REF MODE348)  */
struct A68t349{
struct A68t345  Join;
struct A68t349 * Rest;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(MODE345,REF MODE349)  */
struct A68t351 { A68_INT mode; union {
A68_VC  mode1;
struct A68t352 * mode2;
} data; };
typedef struct A68t351  A68_351 ;    /* UNION(REF MODE26,REF MODE352)  */
struct A68t350{
struct A68t351  Item;
struct A68t350 * Rest;
};
typedef struct A68t350  A68_350 ;    /* STRUCT(MODE351,REF MODE350)  */
struct A68t354 { A68_INT mode; union {
struct A68t337  mode1;
struct A68t338  mode2;
struct A68t339  mode3;
struct A68t300  mode4;
struct A68t340  mode5;
struct A68t341 * mode6;
struct A68t342 * mode7;
struct A68t355 * mode8;
struct A68t356 * mode9;
struct A68t357 * mode10;
struct A68t358 * mode11;
struct A68t359 * mode12;
struct A68t360 * mode13;
struct A68t361 * mode14;
struct A68t362 * mode15;
struct A68t353 * mode16;
struct A68t363 * mode17;
} data; };
typedef struct A68t354  A68_354 ;    /* UNION(MODE337,MODE338,MODE339,MODE300,MODE340,REF MODE341,REF MODE342,REF MODE355,REF MODE356,REF MODE357,REF MODE358,REF MODE359,REF MODE360,REF MODE361,REF MODE362,REF MODE353,REF MODE363)  */
struct A68t353{
struct A68t354  Step;
struct A68t353 * Rest;
};
typedef struct A68t353  A68_353 ;    /* STRUCT(MODE354,REF MODE353)  */
struct A68t355{
struct A68t343  Seqlet;
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE343)  */
struct A68t356{
struct A68t343  Seqvar;
};
typedef struct A68t356  A68_356 ;    /* STRUCT(MODE343)  */
struct A68t357{
struct A68t280 * Pvarnames;
struct A68t299  Init;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(REF MODE280,MODE299)  */
struct A68t358{
struct A68t299  To;
struct A68t299  From;
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE299,MODE299)  */
struct A68t359{
struct A68t299  Input;
struct A68t364 * Choices;
};
typedef struct A68t359  A68_359 ;    /* STRUCT(MODE299,REF MODE364)  */
struct A68t360{
struct A68t298  Cond;
struct A68t354  True;
struct A68t354  False;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(MODE298,MODE354,MODE354)  */
struct A68t361{
struct A68t298  Repl;
struct A68t354  Body;
};
typedef struct A68t361  A68_361 ;    /* STRUCT(MODE298,MODE354)  */
struct A68t362{
A68_INT  Seqnull;
A_PAD_INT(PAD_141)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(INT)  */
struct A68t363{
struct A68t298  Size;
struct A68t354  Elem;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(MODE298,MODE354)  */
struct A68t364{
A68_BOOL  Check;
A_PAD_BOOL(PAD_142)
A68_INT  Sort;
A_PAD_INT(PAD_143)
struct A68t299  Test;
struct A68t354  Output;
struct A68t364 * Rest;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(BOOL,INT,MODE299,MODE354,REF MODE364)  */
struct A68t365{
A68_BOOL  Check;
A_PAD_BOOL(PAD_144)
A68_INT  Sort;
A_PAD_INT(PAD_145)
struct A68t299  Test;
struct A68t299  Output;
struct A68t365 * Rest;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(BOOL,INT,MODE299,MODE299,REF MODE365)  */
struct A68t368{
struct A68t298  Size;
struct A68t367  Elem;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(MODE298,MODE367)  */
struct A68t369{
struct A68t367  Elem;
struct A68t369 * Rest;
};
typedef struct A68t369  A68_369 ;    /* STRUCT(MODE367,REF MODE369)  */
struct A68t370{
struct A68t367  From;
struct A68t367  To;
};
typedef struct A68t370  A68_370 ;    /* STRUCT(MODE367,MODE367)  */
struct A68t371{
struct A68t298  Size;
struct A68t367  Char;
};
typedef struct A68t371  A68_371 ;    /* STRUCT(MODE298,MODE367)  */
struct A68t372{
A68_INT  Tvoid;
A_PAD_INT(PAD_146)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(INT)  */
struct A68t373{
A68_INT  Macparno;
A_PAD_INT(PAD_147)
};
typedef struct A68t373  A68_373 ;    /* STRUCT(INT)  */
struct A68t374{
A68_INT  Tnull;
A_PAD_INT(PAD_148)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(INT)  */
struct A68t375{
A68_INT  Int;
A_PAD_INT(PAD_149)
A68_VC  Text;
};
typedef struct A68t375  A68_375 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t376{
A68_INT  Nameno;
A_PAD_INT(PAD_150)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(INT)  */
struct A68t377{
struct A68t298  Left;
A68_INT  Sort;
A_PAD_INT(PAD_151)
struct A68t298  Right;
};
typedef struct A68t377  A68_377 ;    /* STRUCT(MODE298,INT,MODE298)  */
struct A68t378{
A68_INT  Sort;
A_PAD_INT(PAD_152)
struct A68t298  Right;
};
typedef struct A68t378  A68_378 ;    /* STRUCT(INT,MODE298)  */
struct A68t379{
struct A68t298  Cond;
struct A68t298  True;
struct A68t298  False;
};
typedef struct A68t379  A68_379 ;    /* STRUCT(MODE298,MODE298,MODE298)  */
struct A68t380{
struct A68t298  Formula;
};
typedef struct A68t380  A68_380 ;    /* STRUCT(MODE298)  */
struct A68t381{
A68_INT  Fnull;
A_PAD_INT(PAD_153)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT)  */
struct A68t388{
A68_VC  Classname;
struct A68t392 * Strings;
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE26,REF MODE392)  */
struct A68t389{
struct A68t279  Elem;
struct A68t389 * Rest;
};
typedef struct A68t389  A68_389 ;    /* STRUCT(MODE279,REF MODE389)  */
struct A68t390{
struct A68t279  Attr;
};
typedef struct A68t390  A68_390 ;    /* STRUCT(MODE279)  */
struct A68t391{
A68_INT  Attrnull;
A_PAD_INT(PAD_154)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(INT)  */
struct A68t392{
A68_VC  Id;
struct A68t392 * Rest;
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE26,REF MODE392)  */
struct A68t395{
A68_INT  Sort;
A_PAD_INT(PAD_155)
A68_VC  Constname;
struct A68t279  Attr;
struct A68t299  Value;
struct A68t283 * Usage;
};
typedef struct A68t395  A68_395 ;    /* STRUCT(INT,REF MODE26,MODE279,MODE299,REF MODE283)  */
A_VECTOR(struct A68t401 ,A68t398);
typedef struct A68t398  A68_398 ;    /* VECTOR [] MODE401 */
struct A68t401{
A68_VC  Altname;
struct A68t367  Assoc;
};
typedef struct A68t401  A68_401 ;    /* STRUCT(REF MODE26,MODE367)  */
struct A68t397 { A68_INT mode; union {
struct A68t398  mode1;
struct A68t399 * mode2;
struct A68t386 * mode3;
struct A68t400 * mode4;
} data; };
typedef struct A68t397  A68_397 ;    /* UNION(REF MODE398,REF MODE399,REF MODE386,REF MODE400)  */
struct A68t396{
A68_INT  Sort;
A_PAD_INT(PAD_156)
A68_VC  Typename;
struct A68t279  Attr;
struct A68t397  Body;
struct A68t283 * Usage;
};
typedef struct A68t396  A68_396 ;    /* STRUCT(INT,REF MODE26,MODE279,MODE397,REF MODE283)  */
struct A68t399{
A68_VC  Tagname;
struct A68t366  Range;
};
typedef struct A68t399  A68_399 ;    /* STRUCT(REF MODE26,MODE366)  */
struct A68t400{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t400  A68_400 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t403 { A68_INT mode; union {
struct A68t375 * mode1;
struct A68t334 * mode2;
struct A68t376 * mode3;
struct A68t338 * mode4;
struct A68t377 * mode5;
struct A68t378 * mode6;
struct A68t379 * mode7;
struct A68t380 * mode8;
struct A68t373 * mode9;
struct A68t381 * mode10;
struct A68t366  mode11;
} data; };
typedef struct A68t403  A68_403 ;    /* UNION(REF MODE375,REF MODE334,REF MODE376,REF MODE338,REF MODE377,REF MODE378,REF MODE379,REF MODE380,REF MODE373,REF MODE381,MODE366)  */
struct A68t402{
A68_INT  Sort;
A_PAD_INT(PAD_157)
A68_VC  Intname;
struct A68t279  Attr;
struct A68t403  Value;
struct A68t283 * Usage;
};
typedef struct A68t402  A68_402 ;    /* STRUCT(INT,REF MODE26,MODE279,MODE403,REF MODE283)  */
struct A68t404{
A68_INT  Sort;
A_PAD_INT(PAD_158)
A68_VC  Attrname;
struct A68t279  Value;
struct A68t283 * Usage;
};
typedef struct A68t404  A68_404 ;    /* STRUCT(INT,REF MODE26,MODE279,REF MODE283)  */

A_PROCEDURE(struct A68t265 *,A68t405,(struct A68t200 ,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t200 ,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE200,REF MODE26,BOOL,MODE97) REF MODE265 */

A_PROCEDURE(struct A68t265 *,A68t406,(struct A68t200 ,A68_BOOL ,struct A68t97 ),(struct A68t200 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE200,BOOL,MODE97) REF MODE265 */

A_PROCEDURE(struct A68t265 *,A68t407,(struct A68t195 *,A68_BOOL ,struct A68t97 ),(struct A68t195 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(REF MODE195,BOOL,MODE97) REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t195 *,A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t270 *),(struct A68t195 *,A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t270 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE195,REF MODE26,BOOL,MODE97) MODE270 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t270 ,struct A68t97 ),(struct A68t270 ,struct A68t97 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE270,MODE97) VOID */

A_PROCEDURE(struct A68t265 *,A68t410,(struct A68t265 *,struct A68t97 ),(struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE265,MODE97) REF MODE265 */

A_PROCEDURE(struct A68t288 *,A68t411,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(INT,REF MODE26,MODE97) REF MODE288 */
struct A68t413 ;

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t266 *,struct A68t413 ,struct A68t97 ),(struct A68t266 *,struct A68t413 ,struct A68t97 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE266,MODE413,MODE97) VOID */
struct A68t415 ;

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t415 ,struct A68t36 ,struct A68t97 ),(struct A68t415 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE415,MODE36,MODE97) VOID */
struct A68t413{
struct A68t36  Putstring;
struct A68t414  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t413  A68_413 ;    /* STRUCT(MODE36,MODE414,BOOL)  */
struct A68t416{
A68_INT  Token;
A_PAD_INT(PAD_160)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t416  A68_416 ;    /* STRUCT(INT,BOOL)  */
struct A68t417{
A68_INT  Index;
A_PAD_INT(PAD_162)
A68_INT  Count;
A_PAD_INT(PAD_163)
};
typedef struct A68t417  A68_417 ;    /* STRUCT(INT,INT)  */
struct A68t415 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t416  mode3;
struct A68t417  mode4;
} data; };
typedef struct A68t415  A68_415 ;    /* UNION(INT,MODE26,MODE416,MODE417)  */

A_PROCEDURE(A68_BOOL ,A68t418,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE54) BOOL */
A_VECTOR(struct A68t267 *,A68t419);
typedef struct A68t419  A68_419 ;    /* VECTOR [] REF MODE267 */

A_PROCEDURE(struct A68t376 *,A68t420,(A68_INT ),(A68_INT ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(INT) REF MODE376 */

A_PROCEDURE(struct A68t338 *,A68t421,(A68_INT ),(A68_INT ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(INT) REF MODE338 */

A_PROCEDURE(struct A68t380 *,A68t422,(struct A68t298 ),(struct A68t298 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE298) REF MODE380 */

A_PROCEDURE(struct A68t352 *,A68t423,(struct A68t298 ),(struct A68t298 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE298) REF MODE352 */

A_PROCEDURE(struct A68t339 *,A68t424,(A68_INT ),(A68_INT ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(INT) REF MODE339 */

A_PROCEDURE(struct A68t306 *,A68t425,(struct A68t367 ),(struct A68t367 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE367) REF MODE306 */

A_PROCEDURE(struct A68t386 *,A68t426,(struct A68t367 ),(struct A68t367 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE367) REF MODE386 */

A_PROCEDURE(struct A68t300 *,A68t427,(A68_INT ),(A68_INT ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(INT) REF MODE300 */

A_PROCEDURE(struct A68t303 *,A68t428,(struct A68t367 ),(struct A68t367 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE367) REF MODE303 */

A_PROCEDURE(struct A68t355 *,A68t429,(struct A68t343 ),(struct A68t343 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE343) REF MODE355 */

A_PROCEDURE(struct A68t356 *,A68t430,(struct A68t343 ),(struct A68t343 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE343) REF MODE356 */

A_PROCEDURE(struct A68t331 *,A68t431,(struct A68t299 ),(struct A68t299 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE299) REF MODE331 */

A_PROCEDURE(struct A68t284 *,A68t432,(struct A68t299 ),(struct A68t299 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE299) REF MODE284 */

A_PROCEDURE(struct A68t340 *,A68t433,(A68_INT ),(A68_INT ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(INT) REF MODE340 */

A_PROCEDURE(struct A68t286 *,A68t434,(struct A68t298 ),(struct A68t298 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE298) REF MODE286 */

A_PROCEDURE(struct A68t291 *,A68t435,(struct A68t299 ),(struct A68t299 ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE299) REF MODE291 */

A_PROCEDURE(struct A68t373 *,A68t436,(A68_INT ),(A68_INT ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(INT) REF MODE373 */

A_PROCEDURE(struct A68t337 *,A68t437,(A68_INT ),(A68_INT ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(INT) REF MODE337 */

A_PROCEDURE(struct A68t385 *,A68t438,(struct A68t279 ),(struct A68t279 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE279) REF MODE385 */

A_PROCEDURE(struct A68t390 *,A68t439,(struct A68t279 ),(struct A68t279 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(MODE279) REF MODE390 */
A_VECTOR(struct A68t392 *,A68t440);
typedef struct A68t440  A68_440 ;    /* VECTOR [] REF MODE392 */
A_VECTOR(struct A68t443 ,A68t442);
typedef struct A68t442  A68_442 ;    /* VECTOR [] MODE443 */
struct A68t441{
A68_BITS  Type;
A_PAD_BITS(PAD_164)
struct A68t442  Elements;
};
typedef struct A68t441  A68_441 ;    /* STRUCT(BITS,REF MODE442)  */
struct A68t443 { A68_INT mode; union {
A68_INT * mode1;
struct A68t441  mode2;
} data; };
typedef struct A68t443  A68_443 ;    /* UNION(REF INT,MODE441)  */
struct A68t444{
A68_INT  Sort;
A_PAD_INT(PAD_165)
A68_VC  Value;
};
typedef struct A68t444  A68_444 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t444 ,A68t445);
typedef struct A68t445  A68_445 ;    /* VECTOR [] MODE444 */
A_VECTOR(struct A68t446 ,A68t448);
typedef struct A68t448  A68_448 ;    /* VECTOR [] MODE446 */
struct A68t447{
A68_INT  Choice;
A_PAD_INT(PAD_166)
struct A68t448  Params;
};
typedef struct A68t447  A68_447 ;    /* STRUCT(INT,REF MODE448)  */
struct A68t446 { A68_INT mode; union {
struct A68t447  mode1;
struct A68t444  mode2;
} data; };
typedef struct A68t446  A68_446 ;    /* UNION(MODE447,MODE444)  */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE97) REF MODE26 */
struct A68t449 { A68_INT mode; union {
struct A68t450  mode1;
A68_INT * mode2;
struct A68t441  mode3;
} data; };
typedef struct A68t449  A68_449 ;    /* UNION(MODE450,REF INT,MODE441)  */
struct A68t451{
A68_INT * Sort;
struct A68t449  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t451  A68_451 ;    /* STRUCT(REF INT,MODE449,REF MODE26,REF MODE26)  */
struct A68t452{
struct A68t451  Rule;
struct A68t452 * Rest;
};
typedef struct A68t452  A68_452 ;    /* STRUCT(MODE451,REF MODE452)  */

A_PROCEDURE(A68_BOOL ,A68t453,(struct A68t441 ),(struct A68t441 ,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE441) BOOL */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t442 ,struct A68t441 *),(struct A68t442 ,struct A68t441 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE442) MODE441 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t443 ,struct A68t441 *),(struct A68t443 ,struct A68t441 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE443) MODE441 */
struct A68t457 ;

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t443 ,struct A68t457 ,A68_VC *),(struct A68t443 ,struct A68t457 ,A68_VC *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE443,REF MODE457) REF MODE26 */
A_VECTOR(struct A68t451 ,A68t457);
typedef struct A68t457  A68_457 ;    /* VECTOR [] MODE451 */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t34 *,struct A68t457 ),(struct A68t34 *,struct A68t457 ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE34,REF MODE457) VOID */
struct A68t460 ;

A_PROCEDURE(struct A68t452 *,A68t459,(struct A68t452 *,struct A68t460 ),(struct A68t452 *,struct A68t460 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE452,MODE460) REF MODE452 */
A_VECTOR(struct A68t461 ,A68t460);
typedef struct A68t460  A68_460 ;    /* VECTOR [] MODE461 */
struct A68t461{
A68_INT * No;
struct A68t449  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t461  A68_461 ;    /* STRUCT(REF INT,MODE449,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t446 ,struct A68t445 *),(struct A68t446 ,struct A68t445 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE446) REF MODE445 */
struct A68t463{
A68_INT  C;
A_PAD_INT(PAD_167)
};
typedef struct A68t463  A68_463 ;    /* STRUCT(INT)  */
struct A68t464{
A68_BITS  A;
A_PAD_BITS(PAD_168)
};
typedef struct A68t464  A68_464 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t466,(A68_VC ,struct A68t446 ,struct A68t97 ),(A68_VC ,struct A68t446 ,struct A68t97 ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE26,MODE446,MODE97) VOID */
struct A68t465{
A68_VC  Parameter;
struct A68t466  Proc;
};
typedef struct A68t465  A68_465 ;    /* STRUCT(REF MODE26,MODE466)  */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t446 ,struct A68t97 ),(struct A68t446 ,struct A68t97 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE446,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t445 ,struct A68t97 ),(struct A68t445 ,struct A68t97 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE445,MODE97) VOID */
struct A68t467 { A68_INT mode; union {
struct A68t465  mode1;
struct A68t468  mode2;
struct A68t469  mode3;
} data; };
typedef struct A68t467  A68_467 ;    /* UNION(MODE465,MODE468,MODE469)  */
struct A68t470 { A68_INT mode; union {
struct A68t471 * mode1;
struct A68t472 * mode2;
struct A68t473 * mode3;
} data; };
typedef struct A68t470  A68_470 ;    /* UNION(REF MODE471,REF MODE472,REF MODE473)  */
struct A68t471 ;

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t471 *,struct A68t34 *),(struct A68t471 *,struct A68t34 *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(REF MODE471,REF MODE34) VOID */
struct A68t475 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t476  mode3;
} data; };
typedef struct A68t475  A68_475 ;    /* UNION(REF MODE26,REF MODE102,MODE476)  */
struct A68t471{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t443  Parameter;
struct A68t464  Access;
struct A68t463  Continuation;
struct A68t475  Help;
struct A68t467  Command;
};
typedef struct A68t471  A68_471 ;    /* STRUCT(REF MODE26,REF MODE26,MODE443,MODE464,MODE463,MODE475,MODE467)  */
A_VECTOR(struct A68t470 ,A68t474);
typedef struct A68t474  A68_474 ;    /* VECTOR [] MODE470 */
struct A68t472{
struct A68t471 * Group;
struct A68t474  Commands;
};
typedef struct A68t472  A68_472 ;    /* STRUCT(REF MODE471,REF MODE474)  */
struct A68t473{
struct A68t471 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t474  Locals;
struct A68t474  Globals;
struct A68t471 * Postlude;
};
typedef struct A68t473  A68_473 ;    /* STRUCT(REF MODE471,REF MODE26,REF REF MODE26,REF MODE474,REF MODE474,REF MODE471)  */
struct A68t477{
struct A68t473 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_169)
struct A68t102  Input_lines;
struct A68t477 * Caller;
};
typedef struct A68t477  A68_477 ;    /* STRUCT(REF MODE473,INT,REF MODE102,REF MODE477)  */
struct A68t478 ;

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t478 *,struct A68t471 *,struct A68t446 ,struct A68t97 ,struct A68t463 *),(struct A68t478 *,struct A68t471 *,struct A68t446 ,struct A68t97 ,struct A68t463 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(REF MODE478,REF MODE471,MODE446,MODE97) MODE463 */

A_PROCEDURE(A68_VOID ,A68t480,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE102) VOID */
struct A68t482 ;

A_PROCEDURE(A68_VOID ,A68t481,(struct A68t482 ),(struct A68t482 ,void *));
typedef struct A68t481  A68_481 ;    /* PROC(MODE482) VOID */
struct A68t478{
struct A68t477 * Stack;
struct A68t457  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_170)
A68_BOOL  Private;
A_PAD_BOOL(PAD_171)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_172)
struct A68t479  Caller;
struct A68t480  Report_error;
struct A68t481  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t478  A68_478 ;    /* STRUCT(REF MODE477,REF MODE457,BOOL,BOOL,BOOL,MODE479,MODE480,MODE481,MODE97)  */
struct A68t482 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t482  A68_482 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t483,(struct A68t463 ,struct A68t463 ),(struct A68t463 ,struct A68t463 ,void *));
typedef struct A68t483  A68_483 ;    /* PROC(MODE463,MODE463) BOOL */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t474 ,struct A68t474 ,struct A68t474 *),(struct A68t474 ,struct A68t474 ,struct A68t474 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE474,MODE474) REF MODE474 */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t474 ,struct A68t470 ,struct A68t474 *),(struct A68t474 ,struct A68t470 ,struct A68t474 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(MODE474,MODE470) REF MODE474 */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t474 *,struct A68t474 ,struct A68t474 *),(struct A68t474 *,struct A68t474 ,struct A68t474 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF REF MODE474,MODE474) REF MODE474 */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t474 *,struct A68t470 ,struct A68t474 *),(struct A68t474 *,struct A68t470 ,struct A68t474 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(REF REF MODE474,MODE470) REF MODE474 */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t474 ,struct A68t474 *),(struct A68t474 ,struct A68t474 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(MODE474) REF MODE474 */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t470 ,struct A68t474 *),(struct A68t470 ,struct A68t474 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE470) REF MODE474 */

A_PROCEDURE(struct A68t472 *,A68t490,(A68_VC ,A68_VC ,struct A68t464 ,struct A68t474 ),(A68_VC ,A68_VC ,struct A68t464 ,struct A68t474 ,void *));
typedef struct A68t490  A68_490 ;    /* PROC(MODE26,MODE26,MODE464,MODE474) REF MODE472 */

A_PROCEDURE(struct A68t473 *,A68t491,(struct A68t471 *,A68_VC ,A68_VC *,struct A68t474 ,struct A68t474 ,struct A68t467 ),(struct A68t471 *,A68_VC ,A68_VC *,struct A68t474 ,struct A68t474 ,struct A68t467 ,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF MODE471,MODE26,REF REF MODE26,REF MODE474,REF MODE474,MODE467) REF MODE473 */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t478 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t478 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t492  A68_492 ;    /* PROC(REF MODE478,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t478 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t478 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t493  A68_493 ;    /* PROC(REF MODE478,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t478 *,A68t494,(struct A68t480 ,struct A68t481 ,struct A68t97 ,struct A68t479 ,struct A68t452 *,struct A68t473 *,struct A68t446 ),(struct A68t480 ,struct A68t481 ,struct A68t97 ,struct A68t479 ,struct A68t452 *,struct A68t473 *,struct A68t446 ,void *));
typedef struct A68t494  A68_494 ;    /* PROC(MODE480,MODE481,MODE97,MODE479,REF MODE452,REF MODE473,MODE446) REF MODE478 */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t478 *,struct A68t463 *),(struct A68t478 *,struct A68t463 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(REF MODE478) MODE463 */
struct A68t497 ;
struct A68t498 ;
struct A68t499 ;

A_PROCEDURE(A68_VOID ,A68t496,(A68_BOOL ,struct A68t200 ,struct A68t497 ,struct A68t498 ,struct A68t43 ,struct A68t43 ,struct A68t499 ,struct A68t43 ,A68_BOOL *,struct A68t97 ),(A68_BOOL ,struct A68t200 ,struct A68t497 ,struct A68t498 ,struct A68t43 ,struct A68t43 ,struct A68t499 ,struct A68t43 ,A68_BOOL *,struct A68t97 ,void *));
typedef struct A68t496  A68_496 ;    /* PROC(BOOL,MODE200,MODE497,MODE498,MODE43,MODE43,MODE499,MODE43,REF BOOL,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t500,(A68_VC *,A68_INT *,struct A68t97 ),(A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF REF MODE26,REF INT,MODE97) BOOL */
struct A68t497 { A68_INT mode; union {
struct A68t111 * mode1;
struct A68t500  mode2;
} data; };
typedef struct A68t497  A68_497 ;    /* UNION(REF MODE111,MODE500)  */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t499,(A68_VC ,A68_VC ,struct A68t158 ),(A68_VC ,A68_VC ,struct A68t158 ,void *));
typedef struct A68t499  A68_499 ;    /* PROC(REF MODE26,REF MODE26,MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t501,(A68_BOOL ,struct A68t200 ,struct A68t497 ,struct A68t97 ,struct A68t176 *),(A68_BOOL ,struct A68t200 ,struct A68t497 ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t501  A68_501 ;    /* PROC(BOOL,MODE200,MODE497,MODE97) MODE176 */

A_PROCEDURE(A68_BOOL ,A68t502,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t502  A68_502 ;    /* PROC(MODE92) BOOL */

A_PROCEDURE(struct A68t375 *,A68t503,(A68_INT ),(A68_INT ,void *));
typedef struct A68t503  A68_503 ;    /* PROC(INT) REF MODE375 */

A_PROCEDURE(A68_INT ,A68t504,(struct A68t298 ,struct A68t97 ),(struct A68t298 ,struct A68t97 ,void *));
typedef struct A68t504  A68_504 ;    /* PROC(MODE298,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t505,(struct A68t298 ),(struct A68t298 ,void *));
typedef struct A68t505  A68_505 ;    /* PROC(MODE298) INT */

A_PROCEDURE(A68_VOID ,A68t506,(struct A68t298 ,struct A68t298 *),(struct A68t298 ,struct A68t298 *,void *));
typedef struct A68t506  A68_506 ;    /* PROC(MODE298) MODE298 */

A_PROCEDURE(struct A68t404 *,A68t507,(struct A68t270 ),(struct A68t270 ,void *));
typedef struct A68t507  A68_507 ;    /* PROC(MODE270) REF MODE404 */

A_PROCEDURE(struct A68t402 *,A68t508,(struct A68t270 ),(struct A68t270 ,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE270) REF MODE402 */

A_PROCEDURE(struct A68t396 *,A68t509,(struct A68t270 ),(struct A68t270 ,void *));
typedef struct A68t509  A68_509 ;    /* PROC(MODE270) REF MODE396 */

A_PROCEDURE(struct A68t395 *,A68t510,(struct A68t270 ),(struct A68t270 ,void *));
typedef struct A68t510  A68_510 ;    /* PROC(MODE270) REF MODE395 */

A_PROCEDURE(struct A68t277 *,A68t511,(struct A68t270 ),(struct A68t270 ,void *));
typedef struct A68t511  A68_511 ;    /* PROC(MODE270) REF MODE277 */

A_PROCEDURE(A68_INT ,A68t512,(struct A68t283 *,struct A68t272 ),(struct A68t283 *,struct A68t272 ,void *));
typedef struct A68t512  A68_512 ;    /* PROC(REF MODE283,REF MODE272) INT */

A_PROCEDURE(A68_INT ,A68t513,(struct A68t283 *,struct A68t273 ),(struct A68t283 *,struct A68t273 ,void *));
typedef struct A68t513  A68_513 ;    /* PROC(REF MODE283,REF MODE273) INT */

A_PROCEDURE(A68_INT ,A68t514,(struct A68t283 *,struct A68t274 ),(struct A68t283 *,struct A68t274 ,void *));
typedef struct A68t514  A68_514 ;    /* PROC(REF MODE283,REF MODE274) INT */

A_PROCEDURE(A68_INT ,A68t515,(struct A68t283 *,struct A68t275 ),(struct A68t283 *,struct A68t275 ,void *));
typedef struct A68t515  A68_515 ;    /* PROC(REF MODE283,REF MODE275) INT */

A_PROCEDURE(A68_INT ,A68t516,(struct A68t283 *,struct A68t276 ),(struct A68t283 *,struct A68t276 ,void *));
typedef struct A68t516  A68_516 ;    /* PROC(REF MODE283,REF MODE276) INT */

A_PROCEDURE(struct A68t404 *,A68t517,(struct A68t337 ,struct A68t265 *,struct A68t271 *),(struct A68t337 ,struct A68t265 *,struct A68t271 *,void *));
typedef struct A68t517  A68_517 ;    /* PROC(MODE337,REF MODE265,REF MODE271) REF MODE404 */

A_PROCEDURE(struct A68t402 *,A68t518,(struct A68t338 ,struct A68t265 *,struct A68t271 *),(struct A68t338 ,struct A68t265 *,struct A68t271 *,void *));
typedef struct A68t518  A68_518 ;    /* PROC(MODE338,REF MODE265,REF MODE271) REF MODE402 */

A_PROCEDURE(struct A68t396 *,A68t519,(struct A68t339 ,struct A68t265 *,struct A68t271 *),(struct A68t339 ,struct A68t265 *,struct A68t271 *,void *));
typedef struct A68t519  A68_519 ;    /* PROC(MODE339,REF MODE265,REF MODE271) REF MODE396 */

A_PROCEDURE(struct A68t395 *,A68t520,(struct A68t300 ,struct A68t265 *,struct A68t271 *),(struct A68t300 ,struct A68t265 *,struct A68t271 *,void *));
typedef struct A68t520  A68_520 ;    /* PROC(MODE300,REF MODE265,REF MODE271) REF MODE395 */

A_PROCEDURE(struct A68t277 *,A68t521,(struct A68t340 ,struct A68t265 *,struct A68t271 *),(struct A68t340 ,struct A68t265 *,struct A68t271 *,void *));
typedef struct A68t521  A68_521 ;    /* PROC(MODE340,REF MODE265,REF MODE271) REF MODE277 */

A_PROCEDURE(struct A68t370 *,A68t522,(struct A68t277 *),(struct A68t277 *,void *));
typedef struct A68t522  A68_522 ;    /* PROC(REF MODE277) REF MODE370 */

A_PROCEDURE(A68_VOID ,A68t523,(struct A68t369 *,struct A68t298 *),(struct A68t369 *,struct A68t298 *,void *));
typedef struct A68t523  A68_523 ;    /* PROC(REF MODE369) MODE298 */

A_PROCEDURE(A68_VOID ,A68t524,(struct A68t367 ,struct A68t271 *,struct A68t298 *),(struct A68t367 ,struct A68t271 *,struct A68t298 *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(MODE367,REF MODE271) MODE298 */

A_PROCEDURE(struct A68t277 *,A68t525,(struct A68t277 *,struct A68t271 *,struct A68t271 *),(struct A68t277 *,struct A68t271 *,struct A68t271 *,void *));
typedef struct A68t525  A68_525 ;    /* PROC(REF MODE277,REF MODE271,REF MODE271) REF MODE277 */

A_PROCEDURE(A68_VOID ,A68t526,(struct A68t280 *,struct A68t277 *,struct A68t367 *),(struct A68t280 *,struct A68t277 *,struct A68t367 *,void *));
typedef struct A68t526  A68_526 ;    /* PROC(REF MODE280,REF MODE277) MODE367 */

A_PROCEDURE(A68_INT ,A68t527,(struct A68t280 *),(struct A68t280 *,void *));
typedef struct A68t527  A68_527 ;    /* PROC(REF MODE280) INT */

A_PROCEDURE(A68_INT ,A68t528,(struct A68t280 *,A68_INT ),(struct A68t280 *,A68_INT ,void *));
typedef struct A68t528  A68_528 ;    /* PROC(REF MODE280,INT) INT */

A_PROCEDURE(A68_VOID ,A68t529,(struct A68t299 ,struct A68t277 *,struct A68t271 *,struct A68t367 *),(struct A68t299 ,struct A68t277 *,struct A68t271 *,struct A68t367 *,void *));
typedef struct A68t529  A68_529 ;    /* PROC(MODE299,REF MODE277,REF MODE271) MODE367 */

A_PROCEDURE(A68_VOID ,A68t530,(struct A68t367 ,struct A68t271 *,struct A68t367 *),(struct A68t367 ,struct A68t271 *,struct A68t367 *,void *));
typedef struct A68t530  A68_530 ;    /* PROC(MODE367,REF MODE271) MODE367 */

A_PROCEDURE(A68_BOOL ,A68t531,(struct A68t367 ,struct A68t367 ,struct A68t271 *,struct A68t271 *,A68_BOOL ),(struct A68t367 ,struct A68t367 ,struct A68t271 *,struct A68t271 *,A68_BOOL ,void *));
typedef struct A68t531  A68_531 ;    /* PROC(MODE367,MODE367,REF MODE271,REF MODE271,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t532,(struct A68t314 *,struct A68t271 *),(struct A68t314 *,struct A68t271 *,void *));
typedef struct A68t532  A68_532 ;    /* PROC(REF MODE314,REF MODE271) INT */

A_PROCEDURE(A68_INT ,A68t533,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t533  A68_533 ;    /* PROC(REF MODE265) INT */

A_PROCEDURE(struct A68t267 *,A68t534,(A68_INT ,struct A68t265 *,struct A68t97 ),(A68_INT ,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t534  A68_534 ;    /* PROC(INT,REF MODE265,MODE97) REF MODE267 */

A_PROCEDURE(struct A68t267 *,A68t535,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t535  A68_535 ;    /* PROC(REF MODE265) REF MODE267 */

A_PROCEDURE(struct A68t267 **,A68t536,(struct A68t270 ,struct A68t267 **,struct A68t265 *,struct A68t97 ),(struct A68t270 ,struct A68t267 **,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t536  A68_536 ;    /* PROC(MODE270,REF REF MODE267,REF MODE265,MODE97) REF REF MODE267 */

A_PROCEDURE(A68_VOID ,A68t537,(struct A68t267 **,struct A68t265 *,struct A68t97 ),(struct A68t267 **,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t537  A68_537 ;    /* PROC(REF REF MODE267,REF MODE265,MODE97) VOID */

A_PROCEDURE(struct A68t265 *,A68t538,(void),(void *));
typedef struct A68t538  A68_538 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_INT ,A68t539,(struct A68t265 *,struct A68t97 ),(struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t539  A68_539 ;    /* PROC(REF MODE265,MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t540,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t540  A68_540 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t541,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t541  A68_541 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t542,(A68_VC ,A68_VC ,struct A68t540 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t540 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t542  A68_542 ;    /* PROC(REF MODE26,MODE26,MODE540,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t543,(A68_VC ),(A68_VC ,void *));
typedef struct A68t543  A68_543 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t544,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t544  A68_544 ;    /* PROC(REF INT,MODE97) BOOL */
struct A68t546 ;

A_PROCEDURE(A68_VOID ,A68t545,(struct A68t546 ,struct A68t97 ,A68_VC *),(struct A68t546 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t545  A68_545 ;    /* PROC(MODE546,MODE97) REF MODE26 */
struct A68t546{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_173)
A68_BOOL  Check;
A_PAD_BOOL(PAD_174)
};
typedef struct A68t546  A68_546 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t547,(struct A68t546 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t546 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t547  A68_547 ;    /* PROC(MODE546,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t548,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t548  A68_548 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t549,(struct A68t444 ),(struct A68t444 ,void *));
typedef struct A68t549  A68_549 ;    /* PROC(MODE444) BOOL */

A_PROCEDURE(A68_INT ,A68t550,(struct A68t444 ,struct A68t97 ),(struct A68t444 ,struct A68t97 ,void *));
typedef struct A68t550  A68_550 ;    /* PROC(MODE444,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t551,(struct A68t444 ,struct A68t97 ,A68_VC *),(struct A68t444 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t551  A68_551 ;    /* PROC(MODE444,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t552,(struct A68t444 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t444 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t552  A68_552 ;    /* PROC(MODE444,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t553,(struct A68t445 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *),(struct A68t445 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *,void *));
typedef struct A68t553  A68_553 ;    /* PROC(REF MODE445,REF INT,REF MODE26,MODE97) MODE158 */

A_PROCEDURE(A68_VOID ,A68t554,(struct A68t444 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t444 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t554  A68_554 ;    /* PROC(MODE444,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t555,(struct A68t444 ,struct A68t97 ,struct A68t46 ),(struct A68t444 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t555  A68_555 ;    /* PROC(MODE444,MODE97,MODE46) INT */
struct A68t556{
A68_INT  Lwb;
A_PAD_INT(PAD_175)
A68_INT  Upb;
A_PAD_INT(PAD_176)
};
typedef struct A68t556  A68_556 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t557,(struct A68t444 ,struct A68t556 ,struct A68t97 ,struct A68t556 *),(struct A68t444 ,struct A68t556 ,struct A68t97 ,struct A68t556 *,void *));
typedef struct A68t557  A68_557 ;    /* PROC(MODE444,MODE556,MODE97) MODE556 */

A_PROCEDURE(A68_VOID ,A68t558,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t558  A68_558 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t559,(struct A68t444 ,struct A68t97 ),(struct A68t444 ,struct A68t97 ,void *));
typedef struct A68t559  A68_559 ;    /* PROC(MODE444,MODE97) CHAR */

A_PROCEDURE(struct A68t452 *,A68t560,(void),(void *));
typedef struct A68t560  A68_560 ;    /* PROC REF MODE452 */

A_PROCEDURE(A68_VOID ,A68t561,(A68_BOOL ,struct A68t53 *),(A68_BOOL ,struct A68t53 *,void *));
typedef struct A68t561  A68_561 ;    /* PROC(BOOL) MODE53 */

A_PROCEDURE(A68_BOOL ,A68t562,(struct A68t53 ,A68_INT ),(struct A68t53 ,A68_INT ,void *));
typedef struct A68t562  A68_562 ;    /* PROC(MODE53,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t563,(struct A68t53 ,A68_INT ,struct A68t53 *),(struct A68t53 ,A68_INT ,struct A68t53 *,void *));
typedef struct A68t563  A68_563 ;    /* PROC(REF MODE53,INT) REF MODE53 */

A_PROCEDURE(A68_VOID ,A68t564,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t564  A68_564 ;    /* PROC MODE53 */

A_PROCEDURE(A68_VOID ,A68t565,(struct A68t32 ,struct A68t53 *),(struct A68t32 ,struct A68t53 *,void *));
typedef struct A68t565  A68_565 ;    /* PROC(MODE32) MODE53 */

A_PROCEDURE(A68_VOID ,A68t566,(struct A68t270 ,struct A68t255 ,A68_INT ,struct A68t53 ,struct A68t257 ,struct A68t97 ),(struct A68t270 ,struct A68t255 ,A68_INT ,struct A68t53 ,struct A68t257 ,struct A68t97 ,void *));
typedef struct A68t566  A68_566 ;    /* PROC(MODE270,MODE255,INT,MODE53,MODE257,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t567,(struct A68t257 *),(struct A68t257 *,void *));
typedef struct A68t567  A68_567 ;    /* PROC MODE257 */

A_PROCEDURE(A68_VOID ,A68t568,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t568  A68_568 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t569,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t569  A68_569 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,63,A68t570);
typedef struct A68t570  A68_570 ;    /* STRUCT 63 CHAR */
struct A68t571 { A68_INT mode; union {
struct A68t270  mode1;
struct A68t265 * mode2;
} data; };
typedef struct A68t571  A68_571 ;    /* UNION(MODE270,REF MODE265)  */

A_PROCEDURE(A68_VOID ,A68t572,(struct A68t444 ,struct A68t265 *,struct A68t97 ,struct A68t571 *),(struct A68t444 ,struct A68t265 *,struct A68t97 ,struct A68t571 *,void *));
typedef struct A68t572  A68_572 ;    /* PROC(MODE444,REF MODE265,MODE97) MODE571 */
A_ISTRUCT(A68_CHAR ,10,A68t573);
typedef struct A68t573  A68_573 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t574,(struct A68t445 ,struct A68t265 *,struct A68t97 ),(struct A68t445 ,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t574  A68_574 ;    /* PROC(REF MODE445,REF MODE265,MODE97) VOID */
A_ISTRUCT(struct A68t52 ,2,A68t575);
typedef struct A68t575  A68_575 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t576,(struct A68t34 *,struct A68t265 *,struct A68t97 ),(struct A68t34 *,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t576  A68_576 ;    /* PROC(REF MODE34,REF MODE265,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t577,(struct A68t282 ,A68_VC *),(struct A68t282 ,A68_VC *,void *));
typedef struct A68t577  A68_577 ;    /* PROC(MODE282) MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t578);
typedef struct A68t578  A68_578 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t579);
typedef struct A68t579  A68_579 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t580);
typedef struct A68t580  A68_580 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t581);
typedef struct A68t581  A68_581 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t582);
typedef struct A68t582  A68_582 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t583);
typedef struct A68t583  A68_583 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t584);
typedef struct A68t584  A68_584 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t585);
typedef struct A68t585  A68_585 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,6,A68t586);
typedef struct A68t586  A68_586 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,9,A68t587);
typedef struct A68t587  A68_587 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,12,A68t588);
typedef struct A68t588  A68_588 ;    /* STRUCT 12 MODE52 */
A_ISTRUCT(A68_CHAR ,28,A68t589);
typedef struct A68t589  A68_589 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t590);
typedef struct A68t590  A68_590 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t591);
typedef struct A68t591  A68_591 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t592,(struct A68t200 ,struct A68t134 ,struct A68t97 ),(struct A68t200 ,struct A68t134 ,struct A68t97 ,void *));
typedef struct A68t592  A68_592 ;    /* PROC(MODE200,MODE134,MODE97) VOID */
A_ISTRUCT(A68_VC ,2,A68t593);
typedef struct A68t593  A68_593 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(struct A68t52 ,11,A68t594);
typedef struct A68t594  A68_594 ;    /* STRUCT 11 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t595);
typedef struct A68t595  A68_595 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t596);
typedef struct A68t596  A68_596 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t597,(struct A68t474 *),(struct A68t474 *,void *));
typedef struct A68t597  A68_597 ;    /* PROC REF MODE474 */
A_ISTRUCT(A68_CHAR ,104,A68t598);
typedef struct A68t598  A68_598 ;    /* STRUCT 104 CHAR */
A_ISTRUCT(struct A68t443 ,2,A68t599);
typedef struct A68t599  A68_599 ;    /* STRUCT 2 MODE443 */
A_ISTRUCT(A68_CHAR ,120,A68t600);
typedef struct A68t600  A68_600 ;    /* STRUCT 120 CHAR */
A_ISTRUCT(A68_CHAR ,204,A68t601);
typedef struct A68t601  A68_601 ;    /* STRUCT 204 CHAR */
A_ISTRUCT(struct A68t470 ,3,A68t602);
typedef struct A68t602  A68_602 ;    /* STRUCT 3 MODE470 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from simple_layout --- */
extern A68_VOID  DFBATRN_no_indicators(A68_53 *);
extern A68_VOID  TFRBTRN_simple_layout(struct A68t270 ,struct A68t255 ,A68_INT ,struct A68t53 ,struct A68t257 ,struct A68t97 );
/* --- End of imports from simple_layout --- */


/* --- Imports from kernelreader --- */
extern A68_443  CJFAOST_fnname_syntax;
extern A68_BOOL  HKFAOST_is_fnname(struct A68t444 );
extern A68_VOID  LKFAOST_get_fnname(struct A68t444 ,struct A68t97 ,A68_VC *);
extern A68_443  HNFAOST_filename_syntax;
extern A68_VOID  XNFAOST_get_filename(struct A68t444 ,A68_VC ,struct A68t97 ,A68_134 *);
extern A68_443  WPFAOST_contextname_syntax;
extern A68_VOID  KRFAOST_get_contextname(struct A68t444 ,struct A68t97 ,A68_VC *);
/* --- End of imports from kernelreader --- */


/* --- Imports from closureprocs --- */
/* --- End of imports from closureprocs --- */


/* --- Imports from modeprocs --- */
extern A68_402 * HPMATRN_get_outerint(struct A68t270 );
extern A68_396 * OPMATRN_get_outertype(struct A68t270 );
extern A68_395 * VPMATRN_get_outerconst(struct A68t270 );
extern A68_277 * CQMATRN_get_outerfn(struct A68t270 );
/* --- End of imports from modeprocs --- */


/* --- Imports from libmessages --- */
extern A68_BOOL  PIBAELA_is_lib_msg(struct A68t92 );
/* --- End of imports from libmessages --- */


/* --- Imports from compmessages --- */
extern A68_BOOL  BZAAELA_is_comp_msg(struct A68t92 );
/* --- End of imports from compmessages --- */


/* --- Imports from compshell --- */
extern A68_VOID  NLDBELA_ella_shell(A68_BOOL ,struct A68t200 ,struct A68t497 ,struct A68t97 ,A68_176 *);
/* --- End of imports from compshell --- */


/* --- Imports from command --- */
extern A68_464  XMDAOST_normalaccess;
extern A68_464  BNDAOST_hiddenaccess;
extern A68_463  ZNDAOST_continue;
extern A68_VOID  ARDAOST_makecommands(struct A68t474 ,A68_474 *);
extern A68_472 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t464 ,struct A68t474 );
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_VOID  ATAAOST_prod(struct A68t442 ,A68_441 *);
extern A68_VOID  LTAAOST_opt(struct A68t443 ,A68_441 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_277 * YAAATRN_nilfndec;
extern A68_278  FBAATRN_nilmacspecs;
extern A68_267 * HBAATRN_nilouters;
extern A68_284 * WGAATRN_makeunittag(struct A68t299 );
extern A68_391  ZHAATRN_attrnull;
extern A68_305  RIAATRN_cvoid;
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from assclosure --- */
extern A68_265 * XYDBELA_context_specs(struct A68t195 *,A68_BOOL ,struct A68t97 );
/* --- End of imports from assclosure --- */


/* --- Imports from options --- */
extern A68_257  OCAAOST_null_options;
/* --- End of imports from options --- */


/* --- Imports from ioprocs --- */
extern A68_INT  QPGAOST_current_width(void);
/* --- End of imports from ioprocs --- */


/* --- Imports from libprocs --- */
extern A68_VOID  KOCBELA_merge_compiled(struct A68t200 ,struct A68t176 ,struct A68t97 );
extern A68_INT  YCDBELA_ordercontexts(void);
/* --- End of imports from libprocs --- */


/* --- Imports from libinterface --- */
extern A68_VOID  RLBBELA_ctno_region(A68_INT ,A68_200 *);
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_176  UACAELA_nilptr;
extern A68_195 * DVJAELA_nilcontxt;
extern A68_198 * HXJAELA_library;
extern A68_VOID  UAKAELA_ctos(struct A68t200 ,A68_VC *);
extern A68_BOOL  ZBKAELA_no_text(struct A68t195 *,struct A68t97 );
extern A68_195 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t195 *,A68_VC ,A68_200 *);
extern A68_195 * XEKAELA_check_context(A68_VC ,struct A68t97 );
/* --- End of imports from libmodes --- */


/* --- Imports from basics --- */
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VC  DLDAOST_source_type;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  PNBAOSI_read_access;
extern A68_113  TNBAOSI_write_access;
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_111 * FQBAOSI_open_file(A68_VC ,struct A68t113 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t111 *,struct A68t97 );
extern A68_VOID  YPBAOSI_file_name(struct A68t111 *,A68_VC *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t111 *,A68_VC ,struct A68t97 ,A68_35 *);
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
extern A68_34 * LEAAOST_out;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  WHAAOSI_user;
extern A68_INT  ZLAAOSI_msg_number(struct A68t92 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_34 * XPAAOSL_make_channel(struct A68t87 ,struct A68t88 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BQQBTRN(void);   /* simple_layout */
extern void TXEAOST(void);   /* kernelreader */
extern void SKCATRN(void);   /* closureprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void IZAAELA(void);   /* libmessages */
extern void CFAAELA(void);   /* compmessages */
extern void MDDBELA(void);   /* compshell */
extern void FMDAOST(void);   /* command */
extern void LRAAOST(void);   /* commandsyntax */
extern void BAAATRN(void);   /* assmodes */
extern void MQDBELA(void);   /* assclosure */
extern void BAAAOST(void);   /* options */
extern void TIGAOST(void);   /* ioprocs */
extern void ZSBBELA(void);   /* libprocs */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_570   VHIBELA = {"$Id: graphicscommands.a68,v 34.3 1995/03/29 13:03:26 ella Exp $"}; 
A_GISVEC(A68_VC ,WHIBELA,VHIBELA,63)
static A68_573   MIIBELA = {" not found"}; 
A_GISVEC(A68_VC ,NIIBELA,MIIBELA,10)
static A68_578   QKIBELA = {" UNIT."}; 
A_GISVEC(A68_VC ,SKIBELA,QKIBELA,6)
static A68_578   UKIBELA = {" BIOP."}; 
A_GISVEC(A68_VC ,VKIBELA,UKIBELA,6)
static A68_579   WKIBELA = {" ALIEN."}; 
A_GISVEC(A68_VC ,XKIBELA,WKIBELA,7)
static A68_579   YKIBELA = {" ARITH."}; 
A_GISVEC(A68_VC ,ZKIBELA,YKIBELA,7)
static A68_580   ALIBELA = {" REFORM."}; 
A_GISVEC(A68_VC ,BLIBELA,ALIBELA,8)
static A68_580   CLIBELA = {" IMPORT."}; 
A_GISVEC(A68_VC ,DLIBELA,CLIBELA,8)
static A68_580   ELIBELA = {" ADELAY."}; 
A_GISVEC(A68_VC ,FLIBELA,ELIBELA,8)
static A68_580   GLIBELA = {" IDELAY."}; 
A_GISVEC(A68_VC ,HLIBELA,GLIBELA,8)
static A68_581   ILIBELA = {" RAM."}; 
A_GISVEC(A68_VC ,JLIBELA,ILIBELA,5)
static A68_580   KLIBELA = {" SAMPLE."}; 
A_GISVEC(A68_VC ,LLIBELA,KLIBELA,8)
static A68_582   MLIBELA = {" TIMESCALE."}; 
A_GISVEC(A68_VC ,NLIBELA,MLIBELA,11)
static A68_583   QLIBELA = {" UNKNOWN BODY SORT."}; 
A_GISVEC(A68_VC ,RLIBELA,QLIBELA,19)
static A68_584   XLIBELA = {"  "}; 
A_GISVEC(A68_VC ,YLIBELA,XLIBELA,2)
static A68_584   JMIBELA = {"  "}; 
A_GISVEC(A68_VC ,KMIBELA,JMIBELA,2)
static A68_584   VMIBELA = {"  "}; 
A_GISVEC(A68_VC ,WMIBELA,VMIBELA,2)
static A68_584   LOIBELA = {"  "}; 
A_GISVEC(A68_VC ,MOIBELA,LOIBELA,2)
static A68_584   ROIBELA = {"  "}; 
A_GISVEC(A68_VC ,SOIBELA,ROIBELA,2)
static A68_114   RPIBELA = {".esp"}; 
A_GISVEC(A68_VC ,SPIBELA,RPIBELA,4)
static A68_583   LQIBELA = {"ESP FILE, version 1"}; 
A_GISVEC(A68_VC ,MQIBELA,LQIBELA,19)
static A68_587   TQIBELA = {"LIBRARY  "}; 
A_GISVEC(A68_VC ,UQIBELA,TQIBELA,9)
static A68_573   ZQIBELA = {", version "}; 
A_GISVEC(A68_VC ,ARIBELA,ZQIBELA,10)
static A68_584   FRIBELA = {"  "}; 
A_GISVEC(A68_VC ,GRIBELA,FRIBELA,2)
static A68_580   PRIBELA = {"CONTEXTS"}; 
A_GISVEC(A68_VC ,QRIBELA,PRIBELA,8)
static A68_584   YRIBELA = {"  "}; 
A_GISVEC(A68_VC ,ZRIBELA,YRIBELA,2)
static A68_589   NSIBELA = {"ERROR - invalid context name"}; 
A_GISVEC(A68_VC ,OSIBELA,NSIBELA,28)
static A68_590   TSIBELA = {"END"}; 
A_GISVEC(A68_VC ,USIBELA,TSIBELA,3)
static A68_587   BTIBELA = {"CONTEXT  "}; 
A_GISVEC(A68_VC ,CTIBELA,BTIBELA,9)
static A68_590   LTIBELA = {"END"}; 
A_GISVEC(A68_VC ,MTIBELA,LTIBELA,3)
static A68_114   ZTIBELA = {".ege"}; 
A_GISVEC(A68_VC ,AUIBELA,ZTIBELA,4)
static A68_583   VUIBELA = {"EGE FILE, version 1"}; 
A_GISVEC(A68_VC ,WUIBELA,VUIBELA,19)
static A68_587   DVIBELA = {"LIBRARY  "}; 
A_GISVEC(A68_VC ,EVIBELA,DVIBELA,9)
static A68_573   JVIBELA = {", version "}; 
A_GISVEC(A68_VC ,KVIBELA,JVIBELA,10)
static A68_584   PVIBELA = {"  "}; 
A_GISVEC(A68_VC ,QVIBELA,PVIBELA,2)
static A68_595   BWIBELA = {"Compiling  \""}; 
A_GISVEC(A68_VC ,CWIBELA,BWIBELA,12)
static A68_584   XWIBELA = {"  "}; 
A_GISVEC(A68_VC ,YWIBELA,XWIBELA,2)
static A68_584   EXIBELA = {"  "}; 
A_GISVEC(A68_VC ,FXIBELA,EXIBELA,2)
static A68_590   PXIBELA = {"   "}; 
A_GISVEC(A68_VC ,QXIBELA,PXIBELA,3)
static A68_582   FYIBELA = {"0    0  235"}; 
A_GISVEC(A68_VC ,GYIBELA,FYIBELA,11)
static A68_582   KYIBELA = {"0    0  236"}; 
A_GISVEC(A68_VC ,LYIBELA,KYIBELA,11)
static A68_582   PYIBELA = {"0    0  237"}; 
A_GISVEC(A68_VC ,QYIBELA,PYIBELA,11)
static A68_582   UYIBELA = {"0    0  238"}; 
A_GISVEC(A68_VC ,VYIBELA,UYIBELA,11)
static A68_580   FZIBELA = {"GRAPHICS"}; 
static A68_581   IZIBELA = {"SPECS"}; 
A_GISVEC(A68_VC ,JZIBELA,IZIBELA,5)
static A68_598   LZIBELA = {"Assembles the closure of all declarations from the context specified and prints the specs in a .esp file"}; 
A_GISVEC(A68_VC ,MZIBELA,LZIBELA,104)
static A68_578   YZIBELA = {"LAYOUT"}; 
A_GISVEC(A68_VC ,ZZIBELA,YZIBELA,6)
static A68_600   HAJBELA = {"Prints the declaration of fnname if found in the specified context or all declarations in the context if no fnname given"}; 
A_GISVEC(A68_VC ,IAJBELA,HAJBELA,120)
static A68_579   UAJBELA = {"COMPILE"}; 
A_GISVEC(A68_VC ,VAJBELA,UAJBELA,7)
static A68_601   XAJBELA = {"Compiles a file of ELLA-text into the declarations region of the selected context. Error messages in the form line number, char number, error number, parameters for error message, are sent to a .ege file."}; 
A_GISVEC(A68_VC ,YAJBELA,XAJBELA,204)
A_GISVEC(A68_VC ,SBJBELA,FZIBELA,8)
typedef struct   /* env of non-global proc */
{
int dummy;
} IJIBELA_print_layout;
typedef struct   /* env of non-global proc */
{
A68_34 * Channel;
} CKIBELA_put_layout;
typedef struct   /* env of non-global proc */
{
A68_255  AKIBELA_put_layout;
} JKIBELA_print_layout;
typedef struct   /* env of non-global proc */
{
A68_577  MKIBELA_fnbody_sort;
} OKIBELA_fnbody_sort;
typedef struct   /* env of non-global proc */
{
A68_111 * UPIBELA_esp_file;
A68_97  Msg;
} ZPIBELA_flt_close;
typedef struct   /* env of non-global proc */
{
A68_111 * UPIBELA_esp_file;
A68_97  XPIBELA_flt_close;
} DQIBELA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_111 * EUIBELA_ege_file;
A68_97  Flt;
A68_111 * XTIBELA_comp_file;
} JUIBELA_flt_close;
typedef struct   /* env of non-global proc */
{
A68_111 * EUIBELA_ege_file;
A68_97  HUIBELA_flt_close;
} NUIBELA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_34 * TUIBELA_ege_channel;
A68_97  Flt;
} QWIBELA_newmsg;

A_STATIC A68_VOID  AIIBELA_find_outer(A68_444  Name, A68_265 * Closure, A68_97  Msg, A68_571  *ReturnedValue);

A_STATIC A68_VOID  UIIBELA_printdecs(A68_445  Names, A68_265 * Closure, A68_97  Msg);

A_STATIC A68_VOID  YIIBELA_put_layout(A68_VC  Line, A68_97  Msg);

A_STATIC A68_VOID  HJIBELA_print_layout(A68_270  Outerdec, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  WJIBELA_printspecs(A68_34 * Channel, A68_265 * Closure, A68_97  Msg);

A_STATIC A68_VOID  BKIBELA_put_layout(A68_VC  Line, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  IKIBELA_print_layout(A68_270  Outerdec, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  NKIBELA_fnbody_sort(A68_282  Fnbody, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CPIBELA_graphicslayout(A68_445  Names, A68_97  Msg);

A_STATIC A68_VOID  KPIBELA_graphicsspecs(A68_445  Names, A68_97  Msg);

A_STATIC A68_VOID  YPIBELA_flt_close(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  CQIBELA_anonymous(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  VTIBELA_graphicscompile(A68_200  Cr, A68_134  Filename, A68_97  Flt);

A_STATIC A68_VOID  IUIBELA_flt_close(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  MUIBELA_anonymous(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  PWIBELA_newmsg(A68_92  Msgno, A68_46  Params, void *NonLocals);

A68_VOID  EZIBELA_make_graphics_commands(A68_474  *ReturnedValue);

A_STATIC A68_VOID  RZIBELA_anonymous(A68_445  Names, A68_97  Flt);

A_STATIC A68_VOID  NAJBELA_anonymous(A68_445  Names, A68_97  Flt);

A_STATIC A68_VOID  DBJBELA_anonymous(A68_445  Names, A68_97  Flt);

A_STATIC A68_VOID  YIIBELA_put_layout(A68_VC  Line, A68_97  Msg)
{ 
A68_575  ZIIBELA;  /* collateral clause result */
A68_52  AJIBELA;  /* OPERATORS - mode -> union mode */
A68_52  BJIBELA;  /* OPERATORS - mode -> union mode */
A68_56  CJIBELA;  /* procedure value */
A68_85  DJIBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(put_layout);
 /* line 84: */
ZIIBELA.data[0] = A_UNITE(AJIBELA,mode7,7,Line);
CJIBELA.fn.fn_global = LRAAOSL_newline;
CJIBELA.nonlocals = A68_NIL;
ZIIBELA.data[1] = A_UNITE(BJIBELA,mode12,12,CJIBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(DJIBELA,ZIIBELA,2,A68_52 ));
A_PROC_EXIT(put_layout);
return;
} 
#undef NL

A_STATIC A68_VOID  HJIBELA_print_layout(A68_270  Outerdec, A68_97  Msg, void *NonLocals)
#define NL(x) (((IJIBELA_print_layout *)NonLocals)->x)
{ 
A68_53  JJIBELA;  /* avoid structure result */
A68_255  KJIBELA;  /* procedure value */
A_PROC_ENTRY(print_layout);
 /* line 87: */
 /* line 88: */
DFBATRN_no_indicators(  &JJIBELA );
KJIBELA.fn.fn_global = YIIBELA_put_layout;
KJIBELA.nonlocals = A68_NIL;
TFRBTRN_simple_layout(Outerdec, KJIBELA, QPGAOST_current_width(), JJIBELA, OCAAOST_null_options, Msg);
A_PROC_EXIT(print_layout);
return;
} 
#undef NL

A_STATIC A68_VOID  BKIBELA_put_layout(A68_VC  Line, A68_97  Msg, void *NonLocals)
#define NL(x) (((CKIBELA_put_layout *)NonLocals)->x)
{ 
A68_52  DKIBELA;  /* OPERATORS - mode -> union mode */
A68_85  EKIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put_layout);
 /* line 108: */
GFBAOSL_put(NL(Channel), A_HVEC(EKIBELA,A_UNITE(DKIBELA,mode7,7,Line),A68_52 ));
A_PROC_EXIT(put_layout);
return;
} 
#undef NL

A_STATIC A68_VOID  IKIBELA_print_layout(A68_270  Outerdec, A68_97  Msg, void *NonLocals)
#define NL(x) (((JKIBELA_print_layout *)NonLocals)->x)
{ 
A68_53  KKIBELA;  /* avoid structure result */
A_PROC_ENTRY(print_layout);
 /* line 111: */
 /* line 112: */
DFBATRN_no_indicators(  &KKIBELA );
TFRBTRN_simple_layout(Outerdec, NL(AKIBELA_put_layout), QPGAOST_current_width(), KKIBELA, OCAAOST_null_options, Msg);
A_PROC_EXIT(print_layout);
return;
} 
#undef NL

A_STATIC A68_VOID  NKIBELA_fnbody_sort(A68_282  Fnbody, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OKIBELA_fnbody_sort *)NonLocals)->x)
{ 
A68_282  PKIBELA;  /* united object - for case conformity */
A68_VC  RKIBELA;  /* clause result */
A68_285 * TKIBELA_ac;
A68_294 * OLIBELA_bc;
A68_VC  PLIBELA;  /* avoid structure result */
A_PROC_ENTRY(fnbody_sort);
 /* line 115: */
 /* line 116: */
PKIBELA = Fnbody ;
switch ( PKIBELA.mode )
{ 
case 1: /* REF STRUCT(MODE299)  */
 /* line 117: */
RKIBELA = SKIBELA;
break;
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE382)  */
TKIBELA_ac = (PKIBELA.data.mode2);
if ( (*(&(TKIBELA_ac->Biop))) )
{ 
RKIBELA = VKIBELA;
} 
else
{ 
 /* line 118: */
RKIBELA = XKIBELA;
} 
break;
case 3: /* REF STRUCT(MODE298)  */
 /* line 119: */
RKIBELA = ZKIBELA;
break;
case 4: /* REF STRUCT(INT)  */
 /* line 120: */
RKIBELA = BLIBELA;
break;
case 5: /* REF STRUCT(REF MODE26,INT,MODE158)  */
 /* line 121: */
RKIBELA = DLIBELA;
break;
case 6: /* REF STRUCT(INT,MODE299,MODE298,MODE299,MODE298)  */
 /* line 122: */
RKIBELA = FLIBELA;
break;
case 7: /* REF STRUCT(MODE299,MODE298)  */
 /* line 123: */
RKIBELA = HLIBELA;
break;
case 8: /* REF STRUCT(MODE299)  */
 /* line 124: */
RKIBELA = JLIBELA;
break;
case 9: /* REF STRUCT(INT,MODE298,MODE299,MODE298)  */
 /* line 125: */
RKIBELA = LLIBELA;
break;
case 10: /* REF STRUCT(BOOL,INT,MODE297,MODE298,MODE299,MODE298)  */
 /* line 126: */
RKIBELA = NLIBELA;
break;
case 11: /* REF STRUCT(REF MODE296,BOOL,MODE282)  */
OLIBELA_bc = (PKIBELA.data.mode11);
 /* line 127: */
 /* line 128: */
A_CALLPROC(NL(MKIBELA_fnbody_sort),((*(&(OLIBELA_bc->Fnbody))), &PLIBELA),((*(&(OLIBELA_bc->Fnbody))), &PLIBELA,(NL(MKIBELA_fnbody_sort)).nonlocals));
RKIBELA = PLIBELA;
break;
default: 
RKIBELA = RLIBELA;
break;
} 
A_PROC_EXIT(fnbody_sort);
*ReturnedValue = (RKIBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YPIBELA_flt_close(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((ZPIBELA_flt_close *)NonLocals)->x)
{ 
A_PROC_ENTRY(flt_close);
 /* line 214: */
{ 
XQBAOSI_close_file(NL(UPIBELA_esp_file), NL(Msg));
 /* line 215: */
 /* line 216: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(flt_close);
return;
} 
#undef NL

A_STATIC A68_VOID  CQIBELA_anonymous(A68_VC  S, void *NonLocals)
#define NL(x) (((DQIBELA_anonymous *)NonLocals)->x)
{ 
A68_35  EQIBELA;  /* avoid structure result */
JSBAOSI_write_buffer( NL(UPIBELA_esp_file), S, NL(XPIBELA_flt_close), &EQIBELA );
EQIBELA;
return;
} 
#undef NL

A_STATIC A68_VOID  IUIBELA_flt_close(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((JUIBELA_flt_close *)NonLocals)->x)
{ 
A_PROC_ENTRY(flt_close);
 /* line 252: */
{ 
XQBAOSI_close_file(NL(EUIBELA_ege_file), NL(Flt));
 /* line 253: */
XQBAOSI_close_file(NL(XTIBELA_comp_file), NL(Flt));
 /* line 254: */
 /* line 255: */
A_CALLPROC(NL(Flt),(No, Params),(No, Params,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(flt_close);
return;
} 
#undef NL

A_STATIC A68_VOID  MUIBELA_anonymous(A68_VC  S, void *NonLocals)
#define NL(x) (((NUIBELA_anonymous *)NonLocals)->x)
{ 
A68_35  OUIBELA;  /* avoid structure result */
JSBAOSI_write_buffer( NL(EUIBELA_ege_file), S, NL(HUIBELA_flt_close), &OUIBELA );
OUIBELA;
return;
} 
#undef NL

A_STATIC A68_VOID  PWIBELA_newmsg(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((QWIBELA_newmsg *)NonLocals)->x)
{ 
A68_BOOL  RWIBELA;  /* optbool result */
A68_INT  SWIBELA_upb;
A68_596  TWIBELA;  /* collateral clause result */
A68_INT  UWIBELA;  /* YIELD */
A68_52  VWIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WWIBELA;  /* YIELD */
A68_52  ZWIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  AXIBELA;  /* YIELD */
A68_INT  BXIBELA;  /* YIELD */
A68_52  CXIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DXIBELA;  /* YIELD */
A68_52  GXIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HXIBELA;  /* YIELD */
A68_INT  IXIBELA;  /* YIELD */
A68_52  JXIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  KXIBELA;  /* YIELD */
A68_85  LXIBELA;  /* OPERATORS - istruct -> vector */
A68_INT  MXIBELA_i;
A68_INT  NXIBELA;  /* to part of loop */
A68_591  OXIBELA;  /* collateral clause result */
A68_52  RXIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SXIBELA;  /* YIELD */
A68_52  TXIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  UXIBELA;  /* YIELD */
A68_52  VXIBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  WXIBELA;  /* YIELD */
A68_52  XXIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YXIBELA;  /* YIELD */
A68_85  ZXIBELA;  /* OPERATORS - istruct -> vector */
A68_52  AYIBELA;  /* OPERATORS - mode -> union mode */
A68_56  BYIBELA;  /* procedure value */
A68_85  CYIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  DYIBELA;  /* optbool result */
A68_INT  EYIBELA_final_msgno;
A68_52  HYIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IYIBELA;  /* YIELD */
A68_85  JYIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  MYIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NYIBELA;  /* YIELD */
A68_85  OYIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  RYIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SYIBELA;  /* YIELD */
A68_85  TYIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  WYIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XYIBELA;  /* YIELD */
A68_85  YYIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  ZYIBELA;  /* OPERATORS - mode -> union mode */
A68_56  AZIBELA;  /* procedure value */
A68_85  BZIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(newmsg);
 /* line 266: */
RWIBELA = BZAAELA_is_comp_msg(Msgno);
if ( RWIBELA )
{ /* line 267: */
RWIBELA = (ZLAAOSI_msg_number(Msgno)>0);
}
if ( RWIBELA )
{ 
SWIBELA_upb = Params.upb;
 /* line 268: */
 /* line 269: */
if ( (SWIBELA_upb>=3) )
{ 
UWIBELA = 1 ;
WWIBELA = A_VINDEX(Params,UWIBELA) ;
TWIBELA.data[0] = A_UNITE(VWIBELA,mode7,7,WWIBELA);
AXIBELA = YWIBELA ;
TWIBELA.data[1] = A_UNITE(ZWIBELA,mode7,7,AXIBELA);
BXIBELA = 2 ;
DXIBELA = A_VINDEX(Params,BXIBELA) ;
TWIBELA.data[2] = A_UNITE(CXIBELA,mode7,7,DXIBELA);
HXIBELA = FXIBELA ;
TWIBELA.data[3] = A_UNITE(GXIBELA,mode7,7,HXIBELA);
IXIBELA = 3 ;
KXIBELA = A_VINDEX(Params,IXIBELA) ;
TWIBELA.data[4] = A_UNITE(JXIBELA,mode7,7,KXIBELA);
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HISVEC(LXIBELA,TWIBELA,5,A68_52 ));
 /* line 270: */
 /* line 271: */
if ( (SWIBELA_upb>3) )
{ 
 /* line 272: */
NXIBELA = SWIBELA_upb;
for ( MXIBELA_i = 4;
MXIBELA_i <= NXIBELA;
MXIBELA_i += 1 )
{ 
SXIBELA = QXIBELA ;
OXIBELA.data[0] = A_UNITE(RXIBELA,mode7,7,SXIBELA);
UXIBELA = A_VINDEX(Params,MXIBELA_i).upb ;
OXIBELA.data[1] = A_UNITE(TXIBELA,mode1,1,UXIBELA);
WXIBELA = ' ' ;
OXIBELA.data[2] = A_UNITE(VXIBELA,mode6,6,WXIBELA);
YXIBELA = A_VINDEX(Params,MXIBELA_i) ;
OXIBELA.data[3] = A_UNITE(XXIBELA,mode7,7,YXIBELA);
 /* line 273: */
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HISVEC(ZXIBELA,OXIBELA,4,A68_52 ));
}
 /* line 274: */
 /* line 275: */
} 
} 
 /* line 276: */
 /* line 277: */
BYIBELA.fn.fn_global = LRAAOSL_newline;
BYIBELA.nonlocals = A68_NIL;
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HVEC(CYIBELA,A_UNITE(AYIBELA,mode12,12,BYIBELA),A68_52 ));
} 
else
{ 
 /* line 278: */
DYIBELA = PIBAELA_is_lib_msg(Msgno);
if ( DYIBELA )
{DYIBELA = (ZLAAOSI_msg_number(Msgno)>70);
}
if ( DYIBELA )
{ /* line 279: */
DYIBELA = (ZLAAOSI_msg_number(Msgno)<75);
}
if ( DYIBELA )
{ 
EYIBELA_final_msgno = ZLAAOSI_msg_number(Msgno);
 /* line 280: */
 /* line 281: */
switch ( (EYIBELA_final_msgno-70) )
{ 
case 1: 
 /* line 282: */
IYIBELA = GYIBELA ;
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HVEC(JYIBELA,A_UNITE(HYIBELA,mode7,7,IYIBELA),A68_52 ));
break;
case 2: 
 /* line 283: */
NYIBELA = LYIBELA ;
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HVEC(OYIBELA,A_UNITE(MYIBELA,mode7,7,NYIBELA),A68_52 ));
break;
case 3: 
 /* line 284: */
SYIBELA = QYIBELA ;
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HVEC(TYIBELA,A_UNITE(RYIBELA,mode7,7,SYIBELA),A68_52 ));
break;
case 4: 
 /* line 285: */
 /* line 286: */
XYIBELA = VYIBELA ;
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HVEC(YYIBELA,A_UNITE(WYIBELA,mode7,7,XYIBELA),A68_52 ));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 287: */
 /* line 288: */
AZIBELA.fn.fn_global = LRAAOSL_newline;
AZIBELA.nonlocals = A68_NIL;
GFBAOSL_put(NL(TUIBELA_ege_channel), A_HVEC(BZIBELA,A_UNITE(ZYIBELA,mode12,12,AZIBELA),A68_52 ));
} 
else
{ 
 /* line 289: */
A_CALLPROC(NL(Flt),(Msgno, Params),(Msgno, Params,(NL(Flt)).nonlocals));
} 
} 
A_PROC_EXIT(newmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  RZIBELA_anonymous(A68_445  Names, A68_97  Flt)
{ 
 /* line 308: */
KPIBELA_graphicsspecs(Names, Flt);
return;
} 
#undef NL

A_STATIC A68_VOID  NAJBELA_anonymous(A68_445  Names, A68_97  Flt)
{ 
 /* line 318: */
CPIBELA_graphicslayout(Names, Flt);
return;
} 
#undef NL

A_STATIC A68_VOID  DBJBELA_anonymous(A68_445  Names, A68_97  Flt)
{ 
A68_INT  EBJBELA;  /* YIELD */
A68_134  FBJBELA;  /* avoid structure result */
A68_134  GBJBELA_fname;
A68_195 * HBJBELA_ct;
A68_200  IBJBELA;  /* avoid structure result */
A68_200  JBJBELA_cr;
 /* line 328: */
{ 
EBJBELA = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Names,EBJBELA))), DLDAOST_source_type, Flt, &FBJBELA );
GBJBELA_fname = FBJBELA;
 /* line 329: */
HBJBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 330: */
AEKAELA_get_region( HBJBELA_ct, (*(&((&(HXJAELA_library->Currentct))->Import))), &IBJBELA );
JBJBELA_cr = IBJBELA;
 /* line 331: */
 /* line 332: */
 /* line 333: */
VTIBELA_graphicscompile(JBJBELA_cr, GBJBELA_fname, Flt);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  AIIBELA_find_outer(A68_444  Name, A68_265 * Closure, A68_97  Msg, A68_571  *ReturnedValue)
{ 
A68_BOOL  BIIBELA_found;
A68_VC  CIIBELA_id;
A68_VC  DIIBELA;  /* avoid structure result */
A68_270  EIIBELA_outer;
A68_267 * FIIBELA_outers;
A68_BOOL  GIIBELA;  /* optbool result */
A68_270  HIIBELA_o;
A68_277 * IIIBELA_dec;
A68_BOOL  JIIBELA;  /* optbool result */
A68_571  KIIBELA;  /* clause result */
A68_571  LIIBELA;  /* OPERATORS - mode -> union mode */
A68_46  OIIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_571  PIIBELA;  /* OPERATORS - skip to mode */
A68_571  QIIBELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(find_outer);
 /* line 55: */
 /* line 56: */
{ 
BIIBELA_found = A68_FALSE;
 /* line 57: */
CIIBELA_id = TTCAOST_nullid;
 /* line 58: */
if ( HKFAOST_is_fnname(Name) )
{ 
LKFAOST_get_fnname( Name, Msg, &DIIBELA );
CIIBELA_id = DIIBELA;
} 
 /* line 59: */
 /* line 60: */
if ( A_VC_NE(CIIBELA_id,TTCAOST_nullid) )
{ 
 /* line 61: */
FIIBELA_outers = (*(&(Closure->Outers)));
 /* line 62: */
for ( ;; )
{ 
 /* line 63: */
GIIBELA = (FIIBELA_outers!=HBAATRN_nilouters);
if ( GIIBELA )
{GIIBELA = !BIIBELA_found;
}
if ( !(GIIBELA) ) break;
HIIBELA_o = (*(&(FIIBELA_outers->Outer)));
 /* line 64: */
 /* line 65: */
if ( (HIIBELA_o.Sort==VKAATRN_outerfn) )
{ 
IIIBELA_dec = CQMATRN_get_outerfn(HIIBELA_o);
 /* line 66: */
JIIBELA = (IIIBELA_dec!=YAAATRN_nilfndec);
if ( JIIBELA )
{ /* line 67: */
JIIBELA = A_VC_EQ((*(&(IIIBELA_dec->Fnname))),CIIBELA_id);
}
if ( JIIBELA )
{ 
EIIBELA_outer = HIIBELA_o;
 /* line 68: */
 /* line 69: */
 /* line 70: */
BIIBELA_found = A68_TRUE;
} 
} 
 /* line 71: */
 /* line 72: */
FIIBELA_outers = (*(&(FIIBELA_outers->Rest)));
}
 /* line 73: */
 /* line 74: */
 /* line 75: */
if ( BIIBELA_found )
{ 
KIIBELA = A_UNITE(LIIBELA,mode1,1,EIIBELA_outer);
} 
else
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(OIIBELA,A_VC_PLUS(CIIBELA_id,NIIBELA),A68_VC )),(WHAAOSI_user, A_HVEC(OIIBELA,A_VC_PLUS(CIIBELA_id,NIIBELA),A68_VC ),(Msg).nonlocals));
 /* line 76: */
 /* line 77: */
 /* line 78: */
KIIBELA = PIIBELA;
} 
} 
else
{ 
 /* line 79: */
KIIBELA = A_UNITE(QIIBELA,mode2,2,Closure);
} 
} 
A_PROC_EXIT(find_outer);
*ReturnedValue = (KIIBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UIIBELA_printdecs(A68_445  Names, A68_265 * Closure, A68_97  Msg)
{ 
A68_409  GJIBELA_print_layout;   /* proc value of non-global proc */
A68_571  LJIBELA;  /* clause result */
A68_INT  MJIBELA;  /* YIELD */
A68_571  NJIBELA;  /* avoid structure result */
A68_571  OJIBELA;  /* OPERATORS - mode -> union mode */
A68_571  PJIBELA_oc;
A68_571  QJIBELA;  /* united object - for case conformity */
A68_270  RJIBELA_o;
A68_267 * SJIBELA_os;
A_PROC_ENTRY(printdecs);
 /* line 82: */
 /* line 83: */
{ 
 /* line 86: */
A_CLOSURE( GJIBELA_print_layout, HJIBELA_print_layout, IJIBELA_print_layout );
 /* line 90: */
 /* line 91: */
if ( (Names.upb>1) )
{ 
 /* line 92: */
 /* line 93: */
MJIBELA = 2 ;
AIIBELA_find_outer( (*(&A_VINDEX(Names,MJIBELA))), Closure, Msg, &NJIBELA );
LJIBELA = NJIBELA;
} 
else
{ 
LJIBELA = A_UNITE(OJIBELA,mode2,2,Closure);
} 
PJIBELA_oc = LJIBELA;
 /* line 94: */
LRAAOSL_newline(LEAAOST_out);
 /* line 95: */
 /* line 96: */
QJIBELA = PJIBELA_oc ;
switch ( QJIBELA.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE271)  */
RJIBELA_o = (QJIBELA.data.mode1);
 /* line 97: */
A_CALLPROC(GJIBELA_print_layout,(RJIBELA_o, Msg),(RJIBELA_o, Msg,(GJIBELA_print_layout).nonlocals));
break;
default: 
SJIBELA_os = (*(&(Closure->Outers)));
 /* line 98: */
for ( ;; )
{ 
 /* line 99: */
if ( !((SJIBELA_os!=HBAATRN_nilouters)) ) break;
A_CALLPROC(GJIBELA_print_layout,((*(&(SJIBELA_os->Outer))), Msg),((*(&(SJIBELA_os->Outer))), Msg,(GJIBELA_print_layout).nonlocals));
 /* line 100: */
 /* line 101: */
SJIBELA_os = (*(&(SJIBELA_os->Rest)));
}
 /* line 102: */
 /* line 103: */
break;
} 
} 
A_PROC_EXIT(printdecs);
return;
} 
#undef NL

A_STATIC A68_VOID  WJIBELA_printspecs(A68_34 * Channel, A68_265 * Closure, A68_97  Msg)
{ 
A68_255  AKIBELA_put_layout;   /* proc value of non-global proc */
A68_409  HKIBELA_print_layout;   /* proc value of non-global proc */
A68_577  MKIBELA_fnbody_sort;   /* proc value of non-global proc */
A68_267 * SLIBELA_os;
A68_270  TLIBELA_o;
A68_279  ULIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * VLIBELA;  /* YIELD */
A68_585  WLIBELA;  /* collateral clause result */
A68_52  ZLIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  AMIBELA;  /* YIELD */
A68_52  BMIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  CMIBELA;  /* YIELD */
A68_52  DMIBELA;  /* OPERATORS - mode -> union mode */
A68_56  EMIBELA;  /* procedure value */
A68_85  FMIBELA;  /* OPERATORS - istruct -> vector */
A68_279  GMIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * HMIBELA;  /* YIELD */
A68_585  IMIBELA;  /* collateral clause result */
A68_52  LMIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MMIBELA;  /* YIELD */
A68_52  NMIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  OMIBELA;  /* YIELD */
A68_52  PMIBELA;  /* OPERATORS - mode -> union mode */
A68_56  QMIBELA;  /* procedure value */
A68_85  RMIBELA;  /* OPERATORS - istruct -> vector */
A68_279  SMIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * TMIBELA;  /* YIELD */
A68_585  UMIBELA;  /* collateral clause result */
A68_52  XMIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YMIBELA;  /* YIELD */
A68_52  ZMIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  ANIBELA;  /* YIELD */
A68_52  BNIBELA;  /* OPERATORS - mode -> union mode */
A68_56  CNIBELA;  /* procedure value */
A68_85  DNIBELA;  /* OPERATORS - istruct -> vector */
A68_277 * ENIBELA_dec;
A68_BOOL  FNIBELA_print;
A68_278  GNIBELA;  /* != */
A68_BOOL  HNIBELA;  /* optbool result */
A68_393 * INIBELA_ms;
A68_278  JNIBELA;  /* forall yield */
A68_INT  KNIBELA;  /* forall loop counter */
A68_394  LNIBELA;  /* united object - for case conformity */
A68_338  MNIBELA_fn;
A68_273  NNIBELA;  /* OPERATORS - simple index */
A68_INT  ONIBELA;  /* YIELD */
A68_279  PNIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * QNIBELA;  /* YIELD */
A68_339  RNIBELA_tn;
A68_274  SNIBELA;  /* OPERATORS - simple index */
A68_INT  TNIBELA;  /* YIELD */
A68_279  UNIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * VNIBELA;  /* YIELD */
A68_VC  WNIBELA;  /* avoid structure result */
A68_VC  XNIBELA_body_sort;
A68_299  YNIBELA;  /* OPERATORS - mode -> union mode */
A68_282  ZNIBELA;  /* OPERATORS - mode -> union mode */
A68_284 * AOIBELA;  /* YIELD */
A68_282 * BOIBELA;  /* YIELD */
A68_279  COIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * DOIBELA;  /* YIELD */
A68_387 * EOIBELA_n;
A68_281  FOIBELA;  /* forall yield */
A68_INT  GOIBELA;  /* forall loop counter */
A68_279  HOIBELA;  /* OPERATORS - mode -> union mode */
A68_279 * IOIBELA;  /* YIELD */
A68_586  JOIBELA;  /* collateral clause result */
A68_52  KOIBELA;  /* OPERATORS - mode -> union mode */
A68_52  NOIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OOIBELA;  /* YIELD */
A68_52  POIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  QOIBELA;  /* YIELD */
A68_52  TOIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  UOIBELA;  /* YIELD */
A68_52  VOIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  WOIBELA;  /* YIELD */
A68_52  XOIBELA;  /* OPERATORS - mode -> union mode */
A68_56  YOIBELA;  /* procedure value */
A68_85  ZOIBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printspecs);
 /* line 106: */
 /* line 107: */
{ 
A_CLOSURE( AKIBELA_put_layout, BKIBELA_put_layout, CKIBELA_put_layout );
(( CKIBELA_put_layout * ) ( AKIBELA_put_layout.nonlocals )) -> Channel = Channel;
 /* line 110: */
A_CLOSURE( HKIBELA_print_layout, IKIBELA_print_layout, JKIBELA_print_layout );
(( JKIBELA_print_layout * ) ( HKIBELA_print_layout.nonlocals )) -> AKIBELA_put_layout = AKIBELA_put_layout;
 /* line 114: */
A_CLOSURE( MKIBELA_fnbody_sort, NKIBELA_fnbody_sort, OKIBELA_fnbody_sort );
(( OKIBELA_fnbody_sort * ) ( MKIBELA_fnbody_sort.nonlocals )) -> MKIBELA_fnbody_sort = MKIBELA_fnbody_sort;
 /* line 130: */
SLIBELA_os = (*(&(Closure->Outers)));
 /* line 131: */
for ( ;; )
{ 
 /* line 132: */
if ( !((SLIBELA_os!=HBAATRN_nilouters)) ) break;
TLIBELA_o = (*(&(SLIBELA_os->Outer)));
 /* line 133: */
 /* line 134: */
switch ( TLIBELA_o.Sort )
{ 
case 1: 
 /* line 141: */
/*SKIP*/;
break;
case 2: 
{ 
VLIBELA = (&(HPMATRN_get_outerint(TLIBELA_o)->Attr)) ;
(*VLIBELA) = A_UNITE(ULIBELA,mode5,5,(&ZHAATRN_attrnull));
 /* line 142: */
A_CALLPROC(HKIBELA_print_layout,(TLIBELA_o, Msg),(TLIBELA_o, Msg,(HKIBELA_print_layout).nonlocals));
 /* line 143: */
AMIBELA = YLIBELA ;
WLIBELA.data[0] = A_UNITE(ZLIBELA,mode7,7,AMIBELA);
CMIBELA = (*(&((*(&(HPMATRN_get_outerint(TLIBELA_o)->Usage)))->Libv_spec))) ;
WLIBELA.data[1] = A_UNITE(BMIBELA,mode1,1,CMIBELA);
EMIBELA.fn.fn_global = LRAAOSL_newline;
EMIBELA.nonlocals = A68_NIL;
WLIBELA.data[2] = A_UNITE(DMIBELA,mode12,12,EMIBELA);
 /* line 144: */
 /* line 146: */
GFBAOSL_put(Channel, A_HISVEC(FMIBELA,WLIBELA,3,A68_52 ));
} 
break;
case 3: 
{ 
HMIBELA = (&(OPMATRN_get_outertype(TLIBELA_o)->Attr)) ;
(*HMIBELA) = A_UNITE(GMIBELA,mode5,5,(&ZHAATRN_attrnull));
 /* line 147: */
A_CALLPROC(HKIBELA_print_layout,(TLIBELA_o, Msg),(TLIBELA_o, Msg,(HKIBELA_print_layout).nonlocals));
 /* line 148: */
MMIBELA = KMIBELA ;
IMIBELA.data[0] = A_UNITE(LMIBELA,mode7,7,MMIBELA);
OMIBELA = (*(&((*(&(OPMATRN_get_outertype(TLIBELA_o)->Usage)))->Libv_spec))) ;
IMIBELA.data[1] = A_UNITE(NMIBELA,mode1,1,OMIBELA);
QMIBELA.fn.fn_global = LRAAOSL_newline;
QMIBELA.nonlocals = A68_NIL;
IMIBELA.data[2] = A_UNITE(PMIBELA,mode12,12,QMIBELA);
 /* line 149: */
 /* line 151: */
GFBAOSL_put(Channel, A_HISVEC(RMIBELA,IMIBELA,3,A68_52 ));
} 
break;
case 4: 
{ 
TMIBELA = (&(VPMATRN_get_outerconst(TLIBELA_o)->Attr)) ;
(*TMIBELA) = A_UNITE(SMIBELA,mode5,5,(&ZHAATRN_attrnull));
 /* line 152: */
A_CALLPROC(HKIBELA_print_layout,(TLIBELA_o, Msg),(TLIBELA_o, Msg,(HKIBELA_print_layout).nonlocals));
 /* line 153: */
YMIBELA = WMIBELA ;
UMIBELA.data[0] = A_UNITE(XMIBELA,mode7,7,YMIBELA);
ANIBELA = (*(&((*(&(VPMATRN_get_outerconst(TLIBELA_o)->Usage)))->Libv_spec))) ;
UMIBELA.data[1] = A_UNITE(ZMIBELA,mode1,1,ANIBELA);
CNIBELA.fn.fn_global = LRAAOSL_newline;
CNIBELA.nonlocals = A68_NIL;
UMIBELA.data[2] = A_UNITE(BNIBELA,mode12,12,CNIBELA);
 /* line 154: */
 /* line 156: */
GFBAOSL_put(Channel, A_HISVEC(DNIBELA,UMIBELA,3,A68_52 ));
} 
break;
case 5: 
{ 
ENIBELA_dec = CQMATRN_get_outerfn(TLIBELA_o);
 /* line 157: */
FNIBELA_print = A68_TRUE;
 /* line 158: */
 /* line 159: */
GNIBELA = (*(&(ENIBELA_dec->Macspecs))) ;
HNIBELA = ! A_VSTRUCTCOMP(GNIBELA,FBAATRN_nilmacspecs);
if ( HNIBELA )
{ /* line 160: */
HNIBELA = ((*(&(ENIBELA_dec->Macspecs))).upb>0);
}
if ( HNIBELA )
{ 
 /* line 161: */
JNIBELA = (*(&(ENIBELA_dec->Macspecs))) ;
KNIBELA = JNIBELA.upb -1;
INIBELA_ms = JNIBELA.data;
for (;KNIBELA-- >= 0;
(INIBELA_ms++
) )
{
 /* line 162: */
LNIBELA = (*(&(INIBELA_ms->Spec))) ;
switch ( LNIBELA.mode )
{ 
case 2: /* STRUCT(INT)  */
MNIBELA_fn = (LNIBELA.data.mode2);
 /* line 163: */
 /* line 164: */
NNIBELA = (*(&(TLIBELA_o.Environ->Ints))) ;
ONIBELA = MNIBELA_fn.Intno ;
QNIBELA = (&((*(&A_VINDEX(NNIBELA,ONIBELA)))->Attr)) ;
(*QNIBELA) = A_UNITE(PNIBELA,mode5,5,(&ZHAATRN_attrnull));
break;
case 3: /* STRUCT(INT)  */
RNIBELA_tn = (LNIBELA.data.mode3);
 /* line 165: */
 /* line 166: */
SNIBELA = (*(&(TLIBELA_o.Environ->Types))) ;
TNIBELA = RNIBELA_tn.Typeno ;
VNIBELA = (&((*(&A_VINDEX(SNIBELA,TNIBELA)))->Attr)) ;
(*VNIBELA) = A_UNITE(UNIBELA,mode5,5,(&ZHAATRN_attrnull));
break;
default: 
 /* line 167: */
 /* line 168: */
FNIBELA_print = A68_FALSE;
break;
} 
}
 /* line 169: */
} 
 /* line 170: */
 /* line 171: */
if ( FNIBELA_print )
{ 
A_CALLPROC(MKIBELA_fnbody_sort,((*(&(ENIBELA_dec->Fnbody))), &WNIBELA),((*(&(ENIBELA_dec->Fnbody))), &WNIBELA,(MKIBELA_fnbody_sort).nonlocals));
XNIBELA_body_sort = WNIBELA;
 /* line 172: */
AOIBELA = WGAATRN_makeunittag(A_UNITE(YNIBELA,mode6,6,(&RIAATRN_cvoid))) ;
BOIBELA = (&(ENIBELA_dec->Fnbody)) ;
(*BOIBELA) = A_UNITE(ZNIBELA,mode1,1,AOIBELA);
 /* line 173: */
DOIBELA = (&(ENIBELA_dec->Attr)) ;
(*DOIBELA) = A_UNITE(COIBELA,mode5,5,(&ZHAATRN_attrnull));
 /* line 174: */
FOIBELA = (*(&(ENIBELA_dec->Nametypes))) ;
GOIBELA = FOIBELA.upb -1;
EOIBELA_n = FOIBELA.data;
for (;GOIBELA-- >= 0;
(EOIBELA_n++
) )
{
IOIBELA = (&(EOIBELA_n->Attr)) ;
(*IOIBELA) = A_UNITE(HOIBELA,mode5,5,(&ZHAATRN_attrnull));
}
 /* line 175: */
A_CALLPROC(HKIBELA_print_layout,(TLIBELA_o, Msg),(TLIBELA_o, Msg,(HKIBELA_print_layout).nonlocals));
 /* line 176: */
JOIBELA.data[0] = A_UNITE(KOIBELA,mode7,7,XNIBELA_body_sort);
OOIBELA = MOIBELA ;
JOIBELA.data[1] = A_UNITE(NOIBELA,mode7,7,OOIBELA);
QOIBELA = (*(&((*(&(ENIBELA_dec->Usage)))->Libv_spec))) ;
JOIBELA.data[2] = A_UNITE(POIBELA,mode1,1,QOIBELA);
 /* line 177: */
UOIBELA = SOIBELA ;
JOIBELA.data[3] = A_UNITE(TOIBELA,mode7,7,UOIBELA);
WOIBELA = (*(&((*(&(ENIBELA_dec->Usage)))->Libv_body))) ;
JOIBELA.data[4] = A_UNITE(VOIBELA,mode1,1,WOIBELA);
YOIBELA.fn.fn_global = LRAAOSL_newline;
YOIBELA.nonlocals = A68_NIL;
JOIBELA.data[5] = A_UNITE(XOIBELA,mode12,12,YOIBELA);
 /* line 178: */
 /* line 179: */
 /* line 180: */
GFBAOSL_put(Channel, A_HISVEC(ZOIBELA,JOIBELA,6,A68_52 ));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 181: */
 /* line 182: */
SLIBELA_os = (*(&(SLIBELA_os->Rest)));
}
 /* line 183: */
} 
A_PROC_EXIT(printspecs);
return;
} 
#undef NL

A_STATIC A68_VOID  CPIBELA_graphicslayout(A68_445  Names, A68_97  Msg)
{ 
A68_INT  DPIBELA;  /* YIELD */
A68_VC  EPIBELA;  /* avoid structure result */
A68_VC  FPIBELA_ctn;
A68_195 * GPIBELA_ct;
A68_265 * HPIBELA_alldecs;
A_PROC_ENTRY(graphicslayout);
 /* line 189: */
 /* line 190: */
{ 
DPIBELA = 1 ;
KRFAOST_get_contextname( (*(&A_VINDEX(Names,DPIBELA))), Msg, &EPIBELA );
FPIBELA_ctn = EPIBELA;
 /* line 191: */
GPIBELA_ct = XEKAELA_check_context(FPIBELA_ctn, Msg);
 /* line 192: */
HPIBELA_alldecs = XYDBELA_context_specs(GPIBELA_ct, A68_TRUE, Msg);
 /* line 193: */
 /* line 194: */
UIIBELA_printdecs(Names, HPIBELA_alldecs, Msg);
} 
A_PROC_EXIT(graphicslayout);
return;
} 
#undef NL

A_STATIC A68_VOID  KPIBELA_graphicsspecs(A68_445  Names, A68_97  Msg)
{ 
A68_VC  LPIBELA_file_name;
A68_BOOL  MPIBELA_invalid_ctname;
A68_INT  NPIBELA;  /* YIELD */
A68_VC  OPIBELA;  /* avoid structure result */
A68_VC  PPIBELA_ctn;
A68_195 * QPIBELA_ct;
A68_134  TPIBELA;  /* avoid structure result */
A68_111 * UPIBELA_esp_file;
A68_97  XPIBELA_flt_close;   /* proc value of non-global proc */
A68_36  BQIBELA_anonymous;   /* proc value of non-global proc */
A68_88  FQIBELA;  /* OPERATORS - mode -> union mode */
A68_36  GQIBELA;  /* YIELD */
A68_87  HQIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  IQIBELA;  /* YIELD */
A68_34 * JQIBELA_esp_channel;
A68_588  KQIBELA;  /* collateral clause result */
A68_52  NQIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OQIBELA;  /* YIELD */
A68_52  PQIBELA;  /* OPERATORS - mode -> union mode */
A68_56  QQIBELA;  /* procedure value */
A68_52  RQIBELA;  /* OPERATORS - mode -> union mode */
A68_56  SQIBELA;  /* procedure value */
A68_52  VQIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WQIBELA;  /* YIELD */
A68_52  XQIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YQIBELA;  /* YIELD */
A68_52  BRIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  CRIBELA;  /* YIELD */
A68_52  DRIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  ERIBELA;  /* YIELD */
A68_52  HRIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IRIBELA;  /* YIELD */
A68_VC  JRIBELA;  /* avoid structure result */
A68_52  KRIBELA;  /* OPERATORS - mode -> union mode */
A68_52  LRIBELA;  /* OPERATORS - mode -> union mode */
A68_56  MRIBELA;  /* procedure value */
A68_52  NRIBELA;  /* OPERATORS - mode -> union mode */
A68_56  ORIBELA;  /* procedure value */
A68_52  RRIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SRIBELA;  /* YIELD */
A68_85  TRIBELA;  /* OPERATORS - istruct -> vector */
A68_INT  URIBELA_no;
A68_INT  VRIBELA_i;
A68_INT  WRIBELA;  /* to part of loop */
A68_575  XRIBELA;  /* collateral clause result */
A68_52  ASIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BSIBELA;  /* YIELD */
A68_200  CSIBELA;  /* avoid structure result */
A68_VC  DSIBELA;  /* avoid structure result */
A68_52  ESIBELA;  /* OPERATORS - mode -> union mode */
A68_85  FSIBELA;  /* OPERATORS - istruct -> vector */
A68_575  GSIBELA;  /* collateral clause result */
A68_52  HSIBELA;  /* OPERATORS - mode -> union mode */
A68_56  ISIBELA;  /* procedure value */
A68_52  JSIBELA;  /* OPERATORS - mode -> union mode */
A68_56  KSIBELA;  /* procedure value */
A68_85  LSIBELA;  /* OPERATORS - istruct -> vector */
A68_591  MSIBELA;  /* collateral clause result */
A68_52  PSIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QSIBELA;  /* YIELD */
A68_52  RSIBELA;  /* OPERATORS - mode -> union mode */
A68_56  SSIBELA;  /* procedure value */
A68_52  VSIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WSIBELA;  /* YIELD */
A68_52  XSIBELA;  /* OPERATORS - mode -> union mode */
A68_56  YSIBELA;  /* procedure value */
A68_85  ZSIBELA;  /* OPERATORS - istruct -> vector */
A68_585  ATIBELA;  /* collateral clause result */
A68_52  DTIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ETIBELA;  /* YIELD */
A68_52  FTIBELA;  /* OPERATORS - mode -> union mode */
A68_52  GTIBELA;  /* OPERATORS - mode -> union mode */
A68_56  HTIBELA;  /* procedure value */
A68_85  ITIBELA;  /* OPERATORS - istruct -> vector */
A68_265 * JTIBELA_allspecs;
A68_575  KTIBELA;  /* collateral clause result */
A68_52  NTIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OTIBELA;  /* YIELD */
A68_52  PTIBELA;  /* OPERATORS - mode -> union mode */
A68_56  QTIBELA;  /* procedure value */
A68_85  RTIBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(graphicsspecs);
 /* line 197: */
 /* line 198: */
{ 
 /* line 199: */
MPIBELA_invalid_ctname = A68_FALSE;
 /* line 201: */
NPIBELA = 1 ;
KRFAOST_get_contextname( (*(&A_VINDEX(Names,NPIBELA))), Msg, &OPIBELA );
PPIBELA_ctn = OPIBELA;
 /* line 202: */
QPIBELA_ct = UDKAELA_get_context(PPIBELA_ctn);
 /* line 203: */
 /* line 204: */
if ( (QPIBELA_ct==DVJAELA_nilcontxt) )
{ 
MPIBELA_invalid_ctname = A68_TRUE;
 /* line 205: */
 /* line 206: */
LPIBELA_file_name = (*(&(HXJAELA_library->Name)));
} 
else
{ 
 /* line 207: */
LPIBELA_file_name = PPIBELA_ctn;
} 
 /* line 208: */
TNCAOSI_parse_filename( LPIBELA_file_name, SPIBELA, Msg, &TPIBELA );
LPIBELA_file_name = TPIBELA.Filename;
 /* line 210: */
UPIBELA_esp_file = FQBAOSI_open_file(LPIBELA_file_name, TNBAOSI_write_access, Msg);
 /* line 212: */
A_CLOSURE( XPIBELA_flt_close, YPIBELA_flt_close, ZPIBELA_flt_close );
(( ZPIBELA_flt_close * ) ( XPIBELA_flt_close.nonlocals )) -> UPIBELA_esp_file = UPIBELA_esp_file;
(( ZPIBELA_flt_close * ) ( XPIBELA_flt_close.nonlocals )) -> Msg = Msg;
 /* line 218: */
SOAAOST_flt_if_interrupted(XPIBELA_flt_close);
 /* line 220: */
 /* line 221: */
A_CLOSURE( BQIBELA_anonymous, CQIBELA_anonymous, DQIBELA_anonymous );
(( DQIBELA_anonymous * ) ( BQIBELA_anonymous.nonlocals )) -> UPIBELA_esp_file = UPIBELA_esp_file;
(( DQIBELA_anonymous * ) ( BQIBELA_anonymous.nonlocals )) -> XPIBELA_flt_close = XPIBELA_flt_close;
GQIBELA = BQIBELA_anonymous ;
IQIBELA = 80 ;
JQIBELA_esp_channel = XPAAOSL_make_channel(A_UNITE(HQIBELA,mode1,1,IQIBELA), A_UNITE(FQIBELA,mode1,1,GQIBELA));
 /* line 222: */
OQIBELA = MQIBELA ;
KQIBELA.data[0] = A_UNITE(NQIBELA,mode7,7,OQIBELA);
QQIBELA.fn.fn_global = LRAAOSL_newline;
QQIBELA.nonlocals = A68_NIL;
KQIBELA.data[1] = A_UNITE(PQIBELA,mode12,12,QQIBELA);
SQIBELA.fn.fn_global = LRAAOSL_newline;
SQIBELA.nonlocals = A68_NIL;
KQIBELA.data[2] = A_UNITE(RQIBELA,mode12,12,SQIBELA);
 /* line 223: */
WQIBELA = UQIBELA ;
KQIBELA.data[3] = A_UNITE(VQIBELA,mode7,7,WQIBELA);
YQIBELA = (*(&(HXJAELA_library->Name))) ;
KQIBELA.data[4] = A_UNITE(XQIBELA,mode7,7,YQIBELA);
CRIBELA = ARIBELA ;
KQIBELA.data[5] = A_UNITE(BRIBELA,mode7,7,CRIBELA);
ERIBELA = (*(&(HXJAELA_library->Version))) ;
KQIBELA.data[6] = A_UNITE(DRIBELA,mode1,1,ERIBELA);
 /* line 224: */
IRIBELA = GRIBELA ;
KQIBELA.data[7] = A_UNITE(HRIBELA,mode7,7,IRIBELA);
QDDAOST_date_time( DZCAOST_seconds(), &JRIBELA );
KQIBELA.data[8] = A_UNITE(KRIBELA,mode7,7,JRIBELA);
MRIBELA.fn.fn_global = LRAAOSL_newline;
MRIBELA.nonlocals = A68_NIL;
KQIBELA.data[9] = A_UNITE(LRIBELA,mode12,12,MRIBELA);
ORIBELA.fn.fn_global = LRAAOSL_newline;
ORIBELA.nonlocals = A68_NIL;
KQIBELA.data[10] = A_UNITE(NRIBELA,mode12,12,ORIBELA);
SRIBELA = QRIBELA ;
KQIBELA.data[11] = A_UNITE(RRIBELA,mode7,7,SRIBELA);
GFBAOSL_put(JQIBELA_esp_channel, A_HISVEC(TRIBELA,KQIBELA,12,A68_52 ));
 /* line 226: */
URIBELA_no = YCDBELA_ordercontexts();
 /* line 227: */
WRIBELA = URIBELA_no;
for ( VRIBELA_i = 1;
VRIBELA_i <= WRIBELA;
VRIBELA_i += 1 )
{ 
BSIBELA = ZRIBELA ;
XRIBELA.data[0] = A_UNITE(ASIBELA,mode7,7,BSIBELA);
RLBBELA_ctno_region( VRIBELA_i, &CSIBELA );
UAKAELA_ctos( CSIBELA, &DSIBELA );
XRIBELA.data[1] = A_UNITE(ESIBELA,mode7,7,DSIBELA);
GFBAOSL_put(JQIBELA_esp_channel, A_HISVEC(FSIBELA,XRIBELA,2,A68_52 ));
}
 /* line 228: */
ISIBELA.fn.fn_global = LRAAOSL_newline;
ISIBELA.nonlocals = A68_NIL;
GSIBELA.data[0] = A_UNITE(HSIBELA,mode12,12,ISIBELA);
KSIBELA.fn.fn_global = LRAAOSL_newline;
KSIBELA.nonlocals = A68_NIL;
GSIBELA.data[1] = A_UNITE(JSIBELA,mode12,12,KSIBELA);
GFBAOSL_put(JQIBELA_esp_channel, A_HISVEC(LSIBELA,GSIBELA,2,A68_52 ));
 /* line 230: */
 /* line 231: */
if ( MPIBELA_invalid_ctname )
{ 
QSIBELA = OSIBELA ;
MSIBELA.data[0] = A_UNITE(PSIBELA,mode7,7,QSIBELA);
SSIBELA.fn.fn_global = LRAAOSL_newline;
SSIBELA.nonlocals = A68_NIL;
MSIBELA.data[1] = A_UNITE(RSIBELA,mode12,12,SSIBELA);
 /* line 232: */
WSIBELA = USIBELA ;
MSIBELA.data[2] = A_UNITE(VSIBELA,mode7,7,WSIBELA);
YSIBELA.fn.fn_global = LRAAOSL_newline;
YSIBELA.nonlocals = A68_NIL;
MSIBELA.data[3] = A_UNITE(XSIBELA,mode12,12,YSIBELA);
 /* line 233: */
GFBAOSL_put(JQIBELA_esp_channel, A_HISVEC(ZSIBELA,MSIBELA,4,A68_52 ));
} 
else
{ 
ETIBELA = CTIBELA ;
ATIBELA.data[0] = A_UNITE(DTIBELA,mode7,7,ETIBELA);
ATIBELA.data[1] = A_UNITE(FTIBELA,mode7,7,PPIBELA_ctn);
HTIBELA.fn.fn_global = LRAAOSL_newline;
HTIBELA.nonlocals = A68_NIL;
ATIBELA.data[2] = A_UNITE(GTIBELA,mode12,12,HTIBELA);
GFBAOSL_put(JQIBELA_esp_channel, A_HISVEC(ITIBELA,ATIBELA,3,A68_52 ));
 /* line 234: */
 /* line 235: */
if ( !ZBKAELA_no_text(QPIBELA_ct, Msg) )
{ 
JTIBELA_allspecs = XYDBELA_context_specs(QPIBELA_ct, A68_TRUE, XPIBELA_flt_close);
 /* line 236: */
 /* line 237: */
WJIBELA_printspecs(JQIBELA_esp_channel, JTIBELA_allspecs, XPIBELA_flt_close);
} 
 /* line 238: */
OTIBELA = MTIBELA ;
KTIBELA.data[0] = A_UNITE(NTIBELA,mode7,7,OTIBELA);
QTIBELA.fn.fn_global = LRAAOSL_newline;
QTIBELA.nonlocals = A68_NIL;
KTIBELA.data[1] = A_UNITE(PTIBELA,mode12,12,QTIBELA);
 /* line 239: */
GFBAOSL_put(JQIBELA_esp_channel, A_HISVEC(RTIBELA,KTIBELA,2,A68_52 ));
} 
 /* line 240: */
 /* line 241: */
XQBAOSI_close_file(UPIBELA_esp_file, Msg);
} 
A_PROC_EXIT(graphicsspecs);
return;
} 
#undef NL

A_STATIC A68_VOID  VTIBELA_graphicscompile(A68_200  Cr, A68_134  Filename, A68_97  Flt)
{ 
A68_176  WTIBELA_ptrlastcomp;
A68_111 * XTIBELA_comp_file;
A68_593  YTIBELA;  /* collateral clause result */
A68_46  BUIBELA;  /* OPERATORS - istruct -> vector */
A68_VC  CUIBELA;  /* avoid structure result */
A68_VC  DUIBELA_ege_name;
A68_111 * EUIBELA_ege_file;
A68_97  HUIBELA_flt_close;   /* proc value of non-global proc */
A68_36  LUIBELA_anonymous;   /* proc value of non-global proc */
A68_88  PUIBELA;  /* OPERATORS - mode -> union mode */
A68_36  QUIBELA;  /* YIELD */
A68_87  RUIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  SUIBELA;  /* YIELD */
A68_34 * TUIBELA_ege_channel;
A68_594  UUIBELA;  /* collateral clause result */
A68_52  XUIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YUIBELA;  /* YIELD */
A68_52  ZUIBELA;  /* OPERATORS - mode -> union mode */
A68_56  AVIBELA;  /* procedure value */
A68_52  BVIBELA;  /* OPERATORS - mode -> union mode */
A68_56  CVIBELA;  /* procedure value */
A68_52  FVIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GVIBELA;  /* YIELD */
A68_52  HVIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IVIBELA;  /* YIELD */
A68_52  LVIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MVIBELA;  /* YIELD */
A68_52  NVIBELA;  /* OPERATORS - mode -> union mode */
A68_INT  OVIBELA;  /* YIELD */
A68_52  RVIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SVIBELA;  /* YIELD */
A68_VC  TVIBELA;  /* avoid structure result */
A68_52  UVIBELA;  /* OPERATORS - mode -> union mode */
A68_52  VVIBELA;  /* OPERATORS - mode -> union mode */
A68_56  WVIBELA;  /* procedure value */
A68_52  XVIBELA;  /* OPERATORS - mode -> union mode */
A68_56  YVIBELA;  /* procedure value */
A68_85  ZVIBELA;  /* OPERATORS - istruct -> vector */
A68_591  AWIBELA;  /* collateral clause result */
A68_52  DWIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  EWIBELA;  /* YIELD */
A68_VC  FWIBELA;  /* avoid structure result */
A68_52  GWIBELA;  /* OPERATORS - mode -> union mode */
A68_52  HWIBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  IWIBELA;  /* YIELD */
A68_64  JWIBELA;  /* avoid structure result */
A68_52  KWIBELA;  /* OPERATORS - mode -> union mode */
A68_85  LWIBELA;  /* OPERATORS - istruct -> vector */
A68_97  OWIBELA_newmsg;   /* proc value of non-global proc */
A68_497  CZIBELA;  /* OPERATORS - mode -> union mode */
A68_176  DZIBELA;  /* avoid structure result */
A_PROC_ENTRY(graphicscompile);
 /* line 244: */
 /* line 245: */
{ 
WTIBELA_ptrlastcomp = UACAELA_nilptr;
 /* line 246: */
XTIBELA_comp_file = FQBAOSI_open_file(Filename.Filename, PNBAOSI_read_access, Flt);
 /* line 247: */
YTIBELA.data[0] = Filename.Name;
YTIBELA.data[1] = AUIBELA;
JBAAOSI_concat( A_HISVEC(BUIBELA,YTIBELA,2,A68_VC ), &CUIBELA );
DUIBELA_ege_name = CUIBELA;
 /* line 248: */
EUIBELA_ege_file = FQBAOSI_open_file(DUIBELA_ege_name, TNBAOSI_write_access, Flt);
 /* line 250: */
A_CLOSURE( HUIBELA_flt_close, IUIBELA_flt_close, JUIBELA_flt_close );
(( JUIBELA_flt_close * ) ( HUIBELA_flt_close.nonlocals )) -> EUIBELA_ege_file = EUIBELA_ege_file;
(( JUIBELA_flt_close * ) ( HUIBELA_flt_close.nonlocals )) -> Flt = Flt;
(( JUIBELA_flt_close * ) ( HUIBELA_flt_close.nonlocals )) -> XTIBELA_comp_file = XTIBELA_comp_file;
 /* line 256: */
SOAAOST_flt_if_interrupted(HUIBELA_flt_close);
 /* line 258: */
 /* line 259: */
A_CLOSURE( LUIBELA_anonymous, MUIBELA_anonymous, NUIBELA_anonymous );
(( NUIBELA_anonymous * ) ( LUIBELA_anonymous.nonlocals )) -> EUIBELA_ege_file = EUIBELA_ege_file;
(( NUIBELA_anonymous * ) ( LUIBELA_anonymous.nonlocals )) -> HUIBELA_flt_close = HUIBELA_flt_close;
QUIBELA = LUIBELA_anonymous ;
SUIBELA = 80 ;
TUIBELA_ege_channel = XPAAOSL_make_channel(A_UNITE(RUIBELA,mode1,1,SUIBELA), A_UNITE(PUIBELA,mode1,1,QUIBELA));
 /* line 260: */
YUIBELA = WUIBELA ;
UUIBELA.data[0] = A_UNITE(XUIBELA,mode7,7,YUIBELA);
AVIBELA.fn.fn_global = LRAAOSL_newline;
AVIBELA.nonlocals = A68_NIL;
UUIBELA.data[1] = A_UNITE(ZUIBELA,mode12,12,AVIBELA);
CVIBELA.fn.fn_global = LRAAOSL_newline;
CVIBELA.nonlocals = A68_NIL;
UUIBELA.data[2] = A_UNITE(BVIBELA,mode12,12,CVIBELA);
 /* line 261: */
GVIBELA = EVIBELA ;
UUIBELA.data[3] = A_UNITE(FVIBELA,mode7,7,GVIBELA);
IVIBELA = (*(&(HXJAELA_library->Name))) ;
UUIBELA.data[4] = A_UNITE(HVIBELA,mode7,7,IVIBELA);
MVIBELA = KVIBELA ;
UUIBELA.data[5] = A_UNITE(LVIBELA,mode7,7,MVIBELA);
OVIBELA = (*(&(HXJAELA_library->Version))) ;
UUIBELA.data[6] = A_UNITE(NVIBELA,mode1,1,OVIBELA);
 /* line 262: */
SVIBELA = QVIBELA ;
UUIBELA.data[7] = A_UNITE(RVIBELA,mode7,7,SVIBELA);
QDDAOST_date_time( DZCAOST_seconds(), &TVIBELA );
UUIBELA.data[8] = A_UNITE(UVIBELA,mode7,7,TVIBELA);
WVIBELA.fn.fn_global = LRAAOSL_newline;
WVIBELA.nonlocals = A68_NIL;
UUIBELA.data[9] = A_UNITE(VVIBELA,mode12,12,WVIBELA);
YVIBELA.fn.fn_global = LRAAOSL_newline;
YVIBELA.nonlocals = A68_NIL;
UUIBELA.data[10] = A_UNITE(XVIBELA,mode12,12,YVIBELA);
GFBAOSL_put(TUIBELA_ege_channel, A_HISVEC(ZVIBELA,UUIBELA,11,A68_52 ));
 /* line 263: */
EWIBELA = CWIBELA ;
AWIBELA.data[0] = A_UNITE(DWIBELA,mode7,7,EWIBELA);
YPBAOSI_file_name( XTIBELA_comp_file, &FWIBELA );
AWIBELA.data[1] = A_UNITE(GWIBELA,mode7,7,FWIBELA);
IWIBELA = '\"' ;
AWIBELA.data[2] = A_UNITE(HWIBELA,mode6,6,IWIBELA);
HZAAOSL_lines( 2, &JWIBELA );
AWIBELA.data[3] = A_UNITE(KWIBELA,mode20,20,JWIBELA);
GFBAOSL_put(TUIBELA_ege_channel, A_HISVEC(LWIBELA,AWIBELA,4,A68_52 ));
 /* line 265: */
A_CLOSURE( OWIBELA_newmsg, PWIBELA_newmsg, QWIBELA_newmsg );
(( QWIBELA_newmsg * ) ( OWIBELA_newmsg.nonlocals )) -> TUIBELA_ege_channel = TUIBELA_ege_channel;
(( QWIBELA_newmsg * ) ( OWIBELA_newmsg.nonlocals )) -> Flt = Flt;
 /* line 291: */
NLDBELA_ella_shell( A68_FALSE, Cr, A_UNITE(CZIBELA,mode1,1,XTIBELA_comp_file), OWIBELA_newmsg, &DZIBELA );
WTIBELA_ptrlastcomp = DZIBELA;
 /* line 292: */
KOCBELA_merge_compiled(Cr, WTIBELA_ptrlastcomp, OWIBELA_newmsg);
 /* line 293: */
XQBAOSI_close_file(XTIBELA_comp_file, Flt);
 /* line 294: */
 /* line 295: */
XQBAOSI_close_file(EUIBELA_ege_file, Flt);
} 
A_PROC_EXIT(graphicscompile);
return;
} 
#undef NL

A68_VOID  EZIBELA_make_graphics_commands(A68_474  *ReturnedValue)
{ 
A68_602  GZIBELA;  /* collateral clause result */
A68_471  HZIBELA;  /* collateral clause result */
A68_VC  KZIBELA;  /* avoid structure result */
A68_VC  NZIBELA;  /* avoid structure result */
A68_475  OZIBELA;  /* OPERATORS - mode -> union mode */
A68_467  SZIBELA;  /* OPERATORS - mode -> union mode */
A68_469  TZIBELA;  /* YIELD */
A68_469  UZIBELA;  /* procedure value */
A68_471 * VZIBELA;  /* YIELD */
A68_470  WZIBELA;  /* OPERATORS - mode -> union mode */
A68_471  XZIBELA;  /* collateral clause result */
A68_VC  AAJBELA;  /* avoid structure result */
A68_599  BAJBELA;  /* collateral clause result */
A68_441  CAJBELA;  /* avoid structure result */
A68_443  DAJBELA;  /* OPERATORS - mode -> union mode */
A68_442  EAJBELA;  /* OPERATORS - istruct -> vector */
A68_441  FAJBELA;  /* avoid structure result */
A68_443  GAJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JAJBELA;  /* avoid structure result */
A68_475  KAJBELA;  /* OPERATORS - mode -> union mode */
A68_467  OAJBELA;  /* OPERATORS - mode -> union mode */
A68_469  PAJBELA;  /* YIELD */
A68_469  QAJBELA;  /* procedure value */
A68_471 * RAJBELA;  /* YIELD */
A68_470  SAJBELA;  /* OPERATORS - mode -> union mode */
A68_471  TAJBELA;  /* collateral clause result */
A68_VC  WAJBELA;  /* avoid structure result */
A68_VC  ZAJBELA;  /* avoid structure result */
A68_475  ABJBELA;  /* OPERATORS - mode -> union mode */
A68_467  KBJBELA;  /* OPERATORS - mode -> union mode */
A68_469  LBJBELA;  /* YIELD */
A68_469  MBJBELA;  /* procedure value */
A68_471 * NBJBELA;  /* YIELD */
A68_470  OBJBELA;  /* OPERATORS - mode -> union mode */
A68_474  PBJBELA;  /* clause result */
A68_474  QBJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  RBJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_470  TBJBELA;  /* OPERATORS - mode -> union mode */
A68_472 * UBJBELA;  /* YIELD */
A68_474  VBJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_474  WBJBELA;  /* avoid structure result */
A_PROC_ENTRY(make_graphics_commands);
 /* line 302: */
 /* line 303: */
ZAAAOSI_makervc( JZIBELA, &KZIBELA );
HZIBELA.Name = KZIBELA;
HZIBELA.Abreviation = EOAAOSL_nullstr;
 /* line 304: */
HZIBELA.Parameter = WPFAOST_contextname_syntax;
HZIBELA.Access = XMDAOST_normalaccess;
 /* line 306: */
HZIBELA.Continuation = ZNDAOST_continue;
 /* line 307: */
ZAAAOSI_makervc( MZIBELA, &NZIBELA );
HZIBELA.Help = A_UNITE(OZIBELA,mode1,1,NZIBELA);
UZIBELA.fn.fn_global = RZIBELA_anonymous;
UZIBELA.nonlocals = A68_NIL;
TZIBELA = UZIBELA ;
HZIBELA.Command = A_UNITE(SZIBELA,mode3,3,TZIBELA);
 /* line 310: */
VZIBELA = A_HEAP(A68_471 ) ;
(*VZIBELA) = HZIBELA ;
GZIBELA.data[0] = A_UNITE(WZIBELA,mode1,1,VZIBELA);
 /* line 311: */
ZAAAOSI_makervc( ZZIBELA, &AAJBELA );
XZIBELA.Name = AAJBELA;
 /* line 312: */
XZIBELA.Abreviation = EOAAOSL_nullstr;
BAJBELA.data[0] = WPFAOST_contextname_syntax;
LTAAOST_opt( CJFAOST_fnname_syntax, &CAJBELA );
BAJBELA.data[1] = A_UNITE(DAJBELA,mode2,2,CAJBELA);
 /* line 313: */
ATAAOST_prod( A_HISVEC(EAJBELA,BAJBELA,2,A68_443 ), &FAJBELA );
XZIBELA.Parameter = A_UNITE(GAJBELA,mode2,2,FAJBELA);
XZIBELA.Access = XMDAOST_normalaccess;
 /* line 315: */
XZIBELA.Continuation = ZNDAOST_continue;
 /* line 316: */
 /* line 317: */
ZAAAOSI_makervc( IAJBELA, &JAJBELA );
XZIBELA.Help = A_UNITE(KAJBELA,mode1,1,JAJBELA);
QAJBELA.fn.fn_global = NAJBELA_anonymous;
QAJBELA.nonlocals = A68_NIL;
PAJBELA = QAJBELA ;
XZIBELA.Command = A_UNITE(OAJBELA,mode3,3,PAJBELA);
 /* line 320: */
RAJBELA = A_HEAP(A68_471 ) ;
(*RAJBELA) = XZIBELA ;
GZIBELA.data[1] = A_UNITE(SAJBELA,mode1,1,RAJBELA);
 /* line 321: */
ZAAAOSI_makervc( VAJBELA, &WAJBELA );
TAJBELA.Name = WAJBELA;
TAJBELA.Abreviation = EOAAOSL_nullstr;
 /* line 322: */
TAJBELA.Parameter = HNFAOST_filename_syntax;
TAJBELA.Access = XMDAOST_normalaccess;
 /* line 324: */
TAJBELA.Continuation = ZNDAOST_continue;
 /* line 325: */
 /* line 326: */
 /* line 327: */
ZAAAOSI_makervc( YAJBELA, &ZAJBELA );
TAJBELA.Help = A_UNITE(ABJBELA,mode1,1,ZAJBELA);
 /* line 334: */
MBJBELA.fn.fn_global = DBJBELA_anonymous;
MBJBELA.nonlocals = A68_NIL;
LBJBELA = MBJBELA ;
TAJBELA.Command = A_UNITE(KBJBELA,mode3,3,LBJBELA);
NBJBELA = A_HEAP(A68_471 ) ;
(*NBJBELA) = TAJBELA ;
GZIBELA.data[2] = A_UNITE(OBJBELA,mode1,1,NBJBELA);
 /* line 335: */
 /* line 339: */
UBJBELA = NSDAOST_make_group(SBJBELA, A_HVEC(RBJBELA,'G',A68_CHAR ), BNDAOST_hiddenaccess, A_HISVEC(QBJBELA,GZIBELA,3,A68_470 )) ;
ARDAOST_makecommands( A_HVEC(VBJBELA,A_UNITE(TBJBELA,mode2,2,UBJBELA),A68_470 ), &WBJBELA );
PBJBELA = WBJBELA;
A_PROC_EXIT(make_graphics_commands);
*ReturnedValue = (PBJBELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void SHIBELA(void)   /* initialise DECS graphicscommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/graphicscommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/transform/assoc/mfiles/simple_layout.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/transform/assoc/mfiles/closureprocs.m","/u/model/ella/transform/assoc/mfiles/modeprocs.m","./mfiles/libmessages.m","./mfiles/compmessages.m","./mfiles/compshell.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","./mfiles/assclosure.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/libprocs.m","./mfiles/libinterface.m","./mfiles/libmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BQQBTRN();   /* USE simple_layout */
TXEAOST();   /* USE kernelreader */
SKCATRN();   /* USE closureprocs */
HNMATRN();   /* USE modeprocs */
IZAAELA();   /* USE libmessages */
CFAAELA();   /* USE compmessages */
MDDBELA();   /* USE compshell */
FMDAOST();   /* USE command */
LRAAOST();   /* USE commandsyntax */
BAAATRN();   /* USE assmodes */
MQDBELA();   /* USE assclosure */
BAAAOST();   /* USE options */
TIGAOST();   /* USE ioprocs */
ZSBBELA();   /* USE libprocs */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/graphicscommands.a68";
A_config.translation_time = "Tue Apr  4 10:41:25 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RHIBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:41:25 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS graphicscommands);
UEAALIB_a68config(LGAALIB_configinfo, WHIBELA);
 /* line 53: */
 /* line 81: */
 /* line 105: */
 /* line 185: */
 /* line 196: */
 /* line 243: */
 /* line 298: */
 /* line 299: */
 /* line 301: */
 /* line 340: */
A_PROC_EXIT(DECS graphicscommands);
} 
#undef NL
/* end of translation of ./a68files/graphicscommands.a68 */
