
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
/* UNAME:SKCAOST */
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

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 56 CHAR */
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t161 ,A68_BOOL ,struct A68t97 ),(struct A68t161 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE161,BOOL,MODE97) VOID */
struct A68t161{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_36)
struct A68t162  Set;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE162)  */
struct A68t163{
struct A68t161  Var;
struct A68t163 * Rest;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE161,REF MODE163)  */
A_ISTRUCT(A68_CHAR ,8,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t167,(A68_VC ,A68_VC ,A68_INT ,struct A68t162 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t162 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,MODE26,INT,MODE162) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,5,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,22,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ),(A68_VC ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t173,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE46) BOOL */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,MODE26,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t179,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_VOID  RZBAOSI_get_env_var(A68_VC ,A68_VC *);
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
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  WHAAOSI_user;
extern A68_92  CIAAOSI_log;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_160   WKCAOST = {"$Id: variables.a68,v 34.2 1995/03/29 13:02:30 ella Exp $"}; 
A_GISVEC(A68_VC ,XKCAOST,WKCAOST,56)
#define YKCAOST_env_var 1
#define ZKCAOST_str_var 2
#define ALCAOST_bool_var 3
static A68_164   BLCAOST = {"notknown"}; 
A_GISVEC(A68_VC ,CLCAOST,BLCAOST,8)
A68_VC  DLCAOST_unknown_var;
static A68_165   ELCAOST = {"ON"}; 
A_GISVEC(A68_VC ,FLCAOST,ELCAOST,2)
A68_VC  GLCAOST_true_var;
static A68_166   HLCAOST = {"OFF"}; 
A_GISVEC(A68_VC ,ILCAOST,HLCAOST,3)
A68_VC  JLCAOST_false_var;
#define KLCAOST_nilvars (A68_163 *)A68_NIL
static A68_163 * LLCAOST_varslist;
static A68_168   NMCAOST = {"Variable "}; 
A_GISVEC(A68_VC ,OMCAOST,NMCAOST,9)
static A68_169   PMCAOST = {" remains \""}; 
A_GISVEC(A68_VC ,QMCAOST,PMCAOST,10)
static A68_168   WMCAOST = {"Variable "}; 
A_GISVEC(A68_VC ,XMCAOST,WMCAOST,9)
static A68_171   YMCAOST = {" has been changed to \""}; 
A_GISVEC(A68_VC ,ZMCAOST,YMCAOST,22)
static A68_165   ZOCAOST = {"on"}; 
A_GISVEC(A68_VC ,APCAOST,ZOCAOST,2)
static A68_114   BPCAOST = {"true"}; 
A_GISVEC(A68_VC ,CPCAOST,BPCAOST,4)
static A68_166   JPCAOST = {"off"}; 
A_GISVEC(A68_VC ,KPCAOST,JPCAOST,3)
static A68_176   LPCAOST = {"false"}; 
A_GISVEC(A68_VC ,MPCAOST,LPCAOST,5)
static A68_168   UPCAOST = {"variable "}; 
A_GISVEC(A68_VC ,VPCAOST,UPCAOST,9)
static A68_177   WPCAOST = {" can only be set to ON or OFF"}; 
A_GISVEC(A68_VC ,XPCAOST,WPCAOST,29)
static A68_169   IQCAOST = {"variable \""}; 
A_GISVEC(A68_VC ,JQCAOST,IQCAOST,10)
static A68_178   KQCAOST = {"\" is not known"}; 
A_GISVEC(A68_VC ,LQCAOST,KQCAOST,14)
static A68_180   WQCAOST = {"\" is not an ELLA variable"}; 
A_GISVEC(A68_VC ,XQCAOST,WQCAOST,25)
static A68_168   CRCAOST = {"Variable "}; 
A_GISVEC(A68_VC ,DRCAOST,CRCAOST,9)
static A68_181   HRCAOST = {" is undefined"}; 
A_GISVEC(A68_VC ,IRCAOST,HRCAOST,13)
static A68_168   PRCAOST = {"Variable "}; 
A_GISVEC(A68_VC ,QRCAOST,PRCAOST,9)
static A68_183   URCAOST = {" is set to \""}; 
A_GISVEC(A68_VC ,VRCAOST,URCAOST,12)
typedef struct   /* env of non-global proc */
{
A68_VC  A;
} DOCAOST_generator;

A68_VOID  QLCAOST_add_var(A68_VC  Name, A68_VC  Default, A68_INT  Sort, A68_162  Set);

A_STATIC A68_VOID  BMCAOST_msg(A68_92  No, A68_46  Params);

A68_VOID  HMCAOST_null_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg);

A68_VOID  LMCAOST_default_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg);

A68_VOID  FNCAOST_get_var(A68_VC  Name, A68_VC  *ReturnedValue);

A68_BOOL  SNCAOST_var_unset(A68_VC  Name);

A_STATIC A68_BOOL  ZNCAOST_test(A68_VC  A, A68_46  B);

A_STATIC A68_VOID  COCAOST_generator(A68_BOOL  AOCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  TOCAOST_set_var(A68_VC  Name, A68_VC  Value, A68_97  Msg);

A68_VOID  RQCAOST_show_var(A68_VC  Var, A68_97  Msg);

A68_VOID  GSCAOST_restore_vars(A68_VC  Buffer);

A68_VOID  HSCAOST_remember_vars(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BMCAOST_msg(A68_92  No, A68_46  Params)
{ 
A68_106  CMCAOST;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 73: */
if ( TKAAOSI_error_msg(A_UNITE(CMCAOST,mode1,1,No)) )
{ 
A_CALLPROC(ZLBAOSI_global_msg,(No, Params),(No, Params,(ZLBAOSI_global_msg).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  COCAOST_generator(A68_BOOL  AOCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DOCAOST_generator *)NonLocals)->x)
{ 
A68_VC  EOCAOST;  /* clause result */
A68_VC  FOCAOST;  /* OPERATORS - dynamic generator */
{ 
FOCAOST.upb = NL(A).upb ;
( AOCAOST_anonymous? A_VLOC(A68_CHAR ,FOCAOST): A_VHEAP(A68_CHAR ,FOCAOST) );
EOCAOST = FOCAOST;
} 
*ReturnedValue = (EOCAOST);
return;
} 
#undef NL
 /* line 64: */

A68_VOID  QLCAOST_add_var(A68_VC  Name, A68_VC  Default, A68_INT  Sort, A68_162  Set)
{ 
A68_163  RLCAOST;  /* collateral clause result */
A68_VC  SLCAOST;  /* avoid structure result */
A68_VC  TLCAOST;  /* avoid structure result */
A68_VC  ULCAOST;  /* clause result */
A68_VC  VLCAOST;  /* avoid structure result */
A68_VC  WLCAOST;  /* avoid structure result */
A68_163 * XLCAOST;  /* YIELD */
A68_97  DMCAOST;  /* procedure value */
A_PROC_ENTRY(add_var);
 /* line 65: */
 /* line 66: */
{ 
 /* line 67: */
ZAAAOSI_makervc( Name, &SLCAOST );
RLCAOST.Var.Name = SLCAOST;
 /* line 68: */
ZAAAOSI_makervc( Default, &TLCAOST );
RLCAOST.Var.Default = TLCAOST;
if ( (Sort==YKCAOST_env_var) )
{ 
RZBAOSI_get_env_var( Default, &VLCAOST );
ULCAOST = VLCAOST;
} 
else
{ 
ULCAOST = Default;
} 
 /* line 69: */
ZAAAOSI_makervc( ULCAOST, &WLCAOST );
RLCAOST.Var.Value = WLCAOST;
RLCAOST.Var.Sort = Sort;
RLCAOST.Var.Set = Set;
RLCAOST.Rest = LLCAOST_varslist;
XLCAOST = A_HEAP(A68_163 ) ;
(*XLCAOST) = RLCAOST ;
LLCAOST_varslist = XLCAOST;
 /* line 72: */
 /* line 74: */
 /* line 75: */
DMCAOST.fn.fn_global = BMCAOST_msg;
DMCAOST.nonlocals = A68_NIL;
A_CALLPROC(Set,((*(&(LLCAOST_varslist->Var))), A68_FALSE, DMCAOST),((*(&(LLCAOST_varslist->Var))), A68_FALSE, DMCAOST,(Set).nonlocals));
} 
A_PROC_EXIT(add_var);
return;
} 
#undef NL

A68_VOID  HMCAOST_null_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A_PROC_ENTRY(null_set_var);
 /* line 79: */
/*SKIP*/;
A_PROC_EXIT(null_set_var);
return;
} 
#undef NL

A68_VOID  LMCAOST_default_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A68_170  MMCAOST;  /* collateral clause result */
A68_VC  RMCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  SMCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  TMCAOST;  /* avoid structure result */
A68_46  UMCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  VMCAOST;  /* collateral clause result */
A68_VC  ANCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  BNCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CNCAOST;  /* avoid structure result */
A68_46  DNCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(default_set_var);
 /* line 82: */
 /* line 83: */
if ( Changed )
{ 
MMCAOST.data[0] = OMCAOST;
 /* line 84: */
MMCAOST.data[1] = Var.Name;
MMCAOST.data[2] = QMCAOST;
MMCAOST.data[3] = Var.Value;
MMCAOST.data[4] = A_HVEC(RMCAOST,'\"',A68_CHAR );
 /* line 85: */
JBAAOSI_concat( A_HISVEC(SMCAOST,MMCAOST,5,A68_VC ), &TMCAOST );
A_CALLPROC(Msg,(CIAAOSI_log, A_HVEC(UMCAOST,TMCAOST,A68_VC )),(CIAAOSI_log, A_HVEC(UMCAOST,TMCAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
VMCAOST.data[0] = XMCAOST;
 /* line 86: */
VMCAOST.data[1] = Var.Name;
VMCAOST.data[2] = ZMCAOST;
VMCAOST.data[3] = Var.Value;
VMCAOST.data[4] = A_HVEC(ANCAOST,'\"',A68_CHAR );
 /* line 87: */
JBAAOSI_concat( A_HISVEC(BNCAOST,VMCAOST,5,A68_VC ), &CNCAOST );
A_CALLPROC(Msg,(CIAAOSI_log, A_HVEC(DNCAOST,CNCAOST,A68_VC )),(CIAAOSI_log, A_HVEC(DNCAOST,CNCAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(default_set_var);
return;
} 
#undef NL

A68_VOID  FNCAOST_get_var(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_BOOL  GNCAOST_not_found;
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} INCAOST; 
A68_VC  HNCAOST_ans;
A68_163 * JNCAOST_vars;
A68_BOOL  KNCAOST;  /* optbool result */
A68_161 * LNCAOST_var;
A68_BOOL  MNCAOST;  /* optbool result */
A68_VC  NNCAOST;  /* clause result */
A68_VC  ONCAOST;  /* avoid structure result */
A68_VC  PNCAOST;  /* avoid structure result */
A68_VC  QNCAOST;  /* clause result */
A_PROC_ENTRY(get_var);
 /* line 91: */
 /* line 92: */
{ 
GNCAOST_not_found = A68_TRUE;
 /* line 93: */
INCAOST.source = DLCAOST_unknown_var ;
HNCAOST_ans = (INCAOST.destination);
 /* line 94: */
JNCAOST_vars = LLCAOST_varslist;
 /* line 95: */
for ( ;; )
{ 
 /* line 96: */
KNCAOST = (JNCAOST_vars!=KLCAOST_nilvars);
if ( KNCAOST )
{KNCAOST = GNCAOST_not_found;
}
if ( !(KNCAOST) ) break;
LNCAOST_var = (&(JNCAOST_vars->Var));
 /* line 97: */
 /* line 98: */
if ( A_VC_EQ(Name,(*(&(LNCAOST_var->Name)))) )
{ 
GNCAOST_not_found = A68_FALSE;
 /* line 99: */
MNCAOST = ((*(&(LNCAOST_var->Sort)))==YKCAOST_env_var);
if ( MNCAOST )
{ /* line 100: */
MNCAOST = A_VC_EQ((*(&(LNCAOST_var->Value))),DLCAOST_unknown_var);
}
if ( MNCAOST )
{ 
 /* line 101: */
 /* line 102: */
RZBAOSI_get_env_var( (*(&(LNCAOST_var->Default))), &ONCAOST );
ZAAAOSI_makervc( ONCAOST, &PNCAOST );
NNCAOST = PNCAOST;
} 
else
{ 
 /* line 103: */
NNCAOST = (*(&(LNCAOST_var->Value)));
} 
HNCAOST_ans = NNCAOST;
} 
 /* line 104: */
 /* line 105: */
JNCAOST_vars = (*(&(JNCAOST_vars->Rest)));
}
 /* line 106: */
 /* line 107: */
QNCAOST = HNCAOST_ans;
} 
A_PROC_EXIT(get_var);
*ReturnedValue = (QNCAOST);
return;
} 
#undef NL

A68_BOOL  SNCAOST_var_unset(A68_VC  Name)
{ 
A68_VC  TNCAOST;  /* avoid structure result */
A68_VC  UNCAOST_var;
A68_BOOL  VNCAOST;  /* optbool result */
A68_BOOL  WNCAOST;  /* clause result */
A_PROC_ENTRY(var_unset);
 /* line 111: */
 /* line 112: */
{ 
FNCAOST_get_var( Name, &TNCAOST );
UNCAOST_var = TNCAOST;
 /* line 113: */
VNCAOST = (UNCAOST_var.upb==0);
if ( ! VNCAOST )
{ /* line 114: */
VNCAOST = A_VC_EQ(UNCAOST_var,DLCAOST_unknown_var);
}
WNCAOST = VNCAOST;
} 
A_PROC_EXIT(var_unset);
return( WNCAOST );
} 
#undef NL

A_STATIC A68_BOOL  ZNCAOST_test(A68_VC  A, A68_46  B)
{ 
A68_31  BOCAOST_generator;   /* proc value of non-global proc */
A68_VC  HOCAOST;  /* avoid structure result */
A68_VC  GOCAOST_c;
A68_CHAR * IOCAOST_ch;
A68_INT  JOCAOST;  /* forall loop counter */
A68_BOOL  KOCAOST;  /* optbool result */
A68_BOOL  LOCAOST_equal;
A68_VC  MOCAOST_d;
A68_VC * NOCAOST;  /* forall control - []x */
A68_INT  OOCAOST;  /* forall loop counter */
A68_BOOL  POCAOST;  /* clause result */
A_PROC_ENTRY(test);
 /* line 118: */
 /* line 119: */
{ 
A_CLOSURE( BOCAOST_generator, COCAOST_generator, DOCAOST_generator );
(( DOCAOST_generator * ) ( BOCAOST_generator.nonlocals )) -> A = A;
A_CALLPROC(BOCAOST_generator,(A68_TRUE, &HOCAOST),(A68_TRUE, &HOCAOST,(BOCAOST_generator).nonlocals));
GOCAOST_c = HOCAOST;
A_VASSIGN2(A,GOCAOST_c,A68_CHAR );
 /* line 120: */
 /* line 121: */
JOCAOST = GOCAOST_c.upb -1;
IOCAOST_ch = GOCAOST_c.data;
for (;JOCAOST-- >= 0;
(IOCAOST_ch++
) )
{
KOCAOST = ((*IOCAOST_ch)>='A');
if ( KOCAOST )
{KOCAOST = ((*IOCAOST_ch)<='Z');
}
if ( KOCAOST )
{ 
(*IOCAOST_ch) = (A68_CHAR)((A68_INT)(unsigned char)(*IOCAOST_ch)+32);
} 
}
 /* line 122: */
LOCAOST_equal = A68_FALSE;
 /* line 123: */
OOCAOST = B.upb -1;
NOCAOST = B.data;
for (;OOCAOST-- >= 0;
(NOCAOST++
) )
{
MOCAOST_d = *NOCAOST;
if ( !(!LOCAOST_equal) ) break;
LOCAOST_equal = A_VC_EQ(MOCAOST_d,GOCAOST_c);
}
 /* line 124: */
 /* line 125: */
POCAOST = LOCAOST_equal;
} 
A_PROC_EXIT(test);
return( POCAOST );
} 
#undef NL

A68_VOID  TOCAOST_set_var(A68_VC  Name, A68_VC  Value, A68_97  Msg)
{ 
A68_BOOL  UOCAOST_not_found;
A68_163 * VOCAOST_vars;
A68_BOOL  WOCAOST;  /* optbool result */
A68_161 * XOCAOST_var;
A68_175  YOCAOST;  /* collateral clause result */
A68_VC  DPCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  EPCAOST;  /* clause result */
A68_46  FPCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  GPCAOST;  /* clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} HPCAOST; 
A68_175  IPCAOST;  /* collateral clause result */
A68_VC  NPCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  OPCAOST;  /* clause result */
A68_46  PPCAOST;  /* OPERATORS - istruct -> vector */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} QPCAOST; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} RPCAOST; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} SPCAOST; 
A68_175  TPCAOST;  /* collateral clause result */
A68_46  YPCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ZPCAOST;  /* avoid structure result */
A68_46  AQCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BQCAOST;  /* avoid structure result */
A68_VC  CQCAOST_new;
A68_BOOL  DQCAOST_changed;
A68_VC * EQCAOST;  /* YIELD */
A68_162  FQCAOST;  /* CALL */
A68_VC * GQCAOST;  /* YIELD */
A68_175  HQCAOST;  /* collateral clause result */
A68_46  MQCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  NQCAOST;  /* avoid structure result */
A68_46  OQCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_var);
 /* line 128: */
 /* line 129: */
{ 
UOCAOST_not_found = A68_TRUE;
 /* line 130: */
VOCAOST_vars = LLCAOST_varslist;
 /* line 131: */
for ( ;; )
{ 
 /* line 132: */
WOCAOST = (VOCAOST_vars!=KLCAOST_nilvars);
if ( WOCAOST )
{WOCAOST = UOCAOST_not_found;
}
if ( !(WOCAOST) ) break;
XOCAOST_var = (&(VOCAOST_vars->Var));
 /* line 133: */
 /* line 134: */
if ( A_VC_EQ(Name,(*(&(XOCAOST_var->Name)))) )
{ 
UOCAOST_not_found = A68_FALSE;
 /* line 135: */
 /* line 136: */
 /* line 137: */
if ( ((*(&(XOCAOST_var->Sort)))==ALCAOST_bool_var) )
{ 
YOCAOST.data[0] = APCAOST;
YOCAOST.data[1] = CPCAOST;
YOCAOST.data[2] = A_HVEC(DPCAOST,'t',A68_CHAR );
 /* line 138: */
 /* line 139: */
EPCAOST = ZNCAOST_test(Value, A_HISVEC(FPCAOST,YOCAOST,3,A68_VC ));
if ( EPCAOST )
{ 
HPCAOST.source = GLCAOST_true_var ;
GPCAOST = (HPCAOST.destination);
} 
else
{ 
IPCAOST.data[0] = KPCAOST;
IPCAOST.data[1] = MPCAOST;
IPCAOST.data[2] = A_HVEC(NPCAOST,'f',A68_CHAR );
 /* line 140: */
 /* line 141: */
OPCAOST = ZNCAOST_test(Value, A_HISVEC(PPCAOST,IPCAOST,3,A68_VC ));
if ( OPCAOST )
{ 
QPCAOST.source = JLCAOST_false_var ;
GPCAOST = (QPCAOST.destination);
} 
else
{ 
 /* line 142: */
if ( (Value.upb==0) )
{ 
 /* line 143: */
 /* line 144: */
if ( A_VC_EQ((*(&(XOCAOST_var->Value))),GLCAOST_true_var) )
{ 
 /* line 145: */
RPCAOST.source = JLCAOST_false_var ;
GPCAOST = (RPCAOST.destination);
} 
else
{ 
 /* line 146: */
SPCAOST.source = GLCAOST_true_var ;
GPCAOST = (SPCAOST.destination);
} 
} 
else
{ 
TPCAOST.data[0] = VPCAOST;
 /* line 147: */
TPCAOST.data[1] = Name;
TPCAOST.data[2] = XPCAOST;
JBAAOSI_concat( A_HISVEC(YPCAOST,TPCAOST,3,A68_VC ), &ZPCAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(AQCAOST,ZPCAOST,A68_VC )),(WHAAOSI_user, A_HVEC(AQCAOST,ZPCAOST,A68_VC ),(Msg).nonlocals));
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
GPCAOST = EOAAOSL_nullstr;
} 
} 
} 
} 
else
{ 
ZAAAOSI_makervc( Value, &BQCAOST );
GPCAOST = BQCAOST;
} 
CQCAOST_new = GPCAOST;
 /* line 152: */
DQCAOST_changed = A_VC_EQ(CQCAOST_new,(*(&(XOCAOST_var->Value))));
 /* line 153: */
EQCAOST = (&(XOCAOST_var->Value)) ;
(*EQCAOST) = CQCAOST_new;
 /* line 154: */
FQCAOST = (*(&(XOCAOST_var->Set))) ;
A_CALLPROC(FQCAOST,((*XOCAOST_var), DQCAOST_changed, Msg),((*XOCAOST_var), DQCAOST_changed, Msg,(FQCAOST).nonlocals));
 /* line 155: */
 /* line 156: */
GQCAOST = (&(XOCAOST_var->Value)) ;
(*GQCAOST) = CQCAOST_new;
} 
 /* line 157: */
 /* line 158: */
VOCAOST_vars = (*(&(VOCAOST_vars->Rest)));
}
 /* line 159: */
 /* line 160: */
if ( UOCAOST_not_found )
{ 
HQCAOST.data[0] = JQCAOST;
HQCAOST.data[1] = Name;
HQCAOST.data[2] = LQCAOST;
 /* line 161: */
 /* line 162: */
JBAAOSI_concat( A_HISVEC(MQCAOST,HQCAOST,3,A68_VC ), &NQCAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(OQCAOST,NQCAOST,A68_VC )),(WHAAOSI_user, A_HVEC(OQCAOST,NQCAOST,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(set_var);
return;
} 
#undef NL

A68_VOID  RQCAOST_show_var(A68_VC  Var, A68_97  Msg)
{ 
A68_VC  SQCAOST;  /* avoid structure result */
A68_VC  TQCAOST_value;
A68_175  UQCAOST;  /* collateral clause result */
A68_VC  VQCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  YQCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ZQCAOST;  /* avoid structure result */
A68_46  ARCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182  BRCAOST;  /* collateral clause result */
A68_52  ERCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  FRCAOST;  /* YIELD */
A68_52  GRCAOST;  /* OPERATORS - mode -> union mode */
A68_52  JRCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  KRCAOST;  /* YIELD */
A68_52  LRCAOST;  /* OPERATORS - mode -> union mode */
A68_56  MRCAOST;  /* procedure value */
A68_85  NRCAOST;  /* OPERATORS - istruct -> vector */
A68_184  ORCAOST;  /* collateral clause result */
A68_52  RRCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SRCAOST;  /* YIELD */
A68_52  TRCAOST;  /* OPERATORS - mode -> union mode */
A68_52  WRCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XRCAOST;  /* YIELD */
A68_52  YRCAOST;  /* OPERATORS - mode -> union mode */
A68_52  ZRCAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  ASCAOST;  /* YIELD */
A68_52  BSCAOST;  /* OPERATORS - mode -> union mode */
A68_56  CSCAOST;  /* procedure value */
A68_85  DSCAOST;  /* OPERATORS - istruct -> vector */
A68_163 * ESCAOST_vars;
A_PROC_ENTRY(show_var);
 /* line 166: */
 /* line 167: */
if ( (Var.upb>0) )
{ 
FNCAOST_get_var( Var, &SQCAOST );
TQCAOST_value = SQCAOST;
 /* line 168: */
 /* line 169: */
if ( A_VC_EQ(TQCAOST_value,DLCAOST_unknown_var) )
{ 
UQCAOST.data[0] = A_HVEC(VQCAOST,'\"',A68_CHAR );
UQCAOST.data[1] = Var;
UQCAOST.data[2] = XQCAOST;
 /* line 170: */
JBAAOSI_concat( A_HISVEC(YQCAOST,UQCAOST,3,A68_VC ), &ZQCAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ARCAOST,ZQCAOST,A68_VC )),(WHAAOSI_user, A_HVEC(ARCAOST,ZQCAOST,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 171: */
if ( (TQCAOST_value.upb==0) )
{ 
FRCAOST = DRCAOST ;
BRCAOST.data[0] = A_UNITE(ERCAOST,mode7,7,FRCAOST);
BRCAOST.data[1] = A_UNITE(GRCAOST,mode7,7,Var);
KRCAOST = IRCAOST ;
BRCAOST.data[2] = A_UNITE(JRCAOST,mode7,7,KRCAOST);
MRCAOST.fn.fn_global = LRAAOSL_newline;
MRCAOST.nonlocals = A68_NIL;
BRCAOST.data[3] = A_UNITE(LRCAOST,mode12,12,MRCAOST);
 /* line 172: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NRCAOST,BRCAOST,4,A68_52 ));
} 
else
{ 
SRCAOST = QRCAOST ;
ORCAOST.data[0] = A_UNITE(RRCAOST,mode7,7,SRCAOST);
ORCAOST.data[1] = A_UNITE(TRCAOST,mode7,7,Var);
XRCAOST = VRCAOST ;
ORCAOST.data[2] = A_UNITE(WRCAOST,mode7,7,XRCAOST);
ORCAOST.data[3] = A_UNITE(YRCAOST,mode7,7,TQCAOST_value);
 /* line 173: */
ASCAOST = '\"' ;
ORCAOST.data[4] = A_UNITE(ZRCAOST,mode6,6,ASCAOST);
CSCAOST.fn.fn_global = LRAAOSL_newline;
CSCAOST.nonlocals = A68_NIL;
ORCAOST.data[5] = A_UNITE(BSCAOST,mode12,12,CSCAOST);
 /* line 174: */
 /* line 175: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DSCAOST,ORCAOST,6,A68_52 ));
} 
} 
} 
else
{ 
ESCAOST_vars = LLCAOST_varslist;
 /* line 176: */
for ( ;; )
{ 
 /* line 177: */
if ( !((ESCAOST_vars!=KLCAOST_nilvars)) ) break;
RQCAOST_show_var((*(&((&(ESCAOST_vars->Var))->Name))), Msg);
 /* line 178: */
 /* line 179: */
ESCAOST_vars = (*(&(ESCAOST_vars->Rest)));
}
 /* line 180: */
} 
A_PROC_EXIT(show_var);
return;
} 
#undef NL

A68_VOID  GSCAOST_restore_vars(A68_VC  Buffer)
{ 
A_PROC_ENTRY(restore_vars);
/*SKIP*/;
A_PROC_EXIT(restore_vars);
return;
} 
#undef NL

A68_VOID  HSCAOST_remember_vars(A68_VC  *ReturnedValue)
{ 
A68_VC  ISCAOST;  /* clause result */
A_PROC_ENTRY(remember_vars);
ISCAOST = EOAAOSL_nullstr;
A_PROC_EXIT(remember_vars);
*ReturnedValue = (ISCAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void TKCAOST(void)   /* initialise DECS variables */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/variables.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/variables.a68";
A_config.translation_time = "Tue Apr  4 09:49:32 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SKCAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:32 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS variables);
UEAALIB_a68config(LGAALIB_configinfo, XKCAOST);
 /* line 47: */
 /* line 52: */
 /* line 54: */
 /* line 56: */
DLCAOST_unknown_var = CLCAOST;
GLCAOST_true_var = FLCAOST;
JLCAOST_false_var = ILCAOST;
 /* line 58: */
 /* line 59: */
LLCAOST_varslist = KLCAOST_nilvars;
 /* line 62: */
 /* line 78: */
 /* line 81: */
 /* line 90: */
 /* line 110: */
 /* line 117: */
 /* line 127: */
 /* line 165: */
 /* line 183: */
 /* line 185: */
 /* line 188: */
 /* line 191: */
A_PROC_EXIT(DECS variables);
} 
#undef NL
/* end of translation of ./a68files/variables.a68 */
