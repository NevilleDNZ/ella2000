
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
/* UNAME:KMBAELA */
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

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,68,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 68 CHAR */
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
A_VECTOR(struct A68t176 ,A68t178);
typedef struct A68t178  A68_178 ;    /* VECTOR [] MODE176 */
struct A68t177 { A68_INT mode; union {
struct A68t32  mode1;
A68_VC  mode2;
struct A68t178  mode3;
} data; };
typedef struct A68t177  A68_177 ;    /* UNION(MODE32,MODE26,MODE178)  */
struct A68t179{
A68_INT  Lwb;
A_PAD_INT(PAD_43)
A68_INT  Upb;
A_PAD_INT(PAD_44)
struct A68t179 * Rest;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,INT,REF MODE179)  */
struct A68t180{
A68_INT  Block_num;
A_PAD_INT(PAD_45)
A68_INT  Offset;
A_PAD_INT(PAD_46)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,INT)  */
struct A68t181{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_47)
struct A68t180  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_48)
A68_INT  Dp_elts;
A_PAD_INT(PAD_49)
A68_INT  Code;
A_PAD_INT(PAD_50)
A68_INT  Version;
A_PAD_INT(PAD_51)
A68_INT  Read_size;
A_PAD_INT(PAD_52)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BOOL,MODE180,INT,INT,INT,INT,INT)  */
struct A68t182{
struct A68t176  Dp;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE176,REF MODE182)  */
struct A68t183{
A68_INT  Indirection;
A_PAD_INT(PAD_53)
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE183)  */
struct A68t184{
A68_VC  Buffer;
struct A68t179 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,REF MODE179,REF INT,REF INT,REF INT)  */
struct A68t185{
struct A68t180  Old;
struct A68t180  New;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE180,MODE180,REF MODE185)  */
A_VECTOR(struct A68t181 ,A68t187);
typedef struct A68t187  A68_187 ;    /* VECTOR [] MODE181 */
struct A68t186{
struct A68t176 * Root;
struct A68t176 * Indirs_dp;
struct A68t176 * Freelist_dp;
struct A68t176 * Pagetable_dp;
struct A68t176 * Append_dp;
struct A68t178  Free_block_dps;
struct A68t178  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t184 * Write_buffer;
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
struct A68t185 * Gc_ptrs;
struct A68t183 * Instore_vars;
struct A68t187  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE176,REF MODE176,REF MODE176,REF MODE176,REF MODE176,REF MODE178,REF MODE178,REF REF MODE111,REF REF MODE111,REF MODE184,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE185,REF MODE183,REF MODE187,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t188{
A68_VC  Buffer;
A68_INT * Lwb;
A68_INT * Upb;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE26,REF INT,REF INT)  */
struct A68t189{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t186 * Df;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE186)  */
struct A68t190{
struct A68t180  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_54)
A68_INT  Dp_elts;
A_PAD_INT(PAD_55)
A68_INT  Code;
A_PAD_INT(PAD_56)
A68_INT  Read_size;
A_PAD_INT(PAD_57)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE180,INT,INT,INT,INT)  */
struct A68t191{
A68_INT  Block_num;
A_PAD_INT(PAD_58)
A68_INT  Offset;
A_PAD_INT(PAD_59)
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,REF MODE191)  */
struct A68t192{
A68_INT  Old_block;
A_PAD_INT(PAD_60)
A68_INT  Old_offset;
A_PAD_INT(PAD_61)
A68_INT  New_block;
A_PAD_INT(PAD_62)
A68_INT  New_offset;
A_PAD_INT(PAD_63)
struct A68t192 * Rest;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT,INT,REF MODE192)  */
A_VECTOR(struct A68t191 *,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] REF MODE191 */
A_VECTOR(struct A68t192 *,A68t195);
typedef struct A68t195  A68_195 ;    /* VECTOR [] REF MODE192 */
struct A68t193 { A68_INT mode; union {
struct A68t194  mode1;
struct A68t195  mode2;
A68_BOOL  mode3;
} data; };
typedef struct A68t193  A68_193 ;    /* UNION(REF MODE194,REF MODE195,BOOL)  */
struct A68t196{
struct A68t190  Data;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE190,REF MODE196)  */
struct A68t197{
struct A68t32  Max_hashlist;
A68_INT  Stack_size;
A_PAD_INT(PAD_64)
A68_INT  Max_stack_size;
A_PAD_INT(PAD_65)
A68_INT  Disc_accesses;
A_PAD_INT(PAD_66)
A68_INT  Data_ptrs;
A_PAD_INT(PAD_67)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE32,INT,INT,INT,INT)  */
struct A68t198{
A68_BOOL  Wanted;
A_PAD_BOOL(PAD_68)
A68_INT  Indirection;
A_PAD_INT(PAD_69)
struct A68t180  Old_addr;
struct A68t180  New_addr;
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(BOOL,INT,MODE180,MODE180,REF MODE198)  */
struct A68t199{
A68_VC  Name;
A68_BOOL  Compactor;
A_PAD_BOOL(PAD_70)
struct A68t188 * Read_buffer;
struct A68t32  Pagetable;
A68_VC  Blocks_wanted;
struct A68t54  Indirs_wanted;
struct A68t193  Hashtable;
struct A68t196 * Stack;
struct A68t198 * Shaky_ptrs;
struct A68t197 * Gcinfo;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(REF MODE26,BOOL,REF MODE188,REF MODE32,REF MODE26,REF MODE54,MODE193,REF MODE196,REF MODE198,REF MODE197)  */
A_ISTRUCT(A68_CHAR ,17,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_VC ,2,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,512,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 512 CHAR */

A_PROCEDURE(A68_BOOL ,A68t203,(struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE111,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t111 *,A68_VC ,A68_INT ,struct A68t97 ),(struct A68t111 *,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE111,REF MODE26,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,43,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t111 *,A68_VC ,A68_INT ,struct A68t97 ),(struct A68t111 *,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE111,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_INT ,A68t207,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE111) INT */

A_PROCEDURE(A68_INT ,A68t208,(struct A68t111 *,A68_INT ,struct A68t97 ),(struct A68t111 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE111,INT,MODE97) INT */

A_PROCEDURE(struct A68t111 *,A68t209,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE54) VOID */

A_PROCEDURE(A68_INT ,A68t212,(A68_VC ),(A68_VC ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE26) INT */
A_ISTRUCT(A68_CHAR ,18,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_BITS ,A68t214,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE176) BITS */

A_PROCEDURE(A68_VOID ,A68t215,(A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t180 ,struct A68t176 *),(A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t180 ,struct A68t176 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(BOOL,BOOL,INT,INT,INT,INT,INT,MODE180) MODE176 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_VC ,struct A68t176 *),(A68_VC ,struct A68t176 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE26) MODE176 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t176 ,A68_VC *),(struct A68t176 ,A68_VC *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE176) MODE26 */

A_PROCEDURE(A68_INT ,A68t218,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE176) INT */

A_PROCEDURE(A68_BOOL ,A68t219,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t176 *,struct A68t180 ),(struct A68t176 *,struct A68t180 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE176,MODE180) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(A68_VC ,A68_INT ,struct A68t180 ),(A68_VC ,A68_INT ,struct A68t180 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE26,INT,MODE180) VOID */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t176 ,struct A68t176 ),(struct A68t176 ,struct A68t176 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE176,MODE176) BOOL */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t180 ,struct A68t180 ),(struct A68t180 ,struct A68t180 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE180,MODE180) BOOL */

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC ,struct A68t181 *),(A68_VC ,struct A68t181 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26) MODE181 */
A_ISTRUCT(A68_CHAR ,19,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t181 ,A68_VC *),(struct A68t181 ,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE181) MODE26 */

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,INT,INT,INT,INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t228,(A68_INT ,A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(INT,INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t229,(A68_VC ),(A68_VC ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE26) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
#define EDAAOST_int_size 4
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  DPBAOSI_io_ok;
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_111 * FQBAOSI_open_file(A68_VC ,struct A68t113 ,struct A68t97 );
extern A68_VOID  HRBAOSI_read_buffer(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t111 *,A68_VC ,struct A68t97 ,A68_35 *);
extern A68_120 * NVBAOSI_get_file_details(struct A68t122 ,struct A68t97 );
extern A68_VOID  CTBAOSI_get_file_position(struct A68t111 *,A68_LINT *,struct A68t97 ,A68_35 *);
extern A68_VOID  TSBAOSI_set_file_position(struct A68t111 *,A68_LINT ,struct A68t97 ,A68_35 *);
extern A68_VOID  NTBAOSI_update_disk(struct A68t111 *,struct A68t97 ,A68_35 *);
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
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_92  SHAAOSI_system;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_175   OMBAELA = {"$Id: su_keepsake_interface.a68,v 34.2 1995/03/29 13:03:34 ella Exp $"}; 
A_GISVEC(A68_VC ,PMBAELA,OMBAELA,68)
#define QMBAELA_completed_ok 0
#define RMBAELA_last_update_failed 1
#define SMBAELA_byte_size 8
#define TMBAELA_discptr_mask 26710
#define UMBAELA_pass_mask 237685011
static A68_114   VMBAELA = {".sum"}; 
A_GISVEC(A68_VC ,WMBAELA,VMBAELA,4)
A68_VC  XMBAELA_dna;
#define YMBAELA_hashtable_size 256
static A68_INT  ZMBAELA_extend_allocation;
#define ANBAELA_fixed_overhead 3
#define BNBAELA_is_setup 0X8afe7913U
#define CNBAELA_hash_mask 0XaaaaaaaaU
#define DNBAELA_hash_size 10000
static A68_200   JNBAELA = {"KEEPSAKE error:  "}; 
A_GISVEC(A68_VC ,KNBAELA,JNBAELA,17)
#define SNBAELA_block_size 512
#define TNBAELA_increase_inc 1000
#define UNBAELA_max_blocks 128
#define VNBAELA_max_buffer_size 16
A68_INT  WNBAELA_increase_increment;
static A68_LINT  XNBAELA_long_block_size;
static A68_202   YNBAELA = 
{  'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E',
   'E', 'N', 'D', ' ', 'F', 'I', 'L', 'E' 
  
} ; 
A68_202  ZNBAELA_end_file_block;
static A68_205   NOBAELA = {"get_block:  read size does not match buffer"}; 
A_GISVEC(A68_VC ,OOBAELA,NOBAELA,43)
A68_CHAR  KQBAELA_blank_char;
static A68_BITS  GRBAELA_byte_mask;
static A68_213   SRBAELA = {"VCTOI - wrong size"}; 
A_GISVEC(A68_VC ,TRBAELA,SRBAELA,18)
#define JSBAELA_file_check 160234450
#define KSBAELA_out_of_date_file 34589012
#define LSBAELA_desc_file_size 3
A68_INT  OSBAELA_max_file_size;
#define PSBAELA_desc_block_size 2
#define QSBAELA_desc_version_size 2
#define RSBAELA_desc_buffer_size 1
#define SSBAELA_desc_mask_size 2
A68_INT  TSBAELA_discptr_size;
static A68_INT  USBAELA_read_size_offset;
#define VSBAELA_boolean_offset SMBAELA_byte_size
#define WSBAELA_code_index 1
#define XSBAELA_boolean_index 2
static A68_BITS  YSBAELA_p;
static A68_BITS  CTBAELA_dpsc_mask;
static A68_BITS  ETBAELA_shaky_mask;
static A68_BITS  GTBAELA_assignable_mask;
static A68_BITS  ITBAELA_indirection_mask;
static A68_BITS  JTBAELA_boolean_mask;
#define KTBAELA_no_mask 0X0U
#define LTBAELA_code_mask GRBAELA_byte_mask
static A68_BITS  NTBAELA_read_size_mask;
A68_180  LACAELA_niladdress;
A68_180  NACAELA_nilgcaddress;
A68_176  UACAELA_nilptr;
A68_176  WACAELA_illegalptr;
#define ABCAELA_indirection_size TSBAELA_discptr_size
static A68_225   FBCAELA = {"Illegal indirection"}; 
A_GISVEC(A68_VC ,GBCAELA,FBCAELA,19)
#define QBCAELA_bh_wid_data_code 1
#define RBCAELA_bh_end_data_code 1
static A68_INT  SBCAELA_bh_end_next_block;
#define TBCAELA_bh_wid_next_block LSBAELA_desc_file_size
static A68_INT  UBCAELA_bh_end_block_data;
#define VBCAELA_bh_wid_block_data PSBAELA_desc_block_size
static A68_INT  WBCAELA_bh_end_block_dps;
#define XBCAELA_bh_wid_block_dps PSBAELA_desc_block_size
static A68_INT  YBCAELA_bh_end_data_start;
#define ZBCAELA_bh_wid_data_start PSBAELA_desc_block_size
static A68_INT  ACCAELA_bh_end_read_size;
#define BCCAELA_bh_wid_read_size RSBAELA_desc_buffer_size
A68_INT  CCCAELA_block_heading_size;
#define UFCAELA_dh_wid_data_code 1
#define VFCAELA_dh_end_data_code 1
static A68_INT  WFCAELA_dh_end_data_in_block;
#define XFCAELA_dh_wid_data_in_block PSBAELA_desc_block_size
static A68_INT  YFCAELA_dh_end_dps_in_block;
#define ZFCAELA_dh_wid_dps_in_block PSBAELA_desc_block_size
static A68_INT  AGCAELA_dh_end_check_heading;
#define BGCAELA_dh_wid_check_heading SSBAELA_desc_mask_size
A68_INT  CGCAELA_data_heading_size;
A68_INT  RICAELA_actual_block_size;
A68_INT  SICAELA_max_ints_in_block;
A68_INT  TICAELA_fixed_in_block;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZRBAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BWBAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TCCAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OGCAELA_generator;

A68_VOID  GNBAELA_keepsake_msg(A68_92  No, A68_46  Params);

A68_VOID  QNBAELA_keepsake_fault(A68_VC  S);

A_STATIC A68_BOOL  COBAELA_file_open_to_write(A68_111 * File, A68_97  Msg);

A68_VOID  IOBAELA_get_block(A68_111 * File, A68_VC  Buffer, A68_INT  Block, A68_97  Msg);

A68_VOID  UOBAELA_put_block(A68_111 * File, A68_VC  Buffer, A68_INT  Block, A68_97  Msg);

A68_INT  ZOBAELA_file_block_size(A68_111 * File);

A68_INT  HPBAELA_increase_db_file(A68_111 * File, A68_INT  Extra_bytes, A68_97  Msg);

A68_111 * WPBAELA_create_db_file(A68_VC  Name, A68_INT  Size, A68_97  Msg);

A_STATIC A68_VOID  HQBAELA_synchronise_file(A68_111 * File);

A68_VOID  MQBAELA_clear_rvc(A68_VC  Rvc);

A68_VOID  QQBAELA_clear_rvi(A68_32  Rvi);

A68_VOID  UQBAELA_clear_rvb(A68_54  Rvb);

A_STATIC A68_INT  ZQBAELA_min(A68_INT  A, A68_INT  B);

A_STATIC A68_BITS  DRBAELA_xor(A68_BITS  A, A68_BITS  B);

A68_INT  IRBAELA_vctoi(A68_VC  Chars);

A68_VOID  VRBAELA_itovc(A68_INT  Integer, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YRBAELA_generator(A68_BOOL  WRBAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BITS  PTBAELA_sumcheck(A68_176  Dp);

A68_VOID  ZTBAELA_make_dp(A68_BOOL  Shaky, A68_BOOL  Assignable, A68_INT  Discptr_code, A68_INT  Data_elts, A68_INT  Dp_elts, A68_INT  Version, A68_INT  Read_size, A68_180  Addr, A68_176  *ReturnedValue);

A68_VOID  IUBAELA_chars_to_dp(A68_VC  Chars, A68_176  *ReturnedValue);

A68_VOID  XVBAELA_dp_to_chars(A68_176  Dp, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AWBAELA_generator(A68_BOOL  YVBAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  DYBAELA_discptr_code(A68_176  Dp);

A68_BOOL  GYBAELA_is_shaky(A68_176  Dp);

A68_BOOL  JYBAELA_is_assignable(A68_176  Dp);

A68_INT  MYBAELA_first_block(A68_176  Dp);

A68_INT  PYBAELA_first_offset(A68_176  Dp);

A68_INT  SYBAELA_data_elts(A68_176  Dp);

A68_INT  VYBAELA_dp_elts(A68_176  Dp);

A68_INT  YYBAELA_version(A68_176  Dp);

A68_INT  BZBAELA_read_size(A68_176  Dp);

A68_BOOL  FZBAELA_incorrect_sumcheck(A68_176  Dp);

A68_VOID  JZBAELA_change_dp_address(A68_176 * Dp, A68_180  Address);

A68_VOID  QZBAELA_overwrite_address(A68_VC  Chars, A68_INT  Offset, A68_180  New);

A68_BOOL  HACAELA_(A68_176  A, A68_176  B);

A68_BOOL  QACAELA_(A68_180  A, A68_180  B);

A68_BOOL  YACAELA_is_nildp(A68_176  Dp);

A68_VOID  CBCAELA_make_indirection(A68_VC  Chars, A68_181  *ReturnedValue);

A68_VOID  KBCAELA_indir_to_chars(A68_181  Indir, A68_VC  *ReturnedValue);

A68_VOID  JCCAELA_make_block_heading(A68_INT  Block_code, A68_INT  Next_block, A68_INT  Block_data, A68_INT  Block_dps, A68_INT  Data_start, A68_INT  Bh_read_size, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SCCAELA_generator(A68_BOOL  QCCAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  ZDCAELA_block_code(A68_VC  Chars);

A68_INT  HECAELA_next_block(A68_VC  Chars);

A68_INT  PECAELA_block_data(A68_VC  Chars);

A68_INT  XECAELA_block_dps(A68_VC  Chars);

A68_INT  FFCAELA_data_start(A68_VC  Chars);

A68_INT  NFCAELA_bh_read_size(A68_VC  Chars);

A68_VOID  GGCAELA_make_data_heading(A68_INT  Dh_code, A68_INT  Data_in_block, A68_INT  Dps_in_block, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NGCAELA_generator(A68_BOOL  LGCAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  MHCAELA_dh_code(A68_VC  Chars);

A68_INT  UHCAELA_data_in_block(A68_VC  Chars);

A68_INT  CICAELA_dps_in_block(A68_VC  Chars);

A68_BOOL  KICAELA_is_data_heading(A68_VC  Chars);

A_STATIC A68_VOID  YRBAELA_generator(A68_BOOL  WRBAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZRBAELA_generator *)NonLocals)->x)
{ 
A68_VC  ASBAELA;  /* clause result */
A68_VC  BSBAELA;  /* OPERATORS - dynamic generator */
{ 
BSBAELA.upb = EDAAOST_int_size ;
( WRBAELA_anonymous? A_VLOC(A68_CHAR ,BSBAELA): A_VHEAP(A68_CHAR ,BSBAELA) );
ASBAELA = BSBAELA;
} 
*ReturnedValue = (ASBAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AWBAELA_generator(A68_BOOL  YVBAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BWBAELA_generator *)NonLocals)->x)
{ 
A68_VC  CWBAELA;  /* clause result */
A68_VC  DWBAELA;  /* OPERATORS - dynamic generator */
{ 
DWBAELA.upb = TSBAELA_discptr_size ;
( YVBAELA_anonymous? A_VLOC(A68_CHAR ,DWBAELA): A_VHEAP(A68_CHAR ,DWBAELA) );
CWBAELA = DWBAELA;
} 
*ReturnedValue = (CWBAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SCCAELA_generator(A68_BOOL  QCCAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TCCAELA_generator *)NonLocals)->x)
{ 
A68_VC  UCCAELA;  /* clause result */
A68_VC  VCCAELA;  /* OPERATORS - dynamic generator */
{ 
VCCAELA.upb = CCCAELA_block_heading_size ;
( QCCAELA_anonymous? A_VLOC(A68_CHAR ,VCCAELA): A_VHEAP(A68_CHAR ,VCCAELA) );
UCCAELA = VCCAELA;
} 
*ReturnedValue = (UCCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NGCAELA_generator(A68_BOOL  LGCAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OGCAELA_generator *)NonLocals)->x)
{ 
A68_VC  PGCAELA;  /* clause result */
A68_VC  QGCAELA;  /* OPERATORS - dynamic generator */
{ 
QGCAELA.upb = CGCAELA_data_heading_size ;
( LGCAELA_anonymous? A_VLOC(A68_CHAR ,QGCAELA): A_VHEAP(A68_CHAR ,QGCAELA) );
PGCAELA = QGCAELA;
} 
*ReturnedValue = (PGCAELA);
return;
} 
#undef NL

A68_VOID  GNBAELA_keepsake_msg(A68_92  No, A68_46  Params)
{ 
A68_106  HNBAELA;  /* OPERATORS - mode -> union mode */
A68_201  INBAELA;  /* collateral clause result */
A68_95  LNBAELA;  /* avoid structure result */
A68_46  MNBAELA;  /* OPERATORS - istruct -> vector */
A68_VC  NNBAELA;  /* avoid structure result */
A68_46  ONBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(keepsake_msg);
 /* line 409: */
 /* line 410: */
if ( TKAAOSI_error_msg(A_UNITE(HNBAELA,mode1,1,No)) )
{ 
 /* line 411: */
INBAELA.data[0] = KNBAELA;
ONAAOSI_translate_msg( No, Params, &LNBAELA );
INBAELA.data[1] = LNBAELA.Text;
 /* line 412: */
JBAAOSI_concat( A_HISVEC(MNBAELA,INBAELA,2,A68_VC ), &NNBAELA );
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(ONBAELA,NNBAELA,A68_VC )),(SHAAOSI_system, A_HVEC(ONBAELA,NNBAELA,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
else
{ 
 /* line 413: */
A_CALLPROC(ZLBAOSI_global_msg,(No, Params),(No, Params,(ZLBAOSI_global_msg).nonlocals));
} 
A_PROC_EXIT(keepsake_msg);
return;
} 
#undef NL

A68_VOID  QNBAELA_keepsake_fault(A68_VC  S)
{ 
A68_46  RNBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(keepsake_fault);
GNBAELA_keepsake_msg(SHAAOSI_system, A_HVEC(RNBAELA,S,A68_VC ));
A_PROC_EXIT(keepsake_fault);
return;
} 
#undef NL

A_STATIC A68_BOOL  COBAELA_file_open_to_write(A68_111 * File, A68_97  Msg)
{ 
A68_BOOL  DOBAELA;  /* clause result */
A_PROC_ENTRY(file_open_to_write);
DOBAELA = A68_TRUE;
A_PROC_EXIT(file_open_to_write);
return( DOBAELA );
} 
#undef NL
 /* line 443: */

A68_VOID  IOBAELA_get_block(A68_111 * File, A68_VC  Buffer, A68_INT  Block, A68_97  Msg)
{ 
A68_LINT  JOBAELA_byte;
A68_35  KOBAELA;  /* avoid structure result */
A68_INT  LOBAELA_chars_read;
A68_35  MOBAELA;  /* avoid structure result */
A68_46  POBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(get_block);
 /* line 444: */
 /* line 446: */
{ 
JOBAELA_byte = ((A68_LINT )Block*XNBAELA_long_block_size);
 /* line 447: */
TSBAOSI_set_file_position( File, JOBAELA_byte, Msg, &KOBAELA );
KOBAELA;
 /* line 448: */
LOBAELA_chars_read = (-1);
 /* line 450: */
HRBAOSI_read_buffer( File, Buffer, (&LOBAELA_chars_read), Msg, &MOBAELA );
MOBAELA;
 /* line 451: */
 /* line 452: */
if ( (LOBAELA_chars_read!=Buffer.upb) )
{ 
 /* line 453: */
 /* line 454: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(POBAELA,OOBAELA,A68_VC )),(SHAAOSI_system, A_HVEC(POBAELA,OOBAELA,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(get_block);
return;
} 
#undef NL
 /* line 458: */

A68_VOID  UOBAELA_put_block(A68_111 * File, A68_VC  Buffer, A68_INT  Block, A68_97  Msg)
{ 
A68_LINT  VOBAELA_byte;
A68_35  WOBAELA;  /* avoid structure result */
A68_35  XOBAELA;  /* avoid structure result */
A_PROC_ENTRY(put_block);
 /* line 459: */
 /* line 461: */
{ 
VOBAELA_byte = ((A68_LINT )Block*XNBAELA_long_block_size);
 /* line 462: */
TSBAOSI_set_file_position( File, VOBAELA_byte, Msg, &WOBAELA );
WOBAELA;
 /* line 464: */
 /* line 465: */
JSBAOSI_write_buffer( File, Buffer, Msg, &XOBAELA );
XOBAELA;
} 
A_PROC_EXIT(put_block);
return;
} 
#undef NL

A68_INT  ZOBAELA_file_block_size(A68_111 * File)
{ 
A68_122  APBAELA;  /* OPERATORS - mode -> union mode */
A68_97  BPBAELA;  /* procedure value */
A68_LINT  CPBAELA_size;
A68_INT  DPBAELA;  /* clause result */
A_PROC_ENTRY(file_block_size);
 /* line 469: */
 /* line 470: */
{ 
BPBAELA.fn.fn_global = GNBAELA_keepsake_msg;
BPBAELA.nonlocals = A68_NIL;
CPBAELA_size = (*(&(NVBAOSI_get_file_details(A_UNITE(APBAELA,mode1,1,File), BPBAELA)->Size)));
 /* line 471: */
 /* line 472: */
DPBAELA = (A68_INT )(CPBAELA_size/XNBAELA_long_block_size);
} 
A_PROC_EXIT(file_block_size);
return( DPBAELA );
} 
#undef NL

A68_INT  HPBAELA_increase_db_file(A68_111 * File, A68_INT  Extra_bytes, A68_97  Msg)
{ 
A68_LINT  IPBAELA_current_pos;
A68_122  KPBAELA;  /* OPERATORS - mode -> union mode */
A68_LINT  JPBAELA_size;
A68_35  LPBAELA;  /* avoid structure result */
A68_INT  MPBAELA_extra;
A68_LINT  NPBAELA_last_block_pos;
A68_35  OPBAELA;  /* avoid structure result */
A68_VC  PPBAELA;  /* OPERATORS - istruct -> vector */
A68_35  QPBAELA;  /* avoid structure result */
A68_35  RPBAELA;  /* avoid structure result */
A68_INT  SPBAELA;  /* clause result */
A_PROC_ENTRY(increase_db_file);
 /* line 476: */
 /* line 477: */
{ 
JPBAELA_size = (*(&(NVBAOSI_get_file_details(A_UNITE(KPBAELA,mode1,1,File), Msg)->Size)));
 /* line 478: */
 /* line 479: */
CTBAOSI_get_file_position( File, (&IPBAELA_current_pos), Msg, &LPBAELA );
if ( PPBAOSI_(LPBAELA, DPBAOSI_io_ok) )
{ 
MPBAELA_extra = (((Extra_bytes+1)/SNBAELA_block_size)*SNBAELA_block_size);
 /* line 480: */
JPBAELA_size+=(A68_LINT )MPBAELA_extra;
 /* line 481: */
NPBAELA_last_block_pos = (JPBAELA_size-XNBAELA_long_block_size);
 /* line 482: */
TSBAOSI_set_file_position( File, NPBAELA_last_block_pos, Msg, &OPBAELA );
OPBAELA;
 /* line 483: */
JSBAOSI_write_buffer( File, A_HISVEC(PPBAELA,ZNBAELA_end_file_block,512,A68_CHAR ), Msg, &QPBAELA );
QPBAELA;
 /* line 484: */
 /* line 485: */
TSBAOSI_set_file_position( File, IPBAELA_current_pos, Msg, &RPBAELA );
RPBAELA;
} 
 /* line 486: */
 /* line 487: */
SPBAELA = (A68_INT )JPBAELA_size;
} 
A_PROC_EXIT(increase_db_file);
return( SPBAELA );
} 
#undef NL

A68_111 * WPBAELA_create_db_file(A68_VC  Name, A68_INT  Size, A68_97  Msg)
{ 
A68_111 * XPBAELA_file;
A68_LINT  YPBAELA_last_block_pos;
A68_LINT  ZPBAELA_start_pos;
A68_35  AQBAELA;  /* avoid structure result */
A68_35  BQBAELA;  /* avoid structure result */
A68_VC  CQBAELA;  /* OPERATORS - istruct -> vector */
A68_35  DQBAELA;  /* avoid structure result */
A68_35  EQBAELA;  /* avoid structure result */
A68_111 * FQBAELA;  /* clause result */
A_PROC_ENTRY(create_db_file);
 /* line 492: */
 /* line 494: */
{ 
XPBAELA_file = FQBAOSI_open_file(Name, IDAAOST_block_update_truncate_access, Msg);
 /* line 496: */
YPBAELA_last_block_pos = ((A68_LINT )Size-XNBAELA_long_block_size);
 /* line 497: */
 /* line 498: */
CTBAOSI_get_file_position( XPBAELA_file, (&ZPBAELA_start_pos), Msg, &AQBAELA );
AQBAELA;
 /* line 499: */
TSBAOSI_set_file_position( XPBAELA_file, YPBAELA_last_block_pos, Msg, &BQBAELA );
BQBAELA;
 /* line 500: */
JSBAOSI_write_buffer( XPBAELA_file, A_HISVEC(CQBAELA,ZNBAELA_end_file_block,512,A68_CHAR ), Msg, &DQBAELA );
DQBAELA;
 /* line 501: */
TSBAOSI_set_file_position( XPBAELA_file, ZPBAELA_start_pos, Msg, &EQBAELA );
EQBAELA;
 /* line 502: */
 /* line 503: */
FQBAELA = XPBAELA_file;
} 
A_PROC_EXIT(create_db_file);
return( FQBAELA );
} 
#undef NL

A_STATIC A68_VOID  HQBAELA_synchronise_file(A68_111 * File)
{ 
A68_97  IQBAELA;  /* procedure value */
A68_35  JQBAELA;  /* avoid structure result */
A_PROC_ENTRY(synchronise_file);
 /* line 506: */
IQBAELA.fn.fn_global = GNBAELA_keepsake_msg;
IQBAELA.nonlocals = A68_NIL;
NTBAOSI_update_disk( File, IQBAELA, &JQBAELA );
JQBAELA;
A_PROC_EXIT(synchronise_file);
return;
} 
#undef NL

A68_VOID  MQBAELA_clear_rvc(A68_VC  Rvc)
{ 
A68_CHAR * NQBAELA_c;
A68_INT  OQBAELA;  /* forall loop counter */
A_PROC_ENTRY(clear_rvc);
 /* line 520: */
OQBAELA = Rvc.upb -1;
NQBAELA_c = Rvc.data;
for (;OQBAELA-- >= 0;
(NQBAELA_c++
) )
{
(*NQBAELA_c) = KQBAELA_blank_char;
}
A_PROC_EXIT(clear_rvc);
return;
} 
#undef NL

A68_VOID  QQBAELA_clear_rvi(A68_32  Rvi)
{ 
A68_INT * RQBAELA_i;
A68_INT  SQBAELA;  /* forall loop counter */
A_PROC_ENTRY(clear_rvi);
 /* line 523: */
SQBAELA = Rvi.upb -1;
RQBAELA_i = Rvi.data;
for (;SQBAELA-- >= 0;
(RQBAELA_i++
) )
{
(*RQBAELA_i) = 0;
}
A_PROC_EXIT(clear_rvi);
return;
} 
#undef NL

A68_VOID  UQBAELA_clear_rvb(A68_54  Rvb)
{ 
A68_BOOL * VQBAELA_b;
A68_INT  WQBAELA;  /* forall loop counter */
A_PROC_ENTRY(clear_rvb);
 /* line 526: */
WQBAELA = Rvb.upb -1;
VQBAELA_b = Rvb.data;
for (;WQBAELA-- >= 0;
(VQBAELA_b++
) )
{
(*VQBAELA_b) = A68_FALSE;
}
A_PROC_EXIT(clear_rvb);
return;
} 
#undef NL

A_STATIC A68_INT  ZQBAELA_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  ARBAELA;  /* clause result */
A_PROC_ENTRY(min);
if ( (A<B) )
{ 
ARBAELA = A;
} 
else
{ 
ARBAELA = B;
} 
A_PROC_EXIT(min);
return( ARBAELA );
} 
#undef NL

A_STATIC A68_BITS  DRBAELA_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  ERBAELA;  /* clause result */
A_PROC_ENTRY(xor);
ERBAELA = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(~A&B));
A_PROC_EXIT(xor);
return( ERBAELA );
} 
#undef NL

A68_INT  IRBAELA_vctoi(A68_VC  Chars)
{ 
A68_INT  KRBAELA;  /* YIELD */
A68_INT  JRBAELA_ans;
A68_CHAR  LRBAELA_c;
A68_VC  MRBAELA;  /* OPERATORS - trim index */
A68_VC  NRBAELA;  /* forall yield */
A68_CHAR * ORBAELA;  /* forall control - []x */
A68_INT  PRBAELA;  /* forall loop counter */
A68_BITS  QRBAELA;  /* SHL */
A68_INT  RRBAELA;  /* clause result */
A_PROC_ENTRY(vctoi);
 /* line 543: */
 /* line 544: */
if ( (Chars.upb==EDAAOST_int_size) )
{ 
KRBAELA = 1 ;
JRBAELA_ans = (A68_INT)(unsigned char)A_VINDEX(Chars,KRBAELA);
 /* line 545: */
 /* line 546: */
NRBAELA = A_VTRIM(MRBAELA,(Chars),A_VTSCRIPT(&(MRBAELA.upb),(Chars).upb,2,(Chars).upb)) ;
PRBAELA = NRBAELA.upb -1;
ORBAELA = NRBAELA.data;
for (;PRBAELA-- >= 0;
(ORBAELA++
) )
{
LRBAELA_c = *ORBAELA;
QRBAELA = (A68_BITS )JRBAELA_ans ;
JRBAELA_ans = (A68_INT )(A68_BITS )(A_SHL(QRBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)LRBAELA_c);
}
 /* line 547: */
 /* line 548: */
RRBAELA = JRBAELA_ans;
} 
else
{ 
QNBAELA_keepsake_fault(TRBAELA);
 /* line 549: */
RRBAELA = 0;
} 
A_PROC_EXIT(vctoi);
return( RRBAELA );
} 
#undef NL

A68_VOID  VRBAELA_itovc(A68_INT  Integer, A68_VC  *ReturnedValue)
{ 
A68_31  XRBAELA_generator;   /* proc value of non-global proc */
A68_VC  DSBAELA;  /* avoid structure result */
A68_VC  CSBAELA_ans;
A68_BITS  ESBAELA_int;
A68_INT  FSBAELA_i;
A68_INT  GSBAELA;  /* by part of loop */
A68_CHAR * HSBAELA;  /* YIELD */
A68_VC  ISBAELA;  /* clause result */
A_PROC_ENTRY(itovc);
 /* line 552: */
 /* line 553: */
{ 
A_CLOSURE( XRBAELA_generator, YRBAELA_generator, ZRBAELA_generator );
A_CALLPROC(XRBAELA_generator,(A68_TRUE, &DSBAELA),(A68_TRUE, &DSBAELA,(XRBAELA_generator).nonlocals));
CSBAELA_ans = DSBAELA;
 /* line 554: */
ESBAELA_int = (A68_BITS )Integer;
 /* line 555: */
 /* line 556: */
GSBAELA = (-1);
for ( FSBAELA_i = EDAAOST_int_size;
( GSBAELA > 0 && FSBAELA_i <= 1) ||
( GSBAELA < 0 && FSBAELA_i >= 1) ||
( GSBAELA == 0 ) ;
FSBAELA_i += GSBAELA )
{ 
HSBAELA = (&A_VINDEX(CSBAELA_ans,FSBAELA_i)) ;
(*HSBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(ESBAELA_int&GRBAELA_byte_mask);
 /* line 557: */
 /* line 558: */
ESBAELA_int = A_SHR(ESBAELA_int,SMBAELA_byte_size);
}
 /* line 559: */
 /* line 560: */
ISBAELA = CSBAELA_ans;
} 
A_PROC_EXIT(itovc);
*ReturnedValue = (ISBAELA);
return;
} 
#undef NL

A68_BITS  PTBAELA_sumcheck(A68_176  Dp)
{ 
A68_BITS  QTBAELA;  /* clause result */
A_PROC_ENTRY(sumcheck);
 /* line 641: */
 /* line 642: */
 /* line 643: */
QTBAELA = DRBAELA_xor(DRBAELA_xor(DRBAELA_xor(DRBAELA_xor(DRBAELA_xor(DRBAELA_xor(CTBAELA_dpsc_mask, Dp.Code), (A68_BITS )Dp.First_offset), (A68_BITS )Dp.First_block), (A68_BITS )Dp.Data_elts), (A68_BITS )Dp.Dp_elts), (A68_BITS )Dp.Version);
A_PROC_EXIT(sumcheck);
return( QTBAELA );
} 
#undef NL
 /* line 650: */

A68_VOID  ZTBAELA_make_dp(A68_BOOL  Shaky, A68_BOOL  Assignable, A68_INT  Discptr_code, A68_INT  Data_elts, A68_INT  Dp_elts, A68_INT  Version, A68_INT  Read_size, A68_180  Addr, A68_176  *ReturnedValue)
{ 
A68_176  AUBAELA;  /* collateral clause result */
A68_BITS  BUBAELA;  /* clause result */
A68_BITS  CUBAELA;  /* clause result */
A68_BITS  DUBAELA;  /* SHL */
A68_176  EUBAELA_dp;
A68_BITS * FUBAELA;  /* YIELD */
A68_176  GUBAELA;  /* clause result */
A_PROC_ENTRY(make_dp);
 /* line 651: */
 /* line 652: */
{ 
if ( Shaky )
{ 
BUBAELA = ETBAELA_shaky_mask;
} 
else
{ 
 /* line 653: */
BUBAELA = KTBAELA_no_mask;
} 
if ( Assignable )
{ 
CUBAELA = GTBAELA_assignable_mask;
} 
else
{ 
CUBAELA = KTBAELA_no_mask;
} 
 /* line 654: */
 /* line 655: */
 /* line 656: */
DUBAELA = (A68_BITS )Read_size ;
AUBAELA.Code = (A68_BITS )((A68_BITS )((A68_BITS )(BUBAELA|CUBAELA)|A_SHL(DUBAELA,USBAELA_read_size_offset))|(A68_BITS )Discptr_code);
AUBAELA.First_block = Addr.Block_num;
AUBAELA.First_offset = Addr.Offset;
AUBAELA.Data_elts = Data_elts;
 /* line 657: */
AUBAELA.Dp_elts = Dp_elts;
 /* line 658: */
AUBAELA.Version = Version;
AUBAELA.Sumcheck = 0X0U;
EUBAELA_dp = AUBAELA;
 /* line 659: */
FUBAELA = (&((&EUBAELA_dp)->Sumcheck)) ;
(*FUBAELA) = PTBAELA_sumcheck(EUBAELA_dp);
 /* line 660: */
 /* line 661: */
GUBAELA = EUBAELA_dp;
} 
A_PROC_EXIT(make_dp);
*ReturnedValue = (GUBAELA);
return;
} 
#undef NL

A68_VOID  IUBAELA_chars_to_dp(A68_VC  Chars, A68_176  *ReturnedValue)
{ 
A68_INT  JUBAELA_code;
A68_INT  KUBAELA_booleans;
A68_INT  LUBAELA_index;
A68_INT  MUBAELA_block;
A68_INT  NUBAELA_offset;
A68_INT  OUBAELA_data_elts;
A68_INT  PUBAELA_dp_elts;
A68_INT  QUBAELA_version;
A68_INT  RUBAELA_read_size;
A68_INT  SUBAELA;  /* to part of loop */
A68_INT  TUBAELA;  /* loop control */
A68_BITS  UUBAELA;  /* SHL */
A68_INT  VUBAELA;  /* YIELD */
A68_INT  WUBAELA;  /* to part of loop */
A68_INT  XUBAELA;  /* loop control */
A68_BITS  YUBAELA;  /* SHL */
A68_INT  ZUBAELA;  /* YIELD */
A68_INT  AVBAELA;  /* to part of loop */
A68_INT  BVBAELA;  /* loop control */
A68_BITS  CVBAELA;  /* SHL */
A68_INT  DVBAELA;  /* YIELD */
A68_INT  EVBAELA;  /* to part of loop */
A68_INT  FVBAELA;  /* loop control */
A68_BITS  GVBAELA;  /* SHL */
A68_INT  HVBAELA;  /* YIELD */
A68_INT  IVBAELA;  /* to part of loop */
A68_INT  JVBAELA;  /* loop control */
A68_BITS  KVBAELA;  /* SHL */
A68_INT  LVBAELA;  /* YIELD */
A68_INT  MVBAELA;  /* to part of loop */
A68_INT  NVBAELA;  /* loop control */
A68_BITS  OVBAELA;  /* SHL */
A68_INT  PVBAELA;  /* YIELD */
A68_176  QVBAELA;  /* collateral clause result */
A68_BITS  RVBAELA;  /* SHR */
A68_BITS  SVBAELA;  /* SHL */
A68_176  TVBAELA_dp;
A68_BITS * UVBAELA;  /* YIELD */
A68_176  VVBAELA;  /* clause result */
A_PROC_ENTRY(chars_to_dp);
 /* line 670: */
 /* line 671: */
{ 
JUBAELA_code = (A68_INT)(unsigned char)A_VINDEX(Chars,WSBAELA_code_index);
KUBAELA_booleans = (A68_INT)(unsigned char)A_VINDEX(Chars,XSBAELA_boolean_index);
 /* line 672: */
LUBAELA_index = XSBAELA_boolean_index;
MUBAELA_block = 0;
NUBAELA_offset = 0;
OUBAELA_data_elts = 0;
 /* line 673: */
PUBAELA_dp_elts = 0;
QUBAELA_version = 0;
RUBAELA_read_size = 0;
 /* line 675: */
 /* line 676: */
SUBAELA = LSBAELA_desc_file_size;
for ( TUBAELA = 1;
TUBAELA <= SUBAELA;
TUBAELA += 1 )
{ 
 /* line 677: */
 /* line 678: */
UUBAELA = (A68_BITS )MUBAELA_block ;
VUBAELA = LUBAELA_index+=1 ;
MUBAELA_block = (A68_INT )(A68_BITS )(A_SHL(UUBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,VUBAELA));
}
 /* line 679: */
 /* line 680: */
WUBAELA = PSBAELA_desc_block_size;
for ( XUBAELA = 1;
XUBAELA <= WUBAELA;
XUBAELA += 1 )
{ 
 /* line 681: */
 /* line 682: */
YUBAELA = (A68_BITS )NUBAELA_offset ;
ZUBAELA = LUBAELA_index+=1 ;
NUBAELA_offset = (A68_INT )(A68_BITS )(A_SHL(YUBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,ZUBAELA));
}
 /* line 683: */
 /* line 684: */
AVBAELA = EDAAOST_int_size;
for ( BVBAELA = 1;
BVBAELA <= AVBAELA;
BVBAELA += 1 )
{ 
 /* line 685: */
 /* line 686: */
CVBAELA = (A68_BITS )OUBAELA_data_elts ;
DVBAELA = LUBAELA_index+=1 ;
OUBAELA_data_elts = (A68_INT )(A68_BITS )(A_SHL(CVBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,DVBAELA));
}
 /* line 687: */
 /* line 688: */
EVBAELA = EDAAOST_int_size;
for ( FVBAELA = 1;
FVBAELA <= EVBAELA;
FVBAELA += 1 )
{ 
 /* line 689: */
 /* line 690: */
GVBAELA = (A68_BITS )PUBAELA_dp_elts ;
HVBAELA = LUBAELA_index+=1 ;
PUBAELA_dp_elts = (A68_INT )(A68_BITS )(A_SHL(GVBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,HVBAELA));
}
 /* line 691: */
 /* line 692: */
IVBAELA = QSBAELA_desc_version_size;
for ( JVBAELA = 1;
JVBAELA <= IVBAELA;
JVBAELA += 1 )
{ 
 /* line 693: */
 /* line 694: */
KVBAELA = (A68_BITS )QUBAELA_version ;
LVBAELA = LUBAELA_index+=1 ;
QUBAELA_version = (A68_INT )(A68_BITS )(A_SHL(KVBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,LVBAELA));
}
 /* line 695: */
 /* line 696: */
MVBAELA = RSBAELA_desc_buffer_size;
for ( NVBAELA = 1;
NVBAELA <= MVBAELA;
NVBAELA += 1 )
{ 
 /* line 697: */
 /* line 698: */
OVBAELA = (A68_BITS )RUBAELA_read_size ;
PVBAELA = LUBAELA_index+=1 ;
RUBAELA_read_size = (A68_INT )(A68_BITS )(A_SHL(OVBAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,PVBAELA));
}
 /* line 700: */
 /* line 701: */
 /* line 702: */
RVBAELA = (A68_BITS )KUBAELA_booleans ;
SVBAELA = (A68_BITS )RUBAELA_read_size ;
QVBAELA.Code = (A68_BITS )((A68_BITS )(A_SHR(RVBAELA,VSBAELA_boolean_offset)|(A68_BITS )JUBAELA_code)|A_SHL(SVBAELA,USBAELA_read_size_offset));
QVBAELA.First_block = MUBAELA_block;
QVBAELA.First_offset = NUBAELA_offset;
QVBAELA.Data_elts = OUBAELA_data_elts;
QVBAELA.Dp_elts = PUBAELA_dp_elts;
 /* line 703: */
QVBAELA.Version = QUBAELA_version;
QVBAELA.Sumcheck = 0X0U;
TVBAELA_dp = QVBAELA;
 /* line 704: */
UVBAELA = (&((&TVBAELA_dp)->Sumcheck)) ;
(*UVBAELA) = PTBAELA_sumcheck(TVBAELA_dp);
 /* line 705: */
 /* line 706: */
VVBAELA = TVBAELA_dp;
} 
A_PROC_EXIT(chars_to_dp);
*ReturnedValue = (VVBAELA);
return;
} 
#undef NL

A68_VOID  XVBAELA_dp_to_chars(A68_176  Dp, A68_VC  *ReturnedValue)
{ 
A68_31  ZVBAELA_generator;   /* proc value of non-global proc */
A68_VC  FWBAELA;  /* avoid structure result */
A68_VC  EWBAELA_chars;
A68_CHAR * GWBAELA;  /* YIELD */
A68_BITS  HWBAELA;  /* SHR */
A68_CHAR * IWBAELA;  /* YIELD */
A68_INT  JWBAELA_index;
A68_BITS  KWBAELA_block;
A68_BITS  LWBAELA_offset;
A68_BITS  MWBAELA_data_elts;
A68_BITS  NWBAELA_dp_elts;
A68_BITS  OWBAELA_version;
A68_BITS  QWBAELA;  /* SHR */
A68_BITS  PWBAELA_read_size;
A68_INT  RWBAELA;  /* YIELD */
A68_CHAR * SWBAELA;  /* YIELD */
A68_INT  TWBAELA_i;
A68_INT  UWBAELA;  /* to part of loop */
A68_INT  VWBAELA;  /* YIELD */
A68_CHAR * WWBAELA;  /* YIELD */
A68_INT  XWBAELA;  /* YIELD */
A68_CHAR * YWBAELA;  /* YIELD */
A68_INT  ZWBAELA_i;
A68_INT  AXBAELA;  /* to part of loop */
A68_INT  BXBAELA;  /* YIELD */
A68_CHAR * CXBAELA;  /* YIELD */
A68_INT  DXBAELA;  /* YIELD */
A68_CHAR * EXBAELA;  /* YIELD */
A68_INT  FXBAELA_i;
A68_INT  GXBAELA;  /* to part of loop */
A68_INT  HXBAELA;  /* YIELD */
A68_CHAR * IXBAELA;  /* YIELD */
A68_INT  JXBAELA;  /* YIELD */
A68_CHAR * KXBAELA;  /* YIELD */
A68_INT  LXBAELA_i;
A68_INT  MXBAELA;  /* to part of loop */
A68_INT  NXBAELA;  /* YIELD */
A68_CHAR * OXBAELA;  /* YIELD */
A68_INT  PXBAELA;  /* YIELD */
A68_CHAR * QXBAELA;  /* YIELD */
A68_INT  RXBAELA_i;
A68_INT  SXBAELA;  /* to part of loop */
A68_INT  TXBAELA;  /* YIELD */
A68_CHAR * UXBAELA;  /* YIELD */
A68_INT  VXBAELA;  /* YIELD */
A68_CHAR * WXBAELA;  /* YIELD */
A68_INT  XXBAELA;  /* to part of loop */
A68_INT  YXBAELA;  /* loop control */
A68_INT  ZXBAELA;  /* YIELD */
A68_CHAR * AYBAELA;  /* YIELD */
A68_VC  BYBAELA;  /* clause result */
A_PROC_ENTRY(dp_to_chars);
 /* line 710: */
 /* line 711: */
{ 
A_CLOSURE( ZVBAELA_generator, AWBAELA_generator, BWBAELA_generator );
A_CALLPROC(ZVBAELA_generator,(A68_TRUE, &FWBAELA),(A68_TRUE, &FWBAELA,(ZVBAELA_generator).nonlocals));
EWBAELA_chars = FWBAELA;
 /* line 712: */
GWBAELA = (&A_VINDEX(EWBAELA_chars,WSBAELA_code_index)) ;
(*GWBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(Dp.Code&LTBAELA_code_mask);
 /* line 713: */
 /* line 714: */
HWBAELA = (A68_BITS )(Dp.Code&JTBAELA_boolean_mask) ;
IWBAELA = (&A_VINDEX(EWBAELA_chars,XSBAELA_boolean_index)) ;
(*IWBAELA) = (A68_CHAR)(A68_INT )A_SHR(HWBAELA,VSBAELA_boolean_offset);
 /* line 715: */
JWBAELA_index = XSBAELA_boolean_index;
 /* line 716: */
KWBAELA_block = (A68_BITS )Dp.First_block;
LWBAELA_offset = (A68_BITS )Dp.First_offset;
 /* line 717: */
MWBAELA_data_elts = (A68_BITS )Dp.Data_elts;
NWBAELA_dp_elts = (A68_BITS )Dp.Dp_elts;
 /* line 718: */
OWBAELA_version = (A68_BITS )Dp.Version;
 /* line 719: */
QWBAELA = (A68_BITS )(Dp.Code&NTBAELA_read_size_mask) ;
PWBAELA_read_size = A_SHR(QWBAELA,USBAELA_read_size_offset);
 /* line 721: */
RWBAELA = JWBAELA_index+=LSBAELA_desc_file_size ;
SWBAELA = (&A_VINDEX(EWBAELA_chars,RWBAELA)) ;
(*SWBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(KWBAELA_block&GRBAELA_byte_mask);
 /* line 722: */
 /* line 723: */
UWBAELA = (LSBAELA_desc_file_size-1);
for ( TWBAELA_i = 1;
TWBAELA_i <= UWBAELA;
TWBAELA_i += 1 )
{ 
KWBAELA_block = A_SHR(KWBAELA_block,SMBAELA_byte_size);
 /* line 724: */
 /* line 725: */
VWBAELA = (JWBAELA_index-TWBAELA_i) ;
WWBAELA = (&A_VINDEX(EWBAELA_chars,VWBAELA)) ;
(*WWBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(KWBAELA_block&GRBAELA_byte_mask);
}
 /* line 726: */
XWBAELA = JWBAELA_index+=PSBAELA_desc_block_size ;
YWBAELA = (&A_VINDEX(EWBAELA_chars,XWBAELA)) ;
(*YWBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(LWBAELA_offset&GRBAELA_byte_mask);
 /* line 727: */
 /* line 728: */
AXBAELA = (PSBAELA_desc_block_size-1);
for ( ZWBAELA_i = 1;
ZWBAELA_i <= AXBAELA;
ZWBAELA_i += 1 )
{ 
LWBAELA_offset = A_SHR(LWBAELA_offset,SMBAELA_byte_size);
 /* line 729: */
 /* line 730: */
BXBAELA = (JWBAELA_index-ZWBAELA_i) ;
CXBAELA = (&A_VINDEX(EWBAELA_chars,BXBAELA)) ;
(*CXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(LWBAELA_offset&GRBAELA_byte_mask);
}
 /* line 731: */
DXBAELA = JWBAELA_index+=EDAAOST_int_size ;
EXBAELA = (&A_VINDEX(EWBAELA_chars,DXBAELA)) ;
(*EXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(MWBAELA_data_elts&GRBAELA_byte_mask);
 /* line 732: */
 /* line 733: */
GXBAELA = (EDAAOST_int_size-1);
for ( FXBAELA_i = 1;
FXBAELA_i <= GXBAELA;
FXBAELA_i += 1 )
{ 
MWBAELA_data_elts = A_SHR(MWBAELA_data_elts,SMBAELA_byte_size);
 /* line 734: */
 /* line 735: */
HXBAELA = (JWBAELA_index-FXBAELA_i) ;
IXBAELA = (&A_VINDEX(EWBAELA_chars,HXBAELA)) ;
(*IXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(MWBAELA_data_elts&GRBAELA_byte_mask);
}
 /* line 736: */
JXBAELA = JWBAELA_index+=EDAAOST_int_size ;
KXBAELA = (&A_VINDEX(EWBAELA_chars,JXBAELA)) ;
(*KXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(NWBAELA_dp_elts&GRBAELA_byte_mask);
 /* line 737: */
 /* line 738: */
MXBAELA = (EDAAOST_int_size-1);
for ( LXBAELA_i = 1;
LXBAELA_i <= MXBAELA;
LXBAELA_i += 1 )
{ 
NWBAELA_dp_elts = A_SHR(NWBAELA_dp_elts,SMBAELA_byte_size);
 /* line 739: */
 /* line 740: */
NXBAELA = (JWBAELA_index-LXBAELA_i) ;
OXBAELA = (&A_VINDEX(EWBAELA_chars,NXBAELA)) ;
(*OXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(NWBAELA_dp_elts&GRBAELA_byte_mask);
}
 /* line 741: */
 /* line 742: */
PXBAELA = JWBAELA_index+=QSBAELA_desc_version_size ;
QXBAELA = (&A_VINDEX(EWBAELA_chars,PXBAELA)) ;
(*QXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(OWBAELA_version&GRBAELA_byte_mask);
 /* line 743: */
 /* line 744: */
SXBAELA = (QSBAELA_desc_version_size-1);
for ( RXBAELA_i = 1;
RXBAELA_i <= SXBAELA;
RXBAELA_i += 1 )
{ 
OWBAELA_version = A_SHR(OWBAELA_version,SMBAELA_byte_size);
 /* line 745: */
 /* line 746: */
TXBAELA = (JWBAELA_index-RXBAELA_i) ;
UXBAELA = (&A_VINDEX(EWBAELA_chars,TXBAELA)) ;
(*UXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(OWBAELA_version&GRBAELA_byte_mask);
}
 /* line 747: */
VXBAELA = JWBAELA_index+=RSBAELA_desc_buffer_size ;
WXBAELA = (&A_VINDEX(EWBAELA_chars,VXBAELA)) ;
(*WXBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(PWBAELA_read_size&GRBAELA_byte_mask);
 /* line 748: */
 /* line 749: */
XXBAELA = (RSBAELA_desc_buffer_size-1);
for ( YXBAELA = 1;
YXBAELA <= XXBAELA;
YXBAELA += 1 )
{ 
PWBAELA_read_size = A_SHR(PWBAELA_read_size,SMBAELA_byte_size);
 /* line 750: */
 /* line 751: */
ZXBAELA = JWBAELA_index-=1 ;
AYBAELA = (&A_VINDEX(EWBAELA_chars,ZXBAELA)) ;
(*AYBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(PWBAELA_read_size&GRBAELA_byte_mask);
}
 /* line 752: */
 /* line 753: */
BYBAELA = EWBAELA_chars;
} 
A_PROC_EXIT(dp_to_chars);
*ReturnedValue = (BYBAELA);
return;
} 
#undef NL

A68_INT  DYBAELA_discptr_code(A68_176  Dp)
{ 
A68_INT  EYBAELA;  /* clause result */
A_PROC_ENTRY(discptr_code);
EYBAELA = (A68_INT )(A68_BITS )(Dp.Code&LTBAELA_code_mask);
A_PROC_EXIT(discptr_code);
return( EYBAELA );
} 
#undef NL

A68_BOOL  GYBAELA_is_shaky(A68_176  Dp)
{ 
A68_BOOL  HYBAELA;  /* clause result */
A_PROC_ENTRY(is_shaky);
HYBAELA = ((A68_BITS )(Dp.Code&ETBAELA_shaky_mask)==ETBAELA_shaky_mask);
A_PROC_EXIT(is_shaky);
return( HYBAELA );
} 
#undef NL

A68_BOOL  JYBAELA_is_assignable(A68_176  Dp)
{ 
A68_BOOL  KYBAELA;  /* clause result */
A_PROC_ENTRY(is_assignable);
 /* line 772: */
KYBAELA = ((A68_BITS )(Dp.Code&GTBAELA_assignable_mask)==GTBAELA_assignable_mask);
A_PROC_EXIT(is_assignable);
return( KYBAELA );
} 
#undef NL

A68_INT  MYBAELA_first_block(A68_176  Dp)
{ 
A68_INT  NYBAELA;  /* clause result */
A_PROC_ENTRY(first_block);
NYBAELA = Dp.First_block;
A_PROC_EXIT(first_block);
return( NYBAELA );
} 
#undef NL

A68_INT  PYBAELA_first_offset(A68_176  Dp)
{ 
A68_INT  QYBAELA;  /* clause result */
A_PROC_ENTRY(first_offset);
QYBAELA = Dp.First_offset;
A_PROC_EXIT(first_offset);
return( QYBAELA );
} 
#undef NL

A68_INT  SYBAELA_data_elts(A68_176  Dp)
{ 
A68_INT  TYBAELA;  /* clause result */
A_PROC_ENTRY(data_elts);
TYBAELA = Dp.Data_elts;
A_PROC_EXIT(data_elts);
return( TYBAELA );
} 
#undef NL

A68_INT  VYBAELA_dp_elts(A68_176  Dp)
{ 
A68_INT  WYBAELA;  /* clause result */
A_PROC_ENTRY(dp_elts);
WYBAELA = Dp.Dp_elts;
A_PROC_EXIT(dp_elts);
return( WYBAELA );
} 
#undef NL

A68_INT  YYBAELA_version(A68_176  Dp)
{ 
A68_INT  ZYBAELA;  /* clause result */
A_PROC_ENTRY(version);
ZYBAELA = Dp.Version;
A_PROC_EXIT(version);
return( ZYBAELA );
} 
#undef NL

A68_INT  BZBAELA_read_size(A68_176  Dp)
{ 
A68_INT  CZBAELA;  /* clause result */
A68_BITS  DZBAELA;  /* SHR */
A_PROC_ENTRY(read_size);
 /* line 785: */
DZBAELA = (A68_BITS )(Dp.Code&NTBAELA_read_size_mask) ;
CZBAELA = (A68_INT )A_SHR(DZBAELA,USBAELA_read_size_offset);
A_PROC_EXIT(read_size);
return( CZBAELA );
} 
#undef NL

A68_BOOL  FZBAELA_incorrect_sumcheck(A68_176  Dp)
{ 
A68_BOOL  GZBAELA;  /* clause result */
A_PROC_ENTRY(incorrect_sumcheck);
 /* line 788: */
GZBAELA = (PTBAELA_sumcheck(Dp)!=Dp.Sumcheck);
A_PROC_EXIT(incorrect_sumcheck);
return( GZBAELA );
} 
#undef NL

A68_VOID  JZBAELA_change_dp_address(A68_176 * Dp, A68_180  Address)
{ 
A68_INT * KZBAELA;  /* YIELD */
A68_INT * LZBAELA;  /* YIELD */
A68_BITS * MZBAELA;  /* YIELD */
A_PROC_ENTRY(change_dp_address);
 /* line 791: */
 /* line 792: */
{ 
KZBAELA = (&(Dp->First_block)) ;
(*KZBAELA) = Address.Block_num;
 /* line 793: */
LZBAELA = (&(Dp->First_offset)) ;
(*LZBAELA) = Address.Offset;
 /* line 794: */
 /* line 795: */
MZBAELA = (&(Dp->Sumcheck)) ;
(*MZBAELA) = PTBAELA_sumcheck((*Dp));
} 
A_PROC_EXIT(change_dp_address);
return;
} 
#undef NL

A68_VOID  QZBAELA_overwrite_address(A68_VC  Chars, A68_INT  Offset, A68_180  New)
{ 
A68_INT  RZBAELA_index;
A68_BITS  SZBAELA_off;
A68_BITS  TZBAELA_addr;
A68_CHAR * UZBAELA;  /* YIELD */
A68_INT  VZBAELA;  /* to part of loop */
A68_INT  WZBAELA;  /* loop control */
A68_INT  XZBAELA;  /* YIELD */
A68_CHAR * YZBAELA;  /* YIELD */
A68_INT  ZZBAELA;  /* YIELD */
A68_CHAR * AACAELA;  /* YIELD */
A68_INT  BACAELA_i;
A68_INT  CACAELA;  /* to part of loop */
A68_INT  DACAELA;  /* YIELD */
A68_CHAR * EACAELA;  /* YIELD */
A_PROC_ENTRY(overwrite_address);
 /* line 799: */
 /* line 800: */
{ 
RZBAELA_index = (((Offset+XSBAELA_boolean_index)+LSBAELA_desc_file_size)+PSBAELA_desc_block_size);
 /* line 801: */
SZBAELA_off = (A68_BITS )New.Offset;
TZBAELA_addr = (A68_BITS )New.Block_num;
 /* line 802: */
UZBAELA = (&A_VINDEX(Chars,RZBAELA_index)) ;
(*UZBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(SZBAELA_off&GRBAELA_byte_mask);
 /* line 803: */
 /* line 804: */
VZBAELA = (PSBAELA_desc_block_size-1);
for ( WZBAELA = 1;
WZBAELA <= VZBAELA;
WZBAELA += 1 )
{ 
SZBAELA_off = A_SHR(SZBAELA_off,SMBAELA_byte_size);
 /* line 805: */
 /* line 806: */
XZBAELA = RZBAELA_index-=1 ;
YZBAELA = (&A_VINDEX(Chars,XZBAELA)) ;
(*YZBAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(SZBAELA_off&GRBAELA_byte_mask);
}
 /* line 807: */
ZZBAELA = RZBAELA_index-=1 ;
AACAELA = (&A_VINDEX(Chars,ZZBAELA)) ;
(*AACAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(TZBAELA_addr&GRBAELA_byte_mask);
 /* line 808: */
 /* line 809: */
CACAELA = (LSBAELA_desc_file_size-1);
for ( BACAELA_i = 1;
BACAELA_i <= CACAELA;
BACAELA_i += 1 )
{ 
TZBAELA_addr = A_SHR(TZBAELA_addr,SMBAELA_byte_size);
 /* line 810: */
 /* line 811: */
DACAELA = RZBAELA_index-=1 ;
EACAELA = (&A_VINDEX(Chars,DACAELA)) ;
(*EACAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(TZBAELA_addr&GRBAELA_byte_mask);
}
 /* line 812: */
} 
A_PROC_EXIT(overwrite_address);
return;
} 
#undef NL

A68_BOOL  HACAELA_(A68_176  A, A68_176  B)
{ 
A68_BOOL  IACAELA;  /* optbool result */
A68_BOOL  JACAELA;  /* clause result */
A_PROC_ENTRY(=);
 /* line 816: */
IACAELA = (A.Code==B.Code);
if ( IACAELA )
{IACAELA = (A.First_block==B.First_block);
}
 /* line 817: */
if ( IACAELA )
{IACAELA = (A.First_offset==B.First_offset);
}
 /* line 818: */
if ( IACAELA )
{IACAELA = (A.Data_elts==B.Data_elts);
}
if ( IACAELA )
{IACAELA = (A.Dp_elts==B.Dp_elts);
}
 /* line 819: */
if ( IACAELA )
{IACAELA = (A.Version==B.Version);
}
if ( IACAELA )
{IACAELA = (A.Sumcheck==B.Sumcheck);
}
JACAELA = IACAELA;
A_PROC_EXIT(=);
return( JACAELA );
} 
#undef NL

A68_BOOL  QACAELA_(A68_180  A, A68_180  B)
{ 
A68_BOOL  RACAELA;  /* optbool result */
A68_BOOL  SACAELA;  /* clause result */
A_PROC_ENTRY(=);
 /* line 829: */
RACAELA = (A.Block_num==B.Block_num);
if ( RACAELA )
{RACAELA = (A.Offset==B.Offset);
}
SACAELA = RACAELA;
A_PROC_EXIT(=);
return( SACAELA );
} 
#undef NL

A68_BOOL  YACAELA_is_nildp(A68_176  Dp)
{ 
A68_BOOL  ZACAELA;  /* clause result */
A_PROC_ENTRY(is_nildp);
ZACAELA = HACAELA_(Dp, UACAELA_nilptr);
A_PROC_EXIT(is_nildp);
return( ZACAELA );
} 
#undef NL

A68_VOID  CBCAELA_make_indirection(A68_VC  Chars, A68_181  *ReturnedValue)
{ 
A68_176  DBCAELA;  /* avoid structure result */
A68_176  EBCAELA_dp;
A68_181  HBCAELA;  /* collateral clause result */
A68_181  IBCAELA;  /* clause result */
A_PROC_ENTRY(make_indirection);
 /* line 848: */
 /* line 849: */
{ 
IUBAELA_chars_to_dp( Chars, &DBCAELA );
EBCAELA_dp = DBCAELA;
 /* line 850: */
 /* line 851: */
if ( ((A68_BITS )(EBCAELA_dp.Code&ITBAELA_indirection_mask)!=ITBAELA_indirection_mask) )
{ 
 /* line 852: */
QNBAELA_keepsake_fault(GBCAELA);
} 
 /* line 853: */
HBCAELA.Shaky = GYBAELA_is_shaky(EBCAELA_dp);
HBCAELA.Address.Block_num = MYBAELA_first_block(EBCAELA_dp);
HBCAELA.Address.Offset = PYBAELA_first_offset(EBCAELA_dp);
 /* line 854: */
HBCAELA.Data_elts = SYBAELA_data_elts(EBCAELA_dp);
HBCAELA.Dp_elts = VYBAELA_dp_elts(EBCAELA_dp);
HBCAELA.Code = DYBAELA_discptr_code(EBCAELA_dp);
HBCAELA.Version = YYBAELA_version(EBCAELA_dp);
 /* line 855: */
HBCAELA.Read_size = BZBAELA_read_size(EBCAELA_dp);
IBCAELA = HBCAELA;
} 
A_PROC_EXIT(make_indirection);
*ReturnedValue = (IBCAELA);
return;
} 
#undef NL

A68_VOID  KBCAELA_indir_to_chars(A68_181  Indir, A68_VC  *ReturnedValue)
{ 
A68_176  MBCAELA;  /* avoid structure result */
A68_176  LBCAELA_dp;
A68_BITS * NBCAELA;  /* YIELD */
A68_VC  OBCAELA;  /* clause result */
A68_VC  PBCAELA;  /* avoid structure result */
A_PROC_ENTRY(indir_to_chars);
 /* line 858: */
 /* line 859: */
{ 
 /* line 860: */
 /* line 861: */
 /* line 862: */
ZTBAELA_make_dp( Indir.Shaky, A68_FALSE, Indir.Code, Indir.Data_elts, Indir.Dp_elts, Indir.Version, Indir.Read_size, Indir.Address, &MBCAELA );
LBCAELA_dp = MBCAELA;
 /* line 863: */
NBCAELA = (&((&LBCAELA_dp)->Code)) ;
(*NBCAELA) = (A68_BITS )((*(&((&LBCAELA_dp)->Code)))&ITBAELA_indirection_mask);
 /* line 864: */
 /* line 865: */
XVBAELA_dp_to_chars( LBCAELA_dp, &PBCAELA );
OBCAELA = PBCAELA;
} 
A_PROC_EXIT(indir_to_chars);
*ReturnedValue = (OBCAELA);
return;
} 
#undef NL
 /* line 905: */

A68_VOID  JCCAELA_make_block_heading(A68_INT  Block_code, A68_INT  Next_block, A68_INT  Block_data, A68_INT  Block_dps, A68_INT  Data_start, A68_INT  Bh_read_size, A68_VC  *ReturnedValue)
{ 
A68_BITS  KCCAELA_code;
A68_BITS  LCCAELA_next;
A68_BITS  MCCAELA_data;
A68_BITS  NCCAELA_dps;
A68_BITS  OCCAELA_start;
A68_BITS  PCCAELA_size;
A68_31  RCCAELA_generator;   /* proc value of non-global proc */
A68_VC  XCCAELA;  /* avoid structure result */
A68_VC  WCCAELA_bh;
A68_INT  YCCAELA_ind;
A68_INT  ZCCAELA;  /* to part of loop */
A68_INT  ADCAELA;  /* loop control */
A68_INT  BDCAELA;  /* YIELD */
A68_CHAR * CDCAELA;  /* YIELD */
A68_INT  DDCAELA;  /* to part of loop */
A68_INT  EDCAELA;  /* loop control */
A68_INT  FDCAELA;  /* YIELD */
A68_CHAR * GDCAELA;  /* YIELD */
A68_INT  HDCAELA;  /* to part of loop */
A68_INT  IDCAELA;  /* loop control */
A68_INT  JDCAELA;  /* YIELD */
A68_CHAR * KDCAELA;  /* YIELD */
A68_INT  LDCAELA;  /* to part of loop */
A68_INT  MDCAELA;  /* loop control */
A68_INT  NDCAELA;  /* YIELD */
A68_CHAR * ODCAELA;  /* YIELD */
A68_INT  PDCAELA;  /* to part of loop */
A68_INT  QDCAELA;  /* loop control */
A68_INT  RDCAELA;  /* YIELD */
A68_CHAR * SDCAELA;  /* YIELD */
A68_INT  TDCAELA;  /* to part of loop */
A68_INT  UDCAELA;  /* loop control */
A68_INT  VDCAELA;  /* YIELD */
A68_CHAR * WDCAELA;  /* YIELD */
A68_VC  XDCAELA;  /* clause result */
A_PROC_ENTRY(make_block_heading);
 /* line 906: */
 /* line 907: */
{ 
KCCAELA_code = (A68_BITS )Block_code;
LCCAELA_next = (A68_BITS )Next_block;
MCCAELA_data = (A68_BITS )Block_data;
 /* line 908: */
NCCAELA_dps = (A68_BITS )Block_dps;
OCCAELA_start = (A68_BITS )Data_start;
PCCAELA_size = (A68_BITS )Bh_read_size;
 /* line 909: */
A_CLOSURE( RCCAELA_generator, SCCAELA_generator, TCCAELA_generator );
A_CALLPROC(RCCAELA_generator,(A68_TRUE, &XCCAELA),(A68_TRUE, &XCCAELA,(RCCAELA_generator).nonlocals));
WCCAELA_bh = XCCAELA;
 /* line 910: */
YCCAELA_ind = 0;
 /* line 911: */
 /* line 912: */
ZCCAELA = QBCAELA_bh_wid_data_code;
for ( ADCAELA = 1;
ADCAELA <= ZCCAELA;
ADCAELA += 1 )
{ 
BDCAELA = YCCAELA_ind+=1 ;
CDCAELA = (&A_VINDEX(WCCAELA_bh,BDCAELA)) ;
(*CDCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(KCCAELA_code&GRBAELA_byte_mask);
 /* line 913: */
 /* line 914: */
KCCAELA_code = A_SHR(KCCAELA_code,SMBAELA_byte_size);
}
 /* line 915: */
 /* line 916: */
DDCAELA = TBCAELA_bh_wid_next_block;
for ( EDCAELA = 1;
EDCAELA <= DDCAELA;
EDCAELA += 1 )
{ 
FDCAELA = YCCAELA_ind+=1 ;
GDCAELA = (&A_VINDEX(WCCAELA_bh,FDCAELA)) ;
(*GDCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(LCCAELA_next&GRBAELA_byte_mask);
 /* line 917: */
 /* line 918: */
LCCAELA_next = A_SHR(LCCAELA_next,SMBAELA_byte_size);
}
 /* line 919: */
 /* line 920: */
HDCAELA = VBCAELA_bh_wid_block_data;
for ( IDCAELA = 1;
IDCAELA <= HDCAELA;
IDCAELA += 1 )
{ 
JDCAELA = YCCAELA_ind+=1 ;
KDCAELA = (&A_VINDEX(WCCAELA_bh,JDCAELA)) ;
(*KDCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(MCCAELA_data&GRBAELA_byte_mask);
 /* line 921: */
 /* line 922: */
MCCAELA_data = A_SHR(MCCAELA_data,SMBAELA_byte_size);
}
 /* line 923: */
 /* line 924: */
LDCAELA = XBCAELA_bh_wid_block_dps;
for ( MDCAELA = 1;
MDCAELA <= LDCAELA;
MDCAELA += 1 )
{ 
NDCAELA = YCCAELA_ind+=1 ;
ODCAELA = (&A_VINDEX(WCCAELA_bh,NDCAELA)) ;
(*ODCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(NCCAELA_dps&GRBAELA_byte_mask);
 /* line 925: */
 /* line 926: */
NCCAELA_dps = A_SHR(NCCAELA_dps,SMBAELA_byte_size);
}
 /* line 927: */
 /* line 928: */
PDCAELA = ZBCAELA_bh_wid_data_start;
for ( QDCAELA = 1;
QDCAELA <= PDCAELA;
QDCAELA += 1 )
{ 
RDCAELA = YCCAELA_ind+=1 ;
SDCAELA = (&A_VINDEX(WCCAELA_bh,RDCAELA)) ;
(*SDCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(OCCAELA_start&GRBAELA_byte_mask);
 /* line 929: */
 /* line 930: */
OCCAELA_start = A_SHR(OCCAELA_start,SMBAELA_byte_size);
}
 /* line 931: */
 /* line 932: */
TDCAELA = BCCAELA_bh_wid_read_size;
for ( UDCAELA = 1;
UDCAELA <= TDCAELA;
UDCAELA += 1 )
{ 
VDCAELA = YCCAELA_ind+=1 ;
WDCAELA = (&A_VINDEX(WCCAELA_bh,VDCAELA)) ;
(*WDCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(PCCAELA_size&GRBAELA_byte_mask);
 /* line 933: */
 /* line 934: */
PCCAELA_size = A_SHR(PCCAELA_size,SMBAELA_byte_size);
}
 /* line 935: */
 /* line 936: */
XDCAELA = WCCAELA_bh;
} 
A_PROC_EXIT(make_block_heading);
*ReturnedValue = (XDCAELA);
return;
} 
#undef NL

A68_INT  ZDCAELA_block_code(A68_VC  Chars)
{ 
A68_INT  AECAELA_code;
A68_INT  BECAELA_i;
A68_INT  CECAELA;  /* to part of loop */
A68_BITS  DECAELA;  /* SHL */
A68_INT  EECAELA;  /* YIELD */
A68_INT  FECAELA;  /* clause result */
A_PROC_ENTRY(block_code);
 /* line 946: */
{ 
AECAELA_code = (A68_INT)(unsigned char)A_VINDEX(Chars,RBCAELA_bh_end_data_code);
 /* line 947: */
 /* line 948: */
CECAELA = (QBCAELA_bh_wid_data_code-1);
for ( BECAELA_i = 1;
BECAELA_i <= CECAELA;
BECAELA_i += 1 )
{ 
 /* line 949: */
 /* line 950: */
DECAELA = (A68_BITS )AECAELA_code ;
EECAELA = (RBCAELA_bh_end_data_code-BECAELA_i) ;
AECAELA_code = (A68_INT )(A68_BITS )(A_SHL(DECAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,EECAELA));
}
 /* line 951: */
 /* line 952: */
FECAELA = AECAELA_code;
} 
A_PROC_EXIT(block_code);
return( FECAELA );
} 
#undef NL

A68_INT  HECAELA_next_block(A68_VC  Chars)
{ 
A68_INT  IECAELA_next;
A68_INT  JECAELA_i;
A68_INT  KECAELA;  /* to part of loop */
A68_BITS  LECAELA;  /* SHL */
A68_INT  MECAELA;  /* YIELD */
A68_INT  NECAELA;  /* clause result */
A_PROC_ENTRY(next_block);
 /* line 955: */
{ 
IECAELA_next = (A68_INT)(unsigned char)A_VINDEX(Chars,SBCAELA_bh_end_next_block);
 /* line 956: */
 /* line 957: */
KECAELA = (TBCAELA_bh_wid_next_block-1);
for ( JECAELA_i = 1;
JECAELA_i <= KECAELA;
JECAELA_i += 1 )
{ 
 /* line 958: */
 /* line 959: */
LECAELA = (A68_BITS )IECAELA_next ;
MECAELA = (SBCAELA_bh_end_next_block-JECAELA_i) ;
IECAELA_next = (A68_INT )(A68_BITS )(A_SHL(LECAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,MECAELA));
}
 /* line 960: */
 /* line 961: */
NECAELA = IECAELA_next;
} 
A_PROC_EXIT(next_block);
return( NECAELA );
} 
#undef NL

A68_INT  PECAELA_block_data(A68_VC  Chars)
{ 
A68_INT  QECAELA_data;
A68_INT  RECAELA_i;
A68_INT  SECAELA;  /* to part of loop */
A68_BITS  TECAELA;  /* SHL */
A68_INT  UECAELA;  /* YIELD */
A68_INT  VECAELA;  /* clause result */
A_PROC_ENTRY(block_data);
 /* line 964: */
{ 
QECAELA_data = (A68_INT)(unsigned char)A_VINDEX(Chars,UBCAELA_bh_end_block_data);
 /* line 965: */
 /* line 966: */
SECAELA = (VBCAELA_bh_wid_block_data-1);
for ( RECAELA_i = 1;
RECAELA_i <= SECAELA;
RECAELA_i += 1 )
{ 
 /* line 967: */
 /* line 968: */
TECAELA = (A68_BITS )QECAELA_data ;
UECAELA = (UBCAELA_bh_end_block_data-RECAELA_i) ;
QECAELA_data = (A68_INT )(A68_BITS )(A_SHL(TECAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,UECAELA));
}
 /* line 969: */
 /* line 970: */
VECAELA = QECAELA_data;
} 
A_PROC_EXIT(block_data);
return( VECAELA );
} 
#undef NL

A68_INT  XECAELA_block_dps(A68_VC  Chars)
{ 
A68_INT  YECAELA_dps;
A68_INT  ZECAELA_i;
A68_INT  AFCAELA;  /* to part of loop */
A68_BITS  BFCAELA;  /* SHL */
A68_INT  CFCAELA;  /* YIELD */
A68_INT  DFCAELA;  /* clause result */
A_PROC_ENTRY(block_dps);
 /* line 973: */
{ 
YECAELA_dps = (A68_INT)(unsigned char)A_VINDEX(Chars,WBCAELA_bh_end_block_dps);
 /* line 974: */
 /* line 975: */
AFCAELA = (XBCAELA_bh_wid_block_dps-1);
for ( ZECAELA_i = 1;
ZECAELA_i <= AFCAELA;
ZECAELA_i += 1 )
{ 
 /* line 976: */
 /* line 977: */
BFCAELA = (A68_BITS )YECAELA_dps ;
CFCAELA = (WBCAELA_bh_end_block_dps-ZECAELA_i) ;
YECAELA_dps = (A68_INT )(A68_BITS )(A_SHL(BFCAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,CFCAELA));
}
 /* line 978: */
 /* line 979: */
DFCAELA = YECAELA_dps;
} 
A_PROC_EXIT(block_dps);
return( DFCAELA );
} 
#undef NL

A68_INT  FFCAELA_data_start(A68_VC  Chars)
{ 
A68_INT  GFCAELA_start;
A68_INT  HFCAELA_i;
A68_INT  IFCAELA;  /* to part of loop */
A68_BITS  JFCAELA;  /* SHL */
A68_INT  KFCAELA;  /* YIELD */
A68_INT  LFCAELA;  /* clause result */
A_PROC_ENTRY(data_start);
 /* line 982: */
{ 
GFCAELA_start = (A68_INT)(unsigned char)A_VINDEX(Chars,YBCAELA_bh_end_data_start);
 /* line 983: */
 /* line 984: */
IFCAELA = (ZBCAELA_bh_wid_data_start-1);
for ( HFCAELA_i = 1;
HFCAELA_i <= IFCAELA;
HFCAELA_i += 1 )
{ 
 /* line 985: */
 /* line 986: */
JFCAELA = (A68_BITS )GFCAELA_start ;
KFCAELA = (YBCAELA_bh_end_data_start-HFCAELA_i) ;
GFCAELA_start = (A68_INT )(A68_BITS )(A_SHL(JFCAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,KFCAELA));
}
 /* line 987: */
 /* line 988: */
LFCAELA = GFCAELA_start;
} 
A_PROC_EXIT(data_start);
return( LFCAELA );
} 
#undef NL

A68_INT  NFCAELA_bh_read_size(A68_VC  Chars)
{ 
A68_INT  OFCAELA_read;
A68_INT  PFCAELA_i;
A68_INT  QFCAELA;  /* to part of loop */
A68_BITS  RFCAELA;  /* SHL */
A68_INT  SFCAELA;  /* YIELD */
A68_INT  TFCAELA;  /* clause result */
A_PROC_ENTRY(bh_read_size);
 /* line 991: */
{ 
OFCAELA_read = (A68_INT)(unsigned char)A_VINDEX(Chars,ACCAELA_bh_end_read_size);
 /* line 992: */
 /* line 993: */
QFCAELA = (BCCAELA_bh_wid_read_size-1);
for ( PFCAELA_i = 1;
PFCAELA_i <= QFCAELA;
PFCAELA_i += 1 )
{ 
 /* line 994: */
 /* line 995: */
RFCAELA = (A68_BITS )OFCAELA_read ;
SFCAELA = (ACCAELA_bh_end_read_size-PFCAELA_i) ;
OFCAELA_read = (A68_INT )(A68_BITS )(A_SHL(RFCAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,SFCAELA));
}
 /* line 996: */
 /* line 997: */
TFCAELA = OFCAELA_read;
} 
A_PROC_EXIT(bh_read_size);
return( TFCAELA );
} 
#undef NL

A68_VOID  GGCAELA_make_data_heading(A68_INT  Dh_code, A68_INT  Data_in_block, A68_INT  Dps_in_block, A68_VC  *ReturnedValue)
{ 
A68_BITS  HGCAELA_code;
A68_BITS  IGCAELA_data;
A68_BITS  JGCAELA_dps;
A68_BITS  KGCAELA_check;
A68_31  MGCAELA_generator;   /* proc value of non-global proc */
A68_VC  SGCAELA;  /* avoid structure result */
A68_VC  RGCAELA_dh;
A68_INT  TGCAELA_ind;
A68_INT  UGCAELA;  /* to part of loop */
A68_INT  VGCAELA;  /* loop control */
A68_INT  WGCAELA;  /* YIELD */
A68_CHAR * XGCAELA;  /* YIELD */
A68_INT  YGCAELA;  /* to part of loop */
A68_INT  ZGCAELA;  /* loop control */
A68_INT  AHCAELA;  /* YIELD */
A68_CHAR * BHCAELA;  /* YIELD */
A68_INT  CHCAELA;  /* to part of loop */
A68_INT  DHCAELA;  /* loop control */
A68_INT  EHCAELA;  /* YIELD */
A68_CHAR * FHCAELA;  /* YIELD */
A68_INT  GHCAELA;  /* to part of loop */
A68_INT  HHCAELA;  /* loop control */
A68_INT  IHCAELA;  /* YIELD */
A68_CHAR * JHCAELA;  /* YIELD */
A68_VC  KHCAELA;  /* clause result */
A_PROC_ENTRY(make_data_heading);
 /* line 1039: */
 /* line 1040: */
{ 
HGCAELA_code = (A68_BITS )Dh_code;
IGCAELA_data = (A68_BITS )Data_in_block;
 /* line 1041: */
JGCAELA_dps = (A68_BITS )Dps_in_block;
KGCAELA_check = (A68_BITS )TMBAELA_discptr_mask;
 /* line 1042: */
A_CLOSURE( MGCAELA_generator, NGCAELA_generator, OGCAELA_generator );
A_CALLPROC(MGCAELA_generator,(A68_TRUE, &SGCAELA),(A68_TRUE, &SGCAELA,(MGCAELA_generator).nonlocals));
RGCAELA_dh = SGCAELA;
 /* line 1043: */
TGCAELA_ind = 0;
 /* line 1044: */
 /* line 1045: */
UGCAELA = UFCAELA_dh_wid_data_code;
for ( VGCAELA = 1;
VGCAELA <= UGCAELA;
VGCAELA += 1 )
{ 
WGCAELA = TGCAELA_ind+=1 ;
XGCAELA = (&A_VINDEX(RGCAELA_dh,WGCAELA)) ;
(*XGCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(HGCAELA_code&GRBAELA_byte_mask);
 /* line 1046: */
 /* line 1047: */
HGCAELA_code = A_SHR(HGCAELA_code,SMBAELA_byte_size);
}
 /* line 1048: */
 /* line 1049: */
YGCAELA = XFCAELA_dh_wid_data_in_block;
for ( ZGCAELA = 1;
ZGCAELA <= YGCAELA;
ZGCAELA += 1 )
{ 
AHCAELA = TGCAELA_ind+=1 ;
BHCAELA = (&A_VINDEX(RGCAELA_dh,AHCAELA)) ;
(*BHCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(IGCAELA_data&GRBAELA_byte_mask);
 /* line 1050: */
 /* line 1051: */
IGCAELA_data = A_SHR(IGCAELA_data,SMBAELA_byte_size);
}
 /* line 1052: */
 /* line 1053: */
CHCAELA = ZFCAELA_dh_wid_dps_in_block;
for ( DHCAELA = 1;
DHCAELA <= CHCAELA;
DHCAELA += 1 )
{ 
EHCAELA = TGCAELA_ind+=1 ;
FHCAELA = (&A_VINDEX(RGCAELA_dh,EHCAELA)) ;
(*FHCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(JGCAELA_dps&GRBAELA_byte_mask);
 /* line 1054: */
 /* line 1055: */
JGCAELA_dps = A_SHR(JGCAELA_dps,SMBAELA_byte_size);
}
 /* line 1056: */
 /* line 1057: */
GHCAELA = BGCAELA_dh_wid_check_heading;
for ( HHCAELA = 1;
HHCAELA <= GHCAELA;
HHCAELA += 1 )
{ 
IHCAELA = TGCAELA_ind+=1 ;
JHCAELA = (&A_VINDEX(RGCAELA_dh,IHCAELA)) ;
(*JHCAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(KGCAELA_check&GRBAELA_byte_mask);
 /* line 1058: */
 /* line 1059: */
KGCAELA_check = A_SHR(KGCAELA_check,SMBAELA_byte_size);
}
 /* line 1060: */
 /* line 1061: */
KHCAELA = RGCAELA_dh;
} 
A_PROC_EXIT(make_data_heading);
*ReturnedValue = (KHCAELA);
return;
} 
#undef NL

A68_INT  MHCAELA_dh_code(A68_VC  Chars)
{ 
A68_INT  NHCAELA_code;
A68_INT  OHCAELA_i;
A68_INT  PHCAELA;  /* to part of loop */
A68_BITS  QHCAELA;  /* SHL */
A68_INT  RHCAELA;  /* YIELD */
A68_INT  SHCAELA;  /* clause result */
A_PROC_ENTRY(dh_code);
 /* line 1074: */
{ 
NHCAELA_code = (A68_INT)(unsigned char)A_VINDEX(Chars,VFCAELA_dh_end_data_code);
 /* line 1075: */
 /* line 1076: */
PHCAELA = (UFCAELA_dh_wid_data_code-1);
for ( OHCAELA_i = 1;
OHCAELA_i <= PHCAELA;
OHCAELA_i += 1 )
{ 
 /* line 1077: */
 /* line 1078: */
QHCAELA = (A68_BITS )NHCAELA_code ;
RHCAELA = (VFCAELA_dh_end_data_code-OHCAELA_i) ;
NHCAELA_code = (A68_INT )(A68_BITS )(A_SHL(QHCAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,RHCAELA));
}
 /* line 1079: */
 /* line 1080: */
SHCAELA = NHCAELA_code;
} 
A_PROC_EXIT(dh_code);
return( SHCAELA );
} 
#undef NL

A68_INT  UHCAELA_data_in_block(A68_VC  Chars)
{ 
A68_INT  VHCAELA_data;
A68_INT  WHCAELA_i;
A68_INT  XHCAELA;  /* to part of loop */
A68_BITS  YHCAELA;  /* SHL */
A68_INT  ZHCAELA;  /* YIELD */
A68_INT  AICAELA;  /* clause result */
A_PROC_ENTRY(data_in_block);
 /* line 1083: */
{ 
VHCAELA_data = (A68_INT)(unsigned char)A_VINDEX(Chars,WFCAELA_dh_end_data_in_block);
 /* line 1084: */
 /* line 1085: */
XHCAELA = (XFCAELA_dh_wid_data_in_block-1);
for ( WHCAELA_i = 1;
WHCAELA_i <= XHCAELA;
WHCAELA_i += 1 )
{ 
 /* line 1086: */
 /* line 1087: */
YHCAELA = (A68_BITS )VHCAELA_data ;
ZHCAELA = (WFCAELA_dh_end_data_in_block-WHCAELA_i) ;
VHCAELA_data = (A68_INT )(A68_BITS )(A_SHL(YHCAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,ZHCAELA));
}
 /* line 1088: */
 /* line 1089: */
AICAELA = VHCAELA_data;
} 
A_PROC_EXIT(data_in_block);
return( AICAELA );
} 
#undef NL

A68_INT  CICAELA_dps_in_block(A68_VC  Chars)
{ 
A68_INT  DICAELA_dps;
A68_INT  EICAELA_i;
A68_INT  FICAELA;  /* to part of loop */
A68_BITS  GICAELA;  /* SHL */
A68_INT  HICAELA;  /* YIELD */
A68_INT  IICAELA;  /* clause result */
A_PROC_ENTRY(dps_in_block);
 /* line 1092: */
{ 
DICAELA_dps = (A68_INT)(unsigned char)A_VINDEX(Chars,YFCAELA_dh_end_dps_in_block);
 /* line 1093: */
 /* line 1094: */
FICAELA = (ZFCAELA_dh_wid_dps_in_block-1);
for ( EICAELA_i = 1;
EICAELA_i <= FICAELA;
EICAELA_i += 1 )
{ 
 /* line 1095: */
 /* line 1096: */
GICAELA = (A68_BITS )DICAELA_dps ;
HICAELA = (YFCAELA_dh_end_dps_in_block-EICAELA_i) ;
DICAELA_dps = (A68_INT )(A68_BITS )(A_SHL(GICAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,HICAELA));
}
 /* line 1097: */
 /* line 1098: */
IICAELA = DICAELA_dps;
} 
A_PROC_EXIT(dps_in_block);
return( IICAELA );
} 
#undef NL

A68_BOOL  KICAELA_is_data_heading(A68_VC  Chars)
{ 
A68_INT  LICAELA_check;
A68_INT  MICAELA_i;
A68_INT  NICAELA;  /* to part of loop */
A68_BITS  OICAELA;  /* SHL */
A68_INT  PICAELA;  /* YIELD */
A68_BOOL  QICAELA;  /* clause result */
A_PROC_ENTRY(is_data_heading);
 /* line 1101: */
{ 
LICAELA_check = (A68_INT)(unsigned char)A_VINDEX(Chars,AGCAELA_dh_end_check_heading);
 /* line 1102: */
 /* line 1103: */
NICAELA = (BGCAELA_dh_wid_check_heading-1);
for ( MICAELA_i = 1;
MICAELA_i <= NICAELA;
MICAELA_i += 1 )
{ 
 /* line 1104: */
 /* line 1105: */
OICAELA = (A68_BITS )LICAELA_check ;
PICAELA = (AGCAELA_dh_end_check_heading-MICAELA_i) ;
LICAELA_check = (A68_INT )(A68_BITS )(A_SHL(OICAELA,SMBAELA_byte_size)|(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Chars,PICAELA));
}
 /* line 1106: */
 /* line 1107: */
QICAELA = (LICAELA_check==TMBAELA_discptr_mask);
} 
A_PROC_EXIT(is_data_heading);
return( QICAELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void LMBAELA(void)   /* initialise DECS su_keepsake_interface */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/su_keepsake_interface.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT  FRBAELA;  /* ADICOPS - ** */
A68_INT  MSBAELA;  /* ADICOPS - ** */
A68_INT  NSBAELA;  /* ADICOPS - ** */
A68_INT  ZSBAELA;  /* to part of loop */
A68_INT  ATBAELA;  /* loop control */
A68_BITS  BTBAELA;  /* clause result */
A68_BITS  DTBAELA;  /* SHL */
A68_BITS  FTBAELA;  /* SHL */
A68_BITS  HTBAELA;  /* SHL */
A68_INT  MTBAELA;  /* SHL */
A68_180  KACAELA;  /* collateral clause result */
A68_180  MACAELA;  /* collateral clause result */
A68_176  TACAELA;  /* collateral clause result */
A68_176  VACAELA;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/su_keepsake_interface.a68";
A_config.translation_time = "Tue Apr  4 10:32:46 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "KMBAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:32:46 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS su_keepsake_interface);
UEAALIB_a68config(LGAALIB_configinfo, PMBAELA);
 /* line 60: */
 /* line 362: */
 /* line 366: */
 /* line 367: */
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 373: */
XMBAELA_dna = WMBAELA;
 /* line 377: */
 /* line 378: */
ZMBAELA_extend_allocation = (-1);
 /* line 384: */
 /* line 397: */
 /* line 401: */
 /* line 402: */
 /* line 408: */
 /* line 415: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
WNBAELA_increase_increment = (TNBAELA_increase_inc*SNBAELA_block_size);
 /* line 428: */
XNBAELA_long_block_size = (A68_LINT )SNBAELA_block_size;
 /* line 430: */
 /* line 432: */
 /* line 433: */
 /* line 434: */
 /* line 435: */
 /* line 436: */
 /* line 437: */
 /* line 438: */
ZNBAELA_end_file_block = YNBAELA;
 /* line 440: */
 /* line 442: */
 /* line 457: */
 /* line 468: */
 /* line 475: */
 /* line 491: */
 /* line 505: */
 /* line 517: */
KQBAELA_blank_char = (A68_CHAR)0;
 /* line 519: */
 /* line 522: */
 /* line 525: */
 /* line 528: */
 /* line 530: */
 /* line 533: */
FRBAELA = 2 ;
GRBAELA_byte_mask = (A68_BITS )(A_LI_POWER(FRBAELA,SMBAELA_byte_size,(A68_INT ))-1);
 /* line 542: */
 /* line 551: */
 /* line 564: */
 /* line 565: */
 /* line 566: */
 /* line 569: */
MSBAELA = 2 ;
NSBAELA = ((LSBAELA_desc_file_size*SMBAELA_byte_size)-1) ;
OSBAELA_max_file_size = (A_LI_POWER(MSBAELA,NSBAELA,(A68_INT ))-1);
 /* line 573: */
 /* line 576: */
 /* line 579: */
 /* line 582: */
 /* line 619: */
 /* line 620: */
TSBAELA_discptr_size = (((((2+LSBAELA_desc_file_size)+PSBAELA_desc_block_size)+(2*EDAAOST_int_size))+QSBAELA_desc_version_size)+RSBAELA_desc_buffer_size);
 /* line 621: */
USBAELA_read_size_offset = (2*SMBAELA_byte_size);
 /* line 622: */
 /* line 623: */
 /* line 624: */
 /* line 626: */
{ 
YSBAELA_p = 0X3cU;
 /* line 627: */
 /* line 628: */
ZSBAELA = (EDAAOST_int_size-1);
for ( ATBAELA = 1;
ATBAELA <= ZSBAELA;
ATBAELA += 1 )
{ 
YSBAELA_p = (A68_BITS )(A_SHL(YSBAELA_p,SMBAELA_byte_size)|YSBAELA_p);
}
 /* line 629: */
 /* line 630: */
BTBAELA = YSBAELA_p;
} 
CTBAELA_dpsc_mask = BTBAELA;
 /* line 631: */
DTBAELA = 0X1U ;
ETBAELA_shaky_mask = A_SHL(DTBAELA,SMBAELA_byte_size);
 /* line 632: */
FTBAELA = 0X2U ;
GTBAELA_assignable_mask = A_SHL(FTBAELA,SMBAELA_byte_size);
 /* line 633: */
HTBAELA = 0X3U ;
ITBAELA_indirection_mask = A_SHL(HTBAELA,SMBAELA_byte_size);
 /* line 634: */
JTBAELA_boolean_mask = A_SHL(GRBAELA_byte_mask,SMBAELA_byte_size);
 /* line 635: */
 /* line 636: */
 /* line 637: */
MTBAELA = (2*SMBAELA_byte_size) ;
NTBAELA_read_size_mask = A_SHL(GRBAELA_byte_mask,MTBAELA);
 /* line 640: */
 /* line 649: */
 /* line 669: */
 /* line 709: */
 /* line 767: */
 /* line 769: */
 /* line 771: */
 /* line 774: */
 /* line 776: */
 /* line 778: */
 /* line 780: */
 /* line 782: */
 /* line 784: */
 /* line 787: */
 /* line 790: */
 /* line 797: */
 /* line 815: */
 /* line 825: */
KACAELA.Block_num = 0;
KACAELA.Offset = 1;
LACAELA_niladdress = KACAELA;
 /* line 826: */
MACAELA.Block_num = 0;
MACAELA.Offset = 2;
NACAELA_nilgcaddress = MACAELA;
 /* line 828: */
 /* line 831: */
TACAELA.Code = 0X0U;
TACAELA.First_block = 0;
TACAELA.First_offset = 1;
TACAELA.Data_elts = 0;
TACAELA.Dp_elts = 0;
 /* line 832: */
TACAELA.Version = 0;
 /* line 833: */
TACAELA.Sumcheck = (A68_BITS )((A68_BITS )(CTBAELA_dpsc_mask&~0X1U)|(A68_BITS )(~CTBAELA_dpsc_mask&0X1U));
UACAELA_nilptr = TACAELA;
 /* line 834: */
VACAELA.Code = 0X7777U;
VACAELA.First_block = 33;
VACAELA.First_offset = 77;
VACAELA.Data_elts = 33;
VACAELA.Dp_elts = 77;
VACAELA.Version = 33;
VACAELA.Sumcheck = 0X7777U;
WACAELA_illegalptr = VACAELA;
 /* line 838: */
 /* line 845: */
 /* line 847: */
 /* line 857: */
 /* line 876: */
 /* line 877: */
 /* line 878: */
SBCAELA_bh_end_next_block = (LSBAELA_desc_file_size+1);
 /* line 879: */
 /* line 880: */
UBCAELA_bh_end_block_data = ((LSBAELA_desc_file_size+PSBAELA_desc_block_size)+1);
 /* line 881: */
 /* line 882: */
WBCAELA_bh_end_block_dps = ((LSBAELA_desc_file_size+(2*PSBAELA_desc_block_size))+1);
 /* line 883: */
 /* line 884: */
YBCAELA_bh_end_data_start = ((LSBAELA_desc_file_size+(3*PSBAELA_desc_block_size))+1);
 /* line 885: */
 /* line 886: */
ACCAELA_bh_end_read_size = (((LSBAELA_desc_file_size+(3*PSBAELA_desc_block_size))+RSBAELA_desc_buffer_size)+1);
 /* line 887: */
 /* line 888: */
CCCAELA_block_heading_size = (((LSBAELA_desc_file_size+(3*PSBAELA_desc_block_size))+RSBAELA_desc_buffer_size)+1);
 /* line 904: */
 /* line 945: */
 /* line 954: */
 /* line 963: */
 /* line 972: */
 /* line 981: */
 /* line 990: */
 /* line 1007: */
 /* line 1008: */
 /* line 1009: */
WFCAELA_dh_end_data_in_block = (PSBAELA_desc_block_size+1);
 /* line 1010: */
 /* line 1011: */
YFCAELA_dh_end_dps_in_block = ((2*PSBAELA_desc_block_size)+1);
 /* line 1012: */
 /* line 1013: */
AGCAELA_dh_end_check_heading = (((2*PSBAELA_desc_block_size)+SSBAELA_desc_mask_size)+1);
 /* line 1014: */
 /* line 1015: */
CGCAELA_data_heading_size = (((2*PSBAELA_desc_block_size)+SSBAELA_desc_mask_size)+1);
 /* line 1037: */
 /* line 1073: */
 /* line 1082: */
 /* line 1091: */
 /* line 1100: */
 /* line 1111: */
RICAELA_actual_block_size = (SNBAELA_block_size-CCCAELA_block_heading_size);
 /* line 1112: */
SICAELA_max_ints_in_block = (RICAELA_actual_block_size/EDAAOST_int_size);
 /* line 1113: */
TICAELA_fixed_in_block = ((4*TSBAELA_discptr_size)+(11*EDAAOST_int_size));
 /* line 1115: */
 /* line 1117: */
 /* line 1156: */
/*SKIP*/;
A_PROC_EXIT(DECS su_keepsake_interface);
} 
#undef NL
/* end of translation of ./a68files/su_keepsake_interface.a68 */
