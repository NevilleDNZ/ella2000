
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
/* UNAME:MWIAELA */
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

A_PROCEDURE(A68_VOID ,A68t111,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t112,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE92) BOOL */
struct A68t113{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 4 CHAR */
struct A68t115{
struct A68t116  Access;
A_PAD_ISTRUCT(A68_116 ,PAD_24)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE116)  */

A_PROCEDURE(struct A68t113 *,A68t117,(A68_VC ,struct A68t115 ,struct A68t97 ),(A68_VC ,struct A68t115 ,struct A68t97 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26,MODE115,MODE97) REF MODE113 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t113 *,struct A68t97 ),(struct A68t113 *,struct A68t97 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE113,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t113 *,A68_VC *),(struct A68t113 *,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE113) MODE26 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t113 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t113 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE113,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t113 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t113 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE113,MODE26,MODE97) MODE35 */
struct A68t122{
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
typedef struct A68t122  A68_122 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t124 ;

A_PROCEDURE(struct A68t122 *,A68t123,(struct A68t124 ,struct A68t97 ),(struct A68t124 ,struct A68t97 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE124,MODE97) REF MODE122 */
struct A68t124 { A68_INT mode; union {
struct A68t113 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t124  A68_124 ;    /* UNION(REF MODE113,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t113 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t113 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE113,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t113 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t113 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE113,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t113 *,struct A68t97 ,struct A68t35 *),(struct A68t113 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE113,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t131,(void),(void *));
typedef struct A68t131  A68_131 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t132,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t133,(void),(void *));
typedef struct A68t133  A68_133 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t136{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t136 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t136 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE26,MODE97) MODE136 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC *),(A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t141,(void),(void *));
typedef struct A68t141  A68_141 ;    /* PROC BOOL */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t143 ,struct A68t97 ),(struct A68t143 ,struct A68t97 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE143,MODE97) VOID */
A_VECTOR(struct A68t144 ,A68t143);
typedef struct A68t143  A68_143 ;    /* VECTOR [] MODE144 */
struct A68t144{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t145,(void),(void *));
typedef struct A68t145  A68_145 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t149,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REAL) REAL */
struct A68t150{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t151,(A68_BOOL ,struct A68t150 *),(A68_BOOL ,struct A68t150 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(BOOL) MODE150 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t150 ,A68_BOOL ),(struct A68t150 ,A68_BOOL ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE150,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t150 *),(struct A68t150 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC MODE150 */

A_PROCEDURE(A68_BOOL ,A68t154,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t156 ;
struct A68t157 ;

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,struct A68t145 ,struct A68t156 ,struct A68t157 ),(A68_VC ,struct A68t145 ,struct A68t156 ,struct A68t157 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE145,MODE156,MODE157) VOID */

A_PROCEDURE(A68_BOOL ,A68t156,(A68_VC ,struct A68t138 ),(A68_VC ,struct A68t138 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26,MODE138) BOOL */

A_PROCEDURE(A68_BOOL ,A68t157,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t158 ,struct A68t97 ),(struct A68t158 ,struct A68t97 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE158,MODE97) VOID */
struct A68t160{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t162 ;

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE162) VOID */
struct A68t162 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t162  A68_162 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t163,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t164,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(BITS,BITS) BITS */
struct A68t166 ;

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t166 ,A68_INT ),(struct A68t166 ,A68_INT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t166,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(CHAR) VOID */
struct A68t168 ;

A_PROCEDURE(A68_INT ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) INT */

A_PROCEDURE(A68_CHAR ,A68t168,(void),(void *));
typedef struct A68t168  A68_168 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t169,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t170,(A68_INT ),(A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t171,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC *),(A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t173,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t174,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t175{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t176 * Df;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE176)  */
A_VECTOR(struct A68t177 ,A68t178);
typedef struct A68t178  A68_178 ;    /* VECTOR [] MODE177 */
struct A68t177{
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
typedef struct A68t177  A68_177 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t183 ,A68t182);
typedef struct A68t182  A68_182 ;    /* VECTOR [] MODE183 */
struct A68t184{
A68_INT  Block_num;
A_PAD_INT(PAD_43)
A68_INT  Offset;
A_PAD_INT(PAD_44)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT)  */
struct A68t183{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_45)
struct A68t184  Address;
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
typedef struct A68t183  A68_183 ;    /* STRUCT(BOOL,MODE184,INT,INT,INT,INT,INT)  */
struct A68t176{
struct A68t177 * Root;
struct A68t177 * Indirs_dp;
struct A68t177 * Freelist_dp;
struct A68t177 * Pagetable_dp;
struct A68t177 * Append_dp;
struct A68t178  Free_block_dps;
struct A68t178  Pagetable_dps;
struct A68t113 ** File;
struct A68t113 ** Test_file;
struct A68t179 * Write_buffer;
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
struct A68t180 * Gc_ptrs;
struct A68t181 * Instore_vars;
struct A68t182  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE177,REF MODE177,REF MODE177,REF MODE177,REF MODE177,REF MODE178,REF MODE178,REF REF MODE113,REF REF MODE113,REF MODE179,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE180,REF MODE181,REF MODE182,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t179{
A68_VC  Buffer;
struct A68t185 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,REF MODE185,REF INT,REF INT,REF INT)  */
struct A68t180{
struct A68t184  Old;
struct A68t184  New;
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE184,MODE184,REF MODE180)  */
struct A68t181{
A68_INT  Indirection;
A_PAD_INT(PAD_51)
struct A68t181 * Rest;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE181)  */
struct A68t185{
A68_INT  Lwb;
A_PAD_INT(PAD_52)
A68_INT  Upb;
A_PAD_INT(PAD_53)
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,REF MODE185)  */

A_PROCEDURE(A68_INT ,A68t186,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE175) INT */

A_PROCEDURE(A68_BOOL ,A68t187,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE175) BOOL */

A_PROCEDURE(A68_INT ,A68t188,(struct A68t175 *,struct A68t177 ),(struct A68t175 *,struct A68t177 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE175,MODE177) INT */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t175 *,A68_VC ,struct A68t178 ,struct A68t177 ),(struct A68t175 *,A68_VC ,struct A68t178 ,struct A68t177 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE175,REF MODE26,REF MODE178,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t175 *,struct A68t32 ,struct A68t177 ),(struct A68t175 *,struct A68t32 ,struct A68t177 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE175,REF MODE32,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t175 *,A68_VC ,struct A68t177 ),(struct A68t175 *,A68_VC ,struct A68t177 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE175,REF MODE26,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t175 *,struct A68t178 ,struct A68t177 ),(struct A68t175 *,struct A68t178 ,struct A68t177 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE175,REF MODE178,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t175 *,struct A68t176 *,struct A68t32 ,struct A68t177 ),(struct A68t175 *,struct A68t176 *,struct A68t32 ,struct A68t177 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE175,REF MODE176,REF MODE32,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t175 *,A68_VC ,struct A68t178 ,A68_BOOL ,struct A68t177 *),(struct A68t175 *,A68_VC ,struct A68t178 ,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE175,MODE26,MODE178,BOOL) MODE177 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t175 *,struct A68t32 ,A68_BOOL ,struct A68t177 *),(struct A68t175 *,struct A68t32 ,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE175,MODE32,BOOL) MODE177 */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t175 *,A68_VC ,A68_BOOL ,struct A68t177 *),(struct A68t175 *,A68_VC ,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE175,MODE26,BOOL) MODE177 */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t175 *,struct A68t178 ,A68_BOOL ,struct A68t177 *),(struct A68t175 *,struct A68t178 ,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE175,MODE178,BOOL) MODE177 */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t175 *,A68_VC ,struct A68t177 ,struct A68t177 *),(struct A68t175 *,A68_VC ,struct A68t177 ,struct A68t177 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE175,MODE26,MODE177) MODE177 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t175 *,A68_VC ,struct A68t178 ,struct A68t177 ,struct A68t177 *),(struct A68t175 *,A68_VC ,struct A68t178 ,struct A68t177 ,struct A68t177 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE175,MODE26,MODE178,MODE177) MODE177 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE175) VOID */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t175 *,A68_INT ,A68_BOOL ,struct A68t177 *),(struct A68t175 *,A68_INT ,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE175,INT,BOOL) MODE177 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t175 *,A68_INT ,A68_VC ,struct A68t177 ),(struct A68t175 *,A68_INT ,A68_VC ,struct A68t177 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE175,INT,MODE26,MODE177) VOID */

A_PROCEDURE(A68_BOOL ,A68t203,(struct A68t175 *,A68_INT ),(struct A68t175 *,A68_INT ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE175,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t175 *,A68_INT ,A68_VC ,struct A68t177 ),(struct A68t175 *,A68_INT ,A68_VC ,struct A68t177 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE175,INT,REF MODE26,MODE177) VOID */

A_PROCEDURE(A68_BOOL ,A68t205,(struct A68t175 *,struct A68t177 ,struct A68t177 ),(struct A68t175 *,struct A68t177 ,struct A68t177 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE175,MODE177,MODE177) BOOL */

A_PROCEDURE(struct A68t113 *,A68t206,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE26,INT,MODE97) REF MODE113 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t175 *,struct A68t177 ),(struct A68t175 *,struct A68t177 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE175,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t175 *,struct A68t177 ,struct A68t97 ),(struct A68t175 *,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE175,MODE177,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t175 *,struct A68t97 ),(struct A68t175 *,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE175,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t113 *,A68_BOOL ,struct A68t175 *),(struct A68t113 *,A68_BOOL ,struct A68t175 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE113,BOOL) MODE175 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t175 *,struct A68t177 ,struct A68t177 *),(struct A68t175 *,struct A68t177 ,struct A68t177 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE175,MODE177) MODE177 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t175 *,A68_INT ,struct A68t97 ),(struct A68t175 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE175,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t175 *,struct A68t177 ,struct A68t177 ),(struct A68t175 *,struct A68t177 ,struct A68t177 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE175,MODE177,MODE177) VOID */

A_PROCEDURE(A68_BOOL ,A68t214,(struct A68t175 *,A68_VC ,struct A68t178 ),(struct A68t175 *,A68_VC ,struct A68t178 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE175,MODE26,MODE178) BOOL */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t175 *,struct A68t32 ),(struct A68t175 *,struct A68t32 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE175,MODE32) BOOL */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t175 *,struct A68t177 *),(struct A68t175 *,struct A68t177 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE175) MODE177 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t113 *,struct A68t113 *,struct A68t97 ),(struct A68t113 *,struct A68t113 *,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE113,REF MODE113,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t218,(struct A68t177 ),(struct A68t177 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE177) BOOL */

A_PROCEDURE(struct A68t113 *,A68t219,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE175) REF MODE113 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE145) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 62 CHAR */

A_PROCEDURE(A68_VOID ,A68t223,(A68_BOOL ,struct A68t178 *),(A68_BOOL ,struct A68t178 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(BOOL) MODE178 */
struct A68t224{
A68_VC  Rvc;
struct A68t224 * Rest;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(REF MODE26,REF MODE224)  */
struct A68t225{
struct A68t175 * Database;
A68_VC  Description;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE175,REF MODE26)  */
struct A68t226{
struct A68t225  Df;
struct A68t224  Head;
struct A68t224 * Current;
A68_INT  Index;
A_PAD_INT(PAD_54)
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_56)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE225,MODE224,REF MODE224,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t227,(struct A68t225 *,struct A68t177 ),(struct A68t225 *,struct A68t177 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE225,MODE177) BOOL */

A_PROCEDURE(struct A68t226 *,A68t228,(struct A68t225 *,struct A68t87 ,A68_INT ),(struct A68t225 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE225,MODE87,INT) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE226) VOID */

A_PROCEDURE(struct A68t226 *,A68t230,(struct A68t225 *,struct A68t177 ),(struct A68t225 *,struct A68t177 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE225,MODE177) REF MODE226 */
A_ISTRUCT(A68_CHAR ,30,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_INT ,A68t232,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE226) INT */
A_ISTRUCT(A68_CHAR ,13,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_CHAR ,A68t234,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE226) CHAR */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t226 *,A68_VC ),(struct A68t226 *,A68_VC ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE226,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 32 CHAR */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t226 *,A68_VC *),(struct A68t226 *,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE226) REF MODE26 */
A_ISTRUCT(A68_CHAR ,20,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_BOOL ,A68t239,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE226) BOOL */
A_ISTRUCT(A68_CHAR ,18,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t225 *,struct A68t97 ),(struct A68t225 *,struct A68t97 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE225,MODE97) VOID */
A_ISTRUCT(A68_VC ,2,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t225 *,A68_VC ,struct A68t97 ,struct A68t177 *),(struct A68t225 *,A68_VC ,struct A68t97 ,struct A68t177 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE225,MODE26,MODE97) MODE177 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t225 *,struct A68t178 ,struct A68t97 ,struct A68t177 *),(struct A68t225 *,struct A68t178 ,struct A68t97 ,struct A68t177 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE225,MODE178,MODE97) MODE177 */

A_PROCEDURE(A68_INT ,A68t245,(struct A68t225 *,struct A68t177 ,struct A68t97 ),(struct A68t225 *,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE225,MODE177,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t225 *,A68_VC ,struct A68t177 ,struct A68t97 ),(struct A68t225 *,A68_VC ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE225,REF MODE26,MODE177,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t225 *,struct A68t178 ,struct A68t177 ,struct A68t97 ),(struct A68t225 *,struct A68t178 ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE225,REF MODE178,MODE177,MODE97) VOID */

A_PROCEDURE(struct A68t226 *,A68t248,(struct A68t225 *,struct A68t87 ),(struct A68t225 *,struct A68t87 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE225,MODE87) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t226 *,struct A68t97 ),(struct A68t226 *,struct A68t97 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE226,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t226 *,struct A68t97 ,struct A68t177 *),(struct A68t226 *,struct A68t97 ,struct A68t177 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE226,MODE97) MODE177 */

A_PROCEDURE(A68_INT ,A68t251,(A68_CHAR ,struct A68t226 *,struct A68t97 ),(A68_CHAR ,struct A68t226 *,struct A68t97 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(CHAR,REF MODE226,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t252,(A68_VC ,struct A68t226 *,struct A68t97 ),(A68_VC ,struct A68t226 *,struct A68t97 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE26,REF MODE226,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t253,(A68_INT ,struct A68t226 *,struct A68t97 ),(A68_INT ,struct A68t226 *,struct A68t97 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(INT,REF MODE226,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t254,(A68_VC ,struct A68t226 *,struct A68t97 ),(A68_VC ,struct A68t226 *,struct A68t97 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE26,REF MODE226,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t255,(A68_BOOL ,struct A68t226 *,struct A68t97 ),(A68_BOOL ,struct A68t226 *,struct A68t97 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(BOOL,REF MODE226,MODE97) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from su_keepsake --- */
extern A68_177  UACAELA_nilptr;
extern A68_177  WACAELA_illegalptr;
extern A68_INT  BLEAELA_discfile_size(struct A68t175 *);
#define SNBAELA_block_size 512
extern A68_INT  GKEAELA_discptr_data(struct A68t175 *,struct A68t177 );
extern A68_VOID  TAFAELA_read_chars_dps(struct A68t175 *,A68_VC ,struct A68t178 ,struct A68t177 );
extern A68_VOID  NAFAELA_read_chars(struct A68t175 *,A68_VC ,struct A68t177 );
extern A68_VOID  ZCFAELA_read_discptrs(struct A68t175 *,struct A68t178 ,struct A68t177 );
extern A68_VOID  QRFAELA_write_chars_dps(struct A68t175 *,A68_VC ,struct A68t178 ,A68_BOOL ,A68_177 *);
extern A68_VOID  ZRFAELA_write_discptrs(struct A68t175 *,struct A68t178 ,A68_BOOL ,A68_177 *);
extern A68_VOID  VTFAELA_start_append(struct A68t175 *,A68_VC ,A68_BOOL ,A68_177 *);
extern A68_VOID  KUFAELA_append(struct A68t175 *,A68_VC ,struct A68t177 ,A68_177 *);
extern A68_VOID  BVFAELA_finish_append(struct A68t175 *,A68_VC ,struct A68t178 ,struct A68t177 ,A68_177 *);
extern A68_INT  UJEAELA_size(struct A68t175 *,struct A68t177 );
extern A68_INT  RIEAELA_num_chars(struct A68t175 *,struct A68t177 );
extern A68_INT  CJEAELA_num_discptrs(struct A68t175 *,struct A68t177 );
extern A68_VOID  MEGAELA_increase(struct A68t175 *,A68_INT ,struct A68t97 );
extern A68_BOOL  PEGAELA_can_increase(struct A68t175 *,A68_INT );
extern A68_BOOL  GHFAELA_can_write(struct A68t175 *,A68_VC ,struct A68t178 );
extern A68_113 * QHEAELA_keepsake_file(struct A68t175 *);
/* --- End of imports from su_keepsake --- */


/* --- Imports from basics --- */
extern A68_VC  NTCAOST_nilid;
#define PVCAOST_bitsperchar 8
#define QVCAOST_charsperint 4
extern A68_INT  SVCAOST_maxchar;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_115  BOBAOSI_update_access;
extern A68_115  FOBAOSI_update_truncate_access;
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
/* --- End of imports from osinterface --- */


/* --- Imports from libmessages --- */
extern A68_VOID  LIBAELA_lib_msg(A68_INT ,A68_92 *);
/* --- End of imports from libmessages --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_46  VJAAOSI_nullmsg;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void KUDAELA(void);   /* su_keepsake */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void IZAAELA(void);   /* libmessages */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_222   QWIAELA = {"$Id: databasebuffers.a68,v 34.2 1995/03/29 13:03:23 ella Exp $"}; 
A_GISVEC(A68_VC ,RWIAELA,QWIAELA,62)
static A68_178  WWIAELA_nodps;
#define YWIAELA_numb_tok 126
#define ZWIAELA_long_tok 158
#define AXIAELA_ident_tok 159
#define BXIAELA_ident_range_start 160
#define CXIAELA_start_int_value 170
#define DXIAELA_in1bytetok 251
#define EXIAELA_in2bytetok 252
#define FXIAELA_in3bytetok 253
#define GXIAELA_in4bytetok 254
static A68_INT  HXIAELA_min_int_value;
#define IXIAELA_max_int_value 60
#define JXIAELA_int_offset 190
#define KXIAELA_max_ident_size 10
static A68_INT  LXIAELA_maxintinchar;
static A68_INT  MXIAELA_intmask;
A68_224 * NXIAELA_nilrvclist;
A68_226 * OXIAELA_nilbuffer;
A68_INT  PXIAELA_invalid;
#define QXIAELA_validread 0
#define RXIAELA_validwrite 2
static A68_231   LZIAELA = {"index out of range in readchar"}; 
A_GISVEC(A68_VC ,MZIAELA,LZIAELA,30)
static A68_233   DBJAELA = {"invalid token"}; 
A_GISVEC(A68_VC ,EBJAELA,DBJAELA,13)
static A68_231   HBJAELA = {"index out of range in readchar"}; 
A_GISVEC(A68_VC ,IBJAELA,HBJAELA,30)
static A68_236   SBJAELA = {"index out of range in read chars"}; 
A_GISVEC(A68_VC ,TBJAELA,SBJAELA,32)
static A68_238   GCJAELA = {"inid2: name expected"}; 
A_GISVEC(A68_VC ,HCJAELA,GCJAELA,20)
static A68_240   MCJAELA = {"error in read bool"}; 
A_GISVEC(A68_VC ,NCJAELA,MCJAELA,18)
#define RCJAELA_unit 1
A68_177  CJJAELA_initptr;
A68_219  DJJAELA_database_file;
typedef struct   /* env of non-global proc */
{
A68_INT  BYIAELA_s;
A_PAD_INT(PAD_57)
} FYIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_225 * Df;
A68_177  Dp;
} BZIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_225 * Df;
} UCJAELA_notenough;
typedef struct   /* env of non-global proc */
{
A68_145  SCJAELA_notenough;
A68_97  Msg;
A68_225 * Df;
} DDJAELA_newmsg;
typedef struct   /* env of non-global proc */
{
int dummy;
} EEJAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_226 * Buffer;
} QFJAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FIJAELA_generator;

A_STATIC A68_VOID  TWIAELA_generator(A68_BOOL  SWIAELA_anonymous, A68_178  *ReturnedValue);

A68_BOOL  UXIAELA_isnilptr(A68_225 * Df, A68_177  Dp);

A68_226 * ZXIAELA_makebuffer(A68_225 * Df, A68_87  Discbuff, A68_INT  Type);

A_STATIC A68_VOID  EYIAELA_generator(A68_BOOL  CYIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RYIAELA_resetbuffer(A68_226 * Buffer);

A68_226 * WYIAELA_readbuffer(A68_225 * Df, A68_177  Dp);

A_STATIC A68_VOID  AZIAELA_generator(A68_BOOL  YYIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  IZIAELA_endread(A68_226 * Buffer);

A_STATIC A68_CHAR  KZIAELA_outofrange(void);

A68_INT  PZIAELA_readiltok(A68_226 * Buffer);

A68_CHAR  GBJAELA_readchar(A68_226 * Buffer);

A68_VOID  PBJAELA_readchars(A68_226 * Buffer, A68_VC  Result);

A68_INT  YBJAELA_in2(A68_226 * Buffer);

A68_VOID  CCJAELA_inid2(A68_226 * Buffer, A68_VC  *ReturnedValue);

A68_BOOL  JCJAELA_readbool(A68_226 * Buffer);

A68_VOID  QCJAELA_increase_library(A68_225 * Df, A68_97  Msg);

A_STATIC A68_VOID  TCJAELA_notenough(void *NonLocals);

A_STATIC A68_VOID  CDJAELA_newmsg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  TDJAELA_mywritechars(A68_225 * Df, A68_VC  Buffer, A68_97  Msg, A68_177  *ReturnedValue);

A68_VOID  AEJAELA_mywritediscptrs(A68_225 * Df, A68_178  Buffer, A68_97  Msg, A68_177  *ReturnedValue);

A_STATIC A68_VOID  DEJAELA_generator(A68_BOOL  BEJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  PEJAELA_nchars(A68_225 * Df, A68_177  Dp, A68_97  Msg);

A68_INT  UEJAELA_ndiscptrs(A68_225 * Df, A68_177  Dp, A68_97  Msg);

A68_VOID  AFJAELA_myreadchars(A68_225 * Df, A68_VC  Buffer, A68_177  Dp, A68_97  Msg);

A68_VOID  FFJAELA_myreaddiscptrs(A68_225 * Df, A68_178  Buffer, A68_177  Dp, A68_97  Msg);

A68_226 * IFJAELA_startwrite(A68_225 * Df, A68_87  Discbuff);

A68_VOID  MFJAELA_writebuffer(A68_226 * Buffer, A68_97  Msg);

A_STATIC A68_VOID  PFJAELA_generator(A68_BOOL  NFJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  CGJAELA_endwrite(A68_226 * Buffer, A68_97  Msg, A68_177  *ReturnedValue);

A68_INT  UGJAELA_charswritten(A68_226 * Buffer);

A68_INT  CHJAELA_outchar(A68_CHAR  C, A68_226 * Buffer, A68_97  Msg);

A68_INT  LHJAELA_outchars(A68_VC  Str, A68_226 * Buffer, A68_97  Msg);

A68_INT  YHJAELA_outint2(A68_INT  I, A68_226 * Buffer, A68_97  Msg);

A_STATIC A68_VOID  EIJAELA_generator(A68_BOOL  CIJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  UIJAELA_outid2(A68_VC  Id, A68_226 * Buffer, A68_97  Msg);

A68_INT  AJJAELA_outbool(A68_BOOL  Flag, A68_226 * Buffer, A68_97  Msg);

A_STATIC A68_VOID  EYIAELA_generator(A68_BOOL  CYIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FYIAELA_generator *)NonLocals)->x)
{ 
A68_VC  GYIAELA;  /* clause result */
A68_VC  HYIAELA;  /* OPERATORS - dynamic generator */
{ 
HYIAELA.upb = NL(BYIAELA_s) ;
( CYIAELA_anonymous? A_VLOC(A68_CHAR ,HYIAELA): A_VHEAP(A68_CHAR ,HYIAELA) );
GYIAELA = HYIAELA;
} 
*ReturnedValue = (GYIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AZIAELA_generator(A68_BOOL  YYIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BZIAELA_generator *)NonLocals)->x)
{ 
A68_VC  CZIAELA;  /* clause result */
A68_VC  DZIAELA;  /* OPERATORS - dynamic generator */
{ 
DZIAELA.upb = RIEAELA_num_chars((*(&(NL(Df)->Database))), NL(Dp)) ;
( YYIAELA_anonymous? A_VLOC(A68_CHAR ,DZIAELA): A_VHEAP(A68_CHAR ,DZIAELA) );
CZIAELA = DZIAELA;
} 
*ReturnedValue = (CZIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TCJAELA_notenough(void *NonLocals)
#define NL(x) (((UCJAELA_notenough *)NonLocals)->x)
{ 
A68_46  VCJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  WCJAELA;  /* avoid structure result */
A_PROC_ENTRY(notenough);
LIBAELA_lib_msg( 4, &WCJAELA );
A_CALLPROC(NL(Msg),(WCJAELA, A_HVEC(VCJAELA,(*(&(NL(Df)->Description))),A68_VC )),(WCJAELA, A_HVEC(VCJAELA,(*(&(NL(Df)->Description))),A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(notenough);
return;
} 
#undef NL

A_STATIC A68_VOID  CDJAELA_newmsg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((DDJAELA_newmsg *)NonLocals)->x)
{ 
A68_106  EDJAELA;  /* OPERATORS - mode -> union mode */
A68_95  FDJAELA;  /* avoid structure result */
A68_VC  GDJAELA_mess;
A68_242  HDJAELA;  /* collateral clause result */
A68_46  IDJAELA;  /* OPERATORS - istruct -> vector */
A68_92  JDJAELA;  /* avoid structure result */
A68_92  KDJAELA;  /* avoid structure result */
A_PROC_ENTRY(newmsg);
 /* line 305: */
 /* line 306: */
if ( TKAAOSI_error_msg(A_UNITE(EDJAELA,mode1,1,No)) )
{ 
A_CALLPROC(NL(SCJAELA_notenough),(),((NL(SCJAELA_notenough)).nonlocals));
 /* line 307: */
ONAAOSI_translate_msg( No, Params, &FDJAELA );
GDJAELA_mess = FDJAELA.Text;
 /* line 308: */
HDJAELA.data[0] = (*(&(NL(Df)->Description)));
HDJAELA.data[1] = GDJAELA_mess;
LIBAELA_lib_msg( 6, &JDJAELA );
A_CALLPROC(NL(Msg),(JDJAELA, A_HISVEC(IDJAELA,HDJAELA,2,A68_VC )),(JDJAELA, A_HISVEC(IDJAELA,HDJAELA,2,A68_VC ),(NL(Msg)).nonlocals));
 /* line 311: */
 /* line 312: */
LIBAELA_lib_msg( 7, &KDJAELA );
A_CALLPROC(NL(Msg),(KDJAELA, VJAAOSI_nullmsg),(KDJAELA, VJAAOSI_nullmsg,(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 313: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(newmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  DEJAELA_generator(A68_BOOL  BEJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EEJAELA_generator *)NonLocals)->x)
{ 
A68_VC  FEJAELA;  /* clause result */
A68_VC  GEJAELA;  /* OPERATORS - dynamic generator */
{ 
GEJAELA.upb = 0 ;
( BEJAELA_anonymous? A_VLOC(A68_CHAR ,GEJAELA): A_VHEAP(A68_CHAR ,GEJAELA) );
FEJAELA = GEJAELA;
} 
*ReturnedValue = (FEJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PFJAELA_generator(A68_BOOL  NFJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QFJAELA_generator *)NonLocals)->x)
{ 
A68_VC  RFJAELA;  /* clause result */
A68_VC  SFJAELA;  /* OPERATORS - dynamic generator */
{ 
SFJAELA.upb = (*(&((&(NL(Buffer)->Head))->Rvc))).upb ;
( NFJAELA_anonymous? A_VLOC(A68_CHAR ,SFJAELA): A_VHEAP(A68_CHAR ,SFJAELA) );
RFJAELA = SFJAELA;
} 
*ReturnedValue = (RFJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EIJAELA_generator(A68_BOOL  CIJAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FIJAELA_generator *)NonLocals)->x)
{ 
A68_VC  GIJAELA;  /* clause result */
A68_VC  HIJAELA;  /* OPERATORS - dynamic generator */
{ 
HIJAELA.upb = QVCAOST_charsperint ;
( CIJAELA_anonymous? A_VLOC(A68_CHAR ,HIJAELA): A_VHEAP(A68_CHAR ,HIJAELA) );
GIJAELA = HIJAELA;
} 
*ReturnedValue = (GIJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TWIAELA_generator(A68_BOOL  SWIAELA_anonymous, A68_178  *ReturnedValue)
{ 
A68_178  UWIAELA;  /* clause result */
A68_178  VWIAELA;  /* OPERATORS - dynamic generator */
{ 
VWIAELA.upb = 0 ;
( SWIAELA_anonymous? A_VLOC(A68_177 ,VWIAELA): A_VHEAP(A68_177 ,VWIAELA) );
UWIAELA = VWIAELA;
} 
*ReturnedValue = (UWIAELA);
return;
} 
#undef NL

A68_BOOL  UXIAELA_isnilptr(A68_225 * Df, A68_177  Dp)
{ 
A68_BOOL  VXIAELA;  /* clause result */
A_PROC_ENTRY(isnilptr);
 /* line 137: */
VXIAELA = (GKEAELA_discptr_data((*(&(Df->Database))), Dp)==2);
A_PROC_EXIT(isnilptr);
return( VXIAELA );
} 
#undef NL

A68_226 * ZXIAELA_makebuffer(A68_225 * Df, A68_87  Discbuff, A68_INT  Type)
{ 
A68_87  AYIAELA;  /* united object - for case conformity */
A68_INT  BYIAELA_s;
A68_31  DYIAELA_generator;   /* proc value of non-global proc */
A68_VC  IYIAELA;  /* clause result */
A68_VC  JYIAELA;  /* avoid structure result */
A68_VC  KYIAELA_buf;
A68_VC  LYIAELA_b;
A68_226 * MYIAELA_ans;
A68_226  NYIAELA;  /* collateral clause result */
A68_224 ** OYIAELA;  /* YIELD */
A68_226 * PYIAELA;  /* clause result */
A_PROC_ENTRY(makebuffer);
 /* line 142: */
 /* line 144: */
{ 
AYIAELA = Discbuff ;
switch ( AYIAELA.mode )
{ 
case 1: /* INT */
BYIAELA_s = (AYIAELA.data.mode1);
A_CLOSURE( DYIAELA_generator, EYIAELA_generator, FYIAELA_generator );
(( FYIAELA_generator * ) ( DYIAELA_generator.nonlocals )) -> BYIAELA_s = BYIAELA_s;
A_CALLPROC(DYIAELA_generator,(A68_FALSE, &JYIAELA),(A68_FALSE, &JYIAELA,(DYIAELA_generator).nonlocals));
IYIAELA = JYIAELA;
break;
case 2: /* REF VECTOR [] CHAR */
KYIAELA_buf = (AYIAELA.data.mode2);
IYIAELA = KYIAELA_buf;
break;
default: 
A_IMP_SKIP ;
break;
} 
LYIAELA_b = IYIAELA;
 /* line 145: */
MYIAELA_ans = (A_HEAP(A68_226 ));
NYIAELA.Df = (*Df);
NYIAELA.Head.Rvc = LYIAELA_b;
NYIAELA.Head.Rest = NXIAELA_nilrvclist;
NYIAELA.Current = (A68_224 *)A68_NIL;
NYIAELA.Index = 0;
NYIAELA.Type = Type;
NYIAELA.Ident = NTCAOST_nilid;
NYIAELA.Int = 0;
(*MYIAELA_ans) = NYIAELA;
 /* line 146: */
OYIAELA = (&(MYIAELA_ans->Current)) ;
(*OYIAELA) = (&(MYIAELA_ans->Head));
 /* line 147: */
 /* line 148: */
PYIAELA = MYIAELA_ans;
} 
A_PROC_EXIT(makebuffer);
return( PYIAELA );
} 
#undef NL

A68_VOID  RYIAELA_resetbuffer(A68_226 * Buffer)
{ 
A68_INT * SYIAELA;  /* YIELD */
A68_224 ** TYIAELA;  /* YIELD */
A_PROC_ENTRY(resetbuffer);
 /* line 151: */
 /* line 154: */
{ 
SYIAELA = (&(Buffer->Index)) ;
(*SYIAELA) = 0;
 /* line 155: */
 /* line 156: */
TYIAELA = (&(Buffer->Current)) ;
(*TYIAELA) = (&(Buffer->Head));
} 
A_PROC_EXIT(resetbuffer);
return;
} 
#undef NL

A68_226 * WYIAELA_readbuffer(A68_225 * Df, A68_177  Dp)
{ 
A68_226 * XYIAELA;  /* clause result */
A68_31  ZYIAELA_generator;   /* proc value of non-global proc */
A68_VC  EZIAELA;  /* avoid structure result */
A68_VC  FZIAELA_discbuff;
A68_87  GZIAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(readbuffer);
 /* line 159: */
 /* line 160: */
{ 
 /* line 161: */
 /* line 162: */
if ( UXIAELA_isnilptr(Df, Dp) )
{ 
XYIAELA = OXIAELA_nilbuffer;
} 
else
{ 
A_CLOSURE( ZYIAELA_generator, AZIAELA_generator, BZIAELA_generator );
(( BZIAELA_generator * ) ( ZYIAELA_generator.nonlocals )) -> Df = Df;
(( BZIAELA_generator * ) ( ZYIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(ZYIAELA_generator,(A68_FALSE, &EZIAELA),(A68_FALSE, &EZIAELA,(ZYIAELA_generator).nonlocals));
FZIAELA_discbuff = EZIAELA;
 /* line 163: */
TAFAELA_read_chars_dps((*(&(Df->Database))), FZIAELA_discbuff, WWIAELA_nodps, Dp);
 /* line 164: */
 /* line 165: */
 /* line 166: */
XYIAELA = ZXIAELA_makebuffer(Df, A_UNITE(GZIAELA,mode2,2,FZIAELA_discbuff), QXIAELA_validread);
} 
} 
A_PROC_EXIT(readbuffer);
return( XYIAELA );
} 
#undef NL

A68_VOID  IZIAELA_endread(A68_226 * Buffer)
{ 
A68_INT * JZIAELA;  /* YIELD */
A_PROC_ENTRY(endread);
JZIAELA = (&(Buffer->Type)) ;
(*JZIAELA) = PXIAELA_invalid;
A_PROC_EXIT(endread);
return;
} 
#undef NL

A_STATIC A68_CHAR  KZIAELA_outofrange(void)
{ 
A68_CHAR  NZIAELA;  /* clause result */
A_PROC_ENTRY(outofrange);
{ 
NKDAOST_sysfault(MZIAELA);
NZIAELA = (A68_CHAR)0;
} 
A_PROC_EXIT(outofrange);
return( NZIAELA );
} 
#undef NL

A68_INT  PZIAELA_readiltok(A68_226 * Buffer)
{ 
A68_INT  QZIAELA_upb;
A68_CHAR  RZIAELA;  /* clause result */
A68_VC  SZIAELA;  /* OPERATORS - simple index */
A68_INT * TZIAELA;  /* YIELD */
A68_INT  UZIAELA;  /* YIELD */
A68_INT  VZIAELA_i;
A68_INT  WZIAELA;  /* clause result */
A68_CHAR  XZIAELA;  /* clause result */
A68_VC  YZIAELA;  /* OPERATORS - simple index */
A68_INT * ZZIAELA;  /* YIELD */
A68_INT  AAJAELA;  /* YIELD */
A68_CHAR  BAJAELA;  /* clause result */
A68_VC  CAJAELA;  /* OPERATORS - simple index */
A68_INT * DAJAELA;  /* YIELD */
A68_INT  EAJAELA;  /* YIELD */
A68_INT  FAJAELA_length;
A68_INT * GAJAELA;  /* YIELD */
A68_VC  HAJAELA;  /* clause result */
A68_INT * IAJAELA;  /* YIELD */
A68_VC  JAJAELA;  /* OPERATORS - trim index */
A68_VC  KAJAELA;  /* OPERATORS - trim index */
A68_VC * LAJAELA;  /* YIELD */
A68_INT  MAJAELA_idlength;
A68_VC  NAJAELA;  /* clause result */
A68_INT * OAJAELA;  /* YIELD */
A68_VC  PAJAELA;  /* OPERATORS - trim index */
A68_VC  QAJAELA;  /* OPERATORS - trim index */
A68_VC * RAJAELA;  /* YIELD */
A68_INT * SAJAELA;  /* YIELD */
A68_INT * TAJAELA;  /* YIELD */
A68_INT * UAJAELA_int;
A68_INT  VAJAELA_size;
A68_INT  WAJAELA;  /* to part of loop */
A68_INT  XAJAELA;  /* loop control */
A68_CHAR  YAJAELA;  /* clause result */
A68_VC  ZAJAELA;  /* OPERATORS - simple index */
A68_INT * ABJAELA;  /* YIELD */
A68_INT  BBJAELA;  /* YIELD */
A68_BITS  CBJAELA;  /* SHL */
A_PROC_ENTRY(readiltok);
 /* line 177: */
 /* line 179: */
{ 
QZIAELA_upb = (*(&((*(&(Buffer->Current)))->Rvc))).upb;
 /* line 180: */
 /* line 181: */
 /* line 182: */
if ( ((*(&(Buffer->Index)))>=QZIAELA_upb) )
{ 
RZIAELA = KZIAELA_outofrange();
} 
else
{ 
 /* line 183: */
SZIAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
TZIAELA = (&(Buffer->Index)) ;
UZIAELA = (*TZIAELA)+=1 ;
RZIAELA = (*(&A_VINDEX(SZIAELA,UZIAELA)));
} 
VZIAELA_i = (A68_INT)(unsigned char)RZIAELA;
 /* line 184: */
 /* line 185: */
 /* line 186: */
if ( (VZIAELA_i<ZWIAELA_long_tok) )
{ 
WZIAELA = VZIAELA_i;
} 
else
{ 
 /* line 187: */
if ( (VZIAELA_i==ZWIAELA_long_tok) )
{ 
 /* line 188: */
 /* line 189: */
if ( ((*(&(Buffer->Index)))>=QZIAELA_upb) )
{ 
XZIAELA = KZIAELA_outofrange();
} 
else
{ 
 /* line 190: */
 /* line 191: */
YZIAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
ZZIAELA = (&(Buffer->Index)) ;
AAJAELA = (*ZZIAELA)+=1 ;
XZIAELA = (*(&A_VINDEX(YZIAELA,AAJAELA)));
} 
WZIAELA = (A68_INT)(unsigned char)XZIAELA;
} 
else
{ 
 /* line 192: */
 /* line 193: */
if ( (VZIAELA_i==AXIAELA_ident_tok) )
{ 
 /* line 194: */
 /* line 195: */
if ( ((*(&(Buffer->Index)))>=QZIAELA_upb) )
{ 
BAJAELA = KZIAELA_outofrange();
} 
else
{ 
 /* line 196: */
CAJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
DAJAELA = (&(Buffer->Index)) ;
EAJAELA = (*DAJAELA)+=1 ;
BAJAELA = (*(&A_VINDEX(CAJAELA,EAJAELA)));
} 
FAJAELA_length = (A68_INT)(unsigned char)BAJAELA;
 /* line 197: */
 /* line 198: */
 /* line 199: */
if ( (FAJAELA_length==0) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 200: */
if ( (FAJAELA_length<DXIAELA_in1bytetok) )
{ 
 /* line 201: */
FAJAELA_length = (FAJAELA_length-JXIAELA_int_offset);
} 
else
{ 
GAJAELA = (&(Buffer->Index)) ;
(*GAJAELA)-=1;
 /* line 202: */
PZIAELA_readiltok(Buffer);
 /* line 203: */
 /* line 204: */
FAJAELA_length = (*(&(Buffer->Int)));
} 
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
if ( (FAJAELA_length==0) )
{ 
HAJAELA = EOAAOSL_nullstr;
} 
else
{ 
 /* line 209: */
IAJAELA = (&(Buffer->Index)) ;
if ( (((*IAJAELA)+=FAJAELA_length)>QZIAELA_upb) )
{ 
KZIAELA_outofrange();
 /* line 210: */
HAJAELA = EOAAOSL_nullstr;
} 
else
{ 
 /* line 211: */
 /* line 212: */
JAJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
HAJAELA = A_VTRIM(KAJAELA,(JAJAELA),A_VTSCRIPT(&(KAJAELA.upb),(JAJAELA).upb,(((*(&(Buffer->Index)))-FAJAELA_length)+1),(*(&(Buffer->Index)))));
} 
} 
LAJAELA = (&(Buffer->Ident)) ;
(*LAJAELA) = HAJAELA;
 /* line 213: */
 /* line 214: */
WZIAELA = AXIAELA_ident_tok;
} 
else
{ 
 /* line 215: */
if ( (VZIAELA_i<CXIAELA_start_int_value) )
{ 
MAJAELA_idlength = (VZIAELA_i-BXIAELA_ident_range_start);
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
if ( (MAJAELA_idlength==0) )
{ 
NAJAELA = EOAAOSL_nullstr;
} 
else
{ 
 /* line 220: */
OAJAELA = (&(Buffer->Index)) ;
if ( (((*OAJAELA)+=MAJAELA_idlength)>QZIAELA_upb) )
{ 
KZIAELA_outofrange();
 /* line 221: */
NAJAELA = EOAAOSL_nullstr;
} 
else
{ 
 /* line 222: */
 /* line 223: */
PAJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
NAJAELA = A_VTRIM(QAJAELA,(PAJAELA),A_VTSCRIPT(&(QAJAELA.upb),(PAJAELA).upb,(((*(&(Buffer->Index)))-MAJAELA_idlength)+1),(*(&(Buffer->Index)))));
} 
} 
RAJAELA = (&(Buffer->Ident)) ;
(*RAJAELA) = NAJAELA;
 /* line 224: */
 /* line 225: */
WZIAELA = AXIAELA_ident_tok;
} 
else
{ 
 /* line 226: */
if ( (VZIAELA_i<DXIAELA_in1bytetok) )
{ 
SAJAELA = (&(Buffer->Int)) ;
(*SAJAELA) = (VZIAELA_i-JXIAELA_int_offset);
 /* line 227: */
WZIAELA = YWIAELA_numb_tok;
} 
else
{ 
 /* line 228: */
if ( (VZIAELA_i<=GXIAELA_in4bytetok) )
{ 
TAJAELA = (&(Buffer->Int)) ;
(*TAJAELA) = 0 ;
UAJAELA_int = TAJAELA;
 /* line 229: */
VAJAELA_size = (4-(GXIAELA_in4bytetok-VZIAELA_i));
 /* line 230: */
 /* line 231: */
WAJAELA = VAJAELA_size;
for ( XAJAELA = 1;
XAJAELA <= WAJAELA;
XAJAELA += 1 )
{ 
 /* line 232: */
 /* line 233: */
 /* line 234: */
if ( ((*(&(Buffer->Index)))>=QZIAELA_upb) )
{ 
YAJAELA = KZIAELA_outofrange();
} 
else
{ 
 /* line 235: */
 /* line 236: */
 /* line 237: */
ZAJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
ABJAELA = (&(Buffer->Index)) ;
BBJAELA = (*ABJAELA)+=1 ;
YAJAELA = (*(&A_VINDEX(ZAJAELA,BBJAELA)));
} 
CBJAELA = (A68_BITS )(*UAJAELA_int) ;
(*UAJAELA_int) = ((A68_INT )A_SHL(CBJAELA,PVCAOST_bitsperchar)+(A68_INT)(unsigned char)YAJAELA);
}
 /* line 238: */
 /* line 239: */
WZIAELA = YWIAELA_numb_tok;
} 
else
{ 
NKDAOST_sysfault(EBJAELA);
 /* line 240: */
 /* line 241: */
WZIAELA = VZIAELA_i;
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(readiltok);
return( WZIAELA );
} 
#undef NL

A68_CHAR  GBJAELA_readchar(A68_226 * Buffer)
{ 
A68_CHAR  JBJAELA;  /* clause result */
A68_VC  KBJAELA;  /* OPERATORS - simple index */
A68_INT * LBJAELA;  /* YIELD */
A68_INT  MBJAELA;  /* YIELD */
A_PROC_ENTRY(readchar);
 /* line 247: */
 /* line 248: */
{ 
 /* line 249: */
if ( ((*(&(Buffer->Index)))>=(*(&((*(&(Buffer->Current)))->Rvc))).upb) )
{ 
NKDAOST_sysfault(IBJAELA);
 /* line 250: */
JBJAELA = (A68_CHAR)0;
} 
else
{ 
 /* line 251: */
 /* line 252: */
KBJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
LBJAELA = (&(Buffer->Index)) ;
MBJAELA = (*LBJAELA)+=1 ;
JBJAELA = (*(&A_VINDEX(KBJAELA,MBJAELA)));
} 
} 
A_PROC_EXIT(readchar);
return( JBJAELA );
} 
#undef NL

A68_VOID  PBJAELA_readchars(A68_226 * Buffer, A68_VC  Result)
{ 
A68_INT  QBJAELA_length;
A68_INT * RBJAELA;  /* YIELD */
A68_VC  UBJAELA;  /* OPERATORS - trim index */
A68_VC  VBJAELA;  /* OPERATORS - trim index */
A68_VC  WBJAELA;  /* OPERATORS - assign op */
A_PROC_ENTRY(readchars);
 /* line 255: */
 /* line 257: */
{ 
QBJAELA_length = Result.upb;
 /* line 258: */
 /* line 259: */
RBJAELA = (&(Buffer->Index)) ;
if ( (((*RBJAELA)+=QBJAELA_length)>(*(&((*(&(Buffer->Current)))->Rvc))).upb) )
{ 
 /* line 260: */
NKDAOST_sysfault(TBJAELA);
} 
 /* line 261: */
 /* line 262: */
 /* line 263: */
UBJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
WBJAELA = A_VTRIM(VBJAELA,(UBJAELA),A_VTSCRIPT(&(VBJAELA.upb),(UBJAELA).upb,(((*(&(Buffer->Index)))-QBJAELA_length)+1),(*(&(Buffer->Index))))) ;
A_VASSIGN2(WBJAELA,Result,A68_CHAR );
} 
A_PROC_EXIT(readchars);
return;
} 
#undef NL

A68_INT  YBJAELA_in2(A68_226 * Buffer)
{ 
A68_INT  ZBJAELA_i;
A68_INT  ACJAELA;  /* clause result */
A_PROC_ENTRY(in2);
 /* line 266: */
{ 
ZBJAELA_i = PZIAELA_readiltok(Buffer);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if ( (ZBJAELA_i==YWIAELA_numb_tok) )
{ 
 /* line 270: */
ACJAELA = (*(&(Buffer->Int)));
} 
else
{ 
 /* line 271: */
ACJAELA = ZBJAELA_i;
} 
} 
A_PROC_EXIT(in2);
return( ACJAELA );
} 
#undef NL

A68_VOID  CCJAELA_inid2(A68_226 * Buffer, A68_VC  *ReturnedValue)
{ 
A68_INT  DCJAELA_i;
A68_VC  ECJAELA;  /* clause result */
A68_VC  FCJAELA;  /* avoid structure result */
A_PROC_ENTRY(inid2);
 /* line 274: */
{ 
DCJAELA_i = PZIAELA_readiltok(Buffer);
 /* line 275: */
 /* line 276: */
 /* line 277: */
if ( (DCJAELA_i==AXIAELA_ident_tok) )
{ 
ZAAAOSI_makervc( (*(&(Buffer->Ident))), &FCJAELA );
ECJAELA = FCJAELA;
} 
else
{ 
NKDAOST_sysfault(HCJAELA);
 /* line 278: */
 /* line 279: */
ECJAELA = NTCAOST_nilid;
} 
} 
A_PROC_EXIT(inid2);
*ReturnedValue = (ECJAELA);
return;
} 
#undef NL

A68_BOOL  JCJAELA_readbool(A68_226 * Buffer)
{ 
A68_INT  KCJAELA_flag;
A68_BOOL  LCJAELA;  /* clause result */
A_PROC_ENTRY(readbool);
 /* line 282: */
{ 
KCJAELA_flag = YBJAELA_in2(Buffer);
 /* line 283: */
if ( (KCJAELA_flag==0) )
{ 
 /* line 284: */
LCJAELA = A68_FALSE;
} 
else
{ 
if ( (KCJAELA_flag==1) )
{ 
 /* line 285: */
LCJAELA = A68_TRUE;
} 
else
{ 
NKDAOST_sysfault(NCJAELA);
 /* line 286: */
 /* line 287: */
LCJAELA = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(readbool);
return( LCJAELA );
} 
#undef NL

A68_VOID  QCJAELA_increase_library(A68_225 * Df, A68_97  Msg)
{ 
A68_145  SCJAELA_notenough;   /* proc value of non-global proc */
A68_46  XCJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  YCJAELA;  /* avoid structure result */
A68_97  BDJAELA_newmsg;   /* proc value of non-global proc */
A68_INT  LDJAELA_filesize;
A68_242  MDJAELA;  /* collateral clause result */
A68_VC  NDJAELA;  /* avoid structure result */
A68_46  ODJAELA;  /* OPERATORS - istruct -> vector */
A68_92  PDJAELA;  /* avoid structure result */
A_PROC_ENTRY(increase_library);
 /* line 293: */
 /* line 294: */
{ 
 /* line 295: */
A_CLOSURE( SCJAELA_notenough, TCJAELA_notenough, UCJAELA_notenough );
(( UCJAELA_notenough * ) ( SCJAELA_notenough.nonlocals )) -> Msg = Msg;
(( UCJAELA_notenough * ) ( SCJAELA_notenough.nonlocals )) -> Df = Df;
 /* line 298: */
 /* line 299: */
if ( !PEGAELA_can_increase((*(&(Df->Database))), RCJAELA_unit) )
{ 
A_CALLPROC(SCJAELA_notenough,(),((SCJAELA_notenough).nonlocals));
 /* line 300: */
 /* line 301: */
 /* line 302: */
LIBAELA_lib_msg( 5, &YCJAELA );
A_CALLPROC(Msg,(YCJAELA, A_HVEC(XCJAELA,(*(&(Df->Description))),A68_VC )),(YCJAELA, A_HVEC(XCJAELA,(*(&(Df->Description))),A68_VC ),(Msg).nonlocals));
} 
 /* line 304: */
A_CLOSURE( BDJAELA_newmsg, CDJAELA_newmsg, DDJAELA_newmsg );
(( DDJAELA_newmsg * ) ( BDJAELA_newmsg.nonlocals )) -> SCJAELA_notenough = SCJAELA_notenough;
(( DDJAELA_newmsg * ) ( BDJAELA_newmsg.nonlocals )) -> Msg = Msg;
(( DDJAELA_newmsg * ) ( BDJAELA_newmsg.nonlocals )) -> Df = Df;
 /* line 315: */
MEGAELA_increase((*(&(Df->Database))), RCJAELA_unit, BDJAELA_newmsg);
 /* line 316: */
LDJAELA_filesize = BLEAELA_discfile_size((*(&(Df->Database))));
 /* line 317: */
 /* line 318: */
MDJAELA.data[0] = (*(&(Df->Description)));
FCAAOSI_intchars( (LDJAELA_filesize*SNBAELA_block_size), &NDJAELA );
MDJAELA.data[1] = NDJAELA;
 /* line 319: */
LIBAELA_lib_msg( 8, &PDJAELA );
A_CALLPROC(Msg,(PDJAELA, A_HISVEC(ODJAELA,MDJAELA,2,A68_VC )),(PDJAELA, A_HISVEC(ODJAELA,MDJAELA,2,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(increase_library);
return;
} 
#undef NL

A68_VOID  TDJAELA_mywritechars(A68_225 * Df, A68_VC  Buffer, A68_97  Msg, A68_177  *ReturnedValue)
{ 
A68_177  UDJAELA;  /* clause result */
A68_177  VDJAELA;  /* avoid structure result */
A68_177  WDJAELA;  /* avoid structure result */
A_PROC_ENTRY(mywritechars);
 /* line 324: */
 /* line 325: */
{ 
 /* line 326: */
if ( GHFAELA_can_write((*(&(Df->Database))), Buffer, WWIAELA_nodps) )
{ 
 /* line 327: */
QRFAELA_write_chars_dps( (*(&(Df->Database))), Buffer, WWIAELA_nodps, A68_FALSE, &VDJAELA );
UDJAELA = VDJAELA;
} 
else
{ 
QCJAELA_increase_library(Df, Msg);
 /* line 328: */
 /* line 329: */
 /* line 330: */
TDJAELA_mywritechars( Df, Buffer, Msg, &WDJAELA );
UDJAELA = WDJAELA;
} 
} 
A_PROC_EXIT(mywritechars);
*ReturnedValue = (UDJAELA);
return;
} 
#undef NL
 /* line 333: */

A68_VOID  AEJAELA_mywritediscptrs(A68_225 * Df, A68_178  Buffer, A68_97  Msg, A68_177  *ReturnedValue)
{ 
A68_31  CEJAELA_generator;   /* proc value of non-global proc */
A68_VC  IEJAELA;  /* avoid structure result */
A68_VC  HEJAELA_nochars;
A68_177  JEJAELA;  /* clause result */
A68_177  KEJAELA;  /* avoid structure result */
A68_177  LEJAELA;  /* avoid structure result */
A_PROC_ENTRY(mywritediscptrs);
 /* line 334: */
 /* line 335: */
{ 
A_CLOSURE( CEJAELA_generator, DEJAELA_generator, EEJAELA_generator );
A_CALLPROC(CEJAELA_generator,(A68_TRUE, &IEJAELA),(A68_TRUE, &IEJAELA,(CEJAELA_generator).nonlocals));
HEJAELA_nochars = IEJAELA;
 /* line 336: */
 /* line 337: */
if ( GHFAELA_can_write((*(&(Df->Database))), HEJAELA_nochars, Buffer) )
{ 
 /* line 338: */
ZRFAELA_write_discptrs( (*(&(Df->Database))), Buffer, A68_FALSE, &KEJAELA );
JEJAELA = KEJAELA;
} 
else
{ 
QCJAELA_increase_library(Df, Msg);
 /* line 339: */
 /* line 340: */
 /* line 341: */
AEJAELA_mywritediscptrs( Df, Buffer, Msg, &LEJAELA );
JEJAELA = LEJAELA;
} 
} 
A_PROC_EXIT(mywritediscptrs);
*ReturnedValue = (JEJAELA);
return;
} 
#undef NL

A68_INT  PEJAELA_nchars(A68_225 * Df, A68_177  Dp, A68_97  Msg)
{ 
A68_INT  QEJAELA;  /* clause result */
A_PROC_ENTRY(nchars);
 /* line 348: */
 /* line 349: */
if ( (GKEAELA_discptr_data((*(&(Df->Database))), Dp)==3) )
{ 
 /* line 350: */
QEJAELA = RIEAELA_num_chars((*(&(Df->Database))), Dp);
} 
else
{ 
 /* line 351: */
QEJAELA = UJEAELA_size((*(&(Df->Database))), Dp);
} 
A_PROC_EXIT(nchars);
return( QEJAELA );
} 
#undef NL

A68_INT  UEJAELA_ndiscptrs(A68_225 * Df, A68_177  Dp, A68_97  Msg)
{ 
A68_INT  VEJAELA;  /* clause result */
A_PROC_ENTRY(ndiscptrs);
 /* line 354: */
 /* line 355: */
if ( (GKEAELA_discptr_data((*(&(Df->Database))), Dp)==3) )
{ 
 /* line 356: */
VEJAELA = CJEAELA_num_discptrs((*(&(Df->Database))), Dp);
} 
else
{ 
 /* line 357: */
VEJAELA = UJEAELA_size((*(&(Df->Database))), Dp);
} 
A_PROC_EXIT(ndiscptrs);
return( VEJAELA );
} 
#undef NL
 /* line 360: */

A68_VOID  AFJAELA_myreadchars(A68_225 * Df, A68_VC  Buffer, A68_177  Dp, A68_97  Msg)
{ 
A_PROC_ENTRY(myreadchars);
 /* line 361: */
 /* line 362: */
if ( (GKEAELA_discptr_data((*(&(Df->Database))), Dp)==3) )
{ 
 /* line 363: */
TAFAELA_read_chars_dps((*(&(Df->Database))), Buffer, WWIAELA_nodps, Dp);
} 
else
{ 
 /* line 364: */
NAFAELA_read_chars((*(&(Df->Database))), Buffer, Dp);
} 
A_PROC_EXIT(myreadchars);
return;
} 
#undef NL
 /* line 367: */

A68_VOID  FFJAELA_myreaddiscptrs(A68_225 * Df, A68_178  Buffer, A68_177  Dp, A68_97  Msg)
{ 
A_PROC_ENTRY(myreaddiscptrs);
 /* line 368: */
 /* line 369: */
if ( (GKEAELA_discptr_data((*(&(Df->Database))), Dp)==3) )
{ 
 /* line 370: */
TAFAELA_read_chars_dps((*(&(Df->Database))), EOAAOSL_nullstr, Buffer, Dp);
} 
else
{ 
 /* line 371: */
ZCFAELA_read_discptrs((*(&(Df->Database))), Buffer, Dp);
} 
A_PROC_EXIT(myreaddiscptrs);
return;
} 
#undef NL

A68_226 * IFJAELA_startwrite(A68_225 * Df, A68_87  Discbuff)
{ 
A68_226 * JFJAELA;  /* clause result */
A_PROC_ENTRY(startwrite);
 /* line 379: */
JFJAELA = ZXIAELA_makebuffer(Df, Discbuff, RXIAELA_validwrite);
A_PROC_EXIT(startwrite);
return( JFJAELA );
} 
#undef NL

A68_VOID  MFJAELA_writebuffer(A68_226 * Buffer, A68_97  Msg)
{ 
A68_31  OFJAELA_generator;   /* proc value of non-global proc */
A68_VC  TFJAELA;  /* avoid structure result */
A68_VC  UFJAELA_empty;
A68_224  VFJAELA;  /* collateral clause result */
A68_224 * WFJAELA;  /* YIELD */
A68_224 ** XFJAELA;  /* YIELD */
A68_224 ** YFJAELA;  /* YIELD */
A68_INT * ZFJAELA;  /* YIELD */
A_PROC_ENTRY(writebuffer);
 /* line 382: */
 /* line 383: */
{ 
 /* line 384: */
if ( ((*(&((*(&(Buffer->Current)))->Rest)))==NXIAELA_nilrvclist) )
{ 
A_CLOSURE( OFJAELA_generator, PFJAELA_generator, QFJAELA_generator );
(( QFJAELA_generator * ) ( OFJAELA_generator.nonlocals )) -> Buffer = Buffer;
A_CALLPROC(OFJAELA_generator,(A68_FALSE, &TFJAELA),(A68_FALSE, &TFJAELA,(OFJAELA_generator).nonlocals));
UFJAELA_empty = TFJAELA;
 /* line 385: */
VFJAELA.Rvc = UFJAELA_empty;
 /* line 386: */
VFJAELA.Rest = NXIAELA_nilrvclist;
WFJAELA = A_HEAP(A68_224 ) ;
(*WFJAELA) = VFJAELA ;
XFJAELA = (&((*(&(Buffer->Current)))->Rest)) ;
(*XFJAELA) = WFJAELA;
} 
 /* line 387: */
YFJAELA = (&(Buffer->Current)) ;
(*YFJAELA) = (*(&((*(&(Buffer->Current)))->Rest)));
 /* line 388: */
 /* line 389: */
ZFJAELA = (&(Buffer->Index)) ;
(*ZFJAELA) = 0;
} 
A_PROC_EXIT(writebuffer);
return;
} 
#undef NL

A68_VOID  CGJAELA_endwrite(A68_226 * Buffer, A68_97  Msg, A68_177  *ReturnedValue)
{ 
A68_175 * DGJAELA_dbase;
A68_177  EGJAELA_dp;
A68_224 * FGJAELA_ptr;
A68_BOOL  GGJAELA_first;
A68_BOOL  HGJAELA_last;
A68_VC  IGJAELA;  /* clause result */
A68_VC  JGJAELA;  /* OPERATORS - trim index */
A68_VC  KGJAELA;  /* OPERATORS - trim index */
A68_VC  LGJAELA_data;
A68_BOOL  MGJAELA;  /* optbool result */
A68_177  NGJAELA;  /* clause result */
A68_177  OGJAELA;  /* avoid structure result */
A68_177  PGJAELA;  /* avoid structure result */
A68_177  QGJAELA;  /* avoid structure result */
A68_177  RGJAELA;  /* avoid structure result */
A68_177  SGJAELA;  /* clause result */
A_PROC_ENTRY(endwrite);
 /* line 392: */
 /* line 395: */
{ 
DGJAELA_dbase = (*(&((&(Buffer->Df))->Database)));
 /* line 396: */
EGJAELA_dp = UACAELA_nilptr;
 /* line 397: */
FGJAELA_ptr = (&(Buffer->Head));
 /* line 398: */
GGJAELA_first = A68_TRUE;
HGJAELA_last = A68_FALSE;
 /* line 399: */
for ( ;; )
{ 
 /* line 400: */
 /* line 401: */
if ( !(!HGJAELA_last) ) break;
 /* line 402: */
if ( (FGJAELA_ptr==(*(&(Buffer->Current)))) )
{ 
HGJAELA_last = A68_TRUE;
 /* line 403: */
 /* line 404: */
JGJAELA = (*(&(FGJAELA_ptr->Rvc))) ;
IGJAELA = A_VTRIM(KGJAELA,(JGJAELA),A_VTSCRIPT(&(KGJAELA.upb),(JGJAELA).upb,1,(*(&(Buffer->Index)))));
} 
else
{ 
IGJAELA = (*(&(FGJAELA_ptr->Rvc)));
} 
LGJAELA_data = IGJAELA;
 /* line 405: */
for ( ;; )
{ 
 /* line 406: */
if ( !(!GHFAELA_can_write(DGJAELA_dbase, LGJAELA_data, WWIAELA_nodps)) ) break;
QCJAELA_increase_library((&(Buffer->Df)), Msg);
}
 /* line 407: */
 /* line 408: */
MGJAELA = GGJAELA_first;
if ( MGJAELA )
{MGJAELA = HGJAELA_last;
}
if ( MGJAELA )
{ 
 /* line 409: */
 /* line 410: */
QRFAELA_write_chars_dps( DGJAELA_dbase, LGJAELA_data, WWIAELA_nodps, A68_FALSE, &OGJAELA );
NGJAELA = OGJAELA;
} 
else
{ 
if ( GGJAELA_first )
{ 
GGJAELA_first = A68_FALSE;
 /* line 411: */
 /* line 412: */
VTFAELA_start_append( DGJAELA_dbase, LGJAELA_data, A68_FALSE, &PGJAELA );
NGJAELA = PGJAELA;
} 
else
{ 
if ( HGJAELA_last )
{ 
 /* line 413: */
BVFAELA_finish_append( DGJAELA_dbase, LGJAELA_data, WWIAELA_nodps, EGJAELA_dp, &QGJAELA );
NGJAELA = QGJAELA;
} 
else
{ 
 /* line 414: */
KUFAELA_append( DGJAELA_dbase, LGJAELA_data, EGJAELA_dp, &RGJAELA );
NGJAELA = RGJAELA;
} 
} 
} 
EGJAELA_dp = NGJAELA;
 /* line 415: */
 /* line 416: */
FGJAELA_ptr = (*(&(FGJAELA_ptr->Rest)));
}
 /* line 417: */
 /* line 418: */
SGJAELA = EGJAELA_dp;
} 
A_PROC_EXIT(endwrite);
*ReturnedValue = (SGJAELA);
return;
} 
#undef NL

A68_INT  UGJAELA_charswritten(A68_226 * Buffer)
{ 
A68_INT  VGJAELA_buffersize;
A68_INT  WGJAELA_n;
A68_224 * XGJAELA_bufs;
A68_INT  YGJAELA;  /* clause result */
A_PROC_ENTRY(charswritten);
 /* line 421: */
 /* line 423: */
{ 
VGJAELA_buffersize = (*(&((&(Buffer->Head))->Rvc))).upb;
 /* line 424: */
WGJAELA_n = (*(&(Buffer->Index)));
 /* line 425: */
XGJAELA_bufs = (&(Buffer->Head));
 /* line 426: */
for ( ;; )
{ 
 /* line 427: */
if ( !((XGJAELA_bufs!=(*(&(Buffer->Current))))) ) break;
WGJAELA_n+=VGJAELA_buffersize;
XGJAELA_bufs = (*(&(XGJAELA_bufs->Rest)));
}
 /* line 428: */
 /* line 429: */
YGJAELA = WGJAELA_n;
} 
A_PROC_EXIT(charswritten);
return( YGJAELA );
} 
#undef NL

A68_INT  CHJAELA_outchar(A68_CHAR  C, A68_226 * Buffer, A68_97  Msg)
{ 
A68_VC  DHJAELA;  /* OPERATORS - simple index */
A68_INT * EHJAELA;  /* YIELD */
A68_INT  FHJAELA;  /* YIELD */
A68_CHAR * GHJAELA;  /* YIELD */
A68_INT  HHJAELA;  /* clause result */
A_PROC_ENTRY(outchar);
 /* line 434: */
 /* line 435: */
{ 
DHJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
EHJAELA = (&(Buffer->Index)) ;
FHJAELA = (*EHJAELA)+=1 ;
GHJAELA = (&A_VINDEX(DHJAELA,FHJAELA)) ;
(*GHJAELA) = C;
 /* line 436: */
 /* line 437: */
if ( ((*(&(Buffer->Index)))==(*(&((*(&(Buffer->Current)))->Rvc))).upb) )
{ 
 /* line 438: */
MFJAELA_writebuffer(Buffer, Msg);
} 
 /* line 439: */
 /* line 440: */
HHJAELA = 1;
} 
A_PROC_EXIT(outchar);
return( HHJAELA );
} 
#undef NL

A68_INT  LHJAELA_outchars(A68_VC  Str, A68_226 * Buffer, A68_97  Msg)
{ 
A68_INT  MHJAELA_upb;
A68_INT  NHJAELA_firstpart;
A68_VC  OHJAELA;  /* OPERATORS - trim index */
A68_VC  PHJAELA;  /* OPERATORS - trim index */
A68_INT * QHJAELA;  /* YIELD */
A68_VC  RHJAELA;  /* OPERATORS - trim index */
A68_VC  SHJAELA;  /* OPERATORS - trim index */
A68_VC  THJAELA;  /* YIELD */
A68_INT  UHJAELA;  /* clause result */
A_PROC_ENTRY(outchars);
 /* line 443: */
 /* line 444: */
{ 
MHJAELA_upb = (*(&((*(&(Buffer->Current)))->Rvc))).upb;
 /* line 445: */
 /* line 446: */
if ( ((MHJAELA_upb-(*(&(Buffer->Index))))<Str.upb) )
{ 
NHJAELA_firstpart = (MHJAELA_upb-(*(&(Buffer->Index))));
 /* line 447: */
LHJAELA_outchars(A_VTRIM(OHJAELA,(Str),A_VTSCRIPT(&(OHJAELA.upb),(Str).upb,1,NHJAELA_firstpart)), Buffer, Msg);
 /* line 448: */
 /* line 449: */
LHJAELA_outchars(A_VTRIM(PHJAELA,(Str),A_VTSCRIPT(&(PHJAELA.upb),(Str).upb,(NHJAELA_firstpart+1),(Str).upb)), Buffer, Msg);
} 
else
{ 
QHJAELA = (&(Buffer->Index)) ;
(*QHJAELA)+=Str.upb;
 /* line 450: */
 /* line 451: */
RHJAELA = (*(&((*(&(Buffer->Current)))->Rvc))) ;
THJAELA = A_VTRIM(SHJAELA,(RHJAELA),A_VTSCRIPT(&(SHJAELA.upb),(RHJAELA).upb,(((*(&(Buffer->Index)))-Str.upb)+1),(*(&(Buffer->Index))))) ;
A_VASSIGN2(Str,THJAELA,A68_CHAR );
 /* line 452: */
 /* line 453: */
if ( ((*(&(Buffer->Index)))==MHJAELA_upb) )
{ 
 /* line 454: */
 /* line 455: */
MFJAELA_writebuffer(Buffer, Msg);
} 
} 
 /* line 456: */
 /* line 457: */
UHJAELA = Str.upb;
} 
A_PROC_EXIT(outchars);
return( UHJAELA );
} 
#undef NL

A68_INT  YHJAELA_outint2(A68_INT  I, A68_226 * Buffer, A68_97  Msg)
{ 
A68_BOOL  ZHJAELA;  /* optbool result */
A68_INT  AIJAELA;  /* clause result */
A68_BOOL  BIJAELA;  /* optbool result */
A68_31  DIJAELA_generator;   /* proc value of non-global proc */
A68_VC  JIJAELA;  /* avoid structure result */
A68_VC  IIJAELA_line;
A68_INT  KIJAELA_l;
A68_BITS  LIJAELA_b;
A68_INT  MIJAELA;  /* YIELD */
A68_CHAR * NIJAELA;  /* YIELD */
A68_BOOL  OIJAELA;  /* clause result */
A68_INT  PIJAELA_charcount;
A68_VC  QIJAELA;  /* OPERATORS - trim index */
A_PROC_ENTRY(outint2);
 /* line 473: */
 /* line 474: */
{ 
ZHJAELA = (I>=HXIAELA_min_int_value);
if ( ZHJAELA )
{ /* line 475: */
ZHJAELA = (I<=IXIAELA_max_int_value);
}
if ( ZHJAELA )
{ 
 /* line 477: */
AIJAELA = CHJAELA_outchar((A68_CHAR)(I+JXIAELA_int_offset), Buffer, Msg);
} 
else
{ 
BIJAELA = (I<=LXIAELA_maxintinchar);
if ( BIJAELA )
{ /* line 478: */
BIJAELA = (I>IXIAELA_max_int_value);
}
if ( BIJAELA )
{ 
CHJAELA_outchar((A68_CHAR)DXIAELA_in1bytetok, Buffer, Msg);
 /* line 479: */
CHJAELA_outchar((A68_CHAR)I, Buffer, Msg);
 /* line 481: */
AIJAELA = 2;
} 
else
{ 
A_CLOSURE( DIJAELA_generator, EIJAELA_generator, FIJAELA_generator );
A_CALLPROC(DIJAELA_generator,(A68_TRUE, &JIJAELA),(A68_TRUE, &JIJAELA,(DIJAELA_generator).nonlocals));
IIJAELA_line = JIJAELA;
 /* line 482: */
KIJAELA_l = (QVCAOST_charsperint+1);
 /* line 483: */
LIJAELA_b = (A68_BITS )I;
 /* line 484: */
for ( ;; )
{ 
MIJAELA = KIJAELA_l-=1 ;
NIJAELA = (&A_VINDEX(IIJAELA_line,MIJAELA)) ;
(*NIJAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(LIJAELA_b&(A68_BITS )MXIAELA_intmask);
 /* line 485: */
LIJAELA_b = A_SHR(LIJAELA_b,PVCAOST_bitsperchar);
 /* line 486: */
 /* line 487: */
OIJAELA = (LIJAELA_b!=00U);
if ( !OIJAELA ) break;
/*SKIP*/;
}
 /* line 488: */
PIJAELA_charcount = CHJAELA_outchar((A68_CHAR)((GXIAELA_in4bytetok+1)-KIJAELA_l), Buffer, Msg);
 /* line 489: */
PIJAELA_charcount+=LHJAELA_outchars(A_VTRIM(QIJAELA,(IIJAELA_line),A_VTSCRIPT(&(QIJAELA.upb),(IIJAELA_line).upb,KIJAELA_l,(IIJAELA_line).upb)), Buffer, Msg);
 /* line 490: */
 /* line 491: */
 /* line 492: */
AIJAELA = PIJAELA_charcount;
} 
} 
} 
A_PROC_EXIT(outint2);
return( AIJAELA );
} 
#undef NL

A68_INT  UIJAELA_outid2(A68_VC  Id, A68_226 * Buffer, A68_97  Msg)
{ 
A68_INT  VIJAELA_charcount;
A68_INT  WIJAELA;  /* clause result */
A_PROC_ENTRY(outid2);
 /* line 495: */
 /* line 496: */
{ 
VIJAELA_charcount = 0;
 /* line 497: */
 /* line 498: */
if ( A_VSTRUCTCOMP(Id,NTCAOST_nilid) )
{ 
VIJAELA_charcount = CHJAELA_outchar((A68_CHAR)AXIAELA_ident_tok, Buffer, Msg);
 /* line 499: */
 /* line 501: */
VIJAELA_charcount+=CHJAELA_outchar((A68_CHAR)0, Buffer, Msg);
} 
else
{ 
 /* line 502: */
if ( (Id.upb<KXIAELA_max_ident_size) )
{ 
VIJAELA_charcount = CHJAELA_outchar((A68_CHAR)(BXIAELA_ident_range_start+Id.upb), Buffer, Msg);
 /* line 503: */
 /* line 505: */
VIJAELA_charcount+=LHJAELA_outchars(Id, Buffer, Msg);
} 
else
{ 
VIJAELA_charcount = CHJAELA_outchar((A68_CHAR)AXIAELA_ident_tok, Buffer, Msg);
 /* line 506: */
VIJAELA_charcount+=YHJAELA_outint2(Id.upb, Buffer, Msg);
 /* line 507: */
 /* line 508: */
VIJAELA_charcount+=LHJAELA_outchars(Id, Buffer, Msg);
} 
} 
 /* line 509: */
 /* line 510: */
WIJAELA = VIJAELA_charcount;
} 
A_PROC_EXIT(outid2);
return( WIJAELA );
} 
#undef NL

A68_INT  AJJAELA_outbool(A68_BOOL  Flag, A68_226 * Buffer, A68_97  Msg)
{ 
A68_INT  BJJAELA;  /* clause result */
A_PROC_ENTRY(outbool);
 /* line 513: */
if ( Flag )
{ 
 /* line 514: */
BJJAELA = YHJAELA_outint2(1, Buffer, Msg);
} 
else
{ 
 /* line 515: */
BJJAELA = YHJAELA_outint2(0, Buffer, Msg);
} 
A_PROC_EXIT(outbool);
return( BJJAELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void NWIAELA(void)   /* initialise DECS databasebuffers */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/databasebuffers.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/su_keepsake.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/libmessages.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_178  XWIAELA;  /* avoid structure result */
A68_219  EJJAELA;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KUDAELA();   /* USE su_keepsake */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
IZAAELA();   /* USE libmessages */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/databasebuffers.a68";
A_config.translation_time = "Tue Apr  4 10:34:04 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MWIAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:34:04 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS databasebuffers);
UEAALIB_a68config(LGAALIB_configinfo, RWIAELA);
 /* line 64: */
TWIAELA_generator( A68_TRUE, &XWIAELA );
WWIAELA_nodps = XWIAELA;
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 99: */
HXIAELA_min_int_value = (-20);
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 105: */
LXIAELA_maxintinchar = (DXIAELA_in1bytetok-1);
 /* line 106: */
MXIAELA_intmask = (SVCAOST_maxchar-1);
 /* line 109: */
 /* line 110: */
NXIAELA_nilrvclist = (A68_224 *)A68_NIL;
 /* line 112: */
 /* line 127: */
 /* line 129: */
 /* line 131: */
OXIAELA_nilbuffer = (A68_226 *)A68_NIL;
 /* line 134: */
PXIAELA_invalid = (-1);
 /* line 136: */
 /* line 140: */
 /* line 150: */
 /* line 158: */
 /* line 168: */
 /* line 173: */
 /* line 174: */
 /* line 176: */
 /* line 246: */
 /* line 254: */
 /* line 265: */
 /* line 273: */
 /* line 281: */
 /* line 292: */
 /* line 322: */
 /* line 332: */
 /* line 347: */
 /* line 353: */
 /* line 359: */
 /* line 366: */
 /* line 378: */
 /* line 381: */
 /* line 391: */
 /* line 420: */
 /* line 433: */
 /* line 442: */
 /* line 472: */
 /* line 494: */
 /* line 512: */
 /* line 517: */
CJJAELA_initptr = WACAELA_illegalptr;
 /* line 519: */
EJJAELA.fn.fn_global = QHEAELA_keepsake_file;
EJJAELA.nonlocals = A68_NIL;
DJJAELA_database_file = EJJAELA;
 /* line 522: */
 /* line 523: */
 /* line 545: */
/*SKIP*/;
A_PROC_EXIT(DECS databasebuffers);
} 
#undef NL
/* end of translation of ./a68files/databasebuffers.a68 */
