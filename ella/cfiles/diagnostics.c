
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
/* UNAME:DTKBELA */
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
struct A68t239{
A68_INT  Version;
A_PAD_INT(PAD_72)
struct A68t176  Data;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t240,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t241,(A68_INT ),(A68_INT ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t188 *,A68t242,(struct A68t195 *,A68_INT ,struct A68t97 ),(struct A68t195 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE195,INT,MODE97) REF MODE188 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t195 *,struct A68t97 ),(struct A68t195 *,struct A68t97 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE195,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t195 *,struct A68t32 ,struct A68t97 ),(struct A68t195 *,struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE195,MODE32,MODE97) VOID */
struct A68t246 ;

A_PROCEDURE(A68_BOOL ,A68t245,(struct A68t195 *,struct A68t246 ,struct A68t97 ),(struct A68t195 *,struct A68t246 ,struct A68t97 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE195,MODE246,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t246,(struct A68t188 *,struct A68t97 ),(struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE188,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t195 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t177 ,struct A68t97 ),(struct A68t195 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE195,INT,REF MODE32,INT,REF MODE177,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t188 *,A68_INT ,struct A68t239 ,struct A68t97 ),(struct A68t188 *,A68_INT ,struct A68t239 ,struct A68t97 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE188,INT,MODE239,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t188 *,A68_INT ,struct A68t97 ,struct A68t239 *),(struct A68t188 *,A68_INT ,struct A68t97 ,struct A68t239 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE188,INT,MODE97) MODE239 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t188 *,A68_INT ,struct A68t97 ),(struct A68t188 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE188,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t195 *,A68_INT ,struct A68t97 ),(struct A68t195 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE195,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t174 *,struct A68t97 ),(struct A68t174 *,struct A68t97 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE174,MODE97) VOID */
struct A68t254 ;

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t254 *,A68_INT ),(struct A68t254 *,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE254,INT) VOID */
struct A68t254{
A68_INT  Max_closureno;
A_PAD_INT(PAD_73)
struct A68t255 * Outers;
struct A68t255 * Freelist;
struct A68t256 * Outerslist;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT,REF MODE255,REF MODE255,REF MODE256)  */
struct A68t258{
A68_INT  Closureno;
A_PAD_INT(PAD_74)
A68_INT  Sort;
A_PAD_INT(PAD_75)
struct A68t259 * Environ;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(INT,INT,REF MODE259)  */
struct A68t255{
struct A68t258  Outer;
struct A68t255 * Rest;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE258,REF MODE255)  */
A_VECTOR(struct A68t255 ,A68t257);
typedef struct A68t257  A68_257 ;    /* VECTOR [] MODE255 */
struct A68t256{
struct A68t257  Outers;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(REF MODE257,REF MODE256)  */
A_VECTOR(struct A68t392 *,A68t260);
typedef struct A68t260  A68_260 ;    /* VECTOR [] REF MODE392 */
A_VECTOR(struct A68t390 *,A68t261);
typedef struct A68t261  A68_261 ;    /* VECTOR [] REF MODE390 */
A_VECTOR(struct A68t384 *,A68t262);
typedef struct A68t262  A68_262 ;    /* VECTOR [] REF MODE384 */
A_VECTOR(struct A68t383 *,A68t263);
typedef struct A68t263  A68_263 ;    /* VECTOR [] REF MODE383 */
A_VECTOR(struct A68t265 *,A68t264);
typedef struct A68t264  A68_264 ;    /* VECTOR [] REF MODE265 */
struct A68t259{
struct A68t260  Attrs;
struct A68t261  Ints;
struct A68t262  Types;
struct A68t263  Consts;
struct A68t264  Fns;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264)  */
A_VECTOR(struct A68t381 ,A68t266);
typedef struct A68t266  A68_266 ;    /* VECTOR [] MODE381 */
struct A68t325{
A68_INT  Attrno;
A_PAD_INT(PAD_76)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT)  */
struct A68t326{
A68_INT  Intno;
A_PAD_INT(PAD_77)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(INT)  */
struct A68t327{
A68_INT  Typeno;
A_PAD_INT(PAD_78)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(INT)  */
struct A68t288{
A68_INT  Constno;
A_PAD_INT(PAD_79)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT)  */
struct A68t328{
A68_INT  Fnno;
A_PAD_INT(PAD_80)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT)  */
struct A68t382 { A68_INT mode; union {
struct A68t325  mode1;
struct A68t326  mode2;
struct A68t327  mode3;
struct A68t288  mode4;
struct A68t328  mode5;
} data; };
typedef struct A68t382  A68_382 ;    /* UNION(MODE325,MODE326,MODE327,MODE288,MODE328)  */
struct A68t381{
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t382  Spec;
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT,MODE382)  */
struct A68t267 { A68_INT mode; union {
struct A68t325 * mode1;
struct A68t376 * mode2;
struct A68t377 * mode3;
struct A68t378 * mode4;
struct A68t379 * mode5;
} data; };
typedef struct A68t267  A68_267 ;    /* UNION(REF MODE325,REF MODE376,REF MODE377,REF MODE378,REF MODE379)  */
A_VECTOR(struct A68t375 ,A68t269);
typedef struct A68t269  A68_269 ;    /* VECTOR [] MODE375 */
struct A68t355 { A68_INT mode; union {
struct A68t327 * mode1;
struct A68t356 * mode2;
struct A68t357 * mode3;
struct A68t358 * mode4;
struct A68t294 * mode5;
struct A68t359 * mode6;
struct A68t360 * mode7;
struct A68t361 * mode8;
struct A68t362 * mode9;
} data; };
typedef struct A68t355  A68_355 ;    /* UNION(REF MODE327,REF MODE356,REF MODE357,REF MODE358,REF MODE294,REF MODE359,REF MODE360,REF MODE361,REF MODE362)  */
struct A68t375{
A68_VC  Name;
struct A68t355  Type;
struct A68t267  Attr;
};
typedef struct A68t375  A68_375 ;    /* STRUCT(REF MODE26,MODE355,MODE267)  */
struct A68t270 { A68_INT mode; union {
struct A68t272 * mode1;
struct A68t273 * mode2;
struct A68t274 * mode3;
struct A68t275 * mode4;
struct A68t276 * mode5;
struct A68t277 * mode6;
struct A68t278 * mode7;
struct A68t279 * mode8;
struct A68t280 * mode9;
struct A68t281 * mode10;
struct A68t282 * mode11;
struct A68t283 * mode12;
} data; };
typedef struct A68t270  A68_270 ;    /* UNION(REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283)  */
struct A68t265{
A68_INT  Sort;
A_PAD_INT(PAD_82)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_83)
A68_VC  Fnname;
struct A68t266  Macspecs;
struct A68t267  Attr;
struct A68t268 * Inputs;
struct A68t268 * Outputs;
struct A68t269  Nametypes;
struct A68t270  Fnbody;
struct A68t271 * Usage;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE266,MODE267,REF MODE268,REF MODE268,REF MODE269,MODE270,REF MODE271)  */
struct A68t268{
A68_INT  Nameno;
A_PAD_INT(PAD_84)
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE268)  */
struct A68t271{
A68_INT  Contextno;
A_PAD_INT(PAD_85)
A68_INT  Closureno;
A_PAD_INT(PAD_86)
A68_INT  Libv_spec;
A_PAD_INT(PAD_87)
A68_INT  Libv_body;
A_PAD_INT(PAD_88)
A68_BOOL  Import;
A_PAD_BOOL(PAD_89)
A68_BOOL  Export;
A_PAD_BOOL(PAD_90)
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t287 { A68_INT mode; union {
struct A68t288 * mode1;
struct A68t289 * mode2;
struct A68t290 * mode3;
struct A68t291 * mode4;
struct A68t292 * mode5;
struct A68t293 * mode6;
struct A68t294 * mode7;
struct A68t295 * mode8;
struct A68t296 * mode9;
struct A68t297 * mode10;
struct A68t298 * mode11;
struct A68t299 * mode12;
struct A68t300 * mode13;
struct A68t301 * mode14;
struct A68t302 * mode15;
struct A68t303 * mode16;
struct A68t304 * mode17;
struct A68t305 * mode18;
struct A68t306 * mode19;
struct A68t307 * mode20;
struct A68t308 * mode21;
struct A68t309 * mode22;
struct A68t310 * mode23;
struct A68t311 * mode24;
struct A68t312 * mode25;
struct A68t313 * mode26;
struct A68t314 * mode27;
struct A68t315 * mode28;
struct A68t316 * mode29;
struct A68t317 * mode30;
struct A68t318 * mode31;
struct A68t319 * mode32;
struct A68t320 * mode33;
struct A68t321 * mode34;
} data; };
typedef struct A68t287  A68_287 ;    /* UNION(REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE307,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE318,REF MODE319,REF MODE320,REF MODE321)  */
struct A68t272{
struct A68t287  Tag;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE287)  */
A_VECTOR(struct A68t371 ,A68t370);
typedef struct A68t370  A68_370 ;    /* VECTOR [] MODE371 */
struct A68t373{
struct A68t267  Tag;
};
typedef struct A68t373  A68_373 ;    /* STRUCT(MODE267)  */
struct A68t286 { A68_INT mode; union {
struct A68t363 * mode1;
struct A68t322 * mode2;
struct A68t364 * mode3;
struct A68t326 * mode4;
struct A68t365 * mode5;
struct A68t366 * mode6;
struct A68t367 * mode7;
struct A68t368 * mode8;
struct A68t361 * mode9;
struct A68t369 * mode10;
} data; };
typedef struct A68t286  A68_286 ;    /* UNION(REF MODE363,REF MODE322,REF MODE364,REF MODE326,REF MODE365,REF MODE366,REF MODE367,REF MODE368,REF MODE361,REF MODE369)  */
struct A68t340{
struct A68t286  Tag;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(MODE286)  */
struct A68t374{
struct A68t355  Tag;
};
typedef struct A68t374  A68_374 ;    /* STRUCT(MODE355)  */
struct A68t285{
A68_INT  Fnno;
A_PAD_INT(PAD_91)
struct A68t370  Macparams;
struct A68t267  Attr;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT,REF MODE370,MODE267)  */
struct A68t372 { A68_INT mode; union {
struct A68t373  mode1;
struct A68t340  mode2;
struct A68t374  mode3;
struct A68t272  mode4;
struct A68t285  mode5;
} data; };
typedef struct A68t372  A68_372 ;    /* UNION(MODE373,MODE340,MODE374,MODE272,MODE285)  */
struct A68t371{
A68_INT  Sort;
A_PAD_INT(PAD_92)
struct A68t372  Param;
};
typedef struct A68t371  A68_371 ;    /* STRUCT(INT,MODE372)  */
struct A68t273{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_93)
A68_VC  Name;
struct A68t370  Macparams;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(BOOL,REF MODE26,REF MODE370)  */
struct A68t274{
struct A68t286  Output;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE286)  */
struct A68t275{
A68_INT  Reform;
A_PAD_INT(PAD_94)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT)  */
struct A68t276{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_95)
struct A68t158  Ctname;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t277{
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t287  Init;
struct A68t286  Ambigtime;
struct A68t287  Ambig;
struct A68t286  Delaytime;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,MODE287,MODE286,MODE287,MODE286)  */
struct A68t278{
struct A68t287  Init;
struct A68t286  Delaytime;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE287,MODE286)  */
struct A68t279{
struct A68t287  Init;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE287)  */
struct A68t280{
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t286  Interval;
struct A68t287  Init;
struct A68t286  Skew;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,MODE286,MODE287,MODE286)  */
struct A68t281{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_98)
A68_INT  Sort;
A_PAD_INT(PAD_99)
struct A68t285  Inst;
struct A68t286  Scale;
struct A68t287  Init;
struct A68t286  Skew;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(BOOL,INT,MODE285,MODE286,MODE287,MODE286)  */
struct A68t282{
struct A68t284 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_100)
struct A68t270  Fnbody;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(REF MODE284,BOOL,MODE270)  */
struct A68t283{
A68_INT  Bodynull;
A_PAD_INT(PAD_101)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT)  */
struct A68t284{
A68_INT  Int;
A_PAD_INT(PAD_102)
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,REF MODE284)  */
struct A68t289{
A68_INT  Typeno;
A_PAD_INT(PAD_103)
A68_INT  Primno;
A_PAD_INT(PAD_104)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT,INT)  */
struct A68t290{
A68_INT  Typeno;
A_PAD_INT(PAD_105)
struct A68t286  Index;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT,MODE286)  */
struct A68t291{
struct A68t355  Querytype;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE355)  */
struct A68t292{
A68_INT  Typeno;
A_PAD_INT(PAD_106)
struct A68t32  String;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t293{
A68_INT  Cvoid;
A_PAD_INT(PAD_107)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT)  */
struct A68t294{
struct A68t355  Type;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE355)  */
struct A68t354{
struct A68t286  Lwb;
struct A68t286  Upb;
};
typedef struct A68t354  A68_354 ;    /* STRUCT(MODE286,MODE286)  */
struct A68t295{
A68_INT  Typeno;
A_PAD_INT(PAD_108)
struct A68t354  Range;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT,MODE354)  */
struct A68t296{
A68_INT  Typeno;
A_PAD_INT(PAD_109)
A68_INT  Firstno;
A_PAD_INT(PAD_110)
A68_INT  Lastno;
A_PAD_INT(PAD_111)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,INT,INT)  */
struct A68t297{
struct A68t287  Alt;
struct A68t297 * Rest;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE287,REF MODE297)  */
struct A68t298{
A68_INT  Sort;
A_PAD_INT(PAD_112)
A68_INT  Nameno;
A_PAD_INT(PAD_113)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,INT)  */
struct A68t299{
struct A68t287  Sink;
struct A68t287  Source;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE287,MODE287)  */
struct A68t300{
A68_INT  Typeno;
A_PAD_INT(PAD_114)
A68_INT  Altno;
A_PAD_INT(PAD_115)
struct A68t287  Assoc;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT,INT,MODE287)  */
struct A68t301{
struct A68t287  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_116)
A68_INT  Altno;
A_PAD_INT(PAD_117)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE287,INT,INT)  */
struct A68t302{
struct A68t287  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_118)
A68_INT  Nameno;
A_PAD_INT(PAD_119)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(MODE287,INT,INT)  */
struct A68t303{
struct A68t287  Unit;
struct A68t286  Index;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE287,MODE286)  */
struct A68t304{
struct A68t287  Unit;
struct A68t354  Range;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(MODE287,MODE354)  */
struct A68t305{
struct A68t287  Unit;
struct A68t287  Index;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE287,MODE287)  */
struct A68t306{
struct A68t287  Unit;
struct A68t287  Index;
struct A68t287  From;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE287,MODE287,MODE287)  */
struct A68t307{
struct A68t286  Size;
struct A68t287  Elem;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE286,MODE287)  */
struct A68t308{
struct A68t287  Elem;
struct A68t308 * Rest;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE287,REF MODE308)  */
struct A68t309{
A68_BOOL  String;
A_PAD_BOOL(PAD_120)
A68_INT  Sort;
A_PAD_INT(PAD_121)
struct A68t287  Left;
struct A68t287  Right;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(BOOL,INT,MODE287,MODE287)  */
struct A68t310{
struct A68t285  Inst;
struct A68t287  Right;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE285,MODE287)  */
struct A68t311{
struct A68t287  Left;
struct A68t285  Inst;
struct A68t287  Right;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE287,MODE285,MODE287)  */
struct A68t312{
struct A68t287  Input;
struct A68t353 * Choices;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(MODE287,REF MODE353)  */
struct A68t313{
struct A68t286  Cond;
struct A68t287  True;
struct A68t287  False;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE286,MODE287,MODE287)  */
struct A68t314{
struct A68t286  Repl;
struct A68t287  Body;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE286,MODE287)  */
struct A68t315{
struct A68t341 * Body;
struct A68t287  Output;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE341,MODE287)  */
struct A68t316{
struct A68t323 * Body;
struct A68t287  Output;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(REF MODE323,MODE287)  */
struct A68t317{
struct A68t287  Unit;
struct A68t267  Attr;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE287,MODE267)  */
struct A68t322{
A68_INT  Sort;
A_PAD_INT(PAD_122)
struct A68t286  Test;
struct A68t286  Standard;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,MODE286,MODE286)  */
struct A68t318{
struct A68t287  Unit;
struct A68t322  Check;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE287,MODE322)  */
struct A68t319{
struct A68t287  Unit;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE287)  */
struct A68t320{
struct A68t286  Size;
struct A68t287  Char;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE286,MODE287)  */
struct A68t321{
A68_INT  Unull;
A_PAD_INT(PAD_123)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT)  */
struct A68t324 { A68_INT mode; union {
struct A68t325  mode1;
struct A68t326  mode2;
struct A68t327  mode3;
struct A68t288  mode4;
struct A68t328  mode5;
struct A68t329 * mode6;
struct A68t330 * mode7;
struct A68t331 * mode8;
struct A68t332 * mode9;
struct A68t333 * mode10;
struct A68t334 * mode11;
struct A68t335 * mode12;
} data; };
typedef struct A68t324  A68_324 ;    /* UNION(MODE325,MODE326,MODE327,MODE288,MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE332,REF MODE333,REF MODE334,REF MODE335)  */
struct A68t323{
struct A68t324  Step;
struct A68t323 * Rest;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE324,REF MODE323)  */
struct A68t329{
struct A68t286  Cond;
struct A68t338 * Print;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE286,REF MODE338)  */
struct A68t330{
struct A68t286  Cond;
struct A68t338 * Fault;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE286,REF MODE338)  */
struct A68t331{
struct A68t268 * Letnames;
struct A68t287  Unit;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE268,MODE287)  */
struct A68t332{
struct A68t336 * Sizes;
struct A68t285  Inst;
struct A68t268 * Makenames;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(REF MODE336,MODE285,REF MODE268)  */
struct A68t333{
struct A68t287  From;
struct A68t287  To;
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE287,MODE287)  */
struct A68t334{
struct A68t336 * Repls;
struct A68t337 * Joins;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE336,REF MODE337)  */
struct A68t335{
A68_INT  Stepnull;
A_PAD_INT(PAD_124)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(INT)  */
struct A68t336{
struct A68t286  Formula;
struct A68t336 * Rest;
};
typedef struct A68t336  A68_336 ;    /* STRUCT(MODE286,REF MODE336)  */
struct A68t337{
struct A68t333  Join;
struct A68t337 * Rest;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(MODE333,REF MODE337)  */
struct A68t339 { A68_INT mode; union {
A68_VC  mode1;
struct A68t340 * mode2;
} data; };
typedef struct A68t339  A68_339 ;    /* UNION(REF MODE26,REF MODE340)  */
struct A68t338{
struct A68t339  Item;
struct A68t338 * Rest;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE339,REF MODE338)  */
struct A68t342 { A68_INT mode; union {
struct A68t325  mode1;
struct A68t326  mode2;
struct A68t327  mode3;
struct A68t288  mode4;
struct A68t328  mode5;
struct A68t329 * mode6;
struct A68t330 * mode7;
struct A68t343 * mode8;
struct A68t344 * mode9;
struct A68t345 * mode10;
struct A68t346 * mode11;
struct A68t347 * mode12;
struct A68t348 * mode13;
struct A68t349 * mode14;
struct A68t350 * mode15;
struct A68t341 * mode16;
struct A68t351 * mode17;
} data; };
typedef struct A68t342  A68_342 ;    /* UNION(MODE325,MODE326,MODE327,MODE288,MODE328,REF MODE329,REF MODE330,REF MODE343,REF MODE344,REF MODE345,REF MODE346,REF MODE347,REF MODE348,REF MODE349,REF MODE350,REF MODE341,REF MODE351)  */
struct A68t341{
struct A68t342  Step;
struct A68t341 * Rest;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(MODE342,REF MODE341)  */
struct A68t343{
struct A68t331  Seqlet;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(MODE331)  */
struct A68t344{
struct A68t331  Seqvar;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(MODE331)  */
struct A68t345{
struct A68t268 * Pvarnames;
struct A68t287  Init;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(REF MODE268,MODE287)  */
struct A68t346{
struct A68t287  To;
struct A68t287  From;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(MODE287,MODE287)  */
struct A68t347{
struct A68t287  Input;
struct A68t352 * Choices;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE287,REF MODE352)  */
struct A68t348{
struct A68t286  Cond;
struct A68t342  True;
struct A68t342  False;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE286,MODE342,MODE342)  */
struct A68t349{
struct A68t286  Repl;
struct A68t342  Body;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(MODE286,MODE342)  */
struct A68t350{
A68_INT  Seqnull;
A_PAD_INT(PAD_125)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(INT)  */
struct A68t351{
struct A68t286  Size;
struct A68t342  Elem;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(MODE286,MODE342)  */
struct A68t352{
A68_BOOL  Check;
A_PAD_BOOL(PAD_126)
A68_INT  Sort;
A_PAD_INT(PAD_127)
struct A68t287  Test;
struct A68t342  Output;
struct A68t352 * Rest;
};
typedef struct A68t352  A68_352 ;    /* STRUCT(BOOL,INT,MODE287,MODE342,REF MODE352)  */
struct A68t353{
A68_BOOL  Check;
A_PAD_BOOL(PAD_128)
A68_INT  Sort;
A_PAD_INT(PAD_129)
struct A68t287  Test;
struct A68t287  Output;
struct A68t353 * Rest;
};
typedef struct A68t353  A68_353 ;    /* STRUCT(BOOL,INT,MODE287,MODE287,REF MODE353)  */
struct A68t356{
struct A68t286  Size;
struct A68t355  Elem;
};
typedef struct A68t356  A68_356 ;    /* STRUCT(MODE286,MODE355)  */
struct A68t357{
struct A68t355  Elem;
struct A68t357 * Rest;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(MODE355,REF MODE357)  */
struct A68t358{
struct A68t355  From;
struct A68t355  To;
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE355,MODE355)  */
struct A68t359{
struct A68t286  Size;
struct A68t355  Char;
};
typedef struct A68t359  A68_359 ;    /* STRUCT(MODE286,MODE355)  */
struct A68t360{
A68_INT  Tvoid;
A_PAD_INT(PAD_130)
};
typedef struct A68t360  A68_360 ;    /* STRUCT(INT)  */
struct A68t361{
A68_INT  Macparno;
A_PAD_INT(PAD_131)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(INT)  */
struct A68t362{
A68_INT  Tnull;
A_PAD_INT(PAD_132)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(INT)  */
struct A68t363{
A68_INT  Int;
A_PAD_INT(PAD_133)
A68_VC  Text;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t364{
A68_INT  Nameno;
A_PAD_INT(PAD_134)
};
typedef struct A68t364  A68_364 ;    /* STRUCT(INT)  */
struct A68t365{
struct A68t286  Left;
A68_INT  Sort;
A_PAD_INT(PAD_135)
struct A68t286  Right;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(MODE286,INT,MODE286)  */
struct A68t366{
A68_INT  Sort;
A_PAD_INT(PAD_136)
struct A68t286  Right;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,MODE286)  */
struct A68t367{
struct A68t286  Cond;
struct A68t286  True;
struct A68t286  False;
};
typedef struct A68t367  A68_367 ;    /* STRUCT(MODE286,MODE286,MODE286)  */
struct A68t368{
struct A68t286  Formula;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(MODE286)  */
struct A68t369{
A68_INT  Fnull;
A_PAD_INT(PAD_137)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(INT)  */
struct A68t376{
A68_VC  Classname;
struct A68t380 * Strings;
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE26,REF MODE380)  */
struct A68t377{
struct A68t267  Elem;
struct A68t377 * Rest;
};
typedef struct A68t377  A68_377 ;    /* STRUCT(MODE267,REF MODE377)  */
struct A68t378{
struct A68t267  Attr;
};
typedef struct A68t378  A68_378 ;    /* STRUCT(MODE267)  */
struct A68t379{
A68_INT  Attrnull;
A_PAD_INT(PAD_138)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(INT)  */
struct A68t380{
A68_VC  Id;
struct A68t380 * Rest;
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE26,REF MODE380)  */
struct A68t383{
A68_INT  Sort;
A_PAD_INT(PAD_139)
A68_VC  Constname;
struct A68t267  Attr;
struct A68t287  Value;
struct A68t271 * Usage;
};
typedef struct A68t383  A68_383 ;    /* STRUCT(INT,REF MODE26,MODE267,MODE287,REF MODE271)  */
A_VECTOR(struct A68t389 ,A68t386);
typedef struct A68t386  A68_386 ;    /* VECTOR [] MODE389 */
struct A68t389{
A68_VC  Altname;
struct A68t355  Assoc;
};
typedef struct A68t389  A68_389 ;    /* STRUCT(REF MODE26,MODE355)  */
struct A68t385 { A68_INT mode; union {
struct A68t386  mode1;
struct A68t387 * mode2;
struct A68t374 * mode3;
struct A68t388 * mode4;
} data; };
typedef struct A68t385  A68_385 ;    /* UNION(REF MODE386,REF MODE387,REF MODE374,REF MODE388)  */
struct A68t384{
A68_INT  Sort;
A_PAD_INT(PAD_140)
A68_VC  Typename;
struct A68t267  Attr;
struct A68t385  Body;
struct A68t271 * Usage;
};
typedef struct A68t384  A68_384 ;    /* STRUCT(INT,REF MODE26,MODE267,MODE385,REF MODE271)  */
struct A68t387{
A68_VC  Tagname;
struct A68t354  Range;
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE26,MODE354)  */
struct A68t388{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t391 { A68_INT mode; union {
struct A68t363 * mode1;
struct A68t322 * mode2;
struct A68t364 * mode3;
struct A68t326 * mode4;
struct A68t365 * mode5;
struct A68t366 * mode6;
struct A68t367 * mode7;
struct A68t368 * mode8;
struct A68t361 * mode9;
struct A68t369 * mode10;
struct A68t354  mode11;
} data; };
typedef struct A68t391  A68_391 ;    /* UNION(REF MODE363,REF MODE322,REF MODE364,REF MODE326,REF MODE365,REF MODE366,REF MODE367,REF MODE368,REF MODE361,REF MODE369,MODE354)  */
struct A68t390{
A68_INT  Sort;
A_PAD_INT(PAD_141)
A68_VC  Intname;
struct A68t267  Attr;
struct A68t391  Value;
struct A68t271 * Usage;
};
typedef struct A68t390  A68_390 ;    /* STRUCT(INT,REF MODE26,MODE267,MODE391,REF MODE271)  */
struct A68t392{
A68_INT  Sort;
A_PAD_INT(PAD_142)
A68_VC  Attrname;
struct A68t267  Value;
struct A68t271 * Usage;
};
typedef struct A68t392  A68_392 ;    /* STRUCT(INT,REF MODE26,MODE267,REF MODE271)  */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t258 ,A68_INT ),(struct A68t258 ,A68_INT ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE258,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t195 *,A68_VC ,struct A68t176 ,struct A68t97 ),(struct A68t195 *,A68_VC ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE195,REF MODE26,MODE176,MODE97) VOID */
struct A68t395{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_143)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_144)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_145)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_146)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_147)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_148)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_149)
A68_INT  Width;
A_PAD_INT(PAD_150)
A68_INT  Page_count;
A_PAD_INT(PAD_151)
A68_INT  Page_length;
A_PAD_INT(PAD_152)
A68_INT  Eof_count;
A_PAD_INT(PAD_153)
struct A68t396 * Standard_reader;
struct A68t397 * Infile;
struct A68t170  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t395  A68_395 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE396,REF MODE397,MODE170,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t398,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t396{
A68_VC  Rdbuffer;
struct A68t398  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_154)
A68_INT  Rdcharno;
A_PAD_INT(PAD_155)
A68_INT  Start_of_word;
A_PAD_INT(PAD_156)
struct A68t399 * Stack;
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE26,MODE398,INT,INT,INT,REF MODE399)  */
struct A68t397{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_157)
A68_INT  Number;
A_PAD_INT(PAD_158)
A68_VC  Name;
struct A68t396 * Reader;
struct A68t397 * Previous;
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE396,REF MODE397)  */
struct A68t399{
A68_VC  Line;
struct A68t399 * Rest;
};
typedef struct A68t399  A68_399 ;    /* STRUCT(REF MODE26,REF MODE399)  */

A_PROCEDURE(struct A68t395 *,A68t400,(void),(void *));
typedef struct A68t400  A68_400 ;    /* PROC REF MODE395 */

A_PROCEDURE(A68_VOID ,A68t401,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t402,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_INT ,A68t404,(struct A68t200 ,struct A68t97 ),(struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE200,MODE97) INT */
struct A68t406 ;

A_PROCEDURE(struct A68t254 *,A68t405,(struct A68t406 *,A68_BOOL ,struct A68t97 ),(struct A68t406 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE406,BOOL,MODE97) REF MODE254 */
struct A68t406{
struct A68t200  Cregion;
A68_VC  Fnname;
struct A68t406 * Rest;
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE200,REF MODE26,REF MODE406)  */

A_PROCEDURE(struct A68t254 *,A68t407,(struct A68t200 ,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t200 ,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE200,REF MODE26,BOOL,MODE97) REF MODE254 */

A_PROCEDURE(struct A68t254 *,A68t408,(struct A68t200 ,A68_BOOL ,struct A68t97 ),(struct A68t200 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE200,BOOL,MODE97) REF MODE254 */

A_PROCEDURE(struct A68t254 *,A68t409,(struct A68t195 *,A68_BOOL ,struct A68t97 ),(struct A68t195 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE195,BOOL,MODE97) REF MODE254 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t195 *,A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t258 *),(struct A68t195 *,A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t258 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE195,REF MODE26,BOOL,MODE97) MODE258 */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t258 ,struct A68t97 ),(struct A68t258 ,struct A68t97 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE258,MODE97) VOID */

A_PROCEDURE(struct A68t254 *,A68t412,(struct A68t254 *,struct A68t97 ),(struct A68t254 *,struct A68t97 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE254,MODE97) REF MODE254 */

A_PROCEDURE(struct A68t276 *,A68t413,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(INT,REF MODE26,MODE97) REF MODE276 */
struct A68t415 ;

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t406 *,struct A68t415 ,struct A68t97 ),(struct A68t406 *,struct A68t415 ,struct A68t97 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE406,MODE415,MODE97) VOID */
struct A68t417 ;

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t417 ,struct A68t36 ,struct A68t97 ),(struct A68t417 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE417,MODE36,MODE97) VOID */
struct A68t415{
struct A68t36  Putstring;
struct A68t416  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t415  A68_415 ;    /* STRUCT(MODE36,MODE416,BOOL)  */
struct A68t418{
A68_INT  Token;
A_PAD_INT(PAD_160)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t418  A68_418 ;    /* STRUCT(INT,BOOL)  */
struct A68t419{
A68_INT  Index;
A_PAD_INT(PAD_162)
A68_INT  Count;
A_PAD_INT(PAD_163)
};
typedef struct A68t419  A68_419 ;    /* STRUCT(INT,INT)  */
struct A68t417 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t418  mode3;
struct A68t419  mode4;
} data; };
typedef struct A68t417  A68_417 ;    /* UNION(INT,MODE26,MODE418,MODE419)  */

A_PROCEDURE(A68_BOOL ,A68t420,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE54) BOOL */
A_VECTOR(struct A68t255 *,A68t421);
typedef struct A68t421  A68_421 ;    /* VECTOR [] REF MODE255 */

A_PROCEDURE(struct A68t364 *,A68t422,(A68_INT ),(A68_INT ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(INT) REF MODE364 */

A_PROCEDURE(struct A68t326 *,A68t423,(A68_INT ),(A68_INT ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(INT) REF MODE326 */

A_PROCEDURE(struct A68t368 *,A68t424,(struct A68t286 ),(struct A68t286 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE286) REF MODE368 */

A_PROCEDURE(struct A68t340 *,A68t425,(struct A68t286 ),(struct A68t286 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE286) REF MODE340 */

A_PROCEDURE(struct A68t327 *,A68t426,(A68_INT ),(A68_INT ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(INT) REF MODE327 */

A_PROCEDURE(struct A68t294 *,A68t427,(struct A68t355 ),(struct A68t355 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE355) REF MODE294 */

A_PROCEDURE(struct A68t374 *,A68t428,(struct A68t355 ),(struct A68t355 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE355) REF MODE374 */

A_PROCEDURE(struct A68t288 *,A68t429,(A68_INT ),(A68_INT ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(INT) REF MODE288 */

A_PROCEDURE(struct A68t291 *,A68t430,(struct A68t355 ),(struct A68t355 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE355) REF MODE291 */

A_PROCEDURE(struct A68t343 *,A68t431,(struct A68t331 ),(struct A68t331 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE331) REF MODE343 */

A_PROCEDURE(struct A68t344 *,A68t432,(struct A68t331 ),(struct A68t331 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE331) REF MODE344 */

A_PROCEDURE(struct A68t319 *,A68t433,(struct A68t287 ),(struct A68t287 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE287) REF MODE319 */

A_PROCEDURE(struct A68t272 *,A68t434,(struct A68t287 ),(struct A68t287 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE287) REF MODE272 */

A_PROCEDURE(struct A68t328 *,A68t435,(A68_INT ),(A68_INT ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(INT) REF MODE328 */

A_PROCEDURE(struct A68t274 *,A68t436,(struct A68t286 ),(struct A68t286 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE286) REF MODE274 */

A_PROCEDURE(struct A68t279 *,A68t437,(struct A68t287 ),(struct A68t287 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE287) REF MODE279 */

A_PROCEDURE(struct A68t361 *,A68t438,(A68_INT ),(A68_INT ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(INT) REF MODE361 */

A_PROCEDURE(struct A68t325 *,A68t439,(A68_INT ),(A68_INT ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(INT) REF MODE325 */

A_PROCEDURE(struct A68t373 *,A68t440,(struct A68t267 ),(struct A68t267 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE267) REF MODE373 */

A_PROCEDURE(struct A68t378 *,A68t441,(struct A68t267 ),(struct A68t267 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE267) REF MODE378 */
A_VECTOR(struct A68t380 *,A68t442);
typedef struct A68t442  A68_442 ;    /* VECTOR [] REF MODE380 */

A_PROCEDURE(A68_INT ,A68t443,(struct A68t254 *),(struct A68t254 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE254) INT */

A_PROCEDURE(struct A68t255 *,A68t444,(A68_INT ,struct A68t254 *,struct A68t97 ),(A68_INT ,struct A68t254 *,struct A68t97 ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(INT,REF MODE254,MODE97) REF MODE255 */

A_PROCEDURE(struct A68t255 *,A68t445,(struct A68t254 *),(struct A68t254 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE254) REF MODE255 */

A_PROCEDURE(struct A68t255 **,A68t446,(struct A68t258 ,struct A68t255 **,struct A68t254 *,struct A68t97 ),(struct A68t258 ,struct A68t255 **,struct A68t254 *,struct A68t97 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE258,REF REF MODE255,REF MODE254,MODE97) REF REF MODE255 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t255 **,struct A68t254 *,struct A68t97 ),(struct A68t255 **,struct A68t254 *,struct A68t97 ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF REF MODE255,REF MODE254,MODE97) VOID */

A_PROCEDURE(struct A68t254 *,A68t448,(void),(void *));
typedef struct A68t448  A68_448 ;    /* PROC REF MODE254 */

A_PROCEDURE(A68_INT ,A68t449,(struct A68t254 *,struct A68t97 ),(struct A68t254 *,struct A68t97 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE254,MODE97) INT */
A_VECTOR(struct A68t452 ,A68t451);
typedef struct A68t451  A68_451 ;    /* VECTOR [] MODE452 */
struct A68t450{
A68_BITS  Type;
A_PAD_BITS(PAD_164)
struct A68t451  Elements;
};
typedef struct A68t450  A68_450 ;    /* STRUCT(BITS,REF MODE451)  */
struct A68t452 { A68_INT mode; union {
A68_INT * mode1;
struct A68t450  mode2;
} data; };
typedef struct A68t452  A68_452 ;    /* UNION(REF INT,MODE450)  */
struct A68t453{
A68_INT  Sort;
A_PAD_INT(PAD_165)
A68_VC  Value;
};
typedef struct A68t453  A68_453 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t453 ,A68t454);
typedef struct A68t454  A68_454 ;    /* VECTOR [] MODE453 */
A_VECTOR(struct A68t455 ,A68t457);
typedef struct A68t457  A68_457 ;    /* VECTOR [] MODE455 */
struct A68t456{
A68_INT  Choice;
A_PAD_INT(PAD_166)
struct A68t457  Params;
};
typedef struct A68t456  A68_456 ;    /* STRUCT(INT,REF MODE457)  */
struct A68t455 { A68_INT mode; union {
struct A68t456  mode1;
struct A68t453  mode2;
} data; };
typedef struct A68t455  A68_455 ;    /* UNION(MODE456,MODE453)  */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(MODE97) REF MODE26 */
struct A68t458 { A68_INT mode; union {
struct A68t459  mode1;
A68_INT * mode2;
struct A68t450  mode3;
} data; };
typedef struct A68t458  A68_458 ;    /* UNION(MODE459,REF INT,MODE450)  */
struct A68t460{
A68_INT * Sort;
struct A68t458  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t460  A68_460 ;    /* STRUCT(REF INT,MODE458,REF MODE26,REF MODE26)  */
struct A68t461{
struct A68t460  Rule;
struct A68t461 * Rest;
};
typedef struct A68t461  A68_461 ;    /* STRUCT(MODE460,REF MODE461)  */

A_PROCEDURE(A68_BOOL ,A68t462,(struct A68t450 ),(struct A68t450 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE450) BOOL */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t451 ,struct A68t450 *),(struct A68t451 ,struct A68t450 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(MODE451) MODE450 */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t452 ,struct A68t450 *),(struct A68t452 ,struct A68t450 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE452) MODE450 */
struct A68t466 ;

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t452 ,struct A68t466 ,A68_VC *),(struct A68t452 ,struct A68t466 ,A68_VC *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(MODE452,REF MODE466) REF MODE26 */
A_VECTOR(struct A68t460 ,A68t466);
typedef struct A68t466  A68_466 ;    /* VECTOR [] MODE460 */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t34 *,struct A68t466 ),(struct A68t34 *,struct A68t466 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE34,REF MODE466) VOID */
struct A68t469 ;

A_PROCEDURE(struct A68t461 *,A68t468,(struct A68t461 *,struct A68t469 ),(struct A68t461 *,struct A68t469 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE461,MODE469) REF MODE461 */
A_VECTOR(struct A68t470 ,A68t469);
typedef struct A68t469  A68_469 ;    /* VECTOR [] MODE470 */
struct A68t470{
A68_INT * No;
struct A68t458  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t470  A68_470 ;    /* STRUCT(REF INT,MODE458,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t455 ,struct A68t454 *),(struct A68t455 ,struct A68t454 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(MODE455) REF MODE454 */

A_PROCEDURE(A68_BOOL ,A68t472,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t472  A68_472 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t473,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t474,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(struct A68t396 *,A68t475,(A68_VC ,struct A68t398 ),(A68_VC ,struct A68t398 ,void *));
typedef struct A68t475  A68_475 ;    /* PROC(REF MODE26,MODE398) REF MODE396 */

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t396 ),(struct A68t396 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE396) VOID */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t478,(struct A68t466 ,struct A68t452 ,struct A68t97 ,struct A68t455 *),(struct A68t466 ,struct A68t452 ,struct A68t97 ,struct A68t455 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(REF MODE466,MODE452,MODE97) MODE455 */

A_PROCEDURE(A68_CHAR ,A68t479,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t480,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t481,(struct A68t453 ,A68_INT ,struct A68t97 ),(struct A68t453 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t481  A68_481 ;    /* PROC(MODE453,INT,MODE97) VOID */
struct A68t482{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_167)
A68_BOOL  Check;
A_PAD_BOOL(PAD_168)
};
typedef struct A68t482  A68_482 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t483,(struct A68t482 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t482 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(MODE482,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t484,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t485,(struct A68t453 ),(struct A68t453 ,void *));
typedef struct A68t485  A68_485 ;    /* PROC(MODE453) BOOL */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t453 ,struct A68t97 ,A68_VC *),(struct A68t453 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(MODE453,MODE97) REF MODE26 */
struct A68t487{
A68_INT  C;
A_PAD_INT(PAD_169)
};
typedef struct A68t487  A68_487 ;    /* STRUCT(INT)  */
struct A68t488{
A68_BITS  A;
A_PAD_BITS(PAD_170)
};
typedef struct A68t488  A68_488 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t490,(A68_VC ,struct A68t455 ,struct A68t97 ),(A68_VC ,struct A68t455 ,struct A68t97 ,void *));
typedef struct A68t490  A68_490 ;    /* PROC(REF MODE26,MODE455,MODE97) VOID */
struct A68t489{
A68_VC  Parameter;
struct A68t490  Proc;
};
typedef struct A68t489  A68_489 ;    /* STRUCT(REF MODE26,MODE490)  */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t455 ,struct A68t97 ),(struct A68t455 ,struct A68t97 ,void *));
typedef struct A68t492  A68_492 ;    /* PROC(MODE455,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t454 ,struct A68t97 ),(struct A68t454 ,struct A68t97 ,void *));
typedef struct A68t493  A68_493 ;    /* PROC(REF MODE454,MODE97) VOID */
struct A68t491 { A68_INT mode; union {
struct A68t489  mode1;
struct A68t492  mode2;
struct A68t493  mode3;
} data; };
typedef struct A68t491  A68_491 ;    /* UNION(MODE489,MODE492,MODE493)  */
struct A68t494 { A68_INT mode; union {
struct A68t495 * mode1;
struct A68t496 * mode2;
struct A68t497 * mode3;
} data; };
typedef struct A68t494  A68_494 ;    /* UNION(REF MODE495,REF MODE496,REF MODE497)  */
struct A68t495 ;

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t495 *,struct A68t34 *),(struct A68t495 *,struct A68t34 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE495,REF MODE34) VOID */
struct A68t499 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t500  mode3;
} data; };
typedef struct A68t499  A68_499 ;    /* UNION(REF MODE26,REF MODE102,MODE500)  */
struct A68t495{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t452  Parameter;
struct A68t488  Access;
struct A68t487  Continuation;
struct A68t499  Help;
struct A68t491  Command;
};
typedef struct A68t495  A68_495 ;    /* STRUCT(REF MODE26,REF MODE26,MODE452,MODE488,MODE487,MODE499,MODE491)  */
A_VECTOR(struct A68t494 ,A68t498);
typedef struct A68t498  A68_498 ;    /* VECTOR [] MODE494 */
struct A68t496{
struct A68t495 * Group;
struct A68t498  Commands;
};
typedef struct A68t496  A68_496 ;    /* STRUCT(REF MODE495,REF MODE498)  */
struct A68t497{
struct A68t495 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t498  Locals;
struct A68t498  Globals;
struct A68t495 * Postlude;
};
typedef struct A68t497  A68_497 ;    /* STRUCT(REF MODE495,REF MODE26,REF REF MODE26,REF MODE498,REF MODE498,REF MODE495)  */
struct A68t501{
struct A68t497 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_171)
struct A68t102  Input_lines;
struct A68t501 * Caller;
};
typedef struct A68t501  A68_501 ;    /* STRUCT(REF MODE497,INT,REF MODE102,REF MODE501)  */
struct A68t502 ;

A_PROCEDURE(A68_VOID ,A68t503,(struct A68t502 *,struct A68t495 *,struct A68t455 ,struct A68t97 ,struct A68t487 *),(struct A68t502 *,struct A68t495 *,struct A68t455 ,struct A68t97 ,struct A68t487 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE502,REF MODE495,MODE455,MODE97) MODE487 */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t504  A68_504 ;    /* PROC(REF MODE102) VOID */
struct A68t506 ;

A_PROCEDURE(A68_VOID ,A68t505,(struct A68t506 ),(struct A68t506 ,void *));
typedef struct A68t505  A68_505 ;    /* PROC(MODE506) VOID */
struct A68t502{
struct A68t501 * Stack;
struct A68t466  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_172)
A68_BOOL  Private;
A_PAD_BOOL(PAD_173)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_174)
struct A68t503  Caller;
struct A68t504  Report_error;
struct A68t505  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t502  A68_502 ;    /* STRUCT(REF MODE501,REF MODE466,BOOL,BOOL,BOOL,MODE503,MODE504,MODE505,MODE97)  */
struct A68t506 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t506  A68_506 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t507,(struct A68t487 ,struct A68t487 ),(struct A68t487 ,struct A68t487 ,void *));
typedef struct A68t507  A68_507 ;    /* PROC(MODE487,MODE487) BOOL */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t498 ,struct A68t498 ,struct A68t498 *),(struct A68t498 ,struct A68t498 ,struct A68t498 *,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE498,MODE498) REF MODE498 */

A_PROCEDURE(A68_VOID ,A68t509,(struct A68t498 ,struct A68t494 ,struct A68t498 *),(struct A68t498 ,struct A68t494 ,struct A68t498 *,void *));
typedef struct A68t509  A68_509 ;    /* PROC(MODE498,MODE494) REF MODE498 */

A_PROCEDURE(A68_VOID ,A68t510,(struct A68t498 *,struct A68t498 ,struct A68t498 *),(struct A68t498 *,struct A68t498 ,struct A68t498 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(REF REF MODE498,MODE498) REF MODE498 */

A_PROCEDURE(A68_VOID ,A68t511,(struct A68t498 *,struct A68t494 ,struct A68t498 *),(struct A68t498 *,struct A68t494 ,struct A68t498 *,void *));
typedef struct A68t511  A68_511 ;    /* PROC(REF REF MODE498,MODE494) REF MODE498 */

A_PROCEDURE(A68_VOID ,A68t512,(struct A68t498 ,struct A68t498 *),(struct A68t498 ,struct A68t498 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(MODE498) REF MODE498 */

A_PROCEDURE(A68_VOID ,A68t513,(struct A68t494 ,struct A68t498 *),(struct A68t494 ,struct A68t498 *,void *));
typedef struct A68t513  A68_513 ;    /* PROC(MODE494) REF MODE498 */

A_PROCEDURE(struct A68t496 *,A68t514,(A68_VC ,A68_VC ,struct A68t488 ,struct A68t498 ),(A68_VC ,A68_VC ,struct A68t488 ,struct A68t498 ,void *));
typedef struct A68t514  A68_514 ;    /* PROC(MODE26,MODE26,MODE488,MODE498) REF MODE496 */

A_PROCEDURE(struct A68t497 *,A68t515,(struct A68t495 *,A68_VC ,A68_VC *,struct A68t498 ,struct A68t498 ,struct A68t491 ),(struct A68t495 *,A68_VC ,A68_VC *,struct A68t498 ,struct A68t498 ,struct A68t491 ,void *));
typedef struct A68t515  A68_515 ;    /* PROC(REF MODE495,MODE26,REF REF MODE26,REF MODE498,REF MODE498,MODE491) REF MODE497 */

A_PROCEDURE(A68_VOID ,A68t516,(struct A68t502 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t502 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t516  A68_516 ;    /* PROC(REF MODE502,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t517,(struct A68t502 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t502 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t517  A68_517 ;    /* PROC(REF MODE502,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t502 *,A68t518,(struct A68t504 ,struct A68t505 ,struct A68t97 ,struct A68t503 ,struct A68t461 *,struct A68t497 *,struct A68t455 ),(struct A68t504 ,struct A68t505 ,struct A68t97 ,struct A68t503 ,struct A68t461 *,struct A68t497 *,struct A68t455 ,void *));
typedef struct A68t518  A68_518 ;    /* PROC(MODE504,MODE505,MODE97,MODE503,REF MODE461,REF MODE497,MODE455) REF MODE502 */

A_PROCEDURE(A68_VOID ,A68t519,(struct A68t502 *,struct A68t487 *),(struct A68t502 *,struct A68t487 *,void *));
typedef struct A68t519  A68_519 ;    /* PROC(REF MODE502) MODE487 */

A_PROCEDURE(A68_VOID ,A68t520,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t520  A68_520 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t521,(A68_VC ,A68_VC ,struct A68t473 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t473 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t521  A68_521 ;    /* PROC(REF MODE26,MODE26,MODE473,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t522,(A68_VC ),(A68_VC ,void *));
typedef struct A68t522  A68_522 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t523,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t523  A68_523 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t524,(struct A68t482 ,struct A68t97 ,A68_VC *),(struct A68t482 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(MODE482,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t525,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t525  A68_525 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t526,(struct A68t453 ,struct A68t97 ),(struct A68t453 ,struct A68t97 ,void *));
typedef struct A68t526  A68_526 ;    /* PROC(MODE453,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t527,(struct A68t453 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t453 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t527  A68_527 ;    /* PROC(MODE453,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t528,(struct A68t454 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *),(struct A68t454 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *,void *));
typedef struct A68t528  A68_528 ;    /* PROC(REF MODE454,REF INT,REF MODE26,MODE97) MODE158 */

A_PROCEDURE(A68_VOID ,A68t529,(struct A68t453 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t453 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t529  A68_529 ;    /* PROC(MODE453,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t530,(struct A68t453 ,struct A68t97 ,struct A68t46 ),(struct A68t453 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t530  A68_530 ;    /* PROC(MODE453,MODE97,MODE46) INT */
struct A68t531{
A68_INT  Lwb;
A_PAD_INT(PAD_175)
A68_INT  Upb;
A_PAD_INT(PAD_176)
};
typedef struct A68t531  A68_531 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t532,(struct A68t453 ,struct A68t531 ,struct A68t97 ,struct A68t531 *),(struct A68t453 ,struct A68t531 ,struct A68t97 ,struct A68t531 *,void *));
typedef struct A68t532  A68_532 ;    /* PROC(MODE453,MODE531,MODE97) MODE531 */

A_PROCEDURE(A68_VOID ,A68t533,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t533  A68_533 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t534,(struct A68t453 ,struct A68t97 ),(struct A68t453 ,struct A68t97 ,void *));
typedef struct A68t534  A68_534 ;    /* PROC(MODE453,MODE97) CHAR */

A_PROCEDURE(struct A68t461 *,A68t535,(void),(void *));
typedef struct A68t535  A68_535 ;    /* PROC REF MODE461 */

A_PROCEDURE(A68_VOID ,A68t536,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t536  A68_536 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t537,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t537  A68_537 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t538);
typedef struct A68t538  A68_538 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t539,(struct A68t200 ,struct A68t97 ),(struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t539  A68_539 ;    /* PROC(MODE200,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t540,(struct A68t195 *,A68_VC ,struct A68t97 ),(struct A68t195 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t540  A68_540 ;    /* PROC(REF MODE195,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t541,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t541  A68_541 ;    /* PROC(MODE85) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t542);
typedef struct A68t542  A68_542 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t543);
typedef struct A68t543  A68_543 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t544,(struct A68t498 *),(struct A68t498 *,void *));
typedef struct A68t544  A68_544 ;    /* PROC REF MODE498 */
A_ISTRUCT(A68_CHAR ,2,A68t545);
typedef struct A68t545  A68_545 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t546);
typedef struct A68t546  A68_546 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t547);
typedef struct A68t547  A68_547 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t548);
typedef struct A68t548  A68_548 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t549);
typedef struct A68t549  A68_549 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t550);
typedef struct A68t550  A68_550 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t551);
typedef struct A68t551  A68_551 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t552);
typedef struct A68t552  A68_552 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t553);
typedef struct A68t553  A68_553 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t554);
typedef struct A68t554  A68_554 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(struct A68t494 ,8,A68t555);
typedef struct A68t555  A68_555 ;    /* STRUCT 8 MODE494 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kernelreader --- */
extern A68_VOID  LKFAOST_get_fnname(struct A68t453 ,struct A68t97 ,A68_VC *);
extern A68_452  ALFAOST_name_syntax;
extern A68_452  CLFAOST_declname_syntax;
extern A68_486  NLFAOST_get_declname;
extern A68_452  HNFAOST_filename_syntax;
extern A68_VOID  XNFAOST_get_filename(struct A68t453 ,A68_VC ,struct A68t97 ,A68_134 *);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_488  RNDAOST_secretprivateaccess;
extern A68_487  ZNDAOST_continue;
extern A68_VOID  KRDAOST_makecommands(struct A68t494 ,A68_498 *);
extern A68_496 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t488 ,struct A68t498 );
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_452  SRAAOST_noparameters;
extern A68_VOID  DUAAOST_star(struct A68t452 ,A68_450 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from closureprocs --- */
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from assclosure --- */
extern A68_254 * QYDBELA_context_closure(struct A68t200 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  VZDBELA_declaration_spec(struct A68t195 *,A68_VC ,A68_BOOL ,struct A68t97 ,A68_258 *);
extern A68_VOID  ABEBELA_add_import(struct A68t258 ,struct A68t97 );
extern A68_254 * MBEBELA_get_allimports(struct A68t254 *,struct A68t97 );
/* --- End of imports from assclosure --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from lowptil --- */
extern A68_VOID  XSKBELA_ptfnil(struct A68t195 *,A68_VC ,struct A68t176 ,struct A68t97 );
extern A68_VOID  KYFBELA_ptsize(struct A68t195 *,struct A68t97 );
/* --- End of imports from lowptil --- */


/* --- Imports from ptassem --- */
extern A68_VOID  FGJATRN_pt_closure(struct A68t254 *,A68_INT );
extern A68_VOID  ZDJATRN_pt_outer(struct A68t258 ,A68_INT );
/* --- End of imports from ptassem --- */


/* --- Imports from ptkeepsake --- */
extern A68_VOID  MJJAELA_ptkeepsake(struct A68t174 *,struct A68t97 );
/* --- End of imports from ptkeepsake --- */


/* --- Imports from ptcomp --- */
extern A68_VOID  NLKBELA_ptcomp(struct A68t111 *,struct A68t97 );
/* --- End of imports from ptcomp --- */


/* --- Imports from attrdecls --- */
extern A68_188 * TBWAELA_get_declattribute(struct A68t195 *,A68_INT ,struct A68t97 );
/* --- End of imports from attrdecls --- */


/* --- Imports from libinterface --- */
extern A68_VOID  LEBBELA_get_decls(struct A68t195 *,struct A68t97 ,A68_196 *);
extern A68_INT  IGBBELA_check_decl(struct A68t195 *,A68_VC ,struct A68t97 );
extern A68_BOOL  QJBBELA_save_library(struct A68t97 );
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_198 * HXJAELA_library;
extern A68_INT * JZJAELA_body_key;
extern A68_173 * TYJAELA_discfile;
extern A68_195 * UDKAELA_get_context(A68_VC );
extern A68_BOOL  REKAELA_check_text(struct A68t195 *,struct A68t97 );
extern A68_VOID  OFKAELA_check_selected(struct A68t158 ,struct A68t97 ,A68_200 *);
/* --- End of imports from libmodes --- */


/* --- Imports from basics --- */
extern A68_VC  DLDAOST_source_type;
/* --- End of imports from basics --- */


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
extern A68_34 * LEAAOST_out;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  RZAAOSL_resetindent(struct A68t34 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void MQDBELA(void);   /* assclosure */
extern void TIGAOST(void);   /* ioprocs */
extern void HQKBELA(void);   /* lowptil */
extern void NCGATRN(void);   /* ptassem */
extern void FJJAELA(void);   /* ptkeepsake */
extern void OYJBELA(void);   /* ptcomp */
extern void DZVAELA(void);   /* attrdecls */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_538   HTKBELA = {"$Id: diagnostics.a68,v 34.3 1995/03/29 13:03:24 ella Exp $"}; 
A_GISVEC(A68_VC ,ITKBELA,HTKBELA,58)
static A68_542   ZTKBELA = {"End of FN"}; 
A_GISVEC(A68_VC ,AUKBELA,ZTKBELA,9)
static A68_545   RUKBELA = {"PT"}; 
static A68_114   UUKBELA = {"COMP"}; 
A_GISVEC(A68_VC ,VUKBELA,UUKBELA,4)
static A68_546   XUKBELA = {"Compiler printer for a file of ELLA text."}; 
A_GISVEC(A68_VC ,YUKBELA,XUKBELA,41)
static A68_545   OVKBELA = {"IL"}; 
A_GISVEC(A68_VC ,PVKBELA,OVKBELA,2)
static A68_547   RVKBELA = {"Prints out the IL of the current ELLA context"}; 
A_GISVEC(A68_VC ,SVKBELA,RVKBELA,45)
static A68_114   LWKBELA = {"FNIL"}; 
A_GISVEC(A68_VC ,MWKBELA,LWKBELA,4)
static A68_548   QWKBELA = {"Prints out the IL for <name>* in the current context"}; 
A_GISVEC(A68_VC ,RWKBELA,QWKBELA,52)
static A68_549   MXKBELA = {"ILSIZE"}; 
A_GISVEC(A68_VC ,NXKBELA,MXKBELA,6)
static A68_550   PXKBELA = {"size of intermediate language in current context"}; 
A_GISVEC(A68_VC ,QXKBELA,PXKBELA,48)
static A68_551   DYKBELA = {"KEEPSAKE"}; 
A_GISVEC(A68_VC ,EYKBELA,DYKBELA,8)
static A68_552   GYKBELA = {"Prints out the KEEPSAKE structure of the ELLA library"}; 
A_GISVEC(A68_VC ,HYKBELA,GYKBELA,53)
static A68_553   TYKBELA = {"ASSEM"}; 
A_GISVEC(A68_VC ,UYKBELA,TYKBELA,5)
static A68_552   WYKBELA = {"Prints out the assembling of the current ELLA context"}; 
A_GISVEC(A68_VC ,XYKBELA,WYKBELA,53)
static A68_553   LZKBELA = {"SPECS"}; 
A_GISVEC(A68_VC ,MZKBELA,LZKBELA,5)
static A68_550   OZKBELA = {"Prints out the specs of the current ELLA context"}; 
A_GISVEC(A68_VC ,PZKBELA,OZKBELA,48)
static A68_554   DALBELA = {"FNASSEM"}; 
A_GISVEC(A68_VC ,EALBELA,DALBELA,7)
static A68_546   IALBELA = {"Prints out the assembler mode for <name>*"}; 
A_GISVEC(A68_VC ,JALBELA,IALBELA,41)
A_GISVEC(A68_VC ,BBLBELA,RUKBELA,2)
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} VTKBELA_print;

A_STATIC A68_VOID  LTKBELA_ptnewmodes(A68_200  Cr, A68_97  Msg);

A_STATIC A68_VOID  QTKBELA_ptfnnewmodes(A68_195 * Ct, A68_VC  Name, A68_97  Msg);

A_STATIC A68_VOID  UTKBELA_print(A68_85  Param, void *NonLocals);

A_STATIC A68_VOID  OUKBELA_ptspecs(A68_200  Cr, A68_97  Msg);

A68_VOID  QUKBELA_make_diagnostics(A68_498  *ReturnedValue);

A_STATIC A68_VOID  DVKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  XVKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  WWKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  VXKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  MYKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  CZKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  UZKBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  OALBELA_anonymous(A68_454  Names, A68_97  Msg);

A_STATIC A68_VOID  UTKBELA_print(A68_85  Param, void *NonLocals)
#define NL(x) (((VTKBELA_print *)NonLocals)->x)
{ 
A_PROC_ENTRY(print);
 /* line 80: */
{ 
SOAAOST_flt_if_interrupted(NL(Msg));
GFBAOSL_put(LEAAOST_out, Param);
} 
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  DVKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_INT  EVKBELA;  /* YIELD */
A68_134  FVKBELA;  /* avoid structure result */
A68_VC  GVKBELA_name;
A68_111 * HVKBELA_comp_file;
 /* line 110: */
 /* line 111: */
{ 
EVKBELA = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Names,EVKBELA))), DLDAOST_source_type, Msg, &FVKBELA );
GVKBELA_name = FVKBELA.Filename;
 /* line 112: */
HVKBELA_comp_file = FQBAOSI_open_file(GVKBELA_name, PNBAOSI_read_access, Msg);
 /* line 113: */
 /* line 114: */
 /* line 115: */
NLKBELA_ptcomp(HVKBELA_comp_file, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  XVKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_195 * YVKBELA_ct;
A68_196  ZVKBELA;  /* avoid structure result */
A68_196  AWKBELA_decls;
A68_188 * BWKBELA_bodyset;
A68_INT  CWKBELA_i;
A68_INT  DWKBELA;  /* to part of loop */
A68_177  EWKBELA;  /* OPERATORS - simple index */
 /* line 123: */
{ 
YVKBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 124: */
LEBBELA_get_decls( YVKBELA_ct, Msg, &ZVKBELA );
AWKBELA_decls = ZVKBELA;
 /* line 125: */
 /* line 126: */
BWKBELA_bodyset = TBWAELA_get_declattribute(YVKBELA_ct, (*JZJAELA_body_key), Msg);
 /* line 127: */
 /* line 128: */
DWKBELA = AWKBELA_decls.upb;
for ( CWKBELA_i = 1;
CWKBELA_i <= DWKBELA;
CWKBELA_i += 1 )
{ 
 /* line 129: */
EWKBELA = (*(&(BWKBELA_bodyset->Data))) ;
XSKBELA_ptfnil(YVKBELA_ct, (*(&((&A_VINDEX(AWKBELA_decls,CWKBELA_i))->Il))), (*(&A_VINDEX(EWKBELA,CWKBELA_i))), Msg);
}
 /* line 131: */
 /* line 132: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  WWKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_195 * XWKBELA_ct;
A68_453 * YWKBELA_name;
A68_INT  ZWKBELA;  /* forall loop counter */
A68_VC  AXKBELA;  /* avoid structure result */
A68_INT  BXKBELA_declno;
A68_196  CXKBELA;  /* avoid structure result */
A68_196  DXKBELA_decls;
A68_188 * EXKBELA_bodyset;
A68_177  FXKBELA;  /* OPERATORS - simple index */
 /* line 139: */
{ 
XWKBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 140: */
 /* line 141: */
ZWKBELA = Names.upb -1;
YWKBELA_name = Names.data;
for (;ZWKBELA-- >= 0;
(YWKBELA_name++
) )
{
 /* line 142: */
A_CALLPROC(NLFAOST_get_declname,((*YWKBELA_name), Msg, &AXKBELA),((*YWKBELA_name), Msg, &AXKBELA,(NLFAOST_get_declname).nonlocals));
BXKBELA_declno = IGBBELA_check_decl(XWKBELA_ct, AXKBELA, Msg);
 /* line 143: */
LEBBELA_get_decls( XWKBELA_ct, Msg, &CXKBELA );
DXKBELA_decls = CXKBELA;
 /* line 144: */
 /* line 145: */
EXKBELA_bodyset = TBWAELA_get_declattribute(XWKBELA_ct, (*JZJAELA_body_key), Msg);
 /* line 146: */
 /* line 147: */
 /* line 148: */
FXKBELA = (*(&(EXKBELA_bodyset->Data))) ;
XSKBELA_ptfnil(XWKBELA_ct, (*(&((&A_VINDEX(DXKBELA_decls,BXKBELA_declno))->Il))), (*(&A_VINDEX(FXKBELA,BXKBELA_declno))), Msg);
}
 /* line 149: */
 /* line 150: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  VXKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_195 * WXKBELA_ct;
 /* line 157: */
{ 
WXKBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 158: */
 /* line 159: */
 /* line 160: */
KYFBELA_ptsize(WXKBELA_ct, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  MYKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
 /* line 169: */
 /* line 170: */
MJJAELA_ptkeepsake((*(&(TYJAELA_discfile->Database))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CZKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_200  DZKBELA;  /* avoid structure result */
A68_200  EZKBELA_cr;
 /* line 178: */
{ 
OFKAELA_check_selected( (*(&(HXJAELA_library->Currentct))), Msg, &DZKBELA );
EZKBELA_cr = DZKBELA;
 /* line 179: */
QJBBELA_save_library(Msg);
 /* line 180: */
 /* line 181: */
 /* line 182: */
LTKBELA_ptnewmodes(EZKBELA_cr, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  UZKBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_200  VZKBELA;  /* avoid structure result */
A68_200  WZKBELA_cr;
 /* line 189: */
{ 
OFKAELA_check_selected( (*(&(HXJAELA_library->Currentct))), Msg, &VZKBELA );
WZKBELA_cr = VZKBELA;
 /* line 190: */
QJBBELA_save_library(Msg);
 /* line 191: */
 /* line 192: */
 /* line 193: */
OUKBELA_ptspecs(WZKBELA_cr, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  OALBELA_anonymous(A68_454  Names, A68_97  Msg)
{ 
A68_195 * PALBELA_ct;
A68_453 * QALBELA_nm;
A68_INT  RALBELA;  /* forall loop counter */
A68_VC  SALBELA;  /* avoid structure result */
A68_VC  TALBELA_name;
 /* line 200: */
{ 
PALBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 201: */
QJBBELA_save_library(Msg);
 /* line 202: */
 /* line 203: */
RALBELA = Names.upb -1;
QALBELA_nm = Names.data;
for (;RALBELA-- >= 0;
(QALBELA_nm++
) )
{
LKFAOST_get_fnname( (*QALBELA_nm), Msg, &SALBELA );
TALBELA_name = SALBELA;
 /* line 204: */
 /* line 205: */
QTKBELA_ptfnnewmodes(PALBELA_ct, TALBELA_name, Msg);
}
 /* line 206: */
 /* line 207: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  LTKBELA_ptnewmodes(A68_200  Cr, A68_97  Msg)
{ 
A68_254 * MTKBELA_closure;
A_PROC_ENTRY(ptnewmodes);
 /* line 71: */
 /* line 72: */
{ 
MTKBELA_closure = QYDBELA_context_closure(Cr, A68_TRUE, Msg);
 /* line 73: */
MTKBELA_closure = MBEBELA_get_allimports(MTKBELA_closure, Msg);
 /* line 74: */
 /* line 75: */
FGJATRN_pt_closure(MTKBELA_closure, 0);
} 
A_PROC_EXIT(ptnewmodes);
return;
} 
#undef NL

A_STATIC A68_VOID  QTKBELA_ptfnnewmodes(A68_195 * Ct, A68_VC  Name, A68_97  Msg)
{ 
A68_541  TTKBELA_print;   /* proc value of non-global proc */
A68_258  XTKBELA;  /* avoid structure result */
A68_258  WTKBELA_ass_res;
A68_543  YTKBELA;  /* collateral clause result */
A68_52  BUKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  CUKBELA;  /* YIELD */
A68_52  DUKBELA;  /* OPERATORS - mode -> union mode */
A68_56  EUKBELA;  /* procedure value */
A68_85  FUKBELA;  /* OPERATORS - istruct -> vector */
A68_543  GUKBELA;  /* collateral clause result */
A68_52  HUKBELA;  /* OPERATORS - mode -> union mode */
A68_56  IUKBELA;  /* procedure value */
A68_52  JUKBELA;  /* OPERATORS - mode -> union mode */
A68_56  KUKBELA;  /* procedure value */
A68_85  LUKBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ptfnnewmodes);
 /* line 78: */
 /* line 79: */
{ 
A_CLOSURE( TTKBELA_print, UTKBELA_print, VTKBELA_print );
(( VTKBELA_print * ) ( TTKBELA_print.nonlocals )) -> Msg = Msg;
 /* line 82: */
 /* line 83: */
if ( REKAELA_check_text(Ct, Msg) )
{ 
VZDBELA_declaration_spec( Ct, Name, A68_TRUE, Msg, &XTKBELA );
WTKBELA_ass_res = XTKBELA;
 /* line 84: */
ABEBELA_add_import(WTKBELA_ass_res, Msg);
 /* line 85: */
ZDJATRN_pt_outer(WTKBELA_ass_res, 0);
 /* line 86: */
if ( ((*(&((&WTKBELA_ass_res)->Sort)))==VKAATRN_outerfn) )
{ 
CUKBELA = AUKBELA ;
YTKBELA.data[0] = A_UNITE(BUKBELA,mode7,7,CUKBELA);
EUKBELA.fn.fn_global = LRAAOSL_newline;
EUKBELA.nonlocals = A68_NIL;
YTKBELA.data[1] = A_UNITE(DUKBELA,mode12,12,EUKBELA);
A_CALLPROC(TTKBELA_print,(A_HISVEC(FUKBELA,YTKBELA,2,A68_52 )),(A_HISVEC(FUKBELA,YTKBELA,2,A68_52 ),(TTKBELA_print).nonlocals));
} 
 /* line 87: */
IUKBELA.fn.fn_global = RZAAOSL_resetindent;
IUKBELA.nonlocals = A68_NIL;
GUKBELA.data[0] = A_UNITE(HUKBELA,mode12,12,IUKBELA);
KUKBELA.fn.fn_global = LRAAOSL_newline;
KUKBELA.nonlocals = A68_NIL;
GUKBELA.data[1] = A_UNITE(JUKBELA,mode12,12,KUKBELA);
 /* line 88: */
 /* line 89: */
A_CALLPROC(TTKBELA_print,(A_HISVEC(LUKBELA,GUKBELA,2,A68_52 )),(A_HISVEC(LUKBELA,GUKBELA,2,A68_52 ),(TTKBELA_print).nonlocals));
} 
} 
A_PROC_EXIT(ptfnnewmodes);
return;
} 
#undef NL

A_STATIC A68_VOID  OUKBELA_ptspecs(A68_200  Cr, A68_97  Msg)
{ 
A68_254 * PUKBELA_closure;
A_PROC_ENTRY(ptspecs);
 /* line 93: */
 /* line 94: */
{ 
PUKBELA_closure = QYDBELA_context_closure(Cr, A68_FALSE, Msg);
 /* line 95: */
 /* line 96: */
FGJATRN_pt_closure(PUKBELA_closure, 0);
} 
A_PROC_EXIT(ptspecs);
return;
} 
#undef NL

A68_VOID  QUKBELA_make_diagnostics(A68_498  *ReturnedValue)
{ 
A68_555  SUKBELA;  /* collateral clause result */
A68_495  TUKBELA;  /* collateral clause result */
A68_VC  WUKBELA;  /* avoid structure result */
A68_VC  ZUKBELA;  /* avoid structure result */
A68_499  AVKBELA;  /* OPERATORS - mode -> union mode */
A68_491  IVKBELA;  /* OPERATORS - mode -> union mode */
A68_493  JVKBELA;  /* YIELD */
A68_493  KVKBELA;  /* procedure value */
A68_495 * LVKBELA;  /* YIELD */
A68_494  MVKBELA;  /* OPERATORS - mode -> union mode */
A68_495  NVKBELA;  /* collateral clause result */
A68_VC  QVKBELA;  /* avoid structure result */
A68_VC  TVKBELA;  /* avoid structure result */
A68_499  UVKBELA;  /* OPERATORS - mode -> union mode */
A68_491  FWKBELA;  /* OPERATORS - mode -> union mode */
A68_493  GWKBELA;  /* YIELD */
A68_493  HWKBELA;  /* procedure value */
A68_495 * IWKBELA;  /* YIELD */
A68_494  JWKBELA;  /* OPERATORS - mode -> union mode */
A68_495  KWKBELA;  /* collateral clause result */
A68_VC  NWKBELA;  /* avoid structure result */
A68_450  OWKBELA;  /* avoid structure result */
A68_452  PWKBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SWKBELA;  /* avoid structure result */
A68_499  TWKBELA;  /* OPERATORS - mode -> union mode */
A68_491  GXKBELA;  /* OPERATORS - mode -> union mode */
A68_493  HXKBELA;  /* YIELD */
A68_493  IXKBELA;  /* procedure value */
A68_495 * JXKBELA;  /* YIELD */
A68_494  KXKBELA;  /* OPERATORS - mode -> union mode */
A68_495  LXKBELA;  /* collateral clause result */
A68_VC  OXKBELA;  /* avoid structure result */
A68_VC  RXKBELA;  /* avoid structure result */
A68_499  SXKBELA;  /* OPERATORS - mode -> union mode */
A68_491  XXKBELA;  /* OPERATORS - mode -> union mode */
A68_493  YXKBELA;  /* YIELD */
A68_493  ZXKBELA;  /* procedure value */
A68_495 * AYKBELA;  /* YIELD */
A68_494  BYKBELA;  /* OPERATORS - mode -> union mode */
A68_495  CYKBELA;  /* collateral clause result */
A68_VC  FYKBELA;  /* avoid structure result */
A68_VC  IYKBELA;  /* avoid structure result */
A68_499  JYKBELA;  /* OPERATORS - mode -> union mode */
A68_491  NYKBELA;  /* OPERATORS - mode -> union mode */
A68_493  OYKBELA;  /* YIELD */
A68_493  PYKBELA;  /* procedure value */
A68_495 * QYKBELA;  /* YIELD */
A68_494  RYKBELA;  /* OPERATORS - mode -> union mode */
A68_495  SYKBELA;  /* collateral clause result */
A68_VC  VYKBELA;  /* avoid structure result */
A68_VC  YYKBELA;  /* avoid structure result */
A68_499  ZYKBELA;  /* OPERATORS - mode -> union mode */
A68_491  FZKBELA;  /* OPERATORS - mode -> union mode */
A68_493  GZKBELA;  /* YIELD */
A68_493  HZKBELA;  /* procedure value */
A68_495 * IZKBELA;  /* YIELD */
A68_494  JZKBELA;  /* OPERATORS - mode -> union mode */
A68_495  KZKBELA;  /* collateral clause result */
A68_VC  NZKBELA;  /* avoid structure result */
A68_VC  QZKBELA;  /* avoid structure result */
A68_499  RZKBELA;  /* OPERATORS - mode -> union mode */
A68_491  XZKBELA;  /* OPERATORS - mode -> union mode */
A68_493  YZKBELA;  /* YIELD */
A68_493  ZZKBELA;  /* procedure value */
A68_495 * AALBELA;  /* YIELD */
A68_494  BALBELA;  /* OPERATORS - mode -> union mode */
A68_495  CALBELA;  /* collateral clause result */
A68_VC  FALBELA;  /* avoid structure result */
A68_450  GALBELA;  /* avoid structure result */
A68_452  HALBELA;  /* OPERATORS - mode -> union mode */
A68_VC  KALBELA;  /* avoid structure result */
A68_499  LALBELA;  /* OPERATORS - mode -> union mode */
A68_491  UALBELA;  /* OPERATORS - mode -> union mode */
A68_493  VALBELA;  /* YIELD */
A68_493  WALBELA;  /* procedure value */
A68_495 * XALBELA;  /* YIELD */
A68_494  YALBELA;  /* OPERATORS - mode -> union mode */
A68_498  ZALBELA;  /* clause result */
A68_498  ABLBELA;  /* OPERATORS - istruct -> vector */
A68_494  CBLBELA;  /* OPERATORS - mode -> union mode */
A68_496 * DBLBELA;  /* YIELD */
A68_498  EBLBELA;  /* avoid structure result */
A_PROC_ENTRY(make_diagnostics);
 /* line 103: */
 /* line 105: */
 /* line 106: */
ZAAAOSI_makervc( VUKBELA, &WUKBELA );
TUKBELA.Name = WUKBELA;
TUKBELA.Abreviation = EOAAOSL_nullstr;
 /* line 107: */
TUKBELA.Parameter = HNFAOST_filename_syntax;
TUKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 108: */
TUKBELA.Continuation = ZNDAOST_continue;
 /* line 109: */
ZAAAOSI_makervc( YUKBELA, &ZUKBELA );
TUKBELA.Help = A_UNITE(AVKBELA,mode1,1,ZUKBELA);
KVKBELA.fn.fn_global = DVKBELA_anonymous;
KVKBELA.nonlocals = A68_NIL;
JVKBELA = KVKBELA ;
TUKBELA.Command = A_UNITE(IVKBELA,mode3,3,JVKBELA);
 /* line 118: */
LVKBELA = A_HEAP(A68_495 ) ;
(*LVKBELA) = TUKBELA ;
SUKBELA.data[0] = A_UNITE(MVKBELA,mode1,1,LVKBELA);
 /* line 119: */
ZAAAOSI_makervc( PVKBELA, &QVKBELA );
NVKBELA.Name = QVKBELA;
NVKBELA.Abreviation = EOAAOSL_nullstr;
NVKBELA.Parameter = SRAAOST_noparameters;
 /* line 120: */
NVKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 121: */
NVKBELA.Continuation = ZNDAOST_continue;
 /* line 122: */
ZAAAOSI_makervc( SVKBELA, &TVKBELA );
NVKBELA.Help = A_UNITE(UVKBELA,mode1,1,TVKBELA);
HWKBELA.fn.fn_global = XVKBELA_anonymous;
HWKBELA.nonlocals = A68_NIL;
GWKBELA = HWKBELA ;
NVKBELA.Command = A_UNITE(FWKBELA,mode3,3,GWKBELA);
 /* line 134: */
IWKBELA = A_HEAP(A68_495 ) ;
(*IWKBELA) = NVKBELA ;
SUKBELA.data[1] = A_UNITE(JWKBELA,mode1,1,IWKBELA);
 /* line 135: */
ZAAAOSI_makervc( MWKBELA, &NWKBELA );
KWKBELA.Name = NWKBELA;
KWKBELA.Abreviation = EOAAOSL_nullstr;
 /* line 136: */
DUAAOST_star( CLFAOST_declname_syntax, &OWKBELA );
KWKBELA.Parameter = A_UNITE(PWKBELA,mode2,2,OWKBELA);
KWKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 137: */
KWKBELA.Continuation = ZNDAOST_continue;
 /* line 138: */
ZAAAOSI_makervc( RWKBELA, &SWKBELA );
KWKBELA.Help = A_UNITE(TWKBELA,mode1,1,SWKBELA);
IXKBELA.fn.fn_global = WWKBELA_anonymous;
IXKBELA.nonlocals = A68_NIL;
HXKBELA = IXKBELA ;
KWKBELA.Command = A_UNITE(GXKBELA,mode3,3,HXKBELA);
 /* line 152: */
JXKBELA = A_HEAP(A68_495 ) ;
(*JXKBELA) = KWKBELA ;
SUKBELA.data[2] = A_UNITE(KXKBELA,mode1,1,JXKBELA);
 /* line 153: */
ZAAAOSI_makervc( NXKBELA, &OXKBELA );
LXKBELA.Name = OXKBELA;
LXKBELA.Abreviation = EOAAOSL_nullstr;
 /* line 154: */
LXKBELA.Parameter = SRAAOST_noparameters;
LXKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 155: */
LXKBELA.Continuation = ZNDAOST_continue;
 /* line 156: */
ZAAAOSI_makervc( QXKBELA, &RXKBELA );
LXKBELA.Help = A_UNITE(SXKBELA,mode1,1,RXKBELA);
ZXKBELA.fn.fn_global = VXKBELA_anonymous;
ZXKBELA.nonlocals = A68_NIL;
YXKBELA = ZXKBELA ;
LXKBELA.Command = A_UNITE(XXKBELA,mode3,3,YXKBELA);
 /* line 163: */
AYKBELA = A_HEAP(A68_495 ) ;
(*AYKBELA) = LXKBELA ;
SUKBELA.data[3] = A_UNITE(BYKBELA,mode1,1,AYKBELA);
 /* line 165: */
ZAAAOSI_makervc( EYKBELA, &FYKBELA );
CYKBELA.Name = FYKBELA;
CYKBELA.Abreviation = EOAAOSL_nullstr;
 /* line 166: */
CYKBELA.Parameter = SRAAOST_noparameters;
CYKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 167: */
CYKBELA.Continuation = ZNDAOST_continue;
 /* line 168: */
ZAAAOSI_makervc( HYKBELA, &IYKBELA );
CYKBELA.Help = A_UNITE(JYKBELA,mode1,1,IYKBELA);
PYKBELA.fn.fn_global = MYKBELA_anonymous;
PYKBELA.nonlocals = A68_NIL;
OYKBELA = PYKBELA ;
CYKBELA.Command = A_UNITE(NYKBELA,mode3,3,OYKBELA);
 /* line 173: */
QYKBELA = A_HEAP(A68_495 ) ;
(*QYKBELA) = CYKBELA ;
SUKBELA.data[4] = A_UNITE(RYKBELA,mode1,1,QYKBELA);
 /* line 174: */
ZAAAOSI_makervc( UYKBELA, &VYKBELA );
SYKBELA.Name = VYKBELA;
SYKBELA.Abreviation = EOAAOSL_nullstr;
SYKBELA.Parameter = SRAAOST_noparameters;
 /* line 175: */
SYKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 176: */
SYKBELA.Continuation = ZNDAOST_continue;
 /* line 177: */
ZAAAOSI_makervc( XYKBELA, &YYKBELA );
SYKBELA.Help = A_UNITE(ZYKBELA,mode1,1,YYKBELA);
HZKBELA.fn.fn_global = CZKBELA_anonymous;
HZKBELA.nonlocals = A68_NIL;
GZKBELA = HZKBELA ;
SYKBELA.Command = A_UNITE(FZKBELA,mode3,3,GZKBELA);
 /* line 184: */
IZKBELA = A_HEAP(A68_495 ) ;
(*IZKBELA) = SYKBELA ;
SUKBELA.data[5] = A_UNITE(JZKBELA,mode1,1,IZKBELA);
 /* line 185: */
ZAAAOSI_makervc( MZKBELA, &NZKBELA );
KZKBELA.Name = NZKBELA;
KZKBELA.Abreviation = EOAAOSL_nullstr;
KZKBELA.Parameter = SRAAOST_noparameters;
 /* line 186: */
KZKBELA.Access = RNDAOST_secretprivateaccess;
 /* line 187: */
KZKBELA.Continuation = ZNDAOST_continue;
 /* line 188: */
ZAAAOSI_makervc( PZKBELA, &QZKBELA );
KZKBELA.Help = A_UNITE(RZKBELA,mode1,1,QZKBELA);
ZZKBELA.fn.fn_global = UZKBELA_anonymous;
ZZKBELA.nonlocals = A68_NIL;
YZKBELA = ZZKBELA ;
KZKBELA.Command = A_UNITE(XZKBELA,mode3,3,YZKBELA);
 /* line 195: */
AALBELA = A_HEAP(A68_495 ) ;
(*AALBELA) = KZKBELA ;
SUKBELA.data[6] = A_UNITE(BALBELA,mode1,1,AALBELA);
 /* line 196: */
ZAAAOSI_makervc( EALBELA, &FALBELA );
CALBELA.Name = FALBELA;
CALBELA.Abreviation = EOAAOSL_nullstr;
 /* line 197: */
DUAAOST_star( ALFAOST_name_syntax, &GALBELA );
CALBELA.Parameter = A_UNITE(HALBELA,mode2,2,GALBELA);
CALBELA.Access = RNDAOST_secretprivateaccess;
 /* line 198: */
CALBELA.Continuation = ZNDAOST_continue;
 /* line 199: */
ZAAAOSI_makervc( JALBELA, &KALBELA );
CALBELA.Help = A_UNITE(LALBELA,mode1,1,KALBELA);
 /* line 209: */
WALBELA.fn.fn_global = OALBELA_anonymous;
WALBELA.nonlocals = A68_NIL;
VALBELA = WALBELA ;
CALBELA.Command = A_UNITE(UALBELA,mode3,3,VALBELA);
 /* line 210: */
XALBELA = A_HEAP(A68_495 ) ;
(*XALBELA) = CALBELA ;
SUKBELA.data[7] = A_UNITE(YALBELA,mode1,1,XALBELA);
 /* line 213: */
DBLBELA = NSDAOST_make_group(BBLBELA, EOAAOSL_nullstr, RNDAOST_secretprivateaccess, A_HISVEC(ABLBELA,SUKBELA,8,A68_494 )) ;
KRDAOST_makecommands( A_UNITE(CBLBELA,mode2,2,DBLBELA), &EBLBELA );
ZALBELA = EBLBELA;
A_PROC_EXIT(make_diagnostics);
*ReturnedValue = (ZALBELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void ETKBELA(void)   /* initialise DECS diagnostics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/diagnostics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/transform/assoc/mfiles/closureprocs.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","./mfiles/assclosure.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/lowptil.m","/u/model/ella/transform/assoc/mfiles/ptassem.m","./mfiles/ptkeepsake.m","./mfiles/ptcomp.m","./mfiles/attrdecls.m","./mfiles/libinterface.m","./mfiles/libmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
MQDBELA();   /* USE assclosure */
TIGAOST();   /* USE ioprocs */
HQKBELA();   /* USE lowptil */
NCGATRN();   /* USE ptassem */
FJJAELA();   /* USE ptkeepsake */
OYJBELA();   /* USE ptcomp */
DZVAELA();   /* USE attrdecls */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/diagnostics.a68";
A_config.translation_time = "Tue Apr  4 10:42:47 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "DTKBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:42:47 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS diagnostics);
UEAALIB_a68config(LGAALIB_configinfo, ITKBELA);
 /* line 70: */
 /* line 77: */
 /* line 92: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 214: */
A_PROC_EXIT(DECS diagnostics);
} 
#undef NL
/* end of translation of ./a68files/diagnostics.a68 */
