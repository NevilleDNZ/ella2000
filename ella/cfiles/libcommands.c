
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
/* UNAME:CAGBELA */
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
struct A68t176{
struct A68t177 * Database;
A68_VC  Description;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE177,REF MODE26)  */
struct A68t177{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t178 * Df;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE178)  */
A_VECTOR(struct A68t179 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE179 */
struct A68t179{
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
typedef struct A68t179  A68_179 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t185 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE185 */
struct A68t186{
A68_INT  Block_num;
A_PAD_INT(PAD_44)
A68_INT  Offset;
A_PAD_INT(PAD_45)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT)  */
struct A68t185{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_46)
struct A68t186  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_47)
A68_INT  Dp_elts;
A_PAD_INT(PAD_48)
A68_INT  Code;
A_PAD_INT(PAD_49)
A68_INT  Version;
A_PAD_INT(PAD_50)
A68_INT  Read_size;
A_PAD_INT(PAD_51)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(BOOL,MODE186,INT,INT,INT,INT,INT)  */
struct A68t178{
struct A68t179 * Root;
struct A68t179 * Indirs_dp;
struct A68t179 * Freelist_dp;
struct A68t179 * Pagetable_dp;
struct A68t179 * Append_dp;
struct A68t180  Free_block_dps;
struct A68t180  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t181 * Write_buffer;
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
struct A68t182 * Gc_ptrs;
struct A68t183 * Instore_vars;
struct A68t184  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE180,REF MODE180,REF REF MODE111,REF REF MODE111,REF MODE181,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE182,REF MODE183,REF MODE184,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t181{
A68_VC  Buffer;
struct A68t187 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF MODE187,REF INT,REF INT,REF INT)  */
struct A68t182{
struct A68t186  Old;
struct A68t186  New;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE186,MODE186,REF MODE182)  */
struct A68t183{
A68_INT  Indirection;
A_PAD_INT(PAD_52)
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE183)  */
struct A68t187{
A68_INT  Lwb;
A_PAD_INT(PAD_53)
A68_INT  Upb;
A_PAD_INT(PAD_54)
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT,REF MODE187)  */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t177 *,struct A68t179 ,struct A68t179 ),(struct A68t177 *,struct A68t179 ,struct A68t179 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE177,MODE179,MODE179) BOOL */

A_PROCEDURE(A68_INT ,A68t189,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE177,MODE179) INT */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t177 *,struct A68t179 *),(struct A68t177 *,struct A68t179 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE177) MODE179 */

A_PROCEDURE(struct A68t111 *,A68t191,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t111 *,A68_BOOL ,struct A68t177 *),(struct A68t111 *,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE111,BOOL) MODE177 */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE177) BOOL */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE177,MODE179) VOID */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t177 *,struct A68t179 ,struct A68t97 ),(struct A68t177 *,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE177,MODE179,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t177 *,struct A68t97 ),(struct A68t177 *,struct A68t97 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE177,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t177 *,A68_INT ),(struct A68t177 *,A68_INT ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE177,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t177 *,A68_INT ,struct A68t97 ),(struct A68t177 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE177,INT,MODE97) VOID */

A_PROCEDURE(struct A68t111 *,A68t199,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE177) REF MODE111 */

A_PROCEDURE(A68_INT ,A68t200,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE177) INT */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t176 *,struct A68t179 ),(struct A68t176 *,struct A68t179 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE176,MODE179) BOOL */
struct A68t205{
A68_VC  Rvc;
struct A68t205 * Rest;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE26,REF MODE205)  */
struct A68t206{
struct A68t176  Df;
struct A68t205  Head;
struct A68t205 * Current;
A68_INT  Index;
A_PAD_INT(PAD_55)
A68_INT  Type;
A_PAD_INT(PAD_56)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_57)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE176,MODE205,REF MODE205,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t206 *,A68t207,(struct A68t176 *,struct A68t87 ,A68_INT ),(struct A68t176 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE176,MODE87,INT) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE206) VOID */

A_PROCEDURE(struct A68t206 *,A68t209,(struct A68t176 *,struct A68t179 ),(struct A68t176 *,struct A68t179 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE176,MODE179) REF MODE206 */

A_PROCEDURE(A68_CHAR ,A68t210,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE206) CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t206 *,A68_VC ),(struct A68t206 *,A68_VC ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE206,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE206) BOOL */

A_PROCEDURE(A68_INT ,A68t213,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE206) INT */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t206 *,A68_VC *),(struct A68t206 *,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE206) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t176 *,struct A68t97 ),(struct A68t176 *,struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t176 *,A68_VC ,struct A68t97 ,struct A68t179 *),(struct A68t176 *,A68_VC ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE176,MODE26,MODE97) MODE179 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t176 *,struct A68t180 ,struct A68t97 ,struct A68t179 *),(struct A68t176 *,struct A68t180 ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE176,MODE180,MODE97) MODE179 */

A_PROCEDURE(A68_INT ,A68t218,(struct A68t176 *,struct A68t179 ,struct A68t97 ),(struct A68t176 *,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE176,MODE179,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t97 ),(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE176,REF MODE26,MODE179,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t97 ),(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE176,REF MODE180,MODE179,MODE97) VOID */

A_PROCEDURE(struct A68t206 *,A68t221,(struct A68t176 *,struct A68t87 ),(struct A68t176 *,struct A68t87 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE176,MODE87) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t206 *,struct A68t97 ),(struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE206,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t206 *,struct A68t97 ,struct A68t179 *),(struct A68t206 *,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE206,MODE97) MODE179 */

A_PROCEDURE(A68_INT ,A68t224,(A68_CHAR ,struct A68t206 *,struct A68t97 ),(A68_CHAR ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(CHAR,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ,struct A68t206 *,struct A68t97 ),(A68_VC ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t226,(A68_INT ,struct A68t206 *,struct A68t97 ),(A68_INT ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t227,(A68_VC ,struct A68t206 *,struct A68t97 ),(A68_VC ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE26,REF MODE206,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t228,(A68_BOOL ,struct A68t206 *,struct A68t97 ),(A68_BOOL ,struct A68t206 *,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(BOOL,REF MODE206,MODE97) INT */
struct A68t229{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_58)
A68_BOOL  Login;
A_PAD_BOOL(PAD_59)
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE229)  */
struct A68t230{
A68_INT  Key;
A_PAD_INT(PAD_60)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_61)
struct A68t32  Version;
struct A68t180  Data;
struct A68t230 * Rest;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE180,REF MODE230)  */
struct A68t231{
A68_INT  Sort;
A_PAD_INT(PAD_62)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_63)
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE231)  */
struct A68t232{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_65)
A68_BOOL  Import;
A_PAD_BOOL(PAD_66)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_67)
A68_INT  Version;
A_PAD_INT(PAD_68)
A68_VC  Il;
struct A68t231 * Uses;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE231)  */
struct A68t233{
struct A68t162  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t179  Info;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE162,REF MODE26,REF MODE26,INT,MODE179)  */
struct A68t234{
struct A68t233  Binding;
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE233,REF MODE234)  */
struct A68t235{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_70)
struct A68t234 * Imports;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,INT,REF MODE234)  */
struct A68t236{
struct A68t235  Region;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE235,REF MODE236)  */
A_VECTOR(struct A68t232 ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] MODE232 */
struct A68t237{
A68_VC  Name;
struct A68t179  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_71)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_72)
struct A68t238  Decls;
struct A68t230 * Declattributes;
struct A68t236 * Regions;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE26,MODE179,BOOL,BOOL,REF MODE238,REF MODE230,REF MODE236)  */
struct A68t239{
struct A68t237  Context;
struct A68t239 * Rest;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE237,REF MODE239)  */
struct A68t240{
A68_VC  Name;
struct A68t111 * File;
struct A68t176 * Discfile;
struct A68t162  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_73)
struct A68t180  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_74)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t229 * Classes;
struct A68t239 * Contexts;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(REF MODE26,REF MODE111,REF MODE176,MODE162,REF MODE26,BOOL,MODE180,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE229,REF MODE239)  */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t240 *),(A68_BOOL ,struct A68t240 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL) MODE240 */
struct A68t242{
struct A68t237 * Context;
struct A68t235 * Region;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE237,REF MODE235)  */
struct A68t243{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_75)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t244,(struct A68t162 ,struct A68t162 ),(struct A68t162 ,struct A68t162 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE162,MODE162) BOOL */

A_PROCEDURE(A68_BOOL ,A68t245,(struct A68t242 ,struct A68t242 ),(struct A68t242 ,struct A68t242 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE242,MODE242) BOOL */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t162 ,A68_VC *),(struct A68t162 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE162) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t242 ,A68_VC *),(struct A68t242 ,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE242) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t242 ,struct A68t162 *),(struct A68t242 ,struct A68t162 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE242) MODE162 */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t237 *,struct A68t97 ),(struct A68t237 *,struct A68t97 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE237,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t250,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t240 *,A68t251,(void),(void *));
typedef struct A68t251  A68_251 ;    /* PROC REF MODE240 */

A_PROCEDURE(struct A68t237 *,A68t252,(A68_VC ),(A68_VC ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE26) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t237 *,A68_VC ,struct A68t242 *),(struct A68t237 *,A68_VC ,struct A68t242 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE237,REF MODE26) MODE242 */

A_PROCEDURE(struct A68t234 *,A68t254,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE242) REF MODE234 */

A_PROCEDURE(struct A68t233 *,A68t255,(struct A68t242 ,A68_VC ),(struct A68t242 ,A68_VC ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE242,REF MODE26) REF MODE233 */

A_PROCEDURE(struct A68t237 *,A68t256,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE26,MODE97) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t237 *,A68_VC ,struct A68t97 ,struct A68t242 *),(struct A68t237 *,A68_VC ,struct A68t97 ,struct A68t242 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE237,REF MODE26,MODE97) MODE242 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t162 ,struct A68t97 ,struct A68t242 *),(struct A68t162 ,struct A68t97 ,struct A68t242 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE162,MODE97) MODE242 */

A_PROCEDURE(struct A68t233 *,A68t259,(struct A68t242 ,A68_VC ,struct A68t97 ),(struct A68t242 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE242,REF MODE26,MODE97) REF MODE233 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t179 *,struct A68t179 *,struct A68t179 *,struct A68t97 ),(struct A68t179 *,struct A68t179 *,struct A68t179 *,struct A68t97 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE179,REF MODE179,REF MODE179,MODE97) VOID */

A_PROCEDURE(struct A68t239 *,A68t263,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE97) REF MODE239 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t238 ,struct A68t97 ,struct A68t179 *),(struct A68t238 ,struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE238,MODE97) MODE179 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t237 *,struct A68t97 ,struct A68t238 *),(struct A68t237 *,struct A68t97 ,struct A68t238 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE237,MODE97) REF MODE238 */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE238) VOID */

A_PROCEDURE(A68_INT ,A68t267,(struct A68t237 *,A68_VC ,struct A68t97 ),(struct A68t237 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE237,REF MODE26,MODE97) INT */

A_PROCEDURE(struct A68t243 *,A68t268,(struct A68t237 *,A68_INT ),(struct A68t237 *,A68_INT ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE237,INT) REF MODE243 */

A_PROCEDURE(struct A68t243 *,A68t269,(struct A68t242 ,A68_VC ),(struct A68t242 ,A68_VC ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE242,REF MODE26) REF MODE243 */

A_PROCEDURE(A68_VOID ,A68t270,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t176 *,struct A68t270 ,struct A68t97 ),(struct A68t176 *,struct A68t270 ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE176,MODE270,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,struct A68t270 ,struct A68t97 ),(A68_VC ,struct A68t270 ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE270,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t274,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t275,(A68_VC ,struct A68t238 ),(A68_VC ,struct A68t238 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE26,REF MODE238) INT */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t97 ),(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE237,REF MODE238,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t277,(A68_INT ,struct A68t242 *),(A68_INT ,struct A68t242 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(INT) MODE242 */

A_PROCEDURE(A68_INT ,A68t278,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE242) INT */

A_PROCEDURE(A68_INT ,A68t279,(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE242,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t97 ,struct A68t179 *),(struct A68t97 ,struct A68t179 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE97) MODE179 */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE162,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t242 ,A68_INT ,struct A68t97 ),(struct A68t242 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE242,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t242 ,struct A68t97 ),(struct A68t242 ,struct A68t97 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE242,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t237 *,A68_VC ,struct A68t97 ),(struct A68t237 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE237,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t285,(struct A68t242 ,A68_VC ,struct A68t97 ),(struct A68t242 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE242,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t237 *,struct A68t97 ),(struct A68t237 *,struct A68t97 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE237,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t237 *,A68_INT ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE237,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t242 ,struct A68t179 ,struct A68t97 ),(struct A68t242 ,struct A68t179 ,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE242,MODE179,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t237 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t237 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE237,INT,BOOL,BOOL,MODE97) VOID */
struct A68t291{
A68_INT  Version;
A_PAD_INT(PAD_76)
struct A68t179  Data;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT,MODE179)  */

A_PROCEDURE(A68_VOID ,A68t292,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t293,(A68_INT ),(A68_INT ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t230 *,A68t294,(struct A68t237 *,A68_INT ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF MODE237,INT,MODE97) REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t237 *,struct A68t32 ,struct A68t97 ),(struct A68t237 *,struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE237,MODE32,MODE97) VOID */
struct A68t297 ;

A_PROCEDURE(A68_BOOL ,A68t296,(struct A68t237 *,struct A68t297 ,struct A68t97 ),(struct A68t237 *,struct A68t297 ,struct A68t97 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE237,MODE297,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t297,(struct A68t230 *,struct A68t97 ),(struct A68t230 *,struct A68t97 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE230,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t237 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t180 ,struct A68t97 ),(struct A68t237 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t180 ,struct A68t97 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE237,INT,REF MODE32,INT,REF MODE180,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t230 *,A68_INT ,struct A68t291 ,struct A68t97 ),(struct A68t230 *,A68_INT ,struct A68t291 ,struct A68t97 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE230,INT,MODE291,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t230 *,A68_INT ,struct A68t97 ,struct A68t291 *),(struct A68t230 *,A68_INT ,struct A68t97 ,struct A68t291 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE230,INT,MODE97) MODE291 */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t230 *,A68_INT ,struct A68t97 ),(struct A68t230 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE230,INT,MODE97) VOID */
struct A68t302{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_77)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_78)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_79)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_80)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_81)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_82)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_83)
A68_INT  Width;
A_PAD_INT(PAD_84)
A68_INT  Page_count;
A_PAD_INT(PAD_85)
A68_INT  Page_length;
A_PAD_INT(PAD_86)
A68_INT  Eof_count;
A_PAD_INT(PAD_87)
struct A68t303 * Standard_reader;
struct A68t304 * Infile;
struct A68t173  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE303,REF MODE304,MODE173,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t305,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t303{
A68_VC  Rdbuffer;
struct A68t305  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_88)
A68_INT  Rdcharno;
A_PAD_INT(PAD_89)
A68_INT  Start_of_word;
A_PAD_INT(PAD_90)
struct A68t306 * Stack;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE26,MODE305,INT,INT,INT,REF MODE306)  */
struct A68t304{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_91)
A68_INT  Number;
A_PAD_INT(PAD_92)
A68_VC  Name;
struct A68t303 * Reader;
struct A68t304 * Previous;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE303,REF MODE304)  */
struct A68t306{
A68_VC  Line;
struct A68t306 * Rest;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(REF MODE26,REF MODE306)  */

A_PROCEDURE(struct A68t302 *,A68t307,(void),(void *));
typedef struct A68t307  A68_307 ;    /* PROC REF MODE302 */

A_PROCEDURE(A68_VOID ,A68t308,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE173) VOID */
A_VECTOR(struct A68t312 ,A68t311);
typedef struct A68t311  A68_311 ;    /* VECTOR [] MODE312 */
struct A68t310{
A68_BITS  Type;
A_PAD_BITS(PAD_93)
struct A68t311  Elements;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(BITS,REF MODE311)  */
struct A68t312 { A68_INT mode; union {
A68_INT * mode1;
struct A68t310  mode2;
} data; };
typedef struct A68t312  A68_312 ;    /* UNION(REF INT,MODE310)  */
struct A68t313{
A68_INT  Sort;
A_PAD_INT(PAD_94)
A68_VC  Value;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t313 ,A68t314);
typedef struct A68t314  A68_314 ;    /* VECTOR [] MODE313 */
A_VECTOR(struct A68t315 ,A68t317);
typedef struct A68t317  A68_317 ;    /* VECTOR [] MODE315 */
struct A68t316{
A68_INT  Choice;
A_PAD_INT(PAD_95)
struct A68t317  Params;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(INT,REF MODE317)  */
struct A68t315 { A68_INT mode; union {
struct A68t316  mode1;
struct A68t313  mode2;
} data; };
typedef struct A68t315  A68_315 ;    /* UNION(MODE316,MODE313)  */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE97) REF MODE26 */
struct A68t318 { A68_INT mode; union {
struct A68t319  mode1;
A68_INT * mode2;
struct A68t310  mode3;
} data; };
typedef struct A68t318  A68_318 ;    /* UNION(MODE319,REF INT,MODE310)  */
struct A68t320{
A68_INT * Sort;
struct A68t318  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(REF INT,MODE318,REF MODE26,REF MODE26)  */
struct A68t321{
struct A68t320  Rule;
struct A68t321 * Rest;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE320,REF MODE321)  */

A_PROCEDURE(A68_BOOL ,A68t322,(struct A68t310 ),(struct A68t310 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE310) BOOL */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t311 ,struct A68t310 *),(struct A68t311 ,struct A68t310 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE311) MODE310 */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t312 ,struct A68t310 *),(struct A68t312 ,struct A68t310 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE312) MODE310 */
struct A68t326 ;

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t312 ,struct A68t326 ,A68_VC *),(struct A68t312 ,struct A68t326 ,A68_VC *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE312,REF MODE326) REF MODE26 */
A_VECTOR(struct A68t320 ,A68t326);
typedef struct A68t326  A68_326 ;    /* VECTOR [] MODE320 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t34 *,struct A68t326 ),(struct A68t34 *,struct A68t326 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE34,REF MODE326) VOID */
struct A68t329 ;

A_PROCEDURE(struct A68t321 *,A68t328,(struct A68t321 *,struct A68t329 ),(struct A68t321 *,struct A68t329 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE321,MODE329) REF MODE321 */
A_VECTOR(struct A68t330 ,A68t329);
typedef struct A68t329  A68_329 ;    /* VECTOR [] MODE330 */
struct A68t330{
A68_INT * No;
struct A68t318  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(REF INT,MODE318,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t315 ,struct A68t314 *),(struct A68t315 ,struct A68t314 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE315) REF MODE314 */
struct A68t332{
A68_INT  C;
A_PAD_INT(PAD_96)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(INT)  */
struct A68t333{
A68_BITS  A;
A_PAD_BITS(PAD_97)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t335,(A68_VC ,struct A68t315 ,struct A68t97 ),(A68_VC ,struct A68t315 ,struct A68t97 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE26,MODE315,MODE97) VOID */
struct A68t334{
A68_VC  Parameter;
struct A68t335  Proc;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE26,MODE335)  */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t315 ,struct A68t97 ),(struct A68t315 ,struct A68t97 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE315,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t314 ,struct A68t97 ),(struct A68t314 ,struct A68t97 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE314,MODE97) VOID */
struct A68t336 { A68_INT mode; union {
struct A68t334  mode1;
struct A68t337  mode2;
struct A68t338  mode3;
} data; };
typedef struct A68t336  A68_336 ;    /* UNION(MODE334,MODE337,MODE338)  */
struct A68t339 { A68_INT mode; union {
struct A68t340 * mode1;
struct A68t341 * mode2;
struct A68t342 * mode3;
} data; };
typedef struct A68t339  A68_339 ;    /* UNION(REF MODE340,REF MODE341,REF MODE342)  */
struct A68t340 ;

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t340 *,struct A68t34 *),(struct A68t340 *,struct A68t34 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE340,REF MODE34) VOID */
struct A68t344 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t345  mode3;
} data; };
typedef struct A68t344  A68_344 ;    /* UNION(REF MODE26,REF MODE102,MODE345)  */
struct A68t340{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t312  Parameter;
struct A68t333  Access;
struct A68t332  Continuation;
struct A68t344  Help;
struct A68t336  Command;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE26,REF MODE26,MODE312,MODE333,MODE332,MODE344,MODE336)  */
A_VECTOR(struct A68t339 ,A68t343);
typedef struct A68t343  A68_343 ;    /* VECTOR [] MODE339 */
struct A68t341{
struct A68t340 * Group;
struct A68t343  Commands;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(REF MODE340,REF MODE343)  */
struct A68t342{
struct A68t340 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t343  Locals;
struct A68t343  Globals;
struct A68t340 * Postlude;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE340,REF MODE26,REF REF MODE26,REF MODE343,REF MODE343,REF MODE340)  */
struct A68t346{
struct A68t342 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_98)
struct A68t102  Input_lines;
struct A68t346 * Caller;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE342,INT,REF MODE102,REF MODE346)  */
struct A68t347 ;

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t347 *,struct A68t340 *,struct A68t315 ,struct A68t97 ,struct A68t332 *),(struct A68t347 *,struct A68t340 *,struct A68t315 ,struct A68t97 ,struct A68t332 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE347,REF MODE340,MODE315,MODE97) MODE332 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE102) VOID */
struct A68t351 ;

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t351 ),(struct A68t351 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE351) VOID */
struct A68t347{
struct A68t346 * Stack;
struct A68t326  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_99)
A68_BOOL  Private;
A_PAD_BOOL(PAD_100)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_101)
struct A68t348  Caller;
struct A68t349  Report_error;
struct A68t350  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(REF MODE346,REF MODE326,BOOL,BOOL,BOOL,MODE348,MODE349,MODE350,MODE97)  */
struct A68t351 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t351  A68_351 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t352,(struct A68t332 ,struct A68t332 ),(struct A68t332 ,struct A68t332 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE332,MODE332) BOOL */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t343 ,struct A68t343 ,struct A68t343 *),(struct A68t343 ,struct A68t343 ,struct A68t343 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE343,MODE343) REF MODE343 */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t343 ,struct A68t339 ,struct A68t343 *),(struct A68t343 ,struct A68t339 ,struct A68t343 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE343,MODE339) REF MODE343 */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t343 *,struct A68t343 ,struct A68t343 *),(struct A68t343 *,struct A68t343 ,struct A68t343 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF REF MODE343,MODE343) REF MODE343 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t343 *,struct A68t339 ,struct A68t343 *),(struct A68t343 *,struct A68t339 ,struct A68t343 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF REF MODE343,MODE339) REF MODE343 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t343 ,struct A68t343 *),(struct A68t343 ,struct A68t343 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE343) REF MODE343 */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t339 ,struct A68t343 *),(struct A68t339 ,struct A68t343 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE339) REF MODE343 */

A_PROCEDURE(struct A68t341 *,A68t359,(A68_VC ,A68_VC ,struct A68t333 ,struct A68t343 ),(A68_VC ,A68_VC ,struct A68t333 ,struct A68t343 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE26,MODE26,MODE333,MODE343) REF MODE341 */

A_PROCEDURE(struct A68t342 *,A68t360,(struct A68t340 *,A68_VC ,A68_VC *,struct A68t343 ,struct A68t343 ,struct A68t336 ),(struct A68t340 *,A68_VC ,A68_VC *,struct A68t343 ,struct A68t343 ,struct A68t336 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE340,MODE26,REF REF MODE26,REF MODE343,REF MODE343,MODE336) REF MODE342 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t347 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t347 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE347,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t347 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t347 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE347,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t347 *,A68t363,(struct A68t349 ,struct A68t350 ,struct A68t97 ,struct A68t348 ,struct A68t321 *,struct A68t342 *,struct A68t315 ),(struct A68t349 ,struct A68t350 ,struct A68t97 ,struct A68t348 ,struct A68t321 *,struct A68t342 *,struct A68t315 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE349,MODE350,MODE97,MODE348,REF MODE321,REF MODE342,MODE315) REF MODE347 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t347 *,struct A68t332 *),(struct A68t347 *,struct A68t332 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE347) MODE332 */

A_PROCEDURE(A68_BOOL ,A68t365,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t366,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t367,(A68_VC ,A68_VC ,struct A68t365 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t365 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE26,MODE26,MODE365,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t368,(A68_VC ),(A68_VC ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t369,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF INT,MODE97) BOOL */
struct A68t371 ;

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t371 ,struct A68t97 ,A68_VC *),(struct A68t371 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE371,MODE97) REF MODE26 */
struct A68t371{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_102)
A68_BOOL  Check;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t371  A68_371 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t371 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t371 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE371,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t373,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t374,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE313) BOOL */

A_PROCEDURE(A68_INT ,A68t375,(struct A68t313 ,struct A68t97 ),(struct A68t313 ,struct A68t97 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE313,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t313 ,struct A68t97 ,A68_VC *),(struct A68t313 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE313,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t313 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t313 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE313,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t314 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t162 *),(struct A68t314 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t162 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE314,REF INT,REF MODE26,MODE97) MODE162 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t313 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t313 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE313,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t380,(struct A68t313 ,struct A68t97 ,struct A68t46 ),(struct A68t313 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE313,MODE97,MODE46) INT */
struct A68t381{
A68_INT  Lwb;
A_PAD_INT(PAD_104)
A68_INT  Upb;
A_PAD_INT(PAD_105)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t313 ,struct A68t381 ,struct A68t97 ,struct A68t381 *),(struct A68t313 ,struct A68t381 ,struct A68t97 ,struct A68t381 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE313,MODE381,MODE97) MODE381 */

A_PROCEDURE(A68_VOID ,A68t383,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t384,(struct A68t313 ,struct A68t97 ),(struct A68t313 ,struct A68t97 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE313,MODE97) CHAR */

A_PROCEDURE(struct A68t321 *,A68t385,(void),(void *));
typedef struct A68t385  A68_385 ;    /* PROC REF MODE321 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t387,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t388);
typedef struct A68t388  A68_388 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t242 ,A68_BOOL ,struct A68t97 ),(struct A68t242 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE242,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t392);
typedef struct A68t392  A68_392 ;    /* STRUCT 7 MODE52 */
A_ISTRUCT(struct A68t52 ,5,A68t393);
typedef struct A68t393  A68_393 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t394);
typedef struct A68t394  A68_394 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t395);
typedef struct A68t395  A68_395 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,19,A68t396);
typedef struct A68t396  A68_396 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t397);
typedef struct A68t397  A68_397 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t398);
typedef struct A68t398  A68_398 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,10,A68t399);
typedef struct A68t399  A68_399 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t400);
typedef struct A68t400  A68_400 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t401);
typedef struct A68t401  A68_401 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t402);
typedef struct A68t402  A68_402 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,6,A68t403);
typedef struct A68t403  A68_403 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t404);
typedef struct A68t404  A68_404 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t405);
typedef struct A68t405  A68_405 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t237 *,A68_BOOL ,struct A68t97 ),(struct A68t237 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE237,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t407);
typedef struct A68t407  A68_407 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t52 ,8,A68t408);
typedef struct A68t408  A68_408 ;    /* STRUCT 8 MODE52 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t237 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t237 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE237,BOOL,BOOL,BOOL,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t412);
typedef struct A68t412  A68_412 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t413);
typedef struct A68t413  A68_413 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(struct A68t52 ,18,A68t414);
typedef struct A68t414  A68_414 ;    /* STRUCT 18 MODE52 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t314 ,A68_INT *,struct A68t97 ,struct A68t162 *),(struct A68t314 ,A68_INT *,struct A68t97 ,struct A68t162 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE314,REF INT,MODE97) MODE162 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t314 ,struct A68t97 ,struct A68t281 ),(struct A68t314 ,struct A68t97 ,struct A68t281 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE314,MODE97,MODE281) VOID */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t314 ,struct A68t97 ,struct A68t286 ),(struct A68t314 ,struct A68t97 ,struct A68t286 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE314,MODE97,MODE286) VOID */
A_ISTRUCT(A68_CHAR ,127,A68t418);
typedef struct A68t418  A68_418 ;    /* STRUCT 127 CHAR */

A_PROCEDURE(struct A68t342 *,A68t419,(void),(void *));
typedef struct A68t419  A68_419 ;    /* PROC REF MODE342 */
A_ISTRUCT(A68_CHAR ,5,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t421);
typedef struct A68t421  A68_421 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,135,A68t422);
typedef struct A68t422  A68_422 ;    /* STRUCT 135 CHAR */
A_ISTRUCT(A68_CHAR ,146,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 146 CHAR */
A_ISTRUCT(A68_CHAR ,132,A68t424);
typedef struct A68t424  A68_424 ;    /* STRUCT 132 CHAR */
A_ISTRUCT(struct A68t339 ,3,A68t425);
typedef struct A68t425  A68_425 ;    /* STRUCT 3 MODE339 */
A_ISTRUCT(A68_CHAR ,50,A68t426);
typedef struct A68t426  A68_426 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,116,A68t427);
typedef struct A68t427  A68_427 ;    /* STRUCT 116 CHAR */
A_ISTRUCT(A68_CHAR ,85,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 85 CHAR */
A_ISTRUCT(A68_CHAR ,89,A68t429);
typedef struct A68t429  A68_429 ;    /* STRUCT 89 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t430);
typedef struct A68t430  A68_430 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(struct A68t312 ,2,A68t431);
typedef struct A68t431  A68_431 ;    /* STRUCT 2 MODE312 */
A_ISTRUCT(A68_CHAR ,64,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 64 CHAR */
A_ISTRUCT(struct A68t339 ,7,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 7 MODE339 */
A_ISTRUCT(A68_CHAR ,71,A68t434);
typedef struct A68t434  A68_434 ;    /* STRUCT 71 CHAR */
A_ISTRUCT(A68_CHAR ,78,A68t435);
typedef struct A68t435  A68_435 ;    /* STRUCT 78 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t436);
typedef struct A68t436  A68_436 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t437);
typedef struct A68t437  A68_437 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,106,A68t438);
typedef struct A68t438  A68_438 ;    /* STRUCT 106 CHAR */
A_ISTRUCT(A68_CHAR ,141,A68t439);
typedef struct A68t439  A68_439 ;    /* STRUCT 141 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t440);
typedef struct A68t440  A68_440 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,68,A68t441);
typedef struct A68t441  A68_441 ;    /* STRUCT 68 CHAR */
A_ISTRUCT(struct A68t339 ,4,A68t442);
typedef struct A68t442  A68_442 ;    /* STRUCT 4 MODE339 */
A_ISTRUCT(A68_CHAR ,112,A68t443);
typedef struct A68t443  A68_443 ;    /* STRUCT 112 CHAR */
A_ISTRUCT(A68_CHAR ,157,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 157 CHAR */
A_ISTRUCT(struct A68t339 ,2,A68t445);
typedef struct A68t445  A68_445 ;    /* STRUCT 2 MODE339 */
A_ISTRUCT(A68_CHAR ,70,A68t446);
typedef struct A68t446  A68_446 ;    /* STRUCT 70 CHAR */
A_ISTRUCT(A68_CHAR ,115,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 115 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,96,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 96 CHAR */
A_ISTRUCT(A68_CHAR ,91,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 91 CHAR */
A_ISTRUCT(A68_CHAR ,204,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 204 CHAR */
A_ISTRUCT(A68_CHAR ,187,A68t454);
typedef struct A68t454  A68_454 ;    /* STRUCT 187 CHAR */
A_ISTRUCT(A68_CHAR ,219,A68t455);
typedef struct A68t455  A68_455 ;    /* STRUCT 219 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,65,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 65 CHAR */
A_ISTRUCT(A68_CHAR ,95,A68t458);
typedef struct A68t458  A68_458 ;    /* STRUCT 95 CHAR */
A_ISTRUCT(A68_CHAR ,63,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t460);
typedef struct A68t460  A68_460 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(struct A68t339 ,18,A68t461);
typedef struct A68t461  A68_461 ;    /* STRUCT 18 MODE339 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kernelreader --- */
extern A68_312  CJFAOST_fnname_syntax;
extern A68_VOID  LKFAOST_get_fnname(struct A68t313 ,struct A68t97 ,A68_VC *);
extern A68_312  CLFAOST_declname_syntax;
extern A68_376  NLFAOST_get_declname;
extern A68_312  HNFAOST_filename_syntax;
extern A68_BOOL  SNFAOST_is_filename(struct A68t313 );
extern A68_VOID  XNFAOST_get_filename(struct A68t313 ,A68_VC ,struct A68t97 ,A68_134 *);
extern A68_312  WPFAOST_contextname_syntax;
extern A68_VOID  KRFAOST_get_contextname(struct A68t313 ,struct A68t97 ,A68_VC *);
extern A68_312  YPFAOST_importname_syntax;
extern A68_VOID  ORFAOST_get_importname(struct A68t313 ,struct A68t97 ,A68_VC *);
extern A68_BOOL  FRFAOST_is_ctname(struct A68t313 );
extern A68_VOID  URFAOST_get_ctname(struct A68t314 ,A68_INT *,A68_VC ,struct A68t97 ,A68_162 *);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t315 ,struct A68t97 );
extern A68_333  XMDAOST_normalaccess;
extern A68_333  BNDAOST_hiddenaccess;
extern A68_332  ZNDAOST_continue;
extern A68_332  HODAOST_finish;
extern A68_VOID  ARDAOST_makecommands(struct A68t343 ,A68_343 *);
extern A68_VOID  KRDAOST_makecommands(struct A68t339 ,A68_343 *);
extern A68_341 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t333 ,struct A68t343 );
extern A68_342 * GTDAOST_make_compound(struct A68t340 *,A68_VC ,A68_VC *,struct A68t343 ,struct A68t343 ,struct A68t336 );
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_312  SRAAOST_noparameters;
extern A68_VOID  ATAAOST_prod(struct A68t311 ,A68_310 *);
extern A68_VOID  LTAAOST_opt(struct A68t312 ,A68_310 *);
extern A68_VOID  DUAAOST_star(struct A68t312 ,A68_310 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from attrdecls --- */
extern A68_230 * TBWAELA_get_declattribute(struct A68t237 *,A68_INT ,struct A68t97 );
/* --- End of imports from attrdecls --- */


/* --- Imports from libprocs --- */
extern A68_VOID  FUBBELA_setcurrentct(struct A68t162 ,struct A68t97 );
extern A68_VOID  DWBBELA_printsizes(struct A68t97 );
extern A68_VOID  DXCBELA_dont_import(struct A68t242 ,A68_INT ,struct A68t97 );
extern A68_VOID  USCBELA_clear_imports(struct A68t242 ,struct A68t97 );
extern A68_VOID  QTCBELA_erase_region(struct A68t242 ,struct A68t97 );
extern A68_VOID  CUCBELA_make_region(struct A68t237 *,A68_VC ,struct A68t97 );
extern A68_VOID  TUCBELA_copy_region(struct A68t242 ,A68_VC ,struct A68t97 );
extern A68_VOID  LVCBELA_name_region(struct A68t237 *,A68_VC ,struct A68t97 );
extern A68_VOID  WVCBELA_dont_name_region(struct A68t237 *,struct A68t97 );
extern A68_VOID  TWBBELA_clear_library(struct A68t97 );
extern A68_VOID  NXBBELA_compact_library(A68_VC ,struct A68t97 );
extern A68_VOID  SYBBELA_regress_library(struct A68t97 );
extern A68_VOID  AZBBELA_save_libchanges(struct A68t97 );
extern A68_VOID  RXCBELA_erase(struct A68t237 *,A68_INT ,struct A68t97 );
extern A68_VOID  EZCBELA_export(struct A68t237 *,A68_INT ,struct A68t97 );
extern A68_VOID  JADBELA_exportall(struct A68t237 *,struct A68t97 );
extern A68_VOID  YBDBELA_dont_export(struct A68t237 *,A68_INT ,struct A68t97 );
extern A68_VOID  HCDBELA_clear_exports(struct A68t237 *,struct A68t97 );
extern A68_VOID  IQCBELA_make_context(struct A68t162 ,struct A68t97 );
extern A68_VOID  PRCBELA_copy_context(struct A68t237 *,A68_VC ,struct A68t97 );
extern A68_VOID  BSCBELA_clear_context(struct A68t237 *,struct A68t97 );
extern A68_VOID  KSCBELA_erase_context(struct A68t237 *,struct A68t97 );
extern A68_VOID  OICBELA_info_chars(struct A68t237 *,A68_INT ,struct A68t97 );
extern A68_INT  YCDBELA_ordercontexts(void);
extern A68_VOID  FJCBELA_printdecl(struct A68t237 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 );
/* --- End of imports from libprocs --- */


/* --- Imports from libinterface --- */
extern A68_VOID  LEBBELA_get_decls(struct A68t237 *,struct A68t97 ,A68_238 *);
extern A68_243 * VFBBELA_get_binding_source(struct A68t242 ,A68_VC );
extern A68_INT  IGBBELA_check_decl(struct A68t237 *,A68_VC ,struct A68t97 );
extern A68_VOID  OJBBELA_finish_library(struct A68t97 );
extern A68_VOID  RLBBELA_ctno_region(A68_INT ,A68_242 *);
extern A68_INT  SOBBELA_closure_details(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 );
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_179  UACAELA_nilptr;
extern A68_BOOL  UXIAELA_isnilptr(struct A68t176 *,struct A68t179 );
extern A68_234 * GUJAELA_nilimports;
extern A68_235 * BVJAELA_nilregion;
extern A68_236 * CVJAELA_nilregions;
extern A68_VOID  QVJAELA_sort_id(A68_INT ,A68_VC *);
extern A68_240 * HXJAELA_library;
extern A68_162  VWJAELA_defaultct;
extern A68_VC * SYJAELA_libprompt;
extern A68_INT * MZJAELA_info_key;
extern A68_176 * TYJAELA_discfile;
extern A68_179 * AZJAELA_ptrimpinfo;
extern A68_BOOL  SZJAELA_(struct A68t162 ,struct A68t162 );
extern A68_VOID  BAKAELA_ctos(struct A68t162 ,A68_VC *);
extern A68_VOID  UAKAELA_ctos(struct A68t242 ,A68_VC *);
extern A68_VOID  NBKAELA_ctn(struct A68t242 ,A68_162 *);
extern A68_INT  UBKAELA_lib_version(void);
extern A68_BOOL  ZBKAELA_no_text(struct A68t237 *,struct A68t97 );
extern A68_VOID  OCKAELA_printversion(struct A68t97 );
extern A68_VOID  MDKAELA_setlibchanged(struct A68t97 );
extern A68_237 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t237 *,A68_VC ,A68_242 *);
extern A68_234 * HEKAELA_get_imports(struct A68t242 );
extern A68_237 * XEKAELA_check_context(A68_VC ,struct A68t97 );
extern A68_VOID  OFKAELA_check_selected(struct A68t162 ,struct A68t97 ,A68_242 *);
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
extern A68_BOOL  GIEAELA_same_discptr(struct A68t177 *,struct A68t179 ,struct A68t179 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from basics --- */
extern A68_VC  TTCAOST_nullid;
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VC  UKDAOST_library_type;
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
/* --- End of imports from testmode --- */


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
extern A68_BOOL  FIAAOST_interactive(void);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_VOID  KFAAOST_default_msg(struct A68t92 ,struct A68t46 );
extern A68_34 * LEAAOST_out;
extern A68_VOID  IIAAOST_prompt(A68_VC ,A68_VC *);
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_INT  EPAAOSL_charsleft(struct A68t34 *);
extern A68_VOID  XYAAOSL_after(A68_INT ,A68_62 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void LRAAOST(void);   /* commandsyntax */
extern void TIGAOST(void);   /* ioprocs */
extern void DZVAELA(void);   /* attrdecls */
extern void ZSBBELA(void);   /* libprocs */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_388   GAGBELA = {"$Id: libcommands.a68,v 34.2 1995/03/29 13:03:27 ella Exp $"}; 
A_GISVEC(A68_VC ,HAGBELA,GAGBELA,58)
static A68_390   QAGBELA = {"Imports of "}; 
A_GISVEC(A68_VC ,RAGBELA,QAGBELA,11)
static A68_391   ABGBELA = {"   (none)"}; 
A_GISVEC(A68_VC ,BBGBELA,ABGBELA,9)
static A68_390   LBGBELA = {"Imports of "}; 
A_GISVEC(A68_VC ,MBGBELA,LBGBELA,11)
static A68_394   BCGBELA = {"      not defined"}; 
A_GISVEC(A68_VC ,CCGBELA,BCGBELA,17)
static A68_396   JCGBELA = {"written - not known"}; 
A_GISVEC(A68_VC ,LCGBELA,JCGBELA,19)
static A68_397   OCGBELA = {"written "}; 
A_GISVEC(A68_VC ,PCGBELA,OCGBELA,8)
static A68_399   ADGBELA = {"     from "}; 
A_GISVEC(A68_VC ,BDGBELA,ADGBELA,10)
static A68_400   IDGBELA = {"   "}; 
A_GISVEC(A68_VC ,JDGBELA,IDGBELA,3)
static A68_400   SDGBELA = {" = "}; 
A_GISVEC(A68_VC ,TDGBELA,SDGBELA,3)
static A68_401   IEGBELA = {" - has been cancelled"}; 
A_GISVEC(A68_VC ,JEGBELA,IEGBELA,21)
static A68_403   SEGBELA = {" from "}; 
A_GISVEC(A68_VC ,TEGBELA,SEGBELA,6)
static A68_390   IFGBELA = {"Closure of "}; 
A_GISVEC(A68_VC ,JFGBELA,IFGBELA,11)
static A68_399   OFGBELA = {" contains:"}; 
A_GISVEC(A68_VC ,PFGBELA,OFGBELA,10)
static A68_400   ZFGBELA = {"   "}; 
A_GISVEC(A68_VC ,AGGBELA,ZFGBELA,3)
static A68_404   KGGBELA = {"   (incomplete)"}; 
A_GISVEC(A68_VC ,LGGBELA,KGGBELA,15)
static A68_405   OGGBELA = {"   (complete)"}; 
A_GISVEC(A68_VC ,PGGBELA,OGGBELA,13)
static A68_407   HHGBELA = {"Declarations of "}; 
A_GISVEC(A68_VC ,IHGBELA,HHGBELA,16)
static A68_400   XHGBELA = {"   "}; 
A_GISVEC(A68_VC ,YHGBELA,XHGBELA,3)
static A68_390   CJGBELA = {"Exports of "}; 
A_GISVEC(A68_VC ,DJGBELA,CJGBELA,11)
static A68_400   OJGBELA = {"   "}; 
A_GISVEC(A68_VC ,PJGBELA,OJGBELA,3)
static A68_390   DKGBELA = {"Exports of "}; 
A_GISVEC(A68_VC ,EKGBELA,DKGBELA,11)
static A68_391   NKGBELA = {"   (none)"}; 
A_GISVEC(A68_VC ,OKGBELA,NKGBELA,9)
static A68_397   ELGBELA = {"Context "}; 
A_GISVEC(A68_VC ,FLGBELA,ELGBELA,8)
static A68_391   KLGBELA = {" is empty"}; 
A_GISVEC(A68_VC ,LLGBELA,KLGBELA,9)
static A68_410   YLGBELA = {"Context names are:"}; 
A_GISVEC(A68_VC ,ZLGBELA,YLGBELA,18)
static A68_400   IMGBELA = {"   "}; 
A_GISVEC(A68_VC ,JMGBELA,IMGBELA,3)
static A68_411   ANGBELA = {"Ella library: "}; 
A_GISVEC(A68_VC ,BNGBELA,ANGBELA,14)
static A68_407   INGBELA = {"Version number: "}; 
A_GISVEC(A68_VC ,JNGBELA,INGBELA,16)
static A68_412   ONGBELA = {", Selected context: "}; 
A_GISVEC(A68_VC ,PNGBELA,ONGBELA,20)
static A68_411   WNGBELA = {"   Cleared on "}; 
A_GISVEC(A68_VC ,XNGBELA,WNGBELA,14)
static A68_114   COGBELA = {" at "}; 
A_GISVEC(A68_VC ,DOGBELA,COGBELA,4)
static A68_413   KOGBELA = {"   Last written to on "}; 
A_GISVEC(A68_VC ,LOGBELA,KOGBELA,22)
static A68_114   QOGBELA = {" at "}; 
A_GISVEC(A68_VC ,ROGBELA,QOGBELA,4)
static A68_418   JQGBELA = {"Exits from the current ELLA environment and returns to the host system.  All changes to the current library are made permanent."}; 
A_GISVEC(A68_VC ,KQGBELA,JQGBELA,127)
static A68_VC  LQGBELA_exit_help;
static A68_114   TQGBELA = {"ELLA"}; 
A_GISVEC(A68_VC ,UQGBELA,TQGBELA,4)
static A68_390   WQGBELA = {"Enters ELLA"}; 
A_GISVEC(A68_VC ,XQGBELA,WQGBELA,11)
static A68_420   HRGBELA = {"PRINT"}; 
static A68_114   JRGBELA = {"FULL"}; 
static A68_421   MRGBELA = {"LIBRARY"}; 
A_GISVEC(A68_VC ,NRGBELA,MRGBELA,7)
static A68_422   QRGBELA = {"Displays a summary of the library contents followed by a list of declarations, exports from and imports to each context in the library."}; 
A_GISVEC(A68_VC ,RRGBELA,QRGBELA,135)
static A68_421   DSGBELA = {"CONTEXT"}; 
A_GISVEC(A68_VC ,ESGBELA,DSGBELA,7)
static A68_423   LSGBELA = {"Displays the declarations, their usages, the exports from, the imports to and closure of each imports region for the selected or named context(s)."}; 
A_GISVEC(A68_VC ,MSGBELA,LSGBELA,146)
static A68_420   CTGBELA = {"DECLS"}; 
A_GISVEC(A68_VC ,DTGBELA,CTGBELA,5)
static A68_424   KTGBELA = {"Displays the declarations which use and are used by each declaration in the declarations region of the selected or named context(s)."}; 
A_GISVEC(A68_VC ,LTGBELA,KTGBELA,132)
A_GISVEC(A68_VC ,CUGBELA,JRGBELA,4)
static A68_421   GUGBELA = {"LIBRARY"}; 
A_GISVEC(A68_VC ,HUGBELA,GUGBELA,7)
static A68_426   KUGBELA = {"Displays a summary of the contents of the library."}; 
A_GISVEC(A68_VC ,LUGBELA,KUGBELA,50)
static A68_421   XUGBELA = {"CONTEXT"}; 
A_GISVEC(A68_VC ,YUGBELA,XUGBELA,7)
static A68_427   FVGBELA = {"Displays the declarations, any exports, and any imports to each imports region, of the selected or named context(s)."}; 
A_GISVEC(A68_VC ,GVGBELA,FVGBELA,116)
static A68_420   WVGBELA = {"DECLS"}; 
A_GISVEC(A68_VC ,XVGBELA,WVGBELA,5)
static A68_428   EWGBELA = {"Displays the declarations and their source files in the selected or named context(s)."}; 
A_GISVEC(A68_VC ,FWGBELA,EWGBELA,85)
static A68_420   VWGBELA = {"USAGE"}; 
A_GISVEC(A68_VC ,WWGBELA,VWGBELA,5)
static A68_429   BXGBELA = {"Displays a list of the declarations which use, and are used by, the named declaration(s)."}; 
A_GISVEC(A68_VC ,CXGBELA,BXGBELA,89)
static A68_421   TXGBELA = {"EXPORTS"}; 
A_GISVEC(A68_VC ,UXGBELA,TXGBELA,7)
static A68_430   BYGBELA = {"Displays the exports from the selected or named context(s)."}; 
A_GISVEC(A68_VC ,CYGBELA,BYGBELA,59)
static A68_421   SYGBELA = {"IMPORTS"}; 
A_GISVEC(A68_VC ,TYGBELA,SYGBELA,7)
static A68_432   IZGBELA = {"Displays the imports to the selected or named imports region(s)."}; 
A_GISVEC(A68_VC ,JZGBELA,IZGBELA,64)
A_GISVEC(A68_VC ,BAHBELA,HRGBELA,5)
static A68_114   HAHBELA = {"DONT"}; 
static A68_403   KAHBELA = {"EXPORT"}; 
A_GISVEC(A68_VC ,LAHBELA,KAHBELA,6)
static A68_434   QAHBELA = {"Stops the export of the named declaration(s) from the selected context."}; 
A_GISVEC(A68_VC ,RAHBELA,QAHBELA,71)
static A68_403   IBHBELA = {"IMPORT"}; 
A_GISVEC(A68_VC ,JBHBELA,IBHBELA,6)
static A68_435   OBHBELA = {"Stops the import of the named declaration(s) into the selected imports region."}; 
A_GISVEC(A68_VC ,PBHBELA,OBHBELA,78)
static A68_390   HCHBELA = {"NAMEIMPORTS"}; 
A_GISVEC(A68_VC ,ICHBELA,HCHBELA,11)
static A68_436   KCHBELA = {"NI"}; 
A_GISVEC(A68_VC ,LCHBELA,KCHBELA,2)
static A68_429   NCHBELA = {"Converts the selected compound context with one named imports region to a simple context."}; 
A_GISVEC(A68_VC ,OCHBELA,NCHBELA,89)
A_GISVEC(A68_VC ,DDHBELA,HAHBELA,4)
static A68_420   GDHBELA = {"CLEAR"}; 
static A68_437   HDHBELA = {""}; 
static A68_421   KDHBELA = {"LIBRARY"}; 
A_GISVEC(A68_VC ,LDHBELA,KDHBELA,7)
static A68_438   NDHBELA = {"Clears the contents of all the contexts and erases all the contexts except 'ella', which is then selected."}; 
A_GISVEC(A68_VC ,ODHBELA,NDHBELA,106)
static A68_421   AEHBELA = {"CONTEXT"}; 
A_GISVEC(A68_VC ,BEHBELA,AEHBELA,7)
static A68_439   HEHBELA = {"Erases all the declarations, imports and exports, in the selected or named context(s).  The structure of the cleared context(s) is unaltered."}; 
A_GISVEC(A68_VC ,IEHBELA,HEHBELA,141)
static A68_421   VEHBELA = {"EXPORTS"}; 
A_GISVEC(A68_VC ,WEHBELA,VEHBELA,7)
static A68_440   CFHBELA = {"Clears all exports from the selected or named context(s)."}; 
A_GISVEC(A68_VC ,DFHBELA,CFHBELA,57)
static A68_421   QFHBELA = {"IMPORTS"}; 
A_GISVEC(A68_VC ,RFHBELA,QFHBELA,7)
static A68_441   FGHBELA = {"Clears all the imports from the selected or named imports region(s)."}; 
A_GISVEC(A68_VC ,GGHBELA,FGHBELA,68)
A_GISVEC(A68_VC ,XGHBELA,HDHBELA,0)
A_GISVEC(A68_VC ,YGHBELA,GDHBELA,5)
static A68_114   BHHBELA = {"COPY"}; 
static A68_421   EHHBELA = {"CONTEXT"}; 
A_GISVEC(A68_VC ,FHHBELA,EHHBELA,7)
static A68_443   KHHBELA = {"Creates new contexts which are copies of the selected context.  The last-named context is then selected for use."}; 
A_GISVEC(A68_VC ,LHHBELA,KHHBELA,112)
static A68_421   DIHBELA = {"IMPORTS"}; 
A_GISVEC(A68_VC ,EIHBELA,DIHBELA,7)
static A68_444   JIHBELA = {"Creates new imports region(s) which are copies of the selected imports region in a compound context.  The last-named imports region is then selected for use."}; 
A_GISVEC(A68_VC ,KIHBELA,JIHBELA,157)
A_GISVEC(A68_VC ,EJHBELA,BHHBELA,4)
static A68_114   HJHBELA = {"MAKE"}; 
static A68_421   KJHBELA = {"CONTEXT"}; 
A_GISVEC(A68_VC ,LJHBELA,KJHBELA,7)
static A68_446   WJHBELA = {"Creates empty context(s).  The last-named context is selected for use."}; 
A_GISVEC(A68_VC ,XJHBELA,WJHBELA,70)
static A68_421   NKHBELA = {"IMPORTS"}; 
A_GISVEC(A68_VC ,OKHBELA,NKHBELA,7)
static A68_447   TKHBELA = {"Creates new imports region(s) in the selected compound context.  The last-named imports region is selected for use."}; 
A_GISVEC(A68_VC ,UKHBELA,TKHBELA,115)
A_GISVEC(A68_VC ,NLHBELA,HJHBELA,4)
static A68_400   QLHBELA = {"SET"}; 
static A68_421   TLHBELA = {"CONTEXT"}; 
A_GISVEC(A68_VC ,ULHBELA,TLHBELA,7)
static A68_448   DMHBELA = {"Selects the named context (and imports region)."}; 
A_GISVEC(A68_VC ,EMHBELA,DMHBELA,47)
static A68_421   SMHBELA = {"IMPORTS"}; 
A_GISVEC(A68_VC ,TMHBELA,SMHBELA,7)
static A68_449   WMHBELA = {"Selects the named imports region."}; 
A_GISVEC(A68_VC ,XMHBELA,WMHBELA,33)
A_GISVEC(A68_VC ,ONHBELA,QLHBELA,3)
static A68_420   SNHBELA = {"ERASE"}; 
A_GISVEC(A68_VC ,TNHBELA,SNHBELA,5)
static A68_428   XNHBELA = {"Erases the named declaration(s) from the declarations region of the selected context."}; 
A_GISVEC(A68_VC ,YNHBELA,XNHBELA,85)
static A68_450   POHBELA = {"ERASECONTEXT"}; 
A_GISVEC(A68_VC ,QOHBELA,POHBELA,12)
static A68_451   UOHBELA = {"Erases the named context(s). If the selected context is erased, 'ella' is then selected for use."}; 
A_GISVEC(A68_VC ,VOHBELA,UOHBELA,96)
static A68_450   LPHBELA = {"ERASEIMPORTS"}; 
A_GISVEC(A68_VC ,MPHBELA,LPHBELA,12)
static A68_452   UPHBELA = {"Erases the named imports region(s) in a compound context with more than one imports region."}; 
A_GISVEC(A68_VC ,VPHBELA,UPHBELA,91)
static A68_450   PQHBELA = {"CHECKCLOSURE"}; 
A_GISVEC(A68_VC ,QQHBELA,PQHBELA,12)
static A68_400   SQHBELA = {"CCL"}; 
A_GISVEC(A68_VC ,TQHBELA,SQHBELA,3)
static A68_453   HRHBELA = {"Checks and displays the consistency, and availability through imports and exports, of the declarations required by the selected or named context(s) (and, for a compound context, the named imports region)."}; 
A_GISVEC(A68_VC ,IRHBELA,HRHBELA,204)
static A68_390   ZRHBELA = {"SAVELIBRARY"}; 
A_GISVEC(A68_VC ,ASHBELA,ZRHBELA,11)
static A68_454   CSHBELA = {"Makes permanent all changes since the last implicit or explicit 'savelibrary'.  Implicit 'savelibrary' commands are performed before 'compile', 'increaselibrary', 'simulate' and 'finish'."}; 
A_GISVEC(A68_VC ,DSHBELA,CSHBELA,187)
static A68_411   PSHBELA = {"COMPACTLIBRARY"}; 
A_GISVEC(A68_VC ,QSHBELA,PSHBELA,14)
static A68_455   SSHBELA = {"Calls the KEEPSAKE compacting garbage collector to make a new compacted version of the current ELLA library.  A new file name must be specified for the new library.  The old version of the library may then be discarded."}; 
A_GISVEC(A68_VC ,TSHBELA,SSHBELA,219)
static A68_411   KTHBELA = {"REGRESSLIBRARY"}; 
A_GISVEC(A68_VC ,LTHBELA,KTHBELA,14)
static A68_456   NTHBELA = {"Returns the library to its previous version."}; 
A_GISVEC(A68_VC ,OTHBELA,NTHBELA,44)
static A68_403   AUHBELA = {"EXPORT"}; 
A_GISVEC(A68_VC ,BUHBELA,AUHBELA,6)
static A68_430   GUHBELA = {"Exports the named declaration(s) from the selected context."}; 
A_GISVEC(A68_VC ,HUHBELA,GUHBELA,59)
static A68_391   YUHBELA = {"EXPORTALL"}; 
A_GISVEC(A68_VC ,ZUHBELA,YUHBELA,9)
static A68_436   BVHBELA = {"EA"}; 
A_GISVEC(A68_VC ,CVHBELA,BVHBELA,2)
static A68_457   IVHBELA = {"Exports all the declarations in the selected or named context(s)."}; 
A_GISVEC(A68_VC ,JVHBELA,IVHBELA,65)
static A68_390   WVHBELA = {"NAMEIMPORTS"}; 
A_GISVEC(A68_VC ,XVHBELA,WVHBELA,11)
static A68_436   ZVHBELA = {"NI"}; 
A_GISVEC(A68_VC ,AWHBELA,ZVHBELA,2)
static A68_458   CWHBELA = {"Converts the selected simple context to a compound context and names its single imports region."}; 
A_GISVEC(A68_VC ,DWHBELA,CWHBELA,95)
static A68_114   UWHBELA = {"EXIT"}; 
A_GISVEC(A68_VC ,VWHBELA,UWHBELA,4)
static A68_403   GXHBELA = {"FINISH"}; 
A_GISVEC(A68_VC ,HXHBELA,GXHBELA,6)
static A68_114   SXHBELA = {"QUIT"}; 
A_GISVEC(A68_VC ,TXHBELA,SXHBELA,4)
static A68_459   VXHBELA = {"Aborts the current ELLA session and returns to the host system."}; 
A_GISVEC(A68_VC ,WXHBELA,VXHBELA,63)
static A68_460   DYHBELA = {"Library has changed - save library - y or n ? "}; 
A_GISVEC(A68_VC ,EYHBELA,DYHBELA,46)
static A68_450   UYHBELA = {"ELLA Library"}; 
A_GISVEC(A68_VC ,YYHBELA,UYHBELA,12)
typedef struct   /* env of non-global proc */
{
A68_286  Do;
} IQGBELA_anonymous;

A_STATIC A68_VOID  LAGBELA_print_imports(A68_242  Cr, A68_BOOL  Full, A68_97  Msg);

A_STATIC A68_VOID  EFGBELA_print_closure(A68_242  Cr, A68_BOOL  Full, A68_97  Msg);

A_STATIC A68_VOID  YGGBELA_printdecls(A68_237 * Ct, A68_BOOL  Full, A68_97  Msg);

A_STATIC A68_VOID  TIGBELA_print_exports(A68_237 * Ct, A68_BOOL  Full, A68_97  Msg);

A_STATIC A68_VOID  ALGBELA_printct(A68_237 * Ct, A68_BOOL  Full, A68_BOOL  Ptdecls, A68_BOOL  Ptexports, A68_BOOL  Ptimports, A68_97  Msg);

A_STATIC A68_VOID  VLGBELA_ptcontexts(A68_97  Msg);

A_STATIC A68_VOID  RMGBELA_ptlibinfo(A68_97  Msg);

A_STATIC A68_VOID  APGBELA_print_full_library(A68_97  Msg);

A_STATIC A68_VOID  MPGBELA_print_usage(A68_237 * Ct, A68_INT  Declno, A68_97  Msg);

A_STATIC A68_VOID  QPGBELA_get_optctname(A68_314  Values, A68_INT * Index, A68_97  Msg, A68_162  *ReturnedValue);

A_STATIC A68_VOID  XPGBELA_do_ctnames(A68_314  Values, A68_97  Msg, A68_281  Do);

A_STATIC A68_VOID  DQGBELA_do_contexts(A68_314  Values, A68_97  Msg, A68_286  Do);

A_STATIC A68_VOID  HQGBELA_anonymous(A68_162  Ctn, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OQGBELA_exit_command(A68_314  Params, A68_97  Msg);

A68_342 * QQGBELA_initialise_library(void);

A_STATIC A68_VOID  CRGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  WRGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  RSGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  USGBELA_anonymous(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  QTGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  TTGBELA_anonymous(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  QUGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  LVGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  OVGBELA_anonymous(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  KWGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  NWGBELA_anonymous(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  HXGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  HYGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  KYGBELA_anonymous(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  OZGBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  RZGBELA_anonymous(A68_162  Ctn, A68_97  Msg);

A_STATIC A68_VOID  WAHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  UBHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  TCHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  TDHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  NEHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  IFHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  LGHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  OGHBELA_anonymous(A68_162  Ctn, A68_97  Msg);

A_STATIC A68_VOID  QHHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  PIHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  CKHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  FKHBELA_anonymous(A68_162  Ctn, A68_97  Msg);

A_STATIC A68_VOID  ZKHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  JMHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  CNHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  DOHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  APHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  DPHBELA_anonymous(A68_237 * Ct, A68_97  Msg);

A_STATIC A68_VOID  AQHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  DQHBELA_anonymous(A68_162  Ctn, A68_97  Msg);

A_STATIC A68_VOID  NRHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  QRHBELA_anonymous(A68_162  Ctn, A68_97  Msg);

A_STATIC A68_VOID  ISHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  YSHBELA_anonymous(A68_314  Params, A68_97  Msg);

A_STATIC A68_VOID  TTHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  MUHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  OVHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  IWHBELA_anonymous(A68_314  Names, A68_97  Msg);

A_STATIC A68_VOID  BYHBELA_anonymous(A68_314  Params, A68_97  Msg);

A_STATIC A68_VOID  USGBELA_anonymous(A68_237 * Ct, A68_97  Msg)
{ 
 /* line 371: */
ALGBELA_printct(Ct, A68_TRUE, A68_TRUE, A68_TRUE, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  TTGBELA_anonymous(A68_237 * Ct, A68_97  Msg)
{ 
 /* line 383: */
ALGBELA_printct(Ct, A68_TRUE, A68_TRUE, A68_FALSE, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  OVGBELA_anonymous(A68_237 * Ct, A68_97  Msg)
{ 
 /* line 404: */
ALGBELA_printct(Ct, A68_FALSE, A68_TRUE, A68_TRUE, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NWGBELA_anonymous(A68_237 * Ct, A68_97  Msg)
{ 
 /* line 415: */
ALGBELA_printct(Ct, A68_FALSE, A68_TRUE, A68_FALSE, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  KYGBELA_anonymous(A68_237 * Ct, A68_97  Msg)
{ 
 /* line 442: */
TIGBELA_print_exports(Ct, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  RZGBELA_anonymous(A68_162  Ctn, A68_97  Msg)
{ 
A68_242  SZGBELA;  /* avoid structure result */
 /* line 454: */
OFKAELA_check_selected( Ctn, Msg, &SZGBELA );
LAGBELA_print_imports(SZGBELA, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  OGHBELA_anonymous(A68_162  Ctn, A68_97  Msg)
{ 
A68_242  PGHBELA;  /* avoid structure result */
 /* line 558: */
OFKAELA_check_selected( Ctn, Msg, &PGHBELA );
USCBELA_clear_imports(PGHBELA, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  FKHBELA_anonymous(A68_162  Ctn, A68_97  Msg)
{ 
 /* line 613: */
{ 
IQCBELA_make_context(Ctn, Msg);
FUBBELA_setcurrentct(Ctn, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DPHBELA_anonymous(A68_237 * Ct, A68_97  Msg)
{ 
 /* line 693: */
{ 
KSCBELA_erase_context(Ct, Msg);
 /* line 694: */
 /* line 695: */
if ( A_VC_EQ((*(&(Ct->Name))),(*(&((&(HXJAELA_library->Currentct))->Context)))) )
{ 
 /* line 696: */
 /* line 697: */
 /* line 698: */
FUBBELA_setcurrentct(VWJAELA_defaultct, Msg);
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DQHBELA_anonymous(A68_162  Ctn, A68_97  Msg)
{ 
A68_242  EQHBELA;  /* avoid structure result */
A68_242  FQHBELA_cr;
A68_162  GQHBELA;  /* avoid structure result */
A68_162  HQHBELA;  /* collateral clause result */
 /* line 711: */
{ 
OFKAELA_check_selected( Ctn, Msg, &EQHBELA );
FQHBELA_cr = EQHBELA;
 /* line 712: */
QTCBELA_erase_region(FQHBELA_cr, Msg);
 /* line 713: */
 /* line 714: */
NBKAELA_ctn( FQHBELA_cr, &GQHBELA );
if ( SZJAELA_(GQHBELA, (*(&(HXJAELA_library->Currentct)))) )
{ 
 /* line 715: */
HQHBELA.Context = (*(&((&(HXJAELA_library->Currentct))->Context)));
HQHBELA.Import = TTCAOST_nullid;
 /* line 716: */
 /* line 717: */
 /* line 718: */
FUBBELA_setcurrentct(HQHBELA, Msg);
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  QRHBELA_anonymous(A68_162  Ctn, A68_97  Msg)
{ 
A68_242  RRHBELA;  /* avoid structure result */
 /* line 731: */
OFKAELA_check_selected( Ctn, Msg, &RRHBELA );
EFGBELA_print_closure(RRHBELA, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HQGBELA_anonymous(A68_162  Ctn, A68_97  Msg, void *NonLocals)
#define NL(x) (((IQGBELA_anonymous *)NonLocals)->x)
{ 
 /* line 318: */
A_CALLPROC(NL(Do),(XEKAELA_check_context(Ctn.Context, Msg), Msg),(XEKAELA_check_context(Ctn.Context, Msg), Msg,(NL(Do)).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  CRGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_BOOL * DRGBELA;  /* YIELD */
 /* line 337: */
{ 
DRGBELA = (&(HXJAELA_library->Libchanged)) ;
(*DRGBELA) = A68_FALSE;
 /* line 338: */
 /* line 339: */
 /* line 340: */
OCKAELA_printversion(Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  WRGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
 /* line 359: */
 /* line 360: */
APGBELA_print_full_library(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  RSGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  VSGBELA;  /* procedure value */
 /* line 370: */
 /* line 372: */
VSGBELA.fn.fn_global = USGBELA_anonymous;
VSGBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, VSGBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QTGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  UTGBELA;  /* procedure value */
 /* line 382: */
 /* line 384: */
UTGBELA.fn.fn_global = TTGBELA_anonymous;
UTGBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, UTGBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QUGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
 /* line 393: */
{ 
RMGBELA_ptlibinfo(Msg);
VLGBELA_ptcontexts(Msg);
 /* line 394: */
DWBBELA_printsizes(Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  LVGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  PVGBELA;  /* procedure value */
 /* line 403: */
 /* line 405: */
PVGBELA.fn.fn_global = OVGBELA_anonymous;
PVGBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, PVGBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KWGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  OWGBELA;  /* procedure value */
 /* line 414: */
 /* line 416: */
OWGBELA.fn.fn_global = NWGBELA_anonymous;
OWGBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, OWGBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HXGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * IXGBELA_ct;
A68_313 * JXGBELA_name;
A68_INT  KXGBELA;  /* forall loop counter */
A68_VC  LXGBELA;  /* avoid structure result */
A68_INT  MXGBELA_declno;
 /* line 425: */
{ 
IXGBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 426: */
 /* line 427: */
KXGBELA = Names.upb -1;
JXGBELA_name = Names.data;
for (;KXGBELA-- >= 0;
(JXGBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 428: */
A_CALLPROC(NLFAOST_get_declname,((*JXGBELA_name), Msg, &LXGBELA),((*JXGBELA_name), Msg, &LXGBELA,(NLFAOST_get_declname).nonlocals));
MXGBELA_declno = IGBBELA_check_decl(IXGBELA_ct, LXGBELA, Msg);
 /* line 429: */
LRAAOSL_newline(LEAAOST_out);
 /* line 430: */
 /* line 431: */
MPGBELA_print_usage(IXGBELA_ct, MXGBELA_declno, Msg);
}
 /* line 432: */
 /* line 433: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  HYGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  LYGBELA;  /* procedure value */
 /* line 441: */
 /* line 443: */
LYGBELA.fn.fn_global = KYGBELA_anonymous;
LYGBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, LYGBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OZGBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_281  TZGBELA;  /* procedure value */
 /* line 453: */
 /* line 455: */
TZGBELA.fn.fn_global = RZGBELA_anonymous;
TZGBELA.nonlocals = A68_NIL;
XPGBELA_do_ctnames(Names, Msg, TZGBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WAHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * XAHBELA_ct;
A68_313 * YAHBELA_name;
A68_INT  ZAHBELA;  /* forall loop counter */
A68_VC  ABHBELA;  /* avoid structure result */
A68_INT  BBHBELA_declno;
 /* line 476: */
{ 
XAHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 477: */
 /* line 478: */
ZAHBELA = Names.upb -1;
YAHBELA_name = Names.data;
for (;ZAHBELA-- >= 0;
(YAHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 479: */
A_CALLPROC(NLFAOST_get_declname,((*YAHBELA_name), Msg, &ABHBELA),((*YAHBELA_name), Msg, &ABHBELA,(NLFAOST_get_declname).nonlocals));
BBHBELA_declno = IGBBELA_check_decl(XAHBELA_ct, ABHBELA, Msg);
 /* line 480: */
 /* line 481: */
YBDBELA_dont_export(XAHBELA_ct, BBHBELA_declno, Msg);
}
 /* line 482: */
 /* line 483: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  UBHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_242  VBHBELA;  /* avoid structure result */
A68_242  WBHBELA_cr;
A68_313 * XBHBELA_name;
A68_INT  YBHBELA;  /* forall loop counter */
A68_VC  ZBHBELA;  /* avoid structure result */
A68_INT  ACHBELA_declno;
 /* line 492: */
{ 
OFKAELA_check_selected( (*(&(HXJAELA_library->Currentct))), Msg, &VBHBELA );
WBHBELA_cr = VBHBELA;
 /* line 493: */
 /* line 494: */
YBHBELA = Names.upb -1;
XBHBELA_name = Names.data;
for (;YBHBELA-- >= 0;
(XBHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 495: */
 /* line 496: */
LKFAOST_get_fnname( (*XBHBELA_name), Msg, &ZBHBELA );
ACHBELA_declno = IGBBELA_check_decl(WBHBELA_cr.Context, ZBHBELA, Msg);
 /* line 497: */
 /* line 498: */
DXCBELA_dont_import(WBHBELA_cr, ACHBELA_declno, Msg);
}
 /* line 499: */
 /* line 500: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  TCHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * UCHBELA_ct;
A68_162  VCHBELA;  /* collateral clause result */
 /* line 509: */
{ 
UCHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 510: */
WVCBELA_dont_name_region(UCHBELA_ct, Msg);
 /* line 511: */
VCHBELA.Context = (*(&(UCHBELA_ct->Name)));
VCHBELA.Import = TTCAOST_nullid;
 /* line 512: */
 /* line 513: */
FUBBELA_setcurrentct(VCHBELA, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  TDHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
 /* line 526: */
 /* line 527: */
TWBBELA_clear_library(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NEHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  OEHBELA;  /* procedure value */
 /* line 537: */
 /* line 538: */
OEHBELA.fn.fn_global = BSCBELA_clear_context;
OEHBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, OEHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IFHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  JFHBELA;  /* procedure value */
 /* line 546: */
 /* line 547: */
JFHBELA.fn.fn_global = HCDBELA_clear_exports;
JFHBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, JFHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LGHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_281  QGHBELA;  /* procedure value */
 /* line 557: */
 /* line 559: */
QGHBELA.fn.fn_global = OGHBELA_anonymous;
QGHBELA.nonlocals = A68_NIL;
XPGBELA_do_ctnames(Names, Msg, QGHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QHHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * RHHBELA_ct;
A68_313 * SHHBELA_name;
A68_INT  THHBELA;  /* forall loop counter */
A68_VC  UHHBELA;  /* avoid structure result */
A68_VC  VHHBELA_newcontextname;
A68_162  WHHBELA;  /* collateral clause result */
 /* line 572: */
{ 
RHHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 573: */
 /* line 574: */
THHBELA = Names.upb -1;
SHHBELA_name = Names.data;
for (;THHBELA-- >= 0;
(SHHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 575: */
KRFAOST_get_contextname( (*SHHBELA_name), Msg, &UHHBELA );
VHHBELA_newcontextname = UHHBELA;
 /* line 576: */
PRCBELA_copy_context(RHHBELA_ct, VHHBELA_newcontextname, Msg);
 /* line 577: */
WHHBELA.Context = VHHBELA_newcontextname;
WHHBELA.Import = (*(&((&(HXJAELA_library->Currentct))->Import)));
 /* line 578: */
FUBBELA_setcurrentct(WHHBELA, Msg);
}
 /* line 579: */
 /* line 580: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  PIHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_242  QIHBELA;  /* avoid structure result */
A68_242  RIHBELA_cr;
A68_313 * SIHBELA_name;
A68_INT  TIHBELA;  /* forall loop counter */
A68_VC  UIHBELA;  /* avoid structure result */
A68_VC  VIHBELA_newimpname;
A68_162  WIHBELA;  /* collateral clause result */
 /* line 589: */
{ 
OFKAELA_check_selected( (*(&(HXJAELA_library->Currentct))), Msg, &QIHBELA );
RIHBELA_cr = QIHBELA;
 /* line 590: */
 /* line 591: */
TIHBELA = Names.upb -1;
SIHBELA_name = Names.data;
for (;TIHBELA-- >= 0;
(SIHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 592: */
ORFAOST_get_importname( (*SIHBELA_name), Msg, &UIHBELA );
VIHBELA_newimpname = UIHBELA;
 /* line 593: */
TUCBELA_copy_region(RIHBELA_cr, VIHBELA_newimpname, Msg);
 /* line 594: */
WIHBELA.Context = (*(&(RIHBELA_cr.Context->Name)));
WIHBELA.Import = VIHBELA_newimpname;
 /* line 595: */
FUBBELA_setcurrentct(WIHBELA, Msg);
}
 /* line 596: */
 /* line 597: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  CKHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_281  GKHBELA;  /* procedure value */
 /* line 612: */
 /* line 614: */
GKHBELA.fn.fn_global = FKHBELA_anonymous;
GKHBELA.nonlocals = A68_NIL;
XPGBELA_do_ctnames(Names, Msg, GKHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZKHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * ALHBELA_ct;
A68_313 * BLHBELA_name;
A68_INT  CLHBELA;  /* forall loop counter */
A68_VC  DLHBELA;  /* avoid structure result */
A68_VC  ELHBELA_newimpname;
A68_162  FLHBELA;  /* collateral clause result */
 /* line 623: */
{ 
ALHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 624: */
 /* line 625: */
CLHBELA = Names.upb -1;
BLHBELA_name = Names.data;
for (;CLHBELA-- >= 0;
(BLHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 626: */
ORFAOST_get_importname( (*BLHBELA_name), Msg, &DLHBELA );
ELHBELA_newimpname = DLHBELA;
 /* line 627: */
CUCBELA_make_region(ALHBELA_ct, ELHBELA_newimpname, Msg);
 /* line 628: */
FLHBELA.Context = (*(&(ALHBELA_ct->Name)));
FLHBELA.Import = ELHBELA_newimpname;
 /* line 629: */
FUBBELA_setcurrentct(FLHBELA, Msg);
}
 /* line 630: */
 /* line 631: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  JMHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_INT * KMHBELA;  /* YIELD */
A68_162  LMHBELA;  /* avoid structure result */
 /* line 646: */
{ 
KMHBELA = A_HEAP(A68_INT ) ;
(*KMHBELA) = 0 ;
QPGBELA_get_optctname( Names, KMHBELA, Msg, &LMHBELA );
FUBBELA_setcurrentct(LMHBELA, Msg);
 /* line 647: */
 /* line 648: */
 /* line 649: */
MDKAELA_setlibchanged(Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  CNHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_162  DNHBELA;  /* collateral clause result */
A68_INT  ENHBELA;  /* YIELD */
A68_VC  FNHBELA;  /* avoid structure result */
A68_162  GNHBELA_ctn;
 /* line 657: */
{ 
 /* line 658: */
DNHBELA.Context = (*(&((&(HXJAELA_library->Currentct))->Context)));
ENHBELA = 1 ;
ORFAOST_get_importname( (*(&A_VINDEX(Names,ENHBELA))), Msg, &FNHBELA );
DNHBELA.Import = FNHBELA;
GNHBELA_ctn = DNHBELA;
 /* line 659: */
FUBBELA_setcurrentct(GNHBELA_ctn, Msg);
 /* line 660: */
 /* line 661: */
 /* line 662: */
MDKAELA_setlibchanged(Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DOHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * EOHBELA_ct;
A68_313 * FOHBELA_name;
A68_INT  GOHBELA;  /* forall loop counter */
A68_VC  HOHBELA;  /* avoid structure result */
A68_INT  IOHBELA_declno;
 /* line 675: */
{ 
EOHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 676: */
 /* line 677: */
GOHBELA = Names.upb -1;
FOHBELA_name = Names.data;
for (;GOHBELA-- >= 0;
(FOHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 678: */
A_CALLPROC(NLFAOST_get_declname,((*FOHBELA_name), Msg, &HOHBELA),((*FOHBELA_name), Msg, &HOHBELA,(NLFAOST_get_declname).nonlocals));
IOHBELA_declno = IGBBELA_check_decl(EOHBELA_ct, HOHBELA, Msg);
 /* line 679: */
 /* line 680: */
RXCBELA_erase(EOHBELA_ct, IOHBELA_declno, Msg);
}
 /* line 681: */
 /* line 682: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  APHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  EPHBELA;  /* procedure value */
 /* line 691: */
 /* line 692: */
 /* line 699: */
EPHBELA.fn.fn_global = DPHBELA_anonymous;
EPHBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, EPHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AQHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_281  IQHBELA;  /* procedure value */
 /* line 709: */
 /* line 710: */
 /* line 719: */
IQHBELA.fn.fn_global = DQHBELA_anonymous;
IQHBELA.nonlocals = A68_NIL;
XPGBELA_do_ctnames(Names, Msg, IQHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NRHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_281  SRHBELA;  /* procedure value */
 /* line 730: */
 /* line 732: */
SRHBELA.fn.fn_global = QRHBELA_anonymous;
SRHBELA.nonlocals = A68_NIL;
XPGBELA_do_ctnames(Names, Msg, SRHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ISHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
 /* line 740: */
 /* line 741: */
AZBBELA_save_libchanges(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  YSHBELA_anonymous(A68_314  Params, A68_97  Msg)
{ 
A68_INT  ZSHBELA;  /* YIELD */
A68_134  ATHBELA;  /* clause result */
A68_INT  BTHBELA;  /* YIELD */
A68_134  CTHBELA;  /* avoid structure result */
A68_134  DTHBELA;  /* avoid structure result */
 /* line 756: */
 /* line 757: */
ZSHBELA = 1 ;
if ( SNFAOST_is_filename((*(&A_VINDEX(Params,ZSHBELA)))) )
{ 
 /* line 758: */
 /* line 759: */
BTHBELA = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,BTHBELA))), UKDAOST_library_type, Msg, &CTHBELA );
ATHBELA = CTHBELA;
} 
else
{ 
 /* line 760: */
 /* line 761: */
TNCAOSI_parse_filename( (*(&(HXJAELA_library->Name))), UKDAOST_library_type, Msg, &DTHBELA );
ATHBELA = DTHBELA;
} 
 /* line 762: */
NXBBELA_compact_library(ATHBELA.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  TTHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
 /* line 769: */
 /* line 770: */
SYBBELA_regress_library(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  MUHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * NUHBELA_ct;
A68_313 * OUHBELA_name;
A68_INT  PUHBELA;  /* forall loop counter */
A68_VC  QUHBELA;  /* avoid structure result */
A68_INT  RUHBELA_declno;
 /* line 778: */
{ 
NUHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 779: */
 /* line 780: */
PUHBELA = Names.upb -1;
OUHBELA_name = Names.data;
for (;PUHBELA-- >= 0;
(OUHBELA_name++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 781: */
A_CALLPROC(NLFAOST_get_declname,((*OUHBELA_name), Msg, &QUHBELA),((*OUHBELA_name), Msg, &QUHBELA,(NLFAOST_get_declname).nonlocals));
RUHBELA_declno = IGBBELA_check_decl(NUHBELA_ct, QUHBELA, Msg);
 /* line 782: */
 /* line 783: */
EZCBELA_export(NUHBELA_ct, RUHBELA_declno, Msg);
}
 /* line 784: */
 /* line 785: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  OVHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_286  PVHBELA;  /* procedure value */
 /* line 793: */
 /* line 794: */
PVHBELA.fn.fn_global = JADBELA_exportall;
PVHBELA.nonlocals = A68_NIL;
DQGBELA_do_contexts(Names, Msg, PVHBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IWHBELA_anonymous(A68_314  Names, A68_97  Msg)
{ 
A68_237 * JWHBELA_ct;
A68_INT  KWHBELA;  /* YIELD */
A68_VC  LWHBELA;  /* avoid structure result */
A68_VC  MWHBELA_newimpname;
A68_162  NWHBELA;  /* collateral clause result */
 /* line 803: */
{ 
JWHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 804: */
KWHBELA = 1 ;
ORFAOST_get_importname( (*(&A_VINDEX(Names,KWHBELA))), Msg, &LWHBELA );
MWHBELA_newimpname = LWHBELA;
 /* line 805: */
LVCBELA_name_region(JWHBELA_ct, MWHBELA_newimpname, Msg);
 /* line 806: */
NWHBELA.Context = (*(&(JWHBELA_ct->Name)));
NWHBELA.Import = MWHBELA_newimpname;
 /* line 807: */
 /* line 808: */
FUBBELA_setcurrentct(NWHBELA, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  BYHBELA_anonymous(A68_314  Params, A68_97  Msg)
{ 
A68_BOOL  CYHBELA;  /* optbool result */
A68_VC  FYHBELA;  /* avoid structure result */
A68_VC  GYHBELA_s;
A68_BOOL  HYHBELA;  /* optbool result */
A68_INT  IYHBELA;  /* YIELD */
A68_BOOL  JYHBELA;  /* optbool result */
A68_INT  KYHBELA;  /* YIELD */
A68_BOOL  LYHBELA;  /* clause result */
 /* line 825: */
CYHBELA = (*(&(HXJAELA_library->Libchanged)));
if ( CYHBELA )
{CYHBELA = FIAAOST_interactive();
}
 /* line 826: */
if ( CYHBELA )
{{ 
IIAAOST_prompt( EYHBELA, &FYHBELA );
GYHBELA_s = FYHBELA;
 /* line 827: */
HYHBELA = (GYHBELA_s.upb==0);
if ( ! HYHBELA )
{IYHBELA = 1 ;
JYHBELA = (A_VINDEX(GYHBELA_s,IYHBELA)!='n');
if ( JYHBELA )
{ /* line 828: */
KYHBELA = 1 ;
JYHBELA = (A_VINDEX(GYHBELA_s,KYHBELA)!='N');
}
HYHBELA = JYHBELA;
}
 /* line 829: */
LYHBELA = HYHBELA;
} 
CYHBELA = LYHBELA;
}
if ( CYHBELA )
{ 
 /* line 830: */
 /* line 831: */
OQGBELA_exit_command(Params, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  LAGBELA_print_imports(A68_242  Cr, A68_BOOL  Full, A68_97  Msg)
{ 
A68_234 * MAGBELA_ips;
A68_392  NAGBELA;  /* collateral clause result */
A68_52  OAGBELA;  /* OPERATORS - mode -> union mode */
A68_56  PAGBELA;  /* procedure value */
A68_52  SAGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TAGBELA;  /* YIELD */
A68_VC  UAGBELA;  /* avoid structure result */
A68_52  VAGBELA;  /* OPERATORS - mode -> union mode */
A68_52  WAGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  XAGBELA;  /* YIELD */
A68_52  YAGBELA;  /* OPERATORS - mode -> union mode */
A68_56  ZAGBELA;  /* procedure value */
A68_52  CBGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DBGBELA;  /* YIELD */
A68_52  EBGBELA;  /* OPERATORS - mode -> union mode */
A68_56  FBGBELA;  /* procedure value */
A68_85  GBGBELA;  /* OPERATORS - istruct -> vector */
A68_179  HBGBELA_info;
A68_393  IBGBELA;  /* collateral clause result */
A68_52  JBGBELA;  /* OPERATORS - mode -> union mode */
A68_56  KBGBELA;  /* procedure value */
A68_52  NBGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OBGBELA;  /* YIELD */
A68_VC  PBGBELA;  /* avoid structure result */
A68_52  QBGBELA;  /* OPERATORS - mode -> union mode */
A68_52  RBGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  SBGBELA;  /* YIELD */
A68_52  TBGBELA;  /* OPERATORS - mode -> union mode */
A68_56  UBGBELA;  /* procedure value */
A68_85  VBGBELA;  /* OPERATORS - istruct -> vector */
A68_233 * WBGBELA_b;
A68_BOOL  XBGBELA;  /* optbool result */
A68_395  YBGBELA;  /* collateral clause result */
A68_52  ZBGBELA;  /* OPERATORS - mode -> union mode */
A68_56  ACGBELA;  /* procedure value */
A68_52  DCGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ECGBELA;  /* YIELD */
A68_52  FCGBELA;  /* OPERATORS - mode -> union mode */
A68_56  GCGBELA;  /* procedure value */
A68_85  HCGBELA;  /* OPERATORS - istruct -> vector */
A68_243 * ICGBELA_s;
A68_VC  KCGBELA;  /* clause result */
A68_VC  MCGBELA;  /* avoid structure result */
A68_398  NCGBELA;  /* collateral clause result */
A68_52  QCGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RCGBELA;  /* YIELD */
A68_VC  SCGBELA;  /* avoid structure result */
A68_52  TCGBELA;  /* OPERATORS - mode -> union mode */
A68_85  UCGBELA;  /* OPERATORS - istruct -> vector */
A68_VC  VCGBELA;  /* avoid structure result */
A68_VC  WCGBELA_date;
A68_395  XCGBELA;  /* collateral clause result */
A68_52  YCGBELA;  /* OPERATORS - mode -> union mode */
A68_56  ZCGBELA;  /* procedure value */
A68_52  CDGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DDGBELA;  /* YIELD */
A68_52  EDGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FDGBELA;  /* YIELD */
A68_85  GDGBELA;  /* OPERATORS - istruct -> vector */
A68_393  HDGBELA;  /* collateral clause result */
A68_52  KDGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LDGBELA;  /* YIELD */
A68_VC  MDGBELA;  /* avoid structure result */
A68_52  NDGBELA;  /* OPERATORS - mode -> union mode */
A68_52  ODGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  PDGBELA;  /* YIELD */
A68_52  QDGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RDGBELA;  /* YIELD */
A68_52  UDGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VDGBELA;  /* YIELD */
A68_85  WDGBELA;  /* OPERATORS - istruct -> vector */
A68_398  XDGBELA;  /* collateral clause result */
A68_52  YDGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZDGBELA;  /* YIELD */
A68_52  AEGBELA;  /* OPERATORS - mode -> union mode */
A68_56  BEGBELA;  /* procedure value */
A68_85  CEGBELA;  /* OPERATORS - istruct -> vector */
A68_402  DEGBELA;  /* collateral clause result */
A68_52  EEGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  FEGBELA;  /* YIELD */
A68_62  GEGBELA;  /* avoid structure result */
A68_52  HEGBELA;  /* OPERATORS - mode -> union mode */
A68_52  KEGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LEGBELA;  /* YIELD */
A68_52  MEGBELA;  /* OPERATORS - mode -> union mode */
A68_56  NEGBELA;  /* procedure value */
A68_85  OEGBELA;  /* OPERATORS - istruct -> vector */
A68_402  PEGBELA;  /* collateral clause result */
A68_52  QEGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  REGBELA;  /* YIELD */
A68_52  UEGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VEGBELA;  /* YIELD */
A68_VC  WEGBELA;  /* avoid structure result */
A68_52  XEGBELA;  /* OPERATORS - mode -> union mode */
A68_52  YEGBELA;  /* OPERATORS - mode -> union mode */
A68_56  ZEGBELA;  /* procedure value */
A68_85  AFGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_imports);
 /* line 109: */
 /* line 110: */
{ 
MAGBELA_ips = HEKAELA_get_imports(Cr);
 /* line 111: */
 /* line 112: */
if ( (MAGBELA_ips==GUJAELA_nilimports) )
{ 
 /* line 113: */
if ( Full )
{ 
PAGBELA.fn.fn_global = LRAAOSL_newline;
PAGBELA.nonlocals = A68_NIL;
NAGBELA.data[0] = A_UNITE(OAGBELA,mode12,12,PAGBELA);
TAGBELA = RAGBELA ;
NAGBELA.data[1] = A_UNITE(SAGBELA,mode7,7,TAGBELA);
UAKAELA_ctos( Cr, &UAGBELA );
NAGBELA.data[2] = A_UNITE(VAGBELA,mode7,7,UAGBELA);
XAGBELA = ':' ;
NAGBELA.data[3] = A_UNITE(WAGBELA,mode6,6,XAGBELA);
 /* line 114: */
ZAGBELA.fn.fn_global = LRAAOSL_newline;
ZAGBELA.nonlocals = A68_NIL;
NAGBELA.data[4] = A_UNITE(YAGBELA,mode12,12,ZAGBELA);
DBGBELA = BBGBELA ;
NAGBELA.data[5] = A_UNITE(CBGBELA,mode7,7,DBGBELA);
FBGBELA.fn.fn_global = LRAAOSL_newline;
FBGBELA.nonlocals = A68_NIL;
NAGBELA.data[6] = A_UNITE(EBGBELA,mode12,12,FBGBELA);
 /* line 115: */
 /* line 116: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(GBGBELA,NAGBELA,7,A68_52 ));
} 
} 
else
{ 
HBGBELA_info = UACAELA_nilptr;
 /* line 117: */
KBGBELA.fn.fn_global = LRAAOSL_newline;
KBGBELA.nonlocals = A68_NIL;
IBGBELA.data[0] = A_UNITE(JBGBELA,mode12,12,KBGBELA);
OBGBELA = MBGBELA ;
IBGBELA.data[1] = A_UNITE(NBGBELA,mode7,7,OBGBELA);
UAKAELA_ctos( Cr, &PBGBELA );
IBGBELA.data[2] = A_UNITE(QBGBELA,mode7,7,PBGBELA);
SBGBELA = ':' ;
IBGBELA.data[3] = A_UNITE(RBGBELA,mode6,6,SBGBELA);
UBGBELA.fn.fn_global = LRAAOSL_newline;
UBGBELA.nonlocals = A68_NIL;
IBGBELA.data[4] = A_UNITE(TBGBELA,mode12,12,UBGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(VBGBELA,IBGBELA,5,A68_52 ));
 /* line 118: */
for ( ;; )
{ 
 /* line 119: */
if ( !((MAGBELA_ips!=GUJAELA_nilimports)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 120: */
WBGBELA_b = (&(MAGBELA_ips->Binding));
 /* line 121: */
 /* line 122: */
if ( !GIEAELA_same_discptr((*(&(TYJAELA_discfile->Database))), (*(&(WBGBELA_b->Info))), HBGBELA_info) )
{ 
XBGBELA = A_VC_EQ((*(&(WBGBELA_b->Name))),TTCAOST_nullid);
if ( XBGBELA )
{ /* line 123: */
XBGBELA = UXIAELA_isnilptr(TYJAELA_discfile, (*(&(WBGBELA_b->Info))));
}
if ( XBGBELA )
{ 
 /* line 124: */
 /* line 125: */
if ( !GIEAELA_same_discptr((*(&(TYJAELA_discfile->Database))), HBGBELA_info, (*AZJAELA_ptrimpinfo)) )
{ 
ACGBELA.fn.fn_global = LRAAOSL_newline;
ACGBELA.nonlocals = A68_NIL;
YBGBELA.data[0] = A_UNITE(ZBGBELA,mode12,12,ACGBELA);
 /* line 126: */
ECGBELA = CCGBELA ;
YBGBELA.data[1] = A_UNITE(DCGBELA,mode7,7,ECGBELA);
GCGBELA.fn.fn_global = LRAAOSL_newline;
GCGBELA.nonlocals = A68_NIL;
YBGBELA.data[2] = A_UNITE(FCGBELA,mode12,12,GCGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(HCGBELA,YBGBELA,3,A68_52 ));
 /* line 127: */
 /* line 128: */
 /* line 129: */
HBGBELA_info = (*AZJAELA_ptrimpinfo);
} 
} 
else
{ 
ICGBELA_s = VFBBELA_get_binding_source(Cr, (*(&(WBGBELA_b->Rename))));
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
if ( ((*(&(ICGBELA_s->Date)))==0) )
{ 
ZAAAOSI_makervc( LCGBELA, &MCGBELA );
KCGBELA = MCGBELA;
} 
else
{ 
RCGBELA = PCGBELA ;
NCGBELA.data[0] = A_UNITE(QCGBELA,mode7,7,RCGBELA);
QDDAOST_date_time( (*(&(ICGBELA_s->Date))), &SCGBELA );
NCGBELA.data[1] = A_UNITE(TCGBELA,mode7,7,SCGBELA);
 /* line 134: */
UJBAOSL_oneline( A_HISVEC(UCGBELA,NCGBELA,2,A68_52 ), &VCGBELA );
KCGBELA = VCGBELA;
} 
WCGBELA_date = KCGBELA;
 /* line 135: */
ZCGBELA.fn.fn_global = LRAAOSL_newline;
ZCGBELA.nonlocals = A68_NIL;
XCGBELA.data[0] = A_UNITE(YCGBELA,mode12,12,ZCGBELA);
DDGBELA = BDGBELA ;
XCGBELA.data[1] = A_UNITE(CDGBELA,mode7,7,DDGBELA);
FDGBELA = (*(&(ICGBELA_s->Name))) ;
XCGBELA.data[2] = A_UNITE(EDGBELA,mode7,7,FDGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(GDGBELA,XCGBELA,3,A68_52 ));
 /* line 136: */
LRAAOSL_newline(LEAAOST_out);
 /* line 137: */
 /* line 138: */
 /* line 139: */
HBGBELA_info = (*(&(WBGBELA_b->Info)));
} 
} 
 /* line 140: */
LDGBELA = JDGBELA ;
HDGBELA.data[0] = A_UNITE(KDGBELA,mode7,7,LDGBELA);
QVJAELA_sort_id( (*(&(WBGBELA_b->Sort))), &MDGBELA );
HDGBELA.data[1] = A_UNITE(NDGBELA,mode7,7,MDGBELA);
PDGBELA = ' ' ;
HDGBELA.data[2] = A_UNITE(ODGBELA,mode6,6,PDGBELA);
RDGBELA = (*(&(WBGBELA_b->Rename))) ;
HDGBELA.data[3] = A_UNITE(QDGBELA,mode7,7,RDGBELA);
VDGBELA = TDGBELA ;
HDGBELA.data[4] = A_UNITE(UDGBELA,mode7,7,VDGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(WDGBELA,HDGBELA,5,A68_52 ));
 /* line 141: */
 /* line 142: */
if ( A_VC_EQ((*(&(WBGBELA_b->Name))),TTCAOST_nullid) )
{ 
 /* line 143: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, (*(&(WBGBELA_b->Info)))) )
{ 
ZDGBELA = '?' ;
XDGBELA.data[0] = A_UNITE(YDGBELA,mode6,6,ZDGBELA);
BEGBELA.fn.fn_global = LRAAOSL_newline;
BEGBELA.nonlocals = A68_NIL;
XDGBELA.data[1] = A_UNITE(AEGBELA,mode12,12,BEGBELA);
 /* line 144: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(CEGBELA,XDGBELA,2,A68_52 ));
} 
else
{ 
FEGBELA = '?' ;
DEGBELA.data[0] = A_UNITE(EEGBELA,mode6,6,FEGBELA);
XYAAOSL_after( 39, &GEGBELA );
DEGBELA.data[1] = A_UNITE(HEGBELA,mode18,18,GEGBELA);
 /* line 145: */
LEGBELA = JEGBELA ;
DEGBELA.data[2] = A_UNITE(KEGBELA,mode7,7,LEGBELA);
NEGBELA.fn.fn_global = LRAAOSL_newline;
NEGBELA.nonlocals = A68_NIL;
DEGBELA.data[3] = A_UNITE(MEGBELA,mode12,12,NEGBELA);
 /* line 146: */
 /* line 147: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(OEGBELA,DEGBELA,4,A68_52 ));
} 
} 
else
{ 
REGBELA = (*(&(WBGBELA_b->Name))) ;
PEGBELA.data[0] = A_UNITE(QEGBELA,mode7,7,REGBELA);
VEGBELA = TEGBELA ;
PEGBELA.data[1] = A_UNITE(UEGBELA,mode7,7,VEGBELA);
BAKAELA_ctos( (*(&(WBGBELA_b->Ctn))), &WEGBELA );
PEGBELA.data[2] = A_UNITE(XEGBELA,mode7,7,WEGBELA);
ZEGBELA.fn.fn_global = LRAAOSL_newline;
ZEGBELA.nonlocals = A68_NIL;
PEGBELA.data[3] = A_UNITE(YEGBELA,mode12,12,ZEGBELA);
 /* line 148: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(AFGBELA,PEGBELA,4,A68_52 ));
} 
 /* line 149: */
 /* line 150: */
MAGBELA_ips = (*(&(MAGBELA_ips->Rest)));
}
 /* line 151: */
 /* line 152: */
} 
} 
A_PROC_EXIT(print_imports);
return;
} 
#undef NL

A_STATIC A68_VOID  EFGBELA_print_closure(A68_242  Cr, A68_BOOL  Full, A68_97  Msg)
{ 
A68_393  FFGBELA;  /* collateral clause result */
A68_52  GFGBELA;  /* OPERATORS - mode -> union mode */
A68_56  HFGBELA;  /* procedure value */
A68_52  KFGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LFGBELA;  /* YIELD */
A68_VC  MFGBELA;  /* avoid structure result */
A68_52  NFGBELA;  /* OPERATORS - mode -> union mode */
A68_52  QFGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RFGBELA;  /* YIELD */
A68_52  SFGBELA;  /* OPERATORS - mode -> union mode */
A68_56  TFGBELA;  /* procedure value */
A68_85  UFGBELA;  /* OPERATORS - istruct -> vector */
A68_INT  VFGBELA_closureno;
A68_INT  WFGBELA_i;
A68_INT  XFGBELA;  /* by part of loop */
A68_398  YFGBELA;  /* collateral clause result */
A68_52  BGGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  CGGBELA;  /* YIELD */
A68_242  DGGBELA;  /* avoid structure result */
A68_VC  EGGBELA;  /* avoid structure result */
A68_52  FGGBELA;  /* OPERATORS - mode -> union mode */
A68_85  GGGBELA;  /* OPERATORS - istruct -> vector */
A68_395  HGGBELA;  /* collateral clause result */
A68_52  IGGBELA;  /* OPERATORS - mode -> union mode */
A68_56  JGGBELA;  /* procedure value */
A68_52  MGGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NGGBELA;  /* YIELD */
A68_52  QGGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RGGBELA;  /* YIELD */
A68_52  SGGBELA;  /* OPERATORS - mode -> union mode */
A68_56  TGGBELA;  /* procedure value */
A68_85  UGGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_closure);
 /* line 156: */
 /* line 157: */
{ 
 /* line 158: */
if ( Full )
{ 
 /* line 159: */
SOBBELA_closure_details(Cr, A68_FALSE, A68_FALSE, A68_TRUE, Msg);
} 
else
{ 
 /* line 160: */
if ( (HEKAELA_get_imports(Cr)!=GUJAELA_nilimports) )
{ 
HFGBELA.fn.fn_global = LRAAOSL_newline;
HFGBELA.nonlocals = A68_NIL;
FFGBELA.data[0] = A_UNITE(GFGBELA,mode12,12,HFGBELA);
LFGBELA = JFGBELA ;
FFGBELA.data[1] = A_UNITE(KFGBELA,mode7,7,LFGBELA);
 /* line 161: */
UAKAELA_ctos( Cr, &MFGBELA );
FFGBELA.data[2] = A_UNITE(NFGBELA,mode7,7,MFGBELA);
RFGBELA = PFGBELA ;
FFGBELA.data[3] = A_UNITE(QFGBELA,mode7,7,RFGBELA);
TFGBELA.fn.fn_global = LRAAOSL_newline;
TFGBELA.nonlocals = A68_NIL;
FFGBELA.data[4] = A_UNITE(SFGBELA,mode12,12,TFGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(UFGBELA,FFGBELA,5,A68_52 ));
 /* line 162: */
VFGBELA_closureno = SOBBELA_closure_details(Cr, A68_FALSE, A68_FALSE, A68_FALSE, Msg);
 /* line 163: */
 /* line 164: */
XFGBELA = (-1);
for ( WFGBELA_i = A_ABS(VFGBELA_closureno);
( XFGBELA > 0 && WFGBELA_i <= 1) ||
( XFGBELA < 0 && WFGBELA_i >= 1) ||
( XFGBELA == 0 ) ;
WFGBELA_i += XFGBELA )
{ 
if ( (EPAAOSL_charsleft(LEAAOST_out)<20) )
{ 
LRAAOSL_newline(LEAAOST_out);
} 
 /* line 165: */
CGGBELA = AGGBELA ;
YFGBELA.data[0] = A_UNITE(BGGBELA,mode7,7,CGGBELA);
RLBBELA_ctno_region( WFGBELA_i, &DGGBELA );
UAKAELA_ctos( DGGBELA, &EGGBELA );
YFGBELA.data[1] = A_UNITE(FGGBELA,mode7,7,EGGBELA);
 /* line 166: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(GGGBELA,YFGBELA,2,A68_52 ));
}
 /* line 167: */
JGGBELA.fn.fn_global = LRAAOSL_newline;
JGGBELA.nonlocals = A68_NIL;
HGGBELA.data[0] = A_UNITE(IGGBELA,mode12,12,JGGBELA);
 /* line 168: */
if ( (VFGBELA_closureno<0) )
{ 
 /* line 169: */
NGGBELA = LGGBELA ;
HGGBELA.data[1] = A_UNITE(MGGBELA,mode7,7,NGGBELA);
} 
else
{ 
RGGBELA = PGGBELA ;
HGGBELA.data[1] = A_UNITE(QGGBELA,mode7,7,RGGBELA);
} 
TGGBELA.fn.fn_global = LRAAOSL_newline;
TGGBELA.nonlocals = A68_NIL;
HGGBELA.data[2] = A_UNITE(SGGBELA,mode12,12,TGGBELA);
 /* line 170: */
 /* line 171: */
 /* line 172: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(UGGBELA,HGGBELA,3,A68_52 ));
} 
} 
} 
A_PROC_EXIT(print_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  YGGBELA_printdecls(A68_237 * Ct, A68_BOOL  Full, A68_97  Msg)
{ 
A68_179  ZGGBELA_info;
A68_238  AHGBELA;  /* avoid structure result */
A68_238  BHGBELA_decls;
A68_232  CHGBELA_decl;
A68_230 * DHGBELA_set;
A68_393  EHGBELA;  /* collateral clause result */
A68_52  FHGBELA;  /* OPERATORS - mode -> union mode */
A68_56  GHGBELA;  /* procedure value */
A68_52  JHGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  KHGBELA;  /* YIELD */
A68_52  LHGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MHGBELA;  /* YIELD */
A68_52  NHGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  OHGBELA;  /* YIELD */
A68_52  PHGBELA;  /* OPERATORS - mode -> union mode */
A68_56  QHGBELA;  /* procedure value */
A68_85  RHGBELA;  /* OPERATORS - istruct -> vector */
A68_INT  SHGBELA_index;
A68_INT  THGBELA;  /* to part of loop */
A68_180  UHGBELA;  /* OPERATORS - simple index */
A68_180  VHGBELA;  /* OPERATORS - simple index */
A68_408  WHGBELA;  /* collateral clause result */
A68_52  ZHGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  AIGBELA;  /* YIELD */
A68_VC  BIGBELA;  /* avoid structure result */
A68_52  CIGBELA;  /* OPERATORS - mode -> union mode */
A68_52  DIGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  EIGBELA;  /* YIELD */
A68_52  FIGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GIGBELA;  /* YIELD */
A68_52  HIGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  IIGBELA;  /* YIELD */
A68_VC  JIGBELA;  /* avoid structure result */
A68_52  KIGBELA;  /* OPERATORS - mode -> union mode */
A68_52  LIGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  MIGBELA;  /* YIELD */
A68_52  NIGBELA;  /* OPERATORS - mode -> union mode */
A68_56  OIGBELA;  /* procedure value */
A68_85  PIGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printdecls);
 /* line 175: */
 /* line 176: */
{ 
ZGGBELA_info = UACAELA_nilptr;
 /* line 177: */
LEBBELA_get_decls( Ct, Msg, &AHGBELA );
BHGBELA_decls = AHGBELA;
 /* line 178: */
 /* line 179: */
DHGBELA_set = TBWAELA_get_declattribute(Ct, (*MZJAELA_info_key), Msg);
 /* line 180: */
GHGBELA.fn.fn_global = LRAAOSL_newline;
GHGBELA.nonlocals = A68_NIL;
EHGBELA.data[0] = A_UNITE(FHGBELA,mode12,12,GHGBELA);
KHGBELA = IHGBELA ;
EHGBELA.data[1] = A_UNITE(JHGBELA,mode7,7,KHGBELA);
MHGBELA = (*(&(Ct->Name))) ;
EHGBELA.data[2] = A_UNITE(LHGBELA,mode7,7,MHGBELA);
OHGBELA = ':' ;
EHGBELA.data[3] = A_UNITE(NHGBELA,mode6,6,OHGBELA);
QHGBELA.fn.fn_global = LRAAOSL_newline;
QHGBELA.nonlocals = A68_NIL;
EHGBELA.data[4] = A_UNITE(PHGBELA,mode12,12,QHGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(RHGBELA,EHGBELA,5,A68_52 ));
 /* line 181: */
 /* line 182: */
THGBELA = BHGBELA_decls.upb;
for ( SHGBELA_index = 1;
SHGBELA_index <= THGBELA;
SHGBELA_index += 1 )
{ 
SOAAOST_flt_if_interrupted(Msg);
 /* line 183: */
CHGBELA_decl = (*(&A_VINDEX(BHGBELA_decls,SHGBELA_index)));
 /* line 184: */
 /* line 185: */
if ( Full )
{ 
 /* line 186: */
FJCBELA_printdecl(Ct, SHGBELA_index, Full, Full, Msg);
} 
else
{ 
 /* line 187: */
 /* line 188: */
UHGBELA = (*(&(DHGBELA_set->Data))) ;
if ( !GIEAELA_same_discptr((*(&(TYJAELA_discfile->Database))), ZGGBELA_info, (*(&A_VINDEX(UHGBELA,SHGBELA_index)))) )
{ 
VHGBELA = (*(&(DHGBELA_set->Data))) ;
ZGGBELA_info = (*(&A_VINDEX(VHGBELA,SHGBELA_index)));
 /* line 189: */
 /* line 190: */
OICBELA_info_chars(Ct, SHGBELA_index, Msg);
} 
 /* line 191: */
AIGBELA = YHGBELA ;
WHGBELA.data[0] = A_UNITE(ZHGBELA,mode7,7,AIGBELA);
QVJAELA_sort_id( (*(&((&CHGBELA_decl)->Sort))), &BIGBELA );
WHGBELA.data[1] = A_UNITE(CIGBELA,mode7,7,BIGBELA);
EIGBELA = ' ' ;
WHGBELA.data[2] = A_UNITE(DIGBELA,mode6,6,EIGBELA);
GIGBELA = (*(&((&CHGBELA_decl)->Name))) ;
WHGBELA.data[3] = A_UNITE(FIGBELA,mode7,7,GIGBELA);
 /* line 192: */
IIGBELA = '(' ;
WHGBELA.data[4] = A_UNITE(HIGBELA,mode6,6,IIGBELA);
JIBAOST_version_str( (*(&((&CHGBELA_decl)->Version))), &JIGBELA );
WHGBELA.data[5] = A_UNITE(KIGBELA,mode7,7,JIGBELA);
MIGBELA = ')' ;
WHGBELA.data[6] = A_UNITE(LIGBELA,mode6,6,MIGBELA);
OIGBELA.fn.fn_global = LRAAOSL_newline;
OIGBELA.nonlocals = A68_NIL;
WHGBELA.data[7] = A_UNITE(NIGBELA,mode12,12,OIGBELA);
 /* line 193: */
 /* line 194: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(PIGBELA,WHGBELA,8,A68_52 ));
} 
}
 /* line 195: */
} 
A_PROC_EXIT(printdecls);
return;
} 
#undef NL

A_STATIC A68_VOID  TIGBELA_print_exports(A68_237 * Ct, A68_BOOL  Full, A68_97  Msg)
{ 
A68_BOOL  UIGBELA_exps;
A68_238  VIGBELA;  /* avoid structure result */
A68_238  WIGBELA_decls;
A68_232 * XIGBELA_decl;
A68_INT  YIGBELA;  /* forall loop counter */
A68_393  ZIGBELA;  /* collateral clause result */
A68_52  AJGBELA;  /* OPERATORS - mode -> union mode */
A68_56  BJGBELA;  /* procedure value */
A68_52  EJGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FJGBELA;  /* YIELD */
A68_52  GJGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HJGBELA;  /* YIELD */
A68_52  IJGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  JJGBELA;  /* YIELD */
A68_52  KJGBELA;  /* OPERATORS - mode -> union mode */
A68_56  LJGBELA;  /* procedure value */
A68_85  MJGBELA;  /* OPERATORS - istruct -> vector */
A68_402  NJGBELA;  /* collateral clause result */
A68_52  QJGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RJGBELA;  /* YIELD */
A68_VC  SJGBELA;  /* avoid structure result */
A68_52  TJGBELA;  /* OPERATORS - mode -> union mode */
A68_52  UJGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  VJGBELA;  /* YIELD */
A68_52  WJGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XJGBELA;  /* YIELD */
A68_85  YJGBELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  ZJGBELA;  /* optbool result */
A68_392  AKGBELA;  /* collateral clause result */
A68_52  BKGBELA;  /* OPERATORS - mode -> union mode */
A68_56  CKGBELA;  /* procedure value */
A68_52  FKGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GKGBELA;  /* YIELD */
A68_52  HKGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IKGBELA;  /* YIELD */
A68_52  JKGBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  KKGBELA;  /* YIELD */
A68_52  LKGBELA;  /* OPERATORS - mode -> union mode */
A68_56  MKGBELA;  /* procedure value */
A68_52  PKGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QKGBELA;  /* YIELD */
A68_52  RKGBELA;  /* OPERATORS - mode -> union mode */
A68_56  SKGBELA;  /* procedure value */
A68_85  TKGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_exports);
 /* line 198: */
 /* line 199: */
{ 
UIGBELA_exps = A68_FALSE;
 /* line 200: */
LEBBELA_get_decls( Ct, Msg, &VIGBELA );
WIGBELA_decls = VIGBELA;
 /* line 201: */
 /* line 202: */
YIGBELA = WIGBELA_decls.upb -1;
XIGBELA_decl = WIGBELA_decls.data;
for (;YIGBELA-- >= 0;
(XIGBELA_decl++
) )
{
SOAAOST_flt_if_interrupted(Msg);
 /* line 203: */
 /* line 204: */
if ( (*(&(XIGBELA_decl->Export))) )
{ 
 /* line 205: */
if ( !UIGBELA_exps )
{ 
UIGBELA_exps = A68_TRUE;
 /* line 206: */
BJGBELA.fn.fn_global = LRAAOSL_newline;
BJGBELA.nonlocals = A68_NIL;
ZIGBELA.data[0] = A_UNITE(AJGBELA,mode12,12,BJGBELA);
FJGBELA = DJGBELA ;
ZIGBELA.data[1] = A_UNITE(EJGBELA,mode7,7,FJGBELA);
HJGBELA = (*(&(Ct->Name))) ;
ZIGBELA.data[2] = A_UNITE(GJGBELA,mode7,7,HJGBELA);
JJGBELA = ':' ;
ZIGBELA.data[3] = A_UNITE(IJGBELA,mode6,6,JJGBELA);
LJGBELA.fn.fn_global = LRAAOSL_newline;
LJGBELA.nonlocals = A68_NIL;
ZIGBELA.data[4] = A_UNITE(KJGBELA,mode12,12,LJGBELA);
 /* line 207: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(MJGBELA,ZIGBELA,5,A68_52 ));
} 
 /* line 208: */
if ( (EPAAOSL_charsleft(LEAAOST_out)<20) )
{ 
LRAAOSL_newline(LEAAOST_out);
} 
 /* line 209: */
RJGBELA = PJGBELA ;
NJGBELA.data[0] = A_UNITE(QJGBELA,mode7,7,RJGBELA);
QVJAELA_sort_id( (*(&(XIGBELA_decl->Sort))), &SJGBELA );
NJGBELA.data[1] = A_UNITE(TJGBELA,mode7,7,SJGBELA);
VJGBELA = ' ' ;
NJGBELA.data[2] = A_UNITE(UJGBELA,mode6,6,VJGBELA);
XJGBELA = (*(&(XIGBELA_decl->Name))) ;
NJGBELA.data[3] = A_UNITE(WJGBELA,mode7,7,XJGBELA);
 /* line 210: */
 /* line 211: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(YJGBELA,NJGBELA,4,A68_52 ));
} 
}
 /* line 212: */
 /* line 213: */
ZJGBELA = !UIGBELA_exps;
if ( ZJGBELA )
{ZJGBELA = Full;
}
if ( ZJGBELA )
{ 
CKGBELA.fn.fn_global = LRAAOSL_newline;
CKGBELA.nonlocals = A68_NIL;
AKGBELA.data[0] = A_UNITE(BKGBELA,mode12,12,CKGBELA);
GKGBELA = EKGBELA ;
AKGBELA.data[1] = A_UNITE(FKGBELA,mode7,7,GKGBELA);
IKGBELA = (*(&(Ct->Name))) ;
AKGBELA.data[2] = A_UNITE(HKGBELA,mode7,7,IKGBELA);
KKGBELA = ':' ;
AKGBELA.data[3] = A_UNITE(JKGBELA,mode6,6,KKGBELA);
 /* line 214: */
MKGBELA.fn.fn_global = LRAAOSL_newline;
MKGBELA.nonlocals = A68_NIL;
AKGBELA.data[4] = A_UNITE(LKGBELA,mode12,12,MKGBELA);
QKGBELA = OKGBELA ;
AKGBELA.data[5] = A_UNITE(PKGBELA,mode7,7,QKGBELA);
SKGBELA.fn.fn_global = LRAAOSL_newline;
SKGBELA.nonlocals = A68_NIL;
AKGBELA.data[6] = A_UNITE(RKGBELA,mode12,12,SKGBELA);
 /* line 215: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(TKGBELA,AKGBELA,7,A68_52 ));
} 
else
{ 
if ( UIGBELA_exps )
{ 
 /* line 216: */
 /* line 217: */
LRAAOSL_newline(LEAAOST_out);
} 
} 
} 
A_PROC_EXIT(print_exports);
return;
} 
#undef NL
 /* line 221: */

A_STATIC A68_VOID  ALGBELA_printct(A68_237 * Ct, A68_BOOL  Full, A68_BOOL  Ptdecls, A68_BOOL  Ptexports, A68_BOOL  Ptimports, A68_97  Msg)
{ 
A68_393  BLGBELA;  /* collateral clause result */
A68_52  CLGBELA;  /* OPERATORS - mode -> union mode */
A68_56  DLGBELA;  /* procedure value */
A68_52  GLGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HLGBELA;  /* YIELD */
A68_52  ILGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JLGBELA;  /* YIELD */
A68_52  MLGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NLGBELA;  /* YIELD */
A68_52  OLGBELA;  /* OPERATORS - mode -> union mode */
A68_56  PLGBELA;  /* procedure value */
A68_85  QLGBELA;  /* OPERATORS - istruct -> vector */
A68_236 * RLGBELA_r;
A68_242  SLGBELA;  /* collateral clause result */
A68_242  TLGBELA;  /* collateral clause result */
A_PROC_ENTRY(printct);
 /* line 222: */
 /* line 223: */
{ 
 /* line 224: */
if ( ZBKAELA_no_text(Ct, Msg) )
{ 
DLGBELA.fn.fn_global = LRAAOSL_newline;
DLGBELA.nonlocals = A68_NIL;
BLGBELA.data[0] = A_UNITE(CLGBELA,mode12,12,DLGBELA);
HLGBELA = FLGBELA ;
BLGBELA.data[1] = A_UNITE(GLGBELA,mode7,7,HLGBELA);
JLGBELA = (*(&(Ct->Name))) ;
BLGBELA.data[2] = A_UNITE(ILGBELA,mode7,7,JLGBELA);
NLGBELA = LLGBELA ;
BLGBELA.data[3] = A_UNITE(MLGBELA,mode7,7,NLGBELA);
PLGBELA.fn.fn_global = LRAAOSL_newline;
PLGBELA.nonlocals = A68_NIL;
BLGBELA.data[4] = A_UNITE(OLGBELA,mode12,12,PLGBELA);
 /* line 225: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(QLGBELA,BLGBELA,5,A68_52 ));
} 
else
{ 
if ( Ptdecls )
{ 
YGGBELA_printdecls(Ct, Full, Msg);
} 
 /* line 226: */
if ( Ptexports )
{ 
TIGBELA_print_exports(Ct, Full, Msg);
} 
 /* line 227: */
 /* line 228: */
if ( Ptimports )
{ 
RLGBELA_r = (*(&(Ct->Regions)));
 /* line 229: */
for ( ;; )
{ 
 /* line 230: */
if ( !((RLGBELA_r!=CVJAELA_nilregions)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 231: */
SLGBELA.Context = Ct;
SLGBELA.Region = (&(RLGBELA_r->Region));
LAGBELA_print_imports(SLGBELA, Full, Msg);
 /* line 232: */
TLGBELA.Context = Ct;
TLGBELA.Region = (&(RLGBELA_r->Region));
EFGBELA_print_closure(TLGBELA, Full, Msg);
 /* line 233: */
 /* line 234: */
RLGBELA_r = (*(&(RLGBELA_r->Rest)));
}
 /* line 235: */
 /* line 236: */
 /* line 237: */
} 
} 
} 
A_PROC_EXIT(printct);
return;
} 
#undef NL

A_STATIC A68_VOID  VLGBELA_ptcontexts(A68_97  Msg)
{ 
A68_INT  WLGBELA_no;
A68_398  XLGBELA;  /* collateral clause result */
A68_52  AMGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BMGBELA;  /* YIELD */
A68_52  CMGBELA;  /* OPERATORS - mode -> union mode */
A68_56  DMGBELA;  /* procedure value */
A68_85  EMGBELA;  /* OPERATORS - istruct -> vector */
A68_INT  FMGBELA_i;
A68_INT  GMGBELA;  /* to part of loop */
A68_398  HMGBELA;  /* collateral clause result */
A68_52  KMGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LMGBELA;  /* YIELD */
A68_242  MMGBELA;  /* avoid structure result */
A68_VC  NMGBELA;  /* avoid structure result */
A68_52  OMGBELA;  /* OPERATORS - mode -> union mode */
A68_85  PMGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ptcontexts);
 /* line 241: */
 /* line 242: */
{ 
WLGBELA_no = YCDBELA_ordercontexts();
 /* line 243: */
BMGBELA = ZLGBELA ;
XLGBELA.data[0] = A_UNITE(AMGBELA,mode7,7,BMGBELA);
DMGBELA.fn.fn_global = LRAAOSL_newline;
DMGBELA.nonlocals = A68_NIL;
XLGBELA.data[1] = A_UNITE(CMGBELA,mode12,12,DMGBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(EMGBELA,XLGBELA,2,A68_52 ));
 /* line 244: */
 /* line 245: */
GMGBELA = WLGBELA_no;
for ( FMGBELA_i = 1;
FMGBELA_i <= GMGBELA;
FMGBELA_i += 1 )
{ 
if ( (EPAAOSL_charsleft(LEAAOST_out)<20) )
{ 
LRAAOSL_newline(LEAAOST_out);
} 
 /* line 246: */
LMGBELA = JMGBELA ;
HMGBELA.data[0] = A_UNITE(KMGBELA,mode7,7,LMGBELA);
RLBBELA_ctno_region( FMGBELA_i, &MMGBELA );
UAKAELA_ctos( MMGBELA, &NMGBELA );
HMGBELA.data[1] = A_UNITE(OMGBELA,mode7,7,NMGBELA);
 /* line 247: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(PMGBELA,HMGBELA,2,A68_52 ));
}
 /* line 248: */
 /* line 249: */
LRAAOSL_newline(LEAAOST_out);
} 
A_PROC_EXIT(ptcontexts);
return;
} 
#undef NL

A_STATIC A68_VOID  RMGBELA_ptlibinfo(A68_97  Msg)
{ 
A68_237 * SMGBELA_ct;
A68_242  TMGBELA;  /* avoid structure result */
A68_242  UMGBELA_cr;
A68_162  VMGBELA;  /* collateral clause result */
A68_VC  WMGBELA;  /* avoid structure result */
A68_162  XMGBELA;  /* avoid structure result */
A68_162  YMGBELA_ctn;
A68_414  ZMGBELA;  /* collateral clause result */
A68_52  CNGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DNGBELA;  /* YIELD */
A68_52  ENGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FNGBELA;  /* YIELD */
A68_52  GNGBELA;  /* OPERATORS - mode -> union mode */
A68_56  HNGBELA;  /* procedure value */
A68_52  KNGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LNGBELA;  /* YIELD */
A68_VC  MNGBELA;  /* avoid structure result */
A68_52  NNGBELA;  /* OPERATORS - mode -> union mode */
A68_52  QNGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RNGBELA;  /* YIELD */
A68_VC  SNGBELA;  /* avoid structure result */
A68_52  TNGBELA;  /* OPERATORS - mode -> union mode */
A68_52  UNGBELA;  /* OPERATORS - mode -> union mode */
A68_56  VNGBELA;  /* procedure value */
A68_52  YNGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZNGBELA;  /* YIELD */
A68_52  AOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BOGBELA;  /* YIELD */
A68_52  EOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FOGBELA;  /* YIELD */
A68_52  GOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HOGBELA;  /* YIELD */
A68_52  IOGBELA;  /* OPERATORS - mode -> union mode */
A68_56  JOGBELA;  /* procedure value */
A68_52  MOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NOGBELA;  /* YIELD */
A68_52  OOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  POGBELA;  /* YIELD */
A68_52  SOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TOGBELA;  /* YIELD */
A68_52  UOGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VOGBELA;  /* YIELD */
A68_52  WOGBELA;  /* OPERATORS - mode -> union mode */
A68_56  XOGBELA;  /* procedure value */
A68_85  YOGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ptlibinfo);
 /* line 252: */
 /* line 253: */
{ 
SMGBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 254: */
AEKAELA_get_region( SMGBELA_ct, (*(&((&(HXJAELA_library->Currentct))->Import))), &TMGBELA );
UMGBELA_cr = TMGBELA;
 /* line 255: */
 /* line 256: */
if ( (UMGBELA_cr.Region==BVJAELA_nilregion) )
{ 
VMGBELA.Context = (*(&(UMGBELA_cr.Context->Name)));
 /* line 257: */
 /* line 258: */
NAAAOSI_makervc( '?', &WMGBELA );
VMGBELA.Import = WMGBELA;
} 
else
{ 
NBKAELA_ctn( UMGBELA_cr, &XMGBELA );
VMGBELA = XMGBELA;
} 
YMGBELA_ctn = VMGBELA;
 /* line 259: */
DNGBELA = BNGBELA ;
ZMGBELA.data[0] = A_UNITE(CNGBELA,mode7,7,DNGBELA);
FNGBELA = (*(&(HXJAELA_library->Name))) ;
ZMGBELA.data[1] = A_UNITE(ENGBELA,mode7,7,FNGBELA);
 /* line 260: */
HNGBELA.fn.fn_global = LRAAOSL_newline;
HNGBELA.nonlocals = A68_NIL;
ZMGBELA.data[2] = A_UNITE(GNGBELA,mode12,12,HNGBELA);
LNGBELA = JNGBELA ;
ZMGBELA.data[3] = A_UNITE(KNGBELA,mode7,7,LNGBELA);
 /* line 261: */
JIBAOST_version_str( UBKAELA_lib_version(), &MNGBELA );
ZMGBELA.data[4] = A_UNITE(NNGBELA,mode7,7,MNGBELA);
RNGBELA = PNGBELA ;
ZMGBELA.data[5] = A_UNITE(QNGBELA,mode7,7,RNGBELA);
BAKAELA_ctos( YMGBELA_ctn, &SNGBELA );
ZMGBELA.data[6] = A_UNITE(TNGBELA,mode7,7,SNGBELA);
 /* line 262: */
VNGBELA.fn.fn_global = LRAAOSL_newline;
VNGBELA.nonlocals = A68_NIL;
ZMGBELA.data[7] = A_UNITE(UNGBELA,mode12,12,VNGBELA);
ZNGBELA = XNGBELA ;
ZMGBELA.data[8] = A_UNITE(YNGBELA,mode7,7,ZNGBELA);
BOGBELA = (*(&(HXJAELA_library->Datecleared))) ;
ZMGBELA.data[9] = A_UNITE(AOGBELA,mode7,7,BOGBELA);
 /* line 263: */
FOGBELA = DOGBELA ;
ZMGBELA.data[10] = A_UNITE(EOGBELA,mode7,7,FOGBELA);
HOGBELA = (*(&(HXJAELA_library->Timecleared))) ;
ZMGBELA.data[11] = A_UNITE(GOGBELA,mode7,7,HOGBELA);
 /* line 264: */
JOGBELA.fn.fn_global = LRAAOSL_newline;
JOGBELA.nonlocals = A68_NIL;
ZMGBELA.data[12] = A_UNITE(IOGBELA,mode12,12,JOGBELA);
NOGBELA = LOGBELA ;
ZMGBELA.data[13] = A_UNITE(MOGBELA,mode7,7,NOGBELA);
POGBELA = (*(&(HXJAELA_library->Datelastwritten))) ;
ZMGBELA.data[14] = A_UNITE(OOGBELA,mode7,7,POGBELA);
 /* line 265: */
TOGBELA = ROGBELA ;
ZMGBELA.data[15] = A_UNITE(SOGBELA,mode7,7,TOGBELA);
VOGBELA = (*(&(HXJAELA_library->Timelastwritten))) ;
ZMGBELA.data[16] = A_UNITE(UOGBELA,mode7,7,VOGBELA);
XOGBELA.fn.fn_global = LRAAOSL_newline;
XOGBELA.nonlocals = A68_NIL;
ZMGBELA.data[17] = A_UNITE(WOGBELA,mode12,12,XOGBELA);
 /* line 266: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(YOGBELA,ZMGBELA,18,A68_52 ));
} 
A_PROC_EXIT(ptlibinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  APGBELA_print_full_library(A68_97  Msg)
{ 
A68_242  BPGBELA_cr;
A68_VC  CPGBELA_currentname;
A68_INT  DPGBELA_i;
A68_INT  EPGBELA;  /* to part of loop */
A68_242  FPGBELA;  /* avoid structure result */
A68_52  GPGBELA;  /* OPERATORS - mode -> union mode */
A68_56  HPGBELA;  /* procedure value */
A68_85  IPGBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(print_full_library);
 /* line 269: */
 /* line 270: */
{ 
 /* line 271: */
CPGBELA_currentname = TTCAOST_nullid;
 /* line 272: */
RMGBELA_ptlibinfo(Msg);
LRAAOSL_newline(LEAAOST_out);
DWBBELA_printsizes(Msg);
 /* line 273: */
 /* line 274: */
EPGBELA = YCDBELA_ordercontexts();
for ( DPGBELA_i = 1;
DPGBELA_i <= EPGBELA;
DPGBELA_i += 1 )
{ 
RLBBELA_ctno_region( DPGBELA_i, &FPGBELA );
BPGBELA_cr = FPGBELA;
 /* line 275: */
 /* line 276: */
if ( A_VC_NE((*(&((*(&((&BPGBELA_cr)->Context)))->Name))),CPGBELA_currentname) )
{ 
CPGBELA_currentname = (*(&((*(&((&BPGBELA_cr)->Context)))->Name)));
 /* line 277: */
HPGBELA.fn.fn_global = LRAAOSL_newline;
HPGBELA.nonlocals = A68_NIL;
GFBAOSL_put(LEAAOST_out, A_HVEC(IPGBELA,A_UNITE(GPGBELA,mode12,12,HPGBELA),A68_52 ));
 /* line 278: */
ALGBELA_printct((*(&((&BPGBELA_cr)->Context))), A68_FALSE, A68_TRUE, A68_TRUE, A68_TRUE, Msg);
 /* line 279: */
 /* line 280: */
 /* line 281: */
YCDBELA_ordercontexts();
} 
}
 /* line 282: */
} 
A_PROC_EXIT(print_full_library);
return;
} 
#undef NL

A_STATIC A68_VOID  MPGBELA_print_usage(A68_237 * Ct, A68_INT  Declno, A68_97  Msg)
{ 
A_PROC_ENTRY(print_usage);
 /* line 285: */
FJCBELA_printdecl(Ct, Declno, A68_TRUE, A68_TRUE, Msg);
A_PROC_EXIT(print_usage);
return;
} 
#undef NL
 /* line 293: */

A_STATIC A68_VOID  QPGBELA_get_optctname(A68_314  Values, A68_INT * Index, A68_97  Msg, A68_162  *ReturnedValue)
{ 
A68_INT  RPGBELA;  /* YIELD */
A68_162  SPGBELA;  /* clause result */
A68_162  TPGBELA;  /* avoid structure result */
A_PROC_ENTRY(get_optctname);
 /* line 295: */
 /* line 296: */
RPGBELA = ((*Index)+1) ;
if ( FRFAOST_is_ctname((*(&A_VINDEX(Values,RPGBELA)))) )
{ 
 /* line 297: */
 /* line 298: */
URFAOST_get_ctname( Values, Index, (*(&((&(HXJAELA_library->Currentct))->Context))), Msg, &TPGBELA );
SPGBELA = TPGBELA;
} 
else
{ 
(*Index)+=1;
 /* line 299: */
 /* line 300: */
SPGBELA = (*(&(HXJAELA_library->Currentct)));
} 
A_PROC_EXIT(get_optctname);
*ReturnedValue = (SPGBELA);
return;
} 
#undef NL
 /* line 304: */

A_STATIC A68_VOID  XPGBELA_do_ctnames(A68_314  Values, A68_97  Msg, A68_281  Do)
{ 
A68_INT  YPGBELA_index;
A68_162  ZPGBELA;  /* avoid structure result */
A_PROC_ENTRY(do_ctnames);
 /* line 305: */
 /* line 307: */
{ 
YPGBELA_index = 0;
 /* line 308: */
for ( ;; )
{ 
 /* line 309: */
if ( !((YPGBELA_index<Values.upb)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 310: */
 /* line 311: */
QPGBELA_get_optctname( Values, (&YPGBELA_index), Msg, &ZPGBELA );
A_CALLPROC(Do,(ZPGBELA, Msg),(ZPGBELA, Msg,(Do).nonlocals));
}
 /* line 312: */
} 
A_PROC_EXIT(do_ctnames);
return;
} 
#undef NL
 /* line 316: */

A_STATIC A68_VOID  DQGBELA_do_contexts(A68_314  Values, A68_97  Msg, A68_286  Do)
{ 
A68_281  GQGBELA_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(do_contexts);
 /* line 317: */
A_CLOSURE( GQGBELA_anonymous, HQGBELA_anonymous, IQGBELA_anonymous );
(( IQGBELA_anonymous * ) ( GQGBELA_anonymous.nonlocals )) -> Do = Do;
XPGBELA_do_ctnames(Values, Msg, GQGBELA_anonymous);
A_PROC_EXIT(do_contexts);
return;
} 
#undef NL

A_STATIC A68_VOID  OQGBELA_exit_command(A68_314  Params, A68_97  Msg)
{ 
A68_97  PQGBELA;  /* procedure value */
A_PROC_ENTRY(exit_command);
 /* line 326: */
PQGBELA.fn.fn_global = KFAAOST_default_msg;
PQGBELA.nonlocals = A68_NIL;
OJBBELA_finish_library(PQGBELA);
A_PROC_EXIT(exit_command);
return;
} 
#undef NL

A68_342 * QQGBELA_initialise_library(void)
{ 
A68_340 * RQGBELA_start_up;
A68_340  SQGBELA;  /* collateral clause result */
A68_VC  VQGBELA;  /* avoid structure result */
A68_VC  YQGBELA;  /* avoid structure result */
A68_344  ZQGBELA;  /* OPERATORS - mode -> union mode */
A68_336  ERGBELA;  /* OPERATORS - mode -> union mode */
A68_338  FRGBELA;  /* YIELD */
A68_338  GRGBELA;  /* procedure value */
A68_433  IRGBELA;  /* collateral clause result */
A68_425  KRGBELA;  /* collateral clause result */
A68_340  LRGBELA;  /* collateral clause result */
A68_VC  ORGBELA;  /* avoid structure result */
A68_VC  PRGBELA;  /* avoid structure result */
A68_VC  SRGBELA;  /* avoid structure result */
A68_344  TRGBELA;  /* OPERATORS - mode -> union mode */
A68_336  XRGBELA;  /* OPERATORS - mode -> union mode */
A68_338  YRGBELA;  /* YIELD */
A68_338  ZRGBELA;  /* procedure value */
A68_340 * ASGBELA;  /* YIELD */
A68_339  BSGBELA;  /* OPERATORS - mode -> union mode */
A68_340  CSGBELA;  /* collateral clause result */
A68_VC  FSGBELA;  /* avoid structure result */
A68_VC  GSGBELA;  /* avoid structure result */
A68_310  HSGBELA;  /* avoid structure result */
A68_312  ISGBELA;  /* OPERATORS - mode -> union mode */
A68_310  JSGBELA;  /* avoid structure result */
A68_312  KSGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NSGBELA;  /* avoid structure result */
A68_344  OSGBELA;  /* OPERATORS - mode -> union mode */
A68_336  WSGBELA;  /* OPERATORS - mode -> union mode */
A68_338  XSGBELA;  /* YIELD */
A68_338  YSGBELA;  /* procedure value */
A68_340 * ZSGBELA;  /* YIELD */
A68_339  ATGBELA;  /* OPERATORS - mode -> union mode */
A68_340  BTGBELA;  /* collateral clause result */
A68_VC  ETGBELA;  /* avoid structure result */
A68_VC  FTGBELA;  /* avoid structure result */
A68_310  GTGBELA;  /* avoid structure result */
A68_312  HTGBELA;  /* OPERATORS - mode -> union mode */
A68_310  ITGBELA;  /* avoid structure result */
A68_312  JTGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MTGBELA;  /* avoid structure result */
A68_344  NTGBELA;  /* OPERATORS - mode -> union mode */
A68_336  VTGBELA;  /* OPERATORS - mode -> union mode */
A68_338  WTGBELA;  /* YIELD */
A68_338  XTGBELA;  /* procedure value */
A68_340 * YTGBELA;  /* YIELD */
A68_339  ZTGBELA;  /* OPERATORS - mode -> union mode */
A68_343  AUGBELA;  /* OPERATORS - istruct -> vector */
A68_VC  BUGBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_339  DUGBELA;  /* OPERATORS - mode -> union mode */
A68_341 * EUGBELA;  /* YIELD */
A68_340  FUGBELA;  /* collateral clause result */
A68_VC  IUGBELA;  /* avoid structure result */
A68_VC  JUGBELA;  /* avoid structure result */
A68_VC  MUGBELA;  /* avoid structure result */
A68_344  NUGBELA;  /* OPERATORS - mode -> union mode */
A68_336  RUGBELA;  /* OPERATORS - mode -> union mode */
A68_338  SUGBELA;  /* YIELD */
A68_338  TUGBELA;  /* procedure value */
A68_340 * UUGBELA;  /* YIELD */
A68_339  VUGBELA;  /* OPERATORS - mode -> union mode */
A68_340  WUGBELA;  /* collateral clause result */
A68_VC  ZUGBELA;  /* avoid structure result */
A68_VC  AVGBELA;  /* avoid structure result */
A68_310  BVGBELA;  /* avoid structure result */
A68_312  CVGBELA;  /* OPERATORS - mode -> union mode */
A68_310  DVGBELA;  /* avoid structure result */
A68_312  EVGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HVGBELA;  /* avoid structure result */
A68_344  IVGBELA;  /* OPERATORS - mode -> union mode */
A68_336  QVGBELA;  /* OPERATORS - mode -> union mode */
A68_338  RVGBELA;  /* YIELD */
A68_338  SVGBELA;  /* procedure value */
A68_340 * TVGBELA;  /* YIELD */
A68_339  UVGBELA;  /* OPERATORS - mode -> union mode */
A68_340  VVGBELA;  /* collateral clause result */
A68_VC  YVGBELA;  /* avoid structure result */
A68_VC  ZVGBELA;  /* avoid structure result */
A68_310  AWGBELA;  /* avoid structure result */
A68_312  BWGBELA;  /* OPERATORS - mode -> union mode */
A68_310  CWGBELA;  /* avoid structure result */
A68_312  DWGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GWGBELA;  /* avoid structure result */
A68_344  HWGBELA;  /* OPERATORS - mode -> union mode */
A68_336  PWGBELA;  /* OPERATORS - mode -> union mode */
A68_338  QWGBELA;  /* YIELD */
A68_338  RWGBELA;  /* procedure value */
A68_340 * SWGBELA;  /* YIELD */
A68_339  TWGBELA;  /* OPERATORS - mode -> union mode */
A68_340  UWGBELA;  /* collateral clause result */
A68_VC  XWGBELA;  /* avoid structure result */
A68_VC  YWGBELA;  /* avoid structure result */
A68_310  ZWGBELA;  /* avoid structure result */
A68_312  AXGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DXGBELA;  /* avoid structure result */
A68_344  EXGBELA;  /* OPERATORS - mode -> union mode */
A68_336  NXGBELA;  /* OPERATORS - mode -> union mode */
A68_338  OXGBELA;  /* YIELD */
A68_338  PXGBELA;  /* procedure value */
A68_340 * QXGBELA;  /* YIELD */
A68_339  RXGBELA;  /* OPERATORS - mode -> union mode */
A68_340  SXGBELA;  /* collateral clause result */
A68_VC  VXGBELA;  /* avoid structure result */
A68_VC  WXGBELA;  /* avoid structure result */
A68_310  XXGBELA;  /* avoid structure result */
A68_312  YXGBELA;  /* OPERATORS - mode -> union mode */
A68_310  ZXGBELA;  /* avoid structure result */
A68_312  AYGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DYGBELA;  /* avoid structure result */
A68_344  EYGBELA;  /* OPERATORS - mode -> union mode */
A68_336  MYGBELA;  /* OPERATORS - mode -> union mode */
A68_338  NYGBELA;  /* YIELD */
A68_338  OYGBELA;  /* procedure value */
A68_340 * PYGBELA;  /* YIELD */
A68_339  QYGBELA;  /* OPERATORS - mode -> union mode */
A68_340  RYGBELA;  /* collateral clause result */
A68_VC  UYGBELA;  /* avoid structure result */
A68_VC  VYGBELA;  /* avoid structure result */
A68_431  WYGBELA;  /* collateral clause result */
A68_310  XYGBELA;  /* avoid structure result */
A68_312  YYGBELA;  /* OPERATORS - mode -> union mode */
A68_310  ZYGBELA;  /* avoid structure result */
A68_312  AZGBELA;  /* OPERATORS - mode -> union mode */
A68_311  BZGBELA;  /* OPERATORS - istruct -> vector */
A68_310  CZGBELA;  /* avoid structure result */
A68_312  DZGBELA;  /* OPERATORS - mode -> union mode */
A68_310  EZGBELA;  /* avoid structure result */
A68_312  FZGBELA;  /* OPERATORS - mode -> union mode */
A68_310  GZGBELA;  /* avoid structure result */
A68_312  HZGBELA;  /* OPERATORS - mode -> union mode */
A68_VC  KZGBELA;  /* avoid structure result */
A68_344  LZGBELA;  /* OPERATORS - mode -> union mode */
A68_336  UZGBELA;  /* OPERATORS - mode -> union mode */
A68_338  VZGBELA;  /* YIELD */
A68_338  WZGBELA;  /* procedure value */
A68_340 * XZGBELA;  /* YIELD */
A68_339  YZGBELA;  /* OPERATORS - mode -> union mode */
A68_343  ZZGBELA;  /* OPERATORS - istruct -> vector */
A68_VC  AAHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_339  CAHBELA;  /* OPERATORS - mode -> union mode */
A68_341 * DAHBELA;  /* YIELD */
A68_343  EAHBELA;  /* avoid structure result */
A68_343  FAHBELA_lib_global_commands;
A68_461  GAHBELA;  /* collateral clause result */
A68_425  IAHBELA;  /* collateral clause result */
A68_340  JAHBELA;  /* collateral clause result */
A68_VC  MAHBELA;  /* avoid structure result */
A68_VC  NAHBELA;  /* avoid structure result */
A68_310  OAHBELA;  /* avoid structure result */
A68_312  PAHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SAHBELA;  /* avoid structure result */
A68_344  TAHBELA;  /* OPERATORS - mode -> union mode */
A68_336  CBHBELA;  /* OPERATORS - mode -> union mode */
A68_338  DBHBELA;  /* YIELD */
A68_338  EBHBELA;  /* procedure value */
A68_340 * FBHBELA;  /* YIELD */
A68_339  GBHBELA;  /* OPERATORS - mode -> union mode */
A68_340  HBHBELA;  /* collateral clause result */
A68_VC  KBHBELA;  /* avoid structure result */
A68_VC  LBHBELA;  /* avoid structure result */
A68_310  MBHBELA;  /* avoid structure result */
A68_312  NBHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QBHBELA;  /* avoid structure result */
A68_344  RBHBELA;  /* OPERATORS - mode -> union mode */
A68_336  BCHBELA;  /* OPERATORS - mode -> union mode */
A68_338  CCHBELA;  /* YIELD */
A68_338  DCHBELA;  /* procedure value */
A68_340 * ECHBELA;  /* YIELD */
A68_339  FCHBELA;  /* OPERATORS - mode -> union mode */
A68_340  GCHBELA;  /* collateral clause result */
A68_VC  JCHBELA;  /* avoid structure result */
A68_VC  MCHBELA;  /* avoid structure result */
A68_VC  PCHBELA;  /* avoid structure result */
A68_344  QCHBELA;  /* OPERATORS - mode -> union mode */
A68_336  WCHBELA;  /* OPERATORS - mode -> union mode */
A68_338  XCHBELA;  /* YIELD */
A68_338  YCHBELA;  /* procedure value */
A68_340 * ZCHBELA;  /* YIELD */
A68_339  ADHBELA;  /* OPERATORS - mode -> union mode */
A68_343  BDHBELA;  /* OPERATORS - istruct -> vector */
A68_VC  CDHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_339  EDHBELA;  /* OPERATORS - mode -> union mode */
A68_341 * FDHBELA;  /* YIELD */
A68_442  IDHBELA;  /* collateral clause result */
A68_340  JDHBELA;  /* collateral clause result */
A68_VC  MDHBELA;  /* avoid structure result */
A68_VC  PDHBELA;  /* avoid structure result */
A68_344  QDHBELA;  /* OPERATORS - mode -> union mode */
A68_336  UDHBELA;  /* OPERATORS - mode -> union mode */
A68_338  VDHBELA;  /* YIELD */
A68_338  WDHBELA;  /* procedure value */
A68_340 * XDHBELA;  /* YIELD */
A68_339  YDHBELA;  /* OPERATORS - mode -> union mode */
A68_340  ZDHBELA;  /* collateral clause result */
A68_VC  CEHBELA;  /* avoid structure result */
A68_310  DEHBELA;  /* avoid structure result */
A68_312  EEHBELA;  /* OPERATORS - mode -> union mode */
A68_310  FEHBELA;  /* avoid structure result */
A68_312  GEHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JEHBELA;  /* avoid structure result */
A68_344  KEHBELA;  /* OPERATORS - mode -> union mode */
A68_336  PEHBELA;  /* OPERATORS - mode -> union mode */
A68_338  QEHBELA;  /* YIELD */
A68_338  REHBELA;  /* procedure value */
A68_340 * SEHBELA;  /* YIELD */
A68_339  TEHBELA;  /* OPERATORS - mode -> union mode */
A68_340  UEHBELA;  /* collateral clause result */
A68_VC  XEHBELA;  /* avoid structure result */
A68_310  YEHBELA;  /* avoid structure result */
A68_312  ZEHBELA;  /* OPERATORS - mode -> union mode */
A68_310  AFHBELA;  /* avoid structure result */
A68_312  BFHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  EFHBELA;  /* avoid structure result */
A68_344  FFHBELA;  /* OPERATORS - mode -> union mode */
A68_336  KFHBELA;  /* OPERATORS - mode -> union mode */
A68_338  LFHBELA;  /* YIELD */
A68_338  MFHBELA;  /* procedure value */
A68_340 * NFHBELA;  /* YIELD */
A68_339  OFHBELA;  /* OPERATORS - mode -> union mode */
A68_340  PFHBELA;  /* collateral clause result */
A68_VC  SFHBELA;  /* avoid structure result */
A68_431  TFHBELA;  /* collateral clause result */
A68_310  UFHBELA;  /* avoid structure result */
A68_312  VFHBELA;  /* OPERATORS - mode -> union mode */
A68_310  WFHBELA;  /* avoid structure result */
A68_312  XFHBELA;  /* OPERATORS - mode -> union mode */
A68_311  YFHBELA;  /* OPERATORS - istruct -> vector */
A68_310  ZFHBELA;  /* avoid structure result */
A68_312  AGHBELA;  /* OPERATORS - mode -> union mode */
A68_310  BGHBELA;  /* avoid structure result */
A68_312  CGHBELA;  /* OPERATORS - mode -> union mode */
A68_310  DGHBELA;  /* avoid structure result */
A68_312  EGHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HGHBELA;  /* avoid structure result */
A68_344  IGHBELA;  /* OPERATORS - mode -> union mode */
A68_336  RGHBELA;  /* OPERATORS - mode -> union mode */
A68_338  SGHBELA;  /* YIELD */
A68_338  TGHBELA;  /* procedure value */
A68_340 * UGHBELA;  /* YIELD */
A68_339  VGHBELA;  /* OPERATORS - mode -> union mode */
A68_343  WGHBELA;  /* OPERATORS - istruct -> vector */
A68_339  ZGHBELA;  /* OPERATORS - mode -> union mode */
A68_341 * AHHBELA;  /* YIELD */
A68_445  CHHBELA;  /* collateral clause result */
A68_340  DHHBELA;  /* collateral clause result */
A68_VC  GHHBELA;  /* avoid structure result */
A68_VC  HHHBELA;  /* avoid structure result */
A68_310  IHHBELA;  /* avoid structure result */
A68_312  JHHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MHHBELA;  /* avoid structure result */
A68_344  NHHBELA;  /* OPERATORS - mode -> union mode */
A68_336  XHHBELA;  /* OPERATORS - mode -> union mode */
A68_338  YHHBELA;  /* YIELD */
A68_338  ZHHBELA;  /* procedure value */
A68_340 * AIHBELA;  /* YIELD */
A68_339  BIHBELA;  /* OPERATORS - mode -> union mode */
A68_340  CIHBELA;  /* collateral clause result */
A68_VC  FIHBELA;  /* avoid structure result */
A68_VC  GIHBELA;  /* avoid structure result */
A68_310  HIHBELA;  /* avoid structure result */
A68_312  IIHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LIHBELA;  /* avoid structure result */
A68_344  MIHBELA;  /* OPERATORS - mode -> union mode */
A68_336  XIHBELA;  /* OPERATORS - mode -> union mode */
A68_338  YIHBELA;  /* YIELD */
A68_338  ZIHBELA;  /* procedure value */
A68_340 * AJHBELA;  /* YIELD */
A68_339  BJHBELA;  /* OPERATORS - mode -> union mode */
A68_343  CJHBELA;  /* OPERATORS - istruct -> vector */
A68_VC  DJHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_339  FJHBELA;  /* OPERATORS - mode -> union mode */
A68_341 * GJHBELA;  /* YIELD */
A68_445  IJHBELA;  /* collateral clause result */
A68_340  JJHBELA;  /* collateral clause result */
A68_VC  MJHBELA;  /* avoid structure result */
A68_VC  NJHBELA;  /* avoid structure result */
A68_431  OJHBELA;  /* collateral clause result */
A68_310  PJHBELA;  /* avoid structure result */
A68_312  QJHBELA;  /* OPERATORS - mode -> union mode */
A68_311  RJHBELA;  /* OPERATORS - istruct -> vector */
A68_310  SJHBELA;  /* avoid structure result */
A68_312  TJHBELA;  /* OPERATORS - mode -> union mode */
A68_310  UJHBELA;  /* avoid structure result */
A68_312  VJHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YJHBELA;  /* avoid structure result */
A68_344  ZJHBELA;  /* OPERATORS - mode -> union mode */
A68_336  HKHBELA;  /* OPERATORS - mode -> union mode */
A68_338  IKHBELA;  /* YIELD */
A68_338  JKHBELA;  /* procedure value */
A68_340 * KKHBELA;  /* YIELD */
A68_339  LKHBELA;  /* OPERATORS - mode -> union mode */
A68_340  MKHBELA;  /* collateral clause result */
A68_VC  PKHBELA;  /* avoid structure result */
A68_VC  QKHBELA;  /* avoid structure result */
A68_310  RKHBELA;  /* avoid structure result */
A68_312  SKHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VKHBELA;  /* avoid structure result */
A68_344  WKHBELA;  /* OPERATORS - mode -> union mode */
A68_336  GLHBELA;  /* OPERATORS - mode -> union mode */
A68_338  HLHBELA;  /* YIELD */
A68_338  ILHBELA;  /* procedure value */
A68_340 * JLHBELA;  /* YIELD */
A68_339  KLHBELA;  /* OPERATORS - mode -> union mode */
A68_343  LLHBELA;  /* OPERATORS - istruct -> vector */
A68_VC  MLHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_339  OLHBELA;  /* OPERATORS - mode -> union mode */
A68_341 * PLHBELA;  /* YIELD */
A68_445  RLHBELA;  /* collateral clause result */
A68_340  SLHBELA;  /* collateral clause result */
A68_VC  VLHBELA;  /* avoid structure result */
A68_VC  WLHBELA;  /* avoid structure result */
A68_431  XLHBELA;  /* collateral clause result */
A68_310  YLHBELA;  /* avoid structure result */
A68_312  ZLHBELA;  /* OPERATORS - mode -> union mode */
A68_311  AMHBELA;  /* OPERATORS - istruct -> vector */
A68_310  BMHBELA;  /* avoid structure result */
A68_312  CMHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FMHBELA;  /* avoid structure result */
A68_344  GMHBELA;  /* OPERATORS - mode -> union mode */
A68_336  MMHBELA;  /* OPERATORS - mode -> union mode */
A68_338  NMHBELA;  /* YIELD */
A68_338  OMHBELA;  /* procedure value */
A68_340 * PMHBELA;  /* YIELD */
A68_339  QMHBELA;  /* OPERATORS - mode -> union mode */
A68_340  RMHBELA;  /* collateral clause result */
A68_VC  UMHBELA;  /* avoid structure result */
A68_VC  VMHBELA;  /* avoid structure result */
A68_VC  YMHBELA;  /* avoid structure result */
A68_344  ZMHBELA;  /* OPERATORS - mode -> union mode */
A68_336  HNHBELA;  /* OPERATORS - mode -> union mode */
A68_338  INHBELA;  /* YIELD */
A68_338  JNHBELA;  /* procedure value */
A68_340 * KNHBELA;  /* YIELD */
A68_339  LNHBELA;  /* OPERATORS - mode -> union mode */
A68_343  MNHBELA;  /* OPERATORS - istruct -> vector */
A68_VC  NNHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_339  PNHBELA;  /* OPERATORS - mode -> union mode */
A68_341 * QNHBELA;  /* YIELD */
A68_340  RNHBELA;  /* collateral clause result */
A68_VC  UNHBELA;  /* avoid structure result */
A68_310  VNHBELA;  /* avoid structure result */
A68_312  WNHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZNHBELA;  /* avoid structure result */
A68_344  AOHBELA;  /* OPERATORS - mode -> union mode */
A68_336  JOHBELA;  /* OPERATORS - mode -> union mode */
A68_338  KOHBELA;  /* YIELD */
A68_338  LOHBELA;  /* procedure value */
A68_340 * MOHBELA;  /* YIELD */
A68_339  NOHBELA;  /* OPERATORS - mode -> union mode */
A68_340  OOHBELA;  /* collateral clause result */
A68_VC  ROHBELA;  /* avoid structure result */
A68_310  SOHBELA;  /* avoid structure result */
A68_312  TOHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WOHBELA;  /* avoid structure result */
A68_344  XOHBELA;  /* OPERATORS - mode -> union mode */
A68_336  FPHBELA;  /* OPERATORS - mode -> union mode */
A68_338  GPHBELA;  /* YIELD */
A68_338  HPHBELA;  /* procedure value */
A68_340 * IPHBELA;  /* YIELD */
A68_339  JPHBELA;  /* OPERATORS - mode -> union mode */
A68_340  KPHBELA;  /* collateral clause result */
A68_VC  NPHBELA;  /* avoid structure result */
A68_431  OPHBELA;  /* collateral clause result */
A68_311  PPHBELA;  /* OPERATORS - istruct -> vector */
A68_310  QPHBELA;  /* avoid structure result */
A68_312  RPHBELA;  /* OPERATORS - mode -> union mode */
A68_310  SPHBELA;  /* avoid structure result */
A68_312  TPHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WPHBELA;  /* avoid structure result */
A68_344  XPHBELA;  /* OPERATORS - mode -> union mode */
A68_336  JQHBELA;  /* OPERATORS - mode -> union mode */
A68_338  KQHBELA;  /* YIELD */
A68_338  LQHBELA;  /* procedure value */
A68_340 * MQHBELA;  /* YIELD */
A68_339  NQHBELA;  /* OPERATORS - mode -> union mode */
A68_340  OQHBELA;  /* collateral clause result */
A68_VC  RQHBELA;  /* avoid structure result */
A68_VC  UQHBELA;  /* avoid structure result */
A68_431  VQHBELA;  /* collateral clause result */
A68_310  WQHBELA;  /* avoid structure result */
A68_312  XQHBELA;  /* OPERATORS - mode -> union mode */
A68_310  YQHBELA;  /* avoid structure result */
A68_312  ZQHBELA;  /* OPERATORS - mode -> union mode */
A68_311  ARHBELA;  /* OPERATORS - istruct -> vector */
A68_310  BRHBELA;  /* avoid structure result */
A68_312  CRHBELA;  /* OPERATORS - mode -> union mode */
A68_310  DRHBELA;  /* avoid structure result */
A68_312  ERHBELA;  /* OPERATORS - mode -> union mode */
A68_310  FRHBELA;  /* avoid structure result */
A68_312  GRHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JRHBELA;  /* avoid structure result */
A68_344  KRHBELA;  /* OPERATORS - mode -> union mode */
A68_336  TRHBELA;  /* OPERATORS - mode -> union mode */
A68_338  URHBELA;  /* YIELD */
A68_338  VRHBELA;  /* procedure value */
A68_340 * WRHBELA;  /* YIELD */
A68_339  XRHBELA;  /* OPERATORS - mode -> union mode */
A68_340  YRHBELA;  /* collateral clause result */
A68_VC  BSHBELA;  /* avoid structure result */
A68_VC  ESHBELA;  /* avoid structure result */
A68_344  FSHBELA;  /* OPERATORS - mode -> union mode */
A68_336  JSHBELA;  /* OPERATORS - mode -> union mode */
A68_338  KSHBELA;  /* YIELD */
A68_338  LSHBELA;  /* procedure value */
A68_340 * MSHBELA;  /* YIELD */
A68_339  NSHBELA;  /* OPERATORS - mode -> union mode */
A68_340  OSHBELA;  /* collateral clause result */
A68_VC  RSHBELA;  /* avoid structure result */
A68_VC  USHBELA;  /* avoid structure result */
A68_344  VSHBELA;  /* OPERATORS - mode -> union mode */
A68_336  ETHBELA;  /* OPERATORS - mode -> union mode */
A68_338  FTHBELA;  /* YIELD */
A68_338  GTHBELA;  /* procedure value */
A68_340 * HTHBELA;  /* YIELD */
A68_339  ITHBELA;  /* OPERATORS - mode -> union mode */
A68_340  JTHBELA;  /* collateral clause result */
A68_VC  MTHBELA;  /* avoid structure result */
A68_VC  PTHBELA;  /* avoid structure result */
A68_344  QTHBELA;  /* OPERATORS - mode -> union mode */
A68_336  UTHBELA;  /* OPERATORS - mode -> union mode */
A68_338  VTHBELA;  /* YIELD */
A68_338  WTHBELA;  /* procedure value */
A68_340 * XTHBELA;  /* YIELD */
A68_339  YTHBELA;  /* OPERATORS - mode -> union mode */
A68_340  ZTHBELA;  /* collateral clause result */
A68_VC  CUHBELA;  /* avoid structure result */
A68_VC  DUHBELA;  /* avoid structure result */
A68_310  EUHBELA;  /* avoid structure result */
A68_312  FUHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IUHBELA;  /* avoid structure result */
A68_344  JUHBELA;  /* OPERATORS - mode -> union mode */
A68_336  SUHBELA;  /* OPERATORS - mode -> union mode */
A68_338  TUHBELA;  /* YIELD */
A68_338  UUHBELA;  /* procedure value */
A68_340 * VUHBELA;  /* YIELD */
A68_339  WUHBELA;  /* OPERATORS - mode -> union mode */
A68_340  XUHBELA;  /* collateral clause result */
A68_VC  AVHBELA;  /* avoid structure result */
A68_VC  DVHBELA;  /* avoid structure result */
A68_310  EVHBELA;  /* avoid structure result */
A68_312  FVHBELA;  /* OPERATORS - mode -> union mode */
A68_310  GVHBELA;  /* avoid structure result */
A68_312  HVHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  KVHBELA;  /* avoid structure result */
A68_344  LVHBELA;  /* OPERATORS - mode -> union mode */
A68_336  QVHBELA;  /* OPERATORS - mode -> union mode */
A68_338  RVHBELA;  /* YIELD */
A68_338  SVHBELA;  /* procedure value */
A68_340 * TVHBELA;  /* YIELD */
A68_339  UVHBELA;  /* OPERATORS - mode -> union mode */
A68_340  VVHBELA;  /* collateral clause result */
A68_VC  YVHBELA;  /* avoid structure result */
A68_VC  BWHBELA;  /* avoid structure result */
A68_VC  EWHBELA;  /* avoid structure result */
A68_344  FWHBELA;  /* OPERATORS - mode -> union mode */
A68_336  OWHBELA;  /* OPERATORS - mode -> union mode */
A68_338  PWHBELA;  /* YIELD */
A68_338  QWHBELA;  /* procedure value */
A68_340 * RWHBELA;  /* YIELD */
A68_339  SWHBELA;  /* OPERATORS - mode -> union mode */
A68_340  TWHBELA;  /* collateral clause result */
A68_VC  WWHBELA;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} XWHBELA; 
A68_344  YWHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZWHBELA;  /* YIELD */
A68_336  AXHBELA;  /* OPERATORS - mode -> union mode */
A68_338  BXHBELA;  /* YIELD */
A68_338  CXHBELA;  /* procedure value */
A68_340 * DXHBELA;  /* YIELD */
A68_339  EXHBELA;  /* OPERATORS - mode -> union mode */
A68_340  FXHBELA;  /* collateral clause result */
A68_VC  IXHBELA;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} JXHBELA; 
A68_344  KXHBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LXHBELA;  /* YIELD */
A68_336  MXHBELA;  /* OPERATORS - mode -> union mode */
A68_338  NXHBELA;  /* YIELD */
A68_338  OXHBELA;  /* procedure value */
A68_340 * PXHBELA;  /* YIELD */
A68_339  QXHBELA;  /* OPERATORS - mode -> union mode */
A68_340  RXHBELA;  /* collateral clause result */
A68_VC  UXHBELA;  /* avoid structure result */
A68_VC  XXHBELA;  /* avoid structure result */
A68_344  YXHBELA;  /* OPERATORS - mode -> union mode */
A68_336  MYHBELA;  /* OPERATORS - mode -> union mode */
A68_338  NYHBELA;  /* YIELD */
A68_338  OYHBELA;  /* procedure value */
A68_340 * PYHBELA;  /* YIELD */
A68_339  QYHBELA;  /* OPERATORS - mode -> union mode */
A68_343  RYHBELA;  /* OPERATORS - istruct -> vector */
A68_343  SYHBELA;  /* avoid structure result */
A68_343  TYHBELA_lib_local_commands;
A68_342 * VYHBELA;  /* clause result */
A68_336  WYHBELA;  /* OPERATORS - mode -> union mode */
A68_337  XYHBELA;  /* procedure value */
A_PROC_ENTRY(initialise_library);
{ 
RQGBELA_start_up = (A_HEAP(A68_340 ));
 /* line 334: */
ZAAAOSI_makervc( UQGBELA, &VQGBELA );
SQGBELA.Name = VQGBELA;
SQGBELA.Abreviation = EOAAOSL_nullstr;
SQGBELA.Parameter = SRAAOST_noparameters;
SQGBELA.Access = XMDAOST_normalaccess;
 /* line 335: */
SQGBELA.Continuation = ZNDAOST_continue;
 /* line 336: */
ZAAAOSI_makervc( XQGBELA, &YQGBELA );
SQGBELA.Help = A_UNITE(ZQGBELA,mode1,1,YQGBELA);
GRGBELA.fn.fn_global = CRGBELA_anonymous;
GRGBELA.nonlocals = A68_NIL;
FRGBELA = GRGBELA ;
SQGBELA.Command = A_UNITE(ERGBELA,mode3,3,FRGBELA);
(*RQGBELA_start_up) = SQGBELA;
 /* line 345: */
 /* line 346: */
 /* line 347: */
 /* line 349: */
 /* line 350: */
 /* line 352: */
 /* line 353: */
ZAAAOSI_makervc( NRGBELA, &ORGBELA );
LRGBELA.Name = ORGBELA;
NAAAOSI_makervc( 'L', &PRGBELA );
LRGBELA.Abreviation = PRGBELA;
 /* line 354: */
LRGBELA.Parameter = SRAAOST_noparameters;
LRGBELA.Access = XMDAOST_normalaccess;
 /* line 356: */
LRGBELA.Continuation = ZNDAOST_continue;
 /* line 357: */
 /* line 358: */
ZAAAOSI_makervc( RRGBELA, &SRGBELA );
LRGBELA.Help = A_UNITE(TRGBELA,mode1,1,SRGBELA);
ZRGBELA.fn.fn_global = WRGBELA_anonymous;
ZRGBELA.nonlocals = A68_NIL;
YRGBELA = ZRGBELA ;
LRGBELA.Command = A_UNITE(XRGBELA,mode3,3,YRGBELA);
 /* line 363: */
ASGBELA = A_HEAP(A68_340 ) ;
(*ASGBELA) = LRGBELA ;
KRGBELA.data[0] = A_UNITE(BSGBELA,mode1,1,ASGBELA);
 /* line 364: */
ZAAAOSI_makervc( ESGBELA, &FSGBELA );
CSGBELA.Name = FSGBELA;
NAAAOSI_makervc( 'C', &GSGBELA );
CSGBELA.Abreviation = GSGBELA;
 /* line 365: */
LTAAOST_opt( WPFAOST_contextname_syntax, &HSGBELA );
DUAAOST_star( A_UNITE(ISGBELA,mode2,2,HSGBELA), &JSGBELA );
CSGBELA.Parameter = A_UNITE(KSGBELA,mode2,2,JSGBELA);
CSGBELA.Access = XMDAOST_normalaccess;
 /* line 367: */
CSGBELA.Continuation = ZNDAOST_continue;
 /* line 368: */
 /* line 369: */
ZAAAOSI_makervc( MSGBELA, &NSGBELA );
CSGBELA.Help = A_UNITE(OSGBELA,mode1,1,NSGBELA);
YSGBELA.fn.fn_global = RSGBELA_anonymous;
YSGBELA.nonlocals = A68_NIL;
XSGBELA = YSGBELA ;
CSGBELA.Command = A_UNITE(WSGBELA,mode3,3,XSGBELA);
 /* line 375: */
ZSGBELA = A_HEAP(A68_340 ) ;
(*ZSGBELA) = CSGBELA ;
KRGBELA.data[1] = A_UNITE(ATGBELA,mode1,1,ZSGBELA);
 /* line 376: */
ZAAAOSI_makervc( DTGBELA, &ETGBELA );
BTGBELA.Name = ETGBELA;
NAAAOSI_makervc( 'D', &FTGBELA );
BTGBELA.Abreviation = FTGBELA;
 /* line 377: */
LTAAOST_opt( WPFAOST_contextname_syntax, &GTGBELA );
DUAAOST_star( A_UNITE(HTGBELA,mode2,2,GTGBELA), &ITGBELA );
BTGBELA.Parameter = A_UNITE(JTGBELA,mode2,2,ITGBELA);
BTGBELA.Access = XMDAOST_normalaccess;
 /* line 379: */
BTGBELA.Continuation = ZNDAOST_continue;
 /* line 380: */
 /* line 381: */
ZAAAOSI_makervc( LTGBELA, &MTGBELA );
BTGBELA.Help = A_UNITE(NTGBELA,mode1,1,MTGBELA);
 /* line 386: */
XTGBELA.fn.fn_global = QTGBELA_anonymous;
XTGBELA.nonlocals = A68_NIL;
WTGBELA = XTGBELA ;
BTGBELA.Command = A_UNITE(VTGBELA,mode3,3,WTGBELA);
YTGBELA = A_HEAP(A68_340 ) ;
(*YTGBELA) = BTGBELA ;
KRGBELA.data[2] = A_UNITE(ZTGBELA,mode1,1,YTGBELA);
 /* line 389: */
EUGBELA = NSDAOST_make_group(CUGBELA, A_HVEC(BUGBELA,'F',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(AUGBELA,KRGBELA,3,A68_339 )) ;
IRGBELA.data[0] = A_UNITE(DUGBELA,mode2,2,EUGBELA);
 /* line 390: */
ZAAAOSI_makervc( HUGBELA, &IUGBELA );
FUGBELA.Name = IUGBELA;
NAAAOSI_makervc( 'L', &JUGBELA );
FUGBELA.Abreviation = JUGBELA;
FUGBELA.Parameter = SRAAOST_noparameters;
FUGBELA.Access = XMDAOST_normalaccess;
 /* line 391: */
FUGBELA.Continuation = ZNDAOST_continue;
 /* line 392: */
ZAAAOSI_makervc( LUGBELA, &MUGBELA );
FUGBELA.Help = A_UNITE(NUGBELA,mode1,1,MUGBELA);
TUGBELA.fn.fn_global = QUGBELA_anonymous;
TUGBELA.nonlocals = A68_NIL;
SUGBELA = TUGBELA ;
FUGBELA.Command = A_UNITE(RUGBELA,mode3,3,SUGBELA);
 /* line 397: */
UUGBELA = A_HEAP(A68_340 ) ;
(*UUGBELA) = FUGBELA ;
IRGBELA.data[1] = A_UNITE(VUGBELA,mode1,1,UUGBELA);
 /* line 398: */
ZAAAOSI_makervc( YUGBELA, &ZUGBELA );
WUGBELA.Name = ZUGBELA;
NAAAOSI_makervc( 'C', &AVGBELA );
WUGBELA.Abreviation = AVGBELA;
 /* line 399: */
LTAAOST_opt( WPFAOST_contextname_syntax, &BVGBELA );
DUAAOST_star( A_UNITE(CVGBELA,mode2,2,BVGBELA), &DVGBELA );
WUGBELA.Parameter = A_UNITE(EVGBELA,mode2,2,DVGBELA);
WUGBELA.Access = XMDAOST_normalaccess;
 /* line 401: */
WUGBELA.Continuation = ZNDAOST_continue;
 /* line 402: */
ZAAAOSI_makervc( GVGBELA, &HVGBELA );
WUGBELA.Help = A_UNITE(IVGBELA,mode1,1,HVGBELA);
SVGBELA.fn.fn_global = LVGBELA_anonymous;
SVGBELA.nonlocals = A68_NIL;
RVGBELA = SVGBELA ;
WUGBELA.Command = A_UNITE(QVGBELA,mode3,3,RVGBELA);
 /* line 408: */
TVGBELA = A_HEAP(A68_340 ) ;
(*TVGBELA) = WUGBELA ;
IRGBELA.data[2] = A_UNITE(UVGBELA,mode1,1,TVGBELA);
 /* line 409: */
ZAAAOSI_makervc( XVGBELA, &YVGBELA );
VVGBELA.Name = YVGBELA;
NAAAOSI_makervc( 'D', &ZVGBELA );
VVGBELA.Abreviation = ZVGBELA;
 /* line 410: */
LTAAOST_opt( WPFAOST_contextname_syntax, &AWGBELA );
DUAAOST_star( A_UNITE(BWGBELA,mode2,2,AWGBELA), &CWGBELA );
VVGBELA.Parameter = A_UNITE(DWGBELA,mode2,2,CWGBELA);
VVGBELA.Access = XMDAOST_normalaccess;
 /* line 412: */
VVGBELA.Continuation = ZNDAOST_continue;
 /* line 413: */
ZAAAOSI_makervc( FWGBELA, &GWGBELA );
VVGBELA.Help = A_UNITE(HWGBELA,mode1,1,GWGBELA);
RWGBELA.fn.fn_global = KWGBELA_anonymous;
RWGBELA.nonlocals = A68_NIL;
QWGBELA = RWGBELA ;
VVGBELA.Command = A_UNITE(PWGBELA,mode3,3,QWGBELA);
 /* line 419: */
SWGBELA = A_HEAP(A68_340 ) ;
(*SWGBELA) = VVGBELA ;
IRGBELA.data[3] = A_UNITE(TWGBELA,mode1,1,SWGBELA);
 /* line 420: */
ZAAAOSI_makervc( WWGBELA, &XWGBELA );
UWGBELA.Name = XWGBELA;
NAAAOSI_makervc( 'U', &YWGBELA );
UWGBELA.Abreviation = YWGBELA;
 /* line 421: */
DUAAOST_star( CLFAOST_declname_syntax, &ZWGBELA );
UWGBELA.Parameter = A_UNITE(AXGBELA,mode2,2,ZWGBELA);
UWGBELA.Access = XMDAOST_normalaccess;
 /* line 423: */
UWGBELA.Continuation = ZNDAOST_continue;
 /* line 424: */
ZAAAOSI_makervc( CXGBELA, &DXGBELA );
UWGBELA.Help = A_UNITE(EXGBELA,mode1,1,DXGBELA);
PXGBELA.fn.fn_global = HXGBELA_anonymous;
PXGBELA.nonlocals = A68_NIL;
OXGBELA = PXGBELA ;
UWGBELA.Command = A_UNITE(NXGBELA,mode3,3,OXGBELA);
 /* line 436: */
QXGBELA = A_HEAP(A68_340 ) ;
(*QXGBELA) = UWGBELA ;
IRGBELA.data[4] = A_UNITE(RXGBELA,mode1,1,QXGBELA);
 /* line 437: */
ZAAAOSI_makervc( UXGBELA, &VXGBELA );
SXGBELA.Name = VXGBELA;
NAAAOSI_makervc( 'E', &WXGBELA );
SXGBELA.Abreviation = WXGBELA;
 /* line 438: */
LTAAOST_opt( WPFAOST_contextname_syntax, &XXGBELA );
DUAAOST_star( A_UNITE(YXGBELA,mode2,2,XXGBELA), &ZXGBELA );
SXGBELA.Parameter = A_UNITE(AYGBELA,mode2,2,ZXGBELA);
SXGBELA.Access = XMDAOST_normalaccess;
 /* line 439: */
SXGBELA.Continuation = ZNDAOST_continue;
 /* line 440: */
ZAAAOSI_makervc( CYGBELA, &DYGBELA );
SXGBELA.Help = A_UNITE(EYGBELA,mode1,1,DYGBELA);
OYGBELA.fn.fn_global = HYGBELA_anonymous;
OYGBELA.nonlocals = A68_NIL;
NYGBELA = OYGBELA ;
SXGBELA.Command = A_UNITE(MYGBELA,mode3,3,NYGBELA);
 /* line 446: */
PYGBELA = A_HEAP(A68_340 ) ;
(*PYGBELA) = SXGBELA ;
IRGBELA.data[5] = A_UNITE(QYGBELA,mode1,1,PYGBELA);
 /* line 447: */
ZAAAOSI_makervc( TYGBELA, &UYGBELA );
RYGBELA.Name = UYGBELA;
 /* line 448: */
NAAAOSI_makervc( 'I', &VYGBELA );
RYGBELA.Abreviation = VYGBELA;
LTAAOST_opt( WPFAOST_contextname_syntax, &XYGBELA );
WYGBELA.data[0] = A_UNITE(YYGBELA,mode2,2,XYGBELA);
LTAAOST_opt( YPFAOST_importname_syntax, &ZYGBELA );
WYGBELA.data[1] = A_UNITE(AZGBELA,mode2,2,ZYGBELA);
 /* line 449: */
ATAAOST_prod( A_HISVEC(BZGBELA,WYGBELA,2,A68_312 ), &CZGBELA );
LTAAOST_opt( A_UNITE(DZGBELA,mode2,2,CZGBELA), &EZGBELA );
DUAAOST_star( A_UNITE(FZGBELA,mode2,2,EZGBELA), &GZGBELA );
RYGBELA.Parameter = A_UNITE(HZGBELA,mode2,2,GZGBELA);
RYGBELA.Access = XMDAOST_normalaccess;
 /* line 451: */
RYGBELA.Continuation = ZNDAOST_continue;
 /* line 452: */
ZAAAOSI_makervc( JZGBELA, &KZGBELA );
RYGBELA.Help = A_UNITE(LZGBELA,mode1,1,KZGBELA);
 /* line 457: */
WZGBELA.fn.fn_global = OZGBELA_anonymous;
WZGBELA.nonlocals = A68_NIL;
VZGBELA = WZGBELA ;
RYGBELA.Command = A_UNITE(UZGBELA,mode3,3,VZGBELA);
XZGBELA = A_HEAP(A68_340 ) ;
(*XZGBELA) = RYGBELA ;
IRGBELA.data[6] = A_UNITE(YZGBELA,mode1,1,XZGBELA);
DAHBELA = NSDAOST_make_group(BAHBELA, A_HVEC(AAHBELA,'P',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(ZZGBELA,IRGBELA,7,A68_339 )) ;
KRDAOST_makecommands( A_UNITE(CAHBELA,mode2,2,DAHBELA), &EAHBELA );
FAHBELA_lib_global_commands = EAHBELA;
 /* line 462: */
 /* line 467: */
 /* line 468: */
 /* line 470: */
 /* line 471: */
ZAAAOSI_makervc( LAHBELA, &MAHBELA );
JAHBELA.Name = MAHBELA;
NAAAOSI_makervc( 'E', &NAHBELA );
JAHBELA.Abreviation = NAHBELA;
 /* line 472: */
DUAAOST_star( CLFAOST_declname_syntax, &OAHBELA );
JAHBELA.Parameter = A_UNITE(PAHBELA,mode2,2,OAHBELA);
JAHBELA.Access = XMDAOST_normalaccess;
 /* line 474: */
JAHBELA.Continuation = ZNDAOST_continue;
 /* line 475: */
ZAAAOSI_makervc( RAHBELA, &SAHBELA );
JAHBELA.Help = A_UNITE(TAHBELA,mode1,1,SAHBELA);
EBHBELA.fn.fn_global = WAHBELA_anonymous;
EBHBELA.nonlocals = A68_NIL;
DBHBELA = EBHBELA ;
JAHBELA.Command = A_UNITE(CBHBELA,mode3,3,DBHBELA);
 /* line 486: */
FBHBELA = A_HEAP(A68_340 ) ;
(*FBHBELA) = JAHBELA ;
IAHBELA.data[0] = A_UNITE(GBHBELA,mode1,1,FBHBELA);
 /* line 487: */
ZAAAOSI_makervc( JBHBELA, &KBHBELA );
HBHBELA.Name = KBHBELA;
NAAAOSI_makervc( 'I', &LBHBELA );
HBHBELA.Abreviation = LBHBELA;
 /* line 488: */
DUAAOST_star( CJFAOST_fnname_syntax, &MBHBELA );
HBHBELA.Parameter = A_UNITE(NBHBELA,mode2,2,MBHBELA);
HBHBELA.Access = XMDAOST_normalaccess;
 /* line 490: */
HBHBELA.Continuation = ZNDAOST_continue;
 /* line 491: */
ZAAAOSI_makervc( PBHBELA, &QBHBELA );
HBHBELA.Help = A_UNITE(RBHBELA,mode1,1,QBHBELA);
DCHBELA.fn.fn_global = UBHBELA_anonymous;
DCHBELA.nonlocals = A68_NIL;
CCHBELA = DCHBELA ;
HBHBELA.Command = A_UNITE(BCHBELA,mode3,3,CCHBELA);
 /* line 503: */
ECHBELA = A_HEAP(A68_340 ) ;
(*ECHBELA) = HBHBELA ;
IAHBELA.data[1] = A_UNITE(FCHBELA,mode1,1,ECHBELA);
 /* line 504: */
ZAAAOSI_makervc( ICHBELA, &JCHBELA );
GCHBELA.Name = JCHBELA;
ZAAAOSI_makervc( LCHBELA, &MCHBELA );
GCHBELA.Abreviation = MCHBELA;
 /* line 505: */
GCHBELA.Parameter = SRAAOST_noparameters;
GCHBELA.Access = XMDAOST_normalaccess;
 /* line 507: */
GCHBELA.Continuation = ZNDAOST_continue;
 /* line 508: */
ZAAAOSI_makervc( OCHBELA, &PCHBELA );
GCHBELA.Help = A_UNITE(QCHBELA,mode1,1,PCHBELA);
 /* line 515: */
YCHBELA.fn.fn_global = TCHBELA_anonymous;
YCHBELA.nonlocals = A68_NIL;
XCHBELA = YCHBELA ;
GCHBELA.Command = A_UNITE(WCHBELA,mode3,3,XCHBELA);
ZCHBELA = A_HEAP(A68_340 ) ;
(*ZCHBELA) = GCHBELA ;
IAHBELA.data[2] = A_UNITE(ADHBELA,mode1,1,ZCHBELA);
 /* line 518: */
FDHBELA = NSDAOST_make_group(DDHBELA, A_HVEC(CDHBELA,'D',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(BDHBELA,IAHBELA,3,A68_339 )) ;
GAHBELA.data[0] = A_UNITE(EDHBELA,mode2,2,FDHBELA);
 /* line 519: */
 /* line 521: */
 /* line 522: */
ZAAAOSI_makervc( LDHBELA, &MDHBELA );
JDHBELA.Name = MDHBELA;
JDHBELA.Abreviation = EOAAOSL_nullstr;
JDHBELA.Parameter = SRAAOST_noparameters;
JDHBELA.Access = XMDAOST_normalaccess;
 /* line 524: */
JDHBELA.Continuation = ZNDAOST_continue;
 /* line 525: */
ZAAAOSI_makervc( ODHBELA, &PDHBELA );
JDHBELA.Help = A_UNITE(QDHBELA,mode1,1,PDHBELA);
WDHBELA.fn.fn_global = TDHBELA_anonymous;
WDHBELA.nonlocals = A68_NIL;
VDHBELA = WDHBELA ;
JDHBELA.Command = A_UNITE(UDHBELA,mode3,3,VDHBELA);
 /* line 530: */
XDHBELA = A_HEAP(A68_340 ) ;
(*XDHBELA) = JDHBELA ;
IDHBELA.data[0] = A_UNITE(YDHBELA,mode1,1,XDHBELA);
 /* line 531: */
ZAAAOSI_makervc( BEHBELA, &CEHBELA );
ZDHBELA.Name = CEHBELA;
ZDHBELA.Abreviation = EOAAOSL_nullstr;
 /* line 532: */
LTAAOST_opt( WPFAOST_contextname_syntax, &DEHBELA );
DUAAOST_star( A_UNITE(EEHBELA,mode2,2,DEHBELA), &FEHBELA );
ZDHBELA.Parameter = A_UNITE(GEHBELA,mode2,2,FEHBELA);
ZDHBELA.Access = XMDAOST_normalaccess;
 /* line 534: */
ZDHBELA.Continuation = ZNDAOST_continue;
 /* line 535: */
 /* line 536: */
ZAAAOSI_makervc( IEHBELA, &JEHBELA );
ZDHBELA.Help = A_UNITE(KEHBELA,mode1,1,JEHBELA);
REHBELA.fn.fn_global = NEHBELA_anonymous;
REHBELA.nonlocals = A68_NIL;
QEHBELA = REHBELA ;
ZDHBELA.Command = A_UNITE(PEHBELA,mode3,3,QEHBELA);
 /* line 541: */
SEHBELA = A_HEAP(A68_340 ) ;
(*SEHBELA) = ZDHBELA ;
IDHBELA.data[1] = A_UNITE(TEHBELA,mode1,1,SEHBELA);
 /* line 542: */
ZAAAOSI_makervc( WEHBELA, &XEHBELA );
UEHBELA.Name = XEHBELA;
UEHBELA.Abreviation = EOAAOSL_nullstr;
 /* line 543: */
LTAAOST_opt( WPFAOST_contextname_syntax, &YEHBELA );
DUAAOST_star( A_UNITE(ZEHBELA,mode2,2,YEHBELA), &AFHBELA );
UEHBELA.Parameter = A_UNITE(BFHBELA,mode2,2,AFHBELA);
UEHBELA.Access = XMDAOST_normalaccess;
 /* line 544: */
UEHBELA.Continuation = ZNDAOST_continue;
 /* line 545: */
ZAAAOSI_makervc( DFHBELA, &EFHBELA );
UEHBELA.Help = A_UNITE(FFHBELA,mode1,1,EFHBELA);
MFHBELA.fn.fn_global = IFHBELA_anonymous;
MFHBELA.nonlocals = A68_NIL;
LFHBELA = MFHBELA ;
UEHBELA.Command = A_UNITE(KFHBELA,mode3,3,LFHBELA);
 /* line 550: */
NFHBELA = A_HEAP(A68_340 ) ;
(*NFHBELA) = UEHBELA ;
IDHBELA.data[2] = A_UNITE(OFHBELA,mode1,1,NFHBELA);
 /* line 551: */
ZAAAOSI_makervc( RFHBELA, &SFHBELA );
PFHBELA.Name = SFHBELA;
 /* line 552: */
PFHBELA.Abreviation = EOAAOSL_nullstr;
LTAAOST_opt( WPFAOST_contextname_syntax, &UFHBELA );
TFHBELA.data[0] = A_UNITE(VFHBELA,mode2,2,UFHBELA);
LTAAOST_opt( YPFAOST_importname_syntax, &WFHBELA );
TFHBELA.data[1] = A_UNITE(XFHBELA,mode2,2,WFHBELA);
 /* line 553: */
ATAAOST_prod( A_HISVEC(YFHBELA,TFHBELA,2,A68_312 ), &ZFHBELA );
LTAAOST_opt( A_UNITE(AGHBELA,mode2,2,ZFHBELA), &BGHBELA );
DUAAOST_star( A_UNITE(CGHBELA,mode2,2,BGHBELA), &DGHBELA );
PFHBELA.Parameter = A_UNITE(EGHBELA,mode2,2,DGHBELA);
PFHBELA.Access = XMDAOST_normalaccess;
 /* line 555: */
PFHBELA.Continuation = ZNDAOST_continue;
 /* line 556: */
ZAAAOSI_makervc( GGHBELA, &HGHBELA );
PFHBELA.Help = A_UNITE(IGHBELA,mode1,1,HGHBELA);
 /* line 561: */
TGHBELA.fn.fn_global = LGHBELA_anonymous;
TGHBELA.nonlocals = A68_NIL;
SGHBELA = TGHBELA ;
PFHBELA.Command = A_UNITE(RGHBELA,mode3,3,SGHBELA);
UGHBELA = A_HEAP(A68_340 ) ;
(*UGHBELA) = PFHBELA ;
IDHBELA.data[3] = A_UNITE(VGHBELA,mode1,1,UGHBELA);
 /* line 563: */
AHHBELA = NSDAOST_make_group(YGHBELA, XGHBELA, XMDAOST_normalaccess, A_HISVEC(WGHBELA,IDHBELA,4,A68_339 )) ;
GAHBELA.data[1] = A_UNITE(ZGHBELA,mode2,2,AHHBELA);
 /* line 564: */
 /* line 566: */
 /* line 567: */
ZAAAOSI_makervc( FHHBELA, &GHHBELA );
DHHBELA.Name = GHHBELA;
NAAAOSI_makervc( 'C', &HHHBELA );
DHHBELA.Abreviation = HHHBELA;
 /* line 568: */
DUAAOST_star( WPFAOST_contextname_syntax, &IHHBELA );
DHHBELA.Parameter = A_UNITE(JHHBELA,mode2,2,IHHBELA);
DHHBELA.Access = XMDAOST_normalaccess;
 /* line 570: */
DHHBELA.Continuation = ZNDAOST_continue;
 /* line 571: */
ZAAAOSI_makervc( LHHBELA, &MHHBELA );
DHHBELA.Help = A_UNITE(NHHBELA,mode1,1,MHHBELA);
ZHHBELA.fn.fn_global = QHHBELA_anonymous;
ZHHBELA.nonlocals = A68_NIL;
YHHBELA = ZHHBELA ;
DHHBELA.Command = A_UNITE(XHHBELA,mode3,3,YHHBELA);
 /* line 582: */
AIHBELA = A_HEAP(A68_340 ) ;
(*AIHBELA) = DHHBELA ;
CHHBELA.data[0] = A_UNITE(BIHBELA,mode1,1,AIHBELA);
 /* line 583: */
ZAAAOSI_makervc( EIHBELA, &FIHBELA );
CIHBELA.Name = FIHBELA;
NAAAOSI_makervc( 'I', &GIHBELA );
CIHBELA.Abreviation = GIHBELA;
 /* line 584: */
DUAAOST_star( YPFAOST_importname_syntax, &HIHBELA );
CIHBELA.Parameter = A_UNITE(IIHBELA,mode2,2,HIHBELA);
CIHBELA.Access = XMDAOST_normalaccess;
 /* line 586: */
CIHBELA.Continuation = ZNDAOST_continue;
 /* line 587: */
 /* line 588: */
ZAAAOSI_makervc( KIHBELA, &LIHBELA );
CIHBELA.Help = A_UNITE(MIHBELA,mode1,1,LIHBELA);
 /* line 599: */
ZIHBELA.fn.fn_global = PIHBELA_anonymous;
ZIHBELA.nonlocals = A68_NIL;
YIHBELA = ZIHBELA ;
CIHBELA.Command = A_UNITE(XIHBELA,mode3,3,YIHBELA);
AJHBELA = A_HEAP(A68_340 ) ;
(*AJHBELA) = CIHBELA ;
CHHBELA.data[1] = A_UNITE(BJHBELA,mode1,1,AJHBELA);
 /* line 602: */
GJHBELA = NSDAOST_make_group(EJHBELA, A_HVEC(DJHBELA,'C',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(CJHBELA,CHHBELA,2,A68_339 )) ;
GAHBELA.data[2] = A_UNITE(FJHBELA,mode2,2,GJHBELA);
 /* line 603: */
 /* line 605: */
 /* line 606: */
ZAAAOSI_makervc( LJHBELA, &MJHBELA );
JJHBELA.Name = MJHBELA;
 /* line 607: */
NAAAOSI_makervc( 'C', &NJHBELA );
JJHBELA.Abreviation = NJHBELA;
OJHBELA.data[0] = WPFAOST_contextname_syntax;
LTAAOST_opt( YPFAOST_importname_syntax, &PJHBELA );
OJHBELA.data[1] = A_UNITE(QJHBELA,mode2,2,PJHBELA);
 /* line 608: */
ATAAOST_prod( A_HISVEC(RJHBELA,OJHBELA,2,A68_312 ), &SJHBELA );
DUAAOST_star( A_UNITE(TJHBELA,mode2,2,SJHBELA), &UJHBELA );
JJHBELA.Parameter = A_UNITE(VJHBELA,mode2,2,UJHBELA);
JJHBELA.Access = XMDAOST_normalaccess;
 /* line 610: */
JJHBELA.Continuation = ZNDAOST_continue;
 /* line 611: */
ZAAAOSI_makervc( XJHBELA, &YJHBELA );
JJHBELA.Help = A_UNITE(ZJHBELA,mode1,1,YJHBELA);
JKHBELA.fn.fn_global = CKHBELA_anonymous;
JKHBELA.nonlocals = A68_NIL;
IKHBELA = JKHBELA ;
JJHBELA.Command = A_UNITE(HKHBELA,mode3,3,IKHBELA);
 /* line 617: */
KKHBELA = A_HEAP(A68_340 ) ;
(*KKHBELA) = JJHBELA ;
IJHBELA.data[0] = A_UNITE(LKHBELA,mode1,1,KKHBELA);
 /* line 618: */
ZAAAOSI_makervc( OKHBELA, &PKHBELA );
MKHBELA.Name = PKHBELA;
NAAAOSI_makervc( 'I', &QKHBELA );
MKHBELA.Abreviation = QKHBELA;
 /* line 619: */
DUAAOST_star( YPFAOST_importname_syntax, &RKHBELA );
MKHBELA.Parameter = A_UNITE(SKHBELA,mode2,2,RKHBELA);
MKHBELA.Access = XMDAOST_normalaccess;
 /* line 621: */
MKHBELA.Continuation = ZNDAOST_continue;
 /* line 622: */
ZAAAOSI_makervc( UKHBELA, &VKHBELA );
MKHBELA.Help = A_UNITE(WKHBELA,mode1,1,VKHBELA);
 /* line 633: */
ILHBELA.fn.fn_global = ZKHBELA_anonymous;
ILHBELA.nonlocals = A68_NIL;
HLHBELA = ILHBELA ;
MKHBELA.Command = A_UNITE(GLHBELA,mode3,3,HLHBELA);
JLHBELA = A_HEAP(A68_340 ) ;
(*JLHBELA) = MKHBELA ;
IJHBELA.data[1] = A_UNITE(KLHBELA,mode1,1,JLHBELA);
 /* line 637: */
PLHBELA = NSDAOST_make_group(NLHBELA, A_HVEC(MLHBELA,'M',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(LLHBELA,IJHBELA,2,A68_339 )) ;
GAHBELA.data[3] = A_UNITE(OLHBELA,mode2,2,PLHBELA);
 /* line 638: */
 /* line 640: */
 /* line 641: */
ZAAAOSI_makervc( ULHBELA, &VLHBELA );
SLHBELA.Name = VLHBELA;
 /* line 642: */
NAAAOSI_makervc( 'C', &WLHBELA );
SLHBELA.Abreviation = WLHBELA;
XLHBELA.data[0] = WPFAOST_contextname_syntax;
LTAAOST_opt( YPFAOST_importname_syntax, &YLHBELA );
XLHBELA.data[1] = A_UNITE(ZLHBELA,mode2,2,YLHBELA);
 /* line 643: */
ATAAOST_prod( A_HISVEC(AMHBELA,XLHBELA,2,A68_312 ), &BMHBELA );
SLHBELA.Parameter = A_UNITE(CMHBELA,mode2,2,BMHBELA);
SLHBELA.Access = XMDAOST_normalaccess;
 /* line 644: */
SLHBELA.Continuation = ZNDAOST_continue;
 /* line 645: */
ZAAAOSI_makervc( EMHBELA, &FMHBELA );
SLHBELA.Help = A_UNITE(GMHBELA,mode1,1,FMHBELA);
OMHBELA.fn.fn_global = JMHBELA_anonymous;
OMHBELA.nonlocals = A68_NIL;
NMHBELA = OMHBELA ;
SLHBELA.Command = A_UNITE(MMHBELA,mode3,3,NMHBELA);
 /* line 652: */
PMHBELA = A_HEAP(A68_340 ) ;
(*PMHBELA) = SLHBELA ;
RLHBELA.data[0] = A_UNITE(QMHBELA,mode1,1,PMHBELA);
 /* line 653: */
ZAAAOSI_makervc( TMHBELA, &UMHBELA );
RMHBELA.Name = UMHBELA;
NAAAOSI_makervc( 'I', &VMHBELA );
RMHBELA.Abreviation = VMHBELA;
 /* line 654: */
RMHBELA.Parameter = YPFAOST_importname_syntax;
RMHBELA.Access = XMDAOST_normalaccess;
 /* line 655: */
RMHBELA.Continuation = ZNDAOST_continue;
 /* line 656: */
ZAAAOSI_makervc( XMHBELA, &YMHBELA );
RMHBELA.Help = A_UNITE(ZMHBELA,mode1,1,YMHBELA);
 /* line 664: */
JNHBELA.fn.fn_global = CNHBELA_anonymous;
JNHBELA.nonlocals = A68_NIL;
INHBELA = JNHBELA ;
RMHBELA.Command = A_UNITE(HNHBELA,mode3,3,INHBELA);
KNHBELA = A_HEAP(A68_340 ) ;
(*KNHBELA) = RMHBELA ;
RLHBELA.data[1] = A_UNITE(LNHBELA,mode1,1,KNHBELA);
 /* line 670: */
QNHBELA = NSDAOST_make_group(ONHBELA, A_HVEC(NNHBELA,'S',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(MNHBELA,RLHBELA,2,A68_339 )) ;
GAHBELA.data[4] = A_UNITE(PNHBELA,mode2,2,QNHBELA);
 /* line 671: */
ZAAAOSI_makervc( TNHBELA, &UNHBELA );
RNHBELA.Name = UNHBELA;
RNHBELA.Abreviation = EOAAOSL_nullstr;
DUAAOST_star( CLFAOST_declname_syntax, &VNHBELA );
RNHBELA.Parameter = A_UNITE(WNHBELA,mode2,2,VNHBELA);
RNHBELA.Access = XMDAOST_normalaccess;
 /* line 673: */
RNHBELA.Continuation = ZNDAOST_continue;
 /* line 674: */
ZAAAOSI_makervc( YNHBELA, &ZNHBELA );
RNHBELA.Help = A_UNITE(AOHBELA,mode1,1,ZNHBELA);
LOHBELA.fn.fn_global = DOHBELA_anonymous;
LOHBELA.nonlocals = A68_NIL;
KOHBELA = LOHBELA ;
RNHBELA.Command = A_UNITE(JOHBELA,mode3,3,KOHBELA);
 /* line 685: */
MOHBELA = A_HEAP(A68_340 ) ;
(*MOHBELA) = RNHBELA ;
GAHBELA.data[5] = A_UNITE(NOHBELA,mode1,1,MOHBELA);
 /* line 686: */
ZAAAOSI_makervc( QOHBELA, &ROHBELA );
OOHBELA.Name = ROHBELA;
OOHBELA.Abreviation = EOAAOSL_nullstr;
DUAAOST_star( WPFAOST_contextname_syntax, &SOHBELA );
OOHBELA.Parameter = A_UNITE(TOHBELA,mode2,2,SOHBELA);
 /* line 687: */
OOHBELA.Access = XMDAOST_normalaccess;
 /* line 689: */
OOHBELA.Continuation = ZNDAOST_continue;
 /* line 690: */
ZAAAOSI_makervc( VOHBELA, &WOHBELA );
OOHBELA.Help = A_UNITE(XOHBELA,mode1,1,WOHBELA);
HPHBELA.fn.fn_global = APHBELA_anonymous;
HPHBELA.nonlocals = A68_NIL;
GPHBELA = HPHBELA ;
OOHBELA.Command = A_UNITE(FPHBELA,mode3,3,GPHBELA);
 /* line 702: */
IPHBELA = A_HEAP(A68_340 ) ;
(*IPHBELA) = OOHBELA ;
GAHBELA.data[6] = A_UNITE(JPHBELA,mode1,1,IPHBELA);
 /* line 703: */
ZAAAOSI_makervc( MPHBELA, &NPHBELA );
KPHBELA.Name = NPHBELA;
 /* line 704: */
KPHBELA.Abreviation = EOAAOSL_nullstr;
OPHBELA.data[0] = WPFAOST_contextname_syntax;
OPHBELA.data[1] = YPFAOST_importname_syntax;
 /* line 705: */
ATAAOST_prod( A_HISVEC(PPHBELA,OPHBELA,2,A68_312 ), &QPHBELA );
DUAAOST_star( A_UNITE(RPHBELA,mode2,2,QPHBELA), &SPHBELA );
KPHBELA.Parameter = A_UNITE(TPHBELA,mode2,2,SPHBELA);
KPHBELA.Access = XMDAOST_normalaccess;
 /* line 707: */
KPHBELA.Continuation = ZNDAOST_continue;
 /* line 708: */
ZAAAOSI_makervc( VPHBELA, &WPHBELA );
KPHBELA.Help = A_UNITE(XPHBELA,mode1,1,WPHBELA);
LQHBELA.fn.fn_global = AQHBELA_anonymous;
LQHBELA.nonlocals = A68_NIL;
KQHBELA = LQHBELA ;
KPHBELA.Command = A_UNITE(JQHBELA,mode3,3,KQHBELA);
 /* line 721: */
MQHBELA = A_HEAP(A68_340 ) ;
(*MQHBELA) = KPHBELA ;
GAHBELA.data[7] = A_UNITE(NQHBELA,mode1,1,MQHBELA);
 /* line 722: */
ZAAAOSI_makervc( QQHBELA, &RQHBELA );
OQHBELA.Name = RQHBELA;
 /* line 723: */
ZAAAOSI_makervc( TQHBELA, &UQHBELA );
OQHBELA.Abreviation = UQHBELA;
LTAAOST_opt( WPFAOST_contextname_syntax, &WQHBELA );
VQHBELA.data[0] = A_UNITE(XQHBELA,mode2,2,WQHBELA);
LTAAOST_opt( YPFAOST_importname_syntax, &YQHBELA );
VQHBELA.data[1] = A_UNITE(ZQHBELA,mode2,2,YQHBELA);
 /* line 724: */
ATAAOST_prod( A_HISVEC(ARHBELA,VQHBELA,2,A68_312 ), &BRHBELA );
LTAAOST_opt( A_UNITE(CRHBELA,mode2,2,BRHBELA), &DRHBELA );
DUAAOST_star( A_UNITE(ERHBELA,mode2,2,DRHBELA), &FRHBELA );
OQHBELA.Parameter = A_UNITE(GRHBELA,mode2,2,FRHBELA);
OQHBELA.Access = XMDAOST_normalaccess;
 /* line 726: */
OQHBELA.Continuation = ZNDAOST_continue;
 /* line 727: */
 /* line 728: */
 /* line 729: */
ZAAAOSI_makervc( IRHBELA, &JRHBELA );
OQHBELA.Help = A_UNITE(KRHBELA,mode1,1,JRHBELA);
VRHBELA.fn.fn_global = NRHBELA_anonymous;
VRHBELA.nonlocals = A68_NIL;
URHBELA = VRHBELA ;
OQHBELA.Command = A_UNITE(TRHBELA,mode3,3,URHBELA);
 /* line 734: */
WRHBELA = A_HEAP(A68_340 ) ;
(*WRHBELA) = OQHBELA ;
GAHBELA.data[8] = A_UNITE(XRHBELA,mode1,1,WRHBELA);
 /* line 735: */
ZAAAOSI_makervc( ASHBELA, &BSHBELA );
YRHBELA.Name = BSHBELA;
YRHBELA.Abreviation = EOAAOSL_nullstr;
YRHBELA.Parameter = SRAAOST_noparameters;
YRHBELA.Access = XMDAOST_normalaccess;
 /* line 737: */
YRHBELA.Continuation = ZNDAOST_continue;
 /* line 738: */
 /* line 739: */
ZAAAOSI_makervc( DSHBELA, &ESHBELA );
YRHBELA.Help = A_UNITE(FSHBELA,mode1,1,ESHBELA);
LSHBELA.fn.fn_global = ISHBELA_anonymous;
LSHBELA.nonlocals = A68_NIL;
KSHBELA = LSHBELA ;
YRHBELA.Command = A_UNITE(JSHBELA,mode3,3,KSHBELA);
 /* line 744: */
MSHBELA = A_HEAP(A68_340 ) ;
(*MSHBELA) = YRHBELA ;
GAHBELA.data[9] = A_UNITE(NSHBELA,mode1,1,MSHBELA);
 /* line 745: */
ZAAAOSI_makervc( QSHBELA, &RSHBELA );
OSHBELA.Name = RSHBELA;
 /* line 747: */
OSHBELA.Abreviation = EOAAOSL_nullstr;
 /* line 748: */
OSHBELA.Parameter = HNFAOST_filename_syntax;
OSHBELA.Access = XMDAOST_normalaccess;
 /* line 750: */
OSHBELA.Continuation = ZNDAOST_continue;
 /* line 753: */
 /* line 754: */
 /* line 755: */
ZAAAOSI_makervc( TSHBELA, &USHBELA );
OSHBELA.Help = A_UNITE(VSHBELA,mode1,1,USHBELA);
GTHBELA.fn.fn_global = YSHBELA_anonymous;
GTHBELA.nonlocals = A68_NIL;
FTHBELA = GTHBELA ;
OSHBELA.Command = A_UNITE(ETHBELA,mode3,3,FTHBELA);
 /* line 765: */
HTHBELA = A_HEAP(A68_340 ) ;
(*HTHBELA) = OSHBELA ;
GAHBELA.data[10] = A_UNITE(ITHBELA,mode1,1,HTHBELA);
 /* line 766: */
ZAAAOSI_makervc( LTHBELA, &MTHBELA );
JTHBELA.Name = MTHBELA;
JTHBELA.Abreviation = EOAAOSL_nullstr;
JTHBELA.Parameter = SRAAOST_noparameters;
JTHBELA.Access = XMDAOST_normalaccess;
 /* line 767: */
JTHBELA.Continuation = ZNDAOST_continue;
 /* line 768: */
ZAAAOSI_makervc( OTHBELA, &PTHBELA );
JTHBELA.Help = A_UNITE(QTHBELA,mode1,1,PTHBELA);
WTHBELA.fn.fn_global = TTHBELA_anonymous;
WTHBELA.nonlocals = A68_NIL;
VTHBELA = WTHBELA ;
JTHBELA.Command = A_UNITE(UTHBELA,mode3,3,VTHBELA);
 /* line 773: */
XTHBELA = A_HEAP(A68_340 ) ;
(*XTHBELA) = JTHBELA ;
GAHBELA.data[11] = A_UNITE(YTHBELA,mode1,1,XTHBELA);
 /* line 774: */
ZAAAOSI_makervc( BUHBELA, &CUHBELA );
ZTHBELA.Name = CUHBELA;
NAAAOSI_makervc( 'E', &DUHBELA );
ZTHBELA.Abreviation = DUHBELA;
 /* line 775: */
DUAAOST_star( CLFAOST_declname_syntax, &EUHBELA );
ZTHBELA.Parameter = A_UNITE(FUHBELA,mode2,2,EUHBELA);
ZTHBELA.Access = XMDAOST_normalaccess;
 /* line 776: */
ZTHBELA.Continuation = ZNDAOST_continue;
 /* line 777: */
ZAAAOSI_makervc( HUHBELA, &IUHBELA );
ZTHBELA.Help = A_UNITE(JUHBELA,mode1,1,IUHBELA);
UUHBELA.fn.fn_global = MUHBELA_anonymous;
UUHBELA.nonlocals = A68_NIL;
TUHBELA = UUHBELA ;
ZTHBELA.Command = A_UNITE(SUHBELA,mode3,3,TUHBELA);
 /* line 788: */
VUHBELA = A_HEAP(A68_340 ) ;
(*VUHBELA) = ZTHBELA ;
GAHBELA.data[12] = A_UNITE(WUHBELA,mode1,1,VUHBELA);
 /* line 789: */
ZAAAOSI_makervc( ZUHBELA, &AVHBELA );
XUHBELA.Name = AVHBELA;
ZAAAOSI_makervc( CVHBELA, &DVHBELA );
XUHBELA.Abreviation = DVHBELA;
 /* line 790: */
LTAAOST_opt( WPFAOST_contextname_syntax, &EVHBELA );
DUAAOST_star( A_UNITE(FVHBELA,mode2,2,EVHBELA), &GVHBELA );
XUHBELA.Parameter = A_UNITE(HVHBELA,mode2,2,GVHBELA);
XUHBELA.Access = XMDAOST_normalaccess;
 /* line 791: */
XUHBELA.Continuation = ZNDAOST_continue;
 /* line 792: */
ZAAAOSI_makervc( JVHBELA, &KVHBELA );
XUHBELA.Help = A_UNITE(LVHBELA,mode1,1,KVHBELA);
SVHBELA.fn.fn_global = OVHBELA_anonymous;
SVHBELA.nonlocals = A68_NIL;
RVHBELA = SVHBELA ;
XUHBELA.Command = A_UNITE(QVHBELA,mode3,3,RVHBELA);
 /* line 797: */
TVHBELA = A_HEAP(A68_340 ) ;
(*TVHBELA) = XUHBELA ;
GAHBELA.data[13] = A_UNITE(UVHBELA,mode1,1,TVHBELA);
 /* line 798: */
ZAAAOSI_makervc( XVHBELA, &YVHBELA );
VVHBELA.Name = YVHBELA;
ZAAAOSI_makervc( AWHBELA, &BWHBELA );
VVHBELA.Abreviation = BWHBELA;
 /* line 799: */
VVHBELA.Parameter = YPFAOST_importname_syntax;
VVHBELA.Access = XMDAOST_normalaccess;
 /* line 801: */
VVHBELA.Continuation = ZNDAOST_continue;
 /* line 802: */
ZAAAOSI_makervc( DWHBELA, &EWHBELA );
VVHBELA.Help = A_UNITE(FWHBELA,mode1,1,EWHBELA);
QWHBELA.fn.fn_global = IWHBELA_anonymous;
QWHBELA.nonlocals = A68_NIL;
PWHBELA = QWHBELA ;
VVHBELA.Command = A_UNITE(OWHBELA,mode3,3,PWHBELA);
 /* line 810: */
RWHBELA = A_HEAP(A68_340 ) ;
(*RWHBELA) = VVHBELA ;
GAHBELA.data[14] = A_UNITE(SWHBELA,mode1,1,RWHBELA);
 /* line 811: */
ZAAAOSI_makervc( VWHBELA, &WWHBELA );
TWHBELA.Name = WWHBELA;
TWHBELA.Abreviation = EOAAOSL_nullstr;
TWHBELA.Parameter = SRAAOST_noparameters;
TWHBELA.Access = XMDAOST_normalaccess;
 /* line 812: */
TWHBELA.Continuation = HODAOST_finish;
 /* line 813: */
XWHBELA.source = LQGBELA_exit_help ;
ZWHBELA = (XWHBELA.destination) ;
TWHBELA.Help = A_UNITE(YWHBELA,mode1,1,ZWHBELA);
CXHBELA.fn.fn_global = OQGBELA_exit_command;
CXHBELA.nonlocals = A68_NIL;
BXHBELA = CXHBELA ;
TWHBELA.Command = A_UNITE(AXHBELA,mode3,3,BXHBELA);
 /* line 815: */
DXHBELA = A_HEAP(A68_340 ) ;
(*DXHBELA) = TWHBELA ;
GAHBELA.data[15] = A_UNITE(EXHBELA,mode1,1,DXHBELA);
 /* line 816: */
ZAAAOSI_makervc( HXHBELA, &IXHBELA );
FXHBELA.Name = IXHBELA;
FXHBELA.Abreviation = EOAAOSL_nullstr;
FXHBELA.Parameter = SRAAOST_noparameters;
FXHBELA.Access = BNDAOST_hiddenaccess;
 /* line 817: */
FXHBELA.Continuation = HODAOST_finish;
 /* line 818: */
JXHBELA.source = LQGBELA_exit_help ;
LXHBELA = (JXHBELA.destination) ;
FXHBELA.Help = A_UNITE(KXHBELA,mode1,1,LXHBELA);
OXHBELA.fn.fn_global = OQGBELA_exit_command;
OXHBELA.nonlocals = A68_NIL;
NXHBELA = OXHBELA ;
FXHBELA.Command = A_UNITE(MXHBELA,mode3,3,NXHBELA);
 /* line 820: */
PXHBELA = A_HEAP(A68_340 ) ;
(*PXHBELA) = FXHBELA ;
GAHBELA.data[16] = A_UNITE(QXHBELA,mode1,1,PXHBELA);
 /* line 821: */
ZAAAOSI_makervc( TXHBELA, &UXHBELA );
RXHBELA.Name = UXHBELA;
RXHBELA.Abreviation = EOAAOSL_nullstr;
RXHBELA.Parameter = SRAAOST_noparameters;
RXHBELA.Access = XMDAOST_normalaccess;
 /* line 823: */
RXHBELA.Continuation = HODAOST_finish;
 /* line 824: */
ZAAAOSI_makervc( WXHBELA, &XXHBELA );
RXHBELA.Help = A_UNITE(YXHBELA,mode1,1,XXHBELA);
 /* line 835: */
OYHBELA.fn.fn_global = BYHBELA_anonymous;
OYHBELA.nonlocals = A68_NIL;
NYHBELA = OYHBELA ;
RXHBELA.Command = A_UNITE(MYHBELA,mode3,3,NYHBELA);
PYHBELA = A_HEAP(A68_340 ) ;
(*PYHBELA) = RXHBELA ;
GAHBELA.data[17] = A_UNITE(QYHBELA,mode1,1,PYHBELA);
ARDAOST_makecommands( A_HISVEC(RYHBELA,GAHBELA,18,A68_339 ), &SYHBELA );
TYHBELA_lib_local_commands = SYHBELA;
 /* line 837: */
 /* line 838: */
 /* line 839: */
 /* line 842: */
XYHBELA.fn.fn_global = MMDAOST_nullcommand;
XYHBELA.nonlocals = A68_NIL;
VYHBELA = GTDAOST_make_compound(RQGBELA_start_up, YYHBELA, SYJAELA_libprompt, TYHBELA_lib_local_commands, FAHBELA_lib_global_commands, A_UNITE(WYHBELA,mode2,2,XYHBELA));
} 
A_PROC_EXIT(initialise_library);
return( VYHBELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void DAGBELA(void)   /* initialise DECS libcommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/libcommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/attrdecls.m","./mfiles/libprocs.m","./mfiles/libinterface.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
LRAAOST();   /* USE commandsyntax */
TIGAOST();   /* USE ioprocs */
DZVAELA();   /* USE attrdecls */
ZSBBELA();   /* USE libprocs */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/libcommands.a68";
A_config.translation_time = "Tue Apr  4 10:40:54 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "CAGBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:40:54 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS libcommands);
UEAALIB_a68config(LGAALIB_configinfo, HAGBELA);
 /* line 108: */
 /* line 155: */
 /* line 174: */
 /* line 197: */
 /* line 220: */
 /* line 240: */
 /* line 251: */
 /* line 268: */
 /* line 284: */
 /* line 292: */
 /* line 303: */
 /* line 315: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
LQGBELA_exit_help = KQGBELA;
 /* line 325: */
 /* line 330: */
 /* line 331: */
 /* line 333: */
 /* line 843: */
A_PROC_EXIT(DECS libcommands);
} 
#undef NL
/* end of translation of ./a68files/libcommands.a68 */
