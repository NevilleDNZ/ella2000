
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
/* UNAME:EJJAELA */
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
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t159 * Df;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE159)  */
A_VECTOR(struct A68t160 ,A68t161);
typedef struct A68t161  A68_161 ;    /* VECTOR [] MODE160 */
struct A68t160{
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
typedef struct A68t160  A68_160 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t166 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE166 */
struct A68t167{
A68_INT  Block_num;
A_PAD_INT(PAD_43)
A68_INT  Offset;
A_PAD_INT(PAD_44)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT)  */
struct A68t166{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_45)
struct A68t167  Address;
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
typedef struct A68t166  A68_166 ;    /* STRUCT(BOOL,MODE167,INT,INT,INT,INT,INT)  */
struct A68t159{
struct A68t160 * Root;
struct A68t160 * Indirs_dp;
struct A68t160 * Freelist_dp;
struct A68t160 * Pagetable_dp;
struct A68t160 * Append_dp;
struct A68t161  Free_block_dps;
struct A68t161  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t162 * Write_buffer;
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
struct A68t163 * Gc_ptrs;
struct A68t164 * Instore_vars;
struct A68t165  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE160,REF MODE160,REF MODE160,REF MODE160,REF MODE160,REF MODE161,REF MODE161,REF REF MODE111,REF REF MODE111,REF MODE162,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE163,REF MODE164,REF MODE165,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t162{
A68_VC  Buffer;
struct A68t168 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE168,REF INT,REF INT,REF INT)  */
struct A68t163{
struct A68t167  Old;
struct A68t167  New;
struct A68t163 * Rest;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE167,MODE167,REF MODE163)  */
struct A68t164{
A68_INT  Indirection;
A_PAD_INT(PAD_51)
struct A68t164 * Rest;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,REF MODE164)  */
struct A68t168{
A68_INT  Lwb;
A_PAD_INT(PAD_52)
A68_INT  Upb;
A_PAD_INT(PAD_53)
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,REF MODE168)  */

A_PROCEDURE(A68_INT ,A68t169,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE158) INT */

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE158) BOOL */

A_PROCEDURE(A68_INT ,A68t171,(struct A68t158 *,struct A68t160 ),(struct A68t158 *,struct A68t160 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE158,MODE160) INT */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t160 ),(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t160 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE158,REF MODE26,REF MODE161,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t158 *,struct A68t32 ,struct A68t160 ),(struct A68t158 *,struct A68t32 ,struct A68t160 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE158,REF MODE32,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t158 *,A68_VC ,struct A68t160 ),(struct A68t158 *,A68_VC ,struct A68t160 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE158,REF MODE26,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t158 *,struct A68t161 ,struct A68t160 ),(struct A68t158 *,struct A68t161 ,struct A68t160 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE158,REF MODE161,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t158 *,struct A68t159 *,struct A68t32 ,struct A68t160 ),(struct A68t158 *,struct A68t159 *,struct A68t32 ,struct A68t160 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE158,REF MODE159,REF MODE32,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t158 *,A68_VC ,struct A68t161 ,A68_BOOL ,struct A68t160 *),(struct A68t158 *,A68_VC ,struct A68t161 ,A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE158,MODE26,MODE161,BOOL) MODE160 */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t158 *,struct A68t32 ,A68_BOOL ,struct A68t160 *),(struct A68t158 *,struct A68t32 ,A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE158,MODE32,BOOL) MODE160 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t158 *,A68_VC ,A68_BOOL ,struct A68t160 *),(struct A68t158 *,A68_VC ,A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE158,MODE26,BOOL) MODE160 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t158 *,struct A68t161 ,A68_BOOL ,struct A68t160 *),(struct A68t158 *,struct A68t161 ,A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE158,MODE161,BOOL) MODE160 */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t158 *,A68_VC ,struct A68t160 ,struct A68t160 *),(struct A68t158 *,A68_VC ,struct A68t160 ,struct A68t160 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE158,MODE26,MODE160) MODE160 */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t160 ,struct A68t160 *),(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t160 ,struct A68t160 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE158,MODE26,MODE161,MODE160) MODE160 */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t158 *,A68_INT ,A68_BOOL ,struct A68t160 *),(struct A68t158 *,A68_INT ,A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE158,INT,BOOL) MODE160 */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t158 *,A68_INT ,A68_VC ,struct A68t160 ),(struct A68t158 *,A68_INT ,A68_VC ,struct A68t160 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE158,INT,MODE26,MODE160) VOID */

A_PROCEDURE(A68_BOOL ,A68t186,(struct A68t158 *,A68_INT ),(struct A68t158 *,A68_INT ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE158,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t158 *,A68_INT ,A68_VC ,struct A68t160 ),(struct A68t158 *,A68_INT ,A68_VC ,struct A68t160 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE158,INT,REF MODE26,MODE160) VOID */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t158 *,struct A68t160 ,struct A68t160 ),(struct A68t158 *,struct A68t160 ,struct A68t160 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE158,MODE160,MODE160) BOOL */

A_PROCEDURE(struct A68t111 *,A68t189,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t158 *,struct A68t160 ),(struct A68t158 *,struct A68t160 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE158,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t158 *,struct A68t160 ,struct A68t97 ),(struct A68t158 *,struct A68t160 ,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE158,MODE160,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t158 *,struct A68t97 ),(struct A68t158 *,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE158,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t111 *,A68_BOOL ,struct A68t158 *),(struct A68t111 *,A68_BOOL ,struct A68t158 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE111,BOOL) MODE158 */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t158 *,struct A68t160 ,struct A68t160 *),(struct A68t158 *,struct A68t160 ,struct A68t160 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE158,MODE160) MODE160 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t158 *,A68_INT ,struct A68t97 ),(struct A68t158 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE158,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t158 *,struct A68t160 ,struct A68t160 ),(struct A68t158 *,struct A68t160 ,struct A68t160 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE158,MODE160,MODE160) VOID */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t158 *,A68_VC ,struct A68t161 ),(struct A68t158 *,A68_VC ,struct A68t161 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE158,MODE26,MODE161) BOOL */

A_PROCEDURE(A68_BOOL ,A68t198,(struct A68t158 *,struct A68t32 ),(struct A68t158 *,struct A68t32 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE158,MODE32) BOOL */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t158 *,struct A68t160 *),(struct A68t158 *,struct A68t160 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE158) MODE160 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t201,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE160) BOOL */

A_PROCEDURE(struct A68t111 *,A68t202,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE158) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_VC *),(A68_VC *,void *));
typedef struct A68t206  A68_206 ;    /* PROC REF MODE26 */
struct A68t203{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_54)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_55)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_56)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_57)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_58)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_59)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_60)
A68_INT  Width;
A_PAD_INT(PAD_61)
A68_INT  Page_count;
A_PAD_INT(PAD_62)
A68_INT  Page_length;
A_PAD_INT(PAD_63)
A68_INT  Eof_count;
A_PAD_INT(PAD_64)
struct A68t204 * Standard_reader;
struct A68t205 * Infile;
struct A68t206  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE204,REF MODE205,MODE206,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t207,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t204{
A68_VC  Rdbuffer;
struct A68t207  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_65)
A68_INT  Rdcharno;
A_PAD_INT(PAD_66)
A68_INT  Start_of_word;
A_PAD_INT(PAD_67)
struct A68t208 * Stack;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE26,MODE207,INT,INT,INT,REF MODE208)  */
struct A68t205{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_68)
A68_INT  Number;
A_PAD_INT(PAD_69)
A68_VC  Name;
struct A68t204 * Reader;
struct A68t205 * Previous;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE204,REF MODE205)  */
struct A68t208{
A68_VC  Line;
struct A68t208 * Rest;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(REF MODE26,REF MODE208)  */

A_PROCEDURE(struct A68t203 *,A68t209,(void),(void *));
typedef struct A68t209  A68_209 ;    /* PROC REF MODE203 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE206) VOID */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,struct A68t85 ),(A68_INT ,struct A68t85 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,MODE85) VOID */
struct A68t218{
A68_INT  N;
A_PAD_INT(PAD_70)
struct A68t160  Dp;
A68_INT  Size;
A_PAD_INT(PAD_71)
A68_BOOL  Printed;
A_PAD_BOOL(PAD_72)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,MODE160,INT,BOOL)  */
A_VECTOR(struct A68t218 ,A68t219);
typedef struct A68t219  A68_219 ;    /* VECTOR [] MODE218 */

A_PROCEDURE(A68_VOID ,A68t220,(A68_BOOL ,struct A68t219 *),(A68_BOOL ,struct A68t219 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL) MODE219 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t160 ,struct A68t218 *),(struct A68t160 ,struct A68t218 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE160) MODE218 */

A_PROCEDURE(A68_BOOL ,A68t223,(A68_INT ,struct A68t218 ,A68_CHAR ),(A68_INT ,struct A68t218 ,A68_CHAR ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT,MODE218,CHAR) BOOL */
A_ISTRUCT(struct A68t52 ,5,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(struct A68t52 ,7,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_VOID ,A68t226,(A68_INT ,struct A68t218 ),(A68_INT ,struct A68t218 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,MODE218) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(struct A68t52 ,3,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t230,(A68_INT ,struct A68t160 ),(A68_INT ,struct A68t160 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t161 *),(A68_BOOL ,struct A68t161 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE161 */
A_ISTRUCT(A68_CHAR ,6,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,83,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 83 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 6 MODE52 */

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


/* --- Imports from su_keepsake --- */
extern A68_INT  GKEAELA_discptr_data(struct A68t158 *,struct A68t160 );
extern A68_VOID  TAFAELA_read_chars_dps(struct A68t158 *,A68_VC ,struct A68t161 ,struct A68t160 );
extern A68_VOID  WZEAELA_read_ints(struct A68t158 *,struct A68t32 ,struct A68t160 );
extern A68_VOID  NAFAELA_read_chars(struct A68t158 *,A68_VC ,struct A68t160 );
extern A68_VOID  ZCFAELA_read_discptrs(struct A68t158 *,struct A68t161 ,struct A68t160 );
extern A68_BOOL  GIEAELA_same_discptr(struct A68t158 *,struct A68t160 ,struct A68t160 );
extern A68_INT  UJEAELA_size(struct A68t158 *,struct A68t160 );
extern A68_INT  RIEAELA_num_chars(struct A68t158 *,struct A68t160 );
extern A68_INT  CJEAELA_num_discptrs(struct A68t158 *,struct A68t160 );
extern A68_VOID  KVIAELA_get_root(struct A68t158 *,A68_160 *);
/* --- End of imports from su_keepsake --- */


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
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_INT  YOAAOSL_charnumber(struct A68t34 *);
extern A68_VOID  SYAAOSL_pos(A68_INT ,A68_61 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  MZAAOSL_setindent(A68_INT ,A68_65 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TIGAOST(void);   /* ioprocs */
extern void KUDAELA(void);   /* su_keepsake */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_216   IJJAELA = {"$Id: ptkeepsake.a68,v 34.2 1995/03/29 13:03:31 ella Exp $"}; 
A_GISVEC(A68_VC ,JJJAELA,IJJAELA,57)
#define NJJAELA_indent 2
#define UJJAELA_sz 1000
static A68_114   QLJAELA = {":  %"}; 
A_GISVEC(A68_VC ,RLJAELA,QLJAELA,4)
static A68_227   ENJAELA = {"  "}; 
A_GISVEC(A68_VC ,FNJAELA,ENJAELA,2)
static A68_227   YNJAELA = {"  "}; 
A_GISVEC(A68_VC ,ZNJAELA,YNJAELA,2)
static A68_227   RQJAELA = {"  "}; 
A_GISVEC(A68_VC ,SQJAELA,RQJAELA,2)
static A68_232   ZRJAELA = {"Moded "}; 
A_GISVEC(A68_VC ,ASJAELA,ZRJAELA,6)
static A68_233   ESJAELA = {"???"}; 
A_GISVEC(A68_VC ,FSJAELA,ESJAELA,3)
static A68_234   OSJAELA = {"Library printer"}; 
A_GISVEC(A68_VC ,PSJAELA,OSJAELA,15)
static A68_235   USJAELA = {"\"#\" = nilptr,  \"{\" = integers,  \"(\" = chars_dps,  \"?\" = chars only,  \"[\" = discptrs"}; 
A_GISVEC(A68_VC ,VSJAELA,USJAELA,83)
typedef struct   /* env of non-global proc */
{
int dummy;
} YJJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * DKJAELA_ndp;
A68_219 * BKJAELA_mem;
A68_158 * Df;
} HKJAELA_add;
typedef struct   /* env of non-global proc */
{
A68_INT * DKJAELA_ndp;
A68_158 * Df;
A68_219 * BKJAELA_mem;
A68_221  FKJAELA_add;
} ZKJAELA_find;
typedef struct   /* env of non-global proc */
{
A68_219 * BKJAELA_mem;
} JLJAELA_print_dpname;
typedef struct   /* env of non-global proc */
{
A68_223  HLJAELA_print_dpname;
A68_158 * Df;
} TMJAELA_printints;
typedef struct   /* env of non-global proc */
{
A68_223  HLJAELA_print_dpname;
A68_158 * Df;
} ONJAELA_printchars;
typedef struct   /* env of non-global proc */
{
A68_223  HLJAELA_print_dpname;
A68_158 * Df;
A68_230 * TOJAELA_printdp;
} YOJAELA_printdiscptrs;
typedef struct   /* env of non-global proc */
{
A68_158 * Df;
A68_223  HLJAELA_print_dpname;
} ZPJAELA_printcharsdps;
typedef struct   /* env of non-global proc */
{
A68_158 * Df;
A68_222  XKJAELA_find;
A68_226  XPJAELA_printcharsdps;
A68_226  RMJAELA_printints;
A68_226  MNJAELA_printchars;
A68_226  WOJAELA_printdiscptrs;
} QRJAELA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_219 * BKJAELA_mem;
} LKJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_218  Dp;
} XMJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_218  Dp;
} SNJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_218  Dp;
} CPJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_158 * Df;
A68_218  Dp;
} DQJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_158 * Df;
A68_218  Dp;
} LQJAELA_generator;

A68_VOID  MJJAELA_ptkeepsake(A68_158 * Df, A68_97  Flt);

A_STATIC A68_VOID  QJJAELA_print(A68_INT  Margin, A68_85  Line);

A_STATIC A68_VOID  XJJAELA_generator(A68_BOOL  VJJAELA_anonymous, A68_219  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GKJAELA_add(A68_160  Dp, void *NonLocals);

A_STATIC A68_VOID  KKJAELA_generator(A68_BOOL  IKJAELA_anonymous, A68_219  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YKJAELA_find(A68_160  Dp, A68_218  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  ILJAELA_print_dpname(A68_INT  Margin, A68_218  Dp, A68_CHAR  Type, void *NonLocals);

A_STATIC A68_VOID  SMJAELA_printints(A68_INT  Margin, A68_218  Dp, void *NonLocals);

A_STATIC A68_VOID  WMJAELA_generator(A68_BOOL  UMJAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NNJAELA_printchars(A68_INT  Margin, A68_218  Dp, void *NonLocals);

A_STATIC A68_VOID  RNJAELA_generator(A68_BOOL  PNJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XOJAELA_printdiscptrs(A68_INT  Margin, A68_218  Dp, void *NonLocals);

A_STATIC A68_VOID  BPJAELA_generator(A68_BOOL  ZOJAELA_anonymous, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YPJAELA_printcharsdps(A68_INT  Margin, A68_218  Dp, void *NonLocals);

A_STATIC A68_VOID  CQJAELA_generator(A68_BOOL  AQJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KQJAELA_generator(A68_BOOL  IQJAELA_anonymous, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PRJAELA_anonymous(A68_INT  Margin, A68_160  Ptr, void *NonLocals);

A_STATIC A68_VOID  KKJAELA_generator(A68_BOOL  IKJAELA_anonymous, A68_219  *ReturnedValue, void *NonLocals)
#define NL(x) (((LKJAELA_generator *)NonLocals)->x)
{ 
A68_219  MKJAELA;  /* clause result */
A68_219  NKJAELA;  /* OPERATORS - dynamic generator */
{ 
NKJAELA.upb = ((*NL(BKJAELA_mem)).upb+UJJAELA_sz) ;
( IKJAELA_anonymous? A_VLOC(A68_218 ,NKJAELA): A_VHEAP(A68_218 ,NKJAELA) );
MKJAELA = NKJAELA;
} 
*ReturnedValue = (MKJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WMJAELA_generator(A68_BOOL  UMJAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((XMJAELA_generator *)NonLocals)->x)
{ 
A68_32  YMJAELA;  /* clause result */
A68_32  ZMJAELA;  /* OPERATORS - dynamic generator */
{ 
ZMJAELA.upb = NL(Dp).Size ;
( UMJAELA_anonymous? A_VLOC(A68_INT ,ZMJAELA): A_VHEAP(A68_INT ,ZMJAELA) );
YMJAELA = ZMJAELA;
} 
*ReturnedValue = (YMJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RNJAELA_generator(A68_BOOL  PNJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SNJAELA_generator *)NonLocals)->x)
{ 
A68_VC  TNJAELA;  /* clause result */
A68_VC  UNJAELA;  /* OPERATORS - dynamic generator */
{ 
UNJAELA.upb = NL(Dp).Size ;
( PNJAELA_anonymous? A_VLOC(A68_CHAR ,UNJAELA): A_VHEAP(A68_CHAR ,UNJAELA) );
TNJAELA = UNJAELA;
} 
*ReturnedValue = (TNJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BPJAELA_generator(A68_BOOL  ZOJAELA_anonymous, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((CPJAELA_generator *)NonLocals)->x)
{ 
A68_161  DPJAELA;  /* clause result */
A68_161  EPJAELA;  /* OPERATORS - dynamic generator */
{ 
EPJAELA.upb = NL(Dp).Size ;
( ZOJAELA_anonymous? A_VLOC(A68_160 ,EPJAELA): A_VHEAP(A68_160 ,EPJAELA) );
DPJAELA = EPJAELA;
} 
*ReturnedValue = (DPJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CQJAELA_generator(A68_BOOL  AQJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DQJAELA_generator *)NonLocals)->x)
{ 
A68_VC  EQJAELA;  /* clause result */
A68_VC  FQJAELA;  /* OPERATORS - dynamic generator */
{ 
FQJAELA.upb = RIEAELA_num_chars(NL(Df), NL(Dp).Dp) ;
( AQJAELA_anonymous? A_VLOC(A68_CHAR ,FQJAELA): A_VHEAP(A68_CHAR ,FQJAELA) );
EQJAELA = FQJAELA;
} 
*ReturnedValue = (EQJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KQJAELA_generator(A68_BOOL  IQJAELA_anonymous, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((LQJAELA_generator *)NonLocals)->x)
{ 
A68_161  MQJAELA;  /* clause result */
A68_161  NQJAELA;  /* OPERATORS - dynamic generator */
{ 
NQJAELA.upb = CJEAELA_num_discptrs(NL(Df), NL(Dp).Dp) ;
( IQJAELA_anonymous? A_VLOC(A68_160 ,NQJAELA): A_VHEAP(A68_160 ,NQJAELA) );
MQJAELA = NQJAELA;
} 
*ReturnedValue = (MQJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QJJAELA_print(A68_INT  Margin, A68_85  Line)
{ 
A68_65  RJJAELA;  /* avoid structure result */
A68_52  SJJAELA;  /* OPERATORS - mode -> union mode */
A68_85  TJJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(print);
 /* line 60: */
{ 
MZAAOSL_setindent( Margin, &RJJAELA );
GFBAOSL_put(LEAAOST_out, A_HVEC(TJJAELA,A_UNITE(SJJAELA,mode21,21,RJJAELA),A68_52 ));
GFBAOSL_put(LEAAOST_out, Line);
} 
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  XJJAELA_generator(A68_BOOL  VJJAELA_anonymous, A68_219  *ReturnedValue, void *NonLocals)
#define NL(x) (((YJJAELA_generator *)NonLocals)->x)
{ 
A68_219  ZJJAELA;  /* clause result */
A68_219  AKJAELA;  /* OPERATORS - dynamic generator */
{ 
AKJAELA.upb = UJJAELA_sz ;
( VJJAELA_anonymous? A_VLOC(A68_218 ,AKJAELA): A_VHEAP(A68_218 ,AKJAELA) );
ZJJAELA = AKJAELA;
} 
*ReturnedValue = (ZJJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GKJAELA_add(A68_160  Dp, void *NonLocals)
#define NL(x) (((HKJAELA_add *)NonLocals)->x)
{ 
A68_220  JKJAELA_generator;   /* proc value of non-global proc */
A68_219  OKJAELA;  /* avoid structure result */
A68_219  PKJAELA_new;
A68_219  QKJAELA;  /* OPERATORS - trim index */
A68_219  RKJAELA;  /* YIELD */
A68_INT  SKJAELA;  /* clause result */
A68_INT  TKJAELA_array_size;
A68_218  UKJAELA;  /* collateral clause result */
A68_218 * VKJAELA;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 69: */
 /* line 70: */
{ 
 /* line 71: */
if ( (((*NL(DKJAELA_ndp))+=1)>(*NL(BKJAELA_mem)).upb) )
{ 
A_CLOSURE( JKJAELA_generator, KKJAELA_generator, LKJAELA_generator );
(( LKJAELA_generator * ) ( JKJAELA_generator.nonlocals )) -> BKJAELA_mem = NL(BKJAELA_mem);
A_CALLPROC(JKJAELA_generator,(A68_FALSE, &OKJAELA),(A68_FALSE, &OKJAELA,(JKJAELA_generator).nonlocals));
PKJAELA_new = OKJAELA;
 /* line 72: */
RKJAELA = A_VTRIM(QKJAELA,(PKJAELA_new),A_VTSCRIPT(&(QKJAELA.upb),(PKJAELA_new).upb,1,(*NL(BKJAELA_mem)).upb)) ;
A_VASSIGN2((*NL(BKJAELA_mem)),RKJAELA,A68_218 );
 /* line 73: */
 /* line 74: */
(*NL(BKJAELA_mem)) = PKJAELA_new;
} 
 /* line 75: */
 /* line 76: */
if ( (GKEAELA_discptr_data(NL(Df), Dp)==3) )
{ 
 /* line 77: */
SKJAELA = RIEAELA_num_chars(NL(Df), Dp);
} 
else
{ 
 /* line 78: */
SKJAELA = UJEAELA_size(NL(Df), Dp);
} 
TKJAELA_array_size = SKJAELA;
 /* line 79: */
UKJAELA.N = (*NL(DKJAELA_ndp));
UKJAELA.Dp = Dp;
UKJAELA.Size = TKJAELA_array_size;
 /* line 80: */
UKJAELA.Printed = A68_FALSE;
VKJAELA = (&A_VINDEX((*NL(BKJAELA_mem)),(*NL(DKJAELA_ndp)))) ;
(*VKJAELA) = UKJAELA;
} 
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  YKJAELA_find(A68_160  Dp, A68_218  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZKJAELA_find *)NonLocals)->x)
{ 
A68_INT  ALJAELA_ind;
A68_INT  BLJAELA_i;
A68_INT  CLJAELA;  /* to part of loop */
A68_218  DLJAELA;  /* clause result */
A_PROC_ENTRY(find);
 /* line 83: */
 /* line 84: */
{ 
ALJAELA_ind = 0;
 /* line 85: */
CLJAELA = (*NL(DKJAELA_ndp));
for ( BLJAELA_i = 1;
BLJAELA_i <= CLJAELA;
BLJAELA_i += 1 )
{ 
 /* line 86: */
if ( !((ALJAELA_ind==0)) ) break;
if ( GIEAELA_same_discptr(NL(Df), Dp, (*(&((&A_VINDEX((*NL(BKJAELA_mem)),BLJAELA_i))->Dp)))) )
{ 
ALJAELA_ind = BLJAELA_i;
} 
}
 /* line 87: */
if ( (ALJAELA_ind==0) )
{ 
A_CALLPROC(NL(FKJAELA_add),(Dp),(Dp,(NL(FKJAELA_add)).nonlocals));
ALJAELA_ind = (*NL(DKJAELA_ndp));
} 
 /* line 88: */
 /* line 89: */
DLJAELA = (*(&A_VINDEX((*NL(BKJAELA_mem)),ALJAELA_ind)));
} 
A_PROC_EXIT(find);
*ReturnedValue = (DLJAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  ILJAELA_print_dpname(A68_INT  Margin, A68_218  Dp, A68_CHAR  Type, void *NonLocals)
#define NL(x) (((JLJAELA_print_dpname *)NonLocals)->x)
{ 
A68_224  KLJAELA;  /* collateral clause result */
A68_52  LLJAELA;  /* OPERATORS - mode -> union mode */
A68_56  MLJAELA;  /* procedure value */
A68_52  NLJAELA;  /* OPERATORS - mode -> union mode */
A68_52  OLJAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PLJAELA;  /* YIELD */
A68_52  SLJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  TLJAELA;  /* YIELD */
A68_52  ULJAELA;  /* OPERATORS - mode -> union mode */
A68_INT  VLJAELA;  /* YIELD */
A68_85  WLJAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  XLJAELA;  /* clause result */
A68_225  YLJAELA;  /* collateral clause result */
A68_52  ZLJAELA;  /* OPERATORS - mode -> union mode */
A68_56  AMJAELA;  /* procedure value */
A68_52  BMJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  CMJAELA;  /* YIELD */
A68_52  DMJAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EMJAELA;  /* YIELD */
A68_61  FMJAELA;  /* avoid structure result */
A68_52  GMJAELA;  /* OPERATORS - mode -> union mode */
A68_52  HMJAELA;  /* OPERATORS - mode -> union mode */
A68_52  IMJAELA;  /* OPERATORS - mode -> union mode */
A68_INT  JMJAELA;  /* YIELD */
A68_52  KMJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  LMJAELA;  /* YIELD */
A68_85  MMJAELA;  /* OPERATORS - istruct -> vector */
A68_INT  NMJAELA;  /* YIELD */
A68_BOOL * OMJAELA;  /* YIELD */
A_PROC_ENTRY(print_dpname);
 /* line 94: */
 /* line 95: */
if ( Dp.Printed )
{ 
MLJAELA.fn.fn_global = LRAAOSL_newline;
MLJAELA.nonlocals = A68_NIL;
KLJAELA.data[0] = A_UNITE(LLJAELA,mode12,12,MLJAELA);
KLJAELA.data[1] = A_UNITE(NLJAELA,mode6,6,Type);
PLJAELA = Dp.Size ;
KLJAELA.data[2] = A_UNITE(OLJAELA,mode1,1,PLJAELA);
TLJAELA = RLJAELA ;
KLJAELA.data[3] = A_UNITE(SLJAELA,mode7,7,TLJAELA);
VLJAELA = Dp.N ;
KLJAELA.data[4] = A_UNITE(ULJAELA,mode1,1,VLJAELA);
QJJAELA_print(Margin, A_HISVEC(WLJAELA,KLJAELA,5,A68_52 ));
 /* line 96: */
 /* line 97: */
XLJAELA = A68_FALSE;
} 
else
{ 
AMJAELA.fn.fn_global = LRAAOSL_newline;
AMJAELA.nonlocals = A68_NIL;
YLJAELA.data[0] = A_UNITE(ZLJAELA,mode12,12,AMJAELA);
CMJAELA = '%' ;
YLJAELA.data[1] = A_UNITE(BMJAELA,mode6,6,CMJAELA);
EMJAELA = Dp.N ;
YLJAELA.data[2] = A_UNITE(DMJAELA,mode1,1,EMJAELA);
 /* line 98: */
SYAAOSL_pos( Margin, &FMJAELA );
YLJAELA.data[3] = A_UNITE(GMJAELA,mode17,17,FMJAELA);
YLJAELA.data[4] = A_UNITE(HMJAELA,mode6,6,Type);
JMJAELA = Dp.Size ;
YLJAELA.data[5] = A_UNITE(IMJAELA,mode1,1,JMJAELA);
LMJAELA = ':' ;
YLJAELA.data[6] = A_UNITE(KMJAELA,mode6,6,LMJAELA);
QJJAELA_print(0, A_HISVEC(MMJAELA,YLJAELA,7,A68_52 ));
 /* line 99: */
 /* line 100: */
NMJAELA = Dp.N ;
OMJAELA = (&((&A_VINDEX((*NL(BKJAELA_mem)),NMJAELA))->Printed)) ;
XLJAELA = (*OMJAELA) = A68_TRUE;
} 
A_PROC_EXIT(print_dpname);
return( XLJAELA );
} 
#undef NL

A_STATIC A68_VOID  SMJAELA_printints(A68_INT  Margin, A68_218  Dp, void *NonLocals)
#define NL(x) (((TMJAELA_printints *)NonLocals)->x)
{ 
A68_33  VMJAELA_generator;   /* proc value of non-global proc */
A68_32  BNJAELA;  /* avoid structure result */
A68_32  ANJAELA_intblock;
A68_INT  CNJAELA_pos;
A68_228  DNJAELA;  /* collateral clause result */
A68_52  GNJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  HNJAELA;  /* YIELD */
A68_52  INJAELA;  /* OPERATORS - mode -> union mode */
A68_85  JNJAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printints);
 /* line 104: */
 /* line 105: */
if ( A_CALLPROC(NL(HLJAELA_print_dpname),(Margin, Dp, '{'),(Margin, Dp, '{',(NL(HLJAELA_print_dpname)).nonlocals)) )
{ 
A_CLOSURE( VMJAELA_generator, WMJAELA_generator, XMJAELA_generator );
(( XMJAELA_generator * ) ( VMJAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(VMJAELA_generator,(A68_TRUE, &BNJAELA),(A68_TRUE, &BNJAELA,(VMJAELA_generator).nonlocals));
ANJAELA_intblock = BNJAELA;
 /* line 106: */
WZEAELA_read_ints(NL(Df), ANJAELA_intblock, Dp.Dp);
 /* line 107: */
CNJAELA_pos = YOAAOSL_charnumber(LEAAOST_out);
 /* line 108: */
HNJAELA = FNJAELA ;
DNJAELA.data[0] = A_UNITE(GNJAELA,mode7,7,HNJAELA);
DNJAELA.data[1] = A_UNITE(INJAELA,mode2,2,ANJAELA_intblock);
 /* line 109: */
QJJAELA_print((CNJAELA_pos+1), A_HISVEC(JNJAELA,DNJAELA,2,A68_52 ));
} 
A_PROC_EXIT(printints);
return;
} 
#undef NL

A_STATIC A68_VOID  NNJAELA_printchars(A68_INT  Margin, A68_218  Dp, void *NonLocals)
#define NL(x) (((ONJAELA_printchars *)NonLocals)->x)
{ 
A68_31  QNJAELA_generator;   /* proc value of non-global proc */
A68_VC  WNJAELA;  /* avoid structure result */
A68_VC  VNJAELA_charblock;
A68_INT  XNJAELA_pos;
A68_52  AOJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  BOJAELA;  /* YIELD */
A68_85  COJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR * DOJAELA_c;
A68_INT  EOJAELA;  /* forall loop counter */
A68_BOOL  FOJAELA;  /* optbool result */
A68_229  GOJAELA;  /* collateral clause result */
A68_52  HOJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  IOJAELA;  /* YIELD */
A68_VC  JOJAELA;  /* avoid structure result */
A68_52  KOJAELA;  /* OPERATORS - mode -> union mode */
A68_52  LOJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  MOJAELA;  /* YIELD */
A68_85  NOJAELA;  /* OPERATORS - istruct -> vector */
A68_VC  OOJAELA;  /* avoid structure result */
A68_52  POJAELA;  /* OPERATORS - mode -> union mode */
A68_85  QOJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  ROJAELA;  /* OPERATORS - mode -> union mode */
A68_85  SOJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printchars);
 /* line 113: */
 /* line 114: */
if ( A_CALLPROC(NL(HLJAELA_print_dpname),(Margin, Dp, '?'),(Margin, Dp, '?',(NL(HLJAELA_print_dpname)).nonlocals)) )
{ 
A_CLOSURE( QNJAELA_generator, RNJAELA_generator, SNJAELA_generator );
(( SNJAELA_generator * ) ( QNJAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(QNJAELA_generator,(A68_TRUE, &WNJAELA),(A68_TRUE, &WNJAELA,(QNJAELA_generator).nonlocals));
VNJAELA_charblock = WNJAELA;
 /* line 115: */
NAFAELA_read_chars(NL(Df), VNJAELA_charblock, Dp.Dp);
 /* line 116: */
XNJAELA_pos = YOAAOSL_charnumber(LEAAOST_out);
 /* line 117: */
BOJAELA = ZNJAELA ;
QJJAELA_print((XNJAELA_pos+1), A_HVEC(COJAELA,A_UNITE(AOJAELA,mode7,7,BOJAELA),A68_52 ));
 /* line 118: */
 /* line 119: */
EOJAELA = VNJAELA_charblock.upb -1;
DOJAELA_c = VNJAELA_charblock.data;
for (;EOJAELA-- >= 0;
(DOJAELA_c++
) )
{
FOJAELA = ((*DOJAELA_c)<=' ');
if ( ! FOJAELA )
{ /* line 120: */
FOJAELA = ((*DOJAELA_c)>'~');
}
if ( FOJAELA )
{ 
IOJAELA = '<' ;
GOJAELA.data[0] = A_UNITE(HOJAELA,mode6,6,IOJAELA);
FCAAOSI_intchars( (A68_INT)(unsigned char)(*DOJAELA_c), &JOJAELA );
GOJAELA.data[1] = A_UNITE(KOJAELA,mode7,7,JOJAELA);
MOJAELA = '>' ;
GOJAELA.data[2] = A_UNITE(LOJAELA,mode6,6,MOJAELA);
 /* line 121: */
UJBAOSL_oneline( A_HISVEC(NOJAELA,GOJAELA,3,A68_52 ), &OOJAELA );
QJJAELA_print((XNJAELA_pos+1), A_HVEC(QOJAELA,A_UNITE(POJAELA,mode7,7,OOJAELA),A68_52 ));
} 
else
{ 
 /* line 122: */
 /* line 123: */
QJJAELA_print((XNJAELA_pos+1), A_HVEC(SOJAELA,A_UNITE(ROJAELA,mode6,6,(*DOJAELA_c)),A68_52 ));
} 
}
 /* line 124: */
} 
A_PROC_EXIT(printchars);
return;
} 
#undef NL

A_STATIC A68_VOID  XOJAELA_printdiscptrs(A68_INT  Margin, A68_218  Dp, void *NonLocals)
#define NL(x) (((YOJAELA_printdiscptrs *)NonLocals)->x)
{ 
A68_231  APJAELA_generator;   /* proc value of non-global proc */
A68_161  GPJAELA;  /* avoid structure result */
A68_161  FPJAELA_ptrblock;
A68_160 * HPJAELA_ptr;
A68_INT  IPJAELA;  /* forall loop counter */
A68_224  JPJAELA;  /* collateral clause result */
A68_52  KPJAELA;  /* OPERATORS - mode -> union mode */
A68_56  LPJAELA;  /* procedure value */
A68_52  MPJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  NPJAELA;  /* YIELD */
A68_52  OPJAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PPJAELA;  /* YIELD */
A68_61  QPJAELA;  /* avoid structure result */
A68_52  RPJAELA;  /* OPERATORS - mode -> union mode */
A68_52  SPJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  TPJAELA;  /* YIELD */
A68_85  UPJAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printdiscptrs);
 /* line 131: */
 /* line 132: */
if ( A_CALLPROC(NL(HLJAELA_print_dpname),(Margin, Dp, '['),(Margin, Dp, '[',(NL(HLJAELA_print_dpname)).nonlocals)) )
{ 
A_CLOSURE( APJAELA_generator, BPJAELA_generator, CPJAELA_generator );
(( CPJAELA_generator * ) ( APJAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(APJAELA_generator,(A68_TRUE, &GPJAELA),(A68_TRUE, &GPJAELA,(APJAELA_generator).nonlocals));
FPJAELA_ptrblock = GPJAELA;
 /* line 133: */
ZCFAELA_read_discptrs(NL(Df), FPJAELA_ptrblock, Dp.Dp);
 /* line 134: */
IPJAELA = FPJAELA_ptrblock.upb -1;
HPJAELA_ptr = FPJAELA_ptrblock.data;
for (;IPJAELA-- >= 0;
(HPJAELA_ptr++
) )
{
A_CALLPROC((*NL(TOJAELA_printdp)),((Margin+NJJAELA_indent), (*HPJAELA_ptr)),((Margin+NJJAELA_indent), (*HPJAELA_ptr),((*NL(TOJAELA_printdp))).nonlocals));
}
 /* line 135: */
LPJAELA.fn.fn_global = LRAAOSL_newline;
LPJAELA.nonlocals = A68_NIL;
JPJAELA.data[0] = A_UNITE(KPJAELA,mode12,12,LPJAELA);
NPJAELA = '-' ;
JPJAELA.data[1] = A_UNITE(MPJAELA,mode6,6,NPJAELA);
PPJAELA = Dp.N ;
JPJAELA.data[2] = A_UNITE(OPJAELA,mode1,1,PPJAELA);
SYAAOSL_pos( Margin, &QPJAELA );
JPJAELA.data[3] = A_UNITE(RPJAELA,mode17,17,QPJAELA);
TPJAELA = ']' ;
JPJAELA.data[4] = A_UNITE(SPJAELA,mode6,6,TPJAELA);
 /* line 136: */
QJJAELA_print(0, A_HISVEC(UPJAELA,JPJAELA,5,A68_52 ));
} 
A_PROC_EXIT(printdiscptrs);
return;
} 
#undef NL

A_STATIC A68_VOID  YPJAELA_printcharsdps(A68_INT  Margin, A68_218  Dp, void *NonLocals)
#define NL(x) (((ZPJAELA_printcharsdps *)NonLocals)->x)
{ 
A68_31  BQJAELA_generator;   /* proc value of non-global proc */
A68_VC  HQJAELA;  /* avoid structure result */
A68_VC  GQJAELA_charblock;
A68_231  JQJAELA_generator;   /* proc value of non-global proc */
A68_161  PQJAELA;  /* avoid structure result */
A68_161  OQJAELA_ptrblock;
A68_INT  QQJAELA_pos;
A68_52  TQJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  UQJAELA;  /* YIELD */
A68_85  VQJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR * WQJAELA_c;
A68_INT  XQJAELA;  /* forall loop counter */
A68_BOOL  YQJAELA;  /* optbool result */
A68_229  ZQJAELA;  /* collateral clause result */
A68_52  ARJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  BRJAELA;  /* YIELD */
A68_VC  CRJAELA;  /* avoid structure result */
A68_52  DRJAELA;  /* OPERATORS - mode -> union mode */
A68_52  ERJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  FRJAELA;  /* YIELD */
A68_85  GRJAELA;  /* OPERATORS - istruct -> vector */
A68_VC  HRJAELA;  /* avoid structure result */
A68_52  IRJAELA;  /* OPERATORS - mode -> union mode */
A68_85  JRJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  KRJAELA;  /* OPERATORS - mode -> union mode */
A68_85  LRJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printcharsdps);
 /* line 139: */
 /* line 140: */
{ 
A_CLOSURE( BQJAELA_generator, CQJAELA_generator, DQJAELA_generator );
(( DQJAELA_generator * ) ( BQJAELA_generator.nonlocals )) -> Df = NL(Df);
(( DQJAELA_generator * ) ( BQJAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(BQJAELA_generator,(A68_TRUE, &HQJAELA),(A68_TRUE, &HQJAELA,(BQJAELA_generator).nonlocals));
GQJAELA_charblock = HQJAELA;
 /* line 141: */
A_CLOSURE( JQJAELA_generator, KQJAELA_generator, LQJAELA_generator );
(( LQJAELA_generator * ) ( JQJAELA_generator.nonlocals )) -> Df = NL(Df);
(( LQJAELA_generator * ) ( JQJAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(JQJAELA_generator,(A68_TRUE, &PQJAELA),(A68_TRUE, &PQJAELA,(JQJAELA_generator).nonlocals));
OQJAELA_ptrblock = PQJAELA;
 /* line 142: */
TAFAELA_read_chars_dps(NL(Df), GQJAELA_charblock, OQJAELA_ptrblock, Dp.Dp);
 /* line 143: */
 /* line 144: */
if ( A_CALLPROC(NL(HLJAELA_print_dpname),(Margin, Dp, '('),(Margin, Dp, '(',(NL(HLJAELA_print_dpname)).nonlocals)) )
{ 
QQJAELA_pos = YOAAOSL_charnumber(LEAAOST_out);
 /* line 145: */
UQJAELA = SQJAELA ;
QJJAELA_print((QQJAELA_pos+1), A_HVEC(VQJAELA,A_UNITE(TQJAELA,mode7,7,UQJAELA),A68_52 ));
 /* line 146: */
 /* line 147: */
XQJAELA = GQJAELA_charblock.upb -1;
WQJAELA_c = GQJAELA_charblock.data;
for (;XQJAELA-- >= 0;
(WQJAELA_c++
) )
{
YQJAELA = ((*WQJAELA_c)<=' ');
if ( ! YQJAELA )
{ /* line 148: */
YQJAELA = ((*WQJAELA_c)>'~');
}
if ( YQJAELA )
{ 
BRJAELA = '<' ;
ZQJAELA.data[0] = A_UNITE(ARJAELA,mode6,6,BRJAELA);
FCAAOSI_intchars( (A68_INT)(unsigned char)(*WQJAELA_c), &CRJAELA );
ZQJAELA.data[1] = A_UNITE(DRJAELA,mode7,7,CRJAELA);
FRJAELA = '>' ;
ZQJAELA.data[2] = A_UNITE(ERJAELA,mode6,6,FRJAELA);
 /* line 149: */
UJBAOSL_oneline( A_HISVEC(GRJAELA,ZQJAELA,3,A68_52 ), &HRJAELA );
QJJAELA_print((QQJAELA_pos+1), A_HVEC(JRJAELA,A_UNITE(IRJAELA,mode7,7,HRJAELA),A68_52 ));
} 
else
{ 
 /* line 150: */
 /* line 151: */
QJJAELA_print((QQJAELA_pos+1), A_HVEC(LRJAELA,A_UNITE(KRJAELA,mode6,6,(*WQJAELA_c)),A68_52 ));
} 
}
 /* line 152: */
 /* line 153: */
} 
} 
A_PROC_EXIT(printcharsdps);
return;
} 
#undef NL

A_STATIC A68_VOID  PRJAELA_anonymous(A68_INT  Margin, A68_160  Ptr, void *NonLocals)
#define NL(x) (((QRJAELA_anonymous *)NonLocals)->x)
{ 
A68_228  RRJAELA;  /* collateral clause result */
A68_52  SRJAELA;  /* OPERATORS - mode -> union mode */
A68_56  TRJAELA;  /* procedure value */
A68_52  URJAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  VRJAELA;  /* YIELD */
A68_85  WRJAELA;  /* OPERATORS - istruct -> vector */
A68_218  XRJAELA;  /* avoid structure result */
A68_218  YRJAELA_dp;
A68_52  BSJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  CSJAELA;  /* YIELD */
A68_85  DSJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  GSJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  HSJAELA;  /* YIELD */
A68_85  ISJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 156: */
 /* line 157: */
if ( (GKEAELA_discptr_data(NL(Df), Ptr)==2) )
{ 
TRJAELA.fn.fn_global = LRAAOSL_newline;
TRJAELA.nonlocals = A68_NIL;
RRJAELA.data[0] = A_UNITE(SRJAELA,mode12,12,TRJAELA);
VRJAELA = '#' ;
RRJAELA.data[1] = A_UNITE(URJAELA,mode6,6,VRJAELA);
 /* line 158: */
QJJAELA_print(Margin, A_HISVEC(WRJAELA,RRJAELA,2,A68_52 ));
} 
else
{ 
A_CALLPROC(NL(XKJAELA_find),(Ptr, &XRJAELA),(Ptr, &XRJAELA,(NL(XKJAELA_find)).nonlocals));
YRJAELA_dp = XRJAELA;
 /* line 159: */
 /* line 160: */
switch ( GKEAELA_discptr_data(NL(Df), Ptr) )
{ 
case 1: 
/*SKIP*/;
break;
case 2: 
 /* line 161: */
/*SKIP*/;
break;
case 3: 
 /* line 162: */
A_CALLPROC(NL(XPJAELA_printcharsdps),(Margin, YRJAELA_dp),(Margin, YRJAELA_dp,(NL(XPJAELA_printcharsdps)).nonlocals));
break;
case 4: 
 /* line 163: */
A_CALLPROC(NL(RMJAELA_printints),(Margin, YRJAELA_dp),(Margin, YRJAELA_dp,(NL(RMJAELA_printints)).nonlocals));
break;
case 5: 
 /* line 164: */
A_CALLPROC(NL(MNJAELA_printchars),(Margin, YRJAELA_dp),(Margin, YRJAELA_dp,(NL(MNJAELA_printchars)).nonlocals));
break;
case 6: 
 /* line 166: */
A_CALLPROC(NL(WOJAELA_printdiscptrs),(Margin, YRJAELA_dp),(Margin, YRJAELA_dp,(NL(WOJAELA_printdiscptrs)).nonlocals));
break;
case 7: 
/*SKIP*/;
break;
case 8: 
 /* line 167: */
CSJAELA = ASJAELA ;
QJJAELA_print(Margin, A_HVEC(DSJAELA,A_UNITE(BSJAELA,mode7,7,CSJAELA),A68_52 ));
break;
default: 
 /* line 168: */
 /* line 169: */
HSJAELA = FSJAELA ;
QJJAELA_print(Margin, A_HVEC(ISJAELA,A_UNITE(GSJAELA,mode7,7,HSJAELA),A68_52 ));
break;
} 
} 
return;
} 
#undef NL

A68_VOID  MJJAELA_ptkeepsake(A68_158 * Df, A68_97  Flt)
{ 
A68_220  WJJAELA_generator;   /* proc value of non-global proc */
A68_219  CKJAELA;  /* avoid structure result */
A68_219  BKJAELA_mem;
A68_INT  DKJAELA_ndp;
A68_221  FKJAELA_add;   /* proc value of non-global proc */
A68_222  XKJAELA_find;   /* proc value of non-global proc */
A68_223  HLJAELA_print_dpname;   /* proc value of non-global proc */
A68_226  RMJAELA_printints;   /* proc value of non-global proc */
A68_226  MNJAELA_printchars;   /* proc value of non-global proc */
A68_230  TOJAELA_printdp;
A68_226  WOJAELA_printdiscptrs;   /* proc value of non-global proc */
A68_226  XPJAELA_printcharsdps;   /* proc value of non-global proc */
A68_230  ORJAELA_anonymous;   /* proc value of non-global proc */
A68_236  JSJAELA;  /* collateral clause result */
A68_52  KSJAELA;  /* OPERATORS - mode -> union mode */
A68_56  LSJAELA;  /* procedure value */
A68_61  MSJAELA;  /* avoid structure result */
A68_52  NSJAELA;  /* OPERATORS - mode -> union mode */
A68_52  QSJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  RSJAELA;  /* YIELD */
A68_64  SSJAELA;  /* avoid structure result */
A68_52  TSJAELA;  /* OPERATORS - mode -> union mode */
A68_52  WSJAELA;  /* OPERATORS - mode -> union mode */
A68_VC  XSJAELA;  /* YIELD */
A68_64  YSJAELA;  /* avoid structure result */
A68_52  ZSJAELA;  /* OPERATORS - mode -> union mode */
A68_85  ATJAELA;  /* OPERATORS - istruct -> vector */
A68_160  BTJAELA;  /* avoid structure result */
A68_64  CTJAELA;  /* avoid structure result */
A68_52  DTJAELA;  /* OPERATORS - mode -> union mode */
A68_85  ETJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ptkeepsake);
 /* line 56: */
 /* line 57: */
{ 
 /* line 59: */
 /* line 62: */
 /* line 64: */
 /* line 65: */
A_CLOSURE( WJJAELA_generator, XJJAELA_generator, YJJAELA_generator );
A_CALLPROC(WJJAELA_generator,(A68_FALSE, &CKJAELA),(A68_FALSE, &CKJAELA,(WJJAELA_generator).nonlocals));
BKJAELA_mem = CKJAELA;
 /* line 66: */
DKJAELA_ndp = 0;
 /* line 68: */
A_CLOSURE( FKJAELA_add, GKJAELA_add, HKJAELA_add );
(( HKJAELA_add * ) ( FKJAELA_add.nonlocals )) -> DKJAELA_ndp = (&DKJAELA_ndp);
(( HKJAELA_add * ) ( FKJAELA_add.nonlocals )) -> BKJAELA_mem = (&BKJAELA_mem);
(( HKJAELA_add * ) ( FKJAELA_add.nonlocals )) -> Df = Df;
 /* line 82: */
A_CLOSURE( XKJAELA_find, YKJAELA_find, ZKJAELA_find );
(( ZKJAELA_find * ) ( XKJAELA_find.nonlocals )) -> DKJAELA_ndp = (&DKJAELA_ndp);
(( ZKJAELA_find * ) ( XKJAELA_find.nonlocals )) -> Df = Df;
(( ZKJAELA_find * ) ( XKJAELA_find.nonlocals )) -> BKJAELA_mem = (&BKJAELA_mem);
(( ZKJAELA_find * ) ( XKJAELA_find.nonlocals )) -> FKJAELA_add = FKJAELA_add;
 /* line 92: */
A_CLOSURE( HLJAELA_print_dpname, ILJAELA_print_dpname, JLJAELA_print_dpname );
(( JLJAELA_print_dpname * ) ( HLJAELA_print_dpname.nonlocals )) -> BKJAELA_mem = (&BKJAELA_mem);
 /* line 103: */
A_CLOSURE( RMJAELA_printints, SMJAELA_printints, TMJAELA_printints );
(( TMJAELA_printints * ) ( RMJAELA_printints.nonlocals )) -> HLJAELA_print_dpname = HLJAELA_print_dpname;
(( TMJAELA_printints * ) ( RMJAELA_printints.nonlocals )) -> Df = Df;
 /* line 112: */
A_CLOSURE( MNJAELA_printchars, NNJAELA_printchars, ONJAELA_printchars );
(( ONJAELA_printchars * ) ( MNJAELA_printchars.nonlocals )) -> HLJAELA_print_dpname = HLJAELA_print_dpname;
(( ONJAELA_printchars * ) ( MNJAELA_printchars.nonlocals )) -> Df = Df;
 /* line 127: */
 /* line 130: */
A_CLOSURE( WOJAELA_printdiscptrs, XOJAELA_printdiscptrs, YOJAELA_printdiscptrs );
(( YOJAELA_printdiscptrs * ) ( WOJAELA_printdiscptrs.nonlocals )) -> HLJAELA_print_dpname = HLJAELA_print_dpname;
(( YOJAELA_printdiscptrs * ) ( WOJAELA_printdiscptrs.nonlocals )) -> Df = Df;
(( YOJAELA_printdiscptrs * ) ( WOJAELA_printdiscptrs.nonlocals )) -> TOJAELA_printdp = (&TOJAELA_printdp);
 /* line 138: */
A_CLOSURE( XPJAELA_printcharsdps, YPJAELA_printcharsdps, ZPJAELA_printcharsdps );
(( ZPJAELA_printcharsdps * ) ( XPJAELA_printcharsdps.nonlocals )) -> Df = Df;
(( ZPJAELA_printcharsdps * ) ( XPJAELA_printcharsdps.nonlocals )) -> HLJAELA_print_dpname = HLJAELA_print_dpname;
 /* line 155: */
A_CLOSURE( ORJAELA_anonymous, PRJAELA_anonymous, QRJAELA_anonymous );
(( QRJAELA_anonymous * ) ( ORJAELA_anonymous.nonlocals )) -> Df = Df;
(( QRJAELA_anonymous * ) ( ORJAELA_anonymous.nonlocals )) -> XKJAELA_find = XKJAELA_find;
(( QRJAELA_anonymous * ) ( ORJAELA_anonymous.nonlocals )) -> XPJAELA_printcharsdps = XPJAELA_printcharsdps;
(( QRJAELA_anonymous * ) ( ORJAELA_anonymous.nonlocals )) -> RMJAELA_printints = RMJAELA_printints;
(( QRJAELA_anonymous * ) ( ORJAELA_anonymous.nonlocals )) -> MNJAELA_printchars = MNJAELA_printchars;
(( QRJAELA_anonymous * ) ( ORJAELA_anonymous.nonlocals )) -> WOJAELA_printdiscptrs = WOJAELA_printdiscptrs;
TOJAELA_printdp = ORJAELA_anonymous;
 /* line 172: */
LSJAELA.fn.fn_global = LRAAOSL_newline;
LSJAELA.nonlocals = A68_NIL;
JSJAELA.data[0] = A_UNITE(KSJAELA,mode12,12,LSJAELA);
SYAAOSL_pos( 30, &MSJAELA );
JSJAELA.data[1] = A_UNITE(NSJAELA,mode17,17,MSJAELA);
RSJAELA = PSJAELA ;
JSJAELA.data[2] = A_UNITE(QSJAELA,mode7,7,RSJAELA);
 /* line 174: */
HZAAOSL_lines( 2, &SSJAELA );
JSJAELA.data[3] = A_UNITE(TSJAELA,mode20,20,SSJAELA);
XSJAELA = VSJAELA ;
JSJAELA.data[4] = A_UNITE(WSJAELA,mode7,7,XSJAELA);
HZAAOSL_lines( 2, &YSJAELA );
JSJAELA.data[5] = A_UNITE(ZSJAELA,mode20,20,YSJAELA);
QJJAELA_print(0, A_HISVEC(ATJAELA,JSJAELA,6,A68_52 ));
 /* line 176: */
KVIAELA_get_root( Df, &BTJAELA );
A_CALLPROC(TOJAELA_printdp,(NJJAELA_indent, BTJAELA),(NJJAELA_indent, BTJAELA,(TOJAELA_printdp).nonlocals));
 /* line 178: */
 /* line 179: */
 /* line 181: */
HZAAOSL_lines( 2, &CTJAELA );
QJJAELA_print(0, A_HVEC(ETJAELA,A_UNITE(DTJAELA,mode20,20,CTJAELA),A68_52 ));
} 
A_PROC_EXIT(ptkeepsake);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void FJJAELA(void)   /* initialise DECS ptkeepsake */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/ptkeepsake.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/su_keepsake.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
KUDAELA();   /* USE su_keepsake */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/ptkeepsake.a68";
A_config.translation_time = "Tue Apr  4 10:34:11 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "EJJAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:34:11 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ptkeepsake);
UEAALIB_a68config(LGAALIB_configinfo, JJJAELA);
 /* line 55: */
 /* line 183: */
A_PROC_EXIT(DECS ptkeepsake);
} 
#undef NL
/* end of translation of ./a68files/ptkeepsake.a68 */
