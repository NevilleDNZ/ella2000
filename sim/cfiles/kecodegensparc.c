
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
/* UNAME:SHMASIM */
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

A_PROCEDURE(A68_BOOL ,A68t158,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE111) BOOL */

A_PROCEDURE(A68_BITS *,A68t159,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE97) REF BITS */

A_PROCEDURE(A68_VOID ,A68t160,(A68_BITS *,struct A68t97 ),(A68_BITS *,struct A68t97 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF BITS,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(A68_BITS *,struct A68t97 ,A68_VC *),(A68_BITS *,struct A68t97 ,A68_VC *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF BITS,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t32 ,struct A68t97 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE32,MODE97,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t32 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE32,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,struct A68t97 ,struct A68t97 *),(A68_INT ,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_BOOL ,struct A68t142 *),(A68_BOOL ,struct A68t142 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(BOOL) MODE142 */
struct A68t167{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169) VOID */
struct A68t169 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t169  A68_169 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t170,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t171,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(BITS,BITS) BITS */
struct A68t173 ;

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE173,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(CHAR) VOID */
struct A68t175 ;

A_PROCEDURE(A68_INT ,A68t174,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE175) INT */

A_PROCEDURE(A68_CHAR ,A68t175,(void),(void *));
typedef struct A68t175  A68_175 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t176,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t177,(A68_INT ),(A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t179,(A68_VC *),(A68_VC *,void *));
typedef struct A68t179  A68_179 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t180,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t182{
A68_INT  Svoid;
A_PAD_INT(PAD_36)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Snull;
A_PAD_INT(PAD_37)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT)  */
struct A68t184{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_38)
A68_INT  Upb;
A_PAD_INT(PAD_39)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t185{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t186{
A68_INT  No;
A_PAD_INT(PAD_40)
struct A68t185  T;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,MODE185)  */
struct A68t188 { A68_INT mode; union {
struct A68t187 * mode1;
struct A68t184 * mode2;
struct A68t185 * mode3;
struct A68t189 * mode4;
struct A68t186 * mode5;
struct A68t190 * mode6;
struct A68t191 * mode7;
struct A68t182  mode8;
struct A68t183  mode9;
} data; };
typedef struct A68t188  A68_188 ;    /* UNION(REF MODE187,REF MODE184,REF MODE185,REF MODE189,REF MODE186,REF MODE190,REF MODE191,MODE182,MODE183)  */
struct A68t187{
A68_VC  Id;
struct A68t188  T;
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,MODE188,REF MODE187)  */
struct A68t189{
A68_INT  No;
A_PAD_INT(PAD_41)
struct A68t188  Type;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,MODE188)  */
struct A68t190{
struct A68t188  From;
struct A68t188  To;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE188,MODE188)  */
struct A68t191{
struct A68t188  T;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE188,REF MODE191)  */
struct A68t192 { A68_INT mode; union {
struct A68t187 * mode1;
struct A68t184 * mode2;
struct A68t185 * mode3;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF MODE187,REF MODE184,REF MODE185)  */
struct A68t193{
A68_INT  Svvoid;
A_PAD_INT(PAD_42)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Svnull;
A_PAD_INT(PAD_43)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t188  Type;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE188)  */
struct A68t196{
struct A68t184 * Type;
A68_INT  Value;
A_PAD_INT(PAD_44)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE184,INT)  */
struct A68t197{
struct A68t185 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_45)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE185,CHAR)  */
struct A68t198{
struct A68t186 * Type;
A68_VC  Value;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE186,REF MODE26)  */
struct A68t200 { A68_INT mode; union {
struct A68t195 * mode1;
struct A68t196 * mode2;
struct A68t197 * mode3;
struct A68t198 * mode4;
struct A68t199 * mode5;
struct A68t201 * mode6;
struct A68t202 * mode7;
struct A68t193  mode8;
struct A68t194  mode9;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE201,REF MODE202,MODE193,MODE194)  */
struct A68t199{
struct A68t187 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_46)
struct A68t200  Assoc;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(REF MODE187,INT,MODE200)  */
struct A68t201{
struct A68t200  Head;
struct A68t201 * Tail;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE200,REF MODE201)  */
struct A68t202{
struct A68t200  From;
struct A68t200  To;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE200,MODE200)  */
struct A68t203{
A68_INT  Instoffset;
A_PAD_INT(PAD_47)
A68_INT  Offset;
A_PAD_INT(PAD_48)
A68_INT  Size;
A_PAD_INT(PAD_49)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t203 ,A68t205);
typedef struct A68t205  A68_205 ;    /* VECTOR [] MODE203 */
struct A68t204{
struct A68t188  Type;
struct A68t205  Blocks;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE188,REF MODE205)  */
struct A68t206{
struct A68t204  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_50)
A68_INT  Ramsize;
A_PAD_INT(PAD_51)
A68_INT  Step;
A_PAD_INT(PAD_52)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE204,INT,INT,INT)  */
struct A68t207{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_53)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t207 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE207 */
struct A68t208{
struct A68t206 * Ram;
struct A68t204  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_54)
struct A68t209  Body;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(REF MODE206,MODE204,INT,REF MODE209)  */
struct A68t210{
A68_INT  Fn;
A_PAD_INT(PAD_55)
A68_INT  Instance;
A_PAD_INT(PAD_56)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,INT)  */
struct A68t211{
struct A68t204 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_57)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE204,INT)  */
struct A68t212 { A68_INT mode; union {
struct A68t210  mode1;
struct A68t211  mode2;
} data; };
typedef struct A68t212  A68_212 ;    /* UNION(MODE210,MODE211)  */
struct A68t213 { A68_INT mode; union {
struct A68t210  mode1;
struct A68t204  mode2;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(MODE210,MODE204)  */
struct A68t214{
struct A68t212  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_58)
A68_INT  Base;
A_PAD_INT(PAD_59)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE212,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t200 ,struct A68t188 *),(struct A68t200 ,struct A68t188 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE200) MODE188 */

A_PROCEDURE(A68_BOOL ,A68t216,(struct A68t188 ,struct A68t188 ),(struct A68t188 ,struct A68t188 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE188,MODE188) BOOL */

A_PROCEDURE(A68_BOOL ,A68t217,(struct A68t200 ,struct A68t200 ),(struct A68t200 ,struct A68t200 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE200,MODE200) BOOL */

A_PROCEDURE(A68_BOOL ,A68t218,(struct A68t204 ,struct A68t204 ),(struct A68t204 ,struct A68t204 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE204,MODE204) BOOL */

A_PROCEDURE(A68_BOOL ,A68t219,(struct A68t210 ,struct A68t210 ),(struct A68t210 ,struct A68t210 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE210,MODE210) BOOL */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t211 ,struct A68t211 ),(struct A68t211 ,struct A68t211 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE211,MODE211) BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t212 ,struct A68t212 ),(struct A68t212 ,struct A68t212 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE212,MODE212) BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t214 ,struct A68t214 ),(struct A68t214 ,struct A68t214 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE214,MODE214) BOOL */

A_PROCEDURE(struct A68t191 *,A68t223,(struct A68t191 *,struct A68t191 *),(struct A68t191 *,struct A68t191 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE191,REF MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t205 ,struct A68t205 ,struct A68t205 *),(struct A68t205 ,struct A68t205 ,struct A68t205 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE205,REF MODE205) REF MODE205 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t226,(A68_VC ),(A68_VC ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t227,(A68_VC *),(A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_CHAR *,A68t229,(A68_INT ),(A68_INT ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(INT) REF CHAR */
struct A68t231 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t231 ),(struct A68t231 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE231) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t232{
A68_INT  Location;
A_PAD_INT(PAD_60)
A68_INT  Size;
A_PAD_INT(PAD_61)
A68_BOOL  Canoptimise;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,INT,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t233,(struct A68t232 ,struct A68t232 ),(struct A68t232 ,struct A68t232 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE232,MODE232) BOOL */
struct A68t234{
A68_BITS  Rs1;
A_PAD_BITS(PAD_63)
A68_BITS  Rs2;
A_PAD_BITS(PAD_64)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(BITS,BITS)  */
struct A68t235{
A68_BITS  Rs1;
A_PAD_BITS(PAD_65)
A68_INT  Imm;
A_PAD_INT(PAD_66)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(BITS,INT)  */
struct A68t236{
A68_INT  Imm;
A_PAD_INT(PAD_67)
A68_BITS  Rd;
A_PAD_BITS(PAD_68)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT,BITS)  */
struct A68t237 { A68_INT mode; union {
struct A68t234  mode1;
struct A68t235  mode2;
} data; };
typedef struct A68t237  A68_237 ;    /* UNION(MODE234,MODE235)  */
struct A68t238{
A68_BITS  Rs1;
A_PAD_BITS(PAD_69)
A68_BITS  Rs2;
A_PAD_BITS(PAD_70)
A68_BITS  Rd;
A_PAD_BITS(PAD_71)
};
typedef struct A68t238  A68_238 ;    /* STRUCT(BITS,BITS,BITS)  */
struct A68t239{
A68_BITS  Rs1;
A_PAD_BITS(PAD_72)
A68_INT  Imm;
A_PAD_INT(PAD_73)
A68_BITS  Rd;
A_PAD_BITS(PAD_74)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(BITS,INT,BITS)  */
struct A68t240 { A68_INT mode; union {
struct A68t238  mode1;
struct A68t239  mode2;
} data; };
typedef struct A68t240  A68_240 ;    /* UNION(MODE238,MODE239)  */
struct A68t241{
A68_BITS  Mask;
A_PAD_BITS(PAD_75)
A68_RC  M1a;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(BITS,MODE27)  */
struct A68t242{
A68_BITS  Mask;
A_PAD_BITS(PAD_76)
A68_RC  M1b;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(BITS,MODE27)  */
struct A68t243{
A68_BITS  Mask;
A_PAD_BITS(PAD_77)
A68_RC  M2a;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(BITS,MODE27)  */
struct A68t244{
A68_BITS  Mask;
A_PAD_BITS(PAD_78)
A68_RC  M2b;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(BITS,MODE27)  */
struct A68t245{
A68_BITS  Mask;
A_PAD_BITS(PAD_79)
A68_RC  M2c;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(BITS,MODE27)  */
struct A68t246{
A68_BITS  Mask;
A_PAD_BITS(PAD_80)
A68_RC  M2d;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(BITS,MODE27)  */
struct A68t247{
A68_BITS  Mask;
A_PAD_BITS(PAD_81)
A68_RC  M3a;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(BITS,MODE27)  */
struct A68t248{
A68_BITS  Mask;
A_PAD_BITS(PAD_82)
A68_RC  M3c;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(BITS,MODE27)  */
struct A68t249{
A68_BITS  Mask;
A_PAD_BITS(PAD_83)
A68_RC  M3d;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(BITS,MODE27)  */
struct A68t250{
A68_BITS  Mask;
A_PAD_BITS(PAD_84)
A68_RC  M3e;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(BITS,MODE27)  */
struct A68t251{
A68_BITS  Mask;
A_PAD_BITS(PAD_85)
A68_RC  M3b;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(BITS,MODE27)  */

A_PROCEDURE(A68_BITS ,A68t252,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BITS) BITS */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t241 ,A68_INT ),(struct A68t241 ,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE241,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t242 ,A68_INT ),(struct A68t242 ,A68_INT ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE242,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t243 ,A68_INT ),(struct A68t243 ,A68_INT ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE243,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t244 ,struct A68t236 ),(struct A68t244 ,struct A68t236 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE244,MODE236) VOID */
struct A68t257{
struct A68t245  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_86)
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE245,BITS)  */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t257 ,A68_INT ),(struct A68t257 ,A68_INT ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE257,INT) VOID */
struct A68t259{
struct A68t246  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_87)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE246,BITS)  */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t259 ,A68_INT ),(struct A68t259 ,A68_INT ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE259,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t247 ,struct A68t240 ),(struct A68t247 ,struct A68t240 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE247,MODE240) VOID */
struct A68t262{
struct A68t251  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_88)
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE251,BITS)  */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t262 ,struct A68t237 ),(struct A68t262 ,struct A68t237 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE262,MODE237) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t248 ,A68_BITS ),(struct A68t248 ,A68_BITS ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE248,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t249 ,struct A68t237 ),(struct A68t249 ,struct A68t237 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE249,MODE237) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t250 ,struct A68t240 ),(struct A68t250 ,struct A68t240 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE250,MODE240) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t241 ,struct A68t232 *),(struct A68t241 ,struct A68t232 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE241,REF MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t242 ,struct A68t232 *),(struct A68t242 ,struct A68t232 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE242,REF MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t257 ,struct A68t232 *),(struct A68t257 ,struct A68t232 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE257,REF MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t259 ,struct A68t232 *),(struct A68t259 ,struct A68t232 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE259,REF MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t245 ,A68_BITS ,struct A68t257 *),(struct A68t245 ,A68_BITS ,struct A68t257 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE245,BITS) MODE257 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t246 ,A68_BITS ,struct A68t259 *),(struct A68t246 ,A68_BITS ,struct A68t259 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE246,BITS) MODE259 */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t251 ,A68_BITS ,struct A68t262 *),(struct A68t251 ,A68_BITS ,struct A68t262 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE251,BITS) MODE262 */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t275,(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ),(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(BITS,INT,BITS,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t276,(A68_INT ,A68_BITS ),(A68_INT ,A68_BITS ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(INT,BITS) VOID */
struct A68t278 ;
struct A68t279 ;

A_PROCEDURE(A68_BOOL ,A68t277,(struct A68t278 *,struct A68t279 ),(struct A68t278 *,struct A68t279 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE278,MODE279) BOOL */
A_VECTOR(struct A68t284 ,A68t283);
typedef struct A68t283  A68_283 ;    /* VECTOR [] MODE284 */
struct A68t285 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
A68_CHAR  mode3;
} data; };
typedef struct A68t285  A68_285 ;    /* UNION(BOOL,INT,CHAR)  */
struct A68t287{
A68_BOOL  Ircallinst_flag;
A_PAD_BOOL(PAD_89)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(BOOL)  */
struct A68t288{
A68_INT  Copy_stack_number;
A_PAD_INT(PAD_90)
A68_BOOL  Register_flag;
A_PAD_BOOL(PAD_91)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,BOOL)  */
struct A68t289{
A68_VC  Constant;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE26)  */
struct A68t290{
A68_INT  Sumconstant;
A_PAD_INT(PAD_92)
A68_BOOL  Callinst_flag;
A_PAD_BOOL(PAD_93)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT,BOOL)  */
struct A68t291{
A68_BOOL  Indcallinst_flag;
A_PAD_BOOL(PAD_94)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BOOL)  */
struct A68t292{
A68_BITS  Condition;
A_PAD_BITS(PAD_95)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(BITS)  */
struct A68t286 { A68_INT mode; union {
struct A68t287  mode1;
struct A68t288  mode2;
struct A68t289  mode3;
struct A68t290  mode4;
struct A68t291  mode5;
struct A68t292  mode6;
} data; };
typedef struct A68t286  A68_286 ;    /* UNION(MODE287,MODE288,MODE289,MODE290,MODE291,MODE292,VOID)  */
struct A68t284{
struct A68t285  Location_type;
struct A68t286  Symbolic_state;
A68_INT  Alloc_register;
A_PAD_INT(PAD_96)
A68_INT  Bit_length;
A_PAD_INT(PAD_97)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE285,MODE286,INT,INT)  */
struct A68t280{
struct A68t283  Stack_locations;
A68_INT  Top;
A_PAD_INT(PAD_98)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE283,INT)  */
struct A68t281{
A68_INT  Window_offset;
A_PAD_INT(PAD_99)
A68_INT  Register_ind;
A_PAD_INT(PAD_100)
A68_INT  Memory_offset;
A_PAD_INT(PAD_101)
A68_INT  Max_offset;
A_PAD_INT(PAD_102)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t282{
A68_INT  Current_size;
A_PAD_INT(PAD_103)
A68_INT  Max_size;
A_PAD_INT(PAD_104)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,INT)  */
struct A68t278{
struct A68t280  Location_stack;
struct A68t281  Rm_allocator;
struct A68t282  Size_recorder;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE280,MODE281,MODE282)  */
struct A68t279{
A68_INT  Lab;
A_PAD_INT(PAD_105)
A68_VC  Tag;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t293{
struct A68t279  Labelint;
struct A68t279  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_106)
A68_INT  Evalfn;
A_PAD_INT(PAD_107)
A68_INT  History;
A_PAD_INT(PAD_108)
A68_INT  Declid;
A_PAD_INT(PAD_109)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE279,MODE279,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t293 *,A68t294,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE293 */
struct A68t295{
A68_INT  Ws;
A_PAD_INT(PAD_110)
A68_BOOL  Up;
A_PAD_BOOL(PAD_111)
A68_INT  Sizeunit;
A_PAD_INT(PAD_112)
struct A68t32  Al;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT,BOOL,INT,REF MODE32)  */
struct A68t296{
struct A68t231  Ferryout;
struct A68t36  Flt;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE231,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t231 ,struct A68t36 ,struct A68t296 *),(struct A68t231 ,struct A68t36 ,struct A68t296 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE231,MODE36) MODE296 */
struct A68t298{
struct A68t231  Ferryin;
struct A68t36  Flt;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE231,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t231 ,struct A68t36 ,struct A68t298 *),(struct A68t231 ,struct A68t36 ,struct A68t298 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE231,MODE36) MODE298 */

A_PROCEDURE(A68_VOID ,A68t300,(A68_BOOL ,A68_VC ),(A68_BOOL ,A68_VC ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(BOOL,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(A68_BOOL ,struct A68t296 ),(A68_BOOL ,struct A68t296 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(BOOL,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(A68_BOOL *,struct A68t298 ),(A68_BOOL *,struct A68t298 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF BOOL,MODE298) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(A68_INT ,struct A68t296 ),(A68_INT ,struct A68t296 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(A68_INT *,struct A68t298 ),(A68_INT *,struct A68t298 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF INT,MODE298) VOID */

A_PROCEDURE(A68_VOID ,A68t305,(A68_VC ,struct A68t296 ),(A68_VC ,struct A68t296 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE26,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t306,(A68_VC *,struct A68t298 ),(A68_VC *,struct A68t298 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF REF MODE26,MODE298) VOID */
struct A68t307{
A68_INT  Machine_offset;
A_PAD_INT(PAD_113)
struct A68t307 * Rest;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT,REF MODE307)  */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t307 *,A68_VC ),(struct A68t307 *,A68_VC ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE307,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t309,(struct A68t307 **),(struct A68t307 **,void *));
typedef struct A68t309  A68_309 ;    /* PROC(REF REF MODE307) INT */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t307 **,A68_INT ),(struct A68t307 **,A68_INT ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF REF MODE307,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t311,(struct A68t307 *),(struct A68t307 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE307) BOOL */
struct A68t312{
A68_VC  Mem;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t313,(struct A68t312 *),(struct A68t312 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC MODE312 */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t312 *,A68_INT ),(struct A68t312 *,A68_INT ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(REF MODE312,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t312 *),(struct A68t312 *,void *));
typedef struct A68t315  A68_315 ;    /* PROC(REF MODE312) VOID */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t312 ,A68_VC ),(struct A68t312 ,A68_VC ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE312,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t317,(struct A68t312 *),(struct A68t312 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE312) INT */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t312 *,struct A68t296 ),(struct A68t312 *,struct A68t296 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE312,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t312 *,struct A68t298 ),(struct A68t312 *,struct A68t298 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE312,MODE298) VOID */
struct A68t320{
A68_INT  Off;
A_PAD_INT(PAD_114)
A68_INT  Len;
A_PAD_INT(PAD_115)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t321,(A68_INT ,A68_INT ,struct A68t320 *),(A68_INT ,A68_INT ,struct A68t320 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(INT,INT) MODE320 */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t312 *,struct A68t320 ,A68_VC *),(struct A68t312 *,struct A68t320 ,A68_VC *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE312,MODE320) REF MODE26 */
struct A68t323{
A68_VC  W;
A68_INT  O;
A_PAD_INT(PAD_116)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t324,(A68_VC ,A68_INT ,struct A68t323 *),(A68_VC ,A68_INT ,struct A68t323 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE26,INT) MODE323 */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t312 *,struct A68t323 ),(struct A68t312 *,struct A68t323 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE312,MODE323) VOID */

A_PROCEDURE(A68_VOID ,A68t326,(A68_VC ,struct A68t279 *),(A68_VC ,struct A68t279 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE26) MODE279 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t279 ,A68_VC ),(struct A68t279 ,A68_VC ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE279,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t279 *,struct A68t296 ),(struct A68t279 *,struct A68t296 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE279,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t279 *,struct A68t298 ),(struct A68t279 *,struct A68t298 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE279,MODE298) VOID */

A_PROCEDURE(A68_BOOL ,A68t330,(struct A68t279 *,struct A68t279 ),(struct A68t279 *,struct A68t279 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE279,MODE279) BOOL */
struct A68t331 { A68_INT mode; union {
A68_INT  mode1;
struct A68t279  mode2;
} data; };
typedef struct A68t331  A68_331 ;    /* UNION(INT,MODE279,VOID)  */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t331 ,A68_VC ),(struct A68t331 ,A68_VC ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE331,MODE26) VOID */
struct A68t333{
struct A68t279  Label;
A68_INT  Machine_offset;
A_PAD_INT(PAD_117)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE279,INT)  */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t279 ,A68_INT ,struct A68t333 *),(struct A68t279 ,A68_INT ,struct A68t333 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE279,INT) MODE333 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t333 ,A68_VC ),(struct A68t333 ,A68_VC ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE333,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t333 *,struct A68t296 ),(struct A68t333 *,struct A68t296 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE333,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t333 *,struct A68t298 ),(struct A68t333 *,struct A68t298 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(REF MODE333,MODE298) VOID */
struct A68t338{
struct A68t333  Labeled_offset;
struct A68t338 * Rest;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE333,REF MODE338)  */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t338 *,A68_VC ),(struct A68t338 *,A68_VC ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE338,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t338 *,struct A68t296 ),(struct A68t338 *,struct A68t296 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE338,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t338 **,struct A68t298 ),(struct A68t338 **,struct A68t298 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF REF MODE338,MODE298) VOID */

A_PROCEDURE(A68_INT ,A68t342,(struct A68t338 *,struct A68t279 ),(struct A68t338 *,struct A68t279 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE338,MODE279) INT */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t338 **,struct A68t333 ),(struct A68t338 **,struct A68t333 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF REF MODE338,MODE333) VOID */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t338 **),(struct A68t338 **,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF REF MODE338) VOID */

A_PROCEDURE(A68_BOOL ,A68t345,(struct A68t338 *),(struct A68t338 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE338) BOOL */
struct A68t346{
struct A68t232  Machine_label;
struct A68t346 * Rest;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(MODE232,REF MODE346)  */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t346 *,A68_VC ),(struct A68t346 *,A68_VC ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE346,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t346 **,struct A68t232 *),(struct A68t346 **,struct A68t232 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF REF MODE346) MODE232 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t346 **,struct A68t232 ),(struct A68t346 **,struct A68t232 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF REF MODE346,MODE232) VOID */

A_PROCEDURE(A68_BOOL ,A68t350,(struct A68t346 *),(struct A68t346 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE346) BOOL */
struct A68t351{
struct A68t279  Label;
struct A68t346 * Machine_label_stack;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(MODE279,REF MODE346)  */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t279 ,struct A68t346 *,struct A68t351 *),(struct A68t279 ,struct A68t346 *,struct A68t351 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE279,REF MODE346) MODE351 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t351 ,A68_VC ),(struct A68t351 ,A68_VC ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE351,MODE26) VOID */
struct A68t354{
struct A68t351  Back_patch;
struct A68t354 * Rest;
};
typedef struct A68t354  A68_354 ;    /* STRUCT(MODE351,REF MODE354)  */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t354 *,A68_VC ),(struct A68t354 *,A68_VC ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE354,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t356,(struct A68t354 *),(struct A68t354 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE354) BOOL */

A_PROCEDURE(struct A68t346 *,A68t357,(struct A68t354 **,struct A68t279 ),(struct A68t354 **,struct A68t279 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF REF MODE354,MODE279) REF MODE346 */
struct A68t358{
struct A68t232  Ml;
struct A68t279  Lab;
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE232,MODE279)  */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t232 ,struct A68t279 ,struct A68t358 *),(struct A68t232 ,struct A68t279 ,struct A68t358 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE232,MODE279) MODE358 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t354 **,struct A68t358 ),(struct A68t354 **,struct A68t358 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF REF MODE354,MODE358) VOID */
struct A68t361{
A68_INT  Sort;
A_PAD_INT(PAD_118)
A68_INT  Size;
A_PAD_INT(PAD_119)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t361 ,A68_VC ),(struct A68t361 ,A68_VC ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE361,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t361 *,struct A68t296 ),(struct A68t361 *,struct A68t296 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE361,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t361 *,struct A68t298 ),(struct A68t361 *,struct A68t298 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE361,MODE298) VOID */
struct A68t365{
struct A68t361  Head;
struct A68t365 * Tail;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(MODE361,REF MODE365)  */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t365 *,A68_VC ),(struct A68t365 *,A68_VC ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE365,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t365 *,struct A68t296 ),(struct A68t365 *,struct A68t296 ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE365,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t365 **,struct A68t298 ),(struct A68t365 **,struct A68t298 ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF REF MODE365,MODE298) VOID */

A_PROCEDURE(A68_INT ,A68t369,(struct A68t365 *),(struct A68t365 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE365) INT */
struct A68t370{
struct A68t279  Label;
struct A68t365 * Input_params;
struct A68t365 * Output_params;
};
typedef struct A68t370  A68_370 ;    /* STRUCT(MODE279,REF MODE365,REF MODE365)  */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t279 ,struct A68t365 *,struct A68t365 *,struct A68t370 *),(struct A68t279 ,struct A68t365 *,struct A68t365 *,struct A68t370 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE279,REF MODE365,REF MODE365) MODE370 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t370 ,A68_VC ),(struct A68t370 ,A68_VC ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE370,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t370 *,struct A68t296 ),(struct A68t370 *,struct A68t296 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE370,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t370 *,struct A68t298 ),(struct A68t370 *,struct A68t298 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE370,MODE298) VOID */
struct A68t375{
struct A68t279  Label;
struct A68t365 * Spec;
};
typedef struct A68t375  A68_375 ;    /* STRUCT(MODE279,REF MODE365)  */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t279 ,struct A68t365 *,struct A68t375 *),(struct A68t279 ,struct A68t365 *,struct A68t375 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE279,REF MODE365) MODE375 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t375 ,A68_VC ),(struct A68t375 ,A68_VC ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE375,MODE26) VOID */
struct A68t378{
struct A68t375  Labeled_spec;
struct A68t378 * Rest;
};
typedef struct A68t378  A68_378 ;    /* STRUCT(MODE375,REF MODE378)  */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t378 *,A68_VC ),(struct A68t378 *,A68_VC ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE378,MODE26) VOID */

A_PROCEDURE(struct A68t365 *,A68t380,(struct A68t378 **,struct A68t279 ),(struct A68t378 **,struct A68t279 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF REF MODE378,MODE279) REF MODE365 */

A_PROCEDURE(A68_BOOL ,A68t381,(struct A68t378 *,struct A68t279 ),(struct A68t378 *,struct A68t279 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE378,MODE279) BOOL */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t378 **,struct A68t375 ),(struct A68t378 **,struct A68t375 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF REF MODE378,MODE375) VOID */
struct A68t383{
struct A68t370  Labeled_params;
struct A68t383 * Rest;
};
typedef struct A68t383  A68_383 ;    /* STRUCT(MODE370,REF MODE383)  */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t383 *,A68_VC ),(struct A68t383 *,A68_VC ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE383,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t383 *,struct A68t296 ),(struct A68t383 *,struct A68t296 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE383,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t383 **,struct A68t298 ),(struct A68t383 **,struct A68t298 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF REF MODE383,MODE298) VOID */
A_ROW(struct A68t365 *,A68t387,1);
typedef struct A68t387  A68_387 ;    /* [] REF MODE365 */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t383 *,struct A68t279 ,struct A68t387 *),(struct A68t383 *,struct A68t279 ,struct A68t387 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE383,MODE279) MODE387 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t383 **,struct A68t370 ),(struct A68t383 **,struct A68t370 ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF REF MODE383,MODE370) VOID */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t383 **),(struct A68t383 **,void *));
typedef struct A68t390  A68_390 ;    /* PROC(REF REF MODE383) VOID */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t282 *),(struct A68t282 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC MODE282 */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t282 ,A68_VC ),(struct A68t282 ,A68_VC ,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE282,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t282 *,struct A68t296 ),(struct A68t282 *,struct A68t296 ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE282,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t282 *,struct A68t298 ),(struct A68t282 *,struct A68t298 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE282,MODE298) VOID */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t282 *),(struct A68t282 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE282) VOID */

A_PROCEDURE(A68_INT ,A68t396,(struct A68t282 *),(struct A68t282 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE282) INT */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t282 *,A68_INT ),(struct A68t282 *,A68_INT ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE282,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t281 *),(struct A68t281 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC MODE281 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t281 ,A68_VC ),(struct A68t281 ,A68_VC ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE281,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t281 *,struct A68t296 ),(struct A68t281 *,struct A68t296 ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE281,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t281 *,struct A68t298 ),(struct A68t281 *,struct A68t298 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE281,MODE298) VOID */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t281 *),(struct A68t281 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE281) VOID */

A_PROCEDURE(A68_BOOL ,A68t403,(struct A68t281 *),(struct A68t281 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE281) BOOL */

A_PROCEDURE(A68_INT ,A68t404,(struct A68t281 *),(struct A68t281 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE281) INT */

A_PROCEDURE(A68_VOID ,A68t405,(A68_BOOL ,struct A68t287 *),(A68_BOOL ,struct A68t287 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(BOOL) MODE287 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t287 ,A68_VC ),(struct A68t287 ,A68_VC ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE287,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t407,(A68_INT ,A68_BOOL ,struct A68t288 *),(A68_INT ,A68_BOOL ,struct A68t288 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(INT,BOOL) MODE288 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t288 ,A68_VC ),(struct A68t288 ,A68_VC ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE288,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t409,(A68_VC ,struct A68t289 *),(A68_VC ,struct A68t289 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE26) MODE289 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t289 ,A68_VC ),(struct A68t289 ,A68_VC ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE289,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t411,(A68_INT ,A68_BOOL ,struct A68t290 *),(A68_INT ,A68_BOOL ,struct A68t290 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(INT,BOOL) MODE290 */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t290 ,A68_VC ),(struct A68t290 ,A68_VC ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE290,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t413,(A68_BOOL ,struct A68t291 *),(A68_BOOL ,struct A68t291 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(BOOL) MODE291 */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t291 ,A68_VC ),(struct A68t291 ,A68_VC ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE291,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t415,(A68_BITS ,struct A68t292 *),(A68_BITS ,struct A68t292 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(BITS) MODE292 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t292 ,A68_VC ),(struct A68t292 ,A68_VC ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE292,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t286 ,A68_VC ),(struct A68t286 ,A68_VC ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE286,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t286 ,struct A68t286 ,struct A68t286 *),(struct A68t286 ,struct A68t286 ,struct A68t286 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE286,MODE286) MODE286 */

A_PROCEDURE(A68_BOOL ,A68t419,(struct A68t286 ),(struct A68t286 ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE286) BOOL */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t286 ,struct A68t286 *),(struct A68t286 ,struct A68t286 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE286) MODE286 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t284 ,A68_VC ),(struct A68t284 ,A68_VC ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE284,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t280 *),(struct A68t280 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC MODE280 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t280 ,A68_VC ),(struct A68t280 ,A68_VC ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE280,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t280 *,struct A68t280 *),(struct A68t280 *,struct A68t280 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE280) MODE280 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t280 *),(struct A68t280 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE280) VOID */

A_PROCEDURE(A68_INT ,A68t426,(struct A68t280 *),(struct A68t280 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE280) INT */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t280 *,struct A68t284 *),(struct A68t280 *,struct A68t284 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE280) MODE284 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t280 *,struct A68t284 ),(struct A68t280 *,struct A68t284 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE280,MODE284) VOID */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t280 *,A68_INT ,struct A68t284 *),(struct A68t280 *,A68_INT ,struct A68t284 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(REF MODE280,INT) MODE284 */
struct A68t430{
struct A68t284  Loc;
A68_INT  O;
A_PAD_INT(PAD_120)
};
typedef struct A68t430  A68_430 ;    /* STRUCT(MODE284,INT)  */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t284 ,A68_INT ,struct A68t430 *),(struct A68t284 ,A68_INT ,struct A68t430 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE284,INT) MODE430 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t280 *,struct A68t430 ),(struct A68t280 *,struct A68t430 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE280,MODE430) VOID */

A_PROCEDURE(A68_BOOL ,A68t433,(struct A68t280 *),(struct A68t280 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE280) BOOL */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t280 *,A68_INT ,struct A68t285 *),(struct A68t280 *,A68_INT ,struct A68t285 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE280,INT) MODE285 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t280 *,A68_INT ,struct A68t286 *),(struct A68t280 *,A68_INT ,struct A68t286 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE280,INT) MODE286 */

A_PROCEDURE(A68_INT ,A68t436,(struct A68t280 *,A68_INT ),(struct A68t280 *,A68_INT ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE280,INT) INT */
struct A68t437{
A68_INT  O;
A_PAD_INT(PAD_121)
struct A68t286  Ss;
};
typedef struct A68t437  A68_437 ;    /* STRUCT(INT,MODE286)  */

A_PROCEDURE(A68_VOID ,A68t438,(A68_INT ,struct A68t286 ,struct A68t437 *),(A68_INT ,struct A68t286 ,struct A68t437 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(INT,MODE286) MODE437 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t280 *,struct A68t437 ),(struct A68t280 *,struct A68t437 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE280,MODE437) VOID */
struct A68t440{
A68_INT  O;
A_PAD_INT(PAD_122)
A68_INT  Bl;
A_PAD_INT(PAD_123)
};
typedef struct A68t440  A68_440 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t441,(A68_INT ,A68_INT ,struct A68t440 *),(A68_INT ,A68_INT ,struct A68t440 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(INT,INT) MODE440 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t280 *,struct A68t440 ),(struct A68t280 *,struct A68t440 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE280,MODE440) VOID */
struct A68t443{
A68_INT  O;
A_PAD_INT(PAD_124)
A68_INT  R;
A_PAD_INT(PAD_125)
};
typedef struct A68t443  A68_443 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t444,(A68_INT ,A68_INT ,struct A68t443 *),(A68_INT ,A68_INT ,struct A68t443 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(INT,INT) MODE443 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t280 *,struct A68t443 ),(struct A68t280 *,struct A68t443 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE280,MODE443) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC MODE278 */

A_PROCEDURE(struct A68t278 *,A68t447,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE278) REF MODE278 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t278 ,A68_VC ),(struct A68t278 ,A68_VC ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE278,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t278 *,struct A68t296 ),(struct A68t278 *,struct A68t296 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE278,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t278 *,struct A68t298 ),(struct A68t278 *,struct A68t298 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE278,MODE298) VOID */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE278) VOID */

A_PROCEDURE(A68_INT ,A68t452,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF MODE278) INT */

A_PROCEDURE(A68_BOOL ,A68t453,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE278) BOOL */

A_PROCEDURE(A68_INT ,A68t454,(struct A68t278 *,A68_INT ),(struct A68t278 *,A68_INT ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE278,INT) INT */

A_PROCEDURE(A68_BITS ,A68t455,(struct A68t278 *,A68_INT ),(struct A68t278 *,A68_INT ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE278,INT) BITS */
struct A68t456 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
} data; };
typedef struct A68t456  A68_456 ;    /* UNION(BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t278 *,A68_INT ,struct A68t456 *),(struct A68t278 *,A68_INT ,struct A68t456 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE278,INT) MODE456 */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t278 *,A68_INT ,struct A68t240 *),(struct A68t278 *,A68_INT ,struct A68t240 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE278,INT) MODE240 */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t278 *,A68_INT ,struct A68t238 *),(struct A68t278 *,A68_INT ,struct A68t238 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE278,INT) MODE238 */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t278 *,A68_INT ),(struct A68t278 *,A68_INT ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE278,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t278 *,struct A68t240 *),(struct A68t278 *,struct A68t240 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE278) MODE240 */

A_PROCEDURE(A68_BOOL ,A68t462,(struct A68t278 *,A68_INT ),(struct A68t278 *,A68_INT ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE278,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t463,(struct A68t278 *,struct A68t365 *),(struct A68t278 *,struct A68t365 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE278,REF MODE365) INT */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t278 *,struct A68t387 ),(struct A68t278 *,struct A68t387 ,void *));
typedef struct A68t464  A68_464 ;    /* PROC(REF MODE278,MODE387) VOID */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t278 *,struct A68t365 *),(struct A68t278 *,struct A68t365 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE278,REF MODE365) VOID */

A_PROCEDURE(struct A68t365 *,A68t466,(struct A68t278 *),(struct A68t278 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE278) REF MODE365 */
struct A68t467{
A68_INT  W;
A_PAD_INT(PAD_126)
A68_INT  V;
A_PAD_INT(PAD_127)
A68_INT  A;
A_PAD_INT(PAD_128)
};
typedef struct A68t467  A68_467 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t320 ,A68_INT ,struct A68t467 *),(struct A68t320 ,A68_INT ,struct A68t467 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE320,INT) MODE467 */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t278 *,struct A68t467 ),(struct A68t278 *,struct A68t467 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE278,MODE467) VOID */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t278 *,A68_BITS ),(struct A68t278 *,A68_BITS ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(REF MODE278,BITS) VOID */
struct A68t471{
A68_VC  Wo;
A68_INT  Len;
A_PAD_INT(PAD_129)
};
typedef struct A68t471  A68_471 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t472,(A68_VC ,A68_INT ,struct A68t471 *),(A68_VC ,A68_INT ,struct A68t471 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE26,INT) MODE471 */

A_PROCEDURE(A68_VOID ,A68t473,(struct A68t278 *,struct A68t471 ),(struct A68t278 *,struct A68t471 ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE278,MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t278 *,struct A68t440 ),(struct A68t278 *,struct A68t440 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE278,MODE440) VOID */

A_PROCEDURE(A68_VOID ,A68t475,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t475  A68_475 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t476,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t477);
typedef struct A68t477  A68_477 ;    /* STRUCT 61 CHAR */
A_VECTOR(struct A68t338 *,A68t479);
typedef struct A68t479  A68_479 ;    /* VECTOR [] REF MODE338 */
struct A68t478{
struct A68t312  Global_memory;
struct A68t312  Dynamic_memory;
struct A68t278  Stack_allocator;
struct A68t354 * Jump_backpatch_list;
struct A68t378 * Jump_spec_list;
struct A68t307 * Repeat_stack;
struct A68t338 * Named_data_list;
struct A68t338 * Named_code_list;
struct A68t354 * Named_code_backpatch_list;
struct A68t479  Named_code_array;
struct A68t383 * Call_parameter_list;
A68_INT  Calls_location;
A_PAD_INT(PAD_130)
A68_BOOL  Reachable;
A_PAD_BOOL(PAD_131)
A68_BOOL  Incallsarray;
A_PAD_BOOL(PAD_132)
A68_INT  Lastretaddress;
A_PAD_INT(PAD_133)
A68_INT  Diagnose;
A_PAD_INT(PAD_134)
};
typedef struct A68t478  A68_478 ;    /* STRUCT(MODE312,MODE312,MODE278,REF MODE354,REF MODE378,REF MODE307,REF MODE338,REF MODE338,REF MODE354,REF MODE479,REF MODE383,INT,BOOL,BOOL,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t480,(A68_CHAR *,A68_CHAR *),(A68_CHAR *,A68_CHAR *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF CHAR,REF CHAR) VOID */

A_PROCEDURE(A68_INT *,A68t481,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t481  A68_481 ;    /* PROC(REF CHAR) REF INT */
A_ISTRUCT(A68_CHAR ,7,A68t482);
typedef struct A68t482  A68_482 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t483);
typedef struct A68t483  A68_483 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t484,(A68_INT *,A68_INT *),(A68_INT *,A68_INT *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(REF INT,REF INT) VOID */
struct A68t485{
A68_CHAR * Addr;
A68_BITS  Env;
A_PAD_BITS(PAD_135)
};
typedef struct A68t485  A68_485 ;    /* STRUCT(REF CHAR,BITS)  */

A_PROCEDURE(struct A68t485 *,A68t486,(struct A68t480 *),(struct A68t480 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE480) REF MODE485 */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t338 *,struct A68t479 *),(struct A68t338 *,struct A68t479 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(REF MODE338) REF MODE479 */

A_PROCEDURE(A68_VOID ,A68t488,(A68_BOOL ,struct A68t479 *),(A68_BOOL ,struct A68t479 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(BOOL) MODE479 */

A_PROCEDURE(A68_INT ,A68t489,(struct A68t479 ,struct A68t279 ),(struct A68t479 ,struct A68t279 ,void *));
typedef struct A68t489  A68_489 ;    /* PROC(REF MODE479,MODE279) INT */

A_PROCEDURE(A68_VOID ,A68t490,(struct A68t43 ,A68_INT ,struct A68t36 ,struct A68t295 *),(struct A68t43 ,A68_INT ,struct A68t36 ,struct A68t295 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(MODE43,INT,MODE36) MODE295 */
A_ISTRUCT(A68_CHAR ,14,A68t491);
typedef struct A68t491  A68_491 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t492);
typedef struct A68t492  A68_492 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,2,A68t493);
typedef struct A68t493  A68_493 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t495);
typedef struct A68t495  A68_495 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t496);
typedef struct A68t496  A68_496 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t497);
typedef struct A68t497  A68_497 ;    /* STRUCT 9 CHAR */
struct A68t498{
A68_INT  Codesize;
A_PAD_INT(PAD_136)
A68_INT  Datasize;
A_PAD_INT(PAD_137)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_138)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_139)
};
typedef struct A68t498  A68_498 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t498 *),(struct A68t498 *,void *));
typedef struct A68t499  A68_499 ;    /* PROC MODE498 */

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t231 ,struct A68t231 ,struct A68t36 ),(struct A68t231 ,struct A68t231 ,struct A68t36 ,void *));
typedef struct A68t500  A68_500 ;    /* PROC(MODE231,MODE231,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t501,(A68_INT ,struct A68t331 ),(A68_INT ,struct A68t331 ,void *));
typedef struct A68t501  A68_501 ;    /* PROC(INT,MODE331) VOID */

A_PROCEDURE(A68_VOID ,A68t502,(A68_INT ,A68_INT ,struct A68t331 ),(A68_INT ,A68_INT ,struct A68t331 ,void *));
typedef struct A68t502  A68_502 ;    /* PROC(INT,INT,MODE331) VOID */

A_PROCEDURE(A68_VOID ,A68t503,(struct A68t279 ),(struct A68t279 ,void *));
typedef struct A68t503  A68_503 ;    /* PROC(MODE279) VOID */

A_PROCEDURE(A68_VOID ,A68t504,(A68_INT ,struct A68t279 ),(A68_INT ,struct A68t279 ,void *));
typedef struct A68t504  A68_504 ;    /* PROC(INT,MODE279) VOID */
A_ISTRUCT(struct A68t365 *,2,A68t505);
typedef struct A68t505  A68_505 ;    /* STRUCT 2 REF MODE365 */

A_PROCEDURE(A68_VOID ,A68t506,(struct A68t331 ,struct A68t279 ),(struct A68t331 ,struct A68t279 ,void *));
typedef struct A68t506  A68_506 ;    /* PROC(MODE331,MODE279) VOID */
A_ISTRUCT(A68_CHAR ,50,A68t507);
typedef struct A68t507  A68_507 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t279 ,struct A68t365 *,struct A68t365 *),(struct A68t279 ,struct A68t365 *,struct A68t365 *,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE279,REF MODE365,REF MODE365) VOID */
A_ISTRUCT(A68_CHAR ,47,A68t509);
typedef struct A68t509  A68_509 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t510);
typedef struct A68t510  A68_510 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t511,(struct A68t279 ,A68_INT ),(struct A68t279 ,A68_INT ,void *));
typedef struct A68t511  A68_511 ;    /* PROC(MODE279,INT) VOID */
A_ISTRUCT(A68_CHAR ,45,A68t512);
typedef struct A68t512  A68_512 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t513);
typedef struct A68t513  A68_513 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t514);
typedef struct A68t514  A68_514 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t515);
typedef struct A68t515  A68_515 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t516);
typedef struct A68t516  A68_516 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t517);
typedef struct A68t517  A68_517 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t518);
typedef struct A68t518  A68_518 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t519);
typedef struct A68t519  A68_519 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t520);
typedef struct A68t520  A68_520 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t521,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t521  A68_521 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t522,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t522  A68_522 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t523,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t523  A68_523 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t524,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t525,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t525  A68_525 ;    /* PROC(INT,INT) VOID */
struct A68t526{
A68_INT  Lasttime;
A_PAD_INT(PAD_140)
A68_INT  Interrupted;
A_PAD_INT(PAD_141)
};
typedef struct A68t526  A68_526 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t527,(A68_INT ,struct A68t526 *),(A68_INT ,struct A68t526 *,void *));
typedef struct A68t527  A68_527 ;    /* PROC(INT) MODE526 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kecodegenstacksparc --- */
#define EZGASIM_tos 0
#define FZGASIM_tos1 1
extern A68_VOID  GZGASIM_stackallocator(A68_278 *);
extern A68_278 * NZGASIM_new(struct A68t278 *);
extern A68_VOID  UZGASIM_dump(struct A68t278 ,A68_VC );
extern A68_VOID  IAHASIM_save(struct A68t278 *,struct A68t296 );
extern A68_VOID  LAHASIM_restore(struct A68t278 *,struct A68t298 );
extern A68_VOID  NAHASIM_clear(struct A68t278 *);
extern A68_INT  PAHASIM_dynamicusage(struct A68t278 *);
extern A68_INT  SAHASIM_length(struct A68t278 *);
extern A68_BOOL  VAHASIM_cleared(struct A68t278 *);
extern A68_BITS  KBHASIM_rsource(struct A68t278 *,A68_INT );
extern A68_VOID  IFHASIM_forcecondition(struct A68t278 *);
extern A68_VOID  HGHASIM_transmutesmall(struct A68t278 *,A68_INT );
extern A68_VOID  SGHASIM_monop(struct A68t278 *,A68_240 *);
extern A68_VOID  LHHASIM_nonassocdyop(struct A68t278 *,A68_240 *);
extern A68_VOID  BIHASIM_assocdyop(struct A68t278 *,A68_240 *);
extern A68_VOID  XIHASIM_calculatenewdynamicaddr(struct A68t278 *,A68_INT );
extern A68_VOID  IHHASIM_pop(struct A68t278 *);
extern A68_VOID  EPHASIM_pushnewstacklocation(struct A68t278 *,A68_INT );
extern A68_VOID  FOHASIM_conform(struct A68t278 *);
extern A68_INT  ZPHASIM_advance(struct A68t278 *,struct A68t365 *);
extern A68_VOID  ATHASIM_replace(struct A68t278 *,struct A68t387 );
extern A68_VOID  TUHASIM_compress(struct A68t278 *,A68_INT );
extern A68_VOID  KWHASIM_createparams(struct A68t278 *,struct A68t365 *);
extern A68_VOID  BXHASIM_createspec(struct A68t278 *,struct A68t365 *);
extern A68_365 * LXHASIM_derivespec(struct A68t278 *);
extern A68_VOID  HYHASIM_local(struct A68t278 *,A68_INT );
extern A68_VOID  JZHASIM_global(struct A68t278 *,A68_INT );
extern A68_VOID  PZHASIM_att(struct A68t320 ,A68_INT ,A68_467 *);
extern A68_VOID  UZHASIM_store(struct A68t278 *,struct A68t467 );
extern A68_VOID  NAIASIM_bstring(struct A68t278 *,A68_INT );
extern A68_VOID  XHIASIM_add(struct A68t278 *);
extern A68_VOID  OIIASIM_not(struct A68t278 *);
extern A68_VOID  WIIASIM_shl(struct A68t278 *);
extern A68_VOID  RKIASIM_shr(struct A68t278 *);
extern A68_VOID  MMIASIM_mul(struct A68t278 *);
extern A68_VOID  NNIASIM_div(struct A68t278 *);
extern A68_VOID  AOIASIM_mod(struct A68t278 *);
extern A68_VOID  KPIASIM_test(struct A68t278 *);
extern A68_VOID  YPIASIM_genericrelation(struct A68t278 *,A68_BITS );
extern A68_VOID  UQIASIM_eq(struct A68t278 *);
extern A68_VOID  BUIASIM_len(A68_VC ,A68_INT ,A68_471 *);
extern A68_VOID  GUIASIM_pushconst(struct A68t278 *,struct A68t471 );
extern A68_VOID  YTIASIM_pushint(struct A68t278 *,A68_INT );
extern A68_VOID  GXIASIM_itos(struct A68t278 *,A68_INT );
extern A68_VOID  KXIASIM_utos(struct A68t278 *,A68_INT );
extern A68_VOID  NXIASIM_stoi(struct A68t278 *);
extern A68_VOID  PXIASIM_stou(struct A68t278 *);
extern A68_VOID  SXIASIM_drop(struct A68t278 *,A68_INT );
extern A68_VOID  XXIASIM_fanout(struct A68t278 *,A68_INT );
/* --- End of imports from kecodegenstacksparc --- */


/* --- Imports from kecodegenserversparc --- */
extern A68_295  OAFASIM_am_version;
extern A68_VOID  RAFASIM_ferryoutandflt(struct A68t231 ,struct A68t36 ,A68_296 *);
extern A68_VOID  WAFASIM_ferryinandflt(struct A68t231 ,struct A68t36 ,A68_298 *);
extern A68_VOID  BBFASIM_dump(A68_BOOL ,A68_VC );
extern A68_VOID  JCFASIM_save(A68_INT ,struct A68t296 );
extern A68_VOID  MCFASIM_restore(A68_INT *,struct A68t298 );
extern A68_307 * AGFASIM_machineoffsetstack;
extern A68_VOID  IGFASIM_dump(struct A68t307 *,A68_VC );
extern A68_INT  JHFASIM_pop(struct A68t307 **);
extern A68_VOID  FHFASIM_push(struct A68t307 **,A68_INT );
extern A68_BOOL  NHFASIM_cleared(struct A68t307 *);
extern A68_VOID  SHFASIM_nullmemory(A68_312 *);
extern A68_VOID  EIFASIM_create(struct A68t312 *,A68_INT );
extern A68_VOID  JIFASIM_extend(struct A68t312 *,A68_INT );
extern A68_VOID  YHFASIM_destroy(struct A68t312 *);
extern A68_VOID  LJFASIM_dump(struct A68t312 ,A68_VC );
extern A68_INT  AKFASIM_sizeof(struct A68t312 *);
extern A68_VOID  UIFASIM_save(struct A68t312 *,struct A68t296 );
extern A68_VOID  BJFASIM_restore(struct A68t312 *,struct A68t298 );
extern A68_VOID  HKFASIM_len(A68_INT ,A68_INT ,A68_320 *);
extern A68_VOID  YLFASIM_label(A68_VC ,A68_279 *);
extern A68_331  ONFASIM_indirect;
extern A68_VOID  SNFASIM_dump(struct A68t331 ,A68_VC );
extern A68_VOID  BPFASIM_labeledoffset(struct A68t279 ,A68_INT ,A68_333 *);
extern A68_338 * KQFASIM_labellist;
extern A68_VOID  SQFASIM_dump(struct A68t338 *,A68_VC );
extern A68_VOID  IRFASIM_save(struct A68t338 *,struct A68t296 );
extern A68_VOID  ORFASIM_restore(struct A68t338 **,struct A68t298 );
extern A68_INT  XRFASIM_lookup(struct A68t338 *,struct A68t279 );
extern A68_VOID  DSFASIM_write(struct A68t338 **,struct A68t333 );
extern A68_VOID  HSFASIM_removelast(struct A68t338 **);
extern A68_VOID  NUFASIM_pop(struct A68t346 **,A68_232 *);
extern A68_BOOL  RUFASIM_cleared(struct A68t346 *);
extern A68_354 * KVFASIM_backpatchlist;
extern A68_VOID  SVFASIM_dump(struct A68t354 *,A68_VC );
extern A68_BOOL  CXFASIM_cleared(struct A68t354 *);
extern A68_346 * VWFASIM_lookupremove(struct A68t354 **,struct A68t279 );
extern A68_VOID  IWFASIM_att(struct A68t232 ,struct A68t279 ,A68_358 *);
extern A68_VOID  NWFASIM_write(struct A68t354 **,struct A68t358 );
#define GXFASIM_instanceptr 2
extern A68_INT  UYFASIM_length(struct A68t365 *);
extern A68_VOID  BZFASIM_labeledparams(struct A68t279 ,struct A68t365 *,struct A68t365 *,A68_370 *);
extern A68_VOID  AAGASIM_labeledspec(struct A68t279 ,struct A68t365 *,A68_375 *);
extern A68_378 * QAGASIM_speclist;
extern A68_VOID  YAGASIM_dump(struct A68t378 *,A68_VC );
extern A68_365 * UBGASIM_lookupremove(struct A68t378 **,struct A68t279 );
extern A68_BOOL  OBGASIM_present(struct A68t378 *,struct A68t279 );
extern A68_VOID  CCGASIM_write(struct A68t378 **,struct A68t375 );
extern A68_383 * FCGASIM_parameterlist;
extern A68_VOID  NCGASIM_dump(struct A68t383 *,A68_VC );
extern A68_VOID  DDGASIM_save(struct A68t383 *,struct A68t296 );
extern A68_VOID  JDGASIM_restore(struct A68t383 **,struct A68t298 );
extern A68_VOID  SDGASIM_lookup(struct A68t383 *,struct A68t279 ,A68_387 *);
extern A68_VOID  GEGASIM_write(struct A68t383 **,struct A68t370 );
extern A68_VOID  KEGASIM_removelast(struct A68t383 **);
extern A68_BITS  TEGASIM_globalpointer;
extern A68_BITS  REGASIM_callinstpointer;
extern A68_BITS  SEGASIM_dynamicpointer;
extern A68_BITS  NEGASIM_tempreg1;
extern A68_BITS  PEGASIM_tempreg3;
extern A68_VOID  IIGASIM_inregister(A68_BOOL ,A68_287 *);
extern A68_VOID  JVGASIM_typeof(struct A68t280 *,A68_INT ,A68_285 *);
extern A68_VOID  PVGASIM_stateof(struct A68t280 *,A68_INT ,A68_286 *);
extern A68_VOID  HWGASIM_given(A68_INT ,struct A68t286 ,A68_437 *);
extern A68_VOID  MWGASIM_changestateof(struct A68t280 *,struct A68t437 );
/* --- End of imports from kecodegenserversparc --- */


/* --- Imports from kecodegenalienifsparc --- */
extern A68_BOOL  LGMASIM_generatecallalien(struct A68t278 *,struct A68t279 );
/* --- End of imports from kecodegenalienifsparc --- */


/* --- Imports from kecodegenbiopifsparc --- */
extern A68_VOID  NEMASIM_kecodegenbiopifinit(void);
extern A68_BOOL  REMASIM_generatecallbiop(struct A68t278 *,struct A68t279 );
/* --- End of imports from kecodegenbiopifsparc --- */


/* --- Imports from kemassemsparc --- */
extern A68_VOID  ZIDASIM_simfault(A68_VC );
extern A68_VOID  GJDASIM_assert(A68_VC ,A68_BOOL );
extern A68_INT  GLDASIM_location;
extern A68_CHAR * ILDASIM_macoderef(A68_INT );
extern A68_INT  KLDASIM_macodesize(void);
extern A68_INT  MPDASIM_nullmachineoffset;
extern A68_VOID  VPDASIM_mainitialise(struct A68t36 );
extern A68_VOID  XPDASIM_machangeflt(struct A68t36 );
extern A68_VOID  ZPDASIM_masavestate(struct A68t231 );
extern A68_VOID  BQDASIM_marestorestate(struct A68t231 );
extern A68_143  EQDASIM_maexecutable;
extern A68_INT  LQDASIM_maximm22;
extern A68_241  LYDASIM_call;
extern A68_242  PYDASIM_calld;
extern A68_244  BZDASIM_nop;
extern A68_245  FZDASIM_b;
extern A68_246  RZDASIM_bd;
extern A68_247  DAEASIM_add;
extern A68_247  HAEASIM_and;
extern A68_247  LAEASIM_or;
extern A68_247  FBEASIM_xnor;
extern A68_247  ZBEASIM_orcc;
extern A68_247  HCEASIM_subcc;
extern A68_250  BPEASIM_jmpl;
extern A68_251  LOEASIM_t;
extern A68_247  LEEASIM_save;
extern A68_247  PEEASIM_restore;
extern A68_247  TEEASIM_ld;
extern A68_247  JFEASIM_st;
#define YVDASIM_eq 0X1U
#define ZVDASIM_z YVDASIM_eq
#define AWDASIM_le 0X2U
#define BWDASIM_l 0X3U
#define DWDASIM_lu 0X5U
#define EWDASIM_cs DWDASIM_lu
#define GWDASIM_vs 0X7U
#define HWDASIM_a 0X8U
#define IWDASIM_ne 0X9U
#define JWDASIM_nz IWDASIM_ne
#define KWDASIM_g 0XaU
#define LWDASIM_ge 0XbU
#define NWDASIM_geu 0XdU
#define OWDASIM_cc NWDASIM_geu
#define RWDASIM_n_a 0X10U
#define SWDASIM_eq_a 0X11U
#define TWDASIM_z_a SWDASIM_eq_a
#define XWDASIM_lu_a 0X15U
#define YWDASIM_cs_a XWDASIM_lu_a
#define CXDASIM_ne_a 0X19U
#define DXDASIM_nz_a CXDASIM_ne_a
#define HXDASIM_geu_a 0X1dU
#define IXDASIM_cc_a HXDASIM_geu_a
#define JXDASIM_pos_a 0X1eU
extern A68_BITS  MXDASIM_invcondition(A68_BITS );
#define EVEASIM_r0 0X0U
#define FVEASIM_g0 EVEASIM_r0
#define GVEASIM_r1 0X1U
#define HVEASIM_g1 GVEASIM_r1
#define IVEASIM_r2 0X2U
#define JVEASIM_g2 IVEASIM_r2
#define KVEASIM_r3 0X3U
#define LVEASIM_g3 KVEASIM_r3
#define MVEASIM_r4 0X4U
#define NVEASIM_g4 MVEASIM_r4
#define OVEASIM_r5 0X5U
#define PVEASIM_g5 OVEASIM_r5
#define QVEASIM_r6 0X6U
#define RVEASIM_g6 QVEASIM_r6
#define SVEASIM_r7 0X7U
#define TVEASIM_g7 SVEASIM_r7
#define UVEASIM_r8 0X8U
#define VVEASIM_o0 UVEASIM_r8
#define WVEASIM_r9 0X9U
#define XVEASIM_o1 WVEASIM_r9
#define YVEASIM_r10 0XaU
#define ZVEASIM_o2 YVEASIM_r10
#define AWEASIM_r11 0XbU
#define BWEASIM_o3 AWEASIM_r11
#define CWEASIM_r12 0XcU
#define DWEASIM_o4 CWEASIM_r12
#define EWEASIM_r13 0XdU
#define FWEASIM_o5 EWEASIM_r13
#define GWEASIM_r14 0XeU
#define HWEASIM_o6 GWEASIM_r14
#define JWEASIM_r15 0XfU
#define KWEASIM_o7 JWEASIM_r15
#define LWEASIM_r16 0X10U
#define MWEASIM_l0 LWEASIM_r16
#define NWEASIM_r17 0X11U
#define OWEASIM_l1 NWEASIM_r17
#define PWEASIM_r18 0X12U
#define QWEASIM_l2 PWEASIM_r18
#define RWEASIM_r19 0X13U
#define SWEASIM_l3 RWEASIM_r19
#define TWEASIM_r20 0X14U
#define UWEASIM_l4 TWEASIM_r20
#define VWEASIM_r21 0X15U
#define WWEASIM_l5 VWEASIM_r21
#define XWEASIM_r22 0X16U
#define YWEASIM_l6 XWEASIM_r22
#define ZWEASIM_r23 0X17U
#define AXEASIM_l7 ZWEASIM_r23
#define BXEASIM_r24 0X18U
#define CXEASIM_i0 BXEASIM_r24
#define DXEASIM_r25 0X19U
#define EXEASIM_i1 DXEASIM_r25
#define FXEASIM_r26 0X1aU
#define GXEASIM_i2 FXEASIM_r26
#define HXEASIM_r27 0X1bU
#define IXEASIM_i3 HXEASIM_r27
#define JXEASIM_r28 0X1cU
#define KXEASIM_i4 JXEASIM_r28
#define LXEASIM_r29 0X1dU
#define MXEASIM_i5 LXEASIM_r29
#define NXEASIM_r30 0X1eU
#define OXEASIM_i6 NXEASIM_r30
#define QXEASIM_r31 0X1fU
#define RXEASIM_i7 QXEASIM_r31
#define IWEASIM_sp HWEASIM_o6
#define PXEASIM_fp OXEASIM_i6
extern A68_VOID  NPEASIM_using(struct A68t241 ,A68_INT );
extern A68_VOID  XPEASIM_using(struct A68t242 ,A68_INT );
extern A68_VOID  QQEASIM_using(struct A68t244 ,struct A68t236 );
extern A68_VOID  YQEASIM_using(struct A68t257 ,A68_INT );
extern A68_VOID  PREASIM_using(struct A68t259 ,A68_INT );
extern A68_VOID  ISEASIM_using(struct A68t247 ,struct A68t240 );
extern A68_VOID  BTEASIM_using(struct A68t262 ,struct A68t237 );
extern A68_VOID  PUEASIM_using(struct A68t250 ,struct A68t240 );
extern A68_VOID  EQEASIM_using(struct A68t242 ,struct A68t232 *);
extern A68_VOID  ASEASIM_using(struct A68t259 ,struct A68t232 *);
extern A68_VOID  VXDASIM_(struct A68t245 ,A68_BITS ,A68_257 *);
extern A68_VOID  AYDASIM_(struct A68t246 ,A68_BITS ,A68_259 *);
extern A68_VOID  FYDASIM_(struct A68t251 ,A68_BITS ,A68_262 *);
extern A68_VOID  TXEASIM_fixmachinelabel(struct A68t232 );
extern A68_VOID  CYEASIM_maret(void);
extern A68_VOID  MYEASIM_maaddrir(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS );
#define CPEASIM_t_int_overflow 0
/* --- End of imports from kemassemsparc --- */


/* --- Imports from kebasics --- */
#define SSAASIM_dumpcodegenerator 0X10U
/* --- End of imports from kebasics --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include <signal.h>

#define TECAOSI_sighup SIGHUP
#include <signal.h>

#define UECAOSI_sigint SIGINT
#include <signal.h>

#define VECAOSI_sigquit SIGQUIT
#include <signal.h>

#define WECAOSI_sigill SIGILL
#include <signal.h>

#define XECAOSI_sigtrap 5
#include <signal.h>

#define YECAOSI_sigabrt SIGABRT
#include <signal.h>

#define ZECAOSI_sigemt 7
#include <signal.h>

#define AFCAOSI_sigfpe SIGFPE
#include <signal.h>

#define BFCAOSI_sigkill SIGKILL
#include <signal.h>

#define CFCAOSI_sigbus 10
#include <signal.h>

#define DFCAOSI_sigsegv SIGSEGV
#include <signal.h>

#define EFCAOSI_sigsys 12
#include <signal.h>

#define FFCAOSI_sigpipe SIGPIPE
#include <signal.h>

#define GFCAOSI_sigalrm SIGALRM
#include <signal.h>

#define HFCAOSI_sigterm SIGTERM
#include <signal.h>

#define IFCAOSI_sigurg 16
#include <signal.h>

#define JFCAOSI_sigstop SIGSTOP
#include <signal.h>

#define KFCAOSI_sigtstp SIGTSTP
#include <signal.h>

#define LFCAOSI_sigcont SIGCONT
#include <signal.h>

#define MFCAOSI_sigchld SIGCHLD
#include <signal.h>

#define NFCAOSI_sigttin SIGTTIN
#include <signal.h>

#define OFCAOSI_sigttou SIGTTOU
#include <signal.h>

#define PFCAOSI_sigio 23
#include <signal.h>

#define QFCAOSI_sigxcpu 24
#include <signal.h>

#define RFCAOSI_sigxfsz 25
#include <signal.h>

#define SFCAOSI_sigvtalrm 26
#include <signal.h>

#define TFCAOSI_sigprof 27
#include <signal.h>

#define UFCAOSI_sigwinch 28
#include <signal.h>

#define VFCAOSI_siglost 29
#include <signal.h>

#define WFCAOSI_sigusr1 SIGUSR1
#include <signal.h>

#define XFCAOSI_sigusr2 SIGUSR2
extern A68_VOID  YJCAOSI_set_sigmsgproc(struct A68t32 ,struct A68t97 ,struct A68t97 );
extern A68_VOID  BLCAOSI_set_sigdefault(struct A68t32 ,struct A68t97 );
extern A68_VOID  PLCAOSI_get_sigmsgproc(A68_INT ,struct A68t97 ,A68_97 *);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


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
extern A68_VOID  KFAAOST_default_msg(struct A68t92 ,struct A68t46 );
extern A68_34 * KEAAOST_screen;
extern A68_INT  PNAAOST_n_interrupts;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZYGASIM(void);   /* kecodegenstacksparc */
extern void AAFASIM(void);   /* kecodegenserversparc */
extern void TEMASIM(void);   /* kecodegenalienifsparc */
extern void YYIASIM(void);   /* kecodegenbiopifsparc */
extern void KIDASIM(void);   /* kemassemsparc */
extern void JSAASIM(void);   /* kebasics */
extern void JSCAOST(void);   /* basics */
extern void VSCAOSI(void);   /* osif */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_477   WHMASIM = {"$Id: kecodegensparc.a68,v 34.2 1995/03/29 13:04:47 ella Exp $"}; 
A_GISVEC(A68_VC ,XHMASIM,WHMASIM,61)
static A68_478  YHMASIM_code_generator;
#define ZHMASIM_privatespace 4
static A68_INT  AIMASIM_sparespace;
static A68_INT * BIMASIM_timeref;
static A68_INT * CIMASIM_maxtimeref;
static A68_INT * DIMASIM_interruptref;
static A68_INT * EIMASIM_globalmemorystart;
static A68_480  FIMASIM_codeentry;
static A68_114   HIMASIM = {"Time"}; 
A_GISVEC(A68_VC ,JIMASIM,HIMASIM,4)
static A68_482   NIMASIM = {"Maxtime"}; 
A_GISVEC(A68_VC ,PIMASIM,NIMASIM,7)
static A68_483   TIMASIM = {"Interrupted"}; 
A_GISVEC(A68_VC ,VIMASIM,TIMASIM,11)
extern void aci_initialise();

#define ZIMASIM_initialisealientoolkit aci_initialise
static A68_97  LJMASIM_old_int_handler;
#define PJMASIM_noofphases 7
static A68_491   YKMASIM = {"CODE GENERATOR"}; 
A_GISVEC(A68_VC ,ZKMASIM,YKMASIM,14)
static A68_493   FLMASIM = {"  "}; 
A_GISVEC(A68_VC ,GLMASIM,FLMASIM,2)
static A68_493   HLMASIM = {"  "}; 
A_GISVEC(A68_VC ,ILMASIM,HLMASIM,2)
static A68_493   JLMASIM = {"  "}; 
A_GISVEC(A68_VC ,KLMASIM,JLMASIM,2)
static A68_494   MLMASIM = {"jump backpatch list"}; 
A_GISVEC(A68_VC ,NLMASIM,MLMASIM,19)
static A68_493   TLMASIM = {"  "}; 
A_GISVEC(A68_VC ,ULMASIM,TLMASIM,2)
static A68_491   WLMASIM = {"jump spec list"}; 
A_GISVEC(A68_VC ,XLMASIM,WLMASIM,14)
static A68_493   DMMASIM = {"  "}; 
A_GISVEC(A68_VC ,EMMASIM,DMMASIM,2)
static A68_493   FMMASIM = {"  "}; 
A_GISVEC(A68_VC ,GMMASIM,FMMASIM,2)
static A68_495   IMMASIM = {"named data list"}; 
A_GISVEC(A68_VC ,JMMASIM,IMMASIM,15)
static A68_493   PMMASIM = {"  "}; 
A_GISVEC(A68_VC ,QMMASIM,PMMASIM,2)
static A68_495   SMMASIM = {"named code list"}; 
A_GISVEC(A68_VC ,TMMASIM,SMMASIM,15)
static A68_493   ZMMASIM = {"  "}; 
A_GISVEC(A68_VC ,ANMASIM,ZMMASIM,2)
static A68_496   CNMASIM = {"named code backpatch list"}; 
A_GISVEC(A68_VC ,DNMASIM,CNMASIM,25)
static A68_493   JNMASIM = {"  "}; 
A_GISVEC(A68_VC ,KNMASIM,JNMASIM,2)
static A68_494   MNMASIM = {"call parameter list"}; 
A_GISVEC(A68_VC ,NNMASIM,MNMASIM,19)
static A68_493   TNMASIM = {"  "}; 
A_GISVEC(A68_VC ,UNMASIM,TNMASIM,2)
static A68_491   WNMASIM = {"calls location"}; 
A_GISVEC(A68_VC ,XNMASIM,WNMASIM,14)
static A68_493   DOMASIM = {"  "}; 
A_GISVEC(A68_VC ,EOMASIM,DOMASIM,2)
static A68_497   IOMASIM = {"reachable"}; 
A_GISVEC(A68_VC ,JOMASIM,IOMASIM,9)
static A68_493   POMASIM = {"  "}; 
A_GISVEC(A68_VC ,QOMASIM,POMASIM,2)
static A68_365 * OVMASIM_instparams;
static A68_387  TVMASIM_advanceparams;
static A68_507   JXMASIM = {"Stack frame size should match number of parameters"}; 
A_GISVEC(A68_VC ,LXMASIM,JXMASIM,50)
static A68_509   AZMASIM = {"Stack should be empty on arrival at named code."}; 
A_GISVEC(A68_VC ,BZMASIM,AZMASIM,47)
static A68_510   CZMASIM = {"Named code should be unreachable."}; 
A_GISVEC(A68_VC ,DZMASIM,CZMASIM,33)
static A68_512   TZMASIM = {"Stack allocator should be clear at end decls."}; 
A_GISVEC(A68_VC ,UZMASIM,TZMASIM,45)
static A68_513   VZMASIM = {"All jumps should be resolved at end decls."}; 
A_GISVEC(A68_VC ,WZMASIM,VZMASIM,42)
static A68_514   XZMASIM = {"All repeats should be ended at end decls."}; 
A_GISVEC(A68_VC ,YZMASIM,XZMASIM,41)
static A68_515   ZZMASIM = {"All calls and callinsts should be resolved at end decls."}; 
A_GISVEC(A68_VC ,AANASIM,ZZMASIM,56)
static A68_516   BANASIM = {"End decls should be unreachable."}; 
A_GISVEC(A68_VC ,CANASIM,BANASIM,32)
static A68_513   UANASIM = {"Stack allocator should be clear at end ca."}; 
A_GISVEC(A68_VC ,VANASIM,UANASIM,42)
static A68_517   WANASIM = {"All jumps should be resolved at end ca."}; 
A_GISVEC(A68_VC ,XANASIM,WANASIM,39)
static A68_518   YANASIM = {"All repeats should be ended at end ca."}; 
A_GISVEC(A68_VC ,ZANASIM,YANASIM,38)
static A68_519   ABNASIM = {"All calls and callinsts should be resolved at end ca."}; 
A_GISVEC(A68_VC ,BBNASIM,ABNASIM,53)
static A68_520   CBNASIM = {"End ca should be unreachable."}; 
A_GISVEC(A68_VC ,DBNASIM,CBNASIM,29)
typedef struct   /* env of non-global proc */
{
A68_INT  UJMASIM_upb;
A_PAD_INT(PAD_142)
} YJMASIM_generator;

A_STATIC A68_VOID  GIMASIM_setcaches(void);

A_STATIC A68_VOID  EJMASIM_codegen_catch_int_error(A68_92  Msgno, A68_46  Params);

A_STATIC A68_VOID  IJMASIM_codegen_catch_interrupt(A68_92  Msgno, A68_46  Params);

A_STATIC A68_VOID  MJMASIM_mark_relative_code_region(void);

A_STATIC A68_VOID  RJMASIM_squash(A68_338 * L, A68_479  *ReturnedValue);

A_STATIC A68_VOID  XJMASIM_generator(A68_BOOL  VJMASIM_anonymous, A68_479  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  IKMASIM_lookup(A68_479  L, A68_279  K);

A68_VOID  OKMASIM_cginitialise(A68_43  Diag, A68_INT  Level, A68_36  Fltproc, A68_295  *ReturnedValue);

A68_VOID  WKMASIM_cgdump(void);

A68_VOID  ROMASIM_cgsizes(A68_498  *ReturnedValue);

A68_VOID  XOMASIM_cgsavestate(A68_231  Ferryoutstatic, A68_231  Ferryoutdynamic, A68_36  Flt);

A68_VOID  LPMASIM_cgrestorestate(A68_231  Ferryinstatic, A68_231  Ferryindynamic, A68_36  Flt);

A68_VOID  BQMASIM_generatehalt(void);

A68_VOID  NQMASIM_generateadd(void);

A68_VOID  OQMASIM_generatesub(void);

A68_VOID  TQMASIM_generatemul(void);

A68_VOID  UQMASIM_generatediv(void);

A68_VOID  VQMASIM_generatemod(void);

A68_VOID  WQMASIM_generateneg(void);

A68_VOID  BRMASIM_generateabs(void);

A68_VOID  JRMASIM_generateiand(void);

A68_VOID  LRMASIM_generateior(void);

A68_VOID  NRMASIM_generateshl(void);

A68_VOID  ORMASIM_generateshr(void);

A68_VOID  PRMASIM_generatecom(void);

A68_VOID  RRMASIM_generatenot(void);

A68_VOID  SRMASIM_generatetest(void);

A68_VOID  TRMASIM_generateeq(void);

A68_VOID  URMASIM_generateneq(void);

A68_VOID  VRMASIM_generategt(void);

A68_VOID  WRMASIM_generatege(void);

A68_VOID  XRMASIM_generatelt(void);

A68_VOID  YRMASIM_generatele(void);

A68_VOID  ZRMASIM_generateand(void);

A68_VOID  BSMASIM_generateor(void);

A68_VOID  FSMASIM_generatepushstring(A68_INT  B, A68_VC  X);

A68_VOID  ISMASIM_generatepushint(A68_INT  X);

A68_VOID  KSMASIM_generatedrop(A68_INT  N);

A68_VOID  MSMASIM_generatelocal(A68_INT  N);

A68_VOID  PSMASIM_generateglobal(A68_INT  W, A68_331  A);

A68_VOID  VSMASIM_generatestore(A68_INT  W, A68_331  A);

A68_VOID  ITMASIM_generatebstring(A68_INT  W, A68_INT  L, A68_331  A);

A68_VOID  OTMASIM_generatebstore(A68_INT  Bw, A68_331  A);

A68_VOID  QTMASIM_generateitos(A68_INT  Bw);

A68_VOID  STMASIM_generateutos(A68_INT  Bw);

A68_VOID  TTMASIM_generatestoi(void);

A68_VOID  UTMASIM_generatestou(void);

A68_VOID  WTMASIM_generatejump(A68_279  L);

A68_VOID  EUMASIM_generatejumpno(A68_INT  D, A68_279  L);

A68_VOID  WUMASIM_generatelabel(A68_INT  Stacksize, A68_279  L);

A68_VOID  AVMASIM_generaterepeat(void);

A68_VOID  BVMASIM_generateloop(void);

A68_VOID  WVMASIM_generatecallinst(A68_331  Addr, A68_279  L);

A68_VOID  FXMASIM_generatecall(A68_INT  Ipstackframesize, A68_279  L);

A68_VOID  IYMASIM_generateenter(void);

A68_VOID  KYMASIM_generatefanout(A68_INT  Offset);

A68_VOID  MYMASIM_generateret(A68_INT  Nooutputparams);

A68_VOID  VYMASIM_generatenamedcode(A68_279  L, A68_365 * Ip, A68_365 * Op);

A68_VOID  JZMASIM_generatenameddata(A68_279  L, A68_INT  O);

A68_VOID  OZMASIM_generateparamtypes(A68_279  L, A68_365 * Ip, A68_365 * Op);

A68_VOID  RZMASIM_generate(A68_36  Flt);

A68_VOID  SZMASIM_generateenddecls(void);

A68_VOID  FANASIM_generateca(A68_36  Flt);

A68_VOID  SANASIM_generateendca(void);

A68_VOID  HBNASIM_cgsetupspace(A68_INT  Size, A68_36  Flt, A68_VC  *ReturnedValue);

A68_VOID  TBNASIM_cgextendspace(A68_INT  Size, A68_36  Flt);

A68_VOID  ACNASIM_cgpoke(A68_VC  W, A68_INT  O);

A68_VOID  HCNASIM_cgpeek(A68_INT  L, A68_INT  O, A68_VC  *ReturnedValue);

A68_VOID  OCNASIM_cgpokeint(A68_INT  I, A68_INT  O);

A68_INT  UCNASIM_cgpeekint(A68_INT  O);

A68_VOID  ADNASIM_cgsimulate(A68_INT  Maxtime, A68_526  *ReturnedValue);

A68_VOID  NDNASIM_cgclearinterrupts(void);

A68_VOID  PDNASIM_cgclosedown(A68_36  Flt);

A_STATIC A68_VOID  TDNASIM_anonymous(A68_VC  Dummy);

A_STATIC A68_VOID  XJMASIM_generator(A68_BOOL  VJMASIM_anonymous, A68_479  *ReturnedValue, void *NonLocals)
#define NL(x) (((YJMASIM_generator *)NonLocals)->x)
{ 
A68_479  ZJMASIM;  /* clause result */
A68_479  AKMASIM;  /* OPERATORS - dynamic generator */
{ 
AKMASIM.upb = NL(UJMASIM_upb) ;
( VJMASIM_anonymous? A_VLOC(A68_338 *,AKMASIM): A_VHEAP(A68_338 *,AKMASIM) );
ZJMASIM = AKMASIM;
} 
*ReturnedValue = (ZJMASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TDNASIM_anonymous(A68_VC  Dummy)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  GIMASIM_setcaches(void)
{ 
A68_VC  IIMASIM;  /* OPERATORS - simple index */
A68_279  KIMASIM;  /* avoid structure result */
A68_INT  LIMASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} MIMASIM; 
A68_VC  OIMASIM;  /* OPERATORS - simple index */
A68_279  QIMASIM;  /* avoid structure result */
A68_INT  RIMASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} SIMASIM; 
A68_VC  UIMASIM;  /* OPERATORS - simple index */
A68_279  WIMASIM;  /* avoid structure result */
A68_INT  XIMASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} YIMASIM; 
union {  /* BIOP 99 */
A68_480 *  source;
A68_485 *  destination;
} AJMASIM; 
A68_CHAR ** BJMASIM;  /* YIELD */
A_PROC_ENTRY(setcaches);
{ 
 /* line 180: */
 /* line 181: */
IIMASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
YLFASIM_label( JIMASIM, &KIMASIM );
LIMASIM = ((XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), KIMASIM)+1)+ZHMASIM_privatespace) ;
MIMASIM.source = (&A_VINDEX(IIMASIM,LIMASIM)) ;
BIMASIM_timeref = (MIMASIM.destination);
 /* line 182: */
EIMASIM_globalmemorystart = BIMASIM_timeref;
 /* line 183: */
 /* line 184: */
 /* line 185: */
OIMASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
YLFASIM_label( PIMASIM, &QIMASIM );
RIMASIM = ((XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), QIMASIM)+1)+ZHMASIM_privatespace) ;
SIMASIM.source = (&A_VINDEX(OIMASIM,RIMASIM)) ;
CIMASIM_maxtimeref = (SIMASIM.destination);
 /* line 186: */
 /* line 187: */
 /* line 188: */
UIMASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
YLFASIM_label( VIMASIM, &WIMASIM );
XIMASIM = ((XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), WIMASIM)+1)+ZHMASIM_privatespace) ;
YIMASIM.source = (&A_VINDEX(UIMASIM,XIMASIM)) ;
DIMASIM_interruptref = (YIMASIM.destination);
 /* line 194: */
 /* line 195: */
 /* line 196: */
ZIMASIM_initialisealientoolkit(EIMASIM_globalmemorystart, BIMASIM_timeref);
 /* line 198: */
 /* line 199: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
AJMASIM.source = (&FIMASIM_codeentry) ;
BJMASIM = (&((AJMASIM.destination)->Addr)) ;
(*BJMASIM) = ILDASIM_macoderef((*(&((&YHMASIM_code_generator)->Calls_location))));
} 
A_PROC_EXIT(setcaches);
return;
} 
#undef NL

A_STATIC A68_VOID  EJMASIM_codegen_catch_int_error(A68_92  Msgno, A68_46  Params)
{ 
A68_BITS  FJMASIM_level;
A_PROC_ENTRY(codegen_catch_int_error);
 /* line 211: */
 /* line 212: */
{ 
FJMASIM_level = (A68_BITS )(*DIMASIM_interruptref);
 /* line 213: */
 /* line 214: */
(*DIMASIM_interruptref) = (A68_INT )(A68_BITS )(FJMASIM_level|(A68_BITS )8);
} 
A_PROC_EXIT(codegen_catch_int_error);
return;
} 
#undef NL

A_STATIC A68_VOID  IJMASIM_codegen_catch_interrupt(A68_92  Msgno, A68_46  Params)
{ 
A68_BITS  JJMASIM_level;
A68_BITS  KJMASIM;  /* ADICOPS - >= */
A_PROC_ENTRY(codegen_catch_interrupt);
 /* line 217: */
 /* line 218: */
{ 
PNAAOST_n_interrupts+=1;
 /* line 219: */
JJMASIM_level = (A68_BITS )(*DIMASIM_interruptref);
 /* line 220: */
 /* line 222: */
KJMASIM = (A68_BITS )1 ;
if ( !A_LB_GE(JJMASIM_level,KJMASIM) )
{ 
 /* line 223: */
 /* line 225: */
(*DIMASIM_interruptref) = (A68_INT )(A68_BITS )(JJMASIM_level|(A68_BITS )1);
} 
else
{ 
 /* line 226: */
 /* line 228: */
(*DIMASIM_interruptref) = (A68_INT )(A68_BITS )(JJMASIM_level|(A68_BITS )2);
} 
} 
A_PROC_EXIT(codegen_catch_interrupt);
return;
} 
#undef NL

A_STATIC A68_VOID  MJMASIM_mark_relative_code_region(void)
{ 
A68_INT * NJMASIM;  /* YIELD */
A68_236  OJMASIM;  /* collateral clause result */
A_PROC_ENTRY(mark_relative_code_region);
 /* line 236: */
if ( (*(&((&YHMASIM_code_generator)->Incallsarray))) )
{ 
NPEASIM_using(LYDASIM_call, (GLDASIM_location+8));
 /* line 237: */
NJMASIM = (&((&YHMASIM_code_generator)->Lastretaddress)) ;
(*NJMASIM) = (GLDASIM_location-4);
 /* line 238: */
OJMASIM.Imm = 0;
 /* line 240: */
OJMASIM.Rd = FVEASIM_g0;
QQEASIM_using(BZDASIM_nop, OJMASIM);
} 
A_PROC_EXIT(mark_relative_code_region);
return;
} 
#undef NL

A_STATIC A68_VOID  RJMASIM_squash(A68_338 * L, A68_479  *ReturnedValue)
{ 
A68_338 * SJMASIM_tail;
A68_BOOL  TJMASIM;  /* optbool result */
A68_INT  UJMASIM_upb;
A68_488  WJMASIM_generator;   /* proc value of non-global proc */
A68_479  CKMASIM;  /* avoid structure result */
A68_479  BKMASIM_result;
A68_INT  DKMASIM;  /* YIELD */
A68_338 ** EKMASIM;  /* YIELD */
A68_479  FKMASIM;  /* clause result */
A_PROC_ENTRY(squash);
 /* line 259: */
 /* line 260: */
{ 
SJMASIM_tail = L;
 /* line 261: */
for ( ;; )
{ 
 /* line 262: */
TJMASIM = (SJMASIM_tail!=(A68_338 *)A68_NIL);
if ( TJMASIM )
{ /* line 263: */
TJMASIM = ((*(&((&((&(SJMASIM_tail->Labeled_offset))->Label))->Lab)))==0);
}
if ( !(TJMASIM) ) break;
SJMASIM_tail = (*(&(SJMASIM_tail->Rest)));
}
 /* line 265: */
 /* line 266: */
UJMASIM_upb = ((((*(&((&((&(SJMASIM_tail->Labeled_offset))->Label))->Lab)))/PJMASIM_noofphases)+1)*PJMASIM_noofphases);
 /* line 267: */
A_CLOSURE( WJMASIM_generator, XJMASIM_generator, YJMASIM_generator );
(( YJMASIM_generator * ) ( WJMASIM_generator.nonlocals )) -> UJMASIM_upb = UJMASIM_upb;
A_CALLPROC(WJMASIM_generator,(A68_FALSE, &CKMASIM),(A68_FALSE, &CKMASIM,(WJMASIM_generator).nonlocals));
BKMASIM_result = CKMASIM;
 /* line 268: */
for ( ;; )
{ 
 /* line 269: */
if ( !((SJMASIM_tail!=(A68_338 *)A68_NIL)) ) break;
 /* line 270: */
if ( ((*(&((&((&(SJMASIM_tail->Labeled_offset))->Label))->Lab)))!=0) )
{ 
 /* line 271: */
DKMASIM = (*(&((&((&(SJMASIM_tail->Labeled_offset))->Label))->Lab))) ;
EKMASIM = (&A_VINDEX(BKMASIM_result,DKMASIM)) ;
(*EKMASIM) = SJMASIM_tail;
} 
 /* line 272: */
 /* line 273: */
SJMASIM_tail = (*(&(SJMASIM_tail->Rest)));
}
 /* line 274: */
 /* line 275: */
FKMASIM = BKMASIM_result;
} 
A_PROC_EXIT(squash);
*ReturnedValue = (FKMASIM);
return;
} 
#undef NL

A_STATIC A68_INT  IKMASIM_lookup(A68_479  L, A68_279  K)
{ 
A68_INT  JKMASIM;  /* clause result */
A68_INT  KKMASIM;  /* YIELD */
A_PROC_ENTRY(lookup);
 /* line 278: */
 /* line 279: */
if ( (K.Lab==0) )
{ 
 /* line 280: */
 /* line 281: */
JKMASIM = XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_code_list))), K);
} 
else
{ 
 /* line 282: */
KKMASIM = K.Lab ;
JKMASIM = (*(&((&((*(&A_VINDEX(L,KKMASIM)))->Labeled_offset))->Machine_offset)));
} 
A_PROC_EXIT(lookup);
return( JKMASIM );
} 
#undef NL

A68_VOID  OKMASIM_cginitialise(A68_43  Diag, A68_INT  Level, A68_36  Fltproc, A68_295  *ReturnedValue)
{ 
A68_478  PKMASIM;  /* collateral clause result */
A68_312  QKMASIM;  /* avoid structure result */
A68_312  RKMASIM;  /* avoid structure result */
A68_278  SKMASIM;  /* avoid structure result */
A68_479  TKMASIM;  /* OPERATORS - nil -> mode */
A68_36  UKMASIM;  /* procedure value */
A68_295  VKMASIM;  /* clause result */
A_PROC_ENTRY(cginitialise);
 /* line 289: */
 /* line 290: */
{ 
VPDASIM_mainitialise(Fltproc);
 /* line 292: */
 /* line 293: */
 /* line 294: */
SHFASIM_nullmemory(  &QKMASIM );
PKMASIM.Global_memory = QKMASIM;
 /* line 295: */
SHFASIM_nullmemory(  &RKMASIM );
PKMASIM.Dynamic_memory = RKMASIM;
 /* line 297: */
GZGASIM_stackallocator(  &SKMASIM );
PKMASIM.Stack_allocator = SKMASIM;
 /* line 298: */
PKMASIM.Jump_backpatch_list = KVFASIM_backpatchlist;
 /* line 299: */
PKMASIM.Jump_spec_list = QAGASIM_speclist;
 /* line 301: */
PKMASIM.Repeat_stack = AGFASIM_machineoffsetstack;
 /* line 302: */
PKMASIM.Named_data_list = KQFASIM_labellist;
 /* line 303: */
PKMASIM.Named_code_list = KQFASIM_labellist;
 /* line 304: */
PKMASIM.Named_code_backpatch_list = KVFASIM_backpatchlist;
 /* line 305: */
PKMASIM.Named_code_array = A_VVAC(TKMASIM);
 /* line 306: */
PKMASIM.Call_parameter_list = FCGASIM_parameterlist;
 /* line 307: */
PKMASIM.Calls_location = MPDASIM_nullmachineoffset;
 /* line 308: */
PKMASIM.Reachable = A68_FALSE;
 /* line 309: */
PKMASIM.Incallsarray = A68_FALSE;
 /* line 310: */
PKMASIM.Lastretaddress = 0;
PKMASIM.Diagnose = Level;
YHMASIM_code_generator = PKMASIM;
 /* line 312: */
UKMASIM.fn.fn_global = ZIDASIM_simfault;
UKMASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(UKMASIM);
 /* line 314: */
NEMASIM_kecodegenbiopifinit();
 /* line 316: */
 /* line 318: */
VKMASIM = OAFASIM_am_version;
} 
A_PROC_EXIT(cginitialise);
*ReturnedValue = (VKMASIM);
return;
} 
#undef NL

A68_VOID  WKMASIM_cgdump(void)
{ 
A68_492  XKMASIM;  /* collateral clause result */
A68_52  ALMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  BLMASIM;  /* YIELD */
A68_52  CLMASIM;  /* OPERATORS - mode -> union mode */
A68_56  DLMASIM;  /* procedure value */
A68_85  ELMASIM;  /* OPERATORS - istruct -> vector */
A68_492  LLMASIM;  /* collateral clause result */
A68_52  OLMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  PLMASIM;  /* YIELD */
A68_52  QLMASIM;  /* OPERATORS - mode -> union mode */
A68_56  RLMASIM;  /* procedure value */
A68_85  SLMASIM;  /* OPERATORS - istruct -> vector */
A68_492  VLMASIM;  /* collateral clause result */
A68_52  YLMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZLMASIM;  /* YIELD */
A68_52  AMMASIM;  /* OPERATORS - mode -> union mode */
A68_56  BMMASIM;  /* procedure value */
A68_85  CMMASIM;  /* OPERATORS - istruct -> vector */
A68_492  HMMASIM;  /* collateral clause result */
A68_52  KMMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  LMMASIM;  /* YIELD */
A68_52  MMMASIM;  /* OPERATORS - mode -> union mode */
A68_56  NMMASIM;  /* procedure value */
A68_85  OMMASIM;  /* OPERATORS - istruct -> vector */
A68_492  RMMASIM;  /* collateral clause result */
A68_52  UMMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  VMMASIM;  /* YIELD */
A68_52  WMMASIM;  /* OPERATORS - mode -> union mode */
A68_56  XMMASIM;  /* procedure value */
A68_85  YMMASIM;  /* OPERATORS - istruct -> vector */
A68_492  BNMASIM;  /* collateral clause result */
A68_52  ENMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  FNMASIM;  /* YIELD */
A68_52  GNMASIM;  /* OPERATORS - mode -> union mode */
A68_56  HNMASIM;  /* procedure value */
A68_85  INMASIM;  /* OPERATORS - istruct -> vector */
A68_492  LNMASIM;  /* collateral clause result */
A68_52  ONMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  PNMASIM;  /* YIELD */
A68_52  QNMASIM;  /* OPERATORS - mode -> union mode */
A68_56  RNMASIM;  /* procedure value */
A68_85  SNMASIM;  /* OPERATORS - istruct -> vector */
A68_492  VNMASIM;  /* collateral clause result */
A68_52  YNMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZNMASIM;  /* YIELD */
A68_52  AOMASIM;  /* OPERATORS - mode -> union mode */
A68_56  BOMASIM;  /* procedure value */
A68_85  COMASIM;  /* OPERATORS - istruct -> vector */
A68_331  FOMASIM;  /* OPERATORS - mode -> union mode */
A68_INT  GOMASIM;  /* YIELD */
A68_492  HOMASIM;  /* collateral clause result */
A68_52  KOMASIM;  /* OPERATORS - mode -> union mode */
A68_VC  LOMASIM;  /* YIELD */
A68_52  MOMASIM;  /* OPERATORS - mode -> union mode */
A68_56  NOMASIM;  /* procedure value */
A68_85  OOMASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(cgdump);
{ 
BLMASIM = ZKMASIM ;
XKMASIM.data[0] = A_UNITE(ALMASIM,mode7,7,BLMASIM);
DLMASIM.fn.fn_global = LRAAOSL_newline;
DLMASIM.nonlocals = A68_NIL;
XKMASIM.data[1] = A_UNITE(CLMASIM,mode12,12,DLMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ELMASIM,XKMASIM,2,A68_52 ));
 /* line 325: */
LJFASIM_dump((*(&((&YHMASIM_code_generator)->Global_memory))), GLMASIM);
 /* line 326: */
LJFASIM_dump((*(&((&YHMASIM_code_generator)->Dynamic_memory))), ILMASIM);
 /* line 327: */
UZGASIM_dump((*(&((&YHMASIM_code_generator)->Stack_allocator))), KLMASIM);
 /* line 328: */
PLMASIM = NLMASIM ;
LLMASIM.data[0] = A_UNITE(OLMASIM,mode7,7,PLMASIM);
RLMASIM.fn.fn_global = LRAAOSL_newline;
RLMASIM.nonlocals = A68_NIL;
LLMASIM.data[1] = A_UNITE(QLMASIM,mode12,12,RLMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SLMASIM,LLMASIM,2,A68_52 ));
 /* line 329: */
SVFASIM_dump((*(&((&YHMASIM_code_generator)->Jump_backpatch_list))), ULMASIM);
 /* line 330: */
ZLMASIM = XLMASIM ;
VLMASIM.data[0] = A_UNITE(YLMASIM,mode7,7,ZLMASIM);
BMMASIM.fn.fn_global = LRAAOSL_newline;
BMMASIM.nonlocals = A68_NIL;
VLMASIM.data[1] = A_UNITE(AMMASIM,mode12,12,BMMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CMMASIM,VLMASIM,2,A68_52 ));
 /* line 331: */
YAGASIM_dump((*(&((&YHMASIM_code_generator)->Jump_spec_list))), EMMASIM);
 /* line 332: */
IGFASIM_dump((*(&((&YHMASIM_code_generator)->Repeat_stack))), GMMASIM);
 /* line 333: */
LMMASIM = JMMASIM ;
HMMASIM.data[0] = A_UNITE(KMMASIM,mode7,7,LMMASIM);
NMMASIM.fn.fn_global = LRAAOSL_newline;
NMMASIM.nonlocals = A68_NIL;
HMMASIM.data[1] = A_UNITE(MMMASIM,mode12,12,NMMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OMMASIM,HMMASIM,2,A68_52 ));
 /* line 334: */
SQFASIM_dump((*(&((&YHMASIM_code_generator)->Named_data_list))), QMMASIM);
 /* line 335: */
VMMASIM = TMMASIM ;
RMMASIM.data[0] = A_UNITE(UMMASIM,mode7,7,VMMASIM);
XMMASIM.fn.fn_global = LRAAOSL_newline;
XMMASIM.nonlocals = A68_NIL;
RMMASIM.data[1] = A_UNITE(WMMASIM,mode12,12,XMMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YMMASIM,RMMASIM,2,A68_52 ));
 /* line 336: */
SQFASIM_dump((*(&((&YHMASIM_code_generator)->Named_code_list))), ANMASIM);
 /* line 337: */
FNMASIM = DNMASIM ;
BNMASIM.data[0] = A_UNITE(ENMASIM,mode7,7,FNMASIM);
HNMASIM.fn.fn_global = LRAAOSL_newline;
HNMASIM.nonlocals = A68_NIL;
BNMASIM.data[1] = A_UNITE(GNMASIM,mode12,12,HNMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(INMASIM,BNMASIM,2,A68_52 ));
 /* line 338: */
SVFASIM_dump((*(&((&YHMASIM_code_generator)->Named_code_backpatch_list))), KNMASIM);
 /* line 339: */
PNMASIM = NNMASIM ;
LNMASIM.data[0] = A_UNITE(ONMASIM,mode7,7,PNMASIM);
RNMASIM.fn.fn_global = LRAAOSL_newline;
RNMASIM.nonlocals = A68_NIL;
LNMASIM.data[1] = A_UNITE(QNMASIM,mode12,12,RNMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SNMASIM,LNMASIM,2,A68_52 ));
 /* line 340: */
NCGASIM_dump((*(&((&YHMASIM_code_generator)->Call_parameter_list))), UNMASIM);
 /* line 341: */
ZNMASIM = XNMASIM ;
VNMASIM.data[0] = A_UNITE(YNMASIM,mode7,7,ZNMASIM);
BOMASIM.fn.fn_global = LRAAOSL_newline;
BOMASIM.nonlocals = A68_NIL;
VNMASIM.data[1] = A_UNITE(AOMASIM,mode12,12,BOMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(COMASIM,VNMASIM,2,A68_52 ));
 /* line 342: */
GOMASIM = (*(&((&YHMASIM_code_generator)->Calls_location))) ;
SNFASIM_dump(A_UNITE(FOMASIM,mode1,1,GOMASIM), EOMASIM);
 /* line 343: */
LOMASIM = JOMASIM ;
HOMASIM.data[0] = A_UNITE(KOMASIM,mode7,7,LOMASIM);
NOMASIM.fn.fn_global = LRAAOSL_newline;
NOMASIM.nonlocals = A68_NIL;
HOMASIM.data[1] = A_UNITE(MOMASIM,mode12,12,NOMASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OOMASIM,HOMASIM,2,A68_52 ));
 /* line 344: */
 /* line 346: */
BBFASIM_dump((*(&((&YHMASIM_code_generator)->Reachable))), QOMASIM);
} 
A_PROC_EXIT(cgdump);
return;
} 
#undef NL

A68_VOID  ROMASIM_cgsizes(A68_498  *ReturnedValue)
{ 
A68_498  SOMASIM;  /* collateral clause result */
A68_498  TOMASIM;  /* clause result */
A_PROC_ENTRY(cgsizes);
 /* line 353: */
SOMASIM.Codesize = KLDASIM_macodesize();
 /* line 354: */
SOMASIM.Datasize = AKFASIM_sizeof((&((&YHMASIM_code_generator)->Global_memory)));
 /* line 356: */
SOMASIM.Dynamicstacksize = AKFASIM_sizeof((&((&YHMASIM_code_generator)->Dynamic_memory)));
SOMASIM.Staticstacksize = 0;
TOMASIM = SOMASIM;
A_PROC_EXIT(cgsizes);
*ReturnedValue = (TOMASIM);
return;
} 
#undef NL
 /* line 359: */

A68_VOID  XOMASIM_cgsavestate(A68_231  Ferryoutstatic, A68_231  Ferryoutdynamic, A68_36  Flt)
{ 
A68_BITS  YOMASIM;  /* ADICOPS - <= */
A68_296  ZOMASIM;  /* avoid structure result */
A68_296  APMASIM;  /* avoid structure result */
A68_296  BPMASIM;  /* avoid structure result */
A68_296  CPMASIM;  /* avoid structure result */
A68_296  DPMASIM;  /* avoid structure result */
A68_296  EPMASIM;  /* avoid structure result */
A68_296  FPMASIM;  /* avoid structure result */
A68_296  GPMASIM;  /* avoid structure result */
A68_36  HPMASIM;  /* procedure value */
A_PROC_ENTRY(cgsavestate);
 /* line 361: */
 /* line 362: */
{ 
 /* line 364: */
YOMASIM = (A68_BITS )(*(&((&YHMASIM_code_generator)->Diagnose))) ;
if ( A_LB_LE(SSAASIM_dumpcodegenerator,YOMASIM) )
{ 
WKMASIM_cgdump();
} 
 /* line 366: */
XPDASIM_machangeflt(Flt);
 /* line 367: */
ZPDASIM_masavestate(Ferryoutstatic);
 /* line 369: */
 /* line 370: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &ZOMASIM );
UIFASIM_save((&((&YHMASIM_code_generator)->Global_memory)), ZOMASIM);
 /* line 371: */
 /* line 372: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &APMASIM );
UIFASIM_save((&((&YHMASIM_code_generator)->Dynamic_memory)), APMASIM);
 /* line 373: */
 /* line 374: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &BPMASIM );
IAHASIM_save((&((&YHMASIM_code_generator)->Stack_allocator)), BPMASIM);
 /* line 380: */
 /* line 381: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &CPMASIM );
IRFASIM_save((*(&((&YHMASIM_code_generator)->Named_data_list))), CPMASIM);
 /* line 382: */
 /* line 383: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &DPMASIM );
IRFASIM_save((*(&((&YHMASIM_code_generator)->Named_code_list))), DPMASIM);
 /* line 387: */
 /* line 388: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &EPMASIM );
DDGASIM_save((*(&((&YHMASIM_code_generator)->Call_parameter_list))), EPMASIM);
 /* line 389: */
 /* line 390: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &FPMASIM );
JCFASIM_save((*(&((&YHMASIM_code_generator)->Calls_location))), FPMASIM);
 /* line 397: */
RAFASIM_ferryoutandflt( Ferryoutdynamic, Flt, &GPMASIM );
JCFASIM_save(AIMASIM_sparespace, GPMASIM);
 /* line 399: */
 /* line 401: */
HPMASIM.fn.fn_global = ZIDASIM_simfault;
HPMASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(HPMASIM);
} 
A_PROC_EXIT(cgsavestate);
return;
} 
#undef NL
 /* line 404: */

A68_VOID  LPMASIM_cgrestorestate(A68_231  Ferryinstatic, A68_231  Ferryindynamic, A68_36  Flt)
{ 
A68_298  MPMASIM;  /* avoid structure result */
A68_298  NPMASIM;  /* avoid structure result */
A68_298  OPMASIM;  /* avoid structure result */
A68_298  PPMASIM;  /* avoid structure result */
A68_298  QPMASIM;  /* avoid structure result */
A68_298  RPMASIM;  /* avoid structure result */
A68_298  SPMASIM;  /* avoid structure result */
A68_298  TPMASIM;  /* avoid structure result */
A68_36  UPMASIM;  /* procedure value */
A68_97  VPMASIM;  /* procedure value */
A68_97  WPMASIM;  /* avoid structure result */
A68_32  XPMASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_97  YPMASIM;  /* procedure value */
A68_97  ZPMASIM;  /* procedure value */
A68_BITS  AQMASIM;  /* ADICOPS - <= */
A_PROC_ENTRY(cgrestorestate);
 /* line 406: */
 /* line 408: */
{ 
XPDASIM_machangeflt(Flt);
 /* line 409: */
BQDASIM_marestorestate(Ferryinstatic);
 /* line 411: */
 /* line 412: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &MPMASIM );
BJFASIM_restore((&((&YHMASIM_code_generator)->Global_memory)), MPMASIM);
 /* line 413: */
 /* line 414: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &NPMASIM );
BJFASIM_restore((&((&YHMASIM_code_generator)->Dynamic_memory)), NPMASIM);
 /* line 415: */
 /* line 416: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &OPMASIM );
LAHASIM_restore((&((&YHMASIM_code_generator)->Stack_allocator)), OPMASIM);
 /* line 422: */
 /* line 423: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &PPMASIM );
ORFASIM_restore((&((&YHMASIM_code_generator)->Named_data_list)), PPMASIM);
 /* line 424: */
 /* line 425: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &QPMASIM );
ORFASIM_restore((&((&YHMASIM_code_generator)->Named_code_list)), QPMASIM);
 /* line 429: */
 /* line 430: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &RPMASIM );
JDGASIM_restore((&((&YHMASIM_code_generator)->Call_parameter_list)), RPMASIM);
 /* line 431: */
 /* line 432: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &SPMASIM );
MCFASIM_restore((&((&YHMASIM_code_generator)->Calls_location)), SPMASIM);
 /* line 439: */
WAFASIM_ferryinandflt( Ferryindynamic, Flt, &TPMASIM );
MCFASIM_restore((&AIMASIM_sparespace), TPMASIM);
 /* line 441: */
UPMASIM.fn.fn_global = ZIDASIM_simfault;
UPMASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(UPMASIM);
 /* line 443: */
GIMASIM_setcaches();
 /* line 445: */
VPMASIM.fn.fn_global = KFAAOST_default_msg;
VPMASIM.nonlocals = A68_NIL;
PLCAOSI_get_sigmsgproc( UECAOSI_sigint, VPMASIM, &WPMASIM );
LJMASIM_old_int_handler = WPMASIM;
 /* line 446: */
YPMASIM.fn.fn_global = IJMASIM_codegen_catch_interrupt;
YPMASIM.nonlocals = A68_NIL;
ZPMASIM.fn.fn_global = KFAAOST_default_msg;
ZPMASIM.nonlocals = A68_NIL;
YJCAOSI_set_sigmsgproc(A_HVEC(XPMASIM,UECAOSI_sigint,A68_INT ), YPMASIM, ZPMASIM);
 /* line 448: */
 /* line 450: */
AQMASIM = (A68_BITS )(*(&((&YHMASIM_code_generator)->Diagnose))) ;
if ( A_LB_LE(SSAASIM_dumpcodegenerator,AQMASIM) )
{ 
 /* line 451: */
WKMASIM_cgdump();
} 
} 
A_PROC_EXIT(cgrestorestate);
return;
} 
#undef NL

A68_VOID  BQMASIM_generatehalt(void)
{ 
A68_BOOL * CQMASIM;  /* YIELD */
A68_239  DQMASIM;  /* collateral clause result */
A68_240  EQMASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FQMASIM_loop;
A68_238  GQMASIM;  /* collateral clause result */
A68_240  HQMASIM;  /* OPERATORS - mode -> union mode */
A68_257  IQMASIM;  /* avoid structure result */
A68_238  JQMASIM;  /* collateral clause result */
A68_240  KQMASIM;  /* OPERATORS - mode -> union mode */
A68_238  LQMASIM;  /* collateral clause result */
A68_240  MQMASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(generatehalt);
 /* line 458: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
NAHASIM_clear((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 459: */
CQMASIM = (&((&YHMASIM_code_generator)->Reachable)) ;
(*CQMASIM) = A68_FALSE;
 /* line 461: */
DQMASIM.Rs1 = TEGASIM_globalpointer;
DQMASIM.Imm = (-4);
DQMASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TEEASIM_ld, A_UNITE(EQMASIM,mode2,2,DQMASIM));
 /* line 462: */
FQMASIM_loop = GLDASIM_location;
 /* line 463: */
GQMASIM.Rs1 = NEGASIM_tempreg1;
GQMASIM.Rs2 = PXEASIM_fp;
GQMASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(HQMASIM,mode1,1,GQMASIM));
 /* line 464: */
VXDASIM_( FZDASIM_b, CXDASIM_ne_a, &IQMASIM );
YQEASIM_using(IQMASIM, FQMASIM_loop);
 /* line 465: */
JQMASIM.Rs1 = FVEASIM_g0;
JQMASIM.Rs2 = FVEASIM_g0;
JQMASIM.Rd = FVEASIM_g0;
ISEASIM_using(PEEASIM_restore, A_UNITE(KQMASIM,mode1,1,JQMASIM));
 /* line 467: */
CYEASIM_maret();
 /* line 468: */
LQMASIM.Rs1 = FVEASIM_g0;
LQMASIM.Rs2 = FVEASIM_g0;
 /* line 470: */
LQMASIM.Rd = FVEASIM_g0;
ISEASIM_using(PEEASIM_restore, A_UNITE(MQMASIM,mode1,1,LQMASIM));
} 
A_PROC_EXIT(generatehalt);
return;
} 
#undef NL

A68_VOID  NQMASIM_generateadd(void)
{ 
A_PROC_ENTRY(generateadd);
 /* line 475: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 476: */
 /* line 477: */
XHIASIM_add((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateadd);
return;
} 
#undef NL

A68_VOID  OQMASIM_generatesub(void)
{ 
A68_240  PQMASIM;  /* avoid structure result */
A68_235  QQMASIM;  /* collateral clause result */
A68_237  RQMASIM;  /* OPERATORS - mode -> union mode */
A68_262  SQMASIM;  /* avoid structure result */
A_PROC_ENTRY(generatesub);
 /* line 482: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 483: */
LHHASIM_nonassocdyop( (&((&YHMASIM_code_generator)->Stack_allocator)), &PQMASIM );
ISEASIM_using(HCEASIM_subcc, PQMASIM);
 /* line 484: */
QQMASIM.Rs1 = FVEASIM_g0;
QQMASIM.Imm = CPEASIM_t_int_overflow;
FYDASIM_( LOEASIM_t, GWDASIM_vs, &SQMASIM );
BTEASIM_using(SQMASIM, A_UNITE(RQMASIM,mode2,2,QQMASIM));
 /* line 485: */
 /* line 486: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatesub);
return;
} 
#undef NL

A68_VOID  TQMASIM_generatemul(void)
{ 
A_PROC_ENTRY(generatemul);
 /* line 491: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 492: */
 /* line 493: */
MMIASIM_mul((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatemul);
return;
} 
#undef NL

A68_VOID  UQMASIM_generatediv(void)
{ 
A_PROC_ENTRY(generatediv);
 /* line 498: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 499: */
 /* line 500: */
NNIASIM_div((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatediv);
return;
} 
#undef NL

A68_VOID  VQMASIM_generatemod(void)
{ 
A_PROC_ENTRY(generatemod);
 /* line 505: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 506: */
 /* line 507: */
AOIASIM_mod((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatemod);
return;
} 
#undef NL

A68_VOID  WQMASIM_generateneg(void)
{ 
A68_240  XQMASIM;  /* avoid structure result */
A68_235  YQMASIM;  /* collateral clause result */
A68_237  ZQMASIM;  /* OPERATORS - mode -> union mode */
A68_262  ARMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateneg);
 /* line 512: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 513: */
SGHASIM_monop( (&((&YHMASIM_code_generator)->Stack_allocator)), &XQMASIM );
ISEASIM_using(HCEASIM_subcc, XQMASIM);
 /* line 514: */
YQMASIM.Rs1 = FVEASIM_g0;
 /* line 515: */
YQMASIM.Imm = CPEASIM_t_int_overflow;
FYDASIM_( LOEASIM_t, GWDASIM_vs, &ARMASIM );
BTEASIM_using(ARMASIM, A_UNITE(ZQMASIM,mode2,2,YQMASIM));
} 
A_PROC_EXIT(generateneg);
return;
} 
#undef NL

A68_VOID  BRMASIM_generateabs(void)
{ 
A68_232  CRMASIM_branchlabel;
A68_240  ERMASIM;  /* avoid structure result */
A68_240  DRMASIM_result;
A68_259  FRMASIM;  /* avoid structure result */
A68_235  GRMASIM;  /* collateral clause result */
A68_237  HRMASIM;  /* OPERATORS - mode -> union mode */
A68_262  IRMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateabs);
 /* line 520: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 521: */
 /* line 522: */
SGHASIM_monop( (&((&YHMASIM_code_generator)->Stack_allocator)), &ERMASIM );
DRMASIM_result = ERMASIM;
 /* line 523: */
ISEASIM_using(ZBEASIM_orcc, DRMASIM_result);
 /* line 524: */
AYDASIM_( RZDASIM_bd, JXDASIM_pos_a, &FRMASIM );
ASEASIM_using(FRMASIM, (&CRMASIM_branchlabel));
 /* line 525: */
ISEASIM_using(HCEASIM_subcc, DRMASIM_result);
 /* line 526: */
GRMASIM.Rs1 = FVEASIM_g0;
GRMASIM.Imm = CPEASIM_t_int_overflow;
FYDASIM_( LOEASIM_t, GWDASIM_vs, &IRMASIM );
BTEASIM_using(IRMASIM, A_UNITE(HRMASIM,mode2,2,GRMASIM));
 /* line 527: */
 /* line 528: */
TXEASIM_fixmachinelabel(CRMASIM_branchlabel);
} 
A_PROC_EXIT(generateabs);
return;
} 
#undef NL

A68_VOID  JRMASIM_generateiand(void)
{ 
A68_240  KRMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateiand);
 /* line 533: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 534: */
BIHASIM_assocdyop( (&((&YHMASIM_code_generator)->Stack_allocator)), &KRMASIM );
ISEASIM_using(HAEASIM_and, KRMASIM);
 /* line 535: */
 /* line 537: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateiand);
return;
} 
#undef NL

A68_VOID  LRMASIM_generateior(void)
{ 
A68_240  MRMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateior);
 /* line 542: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 543: */
BIHASIM_assocdyop( (&((&YHMASIM_code_generator)->Stack_allocator)), &MRMASIM );
ISEASIM_using(LAEASIM_or, MRMASIM);
 /* line 544: */
 /* line 545: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateior);
return;
} 
#undef NL

A68_VOID  NRMASIM_generateshl(void)
{ 
A_PROC_ENTRY(generateshl);
 /* line 550: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 551: */
 /* line 552: */
WIIASIM_shl((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateshl);
return;
} 
#undef NL

A68_VOID  ORMASIM_generateshr(void)
{ 
A_PROC_ENTRY(generateshr);
 /* line 557: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 558: */
 /* line 559: */
RKIASIM_shr((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateshr);
return;
} 
#undef NL

A68_VOID  PRMASIM_generatecom(void)
{ 
A68_240  QRMASIM;  /* avoid structure result */
A_PROC_ENTRY(generatecom);
 /* line 564: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 565: */
 /* line 566: */
SGHASIM_monop( (&((&YHMASIM_code_generator)->Stack_allocator)), &QRMASIM );
ISEASIM_using(FBEASIM_xnor, QRMASIM);
} 
A_PROC_EXIT(generatecom);
return;
} 
#undef NL

A68_VOID  RRMASIM_generatenot(void)
{ 
A_PROC_ENTRY(generatenot);
 /* line 572: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
OIIASIM_not((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatenot);
return;
} 
#undef NL

A68_VOID  SRMASIM_generatetest(void)
{ 
A_PROC_ENTRY(generatetest);
 /* line 577: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 578: */
 /* line 579: */
KPIASIM_test((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatetest);
return;
} 
#undef NL

A68_VOID  TRMASIM_generateeq(void)
{ 
A_PROC_ENTRY(generateeq);
 /* line 584: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 585: */
 /* line 586: */
UQIASIM_eq((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateeq);
return;
} 
#undef NL

A68_VOID  URMASIM_generateneq(void)
{ 
A_PROC_ENTRY(generateneq);
 /* line 591: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
TRMASIM_generateeq();
 /* line 592: */
 /* line 593: */
RRMASIM_generatenot();
} 
A_PROC_EXIT(generateneq);
return;
} 
#undef NL

A68_VOID  VRMASIM_generategt(void)
{ 
A_PROC_ENTRY(generategt);
 /* line 598: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 599: */
 /* line 600: */
YPIASIM_genericrelation((&((&YHMASIM_code_generator)->Stack_allocator)), KWDASIM_g);
} 
A_PROC_EXIT(generategt);
return;
} 
#undef NL

A68_VOID  WRMASIM_generatege(void)
{ 
A_PROC_ENTRY(generatege);
 /* line 605: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 606: */
 /* line 607: */
YPIASIM_genericrelation((&((&YHMASIM_code_generator)->Stack_allocator)), LWDASIM_ge);
} 
A_PROC_EXIT(generatege);
return;
} 
#undef NL

A68_VOID  XRMASIM_generatelt(void)
{ 
A_PROC_ENTRY(generatelt);
 /* line 612: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 613: */
 /* line 614: */
YPIASIM_genericrelation((&((&YHMASIM_code_generator)->Stack_allocator)), BWDASIM_l);
} 
A_PROC_EXIT(generatelt);
return;
} 
#undef NL

A68_VOID  YRMASIM_generatele(void)
{ 
A_PROC_ENTRY(generatele);
 /* line 619: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 620: */
 /* line 621: */
YPIASIM_genericrelation((&((&YHMASIM_code_generator)->Stack_allocator)), AWDASIM_le);
} 
A_PROC_EXIT(generatele);
return;
} 
#undef NL

A68_VOID  ZRMASIM_generateand(void)
{ 
A68_240  ASMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateand);
 /* line 626: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 627: */
BIHASIM_assocdyop( (&((&YHMASIM_code_generator)->Stack_allocator)), &ASMASIM );
ISEASIM_using(HAEASIM_and, ASMASIM);
 /* line 628: */
 /* line 629: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateand);
return;
} 
#undef NL

A68_VOID  BSMASIM_generateor(void)
{ 
A68_240  CSMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateor);
 /* line 634: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 635: */
BIHASIM_assocdyop( (&((&YHMASIM_code_generator)->Stack_allocator)), &CSMASIM );
ISEASIM_using(LAEASIM_or, CSMASIM);
 /* line 636: */
 /* line 638: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generateor);
return;
} 
#undef NL

A68_VOID  FSMASIM_generatepushstring(A68_INT  B, A68_VC  X)
{ 
A68_471  GSMASIM;  /* avoid structure result */
A_PROC_ENTRY(generatepushstring);
 /* line 642: */
 /* line 643: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 644: */
 /* line 645: */
BUIASIM_len( X, B, &GSMASIM );
GUIASIM_pushconst((&((&YHMASIM_code_generator)->Stack_allocator)), GSMASIM);
} 
A_PROC_EXIT(generatepushstring);
return;
} 
#undef NL

A68_VOID  ISMASIM_generatepushint(A68_INT  X)
{ 
A_PROC_ENTRY(generatepushint);
 /* line 649: */
 /* line 650: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 651: */
 /* line 652: */
YTIASIM_pushint((&((&YHMASIM_code_generator)->Stack_allocator)), X);
} 
A_PROC_EXIT(generatepushint);
return;
} 
#undef NL

A68_VOID  KSMASIM_generatedrop(A68_INT  N)
{ 
A_PROC_ENTRY(generatedrop);
 /* line 656: */
 /* line 657: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 658: */
 /* line 659: */
SXIASIM_drop((&((&YHMASIM_code_generator)->Stack_allocator)), N);
} 
A_PROC_EXIT(generatedrop);
return;
} 
#undef NL

A68_VOID  MSMASIM_generatelocal(A68_INT  N)
{ 
A_PROC_ENTRY(generatelocal);
 /* line 663: */
 /* line 664: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 665: */
 /* line 666: */
HYHASIM_local((&((&YHMASIM_code_generator)->Stack_allocator)), N);
} 
A_PROC_EXIT(generatelocal);
return;
} 
#undef NL

A68_VOID  PSMASIM_generateglobal(A68_INT  W, A68_331  A)
{ 
A68_331  QSMASIM;  /* united object - for case conformity */
A68_INT  RSMASIM_o;
A68_279  SSMASIM_l;
A_PROC_ENTRY(generateglobal);
 /* line 670: */
 /* line 671: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 673: */
 /* line 674: */
QSMASIM = A ;
switch ( QSMASIM.mode )
{ 
case 1: /* INT */
RSMASIM_o = (QSMASIM.data.mode1);
 /* line 675: */
 /* line 676: */
{ 
ISMASIM_generatepushint(RSMASIM_o);
 /* line 677: */
 /* line 678: */
 /* line 680: */
PSMASIM_generateglobal(W, ONFASIM_indirect);
} 
break;
case 2: /* STRUCT(INT,REF MODE26)  */
SSMASIM_l = (QSMASIM.data.mode2);
 /* line 681: */
 /* line 682: */
{ 
ISMASIM_generatepushint(XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), SSMASIM_l));
 /* line 683: */
 /* line 684: */
 /* line 686: */
PSMASIM_generateglobal(W, ONFASIM_indirect);
} 
break;
case 3: /* VOID */
 /* line 687: */
 /* line 688: */
 /* line 689: */
JZHASIM_global((&((&YHMASIM_code_generator)->Stack_allocator)), W);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(generateglobal);
return;
} 
#undef NL

A68_VOID  VSMASIM_generatestore(A68_INT  W, A68_331  A)
{ 
A68_331  WSMASIM;  /* united object - for case conformity */
A68_INT  XSMASIM_o;
A68_320  YSMASIM;  /* avoid structure result */
A68_467  ZSMASIM;  /* avoid structure result */
A68_279  ATMASIM_l;
A68_320  BTMASIM;  /* avoid structure result */
A68_467  CTMASIM;  /* avoid structure result */
A68_320  DTMASIM;  /* avoid structure result */
A68_467  ETMASIM;  /* avoid structure result */
A_PROC_ENTRY(generatestore);
 /* line 693: */
 /* line 697: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 698: */
 /* line 699: */
WSMASIM = A ;
switch ( WSMASIM.mode )
{ 
case 1: /* INT */
XSMASIM_o = (WSMASIM.data.mode1);
 /* line 700: */
 /* line 701: */
{ 
ISMASIM_generatepushint(XSMASIM_o);
 /* line 702: */
 /* line 703: */
 /* line 705: */
HKFASIM_len( FZGASIM_tos1, W, &YSMASIM );
PZHASIM_att( YSMASIM, EZGASIM_tos, &ZSMASIM );
UZHASIM_store((&((&YHMASIM_code_generator)->Stack_allocator)), ZSMASIM);
} 
break;
case 2: /* STRUCT(INT,REF MODE26)  */
ATMASIM_l = (WSMASIM.data.mode2);
 /* line 706: */
 /* line 707: */
{ 
ISMASIM_generatepushint(XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), ATMASIM_l));
 /* line 708: */
 /* line 709: */
 /* line 711: */
HKFASIM_len( FZGASIM_tos1, W, &BTMASIM );
PZHASIM_att( BTMASIM, EZGASIM_tos, &CTMASIM );
UZHASIM_store((&((&YHMASIM_code_generator)->Stack_allocator)), CTMASIM);
} 
break;
case 3: /* VOID */
 /* line 712: */
 /* line 714: */
 /* line 715: */
HKFASIM_len( EZGASIM_tos, W, &DTMASIM );
PZHASIM_att( DTMASIM, FZGASIM_tos1, &ETMASIM );
UZHASIM_store((&((&YHMASIM_code_generator)->Stack_allocator)), ETMASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(generatestore);
return;
} 
#undef NL

A68_VOID  ITMASIM_generatebstring(A68_INT  W, A68_INT  L, A68_331  A)
{ 
A68_331  JTMASIM;  /* united object - for case conformity */
A68_INT  KTMASIM_o;
A68_279  LTMASIM_lab;
A_PROC_ENTRY(generatebstring);
 /* line 720: */
 /* line 721: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 723: */
 /* line 724: */
JTMASIM = A ;
switch ( JTMASIM.mode )
{ 
case 1: /* INT */
KTMASIM_o = (JTMASIM.data.mode1);
 /* line 725: */
 /* line 726: */
{ 
ISMASIM_generatepushint(KTMASIM_o);
 /* line 727: */
 /* line 728: */
 /* line 729: */
ITMASIM_generatebstring(W, L, ONFASIM_indirect);
} 
break;
case 2: /* STRUCT(INT,REF MODE26)  */
LTMASIM_lab = (JTMASIM.data.mode2);
 /* line 730: */
 /* line 731: */
{ 
ISMASIM_generatepushint(XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), LTMASIM_lab));
 /* line 732: */
 /* line 733: */
 /* line 734: */
ITMASIM_generatebstring(W, L, ONFASIM_indirect);
} 
break;
case 3: /* VOID */
 /* line 735: */
 /* line 736: */
 /* line 738: */
NAIASIM_bstring((&((&YHMASIM_code_generator)->Stack_allocator)), W);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(generatebstring);
return;
} 
#undef NL

A68_VOID  OTMASIM_generatebstore(A68_INT  Bw, A68_331  A)
{ 
A_PROC_ENTRY(generatebstore);
 /* line 742: */
 /* line 743: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 744: */
 /* line 745: */
VSMASIM_generatestore(((Bw+7)/8), A);
} 
A_PROC_EXIT(generatebstore);
return;
} 
#undef NL

A68_VOID  QTMASIM_generateitos(A68_INT  Bw)
{ 
A_PROC_ENTRY(generateitos);
 /* line 748: */
 /* line 749: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
 /* line 750: */
GXIASIM_itos((&((&YHMASIM_code_generator)->Stack_allocator)), Bw);
} 
A_PROC_EXIT(generateitos);
return;
} 
#undef NL

A68_VOID  STMASIM_generateutos(A68_INT  Bw)
{ 
A_PROC_ENTRY(generateutos);
 /* line 753: */
 /* line 754: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
 /* line 755: */
KXIASIM_utos((&((&YHMASIM_code_generator)->Stack_allocator)), Bw);
} 
A_PROC_EXIT(generateutos);
return;
} 
#undef NL

A68_VOID  TTMASIM_generatestoi(void)
{ 
A_PROC_ENTRY(generatestoi);
 /* line 760: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
NXIASIM_stoi((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatestoi);
return;
} 
#undef NL

A68_VOID  UTMASIM_generatestou(void)
{ 
A_PROC_ENTRY(generatestou);
 /* line 765: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
PXIASIM_stou((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
A_PROC_EXIT(generatestou);
return;
} 
#undef NL

A68_VOID  WTMASIM_generatejump(A68_279  L)
{ 
A68_232  XTMASIM_ml;
A68_259  YTMASIM;  /* avoid structure result */
A68_358  ZTMASIM;  /* avoid structure result */
A68_375  AUMASIM;  /* avoid structure result */
A68_BOOL * BUMASIM;  /* YIELD */
A_PROC_ENTRY(generatejump);
 /* line 769: */
 /* line 771: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 772: */
FOHASIM_conform((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 774: */
 /* line 775: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &YTMASIM );
ASEASIM_using(YTMASIM, (&XTMASIM_ml));
 /* line 777: */
IWFASIM_att( XTMASIM_ml, L, &ZTMASIM );
NWFASIM_write((&((&YHMASIM_code_generator)->Jump_backpatch_list)), ZTMASIM);
 /* line 778: */
 /* line 779: */
if ( !OBGASIM_present((*(&((&YHMASIM_code_generator)->Jump_spec_list))), L) )
{ 
 /* line 780: */
 /* line 781: */
AAGASIM_labeledspec( L, LXHASIM_derivespec((&((&YHMASIM_code_generator)->Stack_allocator))), &AUMASIM );
CCGASIM_write((&((&YHMASIM_code_generator)->Jump_spec_list)), AUMASIM);
} 
 /* line 782: */
NAHASIM_clear((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 783: */
 /* line 785: */
BUMASIM = (&((&YHMASIM_code_generator)->Reachable)) ;
(*BUMASIM) = A68_FALSE;
} 
A_PROC_EXIT(generatejump);
return;
} 
#undef NL

A68_VOID  EUMASIM_generatejumpno(A68_INT  D, A68_279  L)
{ 
A68_232  FUMASIM_over;
A68_286  GUMASIM;  /* avoid structure result */
A68_286  HUMASIM;  /* united object - for case conformity */
A68_292  IUMASIM_cc;
A68_259  JUMASIM;  /* avoid structure result */
A68_240  KUMASIM;  /* avoid structure result */
A68_259  LUMASIM;  /* avoid structure result */
A68_278  MUMASIM_savedstack;
A68_INT  NUMASIM;  /* to part of loop */
A68_INT  OUMASIM;  /* loop control */
A68_232  PUMASIM_ml;
A68_259  QUMASIM;  /* avoid structure result */
A68_358  RUMASIM;  /* avoid structure result */
A68_375  SUMASIM;  /* avoid structure result */
A68_278 * TUMASIM;  /* YIELD */
A_PROC_ENTRY(generatejumpno);
 /* line 789: */
 /* line 791: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
 /* line 793: */
HGHASIM_transmutesmall((&((&YHMASIM_code_generator)->Stack_allocator)), EZGASIM_tos);
 /* line 794: */
 /* line 795: */
PVGASIM_stateof( (&((&((&YHMASIM_code_generator)->Stack_allocator))->Location_stack)), EZGASIM_tos, &GUMASIM );
HUMASIM = GUMASIM ;
switch ( HUMASIM.mode )
{ 
case 6: /* STRUCT(BITS)  */
IUMASIM_cc = (HUMASIM.data.mode6);
 /* line 796: */
 /* line 797: */
{ 
AYDASIM_( RZDASIM_bd, (A68_BITS )(IUMASIM_cc.Condition|RWDASIM_n_a), &JUMASIM );
ASEASIM_using(JUMASIM, (&FUMASIM_over));
 /* line 798: */
 /* line 799: */
 /* line 800: */
 /* line 801: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
break;
default: 
 /* line 802: */
{ 
SGHASIM_monop( (&((&YHMASIM_code_generator)->Stack_allocator)), &KUMASIM );
ISEASIM_using(ZBEASIM_orcc, KUMASIM);
 /* line 803: */
AYDASIM_( RZDASIM_bd, CXDASIM_ne_a, &LUMASIM );
ASEASIM_using(LUMASIM, (&FUMASIM_over));
 /* line 804: */
 /* line 805: */
 /* line 806: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
break;
} 
 /* line 808: */
MUMASIM_savedstack = (*NZGASIM_new((&((&YHMASIM_code_generator)->Stack_allocator))));
 /* line 810: */
NUMASIM = D;
for ( OUMASIM = 1;
OUMASIM <= NUMASIM;
OUMASIM += 1 )
{ 
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
}
 /* line 812: */
FOHASIM_conform((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 814: */
 /* line 815: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &QUMASIM );
ASEASIM_using(QUMASIM, (&PUMASIM_ml));
 /* line 816: */
IWFASIM_att( PUMASIM_ml, L, &RUMASIM );
NWFASIM_write((&((&YHMASIM_code_generator)->Jump_backpatch_list)), RUMASIM);
 /* line 817: */
 /* line 818: */
if ( !OBGASIM_present((*(&((&YHMASIM_code_generator)->Jump_spec_list))), L) )
{ 
 /* line 819: */
 /* line 820: */
AAGASIM_labeledspec( L, LXHASIM_derivespec((&((&YHMASIM_code_generator)->Stack_allocator))), &SUMASIM );
CCGASIM_write((&((&YHMASIM_code_generator)->Jump_spec_list)), SUMASIM);
} 
 /* line 822: */
TXEASIM_fixmachinelabel(FUMASIM_over);
 /* line 823: */
 /* line 825: */
TUMASIM = (&((&YHMASIM_code_generator)->Stack_allocator)) ;
(*TUMASIM) = MUMASIM_savedstack;
} 
A_PROC_EXIT(generatejumpno);
return;
} 
#undef NL

A68_VOID  WUMASIM_generatelabel(A68_INT  Stacksize, A68_279  L)
{ 
A68_BOOL * XUMASIM;  /* YIELD */
A68_346 * YUMASIM_patches;
A68_232  ZUMASIM;  /* avoid structure result */
A_PROC_ENTRY(generatelabel);
 /* line 829: */
 /* line 830: */
{ 
 /* line 831: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 832: */
FOHASIM_conform((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 833: */
 /* line 834: */
if ( OBGASIM_present((*(&((&YHMASIM_code_generator)->Jump_spec_list))), L) )
{ 
 /* line 835: */
 /* line 836: */
UBGASIM_lookupremove((&((&YHMASIM_code_generator)->Jump_spec_list)), L);
} 
} 
else
{ 
 /* line 837: */
if ( OBGASIM_present((*(&((&YHMASIM_code_generator)->Jump_spec_list))), L) )
{ 
 /* line 838: */
BXHASIM_createspec((&((&YHMASIM_code_generator)->Stack_allocator)), UBGASIM_lookupremove((&((&YHMASIM_code_generator)->Jump_spec_list)), L));
 /* line 839: */
 /* line 840: */
XUMASIM = (&((&YHMASIM_code_generator)->Reachable)) ;
(*XUMASIM) = A68_TRUE;
} 
} 
 /* line 842: */
 /* line 843: */
YUMASIM_patches = VWFASIM_lookupremove((&((&YHMASIM_code_generator)->Jump_backpatch_list)), L);
 /* line 844: */
for ( ;; )
{ 
if ( !(!RUFASIM_cleared(YUMASIM_patches)) ) break;
NUFASIM_pop( (&YUMASIM_patches), &ZUMASIM );
TXEASIM_fixmachinelabel(ZUMASIM);
}
 /* line 845: */
 /* line 846: */
MJMASIM_mark_relative_code_region();
} 
A_PROC_EXIT(generatelabel);
return;
} 
#undef NL

A68_VOID  AVMASIM_generaterepeat(void)
{ 
A_PROC_ENTRY(generaterepeat);
 /* line 852: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 854: */
FOHASIM_conform((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 855: */
FHFASIM_push((&((&YHMASIM_code_generator)->Repeat_stack)), GLDASIM_location);
 /* line 856: */
 /* line 858: */
MJMASIM_mark_relative_code_region();
} 
A_PROC_EXIT(generaterepeat);
return;
} 
#undef NL

A68_VOID  BVMASIM_generateloop(void)
{ 
A68_232  CVMASIM_over;
A68_286  DVMASIM;  /* avoid structure result */
A68_286  EVMASIM;  /* united object - for case conformity */
A68_292  FVMASIM_cc;
A68_259  GVMASIM;  /* avoid structure result */
A68_240  HVMASIM;  /* avoid structure result */
A68_259  IVMASIM;  /* avoid structure result */
A68_278  JVMASIM_savedstack;
A68_259  KVMASIM;  /* avoid structure result */
A68_278 * LVMASIM;  /* YIELD */
A_PROC_ENTRY(generateloop);
 /* line 864: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
 /* line 866: */
HGHASIM_transmutesmall((&((&YHMASIM_code_generator)->Stack_allocator)), EZGASIM_tos);
 /* line 867: */
 /* line 868: */
PVGASIM_stateof( (&((&((&YHMASIM_code_generator)->Stack_allocator))->Location_stack)), EZGASIM_tos, &DVMASIM );
EVMASIM = DVMASIM ;
switch ( EVMASIM.mode )
{ 
case 6: /* STRUCT(BITS)  */
FVMASIM_cc = (EVMASIM.data.mode6);
 /* line 869: */
 /* line 870: */
{ 
AYDASIM_( RZDASIM_bd, (A68_BITS )(MXDASIM_invcondition(FVMASIM_cc.Condition)|RWDASIM_n_a), &GVMASIM );
ASEASIM_using(GVMASIM, (&CVMASIM_over));
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
break;
default: 
 /* line 875: */
{ 
SGHASIM_monop( (&((&YHMASIM_code_generator)->Stack_allocator)), &HVMASIM );
ISEASIM_using(ZBEASIM_orcc, HVMASIM);
 /* line 876: */
AYDASIM_( RZDASIM_bd, SWDASIM_eq_a, &IVMASIM );
ASEASIM_using(IVMASIM, (&CVMASIM_over));
 /* line 877: */
 /* line 878: */
 /* line 879: */
IHHASIM_pop((&((&YHMASIM_code_generator)->Stack_allocator)));
} 
break;
} 
 /* line 881: */
JVMASIM_savedstack = (*NZGASIM_new((&((&YHMASIM_code_generator)->Stack_allocator))));
 /* line 882: */
FOHASIM_conform((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 883: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &KVMASIM );
PREASIM_using(KVMASIM, JHFASIM_pop((&((&YHMASIM_code_generator)->Repeat_stack))));
 /* line 885: */
TXEASIM_fixmachinelabel(CVMASIM_over);
 /* line 886: */
 /* line 888: */
LVMASIM = (&((&YHMASIM_code_generator)->Stack_allocator)) ;
(*LVMASIM) = JVMASIM_savedstack;
} 
A_PROC_EXIT(generateloop);
return;
} 
#undef NL

A68_VOID  WVMASIM_generatecallinst(A68_331  Addr, A68_279  L)
{ 
A68_232  XVMASIM_skip;
A68_331  YVMASIM;  /* united object - for case conformity */
A68_INT  ZVMASIM_o;
A68_279  AWMASIM_lab;
A68_238  BWMASIM;  /* collateral clause result */
A68_240  CWMASIM;  /* OPERATORS - mode -> union mode */
A68_287  DWMASIM;  /* avoid structure result */
A68_286  EWMASIM;  /* OPERATORS - mode -> union mode */
A68_437  FWMASIM;  /* avoid structure result */
A68_INT  GWMASIM_paramsadvanced;
A68_238  HWMASIM;  /* collateral clause result */
A68_240  IWMASIM;  /* OPERATORS - mode -> union mode */
A68_238  JWMASIM;  /* collateral clause result */
A68_240  KWMASIM;  /* OPERATORS - mode -> union mode */
A68_INT  LWMASIM_destination;
A68_BOOL  MWMASIM;  /* optbool result */
A68_INT  NWMASIM;  /* ADICOPS - ABS INT */
A68_BOOL  OWMASIM_uselongbranch;
A68_259  PWMASIM;  /* avoid structure result */
A68_239  QWMASIM;  /* collateral clause result */
A68_240  RWMASIM;  /* OPERATORS - mode -> union mode */
A68_238  SWMASIM;  /* collateral clause result */
A68_240  TWMASIM;  /* OPERATORS - mode -> union mode */
A68_INT  UWMASIM_retaddr;
A68_257  VWMASIM;  /* avoid structure result */
A68_239  WWMASIM;  /* collateral clause result */
A68_240  XWMASIM;  /* OPERATORS - mode -> union mode */
A68_INT * YWMASIM;  /* YIELD */
A68_232  ZWMASIM_ml;
A68_358  AXMASIM;  /* avoid structure result */
A68_239  BXMASIM;  /* collateral clause result */
A68_240  CXMASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(generatecallinst);
 /* line 895: */
 /* line 896: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 898: */
 /* line 899: */
 /* line 900: */
YVMASIM = Addr ;
switch ( YVMASIM.mode )
{ 
case 1: /* INT */
ZVMASIM_o = (YVMASIM.data.mode1);
 /* line 901: */
 /* line 902: */
MYEASIM_maaddrir(TEGASIM_globalpointer, ZVMASIM_o, FVEASIM_g0, REGASIM_callinstpointer);
break;
case 2: /* STRUCT(INT,REF MODE26)  */
AWMASIM_lab = (YVMASIM.data.mode2);
 /* line 903: */
 /* line 904: */
{ 
ISMASIM_generatepushint(XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_data_list))), AWMASIM_lab));
 /* line 905: */
 /* line 906: */
 /* line 907: */
WVMASIM_generatecallinst(ONFASIM_indirect, L);
} 
break;
case 3: /* VOID */
 /* line 908: */
 /* line 909: */
{ 
 /* line 910: */
BWMASIM.Rs1 = KBHASIM_rsource((&((&YHMASIM_code_generator)->Stack_allocator)), EZGASIM_tos);
BWMASIM.Rs2 = TEGASIM_globalpointer;
BWMASIM.Rd = REGASIM_callinstpointer;
ISEASIM_using(DAEASIM_add, A_UNITE(CWMASIM,mode1,1,BWMASIM));
 /* line 911: */
 /* line 912: */
 /* line 913: */
SXIASIM_drop((&((&YHMASIM_code_generator)->Stack_allocator)), 1);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 919: */
EPHASIM_pushnewstacklocation((&((&YHMASIM_code_generator)->Stack_allocator)), 32);
 /* line 920: */
 /* line 921: */
IIGASIM_inregister( A68_TRUE, &DWMASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(EWMASIM,mode1,1,DWMASIM), &FWMASIM );
MWGASIM_changestateof((&((&((&YHMASIM_code_generator)->Stack_allocator))->Location_stack)), FWMASIM);
 /* line 923: */
 /* line 924: */
GWMASIM_paramsadvanced = ZPHASIM_advance((&((&YHMASIM_code_generator)->Stack_allocator)), OVMASIM_instparams);
 /* line 928: */
HWMASIM.Rs1 = FVEASIM_g0;
HWMASIM.Rs2 = REGASIM_callinstpointer;
HWMASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TEEASIM_ld, A_UNITE(IWMASIM,mode1,1,HWMASIM));
 /* line 929: */
JWMASIM.Rs1 = NEGASIM_tempreg1;
JWMASIM.Rs2 = NEGASIM_tempreg1;
JWMASIM.Rd = FVEASIM_g0;
ISEASIM_using(ZBEASIM_orcc, A_UNITE(KWMASIM,mode1,1,JWMASIM));
 /* line 931: */
 /* line 932: */
LWMASIM_destination = IKMASIM_lookup((*(&((&YHMASIM_code_generator)->Named_code_array))), L);
 /* line 934: */
 /* line 935: */
MWMASIM = !(*(&((&YHMASIM_code_generator)->Incallsarray)));
if ( ! MWMASIM )
{MWMASIM = (LWMASIM_destination==MPDASIM_nullmachineoffset);
}
 /* line 936: */
if ( ! MWMASIM )
{MWMASIM = (GWMASIM_paramsadvanced!=1);
}
 /* line 937: */
if ( ! MWMASIM )
{NWMASIM = (LWMASIM_destination-GLDASIM_location) ;
MWMASIM = ((A_ABS(NWMASIM)/4)>LQDASIM_maximm22);
}
OWMASIM_uselongbranch = MWMASIM;
 /* line 940: */
 /* line 941: */
if ( OWMASIM_uselongbranch )
{ 
 /* line 942: */
AYDASIM_( RZDASIM_bd, SWDASIM_eq_a, &PWMASIM );
ASEASIM_using(PWMASIM, (&XVMASIM_skip));
} 
 /* line 944: */
 /* line 948: */
if ( (GWMASIM_paramsadvanced!=1) )
{ 
XIHASIM_calculatenewdynamicaddr((&((&YHMASIM_code_generator)->Stack_allocator)), EZGASIM_tos);
 /* line 950: */
QWMASIM.Rs1 = PXEASIM_fp;
QWMASIM.Imm = (-4);
QWMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(JFEASIM_st, A_UNITE(RWMASIM,mode2,2,QWMASIM));
 /* line 951: */
SWMASIM.Rs1 = FVEASIM_g0;
SWMASIM.Rs2 = PEGASIM_tempreg3;
 /* line 952: */
SWMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(LAEASIM_or, A_UNITE(TWMASIM,mode1,1,SWMASIM));
} 
 /* line 954: */
 /* line 955: */
if ( !OWMASIM_uselongbranch )
{ 
UWMASIM_retaddr = GLDASIM_location;
 /* line 956: */
VXDASIM_( FZDASIM_b, IWDASIM_ne, &VWMASIM );
YQEASIM_using(VWMASIM, LWMASIM_destination);
 /* line 957: */
WWMASIM.Rs1 = JWEASIM_r15;
WWMASIM.Imm = (UWMASIM_retaddr-(*(&((&YHMASIM_code_generator)->Lastretaddress))));
WWMASIM.Rd = JWEASIM_r15;
ISEASIM_using(DAEASIM_add, A_UNITE(XWMASIM,mode2,2,WWMASIM));
 /* line 958: */
 /* line 959: */
YWMASIM = (&((&YHMASIM_code_generator)->Lastretaddress)) ;
(*YWMASIM) = UWMASIM_retaddr;
} 
else
{ 
 /* line 960: */
if ( (LWMASIM_destination!=MPDASIM_nullmachineoffset) )
{ 
 /* line 961: */
 /* line 962: */
XPEASIM_using(PYDASIM_calld, LWMASIM_destination);
} 
else
{ 
 /* line 963: */
EQEASIM_using(PYDASIM_calld, (&ZWMASIM_ml));
 /* line 964: */
 /* line 965: */
IWFASIM_att( ZWMASIM_ml, L, &AXMASIM );
NWFASIM_write((&((&YHMASIM_code_generator)->Named_code_backpatch_list)), AXMASIM);
} 
} 
 /* line 967: */
 /* line 968: */
if ( (GWMASIM_paramsadvanced!=1) )
{ 
BXMASIM.Rs1 = PXEASIM_fp;
BXMASIM.Imm = (-4);
 /* line 969: */
BXMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(TEEASIM_ld, A_UNITE(CXMASIM,mode2,2,BXMASIM));
} 
 /* line 971: */
 /* line 972: */
if ( OWMASIM_uselongbranch )
{ 
 /* line 973: */
TXEASIM_fixmachinelabel(XVMASIM_skip);
} 
 /* line 975: */
 /* line 977: */
ATHASIM_replace((&((&YHMASIM_code_generator)->Stack_allocator)), TVMASIM_advanceparams);
} 
A_PROC_EXIT(generatecallinst);
return;
} 
#undef NL

A68_VOID  FXMASIM_generatecall(A68_INT  Ipstackframesize, A68_279  L)
{ 
A68_BOOL  GXMASIM;  /* optbool result */
A68_387  HXMASIM;  /* avoid structure result */
A68_387  IXMASIM_parameters;
A68_INT  KXMASIM;  /* YIELD */
A68_INT  MXMASIM;  /* YIELD */
A68_INT  NXMASIM_paramsadvanced;
A68_285  OXMASIM;  /* avoid structure result */
A68_285  PXMASIM;  /* united object - for case conformity */
A68_239  QXMASIM;  /* collateral clause result */
A68_240  RXMASIM;  /* OPERATORS - mode -> union mode */
A68_238  SXMASIM;  /* collateral clause result */
A68_240  TXMASIM;  /* OPERATORS - mode -> union mode */
A68_239  UXMASIM;  /* collateral clause result */
A68_240  VXMASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  WXMASIM_source;
A68_238  XXMASIM;  /* collateral clause result */
A68_240  YXMASIM;  /* OPERATORS - mode -> union mode */
A68_239  ZXMASIM;  /* collateral clause result */
A68_240  AYMASIM;  /* OPERATORS - mode -> union mode */
A68_238  BYMASIM;  /* collateral clause result */
A68_240  CYMASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DYMASIM_destination;
A68_232  EYMASIM_ml;
A68_358  FYMASIM;  /* avoid structure result */
A68_239  GYMASIM;  /* collateral clause result */
A68_240  HYMASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(generatecall);
 /* line 981: */
 /* line 982: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 984: */
 /* line 985: */
GXMASIM = !REMASIM_generatecallbiop((&((&YHMASIM_code_generator)->Stack_allocator)), L);
if ( GXMASIM )
{ /* line 986: */
GXMASIM = !LGMASIM_generatecallalien((&((&YHMASIM_code_generator)->Stack_allocator)), L);
}
 /* line 988: */
if ( GXMASIM )
{ 
SDGASIM_lookup( (*(&((&YHMASIM_code_generator)->Call_parameter_list))), L, &HXMASIM );
IXMASIM_parameters = HXMASIM;
 /* line 990: */
 /* line 991: */
KXMASIM = 1 ;
GJDASIM_assert(LXMASIM, (UYFASIM_length(A_R1INDEX(IXMASIM_parameters,KXMASIM))==Ipstackframesize));
 /* line 993: */
 /* line 994: */
MXMASIM = 1 ;
NXMASIM_paramsadvanced = ZPHASIM_advance((&((&YHMASIM_code_generator)->Stack_allocator)), A_R1INDEX(IXMASIM_parameters,MXMASIM));
 /* line 996: */
 /* line 999: */
if ( (NXMASIM_paramsadvanced!=0) )
{ 
 /* line 1000: */
if ( (Ipstackframesize!=0) )
{ 
 /* line 1001: */
 /* line 1002: */
JVGASIM_typeof( (&((&((&YHMASIM_code_generator)->Stack_allocator))->Location_stack)), (Ipstackframesize-1), &OXMASIM );
PXMASIM = OXMASIM ;
switch ( PXMASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1003: */
 /* line 1005: */
{ 
XIHASIM_calculatenewdynamicaddr((&((&YHMASIM_code_generator)->Stack_allocator)), (Ipstackframesize-1));
 /* line 1007: */
QXMASIM.Rs1 = PXEASIM_fp;
QXMASIM.Imm = (-4);
QXMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(JFEASIM_st, A_UNITE(RXMASIM,mode2,2,QXMASIM));
 /* line 1008: */
SXMASIM.Rs1 = FVEASIM_g0;
SXMASIM.Rs2 = PEGASIM_tempreg3;
 /* line 1009: */
SXMASIM.Rd = SEGASIM_dynamicpointer;
 /* line 1010: */
 /* line 1011: */
ISEASIM_using(LAEASIM_or, A_UNITE(TXMASIM,mode1,1,SXMASIM));
} 
break;
default: 
 /* line 1012: */
{ 
UXMASIM.Rs1 = PXEASIM_fp;
UXMASIM.Imm = (-4);
UXMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(JFEASIM_st, A_UNITE(VXMASIM,mode2,2,UXMASIM));
 /* line 1013: */
 /* line 1014: */
WXMASIM_source = KBHASIM_rsource((&((&YHMASIM_code_generator)->Stack_allocator)), (Ipstackframesize-1));
 /* line 1015: */
XXMASIM.Rs1 = WXMASIM_source;
XXMASIM.Rs2 = FVEASIM_g0;
 /* line 1016: */
XXMASIM.Rd = SEGASIM_dynamicpointer;
 /* line 1017: */
 /* line 1018: */
 /* line 1019: */
ISEASIM_using(LAEASIM_or, A_UNITE(YXMASIM,mode1,1,XXMASIM));
} 
break;
} 
} 
else
{ 
XIHASIM_calculatenewdynamicaddr((&((&YHMASIM_code_generator)->Stack_allocator)), (-1));
 /* line 1020: */
ZXMASIM.Rs1 = PXEASIM_fp;
ZXMASIM.Imm = (-4);
ZXMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(JFEASIM_st, A_UNITE(AYMASIM,mode2,2,ZXMASIM));
 /* line 1021: */
BYMASIM.Rs1 = FVEASIM_g0;
BYMASIM.Rs2 = PEGASIM_tempreg3;
 /* line 1022: */
BYMASIM.Rd = SEGASIM_dynamicpointer;
 /* line 1023: */
ISEASIM_using(LAEASIM_or, A_UNITE(CYMASIM,mode1,1,BYMASIM));
} 
} 
 /* line 1025: */
 /* line 1026: */
DYMASIM_destination = XRFASIM_lookup((*(&((&YHMASIM_code_generator)->Named_code_list))), L);
 /* line 1027: */
 /* line 1028: */
if ( (DYMASIM_destination!=MPDASIM_nullmachineoffset) )
{ 
 /* line 1029: */
 /* line 1030: */
XPEASIM_using(PYDASIM_calld, DYMASIM_destination);
} 
else
{ 
 /* line 1031: */
EQEASIM_using(PYDASIM_calld, (&EYMASIM_ml));
 /* line 1032: */
 /* line 1033: */
IWFASIM_att( EYMASIM_ml, L, &FYMASIM );
NWFASIM_write((&((&YHMASIM_code_generator)->Named_code_backpatch_list)), FYMASIM);
} 
 /* line 1035: */
 /* line 1036: */
if ( (NXMASIM_paramsadvanced!=0) )
{ 
GYMASIM.Rs1 = PXEASIM_fp;
GYMASIM.Imm = (-4);
 /* line 1037: */
GYMASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(TEEASIM_ld, A_UNITE(HYMASIM,mode2,2,GYMASIM));
} 
 /* line 1041: */
 /* line 1042: */
 /* line 1044: */
 /* line 1046: */
ATHASIM_replace((&((&YHMASIM_code_generator)->Stack_allocator)), IXMASIM_parameters);
} 
} 
A_PROC_EXIT(generatecall);
return;
} 
#undef NL

A68_VOID  IYMASIM_generateenter(void)
{ 
A_PROC_ENTRY(generateenter);
/*SKIP*/;
A_PROC_EXIT(generateenter);
return;
} 
#undef NL

A68_VOID  KYMASIM_generatefanout(A68_INT  Offset)
{ 
A_PROC_ENTRY(generatefanout);
 /* line 1052: */
 /* line 1053: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 1054: */
 /* line 1055: */
XXIASIM_fanout((&((&YHMASIM_code_generator)->Stack_allocator)), Offset);
} 
A_PROC_EXIT(generatefanout);
return;
} 
#undef NL

A68_VOID  MYMASIM_generateret(A68_INT  Nooutputparams)
{ 
A68_239  NYMASIM;  /* collateral clause result */
A68_240  OYMASIM;  /* OPERATORS - mode -> union mode */
A68_238  PYMASIM;  /* collateral clause result */
A68_240  QYMASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL * RYMASIM;  /* YIELD */
A_PROC_ENTRY(generateret);
 /* line 1059: */
 /* line 1060: */
if ( (*(&((&YHMASIM_code_generator)->Reachable))) )
{ 
IFHASIM_forcecondition((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 1063: */
TUHASIM_compress((&((&YHMASIM_code_generator)->Stack_allocator)), Nooutputparams);
 /* line 1067: */
NAHASIM_clear((&((&YHMASIM_code_generator)->Stack_allocator)));
 /* line 1070: */
NYMASIM.Rs1 = RXEASIM_i7;
NYMASIM.Imm = 8;
NYMASIM.Rd = FVEASIM_g0;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(OYMASIM,mode2,2,NYMASIM));
 /* line 1071: */
PYMASIM.Rs1 = FVEASIM_g0;
PYMASIM.Rs2 = FVEASIM_g0;
PYMASIM.Rd = FVEASIM_g0;
ISEASIM_using(PEEASIM_restore, A_UNITE(QYMASIM,mode1,1,PYMASIM));
 /* line 1075: */
 /* line 1077: */
RYMASIM = (&((&YHMASIM_code_generator)->Reachable)) ;
(*RYMASIM) = A68_FALSE;
} 
A_PROC_EXIT(generateret);
return;
} 
#undef NL

A68_VOID  VYMASIM_generatenamedcode(A68_279  L, A68_365 * Ip, A68_365 * Op)
{ 
A68_370  WYMASIM;  /* avoid structure result */
A68_333  XYMASIM;  /* avoid structure result */
A68_346 * YYMASIM_patches;
A68_232  ZYMASIM;  /* avoid structure result */
A68_BOOL * EZMASIM;  /* YIELD */
A68_239  FZMASIM;  /* collateral clause result */
A68_240  GZMASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(generatenamedcode);
 /* line 1081: */
 /* line 1082: */
{ 
BZFASIM_labeledparams( L, Ip, Op, &WYMASIM );
GEGASIM_write((&((&YHMASIM_code_generator)->Call_parameter_list)), WYMASIM);
 /* line 1083: */
BPFASIM_labeledoffset( L, GLDASIM_location, &XYMASIM );
DSFASIM_write((&((&YHMASIM_code_generator)->Named_code_list)), XYMASIM);
 /* line 1085: */
 /* line 1086: */
YYMASIM_patches = VWFASIM_lookupremove((&((&YHMASIM_code_generator)->Named_code_backpatch_list)), L);
 /* line 1087: */
for ( ;; )
{ 
 /* line 1088: */
if ( !(!RUFASIM_cleared(YYMASIM_patches)) ) break;
 /* line 1089: */
NUFASIM_pop( (&YYMASIM_patches), &ZYMASIM );
TXEASIM_fixmachinelabel(ZYMASIM);
}
 /* line 1091: */
 /* line 1092: */
GJDASIM_assert(BZMASIM, (SAHASIM_length((&((&YHMASIM_code_generator)->Stack_allocator)))==0));
 /* line 1093: */
 /* line 1094: */
GJDASIM_assert(DZMASIM, ((*(&((&YHMASIM_code_generator)->Reachable)))==A68_FALSE));
 /* line 1096: */
KWHASIM_createparams((&((&YHMASIM_code_generator)->Stack_allocator)), Ip);
 /* line 1097: */
EZMASIM = (&((&YHMASIM_code_generator)->Reachable)) ;
(*EZMASIM) = A68_TRUE;
 /* line 1098: */
 /* line 1099: */
if ( !(*(&((&YHMASIM_code_generator)->Incallsarray))) )
{ 
FZMASIM.Rs1 = IWEASIM_sp;
FZMASIM.Imm = ((-(23+1))*4);
 /* line 1100: */
FZMASIM.Rd = IWEASIM_sp;
 /* line 1101: */
ISEASIM_using(LEEASIM_save, A_UNITE(GZMASIM,mode2,2,FZMASIM));
} 
} 
A_PROC_EXIT(generatenamedcode);
return;
} 
#undef NL

A68_VOID  JZMASIM_generatenameddata(A68_279  L, A68_INT  O)
{ 
A68_333  KZMASIM;  /* avoid structure result */
A_PROC_ENTRY(generatenameddata);
 /* line 1105: */
 /* line 1107: */
 /* line 1109: */
BPFASIM_labeledoffset( L, O, &KZMASIM );
DSFASIM_write((&((&YHMASIM_code_generator)->Named_data_list)), KZMASIM);
A_PROC_EXIT(generatenameddata);
return;
} 
#undef NL

A68_VOID  OZMASIM_generateparamtypes(A68_279  L, A68_365 * Ip, A68_365 * Op)
{ 
A68_370  PZMASIM;  /* avoid structure result */
A_PROC_ENTRY(generateparamtypes);
 /* line 1113: */
BZFASIM_labeledparams( L, Ip, Op, &PZMASIM );
GEGASIM_write((&((&YHMASIM_code_generator)->Call_parameter_list)), PZMASIM);
A_PROC_EXIT(generateparamtypes);
return;
} 
#undef NL

A68_VOID  RZMASIM_generate(A68_36  Flt)
{ 
A_PROC_ENTRY(generate);
 /* line 1117: */
XPDASIM_machangeflt(Flt);
A_PROC_EXIT(generate);
return;
} 
#undef NL

A68_VOID  SZMASIM_generateenddecls(void)
{ 
A68_36  DANASIM;  /* procedure value */
A_PROC_ENTRY(generateenddecls);
{ 
 /* line 1127: */
GJDASIM_assert(UZMASIM, VAHASIM_cleared((&((&YHMASIM_code_generator)->Stack_allocator))));
 /* line 1128: */
 /* line 1129: */
GJDASIM_assert(WZMASIM, CXFASIM_cleared((*(&((&YHMASIM_code_generator)->Jump_backpatch_list)))));
 /* line 1130: */
 /* line 1131: */
GJDASIM_assert(YZMASIM, NHFASIM_cleared((*(&((&YHMASIM_code_generator)->Repeat_stack)))));
 /* line 1132: */
 /* line 1133: */
GJDASIM_assert(AANASIM, CXFASIM_cleared((*(&((&YHMASIM_code_generator)->Named_code_backpatch_list)))));
 /* line 1134: */
 /* line 1135: */
GJDASIM_assert(CANASIM, !(*(&((&YHMASIM_code_generator)->Reachable))));
 /* line 1137: */
 /* line 1138: */
DANASIM.fn.fn_global = ZIDASIM_simfault;
DANASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(DANASIM);
} 
A_PROC_EXIT(generateenddecls);
return;
} 
#undef NL

A68_VOID  FANASIM_generateca(A68_36  Flt)
{ 
A68_INT * GANASIM;  /* YIELD */
A68_479  HANASIM;  /* avoid structure result */
A68_479 * IANASIM;  /* YIELD */
A68_239  JANASIM;  /* collateral clause result */
A68_240  KANASIM;  /* OPERATORS - mode -> union mode */
A68_238  LANASIM;  /* collateral clause result */
A68_240  MANASIM;  /* OPERATORS - mode -> union mode */
A68_238  NANASIM;  /* collateral clause result */
A68_240  OANASIM;  /* OPERATORS - mode -> union mode */
A68_239  PANASIM;  /* collateral clause result */
A68_240  QANASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL * RANASIM;  /* YIELD */
A_PROC_ENTRY(generateca);
 /* line 1142: */
 /* line 1144: */
{ 
XPDASIM_machangeflt(Flt);
 /* line 1148: */
 /* line 1149: */
if ( ((*(&((&YHMASIM_code_generator)->Calls_location)))==MPDASIM_nullmachineoffset) )
{ 
GANASIM = (&((&YHMASIM_code_generator)->Calls_location)) ;
(*GANASIM) = GLDASIM_location;
 /* line 1150: */
 /* line 1152: */
 /* line 1153: */
RJMASIM_squash( (*(&((&YHMASIM_code_generator)->Named_code_list))), &HANASIM );
IANASIM = (&((&YHMASIM_code_generator)->Named_code_array)) ;
(*IANASIM) = HANASIM;
} 
else
{ 
GLDASIM_location = (*(&((&YHMASIM_code_generator)->Calls_location)));
 /* line 1156: */
KEGASIM_removelast((&((&YHMASIM_code_generator)->Call_parameter_list)));
 /* line 1157: */
 /* line 1158: */
HSFASIM_removelast((&((&YHMASIM_code_generator)->Named_code_list)));
} 
 /* line 1164: */
JANASIM.Rs1 = IWEASIM_sp;
JANASIM.Imm = ((-(23+1))*4);
JANASIM.Rd = IWEASIM_sp;
ISEASIM_using(LEEASIM_save, A_UNITE(KANASIM,mode2,2,JANASIM));
 /* line 1168: */
LANASIM.Rs1 = FVEASIM_g0;
LANASIM.Rs2 = CXEASIM_i0;
LANASIM.Rd = SEGASIM_dynamicpointer;
ISEASIM_using(LAEASIM_or, A_UNITE(MANASIM,mode1,1,LANASIM));
 /* line 1169: */
NANASIM.Rs1 = FVEASIM_g0;
NANASIM.Rs2 = EXEASIM_i1;
NANASIM.Rd = TEGASIM_globalpointer;
ISEASIM_using(LAEASIM_or, A_UNITE(OANASIM,mode1,1,NANASIM));
 /* line 1172: */
PANASIM.Rs1 = TEGASIM_globalpointer;
PANASIM.Imm = (-ZHMASIM_privatespace);
PANASIM.Rd = PXEASIM_fp;
ISEASIM_using(JFEASIM_st, A_UNITE(QANASIM,mode2,2,PANASIM));
 /* line 1174: */
RANASIM = (&((&YHMASIM_code_generator)->Incallsarray)) ;
(*RANASIM) = A68_TRUE;
 /* line 1175: */
 /* line 1180: */
MJMASIM_mark_relative_code_region();
} 
A_PROC_EXIT(generateca);
return;
} 
#undef NL

A68_VOID  SANASIM_generateendca(void)
{ 
A68_BOOL * TANASIM;  /* YIELD */
A68_36  EBNASIM;  /* procedure value */
A_PROC_ENTRY(generateendca);
{ 
TANASIM = (&((&YHMASIM_code_generator)->Incallsarray)) ;
(*TANASIM) = A68_FALSE;
 /* line 1190: */
BQMASIM_generatehalt();
 /* line 1192: */
A_CALLPROC(EQDASIM_maexecutable,(),((EQDASIM_maexecutable).nonlocals));
 /* line 1197: */
 /* line 1198: */
EIFASIM_create((&((&YHMASIM_code_generator)->Dynamic_memory)), (4+(3*PAHASIM_dynamicusage((&((&YHMASIM_code_generator)->Stack_allocator))))));
 /* line 1200: */
 /* line 1201: */
GJDASIM_assert(VANASIM, VAHASIM_cleared((&((&YHMASIM_code_generator)->Stack_allocator))));
 /* line 1202: */
 /* line 1203: */
GJDASIM_assert(XANASIM, CXFASIM_cleared((*(&((&YHMASIM_code_generator)->Jump_backpatch_list)))));
 /* line 1204: */
 /* line 1205: */
GJDASIM_assert(ZANASIM, NHFASIM_cleared((*(&((&YHMASIM_code_generator)->Repeat_stack)))));
 /* line 1206: */
 /* line 1207: */
GJDASIM_assert(BBNASIM, CXFASIM_cleared((*(&((&YHMASIM_code_generator)->Named_code_backpatch_list)))));
 /* line 1208: */
 /* line 1209: */
GJDASIM_assert(DBNASIM, !(*(&((&YHMASIM_code_generator)->Reachable))));
 /* line 1218: */
 /* line 1220: */
EBNASIM.fn.fn_global = ZIDASIM_simfault;
EBNASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(EBNASIM);
} 
A_PROC_EXIT(generateendca);
return;
} 
#undef NL

A68_VOID  HBNASIM_cgsetupspace(A68_INT  Size, A68_36  Flt, A68_VC  *ReturnedValue)
{ 
A68_97  IBNASIM;  /* procedure value */
A68_97  JBNASIM;  /* avoid structure result */
A68_32  KBNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_97  LBNASIM;  /* procedure value */
A68_97  MBNASIM;  /* procedure value */
A68_36  NBNASIM;  /* procedure value */
A68_VC  OBNASIM;  /* clause result */
A68_VC  PBNASIM;  /* OPERATORS - trim index */
A68_VC  QBNASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(cgsetupspace);
 /* line 1230: */
 /* line 1231: */
{ 
AIMASIM_sparespace = 0;
 /* line 1232: */
XPDASIM_machangeflt(Flt);
 /* line 1233: */
EIFASIM_create((&((&YHMASIM_code_generator)->Global_memory)), (Size+ZHMASIM_privatespace));
 /* line 1234: */
GIMASIM_setcaches();
 /* line 1235: */
IBNASIM.fn.fn_global = KFAAOST_default_msg;
IBNASIM.nonlocals = A68_NIL;
PLCAOSI_get_sigmsgproc( UECAOSI_sigint, IBNASIM, &JBNASIM );
LJMASIM_old_int_handler = JBNASIM;
 /* line 1236: */
LBNASIM.fn.fn_global = IJMASIM_codegen_catch_interrupt;
LBNASIM.nonlocals = A68_NIL;
MBNASIM.fn.fn_global = KFAAOST_default_msg;
MBNASIM.nonlocals = A68_NIL;
YJCAOSI_set_sigmsgproc(A_HVEC(KBNASIM,UECAOSI_sigint,A68_INT ), LBNASIM, MBNASIM);
 /* line 1237: */
NBNASIM.fn.fn_global = ZIDASIM_simfault;
NBNASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(NBNASIM);
 /* line 1238: */
 /* line 1239: */
PBNASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
OBNASIM = A_VTRIM(QBNASIM,(PBNASIM),A_VTSCRIPT(&(QBNASIM.upb),(PBNASIM).upb,(1+ZHMASIM_privatespace),(PBNASIM).upb));
} 
A_PROC_EXIT(cgsetupspace);
*ReturnedValue = (OBNASIM);
return;
} 
#undef NL

A68_VOID  TBNASIM_cgextendspace(A68_INT  Size, A68_36  Flt)
{ 
A68_INT  UBNASIM_min;
A68_INT  VBNASIM;  /* clause result */
A68_INT  WBNASIM_increment;
A68_36  XBNASIM;  /* procedure value */
A_PROC_ENTRY(cgextendspace);
 /* line 1247: */
if ( (Size<=AIMASIM_sparespace) )
{ 
 /* line 1248: */
 /* line 1249: */
AIMASIM_sparespace-=Size;
} 
else
{ 
UBNASIM_min = (AKFASIM_sizeof((&((&YHMASIM_code_generator)->Global_memory)))/10);
 /* line 1250: */
 /* line 1251: */
if ( (UBNASIM_min>(Size-AIMASIM_sparespace)) )
{ 
VBNASIM = UBNASIM_min;
} 
else
{ 
 /* line 1252: */
VBNASIM = (Size-AIMASIM_sparespace);
} 
WBNASIM_increment = VBNASIM;
 /* line 1253: */
AIMASIM_sparespace+=(WBNASIM_increment-Size);
 /* line 1254: */
XPDASIM_machangeflt(Flt);
 /* line 1255: */
JIFASIM_extend((&((&YHMASIM_code_generator)->Global_memory)), WBNASIM_increment);
 /* line 1256: */
XBNASIM.fn.fn_global = ZIDASIM_simfault;
XBNASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(XBNASIM);
 /* line 1257: */
 /* line 1258: */
GIMASIM_setcaches();
} 
A_PROC_EXIT(cgextendspace);
return;
} 
#undef NL

A68_VOID  ACNASIM_cgpoke(A68_VC  W, A68_INT  O)
{ 
A68_INT  BCNASIM_ix;
A68_VC  CCNASIM;  /* OPERATORS - trim index */
A68_VC  DCNASIM;  /* OPERATORS - trim index */
A68_VC  ECNASIM;  /* YIELD */
A_PROC_ENTRY(cgpoke);
 /* line 1262: */
 /* line 1263: */
{ 
BCNASIM_ix = (O+ZHMASIM_privatespace);
 /* line 1264: */
 /* line 1265: */
CCNASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
ECNASIM = A_VTRIM(DCNASIM,(CCNASIM),A_VTSCRIPT(&(DCNASIM.upb),(CCNASIM).upb,(1+BCNASIM_ix),(BCNASIM_ix+W.upb))) ;
A_VASSIGN2(W,ECNASIM,A68_CHAR );
} 
A_PROC_EXIT(cgpoke);
return;
} 
#undef NL

A68_VOID  HCNASIM_cgpeek(A68_INT  L, A68_INT  O, A68_VC  *ReturnedValue)
{ 
A68_INT  ICNASIM_ix;
A68_VC  JCNASIM;  /* clause result */
A68_VC  KCNASIM;  /* OPERATORS - trim index */
A68_VC  LCNASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(cgpeek);
 /* line 1272: */
 /* line 1273: */
{ 
ICNASIM_ix = (O+ZHMASIM_privatespace);
 /* line 1274: */
 /* line 1275: */
KCNASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
JCNASIM = A_VTRIM(LCNASIM,(KCNASIM),A_VTSCRIPT(&(LCNASIM.upb),(KCNASIM).upb,(1+ICNASIM_ix),(ICNASIM_ix+L)));
} 
A_PROC_EXIT(cgpeek);
*ReturnedValue = (JCNASIM);
return;
} 
#undef NL

A68_VOID  OCNASIM_cgpokeint(A68_INT  I, A68_INT  O)
{ 
A68_VC  PCNASIM;  /* OPERATORS - simple index */
A68_INT  QCNASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} RCNASIM; 
A68_INT * SCNASIM;  /* YIELD */
A_PROC_ENTRY(cgpokeint);
 /* line 1284: */
PCNASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
QCNASIM = ((1+ZHMASIM_privatespace)+O) ;
RCNASIM.source = (&A_VINDEX(PCNASIM,QCNASIM)) ;
SCNASIM = (RCNASIM.destination) ;
(*SCNASIM) = I;
A_PROC_EXIT(cgpokeint);
return;
} 
#undef NL

A68_INT  UCNASIM_cgpeekint(A68_INT  O)
{ 
A68_INT  VCNASIM;  /* clause result */
A68_VC  WCNASIM;  /* OPERATORS - simple index */
A68_INT  XCNASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} YCNASIM; 
A_PROC_ENTRY(cgpeekint);
 /* line 1287: */
WCNASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
XCNASIM = ((1+ZHMASIM_privatespace)+O) ;
YCNASIM.source = (&A_VINDEX(WCNASIM,XCNASIM)) ;
VCNASIM = (*(YCNASIM.destination));
A_PROC_EXIT(cgpeekint);
return( VCNASIM );
} 
#undef NL

A68_VOID  ADNASIM_cgsimulate(A68_INT  Maxtime, A68_526  *ReturnedValue)
{ 
A68_32  BDNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_97  CDNASIM;  /* procedure value */
A68_97  DDNASIM;  /* procedure value */
A68_VC  EDNASIM;  /* OPERATORS - simple index */
A68_INT  FDNASIM;  /* YIELD */
A68_VC  GDNASIM;  /* OPERATORS - simple index */
A68_INT  HDNASIM;  /* YIELD */
A68_32  IDNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_97  JDNASIM;  /* procedure value */
A68_INT  KDNASIM_interruptstate;
A68_526  LDNASIM;  /* collateral clause result */
A68_526  MDNASIM;  /* clause result */
A_PROC_ENTRY(cgsimulate);
 /* line 1291: */
 /* line 1293: */
{ 
(*CIMASIM_maxtimeref) = Maxtime;
 /* line 1298: */
CDNASIM.fn.fn_global = EJMASIM_codegen_catch_int_error;
CDNASIM.nonlocals = A68_NIL;
DDNASIM.fn.fn_global = KFAAOST_default_msg;
DDNASIM.nonlocals = A68_NIL;
YJCAOSI_set_sigmsgproc(A_HVEC(BDNASIM,AFCAOSI_sigfpe,A68_INT ), CDNASIM, DDNASIM);
 /* line 1300: */
 /* line 1301: */
EDNASIM = (*(&((&((&YHMASIM_code_generator)->Global_memory))->Mem))) ;
FDNASIM = (1+ZHMASIM_privatespace) ;
GDNASIM = (*(&((&((&YHMASIM_code_generator)->Dynamic_memory))->Mem))) ;
HDNASIM = 1 ;
A_CALLPROC(FIMASIM_codeentry,((&A_VINDEX(GDNASIM,HDNASIM)), (&A_VINDEX(EDNASIM,FDNASIM))),((&A_VINDEX(GDNASIM,HDNASIM)), (&A_VINDEX(EDNASIM,FDNASIM)),(FIMASIM_codeentry).nonlocals));
 /* line 1305: */
JDNASIM.fn.fn_global = KFAAOST_default_msg;
JDNASIM.nonlocals = A68_NIL;
BLCAOSI_set_sigdefault(A_HVEC(IDNASIM,AFCAOSI_sigfpe,A68_INT ), JDNASIM);
 /* line 1307: */
KDNASIM_interruptstate = (*DIMASIM_interruptref);
 /* line 1308: */
(*DIMASIM_interruptref) = 0;
 /* line 1310: */
LDNASIM.Lasttime = (*BIMASIM_timeref);
 /* line 1315: */
LDNASIM.Interrupted = KDNASIM_interruptstate;
MDNASIM = LDNASIM;
} 
A_PROC_EXIT(cgsimulate);
*ReturnedValue = (MDNASIM);
return;
} 
#undef NL

A68_VOID  NDNASIM_cgclearinterrupts(void)
{ 
A_PROC_ENTRY(cgclearinterrupts);
(*DIMASIM_interruptref) = 0;
A_PROC_EXIT(cgclearinterrupts);
return;
} 
#undef NL

A68_VOID  PDNASIM_cgclosedown(A68_36  Flt)
{ 
A68_32  QDNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_97  RDNASIM;  /* procedure value */
A68_43  UDNASIM;  /* procedure value */
A68_295  VDNASIM;  /* avoid structure result */
A68_36  WDNASIM;  /* procedure value */
A_PROC_ENTRY(cgclosedown);
 /* line 1324: */
 /* line 1325: */
{ 
RDNASIM.fn.fn_global = KFAAOST_default_msg;
RDNASIM.nonlocals = A68_NIL;
YJCAOSI_set_sigmsgproc(A_HVEC(QDNASIM,UECAOSI_sigint,A68_INT ), LJMASIM_old_int_handler, RDNASIM);
 /* line 1327: */
YHFASIM_destroy((&((&YHMASIM_code_generator)->Global_memory)));
 /* line 1328: */
YHFASIM_destroy((&((&YHMASIM_code_generator)->Dynamic_memory)));
 /* line 1331: */
UDNASIM.fn.fn_global = TDNASIM_anonymous;
UDNASIM.nonlocals = A68_NIL;
OKMASIM_cginitialise( UDNASIM, 0, Flt, &VDNASIM );
VDNASIM;
 /* line 1332: */
 /* line 1333: */
 /* line 1335: */
WDNASIM.fn.fn_global = ZIDASIM_simfault;
WDNASIM.nonlocals = A68_NIL;
XPDASIM_machangeflt(WDNASIM);
} 
A_PROC_EXIT(cgclosedown);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void THMASIM(void)   /* initialise DECS kecodegensparc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kecodegensparc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kecodegenstacksparc.m","./mfiles/kecodegenserversparc.m","./mfiles/kecodegenalienifsparc.m","./mfiles/kecodegenbiopifsparc.m","./mfiles/kemassemsparc.m","./mfiles/kebasics.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/osif.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_365  MVMASIM;  /* collateral clause result */
A68_365 * NVMASIM;  /* YIELD */
A68_505  PVMASIM;  /* collateral clause result */
A68_365  QVMASIM;  /* collateral clause result */
A68_365 * RVMASIM;  /* YIELD */
A68_387  SVMASIM;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZYGASIM();   /* USE kecodegenstacksparc */
AAFASIM();   /* USE kecodegenserversparc */
TEMASIM();   /* USE kecodegenalienifsparc */
YYIASIM();   /* USE kecodegenbiopifsparc */
KIDASIM();   /* USE kemassemsparc */
JSAASIM();   /* USE kebasics */
JSCAOST();   /* USE basics */
VSCAOSI();   /* USE osif */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kecodegensparc.a68";
A_config.translation_time = "Tue Apr  4 11:08:15 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SHMASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:08:15 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kecodegensparc);
UEAALIB_a68config(LGAALIB_configinfo, XHMASIM);
 /* line 113: */
 /* line 133: */
 /* line 135: */
 /* line 137: */
 /* line 148: */
AIMASIM_sparespace = 0;
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 162: */
 /* line 167: */
 /* line 175: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 209: */
 /* line 216: */
 /* line 230: */
 /* line 234: */
 /* line 235: */
 /* line 255: */
 /* line 258: */
 /* line 277: */
 /* line 287: */
 /* line 321: */
 /* line 323: */
 /* line 324: */
 /* line 348: */
 /* line 351: */
 /* line 352: */
 /* line 358: */
 /* line 403: */
 /* line 453: */
 /* line 455: */
 /* line 472: */
 /* line 474: */
 /* line 479: */
 /* line 481: */
 /* line 488: */
 /* line 490: */
 /* line 495: */
 /* line 497: */
 /* line 502: */
 /* line 504: */
 /* line 509: */
 /* line 511: */
 /* line 517: */
 /* line 519: */
 /* line 530: */
 /* line 532: */
 /* line 539: */
 /* line 541: */
 /* line 547: */
 /* line 549: */
 /* line 554: */
 /* line 556: */
 /* line 561: */
 /* line 563: */
 /* line 568: */
 /* line 570: */
 /* line 574: */
 /* line 576: */
 /* line 581: */
 /* line 583: */
 /* line 588: */
 /* line 590: */
 /* line 595: */
 /* line 597: */
 /* line 602: */
 /* line 604: */
 /* line 609: */
 /* line 611: */
 /* line 616: */
 /* line 618: */
 /* line 623: */
 /* line 625: */
 /* line 631: */
 /* line 633: */
 /* line 640: */
 /* line 647: */
 /* line 654: */
 /* line 661: */
 /* line 668: */
 /* line 691: */
 /* line 717: */
 /* line 740: */
 /* line 747: */
 /* line 752: */
 /* line 757: */
 /* line 758: */
 /* line 762: */
 /* line 763: */
 /* line 767: */
 /* line 787: */
 /* line 827: */
 /* line 848: */
 /* line 850: */
 /* line 860: */
 /* line 862: */
 /* line 890: */
MVMASIM.Head.Sort = GXFASIM_instanceptr;
MVMASIM.Head.Size = 32;
MVMASIM.Tail = (A68_365 *)A68_NIL;
NVMASIM = A_HEAP(A68_365 ) ;
(*NVMASIM) = MVMASIM ;
OVMASIM_instparams = NVMASIM;
 /* line 891: */
QVMASIM.Head.Sort = GXFASIM_instanceptr;
QVMASIM.Head.Size = 32;
QVMASIM.Tail = (A68_365 *)A68_NIL;
RVMASIM = A_HEAP(A68_365 ) ;
(*RVMASIM) = QVMASIM ;
PVMASIM.data[0] = RVMASIM;
PVMASIM.data[1] = (A68_365 *)A68_NIL;
TVMASIM_advanceparams = A_HIS1ARR(SVMASIM,PVMASIM,A68_365 *,2);
 /* line 893: */
 /* line 979: */
 /* line 1048: */
 /* line 1050: */
 /* line 1057: */
 /* line 1079: */
 /* line 1103: */
 /* line 1111: */
 /* line 1115: */
 /* line 1119: */
 /* line 1121: */
 /* line 1126: */
 /* line 1140: */
 /* line 1182: */
 /* line 1184: */
 /* line 1189: */
 /* line 1222: */
 /* line 1241: */
 /* line 1260: */
 /* line 1267: */
 /* line 1283: */
 /* line 1286: */
 /* line 1289: */
 /* line 1317: */
 /* line 1320: */
 /* line 1322: */
 /* line 1358: */
A_PROC_EXIT(DECS kecodegensparc);
} 
#undef NL
/* end of translation of ./a68files/kecodegensparc.a68 */
