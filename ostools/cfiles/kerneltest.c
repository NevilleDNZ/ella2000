
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
/* UNAME:GCKAOST */
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
A_ISTRUCT(A68_CHAR ,16000000,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t158 *,16000000,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 16000000 REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t158 *,A68_VC *),(struct A68t158 *,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE158) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t161,(A68_VC ),(A68_VC ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t162,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE32) REF INT */

A_PROCEDURE(A68_CHAR *,A68t163,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE158) REF CHAR */

A_PROCEDURE(struct A68t158 *,A68t164,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF CHAR) REF MODE158 */
struct A68t165{
A68_BITS * Cp;
struct A68t158 * Env;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF BITS,REF MODE158)  */

A_PROCEDURE(struct A68t165 *,A68t166,(struct A68t143 *),(struct A68t143 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE143) REF MODE165 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t143 ,struct A68t165 *),(struct A68t143 ,struct A68t165 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE143) MODE165 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t128 ,struct A68t165 *),(struct A68t128 ,struct A68t165 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE128) MODE165 */
struct A68t169{
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(BITS)  */
struct A68t171 ;

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171) VOID */
struct A68t171 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t169  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t171  A68_171 ;    /* UNION(BOOL,MODE169,MODE26)  */

A_PROCEDURE(A68_INT ,A68t172,(A68_INT ),(A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT) INT */
A_VECTOR(struct A68t175 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE175 */
struct A68t173{
A68_BITS  Type;
A_PAD_BITS(PAD_37)
struct A68t174  Elements;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS,REF MODE174)  */
struct A68t175 { A68_INT mode; union {
A68_INT * mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF INT,MODE173)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_38)
A68_VC  Value;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
A_VECTOR(struct A68t178 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE178 */
struct A68t179{
A68_INT  Choice;
A_PAD_INT(PAD_39)
struct A68t180  Params;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t178 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t176  mode2;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(MODE179,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE97) REF MODE26 */
struct A68t181 { A68_INT mode; union {
struct A68t182  mode1;
A68_INT * mode2;
struct A68t173  mode3;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(MODE182,REF INT,MODE173)  */
struct A68t183{
A68_INT * Sort;
struct A68t181  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF INT,MODE181,REF MODE26,REF MODE26)  */
struct A68t184{
struct A68t183  Rule;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE183,REF MODE184)  */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE173) BOOL */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t174 ,struct A68t173 *),(struct A68t174 ,struct A68t173 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE174) MODE173 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t175 ,struct A68t173 *),(struct A68t175 ,struct A68t173 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE175) MODE173 */
struct A68t189 ;

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t175 ,struct A68t189 ,A68_VC *),(struct A68t175 ,struct A68t189 ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE175,REF MODE189) REF MODE26 */
A_VECTOR(struct A68t183 ,A68t189);
typedef struct A68t189  A68_189 ;    /* VECTOR [] MODE183 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t34 *,struct A68t189 ),(struct A68t34 *,struct A68t189 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE34,REF MODE189) VOID */
struct A68t192 ;

A_PROCEDURE(struct A68t184 *,A68t191,(struct A68t184 *,struct A68t192 ),(struct A68t184 *,struct A68t192 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE184,MODE192) REF MODE184 */
A_VECTOR(struct A68t193 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE193 */
struct A68t193{
A68_INT * No;
struct A68t181  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF INT,MODE181,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t178 ,struct A68t177 *),(struct A68t178 ,struct A68t177 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE178) REF MODE177 */

A_PROCEDURE(A68_BOOL ,A68t195,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t196,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t197,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t199,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t198{
A68_VC  Rdbuffer;
struct A68t199  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_40)
A68_INT  Rdcharno;
A_PAD_INT(PAD_41)
A68_INT  Start_of_word;
A_PAD_INT(PAD_42)
struct A68t200 * Stack;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE199,INT,INT,INT,REF MODE200)  */
struct A68t200{
A68_VC  Line;
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE26,REF MODE200)  */

A_PROCEDURE(struct A68t198 *,A68t201,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,MODE199) REF MODE198 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *),(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE189,MODE175,MODE97) MODE178 */

A_PROCEDURE(A68_CHAR ,A68t206,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC *),(A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t176 ,A68_INT ,struct A68t97 ),(struct A68t176 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE176,INT,MODE97) VOID */
struct A68t210{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_43)
A68_BOOL  Check;
A_PAD_BOOL(PAD_44)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t210 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t210 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE210,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t213,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t176 ,struct A68t97 ,A68_VC *),(struct A68t176 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE176,MODE97) REF MODE26 */
struct A68t215{
A68_INT  C;
A_PAD_INT(PAD_45)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT)  */
struct A68t216{
A68_BITS  A;
A_PAD_BITS(PAD_46)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t218,(A68_VC ,struct A68t178 ,struct A68t97 ),(A68_VC ,struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE26,MODE178,MODE97) VOID */
struct A68t217{
A68_VC  Parameter;
struct A68t218  Proc;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE26,MODE218)  */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t178 ,struct A68t97 ),(struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE178,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t177 ,struct A68t97 ),(struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE177,MODE97) VOID */
struct A68t219 { A68_INT mode; union {
struct A68t217  mode1;
struct A68t220  mode2;
struct A68t221  mode3;
} data; };
typedef struct A68t219  A68_219 ;    /* UNION(MODE217,MODE220,MODE221)  */
struct A68t222 { A68_INT mode; union {
struct A68t223 * mode1;
struct A68t224 * mode2;
struct A68t225 * mode3;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE223,REF MODE224,REF MODE225)  */
struct A68t223 ;

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t223 *,struct A68t34 *),(struct A68t223 *,struct A68t34 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE223,REF MODE34) VOID */
struct A68t227 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t228  mode3;
} data; };
typedef struct A68t227  A68_227 ;    /* UNION(REF MODE26,REF MODE102,MODE228)  */
struct A68t223{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t175  Parameter;
struct A68t216  Access;
struct A68t215  Continuation;
struct A68t227  Help;
struct A68t219  Command;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(REF MODE26,REF MODE26,MODE175,MODE216,MODE215,MODE227,MODE219)  */
A_VECTOR(struct A68t222 ,A68t226);
typedef struct A68t226  A68_226 ;    /* VECTOR [] MODE222 */
struct A68t224{
struct A68t223 * Group;
struct A68t226  Commands;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(REF MODE223,REF MODE226)  */
struct A68t225{
struct A68t223 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t226  Locals;
struct A68t226  Globals;
struct A68t223 * Postlude;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE223,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE223)  */
struct A68t229{
struct A68t225 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_47)
struct A68t102  Input_lines;
struct A68t229 * Caller;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE225,INT,REF MODE102,REF MODE229)  */
struct A68t230 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t230 *,struct A68t223 *,struct A68t178 ,struct A68t97 ,struct A68t215 *),(struct A68t230 *,struct A68t223 *,struct A68t178 ,struct A68t97 ,struct A68t215 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE230,REF MODE223,MODE178,MODE97) MODE215 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE102) VOID */
struct A68t234 ;

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t234 ),(struct A68t234 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE234) VOID */
struct A68t230{
struct A68t229 * Stack;
struct A68t189  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_48)
A68_BOOL  Private;
A_PAD_BOOL(PAD_49)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_50)
struct A68t231  Caller;
struct A68t232  Report_error;
struct A68t233  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE229,REF MODE189,BOOL,BOOL,BOOL,MODE231,MODE232,MODE233,MODE97)  */
struct A68t234 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t234  A68_234 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t235,(struct A68t215 ,struct A68t215 ),(struct A68t215 ,struct A68t215 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE215,MODE215) BOOL */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t226 ,struct A68t226 ,struct A68t226 *),(struct A68t226 ,struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE226,MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t226 ,struct A68t222 ,struct A68t226 *),(struct A68t226 ,struct A68t222 ,struct A68t226 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE226,MODE222) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t226 *,struct A68t226 ,struct A68t226 *),(struct A68t226 *,struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF REF MODE226,MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t226 *,struct A68t222 ,struct A68t226 *),(struct A68t226 *,struct A68t222 ,struct A68t226 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF REF MODE226,MODE222) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t226 ,struct A68t226 *),(struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t222 ,struct A68t226 *),(struct A68t222 ,struct A68t226 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE222) REF MODE226 */

A_PROCEDURE(struct A68t224 *,A68t242,(A68_VC ,A68_VC ,struct A68t216 ,struct A68t226 ),(A68_VC ,A68_VC ,struct A68t216 ,struct A68t226 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,MODE26,MODE216,MODE226) REF MODE224 */

A_PROCEDURE(struct A68t225 *,A68t243,(struct A68t223 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t219 ),(struct A68t223 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t219 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE223,MODE26,REF REF MODE26,REF MODE226,REF MODE226,MODE219) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t230 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t230 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE230,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t230 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t230 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE230,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t230 *,A68t246,(struct A68t232 ,struct A68t233 ,struct A68t97 ,struct A68t231 ,struct A68t184 *,struct A68t225 *,struct A68t178 ),(struct A68t232 ,struct A68t233 ,struct A68t97 ,struct A68t231 ,struct A68t184 *,struct A68t225 *,struct A68t178 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE232,MODE233,MODE97,MODE231,REF MODE184,REF MODE225,MODE178) REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t230 *,struct A68t215 *),(struct A68t230 *,struct A68t215 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE230) MODE215 */

A_PROCEDURE(A68_VOID ,A68t248,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE26,MODE26,MODE196,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t250,(A68_VC ),(A68_VC ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t251,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t210 ,struct A68t97 ,A68_VC *),(struct A68t210 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE210,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t253,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t254,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE176,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE176,MODE26,MODE97) MODE134 */
struct A68t257 ;

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t257 *),(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t257 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE177,REF INT,REF MODE26,MODE97) MODE257 */
struct A68t257{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE176,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t259,(struct A68t176 ,struct A68t97 ,struct A68t46 ),(struct A68t176 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE176,MODE97,MODE46) INT */
struct A68t260{
A68_INT  Lwb;
A_PAD_INT(PAD_51)
A68_INT  Upb;
A_PAD_INT(PAD_52)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t176 ,struct A68t260 ,struct A68t97 ,struct A68t260 *),(struct A68t176 ,struct A68t260 ,struct A68t97 ,struct A68t260 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE176,MODE260,MODE97) MODE260 */

A_PROCEDURE(A68_VOID ,A68t262,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t263,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE176,MODE97) CHAR */

A_PROCEDURE(struct A68t184 *,A68t264,(void),(void *));
typedef struct A68t264  A68_264 ;    /* PROC REF MODE184 */
struct A68t265{
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
struct A68t198 * Standard_reader;
struct A68t266 * Infile;
struct A68t207  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE198,REF MODE266,MODE207,REF MODE111,REF MODE111)  */
struct A68t266{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_64)
A68_INT  Number;
A_PAD_INT(PAD_65)
A68_VC  Name;
struct A68t198 * Reader;
struct A68t266 * Previous;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE198,REF MODE266)  */

A_PROCEDURE(struct A68t265 *,A68t267,(void),(void *));
typedef struct A68t267  A68_267 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t207 ),(struct A68t207 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE207) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t226 ,struct A68t226 ),(struct A68t226 ,struct A68t226 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE226,REF MODE226) VOID */

A_PROCEDURE(A68_INT ,A68t273,(A68_VC ,A68_VC ,struct A68t226 ),(A68_VC ,A68_VC ,struct A68t226 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26,REF MODE226) INT */

A_PROCEDURE(struct A68t223 *,A68t274,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE223 */
struct A68t276 ;

A_PROCEDURE(A68_VOID ,A68t275,(A68_VC ,A68_VC ,struct A68t143 ,struct A68t276 ,struct A68t226 *),(A68_VC ,A68_VC ,struct A68t143 ,struct A68t276 ,struct A68t226 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE26,MODE26,MODE143,MODE276) REF MODE226 */

A_PROCEDURE(struct A68t230 **,A68t276,(void),(void *));
typedef struct A68t276  A68_276 ;    /* PROC REF REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t277,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t279,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 3 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from printissue --- */
extern A68_VOID  QKCAOST_print_title(A68_BOOL );
extern A68_VOID  SKCAOST_print_issue(void);
/* --- End of imports from printissue --- */


/* --- Imports from globalcommands --- */
extern A68_VOID  OJHAOST_make_globalcommands(A68_VC ,A68_VC ,struct A68t143 ,struct A68t276 ,A68_226 *);
/* --- End of imports from globalcommands --- */


/* --- Imports from commandcaller --- */
extern A68_VOID  IYGAOST_report_error(struct A68t102 );
extern A68_VOID  YYGAOST_set_default_msg(struct A68t234 );
extern A68_VOID  HZGAOST_call_command(struct A68t230 *,struct A68t223 *,struct A68t178 ,struct A68t97 ,A68_215 *);
/* --- End of imports from commandcaller --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  FXGAOST_initialise_ioprocs(struct A68t207 );
/* --- End of imports from ioprocs --- */


/* --- Imports from kernelreader --- */
extern A68_184 * UFGAOST_make_kernel_readers(void);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t178 ,struct A68t97 );
extern A68_226  RMDAOST_nullcommands;
extern A68_216  XMDAOST_normalaccess;
extern A68_215  HODAOST_finish;
extern A68_225 * GTDAOST_make_compound(struct A68t223 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t219 );
extern A68_230 * DPEAOST_initialise_commands(struct A68t232 ,struct A68t233 ,struct A68t97 ,struct A68t231 ,struct A68t184 *,struct A68t225 *,struct A68t178 );
extern A68_VOID  FSEAOST_interpret_commands(struct A68t230 *,A68_215 *);
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_175  SRAAOST_noparameters;
extern A68_178  ASAAOST_no_parameters;
/* --- End of imports from commandsyntax --- */


/* --- Imports from testmode --- */
extern A68_VOID  UHBAOST_set_testmode(struct A68t171 );
/* --- End of imports from testmode --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define QDAAOSI_nullccharptr NULL
/**/

#define DFAAOSI_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define EFAAOSI_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define FFAAOSI_maxint (A68_INT)A68_MAX_INT
/**/

#define GFAAOSI_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define HFAAOSI_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define IFAAOSI_bitswidth A_SZ_BITS
/* --- End of imports from cif --- */


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
extern A68_VOID  JQCAOSI_get_args(A68_46 *);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_150  TEAAOST_initialise_osinterface;
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void EGCAOST(void);   /* printissue */
extern void DBHAOST(void);   /* globalcommands */
extern void AYGAOST(void);   /* commandcaller */
extern void TIGAOST(void);   /* ioprocs */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void QFBAOST(void);   /* testmode */
extern void JDAAOSI(void);   /* cif */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_280   JCKAOST = {"$Id: kerneltest.a68,v 34.2 1995/03/29 13:02:26 ella Exp $"}; 
A_GISVEC(A68_VC ,KCKAOST,JCKAOST,57)
static A68_281   LCKAOST = {"KERNEL TEST"}; 
A_GISVEC(A68_VC ,MCKAOST,LCKAOST,11)
static A68_VC  NCKAOST_name;
static A68_282   OCKAOST = {"ELLSYSDIR"}; 
A_GISVEC(A68_VC ,PCKAOST,OCKAOST,9)
static A68_VC  QCKAOST_ellasysdir;
static A68_283   SCKAOST = {"93.11"}; 
A_GISVEC(A68_VC ,TCKAOST,SCKAOST,5)
static A68_284   UCKAOST = {"30:11:93"}; 
A_GISVEC(A68_VC ,VCKAOST,UCKAOST,8)
static A68_285   WCKAOST = {""}; 
A_GISVEC(A68_VC ,XCKAOST,WCKAOST,0)
static A68_286   YCKAOST = {"Too bad, its failed - Ha ha ha !!!!!!!!!"}; 
A_GISVEC(A68_VC ,ZCKAOST,YCKAOST,40)
static A68_230 * ADKAOST_env;
static A68_46  EDKAOST_args;
static A68_287   GDKAOST = {"-t"}; 
A_GISVEC(A68_VC ,IDKAOST,GDKAOST,2)
static A68_BOOL  JDKAOST_testmode;
static A68_283   NDKAOST = {"OUTER"}; 
A_GISVEC(A68_VC ,ODKAOST,NDKAOST,5)
static A68_288   QDKAOST = {"Kernel test programme"}; 
A_GISVEC(A68_VC ,RDKAOST,QDKAOST,21)
static A68_281   WDKAOST = {"Kernel Test"}; 
static A68_289   XDKAOST = {"Kernel"}; 
static A68_114   YDKAOST = {".lis"}; 
A_GISVEC(A68_VC ,DEKAOST,YDKAOST,4)
A_GISVEC(A68_VC ,HEKAOST,XDKAOST,6)
A_GISVEC(A68_VC ,KEKAOST,WDKAOST,11)
static A68_225 * MEKAOST_outer_command;
static A68_282   UEKAOST = {" finished"}; 
A_GISVEC(A68_VC ,VEKAOST,UEKAOST,9)

A_STATIC A68_VOID  BDKAOST_get_prompt(A68_VC  *ReturnedValue);

A_STATIC A68_230 ** ZDKAOST_anonymous(void);

A_STATIC A68_VOID  BDKAOST_get_prompt(A68_VC  *ReturnedValue)
{ 
A68_VC  CDKAOST;  /* clause result */
A_PROC_ENTRY(get_prompt);
CDKAOST = (*(*(&((*(&((*(&(ADKAOST_env->Stack)))->Current_context)))->Prompt))));
A_PROC_EXIT(get_prompt);
*ReturnedValue = (CDKAOST);
return;
} 
#undef NL

A_STATIC A68_230 ** ZDKAOST_anonymous(void)
{ 
A68_230 ** AEKAOST;  /* clause result */
AEKAOST = (&ADKAOST_env);
return( AEKAOST );
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
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/kerneltest.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/printissue.m","./mfiles/globalcommands.m","./mfiles/commandcaller.m","./mfiles/ioprocs.m","./mfiles/kernelreader.m","./mfiles/command.m","./mfiles/commandreader.m","./mfiles/commandsyntax.m","./mfiles/testmode.m","/u/model/ella/osif/assoc/mfiles/cif.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_148  RCKAOST;  /* collateral clause result */
A68_46  DDKAOST;  /* avoid structure result */
A68_BOOL  FDKAOST;  /* optbool result */
A68_INT  HDKAOST;  /* YIELD */
A68_207  KDKAOST;  /* procedure value */
A68_171  LDKAOST;  /* OPERATORS - mode -> union mode */
A68_223  MDKAOST;  /* collateral clause result */
A68_VC  PDKAOST;  /* avoid structure result */
A68_VC  SDKAOST;  /* avoid structure result */
A68_227  TDKAOST;  /* OPERATORS - mode -> union mode */
A68_219  UDKAOST;  /* OPERATORS - mode -> union mode */
A68_220  VDKAOST;  /* procedure value */
A68_219  BEKAOST;  /* OPERATORS - mode -> union mode */
A68_220  CEKAOST;  /* procedure value */
A68_143  EEKAOST;  /* procedure value */
A68_276  FEKAOST;  /* procedure value */
A68_226  GEKAOST;  /* avoid structure result */
A68_VC  IEKAOST;  /* avoid structure result */
A68_VC * JEKAOST;  /* YIELD */
A68_223 * LEKAOST;  /* YIELD */
A68_232  NEKAOST;  /* procedure value */
A68_233  OEKAOST;  /* procedure value */
A68_231  PEKAOST;  /* procedure value */
A68_BOOL * QEKAOST;  /* YIELD */
A68_215  REKAOST;  /* avoid structure result */
A68_290  SEKAOST;  /* collateral clause result */
A68_52  TEKAOST;  /* OPERATORS - mode -> union mode */
A68_52  WEKAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XEKAOST;  /* YIELD */
A68_52  YEKAOST;  /* OPERATORS - mode -> union mode */
A68_56  ZEKAOST;  /* procedure value */
A68_85  AFKAOST;  /* OPERATORS - istruct -> vector */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
EGCAOST();   /* USE printissue */
DBHAOST();   /* USE globalcommands */
AYGAOST();   /* USE commandcaller */
TIGAOST();   /* USE ioprocs */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
QFBAOST();   /* USE testmode */
JDAAOSI();   /* USE cif */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/kerneltest.a68";
A_config.translation_time = "Tue Apr  4 09:50:49 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GCKAOST (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, KCKAOST);
 /* line 53: */
NCKAOST_name = MCKAOST;
QCKAOST_ellasysdir = PCKAOST;
 /* line 55: */
 /* line 56: */
RCKAOST.Name = NCKAOST_name;
RCKAOST.Version = TCKAOST;
RCKAOST.Date = VCKAOST;
 /* line 57: */
RCKAOST.Msg = XCKAOST;
RCKAOST.Sys_fault = ZCKAOST;
A_CALLPROC(TEAAOST_initialise_osinterface,(RCKAOST, A68_TRUE),(RCKAOST, A68_TRUE,(TEAAOST_initialise_osinterface).nonlocals));
 /* line 59: */
 /* line 60: */
 /* line 62: */
JQCAOSI_get_args(  &DDKAOST );
EDKAOST_args = DDKAOST;
 /* line 63: */
FDKAOST = (EDKAOST_args.upb>1);
if ( FDKAOST )
{HDKAOST = 2 ;
FDKAOST = A_VC_EQ(A_VINDEX(EDKAOST_args,HDKAOST),IDKAOST);
}
JDKAOST_testmode = FDKAOST;
 /* line 65: */
KDKAOST.fn.fn_global = BDKAOST_get_prompt;
KDKAOST.nonlocals = A68_NIL;
FXGAOST_initialise_ioprocs(KDKAOST);
 /* line 66: */
UHBAOST_set_testmode(A_UNITE(LDKAOST,mode1,1,JDKAOST_testmode));
 /* line 67: */
QKCAOST_print_title(A68_FALSE);
 /* line 69: */
 /* line 71: */
ZAAAOSI_makervc( ODKAOST, &PDKAOST );
MDKAOST.Name = PDKAOST;
MDKAOST.Abreviation = EOAAOSL_nullstr;
 /* line 72: */
MDKAOST.Parameter = SRAAOST_noparameters;
MDKAOST.Access = XMDAOST_normalaccess;
 /* line 73: */
MDKAOST.Continuation = HODAOST_finish;
ZAAAOSI_makervc( RDKAOST, &SDKAOST );
MDKAOST.Help = A_UNITE(TDKAOST,mode1,1,SDKAOST);
VDKAOST.fn.fn_global = MMDAOST_nullcommand;
VDKAOST.nonlocals = A68_NIL;
MDKAOST.Command = A_UNITE(UDKAOST,mode2,2,VDKAOST);
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 80: */
CEKAOST.fn.fn_global = MMDAOST_nullcommand;
CEKAOST.nonlocals = A68_NIL;
EEKAOST.fn.fn_global = SKCAOST_print_issue;
EEKAOST.nonlocals = A68_NIL;
FEKAOST.fn.fn_global = ZDKAOST_anonymous;
FEKAOST.nonlocals = A68_NIL;
OJHAOST_make_globalcommands( QCKAOST_ellasysdir, DEKAOST, EEKAOST, FEKAOST, &GEKAOST );
ZAAAOSI_makervc( HEKAOST, &IEKAOST );
JEKAOST = A_HEAP(A68_VC ) ;
(*JEKAOST) = IEKAOST ;
LEKAOST = A_HEAP(A68_223 ) ;
(*LEKAOST) = MDKAOST ;
MEKAOST_outer_command = GTDAOST_make_compound(LEKAOST, KEKAOST, JEKAOST, GEKAOST, RMDAOST_nullcommands, A_UNITE(BEKAOST,mode2,2,CEKAOST));
 /* line 82: */
 /* line 83: */
 /* line 84: */
NEKAOST.fn.fn_global = IYGAOST_report_error;
NEKAOST.nonlocals = A68_NIL;
OEKAOST.fn.fn_global = YYGAOST_set_default_msg;
OEKAOST.nonlocals = A68_NIL;
PEKAOST.fn.fn_global = HZGAOST_call_command;
PEKAOST.nonlocals = A68_NIL;
ADKAOST_env = DPEAOST_initialise_commands(NEKAOST, OEKAOST, ZLBAOSI_global_msg, PEKAOST, UFGAOST_make_kernel_readers(), MEKAOST_outer_command, ASAAOST_no_parameters);
 /* line 86: */
QEKAOST = (&(ADKAOST_env->Private)) ;
(*QEKAOST) = A68_TRUE;
 /* line 87: */
FSEAOST_interpret_commands( ADKAOST_env, &REKAOST );
REKAOST;
 /* line 88: */
SEKAOST.data[0] = A_UNITE(TEKAOST,mode7,7,NCKAOST_name);
XEKAOST = VEKAOST ;
SEKAOST.data[1] = A_UNITE(WEKAOST,mode7,7,XEKAOST);
ZEKAOST.fn.fn_global = LRAAOSL_newline;
ZEKAOST.nonlocals = A68_NIL;
SEKAOST.data[2] = A_UNITE(YEKAOST,mode12,12,ZEKAOST);
 /* line 90: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AFKAOST,SEKAOST,3,A68_52 ));
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/kerneltest.a68 */
