
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
/* UNAME:EMDAOST */
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
A_VECTOR(struct A68t175 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE175 */
struct A68t173{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
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
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
A_VECTOR(struct A68t178 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE178 */
struct A68t179{
A68_INT  Choice;
A_PAD_INT(PAD_38)
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
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
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

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t176 ,A68_INT ,struct A68t97 ),(struct A68t176 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE176,INT,MODE97) VOID */
struct A68t209{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE209,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t176 ,struct A68t97 ,A68_VC *),(struct A68t176 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE176,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 54 CHAR */
struct A68t217{
A68_INT  C;
A_PAD_INT(PAD_44)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT)  */
struct A68t218{
A68_BITS  A;
A_PAD_BITS(PAD_45)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC ,struct A68t178 ,struct A68t97 ),(A68_VC ,struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE26,MODE178,MODE97) VOID */
struct A68t219{
A68_VC  Parameter;
struct A68t220  Proc;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE26,MODE220)  */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t178 ,struct A68t97 ),(struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE178,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t177 ,struct A68t97 ),(struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE177,MODE97) VOID */
struct A68t221 { A68_INT mode; union {
struct A68t219  mode1;
struct A68t222  mode2;
struct A68t223  mode3;
} data; };
typedef struct A68t221  A68_221 ;    /* UNION(MODE219,MODE222,MODE223)  */
A_VECTOR(struct A68t233 ,A68t226);
typedef struct A68t226  A68_226 ;    /* VECTOR [] MODE233 */
struct A68t233 { A68_INT mode; union {
struct A68t230 * mode1;
struct A68t231 * mode2;
struct A68t232 * mode3;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(REF MODE230,REF MODE231,REF MODE232)  */
struct A68t230 ;

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t230 *,struct A68t34 *),(struct A68t230 *,struct A68t34 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE230,REF MODE34) VOID */
struct A68t229 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t228  mode3;
} data; };
typedef struct A68t229  A68_229 ;    /* UNION(REF MODE26,REF MODE102,MODE228)  */
struct A68t230{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t175  Parameter;
struct A68t218  Access;
struct A68t217  Continuation;
struct A68t229  Help;
struct A68t221  Command;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
struct A68t231{
struct A68t230 * Group;
struct A68t226  Commands;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE230,REF MODE226)  */
struct A68t232{
struct A68t230 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t226  Locals;
struct A68t226  Globals;
struct A68t230 * Postlude;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
struct A68t234{
struct A68t232 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_46)
struct A68t102  Input_lines;
struct A68t234 * Caller;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE232,INT,REF MODE102,REF MODE234)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t235 *,struct A68t230 *,struct A68t178 ,struct A68t97 ,struct A68t217 *),(struct A68t235 *,struct A68t230 *,struct A68t178 ,struct A68t97 ,struct A68t217 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE235,REF MODE230,MODE178,MODE97) MODE217 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE102) VOID */
struct A68t238 ;

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE238) VOID */
struct A68t235{
struct A68t234 * Stack;
struct A68t189  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_47)
A68_BOOL  Private;
A_PAD_BOOL(PAD_48)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_49)
struct A68t236  Caller;
struct A68t237  Report_error;
struct A68t239  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE234,REF MODE189,BOOL,BOOL,BOOL,MODE236,MODE237,MODE239,MODE97)  */
struct A68t238 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_VOID ,A68t240,(A68_BOOL ,struct A68t226 *),(A68_BOOL ,struct A68t226 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(BOOL) MODE226 */

A_PROCEDURE(A68_BOOL ,A68t241,(struct A68t217 ,struct A68t217 ),(struct A68t217 ,struct A68t217 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE217,MODE217) BOOL */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t226 ,struct A68t226 ,struct A68t226 *),(struct A68t226 ,struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE226,MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t226 ,struct A68t233 ,struct A68t226 *),(struct A68t226 ,struct A68t233 ,struct A68t226 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE226,MODE233) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t226 *,struct A68t226 ,struct A68t226 *),(struct A68t226 *,struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF REF MODE226,MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t226 *,struct A68t233 ,struct A68t226 *),(struct A68t226 *,struct A68t233 ,struct A68t226 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF REF MODE226,MODE233) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t226 ,struct A68t226 *),(struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t233 ,struct A68t226 *),(struct A68t233 ,struct A68t226 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE233) REF MODE226 */

A_PROCEDURE(struct A68t231 *,A68t248,(A68_VC ,A68_VC ,struct A68t218 ,struct A68t226 ),(A68_VC ,A68_VC ,struct A68t218 ,struct A68t226 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE26,MODE26,MODE218,MODE226) REF MODE231 */

A_PROCEDURE(struct A68t232 *,A68t249,(struct A68t230 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t221 ),(struct A68t230 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t221 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE230,MODE26,REF REF MODE26,REF MODE226,REF MODE226,MODE221) REF MODE232 */
A_ISTRUCT(A68_CHAR ,8,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t251,(struct A68t235 *,struct A68t230 *),(struct A68t235 *,struct A68t230 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE235,REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t252,(struct A68t230 *),(struct A68t230 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t253,(struct A68t235 *,A68_BOOL ,A68_VC ,struct A68t230 *),(struct A68t235 *,A68_BOOL ,A68_VC ,struct A68t230 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE235,BOOL,MODE26,REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t254,(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t230 *),(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t230 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE235,BOOL,REF MODE26,REF REF MODE26,REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t255,(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t231 *),(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t231 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE235,BOOL,REF MODE26,REF REF MODE26,REF MODE231) BOOL */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t230 *,A68_BOOL ,A68_VC *),(struct A68t230 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE230,BOOL) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,2,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_VC ,5,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 5 MODE26 */

A_PROCEDURE(struct A68t230 *,A68t262,(struct A68t230 *,struct A68t230 *),(struct A68t230 *,struct A68t230 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE230,REF MODE230) REF MODE230 */
A_ISTRUCT(A68_VC ,2,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t235 *,struct A68t34 *,struct A68t230 *,struct A68t226 ,A68_BOOL ),(struct A68t235 *,struct A68t34 *,struct A68t230 *,struct A68t226 ,A68_BOOL ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE235,REF MODE34,REF MODE230,REF MODE226,BOOL) VOID */
A_ISTRUCT(struct A68t52 ,3,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t235 *,struct A68t34 *,struct A68t230 *,A68_BOOL ),(struct A68t235 *,struct A68t34 *,struct A68t230 *,A68_BOOL ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE235,REF MODE34,REF MODE230,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t267);
typedef struct A68t267  A68_267 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_BOOL ,A68t268,(struct A68t235 *,struct A68t34 *,A68_VC ,struct A68t230 *,struct A68t226 ,A68_BOOL ,A68_BOOL ,struct A68t266 ),(struct A68t235 *,struct A68t34 *,A68_VC ,struct A68t230 *,struct A68t226 ,A68_BOOL ,A68_BOOL ,struct A68t266 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE235,REF MODE34,REF MODE26,REF MODE230,REF MODE226,BOOL,BOOL,MODE266) BOOL */

A_PROCEDURE(struct A68t230 *,A68t269,(struct A68t230 *),(struct A68t230 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE230) REF MODE230 */
A_ISTRUCT(A68_CHAR ,40,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t235 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t235 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE235,REF MODE34,REF MODE26,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t235 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t235 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE235,REF MODE34,BOOL,BOOL,MODE97) VOID */
struct A68t280{
struct A68t230 * S;
struct A68t280 * Next;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE230,REF MODE280)  */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t230 *,struct A68t230 *,A68_VC ,A68_BOOL ),(struct A68t230 *,struct A68t230 *,A68_VC ,A68_BOOL ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE230,REF MODE230,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t284,(A68_INT ,struct A68t232 *,struct A68t230 *),(A68_INT ,struct A68t232 *,struct A68t230 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(INT,REF MODE232,REF MODE230) VOID */

A_PROCEDURE(A68_VOID ,A68t285,(A68_INT ,struct A68t230 *,struct A68t226 ),(A68_INT ,struct A68t230 *,struct A68t226 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(INT,REF MODE230,REF MODE226) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t183 ),(struct A68t183 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE183) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(struct A68t235 *,A68t289,(struct A68t237 ,struct A68t239 ,struct A68t97 ,struct A68t236 ,struct A68t184 *,struct A68t232 *,struct A68t178 ),(struct A68t237 ,struct A68t239 ,struct A68t97 ,struct A68t236 ,struct A68t184 *,struct A68t232 *,struct A68t178 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE237,MODE239,MODE97,MODE236,REF MODE184,REF MODE232,MODE178) REF MODE235 */
struct A68t290{
struct A68t226 * Vec;
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF REF MODE226,REF MODE290)  */

A_PROCEDURE(A68_BOOL ,A68t291,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF REF MODE226) BOOL */

A_PROCEDURE(A68_BOOL ,A68t292,(struct A68t233 *,struct A68t233 *),(struct A68t233 *,struct A68t233 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE233,REF MODE233) BOOL */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t233 ,A68_VC *),(struct A68t233 ,A68_VC *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE233) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF REF MODE226) VOID */

A_PROCEDURE(A68_VOID ,A68t295,(A68_BOOL ,struct A68t189 *),(A68_BOOL ,struct A68t189 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(BOOL) MODE189 */
A_ISTRUCT(A68_CHAR ,38,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t297,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t235 *,struct A68t217 *),(struct A68t235 *,struct A68t217 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE235) MODE217 */

A_PROCEDURE(A68_VOID ,A68t299,(A68_VC ,struct A68t226 ,struct A68t217 *),(A68_VC ,struct A68t226 ,struct A68t217 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE26,REF MODE226) MODE217 */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t217 *),(struct A68t217 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC MODE217 */
A_ISTRUCT(A68_CHAR ,22,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_VC ,3,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 3 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_VOID  HLBAOST_get_input_lines(A68_102 *);
extern A68_VOID  DMBAOST_skip_command(void);
extern A68_VOID  IFCAOST_read_command(struct A68t97 ,A68_VC *);
extern A68_VOID  DOBAOST_read_parameters(struct A68t189 ,struct A68t175 ,struct A68t97 ,A68_178 *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_175  SRAAOST_noparameters;
extern A68_178  ASAAOST_no_parameters;
extern A68_VOID  WUAAOST_show_syntax(struct A68t175 ,struct A68t189 ,A68_VC *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
extern A68_INT  FVCAOST_max(A68_INT ,A68_INT );
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
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
extern A68_34 * MEAAOST_err;
extern A68_VOID  SNAAOST_clear_interrupt(void);
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  UHAAOSI_fatal;
extern A68_92  WHAAOSI_user;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_BOOL  ZKAAOSI_abort_msg(struct A68t106 );
extern A68_BOOL  ELAAOSI_cli_msg(struct A68t106 );
extern A68_BOOL  JLAAOSI_log_msg(struct A68t106 );
extern A68_BOOL  OLAAOSI_out_msg(struct A68t106 );
extern A68_BOOL  TLAAOSI_newline_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  NVAAOSL_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_INT  YOAAOSL_charnumber(struct A68t34 *);
extern A68_VOID  JYAAOSL_justify(A68_VC ,A68_INT ,A68_59 *);
extern A68_VOID  NYAAOSL_tab(A68_INT ,A68_60 *);
extern A68_VOID  XYAAOSL_after(A68_INT ,A68_62 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GABAOSL_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_216   IMDAOST = {"$Id: command.a68,v 34.2 1995/03/29 13:02:23 ella Exp $"}; 
A_GISVEC(A68_VC ,JMDAOST,IMDAOST,54)
A68_226  RMDAOST_nullcommands;
#define TMDAOST_nilsimple (A68_230 *)A68_NIL
A68_218  UMDAOST_a;
A68_218  XMDAOST_normalaccess;
A68_218  YMDAOST_a;
A68_218  BNDAOST_hiddenaccess;
A68_218  CNDAOST_a;
A68_218  FNDAOST_secretaccess;
A68_218  GNDAOST_a;
A68_218  JNDAOST_privateaccess;
A68_218  KNDAOST_a;
A68_218  NNDAOST_hiddenprivateaccess;
A68_218  ONDAOST_a;
A68_218  RNDAOST_secretprivateaccess;
A68_218  SNDAOST_a;
A68_218  VNDAOST_noaccess;
A68_217  WNDAOST_c;
A68_217  ZNDAOST_continue;
A68_217  AODAOST_c;
A68_217  DODAOST_return;
A68_217  EODAOST_c;
A68_217  HODAOST_finish;
A68_217  IODAOST_c;
A68_217  LODAOST_quit;
static A68_217  MODAOST_c;
static A68_217  PODAOST_not_found;
A68_242  GQDAOST_add;
static A68_250   MTDAOST = {"POSTLUDE"}; 
A_GISVEC(A68_VC ,NTDAOST,MTDAOST,8)
static A68_257   OWDAOST = {"..."}; 
A_GISVEC(A68_VC ,PWDAOST,OWDAOST,3)
static A68_259   XWDAOST = {" ("}; 
A_GISVEC(A68_VC ,YWDAOST,XWDAOST,2)
static A68_257   AXDAOST = {"..."}; 
A_GISVEC(A68_VC ,BXDAOST,AXDAOST,3)
static A68_260   CXDAOST = {""}; 
A_GISVEC(A68_VC ,DXDAOST,CXDAOST,0)
static A68_257   XZDAOST = {"   "}; 
A_GISVEC(A68_VC ,YZDAOST,XZDAOST,3)
static A68_267   EAEAOST = {"- has no arguments"}; 
A_GISVEC(A68_VC ,FAEAOST,EAEAOST,18)
static A68_270   PCEAOST = {"The following commands are available in "}; 
A_GISVEC(A68_VC ,QCEAOST,PCEAOST,40)
static A68_272   EDEAOST = {"local"}; 
A_GISVEC(A68_VC ,GDEAOST,EDEAOST,5)
static A68_273   HDEAOST = {"global"}; 
A_GISVEC(A68_VC ,IDEAOST,HDEAOST,6)
static A68_114   LDEAOST = {"The "}; 
A_GISVEC(A68_VC ,MDEAOST,LDEAOST,4)
static A68_274   QDEAOST = {" commands available starting \""}; 
A_GISVEC(A68_VC ,RDEAOST,QDEAOST,30)
static A68_273   WDEAOST = {"\" are:"}; 
A_GISVEC(A68_VC ,XDEAOST,WDEAOST,6)
static A68_277   PEEAOST = {"The commands available in "}; 
A_GISVEC(A68_VC ,QEEAOST,PEEAOST,26)
static A68_272   VEEAOST = {" are:"}; 
A_GISVEC(A68_VC ,WEEAOST,VEEAOST,5)
static A68_267   NFEAOST = {"\" is not known in "}; 
A_GISVEC(A68_VC ,OFEAOST,NFEAOST,18)
#define DGEAOST_end (A68_280 *)A68_NIL
static A68_282   AIEAOST = {"  PRIVATE"}; 
A_GISVEC(A68_VC ,CIEAOST,AIEAOST,9)
static A68_250   GIEAOST = {"  HIDDEN"}; 
A_GISVEC(A68_VC ,HIEAOST,GIEAOST,8)
static A68_250   LIEAOST = {"  SECRET"}; 
A_GISVEC(A68_VC ,MIEAOST,LIEAOST,8)
static A68_267   QIEAOST = {"  HIDDEN + PRIVATE"}; 
A_GISVEC(A68_VC ,RIEAOST,QIEAOST,18)
static A68_267   VIEAOST = {"  SECRET + PRIVATE"}; 
A_GISVEC(A68_VC ,WIEAOST,VIEAOST,18)
static A68_283   AJEAOST = {"  NO access"}; 
A_GISVEC(A68_VC ,BJEAOST,AJEAOST,11)
static A68_260   FJEAOST = {""}; 
A_GISVEC(A68_VC ,GJEAOST,FJEAOST,0)
static A68_272   LJEAOST = {"  ***"}; 
A_GISVEC(A68_VC ,MJEAOST,LJEAOST,5)
static A68_282   MKEAOST = {"SIMPLE   "}; 
A_GISVEC(A68_VC ,NKEAOST,MKEAOST,9)
static A68_282   XKEAOST = {"GROUP    "}; 
A_GISVEC(A68_VC ,YKEAOST,XKEAOST,9)
static A68_283   HLEAOST = {"COMPOUND   "}; 
A_GISVEC(A68_VC ,ILEAOST,HLEAOST,11)
static A68_286   SLEAOST = {"SUB-COMMANDS  in "}; 
A_GISVEC(A68_VC ,TLEAOST,SLEAOST,17)
static A68_257   QMEAOST = {"   "}; 
A_GISVEC(A68_VC ,RMEAOST,QMEAOST,3)
static A68_272   CNEAOST = {" ::= "}; 
A_GISVEC(A68_VC ,DNEAOST,CNEAOST,5)
static A68_267   WNEAOST = {"Readers avaliable:"}; 
A_GISVEC(A68_VC ,XNEAOST,WNEAOST,18)
static A68_288   POEAOST = {"\" is not known"}; 
A_GISVEC(A68_VC ,QOEAOST,POEAOST,14)
static A68_296   KREAOST = {"initialise_commands:  duplicate reader"}; 
A_GISVEC(A68_VC ,LREAOST,KREAOST,38)
static A68_301   WVEAOST = {"Command not recognised"}; 
A_GISVEC(A68_VC ,XVEAOST,WVEAOST,22)
static A68_272   QWEAOST = {" ? - "}; 
A_GISVEC(A68_VC ,RWEAOST,QWEAOST,5)
typedef struct   /* env of non-global proc */
{
A68_INT  XODAOST_l;
A_PAD_INT(PAD_50)
A68_226  B;
} BPDAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_226  Commands;
} ERDAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ORDAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} ASDAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_230 * Root;
} GCEAOST_full;
typedef struct   /* env of non-global proc */
{
A68_280 ** EGEAOST_list;
} IGEAOST_alreadyencountered;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_252  GGEAOST_alreadyencountered;
A68_BOOL  Low;
A_PAD_BOOL(PAD_51)
A68_34 * Channel;
A68_BOOL  High;
A_PAD_BOOL(PAD_52)
A68_235 * Env;
} RHEAOST_basichelp;
typedef struct   /* env of non-global proc */
{
A68_281  PHEAOST_basichelp;
A68_BOOL  High;
A_PAD_BOOL(PAD_54)
A68_235 * Env;
A68_34 * Channel;
A68_284  VJEAOST_fullshell;
} XJEAOST_fullshell;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_34 * Channel;
A68_235 * Env;
A68_BOOL  Give_details;
A_PAD_BOOL(PAD_55)
} LMEAOST_show;
typedef struct   /* env of non-global proc */
{
A68_290 ** FPEAOST_list;
} JPEAOST_new;
typedef struct   /* env of non-global proc */
{
A68_291  HPEAOST_new;
A68_294  IQEAOST_sort_commands;
} KQEAOST_sort_commands;
typedef struct   /* env of non-global proc */
{
A68_INT * VQEAOST_n_readers;
} AREAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TREAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
} MSEAOST_input_lines;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
A68_97 * ISEAOST_msg;
A68_299  MTEAOST_obey;
A68_203  KSEAOST_input_lines;
} OTEAOST_obey;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
A68_97 * ISEAOST_msg;
A68_299  MTEAOST_obey;
} VUEAOST_shell;
typedef struct   /* env of non-global proc */
{
A68_203  KSEAOST_input_lines;
A68_235 * Env;
A68_jmp_buf  GSEAOST_restart;
A_PAD_jmp_buf(PAD_56)
} GWEAOST_anonymous;
typedef struct   /* env of non-global proc */
{
A68_281  PHEAOST_basichelp;
A68_BOOL  High;
A_PAD_BOOL(PAD_53)
A68_235 * Env;
A68_34 * Channel;
A68_285  CKEAOST_subfullhelp;
A68_284  VJEAOST_fullshell;
} EKEAOST_subfullhelp;
typedef struct   /* env of non-global proc */
{
int dummy;
} TSEAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ETEAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MUEAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
A68_97 * ISEAOST_msg;
} ZUEAOST_return_to_caller;
typedef struct   /* env of non-global proc */
{
int dummy;
} KVEAOST_generator;

A68_VOID  MMDAOST_nullcommand(A68_178  Param, A68_97  Msg);

A_STATIC A68_VOID  OMDAOST_generator(A68_BOOL  NMDAOST_anonymous, A68_226  *ReturnedValue);

A68_BOOL  SODAOST_(A68_217  A, A68_217  B);

A_STATIC A68_VOID  WODAOST_add(A68_226  A, A68_226  B, A68_226  *ReturnedValue);

A_STATIC A68_VOID  APDAOST_generator(A68_BOOL  YODAOST_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  KQDAOST_add(A68_226  A, A68_233  B, A68_226  *ReturnedValue);

A68_VOID  QQDAOST_addab(A68_226 * A, A68_226  B, A68_226  *ReturnedValue);

A68_VOID  VQDAOST_addab(A68_226 * A, A68_233  B, A68_226  *ReturnedValue);

A68_VOID  ARDAOST_makecommands(A68_226  Commands, A68_226  *ReturnedValue);

A_STATIC A68_VOID  DRDAOST_generator(A68_BOOL  BRDAOST_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  KRDAOST_makecommands(A68_233  Command, A68_226  *ReturnedValue);

A_STATIC A68_VOID  NRDAOST_generator(A68_BOOL  LRDAOST_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WRDAOST_lc(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZRDAOST_generator(A68_BOOL  XRDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_231 * NSDAOST_make_group(A68_VC  Name, A68_VC  Abreviation, A68_218  Access, A68_226  Locals);

A68_232 * GTDAOST_make_compound(A68_230 * Prelude, A68_VC  Context_name, A68_VC * Prompt, A68_226  Locals, A68_226  Globals, A68_221  Postlude);

A_STATIC A68_BOOL  VTDAOST_canaccess(A68_235 * Env, A68_230 * Command);

A_STATIC A68_BOOL  BUDAOST_canhelp(A68_235 * Env, A68_230 * Command);

A_STATIC A68_BOOL  HUDAOST_cansee(A68_235 * Env, A68_230 * Command);

A_STATIC A68_BOOL  MUDAOST_hasabreviation(A68_230 * Command);

A_STATIC A68_BOOL  UUDAOST_checkname(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_230 * Command);

A_STATIC A68_BOOL  GVDAOST_checkstartswith(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_VC * Remainder, A68_230 * Command);

A_STATIC A68_BOOL  WVDAOST_searchgroup(A68_235 * Env, A68_BOOL  Help, A68_VC  Name, A68_VC * Rem, A68_231 * Group);

A_STATIC A68_VOID  JWDAOST_showname(A68_230 * Command, A68_BOOL  Group, A68_VC  *ReturnedValue);

A_STATIC A68_230 * KXDAOST_groupsimple(A68_230 * Group, A68_230 * Simple);

A_STATIC A68_VOID  EYDAOST_commandvechelp(A68_235 * Env, A68_34 * Channel, A68_230 * Root, A68_226  Commands, A68_BOOL  Two_columns);

A_STATIC A68_VOID  VZDAOST_simplehelpbasic(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group);

A_STATIC A68_VOID  MBEAOST_simplehelp(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group);

A_STATIC A68_BOOL  BCEAOST_grouphelp(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_230 * Root, A68_226  Commands, A68_BOOL  Compounddetails, A68_BOOL  Localsection, A68_266  Simplehelp);

A_STATIC A68_230 * FCEAOST_full(A68_230 * S, void *NonLocals);

A68_VOID  JEEAOST_help(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_BOOL  Compounddetails, A68_97  Msg);

A68_VOID  BGEAOST_full_help(A68_235 * Env, A68_34 * Channel, A68_BOOL  Low, A68_BOOL  High, A68_97  Msg);

A_STATIC A68_BOOL  HGEAOST_alreadyencountered(A68_230 * S, void *NonLocals);

A_STATIC A68_230 * RGEAOST_full(A68_230 * R, A68_230 * S);

A_STATIC A68_VOID  QHEAOST_basichelp(A68_230 * R, A68_230 * Simple, A68_VC  Type, A68_BOOL  G, void *NonLocals);

A_STATIC A68_VOID  WJEAOST_fullshell(A68_INT  M, A68_232 * Compound, A68_230 * Root, void *NonLocals);

A_STATIC A68_VOID  DKEAOST_subfullhelp(A68_INT  M, A68_230 * Root, A68_226  Commands, void *NonLocals);

A68_VOID  GMEAOST_syntax_help(A68_235 * Env, A68_34 * Channel, A68_VC  Description, A68_BOOL  Give_details, A68_97  Msg);

A_STATIC A68_VOID  KMEAOST_show(A68_183  Analyser, void *NonLocals);

A68_235 * DPEAOST_initialise_commands(A68_237  Report_error, A68_239  Set_default_msg, A68_97  Abort, A68_236  Caller, A68_184 * Readers, A68_232 * Outer_command, A68_178  Outer_parameter);

A_STATIC A68_BOOL  IPEAOST_new(A68_226 * Vec, void *NonLocals);

A_STATIC A68_BOOL  SPEAOST_swop(A68_233 * A, A68_233 * B);

A_STATIC A68_VOID  VPEAOST_get_name(A68_233  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JQEAOST_sort_commands(A68_226 * Commands, void *NonLocals);

A_STATIC A68_VOID  ZQEAOST_generator(A68_BOOL  XQEAOST_anonymous, A68_189  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SREAOST_generator(A68_BOOL  QREAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  FSEAOST_interpret_commands(A68_235 * Env, A68_217  *ReturnedValue);

A_STATIC A68_VOID  LSEAOST_input_lines(A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SSEAOST_generator(A68_BOOL  QSEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DTEAOST_generator(A68_BOOL  BTEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NTEAOST_obey(A68_VC  Name, A68_226  Commands, A68_217  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LUEAOST_generator(A68_BOOL  JUEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UUEAOST_shell(A68_217  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YUEAOST_return_to_caller(A68_217  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JVEAOST_generator(A68_BOOL  HVEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FWEAOST_anonymous(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  JVEAOST_generator(A68_BOOL  HVEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((KVEAOST_generator *)NonLocals)->x)
{ 
A68_102  LVEAOST;  /* clause result */
A68_102  MVEAOST;  /* OPERATORS - dynamic generator */
{ 
MVEAOST.upb = 0 ;
( HVEAOST_anonymous? A_VLOC(A68_VC ,MVEAOST): A_VHEAP(A68_VC ,MVEAOST) );
LVEAOST = MVEAOST;
} 
*ReturnedValue = (LVEAOST);
return;
} 
#undef NL
 /* line 650: */

A_STATIC A68_VOID  DKEAOST_subfullhelp(A68_INT  M, A68_230 * Root, A68_226  Commands, void *NonLocals)
#define NL(x) (((EKEAOST_subfullhelp *)NonLocals)->x)
{ 
A68_INT  FKEAOST_i;
A68_INT  GKEAOST;  /* to part of loop */
A68_233  HKEAOST;  /* united object - for case conformity */
A68_230 * IKEAOST_s;
A68_258  JKEAOST;  /* collateral clause result */
A68_VC  KKEAOST;  /* avoid structure result */
A68_52  LKEAOST;  /* OPERATORS - mode -> union mode */
A68_52  OKEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  PKEAOST;  /* YIELD */
A68_85  QKEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  RKEAOST;  /* avoid structure result */
A68_231 * SKEAOST_g;
A68_230 * TKEAOST_s;
A68_258  UKEAOST;  /* collateral clause result */
A68_VC  VKEAOST;  /* avoid structure result */
A68_52  WKEAOST;  /* OPERATORS - mode -> union mode */
A68_52  ZKEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ALEAOST;  /* YIELD */
A68_85  BLEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CLEAOST;  /* avoid structure result */
A68_232 * DLEAOST_c;
A_PROC_ENTRY(subfullhelp);
 /* line 651: */
 /* line 652: */
GKEAOST = Commands.upb;
for ( FKEAOST_i = 1;
FKEAOST_i <= GKEAOST;
FKEAOST_i += 1 )
{ 
 /* line 653: */
HKEAOST = (*(&A_VINDEX(Commands,FKEAOST_i))) ;
switch ( HKEAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
IKEAOST_s = (HKEAOST.data.mode1);
 /* line 654: */
NVAAOSL_( '-', M, &KKEAOST );
JKEAOST.data[0] = A_UNITE(LKEAOST,mode7,7,KKEAOST);
PKEAOST = NKEAOST ;
JKEAOST.data[1] = A_UNITE(OKEAOST,mode7,7,PKEAOST);
 /* line 656: */
UJBAOSL_oneline( A_HISVEC(QKEAOST,JKEAOST,2,A68_52 ), &RKEAOST );
A_CALLPROC(NL(PHEAOST_basichelp),(Root, IKEAOST_s, RKEAOST, A68_FALSE),(Root, IKEAOST_s, RKEAOST, A68_FALSE,(NL(PHEAOST_basichelp)).nonlocals));
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
SKEAOST_g = (HKEAOST.data.mode2);
 /* line 657: */
{ 
TKEAOST_s = RGEAOST_full(Root, (*(&(SKEAOST_g->Group))));
 /* line 658: */
 /* line 659: */
NVAAOSL_( '-', M, &VKEAOST );
UKEAOST.data[0] = A_UNITE(WKEAOST,mode7,7,VKEAOST);
ALEAOST = YKEAOST ;
UKEAOST.data[1] = A_UNITE(ZKEAOST,mode7,7,ALEAOST);
UJBAOSL_oneline( A_HISVEC(BLEAOST,UKEAOST,2,A68_52 ), &CLEAOST );
A_CALLPROC(NL(PHEAOST_basichelp),(Root, (*(&(SKEAOST_g->Group))), CLEAOST, A68_TRUE),(Root, (*(&(SKEAOST_g->Group))), CLEAOST, A68_TRUE,(NL(PHEAOST_basichelp)).nonlocals));
 /* line 660: */
 /* line 661: */
if ( NL(High) )
{ 
 /* line 662: */
EYDAOST_commandvechelp(NL(Env), NL(Channel), TKEAOST_s, (*(&(SKEAOST_g->Commands))), A68_FALSE);
} 
 /* line 663: */
 /* line 664: */
 /* line 666: */
A_CALLPROC(NL(CKEAOST_subfullhelp),((M+2), TKEAOST_s, (*(&(SKEAOST_g->Commands)))),((M+2), TKEAOST_s, (*(&(SKEAOST_g->Commands))),(NL(CKEAOST_subfullhelp)).nonlocals));
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
DLEAOST_c = (HKEAOST.data.mode3);
 /* line 667: */
 /* line 668: */
 /* line 669: */
A_CALLPROC(NL(VJEAOST_fullshell),((M+2), DLEAOST_c, Root),((M+2), DLEAOST_c, Root,(NL(VJEAOST_fullshell)).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
A_PROC_EXIT(subfullhelp);
return;
} 
#undef NL

A_STATIC A68_VOID  VPEAOST_get_name(A68_233  C, A68_VC  *ReturnedValue)
{ 
A68_233  WPEAOST;  /* united object - for case conformity */
A68_230 * XPEAOST_s;
A68_VC  YPEAOST;  /* clause result */
A68_231 * ZPEAOST_g;
A68_232 * AQEAOST_c;
A_PROC_ENTRY(get_name);
 /* line 771: */
 /* line 772: */
WPEAOST = C ;
switch ( WPEAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
XPEAOST_s = (WPEAOST.data.mode1);
 /* line 773: */
YPEAOST = (*(&(XPEAOST_s->Name)));
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
ZPEAOST_g = (WPEAOST.data.mode2);
 /* line 774: */
YPEAOST = (*(&((*(&(ZPEAOST_g->Group)))->Name)));
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
AQEAOST_c = (WPEAOST.data.mode3);
 /* line 775: */
YPEAOST = (*(&((*(&(AQEAOST_c->Prelude)))->Name)));
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(get_name);
*ReturnedValue = (YPEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  SSEAOST_generator(A68_BOOL  QSEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((TSEAOST_generator *)NonLocals)->x)
{ 
A68_102  USEAOST;  /* clause result */
A68_102  VSEAOST;  /* OPERATORS - dynamic generator */
{ 
VSEAOST.upb = 1 ;
( QSEAOST_anonymous? A_VLOC(A68_VC ,VSEAOST): A_VHEAP(A68_VC ,VSEAOST) );
USEAOST = VSEAOST;
} 
*ReturnedValue = (USEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  DTEAOST_generator(A68_BOOL  BTEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((ETEAOST_generator *)NonLocals)->x)
{ 
A68_102  FTEAOST;  /* clause result */
A68_102  GTEAOST;  /* OPERATORS - dynamic generator */
{ 
GTEAOST.upb = 0 ;
( BTEAOST_anonymous? A_VLOC(A68_VC ,GTEAOST): A_VHEAP(A68_VC ,GTEAOST) );
FTEAOST = GTEAOST;
} 
*ReturnedValue = (FTEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  LUEAOST_generator(A68_BOOL  JUEAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((MUEAOST_generator *)NonLocals)->x)
{ 
A68_102  NUEAOST;  /* clause result */
A68_102  OUEAOST;  /* OPERATORS - dynamic generator */
{ 
OUEAOST.upb = 0 ;
( JUEAOST_anonymous? A_VLOC(A68_VC ,OUEAOST): A_VHEAP(A68_VC ,OUEAOST) );
NUEAOST = OUEAOST;
} 
*ReturnedValue = (NUEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  YUEAOST_return_to_caller(A68_217  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZUEAOST_return_to_caller *)NonLocals)->x)
{ 
A68_230 * AVEAOST_postlude;
A68_236  BVEAOST;  /* CALL */
A68_217  CVEAOST;  /* avoid structure result */
A68_217  DVEAOST;  /* clause result */
A68_234 ** EVEAOST;  /* YIELD */
A68_236  FVEAOST;  /* CALL */
A68_217  GVEAOST;  /* avoid structure result */
A68_297  IVEAOST_generator;   /* proc value of non-global proc */
A68_102  NVEAOST;  /* avoid structure result */
A68_102 * OVEAOST;  /* YIELD */
A_PROC_ENTRY(return_to_caller);
{ 
AVEAOST_postlude = (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Postlude)));
 /* line 937: */
 /* line 938: */
if ( ((*(&((*(&(NL(Env)->Stack)))->Depth)))==1) )
{ 
BVEAOST = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(BVEAOST,(NL(Env), AVEAOST_postlude, ASAAOST_no_parameters, (*(&(NL(Env)->Abort))), &CVEAOST),(NL(Env), AVEAOST_postlude, ASAAOST_no_parameters, (*(&(NL(Env)->Abort))), &CVEAOST,(BVEAOST).nonlocals));
CVEAOST;
 /* line 939: */
 /* line 940: */
DVEAOST = LODAOST_quit;
} 
else
{ 
EVEAOST = (&(NL(Env)->Stack)) ;
(*EVEAOST) = (*(&((*(&(NL(Env)->Stack)))->Caller)));
 /* line 942: */
FVEAOST = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(FVEAOST,(NL(Env), AVEAOST_postlude, ASAAOST_no_parameters, (*NL(ISEAOST_msg)), &GVEAOST),(NL(Env), AVEAOST_postlude, ASAAOST_no_parameters, (*NL(ISEAOST_msg)), &GVEAOST,(FVEAOST).nonlocals));
GVEAOST;
 /* line 943: */
A_CLOSURE( IVEAOST_generator, JVEAOST_generator, KVEAOST_generator );
A_CALLPROC(IVEAOST_generator,(A68_FALSE, &NVEAOST),(A68_FALSE, &NVEAOST,(IVEAOST_generator).nonlocals));
OVEAOST = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*OVEAOST) = NVEAOST;
 /* line 944: */
 /* line 945: */
 /* line 946: */
DVEAOST = ZNDAOST_continue;
} 
} 
A_PROC_EXIT(return_to_caller);
*ReturnedValue = (DVEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  APDAOST_generator(A68_BOOL  YODAOST_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((BPDAOST_generator *)NonLocals)->x)
{ 
A68_226  CPDAOST;  /* clause result */
A68_226  DPDAOST;  /* OPERATORS - dynamic generator */
{ 
DPDAOST.upb = (NL(XODAOST_l)+NL(B).upb) ;
( YODAOST_anonymous? A_VLOC(A68_233 ,DPDAOST): A_VHEAP(A68_233 ,DPDAOST) );
CPDAOST = DPDAOST;
} 
*ReturnedValue = (CPDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  DRDAOST_generator(A68_BOOL  BRDAOST_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((ERDAOST_generator *)NonLocals)->x)
{ 
A68_226  FRDAOST;  /* clause result */
A68_226  GRDAOST;  /* OPERATORS - dynamic generator */
{ 
GRDAOST.upb = NL(Commands).upb ;
( BRDAOST_anonymous? A_VLOC(A68_233 ,GRDAOST): A_VHEAP(A68_233 ,GRDAOST) );
FRDAOST = GRDAOST;
} 
*ReturnedValue = (FRDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  NRDAOST_generator(A68_BOOL  LRDAOST_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((ORDAOST_generator *)NonLocals)->x)
{ 
A68_226  PRDAOST;  /* clause result */
A68_226  QRDAOST;  /* OPERATORS - dynamic generator */
{ 
QRDAOST.upb = 1 ;
( LRDAOST_anonymous? A_VLOC(A68_233 ,QRDAOST): A_VHEAP(A68_233 ,QRDAOST) );
PRDAOST = QRDAOST;
} 
*ReturnedValue = (PRDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRDAOST_generator(A68_BOOL  XRDAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ASDAOST_generator *)NonLocals)->x)
{ 
A68_VC  BSDAOST;  /* clause result */
A68_VC  CSDAOST;  /* OPERATORS - dynamic generator */
{ 
CSDAOST.upb = NL(Str).upb ;
( XRDAOST_anonymous? A_VLOC(A68_CHAR ,CSDAOST): A_VHEAP(A68_CHAR ,CSDAOST) );
BSDAOST = CSDAOST;
} 
*ReturnedValue = (BSDAOST);
return;
} 
#undef NL

A_STATIC A68_230 * FCEAOST_full(A68_230 * S, void *NonLocals)
#define NL(x) (((GCEAOST_full *)NonLocals)->x)
{ 
A68_230 * HCEAOST;  /* clause result */
A_PROC_ENTRY(full);
 /* line 501: */
if ( (NL(Root)==TMDAOST_nilsimple) )
{ 
HCEAOST = S;
} 
else
{ 
HCEAOST = KXDAOST_groupsimple(NL(Root), S);
} 
A_PROC_EXIT(full);
return( HCEAOST );
} 
#undef NL

A_STATIC A68_BOOL  HGEAOST_alreadyencountered(A68_230 * S, void *NonLocals)
#define NL(x) (((IGEAOST_alreadyencountered *)NonLocals)->x)
{ 
A68_BOOL  JGEAOST_found;
A68_280 * KGEAOST_ptr;
A68_BOOL  LGEAOST;  /* optbool result */
A68_280  MGEAOST;  /* collateral clause result */
A68_280 * NGEAOST;  /* YIELD */
A68_BOOL  OGEAOST;  /* clause result */
A_PROC_ENTRY(alreadyencountered);
 /* line 592: */
 /* line 593: */
{ 
JGEAOST_found = A68_FALSE;
 /* line 594: */
KGEAOST_ptr = (*NL(EGEAOST_list));
 /* line 595: */
for ( ;; )
{ 
LGEAOST = !JGEAOST_found;
if ( LGEAOST )
{ /* line 596: */
LGEAOST = (KGEAOST_ptr!=DGEAOST_end);
}
if ( !(LGEAOST) ) break;
JGEAOST_found = ((&((*(&(KGEAOST_ptr->S)))->Command))==(&(S->Command)));
 /* line 597: */
 /* line 598: */
KGEAOST_ptr = (*(&(KGEAOST_ptr->Next)));
}
 /* line 599: */
if ( !JGEAOST_found )
{ 
MGEAOST.S = S;
MGEAOST.Next = (*NL(EGEAOST_list));
NGEAOST = A_HEAP(A68_280 ) ;
(*NGEAOST) = MGEAOST ;
(*NL(EGEAOST_list)) = NGEAOST;
} 
 /* line 600: */
 /* line 601: */
OGEAOST = JGEAOST_found;
} 
A_PROC_EXIT(alreadyencountered);
return( OGEAOST );
} 
#undef NL

A_STATIC A68_230 * RGEAOST_full(A68_230 * R, A68_230 * S)
{ 
A68_230 * SGEAOST;  /* clause result */
A68_230 * TGEAOST_c;
A68_258  UGEAOST;  /* collateral clause result */
A68_52  VGEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WGEAOST;  /* YIELD */
A68_52  XGEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YGEAOST;  /* YIELD */
A68_85  ZGEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  AHEAOST;  /* avoid structure result */
A68_VC * BHEAOST;  /* YIELD */
A68_BOOL  CHEAOST;  /* optbool result */
A68_258  DHEAOST;  /* collateral clause result */
A68_52  EHEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  FHEAOST;  /* YIELD */
A68_52  GHEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HHEAOST;  /* YIELD */
A68_85  IHEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  JHEAOST;  /* avoid structure result */
A68_VC * KHEAOST;  /* YIELD */
A_PROC_ENTRY(full);
 /* line 605: */
 /* line 606: */
 /* line 607: */
if ( (R==TMDAOST_nilsimple) )
{ 
SGEAOST = S;
} 
else
{ 
TGEAOST_c = (A_HEAP(A68_230 ));
(*TGEAOST_c) = (*S);
 /* line 608: */
WGEAOST = (*(&(R->Name))) ;
UGEAOST.data[0] = A_UNITE(VGEAOST,mode7,7,WGEAOST);
YGEAOST = (*(&(S->Name))) ;
UGEAOST.data[1] = A_UNITE(XGEAOST,mode7,7,YGEAOST);
UJBAOSL_oneline( A_HISVEC(ZGEAOST,UGEAOST,2,A68_52 ), &AHEAOST );
BHEAOST = (&(TGEAOST_c->Name)) ;
(*BHEAOST) = AHEAOST;
 /* line 609: */
CHEAOST = MUDAOST_hasabreviation(R);
if ( CHEAOST )
{ /* line 610: */
CHEAOST = MUDAOST_hasabreviation(S);
}
if ( CHEAOST )
{ 
 /* line 611: */
FHEAOST = (*(&(R->Abreviation))) ;
DHEAOST.data[0] = A_UNITE(EHEAOST,mode7,7,FHEAOST);
HHEAOST = (*(&(S->Abreviation))) ;
DHEAOST.data[1] = A_UNITE(GHEAOST,mode7,7,HHEAOST);
 /* line 612: */
UJBAOSL_oneline( A_HISVEC(IHEAOST,DHEAOST,2,A68_52 ), &JHEAOST );
KHEAOST = (&(TGEAOST_c->Abreviation)) ;
(*KHEAOST) = JHEAOST;
} 
 /* line 613: */
 /* line 614: */
SGEAOST = TGEAOST_c;
} 
A_PROC_EXIT(full);
return( SGEAOST );
} 
#undef NL

A_STATIC A68_VOID  QHEAOST_basichelp(A68_230 * R, A68_230 * Simple, A68_VC  Type, A68_BOOL  G, void *NonLocals)
#define NL(x) (((RHEAOST_basichelp *)NonLocals)->x)
{ 
A68_230 * SHEAOST_s;
A68_BOOL  THEAOST_found;
A68_BOOL  UHEAOST;  /* optbool result */
A68_258  VHEAOST;  /* collateral clause result */
A68_52  WHEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XHEAOST;  /* avoid structure result */
A68_52  YHEAOST;  /* OPERATORS - mode -> union mode */
A68_85  ZHEAOST;  /* OPERATORS - istruct -> vector */
A68_85  BIEAOST;  /* clause result */
A68_52  DIEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  EIEAOST;  /* YIELD */
A68_85  FIEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  IIEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  JIEAOST;  /* YIELD */
A68_85  KIEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  NIEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OIEAOST;  /* YIELD */
A68_85  PIEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  SIEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  TIEAOST;  /* YIELD */
A68_85  UIEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  XIEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YIEAOST;  /* YIELD */
A68_85  ZIEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  CJEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DJEAOST;  /* YIELD */
A68_85  EJEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  HJEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  IJEAOST;  /* YIELD */
A68_85  JJEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_258  KJEAOST;  /* collateral clause result */
A68_52  NJEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OJEAOST;  /* YIELD */
A68_52  PJEAOST;  /* OPERATORS - mode -> union mode */
A68_56  QJEAOST;  /* procedure value */
A68_85  RJEAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(basichelp);
 /* line 618: */
 /* line 619: */
{ 
SOAAOST_flt_if_interrupted(NL(Msg));
 /* line 620: */
SHEAOST_s = RGEAOST_full(R, Simple);
 /* line 621: */
THEAOST_found = A_CALLPROC(NL(GGEAOST_alreadyencountered),(Simple),(Simple,(NL(GGEAOST_alreadyencountered)).nonlocals));
 /* line 622: */
 /* line 623: */
UHEAOST = !THEAOST_found;
if ( ! UHEAOST )
{UHEAOST = !NL(Low);
}
if ( UHEAOST )
{ 
VHEAOST.data[0] = A_UNITE(WHEAOST,mode7,7,Type);
JWDAOST_showname( SHEAOST_s, G, &XHEAOST );
VHEAOST.data[1] = A_UNITE(YHEAOST,mode7,7,XHEAOST);
GFBAOSL_put(NL(Channel), A_HISVEC(ZHEAOST,VHEAOST,2,A68_52 ));
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
if ( ((*(&((&(SHEAOST_s->Access))->A)))==JNDAOST_privateaccess.A) )
{ 
EIEAOST = CIEAOST ;
BIEAOST = A_HVEC(FIEAOST,A_UNITE(DIEAOST,mode7,7,EIEAOST),A68_52 );
} 
else
{ 
 /* line 627: */
 /* line 628: */
if ( ((*(&((&(SHEAOST_s->Access))->A)))==BNDAOST_hiddenaccess.A) )
{ 
JIEAOST = HIEAOST ;
BIEAOST = A_HVEC(KIEAOST,A_UNITE(IIEAOST,mode7,7,JIEAOST),A68_52 );
} 
else
{ 
 /* line 629: */
 /* line 630: */
if ( ((*(&((&(SHEAOST_s->Access))->A)))==FNDAOST_secretaccess.A) )
{ 
OIEAOST = MIEAOST ;
BIEAOST = A_HVEC(PIEAOST,A_UNITE(NIEAOST,mode7,7,OIEAOST),A68_52 );
} 
else
{ 
 /* line 631: */
 /* line 632: */
if ( ((*(&((&(SHEAOST_s->Access))->A)))==NNDAOST_hiddenprivateaccess.A) )
{ 
TIEAOST = RIEAOST ;
BIEAOST = A_HVEC(UIEAOST,A_UNITE(SIEAOST,mode7,7,TIEAOST),A68_52 );
} 
else
{ 
 /* line 633: */
 /* line 634: */
if ( ((*(&((&(SHEAOST_s->Access))->A)))==RNDAOST_secretprivateaccess.A) )
{ 
YIEAOST = WIEAOST ;
BIEAOST = A_HVEC(ZIEAOST,A_UNITE(XIEAOST,mode7,7,YIEAOST),A68_52 );
} 
else
{ 
 /* line 635: */
 /* line 636: */
if ( ((*(&((&(SHEAOST_s->Access))->A)))==VNDAOST_noaccess.A) )
{ 
 /* line 637: */
DJEAOST = BJEAOST ;
BIEAOST = A_HVEC(EJEAOST,A_UNITE(CJEAOST,mode7,7,DJEAOST),A68_52 );
} 
else
{ 
IJEAOST = GJEAOST ;
BIEAOST = A_HVEC(JJEAOST,A_UNITE(HJEAOST,mode7,7,IJEAOST),A68_52 );
} 
} 
} 
} 
} 
} 
} 
GFBAOSL_put(NL(Channel), BIEAOST);
 /* line 638: */
 /* line 639: */
if ( THEAOST_found )
{ 
OJEAOST = MJEAOST ;
KJEAOST.data[0] = A_UNITE(NJEAOST,mode7,7,OJEAOST);
QJEAOST.fn.fn_global = LRAAOSL_newline;
QJEAOST.nonlocals = A68_NIL;
KJEAOST.data[1] = A_UNITE(PJEAOST,mode12,12,QJEAOST);
 /* line 640: */
GFBAOSL_put(NL(Channel), A_HISVEC(RJEAOST,KJEAOST,2,A68_52 ));
} 
else
{ 
LRAAOSL_newline(NL(Channel));
 /* line 641: */
if ( NL(High) )
{ 
 /* line 642: */
 /* line 643: */
 /* line 644: */
MBEAOST_simplehelp(NL(Env), NL(Channel), SHEAOST_s, G);
} 
} 
} 
} 
A_PROC_EXIT(basichelp);
return;
} 
#undef NL

A_STATIC A68_VOID  WJEAOST_fullshell(A68_INT  M, A68_232 * Compound, A68_230 * Root, void *NonLocals)
#define NL(x) (((XJEAOST_fullshell *)NonLocals)->x)
{ 
A68_285  CKEAOST_subfullhelp;   /* proc value of non-global proc */
A68_258  ELEAOST;  /* collateral clause result */
A68_VC  FLEAOST;  /* avoid structure result */
A68_52  GLEAOST;  /* OPERATORS - mode -> union mode */
A68_52  JLEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  KLEAOST;  /* YIELD */
A68_85  LLEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  MLEAOST;  /* avoid structure result */
A68_278  NLEAOST;  /* collateral clause result */
A68_52  OLEAOST;  /* OPERATORS - mode -> union mode */
A68_56  PLEAOST;  /* procedure value */
A68_VC  QLEAOST;  /* avoid structure result */
A68_52  RLEAOST;  /* OPERATORS - mode -> union mode */
A68_52  ULEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  VLEAOST;  /* YIELD */
A68_52  WLEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XLEAOST;  /* YIELD */
A68_64  YLEAOST;  /* avoid structure result */
A68_52  ZLEAOST;  /* OPERATORS - mode -> union mode */
A68_85  AMEAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fullshell);
 /* line 647: */
 /* line 649: */
{ 
A_CLOSURE( CKEAOST_subfullhelp, DKEAOST_subfullhelp, EKEAOST_subfullhelp );
(( EKEAOST_subfullhelp * ) ( CKEAOST_subfullhelp.nonlocals )) -> PHEAOST_basichelp = NL(PHEAOST_basichelp);
(( EKEAOST_subfullhelp * ) ( CKEAOST_subfullhelp.nonlocals )) -> High = NL(High);
(( EKEAOST_subfullhelp * ) ( CKEAOST_subfullhelp.nonlocals )) -> Env = NL(Env);
(( EKEAOST_subfullhelp * ) ( CKEAOST_subfullhelp.nonlocals )) -> Channel = NL(Channel);
(( EKEAOST_subfullhelp * ) ( CKEAOST_subfullhelp.nonlocals )) -> CKEAOST_subfullhelp = CKEAOST_subfullhelp;
(( EKEAOST_subfullhelp * ) ( CKEAOST_subfullhelp.nonlocals )) -> VJEAOST_fullshell = NL(VJEAOST_fullshell);
 /* line 671: */
 /* line 672: */
NVAAOSL_( '-', M, &FLEAOST );
ELEAOST.data[0] = A_UNITE(GLEAOST,mode7,7,FLEAOST);
KLEAOST = ILEAOST ;
ELEAOST.data[1] = A_UNITE(JLEAOST,mode7,7,KLEAOST);
UJBAOSL_oneline( A_HISVEC(LLEAOST,ELEAOST,2,A68_52 ), &MLEAOST );
A_CALLPROC(NL(PHEAOST_basichelp),(Root, (*(&(Compound->Prelude))), MLEAOST, A68_FALSE),(Root, (*(&(Compound->Prelude))), MLEAOST, A68_FALSE,(NL(PHEAOST_basichelp)).nonlocals));
 /* line 673: */
 /* line 674: */
if ( NL(High) )
{ 
EYDAOST_commandvechelp(NL(Env), NL(Channel), TMDAOST_nilsimple, (*(&(Compound->Locals))), A68_TRUE);
 /* line 675: */
 /* line 676: */
EYDAOST_commandvechelp(NL(Env), NL(Channel), TMDAOST_nilsimple, (*(&(Compound->Globals))), A68_TRUE);
} 
 /* line 677: */
PLEAOST.fn.fn_global = LRAAOSL_newline;
PLEAOST.nonlocals = A68_NIL;
NLEAOST.data[0] = A_UNITE(OLEAOST,mode12,12,PLEAOST);
NVAAOSL_( '-', M, &QLEAOST );
NLEAOST.data[1] = A_UNITE(RLEAOST,mode7,7,QLEAOST);
 /* line 678: */
VLEAOST = TLEAOST ;
NLEAOST.data[2] = A_UNITE(ULEAOST,mode7,7,VLEAOST);
XLEAOST = (*(&(Compound->Context))) ;
NLEAOST.data[3] = A_UNITE(WLEAOST,mode7,7,XLEAOST);
HZAAOSL_lines( 2, &YLEAOST );
NLEAOST.data[4] = A_UNITE(ZLEAOST,mode20,20,YLEAOST);
GFBAOSL_put(NL(Channel), A_HISVEC(AMEAOST,NLEAOST,5,A68_52 ));
 /* line 679: */
A_CALLPROC(CKEAOST_subfullhelp,((M+2), TMDAOST_nilsimple, (*(&(Compound->Locals)))),((M+2), TMDAOST_nilsimple, (*(&(Compound->Locals))),(CKEAOST_subfullhelp).nonlocals));
 /* line 680: */
A_CALLPROC(CKEAOST_subfullhelp,((M+2), TMDAOST_nilsimple, (*(&(Compound->Globals)))),((M+2), TMDAOST_nilsimple, (*(&(Compound->Globals))),(CKEAOST_subfullhelp).nonlocals));
 /* line 681: */
 /* line 683: */
LRAAOSL_newline(NL(Channel));
} 
A_PROC_EXIT(fullshell);
return;
} 
#undef NL

A_STATIC A68_VOID  KMEAOST_show(A68_183  Analyser, void *NonLocals)
#define NL(x) (((LMEAOST_show *)NonLocals)->x)
{ 
A68_265  MMEAOST;  /* collateral clause result */
A68_VC  NMEAOST;  /* avoid structure result */
A68_59  OMEAOST;  /* avoid structure result */
A68_52  PMEAOST;  /* OPERATORS - mode -> union mode */
A68_52  SMEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  TMEAOST;  /* YIELD */
A68_52  UMEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  VMEAOST;  /* YIELD */
A68_85  WMEAOST;  /* OPERATORS - istruct -> vector */
A68_181  XMEAOST;  /* united object - for case conformity */
A68_175  YMEAOST_cs;
A68_271  ZMEAOST;  /* collateral clause result */
A68_60  ANEAOST;  /* avoid structure result */
A68_52  BNEAOST;  /* OPERATORS - mode -> union mode */
A68_52  ENEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  FNEAOST;  /* YIELD */
A68_VC  GNEAOST;  /* avoid structure result */
A68_52  HNEAOST;  /* OPERATORS - mode -> union mode */
A68_52  INEAOST;  /* OPERATORS - mode -> union mode */
A68_56  JNEAOST;  /* procedure value */
A68_85  KNEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  LNEAOST;  /* != */
A68_BOOL  MNEAOST;  /* optbool result */
A68_265  NNEAOST;  /* collateral clause result */
A68_52  ONEAOST;  /* OPERATORS - mode -> union mode */
A68_56  PNEAOST;  /* procedure value */
A68_52  QNEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RNEAOST;  /* YIELD */
A68_64  SNEAOST;  /* avoid structure result */
A68_52  TNEAOST;  /* OPERATORS - mode -> union mode */
A68_85  UNEAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show);
 /* line 694: */
 /* line 695: */
{ 
SOAAOST_flt_if_interrupted(NL(Msg));
 /* line 696: */
 /* line 697: */
FCAAOSI_intchars( (*Analyser.Sort), &NMEAOST );
JYAAOSL_justify( NMEAOST, 4, &OMEAOST );
MMEAOST.data[0] = A_UNITE(PMEAOST,mode15,15,OMEAOST);
TMEAOST = RMEAOST ;
MMEAOST.data[1] = A_UNITE(SMEAOST,mode7,7,TMEAOST);
VMEAOST = Analyser.Description ;
MMEAOST.data[2] = A_UNITE(UMEAOST,mode7,7,VMEAOST);
GFBAOSL_put(NL(Channel), A_HISVEC(WMEAOST,MMEAOST,3,A68_52 ));
 /* line 698: */
 /* line 699: */
XMEAOST = Analyser.Reader ;
switch ( XMEAOST.mode )
{ 
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE174)  */
A_UNCPY(YMEAOST_cs,XMEAOST);
YMEAOST_cs.mode -= 1;
 /* line 700: */
NYAAOSL_tab( 6, &ANEAOST );
ZMEAOST.data[0] = A_UNITE(BNEAOST,mode16,16,ANEAOST);
FNEAOST = DNEAOST ;
ZMEAOST.data[1] = A_UNITE(ENEAOST,mode7,7,FNEAOST);
 /* line 701: */
WUAAOST_show_syntax( YMEAOST_cs, (*(&(NL(Env)->Analysers))), &GNEAOST );
ZMEAOST.data[2] = A_UNITE(HNEAOST,mode7,7,GNEAOST);
JNEAOST.fn.fn_global = LRAAOSL_newline;
JNEAOST.nonlocals = A68_NIL;
ZMEAOST.data[3] = A_UNITE(INEAOST,mode12,12,JNEAOST);
 /* line 702: */
GFBAOSL_put(NL(Channel), A_HISVEC(KNEAOST,ZMEAOST,4,A68_52 ));
break;
default: 
 /* line 703: */
LRAAOSL_newline(NL(Channel));
break;
} 
 /* line 704: */
 /* line 705: */
if ( NL(Give_details) )
{ 
LNEAOST = Analyser.Help ;
MNEAOST = ! A_VSTRUCTCOMP(LNEAOST,YNAAOSL_nilstr);
if ( MNEAOST )
{ /* line 706: */
MNEAOST = (Analyser.Help.upb>0);
}
if ( MNEAOST )
{ 
PNEAOST.fn.fn_global = LRAAOSL_newline;
PNEAOST.nonlocals = A68_NIL;
NNEAOST.data[0] = A_UNITE(ONEAOST,mode12,12,PNEAOST);
RNEAOST = Analyser.Help ;
NNEAOST.data[1] = A_UNITE(QNEAOST,mode7,7,RNEAOST);
HZAAOSL_lines( 2, &SNEAOST );
NNEAOST.data[2] = A_UNITE(TNEAOST,mode20,20,SNEAOST);
 /* line 707: */
GFBAOSL_put(NL(Channel), A_HISVEC(UNEAOST,NNEAOST,3,A68_52 ));
} 
else
{ 
 /* line 708: */
 /* line 709: */
 /* line 710: */
LRAAOSL_newline(NL(Channel));
} 
} 
} 
A_PROC_EXIT(show);
return;
} 
#undef NL

A_STATIC A68_BOOL  IPEAOST_new(A68_226 * Vec, void *NonLocals)
#define NL(x) (((JPEAOST_new *)NonLocals)->x)
{ 
A68_BOOL  KPEAOST_not_found;
A68_290 * LPEAOST_ptr;
A68_BOOL  MPEAOST;  /* optbool result */
A68_290  NPEAOST;  /* collateral clause result */
A68_290 * OPEAOST;  /* YIELD */
A68_BOOL  PPEAOST;  /* clause result */
A_PROC_ENTRY(new);
 /* line 757: */
 /* line 758: */
{ 
KPEAOST_not_found = A68_TRUE;
 /* line 759: */
LPEAOST_ptr = (*NL(FPEAOST_list));
 /* line 760: */
for ( ;; )
{ 
 /* line 761: */
MPEAOST = (LPEAOST_ptr!=(A68_290 *)A68_NIL);
if ( MPEAOST )
{MPEAOST = KPEAOST_not_found;
}
if ( !(MPEAOST) ) break;
KPEAOST_not_found = (Vec!=(*(&(LPEAOST_ptr->Vec))));
 /* line 762: */
 /* line 763: */
LPEAOST_ptr = (*(&(LPEAOST_ptr->Rest)));
}
 /* line 764: */
if ( KPEAOST_not_found )
{ 
NPEAOST.Vec = Vec;
NPEAOST.Rest = (*NL(FPEAOST_list));
OPEAOST = A_HEAP(A68_290 ) ;
(*OPEAOST) = NPEAOST ;
(*NL(FPEAOST_list)) = OPEAOST;
} 
 /* line 765: */
 /* line 766: */
PPEAOST = KPEAOST_not_found;
} 
A_PROC_EXIT(new);
return( PPEAOST );
} 
#undef NL

A_STATIC A68_BOOL  SPEAOST_swop(A68_233 * A, A68_233 * B)
{ 
A68_VC  BQEAOST;  /* avoid structure result */
A68_VC  CQEAOST_name1;
A68_VC  DQEAOST;  /* avoid structure result */
A68_VC  EQEAOST_name2;
A68_233  FQEAOST_c;
A68_BOOL  GQEAOST;  /* clause result */
A_PROC_ENTRY(swop);
 /* line 769: */
 /* line 770: */
{ 
 /* line 776: */
VPEAOST_get_name( (*A), &BQEAOST );
CQEAOST_name1 = BQEAOST;
VPEAOST_get_name( (*B), &DQEAOST );
EQEAOST_name2 = DQEAOST;
 /* line 777: */
 /* line 778: */
 /* line 779: */
if ( A_VC_LT(EQEAOST_name2,CQEAOST_name1) )
{ 
FQEAOST_c = (*A);
(*A) = (*B);
(*B) = FQEAOST_c;
 /* line 780: */
GQEAOST = A68_TRUE;
} 
else
{ 
 /* line 781: */
 /* line 782: */
GQEAOST = A68_FALSE;
} 
} 
A_PROC_EXIT(swop);
return( GQEAOST );
} 
#undef NL

A_STATIC A68_VOID  JQEAOST_sort_commands(A68_226 * Commands, void *NonLocals)
#define NL(x) (((KQEAOST_sort_commands *)NonLocals)->x)
{ 
A68_BOOL  LQEAOST_end;
A68_INT  MQEAOST_i;
A68_INT  NQEAOST;  /* to part of loop */
A68_INT  OQEAOST;  /* YIELD */
A68_BOOL  PQEAOST;  /* clause result */
A68_INT  QQEAOST_i;
A68_INT  RQEAOST;  /* to part of loop */
A68_233  SQEAOST;  /* united object - for case conformity */
A68_231 * TQEAOST_g;
A68_232 * UQEAOST_c;
A_PROC_ENTRY(sort_commands);
 /* line 785: */
 /* line 786: */
 /* line 787: */
if ( A_CALLPROC(NL(HPEAOST_new),(Commands),(Commands,(NL(HPEAOST_new)).nonlocals)) )
{ 
 /* line 788: */
for ( ;; )
{ 
 /* line 789: */
LQEAOST_end = A68_TRUE;
 /* line 790: */
 /* line 791: */
NQEAOST = ((*Commands).upb-1);
for ( MQEAOST_i = 1;
MQEAOST_i <= NQEAOST;
MQEAOST_i += 1 )
{ 
OQEAOST = (MQEAOST_i+1) ;
if ( SPEAOST_swop((&A_VINDEX((*Commands),MQEAOST_i)), (&A_VINDEX((*Commands),OQEAOST))) )
{ 
LQEAOST_end = A68_FALSE;
} 
}
 /* line 792: */
 /* line 793: */
PQEAOST = !LQEAOST_end;
if ( !PQEAOST ) break;
/*SKIP*/;
}
 /* line 795: */
 /* line 796: */
RQEAOST = (*Commands).upb;
for ( QQEAOST_i = 1;
QQEAOST_i <= RQEAOST;
QQEAOST_i += 1 )
{ 
 /* line 797: */
SQEAOST = (*(&A_VINDEX((*Commands),QQEAOST_i))) ;
switch ( SQEAOST.mode )
{ 
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
TQEAOST_g = (SQEAOST.data.mode2);
 /* line 798: */
A_CALLPROC(NL(IQEAOST_sort_commands),((&(TQEAOST_g->Commands))),((&(TQEAOST_g->Commands)),(NL(IQEAOST_sort_commands)).nonlocals));
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
UQEAOST_c = (SQEAOST.data.mode3);
{ 
A_CALLPROC(NL(IQEAOST_sort_commands),((&(UQEAOST_c->Locals))),((&(UQEAOST_c->Locals)),(NL(IQEAOST_sort_commands)).nonlocals));
 /* line 799: */
 /* line 800: */
 /* line 801: */
A_CALLPROC(NL(IQEAOST_sort_commands),((&(UQEAOST_c->Globals))),((&(UQEAOST_c->Globals)),(NL(IQEAOST_sort_commands)).nonlocals));
} 
break;
default: 
 /* line 802: */
/*SKIP*/;
break;
} 
}
 /* line 803: */
} 
A_PROC_EXIT(sort_commands);
return;
} 
#undef NL

A_STATIC A68_VOID  ZQEAOST_generator(A68_BOOL  XQEAOST_anonymous, A68_189  *ReturnedValue, void *NonLocals)
#define NL(x) (((AREAOST_generator *)NonLocals)->x)
{ 
A68_189  BREAOST;  /* clause result */
A68_189  CREAOST;  /* OPERATORS - dynamic generator */
{ 
CREAOST.upb = (*NL(VQEAOST_n_readers)) ;
( XQEAOST_anonymous? A_VLOC(A68_183 ,CREAOST): A_VHEAP(A68_183 ,CREAOST) );
BREAOST = CREAOST;
} 
*ReturnedValue = (BREAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  SREAOST_generator(A68_BOOL  QREAOST_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((TREAOST_generator *)NonLocals)->x)
{ 
A68_102  UREAOST;  /* clause result */
A68_102  VREAOST;  /* OPERATORS - dynamic generator */
{ 
VREAOST.upb = 0 ;
( QREAOST_anonymous? A_VLOC(A68_VC ,VREAOST): A_VHEAP(A68_VC ,VREAOST) );
UREAOST = VREAOST;
} 
*ReturnedValue = (UREAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  LSEAOST_input_lines(A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((MSEAOST_input_lines *)NonLocals)->x)
{ 
A68_102  NSEAOST;  /* clause result */
A68_102  OSEAOST;  /* avoid structure result */
A68_102  PSEAOST_l;
A68_297  RSEAOST_generator;   /* proc value of non-global proc */
A68_102  WSEAOST;  /* clause result */
A68_102  XSEAOST;  /* avoid structure result */
A68_102  YSEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_102  ZSEAOST;  /* OPERATORS - assign op */
A68_102  ATEAOST_lines;
A68_297  CTEAOST_generator;   /* proc value of non-global proc */
A68_102  HTEAOST;  /* avoid structure result */
A68_102 * ITEAOST;  /* YIELD */
A68_102  JTEAOST;  /* clause result */
A_PROC_ENTRY(input_lines);
{ 
 /* line 870: */
 /* line 871: */
if ( ((*(&((*(&(NL(Env)->Stack)))->Input_lines))).upb==0) )
{ 
 /* line 872: */
HLBAOST_get_input_lines(  &OSEAOST );
NSEAOST = OSEAOST;
} 
else
{ 
NSEAOST = (*(&((*(&(NL(Env)->Stack)))->Input_lines)));
} 
PSEAOST_l = NSEAOST;
 /* line 873: */
 /* line 874: */
if ( (PSEAOST_l.upb<=0) )
{ 
A_CLOSURE( RSEAOST_generator, SSEAOST_generator, TSEAOST_generator );
 /* line 875: */
 /* line 876: */
A_CALLPROC(RSEAOST_generator,(A68_FALSE, &XSEAOST),(A68_FALSE, &XSEAOST,(RSEAOST_generator).nonlocals));
ZSEAOST = A_HVEC(YSEAOST,EOAAOSL_nullstr,A68_VC ) ;
A_VASSIGN2(ZSEAOST,XSEAOST,A68_VC ) ;
WSEAOST = XSEAOST;
} 
else
{ 
WSEAOST = PSEAOST_l;
} 
ATEAOST_lines = WSEAOST;
 /* line 877: */
A_CLOSURE( CTEAOST_generator, DTEAOST_generator, ETEAOST_generator );
A_CALLPROC(CTEAOST_generator,(A68_FALSE, &HTEAOST),(A68_FALSE, &HTEAOST,(CTEAOST_generator).nonlocals));
ITEAOST = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*ITEAOST) = HTEAOST;
 /* line 884: */
 /* line 885: */
JTEAOST = ATEAOST_lines;
} 
A_PROC_EXIT(input_lines);
*ReturnedValue = (JTEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  NTEAOST_obey(A68_VC  Name, A68_226  Commands, A68_217  *ReturnedValue, void *NonLocals)
#define NL(x) (((OTEAOST_obey *)NonLocals)->x)
{ 
A68_217  PTEAOST_continuation;
A68_233 * QTEAOST_com;
A68_INT  RTEAOST;  /* forall loop counter */
A68_233  STEAOST;  /* united object - for case conformity */
A68_230 * TTEAOST_simple;
A68_178  UTEAOST;  /* avoid structure result */
A68_178  VTEAOST_param;
A68_236  WTEAOST;  /* CALL */
A68_217  XTEAOST;  /* avoid structure result */
A68_231 * YTEAOST_group;
A68_VC  ZTEAOST_subname;
A68_217  AUEAOST;  /* avoid structure result */
A68_232 * BUEAOST_compound;
A68_178  CUEAOST;  /* avoid structure result */
A68_178  DUEAOST_param;
A68_236  EUEAOST;  /* CALL */
A68_217  FUEAOST;  /* avoid structure result */
A68_102  GUEAOST;  /* avoid structure result */
A68_102 * HUEAOST;  /* YIELD */
A68_234  IUEAOST;  /* collateral clause result */
A68_297  KUEAOST_generator;   /* proc value of non-global proc */
A68_102  PUEAOST;  /* avoid structure result */
A68_234 * QUEAOST;  /* YIELD */
A68_234 ** RUEAOST;  /* YIELD */
A68_217  SUEAOST;  /* clause result */
A_PROC_ENTRY(obey);
 /* line 889: */
 /* line 890: */
{ 
PTEAOST_continuation = PODAOST_not_found;
 /* line 892: */
RTEAOST = Commands.upb -1;
QTEAOST_com = Commands.data;
for (;RTEAOST-- >= 0;
(QTEAOST_com++
) )
{
 /* line 893: */
if ( !(((*(&((&PTEAOST_continuation)->C)))==PODAOST_not_found.C)) ) break;
 /* line 894: */
STEAOST = (*QTEAOST_com) ;
switch ( STEAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
TTEAOST_simple = (STEAOST.data.mode1);
 /* line 895: */
 /* line 896: */
 /* line 897: */
if ( UUDAOST_checkname(NL(Env), A68_FALSE, Name, TTEAOST_simple) )
{ 
 /* line 898: */
DOBAOST_read_parameters( (*(&(NL(Env)->Analysers))), (*(&(TTEAOST_simple->Parameter))), (*NL(ISEAOST_msg)), &UTEAOST );
VTEAOST_param = UTEAOST;
 /* line 899: */
 /* line 900: */
 /* line 902: */
WTEAOST = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(WTEAOST,(NL(Env), TTEAOST_simple, VTEAOST_param, (*NL(ISEAOST_msg)), &XTEAOST),(NL(Env), TTEAOST_simple, VTEAOST_param, (*NL(ISEAOST_msg)), &XTEAOST,(WTEAOST).nonlocals));
PTEAOST_continuation = XTEAOST;
} 
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
YTEAOST_group = (STEAOST.data.mode2);
 /* line 903: */
{ 
ZTEAOST_subname = EOAAOSL_nullstr;
 /* line 904: */
 /* line 905: */
if ( WVDAOST_searchgroup(NL(Env), A68_FALSE, Name, (&ZTEAOST_subname), YTEAOST_group) )
{ 
 /* line 906: */
 /* line 907: */
 /* line 909: */
A_CALLPROC(NL(MTEAOST_obey),(ZTEAOST_subname, (*(&(YTEAOST_group->Commands))), &AUEAOST),(ZTEAOST_subname, (*(&(YTEAOST_group->Commands))), &AUEAOST,(NL(MTEAOST_obey)).nonlocals));
PTEAOST_continuation = AUEAOST;
} 
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
BUEAOST_compound = (STEAOST.data.mode3);
 /* line 910: */
 /* line 911: */
 /* line 912: */
if ( UUDAOST_checkname(NL(Env), A68_FALSE, Name, (*(&(BUEAOST_compound->Prelude)))) )
{ 
 /* line 913: */
 /* line 914: */
DOBAOST_read_parameters( (*(&(NL(Env)->Analysers))), (*(&((*(&(BUEAOST_compound->Prelude)))->Parameter))), (*NL(ISEAOST_msg)), &CUEAOST );
DUEAOST_param = CUEAOST;
 /* line 915: */
 /* line 916: */
EUEAOST = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(EUEAOST,(NL(Env), (*(&(BUEAOST_compound->Prelude))), DUEAOST_param, (*NL(ISEAOST_msg)), &FUEAOST),(NL(Env), (*(&(BUEAOST_compound->Prelude))), DUEAOST_param, (*NL(ISEAOST_msg)), &FUEAOST,(EUEAOST).nonlocals));
PTEAOST_continuation = FUEAOST;
 /* line 917: */
 /* line 918: */
if ( ((*(&((&PTEAOST_continuation)->C)))==ZNDAOST_continue.C) )
{ 
A_CALLPROC(NL(KSEAOST_input_lines),( &GUEAOST),( &GUEAOST,(NL(KSEAOST_input_lines)).nonlocals));
HUEAOST = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*HUEAOST) = GUEAOST;
 /* line 919: */
 /* line 920: */
 /* line 921: */
IUEAOST.Current_context = BUEAOST_compound;
 /* line 922: */
IUEAOST.Depth = ((*(&((*(&(NL(Env)->Stack)))->Depth)))+1);
A_CLOSURE( KUEAOST_generator, LUEAOST_generator, MUEAOST_generator );
A_CALLPROC(KUEAOST_generator,(A68_FALSE, &PUEAOST),(A68_FALSE, &PUEAOST,(KUEAOST_generator).nonlocals));
IUEAOST.Input_lines = PUEAOST;
 /* line 923: */
IUEAOST.Caller = (*(&(NL(Env)->Stack)));
 /* line 924: */
 /* line 925: */
 /* line 926: */
QUEAOST = A_HEAP(A68_234 ) ;
(*QUEAOST) = IUEAOST ;
RUEAOST = (&(NL(Env)->Stack)) ;
(*RUEAOST) = QUEAOST;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 928: */
 /* line 929: */
SUEAOST = PTEAOST_continuation;
} 
A_PROC_EXIT(obey);
*ReturnedValue = (SUEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  UUEAOST_shell(A68_217  *ReturnedValue, void *NonLocals)
#define NL(x) (((VUEAOST_shell *)NonLocals)->x)
{ 
A68_300  XUEAOST_return_to_caller;   /* proc value of non-global proc */
A68_VC  PVEAOST;  /* avoid structure result */
A68_VC  QVEAOST_name;
A68_217  RVEAOST;  /* avoid structure result */
A68_217  SVEAOST_c1;
A68_217  TVEAOST;  /* clause result */
A68_217  UVEAOST;  /* avoid structure result */
A68_217  VVEAOST_c;
A68_46  YVEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_217  ZVEAOST;  /* clause result */
A68_217  AWEAOST;  /* avoid structure result */
A68_217  BWEAOST;  /* avoid structure result */
A_PROC_ENTRY(shell);
{ 
 /* line 935: */
 /* line 936: */
A_CLOSURE( XUEAOST_return_to_caller, YUEAOST_return_to_caller, ZUEAOST_return_to_caller );
(( ZUEAOST_return_to_caller * ) ( XUEAOST_return_to_caller.nonlocals )) -> Env = NL(Env);
(( ZUEAOST_return_to_caller * ) ( XUEAOST_return_to_caller.nonlocals )) -> ISEAOST_msg = NL(ISEAOST_msg);
 /* line 948: */
IFCAOST_read_command( (*NL(ISEAOST_msg)), &PVEAOST );
QVEAOST_name = PVEAOST;
 /* line 949: */
SNAAOST_clear_interrupt();
 /* line 950: */
A_CALLPROC(NL(MTEAOST_obey),(QVEAOST_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Locals))), &RVEAOST),(QVEAOST_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Locals))), &RVEAOST,(NL(MTEAOST_obey)).nonlocals));
SVEAOST_c1 = RVEAOST;
 /* line 951: */
 /* line 952: */
if ( (SVEAOST_c1.C==PODAOST_not_found.C) )
{ 
 /* line 953: */
 /* line 954: */
 /* line 955: */
A_CALLPROC(NL(MTEAOST_obey),(QVEAOST_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Globals))), &UVEAOST),(QVEAOST_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Globals))), &UVEAOST,(NL(MTEAOST_obey)).nonlocals));
TVEAOST = UVEAOST;
} 
else
{ 
TVEAOST = SVEAOST_c1;
} 
VVEAOST_c = TVEAOST;
 /* line 956: */
 /* line 957: */
if ( (VVEAOST_c.C==PODAOST_not_found.C) )
{ 
A_CALLPROC((*NL(ISEAOST_msg)),(WHAAOSI_user, A_HVEC(YVEAOST,XVEAOST,A68_VC )),(WHAAOSI_user, A_HVEC(YVEAOST,XVEAOST,A68_VC ),((*NL(ISEAOST_msg))).nonlocals));
 /* line 958: */
 /* line 959: */
ZVEAOST = ZNDAOST_continue;
} 
else
{ 
 /* line 960: */
if ( (VVEAOST_c.C==HODAOST_finish.C) )
{ 
for ( ;; )
{ 
A_CALLPROC(XUEAOST_return_to_caller,( &AWEAOST),( &AWEAOST,(XUEAOST_return_to_caller).nonlocals));
if ( !((AWEAOST.C==ZNDAOST_continue.C)) ) break;
/*SKIP*/;
}
 /* line 961: */
 /* line 962: */
ZVEAOST = HODAOST_finish;
} 
else
{ 
 /* line 963: */
 /* line 964: */
if ( (VVEAOST_c.C==DODAOST_return.C) )
{ 
 /* line 965: */
A_CALLPROC(XUEAOST_return_to_caller,( &BWEAOST),( &BWEAOST,(XUEAOST_return_to_caller).nonlocals));
ZVEAOST = BWEAOST;
} 
else
{ 
 /* line 966: */
ZVEAOST = VVEAOST_c;
} 
} 
} 
} 
A_PROC_EXIT(shell);
*ReturnedValue = (ZVEAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  FWEAOST_anonymous(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((GWEAOST_anonymous *)NonLocals)->x)
{ 
A68_95  HWEAOST;  /* avoid structure result */
A68_95  IWEAOST_message;
A68_106  JWEAOST;  /* OPERATORS - mode -> union mode */
A68_BOOL  KWEAOST;  /* optbool result */
A68_106  LWEAOST;  /* OPERATORS - mode -> union mode */
A68_102  MWEAOST;  /* avoid structure result */
A68_102  NWEAOST_input;
A68_302  OWEAOST;  /* collateral clause result */
A68_INT  PWEAOST;  /* YIELD */
A68_INT  SWEAOST;  /* YIELD */
A68_46  TWEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  UWEAOST;  /* avoid structure result */
A68_VC * VWEAOST;  /* YIELD */
A68_237  WWEAOST;  /* CALL */
A68_239  XWEAOST;  /* CALL */
A68_238  YWEAOST;  /* OPERATORS - mode -> union mode */
A68_97  ZWEAOST;  /* CALL */
A68_46  AXEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_239  BXEAOST;  /* CALL */
A68_238  CXEAOST;  /* OPERATORS - mode -> union mode */
A68_97  DXEAOST;  /* CALL */
A68_46  EXEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106  FXEAOST;  /* OPERATORS - mode -> union mode */
A68_106  GXEAOST;  /* OPERATORS - mode -> union mode */
A68_106  HXEAOST;  /* OPERATORS - mode -> union mode */
A68_106  IXEAOST;  /* OPERATORS - mode -> union mode */
A68_106  JXEAOST;  /* OPERATORS - mode -> union mode */
A68_106  KXEAOST;  /* OPERATORS - mode -> union mode */
 /* line 970: */
 /* line 971: */
{ 
ONAAOSI_translate_msg( Msgno, Params, &HWEAOST );
IWEAOST_message = HWEAOST;
 /* line 972: */
KWEAOST = ELAAOSI_cli_msg(A_UNITE(JWEAOST,mode1,1,Msgno));
if ( ! KWEAOST )
{ /* line 973: */
KWEAOST = ZKAAOSI_abort_msg(A_UNITE(LWEAOST,mode1,1,Msgno));
}
if ( KWEAOST )
{ 
A_CALLPROC(NL(KSEAOST_input_lines),( &MWEAOST),( &MWEAOST,(NL(KSEAOST_input_lines)).nonlocals));
NWEAOST_input = MWEAOST;
 /* line 974: */
 /* line 975: */
PWEAOST = NWEAOST_input.upb ;
OWEAOST.data[0] = (*(&A_VINDEX(NWEAOST_input,PWEAOST)));
OWEAOST.data[1] = RWEAOST;
OWEAOST.data[2] = IWEAOST_message.Text;
SWEAOST = NWEAOST_input.upb ;
JBAAOSI_concat( A_HISVEC(TWEAOST,OWEAOST,3,A68_VC ), &UWEAOST );
VWEAOST = (&A_VINDEX(NWEAOST_input,SWEAOST)) ;
(*VWEAOST) = UWEAOST;
 /* line 976: */
WWEAOST = (*(&(NL(Env)->Report_error))) ;
A_CALLPROC(WWEAOST,(NWEAOST_input),(NWEAOST_input,(WWEAOST).nonlocals));
 /* line 977: */
DMBAOST_skip_command();
 /* line 978: */
 /* line 979: */
if ( (IWEAOST_message.Msgno.Class==UHAAOSI_fatal.Class) )
{ 
XWEAOST = (*(&(NL(Env)->Set_default_msg))) ;
A_CALLPROC(XWEAOST,(A_EMPTY(YWEAOST,2)),(A_EMPTY(YWEAOST,2),(XWEAOST).nonlocals));
 /* line 984: */
 /* line 985: */
ZWEAOST = (*(&(NL(Env)->Abort))) ;
A_CALLPROC(ZWEAOST,(UHAAOSI_fatal, A_HVEC(AXEAOST,IWEAOST_message.Text,A68_VC )),(UHAAOSI_fatal, A_HVEC(AXEAOST,IWEAOST_message.Text,A68_VC ),(ZWEAOST).nonlocals));
} 
else
{ 
 /* line 986: */
if ( (IWEAOST_message.Msgno.Class==SHAAOSI_system.Class) )
{ 
BXEAOST = (*(&(NL(Env)->Set_default_msg))) ;
A_CALLPROC(BXEAOST,(A_EMPTY(CXEAOST,2)),(A_EMPTY(CXEAOST,2),(BXEAOST).nonlocals));
 /* line 987: */
 /* line 988: */
DXEAOST = (*(&(NL(Env)->Abort))) ;
A_CALLPROC(DXEAOST,(SHAAOSI_system, A_HVEC(EXEAOST,IWEAOST_message.Text,A68_VC )),(SHAAOSI_system, A_HVEC(EXEAOST,IWEAOST_message.Text,A68_VC ),(DXEAOST).nonlocals));
} 
else
{ 
 /* line 989: */
 /* line 990: */
siglongjmp(NL(GSEAOST_restart).label,1);
} 
} 
} 
else
{ 
 /* line 991: */
if ( JLAAOSI_log_msg(A_UNITE(FXEAOST,mode2,2,IWEAOST_message)) )
{ 
 /* line 992: */
if ( TKAAOSI_error_msg(A_UNITE(GXEAOST,mode2,2,IWEAOST_message)) )
{ 
GABAOSL_putstr(MEAAOST_err, IWEAOST_message.Text);
 /* line 993: */
if ( TLAAOSI_newline_msg(A_UNITE(HXEAOST,mode2,2,IWEAOST_message)) )
{ 
 /* line 994: */
LRAAOSL_newline(MEAAOST_err);
} 
} 
else
{ 
GABAOSL_putstr(KEAAOST_screen, IWEAOST_message.Text);
 /* line 995: */
if ( TLAAOSI_newline_msg(A_UNITE(IXEAOST,mode2,2,IWEAOST_message)) )
{ 
 /* line 996: */
 /* line 997: */
LRAAOSL_newline(KEAAOST_screen);
} 
} 
} 
else
{ 
 /* line 998: */
if ( OLAAOSI_out_msg(A_UNITE(JXEAOST,mode2,2,IWEAOST_message)) )
{ 
GABAOSL_putstr(LEAAOST_out, IWEAOST_message.Text);
 /* line 999: */
if ( TLAAOSI_newline_msg(A_UNITE(KXEAOST,mode2,2,IWEAOST_message)) )
{ 
 /* line 1000: */
 /* line 1001: */
LRAAOSL_newline(LEAAOST_out);
} 
} 
} 
} 
} 
return;
} 
#undef NL

A68_VOID  MMDAOST_nullcommand(A68_178  Param, A68_97  Msg)
{ 
A_PROC_ENTRY(nullcommand);
/*SKIP*/;
A_PROC_EXIT(nullcommand);
return;
} 
#undef NL

A_STATIC A68_VOID  OMDAOST_generator(A68_BOOL  NMDAOST_anonymous, A68_226  *ReturnedValue)
{ 
A68_226  PMDAOST;  /* clause result */
A68_226  QMDAOST;  /* OPERATORS - dynamic generator */
{ 
QMDAOST.upb = 0 ;
( NMDAOST_anonymous? A_VLOC(A68_233 ,QMDAOST): A_VHEAP(A68_233 ,QMDAOST) );
PMDAOST = QMDAOST;
} 
*ReturnedValue = (PMDAOST);
return;
} 
#undef NL

A68_BOOL  SODAOST_(A68_217  A, A68_217  B)
{ 
A68_BOOL  TODAOST;  /* clause result */
A_PROC_ENTRY(=);
TODAOST = (A.C==B.C);
A_PROC_EXIT(=);
return( TODAOST );
} 
#undef NL

A_STATIC A68_VOID  WODAOST_add(A68_226  A, A68_226  B, A68_226  *ReturnedValue)
{ 
A68_INT  XODAOST_l;
A68_240  ZODAOST_generator;   /* proc value of non-global proc */
A68_226  EPDAOST;  /* avoid structure result */
A68_226  FPDAOST_new;
A68_226  GPDAOST;  /* OPERATORS - trim index */
A68_226  HPDAOST;  /* YIELD */
A68_INT  IPDAOST_index;
A68_233  JPDAOST_cb;
A68_233 * KPDAOST;  /* forall control - []x */
A68_INT  LPDAOST;  /* forall loop counter */
A68_233  MPDAOST;  /* united object - for case conformity */
A68_231 * NPDAOST_gb;
A68_BOOL  OPDAOST_not_found;
A68_233 * PPDAOST_ca;
A68_226  QPDAOST;  /* OPERATORS - trim index */
A68_226  RPDAOST;  /* forall yield */
A68_INT  SPDAOST;  /* forall loop counter */
A68_233  TPDAOST;  /* united object - for case conformity */
A68_231 * UPDAOST_ga;
A68_BOOL  VPDAOST;  /* optbool result */
A68_231  WPDAOST;  /* collateral clause result */
A68_226  XPDAOST;  /* avoid structure result */
A68_231 * YPDAOST;  /* YIELD */
A68_233  ZPDAOST;  /* OPERATORS - mode -> union mode */
A68_INT  AQDAOST;  /* YIELD */
A68_233 * BQDAOST;  /* YIELD */
A68_INT  CQDAOST;  /* YIELD */
A68_233 * DQDAOST;  /* YIELD */
A68_226  EQDAOST;  /* clause result */
A68_226  FQDAOST;  /* OPERATORS - trim index */
A_PROC_ENTRY(add);
 /* line 205: */
 /* line 207: */
{ 
XODAOST_l = A.upb;
 /* line 208: */
A_CLOSURE( ZODAOST_generator, APDAOST_generator, BPDAOST_generator );
(( BPDAOST_generator * ) ( ZODAOST_generator.nonlocals )) -> XODAOST_l = XODAOST_l;
(( BPDAOST_generator * ) ( ZODAOST_generator.nonlocals )) -> B = B;
A_CALLPROC(ZODAOST_generator,(A68_FALSE, &EPDAOST),(A68_FALSE, &EPDAOST,(ZODAOST_generator).nonlocals));
FPDAOST_new = EPDAOST;
 /* line 209: */
HPDAOST = A_VTRIM(GPDAOST,(FPDAOST_new),A_VTSCRIPT(&(GPDAOST.upb),(FPDAOST_new).upb,1,XODAOST_l)) ;
A_VASSIGN2(A,HPDAOST,A68_233 );
 /* line 210: */
IPDAOST_index = A.upb;
 /* line 211: */
 /* line 212: */
LPDAOST = B.upb -1;
KPDAOST = B.data;
for (;LPDAOST-- >= 0;
(KPDAOST++
) )
{
JPDAOST_cb = *KPDAOST;
 /* line 213: */
MPDAOST = JPDAOST_cb ;
switch ( MPDAOST.mode )
{ 
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
NPDAOST_gb = (MPDAOST.data.mode2);
 /* line 214: */
{ 
OPDAOST_not_found = A68_TRUE;
 /* line 215: */
RPDAOST = A_VTRIM(QPDAOST,(FPDAOST_new),A_VTSCRIPT(&(QPDAOST.upb),(FPDAOST_new).upb,1,XODAOST_l)) ;
SPDAOST = RPDAOST.upb -1;
PPDAOST_ca = RPDAOST.data;
for (;SPDAOST-- >= 0;
(PPDAOST_ca++
) )
{
 /* line 216: */
if ( !(OPDAOST_not_found) ) break;
 /* line 217: */
TPDAOST = (*PPDAOST_ca) ;
switch ( TPDAOST.mode )
{ 
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
UPDAOST_ga = (TPDAOST.data.mode2);
 /* line 218: */
 /* line 219: */
VPDAOST = A_VC_EQ((*(&((*(&(UPDAOST_ga->Group)))->Name))),(*(&((*(&(NPDAOST_gb->Group)))->Name))));
if ( VPDAOST )
{ /* line 220: */
VPDAOST = A_VC_EQ((*(&((*(&(UPDAOST_ga->Group)))->Abreviation))),(*(&((*(&(NPDAOST_gb->Group)))->Abreviation))));
}
 /* line 221: */
if ( VPDAOST )
{ /* line 223: */
VPDAOST = ((*(&((&((*(&(UPDAOST_ga->Group)))->Access))->A)))==(*(&((&((*(&(NPDAOST_gb->Group)))->Access))->A))));
}
if ( VPDAOST )
{ 
OPDAOST_not_found = A68_FALSE;
 /* line 224: */
 /* line 225: */
 /* line 226: */
WPDAOST.Group = (*(&(UPDAOST_ga->Group)));
 /* line 227: */
WODAOST_add( (*(&(UPDAOST_ga->Commands))), (*(&(NPDAOST_gb->Commands))), &XPDAOST );
WPDAOST.Commands = XPDAOST;
 /* line 228: */
 /* line 229: */
YPDAOST = A_HEAP(A68_231 ) ;
(*YPDAOST) = WPDAOST ;
(*PPDAOST_ca) = A_UNITE(ZPDAOST,mode2,2,YPDAOST);
} 
break;
default: 
 /* line 230: */
/*SKIP*/;
break;
} 
}
 /* line 231: */
if ( OPDAOST_not_found )
{ 
 /* line 232: */
 /* line 233: */
AQDAOST = IPDAOST_index+=1 ;
BQDAOST = (&A_VINDEX(FPDAOST_new,AQDAOST)) ;
(*BQDAOST) = JPDAOST_cb;
} 
} 
break;
default: 
 /* line 234: */
 /* line 235: */
CQDAOST = IPDAOST_index+=1 ;
DQDAOST = (&A_VINDEX(FPDAOST_new,CQDAOST)) ;
(*DQDAOST) = JPDAOST_cb;
break;
} 
}
 /* line 236: */
 /* line 237: */
EQDAOST = A_VTRIM(FQDAOST,(FPDAOST_new),A_VTSCRIPT(&(FQDAOST.upb),(FPDAOST_new).upb,1,IPDAOST_index));
} 
A_PROC_EXIT(add);
*ReturnedValue = (EQDAOST);
return;
} 
#undef NL

A68_VOID  KQDAOST_add(A68_226  A, A68_233  B, A68_226  *ReturnedValue)
{ 
A68_226  LQDAOST;  /* clause result */
A68_226  MQDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_226  NQDAOST;  /* avoid structure result */
A_PROC_ENTRY(add);
WODAOST_add( A, A_HVEC(MQDAOST,B,A68_233 ), &NQDAOST );
LQDAOST = NQDAOST;
A_PROC_EXIT(add);
*ReturnedValue = (LQDAOST);
return;
} 
#undef NL

A68_VOID  QQDAOST_addab(A68_226 * A, A68_226  B, A68_226  *ReturnedValue)
{ 
A68_226  RQDAOST;  /* clause result */
A68_226  SQDAOST;  /* avoid structure result */
A_PROC_ENTRY(addab);
 /* line 247: */
WODAOST_add( (*A), B, &SQDAOST );
RQDAOST = (*A) = SQDAOST;
A_PROC_EXIT(addab);
*ReturnedValue = (RQDAOST);
return;
} 
#undef NL

A68_VOID  VQDAOST_addab(A68_226 * A, A68_233  B, A68_226  *ReturnedValue)
{ 
A68_226  WQDAOST;  /* clause result */
A68_226  XQDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_226  YQDAOST;  /* avoid structure result */
A_PROC_ENTRY(addab);
WODAOST_add( (*A), A_HVEC(XQDAOST,B,A68_233 ), &YQDAOST );
WQDAOST = (*A) = YQDAOST;
A_PROC_EXIT(addab);
*ReturnedValue = (WQDAOST);
return;
} 
#undef NL

A68_VOID  ARDAOST_makecommands(A68_226  Commands, A68_226  *ReturnedValue)
{ 
A68_240  CRDAOST_generator;   /* proc value of non-global proc */
A68_226  HRDAOST;  /* clause result */
A68_226  IRDAOST;  /* avoid structure result */
A_PROC_ENTRY(makecommands);
 /* line 252: */
A_CLOSURE( CRDAOST_generator, DRDAOST_generator, ERDAOST_generator );
(( ERDAOST_generator * ) ( CRDAOST_generator.nonlocals )) -> Commands = Commands;
A_CALLPROC(CRDAOST_generator,(A68_FALSE, &IRDAOST),(A68_FALSE, &IRDAOST,(CRDAOST_generator).nonlocals));
A_VASSIGN2(Commands,IRDAOST,A68_233 ) ;
HRDAOST = IRDAOST;
A_PROC_EXIT(makecommands);
*ReturnedValue = (HRDAOST);
return;
} 
#undef NL

A68_VOID  KRDAOST_makecommands(A68_233  Command, A68_226  *ReturnedValue)
{ 
A68_240  MRDAOST_generator;   /* proc value of non-global proc */
A68_226  RRDAOST;  /* clause result */
A68_226  SRDAOST;  /* avoid structure result */
A68_226  TRDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_226  URDAOST;  /* OPERATORS - assign op */
A_PROC_ENTRY(makecommands);
 /* line 255: */
A_CLOSURE( MRDAOST_generator, NRDAOST_generator, ORDAOST_generator );
A_CALLPROC(MRDAOST_generator,(A68_FALSE, &SRDAOST),(A68_FALSE, &SRDAOST,(MRDAOST_generator).nonlocals));
URDAOST = A_HVEC(TRDAOST,Command,A68_233 ) ;
A_VASSIGN2(URDAOST,SRDAOST,A68_233 ) ;
RRDAOST = SRDAOST;
A_PROC_EXIT(makecommands);
*ReturnedValue = (RRDAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  WRDAOST_lc(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  YRDAOST_generator;   /* proc value of non-global proc */
A68_VC  DSDAOST;  /* avoid structure result */
A68_VC  ESDAOST_ans;
A68_CHAR * FSDAOST_s;
A68_INT  GSDAOST;  /* forall loop counter */
A68_BOOL  HSDAOST;  /* optbool result */
A68_VC  ISDAOST;  /* clause result */
A_PROC_ENTRY(lc);
 /* line 259: */
 /* line 260: */
{ 
A_CLOSURE( YRDAOST_generator, ZRDAOST_generator, ASDAOST_generator );
(( ASDAOST_generator * ) ( YRDAOST_generator.nonlocals )) -> Str = Str;
A_CALLPROC(YRDAOST_generator,(A68_FALSE, &DSDAOST),(A68_FALSE, &DSDAOST,(YRDAOST_generator).nonlocals));
ESDAOST_ans = DSDAOST;
A_VASSIGN2(Str,ESDAOST_ans,A68_CHAR );
 /* line 261: */
 /* line 262: */
GSDAOST = ESDAOST_ans.upb -1;
FSDAOST_s = ESDAOST_ans.data;
for (;GSDAOST-- >= 0;
(FSDAOST_s++
) )
{
HSDAOST = ((*FSDAOST_s)>='A');
if ( HSDAOST )
{HSDAOST = ((*FSDAOST_s)<='Z');
}
if ( HSDAOST )
{ 
(*FSDAOST_s) = (A68_CHAR)((A68_INT)(unsigned char)(*FSDAOST_s)+32);
} 
}
 /* line 263: */
 /* line 264: */
ISDAOST = ESDAOST_ans;
} 
A_PROC_EXIT(lc);
*ReturnedValue = (ISDAOST);
return;
} 
#undef NL
 /* line 269: */

A68_231 * NSDAOST_make_group(A68_VC  Name, A68_VC  Abreviation, A68_218  Access, A68_226  Locals)
{ 
A68_231  OSDAOST;  /* collateral clause result */
A68_230  PSDAOST;  /* collateral clause result */
A68_VC  QSDAOST;  /* avoid structure result */
A68_VC  RSDAOST;  /* avoid structure result */
A68_229  SSDAOST;  /* OPERATORS - mode -> union mode */
A68_221  TSDAOST;  /* OPERATORS - mode -> union mode */
A68_222  USDAOST;  /* YIELD */
A68_222  VSDAOST;  /* procedure value */
A68_230 * WSDAOST;  /* YIELD */
A68_226  XSDAOST;  /* avoid structure result */
A68_231 * YSDAOST;  /* clause result */
A68_231 * ZSDAOST;  /* YIELD */
A_PROC_ENTRY(make_group);
 /* line 270: */
ZAAAOSI_makervc( Name, &QSDAOST );
PSDAOST.Name = QSDAOST;
 /* line 271: */
ZAAAOSI_makervc( Abreviation, &RSDAOST );
PSDAOST.Abreviation = RSDAOST;
PSDAOST.Parameter = SRAAOST_noparameters;
PSDAOST.Access = Access;
 /* line 272: */
PSDAOST.Continuation = ZNDAOST_continue;
PSDAOST.Help = A_UNITE(SSDAOST,mode1,1,EOAAOSL_nullstr);
VSDAOST.fn.fn_global = MMDAOST_nullcommand;
VSDAOST.nonlocals = A68_NIL;
USDAOST = VSDAOST ;
PSDAOST.Command = A_UNITE(TSDAOST,mode2,2,USDAOST);
 /* line 274: */
WSDAOST = A_HEAP(A68_230 ) ;
(*WSDAOST) = PSDAOST ;
OSDAOST.Group = WSDAOST;
ARDAOST_makecommands( Locals, &XSDAOST );
OSDAOST.Commands = XSDAOST;
ZSDAOST = A_HEAP(A68_231 ) ;
(*ZSDAOST) = OSDAOST ;
YSDAOST = ZSDAOST;
A_PROC_EXIT(make_group);
return( YSDAOST );
} 
#undef NL
 /* line 279: */
 /* line 281: */

A68_232 * GTDAOST_make_compound(A68_230 * Prelude, A68_VC  Context_name, A68_VC * Prompt, A68_226  Locals, A68_226  Globals, A68_221  Postlude)
{ 
A68_232  HTDAOST;  /* collateral clause result */
A68_VC  ITDAOST;  /* avoid structure result */
A68_226  JTDAOST;  /* avoid structure result */
A68_226  KTDAOST;  /* avoid structure result */
A68_230  LTDAOST;  /* collateral clause result */
A68_VC  OTDAOST;  /* avoid structure result */
A68_229  PTDAOST;  /* OPERATORS - mode -> union mode */
A68_230 * QTDAOST;  /* YIELD */
A68_232 * RTDAOST;  /* clause result */
A68_232 * STDAOST;  /* YIELD */
A_PROC_ENTRY(make_compound);
 /* line 282: */
HTDAOST.Prelude = Prelude;
ZAAAOSI_makervc( Context_name, &ITDAOST );
HTDAOST.Context = ITDAOST;
 /* line 283: */
HTDAOST.Prompt = Prompt;
ARDAOST_makecommands( Locals, &JTDAOST );
HTDAOST.Locals = JTDAOST;
 /* line 284: */
ARDAOST_makecommands( Globals, &KTDAOST );
HTDAOST.Globals = KTDAOST;
ZAAAOSI_makervc( NTDAOST, &OTDAOST );
LTDAOST.Name = OTDAOST;
LTDAOST.Abreviation = YNAAOSL_nilstr;
 /* line 285: */
LTDAOST.Parameter = SRAAOST_noparameters;
LTDAOST.Access = XMDAOST_normalaccess;
LTDAOST.Continuation = DODAOST_return;
LTDAOST.Help = A_UNITE(PTDAOST,mode1,1,EOAAOSL_nullstr);
 /* line 286: */
LTDAOST.Command = Postlude;
QTDAOST = A_HEAP(A68_230 ) ;
(*QTDAOST) = LTDAOST ;
HTDAOST.Postlude = QTDAOST;
STDAOST = A_HEAP(A68_232 ) ;
(*STDAOST) = HTDAOST ;
RTDAOST = STDAOST;
A_PROC_EXIT(make_compound);
return( RTDAOST );
} 
#undef NL

A_STATIC A68_BOOL  VTDAOST_canaccess(A68_235 * Env, A68_230 * Command)
{ 
A68_BOOL  WTDAOST;  /* optbool result */
A68_BOOL  XTDAOST;  /* optbool result */
A68_BOOL  YTDAOST;  /* clause result */
A_PROC_ENTRY(canaccess);
 /* line 292: */
 /* line 293: */
WTDAOST = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X1U)==0X1U);
if ( WTDAOST )
{XTDAOST = (*(&(Env->Private)));
if ( ! XTDAOST )
{XTDAOST = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X2U)==0X2U);
}
WTDAOST = XTDAOST;
}
YTDAOST = WTDAOST;
A_PROC_EXIT(canaccess);
return( YTDAOST );
} 
#undef NL

A_STATIC A68_BOOL  BUDAOST_canhelp(A68_235 * Env, A68_230 * Command)
{ 
A68_BOOL  CUDAOST;  /* optbool result */
A68_BOOL  DUDAOST;  /* optbool result */
A68_BOOL  EUDAOST;  /* clause result */
A_PROC_ENTRY(canhelp);
 /* line 297: */
 /* line 298: */
CUDAOST = VTDAOST_canaccess(Env, Command);
if ( CUDAOST )
{DUDAOST = (*(&(Env->Secret)));
if ( ! DUDAOST )
{DUDAOST = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X8U)==0X8U);
}
CUDAOST = DUDAOST;
}
EUDAOST = CUDAOST;
A_PROC_EXIT(canhelp);
return( EUDAOST );
} 
#undef NL

A_STATIC A68_BOOL  HUDAOST_cansee(A68_235 * Env, A68_230 * Command)
{ 
A68_BOOL  IUDAOST;  /* optbool result */
A68_BOOL  JUDAOST;  /* optbool result */
A68_BOOL  KUDAOST;  /* clause result */
A_PROC_ENTRY(cansee);
 /* line 302: */
 /* line 303: */
IUDAOST = BUDAOST_canhelp(Env, Command);
if ( IUDAOST )
{JUDAOST = (*(&(Env->Hidden)));
if ( ! JUDAOST )
{JUDAOST = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X4U)==0X4U);
}
IUDAOST = JUDAOST;
}
KUDAOST = IUDAOST;
A_PROC_EXIT(cansee);
return( KUDAOST );
} 
#undef NL

A_STATIC A68_BOOL  MUDAOST_hasabreviation(A68_230 * Command)
{ 
A68_VC  NUDAOST;  /* != */
A68_BOOL  OUDAOST;  /* optbool result */
A68_BOOL  PUDAOST;  /* clause result */
A_PROC_ENTRY(hasabreviation);
 /* line 311: */
 /* line 312: */
NUDAOST = (*(&(Command->Abreviation))) ;
OUDAOST = ! A_VSTRUCTCOMP(NUDAOST,YNAAOSL_nilstr);
if ( OUDAOST )
{OUDAOST = ((*(&(Command->Abreviation))).upb>0);
}
PUDAOST = OUDAOST;
A_PROC_EXIT(hasabreviation);
return( PUDAOST );
} 
#undef NL
 /* line 316: */

A_STATIC A68_BOOL  UUDAOST_checkname(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_230 * Command)
{ 
A68_BOOL  VUDAOST;  /* optbool result */
A68_BOOL  WUDAOST;  /* optbool result */
A68_BOOL  XUDAOST;  /* optbool result */
A68_VC  YUDAOST;  /* != */
A68_BOOL  ZUDAOST;  /* optbool result */
A68_BOOL  AVDAOST;  /* clause result */
A_PROC_ENTRY(checkname);
 /* line 317: */
VUDAOST = BUDAOST_canhelp(Env, Command);
if ( ! VUDAOST )
{WUDAOST = !Help;
if ( WUDAOST )
{WUDAOST = VTDAOST_canaccess(Env, Command);
}
VUDAOST = WUDAOST;
}
 /* line 318: */
if ( VUDAOST )
{ /* line 319: */
XUDAOST = A_VC_EQ(Test,(*(&(Command->Name))));
if ( ! XUDAOST )
{ /* line 320: */
YUDAOST = (*(&(Command->Abreviation))) ;
ZUDAOST = ! A_VSTRUCTCOMP(YUDAOST,YNAAOSL_nilstr);
if ( ZUDAOST )
{ZUDAOST = ((*(&(Command->Abreviation))).upb>0);
}
 /* line 321: */
if ( ZUDAOST )
{ /* line 322: */
ZUDAOST = A_VC_EQ(Test,(*(&(Command->Abreviation))));
}
XUDAOST = ZUDAOST;
}
VUDAOST = XUDAOST;
}
AVDAOST = VUDAOST;
A_PROC_EXIT(checkname);
return( AVDAOST );
} 
#undef NL
 /* line 326: */

A_STATIC A68_BOOL  GVDAOST_checkstartswith(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_VC * Remainder, A68_230 * Command)
{ 
A68_BOOL  HVDAOST;  /* optbool result */
A68_BOOL  IVDAOST;  /* optbool result */
A68_BOOL  JVDAOST;  /* optbool result */
A68_VC  KVDAOST;  /* OPERATORS - trim index */
A68_VC  LVDAOST;  /* OPERATORS - trim index */
A68_BOOL  MVDAOST;  /* clause result */
A68_BOOL  NVDAOST;  /* optbool result */
A68_VC  OVDAOST;  /* OPERATORS - trim index */
A68_VC  PVDAOST;  /* OPERATORS - trim index */
A68_BOOL  QVDAOST;  /* clause result */
A_PROC_ENTRY(checkstartswith);
 /* line 327: */
HVDAOST = BUDAOST_canhelp(Env, Command);
if ( ! HVDAOST )
{IVDAOST = !Help;
if ( IVDAOST )
{IVDAOST = VTDAOST_canaccess(Env, Command);
}
HVDAOST = IVDAOST;
}
 /* line 328: */
if ( HVDAOST )
{{ 
 /* line 329: */
JVDAOST = (Test.upb>(*(&(Command->Name))).upb);
if ( JVDAOST )
{ /* line 330: */
JVDAOST = A_VC_EQ(A_VTRIM(KVDAOST,(Test),A_VTSCRIPT(&(KVDAOST.upb),(Test).upb,1,(*(&(Command->Name))).upb)),(*(&(Command->Name))));
}
if ( JVDAOST )
{ 
(*Remainder) = A_VTRIM(LVDAOST,(Test),A_VTSCRIPT(&(LVDAOST.upb),(Test).upb,((*(&(Command->Name))).upb+1),(Test).upb));
 /* line 331: */
 /* line 332: */
MVDAOST = A68_TRUE;
} 
else
{ 
 /* line 333: */
NVDAOST = MUDAOST_hasabreviation(Command);
if ( NVDAOST )
{NVDAOST = (Test.upb>(*(&(Command->Abreviation))).upb);
}
 /* line 334: */
if ( NVDAOST )
{ /* line 335: */
NVDAOST = A_VC_EQ(A_VTRIM(OVDAOST,(Test),A_VTSCRIPT(&(OVDAOST.upb),(Test).upb,1,(*(&(Command->Abreviation))).upb)),(*(&(Command->Abreviation))));
}
if ( NVDAOST )
{ 
(*Remainder) = A_VTRIM(PVDAOST,(Test),A_VTSCRIPT(&(PVDAOST.upb),(Test).upb,((*(&(Command->Abreviation))).upb+1),(Test).upb));
 /* line 336: */
 /* line 337: */
MVDAOST = A68_TRUE;
} 
else
{ 
 /* line 338: */
 /* line 339: */
MVDAOST = A68_FALSE;
} 
} 
} 
HVDAOST = MVDAOST;
}
QVDAOST = HVDAOST;
A_PROC_EXIT(checkstartswith);
return( QVDAOST );
} 
#undef NL
 /* line 343: */

A_STATIC A68_BOOL  WVDAOST_searchgroup(A68_235 * Env, A68_BOOL  Help, A68_VC  Name, A68_VC * Rem, A68_231 * Group)
{ 
A68_BOOL  XVDAOST_found;
A68_233 * YVDAOST_command;
A68_226  ZVDAOST;  /* forall yield */
A68_INT  AWDAOST;  /* forall loop counter */
A68_233  BWDAOST;  /* united object - for case conformity */
A68_230 * CWDAOST_s;
A68_231 * DWDAOST_g;
A68_VC  EWDAOST_rem2;
A68_232 * FWDAOST_c;
A68_BOOL  GWDAOST;  /* clause result */
A_PROC_ENTRY(searchgroup);
 /* line 351: */
 /* line 352: */
if ( GVDAOST_checkstartswith(Env, Help, Name, Rem, (*(&(Group->Group)))) )
{ 
XVDAOST_found = A68_FALSE;
 /* line 353: */
ZVDAOST = (*(&(Group->Commands))) ;
AWDAOST = ZVDAOST.upb -1;
YVDAOST_command = ZVDAOST.data;
for (;AWDAOST-- >= 0;
(YVDAOST_command++
) )
{
 /* line 354: */
if ( !(!XVDAOST_found) ) break;
 /* line 355: */
BWDAOST = (*YVDAOST_command) ;
switch ( BWDAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
CWDAOST_s = (BWDAOST.data.mode1);
 /* line 356: */
 /* line 357: */
XVDAOST_found = UUDAOST_checkname(Env, Help, (*Rem), CWDAOST_s);
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
DWDAOST_g = (BWDAOST.data.mode2);
 /* line 358: */
{ 
EWDAOST_rem2 = EOAAOSL_nullstr;
 /* line 359: */
 /* line 360: */
 /* line 361: */
XVDAOST_found = WVDAOST_searchgroup(Env, Help, (*Rem), (&EWDAOST_rem2), DWDAOST_g);
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
FWDAOST_c = (BWDAOST.data.mode3);
 /* line 362: */
 /* line 363: */
 /* line 364: */
XVDAOST_found = UUDAOST_checkname(Env, Help, (*Rem), (*(&(FWDAOST_c->Prelude))));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 365: */
 /* line 366: */
GWDAOST = XVDAOST_found;
} 
else
{ 
 /* line 367: */
GWDAOST = A68_FALSE;
} 
A_PROC_EXIT(searchgroup);
return( GWDAOST );
} 
#undef NL

A_STATIC A68_VOID  JWDAOST_showname(A68_230 * Command, A68_BOOL  Group, A68_VC  *ReturnedValue)
{ 
A68_VC  KWDAOST;  /* avoid structure result */
A68_VC  LWDAOST_name;
A68_258  MWDAOST;  /* collateral clause result */
A68_52  NWDAOST;  /* OPERATORS - mode -> union mode */
A68_52  QWDAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RWDAOST;  /* YIELD */
A68_VC  SWDAOST;  /* clause result */
A68_85  TWDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  UWDAOST;  /* avoid structure result */
A68_VC  VWDAOST_base;
A68_261  WWDAOST;  /* collateral clause result */
A68_VC  ZWDAOST;  /* avoid structure result */
A68_VC  EXDAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FXDAOST;  /* clause result */
A68_46  GXDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  HXDAOST;  /* avoid structure result */
A_PROC_ENTRY(showname);
 /* line 371: */
 /* line 372: */
{ 
WRDAOST_lc( (*(&(Command->Name))), &KWDAOST );
LWDAOST_name = KWDAOST;
 /* line 373: */
if ( Group )
{ 
MWDAOST.data[0] = A_UNITE(NWDAOST,mode7,7,LWDAOST_name);
RWDAOST = PWDAOST ;
MWDAOST.data[1] = A_UNITE(QWDAOST,mode7,7,RWDAOST);
UJBAOSL_oneline( A_HISVEC(TWDAOST,MWDAOST,2,A68_52 ), &UWDAOST );
SWDAOST = UWDAOST;
} 
else
{ 
SWDAOST = LWDAOST_name;
} 
VWDAOST_base = SWDAOST;
 /* line 374: */
 /* line 375: */
if ( MUDAOST_hasabreviation(Command) )
{ 
WWDAOST.data[0] = VWDAOST_base;
WWDAOST.data[1] = YWDAOST;
 /* line 376: */
WRDAOST_lc( (*(&(Command->Abreviation))), &ZWDAOST );
WWDAOST.data[2] = ZWDAOST;
if ( Group )
{ 
WWDAOST.data[3] = BXDAOST;
} 
else
{ 
WWDAOST.data[3] = DXDAOST;
} 
WWDAOST.data[4] = A_HVEC(EXDAOST,')',A68_CHAR );
 /* line 377: */
 /* line 378: */
JBAAOSI_concat( A_HISVEC(GXDAOST,WWDAOST,5,A68_VC ), &HXDAOST );
FXDAOST = HXDAOST;
} 
else
{ 
 /* line 379: */
FXDAOST = VWDAOST_base;
} 
} 
A_PROC_EXIT(showname);
*ReturnedValue = (FXDAOST);
return;
} 
#undef NL

A_STATIC A68_230 * KXDAOST_groupsimple(A68_230 * Group, A68_230 * Simple)
{ 
A68_230 * LXDAOST_combined;
A68_263  MXDAOST;  /* collateral clause result */
A68_46  NXDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  OXDAOST;  /* avoid structure result */
A68_VC * PXDAOST;  /* YIELD */
A68_263  QXDAOST;  /* collateral clause result */
A68_VC  RXDAOST;  /* clause result */
A68_46  SXDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  TXDAOST;  /* avoid structure result */
A68_263  UXDAOST;  /* collateral clause result */
A68_46  VXDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  WXDAOST;  /* avoid structure result */
A68_VC * XXDAOST;  /* YIELD */
A68_230 * YXDAOST;  /* clause result */
A_PROC_ENTRY(groupsimple);
 /* line 383: */
 /* line 384: */
{ 
LXDAOST_combined = (A_HEAP(A68_230 ));
(*LXDAOST_combined) = (*Simple);
 /* line 385: */
MXDAOST.data[0] = (*(&(Group->Name)));
MXDAOST.data[1] = (*(&(Simple->Name)));
JBAAOSI_concat( A_HISVEC(NXDAOST,MXDAOST,2,A68_VC ), &OXDAOST );
PXDAOST = (&(LXDAOST_combined->Name)) ;
(*PXDAOST) = OXDAOST;
 /* line 386: */
 /* line 387: */
if ( MUDAOST_hasabreviation(Simple) )
{ 
 /* line 388: */
 /* line 389: */
if ( MUDAOST_hasabreviation(Group) )
{ 
QXDAOST.data[0] = (*(&(Group->Abreviation)));
QXDAOST.data[1] = (*(&(Simple->Abreviation)));
 /* line 390: */
JBAAOSI_concat( A_HISVEC(SXDAOST,QXDAOST,2,A68_VC ), &TXDAOST );
RXDAOST = TXDAOST;
} 
else
{ 
UXDAOST.data[0] = (*(&(Group->Name)));
UXDAOST.data[1] = (*(&(Simple->Abreviation)));
 /* line 391: */
 /* line 392: */
JBAAOSI_concat( A_HISVEC(VXDAOST,UXDAOST,2,A68_VC ), &WXDAOST );
RXDAOST = WXDAOST;
} 
XXDAOST = (&(LXDAOST_combined->Abreviation)) ;
(*XXDAOST) = RXDAOST;
} 
 /* line 393: */
 /* line 394: */
YXDAOST = LXDAOST_combined;
} 
A_PROC_EXIT(groupsimple);
return( YXDAOST );
} 
#undef NL
 /* line 402: */

A_STATIC A68_VOID  EYDAOST_commandvechelp(A68_235 * Env, A68_34 * Channel, A68_230 * Root, A68_226  Commands, A68_BOOL  Two_columns)
{ 
A68_233 * FYDAOST_subcommand;
A68_INT  GYDAOST;  /* forall loop counter */
A68_BOOL  HYDAOST_group;
A68_233  IYDAOST;  /* united object - for case conformity */
A68_230 * JYDAOST_s;
A68_230 * KYDAOST;  /* clause result */
A68_231 * LYDAOST_g;
A68_232 * MYDAOST_c;
A68_230 * NYDAOST_simple;
A68_230 * OYDAOST;  /* clause result */
A68_230 * PYDAOST_command;
A68_VC  QYDAOST;  /* avoid structure result */
A68_VC  RYDAOST_name;
A68_175  SYDAOST;  /* united object - for case conformity */
A68_INT * TYDAOST_symbol;
A68_BOOL  UYDAOST;  /* clause result */
A68_VC  VYDAOST;  /* clause result */
A68_265  WYDAOST;  /* collateral clause result */
A68_52  XYDAOST;  /* OPERATORS - mode -> union mode */
A68_INT  YYDAOST;  /* clause result */
A68_62  ZYDAOST;  /* avoid structure result */
A68_52  AZDAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BZDAOST;  /* avoid structure result */
A68_52  CZDAOST;  /* OPERATORS - mode -> union mode */
A68_85  DZDAOST;  /* OPERATORS - istruct -> vector */
A68_VC  EZDAOST;  /* avoid structure result */
A68_VC  FZDAOST_description;
A68_BOOL  GZDAOST;  /* optbool result */
A68_258  HZDAOST;  /* collateral clause result */
A68_60  IZDAOST;  /* avoid structure result */
A68_52  JZDAOST;  /* OPERATORS - mode -> union mode */
A68_52  KZDAOST;  /* OPERATORS - mode -> union mode */
A68_85  LZDAOST;  /* OPERATORS - istruct -> vector */
A68_258  MZDAOST;  /* collateral clause result */
A68_52  NZDAOST;  /* OPERATORS - mode -> union mode */
A68_56  OZDAOST;  /* procedure value */
A68_52  PZDAOST;  /* OPERATORS - mode -> union mode */
A68_85  QZDAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commandvechelp);
 /* line 403: */
 /* line 404: */
{ 
 /* line 405: */
GYDAOST = Commands.upb -1;
FYDAOST_subcommand = Commands.data;
for (;GYDAOST-- >= 0;
(FYDAOST_subcommand++
) )
{
HYDAOST_group = A68_FALSE;
 /* line 406: */
 /* line 407: */
IYDAOST = (*FYDAOST_subcommand) ;
switch ( IYDAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
JYDAOST_s = (IYDAOST.data.mode1);
 /* line 408: */
KYDAOST = JYDAOST_s;
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
LYDAOST_g = (IYDAOST.data.mode2);
{ 
HYDAOST_group = A68_TRUE;
 /* line 409: */
KYDAOST = (*(&(LYDAOST_g->Group)));
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
MYDAOST_c = (IYDAOST.data.mode3);
 /* line 410: */
KYDAOST = (*(&(MYDAOST_c->Prelude)));
break;
default: 
A_IMP_SKIP ;
break;
} 
NYDAOST_simple = KYDAOST;
 /* line 412: */
 /* line 413: */
 /* line 414: */
if ( (Root==TMDAOST_nilsimple) )
{ 
OYDAOST = NYDAOST_simple;
} 
else
{ 
 /* line 415: */
OYDAOST = KXDAOST_groupsimple(Root, NYDAOST_simple);
} 
PYDAOST_command = OYDAOST;
 /* line 417: */
 /* line 418: */
if ( HUDAOST_cansee(Env, PYDAOST_command) )
{ 
JWDAOST_showname( PYDAOST_command, HYDAOST_group, &QYDAOST );
RYDAOST_name = QYDAOST;
 /* line 420: */
 /* line 421: */
SYDAOST = (*(&(PYDAOST_command->Parameter))) ;
switch ( SYDAOST.mode )
{ 
case 1: /* REF INT */
TYDAOST_symbol = (SYDAOST.data.mode1);
UYDAOST = ((*TYDAOST_symbol)==0);
break;
default: 
 /* line 422: */
 /* line 423: */
 /* line 424: */
UYDAOST = A68_FALSE;
break;
} 
if ( UYDAOST )
{ 
VYDAOST = RYDAOST_name;
} 
else
{ 
WYDAOST.data[0] = A_UNITE(XYDAOST,mode7,7,RYDAOST_name);
 /* line 425: */
if ( Two_columns )
{ 
 /* line 426: */
 /* line 427: */
if ( (RYDAOST_name.upb>28) )
{ 
YYDAOST = 36;
} 
else
{ 
 /* line 428: */
 /* line 429: */
if ( (RYDAOST_name.upb>22) )
{ 
YYDAOST = 30;
} 
else
{ 
 /* line 430: */
 /* line 431: */
if ( (RYDAOST_name.upb>16) )
{ 
 /* line 432: */
YYDAOST = 24;
} 
else
{ 
 /* line 433: */
 /* line 434: */
YYDAOST = 18;
} 
} 
} 
} 
else
{ 
YYDAOST = 40;
} 
 /* line 435: */
XYAAOSL_after( YYDAOST, &ZYDAOST );
WYDAOST.data[1] = A_UNITE(AZDAOST,mode18,18,ZYDAOST);
 /* line 436: */
WUAAOST_show_syntax( (*(&(PYDAOST_command->Parameter))), (*(&(Env->Analysers))), &BZDAOST );
WYDAOST.data[2] = A_UNITE(CZDAOST,mode7,7,BZDAOST);
 /* line 437: */
UJBAOSL_oneline( A_HISVEC(DZDAOST,WYDAOST,3,A68_52 ), &EZDAOST );
VYDAOST = EZDAOST;
} 
FZDAOST_description = VYDAOST;
 /* line 438: */
GZDAOST = Two_columns;
if ( GZDAOST )
{GZDAOST = (YOAAOSL_charnumber(Channel)>1);
}
 /* line 439: */
if ( GZDAOST )
{GZDAOST = (YOAAOSL_charnumber(Channel)<39);
}
if ( GZDAOST )
{ /* line 440: */
GZDAOST = (FZDAOST_description.upb<=40);
}
if ( GZDAOST )
{ 
NYAAOSL_tab( 40, &IZDAOST );
HZDAOST.data[0] = A_UNITE(JZDAOST,mode16,16,IZDAOST);
HZDAOST.data[1] = A_UNITE(KZDAOST,mode7,7,FZDAOST_description);
 /* line 441: */
GFBAOSL_put(Channel, A_HISVEC(LZDAOST,HZDAOST,2,A68_52 ));
} 
else
{ 
OZDAOST.fn.fn_global = LRAAOSL_newline;
OZDAOST.nonlocals = A68_NIL;
MZDAOST.data[0] = A_UNITE(NZDAOST,mode12,12,OZDAOST);
MZDAOST.data[1] = A_UNITE(PZDAOST,mode7,7,FZDAOST_description);
 /* line 442: */
 /* line 443: */
 /* line 444: */
GFBAOSL_put(Channel, A_HISVEC(QZDAOST,MZDAOST,2,A68_52 ));
} 
} 
}
 /* line 445: */
if ( (Commands.upb>0) )
{ 
 /* line 446: */
LRAAOSL_newline(Channel);
} 
} 
A_PROC_EXIT(commandvechelp);
return;
} 
#undef NL
 /* line 450: */

A_STATIC A68_VOID  VZDAOST_simplehelpbasic(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group)
{ 
A68_258  WZDAOST;  /* collateral clause result */
A68_52  ZZDAOST;  /* OPERATORS - mode -> union mode */
A68_VC  AAEAOST;  /* YIELD */
A68_175  BAEAOST;  /* united object - for case conformity */
A68_INT * CAEAOST_symbol;
A68_BOOL  DAEAOST;  /* clause result */
A68_52  GAEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  HAEAOST;  /* YIELD */
A68_VC  IAEAOST;  /* avoid structure result */
A68_52  JAEAOST;  /* OPERATORS - mode -> union mode */
A68_85  KAEAOST;  /* OPERATORS - istruct -> vector */
A68_229  LAEAOST;  /* united object - for case conformity */
A68_VC  MAEAOST_id;
A68_BOOL  NAEAOST;  /* optbool result */
A68_64  OAEAOST;  /* avoid structure result */
A68_52  PAEAOST;  /* OPERATORS - mode -> union mode */
A68_85  QAEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_258  RAEAOST;  /* collateral clause result */
A68_52  SAEAOST;  /* OPERATORS - mode -> union mode */
A68_52  TAEAOST;  /* OPERATORS - mode -> union mode */
A68_56  UAEAOST;  /* procedure value */
A68_85  VAEAOST;  /* OPERATORS - istruct -> vector */
A68_228  WAEAOST_p;
A68_102  XAEAOST_help_lines;
A68_64  YAEAOST;  /* avoid structure result */
A68_52  ZAEAOST;  /* OPERATORS - mode -> union mode */
A68_85  ABEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * BBEAOST_l;
A68_INT  CBEAOST;  /* forall loop counter */
A68_258  DBEAOST;  /* collateral clause result */
A68_52  EBEAOST;  /* OPERATORS - mode -> union mode */
A68_52  FBEAOST;  /* OPERATORS - mode -> union mode */
A68_56  GBEAOST;  /* procedure value */
A68_85  HBEAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simplehelpbasic);
 /* line 451: */
 /* line 452: */
{ 
 /* line 453: */
if ( !Group )
{ 
 /* line 454: */
AAEAOST = YZDAOST ;
WZDAOST.data[0] = A_UNITE(ZZDAOST,mode7,7,AAEAOST);
 /* line 455: */
BAEAOST = (*(&(Simple->Parameter))) ;
switch ( BAEAOST.mode )
{ 
case 1: /* REF INT */
CAEAOST_symbol = (BAEAOST.data.mode1);
DAEAOST = ((*CAEAOST_symbol)==0);
break;
default: 
 /* line 456: */
 /* line 457: */
 /* line 458: */
DAEAOST = A68_FALSE;
break;
} 
if ( DAEAOST )
{ 
HAEAOST = FAEAOST ;
WZDAOST.data[1] = A_UNITE(GAEAOST,mode7,7,HAEAOST);
} 
else
{ 
 /* line 459: */
 /* line 460: */
WUAAOST_show_syntax( (*(&(Simple->Parameter))), (*(&(Env->Analysers))), &IAEAOST );
WZDAOST.data[1] = A_UNITE(JAEAOST,mode7,7,IAEAOST);
} 
 /* line 461: */
GFBAOSL_put(Channel, A_HISVEC(KAEAOST,WZDAOST,2,A68_52 ));
} 
 /* line 462: */
 /* line 463: */
LAEAOST = (*(&(Simple->Help))) ;
switch ( LAEAOST.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
MAEAOST_id = (LAEAOST.data.mode1);
 /* line 464: */
NAEAOST = ! A_VSTRUCTCOMP(MAEAOST_id,YNAAOSL_nilstr);
if ( NAEAOST )
{ /* line 465: */
NAEAOST = (MAEAOST_id.upb>0);
}
if ( NAEAOST )
{ 
HZAAOSL_lines( 2, &OAEAOST );
GFBAOSL_put(Channel, A_HVEC(QAEAOST,A_UNITE(PAEAOST,mode20,20,OAEAOST),A68_52 ));
 /* line 466: */
RAEAOST.data[0] = A_UNITE(SAEAOST,mode7,7,MAEAOST_id);
UAEAOST.fn.fn_global = LRAAOSL_newline;
UAEAOST.nonlocals = A68_NIL;
RAEAOST.data[1] = A_UNITE(TAEAOST,mode12,12,UAEAOST);
 /* line 467: */
GFBAOSL_put(Channel, A_HISVEC(VAEAOST,RAEAOST,2,A68_52 ));
} 
else
{ 
 /* line 468: */
 /* line 469: */
LRAAOSL_newline(Channel);
} 
break;
case 3: /* PROC(REF MODE230,REF MODE34) VOID */
WAEAOST_p = (LAEAOST.data.mode3);
 /* line 470: */
{ 
LRAAOSL_newline(Channel);
 /* line 471: */
A_CALLPROC(WAEAOST_p,(Simple, Channel),(Simple, Channel,(WAEAOST_p).nonlocals));
 /* line 472: */
 /* line 473: */
 /* line 474: */
LRAAOSL_newline(Channel);
} 
break;
case 2: /* REF VECTOR [] REF MODE26 */
XAEAOST_help_lines = (LAEAOST.data.mode2);
 /* line 475: */
{ 
HZAAOSL_lines( 2, &YAEAOST );
GFBAOSL_put(Channel, A_HVEC(ABEAOST,A_UNITE(ZAEAOST,mode20,20,YAEAOST),A68_52 ));
 /* line 476: */
CBEAOST = XAEAOST_help_lines.upb -1;
BBEAOST_l = XAEAOST_help_lines.data;
for (;CBEAOST-- >= 0;
(BBEAOST_l++
) )
{
DBEAOST.data[0] = A_UNITE(EBEAOST,mode7,7,(*BBEAOST_l));
GBEAOST.fn.fn_global = LRAAOSL_newline;
GBEAOST.nonlocals = A68_NIL;
DBEAOST.data[1] = A_UNITE(FBEAOST,mode12,12,GBEAOST);
GFBAOSL_put(Channel, A_HISVEC(HBEAOST,DBEAOST,2,A68_52 ));
}
 /* line 477: */
 /* line 478: */
 /* line 479: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(simplehelpbasic);
return;
} 
#undef NL
 /* line 483: */

A_STATIC A68_VOID  MBEAOST_simplehelp(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group)
{ 
A68_258  NBEAOST;  /* collateral clause result */
A68_52  OBEAOST;  /* OPERATORS - mode -> union mode */
A68_56  PBEAOST;  /* procedure value */
A68_VC  QBEAOST;  /* avoid structure result */
A68_52  RBEAOST;  /* OPERATORS - mode -> union mode */
A68_85  SBEAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simplehelp);
 /* line 484: */
 /* line 485: */
{ 
PBEAOST.fn.fn_global = LRAAOSL_newline;
PBEAOST.nonlocals = A68_NIL;
NBEAOST.data[0] = A_UNITE(OBEAOST,mode12,12,PBEAOST);
JWDAOST_showname( Simple, Group, &QBEAOST );
NBEAOST.data[1] = A_UNITE(RBEAOST,mode7,7,QBEAOST);
GFBAOSL_put(Channel, A_HISVEC(SBEAOST,NBEAOST,2,A68_52 ));
 /* line 486: */
 /* line 487: */
VZDAOST_simplehelpbasic(Env, Channel, Simple, Group);
} 
A_PROC_EXIT(simplehelp);
return;
} 
#undef NL
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 496: */

A_STATIC A68_BOOL  BCEAOST_grouphelp(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_230 * Root, A68_226  Commands, A68_BOOL  Compounddetails, A68_BOOL  Localsection, A68_266  Simplehelp)
{ 
A68_BOOL  CCEAOST_found;
A68_269  ECEAOST_full;   /* proc value of non-global proc */
A68_233 * ICEAOST_command;
A68_INT  JCEAOST;  /* forall loop counter */
A68_233  KCEAOST;  /* united object - for case conformity */
A68_230 * LCEAOST_simple;
A68_232 * MCEAOST_compound;
A68_230 * NCEAOST_simple;
A68_271  OCEAOST;  /* collateral clause result */
A68_52  RCEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SCEAOST;  /* YIELD */
A68_52  TCEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UCEAOST;  /* YIELD */
A68_52  VCEAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  WCEAOST;  /* YIELD */
A68_52  XCEAOST;  /* OPERATORS - mode -> union mode */
A68_56  YCEAOST;  /* procedure value */
A68_85  ZCEAOST;  /* OPERATORS - istruct -> vector */
A68_231 * ADEAOST_group;
A68_230 * BDEAOST_simple;
A68_VC  CDEAOST_remainder;
A68_230 * DDEAOST_s;
A68_VC  FDEAOST;  /* clause result */
A68_VC  JDEAOST_sort;
A68_275  KDEAOST;  /* collateral clause result */
A68_52  NDEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ODEAOST;  /* YIELD */
A68_52  PDEAOST;  /* OPERATORS - mode -> union mode */
A68_52  SDEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  TDEAOST;  /* YIELD */
A68_VC  UDEAOST;  /* avoid structure result */
A68_52  VDEAOST;  /* OPERATORS - mode -> union mode */
A68_52  YDEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZDEAOST;  /* YIELD */
A68_52  AEEAOST;  /* OPERATORS - mode -> union mode */
A68_56  BEEAOST;  /* procedure value */
A68_85  CEEAOST;  /* OPERATORS - istruct -> vector */
A68_BOOL  DEEAOST;  /* clause result */
A_PROC_ENTRY(grouphelp);
 /* line 497: */
 /* line 498: */
{ 
CCEAOST_found = A68_FALSE;
 /* line 500: */
A_CLOSURE( ECEAOST_full, FCEAOST_full, GCEAOST_full );
(( GCEAOST_full * ) ( ECEAOST_full.nonlocals )) -> Root = Root;
 /* line 503: */
 /* line 504: */
JCEAOST = Commands.upb -1;
ICEAOST_command = Commands.data;
for (;JCEAOST-- >= 0;
(ICEAOST_command++
) )
{
 /* line 505: */
KCEAOST = (*ICEAOST_command) ;
switch ( KCEAOST.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
LCEAOST_simple = (KCEAOST.data.mode1);
 /* line 506: */
{ 
 /* line 507: */
if ( UUDAOST_checkname(Env, A68_TRUE, Id, LCEAOST_simple) )
{ 
CCEAOST_found = A68_TRUE;
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 512: */
A_CALLPROC(Simplehelp,(Env, Channel, A_CALLPROC(ECEAOST_full,(LCEAOST_simple),(LCEAOST_simple,(ECEAOST_full).nonlocals)), A68_FALSE),(Env, Channel, A_CALLPROC(ECEAOST_full,(LCEAOST_simple),(LCEAOST_simple,(ECEAOST_full).nonlocals)), A68_FALSE,(Simplehelp).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
MCEAOST_compound = (KCEAOST.data.mode3);
 /* line 513: */
{ 
NCEAOST_simple = (*(&(MCEAOST_compound->Prelude)));
 /* line 514: */
 /* line 515: */
if ( UUDAOST_checkname(Env, A68_TRUE, Id, NCEAOST_simple) )
{ 
CCEAOST_found = A68_TRUE;
 /* line 516: */
A_CALLPROC(Simplehelp,(Env, Channel, A_CALLPROC(ECEAOST_full,(NCEAOST_simple),(NCEAOST_simple,(ECEAOST_full).nonlocals)), A68_FALSE),(Env, Channel, A_CALLPROC(ECEAOST_full,(NCEAOST_simple),(NCEAOST_simple,(ECEAOST_full).nonlocals)), A68_FALSE,(Simplehelp).nonlocals));
 /* line 517: */
 /* line 518: */
if ( Compounddetails )
{ 
 /* line 519: */
 /* line 520: */
SCEAOST = QCEAOST ;
OCEAOST.data[0] = A_UNITE(RCEAOST,mode7,7,SCEAOST);
UCEAOST = (*(&(MCEAOST_compound->Context))) ;
OCEAOST.data[1] = A_UNITE(TCEAOST,mode7,7,UCEAOST);
WCEAOST = ':' ;
OCEAOST.data[2] = A_UNITE(VCEAOST,mode6,6,WCEAOST);
YCEAOST.fn.fn_global = LRAAOSL_newline;
YCEAOST.nonlocals = A68_NIL;
OCEAOST.data[3] = A_UNITE(XCEAOST,mode12,12,YCEAOST);
GFBAOSL_put(Channel, A_HISVEC(ZCEAOST,OCEAOST,4,A68_52 ));
 /* line 521: */
 /* line 522: */
EYDAOST_commandvechelp(Env, Channel, TMDAOST_nilsimple, (*(&(MCEAOST_compound->Locals))), A68_TRUE);
 /* line 523: */
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 529: */
EYDAOST_commandvechelp(Env, Channel, TMDAOST_nilsimple, (*(&(MCEAOST_compound->Globals))), A68_TRUE);
} 
} 
} 
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
ADEAOST_group = (KCEAOST.data.mode2);
 /* line 530: */
{ 
BDEAOST_simple = (*(&(ADEAOST_group->Group)));
 /* line 531: */
CDEAOST_remainder = EOAAOSL_nullstr;
 /* line 532: */
DDEAOST_s = A_CALLPROC(ECEAOST_full,(BDEAOST_simple),(BDEAOST_simple,(ECEAOST_full).nonlocals));
 /* line 533: */
 /* line 534: */
if ( UUDAOST_checkname(Env, A68_TRUE, Id, BDEAOST_simple) )
{ 
CCEAOST_found = A68_TRUE;
 /* line 535: */
A_CALLPROC(Simplehelp,(Env, Channel, DDEAOST_s, A68_TRUE),(Env, Channel, DDEAOST_s, A68_TRUE,(Simplehelp).nonlocals));
 /* line 536: */
 /* line 537: */
if ( Localsection )
{ 
FDEAOST = GDEAOST;
} 
else
{ 
FDEAOST = IDEAOST;
} 
JDEAOST_sort = FDEAOST;
 /* line 538: */
ODEAOST = MDEAOST ;
KDEAOST.data[0] = A_UNITE(NDEAOST,mode7,7,ODEAOST);
 /* line 539: */
KDEAOST.data[1] = A_UNITE(PDEAOST,mode7,7,JDEAOST_sort);
TDEAOST = RDEAOST ;
KDEAOST.data[2] = A_UNITE(SDEAOST,mode7,7,TDEAOST);
WRDAOST_lc( (*(&(DDEAOST_s->Name))), &UDEAOST );
KDEAOST.data[3] = A_UNITE(VDEAOST,mode7,7,UDEAOST);
ZDEAOST = XDEAOST ;
KDEAOST.data[4] = A_UNITE(YDEAOST,mode7,7,ZDEAOST);
BEEAOST.fn.fn_global = LRAAOSL_newline;
BEEAOST.nonlocals = A68_NIL;
KDEAOST.data[5] = A_UNITE(AEEAOST,mode12,12,BEEAOST);
GFBAOSL_put(Channel, A_HISVEC(CEEAOST,KDEAOST,6,A68_52 ));
 /* line 540: */
 /* line 541: */
EYDAOST_commandvechelp(Env, Channel, DDEAOST_s, (*(&(ADEAOST_group->Commands))), A68_FALSE);
} 
else
{ 
 /* line 542: */
if ( GVDAOST_checkstartswith(Env, A68_TRUE, Id, (&CDEAOST_remainder), BDEAOST_simple) )
{ 
 /* line 543: */
 /* line 544: */
 /* line 545: */
if ( BCEAOST_grouphelp(Env, Channel, CDEAOST_remainder, DDEAOST_s, (*(&(ADEAOST_group->Commands))), Compounddetails, Localsection, Simplehelp) )
{ 
 /* line 546: */
 /* line 547: */
 /* line 548: */
 /* line 549: */
 /* line 550: */
CCEAOST_found = A68_TRUE;
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 551: */
 /* line 552: */
DEEAOST = CCEAOST_found;
} 
A_PROC_EXIT(grouphelp);
return( DEEAOST );
} 
#undef NL
 /* line 559: */

A68_VOID  JEEAOST_help(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_BOOL  Compounddetails, A68_97  Msg)
{ 
A68_232 * KEEAOST_compound;
A68_BOOL  LEEAOST;  /* optbool result */
A68_278  MEEAOST;  /* collateral clause result */
A68_52  NEEAOST;  /* OPERATORS - mode -> union mode */
A68_56  OEEAOST;  /* procedure value */
A68_52  REEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SEEAOST;  /* YIELD */
A68_52  TEEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  UEEAOST;  /* YIELD */
A68_52  XEEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YEEAOST;  /* YIELD */
A68_52  ZEEAOST;  /* OPERATORS - mode -> union mode */
A68_56  AFEAOST;  /* procedure value */
A68_85  BFEAOST;  /* OPERATORS - istruct -> vector */
A68_266  CFEAOST;  /* procedure value */
A68_BOOL  DFEAOST_l;
A68_266  EFEAOST;  /* procedure value */
A68_BOOL  FFEAOST_g;
A68_BOOL  GFEAOST;  /* optbool result */
A68_BOOL  HFEAOST;  /* clause result */
A68_271  IFEAOST;  /* collateral clause result */
A68_52  JFEAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  KFEAOST;  /* YIELD */
A68_VC  LFEAOST;  /* avoid structure result */
A68_52  MFEAOST;  /* OPERATORS - mode -> union mode */
A68_52  PFEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  QFEAOST;  /* YIELD */
A68_52  RFEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SFEAOST;  /* YIELD */
A68_85  TFEAOST;  /* OPERATORS - istruct -> vector */
A68_VC  UFEAOST;  /* avoid structure result */
A68_46  VFEAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(help);
 /* line 560: */
 /* line 561: */
{ 
KEEAOST_compound = (*(&((*(&(Env->Stack)))->Current_context)));
 /* line 562: */
LEEAOST = A_VSTRUCTCOMP(Id,YNAAOSL_nilstr);
if ( ! LEEAOST )
{ /* line 563: */
LEEAOST = (Id.upb==0);
}
if ( LEEAOST )
{ 
OEEAOST.fn.fn_global = LRAAOSL_newline;
OEEAOST.nonlocals = A68_NIL;
MEEAOST.data[0] = A_UNITE(NEEAOST,mode12,12,OEEAOST);
 /* line 564: */
SEEAOST = QEEAOST ;
MEEAOST.data[1] = A_UNITE(REEAOST,mode7,7,SEEAOST);
UEEAOST = (*(&(KEEAOST_compound->Context))) ;
MEEAOST.data[2] = A_UNITE(TEEAOST,mode7,7,UEEAOST);
YEEAOST = WEEAOST ;
MEEAOST.data[3] = A_UNITE(XEEAOST,mode7,7,YEEAOST);
AFEAOST.fn.fn_global = LRAAOSL_newline;
AFEAOST.nonlocals = A68_NIL;
MEEAOST.data[4] = A_UNITE(ZEEAOST,mode12,12,AFEAOST);
GFBAOSL_put(Channel, A_HISVEC(BFEAOST,MEEAOST,5,A68_52 ));
 /* line 565: */
EYDAOST_commandvechelp(Env, Channel, TMDAOST_nilsimple, (*(&(KEEAOST_compound->Locals))), A68_TRUE);
 /* line 566: */
 /* line 567: */
EYDAOST_commandvechelp(Env, Channel, TMDAOST_nilsimple, (*(&(KEEAOST_compound->Globals))), A68_TRUE);
} 
else
{ 
{ 
 /* line 568: */
CFEAOST.fn.fn_global = MBEAOST_simplehelp;
CFEAOST.nonlocals = A68_NIL;
DFEAOST_l = BCEAOST_grouphelp(Env, Channel, Id, TMDAOST_nilsimple, (*(&(KEEAOST_compound->Locals))), Compounddetails, A68_TRUE, CFEAOST);
 /* line 569: */
 /* line 570: */
EFEAOST.fn.fn_global = MBEAOST_simplehelp;
EFEAOST.nonlocals = A68_NIL;
FFEAOST_g = BCEAOST_grouphelp(Env, Channel, Id, TMDAOST_nilsimple, (*(&(KEEAOST_compound->Globals))), Compounddetails, A68_FALSE, EFEAOST);
 /* line 571: */
GFEAOST = DFEAOST_l;
if ( ! GFEAOST )
{GFEAOST = FFEAOST_g;
}
 /* line 572: */
HFEAOST = !GFEAOST;
if ( HFEAOST )
{ 
KFEAOST = '\"' ;
IFEAOST.data[0] = A_UNITE(JFEAOST,mode6,6,KFEAOST);
WRDAOST_lc( Id, &LFEAOST );
IFEAOST.data[1] = A_UNITE(MFEAOST,mode7,7,LFEAOST);
 /* line 573: */
QFEAOST = OFEAOST ;
IFEAOST.data[2] = A_UNITE(PFEAOST,mode7,7,QFEAOST);
SFEAOST = (*(&(KEEAOST_compound->Context))) ;
IFEAOST.data[3] = A_UNITE(RFEAOST,mode7,7,SFEAOST);
 /* line 574: */
UJBAOSL_oneline( A_HISVEC(TFEAOST,IFEAOST,4,A68_52 ), &UFEAOST );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(VFEAOST,UFEAOST,A68_VC )),(WHAAOSI_user, A_HVEC(VFEAOST,UFEAOST,A68_VC ),(Msg).nonlocals));
} 
} 
} 
} 
A_PROC_EXIT(help);
return;
} 
#undef NL
 /* line 584: */

A68_VOID  BGEAOST_full_help(A68_235 * Env, A68_34 * Channel, A68_BOOL  Low, A68_BOOL  High, A68_97  Msg)
{ 
A68_280 * EGEAOST_list;
A68_252  GGEAOST_alreadyencountered;   /* proc value of non-global proc */
A68_281  PHEAOST_basichelp;   /* proc value of non-global proc */
A68_284  VJEAOST_fullshell;   /* proc value of non-global proc */
A_PROC_ENTRY(full_help);
 /* line 585: */
 /* line 587: */
{ 
 /* line 588: */
 /* line 589: */
EGEAOST_list = DGEAOST_end;
 /* line 591: */
 /* line 575: */
A_CLOSURE( GGEAOST_alreadyencountered, HGEAOST_alreadyencountered, IGEAOST_alreadyencountered );
(( IGEAOST_alreadyencountered * ) ( GGEAOST_alreadyencountered.nonlocals )) -> EGEAOST_list = (&EGEAOST_list);
 /* line 604: */
 /* line 617: */
A_CLOSURE( PHEAOST_basichelp, QHEAOST_basichelp, RHEAOST_basichelp );
(( RHEAOST_basichelp * ) ( PHEAOST_basichelp.nonlocals )) -> Msg = Msg;
(( RHEAOST_basichelp * ) ( PHEAOST_basichelp.nonlocals )) -> GGEAOST_alreadyencountered = GGEAOST_alreadyencountered;
(( RHEAOST_basichelp * ) ( PHEAOST_basichelp.nonlocals )) -> Low = Low;
(( RHEAOST_basichelp * ) ( PHEAOST_basichelp.nonlocals )) -> Channel = Channel;
(( RHEAOST_basichelp * ) ( PHEAOST_basichelp.nonlocals )) -> High = High;
(( RHEAOST_basichelp * ) ( PHEAOST_basichelp.nonlocals )) -> Env = Env;
 /* line 646: */
A_CLOSURE( VJEAOST_fullshell, WJEAOST_fullshell, XJEAOST_fullshell );
(( XJEAOST_fullshell * ) ( VJEAOST_fullshell.nonlocals )) -> PHEAOST_basichelp = PHEAOST_basichelp;
(( XJEAOST_fullshell * ) ( VJEAOST_fullshell.nonlocals )) -> High = High;
(( XJEAOST_fullshell * ) ( VJEAOST_fullshell.nonlocals )) -> Env = Env;
(( XJEAOST_fullshell * ) ( VJEAOST_fullshell.nonlocals )) -> Channel = Channel;
(( XJEAOST_fullshell * ) ( VJEAOST_fullshell.nonlocals )) -> VJEAOST_fullshell = VJEAOST_fullshell;
 /* line 685: */
 /* line 686: */
A_CALLPROC(VJEAOST_fullshell,(0, (*(&((*(&(Env->Stack)))->Current_context))), TMDAOST_nilsimple),(0, (*(&((*(&(Env->Stack)))->Current_context))), TMDAOST_nilsimple,(VJEAOST_fullshell).nonlocals));
} 
A_PROC_EXIT(full_help);
return;
} 
#undef NL
 /* line 691: */

A68_VOID  GMEAOST_syntax_help(A68_235 * Env, A68_34 * Channel, A68_VC  Description, A68_BOOL  Give_details, A68_97  Msg)
{ 
A68_287  JMEAOST_show;   /* proc value of non-global proc */
A68_258  VNEAOST;  /* collateral clause result */
A68_52  YNEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  ZNEAOST;  /* YIELD */
A68_64  AOEAOST;  /* avoid structure result */
A68_52  BOEAOST;  /* OPERATORS - mode -> union mode */
A68_85  COEAOST;  /* OPERATORS - istruct -> vector */
A68_183 * DOEAOST_analyser;
A68_189  EOEAOST;  /* forall yield */
A68_INT  FOEAOST;  /* forall loop counter */
A68_BOOL  GOEAOST_found;
A68_183 * HOEAOST_analyser;
A68_189  IOEAOST;  /* forall yield */
A68_INT  JOEAOST;  /* forall loop counter */
A68_BOOL  KOEAOST;  /* optbool result */
A68_271  LOEAOST;  /* collateral clause result */
A68_52  MOEAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  NOEAOST;  /* YIELD */
A68_52  OOEAOST;  /* OPERATORS - mode -> union mode */
A68_52  ROEAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SOEAOST;  /* YIELD */
A68_52  TOEAOST;  /* OPERATORS - mode -> union mode */
A68_56  UOEAOST;  /* procedure value */
A68_85  VOEAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(syntax_help);
 /* line 692: */
 /* line 693: */
{ 
A_CLOSURE( JMEAOST_show, KMEAOST_show, LMEAOST_show );
(( LMEAOST_show * ) ( JMEAOST_show.nonlocals )) -> Msg = Msg;
(( LMEAOST_show * ) ( JMEAOST_show.nonlocals )) -> Channel = Channel;
(( LMEAOST_show * ) ( JMEAOST_show.nonlocals )) -> Env = Env;
(( LMEAOST_show * ) ( JMEAOST_show.nonlocals )) -> Give_details = Give_details;
 /* line 712: */
 /* line 713: */
if ( (Description.upb==0) )
{ 
ZNEAOST = XNEAOST ;
VNEAOST.data[0] = A_UNITE(YNEAOST,mode7,7,ZNEAOST);
HZAAOSL_lines( 2, &AOEAOST );
VNEAOST.data[1] = A_UNITE(BOEAOST,mode20,20,AOEAOST);
GFBAOSL_put(Channel, A_HISVEC(COEAOST,VNEAOST,2,A68_52 ));
 /* line 714: */
 /* line 715: */
EOEAOST = (*(&(Env->Analysers))) ;
FOEAOST = EOEAOST.upb -1;
DOEAOST_analyser = EOEAOST.data;
for (;FOEAOST-- >= 0;
(DOEAOST_analyser++
) )
{
if ( ((*(*(&(DOEAOST_analyser->Sort))))!=(-1)) )
{ 
A_CALLPROC(JMEAOST_show,((*DOEAOST_analyser)),((*DOEAOST_analyser),(JMEAOST_show).nonlocals));
} 
}
 /* line 716: */
 /* line 717: */
LRAAOSL_newline(Channel);
} 
else
{ 
GOEAOST_found = A68_FALSE;
 /* line 718: */
IOEAOST = (*(&(Env->Analysers))) ;
JOEAOST = IOEAOST.upb -1;
HOEAOST_analyser = IOEAOST.data;
for (;JOEAOST-- >= 0;
(HOEAOST_analyser++
) )
{
 /* line 719: */
if ( !(!GOEAOST_found) ) break;
 /* line 720: */
KOEAOST = ((*(*(&(HOEAOST_analyser->Sort))))!=(-1));
if ( KOEAOST )
{ /* line 721: */
KOEAOST = A_VC_EQ((*(&(HOEAOST_analyser->Description))),Description);
}
if ( KOEAOST )
{ 
A_CALLPROC(JMEAOST_show,((*HOEAOST_analyser)),((*HOEAOST_analyser),(JMEAOST_show).nonlocals));
 /* line 722: */
 /* line 723: */
GOEAOST_found = A68_TRUE;
} 
}
 /* line 724: */
 /* line 725: */
if ( !GOEAOST_found )
{ 
NOEAOST = '\"' ;
LOEAOST.data[0] = A_UNITE(MOEAOST,mode6,6,NOEAOST);
LOEAOST.data[1] = A_UNITE(OOEAOST,mode7,7,Description);
SOEAOST = QOEAOST ;
LOEAOST.data[2] = A_UNITE(ROEAOST,mode7,7,SOEAOST);
UOEAOST.fn.fn_global = LRAAOSL_newline;
UOEAOST.nonlocals = A68_NIL;
LOEAOST.data[3] = A_UNITE(TOEAOST,mode12,12,UOEAOST);
 /* line 726: */
 /* line 727: */
 /* line 728: */
GFBAOSL_put(Channel, A_HISVEC(VOEAOST,LOEAOST,4,A68_52 ));
} 
} 
} 
A_PROC_EXIT(syntax_help);
return;
} 
#undef NL
 /* line 739: */
 /* line 740: */
 /* line 742: */
 /* line 743: */
 /* line 744: */
 /* line 746: */

A68_235 * DPEAOST_initialise_commands(A68_237  Report_error, A68_239  Set_default_msg, A68_97  Abort, A68_236  Caller, A68_184 * Readers, A68_232 * Outer_command, A68_178  Outer_parameter)
{ 
A68_290 * FPEAOST_list;
A68_291  HPEAOST_new;   /* proc value of non-global proc */
A68_294  IQEAOST_sort_commands;   /* proc value of non-global proc */
A68_INT  VQEAOST_n_readers;
A68_184 * WQEAOST_rptr;
A68_295  YQEAOST_generator;   /* proc value of non-global proc */
A68_189  DREAOST;  /* avoid structure result */
A68_189  EREAOST_analysers;
A68_183 * FREAOST_a;
A68_INT  GREAOST;  /* forall loop counter */
A68_INT * HREAOST;  /* YIELD */
A68_INT ** IREAOST;  /* YIELD */
A68_INT  JREAOST_index;
A68_46  MREAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_183 * NREAOST;  /* YIELD */
A68_234 * OREAOST_stack;
A68_234  PREAOST;  /* collateral clause result */
A68_297  RREAOST_generator;   /* proc value of non-global proc */
A68_102  WREAOST;  /* avoid structure result */
A68_234  XREAOST;  /* collateral clause result */
A68_102  YREAOST;  /* OPERATORS - nil -> mode */
A68_234 * ZREAOST;  /* YIELD */
A68_235 * ASEAOST_env;
A68_235  BSEAOST;  /* collateral clause result */
A68_217  CSEAOST;  /* avoid structure result */
A68_235 * DSEAOST;  /* clause result */
A_PROC_ENTRY(initialise_commands);
 /* line 747: */
 /* line 753: */
{ 
 /* line 754: */
FPEAOST_list = (A68_290 *)A68_NIL;
 /* line 756: */
A_CLOSURE( HPEAOST_new, IPEAOST_new, JPEAOST_new );
(( JPEAOST_new * ) ( HPEAOST_new.nonlocals )) -> FPEAOST_list = (&FPEAOST_list);
 /* line 768: */
 /* line 784: */
A_CLOSURE( IQEAOST_sort_commands, JQEAOST_sort_commands, KQEAOST_sort_commands );
(( KQEAOST_sort_commands * ) ( IQEAOST_sort_commands.nonlocals )) -> HPEAOST_new = HPEAOST_new;
(( KQEAOST_sort_commands * ) ( IQEAOST_sort_commands.nonlocals )) -> IQEAOST_sort_commands = IQEAOST_sort_commands;
 /* line 805: */
A_CALLPROC(IQEAOST_sort_commands,((&(Outer_command->Locals))),((&(Outer_command->Locals)),(IQEAOST_sort_commands).nonlocals));
 /* line 806: */
A_CALLPROC(IQEAOST_sort_commands,((&(Outer_command->Globals))),((&(Outer_command->Globals)),(IQEAOST_sort_commands).nonlocals));
 /* line 808: */
VQEAOST_n_readers = 0;
 /* line 809: */
WQEAOST_rptr = Readers;
 /* line 810: */
for ( ;; )
{ 
 /* line 811: */
if ( !((WQEAOST_rptr!=(A68_184 *)A68_NIL)) ) break;
VQEAOST_n_readers = FVCAOST_max((*(*(&((&(WQEAOST_rptr->Rule))->Sort)))), VQEAOST_n_readers);
 /* line 812: */
 /* line 813: */
WQEAOST_rptr = (*(&(WQEAOST_rptr->Rest)));
}
 /* line 815: */
A_CLOSURE( YQEAOST_generator, ZQEAOST_generator, AREAOST_generator );
(( AREAOST_generator * ) ( YQEAOST_generator.nonlocals )) -> VQEAOST_n_readers = (&VQEAOST_n_readers);
A_CALLPROC(YQEAOST_generator,(A68_FALSE, &DREAOST),(A68_FALSE, &DREAOST,(YQEAOST_generator).nonlocals));
EREAOST_analysers = DREAOST;
 /* line 816: */
GREAOST = EREAOST_analysers.upb -1;
FREAOST_a = EREAOST_analysers.data;
for (;GREAOST-- >= 0;
(FREAOST_a++
) )
{
HREAOST = A_HEAP(A68_INT ) ;
(*HREAOST) = (-1) ;
IREAOST = (&(FREAOST_a->Sort)) ;
(*IREAOST) = HREAOST;
}
 /* line 818: */
WQEAOST_rptr = Readers;
 /* line 819: */
for ( ;; )
{ 
 /* line 820: */
if ( !((WQEAOST_rptr!=(A68_184 *)A68_NIL)) ) break;
JREAOST_index = (*(*(&((&(WQEAOST_rptr->Rule))->Sort))));
 /* line 821: */
 /* line 822: */
if ( ((*(*(&((&A_VINDEX(EREAOST_analysers,JREAOST_index))->Sort))))!=(-1)) )
{ 
 /* line 823: */
A_CALLPROC(Abort,(SHAAOSI_system, A_HVEC(MREAOST,LREAOST,A68_VC )),(SHAAOSI_system, A_HVEC(MREAOST,LREAOST,A68_VC ),(Abort).nonlocals));
} 
else
{ 
 /* line 824: */
NREAOST = (&A_VINDEX(EREAOST_analysers,JREAOST_index)) ;
(*NREAOST) = (*(&(WQEAOST_rptr->Rule)));
} 
 /* line 825: */
 /* line 826: */
WQEAOST_rptr = (*(&(WQEAOST_rptr->Rest)));
}
 /* line 828: */
OREAOST_stack = (A_HEAP(A68_234 ));
PREAOST.Current_context = Outer_command;
PREAOST.Depth = 1;
A_CLOSURE( RREAOST_generator, SREAOST_generator, TREAOST_generator );
 /* line 829: */
A_CALLPROC(RREAOST_generator,(A68_FALSE, &WREAOST),(A68_FALSE, &WREAOST,(RREAOST_generator).nonlocals));
PREAOST.Input_lines = WREAOST;
XREAOST.Current_context = (A68_232 *)A68_NIL;
XREAOST.Depth = 0;
XREAOST.Input_lines = A_VVAC(YREAOST);
XREAOST.Caller = (A68_234 *)A68_NIL;
ZREAOST = A_HEAP(A68_234 ) ;
(*ZREAOST) = XREAOST ;
PREAOST.Caller = ZREAOST;
(*OREAOST_stack) = PREAOST;
 /* line 831: */
ASEAOST_env = (A_HEAP(A68_235 ));
BSEAOST.Stack = OREAOST_stack;
BSEAOST.Analysers = EREAOST_analysers;
BSEAOST.Hidden = A68_FALSE;
BSEAOST.Private = A68_FALSE;
BSEAOST.Secret = A68_FALSE;
 /* line 832: */
BSEAOST.Caller = Caller;
BSEAOST.Report_error = Report_error;
BSEAOST.Set_default_msg = Set_default_msg;
BSEAOST.Abort = Abort;
(*ASEAOST_env) = BSEAOST;
 /* line 834: */
A_CALLPROC(Caller,(ASEAOST_env, (*(&((*(&(OREAOST_stack->Current_context)))->Prelude))), Outer_parameter, Abort, &CSEAOST),(ASEAOST_env, (*(&((*(&(OREAOST_stack->Current_context)))->Prelude))), Outer_parameter, Abort, &CSEAOST,(Caller).nonlocals));
CSEAOST;
 /* line 836: */
 /* line 837: */
DSEAOST = ASEAOST_env;
} 
A_PROC_EXIT(initialise_commands);
return( DSEAOST );
} 
#undef NL

A68_VOID  FSEAOST_interpret_commands(A68_235 * Env, A68_217  *ReturnedValue)
{ 
A68_97  JSEAOST;  /* OPERATORS - skip to mode */
A68_97  ISEAOST_msg;
A68_203  KSEAOST_input_lines;   /* proc value of non-global proc */
A68_299  MTEAOST_obey;   /* proc value of non-global proc */
A68_300  TUEAOST_shell;   /* proc value of non-global proc */
A68_97  EWEAOST_anonymous;   /* proc value of non-global proc */
A68_jmp_buf GSEAOST_restart;
A68_217  LXEAOST_continuation;
A68_239  MXEAOST;  /* CALL */
A68_238  NXEAOST;  /* OPERATORS - mode -> union mode */
A68_BOOL  OXEAOST;  /* clause result */
A68_217  PXEAOST;  /* avoid structure result */
A68_239  QXEAOST;  /* CALL */
A68_238  RXEAOST;  /* OPERATORS - mode -> union mode */
A68_217  SXEAOST;  /* clause result */
if ( sigsetjmp( GSEAOST_restart.label,1) ) goto HSEAOST_restart;
A_PROC_ENTRY(interpret_commands);
 /* line 846: */
 /* line 859: */
{ 
ISEAOST_msg = JSEAOST;
 /* line 862: */
 /* line 863: */
 /* line 869: */
A_CLOSURE( KSEAOST_input_lines, LSEAOST_input_lines, MSEAOST_input_lines );
(( MSEAOST_input_lines * ) ( KSEAOST_input_lines.nonlocals )) -> Env = Env;
 /* line 888: */
A_CLOSURE( MTEAOST_obey, NTEAOST_obey, OTEAOST_obey );
(( OTEAOST_obey * ) ( MTEAOST_obey.nonlocals )) -> Env = Env;
(( OTEAOST_obey * ) ( MTEAOST_obey.nonlocals )) -> ISEAOST_msg = (&ISEAOST_msg);
(( OTEAOST_obey * ) ( MTEAOST_obey.nonlocals )) -> MTEAOST_obey = MTEAOST_obey;
(( OTEAOST_obey * ) ( MTEAOST_obey.nonlocals )) -> KSEAOST_input_lines = KSEAOST_input_lines;
 /* line 932: */
 /* line 933: */
 /* line 934: */
A_CLOSURE( TUEAOST_shell, UUEAOST_shell, VUEAOST_shell );
(( VUEAOST_shell * ) ( TUEAOST_shell.nonlocals )) -> Env = Env;
(( VUEAOST_shell * ) ( TUEAOST_shell.nonlocals )) -> ISEAOST_msg = (&ISEAOST_msg);
(( VUEAOST_shell * ) ( TUEAOST_shell.nonlocals )) -> MTEAOST_obey = MTEAOST_obey;
 /* line 969: */
A_CLOSURE( EWEAOST_anonymous, FWEAOST_anonymous, GWEAOST_anonymous );
(( GWEAOST_anonymous * ) ( EWEAOST_anonymous.nonlocals )) -> KSEAOST_input_lines = KSEAOST_input_lines;
(( GWEAOST_anonymous * ) ( EWEAOST_anonymous.nonlocals )) -> Env = Env;
(( GWEAOST_anonymous * ) ( EWEAOST_anonymous.nonlocals )) -> GSEAOST_restart = GSEAOST_restart;
ISEAOST_msg = EWEAOST_anonymous;
 /* line 1003: */
 /* line 1005: */
HSEAOST_restart:
 /* line 1007: */
for ( ;; )
{ 
 /* line 1012: */
MXEAOST = (*(&(Env->Set_default_msg))) ;
A_CALLPROC(MXEAOST,(A_UNITE(NXEAOST,mode1,1,ISEAOST_msg)),(A_UNITE(NXEAOST,mode1,1,ISEAOST_msg),(MXEAOST).nonlocals));
 /* line 1015: */
 /* line 1016: */
A_CALLPROC(TUEAOST_shell,( &PXEAOST),( &PXEAOST,(TUEAOST_shell).nonlocals));
LXEAOST_continuation = PXEAOST ;
OXEAOST = ((*(&((&LXEAOST_continuation)->C)))==ZNDAOST_continue.C);
if ( !OXEAOST ) break;
/*SKIP*/;
}
 /* line 1018: */
QXEAOST = (*(&(Env->Set_default_msg))) ;
A_CALLPROC(QXEAOST,(A_EMPTY(RXEAOST,2)),(A_EMPTY(RXEAOST,2),(QXEAOST).nonlocals));
 /* line 1020: */
 /* line 1021: */
 /* line 1027: */
SXEAOST = LXEAOST_continuation;
} 
A_PROC_EXIT(interpret_commands);
*ReturnedValue = (SXEAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void FMDAOST(void)   /* initialise DECS command */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/command.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/commandreader.m","./mfiles/commandsyntax.m","./mfiles/basics.m","./mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_226  SMDAOST;  /* avoid structure result */
A68_BITS * VMDAOST;  /* YIELD */
A68_218  WMDAOST;  /* clause result */
A68_BITS * ZMDAOST;  /* YIELD */
A68_218  ANDAOST;  /* clause result */
A68_BITS * DNDAOST;  /* YIELD */
A68_218  ENDAOST;  /* clause result */
A68_BITS * HNDAOST;  /* YIELD */
A68_218  INDAOST;  /* clause result */
A68_BITS * LNDAOST;  /* YIELD */
A68_218  MNDAOST;  /* clause result */
A68_BITS * PNDAOST;  /* YIELD */
A68_218  QNDAOST;  /* clause result */
A68_BITS * TNDAOST;  /* YIELD */
A68_218  UNDAOST;  /* clause result */
A68_INT * XNDAOST;  /* YIELD */
A68_217  YNDAOST;  /* clause result */
A68_INT * BODAOST;  /* YIELD */
A68_217  CODAOST;  /* clause result */
A68_INT * FODAOST;  /* YIELD */
A68_217  GODAOST;  /* clause result */
A68_INT * JODAOST;  /* YIELD */
A68_217  KODAOST;  /* clause result */
A68_INT * NODAOST;  /* YIELD */
A68_217  OODAOST;  /* clause result */
A68_242  HQDAOST;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/command.a68";
A_config.translation_time = "Tue Apr  4 09:49:43 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "EMDAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:43 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS command);
UEAALIB_a68config(LGAALIB_configinfo, JMDAOST);
 /* line 81: */
 /* line 149: */
 /* line 176: */
 /* line 177: */
OMDAOST_generator( A68_TRUE, &SMDAOST );
RMDAOST_nullcommands = SMDAOST;
 /* line 178: */
 /* line 183: */
{ 
VMDAOST = (&((&UMDAOST_a)->A)) ;
(*VMDAOST) = 0XfU;
WMDAOST = UMDAOST_a;
} 
XMDAOST_normalaccess = WMDAOST;
 /* line 184: */
{ 
ZMDAOST = (&((&YMDAOST_a)->A)) ;
(*ZMDAOST) = 0XbU;
ANDAOST = YMDAOST_a;
} 
BNDAOST_hiddenaccess = ANDAOST;
 /* line 185: */
{ 
DNDAOST = (&((&CNDAOST_a)->A)) ;
(*DNDAOST) = 0X7U;
ENDAOST = CNDAOST_a;
} 
FNDAOST_secretaccess = ENDAOST;
 /* line 186: */
{ 
HNDAOST = (&((&GNDAOST_a)->A)) ;
(*HNDAOST) = 0XdU;
INDAOST = GNDAOST_a;
} 
JNDAOST_privateaccess = INDAOST;
 /* line 187: */
{ 
LNDAOST = (&((&KNDAOST_a)->A)) ;
(*LNDAOST) = 0X9U;
MNDAOST = KNDAOST_a;
} 
NNDAOST_hiddenprivateaccess = MNDAOST;
 /* line 188: */
{ 
PNDAOST = (&((&ONDAOST_a)->A)) ;
(*PNDAOST) = 0X5U;
QNDAOST = ONDAOST_a;
} 
RNDAOST_secretprivateaccess = QNDAOST;
 /* line 189: */
{ 
TNDAOST = (&((&SNDAOST_a)->A)) ;
(*TNDAOST) = 0X0U;
UNDAOST = SNDAOST_a;
} 
VNDAOST_noaccess = UNDAOST;
 /* line 191: */
{ 
XNDAOST = (&((&WNDAOST_c)->C)) ;
(*XNDAOST) = 1;
YNDAOST = WNDAOST_c;
} 
ZNDAOST_continue = YNDAOST;
 /* line 192: */
{ 
BODAOST = (&((&AODAOST_c)->C)) ;
(*BODAOST) = 2;
CODAOST = AODAOST_c;
} 
DODAOST_return = CODAOST;
 /* line 193: */
{ 
FODAOST = (&((&EODAOST_c)->C)) ;
(*FODAOST) = 3;
GODAOST = EODAOST_c;
} 
HODAOST_finish = GODAOST;
 /* line 194: */
{ 
JODAOST = (&((&IODAOST_c)->C)) ;
(*JODAOST) = 4;
KODAOST = IODAOST_c;
} 
LODAOST_quit = KODAOST;
 /* line 195: */
{ 
NODAOST = (&((&MODAOST_c)->C)) ;
(*NODAOST) = 0;
OODAOST = MODAOST_c;
} 
PODAOST_not_found = OODAOST;
 /* line 197: */
 /* line 204: */
 /* line 240: */
 /* line 242: */
HQDAOST.fn.fn_global = WODAOST_add;
HQDAOST.nonlocals = A68_NIL;
GQDAOST_add = (HQDAOST);
 /* line 244: */
 /* line 246: */
 /* line 249: */
 /* line 251: */
 /* line 254: */
 /* line 258: */
 /* line 268: */
 /* line 278: */
 /* line 291: */
 /* line 295: */
 /* line 300: */
 /* line 310: */
 /* line 315: */
 /* line 325: */
 /* line 342: */
 /* line 370: */
 /* line 382: */
 /* line 401: */
 /* line 449: */
 /* line 482: */
 /* line 491: */
 /* line 558: */
 /* line 583: */
 /* line 690: */
 /* line 737: */
 /* line 845: */
 /* line 1042: */
A_PROC_EXIT(DECS command);
} 
#undef NL
/* end of translation of ./a68files/command.a68 */
