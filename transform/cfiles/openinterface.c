
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
/* UNAME:SPCATRN */
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
struct A68t159{
A68_VC  Id;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t160{
A68_INT  Int;
A_PAD_INT(PAD_36)
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE160)  */
struct A68t161 { A68_INT mode; union {
struct A68t162 * mode1;
struct A68t163 * mode2;
struct A68t164 * mode3;
struct A68t165 * mode4;
struct A68t166 * mode5;
} data; };
typedef struct A68t161  A68_161 ;    /* UNION(REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166)  */
struct A68t162{
A68_INT  Attrno;
A_PAD_INT(PAD_37)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163{
A68_VC  Classname;
struct A68t159 * Strings;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t164{
struct A68t161  Elem;
struct A68t164 * Rest;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE161,REF MODE164)  */
struct A68t165{
struct A68t161  Attr;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE161)  */
struct A68t166{
A68_INT  Attrnull;
A_PAD_INT(PAD_38)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT)  */
struct A68t167{
A68_INT  Sort;
A_PAD_INT(PAD_39)
A68_VC  Attrname;
struct A68t161  Value;
struct A68t168 * Usage;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,REF MODE26,MODE161,REF MODE168)  */
struct A68t168{
A68_INT  Contextno;
A_PAD_INT(PAD_40)
A68_INT  Closureno;
A_PAD_INT(PAD_41)
A68_INT  Libv_spec;
A_PAD_INT(PAD_42)
A68_INT  Libv_body;
A_PAD_INT(PAD_43)
A68_BOOL  Import;
A_PAD_BOOL(PAD_44)
A68_BOOL  Export;
A_PAD_BOOL(PAD_45)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t169{
struct A68t161  Tag;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE161)  */
struct A68t170 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180)  */
struct A68t171{
A68_INT  Int;
A_PAD_INT(PAD_46)
A68_VC  Text;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t172{
A68_INT  Sort;
A_PAD_INT(PAD_47)
struct A68t170  Test;
struct A68t170  Standard;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,MODE170,MODE170)  */
struct A68t173{
A68_INT  Nameno;
A_PAD_INT(PAD_48)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT)  */
struct A68t174{
A68_INT  Intno;
A_PAD_INT(PAD_49)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT)  */
struct A68t175{
struct A68t170  Left;
A68_INT  Sort;
A_PAD_INT(PAD_50)
struct A68t170  Right;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE170,INT,MODE170)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t170  Right;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,MODE170)  */
struct A68t177{
struct A68t170  Cond;
struct A68t170  True;
struct A68t170  False;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE170,MODE170,MODE170)  */
struct A68t178{
struct A68t170  Formula;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE170)  */
struct A68t179{
A68_INT  Macparno;
A_PAD_INT(PAD_52)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_INT  Fnull;
A_PAD_INT(PAD_53)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
struct A68t170  Tag;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE170)  */
struct A68t182{
struct A68t170  Formula;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE170,REF MODE182)  */
struct A68t185{
struct A68t170  Lwb;
struct A68t170  Upb;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE170,MODE170)  */
struct A68t184 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
struct A68t185  mode11;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,MODE185)  */
struct A68t183{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_VC  Intname;
struct A68t161  Attr;
struct A68t184  Value;
struct A68t168 * Usage;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE184,REF MODE168)  */
struct A68t186 { A68_INT mode; union {
struct A68t187 * mode1;
struct A68t188 * mode2;
struct A68t189 * mode3;
struct A68t190 * mode4;
struct A68t191 * mode5;
struct A68t192 * mode6;
struct A68t193 * mode7;
struct A68t179 * mode8;
struct A68t194 * mode9;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE179,REF MODE194)  */
struct A68t187{
A68_INT  Typeno;
A_PAD_INT(PAD_55)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t188{
struct A68t170  Size;
struct A68t186  Elem;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE170,MODE186)  */
struct A68t189{
struct A68t186  Elem;
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE186,REF MODE189)  */
struct A68t190{
struct A68t186  From;
struct A68t186  To;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE186,MODE186)  */
struct A68t191{
struct A68t186  Type;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE186)  */
struct A68t192{
struct A68t170  Size;
struct A68t186  Char;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE170,MODE186)  */
struct A68t193{
A68_INT  Tvoid;
A_PAD_INT(PAD_56)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Tnull;
A_PAD_INT(PAD_57)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t186  Tag;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE186)  */
struct A68t196{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t197{
A68_VC  Altname;
struct A68t186  Assoc;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,MODE186)  */
struct A68t198{
A68_VC  Tagname;
struct A68t185  Range;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE185)  */
A_VECTOR(struct A68t197 ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] MODE197 */
struct A68t199 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t198 * mode2;
struct A68t195 * mode3;
struct A68t196 * mode4;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(REF MODE200,REF MODE198,REF MODE195,REF MODE196)  */
struct A68t201{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_VC  Typename;
struct A68t161  Attr;
struct A68t199  Body;
struct A68t168 * Usage;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE199,REF MODE168)  */
struct A68t202{
A68_INT  Constno;
A_PAD_INT(PAD_59)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT)  */
struct A68t203{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Primno;
A_PAD_INT(PAD_61)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT)  */
struct A68t204{
A68_INT  Typeno;
A_PAD_INT(PAD_62)
struct A68t170  Index;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,MODE170)  */
struct A68t205{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t185  Range;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,MODE185)  */
struct A68t206{
struct A68t186  Querytype;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE186)  */
struct A68t208 { A68_INT mode; union {
struct A68t202 * mode1;
struct A68t203 * mode2;
struct A68t204 * mode3;
struct A68t206 * mode4;
struct A68t209 * mode5;
struct A68t210 * mode6;
struct A68t191 * mode7;
struct A68t205 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
struct A68t213 * mode11;
struct A68t214 * mode12;
struct A68t215 * mode13;
struct A68t216 * mode14;
struct A68t217 * mode15;
struct A68t218 * mode16;
struct A68t219 * mode17;
struct A68t220 * mode18;
struct A68t221 * mode19;
struct A68t222 * mode20;
struct A68t223 * mode21;
struct A68t224 * mode22;
struct A68t225 * mode23;
struct A68t226 * mode24;
struct A68t227 * mode25;
struct A68t228 * mode26;
struct A68t229 * mode27;
struct A68t230 * mode28;
struct A68t231 * mode29;
struct A68t232 * mode30;
struct A68t233 * mode31;
struct A68t234 * mode32;
struct A68t235 * mode33;
struct A68t236 * mode34;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE202,REF MODE203,REF MODE204,REF MODE206,REF MODE209,REF MODE210,REF MODE191,REF MODE205,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Constname;
struct A68t161  Attr;
struct A68t208  Value;
struct A68t168 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE208,REF MODE168)  */
struct A68t209{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
struct A68t32  String;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t210{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_67)
A68_INT  Firstno;
A_PAD_INT(PAD_68)
A68_INT  Lastno;
A_PAD_INT(PAD_69)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,INT,INT)  */
struct A68t212{
struct A68t208  Alt;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE208,REF MODE212)  */
struct A68t213{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_INT  Nameno;
A_PAD_INT(PAD_71)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT)  */
struct A68t214{
struct A68t208  Sink;
struct A68t208  Source;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t215{
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
struct A68t208  Assoc;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,INT,MODE208)  */
struct A68t216{
struct A68t208  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_74)
A68_INT  Altno;
A_PAD_INT(PAD_75)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t217{
struct A68t208  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_76)
A68_INT  Nameno;
A_PAD_INT(PAD_77)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t218{
struct A68t208  Unit;
struct A68t170  Index;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE208,MODE170)  */
struct A68t219{
struct A68t208  Unit;
struct A68t185  Range;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE208,MODE185)  */
struct A68t220{
struct A68t208  Unit;
struct A68t208  Index;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t221{
struct A68t208  Unit;
struct A68t208  Index;
struct A68t208  From;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE208,MODE208,MODE208)  */
struct A68t222{
struct A68t170  Size;
struct A68t208  Elem;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t223{
struct A68t208  Elem;
struct A68t223 * Rest;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE208,REF MODE223)  */
struct A68t224{
A68_BOOL  String;
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t208  Left;
struct A68t208  Right;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(BOOL,INT,MODE208,MODE208)  */
A_VECTOR(struct A68t251 ,A68t250);
typedef struct A68t250  A68_250 ;    /* VECTOR [] MODE251 */
struct A68t253{
struct A68t208  Tag;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE208)  */
struct A68t248{
A68_INT  Fnno;
A_PAD_INT(PAD_80)
struct A68t250  Macparams;
struct A68t161  Attr;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,REF MODE250,MODE161)  */
struct A68t252 { A68_INT mode; union {
struct A68t169  mode1;
struct A68t181  mode2;
struct A68t195  mode3;
struct A68t253  mode4;
struct A68t248  mode5;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(MODE169,MODE181,MODE195,MODE253,MODE248)  */
struct A68t251{
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t252  Param;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT,MODE252)  */
struct A68t225{
struct A68t248  Inst;
struct A68t208  Right;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE248,MODE208)  */
struct A68t226{
struct A68t208  Left;
struct A68t248  Inst;
struct A68t208  Right;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE208,MODE248,MODE208)  */
struct A68t227{
struct A68t208  Input;
struct A68t268 * Choices;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE208,REF MODE268)  */
struct A68t228{
struct A68t170  Cond;
struct A68t208  True;
struct A68t208  False;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE170,MODE208,MODE208)  */
struct A68t229{
struct A68t170  Repl;
struct A68t208  Body;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t230{
struct A68t256 * Body;
struct A68t208  Output;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE256,MODE208)  */
struct A68t231{
struct A68t237 * Body;
struct A68t208  Output;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE237,MODE208)  */
struct A68t232{
struct A68t208  Unit;
struct A68t161  Attr;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE208,MODE161)  */
struct A68t233{
struct A68t208  Unit;
struct A68t172  Check;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE208,MODE172)  */
struct A68t234{
struct A68t208  Unit;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE208)  */
struct A68t235{
struct A68t170  Size;
struct A68t208  Char;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t236{
A68_INT  Unull;
A_PAD_INT(PAD_82)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT)  */
struct A68t239{
A68_INT  Fnno;
A_PAD_INT(PAD_83)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT)  */
struct A68t238 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
struct A68t240 * mode6;
struct A68t241 * mode7;
struct A68t242 * mode8;
struct A68t243 * mode9;
struct A68t244 * mode10;
struct A68t245 * mode11;
struct A68t246 * mode12;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246)  */
struct A68t237{
struct A68t238  Step;
struct A68t237 * Rest;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE238,REF MODE237)  */
struct A68t240{
struct A68t170  Cond;
struct A68t254 * Print;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE170,REF MODE254)  */
struct A68t241{
struct A68t170  Cond;
struct A68t254 * Fault;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE170,REF MODE254)  */
struct A68t242{
struct A68t249 * Letnames;
struct A68t208  Unit;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE249,MODE208)  */
struct A68t243{
struct A68t182 * Sizes;
struct A68t248  Inst;
struct A68t249 * Makenames;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE182,MODE248,REF MODE249)  */
struct A68t244{
struct A68t208  From;
struct A68t208  To;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t245{
struct A68t182 * Repls;
struct A68t247 * Joins;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE182,REF MODE247)  */
struct A68t246{
A68_INT  Stepnull;
A_PAD_INT(PAD_84)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
struct A68t244  Join;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE244,REF MODE247)  */
struct A68t249{
A68_INT  Nameno;
A_PAD_INT(PAD_85)
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,REF MODE249)  */
struct A68t255 { A68_INT mode; union {
A68_VC  mode1;
struct A68t181 * mode2;
} data; };
typedef struct A68t255  A68_255 ;    /* UNION(REF MODE26,REF MODE181)  */
struct A68t254{
struct A68t255  Item;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE255,REF MODE254)  */
struct A68t257 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
struct A68t240 * mode6;
struct A68t241 * mode7;
struct A68t258 * mode8;
struct A68t259 * mode9;
struct A68t260 * mode10;
struct A68t261 * mode11;
struct A68t262 * mode12;
struct A68t263 * mode13;
struct A68t264 * mode14;
struct A68t265 * mode15;
struct A68t256 * mode16;
struct A68t266 * mode17;
} data; };
typedef struct A68t257  A68_257 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239,REF MODE240,REF MODE241,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE256,REF MODE266)  */
struct A68t256{
struct A68t257  Step;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE257,REF MODE256)  */
struct A68t258{
struct A68t242  Seqlet;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE242)  */
struct A68t259{
struct A68t242  Seqvar;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE242)  */
struct A68t260{
struct A68t249 * Pvarnames;
struct A68t208  Init;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE249,MODE208)  */
struct A68t261{
struct A68t208  To;
struct A68t208  From;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t262{
struct A68t208  Input;
struct A68t267 * Choices;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE208,REF MODE267)  */
struct A68t263{
struct A68t170  Cond;
struct A68t257  True;
struct A68t257  False;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE170,MODE257,MODE257)  */
struct A68t264{
struct A68t170  Repl;
struct A68t257  Body;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t265{
A68_INT  Seqnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT)  */
struct A68t266{
struct A68t170  Size;
struct A68t257  Elem;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t267{
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t208  Test;
struct A68t257  Output;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(BOOL,INT,MODE208,MODE257,REF MODE267)  */
struct A68t268{
A68_BOOL  Check;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t208  Test;
struct A68t208  Output;
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(BOOL,INT,MODE208,MODE208,REF MODE268)  */
struct A68t269 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239)  */
struct A68t270{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_91)
A68_VC  Name;
struct A68t250  Macparams;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(BOOL,REF MODE26,REF MODE250)  */
struct A68t271{
struct A68t170  Output;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE170)  */
struct A68t272{
A68_INT  Reform;
A_PAD_INT(PAD_92)
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT)  */
struct A68t273{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_93)
struct A68t158  Ctname;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t274{
A68_INT  Sort;
A_PAD_INT(PAD_94)
struct A68t208  Init;
struct A68t170  Ambigtime;
struct A68t208  Ambig;
struct A68t170  Delaytime;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(INT,MODE208,MODE170,MODE208,MODE170)  */
struct A68t275{
struct A68t208  Init;
struct A68t170  Delaytime;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE208,MODE170)  */
struct A68t276{
struct A68t208  Init;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE208)  */
struct A68t277{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t170  Interval;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,MODE170,MODE208,MODE170)  */
struct A68t278{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t248  Inst;
struct A68t170  Scale;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(BOOL,INT,MODE248,MODE170,MODE208,MODE170)  */
struct A68t280 { A68_INT mode; union {
struct A68t253 * mode1;
struct A68t270 * mode2;
struct A68t271 * mode3;
struct A68t272 * mode4;
struct A68t273 * mode5;
struct A68t274 * mode6;
struct A68t275 * mode7;
struct A68t276 * mode8;
struct A68t277 * mode9;
struct A68t278 * mode10;
struct A68t279 * mode11;
struct A68t281 * mode12;
} data; };
typedef struct A68t280  A68_280 ;    /* UNION(REF MODE253,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE281)  */
struct A68t279{
struct A68t160 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_98)
struct A68t280  Fnbody;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE160,BOOL,MODE280)  */
struct A68t281{
A68_INT  Bodynull;
A_PAD_INT(PAD_99)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT)  */
struct A68t282{
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t269  Spec;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,MODE269)  */
struct A68t283{
A68_VC  Name;
struct A68t186  Type;
struct A68t161  Attr;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE26,MODE186,MODE161)  */
A_VECTOR(struct A68t282 ,A68t285);
typedef struct A68t285  A68_285 ;    /* VECTOR [] MODE282 */
A_VECTOR(struct A68t283 ,A68t286);
typedef struct A68t286  A68_286 ;    /* VECTOR [] MODE283 */
struct A68t284{
A68_INT  Sort;
A_PAD_INT(PAD_101)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_102)
A68_VC  Fnname;
struct A68t285  Macspecs;
struct A68t161  Attr;
struct A68t249 * Inputs;
struct A68t249 * Outputs;
struct A68t286  Nametypes;
struct A68t280  Fnbody;
struct A68t168 * Usage;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE285,MODE161,REF MODE249,REF MODE249,REF MODE286,MODE280,REF MODE168)  */
A_VECTOR(struct A68t167 *,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] REF MODE167 */
A_VECTOR(struct A68t183 *,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] REF MODE183 */
A_VECTOR(struct A68t201 *,A68t290);
typedef struct A68t290  A68_290 ;    /* VECTOR [] REF MODE201 */
A_VECTOR(struct A68t207 *,A68t291);
typedef struct A68t291  A68_291 ;    /* VECTOR [] REF MODE207 */
A_VECTOR(struct A68t284 *,A68t292);
typedef struct A68t292  A68_292 ;    /* VECTOR [] REF MODE284 */
struct A68t287{
struct A68t288  Attrs;
struct A68t289  Ints;
struct A68t290  Types;
struct A68t291  Consts;
struct A68t292  Fns;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292)  */
struct A68t293{
A68_INT  Closureno;
A_PAD_INT(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t287 * Environ;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,INT,REF MODE287)  */
struct A68t294{
struct A68t293  Outer;
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE293,REF MODE294)  */
A_VECTOR(struct A68t294 ,A68t296);
typedef struct A68t296  A68_296 ;    /* VECTOR [] MODE294 */
struct A68t295{
struct A68t296  Outers;
struct A68t295 * Rest;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE296,REF MODE295)  */
struct A68t297{
A68_INT  Max_closureno;
A_PAD_INT(PAD_105)
struct A68t294 * Outers;
struct A68t294 * Freelist;
struct A68t295 * Outerslist;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,REF MODE294,REF MODE294,REF MODE295)  */
A_VECTOR(struct A68t294 *,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] REF MODE294 */

A_PROCEDURE(struct A68t173 *,A68t299,(A68_INT ),(A68_INT ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(INT) REF MODE173 */

A_PROCEDURE(struct A68t174 *,A68t300,(A68_INT ),(A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT) REF MODE174 */

A_PROCEDURE(struct A68t178 *,A68t301,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE170) REF MODE178 */

A_PROCEDURE(struct A68t181 *,A68t302,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE170) REF MODE181 */

A_PROCEDURE(struct A68t187 *,A68t303,(A68_INT ),(A68_INT ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT) REF MODE187 */

A_PROCEDURE(struct A68t191 *,A68t304,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE186) REF MODE191 */

A_PROCEDURE(struct A68t195 *,A68t305,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE186) REF MODE195 */

A_PROCEDURE(struct A68t202 *,A68t306,(A68_INT ),(A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(INT) REF MODE202 */

A_PROCEDURE(struct A68t206 *,A68t307,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE186) REF MODE206 */

A_PROCEDURE(struct A68t258 *,A68t308,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE242) REF MODE258 */

A_PROCEDURE(struct A68t259 *,A68t309,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE242) REF MODE259 */

A_PROCEDURE(struct A68t234 *,A68t310,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE208) REF MODE234 */

A_PROCEDURE(struct A68t253 *,A68t311,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE208) REF MODE253 */

A_PROCEDURE(struct A68t239 *,A68t312,(A68_INT ),(A68_INT ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(INT) REF MODE239 */

A_PROCEDURE(struct A68t271 *,A68t313,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE170) REF MODE271 */

A_PROCEDURE(struct A68t276 *,A68t314,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE208) REF MODE276 */

A_PROCEDURE(struct A68t179 *,A68t315,(A68_INT ),(A68_INT ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t162 *,A68t316,(A68_INT ),(A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) REF MODE162 */

A_PROCEDURE(struct A68t169 *,A68t317,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE161) REF MODE169 */

A_PROCEDURE(struct A68t165 *,A68t318,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE161) REF MODE165 */
A_VECTOR(struct A68t159 *,A68t319);
typedef struct A68t319  A68_319 ;    /* VECTOR [] REF MODE159 */

A_PROCEDURE(A68_INT ,A68t320,(struct A68t297 *),(struct A68t297 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE297) INT */

A_PROCEDURE(struct A68t294 *,A68t321,(A68_INT ,struct A68t297 *,struct A68t97 ),(A68_INT ,struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(INT,REF MODE297,MODE97) REF MODE294 */

A_PROCEDURE(struct A68t294 *,A68t322,(struct A68t297 *),(struct A68t297 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE297) REF MODE294 */

A_PROCEDURE(struct A68t294 **,A68t323,(struct A68t293 ,struct A68t294 **,struct A68t297 *,struct A68t97 ),(struct A68t293 ,struct A68t294 **,struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE293,REF REF MODE294,REF MODE297,MODE97) REF REF MODE294 */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t294 **,struct A68t297 *,struct A68t97 ),(struct A68t294 **,struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF REF MODE294,REF MODE297,MODE97) VOID */

A_PROCEDURE(struct A68t297 *,A68t325,(void),(void *));
typedef struct A68t325  A68_325 ;    /* PROC REF MODE297 */

A_PROCEDURE(A68_INT ,A68t326,(struct A68t297 *,struct A68t97 ),(struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE297,MODE97) INT */

A_PROCEDURE(struct A68t297 *,A68t327,(struct A68t297 *,struct A68t97 ),(struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE297,MODE97) REF MODE297 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t329,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 60 CHAR */
struct A68t331{
A68_INT  Token;
A_PAD_INT(PAD_106)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(INT,BOOL)  */
struct A68t332{
A68_INT  Index;
A_PAD_INT(PAD_108)
A68_INT  Count;
A_PAD_INT(PAD_109)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(INT,INT)  */
struct A68t333 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t331  mode3;
struct A68t332  mode4;
} data; };
typedef struct A68t333  A68_333 ;    /* UNION(INT,MODE26,MODE331,MODE332)  */

A_PROCEDURE(A68_CHAR ,A68t335,(void),(void *));
typedef struct A68t335  A68_335 ;    /* PROC CHAR */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t335 ,struct A68t97 ,struct A68t333 *),(struct A68t335 ,struct A68t97 ,struct A68t333 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE335,MODE97) MODE333 */
struct A68t334{
struct A68t335  Getchar;
struct A68t336  Initem;
struct A68t337 * Ids_lookup;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(MODE335,MODE336,REF REF MODE337)  */
A_VECTOR(struct A68t102 ,A68t337);
typedef struct A68t337  A68_337 ;    /* VECTOR [] REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t333 ,struct A68t36 ,struct A68t97 ),(struct A68t333 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE333,MODE36,MODE97) VOID */
struct A68t338{
struct A68t36  Putstring;
struct A68t339  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE36,MODE339,BOOL)  */
struct A68t340{
struct A68t297 * Closure;
struct A68t102  Head_data;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE297,REF MODE102)  */
A_ISTRUCT(A68_CHAR ,19,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_INT ,A68t342,(A68_BOOL ,A68_INT ),(A68_BOOL ,A68_INT ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(BOOL,INT) INT */
A_ISTRUCT(A68_CHAR ,42,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,30,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t352,(A68_INT ,A68_CHAR ),(A68_INT ,A68_CHAR ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(INT,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_INT ,212,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 212 INT */
A_ISTRUCT(A68_CHAR ,36,A68t356);
typedef struct A68t356  A68_356 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t333 ,A68_VC ,struct A68t97 ),(struct A68t333 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE333,MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,11,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_INT ,A68t364,(struct A68t334 ,struct A68t97 ),(struct A68t334 ,struct A68t97 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE334,MODE97) INT */
A_ISTRUCT(A68_CHAR ,7,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_BOOL ,A68t366,(struct A68t334 ,struct A68t97 ),(struct A68t334 ,struct A68t97 ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE334,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t334 ,struct A68t97 ,struct A68t331 *),(struct A68t334 ,struct A68t97 ,struct A68t331 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE334,MODE97) MODE331 */
A_ISTRUCT(A68_CHAR ,5,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t334 ,struct A68t97 ,A68_VC *),(struct A68t334 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE334,MODE97) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t370,(struct A68t334 ,struct A68t97 ),(struct A68t334 ,struct A68t97 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE334,MODE97) CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t334 ,struct A68t97 ,A68_VC *),(struct A68t334 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE334,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t334 ,struct A68t97 ,struct A68t340 *),(struct A68t334 ,struct A68t97 ,struct A68t340 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE334,MODE97) MODE340 */

A_PROCEDURE(A68_VOID ,A68t374,(A68_BOOL ,struct A68t337 *),(A68_BOOL ,struct A68t337 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(BOOL) MODE337 */

A_PROCEDURE(A68_VOID ,A68t375,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(struct A68t159 *,A68t376,(void),(void *));
typedef struct A68t376  A68_376 ;    /* PROC REF MODE159 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t161 *),(struct A68t161 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC MODE161 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t170 *),(struct A68t170 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC MODE170 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t184 *),(struct A68t184 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC MODE184 */
A_ISTRUCT(A68_CHAR ,16,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(struct A68t182 *,A68t381,(void),(void *));
typedef struct A68t381  A68_381 ;    /* PROC REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t185 *),(struct A68t185 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC MODE185 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t186 *),(struct A68t186 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC MODE186 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t248 *),(struct A68t248 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC MODE248 */

A_PROCEDURE(struct A68t256 *,A68t385,(void),(void *));
typedef struct A68t385  A68_385 ;    /* PROC REF MODE256 */

A_PROCEDURE(struct A68t237 *,A68t386,(void),(void *));
typedef struct A68t386  A68_386 ;    /* PROC REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t208 *),(struct A68t208 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC MODE208 */

A_PROCEDURE(struct A68t268 *,A68t388,(void),(void *));
typedef struct A68t388  A68_388 ;    /* PROC REF MODE268 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC REF MODE250 */

A_PROCEDURE(A68_VOID ,A68t390,(A68_BOOL ,struct A68t250 *),(A68_BOOL ,struct A68t250 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(BOOL) MODE250 */
A_ISTRUCT(A68_CHAR ,12,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t392,(A68_INT ,A68_VC ,struct A68t269 *),(A68_INT ,A68_VC ,struct A68t269 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(INT,MODE26) MODE269 */

A_PROCEDURE(A68_VOID ,A68t393,(A68_INT ,struct A68t269 *),(A68_INT ,struct A68t269 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(INT) MODE269 */

A_PROCEDURE(struct A68t254 *,A68t394,(void),(void *));
typedef struct A68t394  A68_394 ;    /* PROC REF MODE254 */

A_PROCEDURE(struct A68t240 *,A68t395,(void),(void *));
typedef struct A68t395  A68_395 ;    /* PROC REF MODE240 */

A_PROCEDURE(struct A68t241 *,A68t396,(void),(void *));
typedef struct A68t396  A68_396 ;    /* PROC REF MODE241 */

A_PROCEDURE(struct A68t249 *,A68t397,(void),(void *));
typedef struct A68t397  A68_397 ;    /* PROC REF MODE249 */

A_PROCEDURE(struct A68t242 *,A68t398,(void),(void *));
typedef struct A68t398  A68_398 ;    /* PROC REF MODE242 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t257 *),(struct A68t257 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC MODE257 */

A_PROCEDURE(struct A68t267 *,A68t400,(void),(void *));
typedef struct A68t400  A68_400 ;    /* PROC REF MODE267 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t238 *),(struct A68t238 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC MODE238 */

A_PROCEDURE(struct A68t247 *,A68t402,(void),(void *));
typedef struct A68t402  A68_402 ;    /* PROC REF MODE247 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t280 *),(struct A68t280 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC MODE280 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t199 *),(struct A68t199 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC MODE199 */

A_PROCEDURE(A68_VOID ,A68t405,(A68_BOOL ,struct A68t200 *),(A68_BOOL ,struct A68t200 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(BOOL) MODE200 */

A_PROCEDURE(struct A68t168 *,A68t406,(void),(void *));
typedef struct A68t406  A68_406 ;    /* PROC REF MODE168 */

A_PROCEDURE(struct A68t167 *,A68t407,(void),(void *));
typedef struct A68t407  A68_407 ;    /* PROC REF MODE167 */

A_PROCEDURE(struct A68t183 *,A68t408,(void),(void *));
typedef struct A68t408  A68_408 ;    /* PROC REF MODE183 */

A_PROCEDURE(struct A68t201 *,A68t409,(void),(void *));
typedef struct A68t409  A68_409 ;    /* PROC REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t410,(void),(void *));
typedef struct A68t410  A68_410 ;    /* PROC REF MODE207 */

A_PROCEDURE(struct A68t284 *,A68t411,(void),(void *));
typedef struct A68t411  A68_411 ;    /* PROC REF MODE284 */

A_PROCEDURE(A68_VOID ,A68t412,(A68_BOOL ,struct A68t285 *),(A68_BOOL ,struct A68t285 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(BOOL) MODE285 */

A_PROCEDURE(A68_VOID ,A68t413,(A68_BOOL ,struct A68t286 *),(A68_BOOL ,struct A68t286 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(BOOL) MODE286 */

A_PROCEDURE(struct A68t287 *,A68t414,(void),(void *));
typedef struct A68t414  A68_414 ;    /* PROC REF MODE287 */

A_PROCEDURE(A68_VOID ,A68t415,(A68_BOOL ,struct A68t288 *),(A68_BOOL ,struct A68t288 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(BOOL) MODE288 */

A_PROCEDURE(A68_VOID ,A68t416,(A68_BOOL ,struct A68t289 *),(A68_BOOL ,struct A68t289 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(BOOL) MODE289 */

A_PROCEDURE(A68_VOID ,A68t417,(A68_BOOL ,struct A68t290 *),(A68_BOOL ,struct A68t290 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(BOOL) MODE290 */

A_PROCEDURE(A68_VOID ,A68t418,(A68_BOOL ,struct A68t291 *),(A68_BOOL ,struct A68t291 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(BOOL) MODE291 */

A_PROCEDURE(A68_VOID ,A68t419,(A68_BOOL ,struct A68t292 *),(A68_BOOL ,struct A68t292 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(BOOL) MODE292 */

A_PROCEDURE(A68_VOID ,A68t420,(A68_CHAR ,struct A68t338 ,struct A68t97 ),(A68_CHAR ,struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(CHAR,MODE338,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t421,(A68_INT ,struct A68t338 ,struct A68t97 ),(A68_INT ,struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(INT,MODE338,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t422,(A68_VC ,struct A68t338 ,struct A68t97 ),(A68_VC ,struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE26,MODE338,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t423,(A68_INT ,A68_BOOL ,struct A68t338 ,struct A68t97 ),(A68_INT ,A68_BOOL ,struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(INT,BOOL,MODE338,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t424,(A68_BOOL ,struct A68t338 ,struct A68t97 ),(A68_BOOL ,struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(BOOL,MODE338,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t340 ,struct A68t338 ,struct A68t97 ),(struct A68t340 ,struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE340,MODE338,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t159 *),(struct A68t159 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE159) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE185) VOID */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t182 *),(struct A68t182 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE184) VOID */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE186) VOID */

A_PROCEDURE(A68_VOID ,A68t433,(A68_INT ,struct A68t170 ,struct A68t254 *),(A68_INT ,struct A68t170 ,struct A68t254 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(INT,MODE170,REF MODE254) VOID */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t249 *),(struct A68t249 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE249) VOID */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE208) VOID */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t242 ,struct A68t435 ),(struct A68t242 ,struct A68t435 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE242,MODE435) VOID */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t269 ),(struct A68t269 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE269) VOID */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t256 *,struct A68t435 ),(struct A68t256 *,struct A68t435 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE256,MODE435) VOID */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t257 *,struct A68t435 ),(struct A68t257 *,struct A68t435 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE257,MODE435) VOID */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t267 *),(struct A68t267 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE267) VOID */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t250 ),(struct A68t250 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE250) VOID */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t248 ),(struct A68t248 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE248) VOID */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t238 ,struct A68t435 ),(struct A68t238 ,struct A68t435 ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE238,MODE435) VOID */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t268 *),(struct A68t268 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE268) VOID */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t251 ),(struct A68t251 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE251) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t280 ,struct A68t435 ),(struct A68t280 ,struct A68t435 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE280,MODE435) VOID */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t282 *),(struct A68t282 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE282) VOID */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t168 *),(struct A68t168 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE168) VOID */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE167) VOID */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t183 *),(struct A68t183 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE183) VOID */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t199 ),(struct A68t199 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE199) VOID */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t201 *),(struct A68t201 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF MODE201) VOID */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t207 *),(struct A68t207 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE207) VOID */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t284 *),(struct A68t284 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE284) VOID */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t287 *),(struct A68t287 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE287) VOID */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t297 *),(struct A68t297 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE297) VOID */
A_ISTRUCT(A68_CHAR ,49,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,58,A68t458);
typedef struct A68t458  A68_458 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t335 ,struct A68t97 ,struct A68t334 *),(struct A68t335 ,struct A68t97 ,struct A68t334 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(MODE335,MODE97) MODE334 */
A_ISTRUCT(A68_CHAR ,27,A68t460);
typedef struct A68t460  A68_460 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t338 *),(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t338 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE36,BOOL,BOOL,MODE97) MODE338 */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t338 ,struct A68t97 ),(struct A68t338 ,struct A68t97 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE338,MODE97) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t297 *);
extern A68_294 * ELCATRN_find_outers(A68_INT ,struct A68t297 *,struct A68t97 );
extern A68_294 * GMCATRN_new_outers(struct A68t297 *);
extern A68_297 * AOCATRN_make_closure(void);
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_189 * GAAATRN_niltstr;
extern A68_212 * HAAATRN_nilualts;
extern A68_223 * IAAATRN_nilustr;
extern A68_268 * JAAATRN_niluchoices;
extern A68_253 * KAAATRN_nilunit;
extern A68_159 * LAAATRN_nilids;
extern A68_160 * OAAATRN_nilints;
extern A68_254 * MAAATRN_nilprintitems;
extern A68_249 * NAAATRN_nilnames;
extern A68_267 * PAAATRN_nilseqchoices;
extern A68_256 * QAAATRN_nilsequence;
extern A68_247 * RAAATRN_niljoins;
extern A68_237 * SAAATRN_nilseries;
extern A68_273 * TAAATRN_nilimport;
extern A68_167 * UAAATRN_nilattrdec;
extern A68_183 * VAAATRN_nilintdec;
extern A68_201 * WAAATRN_niltypedec;
extern A68_207 * XAAATRN_nilconstdec;
extern A68_284 * YAAATRN_nilfndec;
extern A68_250  ABAATRN_nilmacparams;
extern A68_182 * BBAATRN_nilformulas;
extern A68_168 * CBAATRN_nilusage;
extern A68_164 * DBAATRN_nilattrstr;
extern A68_285  FBAATRN_nilmacspecs;
extern A68_294 * HBAATRN_nilouters;
extern A68_173 * JEAATRN_makefarith(A68_INT );
extern A68_174 * OEAATRN_makefname(A68_INT );
extern A68_178 * YEAATRN_makefbracket(struct A68t170 );
extern A68_181 * DFAATRN_makeformulatag(struct A68t170 );
extern A68_187 * IFAATRN_maketname(A68_INT );
extern A68_191 * SFAATRN_maketbracket(struct A68t186 );
extern A68_195 * XFAATRN_maketypetag(struct A68t186 );
extern A68_202 * CGAATRN_makecname(A68_INT );
extern A68_191 * HGAATRN_makectype(struct A68t186 );
extern A68_206 * MGAATRN_makecquery(struct A68t186 );
extern A68_234 * RGAATRN_makeubracket(struct A68t208 );
extern A68_253 * WGAATRN_makeunittag(struct A68t208 );
extern A68_239 * LHAATRN_makefnname(A68_INT );
extern A68_271 * QHAATRN_makearith(struct A68t170 );
extern A68_276 * VHAATRN_makeram(struct A68t208 );
extern A68_179 * TEAATRN_makefmacpar(A68_INT );
extern A68_179 * NFAATRN_maketmacpar(A68_INT );
extern A68_162 * UDAATRN_makeattrname(A68_INT );
extern A68_169 * EEAATRN_makeattrtag(struct A68t161 );
extern A68_165 * ZDAATRN_makeattrbracket(struct A68t161 );
extern A68_166  ZHAATRN_attrnull;
extern A68_180  BIAATRN_fnull;
extern A68_194  DIAATRN_tnull;
extern A68_236  FIAATRN_unull;
extern A68_265  HIAATRN_seqnull;
extern A68_246  JIAATRN_stepnull;
extern A68_281  LIAATRN_bodynull;
extern A68_272  NIAATRN_reform;
extern A68_193  PIAATRN_tvoid;
extern A68_210  RIAATRN_cvoid;
#define WKAATRN_assembler_version_no 921103
extern A68_319  BLAATRN_idstable;
extern A68_38  ZLAATRN_makeid;
/* --- End of imports from assmodes --- */


/* --- Imports from osinterface --- */
#define EDAAOST_int_size 4
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
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_330   WPCATRN = {"$Id: openinterface.a68,v 34.5 1995/03/29 13:03:02 ella Exp $"}; 
A_GISVEC(A68_VC ,XPCATRN,WPCATRN,60)
static A68_341   YPCATRN = {"-CMODES-IF-25-01-95"}; 
A_GISVEC(A68_VC ,ZPCATRN,YPCATRN,19)
static A68_VC  AQCATRN_file_signature;
#define BQCATRN_tokens_version_no 921103
#define CQCATRN_packed_format A68_TRUE
#define DQCATRN_unpacked_format A68_FALSE
#define EQCATRN_null_tok 151
#define FQCATRN_in1byte_tok 152
#define GQCATRN_in2byte_tok 153
#define HQCATRN_primary_tok 154
#define IQCATRN_secondary_tok 155
#define JQCATRN_hashedid_tok 156
#define KQCATRN_ident_range_start 157
#define LQCATRN_ident_tok 169
#define MQCATRN_start_int_value 170
#define NQCATRN_pos1byte_int 242
#define OQCATRN_neg1byte_int 244
#define PQCATRN_extended_int 246
static A68_INT  QQCATRN_lowint;
static A68_INT  RQCATRN_short_string_top;
static A68_INT  SQCATRN_zeroint;
static A68_INT  TQCATRN_highint;
static A68_CHAR  UQCATRN_lf;
static A68_INT  VQCATRN_zero;
static A68_343   LRCATRN = {"Integer value too large in interface file."}; 
A_GISVEC(A68_VC ,MRCATRN,LRCATRN,42)
static A68_344   TRCATRN = {"packed_initem: illegal file token"}; 
A_GISVEC(A68_VC ,URCATRN,TRCATRN,33)
static A68_345   FSCATRN = {"packed_initem: null_token"}; 
A_GISVEC(A68_VC ,GSCATRN,FSCATRN,25)
static A68_346   PSCATRN = {"packed_initem: primary or secondary"}; 
A_GISVEC(A68_VC ,QSCATRN,PSCATRN,35)
static A68_347   ZSCATRN = {"packed_initem: hashed id"}; 
A_GISVEC(A68_VC ,ATCATRN,ZSCATRN,24)
static A68_348   UTCATRN = {"packed_initem: idsize"}; 
A_GISVEC(A68_VC ,VTCATRN,UTCATRN,21)
static A68_349   TUCATRN = {"packed_initem: reserved"}; 
A_GISVEC(A68_VC ,UUCATRN,TUCATRN,23)
static A68_CHAR  XUCATRN_next;
static A68_345   PWCATRN = {"Illegal char in hashed id"}; 
A_GISVEC(A68_VC ,QWCATRN,PWCATRN,25)
static A68_344   YWCATRN = {"\" is an unrecognised value herald"}; 
A_GISVEC(A68_VC ,ZWCATRN,YWCATRN,33)
static A68_351   FXCATRN = {"Stopped reading assembler file"}; 
A_GISVEC(A68_VC ,GXCATRN,FXCATRN,30)
static A68_346   IZCATRN = {"packed_outitem: Token value too big"}; 
A_GISVEC(A68_VC ,JZCATRN,IZCATRN,35)
static A68_353   RADATRN = {"0987654321"}; 
A_GISVEC(A68_VC ,TADATRN,RADATRN,10)
static A68_353   UADATRN = {"0123456789"}; 
A_GISVEC(A68_VC ,VADATRN,UADATRN,10)
#define QBDATRN_inttok 1
#define RBDATRN_idtok 2
#define SBDATRN_listtok 3
#define TBDATRN_vectok 4
#define UBDATRN_fnametok 11
#define VBDATRN_finttok 12
#define WBDATRN_fchecktok 13
#define XBDATRN_farithtok 14
#define YBDATRN_fdoptok 15
#define ZBDATRN_fmoptok 16
#define ACDATRN_fcondtok 17
#define BCDATRN_fbrackettok 18
#define CCDATRN_fmacpartok 19
#define DCDATRN_fnull_tok 20
#define ECDATRN_rangetok 21
#define FCDATRN_tnametok 23
#define GCDATRN_trowtok 24
#define HCDATRN_tstrtok 25
#define ICDATRN_tfntok 26
#define JCDATRN_tstringtok 27
#define KCDATRN_tbrackettok 28
#define LCDATRN_tvoidtok 29
#define MCDATRN_tmacpartok 30
#define NCDATRN_tnull_tok 31
#define OCDATRN_cnametok 33
#define PCDATRN_cprimtok 34
#define QCDATRN_cinttok 35
#define RCDATRN_cquotetok 36
#define SCDATRN_cquerytok 37
#define TCDATRN_cvoidtok 38
#define UCDATRN_ctypetok 39
#define VCDATRN_crangetok 40
#define WCDATRN_cprimrangetok 41
#define XCDATRN_ualtstok 42
#define YCDATRN_unametok 43
#define ZCDATRN_ufntok 44
#define ADDATRN_uassoctok 45
#define BDDATRN_uextracttok 46
#define CDDATRN_uportnametok 47
#define DDDATRN_uindextok 48
#define EDDATRN_utrimtok 49
#define FDDATRN_udyindextok 50
#define GDDATRN_ureplacetok 51
#define HDDATRN_urowtok 52
#define IDDATRN_ustrtok 53
#define JDDATRN_uconctok 54
#define KDDATRN_uminsttok 55
#define LDDATRN_udinsttok 56
#define MDDATRN_ucasetok 57
#define NDDATRN_ucondtok 58
#define ODDATRN_urepltok 59
#define PDDATRN_usequencetok 60
#define QDDATRN_useriestok 61
#define RDDATRN_uattrtok 62
#define SDDATRN_uchecktok 63
#define TDDATRN_ustringtok 64
#define UDDATRN_ubrackettok 65
#define VDDATRN_unull_tok 66
#define WDDATRN_lettok 70
#define XDDATRN_maketok 71
#define YDDATRN_jointok 72
#define ZDDATRN_repljointok 73
#define AEDATRN_stepnull_tok 74
#define BEDATRN_printtok 75
#define CEDATRN_faulttok 76
#define DEDATRN_sequencetok 77
#define EEDATRN_seqlettok 78
#define FEDATRN_seqvartok 79
#define GEDATRN_seqpvartok 80
#define HEDATRN_seqassigntok 81
#define IEDATRN_seqcasetok 82
#define JEDATRN_seqcondtok 83
#define KEDATRN_seqrepltok 84
#define LEDATRN_seqrowtok 85
#define MEDATRN_seqnull_tok 86
#define NEDATRN_alientok 91
#define OEDATRN_arithtok 92
#define PEDATRN_reformtok 93
#define QEDATRN_importtok 94
#define REDATRN_adelaytok 95
#define SEDATRN_idelaytok 96
#define TEDATRN_ramtok 97
#define UEDATRN_sampletok 98
#define VEDATRN_timescaletok 99
#define WEDATRN_bodychecktok 100
#define XEDATRN_bodynull_tok 101
#define YEDATRN_unittagtok 102
#define ZEDATRN_attrtagtok 103
#define AFDATRN_formulatagtok 104
#define BFDATRN_instancetok 105
#define CFDATRN_typetagtok 106
#define DFDATRN_rvalternativetok 107
#define EFDATRN_newintstok 108
#define FFDATRN_newcharstok 109
#define GFDATRN_attrdectok 114
#define HFDATRN_intdectok 115
#define IFDATRN_typedectok 116
#define JFDATRN_constdectok 117
#define KFDATRN_fndectok 118
#define LFDATRN_attrnametok 120
#define MFDATRN_attrdatatok 121
#define NFDATRN_attrstrtok 122
#define OFDATRN_attrbrackettok 123
#define PFDATRN_attrnull_tok 124
#define QFDATRN_usagetok 125
#define RFDATRN_ctnametok 126
#define SFDATRN_alternativetok 127
#define TFDATRN_macparamtok 128
#define UFDATRN_macspectok 129
#define VFDATRN_nametypetok 130
#define WFDATRN_uchoicetok 131
#define XFDATRN_seqchoicetok 132
#define YFDATRN_environtok 133
#define ZFDATRN_outertok 134
#define AGDATRN_closuretok 135
#define BGDATRN_attrlocdectok 141
#define CGDATRN_flocdectok 142
#define DGDATRN_tlocdectok 143
#define EGDATRN_clocdectok 144
#define FGDATRN_fnlocdectok 145
#define GGDATRN_attrmacspectok 151
#define HGDATRN_fmacspectok 152
#define IGDATRN_tmacspectok 153
#define JGDATRN_cmacspectok 154
#define KGDATRN_fnmacspectok 155
#define LGDATRN_idtag 160
#define MGDATRN_attrtok 201
#define NGDATRN_formulatok 202
#define OGDATRN_formularangetok 203
#define PGDATRN_typetok 204
#define QGDATRN_typebodytok 205
#define RGDATRN_unittok 206
#define SGDATRN_mparamtok 207
#define TGDATRN_macspecbodytok 208
#define UGDATRN_seqsteptok 209
#define VGDATRN_steptok 210
#define WGDATRN_fnbodytok 211
#define XGDATRN_printitemtok 212
static A68_354   YGDATRN = {"V06_ELLA_AssDmp"}; 
A_GISVEC(A68_VC ,ZGDATRN,YGDATRN,15)
static A68_VC  AHDATRN_signature;
static A68_32  DHDATRN_a68_c;
static A68_32  GHDATRN_c_a68;
static A68_356   HHDATRN = {"Error reading open interface file:- "}; 
A_GISVEC(A68_VC ,IHDATRN,HHDATRN,36)
static A68_VC  JHDATRN_errmsghead;
static A68_358   SHDATRN = {"integer "}; 
A_GISVEC(A68_VC ,THDATRN,SHDATRN,8)
static A68_358   AIDATRN = {" wanted."}; 
A_GISVEC(A68_VC ,BIDATRN,AIDATRN,8)
static A68_360   KIDATRN = {"identifier "}; 
A_GISVEC(A68_VC ,LIDATRN,KIDATRN,11)
static A68_358   SIDATRN = {" wanted."}; 
A_GISVEC(A68_VC ,TIDATRN,SIDATRN,8)
static A68_353   CJDATRN = {"NIL token "}; 
A_GISVEC(A68_VC ,DJDATRN,CJDATRN,10)
static A68_361   GJDATRN = {"Token "}; 
A_GISVEC(A68_VC ,HJDATRN,GJDATRN,6)
static A68_358   PJDATRN = {" wanted."}; 
A_GISVEC(A68_VC ,QJDATRN,PJDATRN,8)
static A68_362   ZJDATRN = {"hashed identifier "}; 
A_GISVEC(A68_VC ,AKDATRN,ZJDATRN,18)
static A68_354   OKDATRN = {"unknown symbol "}; 
A_GISVEC(A68_VC ,PKDATRN,OKDATRN,15)
static A68_358   TKDATRN = {" wanted."}; 
A_GISVEC(A68_VC ,UKDATRN,TKDATRN,8)
static A68_365   JLDATRN = {"integer"}; 
A_GISVEC(A68_VC ,KLDATRN,JLDATRN,7)
static A68_368   BMDATRN = {"token"}; 
A_GISVEC(A68_VC ,CMDATRN,BMDATRN,5)
static A68_361   NMDATRN = {"string"}; 
A_GISVEC(A68_VC ,OMDATRN,NMDATRN,6)
static A68_371   YMDATRN = {"character"}; 
A_GISVEC(A68_VC ,ZMDATRN,YMDATRN,9)
static A68_371   DNDATRN = {"character"}; 
A_GISVEC(A68_VC ,ENDATRN,DNDATRN,9)
static A68_345   WNDATRN = {"Inconsistent hash index: "}; 
A_GISVEC(A68_VC ,XNDATRN,WNDATRN,25)
static A68_365   BODATRN = {" max = "}; 
A_GISVEC(A68_VC ,CODATRN,BODATRN,7)
static A68_345   MODATRN = {"Inconsistent hash count: "}; 
A_GISVEC(A68_VC ,NODATRN,MODATRN,25)
static A68_365   RODATRN = {" max = "}; 
A_GISVEC(A68_VC ,SODATRN,RODATRN,7)
static A68_353   BPDATRN = {"identifier"}; 
A_GISVEC(A68_VC ,CPDATRN,BPDATRN,10)
static A68_358   ZRDATRN = {"get_attr"}; 
A_GISVEC(A68_VC ,ASDATRN,ZRDATRN,8)
static A68_380   KUDATRN = {"get_formularange"}; 
A_GISVEC(A68_VC ,LUDATRN,KUDATRN,16)
static A68_360   VUDATRN = {"get_formula"}; 
A_GISVEC(A68_VC ,WUDATRN,VUDATRN,11)
static A68_371   UVDATRN = {"get_range"}; 
A_GISVEC(A68_VC ,VVDATRN,UVDATRN,9)
static A68_358   SXDATRN = {"get_type"}; 
A_GISVEC(A68_VC ,TXDATRN,SXDATRN,8)
static A68_358   XHEATRN = {"get_unit"}; 
A_GISVEC(A68_VC ,YHEATRN,XHEATRN,8)
static A68_391   LJEATRN = {"get_macparam"}; 
A_GISVEC(A68_VC ,MJEATRN,LJEATRN,12)
static A68_354   FLEATRN = {"get_macspecitem"}; 
A_GISVEC(A68_VC ,GLEATRN,FLEATRN,15)
static A68_371   BMEATRN = {"printitem"}; 
A_GISVEC(A68_VC ,CMEATRN,BMEATRN,9)
static A68_360   DREATRN = {"get_seqstep"}; 
A_GISVEC(A68_VC ,EREATRN,DREATRN,11)
static A68_358   WTEATRN = {"get_step"}; 
A_GISVEC(A68_VC ,XTEATRN,WTEATRN,8)
static A68_361   GYEATRN = {"fnbody"}; 
A_GISVEC(A68_VC ,HYEATRN,GYEATRN,6)
static A68_358   BAFATRN = {"typebody"}; 
A_GISVEC(A68_VC ,CAFATRN,BAFATRN,8)
static A68_353   KNFATRN = {"pt_formula"}; 
A_GISVEC(A68_VC ,LNFATRN,KNFATRN,10)
static A68_354   DOFATRN = {"pt_formularange"}; 
A_GISVEC(A68_VC ,EOFATRN,DOFATRN,15)
static A68_365   VOFATRN = {"pt_type"}; 
A_GISVEC(A68_VC ,WOFATRN,VOFATRN,7)
static A68_360   CQFATRN = {"pt_localdec"}; 
A_GISVEC(A68_VC ,DQFATRN,CQFATRN,11)
static A68_353   JRFATRN = {"pt_seqstep"}; 
A_GISVEC(A68_VC ,KRFATRN,JRFATRN,10)
static A68_365   QSFATRN = {"pt_step"}; 
A_GISVEC(A68_VC ,RSFATRN,QSFATRN,7)
static A68_365   UUFATRN = {"pt_unit"}; 
A_GISVEC(A68_VC ,VUFATRN,UUFATRN,7)
static A68_371   IWFATRN = {"pt_fnbody"}; 
A_GISVEC(A68_VC ,JWFATRN,IWFATRN,9)
static A68_353   VWFATRN = {"pt_macspec"}; 
A_GISVEC(A68_VC ,WWFATRN,VWFATRN,10)
static A68_360   WXFATRN = {"pt_typebody"}; 
A_GISVEC(A68_VC ,XXFATRN,WXFATRN,11)
static A68_457   RZFATRN = {"Assembler and tokens version numbers do not match"}; 
A_GISVEC(A68_VC ,SZFATRN,RZFATRN,49)
static A68_458   XZFATRN = {"The given file is not a cmodes dump file or is out of date"}; 
A_GISVEC(A68_VC ,YZFATRN,XZFATRN,58)
static A68_VC  ZZFATRN_bad_dump_sig;
static A68_337  EAGATRN_null_ids_lookup;
static A68_460   XAGATRN = {"Wrong language in dump file"}; 
A_GISVEC(A68_VC ,YAGATRN,XAGATRN,27)
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_335  Getchar;
} JRCATRN_inpkdint;
typedef struct   /* env of non-global proc */
{
A68_INT  ERCATRN_val;
A_PAD_INT(PAD_111)
} ITCATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  YTCATRN_size;
A_PAD_INT(PAD_112)
} CUCATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_335  Getchar;
A68_335  CVCATRN_getupchar;
} EVCATRN_getupchar;
typedef struct   /* env of non-global proc */
{
A68_335  CVCATRN_getupchar;
} JVCATRN_getint;
typedef struct   /* env of non-global proc */
{
A68_INT  VVCATRN_size;
A_PAD_INT(PAD_113)
} ZVCATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QXCATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  TXCATRN_cc;
A68_INT * VXCATRN_cnt;
} ZXCATRN_put_int;
typedef struct   /* env of non-global proc */
{
int dummy;
} FADATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  IADATRN_chars;
A68_INT * KADATRN_cpos;
A68_36  Putstring;
} PADATRN_putint;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
} KPDATRN_get_idstable;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
} LQDATRN_get_ids;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_376  JQDATRN_get_ids;
A68_377  XQDATRN_get_attr;
} ZQDATRN_get_attr;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_378 * DSDATRN_get_formula;
} GSDATRN_get_formularange;
typedef struct   /* env of non-global proc */
{
A68_379  ESDATRN_get_formularange;
A68_97  Msg;
} QUDATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_378 * DSDATRN_get_formula;
} BVDATRN_get_formulas;
typedef struct   /* env of non-global proc */
{
A68_379  ESDATRN_get_formularange;
A68_97  Msg;
} PVDATRN_get_range;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_378 * DSDATRN_get_formula;
A68_383  YVDATRN_get_type;
} AWDATRN_get_type;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
A68_378 * DSDATRN_get_formula;
A68_383  YVDATRN_get_type;
A68_382  NVDATRN_get_range;
A68_384 * WXDATRN_get_instance;
A68_385 * XXDATRN_get_sequence;
A68_386 * YXDATRN_get_series;
A68_377  XQDATRN_get_attr;
} BYDATRN_get_unit;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
A68_377  XQDATRN_get_attr;
A68_378 * DSDATRN_get_formula;
A68_384 * WXDATRN_get_instance;
A68_383  YVDATRN_get_type;
} DIEATRN_get_macparams;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_389  BIEATRN_get_macparams;
A68_377  XQDATRN_get_attr;
} RJEATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
} CKEATRN_get_localdec;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
} TKEATRN_get_macspecitem;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_378 * DSDATRN_get_formula;
} LLEATRN_get_printitems;
typedef struct   /* env of non-global proc */
{
A68_378 * DSDATRN_get_formula;
A68_394  JLEATRN_get_printitems;
} JMEATRN_get_print;
typedef struct   /* env of non-global proc */
{
A68_378 * DSDATRN_get_formula;
A68_394  JLEATRN_get_printitems;
} SMEATRN_get_fault;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
} BNEATRN_get_names;
typedef struct   /* env of non-global proc */
{
A68_397  ZMEATRN_get_names;
A68_387  ZXDATRN_get_unit;
} PNEATRN_get_let;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
A68_399  WNEATRN_get_seqstep;
A68_395  HMEATRN_get_print;
A68_396  QMEATRN_get_fault;
A68_385 * XXDATRN_get_sequence;
A68_398  NNEATRN_get_let;
A68_397  ZMEATRN_get_names;
A68_378 * DSDATRN_get_formula;
A68_392  AKEATRN_get_localdec;
} YNEATRN_get_seqstep;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_399  WNEATRN_get_seqstep;
} JREATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
A68_398  NNEATRN_get_let;
A68_381  ZUDATRN_get_formulas;
A68_384 * WXDATRN_get_instance;
A68_397  ZMEATRN_get_names;
A68_395  HMEATRN_get_print;
A68_396  QMEATRN_get_fault;
A68_392  AKEATRN_get_localdec;
} YREATRN_get_step;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_401  WREATRN_get_step;
} CUEATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_389  BIEATRN_get_macparams;
A68_378 * DSDATRN_get_formula;
A68_387  ZXDATRN_get_unit;
A68_384 * WXDATRN_get_instance;
A68_403  PUEATRN_get_fnbody;
} RUEATRN_get_fnbody;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_383  YVDATRN_get_type;
A68_382  NVDATRN_get_range;
} MYEATRN_get_typebody;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
} HAFATRN_get_usage;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_377  XQDATRN_get_attr;
A68_406  FAFATRN_get_usage;
} VAFATRN_get_attrdec;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_377  XQDATRN_get_attr;
A68_379  ESDATRN_get_formularange;
A68_406  FAFATRN_get_usage;
} JBFATRN_get_intdec;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_377  XQDATRN_get_attr;
A68_404  KYEATRN_get_typebody;
A68_406  FAFATRN_get_usage;
} ZBFATRN_get_typedec;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_377  XQDATRN_get_attr;
A68_387  ZXDATRN_get_unit;
A68_406  FAFATRN_get_usage;
} PCFATRN_get_constdec;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_393  RKEATRN_get_macspecitem;
A68_377  XQDATRN_get_attr;
A68_397  ZMEATRN_get_names;
A68_383  YVDATRN_get_type;
A68_403  PUEATRN_get_fnbody;
A68_406  FAFATRN_get_usage;
} FDFATRN_get_fndec;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_407  TAFATRN_get_attrdec;
A68_408  HBFATRN_get_intdec;
A68_409  XBFATRN_get_typedec;
A68_410  NCFATRN_get_constdec;
A68_411  DDFATRN_get_fndec;
} QFFATRN_get_environ;
typedef struct   /* env of non-global proc */
{
A68_143  IPDATRN_get_idstable;
A68_334  Reader;
A68_97  Msg;
A68_414  OFFATRN_get_environ;
} LIFATRN_get_closure;
typedef struct   /* env of non-global proc */
{
A68_INT  BJFATRN_head_data_top;
A_PAD_INT(PAD_121)
} FJFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
} ZLFATRN_pt_idstable;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
} HMFATRN_pt_ids;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_426  FMFATRN_pt_ids;
A68_427  LMFATRN_pt_attr;
} NMFATRN_pt_attr;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_428  WMFATRN_pt_formula;
} YMFATRN_pt_formula;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_428  WMFATRN_pt_formula;
} QNFATRN_pt_range;
typedef struct   /* env of non-global proc */
{
A68_INT * SLFATRN_listnumb;
A68_338  Writer;
A68_97  Msg;
A68_428  WMFATRN_pt_formula;
} UNFATRN_pt_formulas;
typedef struct   /* env of non-global proc */
{
A68_428  WMFATRN_pt_formula;
A68_429  ONFATRN_pt_range;
A68_97  Msg;
} ZNFATRN_pt_formularange;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_428  WMFATRN_pt_formula;
A68_432  HOFATRN_pt_type;
A68_INT * SLFATRN_listnumb;
} JOFATRN_pt_type;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_428  WMFATRN_pt_formula;
A68_INT * SLFATRN_listnumb;
A68_422  WLFATRN_outid;
} DPFATRN_pt_printfault;
typedef struct   /* env of non-global proc */
{
A68_INT * SLFATRN_listnumb;
A68_338  Writer;
A68_97  Msg;
} LPFATRN_pt_names;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_434  JPFATRN_pt_names;
} RPFATRN_pt_let;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
} VPFATRN_pt_localdec;
typedef struct   /* env of non-global proc */
{
A68_INT * SLFATRN_listnumb;
A68_338  Writer;
A68_97  Msg;
A68_439  MQFATRN_pt_seqstep;
A68_437  TPFATRN_pt_localdec;
A68_433  BPFATRN_pt_printfault;
A68_436  PPFATRN_pt_let;
A68_434  JPFATRN_pt_names;
A68_428  WMFATRN_pt_formula;
A68_438 * IQFATRN_pt_sequence;
} OQFATRN_pt_seqstep;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_439  MQFATRN_pt_seqstep;
} QRFATRN_do_pt_sequence;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_441 * VRFATRN_pt_macparams;
A68_427  LMFATRN_pt_attr;
} ASFATRN_pt_instance;
typedef struct   /* env of non-global proc */
{
A68_437  TPFATRN_pt_localdec;
A68_433  BPFATRN_pt_printfault;
A68_436  PPFATRN_pt_let;
A68_338  Writer;
A68_97  Msg;
A68_430  SNFATRN_pt_formulas;
A68_442  YRFATRN_pt_instance;
A68_434  JPFATRN_pt_names;
A68_INT * SLFATRN_listnumb;
} FSFATRN_pt_step;
typedef struct   /* env of non-global proc */
{
A68_INT * SLFATRN_listnumb;
A68_338  Writer;
A68_97  Msg;
A68_435  USFATRN_pt_unit;
A68_428  WMFATRN_pt_formula;
A68_432  HOFATRN_pt_type;
A68_429  ONFATRN_pt_range;
A68_442  YRFATRN_pt_instance;
A68_438 * IQFATRN_pt_sequence;
A68_443  DSFATRN_pt_step;
A68_427  LMFATRN_pt_attr;
} WSFATRN_pt_unit;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_427  LMFATRN_pt_attr;
A68_428  WMFATRN_pt_formula;
A68_432  HOFATRN_pt_type;
A68_435  USFATRN_pt_unit;
A68_442  YRFATRN_pt_instance;
} AVFATRN_pt_macparam;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_445  YUFATRN_pt_macparam;
} KVFATRN_do_pt_macparams;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_428  WMFATRN_pt_formula;
A68_422  WLFATRN_outid;
A68_441 * VRFATRN_pt_macparams;
A68_442  YRFATRN_pt_instance;
A68_INT * SLFATRN_listnumb;
A68_446  RVFATRN_pt_fnbody;
} TVFATRN_pt_fnbody;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
} OWFATRN_pt_macspec;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
} BXFATRN_pt_usage;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_427  LMFATRN_pt_attr;
A68_448  ZWFATRN_pt_usage;
} FXFATRN_pt_attrdec;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_427  LMFATRN_pt_attr;
A68_431  XNFATRN_pt_formularange;
A68_448  ZWFATRN_pt_usage;
} JXFATRN_pt_intdec;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_432  HOFATRN_pt_type;
A68_429  ONFATRN_pt_range;
} NXFATRN_pt_typebody;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_427  LMFATRN_pt_attr;
A68_451  LXFATRN_pt_typebody;
A68_448  ZWFATRN_pt_usage;
} CYFATRN_pt_typedec;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_427  LMFATRN_pt_attr;
A68_435  USFATRN_pt_unit;
A68_448  ZWFATRN_pt_usage;
} GYFATRN_pt_constdec;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_422  WLFATRN_outid;
A68_447  MWFATRN_pt_macspec;
A68_427  LMFATRN_pt_attr;
A68_434  JPFATRN_pt_names;
A68_432  HOFATRN_pt_type;
A68_446  RVFATRN_pt_fnbody;
A68_435  USFATRN_pt_unit;
A68_448  ZWFATRN_pt_usage;
} KYFATRN_pt_fndec;
typedef struct   /* env of non-global proc */
{
A68_338  Writer;
A68_97  Msg;
A68_449  DXFATRN_pt_attrdec;
A68_450  HXFATRN_pt_intdec;
A68_452  AYFATRN_pt_typedec;
A68_453  EYFATRN_pt_constdec;
A68_454  IYFATRN_pt_fndec;
} VYFATRN_pt_environ;
typedef struct   /* env of non-global proc */
{
A68_143  XLFATRN_pt_idstable;
A68_338  Writer;
A68_97  Msg;
A68_455  TYFATRN_pt_environ;
} OZFATRN_pt_closure;
typedef struct   /* env of non-global proc */
{
A68_INT  GBGATRN_sigtop;
A_PAD_INT(PAD_122)
} KBGATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SBGATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LPDATRN_hash_width;
A_PAD_INT(PAD_114)
} PPDATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XPDATRN_width;
A_PAD_INT(PAD_115)
} BQDATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
} FYDATRN_get_uchoices;
typedef struct   /* env of non-global proc */
{
A68_INT  PZDATRN_upb;
A_PAD_INT(PAD_116)
} UZDATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FIEATRN_size;
A_PAD_INT(PAD_117)
} LIEATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
A68_399  WNEATRN_get_seqstep;
} COEATRN_get_seqchoices;
typedef struct   /* env of non-global proc */
{
A68_334  Reader;
A68_97  Msg;
A68_387  ZXDATRN_get_unit;
} CSEATRN_get_joins;
typedef struct   /* env of non-global proc */
{
A68_INT  TYEATRN_size;
A_PAD_INT(PAD_118)
} YYEATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ODFATRN_macspecno;
A_PAD_INT(PAD_119)
} UDFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OEFATRN_size;
A_PAD_INT(PAD_120)
} TEFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TFFATRN_size;
} YFFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TFFATRN_size;
} LGFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TFFATRN_size;
} YGFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TFFATRN_size;
} LHFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TFFATRN_size;
} YHFATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * SLFATRN_listnumb;
A68_338  Writer;
A68_97  Msg;
A68_435  Pt_unit;
A68_439  MQFATRN_pt_seqstep;
} TQFATRN_pt_seqchoices;
typedef struct   /* env of non-global proc */
{
A68_INT * SLFATRN_listnumb;
A68_338  Writer;
A68_97  Msg;
A68_435  USFATRN_pt_unit;
} BTFATRN_pt_uchoices;

A_STATIC A68_VOID  YQCATRN_dummy_initem(A68_335  Getchar, A68_97  Msg, A68_333  *ReturnedValue);

A_STATIC A68_VOID  DRCATRN_packed_initem(A68_335  Getchar, A68_97  Msg, A68_333  *ReturnedValue);

A_STATIC A68_INT  IRCATRN_inpkdint(A68_BOOL  Neg, A68_INT  N, void *NonLocals);

A_STATIC A68_VOID  HTCATRN_generator(A68_BOOL  FTCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BUCATRN_generator(A68_BOOL  ZTCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AVCATRN_unpacked_initem(A68_335  Getchar, A68_97  Msg, A68_333  *ReturnedValue);

A_STATIC A68_CHAR  DVCATRN_getupchar(void *NonLocals);

A_STATIC A68_INT  IVCATRN_getint(void *NonLocals);

A_STATIC A68_VOID  YVCATRN_generator(A68_BOOL  WVCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MXCATRN_packed_outitem(A68_333  Item, A68_36  Putstring, A68_97  Msg);

A_STATIC A68_VOID  PXCATRN_generator(A68_BOOL  NXCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YXCATRN_put_int(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  BADATRN_unpacked_outitem(A68_333  Item, A68_36  Putstring, A68_97  Msg);

A_STATIC A68_VOID  EADATRN_generator(A68_BOOL  CADATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OADATRN_putint(A68_INT  I, A68_CHAR  Herald, void *NonLocals);

A_STATIC A68_VOID  NHDATRN_fail_token(A68_333  Val, A68_VC  Text, A68_97  Msg);

A68_INT  CLDATRN_inassemint(A68_334  Reader, A68_97  Msg);

A68_BOOL  OLDATRN_inassembool(A68_334  Reader, A68_97  Msg);

A68_VOID  SLDATRN_inassemtok(A68_334  Reader, A68_97  Msg, A68_331  *ReturnedValue);

A68_VOID  GMDATRN_inassemstr(A68_334  Reader, A68_97  Msg, A68_VC  *ReturnedValue);

A68_CHAR  SMDATRN_inassemchar(A68_334  Reader, A68_97  Msg);

A68_VOID  INDATRN_inassemid(A68_334  Reader, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  GPDATRN_read_closure(A68_334  Reader, A68_97  Msg, A68_340  *ReturnedValue);

A_STATIC A68_VOID  JPDATRN_get_idstable(void *NonLocals);

A_STATIC A68_VOID  OPDATRN_generator(A68_BOOL  MPDATRN_anonymous, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AQDATRN_generator(A68_BOOL  YPDATRN_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_159 * KQDATRN_get_ids(void *NonLocals);

A_STATIC A68_VOID  YQDATRN_get_attr(A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FSDATRN_get_formularange(A68_184  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PUDATRN_anonymous(A68_170  *ReturnedValue, void *NonLocals);

A_STATIC A68_182 * AVDATRN_get_formulas(void *NonLocals);

A_STATIC A68_VOID  OVDATRN_get_range(A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZVDATRN_get_type(A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AYDATRN_get_unit(A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_268 * EYDATRN_get_uchoices(void *NonLocals);

A_STATIC A68_VOID  TZDATRN_generator(A68_BOOL  RZDATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CIEATRN_get_macparams(A68_250  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KIEATRN_generator(A68_BOOL  IIEATRN_anonymous, A68_250  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QJEATRN_anonymous(A68_248  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BKEATRN_get_localdec(A68_INT  Ihold, A68_VC  Etext, A68_269  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SKEATRN_get_macspecitem(A68_INT  Ihold, A68_269  *ReturnedValue, void *NonLocals);

A_STATIC A68_254 * KLEATRN_get_printitems(void *NonLocals);

A_STATIC A68_240 * IMEATRN_get_print(void *NonLocals);

A_STATIC A68_241 * RMEATRN_get_fault(void *NonLocals);

A_STATIC A68_249 * ANEATRN_get_names(void *NonLocals);

A_STATIC A68_242 * ONEATRN_get_let(void *NonLocals);

A_STATIC A68_VOID  XNEATRN_get_seqstep(A68_257  *ReturnedValue, void *NonLocals);

A_STATIC A68_267 * BOEATRN_get_seqchoices(void *NonLocals);

A_STATIC A68_256 * IREATRN_anonymous(void *NonLocals);

A_STATIC A68_VOID  XREATRN_get_step(A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_247 * BSEATRN_get_joins(void *NonLocals);

A_STATIC A68_237 * BUEATRN_anonymous(void *NonLocals);

A_STATIC A68_VOID  QUEATRN_get_fnbody(A68_280  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LYEATRN_get_typebody(A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XYEATRN_generator(A68_BOOL  VYEATRN_anonymous, A68_200  *ReturnedValue, void *NonLocals);

A_STATIC A68_168 * GAFATRN_get_usage(void *NonLocals);

A_STATIC A68_167 * UAFATRN_get_attrdec(void *NonLocals);

A_STATIC A68_183 * IBFATRN_get_intdec(void *NonLocals);

A_STATIC A68_201 * YBFATRN_get_typedec(void *NonLocals);

A_STATIC A68_207 * OCFATRN_get_constdec(void *NonLocals);

A_STATIC A68_284 * EDFATRN_get_fndec(void *NonLocals);

A_STATIC A68_VOID  TDFATRN_generator(A68_BOOL  RDFATRN_anonymous, A68_285  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SEFATRN_generator(A68_BOOL  QEFATRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_287 * PFFATRN_get_environ(void *NonLocals);

A_STATIC A68_VOID  XFFATRN_generator(A68_BOOL  VFFATRN_anonymous, A68_288  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KGFATRN_generator(A68_BOOL  IGFATRN_anonymous, A68_289  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XGFATRN_generator(A68_BOOL  VGFATRN_anonymous, A68_290  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KHFATRN_generator(A68_BOOL  IHFATRN_anonymous, A68_291  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XHFATRN_generator(A68_BOOL  VHFATRN_anonymous, A68_292  *ReturnedValue, void *NonLocals);

A_STATIC A68_297 * KIFATRN_get_closure(void *NonLocals);

A_STATIC A68_VOID  EJFATRN_generator(A68_BOOL  CJFATRN_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  SJFATRN_outassemchar(A68_CHAR  C, A68_338  Writer, A68_97  Msg);

A68_VOID  AKFATRN_outassemint(A68_INT  I, A68_338  Writer, A68_97  Msg);

A68_VOID  GKFATRN_outassemstr(A68_VC  N, A68_338  Writer, A68_97  Msg);

A68_VOID  NKFATRN_outassemtok(A68_INT  Tok, A68_BOOL  Nil, A68_338  Writer, A68_97  Msg);

A68_VOID  VKFATRN_outassembool(A68_BOOL  B, A68_338  Writer, A68_97  Msg);

A68_VOID  CLFATRN_outassemid(A68_VC  Id, A68_338  Writer, A68_97  Msg);

A68_VOID  RLFATRN_write_closure(A68_340  Dc, A68_338  Writer, A68_97  Msg);

A_STATIC A68_VOID  YLFATRN_pt_idstable(void *NonLocals);

A_STATIC A68_VOID  GMFATRN_pt_ids(A68_159 * Ids, void *NonLocals);

A_STATIC A68_VOID  MMFATRN_pt_attr(A68_161  At, void *NonLocals);

A_STATIC A68_VOID  XMFATRN_pt_formula(A68_170  Int, void *NonLocals);

A_STATIC A68_VOID  PNFATRN_pt_range(A68_185  Rg, void *NonLocals);

A_STATIC A68_VOID  TNFATRN_pt_formulas(A68_182 * Fs, void *NonLocals);

A_STATIC A68_VOID  YNFATRN_pt_formularange(A68_184  Frg, void *NonLocals);

A_STATIC A68_VOID  IOFATRN_pt_type(A68_186  Type, void *NonLocals);

A_STATIC A68_VOID  CPFATRN_pt_printfault(A68_INT  Tok, A68_170  Cond, A68_254 * Ptm, void *NonLocals);

A_STATIC A68_VOID  KPFATRN_pt_names(A68_249 * Ns, void *NonLocals);

A_STATIC A68_VOID  QPFATRN_pt_let(A68_242  Let, A68_435  Pt_unit, void *NonLocals);

A_STATIC A68_VOID  UPFATRN_pt_localdec(A68_269  D, void *NonLocals);

A_STATIC A68_VOID  HQFATRN_anonymous(A68_256 * Sq, A68_435  Pt_unit);

A_STATIC A68_VOID  NQFATRN_pt_seqstep(A68_257 * Step, A68_435  Pt_unit, void *NonLocals);

A_STATIC A68_VOID  SQFATRN_pt_seqchoices(A68_267 * Sc, void *NonLocals);

A_STATIC A68_VOID  PRFATRN_do_pt_sequence(A68_256 * Sq, A68_435  Pt_unit, void *NonLocals);

A_STATIC A68_VOID  URFATRN_anonymous(A68_250  Mps);

A_STATIC A68_VOID  ZRFATRN_pt_instance(A68_248  Ins, void *NonLocals);

A_STATIC A68_VOID  ESFATRN_pt_step(A68_238  Step, A68_435  Pt_unit, void *NonLocals);

A_STATIC A68_VOID  VSFATRN_pt_unit(A68_208  Unit, void *NonLocals);

A_STATIC A68_VOID  ATFATRN_pt_uchoices(A68_268 * Uc, void *NonLocals);

A_STATIC A68_VOID  ZUFATRN_pt_macparam(A68_251  Mp, void *NonLocals);

A_STATIC A68_VOID  JVFATRN_do_pt_macparams(A68_250  Mps, void *NonLocals);

A_STATIC A68_VOID  SVFATRN_pt_fnbody(A68_280  Body, A68_435  Pt_unit, void *NonLocals);

A_STATIC A68_VOID  NWFATRN_pt_macspec(A68_282 * Ms, void *NonLocals);

A_STATIC A68_VOID  AXFATRN_pt_usage(A68_168 * Us, void *NonLocals);

A_STATIC A68_VOID  EXFATRN_pt_attrdec(A68_167 * Ad, void *NonLocals);

A_STATIC A68_VOID  IXFATRN_pt_intdec(A68_183 * Id, void *NonLocals);

A_STATIC A68_VOID  MXFATRN_pt_typebody(A68_199  Body, void *NonLocals);

A_STATIC A68_VOID  BYFATRN_pt_typedec(A68_201 * Ty, void *NonLocals);

A_STATIC A68_VOID  FYFATRN_pt_constdec(A68_207 * Cd, void *NonLocals);

A_STATIC A68_VOID  JYFATRN_pt_fndec(A68_284 * Fd, void *NonLocals);

A_STATIC A68_VOID  UYFATRN_pt_environ(A68_287 * Env, void *NonLocals);

A_STATIC A68_VOID  NZFATRN_pt_closure(A68_297 * Closure, void *NonLocals);

A_STATIC A68_VOID  BAGATRN_generator(A68_BOOL  AAGATRN_anonymous, A68_337  *ReturnedValue);

A68_VOID  IAGATRN_read_signature(A68_335  Getchar, A68_97  Msg, A68_334  *ReturnedValue);

A68_VOID  FBGATRN_write_signature(A68_36  Putstring, A68_BOOL  Mode, A68_BOOL  Write_idstable, A68_97  Msg, A68_338  *ReturnedValue);

A_STATIC A68_VOID  JBGATRN_generator(A68_BOOL  HBGATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBGATRN_generator(A68_BOOL  PBGATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  KCGATRN_finish_write_closure(A68_338  Writer, A68_97  Msg);

A_STATIC A68_VOID  OPDATRN_generator(A68_BOOL  MPDATRN_anonymous, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((PPDATRN_generator *)NonLocals)->x)
{ 
A68_337  QPDATRN;  /* clause result */
A68_337  RPDATRN;  /* OPERATORS - dynamic generator */
{ 
RPDATRN.upb = NL(LPDATRN_hash_width) ;
( MPDATRN_anonymous? A_VLOC(A68_102 ,RPDATRN): A_VHEAP(A68_102 ,RPDATRN) );
QPDATRN = RPDATRN;
} 
*ReturnedValue = (QPDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AQDATRN_generator(A68_BOOL  YPDATRN_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((BQDATRN_generator *)NonLocals)->x)
{ 
A68_102  CQDATRN;  /* clause result */
A68_102  DQDATRN;  /* OPERATORS - dynamic generator */
{ 
DQDATRN.upb = NL(XPDATRN_width) ;
( YPDATRN_anonymous? A_VLOC(A68_VC ,DQDATRN): A_VHEAP(A68_VC ,DQDATRN) );
CQDATRN = DQDATRN;
} 
*ReturnedValue = (CQDATRN);
return;
} 
#undef NL

A_STATIC A68_268 * EYDATRN_get_uchoices(void *NonLocals)
#define NL(x) (((FYDATRN_get_uchoices *)NonLocals)->x)
{ 
A68_331  GYDATRN;  /* avoid structure result */
A68_INT  HYDATRN_listnumb;
A68_331  IYDATRN;  /* avoid structure result */
A68_268 * JYDATRN_uchoices;
A68_268 ** KYDATRN_nextuchoices;
A68_BOOL  LYDATRN_check;
A68_INT  MYDATRN_sort;
A68_208  NYDATRN_test;
A68_208  OYDATRN_output;
A68_INT  PYDATRN;  /* to part of loop */
A68_INT  QYDATRN;  /* loop control */
A68_331  RYDATRN;  /* avoid structure result */
A68_208  SYDATRN;  /* avoid structure result */
A68_208  TYDATRN;  /* avoid structure result */
A68_268  UYDATRN;  /* collateral clause result */
A68_268 * VYDATRN;  /* YIELD */
A68_268 * WYDATRN;  /* clause result */
A_PROC_ENTRY(get_uchoices);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &GYDATRN );
GYDATRN;
 /* line 1064: */
HYDATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1065: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &IYDATRN );
IYDATRN;
 /* line 1066: */
JYDATRN_uchoices = JAAATRN_niluchoices;
 /* line 1067: */
KYDATRN_nextuchoices = (&JYDATRN_uchoices);
 /* line 1068: */
 /* line 1069: */
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
PYDATRN = HYDATRN_listnumb;
for ( QYDATRN = 1;
QYDATRN <= PYDATRN;
QYDATRN += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &RYDATRN );
RYDATRN;
 /* line 1074: */
LYDATRN_check = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1075: */
MYDATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1076: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &SYDATRN),( &SYDATRN,(NL(ZXDATRN_get_unit)).nonlocals));
NYDATRN_test = SYDATRN;
 /* line 1077: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &TYDATRN),( &TYDATRN,(NL(ZXDATRN_get_unit)).nonlocals));
OYDATRN_output = TYDATRN;
 /* line 1078: */
 /* line 1079: */
UYDATRN.Check = LYDATRN_check;
UYDATRN.Sort = MYDATRN_sort;
UYDATRN.Test = NYDATRN_test;
UYDATRN.Output = OYDATRN_output;
UYDATRN.Rest = (A68_268 *)A68_NIL;
VYDATRN = A_HEAP(A68_268 ) ;
(*VYDATRN) = UYDATRN ;
(*KYDATRN_nextuchoices) = VYDATRN;
 /* line 1080: */
 /* line 1081: */
KYDATRN_nextuchoices = (&((*KYDATRN_nextuchoices)->Rest));
}
 /* line 1082: */
 /* line 1083: */
WYDATRN = JYDATRN_uchoices;
} 
A_PROC_EXIT(get_uchoices);
return( WYDATRN );
} 
#undef NL

A_STATIC A68_VOID  TZDATRN_generator(A68_BOOL  RZDATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((UZDATRN_generator *)NonLocals)->x)
{ 
A68_32  VZDATRN;  /* clause result */
A68_32  WZDATRN;  /* OPERATORS - dynamic generator */
{ 
WZDATRN.upb = NL(PZDATRN_upb) ;
( RZDATRN_anonymous? A_VLOC(A68_INT ,WZDATRN): A_VHEAP(A68_INT ,WZDATRN) );
VZDATRN = WZDATRN;
} 
*ReturnedValue = (VZDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KIEATRN_generator(A68_BOOL  IIEATRN_anonymous, A68_250  *ReturnedValue, void *NonLocals)
#define NL(x) (((LIEATRN_generator *)NonLocals)->x)
{ 
A68_250  MIEATRN;  /* clause result */
A68_250  NIEATRN;  /* OPERATORS - dynamic generator */
{ 
NIEATRN.upb = NL(FIEATRN_size) ;
( IIEATRN_anonymous? A_VLOC(A68_251 ,NIEATRN): A_VHEAP(A68_251 ,NIEATRN) );
MIEATRN = NIEATRN;
} 
*ReturnedValue = (MIEATRN);
return;
} 
#undef NL

A_STATIC A68_267 * BOEATRN_get_seqchoices(void *NonLocals)
#define NL(x) (((COEATRN_get_seqchoices *)NonLocals)->x)
{ 
A68_331  DOEATRN;  /* avoid structure result */
A68_INT  EOEATRN_listnumb;
A68_331  FOEATRN;  /* avoid structure result */
A68_267 * GOEATRN_seqchoice;
A68_267 ** HOEATRN_nextseqchoice;
A68_BOOL  IOEATRN_check;
A68_INT  JOEATRN_sort;
A68_208  KOEATRN_test;
A68_257  LOEATRN_output;
A68_INT  MOEATRN;  /* to part of loop */
A68_INT  NOEATRN;  /* loop control */
A68_331  OOEATRN;  /* avoid structure result */
A68_208  POEATRN;  /* avoid structure result */
A68_257  QOEATRN;  /* avoid structure result */
A68_267  ROEATRN;  /* collateral clause result */
A68_267 * SOEATRN;  /* YIELD */
A68_267 * TOEATRN;  /* clause result */
A_PROC_ENTRY(get_seqchoices);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &DOEATRN );
DOEATRN;
 /* line 1348: */
EOEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1349: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &FOEATRN );
FOEATRN;
 /* line 1350: */
GOEATRN_seqchoice = PAAATRN_nilseqchoices;
 /* line 1351: */
HOEATRN_nextseqchoice = (&GOEATRN_seqchoice);
 /* line 1352: */
 /* line 1353: */
 /* line 1354: */
 /* line 1355: */
 /* line 1356: */
 /* line 1357: */
MOEATRN = EOEATRN_listnumb;
for ( NOEATRN = 1;
NOEATRN <= MOEATRN;
NOEATRN += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &OOEATRN );
OOEATRN;
 /* line 1358: */
IOEATRN_check = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1359: */
JOEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1360: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &POEATRN),( &POEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
KOEATRN_test = POEATRN;
 /* line 1361: */
A_CALLPROC(NL(WNEATRN_get_seqstep),( &QOEATRN),( &QOEATRN,(NL(WNEATRN_get_seqstep)).nonlocals));
LOEATRN_output = QOEATRN;
 /* line 1362: */
 /* line 1363: */
ROEATRN.Check = IOEATRN_check;
ROEATRN.Sort = JOEATRN_sort;
ROEATRN.Test = KOEATRN_test;
ROEATRN.Output = LOEATRN_output;
ROEATRN.Rest = PAAATRN_nilseqchoices;
SOEATRN = A_HEAP(A68_267 ) ;
(*SOEATRN) = ROEATRN ;
(*HOEATRN_nextseqchoice) = SOEATRN;
 /* line 1364: */
 /* line 1365: */
HOEATRN_nextseqchoice = (&((*HOEATRN_nextseqchoice)->Rest));
}
 /* line 1366: */
 /* line 1367: */
TOEATRN = GOEATRN_seqchoice;
} 
A_PROC_EXIT(get_seqchoices);
return( TOEATRN );
} 
#undef NL

A_STATIC A68_247 * BSEATRN_get_joins(void *NonLocals)
#define NL(x) (((CSEATRN_get_joins *)NonLocals)->x)
{ 
A68_331  DSEATRN;  /* avoid structure result */
A68_INT  ESEATRN_listnumb;
A68_331  FSEATRN;  /* avoid structure result */
A68_247 * GSEATRN_joins;
A68_247 ** HSEATRN_nextjoins;
A68_208  ISEATRN_from;
A68_208  JSEATRN_to;
A68_INT  KSEATRN;  /* to part of loop */
A68_INT  LSEATRN;  /* loop control */
A68_331  MSEATRN;  /* avoid structure result */
A68_208  NSEATRN;  /* avoid structure result */
A68_208  OSEATRN;  /* avoid structure result */
A68_247  PSEATRN;  /* collateral clause result */
A68_247 * QSEATRN;  /* YIELD */
A68_247 * RSEATRN;  /* clause result */
A_PROC_ENTRY(get_joins);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &DSEATRN );
DSEATRN;
 /* line 1436: */
ESEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1437: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &FSEATRN );
FSEATRN;
 /* line 1438: */
GSEATRN_joins = RAAATRN_niljoins;
 /* line 1439: */
HSEATRN_nextjoins = (&GSEATRN_joins);
 /* line 1440: */
 /* line 1441: */
 /* line 1442: */
KSEATRN = ESEATRN_listnumb;
for ( LSEATRN = 1;
LSEATRN <= KSEATRN;
LSEATRN += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MSEATRN );
MSEATRN;
 /* line 1443: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &NSEATRN),( &NSEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
ISEATRN_from = NSEATRN;
 /* line 1444: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &OSEATRN),( &OSEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
JSEATRN_to = OSEATRN;
 /* line 1445: */
 /* line 1446: */
PSEATRN.Join.From = ISEATRN_from;
PSEATRN.Join.To = JSEATRN_to;
PSEATRN.Rest = RAAATRN_niljoins;
QSEATRN = A_HEAP(A68_247 ) ;
(*QSEATRN) = PSEATRN ;
(*HSEATRN_nextjoins) = QSEATRN;
 /* line 1447: */
 /* line 1448: */
HSEATRN_nextjoins = (&((*HSEATRN_nextjoins)->Rest));
}
 /* line 1449: */
 /* line 1450: */
RSEATRN = GSEATRN_joins;
} 
A_PROC_EXIT(get_joins);
return( RSEATRN );
} 
#undef NL

A_STATIC A68_VOID  XYEATRN_generator(A68_BOOL  VYEATRN_anonymous, A68_200  *ReturnedValue, void *NonLocals)
#define NL(x) (((YYEATRN_generator *)NonLocals)->x)
{ 
A68_200  ZYEATRN;  /* clause result */
A68_200  AZEATRN;  /* OPERATORS - dynamic generator */
{ 
AZEATRN.upb = NL(TYEATRN_size) ;
( VYEATRN_anonymous? A_VLOC(A68_197 ,AZEATRN): A_VHEAP(A68_197 ,AZEATRN) );
ZYEATRN = AZEATRN;
} 
*ReturnedValue = (ZYEATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TDFATRN_generator(A68_BOOL  RDFATRN_anonymous, A68_285  *ReturnedValue, void *NonLocals)
#define NL(x) (((UDFATRN_generator *)NonLocals)->x)
{ 
A68_285  VDFATRN;  /* clause result */
A68_285  WDFATRN;  /* OPERATORS - dynamic generator */
{ 
WDFATRN.upb = NL(ODFATRN_macspecno) ;
( RDFATRN_anonymous? A_VLOC(A68_282 ,WDFATRN): A_VHEAP(A68_282 ,WDFATRN) );
VDFATRN = WDFATRN;
} 
*ReturnedValue = (VDFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SEFATRN_generator(A68_BOOL  QEFATRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((TEFATRN_generator *)NonLocals)->x)
{ 
A68_286  UEFATRN;  /* clause result */
A68_286  VEFATRN;  /* OPERATORS - dynamic generator */
{ 
VEFATRN.upb = NL(OEFATRN_size) ;
( QEFATRN_anonymous? A_VLOC(A68_283 ,VEFATRN): A_VHEAP(A68_283 ,VEFATRN) );
UEFATRN = VEFATRN;
} 
*ReturnedValue = (UEFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XFFATRN_generator(A68_BOOL  VFFATRN_anonymous, A68_288  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFFATRN_generator *)NonLocals)->x)
{ 
A68_288  ZFFATRN;  /* clause result */
A68_288  AGFATRN;  /* OPERATORS - dynamic generator */
{ 
AGFATRN.upb = (*NL(TFFATRN_size)) ;
( VFFATRN_anonymous? A_VLOC(A68_167 *,AGFATRN): A_VHEAP(A68_167 *,AGFATRN) );
ZFFATRN = AGFATRN;
} 
*ReturnedValue = (ZFFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KGFATRN_generator(A68_BOOL  IGFATRN_anonymous, A68_289  *ReturnedValue, void *NonLocals)
#define NL(x) (((LGFATRN_generator *)NonLocals)->x)
{ 
A68_289  MGFATRN;  /* clause result */
A68_289  NGFATRN;  /* OPERATORS - dynamic generator */
{ 
NGFATRN.upb = (*NL(TFFATRN_size)) ;
( IGFATRN_anonymous? A_VLOC(A68_183 *,NGFATRN): A_VHEAP(A68_183 *,NGFATRN) );
MGFATRN = NGFATRN;
} 
*ReturnedValue = (MGFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XGFATRN_generator(A68_BOOL  VGFATRN_anonymous, A68_290  *ReturnedValue, void *NonLocals)
#define NL(x) (((YGFATRN_generator *)NonLocals)->x)
{ 
A68_290  ZGFATRN;  /* clause result */
A68_290  AHFATRN;  /* OPERATORS - dynamic generator */
{ 
AHFATRN.upb = (*NL(TFFATRN_size)) ;
( VGFATRN_anonymous? A_VLOC(A68_201 *,AHFATRN): A_VHEAP(A68_201 *,AHFATRN) );
ZGFATRN = AHFATRN;
} 
*ReturnedValue = (ZGFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KHFATRN_generator(A68_BOOL  IHFATRN_anonymous, A68_291  *ReturnedValue, void *NonLocals)
#define NL(x) (((LHFATRN_generator *)NonLocals)->x)
{ 
A68_291  MHFATRN;  /* clause result */
A68_291  NHFATRN;  /* OPERATORS - dynamic generator */
{ 
NHFATRN.upb = (*NL(TFFATRN_size)) ;
( IHFATRN_anonymous? A_VLOC(A68_207 *,NHFATRN): A_VHEAP(A68_207 *,NHFATRN) );
MHFATRN = NHFATRN;
} 
*ReturnedValue = (MHFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XHFATRN_generator(A68_BOOL  VHFATRN_anonymous, A68_292  *ReturnedValue, void *NonLocals)
#define NL(x) (((YHFATRN_generator *)NonLocals)->x)
{ 
A68_292  ZHFATRN;  /* clause result */
A68_292  AIFATRN;  /* OPERATORS - dynamic generator */
{ 
AIFATRN.upb = (*NL(TFFATRN_size)) ;
( VHFATRN_anonymous? A_VLOC(A68_284 *,AIFATRN): A_VHEAP(A68_284 *,AIFATRN) );
ZHFATRN = AIFATRN;
} 
*ReturnedValue = (ZHFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SQFATRN_pt_seqchoices(A68_267 * Sc, void *NonLocals)
#define NL(x) (((TQFATRN_pt_seqchoices *)NonLocals)->x)
{ 
A68_267 * UQFATRN_seqchoices;
A_PROC_ENTRY(pt_seqchoices);
 /* line 2126: */
{ 
UQFATRN_seqchoices = Sc;
 /* line 2127: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2128: */
for ( ;; )
{ 
 /* line 2129: */
if ( !((UQFATRN_seqchoices!=PAAATRN_nilseqchoices)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2130: */
 /* line 2131: */
UQFATRN_seqchoices = (*(&(UQFATRN_seqchoices->Rest)));
}
 /* line 2132: */
UQFATRN_seqchoices = Sc;
 /* line 2133: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2134: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2135: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2136: */
NKFATRN_outassemtok(XFDATRN_seqchoicetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2137: */
for ( ;; )
{ 
 /* line 2138: */
if ( !((UQFATRN_seqchoices!=PAAATRN_nilseqchoices)) ) break;
NKFATRN_outassemtok(XFDATRN_seqchoicetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2139: */
VKFATRN_outassembool((*(&(UQFATRN_seqchoices->Check))), NL(Writer), NL(Msg));
 /* line 2140: */
AKFATRN_outassemint((*(&(UQFATRN_seqchoices->Sort))), NL(Writer), NL(Msg));
 /* line 2141: */
A_CALLPROC(NL(Pt_unit),((*(&(UQFATRN_seqchoices->Test)))),((*(&(UQFATRN_seqchoices->Test))),(NL(Pt_unit)).nonlocals));
 /* line 2142: */
A_CALLPROC(NL(MQFATRN_pt_seqstep),((&(UQFATRN_seqchoices->Output)), NL(Pt_unit)),((&(UQFATRN_seqchoices->Output)), NL(Pt_unit),(NL(MQFATRN_pt_seqstep)).nonlocals));
 /* line 2143: */
 /* line 2144: */
UQFATRN_seqchoices = (*(&(UQFATRN_seqchoices->Rest)));
}
 /* line 2145: */
} 
A_PROC_EXIT(pt_seqchoices);
return;
} 
#undef NL

A_STATIC A68_VOID  ATFATRN_pt_uchoices(A68_268 * Uc, void *NonLocals)
#define NL(x) (((BTFATRN_pt_uchoices *)NonLocals)->x)
{ 
A68_268 * CTFATRN_uchoices;
A_PROC_ENTRY(pt_uchoices);
 /* line 2288: */
 /* line 2289: */
{ 
CTFATRN_uchoices = Uc;
 /* line 2290: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2291: */
for ( ;; )
{ 
 /* line 2292: */
if ( !((CTFATRN_uchoices!=JAAATRN_niluchoices)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2293: */
 /* line 2294: */
CTFATRN_uchoices = (*(&(CTFATRN_uchoices->Rest)));
}
 /* line 2295: */
CTFATRN_uchoices = Uc;
 /* line 2296: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2297: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2298: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2299: */
NKFATRN_outassemtok(WFDATRN_uchoicetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2300: */
for ( ;; )
{ 
 /* line 2301: */
if ( !((CTFATRN_uchoices!=JAAATRN_niluchoices)) ) break;
NKFATRN_outassemtok(WFDATRN_uchoicetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2302: */
VKFATRN_outassembool((*(&(CTFATRN_uchoices->Check))), NL(Writer), NL(Msg));
 /* line 2303: */
AKFATRN_outassemint((*(&(CTFATRN_uchoices->Sort))), NL(Writer), NL(Msg));
 /* line 2304: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(CTFATRN_uchoices->Test)))),((*(&(CTFATRN_uchoices->Test))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2305: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(CTFATRN_uchoices->Output)))),((*(&(CTFATRN_uchoices->Output))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2306: */
 /* line 2307: */
CTFATRN_uchoices = (*(&(CTFATRN_uchoices->Rest)));
}
 /* line 2308: */
} 
A_PROC_EXIT(pt_uchoices);
return;
} 
#undef NL

A_STATIC A68_INT  IRCATRN_inpkdint(A68_BOOL  Neg, A68_INT  N, void *NonLocals)
#define NL(x) (((JRCATRN_inpkdint *)NonLocals)->x)
{ 
A68_BITS  KRCATRN_b;
A68_46  NRCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ORCATRN;  /* to part of loop */
A68_INT  PRCATRN;  /* loop control */
A68_INT  QRCATRN;  /* SHL */
A68_INT  RRCATRN;  /* clause result */
A_PROC_ENTRY(inpkdint);
 /* line 305: */
 /* line 306: */
{ 
KRCATRN_b = 0X0U;
 /* line 308: */
 /* line 309: */
if ( (N>EDAAOST_int_size) )
{ 
 /* line 310: */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(NRCATRN,MRCATRN,A68_VC )),(WHAAOSI_user, A_HVEC(NRCATRN,MRCATRN,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 311: */
ORCATRN = N;
for ( PRCATRN = 1;
PRCATRN <= ORCATRN;
PRCATRN += 1 )
{ 
QRCATRN = 8 ;
KRCATRN_b = (A68_BITS )(A_SHL(KRCATRN_b,QRCATRN)|(A68_BITS )(A68_INT)(unsigned char)A_CALLPROC(NL(Getchar),(),((NL(Getchar)).nonlocals)));
}
 /* line 312: */
if ( Neg )
{ 
RRCATRN = (A68_INT )~KRCATRN_b;
} 
else
{ 
 /* line 313: */
RRCATRN = (A68_INT )KRCATRN_b;
} 
} 
A_PROC_EXIT(inpkdint);
return( RRCATRN );
} 
#undef NL

A_STATIC A68_VOID  HTCATRN_generator(A68_BOOL  FTCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ITCATRN_generator *)NonLocals)->x)
{ 
A68_VC  JTCATRN;  /* clause result */
A68_VC  KTCATRN;  /* OPERATORS - dynamic generator */
{ 
KTCATRN.upb = (NL(ERCATRN_val)-KQCATRN_ident_range_start) ;
( FTCATRN_anonymous? A_VLOC(A68_CHAR ,KTCATRN): A_VHEAP(A68_CHAR ,KTCATRN) );
JTCATRN = KTCATRN;
} 
*ReturnedValue = (JTCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BUCATRN_generator(A68_BOOL  ZTCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CUCATRN_generator *)NonLocals)->x)
{ 
A68_VC  DUCATRN;  /* clause result */
A68_VC  EUCATRN;  /* OPERATORS - dynamic generator */
{ 
EUCATRN.upb = NL(YTCATRN_size) ;
( ZTCATRN_anonymous? A_VLOC(A68_CHAR ,EUCATRN): A_VHEAP(A68_CHAR ,EUCATRN) );
DUCATRN = EUCATRN;
} 
*ReturnedValue = (DUCATRN);
return;
} 
#undef NL

A_STATIC A68_CHAR  DVCATRN_getupchar(void *NonLocals)
#define NL(x) (((EVCATRN_getupchar *)NonLocals)->x)
{ 
A68_CHAR  FVCATRN_c;
A68_CHAR  GVCATRN;  /* clause result */
A_PROC_ENTRY(getupchar);
{ 
FVCATRN_c = A_CALLPROC(NL(Getchar),(),((NL(Getchar)).nonlocals));
 /* line 379: */
if ( (FVCATRN_c==UQCATRN_lf) )
{ 
GVCATRN = A_CALLPROC(NL(CVCATRN_getupchar),(),((NL(CVCATRN_getupchar)).nonlocals));
} 
else
{ 
 /* line 380: */
GVCATRN = FVCATRN_c;
} 
} 
A_PROC_EXIT(getupchar);
return( GVCATRN );
} 
#undef NL

A_STATIC A68_INT  IVCATRN_getint(void *NonLocals)
#define NL(x) (((JVCATRN_getint *)NonLocals)->x)
{ 
A68_INT  KVCATRN_integer;
A68_BOOL  LVCATRN;  /* optbool result */
A68_BOOL  MVCATRN;  /* clause result */
A68_INT  NVCATRN;  /* clause result */
A_PROC_ENTRY(getint);
{ 
KVCATRN_integer = 0;
 /* line 384: */
for ( ;; )
{ 
XUCATRN_next = A_CALLPROC(NL(CVCATRN_getupchar),(),((NL(CVCATRN_getupchar)).nonlocals));
 /* line 385: */
LVCATRN = (XUCATRN_next>='0');
if ( LVCATRN )
{LVCATRN = (XUCATRN_next<='9');
}
 /* line 386: */
MVCATRN = LVCATRN;
if ( !MVCATRN ) break;
KVCATRN_integer*=10 ;
KVCATRN_integer-=((A68_INT)(unsigned char)XUCATRN_next-VQCATRN_zero);
}
 /* line 387: */
 /* line 388: */
NVCATRN = KVCATRN_integer;
} 
A_PROC_EXIT(getint);
return( NVCATRN );
} 
#undef NL

A_STATIC A68_VOID  YVCATRN_generator(A68_BOOL  WVCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZVCATRN_generator *)NonLocals)->x)
{ 
A68_VC  AWCATRN;  /* clause result */
A68_VC  BWCATRN;  /* OPERATORS - dynamic generator */
{ 
BWCATRN.upb = NL(VVCATRN_size) ;
( WVCATRN_anonymous? A_VLOC(A68_CHAR ,BWCATRN): A_VHEAP(A68_CHAR ,BWCATRN) );
AWCATRN = BWCATRN;
} 
*ReturnedValue = (AWCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PXCATRN_generator(A68_BOOL  NXCATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QXCATRN_generator *)NonLocals)->x)
{ 
A68_VC  RXCATRN;  /* clause result */
A68_VC  SXCATRN;  /* OPERATORS - dynamic generator */
{ 
SXCATRN.upb = 24 ;
( NXCATRN_anonymous? A_VLOC(A68_CHAR ,SXCATRN): A_VHEAP(A68_CHAR ,SXCATRN) );
RXCATRN = SXCATRN;
} 
*ReturnedValue = (RXCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YXCATRN_put_int(A68_INT  I, void *NonLocals)
#define NL(x) (((ZXCATRN_put_int *)NonLocals)->x)
{ 
A68_BOOL  AYCATRN;  /* optbool result */
A68_INT  BYCATRN;  /* YIELD */
A68_CHAR * CYCATRN;  /* YIELD */
A68_BOOL  DYCATRN_neg;
A68_BITS  EYCATRN;  /* clause result */
A68_BITS  FYCATRN_b;
A68_INT  GYCATRN_n;
A68_INT  HYCATRN;  /* YIELD */
A68_CHAR * IYCATRN;  /* YIELD */
A68_INT  JYCATRN;  /* SHR */
A68_INT  KYCATRN;  /* YIELD */
A68_CHAR * LYCATRN;  /* YIELD */
A68_INT  MYCATRN;  /* YIELD */
A68_CHAR * NYCATRN;  /* YIELD */
A68_INT  OYCATRN;  /* YIELD */
A68_CHAR * PYCATRN;  /* YIELD */
A68_INT  QYCATRN;  /* YIELD */
A68_CHAR * RYCATRN;  /* YIELD */
A_PROC_ENTRY(put_int);
 /* line 437: */
 /* line 438: */
{ 
AYCATRN = (I>=QQCATRN_lowint);
if ( AYCATRN )
{AYCATRN = (I<=TQCATRN_highint);
}
 /* line 439: */
if ( AYCATRN )
{ 
 /* line 440: */
 /* line 441: */
BYCATRN = (*NL(VXCATRN_cnt))-=1 ;
CYCATRN = (&A_VINDEX(NL(TXCATRN_cc),BYCATRN)) ;
(*CYCATRN) = (A68_CHAR)(I+SQCATRN_zeroint);
} 
else
{ 
DYCATRN_neg = (I<0);
 /* line 442: */
if ( DYCATRN_neg )
{ 
EYCATRN = ~(A68_BITS )I;
} 
else
{ 
EYCATRN = (A68_BITS )I;
} 
FYCATRN_b = EYCATRN;
 /* line 443: */
GYCATRN_n = 0;
 /* line 444: */
for ( ;; )
{ 
 /* line 445: */
 /* line 446: */
if ( !((FYCATRN_b!=0X0U)) ) break;
HYCATRN = (*NL(VXCATRN_cnt))-=1 ;
IYCATRN = (&A_VINDEX(NL(TXCATRN_cc),HYCATRN)) ;
(*IYCATRN) = (A68_CHAR)(A68_INT )(A68_BITS )(FYCATRN_b&0XffU);
 /* line 447: */
GYCATRN_n+=1;
 /* line 448: */
 /* line 449: */
JYCATRN = 8 ;
FYCATRN_b = A_SHR(FYCATRN_b,JYCATRN);
}
 /* line 450: */
 /* line 451: */
if ( (GYCATRN_n>2) )
{ 
if ( DYCATRN_neg )
{ 
GYCATRN_n+=(A68_INT )0X80U;
} 
 /* line 452: */
KYCATRN = (*NL(VXCATRN_cnt))-=1 ;
LYCATRN = (&A_VINDEX(NL(TXCATRN_cc),KYCATRN)) ;
(*LYCATRN) = (A68_CHAR)GYCATRN_n;
 /* line 453: */
 /* line 454: */
MYCATRN = (*NL(VXCATRN_cnt))-=1 ;
NYCATRN = (&A_VINDEX(NL(TXCATRN_cc),MYCATRN)) ;
(*NYCATRN) = (A68_CHAR)PQCATRN_extended_int;
} 
else
{ 
if ( DYCATRN_neg )
{ 
 /* line 455: */
OYCATRN = (*NL(VXCATRN_cnt))-=1 ;
PYCATRN = (&A_VINDEX(NL(TXCATRN_cc),OYCATRN)) ;
(*PYCATRN) = (A68_CHAR)((OQCATRN_neg1byte_int+GYCATRN_n)-1);
} 
else
{ 
 /* line 456: */
 /* line 457: */
 /* line 458: */
QYCATRN = (*NL(VXCATRN_cnt))-=1 ;
RYCATRN = (&A_VINDEX(NL(TXCATRN_cc),QYCATRN)) ;
(*RYCATRN) = (A68_CHAR)((NQCATRN_pos1byte_int+GYCATRN_n)-1);
} 
} 
} 
} 
A_PROC_EXIT(put_int);
return;
} 
#undef NL

A_STATIC A68_VOID  EADATRN_generator(A68_BOOL  CADATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FADATRN_generator *)NonLocals)->x)
{ 
A68_VC  GADATRN;  /* clause result */
A68_VC  HADATRN;  /* OPERATORS - dynamic generator */
{ 
HADATRN.upb = 16 ;
( CADATRN_anonymous? A_VLOC(A68_CHAR ,HADATRN): A_VHEAP(A68_CHAR ,HADATRN) );
GADATRN = HADATRN;
} 
*ReturnedValue = (GADATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OADATRN_putint(A68_INT  I, A68_CHAR  Herald, void *NonLocals)
#define NL(x) (((PADATRN_putint *)NonLocals)->x)
{ 
A68_INT  QADATRN_tmp;
A68_VC  SADATRN;  /* clause result */
A68_VC  WADATRN_tab;
A68_BOOL  XADATRN_first;
A68_BOOL  YADATRN;  /* optbool result */
A68_INT  ZADATRN;  /* YIELD */
A68_INT  ABDATRN;  /* ADICOPS - MOD */
A68_INT  BBDATRN;  /* ADICOPS - MOD */
A68_INT  CBDATRN;  /* YIELD */
A68_CHAR * DBDATRN;  /* YIELD */
A68_INT  EBDATRN;  /* YIELD */
A68_CHAR * FBDATRN;  /* YIELD */
A68_VC  GBDATRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(putint);
 /* line 513: */
 /* line 514: */
{ 
QADATRN_tmp = I;
 /* line 515: */
if ( (I<0) )
{ 
SADATRN = TADATRN;
} 
else
{ 
SADATRN = VADATRN;
} 
WADATRN_tab = SADATRN;
 /* line 516: */
XADATRN_first = A68_TRUE;
 /* line 518: */
for ( ;; )
{ 
YADATRN = XADATRN_first;
if ( ! YADATRN )
{ /* line 519: */
YADATRN = (QADATRN_tmp!=0);
}
 /* line 520: */
if ( !(YADATRN) ) break;
XADATRN_first = A68_FALSE;
 /* line 521: */
ZADATRN = (*NL(KADATRN_cpos))-=1 ;
BBDATRN = 10 ;
CBDATRN = (A_MOD(QADATRN_tmp,BBDATRN,ABDATRN)+1) ;
DBDATRN = (&A_VINDEX(NL(IADATRN_chars),ZADATRN)) ;
(*DBDATRN) = A_VINDEX(WADATRN_tab,CBDATRN);
 /* line 522: */
 /* line 523: */
QADATRN_tmp = (QADATRN_tmp/10);
}
 /* line 524: */
EBDATRN = (*NL(KADATRN_cpos))-=1 ;
FBDATRN = (&A_VINDEX(NL(IADATRN_chars),EBDATRN)) ;
(*FBDATRN) = Herald;
 /* line 525: */
 /* line 526: */
A_CALLPROC(NL(Putstring),(A_VTRIM(GBDATRN,(NL(IADATRN_chars)),A_VTSCRIPT(&(GBDATRN.upb),(NL(IADATRN_chars)).upb,(*NL(KADATRN_cpos)),(NL(IADATRN_chars)).upb))),(A_VTRIM(GBDATRN,(NL(IADATRN_chars)),A_VTSCRIPT(&(GBDATRN.upb),(NL(IADATRN_chars)).upb,(*NL(KADATRN_cpos)),(NL(IADATRN_chars)).upb)),(NL(Putstring)).nonlocals));
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  JPDATRN_get_idstable(void *NonLocals)
#define NL(x) (((KPDATRN_get_idstable *)NonLocals)->x)
{ 
A68_INT  LPDATRN_hash_width;
A68_374  NPDATRN_generator;   /* proc value of non-global proc */
A68_337  SPDATRN;  /* avoid structure result */
A68_337 * TPDATRN;  /* YIELD */
A68_102 * UPDATRN_arm;
A68_337  VPDATRN;  /* forall yield */
A68_INT  WPDATRN;  /* forall loop counter */
A68_INT  XPDATRN_width;
A68_375  ZPDATRN_generator;   /* proc value of non-global proc */
A68_102  EQDATRN;  /* avoid structure result */
A68_VC * FQDATRN_id;
A68_INT  GQDATRN;  /* forall loop counter */
A68_VC  HQDATRN;  /* avoid structure result */
A68_VC  IQDATRN;  /* avoid structure result */
A_PROC_ENTRY(get_idstable);
{ 
LPDATRN_hash_width = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 897: */
 /* line 898: */
 /* line 899: */
if ( (LPDATRN_hash_width>0) )
{ 
 /* line 900: */
A_CLOSURE( NPDATRN_generator, OPDATRN_generator, PPDATRN_generator );
(( PPDATRN_generator * ) ( NPDATRN_generator.nonlocals )) -> LPDATRN_hash_width = LPDATRN_hash_width;
A_CALLPROC(NPDATRN_generator,(A68_FALSE, &SPDATRN),(A68_FALSE, &SPDATRN,(NPDATRN_generator).nonlocals));
TPDATRN = NL(Reader).Ids_lookup ;
(*TPDATRN) = SPDATRN;
 /* line 901: */
 /* line 902: */
VPDATRN = (*NL(Reader).Ids_lookup) ;
WPDATRN = VPDATRN.upb -1;
UPDATRN_arm = VPDATRN.data;
for (;WPDATRN-- >= 0;
(UPDATRN_arm++
) )
{
XPDATRN_width = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 903: */
A_CLOSURE( ZPDATRN_generator, AQDATRN_generator, BQDATRN_generator );
(( BQDATRN_generator * ) ( ZPDATRN_generator.nonlocals )) -> XPDATRN_width = XPDATRN_width;
A_CALLPROC(ZPDATRN_generator,(A68_FALSE, &EQDATRN),(A68_FALSE, &EQDATRN,(ZPDATRN_generator).nonlocals));
(*UPDATRN_arm) = EQDATRN;
 /* line 904: */
 /* line 905: */
GQDATRN = (*UPDATRN_arm).upb -1;
FQDATRN_id = (*UPDATRN_arm).data;
for (;GQDATRN-- >= 0;
(FQDATRN_id++
) )
{
GMDATRN_inassemstr( NL(Reader), NL(Msg), &HQDATRN );
A_CALLPROC(ZLAATRN_makeid,(HQDATRN, &IQDATRN),(HQDATRN, &IQDATRN,(ZLAATRN_makeid).nonlocals));
(*FQDATRN_id) = IQDATRN;
}
 /* line 906: */
}
 /* line 907: */
 /* line 908: */
} 
} 
A_PROC_EXIT(get_idstable);
return;
} 
#undef NL

A_STATIC A68_159 * KQDATRN_get_ids(void *NonLocals)
#define NL(x) (((LQDATRN_get_ids *)NonLocals)->x)
{ 
A68_331  MQDATRN;  /* avoid structure result */
A68_INT  NQDATRN_listnumb;
A68_331  OQDATRN;  /* avoid structure result */
A68_159 * PQDATRN_strings;
A68_159 ** QQDATRN_nextstrings;
A68_INT  RQDATRN;  /* to part of loop */
A68_INT  SQDATRN;  /* loop control */
A68_159  TQDATRN;  /* collateral clause result */
A68_VC  UQDATRN;  /* avoid structure result */
A68_159 * VQDATRN;  /* YIELD */
A68_159 * WQDATRN;  /* clause result */
A_PROC_ENTRY(get_ids);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MQDATRN );
MQDATRN;
 /* line 917: */
NQDATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 918: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &OQDATRN );
OQDATRN;
 /* line 919: */
PQDATRN_strings = LAAATRN_nilids;
 /* line 920: */
QQDATRN_nextstrings = (&PQDATRN_strings);
 /* line 921: */
 /* line 922: */
RQDATRN = NQDATRN_listnumb;
for ( SQDATRN = 1;
SQDATRN <= RQDATRN;
SQDATRN += 1 )
{ 
INDATRN_inassemid( NL(Reader), NL(Msg), &UQDATRN );
TQDATRN.Id = UQDATRN;
TQDATRN.Rest = (A68_159 *)A68_NIL;
VQDATRN = A_HEAP(A68_159 ) ;
(*VQDATRN) = TQDATRN ;
(*QQDATRN_nextstrings) = VQDATRN;
 /* line 923: */
 /* line 924: */
QQDATRN_nextstrings = (&((*QQDATRN_nextstrings)->Rest));
}
 /* line 925: */
 /* line 926: */
WQDATRN = PQDATRN_strings;
} 
A_PROC_EXIT(get_ids);
return( WQDATRN );
} 
#undef NL

A_STATIC A68_VOID  YQDATRN_get_attr(A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZQDATRN_get_attr *)NonLocals)->x)
{ 
A68_INT  ARDATRN_listnumb;
A68_331  BRDATRN;  /* avoid structure result */
A68_161  CRDATRN;  /* clause result */
A68_161  DRDATRN;  /* OPERATORS - mode -> union mode */
A68_162 * ERDATRN;  /* YIELD */
A68_VC  FRDATRN;  /* avoid structure result */
A68_VC  GRDATRN_classname;
A68_159 * HRDATRN_strings;
A68_163  IRDATRN;  /* collateral clause result */
A68_163 * JRDATRN;  /* YIELD */
A68_161  KRDATRN;  /* OPERATORS - mode -> union mode */
A68_331  LRDATRN;  /* avoid structure result */
A68_331  MRDATRN;  /* avoid structure result */
A68_164 * NRDATRN_attrs;
A68_164 ** ORDATRN_nextattrs;
A68_INT  PRDATRN;  /* to part of loop */
A68_INT  QRDATRN;  /* loop control */
A68_164  RRDATRN;  /* collateral clause result */
A68_161  SRDATRN;  /* avoid structure result */
A68_164 * TRDATRN;  /* YIELD */
A68_161  URDATRN;  /* OPERATORS - mode -> union mode */
A68_161  VRDATRN;  /* avoid structure result */
A68_161  WRDATRN;  /* OPERATORS - mode -> union mode */
A68_165 * XRDATRN;  /* YIELD */
A68_161  YRDATRN;  /* OPERATORS - mode -> union mode */
A68_46  BSDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_161  CSDATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(get_attr);
{ 
ARDATRN_listnumb = 0;
 /* line 931: */
 /* line 932: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &BRDATRN );
switch ( ((BRDATRN.Token+1)-LFDATRN_attrnametok) )
{ 
case 1: 
 /* line 933: */
ERDATRN = UDAATRN_makeattrname(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
CRDATRN = A_UNITE(DRDATRN,mode1,1,ERDATRN);
break;
case 2: 
{ 
INDATRN_inassemid( NL(Reader), NL(Msg), &FRDATRN );
GRDATRN_classname = FRDATRN;
 /* line 934: */
HRDATRN_strings = A_CALLPROC(NL(JQDATRN_get_ids),(),((NL(JQDATRN_get_ids)).nonlocals));
 /* line 935: */
IRDATRN.Classname = GRDATRN_classname;
 /* line 936: */
IRDATRN.Strings = HRDATRN_strings;
 /* line 937: */
JRDATRN = A_HEAP(A68_163 ) ;
(*JRDATRN) = IRDATRN ;
CRDATRN = A_UNITE(KRDATRN,mode2,2,JRDATRN);
} 
break;
case 3: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &LRDATRN );
LRDATRN;
 /* line 938: */
ARDATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 939: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MRDATRN );
MRDATRN;
 /* line 940: */
NRDATRN_attrs = DBAATRN_nilattrstr;
 /* line 941: */
ORDATRN_nextattrs = (&NRDATRN_attrs);
 /* line 942: */
 /* line 943: */
PRDATRN = ARDATRN_listnumb;
for ( QRDATRN = 1;
QRDATRN <= PRDATRN;
QRDATRN += 1 )
{ 
A_CALLPROC(NL(XQDATRN_get_attr),( &SRDATRN),( &SRDATRN,(NL(XQDATRN_get_attr)).nonlocals));
RRDATRN.Elem = SRDATRN;
RRDATRN.Rest = DBAATRN_nilattrstr;
TRDATRN = A_HEAP(A68_164 ) ;
(*TRDATRN) = RRDATRN ;
(*ORDATRN_nextattrs) = TRDATRN;
 /* line 944: */
 /* line 945: */
ORDATRN_nextattrs = (&((*ORDATRN_nextattrs)->Rest));
}
 /* line 946: */
 /* line 947: */
 /* line 948: */
CRDATRN = A_UNITE(URDATRN,mode3,3,NRDATRN_attrs);
} 
break;
case 4: 
 /* line 950: */
A_CALLPROC(NL(XQDATRN_get_attr),( &VRDATRN),( &VRDATRN,(NL(XQDATRN_get_attr)).nonlocals));
XRDATRN = ZDAATRN_makeattrbracket(VRDATRN) ;
CRDATRN = A_UNITE(WRDATRN,mode4,4,XRDATRN);
break;
case 5: 
CRDATRN = A_UNITE(YRDATRN,mode5,5,(&ZHAATRN_attrnull));
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(BSDATRN,ASDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(BSDATRN,ASDATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 951: */
 /* line 952: */
CRDATRN = A_UNITE(CSDATRN,mode5,5,(&ZHAATRN_attrnull));
break;
} 
} 
A_PROC_EXIT(get_attr);
*ReturnedValue = (CRDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FSDATRN_get_formularange(A68_184  *ReturnedValue, void *NonLocals)
#define NL(x) (((GSDATRN_get_formularange *)NonLocals)->x)
{ 
A68_331  HSDATRN;  /* avoid structure result */
A68_184  ISDATRN;  /* clause result */
A68_184  JSDATRN;  /* OPERATORS - mode -> union mode */
A68_174 * KSDATRN;  /* YIELD */
A68_INT  LSDATRN_int;
A68_VC  MSDATRN;  /* avoid structure result */
A68_VC  NSDATRN_text;
A68_171  OSDATRN;  /* collateral clause result */
A68_171 * PSDATRN;  /* YIELD */
A68_184  QSDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  RSDATRN_sort;
A68_170  SSDATRN;  /* avoid structure result */
A68_170  TSDATRN_test;
A68_170  USDATRN;  /* avoid structure result */
A68_170  VSDATRN_standard;
A68_172  WSDATRN;  /* collateral clause result */
A68_172 * XSDATRN;  /* YIELD */
A68_184  YSDATRN;  /* OPERATORS - mode -> union mode */
A68_184  ZSDATRN;  /* OPERATORS - mode -> union mode */
A68_173 * ATDATRN;  /* YIELD */
A68_170  BTDATRN;  /* avoid structure result */
A68_170  CTDATRN_left;
A68_INT  DTDATRN_sort;
A68_170  ETDATRN;  /* avoid structure result */
A68_170  FTDATRN_right;
A68_175  GTDATRN;  /* collateral clause result */
A68_175 * HTDATRN;  /* YIELD */
A68_184  ITDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  JTDATRN_sort;
A68_170  KTDATRN;  /* avoid structure result */
A68_170  LTDATRN_right;
A68_176  MTDATRN;  /* collateral clause result */
A68_176 * NTDATRN;  /* YIELD */
A68_184  OTDATRN;  /* OPERATORS - mode -> union mode */
A68_170  PTDATRN;  /* avoid structure result */
A68_170  QTDATRN_cond;
A68_170  RTDATRN;  /* avoid structure result */
A68_170  STDATRN_true;
A68_170  TTDATRN;  /* avoid structure result */
A68_170  UTDATRN_false;
A68_177  VTDATRN;  /* collateral clause result */
A68_177 * WTDATRN;  /* YIELD */
A68_184  XTDATRN;  /* OPERATORS - mode -> union mode */
A68_170  YTDATRN;  /* avoid structure result */
A68_184  ZTDATRN;  /* OPERATORS - mode -> union mode */
A68_178 * AUDATRN;  /* YIELD */
A68_184  BUDATRN;  /* OPERATORS - mode -> union mode */
A68_179 * CUDATRN;  /* YIELD */
A68_184  DUDATRN;  /* OPERATORS - mode -> union mode */
A68_170  EUDATRN;  /* avoid structure result */
A68_170  FUDATRN_lwb;
A68_170  GUDATRN;  /* avoid structure result */
A68_170  HUDATRN_upb;
A68_185  IUDATRN;  /* collateral clause result */
A68_184  JUDATRN;  /* OPERATORS - mode -> union mode */
A68_46  MUDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  NUDATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(get_formularange);
{ 
 /* line 960: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &HSDATRN );
switch ( ((HSDATRN.Token+1)-UBDATRN_fnametok) )
{ 
case 1: 
 /* line 961: */
KSDATRN = OEAATRN_makefname(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
ISDATRN = A_UNITE(JSDATRN,mode4,4,KSDATRN);
break;
case 2: 
{ 
LSDATRN_int = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 962: */
INDATRN_inassemid( NL(Reader), NL(Msg), &MSDATRN );
NSDATRN_text = MSDATRN;
 /* line 963: */
OSDATRN.Int = LSDATRN_int;
 /* line 964: */
OSDATRN.Text = NSDATRN_text;
 /* line 965: */
PSDATRN = A_HEAP(A68_171 ) ;
(*PSDATRN) = OSDATRN ;
ISDATRN = A_UNITE(QSDATRN,mode1,1,PSDATRN);
} 
break;
case 3: 
{ 
RSDATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 966: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &SSDATRN),( &SSDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
TSDATRN_test = SSDATRN;
A_CALLPROC((*NL(DSDATRN_get_formula)),( &USDATRN),( &USDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
VSDATRN_standard = USDATRN;
 /* line 967: */
WSDATRN.Sort = RSDATRN_sort;
WSDATRN.Test = TSDATRN_test;
 /* line 968: */
WSDATRN.Standard = VSDATRN_standard;
 /* line 969: */
XSDATRN = A_HEAP(A68_172 ) ;
(*XSDATRN) = WSDATRN ;
ISDATRN = A_UNITE(YSDATRN,mode2,2,XSDATRN);
} 
break;
case 4: 
 /* line 970: */
ATDATRN = JEAATRN_makefarith(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
ISDATRN = A_UNITE(ZSDATRN,mode3,3,ATDATRN);
break;
case 5: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &BTDATRN),( &BTDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
CTDATRN_left = BTDATRN;
 /* line 971: */
DTDATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 972: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &ETDATRN),( &ETDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
FTDATRN_right = ETDATRN;
 /* line 973: */
GTDATRN.Left = CTDATRN_left;
GTDATRN.Sort = DTDATRN_sort;
 /* line 974: */
GTDATRN.Right = FTDATRN_right;
 /* line 975: */
HTDATRN = A_HEAP(A68_175 ) ;
(*HTDATRN) = GTDATRN ;
ISDATRN = A_UNITE(ITDATRN,mode5,5,HTDATRN);
} 
break;
case 6: 
{ 
JTDATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 976: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &KTDATRN),( &KTDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
LTDATRN_right = KTDATRN;
 /* line 977: */
MTDATRN.Sort = JTDATRN_sort;
 /* line 978: */
MTDATRN.Right = LTDATRN_right;
 /* line 979: */
NTDATRN = A_HEAP(A68_176 ) ;
(*NTDATRN) = MTDATRN ;
ISDATRN = A_UNITE(OTDATRN,mode6,6,NTDATRN);
} 
break;
case 7: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &PTDATRN),( &PTDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
QTDATRN_cond = PTDATRN;
A_CALLPROC((*NL(DSDATRN_get_formula)),( &RTDATRN),( &RTDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
STDATRN_true = RTDATRN;
A_CALLPROC((*NL(DSDATRN_get_formula)),( &TTDATRN),( &TTDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
UTDATRN_false = TTDATRN;
 /* line 980: */
VTDATRN.Cond = QTDATRN_cond;
VTDATRN.True = STDATRN_true;
 /* line 981: */
VTDATRN.False = UTDATRN_false;
 /* line 982: */
WTDATRN = A_HEAP(A68_177 ) ;
(*WTDATRN) = VTDATRN ;
ISDATRN = A_UNITE(XTDATRN,mode7,7,WTDATRN);
} 
break;
case 8: 
 /* line 983: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &YTDATRN),( &YTDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
AUDATRN = YEAATRN_makefbracket(YTDATRN) ;
ISDATRN = A_UNITE(ZTDATRN,mode8,8,AUDATRN);
break;
case 9: 
 /* line 984: */
CUDATRN = TEAATRN_makefmacpar(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
ISDATRN = A_UNITE(BUDATRN,mode9,9,CUDATRN);
break;
case 10: 
 /* line 985: */
ISDATRN = A_UNITE(DUDATRN,mode10,10,(&BIAATRN_fnull));
break;
case 11: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &EUDATRN),( &EUDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
FUDATRN_lwb = EUDATRN;
A_CALLPROC((*NL(DSDATRN_get_formula)),( &GUDATRN),( &GUDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
HUDATRN_upb = GUDATRN;
 /* line 986: */
IUDATRN.Lwb = FUDATRN_lwb;
 /* line 987: */
IUDATRN.Upb = HUDATRN_upb;
 /* line 988: */
ISDATRN = A_UNITE(JUDATRN,mode11,11,IUDATRN);
} 
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(MUDATRN,LUDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(MUDATRN,LUDATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 989: */
 /* line 990: */
ISDATRN = A_UNITE(NUDATRN,mode10,10,(&BIAATRN_fnull));
break;
} 
} 
A_PROC_EXIT(get_formularange);
*ReturnedValue = (ISDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PUDATRN_anonymous(A68_170  *ReturnedValue, void *NonLocals)
#define NL(x) (((QUDATRN_anonymous *)NonLocals)->x)
{ 
A68_184  RUDATRN;  /* avoid structure result */
A68_184  SUDATRN;  /* united object - for case conformity */
A68_170  TUDATRN_f;
A68_170  UUDATRN;  /* clause result */
A68_46  XUDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  YUDATRN;  /* OPERATORS - mode -> union mode */
A_CALLPROC(NL(ESDATRN_get_formularange),( &RUDATRN),( &RUDATRN,(NL(ESDATRN_get_formularange)).nonlocals));
SUDATRN = RUDATRN ;
switch ( SUDATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE170,INT,MODE170)  */
case 6: /* REF STRUCT(INT,MODE170)  */
case 7: /* REF STRUCT(MODE170,MODE170,MODE170)  */
case 8: /* REF STRUCT(MODE170)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(TUDATRN_f,SUDATRN);
 /* line 994: */
UUDATRN = TUDATRN_f;
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(XUDATRN,WUDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(XUDATRN,WUDATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 995: */
UUDATRN = A_UNITE(YUDATRN,mode10,10,(&BIAATRN_fnull));
break;
} 
*ReturnedValue = (UUDATRN);
return;
} 
#undef NL

A_STATIC A68_182 * AVDATRN_get_formulas(void *NonLocals)
#define NL(x) (((BVDATRN_get_formulas *)NonLocals)->x)
{ 
A68_331  CVDATRN;  /* avoid structure result */
A68_INT  DVDATRN_listnumb;
A68_331  EVDATRN;  /* avoid structure result */
A68_182 * FVDATRN_formulas;
A68_182 ** GVDATRN_nextformulas;
A68_INT  HVDATRN;  /* to part of loop */
A68_INT  IVDATRN;  /* loop control */
A68_182  JVDATRN;  /* collateral clause result */
A68_170  KVDATRN;  /* avoid structure result */
A68_182 * LVDATRN;  /* YIELD */
A68_182 * MVDATRN;  /* clause result */
A_PROC_ENTRY(get_formulas);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &CVDATRN );
CVDATRN;
 /* line 1000: */
DVDATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1001: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &EVDATRN );
EVDATRN;
 /* line 1002: */
FVDATRN_formulas = BBAATRN_nilformulas;
 /* line 1003: */
GVDATRN_nextformulas = (&FVDATRN_formulas);
 /* line 1004: */
 /* line 1005: */
HVDATRN = DVDATRN_listnumb;
for ( IVDATRN = 1;
IVDATRN <= HVDATRN;
IVDATRN += 1 )
{ 
 /* line 1006: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &KVDATRN),( &KVDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
JVDATRN.Formula = KVDATRN;
JVDATRN.Rest = BBAATRN_nilformulas;
LVDATRN = A_HEAP(A68_182 ) ;
(*LVDATRN) = JVDATRN ;
(*GVDATRN_nextformulas) = LVDATRN;
 /* line 1007: */
 /* line 1008: */
GVDATRN_nextformulas = (&((*GVDATRN_nextformulas)->Rest));
}
 /* line 1009: */
 /* line 1010: */
MVDATRN = FVDATRN_formulas;
} 
A_PROC_EXIT(get_formulas);
return( MVDATRN );
} 
#undef NL

A_STATIC A68_VOID  OVDATRN_get_range(A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((PVDATRN_get_range *)NonLocals)->x)
{ 
A68_184  QVDATRN;  /* avoid structure result */
A68_184  RVDATRN;  /* united object - for case conformity */
A68_185  SVDATRN_r;
A68_185  TVDATRN;  /* clause result */
A68_46  WVDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  XVDATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_range);
A_CALLPROC(NL(ESDATRN_get_formularange),( &QVDATRN),( &QVDATRN,(NL(ESDATRN_get_formularange)).nonlocals));
RVDATRN = QVDATRN ;
switch ( RVDATRN.mode )
{ 
case 11: /* STRUCT(MODE170,MODE170)  */
SVDATRN_r = (RVDATRN.data.mode11);
 /* line 1015: */
TVDATRN = SVDATRN_r;
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(WVDATRN,VVDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(WVDATRN,VVDATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1016: */
TVDATRN = XVDATRN;
break;
} 
A_PROC_EXIT(get_range);
*ReturnedValue = (TVDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVDATRN_get_type(A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((AWDATRN_get_type *)NonLocals)->x)
{ 
A68_331  BWDATRN;  /* avoid structure result */
A68_186  CWDATRN;  /* clause result */
A68_186  DWDATRN;  /* OPERATORS - mode -> union mode */
A68_187 * EWDATRN;  /* YIELD */
A68_170  FWDATRN;  /* avoid structure result */
A68_170  GWDATRN_size;
A68_186  HWDATRN;  /* avoid structure result */
A68_186  IWDATRN_elem;
A68_188  JWDATRN;  /* collateral clause result */
A68_188 * KWDATRN;  /* YIELD */
A68_186  LWDATRN;  /* OPERATORS - mode -> union mode */
A68_331  MWDATRN;  /* avoid structure result */
A68_INT  NWDATRN_listnumb;
A68_331  OWDATRN;  /* avoid structure result */
A68_189 * PWDATRN_tstr;
A68_189 ** QWDATRN_nexttstr;
A68_INT  RWDATRN;  /* to part of loop */
A68_INT  SWDATRN;  /* loop control */
A68_189  TWDATRN;  /* collateral clause result */
A68_186  UWDATRN;  /* avoid structure result */
A68_189 * VWDATRN;  /* YIELD */
A68_186  WWDATRN;  /* OPERATORS - mode -> union mode */
A68_186  XWDATRN;  /* avoid structure result */
A68_186  YWDATRN_from;
A68_186  ZWDATRN;  /* avoid structure result */
A68_186  AXDATRN_to;
A68_190  BXDATRN;  /* collateral clause result */
A68_190 * CXDATRN;  /* YIELD */
A68_186  DXDATRN;  /* OPERATORS - mode -> union mode */
A68_170  EXDATRN;  /* avoid structure result */
A68_170  FXDATRN_size;
A68_186  GXDATRN;  /* avoid structure result */
A68_186  HXDATRN_char;
A68_192  IXDATRN;  /* collateral clause result */
A68_192 * JXDATRN;  /* YIELD */
A68_186  KXDATRN;  /* OPERATORS - mode -> union mode */
A68_186  LXDATRN;  /* avoid structure result */
A68_186  MXDATRN;  /* OPERATORS - mode -> union mode */
A68_191 * NXDATRN;  /* YIELD */
A68_186  OXDATRN;  /* OPERATORS - mode -> union mode */
A68_186  PXDATRN;  /* OPERATORS - mode -> union mode */
A68_179 * QXDATRN;  /* YIELD */
A68_186  RXDATRN;  /* OPERATORS - mode -> union mode */
A68_46  UXDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_186  VXDATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(get_type);
{ 
 /* line 1022: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &BWDATRN );
switch ( ((BWDATRN.Token+1)-FCDATRN_tnametok) )
{ 
case 1: 
 /* line 1023: */
EWDATRN = IFAATRN_maketname(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
CWDATRN = A_UNITE(DWDATRN,mode1,1,EWDATRN);
break;
case 2: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &FWDATRN),( &FWDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
GWDATRN_size = FWDATRN;
 /* line 1024: */
A_CALLPROC(NL(YVDATRN_get_type),( &HWDATRN),( &HWDATRN,(NL(YVDATRN_get_type)).nonlocals));
IWDATRN_elem = HWDATRN;
 /* line 1025: */
JWDATRN.Size = GWDATRN_size;
 /* line 1026: */
JWDATRN.Elem = IWDATRN_elem;
 /* line 1027: */
KWDATRN = A_HEAP(A68_188 ) ;
(*KWDATRN) = JWDATRN ;
CWDATRN = A_UNITE(LWDATRN,mode2,2,KWDATRN);
} 
break;
case 3: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MWDATRN );
MWDATRN;
 /* line 1028: */
NWDATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1029: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &OWDATRN );
OWDATRN;
 /* line 1030: */
PWDATRN_tstr = GAAATRN_niltstr;
 /* line 1031: */
QWDATRN_nexttstr = (&PWDATRN_tstr);
 /* line 1032: */
 /* line 1033: */
RWDATRN = NWDATRN_listnumb;
for ( SWDATRN = 1;
SWDATRN <= RWDATRN;
SWDATRN += 1 )
{ 
A_CALLPROC(NL(YVDATRN_get_type),( &UWDATRN),( &UWDATRN,(NL(YVDATRN_get_type)).nonlocals));
TWDATRN.Elem = UWDATRN;
TWDATRN.Rest = (A68_189 *)A68_NIL;
VWDATRN = A_HEAP(A68_189 ) ;
(*VWDATRN) = TWDATRN ;
(*QWDATRN_nexttstr) = VWDATRN;
 /* line 1034: */
 /* line 1035: */
QWDATRN_nexttstr = (&((*QWDATRN_nexttstr)->Rest));
}
 /* line 1036: */
 /* line 1037: */
 /* line 1038: */
CWDATRN = A_UNITE(WWDATRN,mode3,3,PWDATRN_tstr);
} 
break;
case 4: 
{ 
A_CALLPROC(NL(YVDATRN_get_type),( &XWDATRN),( &XWDATRN,(NL(YVDATRN_get_type)).nonlocals));
YWDATRN_from = XWDATRN;
A_CALLPROC(NL(YVDATRN_get_type),( &ZWDATRN),( &ZWDATRN,(NL(YVDATRN_get_type)).nonlocals));
AXDATRN_to = ZWDATRN;
 /* line 1039: */
BXDATRN.From = YWDATRN_from;
 /* line 1040: */
BXDATRN.To = AXDATRN_to;
 /* line 1041: */
CXDATRN = A_HEAP(A68_190 ) ;
(*CXDATRN) = BXDATRN ;
CWDATRN = A_UNITE(DXDATRN,mode4,4,CXDATRN);
} 
break;
case 5: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &EXDATRN),( &EXDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
FXDATRN_size = EXDATRN;
 /* line 1042: */
A_CALLPROC(NL(YVDATRN_get_type),( &GXDATRN),( &GXDATRN,(NL(YVDATRN_get_type)).nonlocals));
HXDATRN_char = GXDATRN;
 /* line 1043: */
IXDATRN.Size = FXDATRN_size;
 /* line 1044: */
IXDATRN.Char = HXDATRN_char;
 /* line 1045: */
JXDATRN = A_HEAP(A68_192 ) ;
(*JXDATRN) = IXDATRN ;
CWDATRN = A_UNITE(KXDATRN,mode6,6,JXDATRN);
} 
break;
case 6: 
 /* line 1046: */
A_CALLPROC(NL(YVDATRN_get_type),( &LXDATRN),( &LXDATRN,(NL(YVDATRN_get_type)).nonlocals));
NXDATRN = SFAATRN_maketbracket(LXDATRN) ;
CWDATRN = A_UNITE(MXDATRN,mode5,5,NXDATRN);
break;
case 7: 
 /* line 1047: */
CWDATRN = A_UNITE(OXDATRN,mode7,7,(&PIAATRN_tvoid));
break;
case 8: 
 /* line 1049: */
QXDATRN = NFAATRN_maketmacpar(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
CWDATRN = A_UNITE(PXDATRN,mode8,8,QXDATRN);
break;
case 9: 
CWDATRN = A_UNITE(RXDATRN,mode9,9,(&DIAATRN_tnull));
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(UXDATRN,TXDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(UXDATRN,TXDATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1050: */
 /* line 1051: */
CWDATRN = A_UNITE(VXDATRN,mode9,9,(&DIAATRN_tnull));
break;
} 
} 
A_PROC_EXIT(get_type);
*ReturnedValue = (CWDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AYDATRN_get_unit(A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((BYDATRN_get_unit *)NonLocals)->x)
{ 
A68_388  DYDATRN_get_uchoices;   /* proc value of non-global proc */
A68_331  XYDATRN;  /* avoid structure result */
A68_INT  YYDATRN_hold;
A68_208  ZYDATRN;  /* clause result */
A68_208  AZDATRN;  /* OPERATORS - mode -> union mode */
A68_202 * BZDATRN;  /* YIELD */
A68_INT  CZDATRN_typeno;
A68_INT  DZDATRN_primno;
A68_203  EZDATRN;  /* collateral clause result */
A68_203 * FZDATRN;  /* YIELD */
A68_208  GZDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  HZDATRN_typeno;
A68_170  IZDATRN;  /* avoid structure result */
A68_170  JZDATRN_index;
A68_204  KZDATRN;  /* collateral clause result */
A68_204 * LZDATRN;  /* YIELD */
A68_208  MZDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  NZDATRN_typeno;
A68_331  OZDATRN;  /* avoid structure result */
A68_INT  PZDATRN_upb;
A68_331  QZDATRN;  /* avoid structure result */
A68_33  SZDATRN_generator;   /* proc value of non-global proc */
A68_32  YZDATRN;  /* avoid structure result */
A68_32  XZDATRN_string;
A68_INT  ZZDATRN_i;
A68_INT  AAEATRN;  /* to part of loop */
A68_INT * BAEATRN;  /* YIELD */
A68_209  CAEATRN;  /* collateral clause result */
A68_209 * DAEATRN;  /* YIELD */
A68_208  EAEATRN;  /* OPERATORS - mode -> union mode */
A68_186  FAEATRN;  /* avoid structure result */
A68_208  GAEATRN;  /* OPERATORS - mode -> union mode */
A68_206 * HAEATRN;  /* YIELD */
A68_208  IAEATRN;  /* OPERATORS - mode -> union mode */
A68_186  JAEATRN;  /* avoid structure result */
A68_208  KAEATRN;  /* OPERATORS - mode -> union mode */
A68_191 * LAEATRN;  /* YIELD */
A68_INT  MAEATRN_typeno;
A68_185  NAEATRN;  /* avoid structure result */
A68_185  OAEATRN_range;
A68_205  PAEATRN;  /* collateral clause result */
A68_205 * QAEATRN;  /* YIELD */
A68_208  RAEATRN;  /* OPERATORS - mode -> union mode */
A68_INT  SAEATRN_typeno;
A68_INT  TAEATRN_first;
A68_INT  UAEATRN_last;
A68_211  VAEATRN;  /* collateral clause result */
A68_211 * WAEATRN;  /* YIELD */
A68_208  XAEATRN;  /* OPERATORS - mode -> union mode */
A68_331  YAEATRN;  /* avoid structure result */
A68_INT  ZAEATRN_listnumb;
A68_331  ABEATRN;  /* avoid structure result */
A68_212 * BBEATRN_ualts;
A68_212 ** CBEATRN_nextualts;
A68_INT  DBEATRN;  /* to part of loop */
A68_INT  EBEATRN;  /* loop control */
A68_212  FBEATRN;  /* collateral clause result */
A68_208  GBEATRN;  /* avoid structure result */
A68_212 * HBEATRN;  /* YIELD */
A68_208  IBEATRN;  /* OPERATORS - mode -> union mode */
A68_INT  JBEATRN_sort;
A68_INT  KBEATRN_nameno;
A68_213  LBEATRN;  /* collateral clause result */
A68_213 * MBEATRN;  /* YIELD */
A68_208  NBEATRN;  /* OPERATORS - mode -> union mode */
A68_208  OBEATRN;  /* avoid structure result */
A68_208  PBEATRN_sink;
A68_208  QBEATRN;  /* avoid structure result */
A68_208  RBEATRN_source;
A68_214  SBEATRN;  /* collateral clause result */
A68_214 * TBEATRN;  /* YIELD */
A68_208  UBEATRN;  /* OPERATORS - mode -> union mode */
A68_INT  VBEATRN_typeno;
A68_INT  WBEATRN_altno;
A68_208  XBEATRN;  /* avoid structure result */
A68_208  YBEATRN_assoc;
A68_215  ZBEATRN;  /* collateral clause result */
A68_215 * ACEATRN;  /* YIELD */
A68_208  BCEATRN;  /* OPERATORS - mode -> union mode */
A68_208  CCEATRN;  /* avoid structure result */
A68_208  DCEATRN_extract;
A68_INT  ECEATRN_typeno;
A68_INT  FCEATRN_altno;
A68_216  GCEATRN;  /* collateral clause result */
A68_216 * HCEATRN;  /* YIELD */
A68_208  ICEATRN;  /* OPERATORS - mode -> union mode */
A68_208  JCEATRN;  /* avoid structure result */
A68_208  KCEATRN_unit;
A68_INT  LCEATRN_fnno;
A68_INT  MCEATRN_nameno;
A68_217  NCEATRN;  /* collateral clause result */
A68_217 * OCEATRN;  /* YIELD */
A68_208  PCEATRN;  /* OPERATORS - mode -> union mode */
A68_208  QCEATRN;  /* avoid structure result */
A68_208  RCEATRN_unit;
A68_170  SCEATRN;  /* avoid structure result */
A68_170  TCEATRN_index;
A68_218  UCEATRN;  /* collateral clause result */
A68_218 * VCEATRN;  /* YIELD */
A68_208  WCEATRN;  /* OPERATORS - mode -> union mode */
A68_208  XCEATRN;  /* avoid structure result */
A68_208  YCEATRN_unit;
A68_185  ZCEATRN;  /* avoid structure result */
A68_185  ADEATRN_range;
A68_219  BDEATRN;  /* collateral clause result */
A68_219 * CDEATRN;  /* YIELD */
A68_208  DDEATRN;  /* OPERATORS - mode -> union mode */
A68_208  EDEATRN;  /* avoid structure result */
A68_208  FDEATRN_unit;
A68_208  GDEATRN;  /* avoid structure result */
A68_208  HDEATRN_index;
A68_220  IDEATRN;  /* collateral clause result */
A68_220 * JDEATRN;  /* YIELD */
A68_208  KDEATRN;  /* OPERATORS - mode -> union mode */
A68_208  LDEATRN;  /* avoid structure result */
A68_208  MDEATRN_unit;
A68_208  NDEATRN;  /* avoid structure result */
A68_208  ODEATRN_index;
A68_208  PDEATRN;  /* avoid structure result */
A68_208  QDEATRN_from;
A68_221  RDEATRN;  /* collateral clause result */
A68_221 * SDEATRN;  /* YIELD */
A68_208  TDEATRN;  /* OPERATORS - mode -> union mode */
A68_170  UDEATRN;  /* avoid structure result */
A68_170  VDEATRN_size;
A68_208  WDEATRN;  /* avoid structure result */
A68_208  XDEATRN_elem;
A68_222  YDEATRN;  /* collateral clause result */
A68_222 * ZDEATRN;  /* YIELD */
A68_208  AEEATRN;  /* OPERATORS - mode -> union mode */
A68_331  BEEATRN;  /* avoid structure result */
A68_INT  CEEATRN_listnumb;
A68_331  DEEATRN;  /* avoid structure result */
A68_223 * EEEATRN_ustr;
A68_223 ** FEEATRN_nextustr;
A68_INT  GEEATRN;  /* to part of loop */
A68_INT  HEEATRN;  /* loop control */
A68_223  IEEATRN;  /* collateral clause result */
A68_208  JEEATRN;  /* avoid structure result */
A68_223 * KEEATRN;  /* YIELD */
A68_208  LEEATRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  MEEATRN_string;
A68_INT  NEEATRN_sort;
A68_208  OEEATRN;  /* avoid structure result */
A68_208  PEEATRN_left;
A68_208  QEEATRN;  /* avoid structure result */
A68_208  REEATRN_right;
A68_224  SEEATRN;  /* collateral clause result */
A68_224 * TEEATRN;  /* YIELD */
A68_208  UEEATRN;  /* OPERATORS - mode -> union mode */
A68_331  VEEATRN;  /* avoid structure result */
A68_248  WEEATRN;  /* avoid structure result */
A68_248  XEEATRN_inst;
A68_208  YEEATRN;  /* avoid structure result */
A68_208  ZEEATRN_right;
A68_225  AFEATRN;  /* collateral clause result */
A68_225 * BFEATRN;  /* YIELD */
A68_208  CFEATRN;  /* OPERATORS - mode -> union mode */
A68_208  DFEATRN;  /* avoid structure result */
A68_208  EFEATRN_left;
A68_331  FFEATRN;  /* avoid structure result */
A68_248  GFEATRN;  /* avoid structure result */
A68_248  HFEATRN_inst;
A68_208  IFEATRN;  /* avoid structure result */
A68_208  JFEATRN_right;
A68_226  KFEATRN;  /* collateral clause result */
A68_226 * LFEATRN;  /* YIELD */
A68_208  MFEATRN;  /* OPERATORS - mode -> union mode */
A68_208  NFEATRN;  /* avoid structure result */
A68_208  OFEATRN_input;
A68_268 * PFEATRN_choices;
A68_227  QFEATRN;  /* collateral clause result */
A68_227 * RFEATRN;  /* YIELD */
A68_208  SFEATRN;  /* OPERATORS - mode -> union mode */
A68_170  TFEATRN;  /* avoid structure result */
A68_170  UFEATRN_cond;
A68_208  VFEATRN;  /* avoid structure result */
A68_208  WFEATRN_true;
A68_208  XFEATRN;  /* avoid structure result */
A68_208  YFEATRN_false;
A68_228  ZFEATRN;  /* collateral clause result */
A68_228 * AGEATRN;  /* YIELD */
A68_208  BGEATRN;  /* OPERATORS - mode -> union mode */
A68_170  CGEATRN;  /* avoid structure result */
A68_170  DGEATRN_repl;
A68_208  EGEATRN;  /* avoid structure result */
A68_208  FGEATRN_body;
A68_229  GGEATRN;  /* collateral clause result */
A68_229 * HGEATRN;  /* YIELD */
A68_208  IGEATRN;  /* OPERATORS - mode -> union mode */
A68_256 * JGEATRN_body;
A68_208  KGEATRN;  /* avoid structure result */
A68_208  LGEATRN_output;
A68_230  MGEATRN;  /* collateral clause result */
A68_230 * NGEATRN;  /* YIELD */
A68_208  OGEATRN;  /* OPERATORS - mode -> union mode */
A68_237 * PGEATRN_body;
A68_208  QGEATRN;  /* avoid structure result */
A68_208  RGEATRN_output;
A68_231  SGEATRN;  /* collateral clause result */
A68_231 * TGEATRN;  /* YIELD */
A68_208  UGEATRN;  /* OPERATORS - mode -> union mode */
A68_208  VGEATRN;  /* avoid structure result */
A68_208  WGEATRN_unit;
A68_161  XGEATRN;  /* avoid structure result */
A68_161  YGEATRN_attr;
A68_232  ZGEATRN;  /* collateral clause result */
A68_232 * AHEATRN;  /* YIELD */
A68_208  BHEATRN;  /* OPERATORS - mode -> union mode */
A68_208  CHEATRN;  /* avoid structure result */
A68_208  DHEATRN_unit;
A68_170  EHEATRN;  /* avoid structure result */
A68_170  FHEATRN;  /* united object - for case conformity */
A68_172 * GHEATRN_f;
A68_172  HHEATRN;  /* clause result */
A68_172  IHEATRN_check;
A68_233  JHEATRN;  /* collateral clause result */
A68_233 * KHEATRN;  /* YIELD */
A68_208  LHEATRN;  /* OPERATORS - mode -> union mode */
A68_170  MHEATRN;  /* avoid structure result */
A68_170  NHEATRN_size;
A68_208  OHEATRN;  /* avoid structure result */
A68_208  PHEATRN_char;
A68_235  QHEATRN;  /* collateral clause result */
A68_235 * RHEATRN;  /* YIELD */
A68_208  SHEATRN;  /* OPERATORS - mode -> union mode */
A68_208  THEATRN;  /* avoid structure result */
A68_208  UHEATRN;  /* OPERATORS - mode -> union mode */
A68_234 * VHEATRN;  /* YIELD */
A68_208  WHEATRN;  /* OPERATORS - mode -> union mode */
A68_46  ZHEATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  AIEATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(get_unit);
{ 
 /* line 1062: */
 /* line 1063: */
A_CLOSURE( DYDATRN_get_uchoices, EYDATRN_get_uchoices, FYDATRN_get_uchoices );
(( FYDATRN_get_uchoices * ) ( DYDATRN_get_uchoices.nonlocals )) -> Reader = NL(Reader);
(( FYDATRN_get_uchoices * ) ( DYDATRN_get_uchoices.nonlocals )) -> Msg = NL(Msg);
(( FYDATRN_get_uchoices * ) ( DYDATRN_get_uchoices.nonlocals )) -> ZXDATRN_get_unit = NL(ZXDATRN_get_unit);
 /* line 1085: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &XYDATRN );
YYDATRN_hold = XYDATRN.Token;
 /* line 1086: */
 /* line 1087: */
switch ( ((YYDATRN_hold+1)-OCDATRN_cnametok) )
{ 
case 1: 
 /* line 1088: */
BZDATRN = CGAATRN_makecname(CLDATRN_inassemint(NL(Reader), NL(Msg))) ;
ZYDATRN = A_UNITE(AZDATRN,mode1,1,BZDATRN);
break;
case 2: 
{ 
CZDATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1089: */
DZDATRN_primno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1090: */
EZDATRN.Typeno = CZDATRN_typeno;
 /* line 1091: */
EZDATRN.Primno = DZDATRN_primno;
 /* line 1092: */
FZDATRN = A_HEAP(A68_203 ) ;
(*FZDATRN) = EZDATRN ;
ZYDATRN = A_UNITE(GZDATRN,mode2,2,FZDATRN);
} 
break;
case 3: 
{ 
HZDATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1093: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &IZDATRN),( &IZDATRN,((*NL(DSDATRN_get_formula))).nonlocals));
JZDATRN_index = IZDATRN;
 /* line 1094: */
KZDATRN.Typeno = HZDATRN_typeno;
 /* line 1095: */
KZDATRN.Index = JZDATRN_index;
 /* line 1096: */
LZDATRN = A_HEAP(A68_204 ) ;
(*LZDATRN) = KZDATRN ;
ZYDATRN = A_UNITE(MZDATRN,mode3,3,LZDATRN);
} 
break;
case 4: 
{ 
NZDATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1097: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &OZDATRN );
OZDATRN;
 /* line 1098: */
PZDATRN_upb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1099: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &QZDATRN );
QZDATRN;
 /* line 1100: */
A_CLOSURE( SZDATRN_generator, TZDATRN_generator, UZDATRN_generator );
(( UZDATRN_generator * ) ( SZDATRN_generator.nonlocals )) -> PZDATRN_upb = PZDATRN_upb;
A_CALLPROC(SZDATRN_generator,(A68_FALSE, &YZDATRN),(A68_FALSE, &YZDATRN,(SZDATRN_generator).nonlocals));
XZDATRN_string = YZDATRN;
 /* line 1101: */
AAEATRN = PZDATRN_upb;
for ( ZZDATRN_i = 1;
ZZDATRN_i <= AAEATRN;
ZZDATRN_i += 1 )
{ 
BAEATRN = (&A_VINDEX(XZDATRN_string,ZZDATRN_i)) ;
(*BAEATRN) = CLDATRN_inassemint(NL(Reader), NL(Msg));
}
 /* line 1102: */
CAEATRN.Typeno = NZDATRN_typeno;
 /* line 1103: */
CAEATRN.String = XZDATRN_string;
 /* line 1104: */
DAEATRN = A_HEAP(A68_209 ) ;
(*DAEATRN) = CAEATRN ;
ZYDATRN = A_UNITE(EAEATRN,mode5,5,DAEATRN);
} 
break;
case 5: 
 /* line 1105: */
A_CALLPROC(NL(YVDATRN_get_type),( &FAEATRN),( &FAEATRN,(NL(YVDATRN_get_type)).nonlocals));
HAEATRN = MGAATRN_makecquery(FAEATRN) ;
ZYDATRN = A_UNITE(GAEATRN,mode4,4,HAEATRN);
break;
case 6: 
 /* line 1106: */
ZYDATRN = A_UNITE(IAEATRN,mode6,6,(&RIAATRN_cvoid));
break;
case 7: 
 /* line 1107: */
A_CALLPROC(NL(YVDATRN_get_type),( &JAEATRN),( &JAEATRN,(NL(YVDATRN_get_type)).nonlocals));
LAEATRN = HGAATRN_makectype(JAEATRN) ;
ZYDATRN = A_UNITE(KAEATRN,mode7,7,LAEATRN);
break;
case 8: 
{ 
MAEATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1108: */
A_CALLPROC(NL(NVDATRN_get_range),( &NAEATRN),( &NAEATRN,(NL(NVDATRN_get_range)).nonlocals));
OAEATRN_range = NAEATRN;
 /* line 1109: */
PAEATRN.Typeno = MAEATRN_typeno;
 /* line 1110: */
PAEATRN.Range = OAEATRN_range;
 /* line 1111: */
QAEATRN = A_HEAP(A68_205 ) ;
(*QAEATRN) = PAEATRN ;
ZYDATRN = A_UNITE(RAEATRN,mode8,8,QAEATRN);
} 
break;
case 9: 
{ 
SAEATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1112: */
TAEATRN_first = CLDATRN_inassemint(NL(Reader), NL(Msg));
UAEATRN_last = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1113: */
VAEATRN.Typeno = SAEATRN_typeno;
VAEATRN.Firstno = TAEATRN_first;
 /* line 1114: */
VAEATRN.Lastno = UAEATRN_last;
 /* line 1115: */
WAEATRN = A_HEAP(A68_211 ) ;
(*WAEATRN) = VAEATRN ;
ZYDATRN = A_UNITE(XAEATRN,mode9,9,WAEATRN);
} 
break;
case 10: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &YAEATRN );
YAEATRN;
 /* line 1116: */
ZAEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1117: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &ABEATRN );
ABEATRN;
 /* line 1118: */
BBEATRN_ualts = HAAATRN_nilualts;
 /* line 1119: */
CBEATRN_nextualts = (&BBEATRN_ualts);
 /* line 1120: */
 /* line 1121: */
DBEATRN = ZAEATRN_listnumb;
for ( EBEATRN = 1;
EBEATRN <= DBEATRN;
EBEATRN += 1 )
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &GBEATRN),( &GBEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
FBEATRN.Alt = GBEATRN;
FBEATRN.Rest = (A68_212 *)A68_NIL;
HBEATRN = A_HEAP(A68_212 ) ;
(*HBEATRN) = FBEATRN ;
(*CBEATRN_nextualts) = HBEATRN;
 /* line 1122: */
 /* line 1123: */
CBEATRN_nextualts = (&((*CBEATRN_nextualts)->Rest));
}
 /* line 1124: */
 /* line 1125: */
 /* line 1126: */
ZYDATRN = A_UNITE(IBEATRN,mode10,10,BBEATRN_ualts);
} 
break;
case 11: 
{ 
JBEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1127: */
KBEATRN_nameno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1128: */
LBEATRN.Sort = JBEATRN_sort;
 /* line 1129: */
LBEATRN.Nameno = KBEATRN_nameno;
 /* line 1130: */
MBEATRN = A_HEAP(A68_213 ) ;
(*MBEATRN) = LBEATRN ;
ZYDATRN = A_UNITE(NBEATRN,mode11,11,MBEATRN);
} 
break;
case 12: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &OBEATRN),( &OBEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
PBEATRN_sink = OBEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &QBEATRN),( &QBEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
RBEATRN_source = QBEATRN;
 /* line 1131: */
SBEATRN.Sink = PBEATRN_sink;
 /* line 1132: */
SBEATRN.Source = RBEATRN_source;
 /* line 1133: */
TBEATRN = A_HEAP(A68_214 ) ;
(*TBEATRN) = SBEATRN ;
ZYDATRN = A_UNITE(UBEATRN,mode12,12,TBEATRN);
} 
break;
case 13: 
{ 
VBEATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1134: */
WBEATRN_altno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1135: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &XBEATRN),( &XBEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
YBEATRN_assoc = XBEATRN;
 /* line 1136: */
ZBEATRN.Typeno = VBEATRN_typeno;
ZBEATRN.Altno = WBEATRN_altno;
 /* line 1137: */
ZBEATRN.Assoc = YBEATRN_assoc;
 /* line 1138: */
ACEATRN = A_HEAP(A68_215 ) ;
(*ACEATRN) = ZBEATRN ;
ZYDATRN = A_UNITE(BCEATRN,mode13,13,ACEATRN);
} 
break;
case 14: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &CCEATRN),( &CCEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
DCEATRN_extract = CCEATRN;
 /* line 1139: */
ECEATRN_typeno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1140: */
FCEATRN_altno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1141: */
GCEATRN.Extract = DCEATRN_extract;
GCEATRN.Typeno = ECEATRN_typeno;
 /* line 1142: */
GCEATRN.Altno = FCEATRN_altno;
 /* line 1143: */
HCEATRN = A_HEAP(A68_216 ) ;
(*HCEATRN) = GCEATRN ;
ZYDATRN = A_UNITE(ICEATRN,mode14,14,HCEATRN);
} 
break;
case 15: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &JCEATRN),( &JCEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
KCEATRN_unit = JCEATRN;
 /* line 1144: */
LCEATRN_fnno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1145: */
MCEATRN_nameno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1146: */
NCEATRN.Unit = KCEATRN_unit;
NCEATRN.Fnno = LCEATRN_fnno;
 /* line 1147: */
NCEATRN.Nameno = MCEATRN_nameno;
 /* line 1148: */
OCEATRN = A_HEAP(A68_217 ) ;
(*OCEATRN) = NCEATRN ;
ZYDATRN = A_UNITE(PCEATRN,mode15,15,OCEATRN);
} 
break;
case 16: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &QCEATRN),( &QCEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
RCEATRN_unit = QCEATRN;
 /* line 1149: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &SCEATRN),( &SCEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
TCEATRN_index = SCEATRN;
 /* line 1150: */
UCEATRN.Unit = RCEATRN_unit;
 /* line 1151: */
UCEATRN.Index = TCEATRN_index;
 /* line 1152: */
VCEATRN = A_HEAP(A68_218 ) ;
(*VCEATRN) = UCEATRN ;
ZYDATRN = A_UNITE(WCEATRN,mode16,16,VCEATRN);
} 
break;
case 17: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &XCEATRN),( &XCEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
YCEATRN_unit = XCEATRN;
 /* line 1153: */
A_CALLPROC(NL(NVDATRN_get_range),( &ZCEATRN),( &ZCEATRN,(NL(NVDATRN_get_range)).nonlocals));
ADEATRN_range = ZCEATRN;
 /* line 1154: */
BDEATRN.Unit = YCEATRN_unit;
 /* line 1155: */
BDEATRN.Range = ADEATRN_range;
 /* line 1156: */
CDEATRN = A_HEAP(A68_219 ) ;
(*CDEATRN) = BDEATRN ;
ZYDATRN = A_UNITE(DDEATRN,mode17,17,CDEATRN);
} 
break;
case 18: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &EDEATRN),( &EDEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
FDEATRN_unit = EDEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &GDEATRN),( &GDEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
HDEATRN_index = GDEATRN;
 /* line 1157: */
IDEATRN.Unit = FDEATRN_unit;
 /* line 1158: */
IDEATRN.Index = HDEATRN_index;
 /* line 1159: */
JDEATRN = A_HEAP(A68_220 ) ;
(*JDEATRN) = IDEATRN ;
ZYDATRN = A_UNITE(KDEATRN,mode18,18,JDEATRN);
} 
break;
case 19: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &LDEATRN),( &LDEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
MDEATRN_unit = LDEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &NDEATRN),( &NDEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
ODEATRN_index = NDEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &PDEATRN),( &PDEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
QDEATRN_from = PDEATRN;
 /* line 1160: */
RDEATRN.Unit = MDEATRN_unit;
RDEATRN.Index = ODEATRN_index;
 /* line 1161: */
RDEATRN.From = QDEATRN_from;
 /* line 1162: */
SDEATRN = A_HEAP(A68_221 ) ;
(*SDEATRN) = RDEATRN ;
ZYDATRN = A_UNITE(TDEATRN,mode19,19,SDEATRN);
} 
break;
case 20: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &UDEATRN),( &UDEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
VDEATRN_size = UDEATRN;
 /* line 1163: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &WDEATRN),( &WDEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
XDEATRN_elem = WDEATRN;
 /* line 1164: */
YDEATRN.Size = VDEATRN_size;
 /* line 1165: */
YDEATRN.Elem = XDEATRN_elem;
 /* line 1166: */
ZDEATRN = A_HEAP(A68_222 ) ;
(*ZDEATRN) = YDEATRN ;
ZYDATRN = A_UNITE(AEEATRN,mode20,20,ZDEATRN);
} 
break;
case 21: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &BEEATRN );
BEEATRN;
 /* line 1167: */
CEEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1168: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &DEEATRN );
DEEATRN;
 /* line 1169: */
EEEATRN_ustr = IAAATRN_nilustr;
 /* line 1170: */
FEEATRN_nextustr = (&EEEATRN_ustr);
 /* line 1171: */
 /* line 1172: */
GEEATRN = CEEATRN_listnumb;
for ( HEEATRN = 1;
HEEATRN <= GEEATRN;
HEEATRN += 1 )
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &JEEATRN),( &JEEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
IEEATRN.Elem = JEEATRN;
IEEATRN.Rest = (A68_223 *)A68_NIL;
KEEATRN = A_HEAP(A68_223 ) ;
(*KEEATRN) = IEEATRN ;
(*FEEATRN_nextustr) = KEEATRN;
 /* line 1173: */
 /* line 1174: */
FEEATRN_nextustr = (&((*FEEATRN_nextustr)->Rest));
}
 /* line 1175: */
 /* line 1176: */
 /* line 1177: */
ZYDATRN = A_UNITE(LEEATRN,mode21,21,EEEATRN_ustr);
} 
break;
case 22: 
{ 
MEEATRN_string = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1178: */
NEEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1179: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &OEEATRN),( &OEEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
PEEATRN_left = OEEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &QEEATRN),( &QEEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
REEATRN_right = QEEATRN;
 /* line 1180: */
SEEATRN.String = MEEATRN_string;
SEEATRN.Sort = NEEATRN_sort;
SEEATRN.Left = PEEATRN_left;
 /* line 1181: */
SEEATRN.Right = REEATRN_right;
 /* line 1182: */
TEEATRN = A_HEAP(A68_224 ) ;
(*TEEATRN) = SEEATRN ;
ZYDATRN = A_UNITE(UEEATRN,mode22,22,TEEATRN);
} 
break;
case 23: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &VEEATRN );
VEEATRN;
 /* line 1183: */
A_CALLPROC((*NL(WXDATRN_get_instance)),( &WEEATRN),( &WEEATRN,((*NL(WXDATRN_get_instance))).nonlocals));
XEEATRN_inst = WEEATRN;
 /* line 1184: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &YEEATRN),( &YEEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
ZEEATRN_right = YEEATRN;
 /* line 1185: */
AFEATRN.Inst = XEEATRN_inst;
 /* line 1186: */
AFEATRN.Right = ZEEATRN_right;
 /* line 1187: */
BFEATRN = A_HEAP(A68_225 ) ;
(*BFEATRN) = AFEATRN ;
ZYDATRN = A_UNITE(CFEATRN,mode23,23,BFEATRN);
} 
break;
case 24: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &DFEATRN),( &DFEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
EFEATRN_left = DFEATRN;
 /* line 1188: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &FFEATRN );
FFEATRN;
 /* line 1189: */
A_CALLPROC((*NL(WXDATRN_get_instance)),( &GFEATRN),( &GFEATRN,((*NL(WXDATRN_get_instance))).nonlocals));
HFEATRN_inst = GFEATRN;
 /* line 1190: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &IFEATRN),( &IFEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
JFEATRN_right = IFEATRN;
 /* line 1191: */
KFEATRN.Left = EFEATRN_left;
KFEATRN.Inst = HFEATRN_inst;
 /* line 1192: */
KFEATRN.Right = JFEATRN_right;
 /* line 1193: */
LFEATRN = A_HEAP(A68_226 ) ;
(*LFEATRN) = KFEATRN ;
ZYDATRN = A_UNITE(MFEATRN,mode24,24,LFEATRN);
} 
break;
case 25: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &NFEATRN),( &NFEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
OFEATRN_input = NFEATRN;
 /* line 1194: */
PFEATRN_choices = A_CALLPROC(DYDATRN_get_uchoices,(),((DYDATRN_get_uchoices).nonlocals));
 /* line 1195: */
QFEATRN.Input = OFEATRN_input;
 /* line 1196: */
QFEATRN.Choices = PFEATRN_choices;
 /* line 1197: */
RFEATRN = A_HEAP(A68_227 ) ;
(*RFEATRN) = QFEATRN ;
ZYDATRN = A_UNITE(SFEATRN,mode25,25,RFEATRN);
} 
break;
case 26: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &TFEATRN),( &TFEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
UFEATRN_cond = TFEATRN;
 /* line 1198: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &VFEATRN),( &VFEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
WFEATRN_true = VFEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &XFEATRN),( &XFEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
YFEATRN_false = XFEATRN;
 /* line 1199: */
ZFEATRN.Cond = UFEATRN_cond;
ZFEATRN.True = WFEATRN_true;
 /* line 1200: */
ZFEATRN.False = YFEATRN_false;
 /* line 1201: */
AGEATRN = A_HEAP(A68_228 ) ;
(*AGEATRN) = ZFEATRN ;
ZYDATRN = A_UNITE(BGEATRN,mode26,26,AGEATRN);
} 
break;
case 27: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &CGEATRN),( &CGEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
DGEATRN_repl = CGEATRN;
 /* line 1202: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &EGEATRN),( &EGEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
FGEATRN_body = EGEATRN;
 /* line 1203: */
GGEATRN.Repl = DGEATRN_repl;
 /* line 1204: */
GGEATRN.Body = FGEATRN_body;
 /* line 1205: */
HGEATRN = A_HEAP(A68_229 ) ;
(*HGEATRN) = GGEATRN ;
ZYDATRN = A_UNITE(IGEATRN,mode27,27,HGEATRN);
} 
break;
case 28: 
{ 
JGEATRN_body = A_CALLPROC((*NL(XXDATRN_get_sequence)),(),(((*NL(XXDATRN_get_sequence))).nonlocals));
 /* line 1206: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &KGEATRN),( &KGEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
LGEATRN_output = KGEATRN;
 /* line 1207: */
MGEATRN.Body = JGEATRN_body;
 /* line 1208: */
MGEATRN.Output = LGEATRN_output;
 /* line 1209: */
NGEATRN = A_HEAP(A68_230 ) ;
(*NGEATRN) = MGEATRN ;
ZYDATRN = A_UNITE(OGEATRN,mode28,28,NGEATRN);
} 
break;
case 29: 
{ 
PGEATRN_body = A_CALLPROC((*NL(YXDATRN_get_series)),(),(((*NL(YXDATRN_get_series))).nonlocals));
 /* line 1210: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &QGEATRN),( &QGEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
RGEATRN_output = QGEATRN;
 /* line 1211: */
SGEATRN.Body = PGEATRN_body;
 /* line 1212: */
SGEATRN.Output = RGEATRN_output;
 /* line 1213: */
TGEATRN = A_HEAP(A68_231 ) ;
(*TGEATRN) = SGEATRN ;
ZYDATRN = A_UNITE(UGEATRN,mode29,29,TGEATRN);
} 
break;
case 30: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &VGEATRN),( &VGEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
WGEATRN_unit = VGEATRN;
 /* line 1214: */
A_CALLPROC(NL(XQDATRN_get_attr),( &XGEATRN),( &XGEATRN,(NL(XQDATRN_get_attr)).nonlocals));
YGEATRN_attr = XGEATRN;
 /* line 1215: */
ZGEATRN.Unit = WGEATRN_unit;
 /* line 1216: */
ZGEATRN.Attr = YGEATRN_attr;
 /* line 1217: */
AHEATRN = A_HEAP(A68_232 ) ;
(*AHEATRN) = ZGEATRN ;
ZYDATRN = A_UNITE(BHEATRN,mode30,30,AHEATRN);
} 
break;
case 31: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &CHEATRN),( &CHEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
DHEATRN_unit = CHEATRN;
 /* line 1218: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &EHEATRN),( &EHEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
FHEATRN = EHEATRN ;
switch ( FHEATRN.mode )
{ 
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
GHEATRN_f = (FHEATRN.data.mode2);
HHEATRN = (*GHEATRN_f);
break;
default: 
A_IMP_SKIP ;
break;
} 
IHEATRN_check = HHEATRN;
 /* line 1219: */
JHEATRN.Unit = DHEATRN_unit;
 /* line 1220: */
JHEATRN.Check = IHEATRN_check;
 /* line 1221: */
KHEATRN = A_HEAP(A68_233 ) ;
(*KHEATRN) = JHEATRN ;
ZYDATRN = A_UNITE(LHEATRN,mode31,31,KHEATRN);
} 
break;
case 32: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &MHEATRN),( &MHEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
NHEATRN_size = MHEATRN;
 /* line 1222: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &OHEATRN),( &OHEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
PHEATRN_char = OHEATRN;
 /* line 1223: */
QHEATRN.Size = NHEATRN_size;
 /* line 1224: */
QHEATRN.Char = PHEATRN_char;
 /* line 1225: */
RHEATRN = A_HEAP(A68_235 ) ;
(*RHEATRN) = QHEATRN ;
ZYDATRN = A_UNITE(SHEATRN,mode33,33,RHEATRN);
} 
break;
case 33: 
 /* line 1227: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &THEATRN),( &THEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
VHEATRN = RGAATRN_makeubracket(THEATRN) ;
ZYDATRN = A_UNITE(UHEATRN,mode32,32,VHEATRN);
break;
case 34: 
ZYDATRN = A_UNITE(WHEATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(ZHEATRN,YHEATRN,A68_VC )),(SHAAOSI_system, A_HVEC(ZHEATRN,YHEATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1228: */
 /* line 1229: */
ZYDATRN = A_UNITE(AIEATRN,mode34,34,(&FIAATRN_unull));
break;
} 
} 
A_PROC_EXIT(get_unit);
*ReturnedValue = (ZYDATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CIEATRN_get_macparams(A68_250  *ReturnedValue, void *NonLocals)
#define NL(x) (((DIEATRN_get_macparams *)NonLocals)->x)
{ 
A68_331  EIEATRN;  /* avoid structure result */
A68_INT  FIEATRN_size;
A68_331  GIEATRN;  /* avoid structure result */
A68_250  HIEATRN;  /* clause result */
A68_390  JIEATRN_generator;   /* proc value of non-global proc */
A68_250  OIEATRN;  /* avoid structure result */
A68_250  PIEATRN_params;
A68_251 * QIEATRN_p;
A68_INT  RIEATRN;  /* forall loop counter */
A68_331  SIEATRN;  /* avoid structure result */
A68_INT  TIEATRN_sort;
A68_331  UIEATRN;  /* avoid structure result */
A68_INT  VIEATRN_ihold;
A68_251  WIEATRN;  /* collateral clause result */
A68_208  XIEATRN;  /* avoid structure result */
A68_252  YIEATRN;  /* OPERATORS - mode -> union mode */
A68_253  ZIEATRN;  /* YIELD */
A68_161  AJEATRN;  /* avoid structure result */
A68_252  BJEATRN;  /* OPERATORS - mode -> union mode */
A68_169  CJEATRN;  /* YIELD */
A68_170  DJEATRN;  /* avoid structure result */
A68_252  EJEATRN;  /* OPERATORS - mode -> union mode */
A68_181  FJEATRN;  /* YIELD */
A68_248  GJEATRN;  /* avoid structure result */
A68_252  HJEATRN;  /* OPERATORS - mode -> union mode */
A68_186  IJEATRN;  /* avoid structure result */
A68_252  JJEATRN;  /* OPERATORS - mode -> union mode */
A68_195  KJEATRN;  /* YIELD */
A68_46  NJEATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_251  OJEATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_macparams);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &EIEATRN );
EIEATRN;
 /* line 1235: */
FIEATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1236: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &GIEATRN );
GIEATRN;
 /* line 1237: */
 /* line 1238: */
 /* line 1239: */
if ( (FIEATRN_size==(-1)) )
{ 
HIEATRN = ABAATRN_nilmacparams;
} 
else
{ 
A_CLOSURE( JIEATRN_generator, KIEATRN_generator, LIEATRN_generator );
(( LIEATRN_generator * ) ( JIEATRN_generator.nonlocals )) -> FIEATRN_size = FIEATRN_size;
A_CALLPROC(JIEATRN_generator,(A68_FALSE, &OIEATRN),(A68_FALSE, &OIEATRN,(JIEATRN_generator).nonlocals));
PIEATRN_params = OIEATRN;
 /* line 1240: */
 /* line 1241: */
RIEATRN = PIEATRN_params.upb -1;
QIEATRN_p = PIEATRN_params.data;
for (;RIEATRN-- >= 0;
(QIEATRN_p++
) )
{
SLDATRN_inassemtok( NL(Reader), NL(Msg), &SIEATRN );
SIEATRN;
 /* line 1242: */
TIEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1243: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UIEATRN );
VIEATRN_ihold = UIEATRN.Token;
 /* line 1244: */
 /* line 1245: */
switch ( ((VIEATRN_ihold+1)-YEDATRN_unittagtok) )
{ 
case 1: 
WIEATRN.Sort = TIEATRN_sort;
 /* line 1246: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &XIEATRN),( &XIEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
ZIEATRN = (*WGAATRN_makeunittag(XIEATRN)) ;
WIEATRN.Param = A_UNITE(YIEATRN,mode4,4,ZIEATRN);
break;
case 2: 
WIEATRN.Sort = TIEATRN_sort;
 /* line 1247: */
A_CALLPROC(NL(XQDATRN_get_attr),( &AJEATRN),( &AJEATRN,(NL(XQDATRN_get_attr)).nonlocals));
CJEATRN = (*EEAATRN_makeattrtag(AJEATRN)) ;
WIEATRN.Param = A_UNITE(BJEATRN,mode1,1,CJEATRN);
break;
case 3: 
WIEATRN.Sort = TIEATRN_sort;
 /* line 1248: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &DJEATRN),( &DJEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
FJEATRN = (*DFAATRN_makeformulatag(DJEATRN)) ;
WIEATRN.Param = A_UNITE(EJEATRN,mode2,2,FJEATRN);
break;
case 4: 
WIEATRN.Sort = TIEATRN_sort;
 /* line 1249: */
A_CALLPROC((*NL(WXDATRN_get_instance)),( &GJEATRN),( &GJEATRN,((*NL(WXDATRN_get_instance))).nonlocals));
WIEATRN.Param = A_UNITE(HJEATRN,mode5,5,GJEATRN);
break;
case 5: 
WIEATRN.Sort = TIEATRN_sort;
 /* line 1250: */
A_CALLPROC(NL(YVDATRN_get_type),( &IJEATRN),( &IJEATRN,(NL(YVDATRN_get_type)).nonlocals));
KJEATRN = (*XFAATRN_maketypetag(IJEATRN)) ;
WIEATRN.Param = A_UNITE(JJEATRN,mode3,3,KJEATRN);
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(NJEATRN,MJEATRN,A68_VC )),(SHAAOSI_system, A_HVEC(NJEATRN,MJEATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1251: */
 /* line 1252: */
WIEATRN = OJEATRN;
break;
} 
(*QIEATRN_p) = WIEATRN;
}
 /* line 1253: */
 /* line 1254: */
 /* line 1255: */
HIEATRN = PIEATRN_params;
} 
} 
A_PROC_EXIT(get_macparams);
*ReturnedValue = (HIEATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QJEATRN_anonymous(A68_248  *ReturnedValue, void *NonLocals)
#define NL(x) (((RJEATRN_anonymous *)NonLocals)->x)
{ 
A68_INT  SJEATRN_fnno;
A68_250  TJEATRN;  /* avoid structure result */
A68_250  UJEATRN_params;
A68_248  VJEATRN;  /* collateral clause result */
A68_161  WJEATRN;  /* avoid structure result */
A68_248  XJEATRN;  /* clause result */
{ 
SJEATRN_fnno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1260: */
A_CALLPROC(NL(BIEATRN_get_macparams),( &TJEATRN),( &TJEATRN,(NL(BIEATRN_get_macparams)).nonlocals));
UJEATRN_params = TJEATRN;
 /* line 1261: */
VJEATRN.Fnno = SJEATRN_fnno;
VJEATRN.Macparams = UJEATRN_params;
 /* line 1262: */
A_CALLPROC(NL(XQDATRN_get_attr),( &WJEATRN),( &WJEATRN,(NL(XQDATRN_get_attr)).nonlocals));
VJEATRN.Attr = WJEATRN;
XJEATRN = VJEATRN;
} 
*ReturnedValue = (XJEATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BKEATRN_get_localdec(A68_INT  Ihold, A68_VC  Etext, A68_269  *ReturnedValue, void *NonLocals)
#define NL(x) (((CKEATRN_get_localdec *)NonLocals)->x)
{ 
A68_269  DKEATRN;  /* clause result */
A68_269  EKEATRN;  /* OPERATORS - mode -> union mode */
A68_162  FKEATRN;  /* YIELD */
A68_269  GKEATRN;  /* OPERATORS - mode -> union mode */
A68_174  HKEATRN;  /* YIELD */
A68_269  IKEATRN;  /* OPERATORS - mode -> union mode */
A68_187  JKEATRN;  /* YIELD */
A68_269  KKEATRN;  /* OPERATORS - mode -> union mode */
A68_202  LKEATRN;  /* YIELD */
A68_269  MKEATRN;  /* OPERATORS - mode -> union mode */
A68_239  NKEATRN;  /* YIELD */
A68_46  OKEATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_269  PKEATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_localdec);
 /* line 1266: */
 /* line 1267: */
{ 
if ( (Ihold==BGDATRN_attrlocdectok) )
{ 
 /* line 1268: */
FKEATRN = (*UDAATRN_makeattrname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
DKEATRN = A_UNITE(EKEATRN,mode1,1,FKEATRN);
} 
else
{ 
if ( (Ihold==CGDATRN_flocdectok) )
{ 
 /* line 1269: */
HKEATRN = (*OEAATRN_makefname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
DKEATRN = A_UNITE(GKEATRN,mode2,2,HKEATRN);
} 
else
{ 
if ( (Ihold==DGDATRN_tlocdectok) )
{ 
 /* line 1270: */
JKEATRN = (*IFAATRN_maketname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
DKEATRN = A_UNITE(IKEATRN,mode3,3,JKEATRN);
} 
else
{ 
if ( (Ihold==EGDATRN_clocdectok) )
{ 
 /* line 1271: */
LKEATRN = (*CGAATRN_makecname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
DKEATRN = A_UNITE(KKEATRN,mode4,4,LKEATRN);
} 
else
{ 
if ( (Ihold==FGDATRN_fnlocdectok) )
{ 
 /* line 1272: */
NKEATRN = (*LHAATRN_makefnname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
DKEATRN = A_UNITE(MKEATRN,mode5,5,NKEATRN);
} 
else
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(OKEATRN,Etext,A68_VC )),(SHAAOSI_system, A_HVEC(OKEATRN,Etext,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1273: */
 /* line 1274: */
DKEATRN = PKEATRN;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(get_localdec);
*ReturnedValue = (DKEATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SKEATRN_get_macspecitem(A68_INT  Ihold, A68_269  *ReturnedValue, void *NonLocals)
#define NL(x) (((TKEATRN_get_macspecitem *)NonLocals)->x)
{ 
A68_269  UKEATRN;  /* clause result */
A68_269  VKEATRN;  /* OPERATORS - mode -> union mode */
A68_162  WKEATRN;  /* YIELD */
A68_269  XKEATRN;  /* OPERATORS - mode -> union mode */
A68_174  YKEATRN;  /* YIELD */
A68_269  ZKEATRN;  /* OPERATORS - mode -> union mode */
A68_187  ALEATRN;  /* YIELD */
A68_269  BLEATRN;  /* OPERATORS - mode -> union mode */
A68_202  CLEATRN;  /* YIELD */
A68_269  DLEATRN;  /* OPERATORS - mode -> union mode */
A68_239  ELEATRN;  /* YIELD */
A68_46  HLEATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_269  ILEATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_macspecitem);
 /* line 1277: */
 /* line 1278: */
{ 
if ( (Ihold==GGDATRN_attrmacspectok) )
{ 
 /* line 1279: */
WKEATRN = (*UDAATRN_makeattrname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
UKEATRN = A_UNITE(VKEATRN,mode1,1,WKEATRN);
} 
else
{ 
if ( (Ihold==HGDATRN_fmacspectok) )
{ 
 /* line 1280: */
YKEATRN = (*OEAATRN_makefname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
UKEATRN = A_UNITE(XKEATRN,mode2,2,YKEATRN);
} 
else
{ 
if ( (Ihold==IGDATRN_tmacspectok) )
{ 
 /* line 1281: */
ALEATRN = (*IFAATRN_maketname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
UKEATRN = A_UNITE(ZKEATRN,mode3,3,ALEATRN);
} 
else
{ 
if ( (Ihold==JGDATRN_cmacspectok) )
{ 
 /* line 1282: */
CLEATRN = (*CGAATRN_makecname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
UKEATRN = A_UNITE(BLEATRN,mode4,4,CLEATRN);
} 
else
{ 
if ( (Ihold==KGDATRN_fnmacspectok) )
{ 
 /* line 1283: */
ELEATRN = (*LHAATRN_makefnname(CLDATRN_inassemint(NL(Reader), NL(Msg)))) ;
UKEATRN = A_UNITE(DLEATRN,mode5,5,ELEATRN);
} 
else
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(HLEATRN,GLEATRN,A68_VC )),(SHAAOSI_system, A_HVEC(HLEATRN,GLEATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1284: */
 /* line 1285: */
UKEATRN = ILEATRN;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(get_macspecitem);
*ReturnedValue = (UKEATRN);
return;
} 
#undef NL

A_STATIC A68_254 * KLEATRN_get_printitems(void *NonLocals)
#define NL(x) (((LLEATRN_get_printitems *)NonLocals)->x)
{ 
A68_331  MLEATRN;  /* avoid structure result */
A68_INT  NLEATRN_listnumb;
A68_331  OLEATRN;  /* avoid structure result */
A68_254 * PLEATRN_pitems;
A68_254 ** QLEATRN_nextpitems;
A68_INT  RLEATRN;  /* to part of loop */
A68_INT  SLEATRN;  /* loop control */
A68_331  TLEATRN;  /* avoid structure result */
A68_INT  ULEATRN_ihold;
A68_254  VLEATRN;  /* collateral clause result */
A68_VC  WLEATRN;  /* avoid structure result */
A68_255  XLEATRN;  /* OPERATORS - mode -> union mode */
A68_170  YLEATRN;  /* avoid structure result */
A68_255  ZLEATRN;  /* OPERATORS - mode -> union mode */
A68_181 * AMEATRN;  /* YIELD */
A68_46  DMEATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_255  EMEATRN;  /* OPERATORS - skip to mode */
A68_254 * FMEATRN;  /* YIELD */
A68_254 * GMEATRN;  /* clause result */
A_PROC_ENTRY(get_printitems);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MLEATRN );
MLEATRN;
 /* line 1290: */
NLEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1291: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &OLEATRN );
OLEATRN;
 /* line 1292: */
PLEATRN_pitems = MAAATRN_nilprintitems;
 /* line 1293: */
QLEATRN_nextpitems = (&PLEATRN_pitems);
 /* line 1294: */
 /* line 1295: */
RLEATRN = NLEATRN_listnumb;
for ( SLEATRN = 1;
SLEATRN <= RLEATRN;
SLEATRN += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &TLEATRN );
ULEATRN_ihold = TLEATRN.Token;
 /* line 1296: */
 /* line 1297: */
if ( (ULEATRN_ihold==LGDATRN_idtag) )
{ 
 /* line 1298: */
INDATRN_inassemid( NL(Reader), NL(Msg), &WLEATRN );
VLEATRN.Item = A_UNITE(XLEATRN,mode1,1,WLEATRN);
} 
else
{ 
if ( (ULEATRN_ihold==AFDATRN_formulatagtok) )
{ 
 /* line 1299: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &YLEATRN),( &YLEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
AMEATRN = DFAATRN_makeformulatag(YLEATRN) ;
VLEATRN.Item = A_UNITE(ZLEATRN,mode2,2,AMEATRN);
} 
else
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(DMEATRN,CMEATRN,A68_VC )),(SHAAOSI_system, A_HVEC(DMEATRN,CMEATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1300: */
VLEATRN.Item = EMEATRN;
} 
} 
VLEATRN.Rest = MAAATRN_nilprintitems;
FMEATRN = A_HEAP(A68_254 ) ;
(*FMEATRN) = VLEATRN ;
(*QLEATRN_nextpitems) = FMEATRN;
 /* line 1301: */
 /* line 1302: */
QLEATRN_nextpitems = (&((*QLEATRN_nextpitems)->Rest));
}
 /* line 1303: */
 /* line 1304: */
GMEATRN = PLEATRN_pitems;
} 
A_PROC_EXIT(get_printitems);
return( GMEATRN );
} 
#undef NL

A_STATIC A68_240 * IMEATRN_get_print(void *NonLocals)
#define NL(x) (((JMEATRN_get_print *)NonLocals)->x)
{ 
A68_170  KMEATRN;  /* avoid structure result */
A68_170  LMEATRN_cond;
A68_254 * MMEATRN_print;
A68_240  NMEATRN;  /* collateral clause result */
A68_240 * OMEATRN;  /* clause result */
A68_240 * PMEATRN;  /* YIELD */
A_PROC_ENTRY(get_print);
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &KMEATRN),( &KMEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
LMEATRN_cond = KMEATRN;
 /* line 1309: */
MMEATRN_print = A_CALLPROC(NL(JLEATRN_get_printitems),(),((NL(JLEATRN_get_printitems)).nonlocals));
 /* line 1310: */
NMEATRN.Cond = LMEATRN_cond;
 /* line 1311: */
NMEATRN.Print = MMEATRN_print;
PMEATRN = A_HEAP(A68_240 ) ;
(*PMEATRN) = NMEATRN ;
OMEATRN = PMEATRN;
} 
A_PROC_EXIT(get_print);
return( OMEATRN );
} 
#undef NL

A_STATIC A68_241 * RMEATRN_get_fault(void *NonLocals)
#define NL(x) (((SMEATRN_get_fault *)NonLocals)->x)
{ 
A68_170  TMEATRN;  /* avoid structure result */
A68_170  UMEATRN_cond;
A68_254 * VMEATRN_fault;
A68_241  WMEATRN;  /* collateral clause result */
A68_241 * XMEATRN;  /* clause result */
A68_241 * YMEATRN;  /* YIELD */
A_PROC_ENTRY(get_fault);
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &TMEATRN),( &TMEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
UMEATRN_cond = TMEATRN;
 /* line 1316: */
VMEATRN_fault = A_CALLPROC(NL(JLEATRN_get_printitems),(),((NL(JLEATRN_get_printitems)).nonlocals));
 /* line 1317: */
WMEATRN.Cond = UMEATRN_cond;
 /* line 1318: */
WMEATRN.Fault = VMEATRN_fault;
YMEATRN = A_HEAP(A68_241 ) ;
(*YMEATRN) = WMEATRN ;
XMEATRN = YMEATRN;
} 
A_PROC_EXIT(get_fault);
return( XMEATRN );
} 
#undef NL

A_STATIC A68_249 * ANEATRN_get_names(void *NonLocals)
#define NL(x) (((BNEATRN_get_names *)NonLocals)->x)
{ 
A68_331  CNEATRN;  /* avoid structure result */
A68_INT  DNEATRN_listnumb;
A68_331  ENEATRN;  /* avoid structure result */
A68_249 * FNEATRN_names;
A68_249 ** GNEATRN_nextnames;
A68_INT  HNEATRN_nameno;
A68_INT  INEATRN;  /* to part of loop */
A68_INT  JNEATRN;  /* loop control */
A68_249  KNEATRN;  /* collateral clause result */
A68_249 * LNEATRN;  /* YIELD */
A68_249 * MNEATRN;  /* clause result */
A_PROC_ENTRY(get_names);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &CNEATRN );
CNEATRN;
 /* line 1323: */
DNEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1324: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &ENEATRN );
ENEATRN;
 /* line 1325: */
FNEATRN_names = NAAATRN_nilnames;
 /* line 1326: */
GNEATRN_nextnames = (&FNEATRN_names);
 /* line 1327: */
 /* line 1328: */
 /* line 1329: */
INEATRN = DNEATRN_listnumb;
for ( JNEATRN = 1;
JNEATRN <= INEATRN;
JNEATRN += 1 )
{ 
 /* line 1330: */
HNEATRN_nameno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1331: */
KNEATRN.Nameno = HNEATRN_nameno;
KNEATRN.Rest = (A68_249 *)A68_NIL;
LNEATRN = A_HEAP(A68_249 ) ;
(*LNEATRN) = KNEATRN ;
(*GNEATRN_nextnames) = LNEATRN;
 /* line 1332: */
 /* line 1333: */
GNEATRN_nextnames = (&((*GNEATRN_nextnames)->Rest));
}
 /* line 1334: */
 /* line 1335: */
MNEATRN = FNEATRN_names;
} 
A_PROC_EXIT(get_names);
return( MNEATRN );
} 
#undef NL

A_STATIC A68_242 * ONEATRN_get_let(void *NonLocals)
#define NL(x) (((PNEATRN_get_let *)NonLocals)->x)
{ 
A68_249 * QNEATRN_letnames;
A68_208  RNEATRN;  /* avoid structure result */
A68_208  SNEATRN_unit;
A68_242  TNEATRN;  /* collateral clause result */
A68_242 * UNEATRN;  /* clause result */
A68_242 * VNEATRN;  /* YIELD */
A_PROC_ENTRY(get_let);
{ 
QNEATRN_letnames = A_CALLPROC(NL(ZMEATRN_get_names),(),((NL(ZMEATRN_get_names)).nonlocals));
 /* line 1340: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &RNEATRN),( &RNEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
SNEATRN_unit = RNEATRN;
 /* line 1341: */
TNEATRN.Letnames = QNEATRN_letnames;
 /* line 1342: */
TNEATRN.Unit = SNEATRN_unit;
VNEATRN = A_HEAP(A68_242 ) ;
(*VNEATRN) = TNEATRN ;
UNEATRN = VNEATRN;
} 
A_PROC_EXIT(get_let);
return( UNEATRN );
} 
#undef NL

A_STATIC A68_VOID  XNEATRN_get_seqstep(A68_257  *ReturnedValue, void *NonLocals)
#define NL(x) (((YNEATRN_get_seqstep *)NonLocals)->x)
{ 
A68_400  AOEATRN_get_seqchoices;   /* proc value of non-global proc */
A68_331  UOEATRN;  /* avoid structure result */
A68_INT  VOEATRN_ihold;
A68_257  WOEATRN;  /* clause result */
A68_257  XOEATRN;  /* OPERATORS - mode -> union mode */
A68_240 * YOEATRN;  /* YIELD */
A68_257  ZOEATRN;  /* OPERATORS - mode -> union mode */
A68_241 * APEATRN;  /* YIELD */
A68_257  BPEATRN;  /* OPERATORS - mode -> union mode */
A68_256 * CPEATRN;  /* YIELD */
A68_258 * DPEATRN_seqlet;
A68_331  EPEATRN;  /* avoid structure result */
A68_242 * FPEATRN;  /* YIELD */
A68_257  GPEATRN;  /* OPERATORS - mode -> union mode */
A68_259 * HPEATRN_seqvar;
A68_331  IPEATRN;  /* avoid structure result */
A68_242 * JPEATRN;  /* YIELD */
A68_257  KPEATRN;  /* OPERATORS - mode -> union mode */
A68_331  LPEATRN;  /* avoid structure result */
A68_249 * MPEATRN_pvarnames;
A68_208  NPEATRN;  /* avoid structure result */
A68_208  OPEATRN_init;
A68_260  PPEATRN;  /* collateral clause result */
A68_260 * QPEATRN;  /* YIELD */
A68_257  RPEATRN;  /* OPERATORS - mode -> union mode */
A68_208  SPEATRN;  /* avoid structure result */
A68_208  TPEATRN_to;
A68_208  UPEATRN;  /* avoid structure result */
A68_208  VPEATRN_from;
A68_261  WPEATRN;  /* collateral clause result */
A68_261 * XPEATRN;  /* YIELD */
A68_257  YPEATRN;  /* OPERATORS - mode -> union mode */
A68_208  ZPEATRN;  /* avoid structure result */
A68_208  AQEATRN_input;
A68_267 * BQEATRN_choices;
A68_262  CQEATRN;  /* collateral clause result */
A68_262 * DQEATRN;  /* YIELD */
A68_257  EQEATRN;  /* OPERATORS - mode -> union mode */
A68_170  FQEATRN;  /* avoid structure result */
A68_170  GQEATRN_cond;
A68_257  HQEATRN;  /* avoid structure result */
A68_257  IQEATRN_true;
A68_257  JQEATRN;  /* avoid structure result */
A68_257  KQEATRN_false;
A68_263  LQEATRN;  /* collateral clause result */
A68_263 * MQEATRN;  /* YIELD */
A68_257  NQEATRN;  /* OPERATORS - mode -> union mode */
A68_170  OQEATRN;  /* avoid structure result */
A68_170  PQEATRN_repl;
A68_257  QQEATRN;  /* avoid structure result */
A68_257  RQEATRN_body;
A68_264  SQEATRN;  /* collateral clause result */
A68_264 * TQEATRN;  /* YIELD */
A68_257  UQEATRN;  /* OPERATORS - mode -> union mode */
A68_170  VQEATRN;  /* avoid structure result */
A68_170  WQEATRN_size;
A68_257  XQEATRN;  /* avoid structure result */
A68_257  YQEATRN_elem;
A68_266  ZQEATRN;  /* collateral clause result */
A68_266 * AREATRN;  /* YIELD */
A68_257  BREATRN;  /* OPERATORS - mode -> union mode */
A68_257  CREATRN;  /* OPERATORS - mode -> union mode */
A68_269  FREATRN;  /* avoid structure result */
A68_257  GREATRN;  /* OPERATORS - unite union */
A_PROC_ENTRY(get_seqstep);
{ 
 /* line 1347: */
A_CLOSURE( AOEATRN_get_seqchoices, BOEATRN_get_seqchoices, COEATRN_get_seqchoices );
(( COEATRN_get_seqchoices * ) ( AOEATRN_get_seqchoices.nonlocals )) -> Reader = NL(Reader);
(( COEATRN_get_seqchoices * ) ( AOEATRN_get_seqchoices.nonlocals )) -> Msg = NL(Msg);
(( COEATRN_get_seqchoices * ) ( AOEATRN_get_seqchoices.nonlocals )) -> ZXDATRN_get_unit = NL(ZXDATRN_get_unit);
(( COEATRN_get_seqchoices * ) ( AOEATRN_get_seqchoices.nonlocals )) -> WNEATRN_get_seqstep = NL(WNEATRN_get_seqstep);
 /* line 1369: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UOEATRN );
VOEATRN_ihold = UOEATRN.Token;
 /* line 1370: */
 /* line 1371: */
switch ( ((VOEATRN_ihold+1)-BEDATRN_printtok) )
{ 
case 1: 
 /* line 1372: */
YOEATRN = A_CALLPROC(NL(HMEATRN_get_print),(),((NL(HMEATRN_get_print)).nonlocals)) ;
WOEATRN = A_UNITE(XOEATRN,mode6,6,YOEATRN);
break;
case 2: 
 /* line 1373: */
APEATRN = A_CALLPROC(NL(QMEATRN_get_fault),(),((NL(QMEATRN_get_fault)).nonlocals)) ;
WOEATRN = A_UNITE(ZOEATRN,mode7,7,APEATRN);
break;
case 3: 
 /* line 1374: */
CPEATRN = A_CALLPROC((*NL(XXDATRN_get_sequence)),(),(((*NL(XXDATRN_get_sequence))).nonlocals)) ;
WOEATRN = A_UNITE(BPEATRN,mode16,16,CPEATRN);
break;
case 4: 
{ 
DPEATRN_seqlet = (A_HEAP(A68_258 ));
 /* line 1375: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &EPEATRN );
EPEATRN;
 /* line 1376: */
FPEATRN = (&(DPEATRN_seqlet->Seqlet)) ;
(*FPEATRN) = (*A_CALLPROC(NL(NNEATRN_get_let),(),((NL(NNEATRN_get_let)).nonlocals)));
 /* line 1377: */
 /* line 1378: */
 /* line 1379: */
WOEATRN = A_UNITE(GPEATRN,mode8,8,DPEATRN_seqlet);
} 
break;
case 5: 
{ 
HPEATRN_seqvar = (A_HEAP(A68_259 ));
 /* line 1380: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &IPEATRN );
IPEATRN;
 /* line 1381: */
JPEATRN = (&(HPEATRN_seqvar->Seqvar)) ;
(*JPEATRN) = (*A_CALLPROC(NL(NNEATRN_get_let),(),((NL(NNEATRN_get_let)).nonlocals)));
 /* line 1382: */
 /* line 1383: */
 /* line 1384: */
WOEATRN = A_UNITE(KPEATRN,mode9,9,HPEATRN_seqvar);
} 
break;
case 6: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &LPEATRN );
LPEATRN;
 /* line 1385: */
MPEATRN_pvarnames = A_CALLPROC(NL(ZMEATRN_get_names),(),((NL(ZMEATRN_get_names)).nonlocals));
 /* line 1386: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &NPEATRN),( &NPEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
OPEATRN_init = NPEATRN;
 /* line 1387: */
PPEATRN.Pvarnames = MPEATRN_pvarnames;
 /* line 1388: */
PPEATRN.Init = OPEATRN_init;
 /* line 1389: */
QPEATRN = A_HEAP(A68_260 ) ;
(*QPEATRN) = PPEATRN ;
WOEATRN = A_UNITE(RPEATRN,mode10,10,QPEATRN);
} 
break;
case 7: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &SPEATRN),( &SPEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
TPEATRN_to = SPEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &UPEATRN),( &UPEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
VPEATRN_from = UPEATRN;
 /* line 1390: */
WPEATRN.To = TPEATRN_to;
 /* line 1391: */
WPEATRN.From = VPEATRN_from;
 /* line 1392: */
XPEATRN = A_HEAP(A68_261 ) ;
(*XPEATRN) = WPEATRN ;
WOEATRN = A_UNITE(YPEATRN,mode11,11,XPEATRN);
} 
break;
case 8: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &ZPEATRN),( &ZPEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
AQEATRN_input = ZPEATRN;
 /* line 1393: */
BQEATRN_choices = A_CALLPROC(AOEATRN_get_seqchoices,(),((AOEATRN_get_seqchoices).nonlocals));
 /* line 1394: */
CQEATRN.Input = AQEATRN_input;
 /* line 1395: */
CQEATRN.Choices = BQEATRN_choices;
 /* line 1396: */
DQEATRN = A_HEAP(A68_262 ) ;
(*DQEATRN) = CQEATRN ;
WOEATRN = A_UNITE(EQEATRN,mode12,12,DQEATRN);
} 
break;
case 9: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &FQEATRN),( &FQEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
GQEATRN_cond = FQEATRN;
 /* line 1397: */
A_CALLPROC(NL(WNEATRN_get_seqstep),( &HQEATRN),( &HQEATRN,(NL(WNEATRN_get_seqstep)).nonlocals));
IQEATRN_true = HQEATRN;
A_CALLPROC(NL(WNEATRN_get_seqstep),( &JQEATRN),( &JQEATRN,(NL(WNEATRN_get_seqstep)).nonlocals));
KQEATRN_false = JQEATRN;
 /* line 1398: */
LQEATRN.Cond = GQEATRN_cond;
LQEATRN.True = IQEATRN_true;
 /* line 1399: */
LQEATRN.False = KQEATRN_false;
 /* line 1400: */
MQEATRN = A_HEAP(A68_263 ) ;
(*MQEATRN) = LQEATRN ;
WOEATRN = A_UNITE(NQEATRN,mode13,13,MQEATRN);
} 
break;
case 10: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &OQEATRN),( &OQEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
PQEATRN_repl = OQEATRN;
 /* line 1401: */
A_CALLPROC(NL(WNEATRN_get_seqstep),( &QQEATRN),( &QQEATRN,(NL(WNEATRN_get_seqstep)).nonlocals));
RQEATRN_body = QQEATRN;
 /* line 1402: */
SQEATRN.Repl = PQEATRN_repl;
 /* line 1403: */
SQEATRN.Body = RQEATRN_body;
 /* line 1404: */
TQEATRN = A_HEAP(A68_264 ) ;
(*TQEATRN) = SQEATRN ;
WOEATRN = A_UNITE(UQEATRN,mode14,14,TQEATRN);
} 
break;
case 11: 
{ 
A_CALLPROC((*NL(DSDATRN_get_formula)),( &VQEATRN),( &VQEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
WQEATRN_size = VQEATRN;
 /* line 1405: */
A_CALLPROC(NL(WNEATRN_get_seqstep),( &XQEATRN),( &XQEATRN,(NL(WNEATRN_get_seqstep)).nonlocals));
YQEATRN_elem = XQEATRN;
 /* line 1406: */
ZQEATRN.Size = WQEATRN_size;
 /* line 1407: */
ZQEATRN.Elem = YQEATRN_elem;
 /* line 1409: */
AREATRN = A_HEAP(A68_266 ) ;
(*AREATRN) = ZQEATRN ;
WOEATRN = A_UNITE(BREATRN,mode17,17,AREATRN);
} 
break;
case 12: 
WOEATRN = A_UNITE(CREATRN,mode15,15,(&HIAATRN_seqnull));
break;
default: 
 /* line 1410: */
 /* line 1411: */
A_CALLPROC(NL(AKEATRN_get_localdec),(VOEATRN_ihold, EREATRN, &FREATRN),(VOEATRN_ihold, EREATRN, &FREATRN,(NL(AKEATRN_get_localdec)).nonlocals));
WOEATRN = A_UUNITE(GREATRN,0,FREATRN);
break;
} 
} 
A_PROC_EXIT(get_seqstep);
*ReturnedValue = (WOEATRN);
return;
} 
#undef NL

A_STATIC A68_256 * IREATRN_anonymous(void *NonLocals)
#define NL(x) (((JREATRN_anonymous *)NonLocals)->x)
{ 
A68_331  KREATRN;  /* avoid structure result */
A68_INT  LREATRN_listnumb;
A68_331  MREATRN;  /* avoid structure result */
A68_256 * NREATRN_sequence;
A68_256 ** OREATRN_nextsequence;
A68_257  PREATRN_step;
A68_INT  QREATRN;  /* to part of loop */
A68_INT  RREATRN;  /* loop control */
A68_257  SREATRN;  /* avoid structure result */
A68_256  TREATRN;  /* collateral clause result */
A68_256 * UREATRN;  /* YIELD */
A68_256 * VREATRN;  /* clause result */
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &KREATRN );
KREATRN;
 /* line 1416: */
LREATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1417: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MREATRN );
MREATRN;
 /* line 1418: */
NREATRN_sequence = QAAATRN_nilsequence;
 /* line 1419: */
OREATRN_nextsequence = (&NREATRN_sequence);
 /* line 1420: */
 /* line 1421: */
 /* line 1422: */
QREATRN = LREATRN_listnumb;
for ( RREATRN = 1;
RREATRN <= QREATRN;
RREATRN += 1 )
{ 
 /* line 1423: */
A_CALLPROC(NL(WNEATRN_get_seqstep),( &SREATRN),( &SREATRN,(NL(WNEATRN_get_seqstep)).nonlocals));
PREATRN_step = SREATRN;
 /* line 1424: */
 /* line 1425: */
TREATRN.Step = PREATRN_step;
TREATRN.Rest = QAAATRN_nilsequence;
UREATRN = A_HEAP(A68_256 ) ;
(*UREATRN) = TREATRN ;
(*OREATRN_nextsequence) = UREATRN;
 /* line 1426: */
 /* line 1427: */
OREATRN_nextsequence = (&((*OREATRN_nextsequence)->Rest));
}
 /* line 1428: */
 /* line 1429: */
VREATRN = NREATRN_sequence;
} 
return( VREATRN );
} 
#undef NL

A_STATIC A68_VOID  XREATRN_get_step(A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((YREATRN_get_step *)NonLocals)->x)
{ 
A68_402  ASEATRN_get_joins;   /* proc value of non-global proc */
A68_331  SSEATRN;  /* avoid structure result */
A68_INT  TSEATRN_ihold;
A68_238  USEATRN;  /* clause result */
A68_238  VSEATRN;  /* OPERATORS - mode -> union mode */
A68_242 * WSEATRN;  /* YIELD */
A68_182 * XSEATRN_sizes;
A68_331  YSEATRN;  /* avoid structure result */
A68_248  ZSEATRN;  /* avoid structure result */
A68_248  ATEATRN_inst;
A68_249 * BTEATRN_makenames;
A68_243  CTEATRN;  /* collateral clause result */
A68_243 * DTEATRN;  /* YIELD */
A68_238  ETEATRN;  /* OPERATORS - mode -> union mode */
A68_208  FTEATRN;  /* avoid structure result */
A68_208  GTEATRN_from;
A68_208  HTEATRN;  /* avoid structure result */
A68_208  ITEATRN_to;
A68_244  JTEATRN;  /* collateral clause result */
A68_244 * KTEATRN;  /* YIELD */
A68_238  LTEATRN;  /* OPERATORS - mode -> union mode */
A68_182 * MTEATRN_repls;
A68_247 * NTEATRN_joins;
A68_245  OTEATRN;  /* collateral clause result */
A68_245 * PTEATRN;  /* YIELD */
A68_238  QTEATRN;  /* OPERATORS - mode -> union mode */
A68_238  RTEATRN;  /* OPERATORS - mode -> union mode */
A68_238  STEATRN;  /* OPERATORS - mode -> union mode */
A68_240 * TTEATRN;  /* YIELD */
A68_238  UTEATRN;  /* OPERATORS - mode -> union mode */
A68_241 * VTEATRN;  /* YIELD */
A68_269  YTEATRN;  /* avoid structure result */
A68_238  ZTEATRN;  /* OPERATORS - unite union */
A_PROC_ENTRY(get_step);
{ 
 /* line 1435: */
A_CLOSURE( ASEATRN_get_joins, BSEATRN_get_joins, CSEATRN_get_joins );
(( CSEATRN_get_joins * ) ( ASEATRN_get_joins.nonlocals )) -> Reader = NL(Reader);
(( CSEATRN_get_joins * ) ( ASEATRN_get_joins.nonlocals )) -> Msg = NL(Msg);
(( CSEATRN_get_joins * ) ( ASEATRN_get_joins.nonlocals )) -> ZXDATRN_get_unit = NL(ZXDATRN_get_unit);
 /* line 1452: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &SSEATRN );
TSEATRN_ihold = SSEATRN.Token;
 /* line 1453: */
 /* line 1454: */
switch ( ((TSEATRN_ihold+1)-WDDATRN_lettok) )
{ 
case 1: 
 /* line 1455: */
WSEATRN = A_CALLPROC(NL(NNEATRN_get_let),(),((NL(NNEATRN_get_let)).nonlocals)) ;
USEATRN = A_UNITE(VSEATRN,mode8,8,WSEATRN);
break;
case 2: 
{ 
XSEATRN_sizes = A_CALLPROC(NL(ZUDATRN_get_formulas),(),((NL(ZUDATRN_get_formulas)).nonlocals));
 /* line 1456: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &YSEATRN );
YSEATRN;
 /* line 1457: */
A_CALLPROC((*NL(WXDATRN_get_instance)),( &ZSEATRN),( &ZSEATRN,((*NL(WXDATRN_get_instance))).nonlocals));
ATEATRN_inst = ZSEATRN;
 /* line 1458: */
BTEATRN_makenames = A_CALLPROC(NL(ZMEATRN_get_names),(),((NL(ZMEATRN_get_names)).nonlocals));
 /* line 1459: */
CTEATRN.Sizes = XSEATRN_sizes;
CTEATRN.Inst = ATEATRN_inst;
 /* line 1460: */
CTEATRN.Makenames = BTEATRN_makenames;
 /* line 1461: */
DTEATRN = A_HEAP(A68_243 ) ;
(*DTEATRN) = CTEATRN ;
USEATRN = A_UNITE(ETEATRN,mode9,9,DTEATRN);
} 
break;
case 3: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &FTEATRN),( &FTEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
GTEATRN_from = FTEATRN;
A_CALLPROC(NL(ZXDATRN_get_unit),( &HTEATRN),( &HTEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
ITEATRN_to = HTEATRN;
 /* line 1462: */
JTEATRN.From = GTEATRN_from;
 /* line 1463: */
JTEATRN.To = ITEATRN_to;
 /* line 1464: */
KTEATRN = A_HEAP(A68_244 ) ;
(*KTEATRN) = JTEATRN ;
USEATRN = A_UNITE(LTEATRN,mode10,10,KTEATRN);
} 
break;
case 4: 
{ 
MTEATRN_repls = A_CALLPROC(NL(ZUDATRN_get_formulas),(),((NL(ZUDATRN_get_formulas)).nonlocals));
 /* line 1465: */
NTEATRN_joins = A_CALLPROC(ASEATRN_get_joins,(),((ASEATRN_get_joins).nonlocals));
 /* line 1466: */
OTEATRN.Repls = MTEATRN_repls;
 /* line 1467: */
OTEATRN.Joins = NTEATRN_joins;
 /* line 1468: */
PTEATRN = A_HEAP(A68_245 ) ;
(*PTEATRN) = OTEATRN ;
USEATRN = A_UNITE(QTEATRN,mode11,11,PTEATRN);
} 
break;
case 5: 
 /* line 1469: */
USEATRN = A_UNITE(RTEATRN,mode12,12,(&JIAATRN_stepnull));
break;
case 6: 
 /* line 1471: */
TTEATRN = A_CALLPROC(NL(HMEATRN_get_print),(),((NL(HMEATRN_get_print)).nonlocals)) ;
USEATRN = A_UNITE(STEATRN,mode6,6,TTEATRN);
break;
case 7: 
VTEATRN = A_CALLPROC(NL(QMEATRN_get_fault),(),((NL(QMEATRN_get_fault)).nonlocals)) ;
USEATRN = A_UNITE(UTEATRN,mode7,7,VTEATRN);
break;
default: 
 /* line 1472: */
 /* line 1473: */
A_CALLPROC(NL(AKEATRN_get_localdec),(TSEATRN_ihold, XTEATRN, &YTEATRN),(TSEATRN_ihold, XTEATRN, &YTEATRN,(NL(AKEATRN_get_localdec)).nonlocals));
USEATRN = A_UUNITE(ZTEATRN,0,YTEATRN);
break;
} 
} 
A_PROC_EXIT(get_step);
*ReturnedValue = (USEATRN);
return;
} 
#undef NL

A_STATIC A68_237 * BUEATRN_anonymous(void *NonLocals)
#define NL(x) (((CUEATRN_anonymous *)NonLocals)->x)
{ 
A68_331  DUEATRN;  /* avoid structure result */
A68_INT  EUEATRN_listnumb;
A68_331  FUEATRN;  /* avoid structure result */
A68_237 * GUEATRN_series;
A68_237 ** HUEATRN_nextseries;
A68_238  IUEATRN_step;
A68_INT  JUEATRN;  /* to part of loop */
A68_INT  KUEATRN;  /* loop control */
A68_238  LUEATRN;  /* avoid structure result */
A68_237  MUEATRN;  /* collateral clause result */
A68_237 * NUEATRN;  /* YIELD */
A68_237 * OUEATRN;  /* clause result */
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &DUEATRN );
DUEATRN;
 /* line 1478: */
EUEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1479: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &FUEATRN );
FUEATRN;
 /* line 1480: */
GUEATRN_series = SAAATRN_nilseries;
 /* line 1481: */
HUEATRN_nextseries = (&GUEATRN_series);
 /* line 1482: */
 /* line 1483: */
 /* line 1484: */
JUEATRN = EUEATRN_listnumb;
for ( KUEATRN = 1;
KUEATRN <= JUEATRN;
KUEATRN += 1 )
{ 
 /* line 1485: */
A_CALLPROC(NL(WREATRN_get_step),( &LUEATRN),( &LUEATRN,(NL(WREATRN_get_step)).nonlocals));
IUEATRN_step = LUEATRN;
 /* line 1486: */
MUEATRN.Step = IUEATRN_step;
MUEATRN.Rest = SAAATRN_nilseries;
NUEATRN = A_HEAP(A68_237 ) ;
(*NUEATRN) = MUEATRN ;
(*HUEATRN_nextseries) = NUEATRN;
 /* line 1487: */
 /* line 1488: */
HUEATRN_nextseries = (&((*HUEATRN_nextseries)->Rest));
}
 /* line 1489: */
 /* line 1490: */
OUEATRN = GUEATRN_series;
} 
return( OUEATRN );
} 
#undef NL

A_STATIC A68_VOID  QUEATRN_get_fnbody(A68_280  *ReturnedValue, void *NonLocals)
#define NL(x) (((RUEATRN_get_fnbody *)NonLocals)->x)
{ 
A68_331  SUEATRN;  /* avoid structure result */
A68_331  TUEATRN_tok;
A68_BOOL  UUEATRN_biop;
A68_VC  VUEATRN;  /* avoid structure result */
A68_VC  WUEATRN_name;
A68_270  XUEATRN;  /* collateral clause result */
A68_250  YUEATRN;  /* avoid structure result */
A68_280  ZUEATRN;  /* clause result */
A68_270 * AVEATRN;  /* YIELD */
A68_280  BVEATRN;  /* OPERATORS - mode -> union mode */
A68_170  CVEATRN;  /* avoid structure result */
A68_280  DVEATRN;  /* OPERATORS - mode -> union mode */
A68_271 * EVEATRN;  /* YIELD */
A68_280  FVEATRN;  /* OPERATORS - mode -> union mode */
A68_280  GVEATRN;  /* OPERATORS - mode -> union mode */
A68_VC  HVEATRN;  /* avoid structure result */
A68_VC  IVEATRN_name;
A68_INT  JVEATRN_contextno;
A68_331  KVEATRN;  /* avoid structure result */
A68_VC  LVEATRN;  /* avoid structure result */
A68_VC  MVEATRN_context;
A68_VC  NVEATRN;  /* avoid structure result */
A68_VC  OVEATRN_import;
A68_273  PVEATRN;  /* collateral clause result */
A68_273 * QVEATRN;  /* YIELD */
A68_280  RVEATRN;  /* OPERATORS - mode -> union mode */
A68_INT  SVEATRN_sort;
A68_208  TVEATRN;  /* avoid structure result */
A68_208  UVEATRN_init;
A68_170  VVEATRN;  /* avoid structure result */
A68_170  WVEATRN_ambigtime;
A68_208  XVEATRN;  /* avoid structure result */
A68_208  YVEATRN_ambig;
A68_170  ZVEATRN;  /* avoid structure result */
A68_170  AWEATRN_delaytime;
A68_274  BWEATRN;  /* collateral clause result */
A68_274 * CWEATRN;  /* YIELD */
A68_280  DWEATRN;  /* OPERATORS - mode -> union mode */
A68_208  EWEATRN;  /* avoid structure result */
A68_208  FWEATRN_init;
A68_170  GWEATRN;  /* avoid structure result */
A68_170  HWEATRN_delaytime;
A68_275  IWEATRN;  /* collateral clause result */
A68_275 * JWEATRN;  /* YIELD */
A68_280  KWEATRN;  /* OPERATORS - mode -> union mode */
A68_208  LWEATRN;  /* avoid structure result */
A68_208  MWEATRN_init;
A68_280  NWEATRN;  /* OPERATORS - mode -> union mode */
A68_276 * OWEATRN;  /* YIELD */
A68_INT  PWEATRN_sort;
A68_170  QWEATRN;  /* avoid structure result */
A68_170  RWEATRN_interval;
A68_208  SWEATRN;  /* avoid structure result */
A68_208  TWEATRN_init;
A68_170  UWEATRN;  /* avoid structure result */
A68_170  VWEATRN_skew;
A68_277  WWEATRN;  /* collateral clause result */
A68_277 * XWEATRN;  /* YIELD */
A68_280  YWEATRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  ZWEATRN_faster;
A68_INT  AXEATRN_sort;
A68_331  BXEATRN;  /* avoid structure result */
A68_248  CXEATRN;  /* avoid structure result */
A68_248  DXEATRN_inst;
A68_170  EXEATRN;  /* avoid structure result */
A68_170  FXEATRN_scale;
A68_208  GXEATRN;  /* avoid structure result */
A68_208  HXEATRN_init;
A68_170  IXEATRN;  /* avoid structure result */
A68_170  JXEATRN_skew;
A68_278  KXEATRN;  /* collateral clause result */
A68_278 * LXEATRN;  /* YIELD */
A68_280  MXEATRN;  /* OPERATORS - mode -> union mode */
A68_331  NXEATRN;  /* avoid structure result */
A68_INT  OXEATRN_listnumb;
A68_331  PXEATRN;  /* avoid structure result */
A68_160 * QXEATRN_joincheck;
A68_160 ** RXEATRN_nextjoincheck;
A68_INT  SXEATRN;  /* to part of loop */
A68_INT  TXEATRN;  /* loop control */
A68_160  UXEATRN;  /* collateral clause result */
A68_160 * VXEATRN;  /* YIELD */
A68_BOOL  WXEATRN_check;
A68_279  XXEATRN;  /* collateral clause result */
A68_280  YXEATRN;  /* avoid structure result */
A68_279 * ZXEATRN;  /* YIELD */
A68_280  AYEATRN;  /* OPERATORS - mode -> union mode */
A68_280  BYEATRN;  /* OPERATORS - mode -> union mode */
A68_280  CYEATRN;  /* OPERATORS - mode -> union mode */
A68_208  DYEATRN;  /* avoid structure result */
A68_280  EYEATRN;  /* OPERATORS - mode -> union mode */
A68_253 * FYEATRN;  /* YIELD */
A68_46  IYEATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_280  JYEATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_fnbody);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &SUEATRN );
TUEATRN_tok = SUEATRN;
 /* line 1496: */
 /* line 1497: */
switch ( ((TUEATRN_tok.Token+1)-NEDATRN_alientok) )
{ 
case 1: 
{ 
UUEATRN_biop = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1498: */
INDATRN_inassemid( NL(Reader), NL(Msg), &VUEATRN );
WUEATRN_name = VUEATRN;
 /* line 1499: */
XUEATRN.Biop = UUEATRN_biop;
XUEATRN.Name = WUEATRN_name;
 /* line 1500: */
A_CALLPROC(NL(BIEATRN_get_macparams),( &YUEATRN),( &YUEATRN,(NL(BIEATRN_get_macparams)).nonlocals));
XUEATRN.Macparams = YUEATRN;
 /* line 1501: */
AVEATRN = A_HEAP(A68_270 ) ;
(*AVEATRN) = XUEATRN ;
ZUEATRN = A_UNITE(BVEATRN,mode2,2,AVEATRN);
} 
break;
case 2: 
 /* line 1502: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &CVEATRN),( &CVEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
EVEATRN = QHAATRN_makearith(CVEATRN) ;
ZUEATRN = A_UNITE(DVEATRN,mode3,3,EVEATRN);
break;
case 3: 
 /* line 1503: */
ZUEATRN = A_UNITE(FVEATRN,mode4,4,(&NIAATRN_reform));
break;
case 4: 
{ 
 /* line 1504: */
 /* line 1505: */
if ( TUEATRN_tok.Nil )
{ 
ZUEATRN = A_UNITE(GVEATRN,mode5,5,TAAATRN_nilimport);
} 
else
{ 
INDATRN_inassemid( NL(Reader), NL(Msg), &HVEATRN );
IVEATRN_name = HVEATRN;
 /* line 1506: */
JVEATRN_contextno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1507: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &KVEATRN );
KVEATRN;
 /* line 1508: */
INDATRN_inassemid( NL(Reader), NL(Msg), &LVEATRN );
MVEATRN_context = LVEATRN;
 /* line 1509: */
INDATRN_inassemid( NL(Reader), NL(Msg), &NVEATRN );
OVEATRN_import = NVEATRN;
 /* line 1510: */
PVEATRN.Name = IVEATRN_name;
PVEATRN.Contextno = JVEATRN_contextno;
PVEATRN.Ctname.Context = MVEATRN_context;
 /* line 1511: */
PVEATRN.Ctname.Import = OVEATRN_import;
 /* line 1512: */
 /* line 1513: */
QVEATRN = A_HEAP(A68_273 ) ;
(*QVEATRN) = PVEATRN ;
ZUEATRN = A_UNITE(RVEATRN,mode5,5,QVEATRN);
} 
} 
break;
case 5: 
{ 
SVEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1514: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &TVEATRN),( &TVEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
UVEATRN_init = TVEATRN;
 /* line 1515: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &VVEATRN),( &VVEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
WVEATRN_ambigtime = VVEATRN;
 /* line 1516: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &XVEATRN),( &XVEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
YVEATRN_ambig = XVEATRN;
 /* line 1517: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &ZVEATRN),( &ZVEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
AWEATRN_delaytime = ZVEATRN;
 /* line 1518: */
BWEATRN.Sort = SVEATRN_sort;
BWEATRN.Init = UVEATRN_init;
BWEATRN.Ambigtime = WVEATRN_ambigtime;
BWEATRN.Ambig = YVEATRN_ambig;
 /* line 1519: */
BWEATRN.Delaytime = AWEATRN_delaytime;
 /* line 1520: */
CWEATRN = A_HEAP(A68_274 ) ;
(*CWEATRN) = BWEATRN ;
ZUEATRN = A_UNITE(DWEATRN,mode6,6,CWEATRN);
} 
break;
case 6: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &EWEATRN),( &EWEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
FWEATRN_init = EWEATRN;
 /* line 1521: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &GWEATRN),( &GWEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
HWEATRN_delaytime = GWEATRN;
 /* line 1522: */
IWEATRN.Init = FWEATRN_init;
 /* line 1523: */
IWEATRN.Delaytime = HWEATRN_delaytime;
 /* line 1524: */
JWEATRN = A_HEAP(A68_275 ) ;
(*JWEATRN) = IWEATRN ;
ZUEATRN = A_UNITE(KWEATRN,mode7,7,JWEATRN);
} 
break;
case 7: 
{ 
A_CALLPROC(NL(ZXDATRN_get_unit),( &LWEATRN),( &LWEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
MWEATRN_init = LWEATRN;
 /* line 1525: */
 /* line 1526: */
 /* line 1527: */
OWEATRN = VHAATRN_makeram(MWEATRN_init) ;
ZUEATRN = A_UNITE(NWEATRN,mode8,8,OWEATRN);
} 
break;
case 8: 
{ 
PWEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1528: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &QWEATRN),( &QWEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
RWEATRN_interval = QWEATRN;
 /* line 1529: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &SWEATRN),( &SWEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
TWEATRN_init = SWEATRN;
 /* line 1530: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &UWEATRN),( &UWEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
VWEATRN_skew = UWEATRN;
 /* line 1531: */
WWEATRN.Sort = PWEATRN_sort;
WWEATRN.Interval = RWEATRN_interval;
WWEATRN.Init = TWEATRN_init;
 /* line 1532: */
WWEATRN.Skew = VWEATRN_skew;
 /* line 1533: */
XWEATRN = A_HEAP(A68_277 ) ;
(*XWEATRN) = WWEATRN ;
ZUEATRN = A_UNITE(YWEATRN,mode9,9,XWEATRN);
} 
break;
case 9: 
{ 
ZWEATRN_faster = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1534: */
AXEATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1535: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &BXEATRN );
BXEATRN;
 /* line 1536: */
A_CALLPROC((*NL(WXDATRN_get_instance)),( &CXEATRN),( &CXEATRN,((*NL(WXDATRN_get_instance))).nonlocals));
DXEATRN_inst = CXEATRN;
 /* line 1537: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &EXEATRN),( &EXEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
FXEATRN_scale = EXEATRN;
 /* line 1538: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &GXEATRN),( &GXEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
HXEATRN_init = GXEATRN;
 /* line 1539: */
A_CALLPROC((*NL(DSDATRN_get_formula)),( &IXEATRN),( &IXEATRN,((*NL(DSDATRN_get_formula))).nonlocals));
JXEATRN_skew = IXEATRN;
 /* line 1540: */
KXEATRN.Faster = ZWEATRN_faster;
KXEATRN.Sort = AXEATRN_sort;
KXEATRN.Inst = DXEATRN_inst;
KXEATRN.Scale = FXEATRN_scale;
KXEATRN.Init = HXEATRN_init;
 /* line 1541: */
KXEATRN.Skew = JXEATRN_skew;
 /* line 1542: */
LXEATRN = A_HEAP(A68_278 ) ;
(*LXEATRN) = KXEATRN ;
ZUEATRN = A_UNITE(MXEATRN,mode10,10,LXEATRN);
} 
break;
case 10: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &NXEATRN );
NXEATRN;
 /* line 1543: */
OXEATRN_listnumb = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1544: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &PXEATRN );
PXEATRN;
 /* line 1545: */
QXEATRN_joincheck = OAAATRN_nilints;
 /* line 1546: */
RXEATRN_nextjoincheck = (&QXEATRN_joincheck);
 /* line 1547: */
 /* line 1548: */
SXEATRN = OXEATRN_listnumb;
for ( TXEATRN = 1;
TXEATRN <= SXEATRN;
TXEATRN += 1 )
{ 
 /* line 1549: */
UXEATRN.Int = CLDATRN_inassemint(NL(Reader), NL(Msg));
UXEATRN.Rest = OAAATRN_nilints;
VXEATRN = A_HEAP(A68_160 ) ;
(*VXEATRN) = UXEATRN ;
(*RXEATRN_nextjoincheck) = VXEATRN;
 /* line 1550: */
 /* line 1551: */
RXEATRN_nextjoincheck = (&((*RXEATRN_nextjoincheck)->Rest));
}
 /* line 1552: */
WXEATRN_check = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1553: */
XXEATRN.Joincheck = QXEATRN_joincheck;
XXEATRN.Check = WXEATRN_check;
 /* line 1554: */
A_CALLPROC(NL(PUEATRN_get_fnbody),( &YXEATRN),( &YXEATRN,(NL(PUEATRN_get_fnbody)).nonlocals));
XXEATRN.Fnbody = YXEATRN;
 /* line 1555: */
ZXEATRN = A_HEAP(A68_279 ) ;
(*ZXEATRN) = XXEATRN ;
ZUEATRN = A_UNITE(AYEATRN,mode11,11,ZXEATRN);
} 
break;
case 11: 
 /* line 1556: */
ZUEATRN = A_UNITE(BYEATRN,mode12,12,(&LIAATRN_bodynull));
break;
case 12: 
{ 
 /* line 1557: */
 /* line 1558: */
if ( TUEATRN_tok.Nil )
{ 
ZUEATRN = A_UNITE(CYEATRN,mode1,1,KAAATRN_nilunit);
} 
else
{ 
 /* line 1559: */
 /* line 1560: */
 /* line 1561: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &DYEATRN),( &DYEATRN,(NL(ZXDATRN_get_unit)).nonlocals));
FYEATRN = WGAATRN_makeunittag(DYEATRN) ;
ZUEATRN = A_UNITE(EYEATRN,mode1,1,FYEATRN);
} 
} 
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(IYEATRN,HYEATRN,A68_VC )),(SHAAOSI_system, A_HVEC(IYEATRN,HYEATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1562: */
 /* line 1563: */
ZUEATRN = JYEATRN;
break;
} 
} 
A_PROC_EXIT(get_fnbody);
*ReturnedValue = (ZUEATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LYEATRN_get_typebody(A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((MYEATRN_get_typebody *)NonLocals)->x)
{ 
A68_331  NYEATRN;  /* avoid structure result */
A68_199  OYEATRN;  /* clause result */
A68_186  PYEATRN;  /* avoid structure result */
A68_199  QYEATRN;  /* OPERATORS - mode -> union mode */
A68_195 * RYEATRN;  /* YIELD */
A68_331  SYEATRN;  /* avoid structure result */
A68_INT  TYEATRN_size;
A68_331  UYEATRN;  /* avoid structure result */
A68_405  WYEATRN_generator;   /* proc value of non-global proc */
A68_200  BZEATRN;  /* avoid structure result */
A68_200  CZEATRN_alts;
A68_VC  DZEATRN_altname;
A68_186  EZEATRN_assoc;
A68_INT  FZEATRN_count;
A68_INT  GZEATRN;  /* to part of loop */
A68_331  HZEATRN;  /* avoid structure result */
A68_VC  IZEATRN;  /* avoid structure result */
A68_186  JZEATRN;  /* avoid structure result */
A68_197  KZEATRN;  /* collateral clause result */
A68_197 * LZEATRN;  /* YIELD */
A68_199  MZEATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NZEATRN;  /* avoid structure result */
A68_VC  OZEATRN_tagname;
A68_185  PZEATRN;  /* avoid structure result */
A68_185  QZEATRN_range;
A68_198  RZEATRN;  /* collateral clause result */
A68_198 * SZEATRN;  /* YIELD */
A68_199  TZEATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UZEATRN;  /* avoid structure result */
A68_VC  VZEATRN_name;
A68_VC  WZEATRN;  /* avoid structure result */
A68_VC  XZEATRN_chars;
A68_196  YZEATRN;  /* collateral clause result */
A68_196 * ZZEATRN;  /* YIELD */
A68_199  AAFATRN;  /* OPERATORS - mode -> union mode */
A68_46  DAFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_199  EAFATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_typebody);
 /* line 1568: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &NYEATRN );
switch ( ((NYEATRN.Token+1)-CFDATRN_typetagtok) )
{ 
case 1: 
 /* line 1569: */
A_CALLPROC(NL(YVDATRN_get_type),( &PYEATRN),( &PYEATRN,(NL(YVDATRN_get_type)).nonlocals));
RYEATRN = XFAATRN_maketypetag(PYEATRN) ;
OYEATRN = A_UNITE(QYEATRN,mode3,3,RYEATRN);
break;
case 2: 
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &SYEATRN );
SYEATRN;
 /* line 1570: */
TYEATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1571: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UYEATRN );
UYEATRN;
 /* line 1572: */
A_CLOSURE( WYEATRN_generator, XYEATRN_generator, YYEATRN_generator );
(( YYEATRN_generator * ) ( WYEATRN_generator.nonlocals )) -> TYEATRN_size = TYEATRN_size;
A_CALLPROC(WYEATRN_generator,(A68_FALSE, &BZEATRN),(A68_FALSE, &BZEATRN,(WYEATRN_generator).nonlocals));
CZEATRN_alts = BZEATRN;
 /* line 1573: */
 /* line 1574: */
 /* line 1575: */
 /* line 1576: */
GZEATRN = CZEATRN_alts.upb;
for ( FZEATRN_count = 1;
FZEATRN_count <= GZEATRN;
FZEATRN_count += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &HZEATRN );
HZEATRN;
 /* line 1577: */
INDATRN_inassemid( NL(Reader), NL(Msg), &IZEATRN );
DZEATRN_altname = IZEATRN;
 /* line 1578: */
A_CALLPROC(NL(YVDATRN_get_type),( &JZEATRN),( &JZEATRN,(NL(YVDATRN_get_type)).nonlocals));
EZEATRN_assoc = JZEATRN;
 /* line 1579: */
KZEATRN.Altname = DZEATRN_altname;
 /* line 1580: */
KZEATRN.Assoc = EZEATRN_assoc;
LZEATRN = (&A_VINDEX(CZEATRN_alts,FZEATRN_count)) ;
(*LZEATRN) = KZEATRN;
}
 /* line 1581: */
 /* line 1582: */
 /* line 1583: */
OYEATRN = A_UNITE(MZEATRN,mode1,1,CZEATRN_alts);
} 
break;
case 3: 
{ 
INDATRN_inassemid( NL(Reader), NL(Msg), &NZEATRN );
OZEATRN_tagname = NZEATRN;
 /* line 1584: */
A_CALLPROC(NL(NVDATRN_get_range),( &PZEATRN),( &PZEATRN,(NL(NVDATRN_get_range)).nonlocals));
QZEATRN_range = PZEATRN;
 /* line 1585: */
RZEATRN.Tagname = OZEATRN_tagname;
 /* line 1586: */
RZEATRN.Range = QZEATRN_range;
 /* line 1587: */
SZEATRN = A_HEAP(A68_198 ) ;
(*SZEATRN) = RZEATRN ;
OYEATRN = A_UNITE(TZEATRN,mode2,2,SZEATRN);
} 
break;
case 4: 
{ 
INDATRN_inassemid( NL(Reader), NL(Msg), &UZEATRN );
VZEATRN_name = UZEATRN;
 /* line 1588: */
INDATRN_inassemid( NL(Reader), NL(Msg), &WZEATRN );
XZEATRN_chars = WZEATRN;
 /* line 1589: */
YZEATRN.Tagname = VZEATRN_name;
 /* line 1590: */
YZEATRN.Chars = XZEATRN_chars;
 /* line 1591: */
ZZEATRN = A_HEAP(A68_196 ) ;
(*ZZEATRN) = YZEATRN ;
OYEATRN = A_UNITE(AAFATRN,mode4,4,ZZEATRN);
} 
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(DAFATRN,CAFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(DAFATRN,CAFATRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 1592: */
OYEATRN = EAFATRN;
break;
} 
A_PROC_EXIT(get_typebody);
*ReturnedValue = (OYEATRN);
return;
} 
#undef NL

A_STATIC A68_168 * GAFATRN_get_usage(void *NonLocals)
#define NL(x) (((HAFATRN_get_usage *)NonLocals)->x)
{ 
A68_331  IAFATRN;  /* avoid structure result */
A68_331  JAFATRN_tok;
A68_168 * KAFATRN;  /* clause result */
A68_INT  LAFATRN_contextno;
A68_INT  MAFATRN_closureno;
A68_INT  NAFATRN_libv_spec;
A68_INT  OAFATRN_libv_body;
A68_BOOL  PAFATRN_import;
A68_BOOL  QAFATRN_export;
A68_168  RAFATRN;  /* collateral clause result */
A68_168 * SAFATRN;  /* YIELD */
A_PROC_ENTRY(get_usage);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &IAFATRN );
JAFATRN_tok = IAFATRN;
 /* line 1598: */
 /* line 1599: */
 /* line 1600: */
if ( JAFATRN_tok.Nil )
{ 
KAFATRN = CBAATRN_nilusage;
} 
else
{ 
LAFATRN_contextno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1601: */
MAFATRN_closureno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1602: */
NAFATRN_libv_spec = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1603: */
OAFATRN_libv_body = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1604: */
PAFATRN_import = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1605: */
QAFATRN_export = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1606: */
RAFATRN.Contextno = LAFATRN_contextno;
RAFATRN.Closureno = MAFATRN_closureno;
RAFATRN.Libv_spec = NAFATRN_libv_spec;
RAFATRN.Libv_body = OAFATRN_libv_body;
 /* line 1607: */
RAFATRN.Import = PAFATRN_import;
 /* line 1608: */
RAFATRN.Export = QAFATRN_export;
 /* line 1609: */
SAFATRN = A_HEAP(A68_168 ) ;
(*SAFATRN) = RAFATRN ;
KAFATRN = SAFATRN;
} 
} 
A_PROC_EXIT(get_usage);
return( KAFATRN );
} 
#undef NL

A_STATIC A68_167 * UAFATRN_get_attrdec(void *NonLocals)
#define NL(x) (((VAFATRN_get_attrdec *)NonLocals)->x)
{ 
A68_331  WAFATRN;  /* avoid structure result */
A68_331  XAFATRN_tok;
A68_167 * YAFATRN;  /* clause result */
A68_INT  ZAFATRN_sort;
A68_VC  ABFATRN;  /* avoid structure result */
A68_VC  BBFATRN_attrname;
A68_161  CBFATRN;  /* avoid structure result */
A68_161  DBFATRN_attr;
A68_168 * EBFATRN_usage;
A68_167  FBFATRN;  /* collateral clause result */
A68_167 * GBFATRN;  /* YIELD */
A_PROC_ENTRY(get_attrdec);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &WAFATRN );
XAFATRN_tok = WAFATRN;
 /* line 1613: */
 /* line 1614: */
 /* line 1615: */
if ( XAFATRN_tok.Nil )
{ 
YAFATRN = UAAATRN_nilattrdec;
} 
else
{ 
ZAFATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1616: */
INDATRN_inassemid( NL(Reader), NL(Msg), &ABFATRN );
BBFATRN_attrname = ABFATRN;
 /* line 1617: */
A_CALLPROC(NL(XQDATRN_get_attr),( &CBFATRN),( &CBFATRN,(NL(XQDATRN_get_attr)).nonlocals));
DBFATRN_attr = CBFATRN;
 /* line 1618: */
EBFATRN_usage = A_CALLPROC(NL(FAFATRN_get_usage),(),((NL(FAFATRN_get_usage)).nonlocals));
 /* line 1619: */
FBFATRN.Sort = ZAFATRN_sort;
FBFATRN.Attrname = BBFATRN_attrname;
FBFATRN.Value = DBFATRN_attr;
 /* line 1620: */
FBFATRN.Usage = EBFATRN_usage;
 /* line 1621: */
GBFATRN = A_HEAP(A68_167 ) ;
(*GBFATRN) = FBFATRN ;
YAFATRN = GBFATRN;
} 
} 
A_PROC_EXIT(get_attrdec);
return( YAFATRN );
} 
#undef NL

A_STATIC A68_183 * IBFATRN_get_intdec(void *NonLocals)
#define NL(x) (((JBFATRN_get_intdec *)NonLocals)->x)
{ 
A68_331  KBFATRN;  /* avoid structure result */
A68_331  LBFATRN_tok;
A68_183 * MBFATRN;  /* clause result */
A68_INT  NBFATRN_sort;
A68_VC  OBFATRN;  /* avoid structure result */
A68_VC  PBFATRN_intname;
A68_161  QBFATRN;  /* avoid structure result */
A68_161  RBFATRN_attr;
A68_184  SBFATRN;  /* avoid structure result */
A68_184  TBFATRN_value;
A68_168 * UBFATRN_usage;
A68_183  VBFATRN;  /* collateral clause result */
A68_183 * WBFATRN;  /* YIELD */
A_PROC_ENTRY(get_intdec);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &KBFATRN );
LBFATRN_tok = KBFATRN;
 /* line 1625: */
 /* line 1626: */
 /* line 1627: */
if ( LBFATRN_tok.Nil )
{ 
MBFATRN = VAAATRN_nilintdec;
} 
else
{ 
NBFATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1628: */
INDATRN_inassemid( NL(Reader), NL(Msg), &OBFATRN );
PBFATRN_intname = OBFATRN;
 /* line 1629: */
A_CALLPROC(NL(XQDATRN_get_attr),( &QBFATRN),( &QBFATRN,(NL(XQDATRN_get_attr)).nonlocals));
RBFATRN_attr = QBFATRN;
 /* line 1630: */
A_CALLPROC(NL(ESDATRN_get_formularange),( &SBFATRN),( &SBFATRN,(NL(ESDATRN_get_formularange)).nonlocals));
TBFATRN_value = SBFATRN;
 /* line 1631: */
UBFATRN_usage = A_CALLPROC(NL(FAFATRN_get_usage),(),((NL(FAFATRN_get_usage)).nonlocals));
 /* line 1632: */
VBFATRN.Sort = NBFATRN_sort;
VBFATRN.Intname = PBFATRN_intname;
VBFATRN.Attr = RBFATRN_attr;
VBFATRN.Value = TBFATRN_value;
 /* line 1633: */
VBFATRN.Usage = UBFATRN_usage;
 /* line 1634: */
WBFATRN = A_HEAP(A68_183 ) ;
(*WBFATRN) = VBFATRN ;
MBFATRN = WBFATRN;
} 
} 
A_PROC_EXIT(get_intdec);
return( MBFATRN );
} 
#undef NL

A_STATIC A68_201 * YBFATRN_get_typedec(void *NonLocals)
#define NL(x) (((ZBFATRN_get_typedec *)NonLocals)->x)
{ 
A68_331  ACFATRN;  /* avoid structure result */
A68_331  BCFATRN_tok;
A68_201 * CCFATRN;  /* clause result */
A68_INT  DCFATRN_sort;
A68_VC  ECFATRN;  /* avoid structure result */
A68_VC  FCFATRN_typename;
A68_161  GCFATRN;  /* avoid structure result */
A68_161  HCFATRN_attr;
A68_199  ICFATRN;  /* avoid structure result */
A68_199  JCFATRN_body;
A68_168 * KCFATRN_usage;
A68_201  LCFATRN;  /* collateral clause result */
A68_201 * MCFATRN;  /* YIELD */
A_PROC_ENTRY(get_typedec);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &ACFATRN );
BCFATRN_tok = ACFATRN;
 /* line 1638: */
 /* line 1639: */
 /* line 1640: */
if ( BCFATRN_tok.Nil )
{ 
CCFATRN = WAAATRN_niltypedec;
} 
else
{ 
DCFATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1641: */
INDATRN_inassemid( NL(Reader), NL(Msg), &ECFATRN );
FCFATRN_typename = ECFATRN;
 /* line 1642: */
A_CALLPROC(NL(XQDATRN_get_attr),( &GCFATRN),( &GCFATRN,(NL(XQDATRN_get_attr)).nonlocals));
HCFATRN_attr = GCFATRN;
 /* line 1643: */
A_CALLPROC(NL(KYEATRN_get_typebody),( &ICFATRN),( &ICFATRN,(NL(KYEATRN_get_typebody)).nonlocals));
JCFATRN_body = ICFATRN;
 /* line 1644: */
KCFATRN_usage = A_CALLPROC(NL(FAFATRN_get_usage),(),((NL(FAFATRN_get_usage)).nonlocals));
 /* line 1645: */
LCFATRN.Sort = DCFATRN_sort;
LCFATRN.Typename = FCFATRN_typename;
LCFATRN.Attr = HCFATRN_attr;
LCFATRN.Body = JCFATRN_body;
 /* line 1646: */
LCFATRN.Usage = KCFATRN_usage;
 /* line 1647: */
MCFATRN = A_HEAP(A68_201 ) ;
(*MCFATRN) = LCFATRN ;
CCFATRN = MCFATRN;
} 
} 
A_PROC_EXIT(get_typedec);
return( CCFATRN );
} 
#undef NL

A_STATIC A68_207 * OCFATRN_get_constdec(void *NonLocals)
#define NL(x) (((PCFATRN_get_constdec *)NonLocals)->x)
{ 
A68_331  QCFATRN;  /* avoid structure result */
A68_331  RCFATRN_tok;
A68_207 * SCFATRN;  /* clause result */
A68_INT  TCFATRN_sort;
A68_VC  UCFATRN;  /* avoid structure result */
A68_VC  VCFATRN_constname;
A68_161  WCFATRN;  /* avoid structure result */
A68_161  XCFATRN_attr;
A68_208  YCFATRN;  /* avoid structure result */
A68_208  ZCFATRN_value;
A68_168 * ADFATRN_usage;
A68_207  BDFATRN;  /* collateral clause result */
A68_207 * CDFATRN;  /* YIELD */
A_PROC_ENTRY(get_constdec);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &QCFATRN );
RCFATRN_tok = QCFATRN;
 /* line 1651: */
 /* line 1652: */
 /* line 1653: */
if ( RCFATRN_tok.Nil )
{ 
SCFATRN = XAAATRN_nilconstdec;
} 
else
{ 
TCFATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1654: */
INDATRN_inassemid( NL(Reader), NL(Msg), &UCFATRN );
VCFATRN_constname = UCFATRN;
 /* line 1655: */
A_CALLPROC(NL(XQDATRN_get_attr),( &WCFATRN),( &WCFATRN,(NL(XQDATRN_get_attr)).nonlocals));
XCFATRN_attr = WCFATRN;
 /* line 1656: */
A_CALLPROC(NL(ZXDATRN_get_unit),( &YCFATRN),( &YCFATRN,(NL(ZXDATRN_get_unit)).nonlocals));
ZCFATRN_value = YCFATRN;
 /* line 1657: */
ADFATRN_usage = A_CALLPROC(NL(FAFATRN_get_usage),(),((NL(FAFATRN_get_usage)).nonlocals));
 /* line 1658: */
BDFATRN.Sort = TCFATRN_sort;
BDFATRN.Constname = VCFATRN_constname;
BDFATRN.Attr = XCFATRN_attr;
BDFATRN.Value = ZCFATRN_value;
 /* line 1659: */
BDFATRN.Usage = ADFATRN_usage;
 /* line 1660: */
CDFATRN = A_HEAP(A68_207 ) ;
(*CDFATRN) = BDFATRN ;
SCFATRN = CDFATRN;
} 
} 
A_PROC_EXIT(get_constdec);
return( SCFATRN );
} 
#undef NL

A_STATIC A68_284 * EDFATRN_get_fndec(void *NonLocals)
#define NL(x) (((FDFATRN_get_fndec *)NonLocals)->x)
{ 
A68_331  GDFATRN;  /* avoid structure result */
A68_331  HDFATRN_tok;
A68_284 * IDFATRN;  /* clause result */
A68_INT  JDFATRN_sort;
A68_BOOL  KDFATRN_macro;
A68_VC  LDFATRN;  /* avoid structure result */
A68_VC  MDFATRN_fnname;
A68_331  NDFATRN;  /* avoid structure result */
A68_INT  ODFATRN_macspecno;
A68_331  PDFATRN;  /* avoid structure result */
A68_285  QDFATRN;  /* clause result */
A68_412  SDFATRN_generator;   /* proc value of non-global proc */
A68_285  XDFATRN;  /* avoid structure result */
A68_285  YDFATRN_ms;
A68_269  ZDFATRN_spec;
A68_282 * AEFATRN_m;
A68_INT  BEFATRN;  /* forall loop counter */
A68_331  CEFATRN;  /* avoid structure result */
A68_INT  DEFATRN_msort;
A68_331  EEFATRN;  /* avoid structure result */
A68_INT  FEFATRN_ihold;
A68_269  GEFATRN;  /* avoid structure result */
A68_282  HEFATRN;  /* collateral clause result */
A68_285  IEFATRN_macspecs;
A68_161  JEFATRN;  /* avoid structure result */
A68_161  KEFATRN_attr;
A68_249 * LEFATRN_inputs;
A68_249 * MEFATRN_outputs;
A68_331  NEFATRN;  /* avoid structure result */
A68_INT  OEFATRN_size;
A68_331  PEFATRN;  /* avoid structure result */
A68_413  REFATRN_generator;   /* proc value of non-global proc */
A68_286  WEFATRN;  /* avoid structure result */
A68_286  XEFATRN_nametypes;
A68_INT  YEFATRN_i;
A68_INT  ZEFATRN;  /* to part of loop */
A68_331  AFFATRN;  /* avoid structure result */
A68_VC  BFFATRN;  /* avoid structure result */
A68_VC  CFFATRN_name;
A68_186  DFFATRN;  /* avoid structure result */
A68_186  EFFATRN_type;
A68_161  FFFATRN;  /* avoid structure result */
A68_161  GFFATRN_nattr;
A68_283  HFFATRN;  /* collateral clause result */
A68_283 * IFFATRN;  /* YIELD */
A68_280  JFFATRN;  /* avoid structure result */
A68_280  KFFATRN_fnbody;
A68_168 * LFFATRN_usage;
A68_284  MFFATRN;  /* collateral clause result */
A68_284 * NFFATRN;  /* YIELD */
A_PROC_ENTRY(get_fndec);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &GDFATRN );
HDFATRN_tok = GDFATRN;
 /* line 1667: */
 /* line 1668: */
 /* line 1669: */
if ( HDFATRN_tok.Nil )
{ 
IDFATRN = YAAATRN_nilfndec;
} 
else
{ 
JDFATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1670: */
KDFATRN_macro = OLDATRN_inassembool(NL(Reader), NL(Msg));
 /* line 1671: */
INDATRN_inassemid( NL(Reader), NL(Msg), &LDFATRN );
MDFATRN_fnname = LDFATRN;
 /* line 1672: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &NDFATRN );
NDFATRN;
 /* line 1673: */
ODFATRN_macspecno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1674: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &PDFATRN );
PDFATRN;
 /* line 1675: */
 /* line 1676: */
 /* line 1677: */
 /* line 1678: */
if ( (ODFATRN_macspecno==(-1)) )
{ 
QDFATRN = FBAATRN_nilmacspecs;
} 
else
{ 
A_CLOSURE( SDFATRN_generator, TDFATRN_generator, UDFATRN_generator );
(( UDFATRN_generator * ) ( SDFATRN_generator.nonlocals )) -> ODFATRN_macspecno = ODFATRN_macspecno;
A_CALLPROC(SDFATRN_generator,(A68_FALSE, &XDFATRN),(A68_FALSE, &XDFATRN,(SDFATRN_generator).nonlocals));
YDFATRN_ms = XDFATRN;
 /* line 1679: */
 /* line 1680: */
 /* line 1681: */
BEFATRN = YDFATRN_ms.upb -1;
AEFATRN_m = YDFATRN_ms.data;
for (;BEFATRN-- >= 0;
(AEFATRN_m++
) )
{
SLDATRN_inassemtok( NL(Reader), NL(Msg), &CEFATRN );
CEFATRN;
 /* line 1682: */
DEFATRN_msort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1683: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &EEFATRN );
FEFATRN_ihold = EEFATRN.Token;
 /* line 1684: */
A_CALLPROC(NL(RKEATRN_get_macspecitem),(FEFATRN_ihold, &GEFATRN),(FEFATRN_ihold, &GEFATRN,(NL(RKEATRN_get_macspecitem)).nonlocals));
ZDFATRN_spec = GEFATRN;
 /* line 1685: */
HEFATRN.Sort = DEFATRN_msort;
 /* line 1686: */
HEFATRN.Spec = ZDFATRN_spec;
(*AEFATRN_m) = HEFATRN;
}
 /* line 1687: */
 /* line 1688: */
QDFATRN = YDFATRN_ms;
} 
IEFATRN_macspecs = QDFATRN;
 /* line 1689: */
A_CALLPROC(NL(XQDATRN_get_attr),( &JEFATRN),( &JEFATRN,(NL(XQDATRN_get_attr)).nonlocals));
KEFATRN_attr = JEFATRN;
 /* line 1690: */
LEFATRN_inputs = A_CALLPROC(NL(ZMEATRN_get_names),(),((NL(ZMEATRN_get_names)).nonlocals));
 /* line 1691: */
MEFATRN_outputs = A_CALLPROC(NL(ZMEATRN_get_names),(),((NL(ZMEATRN_get_names)).nonlocals));
 /* line 1692: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &NEFATRN );
NEFATRN;
 /* line 1693: */
OEFATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1694: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &PEFATRN );
PEFATRN;
 /* line 1695: */
A_CLOSURE( REFATRN_generator, SEFATRN_generator, TEFATRN_generator );
(( TEFATRN_generator * ) ( REFATRN_generator.nonlocals )) -> OEFATRN_size = OEFATRN_size;
A_CALLPROC(REFATRN_generator,(A68_FALSE, &WEFATRN),(A68_FALSE, &WEFATRN,(REFATRN_generator).nonlocals));
XEFATRN_nametypes = WEFATRN;
 /* line 1696: */
 /* line 1697: */
ZEFATRN = XEFATRN_nametypes.upb;
for ( YEFATRN_i = 1;
YEFATRN_i <= ZEFATRN;
YEFATRN_i += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &AFFATRN );
AFFATRN;
 /* line 1698: */
INDATRN_inassemid( NL(Reader), NL(Msg), &BFFATRN );
CFFATRN_name = BFFATRN;
 /* line 1699: */
A_CALLPROC(NL(YVDATRN_get_type),( &DFFATRN),( &DFFATRN,(NL(YVDATRN_get_type)).nonlocals));
EFFATRN_type = DFFATRN;
 /* line 1700: */
A_CALLPROC(NL(XQDATRN_get_attr),( &FFFATRN),( &FFFATRN,(NL(XQDATRN_get_attr)).nonlocals));
GFFATRN_nattr = FFFATRN;
 /* line 1701: */
HFFATRN.Name = CFFATRN_name;
HFFATRN.Type = EFFATRN_type;
 /* line 1702: */
HFFATRN.Attr = GFFATRN_nattr;
IFFATRN = (&A_VINDEX(XEFATRN_nametypes,YEFATRN_i)) ;
(*IFFATRN) = HFFATRN;
}
 /* line 1703: */
A_CALLPROC(NL(PUEATRN_get_fnbody),( &JFFATRN),( &JFFATRN,(NL(PUEATRN_get_fnbody)).nonlocals));
KFFATRN_fnbody = JFFATRN;
 /* line 1704: */
LFFATRN_usage = A_CALLPROC(NL(FAFATRN_get_usage),(),((NL(FAFATRN_get_usage)).nonlocals));
 /* line 1705: */
MFFATRN.Sort = JDFATRN_sort;
MFFATRN.Macro = KDFATRN_macro;
MFFATRN.Fnname = MDFATRN_fnname;
MFFATRN.Macspecs = IEFATRN_macspecs;
 /* line 1706: */
MFFATRN.Attr = KEFATRN_attr;
MFFATRN.Inputs = LEFATRN_inputs;
MFFATRN.Outputs = MEFATRN_outputs;
MFFATRN.Nametypes = XEFATRN_nametypes;
MFFATRN.Fnbody = KFFATRN_fnbody;
 /* line 1707: */
MFFATRN.Usage = LFFATRN_usage;
 /* line 1708: */
NFFATRN = A_HEAP(A68_284 ) ;
(*NFFATRN) = MFFATRN ;
IDFATRN = NFFATRN;
} 
} 
A_PROC_EXIT(get_fndec);
return( IDFATRN );
} 
#undef NL

A_STATIC A68_287 * PFFATRN_get_environ(void *NonLocals)
#define NL(x) (((QFFATRN_get_environ *)NonLocals)->x)
{ 
A68_331  RFFATRN;  /* avoid structure result */
A68_331  SFFATRN;  /* avoid structure result */
A68_INT  TFFATRN_size;
A68_331  UFFATRN;  /* avoid structure result */
A68_415  WFFATRN_generator;   /* proc value of non-global proc */
A68_288  BGFATRN;  /* avoid structure result */
A68_288  CGFATRN_attrs;
A68_INT  DGFATRN_i;
A68_INT  EGFATRN;  /* to part of loop */
A68_167 ** FGFATRN;  /* YIELD */
A68_331  GGFATRN;  /* avoid structure result */
A68_331  HGFATRN;  /* avoid structure result */
A68_416  JGFATRN_generator;   /* proc value of non-global proc */
A68_289  OGFATRN;  /* avoid structure result */
A68_289  PGFATRN_ints;
A68_INT  QGFATRN_i;
A68_INT  RGFATRN;  /* to part of loop */
A68_183 ** SGFATRN;  /* YIELD */
A68_331  TGFATRN;  /* avoid structure result */
A68_331  UGFATRN;  /* avoid structure result */
A68_417  WGFATRN_generator;   /* proc value of non-global proc */
A68_290  BHFATRN;  /* avoid structure result */
A68_290  CHFATRN_types;
A68_INT  DHFATRN_i;
A68_INT  EHFATRN;  /* to part of loop */
A68_201 ** FHFATRN;  /* YIELD */
A68_331  GHFATRN;  /* avoid structure result */
A68_331  HHFATRN;  /* avoid structure result */
A68_418  JHFATRN_generator;   /* proc value of non-global proc */
A68_291  OHFATRN;  /* avoid structure result */
A68_291  PHFATRN_consts;
A68_INT  QHFATRN_i;
A68_INT  RHFATRN;  /* to part of loop */
A68_207 ** SHFATRN;  /* YIELD */
A68_331  THFATRN;  /* avoid structure result */
A68_331  UHFATRN;  /* avoid structure result */
A68_419  WHFATRN_generator;   /* proc value of non-global proc */
A68_292  BIFATRN;  /* avoid structure result */
A68_292  CIFATRN_fns;
A68_INT  DIFATRN_i;
A68_INT  EIFATRN;  /* to part of loop */
A68_284 ** FIFATRN;  /* YIELD */
A68_287  GIFATRN;  /* collateral clause result */
A68_287 * HIFATRN;  /* clause result */
A68_287 * IIFATRN;  /* YIELD */
A_PROC_ENTRY(get_environ);
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &RFFATRN );
RFFATRN;
 /* line 1713: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &SFFATRN );
SFFATRN;
 /* line 1714: */
TFFATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1715: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UFFATRN );
UFFATRN;
 /* line 1716: */
A_CLOSURE( WFFATRN_generator, XFFATRN_generator, YFFATRN_generator );
(( YFFATRN_generator * ) ( WFFATRN_generator.nonlocals )) -> TFFATRN_size = (&TFFATRN_size);
A_CALLPROC(WFFATRN_generator,(A68_FALSE, &BGFATRN),(A68_FALSE, &BGFATRN,(WFFATRN_generator).nonlocals));
CGFATRN_attrs = BGFATRN;
 /* line 1717: */
EGFATRN = CGFATRN_attrs.upb;
for ( DGFATRN_i = 1;
DGFATRN_i <= EGFATRN;
DGFATRN_i += 1 )
{ 
FGFATRN = (&A_VINDEX(CGFATRN_attrs,DGFATRN_i)) ;
(*FGFATRN) = A_CALLPROC(NL(TAFATRN_get_attrdec),(),((NL(TAFATRN_get_attrdec)).nonlocals));
}
 /* line 1718: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &GGFATRN );
GGFATRN;
 /* line 1719: */
TFFATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1720: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &HGFATRN );
HGFATRN;
 /* line 1721: */
A_CLOSURE( JGFATRN_generator, KGFATRN_generator, LGFATRN_generator );
(( LGFATRN_generator * ) ( JGFATRN_generator.nonlocals )) -> TFFATRN_size = (&TFFATRN_size);
A_CALLPROC(JGFATRN_generator,(A68_FALSE, &OGFATRN),(A68_FALSE, &OGFATRN,(JGFATRN_generator).nonlocals));
PGFATRN_ints = OGFATRN;
 /* line 1722: */
RGFATRN = PGFATRN_ints.upb;
for ( QGFATRN_i = 1;
QGFATRN_i <= RGFATRN;
QGFATRN_i += 1 )
{ 
SGFATRN = (&A_VINDEX(PGFATRN_ints,QGFATRN_i)) ;
(*SGFATRN) = A_CALLPROC(NL(HBFATRN_get_intdec),(),((NL(HBFATRN_get_intdec)).nonlocals));
}
 /* line 1723: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &TGFATRN );
TGFATRN;
 /* line 1724: */
TFFATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1725: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UGFATRN );
UGFATRN;
 /* line 1726: */
A_CLOSURE( WGFATRN_generator, XGFATRN_generator, YGFATRN_generator );
(( YGFATRN_generator * ) ( WGFATRN_generator.nonlocals )) -> TFFATRN_size = (&TFFATRN_size);
A_CALLPROC(WGFATRN_generator,(A68_FALSE, &BHFATRN),(A68_FALSE, &BHFATRN,(WGFATRN_generator).nonlocals));
CHFATRN_types = BHFATRN;
 /* line 1727: */
EHFATRN = CHFATRN_types.upb;
for ( DHFATRN_i = 1;
DHFATRN_i <= EHFATRN;
DHFATRN_i += 1 )
{ 
FHFATRN = (&A_VINDEX(CHFATRN_types,DHFATRN_i)) ;
(*FHFATRN) = A_CALLPROC(NL(XBFATRN_get_typedec),(),((NL(XBFATRN_get_typedec)).nonlocals));
}
 /* line 1728: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &GHFATRN );
GHFATRN;
 /* line 1729: */
TFFATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1730: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &HHFATRN );
HHFATRN;
 /* line 1731: */
A_CLOSURE( JHFATRN_generator, KHFATRN_generator, LHFATRN_generator );
(( LHFATRN_generator * ) ( JHFATRN_generator.nonlocals )) -> TFFATRN_size = (&TFFATRN_size);
A_CALLPROC(JHFATRN_generator,(A68_FALSE, &OHFATRN),(A68_FALSE, &OHFATRN,(JHFATRN_generator).nonlocals));
PHFATRN_consts = OHFATRN;
 /* line 1732: */
RHFATRN = PHFATRN_consts.upb;
for ( QHFATRN_i = 1;
QHFATRN_i <= RHFATRN;
QHFATRN_i += 1 )
{ 
SHFATRN = (&A_VINDEX(PHFATRN_consts,QHFATRN_i)) ;
(*SHFATRN) = A_CALLPROC(NL(NCFATRN_get_constdec),(),((NL(NCFATRN_get_constdec)).nonlocals));
}
 /* line 1733: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &THFATRN );
THFATRN;
 /* line 1734: */
TFFATRN_size = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1735: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UHFATRN );
UHFATRN;
 /* line 1736: */
A_CLOSURE( WHFATRN_generator, XHFATRN_generator, YHFATRN_generator );
(( YHFATRN_generator * ) ( WHFATRN_generator.nonlocals )) -> TFFATRN_size = (&TFFATRN_size);
A_CALLPROC(WHFATRN_generator,(A68_FALSE, &BIFATRN),(A68_FALSE, &BIFATRN,(WHFATRN_generator).nonlocals));
CIFATRN_fns = BIFATRN;
 /* line 1737: */
EIFATRN = CIFATRN_fns.upb;
for ( DIFATRN_i = 1;
DIFATRN_i <= EIFATRN;
DIFATRN_i += 1 )
{ 
FIFATRN = (&A_VINDEX(CIFATRN_fns,DIFATRN_i)) ;
(*FIFATRN) = A_CALLPROC(NL(DDFATRN_get_fndec),(),((NL(DDFATRN_get_fndec)).nonlocals));
}
 /* line 1738: */
GIFATRN.Attrs = CGFATRN_attrs;
GIFATRN.Ints = PGFATRN_ints;
GIFATRN.Types = CHFATRN_types;
GIFATRN.Consts = PHFATRN_consts;
 /* line 1739: */
GIFATRN.Fns = CIFATRN_fns;
IIFATRN = A_HEAP(A68_287 ) ;
(*IIFATRN) = GIFATRN ;
HIFATRN = IIFATRN;
} 
A_PROC_EXIT(get_environ);
return( HIFATRN );
} 
#undef NL

A_STATIC A68_297 * KIFATRN_get_closure(void *NonLocals)
#define NL(x) (((LIFATRN_get_closure *)NonLocals)->x)
{ 
A68_331  MIFATRN;  /* avoid structure result */
A68_297 * NIFATRN_closure;
A68_331  OIFATRN;  /* avoid structure result */
A68_INT  PIFATRN_n_outers;
A68_331  QIFATRN;  /* avoid structure result */
A68_294 ** RIFATRN_ptr;
A68_INT  SIFATRN;  /* to part of loop */
A68_INT  TIFATRN;  /* loop control */
A68_331  UIFATRN;  /* avoid structure result */
A68_INT  VIFATRN_closureno;
A68_INT  WIFATRN_sort;
A68_287 * XIFATRN_env;
A68_293  YIFATRN;  /* collateral clause result */
A68_293 * ZIFATRN;  /* YIELD */
A68_297 * AJFATRN;  /* clause result */
A_PROC_ENTRY(get_closure);
{ 
A_CALLPROC(NL(IPDATRN_get_idstable),(),((NL(IPDATRN_get_idstable)).nonlocals));
 /* line 1744: */
CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1745: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &MIFATRN );
MIFATRN;
 /* line 1746: */
NIFATRN_closure = AOCATRN_make_closure();
 /* line 1747: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &OIFATRN );
OIFATRN;
 /* line 1748: */
PIFATRN_n_outers = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1749: */
SLDATRN_inassemtok( NL(Reader), NL(Msg), &QIFATRN );
QIFATRN;
 /* line 1750: */
RIFATRN_ptr = (&(NIFATRN_closure->Outers));
 /* line 1751: */
 /* line 1752: */
SIFATRN = PIFATRN_n_outers;
for ( TIFATRN = 1;
TIFATRN <= SIFATRN;
TIFATRN += 1 )
{ 
SLDATRN_inassemtok( NL(Reader), NL(Msg), &UIFATRN );
UIFATRN;
 /* line 1753: */
VIFATRN_closureno = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1754: */
WIFATRN_sort = CLDATRN_inassemint(NL(Reader), NL(Msg));
 /* line 1755: */
XIFATRN_env = A_CALLPROC(NL(OFFATRN_get_environ),(),((NL(OFFATRN_get_environ)).nonlocals));
 /* line 1756: */
for ( ;; )
{ 
 /* line 1757: */
if ( !((ZKCATRN_maxclosureno(NIFATRN_closure)<VIFATRN_closureno)) ) break;
GMCATRN_new_outers(NIFATRN_closure);
}
 /* line 1758: */
(*RIFATRN_ptr) = ELCATRN_find_outers(VIFATRN_closureno, NIFATRN_closure, NL(Msg));
 /* line 1759: */
YIFATRN.Closureno = VIFATRN_closureno;
YIFATRN.Sort = WIFATRN_sort;
YIFATRN.Environ = XIFATRN_env;
ZIFATRN = (&((*RIFATRN_ptr)->Outer)) ;
(*ZIFATRN) = YIFATRN;
 /* line 1760: */
 /* line 1761: */
RIFATRN_ptr = (&((*RIFATRN_ptr)->Rest));
}
 /* line 1762: */
 /* line 1763: */
AJFATRN = NIFATRN_closure;
} 
A_PROC_EXIT(get_closure);
return( AJFATRN );
} 
#undef NL

A_STATIC A68_VOID  EJFATRN_generator(A68_BOOL  CJFATRN_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((FJFATRN_generator *)NonLocals)->x)
{ 
A68_102  GJFATRN;  /* clause result */
A68_102  HJFATRN;  /* OPERATORS - dynamic generator */
{ 
HJFATRN.upb = NL(BJFATRN_head_data_top) ;
( CJFATRN_anonymous? A_VLOC(A68_VC ,HJFATRN): A_VHEAP(A68_VC ,HJFATRN) );
GJFATRN = HJFATRN;
} 
*ReturnedValue = (GJFATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YLFATRN_pt_idstable(void *NonLocals)
#define NL(x) (((ZLFATRN_pt_idstable *)NonLocals)->x)
{ 
A68_INT  AMFATRN_n;
A68_159 * BMFATRN_ptr;
A68_159 ** CMFATRN_ids;
A68_INT  DMFATRN;  /* forall loop counter */
A_PROC_ENTRY(pt_idstable);
if ( NL(Writer).Write_idstable )
{ 
AKFATRN_outassemint(BLAATRN_idstable.upb, NL(Writer), NL(Msg));
 /* line 1833: */
AMFATRN_n = 0;
 /* line 1834: */
BMFATRN_ptr = LAAATRN_nilids;
 /* line 1835: */
 /* line 1836: */
DMFATRN = BLAATRN_idstable.upb -1;
CMFATRN_ids = BLAATRN_idstable.data;
for (;DMFATRN-- >= 0;
(CMFATRN_ids++
) )
{
BMFATRN_ptr = (*CMFATRN_ids);
AMFATRN_n = 0;
 /* line 1837: */
for ( ;; )
{ 
 /* line 1838: */
if ( !((BMFATRN_ptr!=LAAATRN_nilids)) ) break;
BMFATRN_ptr = (*(&(BMFATRN_ptr->Rest)));
AMFATRN_n+=1;
}
 /* line 1839: */
AKFATRN_outassemint(AMFATRN_n, NL(Writer), NL(Msg));
 /* line 1840: */
BMFATRN_ptr = (*CMFATRN_ids);
AMFATRN_n = 0;
 /* line 1841: */
for ( ;; )
{ 
 /* line 1842: */
if ( !((BMFATRN_ptr!=LAAATRN_nilids)) ) break;
GKFATRN_outassemstr((*(&(BMFATRN_ptr->Id))), NL(Writer), NL(Msg));
BMFATRN_ptr = (*(&(BMFATRN_ptr->Rest)));
}
 /* line 1843: */
}
 /* line 1844: */
} 
else
{ 
 /* line 1845: */
AKFATRN_outassemint(0, NL(Writer), NL(Msg));
} 
A_PROC_EXIT(pt_idstable);
return;
} 
#undef NL

A_STATIC A68_VOID  GMFATRN_pt_ids(A68_159 * Ids, void *NonLocals)
#define NL(x) (((HMFATRN_pt_ids *)NonLocals)->x)
{ 
A68_INT  IMFATRN_listnumb;
A68_159 * JMFATRN_strings;
A_PROC_ENTRY(pt_ids);
 /* line 1848: */
 /* line 1849: */
{ 
IMFATRN_listnumb = 0;
 /* line 1850: */
JMFATRN_strings = Ids;
 /* line 1851: */
for ( ;; )
{ 
 /* line 1852: */
if ( !((JMFATRN_strings!=LAAATRN_nilids)) ) break;
IMFATRN_listnumb+=1;
 /* line 1853: */
 /* line 1854: */
JMFATRN_strings = (*(&(JMFATRN_strings->Rest)));
}
 /* line 1855: */
JMFATRN_strings = Ids;
 /* line 1856: */
if ( (IMFATRN_listnumb==0) )
{ 
IMFATRN_listnumb = (-1);
} 
 /* line 1857: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1858: */
AKFATRN_outassemint(IMFATRN_listnumb, NL(Writer), NL(Msg));
 /* line 1859: */
NKFATRN_outassemtok(RBDATRN_idtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1860: */
for ( ;; )
{ 
 /* line 1861: */
if ( !((JMFATRN_strings!=LAAATRN_nilids)) ) break;
A_CALLPROC(NL(WLFATRN_outid),((*(&(JMFATRN_strings->Id))), NL(Writer), NL(Msg)),((*(&(JMFATRN_strings->Id))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 1862: */
 /* line 1863: */
JMFATRN_strings = (*(&(JMFATRN_strings->Rest)));
}
 /* line 1864: */
} 
A_PROC_EXIT(pt_ids);
return;
} 
#undef NL

A_STATIC A68_VOID  MMFATRN_pt_attr(A68_161  At, void *NonLocals)
#define NL(x) (((NMFATRN_pt_attr *)NonLocals)->x)
{ 
A68_161  OMFATRN;  /* united object - for case conformity */
A68_162 * PMFATRN_an;
A68_163 * QMFATRN_ad;
A68_164 * RMFATRN_ts;
A68_164 * SMFATRN_astr;
A68_INT  TMFATRN_listnumb;
A68_165 * UMFATRN_ab;
A_PROC_ENTRY(pt_attr);
 /* line 1868: */
 /* line 1869: */
{ 
 /* line 1870: */
OMFATRN = At ;
switch ( OMFATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
PMFATRN_an = (OMFATRN.data.mode1);
{ 
NKFATRN_outassemtok(LFDATRN_attrnametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1871: */
 /* line 1872: */
 /* line 1873: */
AKFATRN_outassemint((*(&(PMFATRN_an->Attrno))), NL(Writer), NL(Msg));
} 
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE159)  */
QMFATRN_ad = (OMFATRN.data.mode2);
{ 
NKFATRN_outassemtok(MFDATRN_attrdatatok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1874: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(QMFATRN_ad->Classname))), NL(Writer), NL(Msg)),((*(&(QMFATRN_ad->Classname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 1875: */
 /* line 1876: */
 /* line 1877: */
A_CALLPROC(NL(FMFATRN_pt_ids),((*(&(QMFATRN_ad->Strings)))),((*(&(QMFATRN_ad->Strings))),(NL(FMFATRN_pt_ids)).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE161,REF MODE164)  */
RMFATRN_ts = (OMFATRN.data.mode3);
{ 
SMFATRN_astr = RMFATRN_ts;
 /* line 1878: */
TMFATRN_listnumb = 0;
 /* line 1879: */
for ( ;; )
{ 
 /* line 1880: */
if ( !((SMFATRN_astr!=DBAATRN_nilattrstr)) ) break;
TMFATRN_listnumb+=1;
 /* line 1881: */
 /* line 1882: */
SMFATRN_astr = (*(&(SMFATRN_astr->Rest)));
}
 /* line 1883: */
SMFATRN_astr = RMFATRN_ts;
 /* line 1884: */
if ( (TMFATRN_listnumb==0) )
{ 
TMFATRN_listnumb = (-1);
} 
 /* line 1885: */
NKFATRN_outassemtok(NFDATRN_attrstrtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1886: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1887: */
AKFATRN_outassemint(TMFATRN_listnumb, NL(Writer), NL(Msg));
 /* line 1888: */
NKFATRN_outassemtok(MGDATRN_attrtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1889: */
for ( ;; )
{ 
 /* line 1890: */
if ( !((SMFATRN_astr!=DBAATRN_nilattrstr)) ) break;
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(SMFATRN_astr->Elem)))),((*(&(SMFATRN_astr->Elem))),(NL(LMFATRN_pt_attr)).nonlocals));
 /* line 1891: */
 /* line 1892: */
SMFATRN_astr = (*(&(SMFATRN_astr->Rest)));
}
 /* line 1893: */
 /* line 1894: */
} 
break;
case 4: /* REF STRUCT(MODE161)  */
UMFATRN_ab = (OMFATRN.data.mode4);
{ 
NKFATRN_outassemtok(OFDATRN_attrbrackettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1895: */
 /* line 1896: */
 /* line 1897: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(UMFATRN_ab->Attr)))),((*(&(UMFATRN_ab->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
} 
break;
case 5: /* REF STRUCT(INT)  */
 /* line 1898: */
 /* line 1899: */
NKFATRN_outassemtok(PFDATRN_attrnull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(pt_attr);
return;
} 
#undef NL

A_STATIC A68_VOID  XMFATRN_pt_formula(A68_170  Int, void *NonLocals)
#define NL(x) (((YMFATRN_pt_formula *)NonLocals)->x)
{ 
A68_170  ZMFATRN;  /* united object - for case conformity */
A68_171 * ANFATRN_i;
A68_172 * BNFATRN_fc;
A68_173 * CNFATRN_fa;
A68_174 * DNFATRN_fn;
A68_175 * ENFATRN_fd;
A68_176 * FNFATRN_fm;
A68_177 * GNFATRN_fc;
A68_178 * HNFATRN_fb;
A68_179 * INFATRN_fm;
A68_180 * JNFATRN_fn;
A68_46  MNFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_formula);
 /* line 1903: */
 /* line 1904: */
{ 
 /* line 1905: */
ZMFATRN = Int ;
switch ( ZMFATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
ANFATRN_i = (ZMFATRN.data.mode1);
 /* line 1906: */
{ 
NKFATRN_outassemtok(VBDATRN_finttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1907: */
AKFATRN_outassemint((*(&(ANFATRN_i->Int))), NL(Writer), NL(Msg));
 /* line 1908: */
 /* line 1909: */
 /* line 1910: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(ANFATRN_i->Text))), NL(Writer), NL(Msg)),((*(&(ANFATRN_i->Text))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
} 
break;
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
BNFATRN_fc = (ZMFATRN.data.mode2);
 /* line 1911: */
{ 
NKFATRN_outassemtok(WBDATRN_fchecktok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1912: */
AKFATRN_outassemint((*(&(BNFATRN_fc->Sort))), NL(Writer), NL(Msg));
 /* line 1913: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(BNFATRN_fc->Test)))),((*(&(BNFATRN_fc->Test))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1914: */
 /* line 1915: */
 /* line 1916: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(BNFATRN_fc->Standard)))),((*(&(BNFATRN_fc->Standard))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 3: /* REF STRUCT(INT)  */
CNFATRN_fa = (ZMFATRN.data.mode3);
 /* line 1917: */
{ 
NKFATRN_outassemtok(XBDATRN_farithtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1918: */
 /* line 1919: */
 /* line 1920: */
AKFATRN_outassemint((*(&(CNFATRN_fa->Nameno))), NL(Writer), NL(Msg));
} 
break;
case 4: /* REF STRUCT(INT)  */
DNFATRN_fn = (ZMFATRN.data.mode4);
 /* line 1921: */
{ 
NKFATRN_outassemtok(UBDATRN_fnametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1922: */
 /* line 1923: */
 /* line 1924: */
AKFATRN_outassemint((*(&(DNFATRN_fn->Intno))), NL(Writer), NL(Msg));
} 
break;
case 5: /* REF STRUCT(MODE170,INT,MODE170)  */
ENFATRN_fd = (ZMFATRN.data.mode5);
 /* line 1925: */
{ 
NKFATRN_outassemtok(YBDATRN_fdoptok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1926: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(ENFATRN_fd->Left)))),((*(&(ENFATRN_fd->Left))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1927: */
AKFATRN_outassemint((*(&(ENFATRN_fd->Sort))), NL(Writer), NL(Msg));
 /* line 1928: */
 /* line 1929: */
 /* line 1930: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(ENFATRN_fd->Right)))),((*(&(ENFATRN_fd->Right))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT,MODE170)  */
FNFATRN_fm = (ZMFATRN.data.mode6);
 /* line 1931: */
{ 
NKFATRN_outassemtok(ZBDATRN_fmoptok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1932: */
AKFATRN_outassemint((*(&(FNFATRN_fm->Sort))), NL(Writer), NL(Msg));
 /* line 1933: */
 /* line 1934: */
 /* line 1935: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(FNFATRN_fm->Right)))),((*(&(FNFATRN_fm->Right))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE170,MODE170,MODE170)  */
GNFATRN_fc = (ZMFATRN.data.mode7);
 /* line 1936: */
{ 
NKFATRN_outassemtok(ACDATRN_fcondtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1937: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(GNFATRN_fc->Cond)))),((*(&(GNFATRN_fc->Cond))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1938: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(GNFATRN_fc->True)))),((*(&(GNFATRN_fc->True))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1939: */
 /* line 1940: */
 /* line 1941: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(GNFATRN_fc->False)))),((*(&(GNFATRN_fc->False))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE170)  */
HNFATRN_fb = (ZMFATRN.data.mode8);
 /* line 1942: */
{ 
NKFATRN_outassemtok(BCDATRN_fbrackettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1943: */
 /* line 1944: */
 /* line 1945: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(HNFATRN_fb->Formula)))),((*(&(HNFATRN_fb->Formula))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT)  */
INFATRN_fm = (ZMFATRN.data.mode9);
 /* line 1946: */
{ 
NKFATRN_outassemtok(CCDATRN_fmacpartok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1947: */
 /* line 1948: */
 /* line 1949: */
AKFATRN_outassemint((*(&(INFATRN_fm->Macparno))), NL(Writer), NL(Msg));
} 
break;
case 10: /* REF STRUCT(INT)  */
JNFATRN_fn = (ZMFATRN.data.mode10);
 /* line 1950: */
 /* line 1951: */
NKFATRN_outassemtok(DCDATRN_fnull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
default: 
 /* line 1952: */
 /* line 1953: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(MNFATRN,LNFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(MNFATRN,LNFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_formula);
return;
} 
#undef NL

A_STATIC A68_VOID  PNFATRN_pt_range(A68_185  Rg, void *NonLocals)
#define NL(x) (((QNFATRN_pt_range *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_range);
 /* line 1956: */
{ 
NKFATRN_outassemtok(ECDATRN_rangetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1957: */
A_CALLPROC(NL(WMFATRN_pt_formula),(Rg.Lwb),(Rg.Lwb,(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1958: */
 /* line 1959: */
A_CALLPROC(NL(WMFATRN_pt_formula),(Rg.Upb),(Rg.Upb,(NL(WMFATRN_pt_formula)).nonlocals));
} 
A_PROC_EXIT(pt_range);
return;
} 
#undef NL

A_STATIC A68_VOID  TNFATRN_pt_formulas(A68_182 * Fs, void *NonLocals)
#define NL(x) (((UNFATRN_pt_formulas *)NonLocals)->x)
{ 
A68_182 * VNFATRN_formulas;
A_PROC_ENTRY(pt_formulas);
 /* line 1962: */
{ 
VNFATRN_formulas = Fs;
 /* line 1963: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 1964: */
for ( ;; )
{ 
 /* line 1965: */
if ( !((VNFATRN_formulas!=BBAATRN_nilformulas)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 1966: */
 /* line 1967: */
VNFATRN_formulas = (*(&(VNFATRN_formulas->Rest)));
}
 /* line 1968: */
VNFATRN_formulas = Fs;
 /* line 1969: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 1970: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1971: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 1972: */
NKFATRN_outassemtok(NGDATRN_formulatok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1973: */
for ( ;; )
{ 
 /* line 1974: */
if ( !((VNFATRN_formulas!=BBAATRN_nilformulas)) ) break;
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(VNFATRN_formulas->Formula)))),((*(&(VNFATRN_formulas->Formula))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1975: */
 /* line 1976: */
VNFATRN_formulas = (*(&(VNFATRN_formulas->Rest)));
}
 /* line 1977: */
} 
A_PROC_EXIT(pt_formulas);
return;
} 
#undef NL

A_STATIC A68_VOID  YNFATRN_pt_formularange(A68_184  Frg, void *NonLocals)
#define NL(x) (((ZNFATRN_pt_formularange *)NonLocals)->x)
{ 
A68_184  AOFATRN;  /* united object - for case conformity */
A68_170  BOFATRN_form;
A68_185  COFATRN_rng;
A68_46  FOFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_formularange);
 /* line 1980: */
{ 
 /* line 1981: */
AOFATRN = Frg ;
switch ( AOFATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE170,INT,MODE170)  */
case 6: /* REF STRUCT(INT,MODE170)  */
case 7: /* REF STRUCT(MODE170,MODE170,MODE170)  */
case 8: /* REF STRUCT(MODE170)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(BOFATRN_form,AOFATRN);
 /* line 1982: */
A_CALLPROC(NL(WMFATRN_pt_formula),(BOFATRN_form),(BOFATRN_form,(NL(WMFATRN_pt_formula)).nonlocals));
break;
case 11: /* STRUCT(MODE170,MODE170)  */
COFATRN_rng = (AOFATRN.data.mode11);
 /* line 1983: */
A_CALLPROC(NL(ONFATRN_pt_range),(COFATRN_rng),(COFATRN_rng,(NL(ONFATRN_pt_range)).nonlocals));
break;
default: 
 /* line 1984: */
 /* line 1985: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(FOFATRN,EOFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(FOFATRN,EOFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_formularange);
return;
} 
#undef NL

A_STATIC A68_VOID  IOFATRN_pt_type(A68_186  Type, void *NonLocals)
#define NL(x) (((JOFATRN_pt_type *)NonLocals)->x)
{ 
A68_186  KOFATRN;  /* united object - for case conformity */
A68_187 * LOFATRN_tn;
A68_188 * MOFATRN_tr;
A68_189 * NOFATRN_ts;
A68_189 * OOFATRN_tstr;
A68_190 * POFATRN_tf;
A68_191 * QOFATRN_tb;
A68_192 * ROFATRN_ts;
A68_193 * SOFATRN_tv;
A68_179 * TOFATRN_tm;
A68_194 * UOFATRN_tn;
A68_46  XOFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_type);
 /* line 1988: */
 /* line 1989: */
{ 
 /* line 1990: */
KOFATRN = Type ;
switch ( KOFATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LOFATRN_tn = (KOFATRN.data.mode1);
 /* line 1991: */
{ 
NKFATRN_outassemtok(FCDATRN_tnametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1992: */
 /* line 1993: */
 /* line 1994: */
AKFATRN_outassemint((*(&(LOFATRN_tn->Typeno))), NL(Writer), NL(Msg));
} 
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
MOFATRN_tr = (KOFATRN.data.mode2);
 /* line 1995: */
{ 
NKFATRN_outassemtok(GCDATRN_trowtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 1996: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(MOFATRN_tr->Size)))),((*(&(MOFATRN_tr->Size))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 1997: */
 /* line 1998: */
 /* line 1999: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(MOFATRN_tr->Elem)))),((*(&(MOFATRN_tr->Elem))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
NOFATRN_ts = (KOFATRN.data.mode3);
 /* line 2000: */
{ 
OOFATRN_tstr = NOFATRN_ts;
 /* line 2001: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2002: */
for ( ;; )
{ 
 /* line 2003: */
if ( !((OOFATRN_tstr!=GAAATRN_niltstr)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2004: */
 /* line 2005: */
OOFATRN_tstr = (*(&(OOFATRN_tstr->Rest)));
}
 /* line 2006: */
OOFATRN_tstr = NOFATRN_ts;
 /* line 2007: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2008: */
NKFATRN_outassemtok(HCDATRN_tstrtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2009: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2010: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2011: */
NKFATRN_outassemtok(PGDATRN_typetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2012: */
for ( ;; )
{ 
 /* line 2013: */
if ( !((OOFATRN_tstr!=GAAATRN_niltstr)) ) break;
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(OOFATRN_tstr->Elem)))),((*(&(OOFATRN_tstr->Elem))),(NL(HOFATRN_pt_type)).nonlocals));
 /* line 2014: */
 /* line 2015: */
OOFATRN_tstr = (*(&(OOFATRN_tstr->Rest)));
}
 /* line 2016: */
 /* line 2017: */
} 
break;
case 4: /* REF STRUCT(MODE186,MODE186)  */
POFATRN_tf = (KOFATRN.data.mode4);
 /* line 2018: */
{ 
NKFATRN_outassemtok(ICDATRN_tfntok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2019: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(POFATRN_tf->From)))),((*(&(POFATRN_tf->From))),(NL(HOFATRN_pt_type)).nonlocals));
 /* line 2020: */
 /* line 2021: */
 /* line 2022: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(POFATRN_tf->To)))),((*(&(POFATRN_tf->To))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 5: /* REF STRUCT(MODE186)  */
QOFATRN_tb = (KOFATRN.data.mode5);
 /* line 2023: */
{ 
NKFATRN_outassemtok(KCDATRN_tbrackettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2024: */
 /* line 2025: */
 /* line 2026: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(QOFATRN_tb->Type)))),((*(&(QOFATRN_tb->Type))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
ROFATRN_ts = (KOFATRN.data.mode6);
 /* line 2027: */
{ 
NKFATRN_outassemtok(JCDATRN_tstringtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2028: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(ROFATRN_ts->Size)))),((*(&(ROFATRN_ts->Size))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2029: */
 /* line 2030: */
 /* line 2031: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(ROFATRN_ts->Char)))),((*(&(ROFATRN_ts->Char))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 7: /* REF STRUCT(INT)  */
SOFATRN_tv = (KOFATRN.data.mode7);
 /* line 2032: */
 /* line 2033: */
NKFATRN_outassemtok(LCDATRN_tvoidtok, A68_FALSE, NL(Writer), NL(Msg));
break;
case 8: /* REF STRUCT(INT)  */
TOFATRN_tm = (KOFATRN.data.mode8);
 /* line 2034: */
{ 
NKFATRN_outassemtok(MCDATRN_tmacpartok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2035: */
 /* line 2036: */
 /* line 2037: */
AKFATRN_outassemint((*(&(TOFATRN_tm->Macparno))), NL(Writer), NL(Msg));
} 
break;
case 9: /* REF STRUCT(INT)  */
UOFATRN_tn = (KOFATRN.data.mode9);
 /* line 2038: */
 /* line 2039: */
NKFATRN_outassemtok(NCDATRN_tnull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
default: 
 /* line 2040: */
 /* line 2041: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(XOFATRN,WOFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(XOFATRN,WOFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_type);
return;
} 
#undef NL

A_STATIC A68_VOID  CPFATRN_pt_printfault(A68_INT  Tok, A68_170  Cond, A68_254 * Ptm, void *NonLocals)
#define NL(x) (((DPFATRN_pt_printfault *)NonLocals)->x)
{ 
A68_254 * EPFATRN_printitems;
A68_255  FPFATRN;  /* united object - for case conformity */
A68_VC  GPFATRN_id;
A68_181 * HPFATRN_ftg;
A_PROC_ENTRY(pt_printfault);
 /* line 2044: */
{ 
NKFATRN_outassemtok(Tok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2045: */
A_CALLPROC(NL(WMFATRN_pt_formula),(Cond),(Cond,(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2047: */
EPFATRN_printitems = Ptm;
 /* line 2048: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2049: */
for ( ;; )
{ 
 /* line 2050: */
if ( !((EPFATRN_printitems!=MAAATRN_nilprintitems)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2051: */
 /* line 2052: */
EPFATRN_printitems = (*(&(EPFATRN_printitems->Rest)));
}
 /* line 2053: */
EPFATRN_printitems = Ptm;
 /* line 2054: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2055: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2056: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2057: */
NKFATRN_outassemtok(XGDATRN_printitemtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2058: */
for ( ;; )
{ 
 /* line 2059: */
if ( !((EPFATRN_printitems!=MAAATRN_nilprintitems)) ) break;
 /* line 2060: */
FPFATRN = (*(&(EPFATRN_printitems->Item))) ;
switch ( FPFATRN.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
GPFATRN_id = (FPFATRN.data.mode1);
{ 
NKFATRN_outassemtok(LGDATRN_idtag, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2061: */
 /* line 2062: */
A_CALLPROC(NL(WLFATRN_outid),(GPFATRN_id, NL(Writer), NL(Msg)),(GPFATRN_id, NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
} 
break;
case 2: /* REF STRUCT(MODE170)  */
HPFATRN_ftg = (FPFATRN.data.mode2);
 /* line 2063: */
{ 
NKFATRN_outassemtok(AFDATRN_formulatagtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2064: */
 /* line 2065: */
 /* line 2066: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(HPFATRN_ftg->Tag)))),((*(&(HPFATRN_ftg->Tag))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2067: */
 /* line 2068: */
EPFATRN_printitems = (*(&(EPFATRN_printitems->Rest)));
}
 /* line 2069: */
} 
A_PROC_EXIT(pt_printfault);
return;
} 
#undef NL

A_STATIC A68_VOID  KPFATRN_pt_names(A68_249 * Ns, void *NonLocals)
#define NL(x) (((LPFATRN_pt_names *)NonLocals)->x)
{ 
A68_249 * MPFATRN_ids;
A_PROC_ENTRY(pt_names);
 /* line 2072: */
{ 
MPFATRN_ids = Ns;
 /* line 2073: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2074: */
for ( ;; )
{ 
 /* line 2075: */
if ( !((MPFATRN_ids!=NAAATRN_nilnames)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2076: */
 /* line 2077: */
MPFATRN_ids = (*(&(MPFATRN_ids->Rest)));
}
 /* line 2078: */
MPFATRN_ids = Ns;
 /* line 2079: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2080: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2081: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2082: */
NKFATRN_outassemtok(QBDATRN_inttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2083: */
for ( ;; )
{ 
 /* line 2084: */
if ( !((MPFATRN_ids!=NAAATRN_nilnames)) ) break;
AKFATRN_outassemint((*(&(MPFATRN_ids->Nameno))), NL(Writer), NL(Msg));
 /* line 2085: */
 /* line 2086: */
MPFATRN_ids = (*(&(MPFATRN_ids->Rest)));
}
 /* line 2087: */
} 
A_PROC_EXIT(pt_names);
return;
} 
#undef NL

A_STATIC A68_VOID  QPFATRN_pt_let(A68_242  Let, A68_435  Pt_unit, void *NonLocals)
#define NL(x) (((RPFATRN_pt_let *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_let);
 /* line 2090: */
{ 
NKFATRN_outassemtok(WDDATRN_lettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2091: */
A_CALLPROC(NL(JPFATRN_pt_names),(Let.Letnames),(Let.Letnames,(NL(JPFATRN_pt_names)).nonlocals));
 /* line 2092: */
 /* line 2093: */
A_CALLPROC(Pt_unit,(Let.Unit),(Let.Unit,(Pt_unit).nonlocals));
} 
A_PROC_EXIT(pt_let);
return;
} 
#undef NL

A_STATIC A68_VOID  UPFATRN_pt_localdec(A68_269  D, void *NonLocals)
#define NL(x) (((VPFATRN_pt_localdec *)NonLocals)->x)
{ 
A68_269  WPFATRN;  /* united object - for case conformity */
A68_162  XPFATRN_an;
A68_174  YPFATRN_fn;
A68_187  ZPFATRN_tn;
A68_202  AQFATRN_cn;
A68_239  BQFATRN_fnn;
A68_46  EQFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_localdec);
 /* line 2096: */
{ 
 /* line 2097: */
WPFATRN = D ;
switch ( WPFATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
XPFATRN_an = (WPFATRN.data.mode1);
 /* line 2098: */
{ 
NKFATRN_outassemtok(BGDATRN_attrlocdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2099: */
 /* line 2100: */
 /* line 2101: */
AKFATRN_outassemint(XPFATRN_an.Attrno, NL(Writer), NL(Msg));
} 
break;
case 2: /* STRUCT(INT)  */
YPFATRN_fn = (WPFATRN.data.mode2);
 /* line 2102: */
{ 
NKFATRN_outassemtok(CGDATRN_flocdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2103: */
 /* line 2104: */
 /* line 2105: */
AKFATRN_outassemint(YPFATRN_fn.Intno, NL(Writer), NL(Msg));
} 
break;
case 3: /* STRUCT(INT)  */
ZPFATRN_tn = (WPFATRN.data.mode3);
 /* line 2106: */
{ 
NKFATRN_outassemtok(DGDATRN_tlocdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2107: */
 /* line 2108: */
 /* line 2109: */
AKFATRN_outassemint(ZPFATRN_tn.Typeno, NL(Writer), NL(Msg));
} 
break;
case 4: /* STRUCT(INT)  */
AQFATRN_cn = (WPFATRN.data.mode4);
 /* line 2110: */
{ 
NKFATRN_outassemtok(EGDATRN_clocdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2111: */
 /* line 2112: */
 /* line 2113: */
AKFATRN_outassemint(AQFATRN_cn.Constno, NL(Writer), NL(Msg));
} 
break;
case 5: /* STRUCT(INT)  */
BQFATRN_fnn = (WPFATRN.data.mode5);
 /* line 2114: */
{ 
NKFATRN_outassemtok(FGDATRN_fnlocdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2115: */
 /* line 2116: */
 /* line 2117: */
AKFATRN_outassemint(BQFATRN_fnn.Fnno, NL(Writer), NL(Msg));
} 
break;
default: 
 /* line 2118: */
 /* line 2119: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(EQFATRN,DQFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(EQFATRN,DQFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_localdec);
return;
} 
#undef NL

A_STATIC A68_VOID  HQFATRN_anonymous(A68_256 * Sq, A68_435  Pt_unit)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  NQFATRN_pt_seqstep(A68_257 * Step, A68_435  Pt_unit, void *NonLocals)
#define NL(x) (((OQFATRN_pt_seqstep *)NonLocals)->x)
{ 
A68_440  RQFATRN_pt_seqchoices;   /* proc value of non-global proc */
A68_257  VQFATRN;  /* united object - for case conformity */
A68_269  WQFATRN_d;
A68_240 * XQFATRN_ps;
A68_241 * YQFATRN_fs;
A68_258 * ZQFATRN_sl;
A68_259 * ARFATRN_sv;
A68_260 * BRFATRN_spv;
A68_261 * CRFATRN_sa;
A68_262 * DRFATRN_sc;
A68_263 * ERFATRN_scond;
A68_264 * FRFATRN_sd;
A68_266 * GRFATRN_sr;
A68_265 * HRFATRN_sn;
A68_256 * IRFATRN_sq;
A68_46  LRFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_seqstep);
 /* line 2125: */
{ 
A_CLOSURE( RQFATRN_pt_seqchoices, SQFATRN_pt_seqchoices, TQFATRN_pt_seqchoices );
(( TQFATRN_pt_seqchoices * ) ( RQFATRN_pt_seqchoices.nonlocals )) -> SLFATRN_listnumb = NL(SLFATRN_listnumb);
(( TQFATRN_pt_seqchoices * ) ( RQFATRN_pt_seqchoices.nonlocals )) -> Writer = NL(Writer);
(( TQFATRN_pt_seqchoices * ) ( RQFATRN_pt_seqchoices.nonlocals )) -> Msg = NL(Msg);
(( TQFATRN_pt_seqchoices * ) ( RQFATRN_pt_seqchoices.nonlocals )) -> Pt_unit = Pt_unit;
(( TQFATRN_pt_seqchoices * ) ( RQFATRN_pt_seqchoices.nonlocals )) -> MQFATRN_pt_seqstep = NL(MQFATRN_pt_seqstep);
 /* line 2147: */
 /* line 2148: */
VQFATRN = (*Step) ;
switch ( VQFATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(WQFATRN_d,VQFATRN);
 /* line 2149: */
A_CALLPROC(NL(TPFATRN_pt_localdec),(WQFATRN_d),(WQFATRN_d,(NL(TPFATRN_pt_localdec)).nonlocals));
break;
case 6: /* REF STRUCT(MODE170,REF MODE254)  */
XQFATRN_ps = (VQFATRN.data.mode6);
 /* line 2150: */
 /* line 2151: */
 /* line 2152: */
A_CALLPROC(NL(BPFATRN_pt_printfault),(BEDATRN_printtok, (*(&(XQFATRN_ps->Cond))), (*(&(XQFATRN_ps->Print)))),(BEDATRN_printtok, (*(&(XQFATRN_ps->Cond))), (*(&(XQFATRN_ps->Print))),(NL(BPFATRN_pt_printfault)).nonlocals));
break;
case 7: /* REF STRUCT(MODE170,REF MODE254)  */
YQFATRN_fs = (VQFATRN.data.mode7);
 /* line 2153: */
 /* line 2154: */
 /* line 2155: */
A_CALLPROC(NL(BPFATRN_pt_printfault),(CEDATRN_faulttok, (*(&(YQFATRN_fs->Cond))), (*(&(YQFATRN_fs->Fault)))),(CEDATRN_faulttok, (*(&(YQFATRN_fs->Cond))), (*(&(YQFATRN_fs->Fault))),(NL(BPFATRN_pt_printfault)).nonlocals));
break;
case 8: /* REF STRUCT(MODE242)  */
ZQFATRN_sl = (VQFATRN.data.mode8);
 /* line 2156: */
{ 
NKFATRN_outassemtok(EEDATRN_seqlettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2157: */
 /* line 2158: */
 /* line 2159: */
A_CALLPROC(NL(PPFATRN_pt_let),((*(&(ZQFATRN_sl->Seqlet))), Pt_unit),((*(&(ZQFATRN_sl->Seqlet))), Pt_unit,(NL(PPFATRN_pt_let)).nonlocals));
} 
break;
case 9: /* REF STRUCT(MODE242)  */
ARFATRN_sv = (VQFATRN.data.mode9);
 /* line 2160: */
{ 
NKFATRN_outassemtok(FEDATRN_seqvartok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2161: */
 /* line 2162: */
 /* line 2163: */
A_CALLPROC(NL(PPFATRN_pt_let),((*(&(ARFATRN_sv->Seqvar))), Pt_unit),((*(&(ARFATRN_sv->Seqvar))), Pt_unit,(NL(PPFATRN_pt_let)).nonlocals));
} 
break;
case 10: /* REF STRUCT(REF MODE249,MODE208)  */
BRFATRN_spv = (VQFATRN.data.mode10);
 /* line 2164: */
{ 
NKFATRN_outassemtok(GEDATRN_seqpvartok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2165: */
NKFATRN_outassemtok(WDDATRN_lettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2166: */
A_CALLPROC(NL(JPFATRN_pt_names),((*(&(BRFATRN_spv->Pvarnames)))),((*(&(BRFATRN_spv->Pvarnames))),(NL(JPFATRN_pt_names)).nonlocals));
 /* line 2167: */
 /* line 2168: */
 /* line 2169: */
A_CALLPROC(Pt_unit,((*(&(BRFATRN_spv->Init)))),((*(&(BRFATRN_spv->Init))),(Pt_unit).nonlocals));
} 
break;
case 11: /* REF STRUCT(MODE208,MODE208)  */
CRFATRN_sa = (VQFATRN.data.mode11);
 /* line 2170: */
{ 
NKFATRN_outassemtok(HEDATRN_seqassigntok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2171: */
A_CALLPROC(Pt_unit,((*(&(CRFATRN_sa->To)))),((*(&(CRFATRN_sa->To))),(Pt_unit).nonlocals));
 /* line 2172: */
 /* line 2173: */
 /* line 2174: */
A_CALLPROC(Pt_unit,((*(&(CRFATRN_sa->From)))),((*(&(CRFATRN_sa->From))),(Pt_unit).nonlocals));
} 
break;
case 12: /* REF STRUCT(MODE208,REF MODE267)  */
DRFATRN_sc = (VQFATRN.data.mode12);
 /* line 2175: */
{ 
NKFATRN_outassemtok(IEDATRN_seqcasetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2176: */
A_CALLPROC(Pt_unit,((*(&(DRFATRN_sc->Input)))),((*(&(DRFATRN_sc->Input))),(Pt_unit).nonlocals));
 /* line 2177: */
 /* line 2178: */
 /* line 2179: */
A_CALLPROC(RQFATRN_pt_seqchoices,((*(&(DRFATRN_sc->Choices)))),((*(&(DRFATRN_sc->Choices))),(RQFATRN_pt_seqchoices).nonlocals));
} 
break;
case 13: /* REF STRUCT(MODE170,MODE257,MODE257)  */
ERFATRN_scond = (VQFATRN.data.mode13);
 /* line 2180: */
{ 
NKFATRN_outassemtok(JEDATRN_seqcondtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2181: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(ERFATRN_scond->Cond)))),((*(&(ERFATRN_scond->Cond))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2182: */
A_CALLPROC(NL(MQFATRN_pt_seqstep),((&(ERFATRN_scond->True)), Pt_unit),((&(ERFATRN_scond->True)), Pt_unit,(NL(MQFATRN_pt_seqstep)).nonlocals));
 /* line 2183: */
 /* line 2184: */
 /* line 2185: */
A_CALLPROC(NL(MQFATRN_pt_seqstep),((&(ERFATRN_scond->False)), Pt_unit),((&(ERFATRN_scond->False)), Pt_unit,(NL(MQFATRN_pt_seqstep)).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE170,MODE257)  */
FRFATRN_sd = (VQFATRN.data.mode14);
 /* line 2186: */
{ 
NKFATRN_outassemtok(KEDATRN_seqrepltok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2187: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(FRFATRN_sd->Repl)))),((*(&(FRFATRN_sd->Repl))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2188: */
 /* line 2189: */
 /* line 2190: */
A_CALLPROC(NL(MQFATRN_pt_seqstep),((&(FRFATRN_sd->Body)), Pt_unit),((&(FRFATRN_sd->Body)), Pt_unit,(NL(MQFATRN_pt_seqstep)).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE170,MODE257)  */
GRFATRN_sr = (VQFATRN.data.mode17);
 /* line 2191: */
{ 
NKFATRN_outassemtok(LEDATRN_seqrowtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2192: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(GRFATRN_sr->Size)))),((*(&(GRFATRN_sr->Size))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2193: */
 /* line 2194: */
 /* line 2195: */
A_CALLPROC(NL(MQFATRN_pt_seqstep),((&(GRFATRN_sr->Elem)), Pt_unit),((&(GRFATRN_sr->Elem)), Pt_unit,(NL(MQFATRN_pt_seqstep)).nonlocals));
} 
break;
case 15: /* REF STRUCT(INT)  */
HRFATRN_sn = (VQFATRN.data.mode15);
 /* line 2196: */
 /* line 2197: */
NKFATRN_outassemtok(MEDATRN_seqnull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
case 16: /* REF STRUCT(MODE257,REF MODE256)  */
IRFATRN_sq = (VQFATRN.data.mode16);
 /* line 2198: */
{ 
NKFATRN_outassemtok(DEDATRN_sequencetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2199: */
 /* line 2200: */
 /* line 2201: */
 /* line 2202: */
A_CALLPROC((*NL(IQFATRN_pt_sequence)),(IRFATRN_sq, Pt_unit),(IRFATRN_sq, Pt_unit,((*NL(IQFATRN_pt_sequence))).nonlocals));
} 
break;
default: 
 /* line 2203: */
 /* line 2204: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(LRFATRN,KRFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(LRFATRN,KRFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_seqstep);
return;
} 
#undef NL

A_STATIC A68_VOID  PRFATRN_do_pt_sequence(A68_256 * Sq, A68_435  Pt_unit, void *NonLocals)
#define NL(x) (((QRFATRN_do_pt_sequence *)NonLocals)->x)
{ 
A68_256 * RRFATRN_sequence;
A68_INT  SRFATRN_listnumb;
A_PROC_ENTRY(do_pt_sequence);
 /* line 2207: */
{ 
RRFATRN_sequence = Sq;
 /* line 2208: */
SRFATRN_listnumb = 0;
 /* line 2209: */
for ( ;; )
{ 
 /* line 2210: */
if ( !((RRFATRN_sequence!=QAAATRN_nilsequence)) ) break;
SRFATRN_listnumb+=1;
 /* line 2211: */
 /* line 2212: */
RRFATRN_sequence = (*(&(RRFATRN_sequence->Rest)));
}
 /* line 2213: */
RRFATRN_sequence = Sq;
 /* line 2214: */
if ( (SRFATRN_listnumb==0) )
{ 
SRFATRN_listnumb = (-1);
} 
 /* line 2215: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2216: */
AKFATRN_outassemint(SRFATRN_listnumb, NL(Writer), NL(Msg));
 /* line 2217: */
NKFATRN_outassemtok(UGDATRN_seqsteptok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2218: */
for ( ;; )
{ 
 /* line 2219: */
if ( !((RRFATRN_sequence!=QAAATRN_nilsequence)) ) break;
A_CALLPROC(NL(MQFATRN_pt_seqstep),((&(RRFATRN_sequence->Step)), Pt_unit),((&(RRFATRN_sequence->Step)), Pt_unit,(NL(MQFATRN_pt_seqstep)).nonlocals));
 /* line 2220: */
 /* line 2221: */
RRFATRN_sequence = (*(&(RRFATRN_sequence->Rest)));
}
 /* line 2222: */
} 
A_PROC_EXIT(do_pt_sequence);
return;
} 
#undef NL

A_STATIC A68_VOID  URFATRN_anonymous(A68_250  Mps)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  ZRFATRN_pt_instance(A68_248  Ins, void *NonLocals)
#define NL(x) (((ASFATRN_pt_instance *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_instance);
 /* line 2230: */
{ 
NKFATRN_outassemtok(BFDATRN_instancetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2231: */
AKFATRN_outassemint(Ins.Fnno, NL(Writer), NL(Msg));
 /* line 2232: */
A_CALLPROC((*NL(VRFATRN_pt_macparams)),(Ins.Macparams),(Ins.Macparams,((*NL(VRFATRN_pt_macparams))).nonlocals));
 /* line 2233: */
 /* line 2234: */
A_CALLPROC(NL(LMFATRN_pt_attr),(Ins.Attr),(Ins.Attr,(NL(LMFATRN_pt_attr)).nonlocals));
} 
A_PROC_EXIT(pt_instance);
return;
} 
#undef NL

A_STATIC A68_VOID  ESFATRN_pt_step(A68_238  Step, A68_435  Pt_unit, void *NonLocals)
#define NL(x) (((FSFATRN_pt_step *)NonLocals)->x)
{ 
A68_238  GSFATRN;  /* united object - for case conformity */
A68_269  HSFATRN_d;
A68_240 * ISFATRN_ps;
A68_241 * JSFATRN_fs;
A68_242 * KSFATRN_let;
A68_243 * LSFATRN_mk;
A68_244 * MSFATRN_jn;
A68_245 * NSFATRN_rjn;
A68_247 * OSFATRN_joins;
A68_246 * PSFATRN_sn;
A68_46  SSFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_step);
 /* line 2237: */
{ 
 /* line 2238: */
GSFATRN = Step ;
switch ( GSFATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(HSFATRN_d,GSFATRN);
 /* line 2239: */
A_CALLPROC(NL(TPFATRN_pt_localdec),(HSFATRN_d),(HSFATRN_d,(NL(TPFATRN_pt_localdec)).nonlocals));
break;
case 6: /* REF STRUCT(MODE170,REF MODE254)  */
ISFATRN_ps = (GSFATRN.data.mode6);
 /* line 2240: */
 /* line 2241: */
 /* line 2242: */
A_CALLPROC(NL(BPFATRN_pt_printfault),(BEDATRN_printtok, (*(&(ISFATRN_ps->Cond))), (*(&(ISFATRN_ps->Print)))),(BEDATRN_printtok, (*(&(ISFATRN_ps->Cond))), (*(&(ISFATRN_ps->Print))),(NL(BPFATRN_pt_printfault)).nonlocals));
break;
case 7: /* REF STRUCT(MODE170,REF MODE254)  */
JSFATRN_fs = (GSFATRN.data.mode7);
 /* line 2243: */
 /* line 2244: */
 /* line 2245: */
A_CALLPROC(NL(BPFATRN_pt_printfault),(CEDATRN_faulttok, (*(&(JSFATRN_fs->Cond))), (*(&(JSFATRN_fs->Fault)))),(CEDATRN_faulttok, (*(&(JSFATRN_fs->Cond))), (*(&(JSFATRN_fs->Fault))),(NL(BPFATRN_pt_printfault)).nonlocals));
break;
case 8: /* REF STRUCT(REF MODE249,MODE208)  */
KSFATRN_let = (GSFATRN.data.mode8);
 /* line 2246: */
 /* line 2247: */
 /* line 2248: */
A_CALLPROC(NL(PPFATRN_pt_let),((*KSFATRN_let), Pt_unit),((*KSFATRN_let), Pt_unit,(NL(PPFATRN_pt_let)).nonlocals));
break;
case 9: /* REF STRUCT(REF MODE182,MODE248,REF MODE249)  */
LSFATRN_mk = (GSFATRN.data.mode9);
 /* line 2249: */
{ 
NKFATRN_outassemtok(XDDATRN_maketok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2250: */
A_CALLPROC(NL(SNFATRN_pt_formulas),((*(&(LSFATRN_mk->Sizes)))),((*(&(LSFATRN_mk->Sizes))),(NL(SNFATRN_pt_formulas)).nonlocals));
 /* line 2251: */
A_CALLPROC(NL(YRFATRN_pt_instance),((*(&(LSFATRN_mk->Inst)))),((*(&(LSFATRN_mk->Inst))),(NL(YRFATRN_pt_instance)).nonlocals));
 /* line 2252: */
 /* line 2253: */
 /* line 2254: */
A_CALLPROC(NL(JPFATRN_pt_names),((*(&(LSFATRN_mk->Makenames)))),((*(&(LSFATRN_mk->Makenames))),(NL(JPFATRN_pt_names)).nonlocals));
} 
break;
case 10: /* REF STRUCT(MODE208,MODE208)  */
MSFATRN_jn = (GSFATRN.data.mode10);
 /* line 2255: */
{ 
NKFATRN_outassemtok(YDDATRN_jointok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2256: */
A_CALLPROC(Pt_unit,((*(&(MSFATRN_jn->From)))),((*(&(MSFATRN_jn->From))),(Pt_unit).nonlocals));
 /* line 2257: */
 /* line 2258: */
 /* line 2259: */
A_CALLPROC(Pt_unit,((*(&(MSFATRN_jn->To)))),((*(&(MSFATRN_jn->To))),(Pt_unit).nonlocals));
} 
break;
case 11: /* REF STRUCT(REF MODE182,REF MODE247)  */
NSFATRN_rjn = (GSFATRN.data.mode11);
 /* line 2260: */
{ 
NKFATRN_outassemtok(ZDDATRN_repljointok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2261: */
A_CALLPROC(NL(SNFATRN_pt_formulas),((*(&(NSFATRN_rjn->Repls)))),((*(&(NSFATRN_rjn->Repls))),(NL(SNFATRN_pt_formulas)).nonlocals));
 /* line 2262: */
OSFATRN_joins = (*(&(NSFATRN_rjn->Joins)));
 /* line 2263: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2264: */
for ( ;; )
{ 
 /* line 2265: */
if ( !((OSFATRN_joins!=RAAATRN_niljoins)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2266: */
 /* line 2267: */
OSFATRN_joins = (*(&(OSFATRN_joins->Rest)));
}
 /* line 2268: */
OSFATRN_joins = (*(&(NSFATRN_rjn->Joins)));
 /* line 2269: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2270: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2271: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2272: */
NKFATRN_outassemtok(YDDATRN_jointok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2273: */
for ( ;; )
{ 
 /* line 2274: */
if ( !((OSFATRN_joins!=RAAATRN_niljoins)) ) break;
NKFATRN_outassemtok(YDDATRN_jointok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2275: */
A_CALLPROC(Pt_unit,((*(&((&(OSFATRN_joins->Join))->From)))),((*(&((&(OSFATRN_joins->Join))->From))),(Pt_unit).nonlocals));
 /* line 2276: */
A_CALLPROC(Pt_unit,((*(&((&(OSFATRN_joins->Join))->To)))),((*(&((&(OSFATRN_joins->Join))->To))),(Pt_unit).nonlocals));
 /* line 2277: */
 /* line 2278: */
OSFATRN_joins = (*(&(OSFATRN_joins->Rest)));
}
 /* line 2279: */
 /* line 2280: */
} 
break;
case 12: /* REF STRUCT(INT)  */
PSFATRN_sn = (GSFATRN.data.mode12);
 /* line 2281: */
NKFATRN_outassemtok(AEDATRN_stepnull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
default: 
 /* line 2282: */
 /* line 2283: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(SSFATRN,RSFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(SSFATRN,RSFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_step);
return;
} 
#undef NL

A_STATIC A68_VOID  VSFATRN_pt_unit(A68_208  Unit, void *NonLocals)
#define NL(x) (((WSFATRN_pt_unit *)NonLocals)->x)
{ 
A68_444  ZSFATRN_pt_uchoices;   /* proc value of non-global proc */
A68_208  DTFATRN;  /* united object - for case conformity */
A68_202 * ETFATRN_cn;
A68_203 * FTFATRN_cp;
A68_204 * GTFATRN_ci;
A68_206 * HTFATRN_cq;
A68_210 * ITFATRN_cv;
A68_209 * JTFATRN_cq;
A68_INT  KTFATRN_index;
A68_INT  LTFATRN;  /* to part of loop */
A68_32  MTFATRN;  /* OPERATORS - simple index */
A68_205 * NTFATRN_cr;
A68_211 * OTFATRN_cpr;
A68_191 * PTFATRN_ct;
A68_212 * QTFATRN_ua;
A68_212 * RTFATRN_ualts;
A68_213 * STFATRN_un;
A68_221 * TTFATRN_ud;
A68_214 * UTFATRN_ufn;
A68_215 * VTFATRN_ua;
A68_216 * WTFATRN_ue;
A68_217 * XTFATRN_ut;
A68_218 * YTFATRN_ui;
A68_219 * ZTFATRN_ut;
A68_220 * AUFATRN_ud;
A68_222 * BUFATRN_ur;
A68_223 * CUFATRN_us;
A68_223 * DUFATRN_ustr;
A68_224 * EUFATRN_uc;
A68_225 * FUFATRN_um;
A68_226 * GUFATRN_ud;
A68_227 * HUFATRN_uc;
A68_228 * IUFATRN_ucond;
A68_229 * JUFATRN_ur;
A68_230 * KUFATRN_us;
A68_231 * LUFATRN_us;
A68_237 * MUFATRN_series;
A68_234 * NUFATRN_ub;
A68_232 * OUFATRN_ua;
A68_233 * PUFATRN_uc;
A68_170  QUFATRN;  /* OPERATORS - mode -> union mode */
A68_172 * RUFATRN;  /* YIELD */
A68_235 * SUFATRN_us;
A68_236 * TUFATRN_un;
A68_46  WUFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_unit);
 /* line 2286: */
 /* line 2287: */
{ 
A_CLOSURE( ZSFATRN_pt_uchoices, ATFATRN_pt_uchoices, BTFATRN_pt_uchoices );
(( BTFATRN_pt_uchoices * ) ( ZSFATRN_pt_uchoices.nonlocals )) -> SLFATRN_listnumb = NL(SLFATRN_listnumb);
(( BTFATRN_pt_uchoices * ) ( ZSFATRN_pt_uchoices.nonlocals )) -> Writer = NL(Writer);
(( BTFATRN_pt_uchoices * ) ( ZSFATRN_pt_uchoices.nonlocals )) -> Msg = NL(Msg);
(( BTFATRN_pt_uchoices * ) ( ZSFATRN_pt_uchoices.nonlocals )) -> USFATRN_pt_unit = NL(USFATRN_pt_unit);
 /* line 2310: */
 /* line 2311: */
DTFATRN = Unit ;
switch ( DTFATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
ETFATRN_cn = (DTFATRN.data.mode1);
 /* line 2312: */
{ 
NKFATRN_outassemtok(OCDATRN_cnametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2313: */
 /* line 2314: */
 /* line 2315: */
AKFATRN_outassemint((*(&(ETFATRN_cn->Constno))), NL(Writer), NL(Msg));
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
FTFATRN_cp = (DTFATRN.data.mode2);
 /* line 2316: */
{ 
NKFATRN_outassemtok(PCDATRN_cprimtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2317: */
AKFATRN_outassemint((*(&(FTFATRN_cp->Typeno))), NL(Writer), NL(Msg));
 /* line 2318: */
 /* line 2319: */
 /* line 2320: */
AKFATRN_outassemint((*(&(FTFATRN_cp->Primno))), NL(Writer), NL(Msg));
} 
break;
case 3: /* REF STRUCT(INT,MODE170)  */
GTFATRN_ci = (DTFATRN.data.mode3);
 /* line 2321: */
{ 
NKFATRN_outassemtok(QCDATRN_cinttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2322: */
AKFATRN_outassemint((*(&(GTFATRN_ci->Typeno))), NL(Writer), NL(Msg));
 /* line 2323: */
 /* line 2324: */
 /* line 2325: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(GTFATRN_ci->Index)))),((*(&(GTFATRN_ci->Index))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE186)  */
HTFATRN_cq = (DTFATRN.data.mode4);
 /* line 2326: */
{ 
NKFATRN_outassemtok(SCDATRN_cquerytok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2327: */
 /* line 2328: */
 /* line 2329: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(HTFATRN_cq->Querytype)))),((*(&(HTFATRN_cq->Querytype))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT)  */
ITFATRN_cv = (DTFATRN.data.mode6);
 /* line 2330: */
NKFATRN_outassemtok(TCDATRN_cvoidtok, A68_FALSE, NL(Writer), NL(Msg));
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
JTFATRN_cq = (DTFATRN.data.mode5);
 /* line 2331: */
{ 
NKFATRN_outassemtok(RCDATRN_cquotetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2332: */
AKFATRN_outassemint((*(&(JTFATRN_cq->Typeno))), NL(Writer), NL(Msg));
 /* line 2333: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2334: */
AKFATRN_outassemint((*(&(JTFATRN_cq->String))).upb, NL(Writer), NL(Msg));
 /* line 2335: */
NKFATRN_outassemtok(QBDATRN_inttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2336: */
 /* line 2337: */
LTFATRN = (*(&(JTFATRN_cq->String))).upb;
for ( KTFATRN_index = 1;
KTFATRN_index <= LTFATRN;
KTFATRN_index += 1 )
{ 
MTFATRN = (*(&(JTFATRN_cq->String))) ;
AKFATRN_outassemint((*(&A_VINDEX(MTFATRN,KTFATRN_index))), NL(Writer), NL(Msg));
}
 /* line 2338: */
 /* line 2339: */
} 
break;
case 8: /* REF STRUCT(INT,MODE185)  */
NTFATRN_cr = (DTFATRN.data.mode8);
 /* line 2340: */
{ 
NKFATRN_outassemtok(VCDATRN_crangetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2341: */
AKFATRN_outassemint((*(&(NTFATRN_cr->Typeno))), NL(Writer), NL(Msg));
 /* line 2342: */
 /* line 2343: */
 /* line 2344: */
A_CALLPROC(NL(ONFATRN_pt_range),((*(&(NTFATRN_cr->Range)))),((*(&(NTFATRN_cr->Range))),(NL(ONFATRN_pt_range)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
OTFATRN_cpr = (DTFATRN.data.mode9);
 /* line 2345: */
{ 
NKFATRN_outassemtok(WCDATRN_cprimrangetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2346: */
AKFATRN_outassemint((*(&(OTFATRN_cpr->Typeno))), NL(Writer), NL(Msg));
 /* line 2347: */
AKFATRN_outassemint((*(&(OTFATRN_cpr->Firstno))), NL(Writer), NL(Msg));
 /* line 2348: */
 /* line 2349: */
 /* line 2350: */
AKFATRN_outassemint((*(&(OTFATRN_cpr->Lastno))), NL(Writer), NL(Msg));
} 
break;
case 7: /* REF STRUCT(MODE186)  */
PTFATRN_ct = (DTFATRN.data.mode7);
 /* line 2351: */
{ 
NKFATRN_outassemtok(UCDATRN_ctypetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2352: */
 /* line 2353: */
 /* line 2354: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(PTFATRN_ct->Type)))),((*(&(PTFATRN_ct->Type))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 10: /* REF STRUCT(MODE208,REF MODE212)  */
QTFATRN_ua = (DTFATRN.data.mode10);
 /* line 2355: */
{ 
RTFATRN_ualts = QTFATRN_ua;
 /* line 2356: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2357: */
for ( ;; )
{ 
 /* line 2358: */
if ( !((RTFATRN_ualts!=HAAATRN_nilualts)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2359: */
 /* line 2360: */
RTFATRN_ualts = (*(&(RTFATRN_ualts->Rest)));
}
 /* line 2361: */
RTFATRN_ualts = QTFATRN_ua;
 /* line 2362: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2363: */
NKFATRN_outassemtok(XCDATRN_ualtstok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2364: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2365: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2366: */
NKFATRN_outassemtok(RGDATRN_unittok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2367: */
for ( ;; )
{ 
 /* line 2368: */
if ( !((RTFATRN_ualts!=HAAATRN_nilualts)) ) break;
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(RTFATRN_ualts->Alt)))),((*(&(RTFATRN_ualts->Alt))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2369: */
 /* line 2370: */
RTFATRN_ualts = (*(&(RTFATRN_ualts->Rest)));
}
 /* line 2371: */
 /* line 2372: */
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
STFATRN_un = (DTFATRN.data.mode11);
 /* line 2373: */
{ 
NKFATRN_outassemtok(YCDATRN_unametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2374: */
AKFATRN_outassemint((*(&(STFATRN_un->Sort))), NL(Writer), NL(Msg));
 /* line 2375: */
 /* line 2376: */
 /* line 2377: */
AKFATRN_outassemint((*(&(STFATRN_un->Nameno))), NL(Writer), NL(Msg));
} 
break;
case 19: /* REF STRUCT(MODE208,MODE208,MODE208)  */
TTFATRN_ud = (DTFATRN.data.mode19);
 /* line 2378: */
{ 
NKFATRN_outassemtok(GDDATRN_ureplacetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2379: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(TTFATRN_ud->Unit)))),((*(&(TTFATRN_ud->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2380: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(TTFATRN_ud->Index)))),((*(&(TTFATRN_ud->Index))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2381: */
 /* line 2382: */
 /* line 2383: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(TTFATRN_ud->From)))),((*(&(TTFATRN_ud->From))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 12: /* REF STRUCT(MODE208,MODE208)  */
UTFATRN_ufn = (DTFATRN.data.mode12);
 /* line 2384: */
{ 
NKFATRN_outassemtok(ZCDATRN_ufntok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2385: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(UTFATRN_ufn->Sink)))),((*(&(UTFATRN_ufn->Sink))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2386: */
 /* line 2387: */
 /* line 2388: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(UTFATRN_ufn->Source)))),((*(&(UTFATRN_ufn->Source))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
VTFATRN_ua = (DTFATRN.data.mode13);
 /* line 2389: */
{ 
NKFATRN_outassemtok(ADDATRN_uassoctok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2390: */
AKFATRN_outassemint((*(&(VTFATRN_ua->Typeno))), NL(Writer), NL(Msg));
 /* line 2391: */
AKFATRN_outassemint((*(&(VTFATRN_ua->Altno))), NL(Writer), NL(Msg));
 /* line 2392: */
 /* line 2393: */
 /* line 2394: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(VTFATRN_ua->Assoc)))),((*(&(VTFATRN_ua->Assoc))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE208,INT,INT)  */
WTFATRN_ue = (DTFATRN.data.mode14);
 /* line 2395: */
{ 
NKFATRN_outassemtok(BDDATRN_uextracttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2396: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(WTFATRN_ue->Extract)))),((*(&(WTFATRN_ue->Extract))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2397: */
AKFATRN_outassemint((*(&(WTFATRN_ue->Typeno))), NL(Writer), NL(Msg));
 /* line 2398: */
 /* line 2399: */
 /* line 2400: */
AKFATRN_outassemint((*(&(WTFATRN_ue->Altno))), NL(Writer), NL(Msg));
} 
break;
case 15: /* REF STRUCT(MODE208,INT,INT)  */
XTFATRN_ut = (DTFATRN.data.mode15);
 /* line 2401: */
{ 
NKFATRN_outassemtok(CDDATRN_uportnametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2402: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(XTFATRN_ut->Unit)))),((*(&(XTFATRN_ut->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2403: */
AKFATRN_outassemint((*(&(XTFATRN_ut->Fnno))), NL(Writer), NL(Msg));
 /* line 2404: */
 /* line 2405: */
 /* line 2406: */
AKFATRN_outassemint((*(&(XTFATRN_ut->Nameno))), NL(Writer), NL(Msg));
} 
break;
case 16: /* REF STRUCT(MODE208,MODE170)  */
YTFATRN_ui = (DTFATRN.data.mode16);
 /* line 2407: */
{ 
NKFATRN_outassemtok(DDDATRN_uindextok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2408: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(YTFATRN_ui->Unit)))),((*(&(YTFATRN_ui->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2409: */
 /* line 2410: */
 /* line 2411: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(YTFATRN_ui->Index)))),((*(&(YTFATRN_ui->Index))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
ZTFATRN_ut = (DTFATRN.data.mode17);
 /* line 2412: */
{ 
NKFATRN_outassemtok(EDDATRN_utrimtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2413: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(ZTFATRN_ut->Unit)))),((*(&(ZTFATRN_ut->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2414: */
 /* line 2415: */
 /* line 2416: */
A_CALLPROC(NL(ONFATRN_pt_range),((*(&(ZTFATRN_ut->Range)))),((*(&(ZTFATRN_ut->Range))),(NL(ONFATRN_pt_range)).nonlocals));
} 
break;
case 18: /* REF STRUCT(MODE208,MODE208)  */
AUFATRN_ud = (DTFATRN.data.mode18);
 /* line 2417: */
{ 
NKFATRN_outassemtok(FDDATRN_udyindextok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2418: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(AUFATRN_ud->Unit)))),((*(&(AUFATRN_ud->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2419: */
 /* line 2420: */
 /* line 2421: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(AUFATRN_ud->Index)))),((*(&(AUFATRN_ud->Index))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 20: /* REF STRUCT(MODE170,MODE208)  */
BUFATRN_ur = (DTFATRN.data.mode20);
 /* line 2422: */
{ 
NKFATRN_outassemtok(HDDATRN_urowtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2423: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(BUFATRN_ur->Size)))),((*(&(BUFATRN_ur->Size))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2424: */
 /* line 2425: */
 /* line 2426: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(BUFATRN_ur->Elem)))),((*(&(BUFATRN_ur->Elem))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
CUFATRN_us = (DTFATRN.data.mode21);
 /* line 2427: */
{ 
DUFATRN_ustr = CUFATRN_us;
 /* line 2428: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2429: */
for ( ;; )
{ 
 /* line 2430: */
if ( !((DUFATRN_ustr!=IAAATRN_nilustr)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2431: */
 /* line 2432: */
DUFATRN_ustr = (*(&(DUFATRN_ustr->Rest)));
}
 /* line 2433: */
DUFATRN_ustr = CUFATRN_us;
 /* line 2434: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2435: */
NKFATRN_outassemtok(IDDATRN_ustrtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2436: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2437: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2438: */
NKFATRN_outassemtok(RGDATRN_unittok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2439: */
for ( ;; )
{ 
 /* line 2440: */
if ( !((DUFATRN_ustr!=IAAATRN_nilustr)) ) break;
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(DUFATRN_ustr->Elem)))),((*(&(DUFATRN_ustr->Elem))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2441: */
 /* line 2442: */
DUFATRN_ustr = (*(&(DUFATRN_ustr->Rest)));
}
 /* line 2443: */
 /* line 2444: */
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE208,MODE208)  */
EUFATRN_uc = (DTFATRN.data.mode22);
 /* line 2445: */
{ 
NKFATRN_outassemtok(JDDATRN_uconctok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2446: */
VKFATRN_outassembool((*(&(EUFATRN_uc->String))), NL(Writer), NL(Msg));
 /* line 2447: */
AKFATRN_outassemint((*(&(EUFATRN_uc->Sort))), NL(Writer), NL(Msg));
 /* line 2448: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(EUFATRN_uc->Left)))),((*(&(EUFATRN_uc->Left))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2449: */
 /* line 2450: */
 /* line 2451: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(EUFATRN_uc->Right)))),((*(&(EUFATRN_uc->Right))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 23: /* REF STRUCT(MODE248,MODE208)  */
FUFATRN_um = (DTFATRN.data.mode23);
 /* line 2452: */
{ 
NKFATRN_outassemtok(KDDATRN_uminsttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2453: */
A_CALLPROC(NL(YRFATRN_pt_instance),((*(&(FUFATRN_um->Inst)))),((*(&(FUFATRN_um->Inst))),(NL(YRFATRN_pt_instance)).nonlocals));
 /* line 2454: */
 /* line 2455: */
 /* line 2456: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(FUFATRN_um->Right)))),((*(&(FUFATRN_um->Right))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
GUFATRN_ud = (DTFATRN.data.mode24);
 /* line 2457: */
{ 
NKFATRN_outassemtok(LDDATRN_udinsttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2458: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(GUFATRN_ud->Left)))),((*(&(GUFATRN_ud->Left))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2459: */
A_CALLPROC(NL(YRFATRN_pt_instance),((*(&(GUFATRN_ud->Inst)))),((*(&(GUFATRN_ud->Inst))),(NL(YRFATRN_pt_instance)).nonlocals));
 /* line 2460: */
 /* line 2461: */
 /* line 2462: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(GUFATRN_ud->Right)))),((*(&(GUFATRN_ud->Right))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 25: /* REF STRUCT(MODE208,REF MODE268)  */
HUFATRN_uc = (DTFATRN.data.mode25);
 /* line 2463: */
{ 
NKFATRN_outassemtok(MDDATRN_ucasetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2464: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(HUFATRN_uc->Input)))),((*(&(HUFATRN_uc->Input))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2465: */
 /* line 2466: */
 /* line 2467: */
A_CALLPROC(ZSFATRN_pt_uchoices,((*(&(HUFATRN_uc->Choices)))),((*(&(HUFATRN_uc->Choices))),(ZSFATRN_pt_uchoices).nonlocals));
} 
break;
case 26: /* REF STRUCT(MODE170,MODE208,MODE208)  */
IUFATRN_ucond = (DTFATRN.data.mode26);
 /* line 2468: */
{ 
NKFATRN_outassemtok(NDDATRN_ucondtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2469: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(IUFATRN_ucond->Cond)))),((*(&(IUFATRN_ucond->Cond))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2470: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(IUFATRN_ucond->True)))),((*(&(IUFATRN_ucond->True))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2471: */
 /* line 2472: */
 /* line 2473: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(IUFATRN_ucond->False)))),((*(&(IUFATRN_ucond->False))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 27: /* REF STRUCT(MODE170,MODE208)  */
JUFATRN_ur = (DTFATRN.data.mode27);
 /* line 2474: */
{ 
NKFATRN_outassemtok(ODDATRN_urepltok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2475: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(JUFATRN_ur->Repl)))),((*(&(JUFATRN_ur->Repl))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2476: */
 /* line 2477: */
 /* line 2478: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(JUFATRN_ur->Body)))),((*(&(JUFATRN_ur->Body))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 28: /* REF STRUCT(REF MODE256,MODE208)  */
KUFATRN_us = (DTFATRN.data.mode28);
 /* line 2479: */
{ 
NKFATRN_outassemtok(PDDATRN_usequencetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2480: */
A_CALLPROC((*NL(IQFATRN_pt_sequence)),((*(&(KUFATRN_us->Body))), NL(USFATRN_pt_unit)),((*(&(KUFATRN_us->Body))), NL(USFATRN_pt_unit),((*NL(IQFATRN_pt_sequence))).nonlocals));
 /* line 2481: */
 /* line 2482: */
 /* line 2483: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(KUFATRN_us->Output)))),((*(&(KUFATRN_us->Output))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 29: /* REF STRUCT(REF MODE237,MODE208)  */
LUFATRN_us = (DTFATRN.data.mode29);
 /* line 2484: */
{ 
MUFATRN_series = (*(&(LUFATRN_us->Body)));
 /* line 2485: */
NKFATRN_outassemtok(QDDATRN_useriestok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2486: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2487: */
for ( ;; )
{ 
 /* line 2488: */
if ( !((MUFATRN_series!=SAAATRN_nilseries)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2489: */
 /* line 2490: */
MUFATRN_series = (*(&(MUFATRN_series->Rest)));
}
 /* line 2491: */
MUFATRN_series = (*(&(LUFATRN_us->Body)));
 /* line 2492: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2493: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2494: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2495: */
NKFATRN_outassemtok(VGDATRN_steptok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2496: */
for ( ;; )
{ 
 /* line 2497: */
if ( !((MUFATRN_series!=SAAATRN_nilseries)) ) break;
A_CALLPROC(NL(DSFATRN_pt_step),((*(&(MUFATRN_series->Step))), NL(USFATRN_pt_unit)),((*(&(MUFATRN_series->Step))), NL(USFATRN_pt_unit),(NL(DSFATRN_pt_step)).nonlocals));
 /* line 2498: */
 /* line 2499: */
MUFATRN_series = (*(&(MUFATRN_series->Rest)));
}
 /* line 2500: */
 /* line 2501: */
 /* line 2502: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(LUFATRN_us->Output)))),((*(&(LUFATRN_us->Output))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 32: /* REF STRUCT(MODE208)  */
NUFATRN_ub = (DTFATRN.data.mode32);
 /* line 2503: */
{ 
NKFATRN_outassemtok(UDDATRN_ubrackettok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2504: */
 /* line 2505: */
 /* line 2506: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(NUFATRN_ub->Unit)))),((*(&(NUFATRN_ub->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 30: /* REF STRUCT(MODE208,MODE161)  */
OUFATRN_ua = (DTFATRN.data.mode30);
 /* line 2507: */
{ 
NKFATRN_outassemtok(RDDATRN_uattrtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2508: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(OUFATRN_ua->Unit)))),((*(&(OUFATRN_ua->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2509: */
 /* line 2510: */
 /* line 2511: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(OUFATRN_ua->Attr)))),((*(&(OUFATRN_ua->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
} 
break;
case 31: /* REF STRUCT(MODE208,MODE172)  */
PUFATRN_uc = (DTFATRN.data.mode31);
 /* line 2512: */
{ 
NKFATRN_outassemtok(SDDATRN_uchecktok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2513: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(PUFATRN_uc->Unit)))),((*(&(PUFATRN_uc->Unit))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2514: */
 /* line 2515: */
 /* line 2516: */
RUFATRN = (&(PUFATRN_uc->Check)) ;
A_CALLPROC(NL(WMFATRN_pt_formula),(A_UNITE(QUFATRN,mode2,2,RUFATRN)),(A_UNITE(QUFATRN,mode2,2,RUFATRN),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 33: /* REF STRUCT(MODE170,MODE208)  */
SUFATRN_us = (DTFATRN.data.mode33);
 /* line 2517: */
{ 
NKFATRN_outassemtok(TDDATRN_ustringtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2518: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(SUFATRN_us->Size)))),((*(&(SUFATRN_us->Size))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2519: */
 /* line 2520: */
 /* line 2521: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(SUFATRN_us->Char)))),((*(&(SUFATRN_us->Char))),(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 34: /* REF STRUCT(INT)  */
TUFATRN_un = (DTFATRN.data.mode34);
 /* line 2522: */
NKFATRN_outassemtok(VDDATRN_unull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
default: 
 /* line 2523: */
 /* line 2524: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(WUFATRN,VUFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(WUFATRN,VUFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  ZUFATRN_pt_macparam(A68_251  Mp, void *NonLocals)
#define NL(x) (((AVFATRN_pt_macparam *)NonLocals)->x)
{ 
A68_252  BVFATRN;  /* united object - for case conformity */
A68_169  CVFATRN_ag;
A68_181  DVFATRN_ft;
A68_195  EVFATRN_tg;
A68_253  FVFATRN_cg;
A68_248  GVFATRN_i;
A_PROC_ENTRY(pt_macparam);
 /* line 2527: */
{ 
NKFATRN_outassemtok(TFDATRN_macparamtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2528: */
AKFATRN_outassemint(Mp.Sort, NL(Writer), NL(Msg));
 /* line 2529: */
 /* line 2530: */
BVFATRN = Mp.Param ;
switch ( BVFATRN.mode )
{ 
case 1: /* STRUCT(MODE161)  */
CVFATRN_ag = (BVFATRN.data.mode1);
{ 
NKFATRN_outassemtok(ZEDATRN_attrtagtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2531: */
 /* line 2532: */
 /* line 2533: */
A_CALLPROC(NL(LMFATRN_pt_attr),(CVFATRN_ag.Tag),(CVFATRN_ag.Tag,(NL(LMFATRN_pt_attr)).nonlocals));
} 
break;
case 2: /* STRUCT(MODE170)  */
DVFATRN_ft = (BVFATRN.data.mode2);
{ 
NKFATRN_outassemtok(AFDATRN_formulatagtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2534: */
 /* line 2535: */
 /* line 2536: */
A_CALLPROC(NL(WMFATRN_pt_formula),(DVFATRN_ft.Tag),(DVFATRN_ft.Tag,(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 3: /* STRUCT(MODE186)  */
EVFATRN_tg = (BVFATRN.data.mode3);
{ 
NKFATRN_outassemtok(CFDATRN_typetagtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2537: */
 /* line 2538: */
 /* line 2539: */
A_CALLPROC(NL(HOFATRN_pt_type),(EVFATRN_tg.Tag),(EVFATRN_tg.Tag,(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
case 4: /* STRUCT(MODE208)  */
FVFATRN_cg = (BVFATRN.data.mode4);
{ 
NKFATRN_outassemtok(YEDATRN_unittagtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2540: */
 /* line 2541: */
 /* line 2542: */
A_CALLPROC(NL(USFATRN_pt_unit),(FVFATRN_cg.Tag),(FVFATRN_cg.Tag,(NL(USFATRN_pt_unit)).nonlocals));
} 
break;
case 5: /* STRUCT(INT,REF MODE250,MODE161)  */
GVFATRN_i = (BVFATRN.data.mode5);
 /* line 2543: */
 /* line 2544: */
A_CALLPROC(NL(YRFATRN_pt_instance),(GVFATRN_i),(GVFATRN_i,(NL(YRFATRN_pt_instance)).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(pt_macparam);
return;
} 
#undef NL

A_STATIC A68_VOID  JVFATRN_do_pt_macparams(A68_250  Mps, void *NonLocals)
#define NL(x) (((KVFATRN_do_pt_macparams *)NonLocals)->x)
{ 
A68_INT  LVFATRN;  /* clause result */
A68_INT  MVFATRN_size;
A68_INT  NVFATRN_index;
A68_INT  OVFATRN;  /* to part of loop */
A_PROC_ENTRY(do_pt_macparams);
 /* line 2548: */
{ 
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2549: */
 /* line 2550: */
 /* line 2551: */
if ( ! A_VSTRUCTCOMP(Mps,ABAATRN_nilmacparams) )
{ 
 /* line 2552: */
LVFATRN = Mps.upb;
} 
else
{ 
LVFATRN = (-1);
} 
MVFATRN_size = LVFATRN;
 /* line 2553: */
AKFATRN_outassemint(MVFATRN_size, NL(Writer), NL(Msg));
 /* line 2554: */
NKFATRN_outassemtok(TFDATRN_macparamtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2555: */
 /* line 2556: */
if ( (MVFATRN_size>0) )
{ 
OVFATRN = Mps.upb;
for ( NVFATRN_index = 1;
NVFATRN_index <= OVFATRN;
NVFATRN_index += 1 )
{ 
A_CALLPROC(NL(YUFATRN_pt_macparam),((*(&A_VINDEX(Mps,NVFATRN_index)))),((*(&A_VINDEX(Mps,NVFATRN_index))),(NL(YUFATRN_pt_macparam)).nonlocals));
}
 /* line 2557: */
 /* line 2558: */
} 
} 
A_PROC_EXIT(do_pt_macparams);
return;
} 
#undef NL

A_STATIC A68_VOID  SVFATRN_pt_fnbody(A68_280  Body, A68_435  Pt_unit, void *NonLocals)
#define NL(x) (((TVFATRN_pt_fnbody *)NonLocals)->x)
{ 
A68_280  UVFATRN;  /* united object - for case conformity */
A68_253 * VVFATRN_ug;
A68_271 * WVFATRN_ra;
A68_270 * XVFATRN_al;
A68_273 * YVFATRN_im;
A68_275 * ZVFATRN_id;
A68_274 * AWFATRN_ad;
A68_276 * BWFATRN_rm;
A68_272 * CWFATRN_rf;
A68_277 * DWFATRN_sp;
A68_278 * EWFATRN_ts;
A68_279 * FWFATRN_bc;
A68_160 * GWFATRN_joincheck;
A68_281 * HWFATRN_bn;
A68_46  KWFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_fnbody);
 /* line 2563: */
{ 
 /* line 2564: */
UVFATRN = Body ;
switch ( UVFATRN.mode )
{ 
case 1: /* REF STRUCT(MODE208)  */
VVFATRN_ug = (UVFATRN.data.mode1);
 /* line 2565: */
{ 
NKFATRN_outassemtok(YEDATRN_unittagtok, (VVFATRN_ug==KAAATRN_nilunit), NL(Writer), NL(Msg));
 /* line 2566: */
if ( (VVFATRN_ug!=KAAATRN_nilunit) )
{ 
 /* line 2567: */
 /* line 2568: */
A_CALLPROC(Pt_unit,((*(&(VVFATRN_ug->Tag)))),((*(&(VVFATRN_ug->Tag))),(Pt_unit).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(MODE170)  */
WVFATRN_ra = (UVFATRN.data.mode3);
 /* line 2569: */
{ 
NKFATRN_outassemtok(OEDATRN_arithtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2570: */
 /* line 2571: */
 /* line 2572: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(WVFATRN_ra->Output)))),((*(&(WVFATRN_ra->Output))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE250)  */
XVFATRN_al = (UVFATRN.data.mode2);
 /* line 2573: */
{ 
NKFATRN_outassemtok(NEDATRN_alientok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2574: */
VKFATRN_outassembool((*(&(XVFATRN_al->Biop))), NL(Writer), NL(Msg));
 /* line 2575: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(XVFATRN_al->Name))), NL(Writer), NL(Msg)),((*(&(XVFATRN_al->Name))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2576: */
 /* line 2577: */
 /* line 2578: */
A_CALLPROC((*NL(VRFATRN_pt_macparams)),((*(&(XVFATRN_al->Macparams)))),((*(&(XVFATRN_al->Macparams))),((*NL(VRFATRN_pt_macparams))).nonlocals));
} 
break;
case 5: /* REF STRUCT(REF MODE26,INT,MODE158)  */
YVFATRN_im = (UVFATRN.data.mode5);
 /* line 2579: */
{ 
 /* line 2580: */
if ( (YVFATRN_im!=TAAATRN_nilimport) )
{ 
NKFATRN_outassemtok(QEDATRN_importtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2581: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(YVFATRN_im->Name))), NL(Writer), NL(Msg)),((*(&(YVFATRN_im->Name))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2582: */
AKFATRN_outassemint((*(&(YVFATRN_im->Contextno))), NL(Writer), NL(Msg));
 /* line 2583: */
NKFATRN_outassemtok(RFDATRN_ctnametok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2584: */
A_CALLPROC(NL(WLFATRN_outid),((*(&((&(YVFATRN_im->Ctname))->Context))), NL(Writer), NL(Msg)),((*(&((&(YVFATRN_im->Ctname))->Context))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2585: */
 /* line 2586: */
A_CALLPROC(NL(WLFATRN_outid),((*(&((&(YVFATRN_im->Ctname))->Import))), NL(Writer), NL(Msg)),((*(&((&(YVFATRN_im->Ctname))->Import))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
} 
else
{ 
 /* line 2587: */
 /* line 2588: */
 /* line 2589: */
NKFATRN_outassemtok(QEDATRN_importtok, A68_TRUE, NL(Writer), NL(Msg));
} 
} 
break;
case 7: /* REF STRUCT(MODE208,MODE170)  */
ZVFATRN_id = (UVFATRN.data.mode7);
 /* line 2590: */
{ 
NKFATRN_outassemtok(SEDATRN_idelaytok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2591: */
A_CALLPROC(Pt_unit,((*(&(ZVFATRN_id->Init)))),((*(&(ZVFATRN_id->Init))),(Pt_unit).nonlocals));
 /* line 2592: */
 /* line 2593: */
 /* line 2594: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(ZVFATRN_id->Delaytime)))),((*(&(ZVFATRN_id->Delaytime))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT,MODE208,MODE170,MODE208,MODE170)  */
AWFATRN_ad = (UVFATRN.data.mode6);
 /* line 2595: */
{ 
NKFATRN_outassemtok(REDATRN_adelaytok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2596: */
AKFATRN_outassemint((*(&(AWFATRN_ad->Sort))), NL(Writer), NL(Msg));
 /* line 2597: */
A_CALLPROC(Pt_unit,((*(&(AWFATRN_ad->Init)))),((*(&(AWFATRN_ad->Init))),(Pt_unit).nonlocals));
 /* line 2598: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(AWFATRN_ad->Ambigtime)))),((*(&(AWFATRN_ad->Ambigtime))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2599: */
A_CALLPROC(Pt_unit,((*(&(AWFATRN_ad->Ambig)))),((*(&(AWFATRN_ad->Ambig))),(Pt_unit).nonlocals));
 /* line 2600: */
 /* line 2601: */
 /* line 2602: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(AWFATRN_ad->Delaytime)))),((*(&(AWFATRN_ad->Delaytime))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE208)  */
BWFATRN_rm = (UVFATRN.data.mode8);
 /* line 2603: */
{ 
NKFATRN_outassemtok(TEDATRN_ramtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2604: */
 /* line 2605: */
 /* line 2606: */
A_CALLPROC(Pt_unit,((*(&(BWFATRN_rm->Init)))),((*(&(BWFATRN_rm->Init))),(Pt_unit).nonlocals));
} 
break;
case 4: /* REF STRUCT(INT)  */
CWFATRN_rf = (UVFATRN.data.mode4);
 /* line 2607: */
 /* line 2608: */
 /* line 2609: */
NKFATRN_outassemtok(PEDATRN_reformtok, A68_FALSE, NL(Writer), NL(Msg));
break;
case 9: /* REF STRUCT(INT,MODE170,MODE208,MODE170)  */
DWFATRN_sp = (UVFATRN.data.mode9);
 /* line 2610: */
{ 
NKFATRN_outassemtok(UEDATRN_sampletok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2611: */
AKFATRN_outassemint((*(&(DWFATRN_sp->Sort))), NL(Writer), NL(Msg));
 /* line 2612: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(DWFATRN_sp->Interval)))),((*(&(DWFATRN_sp->Interval))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2613: */
A_CALLPROC(Pt_unit,((*(&(DWFATRN_sp->Init)))),((*(&(DWFATRN_sp->Init))),(Pt_unit).nonlocals));
 /* line 2614: */
 /* line 2615: */
 /* line 2616: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(DWFATRN_sp->Skew)))),((*(&(DWFATRN_sp->Skew))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 10: /* REF STRUCT(BOOL,INT,MODE248,MODE170,MODE208,MODE170)  */
EWFATRN_ts = (UVFATRN.data.mode10);
 /* line 2617: */
{ 
NKFATRN_outassemtok(VEDATRN_timescaletok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2618: */
VKFATRN_outassembool((*(&(EWFATRN_ts->Faster))), NL(Writer), NL(Msg));
 /* line 2619: */
AKFATRN_outassemint((*(&(EWFATRN_ts->Sort))), NL(Writer), NL(Msg));
 /* line 2620: */
A_CALLPROC(NL(YRFATRN_pt_instance),((*(&(EWFATRN_ts->Inst)))),((*(&(EWFATRN_ts->Inst))),(NL(YRFATRN_pt_instance)).nonlocals));
 /* line 2621: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(EWFATRN_ts->Scale)))),((*(&(EWFATRN_ts->Scale))),(NL(WMFATRN_pt_formula)).nonlocals));
 /* line 2622: */
A_CALLPROC(Pt_unit,((*(&(EWFATRN_ts->Init)))),((*(&(EWFATRN_ts->Init))),(Pt_unit).nonlocals));
 /* line 2623: */
 /* line 2624: */
 /* line 2625: */
A_CALLPROC(NL(WMFATRN_pt_formula),((*(&(EWFATRN_ts->Skew)))),((*(&(EWFATRN_ts->Skew))),(NL(WMFATRN_pt_formula)).nonlocals));
} 
break;
case 11: /* REF STRUCT(REF MODE160,BOOL,MODE280)  */
FWFATRN_bc = (UVFATRN.data.mode11);
 /* line 2626: */
{ 
NKFATRN_outassemtok(WEDATRN_bodychecktok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2627: */
GWFATRN_joincheck = (*(&(FWFATRN_bc->Joincheck)));
 /* line 2628: */
(*NL(SLFATRN_listnumb)) = 0;
 /* line 2629: */
for ( ;; )
{ 
 /* line 2630: */
if ( !((GWFATRN_joincheck!=OAAATRN_nilints)) ) break;
(*NL(SLFATRN_listnumb))+=1;
 /* line 2631: */
 /* line 2632: */
GWFATRN_joincheck = (*(&(GWFATRN_joincheck->Rest)));
}
 /* line 2633: */
if ( ((*NL(SLFATRN_listnumb))==0) )
{ 
(*NL(SLFATRN_listnumb)) = (-1);
} 
 /* line 2634: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2635: */
AKFATRN_outassemint((*NL(SLFATRN_listnumb)), NL(Writer), NL(Msg));
 /* line 2636: */
NKFATRN_outassemtok(QBDATRN_inttok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2637: */
GWFATRN_joincheck = (*(&(FWFATRN_bc->Joincheck)));
 /* line 2638: */
for ( ;; )
{ 
 /* line 2639: */
if ( !((GWFATRN_joincheck!=OAAATRN_nilints)) ) break;
AKFATRN_outassemint((*(&(GWFATRN_joincheck->Int))), NL(Writer), NL(Msg));
 /* line 2640: */
 /* line 2641: */
GWFATRN_joincheck = (*(&(GWFATRN_joincheck->Rest)));
}
 /* line 2642: */
VKFATRN_outassembool((*(&(FWFATRN_bc->Check))), NL(Writer), NL(Msg));
 /* line 2643: */
 /* line 2644: */
 /* line 2645: */
A_CALLPROC(NL(RVFATRN_pt_fnbody),((*(&(FWFATRN_bc->Fnbody))), Pt_unit),((*(&(FWFATRN_bc->Fnbody))), Pt_unit,(NL(RVFATRN_pt_fnbody)).nonlocals));
} 
break;
case 12: /* REF STRUCT(INT)  */
HWFATRN_bn = (UVFATRN.data.mode12);
 /* line 2646: */
 /* line 2647: */
NKFATRN_outassemtok(XEDATRN_bodynull_tok, A68_FALSE, NL(Writer), NL(Msg));
break;
default: 
 /* line 2648: */
 /* line 2649: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(KWFATRN,JWFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(KWFATRN,JWFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_fnbody);
return;
} 
#undef NL

A_STATIC A68_VOID  NWFATRN_pt_macspec(A68_282 * Ms, void *NonLocals)
#define NL(x) (((OWFATRN_pt_macspec *)NonLocals)->x)
{ 
A68_269  PWFATRN;  /* united object - for case conformity */
A68_162  QWFATRN_an;
A68_174  RWFATRN_fn;
A68_187  SWFATRN_tn;
A68_202  TWFATRN_cn;
A68_239  UWFATRN_fnn;
A68_46  XWFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_macspec);
 /* line 2652: */
{ 
NKFATRN_outassemtok(UFDATRN_macspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2653: */
AKFATRN_outassemint((*(&(Ms->Sort))), NL(Writer), NL(Msg));
 /* line 2654: */
 /* line 2655: */
PWFATRN = (*(&(Ms->Spec))) ;
switch ( PWFATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
QWFATRN_an = (PWFATRN.data.mode1);
 /* line 2656: */
{ 
NKFATRN_outassemtok(GGDATRN_attrmacspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2657: */
 /* line 2658: */
 /* line 2659: */
AKFATRN_outassemint(QWFATRN_an.Attrno, NL(Writer), NL(Msg));
} 
break;
case 2: /* STRUCT(INT)  */
RWFATRN_fn = (PWFATRN.data.mode2);
 /* line 2660: */
{ 
NKFATRN_outassemtok(HGDATRN_fmacspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2661: */
 /* line 2662: */
 /* line 2663: */
AKFATRN_outassemint(RWFATRN_fn.Intno, NL(Writer), NL(Msg));
} 
break;
case 3: /* STRUCT(INT)  */
SWFATRN_tn = (PWFATRN.data.mode3);
 /* line 2664: */
{ 
NKFATRN_outassemtok(IGDATRN_tmacspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2665: */
 /* line 2666: */
 /* line 2667: */
AKFATRN_outassemint(SWFATRN_tn.Typeno, NL(Writer), NL(Msg));
} 
break;
case 4: /* STRUCT(INT)  */
TWFATRN_cn = (PWFATRN.data.mode4);
 /* line 2668: */
{ 
NKFATRN_outassemtok(JGDATRN_cmacspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2669: */
 /* line 2670: */
 /* line 2671: */
AKFATRN_outassemint(TWFATRN_cn.Constno, NL(Writer), NL(Msg));
} 
break;
case 5: /* STRUCT(INT)  */
UWFATRN_fnn = (PWFATRN.data.mode5);
 /* line 2672: */
{ 
NKFATRN_outassemtok(KGDATRN_fnmacspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2673: */
 /* line 2674: */
 /* line 2675: */
AKFATRN_outassemint(UWFATRN_fnn.Fnno, NL(Writer), NL(Msg));
} 
break;
default: 
 /* line 2676: */
 /* line 2677: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(XWFATRN,WWFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(XWFATRN,WWFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_macspec);
return;
} 
#undef NL

A_STATIC A68_VOID  AXFATRN_pt_usage(A68_168 * Us, void *NonLocals)
#define NL(x) (((BXFATRN_pt_usage *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_usage);
 /* line 2680: */
{ 
 /* line 2681: */
if ( (Us==CBAATRN_nilusage) )
{ 
 /* line 2682: */
NKFATRN_outassemtok(QFDATRN_usagetok, A68_TRUE, NL(Writer), NL(Msg));
} 
else
{ 
NKFATRN_outassemtok(QFDATRN_usagetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2683: */
AKFATRN_outassemint((*(&(Us->Contextno))), NL(Writer), NL(Msg));
 /* line 2684: */
AKFATRN_outassemint((*(&(Us->Closureno))), NL(Writer), NL(Msg));
 /* line 2685: */
AKFATRN_outassemint((*(&(Us->Libv_spec))), NL(Writer), NL(Msg));
 /* line 2686: */
AKFATRN_outassemint((*(&(Us->Libv_body))), NL(Writer), NL(Msg));
 /* line 2687: */
VKFATRN_outassembool((*(&(Us->Import))), NL(Writer), NL(Msg));
 /* line 2688: */
 /* line 2689: */
 /* line 2690: */
VKFATRN_outassembool((*(&(Us->Export))), NL(Writer), NL(Msg));
} 
} 
A_PROC_EXIT(pt_usage);
return;
} 
#undef NL

A_STATIC A68_VOID  EXFATRN_pt_attrdec(A68_167 * Ad, void *NonLocals)
#define NL(x) (((FXFATRN_pt_attrdec *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_attrdec);
 /* line 2693: */
{ 
 /* line 2694: */
if ( (Ad==UAAATRN_nilattrdec) )
{ 
 /* line 2695: */
NKFATRN_outassemtok(GFDATRN_attrdectok, A68_TRUE, NL(Writer), NL(Msg));
} 
else
{ 
NKFATRN_outassemtok(GFDATRN_attrdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2696: */
AKFATRN_outassemint((*(&(Ad->Sort))), NL(Writer), NL(Msg));
 /* line 2697: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(Ad->Attrname))), NL(Writer), NL(Msg)),((*(&(Ad->Attrname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2698: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(Ad->Value)))),((*(&(Ad->Value))),(NL(LMFATRN_pt_attr)).nonlocals));
 /* line 2699: */
 /* line 2700: */
 /* line 2701: */
A_CALLPROC(NL(ZWFATRN_pt_usage),((*(&(Ad->Usage)))),((*(&(Ad->Usage))),(NL(ZWFATRN_pt_usage)).nonlocals));
} 
} 
A_PROC_EXIT(pt_attrdec);
return;
} 
#undef NL

A_STATIC A68_VOID  IXFATRN_pt_intdec(A68_183 * Id, void *NonLocals)
#define NL(x) (((JXFATRN_pt_intdec *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_intdec);
 /* line 2704: */
{ 
 /* line 2705: */
if ( (Id==VAAATRN_nilintdec) )
{ 
 /* line 2706: */
NKFATRN_outassemtok(HFDATRN_intdectok, A68_TRUE, NL(Writer), NL(Msg));
} 
else
{ 
NKFATRN_outassemtok(HFDATRN_intdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2707: */
AKFATRN_outassemint((*(&(Id->Sort))), NL(Writer), NL(Msg));
 /* line 2708: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(Id->Intname))), NL(Writer), NL(Msg)),((*(&(Id->Intname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2709: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(Id->Attr)))),((*(&(Id->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
 /* line 2710: */
A_CALLPROC(NL(XNFATRN_pt_formularange),((*(&(Id->Value)))),((*(&(Id->Value))),(NL(XNFATRN_pt_formularange)).nonlocals));
 /* line 2711: */
 /* line 2712: */
 /* line 2713: */
A_CALLPROC(NL(ZWFATRN_pt_usage),((*(&(Id->Usage)))),((*(&(Id->Usage))),(NL(ZWFATRN_pt_usage)).nonlocals));
} 
} 
A_PROC_EXIT(pt_intdec);
return;
} 
#undef NL

A_STATIC A68_VOID  MXFATRN_pt_typebody(A68_199  Body, void *NonLocals)
#define NL(x) (((NXFATRN_pt_typebody *)NonLocals)->x)
{ 
A68_199  OXFATRN;  /* united object - for case conformity */
A68_200  PXFATRN_nn;
A68_INT  QXFATRN_index;
A68_INT  RXFATRN;  /* to part of loop */
A68_197  SXFATRN_al;
A68_198 * TXFATRN_ni;
A68_196 * UXFATRN_nc;
A68_195 * VXFATRN_tg;
A68_46  YXFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt_typebody);
 /* line 2716: */
{ 
 /* line 2717: */
OXFATRN = Body ;
switch ( OXFATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE197 */
PXFATRN_nn = (OXFATRN.data.mode1);
 /* line 2718: */
{ 
NKFATRN_outassemtok(DFDATRN_rvalternativetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2719: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2720: */
AKFATRN_outassemint(PXFATRN_nn.upb, NL(Writer), NL(Msg));
 /* line 2721: */
NKFATRN_outassemtok(SFDATRN_alternativetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2722: */
 /* line 2723: */
RXFATRN = PXFATRN_nn.upb;
for ( QXFATRN_index = 1;
QXFATRN_index <= RXFATRN;
QXFATRN_index += 1 )
{ 
SXFATRN_al = (*(&A_VINDEX(PXFATRN_nn,QXFATRN_index)));
 /* line 2724: */
NKFATRN_outassemtok(SFDATRN_alternativetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2725: */
A_CALLPROC(NL(WLFATRN_outid),(SXFATRN_al.Altname, NL(Writer), NL(Msg)),(SXFATRN_al.Altname, NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2726: */
 /* line 2727: */
A_CALLPROC(NL(HOFATRN_pt_type),(SXFATRN_al.Assoc),(SXFATRN_al.Assoc,(NL(HOFATRN_pt_type)).nonlocals));
}
 /* line 2728: */
 /* line 2729: */
} 
break;
case 2: /* REF STRUCT(REF MODE26,MODE185)  */
TXFATRN_ni = (OXFATRN.data.mode2);
 /* line 2730: */
{ 
NKFATRN_outassemtok(EFDATRN_newintstok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2731: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(TXFATRN_ni->Tagname))), NL(Writer), NL(Msg)),((*(&(TXFATRN_ni->Tagname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2732: */
 /* line 2733: */
 /* line 2734: */
A_CALLPROC(NL(ONFATRN_pt_range),((*(&(TXFATRN_ni->Range)))),((*(&(TXFATRN_ni->Range))),(NL(ONFATRN_pt_range)).nonlocals));
} 
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
UXFATRN_nc = (OXFATRN.data.mode4);
 /* line 2735: */
{ 
NKFATRN_outassemtok(FFDATRN_newcharstok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2736: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(UXFATRN_nc->Tagname))), NL(Writer), NL(Msg)),((*(&(UXFATRN_nc->Tagname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2737: */
 /* line 2738: */
 /* line 2739: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(UXFATRN_nc->Chars))), NL(Writer), NL(Msg)),((*(&(UXFATRN_nc->Chars))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE186)  */
VXFATRN_tg = (OXFATRN.data.mode3);
 /* line 2740: */
{ 
NKFATRN_outassemtok(CFDATRN_typetagtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2741: */
 /* line 2742: */
 /* line 2743: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(VXFATRN_tg->Tag)))),((*(&(VXFATRN_tg->Tag))),(NL(HOFATRN_pt_type)).nonlocals));
} 
break;
default: 
 /* line 2744: */
 /* line 2745: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(YXFATRN,XXFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(YXFATRN,XXFATRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(pt_typebody);
return;
} 
#undef NL

A_STATIC A68_VOID  BYFATRN_pt_typedec(A68_201 * Ty, void *NonLocals)
#define NL(x) (((CYFATRN_pt_typedec *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_typedec);
 /* line 2748: */
{ 
 /* line 2749: */
if ( (Ty==WAAATRN_niltypedec) )
{ 
 /* line 2750: */
NKFATRN_outassemtok(IFDATRN_typedectok, A68_TRUE, NL(Writer), NL(Msg));
} 
else
{ 
NKFATRN_outassemtok(IFDATRN_typedectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2751: */
AKFATRN_outassemint((*(&(Ty->Sort))), NL(Writer), NL(Msg));
 /* line 2752: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(Ty->Typename))), NL(Writer), NL(Msg)),((*(&(Ty->Typename))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2753: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(Ty->Attr)))),((*(&(Ty->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
 /* line 2754: */
A_CALLPROC(NL(LXFATRN_pt_typebody),((*(&(Ty->Body)))),((*(&(Ty->Body))),(NL(LXFATRN_pt_typebody)).nonlocals));
 /* line 2755: */
 /* line 2756: */
 /* line 2757: */
A_CALLPROC(NL(ZWFATRN_pt_usage),((*(&(Ty->Usage)))),((*(&(Ty->Usage))),(NL(ZWFATRN_pt_usage)).nonlocals));
} 
} 
A_PROC_EXIT(pt_typedec);
return;
} 
#undef NL

A_STATIC A68_VOID  FYFATRN_pt_constdec(A68_207 * Cd, void *NonLocals)
#define NL(x) (((GYFATRN_pt_constdec *)NonLocals)->x)
{ 
A_PROC_ENTRY(pt_constdec);
 /* line 2760: */
{ 
 /* line 2761: */
if ( (Cd==XAAATRN_nilconstdec) )
{ 
 /* line 2762: */
NKFATRN_outassemtok(JFDATRN_constdectok, A68_TRUE, NL(Writer), NL(Msg));
} 
else
{ 
NKFATRN_outassemtok(JFDATRN_constdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2763: */
AKFATRN_outassemint((*(&(Cd->Sort))), NL(Writer), NL(Msg));
 /* line 2764: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(Cd->Constname))), NL(Writer), NL(Msg)),((*(&(Cd->Constname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2765: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(Cd->Attr)))),((*(&(Cd->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
 /* line 2766: */
A_CALLPROC(NL(USFATRN_pt_unit),((*(&(Cd->Value)))),((*(&(Cd->Value))),(NL(USFATRN_pt_unit)).nonlocals));
 /* line 2767: */
 /* line 2768: */
 /* line 2769: */
A_CALLPROC(NL(ZWFATRN_pt_usage),((*(&(Cd->Usage)))),((*(&(Cd->Usage))),(NL(ZWFATRN_pt_usage)).nonlocals));
} 
} 
A_PROC_EXIT(pt_constdec);
return;
} 
#undef NL

A_STATIC A68_VOID  JYFATRN_pt_fndec(A68_284 * Fd, void *NonLocals)
#define NL(x) (((KYFATRN_pt_fndec *)NonLocals)->x)
{ 
A68_285  LYFATRN;  /* == */
A68_282 * MYFATRN_ms;
A68_285  NYFATRN;  /* forall yield */
A68_INT  OYFATRN;  /* forall loop counter */
A68_283 * PYFATRN_nametype;
A68_286  QYFATRN;  /* forall yield */
A68_INT  RYFATRN;  /* forall loop counter */
A_PROC_ENTRY(pt_fndec);
 /* line 2772: */
{ 
 /* line 2773: */
if ( (Fd==YAAATRN_nilfndec) )
{ 
 /* line 2774: */
NKFATRN_outassemtok(KFDATRN_fndectok, A68_TRUE, NL(Writer), NL(Msg));
} 
else
{ 
NKFATRN_outassemtok(KFDATRN_fndectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2775: */
AKFATRN_outassemint((*(&(Fd->Sort))), NL(Writer), NL(Msg));
 /* line 2776: */
VKFATRN_outassembool((*(&(Fd->Macro))), NL(Writer), NL(Msg));
 /* line 2777: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(Fd->Fnname))), NL(Writer), NL(Msg)),((*(&(Fd->Fnname))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2778: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2779: */
 /* line 2780: */
LYFATRN = (*(&(Fd->Macspecs))) ;
if ( A_VSTRUCTCOMP(LYFATRN,FBAATRN_nilmacspecs) )
{ 
 /* line 2781: */
AKFATRN_outassemint((-1), NL(Writer), NL(Msg));
} 
else
{ 
 /* line 2782: */
AKFATRN_outassemint((*(&(Fd->Macspecs))).upb, NL(Writer), NL(Msg));
} 
 /* line 2783: */
NKFATRN_outassemtok(UFDATRN_macspectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2784: */
NYFATRN = (*(&(Fd->Macspecs))) ;
OYFATRN = NYFATRN.upb -1;
MYFATRN_ms = NYFATRN.data;
for (;OYFATRN-- >= 0;
(MYFATRN_ms++
) )
{
A_CALLPROC(NL(MWFATRN_pt_macspec),(MYFATRN_ms),(MYFATRN_ms,(NL(MWFATRN_pt_macspec)).nonlocals));
}
 /* line 2785: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(Fd->Attr)))),((*(&(Fd->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
 /* line 2786: */
A_CALLPROC(NL(JPFATRN_pt_names),((*(&(Fd->Inputs)))),((*(&(Fd->Inputs))),(NL(JPFATRN_pt_names)).nonlocals));
 /* line 2787: */
A_CALLPROC(NL(JPFATRN_pt_names),((*(&(Fd->Outputs)))),((*(&(Fd->Outputs))),(NL(JPFATRN_pt_names)).nonlocals));
 /* line 2788: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2789: */
AKFATRN_outassemint((*(&(Fd->Nametypes))).upb, NL(Writer), NL(Msg));
 /* line 2790: */
NKFATRN_outassemtok(VFDATRN_nametypetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2791: */
 /* line 2792: */
QYFATRN = (*(&(Fd->Nametypes))) ;
RYFATRN = QYFATRN.upb -1;
PYFATRN_nametype = QYFATRN.data;
for (;RYFATRN-- >= 0;
(PYFATRN_nametype++
) )
{
NKFATRN_outassemtok(VFDATRN_nametypetok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2793: */
A_CALLPROC(NL(WLFATRN_outid),((*(&(PYFATRN_nametype->Name))), NL(Writer), NL(Msg)),((*(&(PYFATRN_nametype->Name))), NL(Writer), NL(Msg),(NL(WLFATRN_outid)).nonlocals));
 /* line 2794: */
A_CALLPROC(NL(HOFATRN_pt_type),((*(&(PYFATRN_nametype->Type)))),((*(&(PYFATRN_nametype->Type))),(NL(HOFATRN_pt_type)).nonlocals));
 /* line 2795: */
 /* line 2796: */
A_CALLPROC(NL(LMFATRN_pt_attr),((*(&(PYFATRN_nametype->Attr)))),((*(&(PYFATRN_nametype->Attr))),(NL(LMFATRN_pt_attr)).nonlocals));
}
 /* line 2797: */
A_CALLPROC(NL(RVFATRN_pt_fnbody),((*(&(Fd->Fnbody))), NL(USFATRN_pt_unit)),((*(&(Fd->Fnbody))), NL(USFATRN_pt_unit),(NL(RVFATRN_pt_fnbody)).nonlocals));
 /* line 2798: */
 /* line 2799: */
 /* line 2800: */
A_CALLPROC(NL(ZWFATRN_pt_usage),((*(&(Fd->Usage)))),((*(&(Fd->Usage))),(NL(ZWFATRN_pt_usage)).nonlocals));
} 
} 
A_PROC_EXIT(pt_fndec);
return;
} 
#undef NL

A_STATIC A68_VOID  UYFATRN_pt_environ(A68_287 * Env, void *NonLocals)
#define NL(x) (((VYFATRN_pt_environ *)NonLocals)->x)
{ 
A68_167 ** WYFATRN_attr;
A68_288  XYFATRN;  /* forall yield */
A68_INT  YYFATRN;  /* forall loop counter */
A68_183 ** ZYFATRN_int;
A68_289  AZFATRN;  /* forall yield */
A68_INT  BZFATRN;  /* forall loop counter */
A68_201 ** CZFATRN_type;
A68_290  DZFATRN;  /* forall yield */
A68_INT  EZFATRN;  /* forall loop counter */
A68_207 ** FZFATRN_const;
A68_291  GZFATRN;  /* forall yield */
A68_INT  HZFATRN;  /* forall loop counter */
A68_284 ** IZFATRN_fn;
A68_292  JZFATRN;  /* forall yield */
A68_INT  KZFATRN;  /* forall loop counter */
A_PROC_ENTRY(pt_environ);
 /* line 2803: */
{ 
NKFATRN_outassemtok(YFDATRN_environtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2804: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2805: */
AKFATRN_outassemint((*(&(Env->Attrs))).upb, NL(Writer), NL(Msg));
 /* line 2806: */
NKFATRN_outassemtok(GFDATRN_attrdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2807: */
XYFATRN = (*(&(Env->Attrs))) ;
YYFATRN = XYFATRN.upb -1;
WYFATRN_attr = XYFATRN.data;
for (;YYFATRN-- >= 0;
(WYFATRN_attr++
) )
{
A_CALLPROC(NL(DXFATRN_pt_attrdec),((*WYFATRN_attr)),((*WYFATRN_attr),(NL(DXFATRN_pt_attrdec)).nonlocals));
}
 /* line 2808: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2809: */
AKFATRN_outassemint((*(&(Env->Ints))).upb, NL(Writer), NL(Msg));
 /* line 2810: */
NKFATRN_outassemtok(HFDATRN_intdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2811: */
AZFATRN = (*(&(Env->Ints))) ;
BZFATRN = AZFATRN.upb -1;
ZYFATRN_int = AZFATRN.data;
for (;BZFATRN-- >= 0;
(ZYFATRN_int++
) )
{
A_CALLPROC(NL(HXFATRN_pt_intdec),((*ZYFATRN_int)),((*ZYFATRN_int),(NL(HXFATRN_pt_intdec)).nonlocals));
}
 /* line 2812: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2813: */
AKFATRN_outassemint((*(&(Env->Types))).upb, NL(Writer), NL(Msg));
 /* line 2814: */
NKFATRN_outassemtok(IFDATRN_typedectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2815: */
DZFATRN = (*(&(Env->Types))) ;
EZFATRN = DZFATRN.upb -1;
CZFATRN_type = DZFATRN.data;
for (;EZFATRN-- >= 0;
(CZFATRN_type++
) )
{
A_CALLPROC(NL(AYFATRN_pt_typedec),((*CZFATRN_type)),((*CZFATRN_type),(NL(AYFATRN_pt_typedec)).nonlocals));
}
 /* line 2816: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2817: */
AKFATRN_outassemint((*(&(Env->Consts))).upb, NL(Writer), NL(Msg));
 /* line 2818: */
NKFATRN_outassemtok(JFDATRN_constdectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2819: */
GZFATRN = (*(&(Env->Consts))) ;
HZFATRN = GZFATRN.upb -1;
FZFATRN_const = GZFATRN.data;
for (;HZFATRN-- >= 0;
(FZFATRN_const++
) )
{
A_CALLPROC(NL(EYFATRN_pt_constdec),((*FZFATRN_const)),((*FZFATRN_const),(NL(EYFATRN_pt_constdec)).nonlocals));
}
 /* line 2820: */
NKFATRN_outassemtok(TBDATRN_vectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2821: */
AKFATRN_outassemint((*(&(Env->Fns))).upb, NL(Writer), NL(Msg));
 /* line 2822: */
NKFATRN_outassemtok(KFDATRN_fndectok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2823: */
JZFATRN = (*(&(Env->Fns))) ;
KZFATRN = JZFATRN.upb -1;
IZFATRN_fn = JZFATRN.data;
for (;KZFATRN-- >= 0;
(IZFATRN_fn++
) )
{
A_CALLPROC(NL(IYFATRN_pt_fndec),((*IZFATRN_fn)),((*IZFATRN_fn),(NL(IYFATRN_pt_fndec)).nonlocals));
}
 /* line 2824: */
} 
A_PROC_EXIT(pt_environ);
return;
} 
#undef NL

A_STATIC A68_VOID  NZFATRN_pt_closure(A68_297 * Closure, void *NonLocals)
#define NL(x) (((OZFATRN_pt_closure *)NonLocals)->x)
{ 
A68_294 * PZFATRN_outers;
A68_INT  QZFATRN_n;
A_PROC_ENTRY(pt_closure);
 /* line 2827: */
 /* line 2828: */
{ 
A_CALLPROC(NL(XLFATRN_pt_idstable),(),((NL(XLFATRN_pt_idstable)).nonlocals));
 /* line 2829: */
AKFATRN_outassemint(0, NL(Writer), NL(Msg));
 /* line 2830: */
NKFATRN_outassemtok(AGDATRN_closuretok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2831: */
PZFATRN_outers = (*(&(Closure->Outers)));
 /* line 2832: */
QZFATRN_n = 0;
 /* line 2833: */
for ( ;; )
{ 
if ( !((PZFATRN_outers!=HBAATRN_nilouters)) ) break;
QZFATRN_n+=1;
PZFATRN_outers = (*(&(PZFATRN_outers->Rest)));
}
 /* line 2834: */
if ( (QZFATRN_n==0) )
{ 
QZFATRN_n = (-1);
} 
 /* line 2835: */
NKFATRN_outassemtok(SBDATRN_listtok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2836: */
AKFATRN_outassemint(QZFATRN_n, NL(Writer), NL(Msg));
 /* line 2837: */
NKFATRN_outassemtok(ZFDATRN_outertok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2838: */
PZFATRN_outers = (*(&(Closure->Outers)));
 /* line 2839: */
for ( ;; )
{ 
 /* line 2840: */
if ( !((PZFATRN_outers!=HBAATRN_nilouters)) ) break;
NKFATRN_outassemtok(ZFDATRN_outertok, A68_FALSE, NL(Writer), NL(Msg));
 /* line 2841: */
AKFATRN_outassemint((*(&((&(PZFATRN_outers->Outer))->Closureno))), NL(Writer), NL(Msg));
 /* line 2842: */
AKFATRN_outassemint((*(&((&(PZFATRN_outers->Outer))->Sort))), NL(Writer), NL(Msg));
 /* line 2843: */
A_CALLPROC(NL(TYFATRN_pt_environ),((*(&((&(PZFATRN_outers->Outer))->Environ)))),((*(&((&(PZFATRN_outers->Outer))->Environ))),(NL(TYFATRN_pt_environ)).nonlocals));
 /* line 2844: */
 /* line 2845: */
PZFATRN_outers = (*(&(PZFATRN_outers->Rest)));
}
 /* line 2846: */
} 
A_PROC_EXIT(pt_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  JBGATRN_generator(A68_BOOL  HBGATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KBGATRN_generator *)NonLocals)->x)
{ 
A68_VC  LBGATRN;  /* clause result */
A68_VC  MBGATRN;  /* OPERATORS - dynamic generator */
{ 
MBGATRN.upb = (NL(GBGATRN_sigtop)+1) ;
( HBGATRN_anonymous? A_VLOC(A68_CHAR ,MBGATRN): A_VHEAP(A68_CHAR ,MBGATRN) );
LBGATRN = MBGATRN;
} 
*ReturnedValue = (LBGATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RBGATRN_generator(A68_BOOL  PBGATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SBGATRN_generator *)NonLocals)->x)
{ 
A68_VC  TBGATRN;  /* clause result */
A68_VC  UBGATRN;  /* OPERATORS - dynamic generator */
{ 
UBGATRN.upb = AHDATRN_signature.upb ;
( PBGATRN_anonymous? A_VLOC(A68_CHAR ,UBGATRN): A_VHEAP(A68_CHAR ,UBGATRN) );
TBGATRN = UBGATRN;
} 
*ReturnedValue = (TBGATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YQCATRN_dummy_initem(A68_335  Getchar, A68_97  Msg, A68_333  *ReturnedValue)
{ 
A68_333  ZQCATRN;  /* clause result */
A68_333  ARCATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(dummy_initem);
ZQCATRN = ARCATRN;
A_PROC_EXIT(dummy_initem);
*ReturnedValue = (ZQCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DRCATRN_packed_initem(A68_335  Getchar, A68_97  Msg, A68_333  *ReturnedValue)
{ 
A68_INT  ERCATRN_val;
A68_342  HRCATRN_inpkdint;   /* proc value of non-global proc */
A68_BOOL  SRCATRN;  /* optbool result */
A68_46  VRCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  WRCATRN;  /* clause result */
A68_333  XRCATRN;  /* OPERATORS - skip to mode */
A68_331  YRCATRN;  /* collateral clause result */
A68_333  ZRCATRN;  /* OPERATORS - mode -> union mode */
A68_333  ASCATRN;  /* avoid structure result */
A68_333  BSCATRN;  /* united object - for case conformity */
A68_331  CSCATRN_t;
A68_331  DSCATRN;  /* collateral clause result */
A68_333  ESCATRN;  /* OPERATORS - mode -> union mode */
A68_46  HSCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  ISCATRN;  /* OPERATORS - skip to mode */
A68_BITS  JSCATRN_tb;
A68_INT  KSCATRN;  /* to part of loop */
A68_INT  LSCATRN;  /* loop control */
A68_INT  MSCATRN;  /* SHL */
A68_331  NSCATRN;  /* collateral clause result */
A68_333  OSCATRN;  /* OPERATORS - mode -> union mode */
A68_46  RSCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  SSCATRN;  /* OPERATORS - skip to mode */
A68_332  TSCATRN_hid;
A68_INT * USCATRN;  /* YIELD */
A68_333  VSCATRN;  /* avoid structure result */
A68_333  WSCATRN;  /* united object - for case conformity */
A68_INT  XSCATRN_i;
A68_INT  YSCATRN;  /* clause result */
A68_46  BTCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CTCATRN;  /* OPERATORS - skip to mode */
A68_INT * DTCATRN;  /* YIELD */
A68_333  ETCATRN;  /* OPERATORS - mode -> union mode */
A68_31  GTCATRN_generator;   /* proc value of non-global proc */
A68_VC  MTCATRN;  /* avoid structure result */
A68_VC  LTCATRN_str;
A68_CHAR * NTCATRN_c;
A68_INT  OTCATRN;  /* forall loop counter */
A68_333  PTCATRN;  /* OPERATORS - mode -> union mode */
A68_333  QTCATRN;  /* avoid structure result */
A68_333  RTCATRN;  /* united object - for case conformity */
A68_INT  STCATRN_i;
A68_INT  TTCATRN;  /* clause result */
A68_46  WTCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XTCATRN;  /* OPERATORS - skip to mode */
A68_INT  YTCATRN_size;
A68_31  AUCATRN_generator;   /* proc value of non-global proc */
A68_VC  GUCATRN;  /* avoid structure result */
A68_VC  FUCATRN_str;
A68_CHAR * HUCATRN_c;
A68_INT  IUCATRN;  /* forall loop counter */
A68_333  JUCATRN;  /* OPERATORS - mode -> union mode */
A68_333  KUCATRN;  /* OPERATORS - mode -> union mode */
A68_INT  LUCATRN;  /* YIELD */
A68_333  MUCATRN;  /* OPERATORS - mode -> union mode */
A68_INT  NUCATRN;  /* YIELD */
A68_333  OUCATRN;  /* OPERATORS - mode -> union mode */
A68_INT  PUCATRN;  /* YIELD */
A68_BITS  QUCATRN_ctrl;
A68_333  RUCATRN;  /* OPERATORS - mode -> union mode */
A68_INT  SUCATRN;  /* YIELD */
A68_46  VUCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  WUCATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(packed_initem);
 /* line 301: */
 /* line 302: */
{ 
ERCATRN_val = (A68_INT)(unsigned char)A_CALLPROC(Getchar,(),((Getchar).nonlocals));
 /* line 304: */
A_CLOSURE( HRCATRN_inpkdint, IRCATRN_inpkdint, JRCATRN_inpkdint );
(( JRCATRN_inpkdint * ) ( HRCATRN_inpkdint.nonlocals )) -> Msg = Msg;
(( JRCATRN_inpkdint * ) ( HRCATRN_inpkdint.nonlocals )) -> Getchar = Getchar;
 /* line 315: */
SRCATRN = (ERCATRN_val==0);
if ( ! SRCATRN )
{SRCATRN = (ERCATRN_val==255);
}
 /* line 316: */
if ( SRCATRN )
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(VRCATRN,URCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(VRCATRN,URCATRN,A68_VC ),(Msg).nonlocals));
 /* line 317: */
WRCATRN = XRCATRN;
} 
else
{ 
 /* line 318: */
if ( (ERCATRN_val<EQCATRN_null_tok) )
{ 
YRCATRN.Token = ERCATRN_val;
 /* line 319: */
YRCATRN.Nil = A68_FALSE;
WRCATRN = A_UNITE(ZRCATRN,mode3,3,YRCATRN);
} 
else
{ 
 /* line 320: */
if ( (ERCATRN_val==EQCATRN_null_tok) )
{ 
 /* line 321: */
DRCATRN_packed_initem( Getchar, Msg, &ASCATRN );
BSCATRN = ASCATRN ;
switch ( BSCATRN.mode )
{ 
case 3: /* STRUCT(INT,BOOL)  */
CSCATRN_t = (BSCATRN.data.mode3);
 /* line 322: */
DSCATRN.Token = CSCATRN_t.Token;
 /* line 323: */
DSCATRN.Nil = A68_TRUE;
 /* line 324: */
WRCATRN = A_UNITE(ESCATRN,mode3,3,DSCATRN);
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(HSCATRN,GSCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(HSCATRN,GSCATRN,A68_VC ),(Msg).nonlocals));
 /* line 325: */
 /* line 326: */
WRCATRN = ISCATRN;
break;
} 
} 
else
{ 
 /* line 327: */
if ( (ERCATRN_val<=GQCATRN_in2byte_tok) )
{ 
JSCATRN_tb = 0X0U;
 /* line 329: */
 /* line 330: */
KSCATRN = ((ERCATRN_val-FQCATRN_in1byte_tok)+1);
for ( LSCATRN = 1;
LSCATRN <= KSCATRN;
LSCATRN += 1 )
{ 
 /* line 331: */
 /* line 332: */
MSCATRN = 8 ;
JSCATRN_tb = (A68_BITS )(A_SHL(JSCATRN_tb,MSCATRN)|(A68_BITS )(A68_INT)(unsigned char)A_CALLPROC(Getchar,(),((Getchar).nonlocals)));
}
 /* line 333: */
NSCATRN.Token = (A68_INT )JSCATRN_tb;
 /* line 334: */
NSCATRN.Nil = A68_FALSE;
WRCATRN = A_UNITE(OSCATRN,mode3,3,NSCATRN);
} 
else
{ 
 /* line 335: */
if ( (ERCATRN_val<JQCATRN_hashedid_tok) )
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(RSCATRN,QSCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(RSCATRN,QSCATRN,A68_VC ),(Msg).nonlocals));
 /* line 336: */
WRCATRN = SSCATRN;
} 
else
{ 
 /* line 337: */
if ( (ERCATRN_val==JQCATRN_hashedid_tok) )
{ 
 /* line 339: */
USCATRN = (&((&TSCATRN_hid)->Index)) ;
(*USCATRN) = (A68_INT)(unsigned char)A_CALLPROC(Getchar,(),((Getchar).nonlocals));
 /* line 340: */
DRCATRN_packed_initem( Getchar, Msg, &VSCATRN );
WSCATRN = VSCATRN ;
switch ( WSCATRN.mode )
{ 
case 1: /* INT */
XSCATRN_i = (WSCATRN.data.mode1);
 /* line 341: */
YSCATRN = XSCATRN_i;
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(BTCATRN,ATCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(BTCATRN,ATCATRN,A68_VC ),(Msg).nonlocals));
 /* line 342: */
YSCATRN = CTCATRN;
break;
} 
DTCATRN = (&((&TSCATRN_hid)->Count)) ;
(*DTCATRN) = YSCATRN;
 /* line 343: */
 /* line 344: */
WRCATRN = A_UNITE(ETCATRN,mode4,4,TSCATRN_hid);
} 
else
{ 
 /* line 345: */
if ( (ERCATRN_val<LQCATRN_ident_tok) )
{ 
A_CLOSURE( GTCATRN_generator, HTCATRN_generator, ITCATRN_generator );
(( ITCATRN_generator * ) ( GTCATRN_generator.nonlocals )) -> ERCATRN_val = ERCATRN_val;
A_CALLPROC(GTCATRN_generator,(A68_TRUE, &MTCATRN),(A68_TRUE, &MTCATRN,(GTCATRN_generator).nonlocals));
LTCATRN_str = MTCATRN;
 /* line 347: */
OTCATRN = LTCATRN_str.upb -1;
NTCATRN_c = LTCATRN_str.data;
for (;OTCATRN-- >= 0;
(NTCATRN_c++
) )
{
(*NTCATRN_c) = A_CALLPROC(Getchar,(),((Getchar).nonlocals));
}
 /* line 348: */
 /* line 349: */
WRCATRN = A_UNITE(PTCATRN,mode2,2,LTCATRN_str);
} 
else
{ 
 /* line 350: */
if ( (ERCATRN_val==LQCATRN_ident_tok) )
{ 
DRCATRN_packed_initem( Getchar, Msg, &QTCATRN );
RTCATRN = QTCATRN ;
switch ( RTCATRN.mode )
{ 
case 1: /* INT */
STCATRN_i = (RTCATRN.data.mode1);
 /* line 351: */
TTCATRN = STCATRN_i;
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(WTCATRN,VTCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(WTCATRN,VTCATRN,A68_VC ),(Msg).nonlocals));
 /* line 352: */
TTCATRN = XTCATRN;
break;
} 
YTCATRN_size = TTCATRN;
 /* line 353: */
A_CLOSURE( AUCATRN_generator, BUCATRN_generator, CUCATRN_generator );
(( CUCATRN_generator * ) ( AUCATRN_generator.nonlocals )) -> YTCATRN_size = YTCATRN_size;
A_CALLPROC(AUCATRN_generator,(A68_TRUE, &GUCATRN),(A68_TRUE, &GUCATRN,(AUCATRN_generator).nonlocals));
FUCATRN_str = GUCATRN;
 /* line 355: */
IUCATRN = FUCATRN_str.upb -1;
HUCATRN_c = FUCATRN_str.data;
for (;IUCATRN-- >= 0;
(HUCATRN_c++
) )
{
(*HUCATRN_c) = A_CALLPROC(Getchar,(),((Getchar).nonlocals));
}
 /* line 356: */
 /* line 357: */
WRCATRN = A_UNITE(JUCATRN,mode2,2,FUCATRN_str);
} 
else
{ 
 /* line 358: */
if ( (ERCATRN_val<NQCATRN_pos1byte_int) )
{ 
 /* line 359: */
LUCATRN = (ERCATRN_val-SQCATRN_zeroint) ;
WRCATRN = A_UNITE(KUCATRN,mode1,1,LUCATRN);
} 
else
{ 
 /* line 360: */
if ( (ERCATRN_val<OQCATRN_neg1byte_int) )
{ 
 /* line 361: */
NUCATRN = A_CALLPROC(HRCATRN_inpkdint,(A68_FALSE, ((ERCATRN_val-NQCATRN_pos1byte_int)+1)),(A68_FALSE, ((ERCATRN_val-NQCATRN_pos1byte_int)+1),(HRCATRN_inpkdint).nonlocals)) ;
WRCATRN = A_UNITE(MUCATRN,mode1,1,NUCATRN);
} 
else
{ 
 /* line 362: */
if ( (ERCATRN_val<PQCATRN_extended_int) )
{ 
 /* line 363: */
PUCATRN = A_CALLPROC(HRCATRN_inpkdint,(A68_TRUE, ((ERCATRN_val-OQCATRN_neg1byte_int)+1)),(A68_TRUE, ((ERCATRN_val-OQCATRN_neg1byte_int)+1),(HRCATRN_inpkdint).nonlocals)) ;
WRCATRN = A_UNITE(OUCATRN,mode1,1,PUCATRN);
} 
else
{ 
 /* line 364: */
if ( (ERCATRN_val==PQCATRN_extended_int) )
{ 
QUCATRN_ctrl = (A68_BITS )(A68_INT)(unsigned char)A_CALLPROC(Getchar,(),((Getchar).nonlocals));
 /* line 365: */
 /* line 366: */
 /* line 367: */
SUCATRN = A_CALLPROC(HRCATRN_inpkdint,(((A68_BITS )(QUCATRN_ctrl&0X80U)!=0X0U), (A68_INT )(A68_BITS )(QUCATRN_ctrl&0XfU)),(((A68_BITS )(QUCATRN_ctrl&0X80U)!=0X0U), (A68_INT )(A68_BITS )(QUCATRN_ctrl&0XfU),(HRCATRN_inpkdint).nonlocals)) ;
WRCATRN = A_UNITE(RUCATRN,mode1,1,SUCATRN);
} 
else
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(VUCATRN,UUCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(VUCATRN,UUCATRN,A68_VC ),(Msg).nonlocals));
 /* line 368: */
 /* line 369: */
WRCATRN = WUCATRN;
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
} 
A_PROC_EXIT(packed_initem);
*ReturnedValue = (WRCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AVCATRN_unpacked_initem(A68_335  Getchar, A68_97  Msg, A68_333  *ReturnedValue)
{ 
A68_335  CVCATRN_getupchar;   /* proc value of non-global proc */
A68_131  HVCATRN_getint;   /* proc value of non-global proc */
A68_BOOL  OVCATRN;  /* optbool result */
A68_BOOL  PVCATRN_neg;
A68_INT  QVCATRN_integer;
A68_333  RVCATRN;  /* clause result */
A68_333  SVCATRN;  /* OPERATORS - mode -> union mode */
A68_333  TVCATRN;  /* OPERATORS - mode -> union mode */
A68_INT  UVCATRN;  /* YIELD */
A68_INT  VVCATRN_size;
A68_31  XVCATRN_generator;   /* proc value of non-global proc */
A68_VC  DWCATRN;  /* avoid structure result */
A68_VC  CWCATRN_ident;
A68_INT  EWCATRN_j;
A68_INT  FWCATRN;  /* to part of loop */
A68_CHAR * GWCATRN;  /* YIELD */
A68_333  HWCATRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  IWCATRN;  /* optbool result */
A68_BOOL  JWCATRN_nil;
A68_INT  KWCATRN_tok;
A68_331  LWCATRN;  /* collateral clause result */
A68_333  MWCATRN;  /* OPERATORS - mode -> union mode */
A68_332  NWCATRN_hid;
A68_INT * OWCATRN;  /* YIELD */
A68_46  RWCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * SWCATRN;  /* YIELD */
A68_333  TWCATRN;  /* OPERATORS - mode -> union mode */
A68_350  UWCATRN;  /* collateral clause result */
A68_52  VWCATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  WWCATRN;  /* YIELD */
A68_52  XWCATRN;  /* OPERATORS - mode -> union mode */
A68_52  AXCATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BXCATRN;  /* YIELD */
A68_52  CXCATRN;  /* OPERATORS - mode -> union mode */
A68_56  DXCATRN;  /* procedure value */
A68_85  EXCATRN;  /* OPERATORS - istruct -> vector */
A68_46  HXCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  IXCATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(unpacked_initem);
 /* line 374: */
 /* line 376: */
{ 
 /* line 377: */
 /* line 378: */
A_CLOSURE( CVCATRN_getupchar, DVCATRN_getupchar, EVCATRN_getupchar );
(( EVCATRN_getupchar * ) ( CVCATRN_getupchar.nonlocals )) -> Getchar = Getchar;
(( EVCATRN_getupchar * ) ( CVCATRN_getupchar.nonlocals )) -> CVCATRN_getupchar = CVCATRN_getupchar;
 /* line 382: */
 /* line 383: */
A_CLOSURE( HVCATRN_getint, IVCATRN_getint, JVCATRN_getint );
(( JVCATRN_getint * ) ( HVCATRN_getint.nonlocals )) -> CVCATRN_getupchar = CVCATRN_getupchar;
 /* line 393: */
if ( (XUCATRN_next==UQCATRN_lf) )
{ 
XUCATRN_next = A_CALLPROC(CVCATRN_getupchar,(),((CVCATRN_getupchar).nonlocals));
} 
 /* line 394: */
OVCATRN = (XUCATRN_next=='-');
if ( ! OVCATRN )
{ /* line 395: */
OVCATRN = (XUCATRN_next=='+');
}
if ( OVCATRN )
{ 
PVCATRN_neg = (XUCATRN_next=='-');
 /* line 396: */
QVCATRN_integer = A_CALLPROC(HVCATRN_getint,(),((HVCATRN_getint).nonlocals));
 /* line 397: */
if ( PVCATRN_neg )
{ 
RVCATRN = A_UNITE(SVCATRN,mode1,1,QVCATRN_integer);
} 
else
{ 
 /* line 398: */
UVCATRN = (-QVCATRN_integer) ;
RVCATRN = A_UNITE(TVCATRN,mode1,1,UVCATRN);
} 
} 
else
{ 
 /* line 399: */
if ( (XUCATRN_next=='\"') )
{ 
VVCATRN_size = (-A_CALLPROC(HVCATRN_getint,(),((HVCATRN_getint).nonlocals)));
 /* line 400: */
A_CLOSURE( XVCATRN_generator, YVCATRN_generator, ZVCATRN_generator );
(( ZVCATRN_generator * ) ( XVCATRN_generator.nonlocals )) -> VVCATRN_size = VVCATRN_size;
A_CALLPROC(XVCATRN_generator,(A68_TRUE, &DWCATRN),(A68_TRUE, &DWCATRN,(XVCATRN_generator).nonlocals));
CWCATRN_ident = DWCATRN;
 /* line 401: */
 /* line 402: */
if ( (VVCATRN_size>0) )
{ 
FWCATRN = VVCATRN_size;
for ( EWCATRN_j = 1;
EWCATRN_j <= FWCATRN;
EWCATRN_j += 1 )
{ 
GWCATRN = (&A_VINDEX(CWCATRN_ident,EWCATRN_j)) ;
(*GWCATRN) = A_CALLPROC(CVCATRN_getupchar,(),((CVCATRN_getupchar).nonlocals));
}
 /* line 403: */
} 
 /* line 404: */
XUCATRN_next = UQCATRN_lf;
 /* line 405: */
 /* line 406: */
RVCATRN = A_UNITE(HWCATRN,mode2,2,CWCATRN_ident);
} 
else
{ 
IWCATRN = (XUCATRN_next=='*');
if ( ! IWCATRN )
{ /* line 407: */
IWCATRN = (XUCATRN_next=='%');
}
if ( IWCATRN )
{ 
JWCATRN_nil = (XUCATRN_next=='%');
 /* line 408: */
KWCATRN_tok = (-A_CALLPROC(HVCATRN_getint,(),((HVCATRN_getint).nonlocals)));
 /* line 409: */
LWCATRN.Token = KWCATRN_tok;
 /* line 410: */
LWCATRN.Nil = JWCATRN_nil;
RVCATRN = A_UNITE(MWCATRN,mode3,3,LWCATRN);
} 
else
{ 
 /* line 411: */
if ( (XUCATRN_next=='#') )
{ 
 /* line 412: */
OWCATRN = (&((&NWCATRN_hid)->Index)) ;
(*OWCATRN) = (-A_CALLPROC(HVCATRN_getint,(),((HVCATRN_getint).nonlocals)));
 /* line 413: */
if ( (XUCATRN_next!='/') )
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(RWCATRN,QWCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(RWCATRN,QWCATRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 414: */
SWCATRN = (&((&NWCATRN_hid)->Count)) ;
(*SWCATRN) = (-A_CALLPROC(HVCATRN_getint,(),((HVCATRN_getint).nonlocals)));
 /* line 415: */
 /* line 416: */
RVCATRN = A_UNITE(TWCATRN,mode4,4,NWCATRN_hid);
} 
else
{ 
WWCATRN = '\"' ;
UWCATRN.data[0] = A_UNITE(VWCATRN,mode6,6,WWCATRN);
 /* line 417: */
UWCATRN.data[1] = A_UNITE(XWCATRN,mode6,6,XUCATRN_next);
BXCATRN = ZWCATRN ;
UWCATRN.data[2] = A_UNITE(AXCATRN,mode7,7,BXCATRN);
DXCATRN.fn.fn_global = LRAAOSL_newline;
DXCATRN.nonlocals = A68_NIL;
UWCATRN.data[3] = A_UNITE(CXCATRN,mode12,12,DXCATRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EXCATRN,UWCATRN,4,A68_52 ));
 /* line 418: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(HXCATRN,GXCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(HXCATRN,GXCATRN,A68_VC ),(Msg).nonlocals));
 /* line 419: */
 /* line 420: */
 /* line 421: */
RVCATRN = IXCATRN;
} 
} 
} 
} 
} 
A_PROC_EXIT(unpacked_initem);
*ReturnedValue = (RVCATRN);
return;
} 
#undef NL
 /* line 430: */
 /* line 431: */

A_STATIC A68_VOID  MXCATRN_packed_outitem(A68_333  Item, A68_36  Putstring, A68_97  Msg)
{ 
A68_31  OXCATRN_generator;   /* proc value of non-global proc */
A68_VC  UXCATRN;  /* avoid structure result */
A68_VC  TXCATRN_cc;
A68_INT  VXCATRN_cnt;
A68_128  XXCATRN_put_int;   /* proc value of non-global proc */
A68_333  SYCATRN;  /* united object - for case conformity */
A68_INT  TYCATRN_i;
A68_VC  UYCATRN;  /* OPERATORS - trim index */
A68_VC  VYCATRN_id;
A68_INT  WYCATRN_top;
A68_INT  XYCATRN;  /* YIELD */
A68_CHAR * YYCATRN;  /* YIELD */
A68_INT  ZYCATRN;  /* YIELD */
A68_CHAR * AZCATRN;  /* YIELD */
A68_VC  BZCATRN;  /* OPERATORS - trim index */
A68_331  CZCATRN_tok;
A68_BITS  DZCATRN_tb;
A68_INT  EZCATRN_tn;
A68_INT  FZCATRN;  /* YIELD */
A68_CHAR * GZCATRN;  /* YIELD */
A68_INT  HZCATRN;  /* SHR */
A68_46  KZCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LZCATRN;  /* YIELD */
A68_CHAR * MZCATRN;  /* YIELD */
A68_INT  NZCATRN;  /* YIELD */
A68_CHAR * OZCATRN;  /* YIELD */
A68_INT  PZCATRN;  /* YIELD */
A68_CHAR * QZCATRN;  /* YIELD */
A68_VC  RZCATRN;  /* OPERATORS - trim index */
A68_332  SZCATRN_hid;
A68_INT  TZCATRN;  /* YIELD */
A68_CHAR * UZCATRN;  /* YIELD */
A68_INT  VZCATRN;  /* YIELD */
A68_CHAR * WZCATRN;  /* YIELD */
A68_VC  XZCATRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(packed_outitem);
 /* line 432: */
 /* line 433: */
{ 
A_CLOSURE( OXCATRN_generator, PXCATRN_generator, QXCATRN_generator );
A_CALLPROC(OXCATRN_generator,(A68_TRUE, &UXCATRN),(A68_TRUE, &UXCATRN,(OXCATRN_generator).nonlocals));
TXCATRN_cc = UXCATRN;
 /* line 434: */
VXCATRN_cnt = 25;
 /* line 436: */
A_CLOSURE( XXCATRN_put_int, YXCATRN_put_int, ZXCATRN_put_int );
(( ZXCATRN_put_int * ) ( XXCATRN_put_int.nonlocals )) -> TXCATRN_cc = TXCATRN_cc;
(( ZXCATRN_put_int * ) ( XXCATRN_put_int.nonlocals )) -> VXCATRN_cnt = (&VXCATRN_cnt);
 /* line 460: */
 /* line 461: */
SYCATRN = Item ;
switch ( SYCATRN.mode )
{ 
case 1: /* INT */
TYCATRN_i = (SYCATRN.data.mode1);
{ 
A_CALLPROC(XXCATRN_put_int,(TYCATRN_i),(TYCATRN_i,(XXCATRN_put_int).nonlocals));
 /* line 462: */
A_CALLPROC(Putstring,(A_VTRIM(UYCATRN,(TXCATRN_cc),A_VTSCRIPT(&(UYCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb))),(A_VTRIM(UYCATRN,(TXCATRN_cc),A_VTSCRIPT(&(UYCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb)),(Putstring).nonlocals));
} 
break;
case 2: /* VECTOR [] CHAR */
VYCATRN_id = (SYCATRN.data.mode2);
 /* line 463: */
{ 
WYCATRN_top = VYCATRN_id.upb;
 /* line 465: */
 /* line 466: */
if ( (WYCATRN_top<=RQCATRN_short_string_top) )
{ 
 /* line 467: */
 /* line 468: */
XYCATRN = VXCATRN_cnt-=1 ;
YYCATRN = (&A_VINDEX(TXCATRN_cc,XYCATRN)) ;
(*YYCATRN) = (A68_CHAR)(KQCATRN_ident_range_start+WYCATRN_top);
} 
else
{ 
A_CALLPROC(XXCATRN_put_int,(WYCATRN_top),(WYCATRN_top,(XXCATRN_put_int).nonlocals));
 /* line 469: */
 /* line 470: */
ZYCATRN = VXCATRN_cnt-=1 ;
AZCATRN = (&A_VINDEX(TXCATRN_cc,ZYCATRN)) ;
(*AZCATRN) = (A68_CHAR)LQCATRN_ident_tok;
} 
 /* line 471: */
A_CALLPROC(Putstring,(A_VTRIM(BZCATRN,(TXCATRN_cc),A_VTSCRIPT(&(BZCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb))),(A_VTRIM(BZCATRN,(TXCATRN_cc),A_VTSCRIPT(&(BZCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb)),(Putstring).nonlocals));
 /* line 472: */
 /* line 473: */
 /* line 474: */
A_CALLPROC(Putstring,(VYCATRN_id),(VYCATRN_id,(Putstring).nonlocals));
} 
break;
case 3: /* STRUCT(INT,BOOL)  */
CZCATRN_tok = (SYCATRN.data.mode3);
 /* line 475: */
{ 
 /* line 476: */
if ( (CZCATRN_tok.Token>=FQCATRN_in1byte_tok) )
{ 
DZCATRN_tb = (A68_BITS )CZCATRN_tok.Token;
 /* line 477: */
EZCATRN_tn = (-1);
 /* line 478: */
for ( ;; )
{ 
 /* line 479: */
 /* line 480: */
if ( !((DZCATRN_tb!=0X0U)) ) break;
FZCATRN = VXCATRN_cnt-=1 ;
GZCATRN = (&A_VINDEX(TXCATRN_cc,FZCATRN)) ;
(*GZCATRN) = (A68_CHAR)(A68_INT )(A68_BITS )(DZCATRN_tb&0XffU);
 /* line 481: */
EZCATRN_tn+=1;
 /* line 482: */
 /* line 483: */
HZCATRN = 8 ;
DZCATRN_tb = A_SHR(DZCATRN_tb,HZCATRN);
}
 /* line 484: */
 /* line 485: */
if ( (EZCATRN_tn>1) )
{ 
 /* line 486: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(KZCATRN,JZCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(KZCATRN,JZCATRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 487: */
 /* line 488: */
 /* line 489: */
LZCATRN = VXCATRN_cnt-=1 ;
MZCATRN = (&A_VINDEX(TXCATRN_cc,LZCATRN)) ;
(*MZCATRN) = (A68_CHAR)(FQCATRN_in1byte_tok+EZCATRN_tn);
} 
else
{ 
 /* line 490: */
NZCATRN = VXCATRN_cnt-=1 ;
OZCATRN = (&A_VINDEX(TXCATRN_cc,NZCATRN)) ;
(*OZCATRN) = (A68_CHAR)CZCATRN_tok.Token;
} 
 /* line 491: */
if ( CZCATRN_tok.Nil )
{ 
PZCATRN = VXCATRN_cnt-=1 ;
QZCATRN = (&A_VINDEX(TXCATRN_cc,PZCATRN)) ;
(*QZCATRN) = (A68_CHAR)EQCATRN_null_tok;
} 
 /* line 492: */
 /* line 493: */
 /* line 494: */
A_CALLPROC(Putstring,(A_VTRIM(RZCATRN,(TXCATRN_cc),A_VTSCRIPT(&(RZCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb))),(A_VTRIM(RZCATRN,(TXCATRN_cc),A_VTSCRIPT(&(RZCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb)),(Putstring).nonlocals));
} 
break;
case 4: /* STRUCT(INT,INT)  */
SZCATRN_hid = (SYCATRN.data.mode4);
 /* line 495: */
{ 
A_CALLPROC(XXCATRN_put_int,(SZCATRN_hid.Count),(SZCATRN_hid.Count,(XXCATRN_put_int).nonlocals));
 /* line 496: */
TZCATRN = VXCATRN_cnt-=1 ;
UZCATRN = (&A_VINDEX(TXCATRN_cc,TZCATRN)) ;
(*UZCATRN) = (A68_CHAR)SZCATRN_hid.Index;
 /* line 497: */
VZCATRN = VXCATRN_cnt-=1 ;
WZCATRN = (&A_VINDEX(TXCATRN_cc,VZCATRN)) ;
(*WZCATRN) = (A68_CHAR)JQCATRN_hashedid_tok;
 /* line 498: */
 /* line 499: */
 /* line 500: */
 /* line 502: */
A_CALLPROC(Putstring,(A_VTRIM(XZCATRN,(TXCATRN_cc),A_VTSCRIPT(&(XZCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb))),(A_VTRIM(XZCATRN,(TXCATRN_cc),A_VTSCRIPT(&(XZCATRN.upb),(TXCATRN_cc).upb,VXCATRN_cnt,(TXCATRN_cc).upb)),(Putstring).nonlocals));
} 
break;
default: 
 /* line 503: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(packed_outitem);
return;
} 
#undef NL
 /* line 506: */
 /* line 507: */

A_STATIC A68_VOID  BADATRN_unpacked_outitem(A68_333  Item, A68_36  Putstring, A68_97  Msg)
{ 
A68_31  DADATRN_generator;   /* proc value of non-global proc */
A68_VC  JADATRN;  /* avoid structure result */
A68_VC  IADATRN_chars;
A68_INT  KADATRN_cpos;
A68_352  NADATRN_putint;   /* proc value of non-global proc */
A68_333  HBDATRN;  /* united object - for case conformity */
A68_INT  IBDATRN_i;
A68_CHAR  JBDATRN;  /* clause result */
A68_VC  KBDATRN_id;
A68_INT  LBDATRN_s;
A68_INT  MBDATRN;  /* YIELD */
A68_CHAR * NBDATRN;  /* YIELD */
A68_331  OBDATRN_tok;
A68_332  PBDATRN_hid;
A_PROC_ENTRY(unpacked_outitem);
 /* line 508: */
 /* line 509: */
{ 
A_CLOSURE( DADATRN_generator, EADATRN_generator, FADATRN_generator );
A_CALLPROC(DADATRN_generator,(A68_TRUE, &JADATRN),(A68_TRUE, &JADATRN,(DADATRN_generator).nonlocals));
IADATRN_chars = JADATRN;
 /* line 510: */
KADATRN_cpos = 17;
 /* line 512: */
A_CLOSURE( NADATRN_putint, OADATRN_putint, PADATRN_putint );
(( PADATRN_putint * ) ( NADATRN_putint.nonlocals )) -> IADATRN_chars = IADATRN_chars;
(( PADATRN_putint * ) ( NADATRN_putint.nonlocals )) -> KADATRN_cpos = (&KADATRN_cpos);
(( PADATRN_putint * ) ( NADATRN_putint.nonlocals )) -> Putstring = Putstring;
 /* line 528: */
 /* line 529: */
HBDATRN = Item ;
switch ( HBDATRN.mode )
{ 
case 1: /* INT */
IBDATRN_i = (HBDATRN.data.mode1);
if ( (IBDATRN_i<0) )
{ 
JBDATRN = '-';
} 
else
{ 
JBDATRN = '+';
} 
 /* line 530: */
A_CALLPROC(NADATRN_putint,(IBDATRN_i, JBDATRN),(IBDATRN_i, JBDATRN,(NADATRN_putint).nonlocals));
break;
case 2: /* VECTOR [] CHAR */
KBDATRN_id = (HBDATRN.data.mode2);
 /* line 531: */
{ 
LBDATRN_s = KBDATRN_id.upb;
 /* line 532: */
MBDATRN = KADATRN_cpos-=1 ;
NBDATRN = (&A_VINDEX(IADATRN_chars,MBDATRN)) ;
(*NBDATRN) = '\"';
 /* line 533: */
A_CALLPROC(NADATRN_putint,(LBDATRN_s, '\"'),(LBDATRN_s, '\"',(NADATRN_putint).nonlocals));
 /* line 534: */
if ( (LBDATRN_s>0) )
{ 
 /* line 535: */
 /* line 536: */
A_CALLPROC(Putstring,(KBDATRN_id),(KBDATRN_id,(Putstring).nonlocals));
} 
} 
break;
case 3: /* STRUCT(INT,BOOL)  */
OBDATRN_tok = (HBDATRN.data.mode3);
 /* line 537: */
if ( OBDATRN_tok.Nil )
{ 
 /* line 538: */
A_CALLPROC(NADATRN_putint,(OBDATRN_tok.Token, '%'),(OBDATRN_tok.Token, '%',(NADATRN_putint).nonlocals));
} 
else
{ 
 /* line 539: */
 /* line 540: */
A_CALLPROC(NADATRN_putint,(OBDATRN_tok.Token, '*'),(OBDATRN_tok.Token, '*',(NADATRN_putint).nonlocals));
} 
break;
case 4: /* STRUCT(INT,INT)  */
PBDATRN_hid = (HBDATRN.data.mode4);
 /* line 541: */
{ 
A_CALLPROC(NADATRN_putint,(PBDATRN_hid.Index, '#'),(PBDATRN_hid.Index, '#',(NADATRN_putint).nonlocals));
 /* line 542: */
 /* line 543: */
 /* line 544: */
 /* line 546: */
A_CALLPROC(NADATRN_putint,(PBDATRN_hid.Count, '/'),(PBDATRN_hid.Count, '/',(NADATRN_putint).nonlocals));
} 
break;
default: 
 /* line 547: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(unpacked_outitem);
return;
} 
#undef NL

A_STATIC A68_VOID  NHDATRN_fail_token(A68_333  Val, A68_VC  Text, A68_97  Msg)
{ 
A68_333  OHDATRN;  /* united object - for case conformity */
A68_INT  PHDATRN_i;
A68_359  QHDATRN;  /* collateral clause result */
A68_52  RHDATRN;  /* OPERATORS - mode -> union mode */
A68_52  UHDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VHDATRN;  /* YIELD */
A68_52  WHDATRN;  /* OPERATORS - mode -> union mode */
A68_52  XHDATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  YHDATRN;  /* YIELD */
A68_52  ZHDATRN;  /* OPERATORS - mode -> union mode */
A68_52  CIDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DIDATRN;  /* YIELD */
A68_85  EIDATRN;  /* OPERATORS - istruct -> vector */
A68_VC  FIDATRN;  /* avoid structure result */
A68_46  GIDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HIDATRN_id;
A68_359  IIDATRN;  /* collateral clause result */
A68_52  JIDATRN;  /* OPERATORS - mode -> union mode */
A68_52  MIDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  NIDATRN;  /* YIELD */
A68_52  OIDATRN;  /* OPERATORS - mode -> union mode */
A68_52  PIDATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  QIDATRN;  /* YIELD */
A68_52  RIDATRN;  /* OPERATORS - mode -> union mode */
A68_52  UIDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VIDATRN;  /* YIELD */
A68_85  WIDATRN;  /* OPERATORS - istruct -> vector */
A68_VC  XIDATRN;  /* avoid structure result */
A68_46  YIDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_331  ZIDATRN_tok;
A68_359  AJDATRN;  /* collateral clause result */
A68_52  BJDATRN;  /* OPERATORS - mode -> union mode */
A68_52  EJDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  FJDATRN;  /* YIELD */
A68_52  IJDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  JJDATRN;  /* YIELD */
A68_52  KJDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  LJDATRN;  /* YIELD */
A68_52  MJDATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  NJDATRN;  /* YIELD */
A68_52  OJDATRN;  /* OPERATORS - mode -> union mode */
A68_52  RJDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SJDATRN;  /* YIELD */
A68_85  TJDATRN;  /* OPERATORS - istruct -> vector */
A68_VC  UJDATRN;  /* avoid structure result */
A68_46  VJDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_332  WJDATRN_hid;
A68_363  XJDATRN;  /* collateral clause result */
A68_52  YJDATRN;  /* OPERATORS - mode -> union mode */
A68_52  BKDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CKDATRN;  /* YIELD */
A68_52  DKDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  EKDATRN;  /* YIELD */
A68_52  FKDATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  GKDATRN;  /* YIELD */
A68_52  HKDATRN;  /* OPERATORS - mode -> union mode */
A68_INT  IKDATRN;  /* YIELD */
A68_85  JKDATRN;  /* OPERATORS - istruct -> vector */
A68_VC  KKDATRN;  /* avoid structure result */
A68_46  LKDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_350  MKDATRN;  /* collateral clause result */
A68_52  NKDATRN;  /* OPERATORS - mode -> union mode */
A68_52  QKDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  RKDATRN;  /* YIELD */
A68_52  SKDATRN;  /* OPERATORS - mode -> union mode */
A68_52  VKDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WKDATRN;  /* YIELD */
A68_85  XKDATRN;  /* OPERATORS - istruct -> vector */
A68_VC  YKDATRN;  /* avoid structure result */
A68_46  ZKDATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fail_token);
 /* line 778: */
 /* line 779: */
{ 
 /* line 780: */
OHDATRN = Val ;
switch ( OHDATRN.mode )
{ 
case 1: /* INT */
PHDATRN_i = (OHDATRN.data.mode1);
 /* line 781: */
 /* line 782: */
QHDATRN.data[0] = A_UNITE(RHDATRN,mode7,7,JHDATRN_errmsghead);
VHDATRN = THDATRN ;
QHDATRN.data[1] = A_UNITE(UHDATRN,mode7,7,VHDATRN);
QHDATRN.data[2] = A_UNITE(WHDATRN,mode1,1,PHDATRN_i);
YHDATRN = ' ' ;
QHDATRN.data[3] = A_UNITE(XHDATRN,mode6,6,YHDATRN);
QHDATRN.data[4] = A_UNITE(ZHDATRN,mode7,7,Text);
DIDATRN = BIDATRN ;
QHDATRN.data[5] = A_UNITE(CIDATRN,mode7,7,DIDATRN);
 /* line 783: */
UJBAOSL_oneline( A_HISVEC(EIDATRN,QHDATRN,6,A68_52 ), &FIDATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(GIDATRN,FIDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(GIDATRN,FIDATRN,A68_VC ),(Msg).nonlocals));
break;
case 2: /* VECTOR [] CHAR */
HIDATRN_id = (OHDATRN.data.mode2);
 /* line 784: */
 /* line 785: */
IIDATRN.data[0] = A_UNITE(JIDATRN,mode7,7,JHDATRN_errmsghead);
NIDATRN = LIDATRN ;
IIDATRN.data[1] = A_UNITE(MIDATRN,mode7,7,NIDATRN);
IIDATRN.data[2] = A_UNITE(OIDATRN,mode7,7,HIDATRN_id);
QIDATRN = ' ' ;
IIDATRN.data[3] = A_UNITE(PIDATRN,mode6,6,QIDATRN);
IIDATRN.data[4] = A_UNITE(RIDATRN,mode7,7,Text);
VIDATRN = TIDATRN ;
IIDATRN.data[5] = A_UNITE(UIDATRN,mode7,7,VIDATRN);
 /* line 786: */
UJBAOSL_oneline( A_HISVEC(WIDATRN,IIDATRN,6,A68_52 ), &XIDATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(YIDATRN,XIDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(YIDATRN,XIDATRN,A68_VC ),(Msg).nonlocals));
break;
case 3: /* STRUCT(INT,BOOL)  */
ZIDATRN_tok = (OHDATRN.data.mode3);
 /* line 787: */
 /* line 788: */
 /* line 789: */
AJDATRN.data[0] = A_UNITE(BJDATRN,mode7,7,JHDATRN_errmsghead);
 /* line 790: */
if ( ZIDATRN_tok.Nil )
{ 
 /* line 791: */
FJDATRN = DJDATRN ;
AJDATRN.data[1] = A_UNITE(EJDATRN,mode7,7,FJDATRN);
} 
else
{ 
JJDATRN = HJDATRN ;
AJDATRN.data[1] = A_UNITE(IJDATRN,mode7,7,JJDATRN);
} 
LJDATRN = ZIDATRN_tok.Token ;
AJDATRN.data[2] = A_UNITE(KJDATRN,mode1,1,LJDATRN);
NJDATRN = ' ' ;
AJDATRN.data[3] = A_UNITE(MJDATRN,mode6,6,NJDATRN);
AJDATRN.data[4] = A_UNITE(OJDATRN,mode7,7,Text);
SJDATRN = QJDATRN ;
AJDATRN.data[5] = A_UNITE(RJDATRN,mode7,7,SJDATRN);
 /* line 792: */
UJBAOSL_oneline( A_HISVEC(TJDATRN,AJDATRN,6,A68_52 ), &UJDATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(VJDATRN,UJDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(VJDATRN,UJDATRN,A68_VC ),(Msg).nonlocals));
break;
case 4: /* STRUCT(INT,INT)  */
WJDATRN_hid = (OHDATRN.data.mode4);
 /* line 793: */
 /* line 794: */
 /* line 795: */
XJDATRN.data[0] = A_UNITE(YJDATRN,mode7,7,JHDATRN_errmsghead);
CKDATRN = AKDATRN ;
XJDATRN.data[1] = A_UNITE(BKDATRN,mode7,7,CKDATRN);
EKDATRN = WJDATRN_hid.Index ;
XJDATRN.data[2] = A_UNITE(DKDATRN,mode1,1,EKDATRN);
GKDATRN = ' ' ;
XJDATRN.data[3] = A_UNITE(FKDATRN,mode6,6,GKDATRN);
IKDATRN = WJDATRN_hid.Count ;
XJDATRN.data[4] = A_UNITE(HKDATRN,mode1,1,IKDATRN);
 /* line 796: */
UJBAOSL_oneline( A_HISVEC(JKDATRN,XJDATRN,5,A68_52 ), &KKDATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(LKDATRN,KKDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(LKDATRN,KKDATRN,A68_VC ),(Msg).nonlocals));
break;
default: 
 /* line 797: */
MKDATRN.data[0] = A_UNITE(NKDATRN,mode7,7,JHDATRN_errmsghead);
RKDATRN = PKDATRN ;
MKDATRN.data[1] = A_UNITE(QKDATRN,mode7,7,RKDATRN);
MKDATRN.data[2] = A_UNITE(SKDATRN,mode7,7,Text);
WKDATRN = UKDATRN ;
MKDATRN.data[3] = A_UNITE(VKDATRN,mode7,7,WKDATRN);
 /* line 798: */
 /* line 799: */
UJBAOSL_oneline( A_HISVEC(XKDATRN,MKDATRN,4,A68_52 ), &YKDATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(ZKDATRN,YKDATRN,A68_VC )),(SHAAOSI_system, A_HVEC(ZKDATRN,YKDATRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
A_PROC_EXIT(fail_token);
return;
} 
#undef NL

A68_INT  CLDATRN_inassemint(A68_334  Reader, A68_97  Msg)
{ 
A68_336  DLDATRN;  /* CALL */
A68_333  ELDATRN;  /* avoid structure result */
A68_333  FLDATRN_r;
A68_333  GLDATRN;  /* united object - for case conformity */
A68_INT  HLDATRN_i;
A68_INT  ILDATRN;  /* clause result */
A68_INT  LLDATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(inassemint);
 /* line 802: */
{ 
DLDATRN = Reader.Initem ;
A_CALLPROC(DLDATRN,(Reader.Getchar, Msg, &ELDATRN),(Reader.Getchar, Msg, &ELDATRN,(DLDATRN).nonlocals));
FLDATRN_r = ELDATRN;
 /* line 803: */
 /* line 804: */
GLDATRN = FLDATRN_r ;
switch ( GLDATRN.mode )
{ 
case 1: /* INT */
HLDATRN_i = (GLDATRN.data.mode1);
 /* line 805: */
ILDATRN = HLDATRN_i;
break;
default: 
NHDATRN_fail_token(FLDATRN_r, KLDATRN, Msg);
 /* line 806: */
 /* line 807: */
ILDATRN = LLDATRN;
break;
} 
} 
A_PROC_EXIT(inassemint);
return( ILDATRN );
} 
#undef NL

A68_BOOL  OLDATRN_inassembool(A68_334  Reader, A68_97  Msg)
{ 
A68_BOOL  PLDATRN;  /* clause result */
A_PROC_ENTRY(inassembool);
 /* line 810: */
PLDATRN = (CLDATRN_inassemint(Reader, Msg)==1);
A_PROC_EXIT(inassembool);
return( PLDATRN );
} 
#undef NL

A68_VOID  SLDATRN_inassemtok(A68_334  Reader, A68_97  Msg, A68_331  *ReturnedValue)
{ 
A68_336  TLDATRN;  /* CALL */
A68_333  ULDATRN;  /* avoid structure result */
A68_333  VLDATRN_r;
A68_333  WLDATRN;  /* united object - for case conformity */
A68_331  XLDATRN_t;
A68_331  YLDATRN;  /* collateral clause result */
A68_INT  ZLDATRN;  /* YIELD */
A68_331  AMDATRN;  /* clause result */
A68_331  DMDATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(inassemtok);
 /* line 813: */
{ 
TLDATRN = Reader.Initem ;
A_CALLPROC(TLDATRN,(Reader.Getchar, Msg, &ULDATRN),(Reader.Getchar, Msg, &ULDATRN,(TLDATRN).nonlocals));
VLDATRN_r = ULDATRN;
 /* line 814: */
 /* line 815: */
WLDATRN = VLDATRN_r ;
switch ( WLDATRN.mode )
{ 
case 3: /* STRUCT(INT,BOOL)  */
XLDATRN_t = (WLDATRN.data.mode3);
ZLDATRN = XLDATRN_t.Token ;
YLDATRN.Token = A_VINDEX(GHDATRN_c_a68,ZLDATRN);
 /* line 816: */
YLDATRN.Nil = XLDATRN_t.Nil;
AMDATRN = YLDATRN;
break;
default: 
NHDATRN_fail_token(VLDATRN_r, CMDATRN, Msg);
 /* line 817: */
 /* line 818: */
AMDATRN = DMDATRN;
break;
} 
} 
A_PROC_EXIT(inassemtok);
*ReturnedValue = (AMDATRN);
return;
} 
#undef NL

A68_VOID  GMDATRN_inassemstr(A68_334  Reader, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_336  HMDATRN;  /* CALL */
A68_333  IMDATRN;  /* avoid structure result */
A68_333  JMDATRN_r;
A68_333  KMDATRN;  /* united object - for case conformity */
A68_VC  LMDATRN_i;
A68_VC  MMDATRN;  /* clause result */
A68_VC  PMDATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(inassemstr);
 /* line 821: */
{ 
HMDATRN = Reader.Initem ;
A_CALLPROC(HMDATRN,(Reader.Getchar, Msg, &IMDATRN),(Reader.Getchar, Msg, &IMDATRN,(HMDATRN).nonlocals));
JMDATRN_r = IMDATRN;
 /* line 822: */
 /* line 823: */
KMDATRN = JMDATRN_r ;
switch ( KMDATRN.mode )
{ 
case 2: /* VECTOR [] CHAR */
LMDATRN_i = (KMDATRN.data.mode2);
 /* line 824: */
MMDATRN = LMDATRN_i;
break;
default: 
NHDATRN_fail_token(JMDATRN_r, OMDATRN, Msg);
 /* line 825: */
 /* line 826: */
MMDATRN = PMDATRN;
break;
} 
} 
A_PROC_EXIT(inassemstr);
*ReturnedValue = (MMDATRN);
return;
} 
#undef NL

A68_CHAR  SMDATRN_inassemchar(A68_334  Reader, A68_97  Msg)
{ 
A68_336  TMDATRN;  /* CALL */
A68_333  UMDATRN;  /* avoid structure result */
A68_333  VMDATRN_r;
A68_333  WMDATRN;  /* united object - for case conformity */
A68_VC  XMDATRN_i;
A68_CHAR  ANDATRN;  /* clause result */
A68_CHAR  BNDATRN;  /* OPERATORS - skip to mode */
A68_INT  CNDATRN;  /* YIELD */
A68_CHAR  FNDATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(inassemchar);
 /* line 829: */
{ 
TMDATRN = Reader.Initem ;
A_CALLPROC(TMDATRN,(Reader.Getchar, Msg, &UMDATRN),(Reader.Getchar, Msg, &UMDATRN,(TMDATRN).nonlocals));
VMDATRN_r = UMDATRN;
 /* line 830: */
 /* line 831: */
WMDATRN = VMDATRN_r ;
switch ( WMDATRN.mode )
{ 
case 2: /* VECTOR [] CHAR */
XMDATRN_i = (WMDATRN.data.mode2);
 /* line 832: */
if ( (XMDATRN_i.upb!=1) )
{ 
NHDATRN_fail_token(VMDATRN_r, ZMDATRN, Msg);
 /* line 833: */
ANDATRN = BNDATRN;
} 
else
{ 
 /* line 834: */
CNDATRN = 1 ;
ANDATRN = A_VINDEX(XMDATRN_i,CNDATRN);
} 
break;
default: 
NHDATRN_fail_token(VMDATRN_r, ENDATRN, Msg);
 /* line 835: */
 /* line 836: */
ANDATRN = FNDATRN;
break;
} 
} 
A_PROC_EXIT(inassemchar);
return( ANDATRN );
} 
#undef NL

A68_VOID  INDATRN_inassemid(A68_334  Reader, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_336  JNDATRN;  /* CALL */
A68_333  KNDATRN;  /* avoid structure result */
A68_333  LNDATRN_r;
A68_333  MNDATRN;  /* united object - for case conformity */
A68_VC  NNDATRN_str;
A68_VC  ONDATRN;  /* clause result */
A68_VC  PNDATRN;  /* avoid structure result */
A68_332  QNDATRN_hid;
A68_INT  RNDATRN_index;
A68_INT  SNDATRN_count;
A68_337  TNDATRN_ids_lookup;
A68_BOOL  UNDATRN;  /* optbool result */
A68_350  VNDATRN;  /* collateral clause result */
A68_52  YNDATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZNDATRN;  /* YIELD */
A68_52  AODATRN;  /* OPERATORS - mode -> union mode */
A68_52  DODATRN;  /* OPERATORS - mode -> union mode */
A68_VC  EODATRN;  /* YIELD */
A68_52  FODATRN;  /* OPERATORS - mode -> union mode */
A68_INT  GODATRN;  /* YIELD */
A68_85  HODATRN;  /* OPERATORS - istruct -> vector */
A68_VC  IODATRN;  /* avoid structure result */
A68_46  JODATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  KODATRN;  /* optbool result */
A68_350  LODATRN;  /* collateral clause result */
A68_52  OODATRN;  /* OPERATORS - mode -> union mode */
A68_VC  PODATRN;  /* YIELD */
A68_52  QODATRN;  /* OPERATORS - mode -> union mode */
A68_52  TODATRN;  /* OPERATORS - mode -> union mode */
A68_VC  UODATRN;  /* YIELD */
A68_52  VODATRN;  /* OPERATORS - mode -> union mode */
A68_INT  WODATRN;  /* YIELD */
A68_85  XODATRN;  /* OPERATORS - istruct -> vector */
A68_VC  YODATRN;  /* avoid structure result */
A68_46  ZODATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_102  APDATRN;  /* OPERATORS - simple index */
A68_VC  DPDATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(inassemid);
 /* line 839: */
 /* line 840: */
{ 
JNDATRN = Reader.Initem ;
A_CALLPROC(JNDATRN,(Reader.Getchar, Msg, &KNDATRN),(Reader.Getchar, Msg, &KNDATRN,(JNDATRN).nonlocals));
LNDATRN_r = KNDATRN;
 /* line 841: */
 /* line 842: */
MNDATRN = LNDATRN_r ;
switch ( MNDATRN.mode )
{ 
case 2: /* VECTOR [] CHAR */
NNDATRN_str = (MNDATRN.data.mode2);
 /* line 843: */
ZAAAOSI_makervc( NNDATRN_str, &PNDATRN );
ONDATRN = PNDATRN;
break;
case 4: /* STRUCT(INT,INT)  */
QNDATRN_hid = (MNDATRN.data.mode4);
 /* line 844: */
{ 
RNDATRN_index = QNDATRN_hid.Index;
 /* line 845: */
SNDATRN_count = QNDATRN_hid.Count;
 /* line 846: */
TNDATRN_ids_lookup = (*Reader.Ids_lookup);
 /* line 847: */
UNDATRN = (RNDATRN_index<1);
if ( ! UNDATRN )
{ /* line 848: */
UNDATRN = (RNDATRN_index>TNDATRN_ids_lookup.upb);
}
if ( UNDATRN )
{ 
 /* line 849: */
ZNDATRN = XNDATRN ;
VNDATRN.data[0] = A_UNITE(YNDATRN,mode7,7,ZNDATRN);
VNDATRN.data[1] = A_UNITE(AODATRN,mode1,1,RNDATRN_index);
 /* line 850: */
EODATRN = CODATRN ;
VNDATRN.data[2] = A_UNITE(DODATRN,mode7,7,EODATRN);
GODATRN = TNDATRN_ids_lookup.upb ;
VNDATRN.data[3] = A_UNITE(FODATRN,mode1,1,GODATRN);
 /* line 851: */
UJBAOSL_oneline( A_HISVEC(HODATRN,VNDATRN,4,A68_52 ), &IODATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(JODATRN,IODATRN,A68_VC )),(SHAAOSI_system, A_HVEC(JODATRN,IODATRN,A68_VC ),(Msg).nonlocals));
} 
else
{ 
KODATRN = (SNDATRN_count<1);
if ( ! KODATRN )
{ /* line 852: */
KODATRN = (SNDATRN_count>(*(&A_VINDEX(TNDATRN_ids_lookup,RNDATRN_index))).upb);
}
if ( KODATRN )
{ 
 /* line 853: */
PODATRN = NODATRN ;
LODATRN.data[0] = A_UNITE(OODATRN,mode7,7,PODATRN);
LODATRN.data[1] = A_UNITE(QODATRN,mode1,1,SNDATRN_count);
 /* line 854: */
UODATRN = SODATRN ;
LODATRN.data[2] = A_UNITE(TODATRN,mode7,7,UODATRN);
WODATRN = (*(&A_VINDEX(TNDATRN_ids_lookup,RNDATRN_index))).upb ;
LODATRN.data[3] = A_UNITE(VODATRN,mode1,1,WODATRN);
 /* line 855: */
UJBAOSL_oneline( A_HISVEC(XODATRN,LODATRN,4,A68_52 ), &YODATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(ZODATRN,YODATRN,A68_VC )),(SHAAOSI_system, A_HVEC(ZODATRN,YODATRN,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 856: */
 /* line 857: */
 /* line 858: */
APDATRN = (*(&A_VINDEX(TNDATRN_ids_lookup,RNDATRN_index))) ;
ONDATRN = (*(&A_VINDEX(APDATRN,SNDATRN_count)));
} 
break;
default: 
NHDATRN_fail_token(LNDATRN_r, CPDATRN, Msg);
 /* line 859: */
 /* line 860: */
ONDATRN = DPDATRN;
break;
} 
} 
A_PROC_EXIT(inassemid);
*ReturnedValue = (ONDATRN);
return;
} 
#undef NL

A68_VOID  GPDATRN_read_closure(A68_334  Reader, A68_97  Msg, A68_340  *ReturnedValue)
{ 
A68_143  IPDATRN_get_idstable;   /* proc value of non-global proc */
A68_376  JQDATRN_get_ids;   /* proc value of non-global proc */
A68_377  XQDATRN_get_attr;   /* proc value of non-global proc */
A68_378  DSDATRN_get_formula;
A68_379  ESDATRN_get_formularange;   /* proc value of non-global proc */
A68_378  OUDATRN_anonymous;   /* proc value of non-global proc */
A68_381  ZUDATRN_get_formulas;   /* proc value of non-global proc */
A68_382  NVDATRN_get_range;   /* proc value of non-global proc */
A68_383  YVDATRN_get_type;   /* proc value of non-global proc */
A68_384  WXDATRN_get_instance;
A68_385  XXDATRN_get_sequence;
A68_386  YXDATRN_get_series;
A68_387  ZXDATRN_get_unit;   /* proc value of non-global proc */
A68_389  BIEATRN_get_macparams;   /* proc value of non-global proc */
A68_384  PJEATRN_anonymous;   /* proc value of non-global proc */
A68_392  AKEATRN_get_localdec;   /* proc value of non-global proc */
A68_393  RKEATRN_get_macspecitem;   /* proc value of non-global proc */
A68_394  JLEATRN_get_printitems;   /* proc value of non-global proc */
A68_395  HMEATRN_get_print;   /* proc value of non-global proc */
A68_396  QMEATRN_get_fault;   /* proc value of non-global proc */
A68_397  ZMEATRN_get_names;   /* proc value of non-global proc */
A68_398  NNEATRN_get_let;   /* proc value of non-global proc */
A68_399  WNEATRN_get_seqstep;   /* proc value of non-global proc */
A68_385  HREATRN_anonymous;   /* proc value of non-global proc */
A68_401  WREATRN_get_step;   /* proc value of non-global proc */
A68_386  AUEATRN_anonymous;   /* proc value of non-global proc */
A68_403  PUEATRN_get_fnbody;   /* proc value of non-global proc */
A68_404  KYEATRN_get_typebody;   /* proc value of non-global proc */
A68_406  FAFATRN_get_usage;   /* proc value of non-global proc */
A68_407  TAFATRN_get_attrdec;   /* proc value of non-global proc */
A68_408  HBFATRN_get_intdec;   /* proc value of non-global proc */
A68_409  XBFATRN_get_typedec;   /* proc value of non-global proc */
A68_410  NCFATRN_get_constdec;   /* proc value of non-global proc */
A68_411  DDFATRN_get_fndec;   /* proc value of non-global proc */
A68_414  OFFATRN_get_environ;   /* proc value of non-global proc */
A68_325  JIFATRN_get_closure;   /* proc value of non-global proc */
A68_INT  BJFATRN_head_data_top;
A68_375  DJFATRN_generator;   /* proc value of non-global proc */
A68_102  IJFATRN;  /* avoid structure result */
A68_102  JJFATRN_head_data;
A68_VC * KJFATRN_hd;
A68_INT  LJFATRN;  /* forall loop counter */
A68_VC  MJFATRN;  /* avoid structure result */
A68_340  NJFATRN;  /* collateral clause result */
A68_340  OJFATRN;  /* clause result */
A_PROC_ENTRY(read_closure);
 /* line 863: */
 /* line 894: */
{ 
 /* line 895: */
 /* line 896: */
A_CLOSURE( IPDATRN_get_idstable, JPDATRN_get_idstable, KPDATRN_get_idstable );
(( KPDATRN_get_idstable * ) ( IPDATRN_get_idstable.nonlocals )) -> Reader = Reader;
(( KPDATRN_get_idstable * ) ( IPDATRN_get_idstable.nonlocals )) -> Msg = Msg;
 /* line 914: */
 /* line 915: */
 /* line 916: */
A_CLOSURE( JQDATRN_get_ids, KQDATRN_get_ids, LQDATRN_get_ids );
(( LQDATRN_get_ids * ) ( JQDATRN_get_ids.nonlocals )) -> Reader = Reader;
(( LQDATRN_get_ids * ) ( JQDATRN_get_ids.nonlocals )) -> Msg = Msg;
 /* line 928: */
 /* line 929: */
 /* line 930: */
A_CLOSURE( XQDATRN_get_attr, YQDATRN_get_attr, ZQDATRN_get_attr );
(( ZQDATRN_get_attr * ) ( XQDATRN_get_attr.nonlocals )) -> Reader = Reader;
(( ZQDATRN_get_attr * ) ( XQDATRN_get_attr.nonlocals )) -> Msg = Msg;
(( ZQDATRN_get_attr * ) ( XQDATRN_get_attr.nonlocals )) -> JQDATRN_get_ids = JQDATRN_get_ids;
(( ZQDATRN_get_attr * ) ( XQDATRN_get_attr.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
 /* line 954: */
 /* line 957: */
 /* line 958: */
 /* line 959: */
A_CLOSURE( ESDATRN_get_formularange, FSDATRN_get_formularange, GSDATRN_get_formularange );
(( GSDATRN_get_formularange * ) ( ESDATRN_get_formularange.nonlocals )) -> Reader = Reader;
(( GSDATRN_get_formularange * ) ( ESDATRN_get_formularange.nonlocals )) -> Msg = Msg;
(( GSDATRN_get_formularange * ) ( ESDATRN_get_formularange.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
 /* line 992: */
 /* line 993: */
A_CLOSURE( OUDATRN_anonymous, PUDATRN_anonymous, QUDATRN_anonymous );
(( QUDATRN_anonymous * ) ( OUDATRN_anonymous.nonlocals )) -> ESDATRN_get_formularange = ESDATRN_get_formularange;
(( QUDATRN_anonymous * ) ( OUDATRN_anonymous.nonlocals )) -> Msg = Msg;
DSDATRN_get_formula = OUDATRN_anonymous;
 /* line 997: */
 /* line 998: */
 /* line 999: */
A_CLOSURE( ZUDATRN_get_formulas, AVDATRN_get_formulas, BVDATRN_get_formulas );
(( BVDATRN_get_formulas * ) ( ZUDATRN_get_formulas.nonlocals )) -> Reader = Reader;
(( BVDATRN_get_formulas * ) ( ZUDATRN_get_formulas.nonlocals )) -> Msg = Msg;
(( BVDATRN_get_formulas * ) ( ZUDATRN_get_formulas.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
 /* line 1013: */
 /* line 1014: */
A_CLOSURE( NVDATRN_get_range, OVDATRN_get_range, PVDATRN_get_range );
(( PVDATRN_get_range * ) ( NVDATRN_get_range.nonlocals )) -> ESDATRN_get_formularange = ESDATRN_get_formularange;
(( PVDATRN_get_range * ) ( NVDATRN_get_range.nonlocals )) -> Msg = Msg;
 /* line 1019: */
 /* line 1020: */
 /* line 1021: */
A_CLOSURE( YVDATRN_get_type, ZVDATRN_get_type, AWDATRN_get_type );
(( AWDATRN_get_type * ) ( YVDATRN_get_type.nonlocals )) -> Reader = Reader;
(( AWDATRN_get_type * ) ( YVDATRN_get_type.nonlocals )) -> Msg = Msg;
(( AWDATRN_get_type * ) ( YVDATRN_get_type.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( AWDATRN_get_type * ) ( YVDATRN_get_type.nonlocals )) -> YVDATRN_get_type = YVDATRN_get_type;
 /* line 1053: */
 /* line 1055: */
 /* line 1057: */
 /* line 1059: */
 /* line 1060: */
 /* line 1061: */
A_CLOSURE( ZXDATRN_get_unit, AYDATRN_get_unit, BYDATRN_get_unit );
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> Reader = Reader;
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> Msg = Msg;
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> YVDATRN_get_type = YVDATRN_get_type;
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> NVDATRN_get_range = NVDATRN_get_range;
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> WXDATRN_get_instance = (&WXDATRN_get_instance);
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> XXDATRN_get_sequence = (&XXDATRN_get_sequence);
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> YXDATRN_get_series = (&YXDATRN_get_series);
(( BYDATRN_get_unit * ) ( ZXDATRN_get_unit.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
 /* line 1232: */
 /* line 1233: */
 /* line 1234: */
A_CLOSURE( BIEATRN_get_macparams, CIEATRN_get_macparams, DIEATRN_get_macparams );
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> Reader = Reader;
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> Msg = Msg;
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> WXDATRN_get_instance = (&WXDATRN_get_instance);
(( DIEATRN_get_macparams * ) ( BIEATRN_get_macparams.nonlocals )) -> YVDATRN_get_type = YVDATRN_get_type;
 /* line 1257: */
 /* line 1258: */
 /* line 1259: */
A_CLOSURE( PJEATRN_anonymous, QJEATRN_anonymous, RJEATRN_anonymous );
(( RJEATRN_anonymous * ) ( PJEATRN_anonymous.nonlocals )) -> Reader = Reader;
(( RJEATRN_anonymous * ) ( PJEATRN_anonymous.nonlocals )) -> Msg = Msg;
(( RJEATRN_anonymous * ) ( PJEATRN_anonymous.nonlocals )) -> BIEATRN_get_macparams = BIEATRN_get_macparams;
(( RJEATRN_anonymous * ) ( PJEATRN_anonymous.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
WXDATRN_get_instance = PJEATRN_anonymous;
 /* line 1265: */
A_CLOSURE( AKEATRN_get_localdec, BKEATRN_get_localdec, CKEATRN_get_localdec );
(( CKEATRN_get_localdec * ) ( AKEATRN_get_localdec.nonlocals )) -> Reader = Reader;
(( CKEATRN_get_localdec * ) ( AKEATRN_get_localdec.nonlocals )) -> Msg = Msg;
 /* line 1276: */
A_CLOSURE( RKEATRN_get_macspecitem, SKEATRN_get_macspecitem, TKEATRN_get_macspecitem );
(( TKEATRN_get_macspecitem * ) ( RKEATRN_get_macspecitem.nonlocals )) -> Reader = Reader;
(( TKEATRN_get_macspecitem * ) ( RKEATRN_get_macspecitem.nonlocals )) -> Msg = Msg;
 /* line 1287: */
 /* line 1288: */
 /* line 1289: */
A_CLOSURE( JLEATRN_get_printitems, KLEATRN_get_printitems, LLEATRN_get_printitems );
(( LLEATRN_get_printitems * ) ( JLEATRN_get_printitems.nonlocals )) -> Reader = Reader;
(( LLEATRN_get_printitems * ) ( JLEATRN_get_printitems.nonlocals )) -> Msg = Msg;
(( LLEATRN_get_printitems * ) ( JLEATRN_get_printitems.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
 /* line 1306: */
 /* line 1307: */
 /* line 1308: */
A_CLOSURE( HMEATRN_get_print, IMEATRN_get_print, JMEATRN_get_print );
(( JMEATRN_get_print * ) ( HMEATRN_get_print.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( JMEATRN_get_print * ) ( HMEATRN_get_print.nonlocals )) -> JLEATRN_get_printitems = JLEATRN_get_printitems;
 /* line 1313: */
 /* line 1314: */
 /* line 1315: */
A_CLOSURE( QMEATRN_get_fault, RMEATRN_get_fault, SMEATRN_get_fault );
(( SMEATRN_get_fault * ) ( QMEATRN_get_fault.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( SMEATRN_get_fault * ) ( QMEATRN_get_fault.nonlocals )) -> JLEATRN_get_printitems = JLEATRN_get_printitems;
 /* line 1320: */
 /* line 1321: */
 /* line 1322: */
A_CLOSURE( ZMEATRN_get_names, ANEATRN_get_names, BNEATRN_get_names );
(( BNEATRN_get_names * ) ( ZMEATRN_get_names.nonlocals )) -> Reader = Reader;
(( BNEATRN_get_names * ) ( ZMEATRN_get_names.nonlocals )) -> Msg = Msg;
 /* line 1337: */
 /* line 1338: */
 /* line 1339: */
A_CLOSURE( NNEATRN_get_let, ONEATRN_get_let, PNEATRN_get_let );
(( PNEATRN_get_let * ) ( NNEATRN_get_let.nonlocals )) -> ZMEATRN_get_names = ZMEATRN_get_names;
(( PNEATRN_get_let * ) ( NNEATRN_get_let.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
 /* line 1344: */
 /* line 1345: */
 /* line 1346: */
A_CLOSURE( WNEATRN_get_seqstep, XNEATRN_get_seqstep, YNEATRN_get_seqstep );
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> Reader = Reader;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> Msg = Msg;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> WNEATRN_get_seqstep = WNEATRN_get_seqstep;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> HMEATRN_get_print = HMEATRN_get_print;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> QMEATRN_get_fault = QMEATRN_get_fault;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> XXDATRN_get_sequence = (&XXDATRN_get_sequence);
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> NNEATRN_get_let = NNEATRN_get_let;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> ZMEATRN_get_names = ZMEATRN_get_names;
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( YNEATRN_get_seqstep * ) ( WNEATRN_get_seqstep.nonlocals )) -> AKEATRN_get_localdec = AKEATRN_get_localdec;
 /* line 1413: */
 /* line 1414: */
 /* line 1415: */
A_CLOSURE( HREATRN_anonymous, IREATRN_anonymous, JREATRN_anonymous );
(( JREATRN_anonymous * ) ( HREATRN_anonymous.nonlocals )) -> Reader = Reader;
(( JREATRN_anonymous * ) ( HREATRN_anonymous.nonlocals )) -> Msg = Msg;
(( JREATRN_anonymous * ) ( HREATRN_anonymous.nonlocals )) -> WNEATRN_get_seqstep = WNEATRN_get_seqstep;
XXDATRN_get_sequence = HREATRN_anonymous;
 /* line 1432: */
 /* line 1433: */
 /* line 1434: */
A_CLOSURE( WREATRN_get_step, XREATRN_get_step, YREATRN_get_step );
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> Reader = Reader;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> Msg = Msg;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> NNEATRN_get_let = NNEATRN_get_let;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> ZUDATRN_get_formulas = ZUDATRN_get_formulas;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> WXDATRN_get_instance = (&WXDATRN_get_instance);
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> ZMEATRN_get_names = ZMEATRN_get_names;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> HMEATRN_get_print = HMEATRN_get_print;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> QMEATRN_get_fault = QMEATRN_get_fault;
(( YREATRN_get_step * ) ( WREATRN_get_step.nonlocals )) -> AKEATRN_get_localdec = AKEATRN_get_localdec;
 /* line 1475: */
 /* line 1476: */
 /* line 1477: */
A_CLOSURE( AUEATRN_anonymous, BUEATRN_anonymous, CUEATRN_anonymous );
(( CUEATRN_anonymous * ) ( AUEATRN_anonymous.nonlocals )) -> Reader = Reader;
(( CUEATRN_anonymous * ) ( AUEATRN_anonymous.nonlocals )) -> Msg = Msg;
(( CUEATRN_anonymous * ) ( AUEATRN_anonymous.nonlocals )) -> WREATRN_get_step = WREATRN_get_step;
YXDATRN_get_series = AUEATRN_anonymous;
 /* line 1493: */
 /* line 1494: */
 /* line 1495: */
A_CLOSURE( PUEATRN_get_fnbody, QUEATRN_get_fnbody, RUEATRN_get_fnbody );
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> Reader = Reader;
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> Msg = Msg;
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> BIEATRN_get_macparams = BIEATRN_get_macparams;
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> DSDATRN_get_formula = (&DSDATRN_get_formula);
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> WXDATRN_get_instance = (&WXDATRN_get_instance);
(( RUEATRN_get_fnbody * ) ( PUEATRN_get_fnbody.nonlocals )) -> PUEATRN_get_fnbody = PUEATRN_get_fnbody;
 /* line 1566: */
 /* line 1567: */
A_CLOSURE( KYEATRN_get_typebody, LYEATRN_get_typebody, MYEATRN_get_typebody );
(( MYEATRN_get_typebody * ) ( KYEATRN_get_typebody.nonlocals )) -> Reader = Reader;
(( MYEATRN_get_typebody * ) ( KYEATRN_get_typebody.nonlocals )) -> Msg = Msg;
(( MYEATRN_get_typebody * ) ( KYEATRN_get_typebody.nonlocals )) -> YVDATRN_get_type = YVDATRN_get_type;
(( MYEATRN_get_typebody * ) ( KYEATRN_get_typebody.nonlocals )) -> NVDATRN_get_range = NVDATRN_get_range;
 /* line 1595: */
 /* line 1596: */
 /* line 1597: */
A_CLOSURE( FAFATRN_get_usage, GAFATRN_get_usage, HAFATRN_get_usage );
(( HAFATRN_get_usage * ) ( FAFATRN_get_usage.nonlocals )) -> Reader = Reader;
(( HAFATRN_get_usage * ) ( FAFATRN_get_usage.nonlocals )) -> Msg = Msg;
 /* line 1611: */
 /* line 1612: */
A_CLOSURE( TAFATRN_get_attrdec, UAFATRN_get_attrdec, VAFATRN_get_attrdec );
(( VAFATRN_get_attrdec * ) ( TAFATRN_get_attrdec.nonlocals )) -> Reader = Reader;
(( VAFATRN_get_attrdec * ) ( TAFATRN_get_attrdec.nonlocals )) -> Msg = Msg;
(( VAFATRN_get_attrdec * ) ( TAFATRN_get_attrdec.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
(( VAFATRN_get_attrdec * ) ( TAFATRN_get_attrdec.nonlocals )) -> FAFATRN_get_usage = FAFATRN_get_usage;
 /* line 1623: */
 /* line 1624: */
A_CLOSURE( HBFATRN_get_intdec, IBFATRN_get_intdec, JBFATRN_get_intdec );
(( JBFATRN_get_intdec * ) ( HBFATRN_get_intdec.nonlocals )) -> Reader = Reader;
(( JBFATRN_get_intdec * ) ( HBFATRN_get_intdec.nonlocals )) -> Msg = Msg;
(( JBFATRN_get_intdec * ) ( HBFATRN_get_intdec.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
(( JBFATRN_get_intdec * ) ( HBFATRN_get_intdec.nonlocals )) -> ESDATRN_get_formularange = ESDATRN_get_formularange;
(( JBFATRN_get_intdec * ) ( HBFATRN_get_intdec.nonlocals )) -> FAFATRN_get_usage = FAFATRN_get_usage;
 /* line 1636: */
 /* line 1637: */
A_CLOSURE( XBFATRN_get_typedec, YBFATRN_get_typedec, ZBFATRN_get_typedec );
(( ZBFATRN_get_typedec * ) ( XBFATRN_get_typedec.nonlocals )) -> Reader = Reader;
(( ZBFATRN_get_typedec * ) ( XBFATRN_get_typedec.nonlocals )) -> Msg = Msg;
(( ZBFATRN_get_typedec * ) ( XBFATRN_get_typedec.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
(( ZBFATRN_get_typedec * ) ( XBFATRN_get_typedec.nonlocals )) -> KYEATRN_get_typebody = KYEATRN_get_typebody;
(( ZBFATRN_get_typedec * ) ( XBFATRN_get_typedec.nonlocals )) -> FAFATRN_get_usage = FAFATRN_get_usage;
 /* line 1649: */
 /* line 1650: */
A_CLOSURE( NCFATRN_get_constdec, OCFATRN_get_constdec, PCFATRN_get_constdec );
(( PCFATRN_get_constdec * ) ( NCFATRN_get_constdec.nonlocals )) -> Reader = Reader;
(( PCFATRN_get_constdec * ) ( NCFATRN_get_constdec.nonlocals )) -> Msg = Msg;
(( PCFATRN_get_constdec * ) ( NCFATRN_get_constdec.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
(( PCFATRN_get_constdec * ) ( NCFATRN_get_constdec.nonlocals )) -> ZXDATRN_get_unit = ZXDATRN_get_unit;
(( PCFATRN_get_constdec * ) ( NCFATRN_get_constdec.nonlocals )) -> FAFATRN_get_usage = FAFATRN_get_usage;
 /* line 1664: */
 /* line 1665: */
 /* line 1666: */
A_CLOSURE( DDFATRN_get_fndec, EDFATRN_get_fndec, FDFATRN_get_fndec );
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> Reader = Reader;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> Msg = Msg;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> RKEATRN_get_macspecitem = RKEATRN_get_macspecitem;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> XQDATRN_get_attr = XQDATRN_get_attr;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> ZMEATRN_get_names = ZMEATRN_get_names;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> YVDATRN_get_type = YVDATRN_get_type;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> PUEATRN_get_fnbody = PUEATRN_get_fnbody;
(( FDFATRN_get_fndec * ) ( DDFATRN_get_fndec.nonlocals )) -> FAFATRN_get_usage = FAFATRN_get_usage;
 /* line 1710: */
 /* line 1711: */
 /* line 1712: */
A_CLOSURE( OFFATRN_get_environ, PFFATRN_get_environ, QFFATRN_get_environ );
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> Reader = Reader;
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> Msg = Msg;
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> TAFATRN_get_attrdec = TAFATRN_get_attrdec;
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> HBFATRN_get_intdec = HBFATRN_get_intdec;
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> XBFATRN_get_typedec = XBFATRN_get_typedec;
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> NCFATRN_get_constdec = NCFATRN_get_constdec;
(( QFFATRN_get_environ * ) ( OFFATRN_get_environ.nonlocals )) -> DDFATRN_get_fndec = DDFATRN_get_fndec;
 /* line 1741: */
 /* line 1742: */
 /* line 1743: */
A_CLOSURE( JIFATRN_get_closure, KIFATRN_get_closure, LIFATRN_get_closure );
(( LIFATRN_get_closure * ) ( JIFATRN_get_closure.nonlocals )) -> IPDATRN_get_idstable = IPDATRN_get_idstable;
(( LIFATRN_get_closure * ) ( JIFATRN_get_closure.nonlocals )) -> Reader = Reader;
(( LIFATRN_get_closure * ) ( JIFATRN_get_closure.nonlocals )) -> Msg = Msg;
(( LIFATRN_get_closure * ) ( JIFATRN_get_closure.nonlocals )) -> OFFATRN_get_environ = OFFATRN_get_environ;
 /* line 1765: */
BJFATRN_head_data_top = CLDATRN_inassemint(Reader, Msg);
 /* line 1766: */
A_CLOSURE( DJFATRN_generator, EJFATRN_generator, FJFATRN_generator );
(( FJFATRN_generator * ) ( DJFATRN_generator.nonlocals )) -> BJFATRN_head_data_top = BJFATRN_head_data_top;
A_CALLPROC(DJFATRN_generator,(A68_FALSE, &IJFATRN),(A68_FALSE, &IJFATRN,(DJFATRN_generator).nonlocals));
JJFATRN_head_data = IJFATRN;
 /* line 1768: */
LJFATRN = JJFATRN_head_data.upb -1;
KJFATRN_hd = JJFATRN_head_data.data;
for (;LJFATRN-- >= 0;
(KJFATRN_hd++
) )
{
INDATRN_inassemid( Reader, Msg, &MJFATRN );
(*KJFATRN_hd) = MJFATRN;
}
 /* line 1769: */
NJFATRN.Closure = A_CALLPROC(JIFATRN_get_closure,(),((JIFATRN_get_closure).nonlocals));
 /* line 1770: */
NJFATRN.Head_data = JJFATRN_head_data;
OJFATRN = NJFATRN;
} 
A_PROC_EXIT(read_closure);
*ReturnedValue = (OJFATRN);
return;
} 
#undef NL

A68_VOID  SJFATRN_outassemchar(A68_CHAR  C, A68_338  Writer, A68_97  Msg)
{ 
A68_339  TJFATRN;  /* CALL */
A68_VC  UJFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  VJFATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WJFATRN;  /* YIELD */
A_PROC_ENTRY(outassemchar);
 /* line 1780: */
TJFATRN = Writer.Outitem ;
WJFATRN = A_HVEC(UJFATRN,C,A68_CHAR ) ;
A_CALLPROC(TJFATRN,(A_UNITE(VJFATRN,mode2,2,WJFATRN), Writer.Putstring, Msg),(A_UNITE(VJFATRN,mode2,2,WJFATRN), Writer.Putstring, Msg,(TJFATRN).nonlocals));
A_PROC_EXIT(outassemchar);
return;
} 
#undef NL

A68_VOID  AKFATRN_outassemint(A68_INT  I, A68_338  Writer, A68_97  Msg)
{ 
A68_339  BKFATRN;  /* CALL */
A68_333  CKFATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(outassemint);
 /* line 1782: */
BKFATRN = Writer.Outitem ;
A_CALLPROC(BKFATRN,(A_UNITE(CKFATRN,mode1,1,I), Writer.Putstring, Msg),(A_UNITE(CKFATRN,mode1,1,I), Writer.Putstring, Msg,(BKFATRN).nonlocals));
A_PROC_EXIT(outassemint);
return;
} 
#undef NL

A68_VOID  GKFATRN_outassemstr(A68_VC  N, A68_338  Writer, A68_97  Msg)
{ 
A68_339  HKFATRN;  /* CALL */
A68_333  IKFATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(outassemstr);
 /* line 1784: */
HKFATRN = Writer.Outitem ;
A_CALLPROC(HKFATRN,(A_UNITE(IKFATRN,mode2,2,N), Writer.Putstring, Msg),(A_UNITE(IKFATRN,mode2,2,N), Writer.Putstring, Msg,(HKFATRN).nonlocals));
A_PROC_EXIT(outassemstr);
return;
} 
#undef NL
 /* line 1787: */
 /* line 1788: */
 /* line 1789: */

A68_VOID  NKFATRN_outassemtok(A68_INT  Tok, A68_BOOL  Nil, A68_338  Writer, A68_97  Msg)
{ 
A68_INT  OKFATRN_c_tok;
A68_331  PKFATRN;  /* collateral clause result */
A68_339  QKFATRN;  /* CALL */
A68_333  RKFATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(outassemtok);
 /* line 1790: */
 /* line 1791: */
{ 
OKFATRN_c_tok = A_VINDEX(DHDATRN_a68_c,Tok);
 /* line 1792: */
PKFATRN.Token = OKFATRN_c_tok;
PKFATRN.Nil = Nil;
 /* line 1793: */
QKFATRN = Writer.Outitem ;
A_CALLPROC(QKFATRN,(A_UNITE(RKFATRN,mode3,3,PKFATRN), Writer.Putstring, Msg),(A_UNITE(RKFATRN,mode3,3,PKFATRN), Writer.Putstring, Msg,(QKFATRN).nonlocals));
} 
A_PROC_EXIT(outassemtok);
return;
} 
#undef NL

A68_VOID  VKFATRN_outassembool(A68_BOOL  B, A68_338  Writer, A68_97  Msg)
{ 
A68_339  WKFATRN;  /* CALL */
A68_333  XKFATRN;  /* OPERATORS - mode -> union mode */
A68_INT  YKFATRN;  /* YIELD */
A_PROC_ENTRY(outassembool);
 /* line 1796: */
WKFATRN = Writer.Outitem ;
YKFATRN = (B) ;
A_CALLPROC(WKFATRN,(A_UNITE(XKFATRN,mode1,1,YKFATRN), Writer.Putstring, Msg),(A_UNITE(XKFATRN,mode1,1,YKFATRN), Writer.Putstring, Msg,(WKFATRN).nonlocals));
A_PROC_EXIT(outassembool);
return;
} 
#undef NL

A68_VOID  CLFATRN_outassemid(A68_VC  Id, A68_338  Writer, A68_97  Msg)
{ 
A68_INT  DLFATRN_width;
A68_INT  ELFATRN_index;
A68_CHAR * FLFATRN_c;
A68_INT  GLFATRN;  /* forall loop counter */
A68_INT  HLFATRN;  /* ADICOPS - MOD */
A68_159 ** ILFATRN_ptr;
A68_INT  JLFATRN_count;
A68_BOOL  KLFATRN;  /* optbool result */
A68_332  LLFATRN;  /* collateral clause result */
A68_339  MLFATRN;  /* CALL */
A68_333  NLFATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(outassemid);
 /* line 1804: */
 /* line 1805: */
if ( (Id.upb==0) )
{ 
 /* line 1806: */
GKFATRN_outassemstr(Id, Writer, Msg);
} 
else
{ 
DLFATRN_width = BLAATRN_idstable.upb;
 /* line 1807: */
ELFATRN_index = 0;
 /* line 1808: */
GLFATRN = Id.upb -1;
FLFATRN_c = Id.data;
for (;GLFATRN-- >= 0;
(FLFATRN_c++
) )
{
ELFATRN_index+=(A68_INT)(unsigned char)(*FLFATRN_c);
}
 /* line 1809: */
ELFATRN_index = (A_MOD(ELFATRN_index,DLFATRN_width,HLFATRN)+1);
 /* line 1810: */
ILFATRN_ptr = (&A_VINDEX(BLAATRN_idstable,ELFATRN_index));
 /* line 1811: */
JLFATRN_count = 1;
 /* line 1812: */
for ( ;; )
{ 
KLFATRN = ((*ILFATRN_ptr)!=LAAATRN_nilids);
if ( KLFATRN )
{ /* line 1813: */
KLFATRN = A_VC_NE((*(&((*ILFATRN_ptr)->Id))),Id);
}
if ( !(KLFATRN) ) break;
ILFATRN_ptr = (&((*ILFATRN_ptr)->Rest));
JLFATRN_count+=1;
}
 /* line 1814: */
 /* line 1815: */
if ( ((*ILFATRN_ptr)==LAAATRN_nilids) )
{ 
 /* line 1816: */
GKFATRN_outassemstr(Id, Writer, Msg);
} 
else
{ 
LLFATRN.Index = ELFATRN_index;
LLFATRN.Count = JLFATRN_count;
 /* line 1817: */
 /* line 1818: */
 /* line 1819: */
MLFATRN = Writer.Outitem ;
A_CALLPROC(MLFATRN,(A_UNITE(NLFATRN,mode4,4,LLFATRN), Writer.Putstring, Msg),(A_UNITE(NLFATRN,mode4,4,LLFATRN), Writer.Putstring, Msg,(MLFATRN).nonlocals));
} 
} 
A_PROC_EXIT(outassemid);
return;
} 
#undef NL
 /* line 1822: */
 /* line 1823: */

A68_VOID  RLFATRN_write_closure(A68_340  Dc, A68_338  Writer, A68_97  Msg)
{ 
A68_INT  SLFATRN_listnumb;
A68_422  TLFATRN;  /* clause result */
A68_422  ULFATRN;  /* procedure value */
A68_422  VLFATRN;  /* procedure value */
A68_422  WLFATRN_outid;
A68_143  XLFATRN_pt_idstable;   /* proc value of non-global proc */
A68_426  FMFATRN_pt_ids;   /* proc value of non-global proc */
A68_427  LMFATRN_pt_attr;   /* proc value of non-global proc */
A68_428  WMFATRN_pt_formula;   /* proc value of non-global proc */
A68_429  ONFATRN_pt_range;   /* proc value of non-global proc */
A68_430  SNFATRN_pt_formulas;   /* proc value of non-global proc */
A68_431  XNFATRN_pt_formularange;   /* proc value of non-global proc */
A68_432  HOFATRN_pt_type;   /* proc value of non-global proc */
A68_433  BPFATRN_pt_printfault;   /* proc value of non-global proc */
A68_434  JPFATRN_pt_names;   /* proc value of non-global proc */
A68_436  PPFATRN_pt_let;   /* proc value of non-global proc */
A68_437  TPFATRN_pt_localdec;   /* proc value of non-global proc */
A68_438  IQFATRN_pt_sequence;
A68_438  JQFATRN;  /* procedure value */
A68_439  MQFATRN_pt_seqstep;   /* proc value of non-global proc */
A68_438  ORFATRN_do_pt_sequence;   /* proc value of non-global proc */
A68_441  VRFATRN_pt_macparams;
A68_441  WRFATRN;  /* procedure value */
A68_442  YRFATRN_pt_instance;   /* proc value of non-global proc */
A68_443  DSFATRN_pt_step;   /* proc value of non-global proc */
A68_435  USFATRN_pt_unit;   /* proc value of non-global proc */
A68_445  YUFATRN_pt_macparam;   /* proc value of non-global proc */
A68_441  IVFATRN_do_pt_macparams;   /* proc value of non-global proc */
A68_446  RVFATRN_pt_fnbody;   /* proc value of non-global proc */
A68_447  MWFATRN_pt_macspec;   /* proc value of non-global proc */
A68_448  ZWFATRN_pt_usage;   /* proc value of non-global proc */
A68_449  DXFATRN_pt_attrdec;   /* proc value of non-global proc */
A68_450  HXFATRN_pt_intdec;   /* proc value of non-global proc */
A68_451  LXFATRN_pt_typebody;   /* proc value of non-global proc */
A68_452  AYFATRN_pt_typedec;   /* proc value of non-global proc */
A68_453  EYFATRN_pt_constdec;   /* proc value of non-global proc */
A68_454  IYFATRN_pt_fndec;   /* proc value of non-global proc */
A68_455  TYFATRN_pt_environ;   /* proc value of non-global proc */
A68_456  MZFATRN_pt_closure;   /* proc value of non-global proc */
A68_46  TZFATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * UZFATRN_hd;
A68_102  VZFATRN;  /* forall yield */
A68_INT  WZFATRN;  /* forall loop counter */
A_PROC_ENTRY(write_closure);
 /* line 1824: */
 /* line 1825: */
{ 
 /* line 1827: */
 /* line 1828: */
if ( Writer.Write_idstable )
{ 
ULFATRN.fn.fn_global = CLFATRN_outassemid;
ULFATRN.nonlocals = A68_NIL;
TLFATRN = ULFATRN;
} 
else
{ 
VLFATRN.fn.fn_global = GKFATRN_outassemstr;
VLFATRN.nonlocals = A68_NIL;
TLFATRN = VLFATRN;
} 
WLFATRN_outid = TLFATRN;
 /* line 1830: */
 /* line 1831: */
 /* line 1832: */
A_CLOSURE( XLFATRN_pt_idstable, YLFATRN_pt_idstable, ZLFATRN_pt_idstable );
(( ZLFATRN_pt_idstable * ) ( XLFATRN_pt_idstable.nonlocals )) -> Writer = Writer;
(( ZLFATRN_pt_idstable * ) ( XLFATRN_pt_idstable.nonlocals )) -> Msg = Msg;
 /* line 1847: */
A_CLOSURE( FMFATRN_pt_ids, GMFATRN_pt_ids, HMFATRN_pt_ids );
(( HMFATRN_pt_ids * ) ( FMFATRN_pt_ids.nonlocals )) -> Writer = Writer;
(( HMFATRN_pt_ids * ) ( FMFATRN_pt_ids.nonlocals )) -> Msg = Msg;
(( HMFATRN_pt_ids * ) ( FMFATRN_pt_ids.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
 /* line 1867: */
A_CLOSURE( LMFATRN_pt_attr, MMFATRN_pt_attr, NMFATRN_pt_attr );
(( NMFATRN_pt_attr * ) ( LMFATRN_pt_attr.nonlocals )) -> Writer = Writer;
(( NMFATRN_pt_attr * ) ( LMFATRN_pt_attr.nonlocals )) -> Msg = Msg;
(( NMFATRN_pt_attr * ) ( LMFATRN_pt_attr.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( NMFATRN_pt_attr * ) ( LMFATRN_pt_attr.nonlocals )) -> FMFATRN_pt_ids = FMFATRN_pt_ids;
(( NMFATRN_pt_attr * ) ( LMFATRN_pt_attr.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
 /* line 1902: */
A_CLOSURE( WMFATRN_pt_formula, XMFATRN_pt_formula, YMFATRN_pt_formula );
(( YMFATRN_pt_formula * ) ( WMFATRN_pt_formula.nonlocals )) -> Writer = Writer;
(( YMFATRN_pt_formula * ) ( WMFATRN_pt_formula.nonlocals )) -> Msg = Msg;
(( YMFATRN_pt_formula * ) ( WMFATRN_pt_formula.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( YMFATRN_pt_formula * ) ( WMFATRN_pt_formula.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
 /* line 1955: */
A_CLOSURE( ONFATRN_pt_range, PNFATRN_pt_range, QNFATRN_pt_range );
(( QNFATRN_pt_range * ) ( ONFATRN_pt_range.nonlocals )) -> Writer = Writer;
(( QNFATRN_pt_range * ) ( ONFATRN_pt_range.nonlocals )) -> Msg = Msg;
(( QNFATRN_pt_range * ) ( ONFATRN_pt_range.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
 /* line 1961: */
A_CLOSURE( SNFATRN_pt_formulas, TNFATRN_pt_formulas, UNFATRN_pt_formulas );
(( UNFATRN_pt_formulas * ) ( SNFATRN_pt_formulas.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
(( UNFATRN_pt_formulas * ) ( SNFATRN_pt_formulas.nonlocals )) -> Writer = Writer;
(( UNFATRN_pt_formulas * ) ( SNFATRN_pt_formulas.nonlocals )) -> Msg = Msg;
(( UNFATRN_pt_formulas * ) ( SNFATRN_pt_formulas.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
 /* line 1979: */
A_CLOSURE( XNFATRN_pt_formularange, YNFATRN_pt_formularange, ZNFATRN_pt_formularange );
(( ZNFATRN_pt_formularange * ) ( XNFATRN_pt_formularange.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( ZNFATRN_pt_formularange * ) ( XNFATRN_pt_formularange.nonlocals )) -> ONFATRN_pt_range = ONFATRN_pt_range;
(( ZNFATRN_pt_formularange * ) ( XNFATRN_pt_formularange.nonlocals )) -> Msg = Msg;
 /* line 1987: */
A_CLOSURE( HOFATRN_pt_type, IOFATRN_pt_type, JOFATRN_pt_type );
(( JOFATRN_pt_type * ) ( HOFATRN_pt_type.nonlocals )) -> Writer = Writer;
(( JOFATRN_pt_type * ) ( HOFATRN_pt_type.nonlocals )) -> Msg = Msg;
(( JOFATRN_pt_type * ) ( HOFATRN_pt_type.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( JOFATRN_pt_type * ) ( HOFATRN_pt_type.nonlocals )) -> HOFATRN_pt_type = HOFATRN_pt_type;
(( JOFATRN_pt_type * ) ( HOFATRN_pt_type.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
 /* line 2043: */
A_CLOSURE( BPFATRN_pt_printfault, CPFATRN_pt_printfault, DPFATRN_pt_printfault );
(( DPFATRN_pt_printfault * ) ( BPFATRN_pt_printfault.nonlocals )) -> Writer = Writer;
(( DPFATRN_pt_printfault * ) ( BPFATRN_pt_printfault.nonlocals )) -> Msg = Msg;
(( DPFATRN_pt_printfault * ) ( BPFATRN_pt_printfault.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( DPFATRN_pt_printfault * ) ( BPFATRN_pt_printfault.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
(( DPFATRN_pt_printfault * ) ( BPFATRN_pt_printfault.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
 /* line 2071: */
A_CLOSURE( JPFATRN_pt_names, KPFATRN_pt_names, LPFATRN_pt_names );
(( LPFATRN_pt_names * ) ( JPFATRN_pt_names.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
(( LPFATRN_pt_names * ) ( JPFATRN_pt_names.nonlocals )) -> Writer = Writer;
(( LPFATRN_pt_names * ) ( JPFATRN_pt_names.nonlocals )) -> Msg = Msg;
 /* line 2089: */
A_CLOSURE( PPFATRN_pt_let, QPFATRN_pt_let, RPFATRN_pt_let );
(( RPFATRN_pt_let * ) ( PPFATRN_pt_let.nonlocals )) -> Writer = Writer;
(( RPFATRN_pt_let * ) ( PPFATRN_pt_let.nonlocals )) -> Msg = Msg;
(( RPFATRN_pt_let * ) ( PPFATRN_pt_let.nonlocals )) -> JPFATRN_pt_names = JPFATRN_pt_names;
 /* line 2095: */
A_CLOSURE( TPFATRN_pt_localdec, UPFATRN_pt_localdec, VPFATRN_pt_localdec );
(( VPFATRN_pt_localdec * ) ( TPFATRN_pt_localdec.nonlocals )) -> Writer = Writer;
(( VPFATRN_pt_localdec * ) ( TPFATRN_pt_localdec.nonlocals )) -> Msg = Msg;
 /* line 2121: */
 /* line 2122: */
JQFATRN.fn.fn_global = HQFATRN_anonymous;
JQFATRN.nonlocals = A68_NIL;
IQFATRN_pt_sequence = (JQFATRN);
 /* line 2124: */
A_CLOSURE( MQFATRN_pt_seqstep, NQFATRN_pt_seqstep, OQFATRN_pt_seqstep );
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> Writer = Writer;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> Msg = Msg;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> MQFATRN_pt_seqstep = MQFATRN_pt_seqstep;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> TPFATRN_pt_localdec = TPFATRN_pt_localdec;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> BPFATRN_pt_printfault = BPFATRN_pt_printfault;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> PPFATRN_pt_let = PPFATRN_pt_let;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> JPFATRN_pt_names = JPFATRN_pt_names;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( OQFATRN_pt_seqstep * ) ( MQFATRN_pt_seqstep.nonlocals )) -> IQFATRN_pt_sequence = (&IQFATRN_pt_sequence);
 /* line 2206: */
A_CLOSURE( ORFATRN_do_pt_sequence, PRFATRN_do_pt_sequence, QRFATRN_do_pt_sequence );
(( QRFATRN_do_pt_sequence * ) ( ORFATRN_do_pt_sequence.nonlocals )) -> Writer = Writer;
(( QRFATRN_do_pt_sequence * ) ( ORFATRN_do_pt_sequence.nonlocals )) -> Msg = Msg;
(( QRFATRN_do_pt_sequence * ) ( ORFATRN_do_pt_sequence.nonlocals )) -> MQFATRN_pt_seqstep = MQFATRN_pt_seqstep;
 /* line 2224: */
IQFATRN_pt_sequence = ORFATRN_do_pt_sequence;
 /* line 2226: */
 /* line 2227: */
WRFATRN.fn.fn_global = URFATRN_anonymous;
WRFATRN.nonlocals = A68_NIL;
VRFATRN_pt_macparams = (WRFATRN);
 /* line 2229: */
A_CLOSURE( YRFATRN_pt_instance, ZRFATRN_pt_instance, ASFATRN_pt_instance );
(( ASFATRN_pt_instance * ) ( YRFATRN_pt_instance.nonlocals )) -> Writer = Writer;
(( ASFATRN_pt_instance * ) ( YRFATRN_pt_instance.nonlocals )) -> Msg = Msg;
(( ASFATRN_pt_instance * ) ( YRFATRN_pt_instance.nonlocals )) -> VRFATRN_pt_macparams = (&VRFATRN_pt_macparams);
(( ASFATRN_pt_instance * ) ( YRFATRN_pt_instance.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
 /* line 2236: */
A_CLOSURE( DSFATRN_pt_step, ESFATRN_pt_step, FSFATRN_pt_step );
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> TPFATRN_pt_localdec = TPFATRN_pt_localdec;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> BPFATRN_pt_printfault = BPFATRN_pt_printfault;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> PPFATRN_pt_let = PPFATRN_pt_let;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> Writer = Writer;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> Msg = Msg;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> SNFATRN_pt_formulas = SNFATRN_pt_formulas;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> YRFATRN_pt_instance = YRFATRN_pt_instance;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> JPFATRN_pt_names = JPFATRN_pt_names;
(( FSFATRN_pt_step * ) ( DSFATRN_pt_step.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
 /* line 2285: */
A_CLOSURE( USFATRN_pt_unit, VSFATRN_pt_unit, WSFATRN_pt_unit );
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> Writer = Writer;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> Msg = Msg;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> USFATRN_pt_unit = USFATRN_pt_unit;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> HOFATRN_pt_type = HOFATRN_pt_type;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> ONFATRN_pt_range = ONFATRN_pt_range;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> YRFATRN_pt_instance = YRFATRN_pt_instance;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> IQFATRN_pt_sequence = (&IQFATRN_pt_sequence);
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> DSFATRN_pt_step = DSFATRN_pt_step;
(( WSFATRN_pt_unit * ) ( USFATRN_pt_unit.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
 /* line 2526: */
A_CLOSURE( YUFATRN_pt_macparam, ZUFATRN_pt_macparam, AVFATRN_pt_macparam );
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> Writer = Writer;
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> Msg = Msg;
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> HOFATRN_pt_type = HOFATRN_pt_type;
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> USFATRN_pt_unit = USFATRN_pt_unit;
(( AVFATRN_pt_macparam * ) ( YUFATRN_pt_macparam.nonlocals )) -> YRFATRN_pt_instance = YRFATRN_pt_instance;
 /* line 2547: */
A_CLOSURE( IVFATRN_do_pt_macparams, JVFATRN_do_pt_macparams, KVFATRN_do_pt_macparams );
(( KVFATRN_do_pt_macparams * ) ( IVFATRN_do_pt_macparams.nonlocals )) -> Writer = Writer;
(( KVFATRN_do_pt_macparams * ) ( IVFATRN_do_pt_macparams.nonlocals )) -> Msg = Msg;
(( KVFATRN_do_pt_macparams * ) ( IVFATRN_do_pt_macparams.nonlocals )) -> YUFATRN_pt_macparam = YUFATRN_pt_macparam;
 /* line 2560: */
VRFATRN_pt_macparams = IVFATRN_do_pt_macparams;
 /* line 2562: */
A_CLOSURE( RVFATRN_pt_fnbody, SVFATRN_pt_fnbody, TVFATRN_pt_fnbody );
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> Writer = Writer;
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> Msg = Msg;
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> WMFATRN_pt_formula = WMFATRN_pt_formula;
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> VRFATRN_pt_macparams = (&VRFATRN_pt_macparams);
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> YRFATRN_pt_instance = YRFATRN_pt_instance;
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> SLFATRN_listnumb = (&SLFATRN_listnumb);
(( TVFATRN_pt_fnbody * ) ( RVFATRN_pt_fnbody.nonlocals )) -> RVFATRN_pt_fnbody = RVFATRN_pt_fnbody;
 /* line 2651: */
A_CLOSURE( MWFATRN_pt_macspec, NWFATRN_pt_macspec, OWFATRN_pt_macspec );
(( OWFATRN_pt_macspec * ) ( MWFATRN_pt_macspec.nonlocals )) -> Writer = Writer;
(( OWFATRN_pt_macspec * ) ( MWFATRN_pt_macspec.nonlocals )) -> Msg = Msg;
 /* line 2679: */
A_CLOSURE( ZWFATRN_pt_usage, AXFATRN_pt_usage, BXFATRN_pt_usage );
(( BXFATRN_pt_usage * ) ( ZWFATRN_pt_usage.nonlocals )) -> Writer = Writer;
(( BXFATRN_pt_usage * ) ( ZWFATRN_pt_usage.nonlocals )) -> Msg = Msg;
 /* line 2692: */
A_CLOSURE( DXFATRN_pt_attrdec, EXFATRN_pt_attrdec, FXFATRN_pt_attrdec );
(( FXFATRN_pt_attrdec * ) ( DXFATRN_pt_attrdec.nonlocals )) -> Writer = Writer;
(( FXFATRN_pt_attrdec * ) ( DXFATRN_pt_attrdec.nonlocals )) -> Msg = Msg;
(( FXFATRN_pt_attrdec * ) ( DXFATRN_pt_attrdec.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( FXFATRN_pt_attrdec * ) ( DXFATRN_pt_attrdec.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
(( FXFATRN_pt_attrdec * ) ( DXFATRN_pt_attrdec.nonlocals )) -> ZWFATRN_pt_usage = ZWFATRN_pt_usage;
 /* line 2703: */
A_CLOSURE( HXFATRN_pt_intdec, IXFATRN_pt_intdec, JXFATRN_pt_intdec );
(( JXFATRN_pt_intdec * ) ( HXFATRN_pt_intdec.nonlocals )) -> Writer = Writer;
(( JXFATRN_pt_intdec * ) ( HXFATRN_pt_intdec.nonlocals )) -> Msg = Msg;
(( JXFATRN_pt_intdec * ) ( HXFATRN_pt_intdec.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( JXFATRN_pt_intdec * ) ( HXFATRN_pt_intdec.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
(( JXFATRN_pt_intdec * ) ( HXFATRN_pt_intdec.nonlocals )) -> XNFATRN_pt_formularange = XNFATRN_pt_formularange;
(( JXFATRN_pt_intdec * ) ( HXFATRN_pt_intdec.nonlocals )) -> ZWFATRN_pt_usage = ZWFATRN_pt_usage;
 /* line 2715: */
A_CLOSURE( LXFATRN_pt_typebody, MXFATRN_pt_typebody, NXFATRN_pt_typebody );
(( NXFATRN_pt_typebody * ) ( LXFATRN_pt_typebody.nonlocals )) -> Writer = Writer;
(( NXFATRN_pt_typebody * ) ( LXFATRN_pt_typebody.nonlocals )) -> Msg = Msg;
(( NXFATRN_pt_typebody * ) ( LXFATRN_pt_typebody.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( NXFATRN_pt_typebody * ) ( LXFATRN_pt_typebody.nonlocals )) -> HOFATRN_pt_type = HOFATRN_pt_type;
(( NXFATRN_pt_typebody * ) ( LXFATRN_pt_typebody.nonlocals )) -> ONFATRN_pt_range = ONFATRN_pt_range;
 /* line 2747: */
A_CLOSURE( AYFATRN_pt_typedec, BYFATRN_pt_typedec, CYFATRN_pt_typedec );
(( CYFATRN_pt_typedec * ) ( AYFATRN_pt_typedec.nonlocals )) -> Writer = Writer;
(( CYFATRN_pt_typedec * ) ( AYFATRN_pt_typedec.nonlocals )) -> Msg = Msg;
(( CYFATRN_pt_typedec * ) ( AYFATRN_pt_typedec.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( CYFATRN_pt_typedec * ) ( AYFATRN_pt_typedec.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
(( CYFATRN_pt_typedec * ) ( AYFATRN_pt_typedec.nonlocals )) -> LXFATRN_pt_typebody = LXFATRN_pt_typebody;
(( CYFATRN_pt_typedec * ) ( AYFATRN_pt_typedec.nonlocals )) -> ZWFATRN_pt_usage = ZWFATRN_pt_usage;
 /* line 2759: */
A_CLOSURE( EYFATRN_pt_constdec, FYFATRN_pt_constdec, GYFATRN_pt_constdec );
(( GYFATRN_pt_constdec * ) ( EYFATRN_pt_constdec.nonlocals )) -> Writer = Writer;
(( GYFATRN_pt_constdec * ) ( EYFATRN_pt_constdec.nonlocals )) -> Msg = Msg;
(( GYFATRN_pt_constdec * ) ( EYFATRN_pt_constdec.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( GYFATRN_pt_constdec * ) ( EYFATRN_pt_constdec.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
(( GYFATRN_pt_constdec * ) ( EYFATRN_pt_constdec.nonlocals )) -> USFATRN_pt_unit = USFATRN_pt_unit;
(( GYFATRN_pt_constdec * ) ( EYFATRN_pt_constdec.nonlocals )) -> ZWFATRN_pt_usage = ZWFATRN_pt_usage;
 /* line 2771: */
A_CLOSURE( IYFATRN_pt_fndec, JYFATRN_pt_fndec, KYFATRN_pt_fndec );
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> Writer = Writer;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> Msg = Msg;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> WLFATRN_outid = WLFATRN_outid;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> MWFATRN_pt_macspec = MWFATRN_pt_macspec;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> LMFATRN_pt_attr = LMFATRN_pt_attr;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> JPFATRN_pt_names = JPFATRN_pt_names;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> HOFATRN_pt_type = HOFATRN_pt_type;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> RVFATRN_pt_fnbody = RVFATRN_pt_fnbody;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> USFATRN_pt_unit = USFATRN_pt_unit;
(( KYFATRN_pt_fndec * ) ( IYFATRN_pt_fndec.nonlocals )) -> ZWFATRN_pt_usage = ZWFATRN_pt_usage;
 /* line 2802: */
A_CLOSURE( TYFATRN_pt_environ, UYFATRN_pt_environ, VYFATRN_pt_environ );
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> Writer = Writer;
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> Msg = Msg;
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> DXFATRN_pt_attrdec = DXFATRN_pt_attrdec;
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> HXFATRN_pt_intdec = HXFATRN_pt_intdec;
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> AYFATRN_pt_typedec = AYFATRN_pt_typedec;
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> EYFATRN_pt_constdec = EYFATRN_pt_constdec;
(( VYFATRN_pt_environ * ) ( TYFATRN_pt_environ.nonlocals )) -> IYFATRN_pt_fndec = IYFATRN_pt_fndec;
 /* line 2826: */
A_CLOSURE( MZFATRN_pt_closure, NZFATRN_pt_closure, OZFATRN_pt_closure );
(( OZFATRN_pt_closure * ) ( MZFATRN_pt_closure.nonlocals )) -> XLFATRN_pt_idstable = XLFATRN_pt_idstable;
(( OZFATRN_pt_closure * ) ( MZFATRN_pt_closure.nonlocals )) -> Writer = Writer;
(( OZFATRN_pt_closure * ) ( MZFATRN_pt_closure.nonlocals )) -> Msg = Msg;
(( OZFATRN_pt_closure * ) ( MZFATRN_pt_closure.nonlocals )) -> TYFATRN_pt_environ = TYFATRN_pt_environ;
 /* line 2848: */
 /* line 2849: */
if ( (BQCATRN_tokens_version_no!=WKAATRN_assembler_version_no) )
{ 
 /* line 2850: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(TZFATRN,SZFATRN,A68_VC )),(SHAAOSI_system, A_HVEC(TZFATRN,SZFATRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 2851: */
AKFATRN_outassemint(Dc.Head_data.upb, Writer, Msg);
 /* line 2852: */
VZFATRN = Dc.Head_data ;
WZFATRN = VZFATRN.upb -1;
UZFATRN_hd = VZFATRN.data;
for (;WZFATRN-- >= 0;
(UZFATRN_hd++
) )
{
A_CALLPROC(WLFATRN_outid,((*UZFATRN_hd), Writer, Msg),((*UZFATRN_hd), Writer, Msg,(WLFATRN_outid).nonlocals));
}
 /* line 2854: */
A_CALLPROC(MZFATRN_pt_closure,(Dc.Closure),(Dc.Closure,(MZFATRN_pt_closure).nonlocals));
 /* line 2855: */
 /* line 2856: */
/*SKIP*/;
} 
A_PROC_EXIT(write_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  BAGATRN_generator(A68_BOOL  AAGATRN_anonymous, A68_337  *ReturnedValue)
{ 
A68_337  CAGATRN;  /* clause result */
A68_337  DAGATRN;  /* OPERATORS - dynamic generator */
{ 
DAGATRN.upb = 0 ;
( AAGATRN_anonymous? A_VLOC(A68_102 ,DAGATRN): A_VHEAP(A68_102 ,DAGATRN) );
CAGATRN = DAGATRN;
} 
*ReturnedValue = (CAGATRN);
return;
} 
#undef NL

A68_VOID  IAGATRN_read_signature(A68_335  Getchar, A68_97  Msg, A68_334  *ReturnedValue)
{ 
A68_CHAR  JAGATRN_fc;
A68_CHAR  KAGATRN_c;
A68_CHAR * LAGATRN;  /* forall control - []x */
A68_INT  MAGATRN;  /* forall loop counter */
A68_46  NAGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_334  OAGATRN;  /* collateral clause result */
A68_336  PAGATRN;  /* procedure value */
A68_336  QAGATRN;  /* procedure value */
A68_46  RAGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_336  SAGATRN;  /* procedure value */
A68_337 * TAGATRN;  /* YIELD */
A68_334  UAGATRN_reader;
A68_VC  VAGATRN;  /* avoid structure result */
A68_VC  WAGATRN_language;
A68_46  ZAGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_334  ABGATRN;  /* clause result */
A_PROC_ENTRY(read_signature);
 /* line 2871: */
 /* line 2872: */
{ 
JAGATRN_fc = A_CALLPROC(Getchar,(),((Getchar).nonlocals));
 /* line 2874: */
 /* line 2875: */
MAGATRN = AQCATRN_file_signature.upb -1;
LAGATRN = AQCATRN_file_signature.data;
for (;MAGATRN-- >= 0;
(LAGATRN++
) )
{
KAGATRN_c = *LAGATRN;
 /* line 2876: */
if ( (A_CALLPROC(Getchar,(),((Getchar).nonlocals))!=KAGATRN_c) )
{ 
 /* line 2877: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(NAGATRN,ZZFATRN_bad_dump_sig,A68_VC )),(WHAAOSI_user, A_HVEC(NAGATRN,ZZFATRN_bad_dump_sig,A68_VC ),(Msg).nonlocals));
} 
}
 /* line 2879: */
 /* line 2880: */
 /* line 2881: */
OAGATRN.Getchar = Getchar;
 /* line 2883: */
if ( (JAGATRN_fc=='P') )
{ 
PAGATRN.fn.fn_global = DRCATRN_packed_initem;
PAGATRN.nonlocals = A68_NIL;
OAGATRN.Initem = PAGATRN;
} 
else
{ 
 /* line 2884: */
if ( (JAGATRN_fc=='R') )
{ 
XUCATRN_next = UQCATRN_lf;
 /* line 2885: */
 /* line 2886: */
QAGATRN.fn.fn_global = AVCATRN_unpacked_initem;
QAGATRN.nonlocals = A68_NIL;
OAGATRN.Initem = QAGATRN;
} 
else
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(RAGATRN,ZZFATRN_bad_dump_sig,A68_VC )),(WHAAOSI_user, A_HVEC(RAGATRN,ZZFATRN_bad_dump_sig,A68_VC ),(Msg).nonlocals));
 /* line 2887: */
 /* line 2888: */
 /* line 2889: */
SAGATRN.fn.fn_global = YQCATRN_dummy_initem;
SAGATRN.nonlocals = A68_NIL;
OAGATRN.Initem = SAGATRN;
} 
} 
TAGATRN = A_HEAP(A68_337 ) ;
(*TAGATRN) = EAGATRN_null_ids_lookup ;
OAGATRN.Ids_lookup = TAGATRN;
UAGATRN_reader = OAGATRN;
 /* line 2891: */
GMDATRN_inassemstr( UAGATRN_reader, Msg, &VAGATRN );
WAGATRN_language = VAGATRN;
 /* line 2893: */
 /* line 2894: */
if ( A_VC_NE(WAGATRN_language,AHDATRN_signature) )
{ 
 /* line 2895: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ZAGATRN,YAGATRN,A68_VC )),(WHAAOSI_user, A_HVEC(ZAGATRN,YAGATRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 2896: */
 /* line 2897: */
ABGATRN = UAGATRN_reader;
} 
A_PROC_EXIT(read_signature);
*ReturnedValue = (ABGATRN);
return;
} 
#undef NL
 /* line 2900: */
 /* line 2901: */
 /* line 2902: */

A68_VOID  FBGATRN_write_signature(A68_36  Putstring, A68_BOOL  Mode, A68_BOOL  Write_idstable, A68_97  Msg, A68_338  *ReturnedValue)
{ 
A68_INT  GBGATRN_sigtop;
A68_31  IBGATRN_generator;   /* proc value of non-global proc */
A68_VC  OBGATRN;  /* avoid structure result */
A68_VC  NBGATRN_cc;
A68_31  QBGATRN_generator;   /* proc value of non-global proc */
A68_VC  WBGATRN;  /* avoid structure result */
A68_VC  VBGATRN_language;
A68_CHAR  XBGATRN;  /* clause result */
A68_INT  YBGATRN;  /* YIELD */
A68_CHAR * ZBGATRN;  /* YIELD */
A68_VC  ACGATRN;  /* OPERATORS - trim index */
A68_VC  BCGATRN;  /* YIELD */
A68_338  CCGATRN;  /* collateral clause result */
A68_339  DCGATRN;  /* procedure value */
A68_339  ECGATRN;  /* procedure value */
A68_BOOL  FCGATRN;  /* optbool result */
A68_338  GCGATRN_writer;
A68_338  HCGATRN;  /* clause result */
A_PROC_ENTRY(write_signature);
 /* line 2903: */
 /* line 2904: */
{ 
GBGATRN_sigtop = AQCATRN_file_signature.upb;
 /* line 2905: */
A_CLOSURE( IBGATRN_generator, JBGATRN_generator, KBGATRN_generator );
(( KBGATRN_generator * ) ( IBGATRN_generator.nonlocals )) -> GBGATRN_sigtop = GBGATRN_sigtop;
A_CALLPROC(IBGATRN_generator,(A68_TRUE, &OBGATRN),(A68_TRUE, &OBGATRN,(IBGATRN_generator).nonlocals));
NBGATRN_cc = OBGATRN;
 /* line 2906: */
A_CLOSURE( QBGATRN_generator, RBGATRN_generator, SBGATRN_generator );
A_CALLPROC(QBGATRN_generator,(A68_TRUE, &WBGATRN),(A68_TRUE, &WBGATRN,(QBGATRN_generator).nonlocals));
VBGATRN_language = WBGATRN;
A_VASSIGN2(AHDATRN_signature,VBGATRN_language,A68_CHAR );
 /* line 2908: */
if ( Mode )
{ 
XBGATRN = 'P';
} 
else
{ 
XBGATRN = 'R';
} 
YBGATRN = 1 ;
ZBGATRN = (&A_VINDEX(NBGATRN_cc,YBGATRN)) ;
(*ZBGATRN) = XBGATRN;
 /* line 2909: */
BCGATRN = A_VTRIM(ACGATRN,(NBGATRN_cc),A_VTSCRIPT(&(ACGATRN.upb),(NBGATRN_cc).upb,2,(NBGATRN_cc).upb)) ;
A_VASSIGN2(AQCATRN_file_signature,BCGATRN,A68_CHAR );
 /* line 2910: */
A_CALLPROC(Putstring,(NBGATRN_cc),(NBGATRN_cc,(Putstring).nonlocals));
 /* line 2912: */
 /* line 2913: */
 /* line 2914: */
CCGATRN.Putstring = Putstring;
if ( Mode )
{ 
DCGATRN.fn.fn_global = MXCATRN_packed_outitem;
DCGATRN.nonlocals = A68_NIL;
CCGATRN.Outitem = DCGATRN;
} 
else
{ 
 /* line 2915: */
ECGATRN.fn.fn_global = BADATRN_unpacked_outitem;
ECGATRN.nonlocals = A68_NIL;
CCGATRN.Outitem = ECGATRN;
} 
FCGATRN = Write_idstable;
if ( FCGATRN )
{FCGATRN = (BLAATRN_idstable.upb>0);
}
CCGATRN.Write_idstable = FCGATRN;
GCGATRN_writer = CCGATRN;
 /* line 2917: */
GKFATRN_outassemstr(VBGATRN_language, GCGATRN_writer, Msg);
 /* line 2918: */
 /* line 2919: */
HCGATRN = GCGATRN_writer;
} 
A_PROC_EXIT(write_signature);
*ReturnedValue = (HCGATRN);
return;
} 
#undef NL

A68_VOID  KCGATRN_finish_write_closure(A68_338  Writer, A68_97  Msg)
{ 
A68_36  LCGATRN;  /* CALL */
A68_VC  MCGATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(finish_write_closure);
 /* line 2922: */
 /* line 2923: */
 /* line 2924: */
LCGATRN = Writer.Putstring ;
A_CALLPROC(LCGATRN,(A_HVEC(MCGATRN,'.',A68_CHAR )),(A_HVEC(MCGATRN,'.',A68_CHAR ),(LCGATRN).nonlocals));
A_PROC_EXIT(finish_write_closure);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void TPCATRN(void)   /* initialise DECS openinterface */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/openinterface.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_355  BHDATRN;  /* collateral clause result */
A68_32  CHDATRN;  /* OPERATORS - istruct -> vector */
A68_355  EHDATRN;  /* collateral clause result */
A68_32  FHDATRN;  /* OPERATORS - istruct -> vector */
A68_337  FAGATRN;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/openinterface.a68";
A_config.translation_time = "Tue Apr  4 09:58:44 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SPCATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:58:44 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS openinterface);
UEAALIB_a68config(LGAALIB_configinfo, XPCATRN);
 /* line 244: */
 /* line 257: */
 /* line 266: */
AQCATRN_file_signature = ZPCATRN;
 /* line 268: */
 /* line 269: */
 /* line 270: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 275: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 279: */
 /* line 280: */
 /* line 281: */
 /* line 282: */
 /* line 283: */
 /* line 284: */
QQCATRN_lowint = (-10);
 /* line 285: */
RQCATRN_short_string_top = ((LQCATRN_ident_tok-KQCATRN_ident_range_start)-1);
 /* line 286: */
SQCATRN_zeroint = (MQCATRN_start_int_value-QQCATRN_lowint);
 /* line 287: */
TQCATRN_highint = ((NQCATRN_pos1byte_int-SQCATRN_zeroint)-1);
 /* line 289: */
UQCATRN_lf = (A68_CHAR)10;
 /* line 290: */
VQCATRN_zero = (A68_INT)(unsigned char)'0';
 /* line 298: */
 /* line 300: */
 /* line 371: */
XUCATRN_next = UQCATRN_lf;
 /* line 373: */
 /* line 429: */
 /* line 505: */
 /* line 557: */
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 563: */
 /* line 564: */
 /* line 565: */
 /* line 566: */
 /* line 567: */
 /* line 568: */
 /* line 569: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 573: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 587: */
 /* line 588: */
 /* line 589: */
 /* line 590: */
 /* line 591: */
 /* line 592: */
 /* line 593: */
 /* line 594: */
 /* line 595: */
 /* line 596: */
 /* line 597: */
 /* line 598: */
 /* line 599: */
 /* line 600: */
 /* line 601: */
 /* line 602: */
 /* line 603: */
 /* line 604: */
 /* line 605: */
 /* line 606: */
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
 /* line 611: */
 /* line 612: */
 /* line 613: */
 /* line 614: */
 /* line 615: */
 /* line 616: */
 /* line 617: */
 /* line 618: */
 /* line 619: */
 /* line 620: */
 /* line 623: */
 /* line 624: */
 /* line 625: */
 /* line 626: */
 /* line 627: */
 /* line 628: */
 /* line 629: */
 /* line 630: */
 /* line 631: */
 /* line 632: */
 /* line 633: */
 /* line 634: */
 /* line 635: */
 /* line 636: */
 /* line 637: */
 /* line 638: */
 /* line 639: */
 /* line 642: */
 /* line 643: */
 /* line 644: */
 /* line 645: */
 /* line 646: */
 /* line 647: */
 /* line 648: */
 /* line 649: */
 /* line 650: */
 /* line 651: */
 /* line 652: */
 /* line 653: */
 /* line 656: */
 /* line 657: */
 /* line 658: */
 /* line 661: */
 /* line 662: */
 /* line 663: */
 /* line 664: */
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
 /* line 671: */
 /* line 674: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
 /* line 678: */
 /* line 681: */
 /* line 682: */
 /* line 683: */
 /* line 684: */
 /* line 685: */
 /* line 686: */
 /* line 687: */
 /* line 688: */
 /* line 689: */
 /* line 690: */
 /* line 691: */
 /* line 694: */
 /* line 695: */
 /* line 696: */
 /* line 697: */
 /* line 698: */
 /* line 701: */
 /* line 702: */
 /* line 703: */
 /* line 704: */
 /* line 705: */
 /* line 709: */
 /* line 712: */
 /* line 713: */
 /* line 714: */
 /* line 715: */
 /* line 716: */
 /* line 717: */
 /* line 718: */
 /* line 719: */
 /* line 720: */
 /* line 721: */
 /* line 722: */
 /* line 723: */
 /* line 731: */
AHDATRN_signature = ZGDATRN;
 /* line 733: */
 /* line 734: */
BHDATRN.data[0] = 1;
BHDATRN.data[1] = 2;
BHDATRN.data[2] = 3;
BHDATRN.data[3] = 3;
BHDATRN.data[4] = 0;
BHDATRN.data[5] = 0;
BHDATRN.data[6] = 0;
BHDATRN.data[7] = 0;
BHDATRN.data[8] = 0;
BHDATRN.data[9] = 0;
BHDATRN.data[10] = 33;
BHDATRN.data[11] = 28;
BHDATRN.data[12] = 29;
BHDATRN.data[13] = 30;
 /* line 735: */
BHDATRN.data[14] = 34;
BHDATRN.data[15] = 35;
BHDATRN.data[16] = 36;
BHDATRN.data[17] = 37;
BHDATRN.data[18] = 38;
BHDATRN.data[19] = 39;
BHDATRN.data[20] = 41;
BHDATRN.data[21] = 0;
BHDATRN.data[22] = 44;
BHDATRN.data[23] = 45;
BHDATRN.data[24] = 46;
BHDATRN.data[25] = 47;
BHDATRN.data[26] = 49;
BHDATRN.data[27] = 48;
BHDATRN.data[28] = 50;
 /* line 736: */
BHDATRN.data[29] = 51;
BHDATRN.data[30] = 52;
BHDATRN.data[31] = 0;
BHDATRN.data[32] = 60;
BHDATRN.data[33] = 61;
BHDATRN.data[34] = 62;
BHDATRN.data[35] = 64;
BHDATRN.data[36] = 63;
BHDATRN.data[37] = 65;
BHDATRN.data[38] = 66;
BHDATRN.data[39] = 67;
BHDATRN.data[40] = 68;
BHDATRN.data[41] = 69;
BHDATRN.data[42] = 70;
BHDATRN.data[43] = 71;
 /* line 737: */
BHDATRN.data[44] = 72;
BHDATRN.data[45] = 73;
BHDATRN.data[46] = 74;
BHDATRN.data[47] = 75;
BHDATRN.data[48] = 76;
BHDATRN.data[49] = 77;
BHDATRN.data[50] = 78;
BHDATRN.data[51] = 79;
BHDATRN.data[52] = 80;
BHDATRN.data[53] = 81;
BHDATRN.data[54] = 82;
BHDATRN.data[55] = 83;
BHDATRN.data[56] = 85;
BHDATRN.data[57] = 86;
BHDATRN.data[58] = 87;
 /* line 738: */
BHDATRN.data[59] = 88;
BHDATRN.data[60] = 89;
BHDATRN.data[61] = 90;
BHDATRN.data[62] = 91;
BHDATRN.data[63] = 93;
BHDATRN.data[64] = 92;
BHDATRN.data[65] = 94;
BHDATRN.data[66] = 0;
BHDATRN.data[67] = 0;
BHDATRN.data[68] = 0;
BHDATRN.data[69] = 103;
BHDATRN.data[70] = 115;
BHDATRN.data[71] = 116;
BHDATRN.data[72] = 117;
BHDATRN.data[73] = 118;
 /* line 739: */
BHDATRN.data[74] = 101;
BHDATRN.data[75] = 102;
BHDATRN.data[76] = 114;
BHDATRN.data[77] = 104;
BHDATRN.data[78] = 105;
BHDATRN.data[79] = 106;
BHDATRN.data[80] = 107;
BHDATRN.data[81] = 109;
BHDATRN.data[82] = 110;
BHDATRN.data[83] = 111;
BHDATRN.data[84] = 112;
BHDATRN.data[85] = 113;
BHDATRN.data[86] = 0;
BHDATRN.data[87] = 0;
BHDATRN.data[88] = 0;
 /* line 740: */
BHDATRN.data[89] = 0;
BHDATRN.data[90] = 119;
BHDATRN.data[91] = 120;
BHDATRN.data[92] = 121;
BHDATRN.data[93] = 123;
BHDATRN.data[94] = 124;
BHDATRN.data[95] = 125;
BHDATRN.data[96] = 126;
BHDATRN.data[97] = 127;
BHDATRN.data[98] = 128;
BHDATRN.data[99] = 129;
BHDATRN.data[100] = 130;
BHDATRN.data[101] = 95;
BHDATRN.data[102] = 27;
BHDATRN.data[103] = 40;
 /* line 741: */
BHDATRN.data[104] = 99;
BHDATRN.data[105] = 53;
BHDATRN.data[106] = 56;
BHDATRN.data[107] = 57;
BHDATRN.data[108] = 54;
BHDATRN.data[109] = 0;
BHDATRN.data[110] = 0;
BHDATRN.data[111] = 0;
BHDATRN.data[112] = 0;
BHDATRN.data[113] = 134;
BHDATRN.data[114] = 135;
BHDATRN.data[115] = 136;
BHDATRN.data[116] = 137;
BHDATRN.data[117] = 138;
BHDATRN.data[118] = 0;
 /* line 742: */
BHDATRN.data[119] = 22;
BHDATRN.data[120] = 23;
BHDATRN.data[121] = 24;
BHDATRN.data[122] = 25;
BHDATRN.data[123] = 26;
BHDATRN.data[124] = 133;
BHDATRN.data[125] = 122;
BHDATRN.data[126] = 55;
BHDATRN.data[127] = 98;
BHDATRN.data[128] = 131;
BHDATRN.data[129] = 132;
BHDATRN.data[130] = 84;
BHDATRN.data[131] = 108;
BHDATRN.data[132] = 139;
BHDATRN.data[133] = 140;
 /* line 743: */
BHDATRN.data[134] = 141;
BHDATRN.data[135] = 0;
BHDATRN.data[136] = 0;
BHDATRN.data[137] = 0;
BHDATRN.data[138] = 0;
BHDATRN.data[139] = 0;
BHDATRN.data[140] = 20;
BHDATRN.data[141] = 31;
BHDATRN.data[142] = 42;
BHDATRN.data[143] = 58;
BHDATRN.data[144] = 96;
BHDATRN.data[145] = 0;
BHDATRN.data[146] = 0;
BHDATRN.data[147] = 0;
BHDATRN.data[148] = 0;
 /* line 744: */
BHDATRN.data[149] = 0;
BHDATRN.data[150] = 21;
BHDATRN.data[151] = 32;
BHDATRN.data[152] = 43;
BHDATRN.data[153] = 59;
BHDATRN.data[154] = 97;
BHDATRN.data[155] = 0;
BHDATRN.data[156] = 0;
BHDATRN.data[157] = 0;
BHDATRN.data[158] = 0;
BHDATRN.data[159] = 100;
BHDATRN.data[160] = 0;
BHDATRN.data[161] = 0;
BHDATRN.data[162] = 0;
BHDATRN.data[163] = 0;
 /* line 745: */
BHDATRN.data[164] = 0;
BHDATRN.data[165] = 0;
BHDATRN.data[166] = 0;
BHDATRN.data[167] = 0;
BHDATRN.data[168] = 0;
BHDATRN.data[169] = 0;
BHDATRN.data[170] = 0;
BHDATRN.data[171] = 0;
BHDATRN.data[172] = 0;
BHDATRN.data[173] = 0;
BHDATRN.data[174] = 0;
BHDATRN.data[175] = 0;
BHDATRN.data[176] = 0;
BHDATRN.data[177] = 0;
BHDATRN.data[178] = 0;
 /* line 746: */
BHDATRN.data[179] = 0;
BHDATRN.data[180] = 0;
BHDATRN.data[181] = 0;
BHDATRN.data[182] = 0;
BHDATRN.data[183] = 0;
BHDATRN.data[184] = 0;
BHDATRN.data[185] = 0;
BHDATRN.data[186] = 0;
BHDATRN.data[187] = 0;
BHDATRN.data[188] = 0;
BHDATRN.data[189] = 0;
BHDATRN.data[190] = 0;
BHDATRN.data[191] = 0;
BHDATRN.data[192] = 0;
BHDATRN.data[193] = 0;
 /* line 747: */
BHDATRN.data[194] = 0;
BHDATRN.data[195] = 0;
BHDATRN.data[196] = 0;
BHDATRN.data[197] = 0;
BHDATRN.data[198] = 0;
BHDATRN.data[199] = 0;
BHDATRN.data[200] = 200;
BHDATRN.data[201] = 201;
BHDATRN.data[202] = 202;
BHDATRN.data[203] = 203;
BHDATRN.data[204] = 204;
BHDATRN.data[205] = 205;
BHDATRN.data[206] = 206;
BHDATRN.data[207] = 211;
BHDATRN.data[208] = 208;
 /* line 748: */
BHDATRN.data[209] = 209;
BHDATRN.data[210] = 210;
BHDATRN.data[211] = 207;
DHDATRN_a68_c = A_HISVEC(CHDATRN,BHDATRN,212,A68_INT );
 /* line 750: */
 /* line 751: */
EHDATRN.data[0] = 1;
EHDATRN.data[1] = 2;
EHDATRN.data[2] = 3;
EHDATRN.data[3] = 0;
EHDATRN.data[4] = 0;
EHDATRN.data[5] = 0;
EHDATRN.data[6] = 0;
EHDATRN.data[7] = 0;
EHDATRN.data[8] = 0;
EHDATRN.data[9] = 0;
EHDATRN.data[10] = 0;
EHDATRN.data[11] = 0;
EHDATRN.data[12] = 0;
EHDATRN.data[13] = 0;
 /* line 752: */
EHDATRN.data[14] = 0;
EHDATRN.data[15] = 0;
EHDATRN.data[16] = 0;
EHDATRN.data[17] = 0;
EHDATRN.data[18] = 0;
EHDATRN.data[19] = 141;
EHDATRN.data[20] = 151;
EHDATRN.data[21] = 120;
EHDATRN.data[22] = 121;
EHDATRN.data[23] = 122;
EHDATRN.data[24] = 123;
EHDATRN.data[25] = 124;
EHDATRN.data[26] = 103;
EHDATRN.data[27] = 12;
EHDATRN.data[28] = 13;
 /* line 753: */
EHDATRN.data[29] = 14;
EHDATRN.data[30] = 142;
EHDATRN.data[31] = 152;
EHDATRN.data[32] = 11;
EHDATRN.data[33] = 15;
EHDATRN.data[34] = 16;
EHDATRN.data[35] = 17;
EHDATRN.data[36] = 18;
EHDATRN.data[37] = 19;
EHDATRN.data[38] = 20;
EHDATRN.data[39] = 104;
EHDATRN.data[40] = 21;
EHDATRN.data[41] = 143;
EHDATRN.data[42] = 153;
EHDATRN.data[43] = 23;
 /* line 754: */
EHDATRN.data[44] = 24;
EHDATRN.data[45] = 25;
EHDATRN.data[46] = 26;
EHDATRN.data[47] = 28;
EHDATRN.data[48] = 27;
EHDATRN.data[49] = 29;
EHDATRN.data[50] = 30;
EHDATRN.data[51] = 31;
EHDATRN.data[52] = 106;
EHDATRN.data[53] = 109;
EHDATRN.data[54] = 127;
EHDATRN.data[55] = 107;
EHDATRN.data[56] = 108;
EHDATRN.data[57] = 144;
EHDATRN.data[58] = 154;
 /* line 755: */
EHDATRN.data[59] = 33;
EHDATRN.data[60] = 34;
EHDATRN.data[61] = 35;
EHDATRN.data[62] = 37;
EHDATRN.data[63] = 36;
EHDATRN.data[64] = 38;
EHDATRN.data[65] = 39;
EHDATRN.data[66] = 40;
EHDATRN.data[67] = 41;
EHDATRN.data[68] = 42;
EHDATRN.data[69] = 43;
EHDATRN.data[70] = 44;
EHDATRN.data[71] = 45;
EHDATRN.data[72] = 46;
EHDATRN.data[73] = 47;
 /* line 756: */
EHDATRN.data[74] = 48;
EHDATRN.data[75] = 49;
EHDATRN.data[76] = 50;
EHDATRN.data[77] = 51;
EHDATRN.data[78] = 52;
EHDATRN.data[79] = 53;
EHDATRN.data[80] = 54;
EHDATRN.data[81] = 55;
EHDATRN.data[82] = 56;
EHDATRN.data[83] = 131;
EHDATRN.data[84] = 57;
EHDATRN.data[85] = 58;
EHDATRN.data[86] = 59;
EHDATRN.data[87] = 60;
EHDATRN.data[88] = 61;
 /* line 757: */
EHDATRN.data[89] = 62;
EHDATRN.data[90] = 63;
EHDATRN.data[91] = 65;
EHDATRN.data[92] = 64;
EHDATRN.data[93] = 66;
EHDATRN.data[94] = 102;
EHDATRN.data[95] = 145;
EHDATRN.data[96] = 155;
EHDATRN.data[97] = 128;
EHDATRN.data[98] = 105;
EHDATRN.data[99] = 160;
EHDATRN.data[100] = 75;
EHDATRN.data[101] = 76;
EHDATRN.data[102] = 70;
EHDATRN.data[103] = 78;
 /* line 758: */
EHDATRN.data[104] = 79;
EHDATRN.data[105] = 80;
EHDATRN.data[106] = 81;
EHDATRN.data[107] = 132;
EHDATRN.data[108] = 82;
EHDATRN.data[109] = 83;
EHDATRN.data[110] = 84;
EHDATRN.data[111] = 85;
EHDATRN.data[112] = 86;
EHDATRN.data[113] = 77;
EHDATRN.data[114] = 71;
EHDATRN.data[115] = 72;
EHDATRN.data[116] = 73;
EHDATRN.data[117] = 74;
EHDATRN.data[118] = 91;
 /* line 759: */
EHDATRN.data[119] = 92;
EHDATRN.data[120] = 93;
EHDATRN.data[121] = 126;
EHDATRN.data[122] = 94;
EHDATRN.data[123] = 95;
EHDATRN.data[124] = 96;
EHDATRN.data[125] = 97;
EHDATRN.data[126] = 98;
EHDATRN.data[127] = 99;
EHDATRN.data[128] = 100;
EHDATRN.data[129] = 101;
EHDATRN.data[130] = 129;
EHDATRN.data[131] = 130;
EHDATRN.data[132] = 125;
EHDATRN.data[133] = 114;
 /* line 760: */
EHDATRN.data[134] = 115;
EHDATRN.data[135] = 116;
EHDATRN.data[136] = 117;
EHDATRN.data[137] = 118;
EHDATRN.data[138] = 133;
EHDATRN.data[139] = 134;
EHDATRN.data[140] = 135;
EHDATRN.data[141] = 0;
EHDATRN.data[142] = 0;
EHDATRN.data[143] = 0;
EHDATRN.data[144] = 0;
EHDATRN.data[145] = 0;
EHDATRN.data[146] = 0;
EHDATRN.data[147] = 0;
EHDATRN.data[148] = 0;
 /* line 761: */
EHDATRN.data[149] = 0;
EHDATRN.data[150] = 0;
EHDATRN.data[151] = 0;
EHDATRN.data[152] = 0;
EHDATRN.data[153] = 0;
EHDATRN.data[154] = 0;
EHDATRN.data[155] = 0;
EHDATRN.data[156] = 0;
EHDATRN.data[157] = 0;
EHDATRN.data[158] = 0;
EHDATRN.data[159] = 0;
EHDATRN.data[160] = 0;
EHDATRN.data[161] = 0;
EHDATRN.data[162] = 0;
EHDATRN.data[163] = 0;
 /* line 762: */
EHDATRN.data[164] = 0;
EHDATRN.data[165] = 0;
EHDATRN.data[166] = 0;
EHDATRN.data[167] = 0;
EHDATRN.data[168] = 0;
EHDATRN.data[169] = 0;
EHDATRN.data[170] = 0;
EHDATRN.data[171] = 0;
EHDATRN.data[172] = 0;
EHDATRN.data[173] = 0;
EHDATRN.data[174] = 0;
EHDATRN.data[175] = 0;
EHDATRN.data[176] = 0;
EHDATRN.data[177] = 0;
EHDATRN.data[178] = 0;
 /* line 763: */
EHDATRN.data[179] = 0;
EHDATRN.data[180] = 0;
EHDATRN.data[181] = 0;
EHDATRN.data[182] = 0;
EHDATRN.data[183] = 0;
EHDATRN.data[184] = 0;
EHDATRN.data[185] = 0;
EHDATRN.data[186] = 0;
EHDATRN.data[187] = 0;
EHDATRN.data[188] = 0;
EHDATRN.data[189] = 0;
EHDATRN.data[190] = 0;
EHDATRN.data[191] = 0;
EHDATRN.data[192] = 0;
EHDATRN.data[193] = 0;
 /* line 764: */
EHDATRN.data[194] = 0;
EHDATRN.data[195] = 0;
EHDATRN.data[196] = 0;
EHDATRN.data[197] = 0;
EHDATRN.data[198] = 0;
EHDATRN.data[199] = 201;
EHDATRN.data[200] = 202;
EHDATRN.data[201] = 203;
EHDATRN.data[202] = 204;
EHDATRN.data[203] = 205;
EHDATRN.data[204] = 206;
EHDATRN.data[205] = 207;
EHDATRN.data[206] = 212;
EHDATRN.data[207] = 209;
EHDATRN.data[208] = 210;
 /* line 765: */
EHDATRN.data[209] = 211;
EHDATRN.data[210] = 208;
EHDATRN.data[211] = 0;
GHDATRN_c_a68 = A_HISVEC(FHDATRN,EHDATRN,212,A68_INT );
 /* line 776: */
JHDATRN_errmsghead = IHDATRN;
 /* line 777: */
 /* line 801: */
 /* line 809: */
 /* line 812: */
 /* line 820: */
 /* line 828: */
 /* line 838: */
 /* line 862: */
 /* line 1779: */
 /* line 1781: */
 /* line 1783: */
 /* line 1786: */
 /* line 1795: */
 /* line 1803: */
 /* line 1821: */
 /* line 2866: */
 /* line 2867: */
ZZFATRN_bad_dump_sig = YZFATRN;
 /* line 2868: */
BAGATRN_generator( A68_TRUE, &FAGATRN );
EAGATRN_null_ids_lookup = FAGATRN;
 /* line 2870: */
 /* line 2899: */
 /* line 2921: */
 /* line 2926: */
 /* line 2927: */
 /* line 2933: */
/*SKIP*/;
A_PROC_EXIT(DECS openinterface);
} 
#undef NL
/* end of translation of ./a68files/openinterface.a68 */
