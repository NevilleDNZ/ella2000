
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
/* UNAME:GNMATRN */
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
A68_BOOL  Logging;
A_PAD_BOOL(PAD_36)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_37)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_38)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_39)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_40)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_41)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_42)
A68_INT  Width;
A_PAD_INT(PAD_43)
A68_INT  Page_count;
A_PAD_INT(PAD_44)
A68_INT  Page_length;
A_PAD_INT(PAD_45)
A68_INT  Eof_count;
A_PAD_INT(PAD_46)
struct A68t174 * Standard_reader;
struct A68t175 * Infile;
struct A68t170  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE174,REF MODE175,MODE170,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t176,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t174{
A68_VC  Rdbuffer;
struct A68t176  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_47)
A68_INT  Rdcharno;
A_PAD_INT(PAD_48)
A68_INT  Start_of_word;
A_PAD_INT(PAD_49)
struct A68t177 * Stack;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE26,MODE176,INT,INT,INT,REF MODE177)  */
struct A68t175{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_50)
A68_INT  Number;
A_PAD_INT(PAD_51)
A68_VC  Name;
struct A68t174 * Reader;
struct A68t175 * Previous;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE174,REF MODE175)  */
struct A68t177{
A68_VC  Line;
struct A68t177 * Rest;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE177)  */

A_PROCEDURE(struct A68t173 *,A68t178,(void),(void *));
typedef struct A68t178  A68_178 ;    /* PROC REF MODE173 */

A_PROCEDURE(A68_VOID ,A68t179,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE170) VOID */
struct A68t183{
A68_VC  Id;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE183)  */
struct A68t184{
A68_INT  Int;
A_PAD_INT(PAD_52)
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE184)  */
struct A68t185 { A68_INT mode; union {
struct A68t186 * mode1;
struct A68t187 * mode2;
struct A68t188 * mode3;
struct A68t189 * mode4;
struct A68t190 * mode5;
} data; };
typedef struct A68t185  A68_185 ;    /* UNION(REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190)  */
struct A68t186{
A68_INT  Attrno;
A_PAD_INT(PAD_53)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_VC  Classname;
struct A68t183 * Strings;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,REF MODE183)  */
struct A68t188{
struct A68t185  Elem;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE185,REF MODE188)  */
struct A68t189{
struct A68t185  Attr;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE185)  */
struct A68t190{
A68_INT  Attrnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT)  */
struct A68t191{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Attrname;
struct A68t185  Value;
struct A68t192 * Usage;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26,MODE185,REF MODE192)  */
struct A68t192{
A68_INT  Contextno;
A_PAD_INT(PAD_56)
A68_INT  Closureno;
A_PAD_INT(PAD_57)
A68_INT  Libv_spec;
A_PAD_INT(PAD_58)
A68_INT  Libv_body;
A_PAD_INT(PAD_59)
A68_BOOL  Import;
A_PAD_BOOL(PAD_60)
A68_BOOL  Export;
A_PAD_BOOL(PAD_61)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t193{
struct A68t185  Tag;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE185)  */
struct A68t194 { A68_INT mode; union {
struct A68t195 * mode1;
struct A68t196 * mode2;
struct A68t197 * mode3;
struct A68t198 * mode4;
struct A68t199 * mode5;
struct A68t200 * mode6;
struct A68t201 * mode7;
struct A68t202 * mode8;
struct A68t203 * mode9;
struct A68t204 * mode10;
} data; };
typedef struct A68t194  A68_194 ;    /* UNION(REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204)  */
struct A68t195{
A68_INT  Int;
A_PAD_INT(PAD_62)
A68_VC  Text;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t196{
A68_INT  Sort;
A_PAD_INT(PAD_63)
struct A68t194  Test;
struct A68t194  Standard;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,MODE194,MODE194)  */
struct A68t197{
A68_INT  Nameno;
A_PAD_INT(PAD_64)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
A68_INT  Intno;
A_PAD_INT(PAD_65)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT)  */
struct A68t199{
struct A68t194  Left;
A68_INT  Sort;
A_PAD_INT(PAD_66)
struct A68t194  Right;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE194,INT,MODE194)  */
struct A68t200{
A68_INT  Sort;
A_PAD_INT(PAD_67)
struct A68t194  Right;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,MODE194)  */
struct A68t201{
struct A68t194  Cond;
struct A68t194  True;
struct A68t194  False;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE194,MODE194,MODE194)  */
struct A68t202{
struct A68t194  Formula;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE194)  */
struct A68t203{
A68_INT  Macparno;
A_PAD_INT(PAD_68)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT)  */
struct A68t204{
A68_INT  Fnull;
A_PAD_INT(PAD_69)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t205{
struct A68t194  Tag;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE194)  */
struct A68t206{
struct A68t194  Formula;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE194,REF MODE206)  */
struct A68t209{
struct A68t194  Lwb;
struct A68t194  Upb;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE194,MODE194)  */
struct A68t208 { A68_INT mode; union {
struct A68t195 * mode1;
struct A68t196 * mode2;
struct A68t197 * mode3;
struct A68t198 * mode4;
struct A68t199 * mode5;
struct A68t200 * mode6;
struct A68t201 * mode7;
struct A68t202 * mode8;
struct A68t203 * mode9;
struct A68t204 * mode10;
struct A68t209  mode11;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204,MODE209)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_VC  Intname;
struct A68t185  Attr;
struct A68t208  Value;
struct A68t192 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE185,MODE208,REF MODE192)  */
struct A68t210 { A68_INT mode; union {
struct A68t211 * mode1;
struct A68t212 * mode2;
struct A68t213 * mode3;
struct A68t214 * mode4;
struct A68t215 * mode5;
struct A68t216 * mode6;
struct A68t217 * mode7;
struct A68t203 * mode8;
struct A68t218 * mode9;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE203,REF MODE218)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_71)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT)  */
struct A68t212{
struct A68t194  Size;
struct A68t210  Elem;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE194,MODE210)  */
struct A68t213{
struct A68t210  Elem;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE210,REF MODE213)  */
struct A68t214{
struct A68t210  From;
struct A68t210  To;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE210,MODE210)  */
struct A68t215{
struct A68t210  Type;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE210)  */
struct A68t216{
struct A68t194  Size;
struct A68t210  Char;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE194,MODE210)  */
struct A68t217{
A68_INT  Tvoid;
A_PAD_INT(PAD_72)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT)  */
struct A68t218{
A68_INT  Tnull;
A_PAD_INT(PAD_73)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t219{
struct A68t210  Tag;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE210)  */
struct A68t220{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t221{
A68_VC  Altname;
struct A68t210  Assoc;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE26,MODE210)  */
struct A68t222{
A68_VC  Tagname;
struct A68t209  Range;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(REF MODE26,MODE209)  */
A_VECTOR(struct A68t221 ,A68t224);
typedef struct A68t224  A68_224 ;    /* VECTOR [] MODE221 */
struct A68t223 { A68_INT mode; union {
struct A68t224  mode1;
struct A68t222 * mode2;
struct A68t219 * mode3;
struct A68t220 * mode4;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE224,REF MODE222,REF MODE219,REF MODE220)  */
struct A68t225{
A68_INT  Sort;
A_PAD_INT(PAD_74)
A68_VC  Typename;
struct A68t185  Attr;
struct A68t223  Body;
struct A68t192 * Usage;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,REF MODE26,MODE185,MODE223,REF MODE192)  */
struct A68t226{
A68_INT  Constno;
A_PAD_INT(PAD_75)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */
struct A68t227{
A68_INT  Typeno;
A_PAD_INT(PAD_76)
A68_INT  Primno;
A_PAD_INT(PAD_77)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT)  */
struct A68t228{
A68_INT  Typeno;
A_PAD_INT(PAD_78)
struct A68t194  Index;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,MODE194)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_79)
struct A68t209  Range;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,MODE209)  */
struct A68t230{
struct A68t210  Querytype;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE210)  */
struct A68t232 { A68_INT mode; union {
struct A68t226 * mode1;
struct A68t227 * mode2;
struct A68t228 * mode3;
struct A68t230 * mode4;
struct A68t233 * mode5;
struct A68t234 * mode6;
struct A68t215 * mode7;
struct A68t229 * mode8;
struct A68t235 * mode9;
struct A68t236 * mode10;
struct A68t237 * mode11;
struct A68t238 * mode12;
struct A68t239 * mode13;
struct A68t240 * mode14;
struct A68t241 * mode15;
struct A68t242 * mode16;
struct A68t243 * mode17;
struct A68t244 * mode18;
struct A68t245 * mode19;
struct A68t246 * mode20;
struct A68t247 * mode21;
struct A68t248 * mode22;
struct A68t249 * mode23;
struct A68t250 * mode24;
struct A68t251 * mode25;
struct A68t252 * mode26;
struct A68t253 * mode27;
struct A68t254 * mode28;
struct A68t255 * mode29;
struct A68t256 * mode30;
struct A68t257 * mode31;
struct A68t258 * mode32;
struct A68t259 * mode33;
struct A68t260 * mode34;
} data; };
typedef struct A68t232  A68_232 ;    /* UNION(REF MODE226,REF MODE227,REF MODE228,REF MODE230,REF MODE233,REF MODE234,REF MODE215,REF MODE229,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t231{
A68_INT  Sort;
A_PAD_INT(PAD_80)
A68_VC  Constname;
struct A68t185  Attr;
struct A68t232  Value;
struct A68t192 * Usage;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,REF MODE26,MODE185,MODE232,REF MODE192)  */
struct A68t233{
A68_INT  Typeno;
A_PAD_INT(PAD_81)
struct A68t32  String;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t234{
A68_INT  Cvoid;
A_PAD_INT(PAD_82)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT)  */
struct A68t235{
A68_INT  Typeno;
A_PAD_INT(PAD_83)
A68_INT  Firstno;
A_PAD_INT(PAD_84)
A68_INT  Lastno;
A_PAD_INT(PAD_85)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT,INT)  */
struct A68t236{
struct A68t232  Alt;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE232,REF MODE236)  */
struct A68t237{
A68_INT  Sort;
A_PAD_INT(PAD_86)
A68_INT  Nameno;
A_PAD_INT(PAD_87)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT,INT)  */
struct A68t238{
struct A68t232  Sink;
struct A68t232  Source;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t239{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
A68_INT  Altno;
A_PAD_INT(PAD_89)
struct A68t232  Assoc;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,INT,MODE232)  */
struct A68t240{
struct A68t232  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_90)
A68_INT  Altno;
A_PAD_INT(PAD_91)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE232,INT,INT)  */
struct A68t241{
struct A68t232  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_92)
A68_INT  Nameno;
A_PAD_INT(PAD_93)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE232,INT,INT)  */
struct A68t242{
struct A68t232  Unit;
struct A68t194  Index;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE232,MODE194)  */
struct A68t243{
struct A68t232  Unit;
struct A68t209  Range;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE232,MODE209)  */
struct A68t244{
struct A68t232  Unit;
struct A68t232  Index;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t245{
struct A68t232  Unit;
struct A68t232  Index;
struct A68t232  From;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE232,MODE232,MODE232)  */
struct A68t246{
struct A68t194  Size;
struct A68t232  Elem;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE194,MODE232)  */
struct A68t247{
struct A68t232  Elem;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE232,REF MODE247)  */
struct A68t248{
A68_BOOL  String;
A_PAD_BOOL(PAD_94)
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t232  Left;
struct A68t232  Right;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(BOOL,INT,MODE232,MODE232)  */
A_VECTOR(struct A68t275 ,A68t274);
typedef struct A68t274  A68_274 ;    /* VECTOR [] MODE275 */
struct A68t277{
struct A68t232  Tag;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE232)  */
struct A68t272{
A68_INT  Fnno;
A_PAD_INT(PAD_96)
struct A68t274  Macparams;
struct A68t185  Attr;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT,REF MODE274,MODE185)  */
struct A68t276 { A68_INT mode; union {
struct A68t193  mode1;
struct A68t205  mode2;
struct A68t219  mode3;
struct A68t277  mode4;
struct A68t272  mode5;
} data; };
typedef struct A68t276  A68_276 ;    /* UNION(MODE193,MODE205,MODE219,MODE277,MODE272)  */
struct A68t275{
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t276  Param;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT,MODE276)  */
struct A68t249{
struct A68t272  Inst;
struct A68t232  Right;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE272,MODE232)  */
struct A68t250{
struct A68t232  Left;
struct A68t272  Inst;
struct A68t232  Right;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE232,MODE272,MODE232)  */
struct A68t251{
struct A68t232  Input;
struct A68t292 * Choices;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE232,REF MODE292)  */
struct A68t252{
struct A68t194  Cond;
struct A68t232  True;
struct A68t232  False;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE194,MODE232,MODE232)  */
struct A68t253{
struct A68t194  Repl;
struct A68t232  Body;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE194,MODE232)  */
struct A68t254{
struct A68t280 * Body;
struct A68t232  Output;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(REF MODE280,MODE232)  */
struct A68t255{
struct A68t261 * Body;
struct A68t232  Output;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE261,MODE232)  */
struct A68t256{
struct A68t232  Unit;
struct A68t185  Attr;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE232,MODE185)  */
struct A68t257{
struct A68t232  Unit;
struct A68t196  Check;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE232,MODE196)  */
struct A68t258{
struct A68t232  Unit;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE232)  */
struct A68t259{
struct A68t194  Size;
struct A68t232  Char;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE194,MODE232)  */
struct A68t260{
A68_INT  Unull;
A_PAD_INT(PAD_98)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT)  */
struct A68t263{
A68_INT  Fnno;
A_PAD_INT(PAD_99)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT)  */
struct A68t262 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t211  mode3;
struct A68t226  mode4;
struct A68t263  mode5;
struct A68t264 * mode6;
struct A68t265 * mode7;
struct A68t266 * mode8;
struct A68t267 * mode9;
struct A68t268 * mode10;
struct A68t269 * mode11;
struct A68t270 * mode12;
} data; };
typedef struct A68t262  A68_262 ;    /* UNION(MODE186,MODE198,MODE211,MODE226,MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270)  */
struct A68t261{
struct A68t262  Step;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE262,REF MODE261)  */
struct A68t264{
struct A68t194  Cond;
struct A68t278 * Print;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE194,REF MODE278)  */
struct A68t265{
struct A68t194  Cond;
struct A68t278 * Fault;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE194,REF MODE278)  */
struct A68t266{
struct A68t273 * Letnames;
struct A68t232  Unit;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE273,MODE232)  */
struct A68t267{
struct A68t206 * Sizes;
struct A68t272  Inst;
struct A68t273 * Makenames;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(REF MODE206,MODE272,REF MODE273)  */
struct A68t268{
struct A68t232  From;
struct A68t232  To;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t269{
struct A68t206 * Repls;
struct A68t271 * Joins;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE206,REF MODE271)  */
struct A68t270{
A68_INT  Stepnull;
A_PAD_INT(PAD_100)
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT)  */
struct A68t271{
struct A68t268  Join;
struct A68t271 * Rest;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE268,REF MODE271)  */
struct A68t273{
A68_INT  Nameno;
A_PAD_INT(PAD_101)
struct A68t273 * Rest;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(INT,REF MODE273)  */
struct A68t279 { A68_INT mode; union {
A68_VC  mode1;
struct A68t205 * mode2;
} data; };
typedef struct A68t279  A68_279 ;    /* UNION(REF MODE26,REF MODE205)  */
struct A68t278{
struct A68t279  Item;
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE279,REF MODE278)  */
struct A68t281 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t211  mode3;
struct A68t226  mode4;
struct A68t263  mode5;
struct A68t264 * mode6;
struct A68t265 * mode7;
struct A68t282 * mode8;
struct A68t283 * mode9;
struct A68t284 * mode10;
struct A68t285 * mode11;
struct A68t286 * mode12;
struct A68t287 * mode13;
struct A68t288 * mode14;
struct A68t289 * mode15;
struct A68t280 * mode16;
struct A68t290 * mode17;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(MODE186,MODE198,MODE211,MODE226,MODE263,REF MODE264,REF MODE265,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE280,REF MODE290)  */
struct A68t280{
struct A68t281  Step;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE281,REF MODE280)  */
struct A68t282{
struct A68t266  Seqlet;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE266)  */
struct A68t283{
struct A68t266  Seqvar;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE266)  */
struct A68t284{
struct A68t273 * Pvarnames;
struct A68t232  Init;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(REF MODE273,MODE232)  */
struct A68t285{
struct A68t232  To;
struct A68t232  From;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t286{
struct A68t232  Input;
struct A68t291 * Choices;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE232,REF MODE291)  */
struct A68t287{
struct A68t194  Cond;
struct A68t281  True;
struct A68t281  False;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE194,MODE281,MODE281)  */
struct A68t288{
struct A68t194  Repl;
struct A68t281  Body;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE194,MODE281)  */
struct A68t289{
A68_INT  Seqnull;
A_PAD_INT(PAD_102)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT)  */
struct A68t290{
struct A68t194  Size;
struct A68t281  Elem;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE194,MODE281)  */
struct A68t291{
A68_BOOL  Check;
A_PAD_BOOL(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t232  Test;
struct A68t281  Output;
struct A68t291 * Rest;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BOOL,INT,MODE232,MODE281,REF MODE291)  */
struct A68t292{
A68_BOOL  Check;
A_PAD_BOOL(PAD_105)
A68_INT  Sort;
A_PAD_INT(PAD_106)
struct A68t232  Test;
struct A68t232  Output;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(BOOL,INT,MODE232,MODE232,REF MODE292)  */
struct A68t293 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t211  mode3;
struct A68t226  mode4;
struct A68t263  mode5;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(MODE186,MODE198,MODE211,MODE226,MODE263)  */
struct A68t294{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_107)
A68_VC  Name;
struct A68t274  Macparams;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(BOOL,REF MODE26,REF MODE274)  */
struct A68t295{
struct A68t194  Output;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE194)  */
struct A68t296{
A68_INT  Reform;
A_PAD_INT(PAD_108)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT)  */
struct A68t297{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_109)
struct A68t158  Ctname;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t298{
A68_INT  Sort;
A_PAD_INT(PAD_110)
struct A68t232  Init;
struct A68t194  Ambigtime;
struct A68t232  Ambig;
struct A68t194  Delaytime;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,MODE232,MODE194,MODE232,MODE194)  */
struct A68t299{
struct A68t232  Init;
struct A68t194  Delaytime;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE232,MODE194)  */
struct A68t300{
struct A68t232  Init;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE232)  */
struct A68t301{
A68_INT  Sort;
A_PAD_INT(PAD_111)
struct A68t194  Interval;
struct A68t232  Init;
struct A68t194  Skew;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,MODE194,MODE232,MODE194)  */
struct A68t302{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_112)
A68_INT  Sort;
A_PAD_INT(PAD_113)
struct A68t272  Inst;
struct A68t194  Scale;
struct A68t232  Init;
struct A68t194  Skew;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(BOOL,INT,MODE272,MODE194,MODE232,MODE194)  */
struct A68t304 { A68_INT mode; union {
struct A68t277 * mode1;
struct A68t294 * mode2;
struct A68t295 * mode3;
struct A68t296 * mode4;
struct A68t297 * mode5;
struct A68t298 * mode6;
struct A68t299 * mode7;
struct A68t300 * mode8;
struct A68t301 * mode9;
struct A68t302 * mode10;
struct A68t303 * mode11;
struct A68t305 * mode12;
} data; };
typedef struct A68t304  A68_304 ;    /* UNION(REF MODE277,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE305)  */
struct A68t303{
struct A68t184 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_114)
struct A68t304  Fnbody;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE184,BOOL,MODE304)  */
struct A68t305{
A68_INT  Bodynull;
A_PAD_INT(PAD_115)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(INT)  */
struct A68t306{
A68_INT  Sort;
A_PAD_INT(PAD_116)
struct A68t293  Spec;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT,MODE293)  */
struct A68t307{
A68_VC  Name;
struct A68t210  Type;
struct A68t185  Attr;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE26,MODE210,MODE185)  */
A_VECTOR(struct A68t306 ,A68t309);
typedef struct A68t309  A68_309 ;    /* VECTOR [] MODE306 */
A_VECTOR(struct A68t307 ,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] MODE307 */
struct A68t308{
A68_INT  Sort;
A_PAD_INT(PAD_117)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_118)
A68_VC  Fnname;
struct A68t309  Macspecs;
struct A68t185  Attr;
struct A68t273 * Inputs;
struct A68t273 * Outputs;
struct A68t310  Nametypes;
struct A68t304  Fnbody;
struct A68t192 * Usage;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE309,MODE185,REF MODE273,REF MODE273,REF MODE310,MODE304,REF MODE192)  */
A_VECTOR(struct A68t191 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE191 */
A_VECTOR(struct A68t207 *,A68t313);
typedef struct A68t313  A68_313 ;    /* VECTOR [] REF MODE207 */
A_VECTOR(struct A68t225 *,A68t314);
typedef struct A68t314  A68_314 ;    /* VECTOR [] REF MODE225 */
A_VECTOR(struct A68t231 *,A68t315);
typedef struct A68t315  A68_315 ;    /* VECTOR [] REF MODE231 */
A_VECTOR(struct A68t308 *,A68t316);
typedef struct A68t316  A68_316 ;    /* VECTOR [] REF MODE308 */
struct A68t311{
struct A68t312  Attrs;
struct A68t313  Ints;
struct A68t314  Types;
struct A68t315  Consts;
struct A68t316  Fns;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316)  */
struct A68t317{
A68_INT  Closureno;
A_PAD_INT(PAD_119)
A68_INT  Sort;
A_PAD_INT(PAD_120)
struct A68t311 * Environ;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT,INT,REF MODE311)  */
struct A68t318{
struct A68t317  Outer;
struct A68t318 * Rest;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE317,REF MODE318)  */
A_VECTOR(struct A68t318 ,A68t320);
typedef struct A68t320  A68_320 ;    /* VECTOR [] MODE318 */
struct A68t319{
struct A68t320  Outers;
struct A68t319 * Rest;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE320,REF MODE319)  */
struct A68t321{
A68_INT  Max_closureno;
A_PAD_INT(PAD_121)
struct A68t318 * Outers;
struct A68t318 * Freelist;
struct A68t319 * Outerslist;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT,REF MODE318,REF MODE318,REF MODE319)  */
A_VECTOR(struct A68t318 *,A68t322);
typedef struct A68t322  A68_322 ;    /* VECTOR [] REF MODE318 */

A_PROCEDURE(struct A68t197 *,A68t323,(A68_INT ),(A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) REF MODE197 */

A_PROCEDURE(struct A68t198 *,A68t324,(A68_INT ),(A68_INT ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(INT) REF MODE198 */

A_PROCEDURE(struct A68t202 *,A68t325,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE194) REF MODE202 */

A_PROCEDURE(struct A68t205 *,A68t326,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE194) REF MODE205 */

A_PROCEDURE(struct A68t211 *,A68t327,(A68_INT ),(A68_INT ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(INT) REF MODE211 */

A_PROCEDURE(struct A68t215 *,A68t328,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE210) REF MODE215 */

A_PROCEDURE(struct A68t219 *,A68t329,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE210) REF MODE219 */

A_PROCEDURE(struct A68t226 *,A68t330,(A68_INT ),(A68_INT ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(INT) REF MODE226 */

A_PROCEDURE(struct A68t230 *,A68t331,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE210) REF MODE230 */

A_PROCEDURE(struct A68t282 *,A68t332,(struct A68t266 ),(struct A68t266 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE266) REF MODE282 */

A_PROCEDURE(struct A68t283 *,A68t333,(struct A68t266 ),(struct A68t266 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE266) REF MODE283 */

A_PROCEDURE(struct A68t258 *,A68t334,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE232) REF MODE258 */

A_PROCEDURE(struct A68t277 *,A68t335,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE232) REF MODE277 */

A_PROCEDURE(struct A68t263 *,A68t336,(A68_INT ),(A68_INT ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT) REF MODE263 */

A_PROCEDURE(struct A68t295 *,A68t337,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE194) REF MODE295 */

A_PROCEDURE(struct A68t300 *,A68t338,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE232) REF MODE300 */

A_PROCEDURE(struct A68t203 *,A68t339,(A68_INT ),(A68_INT ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(INT) REF MODE203 */

A_PROCEDURE(struct A68t186 *,A68t340,(A68_INT ),(A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT) REF MODE186 */

A_PROCEDURE(struct A68t193 *,A68t341,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE185) REF MODE193 */

A_PROCEDURE(struct A68t189 *,A68t342,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE185) REF MODE189 */
A_VECTOR(struct A68t183 *,A68t343);
typedef struct A68t343  A68_343 ;    /* VECTOR [] REF MODE183 */

A_PROCEDURE(A68_INT ,A68t344,(struct A68t321 *),(struct A68t321 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE321) INT */

A_PROCEDURE(struct A68t318 *,A68t345,(A68_INT ,struct A68t321 *,struct A68t97 ),(A68_INT ,struct A68t321 *,struct A68t97 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(INT,REF MODE321,MODE97) REF MODE318 */

A_PROCEDURE(struct A68t318 *,A68t346,(struct A68t321 *),(struct A68t321 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE321) REF MODE318 */

A_PROCEDURE(struct A68t318 **,A68t347,(struct A68t317 ,struct A68t318 **,struct A68t321 *,struct A68t97 ),(struct A68t317 ,struct A68t318 **,struct A68t321 *,struct A68t97 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE317,REF REF MODE318,REF MODE321,MODE97) REF REF MODE318 */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t318 **,struct A68t321 *,struct A68t97 ),(struct A68t318 **,struct A68t321 *,struct A68t97 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF REF MODE318,REF MODE321,MODE97) VOID */

A_PROCEDURE(struct A68t321 *,A68t349,(void),(void *));
typedef struct A68t349  A68_349 ;    /* PROC REF MODE321 */

A_PROCEDURE(A68_INT ,A68t350,(struct A68t321 *,struct A68t97 ),(struct A68t321 *,struct A68t97 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE321,MODE97) INT */

A_PROCEDURE(struct A68t321 *,A68t351,(struct A68t321 *,struct A68t97 ),(struct A68t321 *,struct A68t97 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE321,MODE97) REF MODE321 */
struct A68t352{
struct A68t185  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t352  A68_352 ;    /* STRUCT(MODE185,BOOL)  */
struct A68t353{
struct A68t188 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t353  A68_353 ;    /* STRUCT(REF MODE188,BOOL)  */
struct A68t354{
struct A68t191 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(REF MODE191,BOOL)  */
struct A68t355{
struct A68t194  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE194,BOOL)  */
struct A68t356{
struct A68t206 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t356  A68_356 ;    /* STRUCT(REF MODE206,BOOL)  */
struct A68t357{
struct A68t207 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t357  A68_357 ;    /* STRUCT(REF MODE207,BOOL)  */
struct A68t358{
struct A68t209  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE209,BOOL)  */
struct A68t359{
struct A68t208  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(MODE208,BOOL)  */
struct A68t360{
struct A68t213 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t360  A68_360 ;    /* STRUCT(REF MODE213,BOOL)  */
struct A68t361{
struct A68t210  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(MODE210,BOOL)  */
struct A68t362{
struct A68t221  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(MODE221,BOOL)  */
struct A68t363{
struct A68t224  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t363  A68_363 ;    /* STRUCT(REF MODE224,BOOL)  */
struct A68t364{
struct A68t223  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t364  A68_364 ;    /* STRUCT(MODE223,BOOL)  */
struct A68t365{
struct A68t225 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t365  A68_365 ;    /* STRUCT(REF MODE225,BOOL)  */
struct A68t366{
struct A68t231 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t366  A68_366 ;    /* STRUCT(REF MODE231,BOOL)  */
struct A68t367{
struct A68t236 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t367  A68_367 ;    /* STRUCT(REF MODE236,BOOL)  */
struct A68t368{
struct A68t247 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t368  A68_368 ;    /* STRUCT(REF MODE247,BOOL)  */
struct A68t369{
struct A68t292 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(REF MODE292,BOOL)  */
struct A68t370{
struct A68t232  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t370  A68_370 ;    /* STRUCT(MODE232,BOOL)  */
struct A68t371{
struct A68t276  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t371  A68_371 ;    /* STRUCT(MODE276,BOOL)  */
struct A68t372{
struct A68t274  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(REF MODE274,BOOL)  */
struct A68t373{
struct A68t272  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t373  A68_373 ;    /* STRUCT(MODE272,BOOL)  */
struct A68t374{
struct A68t293  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(MODE293,BOOL)  */
struct A68t375{
struct A68t278 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t375  A68_375 ;    /* STRUCT(REF MODE278,BOOL)  */
struct A68t376{
struct A68t264 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE264,BOOL)  */
struct A68t377{
struct A68t265 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(REF MODE265,BOOL)  */
struct A68t378{
struct A68t273 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE273,BOOL)  */
struct A68t379{
struct A68t266 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(REF MODE266,BOOL)  */
struct A68t380{
struct A68t291 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE291,BOOL)  */
struct A68t381{
struct A68t281  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_151)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(MODE281,BOOL)  */
struct A68t382{
struct A68t280 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_152)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(REF MODE280,BOOL)  */
struct A68t383{
struct A68t267 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(REF MODE267,BOOL)  */
struct A68t384{
struct A68t268 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_154)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(REF MODE268,BOOL)  */
struct A68t385{
struct A68t271 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_155)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(REF MODE271,BOOL)  */
struct A68t386{
struct A68t262  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_156)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(MODE262,BOOL)  */
struct A68t387{
struct A68t261 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_157)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t388{
struct A68t304  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_158)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(MODE304,BOOL)  */
struct A68t389{
struct A68t306  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(MODE306,BOOL)  */
struct A68t390{
struct A68t309  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_160)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(REF MODE309,BOOL)  */
struct A68t391{
struct A68t308 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(REF MODE308,BOOL)  */
struct A68t392{
struct A68t317  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_162)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(MODE317,BOOL)  */
struct A68t393{
struct A68t321 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_163)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(REF MODE321,BOOL)  */
struct A68t394 ;

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t185 ,struct A68t394 *,struct A68t352 *),(struct A68t185 ,struct A68t394 *,struct A68t352 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE185,REF MODE394) MODE352 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t188 *,struct A68t394 *,struct A68t353 *),(struct A68t188 *,struct A68t394 *,struct A68t353 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE188,REF MODE394) MODE353 */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t191 *,struct A68t394 *,struct A68t354 *),(struct A68t191 *,struct A68t394 *,struct A68t354 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE191,REF MODE394) MODE354 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t194 ,struct A68t394 *,struct A68t355 *),(struct A68t194 ,struct A68t394 *,struct A68t355 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE194,REF MODE394) MODE355 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t206 *,struct A68t394 *,struct A68t356 *),(struct A68t206 *,struct A68t394 *,struct A68t356 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE206,REF MODE394) MODE356 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t207 *,struct A68t394 *,struct A68t357 *),(struct A68t207 *,struct A68t394 *,struct A68t357 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE207,REF MODE394) MODE357 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t209 ,struct A68t394 *,struct A68t358 *),(struct A68t209 ,struct A68t394 *,struct A68t358 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE209,REF MODE394) MODE358 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t208 ,struct A68t394 *,struct A68t359 *),(struct A68t208 ,struct A68t394 *,struct A68t359 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE208,REF MODE394) MODE359 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t213 *,struct A68t394 *,struct A68t360 *),(struct A68t213 *,struct A68t394 *,struct A68t360 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE213,REF MODE394) MODE360 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t210 ,struct A68t394 *,struct A68t361 *),(struct A68t210 ,struct A68t394 *,struct A68t361 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE210,REF MODE394) MODE361 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t221 ,struct A68t394 *,struct A68t362 *),(struct A68t221 ,struct A68t394 *,struct A68t362 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE221,REF MODE394) MODE362 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t224 ,struct A68t394 *,struct A68t363 *),(struct A68t224 ,struct A68t394 *,struct A68t363 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE224,REF MODE394) MODE363 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t223 ,struct A68t394 *,struct A68t364 *),(struct A68t223 ,struct A68t394 *,struct A68t364 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE223,REF MODE394) MODE364 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t225 *,struct A68t394 *,struct A68t365 *),(struct A68t225 *,struct A68t394 *,struct A68t365 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE225,REF MODE394) MODE365 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t231 *,struct A68t394 *,struct A68t366 *),(struct A68t231 *,struct A68t394 *,struct A68t366 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE231,REF MODE394) MODE366 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t236 *,struct A68t394 *,struct A68t367 *),(struct A68t236 *,struct A68t394 *,struct A68t367 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE236,REF MODE394) MODE367 */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t247 *,struct A68t394 *,struct A68t368 *),(struct A68t247 *,struct A68t394 *,struct A68t368 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE247,REF MODE394) MODE368 */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t292 *,struct A68t394 *,struct A68t369 *),(struct A68t292 *,struct A68t394 *,struct A68t369 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE292,REF MODE394) MODE369 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t232 ,struct A68t394 *,struct A68t370 *),(struct A68t232 ,struct A68t394 *,struct A68t370 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE232,REF MODE394) MODE370 */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t276 ,struct A68t394 *,struct A68t371 *),(struct A68t276 ,struct A68t394 *,struct A68t371 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE276,REF MODE394) MODE371 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t274 ,struct A68t394 *,struct A68t372 *),(struct A68t274 ,struct A68t394 *,struct A68t372 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE274,REF MODE394) MODE372 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t272 ,struct A68t394 *,struct A68t373 *),(struct A68t272 ,struct A68t394 *,struct A68t373 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE272,REF MODE394) MODE373 */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t293 ,struct A68t394 *,struct A68t374 *),(struct A68t293 ,struct A68t394 *,struct A68t374 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE293,REF MODE394) MODE374 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t278 *,struct A68t394 *,struct A68t375 *),(struct A68t278 *,struct A68t394 *,struct A68t375 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE278,REF MODE394) MODE375 */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t264 *,struct A68t394 *,struct A68t376 *),(struct A68t264 *,struct A68t394 *,struct A68t376 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE264,REF MODE394) MODE376 */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t265 *,struct A68t394 *,struct A68t377 *),(struct A68t265 *,struct A68t394 *,struct A68t377 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE265,REF MODE394) MODE377 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t273 *,struct A68t394 *,struct A68t378 *),(struct A68t273 *,struct A68t394 *,struct A68t378 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE273,REF MODE394) MODE378 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t266 *,struct A68t394 *,struct A68t379 *),(struct A68t266 *,struct A68t394 *,struct A68t379 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE266,REF MODE394) MODE379 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t291 *,struct A68t394 *,struct A68t380 *),(struct A68t291 *,struct A68t394 *,struct A68t380 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE291,REF MODE394) MODE380 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t281 ,struct A68t394 *,struct A68t381 *),(struct A68t281 ,struct A68t394 *,struct A68t381 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE281,REF MODE394) MODE381 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t280 *,struct A68t394 *,struct A68t382 *),(struct A68t280 *,struct A68t394 *,struct A68t382 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE280,REF MODE394) MODE382 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t267 *,struct A68t394 *,struct A68t383 *),(struct A68t267 *,struct A68t394 *,struct A68t383 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE267,REF MODE394) MODE383 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t268 *,struct A68t394 *,struct A68t384 *),(struct A68t268 *,struct A68t394 *,struct A68t384 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE268,REF MODE394) MODE384 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t271 *,struct A68t394 *,struct A68t385 *),(struct A68t271 *,struct A68t394 *,struct A68t385 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE271,REF MODE394) MODE385 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t262 ,struct A68t394 *,struct A68t386 *),(struct A68t262 ,struct A68t394 *,struct A68t386 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE262,REF MODE394) MODE386 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t261 *,struct A68t394 *,struct A68t387 *),(struct A68t261 *,struct A68t394 *,struct A68t387 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE261,REF MODE394) MODE387 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t304 ,struct A68t394 *,struct A68t388 *),(struct A68t304 ,struct A68t394 *,struct A68t388 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE304,REF MODE394) MODE388 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t306 ,struct A68t394 *,struct A68t389 *),(struct A68t306 ,struct A68t394 *,struct A68t389 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE306,REF MODE394) MODE389 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t309 ,struct A68t394 *,struct A68t390 *),(struct A68t309 ,struct A68t394 *,struct A68t390 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE309,REF MODE394) MODE390 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t308 *,struct A68t394 *,struct A68t391 *),(struct A68t308 *,struct A68t394 *,struct A68t391 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE308,REF MODE394) MODE391 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t317 ,struct A68t394 *,struct A68t392 *),(struct A68t317 ,struct A68t394 *,struct A68t392 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE317,REF MODE394) MODE392 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t321 *,struct A68t394 *,struct A68t97 ,struct A68t393 *),(struct A68t321 *,struct A68t394 *,struct A68t97 ,struct A68t393 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE321,REF MODE394,MODE97) MODE393 */
struct A68t394{
struct A68t395  Attr;
struct A68t396  Attrstr;
struct A68t397  Attrdec;
struct A68t398  Formula;
struct A68t399  Formulas;
struct A68t400  Intdec;
struct A68t401  Range;
struct A68t402  Formularange;
struct A68t403  Tstr;
struct A68t404  Type;
struct A68t405  Alternative;
struct A68t406  Alternatives;
struct A68t407  Typebody;
struct A68t408  Typedec;
struct A68t409  Constdec;
struct A68t410  Ualts;
struct A68t411  Ustr;
struct A68t412  Uchoices;
struct A68t413  Unit;
struct A68t414  Mparam;
struct A68t415  Macparams;
struct A68t416  Instance;
struct A68t417  Declaration;
struct A68t418  Printitems;
struct A68t419  Print;
struct A68t420  Fault;
struct A68t421  Names;
struct A68t422  Let;
struct A68t423  Seqchoices;
struct A68t424  Seqstep;
struct A68t425  Sequence;
struct A68t426  Make;
struct A68t427  Join;
struct A68t428  Joins;
struct A68t429  Step;
struct A68t430  Series;
struct A68t431  Fnbody;
struct A68t432  Macspec;
struct A68t433  Macspecs;
struct A68t434  Fndec;
struct A68t435  Outer;
struct A68t436  Closure;
struct A68t394 * Rest;
};
typedef struct A68t394  A68_394 ;    /* STRUCT(MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,MODE403,MODE404,MODE405,MODE406,MODE407,MODE408,MODE409,MODE410,MODE411,MODE412,MODE413,MODE414,MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,REF MODE394)  */
struct A68t438 ;

A_PROCEDURE(struct A68t394 *,A68t437,(struct A68t394 *,struct A68t438 ),(struct A68t394 *,struct A68t438 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE394,MODE438) REF MODE394 */
A_VECTOR(struct A68t439 ,A68t438);
typedef struct A68t438  A68_438 ;    /* VECTOR [] MODE439 */
struct A68t439 { A68_INT mode; union {
struct A68t395  mode1;
struct A68t396  mode2;
struct A68t397  mode3;
struct A68t398  mode4;
struct A68t399  mode5;
struct A68t400  mode6;
struct A68t401  mode7;
struct A68t402  mode8;
struct A68t403  mode9;
struct A68t404  mode10;
struct A68t405  mode11;
struct A68t406  mode12;
struct A68t407  mode13;
struct A68t408  mode14;
struct A68t409  mode15;
struct A68t410  mode16;
struct A68t411  mode17;
struct A68t412  mode18;
struct A68t413  mode19;
struct A68t414  mode20;
struct A68t415  mode21;
struct A68t416  mode22;
struct A68t417  mode23;
struct A68t418  mode24;
struct A68t419  mode25;
struct A68t420  mode26;
struct A68t421  mode27;
struct A68t422  mode28;
struct A68t423  mode29;
struct A68t424  mode30;
struct A68t425  mode31;
struct A68t426  mode32;
struct A68t427  mode33;
struct A68t428  mode34;
struct A68t429  mode35;
struct A68t430  mode36;
struct A68t431  mode37;
struct A68t432  mode38;
struct A68t433  mode39;
struct A68t434  mode40;
struct A68t435  mode41;
struct A68t436  mode42;
} data; };
typedef struct A68t439  A68_439 ;    /* UNION(MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,MODE403,MODE404,MODE405,MODE406,MODE407,MODE408,MODE409,MODE410,MODE411,MODE412,MODE413,MODE414,MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436)  */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t394 *),(struct A68t394 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE394) VOID */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t442,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t443);
typedef struct A68t443  A68_443 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(struct A68t195 *,A68t444,(A68_INT ),(A68_INT ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(INT) REF MODE195 */

A_PROCEDURE(A68_INT ,A68t445,(struct A68t194 ,struct A68t97 ),(struct A68t194 ,struct A68t97 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE194,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t446,(A68_VC ),(A68_VC ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE26) INT */
A_ISTRUCT(A68_CHAR ,23,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_INT ,A68t454,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE194) INT */

A_PROCEDURE(struct A68t191 *,A68t455,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE317) REF MODE191 */

A_PROCEDURE(struct A68t207 *,A68t456,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE317) REF MODE207 */

A_PROCEDURE(struct A68t225 *,A68t457,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(MODE317) REF MODE225 */

A_PROCEDURE(struct A68t231 *,A68t458,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE317) REF MODE231 */
A_ISTRUCT(A68_CHAR ,17,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(struct A68t308 *,A68t460,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(MODE317) REF MODE308 */
A_ISTRUCT(A68_CHAR ,14,A68t461);
typedef struct A68t461  A68_461 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_INT ,A68t462,(struct A68t192 *,struct A68t312 ),(struct A68t192 *,struct A68t312 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE192,REF MODE312) INT */
A_ISTRUCT(A68_CHAR ,33,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t185 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t352 *),(struct A68t185 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t352 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE185,REF MODE394,REF MODE311,REF MODE311) MODE352 */

A_PROCEDURE(A68_INT ,A68t465,(struct A68t192 *,struct A68t313 ),(struct A68t192 *,struct A68t313 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE192,REF MODE313) INT */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t194 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t355 *),(struct A68t194 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t355 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(MODE194,REF MODE394,REF MODE311,REF MODE311) MODE355 */

A_PROCEDURE(A68_INT ,A68t467,(struct A68t192 *,struct A68t314 ),(struct A68t192 *,struct A68t314 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE192,REF MODE314) INT */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t210 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t361 *),(struct A68t210 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t361 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE210,REF MODE394,REF MODE311,REF MODE311) MODE361 */

A_PROCEDURE(A68_INT ,A68t469,(struct A68t192 *,struct A68t315 ),(struct A68t192 *,struct A68t315 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE192,REF MODE315) INT */
A_ISTRUCT(A68_CHAR ,34,A68t470);
typedef struct A68t470  A68_470 ;    /* STRUCT 34 CHAR */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t232 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t370 *),(struct A68t232 ,struct A68t394 *,struct A68t311 *,struct A68t311 *,struct A68t370 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(MODE232,REF MODE394,REF MODE311,REF MODE311) MODE370 */
struct A68t472{
A68_INT  I;
A_PAD_INT(PAD_164)
A68_BOOL  C;
A_PAD_BOOL(PAD_165)
};
typedef struct A68t472  A68_472 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t473,(A68_INT ,struct A68t472 *),(A68_INT ,struct A68t472 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(INT) MODE472 */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t311 *,struct A68t311 *,struct A68t440 ),(struct A68t311 *,struct A68t311 *,struct A68t440 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE311,REF MODE311,MODE440) VOID */
A_ISTRUCT(struct A68t439 ,4,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 4 MODE439 */

A_PROCEDURE(struct A68t191 *,A68t476,(struct A68t186 ,struct A68t321 *,struct A68t311 *),(struct A68t186 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE186,REF MODE321,REF MODE311) REF MODE191 */

A_PROCEDURE(struct A68t207 *,A68t477,(struct A68t198 ,struct A68t321 *,struct A68t311 *),(struct A68t198 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(MODE198,REF MODE321,REF MODE311) REF MODE207 */

A_PROCEDURE(struct A68t225 *,A68t478,(struct A68t211 ,struct A68t321 *,struct A68t311 *),(struct A68t211 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(MODE211,REF MODE321,REF MODE311) REF MODE225 */

A_PROCEDURE(struct A68t231 *,A68t479,(struct A68t226 ,struct A68t321 *,struct A68t311 *),(struct A68t226 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE226,REF MODE321,REF MODE311) REF MODE231 */

A_PROCEDURE(A68_INT ,A68t480,(struct A68t192 *,struct A68t316 ),(struct A68t192 *,struct A68t316 ,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE192,REF MODE316) INT */
A_ISTRUCT(A68_CHAR ,31,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(struct A68t308 *,A68t482,(struct A68t308 *,struct A68t311 *,struct A68t311 *),(struct A68t308 *,struct A68t311 *,struct A68t311 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(REF MODE308,REF MODE311,REF MODE311) REF MODE308 */

A_PROCEDURE(struct A68t308 *,A68t483,(struct A68t263 ,struct A68t321 *,struct A68t311 *),(struct A68t263 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(MODE263,REF MODE321,REF MODE311) REF MODE308 */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t194 ,struct A68t194 *),(struct A68t194 ,struct A68t194 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE194) MODE194 */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t213 *,struct A68t194 *),(struct A68t213 *,struct A68t194 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(REF MODE213) MODE194 */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t210 ,struct A68t194 ,struct A68t194 ,struct A68t311 *,struct A68t210 *),(struct A68t210 ,struct A68t194 ,struct A68t194 ,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(MODE210,MODE194,MODE194,REF MODE311) MODE210 */

A_PROCEDURE(struct A68t213 *,A68t487,(struct A68t213 *,A68_INT ,A68_INT ),(struct A68t213 *,A68_INT ,A68_INT ,void *));
typedef struct A68t487  A68_487 ;    /* PROC(REF MODE213,INT,INT) REF MODE213 */

A_PROCEDURE(A68_BOOL ,A68t488,(struct A68t194 ,struct A68t194 ),(struct A68t194 ,struct A68t194 ,void *));
typedef struct A68t488  A68_488 ;    /* PROC(MODE194,MODE194) BOOL */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t194 ,struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t210 *),(struct A68t194 ,struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE194,MODE210,MODE210,REF MODE311) MODE210 */

A_PROCEDURE(A68_VOID ,A68t490,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC MODE210 */
A_ISTRUCT(A68_CHAR ,8,A68t491);
typedef struct A68t491  A68_491 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t213 *,A68t492,(struct A68t194 ,struct A68t213 *,struct A68t213 *,struct A68t311 *),(struct A68t194 ,struct A68t213 *,struct A68t213 *,struct A68t311 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(MODE194,REF MODE213,REF MODE213,REF MODE311) REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t493,(A68_BOOL ,A68_INT ,struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t210 *),(A68_BOOL ,A68_INT ,struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(BOOL,INT,MODE210,MODE210,REF MODE311) MODE210 */

A_PROCEDURE(struct A68t212 *,A68t494,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t494  A68_494 ;    /* PROC(MODE210) REF MODE212 */
A_ISTRUCT(A68_CHAR ,9,A68t495);
typedef struct A68t495  A68_495 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t496,(struct A68t210 ,A68_INT ,A68_BOOL ,struct A68t311 *,struct A68t361 *),(struct A68t210 ,A68_INT ,A68_BOOL ,struct A68t311 *,struct A68t361 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(MODE210,INT,BOOL,REF MODE311) MODE361 */

A_PROCEDURE(A68_VOID ,A68t497,(struct A68t210 ,struct A68t361 *),(struct A68t210 ,struct A68t361 *,void *));
typedef struct A68t497  A68_497 ;    /* PROC(MODE210) MODE361 */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t213 *,struct A68t360 *),(struct A68t213 *,struct A68t360 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(REF MODE213) MODE360 */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t210 ,struct A68t311 *,struct A68t194 *),(struct A68t210 ,struct A68t311 *,struct A68t194 *,void *));
typedef struct A68t499  A68_499 ;    /* PROC(MODE210,REF MODE311) MODE194 */

A_PROCEDURE(A68_INT ,A68t500,(struct A68t273 *),(struct A68t273 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE273) INT */

A_PROCEDURE(A68_VOID ,A68t501,(struct A68t273 *,struct A68t308 *,struct A68t210 *),(struct A68t273 *,struct A68t308 *,struct A68t210 *,void *));
typedef struct A68t501  A68_501 ;    /* PROC(REF MODE273,REF MODE308) MODE210 */

A_PROCEDURE(A68_INT ,A68t502,(struct A68t273 *,A68_INT ),(struct A68t273 *,A68_INT ,void *));
typedef struct A68t502  A68_502 ;    /* PROC(REF MODE273,INT) INT */

A_PROCEDURE(A68_INT ,A68t503,(struct A68t241 *,struct A68t311 *),(struct A68t241 *,struct A68t311 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE241,REF MODE311) INT */

A_PROCEDURE(struct A68t214 *,A68t504,(struct A68t308 *),(struct A68t308 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(REF MODE308) REF MODE214 */

A_PROCEDURE(A68_VOID ,A68t505,(struct A68t232 ,struct A68t308 *,struct A68t311 *,struct A68t210 *),(struct A68t232 ,struct A68t308 *,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t505  A68_505 ;    /* PROC(MODE232,REF MODE308,REF MODE311) MODE210 */

A_PROCEDURE(struct A68t213 *,A68t506,(struct A68t247 *),(struct A68t247 *,void *));
typedef struct A68t506  A68_506 ;    /* PROC(REF MODE247) REF MODE213 */
A_ISTRUCT(A68_CHAR ,21,A68t507);
typedef struct A68t507  A68_507 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t210 ,struct A68t311 *,struct A68t210 *),(struct A68t210 ,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE210,REF MODE311) MODE210 */

A_PROCEDURE(A68_BOOL ,A68t509,(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *,A68_BOOL ),(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *,A68_BOOL ,void *));
typedef struct A68t509  A68_509 ;    /* PROC(MODE210,MODE210,REF MODE311,REF MODE311,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t510,(struct A68t223 ,struct A68t223 ,struct A68t311 *,struct A68t311 *),(struct A68t223 ,struct A68t223 ,struct A68t311 *,struct A68t311 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(MODE223,MODE223,REF MODE311,REF MODE311) BOOL */
A_ISTRUCT(A68_CHAR ,24,A68t511);
typedef struct A68t511  A68_511 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_BOOL ,A68t512,(A68_INT ,A68_INT ,struct A68t311 *,struct A68t311 *),(A68_INT ,A68_INT ,struct A68t311 *,struct A68t311 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(INT,INT,REF MODE311,REF MODE311) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_394 * THJATRN_make_newtprocs(struct A68t394 *,struct A68t438 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t394 *);
extern A68_394 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from closureprocs --- */
extern A68_318 * ELCATRN_find_outers(A68_INT ,struct A68t321 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_213 * GAAATRN_niltstr;
extern A68_247 * IAAATRN_nilustr;
extern A68_273 * NAAATRN_nilnames;
extern A68_191 * UAAATRN_nilattrdec;
extern A68_207 * VAAATRN_nilintdec;
extern A68_225 * WAAATRN_niltypedec;
extern A68_231 * XAAATRN_nilconstdec;
extern A68_308 * YAAATRN_nilfndec;
extern A68_192 * CBAATRN_nilusage;
extern A68_198 * OEAATRN_makefname(A68_INT );
extern A68_211 * IFAATRN_maketname(A68_INT );
extern A68_226 * CGAATRN_makecname(A68_INT );
extern A68_203 * TEAATRN_makefmacpar(A68_INT );
extern A68_203 * NFAATRN_maketmacpar(A68_INT );
extern A68_186 * UDAATRN_makeattrname(A68_INT );
extern A68_218  DIAATRN_tnull;
extern A68_217  PIAATRN_tvoid;
#define IJAATRN_fplus 1
#define JJAATRN_fminus 2
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define MKAATRN_uiosource 3
#define NKAATRN_uiosink 4
#define OKAATRN_outerdec 1
#define QKAATRN_macpardec 3
#define RKAATRN_outerattr 1
#define SKAATRN_outerint 2
#define TKAATRN_outertype 3
#define UKAATRN_outerconst 4
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from basics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
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
extern A68_97  ZLBAOSI_global_msg;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_92  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void TIGAOST(void);   /* ioprocs */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_443   KNMATRN = {"$Id: modeprocs.a68,v 34.2 1995/03/29 13:02:59 ella Exp $"}; 
A_GISVEC(A68_VC ,LNMATRN,KNMATRN,56)
static A68_447   EOMATRN = {"FCHECK expansion needed"}; 
A_GISVEC(A68_VC ,FOMATRN,EOMATRN,23)
static A68_448   GOMATRN = {"ARITH expression"}; 
A_GISVEC(A68_VC ,HOMATRN,GOMATRN,16)
static A68_447   IOMATRN = {"INT substitution needed"}; 
A_GISVEC(A68_VC ,JOMATRN,IOMATRN,23)
static A68_449   KOMATRN = {"formula needs simplifying"}; 
A_GISVEC(A68_VC ,LOMATRN,KOMATRN,25)
static A68_449   MOMATRN = {"formula needs simplifying"}; 
A_GISVEC(A68_VC ,NOMATRN,MOMATRN,25)
static A68_450   OOMATRN = {"conditional expansion needed"}; 
A_GISVEC(A68_VC ,POMATRN,OOMATRN,28)
static A68_451   QOMATRN = {"redundant brackets need removing"}; 
A_GISVEC(A68_VC ,ROMATRN,QOMATRN,32)
static A68_452   SOMATRN = {"FMACPAR present"}; 
A_GISVEC(A68_VC ,TOMATRN,SOMATRN,15)
static A68_453   UOMATRN = {"FNULL present"}; 
A_GISVEC(A68_VC ,VOMATRN,UOMATRN,13)
static A68_448   BPMATRN = {"Not an outerattr"}; 
A_GISVEC(A68_VC ,CPMATRN,BPMATRN,16)
static A68_452   IPMATRN = {"Not an outerint"}; 
A_GISVEC(A68_VC ,JPMATRN,IPMATRN,15)
static A68_448   PPMATRN = {"Not an outertype"}; 
A_GISVEC(A68_VC ,QPMATRN,PPMATRN,16)
static A68_459   WPMATRN = {"Not an outerconst"}; 
A_GISVEC(A68_VC ,XPMATRN,WPMATRN,17)
static A68_461   DQMATRN = {"Not an outerfn"}; 
A_GISVEC(A68_VC ,EQMATRN,DQMATRN,14)
static A68_463   LQMATRN = {"You can only look for OUTER attrs"}; 
A_GISVEC(A68_VC ,MQMATRN,LQMATRN,33)
static A68_451   PRMATRN = {"You can only look for OUTER ints"}; 
A_GISVEC(A68_VC ,QRMATRN,PRMATRN,32)
static A68_463   WSMATRN = {"You can only look for OUTER types"}; 
A_GISVEC(A68_VC ,XSMATRN,WSMATRN,33)
static A68_470   DUMATRN = {"You can only look for OUTER consts"}; 
A_GISVEC(A68_VC ,EUMATRN,DUMATRN,34)
static A68_481   LCNATRN = {"You can only look for OUTER fns"}; 
A_GISVEC(A68_VC ,MCNATRN,LCNATRN,31)
static A68_114   LGNATRN = {"trim"}; 
A_GISVEC(A68_VC ,MGNATRN,LGNATRN,4)
static A68_114   YHNATRN = {"trim"}; 
A_GISVEC(A68_VC ,ZHNATRN,YHNATRN,4)
static A68_453   LINATRN = {"equal_formula"}; 
A_GISVEC(A68_VC ,MINATRN,LINATRN,13)
static A68_453   EJNATRN = {"equal_formula"}; 
A_GISVEC(A68_VC ,FJNATRN,EJNATRN,13)
static A68_491   NJNATRN = {"uif_type"}; 
A_GISVEC(A68_VC ,OJNATRN,NJNATRN,8)
static A68_495   YNNATRN = {"make_trow"}; 
A_GISVEC(A68_VC ,ZNNATRN,YNNATRN,9)
static A68_495   ZSNATRN = {"type_size"}; 
A_GISVEC(A68_VC ,ATNATRN,ZSNATRN,9)
static A68_491   FXNATRN = {"uextract"}; 
A_GISVEC(A68_VC ,GXNATRN,FXNATRN,8)
static A68_495   MXNATRN = {"uportname"}; 
A_GISVEC(A68_VC ,NXNATRN,MXNATRN,9)
static A68_507   ABOATRN = {"fname needed in UREPL"}; 
A_GISVEC(A68_VC ,BBOATRN,ABOATRN,21)
static A68_507   IBOATRN = {"range needed in UREPL"}; 
A_GISVEC(A68_VC ,JBOATRN,IBOATRN,21)
static A68_511   XEOATRN = {"call simplify_type first"}; 
A_GISVEC(A68_VC ,YEOATRN,XEOATRN,24)
static A68_511   WFOATRN = {"call simplify_type first"}; 
A_GISVEC(A68_VC ,XFOATRN,WFOATRN,24)
static A68_461   YFOATRN = {"equal_typebody"}; 
A_GISVEC(A68_VC ,ZFOATRN,YFOATRN,14)
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} YNMATRN_err;
typedef struct   /* env of non-global proc */
{
A68_311 * Old;
A68_311 * New;
} UUMATRN_new_typeno;
typedef struct   /* env of non-global proc */
{
A68_311 * Oldenv;
A68_311 * Newenv;
} KYMATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_311 * Oldenv;
A68_311 * Newenv;
} TYMATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_311 * Oldenv;
A68_311 * Newenv;
} CZMATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_311 * Oldenv;
A68_311 * Newenv;
} LZMATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_191 ** WZMATRN_adec;
A68_317  ZZMATRN_oattr;
} DANATRN_do_attr;
typedef struct   /* env of non-global proc */
{
A68_207 ** NANATRN_idec;
A68_317  QANATRN_oint;
} UANATRN_do_int;
typedef struct   /* env of non-global proc */
{
A68_225 ** EBNATRN_tdec;
A68_317  HBNATRN_otype;
} LBNATRN_do_type;
typedef struct   /* env of non-global proc */
{
A68_231 ** VBNATRN_cdec;
A68_317  YBNATRN_oconst;
} CCNATRN_do_const;
typedef struct   /* env of non-global proc */
{
A68_308 ** XCNATRN_ans;
A68_308 * Fdec;
} BDNATRN_do_fdec;
typedef struct   /* env of non-global proc */
{
A68_308 ** JDNATRN_fdec;
A68_317  MDNATRN_ofn;
} QDNATRN_do_fdec;
typedef struct   /* env of non-global proc */
{
A68_487  WFNATRN_trimst;
} YFNATRN_trimst;
typedef struct   /* env of non-global proc */
{
A68_492  VJNATRN_uif_tstr;
} XJNATRN_uif_tstr;
typedef struct   /* env of non-global proc */
{
A68_311 * Env;
A68_494  ANNATRN_make_trow;
} CNNATRN_make_trow;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Namedoutput;
A_PAD_BOOL(PAD_166)
A68_INT  Sort;
A_PAD_INT(PAD_167)
} NPNATRN_basic_type;
typedef struct   /* env of non-global proc */
{
A68_INT  Sort;
A_PAD_INT(PAD_168)
A68_BOOL  Namedoutput;
A_PAD_BOOL(PAD_169)
A68_311 * Env;
A68_498  YPNATRN_coerce_tstr;
} AQNATRN_coerce_tstr;
typedef struct   /* env of non-global proc */
{
A68_308 * Fdec;
A68_311 * Env;
A68_506  YUNATRN_ustr_tstr;
} AVNATRN_ustr_tstr;
typedef struct   /* env of non-global proc */
{
A68_311 * Env;
A68_404  HDOATRN_simplify;
} JDOATRN_simplify;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Check_body;
A_PAD_BOOL(PAD_170)
} VEOATRN_equal_typebody;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Check_body;
A_PAD_BOOL(PAD_171)
A68_510  TEOATRN_equal_typebody;
} GGOATRN_equal_tnames;

A68_195 * NNMATRN_makefint(A68_INT  Int);

A68_INT  TNMATRN_formula_int(A68_194  Form, A68_97  Msg);

A_STATIC A68_INT  XNMATRN_err(A68_VC  Error, void *NonLocals);

A68_INT  XOMATRN_int(A68_194  Form);

A68_191 * APMATRN_get_outerattr(A68_317  O);

A68_207 * HPMATRN_get_outerint(A68_317  O);

A68_225 * OPMATRN_get_outertype(A68_317  O);

A68_231 * VPMATRN_get_outerconst(A68_317  O);

A68_308 * CQMATRN_get_outerfn(A68_317  O);

A68_INT  KQMATRN_findnewattrno(A68_192 * Ug, A68_312  New);

A_STATIC A68_VOID  XQMATRN_translate_attr(A68_185  A, A68_394 * Tp, A68_311 * Old, A68_311 * New, A68_352  *ReturnedValue);

A68_INT  ORMATRN_findnewintno(A68_192 * Ug, A68_313  New);

A_STATIC A68_VOID  BSMATRN_translate_formula(A68_194  F, A68_394 * Tprocs, A68_311 * Old, A68_311 * New, A68_355  *ReturnedValue);

A68_INT  VSMATRN_findnewtypeno(A68_192 * Tg, A68_314  New);

A_STATIC A68_VOID  ITMATRN_translate_type(A68_210  T, A68_394 * Tprocs, A68_311 * Old, A68_311 * New, A68_361  *ReturnedValue);

A68_INT  CUMATRN_findnewconstno(A68_192 * Ug, A68_315  New);

A_STATIC A68_VOID  PUMATRN_translate_constunit(A68_232  C, A68_394 * Tprocs, A68_311 * Old, A68_311 * New, A68_370  *ReturnedValue);

A_STATIC A68_VOID  TUMATRN_new_typeno(A68_INT  Typeno, A68_472  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EYMATRN_translateprocs(A68_311 * Oldenv, A68_311 * Newenv, A68_440  Action);

A_STATIC A68_VOID  JYMATRN_anonymous(A68_185  A, A68_394 * Tp, A68_352  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SYMATRN_anonymous(A68_194  F, A68_394 * Tp, A68_355  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BZMATRN_anonymous(A68_210  T, A68_394 * Tp, A68_361  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KZMATRN_anonymous(A68_232  U, A68_394 * Tp, A68_370  *ReturnedValue, void *NonLocals);

A68_191 * VZMATRN_find_attrdec(A68_186  Dec, A68_321 * Closure, A68_311 * Env);

A_STATIC A68_VOID  CANATRN_do_attr(A68_394 * Newtprocs, void *NonLocals);

A68_207 * MANATRN_find_intdec(A68_198  Dec, A68_321 * Closure, A68_311 * Env);

A_STATIC A68_VOID  TANATRN_do_int(A68_394 * Newtprocs, void *NonLocals);

A68_225 * DBNATRN_find_typedec(A68_211  Dec, A68_321 * Closure, A68_311 * Env);

A_STATIC A68_VOID  KBNATRN_do_type(A68_394 * Newtprocs, void *NonLocals);

A68_231 * UBNATRN_find_constdec(A68_226  Dec, A68_321 * Closure, A68_311 * Env);

A_STATIC A68_VOID  BCNATRN_do_const(A68_394 * Newtprocs, void *NonLocals);

A68_INT  KCNATRN_findnewfnno(A68_192 * Fg, A68_316  New);

A68_308 * WCNATRN_translate_fndec(A68_308 * Fdec, A68_311 * Old, A68_311 * New);

A_STATIC A68_VOID  ADNATRN_do_fdec(A68_394 * Newtprocs, void *NonLocals);

A68_308 * IDNATRN_find_fndec(A68_263  Dec, A68_321 * Closure, A68_311 * Env);

A_STATIC A68_VOID  PDNATRN_do_fdec(A68_394 * Newtprocs, void *NonLocals);

A68_VOID  XDNATRN_simplify_formula(A68_194  Form, A68_194  *ReturnedValue);

A68_VOID  GFNATRN_tstr_size(A68_213 * Tstr, A68_194  *ReturnedValue);

A_STATIC A68_VOID  RFNATRN_trim(A68_210  T, A68_194  F, A68_194  S, A68_311 * Env, A68_210  *ReturnedValue);

A_STATIC A68_213 * XFNATRN_trimst(A68_213 * St, A68_INT  F, A68_INT  Size, void *NonLocals);

A_STATIC A68_BOOL  DINATRN_equal_formula(A68_194  F1, A68_194  F2);

A_STATIC A68_VOID  KJNATRN_uif_type(A68_194  Cond, A68_210  True, A68_210  False, A68_311 * Env, A68_210  *ReturnedValue);

A_STATIC A68_VOID  MJNATRN_flt_type(A68_210  *ReturnedValue);

A_STATIC A68_213 * WJNATRN_uif_tstr(A68_194  Cond, A68_213 * Ta, A68_213 * Tb, A68_311 * Env, void *NonLocals);

A_STATIC A68_VOID  XMNATRN_uconc_type(A68_BOOL  String, A68_INT  Sort, A68_210  Left, A68_210  Right, A68_311 * Env, A68_210  *ReturnedValue);

A_STATIC A68_212 * BNNATRN_make_trow(A68_210  T, void *NonLocals);

A_STATIC A68_VOID  IPNATRN_coerce_type(A68_210  Type, A68_INT  Sort, A68_BOOL  Namedoutput, A68_311 * Env, A68_361  *ReturnedValue);

A_STATIC A68_VOID  MPNATRN_basic_type(A68_210  Ty, A68_361  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZPNATRN_coerce_tstr(A68_213 * St, A68_360  *ReturnedValue, void *NonLocals);

A68_VOID  ISNATRN_type_size(A68_210  T, A68_311 * Env, A68_194  *ReturnedValue);

A68_INT  DTNATRN_names_size(A68_273 * Ns);

A68_VOID  JTNATRN_names_type(A68_273 * Ns, A68_308 * Fdec, A68_210  *ReturnedValue);

A68_INT  WTNATRN_names_index(A68_273 * Ns, A68_INT  Nameno);

A68_INT  EUNATRN_uportname_index(A68_241 * Up, A68_311 * Env);

A68_214 * MUNATRN_fndec_tfn(A68_308 * Fdec);

A68_VOID  VUNATRN_unit_type(A68_232  U, A68_308 * Fdec, A68_311 * Env, A68_210  *ReturnedValue);

A_STATIC A68_213 * ZUNATRN_ustr_tstr(A68_247 * Uc, void *NonLocals);

A68_VOID  DDOATRN_simplify_type(A68_210  Type, A68_311 * Env, A68_210  *ReturnedValue);

A_STATIC A68_VOID  IDOATRN_simplify(A68_210  Type, A68_394 * Tprocs, A68_361  *ReturnedValue, void *NonLocals);

A68_BOOL  NEOATRN_check_types(A68_210  A, A68_210  B, A68_311 * Enva, A68_311 * Envb, A68_BOOL  Check_body);

A_STATIC A68_BOOL  UEOATRN_equal_typebody(A68_223  Ab, A68_223  Bb, A68_311 * Enva, A68_311 * Envb, void *NonLocals);

A_STATIC A68_BOOL  FGOATRN_equal_tnames(A68_INT  Atypeno, A68_INT  Btypeno, A68_311 * Enva, A68_311 * Envb, void *NonLocals);

A_STATIC A68_INT  XNMATRN_err(A68_VC  Error, void *NonLocals)
#define NL(x) (((YNMATRN_err *)NonLocals)->x)
{ 
A68_46  ZNMATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AOMATRN;  /* clause result */
A_PROC_ENTRY(err);
{ 
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(ZNMATRN,Error,A68_VC )),(WHAAOSI_user, A_HVEC(ZNMATRN,Error,A68_VC ),(NL(Msg)).nonlocals));
AOMATRN = 0;
} 
A_PROC_EXIT(err);
return( AOMATRN );
} 
#undef NL

A_STATIC A68_VOID  TUMATRN_new_typeno(A68_INT  Typeno, A68_472  *ReturnedValue, void *NonLocals)
#define NL(x) (((UUMATRN_new_typeno *)NonLocals)->x)
{ 
A68_314  VUMATRN;  /* OPERATORS - simple index */
A68_225 * WUMATRN_tdec;
A68_INT  XUMATRN;  /* clause result */
A68_INT  YUMATRN_newtypeno;
A68_472  ZUMATRN;  /* collateral clause result */
A68_472  AVMATRN;  /* clause result */
A_PROC_ENTRY(new_typeno);
 /* line 282: */
{ 
VUMATRN = (*(&(NL(Old)->Types))) ;
WUMATRN_tdec = (*(&A_VINDEX(VUMATRN,Typeno)));
 /* line 283: */
 /* line 284: */
if ( ((*(&(WUMATRN_tdec->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 285: */
 /* line 286: */
XUMATRN = VSMATRN_findnewtypeno((*(&(WUMATRN_tdec->Usage))), (*(&(NL(New)->Types))));
} 
else
{ 
XUMATRN = Typeno;
} 
YUMATRN_newtypeno = XUMATRN;
 /* line 287: */
ZUMATRN.I = YUMATRN_newtypeno;
 /* line 288: */
ZUMATRN.C = (YUMATRN_newtypeno!=Typeno);
AVMATRN = ZUMATRN;
} 
A_PROC_EXIT(new_typeno);
*ReturnedValue = (AVMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JYMATRN_anonymous(A68_185  A, A68_394 * Tp, A68_352  *ReturnedValue, void *NonLocals)
#define NL(x) (((KYMATRN_anonymous *)NonLocals)->x)
{ 
A68_352  LYMATRN;  /* clause result */
A68_352  MYMATRN;  /* avoid structure result */
 /* line 364: */
XQMATRN_translate_attr( A, Tp, NL(Oldenv), NL(Newenv), &MYMATRN );
LYMATRN = MYMATRN;
*ReturnedValue = (LYMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SYMATRN_anonymous(A68_194  F, A68_394 * Tp, A68_355  *ReturnedValue, void *NonLocals)
#define NL(x) (((TYMATRN_anonymous *)NonLocals)->x)
{ 
A68_355  UYMATRN;  /* clause result */
A68_355  VYMATRN;  /* avoid structure result */
 /* line 366: */
BSMATRN_translate_formula( F, Tp, NL(Oldenv), NL(Newenv), &VYMATRN );
UYMATRN = VYMATRN;
*ReturnedValue = (UYMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BZMATRN_anonymous(A68_210  T, A68_394 * Tp, A68_361  *ReturnedValue, void *NonLocals)
#define NL(x) (((CZMATRN_anonymous *)NonLocals)->x)
{ 
A68_361  DZMATRN;  /* clause result */
A68_361  EZMATRN;  /* avoid structure result */
 /* line 368: */
ITMATRN_translate_type( T, Tp, NL(Oldenv), NL(Newenv), &EZMATRN );
DZMATRN = EZMATRN;
*ReturnedValue = (DZMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KZMATRN_anonymous(A68_232  U, A68_394 * Tp, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((LZMATRN_anonymous *)NonLocals)->x)
{ 
A68_370  MZMATRN;  /* clause result */
A68_370  NZMATRN;  /* avoid structure result */
 /* line 370: */
 /* line 371: */
PUMATRN_translate_constunit( U, Tp, NL(Oldenv), NL(Newenv), &NZMATRN );
MZMATRN = NZMATRN;
*ReturnedValue = (MZMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CANATRN_do_attr(A68_394 * Newtprocs, void *NonLocals)
#define NL(x) (((DANATRN_do_attr *)NonLocals)->x)
{ 
A68_397  EANATRN;  /* CALL */
A68_312  FANATRN;  /* OPERATORS - simple index */
A68_INT  GANATRN;  /* YIELD */
A68_354  HANATRN;  /* avoid structure result */
A_PROC_ENTRY(do_attr);
 /* line 385: */
 /* line 386: */
EANATRN = (*(&(Newtprocs->Attrdec))) ;
FANATRN = (*(&(NL(ZZMATRN_oattr).Environ->Attrs))) ;
GANATRN = 1 ;
A_CALLPROC(EANATRN,((*(&A_VINDEX(FANATRN,GANATRN))), Newtprocs, &HANATRN),((*(&A_VINDEX(FANATRN,GANATRN))), Newtprocs, &HANATRN,(EANATRN).nonlocals));
(*NL(WZMATRN_adec)) = HANATRN.A;
A_PROC_EXIT(do_attr);
return;
} 
#undef NL

A_STATIC A68_VOID  TANATRN_do_int(A68_394 * Newtprocs, void *NonLocals)
#define NL(x) (((UANATRN_do_int *)NonLocals)->x)
{ 
A68_400  VANATRN;  /* CALL */
A68_313  WANATRN;  /* OPERATORS - simple index */
A68_INT  XANATRN;  /* YIELD */
A68_357  YANATRN;  /* avoid structure result */
A_PROC_ENTRY(do_int);
 /* line 403: */
 /* line 404: */
VANATRN = (*(&(Newtprocs->Intdec))) ;
WANATRN = (*(&(NL(QANATRN_oint).Environ->Ints))) ;
XANATRN = 1 ;
A_CALLPROC(VANATRN,((*(&A_VINDEX(WANATRN,XANATRN))), Newtprocs, &YANATRN),((*(&A_VINDEX(WANATRN,XANATRN))), Newtprocs, &YANATRN,(VANATRN).nonlocals));
(*NL(NANATRN_idec)) = YANATRN.I;
A_PROC_EXIT(do_int);
return;
} 
#undef NL

A_STATIC A68_VOID  KBNATRN_do_type(A68_394 * Newtprocs, void *NonLocals)
#define NL(x) (((LBNATRN_do_type *)NonLocals)->x)
{ 
A68_408  MBNATRN;  /* CALL */
A68_314  NBNATRN;  /* OPERATORS - simple index */
A68_INT  OBNATRN;  /* YIELD */
A68_365  PBNATRN;  /* avoid structure result */
A_PROC_ENTRY(do_type);
 /* line 420: */
 /* line 421: */
MBNATRN = (*(&(Newtprocs->Typedec))) ;
NBNATRN = (*(&(NL(HBNATRN_otype).Environ->Types))) ;
OBNATRN = 1 ;
A_CALLPROC(MBNATRN,((*(&A_VINDEX(NBNATRN,OBNATRN))), Newtprocs, &PBNATRN),((*(&A_VINDEX(NBNATRN,OBNATRN))), Newtprocs, &PBNATRN,(MBNATRN).nonlocals));
(*NL(EBNATRN_tdec)) = PBNATRN.T;
A_PROC_EXIT(do_type);
return;
} 
#undef NL

A_STATIC A68_VOID  BCNATRN_do_const(A68_394 * Newtprocs, void *NonLocals)
#define NL(x) (((CCNATRN_do_const *)NonLocals)->x)
{ 
A68_409  DCNATRN;  /* CALL */
A68_315  ECNATRN;  /* OPERATORS - simple index */
A68_INT  FCNATRN;  /* YIELD */
A68_366  GCNATRN;  /* avoid structure result */
A_PROC_ENTRY(do_const);
 /* line 438: */
 /* line 439: */
DCNATRN = (*(&(Newtprocs->Constdec))) ;
ECNATRN = (*(&(NL(YBNATRN_oconst).Environ->Consts))) ;
FCNATRN = 1 ;
A_CALLPROC(DCNATRN,((*(&A_VINDEX(ECNATRN,FCNATRN))), Newtprocs, &GCNATRN),((*(&A_VINDEX(ECNATRN,FCNATRN))), Newtprocs, &GCNATRN,(DCNATRN).nonlocals));
(*NL(VBNATRN_cdec)) = GCNATRN.Co;
A_PROC_EXIT(do_const);
return;
} 
#undef NL

A_STATIC A68_VOID  ADNATRN_do_fdec(A68_394 * Newtprocs, void *NonLocals)
#define NL(x) (((BDNATRN_do_fdec *)NonLocals)->x)
{ 
A68_434  CDNATRN;  /* CALL */
A68_391  DDNATRN;  /* avoid structure result */
A_PROC_ENTRY(do_fdec);
 /* line 469: */
CDNATRN = (*(&(Newtprocs->Fndec))) ;
A_CALLPROC(CDNATRN,(NL(Fdec), Newtprocs, &DDNATRN),(NL(Fdec), Newtprocs, &DDNATRN,(CDNATRN).nonlocals));
(*NL(XCNATRN_ans)) = DDNATRN.F;
A_PROC_EXIT(do_fdec);
return;
} 
#undef NL

A_STATIC A68_VOID  PDNATRN_do_fdec(A68_394 * Newtprocs, void *NonLocals)
#define NL(x) (((QDNATRN_do_fdec *)NonLocals)->x)
{ 
A68_434  RDNATRN;  /* CALL */
A68_316  SDNATRN;  /* OPERATORS - simple index */
A68_INT  TDNATRN;  /* YIELD */
A68_391  UDNATRN;  /* avoid structure result */
A_PROC_ENTRY(do_fdec);
 /* line 483: */
 /* line 484: */
RDNATRN = (*(&(Newtprocs->Fndec))) ;
SDNATRN = (*(&(NL(MDNATRN_ofn).Environ->Fns))) ;
TDNATRN = 1 ;
A_CALLPROC(RDNATRN,((*(&A_VINDEX(SDNATRN,TDNATRN))), Newtprocs, &UDNATRN),((*(&A_VINDEX(SDNATRN,TDNATRN))), Newtprocs, &UDNATRN,(RDNATRN).nonlocals));
(*NL(JDNATRN_fdec)) = UDNATRN.F;
A_PROC_EXIT(do_fdec);
return;
} 
#undef NL

A_STATIC A68_213 * XFNATRN_trimst(A68_213 * St, A68_INT  F, A68_INT  Size, void *NonLocals)
#define NL(x) (((YFNATRN_trimst *)NonLocals)->x)
{ 
A68_BOOL  ZFNATRN;  /* optbool result */
A68_213 * AGNATRN;  /* clause result */
A68_213  BGNATRN;  /* collateral clause result */
A68_213 * CGNATRN;  /* YIELD */
A_PROC_ENTRY(trimst);
 /* line 556: */
ZFNATRN = (St==GAAATRN_niltstr);
if ( ! ZFNATRN )
{ZFNATRN = (Size<=0);
}
if ( ! ZFNATRN )
{ZFNATRN = (F<=0);
}
 /* line 557: */
if ( ZFNATRN )
{ 
AGNATRN = GAAATRN_niltstr;
} 
else
{ 
if ( (F>1) )
{ 
 /* line 558: */
AGNATRN = A_CALLPROC(NL(WFNATRN_trimst),((*(&(St->Rest))), (F-1), Size),((*(&(St->Rest))), (F-1), Size,(NL(WFNATRN_trimst)).nonlocals));
} 
else
{ 
BGNATRN.Elem = (*(&(St->Elem)));
 /* line 559: */
BGNATRN.Rest = A_CALLPROC(NL(WFNATRN_trimst),((*(&(St->Rest))), F, (Size-1)),((*(&(St->Rest))), F, (Size-1),(NL(WFNATRN_trimst)).nonlocals));
CGNATRN = A_HEAP(A68_213 ) ;
(*CGNATRN) = BGNATRN ;
AGNATRN = CGNATRN;
} 
} 
A_PROC_EXIT(trimst);
return( AGNATRN );
} 
#undef NL

A_STATIC A68_VOID  MJNATRN_flt_type(A68_210  *ReturnedValue)
{ 
A68_210  PJNATRN;  /* clause result */
A68_210  QJNATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(flt_type);
{ 
NKDAOST_sysfault(OJNATRN);
PJNATRN = A_UNITE(QJNATRN,mode9,9,(&DIAATRN_tnull));
} 
A_PROC_EXIT(flt_type);
*ReturnedValue = (PJNATRN);
return;
} 
#undef NL

A_STATIC A68_213 * WJNATRN_uif_tstr(A68_194  Cond, A68_213 * Ta, A68_213 * Tb, A68_311 * Env, void *NonLocals)
#define NL(x) (((XJNATRN_uif_tstr *)NonLocals)->x)
{ 
A68_213 * YJNATRN;  /* clause result */
A68_210  ZJNATRN;  /* avoid structure result */
A68_210  AKNATRN_t;
A68_213  BKNATRN;  /* collateral clause result */
A68_213 * CKNATRN;  /* YIELD */
A_PROC_ENTRY(uif_tstr);
 /* line 649: */
 /* line 650: */
 /* line 651: */
if ( (Ta==GAAATRN_niltstr) )
{ 
YJNATRN = GAAATRN_niltstr;
} 
else
{ 
KJNATRN_uif_type( Cond, (*(&(Ta->Elem))), (*(&(Tb->Elem))), Env, &ZJNATRN );
AKNATRN_t = ZJNATRN;
 /* line 652: */
BKNATRN.Elem = AKNATRN_t;
 /* line 653: */
BKNATRN.Rest = A_CALLPROC(NL(VJNATRN_uif_tstr),(Cond, (*(&(Ta->Rest))), (*(&(Tb->Rest))), Env),(Cond, (*(&(Ta->Rest))), (*(&(Tb->Rest))), Env,(NL(VJNATRN_uif_tstr)).nonlocals));
CKNATRN = A_HEAP(A68_213 ) ;
(*CKNATRN) = BKNATRN ;
YJNATRN = CKNATRN;
} 
A_PROC_EXIT(uif_tstr);
return( YJNATRN );
} 
#undef NL

A_STATIC A68_212 * BNNATRN_make_trow(A68_210  T, void *NonLocals)
#define NL(x) (((CNNATRN_make_trow *)NonLocals)->x)
{ 
A68_210  DNNATRN;  /* united object - for case conformity */
A68_211 * ENNATRN_tn;
A68_314  FNNATRN;  /* OPERATORS - simple index */
A68_INT  GNNATRN;  /* YIELD */
A68_223  HNNATRN;  /* united object - for case conformity */
A68_219 * INNATRN_tv;
A68_212 * JNNATRN;  /* clause result */
A68_212  KNNATRN;  /* collateral clause result */
A68_194  LNNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * MNNATRN;  /* YIELD */
A68_210  NNNATRN;  /* OPERATORS - mode -> union mode */
A68_212 * ONNATRN;  /* YIELD */
A68_212 * PNNATRN_tr;
A68_213 * QNNATRN_tst;
A68_212  RNNATRN;  /* collateral clause result */
A68_194  SNNATRN;  /* avoid structure result */
A68_212 * TNNATRN;  /* YIELD */
A68_215 * UNNATRN_tb;
A68_216 * VNNATRN_tg;
A68_212  WNNATRN;  /* collateral clause result */
A68_212 * XNNATRN;  /* YIELD */
A_PROC_ENTRY(make_trow);
 /* line 714: */
 /* line 715: */
DNNATRN = T ;
switch ( DNNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
ENNATRN_tn = (DNNATRN.data.mode1);
 /* line 716: */
{ 
 /* line 717: */
FNNATRN = (*(&(NL(Env)->Types))) ;
GNNATRN = (*(&(ENNATRN_tn->Typeno))) ;
HNNATRN = (*(&((*(&A_VINDEX(FNNATRN,GNNATRN)))->Body))) ;
switch ( HNNATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
INNATRN_tv = (HNNATRN.data.mode3);
 /* line 718: */
JNNATRN = A_CALLPROC(NL(ANNATRN_make_trow),((*(&(INNATRN_tv->Tag)))),((*(&(INNATRN_tv->Tag))),(NL(ANNATRN_make_trow)).nonlocals));
break;
default: 
MNNATRN = NNMATRN_makefint(1) ;
KNNATRN.Size = A_UNITE(LNNATRN,mode1,1,MNNATRN);
 /* line 719: */
KNNATRN.Elem = A_UNITE(NNNATRN,mode1,1,ENNATRN_tn);
 /* line 720: */
 /* line 721: */
ONNATRN = A_HEAP(A68_212 ) ;
(*ONNATRN) = KNNATRN ;
JNNATRN = ONNATRN;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE194,MODE210)  */
PNNATRN_tr = (DNNATRN.data.mode2);
 /* line 722: */
JNNATRN = PNNATRN_tr;
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
QNNATRN_tst = (DNNATRN.data.mode3);
GFNATRN_tstr_size( QNNATRN_tst, &SNNATRN );
RNNATRN.Size = SNNATRN;
RNNATRN.Elem = (*(&(QNNATRN_tst->Elem)));
 /* line 723: */
TNNATRN = A_HEAP(A68_212 ) ;
(*TNNATRN) = RNNATRN ;
JNNATRN = TNNATRN;
break;
case 5: /* REF STRUCT(MODE210)  */
UNNATRN_tb = (DNNATRN.data.mode5);
 /* line 724: */
JNNATRN = A_CALLPROC(NL(ANNATRN_make_trow),((*(&(UNNATRN_tb->Type)))),((*(&(UNNATRN_tb->Type))),(NL(ANNATRN_make_trow)).nonlocals));
break;
case 6: /* REF STRUCT(MODE194,MODE210)  */
VNNATRN_tg = (DNNATRN.data.mode6);
WNNATRN.Size = (*(&(VNNATRN_tg->Size)));
 /* line 725: */
WNNATRN.Elem = (*(&(VNNATRN_tg->Char)));
XNNATRN = A_HEAP(A68_212 ) ;
(*XNNATRN) = WNNATRN ;
JNNATRN = XNNATRN;
break;
default: 
NKDAOST_sysfault(ZNNATRN);
 /* line 726: */
JNNATRN = (A68_212 *)A68_NIL;
break;
} 
A_PROC_EXIT(make_trow);
return( JNNATRN );
} 
#undef NL

A_STATIC A68_VOID  MPNATRN_basic_type(A68_210  Ty, A68_361  *ReturnedValue, void *NonLocals)
#define NL(x) (((NPNATRN_basic_type *)NonLocals)->x)
{ 
A68_BOOL  OPNATRN;  /* optbool result */
A68_361  PPNATRN;  /* collateral clause result */
A68_210  QPNATRN;  /* OPERATORS - mode -> union mode */
A68_361  RPNATRN;  /* clause result */
A68_361  SPNATRN;  /* collateral clause result */
A68_BOOL  TPNATRN;  /* optbool result */
A68_361  UPNATRN;  /* collateral clause result */
A68_210  VPNATRN;  /* OPERATORS - mode -> union mode */
A68_361  WPNATRN;  /* collateral clause result */
A_PROC_ENTRY(basic_type);
 /* line 756: */
 /* line 757: */
if ( !NL(Namedoutput) )
{ 
OPNATRN = (NL(Sort)==LKAATRN_usink);
if ( ! OPNATRN )
{ /* line 758: */
OPNATRN = (NL(Sort)==NKAATRN_uiosink);
}
if ( OPNATRN )
{ 
PPNATRN.T = A_UNITE(QPNATRN,mode9,9,(&DIAATRN_tnull));
 /* line 759: */
PPNATRN.C = A68_TRUE;
RPNATRN = PPNATRN;
} 
else
{ 
SPNATRN.T = Ty;
 /* line 760: */
 /* line 761: */
SPNATRN.C = A68_FALSE;
RPNATRN = SPNATRN;
} 
} 
else
{ 
TPNATRN = (NL(Sort)==KKAATRN_usource);
if ( ! TPNATRN )
{ /* line 762: */
TPNATRN = (NL(Sort)==MKAATRN_uiosource);
}
if ( TPNATRN )
{ 
UPNATRN.T = A_UNITE(VPNATRN,mode9,9,(&DIAATRN_tnull));
 /* line 763: */
UPNATRN.C = A68_TRUE;
RPNATRN = UPNATRN;
} 
else
{ 
WPNATRN.T = Ty;
 /* line 764: */
 /* line 765: */
WPNATRN.C = A68_FALSE;
RPNATRN = WPNATRN;
} 
} 
A_PROC_EXIT(basic_type);
*ReturnedValue = (RPNATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPNATRN_coerce_tstr(A68_213 * St, A68_360  *ReturnedValue, void *NonLocals)
#define NL(x) (((AQNATRN_coerce_tstr *)NonLocals)->x)
{ 
A68_360  BQNATRN;  /* collateral clause result */
A68_360  CQNATRN;  /* clause result */
A68_361  DQNATRN;  /* avoid structure result */
A68_361  EQNATRN_t;
A68_360  FQNATRN;  /* avoid structure result */
A68_360  GQNATRN_tsc;
A68_BOOL  HQNATRN;  /* optbool result */
A68_360  IQNATRN;  /* collateral clause result */
A68_213  JQNATRN;  /* collateral clause result */
A68_213 * KQNATRN;  /* YIELD */
A68_360  LQNATRN;  /* collateral clause result */
A_PROC_ENTRY(coerce_tstr);
 /* line 768: */
 /* line 769: */
if ( (St==GAAATRN_niltstr) )
{ 
BQNATRN.T = St;
 /* line 770: */
BQNATRN.C = A68_FALSE;
CQNATRN = BQNATRN;
} 
else
{ 
IPNATRN_coerce_type( (*(&(St->Elem))), NL(Sort), NL(Namedoutput), NL(Env), &DQNATRN );
EQNATRN_t = DQNATRN;
 /* line 771: */
A_CALLPROC(NL(YPNATRN_coerce_tstr),((*(&(St->Rest))), &FQNATRN),((*(&(St->Rest))), &FQNATRN,(NL(YPNATRN_coerce_tstr)).nonlocals));
GQNATRN_tsc = FQNATRN;
 /* line 772: */
 /* line 773: */
HQNATRN = EQNATRN_t.C;
if ( ! HQNATRN )
{HQNATRN = GQNATRN_tsc.C;
}
if ( HQNATRN )
{ 
JQNATRN.Elem = EQNATRN_t.T;
JQNATRN.Rest = GQNATRN_tsc.T;
KQNATRN = A_HEAP(A68_213 ) ;
(*KQNATRN) = JQNATRN ;
IQNATRN.T = KQNATRN;
 /* line 774: */
IQNATRN.C = A68_TRUE;
CQNATRN = IQNATRN;
} 
else
{ 
LQNATRN.T = St;
 /* line 775: */
 /* line 776: */
LQNATRN.C = A68_FALSE;
CQNATRN = LQNATRN;
} 
} 
A_PROC_EXIT(coerce_tstr);
*ReturnedValue = (CQNATRN);
return;
} 
#undef NL

A_STATIC A68_213 * ZUNATRN_ustr_tstr(A68_247 * Uc, void *NonLocals)
#define NL(x) (((AVNATRN_ustr_tstr *)NonLocals)->x)
{ 
A68_213 * BVNATRN;  /* clause result */
A68_210  CVNATRN;  /* avoid structure result */
A68_210  DVNATRN_t;
A68_213  EVNATRN;  /* collateral clause result */
A68_213 * FVNATRN;  /* YIELD */
A_PROC_ENTRY(ustr_tstr);
 /* line 894: */
 /* line 895: */
 /* line 896: */
if ( (Uc==IAAATRN_nilustr) )
{ 
BVNATRN = GAAATRN_niltstr;
} 
else
{ 
VUNATRN_unit_type( (*(&(Uc->Elem))), NL(Fdec), NL(Env), &CVNATRN );
DVNATRN_t = CVNATRN;
 /* line 897: */
EVNATRN.Elem = DVNATRN_t;
 /* line 898: */
EVNATRN.Rest = A_CALLPROC(NL(YUNATRN_ustr_tstr),((*(&(Uc->Rest)))),((*(&(Uc->Rest))),(NL(YUNATRN_ustr_tstr)).nonlocals));
FVNATRN = A_HEAP(A68_213 ) ;
(*FVNATRN) = EVNATRN ;
BVNATRN = FVNATRN;
} 
A_PROC_EXIT(ustr_tstr);
return( BVNATRN );
} 
#undef NL

A_STATIC A68_VOID  IDOATRN_simplify(A68_210  Type, A68_394 * Tprocs, A68_361  *ReturnedValue, void *NonLocals)
#define NL(x) (((JDOATRN_simplify *)NonLocals)->x)
{ 
A68_210  KDOATRN;  /* united object - for case conformity */
A68_211 * LDOATRN_tn;
A68_314  MDOATRN;  /* OPERATORS - simple index */
A68_INT  NDOATRN;  /* YIELD */
A68_225 * ODOATRN_typedec;
A68_223  PDOATRN;  /* united object - for case conformity */
A68_219 * QDOATRN_tag;
A68_361  RDOATRN;  /* collateral clause result */
A68_361  SDOATRN;  /* avoid structure result */
A68_361  TDOATRN;  /* clause result */
A68_361  UDOATRN;  /* collateral clause result */
A68_215 * VDOATRN_tb;
A68_361  WDOATRN;  /* avoid structure result */
A68_361  XDOATRN_tc;
A68_361  YDOATRN;  /* collateral clause result */
A68_404  ZDOATRN;  /* CALL */
A68_361  AEOATRN;  /* avoid structure result */
A_PROC_ENTRY(simplify);
 /* line 1031: */
 /* line 1032: */
KDOATRN = Type ;
switch ( KDOATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LDOATRN_tn = (KDOATRN.data.mode1);
 /* line 1033: */
{ 
MDOATRN = (*(&(NL(Env)->Types))) ;
NDOATRN = (*(&(LDOATRN_tn->Typeno))) ;
ODOATRN_typedec = (*(&A_VINDEX(MDOATRN,NDOATRN)));
 /* line 1034: */
 /* line 1035: */
PDOATRN = (*(&(ODOATRN_typedec->Body))) ;
switch ( PDOATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
QDOATRN_tag = (PDOATRN.data.mode3);
A_CALLPROC(NL(HDOATRN_simplify),((*(&(QDOATRN_tag->Tag))), Tprocs, &SDOATRN),((*(&(QDOATRN_tag->Tag))), Tprocs, &SDOATRN,(NL(HDOATRN_simplify)).nonlocals));
RDOATRN.T = SDOATRN.T;
 /* line 1036: */
RDOATRN.C = A68_TRUE;
TDOATRN = RDOATRN;
break;
default: 
UDOATRN.T = Type;
 /* line 1037: */
 /* line 1038: */
 /* line 1039: */
UDOATRN.C = A68_FALSE;
TDOATRN = UDOATRN;
break;
} 
} 
break;
case 5: /* REF STRUCT(MODE210)  */
VDOATRN_tb = (KDOATRN.data.mode5);
 /* line 1040: */
{ 
A_CALLPROC(NL(HDOATRN_simplify),((*(&(VDOATRN_tb->Type))), Tprocs, &WDOATRN),((*(&(VDOATRN_tb->Type))), Tprocs, &WDOATRN,(NL(HDOATRN_simplify)).nonlocals));
XDOATRN_tc = WDOATRN;
 /* line 1041: */
YDOATRN.T = XDOATRN_tc.T;
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
YDOATRN.C = A68_TRUE;
TDOATRN = YDOATRN;
} 
break;
default: 
 /* line 1045: */
ZDOATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(ZDOATRN,(Type, Tprocs, &AEOATRN),(Type, Tprocs, &AEOATRN,(ZDOATRN).nonlocals));
TDOATRN = AEOATRN;
break;
} 
A_PROC_EXIT(simplify);
*ReturnedValue = (TDOATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  UEOATRN_equal_typebody(A68_223  Ab, A68_223  Bb, A68_311 * Enva, A68_311 * Envb, void *NonLocals)
#define NL(x) (((VEOATRN_equal_typebody *)NonLocals)->x)
{ 
A68_223  WEOATRN;  /* united object - for case conformity */
A68_223  ZEOATRN;  /* united object - for case conformity */
A68_224  AFOATRN_av;
A68_223  BFOATRN;  /* united object - for case conformity */
A68_224  CFOATRN_bv;
A68_BOOL  DFOATRN_eq;
A68_221 * EFOATRN_balt;
A68_221 * FFOATRN_aalt;
A68_INT  GFOATRN;  /* forall loop counter */
A68_BOOL  HFOATRN;  /* optbool result */
A68_BOOL  IFOATRN;  /* clause result */
A68_222 * JFOATRN_an;
A68_223  KFOATRN;  /* united object - for case conformity */
A68_222 * LFOATRN_bn;
A68_BOOL  MFOATRN;  /* optbool result */
A68_220 * NFOATRN_ac;
A68_223  OFOATRN;  /* united object - for case conformity */
A68_220 * PFOATRN_bc;
A68_VC  QFOATRN_achars;
A68_VC  RFOATRN_bchars;
A68_BOOL  SFOATRN_equal;
A68_INT  TFOATRN_i;
A68_INT  UFOATRN;  /* to part of loop */
A68_219 * VFOATRN_at;
A_PROC_ENTRY(equal_typebody);
 /* line 1060: */
 /* line 1061: */
{ 
 /* line 1062: */
WEOATRN = Bb ;
switch ( WEOATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
NKDAOST_sysfault(YEOATRN);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1063: */
 /* line 1064: */
ZEOATRN = Ab ;
switch ( ZEOATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE221 */
AFOATRN_av = (ZEOATRN.data.mode1);
 /* line 1065: */
 /* line 1066: */
BFOATRN = Bb ;
switch ( BFOATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE221 */
CFOATRN_bv = (BFOATRN.data.mode1);
 /* line 1067: */
{ 
 /* line 1068: */
 /* line 1069: */
if ( (AFOATRN_av.upb==CFOATRN_bv.upb) )
{ 
DFOATRN_eq = A68_TRUE;
 /* line 1070: */
GFOATRN = CFOATRN_bv.upb -1;
if ( GFOATRN != AFOATRN_av.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
EFOATRN_balt = CFOATRN_bv.data;
FFOATRN_aalt = AFOATRN_av.data;
for (;GFOATRN-- >= 0;
(EFOATRN_balt++
,FFOATRN_aalt++
) )
{
 /* line 1071: */
if ( !(DFOATRN_eq) ) break;
 /* line 1072: */
HFOATRN = A_VC_EQ((*(&(FFOATRN_aalt->Altname))),(*(&(EFOATRN_balt->Altname))));
if ( HFOATRN )
{ /* line 1073: */
 /* line 1074: */
HFOATRN = NEOATRN_check_types((*(&(FFOATRN_aalt->Assoc))), (*(&(EFOATRN_balt->Assoc))), Enva, Envb, NL(Check_body));
}
DFOATRN_eq = HFOATRN;
}
 /* line 1075: */
 /* line 1076: */
 /* line 1077: */
IFOATRN = DFOATRN_eq;
} 
else
{ 
 /* line 1078: */
 /* line 1079: */
 /* line 1080: */
IFOATRN = A68_FALSE;
} 
} 
break;
default: 
 /* line 1081: */
 /* line 1082: */
IFOATRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE26,MODE209)  */
JFOATRN_an = (ZEOATRN.data.mode2);
 /* line 1083: */
 /* line 1084: */
KFOATRN = Bb ;
switch ( KFOATRN.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,MODE209)  */
LFOATRN_bn = (KFOATRN.data.mode2);
 /* line 1085: */
 /* line 1086: */
MFOATRN = A_VC_EQ((*(&(JFOATRN_an->Tagname))),(*(&(LFOATRN_bn->Tagname))));
if ( MFOATRN )
{MFOATRN = (XOMATRN_int((*(&((&(JFOATRN_an->Range))->Lwb))))==XOMATRN_int((*(&((&(LFOATRN_bn->Range))->Lwb)))));
}
 /* line 1087: */
if ( MFOATRN )
{ /* line 1088: */
MFOATRN = (XOMATRN_int((*(&((&(JFOATRN_an->Range))->Upb))))==XOMATRN_int((*(&((&(LFOATRN_bn->Range))->Upb)))));
}
IFOATRN = MFOATRN;
break;
default: 
 /* line 1089: */
 /* line 1090: */
IFOATRN = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
NFOATRN_ac = (ZEOATRN.data.mode4);
 /* line 1091: */
 /* line 1092: */
OFOATRN = Bb ;
switch ( OFOATRN.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
PFOATRN_bc = (OFOATRN.data.mode4);
 /* line 1093: */
 /* line 1094: */
if ( A_VC_EQ((*(&(NFOATRN_ac->Tagname))),(*(&(PFOATRN_bc->Tagname)))) )
{ 
QFOATRN_achars = (*(&(NFOATRN_ac->Chars)));
 /* line 1095: */
RFOATRN_bchars = (*(&(PFOATRN_bc->Chars)));
 /* line 1096: */
SFOATRN_equal = (QFOATRN_achars.upb==RFOATRN_bchars.upb);
 /* line 1097: */
 /* line 1098: */
if ( SFOATRN_equal )
{ 
UFOATRN = QFOATRN_achars.upb;
for ( TFOATRN_i = 1;
TFOATRN_i <= UFOATRN;
TFOATRN_i += 1 )
{ 
 /* line 1099: */
if ( !(SFOATRN_equal) ) break;
SFOATRN_equal = ((*(&A_VINDEX(QFOATRN_achars,TFOATRN_i)))==(*(&A_VINDEX(RFOATRN_bchars,TFOATRN_i))));
}
 /* line 1100: */
} 
 /* line 1101: */
 /* line 1102: */
IFOATRN = SFOATRN_equal;
} 
else
{ 
 /* line 1103: */
 /* line 1104: */
IFOATRN = A68_FALSE;
} 
break;
default: 
 /* line 1105: */
 /* line 1106: */
IFOATRN = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(MODE210)  */
VFOATRN_at = (ZEOATRN.data.mode3);
{ 
NKDAOST_sysfault(XFOATRN);
 /* line 1107: */
IFOATRN = A68_FALSE;
} 
break;
default: 
NKDAOST_sysfault(ZFOATRN);
 /* line 1108: */
 /* line 1109: */
IFOATRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(equal_typebody);
return( IFOATRN );
} 
#undef NL

A_STATIC A68_BOOL  FGOATRN_equal_tnames(A68_INT  Atypeno, A68_INT  Btypeno, A68_311 * Enva, A68_311 * Envb, void *NonLocals)
#define NL(x) (((GGOATRN_equal_tnames *)NonLocals)->x)
{ 
A68_314  HGOATRN;  /* OPERATORS - simple index */
A68_225 * IGOATRN_at;
A68_314  JGOATRN;  /* OPERATORS - simple index */
A68_225 * KGOATRN_bt;
A68_BOOL  LGOATRN;  /* optbool result */
A68_BOOL  MGOATRN;  /* clause result */
A68_BOOL  NGOATRN;  /* optbool result */
A68_BOOL  OGOATRN;  /* optbool result */
A_PROC_ENTRY(equal_tnames);
 /* line 1112: */
 /* line 1113: */
{ 
HGOATRN = (*(&(Enva->Types))) ;
IGOATRN_at = (*(&A_VINDEX(HGOATRN,Atypeno)));
 /* line 1114: */
JGOATRN = (*(&(Envb->Types))) ;
KGOATRN_bt = (*(&A_VINDEX(JGOATRN,Btypeno)));
 /* line 1116: */
 /* line 1117: */
 /* line 1118: */
if ( NL(Check_body) )
{ 
 /* line 1119: */
if ( ((*(&(IGOATRN_at->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 1120: */
LGOATRN = ((*(&(KGOATRN_bt->Sort)))==OKAATRN_outerdec);
if ( LGOATRN )
{ /* line 1121: */
LGOATRN = ((*(&((*(&(IGOATRN_at->Usage)))->Closureno)))==(*(&((*(&(KGOATRN_bt->Usage)))->Closureno))));
}
if ( LGOATRN )
{ 
 /* line 1122: */
MGOATRN = A68_TRUE;
} 
else
{ 
 /* line 1123: */
NGOATRN = A_VC_EQ((*(&(IGOATRN_at->Typename))),(*(&(KGOATRN_bt->Typename))));
if ( NGOATRN )
{ /* line 1124: */
NGOATRN = A_CALLPROC(NL(TEOATRN_equal_typebody),((*(&(IGOATRN_at->Body))), (*(&(KGOATRN_bt->Body))), Enva, Envb),((*(&(IGOATRN_at->Body))), (*(&(KGOATRN_bt->Body))), Enva, Envb,(NL(TEOATRN_equal_typebody)).nonlocals));
}
 /* line 1125: */
MGOATRN = NGOATRN;
} 
} 
else
{ 
OGOATRN = ((*(&(IGOATRN_at->Sort)))==(*(&(KGOATRN_bt->Sort))));
if ( OGOATRN )
{ /* line 1126: */
OGOATRN = (Atypeno==Btypeno);
}
 /* line 1127: */
 /* line 1129: */
MGOATRN = OGOATRN;
} 
} 
else
{ 
 /* line 1130: */
if ( ((*(&(IGOATRN_at->Sort)))==(*(&(KGOATRN_bt->Sort)))) )
{ 
 /* line 1131: */
if ( ((*(&(IGOATRN_at->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 1132: */
MGOATRN = ((*(&((*(&(IGOATRN_at->Usage)))->Closureno)))==(*(&((*(&(KGOATRN_bt->Usage)))->Closureno))));
} 
else
{ 
 /* line 1133: */
 /* line 1134: */
MGOATRN = A_VC_EQ((*(&(IGOATRN_at->Typename))),(*(&(KGOATRN_bt->Typename))));
} 
} 
else
{ 
 /* line 1135: */
 /* line 1136: */
 /* line 1137: */
MGOATRN = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(equal_tnames);
return( MGOATRN );
} 
#undef NL

A68_195 * NNMATRN_makefint(A68_INT  Int)
{ 
A68_195  ONMATRN;  /* collateral clause result */
A68_195 * PNMATRN;  /* clause result */
A68_195 * QNMATRN;  /* YIELD */
A_PROC_ENTRY(makefint);
ONMATRN.Int = Int;
ONMATRN.Text = TTCAOST_nullid;
QNMATRN = A_HEAP(A68_195 ) ;
(*QNMATRN) = ONMATRN ;
PNMATRN = QNMATRN;
A_PROC_EXIT(makefint);
return( PNMATRN );
} 
#undef NL

A68_INT  TNMATRN_formula_int(A68_194  Form, A68_97  Msg)
{ 
A68_446  WNMATRN_err;   /* proc value of non-global proc */
A68_194  BOMATRN;  /* united object - for case conformity */
A68_195 * COMATRN_i;
A68_INT  DOMATRN;  /* clause result */
A_PROC_ENTRY(formula_int);
 /* line 84: */
 /* line 85: */
{ 
A_CLOSURE( WNMATRN_err, XNMATRN_err, YNMATRN_err );
(( YNMATRN_err * ) ( WNMATRN_err.nonlocals )) -> Msg = Msg;
 /* line 87: */
 /* line 88: */
BOMATRN = Form ;
switch ( BOMATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
COMATRN_i = (BOMATRN.data.mode1);
 /* line 89: */
DOMATRN = (*(&(COMATRN_i->Int)));
break;
case 2: /* REF STRUCT(INT,MODE194,MODE194)  */
 /* line 90: */
DOMATRN = A_CALLPROC(WNMATRN_err,(FOMATRN),(FOMATRN,(WNMATRN_err).nonlocals));
break;
case 3: /* REF STRUCT(INT)  */
 /* line 91: */
DOMATRN = A_CALLPROC(WNMATRN_err,(HOMATRN),(HOMATRN,(WNMATRN_err).nonlocals));
break;
case 4: /* REF STRUCT(INT)  */
 /* line 92: */
DOMATRN = A_CALLPROC(WNMATRN_err,(JOMATRN),(JOMATRN,(WNMATRN_err).nonlocals));
break;
case 5: /* REF STRUCT(MODE194,INT,MODE194)  */
 /* line 93: */
DOMATRN = A_CALLPROC(WNMATRN_err,(LOMATRN),(LOMATRN,(WNMATRN_err).nonlocals));
break;
case 6: /* REF STRUCT(INT,MODE194)  */
 /* line 94: */
DOMATRN = A_CALLPROC(WNMATRN_err,(NOMATRN),(NOMATRN,(WNMATRN_err).nonlocals));
break;
case 7: /* REF STRUCT(MODE194,MODE194,MODE194)  */
 /* line 95: */
DOMATRN = A_CALLPROC(WNMATRN_err,(POMATRN),(POMATRN,(WNMATRN_err).nonlocals));
break;
case 8: /* REF STRUCT(MODE194)  */
 /* line 96: */
DOMATRN = A_CALLPROC(WNMATRN_err,(ROMATRN),(ROMATRN,(WNMATRN_err).nonlocals));
break;
case 9: /* REF STRUCT(INT)  */
 /* line 97: */
DOMATRN = A_CALLPROC(WNMATRN_err,(TOMATRN),(TOMATRN,(WNMATRN_err).nonlocals));
break;
case 10: /* REF STRUCT(INT)  */
 /* line 98: */
 /* line 99: */
DOMATRN = A_CALLPROC(WNMATRN_err,(VOMATRN),(VOMATRN,(WNMATRN_err).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(formula_int);
return( DOMATRN );
} 
#undef NL

A68_INT  XOMATRN_int(A68_194  Form)
{ 
A68_INT  YOMATRN;  /* clause result */
A_PROC_ENTRY(int);
YOMATRN = TNMATRN_formula_int(Form, ZLBAOSI_global_msg);
A_PROC_EXIT(int);
return( YOMATRN );
} 
#undef NL

A68_191 * APMATRN_get_outerattr(A68_317  O)
{ 
A68_191 * DPMATRN;  /* clause result */
A68_312  EPMATRN;  /* OPERATORS - simple index */
A68_INT  FPMATRN;  /* YIELD */
A_PROC_ENTRY(get_outerattr);
 /* line 108: */
 /* line 109: */
{ 
if ( (O.Sort!=RKAATRN_outerattr) )
{ 
NKDAOST_sysfault(CPMATRN);
} 
 /* line 110: */
 /* line 111: */
EPMATRN = (*(&(O.Environ->Attrs))) ;
FPMATRN = 1 ;
DPMATRN = (*(&A_VINDEX(EPMATRN,FPMATRN)));
} 
A_PROC_EXIT(get_outerattr);
return( DPMATRN );
} 
#undef NL

A68_207 * HPMATRN_get_outerint(A68_317  O)
{ 
A68_207 * KPMATRN;  /* clause result */
A68_313  LPMATRN;  /* OPERATORS - simple index */
A68_INT  MPMATRN;  /* YIELD */
A_PROC_ENTRY(get_outerint);
 /* line 114: */
 /* line 115: */
{ 
if ( (O.Sort!=SKAATRN_outerint) )
{ 
NKDAOST_sysfault(JPMATRN);
} 
 /* line 116: */
 /* line 117: */
LPMATRN = (*(&(O.Environ->Ints))) ;
MPMATRN = 1 ;
KPMATRN = (*(&A_VINDEX(LPMATRN,MPMATRN)));
} 
A_PROC_EXIT(get_outerint);
return( KPMATRN );
} 
#undef NL

A68_225 * OPMATRN_get_outertype(A68_317  O)
{ 
A68_225 * RPMATRN;  /* clause result */
A68_314  SPMATRN;  /* OPERATORS - simple index */
A68_INT  TPMATRN;  /* YIELD */
A_PROC_ENTRY(get_outertype);
 /* line 120: */
 /* line 121: */
{ 
if ( (O.Sort!=TKAATRN_outertype) )
{ 
NKDAOST_sysfault(QPMATRN);
} 
 /* line 122: */
 /* line 123: */
SPMATRN = (*(&(O.Environ->Types))) ;
TPMATRN = 1 ;
RPMATRN = (*(&A_VINDEX(SPMATRN,TPMATRN)));
} 
A_PROC_EXIT(get_outertype);
return( RPMATRN );
} 
#undef NL

A68_231 * VPMATRN_get_outerconst(A68_317  O)
{ 
A68_231 * YPMATRN;  /* clause result */
A68_315  ZPMATRN;  /* OPERATORS - simple index */
A68_INT  AQMATRN;  /* YIELD */
A_PROC_ENTRY(get_outerconst);
 /* line 126: */
 /* line 127: */
{ 
if ( (O.Sort!=UKAATRN_outerconst) )
{ 
NKDAOST_sysfault(XPMATRN);
} 
 /* line 128: */
 /* line 129: */
ZPMATRN = (*(&(O.Environ->Consts))) ;
AQMATRN = 1 ;
YPMATRN = (*(&A_VINDEX(ZPMATRN,AQMATRN)));
} 
A_PROC_EXIT(get_outerconst);
return( YPMATRN );
} 
#undef NL

A68_308 * CQMATRN_get_outerfn(A68_317  O)
{ 
A68_308 * FQMATRN;  /* clause result */
A68_316  GQMATRN;  /* OPERATORS - simple index */
A68_INT  HQMATRN;  /* YIELD */
A_PROC_ENTRY(get_outerfn);
 /* line 132: */
 /* line 133: */
{ 
if ( (O.Sort!=VKAATRN_outerfn) )
{ 
NKDAOST_sysfault(EQMATRN);
} 
 /* line 134: */
 /* line 135: */
GQMATRN = (*(&(O.Environ->Fns))) ;
HQMATRN = 1 ;
FQMATRN = (*(&A_VINDEX(GQMATRN,HQMATRN)));
} 
A_PROC_EXIT(get_outerfn);
return( FQMATRN );
} 
#undef NL

A68_INT  KQMATRN_findnewattrno(A68_192 * Ug, A68_312  New)
{ 
A68_INT  NQMATRN_attrno;
A68_INT  OQMATRN_i;
A68_INT  PQMATRN;  /* to part of loop */
A68_191 * QQMATRN_adec;
A68_BOOL  RQMATRN;  /* optbool result */
A68_INT  SQMATRN;  /* clause result */
A_PROC_ENTRY(findnewattrno);
 /* line 145: */
 /* line 147: */
{ 
if ( (Ug==CBAATRN_nilusage) )
{ 
NKDAOST_sysfault(MQMATRN);
} 
 /* line 148: */
NQMATRN_attrno = 0;
 /* line 149: */
PQMATRN = New.upb;
for ( OQMATRN_i = 1;
OQMATRN_i <= PQMATRN;
OQMATRN_i += 1 )
{ 
 /* line 150: */
if ( !((NQMATRN_attrno==0)) ) break;
QQMATRN_adec = (*(&A_VINDEX(New,OQMATRN_i)));
 /* line 151: */
RQMATRN = (QQMATRN_adec!=UAAATRN_nilattrdec);
if ( RQMATRN )
{ /* line 152: */
RQMATRN = ((*(&(QQMATRN_adec->Usage)))!=CBAATRN_nilusage);
}
if ( RQMATRN )
{ /* line 153: */
RQMATRN = ((*(&((*(&(QQMATRN_adec->Usage)))->Closureno)))==(*(&(Ug->Closureno))));
}
if ( RQMATRN )
{ 
 /* line 154: */
 /* line 155: */
NQMATRN_attrno = OQMATRN_i;
} 
}
 /* line 156: */
 /* line 157: */
SQMATRN = NQMATRN_attrno;
} 
A_PROC_EXIT(findnewattrno);
return( SQMATRN );
} 
#undef NL

A_STATIC A68_VOID  XQMATRN_translate_attr(A68_185  A, A68_394 * Tp, A68_311 * Old, A68_311 * New, A68_352  *ReturnedValue)
{ 
A68_185  YQMATRN;  /* united object - for case conformity */
A68_186 * ZQMATRN_an;
A68_312  ARMATRN;  /* OPERATORS - simple index */
A68_INT  BRMATRN;  /* YIELD */
A68_191 * CRMATRN_adec;
A68_INT  DRMATRN_i;
A68_352  ERMATRN;  /* collateral clause result */
A68_185  FRMATRN;  /* OPERATORS - mode -> union mode */
A68_186 * GRMATRN;  /* YIELD */
A68_352  HRMATRN;  /* clause result */
A68_352  IRMATRN;  /* collateral clause result */
A68_352  JRMATRN;  /* collateral clause result */
A68_395  KRMATRN;  /* CALL */
A68_352  LRMATRN;  /* avoid structure result */
A_PROC_ENTRY(translate_attr);
 /* line 160: */
 /* line 161: */
{ 
 /* line 162: */
YQMATRN = A ;
switch ( YQMATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
ZQMATRN_an = (YQMATRN.data.mode1);
 /* line 163: */
{ 
ARMATRN = (*(&(Old->Attrs))) ;
BRMATRN = (*(&(ZQMATRN_an->Attrno))) ;
CRMATRN_adec = (*(&A_VINDEX(ARMATRN,BRMATRN)));
 /* line 164: */
 /* line 165: */
if ( ((*(&(CRMATRN_adec->Sort)))==OKAATRN_outerdec) )
{ 
DRMATRN_i = KQMATRN_findnewattrno((*(&(CRMATRN_adec->Usage))), (*(&(New->Attrs))));
 /* line 166: */
 /* line 167: */
if ( (DRMATRN_i!=(*(&(ZQMATRN_an->Attrno)))) )
{ 
GRMATRN = UDAATRN_makeattrname(DRMATRN_i) ;
ERMATRN.A = A_UNITE(FRMATRN,mode1,1,GRMATRN);
 /* line 168: */
ERMATRN.C = A68_TRUE;
HRMATRN = ERMATRN;
} 
else
{ 
IRMATRN.A = A;
 /* line 169: */
 /* line 170: */
IRMATRN.C = A68_FALSE;
HRMATRN = IRMATRN;
} 
} 
else
{ 
JRMATRN.A = A;
 /* line 171: */
 /* line 172: */
 /* line 173: */
JRMATRN.C = A68_FALSE;
HRMATRN = JRMATRN;
} 
} 
break;
default: 
 /* line 174: */
 /* line 175: */
KRMATRN = (*(&(AWLATRN_nulltprocs->Attr))) ;
A_CALLPROC(KRMATRN,(A, Tp, &LRMATRN),(A, Tp, &LRMATRN,(KRMATRN).nonlocals));
HRMATRN = LRMATRN;
break;
} 
} 
A_PROC_EXIT(translate_attr);
*ReturnedValue = (HRMATRN);
return;
} 
#undef NL

A68_INT  ORMATRN_findnewintno(A68_192 * Ug, A68_313  New)
{ 
A68_INT  RRMATRN_intno;
A68_INT  SRMATRN_i;
A68_INT  TRMATRN;  /* to part of loop */
A68_207 * URMATRN_idec;
A68_BOOL  VRMATRN;  /* optbool result */
A68_INT  WRMATRN;  /* clause result */
A_PROC_ENTRY(findnewintno);
 /* line 182: */
 /* line 184: */
{ 
if ( (Ug==CBAATRN_nilusage) )
{ 
NKDAOST_sysfault(QRMATRN);
} 
 /* line 185: */
RRMATRN_intno = 0;
 /* line 186: */
TRMATRN = New.upb;
for ( SRMATRN_i = 1;
SRMATRN_i <= TRMATRN;
SRMATRN_i += 1 )
{ 
 /* line 187: */
if ( !((RRMATRN_intno==0)) ) break;
URMATRN_idec = (*(&A_VINDEX(New,SRMATRN_i)));
 /* line 188: */
VRMATRN = (URMATRN_idec!=VAAATRN_nilintdec);
if ( VRMATRN )
{ /* line 189: */
VRMATRN = ((*(&(URMATRN_idec->Usage)))!=CBAATRN_nilusage);
}
if ( VRMATRN )
{ /* line 190: */
VRMATRN = ((*(&((*(&(URMATRN_idec->Usage)))->Closureno)))==(*(&(Ug->Closureno))));
}
if ( VRMATRN )
{ 
 /* line 191: */
 /* line 192: */
RRMATRN_intno = SRMATRN_i;
} 
}
 /* line 193: */
 /* line 194: */
WRMATRN = RRMATRN_intno;
} 
A_PROC_EXIT(findnewintno);
return( WRMATRN );
} 
#undef NL

A_STATIC A68_VOID  BSMATRN_translate_formula(A68_194  F, A68_394 * Tprocs, A68_311 * Old, A68_311 * New, A68_355  *ReturnedValue)
{ 
A68_194  CSMATRN;  /* united object - for case conformity */
A68_198 * DSMATRN_fi;
A68_313  ESMATRN;  /* OPERATORS - simple index */
A68_INT  FSMATRN;  /* YIELD */
A68_207 * GSMATRN_idec;
A68_INT  HSMATRN_i;
A68_355  ISMATRN;  /* collateral clause result */
A68_194  JSMATRN;  /* OPERATORS - mode -> union mode */
A68_198 * KSMATRN;  /* YIELD */
A68_355  LSMATRN;  /* clause result */
A68_355  MSMATRN;  /* collateral clause result */
A68_355  NSMATRN;  /* collateral clause result */
A68_194  OSMATRN;  /* OPERATORS - mode -> union mode */
A68_203 * PSMATRN;  /* YIELD */
A68_355  QSMATRN;  /* collateral clause result */
A68_398  RSMATRN;  /* CALL */
A68_355  SSMATRN;  /* avoid structure result */
A_PROC_ENTRY(translate_formula);
 /* line 198: */
 /* line 199: */
CSMATRN = F ;
switch ( CSMATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
DSMATRN_fi = (CSMATRN.data.mode4);
{ 
ESMATRN = (*(&(Old->Ints))) ;
FSMATRN = (*(&(DSMATRN_fi->Intno))) ;
GSMATRN_idec = (*(&A_VINDEX(ESMATRN,FSMATRN)));
 /* line 200: */
 /* line 201: */
if ( ((*(&(GSMATRN_idec->Sort)))==OKAATRN_outerdec) )
{ 
HSMATRN_i = ORMATRN_findnewintno((*(&(GSMATRN_idec->Usage))), (*(&(New->Ints))));
 /* line 202: */
 /* line 203: */
if ( (HSMATRN_i!=(*(&(DSMATRN_fi->Intno)))) )
{ 
KSMATRN = OEAATRN_makefname(HSMATRN_i) ;
ISMATRN.F = A_UNITE(JSMATRN,mode4,4,KSMATRN);
 /* line 204: */
ISMATRN.C = A68_TRUE;
LSMATRN = ISMATRN;
} 
else
{ 
MSMATRN.F = F;
 /* line 205: */
 /* line 206: */
MSMATRN.C = A68_FALSE;
LSMATRN = MSMATRN;
} 
} 
else
{ 
 /* line 207: */
if ( ((*(&(GSMATRN_idec->Sort)))==QKAATRN_macpardec) )
{ 
PSMATRN = TEAATRN_makefmacpar((-1)) ;
NSMATRN.F = A_UNITE(OSMATRN,mode9,9,PSMATRN);
 /* line 208: */
NSMATRN.C = A68_TRUE;
LSMATRN = NSMATRN;
} 
else
{ 
QSMATRN.F = F;
 /* line 209: */
 /* line 210: */
 /* line 211: */
QSMATRN.C = A68_FALSE;
LSMATRN = QSMATRN;
} 
} 
} 
break;
default: 
 /* line 212: */
RSMATRN = (*(&(AWLATRN_nulltprocs->Formula))) ;
A_CALLPROC(RSMATRN,(F, Tprocs, &SSMATRN),(F, Tprocs, &SSMATRN,(RSMATRN).nonlocals));
LSMATRN = SSMATRN;
break;
} 
A_PROC_EXIT(translate_formula);
*ReturnedValue = (LSMATRN);
return;
} 
#undef NL

A68_INT  VSMATRN_findnewtypeno(A68_192 * Tg, A68_314  New)
{ 
A68_INT  YSMATRN_typeno;
A68_INT  ZSMATRN_i;
A68_INT  ATMATRN;  /* to part of loop */
A68_225 * BTMATRN_tdec;
A68_BOOL  CTMATRN;  /* optbool result */
A68_INT  DTMATRN;  /* clause result */
A_PROC_ENTRY(findnewtypeno);
 /* line 221: */
 /* line 223: */
{ 
if ( (Tg==CBAATRN_nilusage) )
{ 
NKDAOST_sysfault(XSMATRN);
} 
 /* line 224: */
YSMATRN_typeno = 0;
 /* line 225: */
ATMATRN = New.upb;
for ( ZSMATRN_i = 1;
ZSMATRN_i <= ATMATRN;
ZSMATRN_i += 1 )
{ 
 /* line 226: */
if ( !((YSMATRN_typeno==0)) ) break;
BTMATRN_tdec = (*(&A_VINDEX(New,ZSMATRN_i)));
 /* line 227: */
CTMATRN = (BTMATRN_tdec!=WAAATRN_niltypedec);
if ( CTMATRN )
{ /* line 228: */
CTMATRN = ((*(&(BTMATRN_tdec->Usage)))!=CBAATRN_nilusage);
}
if ( CTMATRN )
{ /* line 229: */
CTMATRN = ((*(&((*(&(BTMATRN_tdec->Usage)))->Closureno)))==(*(&(Tg->Closureno))));
}
if ( CTMATRN )
{ 
 /* line 230: */
 /* line 231: */
YSMATRN_typeno = ZSMATRN_i;
} 
}
 /* line 232: */
 /* line 233: */
DTMATRN = YSMATRN_typeno;
} 
A_PROC_EXIT(findnewtypeno);
return( DTMATRN );
} 
#undef NL

A_STATIC A68_VOID  ITMATRN_translate_type(A68_210  T, A68_394 * Tprocs, A68_311 * Old, A68_311 * New, A68_361  *ReturnedValue)
{ 
A68_210  JTMATRN;  /* united object - for case conformity */
A68_211 * KTMATRN_tn;
A68_314  LTMATRN;  /* OPERATORS - simple index */
A68_INT  MTMATRN;  /* YIELD */
A68_225 * NTMATRN_tdec;
A68_INT  OTMATRN_i;
A68_361  PTMATRN;  /* collateral clause result */
A68_210  QTMATRN;  /* OPERATORS - mode -> union mode */
A68_211 * RTMATRN;  /* YIELD */
A68_361  STMATRN;  /* clause result */
A68_361  TTMATRN;  /* collateral clause result */
A68_361  UTMATRN;  /* collateral clause result */
A68_210  VTMATRN;  /* OPERATORS - mode -> union mode */
A68_203 * WTMATRN;  /* YIELD */
A68_361  XTMATRN;  /* collateral clause result */
A68_404  YTMATRN;  /* CALL */
A68_361  ZTMATRN;  /* avoid structure result */
A_PROC_ENTRY(translate_type);
 /* line 237: */
 /* line 238: */
{ 
 /* line 239: */
JTMATRN = T ;
switch ( JTMATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
KTMATRN_tn = (JTMATRN.data.mode1);
 /* line 240: */
{ 
LTMATRN = (*(&(Old->Types))) ;
MTMATRN = (*(&(KTMATRN_tn->Typeno))) ;
NTMATRN_tdec = (*(&A_VINDEX(LTMATRN,MTMATRN)));
 /* line 241: */
 /* line 242: */
if ( ((*(&(NTMATRN_tdec->Sort)))==OKAATRN_outerdec) )
{ 
OTMATRN_i = VSMATRN_findnewtypeno((*(&(NTMATRN_tdec->Usage))), (*(&(New->Types))));
 /* line 243: */
 /* line 244: */
if ( (OTMATRN_i!=(*(&(KTMATRN_tn->Typeno)))) )
{ 
RTMATRN = IFAATRN_maketname(OTMATRN_i) ;
PTMATRN.T = A_UNITE(QTMATRN,mode1,1,RTMATRN);
 /* line 245: */
PTMATRN.C = A68_TRUE;
STMATRN = PTMATRN;
} 
else
{ 
TTMATRN.T = T;
 /* line 246: */
 /* line 247: */
TTMATRN.C = A68_FALSE;
STMATRN = TTMATRN;
} 
} 
else
{ 
 /* line 248: */
if ( ((*(&(NTMATRN_tdec->Sort)))==QKAATRN_macpardec) )
{ 
WTMATRN = NFAATRN_maketmacpar((-1)) ;
UTMATRN.T = A_UNITE(VTMATRN,mode8,8,WTMATRN);
 /* line 249: */
UTMATRN.C = A68_TRUE;
STMATRN = UTMATRN;
} 
else
{ 
XTMATRN.T = T;
 /* line 250: */
 /* line 251: */
 /* line 252: */
XTMATRN.C = A68_FALSE;
STMATRN = XTMATRN;
} 
} 
} 
break;
default: 
 /* line 253: */
 /* line 254: */
YTMATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(YTMATRN,(T, Tprocs, &ZTMATRN),(T, Tprocs, &ZTMATRN,(YTMATRN).nonlocals));
STMATRN = ZTMATRN;
break;
} 
} 
A_PROC_EXIT(translate_type);
*ReturnedValue = (STMATRN);
return;
} 
#undef NL

A68_INT  CUMATRN_findnewconstno(A68_192 * Ug, A68_315  New)
{ 
A68_INT  FUMATRN_constno;
A68_INT  GUMATRN_i;
A68_INT  HUMATRN;  /* to part of loop */
A68_231 * IUMATRN_cdec;
A68_BOOL  JUMATRN;  /* optbool result */
A68_INT  KUMATRN;  /* clause result */
A_PROC_ENTRY(findnewconstno);
 /* line 263: */
 /* line 265: */
{ 
if ( (Ug==CBAATRN_nilusage) )
{ 
NKDAOST_sysfault(EUMATRN);
} 
 /* line 266: */
FUMATRN_constno = 0;
 /* line 267: */
HUMATRN = New.upb;
for ( GUMATRN_i = 1;
GUMATRN_i <= HUMATRN;
GUMATRN_i += 1 )
{ 
 /* line 268: */
if ( !((FUMATRN_constno==0)) ) break;
IUMATRN_cdec = (*(&A_VINDEX(New,GUMATRN_i)));
 /* line 269: */
JUMATRN = (IUMATRN_cdec!=XAAATRN_nilconstdec);
if ( JUMATRN )
{ /* line 270: */
JUMATRN = ((*(&(IUMATRN_cdec->Usage)))!=CBAATRN_nilusage);
}
if ( JUMATRN )
{ /* line 271: */
JUMATRN = ((*(&((*(&(IUMATRN_cdec->Usage)))->Closureno)))==(*(&(Ug->Closureno))));
}
if ( JUMATRN )
{ 
 /* line 272: */
 /* line 273: */
FUMATRN_constno = GUMATRN_i;
} 
}
 /* line 274: */
 /* line 275: */
KUMATRN = FUMATRN_constno;
} 
A_PROC_EXIT(findnewconstno);
return( KUMATRN );
} 
#undef NL

A_STATIC A68_VOID  PUMATRN_translate_constunit(A68_232  C, A68_394 * Tprocs, A68_311 * Old, A68_311 * New, A68_370  *ReturnedValue)
{ 
A68_473  SUMATRN_new_typeno;   /* proc value of non-global proc */
A68_472  BVMATRN_ic;
A68_232  CVMATRN;  /* united object - for case conformity */
A68_226 * DVMATRN_cn;
A68_315  EVMATRN;  /* OPERATORS - simple index */
A68_INT  FVMATRN;  /* YIELD */
A68_231 * GVMATRN_cdec;
A68_INT  HVMATRN_i;
A68_370  IVMATRN;  /* collateral clause result */
A68_232  JVMATRN;  /* OPERATORS - mode -> union mode */
A68_226 * KVMATRN;  /* YIELD */
A68_370  LVMATRN;  /* clause result */
A68_370  MVMATRN;  /* collateral clause result */
A68_370  NVMATRN;  /* collateral clause result */
A68_227 * OVMATRN_cp;
A68_472  PVMATRN;  /* avoid structure result */
A68_370  QVMATRN;  /* collateral clause result */
A68_227  RVMATRN;  /* collateral clause result */
A68_227 * SVMATRN;  /* YIELD */
A68_232  TVMATRN;  /* OPERATORS - mode -> union mode */
A68_370  UVMATRN;  /* collateral clause result */
A68_232  VVMATRN;  /* OPERATORS - mode -> union mode */
A68_228 * WVMATRN_ci;
A68_472  XVMATRN;  /* avoid structure result */
A68_398  YVMATRN;  /* CALL */
A68_355  ZVMATRN;  /* avoid structure result */
A68_355  AWMATRN_fc;
A68_BOOL  BWMATRN;  /* optbool result */
A68_370  CWMATRN;  /* collateral clause result */
A68_228  DWMATRN;  /* collateral clause result */
A68_228 * EWMATRN;  /* YIELD */
A68_232  FWMATRN;  /* OPERATORS - mode -> union mode */
A68_370  GWMATRN;  /* collateral clause result */
A68_232  HWMATRN;  /* OPERATORS - mode -> union mode */
A68_229 * IWMATRN_crg;
A68_472  JWMATRN;  /* avoid structure result */
A68_398  KWMATRN;  /* CALL */
A68_355  LWMATRN;  /* avoid structure result */
A68_355  MWMATRN_lc;
A68_398  NWMATRN;  /* CALL */
A68_355  OWMATRN;  /* avoid structure result */
A68_355  PWMATRN_uc;
A68_BOOL  QWMATRN;  /* optbool result */
A68_370  RWMATRN;  /* collateral clause result */
A68_229  SWMATRN;  /* collateral clause result */
A68_229 * TWMATRN;  /* YIELD */
A68_232  UWMATRN;  /* OPERATORS - mode -> union mode */
A68_370  VWMATRN;  /* collateral clause result */
A68_232  WWMATRN;  /* OPERATORS - mode -> union mode */
A68_235 * XWMATRN_cpr;
A68_472  YWMATRN;  /* avoid structure result */
A68_370  ZWMATRN;  /* collateral clause result */
A68_235  AXMATRN;  /* collateral clause result */
A68_235 * BXMATRN;  /* YIELD */
A68_232  CXMATRN;  /* OPERATORS - mode -> union mode */
A68_370  DXMATRN;  /* collateral clause result */
A68_232  EXMATRN;  /* OPERATORS - mode -> union mode */
A68_233 * FXMATRN_ct;
A68_472  GXMATRN;  /* avoid structure result */
A68_370  HXMATRN;  /* collateral clause result */
A68_233  IXMATRN;  /* collateral clause result */
A68_233 * JXMATRN;  /* YIELD */
A68_232  KXMATRN;  /* OPERATORS - mode -> union mode */
A68_370  LXMATRN;  /* collateral clause result */
A68_232  MXMATRN;  /* OPERATORS - mode -> union mode */
A68_239 * NXMATRN_ua;
A68_472  OXMATRN;  /* avoid structure result */
A68_413  PXMATRN;  /* CALL */
A68_370  QXMATRN;  /* avoid structure result */
A68_370  RXMATRN_uc;
A68_BOOL  SXMATRN;  /* optbool result */
A68_370  TXMATRN;  /* collateral clause result */
A68_239  UXMATRN;  /* collateral clause result */
A68_239 * VXMATRN;  /* YIELD */
A68_232  WXMATRN;  /* OPERATORS - mode -> union mode */
A68_370  XXMATRN;  /* collateral clause result */
A68_232  YXMATRN;  /* OPERATORS - mode -> union mode */
A68_413  ZXMATRN;  /* CALL */
A68_370  AYMATRN;  /* avoid structure result */
A_PROC_ENTRY(translate_constunit);
 /* line 279: */
 /* line 280: */
{ 
 /* line 281: */
A_CLOSURE( SUMATRN_new_typeno, TUMATRN_new_typeno, UUMATRN_new_typeno );
(( UUMATRN_new_typeno * ) ( SUMATRN_new_typeno.nonlocals )) -> Old = Old;
(( UUMATRN_new_typeno * ) ( SUMATRN_new_typeno.nonlocals )) -> New = New;
 /* line 290: */
 /* line 291: */
 /* line 292: */
CVMATRN = C ;
switch ( CVMATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
DVMATRN_cn = (CVMATRN.data.mode1);
 /* line 293: */
{ 
EVMATRN = (*(&(Old->Consts))) ;
FVMATRN = (*(&(DVMATRN_cn->Constno))) ;
GVMATRN_cdec = (*(&A_VINDEX(EVMATRN,FVMATRN)));
 /* line 294: */
 /* line 295: */
if ( ((*(&(GVMATRN_cdec->Sort)))==OKAATRN_outerdec) )
{ 
HVMATRN_i = CUMATRN_findnewconstno((*(&(GVMATRN_cdec->Usage))), (*(&(New->Consts))));
 /* line 296: */
 /* line 297: */
if ( (HVMATRN_i!=(*(&(DVMATRN_cn->Constno)))) )
{ 
KVMATRN = CGAATRN_makecname(HVMATRN_i) ;
IVMATRN.U = A_UNITE(JVMATRN,mode1,1,KVMATRN);
 /* line 298: */
IVMATRN.C = A68_TRUE;
LVMATRN = IVMATRN;
} 
else
{ 
MVMATRN.U = C;
 /* line 299: */
 /* line 300: */
MVMATRN.C = A68_FALSE;
LVMATRN = MVMATRN;
} 
} 
else
{ 
NVMATRN.U = C;
 /* line 301: */
 /* line 302: */
 /* line 303: */
NVMATRN.C = A68_FALSE;
LVMATRN = NVMATRN;
} 
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
OVMATRN_cp = (CVMATRN.data.mode2);
 /* line 304: */
{ 
A_CALLPROC(SUMATRN_new_typeno,((*(&(OVMATRN_cp->Typeno))), &PVMATRN),((*(&(OVMATRN_cp->Typeno))), &PVMATRN,(SUMATRN_new_typeno).nonlocals));
BVMATRN_ic = PVMATRN;
 /* line 305: */
 /* line 306: */
if ( (*(&((&BVMATRN_ic)->C))) )
{ 
RVMATRN.Typeno = (*(&((&BVMATRN_ic)->I)));
RVMATRN.Primno = (*(&(OVMATRN_cp->Primno)));
SVMATRN = A_HEAP(A68_227 ) ;
(*SVMATRN) = RVMATRN ;
QVMATRN.U = A_UNITE(TVMATRN,mode2,2,SVMATRN);
 /* line 307: */
QVMATRN.C = A68_TRUE;
LVMATRN = QVMATRN;
} 
else
{ 
UVMATRN.U = A_UNITE(VVMATRN,mode2,2,OVMATRN_cp);
 /* line 308: */
 /* line 309: */
 /* line 310: */
UVMATRN.C = A68_FALSE;
LVMATRN = UVMATRN;
} 
} 
break;
case 3: /* REF STRUCT(INT,MODE194)  */
WVMATRN_ci = (CVMATRN.data.mode3);
 /* line 311: */
{ 
A_CALLPROC(SUMATRN_new_typeno,((*(&(WVMATRN_ci->Typeno))), &XVMATRN),((*(&(WVMATRN_ci->Typeno))), &XVMATRN,(SUMATRN_new_typeno).nonlocals));
BVMATRN_ic = XVMATRN;
 /* line 312: */
YVMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(YVMATRN,((*(&(WVMATRN_ci->Index))), Tprocs, &ZVMATRN),((*(&(WVMATRN_ci->Index))), Tprocs, &ZVMATRN,(YVMATRN).nonlocals));
AWMATRN_fc = ZVMATRN;
 /* line 313: */
 /* line 314: */
BWMATRN = (*(&((&BVMATRN_ic)->C)));
if ( ! BWMATRN )
{BWMATRN = AWMATRN_fc.C;
}
if ( BWMATRN )
{ 
DWMATRN.Typeno = (*(&((&BVMATRN_ic)->I)));
DWMATRN.Index = AWMATRN_fc.F;
EWMATRN = A_HEAP(A68_228 ) ;
(*EWMATRN) = DWMATRN ;
CWMATRN.U = A_UNITE(FWMATRN,mode3,3,EWMATRN);
 /* line 315: */
CWMATRN.C = A68_TRUE;
LVMATRN = CWMATRN;
} 
else
{ 
GWMATRN.U = A_UNITE(HWMATRN,mode3,3,WVMATRN_ci);
 /* line 316: */
 /* line 317: */
 /* line 318: */
GWMATRN.C = A68_FALSE;
LVMATRN = GWMATRN;
} 
} 
break;
case 8: /* REF STRUCT(INT,MODE209)  */
IWMATRN_crg = (CVMATRN.data.mode8);
 /* line 319: */
{ 
A_CALLPROC(SUMATRN_new_typeno,((*(&(IWMATRN_crg->Typeno))), &JWMATRN),((*(&(IWMATRN_crg->Typeno))), &JWMATRN,(SUMATRN_new_typeno).nonlocals));
BVMATRN_ic = JWMATRN;
 /* line 320: */
KWMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KWMATRN,((*(&((&(IWMATRN_crg->Range))->Lwb))), Tprocs, &LWMATRN),((*(&((&(IWMATRN_crg->Range))->Lwb))), Tprocs, &LWMATRN,(KWMATRN).nonlocals));
MWMATRN_lc = LWMATRN;
 /* line 321: */
NWMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(NWMATRN,((*(&((&(IWMATRN_crg->Range))->Upb))), Tprocs, &OWMATRN),((*(&((&(IWMATRN_crg->Range))->Upb))), Tprocs, &OWMATRN,(NWMATRN).nonlocals));
PWMATRN_uc = OWMATRN;
 /* line 322: */
QWMATRN = (*(&((&BVMATRN_ic)->C)));
if ( ! QWMATRN )
{QWMATRN = MWMATRN_lc.C;
}
 /* line 323: */
if ( ! QWMATRN )
{QWMATRN = PWMATRN_uc.C;
}
if ( QWMATRN )
{ 
SWMATRN.Typeno = (*(&((&BVMATRN_ic)->I)));
SWMATRN.Range.Lwb = MWMATRN_lc.F;
SWMATRN.Range.Upb = PWMATRN_uc.F;
TWMATRN = A_HEAP(A68_229 ) ;
(*TWMATRN) = SWMATRN ;
RWMATRN.U = A_UNITE(UWMATRN,mode8,8,TWMATRN);
 /* line 324: */
RWMATRN.C = A68_TRUE;
LVMATRN = RWMATRN;
} 
else
{ 
VWMATRN.U = A_UNITE(WWMATRN,mode8,8,IWMATRN_crg);
 /* line 325: */
 /* line 326: */
 /* line 327: */
VWMATRN.C = A68_FALSE;
LVMATRN = VWMATRN;
} 
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
XWMATRN_cpr = (CVMATRN.data.mode9);
 /* line 328: */
{ 
A_CALLPROC(SUMATRN_new_typeno,((*(&(XWMATRN_cpr->Typeno))), &YWMATRN),((*(&(XWMATRN_cpr->Typeno))), &YWMATRN,(SUMATRN_new_typeno).nonlocals));
BVMATRN_ic = YWMATRN;
 /* line 329: */
 /* line 330: */
if ( (*(&((&BVMATRN_ic)->C))) )
{ 
AXMATRN.Typeno = (*(&((&BVMATRN_ic)->I)));
AXMATRN.Firstno = (*(&(XWMATRN_cpr->Firstno)));
AXMATRN.Lastno = (*(&(XWMATRN_cpr->Lastno)));
BXMATRN = A_HEAP(A68_235 ) ;
(*BXMATRN) = AXMATRN ;
ZWMATRN.U = A_UNITE(CXMATRN,mode9,9,BXMATRN);
 /* line 331: */
ZWMATRN.C = A68_TRUE;
LVMATRN = ZWMATRN;
} 
else
{ 
DXMATRN.U = A_UNITE(EXMATRN,mode9,9,XWMATRN_cpr);
 /* line 332: */
 /* line 333: */
 /* line 334: */
DXMATRN.C = A68_FALSE;
LVMATRN = DXMATRN;
} 
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
FXMATRN_ct = (CVMATRN.data.mode5);
 /* line 335: */
{ 
A_CALLPROC(SUMATRN_new_typeno,((*(&(FXMATRN_ct->Typeno))), &GXMATRN),((*(&(FXMATRN_ct->Typeno))), &GXMATRN,(SUMATRN_new_typeno).nonlocals));
BVMATRN_ic = GXMATRN;
 /* line 336: */
 /* line 337: */
if ( (*(&((&BVMATRN_ic)->C))) )
{ 
IXMATRN.Typeno = (*(&((&BVMATRN_ic)->I)));
IXMATRN.String = (*(&(FXMATRN_ct->String)));
JXMATRN = A_HEAP(A68_233 ) ;
(*JXMATRN) = IXMATRN ;
HXMATRN.U = A_UNITE(KXMATRN,mode5,5,JXMATRN);
 /* line 338: */
HXMATRN.C = A68_TRUE;
LVMATRN = HXMATRN;
} 
else
{ 
LXMATRN.U = A_UNITE(MXMATRN,mode5,5,FXMATRN_ct);
 /* line 339: */
 /* line 340: */
 /* line 341: */
LXMATRN.C = A68_FALSE;
LVMATRN = LXMATRN;
} 
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE232)  */
NXMATRN_ua = (CVMATRN.data.mode13);
 /* line 342: */
{ 
A_CALLPROC(SUMATRN_new_typeno,((*(&(NXMATRN_ua->Typeno))), &OXMATRN),((*(&(NXMATRN_ua->Typeno))), &OXMATRN,(SUMATRN_new_typeno).nonlocals));
BVMATRN_ic = OXMATRN;
 /* line 343: */
PXMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(PXMATRN,((*(&(NXMATRN_ua->Assoc))), Tprocs, &QXMATRN),((*(&(NXMATRN_ua->Assoc))), Tprocs, &QXMATRN,(PXMATRN).nonlocals));
RXMATRN_uc = QXMATRN;
 /* line 344: */
 /* line 345: */
SXMATRN = (*(&((&BVMATRN_ic)->C)));
if ( ! SXMATRN )
{SXMATRN = RXMATRN_uc.C;
}
if ( SXMATRN )
{ 
UXMATRN.Typeno = (*(&((&BVMATRN_ic)->I)));
UXMATRN.Altno = (*(&(NXMATRN_ua->Altno)));
UXMATRN.Assoc = RXMATRN_uc.U;
VXMATRN = A_HEAP(A68_239 ) ;
(*VXMATRN) = UXMATRN ;
TXMATRN.U = A_UNITE(WXMATRN,mode13,13,VXMATRN);
 /* line 346: */
TXMATRN.C = A68_TRUE;
LVMATRN = TXMATRN;
} 
else
{ 
XXMATRN.U = A_UNITE(YXMATRN,mode13,13,NXMATRN_ua);
 /* line 347: */
 /* line 348: */
 /* line 349: */
XXMATRN.C = A68_FALSE;
LVMATRN = XXMATRN;
} 
} 
break;
default: 
 /* line 350: */
 /* line 351: */
ZXMATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(ZXMATRN,(C, Tprocs, &AYMATRN),(C, Tprocs, &AYMATRN,(ZXMATRN).nonlocals));
LVMATRN = AYMATRN;
break;
} 
} 
A_PROC_EXIT(translate_constunit);
*ReturnedValue = (LVMATRN);
return;
} 
#undef NL
 /* line 360: */

A_STATIC A68_VOID  EYMATRN_translateprocs(A68_311 * Oldenv, A68_311 * Newenv, A68_440  Action)
{ 
A68_475  FYMATRN;  /* collateral clause result */
A68_395  IYMATRN_anonymous;   /* proc value of non-global proc */
A68_439  NYMATRN;  /* OPERATORS - mode -> union mode */
A68_395  OYMATRN;  /* YIELD */
A68_398  RYMATRN_anonymous;   /* proc value of non-global proc */
A68_439  WYMATRN;  /* OPERATORS - mode -> union mode */
A68_398  XYMATRN;  /* YIELD */
A68_404  AZMATRN_anonymous;   /* proc value of non-global proc */
A68_439  FZMATRN;  /* OPERATORS - mode -> union mode */
A68_404  GZMATRN;  /* YIELD */
A68_413  JZMATRN_anonymous;   /* proc value of non-global proc */
A68_439  OZMATRN;  /* OPERATORS - mode -> union mode */
A68_413  PZMATRN;  /* YIELD */
A68_438  QZMATRN;  /* OPERATORS - istruct -> vector */
A68_394 * RZMATRN_newtprocs;
A_PROC_ENTRY(translateprocs);
 /* line 361: */
 /* line 362: */
{ 
 /* line 363: */
A_CLOSURE( IYMATRN_anonymous, JYMATRN_anonymous, KYMATRN_anonymous );
(( KYMATRN_anonymous * ) ( IYMATRN_anonymous.nonlocals )) -> Oldenv = Oldenv;
(( KYMATRN_anonymous * ) ( IYMATRN_anonymous.nonlocals )) -> Newenv = Newenv;
 /* line 365: */
OYMATRN = IYMATRN_anonymous ;
FYMATRN.data[0] = A_UNITE(NYMATRN,mode1,1,OYMATRN);
A_CLOSURE( RYMATRN_anonymous, SYMATRN_anonymous, TYMATRN_anonymous );
(( TYMATRN_anonymous * ) ( RYMATRN_anonymous.nonlocals )) -> Oldenv = Oldenv;
(( TYMATRN_anonymous * ) ( RYMATRN_anonymous.nonlocals )) -> Newenv = Newenv;
 /* line 367: */
XYMATRN = RYMATRN_anonymous ;
FYMATRN.data[1] = A_UNITE(WYMATRN,mode4,4,XYMATRN);
A_CLOSURE( AZMATRN_anonymous, BZMATRN_anonymous, CZMATRN_anonymous );
(( CZMATRN_anonymous * ) ( AZMATRN_anonymous.nonlocals )) -> Oldenv = Oldenv;
(( CZMATRN_anonymous * ) ( AZMATRN_anonymous.nonlocals )) -> Newenv = Newenv;
 /* line 369: */
GZMATRN = AZMATRN_anonymous ;
FYMATRN.data[2] = A_UNITE(FZMATRN,mode10,10,GZMATRN);
A_CLOSURE( JZMATRN_anonymous, KZMATRN_anonymous, LZMATRN_anonymous );
(( LZMATRN_anonymous * ) ( JZMATRN_anonymous.nonlocals )) -> Oldenv = Oldenv;
(( LZMATRN_anonymous * ) ( JZMATRN_anonymous.nonlocals )) -> Newenv = Newenv;
PZMATRN = JZMATRN_anonymous ;
FYMATRN.data[3] = A_UNITE(OZMATRN,mode19,19,PZMATRN);
RZMATRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(QZMATRN,FYMATRN,4,A68_439 ));
 /* line 372: */
A_CALLPROC(Action,(RZMATRN_newtprocs),(RZMATRN_newtprocs,(Action).nonlocals));
 /* line 373: */
 /* line 374: */
MLJATRN_discard_tprocs(RZMATRN_newtprocs);
} 
A_PROC_EXIT(translateprocs);
return;
} 
#undef NL

A68_191 * VZMATRN_find_attrdec(A68_186  Dec, A68_321 * Closure, A68_311 * Env)
{ 
A68_312  XZMATRN;  /* OPERATORS - simple index */
A68_INT  YZMATRN;  /* YIELD */
A68_191 * WZMATRN_adec;
A68_317  ZZMATRN_oattr;
A68_440  BANATRN_do_attr;   /* proc value of non-global proc */
A68_191 * IANATRN;  /* clause result */
A_PROC_ENTRY(find_attrdec);
 /* line 378: */
 /* line 379: */
{ 
XZMATRN = (*(&(Env->Attrs))) ;
YZMATRN = Dec.Attrno ;
WZMATRN_adec = (*(&A_VINDEX(XZMATRN,YZMATRN)));
 /* line 380: */
 /* line 381: */
 /* line 382: */
if ( ((*(&(WZMATRN_adec->Sort)))==OKAATRN_outerdec) )
{ 
ZZMATRN_oattr = (*(&(ELCATRN_find_outers((*(&((*(&(WZMATRN_adec->Usage)))->Closureno))), Closure, ZLBAOSI_global_msg)->Outer)));
 /* line 384: */
A_CLOSURE( BANATRN_do_attr, CANATRN_do_attr, DANATRN_do_attr );
(( DANATRN_do_attr * ) ( BANATRN_do_attr.nonlocals )) -> WZMATRN_adec = (&WZMATRN_adec);
(( DANATRN_do_attr * ) ( BANATRN_do_attr.nonlocals )) -> ZZMATRN_oattr = ZZMATRN_oattr;
 /* line 388: */
 /* line 389: */
EYMATRN_translateprocs(ZZMATRN_oattr.Environ, Env, BANATRN_do_attr);
} 
 /* line 390: */
 /* line 391: */
IANATRN = WZMATRN_adec;
} 
A_PROC_EXIT(find_attrdec);
return( IANATRN );
} 
#undef NL

A68_207 * MANATRN_find_intdec(A68_198  Dec, A68_321 * Closure, A68_311 * Env)
{ 
A68_313  OANATRN;  /* OPERATORS - simple index */
A68_INT  PANATRN;  /* YIELD */
A68_207 * NANATRN_idec;
A68_317  QANATRN_oint;
A68_440  SANATRN_do_int;   /* proc value of non-global proc */
A68_207 * ZANATRN;  /* clause result */
A_PROC_ENTRY(find_intdec);
 /* line 395: */
 /* line 396: */
{ 
OANATRN = (*(&(Env->Ints))) ;
PANATRN = Dec.Intno ;
NANATRN_idec = (*(&A_VINDEX(OANATRN,PANATRN)));
 /* line 397: */
 /* line 398: */
 /* line 400: */
if ( ((*(&(NANATRN_idec->Sort)))==OKAATRN_outerdec) )
{ 
QANATRN_oint = (*(&(ELCATRN_find_outers((*(&((*(&(NANATRN_idec->Usage)))->Closureno))), Closure, ZLBAOSI_global_msg)->Outer)));
 /* line 402: */
A_CLOSURE( SANATRN_do_int, TANATRN_do_int, UANATRN_do_int );
(( UANATRN_do_int * ) ( SANATRN_do_int.nonlocals )) -> NANATRN_idec = (&NANATRN_idec);
(( UANATRN_do_int * ) ( SANATRN_do_int.nonlocals )) -> QANATRN_oint = QANATRN_oint;
 /* line 406: */
 /* line 407: */
EYMATRN_translateprocs(QANATRN_oint.Environ, Env, SANATRN_do_int);
} 
 /* line 408: */
 /* line 409: */
ZANATRN = NANATRN_idec;
} 
A_PROC_EXIT(find_intdec);
return( ZANATRN );
} 
#undef NL

A68_225 * DBNATRN_find_typedec(A68_211  Dec, A68_321 * Closure, A68_311 * Env)
{ 
A68_314  FBNATRN;  /* OPERATORS - simple index */
A68_INT  GBNATRN;  /* YIELD */
A68_225 * EBNATRN_tdec;
A68_317  HBNATRN_otype;
A68_440  JBNATRN_do_type;   /* proc value of non-global proc */
A68_225 * QBNATRN;  /* clause result */
A_PROC_ENTRY(find_typedec);
 /* line 413: */
 /* line 414: */
{ 
FBNATRN = (*(&(Env->Types))) ;
GBNATRN = Dec.Typeno ;
EBNATRN_tdec = (*(&A_VINDEX(FBNATRN,GBNATRN)));
 /* line 415: */
 /* line 416: */
 /* line 417: */
if ( ((*(&(EBNATRN_tdec->Sort)))==OKAATRN_outerdec) )
{ 
HBNATRN_otype = (*(&(ELCATRN_find_outers((*(&((*(&(EBNATRN_tdec->Usage)))->Closureno))), Closure, ZLBAOSI_global_msg)->Outer)));
 /* line 419: */
A_CLOSURE( JBNATRN_do_type, KBNATRN_do_type, LBNATRN_do_type );
(( LBNATRN_do_type * ) ( JBNATRN_do_type.nonlocals )) -> EBNATRN_tdec = (&EBNATRN_tdec);
(( LBNATRN_do_type * ) ( JBNATRN_do_type.nonlocals )) -> HBNATRN_otype = HBNATRN_otype;
 /* line 423: */
 /* line 424: */
EYMATRN_translateprocs(HBNATRN_otype.Environ, Env, JBNATRN_do_type);
} 
 /* line 425: */
 /* line 426: */
QBNATRN = EBNATRN_tdec;
} 
A_PROC_EXIT(find_typedec);
return( QBNATRN );
} 
#undef NL

A68_231 * UBNATRN_find_constdec(A68_226  Dec, A68_321 * Closure, A68_311 * Env)
{ 
A68_315  WBNATRN;  /* OPERATORS - simple index */
A68_INT  XBNATRN;  /* YIELD */
A68_231 * VBNATRN_cdec;
A68_317  YBNATRN_oconst;
A68_440  ACNATRN_do_const;   /* proc value of non-global proc */
A68_231 * HCNATRN;  /* clause result */
A_PROC_ENTRY(find_constdec);
 /* line 431: */
 /* line 432: */
{ 
WBNATRN = (*(&(Env->Consts))) ;
XBNATRN = Dec.Constno ;
VBNATRN_cdec = (*(&A_VINDEX(WBNATRN,XBNATRN)));
 /* line 433: */
 /* line 434: */
 /* line 435: */
if ( ((*(&(VBNATRN_cdec->Sort)))==OKAATRN_outerdec) )
{ 
YBNATRN_oconst = (*(&(ELCATRN_find_outers((*(&((*(&(VBNATRN_cdec->Usage)))->Closureno))), Closure, ZLBAOSI_global_msg)->Outer)));
 /* line 437: */
A_CLOSURE( ACNATRN_do_const, BCNATRN_do_const, CCNATRN_do_const );
(( CCNATRN_do_const * ) ( ACNATRN_do_const.nonlocals )) -> VBNATRN_cdec = (&VBNATRN_cdec);
(( CCNATRN_do_const * ) ( ACNATRN_do_const.nonlocals )) -> YBNATRN_oconst = YBNATRN_oconst;
 /* line 441: */
 /* line 442: */
EYMATRN_translateprocs(YBNATRN_oconst.Environ, Env, ACNATRN_do_const);
} 
 /* line 443: */
 /* line 444: */
HCNATRN = VBNATRN_cdec;
} 
A_PROC_EXIT(find_constdec);
return( HCNATRN );
} 
#undef NL

A68_INT  KCNATRN_findnewfnno(A68_192 * Fg, A68_316  New)
{ 
A68_INT  NCNATRN_fnno;
A68_INT  OCNATRN_i;
A68_INT  PCNATRN;  /* to part of loop */
A68_308 * QCNATRN_fdec;
A68_BOOL  RCNATRN;  /* optbool result */
A68_INT  SCNATRN;  /* clause result */
A_PROC_ENTRY(findnewfnno);
 /* line 451: */
 /* line 453: */
{ 
if ( (Fg==CBAATRN_nilusage) )
{ 
NKDAOST_sysfault(MCNATRN);
} 
 /* line 454: */
NCNATRN_fnno = 0;
 /* line 455: */
PCNATRN = New.upb;
for ( OCNATRN_i = 1;
OCNATRN_i <= PCNATRN;
OCNATRN_i += 1 )
{ 
 /* line 456: */
if ( !((NCNATRN_fnno==0)) ) break;
QCNATRN_fdec = (*(&A_VINDEX(New,OCNATRN_i)));
 /* line 457: */
RCNATRN = (QCNATRN_fdec!=YAAATRN_nilfndec);
if ( RCNATRN )
{ /* line 458: */
RCNATRN = ((*(&(QCNATRN_fdec->Usage)))!=CBAATRN_nilusage);
}
if ( RCNATRN )
{ /* line 459: */
RCNATRN = ((*(&((*(&(QCNATRN_fdec->Usage)))->Closureno)))==(*(&(Fg->Closureno))));
}
if ( RCNATRN )
{ 
 /* line 460: */
 /* line 461: */
NCNATRN_fnno = OCNATRN_i;
} 
}
 /* line 462: */
 /* line 463: */
SCNATRN = NCNATRN_fnno;
} 
A_PROC_EXIT(findnewfnno);
return( SCNATRN );
} 
#undef NL

A68_308 * WCNATRN_translate_fndec(A68_308 * Fdec, A68_311 * Old, A68_311 * New)
{ 
A68_308 * XCNATRN_ans;
A68_440  ZCNATRN_do_fdec;   /* proc value of non-global proc */
A68_308 * EDNATRN;  /* clause result */
A_PROC_ENTRY(translate_fndec);
 /* line 466: */
 /* line 467: */
{ 
 /* line 468: */
A_CLOSURE( ZCNATRN_do_fdec, ADNATRN_do_fdec, BDNATRN_do_fdec );
(( BDNATRN_do_fdec * ) ( ZCNATRN_do_fdec.nonlocals )) -> XCNATRN_ans = (&XCNATRN_ans);
(( BDNATRN_do_fdec * ) ( ZCNATRN_do_fdec.nonlocals )) -> Fdec = Fdec;
 /* line 470: */
EYMATRN_translateprocs(Old, New, ZCNATRN_do_fdec);
 /* line 471: */
 /* line 472: */
EDNATRN = XCNATRN_ans;
} 
A_PROC_EXIT(translate_fndec);
return( EDNATRN );
} 
#undef NL

A68_308 * IDNATRN_find_fndec(A68_263  Dec, A68_321 * Closure, A68_311 * Env)
{ 
A68_316  KDNATRN;  /* OPERATORS - simple index */
A68_INT  LDNATRN;  /* YIELD */
A68_308 * JDNATRN_fdec;
A68_317  MDNATRN_ofn;
A68_440  ODNATRN_do_fdec;   /* proc value of non-global proc */
A68_308 * VDNATRN;  /* clause result */
A_PROC_ENTRY(find_fndec);
 /* line 476: */
 /* line 477: */
{ 
KDNATRN = (*(&(Env->Fns))) ;
LDNATRN = Dec.Fnno ;
JDNATRN_fdec = (*(&A_VINDEX(KDNATRN,LDNATRN)));
 /* line 478: */
 /* line 479: */
 /* line 480: */
if ( ((*(&(JDNATRN_fdec->Sort)))==OKAATRN_outerdec) )
{ 
MDNATRN_ofn = (*(&(ELCATRN_find_outers((*(&((*(&(JDNATRN_fdec->Usage)))->Closureno))), Closure, ZLBAOSI_global_msg)->Outer)));
 /* line 482: */
A_CLOSURE( ODNATRN_do_fdec, PDNATRN_do_fdec, QDNATRN_do_fdec );
(( QDNATRN_do_fdec * ) ( ODNATRN_do_fdec.nonlocals )) -> JDNATRN_fdec = (&JDNATRN_fdec);
(( QDNATRN_do_fdec * ) ( ODNATRN_do_fdec.nonlocals )) -> MDNATRN_ofn = MDNATRN_ofn;
 /* line 486: */
 /* line 487: */
EYMATRN_translateprocs(MDNATRN_ofn.Environ, Env, ODNATRN_do_fdec);
} 
 /* line 488: */
 /* line 489: */
VDNATRN = JDNATRN_fdec;
} 
A_PROC_EXIT(find_fndec);
return( VDNATRN );
} 
#undef NL

A68_VOID  XDNATRN_simplify_formula(A68_194  Form, A68_194  *ReturnedValue)
{ 
A68_194  YDNATRN;  /* united object - for case conformity */
A68_199 * ZDNATRN_fd;
A68_194  AENATRN;  /* avoid structure result */
A68_194  BENATRN_lf;
A68_194  CENATRN;  /* avoid structure result */
A68_194  DENATRN_rf;
A68_194  EENATRN;  /* united object - for case conformity */
A68_195 * FENATRN_li;
A68_194  GENATRN;  /* united object - for case conformity */
A68_195 * HENATRN_ri;
A68_INT  IENATRN_l;
A68_INT  JENATRN_r;
A68_195  KENATRN;  /* collateral clause result */
A68_BITS  LENATRN;  /* SHL */
A68_BITS  MENATRN;  /* SHR */
A68_INT  NENATRN;  /* ADICOPS - MOD */
A68_194  OENATRN;  /* clause result */
A68_195 * PENATRN;  /* YIELD */
A68_194  QENATRN;  /* OPERATORS - mode -> union mode */
A68_200 * RENATRN_fm;
A68_194  SENATRN;  /* avoid structure result */
A68_194  TENATRN_rf;
A68_194  UENATRN;  /* united object - for case conformity */
A68_195 * VENATRN_ri;
A68_INT  WENATRN_r;
A68_195  XENATRN;  /* collateral clause result */
double YENATRN,ZENATRN;/*ADICOPS - ENTIER*/
A68_REAL  AFNATRN;  /* ADICOPS - ENTIER */
A68_195 * BFNATRN;  /* YIELD */
A68_194  CFNATRN;  /* OPERATORS - mode -> union mode */
A68_202 * DFNATRN_fb;
A68_194  EFNATRN;  /* avoid structure result */
A_PROC_ENTRY(simplify_formula);
 /* line 498: */
 /* line 499: */
YDNATRN = Form ;
switch ( YDNATRN.mode )
{ 
case 5: /* REF STRUCT(MODE194,INT,MODE194)  */
ZDNATRN_fd = (YDNATRN.data.mode5);
 /* line 500: */
{ 
XDNATRN_simplify_formula( (*(&(ZDNATRN_fd->Left))), &AENATRN );
BENATRN_lf = AENATRN;
 /* line 501: */
XDNATRN_simplify_formula( (*(&(ZDNATRN_fd->Right))), &CENATRN );
DENATRN_rf = CENATRN;
 /* line 502: */
 /* line 503: */
EENATRN = BENATRN_lf ;
switch ( EENATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
FENATRN_li = (EENATRN.data.mode1);
 /* line 504: */
 /* line 505: */
GENATRN = DENATRN_rf ;
switch ( GENATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
HENATRN_ri = (GENATRN.data.mode1);
 /* line 506: */
{ 
IENATRN_l = (*(&(FENATRN_li->Int)));
JENATRN_r = (*(&(HENATRN_ri->Int)));
 /* line 507: */
 /* line 508: */
 /* line 509: */
switch ( (*(&(ZDNATRN_fd->Sort))) )
{ 
case 1: 
KENATRN.Int = (IENATRN_l+JENATRN_r);
break;
case 2: 
KENATRN.Int = (IENATRN_l-JENATRN_r);
break;
case 3: 
KENATRN.Int = (IENATRN_l*JENATRN_r);
break;
case 4: 
 /* line 510: */
KENATRN.Int = (IENATRN_l/JENATRN_r);
break;
case 5: 
KENATRN.Int = ((IENATRN_l==JENATRN_r));
break;
case 6: 
KENATRN.Int = ((IENATRN_l!=JENATRN_r));
break;
case 7: 
 /* line 511: */
KENATRN.Int = ((IENATRN_l<=JENATRN_r));
break;
case 8: 
KENATRN.Int = ((IENATRN_l>=JENATRN_r));
break;
case 9: 
KENATRN.Int = ((IENATRN_l<JENATRN_r));
break;
case 10: 
 /* line 512: */
KENATRN.Int = ((IENATRN_l>JENATRN_r));
break;
case 11: 
KENATRN.Int = (A68_INT )(A68_BITS )((A68_BITS )IENATRN_l&(A68_BITS )JENATRN_r);
break;
case 12: 
KENATRN.Int = (A68_INT )(A68_BITS )((A68_BITS )IENATRN_l|(A68_BITS )JENATRN_r);
break;
case 13: 
 /* line 513: */
KENATRN.Int = 0;
break;
case 14: 
LENATRN = (A68_BITS )IENATRN_l ;
KENATRN.Int = (A68_INT )A_SHL(LENATRN,JENATRN_r);
break;
case 15: 
 /* line 514: */
MENATRN = (A68_BITS )IENATRN_l ;
KENATRN.Int = (A68_INT )A_SHR(MENATRN,JENATRN_r);
break;
case 16: 
KENATRN.Int = (A68_INT )(A68_BITS )((A68_BITS )IENATRN_l&(A68_BITS )JENATRN_r);
break;
case 17: 
 /* line 515: */
KENATRN.Int = (A68_INT )(A68_BITS )((A68_BITS )IENATRN_l|(A68_BITS )JENATRN_r);
break;
case 18: 
 /* line 516: */
 /* line 517: */
KENATRN.Int = A_MOD(IENATRN_l,JENATRN_r,NENATRN);
break;
default: 
 /* line 518: */
KENATRN.Int = 0;
break;
} 
 /* line 519: */
KENATRN.Text = TTCAOST_nullid;
 /* line 520: */
 /* line 521: */
PENATRN = A_HEAP(A68_195 ) ;
(*PENATRN) = KENATRN ;
OENATRN = A_UNITE(QENATRN,mode1,1,PENATRN);
} 
break;
default: 
 /* line 522: */
 /* line 523: */
OENATRN = Form;
break;
} 
break;
default: 
 /* line 524: */
 /* line 525: */
OENATRN = Form;
break;
} 
} 
break;
case 6: /* REF STRUCT(INT,MODE194)  */
RENATRN_fm = (YDNATRN.data.mode6);
 /* line 526: */
{ 
XDNATRN_simplify_formula( (*(&(RENATRN_fm->Right))), &SENATRN );
TENATRN_rf = SENATRN;
 /* line 527: */
 /* line 528: */
UENATRN = TENATRN_rf ;
switch ( UENATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
VENATRN_ri = (UENATRN.data.mode1);
 /* line 529: */
{ 
WENATRN_r = (*(&(VENATRN_ri->Int)));
 /* line 530: */
 /* line 531: */
 /* line 532: */
switch ( (*(&(RENATRN_fm->Sort))) )
{ 
case 1: 
XENATRN.Int = WENATRN_r;
break;
case 2: 
XENATRN.Int = (-WENATRN_r);
break;
case 3: 
XENATRN.Int = ((WENATRN_r==0));
break;
case 4: 
XENATRN.Int = 0;
break;
case 5: 
XENATRN.Int = (A68_INT )~(A68_BITS )WENATRN_r;
break;
case 6: 
 /* line 533: */
AFNATRN = GQAAOST_sqrt((A68_REAL )WENATRN_r) ;
XENATRN.Int = A_ENTIER(YENATRN,ZENATRN,AFNATRN,(A68_INT ));
break;
case 7: 
 /* line 534: */
XENATRN.Int = A_ABS(WENATRN_r);
break;
default: 
 /* line 535: */
XENATRN.Int = 0;
break;
} 
 /* line 536: */
XENATRN.Text = TTCAOST_nullid;
 /* line 537: */
 /* line 538: */
BFNATRN = A_HEAP(A68_195 ) ;
(*BFNATRN) = XENATRN ;
OENATRN = A_UNITE(CFNATRN,mode1,1,BFNATRN);
} 
break;
default: 
 /* line 539: */
 /* line 540: */
OENATRN = Form;
break;
} 
} 
break;
case 8: /* REF STRUCT(MODE194)  */
DFNATRN_fb = (YDNATRN.data.mode8);
 /* line 541: */
 /* line 542: */
XDNATRN_simplify_formula( (*(&(DFNATRN_fb->Formula))), &EFNATRN );
OENATRN = EFNATRN;
break;
default: 
OENATRN = Form;
break;
} 
A_PROC_EXIT(simplify_formula);
*ReturnedValue = (OENATRN);
return;
} 
#undef NL

A68_VOID  GFNATRN_tstr_size(A68_213 * Tstr, A68_194  *ReturnedValue)
{ 
A68_INT  HFNATRN_size;
A68_213 * IFNATRN_st;
A68_195  JFNATRN;  /* collateral clause result */
A68_194  KFNATRN;  /* clause result */
A68_195 * LFNATRN;  /* YIELD */
A68_194  MFNATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tstr_size);
 /* line 546: */
{ 
HFNATRN_size = 0;
 /* line 547: */
IFNATRN_st = Tstr;
 /* line 548: */
for ( ;; )
{ 
if ( !((IFNATRN_st!=GAAATRN_niltstr)) ) break;
HFNATRN_size+=1;
IFNATRN_st = (*(&(IFNATRN_st->Rest)));
}
 /* line 549: */
JFNATRN.Int = HFNATRN_size;
 /* line 550: */
JFNATRN.Text = TTCAOST_nullid;
LFNATRN = A_HEAP(A68_195 ) ;
(*LFNATRN) = JFNATRN ;
KFNATRN = A_UNITE(MFNATRN,mode1,1,LFNATRN);
} 
A_PROC_EXIT(tstr_size);
*ReturnedValue = (KFNATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RFNATRN_trim(A68_210  T, A68_194  F, A68_194  S, A68_311 * Env, A68_210  *ReturnedValue)
{ 
A68_487  WFNATRN_trimst;   /* proc value of non-global proc */
A68_210  DGNATRN;  /* united object - for case conformity */
A68_211 * EGNATRN_tn;
A68_314  FGNATRN;  /* OPERATORS - simple index */
A68_INT  GGNATRN;  /* YIELD */
A68_223  HGNATRN;  /* united object - for case conformity */
A68_219 * IGNATRN_tv;
A68_210  JGNATRN;  /* clause result */
A68_210  KGNATRN;  /* avoid structure result */
A68_210  NGNATRN;  /* OPERATORS - mode -> union mode */
A68_212 * OGNATRN_tr;
A68_194  PGNATRN;  /* united object - for case conformity */
A68_195 * QGNATRN_fi;
A68_212  RGNATRN;  /* collateral clause result */
A68_212 * SGNATRN;  /* YIELD */
A68_210  TGNATRN;  /* OPERATORS - mode -> union mode */
A68_212  UGNATRN;  /* collateral clause result */
A68_212 * VGNATRN;  /* YIELD */
A68_210  WGNATRN;  /* OPERATORS - mode -> union mode */
A68_213 * XGNATRN_tstr;
A68_194  YGNATRN;  /* united object - for case conformity */
A68_195 * ZGNATRN_s1;
A68_194  AHNATRN;  /* united object - for case conformity */
A68_195 * BHNATRN_f1;
A68_INT  CHNATRN_si;
A68_INT  DHNATRN;  /* clause result */
A68_213 * EHNATRN_st;
A68_210  FHNATRN;  /* OPERATORS - mode -> union mode */
A68_212  GHNATRN;  /* collateral clause result */
A68_194  HHNATRN;  /* OPERATORS - mode -> union mode */
A68_212 * IHNATRN;  /* YIELD */
A68_210  JHNATRN;  /* OPERATORS - mode -> union mode */
A68_212  KHNATRN;  /* collateral clause result */
A68_212 * LHNATRN;  /* YIELD */
A68_210  MHNATRN;  /* OPERATORS - mode -> union mode */
A68_215 * NHNATRN_tb;
A68_210  OHNATRN;  /* avoid structure result */
A68_216 * PHNATRN_tg;
A68_194  QHNATRN;  /* united object - for case conformity */
A68_195 * RHNATRN_fi;
A68_216  SHNATRN;  /* collateral clause result */
A68_216 * THNATRN;  /* YIELD */
A68_210  UHNATRN;  /* OPERATORS - mode -> union mode */
A68_216  VHNATRN;  /* collateral clause result */
A68_216 * WHNATRN;  /* YIELD */
A68_210  XHNATRN;  /* OPERATORS - mode -> union mode */
A68_210  AINATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(trim);
 /* line 554: */
 /* line 555: */
{ 
A_CLOSURE( WFNATRN_trimst, XFNATRN_trimst, YFNATRN_trimst );
(( YFNATRN_trimst * ) ( WFNATRN_trimst.nonlocals )) -> WFNATRN_trimst = WFNATRN_trimst;
 /* line 561: */
 /* line 562: */
DGNATRN = T ;
switch ( DGNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
EGNATRN_tn = (DGNATRN.data.mode1);
 /* line 563: */
{ 
 /* line 564: */
FGNATRN = (*(&(Env->Types))) ;
GGNATRN = (*(&(EGNATRN_tn->Typeno))) ;
HGNATRN = (*(&((*(&A_VINDEX(FGNATRN,GGNATRN)))->Body))) ;
switch ( HGNATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
IGNATRN_tv = (HGNATRN.data.mode3);
 /* line 565: */
RFNATRN_trim( (*(&(IGNATRN_tv->Tag))), F, S, Env, &KGNATRN );
JGNATRN = KGNATRN;
break;
default: 
NKDAOST_sysfault(MGNATRN);
 /* line 566: */
 /* line 567: */
 /* line 568: */
JGNATRN = A_UNITE(NGNATRN,mode9,9,(&DIAATRN_tnull));
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE194,MODE210)  */
OGNATRN_tr = (DGNATRN.data.mode2);
 /* line 569: */
 /* line 570: */
PGNATRN = S ;
switch ( PGNATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
QGNATRN_fi = (PGNATRN.data.mode1);
 /* line 571: */
 /* line 572: */
if ( ((*(&(QGNATRN_fi->Int)))==0) )
{ 
JGNATRN = (*(&(OGNATRN_tr->Elem)));
} 
else
{ 
RGNATRN.Size = S;
 /* line 573: */
RGNATRN.Elem = (*(&(OGNATRN_tr->Elem)));
 /* line 574: */
SGNATRN = A_HEAP(A68_212 ) ;
(*SGNATRN) = RGNATRN ;
JGNATRN = A_UNITE(TGNATRN,mode2,2,SGNATRN);
} 
break;
default: 
UGNATRN.Size = S;
 /* line 575: */
UGNATRN.Elem = (*(&(OGNATRN_tr->Elem)));
 /* line 576: */
VGNATRN = A_HEAP(A68_212 ) ;
(*VGNATRN) = UGNATRN ;
JGNATRN = A_UNITE(WGNATRN,mode2,2,VGNATRN);
break;
} 
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
XGNATRN_tstr = (DGNATRN.data.mode3);
 /* line 577: */
 /* line 578: */
YGNATRN = S ;
switch ( YGNATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
ZGNATRN_s1 = (YGNATRN.data.mode1);
 /* line 579: */
 /* line 580: */
AHNATRN = F ;
switch ( AHNATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
BHNATRN_f1 = (AHNATRN.data.mode1);
{ 
CHNATRN_si = (*(&(ZGNATRN_s1->Int)));
 /* line 581: */
if ( (CHNATRN_si==0) )
{ 
DHNATRN = 1;
} 
else
{ 
DHNATRN = CHNATRN_si;
} 
EHNATRN_st = A_CALLPROC(WFNATRN_trimst,(XGNATRN_tstr, (*(&(BHNATRN_f1->Int))), DHNATRN),(XGNATRN_tstr, (*(&(BHNATRN_f1->Int))), DHNATRN,(WFNATRN_trimst).nonlocals));
 /* line 582: */
if ( (CHNATRN_si==0) )
{ 
JGNATRN = (*(&(EHNATRN_st->Elem)));
} 
else
{ 
 /* line 583: */
 /* line 584: */
JGNATRN = A_UNITE(FHNATRN,mode3,3,EHNATRN_st);
} 
} 
break;
default: 
 /* line 585: */
 /* line 586: */
if ( ((*(&(ZGNATRN_s1->Int)))==0) )
{ 
JGNATRN = (*(&(XGNATRN_tstr->Elem)));
} 
else
{ 
GHNATRN.Size = A_UNITE(HHNATRN,mode1,1,ZGNATRN_s1);
 /* line 587: */
GHNATRN.Elem = (*(&(XGNATRN_tstr->Elem)));
 /* line 588: */
 /* line 589: */
IHNATRN = A_HEAP(A68_212 ) ;
(*IHNATRN) = GHNATRN ;
JGNATRN = A_UNITE(JHNATRN,mode2,2,IHNATRN);
} 
break;
} 
break;
default: 
KHNATRN.Size = S;
 /* line 590: */
KHNATRN.Elem = (*(&(XGNATRN_tstr->Elem)));
 /* line 591: */
LHNATRN = A_HEAP(A68_212 ) ;
(*LHNATRN) = KHNATRN ;
JGNATRN = A_UNITE(MHNATRN,mode2,2,LHNATRN);
break;
} 
break;
case 5: /* REF STRUCT(MODE210)  */
NHNATRN_tb = (DGNATRN.data.mode5);
 /* line 592: */
RFNATRN_trim( (*(&(NHNATRN_tb->Type))), F, S, Env, &OHNATRN );
JGNATRN = OHNATRN;
break;
case 6: /* REF STRUCT(MODE194,MODE210)  */
PHNATRN_tg = (DGNATRN.data.mode6);
 /* line 593: */
 /* line 594: */
QHNATRN = S ;
switch ( QHNATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
RHNATRN_fi = (QHNATRN.data.mode1);
 /* line 595: */
 /* line 596: */
if ( ((*(&(RHNATRN_fi->Int)))==0) )
{ 
JGNATRN = (*(&(PHNATRN_tg->Char)));
} 
else
{ 
SHNATRN.Size = S;
 /* line 597: */
SHNATRN.Char = (*(&(PHNATRN_tg->Char)));
 /* line 598: */
THNATRN = A_HEAP(A68_216 ) ;
(*THNATRN) = SHNATRN ;
JGNATRN = A_UNITE(UHNATRN,mode6,6,THNATRN);
} 
break;
default: 
VHNATRN.Size = S;
 /* line 599: */
VHNATRN.Char = (*(&(PHNATRN_tg->Char)));
 /* line 600: */
WHNATRN = A_HEAP(A68_216 ) ;
(*WHNATRN) = VHNATRN ;
JGNATRN = A_UNITE(XHNATRN,mode6,6,WHNATRN);
break;
} 
break;
default: 
NKDAOST_sysfault(ZHNATRN);
 /* line 601: */
 /* line 602: */
JGNATRN = A_UNITE(AINATRN,mode9,9,(&DIAATRN_tnull));
break;
} 
} 
A_PROC_EXIT(trim);
*ReturnedValue = (JGNATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  DINATRN_equal_formula(A68_194  F1, A68_194  F2)
{ 
A68_194  EINATRN;  /* united object - for case conformity */
A68_195 * FINATRN_i1;
A68_194  GINATRN;  /* united object - for case conformity */
A68_195 * HINATRN_i2;
A68_BOOL  IINATRN;  /* clause result */
A68_196 * JINATRN_fc;
A68_197 * KINATRN_fa;
A68_198 * NINATRN_fn1;
A68_194  OINATRN;  /* united object - for case conformity */
A68_198 * PINATRN_fn2;
A68_200 * QINATRN_fm1;
A68_194  RINATRN;  /* united object - for case conformity */
A68_200 * SINATRN_fm2;
A68_BOOL  TINATRN;  /* optbool result */
A68_199 * UINATRN_fd1;
A68_194  VINATRN;  /* united object - for case conformity */
A68_199 * WINATRN_fd2;
A68_BOOL  XINATRN;  /* optbool result */
A68_201 * YINATRN_fc1;
A68_194  ZINATRN;  /* united object - for case conformity */
A68_201 * AJNATRN_fc2;
A68_194  BJNATRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  CJNATRN;  /* optbool result */
A68_202 * DJNATRN_fb1;
A_PROC_ENTRY(equal_formula);
 /* line 608: */
 /* line 609: */
EINATRN = F1 ;
switch ( EINATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
FINATRN_i1 = (EINATRN.data.mode1);
 /* line 610: */
GINATRN = F2 ;
switch ( GINATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
HINATRN_i2 = (GINATRN.data.mode1);
 /* line 611: */
IINATRN = ((*(&(FINATRN_i1->Int)))==(*(&(HINATRN_i2->Int))));
break;
default: 
 /* line 612: */
 /* line 613: */
IINATRN = DINATRN_equal_formula(F2, F1);
break;
} 
break;
case 2: /* REF STRUCT(INT,MODE194,MODE194)  */
JINATRN_fc = (EINATRN.data.mode2);
 /* line 614: */
IINATRN = DINATRN_equal_formula((*(&(JINATRN_fc->Test))), F2);
break;
case 3: /* REF STRUCT(INT)  */
KINATRN_fa = (EINATRN.data.mode3);
{ 
NKDAOST_sysfault(MINATRN);
 /* line 615: */
IINATRN = A68_FALSE;
} 
break;
case 4: /* REF STRUCT(INT)  */
NINATRN_fn1 = (EINATRN.data.mode4);
 /* line 616: */
OINATRN = F2 ;
switch ( OINATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
PINATRN_fn2 = (OINATRN.data.mode4);
 /* line 617: */
IINATRN = ((*(&(NINATRN_fn1->Intno)))==(*(&(PINATRN_fn2->Intno))));
break;
default: 
 /* line 618: */
 /* line 619: */
IINATRN = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(INT,MODE194)  */
QINATRN_fm1 = (EINATRN.data.mode6);
 /* line 620: */
 /* line 621: */
RINATRN = F2 ;
switch ( RINATRN.mode )
{ 
case 6: /* REF STRUCT(INT,MODE194)  */
SINATRN_fm2 = (RINATRN.data.mode6);
 /* line 622: */
TINATRN = ((*(&(QINATRN_fm1->Sort)))==(*(&(SINATRN_fm2->Sort))));
if ( TINATRN )
{ /* line 623: */
TINATRN = DINATRN_equal_formula((*(&(QINATRN_fm1->Right))), (*(&(SINATRN_fm2->Right))));
}
IINATRN = TINATRN;
break;
default: 
 /* line 624: */
 /* line 625: */
IINATRN = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(MODE194,INT,MODE194)  */
UINATRN_fd1 = (EINATRN.data.mode5);
 /* line 626: */
 /* line 627: */
VINATRN = F2 ;
switch ( VINATRN.mode )
{ 
case 5: /* REF STRUCT(MODE194,INT,MODE194)  */
WINATRN_fd2 = (VINATRN.data.mode5);
 /* line 628: */
XINATRN = ((*(&(UINATRN_fd1->Sort)))==(*(&(WINATRN_fd2->Sort))));
if ( XINATRN )
{ /* line 629: */
XINATRN = DINATRN_equal_formula((*(&(UINATRN_fd1->Left))), (*(&(WINATRN_fd2->Left))));
}
if ( XINATRN )
{ /* line 630: */
XINATRN = DINATRN_equal_formula((*(&(UINATRN_fd1->Right))), (*(&(WINATRN_fd2->Right))));
}
IINATRN = XINATRN;
break;
default: 
 /* line 631: */
 /* line 632: */
IINATRN = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(MODE194,MODE194,MODE194)  */
YINATRN_fc1 = (EINATRN.data.mode7);
 /* line 633: */
 /* line 634: */
ZINATRN = F2 ;
switch ( ZINATRN.mode )
{ 
case 7: /* REF STRUCT(MODE194,MODE194,MODE194)  */
AJNATRN_fc2 = (ZINATRN.data.mode7);
 /* line 635: */
CJNATRN = DINATRN_equal_formula((*(&(YINATRN_fc1->Cond))), A_UNITE(BJNATRN,mode7,7,AJNATRN_fc2));
if ( CJNATRN )
{ /* line 636: */
CJNATRN = DINATRN_equal_formula((*(&(YINATRN_fc1->True))), (*(&(AJNATRN_fc2->True))));
}
if ( CJNATRN )
{ /* line 637: */
CJNATRN = DINATRN_equal_formula((*(&(YINATRN_fc1->False))), (*(&(AJNATRN_fc2->False))));
}
IINATRN = CJNATRN;
break;
default: 
 /* line 638: */
 /* line 639: */
IINATRN = A68_FALSE;
break;
} 
break;
case 8: /* REF STRUCT(MODE194)  */
DJNATRN_fb1 = (EINATRN.data.mode8);
 /* line 640: */
IINATRN = DINATRN_equal_formula((*(&(DJNATRN_fb1->Formula))), F2);
break;
default: 
NKDAOST_sysfault(FJNATRN);
 /* line 641: */
IINATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(equal_formula);
return( IINATRN );
} 
#undef NL

A_STATIC A68_VOID  KJNATRN_uif_type(A68_194  Cond, A68_210  True, A68_210  False, A68_311 * Env, A68_210  *ReturnedValue)
{ 
A68_492  VJNATRN_uif_tstr;   /* proc value of non-global proc */
A68_210  DKNATRN;  /* united object - for case conformity */
A68_215 * EKNATRN_ta;
A68_210  FKNATRN;  /* clause result */
A68_210  GKNATRN_then;
A68_210  HKNATRN;  /* united object - for case conformity */
A68_215 * IKNATRN_tb;
A68_210  JKNATRN;  /* clause result */
A68_210  KKNATRN_else;
A68_210  LKNATRN;  /* united object - for case conformity */
A68_211 * MKNATRN_tna;
A68_210  NKNATRN;  /* united object - for case conformity */
A68_211 * OKNATRN_tnb;
A68_210  PKNATRN;  /* clause result */
A68_314  QKNATRN;  /* OPERATORS - simple index */
A68_INT  RKNATRN;  /* YIELD */
A68_225 * SKNATRN_tdec;
A68_223  TKNATRN;  /* united object - for case conformity */
A68_219 * UKNATRN_tg;
A68_210  VKNATRN;  /* avoid structure result */
A68_223  WKNATRN;  /* united object - for case conformity */
A68_219 * XKNATRN_tg;
A68_210  YKNATRN;  /* avoid structure result */
A68_210  ZKNATRN;  /* avoid structure result */
A68_210  ALNATRN;  /* avoid structure result */
A68_212 * BLNATRN_tra;
A68_210  CLNATRN;  /* united object - for case conformity */
A68_212 * DLNATRN_trb;
A68_201  ELNATRN;  /* collateral clause result */
A68_201 * FLNATRN;  /* YIELD */
A68_194  GLNATRN;  /* OPERATORS - mode -> union mode */
A68_194  HLNATRN_size;
A68_212  ILNATRN;  /* collateral clause result */
A68_212 * JLNATRN;  /* YIELD */
A68_210  KLNATRN;  /* OPERATORS - mode -> union mode */
A68_213 * LLNATRN_tsb;
A68_212  MLNATRN;  /* collateral clause result */
A68_194  NLNATRN;  /* avoid structure result */
A68_212 * OLNATRN;  /* YIELD */
A68_210  PLNATRN;  /* OPERATORS - mode -> union mode */
A68_210  QLNATRN_t;
A68_210  RLNATRN;  /* avoid structure result */
A68_210  SLNATRN;  /* avoid structure result */
A68_213 * TLNATRN_tsa;
A68_210  ULNATRN;  /* united object - for case conformity */
A68_212 * VLNATRN_tr;
A68_212  WLNATRN;  /* collateral clause result */
A68_194  XLNATRN;  /* avoid structure result */
A68_212 * YLNATRN;  /* YIELD */
A68_210  ZLNATRN;  /* OPERATORS - mode -> union mode */
A68_210  AMNATRN_t;
A68_210  BMNATRN;  /* avoid structure result */
A68_213 * CMNATRN_tsb;
A68_210  DMNATRN;  /* OPERATORS - mode -> union mode */
A68_213 * EMNATRN;  /* YIELD */
A68_210  FMNATRN;  /* avoid structure result */
A68_216 * GMNATRN_tga;
A68_210  HMNATRN;  /* united object - for case conformity */
A68_216 * IMNATRN_tgb;
A68_201  JMNATRN;  /* collateral clause result */
A68_201 * KMNATRN;  /* YIELD */
A68_194  LMNATRN;  /* OPERATORS - mode -> union mode */
A68_194  MMNATRN_size;
A68_216  NMNATRN;  /* collateral clause result */
A68_216 * OMNATRN;  /* YIELD */
A68_210  PMNATRN;  /* OPERATORS - mode -> union mode */
A68_210  QMNATRN;  /* avoid structure result */
A68_210  RMNATRN;  /* avoid structure result */
A_PROC_ENTRY(uif_type);
 /* line 645: */
 /* line 646: */
{ 
 /* line 648: */
A_CLOSURE( VJNATRN_uif_tstr, WJNATRN_uif_tstr, XJNATRN_uif_tstr );
(( XJNATRN_uif_tstr * ) ( VJNATRN_uif_tstr.nonlocals )) -> VJNATRN_uif_tstr = VJNATRN_uif_tstr;
 /* line 655: */
DKNATRN = True ;
switch ( DKNATRN.mode )
{ 
case 5: /* REF STRUCT(MODE210)  */
EKNATRN_ta = (DKNATRN.data.mode5);
FKNATRN = (*(&(EKNATRN_ta->Type)));
break;
default: 
FKNATRN = True;
break;
} 
GKNATRN_then = FKNATRN;
 /* line 656: */
HKNATRN = False ;
switch ( HKNATRN.mode )
{ 
case 5: /* REF STRUCT(MODE210)  */
IKNATRN_tb = (HKNATRN.data.mode5);
JKNATRN = (*(&(IKNATRN_tb->Type)));
break;
default: 
JKNATRN = False;
break;
} 
KKNATRN_else = JKNATRN;
 /* line 658: */
 /* line 659: */
LKNATRN = GKNATRN_then ;
switch ( LKNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
MKNATRN_tna = (LKNATRN.data.mode1);
 /* line 660: */
 /* line 661: */
NKNATRN = KKNATRN_else ;
switch ( NKNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
OKNATRN_tnb = (NKNATRN.data.mode1);
 /* line 662: */
 /* line 663: */
 /* line 664: */
if ( ((*(&(MKNATRN_tna->Typeno)))==(*(&(OKNATRN_tnb->Typeno)))) )
{ 
PKNATRN = GKNATRN_then;
} 
else
{ 
QKNATRN = (*(&(Env->Types))) ;
RKNATRN = (*(&(OKNATRN_tnb->Typeno))) ;
SKNATRN_tdec = (*(&A_VINDEX(QKNATRN,RKNATRN)));
 /* line 665: */
 /* line 666: */
TKNATRN = (*(&(SKNATRN_tdec->Body))) ;
switch ( TKNATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
UKNATRN_tg = (TKNATRN.data.mode3);
 /* line 667: */
KJNATRN_uif_type( Cond, GKNATRN_then, (*(&(UKNATRN_tg->Tag))), Env, &VKNATRN );
PKNATRN = VKNATRN;
break;
default: 
 /* line 668: */
WKNATRN = (*(&(SKNATRN_tdec->Body))) ;
switch ( WKNATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
XKNATRN_tg = (WKNATRN.data.mode3);
 /* line 669: */
 /* line 670: */
KJNATRN_uif_type( Cond, (*(&(XKNATRN_tg->Tag))), KKNATRN_else, Env, &YKNATRN );
PKNATRN = YKNATRN;
break;
default: 
 /* line 671: */
 /* line 672: */
 /* line 673: */
MJNATRN_flt_type(  &ZKNATRN );
PKNATRN = ZKNATRN;
break;
} 
break;
} 
} 
break;
default: 
 /* line 674: */
MJNATRN_flt_type(  &ALNATRN );
PKNATRN = ALNATRN;
break;
} 
break;
case 2: /* REF STRUCT(MODE194,MODE210)  */
BLNATRN_tra = (LKNATRN.data.mode2);
 /* line 675: */
 /* line 676: */
CLNATRN = KKNATRN_else ;
switch ( CLNATRN.mode )
{ 
case 2: /* REF STRUCT(MODE194,MODE210)  */
DLNATRN_trb = (CLNATRN.data.mode2);
 /* line 677: */
 /* line 678: */
 /* line 679: */
if ( DINATRN_equal_formula((*(&(BLNATRN_tra->Size))), (*(&(DLNATRN_trb->Size)))) )
{ 
PKNATRN = GKNATRN_then;
} 
else
{ 
ELNATRN.Cond = Cond;
ELNATRN.True = (*(&(BLNATRN_tra->Size)));
ELNATRN.False = (*(&(DLNATRN_trb->Size)));
FLNATRN = A_HEAP(A68_201 ) ;
(*FLNATRN) = ELNATRN ;
HLNATRN_size = A_UNITE(GLNATRN,mode7,7,FLNATRN);
 /* line 680: */
ILNATRN.Size = HLNATRN_size;
 /* line 681: */
ILNATRN.Elem = (*(&(BLNATRN_tra->Elem)));
 /* line 682: */
JLNATRN = A_HEAP(A68_212 ) ;
(*JLNATRN) = ILNATRN ;
PKNATRN = A_UNITE(KLNATRN,mode2,2,JLNATRN);
} 
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
LLNATRN_tsb = (CLNATRN.data.mode3);
{ 
GFNATRN_tstr_size( LLNATRN_tsb, &NLNATRN );
MLNATRN.Size = NLNATRN;
MLNATRN.Elem = (*(&(LLNATRN_tsb->Elem)));
OLNATRN = A_HEAP(A68_212 ) ;
(*OLNATRN) = MLNATRN ;
QLNATRN_t = A_UNITE(PLNATRN,mode2,2,OLNATRN);
 /* line 683: */
 /* line 684: */
 /* line 685: */
 /* line 686: */
KJNATRN_uif_type( Cond, GKNATRN_then, QLNATRN_t, Env, &RLNATRN );
PKNATRN = RLNATRN;
} 
break;
default: 
 /* line 687: */
MJNATRN_flt_type(  &SLNATRN );
PKNATRN = SLNATRN;
break;
} 
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
TLNATRN_tsa = (LKNATRN.data.mode3);
 /* line 688: */
 /* line 689: */
ULNATRN = KKNATRN_else ;
switch ( ULNATRN.mode )
{ 
case 2: /* REF STRUCT(MODE194,MODE210)  */
VLNATRN_tr = (ULNATRN.data.mode2);
{ 
GFNATRN_tstr_size( TLNATRN_tsa, &XLNATRN );
WLNATRN.Size = XLNATRN;
WLNATRN.Elem = (*(&(TLNATRN_tsa->Elem)));
YLNATRN = A_HEAP(A68_212 ) ;
(*YLNATRN) = WLNATRN ;
AMNATRN_t = A_UNITE(ZLNATRN,mode2,2,YLNATRN);
 /* line 690: */
 /* line 691: */
 /* line 692: */
KJNATRN_uif_type( Cond, AMNATRN_t, KKNATRN_else, Env, &BMNATRN );
PKNATRN = BMNATRN;
} 
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
CMNATRN_tsb = (ULNATRN.data.mode3);
 /* line 693: */
 /* line 694: */
EMNATRN = A_CALLPROC(VJNATRN_uif_tstr,(Cond, TLNATRN_tsa, CMNATRN_tsb, Env),(Cond, TLNATRN_tsa, CMNATRN_tsb, Env,(VJNATRN_uif_tstr).nonlocals)) ;
PKNATRN = A_UNITE(DMNATRN,mode3,3,EMNATRN);
break;
default: 
 /* line 695: */
MJNATRN_flt_type(  &FMNATRN );
PKNATRN = FMNATRN;
break;
} 
break;
case 6: /* REF STRUCT(MODE194,MODE210)  */
GMNATRN_tga = (LKNATRN.data.mode6);
 /* line 696: */
 /* line 697: */
HMNATRN = KKNATRN_else ;
switch ( HMNATRN.mode )
{ 
case 6: /* REF STRUCT(MODE194,MODE210)  */
IMNATRN_tgb = (HMNATRN.data.mode6);
 /* line 698: */
 /* line 699: */
 /* line 700: */
if ( DINATRN_equal_formula((*(&(GMNATRN_tga->Size))), (*(&(IMNATRN_tgb->Size)))) )
{ 
PKNATRN = GKNATRN_then;
} 
else
{ 
JMNATRN.Cond = Cond;
JMNATRN.True = (*(&(GMNATRN_tga->Size)));
JMNATRN.False = (*(&(IMNATRN_tgb->Size)));
KMNATRN = A_HEAP(A68_201 ) ;
(*KMNATRN) = JMNATRN ;
MMNATRN_size = A_UNITE(LMNATRN,mode7,7,KMNATRN);
 /* line 701: */
NMNATRN.Size = MMNATRN_size;
 /* line 702: */
NMNATRN.Char = (*(&(GMNATRN_tga->Char)));
 /* line 703: */
 /* line 704: */
OMNATRN = A_HEAP(A68_216 ) ;
(*OMNATRN) = NMNATRN ;
PKNATRN = A_UNITE(PMNATRN,mode6,6,OMNATRN);
} 
break;
default: 
 /* line 705: */
 /* line 706: */
MJNATRN_flt_type(  &QMNATRN );
PKNATRN = QMNATRN;
break;
} 
break;
default: 
 /* line 707: */
MJNATRN_flt_type(  &RMNATRN );
PKNATRN = RMNATRN;
break;
} 
} 
A_PROC_EXIT(uif_type);
*ReturnedValue = (PKNATRN);
return;
} 
#undef NL
 /* line 711: */

A_STATIC A68_VOID  XMNATRN_uconc_type(A68_BOOL  String, A68_INT  Sort, A68_210  Left, A68_210  Right, A68_311 * Env, A68_210  *ReturnedValue)
{ 
A68_494  ANNATRN_make_trow;   /* proc value of non-global proc */
A68_194  AONATRN_size;
A68_210  BONATRN_answer;
A68_194  CONATRN;  /* OPERATORS - mode -> union mode */
A68_195 * DONATRN;  /* YIELD */
A68_212 * EONATRN_l;
A68_199  FONATRN;  /* collateral clause result */
A68_194  GONATRN;  /* OPERATORS - mode -> union mode */
A68_195 * HONATRN;  /* YIELD */
A68_199 * IONATRN;  /* YIELD */
A68_194  JONATRN;  /* OPERATORS - mode -> union mode */
A68_212 * KONATRN_r;
A68_199  LONATRN;  /* collateral clause result */
A68_194  MONATRN;  /* OPERATORS - mode -> union mode */
A68_195 * NONATRN;  /* YIELD */
A68_199 * OONATRN;  /* YIELD */
A68_194  PONATRN;  /* OPERATORS - mode -> union mode */
A68_212 * QONATRN_l;
A68_212 * RONATRN_r;
A68_199  SONATRN;  /* collateral clause result */
A68_199 * TONATRN;  /* YIELD */
A68_194  UONATRN;  /* OPERATORS - mode -> union mode */
A68_216  VONATRN;  /* collateral clause result */
A68_194  WONATRN;  /* avoid structure result */
A68_210  XONATRN;  /* clause result */
A68_216 * YONATRN;  /* YIELD */
A68_210  ZONATRN;  /* OPERATORS - mode -> union mode */
A68_212  APNATRN;  /* collateral clause result */
A68_194  BPNATRN;  /* avoid structure result */
A68_212 * CPNATRN;  /* YIELD */
A68_210  DPNATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uconc_type);
 /* line 712: */
 /* line 713: */
{ 
A_CLOSURE( ANNATRN_make_trow, BNNATRN_make_trow, CNNATRN_make_trow );
(( CNNATRN_make_trow * ) ( ANNATRN_make_trow.nonlocals )) -> Env = Env;
(( CNNATRN_make_trow * ) ( ANNATRN_make_trow.nonlocals )) -> ANNATRN_make_trow = ANNATRN_make_trow;
 /* line 728: */
 /* line 729: */
 /* line 730: */
switch ( (Sort+1) )
{ 
case 1: 
{ 
DONATRN = NNMATRN_makefint(2) ;
AONATRN_size = A_UNITE(CONATRN,mode1,1,DONATRN);
 /* line 731: */
BONATRN_answer = Left;
} 
break;
case 2: 
{ 
EONATRN_l = A_CALLPROC(ANNATRN_make_trow,(Left),(Left,(ANNATRN_make_trow).nonlocals));
 /* line 732: */
FONATRN.Left = (*(&(EONATRN_l->Size)));
FONATRN.Sort = IJAATRN_fplus;
HONATRN = NNMATRN_makefint(1) ;
FONATRN.Right = A_UNITE(GONATRN,mode1,1,HONATRN);
IONATRN = A_HEAP(A68_199 ) ;
(*IONATRN) = FONATRN ;
AONATRN_size = A_UNITE(JONATRN,mode5,5,IONATRN);
 /* line 733: */
 /* line 734: */
 /* line 735: */
BONATRN_answer = (*(&(EONATRN_l->Elem)));
} 
break;
case 3: 
{ 
KONATRN_r = A_CALLPROC(ANNATRN_make_trow,(Right),(Right,(ANNATRN_make_trow).nonlocals));
 /* line 736: */
NONATRN = NNMATRN_makefint(1) ;
LONATRN.Left = A_UNITE(MONATRN,mode1,1,NONATRN);
LONATRN.Sort = IJAATRN_fplus;
LONATRN.Right = (*(&(KONATRN_r->Size)));
OONATRN = A_HEAP(A68_199 ) ;
(*OONATRN) = LONATRN ;
AONATRN_size = A_UNITE(PONATRN,mode5,5,OONATRN);
 /* line 737: */
 /* line 738: */
 /* line 739: */
BONATRN_answer = (*(&(KONATRN_r->Elem)));
} 
break;
case 4: 
{ 
QONATRN_l = A_CALLPROC(ANNATRN_make_trow,(Left),(Left,(ANNATRN_make_trow).nonlocals));
 /* line 740: */
RONATRN_r = A_CALLPROC(ANNATRN_make_trow,(Right),(Right,(ANNATRN_make_trow).nonlocals));
 /* line 741: */
SONATRN.Left = (*(&(QONATRN_l->Size)));
SONATRN.Sort = IJAATRN_fplus;
SONATRN.Right = (*(&(RONATRN_r->Size)));
TONATRN = A_HEAP(A68_199 ) ;
(*TONATRN) = SONATRN ;
AONATRN_size = A_UNITE(UONATRN,mode5,5,TONATRN);
 /* line 742: */
 /* line 743: */
 /* line 744: */
BONATRN_answer = (*(&(QONATRN_l->Elem)));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 745: */
 /* line 746: */
if ( String )
{ 
XDNATRN_simplify_formula( AONATRN_size, &WONATRN );
VONATRN.Size = WONATRN;
 /* line 747: */
VONATRN.Char = BONATRN_answer;
YONATRN = A_HEAP(A68_216 ) ;
(*YONATRN) = VONATRN ;
XONATRN = A_UNITE(ZONATRN,mode6,6,YONATRN);
} 
else
{ 
XDNATRN_simplify_formula( AONATRN_size, &BPNATRN );
APNATRN.Size = BPNATRN;
 /* line 748: */
APNATRN.Elem = BONATRN_answer;
 /* line 749: */
CPNATRN = A_HEAP(A68_212 ) ;
(*CPNATRN) = APNATRN ;
XONATRN = A_UNITE(DPNATRN,mode2,2,CPNATRN);
} 
} 
A_PROC_EXIT(uconc_type);
*ReturnedValue = (XONATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IPNATRN_coerce_type(A68_210  Type, A68_INT  Sort, A68_BOOL  Namedoutput, A68_311 * Env, A68_361  *ReturnedValue)
{ 
A68_497  LPNATRN_basic_type;   /* proc value of non-global proc */
A68_498  YPNATRN_coerce_tstr;   /* proc value of non-global proc */
A68_210  MQNATRN;  /* united object - for case conformity */
A68_211 * NQNATRN_tn;
A68_314  OQNATRN;  /* OPERATORS - simple index */
A68_INT  PQNATRN;  /* YIELD */
A68_225 * QQNATRN_tdec;
A68_223  RQNATRN;  /* united object - for case conformity */
A68_219 * SQNATRN_tg;
A68_361  TQNATRN;  /* clause result */
A68_361  UQNATRN;  /* avoid structure result */
A68_210  VQNATRN;  /* OPERATORS - mode -> union mode */
A68_361  WQNATRN;  /* avoid structure result */
A68_212 * XQNATRN_tr;
A68_361  YQNATRN;  /* avoid structure result */
A68_361  ZQNATRN_rc;
A68_361  ARNATRN;  /* collateral clause result */
A68_212  BRNATRN;  /* collateral clause result */
A68_212 * CRNATRN;  /* YIELD */
A68_210  DRNATRN;  /* OPERATORS - mode -> union mode */
A68_361  ERNATRN;  /* collateral clause result */
A68_210  FRNATRN;  /* OPERATORS - mode -> union mode */
A68_213 * GRNATRN_ts;
A68_360  HRNATRN;  /* avoid structure result */
A68_360  IRNATRN_sc;
A68_361  JRNATRN;  /* collateral clause result */
A68_210  KRNATRN;  /* OPERATORS - mode -> union mode */
A68_213 * LRNATRN;  /* YIELD */
A68_214 * MRNATRN_tf;
A68_361  NRNATRN;  /* collateral clause result */
A68_361  ORNATRN;  /* collateral clause result */
A68_361  PRNATRN;  /* collateral clause result */
A68_214  QRNATRN;  /* collateral clause result */
A68_214 * RRNATRN;  /* YIELD */
A68_210  SRNATRN;  /* OPERATORS - mode -> union mode */
A68_361  TRNATRN;  /* collateral clause result */
A68_210  URNATRN;  /* OPERATORS - mode -> union mode */
A68_361  VRNATRN;  /* collateral clause result */
A68_361  WRNATRN;  /* collateral clause result */
A68_361  XRNATRN;  /* collateral clause result */
A68_214  YRNATRN;  /* collateral clause result */
A68_214 * ZRNATRN;  /* YIELD */
A68_210  ASNATRN;  /* OPERATORS - mode -> union mode */
A68_361  BSNATRN;  /* collateral clause result */
A68_210  CSNATRN;  /* OPERATORS - mode -> union mode */
A68_215 * DSNATRN_tb;
A68_361  ESNATRN;  /* avoid structure result */
A68_361  FSNATRN;  /* avoid structure result */
A_PROC_ENTRY(coerce_type);
 /* line 754: */
 /* line 755: */
{ 
A_CLOSURE( LPNATRN_basic_type, MPNATRN_basic_type, NPNATRN_basic_type );
(( NPNATRN_basic_type * ) ( LPNATRN_basic_type.nonlocals )) -> Namedoutput = Namedoutput;
(( NPNATRN_basic_type * ) ( LPNATRN_basic_type.nonlocals )) -> Sort = Sort;
 /* line 767: */
A_CLOSURE( YPNATRN_coerce_tstr, ZPNATRN_coerce_tstr, AQNATRN_coerce_tstr );
(( AQNATRN_coerce_tstr * ) ( YPNATRN_coerce_tstr.nonlocals )) -> Sort = Sort;
(( AQNATRN_coerce_tstr * ) ( YPNATRN_coerce_tstr.nonlocals )) -> Namedoutput = Namedoutput;
(( AQNATRN_coerce_tstr * ) ( YPNATRN_coerce_tstr.nonlocals )) -> Env = Env;
(( AQNATRN_coerce_tstr * ) ( YPNATRN_coerce_tstr.nonlocals )) -> YPNATRN_coerce_tstr = YPNATRN_coerce_tstr;
 /* line 778: */
 /* line 779: */
MQNATRN = Type ;
switch ( MQNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
NQNATRN_tn = (MQNATRN.data.mode1);
 /* line 780: */
{ 
OQNATRN = (*(&(Env->Types))) ;
PQNATRN = (*(&(NQNATRN_tn->Typeno))) ;
QQNATRN_tdec = (*(&A_VINDEX(OQNATRN,PQNATRN)));
 /* line 781: */
 /* line 782: */
RQNATRN = (*(&(QQNATRN_tdec->Body))) ;
switch ( RQNATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
SQNATRN_tg = (RQNATRN.data.mode3);
 /* line 783: */
IPNATRN_coerce_type( (*(&(SQNATRN_tg->Tag))), Sort, Namedoutput, Env, &UQNATRN );
TQNATRN = UQNATRN;
break;
default: 
 /* line 784: */
 /* line 785: */
 /* line 786: */
A_CALLPROC(LPNATRN_basic_type,(A_UNITE(VQNATRN,mode1,1,NQNATRN_tn), &WQNATRN),(A_UNITE(VQNATRN,mode1,1,NQNATRN_tn), &WQNATRN,(LPNATRN_basic_type).nonlocals));
TQNATRN = WQNATRN;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE194,MODE210)  */
XQNATRN_tr = (MQNATRN.data.mode2);
 /* line 787: */
{ 
IPNATRN_coerce_type( (*(&(XQNATRN_tr->Elem))), Sort, Namedoutput, Env, &YQNATRN );
ZQNATRN_rc = YQNATRN;
 /* line 788: */
 /* line 789: */
if ( ZQNATRN_rc.C )
{ 
BRNATRN.Size = (*(&(XQNATRN_tr->Size)));
BRNATRN.Elem = ZQNATRN_rc.T;
CRNATRN = A_HEAP(A68_212 ) ;
(*CRNATRN) = BRNATRN ;
ARNATRN.T = A_UNITE(DRNATRN,mode2,2,CRNATRN);
 /* line 790: */
ARNATRN.C = A68_TRUE;
TQNATRN = ARNATRN;
} 
else
{ 
ERNATRN.T = A_UNITE(FRNATRN,mode2,2,XQNATRN_tr);
 /* line 791: */
 /* line 792: */
 /* line 793: */
ERNATRN.C = A68_FALSE;
TQNATRN = ERNATRN;
} 
} 
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
GRNATRN_ts = (MQNATRN.data.mode3);
 /* line 794: */
{ 
A_CALLPROC(YPNATRN_coerce_tstr,(GRNATRN_ts, &HRNATRN),(GRNATRN_ts, &HRNATRN,(YPNATRN_coerce_tstr).nonlocals));
IRNATRN_sc = HRNATRN;
 /* line 795: */
LRNATRN = IRNATRN_sc.T ;
JRNATRN.T = A_UNITE(KRNATRN,mode3,3,LRNATRN);
 /* line 796: */
 /* line 797: */
JRNATRN.C = IRNATRN_sc.C;
TQNATRN = JRNATRN;
} 
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
MRNATRN_tf = (MQNATRN.data.mode4);
 /* line 798: */
 /* line 799: */
if ( Namedoutput )
{ 
if ( (Sort==KKAATRN_usource) )
{ 
NRNATRN.T = (*(&(MRNATRN_tf->From)));
 /* line 800: */
NRNATRN.C = A68_TRUE;
TQNATRN = NRNATRN;
} 
else
{ 
if ( (Sort==LKAATRN_usink) )
{ 
ORNATRN.T = (*(&(MRNATRN_tf->To)));
 /* line 801: */
ORNATRN.C = A68_TRUE;
TQNATRN = ORNATRN;
} 
else
{ 
if ( (Sort==MKAATRN_uiosource) )
{ 
QRNATRN.From = (*(&(MRNATRN_tf->To)));
QRNATRN.To = (*(&(MRNATRN_tf->From)));
RRNATRN = A_HEAP(A68_214 ) ;
(*RRNATRN) = QRNATRN ;
PRNATRN.T = A_UNITE(SRNATRN,mode4,4,RRNATRN);
 /* line 802: */
PRNATRN.C = A68_TRUE;
TQNATRN = PRNATRN;
} 
else
{ 
TRNATRN.T = A_UNITE(URNATRN,mode4,4,MRNATRN_tf);
 /* line 803: */
 /* line 804: */
TRNATRN.C = A68_FALSE;
TQNATRN = TRNATRN;
} 
} 
} 
} 
else
{ 
if ( (Sort==KKAATRN_usource) )
{ 
VRNATRN.T = (*(&(MRNATRN_tf->To)));
 /* line 805: */
VRNATRN.C = A68_TRUE;
TQNATRN = VRNATRN;
} 
else
{ 
if ( (Sort==LKAATRN_usink) )
{ 
WRNATRN.T = (*(&(MRNATRN_tf->From)));
 /* line 806: */
WRNATRN.C = A68_TRUE;
TQNATRN = WRNATRN;
} 
else
{ 
if ( (Sort==NKAATRN_uiosink) )
{ 
YRNATRN.From = (*(&(MRNATRN_tf->To)));
YRNATRN.To = (*(&(MRNATRN_tf->From)));
ZRNATRN = A_HEAP(A68_214 ) ;
(*ZRNATRN) = YRNATRN ;
XRNATRN.T = A_UNITE(ASNATRN,mode4,4,ZRNATRN);
 /* line 807: */
XRNATRN.C = A68_TRUE;
TQNATRN = XRNATRN;
} 
else
{ 
BSNATRN.T = A_UNITE(CSNATRN,mode4,4,MRNATRN_tf);
 /* line 808: */
 /* line 809: */
 /* line 810: */
BSNATRN.C = A68_FALSE;
TQNATRN = BSNATRN;
} 
} 
} 
} 
break;
case 5: /* REF STRUCT(MODE210)  */
DSNATRN_tb = (MQNATRN.data.mode5);
 /* line 811: */
IPNATRN_coerce_type( (*(&(DSNATRN_tb->Type))), Sort, Namedoutput, Env, &ESNATRN );
TQNATRN = ESNATRN;
break;
default: 
 /* line 812: */
 /* line 813: */
A_CALLPROC(LPNATRN_basic_type,(Type, &FSNATRN),(Type, &FSNATRN,(LPNATRN_basic_type).nonlocals));
TQNATRN = FSNATRN;
break;
} 
} 
A_PROC_EXIT(coerce_type);
*ReturnedValue = (TQNATRN);
return;
} 
#undef NL

A68_VOID  ISNATRN_type_size(A68_210  T, A68_311 * Env, A68_194  *ReturnedValue)
{ 
A68_210  JSNATRN;  /* united object - for case conformity */
A68_211 * KSNATRN_tn;
A68_314  LSNATRN;  /* OPERATORS - simple index */
A68_INT  MSNATRN;  /* YIELD */
A68_223  NSNATRN;  /* united object - for case conformity */
A68_219 * OSNATRN_tv;
A68_194  PSNATRN;  /* clause result */
A68_194  QSNATRN;  /* avoid structure result */
A68_194  RSNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * SSNATRN;  /* YIELD */
A68_212 * TSNATRN_tr;
A68_213 * USNATRN_tst;
A68_194  VSNATRN;  /* avoid structure result */
A68_215 * WSNATRN_tb;
A68_194  XSNATRN;  /* avoid structure result */
A68_216 * YSNATRN_tg;
A68_194  BTNATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(type_size);
 /* line 816: */
 /* line 817: */
JSNATRN = T ;
switch ( JSNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
KSNATRN_tn = (JSNATRN.data.mode1);
 /* line 818: */
LSNATRN = (*(&(Env->Types))) ;
MSNATRN = (*(&(KSNATRN_tn->Typeno))) ;
NSNATRN = (*(&((*(&A_VINDEX(LSNATRN,MSNATRN)))->Body))) ;
switch ( NSNATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210)  */
OSNATRN_tv = (NSNATRN.data.mode3);
 /* line 819: */
ISNATRN_type_size( (*(&(OSNATRN_tv->Tag))), Env, &QSNATRN );
PSNATRN = QSNATRN;
break;
default: 
 /* line 820: */
 /* line 821: */
SSNATRN = NNMATRN_makefint(1) ;
PSNATRN = A_UNITE(RSNATRN,mode1,1,SSNATRN);
break;
} 
break;
case 2: /* REF STRUCT(MODE194,MODE210)  */
TSNATRN_tr = (JSNATRN.data.mode2);
 /* line 822: */
PSNATRN = (*(&(TSNATRN_tr->Size)));
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
USNATRN_tst = (JSNATRN.data.mode3);
 /* line 823: */
GFNATRN_tstr_size( USNATRN_tst, &VSNATRN );
PSNATRN = VSNATRN;
break;
case 5: /* REF STRUCT(MODE210)  */
WSNATRN_tb = (JSNATRN.data.mode5);
 /* line 824: */
ISNATRN_type_size( (*(&(WSNATRN_tb->Type))), Env, &XSNATRN );
PSNATRN = XSNATRN;
break;
case 6: /* REF STRUCT(MODE194,MODE210)  */
YSNATRN_tg = (JSNATRN.data.mode6);
 /* line 825: */
PSNATRN = (*(&(YSNATRN_tg->Size)));
break;
default: 
NKDAOST_sysfault(ATNATRN);
 /* line 826: */
PSNATRN = BTNATRN;
break;
} 
A_PROC_EXIT(type_size);
*ReturnedValue = (PSNATRN);
return;
} 
#undef NL

A68_INT  DTNATRN_names_size(A68_273 * Ns)
{ 
A68_273 * ETNATRN_nlist;
A68_INT  FTNATRN_size;
A68_INT  GTNATRN;  /* clause result */
A_PROC_ENTRY(names_size);
 /* line 830: */
{ 
ETNATRN_nlist = Ns;
 /* line 831: */
FTNATRN_size = 0;
 /* line 832: */
for ( ;; )
{ 
 /* line 833: */
if ( !((ETNATRN_nlist!=NAAATRN_nilnames)) ) break;
FTNATRN_size+=1;
ETNATRN_nlist = (*(&(ETNATRN_nlist->Rest)));
}
 /* line 834: */
 /* line 835: */
GTNATRN = FTNATRN_size;
} 
A_PROC_EXIT(names_size);
return( GTNATRN );
} 
#undef NL

A68_VOID  JTNATRN_names_type(A68_273 * Ns, A68_308 * Fdec, A68_210  *ReturnedValue)
{ 
A68_310  KTNATRN_nametypes;
A68_213 * LTNATRN_answer;
A68_213 ** MTNATRN_nexttstr;
A68_273 * NTNATRN_nlist;
A68_213  OTNATRN;  /* collateral clause result */
A68_INT  PTNATRN;  /* YIELD */
A68_213 * QTNATRN;  /* YIELD */
A68_210  RTNATRN;  /* clause result */
A68_210  STNATRN;  /* OPERATORS - mode -> union mode */
A68_210  TTNATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(names_type);
 /* line 838: */
{ 
KTNATRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 839: */
LTNATRN_answer = GAAATRN_niltstr;
 /* line 840: */
MTNATRN_nexttstr = (&LTNATRN_answer);
 /* line 841: */
NTNATRN_nlist = Ns;
 /* line 842: */
for ( ;; )
{ 
 /* line 843: */
if ( !((NTNATRN_nlist!=NAAATRN_nilnames)) ) break;
 /* line 844: */
PTNATRN = (*(&(NTNATRN_nlist->Nameno))) ;
OTNATRN.Elem = (*(&((&A_VINDEX(KTNATRN_nametypes,PTNATRN))->Type)));
OTNATRN.Rest = GAAATRN_niltstr;
QTNATRN = A_HEAP(A68_213 ) ;
(*QTNATRN) = OTNATRN ;
(*MTNATRN_nexttstr) = QTNATRN;
 /* line 845: */
MTNATRN_nexttstr = (&((*MTNATRN_nexttstr)->Rest));
 /* line 846: */
 /* line 847: */
NTNATRN_nlist = (*(&(NTNATRN_nlist->Rest)));
}
 /* line 849: */
 /* line 850: */
if ( (LTNATRN_answer==GAAATRN_niltstr) )
{ 
RTNATRN = A_UNITE(STNATRN,mode9,9,(&DIAATRN_tnull));
} 
else
{ 
 /* line 851: */
if ( ((*(&(LTNATRN_answer->Rest)))==GAAATRN_niltstr) )
{ 
 /* line 852: */
RTNATRN = (*(&(LTNATRN_answer->Elem)));
} 
else
{ 
 /* line 853: */
RTNATRN = A_UNITE(TTNATRN,mode3,3,LTNATRN_answer);
} 
} 
} 
A_PROC_EXIT(names_type);
*ReturnedValue = (RTNATRN);
return;
} 
#undef NL

A68_INT  WTNATRN_names_index(A68_273 * Ns, A68_INT  Nameno)
{ 
A68_273 * XTNATRN_names;
A68_INT  YTNATRN_index;
A68_INT  ZTNATRN_i;
A68_BOOL  AUNATRN;  /* optbool result */
A68_INT  BUNATRN;  /* clause result */
A_PROC_ENTRY(names_index);
 /* line 856: */
{ 
XTNATRN_names = Ns;
 /* line 857: */
YTNATRN_index = (-1);
 /* line 858: */
for ( ZTNATRN_i = 1;;
ZTNATRN_i += 1 ) 
{ 
AUNATRN = (YTNATRN_index==(-1));
if ( AUNATRN )
{ /* line 859: */
AUNATRN = (XTNATRN_names!=NAAATRN_nilnames);
}
if ( !(AUNATRN) ) break;
 /* line 860: */
if ( ((*(&(XTNATRN_names->Nameno)))==Nameno) )
{ 
 /* line 861: */
YTNATRN_index = ZTNATRN_i;
} 
else
{ 
 /* line 862: */
 /* line 863: */
XTNATRN_names = (*(&(XTNATRN_names->Rest)));
} 
}
 /* line 864: */
 /* line 865: */
BUNATRN = YTNATRN_index;
} 
A_PROC_EXIT(names_index);
return( BUNATRN );
} 
#undef NL

A68_INT  EUNATRN_uportname_index(A68_241 * Up, A68_311 * Env)
{ 
A68_316  FUNATRN;  /* OPERATORS - simple index */
A68_INT  GUNATRN;  /* YIELD */
A68_308 * HUNATRN_ft;
A68_INT  IUNATRN_index;
A68_BOOL  JUNATRN;  /* optbool result */
A68_INT  KUNATRN;  /* clause result */
A_PROC_ENTRY(uportname_index);
 /* line 868: */
 /* line 870: */
{ 
FUNATRN = (*(&(Env->Fns))) ;
GUNATRN = (*(&(Up->Fnno))) ;
HUNATRN_ft = (*(&A_VINDEX(FUNATRN,GUNATRN)));
 /* line 871: */
IUNATRN_index = WTNATRN_names_index((*(&(HUNATRN_ft->Inputs))), (*(&(Up->Nameno))));
 /* line 872: */
 /* line 873: */
if ( (IUNATRN_index>(-1)) )
{ 
 /* line 874: */
if ( ((*(&((*(&(HUNATRN_ft->Inputs)))->Rest)))==NAAATRN_nilnames) )
{ 
 /* line 875: */
 /* line 876: */
IUNATRN_index = 0;
} 
} 
else
{ 
IUNATRN_index = WTNATRN_names_index((*(&(HUNATRN_ft->Outputs))), (*(&(Up->Nameno))));
 /* line 877: */
JUNATRN = (IUNATRN_index==1);
if ( JUNATRN )
{ /* line 878: */
JUNATRN = ((*(&((*(&(HUNATRN_ft->Outputs)))->Rest)))==NAAATRN_nilnames);
}
if ( JUNATRN )
{ 
 /* line 879: */
 /* line 880: */
IUNATRN_index = 0;
} 
} 
 /* line 881: */
 /* line 882: */
KUNATRN = IUNATRN_index;
} 
A_PROC_EXIT(uportname_index);
return( KUNATRN );
} 
#undef NL

A68_214 * MUNATRN_fndec_tfn(A68_308 * Fdec)
{ 
A68_214  NUNATRN;  /* collateral clause result */
A68_210  OUNATRN;  /* avoid structure result */
A68_210  PUNATRN;  /* avoid structure result */
A68_214 * QUNATRN;  /* clause result */
A68_214 * RUNATRN;  /* YIELD */
A_PROC_ENTRY(fndec_tfn);
 /* line 886: */
 /* line 887: */
 /* line 888: */
JTNATRN_names_type( (*(&(Fdec->Inputs))), Fdec, &OUNATRN );
NUNATRN.From = OUNATRN;
 /* line 889: */
JTNATRN_names_type( (*(&(Fdec->Outputs))), Fdec, &PUNATRN );
NUNATRN.To = PUNATRN;
RUNATRN = A_HEAP(A68_214 ) ;
(*RUNATRN) = NUNATRN ;
QUNATRN = RUNATRN;
A_PROC_EXIT(fndec_tfn);
return( QUNATRN );
} 
#undef NL

A68_VOID  VUNATRN_unit_type(A68_232  U, A68_308 * Fdec, A68_311 * Env, A68_210  *ReturnedValue)
{ 
A68_506  YUNATRN_ustr_tstr;   /* proc value of non-global proc */
A68_232  GVNATRN;  /* united object - for case conformity */
A68_226 * HVNATRN_cn;
A68_315  IVNATRN;  /* OPERATORS - simple index */
A68_INT  JVNATRN;  /* YIELD */
A68_231 * KVNATRN_cdec;
A68_210  LVNATRN;  /* clause result */
A68_210  MVNATRN;  /* avoid structure result */
A68_227 * NVNATRN_cp;
A68_210  OVNATRN;  /* OPERATORS - mode -> union mode */
A68_211 * PVNATRN;  /* YIELD */
A68_228 * QVNATRN_ci;
A68_210  RVNATRN;  /* OPERATORS - mode -> union mode */
A68_211 * SVNATRN;  /* YIELD */
A68_230 * TVNATRN_cqy;
A68_233 * UVNATRN_cq;
A68_216  VVNATRN;  /* collateral clause result */
A68_194  WVNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * XVNATRN;  /* YIELD */
A68_210  YVNATRN;  /* OPERATORS - mode -> union mode */
A68_211 * ZVNATRN;  /* YIELD */
A68_216 * AWNATRN;  /* YIELD */
A68_210  BWNATRN;  /* OPERATORS - mode -> union mode */
A68_229 * CWNATRN_cr;
A68_210  DWNATRN;  /* OPERATORS - mode -> union mode */
A68_211 * EWNATRN;  /* YIELD */
A68_215 * FWNATRN_cn;
A68_235 * GWNATRN_cg;
A68_210  HWNATRN;  /* OPERATORS - mode -> union mode */
A68_211 * IWNATRN;  /* YIELD */
A68_234 * JWNATRN_cv;
A68_210  KWNATRN;  /* OPERATORS - mode -> union mode */
A68_236 * LWNATRN_ua;
A68_210  MWNATRN;  /* avoid structure result */
A68_237 * NWNATRN_un;
A68_310  OWNATRN;  /* OPERATORS - simple index */
A68_INT  PWNATRN;  /* YIELD */
A68_210  QWNATRN_ut;
A68_BOOL  RWNATRN_namedoutput;
A68_273 * SWNATRN_outputs;
A68_BOOL  TWNATRN;  /* optbool result */
A68_361  UWNATRN;  /* avoid structure result */
A68_239 * VWNATRN_ua;
A68_210  WWNATRN;  /* OPERATORS - mode -> union mode */
A68_211 * XWNATRN;  /* YIELD */
A68_240 * YWNATRN_ue;
A68_314  ZWNATRN;  /* OPERATORS - simple index */
A68_INT  AXNATRN;  /* YIELD */
A68_225 * BXNATRN_tdec;
A68_223  CXNATRN;  /* united object - for case conformity */
A68_224  DXNATRN_pi;
A68_INT  EXNATRN;  /* YIELD */
A68_210  HXNATRN;  /* OPERATORS - mode -> union mode */
A68_241 * IXNATRN_uti;
A68_210  JXNATRN;  /* avoid structure result */
A68_210  KXNATRN_tti;
A68_INT  LXNATRN_index;
A68_210  OXNATRN;  /* OPERATORS - mode -> union mode */
A68_194  PXNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * QXNATRN;  /* YIELD */
A68_194  RXNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * SXNATRN;  /* YIELD */
A68_210  TXNATRN;  /* avoid structure result */
A68_242 * UXNATRN_ui;
A68_210  VXNATRN;  /* avoid structure result */
A68_210  WXNATRN_ti;
A68_194  XXNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * YXNATRN;  /* YIELD */
A68_210  ZXNATRN;  /* avoid structure result */
A68_243 * AYNATRN_ut;
A68_210  BYNATRN;  /* avoid structure result */
A68_210  CYNATRN_tt;
A68_194  DYNATRN_lwb;
A68_194  EYNATRN_upb;
A68_199  FYNATRN;  /* collateral clause result */
A68_199  GYNATRN;  /* collateral clause result */
A68_199 * HYNATRN;  /* YIELD */
A68_194  IYNATRN;  /* OPERATORS - mode -> union mode */
A68_194  JYNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * KYNATRN;  /* YIELD */
A68_199 * MYNATRN;  /* YIELD */
A68_194  NYNATRN;  /* OPERATORS - mode -> union mode */
A68_194  OYNATRN;  /* avoid structure result */
A68_194  LYNATRN_size;
A68_210  PYNATRN;  /* avoid structure result */
A68_244 * QYNATRN_ud;
A68_210  RYNATRN;  /* avoid structure result */
A68_210  SYNATRN_td;
A68_194  TYNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * UYNATRN;  /* YIELD */
A68_194  VYNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * WYNATRN;  /* YIELD */
A68_210  XYNATRN;  /* avoid structure result */
A68_245 * YYNATRN_ua;
A68_210  ZYNATRN;  /* avoid structure result */
A68_246 * AZNATRN_ur;
A68_210  BZNATRN;  /* avoid structure result */
A68_210  CZNATRN_tr;
A68_194  DZNATRN;  /* united object - for case conformity */
A68_198 * EZNATRN_fn;
A68_313  FZNATRN;  /* OPERATORS - simple index */
A68_INT  GZNATRN;  /* YIELD */
A68_208  HZNATRN;  /* united object - for case conformity */
A68_209  IZNATRN_rg;
A68_199  JZNATRN;  /* collateral clause result */
A68_199  KZNATRN;  /* collateral clause result */
A68_199 * LZNATRN;  /* YIELD */
A68_194  MZNATRN;  /* OPERATORS - mode -> union mode */
A68_194  NZNATRN;  /* OPERATORS - mode -> union mode */
A68_195 * OZNATRN;  /* YIELD */
A68_194  PZNATRN;  /* clause result */
A68_199 * QZNATRN;  /* YIELD */
A68_194  RZNATRN;  /* OPERATORS - mode -> union mode */
A68_194  SZNATRN;  /* avoid structure result */
A68_194  TZNATRN_size;
A68_212  UZNATRN;  /* collateral clause result */
A68_212 * VZNATRN;  /* YIELD */
A68_210  WZNATRN;  /* OPERATORS - mode -> union mode */
A68_247 * XZNATRN_ust;
A68_210  YZNATRN;  /* OPERATORS - mode -> union mode */
A68_213 * ZZNATRN;  /* YIELD */
A68_248 * AAOATRN_ucc;
A68_210  BAOATRN;  /* avoid structure result */
A68_210  CAOATRN_l;
A68_210  DAOATRN;  /* avoid structure result */
A68_210  EAOATRN_r;
A68_210  FAOATRN;  /* avoid structure result */
A68_249 * GAOATRN_um;
A68_316  HAOATRN;  /* OPERATORS - simple index */
A68_INT  IAOATRN;  /* YIELD */
A68_308 * JAOATRN_fdec;
A68_250 * KAOATRN_ud;
A68_316  LAOATRN;  /* OPERATORS - simple index */
A68_INT  MAOATRN;  /* YIELD */
A68_308 * NAOATRN_fdec;
A68_251 * OAOATRN_uc;
A68_210  PAOATRN;  /* avoid structure result */
A68_252 * QAOATRN_ucond;
A68_210  RAOATRN;  /* avoid structure result */
A68_210  SAOATRN_true;
A68_210  TAOATRN;  /* avoid structure result */
A68_210  UAOATRN_false;
A68_210  VAOATRN;  /* avoid structure result */
A68_253 * WAOATRN_urepl;
A68_194  XAOATRN;  /* united object - for case conformity */
A68_198 * YAOATRN_fn;
A68_INT  ZAOATRN;  /* clause result */
A68_INT  CBOATRN;  /* OPERATORS - skip to mode */
A68_INT  DBOATRN_intno;
A68_313  EBOATRN;  /* OPERATORS - simple index */
A68_208  FBOATRN;  /* united object - for case conformity */
A68_209  GBOATRN_rg;
A68_209  HBOATRN;  /* clause result */
A68_209  KBOATRN;  /* OPERATORS - skip to mode */
A68_209  LBOATRN_range;
A68_199  MBOATRN;  /* collateral clause result */
A68_199  NBOATRN;  /* collateral clause result */
A68_199 * OBOATRN;  /* YIELD */
A68_194  PBOATRN;  /* OPERATORS - mode -> union mode */
A68_194  QBOATRN;  /* OPERATORS - mode -> union mode */
A68_195 * RBOATRN;  /* YIELD */
A68_199 * TBOATRN;  /* YIELD */
A68_194  UBOATRN;  /* OPERATORS - mode -> union mode */
A68_194  VBOATRN;  /* avoid structure result */
A68_194  SBOATRN_size;
A68_210  WBOATRN;  /* avoid structure result */
A68_210  XBOATRN_t;
A68_212  YBOATRN;  /* collateral clause result */
A68_212 * ZBOATRN;  /* YIELD */
A68_210  ACOATRN;  /* OPERATORS - mode -> union mode */
A68_254 * BCOATRN_useq;
A68_210  CCOATRN;  /* avoid structure result */
A68_255 * DCOATRN_user;
A68_210  ECOATRN;  /* avoid structure result */
A68_256 * FCOATRN_ua;
A68_210  GCOATRN;  /* avoid structure result */
A68_257 * HCOATRN_uck;
A68_210  ICOATRN;  /* avoid structure result */
A68_258 * JCOATRN_ub;
A68_210  KCOATRN;  /* avoid structure result */
A68_259 * LCOATRN_ug;
A68_210  MCOATRN;  /* avoid structure result */
A68_210  NCOATRN_tg;
A68_216  OCOATRN;  /* collateral clause result */
A68_216 * PCOATRN;  /* YIELD */
A68_210  QCOATRN;  /* OPERATORS - mode -> union mode */
A68_238 * RCOATRN_uf;
A68_210  SCOATRN;  /* avoid structure result */
A68_210  TCOATRN_tsink;
A68_210  UCOATRN;  /* avoid structure result */
A68_210  VCOATRN_tsrc;
A68_214  WCOATRN;  /* collateral clause result */
A68_214 * XCOATRN;  /* YIELD */
A68_210  YCOATRN;  /* OPERATORS - mode -> union mode */
A68_260 * ZCOATRN_un;
A68_210  ADOATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(unit_type);
 /* line 892: */
 /* line 893: */
{ 
A_CLOSURE( YUNATRN_ustr_tstr, ZUNATRN_ustr_tstr, AVNATRN_ustr_tstr );
(( AVNATRN_ustr_tstr * ) ( YUNATRN_ustr_tstr.nonlocals )) -> Fdec = Fdec;
(( AVNATRN_ustr_tstr * ) ( YUNATRN_ustr_tstr.nonlocals )) -> Env = Env;
(( AVNATRN_ustr_tstr * ) ( YUNATRN_ustr_tstr.nonlocals )) -> YUNATRN_ustr_tstr = YUNATRN_ustr_tstr;
 /* line 900: */
 /* line 901: */
GVNATRN = U ;
switch ( GVNATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
HVNATRN_cn = (GVNATRN.data.mode1);
{ 
IVNATRN = (*(&(Env->Consts))) ;
JVNATRN = (*(&(HVNATRN_cn->Constno))) ;
KVNATRN_cdec = (*(&A_VINDEX(IVNATRN,JVNATRN)));
 /* line 902: */
 /* line 903: */
 /* line 904: */
VUNATRN_unit_type( (*(&(KVNATRN_cdec->Value))), Fdec, Env, &MVNATRN );
LVNATRN = MVNATRN;
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
NVNATRN_cp = (GVNATRN.data.mode2);
 /* line 905: */
PVNATRN = IFAATRN_maketname((*(&(NVNATRN_cp->Typeno)))) ;
LVNATRN = A_UNITE(OVNATRN,mode1,1,PVNATRN);
break;
case 3: /* REF STRUCT(INT,MODE194)  */
QVNATRN_ci = (GVNATRN.data.mode3);
 /* line 906: */
SVNATRN = IFAATRN_maketname((*(&(QVNATRN_ci->Typeno)))) ;
LVNATRN = A_UNITE(RVNATRN,mode1,1,SVNATRN);
break;
case 4: /* REF STRUCT(MODE210)  */
TVNATRN_cqy = (GVNATRN.data.mode4);
 /* line 907: */
LVNATRN = (*(&(TVNATRN_cqy->Querytype)));
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
UVNATRN_cq = (GVNATRN.data.mode5);
 /* line 908: */
XVNATRN = NNMATRN_makefint((*(&(UVNATRN_cq->String))).upb) ;
VVNATRN.Size = A_UNITE(WVNATRN,mode1,1,XVNATRN);
ZVNATRN = IFAATRN_maketname((*(&(UVNATRN_cq->Typeno)))) ;
VVNATRN.Char = A_UNITE(YVNATRN,mode1,1,ZVNATRN);
 /* line 909: */
AWNATRN = A_HEAP(A68_216 ) ;
(*AWNATRN) = VVNATRN ;
LVNATRN = A_UNITE(BWNATRN,mode6,6,AWNATRN);
break;
case 8: /* REF STRUCT(INT,MODE209)  */
CWNATRN_cr = (GVNATRN.data.mode8);
 /* line 910: */
EWNATRN = IFAATRN_maketname((*(&(CWNATRN_cr->Typeno)))) ;
LVNATRN = A_UNITE(DWNATRN,mode1,1,EWNATRN);
break;
case 7: /* REF STRUCT(MODE210)  */
FWNATRN_cn = (GVNATRN.data.mode7);
 /* line 911: */
LVNATRN = (*(&(FWNATRN_cn->Type)));
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
GWNATRN_cg = (GVNATRN.data.mode9);
 /* line 912: */
IWNATRN = IFAATRN_maketname((*(&(GWNATRN_cg->Typeno)))) ;
LVNATRN = A_UNITE(HWNATRN,mode1,1,IWNATRN);
break;
case 6: /* REF STRUCT(INT)  */
JWNATRN_cv = (GVNATRN.data.mode6);
 /* line 913: */
LVNATRN = A_UNITE(KWNATRN,mode7,7,(&PIAATRN_tvoid));
break;
case 10: /* REF STRUCT(MODE232,REF MODE236)  */
LWNATRN_ua = (GVNATRN.data.mode10);
 /* line 914: */
VUNATRN_unit_type( (*(&(LWNATRN_ua->Alt))), Fdec, Env, &MWNATRN );
LVNATRN = MWNATRN;
break;
case 11: /* REF STRUCT(INT,INT)  */
NWNATRN_un = (GVNATRN.data.mode11);
 /* line 915: */
{ 
OWNATRN = (*(&(Fdec->Nametypes))) ;
PWNATRN = (*(&(NWNATRN_un->Nameno))) ;
QWNATRN_ut = (*(&((&A_VINDEX(OWNATRN,PWNATRN))->Type)));
 /* line 916: */
RWNATRN_namedoutput = A68_FALSE;
 /* line 917: */
SWNATRN_outputs = (*(&(Fdec->Outputs)));
 /* line 918: */
for ( ;; )
{ 
 /* line 919: */
TWNATRN = (SWNATRN_outputs!=NAAATRN_nilnames);
if ( TWNATRN )
{TWNATRN = !RWNATRN_namedoutput;
}
if ( !(TWNATRN) ) break;
 /* line 920: */
if ( ((*(&(SWNATRN_outputs->Nameno)))==(*(&(NWNATRN_un->Nameno)))) )
{ 
 /* line 921: */
RWNATRN_namedoutput = A68_TRUE;
} 
 /* line 922: */
 /* line 923: */
SWNATRN_outputs = (*(&(SWNATRN_outputs->Rest)));
}
 /* line 924: */
 /* line 925: */
 /* line 926: */
IPNATRN_coerce_type( QWNATRN_ut, (*(&(NWNATRN_un->Sort))), RWNATRN_namedoutput, Env, &UWNATRN );
LVNATRN = UWNATRN.T;
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE232)  */
VWNATRN_ua = (GVNATRN.data.mode13);
 /* line 927: */
XWNATRN = IFAATRN_maketname((*(&(VWNATRN_ua->Typeno)))) ;
LVNATRN = A_UNITE(WWNATRN,mode1,1,XWNATRN);
break;
case 14: /* REF STRUCT(MODE232,INT,INT)  */
YWNATRN_ue = (GVNATRN.data.mode14);
 /* line 928: */
{ 
ZWNATRN = (*(&(Env->Types))) ;
AXNATRN = (*(&(YWNATRN_ue->Typeno))) ;
BXNATRN_tdec = (*(&A_VINDEX(ZWNATRN,AXNATRN)));
 /* line 929: */
 /* line 930: */
CXNATRN = (*(&(BXNATRN_tdec->Body))) ;
switch ( CXNATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE221 */
DXNATRN_pi = (CXNATRN.data.mode1);
 /* line 931: */
EXNATRN = (*(&(YWNATRN_ue->Altno))) ;
LVNATRN = (*(&((&A_VINDEX(DXNATRN_pi,EXNATRN))->Assoc)));
break;
default: 
{ 
NKDAOST_sysfault(GXNATRN);
 /* line 932: */
 /* line 933: */
 /* line 934: */
LVNATRN = A_UNITE(HXNATRN,mode9,9,(&DIAATRN_tnull));
} 
break;
} 
} 
break;
case 15: /* REF STRUCT(MODE232,INT,INT)  */
IXNATRN_uti = (GVNATRN.data.mode15);
 /* line 935: */
{ 
VUNATRN_unit_type( (*(&(IXNATRN_uti->Unit))), Fdec, Env, &JXNATRN );
KXNATRN_tti = JXNATRN;
 /* line 936: */
LXNATRN_index = EUNATRN_uportname_index(IXNATRN_uti, Env);
 /* line 937: */
if ( (LXNATRN_index==(-1)) )
{ 
NKDAOST_sysfault(NXNATRN);
 /* line 938: */
LVNATRN = A_UNITE(OXNATRN,mode9,9,(&DIAATRN_tnull));
} 
else
{ 
 /* line 939: */
if ( (LXNATRN_index==0) )
{ 
LVNATRN = KXNATRN_tti;
} 
else
{ 
 /* line 940: */
 /* line 941: */
 /* line 942: */
QXNATRN = NNMATRN_makefint(0) ;
SXNATRN = NNMATRN_makefint(LXNATRN_index) ;
RFNATRN_trim( KXNATRN_tti, A_UNITE(RXNATRN,mode1,1,SXNATRN), A_UNITE(PXNATRN,mode1,1,QXNATRN), Env, &TXNATRN );
LVNATRN = TXNATRN;
} 
} 
} 
break;
case 16: /* REF STRUCT(MODE232,MODE194)  */
UXNATRN_ui = (GVNATRN.data.mode16);
{ 
VUNATRN_unit_type( (*(&(UXNATRN_ui->Unit))), Fdec, Env, &VXNATRN );
WXNATRN_ti = VXNATRN;
 /* line 943: */
 /* line 944: */
 /* line 945: */
YXNATRN = NNMATRN_makefint(0) ;
RFNATRN_trim( WXNATRN_ti, (*(&(UXNATRN_ui->Index))), A_UNITE(XXNATRN,mode1,1,YXNATRN), Env, &ZXNATRN );
LVNATRN = ZXNATRN;
} 
break;
case 17: /* REF STRUCT(MODE232,MODE209)  */
AYNATRN_ut = (GVNATRN.data.mode17);
{ 
VUNATRN_unit_type( (*(&(AYNATRN_ut->Unit))), Fdec, Env, &BYNATRN );
CYNATRN_tt = BYNATRN;
 /* line 946: */
DYNATRN_lwb = (*(&((&(AYNATRN_ut->Range))->Lwb)));
 /* line 947: */
EYNATRN_upb = (*(&((&(AYNATRN_ut->Range))->Upb)));
 /* line 948: */
 /* line 949: */
GYNATRN.Left = EYNATRN_upb;
GYNATRN.Sort = JJAATRN_fminus;
GYNATRN.Right = DYNATRN_lwb;
HYNATRN = A_HEAP(A68_199 ) ;
(*HYNATRN) = GYNATRN ;
FYNATRN.Left = A_UNITE(IYNATRN,mode5,5,HYNATRN);
FYNATRN.Sort = IJAATRN_fplus;
KYNATRN = NNMATRN_makefint(1) ;
FYNATRN.Right = A_UNITE(JYNATRN,mode1,1,KYNATRN);
MYNATRN = A_HEAP(A68_199 ) ;
(*MYNATRN) = FYNATRN ;
XDNATRN_simplify_formula( A_UNITE(NYNATRN,mode5,5,MYNATRN), &OYNATRN );
LYNATRN_size = OYNATRN;
 /* line 950: */
 /* line 951: */
 /* line 952: */
RFNATRN_trim( CYNATRN_tt, DYNATRN_lwb, LYNATRN_size, Env, &PYNATRN );
LVNATRN = PYNATRN;
} 
break;
case 18: /* REF STRUCT(MODE232,MODE232)  */
QYNATRN_ud = (GVNATRN.data.mode18);
{ 
VUNATRN_unit_type( (*(&(QYNATRN_ud->Unit))), Fdec, Env, &RYNATRN );
SYNATRN_td = RYNATRN;
 /* line 953: */
 /* line 954: */
 /* line 955: */
UYNATRN = NNMATRN_makefint(0) ;
WYNATRN = NNMATRN_makefint(1) ;
RFNATRN_trim( SYNATRN_td, A_UNITE(VYNATRN,mode1,1,WYNATRN), A_UNITE(TYNATRN,mode1,1,UYNATRN), Env, &XYNATRN );
LVNATRN = XYNATRN;
} 
break;
case 19: /* REF STRUCT(MODE232,MODE232,MODE232)  */
YYNATRN_ua = (GVNATRN.data.mode19);
 /* line 956: */
VUNATRN_unit_type( (*(&(YYNATRN_ua->Unit))), Fdec, Env, &ZYNATRN );
LVNATRN = ZYNATRN;
break;
case 20: /* REF STRUCT(MODE194,MODE232)  */
AZNATRN_ur = (GVNATRN.data.mode20);
 /* line 957: */
{ 
VUNATRN_unit_type( (*(&(AZNATRN_ur->Elem))), Fdec, Env, &BZNATRN );
CZNATRN_tr = BZNATRN;
 /* line 958: */
 /* line 959: */
 /* line 960: */
DZNATRN = (*(&(AZNATRN_ur->Size))) ;
switch ( DZNATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
EZNATRN_fn = (DZNATRN.data.mode4);
 /* line 961: */
 /* line 962: */
FZNATRN = (*(&(Env->Ints))) ;
GZNATRN = (*(&(EZNATRN_fn->Intno))) ;
HZNATRN = (*(&((*(&A_VINDEX(FZNATRN,GZNATRN)))->Value))) ;
switch ( HZNATRN.mode )
{ 
case 11: /* STRUCT(MODE194,MODE194)  */
IZNATRN_rg = (HZNATRN.data.mode11);
 /* line 963: */
KZNATRN.Left = IZNATRN_rg.Upb;
KZNATRN.Sort = JJAATRN_fminus;
KZNATRN.Right = IZNATRN_rg.Lwb;
 /* line 964: */
LZNATRN = A_HEAP(A68_199 ) ;
(*LZNATRN) = KZNATRN ;
JZNATRN.Left = A_UNITE(MZNATRN,mode5,5,LZNATRN);
JZNATRN.Sort = IJAATRN_fplus;
OZNATRN = NNMATRN_makefint(1) ;
JZNATRN.Right = A_UNITE(NZNATRN,mode1,1,OZNATRN);
 /* line 965: */
 /* line 966: */
QZNATRN = A_HEAP(A68_199 ) ;
(*QZNATRN) = JZNATRN ;
XDNATRN_simplify_formula( A_UNITE(RZNATRN,mode5,5,QZNATRN), &SZNATRN );
PZNATRN = SZNATRN;
break;
default: 
 /* line 967: */
 /* line 968: */
PZNATRN = (*(&(AZNATRN_ur->Size)));
break;
} 
break;
default: 
PZNATRN = (*(&(AZNATRN_ur->Size)));
break;
} 
TZNATRN_size = PZNATRN;
 /* line 969: */
UZNATRN.Size = TZNATRN_size;
 /* line 970: */
UZNATRN.Elem = CZNATRN_tr;
 /* line 971: */
VZNATRN = A_HEAP(A68_212 ) ;
(*VZNATRN) = UZNATRN ;
LVNATRN = A_UNITE(WZNATRN,mode2,2,VZNATRN);
} 
break;
case 21: /* REF STRUCT(MODE232,REF MODE247)  */
XZNATRN_ust = (GVNATRN.data.mode21);
 /* line 972: */
ZZNATRN = A_CALLPROC(YUNATRN_ustr_tstr,(XZNATRN_ust),(XZNATRN_ust,(YUNATRN_ustr_tstr).nonlocals)) ;
LVNATRN = A_UNITE(YZNATRN,mode3,3,ZZNATRN);
break;
case 22: /* REF STRUCT(BOOL,INT,MODE232,MODE232)  */
AAOATRN_ucc = (GVNATRN.data.mode22);
 /* line 973: */
{ 
VUNATRN_unit_type( (*(&(AAOATRN_ucc->Left))), Fdec, Env, &BAOATRN );
CAOATRN_l = BAOATRN;
 /* line 974: */
VUNATRN_unit_type( (*(&(AAOATRN_ucc->Right))), Fdec, Env, &DAOATRN );
EAOATRN_r = DAOATRN;
 /* line 975: */
 /* line 976: */
 /* line 977: */
XMNATRN_uconc_type( (*(&(AAOATRN_ucc->String))), (*(&(AAOATRN_ucc->Sort))), CAOATRN_l, EAOATRN_r, Env, &FAOATRN );
LVNATRN = FAOATRN;
} 
break;
case 23: /* REF STRUCT(MODE272,MODE232)  */
GAOATRN_um = (GVNATRN.data.mode23);
 /* line 978: */
{ 
HAOATRN = (*(&(Env->Fns))) ;
IAOATRN = (*(&((&(GAOATRN_um->Inst))->Fnno))) ;
JAOATRN_fdec = (*(&A_VINDEX(HAOATRN,IAOATRN)));
 /* line 979: */
 /* line 980: */
 /* line 981: */
LVNATRN = (*(&(MUNATRN_fndec_tfn(JAOATRN_fdec)->To)));
} 
break;
case 24: /* REF STRUCT(MODE232,MODE272,MODE232)  */
KAOATRN_ud = (GVNATRN.data.mode24);
 /* line 982: */
{ 
LAOATRN = (*(&(Env->Fns))) ;
MAOATRN = (*(&((&(KAOATRN_ud->Inst))->Fnno))) ;
NAOATRN_fdec = (*(&A_VINDEX(LAOATRN,MAOATRN)));
 /* line 983: */
 /* line 984: */
 /* line 985: */
LVNATRN = (*(&(MUNATRN_fndec_tfn(NAOATRN_fdec)->To)));
} 
break;
case 25: /* REF STRUCT(MODE232,REF MODE292)  */
OAOATRN_uc = (GVNATRN.data.mode25);
 /* line 986: */
 /* line 987: */
VUNATRN_unit_type( (*(&((*(&(OAOATRN_uc->Choices)))->Output))), Fdec, Env, &PAOATRN );
LVNATRN = PAOATRN;
break;
case 26: /* REF STRUCT(MODE194,MODE232,MODE232)  */
QAOATRN_ucond = (GVNATRN.data.mode26);
 /* line 988: */
{ 
VUNATRN_unit_type( (*(&(QAOATRN_ucond->True))), Fdec, Env, &RAOATRN );
SAOATRN_true = RAOATRN;
 /* line 989: */
VUNATRN_unit_type( (*(&(QAOATRN_ucond->False))), Fdec, Env, &TAOATRN );
UAOATRN_false = TAOATRN;
 /* line 990: */
 /* line 991: */
 /* line 992: */
KJNATRN_uif_type( (*(&(QAOATRN_ucond->Cond))), SAOATRN_true, UAOATRN_false, Env, &VAOATRN );
LVNATRN = VAOATRN;
} 
break;
case 27: /* REF STRUCT(MODE194,MODE232)  */
WAOATRN_urepl = (GVNATRN.data.mode27);
 /* line 993: */
{ 
 /* line 995: */
XAOATRN = (*(&(WAOATRN_urepl->Repl))) ;
switch ( XAOATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
YAOATRN_fn = (XAOATRN.data.mode4);
 /* line 996: */
ZAOATRN = (*(&(YAOATRN_fn->Intno)));
break;
default: 
NKDAOST_sysfault(BBOATRN);
 /* line 997: */
ZAOATRN = CBOATRN;
break;
} 
DBOATRN_intno = ZAOATRN;
 /* line 998: */
 /* line 999: */
 /* line 1000: */
EBOATRN = (*(&(Env->Ints))) ;
FBOATRN = (*(&((*(&A_VINDEX(EBOATRN,DBOATRN_intno)))->Value))) ;
switch ( FBOATRN.mode )
{ 
case 11: /* STRUCT(MODE194,MODE194)  */
GBOATRN_rg = (FBOATRN.data.mode11);
 /* line 1001: */
HBOATRN = GBOATRN_rg;
break;
default: 
NKDAOST_sysfault(JBOATRN);
 /* line 1002: */
HBOATRN = KBOATRN;
break;
} 
LBOATRN_range = HBOATRN;
 /* line 1003: */
 /* line 1004: */
NBOATRN.Left = LBOATRN_range.Upb;
NBOATRN.Sort = JJAATRN_fminus;
NBOATRN.Right = LBOATRN_range.Lwb;
 /* line 1005: */
OBOATRN = A_HEAP(A68_199 ) ;
(*OBOATRN) = NBOATRN ;
MBOATRN.Left = A_UNITE(PBOATRN,mode5,5,OBOATRN);
MBOATRN.Sort = IJAATRN_fplus;
RBOATRN = NNMATRN_makefint(1) ;
MBOATRN.Right = A_UNITE(QBOATRN,mode1,1,RBOATRN);
TBOATRN = A_HEAP(A68_199 ) ;
(*TBOATRN) = MBOATRN ;
XDNATRN_simplify_formula( A_UNITE(UBOATRN,mode5,5,TBOATRN), &VBOATRN );
SBOATRN_size = VBOATRN;
 /* line 1006: */
VUNATRN_unit_type( (*(&(WAOATRN_urepl->Body))), Fdec, Env, &WBOATRN );
XBOATRN_t = WBOATRN;
 /* line 1007: */
YBOATRN.Size = SBOATRN_size;
 /* line 1008: */
YBOATRN.Elem = XBOATRN_t;
 /* line 1009: */
ZBOATRN = A_HEAP(A68_212 ) ;
(*ZBOATRN) = YBOATRN ;
LVNATRN = A_UNITE(ACOATRN,mode2,2,ZBOATRN);
} 
break;
case 28: /* REF STRUCT(REF MODE280,MODE232)  */
BCOATRN_useq = (GVNATRN.data.mode28);
 /* line 1010: */
VUNATRN_unit_type( (*(&(BCOATRN_useq->Output))), Fdec, Env, &CCOATRN );
LVNATRN = CCOATRN;
break;
case 29: /* REF STRUCT(REF MODE261,MODE232)  */
DCOATRN_user = (GVNATRN.data.mode29);
 /* line 1011: */
VUNATRN_unit_type( (*(&(DCOATRN_user->Output))), Fdec, Env, &ECOATRN );
LVNATRN = ECOATRN;
break;
case 30: /* REF STRUCT(MODE232,MODE185)  */
FCOATRN_ua = (GVNATRN.data.mode30);
 /* line 1012: */
VUNATRN_unit_type( (*(&(FCOATRN_ua->Unit))), Fdec, Env, &GCOATRN );
LVNATRN = GCOATRN;
break;
case 31: /* REF STRUCT(MODE232,MODE196)  */
HCOATRN_uck = (GVNATRN.data.mode31);
 /* line 1013: */
VUNATRN_unit_type( (*(&(HCOATRN_uck->Unit))), Fdec, Env, &ICOATRN );
LVNATRN = ICOATRN;
break;
case 32: /* REF STRUCT(MODE232)  */
JCOATRN_ub = (GVNATRN.data.mode32);
 /* line 1014: */
VUNATRN_unit_type( (*(&(JCOATRN_ub->Unit))), Fdec, Env, &KCOATRN );
LVNATRN = KCOATRN;
break;
case 33: /* REF STRUCT(MODE194,MODE232)  */
LCOATRN_ug = (GVNATRN.data.mode33);
{ 
VUNATRN_unit_type( (*(&(LCOATRN_ug->Char))), Fdec, Env, &MCOATRN );
NCOATRN_tg = MCOATRN;
 /* line 1015: */
OCOATRN.Size = (*(&(LCOATRN_ug->Size)));
 /* line 1016: */
OCOATRN.Char = NCOATRN_tg;
 /* line 1017: */
PCOATRN = A_HEAP(A68_216 ) ;
(*PCOATRN) = OCOATRN ;
LVNATRN = A_UNITE(QCOATRN,mode6,6,PCOATRN);
} 
break;
case 12: /* REF STRUCT(MODE232,MODE232)  */
RCOATRN_uf = (GVNATRN.data.mode12);
{ 
VUNATRN_unit_type( (*(&(RCOATRN_uf->Sink))), Fdec, Env, &SCOATRN );
TCOATRN_tsink = SCOATRN;
 /* line 1018: */
VUNATRN_unit_type( (*(&(RCOATRN_uf->Source))), Fdec, Env, &UCOATRN );
VCOATRN_tsrc = UCOATRN;
 /* line 1019: */
WCOATRN.From = TCOATRN_tsink;
 /* line 1020: */
WCOATRN.To = VCOATRN_tsrc;
 /* line 1021: */
XCOATRN = A_HEAP(A68_214 ) ;
(*XCOATRN) = WCOATRN ;
LVNATRN = A_UNITE(YCOATRN,mode4,4,XCOATRN);
} 
break;
case 34: /* REF STRUCT(INT)  */
ZCOATRN_un = (GVNATRN.data.mode34);
 /* line 1022: */
 /* line 1023: */
LVNATRN = A_UNITE(ADOATRN,mode9,9,(&DIAATRN_tnull));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(unit_type);
*ReturnedValue = (LVNATRN);
return;
} 
#undef NL

A68_VOID  DDOATRN_simplify_type(A68_210  Type, A68_311 * Env, A68_210  *ReturnedValue)
{ 
A68_404  HDOATRN_simplify;   /* proc value of non-global proc */
A68_439  BEOATRN;  /* OPERATORS - mode -> union mode */
A68_404  CEOATRN;  /* YIELD */
A68_438  DEOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_394 * EEOATRN_newtprocs;
A68_361  FEOATRN;  /* avoid structure result */
A68_210  GEOATRN_result;
A68_210  HEOATRN;  /* clause result */
A_PROC_ENTRY(simplify_type);
 /* line 1028: */
 /* line 1030: */
{ 
A_CLOSURE( HDOATRN_simplify, IDOATRN_simplify, JDOATRN_simplify );
(( JDOATRN_simplify * ) ( HDOATRN_simplify.nonlocals )) -> Env = Env;
(( JDOATRN_simplify * ) ( HDOATRN_simplify.nonlocals )) -> HDOATRN_simplify = HDOATRN_simplify;
 /* line 1047: */
CEOATRN = HDOATRN_simplify ;
EEOATRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(DEOATRN,A_UNITE(BEOATRN,mode10,10,CEOATRN),A68_439 ));
 /* line 1049: */
A_CALLPROC(HDOATRN_simplify,(Type, EEOATRN_newtprocs, &FEOATRN),(Type, EEOATRN_newtprocs, &FEOATRN,(HDOATRN_simplify).nonlocals));
GEOATRN_result = FEOATRN.T;
 /* line 1051: */
MLJATRN_discard_tprocs(EEOATRN_newtprocs);
 /* line 1052: */
 /* line 1053: */
HEOATRN = GEOATRN_result;
} 
A_PROC_EXIT(simplify_type);
*ReturnedValue = (HEOATRN);
return;
} 
#undef NL

A68_BOOL  NEOATRN_check_types(A68_210  A, A68_210  B, A68_311 * Enva, A68_311 * Envb, A68_BOOL  Check_body)
{ 
A68_510  TEOATRN_equal_typebody;   /* proc value of non-global proc */
A68_512  EGOATRN_equal_tnames;   /* proc value of non-global proc */
A68_210  PGOATRN;  /* united object - for case conformity */
A68_211 * QGOATRN_an;
A68_210  RGOATRN;  /* united object - for case conformity */
A68_211 * SGOATRN_bn;
A68_BOOL  TGOATRN;  /* clause result */
A68_212 * UGOATRN_ar;
A68_210  VGOATRN;  /* united object - for case conformity */
A68_212 * WGOATRN_br;
A68_BOOL  XGOATRN;  /* optbool result */
A68_213 * YGOATRN_bs;
A68_213 * ZGOATRN_tstr;
A68_BOOL  AHOATRN_equal;
A68_INT  BHOATRN_k;
A68_INT  CHOATRN_i;
A68_BOOL  DHOATRN;  /* optbool result */
A68_BOOL  EHOATRN;  /* optbool result */
A68_213 * FHOATRN_as;
A68_210  GHOATRN;  /* united object - for case conformity */
A68_213 * HHOATRN_bs;
A68_BOOL  IHOATRN;  /* optbool result */
A68_BOOL  JHOATRN;  /* clause result */
A68_210  KHOATRN;  /* OPERATORS - mode -> union mode */
A68_213 * LHOATRN;  /* YIELD */
A68_210  MHOATRN;  /* OPERATORS - mode -> union mode */
A68_213 * NHOATRN;  /* YIELD */
A68_214 * OHOATRN_afn;
A68_210  PHOATRN;  /* united object - for case conformity */
A68_214 * QHOATRN_bfn;
A68_BOOL  RHOATRN;  /* optbool result */
A68_216 * SHOATRN_ag;
A68_210  THOATRN;  /* united object - for case conformity */
A68_216 * UHOATRN_bg;
A68_BOOL  VHOATRN;  /* optbool result */
A68_218 * WHOATRN_an;
A68_210  XHOATRN;  /* united object - for case conformity */
A68_218 * YHOATRN_bn;
A68_217 * ZHOATRN_av;
A68_210  AIOATRN;  /* united object - for case conformity */
A68_217 * BIOATRN_bv;
A68_203 * CIOATRN_am;
A68_210  DIOATRN;  /* united object - for case conformity */
A68_203 * EIOATRN_bm;
A_PROC_ENTRY(check_types);
 /* line 1057: */
 /* line 1059: */
{ 
A_CLOSURE( TEOATRN_equal_typebody, UEOATRN_equal_typebody, VEOATRN_equal_typebody );
(( VEOATRN_equal_typebody * ) ( TEOATRN_equal_typebody.nonlocals )) -> Check_body = Check_body;
 /* line 1111: */
A_CLOSURE( EGOATRN_equal_tnames, FGOATRN_equal_tnames, GGOATRN_equal_tnames );
(( GGOATRN_equal_tnames * ) ( EGOATRN_equal_tnames.nonlocals )) -> Check_body = Check_body;
(( GGOATRN_equal_tnames * ) ( EGOATRN_equal_tnames.nonlocals )) -> TEOATRN_equal_typebody = TEOATRN_equal_typebody;
 /* line 1139: */
 /* line 1140: */
PGOATRN = A ;
switch ( PGOATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
QGOATRN_an = (PGOATRN.data.mode1);
 /* line 1141: */
 /* line 1142: */
RGOATRN = B ;
switch ( RGOATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
SGOATRN_bn = (RGOATRN.data.mode1);
 /* line 1143: */
TGOATRN = A_CALLPROC(EGOATRN_equal_tnames,((*(&(QGOATRN_an->Typeno))), (*(&(SGOATRN_bn->Typeno))), Enva, Envb),((*(&(QGOATRN_an->Typeno))), (*(&(SGOATRN_bn->Typeno))), Enva, Envb,(EGOATRN_equal_tnames).nonlocals));
break;
default: 
 /* line 1144: */
 /* line 1145: */
TGOATRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(MODE194,MODE210)  */
UGOATRN_ar = (PGOATRN.data.mode2);
 /* line 1146: */
 /* line 1147: */
VGOATRN = B ;
switch ( VGOATRN.mode )
{ 
case 2: /* REF STRUCT(MODE194,MODE210)  */
WGOATRN_br = (VGOATRN.data.mode2);
 /* line 1148: */
 /* line 1149: */
XGOATRN = (XOMATRN_int((*(&(UGOATRN_ar->Size))))==XOMATRN_int((*(&(WGOATRN_br->Size)))));
if ( XGOATRN )
{ /* line 1150: */
XGOATRN = NEOATRN_check_types((*(&(UGOATRN_ar->Elem))), (*(&(WGOATRN_br->Elem))), Enva, Envb, Check_body);
}
 /* line 1151: */
TGOATRN = XGOATRN;
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
YGOATRN_bs = (VGOATRN.data.mode3);
 /* line 1152: */
{ 
ZGOATRN_tstr = YGOATRN_bs;
 /* line 1153: */
AHOATRN_equal = A68_TRUE;
 /* line 1154: */
BHOATRN_k = 0;
 /* line 1155: */
for ( CHOATRN_i = 1;;
CHOATRN_i += 1 ) 
{ 
DHOATRN = AHOATRN_equal;
if ( DHOATRN )
{ /* line 1156: */
DHOATRN = (ZGOATRN_tstr!=GAAATRN_niltstr);
}
if ( !(DHOATRN) ) break;
 /* line 1157: */
if ( NEOATRN_check_types((*(&(UGOATRN_ar->Elem))), (*(&(ZGOATRN_tstr->Elem))), Enva, Envb, Check_body) )
{ 
ZGOATRN_tstr = (*(&(ZGOATRN_tstr->Rest)));
 /* line 1158: */
BHOATRN_k = CHOATRN_i;
} 
else
{ 
 /* line 1159: */
 /* line 1160: */
AHOATRN_equal = A68_FALSE;
} 
}
 /* line 1161: */
EHOATRN = AHOATRN_equal;
if ( EHOATRN )
{ /* line 1162: */
EHOATRN = (BHOATRN_k==XOMATRN_int((*(&(UGOATRN_ar->Size)))));
}
 /* line 1163: */
TGOATRN = EHOATRN;
} 
break;
default: 
 /* line 1164: */
 /* line 1165: */
TGOATRN = NEOATRN_check_types(B, A, Envb, Enva, Check_body);
break;
} 
break;
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
FHOATRN_as = (PGOATRN.data.mode3);
 /* line 1166: */
 /* line 1167: */
GHOATRN = B ;
switch ( GHOATRN.mode )
{ 
case 3: /* REF STRUCT(MODE210,REF MODE213)  */
HHOATRN_bs = (GHOATRN.data.mode3);
 /* line 1168: */
 /* line 1169: */
 /* line 1170: */
IHOATRN = NEOATRN_check_types((*(&(FHOATRN_as->Elem))), (*(&(HHOATRN_bs->Elem))), Enva, Envb, Check_body);
if ( IHOATRN )
{ /* line 1171: */
if ( ((*(&(FHOATRN_as->Rest)))==GAAATRN_niltstr) )
{ 
 /* line 1172: */
JHOATRN = ((*(&(HHOATRN_bs->Rest)))==GAAATRN_niltstr);
} 
else
{ 
 /* line 1173: */
if ( ((*(&(HHOATRN_bs->Rest)))!=GAAATRN_niltstr) )
{ 
 /* line 1174: */
LHOATRN = (*(&(HHOATRN_bs->Rest))) ;
NHOATRN = (*(&(FHOATRN_as->Rest))) ;
JHOATRN = NEOATRN_check_types(A_UNITE(MHOATRN,mode3,3,NHOATRN), A_UNITE(KHOATRN,mode3,3,LHOATRN), Enva, Envb, Check_body);
} 
else
{ 
 /* line 1175: */
 /* line 1176: */
JHOATRN = A68_FALSE;
} 
} 
IHOATRN = JHOATRN;
}
TGOATRN = IHOATRN;
break;
default: 
 /* line 1177: */
 /* line 1178: */
TGOATRN = NEOATRN_check_types(B, A, Envb, Enva, Check_body);
break;
} 
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
OHOATRN_afn = (PGOATRN.data.mode4);
 /* line 1179: */
 /* line 1180: */
PHOATRN = B ;
switch ( PHOATRN.mode )
{ 
case 4: /* REF STRUCT(MODE210,MODE210)  */
QHOATRN_bfn = (PHOATRN.data.mode4);
 /* line 1181: */
 /* line 1182: */
 /* line 1183: */
RHOATRN = NEOATRN_check_types((*(&(OHOATRN_afn->From))), (*(&(QHOATRN_bfn->From))), Enva, Envb, Check_body);
if ( RHOATRN )
{ /* line 1184: */
RHOATRN = NEOATRN_check_types((*(&(OHOATRN_afn->To))), (*(&(QHOATRN_bfn->To))), Enva, Envb, Check_body);
}
TGOATRN = RHOATRN;
break;
default: 
 /* line 1185: */
 /* line 1186: */
TGOATRN = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE194,MODE210)  */
SHOATRN_ag = (PGOATRN.data.mode6);
 /* line 1187: */
 /* line 1188: */
THOATRN = B ;
switch ( THOATRN.mode )
{ 
case 6: /* REF STRUCT(MODE194,MODE210)  */
UHOATRN_bg = (THOATRN.data.mode6);
 /* line 1189: */
 /* line 1190: */
VHOATRN = (XOMATRN_int((*(&(SHOATRN_ag->Size))))==XOMATRN_int((*(&(UHOATRN_bg->Size)))));
if ( VHOATRN )
{ /* line 1191: */
VHOATRN = NEOATRN_check_types((*(&(SHOATRN_ag->Char))), (*(&(UHOATRN_bg->Char))), Enva, Envb, Check_body);
}
 /* line 1192: */
TGOATRN = VHOATRN;
break;
default: 
 /* line 1193: */
 /* line 1194: */
TGOATRN = A68_FALSE;
break;
} 
break;
case 9: /* REF STRUCT(INT)  */
WHOATRN_an = (PGOATRN.data.mode9);
{ 
XHOATRN = B ;
switch ( XHOATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
YHOATRN_bn = (XHOATRN.data.mode9);
TGOATRN = A68_TRUE;
break;
default: 
 /* line 1195: */
TGOATRN = A68_FALSE;
break;
} 
} 
break;
case 7: /* REF STRUCT(INT)  */
ZHOATRN_av = (PGOATRN.data.mode7);
{ 
AIOATRN = B ;
switch ( AIOATRN.mode )
{ 
case 7: /* REF STRUCT(INT)  */
BIOATRN_bv = (AIOATRN.data.mode7);
TGOATRN = A68_TRUE;
break;
default: 
 /* line 1196: */
TGOATRN = A68_FALSE;
break;
} 
} 
break;
case 8: /* REF STRUCT(INT)  */
CIOATRN_am = (PGOATRN.data.mode8);
 /* line 1197: */
DIOATRN = B ;
switch ( DIOATRN.mode )
{ 
case 8: /* REF STRUCT(INT)  */
EIOATRN_bm = (DIOATRN.data.mode8);
 /* line 1198: */
TGOATRN = ((*(&(CIOATRN_am->Macparno)))==(*(&(EIOATRN_bm->Macparno))));
break;
default: 
 /* line 1199: */
 /* line 1200: */
TGOATRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 1201: */
 /* line 1202: */
TGOATRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(check_types);
return( TGOATRN );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void HNMATRN(void)   /* initialise DECS modeprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/modeprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/transformprocs.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
TIGAOST();   /* USE ioprocs */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/modeprocs.a68";
A_config.translation_time = "Tue Apr  4 10:00:45 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GNMATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:00:45 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modeprocs);
UEAALIB_a68config(LGAALIB_configinfo, LNMATRN);
 /* line 80: */
 /* line 83: */
 /* line 101: */
 /* line 107: */
 /* line 113: */
 /* line 119: */
 /* line 125: */
 /* line 131: */
 /* line 144: */
 /* line 159: */
 /* line 181: */
 /* line 196: */
 /* line 197: */
 /* line 220: */
 /* line 235: */
 /* line 262: */
 /* line 277: */
 /* line 359: */
 /* line 377: */
 /* line 394: */
 /* line 412: */
 /* line 429: */
 /* line 450: */
 /* line 465: */
 /* line 475: */
 /* line 496: */
 /* line 545: */
 /* line 553: */
 /* line 607: */
 /* line 644: */
 /* line 710: */
 /* line 753: */
 /* line 815: */
 /* line 829: */
 /* line 837: */
 /* line 855: */
 /* line 867: */
 /* line 885: */
 /* line 891: */
 /* line 1027: */
 /* line 1056: */
 /* line 1205: */
 /* line 1206: */
 /* line 1213: */
/*SKIP*/;
A_PROC_EXIT(DECS modeprocs);
} 
#undef NL
/* end of translation of ./a68files/modeprocs.a68 */
