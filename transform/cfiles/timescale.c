
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
/* UNAME:BPABTRN */
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
A68_VC  Id;
struct A68t173 * Rest;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE26,REF MODE173)  */
struct A68t174{
A68_INT  Int;
A_PAD_INT(PAD_36)
struct A68t174 * Rest;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,REF MODE174)  */
struct A68t175 { A68_INT mode; union {
struct A68t176 * mode1;
struct A68t177 * mode2;
struct A68t178 * mode3;
struct A68t179 * mode4;
struct A68t180 * mode5;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180)  */
struct A68t176{
A68_INT  Attrno;
A_PAD_INT(PAD_37)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT)  */
struct A68t177{
A68_VC  Classname;
struct A68t173 * Strings;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE173)  */
struct A68t178{
struct A68t175  Elem;
struct A68t178 * Rest;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE175,REF MODE178)  */
struct A68t179{
struct A68t175  Attr;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE175)  */
struct A68t180{
A68_INT  Attrnull;
A_PAD_INT(PAD_38)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
A68_INT  Sort;
A_PAD_INT(PAD_39)
A68_VC  Attrname;
struct A68t175  Value;
struct A68t182 * Usage;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE26,MODE175,REF MODE182)  */
struct A68t182{
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
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t183{
struct A68t175  Tag;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE175)  */
struct A68t184 { A68_INT mode; union {
struct A68t185 * mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t188 * mode4;
struct A68t189 * mode5;
struct A68t190 * mode6;
struct A68t191 * mode7;
struct A68t192 * mode8;
struct A68t193 * mode9;
struct A68t194 * mode10;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194)  */
struct A68t185{
A68_INT  Int;
A_PAD_INT(PAD_46)
A68_VC  Text;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t186{
A68_INT  Sort;
A_PAD_INT(PAD_47)
struct A68t184  Test;
struct A68t184  Standard;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,MODE184,MODE184)  */
struct A68t187{
A68_INT  Nameno;
A_PAD_INT(PAD_48)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t188{
A68_INT  Intno;
A_PAD_INT(PAD_49)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT)  */
struct A68t189{
struct A68t184  Left;
A68_INT  Sort;
A_PAD_INT(PAD_50)
struct A68t184  Right;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE184,INT,MODE184)  */
struct A68t190{
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t184  Right;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,MODE184)  */
struct A68t191{
struct A68t184  Cond;
struct A68t184  True;
struct A68t184  False;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE184,MODE184,MODE184)  */
struct A68t192{
struct A68t184  Formula;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE184)  */
struct A68t193{
A68_INT  Macparno;
A_PAD_INT(PAD_52)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Fnull;
A_PAD_INT(PAD_53)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t184  Tag;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE184)  */
struct A68t196{
struct A68t184  Formula;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE184,REF MODE196)  */
struct A68t199{
struct A68t184  Lwb;
struct A68t184  Upb;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE184,MODE184)  */
struct A68t198 { A68_INT mode; union {
struct A68t185 * mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t188 * mode4;
struct A68t189 * mode5;
struct A68t190 * mode6;
struct A68t191 * mode7;
struct A68t192 * mode8;
struct A68t193 * mode9;
struct A68t194 * mode10;
struct A68t199  mode11;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,MODE199)  */
struct A68t197{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_VC  Intname;
struct A68t175  Attr;
struct A68t198  Value;
struct A68t182 * Usage;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,REF MODE26,MODE175,MODE198,REF MODE182)  */
struct A68t200 { A68_INT mode; union {
struct A68t201 * mode1;
struct A68t202 * mode2;
struct A68t203 * mode3;
struct A68t204 * mode4;
struct A68t205 * mode5;
struct A68t206 * mode6;
struct A68t207 * mode7;
struct A68t193 * mode8;
struct A68t208 * mode9;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(REF MODE201,REF MODE202,REF MODE203,REF MODE204,REF MODE205,REF MODE206,REF MODE207,REF MODE193,REF MODE208)  */
struct A68t201{
A68_INT  Typeno;
A_PAD_INT(PAD_55)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT)  */
struct A68t202{
struct A68t184  Size;
struct A68t200  Elem;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE184,MODE200)  */
struct A68t203{
struct A68t200  Elem;
struct A68t203 * Rest;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE200,REF MODE203)  */
struct A68t204{
struct A68t200  From;
struct A68t200  To;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE200,MODE200)  */
struct A68t205{
struct A68t200  Type;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE200)  */
struct A68t206{
struct A68t184  Size;
struct A68t200  Char;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE184,MODE200)  */
struct A68t207{
A68_INT  Tvoid;
A_PAD_INT(PAD_56)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
A68_INT  Tnull;
A_PAD_INT(PAD_57)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT)  */
struct A68t209{
struct A68t200  Tag;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE200)  */
struct A68t210{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t211{
A68_VC  Altname;
struct A68t200  Assoc;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE26,MODE200)  */
struct A68t212{
A68_VC  Tagname;
struct A68t199  Range;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE26,MODE199)  */
A_VECTOR(struct A68t211 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE211 */
struct A68t213 { A68_INT mode; union {
struct A68t214  mode1;
struct A68t212 * mode2;
struct A68t209 * mode3;
struct A68t210 * mode4;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(REF MODE214,REF MODE212,REF MODE209,REF MODE210)  */
struct A68t215{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_VC  Typename;
struct A68t175  Attr;
struct A68t213  Body;
struct A68t182 * Usage;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,REF MODE26,MODE175,MODE213,REF MODE182)  */
struct A68t216{
A68_INT  Constno;
A_PAD_INT(PAD_59)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT)  */
struct A68t217{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Primno;
A_PAD_INT(PAD_61)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,INT)  */
struct A68t218{
A68_INT  Typeno;
A_PAD_INT(PAD_62)
struct A68t184  Index;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,MODE184)  */
struct A68t219{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t199  Range;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,MODE199)  */
struct A68t220{
struct A68t200  Querytype;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE200)  */
struct A68t222 { A68_INT mode; union {
struct A68t216 * mode1;
struct A68t217 * mode2;
struct A68t218 * mode3;
struct A68t220 * mode4;
struct A68t223 * mode5;
struct A68t224 * mode6;
struct A68t205 * mode7;
struct A68t219 * mode8;
struct A68t225 * mode9;
struct A68t226 * mode10;
struct A68t227 * mode11;
struct A68t228 * mode12;
struct A68t229 * mode13;
struct A68t230 * mode14;
struct A68t231 * mode15;
struct A68t232 * mode16;
struct A68t233 * mode17;
struct A68t234 * mode18;
struct A68t235 * mode19;
struct A68t236 * mode20;
struct A68t237 * mode21;
struct A68t238 * mode22;
struct A68t239 * mode23;
struct A68t240 * mode24;
struct A68t241 * mode25;
struct A68t242 * mode26;
struct A68t243 * mode27;
struct A68t244 * mode28;
struct A68t245 * mode29;
struct A68t246 * mode30;
struct A68t247 * mode31;
struct A68t248 * mode32;
struct A68t249 * mode33;
struct A68t250 * mode34;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE216,REF MODE217,REF MODE218,REF MODE220,REF MODE223,REF MODE224,REF MODE205,REF MODE219,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250)  */
struct A68t221{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Constname;
struct A68t175  Attr;
struct A68t222  Value;
struct A68t182 * Usage;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,REF MODE26,MODE175,MODE222,REF MODE182)  */
struct A68t223{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
struct A68t32  String;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t224{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT)  */
struct A68t225{
A68_INT  Typeno;
A_PAD_INT(PAD_67)
A68_INT  Firstno;
A_PAD_INT(PAD_68)
A68_INT  Lastno;
A_PAD_INT(PAD_69)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,INT,INT)  */
struct A68t226{
struct A68t222  Alt;
struct A68t226 * Rest;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE222,REF MODE226)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_INT  Nameno;
A_PAD_INT(PAD_71)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT)  */
struct A68t228{
struct A68t222  Sink;
struct A68t222  Source;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
struct A68t222  Assoc;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,INT,MODE222)  */
struct A68t230{
struct A68t222  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_74)
A68_INT  Altno;
A_PAD_INT(PAD_75)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE222,INT,INT)  */
struct A68t231{
struct A68t222  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_76)
A68_INT  Nameno;
A_PAD_INT(PAD_77)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE222,INT,INT)  */
struct A68t232{
struct A68t222  Unit;
struct A68t184  Index;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE222,MODE184)  */
struct A68t233{
struct A68t222  Unit;
struct A68t199  Range;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE222,MODE199)  */
struct A68t234{
struct A68t222  Unit;
struct A68t222  Index;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t235{
struct A68t222  Unit;
struct A68t222  Index;
struct A68t222  From;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE222,MODE222,MODE222)  */
struct A68t236{
struct A68t184  Size;
struct A68t222  Elem;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE184,MODE222)  */
struct A68t237{
struct A68t222  Elem;
struct A68t237 * Rest;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE222,REF MODE237)  */
struct A68t238{
A68_BOOL  String;
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t222  Left;
struct A68t222  Right;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(BOOL,INT,MODE222,MODE222)  */
A_VECTOR(struct A68t265 ,A68t264);
typedef struct A68t264  A68_264 ;    /* VECTOR [] MODE265 */
struct A68t267{
struct A68t222  Tag;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE222)  */
struct A68t262{
A68_INT  Fnno;
A_PAD_INT(PAD_80)
struct A68t264  Macparams;
struct A68t175  Attr;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(INT,REF MODE264,MODE175)  */
struct A68t266 { A68_INT mode; union {
struct A68t183  mode1;
struct A68t195  mode2;
struct A68t209  mode3;
struct A68t267  mode4;
struct A68t262  mode5;
} data; };
typedef struct A68t266  A68_266 ;    /* UNION(MODE183,MODE195,MODE209,MODE267,MODE262)  */
struct A68t265{
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t266  Param;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,MODE266)  */
struct A68t239{
struct A68t262  Inst;
struct A68t222  Right;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE262,MODE222)  */
struct A68t240{
struct A68t222  Left;
struct A68t262  Inst;
struct A68t222  Right;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE222,MODE262,MODE222)  */
struct A68t241{
struct A68t222  Input;
struct A68t282 * Choices;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE222,REF MODE282)  */
struct A68t242{
struct A68t184  Cond;
struct A68t222  True;
struct A68t222  False;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE184,MODE222,MODE222)  */
struct A68t243{
struct A68t184  Repl;
struct A68t222  Body;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE184,MODE222)  */
struct A68t244{
struct A68t270 * Body;
struct A68t222  Output;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(REF MODE270,MODE222)  */
struct A68t245{
struct A68t251 * Body;
struct A68t222  Output;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE251,MODE222)  */
struct A68t246{
struct A68t222  Unit;
struct A68t175  Attr;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE222,MODE175)  */
struct A68t247{
struct A68t222  Unit;
struct A68t186  Check;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE222,MODE186)  */
struct A68t248{
struct A68t222  Unit;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE222)  */
struct A68t249{
struct A68t184  Size;
struct A68t222  Char;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE184,MODE222)  */
struct A68t250{
A68_INT  Unull;
A_PAD_INT(PAD_82)
};
typedef struct A68t250  A68_250 ;    /* STRUCT(INT)  */
struct A68t253{
A68_INT  Fnno;
A_PAD_INT(PAD_83)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT)  */
struct A68t252 { A68_INT mode; union {
struct A68t176  mode1;
struct A68t188  mode2;
struct A68t201  mode3;
struct A68t216  mode4;
struct A68t253  mode5;
struct A68t254 * mode6;
struct A68t255 * mode7;
struct A68t256 * mode8;
struct A68t257 * mode9;
struct A68t258 * mode10;
struct A68t259 * mode11;
struct A68t260 * mode12;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(MODE176,MODE188,MODE201,MODE216,MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t251{
struct A68t252  Step;
struct A68t251 * Rest;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE252,REF MODE251)  */
struct A68t254{
struct A68t184  Cond;
struct A68t268 * Print;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE184,REF MODE268)  */
struct A68t255{
struct A68t184  Cond;
struct A68t268 * Fault;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE184,REF MODE268)  */
struct A68t256{
struct A68t263 * Letnames;
struct A68t222  Unit;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(REF MODE263,MODE222)  */
struct A68t257{
struct A68t196 * Sizes;
struct A68t262  Inst;
struct A68t263 * Makenames;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(REF MODE196,MODE262,REF MODE263)  */
struct A68t258{
struct A68t222  From;
struct A68t222  To;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t259{
struct A68t196 * Repls;
struct A68t261 * Joins;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(REF MODE196,REF MODE261)  */
struct A68t260{
A68_INT  Stepnull;
A_PAD_INT(PAD_84)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT)  */
struct A68t261{
struct A68t258  Join;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE258,REF MODE261)  */
struct A68t263{
A68_INT  Nameno;
A_PAD_INT(PAD_85)
struct A68t263 * Rest;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT,REF MODE263)  */
struct A68t269 { A68_INT mode; union {
A68_VC  mode1;
struct A68t195 * mode2;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(REF MODE26,REF MODE195)  */
struct A68t268{
struct A68t269  Item;
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE269,REF MODE268)  */
struct A68t271 { A68_INT mode; union {
struct A68t176  mode1;
struct A68t188  mode2;
struct A68t201  mode3;
struct A68t216  mode4;
struct A68t253  mode5;
struct A68t254 * mode6;
struct A68t255 * mode7;
struct A68t272 * mode8;
struct A68t273 * mode9;
struct A68t274 * mode10;
struct A68t275 * mode11;
struct A68t276 * mode12;
struct A68t277 * mode13;
struct A68t278 * mode14;
struct A68t279 * mode15;
struct A68t270 * mode16;
struct A68t280 * mode17;
} data; };
typedef struct A68t271  A68_271 ;    /* UNION(MODE176,MODE188,MODE201,MODE216,MODE253,REF MODE254,REF MODE255,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE270,REF MODE280)  */
struct A68t270{
struct A68t271  Step;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE271,REF MODE270)  */
struct A68t272{
struct A68t256  Seqlet;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE256)  */
struct A68t273{
struct A68t256  Seqvar;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE256)  */
struct A68t274{
struct A68t263 * Pvarnames;
struct A68t222  Init;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE263,MODE222)  */
struct A68t275{
struct A68t222  To;
struct A68t222  From;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t276{
struct A68t222  Input;
struct A68t281 * Choices;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE222,REF MODE281)  */
struct A68t277{
struct A68t184  Cond;
struct A68t271  True;
struct A68t271  False;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE184,MODE271,MODE271)  */
struct A68t278{
struct A68t184  Repl;
struct A68t271  Body;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE184,MODE271)  */
struct A68t279{
A68_INT  Seqnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t279  A68_279 ;    /* STRUCT(INT)  */
struct A68t280{
struct A68t184  Size;
struct A68t271  Elem;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE184,MODE271)  */
struct A68t281{
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t222  Test;
struct A68t271  Output;
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(BOOL,INT,MODE222,MODE271,REF MODE281)  */
struct A68t282{
A68_BOOL  Check;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t222  Test;
struct A68t222  Output;
struct A68t282 * Rest;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(BOOL,INT,MODE222,MODE222,REF MODE282)  */
struct A68t283 { A68_INT mode; union {
struct A68t176  mode1;
struct A68t188  mode2;
struct A68t201  mode3;
struct A68t216  mode4;
struct A68t253  mode5;
} data; };
typedef struct A68t283  A68_283 ;    /* UNION(MODE176,MODE188,MODE201,MODE216,MODE253)  */
struct A68t284{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_91)
A68_VC  Name;
struct A68t264  Macparams;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(BOOL,REF MODE26,REF MODE264)  */
struct A68t285{
struct A68t184  Output;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE184)  */
struct A68t286{
A68_INT  Reform;
A_PAD_INT(PAD_92)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT)  */
struct A68t287{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_93)
struct A68t158  Ctname;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t288{
A68_INT  Sort;
A_PAD_INT(PAD_94)
struct A68t222  Init;
struct A68t184  Ambigtime;
struct A68t222  Ambig;
struct A68t184  Delaytime;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,MODE222,MODE184,MODE222,MODE184)  */
struct A68t289{
struct A68t222  Init;
struct A68t184  Delaytime;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE222,MODE184)  */
struct A68t290{
struct A68t222  Init;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE222)  */
struct A68t291{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t184  Interval;
struct A68t222  Init;
struct A68t184  Skew;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT,MODE184,MODE222,MODE184)  */
struct A68t292{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t262  Inst;
struct A68t184  Scale;
struct A68t222  Init;
struct A68t184  Skew;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(BOOL,INT,MODE262,MODE184,MODE222,MODE184)  */
struct A68t294 { A68_INT mode; union {
struct A68t267 * mode1;
struct A68t284 * mode2;
struct A68t285 * mode3;
struct A68t286 * mode4;
struct A68t287 * mode5;
struct A68t288 * mode6;
struct A68t289 * mode7;
struct A68t290 * mode8;
struct A68t291 * mode9;
struct A68t292 * mode10;
struct A68t293 * mode11;
struct A68t295 * mode12;
} data; };
typedef struct A68t294  A68_294 ;    /* UNION(REF MODE267,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE295)  */
struct A68t293{
struct A68t174 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_98)
struct A68t294  Fnbody;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE174,BOOL,MODE294)  */
struct A68t295{
A68_INT  Bodynull;
A_PAD_INT(PAD_99)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT)  */
struct A68t296{
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t283  Spec;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,MODE283)  */
struct A68t297{
A68_VC  Name;
struct A68t200  Type;
struct A68t175  Attr;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE26,MODE200,MODE175)  */
A_VECTOR(struct A68t296 ,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] MODE296 */
A_VECTOR(struct A68t297 ,A68t300);
typedef struct A68t300  A68_300 ;    /* VECTOR [] MODE297 */
struct A68t298{
A68_INT  Sort;
A_PAD_INT(PAD_101)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_102)
A68_VC  Fnname;
struct A68t299  Macspecs;
struct A68t175  Attr;
struct A68t263 * Inputs;
struct A68t263 * Outputs;
struct A68t300  Nametypes;
struct A68t294  Fnbody;
struct A68t182 * Usage;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE299,MODE175,REF MODE263,REF MODE263,REF MODE300,MODE294,REF MODE182)  */
A_VECTOR(struct A68t181 *,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] REF MODE181 */
A_VECTOR(struct A68t197 *,A68t303);
typedef struct A68t303  A68_303 ;    /* VECTOR [] REF MODE197 */
A_VECTOR(struct A68t215 *,A68t304);
typedef struct A68t304  A68_304 ;    /* VECTOR [] REF MODE215 */
A_VECTOR(struct A68t221 *,A68t305);
typedef struct A68t305  A68_305 ;    /* VECTOR [] REF MODE221 */
A_VECTOR(struct A68t298 *,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] REF MODE298 */
struct A68t301{
struct A68t302  Attrs;
struct A68t303  Ints;
struct A68t304  Types;
struct A68t305  Consts;
struct A68t306  Fns;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306)  */
struct A68t307{
A68_INT  Closureno;
A_PAD_INT(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t301 * Environ;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT,INT,REF MODE301)  */
struct A68t308{
struct A68t307  Outer;
struct A68t308 * Rest;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE307,REF MODE308)  */
A_VECTOR(struct A68t308 ,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] MODE308 */
struct A68t309{
struct A68t310  Outers;
struct A68t309 * Rest;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE310,REF MODE309)  */
struct A68t311{
A68_INT  Max_closureno;
A_PAD_INT(PAD_105)
struct A68t308 * Outers;
struct A68t308 * Freelist;
struct A68t309 * Outerslist;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(INT,REF MODE308,REF MODE308,REF MODE309)  */
A_VECTOR(struct A68t308 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE308 */

A_PROCEDURE(struct A68t187 *,A68t313,(A68_INT ),(A68_INT ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(INT) REF MODE187 */

A_PROCEDURE(struct A68t188 *,A68t314,(A68_INT ),(A68_INT ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(INT) REF MODE188 */

A_PROCEDURE(struct A68t192 *,A68t315,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE184) REF MODE192 */

A_PROCEDURE(struct A68t195 *,A68t316,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE184) REF MODE195 */

A_PROCEDURE(struct A68t201 *,A68t317,(A68_INT ),(A68_INT ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(INT) REF MODE201 */

A_PROCEDURE(struct A68t205 *,A68t318,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE200) REF MODE205 */

A_PROCEDURE(struct A68t209 *,A68t319,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE200) REF MODE209 */

A_PROCEDURE(struct A68t216 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE216 */

A_PROCEDURE(struct A68t220 *,A68t321,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE200) REF MODE220 */

A_PROCEDURE(struct A68t272 *,A68t322,(struct A68t256 ),(struct A68t256 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE256) REF MODE272 */

A_PROCEDURE(struct A68t273 *,A68t323,(struct A68t256 ),(struct A68t256 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE256) REF MODE273 */

A_PROCEDURE(struct A68t248 *,A68t324,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE222) REF MODE248 */

A_PROCEDURE(struct A68t267 *,A68t325,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE222) REF MODE267 */

A_PROCEDURE(struct A68t253 *,A68t326,(A68_INT ),(A68_INT ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT) REF MODE253 */

A_PROCEDURE(struct A68t285 *,A68t327,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE184) REF MODE285 */

A_PROCEDURE(struct A68t290 *,A68t328,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE222) REF MODE290 */

A_PROCEDURE(struct A68t193 *,A68t329,(A68_INT ),(A68_INT ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(INT) REF MODE193 */

A_PROCEDURE(struct A68t176 *,A68t330,(A68_INT ),(A68_INT ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(INT) REF MODE176 */

A_PROCEDURE(struct A68t183 *,A68t331,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE175) REF MODE183 */

A_PROCEDURE(struct A68t179 *,A68t332,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE175) REF MODE179 */
A_VECTOR(struct A68t173 *,A68t333);
typedef struct A68t333  A68_333 ;    /* VECTOR [] REF MODE173 */

A_PROCEDURE(A68_INT ,A68t334,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE311) INT */

A_PROCEDURE(struct A68t308 *,A68t335,(A68_INT ,struct A68t311 *,struct A68t97 ),(A68_INT ,struct A68t311 *,struct A68t97 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT,REF MODE311,MODE97) REF MODE308 */

A_PROCEDURE(struct A68t308 *,A68t336,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE311) REF MODE308 */

A_PROCEDURE(struct A68t308 **,A68t337,(struct A68t307 ,struct A68t308 **,struct A68t311 *,struct A68t97 ),(struct A68t307 ,struct A68t308 **,struct A68t311 *,struct A68t97 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE307,REF REF MODE308,REF MODE311,MODE97) REF REF MODE308 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t308 **,struct A68t311 *,struct A68t97 ),(struct A68t308 **,struct A68t311 *,struct A68t97 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF REF MODE308,REF MODE311,MODE97) VOID */

A_PROCEDURE(struct A68t311 *,A68t339,(void),(void *));
typedef struct A68t339  A68_339 ;    /* PROC REF MODE311 */

A_PROCEDURE(A68_INT ,A68t340,(struct A68t311 *,struct A68t97 ),(struct A68t311 *,struct A68t97 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE311,MODE97) INT */

A_PROCEDURE(struct A68t311 *,A68t341,(struct A68t311 *,struct A68t97 ),(struct A68t311 *,struct A68t97 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE311,MODE97) REF MODE311 */

A_PROCEDURE(struct A68t185 *,A68t342,(A68_INT ),(A68_INT ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(INT) REF MODE185 */

A_PROCEDURE(A68_INT ,A68t343,(struct A68t184 ,struct A68t97 ),(struct A68t184 ,struct A68t97 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE184,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t344,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE184) INT */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t184 ,struct A68t184 *),(struct A68t184 ,struct A68t184 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE184) MODE184 */

A_PROCEDURE(struct A68t181 *,A68t346,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE307) REF MODE181 */

A_PROCEDURE(struct A68t197 *,A68t347,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE307) REF MODE197 */

A_PROCEDURE(struct A68t215 *,A68t348,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE307) REF MODE215 */

A_PROCEDURE(struct A68t221 *,A68t349,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE307) REF MODE221 */

A_PROCEDURE(struct A68t298 *,A68t350,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE307) REF MODE298 */

A_PROCEDURE(A68_INT ,A68t351,(struct A68t182 *,struct A68t302 ),(struct A68t182 *,struct A68t302 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE182,REF MODE302) INT */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t182 *,struct A68t303 ),(struct A68t182 *,struct A68t303 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE182,REF MODE303) INT */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t182 *,struct A68t304 ),(struct A68t182 *,struct A68t304 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE182,REF MODE304) INT */

A_PROCEDURE(A68_INT ,A68t354,(struct A68t182 *,struct A68t305 ),(struct A68t182 *,struct A68t305 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE182,REF MODE305) INT */

A_PROCEDURE(A68_INT ,A68t355,(struct A68t182 *,struct A68t306 ),(struct A68t182 *,struct A68t306 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE182,REF MODE306) INT */

A_PROCEDURE(struct A68t181 *,A68t356,(struct A68t176 ,struct A68t311 *,struct A68t301 *),(struct A68t176 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE176,REF MODE311,REF MODE301) REF MODE181 */

A_PROCEDURE(struct A68t197 *,A68t357,(struct A68t188 ,struct A68t311 *,struct A68t301 *),(struct A68t188 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE188,REF MODE311,REF MODE301) REF MODE197 */

A_PROCEDURE(struct A68t215 *,A68t358,(struct A68t201 ,struct A68t311 *,struct A68t301 *),(struct A68t201 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE201,REF MODE311,REF MODE301) REF MODE215 */

A_PROCEDURE(struct A68t221 *,A68t359,(struct A68t216 ,struct A68t311 *,struct A68t301 *),(struct A68t216 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE216,REF MODE311,REF MODE301) REF MODE221 */

A_PROCEDURE(struct A68t298 *,A68t360,(struct A68t253 ,struct A68t311 *,struct A68t301 *),(struct A68t253 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE253,REF MODE311,REF MODE301) REF MODE298 */

A_PROCEDURE(struct A68t204 *,A68t361,(struct A68t298 *),(struct A68t298 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE298) REF MODE204 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t203 *,struct A68t184 *),(struct A68t203 *,struct A68t184 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE203) MODE184 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t200 ,struct A68t301 *,struct A68t184 *),(struct A68t200 ,struct A68t301 *,struct A68t184 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE200,REF MODE301) MODE184 */

A_PROCEDURE(struct A68t298 *,A68t364,(struct A68t298 *,struct A68t301 *,struct A68t301 *),(struct A68t298 *,struct A68t301 *,struct A68t301 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE298,REF MODE301,REF MODE301) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t263 *,struct A68t298 *,struct A68t200 *),(struct A68t263 *,struct A68t298 *,struct A68t200 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE263,REF MODE298) MODE200 */

A_PROCEDURE(A68_INT ,A68t366,(struct A68t263 *),(struct A68t263 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE263) INT */

A_PROCEDURE(A68_INT ,A68t367,(struct A68t263 *,A68_INT ),(struct A68t263 *,A68_INT ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE263,INT) INT */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t222 ,struct A68t298 *,struct A68t301 *,struct A68t200 *),(struct A68t222 ,struct A68t298 *,struct A68t301 *,struct A68t200 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE222,REF MODE298,REF MODE301) MODE200 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t200 ,struct A68t301 *,struct A68t200 *),(struct A68t200 ,struct A68t301 *,struct A68t200 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE200,REF MODE301) MODE200 */

A_PROCEDURE(A68_BOOL ,A68t370,(struct A68t200 ,struct A68t200 ,struct A68t301 *,struct A68t301 *,A68_BOOL ),(struct A68t200 ,struct A68t200 ,struct A68t301 *,struct A68t301 *,A68_BOOL ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE200,MODE200,REF MODE301,REF MODE301,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t371,(struct A68t231 *,struct A68t301 *),(struct A68t231 *,struct A68t301 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE231,REF MODE301) INT */
struct A68t372{
struct A68t175  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(MODE175,BOOL)  */
struct A68t373{
struct A68t178 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t373  A68_373 ;    /* STRUCT(REF MODE178,BOOL)  */
struct A68t374{
struct A68t181 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(REF MODE181,BOOL)  */
struct A68t375{
struct A68t184  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t375  A68_375 ;    /* STRUCT(MODE184,BOOL)  */
struct A68t376{
struct A68t196 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE196,BOOL)  */
struct A68t377{
struct A68t197 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(REF MODE197,BOOL)  */
struct A68t378{
struct A68t199  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(MODE199,BOOL)  */
struct A68t379{
struct A68t198  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(MODE198,BOOL)  */
struct A68t380{
struct A68t203 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t381{
struct A68t200  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(MODE200,BOOL)  */
struct A68t382{
struct A68t211  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(MODE211,BOOL)  */
struct A68t383{
struct A68t214  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(REF MODE214,BOOL)  */
struct A68t384{
struct A68t213  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(MODE213,BOOL)  */
struct A68t385{
struct A68t215 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(REF MODE215,BOOL)  */
struct A68t386{
struct A68t221 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(REF MODE221,BOOL)  */
struct A68t387{
struct A68t226 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE226,BOOL)  */
struct A68t388{
struct A68t237 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE237,BOOL)  */
struct A68t389{
struct A68t282 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(REF MODE282,BOOL)  */
struct A68t390{
struct A68t222  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(MODE222,BOOL)  */
struct A68t391{
struct A68t266  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(MODE266,BOOL)  */
struct A68t392{
struct A68t264  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE264,BOOL)  */
struct A68t393{
struct A68t262  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(MODE262,BOOL)  */
struct A68t394{
struct A68t283  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(MODE283,BOOL)  */
struct A68t395{
struct A68t268 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t395  A68_395 ;    /* STRUCT(REF MODE268,BOOL)  */
struct A68t396{
struct A68t254 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE254,BOOL)  */
struct A68t397{
struct A68t255 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE255,BOOL)  */
struct A68t398{
struct A68t263 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(REF MODE263,BOOL)  */
struct A68t399{
struct A68t256 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(REF MODE256,BOOL)  */
struct A68t400{
struct A68t281 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(REF MODE281,BOOL)  */
struct A68t401{
struct A68t271  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(MODE271,BOOL)  */
struct A68t402{
struct A68t270 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(REF MODE270,BOOL)  */
struct A68t403{
struct A68t257 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t403  A68_403 ;    /* STRUCT(REF MODE257,BOOL)  */
struct A68t404{
struct A68t258 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(REF MODE258,BOOL)  */
struct A68t405{
struct A68t261 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t405  A68_405 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t406{
struct A68t252  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE252,BOOL)  */
struct A68t407{
struct A68t251 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t407  A68_407 ;    /* STRUCT(REF MODE251,BOOL)  */
struct A68t408{
struct A68t294  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(MODE294,BOOL)  */
struct A68t409{
struct A68t296  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t409  A68_409 ;    /* STRUCT(MODE296,BOOL)  */
struct A68t410{
struct A68t299  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t410  A68_410 ;    /* STRUCT(REF MODE299,BOOL)  */
struct A68t411{
struct A68t298 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t411  A68_411 ;    /* STRUCT(REF MODE298,BOOL)  */
struct A68t412{
struct A68t307  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t412  A68_412 ;    /* STRUCT(MODE307,BOOL)  */
struct A68t413{
struct A68t311 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t413  A68_413 ;    /* STRUCT(REF MODE311,BOOL)  */
struct A68t414 ;

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t175 ,struct A68t414 *,struct A68t372 *),(struct A68t175 ,struct A68t414 *,struct A68t372 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE175,REF MODE414) MODE372 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t178 *,struct A68t414 *,struct A68t373 *),(struct A68t178 *,struct A68t414 *,struct A68t373 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE178,REF MODE414) MODE373 */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t181 *,struct A68t414 *,struct A68t374 *),(struct A68t181 *,struct A68t414 *,struct A68t374 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE181,REF MODE414) MODE374 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t184 ,struct A68t414 *,struct A68t375 *),(struct A68t184 ,struct A68t414 *,struct A68t375 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE184,REF MODE414) MODE375 */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t196 *,struct A68t414 *,struct A68t376 *),(struct A68t196 *,struct A68t414 *,struct A68t376 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE196,REF MODE414) MODE376 */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t197 *,struct A68t414 *,struct A68t377 *),(struct A68t197 *,struct A68t414 *,struct A68t377 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE197,REF MODE414) MODE377 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t199 ,struct A68t414 *,struct A68t378 *),(struct A68t199 ,struct A68t414 *,struct A68t378 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE199,REF MODE414) MODE378 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t198 ,struct A68t414 *,struct A68t379 *),(struct A68t198 ,struct A68t414 *,struct A68t379 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE198,REF MODE414) MODE379 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t203 *,struct A68t414 *,struct A68t380 *),(struct A68t203 *,struct A68t414 *,struct A68t380 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE203,REF MODE414) MODE380 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t200 ,struct A68t414 *,struct A68t381 *),(struct A68t200 ,struct A68t414 *,struct A68t381 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE200,REF MODE414) MODE381 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t211 ,struct A68t414 *,struct A68t382 *),(struct A68t211 ,struct A68t414 *,struct A68t382 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE211,REF MODE414) MODE382 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t214 ,struct A68t414 *,struct A68t383 *),(struct A68t214 ,struct A68t414 *,struct A68t383 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE214,REF MODE414) MODE383 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t213 ,struct A68t414 *,struct A68t384 *),(struct A68t213 ,struct A68t414 *,struct A68t384 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE213,REF MODE414) MODE384 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t215 *,struct A68t414 *,struct A68t385 *),(struct A68t215 *,struct A68t414 *,struct A68t385 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE215,REF MODE414) MODE385 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t221 *,struct A68t414 *,struct A68t386 *),(struct A68t221 *,struct A68t414 *,struct A68t386 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(REF MODE221,REF MODE414) MODE386 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t226 *,struct A68t414 *,struct A68t387 *),(struct A68t226 *,struct A68t414 *,struct A68t387 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE226,REF MODE414) MODE387 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t237 *,struct A68t414 *,struct A68t388 *),(struct A68t237 *,struct A68t414 *,struct A68t388 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE237,REF MODE414) MODE388 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t282 *,struct A68t414 *,struct A68t389 *),(struct A68t282 *,struct A68t414 *,struct A68t389 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE282,REF MODE414) MODE389 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t222 ,struct A68t414 *,struct A68t390 *),(struct A68t222 ,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE222,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t266 ,struct A68t414 *,struct A68t391 *),(struct A68t266 ,struct A68t414 *,struct A68t391 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE266,REF MODE414) MODE391 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t264 ,struct A68t414 *,struct A68t392 *),(struct A68t264 ,struct A68t414 *,struct A68t392 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE264,REF MODE414) MODE392 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t262 ,struct A68t414 *,struct A68t393 *),(struct A68t262 ,struct A68t414 *,struct A68t393 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE262,REF MODE414) MODE393 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t283 ,struct A68t414 *,struct A68t394 *),(struct A68t283 ,struct A68t414 *,struct A68t394 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE283,REF MODE414) MODE394 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t268 *,struct A68t414 *,struct A68t395 *),(struct A68t268 *,struct A68t414 *,struct A68t395 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE268,REF MODE414) MODE395 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t254 *,struct A68t414 *,struct A68t396 *),(struct A68t254 *,struct A68t414 *,struct A68t396 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE254,REF MODE414) MODE396 */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t255 *,struct A68t414 *,struct A68t397 *),(struct A68t255 *,struct A68t414 *,struct A68t397 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE255,REF MODE414) MODE397 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t263 *,struct A68t414 *,struct A68t398 *),(struct A68t263 *,struct A68t414 *,struct A68t398 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE263,REF MODE414) MODE398 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t256 *,struct A68t414 *,struct A68t399 *),(struct A68t256 *,struct A68t414 *,struct A68t399 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE256,REF MODE414) MODE399 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t281 *,struct A68t414 *,struct A68t400 *),(struct A68t281 *,struct A68t414 *,struct A68t400 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE281,REF MODE414) MODE400 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t271 ,struct A68t414 *,struct A68t401 *),(struct A68t271 ,struct A68t414 *,struct A68t401 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE271,REF MODE414) MODE401 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t270 *,struct A68t414 *,struct A68t402 *),(struct A68t270 *,struct A68t414 *,struct A68t402 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE270,REF MODE414) MODE402 */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t257 *,struct A68t414 *,struct A68t403 *),(struct A68t257 *,struct A68t414 *,struct A68t403 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE257,REF MODE414) MODE403 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t258 *,struct A68t414 *,struct A68t404 *),(struct A68t258 *,struct A68t414 *,struct A68t404 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE258,REF MODE414) MODE404 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t261 *,struct A68t414 *,struct A68t405 *),(struct A68t261 *,struct A68t414 *,struct A68t405 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE261,REF MODE414) MODE405 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t252 ,struct A68t414 *,struct A68t406 *),(struct A68t252 ,struct A68t414 *,struct A68t406 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE252,REF MODE414) MODE406 */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t251 *,struct A68t414 *,struct A68t407 *),(struct A68t251 *,struct A68t414 *,struct A68t407 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE251,REF MODE414) MODE407 */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t294 ,struct A68t414 *,struct A68t408 *),(struct A68t294 ,struct A68t414 *,struct A68t408 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE294,REF MODE414) MODE408 */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t296 ,struct A68t414 *,struct A68t409 *),(struct A68t296 ,struct A68t414 *,struct A68t409 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE296,REF MODE414) MODE409 */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t299 ,struct A68t414 *,struct A68t410 *),(struct A68t299 ,struct A68t414 *,struct A68t410 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE299,REF MODE414) MODE410 */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t298 *,struct A68t414 *,struct A68t411 *),(struct A68t298 *,struct A68t414 *,struct A68t411 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE298,REF MODE414) MODE411 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t307 ,struct A68t414 *,struct A68t412 *),(struct A68t307 ,struct A68t414 *,struct A68t412 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE307,REF MODE414) MODE412 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t311 *,struct A68t414 *,struct A68t97 ,struct A68t413 *),(struct A68t311 *,struct A68t414 *,struct A68t97 ,struct A68t413 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE311,REF MODE414,MODE97) MODE413 */
struct A68t414{
struct A68t415  Attr;
struct A68t416  Attrstr;
struct A68t417  Attrdec;
struct A68t418  Formula;
struct A68t419  Formulas;
struct A68t420  Intdec;
struct A68t421  Range;
struct A68t422  Formularange;
struct A68t423  Tstr;
struct A68t424  Type;
struct A68t425  Alternative;
struct A68t426  Alternatives;
struct A68t427  Typebody;
struct A68t428  Typedec;
struct A68t429  Constdec;
struct A68t430  Ualts;
struct A68t431  Ustr;
struct A68t432  Uchoices;
struct A68t433  Unit;
struct A68t434  Mparam;
struct A68t435  Macparams;
struct A68t436  Instance;
struct A68t437  Declaration;
struct A68t438  Printitems;
struct A68t439  Print;
struct A68t440  Fault;
struct A68t441  Names;
struct A68t442  Let;
struct A68t443  Seqchoices;
struct A68t444  Seqstep;
struct A68t445  Sequence;
struct A68t446  Make;
struct A68t447  Join;
struct A68t448  Joins;
struct A68t449  Step;
struct A68t450  Series;
struct A68t451  Fnbody;
struct A68t452  Macspec;
struct A68t453  Macspecs;
struct A68t454  Fndec;
struct A68t455  Outer;
struct A68t456  Closure;
struct A68t414 * Rest;
};
typedef struct A68t414  A68_414 ;    /* STRUCT(MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456,REF MODE414)  */
struct A68t458 ;

A_PROCEDURE(struct A68t414 *,A68t457,(struct A68t414 *,struct A68t458 ),(struct A68t414 *,struct A68t458 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE414,MODE458) REF MODE414 */
A_VECTOR(struct A68t459 ,A68t458);
typedef struct A68t458  A68_458 ;    /* VECTOR [] MODE459 */
struct A68t459 { A68_INT mode; union {
struct A68t415  mode1;
struct A68t416  mode2;
struct A68t417  mode3;
struct A68t418  mode4;
struct A68t419  mode5;
struct A68t420  mode6;
struct A68t421  mode7;
struct A68t422  mode8;
struct A68t423  mode9;
struct A68t424  mode10;
struct A68t425  mode11;
struct A68t426  mode12;
struct A68t427  mode13;
struct A68t428  mode14;
struct A68t429  mode15;
struct A68t430  mode16;
struct A68t431  mode17;
struct A68t432  mode18;
struct A68t433  mode19;
struct A68t434  mode20;
struct A68t435  mode21;
struct A68t436  mode22;
struct A68t437  mode23;
struct A68t438  mode24;
struct A68t439  mode25;
struct A68t440  mode26;
struct A68t441  mode27;
struct A68t442  mode28;
struct A68t443  mode29;
struct A68t444  mode30;
struct A68t445  mode31;
struct A68t446  mode32;
struct A68t447  mode33;
struct A68t448  mode34;
struct A68t449  mode35;
struct A68t450  mode36;
struct A68t451  mode37;
struct A68t452  mode38;
struct A68t453  mode39;
struct A68t454  mode40;
struct A68t455  mode41;
struct A68t456  mode42;
} data; };
typedef struct A68t459  A68_459 ;    /* UNION(MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456)  */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t414 *),(struct A68t414 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE414) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 56 CHAR */
struct A68t464{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_148)
struct A68t184  Scale;
A68_INT  Rate;
A_PAD_INT(PAD_149)
};
typedef struct A68t464  A68_464 ;    /* STRUCT(BOOL,MODE184,INT)  */
struct A68t465{
A68_BOOL  Scaled;
A_PAD_BOOL(PAD_150)
A68_BOOL  Withtime;
A_PAD_BOOL(PAD_151)
A68_INT  Newclosno;
A_PAD_INT(PAD_152)
struct A68t464 * Scales;
};
typedef struct A68t465  A68_465 ;    /* STRUCT(BOOL,BOOL,INT,REF MODE464)  */
A_ISTRUCT(A68_CHAR ,7,A68t466);
typedef struct A68t466  A68_466 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t467,(A68_INT ,struct A68t307 *),(A68_INT ,struct A68t307 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(INT) MODE307 */

A_PROCEDURE(A68_VOID ,A68t468,(A68_BOOL ,struct A68t299 *),(A68_BOOL ,struct A68t299 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(BOOL) MODE299 */

A_PROCEDURE(A68_VOID ,A68t469,(A68_BOOL ,struct A68t300 *),(A68_BOOL ,struct A68t300 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(BOOL) MODE300 */

A_PROCEDURE(A68_VOID ,A68t470,(A68_BOOL ,struct A68t303 *),(A68_BOOL ,struct A68t303 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(BOOL) MODE303 */
A_ISTRUCT(A68_CHAR ,3,A68t471);
typedef struct A68t471  A68_471 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t472,(A68_BOOL ,struct A68t304 *),(A68_BOOL ,struct A68t304 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(BOOL) MODE304 */
A_ISTRUCT(A68_CHAR ,2,A68t473);
typedef struct A68t473  A68_473 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t474,(A68_BOOL ,struct A68t305 *),(A68_BOOL ,struct A68t305 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(BOOL) MODE305 */

A_PROCEDURE(A68_VOID ,A68t475,(A68_BOOL ,struct A68t306 *),(A68_BOOL ,struct A68t306 *,void *));
typedef struct A68t475  A68_475 ;    /* PROC(BOOL) MODE306 */

A_PROCEDURE(struct A68t298 *,A68t476,(A68_INT ),(A68_INT ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(INT) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t477,(A68_INT ,struct A68t200 ,struct A68t222 ,struct A68t184 ,struct A68t184 ,struct A68t262 *),(A68_INT ,struct A68t200 ,struct A68t222 ,struct A68t184 ,struct A68t184 ,struct A68t262 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(INT,MODE200,MODE222,MODE184,MODE184) MODE262 */

A_PROCEDURE(A68_VOID ,A68t478,(A68_BOOL ,struct A68t264 *),(A68_BOOL ,struct A68t264 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(BOOL) MODE264 */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t184 ,struct A68t414 *,struct A68t184 ,struct A68t283 ,struct A68t375 *),(struct A68t184 ,struct A68t414 *,struct A68t184 ,struct A68t283 ,struct A68t375 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE184,REF MODE414,MODE184,MODE283) MODE375 */

A_PROCEDURE(A68_VOID ,A68t480,(struct A68t263 *,struct A68t222 *),(struct A68t263 *,struct A68t222 *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE263) MODE222 */

A_PROCEDURE(struct A68t464 *,A68t481,(A68_BOOL ,struct A68t184 ,A68_INT ),(A68_BOOL ,struct A68t184 ,A68_INT ,void *));
typedef struct A68t481  A68_481 ;    /* PROC(BOOL,MODE184,INT) REF MODE464 */

A_PROCEDURE(A68_VOID ,A68t482,(struct A68t184 ,struct A68t184 ,struct A68t184 *),(struct A68t184 ,struct A68t184 ,struct A68t184 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(MODE184,MODE184) MODE184 */
A_VECTOR(struct A68t465 *,A68t483);
typedef struct A68t483  A68_483 ;    /* VECTOR [] REF MODE465 */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t307 ,struct A68t414 *,struct A68t483 ,struct A68t465 **,A68_INT ,struct A68t412 *),(struct A68t307 ,struct A68t414 *,struct A68t483 ,struct A68t465 **,A68_INT ,struct A68t412 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE307,REF MODE414,REF MODE483,REF REF MODE465,INT) MODE412 */
A_VECTOR(struct A68t464 *,A68t485);
typedef struct A68t485  A68_485 ;    /* VECTOR [] REF MODE464 */

A_PROCEDURE(A68_VOID ,A68t486,(A68_BOOL ,struct A68t485 *),(A68_BOOL ,struct A68t485 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(BOOL) MODE485 */

A_PROCEDURE(A68_VOID ,A68t487,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t487  A68_487 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t262 ,struct A68t414 *,A68_INT *,struct A68t485 ,struct A68t393 *),(struct A68t262 ,struct A68t414 *,A68_INT *,struct A68t485 ,struct A68t393 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(MODE262,REF MODE414,REF INT,REF MODE485) MODE393 */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t294 ,struct A68t414 *,A68_INT ,struct A68t298 *,A68_INT *,struct A68t408 *),(struct A68t294 ,struct A68t414 *,A68_INT ,struct A68t298 *,A68_INT *,struct A68t408 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE294,REF MODE414,INT,REF MODE298,REF INT) MODE408 */
A_ISTRUCT(A68_CHAR ,33,A68t490);
typedef struct A68t490  A68_490 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t298 *,struct A68t414 *,A68_INT ,struct A68t411 *),(struct A68t298 *,struct A68t414 *,A68_INT ,struct A68t411 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF MODE298,REF MODE414,INT) MODE411 */
A_ISTRUCT(struct A68t459 ,4,A68t492);
typedef struct A68t492  A68_492 ;    /* STRUCT 4 MODE459 */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t307 ,A68_INT ,struct A68t465 *,struct A68t307 ,struct A68t307 *),(struct A68t307 ,A68_INT ,struct A68t465 *,struct A68t307 ,struct A68t307 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE307,INT,REF MODE465,MODE307) MODE307 */
A_ISTRUCT(A68_CHAR ,17,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t311 *,struct A68t97 ,struct A68t413 *),(struct A68t311 *,struct A68t97 ,struct A68t413 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(REF MODE311,MODE97) MODE413 */

A_PROCEDURE(A68_VOID ,A68t496,(A68_BOOL ,struct A68t483 *),(A68_BOOL ,struct A68t483 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(BOOL) MODE483 */

A_PROCEDURE(A68_VOID ,A68t497,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t497  A68_497 ;    /* PROC(MODE307) VOID */

A_PROCEDURE(A68_INT ,A68t498,(struct A68t294 ),(struct A68t294 ,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE294) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_414 * THJATRN_make_newtprocs(struct A68t414 *,struct A68t458 );
extern A68_414 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_185 * NNMATRN_makefint(A68_INT );
extern A68_INT  XOMATRN_int(struct A68t184 );
extern A68_298 * CQMATRN_get_outerfn(struct A68t307 );
extern A68_204 * MUNATRN_fndec_tfn(struct A68t298 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t222 ,struct A68t298 *,struct A68t301 *,A68_200 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t311 *);
extern A68_308 * ELCATRN_find_outers(A68_INT ,struct A68t311 *,struct A68t97 );
extern A68_INT  ENCATRN_reserve_next_closureno(struct A68t311 *);
extern A68_308 ** KNCATRN_insert_outer(struct A68t307 ,struct A68t308 **,struct A68t311 *,struct A68t97 );
extern A68_VOID  RNCATRN_free_outers(struct A68t308 **,struct A68t311 *,struct A68t97 );
extern A68_INT  GOCATRN_garbage_collect_closure(struct A68t311 *,struct A68t97 );
extern A68_311 * DPCATRN_copy_closure(struct A68t311 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_237 * IAAATRN_nilustr;
extern A68_263 * NAAATRN_nilnames;
extern A68_264  ABAATRN_nilmacparams;
extern A68_182 * CBAATRN_nilusage;
extern A68_299  FBAATRN_nilmacspecs;
extern A68_308 * HBAATRN_nilouters;
extern A68_299  GCAATRN_nullmacspecs;
extern A68_302  MCAATRN_nullattrdecs;
extern A68_188 * OEAATRN_makefname(A68_INT );
extern A68_195 * DFAATRN_makeformulatag(struct A68t184 );
extern A68_201 * IFAATRN_maketname(A68_INT );
extern A68_209 * XFAATRN_maketypetag(struct A68t200 );
extern A68_216 * CGAATRN_makecname(A68_INT );
extern A68_205 * HGAATRN_makectype(struct A68t200 );
extern A68_267 * WGAATRN_makeunittag(struct A68t222 );
extern A68_193 * NFAATRN_maketmacpar(A68_INT );
extern A68_180  ZHAATRN_attrnull;
extern A68_194  BIAATRN_fnull;
extern A68_208  DIAATRN_tnull;
extern A68_295  LIAATRN_bodynull;
#define AJAATRN_explicitmacpar 0
#define OJAATRN_fmult 3
#define PJAATRN_fidiv 4
#define JKAATRN_int2 2
#define KKAATRN_usource 1
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define QKAATRN_macpardec 3
#define VKAATRN_outerfn 5
extern A68_38  ZLAATRN_makeid;
/* --- End of imports from assmodes --- */


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
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_463   FPABTRN = {"$Id: timescale.a68,v 34.2 1995/03/29 13:03:06 ella Exp $"}; 
A_GISVEC(A68_VC ,GPABTRN,FPABTRN,56)
#define HPABTRN_timescale 8
#define IPABTRN_sftimescale 10
#define JPABTRN_nilscale (A68_464 *)A68_NIL
#define KPABTRN_nilinfo (A68_465 *)A68_NIL
static A68_466   PPABTRN = {"_SAMPLE"}; 
A_GISVEC(A68_VC ,RPABTRN,PPABTRN,7)
static A68_VC  TPABTRN_samplename;
static A68_466   YPABTRN = {"_period"}; 
A_GISVEC(A68_VC ,AQABTRN,YPABTRN,7)
static A68_VC  CQABTRN_periodname;
static A68_471   BTABTRN = {"int"}; 
A_GISVEC(A68_VC ,CTABTRN,BTABTRN,3)
static A68_114   KTABTRN = {"skew"}; 
A_GISVEC(A68_VC ,LTABTRN,KTABTRN,4)
static A68_473   BUABTRN = {"ty"}; 
A_GISVEC(A68_VC ,CUABTRN,BUABTRN,2)
static A68_114   UUABTRN = {"init"}; 
A_GISVEC(A68_VC ,VUABTRN,UUABTRN,4)
static A68_490   IIBBTRN = {"SEQPVAR must be have been removed"}; 
A_GISVEC(A68_VC ,JIBBTRN,IIBBTRN,33)
static A68_494   TPBBTRN = {"not INT parameter"}; 
A_GISVEC(A68_VC ,UPBBTRN,TPBBTRN,17)
#define QRBBTRN_nothing 3
#define RRBBTRN_scaled 1
#define SRBBTRN_withtime 2
typedef struct   /* env of non-global proc */
{
int dummy;
} LQABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RRABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VSABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VTABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OUABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GVABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AWABTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HXABTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_306 * HBBBTRN_envfns;
} LBBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * RBBBTRN_envchanged;
A68_306 * HBBBTRN_envfns;
A68_INT  Sampleclosureno;
A_PAD_INT(PAD_154)
} VBBBTRN_newenviron;
typedef struct   /* env of non-global proc */
{
A68_487  TBBBTRN_newenviron;
A68_301 * GBBBTRN_env;
A68_INT * QBBBTRN_maxintno;
} RCBBTRN_instance_scale;
typedef struct   /* env of non-global proc */
{
A68_INT * QBBBTRN_maxintno;
A68_487  TBBBTRN_newenviron;
A68_485  PBBBTRN_environscales;
A68_301 * GBBBTRN_env;
} JEBBTRN_fnbody_scale;
typedef struct   /* env of non-global proc */
{
A68_INT * QBBBTRN_maxintno;
A68_489  HEBBTRN_fnbody_scale;
A68_488  PCBBTRN_instance_scale;
A68_485  PBBBTRN_environscales;
A68_437 * DIBBTRN_declaration_scale;
A68_465 ** Outerfn_info;
} RIBBTRN_fndec_scale;
typedef struct   /* env of non-global proc */
{
A68_301 * GBBBTRN_env;
A68_491  PIBBTRN_fndec_scale;
A68_487  TBBBTRN_newenviron;
} JLBBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * QBBBTRN_maxintno;
} SMBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_184  IOBBTRN_outerfn_rate;
A68_283  MOBBTRN_decl;
} ROBBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_303  GPBBTRN_ints;
} KPBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LOBBTRN_upb;
A_PAD_INT(PAD_158)
} YPBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_311 * Oldclose;
} TQBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_483  XQBBTRN_closureinfo;
A68_311 ** PQBBTRN_newclosure;
A68_497  DRBBTRN_trace_uses;
A68_311 * Oldclose;
A68_97  Msg;
} FRBBTRN_trace_uses;
typedef struct   /* env of non-global proc */
{
A68_498  URBBTRN_fnbody_sort;
} WRBBTRN_fnbody_sort;
typedef struct   /* env of non-global proc */
{
A68_306 * HBBBTRN_envfns;
A68_INT  YBBBTRN_inc;
A_PAD_INT(PAD_153)
} CCBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WCBBTRN_upb;
A_PAD_INT(PAD_155)
} ADBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_489  HEBBTRN_fnbody_scale;
A68_INT  Fnno;
A_PAD_INT(PAD_156)
A68_298 * Fdec;
A68_INT * SIBBTRN_rate;
} BJBBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_488  PCBBTRN_instance_scale;
A68_INT * SIBBTRN_rate;
A68_485  PBBBTRN_environscales;
} KJBBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_437 * DIBBTRN_declaration_scale;
} TJBBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  FKBBTRN_upb;
A_PAD_INT(PAD_157)
} JKBBTRN_generator;

A_STATIC A68_VOID  MPABTRN_generator(A68_BOOL  LPABTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VPABTRN_generator(A68_BOOL  UPABTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EQABTRN_sample_outer(A68_INT  Closureno, A68_307  *ReturnedValue);

A_STATIC A68_VOID  KQABTRN_generator(A68_BOOL  IQABTRN_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QRABTRN_generator(A68_BOOL  ORABTRN_anonymous, A68_300  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  USABTRN_generator(A68_BOOL  SSABTRN_anonymous, A68_303  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UTABTRN_generator(A68_BOOL  STABTRN_anonymous, A68_304  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NUABTRN_generator(A68_BOOL  LUABTRN_anonymous, A68_305  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FVABTRN_generator(A68_BOOL  DVABTRN_anonymous, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_298 * SVABTRN_sample_fndec(A68_INT  Closureno);

A_STATIC A68_VOID  ZVABTRN_generator(A68_BOOL  XVABTRN_anonymous, A68_300  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DXABTRN_make_sample_inst(A68_INT  Fnno, A68_200  Ty, A68_222  Init, A68_184  Rate, A68_184  Skew, A68_262  *ReturnedValue);

A_STATIC A68_VOID  GXABTRN_generator(A68_BOOL  EXABTRN_anonymous, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NYABTRN_fmacpar_remove(A68_184  F, A68_414 * Tprocs, A68_184  Period, A68_283  Decl, A68_375  *ReturnedValue);

A_STATIC A68_VOID  ZYABTRN_terminals_unit(A68_263 * Inputs, A68_222  *ReturnedValue);

A_STATIC A68_464 * QZABTRN_scaled(A68_BOOL  Faster, A68_184  Scale, A68_INT  Rate);

A_STATIC A68_VOID  AABBTRN_multiply(A68_184  Fa, A68_184  Fb, A68_184  *ReturnedValue);

A_STATIC A68_VOID  KABBTRN_divide(A68_184  Fa, A68_184  Fb, A68_184  *ReturnedValue);

A_STATIC A68_INT  SABBTRN_lcm(A68_INT  A, A68_INT  B);

A_STATIC A68_VOID  FBBBTRN_outerfn_scale(A68_307  Ofn, A68_414 * Tprocs, A68_483  Closureinfo, A68_465 ** Outerfn_info, A68_INT  Sampleclosureno, A68_412  *ReturnedValue);

A_STATIC A68_VOID  KBBBTRN_generator(A68_BOOL  IBBBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UBBBTRN_newenviron(A68_BOOL  Add_sample, void *NonLocals);

A_STATIC A68_VOID  BCBBTRN_generator(A68_BOOL  ZBBBTRN_anonymous, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QCBBTRN_instance_scale(A68_262  Inst, A68_414 * Tprocs, A68_INT * Rate, A68_485  Scales, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZCBBTRN_generator(A68_BOOL  XCBBTRN_anonymous, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IEBBTRN_fnbody_scale(A68_294  Fnbody, A68_414 * Tprocs, A68_INT  Fnno, A68_298 * Fdec, A68_INT * Rate, A68_408  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GIBBTRN_seqstep_fault(A68_271  S, A68_414 * Tprocs, A68_401  *ReturnedValue);

A_STATIC A68_VOID  QIBBTRN_fndec_scale(A68_298 * Fdec, A68_414 * Tprocs, A68_INT  Fnno, A68_411  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AJBBTRN_anonymous(A68_294  Body, A68_414 * Tprocs, A68_408  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JJBBTRN_anonymous(A68_262  Inst, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SJBBTRN_anonymous(A68_283  Dec, A68_414 * Tprocs, A68_394  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IKBBTRN_generator(A68_BOOL  GKBBTRN_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ILBBTRN_anonymous(A68_283  Decl, A68_414 * Tprocs, A68_394  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RMBBTRN_generator(A68_BOOL  PMBBTRN_anonymous, A68_303  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YNBBTRN_simulate_fn(A68_307  O, A68_INT  Newclosureno, A68_465 * Info, A68_307  Original, A68_307  *ReturnedValue);

A_STATIC A68_VOID  QOBBTRN_anonymous(A68_184  F, A68_414 * Tprocs, A68_375  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JPBBTRN_generator(A68_BOOL  HPBBTRN_anonymous, A68_303  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XPBBTRN_generator(A68_BOOL  VPBBTRN_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A68_VOID  NQBBTRN_transform_timescale(A68_311 * Oldclose, A68_97  Msg, A68_413  *ReturnedValue);

A_STATIC A68_VOID  SQBBTRN_generator(A68_BOOL  QQBBTRN_anonymous, A68_483  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ERBBTRN_trace_uses(A68_307  Ofn, void *NonLocals);

A_STATIC A68_INT  VRBBTRN_fnbody_sort(A68_294  Fbody, void *NonLocals);

A_STATIC A68_VOID  BCBBTRN_generator(A68_BOOL  ZBBBTRN_anonymous, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((CCBBTRN_generator *)NonLocals)->x)
{ 
A68_306  DCBBTRN;  /* clause result */
A68_306  ECBBTRN;  /* OPERATORS - dynamic generator */
{ 
ECBBTRN.upb = ((*NL(HBBBTRN_envfns)).upb+NL(YBBBTRN_inc)) ;
( ZBBBTRN_anonymous? A_VLOC(A68_298 *,ECBBTRN): A_VHEAP(A68_298 *,ECBBTRN) );
DCBBTRN = ECBBTRN;
} 
*ReturnedValue = (DCBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCBBTRN_generator(A68_BOOL  XCBBTRN_anonymous, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((ADBBTRN_generator *)NonLocals)->x)
{ 
A68_264  BDBBTRN;  /* clause result */
A68_264  CDBBTRN;  /* OPERATORS - dynamic generator */
{ 
CDBBTRN.upb = NL(WCBBTRN_upb) ;
( XCBBTRN_anonymous? A_VLOC(A68_265 ,CDBBTRN): A_VHEAP(A68_265 ,CDBBTRN) );
BDBBTRN = CDBBTRN;
} 
*ReturnedValue = (BDBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AJBBTRN_anonymous(A68_294  Body, A68_414 * Tprocs, A68_408  *ReturnedValue, void *NonLocals)
#define NL(x) (((BJBBTRN_anonymous *)NonLocals)->x)
{ 
A68_408  CJBBTRN;  /* clause result */
A68_408  DJBBTRN;  /* avoid structure result */
 /* line 399: */
A_CALLPROC(NL(HEBBTRN_fnbody_scale),(Body, Tprocs, NL(Fnno), NL(Fdec), NL(SIBBTRN_rate), &DJBBTRN),(Body, Tprocs, NL(Fnno), NL(Fdec), NL(SIBBTRN_rate), &DJBBTRN,(NL(HEBBTRN_fnbody_scale)).nonlocals));
CJBBTRN = DJBBTRN;
*ReturnedValue = (CJBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JJBBTRN_anonymous(A68_262  Inst, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((KJBBTRN_anonymous *)NonLocals)->x)
{ 
A68_393  LJBBTRN;  /* clause result */
A68_393  MJBBTRN;  /* avoid structure result */
 /* line 401: */
A_CALLPROC(NL(PCBBTRN_instance_scale),(Inst, Tprocs, NL(SIBBTRN_rate), NL(PBBBTRN_environscales), &MJBBTRN),(Inst, Tprocs, NL(SIBBTRN_rate), NL(PBBBTRN_environscales), &MJBBTRN,(NL(PCBBTRN_instance_scale)).nonlocals));
LJBBTRN = MJBBTRN;
*ReturnedValue = (LJBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SJBBTRN_anonymous(A68_283  Dec, A68_414 * Tprocs, A68_394  *ReturnedValue, void *NonLocals)
#define NL(x) (((TJBBTRN_anonymous *)NonLocals)->x)
{ 
A68_394  UJBBTRN;  /* clause result */
A68_394  VJBBTRN;  /* avoid structure result */
 /* line 403: */
 /* line 404: */
A_CALLPROC((*NL(DIBBTRN_declaration_scale)),(Dec, Tprocs, &VJBBTRN),(Dec, Tprocs, &VJBBTRN,((*NL(DIBBTRN_declaration_scale))).nonlocals));
UJBBTRN = VJBBTRN;
*ReturnedValue = (UJBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IKBBTRN_generator(A68_BOOL  GKBBTRN_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((JKBBTRN_generator *)NonLocals)->x)
{ 
A68_299  KKBBTRN;  /* clause result */
A68_299  LKBBTRN;  /* OPERATORS - dynamic generator */
{ 
LKBBTRN.upb = (NL(FKBBTRN_upb)+1) ;
( GKBBTRN_anonymous? A_VLOC(A68_296 ,LKBBTRN): A_VHEAP(A68_296 ,LKBBTRN) );
KKBBTRN = LKBBTRN;
} 
*ReturnedValue = (KKBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KQABTRN_generator(A68_BOOL  IQABTRN_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((LQABTRN_generator *)NonLocals)->x)
{ 
A68_299  MQABTRN;  /* clause result */
A68_299  NQABTRN;  /* OPERATORS - dynamic generator */
{ 
NQABTRN.upb = 4 ;
( IQABTRN_anonymous? A_VLOC(A68_296 ,NQABTRN): A_VHEAP(A68_296 ,NQABTRN) );
MQABTRN = NQABTRN;
} 
*ReturnedValue = (MQABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QRABTRN_generator(A68_BOOL  ORABTRN_anonymous, A68_300  *ReturnedValue, void *NonLocals)
#define NL(x) (((RRABTRN_generator *)NonLocals)->x)
{ 
A68_300  SRABTRN;  /* clause result */
A68_300  TRABTRN;  /* OPERATORS - dynamic generator */
{ 
TRABTRN.upb = 2 ;
( ORABTRN_anonymous? A_VLOC(A68_297 ,TRABTRN): A_VHEAP(A68_297 ,TRABTRN) );
SRABTRN = TRABTRN;
} 
*ReturnedValue = (SRABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  USABTRN_generator(A68_BOOL  SSABTRN_anonymous, A68_303  *ReturnedValue, void *NonLocals)
#define NL(x) (((VSABTRN_generator *)NonLocals)->x)
{ 
A68_303  WSABTRN;  /* clause result */
A68_303  XSABTRN;  /* OPERATORS - dynamic generator */
{ 
XSABTRN.upb = 2 ;
( SSABTRN_anonymous? A_VLOC(A68_197 *,XSABTRN): A_VHEAP(A68_197 *,XSABTRN) );
WSABTRN = XSABTRN;
} 
*ReturnedValue = (WSABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UTABTRN_generator(A68_BOOL  STABTRN_anonymous, A68_304  *ReturnedValue, void *NonLocals)
#define NL(x) (((VTABTRN_generator *)NonLocals)->x)
{ 
A68_304  WTABTRN;  /* clause result */
A68_304  XTABTRN;  /* OPERATORS - dynamic generator */
{ 
XTABTRN.upb = 1 ;
( STABTRN_anonymous? A_VLOC(A68_215 *,XTABTRN): A_VHEAP(A68_215 *,XTABTRN) );
WTABTRN = XTABTRN;
} 
*ReturnedValue = (WTABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NUABTRN_generator(A68_BOOL  LUABTRN_anonymous, A68_305  *ReturnedValue, void *NonLocals)
#define NL(x) (((OUABTRN_generator *)NonLocals)->x)
{ 
A68_305  PUABTRN;  /* clause result */
A68_305  QUABTRN;  /* OPERATORS - dynamic generator */
{ 
QUABTRN.upb = 1 ;
( LUABTRN_anonymous? A_VLOC(A68_221 *,QUABTRN): A_VHEAP(A68_221 *,QUABTRN) );
PUABTRN = QUABTRN;
} 
*ReturnedValue = (PUABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FVABTRN_generator(A68_BOOL  DVABTRN_anonymous, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((GVABTRN_generator *)NonLocals)->x)
{ 
A68_306  HVABTRN;  /* clause result */
A68_306  IVABTRN;  /* OPERATORS - dynamic generator */
{ 
IVABTRN.upb = 1 ;
( DVABTRN_anonymous? A_VLOC(A68_298 *,IVABTRN): A_VHEAP(A68_298 *,IVABTRN) );
HVABTRN = IVABTRN;
} 
*ReturnedValue = (HVABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVABTRN_generator(A68_BOOL  XVABTRN_anonymous, A68_300  *ReturnedValue, void *NonLocals)
#define NL(x) (((AWABTRN_generator *)NonLocals)->x)
{ 
A68_300  BWABTRN;  /* clause result */
A68_300  CWABTRN;  /* OPERATORS - dynamic generator */
{ 
CWABTRN.upb = 2 ;
( XVABTRN_anonymous? A_VLOC(A68_297 ,CWABTRN): A_VHEAP(A68_297 ,CWABTRN) );
BWABTRN = CWABTRN;
} 
*ReturnedValue = (BWABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GXABTRN_generator(A68_BOOL  EXABTRN_anonymous, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((HXABTRN_generator *)NonLocals)->x)
{ 
A68_264  IXABTRN;  /* clause result */
A68_264  JXABTRN;  /* OPERATORS - dynamic generator */
{ 
JXABTRN.upb = 4 ;
( EXABTRN_anonymous? A_VLOC(A68_265 ,JXABTRN): A_VHEAP(A68_265 ,JXABTRN) );
IXABTRN = JXABTRN;
} 
*ReturnedValue = (IXABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KBBBTRN_generator(A68_BOOL  IBBBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals)
#define NL(x) (((LBBBTRN_generator *)NonLocals)->x)
{ 
A68_485  MBBBTRN;  /* clause result */
A68_485  NBBBTRN;  /* OPERATORS - dynamic generator */
{ 
NBBBTRN.upb = (*NL(HBBBTRN_envfns)).upb ;
( IBBBTRN_anonymous? A_VLOC(A68_464 *,NBBBTRN): A_VHEAP(A68_464 *,NBBBTRN) );
MBBBTRN = NBBBTRN;
} 
*ReturnedValue = (MBBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UBBBTRN_newenviron(A68_BOOL  Add_sample, void *NonLocals)
#define NL(x) (((VBBBTRN_newenviron *)NonLocals)->x)
{ 
A68_BOOL  WBBBTRN;  /* optbool result */
A68_INT  XBBBTRN;  /* clause result */
A68_INT  YBBBTRN_inc;
A68_475  ACBBTRN_generator;   /* proc value of non-global proc */
A68_306  FCBBTRN;  /* avoid structure result */
A68_306  GCBBTRN_newenvfns;
A68_306  HCBBTRN;  /* OPERATORS - trim index */
A68_306  ICBBTRN;  /* YIELD */
A68_INT  JCBBTRN;  /* YIELD */
A68_298 ** KCBBTRN;  /* YIELD */
A_PROC_ENTRY(newenviron);
 /* line 265: */
 /* line 270: */
{ 
 /* line 271: */
WBBBTRN = !(*NL(RBBBTRN_envchanged));
if ( ! WBBBTRN )
{WBBBTRN = Add_sample;
}
if ( WBBBTRN )
{ 
(*NL(RBBBTRN_envchanged)) = A68_TRUE;
 /* line 272: */
if ( Add_sample )
{ 
XBBBTRN = 1;
} 
else
{ 
XBBBTRN = 0;
} 
YBBBTRN_inc = XBBBTRN;
 /* line 273: */
A_CLOSURE( ACBBTRN_generator, BCBBTRN_generator, CCBBTRN_generator );
(( CCBBTRN_generator * ) ( ACBBTRN_generator.nonlocals )) -> HBBBTRN_envfns = NL(HBBBTRN_envfns);
(( CCBBTRN_generator * ) ( ACBBTRN_generator.nonlocals )) -> YBBBTRN_inc = YBBBTRN_inc;
A_CALLPROC(ACBBTRN_generator,(A68_FALSE, &FCBBTRN),(A68_FALSE, &FCBBTRN,(ACBBTRN_generator).nonlocals));
GCBBTRN_newenvfns = FCBBTRN;
 /* line 274: */
ICBBTRN = A_VTRIM(HCBBTRN,(GCBBTRN_newenvfns),A_VTSCRIPT(&(HCBBTRN.upb),(GCBBTRN_newenvfns).upb,1,(*NL(HBBBTRN_envfns)).upb)) ;
A_VASSIGN2((*NL(HBBBTRN_envfns)),ICBBTRN,A68_298 *);
 /* line 275: */
 /* line 276: */
(*NL(HBBBTRN_envfns)) = GCBBTRN_newenvfns;
} 
 /* line 277: */
 /* line 278: */
if ( Add_sample )
{ 
 /* line 279: */
 /* line 280: */
JCBBTRN = (*NL(HBBBTRN_envfns)).upb ;
KCBBTRN = (&A_VINDEX((*NL(HBBBTRN_envfns)),JCBBTRN)) ;
(*KCBBTRN) = SVABTRN_sample_fndec(NL(Sampleclosureno));
} 
} 
A_PROC_EXIT(newenviron);
return;
} 
#undef NL
 /* line 284: */

A_STATIC A68_VOID  QCBBTRN_instance_scale(A68_262  Inst, A68_414 * Tprocs, A68_INT * Rate, A68_485  Scales, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((RCBBTRN_instance_scale *)NonLocals)->x)
{ 
A68_INT  SCBBTRN;  /* YIELD */
A68_464 * TCBBTRN_scale;
A68_264  UCBBTRN_params;
A68_INT  VCBBTRN;  /* clause result */
A68_INT  WCBBTRN_upb;
A68_478  YCBBTRN_generator;   /* proc value of non-global proc */
A68_264  DDBBTRN;  /* avoid structure result */
A68_264  EDBBTRN_newmacparams;
A68_264  FDBBTRN;  /* OPERATORS - trim index */
A68_264  GDBBTRN;  /* YIELD */
A68_298 * HDBBTRN_idec;
A68_306  IDBBTRN;  /* OPERATORS - simple index */
A68_INT  JDBBTRN;  /* YIELD */
A68_BOOL * KDBBTRN;  /* YIELD */
A68_306  LDBBTRN;  /* OPERATORS - simple index */
A68_INT  MDBBTRN;  /* YIELD */
A68_298 ** NDBBTRN;  /* YIELD */
A68_184  ODBBTRN;  /* OPERATORS - mode -> union mode */
A68_188 * PDBBTRN;  /* YIELD */
A68_184  QDBBTRN_fn_rate;
A68_184  RDBBTRN;  /* clause result */
A68_184  SDBBTRN;  /* avoid structure result */
A68_184  TDBBTRN;  /* avoid structure result */
A68_184  UDBBTRN_inst_rate;
A68_265  VDBBTRN;  /* collateral clause result */
A68_266  WDBBTRN;  /* OPERATORS - mode -> union mode */
A68_195  XDBBTRN;  /* YIELD */
A68_265 * YDBBTRN;  /* YIELD */
A68_393  ZDBBTRN;  /* collateral clause result */
A68_393  AEBBTRN;  /* clause result */
A68_393  BEBBTRN;  /* collateral clause result */
A_PROC_ENTRY(instance_scale);
 /* line 285: */
 /* line 286: */
{ 
SCBBTRN = Inst.Fnno ;
TCBBTRN_scale = (*(&A_VINDEX(Scales,SCBBTRN)));
 /* line 288: */
 /* line 289: */
if ( (TCBBTRN_scale!=JPABTRN_nilscale) )
{ 
(*Rate) = SABBTRN_lcm((*Rate), (*(&(TCBBTRN_scale->Rate))));
 /* line 291: */
UCBBTRN_params = Inst.Macparams;
 /* line 292: */
if ( ! A_VSTRUCTCOMP(UCBBTRN_params,ABAATRN_nilmacparams) )
{ 
VCBBTRN = (UCBBTRN_params.upb+1);
} 
else
{ 
VCBBTRN = 1;
} 
WCBBTRN_upb = VCBBTRN;
 /* line 293: */
A_CLOSURE( YCBBTRN_generator, ZCBBTRN_generator, ADBBTRN_generator );
(( ADBBTRN_generator * ) ( YCBBTRN_generator.nonlocals )) -> WCBBTRN_upb = WCBBTRN_upb;
A_CALLPROC(YCBBTRN_generator,(A68_FALSE, &DDBBTRN),(A68_FALSE, &DDBBTRN,(YCBBTRN_generator).nonlocals));
EDBBTRN_newmacparams = DDBBTRN;
 /* line 294: */
if ( (WCBBTRN_upb>1) )
{ 
GDBBTRN = A_VTRIM(FDBBTRN,(EDBBTRN_newmacparams),A_VTSCRIPT(&(FDBBTRN.upb),(EDBBTRN_newmacparams).upb,1,(WCBBTRN_upb-1))) ;
A_VASSIGN2(UCBBTRN_params,GDBBTRN,A68_265 );
} 
 /* line 296: */
A_CALLPROC(NL(TBBBTRN_newenviron),(A68_FALSE),(A68_FALSE,(NL(TBBBTRN_newenviron)).nonlocals));
 /* line 297: */
HDBBTRN_idec = (A_HEAP(A68_298 ));
IDBBTRN = (*(&(NL(GBBBTRN_env)->Fns))) ;
JDBBTRN = Inst.Fnno ;
(*HDBBTRN_idec) = (*(*(&A_VINDEX(IDBBTRN,JDBBTRN))));
 /* line 298: */
KDBBTRN = (&(HDBBTRN_idec->Macro)) ;
(*KDBBTRN) = A68_TRUE;
 /* line 299: */
LDBBTRN = (*(&(NL(GBBBTRN_env)->Fns))) ;
MDBBTRN = Inst.Fnno ;
NDBBTRN = (&A_VINDEX(LDBBTRN,MDBBTRN)) ;
(*NDBBTRN) = HDBBTRN_idec;
 /* line 301: */
PDBBTRN = OEAATRN_makefname((*NL(QBBBTRN_maxintno))) ;
QDBBTRN_fn_rate = A_UNITE(ODBBTRN,mode4,4,PDBBTRN);
 /* line 302: */
 /* line 303: */
 /* line 304: */
if ( (*(&(TCBBTRN_scale->Faster))) )
{ 
 /* line 305: */
KABBTRN_divide( QDBBTRN_fn_rate, (*(&(TCBBTRN_scale->Scale))), &SDBBTRN );
RDBBTRN = SDBBTRN;
} 
else
{ 
 /* line 306: */
AABBTRN_multiply( QDBBTRN_fn_rate, (*(&(TCBBTRN_scale->Scale))), &TDBBTRN );
RDBBTRN = TDBBTRN;
} 
UDBBTRN_inst_rate = RDBBTRN;
 /* line 307: */
VDBBTRN.Sort = HPABTRN_timescale;
XDBBTRN = (*DFAATRN_makeformulatag(UDBBTRN_inst_rate)) ;
VDBBTRN.Param = A_UNITE(WDBBTRN,mode2,2,XDBBTRN);
YDBBTRN = (&A_VINDEX(EDBBTRN_newmacparams,WCBBTRN_upb)) ;
(*YDBBTRN) = VDBBTRN;
 /* line 308: */
ZDBBTRN.I.Fnno = Inst.Fnno;
ZDBBTRN.I.Macparams = EDBBTRN_newmacparams;
ZDBBTRN.I.Attr = Inst.Attr;
 /* line 309: */
ZDBBTRN.C = A68_TRUE;
AEBBTRN = ZDBBTRN;
} 
else
{ 
BEBBTRN.I = Inst;
 /* line 310: */
 /* line 311: */
BEBBTRN.C = A68_FALSE;
AEBBTRN = BEBBTRN;
} 
} 
A_PROC_EXIT(instance_scale);
*ReturnedValue = (AEBBTRN);
return;
} 
#undef NL
 /* line 314: */

A_STATIC A68_VOID  IEBBTRN_fnbody_scale(A68_294  Fnbody, A68_414 * Tprocs, A68_INT  Fnno, A68_298 * Fdec, A68_INT * Rate, A68_408  *ReturnedValue, void *NonLocals)
#define NL(x) (((JEBBTRN_fnbody_scale *)NonLocals)->x)
{ 
A68_184  KEBBTRN;  /* OPERATORS - mode -> union mode */
A68_188 * LEBBTRN;  /* YIELD */
A68_184  MEBBTRN_fn_rate;
A68_294  NEBBTRN;  /* united object - for case conformity */
A68_292 * OEBBTRN_ts;
A68_436  PEBBTRN;  /* CALL */
A68_393  QEBBTRN;  /* avoid structure result */
A68_393  REBBTRN_ic;
A68_464 ** SEBBTRN;  /* YIELD */
A68_222  TEBBTRN;  /* avoid structure result */
A68_222  UEBBTRN_input;
A68_INT  VEBBTRN_sample_fnno;
A68_184  WEBBTRN;  /* avoid structure result */
A68_184  XEBBTRN_fastrate;
A68_184  YEBBTRN;  /* avoid structure result */
A68_184  ZEBBTRN_fastskew;
A68_239 * AFBBTRN_inst;
A68_239  BFBBTRN;  /* collateral clause result */
A68_222  CFBBTRN;  /* OPERATORS - mode -> union mode */
A68_200  DFBBTRN;  /* avoid structure result */
A68_200  EFBBTRN_insttype;
A68_262  FFBBTRN;  /* avoid structure result */
A68_262  GFBBTRN_fastsample;
A68_408  HFBBTRN;  /* collateral clause result */
A68_239  IFBBTRN;  /* collateral clause result */
A68_222  JFBBTRN;  /* OPERATORS - mode -> union mode */
A68_239 * KFBBTRN;  /* YIELD */
A68_222  LFBBTRN;  /* OPERATORS - mode -> union mode */
A68_294  MFBBTRN;  /* OPERATORS - mode -> union mode */
A68_267 * NFBBTRN;  /* YIELD */
A68_408  OFBBTRN;  /* clause result */
A68_184  PFBBTRN;  /* avoid structure result */
A68_184  QFBBTRN;  /* avoid structure result */
A68_184  RFBBTRN_slowskew;
A68_200  SFBBTRN_inputtype;
A68_262  TFBBTRN;  /* avoid structure result */
A68_262  UFBBTRN_slowsample;
A68_239 * VFBBTRN_sample;
A68_239  WFBBTRN;  /* collateral clause result */
A68_408  XFBBTRN;  /* collateral clause result */
A68_239  YFBBTRN;  /* collateral clause result */
A68_222  ZFBBTRN;  /* OPERATORS - mode -> union mode */
A68_239 * AGBBTRN;  /* YIELD */
A68_222  BGBBTRN;  /* OPERATORS - mode -> union mode */
A68_294  CGBBTRN;  /* OPERATORS - mode -> union mode */
A68_267 * DGBBTRN;  /* YIELD */
A68_267 * EGBBTRN_ut;
A68_451  FGBBTRN;  /* CALL */
A68_408  GGBBTRN;  /* avoid structure result */
A68_408  HGBBTRN_fc;
A68_464  IGBBTRN;  /* collateral clause result */
A68_184  JGBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * KGBBTRN;  /* YIELD */
A68_464 * LGBBTRN;  /* YIELD */
A68_464 ** MGBBTRN;  /* YIELD */
A68_288 * NGBBTRN_ad;
A68_184  OGBBTRN;  /* avoid structure result */
A68_184  PGBBTRN_ambig;
A68_184  QGBBTRN;  /* avoid structure result */
A68_184  RGBBTRN_delay;
A68_464  SGBBTRN;  /* collateral clause result */
A68_184  TGBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * UGBBTRN;  /* YIELD */
A68_464 * VGBBTRN;  /* YIELD */
A68_464 ** WGBBTRN;  /* YIELD */
A68_408  XGBBTRN;  /* collateral clause result */
A68_288  YGBBTRN;  /* collateral clause result */
A68_288 * ZGBBTRN;  /* YIELD */
A68_294  AHBBTRN;  /* OPERATORS - mode -> union mode */
A68_289 * BHBBTRN_id;
A68_184  CHBBTRN;  /* avoid structure result */
A68_184  DHBBTRN_delaytime;
A68_464  EHBBTRN;  /* collateral clause result */
A68_184  FHBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * GHBBTRN;  /* YIELD */
A68_464 * HHBBTRN;  /* YIELD */
A68_464 ** IHBBTRN;  /* YIELD */
A68_408  JHBBTRN;  /* collateral clause result */
A68_289  KHBBTRN;  /* collateral clause result */
A68_289 * LHBBTRN;  /* YIELD */
A68_294  MHBBTRN;  /* OPERATORS - mode -> union mode */
A68_291 * NHBBTRN_sd;
A68_184  OHBBTRN;  /* avoid structure result */
A68_184  PHBBTRN_interval;
A68_184  QHBBTRN;  /* avoid structure result */
A68_184  RHBBTRN_skew;
A68_464  SHBBTRN;  /* collateral clause result */
A68_184  THBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * UHBBTRN;  /* YIELD */
A68_464 * VHBBTRN;  /* YIELD */
A68_464 ** WHBBTRN;  /* YIELD */
A68_408  XHBBTRN;  /* collateral clause result */
A68_291  YHBBTRN;  /* collateral clause result */
A68_291 * ZHBBTRN;  /* YIELD */
A68_294  AIBBTRN;  /* OPERATORS - mode -> union mode */
A68_451  BIBBTRN;  /* CALL */
A68_408  CIBBTRN;  /* avoid structure result */
A_PROC_ENTRY(fnbody_scale);
 /* line 315: */
 /* line 316: */
{ 
LEBBTRN = OEAATRN_makefname((*NL(QBBBTRN_maxintno))) ;
MEBBTRN_fn_rate = A_UNITE(KEBBTRN,mode4,4,LEBBTRN);
 /* line 318: */
 /* line 319: */
NEBBTRN = Fnbody ;
switch ( NEBBTRN.mode )
{ 
case 10: /* REF STRUCT(BOOL,INT,MODE262,MODE184,MODE222,MODE184)  */
OEBBTRN_ts = (NEBBTRN.data.mode10);
 /* line 320: */
{ 
A_CALLPROC(NL(TBBBTRN_newenviron),(A68_TRUE),(A68_TRUE,(NL(TBBBTRN_newenviron)).nonlocals));
 /* line 321: */
PEBBTRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(PEBBTRN,((*(&(OEBBTRN_ts->Inst))), Tprocs, &QEBBTRN),((*(&(OEBBTRN_ts->Inst))), Tprocs, &QEBBTRN,(PEBBTRN).nonlocals));
REBBTRN_ic = QEBBTRN;
 /* line 323: */
SEBBTRN = (&A_VINDEX(NL(PBBBTRN_environscales),Fnno)) ;
(*SEBBTRN) = QZABTRN_scaled((*(&(OEBBTRN_ts->Faster))), (*(&(OEBBTRN_ts->Scale))), (*Rate));
 /* line 325: */
ZYABTRN_terminals_unit( (*(&(Fdec->Inputs))), &TEBBTRN );
UEBBTRN_input = TEBBTRN;
 /* line 326: */
VEBBTRN_sample_fnno = (*(&(NL(GBBBTRN_env)->Fns))).upb;
 /* line 327: */
 /* line 328: */
if ( (*(&(OEBBTRN_ts->Faster))) )
{ 
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(OEBBTRN_ts->Scale))), &WEBBTRN );
XEBBTRN_fastrate = WEBBTRN;
 /* line 329: */
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(OEBBTRN_ts->Skew))), &YEBBTRN );
ZEBBTRN_fastskew = YEBBTRN;
 /* line 330: */
AFBBTRN_inst = (A_HEAP(A68_239 ));
BFBBTRN.Inst = REBBTRN_ic.I;
BFBBTRN.Right = UEBBTRN_input;
(*AFBBTRN_inst) = BFBBTRN;
 /* line 331: */
VUNATRN_unit_type( A_UNITE(CFBBTRN,mode23,23,AFBBTRN_inst), Fdec, NL(GBBBTRN_env), &DFBBTRN );
EFBBTRN_insttype = DFBBTRN;
 /* line 332: */
 /* line 333: */
 /* line 334: */
DXABTRN_make_sample_inst( VEBBTRN_sample_fnno, EFBBTRN_insttype, (*(&(OEBBTRN_ts->Init))), XEBBTRN_fastrate, ZEBBTRN_fastskew, &FFBBTRN );
GFBBTRN_fastsample = FFBBTRN;
 /* line 335: */
IFBBTRN.Inst = GFBBTRN_fastsample;
IFBBTRN.Right = A_UNITE(JFBBTRN,mode23,23,AFBBTRN_inst);
KFBBTRN = A_HEAP(A68_239 ) ;
(*KFBBTRN) = IFBBTRN ;
NFBBTRN = WGAATRN_makeunittag(A_UNITE(LFBBTRN,mode23,23,KFBBTRN)) ;
HFBBTRN.F = A_UNITE(MFBBTRN,mode1,1,NFBBTRN);
 /* line 336: */
 /* line 338: */
HFBBTRN.C = A68_TRUE;
OFBBTRN = HFBBTRN;
} 
else
{ 
KABBTRN_divide( MEBBTRN_fn_rate, (*(&(OEBBTRN_ts->Scale))), &PFBBTRN );
AABBTRN_multiply( PFBBTRN, (*(&(OEBBTRN_ts->Skew))), &QFBBTRN );
RFBBTRN_slowskew = QFBBTRN;
 /* line 339: */
SFBBTRN_inputtype = (*(&(MUNATRN_fndec_tfn(Fdec)->From)));
 /* line 340: */
 /* line 341: */
 /* line 342: */
DXABTRN_make_sample_inst( VEBBTRN_sample_fnno, SFBBTRN_inputtype, (*(&(OEBBTRN_ts->Init))), MEBBTRN_fn_rate, RFBBTRN_slowskew, &TFBBTRN );
UFBBTRN_slowsample = TFBBTRN;
 /* line 343: */
VFBBTRN_sample = (A_HEAP(A68_239 ));
WFBBTRN.Inst = UFBBTRN_slowsample;
WFBBTRN.Right = UEBBTRN_input;
(*VFBBTRN_sample) = WFBBTRN;
 /* line 344: */
YFBBTRN.Inst = REBBTRN_ic.I;
YFBBTRN.Right = A_UNITE(ZFBBTRN,mode23,23,VFBBTRN_sample);
AGBBTRN = A_HEAP(A68_239 ) ;
(*AGBBTRN) = YFBBTRN ;
DGBBTRN = WGAATRN_makeunittag(A_UNITE(BGBBTRN,mode23,23,AGBBTRN)) ;
XFBBTRN.F = A_UNITE(CGBBTRN,mode1,1,DGBBTRN);
 /* line 345: */
 /* line 346: */
 /* line 347: */
XFBBTRN.C = A68_TRUE;
OFBBTRN = XFBBTRN;
} 
} 
break;
case 1: /* REF STRUCT(MODE222)  */
EGBBTRN_ut = (NEBBTRN.data.mode1);
 /* line 348: */
{ 
FGBBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(FGBBTRN,(Fnbody, Tprocs, &GGBBTRN),(Fnbody, Tprocs, &GGBBTRN,(FGBBTRN).nonlocals));
HGBBTRN_fc = GGBBTRN;
 /* line 349: */
 /* line 350: */
if ( HGBBTRN_fc.C )
{ 
IGBBTRN.Faster = A68_TRUE;
KGBBTRN = NNMATRN_makefint(1) ;
IGBBTRN.Scale = A_UNITE(JGBBTRN,mode1,1,KGBBTRN);
 /* line 351: */
IGBBTRN.Rate = (*Rate);
LGBBTRN = A_HEAP(A68_464 ) ;
(*LGBBTRN) = IGBBTRN ;
MGBBTRN = (&A_VINDEX(NL(PBBBTRN_environscales),Fnno)) ;
(*MGBBTRN) = LGBBTRN;
} 
 /* line 352: */
 /* line 353: */
 /* line 354: */
OFBBTRN = HGBBTRN_fc;
} 
break;
case 6: /* REF STRUCT(INT,MODE222,MODE184,MODE222,MODE184)  */
NGBBTRN_ad = (NEBBTRN.data.mode6);
 /* line 355: */
{ 
A_CALLPROC(NL(TBBBTRN_newenviron),(A68_FALSE),(A68_FALSE,(NL(TBBBTRN_newenviron)).nonlocals));
 /* line 356: */
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(NGBBTRN_ad->Ambigtime))), &OGBBTRN );
PGBBTRN_ambig = OGBBTRN;
 /* line 357: */
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(NGBBTRN_ad->Delaytime))), &QGBBTRN );
RGBBTRN_delay = QGBBTRN;
 /* line 358: */
SGBBTRN.Faster = A68_TRUE;
UGBBTRN = NNMATRN_makefint(1) ;
SGBBTRN.Scale = A_UNITE(TGBBTRN,mode1,1,UGBBTRN);
SGBBTRN.Rate = 1;
VGBBTRN = A_HEAP(A68_464 ) ;
(*VGBBTRN) = SGBBTRN ;
WGBBTRN = (&A_VINDEX(NL(PBBBTRN_environscales),Fnno)) ;
(*WGBBTRN) = VGBBTRN;
 /* line 359: */
YGBBTRN.Sort = (*(&(NGBBTRN_ad->Sort)));
YGBBTRN.Init = (*(&(NGBBTRN_ad->Init)));
YGBBTRN.Ambigtime = PGBBTRN_ambig;
 /* line 360: */
YGBBTRN.Ambig = (*(&(NGBBTRN_ad->Ambig)));
YGBBTRN.Delaytime = RGBBTRN_delay;
ZGBBTRN = A_HEAP(A68_288 ) ;
(*ZGBBTRN) = YGBBTRN ;
XGBBTRN.F = A_UNITE(AHBBTRN,mode6,6,ZGBBTRN);
 /* line 361: */
 /* line 362: */
XGBBTRN.C = A68_TRUE;
OFBBTRN = XGBBTRN;
} 
break;
case 7: /* REF STRUCT(MODE222,MODE184)  */
BHBBTRN_id = (NEBBTRN.data.mode7);
 /* line 363: */
{ 
A_CALLPROC(NL(TBBBTRN_newenviron),(A68_FALSE),(A68_FALSE,(NL(TBBBTRN_newenviron)).nonlocals));
 /* line 364: */
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(BHBBTRN_id->Delaytime))), &CHBBTRN );
DHBBTRN_delaytime = CHBBTRN;
 /* line 365: */
EHBBTRN.Faster = A68_TRUE;
GHBBTRN = NNMATRN_makefint(1) ;
EHBBTRN.Scale = A_UNITE(FHBBTRN,mode1,1,GHBBTRN);
EHBBTRN.Rate = 1;
HHBBTRN = A_HEAP(A68_464 ) ;
(*HHBBTRN) = EHBBTRN ;
IHBBTRN = (&A_VINDEX(NL(PBBBTRN_environscales),Fnno)) ;
(*IHBBTRN) = HHBBTRN;
 /* line 366: */
KHBBTRN.Init = (*(&(BHBBTRN_id->Init)));
KHBBTRN.Delaytime = DHBBTRN_delaytime;
LHBBTRN = A_HEAP(A68_289 ) ;
(*LHBBTRN) = KHBBTRN ;
JHBBTRN.F = A_UNITE(MHBBTRN,mode7,7,LHBBTRN);
 /* line 367: */
 /* line 368: */
JHBBTRN.C = A68_TRUE;
OFBBTRN = JHBBTRN;
} 
break;
case 9: /* REF STRUCT(INT,MODE184,MODE222,MODE184)  */
NHBBTRN_sd = (NEBBTRN.data.mode9);
 /* line 369: */
{ 
A_CALLPROC(NL(TBBBTRN_newenviron),(A68_FALSE),(A68_FALSE,(NL(TBBBTRN_newenviron)).nonlocals));
 /* line 370: */
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(NHBBTRN_sd->Interval))), &OHBBTRN );
PHBBTRN_interval = OHBBTRN;
 /* line 371: */
AABBTRN_multiply( MEBBTRN_fn_rate, (*(&(NHBBTRN_sd->Skew))), &QHBBTRN );
RHBBTRN_skew = QHBBTRN;
 /* line 372: */
SHBBTRN.Faster = A68_TRUE;
UHBBTRN = NNMATRN_makefint(1) ;
SHBBTRN.Scale = A_UNITE(THBBTRN,mode1,1,UHBBTRN);
SHBBTRN.Rate = 1;
VHBBTRN = A_HEAP(A68_464 ) ;
(*VHBBTRN) = SHBBTRN ;
WHBBTRN = (&A_VINDEX(NL(PBBBTRN_environscales),Fnno)) ;
(*WHBBTRN) = VHBBTRN;
 /* line 373: */
YHBBTRN.Sort = (*(&(NHBBTRN_sd->Sort)));
YHBBTRN.Interval = PHBBTRN_interval;
YHBBTRN.Init = (*(&(NHBBTRN_sd->Init)));
YHBBTRN.Skew = RHBBTRN_skew;
ZHBBTRN = A_HEAP(A68_291 ) ;
(*ZHBBTRN) = YHBBTRN ;
XHBBTRN.F = A_UNITE(AIBBTRN,mode9,9,ZHBBTRN);
 /* line 374: */
 /* line 375: */
XHBBTRN.C = A68_TRUE;
OFBBTRN = XHBBTRN;
} 
break;
default: 
 /* line 376: */
 /* line 377: */
BIBBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(BIBBTRN,(Fnbody, Tprocs, &CIBBTRN),(Fnbody, Tprocs, &CIBBTRN,(BIBBTRN).nonlocals));
OFBBTRN = CIBBTRN;
break;
} 
} 
A_PROC_EXIT(fnbody_scale);
*ReturnedValue = (OFBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GIBBTRN_seqstep_fault(A68_271  S, A68_414 * Tprocs, A68_401  *ReturnedValue)
{ 
A68_271  HIBBTRN;  /* united object - for case conformity */
A68_401  KIBBTRN;  /* collateral clause result */
A68_401  LIBBTRN;  /* clause result */
A_PROC_ENTRY(seqstep_fault);
 /* line 382: */
{ 
 /* line 383: */
HIBBTRN = S ;
switch ( HIBBTRN.mode )
{ 
case 10: /* REF STRUCT(REF MODE263,MODE222)  */
 /* line 384: */
 /* line 385: */
NKDAOST_sysfault(JIBBTRN);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 386: */
KIBBTRN.S = S;
 /* line 387: */
KIBBTRN.C = A68_FALSE;
LIBBTRN = KIBBTRN;
} 
A_PROC_EXIT(seqstep_fault);
*ReturnedValue = (LIBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QIBBTRN_fndec_scale(A68_298 * Fdec, A68_414 * Tprocs, A68_INT  Fnno, A68_411  *ReturnedValue, void *NonLocals)
#define NL(x) (((RIBBTRN_fndec_scale *)NonLocals)->x)
{ 
A68_INT  SIBBTRN_rate;
A68_492  TIBBTRN;  /* collateral clause result */
A68_459  UIBBTRN;  /* OPERATORS - mode -> union mode */
A68_444  VIBBTRN;  /* YIELD */
A68_444  WIBBTRN;  /* procedure value */
A68_451  ZIBBTRN_anonymous;   /* proc value of non-global proc */
A68_459  EJBBTRN;  /* OPERATORS - mode -> union mode */
A68_451  FJBBTRN;  /* YIELD */
A68_436  IJBBTRN_anonymous;   /* proc value of non-global proc */
A68_459  NJBBTRN;  /* OPERATORS - mode -> union mode */
A68_436  OJBBTRN;  /* YIELD */
A68_437  RJBBTRN_anonymous;   /* proc value of non-global proc */
A68_459  WJBBTRN;  /* OPERATORS - mode -> union mode */
A68_437  XJBBTRN;  /* YIELD */
A68_458  YJBBTRN;  /* OPERATORS - istruct -> vector */
A68_414 * ZJBBTRN_newtprocs;
A68_451  AKBBTRN;  /* CALL */
A68_408  BKBBTRN;  /* avoid structure result */
A68_408  CKBBTRN_bc;
A68_299  DKBBTRN_macspecs;
A68_INT  EKBBTRN;  /* clause result */
A68_INT  FKBBTRN_upb;
A68_468  HKBBTRN_generator;   /* proc value of non-global proc */
A68_299  MKBBTRN;  /* avoid structure result */
A68_299  NKBBTRN_newmacspecs;
A68_299  OKBBTRN;  /* OPERATORS - trim index */
A68_299  PKBBTRN;  /* YIELD */
A68_296  QKBBTRN;  /* collateral clause result */
A68_283  RKBBTRN;  /* OPERATORS - mode -> union mode */
A68_188  SKBBTRN;  /* YIELD */
A68_INT  TKBBTRN;  /* YIELD */
A68_296 * UKBBTRN;  /* YIELD */
A68_298 * VKBBTRN_newfdec;
A68_BOOL * WKBBTRN;  /* YIELD */
A68_299 * XKBBTRN;  /* YIELD */
A68_294 * YKBBTRN;  /* YIELD */
A68_182 * ZKBBTRN_us;
A68_INT * ALBBTRN;  /* YIELD */
A68_182 ** BLBBTRN;  /* YIELD */
A68_411  CLBBTRN;  /* collateral clause result */
A68_411  DLBBTRN;  /* clause result */
A68_411  ELBBTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_scale);
 /* line 390: */
 /* line 391: */
{ 
(*NL(QBBBTRN_maxintno))+=1;
 /* line 392: */
SIBBTRN_rate = 1;
 /* line 396: */
 /* line 397: */
 /* line 398: */
WIBBTRN.fn.fn_global = GIBBTRN_seqstep_fault;
WIBBTRN.nonlocals = A68_NIL;
VIBBTRN = WIBBTRN ;
TIBBTRN.data[0] = A_UNITE(UIBBTRN,mode30,30,VIBBTRN);
A_CLOSURE( ZIBBTRN_anonymous, AJBBTRN_anonymous, BJBBTRN_anonymous );
(( BJBBTRN_anonymous * ) ( ZIBBTRN_anonymous.nonlocals )) -> HEBBTRN_fnbody_scale = NL(HEBBTRN_fnbody_scale);
(( BJBBTRN_anonymous * ) ( ZIBBTRN_anonymous.nonlocals )) -> Fnno = Fnno;
(( BJBBTRN_anonymous * ) ( ZIBBTRN_anonymous.nonlocals )) -> Fdec = Fdec;
(( BJBBTRN_anonymous * ) ( ZIBBTRN_anonymous.nonlocals )) -> SIBBTRN_rate = (&SIBBTRN_rate);
 /* line 400: */
FJBBTRN = ZIBBTRN_anonymous ;
TIBBTRN.data[1] = A_UNITE(EJBBTRN,mode37,37,FJBBTRN);
A_CLOSURE( IJBBTRN_anonymous, JJBBTRN_anonymous, KJBBTRN_anonymous );
(( KJBBTRN_anonymous * ) ( IJBBTRN_anonymous.nonlocals )) -> PCBBTRN_instance_scale = NL(PCBBTRN_instance_scale);
(( KJBBTRN_anonymous * ) ( IJBBTRN_anonymous.nonlocals )) -> SIBBTRN_rate = (&SIBBTRN_rate);
(( KJBBTRN_anonymous * ) ( IJBBTRN_anonymous.nonlocals )) -> PBBBTRN_environscales = NL(PBBBTRN_environscales);
 /* line 402: */
OJBBTRN = IJBBTRN_anonymous ;
TIBBTRN.data[2] = A_UNITE(NJBBTRN,mode22,22,OJBBTRN);
A_CLOSURE( RJBBTRN_anonymous, SJBBTRN_anonymous, TJBBTRN_anonymous );
(( TJBBTRN_anonymous * ) ( RJBBTRN_anonymous.nonlocals )) -> DIBBTRN_declaration_scale = NL(DIBBTRN_declaration_scale);
XJBBTRN = RJBBTRN_anonymous ;
TIBBTRN.data[3] = A_UNITE(WJBBTRN,mode23,23,XJBBTRN);
ZJBBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(YJBBTRN,TIBBTRN,4,A68_459 ));
 /* line 405: */
AKBBTRN = (*(&(ZJBBTRN_newtprocs->Fnbody))) ;
A_CALLPROC(AKBBTRN,((*(&(Fdec->Fnbody))), ZJBBTRN_newtprocs, &BKBBTRN),((*(&(Fdec->Fnbody))), ZJBBTRN_newtprocs, &BKBBTRN,(AKBBTRN).nonlocals));
CKBBTRN_bc = BKBBTRN;
 /* line 407: */
 /* line 408: */
if ( CKBBTRN_bc.C )
{ 
DKBBTRN_macspecs = (*(&(Fdec->Macspecs)));
 /* line 409: */
if ( ! A_VSTRUCTCOMP(DKBBTRN_macspecs,FBAATRN_nilmacspecs) )
{ 
EKBBTRN = DKBBTRN_macspecs.upb;
} 
else
{ 
EKBBTRN = 0;
} 
FKBBTRN_upb = EKBBTRN;
 /* line 410: */
A_CLOSURE( HKBBTRN_generator, IKBBTRN_generator, JKBBTRN_generator );
(( JKBBTRN_generator * ) ( HKBBTRN_generator.nonlocals )) -> FKBBTRN_upb = FKBBTRN_upb;
A_CALLPROC(HKBBTRN_generator,(A68_FALSE, &MKBBTRN),(A68_FALSE, &MKBBTRN,(HKBBTRN_generator).nonlocals));
NKBBTRN_newmacspecs = MKBBTRN;
 /* line 411: */
if ( (FKBBTRN_upb>0) )
{ 
PKBBTRN = A_VTRIM(OKBBTRN,(NKBBTRN_newmacspecs),A_VTSCRIPT(&(OKBBTRN.upb),(NKBBTRN_newmacspecs).upb,1,FKBBTRN_upb)) ;
A_VASSIGN2(DKBBTRN_macspecs,PKBBTRN,A68_296 );
} 
 /* line 412: */
QKBBTRN.Sort = AJAATRN_explicitmacpar;
SKBBTRN = (*OEAATRN_makefname((*NL(QBBBTRN_maxintno)))) ;
QKBBTRN.Spec = A_UNITE(RKBBTRN,mode2,2,SKBBTRN);
TKBBTRN = (FKBBTRN_upb+1) ;
UKBBTRN = (&A_VINDEX(NKBBTRN_newmacspecs,TKBBTRN)) ;
(*UKBBTRN) = QKBBTRN;
 /* line 414: */
VKBBTRN_newfdec = (A_HEAP(A68_298 ));
(*VKBBTRN_newfdec) = (*Fdec);
 /* line 415: */
WKBBTRN = (&(VKBBTRN_newfdec->Macro)) ;
(*WKBBTRN) = A68_TRUE;
 /* line 416: */
XKBBTRN = (&(VKBBTRN_newfdec->Macspecs)) ;
(*XKBBTRN) = NKBBTRN_newmacspecs;
 /* line 417: */
YKBBTRN = (&(VKBBTRN_newfdec->Fnbody)) ;
(*YKBBTRN) = CKBBTRN_bc.F;
 /* line 418: */
 /* line 419: */
if ( ((*(&(Fdec->Usage)))!=CBAATRN_nilusage) )
{ 
ZKBBTRN_us = (A_HEAP(A68_182 ));
(*ZKBBTRN_us) = (*(*(&(Fdec->Usage))));
 /* line 420: */
ALBBTRN = (&(ZKBBTRN_us->Closureno)) ;
(*ALBBTRN) = (*(&((*NL(Outerfn_info))->Newclosno)));
 /* line 421: */
 /* line 422: */
BLBBTRN = (&(VKBBTRN_newfdec->Usage)) ;
(*BLBBTRN) = ZKBBTRN_us;
} 
 /* line 423: */
CLBBTRN.F = VKBBTRN_newfdec;
 /* line 424: */
CLBBTRN.C = A68_TRUE;
DLBBTRN = CLBBTRN;
} 
else
{ 
(*NL(QBBBTRN_maxintno))-=1;
 /* line 425: */
ELBBTRN.F = Fdec;
 /* line 426: */
 /* line 427: */
ELBBTRN.C = A68_FALSE;
DLBBTRN = ELBBTRN;
} 
} 
A_PROC_EXIT(fndec_scale);
*ReturnedValue = (DLBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ILBBTRN_anonymous(A68_283  Decl, A68_414 * Tprocs, A68_394  *ReturnedValue, void *NonLocals)
#define NL(x) (((JLBBTRN_anonymous *)NonLocals)->x)
{ 
A68_283  KLBBTRN;  /* united object - for case conformity */
A68_253  LLBBTRN_fn;
A68_306  MLBBTRN;  /* OPERATORS - simple index */
A68_INT  NLBBTRN;  /* YIELD */
A68_298 * OLBBTRN_fd;
A68_411  PLBBTRN;  /* avoid structure result */
A68_411  QLBBTRN_fc;
A68_306  RLBBTRN;  /* OPERATORS - simple index */
A68_INT  SLBBTRN;  /* YIELD */
A68_298 ** TLBBTRN;  /* YIELD */
A68_394  ULBBTRN;  /* collateral clause result */
A68_394  VLBBTRN;  /* clause result */
 /* line 430: */
 /* line 431: */
{ 
 /* line 432: */
KLBBTRN = Decl ;
switch ( KLBBTRN.mode )
{ 
case 5: /* STRUCT(INT)  */
LLBBTRN_fn = (KLBBTRN.data.mode5);
 /* line 433: */
{ 
MLBBTRN = (*(&(NL(GBBBTRN_env)->Fns))) ;
NLBBTRN = LLBBTRN_fn.Fnno ;
OLBBTRN_fd = (*(&A_VINDEX(MLBBTRN,NLBBTRN)));
 /* line 434: */
A_CALLPROC(NL(PIBBTRN_fndec_scale),(OLBBTRN_fd, Tprocs, LLBBTRN_fn.Fnno, &PLBBTRN),(OLBBTRN_fd, Tprocs, LLBBTRN_fn.Fnno, &PLBBTRN,(NL(PIBBTRN_fndec_scale)).nonlocals));
QLBBTRN_fc = PLBBTRN;
 /* line 435: */
 /* line 436: */
if ( QLBBTRN_fc.C )
{ 
A_CALLPROC(NL(TBBBTRN_newenviron),(A68_FALSE),(A68_FALSE,(NL(TBBBTRN_newenviron)).nonlocals));
 /* line 437: */
 /* line 438: */
 /* line 439: */
 /* line 440: */
 /* line 441: */
RLBBTRN = (*(&(NL(GBBBTRN_env)->Fns))) ;
SLBBTRN = LLBBTRN_fn.Fnno ;
TLBBTRN = (&A_VINDEX(RLBBTRN,SLBBTRN)) ;
(*TLBBTRN) = QLBBTRN_fc.F;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 442: */
ULBBTRN.D = Decl;
 /* line 443: */
ULBBTRN.C = A68_FALSE;
VLBBTRN = ULBBTRN;
} 
*ReturnedValue = (VLBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RMBBTRN_generator(A68_BOOL  PMBBTRN_anonymous, A68_303  *ReturnedValue, void *NonLocals)
#define NL(x) (((SMBBTRN_generator *)NonLocals)->x)
{ 
A68_303  TMBBTRN;  /* clause result */
A68_303  UMBBTRN;  /* OPERATORS - dynamic generator */
{ 
UMBBTRN.upb = (*NL(QBBBTRN_maxintno)) ;
( PMBBTRN_anonymous? A_VLOC(A68_197 *,UMBBTRN): A_VHEAP(A68_197 *,UMBBTRN) );
TMBBTRN = UMBBTRN;
} 
*ReturnedValue = (TMBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QOBBTRN_anonymous(A68_184  F, A68_414 * Tprocs, A68_375  *ReturnedValue, void *NonLocals)
#define NL(x) (((ROBBTRN_anonymous *)NonLocals)->x)
{ 
A68_375  SOBBTRN;  /* clause result */
A68_375  TOBBTRN;  /* avoid structure result */
 /* line 512: */
 /* line 513: */
NYABTRN_fmacpar_remove( F, Tprocs, NL(IOBBTRN_outerfn_rate), NL(MOBBTRN_decl), &TOBBTRN );
SOBBTRN = TOBBTRN;
*ReturnedValue = (SOBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JPBBTRN_generator(A68_BOOL  HPBBTRN_anonymous, A68_303  *ReturnedValue, void *NonLocals)
#define NL(x) (((KPBBTRN_generator *)NonLocals)->x)
{ 
A68_303  LPBBTRN;  /* clause result */
A68_303  MPBBTRN;  /* OPERATORS - dynamic generator */
{ 
MPBBTRN.upb = NL(GPBBTRN_ints).upb ;
( HPBBTRN_anonymous? A_VLOC(A68_197 *,MPBBTRN): A_VHEAP(A68_197 *,MPBBTRN) );
LPBBTRN = MPBBTRN;
} 
*ReturnedValue = (LPBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XPBBTRN_generator(A68_BOOL  VPBBTRN_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((YPBBTRN_generator *)NonLocals)->x)
{ 
A68_299  ZPBBTRN;  /* clause result */
A68_299  AQBBTRN;  /* OPERATORS - dynamic generator */
{ 
AQBBTRN.upb = NL(LOBBTRN_upb) ;
( VPBBTRN_anonymous? A_VLOC(A68_296 ,AQBBTRN): A_VHEAP(A68_296 ,AQBBTRN) );
ZPBBTRN = AQBBTRN;
} 
*ReturnedValue = (ZPBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SQBBTRN_generator(A68_BOOL  QQBBTRN_anonymous, A68_483  *ReturnedValue, void *NonLocals)
#define NL(x) (((TQBBTRN_generator *)NonLocals)->x)
{ 
A68_483  UQBBTRN;  /* clause result */
A68_483  VQBBTRN;  /* OPERATORS - dynamic generator */
{ 
VQBBTRN.upb = ZKCATRN_maxclosureno(NL(Oldclose)) ;
( QQBBTRN_anonymous? A_VLOC(A68_465 *,VQBBTRN): A_VHEAP(A68_465 *,VQBBTRN) );
UQBBTRN = VQBBTRN;
} 
*ReturnedValue = (UQBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ERBBTRN_trace_uses(A68_307  Ofn, void *NonLocals)
#define NL(x) (((FRBBTRN_trace_uses *)NonLocals)->x)
{ 
A68_298 ** GRBBTRN_fn;
A68_306  HRBBTRN;  /* OPERATORS - trim index */
A68_306  IRBBTRN;  /* OPERATORS - trim index */
A68_306  JRBBTRN;  /* forall yield */
A68_INT  KRBBTRN;  /* forall loop counter */
A68_INT  LRBBTRN_cno;
A68_465 * MRBBTRN_info;
A68_BOOL  NRBBTRN;  /* optbool result */
A68_BOOL  ORBBTRN;  /* optbool result */
A68_INT * PRBBTRN;  /* YIELD */
A_PROC_ENTRY(trace_uses);
 /* line 545: */
 /* line 547: */
 /* line 548: */
HRBBTRN = (*(&(Ofn.Environ->Fns))) ;
JRBBTRN = A_VTRIM(IRBBTRN,(HRBBTRN),A_VTSCRIPT(&(IRBBTRN.upb),(HRBBTRN).upb,2,(HRBBTRN).upb)) ;
KRBBTRN = JRBBTRN.upb -1;
GRBBTRN_fn = JRBBTRN.data;
for (;KRBBTRN-- >= 0;
(GRBBTRN_fn++
) )
{
 /* line 549: */
if ( ((*(&((*GRBBTRN_fn)->Sort)))==OKAATRN_outerdec) )
{ 
LRBBTRN_cno = (*(&((*(&((*GRBBTRN_fn)->Usage)))->Closureno)));
 /* line 550: */
MRBBTRN_info = (*(&A_VINDEX(NL(XQBBTRN_closureinfo),LRBBTRN_cno)));
 /* line 551: */
 /* line 552: */
NRBBTRN = ((*(&(MRBBTRN_info->Newclosno)))==0);
if ( NRBBTRN )
{ORBBTRN = (*(&(MRBBTRN_info->Scaled)));
if ( ! ORBBTRN )
{ORBBTRN = (*(&(MRBBTRN_info->Withtime)));
}
 /* line 553: */
NRBBTRN = ORBBTRN;
}
if ( NRBBTRN )
{ 
PRBBTRN = (&(MRBBTRN_info->Newclosno)) ;
(*PRBBTRN) = ENCATRN_reserve_next_closureno((*NL(PQBBTRN_newclosure)));
 /* line 554: */
 /* line 555: */
 /* line 556: */
 /* line 557: */
A_CALLPROC(NL(DRBBTRN_trace_uses),((*(&(ELCATRN_find_outers(LRBBTRN_cno, NL(Oldclose), NL(Msg))->Outer)))),((*(&(ELCATRN_find_outers(LRBBTRN_cno, NL(Oldclose), NL(Msg))->Outer))),(NL(DRBBTRN_trace_uses)).nonlocals));
} 
} 
}
 /* line 558: */
A_PROC_EXIT(trace_uses);
return;
} 
#undef NL

A_STATIC A68_INT  VRBBTRN_fnbody_sort(A68_294  Fbody, void *NonLocals)
#define NL(x) (((WRBBTRN_fnbody_sort *)NonLocals)->x)
{ 
A68_294  XRBBTRN;  /* united object - for case conformity */
A68_INT  YRBBTRN;  /* clause result */
A68_293 * ZRBBTRN_bc;
A_PROC_ENTRY(fnbody_sort);
 /* line 563: */
 /* line 564: */
XRBBTRN = Fbody ;
switch ( XRBBTRN.mode )
{ 
case 10: /* REF STRUCT(BOOL,INT,MODE262,MODE184,MODE222,MODE184)  */
 /* line 565: */
YRBBTRN = RRBBTRN_scaled;
break;
case 6: /* REF STRUCT(INT,MODE222,MODE184,MODE222,MODE184)  */
 /* line 566: */
YRBBTRN = SRBBTRN_withtime;
break;
case 7: /* REF STRUCT(MODE222,MODE184)  */
 /* line 567: */
YRBBTRN = SRBBTRN_withtime;
break;
case 9: /* REF STRUCT(INT,MODE184,MODE222,MODE184)  */
 /* line 568: */
YRBBTRN = SRBBTRN_withtime;
break;
case 11: /* REF STRUCT(REF MODE174,BOOL,MODE294)  */
ZRBBTRN_bc = (XRBBTRN.data.mode11);
 /* line 569: */
 /* line 570: */
YRBBTRN = A_CALLPROC(NL(URBBTRN_fnbody_sort),((*(&(ZRBBTRN_bc->Fnbody)))),((*(&(ZRBBTRN_bc->Fnbody))),(NL(URBBTRN_fnbody_sort)).nonlocals));
break;
default: 
YRBBTRN = QRBBTRN_nothing;
break;
} 
A_PROC_EXIT(fnbody_sort);
return( YRBBTRN );
} 
#undef NL

A_STATIC A68_VOID  MPABTRN_generator(A68_BOOL  LPABTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  NPABTRN;  /* clause result */
A68_VC  OPABTRN;  /* OPERATORS - dynamic generator */
{ 
OPABTRN.upb = 7 ;
( LPABTRN_anonymous? A_VLOC(A68_CHAR ,OPABTRN): A_VHEAP(A68_CHAR ,OPABTRN) );
NPABTRN = OPABTRN;
} 
*ReturnedValue = (NPABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VPABTRN_generator(A68_BOOL  UPABTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WPABTRN;  /* clause result */
A68_VC  XPABTRN;  /* OPERATORS - dynamic generator */
{ 
XPABTRN.upb = 7 ;
( UPABTRN_anonymous? A_VLOC(A68_CHAR ,XPABTRN): A_VHEAP(A68_CHAR ,XPABTRN) );
WPABTRN = XPABTRN;
} 
*ReturnedValue = (WPABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EQABTRN_sample_outer(A68_INT  Closureno, A68_307  *ReturnedValue)
{ 
A68_200  FQABTRN;  /* OPERATORS - mode -> union mode */
A68_201 * GQABTRN;  /* YIELD */
A68_200  HQABTRN_type;
A68_468  JQABTRN_generator;   /* proc value of non-global proc */
A68_299  OQABTRN;  /* avoid structure result */
A68_299  PQABTRN_macspecs;
A68_296  QQABTRN;  /* collateral clause result */
A68_283  RQABTRN;  /* OPERATORS - mode -> union mode */
A68_201  SQABTRN;  /* YIELD */
A68_INT  TQABTRN;  /* YIELD */
A68_296 * UQABTRN;  /* YIELD */
A68_296  VQABTRN;  /* collateral clause result */
A68_283  WQABTRN;  /* OPERATORS - mode -> union mode */
A68_216  XQABTRN;  /* YIELD */
A68_INT  YQABTRN;  /* YIELD */
A68_296 * ZQABTRN;  /* YIELD */
A68_296  ARABTRN;  /* collateral clause result */
A68_283  BRABTRN;  /* OPERATORS - mode -> union mode */
A68_188  CRABTRN;  /* YIELD */
A68_INT  DRABTRN;  /* YIELD */
A68_296 * ERABTRN;  /* YIELD */
A68_296  FRABTRN;  /* collateral clause result */
A68_283  GRABTRN;  /* OPERATORS - mode -> union mode */
A68_188  HRABTRN;  /* YIELD */
A68_INT  IRABTRN;  /* YIELD */
A68_296 * JRABTRN;  /* YIELD */
A68_263 * KRABTRN_inputs;
A68_263  LRABTRN;  /* collateral clause result */
A68_263 * MRABTRN_outputs;
A68_263  NRABTRN;  /* collateral clause result */
A68_469  PRABTRN_generator;   /* proc value of non-global proc */
A68_300  URABTRN;  /* avoid structure result */
A68_300  VRABTRN_nametypes;
A68_297  WRABTRN;  /* collateral clause result */
A68_175  XRABTRN;  /* OPERATORS - mode -> union mode */
A68_INT  YRABTRN;  /* YIELD */
A68_297 * ZRABTRN;  /* YIELD */
A68_297  ASABTRN;  /* collateral clause result */
A68_175  BSABTRN;  /* OPERATORS - mode -> union mode */
A68_INT  CSABTRN;  /* YIELD */
A68_297 * DSABTRN;  /* YIELD */
A68_182 * ESABTRN_usage;
A68_182  FSABTRN;  /* collateral clause result */
A68_291 * GSABTRN_sample;
A68_291  HSABTRN;  /* collateral clause result */
A68_184  ISABTRN;  /* OPERATORS - mode -> union mode */
A68_188 * JSABTRN;  /* YIELD */
A68_222  KSABTRN;  /* OPERATORS - mode -> union mode */
A68_216 * LSABTRN;  /* YIELD */
A68_184  MSABTRN;  /* OPERATORS - mode -> union mode */
A68_188 * NSABTRN;  /* YIELD */
A68_298 * OSABTRN_fdec;
A68_298  PSABTRN;  /* collateral clause result */
A68_175  QSABTRN;  /* OPERATORS - mode -> union mode */
A68_294  RSABTRN;  /* OPERATORS - mode -> union mode */
A68_470  TSABTRN_generator;   /* proc value of non-global proc */
A68_303  YSABTRN;  /* avoid structure result */
A68_303  ZSABTRN_ints;
A68_197  ATABTRN;  /* collateral clause result */
A68_VC  DTABTRN;  /* avoid structure result */
A68_175  ETABTRN;  /* OPERATORS - mode -> union mode */
A68_198  FTABTRN;  /* OPERATORS - mode -> union mode */
A68_INT  GTABTRN;  /* YIELD */
A68_197 * HTABTRN;  /* YIELD */
A68_197 ** ITABTRN;  /* YIELD */
A68_197  JTABTRN;  /* collateral clause result */
A68_VC  MTABTRN;  /* avoid structure result */
A68_175  NTABTRN;  /* OPERATORS - mode -> union mode */
A68_198  OTABTRN;  /* OPERATORS - mode -> union mode */
A68_INT  PTABTRN;  /* YIELD */
A68_197 * QTABTRN;  /* YIELD */
A68_197 ** RTABTRN;  /* YIELD */
A68_472  TTABTRN_generator;   /* proc value of non-global proc */
A68_304  YTABTRN;  /* avoid structure result */
A68_304  ZTABTRN_types;
A68_215  AUABTRN;  /* collateral clause result */
A68_VC  DUABTRN;  /* avoid structure result */
A68_175  EUABTRN;  /* OPERATORS - mode -> union mode */
A68_200  FUABTRN;  /* OPERATORS - mode -> union mode */
A68_213  GUABTRN;  /* OPERATORS - mode -> union mode */
A68_209 * HUABTRN;  /* YIELD */
A68_INT  IUABTRN;  /* YIELD */
A68_215 * JUABTRN;  /* YIELD */
A68_215 ** KUABTRN;  /* YIELD */
A68_474  MUABTRN_generator;   /* proc value of non-global proc */
A68_305  RUABTRN;  /* avoid structure result */
A68_305  SUABTRN_consts;
A68_221  TUABTRN;  /* collateral clause result */
A68_VC  WUABTRN;  /* avoid structure result */
A68_175  XUABTRN;  /* OPERATORS - mode -> union mode */
A68_222  YUABTRN;  /* OPERATORS - mode -> union mode */
A68_205 * ZUABTRN;  /* YIELD */
A68_INT  AVABTRN;  /* YIELD */
A68_221 * BVABTRN;  /* YIELD */
A68_221 ** CVABTRN;  /* YIELD */
A68_475  EVABTRN_generator;   /* proc value of non-global proc */
A68_306  JVABTRN;  /* avoid structure result */
A68_306  KVABTRN_fns;
A68_INT  LVABTRN;  /* YIELD */
A68_298 ** MVABTRN;  /* YIELD */
A68_307  NVABTRN;  /* collateral clause result */
A68_301  OVABTRN;  /* collateral clause result */
A68_301 * PVABTRN;  /* YIELD */
A68_307  QVABTRN;  /* clause result */
A_PROC_ENTRY(sample_outer);
 /* line 101: */
 /* line 106: */
{ 
GQABTRN = IFAATRN_maketname(1) ;
HQABTRN_type = A_UNITE(FQABTRN,mode1,1,GQABTRN);
 /* line 107: */
A_CLOSURE( JQABTRN_generator, KQABTRN_generator, LQABTRN_generator );
A_CALLPROC(JQABTRN_generator,(A68_FALSE, &OQABTRN),(A68_FALSE, &OQABTRN,(JQABTRN_generator).nonlocals));
PQABTRN_macspecs = OQABTRN;
 /* line 108: */
QQABTRN.Sort = AJAATRN_explicitmacpar;
SQABTRN = (*IFAATRN_maketname(1)) ;
QQABTRN.Spec = A_UNITE(RQABTRN,mode3,3,SQABTRN);
TQABTRN = 1 ;
UQABTRN = (&A_VINDEX(PQABTRN_macspecs,TQABTRN)) ;
(*UQABTRN) = QQABTRN;
 /* line 109: */
VQABTRN.Sort = AJAATRN_explicitmacpar;
XQABTRN = (*CGAATRN_makecname(1)) ;
VQABTRN.Spec = A_UNITE(WQABTRN,mode4,4,XQABTRN);
YQABTRN = 2 ;
ZQABTRN = (&A_VINDEX(PQABTRN_macspecs,YQABTRN)) ;
(*ZQABTRN) = VQABTRN;
 /* line 110: */
ARABTRN.Sort = AJAATRN_explicitmacpar;
CRABTRN = (*OEAATRN_makefname(1)) ;
ARABTRN.Spec = A_UNITE(BRABTRN,mode2,2,CRABTRN);
DRABTRN = 3 ;
ERABTRN = (&A_VINDEX(PQABTRN_macspecs,DRABTRN)) ;
(*ERABTRN) = ARABTRN;
 /* line 111: */
FRABTRN.Sort = AJAATRN_explicitmacpar;
HRABTRN = (*OEAATRN_makefname(2)) ;
FRABTRN.Spec = A_UNITE(GRABTRN,mode2,2,HRABTRN);
IRABTRN = 4 ;
JRABTRN = (&A_VINDEX(PQABTRN_macspecs,IRABTRN)) ;
(*JRABTRN) = FRABTRN;
 /* line 112: */
KRABTRN_inputs = (A_HEAP(A68_263 ));
LRABTRN.Nameno = 1;
LRABTRN.Rest = NAAATRN_nilnames;
(*KRABTRN_inputs) = LRABTRN;
 /* line 113: */
MRABTRN_outputs = (A_HEAP(A68_263 ));
NRABTRN.Nameno = 2;
NRABTRN.Rest = NAAATRN_nilnames;
(*MRABTRN_outputs) = NRABTRN;
 /* line 114: */
A_CLOSURE( PRABTRN_generator, QRABTRN_generator, RRABTRN_generator );
A_CALLPROC(PRABTRN_generator,(A68_FALSE, &URABTRN),(A68_FALSE, &URABTRN,(PRABTRN_generator).nonlocals));
VRABTRN_nametypes = URABTRN;
 /* line 115: */
WRABTRN.Name = TTCAOST_nullid;
WRABTRN.Type = HQABTRN_type;
WRABTRN.Attr = A_UNITE(XRABTRN,mode5,5,(&ZHAATRN_attrnull));
YRABTRN = 1 ;
ZRABTRN = (&A_VINDEX(VRABTRN_nametypes,YRABTRN)) ;
(*ZRABTRN) = WRABTRN;
 /* line 116: */
ASABTRN.Name = TTCAOST_nullid;
ASABTRN.Type = HQABTRN_type;
ASABTRN.Attr = A_UNITE(BSABTRN,mode5,5,(&ZHAATRN_attrnull));
CSABTRN = 2 ;
DSABTRN = (&A_VINDEX(VRABTRN_nametypes,CSABTRN)) ;
(*DSABTRN) = ASABTRN;
 /* line 117: */
ESABTRN_usage = (A_HEAP(A68_182 ));
FSABTRN.Contextno = 0;
FSABTRN.Closureno = Closureno;
FSABTRN.Libv_spec = 0;
FSABTRN.Libv_body = 0;
FSABTRN.Import = A68_FALSE;
FSABTRN.Export = A68_FALSE;
(*ESABTRN_usage) = FSABTRN;
 /* line 118: */
GSABTRN_sample = (A_HEAP(A68_291 ));
HSABTRN.Sort = JKAATRN_int2;
JSABTRN = OEAATRN_makefname(1) ;
HSABTRN.Interval = A_UNITE(ISABTRN,mode4,4,JSABTRN);
LSABTRN = CGAATRN_makecname(1) ;
HSABTRN.Init = A_UNITE(KSABTRN,mode1,1,LSABTRN);
NSABTRN = OEAATRN_makefname(2) ;
HSABTRN.Skew = A_UNITE(MSABTRN,mode4,4,NSABTRN);
(*GSABTRN_sample) = HSABTRN;
 /* line 119: */
OSABTRN_fdec = (A_HEAP(A68_298 ));
PSABTRN.Sort = OKAATRN_outerdec;
PSABTRN.Macro = A68_TRUE;
PSABTRN.Fnname = TPABTRN_samplename;
PSABTRN.Macspecs = PQABTRN_macspecs;
PSABTRN.Attr = A_UNITE(QSABTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 120: */
PSABTRN.Inputs = KRABTRN_inputs;
PSABTRN.Outputs = MRABTRN_outputs;
PSABTRN.Nametypes = VRABTRN_nametypes;
PSABTRN.Fnbody = A_UNITE(RSABTRN,mode9,9,GSABTRN_sample);
PSABTRN.Usage = ESABTRN_usage;
(*OSABTRN_fdec) = PSABTRN;
 /* line 122: */
A_CLOSURE( TSABTRN_generator, USABTRN_generator, VSABTRN_generator );
A_CALLPROC(TSABTRN_generator,(A68_FALSE, &YSABTRN),(A68_FALSE, &YSABTRN,(TSABTRN_generator).nonlocals));
ZSABTRN_ints = YSABTRN;
 /* line 123: */
 /* line 124: */
ATABTRN.Sort = QKAATRN_macpardec;
A_CALLPROC(ZLAATRN_makeid,(CTABTRN, &DTABTRN),(CTABTRN, &DTABTRN,(ZLAATRN_makeid).nonlocals));
ATABTRN.Intname = DTABTRN;
ATABTRN.Attr = A_UNITE(ETABTRN,mode5,5,(&ZHAATRN_attrnull));
ATABTRN.Value = A_UNITE(FTABTRN,mode10,10,(&BIAATRN_fnull));
ATABTRN.Usage = CBAATRN_nilusage;
GTABTRN = 1 ;
HTABTRN = A_HEAP(A68_197 ) ;
(*HTABTRN) = ATABTRN ;
ITABTRN = (&A_VINDEX(ZSABTRN_ints,GTABTRN)) ;
(*ITABTRN) = HTABTRN;
 /* line 125: */
 /* line 126: */
JTABTRN.Sort = QKAATRN_macpardec;
A_CALLPROC(ZLAATRN_makeid,(LTABTRN, &MTABTRN),(LTABTRN, &MTABTRN,(ZLAATRN_makeid).nonlocals));
JTABTRN.Intname = MTABTRN;
JTABTRN.Attr = A_UNITE(NTABTRN,mode5,5,(&ZHAATRN_attrnull));
JTABTRN.Value = A_UNITE(OTABTRN,mode10,10,(&BIAATRN_fnull));
JTABTRN.Usage = CBAATRN_nilusage;
PTABTRN = 2 ;
QTABTRN = A_HEAP(A68_197 ) ;
(*QTABTRN) = JTABTRN ;
RTABTRN = (&A_VINDEX(ZSABTRN_ints,PTABTRN)) ;
(*RTABTRN) = QTABTRN;
 /* line 128: */
A_CLOSURE( TTABTRN_generator, UTABTRN_generator, VTABTRN_generator );
A_CALLPROC(TTABTRN_generator,(A68_FALSE, &YTABTRN),(A68_FALSE, &YTABTRN,(TTABTRN_generator).nonlocals));
ZTABTRN_types = YTABTRN;
 /* line 129: */
 /* line 130: */
AUABTRN.Sort = QKAATRN_macpardec;
A_CALLPROC(ZLAATRN_makeid,(CUABTRN, &DUABTRN),(CUABTRN, &DUABTRN,(ZLAATRN_makeid).nonlocals));
AUABTRN.Typename = DUABTRN;
AUABTRN.Attr = A_UNITE(EUABTRN,mode5,5,(&ZHAATRN_attrnull));
HUABTRN = XFAATRN_maketypetag(A_UNITE(FUABTRN,mode9,9,(&DIAATRN_tnull))) ;
AUABTRN.Body = A_UNITE(GUABTRN,mode3,3,HUABTRN);
AUABTRN.Usage = CBAATRN_nilusage;
IUABTRN = 1 ;
JUABTRN = A_HEAP(A68_215 ) ;
(*JUABTRN) = AUABTRN ;
KUABTRN = (&A_VINDEX(ZTABTRN_types,IUABTRN)) ;
(*KUABTRN) = JUABTRN;
 /* line 132: */
A_CLOSURE( MUABTRN_generator, NUABTRN_generator, OUABTRN_generator );
A_CALLPROC(MUABTRN_generator,(A68_FALSE, &RUABTRN),(A68_FALSE, &RUABTRN,(MUABTRN_generator).nonlocals));
SUABTRN_consts = RUABTRN;
 /* line 133: */
 /* line 134: */
TUABTRN.Sort = QKAATRN_macpardec;
A_CALLPROC(ZLAATRN_makeid,(VUABTRN, &WUABTRN),(VUABTRN, &WUABTRN,(ZLAATRN_makeid).nonlocals));
TUABTRN.Constname = WUABTRN;
TUABTRN.Attr = A_UNITE(XUABTRN,mode5,5,(&ZHAATRN_attrnull));
ZUABTRN = HGAATRN_makectype(HQABTRN_type) ;
TUABTRN.Value = A_UNITE(YUABTRN,mode7,7,ZUABTRN);
TUABTRN.Usage = CBAATRN_nilusage;
AVABTRN = 1 ;
BVABTRN = A_HEAP(A68_221 ) ;
(*BVABTRN) = TUABTRN ;
CVABTRN = (&A_VINDEX(SUABTRN_consts,AVABTRN)) ;
(*CVABTRN) = BVABTRN;
 /* line 136: */
A_CLOSURE( EVABTRN_generator, FVABTRN_generator, GVABTRN_generator );
A_CALLPROC(EVABTRN_generator,(A68_FALSE, &JVABTRN),(A68_FALSE, &JVABTRN,(EVABTRN_generator).nonlocals));
KVABTRN_fns = JVABTRN;
 /* line 137: */
LVABTRN = 1 ;
MVABTRN = (&A_VINDEX(KVABTRN_fns,LVABTRN)) ;
(*MVABTRN) = OSABTRN_fdec;
 /* line 139: */
NVABTRN.Closureno = Closureno;
 /* line 140: */
NVABTRN.Sort = VKAATRN_outerfn;
OVABTRN.Attrs = MCAATRN_nullattrdecs;
OVABTRN.Ints = ZSABTRN_ints;
OVABTRN.Types = ZTABTRN_types;
OVABTRN.Consts = SUABTRN_consts;
OVABTRN.Fns = KVABTRN_fns;
 /* line 141: */
PVABTRN = A_HEAP(A68_301 ) ;
(*PVABTRN) = OVABTRN ;
NVABTRN.Environ = PVABTRN;
QVABTRN = NVABTRN;
} 
A_PROC_EXIT(sample_outer);
*ReturnedValue = (QVABTRN);
return;
} 
#undef NL

A_STATIC A68_298 * SVABTRN_sample_fndec(A68_INT  Closureno)
{ 
A68_263 * TVABTRN_inputs;
A68_263  UVABTRN;  /* collateral clause result */
A68_263 * VVABTRN_outputs;
A68_263  WVABTRN;  /* collateral clause result */
A68_469  YVABTRN_generator;   /* proc value of non-global proc */
A68_300  DWABTRN;  /* avoid structure result */
A68_300  EWABTRN_nametypes;
A68_297  FWABTRN;  /* collateral clause result */
A68_200  GWABTRN;  /* OPERATORS - mode -> union mode */
A68_193 * HWABTRN;  /* YIELD */
A68_175  IWABTRN;  /* OPERATORS - mode -> union mode */
A68_INT  JWABTRN;  /* YIELD */
A68_297 * KWABTRN;  /* YIELD */
A68_297  LWABTRN;  /* collateral clause result */
A68_200  MWABTRN;  /* OPERATORS - mode -> union mode */
A68_193 * NWABTRN;  /* YIELD */
A68_175  OWABTRN;  /* OPERATORS - mode -> union mode */
A68_INT  PWABTRN;  /* YIELD */
A68_297 * QWABTRN;  /* YIELD */
A68_182 * RWABTRN_usage;
A68_182  SWABTRN;  /* collateral clause result */
A68_298  TWABTRN;  /* collateral clause result */
A68_175  UWABTRN;  /* OPERATORS - mode -> union mode */
A68_294  VWABTRN;  /* OPERATORS - mode -> union mode */
A68_298 * WWABTRN;  /* clause result */
A68_298 * XWABTRN;  /* YIELD */
A_PROC_ENTRY(sample_fndec);
 /* line 144: */
 /* line 147: */
{ 
TVABTRN_inputs = (A_HEAP(A68_263 ));
UVABTRN.Nameno = 1;
UVABTRN.Rest = NAAATRN_nilnames;
(*TVABTRN_inputs) = UVABTRN;
 /* line 148: */
VVABTRN_outputs = (A_HEAP(A68_263 ));
WVABTRN.Nameno = 2;
WVABTRN.Rest = NAAATRN_nilnames;
(*VVABTRN_outputs) = WVABTRN;
 /* line 149: */
A_CLOSURE( YVABTRN_generator, ZVABTRN_generator, AWABTRN_generator );
A_CALLPROC(YVABTRN_generator,(A68_FALSE, &DWABTRN),(A68_FALSE, &DWABTRN,(YVABTRN_generator).nonlocals));
EWABTRN_nametypes = DWABTRN;
 /* line 150: */
FWABTRN.Name = TTCAOST_nullid;
HWABTRN = NFAATRN_maketmacpar(1) ;
FWABTRN.Type = A_UNITE(GWABTRN,mode8,8,HWABTRN);
FWABTRN.Attr = A_UNITE(IWABTRN,mode5,5,(&ZHAATRN_attrnull));
JWABTRN = 1 ;
KWABTRN = (&A_VINDEX(EWABTRN_nametypes,JWABTRN)) ;
(*KWABTRN) = FWABTRN;
 /* line 151: */
LWABTRN.Name = TTCAOST_nullid;
NWABTRN = NFAATRN_maketmacpar(1) ;
LWABTRN.Type = A_UNITE(MWABTRN,mode8,8,NWABTRN);
LWABTRN.Attr = A_UNITE(OWABTRN,mode5,5,(&ZHAATRN_attrnull));
PWABTRN = 2 ;
QWABTRN = (&A_VINDEX(EWABTRN_nametypes,PWABTRN)) ;
(*QWABTRN) = LWABTRN;
 /* line 152: */
RWABTRN_usage = (A_HEAP(A68_182 ));
SWABTRN.Contextno = 0;
SWABTRN.Closureno = Closureno;
SWABTRN.Libv_spec = 0;
SWABTRN.Libv_body = 0;
SWABTRN.Import = A68_FALSE;
SWABTRN.Export = A68_FALSE;
(*RWABTRN_usage) = SWABTRN;
 /* line 153: */
TWABTRN.Sort = OKAATRN_outerdec;
TWABTRN.Macro = A68_TRUE;
TWABTRN.Fnname = TPABTRN_samplename;
TWABTRN.Macspecs = GCAATRN_nullmacspecs;
TWABTRN.Attr = A_UNITE(UWABTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 154: */
TWABTRN.Inputs = TVABTRN_inputs;
TWABTRN.Outputs = VVABTRN_outputs;
TWABTRN.Nametypes = EWABTRN_nametypes;
TWABTRN.Fnbody = A_UNITE(VWABTRN,mode12,12,(&LIAATRN_bodynull));
 /* line 155: */
TWABTRN.Usage = RWABTRN_usage;
XWABTRN = A_HEAP(A68_298 ) ;
(*XWABTRN) = TWABTRN ;
WWABTRN = XWABTRN;
} 
A_PROC_EXIT(sample_fndec);
return( WWABTRN );
} 
#undef NL

A_STATIC A68_VOID  DXABTRN_make_sample_inst(A68_INT  Fnno, A68_200  Ty, A68_222  Init, A68_184  Rate, A68_184  Skew, A68_262  *ReturnedValue)
{ 
A68_478  FXABTRN_generator;   /* proc value of non-global proc */
A68_264  KXABTRN;  /* avoid structure result */
A68_264  LXABTRN_params;
A68_265  MXABTRN;  /* collateral clause result */
A68_266  NXABTRN;  /* OPERATORS - mode -> union mode */
A68_209  OXABTRN;  /* YIELD */
A68_INT  PXABTRN;  /* YIELD */
A68_265 * QXABTRN;  /* YIELD */
A68_265  RXABTRN;  /* collateral clause result */
A68_266  SXABTRN;  /* OPERATORS - mode -> union mode */
A68_267  TXABTRN;  /* YIELD */
A68_INT  UXABTRN;  /* YIELD */
A68_265 * VXABTRN;  /* YIELD */
A68_265  WXABTRN;  /* collateral clause result */
A68_266  XXABTRN;  /* OPERATORS - mode -> union mode */
A68_195  YXABTRN;  /* YIELD */
A68_INT  ZXABTRN;  /* YIELD */
A68_265 * AYABTRN;  /* YIELD */
A68_265  BYABTRN;  /* collateral clause result */
A68_266  CYABTRN;  /* OPERATORS - mode -> union mode */
A68_195  DYABTRN;  /* YIELD */
A68_INT  EYABTRN;  /* YIELD */
A68_265 * FYABTRN;  /* YIELD */
A68_262  GYABTRN;  /* collateral clause result */
A68_175  HYABTRN;  /* OPERATORS - mode -> union mode */
A68_262  IYABTRN;  /* clause result */
A_PROC_ENTRY(make_sample_inst);
 /* line 160: */
 /* line 162: */
{ 
A_CLOSURE( FXABTRN_generator, GXABTRN_generator, HXABTRN_generator );
A_CALLPROC(FXABTRN_generator,(A68_FALSE, &KXABTRN),(A68_FALSE, &KXABTRN,(FXABTRN_generator).nonlocals));
LXABTRN_params = KXABTRN;
 /* line 163: */
MXABTRN.Sort = AJAATRN_explicitmacpar;
OXABTRN = (*XFAATRN_maketypetag(Ty)) ;
MXABTRN.Param = A_UNITE(NXABTRN,mode3,3,OXABTRN);
PXABTRN = 1 ;
QXABTRN = (&A_VINDEX(LXABTRN_params,PXABTRN)) ;
(*QXABTRN) = MXABTRN;
 /* line 164: */
RXABTRN.Sort = AJAATRN_explicitmacpar;
TXABTRN = (*WGAATRN_makeunittag(Init)) ;
RXABTRN.Param = A_UNITE(SXABTRN,mode4,4,TXABTRN);
UXABTRN = 2 ;
VXABTRN = (&A_VINDEX(LXABTRN_params,UXABTRN)) ;
(*VXABTRN) = RXABTRN;
 /* line 165: */
WXABTRN.Sort = AJAATRN_explicitmacpar;
YXABTRN = (*DFAATRN_makeformulatag(Rate)) ;
WXABTRN.Param = A_UNITE(XXABTRN,mode2,2,YXABTRN);
ZXABTRN = 3 ;
AYABTRN = (&A_VINDEX(LXABTRN_params,ZXABTRN)) ;
(*AYABTRN) = WXABTRN;
 /* line 166: */
BYABTRN.Sort = AJAATRN_explicitmacpar;
DYABTRN = (*DFAATRN_makeformulatag(Skew)) ;
BYABTRN.Param = A_UNITE(CYABTRN,mode2,2,DYABTRN);
EYABTRN = 4 ;
FYABTRN = (&A_VINDEX(LXABTRN_params,EYABTRN)) ;
(*FYABTRN) = BYABTRN;
 /* line 167: */
GYABTRN.Fnno = Fnno;
GYABTRN.Macparams = LXABTRN_params;
 /* line 168: */
GYABTRN.Attr = A_UNITE(HYABTRN,mode5,5,(&ZHAATRN_attrnull));
IYABTRN = GYABTRN;
} 
A_PROC_EXIT(make_sample_inst);
*ReturnedValue = (IYABTRN);
return;
} 
#undef NL
 /* line 173: */

A_STATIC A68_VOID  NYABTRN_fmacpar_remove(A68_184  F, A68_414 * Tprocs, A68_184  Period, A68_283  Decl, A68_375  *ReturnedValue)
{ 
A68_184  OYABTRN;  /* united object - for case conformity */
A68_188 * PYABTRN_fn;
A68_283  QYABTRN;  /* united object - for case conformity */
A68_188  RYABTRN_fd;
A68_375  SYABTRN;  /* collateral clause result */
A68_375  TYABTRN;  /* clause result */
A68_375  UYABTRN;  /* collateral clause result */
A68_375  VYABTRN;  /* collateral clause result */
A68_418  WYABTRN;  /* CALL */
A68_375  XYABTRN;  /* avoid structure result */
A_PROC_ENTRY(fmacpar_remove);
 /* line 174: */
 /* line 176: */
{ 
 /* line 177: */
OYABTRN = F ;
switch ( OYABTRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
PYABTRN_fn = (OYABTRN.data.mode4);
 /* line 178: */
QYABTRN = Decl ;
switch ( QYABTRN.mode )
{ 
case 2: /* STRUCT(INT)  */
RYABTRN_fd = (QYABTRN.data.mode2);
 /* line 179: */
if ( ((*(&(PYABTRN_fn->Intno)))==RYABTRN_fd.Intno) )
{ 
SYABTRN.F = Period;
 /* line 180: */
SYABTRN.C = A68_TRUE;
TYABTRN = SYABTRN;
} 
else
{ 
UYABTRN.F = F;
 /* line 181: */
 /* line 182: */
UYABTRN.C = A68_FALSE;
TYABTRN = UYABTRN;
} 
break;
default: 
VYABTRN.F = F;
 /* line 183: */
 /* line 184: */
VYABTRN.C = A68_FALSE;
TYABTRN = VYABTRN;
break;
} 
break;
default: 
 /* line 185: */
 /* line 186: */
WYABTRN = (*(&(AWLATRN_nulltprocs->Formula))) ;
A_CALLPROC(WYABTRN,(F, Tprocs, &XYABTRN),(F, Tprocs, &XYABTRN,(WYABTRN).nonlocals));
TYABTRN = XYABTRN;
break;
} 
} 
A_PROC_EXIT(fmacpar_remove);
*ReturnedValue = (TYABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZYABTRN_terminals_unit(A68_263 * Inputs, A68_222  *ReturnedValue)
{ 
A68_263 * AZABTRN_ns;
A68_227  BZABTRN;  /* collateral clause result */
A68_222  CZABTRN;  /* clause result */
A68_227 * DZABTRN;  /* YIELD */
A68_222  EZABTRN;  /* OPERATORS - mode -> union mode */
A68_237 * FZABTRN_us;
A68_237 ** GZABTRN_usptr;
A68_237  HZABTRN;  /* collateral clause result */
A68_227  IZABTRN;  /* collateral clause result */
A68_227 * JZABTRN;  /* YIELD */
A68_222  KZABTRN;  /* OPERATORS - mode -> union mode */
A68_237 * LZABTRN;  /* YIELD */
A68_222  MZABTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(terminals_unit);
 /* line 190: */
 /* line 191: */
{ 
AZABTRN_ns = Inputs;
 /* line 192: */
 /* line 193: */
if ( ((*(&(AZABTRN_ns->Rest)))==NAAATRN_nilnames) )
{ 
BZABTRN.Sort = KKAATRN_usource;
 /* line 194: */
BZABTRN.Nameno = (*(&(AZABTRN_ns->Nameno)));
DZABTRN = A_HEAP(A68_227 ) ;
(*DZABTRN) = BZABTRN ;
CZABTRN = A_UNITE(EZABTRN,mode11,11,DZABTRN);
} 
else
{ 
FZABTRN_us = IAAATRN_nilustr;
GZABTRN_usptr = (&FZABTRN_us);
 /* line 195: */
for ( ;; )
{ 
 /* line 196: */
if ( !((AZABTRN_ns!=NAAATRN_nilnames)) ) break;
 /* line 197: */
IZABTRN.Sort = KKAATRN_usource;
IZABTRN.Nameno = (*(&(AZABTRN_ns->Nameno)));
JZABTRN = A_HEAP(A68_227 ) ;
(*JZABTRN) = IZABTRN ;
HZABTRN.Elem = A_UNITE(KZABTRN,mode11,11,JZABTRN);
HZABTRN.Rest = IAAATRN_nilustr;
LZABTRN = A_HEAP(A68_237 ) ;
(*LZABTRN) = HZABTRN ;
(*GZABTRN_usptr) = LZABTRN;
 /* line 198: */
GZABTRN_usptr = (&((*GZABTRN_usptr)->Rest));
 /* line 199: */
 /* line 200: */
AZABTRN_ns = (*(&(AZABTRN_ns->Rest)));
}
 /* line 201: */
 /* line 202: */
 /* line 203: */
CZABTRN = A_UNITE(MZABTRN,mode21,21,FZABTRN_us);
} 
} 
A_PROC_EXIT(terminals_unit);
*ReturnedValue = (CZABTRN);
return;
} 
#undef NL

A_STATIC A68_464 * QZABTRN_scaled(A68_BOOL  Faster, A68_184  Scale, A68_INT  Rate)
{ 
A68_INT  RZABTRN_int_scale;
A68_INT  SZABTRN;  /* clause result */
A68_INT  TZABTRN;  /* ADICOPS - MOD */
A68_INT  UZABTRN_scaled_rate;
A68_464  VZABTRN;  /* collateral clause result */
A68_464 * WZABTRN;  /* clause result */
A68_464 * XZABTRN;  /* YIELD */
A_PROC_ENTRY(scaled);
 /* line 207: */
 /* line 211: */
{ 
RZABTRN_int_scale = XOMATRN_int(Scale);
 /* line 212: */
 /* line 213: */
if ( Faster )
{ 
 /* line 214: */
SZABTRN = (Rate*RZABTRN_int_scale);
} 
else
{ 
 /* line 215: */
if ( (A_MOD(Rate,RZABTRN_int_scale,TZABTRN)==0) )
{ 
 /* line 216: */
 /* line 217: */
SZABTRN = (Rate/RZABTRN_int_scale);
} 
else
{ 
SZABTRN = Rate;
} 
} 
UZABTRN_scaled_rate = SZABTRN;
 /* line 218: */
VZABTRN.Faster = Faster;
VZABTRN.Scale = Scale;
 /* line 219: */
VZABTRN.Rate = UZABTRN_scaled_rate;
XZABTRN = A_HEAP(A68_464 ) ;
(*XZABTRN) = VZABTRN ;
WZABTRN = XZABTRN;
} 
A_PROC_EXIT(scaled);
return( WZABTRN );
} 
#undef NL

A_STATIC A68_VOID  AABBTRN_multiply(A68_184  Fa, A68_184  Fb, A68_184  *ReturnedValue)
{ 
A68_INT  BABBTRN_b;
A68_184  CABBTRN;  /* clause result */
A68_184  DABBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * EABBTRN;  /* YIELD */
A68_189  FABBTRN;  /* collateral clause result */
A68_189 * GABBTRN;  /* YIELD */
A68_184  HABBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(multiply);
 /* line 222: */
 /* line 223: */
{ 
BABBTRN_b = XOMATRN_int(Fb);
 /* line 224: */
if ( (BABBTRN_b==0) )
{ 
 /* line 225: */
EABBTRN = NNMATRN_makefint(0) ;
CABBTRN = A_UNITE(DABBTRN,mode1,1,EABBTRN);
} 
else
{ 
 /* line 226: */
if ( (BABBTRN_b==1) )
{ 
CABBTRN = Fa;
} 
else
{ 
FABBTRN.Left = Fa;
FABBTRN.Sort = OJAATRN_fmult;
 /* line 227: */
FABBTRN.Right = Fb;
 /* line 228: */
GABBTRN = A_HEAP(A68_189 ) ;
(*GABBTRN) = FABBTRN ;
CABBTRN = A_UNITE(HABBTRN,mode5,5,GABBTRN);
} 
} 
} 
A_PROC_EXIT(multiply);
*ReturnedValue = (CABBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KABBTRN_divide(A68_184  Fa, A68_184  Fb, A68_184  *ReturnedValue)
{ 
A68_INT  LABBTRN_b;
A68_184  MABBTRN;  /* clause result */
A68_189  NABBTRN;  /* collateral clause result */
A68_189 * OABBTRN;  /* YIELD */
A68_184  PABBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(divide);
 /* line 231: */
 /* line 232: */
{ 
LABBTRN_b = XOMATRN_int(Fb);
 /* line 233: */
if ( (LABBTRN_b==1) )
{ 
MABBTRN = Fa;
} 
else
{ 
NABBTRN.Left = Fa;
NABBTRN.Sort = PJAATRN_fidiv;
NABBTRN.Right = Fb;
 /* line 234: */
OABBTRN = A_HEAP(A68_189 ) ;
(*OABBTRN) = NABBTRN ;
MABBTRN = A_UNITE(PABBTRN,mode5,5,OABBTRN);
} 
} 
A_PROC_EXIT(divide);
*ReturnedValue = (MABBTRN);
return;
} 
#undef NL

A_STATIC A68_INT  SABBTRN_lcm(A68_INT  A, A68_INT  B)
{ 
A68_INT  TABBTRN;  /* clause result */
A68_INT  UABBTRN_m;
A68_INT  VABBTRN;  /* clause result */
A68_INT  WABBTRN_n;
A68_INT  XABBTRN_remainder;
A68_INT  YABBTRN;  /* ADICOPS - MOD */
A68_INT  ZABBTRN;  /* clause result */
A_PROC_ENTRY(lcm);
 /* line 238: */
 /* line 242: */
{ 
if ( (A>B) )
{ 
TABBTRN = A;
} 
else
{ 
TABBTRN = B;
} 
UABBTRN_m = TABBTRN;
 /* line 243: */
if ( (A>B) )
{ 
VABBTRN = B;
} 
else
{ 
VABBTRN = A;
} 
WABBTRN_n = VABBTRN;
 /* line 244: */
XABBTRN_remainder = 0;
 /* line 245: */
for ( ;; )
{ 
 /* line 246: */
if ( !(((XABBTRN_remainder = A_MOD(UABBTRN_m,WABBTRN_n,YABBTRN))!=0)) ) break;
UABBTRN_m = WABBTRN_n;
WABBTRN_n = XABBTRN_remainder;
}
 /* line 247: */
 /* line 248: */
ZABBTRN = ((A/WABBTRN_n)*B);
} 
A_PROC_EXIT(lcm);
return( ZABBTRN );
} 
#undef NL
 /* line 254: */
 /* line 255: */

A_STATIC A68_VOID  FBBBTRN_outerfn_scale(A68_307  Ofn, A68_414 * Tprocs, A68_483  Closureinfo, A68_465 ** Outerfn_info, A68_INT  Sampleclosureno, A68_412  *ReturnedValue)
{ 
A68_301 * GBBBTRN_env;
A68_306 * HBBBTRN_envfns;
A68_486  JBBBTRN_generator;   /* proc value of non-global proc */
A68_485  OBBBTRN;  /* avoid structure result */
A68_485  PBBBTRN_environscales;
A68_INT  QBBBTRN_maxintno;
A68_BOOL  RBBBTRN_envchanged;
A68_487  TBBBTRN_newenviron;   /* proc value of non-global proc */
A68_488  PCBBTRN_instance_scale;   /* proc value of non-global proc */
A68_489  HEBBTRN_fnbody_scale;   /* proc value of non-global proc */
A68_437  DIBBTRN_declaration_scale;
A68_491  PIBBTRN_fndec_scale;   /* proc value of non-global proc */
A68_437  HLBBTRN_anonymous;   /* proc value of non-global proc */
A68_INT  WLBBTRN;  /* YIELD */
A68_464 ** XLBBTRN;  /* YIELD */
A68_298 ** YLBBTRN_fns;
A68_464 ** ZLBBTRN_scales;
A68_306  AMBBTRN;  /* OPERATORS - trim index */
A68_306  BMBBTRN;  /* forall yield */
A68_485  CMBBTRN;  /* OPERATORS - trim index */
A68_485  DMBBTRN;  /* forall yield */
A68_INT  EMBBTRN;  /* forall loop counter */
A68_464 * FMBBTRN;  /* clause result */
A68_INT  GMBBTRN;  /* YIELD */
A68_411  HMBBTRN;  /* avoid structure result */
A68_411  IMBBTRN_fdecc;
A68_INT  JMBBTRN;  /* YIELD */
A68_464 ** KMBBTRN;  /* YIELD */
A68_BOOL  LMBBTRN;  /* optbool result */
A68_INT  MMBBTRN;  /* YIELD */
A68_298 ** NMBBTRN;  /* YIELD */
A68_303  OMBBTRN_ints;
A68_470  QMBBTRN_generator;   /* proc value of non-global proc */
A68_303  VMBBTRN;  /* avoid structure result */
A68_303  WMBBTRN_newints;
A68_303  XMBBTRN;  /* OPERATORS - trim index */
A68_303  YMBBTRN;  /* YIELD */
A68_197 ** ZMBBTRN_it;
A68_303  ANBBTRN;  /* OPERATORS - trim index */
A68_303  BNBBTRN;  /* forall yield */
A68_INT  CNBBTRN;  /* forall loop counter */
A68_197  DNBBTRN;  /* collateral clause result */
A68_175  ENBBTRN;  /* OPERATORS - mode -> union mode */
A68_198  FNBBTRN;  /* OPERATORS - mode -> union mode */
A68_197 * GNBBTRN;  /* YIELD */
A68_303 * HNBBTRN;  /* YIELD */
A68_INT  INBBTRN_fnno;
A68_INT  JNBBTRN;  /* to part of loop */
A68_INT  KNBBTRN;  /* YIELD */
A68_INT  LNBBTRN_newclosno;
A68_298 * MNBBTRN_newcopy;
A68_182 * NNBBTRN;  /* YIELD */
A68_182 ** ONBBTRN;  /* YIELD */
A68_INT * PNBBTRN;  /* YIELD */
A68_298 ** QNBBTRN;  /* YIELD */
A68_412  RNBBTRN;  /* collateral clause result */
A68_412  SNBBTRN;  /* clause result */
A68_412  TNBBTRN;  /* collateral clause result */
A_PROC_ENTRY(outerfn_scale);
 /* line 256: */
 /* line 257: */
{ 
GBBBTRN_env = (A_HEAP(A68_301 ));
(*GBBBTRN_env) = (*Ofn.Environ);
 /* line 258: */
HBBBTRN_envfns = (&(GBBBTRN_env->Fns));
 /* line 259: */
A_CLOSURE( JBBBTRN_generator, KBBBTRN_generator, LBBBTRN_generator );
(( LBBBTRN_generator * ) ( JBBBTRN_generator.nonlocals )) -> HBBBTRN_envfns = HBBBTRN_envfns;
A_CALLPROC(JBBBTRN_generator,(A68_FALSE, &OBBBTRN),(A68_FALSE, &OBBBTRN,(JBBBTRN_generator).nonlocals));
PBBBTRN_environscales = OBBBTRN;
 /* line 261: */
QBBBTRN_maxintno = (*(&(GBBBTRN_env->Ints))).upb;
 /* line 263: */
RBBBTRN_envchanged = A68_FALSE;
 /* line 264: */
A_CLOSURE( TBBBTRN_newenviron, UBBBTRN_newenviron, VBBBTRN_newenviron );
(( VBBBTRN_newenviron * ) ( TBBBTRN_newenviron.nonlocals )) -> RBBBTRN_envchanged = (&RBBBTRN_envchanged);
(( VBBBTRN_newenviron * ) ( TBBBTRN_newenviron.nonlocals )) -> HBBBTRN_envfns = HBBBTRN_envfns;
(( VBBBTRN_newenviron * ) ( TBBBTRN_newenviron.nonlocals )) -> Sampleclosureno = Sampleclosureno;
 /* line 283: */
A_CLOSURE( PCBBTRN_instance_scale, QCBBTRN_instance_scale, RCBBTRN_instance_scale );
(( RCBBTRN_instance_scale * ) ( PCBBTRN_instance_scale.nonlocals )) -> TBBBTRN_newenviron = TBBBTRN_newenviron;
(( RCBBTRN_instance_scale * ) ( PCBBTRN_instance_scale.nonlocals )) -> GBBBTRN_env = GBBBTRN_env;
(( RCBBTRN_instance_scale * ) ( PCBBTRN_instance_scale.nonlocals )) -> QBBBTRN_maxintno = (&QBBBTRN_maxintno);
 /* line 313: */
A_CLOSURE( HEBBTRN_fnbody_scale, IEBBTRN_fnbody_scale, JEBBTRN_fnbody_scale );
(( JEBBTRN_fnbody_scale * ) ( HEBBTRN_fnbody_scale.nonlocals )) -> QBBBTRN_maxintno = (&QBBBTRN_maxintno);
(( JEBBTRN_fnbody_scale * ) ( HEBBTRN_fnbody_scale.nonlocals )) -> TBBBTRN_newenviron = TBBBTRN_newenviron;
(( JEBBTRN_fnbody_scale * ) ( HEBBTRN_fnbody_scale.nonlocals )) -> PBBBTRN_environscales = PBBBTRN_environscales;
(( JEBBTRN_fnbody_scale * ) ( HEBBTRN_fnbody_scale.nonlocals )) -> GBBBTRN_env = GBBBTRN_env;
 /* line 379: */
 /* line 381: */
 /* line 389: */
A_CLOSURE( PIBBTRN_fndec_scale, QIBBTRN_fndec_scale, RIBBTRN_fndec_scale );
(( RIBBTRN_fndec_scale * ) ( PIBBTRN_fndec_scale.nonlocals )) -> QBBBTRN_maxintno = (&QBBBTRN_maxintno);
(( RIBBTRN_fndec_scale * ) ( PIBBTRN_fndec_scale.nonlocals )) -> HEBBTRN_fnbody_scale = HEBBTRN_fnbody_scale;
(( RIBBTRN_fndec_scale * ) ( PIBBTRN_fndec_scale.nonlocals )) -> PCBBTRN_instance_scale = PCBBTRN_instance_scale;
(( RIBBTRN_fndec_scale * ) ( PIBBTRN_fndec_scale.nonlocals )) -> PBBBTRN_environscales = PBBBTRN_environscales;
(( RIBBTRN_fndec_scale * ) ( PIBBTRN_fndec_scale.nonlocals )) -> DIBBTRN_declaration_scale = (&DIBBTRN_declaration_scale);
(( RIBBTRN_fndec_scale * ) ( PIBBTRN_fndec_scale.nonlocals )) -> Outerfn_info = Outerfn_info;
 /* line 429: */
A_CLOSURE( HLBBTRN_anonymous, ILBBTRN_anonymous, JLBBTRN_anonymous );
(( JLBBTRN_anonymous * ) ( HLBBTRN_anonymous.nonlocals )) -> GBBBTRN_env = GBBBTRN_env;
(( JLBBTRN_anonymous * ) ( HLBBTRN_anonymous.nonlocals )) -> PIBBTRN_fndec_scale = PIBBTRN_fndec_scale;
(( JLBBTRN_anonymous * ) ( HLBBTRN_anonymous.nonlocals )) -> TBBBTRN_newenviron = TBBBTRN_newenviron;
DIBBTRN_declaration_scale = HLBBTRN_anonymous;
 /* line 446: */
WLBBTRN = 1 ;
XLBBTRN = (&A_VINDEX(PBBBTRN_environscales,WLBBTRN)) ;
(*XLBBTRN) = JPABTRN_nilscale;
 /* line 447: */
 /* line 448: */
if ( ((*HBBBTRN_envfns).upb>1) )
{ 
 /* line 449: */
BMBBTRN = A_VTRIM(AMBBTRN,((*HBBBTRN_envfns)),A_VTSCRIPT(&(AMBBTRN.upb),((*HBBBTRN_envfns)).upb,2,((*HBBBTRN_envfns)).upb)) ;
DMBBTRN = A_VTRIM(CMBBTRN,(PBBBTRN_environscales),A_VTSCRIPT(&(CMBBTRN.upb),(PBBBTRN_environscales).upb,2,(PBBBTRN_environscales).upb)) ;
EMBBTRN = BMBBTRN.upb -1;
if ( EMBBTRN != DMBBTRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
YLBBTRN_fns = BMBBTRN.data;
ZLBBTRN_scales = DMBBTRN.data;
for (;EMBBTRN-- >= 0;
(YLBBTRN_fns++
,ZLBBTRN_scales++
) )
{
 /* line 450: */
 /* line 451: */
if ( ((*(&((*YLBBTRN_fns)->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 452: */
 /* line 453: */
GMBBTRN = (*(&((*(&((*YLBBTRN_fns)->Usage)))->Closureno))) ;
FMBBTRN = (*(&((*(&A_VINDEX(Closureinfo,GMBBTRN)))->Scales)));
} 
else
{ 
 /* line 454: */
FMBBTRN = JPABTRN_nilscale;
} 
(*ZLBBTRN_scales) = FMBBTRN;
}
 /* line 455: */
} 
 /* line 457: */
A_CALLPROC(PIBBTRN_fndec_scale,(CQMATRN_get_outerfn(Ofn), Tprocs, 1, &HMBBTRN),(CQMATRN_get_outerfn(Ofn), Tprocs, 1, &HMBBTRN,(PIBBTRN_fndec_scale).nonlocals));
IMBBTRN_fdecc = HMBBTRN;
 /* line 459: */
JMBBTRN = 1 ;
KMBBTRN = (&((*Outerfn_info)->Scales)) ;
(*KMBBTRN) = (*(&A_VINDEX(PBBBTRN_environscales,JMBBTRN)));
 /* line 460: */
LMBBTRN = IMBBTRN_fdecc.C;
if ( ! LMBBTRN )
{LMBBTRN = (PBBBTRN_environscales.upb>1);
}
if ( LMBBTRN )
{ 
A_CALLPROC(TBBBTRN_newenviron,(A68_FALSE),(A68_FALSE,(TBBBTRN_newenviron).nonlocals));
} 
 /* line 461: */
MMBBTRN = 1 ;
NMBBTRN = (&A_VINDEX((*HBBBTRN_envfns),MMBBTRN)) ;
(*NMBBTRN) = IMBBTRN_fdecc.F;
 /* line 463: */
OMBBTRN_ints = (*(&(Ofn.Environ->Ints)));
 /* line 464: */
 /* line 465: */
if ( (QBBBTRN_maxintno>OMBBTRN_ints.upb) )
{ 
A_CLOSURE( QMBBTRN_generator, RMBBTRN_generator, SMBBTRN_generator );
(( SMBBTRN_generator * ) ( QMBBTRN_generator.nonlocals )) -> QBBBTRN_maxintno = (&QBBBTRN_maxintno);
A_CALLPROC(QMBBTRN_generator,(A68_FALSE, &VMBBTRN),(A68_FALSE, &VMBBTRN,(QMBBTRN_generator).nonlocals));
WMBBTRN_newints = VMBBTRN;
 /* line 466: */
if ( (OMBBTRN_ints.upb>0) )
{ 
YMBBTRN = A_VTRIM(XMBBTRN,(WMBBTRN_newints),A_VTSCRIPT(&(XMBBTRN.upb),(WMBBTRN_newints).upb,1,OMBBTRN_ints.upb)) ;
A_VASSIGN2(OMBBTRN_ints,YMBBTRN,A68_197 *);
} 
 /* line 467: */
 /* line 468: */
BNBBTRN = A_VTRIM(ANBBTRN,(WMBBTRN_newints),A_VTSCRIPT(&(ANBBTRN.upb),(WMBBTRN_newints).upb,(OMBBTRN_ints.upb+1),(WMBBTRN_newints).upb)) ;
CNBBTRN = BNBBTRN.upb -1;
ZMBBTRN_it = BNBBTRN.data;
for (;CNBBTRN-- >= 0;
(ZMBBTRN_it++
) )
{
 /* line 469: */
DNBBTRN.Sort = QKAATRN_macpardec;
DNBBTRN.Intname = CQABTRN_periodname;
DNBBTRN.Attr = A_UNITE(ENBBTRN,mode5,5,(&ZHAATRN_attrnull));
DNBBTRN.Value = A_UNITE(FNBBTRN,mode10,10,(&BIAATRN_fnull));
 /* line 470: */
DNBBTRN.Usage = CBAATRN_nilusage;
GNBBTRN = A_HEAP(A68_197 ) ;
(*GNBBTRN) = DNBBTRN ;
(*ZMBBTRN_it) = GNBBTRN;
}
 /* line 471: */
 /* line 472: */
HNBBTRN = (&(GBBBTRN_env->Ints)) ;
(*HNBBTRN) = WMBBTRN_newints;
} 
 /* line 474: */
 /* line 475: */
if ( (PBBBTRN_environscales.upb>1) )
{ 
 /* line 476: */
JNBBTRN = PBBBTRN_environscales.upb;
for ( INBBTRN_fnno = 2;
INBBTRN_fnno <= JNBBTRN;
INBBTRN_fnno += 1 )
{ 
 /* line 477: */
 /* line 478: */
if ( ((*(&((*(&A_VINDEX((*HBBBTRN_envfns),INBBTRN_fnno)))->Sort)))==OKAATRN_outerdec) )
{ 
KNBBTRN = (*(&((*(&((*(&A_VINDEX((*HBBBTRN_envfns),INBBTRN_fnno)))->Usage)))->Closureno))) ;
LNBBTRN_newclosno = (*(&((*(&A_VINDEX(Closureinfo,KNBBTRN)))->Newclosno)));
 /* line 479: */
 /* line 480: */
if ( (LNBBTRN_newclosno>0) )
{ 
MNBBTRN_newcopy = (A_HEAP(A68_298 ));
(*MNBBTRN_newcopy) = (*(*(&A_VINDEX((*HBBBTRN_envfns),INBBTRN_fnno))));
 /* line 481: */
NNBBTRN = A_HEAP(A68_182 ) ;
(*NNBBTRN) = (*(*(&((*(&A_VINDEX((*HBBBTRN_envfns),INBBTRN_fnno)))->Usage)))) ;
ONBBTRN = (&(MNBBTRN_newcopy->Usage)) ;
(*ONBBTRN) = NNBBTRN;
 /* line 482: */
PNBBTRN = (&((*(&(MNBBTRN_newcopy->Usage)))->Closureno)) ;
(*PNBBTRN) = LNBBTRN_newclosno;
 /* line 483: */
 /* line 484: */
 /* line 485: */
 /* line 486: */
QNBBTRN = (&A_VINDEX((*HBBBTRN_envfns),INBBTRN_fnno)) ;
(*QNBBTRN) = MNBBTRN_newcopy;
} 
} 
}
 /* line 487: */
} 
 /* line 488: */
 /* line 489: */
if ( RBBBTRN_envchanged )
{ 
RNBBTRN.O.Closureno = (*(&((*Outerfn_info)->Newclosno)));
RNBBTRN.O.Sort = VKAATRN_outerfn;
RNBBTRN.O.Environ = GBBBTRN_env;
 /* line 490: */
RNBBTRN.C = A68_TRUE;
SNBBTRN = RNBBTRN;
} 
else
{ 
TNBBTRN.O = Ofn;
 /* line 491: */
 /* line 492: */
TNBBTRN.C = A68_FALSE;
SNBBTRN = TNBBTRN;
} 
} 
A_PROC_EXIT(outerfn_scale);
*ReturnedValue = (SNBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YNBBTRN_simulate_fn(A68_307  O, A68_INT  Newclosureno, A68_465 * Info, A68_307  Original, A68_307  *ReturnedValue)
{ 
A68_464 * ZNBBTRN_scales;
A68_INT  AOBBTRN_scale;
A68_184  BOBBTRN;  /* clause result */
A68_184  COBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * DOBBTRN;  /* YIELD */
A68_184  EOBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * FOBBTRN;  /* YIELD */
A68_184  GOBBTRN;  /* OPERATORS - mode -> union mode */
A68_185 * HOBBTRN;  /* YIELD */
A68_184  IOBBTRN_outerfn_rate;
A68_298 * JOBBTRN_newfdec;
A68_299  KOBBTRN_ms;
A68_INT  LOBBTRN_upb;
A68_283  MOBBTRN_decl;
A68_418  POBBTRN_anonymous;   /* proc value of non-global proc */
A68_459  UOBBTRN;  /* OPERATORS - mode -> union mode */
A68_418  VOBBTRN;  /* YIELD */
A68_458  WOBBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_414 * XOBBTRN_rtprocs;
A68_455  YOBBTRN;  /* CALL */
A68_412  ZOBBTRN;  /* avoid structure result */
A68_412  APBBTRN_oc;
A68_298 * BPBBTRN_fdec;
A68_298 * CPBBTRN_orig;
A68_BOOL * DPBBTRN;  /* YIELD */
A68_283  EPBBTRN;  /* united object - for case conformity */
A68_188  FPBBTRN_fn;
A68_303  GPBBTRN_ints;
A68_470  IPBBTRN_generator;   /* proc value of non-global proc */
A68_303  NPBBTRN;  /* avoid structure result */
A68_303  OPBBTRN_newints;
A68_INT  PPBBTRN;  /* YIELD */
A68_198  QPBBTRN;  /* OPERATORS - unite union */
A68_198 * RPBBTRN;  /* YIELD */
A68_303 * SPBBTRN;  /* YIELD */
A68_468  WPBBTRN_generator;   /* proc value of non-global proc */
A68_299  BQBBTRN;  /* avoid structure result */
A68_299  CQBBTRN_macspecs;
A68_299  DQBBTRN;  /* OPERATORS - assign op */
A68_INT * EQBBTRN;  /* YIELD */
A68_299 * FQBBTRN;  /* YIELD */
A68_182 * GQBBTRN;  /* YIELD */
A68_182 ** HQBBTRN;  /* YIELD */
A68_INT * IQBBTRN;  /* YIELD */
A68_307  JQBBTRN;  /* collateral clause result */
A68_307  KQBBTRN;  /* clause result */
A_PROC_ENTRY(simulate_fn);
 /* line 496: */
 /* line 497: */
{ 
ZNBBTRN_scales = (*(&(Info->Scales)));
 /* line 498: */
AOBBTRN_scale = XOMATRN_int((*(&(ZNBBTRN_scales->Scale))));
 /* line 499: */
 /* line 500: */
if ( (AOBBTRN_scale==1) )
{ 
 /* line 501: */
 /* line 502: */
DOBBTRN = NNMATRN_makefint((*(&(ZNBBTRN_scales->Rate)))) ;
BOBBTRN = A_UNITE(COBBTRN,mode1,1,DOBBTRN);
} 
else
{ 
if ( (*(&(ZNBBTRN_scales->Faster))) )
{ 
 /* line 503: */
FOBBTRN = NNMATRN_makefint(((*(&(ZNBBTRN_scales->Rate)))/AOBBTRN_scale)) ;
BOBBTRN = A_UNITE(EOBBTRN,mode1,1,FOBBTRN);
} 
else
{ 
 /* line 504: */
HOBBTRN = NNMATRN_makefint(((*(&(ZNBBTRN_scales->Rate)))*AOBBTRN_scale)) ;
BOBBTRN = A_UNITE(GOBBTRN,mode1,1,HOBBTRN);
} 
} 
IOBBTRN_outerfn_rate = BOBBTRN;
 /* line 506: */
JOBBTRN_newfdec = CQMATRN_get_outerfn(O);
 /* line 507: */
KOBBTRN_ms = (*(&(JOBBTRN_newfdec->Macspecs)));
 /* line 508: */
LOBBTRN_upb = KOBBTRN_ms.upb;
 /* line 509: */
MOBBTRN_decl = (*(&((&A_VINDEX(KOBBTRN_ms,LOBBTRN_upb))->Spec)));
 /* line 510: */
 /* line 511: */
A_CLOSURE( POBBTRN_anonymous, QOBBTRN_anonymous, ROBBTRN_anonymous );
(( ROBBTRN_anonymous * ) ( POBBTRN_anonymous.nonlocals )) -> IOBBTRN_outerfn_rate = IOBBTRN_outerfn_rate;
(( ROBBTRN_anonymous * ) ( POBBTRN_anonymous.nonlocals )) -> MOBBTRN_decl = MOBBTRN_decl;
VOBBTRN = POBBTRN_anonymous ;
XOBBTRN_rtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(WOBBTRN,A_UNITE(UOBBTRN,mode4,4,VOBBTRN),A68_459 ));
 /* line 515: */
YOBBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(YOBBTRN,(O, XOBBTRN_rtprocs, &ZOBBTRN),(O, XOBBTRN_rtprocs, &ZOBBTRN,(YOBBTRN).nonlocals));
APBBTRN_oc = ZOBBTRN;
 /* line 516: */
BPBBTRN_fdec = CQMATRN_get_outerfn(APBBTRN_oc.O);
 /* line 517: */
CPBBTRN_orig = CQMATRN_get_outerfn(Original);
 /* line 518: */
DPBBTRN = (&(BPBBTRN_fdec->Macro)) ;
(*DPBBTRN) = (*(&(CPBBTRN_orig->Macro)));
 /* line 519: */
 /* line 520: */
EPBBTRN = MOBBTRN_decl ;
switch ( EPBBTRN.mode )
{ 
case 2: /* STRUCT(INT)  */
FPBBTRN_fn = (EPBBTRN.data.mode2);
{ 
GPBBTRN_ints = (*(&(APBBTRN_oc.O.Environ->Ints)));
 /* line 521: */
A_CLOSURE( IPBBTRN_generator, JPBBTRN_generator, KPBBTRN_generator );
(( KPBBTRN_generator * ) ( IPBBTRN_generator.nonlocals )) -> GPBBTRN_ints = GPBBTRN_ints;
A_CALLPROC(IPBBTRN_generator,(A68_FALSE, &NPBBTRN),(A68_FALSE, &NPBBTRN,(IPBBTRN_generator).nonlocals));
OPBBTRN_newints = NPBBTRN;
A_VASSIGN2(GPBBTRN_ints,OPBBTRN_newints,A68_197 *);
 /* line 522: */
PPBBTRN = FPBBTRN_fn.Intno ;
RPBBTRN = (&((*(&A_VINDEX(OPBBTRN_newints,PPBBTRN)))->Value)) ;
(*RPBBTRN) = A_UUNITE(QPBBTRN,0,IOBBTRN_outerfn_rate);
 /* line 523: */
 /* line 524: */
 /* line 525: */
SPBBTRN = (&(APBBTRN_oc.O.Environ->Ints)) ;
(*SPBBTRN) = OPBBTRN_newints;
} 
break;
default: 
NKDAOST_sysfault(UPBBTRN);
 /* line 526: */
/*SKIP*/;
break;
} 
 /* line 527: */
A_CLOSURE( WPBBTRN_generator, XPBBTRN_generator, YPBBTRN_generator );
(( YPBBTRN_generator * ) ( WPBBTRN_generator.nonlocals )) -> LOBBTRN_upb = LOBBTRN_upb;
A_CALLPROC(WPBBTRN_generator,(A68_FALSE, &BQBBTRN),(A68_FALSE, &BQBBTRN,(WPBBTRN_generator).nonlocals));
CQBBTRN_macspecs = BQBBTRN;
DQBBTRN = (*(&(BPBBTRN_fdec->Macspecs))) ;
A_VASSIGN2(DQBBTRN,CQBBTRN_macspecs,A68_296 );
 /* line 528: */
EQBBTRN = (&((&A_VINDEX(CQBBTRN_macspecs,LOBBTRN_upb))->Sort)) ;
(*EQBBTRN) = IPABTRN_sftimescale;
 /* line 529: */
FQBBTRN = (&(BPBBTRN_fdec->Macspecs)) ;
(*FQBBTRN) = CQBBTRN_macspecs;
 /* line 530: */
GQBBTRN = A_HEAP(A68_182 ) ;
(*GQBBTRN) = (*(*(&(BPBBTRN_fdec->Usage)))) ;
HQBBTRN = (&(BPBBTRN_fdec->Usage)) ;
(*HQBBTRN) = GQBBTRN;
 /* line 531: */
IQBBTRN = (&((*(&(BPBBTRN_fdec->Usage)))->Closureno)) ;
(*IQBBTRN) = Newclosureno;
 /* line 532: */
JQBBTRN.Closureno = Newclosureno;
JQBBTRN.Sort = VKAATRN_outerfn;
 /* line 533: */
JQBBTRN.Environ = APBBTRN_oc.O.Environ;
KQBBTRN = JQBBTRN;
} 
A_PROC_EXIT(simulate_fn);
*ReturnedValue = (KQBBTRN);
return;
} 
#undef NL

A68_VOID  NQBBTRN_transform_timescale(A68_311 * Oldclose, A68_97  Msg, A68_413  *ReturnedValue)
{ 
A68_BOOL  OQBBTRN_with_timescaling;
A68_311 ** PQBBTRN_newclosure;
A68_496  RQBBTRN_generator;   /* proc value of non-global proc */
A68_483  WQBBTRN;  /* avoid structure result */
A68_483  XQBBTRN_closureinfo;
A68_465 ** YQBBTRN_c;
A68_INT  ZQBBTRN;  /* forall loop counter */
A68_465  ARBBTRN;  /* collateral clause result */
A68_465 * BRBBTRN;  /* YIELD */
A68_497  DRBBTRN_trace_uses;   /* proc value of non-global proc */
A68_498  URBBTRN_fnbody_sort;   /* proc value of non-global proc */
A68_308 * ASBBTRN_outers;
A68_307  BSBBTRN_ofn;
A68_298 * CSBBTRN_fdec;
A68_INT  DSBBTRN;  /* YIELD */
A68_465 * ESBBTRN_info;
A68_BOOL * FSBBTRN;  /* YIELD */
A68_BOOL * GSBBTRN;  /* YIELD */
A68_298 ** HSBBTRN_fn;
A68_306  ISBBTRN;  /* OPERATORS - trim index */
A68_306  JSBBTRN;  /* OPERATORS - trim index */
A68_306  KSBBTRN;  /* forall yield */
A68_INT  LSBBTRN;  /* forall loop counter */
A68_BOOL * MSBBTRN;  /* YIELD */
A68_BOOL * NSBBTRN;  /* YIELD */
A68_INT  OSBBTRN;  /* YIELD */
A68_465 * PSBBTRN_inf;
A68_BOOL * QSBBTRN;  /* YIELD */
A68_BOOL * RSBBTRN;  /* YIELD */
A68_BOOL  SSBBTRN;  /* optbool result */
A68_308 ** TSBBTRN_newptr;
A68_307  USBBTRN_outer;
A68_BOOL  VSBBTRN;  /* optbool result */
A68_INT  WSBBTRN;  /* YIELD */
A68_INT  XSBBTRN_sampleno;
A68_307  YSBBTRN;  /* avoid structure result */
A68_307  ZSBBTRN_o;
A68_INT  ATBBTRN;  /* YIELD */
A68_465 * BTBBTRN_inf;
A68_BOOL  CTBBTRN;  /* optbool result */
A68_INT  DTBBTRN;  /* YIELD */
A68_412  ETBBTRN;  /* avoid structure result */
A68_412  FTBBTRN_foc;
A68_INT  GTBBTRN_newfnno;
A68_INT  HTBBTRN;  /* YIELD */
A68_307  ITBBTRN;  /* avoid structure result */
A68_307  JTBBTRN_fs;
A68_413  KTBBTRN;  /* collateral clause result */
A68_413  LTBBTRN;  /* clause result */
A68_413  MTBBTRN;  /* collateral clause result */
A_PROC_ENTRY(transform_timescale);
 /* line 537: */
 /* line 538: */
{ 
OQBBTRN_with_timescaling = A68_FALSE;
 /* line 539: */
PQBBTRN_newclosure = (A_HEAP(A68_311 *));
(*PQBBTRN_newclosure) = Oldclose;
 /* line 541: */
A_CLOSURE( RQBBTRN_generator, SQBBTRN_generator, TQBBTRN_generator );
(( TQBBTRN_generator * ) ( RQBBTRN_generator.nonlocals )) -> Oldclose = Oldclose;
A_CALLPROC(RQBBTRN_generator,(A68_FALSE, &WQBBTRN),(A68_FALSE, &WQBBTRN,(RQBBTRN_generator).nonlocals));
XQBBTRN_closureinfo = WQBBTRN;
 /* line 542: */
ZQBBTRN = XQBBTRN_closureinfo.upb -1;
YQBBTRN_c = XQBBTRN_closureinfo.data;
for (;ZQBBTRN-- >= 0;
(YQBBTRN_c++
) )
{
ARBBTRN.Scaled = A68_FALSE;
ARBBTRN.Withtime = A68_FALSE;
ARBBTRN.Newclosno = 0;
ARBBTRN.Scales = JPABTRN_nilscale;
BRBBTRN = A_HEAP(A68_465 ) ;
(*BRBBTRN) = ARBBTRN ;
(*YQBBTRN_c) = BRBBTRN;
}
 /* line 544: */
A_CLOSURE( DRBBTRN_trace_uses, ERBBTRN_trace_uses, FRBBTRN_trace_uses );
(( FRBBTRN_trace_uses * ) ( DRBBTRN_trace_uses.nonlocals )) -> XQBBTRN_closureinfo = XQBBTRN_closureinfo;
(( FRBBTRN_trace_uses * ) ( DRBBTRN_trace_uses.nonlocals )) -> PQBBTRN_newclosure = PQBBTRN_newclosure;
(( FRBBTRN_trace_uses * ) ( DRBBTRN_trace_uses.nonlocals )) -> DRBBTRN_trace_uses = DRBBTRN_trace_uses;
(( FRBBTRN_trace_uses * ) ( DRBBTRN_trace_uses.nonlocals )) -> Oldclose = Oldclose;
(( FRBBTRN_trace_uses * ) ( DRBBTRN_trace_uses.nonlocals )) -> Msg = Msg;
 /* line 560: */
 /* line 562: */
A_CLOSURE( URBBTRN_fnbody_sort, VRBBTRN_fnbody_sort, WRBBTRN_fnbody_sort );
(( WRBBTRN_fnbody_sort * ) ( URBBTRN_fnbody_sort.nonlocals )) -> URBBTRN_fnbody_sort = URBBTRN_fnbody_sort;
 /* line 573: */
ASBBTRN_outers = (*(&(Oldclose->Outers)));
 /* line 574: */
for ( ;; )
{ 
 /* line 575: */
if ( !((ASBBTRN_outers!=HBAATRN_nilouters)) ) break;
BSBBTRN_ofn = (*(&(ASBBTRN_outers->Outer)));
 /* line 576: */
 /* line 577: */
if ( (BSBBTRN_ofn.Sort==VKAATRN_outerfn) )
{ 
CSBBTRN_fdec = CQMATRN_get_outerfn(BSBBTRN_ofn);
 /* line 578: */
DSBBTRN = BSBBTRN_ofn.Closureno ;
ESBBTRN_info = (*(&A_VINDEX(XQBBTRN_closureinfo,DSBBTRN)));
 /* line 579: */
 /* line 580: */
switch ( A_CALLPROC(URBBTRN_fnbody_sort,((*(&(CSBBTRN_fdec->Fnbody)))),((*(&(CSBBTRN_fdec->Fnbody))),(URBBTRN_fnbody_sort).nonlocals)) )
{ 
case 1: 
 /* line 581: */
FSBBTRN = (&(ESBBTRN_info->Scaled)) ;
(*FSBBTRN) = A68_TRUE;
break;
case 2: 
 /* line 582: */
 /* line 583: */
GSBBTRN = (&(ESBBTRN_info->Withtime)) ;
(*GSBBTRN) = A68_TRUE;
break;
default: 
 /* line 584: */
ISBBTRN = (*(&(BSBBTRN_ofn.Environ->Fns))) ;
KSBBTRN = A_VTRIM(JSBBTRN,(ISBBTRN),A_VTSCRIPT(&(JSBBTRN.upb),(ISBBTRN).upb,2,(ISBBTRN).upb)) ;
LSBBTRN = KSBBTRN.upb -1;
HSBBTRN_fn = KSBBTRN.data;
for (;LSBBTRN-- >= 0;
(HSBBTRN_fn++
) )
{
 /* line 585: */
if ( ((*(&((*HSBBTRN_fn)->Sort)))==PKAATRN_localdec) )
{ 
 /* line 586: */
switch ( A_CALLPROC(URBBTRN_fnbody_sort,((*(&((*HSBBTRN_fn)->Fnbody)))),((*(&((*HSBBTRN_fn)->Fnbody))),(URBBTRN_fnbody_sort).nonlocals)) )
{ 
case 1: 
 /* line 587: */
MSBBTRN = (&(ESBBTRN_info->Scaled)) ;
(*MSBBTRN) = A68_TRUE;
break;
case 2: 
 /* line 588: */
 /* line 589: */
NSBBTRN = (&(ESBBTRN_info->Withtime)) ;
(*NSBBTRN) = A68_TRUE;
break;
default: 
 /* line 590: */
/*SKIP*/;
break;
} 
} 
else
{ 
 /* line 591: */
if ( ((*(&((*HSBBTRN_fn)->Sort)))==OKAATRN_outerdec) )
{ 
OSBBTRN = (*(&((*(&((*HSBBTRN_fn)->Usage)))->Closureno))) ;
PSBBTRN_inf = (*(&A_VINDEX(XQBBTRN_closureinfo,OSBBTRN)));
 /* line 592: */
if ( (*(&(PSBBTRN_inf->Scaled))) )
{ 
QSBBTRN = (&(ESBBTRN_info->Scaled)) ;
(*QSBBTRN) = A68_TRUE;
} 
 /* line 593: */
if ( (*(&(PSBBTRN_inf->Withtime))) )
{ 
 /* line 594: */
 /* line 595: */
RSBBTRN = (&(ESBBTRN_info->Withtime)) ;
(*RSBBTRN) = A68_TRUE;
} 
} 
} 
}
 /* line 596: */
break;
} 
 /* line 597: */
 /* line 598: */
SSBBTRN = !OQBBTRN_with_timescaling;
if ( SSBBTRN )
{SSBBTRN = (*(&(ESBBTRN_info->Scaled)));
}
if ( SSBBTRN )
{ 
 /* line 599: */
 /* line 600: */
OQBBTRN_with_timescaling = A68_TRUE;
} 
} 
 /* line 601: */
 /* line 602: */
ASBBTRN_outers = (*(&(ASBBTRN_outers->Rest)));
}
 /* line 608: */
 /* line 609: */
if ( OQBBTRN_with_timescaling )
{ 
(*PQBBTRN_newclosure) = DPCATRN_copy_closure((*PQBBTRN_newclosure), Msg);
 /* line 610: */
TSBBTRN_newptr = (&((*PQBBTRN_newclosure)->Outers));
 /* line 612: */
ASBBTRN_outers = (*(&(Oldclose->Outers)));
 /* line 613: */
for ( ;; )
{ 
 /* line 614: */
if ( !((ASBBTRN_outers!=HBAATRN_nilouters)) ) break;
USBBTRN_outer = (*(&(ASBBTRN_outers->Outer)));
 /* line 615: */
 /* line 616: */
VSBBTRN = (USBBTRN_outer.Sort==VKAATRN_outerfn);
if ( VSBBTRN )
{ /* line 617: */
WSBBTRN = USBBTRN_outer.Closureno ;
VSBBTRN = (*(&((*(&A_VINDEX(XQBBTRN_closureinfo,WSBBTRN)))->Scaled)));
}
if ( VSBBTRN )
{ 
 /* line 618: */
A_CALLPROC(DRBBTRN_trace_uses,(USBBTRN_outer),(USBBTRN_outer,(DRBBTRN_trace_uses).nonlocals));
} 
 /* line 619: */
 /* line 620: */
ASBBTRN_outers = (*(&(ASBBTRN_outers->Rest)));
}
 /* line 626: */
XSBBTRN_sampleno = ENCATRN_reserve_next_closureno((*PQBBTRN_newclosure));
 /* line 627: */
EQABTRN_sample_outer( XSBBTRN_sampleno, &YSBBTRN );
KNCATRN_insert_outer(YSBBTRN, TSBBTRN_newptr, (*PQBBTRN_newclosure), Msg);
 /* line 628: */
TSBBTRN_newptr = (&((*TSBBTRN_newptr)->Rest));
 /* line 630: */
ASBBTRN_outers = (*(&(Oldclose->Outers)));
 /* line 631: */
for ( ;; )
{ 
 /* line 632: */
if ( !((ASBBTRN_outers!=HBAATRN_nilouters)) ) break;
ZSBBTRN_o = (*(&(ASBBTRN_outers->Outer)));
 /* line 633: */
 /* line 634: */
if ( (ZSBBTRN_o.Sort==VKAATRN_outerfn) )
{ 
ATBBTRN = ZSBBTRN_o.Closureno ;
BTBBTRN_inf = (*(&A_VINDEX(XQBBTRN_closureinfo,ATBBTRN)));
 /* line 635: */
CTBBTRN = (*(&(BTBBTRN_inf->Scaled)));
if ( ! CTBBTRN )
{ /* line 636: */
CTBBTRN = ((*(&(BTBBTRN_inf->Newclosno)))>0);
}
 /* line 637: */
if ( CTBBTRN )
{ 
 /* line 638: */
DTBBTRN = ZSBBTRN_o.Closureno ;
FBBBTRN_outerfn_scale( ZSBBTRN_o, AWLATRN_nulltprocs, XQBBTRN_closureinfo, (&A_VINDEX(XQBBTRN_closureinfo,DTBBTRN)), XSBBTRN_sampleno, &ETBBTRN );
FTBBTRN_foc = ETBBTRN;
 /* line 639: */
 /* line 640: */
if ( (*(&(BTBBTRN_inf->Scaled))) )
{ 
GTBBTRN_newfnno = ENCATRN_reserve_next_closureno((*PQBBTRN_newclosure));
 /* line 641: */
 /* line 642: */
HTBBTRN = ZSBBTRN_o.Closureno ;
YNBBTRN_simulate_fn( FTBBTRN_foc.O, GTBBTRN_newfnno, (*(&A_VINDEX(XQBBTRN_closureinfo,HTBBTRN))), ZSBBTRN_o, &ITBBTRN );
JTBBTRN_fs = ITBBTRN;
 /* line 643: */
KNCATRN_insert_outer(JTBBTRN_fs, TSBBTRN_newptr, (*PQBBTRN_newclosure), Msg);
 /* line 644: */
 /* line 645: */
TSBBTRN_newptr = (&((*TSBBTRN_newptr)->Rest));
} 
 /* line 646: */
 /* line 647: */
if ( ((*(&(BTBBTRN_inf->Newclosno)))>0) )
{ 
KNCATRN_insert_outer(FTBBTRN_foc.O, TSBBTRN_newptr, (*PQBBTRN_newclosure), Msg);
 /* line 648: */
 /* line 649: */
TSBBTRN_newptr = (&((*TSBBTRN_newptr)->Rest));
} 
 /* line 650: */
 /* line 651: */
if ( (*(&(BTBBTRN_inf->Scaled))) )
{ 
 /* line 652: */
RNCATRN_free_outers(TSBBTRN_newptr, (*PQBBTRN_newclosure), Msg);
} 
else
{ 
 /* line 653: */
 /* line 654: */
TSBBTRN_newptr = (&((*TSBBTRN_newptr)->Rest));
} 
} 
else
{ 
 /* line 655: */
 /* line 656: */
TSBBTRN_newptr = (&((*TSBBTRN_newptr)->Rest));
} 
} 
else
{ 
 /* line 657: */
TSBBTRN_newptr = (&((*TSBBTRN_newptr)->Rest));
} 
 /* line 658: */
 /* line 659: */
ASBBTRN_outers = (*(&(ASBBTRN_outers->Rest)));
}
 /* line 661: */
GOCATRN_garbage_collect_closure((*PQBBTRN_newclosure), Msg);
 /* line 662: */
KTBBTRN.Cl = (*PQBBTRN_newclosure);
 /* line 663: */
KTBBTRN.C = A68_TRUE;
LTBBTRN = KTBBTRN;
} 
else
{ 
MTBBTRN.Cl = Oldclose;
 /* line 664: */
 /* line 665: */
MTBBTRN.C = A68_FALSE;
LTBBTRN = MTBBTRN;
} 
} 
A_PROC_EXIT(transform_timescale);
*ReturnedValue = (LTBBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void CPABTRN(void)   /* initialise DECS timescale */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/timescale.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  QPABTRN;  /* avoid structure result */
A68_VC  SPABTRN;  /* OPERATORS - assign op */
A68_VC  ZPABTRN;  /* avoid structure result */
A68_VC  BQABTRN;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/timescale.a68";
A_config.translation_time = "Tue Apr  4 10:04:37 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "BPABTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:04:37 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS timescale);
UEAALIB_a68config(LGAALIB_configinfo, GPABTRN);
 /* line 76: */
 /* line 77: */
 /* line 83: */
 /* line 84: */
 /* line 94: */
 /* line 95: */
 /* line 97: */
MPABTRN_generator( A68_FALSE, &QPABTRN );
SPABTRN = RPABTRN ;
A_VASSIGN2(SPABTRN,QPABTRN,A68_CHAR ) ;
TPABTRN_samplename = QPABTRN;
 /* line 98: */
VPABTRN_generator( A68_FALSE, &ZPABTRN );
BQABTRN = AQABTRN ;
A_VASSIGN2(BQABTRN,ZPABTRN,A68_CHAR ) ;
CQABTRN_periodname = ZPABTRN;
 /* line 100: */
 /* line 143: */
 /* line 158: */
 /* line 172: */
 /* line 189: */
 /* line 206: */
 /* line 221: */
 /* line 230: */
 /* line 237: */
 /* line 253: */
 /* line 494: */
 /* line 536: */
 /* line 667: */
 /* line 668: */
 /* line 669: */
/*SKIP*/;
A_PROC_EXIT(DECS timescale);
} 
#undef NL
/* end of translation of ./a68files/timescale.a68 */
