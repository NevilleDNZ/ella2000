
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
/* UNAME:LDKBSIM */
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
A_VECTOR(struct A68t178 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE178 */
struct A68t176{
A68_BITS  Type;
A_PAD_BITS(PAD_37)
struct A68t177  Elements;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(BITS,REF MODE177)  */
struct A68t178 { A68_INT mode; union {
A68_INT * mode1;
struct A68t176  mode2;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(REF INT,MODE176)  */
struct A68t179{
A68_INT  Sort;
A_PAD_INT(PAD_38)
A68_VC  Value;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t179 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE179 */
A_VECTOR(struct A68t181 ,A68t183);
typedef struct A68t183  A68_183 ;    /* VECTOR [] MODE181 */
struct A68t182{
A68_INT  Choice;
A_PAD_INT(PAD_39)
struct A68t183  Params;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,REF MODE183)  */
struct A68t181 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t179  mode2;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(MODE182,MODE179)  */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE97) REF MODE26 */
struct A68t184 { A68_INT mode; union {
struct A68t185  mode1;
A68_INT * mode2;
struct A68t176  mode3;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(MODE185,REF INT,MODE176)  */
struct A68t186{
A68_INT * Sort;
struct A68t184  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF INT,MODE184,REF MODE26,REF MODE26)  */
struct A68t187{
struct A68t186  Rule;
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE186,REF MODE187)  */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t177 ,struct A68t176 *),(struct A68t177 ,struct A68t176 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE177) MODE176 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t178 ,struct A68t176 *),(struct A68t178 ,struct A68t176 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE178) MODE176 */
struct A68t192 ;

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t178 ,struct A68t192 ,A68_VC *),(struct A68t178 ,struct A68t192 ,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE178,REF MODE192) REF MODE26 */
A_VECTOR(struct A68t186 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE186 */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t34 *,struct A68t192 ),(struct A68t34 *,struct A68t192 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE34,REF MODE192) VOID */
struct A68t195 ;

A_PROCEDURE(struct A68t187 *,A68t194,(struct A68t187 *,struct A68t195 ),(struct A68t187 *,struct A68t195 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE187,MODE195) REF MODE187 */
A_VECTOR(struct A68t196 ,A68t195);
typedef struct A68t195  A68_195 ;    /* VECTOR [] MODE196 */
struct A68t196{
A68_INT * No;
struct A68t184  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF INT,MODE184,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t181 ,struct A68t180 *),(struct A68t181 ,struct A68t180 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE181) REF MODE180 */

A_PROCEDURE(A68_BOOL ,A68t198,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t199,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t200,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t202,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t201{
A68_VC  Rdbuffer;
struct A68t202  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_40)
A68_INT  Rdcharno;
A_PAD_INT(PAD_41)
A68_INT  Start_of_word;
A_PAD_INT(PAD_42)
struct A68t203 * Stack;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(REF MODE26,MODE202,INT,INT,INT,REF MODE203)  */
struct A68t203{
A68_VC  Line;
struct A68t203 * Rest;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(REF MODE26,REF MODE203)  */

A_PROCEDURE(struct A68t201 *,A68t204,(A68_VC ,struct A68t202 ),(A68_VC ,struct A68t202 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE26,MODE202) REF MODE201 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t201 ),(struct A68t201 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE201) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t207,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t192 ,struct A68t178 ,struct A68t97 ,struct A68t181 *),(struct A68t192 ,struct A68t178 ,struct A68t97 ,struct A68t181 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE192,MODE178,MODE97) MODE181 */

A_PROCEDURE(A68_CHAR ,A68t209,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t210,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t179 ,A68_INT ,struct A68t97 ),(struct A68t179 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE179,INT,MODE97) VOID */
struct A68t212{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_43)
A68_BOOL  Check;
A_PAD_BOOL(PAD_44)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t212 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t212 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE212,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t214,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t179 ),(struct A68t179 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE179) BOOL */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t179 ,struct A68t97 ,A68_VC *),(struct A68t179 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE179,MODE97) REF MODE26 */
struct A68t217{
A68_INT  C;
A_PAD_INT(PAD_45)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT)  */
struct A68t218{
A68_BITS  A;
A_PAD_BITS(PAD_46)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC ,struct A68t181 ,struct A68t97 ),(A68_VC ,struct A68t181 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE26,MODE181,MODE97) VOID */
struct A68t219{
A68_VC  Parameter;
struct A68t220  Proc;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE26,MODE220)  */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t181 ,struct A68t97 ),(struct A68t181 ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE181,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t180 ,struct A68t97 ),(struct A68t180 ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE180,MODE97) VOID */
struct A68t221 { A68_INT mode; union {
struct A68t219  mode1;
struct A68t222  mode2;
struct A68t223  mode3;
} data; };
typedef struct A68t221  A68_221 ;    /* UNION(MODE219,MODE222,MODE223)  */
struct A68t224 { A68_INT mode; union {
struct A68t225 * mode1;
struct A68t226 * mode2;
struct A68t227 * mode3;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE225,REF MODE226,REF MODE227)  */
struct A68t225 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t225 *,struct A68t34 *),(struct A68t225 *,struct A68t34 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE225,REF MODE34) VOID */
struct A68t229 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t230  mode3;
} data; };
typedef struct A68t229  A68_229 ;    /* UNION(REF MODE26,REF MODE102,MODE230)  */
struct A68t225{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t178  Parameter;
struct A68t218  Access;
struct A68t217  Continuation;
struct A68t229  Help;
struct A68t221  Command;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE26,REF MODE26,MODE178,MODE218,MODE217,MODE229,MODE221)  */
A_VECTOR(struct A68t224 ,A68t228);
typedef struct A68t228  A68_228 ;    /* VECTOR [] MODE224 */
struct A68t226{
struct A68t225 * Group;
struct A68t228  Commands;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE225,REF MODE228)  */
struct A68t227{
struct A68t225 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t228  Locals;
struct A68t228  Globals;
struct A68t225 * Postlude;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(REF MODE225,REF MODE26,REF REF MODE26,REF MODE228,REF MODE228,REF MODE225)  */
struct A68t231{
struct A68t227 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_47)
struct A68t102  Input_lines;
struct A68t231 * Caller;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE227,INT,REF MODE102,REF MODE231)  */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t232 *,struct A68t225 *,struct A68t181 ,struct A68t97 ,struct A68t217 *),(struct A68t232 *,struct A68t225 *,struct A68t181 ,struct A68t97 ,struct A68t217 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE232,REF MODE225,MODE181,MODE97) MODE217 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE102) VOID */
struct A68t236 ;

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t236 ),(struct A68t236 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE236) VOID */
struct A68t232{
struct A68t231 * Stack;
struct A68t192  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_48)
A68_BOOL  Private;
A_PAD_BOOL(PAD_49)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_50)
struct A68t233  Caller;
struct A68t234  Report_error;
struct A68t235  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE231,REF MODE192,BOOL,BOOL,BOOL,MODE233,MODE234,MODE235,MODE97)  */
struct A68t236 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t236  A68_236 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t237,(struct A68t217 ,struct A68t217 ),(struct A68t217 ,struct A68t217 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE217,MODE217) BOOL */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t228 ,struct A68t228 ,struct A68t228 *),(struct A68t228 ,struct A68t228 ,struct A68t228 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE228,MODE228) REF MODE228 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t228 ,struct A68t224 ,struct A68t228 *),(struct A68t228 ,struct A68t224 ,struct A68t228 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE228,MODE224) REF MODE228 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t228 *,struct A68t228 ,struct A68t228 *),(struct A68t228 *,struct A68t228 ,struct A68t228 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF REF MODE228,MODE228) REF MODE228 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t228 *,struct A68t224 ,struct A68t228 *),(struct A68t228 *,struct A68t224 ,struct A68t228 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF REF MODE228,MODE224) REF MODE228 */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t228 ,struct A68t228 *),(struct A68t228 ,struct A68t228 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE228) REF MODE228 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t224 ,struct A68t228 *),(struct A68t224 ,struct A68t228 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE224) REF MODE228 */

A_PROCEDURE(struct A68t226 *,A68t244,(A68_VC ,A68_VC ,struct A68t218 ,struct A68t228 ),(A68_VC ,A68_VC ,struct A68t218 ,struct A68t228 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE26,MODE26,MODE218,MODE228) REF MODE226 */

A_PROCEDURE(struct A68t227 *,A68t245,(struct A68t225 *,A68_VC ,A68_VC *,struct A68t228 ,struct A68t228 ,struct A68t221 ),(struct A68t225 *,A68_VC ,A68_VC *,struct A68t228 ,struct A68t228 ,struct A68t221 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE225,MODE26,REF REF MODE26,REF MODE228,REF MODE228,MODE221) REF MODE227 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t232 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t232 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE232,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t232 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t232 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE232,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t232 *,A68t248,(struct A68t234 ,struct A68t235 ,struct A68t97 ,struct A68t233 ,struct A68t187 *,struct A68t227 *,struct A68t181 ),(struct A68t234 ,struct A68t235 ,struct A68t97 ,struct A68t233 ,struct A68t187 *,struct A68t227 *,struct A68t181 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE234,MODE235,MODE97,MODE233,REF MODE187,REF MODE227,MODE181) REF MODE232 */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t232 *,struct A68t217 *),(struct A68t232 *,struct A68t217 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE232) MODE217 */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(A68_VC ,A68_VC ,struct A68t199 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t199 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE26,MODE26,MODE199,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t252,(A68_VC ),(A68_VC ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t253,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t212 ,struct A68t97 ,A68_VC *),(struct A68t212 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE212,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t256,(struct A68t179 ,struct A68t97 ),(struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE179,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t179 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t179 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE179,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t180 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t162 *),(struct A68t180 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t162 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE180,REF INT,REF MODE26,MODE97) MODE162 */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t179 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t179 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE179,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t260,(struct A68t179 ,struct A68t97 ,struct A68t46 ),(struct A68t179 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE179,MODE97,MODE46) INT */
struct A68t261{
A68_INT  Lwb;
A_PAD_INT(PAD_51)
A68_INT  Upb;
A_PAD_INT(PAD_52)
};
typedef struct A68t261  A68_261 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t179 ,struct A68t261 ,struct A68t97 ,struct A68t261 *),(struct A68t179 ,struct A68t261 ,struct A68t97 ,struct A68t261 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE179,MODE261,MODE97) MODE261 */

A_PROCEDURE(A68_VOID ,A68t263,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t264,(struct A68t179 ,struct A68t97 ),(struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE179,MODE97) CHAR */

A_PROCEDURE(struct A68t187 *,A68t265,(void),(void *));
typedef struct A68t265  A68_265 ;    /* PROC REF MODE187 */
struct A68t266{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_53)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_54)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_55)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_56)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_57)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_58)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_59)
A68_INT  Width;
A_PAD_INT(PAD_60)
A68_INT  Page_count;
A_PAD_INT(PAD_61)
A68_INT  Page_length;
A_PAD_INT(PAD_62)
A68_INT  Eof_count;
A_PAD_INT(PAD_63)
struct A68t201 * Standard_reader;
struct A68t267 * Infile;
struct A68t173  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE201,REF MODE267,MODE173,REF MODE111,REF MODE111)  */
struct A68t267{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_64)
A68_INT  Number;
A_PAD_INT(PAD_65)
A68_VC  Name;
struct A68t201 * Reader;
struct A68t267 * Previous;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE201,REF MODE267)  */

A_PROCEDURE(struct A68t266 *,A68t268,(void),(void *));
typedef struct A68t268  A68_268 ;    /* PROC REF MODE266 */

A_PROCEDURE(A68_VOID ,A68t269,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE173) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t228 ,struct A68t228 ),(struct A68t228 ,struct A68t228 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE228,REF MODE228) VOID */

A_PROCEDURE(A68_INT ,A68t274,(A68_VC ,A68_VC ,struct A68t228 ),(A68_VC ,A68_VC ,struct A68t228 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE26,MODE26,REF MODE228) INT */

A_PROCEDURE(struct A68t225 *,A68t275,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE225 */
struct A68t277 ;

A_PROCEDURE(A68_VOID ,A68t276,(A68_VC ,A68_VC ,struct A68t143 ,struct A68t277 ,struct A68t228 *),(A68_VC ,A68_VC ,struct A68t143 ,struct A68t277 ,struct A68t228 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE26,MODE26,MODE143,MODE277) REF MODE228 */

A_PROCEDURE(struct A68t232 **,A68t277,(void),(void *));
typedef struct A68t277  A68_277 ;    /* PROC REF REF MODE232 */

A_PROCEDURE(A68_VOID ,A68t278,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(struct A68t187 *,A68t279,(struct A68t187 *),(struct A68t187 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE187) REF MODE187 */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t111 *,struct A68t36 ),(struct A68t111 *,struct A68t36 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE111,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t228 *),(struct A68t228 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC REF MODE228 */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,16,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,57,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t299);
typedef struct A68t299  A68_299 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 3 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from simprompt --- */
extern A68_VC * QPAASIM_simprompt;
/* --- End of imports from simprompt --- */


/* --- Imports from simcmd --- */
extern A68_VOID  EDKBSIM_sim_startup(struct A68t111 *,struct A68t36 );
extern A68_VOID  TPIBSIM_make_sim_commands(A68_228 *);
/* --- End of imports from simcmd --- */


/* --- Imports from simstart --- */
extern A68_INT  CYGBSIM_diag_level;
/* --- End of imports from simstart --- */


/* --- Imports from simreader --- */
extern A68_187 * KLAASIM_add_simulator_readers(struct A68t187 *);
/* --- End of imports from simreader --- */


/* --- Imports from printissue --- */
extern A68_VOID  QKCAOST_print_title(A68_BOOL );
extern A68_VOID  SKCAOST_print_issue(void);
/* --- End of imports from printissue --- */


/* --- Imports from simversion --- */
extern A68_VOID  PAAASIM_simversion(A68_148 *);
/* --- End of imports from simversion --- */


/* --- Imports from globalcommands --- */
extern A68_VOID  PGHAOST_add_globals_to_compounds(struct A68t228 ,struct A68t228 );
extern A68_VOID  OJHAOST_make_globalcommands(A68_VC ,A68_VC ,struct A68t143 ,struct A68t277 ,A68_228 *);
/* --- End of imports from globalcommands --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  CQGAOST_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  FXGAOST_initialise_ioprocs(struct A68t173 );
/* --- End of imports from ioprocs --- */


/* --- Imports from commandcaller --- */
extern A68_VOID  IYGAOST_report_error(struct A68t102 );
extern A68_VOID  YYGAOST_set_default_msg(struct A68t236 );
extern A68_VOID  HZGAOST_call_command(struct A68t232 *,struct A68t225 *,struct A68t181 ,struct A68t97 ,A68_217 *);
/* --- End of imports from commandcaller --- */


/* --- Imports from kernelreader --- */
extern A68_187 * UFGAOST_make_kernel_readers(void);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t181 ,struct A68t97 );
extern A68_218  XMDAOST_normalaccess;
extern A68_217  ZNDAOST_continue;
extern A68_227 * GTDAOST_make_compound(struct A68t225 *,A68_VC ,A68_VC *,struct A68t228 ,struct A68t228 ,struct A68t221 );
extern A68_232 * DPEAOST_initialise_commands(struct A68t234 ,struct A68t235 ,struct A68t97 ,struct A68t233 ,struct A68t187 *,struct A68t227 *,struct A68t181 );
extern A68_VOID  FSEAOST_interpret_commands(struct A68t232 *,A68_217 *);
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_178  SRAAOST_noparameters;
extern A68_181  ASAAOST_no_parameters;
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
extern A68_INT  XVCAOST_charstoint(A68_VC ,A68_BOOL *);
extern A68_VC  DLDAOST_source_type;
extern A68_VC  PLDAOST_infile_type;
extern A68_VC  YLDAOST_assfile_type;
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_VOID  UHBAOST_set_testmode(struct A68t160 );
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_113  PNBAOSI_read_access;
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_111 * FQBAOSI_open_file(A68_VC ,struct A68t113 ,struct A68t97 );
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
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void LPAASIM(void);   /* simprompt */
extern void SBHBSIM(void);   /* simcmd */
extern void XXGBSIM(void);   /* simstart */
extern void WAAASIM(void);   /* simreader */
extern void EGCAOST(void);   /* printissue */
extern void BAAASIM(void);   /* simversion */
extern void DBHAOST(void);   /* globalcommands */
extern void TIGAOST(void);   /* ioprocs */
extern void AYGAOST(void);   /* commandcaller */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_285   ODKBSIM = {"$Id: ellasim.a68,v 34.2 1995/03/29 13:04:28 ella Exp $"}; 
A_GISVEC(A68_VC ,PDKBSIM,ODKBSIM,54)
static A68_286   QDKBSIM = {"ELLASYSDIR"}; 
A_GISVEC(A68_VC ,RDKBSIM,QDKBSIM,10)
static A68_VC  SDKBSIM_ellasysdir;
static A68_232 * TDKBSIM_env;
static A68_BOOL  YDKBSIM_silent;
static A68_BOOL  ZDKBSIM_testmode;
static A68_VC  AEKBSIM_ass_fname;
static A68_VC  BEKBSIM_in_fname;
static A68_287   GEKBSIM = {"-d"}; 
A_GISVEC(A68_VC ,HEKBSIM,GEKBSIM,2)
static A68_288   LEKBSIM = {"integer expected after -d"}; 
A_GISVEC(A68_VC ,MEKBSIM,LEKBSIM,25)
static A68_287   TEKBSIM = {"-t"}; 
A_GISVEC(A68_VC ,UEKBSIM,TEKBSIM,2)
static A68_287   VEKBSIM = {"-s"}; 
A_GISVEC(A68_VC ,WEKBSIM,VEKBSIM,2)
static A68_287   XEKBSIM = {"-i"}; 
A_GISVEC(A68_VC ,YEKBSIM,XEKBSIM,2)
static A68_290   ZEKBSIM = {"Input"}; 
A_GISVEC(A68_VC ,AFKBSIM,ZEKBSIM,5)
static A68_291   FFKBSIM = {"Unexpected option \""}; 
A_GISVEC(A68_VC ,GFKBSIM,FFKBSIM,19)
static A68_293   QFKBSIM = {"Extra argument \""}; 
A_GISVEC(A68_VC ,RFKBSIM,QFKBSIM,16)
static A68_294   AGKBSIM = {"Open interface"}; 
A_GISVEC(A68_VC ,BGKBSIM,AGKBSIM,14)
static A68_295   JGKBSIM = {"   <file> = open interface file from ELLA"}; 
A_GISVEC(A68_VC ,KGKBSIM,JGKBSIM,41)
static A68_296   PGKBSIM = {"-i <file> = start reading input commands from <file>"}; 
A_GISVEC(A68_VC ,QGKBSIM,PGKBSIM,52)
static A68_298   WGKBSIM = {"Give ELLA open interface file name ([-i <file>] <file>): "}; 
A_GISVEC(A68_VC ,XGKBSIM,WGKBSIM,57)
static A68_299   FHKBSIM = {"Simulator diagnostic level = "}; 
A_GISVEC(A68_VC ,GHKBSIM,FHKBSIM,29)
static A68_111 * NHKBSIM_file;
static A68_300   PHKBSIM = {"ELLASIM"}; 
A_GISVEC(A68_VC ,QHKBSIM,PHKBSIM,7)
static A68_288   SHKBSIM = {"Enters the ELLA Simulator"}; 
A_GISVEC(A68_VC ,THKBSIM,SHKBSIM,25)
static A68_225  HIKBSIM_start_up;
static A68_228  JIKBSIM_simcommands;
static A68_228  PIKBSIM_globals;
static A68_227 * TIKBSIM_sim_command;
static A68_301   BJKBSIM = {"The ELLA Simulator has finished"}; 
A_GISVEC(A68_VC ,CJKBSIM,BJKBSIM,31)
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} CIKBSIM_anonymous;

A_STATIC A68_VOID  UDKBSIM_get_prompt(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CEKBSIM_reset(void);

A_STATIC A68_BOOL  FEKBSIM_check_arg(A68_VC  Arg, A68_136  Next);

A_STATIC A68_BOOL  DGKBSIM_no_more(A68_BOOL  Ok);

A_STATIC A68_VOID  YHKBSIM_anonymous(A68_180  Names, A68_97  Msg);

A_STATIC A68_VOID  BIKBSIM_anonymous(A68_VC  S, void *NonLocals);

A_STATIC A68_232 ** KIKBSIM_anonymous(void);

A_STATIC A68_VOID  BIKBSIM_anonymous(A68_VC  S, void *NonLocals)
#define NL(x) (((CIKBSIM_anonymous *)NonLocals)->x)
{ 
A68_46  DIKBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(DIKBSIM,S,A68_VC )),(WHAAOSI_user, A_HVEC(DIKBSIM,S,A68_VC ),(NL(Msg)).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  UDKBSIM_get_prompt(A68_VC  *ReturnedValue)
{ 
A68_VC  VDKBSIM;  /* clause result */
A_PROC_ENTRY(get_prompt);
VDKBSIM = (*(*(&((*(&((*(&(TDKBSIM_env->Stack)))->Current_context)))->Prompt))));
A_PROC_EXIT(get_prompt);
*ReturnedValue = (VDKBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CEKBSIM_reset(void)
{ 
A_PROC_ENTRY(reset);
{ 
CYGBSIM_diag_level = 0;
 /* line 73: */
AEKBSIM_ass_fname = BEKBSIM_in_fname = EOAAOSL_nullstr;
 /* line 74: */
 /* line 75: */
YDKBSIM_silent = ZDKBSIM_testmode = A68_FALSE;
} 
A_PROC_EXIT(reset);
return;
} 
#undef NL

A_STATIC A68_BOOL  FEKBSIM_check_arg(A68_VC  Arg, A68_136  Next)
{ 
A68_BOOL  IEKBSIM_failed;
A68_VC  JEKBSIM;  /* avoid structure result */
A68_289  KEKBSIM;  /* collateral clause result */
A68_52  NEKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OEKBSIM;  /* YIELD */
A68_52  PEKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  QEKBSIM;  /* procedure value */
A68_85  REKBSIM;  /* OPERATORS - istruct -> vector */
A68_BOOL  SEKBSIM;  /* clause result */
A68_VC  BFKBSIM;  /* avoid structure result */
A68_BOOL  CFKBSIM;  /* optbool result */
A68_INT  DFKBSIM;  /* YIELD */
A68_292  EFKBSIM;  /* collateral clause result */
A68_52  HFKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IFKBSIM;  /* YIELD */
A68_52  JFKBSIM;  /* OPERATORS - mode -> union mode */
A68_52  KFKBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  LFKBSIM;  /* YIELD */
A68_52  MFKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  NFKBSIM;  /* procedure value */
A68_85  OFKBSIM;  /* OPERATORS - istruct -> vector */
A68_292  PFKBSIM;  /* collateral clause result */
A68_52  SFKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TFKBSIM;  /* YIELD */
A68_52  UFKBSIM;  /* OPERATORS - mode -> union mode */
A68_52  VFKBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  WFKBSIM;  /* YIELD */
A68_52  XFKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  YFKBSIM;  /* procedure value */
A68_85  ZFKBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(check_arg);
 /* line 78: */
 /* line 79: */
if ( A_VC_EQ(Arg,HEKBSIM) )
{ 
IEKBSIM_failed = A68_FALSE;
 /* line 80: */
A_CALLPROC(Next,( &JEKBSIM),( &JEKBSIM,(Next).nonlocals));
CYGBSIM_diag_level = XVCAOST_charstoint(JEKBSIM, (&IEKBSIM_failed));
 /* line 81: */
if ( IEKBSIM_failed )
{ 
OEKBSIM = MEKBSIM ;
KEKBSIM.data[0] = A_UNITE(NEKBSIM,mode7,7,OEKBSIM);
QEKBSIM.fn.fn_global = LRAAOSL_newline;
QEKBSIM.nonlocals = A68_NIL;
KEKBSIM.data[1] = A_UNITE(PEKBSIM,mode12,12,QEKBSIM);
GFBAOSL_put(MEAAOST_err, A_HISVEC(REKBSIM,KEKBSIM,2,A68_52 ));
} 
 /* line 82: */
 /* line 83: */
SEKBSIM = !IEKBSIM_failed;
} 
else
{ 
if ( A_VC_EQ(Arg,UEKBSIM) )
{ 
 /* line 84: */
SEKBSIM = ZDKBSIM_testmode = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(Arg,WEKBSIM) )
{ 
 /* line 85: */
SEKBSIM = YDKBSIM_silent = A68_TRUE;
} 
else
{ 
 /* line 86: */
if ( A_VC_EQ(Arg,YEKBSIM) )
{ 
 /* line 87: */
A_CALLPROC(Next,( &BFKBSIM),( &BFKBSIM,(Next).nonlocals));
SEKBSIM = LJAAOST_filename_arg(BFKBSIM, AFKBSIM, PLDAOST_infile_type, (&BEKBSIM_in_fname), A68_TRUE);
} 
else
{ 
CFKBSIM = (Arg.upb>=1);
if ( CFKBSIM )
{ /* line 88: */
DFKBSIM = 1 ;
CFKBSIM = (A_VINDEX(Arg,DFKBSIM)=='-');
}
if ( CFKBSIM )
{ 
IFKBSIM = GFKBSIM ;
EFKBSIM.data[0] = A_UNITE(HFKBSIM,mode7,7,IFKBSIM);
EFKBSIM.data[1] = A_UNITE(JFKBSIM,mode7,7,Arg);
LFKBSIM = '\"' ;
EFKBSIM.data[2] = A_UNITE(KFKBSIM,mode6,6,LFKBSIM);
NFKBSIM.fn.fn_global = LRAAOSL_newline;
NFKBSIM.nonlocals = A68_NIL;
EFKBSIM.data[3] = A_UNITE(MFKBSIM,mode12,12,NFKBSIM);
GFBAOSL_put(MEAAOST_err, A_HISVEC(OFKBSIM,EFKBSIM,4,A68_52 ));
 /* line 89: */
SEKBSIM = A68_FALSE;
} 
else
{ 
 /* line 90: */
if ( (AEKBSIM_ass_fname.upb>0) )
{ 
TFKBSIM = RFKBSIM ;
PFKBSIM.data[0] = A_UNITE(SFKBSIM,mode7,7,TFKBSIM);
PFKBSIM.data[1] = A_UNITE(UFKBSIM,mode7,7,Arg);
WFKBSIM = '\"' ;
PFKBSIM.data[2] = A_UNITE(VFKBSIM,mode6,6,WFKBSIM);
YFKBSIM.fn.fn_global = LRAAOSL_newline;
YFKBSIM.nonlocals = A68_NIL;
PFKBSIM.data[3] = A_UNITE(XFKBSIM,mode12,12,YFKBSIM);
GFBAOSL_put(MEAAOST_err, A_HISVEC(ZFKBSIM,PFKBSIM,4,A68_52 ));
 /* line 91: */
SEKBSIM = A68_FALSE;
} 
else
{ 
 /* line 92: */
SEKBSIM = LJAAOST_filename_arg(Arg, BGKBSIM, YLDAOST_assfile_type, (&AEKBSIM_ass_fname), A68_TRUE);
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(check_arg);
return( SEKBSIM );
} 
#undef NL

A_STATIC A68_BOOL  DGKBSIM_no_more(A68_BOOL  Ok)
{ 
A68_BOOL  EGKBSIM;  /* optbool result */
A68_BOOL  FGKBSIM;  /* clause result */
A68_297  GGKBSIM;  /* collateral clause result */
A68_52  HGKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  IGKBSIM;  /* procedure value */
A68_52  LGKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MGKBSIM;  /* YIELD */
A68_52  NGKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  OGKBSIM;  /* procedure value */
A68_52  RGKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SGKBSIM;  /* YIELD */
A68_64  TGKBSIM;  /* avoid structure result */
A68_52  UGKBSIM;  /* OPERATORS - mode -> union mode */
A68_85  VGKBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(no_more);
 /* line 96: */
EGKBSIM = Ok;
if ( EGKBSIM )
{ /* line 97: */
EGKBSIM = (AEKBSIM_ass_fname.upb>0);
}
if ( EGKBSIM )
{ 
 /* line 98: */
FGKBSIM = A68_TRUE;
} 
else
{ 
IGKBSIM.fn.fn_global = LRAAOSL_newline;
IGKBSIM.nonlocals = A68_NIL;
GGKBSIM.data[0] = A_UNITE(HGKBSIM,mode12,12,IGKBSIM);
 /* line 99: */
MGKBSIM = KGKBSIM ;
GGKBSIM.data[1] = A_UNITE(LGKBSIM,mode7,7,MGKBSIM);
 /* line 100: */
OGKBSIM.fn.fn_global = LRAAOSL_newline;
OGKBSIM.nonlocals = A68_NIL;
GGKBSIM.data[2] = A_UNITE(NGKBSIM,mode12,12,OGKBSIM);
SGKBSIM = QGKBSIM ;
GGKBSIM.data[3] = A_UNITE(RGKBSIM,mode7,7,SGKBSIM);
HZAAOSL_lines( 2, &TGKBSIM );
GGKBSIM.data[4] = A_UNITE(UGKBSIM,mode20,20,TGKBSIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VGKBSIM,GGKBSIM,5,A68_52 ));
 /* line 101: */
 /* line 102: */
FGKBSIM = A68_FALSE;
} 
A_PROC_EXIT(no_more);
return( FGKBSIM );
} 
#undef NL

A_STATIC A68_VOID  YHKBSIM_anonymous(A68_180  Names, A68_97  Msg)
{ 
A68_36  AIKBSIM_anonymous;   /* proc value of non-global proc */
 /* line 128: */
A_CLOSURE( AIKBSIM_anonymous, BIKBSIM_anonymous, CIKBSIM_anonymous );
(( CIKBSIM_anonymous * ) ( AIKBSIM_anonymous.nonlocals )) -> Msg = Msg;
 /* line 129: */
EDKBSIM_sim_startup(NHKBSIM_file, AIKBSIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_232 ** KIKBSIM_anonymous(void)
{ 
A68_232 ** LIKBSIM;  /* clause result */
LIKBSIM = (&TDKBSIM_env);
return( LIKBSIM );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/ellasim.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/simprompt.m","./mfiles/simcmd.m","./mfiles/simstart.m","./mfiles/simreader.m","/u/model/ella/ostools/assoc/mfiles/printissue.m","./mfiles/simversion.m","/u/model/ella/ostools/assoc/mfiles/globalcommands.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/commandcaller.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_148  WDKBSIM;  /* avoid structure result */
A68_173  XDKBSIM;  /* procedure value */
A68_143  YGKBSIM;  /* procedure value */
A68_154  ZGKBSIM;  /* procedure value */
A68_155  AHKBSIM;  /* procedure value */
A68_160  BHKBSIM;  /* OPERATORS - mode -> union mode */
A68_292  CHKBSIM;  /* collateral clause result */
A68_52  DHKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  EHKBSIM;  /* procedure value */
A68_52  HHKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IHKBSIM;  /* YIELD */
A68_52  JHKBSIM;  /* OPERATORS - mode -> union mode */
A68_52  KHKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  LHKBSIM;  /* procedure value */
A68_85  MHKBSIM;  /* OPERATORS - istruct -> vector */
A68_225  OHKBSIM;  /* collateral clause result */
A68_VC  RHKBSIM;  /* avoid structure result */
A68_VC  UHKBSIM;  /* avoid structure result */
A68_229  VHKBSIM;  /* OPERATORS - mode -> union mode */
A68_221  EIKBSIM;  /* OPERATORS - mode -> union mode */
A68_223  FIKBSIM;  /* YIELD */
A68_223  GIKBSIM;  /* procedure value */
A68_228  IIKBSIM;  /* avoid structure result */
A68_143  MIKBSIM;  /* procedure value */
A68_277  NIKBSIM;  /* procedure value */
A68_228  OIKBSIM;  /* avoid structure result */
A68_221  QIKBSIM;  /* OPERATORS - mode -> union mode */
A68_222  RIKBSIM;  /* procedure value */
A68_VC  SIKBSIM;  /* avoid structure result */
A68_234  UIKBSIM;  /* procedure value */
A68_235  VIKBSIM;  /* procedure value */
A68_233  WIKBSIM;  /* procedure value */
A68_217  XIKBSIM;  /* avoid structure result */
A68_302  YIKBSIM;  /* collateral clause result */
A68_52  ZIKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  AJKBSIM;  /* procedure value */
A68_52  DJKBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  EJKBSIM;  /* YIELD */
A68_52  FJKBSIM;  /* OPERATORS - mode -> union mode */
A68_56  GJKBSIM;  /* procedure value */
A68_85  HJKBSIM;  /* OPERATORS - istruct -> vector */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
LPAASIM();   /* USE simprompt */
SBHBSIM();   /* USE simcmd */
XXGBSIM();   /* USE simstart */
WAAASIM();   /* USE simreader */
EGCAOST();   /* USE printissue */
BAAASIM();   /* USE simversion */
DBHAOST();   /* USE globalcommands */
TIGAOST();   /* USE ioprocs */
AYGAOST();   /* USE commandcaller */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/ellasim.a68";
A_config.translation_time = "Tue Apr  4 11:15:49 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LDKBSIM (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, PDKBSIM);
 /* line 58: */
SDKBSIM_ellasysdir = RDKBSIM;
 /* line 59: */
 /* line 60: */
 /* line 62: */
PAAASIM_simversion(  &WDKBSIM );
A_CALLPROC(TEAAOST_initialise_osinterface,(WDKBSIM, A68_TRUE),(WDKBSIM, A68_TRUE,(TEAAOST_initialise_osinterface).nonlocals));
 /* line 63: */
XDKBSIM.fn.fn_global = UDKBSIM_get_prompt;
XDKBSIM.nonlocals = A68_NIL;
FXGAOST_initialise_ioprocs(XDKBSIM);
 /* line 67: */
 /* line 68: */
AEKBSIM_ass_fname = EOAAOSL_nullstr;
BEKBSIM_in_fname = EOAAOSL_nullstr;
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 77: */
 /* line 95: */
 /* line 105: */
 /* line 106: */
YGKBSIM.fn.fn_global = CEKBSIM_reset;
YGKBSIM.nonlocals = A68_NIL;
ZGKBSIM.fn.fn_global = FEKBSIM_check_arg;
ZGKBSIM.nonlocals = A68_NIL;
AHKBSIM.fn.fn_global = DGKBSIM_no_more;
AHKBSIM.nonlocals = A68_NIL;
OMAAOST_parse_arguments(XGKBSIM, YGKBSIM, ZGKBSIM, AHKBSIM);
 /* line 108: */
QKCAOST_print_title(YDKBSIM_silent);
 /* line 109: */
UHBAOST_set_testmode(A_UNITE(BHKBSIM,mode1,1,ZDKBSIM_testmode));
 /* line 111: */
if ( (CYGBSIM_diag_level>0) )
{ 
EHKBSIM.fn.fn_global = LRAAOSL_newline;
EHKBSIM.nonlocals = A68_NIL;
CHKBSIM.data[0] = A_UNITE(DHKBSIM,mode12,12,EHKBSIM);
 /* line 112: */
IHKBSIM = GHKBSIM ;
CHKBSIM.data[1] = A_UNITE(HHKBSIM,mode7,7,IHKBSIM);
CHKBSIM.data[2] = A_UNITE(JHKBSIM,mode1,1,CYGBSIM_diag_level);
LHKBSIM.fn.fn_global = LRAAOSL_newline;
LHKBSIM.nonlocals = A68_NIL;
CHKBSIM.data[3] = A_UNITE(KHKBSIM,mode12,12,LHKBSIM);
 /* line 113: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(MHKBSIM,CHKBSIM,4,A68_52 ));
} 
 /* line 117: */
if ( (BEKBSIM_in_fname.upb>0) )
{ 
CQGAOST_io_input(BEKBSIM_in_fname, ZLBAOSI_global_msg);
} 
 /* line 122: */
NHKBSIM_file = FQBAOSI_open_file(AEKBSIM_ass_fname, PNBAOSI_read_access, ZLBAOSI_global_msg);
 /* line 124: */
 /* line 125: */
ZAAAOSI_makervc( QHKBSIM, &RHKBSIM );
OHKBSIM.Name = RHKBSIM;
OHKBSIM.Abreviation = EOAAOSL_nullstr;
OHKBSIM.Parameter = SRAAOST_noparameters;
OHKBSIM.Access = XMDAOST_normalaccess;
 /* line 126: */
OHKBSIM.Continuation = ZNDAOST_continue;
 /* line 127: */
ZAAAOSI_makervc( THKBSIM, &UHKBSIM );
OHKBSIM.Help = A_UNITE(VHKBSIM,mode1,1,UHKBSIM);
GIKBSIM.fn.fn_global = YHKBSIM_anonymous;
GIKBSIM.nonlocals = A68_NIL;
FIKBSIM = GIKBSIM ;
OHKBSIM.Command = A_UNITE(EIKBSIM,mode3,3,FIKBSIM);
HIKBSIM_start_up = OHKBSIM;
 /* line 132: */
TPIBSIM_make_sim_commands(  &IIKBSIM );
JIKBSIM_simcommands = IIKBSIM;
 /* line 133: */
 /* line 134: */
MIKBSIM.fn.fn_global = SKCAOST_print_issue;
MIKBSIM.nonlocals = A68_NIL;
NIKBSIM.fn.fn_global = KIKBSIM_anonymous;
NIKBSIM.nonlocals = A68_NIL;
OJHAOST_make_globalcommands( SDKBSIM_ellasysdir, DLDAOST_source_type, MIKBSIM, NIKBSIM, &OIKBSIM );
PIKBSIM_globals = OIKBSIM;
 /* line 138: */
PGHAOST_add_globals_to_compounds(PIKBSIM_globals, PIKBSIM_globals);
 /* line 140: */
 /* line 141: */
 /* line 142: */
RIKBSIM.fn.fn_global = MMDAOST_nullcommand;
RIKBSIM.nonlocals = A68_NIL;
UEAAOST_facility(  &SIKBSIM );
TIKBSIM_sim_command = GTDAOST_make_compound((&HIKBSIM_start_up), SIKBSIM, QPAASIM_simprompt = A_HEAP(A68_VC ), JIKBSIM_simcommands, PIKBSIM_globals, A_UNITE(QIKBSIM,mode2,2,RIKBSIM));
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
UIKBSIM.fn.fn_global = IYGAOST_report_error;
UIKBSIM.nonlocals = A68_NIL;
VIKBSIM.fn.fn_global = YYGAOST_set_default_msg;
VIKBSIM.nonlocals = A68_NIL;
WIKBSIM.fn.fn_global = HZGAOST_call_command;
WIKBSIM.nonlocals = A68_NIL;
TDKBSIM_env = DPEAOST_initialise_commands(UIKBSIM, VIKBSIM, ZLBAOSI_global_msg, WIKBSIM, KLAASIM_add_simulator_readers(UFGAOST_make_kernel_readers()), TIKBSIM_sim_command, ASAAOST_no_parameters);
 /* line 151: */
FSEAOST_interpret_commands( TDKBSIM_env, &XIKBSIM );
XIKBSIM;
 /* line 153: */
AJKBSIM.fn.fn_global = LRAAOSL_newline;
AJKBSIM.nonlocals = A68_NIL;
YIKBSIM.data[0] = A_UNITE(ZIKBSIM,mode12,12,AJKBSIM);
EJKBSIM = CJKBSIM ;
YIKBSIM.data[1] = A_UNITE(DJKBSIM,mode7,7,EJKBSIM);
GJKBSIM.fn.fn_global = LRAAOSL_newline;
GJKBSIM.nonlocals = A68_NIL;
YIKBSIM.data[2] = A_UNITE(FJKBSIM,mode12,12,GJKBSIM);
 /* line 155: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HJKBSIM,YIKBSIM,3,A68_52 ));
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/ellasim.a68 */
