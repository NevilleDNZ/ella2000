
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
/* UNAME:MMMAELA */
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

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t174 *,struct A68t176 ,struct A68t176 ),(struct A68t174 *,struct A68t176 ,struct A68t176 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE174,MODE176,MODE176) BOOL */

A_PROCEDURE(A68_INT ,A68t186,(struct A68t174 *,struct A68t176 ),(struct A68t174 *,struct A68t176 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE174,MODE176) INT */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t174 *,struct A68t176 *),(struct A68t174 *,struct A68t176 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE174) MODE176 */

A_PROCEDURE(struct A68t111 *,A68t188,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t111 *,A68_BOOL ,struct A68t174 *),(struct A68t111 *,A68_BOOL ,struct A68t174 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE111,BOOL) MODE174 */

A_PROCEDURE(A68_BOOL ,A68t190,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE174) BOOL */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t174 *,struct A68t176 ),(struct A68t174 *,struct A68t176 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE174,MODE176) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t174 *,struct A68t176 ,struct A68t97 ),(struct A68t174 *,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE174,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t174 *,struct A68t97 ),(struct A68t174 *,struct A68t97 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE174,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t194,(struct A68t174 *,A68_INT ),(struct A68t174 *,A68_INT ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE174,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t174 *,A68_INT ,struct A68t97 ),(struct A68t174 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE174,INT,MODE97) VOID */

A_PROCEDURE(struct A68t111 *,A68t196,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE174) REF MODE111 */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE174) INT */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE174) VOID */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t201,(struct A68t173 *,struct A68t176 ),(struct A68t173 *,struct A68t176 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE173,MODE176) BOOL */
struct A68t202{
A68_VC  Rvc;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE26,REF MODE202)  */
struct A68t203{
struct A68t173  Df;
struct A68t202  Head;
struct A68t202 * Current;
A68_INT  Index;
A_PAD_INT(PAD_54)
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_56)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE173,MODE202,REF MODE202,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t203 *,A68t204,(struct A68t173 *,struct A68t87 ,A68_INT ),(struct A68t173 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE173,MODE87,INT) REF MODE203 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE203) VOID */

A_PROCEDURE(struct A68t203 *,A68t206,(struct A68t173 *,struct A68t176 ),(struct A68t173 *,struct A68t176 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE173,MODE176) REF MODE203 */

A_PROCEDURE(A68_CHAR ,A68t207,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE203) CHAR */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t203 *,A68_VC ),(struct A68t203 *,A68_VC ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE203,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t209,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE203) BOOL */

A_PROCEDURE(A68_INT ,A68t210,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE203) INT */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t203 *,A68_VC *),(struct A68t203 *,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE203) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t173 *,struct A68t97 ),(struct A68t173 *,struct A68t97 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE173,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t173 *,A68_VC ,struct A68t97 ,struct A68t176 *),(struct A68t173 *,A68_VC ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE173,MODE26,MODE97) MODE176 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t173 *,struct A68t177 ,struct A68t97 ,struct A68t176 *),(struct A68t173 *,struct A68t177 ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE173,MODE177,MODE97) MODE176 */

A_PROCEDURE(A68_INT ,A68t215,(struct A68t173 *,struct A68t176 ,struct A68t97 ),(struct A68t173 *,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE173,MODE176,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t173 *,A68_VC ,struct A68t176 ,struct A68t97 ),(struct A68t173 *,A68_VC ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE173,REF MODE26,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t173 *,struct A68t177 ,struct A68t176 ,struct A68t97 ),(struct A68t173 *,struct A68t177 ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE173,REF MODE177,MODE176,MODE97) VOID */

A_PROCEDURE(struct A68t203 *,A68t218,(struct A68t173 *,struct A68t87 ),(struct A68t173 *,struct A68t87 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE173,MODE87) REF MODE203 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t203 *,struct A68t97 ),(struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE203,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t203 *,struct A68t97 ,struct A68t176 *),(struct A68t203 *,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE203,MODE97) MODE176 */

A_PROCEDURE(A68_INT ,A68t221,(A68_CHAR ,struct A68t203 *,struct A68t97 ),(A68_CHAR ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(CHAR,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t222,(A68_VC ,struct A68t203 *,struct A68t97 ),(A68_VC ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE26,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t223,(A68_INT ,struct A68t203 *,struct A68t97 ),(A68_INT ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t224,(A68_VC ,struct A68t203 *,struct A68t97 ),(A68_VC ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE26,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t225,(A68_BOOL ,struct A68t203 *,struct A68t97 ),(A68_BOOL ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL,REF MODE203,MODE97) INT */
struct A68t226{
A68_VC  Id;
struct A68t226 * Rest;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE26,REF MODE226)  */
struct A68t227{
A68_INT  Int;
A_PAD_INT(PAD_57)
struct A68t227 * Rest;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,REF MODE227)  */
struct A68t228 { A68_INT mode; union {
struct A68t229 * mode1;
struct A68t230 * mode2;
struct A68t231 * mode3;
struct A68t232 * mode4;
struct A68t233 * mode5;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233)  */
struct A68t229{
A68_INT  Attrno;
A_PAD_INT(PAD_58)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT)  */
struct A68t230{
A68_VC  Classname;
struct A68t226 * Strings;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE26,REF MODE226)  */
struct A68t231{
struct A68t228  Elem;
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE228,REF MODE231)  */
struct A68t232{
struct A68t228  Attr;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE228)  */
struct A68t233{
A68_INT  Attrnull;
A_PAD_INT(PAD_59)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT)  */
struct A68t234{
A68_INT  Sort;
A_PAD_INT(PAD_60)
A68_VC  Attrname;
struct A68t228  Value;
struct A68t235 * Usage;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT,REF MODE26,MODE228,REF MODE235)  */
struct A68t235{
A68_INT  Contextno;
A_PAD_INT(PAD_61)
A68_INT  Closureno;
A_PAD_INT(PAD_62)
A68_INT  Libv_spec;
A_PAD_INT(PAD_63)
A68_INT  Libv_body;
A_PAD_INT(PAD_64)
A68_BOOL  Import;
A_PAD_BOOL(PAD_65)
A68_BOOL  Export;
A_PAD_BOOL(PAD_66)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t236{
struct A68t228  Tag;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE228)  */
struct A68t237 { A68_INT mode; union {
struct A68t238 * mode1;
struct A68t239 * mode2;
struct A68t240 * mode3;
struct A68t241 * mode4;
struct A68t242 * mode5;
struct A68t243 * mode6;
struct A68t244 * mode7;
struct A68t245 * mode8;
struct A68t246 * mode9;
struct A68t247 * mode10;
} data; };
typedef struct A68t237  A68_237 ;    /* UNION(REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247)  */
struct A68t238{
A68_INT  Int;
A_PAD_INT(PAD_67)
A68_VC  Text;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t239{
A68_INT  Sort;
A_PAD_INT(PAD_68)
struct A68t237  Test;
struct A68t237  Standard;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,MODE237,MODE237)  */
struct A68t240{
A68_INT  Nameno;
A_PAD_INT(PAD_69)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT)  */
struct A68t241{
A68_INT  Intno;
A_PAD_INT(PAD_70)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT)  */
struct A68t242{
struct A68t237  Left;
A68_INT  Sort;
A_PAD_INT(PAD_71)
struct A68t237  Right;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE237,INT,MODE237)  */
struct A68t243{
A68_INT  Sort;
A_PAD_INT(PAD_72)
struct A68t237  Right;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,MODE237)  */
struct A68t244{
struct A68t237  Cond;
struct A68t237  True;
struct A68t237  False;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE237,MODE237,MODE237)  */
struct A68t245{
struct A68t237  Formula;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE237)  */
struct A68t246{
A68_INT  Macparno;
A_PAD_INT(PAD_73)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
A68_INT  Fnull;
A_PAD_INT(PAD_74)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT)  */
struct A68t248{
struct A68t237  Tag;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE237)  */
struct A68t249{
struct A68t237  Formula;
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE237,REF MODE249)  */
struct A68t252{
struct A68t237  Lwb;
struct A68t237  Upb;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE237,MODE237)  */
struct A68t251 { A68_INT mode; union {
struct A68t238 * mode1;
struct A68t239 * mode2;
struct A68t240 * mode3;
struct A68t241 * mode4;
struct A68t242 * mode5;
struct A68t243 * mode6;
struct A68t244 * mode7;
struct A68t245 * mode8;
struct A68t246 * mode9;
struct A68t247 * mode10;
struct A68t252  mode11;
} data; };
typedef struct A68t251  A68_251 ;    /* UNION(REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,MODE252)  */
struct A68t250{
A68_INT  Sort;
A_PAD_INT(PAD_75)
A68_VC  Intname;
struct A68t228  Attr;
struct A68t251  Value;
struct A68t235 * Usage;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(INT,REF MODE26,MODE228,MODE251,REF MODE235)  */
struct A68t253 { A68_INT mode; union {
struct A68t254 * mode1;
struct A68t255 * mode2;
struct A68t256 * mode3;
struct A68t257 * mode4;
struct A68t258 * mode5;
struct A68t259 * mode6;
struct A68t260 * mode7;
struct A68t246 * mode8;
struct A68t261 * mode9;
} data; };
typedef struct A68t253  A68_253 ;    /* UNION(REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260,REF MODE246,REF MODE261)  */
struct A68t254{
A68_INT  Typeno;
A_PAD_INT(PAD_76)
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT)  */
struct A68t255{
struct A68t237  Size;
struct A68t253  Elem;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE237,MODE253)  */
struct A68t256{
struct A68t253  Elem;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE253,REF MODE256)  */
struct A68t257{
struct A68t253  From;
struct A68t253  To;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE253,MODE253)  */
struct A68t258{
struct A68t253  Type;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE253)  */
struct A68t259{
struct A68t237  Size;
struct A68t253  Char;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE237,MODE253)  */
struct A68t260{
A68_INT  Tvoid;
A_PAD_INT(PAD_77)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT)  */
struct A68t261{
A68_INT  Tnull;
A_PAD_INT(PAD_78)
};
typedef struct A68t261  A68_261 ;    /* STRUCT(INT)  */
struct A68t262{
struct A68t253  Tag;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE253)  */
struct A68t263{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t264{
A68_VC  Altname;
struct A68t253  Assoc;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(REF MODE26,MODE253)  */
struct A68t265{
A68_VC  Tagname;
struct A68t252  Range;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(REF MODE26,MODE252)  */
A_VECTOR(struct A68t264 ,A68t267);
typedef struct A68t267  A68_267 ;    /* VECTOR [] MODE264 */
struct A68t266 { A68_INT mode; union {
struct A68t267  mode1;
struct A68t265 * mode2;
struct A68t262 * mode3;
struct A68t263 * mode4;
} data; };
typedef struct A68t266  A68_266 ;    /* UNION(REF MODE267,REF MODE265,REF MODE262,REF MODE263)  */
struct A68t268{
A68_INT  Sort;
A_PAD_INT(PAD_79)
A68_VC  Typename;
struct A68t228  Attr;
struct A68t266  Body;
struct A68t235 * Usage;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE26,MODE228,MODE266,REF MODE235)  */
struct A68t269{
A68_INT  Constno;
A_PAD_INT(PAD_80)
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT)  */
struct A68t270{
A68_INT  Typeno;
A_PAD_INT(PAD_81)
A68_INT  Primno;
A_PAD_INT(PAD_82)
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT,INT)  */
struct A68t271{
A68_INT  Typeno;
A_PAD_INT(PAD_83)
struct A68t237  Index;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,MODE237)  */
struct A68t272{
A68_INT  Typeno;
A_PAD_INT(PAD_84)
struct A68t252  Range;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT,MODE252)  */
struct A68t273{
struct A68t253  Querytype;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE253)  */
struct A68t275 { A68_INT mode; union {
struct A68t269 * mode1;
struct A68t270 * mode2;
struct A68t271 * mode3;
struct A68t273 * mode4;
struct A68t276 * mode5;
struct A68t277 * mode6;
struct A68t258 * mode7;
struct A68t272 * mode8;
struct A68t278 * mode9;
struct A68t279 * mode10;
struct A68t280 * mode11;
struct A68t281 * mode12;
struct A68t282 * mode13;
struct A68t283 * mode14;
struct A68t284 * mode15;
struct A68t285 * mode16;
struct A68t286 * mode17;
struct A68t287 * mode18;
struct A68t288 * mode19;
struct A68t289 * mode20;
struct A68t290 * mode21;
struct A68t291 * mode22;
struct A68t292 * mode23;
struct A68t293 * mode24;
struct A68t294 * mode25;
struct A68t295 * mode26;
struct A68t296 * mode27;
struct A68t297 * mode28;
struct A68t298 * mode29;
struct A68t299 * mode30;
struct A68t300 * mode31;
struct A68t301 * mode32;
struct A68t302 * mode33;
struct A68t303 * mode34;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(REF MODE269,REF MODE270,REF MODE271,REF MODE273,REF MODE276,REF MODE277,REF MODE258,REF MODE272,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303)  */
struct A68t274{
A68_INT  Sort;
A_PAD_INT(PAD_85)
A68_VC  Constname;
struct A68t228  Attr;
struct A68t275  Value;
struct A68t235 * Usage;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(INT,REF MODE26,MODE228,MODE275,REF MODE235)  */
struct A68t276{
A68_INT  Typeno;
A_PAD_INT(PAD_86)
struct A68t32  String;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t277{
A68_INT  Cvoid;
A_PAD_INT(PAD_87)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT)  */
struct A68t278{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
A68_INT  Firstno;
A_PAD_INT(PAD_89)
A68_INT  Lastno;
A_PAD_INT(PAD_90)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT,INT,INT)  */
struct A68t279{
struct A68t275  Alt;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE275,REF MODE279)  */
struct A68t280{
A68_INT  Sort;
A_PAD_INT(PAD_91)
A68_INT  Nameno;
A_PAD_INT(PAD_92)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,INT)  */
struct A68t281{
struct A68t275  Sink;
struct A68t275  Source;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE275,MODE275)  */
struct A68t282{
A68_INT  Typeno;
A_PAD_INT(PAD_93)
A68_INT  Altno;
A_PAD_INT(PAD_94)
struct A68t275  Assoc;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,INT,MODE275)  */
struct A68t283{
struct A68t275  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_95)
A68_INT  Altno;
A_PAD_INT(PAD_96)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE275,INT,INT)  */
struct A68t284{
struct A68t275  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_97)
A68_INT  Nameno;
A_PAD_INT(PAD_98)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE275,INT,INT)  */
struct A68t285{
struct A68t275  Unit;
struct A68t237  Index;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE275,MODE237)  */
struct A68t286{
struct A68t275  Unit;
struct A68t252  Range;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE275,MODE252)  */
struct A68t287{
struct A68t275  Unit;
struct A68t275  Index;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE275,MODE275)  */
struct A68t288{
struct A68t275  Unit;
struct A68t275  Index;
struct A68t275  From;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE275,MODE275,MODE275)  */
struct A68t289{
struct A68t237  Size;
struct A68t275  Elem;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE237,MODE275)  */
struct A68t290{
struct A68t275  Elem;
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE275,REF MODE290)  */
struct A68t291{
A68_BOOL  String;
A_PAD_BOOL(PAD_99)
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t275  Left;
struct A68t275  Right;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BOOL,INT,MODE275,MODE275)  */
A_VECTOR(struct A68t318 ,A68t317);
typedef struct A68t317  A68_317 ;    /* VECTOR [] MODE318 */
struct A68t320{
struct A68t275  Tag;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE275)  */
struct A68t315{
A68_INT  Fnno;
A_PAD_INT(PAD_101)
struct A68t317  Macparams;
struct A68t228  Attr;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(INT,REF MODE317,MODE228)  */
struct A68t319 { A68_INT mode; union {
struct A68t236  mode1;
struct A68t248  mode2;
struct A68t262  mode3;
struct A68t320  mode4;
struct A68t315  mode5;
} data; };
typedef struct A68t319  A68_319 ;    /* UNION(MODE236,MODE248,MODE262,MODE320,MODE315)  */
struct A68t318{
A68_INT  Sort;
A_PAD_INT(PAD_102)
struct A68t319  Param;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(INT,MODE319)  */
struct A68t292{
struct A68t315  Inst;
struct A68t275  Right;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE315,MODE275)  */
struct A68t293{
struct A68t275  Left;
struct A68t315  Inst;
struct A68t275  Right;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE275,MODE315,MODE275)  */
struct A68t294{
struct A68t275  Input;
struct A68t335 * Choices;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE275,REF MODE335)  */
struct A68t295{
struct A68t237  Cond;
struct A68t275  True;
struct A68t275  False;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE237,MODE275,MODE275)  */
struct A68t296{
struct A68t237  Repl;
struct A68t275  Body;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE237,MODE275)  */
struct A68t297{
struct A68t323 * Body;
struct A68t275  Output;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE323,MODE275)  */
struct A68t298{
struct A68t304 * Body;
struct A68t275  Output;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(REF MODE304,MODE275)  */
struct A68t299{
struct A68t275  Unit;
struct A68t228  Attr;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE275,MODE228)  */
struct A68t300{
struct A68t275  Unit;
struct A68t239  Check;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE275,MODE239)  */
struct A68t301{
struct A68t275  Unit;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE275)  */
struct A68t302{
struct A68t237  Size;
struct A68t275  Char;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(MODE237,MODE275)  */
struct A68t303{
A68_INT  Unull;
A_PAD_INT(PAD_103)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT)  */
struct A68t306{
A68_INT  Fnno;
A_PAD_INT(PAD_104)
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT)  */
struct A68t305 { A68_INT mode; union {
struct A68t229  mode1;
struct A68t241  mode2;
struct A68t254  mode3;
struct A68t269  mode4;
struct A68t306  mode5;
struct A68t307 * mode6;
struct A68t308 * mode7;
struct A68t309 * mode8;
struct A68t310 * mode9;
struct A68t311 * mode10;
struct A68t312 * mode11;
struct A68t313 * mode12;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(MODE229,MODE241,MODE254,MODE269,MODE306,REF MODE307,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313)  */
struct A68t304{
struct A68t305  Step;
struct A68t304 * Rest;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(MODE305,REF MODE304)  */
struct A68t307{
struct A68t237  Cond;
struct A68t321 * Print;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE237,REF MODE321)  */
struct A68t308{
struct A68t237  Cond;
struct A68t321 * Fault;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE237,REF MODE321)  */
struct A68t309{
struct A68t316 * Letnames;
struct A68t275  Unit;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE316,MODE275)  */
struct A68t310{
struct A68t249 * Sizes;
struct A68t315  Inst;
struct A68t316 * Makenames;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(REF MODE249,MODE315,REF MODE316)  */
struct A68t311{
struct A68t275  From;
struct A68t275  To;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE275,MODE275)  */
struct A68t312{
struct A68t249 * Repls;
struct A68t314 * Joins;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE249,REF MODE314)  */
struct A68t313{
A68_INT  Stepnull;
A_PAD_INT(PAD_105)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT)  */
struct A68t314{
struct A68t311  Join;
struct A68t314 * Rest;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE311,REF MODE314)  */
struct A68t316{
A68_INT  Nameno;
A_PAD_INT(PAD_106)
struct A68t316 * Rest;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(INT,REF MODE316)  */
struct A68t322 { A68_INT mode; union {
A68_VC  mode1;
struct A68t248 * mode2;
} data; };
typedef struct A68t322  A68_322 ;    /* UNION(REF MODE26,REF MODE248)  */
struct A68t321{
struct A68t322  Item;
struct A68t321 * Rest;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE322,REF MODE321)  */
struct A68t324 { A68_INT mode; union {
struct A68t229  mode1;
struct A68t241  mode2;
struct A68t254  mode3;
struct A68t269  mode4;
struct A68t306  mode5;
struct A68t307 * mode6;
struct A68t308 * mode7;
struct A68t325 * mode8;
struct A68t326 * mode9;
struct A68t327 * mode10;
struct A68t328 * mode11;
struct A68t329 * mode12;
struct A68t330 * mode13;
struct A68t331 * mode14;
struct A68t332 * mode15;
struct A68t323 * mode16;
struct A68t333 * mode17;
} data; };
typedef struct A68t324  A68_324 ;    /* UNION(MODE229,MODE241,MODE254,MODE269,MODE306,REF MODE307,REF MODE308,REF MODE325,REF MODE326,REF MODE327,REF MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE332,REF MODE323,REF MODE333)  */
struct A68t323{
struct A68t324  Step;
struct A68t323 * Rest;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE324,REF MODE323)  */
struct A68t325{
struct A68t309  Seqlet;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE309)  */
struct A68t326{
struct A68t309  Seqvar;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE309)  */
struct A68t327{
struct A68t316 * Pvarnames;
struct A68t275  Init;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE316,MODE275)  */
struct A68t328{
struct A68t275  To;
struct A68t275  From;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(MODE275,MODE275)  */
struct A68t329{
struct A68t275  Input;
struct A68t334 * Choices;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE275,REF MODE334)  */
struct A68t330{
struct A68t237  Cond;
struct A68t324  True;
struct A68t324  False;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE237,MODE324,MODE324)  */
struct A68t331{
struct A68t237  Repl;
struct A68t324  Body;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(MODE237,MODE324)  */
struct A68t332{
A68_INT  Seqnull;
A_PAD_INT(PAD_107)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(INT)  */
struct A68t333{
struct A68t237  Size;
struct A68t324  Elem;
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE237,MODE324)  */
struct A68t334{
A68_BOOL  Check;
A_PAD_BOOL(PAD_108)
A68_INT  Sort;
A_PAD_INT(PAD_109)
struct A68t275  Test;
struct A68t324  Output;
struct A68t334 * Rest;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(BOOL,INT,MODE275,MODE324,REF MODE334)  */
struct A68t335{
A68_BOOL  Check;
A_PAD_BOOL(PAD_110)
A68_INT  Sort;
A_PAD_INT(PAD_111)
struct A68t275  Test;
struct A68t275  Output;
struct A68t335 * Rest;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(BOOL,INT,MODE275,MODE275,REF MODE335)  */
struct A68t336 { A68_INT mode; union {
struct A68t229  mode1;
struct A68t241  mode2;
struct A68t254  mode3;
struct A68t269  mode4;
struct A68t306  mode5;
} data; };
typedef struct A68t336  A68_336 ;    /* UNION(MODE229,MODE241,MODE254,MODE269,MODE306)  */
struct A68t337{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_112)
A68_VC  Name;
struct A68t317  Macparams;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(BOOL,REF MODE26,REF MODE317)  */
struct A68t338{
struct A68t237  Output;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE237)  */
struct A68t339{
A68_INT  Reform;
A_PAD_INT(PAD_113)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(INT)  */
struct A68t340{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_114)
struct A68t158  Ctname;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t341{
A68_INT  Sort;
A_PAD_INT(PAD_115)
struct A68t275  Init;
struct A68t237  Ambigtime;
struct A68t275  Ambig;
struct A68t237  Delaytime;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(INT,MODE275,MODE237,MODE275,MODE237)  */
struct A68t342{
struct A68t275  Init;
struct A68t237  Delaytime;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(MODE275,MODE237)  */
struct A68t343{
struct A68t275  Init;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(MODE275)  */
struct A68t344{
A68_INT  Sort;
A_PAD_INT(PAD_116)
struct A68t237  Interval;
struct A68t275  Init;
struct A68t237  Skew;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(INT,MODE237,MODE275,MODE237)  */
struct A68t345{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_117)
A68_INT  Sort;
A_PAD_INT(PAD_118)
struct A68t315  Inst;
struct A68t237  Scale;
struct A68t275  Init;
struct A68t237  Skew;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(BOOL,INT,MODE315,MODE237,MODE275,MODE237)  */
struct A68t347 { A68_INT mode; union {
struct A68t320 * mode1;
struct A68t337 * mode2;
struct A68t338 * mode3;
struct A68t339 * mode4;
struct A68t340 * mode5;
struct A68t341 * mode6;
struct A68t342 * mode7;
struct A68t343 * mode8;
struct A68t344 * mode9;
struct A68t345 * mode10;
struct A68t346 * mode11;
struct A68t348 * mode12;
} data; };
typedef struct A68t347  A68_347 ;    /* UNION(REF MODE320,REF MODE337,REF MODE338,REF MODE339,REF MODE340,REF MODE341,REF MODE342,REF MODE343,REF MODE344,REF MODE345,REF MODE346,REF MODE348)  */
struct A68t346{
struct A68t227 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_119)
struct A68t347  Fnbody;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE227,BOOL,MODE347)  */
struct A68t348{
A68_INT  Bodynull;
A_PAD_INT(PAD_120)
};
typedef struct A68t348  A68_348 ;    /* STRUCT(INT)  */
struct A68t349{
A68_INT  Sort;
A_PAD_INT(PAD_121)
struct A68t336  Spec;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(INT,MODE336)  */
struct A68t350{
A68_VC  Name;
struct A68t253  Type;
struct A68t228  Attr;
};
typedef struct A68t350  A68_350 ;    /* STRUCT(REF MODE26,MODE253,MODE228)  */
A_VECTOR(struct A68t349 ,A68t352);
typedef struct A68t352  A68_352 ;    /* VECTOR [] MODE349 */
A_VECTOR(struct A68t350 ,A68t353);
typedef struct A68t353  A68_353 ;    /* VECTOR [] MODE350 */
struct A68t351{
A68_INT  Sort;
A_PAD_INT(PAD_122)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_123)
A68_VC  Fnname;
struct A68t352  Macspecs;
struct A68t228  Attr;
struct A68t316 * Inputs;
struct A68t316 * Outputs;
struct A68t353  Nametypes;
struct A68t347  Fnbody;
struct A68t235 * Usage;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE352,MODE228,REF MODE316,REF MODE316,REF MODE353,MODE347,REF MODE235)  */
A_VECTOR(struct A68t234 *,A68t355);
typedef struct A68t355  A68_355 ;    /* VECTOR [] REF MODE234 */
A_VECTOR(struct A68t250 *,A68t356);
typedef struct A68t356  A68_356 ;    /* VECTOR [] REF MODE250 */
A_VECTOR(struct A68t268 *,A68t357);
typedef struct A68t357  A68_357 ;    /* VECTOR [] REF MODE268 */
A_VECTOR(struct A68t274 *,A68t358);
typedef struct A68t358  A68_358 ;    /* VECTOR [] REF MODE274 */
A_VECTOR(struct A68t351 *,A68t359);
typedef struct A68t359  A68_359 ;    /* VECTOR [] REF MODE351 */
struct A68t354{
struct A68t355  Attrs;
struct A68t356  Ints;
struct A68t357  Types;
struct A68t358  Consts;
struct A68t359  Fns;
};
typedef struct A68t354  A68_354 ;    /* STRUCT(REF MODE355,REF MODE356,REF MODE357,REF MODE358,REF MODE359)  */
struct A68t360{
A68_INT  Closureno;
A_PAD_INT(PAD_124)
A68_INT  Sort;
A_PAD_INT(PAD_125)
struct A68t354 * Environ;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(INT,INT,REF MODE354)  */
struct A68t361{
struct A68t360  Outer;
struct A68t361 * Rest;
};
typedef struct A68t361  A68_361 ;    /* STRUCT(MODE360,REF MODE361)  */
A_VECTOR(struct A68t361 ,A68t363);
typedef struct A68t363  A68_363 ;    /* VECTOR [] MODE361 */
struct A68t362{
struct A68t363  Outers;
struct A68t362 * Rest;
};
typedef struct A68t362  A68_362 ;    /* STRUCT(REF MODE363,REF MODE362)  */
struct A68t364{
A68_INT  Max_closureno;
A_PAD_INT(PAD_126)
struct A68t361 * Outers;
struct A68t361 * Freelist;
struct A68t362 * Outerslist;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(INT,REF MODE361,REF MODE361,REF MODE362)  */
A_VECTOR(struct A68t361 *,A68t365);
typedef struct A68t365  A68_365 ;    /* VECTOR [] REF MODE361 */

A_PROCEDURE(struct A68t240 *,A68t366,(A68_INT ),(A68_INT ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(INT) REF MODE240 */

A_PROCEDURE(struct A68t241 *,A68t367,(A68_INT ),(A68_INT ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(INT) REF MODE241 */

A_PROCEDURE(struct A68t245 *,A68t368,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE237) REF MODE245 */

A_PROCEDURE(struct A68t248 *,A68t369,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE237) REF MODE248 */

A_PROCEDURE(struct A68t254 *,A68t370,(A68_INT ),(A68_INT ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(INT) REF MODE254 */

A_PROCEDURE(struct A68t258 *,A68t371,(struct A68t253 ),(struct A68t253 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE253) REF MODE258 */

A_PROCEDURE(struct A68t262 *,A68t372,(struct A68t253 ),(struct A68t253 ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE253) REF MODE262 */

A_PROCEDURE(struct A68t269 *,A68t373,(A68_INT ),(A68_INT ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(INT) REF MODE269 */

A_PROCEDURE(struct A68t273 *,A68t374,(struct A68t253 ),(struct A68t253 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE253) REF MODE273 */

A_PROCEDURE(struct A68t325 *,A68t375,(struct A68t309 ),(struct A68t309 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE309) REF MODE325 */

A_PROCEDURE(struct A68t326 *,A68t376,(struct A68t309 ),(struct A68t309 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE309) REF MODE326 */

A_PROCEDURE(struct A68t301 *,A68t377,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE275) REF MODE301 */

A_PROCEDURE(struct A68t320 *,A68t378,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE275) REF MODE320 */

A_PROCEDURE(struct A68t306 *,A68t379,(A68_INT ),(A68_INT ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(INT) REF MODE306 */

A_PROCEDURE(struct A68t338 *,A68t380,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE237) REF MODE338 */

A_PROCEDURE(struct A68t343 *,A68t381,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE275) REF MODE343 */

A_PROCEDURE(struct A68t246 *,A68t382,(A68_INT ),(A68_INT ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(INT) REF MODE246 */

A_PROCEDURE(struct A68t229 *,A68t383,(A68_INT ),(A68_INT ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(INT) REF MODE229 */

A_PROCEDURE(struct A68t236 *,A68t384,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE228) REF MODE236 */

A_PROCEDURE(struct A68t232 *,A68t385,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE228) REF MODE232 */
A_VECTOR(struct A68t226 *,A68t386);
typedef struct A68t386  A68_386 ;    /* VECTOR [] REF MODE226 */

A_PROCEDURE(A68_INT ,A68t387,(struct A68t364 *),(struct A68t364 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE364) INT */

A_PROCEDURE(struct A68t361 *,A68t388,(A68_INT ,struct A68t364 *,struct A68t97 ),(A68_INT ,struct A68t364 *,struct A68t97 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(INT,REF MODE364,MODE97) REF MODE361 */

A_PROCEDURE(struct A68t361 *,A68t389,(struct A68t364 *),(struct A68t364 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE364) REF MODE361 */

A_PROCEDURE(struct A68t361 **,A68t390,(struct A68t360 ,struct A68t361 **,struct A68t364 *,struct A68t97 ),(struct A68t360 ,struct A68t361 **,struct A68t364 *,struct A68t97 ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE360,REF REF MODE361,REF MODE364,MODE97) REF REF MODE361 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t361 **,struct A68t364 *,struct A68t97 ),(struct A68t361 **,struct A68t364 *,struct A68t97 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(REF REF MODE361,REF MODE364,MODE97) VOID */

A_PROCEDURE(struct A68t364 *,A68t392,(void),(void *));
typedef struct A68t392  A68_392 ;    /* PROC REF MODE364 */

A_PROCEDURE(A68_INT ,A68t393,(struct A68t364 *,struct A68t97 ),(struct A68t364 *,struct A68t97 ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE364,MODE97) INT */

A_PROCEDURE(struct A68t364 *,A68t394,(struct A68t364 *,struct A68t97 ),(struct A68t364 *,struct A68t97 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE364,MODE97) REF MODE364 */
struct A68t396 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t396  A68_396 ;    /* UNION(INT,VOID)  */
struct A68t395{
A68_INT  Type;
A_PAD_INT(PAD_127)
struct A68t396  Val;
};
typedef struct A68t395  A68_395 ;    /* STRUCT(INT,MODE396)  */
A_VECTOR(A68_SBITS ,A68t398);
typedef struct A68t398  A68_398 ;    /* VECTOR [] SHORT BITS */
struct A68t397{
A68_INT  Test_index;
A_PAD_INT(PAD_128)
struct A68t398  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t395 * Lex;
struct A68t32 * Sidstack;
struct A68t53  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_129)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(INT,MODE398,REF INT,REF INT,REF MODE395,REF REF MODE32,MODE53,INT)  */

A_PROCEDURE(A68_VOID ,A68t399,(A68_BOOL ,struct A68t397 *),(A68_BOOL ,struct A68t397 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(BOOL) MODE397 */
struct A68t401 ;
struct A68t402 ;
struct A68t403 ;
struct A68t404 ;
struct A68t405 ;

A_PROCEDURE(A68_VOID ,A68t400,(A68_INT ,struct A68t398 ,struct A68t53 ,struct A68t143 ,struct A68t402 ,struct A68t403 ,struct A68t404 ,struct A68t405 ,struct A68t401 *),(A68_INT ,struct A68t398 ,struct A68t53 ,struct A68t143 ,struct A68t402 ,struct A68t403 ,struct A68t404 ,struct A68t405 ,struct A68t401 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(INT,MODE398,MODE53,MODE143,MODE402,MODE403,MODE404,MODE405) MODE401 */
struct A68t401 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t401  A68_401 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t395 *),(struct A68t395 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC MODE395 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t397 ),(struct A68t397 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE397) VOID */

A_PROCEDURE(A68_VOID ,A68t404,(A68_INT ,A68_INT ,struct A68t396 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t396 ,A68_INT ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(INT,INT,MODE396,INT) VOID */

A_PROCEDURE(A68_INT ,A68t405,(A68_INT ,A68_INT ,struct A68t396 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t396 ,A68_INT ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(INT,INT,MODE396,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t406,(A68_INT ,struct A68t397 ),(A68_INT ,struct A68t397 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(INT,MODE397) BOOL */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t408,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t409);
typedef struct A68t409  A68_409 ;    /* STRUCT 59 CHAR */
struct A68t410{
A68_BOOL  B;
A_PAD_BOOL(PAD_130)
A68_INT  In;
A_PAD_INT(PAD_131)
struct A68t410 * Rest;
};
typedef struct A68t410  A68_410 ;    /* STRUCT(BOOL,INT,REF MODE410)  */
struct A68t411{
A68_BOOL  B;
A_PAD_BOOL(PAD_132)
A68_VC  Inid;
struct A68t411 * Rest;
};
typedef struct A68t411  A68_411 ;    /* STRUCT(BOOL,REF MODE26,REF MODE411)  */
struct A68t412{
A68_BOOL  B;
A_PAD_BOOL(PAD_133)
struct A68t253  Type;
struct A68t412 * Rest;
};
typedef struct A68t412  A68_412 ;    /* STRUCT(BOOL,MODE253,REF MODE412)  */
struct A68t413{
A68_BOOL  B;
A_PAD_BOOL(PAD_134)
struct A68t237  Formula;
struct A68t413 * Rest;
};
typedef struct A68t413  A68_413 ;    /* STRUCT(BOOL,MODE237,REF MODE413)  */
struct A68t414{
A68_BOOL  B;
A_PAD_BOOL(PAD_135)
struct A68t275  Const;
struct A68t414 * Rest;
};
typedef struct A68t414  A68_414 ;    /* STRUCT(BOOL,MODE275,REF MODE414)  */
struct A68t416{
A68_BOOL  B;
A_PAD_BOOL(PAD_136)
A68_VC  Id;
struct A68t253  Type;
struct A68t416 * Rest;
};
typedef struct A68t416  A68_416 ;    /* STRUCT(BOOL,REF MODE26,MODE253,REF MODE416)  */
struct A68t417{
struct A68t335 * Choices;
struct A68t417 * Rest;
};
typedef struct A68t417  A68_417 ;    /* STRUCT(REF MODE335,REF MODE417)  */
struct A68t418{
A68_INT  Choice;
A_PAD_INT(PAD_137)
A68_BOOL  Check;
A_PAD_BOOL(PAD_138)
struct A68t418 * Rest;
};
typedef struct A68t418  A68_418 ;    /* STRUCT(INT,BOOL,REF MODE418)  */
struct A68t419{
A68_INT  Iparams;
A_PAD_INT(PAD_139)
struct A68t315  Inst;
struct A68t419 * Rest;
};
typedef struct A68t419  A68_419 ;    /* STRUCT(INT,MODE315,REF MODE419)  */

A_PROCEDURE(A68_INT ,A68t420,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE237) INT */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t237 ,struct A68t237 *),(struct A68t237 ,struct A68t237 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE237) MODE237 */
struct A68t422{
struct A68t323 * Sequence;
struct A68t422 * Rest;
};
typedef struct A68t422  A68_422 ;    /* STRUCT(REF MODE323,REF MODE422)  */
struct A68t423{
struct A68t323 ** Sequence;
struct A68t423 * Rest;
};
typedef struct A68t423  A68_423 ;    /* STRUCT(REF REF MODE323,REF MODE423)  */
struct A68t424{
struct A68t304 * Series;
struct A68t424 * Rest;
};
typedef struct A68t424  A68_424 ;    /* STRUCT(REF MODE304,REF MODE424)  */
struct A68t425{
struct A68t304 ** Series;
struct A68t425 * Rest;
};
typedef struct A68t425  A68_425 ;    /* STRUCT(REF REF MODE304,REF MODE425)  */
struct A68t426{
struct A68t275  Unit;
struct A68t426 * Rest;
};
typedef struct A68t426  A68_426 ;    /* STRUCT(MODE275,REF MODE426)  */
struct A68t427{
struct A68t334 * Seqchoice;
struct A68t427 * Rest;
};
typedef struct A68t427  A68_427 ;    /* STRUCT(REF MODE334,REF MODE427)  */
struct A68t428{
struct A68t324  Seqstep;
struct A68t428 * Rest;
};
typedef struct A68t428  A68_428 ;    /* STRUCT(MODE324,REF MODE428)  */
struct A68t429{
A68_BOOL  Mult;
A_PAD_BOOL(PAD_140)
struct A68t429 * Rest;
};
typedef struct A68t429  A68_429 ;    /* STRUCT(BOOL,REF MODE429)  */
struct A68t430{
A68_INT  Num_names;
A_PAD_INT(PAD_141)
A68_INT  Stack;
A_PAD_INT(PAD_142)
};
typedef struct A68t430  A68_430 ;    /* STRUCT(INT,INT)  */
A_VECTOR(struct A68t430 *,A68t431);
typedef struct A68t431  A68_431 ;    /* VECTOR [] REF MODE430 */

A_PROCEDURE(A68_INT ,A68t432,(A68_INT ,A68_CHAR ),(A68_INT ,A68_CHAR ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(INT,CHAR) INT */
A_ISTRUCT(A68_CHAR ,11,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t434,(A68_INT ,struct A68t226 *,struct A68t32 *),(A68_INT ,struct A68t226 *,struct A68t32 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(INT,REF MODE226) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t436,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t437);
typedef struct A68t437  A68_437 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t438);
typedef struct A68t438  A68_438 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t439);
typedef struct A68t439  A68_439 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t440);
typedef struct A68t440  A68_440 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(struct A68t52 ,3,A68t441);
typedef struct A68t441  A68_441 ;    /* STRUCT 3 MODE52 */
struct A68t442{
struct A68t422 * Ss;
struct A68t423 * Ssr;
struct A68t427 * Scs;
struct A68t428 * Sss;
struct A68t323 * Seq;
struct A68t323 ** Nextseq;
};
typedef struct A68t442  A68_442 ;    /* STRUCT(REF MODE422,REF MODE423,REF MODE427,REF MODE428,REF MODE323,REF REF MODE323)  */
struct A68t443{
struct A68t424 * Ss;
struct A68t425 * Ssr;
struct A68t304 * Series;
struct A68t304 ** Nextseries;
};
typedef struct A68t443  A68_443 ;    /* STRUCT(REF MODE424,REF MODE425,REF MODE304,REF REF MODE304)  */
struct A68t444{
struct A68t417 * Ucs;
struct A68t429 * Multassign;
struct A68t418 * Es;
struct A68t314 * Joins;
};
typedef struct A68t444  A68_444 ;    /* STRUCT(REF MODE417,REF MODE429,REF MODE418,REF MODE314)  */
A_VECTOR(struct A68t275 ,A68t446);
typedef struct A68t446  A68_446 ;    /* VECTOR [] MODE275 */
struct A68t445{
struct A68t351 * Fndec;
A68_INT  Macnum;
A_PAD_INT(PAD_143)
struct A68t446  Stack;
A68_INT  Stackind;
A_PAD_INT(PAD_144)
A68_INT  Specsort;
A_PAD_INT(PAD_145)
struct A68t442  Seq;
struct A68t443  Ser;
struct A68t444  Sta;
};
typedef struct A68t445  A68_445 ;    /* STRUCT(REF MODE351,INT,REF MODE446,INT,INT,MODE442,MODE443,MODE444)  */
struct A68t447{
struct A68t445  Val;
struct A68t447 * Rest;
};
typedef struct A68t447  A68_447 ;    /* STRUCT(MODE445,REF MODE447)  */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t324 ),(struct A68t324 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE324) VOID */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t324 *),(struct A68t324 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC MODE324 */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t305 ),(struct A68t305 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE305) VOID */

A_PROCEDURE(struct A68t256 *,A68t451,(void),(void *));
typedef struct A68t451  A68_451 ;    /* PROC REF MODE256 */

A_PROCEDURE(A68_VOID ,A68t452,(A68_BOOL ,struct A68t267 *),(A68_BOOL ,struct A68t267 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(BOOL) MODE267 */

A_PROCEDURE(A68_VOID ,A68t453,(A68_BOOL ,struct A68t317 *),(A68_BOOL ,struct A68t317 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(BOOL) MODE317 */

A_PROCEDURE(A68_VOID ,A68t454,(A68_BOOL ,struct A68t446 *),(A68_BOOL ,struct A68t446 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(BOOL) MODE446 */

A_PROCEDURE(A68_VOID ,A68t455,(A68_BOOL ,struct A68t353 *),(A68_BOOL ,struct A68t353 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(BOOL) MODE353 */
A_ISTRUCT(A68_CHAR ,13,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t249 *,struct A68t253 ,struct A68t253 *),(struct A68t249 *,struct A68t253 ,struct A68t253 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE249,MODE253) MODE253 */

A_PROCEDURE(A68_VOID ,A68t458,(A68_BOOL ,struct A68t357 *),(A68_BOOL ,struct A68t357 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(BOOL) MODE357 */

A_PROCEDURE(A68_VOID ,A68t459,(A68_BOOL ,struct A68t356 *),(A68_BOOL ,struct A68t356 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(BOOL) MODE356 */

A_PROCEDURE(A68_VOID ,A68t460,(A68_BOOL ,struct A68t355 *),(A68_BOOL ,struct A68t355 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(BOOL) MODE355 */

A_PROCEDURE(A68_VOID ,A68t461,(A68_BOOL ,struct A68t358 *),(A68_BOOL ,struct A68t358 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(BOOL) MODE358 */

A_PROCEDURE(A68_VOID ,A68t462,(A68_BOOL ,struct A68t352 *),(A68_BOOL ,struct A68t352 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(BOOL) MODE352 */

A_PROCEDURE(A68_VOID ,A68t463,(A68_BOOL ,struct A68t359 *),(A68_BOOL ,struct A68t359 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(BOOL) MODE359 */

A_PROCEDURE(A68_VOID ,A68t464,(A68_BOOL ,struct A68t431 *),(A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(BOOL) MODE431 */

A_PROCEDURE(A68_VOID ,A68t465,(A68_INT ,A68_INT ,A68_BOOL ,struct A68t203 *,struct A68t97 ),(A68_INT ,A68_INT ,A68_BOOL ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(INT,INT,BOOL,REF MODE203,MODE97) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from sidanalyser --- */
/* --- End of imports from sidanalyser --- */


/* --- Imports from closureprocs --- */
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_279 * HAAATRN_nilualts;
extern A68_290 * IAAATRN_nilustr;
extern A68_335 * JAAATRN_niluchoices;
extern A68_226 * LAAATRN_nilids;
extern A68_227 * OAAATRN_nilints;
extern A68_321 * MAAATRN_nilprintitems;
extern A68_316 * NAAATRN_nilnames;
extern A68_334 * PAAATRN_nilseqchoices;
extern A68_323 * QAAATRN_nilsequence;
extern A68_314 * RAAATRN_niljoins;
extern A68_304 * SAAATRN_nilseries;
extern A68_340 * TAAATRN_nilimport;
extern A68_317  ABAATRN_nilmacparams;
extern A68_249 * BBAATRN_nilformulas;
extern A68_235 * CBAATRN_nilusage;
extern A68_231 * DBAATRN_nilattrstr;
extern A68_352  FBAATRN_nilmacspecs;
extern A68_352  GCAATRN_nullmacspecs;
extern A68_355  MCAATRN_nullattrdecs;
extern A68_356  SCAATRN_nullintdecs;
extern A68_357  YCAATRN_nulltypedecs;
extern A68_358  EDAATRN_nullconstdecs;
extern A68_359  KDAATRN_nullfndecs;
extern A68_240 * JEAATRN_makefarith(A68_INT );
extern A68_241 * OEAATRN_makefname(A68_INT );
extern A68_245 * YEAATRN_makefbracket(struct A68t237 );
extern A68_248 * DFAATRN_makeformulatag(struct A68t237 );
extern A68_254 * IFAATRN_maketname(A68_INT );
extern A68_258 * SFAATRN_maketbracket(struct A68t253 );
extern A68_262 * XFAATRN_maketypetag(struct A68t253 );
extern A68_269 * CGAATRN_makecname(A68_INT );
extern A68_258 * HGAATRN_makectype(struct A68t253 );
extern A68_273 * MGAATRN_makecquery(struct A68t253 );
extern A68_325 * BHAATRN_makeseqlet(struct A68t309 );
extern A68_326 * GHAATRN_makeseqvar(struct A68t309 );
extern A68_301 * RGAATRN_makeubracket(struct A68t275 );
extern A68_320 * WGAATRN_makeunittag(struct A68t275 );
extern A68_306 * LHAATRN_makefnname(A68_INT );
extern A68_338 * QHAATRN_makearith(struct A68t237 );
extern A68_343 * VHAATRN_makeram(struct A68t275 );
extern A68_246 * TEAATRN_makefmacpar(A68_INT );
extern A68_246 * NFAATRN_maketmacpar(A68_INT );
extern A68_229 * UDAATRN_makeattrname(A68_INT );
extern A68_236 * EEAATRN_makeattrtag(struct A68t228 );
extern A68_232 * ZDAATRN_makeattrbracket(struct A68t228 );
extern A68_233  ZHAATRN_attrnull;
extern A68_247  BIAATRN_fnull;
extern A68_261  DIAATRN_tnull;
extern A68_303  FIAATRN_unull;
extern A68_332  HIAATRN_seqnull;
extern A68_348  LIAATRN_bodynull;
extern A68_339  NIAATRN_reform;
extern A68_260  PIAATRN_tvoid;
extern A68_277  RIAATRN_cvoid;
#define WIAATRN_normalchoice 1
#define XIAATRN_elseofchoice 2
#define YIAATRN_elsechoice 3
#define ZIAATRN_noelsechoice 4
#define AJAATRN_explicitmacpar 0
#define BJAATRN_implicitmacpar 1
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define QKAATRN_macpardec 3
#define RKAATRN_outerattr 1
#define SKAATRN_outerint 2
#define TKAATRN_outertype 3
#define UKAATRN_outerconst 4
#define VKAATRN_outerfn 5
extern A68_38  ZLAATRN_makeid;
/* --- End of imports from assmodes --- */


/* --- Imports from databasebuffers --- */
#define AXIAELA_ident_tok 159
#define YWIAELA_numb_tok 126
extern A68_INT  PZIAELA_readiltok(struct A68t203 *);
/* --- End of imports from databasebuffers --- */


/* --- Imports from basics --- */
extern A68_VC  NTCAOST_nilid;
/* --- End of imports from basics --- */


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
extern A68_92  SHAAOSI_system;
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAELA(void);   /* sidanalyser */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_409   QMMAELA = {"$Id: assembleproc.a68,v 34.2 1995/03/29 13:03:14 ella Exp $"}; 
A_GISVEC(A68_VC ,RMMAELA,QMMAELA,59)
#define SMMAELA_nilinstack (A68_410 *)A68_NIL
#define TMMAELA_nilinidstack (A68_411 *)A68_NIL
#define UMMAELA_niltypestack (A68_412 *)A68_NIL
#define VMMAELA_nilformulastack (A68_413 *)A68_NIL
#define WMMAELA_nilconststack (A68_414 *)A68_NIL
#define XMMAELA_niltstrstack (A68_412 *)A68_NIL
#define YMMAELA_nilnamestack (A68_416 *)A68_NIL
#define ZMMAELA_nilchoicestack (A68_417 *)A68_NIL
#define ANMAELA_nilelsestack (A68_418 *)A68_NIL
#define BNMAELA_nilinststack (A68_419 *)A68_NIL
#define CNMAELA_kfn_spec 1
#define DNMAELA_body_spec 2
#define ENMAELA_ext_spec 3
#define MNMAELA_eoflib 125
static A68_INT  NNMAELA_spectype;
A68_BOOL  ONMAELA_exit;
static A68_INT  ROMAELA_integer;
A68_INT  SOMAELA_assinteger;
static A68_VC  TOMAELA_identifier;
A68_VC  UOMAELA_assidentifier;
static A68_203 * VOMAELA_buffer;
static A68_INT  WOMAELA_contextno;
static A68_INT  XOMAELA_closureno;
static A68_BOOL  YOMAELA_export;
static A68_97  ZOMAELA_flt;
static A68_INT  APMAELA_t1hold;
#define BPMAELA_nilsequencestack (A68_422 *)A68_NIL
#define CPMAELA_nilsequencestackr (A68_423 *)A68_NIL
#define DPMAELA_nilseriesstack (A68_424 *)A68_NIL
#define EPMAELA_nilseriesstackr (A68_425 *)A68_NIL
#define FPMAELA_nilunitstack (A68_426 *)A68_NIL
#define GPMAELA_nilseqchoicestack (A68_427 *)A68_NIL
#define HPMAELA_nilmultassign (A68_429 *)A68_NIL
#define IPMAELA_nilseqstepstack (A68_428 *)A68_NIL
static A68_226 * JPMAELA_idstack;
static A68_231 * KPMAELA_attrstr;
static A68_231 ** LPMAELA_nextattr;
static A68_410 * MPMAELA_instack;
static A68_411 * NPMAELA_inidstack;
static A68_412 * OPMAELA_typestack;
static A68_419 * PPMAELA_inststack;
static A68_413 * QPMAELA_formulastack;
static A68_414 * RPMAELA_conststack;
static A68_412 * SPMAELA_tstrstack;
static A68_426 * TPMAELA_unitstack;
static A68_429 * UPMAELA_multassign;
static A68_249 * VPMAELA_formulas;
static A68_231 * WPMAELA_attrstack;
static A68_228  XPMAELA_attribute;
static A68_253  YPMAELA_type;
static A68_237  ZPMAELA_formula;
static A68_275  AQMAELA_const;
static A68_357  OQMAELA_types;
static A68_359  PQMAELA_fns;
static A68_356  QQMAELA_ints;
static A68_358  RQMAELA_consts;
static A68_355  SQMAELA_attrs;
static A68_431  TQMAELA_inds;
static A68_INT  UQMAELA_charpos;
static A68_VC  VQMAELA_charlist;
static A68_433   HRMAELA = {"find_primno"}; 
A_GISVEC(A68_VC ,IRMAELA,HRMAELA,11)
static A68_437   MSMAELA = {"failure ... i= "}; 
A_GISVEC(A68_VC ,NSMAELA,MSMAELA,15)
static A68_438   RSMAELA = {"    t1= "}; 
A_GISVEC(A68_VC ,SSMAELA,RSMAELA,8)
static A68_439   WSMAELA = {"   "}; 
A_GISVEC(A68_VC ,XSMAELA,WSMAELA,3)
A68_360  KTMAELA_extdeclaration;
A68_336  LTMAELA_declaration;
static A68_BOOL  MTMAELA_fast;
static A68_INT  NTMAELA_newcount;
static A68_INT  OTMAELA_macnum;
static A68_321 * PTMAELA_printitems;
static A68_321 ** QTMAELA_nextprintitems;
static A68_347  RTMAELA_body;
static A68_266  STMAELA_typebody;
static A68_422 * TTMAELA_sequencestack;
static A68_423 * UTMAELA_sequencestackr;
static A68_427 * VTMAELA_seqchoicestack;
static A68_428 * WTMAELA_seqstepstack;
static A68_323 * XTMAELA_sequence;
static A68_323 ** YTMAELA_nextsequence;
static A68_424 * ZTMAELA_seriesstack;
static A68_425 * AUMAELA_seriesstackr;
static A68_304 * BUMAELA_series;
static A68_304 ** CUMAELA_nextseries;
static A68_416 * DUMAELA_namestack;
static A68_417 * EUMAELA_uchoicestack;
static A68_418 * FUMAELA_elsestack;
static A68_314 * GUMAELA_joinstack;
static A68_INT  HUMAELA_specsort;
static A68_446  IUMAELA_stack;
static A68_INT  JUMAELA_stackind;
static A68_INT  KUMAELA_iparams;
static A68_316 * LUMAELA_names;
static A68_351 * MUMAELA_fndec;
static A68_315  NUMAELA_instance;
static A68_447 * OUMAELA_fnstrstack;
#define PUMAELA_nilfnstrstack (A68_447 *)A68_NIL
#define TVMAELA_niltstr (A68_256 *)A68_NIL
static A68_456   FAOAELA = {"multseqassign"}; 
A_GISVEC(A68_VC ,GAOAELA,FAOAELA,13)
typedef struct   /* env of non-global proc */
{
A68_INT * ORMAELA_count;
} SRMAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LINAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_430 * PMNAELA_inds;
} TMNAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_430 * PMNAELA_inds;
} BNNAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DPOAELA_generator;

A_STATIC A68_INT  GNMAELA_giveint(A68_237  In);

A_STATIC A68_VOID  QNMAELA_uncheckedform(A68_237  A, A68_237  *ReturnedValue);

A_STATIC A68_VOID  BQMAELA_unstackin(void);

A_STATIC A68_VOID  CQMAELA_unstackinid(void);

A_STATIC A68_VOID  DQMAELA_unstackformula(void);

A_STATIC A68_VOID  EQMAELA_unstacktype(void);

A_STATIC A68_VOID  FQMAELA_unstackconst(void);

A_STATIC A68_VOID  GQMAELA_unstackinst(void);

A_STATIC A68_VOID  HQMAELA_unstackattr(void);

A_STATIC A68_VOID  JQMAELA_userflt(A68_VC  Mess);

A_STATIC A68_VOID  MQMAELA_sysflt(A68_VC  Mess);

A_STATIC A68_INT  YQMAELA_find_primno(A68_INT  Typeno, A68_CHAR  Char);

A_STATIC A68_VOID  MRMAELA_ids_to_rvi(A68_INT  Typeno, A68_226 * Strings, A68_32  *ReturnedValue);

A_STATIC A68_VOID  RRMAELA_generator(A68_BOOL  PRMAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  FSMAELA_print(A68_85  Line);

A_STATIC A68_VOID  ISMAELA_fault(A68_INT  I, A68_INT  T1);

A_STATIC A68_VOID  CTMAELA_syfaultp(A68_VC  Message);

A_STATIC A68_VOID  QUMAELA_setup_fnstrstack(void);

A_STATIC A68_VOID  BVMAELA_reset_fnstrstack(void);

A_STATIC A68_VOID  DVMAELA_default(void);

A_STATIC A68_VOID  HVMAELA_newseqstep(A68_324  S);

A_STATIC A68_VOID  LVMAELA_removeseqstep(A68_324  *ReturnedValue);

A_STATIC A68_VOID  PVMAELA_newstep(A68_305  S);

A_STATIC A68_256 * SVMAELA_tstset(void);

A68_VOID  YVMAELA_reader(A68_395  *ReturnedValue);

A68_VOID  GWMAELA_failure(A68_397  Error);

A68_VOID  IWMAELA_fail(A68_85  Line);

A68_INT  JWMAELA_return(void);

A68_VOID  MWMAELA_idproc(void);

A68_VOID  PWMAELA_inproc(void);

A68_VOID  SWMAELA_inidproc(void);

A68_VOID  VWMAELA_typeproc(void);

A68_VOID  YWMAELA_ctypestartp(void);

A68_VOID  CXMAELA_ctypeproc(void);

A68_VOID  FXMAELA_integerproc(void);

A68_VOID  IXMAELA_stackattr(void);

A68_VOID  LXMAELA_stackinst(void);

A68_VOID  OXMAELA_replicator(void);

A68_VOID  AYMAELA_attrproc(void);

A68_VOID  DYMAELA_attrname(void);

A68_VOID  GYMAELA_attrdata(void);

A68_VOID  KYMAELA_attrbracket(void);

A68_VOID  NYMAELA_attrnullp(void);

A68_VOID  PYMAELA_attrstart(void);

A68_VOID  QYMAELA_attrstrp(void);

A68_VOID  SYMAELA_iconst(void);

A68_VOID  WYMAELA_iconsttext(void);

A68_VOID  AZMAELA_iname(void);

A68_VOID  DZMAELA_idop(void);

A68_VOID  KZMAELA_imop(void);

A68_VOID  QZMAELA_icond(void);

A68_VOID  XZMAELA_iparam(void);

A68_VOID  AANAELA_intcheck(void);

A68_VOID  HANAELA_idef(void);

A68_VOID  KANAELA_ibracket(void);

A68_VOID  NANAELA_inull(void);

A68_VOID  PANAELA_tnullp(void);

A68_VOID  RANAELA_tvoidp(void);

A68_VOID  TANAELA_tnamed(void);

A68_VOID  WANAELA_trow(void);

A68_VOID  ABNAELA_tparam(void);

A68_VOID  DBNAELA_tfn(void);

A68_VOID  HBNAELA_tstring(void);

A68_VOID  LBNAELA_tstp(void);

A68_VOID  OBNAELA_tststartp(void);

A68_VOID  SBNAELA_tsttype(void);

A68_VOID  VBNAELA_tbracket(void);

A68_VOID  YBNAELA_cnamed(void);

A68_VOID  BCNAELA_cprim(void);

A68_VOID  FCNAELA_cprimi(void);

A68_VOID  JCNAELA_cprimr(void);

A68_VOID  PCNAELA_cprimu(void);

A68_VOID  VCNAELA_calt(void);

A68_VOID  ADNAELA_cst(void);

A68_VOID  FDNAELA_crow(void);

A68_VOID  JDNAELA_cnullp(void);

A68_VOID  LDNAELA_cvoidp(void);

A68_VOID  NDNAELA_cttype(void);

A68_VOID  QDNAELA_cquery(void);

A68_VOID  TDNAELA_cbracket(void);

A68_VOID  WDNAELA_cstring(void);

A68_VOID  AENAELA_cprimch(void);

A68_VOID  GENAELA_cprimst(void);

A68_VOID  MENAELA_cprimchr(void);

A68_VOID  UENAELA_cparam(void);

A68_VOID  XENAELA_cindex(void);

A68_VOID  BFNAELA_ctrim(void);

A68_VOID  HFNAELA_crepl(void);

A68_VOID  LFNAELA_ccond(void);

A68_VOID  PFNAELA_cconc(void);

A68_VOID  UFNAELA_cattr(void);

A68_VOID  YFNAELA_pidalts(void);

A_STATIC A68_VOID  AGNAELA_generator(A68_BOOL  ZFNAELA_anonymous, A68_267  *ReturnedValue);

A68_VOID  JGNAELA_prange(void);

A68_VOID  PGNAELA_pstringst(void);

A_STATIC A68_VOID  RGNAELA_generator(A68_BOOL  QGNAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  VGNAELA_pstring(void);

A68_VOID  ZGNAELA_pchar(void);

A68_VOID  CHNAELA_pcharange(void);

A68_VOID  MHNAELA_primsetp(void);

A68_VOID  QHNAELA_primset1(void);

A68_VOID  THNAELA_namestp(void);

A68_VOID  UHNAELA_idloop(void);

A68_VOID  BINAELA_attrlistpr(void);

A68_VOID  FINAELA_instance1(void);

A_STATIC A68_VOID  KINAELA_generator(A68_BOOL  IINAELA_anonymous, A68_317  *ReturnedValue, void *NonLocals);

A68_VOID  QINAELA_instancep(void);

A68_VOID  SINAELA_attrcall(void);

A68_VOID  ZINAELA_integercall(void);

A68_VOID  GJNAELA_typecall(void);

A68_VOID  NJNAELA_ctypecall(void);

A68_VOID  UJNAELA_fnparamcall(void);

A68_VOID  BKNAELA_exttypes(void);

A68_VOID  JKNAELA_extattrs(void);

A68_VOID  RKNAELA_extints(void);

A68_VOID  ALNAELA_extctypes(void);

A68_VOID  LLNAELA_extfns(void);

A68_VOID  RLNAELA_fnstartp(void);

A68_VOID  SLNAELA_fnendp(void);

A68_VOID  XLNAELA_fndecl(void);

A68_VOID  ZLNAELA_usagep(void);

A68_VOID  BMNAELA_fnspecinput(void);

A68_VOID  DMNAELA_fnspecoutput(void);

A68_VOID  FMNAELA_spec1(void);

A68_VOID  GMNAELA_spec2(void);

A68_VOID  HMNAELA_spec3(void);

A68_VOID  IMNAELA_fnspec1(void);

A_STATIC A68_VOID  SMNAELA_generator(A68_BOOL  QMNAELA_anonymous, A68_446  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ANNAELA_generator(A68_BOOL  YMNAELA_anonymous, A68_353  *ReturnedValue, void *NonLocals);

A68_VOID  ONNAELA_fnspec2(void);

A68_VOID  QNNAELA_macspecp(void);

A68_VOID  WNNAELA_arith(void);

A68_VOID  ZNNAELA_biop1(void);

A_STATIC A68_VOID  CONAELA_generator(A68_BOOL  BONAELA_anonymous, A68_317  *ReturnedValue);

A68_VOID  HONAELA_biop(void);

A68_VOID  LONAELA_alien(void);

A68_VOID  PONAELA_idelay(void);

A68_VOID  YONAELA_adelay(void);

A68_VOID  IPNAELA_sample(void);

A68_VOID  QPNAELA_faster(void);

A68_VOID  RPNAELA_slower(void);

A68_VOID  SPNAELA_timescale(void);

A68_VOID  DQNAELA_ramp(void);

A68_VOID  JQNAELA_reformpr(void);

A68_VOID  QQNAELA_imported(void);

A68_VOID  SQNAELA_unit(void);

A68_VOID  VQNAELA_vvarmultp(void);

A68_VOID  ARNAELA_vconst(void);

A68_VOID  FRNAELA_vconc(void);

A68_VOID  MRNAELA_vprim(void);

A68_VOID  SRNAELA_vprimi(void);

A68_VOID  YRNAELA_vprimc(void);

A68_VOID  DSNAELA_vname(void);

A68_VOID  JSNAELA_vtrim(void);

A68_VOID  QSNAELA_vindex(void);

A68_VOID  VSNAELA_vtermindex(void);

A68_VOID  CTNAELA_vcallm(void);

A68_VOID  HTNAELA_vcalld(void);

A68_VOID  NTNAELA_vunn(void);

A68_VOID  STNAELA_vsharp(void);

A68_VOID  XTNAELA_vrow(void);

A68_VOID  CUNAELA_vcasestart(void);

A68_VOID  FUNAELA_vcase(void);

A68_VOID  OUNAELA_vquery(void);

A68_VOID  TUNAELA_vcoll(void);

A68_VOID  CVNAELA_vfip(void);

A68_VOID  IVNAELA_vseqstart(void);

A68_VOID  NVNAELA_vseqp(void);

A68_VOID  SVNAELA_vparstart(void);

A68_VOID  XVNAELA_vparp(void);

A68_VOID  CWNAELA_vdynstart(void);

A68_VOID  FWNAELA_vdynindexp(void);

A68_VOID  LWNAELA_vreplace(void);

A68_VOID  TWNAELA_vbracket(void);

A68_VOID  XWNAELA_vnull(void);

A68_VOID  BXNAELA_vvoid(void);

A68_VOID  FXNAELA_vstring(void);

A68_VOID  KXNAELA_vprimch(void);

A68_VOID  SXNAELA_vprimst(void);

A68_VOID  AYNAELA_addattr(void);

A68_VOID  LYNAELA_vnormal(void);

A68_VOID  OYNAELA_velsep(void);

A68_VOID  RYNAELA_velseof(void);

A68_VOID  UYNAELA_vnoelse(void);

A68_VOID  XYNAELA_vcheck(void);

A68_VOID  ZYNAELA_vcaserep(void);

A68_VOID  GZNAELA_unitcheck(void);

A68_VOID  RZNAELA_seqnullp(void);

A68_VOID  TZNAELA_seqvoidstart(void);

A68_VOID  AAOAELA_seqvoid(void);

A68_VOID  IAOAELA_seqlet(void);

A68_VOID  NAOAELA_seqvar(void);

A68_VOID  SAOAELA_seqper(void);

A68_VOID  WAOAELA_seqassignval1(void);

A68_VOID  DBOAELA_seqassignval2(void);

A68_VOID  IBOAELA_seqcasestart(void);

A68_VOID  NBOAELA_seqcase(void);

A68_VOID  WBOAELA_seqvarmult(void);

A68_VOID  BCOAELA_seqrow(void);

A68_VOID  GCOAELA_seqdecl(void);

A68_VOID  ICOAELA_attrdecl(void);

A68_VOID  RCOAELA_intdecl(void);

A68_VOID  BDOAELA_typedecl(void);

A68_VOID  KDOAELA_constdecl(void);

A68_VOID  TDOAELA_seqrepstep(void);

A68_VOID  AEOAELA_seqif(void);

A68_VOID  EEOAELA_seqfip(void);

A68_VOID  KEOAELA_seqpt(void);

A68_VOID  PEOAELA_seqptflt(void);

A68_VOID  UEOAELA_typenotprim(void);

A68_VOID  XEOAELA_multint(void);

A_STATIC A68_VOID  CFOAELA_makerow(A68_249 * Makeints, A68_253  Type, A68_253  *ReturnedValue);

A68_VOID  JFOAELA_bmake1(void);

A68_VOID  QFOAELA_bmake(void);

A68_VOID  XFOAELA_bfor(void);

A68_VOID  YFOAELA_bjoin(void);

A68_VOID  DGOAELA_bjoins(void);

A68_VOID  NGOAELA_bjoins1(void);

A68_VOID  RGOAELA_pardecl(void);

A68_VOID  TGOAELA_biddec2(void);

A68_VOID  XGOAELA_pt(void);

A68_VOID  CHOAELA_ptflt(void);

A68_VOID  HHOAELA_bvar1(void);

A68_VOID  KHOAELA_strmessage(void);

A68_VOID  OHOAELA_printint(void);

A68_VOID  THOAELA_ktypein(void);

A_STATIC A68_VOID  VHOAELA_generator(A68_BOOL  UHOAELA_anonymous, A68_357  *ReturnedValue);

A_STATIC A68_VOID  AIOAELA_generator(A68_BOOL  ZHOAELA_anonymous, A68_356  *ReturnedValue);

A_STATIC A68_VOID  FIOAELA_generator(A68_BOOL  EIOAELA_anonymous, A68_355  *ReturnedValue);

A68_VOID  TIOAELA_ktypep(void);

A68_VOID  YIOAELA_kintp(void);

A68_VOID  EJOAELA_kintin(void);

A_STATIC A68_VOID  GJOAELA_generator(A68_BOOL  FJOAELA_anonymous, A68_356  *ReturnedValue);

A_STATIC A68_VOID  LJOAELA_generator(A68_BOOL  KJOAELA_anonymous, A68_355  *ReturnedValue);

A68_VOID  XJOAELA_kconstin(void);

A_STATIC A68_VOID  ZJOAELA_generator(A68_BOOL  YJOAELA_anonymous, A68_358  *ReturnedValue);

A_STATIC A68_VOID  EKOAELA_generator(A68_BOOL  DKOAELA_anonymous, A68_357  *ReturnedValue);

A_STATIC A68_VOID  JKOAELA_generator(A68_BOOL  IKOAELA_anonymous, A68_356  *ReturnedValue);

A_STATIC A68_VOID  OKOAELA_generator(A68_BOOL  NKOAELA_anonymous, A68_355  *ReturnedValue);

A68_VOID  ALOAELA_kconstp(void);

A68_VOID  FLOAELA_kattrin(void);

A_STATIC A68_VOID  HLOAELA_generator(A68_BOOL  GLOAELA_anonymous, A68_355  *ReturnedValue);

A68_VOID  SLOAELA_kattrp(void);

A68_VOID  VLOAELA_kfnenv(void);

A_STATIC A68_VOID  XLOAELA_generator(A68_BOOL  WLOAELA_anonymous, A68_358  *ReturnedValue);

A_STATIC A68_VOID  CMOAELA_generator(A68_BOOL  BMOAELA_anonymous, A68_357  *ReturnedValue);

A_STATIC A68_VOID  HMOAELA_generator(A68_BOOL  GMOAELA_anonymous, A68_356  *ReturnedValue);

A_STATIC A68_VOID  MMOAELA_generator(A68_BOOL  LMOAELA_anonymous, A68_355  *ReturnedValue);

A68_VOID  QMOAELA_kfnin(void);

A68_VOID  ANOAELA_macin(void);

A_STATIC A68_VOID  CNOAELA_generator(A68_BOOL  BNOAELA_anonymous, A68_352  *ReturnedValue);

A68_VOID  HNOAELA_macend(void);

A68_VOID  INOAELA_kinds(void);

A_STATIC A68_VOID  KNOAELA_generator(A68_BOOL  JNOAELA_anonymous, A68_359  *ReturnedValue);

A_STATIC A68_VOID  PNOAELA_generator(A68_BOOL  ONOAELA_anonymous, A68_431  *ReturnedValue);

A68_VOID  TNOAELA_checkloop(void);

A68_VOID  EOOAELA_endp(void);

A68_VOID  IOOAELA_indsp(void);

A68_VOID  OOOAELA_fncallp(void);

A68_VOID  ZOOAELA_assemble_start(A68_INT  No, A68_INT  Closno, A68_BOOL  Ex, A68_203 * Specbuf, A68_97  Pflt);

A_STATIC A68_VOID  CPOAELA_generator(A68_BOOL  APOAELA_anonymous, A68_431  *ReturnedValue, void *NonLocals);

A68_VOID  LPOAELA_assemble_body(A68_203 * Bodybuffer);

A_STATIC A68_VOID  RRMAELA_generator(A68_BOOL  PRMAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((SRMAELA_generator *)NonLocals)->x)
{ 
A68_32  TRMAELA;  /* clause result */
A68_32  URMAELA;  /* OPERATORS - dynamic generator */
{ 
URMAELA.upb = (*NL(ORMAELA_count)) ;
( PRMAELA_anonymous? A_VLOC(A68_INT ,URMAELA): A_VHEAP(A68_INT ,URMAELA) );
TRMAELA = URMAELA;
} 
*ReturnedValue = (TRMAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AGNAELA_generator(A68_BOOL  ZFNAELA_anonymous, A68_267  *ReturnedValue)
{ 
A68_267  BGNAELA;  /* clause result */
A68_267  CGNAELA;  /* OPERATORS - dynamic generator */
{ 
CGNAELA.upb = NTMAELA_newcount ;
( ZFNAELA_anonymous? A_VLOC(A68_264 ,CGNAELA): A_VHEAP(A68_264 ,CGNAELA) );
BGNAELA = CGNAELA;
} 
*ReturnedValue = (BGNAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RGNAELA_generator(A68_BOOL  QGNAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SGNAELA;  /* clause result */
A68_VC  TGNAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 725: */
TGNAELA.upb = ROMAELA_integer ;
( QGNAELA_anonymous? A_VLOC(A68_CHAR ,TGNAELA): A_VHEAP(A68_CHAR ,TGNAELA) );
SGNAELA = TGNAELA;
} 
*ReturnedValue = (SGNAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KINAELA_generator(A68_BOOL  IINAELA_anonymous, A68_317  *ReturnedValue, void *NonLocals)
#define NL(x) (((LINAELA_generator *)NonLocals)->x)
{ 
A68_317  MINAELA;  /* clause result */
A68_317  NINAELA;  /* OPERATORS - dynamic generator */
{ 
NINAELA.upb = ROMAELA_integer ;
( IINAELA_anonymous? A_VLOC(A68_318 ,NINAELA): A_VHEAP(A68_318 ,NINAELA) );
MINAELA = NINAELA;
} 
*ReturnedValue = (MINAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SMNAELA_generator(A68_BOOL  QMNAELA_anonymous, A68_446  *ReturnedValue, void *NonLocals)
#define NL(x) (((TMNAELA_generator *)NonLocals)->x)
{ 
A68_446  UMNAELA;  /* clause result */
A68_446  VMNAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 914: */
VMNAELA.upb = (*(&(NL(PMNAELA_inds)->Stack))) ;
( QMNAELA_anonymous? A_VLOC(A68_275 ,VMNAELA): A_VHEAP(A68_275 ,VMNAELA) );
UMNAELA = VMNAELA;
} 
*ReturnedValue = (UMNAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ANNAELA_generator(A68_BOOL  YMNAELA_anonymous, A68_353  *ReturnedValue, void *NonLocals)
#define NL(x) (((BNNAELA_generator *)NonLocals)->x)
{ 
A68_353  CNNAELA;  /* clause result */
A68_353  DNNAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 920: */
DNNAELA.upb = (*(&(NL(PMNAELA_inds)->Num_names))) ;
( YMNAELA_anonymous? A_VLOC(A68_350 ,DNNAELA): A_VHEAP(A68_350 ,DNNAELA) );
CNNAELA = DNNAELA;
} 
*ReturnedValue = (CNNAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CONAELA_generator(A68_BOOL  BONAELA_anonymous, A68_317  *ReturnedValue)
{ 
A68_317  DONAELA;  /* clause result */
A68_317  EONAELA;  /* OPERATORS - dynamic generator */
{ 
EONAELA.upb = ROMAELA_integer ;
( BONAELA_anonymous? A_VLOC(A68_318 ,EONAELA): A_VHEAP(A68_318 ,EONAELA) );
DONAELA = EONAELA;
} 
*ReturnedValue = (DONAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VHOAELA_generator(A68_BOOL  UHOAELA_anonymous, A68_357  *ReturnedValue)
{ 
A68_357  WHOAELA;  /* clause result */
A68_357  XHOAELA;  /* OPERATORS - dynamic generator */
{ 
XHOAELA.upb = ROMAELA_integer ;
( UHOAELA_anonymous? A_VLOC(A68_268 *,XHOAELA): A_VHEAP(A68_268 *,XHOAELA) );
WHOAELA = XHOAELA;
} 
*ReturnedValue = (WHOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AIOAELA_generator(A68_BOOL  ZHOAELA_anonymous, A68_356  *ReturnedValue)
{ 
A68_356  BIOAELA;  /* clause result */
A68_356  CIOAELA;  /* OPERATORS - dynamic generator */
{ 
CIOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( ZHOAELA_anonymous? A_VLOC(A68_250 *,CIOAELA): A_VHEAP(A68_250 *,CIOAELA) );
BIOAELA = CIOAELA;
} 
*ReturnedValue = (BIOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FIOAELA_generator(A68_BOOL  EIOAELA_anonymous, A68_355  *ReturnedValue)
{ 
A68_355  GIOAELA;  /* clause result */
A68_355  HIOAELA;  /* OPERATORS - dynamic generator */
{ 
HIOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( EIOAELA_anonymous? A_VLOC(A68_234 *,HIOAELA): A_VHEAP(A68_234 *,HIOAELA) );
GIOAELA = HIOAELA;
} 
*ReturnedValue = (GIOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GJOAELA_generator(A68_BOOL  FJOAELA_anonymous, A68_356  *ReturnedValue)
{ 
A68_356  HJOAELA;  /* clause result */
A68_356  IJOAELA;  /* OPERATORS - dynamic generator */
{ 
IJOAELA.upb = ROMAELA_integer ;
( FJOAELA_anonymous? A_VLOC(A68_250 *,IJOAELA): A_VHEAP(A68_250 *,IJOAELA) );
HJOAELA = IJOAELA;
} 
*ReturnedValue = (HJOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LJOAELA_generator(A68_BOOL  KJOAELA_anonymous, A68_355  *ReturnedValue)
{ 
A68_355  MJOAELA;  /* clause result */
A68_355  NJOAELA;  /* OPERATORS - dynamic generator */
{ 
NJOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( KJOAELA_anonymous? A_VLOC(A68_234 *,NJOAELA): A_VHEAP(A68_234 *,NJOAELA) );
MJOAELA = NJOAELA;
} 
*ReturnedValue = (MJOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJOAELA_generator(A68_BOOL  YJOAELA_anonymous, A68_358  *ReturnedValue)
{ 
A68_358  AKOAELA;  /* clause result */
A68_358  BKOAELA;  /* OPERATORS - dynamic generator */
{ 
BKOAELA.upb = ROMAELA_integer ;
( YJOAELA_anonymous? A_VLOC(A68_274 *,BKOAELA): A_VHEAP(A68_274 *,BKOAELA) );
AKOAELA = BKOAELA;
} 
*ReturnedValue = (AKOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EKOAELA_generator(A68_BOOL  DKOAELA_anonymous, A68_357  *ReturnedValue)
{ 
A68_357  FKOAELA;  /* clause result */
A68_357  GKOAELA;  /* OPERATORS - dynamic generator */
{ 
GKOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( DKOAELA_anonymous? A_VLOC(A68_268 *,GKOAELA): A_VHEAP(A68_268 *,GKOAELA) );
FKOAELA = GKOAELA;
} 
*ReturnedValue = (FKOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JKOAELA_generator(A68_BOOL  IKOAELA_anonymous, A68_356  *ReturnedValue)
{ 
A68_356  KKOAELA;  /* clause result */
A68_356  LKOAELA;  /* OPERATORS - dynamic generator */
{ 
LKOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( IKOAELA_anonymous? A_VLOC(A68_250 *,LKOAELA): A_VHEAP(A68_250 *,LKOAELA) );
KKOAELA = LKOAELA;
} 
*ReturnedValue = (KKOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OKOAELA_generator(A68_BOOL  NKOAELA_anonymous, A68_355  *ReturnedValue)
{ 
A68_355  PKOAELA;  /* clause result */
A68_355  QKOAELA;  /* OPERATORS - dynamic generator */
{ 
QKOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( NKOAELA_anonymous? A_VLOC(A68_234 *,QKOAELA): A_VHEAP(A68_234 *,QKOAELA) );
PKOAELA = QKOAELA;
} 
*ReturnedValue = (PKOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HLOAELA_generator(A68_BOOL  GLOAELA_anonymous, A68_355  *ReturnedValue)
{ 
A68_355  ILOAELA;  /* clause result */
A68_355  JLOAELA;  /* OPERATORS - dynamic generator */
{ 
JLOAELA.upb = ROMAELA_integer ;
( GLOAELA_anonymous? A_VLOC(A68_234 *,JLOAELA): A_VHEAP(A68_234 *,JLOAELA) );
ILOAELA = JLOAELA;
} 
*ReturnedValue = (ILOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XLOAELA_generator(A68_BOOL  WLOAELA_anonymous, A68_358  *ReturnedValue)
{ 
A68_358  YLOAELA;  /* clause result */
A68_358  ZLOAELA;  /* OPERATORS - dynamic generator */
{ 
ZLOAELA.upb = ROMAELA_integer ;
( WLOAELA_anonymous? A_VLOC(A68_274 *,ZLOAELA): A_VHEAP(A68_274 *,ZLOAELA) );
YLOAELA = ZLOAELA;
} 
*ReturnedValue = (YLOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CMOAELA_generator(A68_BOOL  BMOAELA_anonymous, A68_357  *ReturnedValue)
{ 
A68_357  DMOAELA;  /* clause result */
A68_357  EMOAELA;  /* OPERATORS - dynamic generator */
{ 
EMOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( BMOAELA_anonymous? A_VLOC(A68_268 *,EMOAELA): A_VHEAP(A68_268 *,EMOAELA) );
DMOAELA = EMOAELA;
} 
*ReturnedValue = (DMOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HMOAELA_generator(A68_BOOL  GMOAELA_anonymous, A68_356  *ReturnedValue)
{ 
A68_356  IMOAELA;  /* clause result */
A68_356  JMOAELA;  /* OPERATORS - dynamic generator */
{ 
JMOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( GMOAELA_anonymous? A_VLOC(A68_250 *,JMOAELA): A_VHEAP(A68_250 *,JMOAELA) );
IMOAELA = JMOAELA;
} 
*ReturnedValue = (IMOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MMOAELA_generator(A68_BOOL  LMOAELA_anonymous, A68_355  *ReturnedValue)
{ 
A68_355  NMOAELA;  /* clause result */
A68_355  OMOAELA;  /* OPERATORS - dynamic generator */
{ 
OMOAELA.upb = (*(&(MPMAELA_instack->In))) ;
( LMOAELA_anonymous? A_VLOC(A68_234 *,OMOAELA): A_VHEAP(A68_234 *,OMOAELA) );
NMOAELA = OMOAELA;
} 
*ReturnedValue = (NMOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CNOAELA_generator(A68_BOOL  BNOAELA_anonymous, A68_352  *ReturnedValue)
{ 
A68_352  DNOAELA;  /* clause result */
A68_352  ENOAELA;  /* OPERATORS - dynamic generator */
{ 
ENOAELA.upb = ROMAELA_integer ;
( BNOAELA_anonymous? A_VLOC(A68_349 ,ENOAELA): A_VHEAP(A68_349 ,ENOAELA) );
DNOAELA = ENOAELA;
} 
*ReturnedValue = (DNOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KNOAELA_generator(A68_BOOL  JNOAELA_anonymous, A68_359  *ReturnedValue)
{ 
A68_359  LNOAELA;  /* clause result */
A68_359  MNOAELA;  /* OPERATORS - dynamic generator */
{ 
MNOAELA.upb = ROMAELA_integer ;
( JNOAELA_anonymous? A_VLOC(A68_351 *,MNOAELA): A_VHEAP(A68_351 *,MNOAELA) );
LNOAELA = MNOAELA;
} 
*ReturnedValue = (LNOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PNOAELA_generator(A68_BOOL  ONOAELA_anonymous, A68_431  *ReturnedValue)
{ 
A68_431  QNOAELA;  /* clause result */
A68_431  RNOAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 1616: */
RNOAELA.upb = ROMAELA_integer ;
( ONOAELA_anonymous? A_VLOC(A68_430 *,RNOAELA): A_VHEAP(A68_430 *,RNOAELA) );
QNOAELA = RNOAELA;
} 
*ReturnedValue = (QNOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CPOAELA_generator(A68_BOOL  APOAELA_anonymous, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((DPOAELA_generator *)NonLocals)->x)
{ 
A68_431  EPOAELA;  /* clause result */
A68_431  FPOAELA;  /* OPERATORS - dynamic generator */
{ 
FPOAELA.upb = 0 ;
( APOAELA_anonymous? A_VLOC(A68_430 *,FPOAELA): A_VHEAP(A68_430 *,FPOAELA) );
EPOAELA = FPOAELA;
} 
*ReturnedValue = (EPOAELA);
return;
} 
#undef NL

A_STATIC A68_INT  GNMAELA_giveint(A68_237  In)
{ 
A68_237  HNMAELA;  /* united object - for case conformity */
A68_238 * INMAELA_i;
A68_INT  JNMAELA;  /* clause result */
A68_239 * KNMAELA_fc;
A68_247 * LNMAELA_fn;
A_PROC_ENTRY(giveint);
 /* line 118: */
 /* line 119: */
HNMAELA = In ;
switch ( HNMAELA.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
INMAELA_i = (HNMAELA.data.mode1);
 /* line 120: */
JNMAELA = (*(&(INMAELA_i->Int)));
break;
case 2: /* REF STRUCT(INT,MODE237,MODE237)  */
KNMAELA_fc = (HNMAELA.data.mode2);
 /* line 121: */
JNMAELA = GNMAELA_giveint((*(&(KNMAELA_fc->Test))));
break;
case 10: /* REF STRUCT(INT)  */
LNMAELA_fn = (HNMAELA.data.mode10);
 /* line 122: */
 /* line 123: */
JNMAELA = 0;
break;
default: 
JNMAELA = (-1);
break;
} 
A_PROC_EXIT(giveint);
return( JNMAELA );
} 
#undef NL

A_STATIC A68_VOID  QNMAELA_uncheckedform(A68_237  A, A68_237  *ReturnedValue)
{ 
A68_237  RNMAELA;  /* united object - for case conformity */
A68_239 * SNMAELA_fc;
A68_237  TNMAELA;  /* clause result */
A68_237  UNMAELA;  /* avoid structure result */
A68_242 * VNMAELA_fdop;
A68_242  WNMAELA;  /* collateral clause result */
A68_237  XNMAELA;  /* avoid structure result */
A68_237  YNMAELA;  /* avoid structure result */
A68_242 * ZNMAELA;  /* YIELD */
A68_237  AOMAELA;  /* OPERATORS - mode -> union mode */
A68_243 * BOMAELA_fmop;
A68_243  COMAELA;  /* collateral clause result */
A68_237  DOMAELA;  /* avoid structure result */
A68_243 * EOMAELA;  /* YIELD */
A68_237  FOMAELA;  /* OPERATORS - mode -> union mode */
A68_244 * GOMAELA_fcond;
A68_244  HOMAELA;  /* collateral clause result */
A68_237  IOMAELA;  /* avoid structure result */
A68_237  JOMAELA;  /* avoid structure result */
A68_237  KOMAELA;  /* avoid structure result */
A68_244 * LOMAELA;  /* YIELD */
A68_237  MOMAELA;  /* OPERATORS - mode -> union mode */
A68_245 * NOMAELA_fb;
A68_237  OOMAELA;  /* avoid structure result */
A68_245 * POMAELA;  /* YIELD */
A68_237  QOMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uncheckedform);
 /* line 133: */
 /* line 134: */
{ 
 /* line 135: */
RNMAELA = A ;
switch ( RNMAELA.mode )
{ 
case 2: /* REF STRUCT(INT,MODE237,MODE237)  */
SNMAELA_fc = (RNMAELA.data.mode2);
 /* line 136: */
QNMAELA_uncheckedform( (*(&(SNMAELA_fc->Test))), &UNMAELA );
TNMAELA = UNMAELA;
break;
case 5: /* REF STRUCT(MODE237,INT,MODE237)  */
VNMAELA_fdop = (RNMAELA.data.mode5);
 /* line 137: */
QNMAELA_uncheckedform( (*(&(VNMAELA_fdop->Left))), &XNMAELA );
WNMAELA.Left = XNMAELA;
 /* line 138: */
WNMAELA.Sort = (*(&(VNMAELA_fdop->Sort)));
QNMAELA_uncheckedform( (*(&(VNMAELA_fdop->Right))), &YNMAELA );
WNMAELA.Right = YNMAELA;
 /* line 139: */
ZNMAELA = A_HEAP(A68_242 ) ;
(*ZNMAELA) = WNMAELA ;
TNMAELA = A_UNITE(AOMAELA,mode5,5,ZNMAELA);
break;
case 6: /* REF STRUCT(INT,MODE237)  */
BOMAELA_fmop = (RNMAELA.data.mode6);
 /* line 140: */
COMAELA.Sort = (*(&(BOMAELA_fmop->Sort)));
QNMAELA_uncheckedform( (*(&(BOMAELA_fmop->Right))), &DOMAELA );
COMAELA.Right = DOMAELA;
 /* line 141: */
EOMAELA = A_HEAP(A68_243 ) ;
(*EOMAELA) = COMAELA ;
TNMAELA = A_UNITE(FOMAELA,mode6,6,EOMAELA);
break;
case 7: /* REF STRUCT(MODE237,MODE237,MODE237)  */
GOMAELA_fcond = (RNMAELA.data.mode7);
 /* line 142: */
QNMAELA_uncheckedform( (*(&(GOMAELA_fcond->Cond))), &IOMAELA );
HOMAELA.Cond = IOMAELA;
 /* line 143: */
QNMAELA_uncheckedform( (*(&(GOMAELA_fcond->True))), &JOMAELA );
HOMAELA.True = JOMAELA;
QNMAELA_uncheckedform( (*(&(GOMAELA_fcond->False))), &KOMAELA );
HOMAELA.False = KOMAELA;
 /* line 144: */
LOMAELA = A_HEAP(A68_244 ) ;
(*LOMAELA) = HOMAELA ;
TNMAELA = A_UNITE(MOMAELA,mode7,7,LOMAELA);
break;
case 8: /* REF STRUCT(MODE237)  */
NOMAELA_fb = (RNMAELA.data.mode8);
 /* line 145: */
 /* line 146: */
 /* line 147: */
QNMAELA_uncheckedform( (*(&(NOMAELA_fb->Formula))), &OOMAELA );
POMAELA = A_HEAP(A68_245 ) ;
(*POMAELA) = (*YEAATRN_makefbracket(OOMAELA)) ;
TNMAELA = A_UNITE(QOMAELA,mode8,8,POMAELA);
break;
default: 
 /* line 148: */
TNMAELA = A;
break;
} 
} 
A_PROC_EXIT(uncheckedform);
*ReturnedValue = (TNMAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BQMAELA_unstackin(void)
{ 
A_PROC_ENTRY(unstackin);
 /* line 198: */
if ( (MPMAELA_instack!=SMMAELA_nilinstack) )
{ 
 /* line 199: */
MPMAELA_instack = (*(&(MPMAELA_instack->Rest)));
} 
A_PROC_EXIT(unstackin);
return;
} 
#undef NL

A_STATIC A68_VOID  CQMAELA_unstackinid(void)
{ 
A_PROC_ENTRY(unstackinid);
 /* line 203: */
if ( (NPMAELA_inidstack!=TMMAELA_nilinidstack) )
{ 
 /* line 204: */
NPMAELA_inidstack = (*(&(NPMAELA_inidstack->Rest)));
} 
A_PROC_EXIT(unstackinid);
return;
} 
#undef NL

A_STATIC A68_VOID  DQMAELA_unstackformula(void)
{ 
A_PROC_ENTRY(unstackformula);
 /* line 208: */
if ( (QPMAELA_formulastack!=VMMAELA_nilformulastack) )
{ 
 /* line 209: */
QPMAELA_formulastack = (*(&(QPMAELA_formulastack->Rest)));
} 
A_PROC_EXIT(unstackformula);
return;
} 
#undef NL

A_STATIC A68_VOID  EQMAELA_unstacktype(void)
{ 
A_PROC_ENTRY(unstacktype);
 /* line 213: */
if ( (OPMAELA_typestack!=UMMAELA_niltypestack) )
{ 
 /* line 214: */
OPMAELA_typestack = (*(&(OPMAELA_typestack->Rest)));
} 
A_PROC_EXIT(unstacktype);
return;
} 
#undef NL

A_STATIC A68_VOID  FQMAELA_unstackconst(void)
{ 
A_PROC_ENTRY(unstackconst);
 /* line 218: */
if ( (RPMAELA_conststack!=WMMAELA_nilconststack) )
{ 
 /* line 219: */
RPMAELA_conststack = (*(&(RPMAELA_conststack->Rest)));
} 
A_PROC_EXIT(unstackconst);
return;
} 
#undef NL

A_STATIC A68_VOID  GQMAELA_unstackinst(void)
{ 
A_PROC_ENTRY(unstackinst);
 /* line 224: */
if ( (PPMAELA_inststack!=BNMAELA_nilinststack) )
{ 
 /* line 225: */
PPMAELA_inststack = (*(&(PPMAELA_inststack->Rest)));
} 
A_PROC_EXIT(unstackinst);
return;
} 
#undef NL

A_STATIC A68_VOID  HQMAELA_unstackattr(void)
{ 
A_PROC_ENTRY(unstackattr);
 /* line 229: */
if ( (WPMAELA_attrstack!=DBAATRN_nilattrstr) )
{ 
 /* line 230: */
WPMAELA_attrstack = (*(&(WPMAELA_attrstack->Rest)));
} 
A_PROC_EXIT(unstackattr);
return;
} 
#undef NL

A_STATIC A68_VOID  JQMAELA_userflt(A68_VC  Mess)
{ 
A68_46  KQMAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(userflt);
A_CALLPROC(ZOMAELA_flt,(WHAAOSI_user, A_HVEC(KQMAELA,Mess,A68_VC )),(WHAAOSI_user, A_HVEC(KQMAELA,Mess,A68_VC ),(ZOMAELA_flt).nonlocals));
A_PROC_EXIT(userflt);
return;
} 
#undef NL

A_STATIC A68_VOID  MQMAELA_sysflt(A68_VC  Mess)
{ 
A68_46  NQMAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysflt);
A_CALLPROC(ZOMAELA_flt,(SHAAOSI_system, A_HVEC(NQMAELA,Mess,A68_VC )),(SHAAOSI_system, A_HVEC(NQMAELA,Mess,A68_VC ),(ZOMAELA_flt).nonlocals));
A_PROC_EXIT(sysflt);
return;
} 
#undef NL

A_STATIC A68_INT  YQMAELA_find_primno(A68_INT  Typeno, A68_CHAR  Char)
{ 
A68_268 * ZQMAELA_tdec;
A68_INT  ARMAELA_primno;
A68_266  BRMAELA;  /* united object - for case conformity */
A68_263 * CRMAELA_nc;
A68_BOOL  DRMAELA_found;
A68_VC  ERMAELA_chars;
A68_INT  FRMAELA_i;
A68_INT  GRMAELA;  /* to part of loop */
A68_INT  JRMAELA;  /* clause result */
A_PROC_ENTRY(find_primno);
 /* line 250: */
 /* line 251: */
{ 
ZQMAELA_tdec = (*(&A_VINDEX(OQMAELA_types,Typeno)));
 /* line 252: */
ARMAELA_primno = 0;
 /* line 253: */
 /* line 254: */
BRMAELA = (*(&(ZQMAELA_tdec->Body))) ;
switch ( BRMAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
CRMAELA_nc = (BRMAELA.data.mode4);
{ 
DRMAELA_found = A68_FALSE;
 /* line 255: */
ERMAELA_chars = (*(&(CRMAELA_nc->Chars)));
 /* line 256: */
GRMAELA = ERMAELA_chars.upb;
for ( FRMAELA_i = 1;
FRMAELA_i <= GRMAELA;
FRMAELA_i += 1 )
{ 
 /* line 257: */
if ( !(!DRMAELA_found) ) break;
 /* line 258: */
if ( (Char==(*(&A_VINDEX(ERMAELA_chars,FRMAELA_i)))) )
{ 
DRMAELA_found = A68_TRUE;
 /* line 259: */
 /* line 260: */
 /* line 261: */
ARMAELA_primno = FRMAELA_i;
} 
}
 /* line 262: */
 /* line 263: */
} 
break;
default: 
 /* line 264: */
MQMAELA_sysflt(IRMAELA);
break;
} 
 /* line 265: */
 /* line 266: */
JRMAELA = ARMAELA_primno;
} 
A_PROC_EXIT(find_primno);
return( JRMAELA );
} 
#undef NL

A_STATIC A68_VOID  MRMAELA_ids_to_rvi(A68_INT  Typeno, A68_226 * Strings, A68_32  *ReturnedValue)
{ 
A68_226 * NRMAELA_ids;
A68_INT  ORMAELA_count;
A68_33  QRMAELA_generator;   /* proc value of non-global proc */
A68_32  WRMAELA;  /* avoid structure result */
A68_32  VRMAELA_rvi;
A68_INT  XRMAELA_pos;
A68_VC  YRMAELA_id;
A68_INT  ZRMAELA_i;
A68_INT  ASMAELA;  /* to part of loop */
A68_INT  BSMAELA;  /* YIELD */
A68_INT * CSMAELA;  /* YIELD */
A68_32  DSMAELA;  /* clause result */
A_PROC_ENTRY(ids_to_rvi);
 /* line 269: */
 /* line 270: */
{ 
NRMAELA_ids = Strings;
 /* line 271: */
ORMAELA_count = 0;
 /* line 272: */
for ( ;; )
{ 
 /* line 273: */
if ( !((NRMAELA_ids!=LAAATRN_nilids)) ) break;
ORMAELA_count+=(*(&(NRMAELA_ids->Id))).upb;
 /* line 274: */
 /* line 275: */
NRMAELA_ids = (*(&(NRMAELA_ids->Rest)));
}
 /* line 276: */
A_CLOSURE( QRMAELA_generator, RRMAELA_generator, SRMAELA_generator );
(( SRMAELA_generator * ) ( QRMAELA_generator.nonlocals )) -> ORMAELA_count = (&ORMAELA_count);
A_CALLPROC(QRMAELA_generator,(A68_FALSE, &WRMAELA),(A68_FALSE, &WRMAELA,(QRMAELA_generator).nonlocals));
VRMAELA_rvi = WRMAELA;
 /* line 277: */
 /* line 278: */
if ( (ORMAELA_count>0) )
{ 
NRMAELA_ids = Strings;
 /* line 279: */
XRMAELA_pos = 0;
 /* line 280: */
for ( ;; )
{ 
 /* line 281: */
if ( !((NRMAELA_ids!=LAAATRN_nilids)) ) break;
YRMAELA_id = (*(&(NRMAELA_ids->Id)));
 /* line 282: */
ASMAELA = YRMAELA_id.upb;
for ( ZRMAELA_i = 1;
ZRMAELA_i <= ASMAELA;
ZRMAELA_i += 1 )
{ 
BSMAELA = (XRMAELA_pos+ZRMAELA_i) ;
CSMAELA = (&A_VINDEX(VRMAELA_rvi,BSMAELA)) ;
(*CSMAELA) = YQMAELA_find_primno(Typeno, (*(&A_VINDEX(YRMAELA_id,ZRMAELA_i))));
}
 /* line 283: */
XRMAELA_pos+=YRMAELA_id.upb;
 /* line 284: */
 /* line 285: */
NRMAELA_ids = (*(&(NRMAELA_ids->Rest)));
}
 /* line 286: */
} 
 /* line 287: */
 /* line 288: */
DSMAELA = VRMAELA_rvi;
} 
A_PROC_EXIT(ids_to_rvi);
*ReturnedValue = (DSMAELA);
return;
} 
#undef NL

A68_VOID  FSMAELA_print(A68_85  Line)
{ 
A_PROC_ENTRY(print);
GFBAOSL_put(KEAAOST_screen, Line);
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  ISMAELA_fault(A68_INT  I, A68_INT  T1)
{ 
A68_440  JSMAELA;  /* collateral clause result */
A68_52  KSMAELA;  /* OPERATORS - mode -> union mode */
A68_56  LSMAELA;  /* procedure value */
A68_52  OSMAELA;  /* OPERATORS - mode -> union mode */
A68_VC  PSMAELA;  /* YIELD */
A68_52  QSMAELA;  /* OPERATORS - mode -> union mode */
A68_52  TSMAELA;  /* OPERATORS - mode -> union mode */
A68_VC  USMAELA;  /* YIELD */
A68_52  VSMAELA;  /* OPERATORS - mode -> union mode */
A68_52  YSMAELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZSMAELA;  /* YIELD */
A68_85  ATMAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fault);
 /* line 293: */
{ 
LSMAELA.fn.fn_global = LRAAOSL_newline;
LSMAELA.nonlocals = A68_NIL;
JSMAELA.data[0] = A_UNITE(KSMAELA,mode12,12,LSMAELA);
PSMAELA = NSMAELA ;
JSMAELA.data[1] = A_UNITE(OSMAELA,mode7,7,PSMAELA);
JSMAELA.data[2] = A_UNITE(QSMAELA,mode1,1,I);
USMAELA = SSMAELA ;
JSMAELA.data[3] = A_UNITE(TSMAELA,mode7,7,USMAELA);
JSMAELA.data[4] = A_UNITE(VSMAELA,mode1,1,T1);
ZSMAELA = XSMAELA ;
JSMAELA.data[5] = A_UNITE(YSMAELA,mode7,7,ZSMAELA);
FSMAELA_print(A_HISVEC(ATMAELA,JSMAELA,6,A68_52 ));
 /* line 294: */
 /* line 295: */
ONMAELA_exit = A68_TRUE;
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  CTMAELA_syfaultp(A68_VC  Message)
{ 
A68_441  DTMAELA;  /* collateral clause result */
A68_52  ETMAELA;  /* OPERATORS - mode -> union mode */
A68_56  FTMAELA;  /* procedure value */
A68_52  GTMAELA;  /* OPERATORS - mode -> union mode */
A68_52  HTMAELA;  /* OPERATORS - mode -> union mode */
A68_56  ITMAELA;  /* procedure value */
A68_85  JTMAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(syfaultp);
 /* line 298: */
FTMAELA.fn.fn_global = LRAAOSL_newline;
FTMAELA.nonlocals = A68_NIL;
DTMAELA.data[0] = A_UNITE(ETMAELA,mode12,12,FTMAELA);
DTMAELA.data[1] = A_UNITE(GTMAELA,mode7,7,Message);
ITMAELA.fn.fn_global = LRAAOSL_newline;
ITMAELA.nonlocals = A68_NIL;
DTMAELA.data[2] = A_UNITE(HTMAELA,mode12,12,ITMAELA);
FSMAELA_print(A_HISVEC(JTMAELA,DTMAELA,3,A68_52 ));
A_PROC_EXIT(syfaultp);
return;
} 
#undef NL

A_STATIC A68_VOID  QUMAELA_setup_fnstrstack(void)
{ 
A68_447  RUMAELA;  /* collateral clause result */
A68_445  SUMAELA;  /* collateral clause result */
A68_442  TUMAELA;  /* collateral clause result */
A68_442 * UUMAELA;  /* YIELD */
A68_443  VUMAELA;  /* collateral clause result */
A68_443 * WUMAELA;  /* YIELD */
A68_444  XUMAELA;  /* collateral clause result */
A68_444 * YUMAELA;  /* YIELD */
A68_445 * ZUMAELA;  /* YIELD */
A68_447 * AVMAELA;  /* YIELD */
A_PROC_ENTRY(setup_fnstrstack);
 /* line 359: */
 /* line 360: */
SUMAELA.Fndec = MUMAELA_fndec;
SUMAELA.Macnum = OTMAELA_macnum;
SUMAELA.Stack = IUMAELA_stack;
SUMAELA.Stackind = JUMAELA_stackind;
 /* line 361: */
SUMAELA.Specsort = HUMAELA_specsort;
TUMAELA.Ss = TTMAELA_sequencestack;
TUMAELA.Ssr = UTMAELA_sequencestackr;
 /* line 362: */
TUMAELA.Scs = VTMAELA_seqchoicestack;
TUMAELA.Sss = WTMAELA_seqstepstack;
TUMAELA.Seq = XTMAELA_sequence;
TUMAELA.Nextseq = YTMAELA_nextsequence;
 /* line 363: */
UUMAELA = A_HEAP(A68_442 ) ;
SUMAELA.Seq = (*UUMAELA) = TUMAELA;
VUMAELA.Ss = ZTMAELA_seriesstack;
VUMAELA.Ssr = AUMAELA_seriesstackr;
VUMAELA.Series = BUMAELA_series;
VUMAELA.Nextseries = CUMAELA_nextseries;
 /* line 364: */
WUMAELA = A_HEAP(A68_443 ) ;
SUMAELA.Ser = (*WUMAELA) = VUMAELA;
XUMAELA.Ucs = EUMAELA_uchoicestack;
XUMAELA.Multassign = UPMAELA_multassign;
XUMAELA.Es = FUMAELA_elsestack;
 /* line 365: */
XUMAELA.Joins = GUMAELA_joinstack;
YUMAELA = A_HEAP(A68_444 ) ;
SUMAELA.Sta = (*YUMAELA) = XUMAELA;
 /* line 366: */
ZUMAELA = A_HEAP(A68_445 ) ;
RUMAELA.Val = (*ZUMAELA) = SUMAELA;
RUMAELA.Rest = OUMAELA_fnstrstack;
AVMAELA = A_HEAP(A68_447 ) ;
(*AVMAELA) = RUMAELA ;
OUMAELA_fnstrstack = AVMAELA;
A_PROC_EXIT(setup_fnstrstack);
return;
} 
#undef NL

A_STATIC A68_VOID  BVMAELA_reset_fnstrstack(void)
{ 
A68_445  CVMAELA_fnstr;
A_PROC_ENTRY(reset_fnstrstack);
{ 
 /* line 370: */
if ( (OUMAELA_fnstrstack!=PUMAELA_nilfnstrstack) )
{ 
CVMAELA_fnstr = (*(&(OUMAELA_fnstrstack->Val)));
OUMAELA_fnstrstack = (*(&(OUMAELA_fnstrstack->Rest)));
 /* line 371: */
MUMAELA_fndec = (*(&((&CVMAELA_fnstr)->Fndec)));
 /* line 372: */
OTMAELA_macnum = (*(&((&CVMAELA_fnstr)->Macnum)));
 /* line 373: */
IUMAELA_stack = (*(&((&CVMAELA_fnstr)->Stack)));
 /* line 374: */
JUMAELA_stackind = (*(&((&CVMAELA_fnstr)->Stackind)));
 /* line 375: */
HUMAELA_specsort = (*(&((&CVMAELA_fnstr)->Specsort)));
 /* line 376: */
TTMAELA_sequencestack = (*(&((&((&CVMAELA_fnstr)->Seq))->Ss)));
 /* line 377: */
UTMAELA_sequencestackr = (*(&((&((&CVMAELA_fnstr)->Seq))->Ssr)));
 /* line 378: */
VTMAELA_seqchoicestack = (*(&((&((&CVMAELA_fnstr)->Seq))->Scs)));
 /* line 379: */
WTMAELA_seqstepstack = (*(&((&((&CVMAELA_fnstr)->Seq))->Sss)));
 /* line 380: */
XTMAELA_sequence = (*(&((&((&CVMAELA_fnstr)->Seq))->Seq)));
 /* line 381: */
YTMAELA_nextsequence = (*(&((&((&CVMAELA_fnstr)->Seq))->Nextseq)));
 /* line 382: */
ZTMAELA_seriesstack = (*(&((&((&CVMAELA_fnstr)->Ser))->Ss)));
 /* line 383: */
AUMAELA_seriesstackr = (*(&((&((&CVMAELA_fnstr)->Ser))->Ssr)));
 /* line 384: */
BUMAELA_series = (*(&((&((&CVMAELA_fnstr)->Ser))->Series)));
 /* line 385: */
CUMAELA_nextseries = (*(&((&((&CVMAELA_fnstr)->Ser))->Nextseries)));
 /* line 386: */
EUMAELA_uchoicestack = (*(&((&((&CVMAELA_fnstr)->Sta))->Ucs)));
 /* line 387: */
UPMAELA_multassign = (*(&((&((&CVMAELA_fnstr)->Sta))->Multassign)));
 /* line 388: */
FUMAELA_elsestack = (*(&((&((&CVMAELA_fnstr)->Sta))->Es)));
 /* line 389: */
 /* line 390: */
 /* line 391: */
GUMAELA_joinstack = (*(&((&((&CVMAELA_fnstr)->Sta))->Joins)));
} 
} 
A_PROC_EXIT(reset_fnstrstack);
return;
} 
#undef NL

A_STATIC A68_VOID  DVMAELA_default(void)
{ 
A68_429  EVMAELA;  /* collateral clause result */
A68_429 * FVMAELA;  /* YIELD */
A_PROC_ENTRY(default);
{ 
HUMAELA_specsort = 0;
 /* line 395: */
OTMAELA_macnum = 0;
 /* line 396: */
TTMAELA_sequencestack = BPMAELA_nilsequencestack;
 /* line 397: */
UTMAELA_sequencestackr = CPMAELA_nilsequencestackr;
 /* line 398: */
VTMAELA_seqchoicestack = GPMAELA_nilseqchoicestack;
 /* line 399: */
WTMAELA_seqstepstack = IPMAELA_nilseqstepstack;
 /* line 400: */
XTMAELA_sequence = QAAATRN_nilsequence;
 /* line 401: */
YTMAELA_nextsequence = (&XTMAELA_sequence);
 /* line 402: */
ZTMAELA_seriesstack = DPMAELA_nilseriesstack;
 /* line 403: */
AUMAELA_seriesstackr = EPMAELA_nilseriesstackr;
 /* line 404: */
BUMAELA_series = SAAATRN_nilseries;
 /* line 405: */
CUMAELA_nextseries = (&BUMAELA_series);
 /* line 406: */
EUMAELA_uchoicestack = ZMMAELA_nilchoicestack;
 /* line 407: */
EVMAELA.Mult = A68_FALSE;
EVMAELA.Rest = HPMAELA_nilmultassign;
FVMAELA = A_HEAP(A68_429 ) ;
(*FVMAELA) = EVMAELA ;
UPMAELA_multassign = FVMAELA;
 /* line 408: */
FUMAELA_elsestack = ANMAELA_nilelsestack;
 /* line 409: */
GUMAELA_joinstack = RAAATRN_niljoins;
 /* line 410: */
JUMAELA_stackind = 0;
 /* line 411: */
VPMAELA_formulas = BBAATRN_nilformulas;
 /* line 412: */
PTMAELA_printitems = MAAATRN_nilprintitems;
 /* line 413: */
 /* line 414: */
QTMAELA_nextprintitems = (&PTMAELA_printitems);
} 
A_PROC_EXIT(default);
return;
} 
#undef NL

A_STATIC A68_VOID  HVMAELA_newseqstep(A68_324  S)
{ 
A68_323 ** IVMAELA;  /* clause result */
A68_323  JVMAELA;  /* collateral clause result */
A68_323 * KVMAELA;  /* YIELD */
A_PROC_ENTRY(newseqstep);
 /* line 418: */
 /* line 419: */
if ( ((*YTMAELA_nextsequence)==QAAATRN_nilsequence) )
{ 
 /* line 420: */
IVMAELA = YTMAELA_nextsequence;
} 
else
{ 
 /* line 421: */
 /* line 422: */
IVMAELA = (&((*YTMAELA_nextsequence)->Rest));
} 
JVMAELA.Step = S;
 /* line 423: */
JVMAELA.Rest = QAAATRN_nilsequence;
KVMAELA = A_HEAP(A68_323 ) ;
(*KVMAELA) = JVMAELA ;
(*IVMAELA) = KVMAELA ;
YTMAELA_nextsequence = IVMAELA;
A_PROC_EXIT(newseqstep);
return;
} 
#undef NL

A_STATIC A68_VOID  LVMAELA_removeseqstep(A68_324  *ReturnedValue)
{ 
A68_324  MVMAELA_ans;
A68_324  NVMAELA;  /* clause result */
A_PROC_ENTRY(removeseqstep);
{ 
MVMAELA_ans = (*(&((*YTMAELA_nextsequence)->Step)));
 /* line 427: */
(*YTMAELA_nextsequence) = QAAATRN_nilsequence;
 /* line 428: */
 /* line 429: */
NVMAELA = MVMAELA_ans;
} 
A_PROC_EXIT(removeseqstep);
*ReturnedValue = (NVMAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PVMAELA_newstep(A68_305  S)
{ 
A68_304  QVMAELA;  /* collateral clause result */
A68_304 * RVMAELA;  /* YIELD */
A_PROC_ENTRY(newstep);
 /* line 432: */
{ 
QVMAELA.Step = S;
QVMAELA.Rest = (A68_304 *)A68_NIL;
RVMAELA = A_HEAP(A68_304 ) ;
(*RVMAELA) = QVMAELA ;
(*CUMAELA_nextseries) = RVMAELA;
 /* line 433: */
 /* line 434: */
CUMAELA_nextseries = (&((*CUMAELA_nextseries)->Rest));
} 
A_PROC_EXIT(newstep);
return;
} 
#undef NL

A_STATIC A68_256 * SVMAELA_tstset(void)
{ 
A68_256 * UVMAELA_tstr;
A68_256  VVMAELA;  /* collateral clause result */
A68_256 * WVMAELA;  /* YIELD */
A68_256 * XVMAELA;  /* clause result */
A_PROC_ENTRY(tstset);
{ 
 /* line 439: */
UVMAELA_tstr = TVMAELA_niltstr;
 /* line 440: */
for ( ;; )
{ 
 /* line 441: */
if ( !(!(*(&(SPMAELA_tstrstack->B)))) ) break;
VVMAELA.Elem = (*(&(SPMAELA_tstrstack->Type)));
VVMAELA.Rest = UVMAELA_tstr;
WVMAELA = A_HEAP(A68_256 ) ;
(*WVMAELA) = VVMAELA ;
UVMAELA_tstr = WVMAELA;
 /* line 442: */
 /* line 443: */
SPMAELA_tstrstack = (*(&(SPMAELA_tstrstack->Rest)));
}
 /* line 444: */
SPMAELA_tstrstack = (*(&(SPMAELA_tstrstack->Rest)));
 /* line 445: */
 /* line 446: */
XVMAELA = UVMAELA_tstr;
} 
A_PROC_EXIT(tstset);
return( XVMAELA );
} 
#undef NL

A68_VOID  YVMAELA_reader(A68_395  *ReturnedValue)
{ 
A68_395  ZVMAELA;  /* collateral clause result */
A68_396  AWMAELA;  /* OPERATORS - mode -> union mode */
A68_395  BWMAELA;  /* clause result */
A68_VC  CWMAELA;  /* avoid structure result */
A68_395  DWMAELA;  /* collateral clause result */
A68_396  EWMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(reader);
if ( ONMAELA_exit )
{ 
ZVMAELA.Type = MNMAELA_eoflib;
 /* line 453: */
ZVMAELA.Val = A_EMPTY(AWMAELA,2);
BWMAELA = ZVMAELA;
} 
else
{ 
 /* line 454: */
if ( ((APMAELA_t1hold = PZIAELA_readiltok(VOMAELA_buffer))==YWIAELA_numb_tok) )
{ 
 /* line 455: */
SOMAELA_assinteger = ROMAELA_integer = (*(&(VOMAELA_buffer->Int)));
} 
else
{ 
 /* line 456: */
if ( (APMAELA_t1hold==AXIAELA_ident_tok) )
{ 
 /* line 457: */
A_CALLPROC(ZLAATRN_makeid,((*(&(VOMAELA_buffer->Ident))), &CWMAELA),((*(&(VOMAELA_buffer->Ident))), &CWMAELA,(ZLAATRN_makeid).nonlocals));
UOMAELA_assidentifier = TOMAELA_identifier = CWMAELA;
} 
} 
 /* line 458: */
DWMAELA.Type = APMAELA_t1hold;
 /* line 459: */
DWMAELA.Val = A_EMPTY(EWMAELA,2);
BWMAELA = DWMAELA;
} 
A_PROC_EXIT(reader);
*ReturnedValue = (BWMAELA);
return;
} 
#undef NL

A68_VOID  GWMAELA_failure(A68_397  Error)
{ 
A_PROC_ENTRY(failure);
 /* line 462: */
ISMAELA_fault((*(&(Error.Lex->Type))), (*Error.Stind));
A_PROC_EXIT(failure);
return;
} 
#undef NL

A68_VOID  IWMAELA_fail(A68_85  Line)
{ 
A_PROC_ENTRY(fail);
GFBAOSL_put(KEAAOST_screen, Line);
A_PROC_EXIT(fail);
return;
} 
#undef NL

A68_INT  JWMAELA_return(void)
{ 
A68_INT  KWMAELA;  /* clause result */
A68_INT * LWMAELA;  /* YIELD */
A_PROC_ENTRY(return);
{ 
ONMAELA_exit = A68_TRUE;
LWMAELA = A_HEAP(A68_INT ) ;
KWMAELA = (*LWMAELA) = (ONMAELA_exit);
} 
A_PROC_EXIT(return);
return( KWMAELA );
} 
#undef NL

A68_VOID  MWMAELA_idproc(void)
{ 
A68_226  NWMAELA;  /* collateral clause result */
A68_226 * OWMAELA;  /* YIELD */
A_PROC_ENTRY(idproc);
NWMAELA.Id = TOMAELA_identifier;
NWMAELA.Rest = JPMAELA_idstack;
OWMAELA = A_HEAP(A68_226 ) ;
(*OWMAELA) = NWMAELA ;
JPMAELA_idstack = OWMAELA;
A_PROC_EXIT(idproc);
return;
} 
#undef NL

A68_VOID  PWMAELA_inproc(void)
{ 
A68_410  QWMAELA;  /* collateral clause result */
A68_410 * RWMAELA;  /* YIELD */
A_PROC_ENTRY(inproc);
QWMAELA.B = A68_FALSE;
QWMAELA.In = ROMAELA_integer;
QWMAELA.Rest = MPMAELA_instack;
RWMAELA = A_HEAP(A68_410 ) ;
(*RWMAELA) = QWMAELA ;
MPMAELA_instack = RWMAELA;
A_PROC_EXIT(inproc);
return;
} 
#undef NL

A68_VOID  SWMAELA_inidproc(void)
{ 
A68_411  TWMAELA;  /* collateral clause result */
A68_411 * UWMAELA;  /* YIELD */
A_PROC_ENTRY(inidproc);
TWMAELA.B = A68_FALSE;
TWMAELA.Inid = TOMAELA_identifier;
TWMAELA.Rest = NPMAELA_inidstack;
UWMAELA = A_HEAP(A68_411 ) ;
(*UWMAELA) = TWMAELA ;
NPMAELA_inidstack = UWMAELA;
A_PROC_EXIT(inidproc);
return;
} 
#undef NL

A68_VOID  VWMAELA_typeproc(void)
{ 
A68_412  WWMAELA;  /* collateral clause result */
A68_412 * XWMAELA;  /* YIELD */
A_PROC_ENTRY(typeproc);
WWMAELA.B = A68_FALSE;
WWMAELA.Type = YPMAELA_type;
 /* line 476: */
WWMAELA.Rest = OPMAELA_typestack;
XWMAELA = A_HEAP(A68_412 ) ;
(*XWMAELA) = WWMAELA ;
OPMAELA_typestack = XWMAELA;
A_PROC_EXIT(typeproc);
return;
} 
#undef NL

A68_VOID  YWMAELA_ctypestartp(void)
{ 
A68_414  ZWMAELA;  /* collateral clause result */
A68_275  AXMAELA;  /* OPERATORS - mode -> union mode */
A68_414 * BXMAELA;  /* YIELD */
A_PROC_ENTRY(ctypestartp);
ZWMAELA.B = A68_TRUE;
ZWMAELA.Const = A_UNITE(AXMAELA,mode34,34,(&FIAATRN_unull));
ZWMAELA.Rest = RPMAELA_conststack;
BXMAELA = A_HEAP(A68_414 ) ;
(*BXMAELA) = ZWMAELA ;
RPMAELA_conststack = BXMAELA;
A_PROC_EXIT(ctypestartp);
return;
} 
#undef NL

A68_VOID  CXMAELA_ctypeproc(void)
{ 
A68_414  DXMAELA;  /* collateral clause result */
A68_414 * EXMAELA;  /* YIELD */
A_PROC_ENTRY(ctypeproc);
DXMAELA.B = A68_FALSE;
DXMAELA.Const = AQMAELA_const;
DXMAELA.Rest = RPMAELA_conststack;
EXMAELA = A_HEAP(A68_414 ) ;
(*EXMAELA) = DXMAELA ;
RPMAELA_conststack = EXMAELA;
A_PROC_EXIT(ctypeproc);
return;
} 
#undef NL

A68_VOID  FXMAELA_integerproc(void)
{ 
A68_413  GXMAELA;  /* collateral clause result */
A68_413 * HXMAELA;  /* YIELD */
A_PROC_ENTRY(integerproc);
GXMAELA.B = A68_FALSE;
GXMAELA.Formula = ZPMAELA_formula;
GXMAELA.Rest = QPMAELA_formulastack;
HXMAELA = A_HEAP(A68_413 ) ;
(*HXMAELA) = GXMAELA ;
QPMAELA_formulastack = HXMAELA;
A_PROC_EXIT(integerproc);
return;
} 
#undef NL

A68_VOID  IXMAELA_stackattr(void)
{ 
A68_231  JXMAELA;  /* collateral clause result */
A68_231 * KXMAELA;  /* YIELD */
A_PROC_ENTRY(stackattr);
JXMAELA.Elem = XPMAELA_attribute;
JXMAELA.Rest = WPMAELA_attrstack;
KXMAELA = A_HEAP(A68_231 ) ;
(*KXMAELA) = JXMAELA ;
WPMAELA_attrstack = KXMAELA;
A_PROC_EXIT(stackattr);
return;
} 
#undef NL

A68_VOID  LXMAELA_stackinst(void)
{ 
A68_419  MXMAELA;  /* collateral clause result */
A68_419 * NXMAELA;  /* YIELD */
A_PROC_ENTRY(stackinst);
MXMAELA.Iparams = KUMAELA_iparams;
MXMAELA.Inst = NUMAELA_instance;
MXMAELA.Rest = PPMAELA_inststack;
NXMAELA = A_HEAP(A68_419 ) ;
(*NXMAELA) = MXMAELA ;
PPMAELA_inststack = NXMAELA;
A_PROC_EXIT(stackinst);
return;
} 
#undef NL

A68_VOID  OXMAELA_replicator(void)
{ 
A68_252  PXMAELA;  /* collateral clause result */
A68_252  QXMAELA_rg;
A68_250  RXMAELA;  /* collateral clause result */
A68_251  SXMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  TXMAELA;  /* YIELD */
A68_250 * UXMAELA;  /* YIELD */
A68_250 ** VXMAELA;  /* YIELD */
A68_413  WXMAELA;  /* collateral clause result */
A68_237  XXMAELA;  /* OPERATORS - mode -> union mode */
A68_241 * YXMAELA;  /* YIELD */
A68_413 * ZXMAELA;  /* YIELD */
A_PROC_ENTRY(replicator);
{ 
PXMAELA.Lwb = (*(&(QPMAELA_formulastack->Formula)));
PXMAELA.Upb = ZPMAELA_formula;
QXMAELA_rg = PXMAELA;
 /* line 496: */
DQMAELA_unstackformula();
 /* line 497: */
 /* line 498: */
RXMAELA.Sort = PKAATRN_localdec;
RXMAELA.Intname = (*(&(NPMAELA_inidstack->Inid)));
RXMAELA.Attr = (*(&(WPMAELA_attrstack->Elem)));
RXMAELA.Value = A_UNITE(SXMAELA,mode11,11,QXMAELA_rg);
RXMAELA.Usage = CBAATRN_nilusage;
TXMAELA = (*(&(MPMAELA_instack->In))) ;
UXMAELA = A_HEAP(A68_250 ) ;
(*UXMAELA) = RXMAELA ;
VXMAELA = (&A_VINDEX(QQMAELA_ints,TXMAELA)) ;
(*VXMAELA) = UXMAELA;
 /* line 499: */
 /* line 500: */
WXMAELA.B = A68_FALSE;
YXMAELA = OEAATRN_makefname((*(&(MPMAELA_instack->In)))) ;
WXMAELA.Formula = A_UNITE(XXMAELA,mode4,4,YXMAELA);
WXMAELA.Rest = QPMAELA_formulastack;
ZXMAELA = A_HEAP(A68_413 ) ;
(*ZXMAELA) = WXMAELA ;
QPMAELA_formulastack = ZXMAELA;
 /* line 501: */
HQMAELA_unstackattr();
BQMAELA_unstackin();
 /* line 502: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(replicator);
return;
} 
#undef NL

A68_VOID  AYMAELA_attrproc(void)
{ 
A68_231  BYMAELA;  /* collateral clause result */
A68_231 * CYMAELA;  /* YIELD */
A_PROC_ENTRY(attrproc);
{ 
BYMAELA.Elem = XPMAELA_attribute;
BYMAELA.Rest = DBAATRN_nilattrstr;
CYMAELA = A_HEAP(A68_231 ) ;
(*CYMAELA) = BYMAELA ;
(*LPMAELA_nextattr) = CYMAELA;
 /* line 506: */
 /* line 507: */
LPMAELA_nextattr = (&((*LPMAELA_nextattr)->Rest));
} 
A_PROC_EXIT(attrproc);
return;
} 
#undef NL

A68_VOID  DYMAELA_attrname(void)
{ 
A68_228  EYMAELA;  /* OPERATORS - mode -> union mode */
A68_229 * FYMAELA;  /* YIELD */
A_PROC_ENTRY(attrname);
FYMAELA = UDAATRN_makeattrname(ROMAELA_integer) ;
XPMAELA_attribute = A_UNITE(EYMAELA,mode1,1,FYMAELA);
A_PROC_EXIT(attrname);
return;
} 
#undef NL

A68_VOID  GYMAELA_attrdata(void)
{ 
A68_230  HYMAELA;  /* collateral clause result */
A68_230 * IYMAELA;  /* YIELD */
A68_228  JYMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrdata);
{ 
HYMAELA.Classname = (*(&(NPMAELA_inidstack->Inid)));
HYMAELA.Strings = JPMAELA_idstack;
IYMAELA = A_HEAP(A68_230 ) ;
(*IYMAELA) = HYMAELA ;
XPMAELA_attribute = A_UNITE(JYMAELA,mode2,2,IYMAELA);
 /* line 513: */
CQMAELA_unstackinid();
 /* line 514: */
 /* line 515: */
JPMAELA_idstack = LAAATRN_nilids;
} 
A_PROC_EXIT(attrdata);
return;
} 
#undef NL

A68_VOID  KYMAELA_attrbracket(void)
{ 
A68_228  LYMAELA;  /* OPERATORS - mode -> union mode */
A68_232 * MYMAELA;  /* YIELD */
A_PROC_ENTRY(attrbracket);
MYMAELA = ZDAATRN_makeattrbracket(XPMAELA_attribute) ;
XPMAELA_attribute = A_UNITE(LYMAELA,mode4,4,MYMAELA);
A_PROC_EXIT(attrbracket);
return;
} 
#undef NL

A68_VOID  NYMAELA_attrnullp(void)
{ 
A68_228  OYMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrnullp);
XPMAELA_attribute = A_UNITE(OYMAELA,mode5,5,(&ZHAATRN_attrnull));
A_PROC_EXIT(attrnullp);
return;
} 
#undef NL

A68_VOID  PYMAELA_attrstart(void)
{ 
A_PROC_ENTRY(attrstart);
{ 
KPMAELA_attrstr = DBAATRN_nilattrstr;
LPMAELA_nextattr = (&KPMAELA_attrstr);
} 
A_PROC_EXIT(attrstart);
return;
} 
#undef NL

A68_VOID  QYMAELA_attrstrp(void)
{ 
A68_228  RYMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrstrp);
XPMAELA_attribute = A_UNITE(RYMAELA,mode3,3,KPMAELA_attrstr);
A_PROC_EXIT(attrstrp);
return;
} 
#undef NL

A68_VOID  SYMAELA_iconst(void)
{ 
A68_238  TYMAELA;  /* collateral clause result */
A68_238 * UYMAELA;  /* YIELD */
A68_237  VYMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(iconst);
TYMAELA.Int = ROMAELA_integer;
TYMAELA.Text = TTCAOST_nullid;
UYMAELA = A_HEAP(A68_238 ) ;
(*UYMAELA) = TYMAELA ;
ZPMAELA_formula = A_UNITE(VYMAELA,mode1,1,UYMAELA);
A_PROC_EXIT(iconst);
return;
} 
#undef NL

A68_VOID  WYMAELA_iconsttext(void)
{ 
A68_238  XYMAELA;  /* collateral clause result */
A68_238 * YYMAELA;  /* YIELD */
A68_237  ZYMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(iconsttext);
{ 
XYMAELA.Int = (*(&(MPMAELA_instack->In)));
XYMAELA.Text = TOMAELA_identifier;
YYMAELA = A_HEAP(A68_238 ) ;
(*YYMAELA) = XYMAELA ;
ZPMAELA_formula = A_UNITE(ZYMAELA,mode1,1,YYMAELA);
 /* line 530: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(iconsttext);
return;
} 
#undef NL

A68_VOID  AZMAELA_iname(void)
{ 
A68_237  BZMAELA;  /* OPERATORS - mode -> union mode */
A68_246 * CZMAELA;  /* YIELD */
A_PROC_ENTRY(iname);
CZMAELA = TEAATRN_makefmacpar(ROMAELA_integer) ;
ZPMAELA_formula = A_UNITE(BZMAELA,mode9,9,CZMAELA);
A_PROC_EXIT(iname);
return;
} 
#undef NL

A68_VOID  DZMAELA_idop(void)
{ 
A68_INT  EZMAELA_op;
A68_237  FZMAELA_l1;
A68_237  GZMAELA_r1;
A68_242  HZMAELA;  /* collateral clause result */
A68_242 * IZMAELA;  /* YIELD */
A68_237  JZMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(idop);
{ 
 /* line 535: */
EZMAELA_op = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 536: */
GZMAELA_r1 = ZPMAELA_formula;
 /* line 537: */
FZMAELA_l1 = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 538: */
HZMAELA.Left = FZMAELA_l1;
HZMAELA.Sort = EZMAELA_op;
 /* line 539: */
HZMAELA.Right = GZMAELA_r1;
IZMAELA = A_HEAP(A68_242 ) ;
(*IZMAELA) = HZMAELA ;
ZPMAELA_formula = A_UNITE(JZMAELA,mode5,5,IZMAELA);
} 
A_PROC_EXIT(idop);
return;
} 
#undef NL

A68_VOID  KZMAELA_imop(void)
{ 
A68_INT  LZMAELA_op;
A68_237  MZMAELA_r1;
A68_243  NZMAELA;  /* collateral clause result */
A68_243 * OZMAELA;  /* YIELD */
A68_237  PZMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(imop);
{ 
 /* line 542: */
LZMAELA_op = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 543: */
MZMAELA_r1 = ZPMAELA_formula;
 /* line 544: */
NZMAELA.Sort = LZMAELA_op;
 /* line 545: */
NZMAELA.Right = MZMAELA_r1;
OZMAELA = A_HEAP(A68_243 ) ;
(*OZMAELA) = NZMAELA ;
ZPMAELA_formula = A_UNITE(PZMAELA,mode6,6,OZMAELA);
} 
A_PROC_EXIT(imop);
return;
} 
#undef NL

A68_VOID  QZMAELA_icond(void)
{ 
A68_237  RZMAELA_b1;
A68_237  SZMAELA_l1;
A68_237  TZMAELA_r1;
A68_244  UZMAELA;  /* collateral clause result */
A68_244 * VZMAELA;  /* YIELD */
A68_237  WZMAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(icond);
{ 
 /* line 548: */
TZMAELA_r1 = ZPMAELA_formula;
 /* line 549: */
SZMAELA_l1 = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 550: */
RZMAELA_b1 = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 551: */
UZMAELA.Cond = RZMAELA_b1;
UZMAELA.True = SZMAELA_l1;
 /* line 552: */
UZMAELA.False = TZMAELA_r1;
VZMAELA = A_HEAP(A68_244 ) ;
(*VZMAELA) = UZMAELA ;
ZPMAELA_formula = A_UNITE(WZMAELA,mode7,7,VZMAELA);
} 
A_PROC_EXIT(icond);
return;
} 
#undef NL

A68_VOID  XZMAELA_iparam(void)
{ 
A68_237  YZMAELA;  /* OPERATORS - mode -> union mode */
A68_240 * ZZMAELA;  /* YIELD */
A_PROC_ENTRY(iparam);
ZZMAELA = JEAATRN_makefarith(ROMAELA_integer) ;
ZPMAELA_formula = A_UNITE(YZMAELA,mode3,3,ZZMAELA);
A_PROC_EXIT(iparam);
return;
} 
#undef NL

A68_VOID  AANAELA_intcheck(void)
{ 
A68_INT  BANAELA_test;
A68_237  CANAELA_integer1;
A68_237  DANAELA_standard;
A68_239  EANAELA;  /* collateral clause result */
A68_239 * FANAELA;  /* YIELD */
A68_237  GANAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(intcheck);
{ 
 /* line 558: */
BANAELA_test = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 559: */
CANAELA_integer1 = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 560: */
DANAELA_standard = ZPMAELA_formula;
 /* line 561: */
EANAELA.Sort = BANAELA_test;
EANAELA.Test = CANAELA_integer1;
 /* line 562: */
EANAELA.Standard = DANAELA_standard;
FANAELA = A_HEAP(A68_239 ) ;
(*FANAELA) = EANAELA ;
ZPMAELA_formula = A_UNITE(GANAELA,mode2,2,FANAELA);
} 
A_PROC_EXIT(intcheck);
return;
} 
#undef NL

A68_VOID  HANAELA_idef(void)
{ 
A68_237  IANAELA;  /* OPERATORS - mode -> union mode */
A68_241 * JANAELA;  /* YIELD */
A_PROC_ENTRY(idef);
JANAELA = OEAATRN_makefname(ROMAELA_integer) ;
ZPMAELA_formula = A_UNITE(IANAELA,mode4,4,JANAELA);
A_PROC_EXIT(idef);
return;
} 
#undef NL

A68_VOID  KANAELA_ibracket(void)
{ 
A68_237  LANAELA;  /* OPERATORS - mode -> union mode */
A68_245 * MANAELA;  /* YIELD */
A_PROC_ENTRY(ibracket);
MANAELA = YEAATRN_makefbracket(ZPMAELA_formula) ;
ZPMAELA_formula = A_UNITE(LANAELA,mode8,8,MANAELA);
A_PROC_EXIT(ibracket);
return;
} 
#undef NL

A68_VOID  NANAELA_inull(void)
{ 
A68_237  OANAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(inull);
ZPMAELA_formula = A_UNITE(OANAELA,mode10,10,(&BIAATRN_fnull));
A_PROC_EXIT(inull);
return;
} 
#undef NL

A68_VOID  PANAELA_tnullp(void)
{ 
A68_253  QANAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tnullp);
YPMAELA_type = A_UNITE(QANAELA,mode9,9,(&DIAATRN_tnull));
A_PROC_EXIT(tnullp);
return;
} 
#undef NL

A68_VOID  RANAELA_tvoidp(void)
{ 
A68_253  SANAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tvoidp);
YPMAELA_type = A_UNITE(SANAELA,mode7,7,(&PIAATRN_tvoid));
A_PROC_EXIT(tvoidp);
return;
} 
#undef NL

A68_VOID  TANAELA_tnamed(void)
{ 
A68_253  UANAELA;  /* OPERATORS - mode -> union mode */
A68_254 * VANAELA;  /* YIELD */
A_PROC_ENTRY(tnamed);
{ 
VANAELA = IFAATRN_maketname(ROMAELA_integer) ;
YPMAELA_type = A_UNITE(UANAELA,mode1,1,VANAELA);
/*SKIP*/;
} 
A_PROC_EXIT(tnamed);
return;
} 
#undef NL

A68_VOID  WANAELA_trow(void)
{ 
A68_255  XANAELA;  /* collateral clause result */
A68_255 * YANAELA;  /* YIELD */
A68_253  ZANAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(trow);
{ 
XANAELA.Size = (*(&(QPMAELA_formulastack->Formula)));
XANAELA.Elem = YPMAELA_type;
YANAELA = A_HEAP(A68_255 ) ;
(*YANAELA) = XANAELA ;
YPMAELA_type = A_UNITE(ZANAELA,mode2,2,YANAELA);
 /* line 577: */
 /* line 578: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(trow);
return;
} 
#undef NL

A68_VOID  ABNAELA_tparam(void)
{ 
A68_253  BBNAELA;  /* OPERATORS - mode -> union mode */
A68_246 * CBNAELA;  /* YIELD */
A_PROC_ENTRY(tparam);
CBNAELA = NFAATRN_maketmacpar(ROMAELA_integer) ;
YPMAELA_type = A_UNITE(BBNAELA,mode8,8,CBNAELA);
A_PROC_EXIT(tparam);
return;
} 
#undef NL

A68_VOID  DBNAELA_tfn(void)
{ 
A68_257  EBNAELA;  /* collateral clause result */
A68_257 * FBNAELA;  /* YIELD */
A68_253  GBNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tfn);
{ 
EBNAELA.From = (*(&(OPMAELA_typestack->Type)));
EBNAELA.To = YPMAELA_type;
FBNAELA = A_HEAP(A68_257 ) ;
(*FBNAELA) = EBNAELA ;
YPMAELA_type = A_UNITE(GBNAELA,mode4,4,FBNAELA);
EQMAELA_unstacktype();
} 
A_PROC_EXIT(tfn);
return;
} 
#undef NL

A68_VOID  HBNAELA_tstring(void)
{ 
A68_259  IBNAELA;  /* collateral clause result */
A68_259 * JBNAELA;  /* YIELD */
A68_253  KBNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tstring);
{ 
IBNAELA.Size = (*(&(QPMAELA_formulastack->Formula)));
IBNAELA.Char = YPMAELA_type;
JBNAELA = A_HEAP(A68_259 ) ;
(*JBNAELA) = IBNAELA ;
YPMAELA_type = A_UNITE(KBNAELA,mode6,6,JBNAELA);
 /* line 585: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(tstring);
return;
} 
#undef NL

A68_VOID  LBNAELA_tstp(void)
{ 
A68_253  MBNAELA;  /* OPERATORS - mode -> union mode */
A68_256 * NBNAELA;  /* YIELD */
A_PROC_ENTRY(tstp);
NBNAELA = SVMAELA_tstset() ;
YPMAELA_type = A_UNITE(MBNAELA,mode3,3,NBNAELA);
A_PROC_EXIT(tstp);
return;
} 
#undef NL

A68_VOID  OBNAELA_tststartp(void)
{ 
A68_412  PBNAELA;  /* collateral clause result */
A68_253  QBNAELA;  /* OPERATORS - mode -> union mode */
A68_412 * RBNAELA;  /* YIELD */
A_PROC_ENTRY(tststartp);
PBNAELA.B = A68_TRUE;
PBNAELA.Type = A_UNITE(QBNAELA,mode9,9,(&DIAATRN_tnull));
PBNAELA.Rest = SPMAELA_tstrstack;
RBNAELA = A_HEAP(A68_412 ) ;
(*RBNAELA) = PBNAELA ;
SPMAELA_tstrstack = RBNAELA;
A_PROC_EXIT(tststartp);
return;
} 
#undef NL

A68_VOID  SBNAELA_tsttype(void)
{ 
A68_412  TBNAELA;  /* collateral clause result */
A68_412 * UBNAELA;  /* YIELD */
A_PROC_ENTRY(tsttype);
TBNAELA.B = A68_FALSE;
TBNAELA.Type = YPMAELA_type;
TBNAELA.Rest = SPMAELA_tstrstack;
UBNAELA = A_HEAP(A68_412 ) ;
(*UBNAELA) = TBNAELA ;
SPMAELA_tstrstack = UBNAELA;
A_PROC_EXIT(tsttype);
return;
} 
#undef NL

A68_VOID  VBNAELA_tbracket(void)
{ 
A68_253  WBNAELA;  /* OPERATORS - mode -> union mode */
A68_258 * XBNAELA;  /* YIELD */
A_PROC_ENTRY(tbracket);
XBNAELA = SFAATRN_maketbracket(YPMAELA_type) ;
YPMAELA_type = A_UNITE(WBNAELA,mode5,5,XBNAELA);
A_PROC_EXIT(tbracket);
return;
} 
#undef NL

A68_VOID  YBNAELA_cnamed(void)
{ 
A68_275  ZBNAELA;  /* OPERATORS - mode -> union mode */
A68_269 * ACNAELA;  /* YIELD */
A_PROC_ENTRY(cnamed);
{ 
ACNAELA = CGAATRN_makecname(ROMAELA_integer) ;
AQMAELA_const = A_UNITE(ZBNAELA,mode1,1,ACNAELA);
/*SKIP*/;
} 
A_PROC_EXIT(cnamed);
return;
} 
#undef NL

A68_VOID  BCNAELA_cprim(void)
{ 
A68_270  CCNAELA;  /* collateral clause result */
A68_270 * DCNAELA;  /* YIELD */
A68_275  ECNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprim);
{ 
CCNAELA.Typeno = (*(&(MPMAELA_instack->In)));
CCNAELA.Primno = ROMAELA_integer;
DCNAELA = A_HEAP(A68_270 ) ;
(*DCNAELA) = CCNAELA ;
AQMAELA_const = A_UNITE(ECNAELA,mode2,2,DCNAELA);
 /* line 598: */
 /* line 599: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(cprim);
return;
} 
#undef NL

A68_VOID  FCNAELA_cprimi(void)
{ 
A68_271  GCNAELA;  /* collateral clause result */
A68_271 * HCNAELA;  /* YIELD */
A68_275  ICNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprimi);
{ 
GCNAELA.Typeno = (*(&(MPMAELA_instack->In)));
GCNAELA.Index = ZPMAELA_formula;
HCNAELA = A_HEAP(A68_271 ) ;
(*HCNAELA) = GCNAELA ;
AQMAELA_const = A_UNITE(ICNAELA,mode3,3,HCNAELA);
 /* line 602: */
 /* line 603: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(cprimi);
return;
} 
#undef NL

A68_VOID  JCNAELA_cprimr(void)
{ 
A68_252  KCNAELA;  /* collateral clause result */
A68_252  LCNAELA_ra;
A68_272  MCNAELA;  /* collateral clause result */
A68_272 * NCNAELA;  /* YIELD */
A68_275  OCNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprimr);
{ 
KCNAELA.Lwb = (*(&(QPMAELA_formulastack->Formula)));
KCNAELA.Upb = ZPMAELA_formula;
LCNAELA_ra = KCNAELA;
 /* line 606: */
MCNAELA.Typeno = (*(&(MPMAELA_instack->In)));
MCNAELA.Range = LCNAELA_ra;
NCNAELA = A_HEAP(A68_272 ) ;
(*NCNAELA) = MCNAELA ;
AQMAELA_const = A_UNITE(OCNAELA,mode8,8,NCNAELA);
 /* line 607: */
BQMAELA_unstackin();
 /* line 608: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(cprimr);
return;
} 
#undef NL

A68_VOID  PCNAELA_cprimu(void)
{ 
A68_INT  QCNAELA_a;
A68_INT  RCNAELA_b;
A68_282  SCNAELA;  /* collateral clause result */
A68_282 * TCNAELA;  /* YIELD */
A68_275  UCNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprimu);
{ 
 /* line 611: */
QCNAELA_a = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 612: */
RCNAELA_b = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 613: */
SCNAELA.Typeno = RCNAELA_b;
SCNAELA.Altno = QCNAELA_a;
 /* line 614: */
SCNAELA.Assoc = AQMAELA_const;
TCNAELA = A_HEAP(A68_282 ) ;
(*TCNAELA) = SCNAELA ;
AQMAELA_const = A_UNITE(UCNAELA,mode13,13,TCNAELA);
} 
A_PROC_EXIT(cprimu);
return;
} 
#undef NL

A68_VOID  VCNAELA_calt(void)
{ 
A68_279 * WCNAELA_calts;
A68_279  XCNAELA;  /* collateral clause result */
A68_279 * YCNAELA;  /* YIELD */
A68_275  ZCNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(calt);
{ 
WCNAELA_calts = HAAATRN_nilualts;
 /* line 618: */
for ( ;; )
{ 
 /* line 619: */
if ( !(!(*(&(RPMAELA_conststack->B)))) ) break;
XCNAELA.Alt = (*(&(RPMAELA_conststack->Const)));
XCNAELA.Rest = WCNAELA_calts;
YCNAELA = A_HEAP(A68_279 ) ;
(*YCNAELA) = XCNAELA ;
WCNAELA_calts = YCNAELA;
 /* line 620: */
 /* line 621: */
FQMAELA_unstackconst();
}
 /* line 622: */
FQMAELA_unstackconst();
 /* line 623: */
 /* line 624: */
AQMAELA_const = A_UNITE(ZCNAELA,mode10,10,WCNAELA_calts);
} 
A_PROC_EXIT(calt);
return;
} 
#undef NL

A68_VOID  ADNAELA_cst(void)
{ 
A68_290 * BDNAELA_cstr;
A68_290  CDNAELA;  /* collateral clause result */
A68_290 * DDNAELA;  /* YIELD */
A68_275  EDNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cst);
{ 
BDNAELA_cstr = IAAATRN_nilustr;
 /* line 627: */
for ( ;; )
{ 
 /* line 628: */
if ( !(!(*(&(RPMAELA_conststack->B)))) ) break;
CDNAELA.Elem = (*(&(RPMAELA_conststack->Const)));
CDNAELA.Rest = BDNAELA_cstr;
DDNAELA = A_HEAP(A68_290 ) ;
(*DDNAELA) = CDNAELA ;
BDNAELA_cstr = DDNAELA;
 /* line 629: */
 /* line 630: */
FQMAELA_unstackconst();
}
 /* line 631: */
FQMAELA_unstackconst();
 /* line 632: */
 /* line 633: */
AQMAELA_const = A_UNITE(EDNAELA,mode21,21,BDNAELA_cstr);
} 
A_PROC_EXIT(cst);
return;
} 
#undef NL

A68_VOID  FDNAELA_crow(void)
{ 
A68_289  GDNAELA;  /* collateral clause result */
A68_289 * HDNAELA;  /* YIELD */
A68_275  IDNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(crow);
{ 
GDNAELA.Size = (*(&(QPMAELA_formulastack->Formula)));
GDNAELA.Elem = AQMAELA_const;
HDNAELA = A_HEAP(A68_289 ) ;
(*HDNAELA) = GDNAELA ;
AQMAELA_const = A_UNITE(IDNAELA,mode20,20,HDNAELA);
 /* line 636: */
 /* line 637: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(crow);
return;
} 
#undef NL

A68_VOID  JDNAELA_cnullp(void)
{ 
A68_275  KDNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cnullp);
AQMAELA_const = A_UNITE(KDNAELA,mode34,34,(&FIAATRN_unull));
A_PROC_EXIT(cnullp);
return;
} 
#undef NL

A68_VOID  LDNAELA_cvoidp(void)
{ 
A68_275  MDNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cvoidp);
AQMAELA_const = A_UNITE(MDNAELA,mode6,6,(&RIAATRN_cvoid));
A_PROC_EXIT(cvoidp);
return;
} 
#undef NL

A68_VOID  NDNAELA_cttype(void)
{ 
A68_275  ODNAELA;  /* OPERATORS - mode -> union mode */
A68_258 * PDNAELA;  /* YIELD */
A_PROC_ENTRY(cttype);
PDNAELA = HGAATRN_makectype(YPMAELA_type) ;
AQMAELA_const = A_UNITE(ODNAELA,mode7,7,PDNAELA);
A_PROC_EXIT(cttype);
return;
} 
#undef NL

A68_VOID  QDNAELA_cquery(void)
{ 
A68_275  RDNAELA;  /* OPERATORS - mode -> union mode */
A68_273 * SDNAELA;  /* YIELD */
A_PROC_ENTRY(cquery);
SDNAELA = MGAATRN_makecquery(YPMAELA_type) ;
AQMAELA_const = A_UNITE(RDNAELA,mode4,4,SDNAELA);
A_PROC_EXIT(cquery);
return;
} 
#undef NL

A68_VOID  TDNAELA_cbracket(void)
{ 
A68_275  UDNAELA;  /* OPERATORS - mode -> union mode */
A68_301 * VDNAELA;  /* YIELD */
A_PROC_ENTRY(cbracket);
VDNAELA = RGAATRN_makeubracket(AQMAELA_const) ;
AQMAELA_const = A_UNITE(UDNAELA,mode32,32,VDNAELA);
A_PROC_EXIT(cbracket);
return;
} 
#undef NL

A68_VOID  WDNAELA_cstring(void)
{ 
A68_302  XDNAELA;  /* collateral clause result */
A68_302 * YDNAELA;  /* YIELD */
A68_275  ZDNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cstring);
{ 
XDNAELA.Size = (*(&(QPMAELA_formulastack->Formula)));
XDNAELA.Char = AQMAELA_const;
YDNAELA = A_HEAP(A68_302 ) ;
(*YDNAELA) = XDNAELA ;
AQMAELA_const = A_UNITE(ZDNAELA,mode33,33,YDNAELA);
 /* line 651: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(cstring);
return;
} 
#undef NL

A68_VOID  AENAELA_cprimch(void)
{ 
A68_INT  BENAELA_typeno;
A68_270  CENAELA;  /* collateral clause result */
A68_INT  DENAELA;  /* YIELD */
A68_270 * EENAELA;  /* YIELD */
A68_275  FENAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprimch);
{ 
BENAELA_typeno = (*(&(MPMAELA_instack->In)));
 /* line 655: */
CENAELA.Typeno = BENAELA_typeno;
DENAELA = 1 ;
CENAELA.Primno = YQMAELA_find_primno(BENAELA_typeno, (*(&A_VINDEX(TOMAELA_identifier,DENAELA))));
EENAELA = A_HEAP(A68_270 ) ;
(*EENAELA) = CENAELA ;
AQMAELA_const = A_UNITE(FENAELA,mode2,2,EENAELA);
 /* line 656: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(cprimch);
return;
} 
#undef NL

A68_VOID  GENAELA_cprimst(void)
{ 
A68_INT  HENAELA_typeno;
A68_276  IENAELA;  /* collateral clause result */
A68_32  JENAELA;  /* avoid structure result */
A68_276 * KENAELA;  /* YIELD */
A68_275  LENAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprimst);
{ 
HENAELA_typeno = (*(&(MPMAELA_instack->In)));
 /* line 660: */
IENAELA.Typeno = HENAELA_typeno;
MRMAELA_ids_to_rvi( HENAELA_typeno, JPMAELA_idstack, &JENAELA );
IENAELA.String = JENAELA;
KENAELA = A_HEAP(A68_276 ) ;
(*KENAELA) = IENAELA ;
AQMAELA_const = A_UNITE(LENAELA,mode5,5,KENAELA);
 /* line 661: */
JPMAELA_idstack = LAAATRN_nilids;
 /* line 662: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(cprimst);
return;
} 
#undef NL

A68_VOID  MENAELA_cprimchr(void)
{ 
A68_INT  NENAELA_typeno;
A68_278  OENAELA;  /* collateral clause result */
A68_VC  PENAELA;  /* OPERATORS - simple index */
A68_INT  QENAELA;  /* YIELD */
A68_INT  RENAELA;  /* YIELD */
A68_278 * SENAELA;  /* YIELD */
A68_275  TENAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cprimchr);
{ 
NENAELA_typeno = (*(&(MPMAELA_instack->In)));
 /* line 666: */
 /* line 667: */
OENAELA.Typeno = NENAELA_typeno;
 /* line 668: */
PENAELA = (*(&(NPMAELA_inidstack->Inid))) ;
QENAELA = 1 ;
OENAELA.Firstno = YQMAELA_find_primno(NENAELA_typeno, (*(&A_VINDEX(PENAELA,QENAELA))));
RENAELA = 1 ;
OENAELA.Lastno = YQMAELA_find_primno(NENAELA_typeno, (*(&A_VINDEX(TOMAELA_identifier,RENAELA))));
SENAELA = A_HEAP(A68_278 ) ;
(*SENAELA) = OENAELA ;
AQMAELA_const = A_UNITE(TENAELA,mode9,9,SENAELA);
 /* line 669: */
BQMAELA_unstackin();
CQMAELA_unstackinid();
} 
A_PROC_EXIT(cprimchr);
return;
} 
#undef NL

A68_VOID  UENAELA_cparam(void)
{ 
A68_275  VENAELA;  /* OPERATORS - mode -> union mode */
A68_269 * WENAELA;  /* YIELD */
A_PROC_ENTRY(cparam);
WENAELA = CGAATRN_makecname(ROMAELA_integer) ;
AQMAELA_const = A_UNITE(VENAELA,mode1,1,WENAELA);
A_PROC_EXIT(cparam);
return;
} 
#undef NL

A68_VOID  XENAELA_cindex(void)
{ 
A68_285  YENAELA;  /* collateral clause result */
A68_285 * ZENAELA;  /* YIELD */
A68_275  AFNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cindex);
YENAELA.Unit = AQMAELA_const;
YENAELA.Index = ZPMAELA_formula;
ZENAELA = A_HEAP(A68_285 ) ;
(*ZENAELA) = YENAELA ;
AQMAELA_const = A_UNITE(AFNAELA,mode16,16,ZENAELA);
A_PROC_EXIT(cindex);
return;
} 
#undef NL

A68_VOID  BFNAELA_ctrim(void)
{ 
A68_252  CFNAELA;  /* collateral clause result */
A68_252  DFNAELA_rg;
A68_286  EFNAELA;  /* collateral clause result */
A68_286 * FFNAELA;  /* YIELD */
A68_275  GFNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ctrim);
{ 
CFNAELA.Lwb = (*(&(QPMAELA_formulastack->Formula)));
CFNAELA.Upb = ZPMAELA_formula;
DFNAELA_rg = CFNAELA;
 /* line 678: */
EFNAELA.Unit = AQMAELA_const;
EFNAELA.Range = DFNAELA_rg;
FFNAELA = A_HEAP(A68_286 ) ;
(*FFNAELA) = EFNAELA ;
AQMAELA_const = A_UNITE(GFNAELA,mode17,17,FFNAELA);
 /* line 679: */
 /* line 680: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(ctrim);
return;
} 
#undef NL

A68_VOID  HFNAELA_crepl(void)
{ 
A68_296  IFNAELA;  /* collateral clause result */
A68_296 * JFNAELA;  /* YIELD */
A68_275  KFNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(crepl);
{ 
IFNAELA.Repl = (*(&(QPMAELA_formulastack->Formula)));
IFNAELA.Body = AQMAELA_const;
JFNAELA = A_HEAP(A68_296 ) ;
(*JFNAELA) = IFNAELA ;
AQMAELA_const = A_UNITE(KFNAELA,mode27,27,JFNAELA);
 /* line 684: */
 /* line 685: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(crepl);
return;
} 
#undef NL

A68_VOID  LFNAELA_ccond(void)
{ 
A68_295  MFNAELA;  /* collateral clause result */
A68_295 * NFNAELA;  /* YIELD */
A68_275  OFNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ccond);
{ 
 /* line 689: */
MFNAELA.Cond = (*(&(QPMAELA_formulastack->Formula)));
MFNAELA.True = (*(&(RPMAELA_conststack->Const)));
MFNAELA.False = AQMAELA_const;
NFNAELA = A_HEAP(A68_295 ) ;
(*NFNAELA) = MFNAELA ;
AQMAELA_const = A_UNITE(OFNAELA,mode26,26,NFNAELA);
 /* line 690: */
FQMAELA_unstackconst();
 /* line 691: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(ccond);
return;
} 
#undef NL

A68_VOID  PFNAELA_cconc(void)
{ 
A68_INT  QFNAELA_sort;
A68_291  RFNAELA;  /* collateral clause result */
A68_291 * SFNAELA;  /* YIELD */
A68_275  TFNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cconc);
{ 
QFNAELA_sort = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 695: */
 /* line 696: */
RFNAELA.String = ((*(&(MPMAELA_instack->In)))==1);
RFNAELA.Sort = QFNAELA_sort;
RFNAELA.Left = (*(&(RPMAELA_conststack->Const)));
RFNAELA.Right = AQMAELA_const;
SFNAELA = A_HEAP(A68_291 ) ;
(*SFNAELA) = RFNAELA ;
AQMAELA_const = A_UNITE(TFNAELA,mode22,22,SFNAELA);
 /* line 697: */
FQMAELA_unstackconst();
 /* line 698: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(cconc);
return;
} 
#undef NL

A68_VOID  UFNAELA_cattr(void)
{ 
A68_299  VFNAELA;  /* collateral clause result */
A68_299 * WFNAELA;  /* YIELD */
A68_275  XFNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cattr);
VFNAELA.Unit = AQMAELA_const;
VFNAELA.Attr = XPMAELA_attribute;
WFNAELA = A_HEAP(A68_299 ) ;
(*WFNAELA) = VFNAELA ;
AQMAELA_const = A_UNITE(XFNAELA,mode30,30,WFNAELA);
A_PROC_EXIT(cattr);
return;
} 
#undef NL

A68_VOID  YFNAELA_pidalts(void)
{ 
A68_267  DGNAELA;  /* avoid structure result */
A68_267  EGNAELA_newnames;
A68_BOOL  FGNAELA;  /* optbool result */
A68_264  GGNAELA;  /* collateral clause result */
A68_264 * HGNAELA;  /* YIELD */
A68_266  IGNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pidalts);
{ 
AGNAELA_generator( A68_FALSE, &DGNAELA );
EGNAELA_newnames = DGNAELA;
 /* line 705: */
for ( ;; )
{ 
FGNAELA = !(*(&(DUMAELA_namestack->B)));
if ( FGNAELA )
{ /* line 706: */
FGNAELA = (NTMAELA_newcount!=0);
}
if ( !(FGNAELA) ) break;
GGNAELA.Altname = (*(&(DUMAELA_namestack->Id)));
GGNAELA.Assoc = (*(&(DUMAELA_namestack->Type)));
HGNAELA = (&A_VINDEX(EGNAELA_newnames,NTMAELA_newcount)) ;
(*HGNAELA) = GGNAELA;
 /* line 707: */
NTMAELA_newcount-=1;
 /* line 708: */
 /* line 709: */
DUMAELA_namestack = (*(&(DUMAELA_namestack->Rest)));
}
 /* line 710: */
DUMAELA_namestack = (*(&(DUMAELA_namestack->Rest)));
 /* line 711: */
 /* line 712: */
STMAELA_typebody = A_UNITE(IGNAELA,mode1,1,EGNAELA_newnames);
} 
A_PROC_EXIT(pidalts);
return;
} 
#undef NL

A68_VOID  JGNAELA_prange(void)
{ 
A68_252  KGNAELA;  /* collateral clause result */
A68_252  LGNAELA_ra;
A68_265 * MGNAELA_newints;
A68_265  NGNAELA;  /* collateral clause result */
A68_266  OGNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(prange);
{ 
KGNAELA.Lwb = (*(&(QPMAELA_formulastack->Formula)));
KGNAELA.Upb = ZPMAELA_formula;
LGNAELA_ra = KGNAELA;
 /* line 716: */
DQMAELA_unstackformula();
 /* line 717: */
MGNAELA_newints = (A_HEAP(A68_265 ));
NGNAELA.Tagname = (*(&(NPMAELA_inidstack->Inid)));
NGNAELA.Range = LGNAELA_ra;
(*MGNAELA_newints) = NGNAELA;
 /* line 718: */
CQMAELA_unstackinid();
 /* line 719: */
 /* line 720: */
STMAELA_typebody = A_UNITE(OGNAELA,mode2,2,MGNAELA_newints);
} 
A_PROC_EXIT(prange);
return;
} 
#undef NL

A68_VOID  PGNAELA_pstringst(void)
{ 
A68_VC  UGNAELA;  /* avoid structure result */
A_PROC_ENTRY(pstringst);
{ 
UQMAELA_charpos = 0;
 /* line 724: */
RGNAELA_generator( A68_FALSE, &UGNAELA );
VQMAELA_charlist = UGNAELA;
} 
A_PROC_EXIT(pstringst);
return;
} 
#undef NL

A68_VOID  VGNAELA_pstring(void)
{ 
A68_263 * WGNAELA_newchars;
A68_263  XGNAELA;  /* collateral clause result */
A68_266  YGNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pstring);
{ 
WGNAELA_newchars = (A_HEAP(A68_263 ));
XGNAELA.Tagname = (*(&(NPMAELA_inidstack->Inid)));
XGNAELA.Chars = VQMAELA_charlist;
(*WGNAELA_newchars) = XGNAELA;
 /* line 729: */
CQMAELA_unstackinid();
 /* line 730: */
 /* line 731: */
STMAELA_typebody = A_UNITE(YGNAELA,mode4,4,WGNAELA_newchars);
} 
A_PROC_EXIT(pstring);
return;
} 
#undef NL

A68_VOID  ZGNAELA_pchar(void)
{ 
A68_INT  AHNAELA;  /* YIELD */
A68_CHAR * BHNAELA;  /* YIELD */
A_PROC_ENTRY(pchar);
{ 
UQMAELA_charpos+=1;
 /* line 735: */
 /* line 736: */
AHNAELA = 1 ;
BHNAELA = (&A_VINDEX(VQMAELA_charlist,UQMAELA_charpos)) ;
(*BHNAELA) = (*(&A_VINDEX(TOMAELA_identifier,AHNAELA)));
} 
A_PROC_EXIT(pchar);
return;
} 
#undef NL

A68_VOID  CHNAELA_pcharange(void)
{ 
A68_VC  DHNAELA;  /* OPERATORS - simple index */
A68_INT  EHNAELA;  /* YIELD */
A68_INT  FHNAELA_first;
A68_INT  GHNAELA;  /* YIELD */
A68_INT  HHNAELA_last;
A68_INT  IHNAELA_i;
A68_INT  JHNAELA;  /* to part of loop */
A68_INT  KHNAELA;  /* YIELD */
A68_CHAR * LHNAELA;  /* YIELD */
A_PROC_ENTRY(pcharange);
{ 
DHNAELA = (*(&(NPMAELA_inidstack->Inid))) ;
EHNAELA = 1 ;
FHNAELA_first = (A68_INT)(unsigned char)(*(&A_VINDEX(DHNAELA,EHNAELA)));
 /* line 740: */
GHNAELA = 1 ;
HHNAELA_last = (A68_INT)(unsigned char)(*(&A_VINDEX(TOMAELA_identifier,GHNAELA)));
 /* line 741: */
 /* line 742: */
JHNAELA = HHNAELA_last;
for ( IHNAELA_i = FHNAELA_first;
IHNAELA_i <= JHNAELA;
IHNAELA_i += 1 )
{ 
KHNAELA = (((UQMAELA_charpos+IHNAELA_i)-FHNAELA_first)+1) ;
LHNAELA = (&A_VINDEX(VQMAELA_charlist,KHNAELA)) ;
(*LHNAELA) = (A68_CHAR)IHNAELA_i;
}
 /* line 743: */
UQMAELA_charpos+=((HHNAELA_last-FHNAELA_first)+1);
 /* line 744: */
 /* line 745: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(pcharange);
return;
} 
#undef NL

A68_VOID  MHNAELA_primsetp(void)
{ 
A68_416  NHNAELA;  /* collateral clause result */
A68_253  OHNAELA;  /* OPERATORS - mode -> union mode */
A68_416 * PHNAELA;  /* YIELD */
A_PROC_ENTRY(primsetp);
{ 
NHNAELA.B = A68_TRUE;
NHNAELA.Id = NTCAOST_nilid;
NHNAELA.Type = A_UNITE(OHNAELA,mode9,9,(&DIAATRN_tnull));
NHNAELA.Rest = DUMAELA_namestack;
PHNAELA = A_HEAP(A68_416 ) ;
(*PHNAELA) = NHNAELA ;
DUMAELA_namestack = PHNAELA;
 /* line 749: */
 /* line 750: */
NTMAELA_newcount = 0;
} 
A_PROC_EXIT(primsetp);
return;
} 
#undef NL

A68_VOID  QHNAELA_primset1(void)
{ 
A68_416  RHNAELA;  /* collateral clause result */
A68_416 * SHNAELA;  /* YIELD */
A_PROC_ENTRY(primset1);
{ 
 /* line 754: */
RHNAELA.B = A68_FALSE;
RHNAELA.Id = TOMAELA_identifier;
RHNAELA.Type = (*(&(OPMAELA_typestack->Type)));
RHNAELA.Rest = DUMAELA_namestack;
SHNAELA = A_HEAP(A68_416 ) ;
(*SHNAELA) = RHNAELA ;
DUMAELA_namestack = SHNAELA;
 /* line 755: */
NTMAELA_newcount+=1;
 /* line 756: */
 /* line 757: */
EQMAELA_unstacktype();
} 
A_PROC_EXIT(primset1);
return;
} 
#undef NL

A68_VOID  THNAELA_namestp(void)
{ 
A_PROC_ENTRY(namestp);
LUMAELA_names = NAAATRN_nilnames;
A_PROC_EXIT(namestp);
return;
} 
#undef NL

A68_VOID  UHNAELA_idloop(void)
{ 
A68_INT  VHNAELA_numb;
A68_350  WHNAELA;  /* collateral clause result */
A68_353  XHNAELA;  /* OPERATORS - simple index */
A68_350 * YHNAELA;  /* YIELD */
A68_316  ZHNAELA;  /* collateral clause result */
A68_316 * AINAELA;  /* YIELD */
A_PROC_ENTRY(idloop);
{ 
VHNAELA_numb = (*(&(MPMAELA_instack->In)));
 /* line 764: */
BQMAELA_unstackin();
 /* line 765: */
WHNAELA.Name = (*(&(NPMAELA_inidstack->Inid)));
WHNAELA.Type = YPMAELA_type;
WHNAELA.Attr = XPMAELA_attribute;
XHNAELA = (*(&(MUMAELA_fndec->Nametypes))) ;
YHNAELA = (&A_VINDEX(XHNAELA,VHNAELA_numb)) ;
(*YHNAELA) = WHNAELA;
 /* line 766: */
CQMAELA_unstackinid();
 /* line 767: */
ZHNAELA.Nameno = VHNAELA_numb;
 /* line 768: */
ZHNAELA.Rest = LUMAELA_names;
AINAELA = A_HEAP(A68_316 ) ;
(*AINAELA) = ZHNAELA ;
LUMAELA_names = AINAELA;
} 
A_PROC_EXIT(idloop);
return;
} 
#undef NL

A68_VOID  BINAELA_attrlistpr(void)
{ 
A68_353  CINAELA;  /* OPERATORS - simple index */
A68_INT  DINAELA;  /* YIELD */
A68_228 * EINAELA;  /* YIELD */
A_PROC_ENTRY(attrlistpr);
{ 
CINAELA = (*(&(MUMAELA_fndec->Nametypes))) ;
DINAELA = (*(&(MPMAELA_instack->In))) ;
EINAELA = (&((&A_VINDEX(CINAELA,DINAELA))->Attr)) ;
(*EINAELA) = XPMAELA_attribute;
 /* line 773: */
 /* line 774: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(attrlistpr);
return;
} 
#undef NL

A68_VOID  FINAELA_instance1(void)
{ 
A68_INT  GINAELA_fnno;
A68_315  HINAELA;  /* collateral clause result */
A68_453  JINAELA_generator;   /* proc value of non-global proc */
A68_317  OINAELA;  /* avoid structure result */
A68_228  PINAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(instance1);
{ 
GINAELA_fnno = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 780: */
KUMAELA_iparams = 0;
 /* line 781: */
 /* line 782: */
 /* line 783: */
HINAELA.Fnno = GINAELA_fnno;
if ( (ROMAELA_integer!=(-1)) )
{ 
A_CLOSURE( JINAELA_generator, KINAELA_generator, LINAELA_generator );
A_CALLPROC(JINAELA_generator,(A68_FALSE, &OINAELA),(A68_FALSE, &OINAELA,(JINAELA_generator).nonlocals));
HINAELA.Macparams = OINAELA;
} 
else
{ 
 /* line 785: */
HINAELA.Macparams = ABAATRN_nilmacparams;
} 
 /* line 786: */
HINAELA.Attr = A_UNITE(PINAELA,mode5,5,(&ZHAATRN_attrnull));
NUMAELA_instance = HINAELA;
} 
A_PROC_EXIT(instance1);
return;
} 
#undef NL

A68_VOID  QINAELA_instancep(void)
{ 
A68_228 * RINAELA;  /* YIELD */
A_PROC_ENTRY(instancep);
RINAELA = (&((&NUMAELA_instance)->Attr)) ;
(*RINAELA) = XPMAELA_attribute;
A_PROC_EXIT(instancep);
return;
} 
#undef NL

A68_VOID  SINAELA_attrcall(void)
{ 
A68_318  TINAELA;  /* collateral clause result */
A68_319  UINAELA;  /* OPERATORS - mode -> union mode */
A68_236  VINAELA;  /* YIELD */
A68_317  WINAELA;  /* OPERATORS - simple index */
A68_INT  XINAELA;  /* YIELD */
A68_318 * YINAELA;  /* YIELD */
A_PROC_ENTRY(attrcall);
{ 
 /* line 794: */
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
TINAELA.Sort = AJAATRN_explicitmacpar;
} 
else
{ 
 /* line 795: */
TINAELA.Sort = BJAATRN_implicitmacpar;
} 
VINAELA = (*EEAATRN_makeattrtag(XPMAELA_attribute)) ;
TINAELA.Param = A_UNITE(UINAELA,mode1,1,VINAELA);
WINAELA = (*(&((&NUMAELA_instance)->Macparams))) ;
XINAELA = KUMAELA_iparams+=1 ;
YINAELA = (&A_VINDEX(WINAELA,XINAELA)) ;
(*YINAELA) = TINAELA;
 /* line 796: */
 /* line 797: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(attrcall);
return;
} 
#undef NL

A68_VOID  ZINAELA_integercall(void)
{ 
A68_318  AJNAELA;  /* collateral clause result */
A68_319  BJNAELA;  /* OPERATORS - mode -> union mode */
A68_248  CJNAELA;  /* YIELD */
A68_317  DJNAELA;  /* OPERATORS - simple index */
A68_INT  EJNAELA;  /* YIELD */
A68_318 * FJNAELA;  /* YIELD */
A_PROC_ENTRY(integercall);
{ 
 /* line 801: */
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
AJNAELA.Sort = AJAATRN_explicitmacpar;
} 
else
{ 
 /* line 802: */
AJNAELA.Sort = BJAATRN_implicitmacpar;
} 
CJNAELA = (*DFAATRN_makeformulatag(ZPMAELA_formula)) ;
AJNAELA.Param = A_UNITE(BJNAELA,mode2,2,CJNAELA);
DJNAELA = (*(&((&NUMAELA_instance)->Macparams))) ;
EJNAELA = KUMAELA_iparams+=1 ;
FJNAELA = (&A_VINDEX(DJNAELA,EJNAELA)) ;
(*FJNAELA) = AJNAELA;
 /* line 803: */
 /* line 804: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(integercall);
return;
} 
#undef NL

A68_VOID  GJNAELA_typecall(void)
{ 
A68_318  HJNAELA;  /* collateral clause result */
A68_319  IJNAELA;  /* OPERATORS - mode -> union mode */
A68_262  JJNAELA;  /* YIELD */
A68_317  KJNAELA;  /* OPERATORS - simple index */
A68_INT  LJNAELA;  /* YIELD */
A68_318 * MJNAELA;  /* YIELD */
A_PROC_ENTRY(typecall);
{ 
 /* line 808: */
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
HJNAELA.Sort = AJAATRN_explicitmacpar;
} 
else
{ 
 /* line 809: */
HJNAELA.Sort = BJAATRN_implicitmacpar;
} 
JJNAELA = (*XFAATRN_maketypetag(YPMAELA_type)) ;
HJNAELA.Param = A_UNITE(IJNAELA,mode3,3,JJNAELA);
KJNAELA = (*(&((&NUMAELA_instance)->Macparams))) ;
LJNAELA = KUMAELA_iparams+=1 ;
MJNAELA = (&A_VINDEX(KJNAELA,LJNAELA)) ;
(*MJNAELA) = HJNAELA;
 /* line 810: */
 /* line 811: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(typecall);
return;
} 
#undef NL

A68_VOID  NJNAELA_ctypecall(void)
{ 
A68_318  OJNAELA;  /* collateral clause result */
A68_319  PJNAELA;  /* OPERATORS - mode -> union mode */
A68_320  QJNAELA;  /* YIELD */
A68_317  RJNAELA;  /* OPERATORS - simple index */
A68_INT  SJNAELA;  /* YIELD */
A68_318 * TJNAELA;  /* YIELD */
A_PROC_ENTRY(ctypecall);
{ 
 /* line 815: */
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
OJNAELA.Sort = AJAATRN_explicitmacpar;
} 
else
{ 
 /* line 816: */
OJNAELA.Sort = BJAATRN_implicitmacpar;
} 
QJNAELA = (*WGAATRN_makeunittag(AQMAELA_const)) ;
OJNAELA.Param = A_UNITE(PJNAELA,mode4,4,QJNAELA);
RJNAELA = (*(&((&NUMAELA_instance)->Macparams))) ;
SJNAELA = KUMAELA_iparams+=1 ;
TJNAELA = (&A_VINDEX(RJNAELA,SJNAELA)) ;
(*TJNAELA) = OJNAELA;
 /* line 817: */
 /* line 818: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(ctypecall);
return;
} 
#undef NL

A68_VOID  UJNAELA_fnparamcall(void)
{ 
A68_315  VJNAELA_parinst;
A68_318  WJNAELA;  /* collateral clause result */
A68_319  XJNAELA;  /* OPERATORS - mode -> union mode */
A68_317  YJNAELA;  /* OPERATORS - simple index */
A68_INT  ZJNAELA;  /* YIELD */
A68_318 * AKNAELA;  /* YIELD */
A_PROC_ENTRY(fnparamcall);
{ 
VJNAELA_parinst = NUMAELA_instance;
 /* line 823: */
NUMAELA_instance = (*(&(PPMAELA_inststack->Inst)));
 /* line 824: */
KUMAELA_iparams = (*(&(PPMAELA_inststack->Iparams)));
 /* line 825: */
GQMAELA_unstackinst();
 /* line 826: */
 /* line 827: */
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
WJNAELA.Sort = AJAATRN_explicitmacpar;
} 
else
{ 
 /* line 828: */
WJNAELA.Sort = BJAATRN_implicitmacpar;
} 
WJNAELA.Param = A_UNITE(XJNAELA,mode5,5,VJNAELA_parinst);
YJNAELA = (*(&((&NUMAELA_instance)->Macparams))) ;
ZJNAELA = KUMAELA_iparams+=1 ;
AKNAELA = (&A_VINDEX(YJNAELA,ZJNAELA)) ;
(*AKNAELA) = WJNAELA;
 /* line 829: */
 /* line 830: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(fnparamcall);
return;
} 
#undef NL

A68_VOID  BKNAELA_exttypes(void)
{ 
A68_235 * CKNAELA_usage;
A68_235  DKNAELA;  /* collateral clause result */
A68_268  EKNAELA;  /* collateral clause result */
A68_228  FKNAELA;  /* OPERATORS - mode -> union mode */
A68_INT  GKNAELA;  /* YIELD */
A68_268 * HKNAELA;  /* YIELD */
A68_268 ** IKNAELA;  /* YIELD */
A_PROC_ENTRY(exttypes);
{ 
ROMAELA_integer = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 834: */
CKNAELA_usage = (A_HEAP(A68_235 ));
DKNAELA.Contextno = WOMAELA_contextno;
DKNAELA.Closureno = 0;
DKNAELA.Libv_spec = ROMAELA_integer;
DKNAELA.Libv_body = 0;
DKNAELA.Import = A68_FALSE;
DKNAELA.Export = A68_FALSE;
(*CKNAELA_usage) = DKNAELA;
 /* line 835: */
 /* line 836: */
EKNAELA.Sort = OKAATRN_outerdec;
EKNAELA.Typename = (*(&(NPMAELA_inidstack->Inid)));
EKNAELA.Attr = A_UNITE(FKNAELA,mode5,5,(&ZHAATRN_attrnull));
EKNAELA.Body = STMAELA_typebody;
EKNAELA.Usage = CKNAELA_usage;
GKNAELA = (*(&(MPMAELA_instack->In))) ;
HKNAELA = A_HEAP(A68_268 ) ;
(*HKNAELA) = EKNAELA ;
IKNAELA = (&A_VINDEX(OQMAELA_types,GKNAELA)) ;
(*IKNAELA) = HKNAELA;
 /* line 837: */
BQMAELA_unstackin();
 /* line 838: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(exttypes);
return;
} 
#undef NL

A68_VOID  JKNAELA_extattrs(void)
{ 
A68_235 * KKNAELA_usage;
A68_235  LKNAELA;  /* collateral clause result */
A68_234  MKNAELA;  /* collateral clause result */
A68_228  NKNAELA;  /* OPERATORS - mode -> union mode */
A68_INT  OKNAELA;  /* YIELD */
A68_234 * PKNAELA;  /* YIELD */
A68_234 ** QKNAELA;  /* YIELD */
A_PROC_ENTRY(extattrs);
{ 
KKNAELA_usage = (A_HEAP(A68_235 ));
LKNAELA.Contextno = WOMAELA_contextno;
LKNAELA.Closureno = 0;
LKNAELA.Libv_spec = ROMAELA_integer;
LKNAELA.Libv_body = 0;
LKNAELA.Import = A68_FALSE;
LKNAELA.Export = A68_FALSE;
(*KKNAELA_usage) = LKNAELA;
 /* line 842: */
 /* line 843: */
MKNAELA.Sort = OKAATRN_outerdec;
MKNAELA.Attrname = TOMAELA_identifier;
MKNAELA.Value = A_UNITE(NKNAELA,mode5,5,(&ZHAATRN_attrnull));
MKNAELA.Usage = KKNAELA_usage;
OKNAELA = (*(&(MPMAELA_instack->In))) ;
PKNAELA = A_HEAP(A68_234 ) ;
(*PKNAELA) = MKNAELA ;
QKNAELA = (&A_VINDEX(SQMAELA_attrs,OKNAELA)) ;
(*QKNAELA) = PKNAELA;
 /* line 844: */
 /* line 845: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(extattrs);
return;
} 
#undef NL

A68_VOID  RKNAELA_extints(void)
{ 
A68_235 * SKNAELA_usage;
A68_235  TKNAELA;  /* collateral clause result */
A68_250  UKNAELA;  /* collateral clause result */
A68_228  VKNAELA;  /* OPERATORS - mode -> union mode */
A68_251  WKNAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XKNAELA;  /* YIELD */
A68_250 * YKNAELA;  /* YIELD */
A68_250 ** ZKNAELA;  /* YIELD */
A_PROC_ENTRY(extints);
{ 
SKNAELA_usage = (A_HEAP(A68_235 ));
TKNAELA.Contextno = WOMAELA_contextno;
TKNAELA.Closureno = 0;
TKNAELA.Libv_spec = ROMAELA_integer;
TKNAELA.Libv_body = 0;
TKNAELA.Import = A68_FALSE;
TKNAELA.Export = A68_FALSE;
(*SKNAELA_usage) = TKNAELA;
 /* line 849: */
 /* line 850: */
UKNAELA.Sort = OKAATRN_outerdec;
UKNAELA.Intname = TOMAELA_identifier;
UKNAELA.Attr = A_UNITE(VKNAELA,mode5,5,(&ZHAATRN_attrnull));
UKNAELA.Value = A_UNITE(WKNAELA,mode10,10,(&BIAATRN_fnull));
UKNAELA.Usage = SKNAELA_usage;
XKNAELA = (*(&(MPMAELA_instack->In))) ;
YKNAELA = A_HEAP(A68_250 ) ;
(*YKNAELA) = UKNAELA ;
ZKNAELA = (&A_VINDEX(QQMAELA_ints,XKNAELA)) ;
(*ZKNAELA) = YKNAELA;
 /* line 851: */
 /* line 852: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(extints);
return;
} 
#undef NL

A68_VOID  ALNAELA_extctypes(void)
{ 
A68_235 * BLNAELA_usage;
A68_235  CLNAELA;  /* collateral clause result */
A68_274  DLNAELA;  /* collateral clause result */
A68_228  ELNAELA;  /* OPERATORS - mode -> union mode */
A68_253  FLNAELA;  /* OPERATORS - mode -> union mode */
A68_275  GLNAELA;  /* OPERATORS - mode -> union mode */
A68_258 * HLNAELA;  /* YIELD */
A68_INT  ILNAELA;  /* YIELD */
A68_274 * JLNAELA;  /* YIELD */
A68_274 ** KLNAELA;  /* YIELD */
A_PROC_ENTRY(extctypes);
{ 
BLNAELA_usage = (A_HEAP(A68_235 ));
CLNAELA.Contextno = WOMAELA_contextno;
CLNAELA.Closureno = 0;
CLNAELA.Libv_spec = ROMAELA_integer;
CLNAELA.Libv_body = 0;
CLNAELA.Import = A68_FALSE;
CLNAELA.Export = A68_FALSE;
(*BLNAELA_usage) = CLNAELA;
 /* line 856: */
 /* line 857: */
DLNAELA.Sort = OKAATRN_outerdec;
DLNAELA.Constname = TOMAELA_identifier;
DLNAELA.Attr = A_UNITE(ELNAELA,mode5,5,(&ZHAATRN_attrnull));
HLNAELA = HGAATRN_makectype(A_UNITE(FLNAELA,mode9,9,(&DIAATRN_tnull))) ;
DLNAELA.Value = A_UNITE(GLNAELA,mode7,7,HLNAELA);
DLNAELA.Usage = BLNAELA_usage;
ILNAELA = (*(&(MPMAELA_instack->In))) ;
JLNAELA = A_HEAP(A68_274 ) ;
(*JLNAELA) = DLNAELA ;
KLNAELA = (&A_VINDEX(RQMAELA_consts,ILNAELA)) ;
(*KLNAELA) = JLNAELA;
 /* line 858: */
 /* line 859: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(extctypes);
return;
} 
#undef NL

A68_VOID  LLNAELA_extfns(void)
{ 
A68_BOOL  MLNAELA_import;
A68_INT  NLNAELA_vnno;
A68_235  OLNAELA;  /* collateral clause result */
A68_235 * PLNAELA;  /* YIELD */
A68_235 ** QLNAELA;  /* YIELD */
A_PROC_ENTRY(extfns);
{ 
MLNAELA_import = (ROMAELA_integer==1);
 /* line 864: */
NLNAELA_vnno = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 865: */
OLNAELA.Contextno = WOMAELA_contextno;
OLNAELA.Closureno = 0;
OLNAELA.Libv_spec = NLNAELA_vnno;
OLNAELA.Libv_body = 0;
OLNAELA.Import = MLNAELA_import;
 /* line 866: */
OLNAELA.Export = A68_FALSE;
PLNAELA = A_HEAP(A68_235 ) ;
(*PLNAELA) = OLNAELA ;
QLNAELA = (&(MUMAELA_fndec->Usage)) ;
(*QLNAELA) = PLNAELA;
} 
A_PROC_EXIT(extfns);
return;
} 
#undef NL

A68_VOID  RLNAELA_fnstartp(void)
{ 
A_PROC_ENTRY(fnstartp);
{ 
QUMAELA_setup_fnstrstack();
 /* line 870: */
 /* line 871: */
DVMAELA_default();
} 
A_PROC_EXIT(fnstartp);
return;
} 
#undef NL

A68_VOID  SLNAELA_fnendp(void)
{ 
A68_INT  TLNAELA_fnno;
A68_351 ** ULNAELA;  /* YIELD */
A68_336  VLNAELA;  /* OPERATORS - mode -> union mode */
A68_306  WLNAELA;  /* YIELD */
A_PROC_ENTRY(fnendp);
{ 
TLNAELA_fnno = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 875: */
ULNAELA = (&A_VINDEX(PQMAELA_fns,TLNAELA_fnno)) ;
(*ULNAELA) = MUMAELA_fndec;
 /* line 876: */
WLNAELA = (*LHAATRN_makefnname(TLNAELA_fnno)) ;
LTMAELA_declaration = A_UNITE(VLNAELA,mode5,5,WLNAELA);
 /* line 877: */
 /* line 878: */
BVMAELA_reset_fnstrstack();
} 
A_PROC_EXIT(fnendp);
return;
} 
#undef NL

A68_VOID  XLNAELA_fndecl(void)
{ 
A68_347 * YLNAELA;  /* YIELD */
A_PROC_ENTRY(fndecl);
YLNAELA = (&(MUMAELA_fndec->Fnbody)) ;
(*YLNAELA) = RTMAELA_body;
A_PROC_EXIT(fndecl);
return;
} 
#undef NL

A68_VOID  ZLNAELA_usagep(void)
{ 
A68_INT * AMNAELA;  /* YIELD */
A_PROC_ENTRY(usagep);
 /* line 886: */
if ( ((*(&(MUMAELA_fndec->Usage)))!=CBAATRN_nilusage) )
{ 
 /* line 887: */
AMNAELA = (&((*(&(MUMAELA_fndec->Usage)))->Libv_body)) ;
(*AMNAELA) = ROMAELA_integer;
} 
A_PROC_EXIT(usagep);
return;
} 
#undef NL

A68_VOID  BMNAELA_fnspecinput(void)
{ 
A68_316 ** CMNAELA;  /* YIELD */
A_PROC_ENTRY(fnspecinput);
CMNAELA = (&(MUMAELA_fndec->Inputs)) ;
(*CMNAELA) = LUMAELA_names;
A_PROC_EXIT(fnspecinput);
return;
} 
#undef NL

A68_VOID  DMNAELA_fnspecoutput(void)
{ 
A68_316 ** EMNAELA;  /* YIELD */
A_PROC_ENTRY(fnspecoutput);
EMNAELA = (&(MUMAELA_fndec->Outputs)) ;
(*EMNAELA) = LUMAELA_names;
A_PROC_EXIT(fnspecoutput);
return;
} 
#undef NL

A68_VOID  FMNAELA_spec1(void)
{ 
A_PROC_ENTRY(spec1);
HUMAELA_specsort = CNMAELA_kfn_spec;
A_PROC_EXIT(spec1);
return;
} 
#undef NL

A68_VOID  GMNAELA_spec2(void)
{ 
A_PROC_ENTRY(spec2);
HUMAELA_specsort = DNMAELA_body_spec;
A_PROC_EXIT(spec2);
return;
} 
#undef NL

A68_VOID  HMNAELA_spec3(void)
{ 
A_PROC_ENTRY(spec3);
HUMAELA_specsort = ENMAELA_ext_spec;
A_PROC_EXIT(spec3);
return;
} 
#undef NL

A68_VOID  IMNAELA_fnspec1(void)
{ 
A68_BOOL  JMNAELA_macro;
A68_INT  KMNAELA_sort;
A68_BOOL  LMNAELA;  /* optbool result */
A68_BOOL  MMNAELA_use_inds;
A68_INT  NMNAELA;  /* clause result */
A68_INT  OMNAELA_fnno;
A68_430 * PMNAELA_inds;
A68_454  RMNAELA_generator;   /* proc value of non-global proc */
A68_446  WMNAELA;  /* clause result */
A68_446  XMNAELA;  /* avoid structure result */
A68_455  ZMNAELA_generator;   /* proc value of non-global proc */
A68_353  ENNAELA;  /* clause result */
A68_353  FNNAELA;  /* avoid structure result */
A68_353  GNNAELA;  /* OPERATORS - nil -> mode */
A68_353  HNNAELA_nametypes;
A68_351  INNAELA;  /* collateral clause result */
A68_228  JNNAELA;  /* OPERATORS - mode -> union mode */
A68_347  KNNAELA;  /* OPERATORS - mode -> union mode */
A68_351 * LNNAELA;  /* clause result */
A68_351 * MNNAELA;  /* YIELD */
A68_INT  NNNAELA;  /* YIELD */
A_PROC_ENTRY(fnspec1);
{ 
JMNAELA_macro = (ROMAELA_integer==1);
 /* line 906: */
KMNAELA_sort = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 907: */
LMNAELA = (HUMAELA_specsort==DNMAELA_body_spec);
if ( LMNAELA )
{LMNAELA = (KMNAELA_sort==OKAATRN_outerdec);
}
MMNAELA_use_inds = !LMNAELA;
 /* line 909: */
if ( (HUMAELA_specsort==CNMAELA_kfn_spec) )
{ 
NMNAELA = 1;
} 
else
{ 
NMNAELA = (*(&(MPMAELA_instack->In)));
} 
OMNAELA_fnno = NMNAELA;
 /* line 911: */
PMNAELA_inds = (*(&A_VINDEX(TQMAELA_inds,OMNAELA_fnno)));
 /* line 912: */
 /* line 913: */
if ( MMNAELA_use_inds )
{ 
A_CLOSURE( RMNAELA_generator, SMNAELA_generator, TMNAELA_generator );
(( TMNAELA_generator * ) ( RMNAELA_generator.nonlocals )) -> PMNAELA_inds = PMNAELA_inds;
 /* line 915: */
A_CALLPROC(RMNAELA_generator,(A68_FALSE, &XMNAELA),(A68_FALSE, &XMNAELA,(RMNAELA_generator).nonlocals));
WMNAELA = XMNAELA;
} 
else
{ 
WMNAELA = IUMAELA_stack;
} 
IUMAELA_stack = WMNAELA;
 /* line 916: */
JUMAELA_stackind = 0;
 /* line 917: */
 /* line 918: */
 /* line 919: */
if ( MMNAELA_use_inds )
{ 
A_CLOSURE( ZMNAELA_generator, ANNAELA_generator, BNNAELA_generator );
(( BNNAELA_generator * ) ( ZMNAELA_generator.nonlocals )) -> PMNAELA_inds = PMNAELA_inds;
 /* line 921: */
A_CALLPROC(ZMNAELA_generator,(A68_FALSE, &FNNAELA),(A68_FALSE, &FNNAELA,(ZMNAELA_generator).nonlocals));
ENNAELA = FNNAELA;
} 
else
{ 
ENNAELA = A_VVAC(GNNAELA);
} 
HNNAELA_nametypes = ENNAELA;
 /* line 922: */
 /* line 923: */
 /* line 924: */
if ( MMNAELA_use_inds )
{ 
 /* line 925: */
INNAELA.Sort = KMNAELA_sort;
INNAELA.Macro = JMNAELA_macro;
 /* line 926: */
INNAELA.Fnname = TOMAELA_identifier;
if ( JMNAELA_macro )
{ 
INNAELA.Macspecs = GCAATRN_nullmacspecs;
} 
else
{ 
INNAELA.Macspecs = FBAATRN_nilmacspecs;
} 
 /* line 927: */
INNAELA.Attr = A_UNITE(JNNAELA,mode5,5,(&ZHAATRN_attrnull));
INNAELA.Inputs = NAAATRN_nilnames;
INNAELA.Outputs = NAAATRN_nilnames;
INNAELA.Nametypes = HNNAELA_nametypes;
 /* line 928: */
INNAELA.Fnbody = A_UNITE(KNNAELA,mode12,12,(&LIAATRN_bodynull));
 /* line 929: */
INNAELA.Usage = CBAATRN_nilusage;
MNNAELA = A_HEAP(A68_351 ) ;
(*MNNAELA) = INNAELA ;
LNNAELA = MNNAELA;
} 
else
{ 
 /* line 930: */
 /* line 931: */
NNNAELA = 1 ;
LNNAELA = (*(&A_VINDEX(PQMAELA_fns,NNNAELA)));
} 
MUMAELA_fndec = LNNAELA;
} 
A_PROC_EXIT(fnspec1);
return;
} 
#undef NL

A68_VOID  ONNAELA_fnspec2(void)
{ 
A68_228 * PNNAELA;  /* YIELD */
A_PROC_ENTRY(fnspec2);
PNNAELA = (&(MUMAELA_fndec->Attr)) ;
(*PNNAELA) = XPMAELA_attribute;
A_PROC_EXIT(fnspec2);
return;
} 
#undef NL

A68_VOID  QNNAELA_macspecp(void)
{ 
A68_INT  RNNAELA;  /* clause result */
A68_INT  SNNAELA_sort;
A68_349  TNNAELA;  /* collateral clause result */
A68_352  UNNAELA;  /* OPERATORS - simple index */
A68_349 * VNNAELA;  /* YIELD */
A_PROC_ENTRY(macspecp);
{ 
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
RNNAELA = AJAATRN_explicitmacpar;
} 
else
{ 
RNNAELA = BJAATRN_implicitmacpar;
} 
SNNAELA_sort = RNNAELA;
 /* line 938: */
BQMAELA_unstackin();
 /* line 939: */
TNNAELA.Sort = SNNAELA_sort;
TNNAELA.Spec = LTMAELA_declaration;
UNNAELA = (*(&(MUMAELA_fndec->Macspecs))) ;
VNNAELA = (&A_VINDEX(UNNAELA,OTMAELA_macnum)) ;
(*VNNAELA) = TNNAELA;
 /* line 940: */
 /* line 941: */
OTMAELA_macnum+=1;
} 
A_PROC_EXIT(macspecp);
return;
} 
#undef NL

A68_VOID  WNNAELA_arith(void)
{ 
A68_347  XNNAELA;  /* OPERATORS - mode -> union mode */
A68_338 * YNNAELA;  /* YIELD */
A_PROC_ENTRY(arith);
YNNAELA = QHAATRN_makearith(ZPMAELA_formula) ;
RTMAELA_body = A_UNITE(XNNAELA,mode3,3,YNNAELA);
A_PROC_EXIT(arith);
return;
} 
#undef NL

A68_VOID  ZNNAELA_biop1(void)
{ 
A68_315  AONAELA;  /* collateral clause result */
A68_317  FONAELA;  /* avoid structure result */
A68_228  GONAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(biop1);
{ 
 /* line 947: */
AONAELA.Fnno = (-1);
if ( (ROMAELA_integer!=(-1)) )
{ 
CONAELA_generator( A68_FALSE, &FONAELA );
AONAELA.Macparams = FONAELA;
} 
else
{ 
 /* line 948: */
AONAELA.Macparams = ABAATRN_nilmacparams;
} 
AONAELA.Attr = A_UNITE(GONAELA,mode5,5,(&ZHAATRN_attrnull));
NUMAELA_instance = AONAELA;
 /* line 949: */
 /* line 950: */
KUMAELA_iparams = 0;
} 
A_PROC_EXIT(biop1);
return;
} 
#undef NL

A68_VOID  HONAELA_biop(void)
{ 
A68_337  IONAELA;  /* collateral clause result */
A68_337 * JONAELA;  /* YIELD */
A68_347  KONAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(biop);
{ 
IONAELA.Biop = A68_TRUE;
IONAELA.Name = (*(&(NPMAELA_inidstack->Inid)));
IONAELA.Macparams = (*(&((&NUMAELA_instance)->Macparams)));
JONAELA = A_HEAP(A68_337 ) ;
(*JONAELA) = IONAELA ;
RTMAELA_body = A_UNITE(KONAELA,mode2,2,JONAELA);
 /* line 954: */
 /* line 955: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(biop);
return;
} 
#undef NL

A68_VOID  LONAELA_alien(void)
{ 
A68_337  MONAELA;  /* collateral clause result */
A68_337 * NONAELA;  /* YIELD */
A68_347  OONAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(alien);
{ 
MONAELA.Biop = A68_FALSE;
MONAELA.Name = (*(&(NPMAELA_inidstack->Inid)));
MONAELA.Macparams = (*(&((&NUMAELA_instance)->Macparams)));
NONAELA = A_HEAP(A68_337 ) ;
(*NONAELA) = MONAELA ;
RTMAELA_body = A_UNITE(OONAELA,mode2,2,NONAELA);
 /* line 959: */
 /* line 960: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(alien);
return;
} 
#undef NL

A68_VOID  PONAELA_idelay(void)
{ 
A68_237  QONAELA_delaytime;
A68_BOOL  RONAELA_check;
A68_342  SONAELA;  /* collateral clause result */
A68_342 * TONAELA;  /* YIELD */
A68_347  UONAELA;  /* OPERATORS - mode -> union mode */
A68_346  VONAELA;  /* collateral clause result */
A68_346 * WONAELA;  /* YIELD */
A68_347  XONAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(idelay);
{ 
QONAELA_delaytime = (*(&(QPMAELA_formulastack->Formula)));
 /* line 964: */
RONAELA_check = ((*(&(MPMAELA_instack->In)))==1);
BQMAELA_unstackin();
 /* line 965: */
SONAELA.Init = AQMAELA_const;
SONAELA.Delaytime = QONAELA_delaytime;
TONAELA = A_HEAP(A68_342 ) ;
(*TONAELA) = SONAELA ;
RTMAELA_body = A_UNITE(UONAELA,mode7,7,TONAELA);
 /* line 966: */
if ( RONAELA_check )
{ 
VONAELA.Joincheck = OAAATRN_nilints;
VONAELA.Check = A68_TRUE;
VONAELA.Fnbody = RTMAELA_body;
WONAELA = A_HEAP(A68_346 ) ;
(*WONAELA) = VONAELA ;
RTMAELA_body = A_UNITE(XONAELA,mode11,11,WONAELA);
} 
 /* line 967: */
 /* line 968: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(idelay);
return;
} 
#undef NL

A68_VOID  YONAELA_adelay(void)
{ 
A68_275  ZONAELA_c;
A68_237  APNAELA_f;
A68_BOOL  BPNAELA_check;
A68_341  CPNAELA;  /* collateral clause result */
A68_341 * DPNAELA;  /* YIELD */
A68_347  EPNAELA;  /* OPERATORS - mode -> union mode */
A68_346  FPNAELA;  /* collateral clause result */
A68_346 * GPNAELA;  /* YIELD */
A68_347  HPNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(adelay);
{ 
ZONAELA_c = (*(&(RPMAELA_conststack->Const)));
FQMAELA_unstackconst();
 /* line 972: */
APNAELA_f = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 973: */
BPNAELA_check = ((*(&(MPMAELA_instack->In)))==1);
BQMAELA_unstackin();
 /* line 974: */
 /* line 975: */
CPNAELA.Sort = (*(&(MPMAELA_instack->In)));
CPNAELA.Init = (*(&(RPMAELA_conststack->Const)));
CPNAELA.Ambigtime = APNAELA_f;
CPNAELA.Ambig = ZONAELA_c;
CPNAELA.Delaytime = ZPMAELA_formula;
DPNAELA = A_HEAP(A68_341 ) ;
(*DPNAELA) = CPNAELA ;
RTMAELA_body = A_UNITE(EPNAELA,mode6,6,DPNAELA);
 /* line 976: */
if ( BPNAELA_check )
{ 
FPNAELA.Joincheck = OAAATRN_nilints;
FPNAELA.Check = A68_TRUE;
FPNAELA.Fnbody = RTMAELA_body;
GPNAELA = A_HEAP(A68_346 ) ;
(*GPNAELA) = FPNAELA ;
RTMAELA_body = A_UNITE(HPNAELA,mode11,11,GPNAELA);
} 
 /* line 977: */
FQMAELA_unstackconst();
 /* line 978: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(adelay);
return;
} 
#undef NL

A68_VOID  IPNAELA_sample(void)
{ 
A68_BOOL  JPNAELA_check;
A68_344  KPNAELA;  /* collateral clause result */
A68_344 * LPNAELA;  /* YIELD */
A68_347  MPNAELA;  /* OPERATORS - mode -> union mode */
A68_346  NPNAELA;  /* collateral clause result */
A68_346 * OPNAELA;  /* YIELD */
A68_347  PPNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sample);
{ 
JPNAELA_check = ((*(&(MPMAELA_instack->In)))==1);
BQMAELA_unstackin();
 /* line 982: */
KPNAELA.Sort = (*(&(MPMAELA_instack->In)));
 /* line 983: */
KPNAELA.Interval = (*(&(QPMAELA_formulastack->Formula)));
KPNAELA.Init = (*(&(RPMAELA_conststack->Const)));
KPNAELA.Skew = ZPMAELA_formula;
LPNAELA = A_HEAP(A68_344 ) ;
(*LPNAELA) = KPNAELA ;
RTMAELA_body = A_UNITE(MPNAELA,mode9,9,LPNAELA);
 /* line 984: */
if ( JPNAELA_check )
{ 
NPNAELA.Joincheck = OAAATRN_nilints;
NPNAELA.Check = A68_TRUE;
NPNAELA.Fnbody = RTMAELA_body;
OPNAELA = A_HEAP(A68_346 ) ;
(*OPNAELA) = NPNAELA ;
RTMAELA_body = A_UNITE(PPNAELA,mode11,11,OPNAELA);
} 
 /* line 985: */
FQMAELA_unstackconst();
BQMAELA_unstackin();
 /* line 986: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(sample);
return;
} 
#undef NL

A68_VOID  QPNAELA_faster(void)
{ 
A_PROC_ENTRY(faster);
MTMAELA_fast = A68_TRUE;
A_PROC_EXIT(faster);
return;
} 
#undef NL

A68_VOID  RPNAELA_slower(void)
{ 
A_PROC_ENTRY(slower);
MTMAELA_fast = A68_FALSE;
A_PROC_EXIT(slower);
return;
} 
#undef NL

A68_VOID  SPNAELA_timescale(void)
{ 
A68_INT  TPNAELA_sort;
A68_BOOL  UPNAELA_check;
A68_315  VPNAELA_inst;
A68_228 * WPNAELA;  /* YIELD */
A68_345  XPNAELA;  /* collateral clause result */
A68_345 * YPNAELA;  /* YIELD */
A68_347  ZPNAELA;  /* OPERATORS - mode -> union mode */
A68_346  AQNAELA;  /* collateral clause result */
A68_346 * BQNAELA;  /* YIELD */
A68_347  CQNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(timescale);
{ 
TPNAELA_sort = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 994: */
UPNAELA_check = ((*(&(MPMAELA_instack->In)))==1);
BQMAELA_unstackin();
 /* line 995: */
VPNAELA_inst = NUMAELA_instance;
 /* line 996: */
WPNAELA = (&((&VPNAELA_inst)->Attr)) ;
(*WPNAELA) = XPMAELA_attribute;
 /* line 997: */
XPNAELA.Faster = MTMAELA_fast;
XPNAELA.Sort = TPNAELA_sort;
XPNAELA.Inst = VPNAELA_inst;
 /* line 998: */
XPNAELA.Scale = (*(&(QPMAELA_formulastack->Formula)));
XPNAELA.Init = (*(&(RPMAELA_conststack->Const)));
XPNAELA.Skew = ZPMAELA_formula;
YPNAELA = A_HEAP(A68_345 ) ;
(*YPNAELA) = XPNAELA ;
RTMAELA_body = A_UNITE(ZPNAELA,mode10,10,YPNAELA);
 /* line 999: */
if ( UPNAELA_check )
{ 
AQNAELA.Joincheck = OAAATRN_nilints;
AQNAELA.Check = A68_TRUE;
AQNAELA.Fnbody = RTMAELA_body;
BQNAELA = A_HEAP(A68_346 ) ;
(*BQNAELA) = AQNAELA ;
RTMAELA_body = A_UNITE(CQNAELA,mode11,11,BQNAELA);
} 
 /* line 1000: */
DQMAELA_unstackformula();
 /* line 1001: */
FQMAELA_unstackconst();
} 
A_PROC_EXIT(timescale);
return;
} 
#undef NL

A68_VOID  DQNAELA_ramp(void)
{ 
A68_347  EQNAELA;  /* OPERATORS - mode -> union mode */
A68_343 * FQNAELA;  /* YIELD */
A68_346  GQNAELA;  /* collateral clause result */
A68_346 * HQNAELA;  /* YIELD */
A68_347  IQNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ramp);
{ 
FQNAELA = VHAATRN_makeram((*(&(RPMAELA_conststack->Const)))) ;
RTMAELA_body = A_UNITE(EQNAELA,mode8,8,FQNAELA);
 /* line 1005: */
 /* line 1006: */
if ( ((*(&(MPMAELA_instack->In)))==1) )
{ 
GQNAELA.Joincheck = OAAATRN_nilints;
GQNAELA.Check = A68_TRUE;
 /* line 1007: */
GQNAELA.Fnbody = RTMAELA_body;
HQNAELA = A_HEAP(A68_346 ) ;
(*HQNAELA) = GQNAELA ;
RTMAELA_body = A_UNITE(IQNAELA,mode11,11,HQNAELA);
} 
 /* line 1008: */
FQMAELA_unstackconst();
 /* line 1009: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(ramp);
return;
} 
#undef NL

A68_VOID  JQNAELA_reformpr(void)
{ 
A68_346  KQNAELA;  /* collateral clause result */
A68_347  LQNAELA;  /* OPERATORS - mode -> union mode */
A68_347  MQNAELA;  /* clause result */
A68_346 * NQNAELA;  /* YIELD */
A68_347  OQNAELA;  /* OPERATORS - mode -> union mode */
A68_347  PQNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(reformpr);
 /* line 1013: */
if ( (ROMAELA_integer==1) )
{ 
KQNAELA.Joincheck = OAAATRN_nilints;
KQNAELA.Check = A68_TRUE;
 /* line 1014: */
KQNAELA.Fnbody = A_UNITE(LQNAELA,mode4,4,(&NIAATRN_reform));
 /* line 1015: */
NQNAELA = A_HEAP(A68_346 ) ;
(*NQNAELA) = KQNAELA ;
MQNAELA = A_UNITE(OQNAELA,mode11,11,NQNAELA);
} 
else
{ 
MQNAELA = A_UNITE(PQNAELA,mode4,4,(&NIAATRN_reform));
} 
RTMAELA_body = MQNAELA;
A_PROC_EXIT(reformpr);
return;
} 
#undef NL

A68_VOID  QQNAELA_imported(void)
{ 
A68_347  RQNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(imported);
RTMAELA_body = A_UNITE(RQNAELA,mode5,5,TAAATRN_nilimport);
A_PROC_EXIT(imported);
return;
} 
#undef NL

A68_VOID  SQNAELA_unit(void)
{ 
A68_347  TQNAELA;  /* OPERATORS - mode -> union mode */
A68_320 * UQNAELA;  /* YIELD */
A_PROC_ENTRY(unit);
UQNAELA = WGAATRN_makeunittag((*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)))) ;
RTMAELA_body = A_UNITE(TQNAELA,mode1,1,UQNAELA);
A_PROC_EXIT(unit);
return;
} 
#undef NL

A68_VOID  VQNAELA_vvarmultp(void)
{ 
A68_296  WQNAELA;  /* collateral clause result */
A68_296 * XQNAELA;  /* YIELD */
A68_275  YQNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * ZQNAELA;  /* YIELD */
A_PROC_ENTRY(vvarmultp);
{ 
WQNAELA.Repl = (*(&(QPMAELA_formulastack->Formula)));
WQNAELA.Body = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
XQNAELA = A_HEAP(A68_296 ) ;
(*XQNAELA) = WQNAELA ;
ZQNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*ZQNAELA) = A_UNITE(YQNAELA,mode27,27,XQNAELA);
 /* line 1024: */
 /* line 1025: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(vvarmultp);
return;
} 
#undef NL

A68_VOID  ARNAELA_vconst(void)
{ 
A68_INT  BRNAELA;  /* YIELD */
A68_275  CRNAELA;  /* OPERATORS - mode -> union mode */
A68_269 * DRNAELA;  /* YIELD */
A68_275 * ERNAELA;  /* YIELD */
A_PROC_ENTRY(vconst);
BRNAELA = JUMAELA_stackind+=1 ;
DRNAELA = CGAATRN_makecname(ROMAELA_integer) ;
ERNAELA = (&A_VINDEX(IUMAELA_stack,BRNAELA)) ;
(*ERNAELA) = A_UNITE(CRNAELA,mode1,1,DRNAELA);
A_PROC_EXIT(vconst);
return;
} 
#undef NL

A68_VOID  FRNAELA_vconc(void)
{ 
A68_291  GRNAELA;  /* collateral clause result */
A68_INT  HRNAELA;  /* YIELD */
A68_INT  IRNAELA;  /* YIELD */
A68_291 * JRNAELA;  /* YIELD */
A68_275  KRNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * LRNAELA;  /* YIELD */
A_PROC_ENTRY(vconc);
{ 
 /* line 1031: */
GRNAELA.String = ((*(&(MPMAELA_instack->In)))==1);
GRNAELA.Sort = ROMAELA_integer;
 /* line 1032: */
HRNAELA = (JUMAELA_stackind-1) ;
GRNAELA.Left = (*(&A_VINDEX(IUMAELA_stack,HRNAELA)));
GRNAELA.Right = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
IRNAELA = (JUMAELA_stackind-1) ;
JRNAELA = A_HEAP(A68_291 ) ;
(*JRNAELA) = GRNAELA ;
LRNAELA = (&A_VINDEX(IUMAELA_stack,IRNAELA)) ;
(*LRNAELA) = A_UNITE(KRNAELA,mode22,22,JRNAELA);
 /* line 1033: */
BQMAELA_unstackin();
 /* line 1034: */
 /* line 1035: */
JUMAELA_stackind-=1;
} 
A_PROC_EXIT(vconc);
return;
} 
#undef NL

A68_VOID  MRNAELA_vprim(void)
{ 
A68_270  NRNAELA;  /* collateral clause result */
A68_INT  ORNAELA;  /* YIELD */
A68_270 * PRNAELA;  /* YIELD */
A68_275  QRNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * RRNAELA;  /* YIELD */
A_PROC_ENTRY(vprim);
{ 
NRNAELA.Typeno = (*(&(MPMAELA_instack->In)));
NRNAELA.Primno = ROMAELA_integer;
ORNAELA = JUMAELA_stackind+=1 ;
PRNAELA = A_HEAP(A68_270 ) ;
(*PRNAELA) = NRNAELA ;
RRNAELA = (&A_VINDEX(IUMAELA_stack,ORNAELA)) ;
(*RRNAELA) = A_UNITE(QRNAELA,mode2,2,PRNAELA);
 /* line 1039: */
 /* line 1040: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vprim);
return;
} 
#undef NL

A68_VOID  SRNAELA_vprimi(void)
{ 
A68_271  TRNAELA;  /* collateral clause result */
A68_INT  URNAELA;  /* YIELD */
A68_271 * VRNAELA;  /* YIELD */
A68_275  WRNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * XRNAELA;  /* YIELD */
A_PROC_ENTRY(vprimi);
{ 
TRNAELA.Typeno = (*(&(MPMAELA_instack->In)));
TRNAELA.Index = ZPMAELA_formula;
URNAELA = JUMAELA_stackind+=1 ;
VRNAELA = A_HEAP(A68_271 ) ;
(*VRNAELA) = TRNAELA ;
XRNAELA = (&A_VINDEX(IUMAELA_stack,URNAELA)) ;
(*XRNAELA) = A_UNITE(WRNAELA,mode3,3,VRNAELA);
 /* line 1044: */
 /* line 1045: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vprimi);
return;
} 
#undef NL

A68_VOID  YRNAELA_vprimc(void)
{ 
A68_INT  ZRNAELA;  /* YIELD */
A68_275  ASNAELA;  /* OPERATORS - mode -> union mode */
A68_269 * BSNAELA;  /* YIELD */
A68_275 * CSNAELA;  /* YIELD */
A_PROC_ENTRY(vprimc);
ZRNAELA = JUMAELA_stackind+=1 ;
BSNAELA = CGAATRN_makecname(ROMAELA_integer) ;
CSNAELA = (&A_VINDEX(IUMAELA_stack,ZRNAELA)) ;
(*CSNAELA) = A_UNITE(ASNAELA,mode1,1,BSNAELA);
A_PROC_EXIT(vprimc);
return;
} 
#undef NL

A68_VOID  DSNAELA_vname(void)
{ 
A68_280  ESNAELA;  /* collateral clause result */
A68_INT  FSNAELA;  /* YIELD */
A68_280 * GSNAELA;  /* YIELD */
A68_275  HSNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * ISNAELA;  /* YIELD */
A_PROC_ENTRY(vname);
{ 
ESNAELA.Sort = (*(&(MPMAELA_instack->In)));
ESNAELA.Nameno = ROMAELA_integer;
FSNAELA = JUMAELA_stackind+=1 ;
GSNAELA = A_HEAP(A68_280 ) ;
(*GSNAELA) = ESNAELA ;
ISNAELA = (&A_VINDEX(IUMAELA_stack,FSNAELA)) ;
(*ISNAELA) = A_UNITE(HSNAELA,mode11,11,GSNAELA);
 /* line 1051: */
 /* line 1052: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vname);
return;
} 
#undef NL

A68_VOID  JSNAELA_vtrim(void)
{ 
A68_252  KSNAELA;  /* collateral clause result */
A68_252  LSNAELA_rg;
A68_286  MSNAELA;  /* collateral clause result */
A68_286 * NSNAELA;  /* YIELD */
A68_275  OSNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * PSNAELA;  /* YIELD */
A_PROC_ENTRY(vtrim);
{ 
KSNAELA.Lwb = (*(&(QPMAELA_formulastack->Formula)));
KSNAELA.Upb = ZPMAELA_formula;
LSNAELA_rg = KSNAELA;
 /* line 1056: */
DQMAELA_unstackformula();
 /* line 1057: */
MSNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
 /* line 1058: */
MSNAELA.Range = LSNAELA_rg;
NSNAELA = A_HEAP(A68_286 ) ;
(*NSNAELA) = MSNAELA ;
PSNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*PSNAELA) = A_UNITE(OSNAELA,mode17,17,NSNAELA);
} 
A_PROC_EXIT(vtrim);
return;
} 
#undef NL

A68_VOID  QSNAELA_vindex(void)
{ 
A68_285  RSNAELA;  /* collateral clause result */
A68_285 * SSNAELA;  /* YIELD */
A68_275  TSNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * USNAELA;  /* YIELD */
A_PROC_ENTRY(vindex);
RSNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
RSNAELA.Index = ZPMAELA_formula;
SSNAELA = A_HEAP(A68_285 ) ;
(*SSNAELA) = RSNAELA ;
USNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*USNAELA) = A_UNITE(TSNAELA,mode16,16,SSNAELA);
A_PROC_EXIT(vindex);
return;
} 
#undef NL

A68_VOID  VSNAELA_vtermindex(void)
{ 
A68_INT  WSNAELA_fnno;
A68_INT  XSNAELA_nameno;
A68_284  YSNAELA;  /* collateral clause result */
A68_284 * ZSNAELA;  /* YIELD */
A68_275  ATNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * BTNAELA;  /* YIELD */
A_PROC_ENTRY(vtermindex);
{ 
WSNAELA_fnno = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 1065: */
XSNAELA_nameno = ROMAELA_integer;
 /* line 1066: */
YSNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
YSNAELA.Fnno = WSNAELA_fnno;
 /* line 1067: */
YSNAELA.Nameno = XSNAELA_nameno;
ZSNAELA = A_HEAP(A68_284 ) ;
(*ZSNAELA) = YSNAELA ;
BTNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*BTNAELA) = A_UNITE(ATNAELA,mode15,15,ZSNAELA);
} 
A_PROC_EXIT(vtermindex);
return;
} 
#undef NL

A68_VOID  CTNAELA_vcallm(void)
{ 
A68_292  DTNAELA;  /* collateral clause result */
A68_292 * ETNAELA;  /* YIELD */
A68_275  FTNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * GTNAELA;  /* YIELD */
A_PROC_ENTRY(vcallm);
DTNAELA.Inst = NUMAELA_instance;
DTNAELA.Right = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
ETNAELA = A_HEAP(A68_292 ) ;
(*ETNAELA) = DTNAELA ;
GTNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*GTNAELA) = A_UNITE(FTNAELA,mode23,23,ETNAELA);
A_PROC_EXIT(vcallm);
return;
} 
#undef NL

A68_VOID  HTNAELA_vcalld(void)
{ 
A68_293  ITNAELA;  /* collateral clause result */
A68_INT  JTNAELA;  /* YIELD */
A68_293 * KTNAELA;  /* YIELD */
A68_275  LTNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * MTNAELA;  /* YIELD */
A_PROC_ENTRY(vcalld);
{ 
JUMAELA_stackind-=1;
 /* line 1074: */
 /* line 1075: */
ITNAELA.Left = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
ITNAELA.Inst = NUMAELA_instance;
 /* line 1076: */
JTNAELA = (JUMAELA_stackind+1) ;
ITNAELA.Right = (*(&A_VINDEX(IUMAELA_stack,JTNAELA)));
KTNAELA = A_HEAP(A68_293 ) ;
(*KTNAELA) = ITNAELA ;
MTNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*MTNAELA) = A_UNITE(LTNAELA,mode24,24,KTNAELA);
} 
A_PROC_EXIT(vcalld);
return;
} 
#undef NL

A68_VOID  NTNAELA_vunn(void)
{ 
A68_282  OTNAELA;  /* collateral clause result */
A68_282 * PTNAELA;  /* YIELD */
A68_275  QTNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * RTNAELA;  /* YIELD */
A_PROC_ENTRY(vunn);
{ 
OTNAELA.Typeno = (*(&(MPMAELA_instack->In)));
OTNAELA.Altno = ROMAELA_integer;
OTNAELA.Assoc = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
PTNAELA = A_HEAP(A68_282 ) ;
(*PTNAELA) = OTNAELA ;
RTNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*RTNAELA) = A_UNITE(QTNAELA,mode13,13,PTNAELA);
 /* line 1080: */
 /* line 1081: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vunn);
return;
} 
#undef NL

A68_VOID  STNAELA_vsharp(void)
{ 
A68_283  TTNAELA;  /* collateral clause result */
A68_283 * UTNAELA;  /* YIELD */
A68_275  VTNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * WTNAELA;  /* YIELD */
A_PROC_ENTRY(vsharp);
{ 
 /* line 1085: */
TTNAELA.Extract = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
TTNAELA.Typeno = (*(&(MPMAELA_instack->In)));
TTNAELA.Altno = ROMAELA_integer;
UTNAELA = A_HEAP(A68_283 ) ;
(*UTNAELA) = TTNAELA ;
WTNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*WTNAELA) = A_UNITE(VTNAELA,mode14,14,UTNAELA);
 /* line 1086: */
 /* line 1087: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vsharp);
return;
} 
#undef NL

A68_VOID  XTNAELA_vrow(void)
{ 
A68_289  YTNAELA;  /* collateral clause result */
A68_289 * ZTNAELA;  /* YIELD */
A68_275  AUNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * BUNAELA;  /* YIELD */
A_PROC_ENTRY(vrow);
YTNAELA.Size = ZPMAELA_formula;
YTNAELA.Elem = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
ZTNAELA = A_HEAP(A68_289 ) ;
(*ZTNAELA) = YTNAELA ;
BUNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*BUNAELA) = A_UNITE(AUNAELA,mode20,20,ZTNAELA);
A_PROC_EXIT(vrow);
return;
} 
#undef NL

A68_VOID  CUNAELA_vcasestart(void)
{ 
A68_417  DUNAELA;  /* collateral clause result */
A68_417 * EUNAELA;  /* YIELD */
A_PROC_ENTRY(vcasestart);
DUNAELA.Choices = JAAATRN_niluchoices;
DUNAELA.Rest = EUMAELA_uchoicestack;
EUNAELA = A_HEAP(A68_417 ) ;
(*EUNAELA) = DUNAELA ;
EUMAELA_uchoicestack = EUNAELA;
A_PROC_EXIT(vcasestart);
return;
} 
#undef NL

A68_VOID  FUNAELA_vcase(void)
{ 
A68_335 * GUNAELA_res;
A68_335 * HUNAELA_ustack;
A68_335  IUNAELA;  /* collateral clause result */
A68_335 * JUNAELA;  /* YIELD */
A68_294  KUNAELA;  /* collateral clause result */
A68_294 * LUNAELA;  /* YIELD */
A68_275  MUNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * NUNAELA;  /* YIELD */
A_PROC_ENTRY(vcase);
{ 
GUNAELA_res = JAAATRN_niluchoices;
 /* line 1097: */
HUNAELA_ustack = (*(&(EUMAELA_uchoicestack->Choices)));
 /* line 1098: */
for ( ;; )
{ 
 /* line 1099: */
if ( !((HUNAELA_ustack!=JAAATRN_niluchoices)) ) break;
 /* line 1100: */
IUNAELA.Check = (*(&(HUNAELA_ustack->Check)));
IUNAELA.Sort = (*(&(HUNAELA_ustack->Sort)));
 /* line 1101: */
IUNAELA.Test = (*(&(HUNAELA_ustack->Test)));
IUNAELA.Output = (*(&(HUNAELA_ustack->Output)));
IUNAELA.Rest = GUNAELA_res;
JUNAELA = A_HEAP(A68_335 ) ;
(*JUNAELA) = IUNAELA ;
GUNAELA_res = JUNAELA;
 /* line 1102: */
 /* line 1103: */
HUNAELA_ustack = (*(&(HUNAELA_ustack->Rest)));
}
 /* line 1104: */
EUMAELA_uchoicestack = (*(&(EUMAELA_uchoicestack->Rest)));
 /* line 1105: */
KUNAELA.Input = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
 /* line 1106: */
KUNAELA.Choices = GUNAELA_res;
LUNAELA = A_HEAP(A68_294 ) ;
(*LUNAELA) = KUNAELA ;
NUNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*NUNAELA) = A_UNITE(MUNAELA,mode25,25,LUNAELA);
} 
A_PROC_EXIT(vcase);
return;
} 
#undef NL

A68_VOID  OUNAELA_vquery(void)
{ 
A68_INT  PUNAELA;  /* YIELD */
A68_275  QUNAELA;  /* OPERATORS - mode -> union mode */
A68_273 * RUNAELA;  /* YIELD */
A68_275 * SUNAELA;  /* YIELD */
A_PROC_ENTRY(vquery);
PUNAELA = JUMAELA_stackind+=1 ;
RUNAELA = MGAATRN_makecquery(YPMAELA_type) ;
SUNAELA = (&A_VINDEX(IUMAELA_stack,PUNAELA)) ;
(*SUNAELA) = A_UNITE(QUNAELA,mode4,4,RUNAELA);
A_PROC_EXIT(vquery);
return;
} 
#undef NL

A68_VOID  TUNAELA_vcoll(void)
{ 
A68_290 * UUNAELA_ust;
A68_INT  VUNAELA;  /* to part of loop */
A68_INT  WUNAELA;  /* loop control */
A68_290  XUNAELA;  /* collateral clause result */
A68_290 * YUNAELA;  /* YIELD */
A68_INT  ZUNAELA;  /* YIELD */
A68_275  AVNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * BVNAELA;  /* YIELD */
A_PROC_ENTRY(vcoll);
{ 
UUNAELA_ust = IAAATRN_nilustr;
 /* line 1112: */
 /* line 1113: */
VUNAELA = ROMAELA_integer;
for ( WUNAELA = 1;
WUNAELA <= VUNAELA;
WUNAELA += 1 )
{ 
XUNAELA.Elem = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
XUNAELA.Rest = UUNAELA_ust;
YUNAELA = A_HEAP(A68_290 ) ;
(*YUNAELA) = XUNAELA ;
UUNAELA_ust = YUNAELA;
 /* line 1114: */
 /* line 1115: */
JUMAELA_stackind-=1;
}
 /* line 1116: */
 /* line 1117: */
ZUNAELA = JUMAELA_stackind+=1 ;
BVNAELA = (&A_VINDEX(IUMAELA_stack,ZUNAELA)) ;
(*BVNAELA) = A_UNITE(AVNAELA,mode21,21,UUNAELA_ust);
} 
A_PROC_EXIT(vcoll);
return;
} 
#undef NL

A68_VOID  CVNAELA_vfip(void)
{ 
A68_295  DVNAELA;  /* collateral clause result */
A68_INT  EVNAELA;  /* YIELD */
A68_295 * FVNAELA;  /* YIELD */
A68_275  GVNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * HVNAELA;  /* YIELD */
A_PROC_ENTRY(vfip);
{ 
JUMAELA_stackind-=1;
 /* line 1121: */
 /* line 1122: */
DVNAELA.Cond = (*(&(QPMAELA_formulastack->Formula)));
DVNAELA.True = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
EVNAELA = (JUMAELA_stackind+1) ;
DVNAELA.False = (*(&A_VINDEX(IUMAELA_stack,EVNAELA)));
FVNAELA = A_HEAP(A68_295 ) ;
(*FVNAELA) = DVNAELA ;
HVNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*HVNAELA) = A_UNITE(GVNAELA,mode26,26,FVNAELA);
 /* line 1123: */
 /* line 1124: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(vfip);
return;
} 
#undef NL

A68_VOID  IVNAELA_vseqstart(void)
{ 
A68_422  JVNAELA;  /* collateral clause result */
A68_422 * KVNAELA;  /* YIELD */
A68_423  LVNAELA;  /* collateral clause result */
A68_423 * MVNAELA;  /* YIELD */
A_PROC_ENTRY(vseqstart);
{ 
JVNAELA.Sequence = XTMAELA_sequence;
JVNAELA.Rest = TTMAELA_sequencestack;
KVNAELA = A_HEAP(A68_422 ) ;
(*KVNAELA) = JVNAELA ;
TTMAELA_sequencestack = KVNAELA;
 /* line 1128: */
LVNAELA.Sequence = YTMAELA_nextsequence;
LVNAELA.Rest = UTMAELA_sequencestackr;
MVNAELA = A_HEAP(A68_423 ) ;
(*MVNAELA) = LVNAELA ;
UTMAELA_sequencestackr = MVNAELA;
 /* line 1129: */
XTMAELA_sequence = QAAATRN_nilsequence;
 /* line 1130: */
 /* line 1131: */
YTMAELA_nextsequence = (&XTMAELA_sequence);
} 
A_PROC_EXIT(vseqstart);
return;
} 
#undef NL

A68_VOID  NVNAELA_vseqp(void)
{ 
A68_297  OVNAELA;  /* collateral clause result */
A68_297 * PVNAELA;  /* YIELD */
A68_275  QVNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * RVNAELA;  /* YIELD */
A_PROC_ENTRY(vseqp);
{ 
OVNAELA.Body = XTMAELA_sequence;
OVNAELA.Output = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
PVNAELA = A_HEAP(A68_297 ) ;
(*PVNAELA) = OVNAELA ;
RVNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*RVNAELA) = A_UNITE(QVNAELA,mode28,28,PVNAELA);
 /* line 1135: */
XTMAELA_sequence = (*(&(TTMAELA_sequencestack->Sequence)));
 /* line 1136: */
TTMAELA_sequencestack = (*(&(TTMAELA_sequencestack->Rest)));
 /* line 1137: */
YTMAELA_nextsequence = (*(&(UTMAELA_sequencestackr->Sequence)));
 /* line 1138: */
 /* line 1139: */
UTMAELA_sequencestackr = (*(&(UTMAELA_sequencestackr->Rest)));
} 
A_PROC_EXIT(vseqp);
return;
} 
#undef NL

A68_VOID  SVNAELA_vparstart(void)
{ 
A68_424  TVNAELA;  /* collateral clause result */
A68_424 * UVNAELA;  /* YIELD */
A68_425  VVNAELA;  /* collateral clause result */
A68_425 * WVNAELA;  /* YIELD */
A_PROC_ENTRY(vparstart);
{ 
TVNAELA.Series = BUMAELA_series;
TVNAELA.Rest = ZTMAELA_seriesstack;
UVNAELA = A_HEAP(A68_424 ) ;
(*UVNAELA) = TVNAELA ;
ZTMAELA_seriesstack = UVNAELA;
 /* line 1143: */
VVNAELA.Series = CUMAELA_nextseries;
VVNAELA.Rest = AUMAELA_seriesstackr;
WVNAELA = A_HEAP(A68_425 ) ;
(*WVNAELA) = VVNAELA ;
AUMAELA_seriesstackr = WVNAELA;
 /* line 1144: */
BUMAELA_series = SAAATRN_nilseries;
 /* line 1145: */
 /* line 1146: */
CUMAELA_nextseries = (&BUMAELA_series);
} 
A_PROC_EXIT(vparstart);
return;
} 
#undef NL

A68_VOID  XVNAELA_vparp(void)
{ 
A68_298  YVNAELA;  /* collateral clause result */
A68_298 * ZVNAELA;  /* YIELD */
A68_275  AWNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * BWNAELA;  /* YIELD */
A_PROC_ENTRY(vparp);
{ 
YVNAELA.Body = BUMAELA_series;
YVNAELA.Output = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
ZVNAELA = A_HEAP(A68_298 ) ;
(*ZVNAELA) = YVNAELA ;
BWNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*BWNAELA) = A_UNITE(AWNAELA,mode29,29,ZVNAELA);
 /* line 1150: */
BUMAELA_series = (*(&(ZTMAELA_seriesstack->Series)));
 /* line 1151: */
ZTMAELA_seriesstack = (*(&(ZTMAELA_seriesstack->Rest)));
 /* line 1152: */
CUMAELA_nextseries = (*(&(AUMAELA_seriesstackr->Series)));
 /* line 1153: */
 /* line 1154: */
AUMAELA_seriesstackr = (*(&(AUMAELA_seriesstackr->Rest)));
} 
A_PROC_EXIT(vparp);
return;
} 
#undef NL

A68_VOID  CWNAELA_vdynstart(void)
{ 
A68_426  DWNAELA;  /* collateral clause result */
A68_426 * EWNAELA;  /* YIELD */
A_PROC_ENTRY(vdynstart);
{ 
DWNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
DWNAELA.Rest = TPMAELA_unitstack;
EWNAELA = A_HEAP(A68_426 ) ;
(*EWNAELA) = DWNAELA ;
TPMAELA_unitstack = EWNAELA;
 /* line 1158: */
 /* line 1159: */
JUMAELA_stackind-=1;
} 
A_PROC_EXIT(vdynstart);
return;
} 
#undef NL

A68_VOID  FWNAELA_vdynindexp(void)
{ 
A68_275  GWNAELA_u;
A68_287  HWNAELA;  /* collateral clause result */
A68_287 * IWNAELA;  /* YIELD */
A68_275  JWNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * KWNAELA;  /* YIELD */
A_PROC_ENTRY(vdynindexp);
{ 
GWNAELA_u = (*(&(TPMAELA_unitstack->Unit)));
 /* line 1163: */
TPMAELA_unitstack = (*(&(TPMAELA_unitstack->Rest)));
 /* line 1164: */
HWNAELA.Unit = GWNAELA_u;
 /* line 1165: */
HWNAELA.Index = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
IWNAELA = A_HEAP(A68_287 ) ;
(*IWNAELA) = HWNAELA ;
KWNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*KWNAELA) = A_UNITE(JWNAELA,mode18,18,IWNAELA);
} 
A_PROC_EXIT(vdynindexp);
return;
} 
#undef NL

A68_VOID  LWNAELA_vreplace(void)
{ 
A68_288  MWNAELA;  /* collateral clause result */
A68_INT  NWNAELA;  /* YIELD */
A68_INT  OWNAELA;  /* YIELD */
A68_INT  PWNAELA;  /* YIELD */
A68_288 * QWNAELA;  /* YIELD */
A68_275  RWNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * SWNAELA;  /* YIELD */
A_PROC_ENTRY(vreplace);
{ 
 /* line 1169: */
NWNAELA = (JUMAELA_stackind-2) ;
MWNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,NWNAELA)));
OWNAELA = (JUMAELA_stackind-1) ;
MWNAELA.Index = (*(&A_VINDEX(IUMAELA_stack,OWNAELA)));
MWNAELA.From = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
PWNAELA = (JUMAELA_stackind-2) ;
QWNAELA = A_HEAP(A68_288 ) ;
(*QWNAELA) = MWNAELA ;
SWNAELA = (&A_VINDEX(IUMAELA_stack,PWNAELA)) ;
(*SWNAELA) = A_UNITE(RWNAELA,mode19,19,QWNAELA);
 /* line 1170: */
 /* line 1171: */
JUMAELA_stackind-=2;
} 
A_PROC_EXIT(vreplace);
return;
} 
#undef NL

A68_VOID  TWNAELA_vbracket(void)
{ 
A68_275  UWNAELA;  /* OPERATORS - mode -> union mode */
A68_301 * VWNAELA;  /* YIELD */
A68_275 * WWNAELA;  /* YIELD */
A_PROC_ENTRY(vbracket);
VWNAELA = RGAATRN_makeubracket((*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)))) ;
WWNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*WWNAELA) = A_UNITE(UWNAELA,mode32,32,VWNAELA);
A_PROC_EXIT(vbracket);
return;
} 
#undef NL

A68_VOID  XWNAELA_vnull(void)
{ 
A68_INT  YWNAELA;  /* YIELD */
A68_275  ZWNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * AXNAELA;  /* YIELD */
A_PROC_ENTRY(vnull);
YWNAELA = JUMAELA_stackind+=1 ;
AXNAELA = (&A_VINDEX(IUMAELA_stack,YWNAELA)) ;
(*AXNAELA) = A_UNITE(ZWNAELA,mode34,34,(&FIAATRN_unull));
A_PROC_EXIT(vnull);
return;
} 
#undef NL

A68_VOID  BXNAELA_vvoid(void)
{ 
A68_INT  CXNAELA;  /* YIELD */
A68_275  DXNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * EXNAELA;  /* YIELD */
A_PROC_ENTRY(vvoid);
CXNAELA = JUMAELA_stackind+=1 ;
EXNAELA = (&A_VINDEX(IUMAELA_stack,CXNAELA)) ;
(*EXNAELA) = A_UNITE(DXNAELA,mode6,6,(&RIAATRN_cvoid));
A_PROC_EXIT(vvoid);
return;
} 
#undef NL

A68_VOID  FXNAELA_vstring(void)
{ 
A68_302  GXNAELA;  /* collateral clause result */
A68_302 * HXNAELA;  /* YIELD */
A68_275  IXNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * JXNAELA;  /* YIELD */
A_PROC_ENTRY(vstring);
GXNAELA.Size = ZPMAELA_formula;
GXNAELA.Char = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
HXNAELA = A_HEAP(A68_302 ) ;
(*HXNAELA) = GXNAELA ;
JXNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*JXNAELA) = A_UNITE(IXNAELA,mode33,33,HXNAELA);
A_PROC_EXIT(vstring);
return;
} 
#undef NL

A68_VOID  KXNAELA_vprimch(void)
{ 
A68_INT  LXNAELA_typeno;
A68_270  MXNAELA;  /* collateral clause result */
A68_INT  NXNAELA;  /* YIELD */
A68_INT  OXNAELA;  /* YIELD */
A68_270 * PXNAELA;  /* YIELD */
A68_275  QXNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * RXNAELA;  /* YIELD */
A_PROC_ENTRY(vprimch);
{ 
LXNAELA_typeno = (*(&(MPMAELA_instack->In)));
 /* line 1184: */
 /* line 1185: */
MXNAELA.Typeno = LXNAELA_typeno;
NXNAELA = 1 ;
MXNAELA.Primno = YQMAELA_find_primno(LXNAELA_typeno, (*(&A_VINDEX(TOMAELA_identifier,NXNAELA))));
OXNAELA = JUMAELA_stackind+=1 ;
PXNAELA = A_HEAP(A68_270 ) ;
(*PXNAELA) = MXNAELA ;
RXNAELA = (&A_VINDEX(IUMAELA_stack,OXNAELA)) ;
(*RXNAELA) = A_UNITE(QXNAELA,mode2,2,PXNAELA);
 /* line 1186: */
 /* line 1187: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vprimch);
return;
} 
#undef NL

A68_VOID  SXNAELA_vprimst(void)
{ 
A68_INT  TXNAELA_typeno;
A68_276  UXNAELA;  /* collateral clause result */
A68_32  VXNAELA;  /* avoid structure result */
A68_INT  WXNAELA;  /* YIELD */
A68_276 * XXNAELA;  /* YIELD */
A68_275  YXNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * ZXNAELA;  /* YIELD */
A_PROC_ENTRY(vprimst);
{ 
TXNAELA_typeno = (*(&(MPMAELA_instack->In)));
 /* line 1191: */
 /* line 1192: */
UXNAELA.Typeno = TXNAELA_typeno;
MRMAELA_ids_to_rvi( TXNAELA_typeno, JPMAELA_idstack, &VXNAELA );
UXNAELA.String = VXNAELA;
WXNAELA = JUMAELA_stackind+=1 ;
XXNAELA = A_HEAP(A68_276 ) ;
(*XXNAELA) = UXNAELA ;
ZXNAELA = (&A_VINDEX(IUMAELA_stack,WXNAELA)) ;
(*ZXNAELA) = A_UNITE(YXNAELA,mode5,5,XXNAELA);
 /* line 1193: */
JPMAELA_idstack = LAAATRN_nilids;
 /* line 1194: */
 /* line 1195: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(vprimst);
return;
} 
#undef NL

A68_VOID  AYNAELA_addattr(void)
{ 
A68_275  BYNAELA;  /* united object - for case conformity */
A68_292 * CYNAELA_umin;
A68_228 * DYNAELA;  /* YIELD */
A68_293 * EYNAELA_udin;
A68_228 * FYNAELA;  /* YIELD */
A68_228  GYNAELA;  /* united object - for case conformity */
A68_299  HYNAELA;  /* collateral clause result */
A68_299 * IYNAELA;  /* YIELD */
A68_275  JYNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * KYNAELA;  /* YIELD */
A_PROC_ENTRY(addattr);
{ 
 /* line 1199: */
BYNAELA = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind))) ;
switch ( BYNAELA.mode )
{ 
case 23: /* REF STRUCT(MODE315,MODE275)  */
CYNAELA_umin = (BYNAELA.data.mode23);
 /* line 1200: */
DYNAELA = (&((&(CYNAELA_umin->Inst))->Attr)) ;
(*DYNAELA) = XPMAELA_attribute;
break;
case 24: /* REF STRUCT(MODE275,MODE315,MODE275)  */
EYNAELA_udin = (BYNAELA.data.mode24);
 /* line 1201: */
FYNAELA = (&((&(EYNAELA_udin->Inst))->Attr)) ;
(*FYNAELA) = XPMAELA_attribute;
break;
default: 
 /* line 1202: */
GYNAELA = XPMAELA_attribute ;
switch ( GYNAELA.mode )
{ 
case 5: /* REF STRUCT(INT)  */
 /* line 1203: */
/*SKIP*/;
break;
default: 
HYNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
 /* line 1204: */
HYNAELA.Attr = XPMAELA_attribute;
 /* line 1205: */
 /* line 1206: */
IYNAELA = A_HEAP(A68_299 ) ;
(*IYNAELA) = HYNAELA ;
KYNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*KYNAELA) = A_UNITE(JYNAELA,mode30,30,IYNAELA);
break;
} 
break;
} 
} 
A_PROC_EXIT(addattr);
return;
} 
#undef NL

A68_VOID  LYNAELA_vnormal(void)
{ 
A68_418  MYNAELA;  /* collateral clause result */
A68_418 * NYNAELA;  /* YIELD */
A_PROC_ENTRY(vnormal);
MYNAELA.Choice = WIAATRN_normalchoice;
MYNAELA.Check = A68_FALSE;
MYNAELA.Rest = FUMAELA_elsestack;
NYNAELA = A_HEAP(A68_418 ) ;
(*NYNAELA) = MYNAELA ;
FUMAELA_elsestack = NYNAELA;
A_PROC_EXIT(vnormal);
return;
} 
#undef NL

A68_VOID  OYNAELA_velsep(void)
{ 
A68_418  PYNAELA;  /* collateral clause result */
A68_418 * QYNAELA;  /* YIELD */
A_PROC_ENTRY(velsep);
PYNAELA.Choice = YIAATRN_elsechoice;
PYNAELA.Check = A68_FALSE;
PYNAELA.Rest = FUMAELA_elsestack;
QYNAELA = A_HEAP(A68_418 ) ;
(*QYNAELA) = PYNAELA ;
FUMAELA_elsestack = QYNAELA;
A_PROC_EXIT(velsep);
return;
} 
#undef NL

A68_VOID  RYNAELA_velseof(void)
{ 
A68_418  SYNAELA;  /* collateral clause result */
A68_418 * TYNAELA;  /* YIELD */
A_PROC_ENTRY(velseof);
SYNAELA.Choice = XIAATRN_elseofchoice;
SYNAELA.Check = A68_FALSE;
SYNAELA.Rest = FUMAELA_elsestack;
TYNAELA = A_HEAP(A68_418 ) ;
(*TYNAELA) = SYNAELA ;
FUMAELA_elsestack = TYNAELA;
A_PROC_EXIT(velseof);
return;
} 
#undef NL

A68_VOID  UYNAELA_vnoelse(void)
{ 
A68_418  VYNAELA;  /* collateral clause result */
A68_418 * WYNAELA;  /* YIELD */
A_PROC_ENTRY(vnoelse);
VYNAELA.Choice = ZIAATRN_noelsechoice;
VYNAELA.Check = A68_FALSE;
VYNAELA.Rest = FUMAELA_elsestack;
WYNAELA = A_HEAP(A68_418 ) ;
(*WYNAELA) = VYNAELA ;
FUMAELA_elsestack = WYNAELA;
A_PROC_EXIT(vnoelse);
return;
} 
#undef NL

A68_VOID  XYNAELA_vcheck(void)
{ 
A68_BOOL * YYNAELA;  /* YIELD */
A_PROC_ENTRY(vcheck);
YYNAELA = (&(FUMAELA_elsestack->Check)) ;
(*YYNAELA) = (ROMAELA_integer==1);
A_PROC_EXIT(vcheck);
return;
} 
#undef NL

A68_VOID  ZYNAELA_vcaserep(void)
{ 
A68_BOOL  AZNAELA_check;
A68_INT  BZNAELA_sort;
A68_275  CZNAELA_u;
A68_335  DZNAELA;  /* collateral clause result */
A68_335 * EZNAELA;  /* YIELD */
A68_335 ** FZNAELA;  /* YIELD */
A_PROC_ENTRY(vcaserep);
{ 
AZNAELA_check = (*(&(FUMAELA_elsestack->Check)));
 /* line 1224: */
BZNAELA_sort = (*(&(FUMAELA_elsestack->Choice)));
 /* line 1225: */
FUMAELA_elsestack = (*(&(FUMAELA_elsestack->Rest)));
 /* line 1226: */
CZNAELA_u = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
 /* line 1227: */
JUMAELA_stackind-=1;
 /* line 1228: */
 /* line 1229: */
DZNAELA.Check = AZNAELA_check;
DZNAELA.Sort = BZNAELA_sort;
DZNAELA.Test = (*(&(RPMAELA_conststack->Const)));
DZNAELA.Output = CZNAELA_u;
DZNAELA.Rest = (*(&(EUMAELA_uchoicestack->Choices)));
EZNAELA = A_HEAP(A68_335 ) ;
(*EZNAELA) = DZNAELA ;
FZNAELA = (&(EUMAELA_uchoicestack->Choices)) ;
(*FZNAELA) = EZNAELA;
 /* line 1230: */
 /* line 1231: */
FQMAELA_unstackconst();
} 
A_PROC_EXIT(vcaserep);
return;
} 
#undef NL

A68_VOID  GZNAELA_unitcheck(void)
{ 
A68_237  HZNAELA;  /* united object - for case conformity */
A68_239 * IZNAELA_fc;
A68_239  JZNAELA;  /* clause result */
A68_237  KZNAELA;  /* OPERATORS - mode -> union mode */
A68_237  LZNAELA;  /* OPERATORS - mode -> union mode */
A68_239  MZNAELA_fcheck;
A68_300  NZNAELA;  /* collateral clause result */
A68_300 * OZNAELA;  /* YIELD */
A68_275  PZNAELA;  /* OPERATORS - mode -> union mode */
A68_275 * QZNAELA;  /* YIELD */
A_PROC_ENTRY(unitcheck);
{ 
HZNAELA = ZPMAELA_formula ;
switch ( HZNAELA.mode )
{ 
case 2: /* REF STRUCT(INT,MODE237,MODE237)  */
IZNAELA_fc = (HZNAELA.data.mode2);
JZNAELA = (*IZNAELA_fc);
break;
default: 
JZNAELA.Sort = 0;
JZNAELA.Test = A_UNITE(KZNAELA,mode10,10,(&BIAATRN_fnull));
JZNAELA.Standard = A_UNITE(LZNAELA,mode10,10,(&BIAATRN_fnull));
break;
} 
MZNAELA_fcheck = JZNAELA;
 /* line 1236: */
NZNAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
 /* line 1237: */
NZNAELA.Check = MZNAELA_fcheck;
OZNAELA = A_HEAP(A68_300 ) ;
(*OZNAELA) = NZNAELA ;
QZNAELA = (&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)) ;
(*QZNAELA) = A_UNITE(PZNAELA,mode31,31,OZNAELA);
} 
A_PROC_EXIT(unitcheck);
return;
} 
#undef NL

A68_VOID  RZNAELA_seqnullp(void)
{ 
A68_324  SZNAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqnullp);
HVMAELA_newseqstep(A_UNITE(SZNAELA,mode15,15,(&HIAATRN_seqnull)));
A_PROC_EXIT(seqnullp);
return;
} 
#undef NL

A68_VOID  TZNAELA_seqvoidstart(void)
{ 
A68_422  UZNAELA;  /* collateral clause result */
A68_422 * VZNAELA;  /* YIELD */
A68_423  WZNAELA;  /* collateral clause result */
A68_423 * XZNAELA;  /* YIELD */
A68_429  YZNAELA;  /* collateral clause result */
A68_429 * ZZNAELA;  /* YIELD */
A_PROC_ENTRY(seqvoidstart);
{ 
UZNAELA.Sequence = XTMAELA_sequence;
UZNAELA.Rest = TTMAELA_sequencestack;
VZNAELA = A_HEAP(A68_422 ) ;
(*VZNAELA) = UZNAELA ;
TTMAELA_sequencestack = VZNAELA;
 /* line 1245: */
 /* line 1246: */
WZNAELA.Sequence = YTMAELA_nextsequence;
WZNAELA.Rest = UTMAELA_sequencestackr;
XZNAELA = A_HEAP(A68_423 ) ;
(*XZNAELA) = WZNAELA ;
UTMAELA_sequencestackr = XZNAELA;
 /* line 1247: */
XTMAELA_sequence = QAAATRN_nilsequence;
 /* line 1248: */
YTMAELA_nextsequence = (&XTMAELA_sequence);
 /* line 1249: */
YZNAELA.Mult = A68_FALSE;
 /* line 1250: */
YZNAELA.Rest = UPMAELA_multassign;
ZZNAELA = A_HEAP(A68_429 ) ;
(*ZZNAELA) = YZNAELA ;
UPMAELA_multassign = ZZNAELA;
} 
A_PROC_EXIT(seqvoidstart);
return;
} 
#undef NL

A68_VOID  AAOAELA_seqvoid(void)
{ 
A68_323 * BAOAELA_s;
A68_324  CAOAELA;  /* united object - for case conformity */
A68_328 * DAOAELA_sa;
A68_324  EAOAELA;  /* OPERATORS - mode -> union mode */
A68_324  HAOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqvoid);
{ 
BAOAELA_s = XTMAELA_sequence;
 /* line 1254: */
XTMAELA_sequence = (*(&(TTMAELA_sequencestack->Sequence)));
 /* line 1255: */
YTMAELA_nextsequence = (*(&(UTMAELA_sequencestackr->Sequence)));
 /* line 1256: */
UTMAELA_sequencestackr = (*(&(UTMAELA_sequencestackr->Rest)));
 /* line 1257: */
TTMAELA_sequencestack = (*(&(TTMAELA_sequencestack->Rest)));
 /* line 1258: */
 /* line 1259: */
if ( (*(&(UPMAELA_multassign->Mult))) )
{ 
 /* line 1260: */
CAOAELA = (*(&(BAOAELA_s->Step))) ;
switch ( CAOAELA.mode )
{ 
case 11: /* REF STRUCT(MODE275,MODE275)  */
DAOAELA_sa = (CAOAELA.data.mode11);
 /* line 1261: */
{ 
UPMAELA_multassign = (*(&(UPMAELA_multassign->Rest)));
 /* line 1262: */
 /* line 1263: */
 /* line 1264: */
HVMAELA_newseqstep(A_UNITE(EAOAELA,mode11,11,DAOAELA_sa));
} 
break;
default: 
 /* line 1265: */
 /* line 1266: */
MQMAELA_sysflt(GAOAELA);
break;
} 
} 
else
{ 
 /* line 1267: */
 /* line 1268: */
HVMAELA_newseqstep(A_UNITE(HAOAELA,mode16,16,BAOAELA_s));
} 
} 
A_PROC_EXIT(seqvoid);
return;
} 
#undef NL

A68_VOID  IAOAELA_seqlet(void)
{ 
A68_309  JAOAELA;  /* collateral clause result */
A68_309  KAOAELA_let;
A68_325 * LAOAELA_seqlet;
A68_324  MAOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqlet);
{ 
JAOAELA.Letnames = LUMAELA_names;
JAOAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
KAOAELA_let = JAOAELA;
 /* line 1272: */
LAOAELA_seqlet = BHAATRN_makeseqlet(KAOAELA_let);
 /* line 1273: */
JUMAELA_stackind-=1;
 /* line 1274: */
 /* line 1275: */
HVMAELA_newseqstep(A_UNITE(MAOAELA,mode8,8,LAOAELA_seqlet));
} 
A_PROC_EXIT(seqlet);
return;
} 
#undef NL

A68_VOID  NAOAELA_seqvar(void)
{ 
A68_309  OAOAELA;  /* collateral clause result */
A68_309  PAOAELA_seqlet;
A68_326 * QAOAELA_seqvar;
A68_324  RAOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqvar);
{ 
OAOAELA.Letnames = LUMAELA_names;
OAOAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
PAOAELA_seqlet = OAOAELA;
 /* line 1279: */
QAOAELA_seqvar = GHAATRN_makeseqvar(PAOAELA_seqlet);
 /* line 1280: */
JUMAELA_stackind-=1;
 /* line 1281: */
 /* line 1282: */
HVMAELA_newseqstep(A_UNITE(RAOAELA,mode9,9,QAOAELA_seqvar));
} 
A_PROC_EXIT(seqvar);
return;
} 
#undef NL

A68_VOID  SAOAELA_seqper(void)
{ 
A68_327 * TAOAELA_seqpvar;
A68_327  UAOAELA;  /* collateral clause result */
A68_324  VAOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqper);
{ 
TAOAELA_seqpvar = (A_HEAP(A68_327 ));
UAOAELA.Pvarnames = LUMAELA_names;
UAOAELA.Init = (*(&(RPMAELA_conststack->Const)));
(*TAOAELA_seqpvar) = UAOAELA;
 /* line 1286: */
FQMAELA_unstackconst();
 /* line 1287: */
 /* line 1288: */
HVMAELA_newseqstep(A_UNITE(VAOAELA,mode10,10,TAOAELA_seqpvar));
} 
A_PROC_EXIT(seqper);
return;
} 
#undef NL

A68_VOID  WAOAELA_seqassignval1(void)
{ 
A68_426  XAOAELA;  /* collateral clause result */
A68_426 * YAOAELA;  /* YIELD */
A68_275  ZAOAELA;  /* united object - for case conformity */
A68_290 * ABOAELA_us;
A68_BOOL * BBOAELA;  /* YIELD */
A68_BOOL * CBOAELA;  /* YIELD */
A_PROC_ENTRY(seqassignval1);
{ 
XAOAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
XAOAELA.Rest = TPMAELA_unitstack;
YAOAELA = A_HEAP(A68_426 ) ;
(*YAOAELA) = XAOAELA ;
TPMAELA_unitstack = YAOAELA;
 /* line 1292: */
 /* line 1293: */
ZAOAELA = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind))) ;
switch ( ZAOAELA.mode )
{ 
case 21: /* REF STRUCT(MODE275,REF MODE290)  */
ABOAELA_us = (ZAOAELA.data.mode21);
 /* line 1294: */
BBOAELA = (&(UPMAELA_multassign->Mult)) ;
(*BBOAELA) = A68_TRUE;
break;
default: 
 /* line 1295: */
CBOAELA = (&(UPMAELA_multassign->Mult)) ;
(*CBOAELA) = A68_FALSE;
break;
} 
 /* line 1296: */
 /* line 1297: */
JUMAELA_stackind-=1;
} 
A_PROC_EXIT(seqassignval1);
return;
} 
#undef NL

A68_VOID  DBOAELA_seqassignval2(void)
{ 
A68_275  EBOAELA_uhold;
A68_328  FBOAELA;  /* collateral clause result */
A68_328 * GBOAELA;  /* YIELD */
A68_324  HBOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqassignval2);
{ 
EBOAELA_uhold = (*(&(TPMAELA_unitstack->Unit)));
 /* line 1301: */
TPMAELA_unitstack = (*(&(TPMAELA_unitstack->Rest)));
 /* line 1302: */
FBOAELA.To = EBOAELA_uhold;
FBOAELA.From = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
GBOAELA = A_HEAP(A68_328 ) ;
(*GBOAELA) = FBOAELA ;
HVMAELA_newseqstep(A_UNITE(HBOAELA,mode11,11,GBOAELA));
 /* line 1303: */
 /* line 1304: */
JUMAELA_stackind-=1;
} 
A_PROC_EXIT(seqassignval2);
return;
} 
#undef NL

A68_VOID  IBOAELA_seqcasestart(void)
{ 
A68_427  JBOAELA;  /* collateral clause result */
A68_427 * KBOAELA;  /* YIELD */
A68_426  LBOAELA;  /* collateral clause result */
A68_426 * MBOAELA;  /* YIELD */
A_PROC_ENTRY(seqcasestart);
{ 
JBOAELA.Seqchoice = PAAATRN_nilseqchoices;
JBOAELA.Rest = VTMAELA_seqchoicestack;
KBOAELA = A_HEAP(A68_427 ) ;
(*KBOAELA) = JBOAELA ;
VTMAELA_seqchoicestack = KBOAELA;
 /* line 1308: */
LBOAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
LBOAELA.Rest = TPMAELA_unitstack;
MBOAELA = A_HEAP(A68_426 ) ;
(*MBOAELA) = LBOAELA ;
TPMAELA_unitstack = MBOAELA;
 /* line 1309: */
 /* line 1310: */
JUMAELA_stackind-=1;
} 
A_PROC_EXIT(seqcasestart);
return;
} 
#undef NL

A68_VOID  NBOAELA_seqcase(void)
{ 
A68_334 * OBOAELA_ans;
A68_334 * PBOAELA_seqstack;
A68_334  QBOAELA;  /* collateral clause result */
A68_334 * RBOAELA;  /* YIELD */
A68_275  SBOAELA_u;
A68_329  TBOAELA;  /* collateral clause result */
A68_329 * UBOAELA;  /* YIELD */
A68_324  VBOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqcase);
{ 
OBOAELA_ans = PAAATRN_nilseqchoices;
 /* line 1314: */
PBOAELA_seqstack = (*(&(VTMAELA_seqchoicestack->Seqchoice)));
 /* line 1315: */
for ( ;; )
{ 
 /* line 1316: */
if ( !((PBOAELA_seqstack!=PAAATRN_nilseqchoices)) ) break;
 /* line 1317: */
QBOAELA.Check = (*(&(PBOAELA_seqstack->Check)));
 /* line 1318: */
QBOAELA.Sort = (*(&(PBOAELA_seqstack->Sort)));
QBOAELA.Test = (*(&(PBOAELA_seqstack->Test)));
QBOAELA.Output = (*(&(PBOAELA_seqstack->Output)));
QBOAELA.Rest = OBOAELA_ans;
RBOAELA = A_HEAP(A68_334 ) ;
(*RBOAELA) = QBOAELA ;
OBOAELA_ans = RBOAELA;
 /* line 1319: */
 /* line 1320: */
PBOAELA_seqstack = (*(&(PBOAELA_seqstack->Rest)));
}
 /* line 1321: */
VTMAELA_seqchoicestack = (*(&(VTMAELA_seqchoicestack->Rest)));
 /* line 1322: */
SBOAELA_u = (*(&(TPMAELA_unitstack->Unit)));
 /* line 1323: */
TPMAELA_unitstack = (*(&(TPMAELA_unitstack->Rest)));
 /* line 1324: */
TBOAELA.Input = SBOAELA_u;
TBOAELA.Choices = OBOAELA_ans;
 /* line 1325: */
UBOAELA = A_HEAP(A68_329 ) ;
(*UBOAELA) = TBOAELA ;
HVMAELA_newseqstep(A_UNITE(VBOAELA,mode12,12,UBOAELA));
} 
A_PROC_EXIT(seqcase);
return;
} 
#undef NL

A68_VOID  WBOAELA_seqvarmult(void)
{ 
A68_331  XBOAELA;  /* collateral clause result */
A68_324  YBOAELA;  /* avoid structure result */
A68_331 * ZBOAELA;  /* YIELD */
A68_324  ACOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqvarmult);
{ 
XBOAELA.Repl = (*(&(QPMAELA_formulastack->Formula)));
LVMAELA_removeseqstep(  &YBOAELA );
XBOAELA.Body = YBOAELA;
ZBOAELA = A_HEAP(A68_331 ) ;
(*ZBOAELA) = XBOAELA ;
HVMAELA_newseqstep(A_UNITE(ACOAELA,mode14,14,ZBOAELA));
 /* line 1329: */
 /* line 1330: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(seqvarmult);
return;
} 
#undef NL

A68_VOID  BCOAELA_seqrow(void)
{ 
A68_333  CCOAELA;  /* collateral clause result */
A68_324  DCOAELA;  /* avoid structure result */
A68_333 * ECOAELA;  /* YIELD */
A68_324  FCOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqrow);
CCOAELA.Size = ZPMAELA_formula;
LVMAELA_removeseqstep(  &DCOAELA );
CCOAELA.Elem = DCOAELA;
ECOAELA = A_HEAP(A68_333 ) ;
(*ECOAELA) = CCOAELA ;
HVMAELA_newseqstep(A_UNITE(FCOAELA,mode17,17,ECOAELA));
A_PROC_EXIT(seqrow);
return;
} 
#undef NL

A68_VOID  GCOAELA_seqdecl(void)
{ 
A68_324  HCOAELA;  /* OPERATORS - unite union */
A_PROC_ENTRY(seqdecl);
HVMAELA_newseqstep(A_UUNITE(HCOAELA,0,LTMAELA_declaration));
A_PROC_EXIT(seqdecl);
return;
} 
#undef NL

A68_VOID  ICOAELA_attrdecl(void)
{ 
A68_INT  JCOAELA;  /* clause result */
A68_INT  KCOAELA_sort;
A68_234  LCOAELA;  /* collateral clause result */
A68_INT  MCOAELA;  /* YIELD */
A68_234 * NCOAELA;  /* YIELD */
A68_234 ** OCOAELA;  /* YIELD */
A68_336  PCOAELA;  /* OPERATORS - mode -> union mode */
A68_229  QCOAELA;  /* YIELD */
A_PROC_ENTRY(attrdecl);
{ 
if ( (OTMAELA_macnum==0) )
{ 
JCOAELA = PKAATRN_localdec;
} 
else
{ 
JCOAELA = QKAATRN_macpardec;
} 
KCOAELA_sort = JCOAELA;
 /* line 1340: */
 /* line 1341: */
LCOAELA.Sort = KCOAELA_sort;
LCOAELA.Attrname = (*(&(NPMAELA_inidstack->Inid)));
LCOAELA.Value = XPMAELA_attribute;
LCOAELA.Usage = CBAATRN_nilusage;
MCOAELA = (*(&(MPMAELA_instack->In))) ;
NCOAELA = A_HEAP(A68_234 ) ;
(*NCOAELA) = LCOAELA ;
OCOAELA = (&A_VINDEX(SQMAELA_attrs,MCOAELA)) ;
(*OCOAELA) = NCOAELA;
 /* line 1342: */
QCOAELA = (*UDAATRN_makeattrname((*(&(MPMAELA_instack->In))))) ;
LTMAELA_declaration = A_UNITE(PCOAELA,mode1,1,QCOAELA);
 /* line 1343: */
BQMAELA_unstackin();
 /* line 1344: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(attrdecl);
return;
} 
#undef NL

A68_VOID  RCOAELA_intdecl(void)
{ 
A68_INT  SCOAELA;  /* clause result */
A68_INT  TCOAELA_sort;
A68_250  UCOAELA;  /* collateral clause result */
A68_251  VCOAELA;  /* OPERATORS - unite union */
A68_INT  WCOAELA;  /* YIELD */
A68_250 * XCOAELA;  /* YIELD */
A68_250 ** YCOAELA;  /* YIELD */
A68_336  ZCOAELA;  /* OPERATORS - mode -> union mode */
A68_241  ADOAELA;  /* YIELD */
A_PROC_ENTRY(intdecl);
{ 
if ( (OTMAELA_macnum==0) )
{ 
SCOAELA = PKAATRN_localdec;
} 
else
{ 
SCOAELA = QKAATRN_macpardec;
} 
TCOAELA_sort = SCOAELA;
 /* line 1348: */
 /* line 1349: */
UCOAELA.Sort = TCOAELA_sort;
UCOAELA.Intname = (*(&(NPMAELA_inidstack->Inid)));
UCOAELA.Attr = (*(&(WPMAELA_attrstack->Elem)));
UCOAELA.Value = A_UUNITE(VCOAELA,0,ZPMAELA_formula);
UCOAELA.Usage = CBAATRN_nilusage;
WCOAELA = (*(&(MPMAELA_instack->In))) ;
XCOAELA = A_HEAP(A68_250 ) ;
(*XCOAELA) = UCOAELA ;
YCOAELA = (&A_VINDEX(QQMAELA_ints,WCOAELA)) ;
(*YCOAELA) = XCOAELA;
 /* line 1350: */
ADOAELA = (*OEAATRN_makefname((*(&(MPMAELA_instack->In))))) ;
LTMAELA_declaration = A_UNITE(ZCOAELA,mode2,2,ADOAELA);
 /* line 1351: */
HQMAELA_unstackattr();
BQMAELA_unstackin();
 /* line 1352: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(intdecl);
return;
} 
#undef NL

A68_VOID  BDOAELA_typedecl(void)
{ 
A68_INT  CDOAELA;  /* clause result */
A68_INT  DDOAELA_sort;
A68_268  EDOAELA;  /* collateral clause result */
A68_INT  FDOAELA;  /* YIELD */
A68_268 * GDOAELA;  /* YIELD */
A68_268 ** HDOAELA;  /* YIELD */
A68_336  IDOAELA;  /* OPERATORS - mode -> union mode */
A68_254  JDOAELA;  /* YIELD */
A_PROC_ENTRY(typedecl);
{ 
if ( (OTMAELA_macnum==0) )
{ 
CDOAELA = PKAATRN_localdec;
} 
else
{ 
CDOAELA = QKAATRN_macpardec;
} 
DDOAELA_sort = CDOAELA;
 /* line 1356: */
 /* line 1357: */
EDOAELA.Sort = DDOAELA_sort;
EDOAELA.Typename = (*(&(NPMAELA_inidstack->Inid)));
EDOAELA.Attr = (*(&(WPMAELA_attrstack->Elem)));
EDOAELA.Body = STMAELA_typebody;
EDOAELA.Usage = CBAATRN_nilusage;
FDOAELA = (*(&(MPMAELA_instack->In))) ;
GDOAELA = A_HEAP(A68_268 ) ;
(*GDOAELA) = EDOAELA ;
HDOAELA = (&A_VINDEX(OQMAELA_types,FDOAELA)) ;
(*HDOAELA) = GDOAELA;
 /* line 1358: */
JDOAELA = (*IFAATRN_maketname((*(&(MPMAELA_instack->In))))) ;
LTMAELA_declaration = A_UNITE(IDOAELA,mode3,3,JDOAELA);
 /* line 1359: */
HQMAELA_unstackattr();
BQMAELA_unstackin();
 /* line 1360: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(typedecl);
return;
} 
#undef NL

A68_VOID  KDOAELA_constdecl(void)
{ 
A68_INT  LDOAELA;  /* clause result */
A68_INT  MDOAELA_sort;
A68_274  NDOAELA;  /* collateral clause result */
A68_INT  ODOAELA;  /* YIELD */
A68_274 * PDOAELA;  /* YIELD */
A68_274 ** QDOAELA;  /* YIELD */
A68_336  RDOAELA;  /* OPERATORS - mode -> union mode */
A68_269  SDOAELA;  /* YIELD */
A_PROC_ENTRY(constdecl);
{ 
if ( (OTMAELA_macnum==0) )
{ 
LDOAELA = PKAATRN_localdec;
} 
else
{ 
LDOAELA = QKAATRN_macpardec;
} 
MDOAELA_sort = LDOAELA;
 /* line 1364: */
 /* line 1365: */
NDOAELA.Sort = MDOAELA_sort;
NDOAELA.Constname = (*(&(NPMAELA_inidstack->Inid)));
NDOAELA.Attr = (*(&(WPMAELA_attrstack->Elem)));
NDOAELA.Value = AQMAELA_const;
NDOAELA.Usage = CBAATRN_nilusage;
ODOAELA = (*(&(MPMAELA_instack->In))) ;
PDOAELA = A_HEAP(A68_274 ) ;
(*PDOAELA) = NDOAELA ;
QDOAELA = (&A_VINDEX(RQMAELA_consts,ODOAELA)) ;
(*QDOAELA) = PDOAELA;
 /* line 1366: */
SDOAELA = (*CGAATRN_makecname((*(&(MPMAELA_instack->In))))) ;
LTMAELA_declaration = A_UNITE(RDOAELA,mode4,4,SDOAELA);
 /* line 1367: */
HQMAELA_unstackattr();
BQMAELA_unstackin();
 /* line 1368: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(constdecl);
return;
} 
#undef NL

A68_VOID  TDOAELA_seqrepstep(void)
{ 
A68_BOOL  UDOAELA_check;
A68_INT  VDOAELA_sort;
A68_334  WDOAELA;  /* collateral clause result */
A68_324  XDOAELA;  /* avoid structure result */
A68_334 * YDOAELA;  /* YIELD */
A68_334 ** ZDOAELA;  /* YIELD */
A_PROC_ENTRY(seqrepstep);
{ 
UDOAELA_check = (*(&(FUMAELA_elsestack->Check)));
 /* line 1373: */
VDOAELA_sort = (*(&(FUMAELA_elsestack->Choice)));
 /* line 1374: */
FUMAELA_elsestack = (*(&(FUMAELA_elsestack->Rest)));
 /* line 1375: */
 /* line 1376: */
WDOAELA.Check = UDOAELA_check;
WDOAELA.Sort = VDOAELA_sort;
WDOAELA.Test = (*(&(RPMAELA_conststack->Const)));
 /* line 1377: */
LVMAELA_removeseqstep(  &XDOAELA );
WDOAELA.Output = XDOAELA;
WDOAELA.Rest = (*(&(VTMAELA_seqchoicestack->Seqchoice)));
YDOAELA = A_HEAP(A68_334 ) ;
(*YDOAELA) = WDOAELA ;
ZDOAELA = (&(VTMAELA_seqchoicestack->Seqchoice)) ;
(*ZDOAELA) = YDOAELA;
 /* line 1378: */
 /* line 1379: */
FQMAELA_unstackconst();
} 
A_PROC_EXIT(seqrepstep);
return;
} 
#undef NL

A68_VOID  AEOAELA_seqif(void)
{ 
A68_428  BEOAELA;  /* collateral clause result */
A68_324  CEOAELA;  /* avoid structure result */
A68_428 * DEOAELA;  /* YIELD */
A_PROC_ENTRY(seqif);
LVMAELA_removeseqstep(  &CEOAELA );
BEOAELA.Seqstep = CEOAELA;
BEOAELA.Rest = WTMAELA_seqstepstack;
DEOAELA = A_HEAP(A68_428 ) ;
(*DEOAELA) = BEOAELA ;
WTMAELA_seqstepstack = DEOAELA;
A_PROC_EXIT(seqif);
return;
} 
#undef NL

A68_VOID  EEOAELA_seqfip(void)
{ 
A68_324  FEOAELA;  /* avoid structure result */
A68_324  GEOAELA_false;
A68_330  HEOAELA;  /* collateral clause result */
A68_330 * IEOAELA;  /* YIELD */
A68_324  JEOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqfip);
{ 
LVMAELA_removeseqstep(  &FEOAELA );
GEOAELA_false = FEOAELA;
 /* line 1386: */
 /* line 1387: */
HEOAELA.Cond = (*(&(QPMAELA_formulastack->Formula)));
HEOAELA.True = (*(&(WTMAELA_seqstepstack->Seqstep)));
HEOAELA.False = GEOAELA_false;
IEOAELA = A_HEAP(A68_330 ) ;
(*IEOAELA) = HEOAELA ;
HVMAELA_newseqstep(A_UNITE(JEOAELA,mode13,13,IEOAELA));
 /* line 1388: */
DQMAELA_unstackformula();
 /* line 1389: */
 /* line 1390: */
WTMAELA_seqstepstack = (*(&(WTMAELA_seqstepstack->Rest)));
} 
A_PROC_EXIT(seqfip);
return;
} 
#undef NL

A68_VOID  KEOAELA_seqpt(void)
{ 
A68_237  LEOAELA_cond;
A68_307 * MEOAELA_print;
A68_307  NEOAELA;  /* collateral clause result */
A68_324  OEOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqpt);
{ 
LEOAELA_cond = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 1394: */
MEOAELA_print = (A_HEAP(A68_307 ));
NEOAELA.Cond = LEOAELA_cond;
NEOAELA.Print = PTMAELA_printitems;
(*MEOAELA_print) = NEOAELA;
 /* line 1395: */
PTMAELA_printitems = MAAATRN_nilprintitems;
 /* line 1396: */
QTMAELA_nextprintitems = (&PTMAELA_printitems);
 /* line 1397: */
 /* line 1398: */
HVMAELA_newseqstep(A_UNITE(OEOAELA,mode6,6,MEOAELA_print));
} 
A_PROC_EXIT(seqpt);
return;
} 
#undef NL

A68_VOID  PEOAELA_seqptflt(void)
{ 
A68_237  QEOAELA_cond;
A68_308 * REOAELA_fault;
A68_308  SEOAELA;  /* collateral clause result */
A68_324  TEOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqptflt);
{ 
QEOAELA_cond = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 1402: */
REOAELA_fault = (A_HEAP(A68_308 ));
SEOAELA.Cond = QEOAELA_cond;
SEOAELA.Fault = PTMAELA_printitems;
(*REOAELA_fault) = SEOAELA;
 /* line 1403: */
PTMAELA_printitems = MAAATRN_nilprintitems;
 /* line 1404: */
QTMAELA_nextprintitems = (&PTMAELA_printitems);
 /* line 1405: */
 /* line 1406: */
HVMAELA_newseqstep(A_UNITE(TEOAELA,mode7,7,REOAELA_fault));
} 
A_PROC_EXIT(seqptflt);
return;
} 
#undef NL

A68_VOID  UEOAELA_typenotprim(void)
{ 
A68_266  VEOAELA;  /* OPERATORS - mode -> union mode */
A68_262 * WEOAELA;  /* YIELD */
A_PROC_ENTRY(typenotprim);
WEOAELA = XFAATRN_maketypetag(YPMAELA_type) ;
STMAELA_typebody = A_UNITE(VEOAELA,mode3,3,WEOAELA);
A_PROC_EXIT(typenotprim);
return;
} 
#undef NL

A68_VOID  XEOAELA_multint(void)
{ 
A68_249  YEOAELA;  /* collateral clause result */
A68_249 * ZEOAELA;  /* YIELD */
A_PROC_ENTRY(multint);
YEOAELA.Formula = ZPMAELA_formula;
YEOAELA.Rest = VPMAELA_formulas;
ZEOAELA = A_HEAP(A68_249 ) ;
(*ZEOAELA) = YEOAELA ;
VPMAELA_formulas = ZEOAELA;
A_PROC_EXIT(multint);
return;
} 
#undef NL

A_STATIC A68_VOID  CFOAELA_makerow(A68_249 * Makeints, A68_253  Type, A68_253  *ReturnedValue)
{ 
A68_253  DFOAELA;  /* clause result */
A68_255  EFOAELA;  /* collateral clause result */
A68_237  FFOAELA;  /* avoid structure result */
A68_253  GFOAELA;  /* avoid structure result */
A68_255 * HFOAELA;  /* YIELD */
A68_253  IFOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(makerow);
 /* line 1417: */
 /* line 1418: */
 /* line 1419: */
if ( (Makeints==BBAATRN_nilformulas) )
{ 
DFOAELA = Type;
} 
else
{ 
 /* line 1420: */
QNMAELA_uncheckedform( (*(&(Makeints->Formula))), &FFOAELA );
EFOAELA.Size = FFOAELA;
 /* line 1421: */
CFOAELA_makerow( (*(&(Makeints->Rest))), Type, &GFOAELA );
EFOAELA.Elem = GFOAELA;
HFOAELA = A_HEAP(A68_255 ) ;
(*HFOAELA) = EFOAELA ;
DFOAELA = A_UNITE(IFOAELA,mode2,2,HFOAELA);
} 
A_PROC_EXIT(makerow);
*ReturnedValue = (DFOAELA);
return;
} 
#undef NL

A68_VOID  JFOAELA_bmake1(void)
{ 
A68_253  KFOAELA_ty2;
A68_253  LFOAELA_ty1;
A68_257  MFOAELA;  /* collateral clause result */
A68_257 * NFOAELA;  /* YIELD */
A68_253  OFOAELA;  /* OPERATORS - mode -> union mode */
A68_253  PFOAELA;  /* avoid structure result */
A_PROC_ENTRY(bmake1);
{ 
KFOAELA_ty2 = (*(&(OPMAELA_typestack->Type)));
EQMAELA_unstacktype();
 /* line 1426: */
LFOAELA_ty1 = (*(&(OPMAELA_typestack->Type)));
EQMAELA_unstacktype();
 /* line 1427: */
MFOAELA.From = LFOAELA_ty1;
MFOAELA.To = KFOAELA_ty2;
 /* line 1428: */
NFOAELA = A_HEAP(A68_257 ) ;
(*NFOAELA) = MFOAELA ;
CFOAELA_makerow( VPMAELA_formulas, A_UNITE(OFOAELA,mode4,4,NFOAELA), &PFOAELA );
YPMAELA_type = PFOAELA;
} 
A_PROC_EXIT(bmake1);
return;
} 
#undef NL

A68_VOID  QFOAELA_bmake(void)
{ 
A68_316 * RFOAELA_makenames;
A68_316  SFOAELA;  /* collateral clause result */
A68_316 * TFOAELA;  /* YIELD */
A68_310 * UFOAELA_make;
A68_310  VFOAELA;  /* collateral clause result */
A68_305  WFOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(bmake);
{ 
RFOAELA_makenames = NAAATRN_nilnames;
 /* line 1433: */
for ( ;; )
{ 
 /* line 1434: */
if ( !((LUMAELA_names!=NAAATRN_nilnames)) ) break;
SFOAELA.Nameno = (*(&(LUMAELA_names->Nameno)));
SFOAELA.Rest = RFOAELA_makenames;
TFOAELA = A_HEAP(A68_316 ) ;
(*TFOAELA) = SFOAELA ;
RFOAELA_makenames = TFOAELA;
 /* line 1435: */
 /* line 1436: */
LUMAELA_names = (*(&(LUMAELA_names->Rest)));
}
 /* line 1437: */
UFOAELA_make = (A_HEAP(A68_310 ));
VFOAELA.Sizes = VPMAELA_formulas;
VFOAELA.Inst = NUMAELA_instance;
VFOAELA.Makenames = RFOAELA_makenames;
(*UFOAELA_make) = VFOAELA;
 /* line 1438: */
VPMAELA_formulas = BBAATRN_nilformulas;
 /* line 1439: */
 /* line 1440: */
PVMAELA_newstep(A_UNITE(WFOAELA,mode9,9,UFOAELA_make));
} 
A_PROC_EXIT(bmake);
return;
} 
#undef NL

A68_VOID  XFOAELA_bfor(void)
{ 
A_PROC_ENTRY(bfor);
{ 
VPMAELA_formulas = BBAATRN_nilformulas;
 /* line 1444: */
 /* line 1445: */
GUMAELA_joinstack = RAAATRN_niljoins;
} 
A_PROC_EXIT(bfor);
return;
} 
#undef NL

A68_VOID  YFOAELA_bjoin(void)
{ 
A68_311 * ZFOAELA_join;
A68_311  AGOAELA;  /* collateral clause result */
A68_INT  BGOAELA;  /* YIELD */
A68_305  CGOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(bjoin);
{ 
ZFOAELA_join = (A_HEAP(A68_311 ));
BGOAELA = (JUMAELA_stackind-1) ;
AGOAELA.From = (*(&A_VINDEX(IUMAELA_stack,BGOAELA)));
AGOAELA.To = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
(*ZFOAELA_join) = AGOAELA;
 /* line 1449: */
JUMAELA_stackind-=2;
 /* line 1450: */
 /* line 1451: */
PVMAELA_newstep(A_UNITE(CGOAELA,mode10,10,ZFOAELA_join));
} 
A_PROC_EXIT(bjoin);
return;
} 
#undef NL

A68_VOID  DGOAELA_bjoins(void)
{ 
A68_249 * EGOAELA_repls;
A68_314 * FGOAELA_joins;
A68_249  GGOAELA;  /* collateral clause result */
A68_249 * HGOAELA;  /* YIELD */
A68_314  IGOAELA;  /* collateral clause result */
A68_314 * JGOAELA;  /* YIELD */
A68_312  KGOAELA;  /* collateral clause result */
A68_312 * LGOAELA;  /* YIELD */
A68_305  MGOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(bjoins);
{ 
EGOAELA_repls = BBAATRN_nilformulas;
 /* line 1455: */
FGOAELA_joins = RAAATRN_niljoins;
 /* line 1456: */
for ( ;; )
{ 
 /* line 1457: */
if ( !((VPMAELA_formulas!=BBAATRN_nilformulas)) ) break;
GGOAELA.Formula = (*(&(VPMAELA_formulas->Formula)));
GGOAELA.Rest = EGOAELA_repls;
HGOAELA = A_HEAP(A68_249 ) ;
(*HGOAELA) = GGOAELA ;
EGOAELA_repls = HGOAELA;
 /* line 1458: */
 /* line 1459: */
VPMAELA_formulas = (*(&(VPMAELA_formulas->Rest)));
}
 /* line 1460: */
for ( ;; )
{ 
 /* line 1461: */
if ( !((GUMAELA_joinstack!=RAAATRN_niljoins)) ) break;
IGOAELA.Join = (*(&(GUMAELA_joinstack->Join)));
IGOAELA.Rest = FGOAELA_joins;
JGOAELA = A_HEAP(A68_314 ) ;
(*JGOAELA) = IGOAELA ;
FGOAELA_joins = JGOAELA;
 /* line 1462: */
 /* line 1463: */
GUMAELA_joinstack = (*(&(GUMAELA_joinstack->Rest)));
}
 /* line 1464: */
KGOAELA.Repls = EGOAELA_repls;
KGOAELA.Joins = FGOAELA_joins;
 /* line 1465: */
LGOAELA = A_HEAP(A68_312 ) ;
(*LGOAELA) = KGOAELA ;
PVMAELA_newstep(A_UNITE(MGOAELA,mode11,11,LGOAELA));
} 
A_PROC_EXIT(bjoins);
return;
} 
#undef NL

A68_VOID  NGOAELA_bjoins1(void)
{ 
A68_314  OGOAELA;  /* collateral clause result */
A68_INT  PGOAELA;  /* YIELD */
A68_314 * QGOAELA;  /* YIELD */
A_PROC_ENTRY(bjoins1);
{ 
 /* line 1469: */
PGOAELA = (JUMAELA_stackind-1) ;
OGOAELA.Join.From = (*(&A_VINDEX(IUMAELA_stack,PGOAELA)));
OGOAELA.Join.To = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
OGOAELA.Rest = GUMAELA_joinstack;
QGOAELA = A_HEAP(A68_314 ) ;
(*QGOAELA) = OGOAELA ;
GUMAELA_joinstack = QGOAELA;
 /* line 1470: */
 /* line 1471: */
JUMAELA_stackind-=2;
} 
A_PROC_EXIT(bjoins1);
return;
} 
#undef NL

A68_VOID  RGOAELA_pardecl(void)
{ 
A68_305  SGOAELA;  /* OPERATORS - unite union */
A_PROC_ENTRY(pardecl);
PVMAELA_newstep(A_UUNITE(SGOAELA,0,LTMAELA_declaration));
A_PROC_EXIT(pardecl);
return;
} 
#undef NL

A68_VOID  TGOAELA_biddec2(void)
{ 
A68_309 * UGOAELA_let;
A68_309  VGOAELA;  /* collateral clause result */
A68_305  WGOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(biddec2);
{ 
UGOAELA_let = (A_HEAP(A68_309 ));
VGOAELA.Letnames = LUMAELA_names;
VGOAELA.Unit = (*(&A_VINDEX(IUMAELA_stack,JUMAELA_stackind)));
(*UGOAELA_let) = VGOAELA;
 /* line 1478: */
JUMAELA_stackind-=1;
 /* line 1479: */
 /* line 1480: */
PVMAELA_newstep(A_UNITE(WGOAELA,mode8,8,UGOAELA_let));
} 
A_PROC_EXIT(biddec2);
return;
} 
#undef NL

A68_VOID  XGOAELA_pt(void)
{ 
A68_237  YGOAELA_cond;
A68_307 * ZGOAELA_print;
A68_307  AHOAELA;  /* collateral clause result */
A68_305  BHOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pt);
{ 
YGOAELA_cond = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 1484: */
ZGOAELA_print = (A_HEAP(A68_307 ));
AHOAELA.Cond = YGOAELA_cond;
AHOAELA.Print = PTMAELA_printitems;
(*ZGOAELA_print) = AHOAELA;
 /* line 1485: */
PTMAELA_printitems = MAAATRN_nilprintitems;
 /* line 1486: */
QTMAELA_nextprintitems = (&PTMAELA_printitems);
 /* line 1487: */
 /* line 1488: */
PVMAELA_newstep(A_UNITE(BHOAELA,mode6,6,ZGOAELA_print));
} 
A_PROC_EXIT(pt);
return;
} 
#undef NL

A68_VOID  CHOAELA_ptflt(void)
{ 
A68_237  DHOAELA_cond;
A68_308 * EHOAELA_fault;
A68_308  FHOAELA;  /* collateral clause result */
A68_305  GHOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ptflt);
{ 
DHOAELA_cond = (*(&(QPMAELA_formulastack->Formula)));
DQMAELA_unstackformula();
 /* line 1492: */
EHOAELA_fault = (A_HEAP(A68_308 ));
FHOAELA.Cond = DHOAELA_cond;
FHOAELA.Fault = PTMAELA_printitems;
(*EHOAELA_fault) = FHOAELA;
 /* line 1493: */
PTMAELA_printitems = MAAATRN_nilprintitems;
 /* line 1494: */
QTMAELA_nextprintitems = (&PTMAELA_printitems);
 /* line 1495: */
 /* line 1496: */
PVMAELA_newstep(A_UNITE(GHOAELA,mode7,7,EHOAELA_fault));
} 
A_PROC_EXIT(ptflt);
return;
} 
#undef NL

A68_VOID  HHOAELA_bvar1(void)
{ 
A68_249  IHOAELA;  /* collateral clause result */
A68_249 * JHOAELA;  /* YIELD */
A_PROC_ENTRY(bvar1);
{ 
IHOAELA.Formula = (*(&(QPMAELA_formulastack->Formula)));
IHOAELA.Rest = VPMAELA_formulas;
JHOAELA = A_HEAP(A68_249 ) ;
(*JHOAELA) = IHOAELA ;
VPMAELA_formulas = JHOAELA;
 /* line 1500: */
 /* line 1501: */
DQMAELA_unstackformula();
} 
A_PROC_EXIT(bvar1);
return;
} 
#undef NL

A68_VOID  KHOAELA_strmessage(void)
{ 
A68_321  LHOAELA;  /* collateral clause result */
A68_322  MHOAELA;  /* OPERATORS - mode -> union mode */
A68_321 * NHOAELA;  /* YIELD */
A_PROC_ENTRY(strmessage);
{ 
 /* line 1505: */
LHOAELA.Item = A_UNITE(MHOAELA,mode1,1,TOMAELA_identifier);
LHOAELA.Rest = MAAATRN_nilprintitems;
NHOAELA = A_HEAP(A68_321 ) ;
(*NHOAELA) = LHOAELA ;
(*QTMAELA_nextprintitems) = NHOAELA;
 /* line 1506: */
 /* line 1507: */
QTMAELA_nextprintitems = (&((*QTMAELA_nextprintitems)->Rest));
} 
A_PROC_EXIT(strmessage);
return;
} 
#undef NL

A68_VOID  OHOAELA_printint(void)
{ 
A68_321  PHOAELA;  /* collateral clause result */
A68_322  QHOAELA;  /* OPERATORS - mode -> union mode */
A68_248 * RHOAELA;  /* YIELD */
A68_321 * SHOAELA;  /* YIELD */
A_PROC_ENTRY(printint);
{ 
 /* line 1511: */
RHOAELA = DFAATRN_makeformulatag(ZPMAELA_formula) ;
PHOAELA.Item = A_UNITE(QHOAELA,mode2,2,RHOAELA);
PHOAELA.Rest = MAAATRN_nilprintitems;
SHOAELA = A_HEAP(A68_321 ) ;
(*SHOAELA) = PHOAELA ;
(*QTMAELA_nextprintitems) = SHOAELA;
 /* line 1512: */
 /* line 1513: */
QTMAELA_nextprintitems = (&((*QTMAELA_nextprintitems)->Rest));
} 
A_PROC_EXIT(printint);
return;
} 
#undef NL

A68_VOID  THOAELA_ktypein(void)
{ 
A68_357  YHOAELA;  /* avoid structure result */
A68_356  DIOAELA;  /* avoid structure result */
A68_355  IIOAELA;  /* avoid structure result */
A68_235 * JIOAELA_usage;
A68_235  KIOAELA;  /* collateral clause result */
A68_268  LIOAELA;  /* collateral clause result */
A68_228  MIOAELA;  /* OPERATORS - mode -> union mode */
A68_253  NIOAELA;  /* OPERATORS - mode -> union mode */
A68_266  OIOAELA;  /* OPERATORS - mode -> union mode */
A68_262 * PIOAELA;  /* YIELD */
A68_INT  QIOAELA;  /* YIELD */
A68_268 * RIOAELA;  /* YIELD */
A68_268 ** SIOAELA;  /* YIELD */
A_PROC_ENTRY(ktypein);
{ 
VHOAELA_generator( A68_FALSE, &YHOAELA );
OQMAELA_types = YHOAELA;
 /* line 1517: */
AIOAELA_generator( A68_FALSE, &DIOAELA );
QQMAELA_ints = DIOAELA;
 /* line 1518: */
BQMAELA_unstackin();
 /* line 1519: */
FIOAELA_generator( A68_FALSE, &IIOAELA );
SQMAELA_attrs = IIOAELA;
 /* line 1520: */
BQMAELA_unstackin();
 /* line 1521: */
JIOAELA_usage = (A_HEAP(A68_235 ));
KIOAELA.Contextno = WOMAELA_contextno;
KIOAELA.Closureno = XOMAELA_closureno;
KIOAELA.Libv_spec = (*(&(MPMAELA_instack->In)));
KIOAELA.Libv_body = 0;
KIOAELA.Import = A68_FALSE;
KIOAELA.Export = A68_FALSE;
(*JIOAELA_usage) = KIOAELA;
 /* line 1522: */
 /* line 1523: */
LIOAELA.Sort = OKAATRN_outerdec;
LIOAELA.Typename = (*(&(NPMAELA_inidstack->Inid)));
LIOAELA.Attr = A_UNITE(MIOAELA,mode5,5,(&ZHAATRN_attrnull));
PIOAELA = XFAATRN_maketypetag(A_UNITE(NIOAELA,mode9,9,(&DIAATRN_tnull))) ;
LIOAELA.Body = A_UNITE(OIOAELA,mode3,3,PIOAELA);
LIOAELA.Usage = JIOAELA_usage;
QIOAELA = 1 ;
RIOAELA = A_HEAP(A68_268 ) ;
(*RIOAELA) = LIOAELA ;
SIOAELA = (&A_VINDEX(OQMAELA_types,QIOAELA)) ;
(*SIOAELA) = RIOAELA;
 /* line 1524: */
CQMAELA_unstackinid();
 /* line 1525: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(ktypein);
return;
} 
#undef NL

A68_VOID  TIOAELA_ktypep(void)
{ 
A68_INT  UIOAELA;  /* YIELD */
A68_266 * VIOAELA;  /* YIELD */
A68_INT  WIOAELA;  /* YIELD */
A68_228 * XIOAELA;  /* YIELD */
A_PROC_ENTRY(ktypep);
{ 
UIOAELA = 1 ;
VIOAELA = (&((*(&A_VINDEX(OQMAELA_types,UIOAELA)))->Body)) ;
(*VIOAELA) = STMAELA_typebody;
 /* line 1529: */
WIOAELA = 1 ;
XIOAELA = (&((*(&A_VINDEX(OQMAELA_types,WIOAELA)))->Attr)) ;
(*XIOAELA) = (*(&(WPMAELA_attrstack->Elem)));
 /* line 1530: */
HQMAELA_unstackattr();
 /* line 1531: */
 /* line 1532: */
NNMAELA_spectype = TKAATRN_outertype;
} 
A_PROC_EXIT(ktypep);
return;
} 
#undef NL

A68_VOID  YIOAELA_kintp(void)
{ 
A68_INT  ZIOAELA;  /* YIELD */
A68_251  AJOAELA;  /* OPERATORS - unite union */
A68_251 * BJOAELA;  /* YIELD */
A68_INT  CJOAELA;  /* YIELD */
A68_228 * DJOAELA;  /* YIELD */
A_PROC_ENTRY(kintp);
{ 
ZIOAELA = 1 ;
BJOAELA = (&((*(&A_VINDEX(QQMAELA_ints,ZIOAELA)))->Value)) ;
(*BJOAELA) = A_UUNITE(AJOAELA,0,ZPMAELA_formula);
 /* line 1536: */
CJOAELA = 1 ;
DJOAELA = (&((*(&A_VINDEX(QQMAELA_ints,CJOAELA)))->Attr)) ;
(*DJOAELA) = (*(&(WPMAELA_attrstack->Elem)));
 /* line 1537: */
HQMAELA_unstackattr();
 /* line 1538: */
 /* line 1539: */
NNMAELA_spectype = SKAATRN_outerint;
} 
A_PROC_EXIT(kintp);
return;
} 
#undef NL

A68_VOID  EJOAELA_kintin(void)
{ 
A68_356  JJOAELA;  /* avoid structure result */
A68_355  OJOAELA;  /* avoid structure result */
A68_235 * PJOAELA_usage;
A68_235  QJOAELA;  /* collateral clause result */
A68_250  RJOAELA;  /* collateral clause result */
A68_228  SJOAELA;  /* OPERATORS - mode -> union mode */
A68_251  TJOAELA;  /* OPERATORS - mode -> union mode */
A68_INT  UJOAELA;  /* YIELD */
A68_250 * VJOAELA;  /* YIELD */
A68_250 ** WJOAELA;  /* YIELD */
A_PROC_ENTRY(kintin);
{ 
GJOAELA_generator( A68_FALSE, &JJOAELA );
QQMAELA_ints = JJOAELA;
 /* line 1543: */
LJOAELA_generator( A68_FALSE, &OJOAELA );
SQMAELA_attrs = OJOAELA;
 /* line 1544: */
BQMAELA_unstackin();
 /* line 1545: */
PJOAELA_usage = (A_HEAP(A68_235 ));
QJOAELA.Contextno = WOMAELA_contextno;
QJOAELA.Closureno = XOMAELA_closureno;
QJOAELA.Libv_spec = (*(&(MPMAELA_instack->In)));
QJOAELA.Libv_body = 0;
QJOAELA.Import = A68_FALSE;
QJOAELA.Export = A68_FALSE;
(*PJOAELA_usage) = QJOAELA;
 /* line 1546: */
 /* line 1547: */
RJOAELA.Sort = OKAATRN_outerdec;
RJOAELA.Intname = (*(&(NPMAELA_inidstack->Inid)));
RJOAELA.Attr = A_UNITE(SJOAELA,mode5,5,(&ZHAATRN_attrnull));
RJOAELA.Value = A_UNITE(TJOAELA,mode10,10,(&BIAATRN_fnull));
RJOAELA.Usage = PJOAELA_usage;
UJOAELA = 1 ;
VJOAELA = A_HEAP(A68_250 ) ;
(*VJOAELA) = RJOAELA ;
WJOAELA = (&A_VINDEX(QQMAELA_ints,UJOAELA)) ;
(*WJOAELA) = VJOAELA;
 /* line 1548: */
BQMAELA_unstackin();
 /* line 1549: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(kintin);
return;
} 
#undef NL

A68_VOID  XJOAELA_kconstin(void)
{ 
A68_358  CKOAELA;  /* avoid structure result */
A68_357  HKOAELA;  /* avoid structure result */
A68_356  MKOAELA;  /* avoid structure result */
A68_355  RKOAELA;  /* avoid structure result */
A68_235 * SKOAELA_usage;
A68_235  TKOAELA;  /* collateral clause result */
A68_274  UKOAELA;  /* collateral clause result */
A68_228  VKOAELA;  /* OPERATORS - mode -> union mode */
A68_275  WKOAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XKOAELA;  /* YIELD */
A68_274 * YKOAELA;  /* YIELD */
A68_274 ** ZKOAELA;  /* YIELD */
A_PROC_ENTRY(kconstin);
{ 
ZJOAELA_generator( A68_FALSE, &CKOAELA );
RQMAELA_consts = CKOAELA;
 /* line 1553: */
EKOAELA_generator( A68_FALSE, &HKOAELA );
OQMAELA_types = HKOAELA;
 /* line 1554: */
BQMAELA_unstackin();
 /* line 1555: */
JKOAELA_generator( A68_FALSE, &MKOAELA );
QQMAELA_ints = MKOAELA;
 /* line 1556: */
BQMAELA_unstackin();
 /* line 1557: */
OKOAELA_generator( A68_FALSE, &RKOAELA );
SQMAELA_attrs = RKOAELA;
 /* line 1558: */
BQMAELA_unstackin();
 /* line 1559: */
SKOAELA_usage = (A_HEAP(A68_235 ));
TKOAELA.Contextno = WOMAELA_contextno;
TKOAELA.Closureno = XOMAELA_closureno;
TKOAELA.Libv_spec = (*(&(MPMAELA_instack->In)));
TKOAELA.Libv_body = 0;
TKOAELA.Import = A68_FALSE;
TKOAELA.Export = A68_FALSE;
(*SKOAELA_usage) = TKOAELA;
 /* line 1560: */
 /* line 1561: */
UKOAELA.Sort = OKAATRN_outerdec;
UKOAELA.Constname = (*(&(NPMAELA_inidstack->Inid)));
UKOAELA.Attr = A_UNITE(VKOAELA,mode5,5,(&ZHAATRN_attrnull));
UKOAELA.Value = A_UNITE(WKOAELA,mode34,34,(&FIAATRN_unull));
UKOAELA.Usage = SKOAELA_usage;
XKOAELA = 1 ;
YKOAELA = A_HEAP(A68_274 ) ;
(*YKOAELA) = UKOAELA ;
ZKOAELA = (&A_VINDEX(RQMAELA_consts,XKOAELA)) ;
(*ZKOAELA) = YKOAELA;
 /* line 1562: */
BQMAELA_unstackin();
 /* line 1563: */
CQMAELA_unstackinid();
} 
A_PROC_EXIT(kconstin);
return;
} 
#undef NL

A68_VOID  ALOAELA_kconstp(void)
{ 
A68_INT  BLOAELA;  /* YIELD */
A68_275 * CLOAELA;  /* YIELD */
A68_INT  DLOAELA;  /* YIELD */
A68_228 * ELOAELA;  /* YIELD */
A_PROC_ENTRY(kconstp);
{ 
BLOAELA = 1 ;
CLOAELA = (&((*(&A_VINDEX(RQMAELA_consts,BLOAELA)))->Value)) ;
(*CLOAELA) = AQMAELA_const;
 /* line 1567: */
DLOAELA = 1 ;
ELOAELA = (&((*(&A_VINDEX(RQMAELA_consts,DLOAELA)))->Attr)) ;
(*ELOAELA) = (*(&(WPMAELA_attrstack->Elem)));
 /* line 1568: */
HQMAELA_unstackattr();
 /* line 1569: */
 /* line 1570: */
NNMAELA_spectype = UKAATRN_outerconst;
} 
A_PROC_EXIT(kconstp);
return;
} 
#undef NL

A68_VOID  FLOAELA_kattrin(void)
{ 
A68_355  KLOAELA;  /* avoid structure result */
A68_235 * LLOAELA_usage;
A68_235  MLOAELA;  /* collateral clause result */
A68_234  NLOAELA;  /* collateral clause result */
A68_228  OLOAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PLOAELA;  /* YIELD */
A68_234 * QLOAELA;  /* YIELD */
A68_234 ** RLOAELA;  /* YIELD */
A_PROC_ENTRY(kattrin);
{ 
HLOAELA_generator( A68_FALSE, &KLOAELA );
SQMAELA_attrs = KLOAELA;
 /* line 1574: */
LLOAELA_usage = (A_HEAP(A68_235 ));
MLOAELA.Contextno = WOMAELA_contextno;
MLOAELA.Closureno = XOMAELA_closureno;
MLOAELA.Libv_spec = (*(&(MPMAELA_instack->In)));
MLOAELA.Libv_body = 0;
MLOAELA.Import = A68_FALSE;
MLOAELA.Export = A68_FALSE;
(*LLOAELA_usage) = MLOAELA;
 /* line 1575: */
NLOAELA.Sort = OKAATRN_outerdec;
NLOAELA.Attrname = (*(&(NPMAELA_inidstack->Inid)));
NLOAELA.Value = A_UNITE(OLOAELA,mode5,5,(&ZHAATRN_attrnull));
NLOAELA.Usage = LLOAELA_usage;
PLOAELA = 1 ;
QLOAELA = A_HEAP(A68_234 ) ;
(*QLOAELA) = NLOAELA ;
RLOAELA = (&A_VINDEX(SQMAELA_attrs,PLOAELA)) ;
(*RLOAELA) = QLOAELA;
 /* line 1576: */
CQMAELA_unstackinid();
 /* line 1577: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(kattrin);
return;
} 
#undef NL

A68_VOID  SLOAELA_kattrp(void)
{ 
A68_INT  TLOAELA;  /* YIELD */
A68_228 * ULOAELA;  /* YIELD */
A_PROC_ENTRY(kattrp);
{ 
TLOAELA = 1 ;
ULOAELA = (&((*(&A_VINDEX(SQMAELA_attrs,TLOAELA)))->Value)) ;
(*ULOAELA) = XPMAELA_attribute;
 /* line 1581: */
 /* line 1582: */
NNMAELA_spectype = RKAATRN_outerattr;
} 
A_PROC_EXIT(kattrp);
return;
} 
#undef NL

A68_VOID  VLOAELA_kfnenv(void)
{ 
A68_358  AMOAELA;  /* avoid structure result */
A68_357  FMOAELA;  /* avoid structure result */
A68_356  KMOAELA;  /* avoid structure result */
A68_355  PMOAELA;  /* avoid structure result */
A_PROC_ENTRY(kfnenv);
{ 
XLOAELA_generator( A68_FALSE, &AMOAELA );
RQMAELA_consts = AMOAELA;
 /* line 1586: */
CMOAELA_generator( A68_FALSE, &FMOAELA );
OQMAELA_types = FMOAELA;
 /* line 1587: */
BQMAELA_unstackin();
 /* line 1588: */
HMOAELA_generator( A68_FALSE, &KMOAELA );
QQMAELA_ints = KMOAELA;
 /* line 1589: */
BQMAELA_unstackin();
 /* line 1590: */
MMOAELA_generator( A68_FALSE, &PMOAELA );
SQMAELA_attrs = PMOAELA;
 /* line 1591: */
 /* line 1592: */
BQMAELA_unstackin();
} 
A_PROC_EXIT(kfnenv);
return;
} 
#undef NL

A68_VOID  QMOAELA_kfnin(void)
{ 
A68_BOOL  RMOAELA_import;
A68_INT  SMOAELA_libvspec;
A68_235  TMOAELA;  /* collateral clause result */
A68_235 * UMOAELA;  /* YIELD */
A68_235 ** VMOAELA;  /* YIELD */
A68_INT  WMOAELA;  /* YIELD */
A68_351 ** XMOAELA;  /* YIELD */
A68_336  YMOAELA;  /* OPERATORS - mode -> union mode */
A68_306  ZMOAELA;  /* YIELD */
A_PROC_ENTRY(kfnin);
{ 
NNMAELA_spectype = VKAATRN_outerfn;
 /* line 1596: */
RMOAELA_import = (ROMAELA_integer==1);
 /* line 1597: */
SMOAELA_libvspec = (*(&(MPMAELA_instack->In)));
 /* line 1598: */
BQMAELA_unstackin();
 /* line 1599: */
 /* line 1600: */
TMOAELA.Contextno = WOMAELA_contextno;
TMOAELA.Closureno = XOMAELA_closureno;
TMOAELA.Libv_spec = SMOAELA_libvspec;
TMOAELA.Libv_body = 0;
TMOAELA.Import = RMOAELA_import;
TMOAELA.Export = YOMAELA_export;
UMOAELA = A_HEAP(A68_235 ) ;
(*UMOAELA) = TMOAELA ;
VMOAELA = (&(MUMAELA_fndec->Usage)) ;
(*VMOAELA) = UMOAELA;
 /* line 1601: */
WMOAELA = 1 ;
XMOAELA = (&A_VINDEX(PQMAELA_fns,WMOAELA)) ;
(*XMOAELA) = MUMAELA_fndec;
 /* line 1602: */
 /* line 1603: */
ZMOAELA = (*LHAATRN_makefnname(1)) ;
LTMAELA_declaration = A_UNITE(YMOAELA,mode5,5,ZMOAELA);
} 
A_PROC_EXIT(kfnin);
return;
} 
#undef NL

A68_VOID  ANOAELA_macin(void)
{ 
A68_352  FNOAELA;  /* avoid structure result */
A68_352 * GNOAELA;  /* YIELD */
A_PROC_ENTRY(macin);
 /* line 1607: */
if ( (ROMAELA_integer!=0) )
{ 
CNOAELA_generator( A68_FALSE, &FNOAELA );
GNOAELA = (&(MUMAELA_fndec->Macspecs)) ;
(*GNOAELA) = FNOAELA;
 /* line 1608: */
 /* line 1609: */
OTMAELA_macnum = 1;
} 
A_PROC_EXIT(macin);
return;
} 
#undef NL

A68_VOID  HNOAELA_macend(void)
{ 
A_PROC_ENTRY(macend);
OTMAELA_macnum = 0;
A_PROC_EXIT(macend);
return;
} 
#undef NL

A68_VOID  INOAELA_kinds(void)
{ 
A68_359  NNOAELA;  /* avoid structure result */
A68_431  SNOAELA;  /* avoid structure result */
A_PROC_ENTRY(kinds);
{ 
KNOAELA_generator( A68_FALSE, &NNOAELA );
PQMAELA_fns = NNOAELA;
 /* line 1615: */
PNOAELA_generator( A68_FALSE, &SNOAELA );
TQMAELA_inds = SNOAELA;
} 
A_PROC_EXIT(kinds);
return;
} 
#undef NL

A68_VOID  TNOAELA_checkloop(void)
{ 
A68_347  UNOAELA;  /* united object - for case conformity */
A68_346 * VNOAELA_bc;
A68_227  WNOAELA;  /* collateral clause result */
A68_227 * XNOAELA;  /* YIELD */
A68_227 ** YNOAELA;  /* YIELD */
A68_346 * ZNOAELA_newbc;
A68_346  AOOAELA;  /* collateral clause result */
A68_227  BOOAELA;  /* collateral clause result */
A68_227 * COOAELA;  /* YIELD */
A68_347  DOOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checkloop);
 /* line 1621: */
UNOAELA = RTMAELA_body ;
switch ( UNOAELA.mode )
{ 
case 11: /* REF STRUCT(REF MODE227,BOOL,MODE347)  */
VNOAELA_bc = (UNOAELA.data.mode11);
 /* line 1622: */
WNOAELA.Int = ROMAELA_integer;
WNOAELA.Rest = (*(&(VNOAELA_bc->Joincheck)));
 /* line 1623: */
XNOAELA = A_HEAP(A68_227 ) ;
(*XNOAELA) = WNOAELA ;
YNOAELA = (&(VNOAELA_bc->Joincheck)) ;
(*YNOAELA) = XNOAELA;
break;
default: 
ZNOAELA_newbc = (A_HEAP(A68_346 ));
BOOAELA.Int = ROMAELA_integer;
BOOAELA.Rest = OAAATRN_nilints;
COOAELA = A_HEAP(A68_227 ) ;
(*COOAELA) = BOOAELA ;
AOOAELA.Joincheck = COOAELA;
AOOAELA.Check = A68_FALSE;
AOOAELA.Fnbody = RTMAELA_body;
(*ZNOAELA_newbc) = AOOAELA;
 /* line 1624: */
 /* line 1625: */
RTMAELA_body = A_UNITE(DOOAELA,mode11,11,ZNOAELA_newbc);
break;
} 
A_PROC_EXIT(checkloop);
return;
} 
#undef NL

A68_VOID  EOOAELA_endp(void)
{ 
A68_354 * FOOAELA_environ;
A68_354  GOOAELA;  /* collateral clause result */
A68_360  HOOAELA;  /* collateral clause result */
A_PROC_ENTRY(endp);
{ 
FOOAELA_environ = (A_HEAP(A68_354 ));
GOOAELA.Attrs = SQMAELA_attrs;
GOOAELA.Ints = QQMAELA_ints;
GOOAELA.Types = OQMAELA_types;
GOOAELA.Consts = RQMAELA_consts;
GOOAELA.Fns = PQMAELA_fns;
(*FOOAELA_environ) = GOOAELA;
 /* line 1630: */
HOOAELA.Closureno = XOMAELA_closureno;
HOOAELA.Sort = NNMAELA_spectype;
HOOAELA.Environ = FOOAELA_environ;
KTMAELA_extdeclaration = HOOAELA;
 /* line 1631: */
 /* line 1632: */
ONMAELA_exit = A68_TRUE;
} 
A_PROC_EXIT(endp);
return;
} 
#undef NL

A68_VOID  IOOAELA_indsp(void)
{ 
A68_INT  JOOAELA_stack;
A68_INT  KOOAELA_num_names;
A68_430  LOOAELA;  /* collateral clause result */
A68_430 * MOOAELA;  /* YIELD */
A68_430 ** NOOAELA;  /* YIELD */
A_PROC_ENTRY(indsp);
{ 
JOOAELA_stack = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 1637: */
KOOAELA_num_names = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 1638: */
LOOAELA.Num_names = KOOAELA_num_names;
 /* line 1639: */
LOOAELA.Stack = JOOAELA_stack;
MOOAELA = A_HEAP(A68_430 ) ;
(*MOOAELA) = LOOAELA ;
NOOAELA = (&A_VINDEX(TQMAELA_inds,ROMAELA_integer)) ;
(*NOOAELA) = MOOAELA;
} 
A_PROC_EXIT(indsp);
return;
} 
#undef NL

A68_VOID  OOOAELA_fncallp(void)
{ 
A68_347 * POOAELA;  /* YIELD */
A68_INT  QOOAELA_fnno;
A68_351 ** ROOAELA;  /* YIELD */
A68_336  SOOAELA;  /* OPERATORS - mode -> union mode */
A68_306  TOOAELA;  /* YIELD */
A_PROC_ENTRY(fncallp);
{ 
POOAELA = (&(MUMAELA_fndec->Fnbody)) ;
(*POOAELA) = RTMAELA_body;
 /* line 1643: */
QOOAELA_fnno = (*(&(MPMAELA_instack->In)));
BQMAELA_unstackin();
 /* line 1644: */
ROOAELA = (&A_VINDEX(PQMAELA_fns,QOOAELA_fnno)) ;
(*ROOAELA) = MUMAELA_fndec;
 /* line 1645: */
 /* line 1646: */
TOOAELA = (*LHAATRN_makefnname(QOOAELA_fnno)) ;
LTMAELA_declaration = A_UNITE(SOOAELA,mode5,5,TOOAELA);
} 
A_PROC_EXIT(fncallp);
return;
} 
#undef NL
 /* line 1650: */

A68_VOID  ZOOAELA_assemble_start(A68_INT  No, A68_INT  Closno, A68_BOOL  Ex, A68_203 * Specbuf, A68_97  Pflt)
{ 
A68_464  BPOAELA_generator;   /* proc value of non-global proc */
A68_431  GPOAELA;  /* avoid structure result */
A68_253  HPOAELA;  /* OPERATORS - mode -> union mode */
A68_237  IPOAELA;  /* OPERATORS - mode -> union mode */
A68_275  JPOAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(assemble_start);
 /* line 1651: */
{ 
ONMAELA_exit = A68_FALSE;
 /* line 1652: */
VOMAELA_buffer = Specbuf;
 /* line 1653: */
WOMAELA_contextno = No;
 /* line 1654: */
XOMAELA_closureno = Closno;
 /* line 1655: */
YOMAELA_export = Ex;
 /* line 1656: */
ZOMAELA_flt = Pflt;
 /* line 1658: */
SQMAELA_attrs = MCAATRN_nullattrdecs;
 /* line 1659: */
QQMAELA_ints = SCAATRN_nullintdecs;
 /* line 1660: */
OQMAELA_types = YCAATRN_nulltypedecs;
 /* line 1661: */
RQMAELA_consts = EDAATRN_nullconstdecs;
 /* line 1662: */
PQMAELA_fns = KDAATRN_nullfndecs;
 /* line 1663: */
A_CLOSURE( BPOAELA_generator, CPOAELA_generator, DPOAELA_generator );
A_CALLPROC(BPOAELA_generator,(A68_FALSE, &GPOAELA),(A68_FALSE, &GPOAELA,(BPOAELA_generator).nonlocals));
TQMAELA_inds = GPOAELA;
 /* line 1664: */
JPMAELA_idstack = LAAATRN_nilids;
 /* line 1665: */
MPMAELA_instack = SMMAELA_nilinstack;
 /* line 1666: */
NPMAELA_inidstack = TMMAELA_nilinidstack;
 /* line 1667: */
OPMAELA_typestack = UMMAELA_niltypestack;
 /* line 1668: */
KPMAELA_attrstr = DBAATRN_nilattrstr;
 /* line 1669: */
LPMAELA_nextattr = (&KPMAELA_attrstr);
 /* line 1670: */
QPMAELA_formulastack = VMMAELA_nilformulastack;
 /* line 1671: */
RPMAELA_conststack = WMMAELA_nilconststack;
 /* line 1672: */
SPMAELA_tstrstack = XMMAELA_niltstrstack;
 /* line 1673: */
TPMAELA_unitstack = FPMAELA_nilunitstack;
 /* line 1674: */
YPMAELA_type = A_UNITE(HPOAELA,mode9,9,(&DIAATRN_tnull));
 /* line 1675: */
ZPMAELA_formula = A_UNITE(IPOAELA,mode10,10,(&BIAATRN_fnull));
 /* line 1676: */
AQMAELA_const = A_UNITE(JPOAELA,mode34,34,(&FIAATRN_unull));
 /* line 1678: */
 /* line 1679: */
DVMAELA_default();
} 
A_PROC_EXIT(assemble_start);
return;
} 
#undef NL

A68_VOID  LPOAELA_assemble_body(A68_203 * Bodybuffer)
{ 
A_PROC_ENTRY(assemble_body);
 /* line 1682: */
{ 
ONMAELA_exit = A68_FALSE;
 /* line 1683: */
VOMAELA_buffer = Bodybuffer;
 /* line 1684: */
 /* line 1685: */
DVMAELA_default();
} 
A_PROC_EXIT(assemble_body);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void NMMAELA(void)   /* initialise DECS assembleproc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/assembleproc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/sidanalyser.m","/u/model/ella/transform/assoc/mfiles/closureprocs.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAELA();   /* USE sidanalyser */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
NWIAELA();   /* USE databasebuffers */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/assembleproc.a68";
A_config.translation_time = "Tue Apr  4 10:34:59 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MMMAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:34:59 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS assembleproc);
UEAALIB_a68config(LGAALIB_configinfo, RMMAELA);
 /* line 94: */
 /* line 103: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 115: */
 /* line 117: */
 /* line 126: */
 /* line 128: */
 /* line 130: */
ONMAELA_exit = A68_FALSE;
 /* line 132: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 158: */
 /* line 161: */
 /* line 168: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 179: */
JPMAELA_idstack = (A68_226 *)A68_NIL;
 /* line 180: */
KPMAELA_attrstr = (A68_231 *)A68_NIL;
 /* line 181: */
LPMAELA_nextattr = (&KPMAELA_attrstr);
 /* line 182: */
MPMAELA_instack = SMMAELA_nilinstack;
 /* line 183: */
NPMAELA_inidstack = TMMAELA_nilinidstack;
 /* line 184: */
OPMAELA_typestack = UMMAELA_niltypestack;
 /* line 185: */
PPMAELA_inststack = BNMAELA_nilinststack;
 /* line 186: */
QPMAELA_formulastack = VMMAELA_nilformulastack;
 /* line 187: */
RPMAELA_conststack = WMMAELA_nilconststack;
 /* line 188: */
SPMAELA_tstrstack = XMMAELA_niltstrstack;
 /* line 189: */
TPMAELA_unitstack = FPMAELA_nilunitstack;
 /* line 190: */
UPMAELA_multassign = HPMAELA_nilmultassign;
 /* line 191: */
VPMAELA_formulas = (A68_249 *)A68_NIL;
 /* line 192: */
WPMAELA_attrstack = (A68_231 *)A68_NIL;
 /* line 194: */
 /* line 196: */
 /* line 197: */
 /* line 201: */
 /* line 202: */
 /* line 206: */
 /* line 207: */
 /* line 211: */
 /* line 212: */
 /* line 216: */
 /* line 217: */
 /* line 222: */
 /* line 223: */
 /* line 227: */
 /* line 228: */
 /* line 233: */
 /* line 235: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 243: */
 /* line 244: */
 /* line 246: */
 /* line 247: */
 /* line 249: */
 /* line 268: */
 /* line 290: */
 /* line 292: */
 /* line 297: */
 /* line 301: */
 /* line 310: */
 /* line 313: */
 /* line 314: */
 /* line 315: */
MTMAELA_fast = A68_FALSE;
 /* line 316: */
OTMAELA_macnum = 0;
 /* line 319: */
 /* line 320: */
 /* line 322: */
 /* line 323: */
 /* line 325: */
 /* line 326: */
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 330: */
 /* line 332: */
 /* line 333: */
 /* line 334: */
 /* line 335: */
 /* line 337: */
 /* line 339: */
 /* line 340: */
 /* line 342: */
 /* line 345: */
 /* line 346: */
JUMAELA_stackind = 0;
 /* line 347: */
KUMAELA_iparams = 0;
 /* line 348: */
 /* line 349: */
 /* line 350: */
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 355: */
OUMAELA_fnstrstack = PUMAELA_nilfnstrstack;
 /* line 357: */
 /* line 358: */
 /* line 368: */
 /* line 369: */
 /* line 393: */
 /* line 394: */
 /* line 417: */
 /* line 425: */
 /* line 426: */
 /* line 431: */
 /* line 437: */
 /* line 438: */
 /* line 450: */
 /* line 451: */
 /* line 452: */
 /* line 461: */
 /* line 464: */
 /* line 466: */
 /* line 468: */
 /* line 470: */
 /* line 472: */
 /* line 473: */
 /* line 475: */
 /* line 478: */
 /* line 479: */
 /* line 481: */
 /* line 482: */
 /* line 484: */
 /* line 485: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
 /* line 491: */
 /* line 494: */
 /* line 495: */
 /* line 504: */
 /* line 505: */
 /* line 509: */
 /* line 511: */
 /* line 512: */
 /* line 517: */
 /* line 519: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
 /* line 527: */
 /* line 529: */
 /* line 532: */
 /* line 534: */
 /* line 541: */
 /* line 547: */
 /* line 554: */
 /* line 557: */
 /* line 564: */
 /* line 566: */
 /* line 568: */
 /* line 570: */
 /* line 572: */
 /* line 574: */
 /* line 576: */
 /* line 580: */
 /* line 582: */
 /* line 584: */
 /* line 587: */
 /* line 589: */
 /* line 591: */
 /* line 593: */
 /* line 595: */
 /* line 597: */
 /* line 601: */
 /* line 605: */
 /* line 610: */
 /* line 617: */
 /* line 626: */
 /* line 635: */
 /* line 639: */
 /* line 641: */
 /* line 643: */
 /* line 645: */
 /* line 647: */
 /* line 649: */
 /* line 650: */
 /* line 653: */
 /* line 654: */
 /* line 658: */
 /* line 659: */
 /* line 664: */
 /* line 665: */
 /* line 671: */
 /* line 673: */
 /* line 674: */
 /* line 676: */
 /* line 677: */
 /* line 682: */
 /* line 683: */
 /* line 687: */
 /* line 688: */
 /* line 693: */
 /* line 694: */
 /* line 700: */
 /* line 701: */
 /* line 703: */
 /* line 704: */
 /* line 714: */
 /* line 715: */
 /* line 722: */
 /* line 723: */
 /* line 727: */
 /* line 728: */
 /* line 733: */
 /* line 734: */
 /* line 738: */
 /* line 739: */
 /* line 747: */
 /* line 748: */
 /* line 752: */
 /* line 753: */
 /* line 759: */
 /* line 760: */
 /* line 762: */
 /* line 763: */
 /* line 771: */
 /* line 772: */
 /* line 778: */
 /* line 779: */
 /* line 788: */
 /* line 789: */
 /* line 792: */
 /* line 793: */
 /* line 799: */
 /* line 800: */
 /* line 806: */
 /* line 807: */
 /* line 813: */
 /* line 814: */
 /* line 821: */
 /* line 822: */
 /* line 832: */
 /* line 833: */
 /* line 840: */
 /* line 841: */
 /* line 847: */
 /* line 848: */
 /* line 854: */
 /* line 855: */
 /* line 862: */
 /* line 863: */
 /* line 868: */
 /* line 869: */
 /* line 873: */
 /* line 874: */
 /* line 880: */
 /* line 881: */
 /* line 884: */
 /* line 885: */
 /* line 889: */
 /* line 890: */
 /* line 892: */
 /* line 893: */
 /* line 895: */
 /* line 896: */
 /* line 898: */
 /* line 899: */
 /* line 901: */
 /* line 902: */
 /* line 904: */
 /* line 905: */
 /* line 933: */
 /* line 934: */
 /* line 936: */
 /* line 937: */
 /* line 943: */
 /* line 945: */
 /* line 946: */
 /* line 952: */
 /* line 953: */
 /* line 957: */
 /* line 958: */
 /* line 962: */
 /* line 963: */
 /* line 970: */
 /* line 971: */
 /* line 980: */
 /* line 981: */
 /* line 988: */
 /* line 990: */
 /* line 992: */
 /* line 993: */
 /* line 1003: */
 /* line 1004: */
 /* line 1011: */
 /* line 1012: */
 /* line 1017: */
 /* line 1019: */
 /* line 1022: */
 /* line 1023: */
 /* line 1027: */
 /* line 1029: */
 /* line 1030: */
 /* line 1037: */
 /* line 1038: */
 /* line 1042: */
 /* line 1043: */
 /* line 1047: */
 /* line 1049: */
 /* line 1050: */
 /* line 1054: */
 /* line 1055: */
 /* line 1060: */
 /* line 1061: */
 /* line 1063: */
 /* line 1064: */
 /* line 1069: */
 /* line 1070: */
 /* line 1072: */
 /* line 1073: */
 /* line 1078: */
 /* line 1079: */
 /* line 1083: */
 /* line 1084: */
 /* line 1089: */
 /* line 1090: */
 /* line 1092: */
 /* line 1093: */
 /* line 1095: */
 /* line 1096: */
 /* line 1108: */
 /* line 1110: */
 /* line 1111: */
 /* line 1119: */
 /* line 1120: */
 /* line 1126: */
 /* line 1127: */
 /* line 1133: */
 /* line 1134: */
 /* line 1141: */
 /* line 1142: */
 /* line 1148: */
 /* line 1149: */
 /* line 1156: */
 /* line 1157: */
 /* line 1161: */
 /* line 1162: */
 /* line 1167: */
 /* line 1168: */
 /* line 1173: */
 /* line 1175: */
 /* line 1177: */
 /* line 1179: */
 /* line 1180: */
 /* line 1182: */
 /* line 1183: */
 /* line 1189: */
 /* line 1190: */
 /* line 1197: */
 /* line 1198: */
 /* line 1208: */
 /* line 1209: */
 /* line 1211: */
 /* line 1212: */
 /* line 1214: */
 /* line 1215: */
 /* line 1217: */
 /* line 1218: */
 /* line 1220: */
 /* line 1222: */
 /* line 1223: */
 /* line 1233: */
 /* line 1234: */
 /* line 1235: */
 /* line 1240: */
 /* line 1241: */
 /* line 1243: */
 /* line 1244: */
 /* line 1252: */
 /* line 1253: */
 /* line 1270: */
 /* line 1271: */
 /* line 1277: */
 /* line 1278: */
 /* line 1284: */
 /* line 1285: */
 /* line 1290: */
 /* line 1291: */
 /* line 1299: */
 /* line 1300: */
 /* line 1306: */
 /* line 1307: */
 /* line 1312: */
 /* line 1313: */
 /* line 1327: */
 /* line 1328: */
 /* line 1332: */
 /* line 1333: */
 /* line 1335: */
 /* line 1336: */
 /* line 1338: */
 /* line 1339: */
 /* line 1346: */
 /* line 1347: */
 /* line 1354: */
 /* line 1355: */
 /* line 1362: */
 /* line 1363: */
 /* line 1371: */
 /* line 1372: */
 /* line 1381: */
 /* line 1382: */
 /* line 1384: */
 /* line 1385: */
 /* line 1392: */
 /* line 1393: */
 /* line 1400: */
 /* line 1401: */
 /* line 1409: */
 /* line 1412: */
 /* line 1413: */
 /* line 1416: */
 /* line 1423: */
 /* line 1424: */
 /* line 1425: */
 /* line 1430: */
 /* line 1431: */
 /* line 1432: */
 /* line 1442: */
 /* line 1443: */
 /* line 1447: */
 /* line 1448: */
 /* line 1453: */
 /* line 1454: */
 /* line 1467: */
 /* line 1468: */
 /* line 1473: */
 /* line 1476: */
 /* line 1477: */
 /* line 1482: */
 /* line 1483: */
 /* line 1490: */
 /* line 1491: */
 /* line 1498: */
 /* line 1499: */
 /* line 1503: */
 /* line 1504: */
 /* line 1509: */
 /* line 1510: */
 /* line 1515: */
 /* line 1516: */
 /* line 1527: */
 /* line 1528: */
 /* line 1534: */
 /* line 1535: */
 /* line 1541: */
 /* line 1542: */
 /* line 1551: */
 /* line 1552: */
 /* line 1565: */
 /* line 1566: */
 /* line 1572: */
 /* line 1573: */
 /* line 1579: */
 /* line 1580: */
 /* line 1584: */
 /* line 1585: */
 /* line 1594: */
 /* line 1595: */
 /* line 1605: */
 /* line 1606: */
 /* line 1611: */
 /* line 1613: */
 /* line 1614: */
 /* line 1619: */
 /* line 1620: */
 /* line 1628: */
 /* line 1629: */
 /* line 1635: */
 /* line 1636: */
 /* line 1641: */
 /* line 1642: */
 /* line 1649: */
 /* line 1681: */
 /* line 1687: */
 /* line 1689: */
 /* line 1730: */
/*SKIP*/;
A_PROC_EXIT(DECS assembleproc);
} 
#undef NL
/* end of translation of ./a68files/assembleproc.a68 */
