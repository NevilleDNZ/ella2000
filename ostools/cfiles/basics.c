
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
/* UNAME:ISCAOST */
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

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 53 CHAR */
struct A68t165{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t166 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE166) VOID */

A_PROCEDURE(A68_INT ,A68t168,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t169,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_INT ,A68t170,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t171,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(CHAR) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t171 ,A68_INT ),(struct A68t171 ,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE171,INT) VOID */

A_PROCEDURE(A68_CHAR ,A68t173,(void),(void *));
typedef struct A68t173  A68_173 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t174,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE173) INT */
A_ISTRUCT(A68_CHAR ,14,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,12,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 12 MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_INT ,12,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 12 INT */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,3,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t189,(A68_VC *,A68_CHAR ,A68_VC *),(A68_VC *,A68_CHAR ,A68_VC *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF REF MODE26,CHAR) REF MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_BOOL ,A68t191,(A68_VC ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *),(A68_VC ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t192,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,36,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_INT ,A68t194,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,INT,REF BOOL) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from testmode --- */
extern A68_INT  PIBAOST_testmode_seconds(A68_INT );
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_LINT  WZBAOSI_get_time(void);
extern A68_INT  ZACAOSI_get_cpu_time(void);
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
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  UHAAOSI_fatal;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_164   MSCAOST = {"$Id: basics.a68,v 34.2 1995/03/29 13:02:22 ella Exp $"}; 
A_GISVEC(A68_VC ,NSCAOST,MSCAOST,53)
#define OSCAOST_maxid 255
static A68_INT  PSCAOST_zero;
A68_VC  NTCAOST_nilid;
A68_VC  TTCAOST_nullid;
#define PVCAOST_bitsperchar 8
#define QVCAOST_charsperint 4
A68_INT  SVCAOST_maxchar;
static A68_INT  TVCAOST_maxintinchar;
static A68_INT  UVCAOST_intmask;
static A68_175   JXCAOST = {"left justify: "}; 
A_GISVEC(A68_VC ,KXCAOST,JXCAOST,14)
static A68_177   IYCAOST = {"right justify: "}; 
A_GISVEC(A68_VC ,JYCAOST,IYCAOST,15)
static A68_181   PADAOST = {"Jan"}; 
A_GISVEC(A68_VC ,QADAOST,PADAOST,3)
static A68_181   RADAOST = {"Feb"}; 
A_GISVEC(A68_VC ,SADAOST,RADAOST,3)
static A68_181   TADAOST = {"Mar"}; 
A_GISVEC(A68_VC ,UADAOST,TADAOST,3)
static A68_181   VADAOST = {"Apr"}; 
A_GISVEC(A68_VC ,WADAOST,VADAOST,3)
static A68_181   XADAOST = {"May"}; 
A_GISVEC(A68_VC ,YADAOST,XADAOST,3)
static A68_181   ZADAOST = {"Jun"}; 
A_GISVEC(A68_VC ,ABDAOST,ZADAOST,3)
static A68_181   BBDAOST = {"Jul"}; 
A_GISVEC(A68_VC ,CBDAOST,BBDAOST,3)
static A68_181   DBDAOST = {"Aug"}; 
A_GISVEC(A68_VC ,EBDAOST,DBDAOST,3)
static A68_181   FBDAOST = {"Sep"}; 
A_GISVEC(A68_VC ,GBDAOST,FBDAOST,3)
static A68_181   HBDAOST = {"Oct"}; 
A_GISVEC(A68_VC ,IBDAOST,HBDAOST,3)
static A68_181   JBDAOST = {"Nov"}; 
A_GISVEC(A68_VC ,KBDAOST,JBDAOST,3)
static A68_181   LBDAOST = {"Dec"}; 
A_GISVEC(A68_VC ,MBDAOST,LBDAOST,3)
static A68_46  OBDAOST_months;
static A68_183   SBDAOST = {"date_str:  Illegal time"}; 
A_GISVEC(A68_VC ,TBDAOST,SBDAOST,23)
static A68_186   IEDAOST = {".00  "}; 
static A68_190   NFDAOST = {""}; 
A_GISVEC(A68_VC ,PFDAOST,NFDAOST,0)
static A68_190   ZFDAOST = {""}; 
A_GISVEC(A68_VC ,AGDAOST,ZFDAOST,0)
#define LGDAOST_dateseparator ' '
#define MGDAOST_timeseparator ':'
#define NGDAOST_spacechar ' '
#define AIDAOST_secondsinminute 60
#define BIDAOST_minutesinhour 60
#define CIDAOST_hoursinday 24
#define DIDAOST_daysinnonleapyear 365
#define EIDAOST_lastnoneutyear 1982
static A68_193   OIDAOST = {"date_time_to_eut fault, CASE failure"}; 
A_GISVEC(A68_VC ,PIDAOST,OIDAOST,36)
A68_INT  AJDAOST_maxint;
A68_INT  BJDAOST_w;
A68_BITS  CJDAOST_b;
A68_INT  FJDAOST_bitswidth;
A68_INT  GJDAOST_byteswidth;
A68_INT  HJDAOST_largeint;
A68_INT  IJDAOST_minint;
A68_INT  JJDAOST_largeminint;
static A68_114   SKDAOST = {".ell"}; 
A_GISVEC(A68_VC ,TKDAOST,SKDAOST,4)
A68_VC  UKDAOST_library_type;
static A68_114   VKDAOST = {".elx"}; 
A_GISVEC(A68_VC ,WKDAOST,VKDAOST,4)
A68_VC  XKDAOST_simfile_type;
static A68_114   YKDAOST = {".elh"}; 
A_GISVEC(A68_VC ,ZKDAOST,YKDAOST,4)
A68_VC  ALDAOST_history_type;
static A68_114   BLDAOST = {".elt"}; 
A_GISVEC(A68_VC ,CLDAOST,BLDAOST,4)
A68_VC  DLDAOST_source_type;
static A68_114   ELDAOST = {".els"}; 
A_GISVEC(A68_VC ,FLDAOST,ELDAOST,4)
A68_VC  GLDAOST_savefile_type;
static A68_114   HLDAOST = {".eln"}; 
A_GISVEC(A68_VC ,ILDAOST,HLDAOST,4)
A68_VC  JLDAOST_ellanet_type;
static A68_114   KLDAOST = {".elg"}; 
A_GISVEC(A68_VC ,LLDAOST,KLDAOST,4)
A68_VC  MLDAOST_logfile_type;
static A68_114   NLDAOST = {".eli"}; 
A_GISVEC(A68_VC ,OLDAOST,NLDAOST,4)
A68_VC  PLDAOST_infile_type;
static A68_114   QLDAOST = {".elo"}; 
A_GISVEC(A68_VC ,RLDAOST,QLDAOST,4)
A68_VC  SLDAOST_outfile_type;
static A68_114   TLDAOST = {".dmp"}; 
A_GISVEC(A68_VC ,ULDAOST,TLDAOST,4)
A68_VC  VLDAOST_codedump_type;
static A68_114   WLDAOST = {".ela"}; 
A_GISVEC(A68_VC ,XLDAOST,WLDAOST,4)
A68_VC  YLDAOST_assfile_type;
static A68_114   ZLDAOST = {".eld"}; 
A_GISVEC(A68_VC ,AMDAOST,ZLDAOST,4)
static A68_VC  BMDAOST_download_type;
static A68_187   CMDAOST = {"ellasysdir"}; 
A_GISVEC(A68_VC ,DMDAOST,CMDAOST,10)
A68_VC  EMDAOST_ellasysdir_var;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} VSCAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FTCAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LWCAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_37)
} VXCAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_38)
} UYCAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IADAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JDDAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UDDAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Input;
} SGDAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} NIDAOST_casefault;

A68_VOID  RSCAOST_makeid(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  USCAOST_generator(A68_BOOL  SSCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  BTCAOST_makeid(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ETCAOST_generator(A68_BOOL  CTCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PTCAOST_generator(A68_BOOL  OTCAOST_anonymous, A68_VC  *ReturnedValue);

A68_VOID  VTCAOST_clear(A68_166  Vec);

A68_VOID  KUCAOST_uppercase(A68_VC  Str);

A68_VOID  PUCAOST_uppercase(A68_VC  Str, A68_VC  *ReturnedValue);

A68_VOID  UUCAOST_lowercase(A68_VC  Str);

A68_VOID  ZUCAOST_lowercase(A68_VC  Str, A68_VC  *ReturnedValue);

A68_INT  FVCAOST_max(A68_INT  A, A68_INT  B);

A68_INT  JVCAOST_min(A68_INT  A, A68_INT  B);

A68_BITS  NVCAOST_xor(A68_BITS  A, A68_BITS  B);

A68_INT  XVCAOST_charstoint(A68_VC  Str, A68_BOOL * Error);

A68_VOID  GWCAOST_outilint(A68_171  Outintchar, A68_INT  Int);

A_STATIC A68_VOID  KWCAOST_generator(A68_BOOL  IWCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  YWCAOST_inilint(A68_173  Inintchar);

A68_VOID  HXCAOST_leftjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UXCAOST_generator(A68_BOOL  SXCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  GYCAOST_rightjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TYCAOST_generator(A68_BOOL  RYCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  DZCAOST_seconds(void);

A68_INT  GZCAOST_days(A68_INT  Seconds);

A_STATIC A68_VOID  KZCAOST_time_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  EADAOST_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HADAOST_generator(A68_BOOL  FADAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBDAOST_date_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  FDDAOST_date(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IDDAOST_generator(A68_BOOL  GDDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  QDDAOST_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TDDAOST_generator(A68_BOOL  RDDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  GEDAOST_time_str(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MFDAOST_extractchars(A68_VC * Input, A68_CHAR  Terminatingchar, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  KGDAOST_parsedateandtimestring(A68_VC  Input, A68_INT * Year, A68_INT * Month, A68_INT * Day, A68_INT * Hour, A68_INT * Min, A68_INT * Sec);

A_STATIC A68_VOID  RGDAOST_generator(A68_BOOL  PGDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  ZHDAOST_datetimetoeut(A68_VC  String, A68_INT * Seconds, A68_97  Msg);

A_STATIC A68_VOID  MIDAOST_casefault(void *NonLocals);

A68_INT  NJDAOST_addwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_INT  UJDAOST_subtractwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_INT  BKDAOST_multiplywithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_VOID  NKDAOST_sysfault(A68_VC  Message);

A68_VOID  QKDAOST_abort(A68_VC  Message);

A_STATIC A68_VOID  USCAOST_generator(A68_BOOL  SSCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VSCAOST_generator *)NonLocals)->x)
{ 
A68_VC  WSCAOST;  /* clause result */
A68_VC  XSCAOST;  /* OPERATORS - dynamic generator */
{ 
XSCAOST.upb = NL(Str).upb ;
( SSCAOST_anonymous? A_VLOC(A68_CHAR ,XSCAOST): A_VHEAP(A68_CHAR ,XSCAOST) );
WSCAOST = XSCAOST;
} 
*ReturnedValue = (WSCAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ETCAOST_generator(A68_BOOL  CTCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FTCAOST_generator *)NonLocals)->x)
{ 
A68_VC  GTCAOST;  /* clause result */
A68_VC  HTCAOST;  /* OPERATORS - dynamic generator */
{ 
HTCAOST.upb = 1 ;
( CTCAOST_anonymous? A_VLOC(A68_CHAR ,HTCAOST): A_VHEAP(A68_CHAR ,HTCAOST) );
GTCAOST = HTCAOST;
} 
*ReturnedValue = (GTCAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  KWCAOST_generator(A68_BOOL  IWCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LWCAOST_generator *)NonLocals)->x)
{ 
A68_VC  MWCAOST;  /* clause result */
A68_VC  NWCAOST;  /* OPERATORS - dynamic generator */
{ 
NWCAOST.upb = QVCAOST_charsperint ;
( IWCAOST_anonymous? A_VLOC(A68_CHAR ,NWCAOST): A_VHEAP(A68_CHAR ,NWCAOST) );
MWCAOST = NWCAOST;
} 
*ReturnedValue = (MWCAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  UXCAOST_generator(A68_BOOL  SXCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VXCAOST_generator *)NonLocals)->x)
{ 
A68_VC  WXCAOST;  /* clause result */
A68_VC  XXCAOST;  /* OPERATORS - dynamic generator */
{ 
XXCAOST.upb = NL(Width) ;
( SXCAOST_anonymous? A_VLOC(A68_CHAR ,XXCAOST): A_VHEAP(A68_CHAR ,XXCAOST) );
WXCAOST = XXCAOST;
} 
*ReturnedValue = (WXCAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  TYCAOST_generator(A68_BOOL  RYCAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UYCAOST_generator *)NonLocals)->x)
{ 
A68_VC  VYCAOST;  /* clause result */
A68_VC  WYCAOST;  /* OPERATORS - dynamic generator */
{ 
WYCAOST.upb = NL(Width) ;
( RYCAOST_anonymous? A_VLOC(A68_CHAR ,WYCAOST): A_VHEAP(A68_CHAR ,WYCAOST) );
VYCAOST = WYCAOST;
} 
*ReturnedValue = (VYCAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  HADAOST_generator(A68_BOOL  FADAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IADAOST_generator *)NonLocals)->x)
{ 
A68_VC  JADAOST;  /* clause result */
A68_VC  KADAOST;  /* OPERATORS - dynamic generator */
{ 
KADAOST.upb = 8 ;
( FADAOST_anonymous? A_VLOC(A68_CHAR ,KADAOST): A_VHEAP(A68_CHAR ,KADAOST) );
JADAOST = KADAOST;
} 
*ReturnedValue = (JADAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  IDDAOST_generator(A68_BOOL  GDDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JDDAOST_generator *)NonLocals)->x)
{ 
A68_VC  KDDAOST;  /* clause result */
A68_VC  LDDAOST;  /* OPERATORS - dynamic generator */
{ 
LDDAOST.upb = 11 ;
( GDDAOST_anonymous? A_VLOC(A68_CHAR ,LDDAOST): A_VHEAP(A68_CHAR ,LDDAOST) );
KDDAOST = LDDAOST;
} 
*ReturnedValue = (KDDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  TDDAOST_generator(A68_BOOL  RDDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UDDAOST_generator *)NonLocals)->x)
{ 
A68_VC  VDDAOST;  /* clause result */
A68_VC  WDDAOST;  /* OPERATORS - dynamic generator */
{ 
WDDAOST.upb = 21 ;
( RDDAOST_anonymous? A_VLOC(A68_CHAR ,WDDAOST): A_VHEAP(A68_CHAR ,WDDAOST) );
VDDAOST = WDDAOST;
} 
*ReturnedValue = (VDDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  RGDAOST_generator(A68_BOOL  PGDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SGDAOST_generator *)NonLocals)->x)
{ 
A68_VC  TGDAOST;  /* clause result */
A68_VC  UGDAOST;  /* OPERATORS - dynamic generator */
{ 
 /* line 419: */
UGDAOST.upb = NL(Input).upb ;
( PGDAOST_anonymous? A_VLOC(A68_CHAR ,UGDAOST): A_VHEAP(A68_CHAR ,UGDAOST) );
TGDAOST = UGDAOST;
} 
*ReturnedValue = (TGDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  MIDAOST_casefault(void *NonLocals)
#define NL(x) (((NIDAOST_casefault *)NonLocals)->x)
{ 
A68_46  QIDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(casefault);
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(QIDAOST,PIDAOST,A68_VC )),(SHAAOSI_system, A_HVEC(QIDAOST,PIDAOST,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(casefault);
return;
} 
#undef NL

A68_VOID  RSCAOST_makeid(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  TSCAOST_generator;   /* proc value of non-global proc */
A68_VC  YSCAOST;  /* clause result */
A68_VC  ZSCAOST;  /* avoid structure result */
A_PROC_ENTRY(makeid);
A_CLOSURE( TSCAOST_generator, USCAOST_generator, VSCAOST_generator );
(( VSCAOST_generator * ) ( TSCAOST_generator.nonlocals )) -> Str = Str;
A_CALLPROC(TSCAOST_generator,(A68_FALSE, &ZSCAOST),(A68_FALSE, &ZSCAOST,(TSCAOST_generator).nonlocals));
A_VASSIGN2(Str,ZSCAOST,A68_CHAR ) ;
YSCAOST = ZSCAOST;
A_PROC_EXIT(makeid);
*ReturnedValue = (YSCAOST);
return;
} 
#undef NL

A68_VOID  BTCAOST_makeid(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_31  DTCAOST_generator;   /* proc value of non-global proc */
A68_VC  ITCAOST;  /* clause result */
A68_VC  JTCAOST;  /* avoid structure result */
A68_VC  KTCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LTCAOST;  /* OPERATORS - assign op */
A_PROC_ENTRY(makeid);
A_CLOSURE( DTCAOST_generator, ETCAOST_generator, FTCAOST_generator );
A_CALLPROC(DTCAOST_generator,(A68_FALSE, &JTCAOST),(A68_FALSE, &JTCAOST,(DTCAOST_generator).nonlocals));
LTCAOST = A_HVEC(KTCAOST,C,A68_CHAR ) ;
A_VASSIGN2(LTCAOST,JTCAOST,A68_CHAR ) ;
ITCAOST = JTCAOST;
A_PROC_EXIT(makeid);
*ReturnedValue = (ITCAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  PTCAOST_generator(A68_BOOL  OTCAOST_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QTCAOST;  /* clause result */
A68_VC  RTCAOST;  /* OPERATORS - dynamic generator */
{ 
RTCAOST.upb = 0 ;
( OTCAOST_anonymous? A_VLOC(A68_CHAR ,RTCAOST): A_VHEAP(A68_CHAR ,RTCAOST) );
QTCAOST = RTCAOST;
} 
*ReturnedValue = (QTCAOST);
return;
} 
#undef NL

A68_VOID  VTCAOST_clear(A68_166  Vec)
{ 
A68_166  WTCAOST;  /* united object - for case conformity */
A68_VC  XTCAOST_chars;
A68_CHAR * YTCAOST_c;
A68_INT  ZTCAOST;  /* forall loop counter */
A68_32  AUCAOST_ints;
A68_INT * BUCAOST_i;
A68_INT  CUCAOST;  /* forall loop counter */
A68_54  DUCAOST_bools;
A68_BOOL * EUCAOST_b;
A68_INT  FUCAOST;  /* forall loop counter */
A68_53  GUCAOST_bits;
A68_BITS * HUCAOST_u;
A68_INT  IUCAOST;  /* forall loop counter */
A_PROC_ENTRY(clear);
 /* line 112: */
 /* line 113: */
WTCAOST = Vec ;
switch ( WTCAOST.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
XTCAOST_chars = (WTCAOST.data.mode1);
ZTCAOST = XTCAOST_chars.upb -1;
YTCAOST_c = XTCAOST_chars.data;
for (;ZTCAOST-- >= 0;
(YTCAOST_c++
) )
{
(*YTCAOST_c) = ' ';
}
 /* line 114: */
break;
case 2: /* REF VECTOR [] INT */
AUCAOST_ints = (WTCAOST.data.mode2);
CUCAOST = AUCAOST_ints.upb -1;
BUCAOST_i = AUCAOST_ints.data;
for (;CUCAOST-- >= 0;
(BUCAOST_i++
) )
{
(*BUCAOST_i) = 0;
}
 /* line 115: */
break;
case 3: /* REF VECTOR [] BOOL */
DUCAOST_bools = (WTCAOST.data.mode3);
FUCAOST = DUCAOST_bools.upb -1;
EUCAOST_b = DUCAOST_bools.data;
for (;FUCAOST-- >= 0;
(EUCAOST_b++
) )
{
(*EUCAOST_b) = A68_FALSE;
}
 /* line 116: */
break;
case 4: /* REF VECTOR [] BITS */
GUCAOST_bits = (WTCAOST.data.mode4);
IUCAOST = GUCAOST_bits.upb -1;
HUCAOST_u = GUCAOST_bits.data;
for (;IUCAOST-- >= 0;
(HUCAOST_u++
) )
{
(*HUCAOST_u) = 0X0U;
}
 /* line 117: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  KUCAOST_uppercase(A68_VC  Str)
{ 
A68_CHAR * LUCAOST_c;
A68_INT  MUCAOST;  /* forall loop counter */
A68_BOOL  NUCAOST;  /* optbool result */
A_PROC_ENTRY(uppercase);
 /* line 121: */
 /* line 122: */
MUCAOST = Str.upb -1;
LUCAOST_c = Str.data;
for (;MUCAOST-- >= 0;
(LUCAOST_c++
) )
{
NUCAOST = ((*LUCAOST_c)>='a');
if ( NUCAOST )
{NUCAOST = ((*LUCAOST_c)<='z');
}
if ( NUCAOST )
{ 
(*LUCAOST_c) = (A68_CHAR)((A68_INT)(unsigned char)(*LUCAOST_c)-32);
} 
}
A_PROC_EXIT(uppercase);
return;
} 
#undef NL

A68_VOID  PUCAOST_uppercase(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  QUCAOST;  /* avoid structure result */
A68_VC  RUCAOST_ans;
A68_VC  SUCAOST;  /* clause result */
A_PROC_ENTRY(uppercase);
 /* line 125: */
 /* line 126: */
{ 
ZAAAOSI_makervc( Str, &QUCAOST );
RUCAOST_ans = QUCAOST;
 /* line 127: */
KUCAOST_uppercase(RUCAOST_ans);
 /* line 128: */
 /* line 129: */
SUCAOST = RUCAOST_ans;
} 
A_PROC_EXIT(uppercase);
*ReturnedValue = (SUCAOST);
return;
} 
#undef NL

A68_VOID  UUCAOST_lowercase(A68_VC  Str)
{ 
A68_CHAR * VUCAOST_c;
A68_INT  WUCAOST;  /* forall loop counter */
A68_BOOL  XUCAOST;  /* optbool result */
A_PROC_ENTRY(lowercase);
 /* line 132: */
 /* line 133: */
WUCAOST = Str.upb -1;
VUCAOST_c = Str.data;
for (;WUCAOST-- >= 0;
(VUCAOST_c++
) )
{
XUCAOST = ((*VUCAOST_c)>='A');
if ( XUCAOST )
{XUCAOST = ((*VUCAOST_c)<='Z');
}
if ( XUCAOST )
{ 
(*VUCAOST_c) = (A68_CHAR)((A68_INT)(unsigned char)(*VUCAOST_c)+32);
} 
}
A_PROC_EXIT(lowercase);
return;
} 
#undef NL

A68_VOID  ZUCAOST_lowercase(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  AVCAOST;  /* avoid structure result */
A68_VC  BVCAOST_ans;
A68_VC  CVCAOST;  /* clause result */
A_PROC_ENTRY(lowercase);
 /* line 136: */
 /* line 137: */
{ 
ZAAAOSI_makervc( Str, &AVCAOST );
BVCAOST_ans = AVCAOST;
 /* line 138: */
UUCAOST_lowercase(BVCAOST_ans);
 /* line 139: */
 /* line 140: */
CVCAOST = BVCAOST_ans;
} 
A_PROC_EXIT(lowercase);
*ReturnedValue = (CVCAOST);
return;
} 
#undef NL

A68_INT  FVCAOST_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  GVCAOST;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
GVCAOST = A;
} 
else
{ 
GVCAOST = B;
} 
A_PROC_EXIT(max);
return( GVCAOST );
} 
#undef NL

A68_INT  JVCAOST_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  KVCAOST;  /* clause result */
A_PROC_ENTRY(min);
if ( (A<B) )
{ 
KVCAOST = A;
} 
else
{ 
KVCAOST = B;
} 
A_PROC_EXIT(min);
return( KVCAOST );
} 
#undef NL

A68_BITS  NVCAOST_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  OVCAOST;  /* clause result */
A_PROC_ENTRY(xor);
OVCAOST = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(B&~A));
A_PROC_EXIT(xor);
return( OVCAOST );
} 
#undef NL

A68_INT  XVCAOST_charstoint(A68_VC  Str, A68_BOOL * Error)
{ 
A68_INT  YVCAOST_index;
A68_INT  ZVCAOST_ans;
A68_BOOL  AWCAOST_neg;
A68_BOOL  BWCAOST;  /* optbool result */
A68_BOOL  CWCAOST;  /* optbool result */
A68_INT  DWCAOST;  /* clause result */
A_PROC_ENTRY(charstoint);
 /* line 166: */
 /* line 167: */
{ 
YVCAOST_index = 1;
ZVCAOST_ans = 0;
 /* line 168: */
AWCAOST_neg = A68_FALSE;
 /* line 169: */
for ( ;; )
{ 
BWCAOST = (YVCAOST_index<=Str.upb);
if ( BWCAOST )
{BWCAOST = (A_VINDEX(Str,YVCAOST_index)==' ');
}
if ( !(BWCAOST) ) break;
YVCAOST_index+=1;
}
 /* line 170: */
 /* line 171: */
 /* line 172: */
if ( (YVCAOST_index<=Str.upb) )
{ 
if ( (A_VINDEX(Str,YVCAOST_index)=='+') )
{ 
 /* line 173: */
YVCAOST_index+=1;
} 
else
{ 
if ( (A_VINDEX(Str,YVCAOST_index)=='-') )
{ 
YVCAOST_index+=1;
 /* line 174: */
AWCAOST_neg = A68_TRUE;
} 
} 
 /* line 175: */
for ( ;; )
{ 
 /* line 176: */
 /* line 177: */
CWCAOST = (YVCAOST_index<=Str.upb);
if ( CWCAOST )
{CWCAOST = (A_VINDEX(Str,YVCAOST_index)<='9');
}
 /* line 178: */
if ( CWCAOST )
{ /* line 179: */
CWCAOST = (A_VINDEX(Str,YVCAOST_index)>='0');
}
 /* line 180: */
if ( !(CWCAOST) ) break;
ZVCAOST_ans*=10 ;
ZVCAOST_ans-=((A68_INT)(unsigned char)A_VINDEX(Str,YVCAOST_index)-PSCAOST_zero);
 /* line 181: */
 /* line 182: */
YVCAOST_index+=1;
}
 /* line 183: */
 /* line 184: */
} 
else
{ 
 /* line 185: */
(*Error) = A68_TRUE;
} 
 /* line 186: */
if ( (YVCAOST_index<Str.upb) )
{ 
(*Error) = A68_TRUE;
} 
 /* line 187: */
if ( AWCAOST_neg )
{ 
DWCAOST = ZVCAOST_ans;
} 
else
{ 
 /* line 188: */
DWCAOST = (-ZVCAOST_ans);
} 
} 
A_PROC_EXIT(charstoint);
return( DWCAOST );
} 
#undef NL

A68_VOID  GWCAOST_outilint(A68_171  Outintchar, A68_INT  Int)
{ 
A68_BOOL  HWCAOST;  /* optbool result */
A68_31  JWCAOST_generator;   /* proc value of non-global proc */
A68_VC  PWCAOST;  /* avoid structure result */
A68_VC  OWCAOST_line;
A68_INT  QWCAOST_l;
A68_BITS  RWCAOST_i;
A68_INT  SWCAOST;  /* YIELD */
A68_CHAR * TWCAOST;  /* YIELD */
A68_BOOL  UWCAOST;  /* clause result */
A68_INT  VWCAOST_i;
A68_INT  WWCAOST;  /* to part of loop */
A_PROC_ENTRY(outilint);
 /* line 191: */
 /* line 192: */
{ 
HWCAOST = (Int<=TVCAOST_maxintinchar);
if ( HWCAOST )
{ /* line 193: */
HWCAOST = (Int>=0);
}
if ( HWCAOST )
{ 
 /* line 194: */
A_CALLPROC(Outintchar,((A68_CHAR)Int),((A68_CHAR)Int,(Outintchar).nonlocals));
} 
else
{ 
A_CLOSURE( JWCAOST_generator, KWCAOST_generator, LWCAOST_generator );
A_CALLPROC(JWCAOST_generator,(A68_TRUE, &PWCAOST),(A68_TRUE, &PWCAOST,(JWCAOST_generator).nonlocals));
OWCAOST_line = PWCAOST;
 /* line 195: */
QWCAOST_l = (QVCAOST_charsperint+1);
 /* line 196: */
RWCAOST_i = (A68_BITS )Int;
 /* line 197: */
for ( ;; )
{ 
SWCAOST = QWCAOST_l-=1 ;
TWCAOST = (&A_VINDEX(OWCAOST_line,SWCAOST)) ;
(*TWCAOST) = (A68_CHAR)(A68_INT )(A68_BITS )(RWCAOST_i&(A68_BITS )UVCAOST_intmask);
 /* line 198: */
RWCAOST_i = A_SHR(RWCAOST_i,PVCAOST_bitsperchar);
 /* line 199: */
UWCAOST = (RWCAOST_i!=00U);
if ( !UWCAOST ) break;
/*SKIP*/;
}
 /* line 200: */
A_CALLPROC(Outintchar,((A68_CHAR)(SVCAOST_maxchar-QWCAOST_l)),((A68_CHAR)(SVCAOST_maxchar-QWCAOST_l),(Outintchar).nonlocals));
 /* line 201: */
WWCAOST = QVCAOST_charsperint;
for ( VWCAOST_i = QWCAOST_l;
VWCAOST_i <= WWCAOST;
VWCAOST_i += 1 )
{ 
A_CALLPROC(Outintchar,((*(&A_VINDEX(OWCAOST_line,VWCAOST_i)))),((*(&A_VINDEX(OWCAOST_line,VWCAOST_i))),(Outintchar).nonlocals));
}
 /* line 202: */
 /* line 203: */
} 
} 
A_PROC_EXIT(outilint);
return;
} 
#undef NL

A68_INT  YWCAOST_inilint(A68_173  Inintchar)
{ 
A68_INT  ZWCAOST_int;
A68_INT  AXCAOST_i;
A68_INT  BXCAOST;  /* to part of loop */
A68_INT  CXCAOST;  /* loop control */
A68_BITS  DXCAOST;  /* SHL */
A68_INT  EXCAOST;  /* clause result */
A_PROC_ENTRY(inilint);
 /* line 207: */
 /* line 208: */
{ 
ZWCAOST_int = (A68_INT)(unsigned char)A_CALLPROC(Inintchar,(),((Inintchar).nonlocals));
 /* line 209: */
 /* line 210: */
if ( (ZWCAOST_int>TVCAOST_maxintinchar) )
{ 
AXCAOST_i = (ZWCAOST_int-TVCAOST_maxintinchar);
 /* line 211: */
ZWCAOST_int = 0;
 /* line 212: */
BXCAOST = AXCAOST_i;
for ( CXCAOST = 1;
CXCAOST <= BXCAOST;
CXCAOST += 1 )
{ 
DXCAOST = (A68_BITS )ZWCAOST_int ;
ZWCAOST_int = ((A68_INT )A_SHL(DXCAOST,PVCAOST_bitsperchar)+(A68_INT)(unsigned char)A_CALLPROC(Inintchar,(),((Inintchar).nonlocals)));
}
 /* line 213: */
} 
 /* line 214: */
 /* line 215: */
EXCAOST = ZWCAOST_int;
} 
A_PROC_EXIT(inilint);
return( EXCAOST );
} 
#undef NL

A68_VOID  HXCAOST_leftjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_176  IXCAOST;  /* collateral clause result */
A68_52  LXCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  MXCAOST;  /* YIELD */
A68_52  NXCAOST;  /* OPERATORS - mode -> union mode */
A68_INT  OXCAOST;  /* YIELD */
A68_85  PXCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  QXCAOST;  /* avoid structure result */
A68_46  RXCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  TXCAOST_generator;   /* proc value of non-global proc */
A68_VC  ZXCAOST;  /* avoid structure result */
A68_VC  YXCAOST_answer;
A68_166  AYCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BYCAOST;  /* OPERATORS - trim index */
A68_VC  CYCAOST;  /* YIELD */
A68_VC  DYCAOST;  /* clause result */
A_PROC_ENTRY(leftjustify);
 /* line 223: */
 /* line 224: */
{ 
 /* line 225: */
if ( (Param.upb>Width) )
{ 
MXCAOST = KXCAOST ;
IXCAOST.data[0] = A_UNITE(LXCAOST,mode7,7,MXCAOST);
OXCAOST = Param.upb ;
IXCAOST.data[1] = A_UNITE(NXCAOST,mode1,1,OXCAOST);
 /* line 226: */
UJBAOSL_oneline( A_HISVEC(PXCAOST,IXCAOST,2,A68_52 ), &QXCAOST );
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(RXCAOST,QXCAOST,A68_VC )),(SHAAOSI_system, A_HVEC(RXCAOST,QXCAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
 /* line 227: */
A_CLOSURE( TXCAOST_generator, UXCAOST_generator, VXCAOST_generator );
(( VXCAOST_generator * ) ( TXCAOST_generator.nonlocals )) -> Width = Width;
A_CALLPROC(TXCAOST_generator,(A68_TRUE, &ZXCAOST),(A68_TRUE, &ZXCAOST,(TXCAOST_generator).nonlocals));
YXCAOST_answer = ZXCAOST;
 /* line 228: */
VTCAOST_clear(A_UNITE(AYCAOST,mode1,1,YXCAOST_answer));
 /* line 229: */
if ( (Param.upb>0) )
{ 
CYCAOST = A_VTRIM(BYCAOST,(YXCAOST_answer),A_VTSCRIPT(&(BYCAOST.upb),(YXCAOST_answer).upb,1,Param.upb)) ;
A_VASSIGN2(Param,CYCAOST,A68_CHAR );
} 
 /* line 230: */
 /* line 231: */
DYCAOST = YXCAOST_answer;
} 
A_PROC_EXIT(leftjustify);
*ReturnedValue = (DYCAOST);
return;
} 
#undef NL

A68_VOID  GYCAOST_rightjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_176  HYCAOST;  /* collateral clause result */
A68_52  KYCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  LYCAOST;  /* YIELD */
A68_52  MYCAOST;  /* OPERATORS - mode -> union mode */
A68_INT  NYCAOST;  /* YIELD */
A68_85  OYCAOST;  /* OPERATORS - istruct -> vector */
A68_VC  PYCAOST;  /* avoid structure result */
A68_46  QYCAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  SYCAOST_generator;   /* proc value of non-global proc */
A68_VC  YYCAOST;  /* avoid structure result */
A68_VC  XYCAOST_answer;
A68_166  ZYCAOST;  /* OPERATORS - mode -> union mode */
A68_VC  AZCAOST;  /* OPERATORS - trim index */
A68_VC  BZCAOST;  /* YIELD */
A68_VC  CZCAOST;  /* clause result */
A_PROC_ENTRY(rightjustify);
 /* line 234: */
 /* line 235: */
{ 
 /* line 236: */
if ( (Param.upb>Width) )
{ 
LYCAOST = JYCAOST ;
HYCAOST.data[0] = A_UNITE(KYCAOST,mode7,7,LYCAOST);
NYCAOST = Param.upb ;
HYCAOST.data[1] = A_UNITE(MYCAOST,mode1,1,NYCAOST);
 /* line 237: */
UJBAOSL_oneline( A_HISVEC(OYCAOST,HYCAOST,2,A68_52 ), &PYCAOST );
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(QYCAOST,PYCAOST,A68_VC )),(SHAAOSI_system, A_HVEC(QYCAOST,PYCAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
 /* line 238: */
A_CLOSURE( SYCAOST_generator, TYCAOST_generator, UYCAOST_generator );
(( UYCAOST_generator * ) ( SYCAOST_generator.nonlocals )) -> Width = Width;
A_CALLPROC(SYCAOST_generator,(A68_TRUE, &YYCAOST),(A68_TRUE, &YYCAOST,(SYCAOST_generator).nonlocals));
XYCAOST_answer = YYCAOST;
 /* line 239: */
VTCAOST_clear(A_UNITE(ZYCAOST,mode1,1,XYCAOST_answer));
 /* line 240: */
if ( (Param.upb>0) )
{ 
BZCAOST = A_VTRIM(AZCAOST,(XYCAOST_answer),A_VTSCRIPT(&(AZCAOST.upb),(XYCAOST_answer).upb,((Width-Param.upb)+1),(XYCAOST_answer).upb)) ;
A_VASSIGN2(Param,BZCAOST,A68_CHAR );
} 
 /* line 241: */
 /* line 242: */
CZCAOST = XYCAOST_answer;
} 
A_PROC_EXIT(rightjustify);
*ReturnedValue = (CZCAOST);
return;
} 
#undef NL

A68_INT  DZCAOST_seconds(void)
{ 
A68_INT  EZCAOST;  /* clause result */
A_PROC_ENTRY(seconds);
EZCAOST = PIBAOST_testmode_seconds((A68_INT )WZBAOSI_get_time());
A_PROC_EXIT(seconds);
return( EZCAOST );
} 
#undef NL

A68_INT  GZCAOST_days(A68_INT  Seconds)
{ 
A68_INT  HZCAOST;  /* clause result */
A_PROC_ENTRY(days);
HZCAOST = (Seconds/86400);
A_PROC_EXIT(days);
return( HZCAOST );
} 
#undef NL

A_STATIC A68_VOID  KZCAOST_time_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_INT  LZCAOST;  /* ADICOPS - MOD */
A68_INT  MZCAOST;  /* ADICOPS - MOD */
A68_INT  NZCAOST_dsecs;
A68_INT  OZCAOST_dmins;
A68_INT  PZCAOST_hrs;
A68_INT  QZCAOST;  /* ADICOPS - MOD */
A68_INT  RZCAOST;  /* ADICOPS - MOD */
A68_INT  SZCAOST_mins;
A68_INT  TZCAOST;  /* ADICOPS - MOD */
A68_INT  UZCAOST;  /* ADICOPS - MOD */
A68_INT  VZCAOST_secs;
A68_179  WZCAOST;  /* collateral clause result */
A68_INT  XZCAOST;  /* ADICOPS - MOD */
A68_INT  YZCAOST;  /* ADICOPS - MOD */
A68_INT  ZZCAOST;  /* ADICOPS - MOD */
A68_INT  AADAOST;  /* ADICOPS - MOD */
A68_VC  BADAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CADAOST;  /* OPERATORS - assign op */
A_PROC_ENTRY(time_proc);
 /* line 255: */
 /* line 256: */
{ 
MZCAOST = 86400 ;
NZCAOST_dsecs = A_MOD(Seconds,MZCAOST,LZCAOST);
 /* line 257: */
OZCAOST_dmins = (NZCAOST_dsecs/60);
 /* line 258: */
PZCAOST_hrs = (OZCAOST_dmins/60);
 /* line 259: */
RZCAOST = 60 ;
SZCAOST_mins = A_MOD(OZCAOST_dmins,RZCAOST,QZCAOST);
 /* line 260: */
UZCAOST = 60 ;
VZCAOST_secs = A_MOD(NZCAOST_dsecs,UZCAOST,TZCAOST);
 /* line 261: */
 /* line 262: */
WZCAOST.data[0] = (A68_CHAR)(PSCAOST_zero+(PZCAOST_hrs/10));
YZCAOST = 10 ;
WZCAOST.data[1] = (A68_CHAR)(PSCAOST_zero+A_MOD(PZCAOST_hrs,YZCAOST,XZCAOST));
 /* line 263: */
WZCAOST.data[2] = ':';
WZCAOST.data[3] = (A68_CHAR)(PSCAOST_zero+(SZCAOST_mins/10));
AADAOST = 10 ;
WZCAOST.data[4] = (A68_CHAR)(PSCAOST_zero+A_MOD(SZCAOST_mins,AADAOST,ZZCAOST));
 /* line 264: */
WZCAOST.data[5] = ':';
WZCAOST.data[6] = (A68_CHAR)(PSCAOST_zero+(VZCAOST_secs/10));
 /* line 265: */
WZCAOST.data[7] = (A68_CHAR)(PSCAOST_zero+(VZCAOST_secs/10));
CADAOST = A_HISVEC(BADAOST,WZCAOST,8,A68_CHAR ) ;
A_VASSIGN2(CADAOST,Ans,A68_CHAR );
} 
A_PROC_EXIT(time_proc);
return;
} 
#undef NL

A68_VOID  EADAOST_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  GADAOST_generator;   /* proc value of non-global proc */
A68_VC  LADAOST;  /* avoid structure result */
A68_VC  MADAOST_ans;
A68_VC  NADAOST;  /* clause result */
A_PROC_ENTRY(time);
 /* line 268: */
{ 
A_CLOSURE( GADAOST_generator, HADAOST_generator, IADAOST_generator );
A_CALLPROC(GADAOST_generator,(A68_FALSE, &LADAOST),(A68_FALSE, &LADAOST,(GADAOST_generator).nonlocals));
MADAOST_ans = LADAOST;
KZCAOST_time_proc(Seconds, MADAOST_ans);
NADAOST = MADAOST_ans;
} 
A_PROC_EXIT(time);
*ReturnedValue = (NADAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  RBDAOST_date_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_46  UBDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  VBDAOST_days;
A68_INT  WBDAOST_year;
A68_BOOL  XBDAOST_leap;
A68_INT  YBDAOST;  /* ADICOPS - MOD */
A68_INT  ZBDAOST;  /* ADICOPS - MOD */
A68_BOOL  ACDAOST;  /* optbool result */
A68_INT  BCDAOST;  /* ADICOPS - MOD */
A68_INT  CCDAOST;  /* ADICOPS - MOD */
A68_INT  DCDAOST_month;
A68_184  ECDAOST;  /* collateral clause result */
A68_184  FCDAOST_mnths;
A68_32  GCDAOST;  /* OPERATORS - istruct -> vector */
A68_32  HCDAOST;  /* OPERATORS - simple index */
A68_32  ICDAOST;  /* OPERATORS - istruct -> vector */
A68_32  JCDAOST;  /* OPERATORS - simple index */
A68_INT  KCDAOST_dten;
A68_CHAR  LCDAOST;  /* clause result */
A68_INT  MCDAOST;  /* YIELD */
A68_CHAR * NCDAOST;  /* YIELD */
A68_INT  OCDAOST;  /* YIELD */
A68_INT  PCDAOST;  /* ADICOPS - MOD */
A68_INT  QCDAOST;  /* ADICOPS - MOD */
A68_CHAR * RCDAOST;  /* YIELD */
A68_INT  SCDAOST;  /* YIELD */
A68_INT  TCDAOST;  /* YIELD */
A68_CHAR * UCDAOST;  /* YIELD */
A68_CHAR * VCDAOST;  /* YIELD */
A68_VC  WCDAOST;  /* OPERATORS - trim index */
A68_VC  XCDAOST;  /* YIELD */
A68_VC  YCDAOST;  /* OPERATORS - assign op */
A68_INT  ZCDAOST_i;
A68_INT  ADDAOST;  /* by part of loop */
A68_INT  BDDAOST;  /* ADICOPS - MOD */
A68_INT  CDDAOST;  /* ADICOPS - MOD */
A68_CHAR * DDDAOST;  /* YIELD */
A_PROC_ENTRY(date_proc);
 /* line 274: */
 /* line 275: */
{ 
if ( (Seconds<0) )
{ 
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(UBDAOST,TBDAOST,A68_VC )),(SHAAOSI_system, A_HVEC(UBDAOST,TBDAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
 /* line 276: */
VBDAOST_days = ((Seconds/86400)+1);
 /* line 277: */
WBDAOST_year = 1970;
 /* line 279: */
XBDAOST_leap = A68_FALSE;
 /* line 280: */
for ( ;; )
{ 
 /* line 281: */
if ( !((VBDAOST_days>366)) ) break;
 /* line 282: */
ZBDAOST = 4 ;
if ( XBDAOST_leap = (A_MOD(WBDAOST_year,ZBDAOST,YBDAOST)==0) )
{ 
 /* line 283: */
VBDAOST_days-=366;
} 
else
{ 
 /* line 284: */
VBDAOST_days-=365;
} 
 /* line 285: */
 /* line 286: */
WBDAOST_year+=1;
}
 /* line 287: */
ACDAOST = !XBDAOST_leap;
if ( ACDAOST )
{ACDAOST = (VBDAOST_days==366);
}
if ( ACDAOST )
{ 
WBDAOST_year+=1;
VBDAOST_days = 1;
} 
 /* line 288: */
CCDAOST = 4 ;
XBDAOST_leap = (A_MOD(WBDAOST_year,CCDAOST,BCDAOST)==0);
 /* line 289: */
DCDAOST_month = 1;
 /* line 290: */
 /* line 291: */
ECDAOST.data[0] = 31;
if ( XBDAOST_leap )
{ 
ECDAOST.data[1] = 29;
} 
else
{ 
ECDAOST.data[1] = 28;
} 
ECDAOST.data[2] = 31;
ECDAOST.data[3] = 30;
ECDAOST.data[4] = 31;
ECDAOST.data[5] = 30;
ECDAOST.data[6] = 31;
ECDAOST.data[7] = 31;
ECDAOST.data[8] = 30;
ECDAOST.data[9] = 31;
ECDAOST.data[10] = 30;
ECDAOST.data[11] = 31;
FCDAOST_mnths = ECDAOST;
 /* line 292: */
for ( ;; )
{ 
 /* line 293: */
HCDAOST = A_HISVEC(GCDAOST,FCDAOST_mnths,12,A68_INT ) ;
if ( !((VBDAOST_days>A_VINDEX(HCDAOST,DCDAOST_month))) ) break;
JCDAOST = A_HISVEC(ICDAOST,FCDAOST_mnths,12,A68_INT ) ;
VBDAOST_days-=A_VINDEX(JCDAOST,DCDAOST_month);
DCDAOST_month+=1;
}
 /* line 294: */
KCDAOST_dten = (VBDAOST_days/10);
 /* line 295: */
if ( (KCDAOST_dten==0) )
{ 
LCDAOST = ' ';
} 
else
{ 
LCDAOST = (A68_CHAR)(PSCAOST_zero+KCDAOST_dten);
} 
MCDAOST = 1 ;
NCDAOST = (&A_VINDEX(Ans,MCDAOST)) ;
(*NCDAOST) = LCDAOST;
 /* line 296: */
OCDAOST = 2 ;
QCDAOST = 10 ;
RCDAOST = (&A_VINDEX(Ans,OCDAOST)) ;
(*RCDAOST) = (A68_CHAR)(PSCAOST_zero+A_MOD(VBDAOST_days,QCDAOST,PCDAOST));
 /* line 297: */
SCDAOST = 3 ;
TCDAOST = 7 ;
UCDAOST = (&A_VINDEX(Ans,TCDAOST)) ;
VCDAOST = (&A_VINDEX(Ans,SCDAOST)) ;
(*VCDAOST) = (*UCDAOST) = ' ';
 /* line 298: */
XCDAOST = A_VTRIM(WCDAOST,(Ans),A_VTSCRIPT(&(WCDAOST.upb),(Ans).upb,4,6)) ;
YCDAOST = A_VINDEX(OBDAOST_months,DCDAOST_month) ;
A_VASSIGN2(YCDAOST,XCDAOST,A68_CHAR );
 /* line 299: */
 /* line 300: */
ADDAOST = (-1);
for ( ZCDAOST_i = 11;
( ADDAOST > 0 && ZCDAOST_i <= 8) ||
( ADDAOST < 0 && ZCDAOST_i >= 8) ||
( ADDAOST == 0 ) ;
ZCDAOST_i += ADDAOST )
{ 
CDDAOST = 10 ;
DDDAOST = (&A_VINDEX(Ans,ZCDAOST_i)) ;
(*DDDAOST) = (A68_CHAR)(PSCAOST_zero+A_MOD(WBDAOST_year,CDDAOST,BDDAOST));
 /* line 301: */
 /* line 302: */
WBDAOST_year/=10;
}
 /* line 303: */
} 
A_PROC_EXIT(date_proc);
return;
} 
#undef NL

A68_VOID  FDDAOST_date(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  HDDAOST_generator;   /* proc value of non-global proc */
A68_VC  MDDAOST;  /* avoid structure result */
A68_VC  NDDAOST_ans;
A68_VC  ODDAOST;  /* clause result */
A_PROC_ENTRY(date);
 /* line 306: */
{ 
A_CLOSURE( HDDAOST_generator, IDDAOST_generator, JDDAOST_generator );
A_CALLPROC(HDDAOST_generator,(A68_FALSE, &MDDAOST),(A68_FALSE, &MDDAOST,(HDDAOST_generator).nonlocals));
NDDAOST_ans = MDDAOST;
RBDAOST_date_proc(Seconds, NDDAOST_ans);
ODDAOST = NDDAOST_ans;
} 
A_PROC_EXIT(date);
*ReturnedValue = (ODDAOST);
return;
} 
#undef NL

A68_VOID  QDDAOST_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  SDDAOST_generator;   /* proc value of non-global proc */
A68_VC  XDDAOST;  /* avoid structure result */
A68_VC  YDDAOST_ans;
A68_INT  ZDDAOST;  /* YIELD */
A68_INT  AEDAOST;  /* YIELD */
A68_CHAR * BEDAOST;  /* YIELD */
A68_CHAR * CEDAOST;  /* YIELD */
A68_VC  DEDAOST;  /* OPERATORS - trim index */
A68_VC  EEDAOST;  /* OPERATORS - trim index */
A68_VC  FEDAOST;  /* clause result */
A_PROC_ENTRY(date_time);
 /* line 309: */
 /* line 310: */
{ 
A_CLOSURE( SDDAOST_generator, TDDAOST_generator, UDDAOST_generator );
A_CALLPROC(SDDAOST_generator,(A68_FALSE, &XDDAOST),(A68_FALSE, &XDDAOST,(SDDAOST_generator).nonlocals));
YDDAOST_ans = XDDAOST;
 /* line 311: */
ZDDAOST = 12 ;
AEDAOST = 13 ;
BEDAOST = (&A_VINDEX(YDDAOST_ans,AEDAOST)) ;
CEDAOST = (&A_VINDEX(YDDAOST_ans,ZDDAOST)) ;
(*CEDAOST) = (*BEDAOST) = ' ';
 /* line 312: */
RBDAOST_date_proc(Seconds, A_VTRIM(DEDAOST,(YDDAOST_ans),A_VTSCRIPT(&(DEDAOST.upb),(YDDAOST_ans).upb,1,11)));
 /* line 313: */
KZCAOST_time_proc(Seconds, A_VTRIM(EEDAOST,(YDDAOST_ans),A_VTSCRIPT(&(EEDAOST.upb),(YDDAOST_ans).upb,14,21)));
 /* line 314: */
 /* line 315: */
FEDAOST = YDDAOST_ans;
} 
A_PROC_EXIT(date_time);
*ReturnedValue = (FEDAOST);
return;
} 
#undef NL

A68_VOID  GEDAOST_time_str(A68_VC  *ReturnedValue)
{ 
A68_INT  HEDAOST_cpu;
A68_186  JEDAOST_fr;
A68_INT  KEDAOST_i;
A68_INT  LEDAOST;  /* by part of loop */
A68_VC  MEDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  NEDAOST;  /* OPERATORS - simple index */
A68_INT  OEDAOST;  /* ADICOPS - MOD */
A68_INT  PEDAOST;  /* ADICOPS - MOD */
A68_CHAR * QEDAOST;  /* YIELD */
A68_187  REDAOST_time;
A68_VC  SEDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  TEDAOST;  /* OPERATORS - trim index */
A68_VC  UEDAOST;  /* OPERATORS - trim index */
A68_VC  VEDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  WEDAOST;  /* OPERATORS - simple index */
A68_INT  XEDAOST;  /* YIELD */
A68_VC  YEDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ZEDAOST;  /* OPERATORS - simple index */
A68_INT  AFDAOST;  /* YIELD */
A68_CHAR * BFDAOST;  /* YIELD */
A68_CHAR * CFDAOST;  /* YIELD */
A68_188  DFDAOST;  /* collateral clause result */
A68_VC  EFDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  FFDAOST;  /* avoid structure result */
A68_VC  GFDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  HFDAOST;  /* clause result */
A68_46  IFDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JFDAOST;  /* avoid structure result */
A_PROC_ENTRY(time_str);
{ 
HEDAOST_cpu = PIBAOST_testmode_seconds(ZACAOSI_get_cpu_time());
 /* line 321: */
JEDAOST_fr = IEDAOST;
 /* line 322: */
 /* line 323: */
LEDAOST = (-1);
for ( KEDAOST_i = 3;
( LEDAOST > 0 && KEDAOST_i <= 2) ||
( LEDAOST < 0 && KEDAOST_i >= 2) ||
( LEDAOST == 0 ) ;
KEDAOST_i += LEDAOST )
{ 
NEDAOST = A_ISVEC(MEDAOST,(&JEDAOST_fr),5,A68_CHAR ) ;
PEDAOST = 10 ;
QEDAOST = (&A_VINDEX(NEDAOST,KEDAOST_i)) ;
(*QEDAOST) = (A68_CHAR)(PSCAOST_zero+A_MOD(HEDAOST_cpu,PEDAOST,OEDAOST));
 /* line 324: */
 /* line 325: */
HEDAOST_cpu/=10;
}
 /* line 326: */
 /* line 327: */
TEDAOST = A_ISVEC(SEDAOST,(&REDAOST_time),10,A68_CHAR ) ;
KZCAOST_time_proc(PIBAOST_testmode_seconds((A68_INT )WZBAOSI_get_time()), A_VTRIM(UEDAOST,(TEDAOST),A_VTSCRIPT(&(UEDAOST.upb),(TEDAOST).upb,1,8)));
 /* line 328: */
WEDAOST = A_ISVEC(VEDAOST,(&REDAOST_time),10,A68_CHAR ) ;
XEDAOST = 9 ;
ZEDAOST = A_ISVEC(YEDAOST,(&REDAOST_time),10,A68_CHAR ) ;
AFDAOST = 10 ;
BFDAOST = (&A_VINDEX(ZEDAOST,AFDAOST)) ;
CFDAOST = (&A_VINDEX(WEDAOST,XEDAOST)) ;
(*CFDAOST) = (*BFDAOST) = ' ';
 /* line 329: */
DFDAOST.data[0] = A_HISVEC(EFDAOST,REDAOST_time,10,A68_CHAR );
FCAAOSI_intchars( HEDAOST_cpu, &FFDAOST );
DFDAOST.data[1] = FFDAOST;
DFDAOST.data[2] = A_HISVEC(GFDAOST,JEDAOST_fr,5,A68_CHAR );
 /* line 330: */
JBAAOSI_concat( A_HISVEC(IFDAOST,DFDAOST,3,A68_VC ), &JFDAOST );
HFDAOST = JFDAOST;
} 
A_PROC_EXIT(time_str);
*ReturnedValue = (HFDAOST);
return;
} 
#undef NL
 /* line 343: */

A_STATIC A68_VOID  MFDAOST_extractchars(A68_VC * Input, A68_CHAR  Terminatingchar, A68_VC  *ReturnedValue)
{ 
A68_VC  QFDAOST;  /* avoid structure result */
A68_VC  OFDAOST_ans;
A68_BOOL  RFDAOST_found;
A68_INT  SFDAOST_i;
A68_BOOL  TFDAOST;  /* optbool result */
A68_VC  UFDAOST;  /* OPERATORS - trim index */
A68_VC  VFDAOST;  /* avoid structure result */
A68_BOOL  WFDAOST;  /* optbool result */
A68_VC  XFDAOST;  /* OPERATORS - trim index */
A68_VC  YFDAOST;  /* avoid structure result */
A68_VC  BGDAOST;  /* avoid structure result */
A68_VC  CGDAOST;  /* clause result */
A_PROC_ENTRY(extractchars);
 /* line 344: */
 /* line 346: */
{ 
ZAAAOSI_makervc( PFDAOST, &QFDAOST );
OFDAOST_ans = QFDAOST;
 /* line 349: */
 /* line 350: */
 /* line 353: */
if ( ((*Input).upb>0) )
{ 
RFDAOST_found = A68_FALSE;
 /* line 354: */
SFDAOST_i = 1;
 /* line 355: */
for ( ;; )
{ 
 /* line 356: */
 /* line 357: */
TFDAOST = (SFDAOST_i<=(*Input).upb);
if ( TFDAOST )
{TFDAOST = !RFDAOST_found;
}
 /* line 358: */
if ( !(TFDAOST) ) break;
 /* line 359: */
 /* line 360: */
if ( ((*(&A_VINDEX((*Input),SFDAOST_i)))==Terminatingchar) )
{ 
 /* line 361: */
 /* line 362: */
RFDAOST_found = A68_TRUE;
} 
else
{ 
 /* line 363: */
 /* line 364: */
SFDAOST_i+=1;
} 
}
 /* line 367: */
 /* line 368: */
 /* line 369: */
if ( (SFDAOST_i>1) )
{ 
 /* line 370: */
ZAAAOSI_makervc( A_VTRIM(UFDAOST,((*Input)),A_VTSCRIPT(&(UFDAOST.upb),((*Input)).upb,1,(SFDAOST_i-1))), &VFDAOST );
OFDAOST_ans = VFDAOST;
} 
 /* line 373: */
for ( ;; )
{ 
 /* line 374: */
WFDAOST = (SFDAOST_i<=(*Input).upb);
if ( WFDAOST )
{ /* line 375: */
WFDAOST = ((*(&A_VINDEX((*Input),SFDAOST_i)))==Terminatingchar);
}
 /* line 376: */
if ( !(WFDAOST) ) break;
 /* line 377: */
SFDAOST_i+=1;
}
 /* line 381: */
 /* line 382: */
 /* line 383: */
if ( (SFDAOST_i<=(*Input).upb) )
{ 
 /* line 384: */
 /* line 385: */
ZAAAOSI_makervc( A_VTRIM(XFDAOST,((*Input)),A_VTSCRIPT(&(XFDAOST.upb),((*Input)).upb,SFDAOST_i,((*Input)).upb)), &YFDAOST );
(*Input) = YFDAOST;
} 
else
{ 
 /* line 386: */
 /* line 387: */
ZAAAOSI_makervc( AGDAOST, &BGDAOST );
(*Input) = BGDAOST;
} 
} 
 /* line 389: */
 /* line 391: */
CGDAOST = OFDAOST_ans;
} 
A_PROC_EXIT(extractchars);
*ReturnedValue = (CGDAOST);
return;
} 
#undef NL
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 409: */

A_STATIC A68_BOOL  KGDAOST_parsedateandtimestring(A68_VC  Input, A68_INT * Year, A68_INT * Month, A68_INT * Day, A68_INT * Hour, A68_INT * Min, A68_INT * Sec)
{ 
A68_BOOL  OGDAOST_success;
A68_31  QGDAOST_generator;   /* proc value of non-global proc */
A68_VC  WGDAOST;  /* avoid structure result */
A68_VC  VGDAOST_dateandtimestring;
A68_BOOL  XGDAOST_error;
A68_VC  YGDAOST;  /* avoid structure result */
A68_BOOL  ZGDAOST;  /* optbool result */
A68_BOOL  AHDAOST;  /* clause result */
A68_VC  CHDAOST;  /* avoid structure result */
A68_VC  BHDAOST_monthchars;
A68_BOOL  DHDAOST_found;
A68_INT  EHDAOST_i;
A68_INT  FHDAOST;  /* to part of loop */
A68_BOOL  GHDAOST_error;
A68_VC  HHDAOST;  /* avoid structure result */
A68_BOOL  IHDAOST;  /* clause result */
A68_BOOL  JHDAOST_error;
A68_VC  KHDAOST;  /* avoid structure result */
A68_BOOL  LHDAOST;  /* optbool result */
A68_BOOL  MHDAOST;  /* clause result */
A68_BOOL  NHDAOST_error;
A68_VC  OHDAOST;  /* avoid structure result */
A68_BOOL  PHDAOST;  /* optbool result */
A68_BOOL  QHDAOST;  /* clause result */
A68_BOOL  RHDAOST_error;
A68_VC  SHDAOST;  /* avoid structure result */
A68_BOOL  THDAOST;  /* optbool result */
A68_BOOL  UHDAOST;  /* clause result */
A68_BOOL  VHDAOST;  /* clause result */
A_PROC_ENTRY(parsedateandtimestring);
 /* line 410: */
 /* line 412: */
{ 
 /* line 413: */
 /* line 414: */
 /* line 416: */
OGDAOST_success = A68_FALSE;
 /* line 418: */
A_CLOSURE( QGDAOST_generator, RGDAOST_generator, SGDAOST_generator );
(( SGDAOST_generator * ) ( QGDAOST_generator.nonlocals )) -> Input = Input;
A_CALLPROC(QGDAOST_generator,(A68_TRUE, &WGDAOST),(A68_TRUE, &WGDAOST,(QGDAOST_generator).nonlocals));
A_VASSIGN2(Input,WGDAOST,A68_CHAR ) ;
VGDAOST_dateandtimestring = WGDAOST;
 /* line 422: */
{ 
XGDAOST_error = A68_FALSE;
 /* line 423: */
 /* line 424: */
MFDAOST_extractchars( (&VGDAOST_dateandtimestring), LGDAOST_dateseparator, &YGDAOST );
(*Day) = XVCAOST_charstoint(YGDAOST, (&XGDAOST_error));
 /* line 425: */
 /* line 426: */
ZGDAOST = !XGDAOST_error;
if ( ZGDAOST )
{ZGDAOST = ((*Day)>0);
}
if ( ZGDAOST )
{ /* line 427: */
ZGDAOST = ((*Day)<32);
}
 /* line 430: */
AHDAOST = ZGDAOST;
if ( AHDAOST )
{ 
MFDAOST_extractchars( (&VGDAOST_dateandtimestring), LGDAOST_dateseparator, &CHDAOST );
BHDAOST_monthchars = CHDAOST;
 /* line 431: */
 /* line 432: */
 /* line 435: */
if ( (BHDAOST_monthchars.upb==3) )
{ 
DHDAOST_found = A68_FALSE;
 /* line 436: */
 /* line 437: */
FHDAOST = OBDAOST_months.upb;
for ( EHDAOST_i = 1;
EHDAOST_i <= FHDAOST;
EHDAOST_i += 1 )
{ 
 /* line 438: */
 /* line 439: */
if ( !(!DHDAOST_found) ) break;
 /* line 440: */
 /* line 441: */
if ( A_VC_EQ(BHDAOST_monthchars,A_VINDEX(OBDAOST_months,EHDAOST_i)) )
{ 
(*Month) = EHDAOST_i;
 /* line 442: */
 /* line 443: */
 /* line 444: */
DHDAOST_found = A68_TRUE;
} 
}
 /* line 445: */
 /* line 446: */
 /* line 448: */
if ( DHDAOST_found )
{ 
{ 
GHDAOST_error = A68_FALSE;
 /* line 449: */
 /* line 450: */
MFDAOST_extractchars( (&VGDAOST_dateandtimestring), NGDAOST_spacechar, &HHDAOST );
(*Year) = XVCAOST_charstoint(HHDAOST, (&GHDAOST_error));
 /* line 451: */
 /* line 452: */
 /* line 454: */
IHDAOST = !GHDAOST_error;
if ( IHDAOST )
{ 
{ 
JHDAOST_error = A68_FALSE;
 /* line 455: */
 /* line 456: */
MFDAOST_extractchars( (&VGDAOST_dateandtimestring), MGDAOST_timeseparator, &KHDAOST );
(*Hour) = XVCAOST_charstoint(KHDAOST, (&JHDAOST_error));
 /* line 457: */
LHDAOST = !JHDAOST_error;
if ( LHDAOST )
{ /* line 458: */
LHDAOST = ((*Hour)<24);
}
 /* line 460: */
MHDAOST = LHDAOST;
if ( MHDAOST )
{ 
{ 
NHDAOST_error = A68_FALSE;
 /* line 461: */
 /* line 462: */
MFDAOST_extractchars( (&VGDAOST_dateandtimestring), MGDAOST_timeseparator, &OHDAOST );
(*Min) = XVCAOST_charstoint(OHDAOST, (&NHDAOST_error));
 /* line 463: */
PHDAOST = !NHDAOST_error;
if ( PHDAOST )
{ /* line 464: */
PHDAOST = ((*Min)<60);
}
 /* line 466: */
QHDAOST = PHDAOST;
if ( QHDAOST )
{ 
{ 
RHDAOST_error = A68_FALSE;
 /* line 467: */
 /* line 468: */
MFDAOST_extractchars( (&VGDAOST_dateandtimestring), NGDAOST_spacechar, &SHDAOST );
(*Sec) = XVCAOST_charstoint(SHDAOST, (&RHDAOST_error));
 /* line 469: */
THDAOST = !RHDAOST_error;
if ( THDAOST )
{ /* line 470: */
THDAOST = ((*Sec)<60);
}
 /* line 472: */
UHDAOST = THDAOST;
if ( UHDAOST )
{ 
 /* line 473: */
 /* line 478: */
 /* line 479: */
OGDAOST_success = A68_TRUE;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
 /* line 481: */
 /* line 483: */
VHDAOST = OGDAOST_success;
} 
A_PROC_EXIT(parsedateandtimestring);
return( VHDAOST );
} 
#undef NL
 /* line 490: */
 /* line 492: */

A68_BOOL  ZHDAOST_datetimetoeut(A68_VC  String, A68_INT * Seconds, A68_97  Msg)
{ 
A68_INT  FIDAOST_year;
A68_INT  GIDAOST_month;
A68_INT  HIDAOST_day;
A68_INT  IIDAOST_hour;
A68_INT  JIDAOST_min;
A68_INT  KIDAOST_sec;
A68_143  LIDAOST_casefault;   /* proc value of non-global proc */
A68_BOOL  RIDAOST;  /* clause result */
A68_INT  SIDAOST_time;
A68_INT  TIDAOST;  /* ADICOPS - MOD */
A68_INT  UIDAOST;  /* ADICOPS - MOD */
A68_INT  VIDAOST;  /* ADICOPS - MOD */
A68_INT  WIDAOST;  /* clause result */
A68_BOOL  XIDAOST;  /* clause result */
A_PROC_ENTRY(datetimetoeut);
 /* line 493: */
 /* line 494: */
{ 
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 500: */
 /* line 502: */
 /* line 503: */
A_CLOSURE( LIDAOST_casefault, MIDAOST_casefault, NIDAOST_casefault );
(( NIDAOST_casefault * ) ( LIDAOST_casefault.nonlocals )) -> Msg = Msg;
 /* line 507: */
 /* line 508: */
 /* line 510: */
if ( KGDAOST_parsedateandtimestring(String, (&FIDAOST_year), (&GIDAOST_month), (&HIDAOST_day), (&IIDAOST_hour), (&JIDAOST_min), (&KIDAOST_sec)) )
{ 
FIDAOST_year-=EIDAOST_lastnoneutyear;
 /* line 511: */
 /* line 514: */
RIDAOST = (FIDAOST_year>0);
if ( RIDAOST )
{ 
 /* line 477: */
 /* line 515: */
 /* line 476: */
SIDAOST_time = (((FIDAOST_year-1)*DIDAOST_daysinnonleapyear)+((FIDAOST_year+1)/4));
 /* line 519: */
 /* line 520: */
 /* line 475: */
 /* line 474: */
 /* line 521: */
 /* line 522: */
UIDAOST = (FIDAOST_year+2) ;
VIDAOST = 4 ;
if ( (A_MOD(UIDAOST,VIDAOST,TIDAOST)==0) )
{ 
 /* line 523: */
switch ( GIDAOST_month )
{ 
case 1: 
WIDAOST = 0;
break;
case 2: 
WIDAOST = 31;
break;
case 3: 
WIDAOST = 60;
break;
case 4: 
WIDAOST = 91;
break;
case 5: 
WIDAOST = 121;
break;
case 6: 
WIDAOST = 152;
break;
case 7: 
WIDAOST = 182;
break;
case 8: 
WIDAOST = 213;
break;
case 9: 
WIDAOST = 244;
break;
case 10: 
WIDAOST = 274;
break;
case 11: 
 /* line 524: */
WIDAOST = 305;
break;
case 12: 
WIDAOST = 335;
break;
default: 
A_CALLPROC(LIDAOST_casefault,(),((LIDAOST_casefault).nonlocals));
 /* line 525: */
 /* line 526: */
 /* line 527: */
WIDAOST = 0;
break;
} 
} 
else
{ 
 /* line 528: */
switch ( GIDAOST_month )
{ 
case 1: 
WIDAOST = 0;
break;
case 2: 
WIDAOST = 31;
break;
case 3: 
WIDAOST = 59;
break;
case 4: 
WIDAOST = 90;
break;
case 5: 
WIDAOST = 120;
break;
case 6: 
WIDAOST = 151;
break;
case 7: 
WIDAOST = 181;
break;
case 8: 
WIDAOST = 212;
break;
case 9: 
WIDAOST = 243;
break;
case 10: 
WIDAOST = 273;
break;
case 11: 
 /* line 529: */
WIDAOST = 304;
break;
case 12: 
WIDAOST = 334;
break;
default: 
A_CALLPROC(LIDAOST_casefault,(),((LIDAOST_casefault).nonlocals));
 /* line 530: */
 /* line 531: */
WIDAOST = 0;
break;
} 
} 
SIDAOST_time = ((((SIDAOST_time+WIDAOST)+HIDAOST_day)-1)*CIDAOST_hoursinday);
 /* line 534: */
SIDAOST_time = ((SIDAOST_time+IIDAOST_hour)*BIDAOST_minutesinhour);
 /* line 537: */
SIDAOST_time = ((SIDAOST_time+JIDAOST_min)*AIDAOST_secondsinminute);
 /* line 540: */
(*Seconds) = (SIDAOST_time+KIDAOST_sec);
 /* line 541: */
 /* line 542: */
 /* line 544: */
XIDAOST = A68_TRUE;
} 
else
{ 
 /* line 545: */
 /* line 546: */
 /* line 548: */
XIDAOST = A68_FALSE;
} 
} 
else
{ 
 /* line 549: */
 /* line 551: */
XIDAOST = A68_FALSE;
} 
} 
A_PROC_EXIT(datetimetoeut);
return( XIDAOST );
} 
#undef NL

A68_INT  NJDAOST_addwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  OJDAOST;  /* optbool result */
A68_BOOL  PJDAOST;  /* optbool result */
A68_INT  QJDAOST;  /* clause result */
A_PROC_ENTRY(addwithoverflowcheck);
 /* line 571: */
OJDAOST = (A>0);
if ( OJDAOST )
{OJDAOST = (A>(AJDAOST_maxint-B));
}
 /* line 572: */
if ( ! OJDAOST )
{PJDAOST = (A<0);
if ( PJDAOST )
{PJDAOST = (A<((-(AJDAOST_maxint+B))-1));
}
 /* line 573: */
OJDAOST = PJDAOST;
}
 /* line 574: */
if ( OJDAOST )
{ 
(*Overflowed) = A68_TRUE;
 /* line 575: */
 /* line 576: */
 /* line 577: */
QJDAOST = AJDAOST_maxint;
} 
else
{ 
 /* line 578: */
QJDAOST = (A+B);
} 
A_PROC_EXIT(addwithoverflowcheck);
return( QJDAOST );
} 
#undef NL

A68_INT  UJDAOST_subtractwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  VJDAOST;  /* optbool result */
A68_BOOL  WJDAOST;  /* optbool result */
A68_INT  XJDAOST;  /* clause result */
A_PROC_ENTRY(subtractwithoverflowcheck);
 /* line 582: */
VJDAOST = (A>0);
if ( VJDAOST )
{VJDAOST = (A>(AJDAOST_maxint+B));
}
 /* line 583: */
if ( ! VJDAOST )
{WJDAOST = (A<0);
if ( WJDAOST )
{WJDAOST = (A<((B-AJDAOST_maxint)-1));
}
 /* line 584: */
VJDAOST = WJDAOST;
}
 /* line 585: */
if ( VJDAOST )
{ 
(*Overflowed) = A68_TRUE;
 /* line 586: */
 /* line 587: */
 /* line 588: */
XJDAOST = AJDAOST_maxint;
} 
else
{ 
 /* line 589: */
XJDAOST = (A-B);
} 
A_PROC_EXIT(subtractwithoverflowcheck);
return( XJDAOST );
} 
#undef NL

A68_INT  BKDAOST_multiplywithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  CKDAOST;  /* optbool result */
A68_BOOL  DKDAOST;  /* optbool result */
A68_BOOL  EKDAOST;  /* clause result */
A68_BOOL  FKDAOST;  /* optbool result */
A68_BOOL  GKDAOST;  /* optbool result */
A68_BOOL  HKDAOST;  /* optbool result */
A68_BOOL  IKDAOST;  /* optbool result */
A68_BOOL  JKDAOST;  /* optbool result */
A68_BOOL  KKDAOST;  /* optbool result */
A68_INT  LKDAOST;  /* clause result */
A_PROC_ENTRY(multiplywithoverflowcheck);
 /* line 592: */
 /* line 593: */
CKDAOST = (A<0);
if ( CKDAOST )
{CKDAOST = (B<0);
}
if ( CKDAOST )
{ 
DKDAOST = (A<(AJDAOST_maxint/B));
if ( ! DKDAOST )
{ /* line 594: */
DKDAOST = (B<(AJDAOST_maxint/A));
}
EKDAOST = DKDAOST;
} 
else
{ 
FKDAOST = (A<0);
if ( FKDAOST )
{FKDAOST = (B>0);
}
if ( FKDAOST )
{ 
GKDAOST = (A<(((-AJDAOST_maxint)-1)/B));
if ( ! GKDAOST )
{ /* line 595: */
GKDAOST = (B>(((-AJDAOST_maxint)-1)/A));
}
EKDAOST = GKDAOST;
} 
else
{ 
HKDAOST = (A>0);
if ( HKDAOST )
{HKDAOST = (B<0);
}
if ( HKDAOST )
{ 
IKDAOST = (A>(((-AJDAOST_maxint)-1)/B));
if ( ! IKDAOST )
{ /* line 596: */
IKDAOST = (B<(((-AJDAOST_maxint)-1)/A));
}
EKDAOST = IKDAOST;
} 
else
{ 
JKDAOST = (A>0);
if ( JKDAOST )
{JKDAOST = (B>0);
}
if ( JKDAOST )
{ 
KKDAOST = (A>(AJDAOST_maxint/B));
if ( ! KKDAOST )
{ /* line 597: */
KKDAOST = (B>(AJDAOST_maxint/A));
}
EKDAOST = KKDAOST;
} 
else
{ 
 /* line 598: */
 /* line 599: */
 /* line 600: */
EKDAOST = A68_FALSE;
} 
} 
} 
} 
if ( EKDAOST )
{ 
(*Overflowed) = A68_TRUE;
 /* line 601: */
 /* line 602: */
 /* line 603: */
LKDAOST = AJDAOST_maxint;
} 
else
{ 
 /* line 604: */
LKDAOST = (A*B);
} 
A_PROC_EXIT(multiplywithoverflowcheck);
return( LKDAOST );
} 
#undef NL

A68_VOID  NKDAOST_sysfault(A68_VC  Message)
{ 
A68_46  OKDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(OKDAOST,Message,A68_VC )),(SHAAOSI_system, A_HVEC(OKDAOST,Message,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A68_VOID  QKDAOST_abort(A68_VC  Message)
{ 
A68_46  RKDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(abort);
A_CALLPROC(ZLBAOSI_global_msg,(UHAAOSI_fatal, A_HVEC(RKDAOST,Message,A68_VC )),(UHAAOSI_fatal, A_HVEC(RKDAOST,Message,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
A_PROC_EXIT(abort);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void JSCAOST(void)   /* initialise DECS basics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/basics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/testmode.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  MTCAOST;  /* OPERATORS - nil -> mode */
A68_VC  STCAOST;  /* avoid structure result */
A68_BITS  RVCAOST;  /* SHL */
A68_182  OADAOST;  /* collateral clause result */
A68_46  NBDAOST;  /* OPERATORS - istruct -> vector */
A68_BITS  YIDAOST;  /* SHR */
A68_INT  ZIDAOST;  /* SHR */
A68_INT  DJDAOST;  /* SHR */
A68_INT  EJDAOST;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/basics.a68";
A_config.translation_time = "Tue Apr  4 09:49:36 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ISCAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:36 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS basics);
UEAALIB_a68config(LGAALIB_configinfo, NSCAOST);
 /* line 97: */
 /* line 98: */
PSCAOST_zero = (A68_INT)(unsigned char)'0';
 /* line 100: */
 /* line 101: */
 /* line 103: */
 /* line 104: */
 /* line 106: */
NTCAOST_nilid = (A_VVAC(MTCAOST));
 /* line 107: */
PTCAOST_generator( A68_FALSE, &STCAOST );
TTCAOST_nullid = STCAOST;
 /* line 109: */
 /* line 111: */
 /* line 120: */
 /* line 124: */
 /* line 131: */
 /* line 135: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
RVCAOST = 01U ;
SVCAOST_maxchar = (A68_INT )A_SHL(RVCAOST,PVCAOST_bitsperchar);
 /* line 155: */
TVCAOST_maxintinchar = ((SVCAOST_maxchar-QVCAOST_charsperint)-1);
 /* line 156: */
UVCAOST_intmask = (SVCAOST_maxchar-1);
 /* line 158: */
 /* line 190: */
 /* line 206: */
 /* line 222: */
 /* line 233: */
 /* line 250: */
 /* line 252: */
 /* line 254: */
 /* line 267: */
 /* line 270: */
OADAOST.data[0] = QADAOST;
OADAOST.data[1] = SADAOST;
OADAOST.data[2] = UADAOST;
OADAOST.data[3] = WADAOST;
OADAOST.data[4] = YADAOST;
 /* line 271: */
OADAOST.data[5] = ABDAOST;
OADAOST.data[6] = CBDAOST;
OADAOST.data[7] = EBDAOST;
OADAOST.data[8] = GBDAOST;
OADAOST.data[9] = IBDAOST;
OADAOST.data[10] = KBDAOST;
OADAOST.data[11] = MBDAOST;
OBDAOST_months = A_HISVEC(NBDAOST,OADAOST,12,A68_VC );
 /* line 273: */
 /* line 305: */
 /* line 308: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 340: */
 /* line 341: */
 /* line 401: */
 /* line 402: */
 /* line 488: */
 /* line 489: */
 /* line 556: */
YIDAOST = (A68_BITS )(-1) ;
ZIDAOST = 1 ;
AJDAOST_maxint = (A68_INT )A_SHR(YIDAOST,ZIDAOST);
 /* line 558: */
 /* line 559: */
{ 
BJDAOST_w = 0;
 /* line 560: */
CJDAOST_b = (A68_BITS )(-1);
 /* line 561: */
for ( ;; )
{ 
if ( !((CJDAOST_b!=0X0U)) ) break;
DJDAOST = 1 ;
CJDAOST_b = A_SHR(CJDAOST_b,DJDAOST);
BJDAOST_w+=1;
}
 /* line 562: */
 /* line 563: */
EJDAOST = BJDAOST_w;
} 
FJDAOST_bitswidth = EJDAOST;
 /* line 564: */
GJDAOST_byteswidth = (FJDAOST_bitswidth/PVCAOST_bitsperchar);
 /* line 565: */
HJDAOST_largeint = (AJDAOST_maxint/16);
 /* line 567: */
IJDAOST_minint = ((-AJDAOST_maxint)-1);
JJDAOST_largeminint = (IJDAOST_minint/16);
 /* line 569: */
 /* line 580: */
 /* line 591: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
 /* line 614: */
UKDAOST_library_type = TKDAOST;
 /* line 615: */
XKDAOST_simfile_type = WKDAOST;
 /* line 616: */
ALDAOST_history_type = ZKDAOST;
 /* line 617: */
DLDAOST_source_type = CLDAOST;
 /* line 618: */
GLDAOST_savefile_type = FLDAOST;
 /* line 619: */
JLDAOST_ellanet_type = ILDAOST;
 /* line 620: */
MLDAOST_logfile_type = LLDAOST;
 /* line 621: */
PLDAOST_infile_type = OLDAOST;
 /* line 622: */
SLDAOST_outfile_type = RLDAOST;
 /* line 623: */
VLDAOST_codedump_type = ULDAOST;
 /* line 624: */
YLDAOST_assfile_type = XLDAOST;
 /* line 625: */
BMDAOST_download_type = AMDAOST;
 /* line 626: */
EMDAOST_ellasysdir_var = DMDAOST;
 /* line 629: */
 /* line 630: */
 /* line 658: */
/*SKIP*/;
A_PROC_EXIT(DECS basics);
} 
#undef NL
/* end of translation of ./a68files/basics.a68 */
