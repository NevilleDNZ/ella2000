
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
/* UNAME:LDDBELA */
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
struct A68t162{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t165,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t166,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(BITS,BITS) BITS */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ,A68_INT ),(struct A68t168 ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(CHAR) VOID */
struct A68t170 ;

A_PROCEDURE(A68_INT ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) INT */

A_PROCEDURE(A68_CHAR ,A68t170,(void),(void *));
typedef struct A68t170  A68_170 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t171,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t172,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC *),(A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t175,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t176{
A68_INT  Type;
A_PAD_INT(PAD_37)
A68_INT  Value;
A_PAD_INT(PAD_38)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,INT)  */
struct A68t178 ;

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t178 *),(struct A68t178 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC REF MODE178 */
A_ROW(struct A68t176 ,A68t178,1);
typedef struct A68t178  A68_178 ;    /* [] MODE176 */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t180 *),(struct A68t180 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC MODE180 */

A_PROCEDURE(A68_INT ,A68t180,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE26,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE162) VOID */
struct A68t183 ;

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t183 ,struct A68t162 *),(struct A68t183 ,struct A68t162 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE183) MODE162 */
struct A68t183{
struct A68t184 * Context;
struct A68t185 * Region;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE184,REF MODE185)  */
struct A68t188{
A68_BITS  Code;
A_PAD_BITS(PAD_39)
A68_INT  First_block;
A_PAD_INT(PAD_40)
A68_INT  First_offset;
A_PAD_INT(PAD_41)
A68_INT  Data_elts;
A_PAD_INT(PAD_42)
A68_INT  Dp_elts;
A_PAD_INT(PAD_43)
A68_INT  Version;
A_PAD_INT(PAD_44)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_45)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t193 ,A68t189);
typedef struct A68t189  A68_189 ;    /* VECTOR [] MODE193 */
struct A68t193{
A68_INT  Sort;
A_PAD_INT(PAD_46)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_47)
A68_BOOL  Import;
A_PAD_BOOL(PAD_48)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_49)
A68_INT  Version;
A_PAD_INT(PAD_50)
A68_VC  Il;
struct A68t194 * Uses;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE194)  */
struct A68t184{
A68_VC  Name;
struct A68t188  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_51)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_52)
struct A68t189  Decls;
struct A68t190 * Declattributes;
struct A68t191 * Regions;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,MODE188,BOOL,BOOL,REF MODE189,REF MODE190,REF MODE191)  */
struct A68t185{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_53)
struct A68t186 * Imports;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,INT,REF MODE186)  */
struct A68t187{
struct A68t162  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_54)
struct A68t188  Info;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE162,REF MODE26,REF MODE26,INT,MODE188)  */
struct A68t186{
struct A68t187  Binding;
struct A68t186 * Rest;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE187,REF MODE186)  */
A_VECTOR(struct A68t188 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE188 */
struct A68t190{
A68_INT  Key;
A_PAD_INT(PAD_55)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_56)
struct A68t32  Version;
struct A68t192  Data;
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE192,REF MODE190)  */
struct A68t191{
struct A68t185  Region;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE185,REF MODE191)  */
struct A68t194{
A68_INT  Sort;
A_PAD_INT(PAD_57)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_58)
struct A68t194 * Rest;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE194)  */

A_PROCEDURE(A68_VOID ,A68t195,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t188 *,struct A68t188 *,struct A68t188 *,struct A68t97 ),(struct A68t188 *,struct A68t188 *,struct A68t188 *,struct A68t97 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE188,REF MODE188,REF MODE188,MODE97) VOID */
struct A68t198 ;

A_PROCEDURE(struct A68t198 *,A68t197,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE97) REF MODE198 */
struct A68t198{
struct A68t184  Context;
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE184,REF MODE198)  */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t189 ,struct A68t97 ,struct A68t188 *),(struct A68t189 ,struct A68t97 ,struct A68t188 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE189,MODE97) MODE188 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t184 *,struct A68t97 ,struct A68t189 *),(struct A68t184 *,struct A68t97 ,struct A68t189 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE184,MODE97) REF MODE189 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t189 ),(struct A68t189 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE189) VOID */

A_PROCEDURE(A68_INT ,A68t202,(struct A68t184 *,A68_VC ,struct A68t97 ),(struct A68t184 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE184,REF MODE26,MODE97) INT */
struct A68t204 ;

A_PROCEDURE(struct A68t204 *,A68t203,(struct A68t184 *,A68_INT ),(struct A68t184 *,A68_INT ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE184,INT) REF MODE204 */
struct A68t204{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_59)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(struct A68t204 *,A68t205,(struct A68t183 ,A68_VC ),(struct A68t183 ,A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE183,REF MODE26) REF MODE204 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(BOOL,MODE97) VOID */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t209 *,struct A68t206 ,struct A68t97 ),(struct A68t209 *,struct A68t206 ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE209,MODE206,MODE97) VOID */
struct A68t209{
struct A68t210 * Database;
A68_VC  Description;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(REF MODE210,REF MODE26)  */
struct A68t210{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t211 * Df;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE211)  */
A_VECTOR(struct A68t216 ,A68t215);
typedef struct A68t215  A68_215 ;    /* VECTOR [] MODE216 */
struct A68t217{
A68_INT  Block_num;
A_PAD_INT(PAD_60)
A68_INT  Offset;
A_PAD_INT(PAD_61)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,INT)  */
struct A68t216{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_62)
struct A68t217  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_63)
A68_INT  Dp_elts;
A_PAD_INT(PAD_64)
A68_INT  Code;
A_PAD_INT(PAD_65)
A68_INT  Version;
A_PAD_INT(PAD_66)
A68_INT  Read_size;
A_PAD_INT(PAD_67)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(BOOL,MODE217,INT,INT,INT,INT,INT)  */
struct A68t211{
struct A68t188 * Root;
struct A68t188 * Indirs_dp;
struct A68t188 * Freelist_dp;
struct A68t188 * Pagetable_dp;
struct A68t188 * Append_dp;
struct A68t192  Free_block_dps;
struct A68t192  Pagetable_dps;
struct A68t111 ** File;
struct A68t111 ** Test_file;
struct A68t212 * Write_buffer;
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
struct A68t213 * Gc_ptrs;
struct A68t214 * Instore_vars;
struct A68t215  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE188,REF MODE188,REF MODE188,REF MODE188,REF MODE188,REF MODE192,REF MODE192,REF REF MODE111,REF REF MODE111,REF MODE212,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE213,REF MODE214,REF MODE215,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t212{
A68_VC  Buffer;
struct A68t218 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE26,REF MODE218,REF INT,REF INT,REF INT)  */
struct A68t213{
struct A68t217  Old;
struct A68t217  New;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE217,MODE217,REF MODE213)  */
struct A68t214{
A68_INT  Indirection;
A_PAD_INT(PAD_68)
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT,REF MODE214)  */
struct A68t218{
A68_INT  Lwb;
A_PAD_INT(PAD_69)
A68_INT  Upb;
A_PAD_INT(PAD_70)
struct A68t218 * Rest;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,INT,REF MODE218)  */

A_PROCEDURE(A68_VOID ,A68t219,(A68_VC ,struct A68t206 ,struct A68t97 ),(A68_VC ,struct A68t206 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE26,MODE206,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t221,(A68_VC ,struct A68t189 ),(A68_VC ,struct A68t189 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE26,REF MODE189) INT */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t184 *,struct A68t189 ,A68_INT ,struct A68t97 ),(struct A68t184 *,struct A68t189 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE184,REF MODE189,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t223,(A68_INT ,struct A68t183 *),(A68_INT ,struct A68t183 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT) MODE183 */

A_PROCEDURE(A68_INT ,A68t224,(struct A68t183 ),(struct A68t183 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE183) INT */

A_PROCEDURE(A68_INT ,A68t225,(struct A68t183 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t183 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE183,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t97 ,struct A68t188 *),(struct A68t97 ,struct A68t188 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE97) MODE188 */

A_PROCEDURE(A68_BOOL ,A68t227,(struct A68t209 *,struct A68t188 ),(struct A68t209 *,struct A68t188 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE209,MODE188) BOOL */

A_PROCEDURE(A68_VOID ,A68t228,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(INT) MODE92 */
struct A68t229{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_71)
A68_BOOL  Login;
A_PAD_BOOL(PAD_72)
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE229)  */
struct A68t230{
A68_VC  Name;
struct A68t111 * File;
struct A68t209 * Discfile;
struct A68t162  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_73)
struct A68t192  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_74)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t229 * Classes;
struct A68t198 * Contexts;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE26,REF MODE111,REF MODE209,MODE162,REF MODE26,BOOL,MODE192,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE229,REF MODE198)  */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t230 *),(A68_BOOL ,struct A68t230 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE230 */

A_PROCEDURE(A68_BOOL ,A68t232,(struct A68t162 ,struct A68t162 ),(struct A68t162 ,struct A68t162 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE162,MODE162) BOOL */

A_PROCEDURE(A68_BOOL ,A68t233,(struct A68t183 ,struct A68t183 ),(struct A68t183 ,struct A68t183 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE183,MODE183) BOOL */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t162 ,A68_VC *),(struct A68t162 ,A68_VC *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE162) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t183 ,A68_VC *),(struct A68t183 ,A68_VC *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE183) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t236,(struct A68t184 *,struct A68t97 ),(struct A68t184 *,struct A68t97 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE184,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t237,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t230 *,A68t238,(void),(void *));
typedef struct A68t238  A68_238 ;    /* PROC REF MODE230 */

A_PROCEDURE(struct A68t184 *,A68t239,(A68_VC ),(A68_VC ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE26) REF MODE184 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t184 *,A68_VC ,struct A68t183 *),(struct A68t184 *,A68_VC ,struct A68t183 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE184,REF MODE26) MODE183 */

A_PROCEDURE(struct A68t186 *,A68t241,(struct A68t183 ),(struct A68t183 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE183) REF MODE186 */

A_PROCEDURE(struct A68t187 *,A68t242,(struct A68t183 ,A68_VC ),(struct A68t183 ,A68_VC ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE183,REF MODE26) REF MODE187 */

A_PROCEDURE(struct A68t184 *,A68t243,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE26,MODE97) REF MODE184 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t184 *,A68_VC ,struct A68t97 ,struct A68t183 *),(struct A68t184 *,A68_VC ,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE184,REF MODE26,MODE97) MODE183 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t162 ,struct A68t97 ,struct A68t183 *),(struct A68t162 ,struct A68t97 ,struct A68t183 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE162,MODE97) MODE183 */

A_PROCEDURE(struct A68t187 *,A68t246,(struct A68t183 ,A68_VC ,struct A68t97 ),(struct A68t183 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE183,REF MODE26,MODE97) REF MODE187 */
struct A68t248 ;
struct A68t249 ;
struct A68t250 ;
struct A68t251 ;
struct A68t252 ;

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t248 ,struct A68t43 ,struct A68t43 ,struct A68t143 ,struct A68t43 ,A68_INT ,struct A68t131 ,struct A68t131 ,struct A68t173 ,struct A68t249 ,struct A68t250 ,struct A68t251 ,struct A68t252 ,struct A68t180 ,struct A68t178 ),(struct A68t248 ,struct A68t43 ,struct A68t43 ,struct A68t143 ,struct A68t43 ,A68_INT ,struct A68t131 ,struct A68t131 ,struct A68t173 ,struct A68t249 ,struct A68t250 ,struct A68t251 ,struct A68t252 ,struct A68t180 ,struct A68t178 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE248,MODE43,MODE43,MODE143,MODE43,INT,MODE131,MODE131,MODE173,MODE249,MODE250,MODE251,MODE252,MODE180,REF MODE178) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(A68_VC ,A68_VC ,struct A68t162 ),(A68_VC ,A68_VC ,struct A68t162 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE26,REF MODE26,MODE162) VOID */

A_PROCEDURE(A68_BOOL ,A68t250,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE162) BOOL */

A_PROCEDURE(A68_BOOL ,A68t251,(A68_VC *,A68_INT *),(A68_VC *,A68_INT *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t252,(A68_INT ,A68_INT ,struct A68t46 ),(A68_INT ,A68_INT ,struct A68t46 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(INT,INT,MODE46) VOID */

A_PROCEDURE(A68_BOOL ,A68t253,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE92) BOOL */

A_PROCEDURE(A68_BOOL ,A68t254,(struct A68t210 *,struct A68t188 ,struct A68t188 ),(struct A68t210 *,struct A68t188 ,struct A68t188 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE210,MODE188,MODE188) BOOL */

A_PROCEDURE(A68_INT ,A68t255,(struct A68t210 *,struct A68t188 ),(struct A68t210 *,struct A68t188 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE210,MODE188) INT */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t210 *,struct A68t188 *),(struct A68t210 *,struct A68t188 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE210) MODE188 */

A_PROCEDURE(struct A68t111 *,A68t257,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE26,INT,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t111 *,A68_BOOL ,struct A68t210 *),(struct A68t111 *,A68_BOOL ,struct A68t210 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE111,BOOL) MODE210 */

A_PROCEDURE(A68_BOOL ,A68t259,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE210) BOOL */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t210 *,struct A68t188 ),(struct A68t210 *,struct A68t188 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE210,MODE188) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t210 *,struct A68t188 ,struct A68t97 ),(struct A68t210 *,struct A68t188 ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE210,MODE188,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t210 *,struct A68t97 ),(struct A68t210 *,struct A68t97 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE210,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t263,(struct A68t210 *,A68_INT ),(struct A68t210 *,A68_INT ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE210,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t210 *,A68_INT ,struct A68t97 ),(struct A68t210 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE210,INT,MODE97) VOID */

A_PROCEDURE(struct A68t111 *,A68t265,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE210) REF MODE111 */

A_PROCEDURE(A68_INT ,A68t266,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE210) INT */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t111 *,struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE111,REF MODE111,MODE97) VOID */
struct A68t269{
A68_VC  Rvc;
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE26,REF MODE269)  */
struct A68t270{
struct A68t209  Df;
struct A68t269  Head;
struct A68t269 * Current;
A68_INT  Index;
A_PAD_INT(PAD_75)
A68_INT  Type;
A_PAD_INT(PAD_76)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_77)
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE209,MODE269,REF MODE269,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t270 *,A68t271,(struct A68t209 *,struct A68t87 ,A68_INT ),(struct A68t209 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE209,MODE87,INT) REF MODE270 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE270) VOID */

A_PROCEDURE(struct A68t270 *,A68t273,(struct A68t209 *,struct A68t188 ),(struct A68t209 *,struct A68t188 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE209,MODE188) REF MODE270 */

A_PROCEDURE(A68_CHAR ,A68t274,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE270) CHAR */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t270 *,A68_VC ),(struct A68t270 *,A68_VC ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE270,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE270) BOOL */

A_PROCEDURE(A68_INT ,A68t277,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE270) INT */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t270 *,A68_VC *),(struct A68t270 *,A68_VC *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(REF MODE270) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t209 *,struct A68t97 ),(struct A68t209 *,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE209,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t209 *,A68_VC ,struct A68t97 ,struct A68t188 *),(struct A68t209 *,A68_VC ,struct A68t97 ,struct A68t188 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE209,MODE26,MODE97) MODE188 */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t209 *,struct A68t192 ,struct A68t97 ,struct A68t188 *),(struct A68t209 *,struct A68t192 ,struct A68t97 ,struct A68t188 *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE209,MODE192,MODE97) MODE188 */

A_PROCEDURE(A68_INT ,A68t282,(struct A68t209 *,struct A68t188 ,struct A68t97 ),(struct A68t209 *,struct A68t188 ,struct A68t97 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE209,MODE188,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t209 *,A68_VC ,struct A68t188 ,struct A68t97 ),(struct A68t209 *,A68_VC ,struct A68t188 ,struct A68t97 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE209,REF MODE26,MODE188,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t209 *,struct A68t192 ,struct A68t188 ,struct A68t97 ),(struct A68t209 *,struct A68t192 ,struct A68t188 ,struct A68t97 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE209,REF MODE192,MODE188,MODE97) VOID */

A_PROCEDURE(struct A68t270 *,A68t285,(struct A68t209 *,struct A68t87 ),(struct A68t209 *,struct A68t87 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE209,MODE87) REF MODE270 */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t270 *,struct A68t97 ),(struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE270,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t270 *,struct A68t97 ,struct A68t188 *),(struct A68t270 *,struct A68t97 ,struct A68t188 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE270,MODE97) MODE188 */

A_PROCEDURE(A68_INT ,A68t288,(A68_CHAR ,struct A68t270 *,struct A68t97 ),(A68_CHAR ,struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(CHAR,REF MODE270,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t289,(A68_VC ,struct A68t270 *,struct A68t97 ),(A68_VC ,struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE26,REF MODE270,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t290,(A68_INT ,struct A68t270 *,struct A68t97 ),(A68_INT ,struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(INT,REF MODE270,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t291,(A68_VC ,struct A68t270 *,struct A68t97 ),(A68_VC ,struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE26,REF MODE270,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t292,(A68_BOOL ,struct A68t270 *,struct A68t97 ),(A68_BOOL ,struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(BOOL,REF MODE270,MODE97) INT */
struct A68t293{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_78)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_79)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_80)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_81)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_82)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_83)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_84)
A68_INT  Width;
A_PAD_INT(PAD_85)
A68_INT  Page_count;
A_PAD_INT(PAD_86)
A68_INT  Page_length;
A_PAD_INT(PAD_87)
A68_INT  Eof_count;
A_PAD_INT(PAD_88)
struct A68t294 * Standard_reader;
struct A68t295 * Infile;
struct A68t173  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE294,REF MODE295,MODE173,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t296,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t294{
A68_VC  Rdbuffer;
struct A68t296  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_89)
A68_INT  Rdcharno;
A_PAD_INT(PAD_90)
A68_INT  Start_of_word;
A_PAD_INT(PAD_91)
struct A68t297 * Stack;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE26,MODE296,INT,INT,INT,REF MODE297)  */
struct A68t295{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_92)
A68_INT  Number;
A_PAD_INT(PAD_93)
A68_VC  Name;
struct A68t294 * Reader;
struct A68t295 * Previous;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE294,REF MODE295)  */
struct A68t297{
A68_VC  Line;
struct A68t297 * Rest;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE26,REF MODE297)  */

A_PROCEDURE(struct A68t293 *,A68t298,(void),(void *));
typedef struct A68t298  A68_298 ;    /* PROC REF MODE293 */

A_PROCEDURE(A68_VOID ,A68t299,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t300,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE173) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_BOOL ,A68t307,(A68_VC *,A68_INT *,struct A68t97 ),(A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF REF MODE26,REF INT,MODE97) BOOL */
struct A68t306 { A68_INT mode; union {
struct A68t111 * mode1;
struct A68t307  mode2;
} data; };
typedef struct A68t306  A68_306 ;    /* UNION(REF MODE111,MODE307)  */

A_PROCEDURE(A68_VOID ,A68t308,(A68_BOOL ,struct A68t183 ,struct A68t306 ,struct A68t248 ,struct A68t43 ,struct A68t43 ,struct A68t249 ,struct A68t43 ,A68_BOOL *,struct A68t97 ),(A68_BOOL ,struct A68t183 ,struct A68t306 ,struct A68t248 ,struct A68t43 ,struct A68t43 ,struct A68t249 ,struct A68t43 ,A68_BOOL *,struct A68t97 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(BOOL,MODE183,MODE306,MODE248,MODE43,MODE43,MODE249,MODE43,REF BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t309,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t184 *,struct A68t97 ),(struct A68t184 *,struct A68t97 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE184,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t311,(A68_BOOL ,struct A68t192 *),(A68_BOOL ,struct A68t192 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(BOOL) MODE192 */

A_PROCEDURE(A68_BOOL ,A68t312,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE162,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t313,(A68_BOOL ,struct A68t183 ,struct A68t306 ,struct A68t97 ,struct A68t188 *),(A68_BOOL ,struct A68t183 ,struct A68t306 ,struct A68t97 ,struct A68t188 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(BOOL,MODE183,MODE306,MODE97) MODE188 */

A_PROCEDURE(struct A68t188 *,A68t314,(void),(void *));
typedef struct A68t314  A68_314 ;    /* PROC REF MODE188 */
struct A68t315{
A68_INT  Fnno;
A_PAD_INT(PAD_94)
A68_INT  Names;
A_PAD_INT(PAD_95)
A68_INT  Stack;
A_PAD_INT(PAD_96)
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(INT,INT,INT,REF MODE315)  */
A_ISTRUCT(A68_INT ,3,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 3 INT */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t188 *),(struct A68t188 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC MODE188 */
A_ISTRUCT(A68_CHAR ,5,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 5 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from databasebuffers --- */
extern A68_188  UACAELA_nilptr;
#define SNBAELA_block_size 512
extern A68_VOID  RYIAELA_resetbuffer(struct A68t270 *);
extern A68_270 * WYIAELA_readbuffer(struct A68t209 *,struct A68t188 );
extern A68_INT  YBJAELA_in2(struct A68t270 *);
extern A68_VOID  CCJAELA_inid2(struct A68t270 *,A68_VC *);
extern A68_VOID  AEJAELA_mywritediscptrs(struct A68t209 *,struct A68t192 ,struct A68t97 ,A68_188 *);
extern A68_INT  UEJAELA_ndiscptrs(struct A68t209 *,struct A68t188 ,struct A68t97 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t209 *,struct A68t192 ,struct A68t188 ,struct A68t97 );
extern A68_270 * IFJAELA_startwrite(struct A68t209 *,struct A68t87 );
extern A68_VOID  CGJAELA_endwrite(struct A68t270 *,struct A68t97 ,A68_188 *);
extern A68_INT  CHJAELA_outchar(A68_CHAR ,struct A68t270 *,struct A68t97 );
extern A68_INT  LHJAELA_outchars(A68_VC ,struct A68t270 *,struct A68t97 );
extern A68_INT  YHJAELA_outint2(A68_INT ,struct A68t270 *,struct A68t97 );
extern A68_INT  UIJAELA_outid2(A68_VC ,struct A68t270 *,struct A68t97 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from compmessages --- */
extern A68_VOID  XYAAELA_comp_msg(A68_INT ,A68_92 *);
/* --- End of imports from compmessages --- */


/* --- Imports from compile --- */
extern A68_VOID  NSBBELA_compile(struct A68t248 ,struct A68t43 ,struct A68t43 ,struct A68t143 ,struct A68t43 ,A68_INT ,struct A68t131 ,struct A68t131 ,struct A68t173 ,struct A68t249 ,struct A68t250 ,struct A68t251 ,struct A68t252 ,struct A68t180 ,struct A68t178 );
#define ZKCAELA_fnend 44
#define MLCAELA_dummy 58
#define HJCAELA_zero 0
#define ULCAELA_kfn 67
#define XLCAELA_kend 70
/* --- End of imports from compile --- */


/* --- Imports from libmodes --- */
extern A68_184 * DVJAELA_nilcontxt;
extern A68_209 * TYJAELA_discfile;
extern A68_INT  UBKAELA_lib_version(void);
extern A68_BOOL  ZBKAELA_no_text(struct A68t184 *,struct A68t97 );
extern A68_184 * UDKAELA_get_context(A68_VC );
/* --- End of imports from libmodes --- */


/* --- Imports from libinterface --- */
extern A68_BOOL  QJBBELA_save_library(struct A68t97 );
/* --- End of imports from libinterface --- */


/* --- Imports from charset --- */
extern A68_VOID  NMAATRN_makecharset(A68_178 *);
extern A68_VOID  BDBATRN_makelookup(A68_180 *);
/* --- End of imports from charset --- */


/* --- Imports from basics --- */
extern A68_INT  DZCAOST_seconds(void);
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_VOID  SIBAOST_testmode_file_name(struct A68t111 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  DPBAOSI_io_ok;
extern A68_35  GDAAOST_io_partline;
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_VOID  YPBAOSI_file_name(struct A68t111 *,A68_VC *);
extern A68_VOID  SRBAOSI_read_line(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_120 * NVBAOSI_get_file_details(struct A68t122 ,struct A68t97 );
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
extern A68_92  SHAAOSI_system;
extern A68_46  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TIGAOST(void);   /* ioprocs */
extern void NWIAELA(void);   /* databasebuffers */
extern void CFAAELA(void);   /* compmessages */
extern void VPBBELA(void);   /* compile */
extern void FTJAELA(void);   /* libmodes */
extern void SOABELA(void);   /* libinterface */
extern void GMAATRN(void);   /* charset */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_304   PDDBELA = {"$Id: compshell.a68,v 34.2 1995/03/29 13:03:23 ella Exp $"}; 
A_GISVEC(A68_VC ,QDDBELA,PDDBELA,56)
static A68_BOOL  RDDBELA_initialise;
static A68_180  SDDBELA_lookup;
static A68_178  TDDBELA_charset;
static A68_VC  YDDBELA_bangs;
static A68_305   AEDBELA = {"direct input"}; 
A_GISVEC(A68_VC ,BEDBELA,AEDBELA,12)
static A68_VC  CEDBELA_online;
#define WEDBELA_tab '\011'
#define EJDBELA_nomore 0
#define FJDBELA_normal 1
#define GJDBELA_exported 3
#define PLDBELA_keepstep 200
#define YNDBELA_nilinds (A68_315 *)A68_NIL
static A68_318   VPDBELA = {"\0\0\0\0\000"}; 
A_GISVEC(A68_VC ,WPDBELA,VPDBELA,5)
typedef struct   /* env of non-global proc */
{
A68_BOOL  Print_text;
A_PAD_BOOL(PAD_97)
A68_INT * TEDBELA_finishlisting;
A68_INT * REDBELA_lineno;
A68_BOOL * QEDBELA_errorinline;
A68_97  Msg;
A68_306  Compinput;
} DFDBELA_input;
typedef struct   /* env of non-global proc */
{
A68_BOOL * Compilation_failed;
A68_97  Msg;
A68_BOOL  Print_text;
A_PAD_BOOL(PAD_98)
A68_BOOL * QEDBELA_errorinline;
A68_INT * TEDBELA_finishlisting;
A68_INT * REDBELA_lineno;
A68_VC  YEDBELA_sp;
} RHDBELA_compflt;
typedef struct   /* env of non-global proc */
{
A68_INT * DJDBELA_declsi;
A68_INT * CJDBELA_ndecls;
A68_270 ** AJDBELA_specs;
A68_INT * BJDBELA_nextdecl;
} JJDBELA_nextkept;
typedef struct   /* env of non-global proc */
{
A68_270 ** AJDBELA_specs;
} PJDBELA_inkeptid;
typedef struct   /* env of non-global proc */
{
A68_270 ** AJDBELA_specs;
} UJDBELA_inkeptint;
typedef struct   /* env of non-global proc */
{
A68_INT * CJDBELA_ndecls;
A68_270 ** AJDBELA_specs;
A68_INT * BJDBELA_nextdecl;
A68_INT * DJDBELA_declsi;
} AKDBELA_setctfromct;
typedef struct   /* env of non-global proc */
{
A68_310  YJDBELA_setctfromct;
} OKDBELA_setctfromctn;
typedef struct   /* env of non-global proc */
{
A68_312  MKDBELA_setctfromctn;
A68_97  Msg;
} XKDBELA_ctfromctn;
typedef struct   /* env of non-global proc */
{
A68_BOOL * Compilation_failed;
A68_jmp_buf  OEDBELA_endcomp;
A_PAD_jmp_buf(PAD_99)
} ILDBELA_fail;
typedef struct   /* env of non-global proc */
{
int dummy;
} TLDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * YLDBELA_keepsind;
A68_192 * WLDBELA_keeps;
} BMDBELA_next_keep;
typedef struct   /* env of non-global proc */
{
int dummy;
} QMDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_270 * WMDBELA_discbuff;
A68_97  Msg;
} BNDBELA_outcompid;
typedef struct   /* env of non-global proc */
{
A68_270 * WMDBELA_discbuff;
A68_97  Msg;
} FNDBELA_outcompint;
typedef struct   /* env of non-global proc */
{
A68_270 * WMDBELA_discbuff;
A68_97  Msg;
} JNDBELA_outcompint2;
typedef struct   /* env of non-global proc */
{
A68_128  HNDBELA_outcompint2;
} NNDBELA_outcompints;
typedef struct   /* env of non-global proc */
{
A68_270 * WMDBELA_discbuff;
A68_97  Msg;
A68_128  HNDBELA_outcompint2;
} UNDBELA_outcompints2;
typedef struct   /* env of non-global proc */
{
A68_BOOL * OLDBELA_compilation_failed;
A68_188 * XMDBELA_discptr;
A68_270 * WMDBELA_discbuff;
A68_97  Msg;
A68_248  SNDBELA_outcompints2;
A68_315 ** ZNDBELA_inds;
A68_248  LNDBELA_outcompints;
A68_314  ZLDBELA_next_keep;
A68_128  DNDBELA_outcompint;
} DODBELA_shellints;
typedef struct   /* env of non-global proc */
{
A68_188 * XMDBELA_discptr;
A68_INT * YLDBELA_keepsind;
} CPDBELA_mname;
typedef struct   /* env of non-global proc */
{
A68_306  Compinput;
A68_97  Msg;
} FPDBELA_dumpsourceinfo;
typedef struct   /* env of non-global proc */
{
A68_43  ZMDBELA_outcompid;
} EQDBELA_import;
typedef struct   /* env of non-global proc */
{
A68_VC * T;
} JFDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * T;
} RGDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * T;
} FHDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_46  Params;
} BIDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_184 * Ct;
A68_97  Msg;
} EKDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_192 * WLDBELA_keeps;
} FMDBELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JPDBELA_generator;

A_STATIC A68_VOID  VDDBELA_generator(A68_BOOL  UDDBELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  NEDBELA_compile_shell(A68_BOOL  Print_text, A68_183  Cr, A68_306  Compinput, A68_248  Outints, A68_43  Outid, A68_43  Outstring, A68_249  Outimport, A68_43  Mname, A68_BOOL * Compilation_failed, A68_97  Msg);

A_STATIC A68_BOOL  CFDBELA_input(A68_VC * T, A68_INT * Tend, void *NonLocals);

A_STATIC A68_VOID  IFDBELA_generator(A68_BOOL  GFDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QGDBELA_generator(A68_BOOL  OGDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EHDBELA_generator(A68_BOOL  CHDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QHDBELA_compflt(A68_INT  Tind, A68_INT  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  AIDBELA_generator(A68_BOOL  YHDBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  IJDBELA_nextkept(void *NonLocals);

A_STATIC A68_VOID  OJDBELA_inkeptid(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  TJDBELA_inkeptint(void *NonLocals);

A_STATIC A68_VOID  ZJDBELA_setctfromct(A68_184 * Ct, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  DKDBELA_generator(A68_BOOL  BKDBELA_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  NKDBELA_setctfromctn(A68_162  Ctn, A68_97  Msg, void *NonLocals);

A_STATIC A68_BOOL  WKDBELA_ctfromctn(A68_162  Name, void *NonLocals);

A_STATIC A68_VOID  HLDBELA_fail(void *NonLocals);

A68_VOID  NLDBELA_ella_shell(A68_BOOL  Print_text, A68_183  Cr, A68_306  Compinput, A68_97  Msg, A68_188  *ReturnedValue);

A_STATIC A68_VOID  SLDBELA_generator(A68_BOOL  QLDBELA_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_188 * AMDBELA_next_keep(void *NonLocals);

A_STATIC A68_VOID  EMDBELA_generator(A68_BOOL  CMDBELA_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PMDBELA_generator(A68_BOOL  NMDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ANDBELA_outcompid(A68_VC  Id, void *NonLocals);

A_STATIC A68_VOID  ENDBELA_outcompint(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  INDBELA_outcompint2(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  MNDBELA_outcompints(A68_32  Vi, void *NonLocals);

A_STATIC A68_VOID  TNDBELA_outcompints2(A68_32  Vi, void *NonLocals);

A_STATIC A68_VOID  CODBELA_shellints(A68_32  I, void *NonLocals);

A_STATIC A68_VOID  BPDBELA_mname(A68_VC  M, void *NonLocals);

A_STATIC A68_VOID  EPDBELA_dumpsourceinfo(A68_188  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IPDBELA_generator(A68_BOOL  GPDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DQDBELA_import(A68_VC  Rename, A68_VC  Name, A68_162  Ctn, void *NonLocals);

A_STATIC A68_VOID  IFDBELA_generator(A68_BOOL  GFDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JFDBELA_generator *)NonLocals)->x)
{ 
A68_VC  KFDBELA;  /* clause result */
A68_VC  LFDBELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 147: */
LFDBELA.upb = (*NL(T)).upb ;
( GFDBELA_anonymous? A_VLOC(A68_CHAR ,LFDBELA): A_VHEAP(A68_CHAR ,LFDBELA) );
KFDBELA = LFDBELA;
} 
*ReturnedValue = (KFDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QGDBELA_generator(A68_BOOL  OGDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RGDBELA_generator *)NonLocals)->x)
{ 
A68_VC  SGDBELA;  /* clause result */
A68_VC  TGDBELA;  /* OPERATORS - dynamic generator */
{ 
TGDBELA.upb = ((*NL(T)).upb+512) ;
( OGDBELA_anonymous? A_VLOC(A68_CHAR ,TGDBELA): A_VHEAP(A68_CHAR ,TGDBELA) );
SGDBELA = TGDBELA;
} 
*ReturnedValue = (SGDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EHDBELA_generator(A68_BOOL  CHDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FHDBELA_generator *)NonLocals)->x)
{ 
A68_VC  GHDBELA;  /* clause result */
A68_VC  HHDBELA;  /* OPERATORS - dynamic generator */
{ 
HHDBELA.upb = (*NL(T)).upb ;
( CHDBELA_anonymous? A_VLOC(A68_CHAR ,HHDBELA): A_VHEAP(A68_CHAR ,HHDBELA) );
GHDBELA = HHDBELA;
} 
*ReturnedValue = (GHDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AIDBELA_generator(A68_BOOL  YHDBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((BIDBELA_generator *)NonLocals)->x)
{ 
A68_102  CIDBELA;  /* clause result */
A68_102  DIDBELA;  /* OPERATORS - dynamic generator */
{ 
DIDBELA.upb = (NL(Params).upb+3) ;
( YHDBELA_anonymous? A_VLOC(A68_VC ,DIDBELA): A_VHEAP(A68_VC ,DIDBELA) );
CIDBELA = DIDBELA;
} 
*ReturnedValue = (CIDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DKDBELA_generator(A68_BOOL  BKDBELA_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((EKDBELA_generator *)NonLocals)->x)
{ 
A68_192  FKDBELA;  /* clause result */
A68_192  GKDBELA;  /* OPERATORS - dynamic generator */
{ 
GKDBELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*(&(NL(Ct)->Val))), NL(Msg)) ;
( BKDBELA_anonymous? A_VLOC(A68_188 ,GKDBELA): A_VHEAP(A68_188 ,GKDBELA) );
FKDBELA = GKDBELA;
} 
*ReturnedValue = (FKDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EMDBELA_generator(A68_BOOL  CMDBELA_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((FMDBELA_generator *)NonLocals)->x)
{ 
A68_192  GMDBELA;  /* clause result */
A68_192  HMDBELA;  /* OPERATORS - dynamic generator */
{ 
HMDBELA.upb = ((*NL(WLDBELA_keeps)).upb+PLDBELA_keepstep) ;
( CMDBELA_anonymous? A_VLOC(A68_188 ,HMDBELA): A_VHEAP(A68_188 ,HMDBELA) );
GMDBELA = HMDBELA;
} 
*ReturnedValue = (GMDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IPDBELA_generator(A68_BOOL  GPDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JPDBELA_generator *)NonLocals)->x)
{ 
A68_VC  KPDBELA;  /* clause result */
A68_VC  LPDBELA;  /* OPERATORS - dynamic generator */
{ 
LPDBELA.upb = SNBAELA_block_size ;
( GPDBELA_anonymous? A_VLOC(A68_CHAR ,LPDBELA): A_VHEAP(A68_CHAR ,LPDBELA) );
KPDBELA = LPDBELA;
} 
*ReturnedValue = (KPDBELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  CFDBELA_input(A68_VC * T, A68_INT * Tend, void *NonLocals)
#define NL(x) (((DFDBELA_input *)NonLocals)->x)
{ 
A68_INT  EFDBELA_l;
A68_35  FFDBELA_reply;
A68_31  HFDBELA_generator;   /* proc value of non-global proc */
A68_VC  MFDBELA;  /* avoid structure result */
A68_CHAR * NFDBELA_b;
A68_CHAR * OFDBELA_in;
A68_VC  PFDBELA;  /* OPERATORS - trim index */
A68_VC  QFDBELA;  /* forall yield */
A68_VC  RFDBELA;  /* OPERATORS - trim index */
A68_VC  SFDBELA;  /* forall yield */
A68_INT  TFDBELA;  /* forall loop counter */
A68_BOOL  UFDBELA;  /* optbool result */
A68_VC  VFDBELA;  /* OPERATORS - trim index */
A68_46  WFDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  XFDBELA;  /* avoid structure result */
A68_CHAR * YFDBELA_c;
A68_VC  ZFDBELA;  /* OPERATORS - trim index */
A68_VC  AGDBELA;  /* forall yield */
A68_INT  BGDBELA;  /* forall loop counter */
A68_INT  CGDBELA;  /* clause result */
A68_VC  DGDBELA;  /* OPERATORS - trim index */
A68_46  EGDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  FGDBELA;  /* avoid structure result */
A68_92  GGDBELA;  /* avoid structure result */
A68_306  HGDBELA;  /* united object - for case conformity */
A68_307  IGDBELA_reader;
A68_BOOL  JGDBELA;  /* clause result */
A68_111 * KGDBELA_file;
A68_VC  LGDBELA;  /* OPERATORS - trim index */
A68_35  MGDBELA;  /* avoid structure result */
A68_BOOL  NGDBELA;  /* clause result */
A68_31  PGDBELA_generator;   /* proc value of non-global proc */
A68_VC  UGDBELA;  /* avoid structure result */
A68_VC  VGDBELA_new;
A68_VC  WGDBELA;  /* OPERATORS - trim index */
A68_VC  XGDBELA;  /* YIELD */
A68_BOOL  YGDBELA;  /* optbool result */
A68_BOOL  ZGDBELA_not_eof;
A68_INT  AHDBELA;  /* YIELD */
A68_CHAR * BHDBELA;  /* YIELD */
A68_31  DHDBELA_generator;   /* proc value of non-global proc */
A68_VC  IHDBELA;  /* avoid structure result */
A68_CHAR * JHDBELA_c;
A68_INT  KHDBELA;  /* forall loop counter */
A68_BOOL  LHDBELA;  /* clause result */
A_PROC_ENTRY(input);
 /* line 140: */
 /* line 141: */
{ 
 /* line 142: */
 /* line 143: */
if ( NL(Print_text) )
{ 
 /* line 144: */
if ( ((*NL(TEDBELA_finishlisting))>(*NL(REDBELA_lineno))) )
{ 
 /* line 145: */
if ( (*NL(QEDBELA_errorinline)) )
{ 
 /* line 146: */
if ( (YDDBELA_bangs.upb<(*Tend)) )
{ 
A_CLOSURE( HFDBELA_generator, IFDBELA_generator, JFDBELA_generator );
(( JFDBELA_generator * ) ( HFDBELA_generator.nonlocals )) -> T = T;
A_CALLPROC(HFDBELA_generator,(A68_FALSE, &MFDBELA),(A68_FALSE, &MFDBELA,(HFDBELA_generator).nonlocals));
YDDBELA_bangs = MFDBELA;
} 
 /* line 148: */
 /* line 149: */
QFDBELA = A_VTRIM(PFDBELA,(YDDBELA_bangs),A_VTSCRIPT(&(PFDBELA.upb),(YDDBELA_bangs).upb,1,(*Tend))) ;
SFDBELA = A_VTRIM(RFDBELA,((*T)),A_VTSCRIPT(&(RFDBELA.upb),((*T)).upb,1,(*Tend))) ;
TFDBELA = QFDBELA.upb -1;
if ( TFDBELA != SFDBELA.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
NFDBELA_b = QFDBELA.data;
OFDBELA_in = SFDBELA.data;
for (;TFDBELA-- >= 0;
(NFDBELA_b++
,OFDBELA_in++
) )
{
UFDBELA = ((*OFDBELA_in)==WEDBELA_tab);
if ( UFDBELA )
{UFDBELA = ((*NFDBELA_b)!='!');
}
if ( UFDBELA )
{ 
(*NFDBELA_b) = WEDBELA_tab;
} 
}
 /* line 150: */
XYAAELA_comp_msg( 231, &XFDBELA );
A_CALLPROC(NL(Msg),(XFDBELA, A_HVEC(WFDBELA,A_VTRIM(VFDBELA,(YDDBELA_bangs),A_VTSCRIPT(&(VFDBELA.upb),(YDDBELA_bangs).upb,1,(*Tend))),A68_VC )),(XFDBELA, A_HVEC(WFDBELA,A_VTRIM(VFDBELA,(YDDBELA_bangs),A_VTSCRIPT(&(VFDBELA.upb),(YDDBELA_bangs).upb,1,(*Tend))),A68_VC ),(NL(Msg)).nonlocals));
 /* line 151: */
AGDBELA = A_VTRIM(ZFDBELA,(YDDBELA_bangs),A_VTSCRIPT(&(ZFDBELA.upb),(YDDBELA_bangs).upb,1,(*Tend))) ;
BGDBELA = AGDBELA.upb -1;
YFDBELA_c = AGDBELA.data;
for (;BGDBELA-- >= 0;
(YFDBELA_c++
) )
{
(*YFDBELA_c) = ' ';
}
 /* line 152: */
} 
 /* line 153: */
if ( (*NL(QEDBELA_errorinline)) )
{ 
CGDBELA = 232;
} 
else
{ 
CGDBELA = 233;
} 
 /* line 154: */
XYAAELA_comp_msg( CGDBELA, &FGDBELA );
A_CALLPROC(NL(Msg),(FGDBELA, A_HVEC(EGDBELA,A_VTRIM(DGDBELA,((*T)),A_VTSCRIPT(&(DGDBELA.upb),((*T)).upb,1,(*Tend))),A68_VC )),(FGDBELA, A_HVEC(EGDBELA,A_VTRIM(DGDBELA,((*T)),A_VTSCRIPT(&(DGDBELA.upb),((*T)).upb,1,(*Tend))),A68_VC ),(NL(Msg)).nonlocals));
 /* line 155: */
 /* line 156: */
(*NL(QEDBELA_errorinline)) = A68_FALSE;
} 
else
{ 
 /* line 157: */
if ( ((*NL(TEDBELA_finishlisting))==(*NL(REDBELA_lineno))) )
{ 
 /* line 158: */
 /* line 159: */
XYAAELA_comp_msg( 234, &GGDBELA );
A_CALLPROC(NL(Msg),(GGDBELA, VJAAOSI_nullmsg),(GGDBELA, VJAAOSI_nullmsg,(NL(Msg)).nonlocals));
} 
} 
} 
 /* line 160: */
(*NL(REDBELA_lineno))+=1;
 /* line 161: */
 /* line 162: */
 /* line 163: */
HGDBELA = NL(Compinput) ;
switch ( HGDBELA.mode )
{ 
case 2: /* PROC(REF REF MODE26,REF INT,MODE97) BOOL */
IGDBELA_reader = (HGDBELA.data.mode2);
 /* line 164: */
 /* line 165: */
JGDBELA = A_CALLPROC(IGDBELA_reader,(T, Tend, NL(Msg)),(T, Tend, NL(Msg),(IGDBELA_reader).nonlocals));
break;
case 1: /* REF STRUCT(REF MODE26,REF BITS)  */
KGDBELA_file = (HGDBELA.data.mode1);
 /* line 166: */
 /* line 168: */
{ 
(*Tend) = EFDBELA_l = 0;
 /* line 169: */
for ( ;; )
{ 
 /* line 170: */
SRBAOSI_read_line( KGDBELA_file, A_VTRIM(LGDBELA,((*T)),A_VTSCRIPT(&(LGDBELA.upb),((*T)).upb,((*Tend)+1),((*T).upb-1))), (&EFDBELA_l), NL(Msg), &MGDBELA );
FFDBELA_reply = MGDBELA;
 /* line 171: */
(*Tend)+=EFDBELA_l;
 /* line 172: */
 /* line 173: */
NGDBELA = PPBAOSI_(FFDBELA_reply, GDAAOST_io_partline);
if ( !NGDBELA ) break;
A_CLOSURE( PGDBELA_generator, QGDBELA_generator, RGDBELA_generator );
(( RGDBELA_generator * ) ( PGDBELA_generator.nonlocals )) -> T = T;
A_CALLPROC(PGDBELA_generator,(A68_FALSE, &UGDBELA),(A68_FALSE, &UGDBELA,(PGDBELA_generator).nonlocals));
VGDBELA_new = UGDBELA;
 /* line 174: */
XGDBELA = A_VTRIM(WGDBELA,(VGDBELA_new),A_VTSCRIPT(&(WGDBELA.upb),(VGDBELA_new).upb,1,(*T).upb)) ;
A_VASSIGN2((*T),XGDBELA,A68_CHAR );
 /* line 175: */
 /* line 176: */
(*T) = VGDBELA_new;
}
 /* line 180: */
YGDBELA = PPBAOSI_(FFDBELA_reply, DPBAOSI_io_ok);
if ( ! YGDBELA )
{ /* line 181: */
YGDBELA = (EFDBELA_l>0);
}
 /* line 182: */
JGDBELA = YGDBELA;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
ZGDBELA_not_eof = JGDBELA;
 /* line 183: */
AHDBELA = ((*Tend)+1) ;
BHDBELA = (&A_VINDEX((*T),AHDBELA)) ;
(*BHDBELA) = ' ';
 /* line 184: */
 /* line 185: */
if ( (YDDBELA_bangs.upb<(*T).upb) )
{ 
A_CLOSURE( DHDBELA_generator, EHDBELA_generator, FHDBELA_generator );
(( FHDBELA_generator * ) ( DHDBELA_generator.nonlocals )) -> T = T;
A_CALLPROC(DHDBELA_generator,(A68_FALSE, &IHDBELA),(A68_FALSE, &IHDBELA,(DHDBELA_generator).nonlocals));
YDDBELA_bangs = IHDBELA;
 /* line 186: */
KHDBELA = YDDBELA_bangs.upb -1;
JHDBELA_c = YDDBELA_bangs.data;
for (;KHDBELA-- >= 0;
(JHDBELA_c++
) )
{
(*JHDBELA_c) = ' ';
}
 /* line 187: */
} 
 /* line 188: */
 /* line 189: */
LHDBELA = ZGDBELA_not_eof;
} 
A_PROC_EXIT(input);
return( LHDBELA );
} 
#undef NL

A_STATIC A68_VOID  QHDBELA_compflt(A68_INT  Tind, A68_INT  No, A68_46  Params, void *NonLocals)
#define NL(x) (((RHDBELA_compflt *)NonLocals)->x)
{ 
A68_BOOL  SHDBELA;  /* optbool result */
A68_BOOL  THDBELA_fault;
A68_INT  UHDBELA;  /* YIELD */
A68_46  VHDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  WHDBELA;  /* avoid structure result */
A68_CHAR * XHDBELA;  /* YIELD */
A68_309  ZHDBELA_generator;   /* proc value of non-global proc */
A68_102  FIDBELA;  /* avoid structure result */
A68_102  EIDBELA_allp;
A68_INT  GIDBELA;  /* YIELD */
A68_VC  HIDBELA;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} IIDBELA; 
A68_VC * JIDBELA;  /* YIELD */
A68_VC  KIDBELA;  /* clause result */
A68_VC  LIDBELA;  /* avoid structure result */
A68_INT  MIDBELA;  /* YIELD */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} NIDBELA; 
A68_VC * OIDBELA;  /* YIELD */
A68_VC  PIDBELA;  /* clause result */
A68_VC  QIDBELA;  /* avoid structure result */
A68_INT  RIDBELA;  /* YIELD */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} SIDBELA; 
A68_VC * TIDBELA;  /* YIELD */
A68_102  UIDBELA;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_46   source;
A68_102   destination;
} VIDBELA; 
A68_102  WIDBELA;  /* YIELD */
A68_102  XIDBELA;  /* OPERATORS - assign op */
union {  /* BIOP 99 */
A68_102   source;
A68_46   destination;
} YIDBELA; 
A68_92  ZIDBELA;  /* avoid structure result */
A_PROC_ENTRY(compflt);
 /* line 193: */
 /* line 194: */
{ 
SHDBELA = (No<242);
if ( ! SHDBELA )
{SHDBELA = (No>245);
}
THDBELA_fault = SHDBELA;
 /* line 195: */
if ( THDBELA_fault )
{ 
(*NL(Compilation_failed)) = A68_TRUE;
} 
 /* line 196: */
 /* line 197: */
if ( (No==0) )
{ 
 /* line 198: */
 /* line 199: */
UHDBELA = 1 ;
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(VHDBELA,A_VINDEX(Params,UHDBELA),A68_VC )),(SHAAOSI_system, A_HVEC(VHDBELA,A_VINDEX(Params,UHDBELA),A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
if ( !THDBELA_fault )
{ 
 /* line 200: */
XYAAELA_comp_msg( No, &WHDBELA );
A_CALLPROC(NL(Msg),(WHDBELA, Params),(WHDBELA, Params,(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 201: */
if ( NL(Print_text) )
{ 
 /* line 202: */
if ( !(*NL(QEDBELA_errorinline)) )
{ 
(*NL(QEDBELA_errorinline)) = A68_TRUE;
 /* line 203: */
 /* line 204: */
(*NL(TEDBELA_finishlisting)) = ((*NL(REDBELA_lineno))+5);
} 
 /* line 205: */
if ( (Tind>0) )
{ 
 /* line 206: */
XHDBELA = (&A_VINDEX(YDDBELA_bangs,Tind)) ;
(*XHDBELA) = '!';
} 
} 
 /* line 208: */
A_CLOSURE( ZHDBELA_generator, AIDBELA_generator, BIDBELA_generator );
(( BIDBELA_generator * ) ( ZHDBELA_generator.nonlocals )) -> Params = Params;
A_CALLPROC(ZHDBELA_generator,(A68_TRUE, &FIDBELA),(A68_TRUE, &FIDBELA,(ZHDBELA_generator).nonlocals));
EIDBELA_allp = FIDBELA;
 /* line 209: */
GIDBELA = 1 ;
FCAAOSI_intchars( (*NL(REDBELA_lineno)), &HIDBELA );
IIDBELA.source = HIDBELA ;
JIDBELA = (&A_VINDEX(EIDBELA_allp,GIDBELA)) ;
(*JIDBELA) = (IIDBELA.destination);
 /* line 210: */
if ( NL(Print_text) )
{ 
KIDBELA = NL(YEDBELA_sp);
} 
else
{ 
FCAAOSI_intchars( Tind, &LIDBELA );
KIDBELA = LIDBELA;
} 
MIDBELA = 2 ;
NIDBELA.source = KIDBELA ;
OIDBELA = (&A_VINDEX(EIDBELA_allp,MIDBELA)) ;
(*OIDBELA) = (NIDBELA.destination);
 /* line 211: */
if ( NL(Print_text) )
{ 
PIDBELA = NL(YEDBELA_sp);
} 
else
{ 
FCAAOSI_intchars( No, &QIDBELA );
PIDBELA = QIDBELA;
} 
RIDBELA = 3 ;
SIDBELA.source = PIDBELA ;
TIDBELA = (&A_VINDEX(EIDBELA_allp,RIDBELA)) ;
(*TIDBELA) = (SIDBELA.destination);
 /* line 212: */
VIDBELA.source = Params ;
WIDBELA = A_VTRIM(UIDBELA,(EIDBELA_allp),A_VTSCRIPT(&(UIDBELA.upb),(EIDBELA_allp).upb,4,(EIDBELA_allp).upb)) ;
XIDBELA = (VIDBELA.destination) ;
A_VASSIGN2(XIDBELA,WIDBELA,A68_VC );
 /* line 213: */
 /* line 214: */
 /* line 215: */
YIDBELA.source = EIDBELA_allp ;
XYAAELA_comp_msg( No, &ZIDBELA );
A_CALLPROC(NL(Msg),(ZIDBELA, (YIDBELA.destination)),(ZIDBELA, (YIDBELA.destination),(NL(Msg)).nonlocals));
} 
} 
} 
A_PROC_EXIT(compflt);
return;
} 
#undef NL

A_STATIC A68_INT  IJDBELA_nextkept(void *NonLocals)
#define NL(x) (((JJDBELA_nextkept *)NonLocals)->x)
{ 
A68_INT  KJDBELA;  /* clause result */
A68_INT * LJDBELA;  /* YIELD */
A68_BOOL  MJDBELA_export;
A_PROC_ENTRY(nextkept);
{ 
 /* line 226: */
if ( (((*NL(DJDBELA_declsi))+=1)>(*NL(CJDBELA_ndecls))) )
{ 
(*NL(AJDBELA_specs)) = (A68_270 *)A68_NIL;
 /* line 227: */
 /* line 228: */
KJDBELA = EJDBELA_nomore;
} 
else
{ 
LJDBELA = (&((*NL(AJDBELA_specs))->Index)) ;
(*LJDBELA) = (*NL(BJDBELA_nextdecl));
 /* line 229: */
MJDBELA_export = (YBJAELA_in2((*NL(AJDBELA_specs)))==1);
 /* line 231: */
(*NL(BJDBELA_nextdecl)) = YBJAELA_in2((*NL(AJDBELA_specs)));
 /* line 232: */
(*NL(BJDBELA_nextdecl))+=(*(&((*NL(AJDBELA_specs))->Index)));
 /* line 233: */
if ( MJDBELA_export )
{ 
KJDBELA = GJDBELA_exported;
} 
else
{ 
 /* line 234: */
 /* line 235: */
KJDBELA = FJDBELA_normal;
} 
} 
} 
A_PROC_EXIT(nextkept);
return( KJDBELA );
} 
#undef NL

A_STATIC A68_VOID  OJDBELA_inkeptid(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PJDBELA_inkeptid *)NonLocals)->x)
{ 
A68_VC  QJDBELA;  /* clause result */
A68_VC  RJDBELA;  /* avoid structure result */
A_PROC_ENTRY(inkeptid);
CCJAELA_inid2( (*NL(AJDBELA_specs)), &RJDBELA );
QJDBELA = RJDBELA;
A_PROC_EXIT(inkeptid);
*ReturnedValue = (QJDBELA);
return;
} 
#undef NL

A_STATIC A68_INT  TJDBELA_inkeptint(void *NonLocals)
#define NL(x) (((UJDBELA_inkeptint *)NonLocals)->x)
{ 
A68_INT  VJDBELA;  /* clause result */
A_PROC_ENTRY(inkeptint);
VJDBELA = YBJAELA_in2((*NL(AJDBELA_specs)));
A_PROC_EXIT(inkeptint);
return( VJDBELA );
} 
#undef NL

A_STATIC A68_VOID  ZJDBELA_setctfromct(A68_184 * Ct, A68_97  Msg, void *NonLocals)
#define NL(x) (((AKDBELA_setctfromct *)NonLocals)->x)
{ 
A68_311  CKDBELA_generator;   /* proc value of non-global proc */
A68_192  IKDBELA;  /* avoid structure result */
A68_192  HKDBELA_ptrs;
A68_INT  JKDBELA;  /* YIELD */
A_PROC_ENTRY(setctfromct);
 /* line 242: */
 /* line 243: */
{ 
 /* line 244: */
if ( ZBKAELA_no_text(Ct, Msg) )
{ 
 /* line 245: */
(*NL(CJDBELA_ndecls)) = 0;
} 
else
{ 
A_CLOSURE( CKDBELA_generator, DKDBELA_generator, EKDBELA_generator );
(( EKDBELA_generator * ) ( CKDBELA_generator.nonlocals )) -> Ct = Ct;
(( EKDBELA_generator * ) ( CKDBELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(CKDBELA_generator,(A68_TRUE, &IKDBELA),(A68_TRUE, &IKDBELA,(CKDBELA_generator).nonlocals));
HKDBELA_ptrs = IKDBELA;
 /* line 246: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, HKDBELA_ptrs, (*(&(Ct->Val))), Msg);
 /* line 247: */
JKDBELA = 1 ;
(*NL(AJDBELA_specs)) = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(HKDBELA_ptrs,JKDBELA))));
 /* line 248: */
(*NL(CJDBELA_ndecls)) = YBJAELA_in2((*NL(AJDBELA_specs)));
 /* line 249: */
 /* line 250: */
(*NL(BJDBELA_nextdecl)) = (*(&((*NL(AJDBELA_specs))->Index)));
} 
 /* line 251: */
 /* line 252: */
(*NL(DJDBELA_declsi)) = 0;
} 
A_PROC_EXIT(setctfromct);
return;
} 
#undef NL

A_STATIC A68_BOOL  NKDBELA_setctfromctn(A68_162  Ctn, A68_97  Msg, void *NonLocals)
#define NL(x) (((OKDBELA_setctfromctn *)NonLocals)->x)
{ 
A68_184 * PKDBELA_ct;
A68_BOOL  QKDBELA;  /* clause result */
A_PROC_ENTRY(setctfromctn);
 /* line 255: */
 /* line 256: */
{ 
PKDBELA_ct = UDKAELA_get_context(Ctn.Context);
 /* line 257: */
 /* line 258: */
if ( (PKDBELA_ct!=DVJAELA_nilcontxt) )
{ 
A_CALLPROC(NL(YJDBELA_setctfromct),(PKDBELA_ct, Msg),(PKDBELA_ct, Msg,(NL(YJDBELA_setctfromct)).nonlocals));
 /* line 259: */
QKDBELA = A68_TRUE;
} 
else
{ 
 /* line 260: */
 /* line 261: */
QKDBELA = A68_FALSE;
} 
} 
A_PROC_EXIT(setctfromctn);
return( QKDBELA );
} 
#undef NL

A_STATIC A68_BOOL  WKDBELA_ctfromctn(A68_162  Name, void *NonLocals)
#define NL(x) (((XKDBELA_ctfromctn *)NonLocals)->x)
{ 
A68_BOOL  YKDBELA;  /* clause result */
A_PROC_ENTRY(ctfromctn);
YKDBELA = A_CALLPROC(NL(MKDBELA_setctfromctn),(Name, NL(Msg)),(Name, NL(Msg),(NL(MKDBELA_setctfromctn)).nonlocals));
A_PROC_EXIT(ctfromctn);
return( YKDBELA );
} 
#undef NL

A_STATIC A68_VOID  HLDBELA_fail(void *NonLocals)
#define NL(x) (((ILDBELA_fail *)NonLocals)->x)
{ 
A_PROC_ENTRY(fail);
{ 
(*NL(Compilation_failed)) = A68_TRUE;
siglongjmp(NL(OEDBELA_endcomp).label,1);
} 
A_PROC_EXIT(fail);
return;
} 
#undef NL

A_STATIC A68_VOID  SLDBELA_generator(A68_BOOL  QLDBELA_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((TLDBELA_generator *)NonLocals)->x)
{ 
A68_192  ULDBELA;  /* clause result */
A68_192  VLDBELA;  /* OPERATORS - dynamic generator */
{ 
VLDBELA.upb = PLDBELA_keepstep ;
( QLDBELA_anonymous? A_VLOC(A68_188 ,VLDBELA): A_VHEAP(A68_188 ,VLDBELA) );
ULDBELA = VLDBELA;
} 
*ReturnedValue = (ULDBELA);
return;
} 
#undef NL

A_STATIC A68_188 * AMDBELA_next_keep(void *NonLocals)
#define NL(x) (((BMDBELA_next_keep *)NonLocals)->x)
{ 
A68_311  DMDBELA_generator;   /* proc value of non-global proc */
A68_192  IMDBELA;  /* avoid structure result */
A68_192  JMDBELA_new;
A68_192  KMDBELA;  /* OPERATORS - trim index */
A68_192  LMDBELA;  /* YIELD */
A68_188 * MMDBELA;  /* clause result */
A_PROC_ENTRY(next_keep);
{ 
 /* line 313: */
if ( (((*NL(YLDBELA_keepsind))+=1)>(*NL(WLDBELA_keeps)).upb) )
{ 
A_CLOSURE( DMDBELA_generator, EMDBELA_generator, FMDBELA_generator );
(( FMDBELA_generator * ) ( DMDBELA_generator.nonlocals )) -> WLDBELA_keeps = NL(WLDBELA_keeps);
A_CALLPROC(DMDBELA_generator,(A68_FALSE, &IMDBELA),(A68_FALSE, &IMDBELA,(DMDBELA_generator).nonlocals));
JMDBELA_new = IMDBELA;
 /* line 314: */
LMDBELA = A_VTRIM(KMDBELA,(JMDBELA_new),A_VTSCRIPT(&(KMDBELA.upb),(JMDBELA_new).upb,1,(*NL(WLDBELA_keeps)).upb)) ;
A_VASSIGN2((*NL(WLDBELA_keeps)),LMDBELA,A68_188 );
 /* line 315: */
 /* line 316: */
(*NL(WLDBELA_keeps)) = JMDBELA_new;
} 
 /* line 317: */
 /* line 318: */
MMDBELA = (&A_VINDEX((*NL(WLDBELA_keeps)),(*NL(YLDBELA_keepsind))));
} 
A_PROC_EXIT(next_keep);
return( MMDBELA );
} 
#undef NL

A_STATIC A68_VOID  PMDBELA_generator(A68_BOOL  NMDBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QMDBELA_generator *)NonLocals)->x)
{ 
A68_VC  RMDBELA;  /* clause result */
A68_VC  SMDBELA;  /* OPERATORS - dynamic generator */
{ 
SMDBELA.upb = SNBAELA_block_size ;
( NMDBELA_anonymous? A_VLOC(A68_CHAR ,SMDBELA): A_VHEAP(A68_CHAR ,SMDBELA) );
RMDBELA = SMDBELA;
} 
*ReturnedValue = (RMDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ANDBELA_outcompid(A68_VC  Id, void *NonLocals)
#define NL(x) (((BNDBELA_outcompid *)NonLocals)->x)
{ 
A_PROC_ENTRY(outcompid);
UIJAELA_outid2(Id, NL(WMDBELA_discbuff), NL(Msg));
A_PROC_EXIT(outcompid);
return;
} 
#undef NL

A_STATIC A68_VOID  ENDBELA_outcompint(A68_INT  I, void *NonLocals)
#define NL(x) (((FNDBELA_outcompint *)NonLocals)->x)
{ 
A_PROC_ENTRY(outcompint);
CHJAELA_outchar((A68_CHAR)I, NL(WMDBELA_discbuff), NL(Msg));
A_PROC_EXIT(outcompint);
return;
} 
#undef NL

A_STATIC A68_VOID  INDBELA_outcompint2(A68_INT  I, void *NonLocals)
#define NL(x) (((JNDBELA_outcompint2 *)NonLocals)->x)
{ 
A_PROC_ENTRY(outcompint2);
YHJAELA_outint2(I, NL(WMDBELA_discbuff), NL(Msg));
A_PROC_EXIT(outcompint2);
return;
} 
#undef NL

A_STATIC A68_VOID  MNDBELA_outcompints(A68_32  Vi, void *NonLocals)
#define NL(x) (((NNDBELA_outcompints *)NonLocals)->x)
{ 
A68_INT  ONDBELA_i;
A68_INT * PNDBELA;  /* forall control - []x */
A68_INT  QNDBELA;  /* forall loop counter */
A_PROC_ENTRY(outcompints);
 /* line 331: */
QNDBELA = Vi.upb -1;
PNDBELA = Vi.data;
for (;QNDBELA-- >= 0;
(PNDBELA++
) )
{
ONDBELA_i = *PNDBELA;
A_CALLPROC(NL(HNDBELA_outcompint2),(ONDBELA_i),(ONDBELA_i,(NL(HNDBELA_outcompint2)).nonlocals));
}
A_PROC_EXIT(outcompints);
return;
} 
#undef NL

A_STATIC A68_VOID  TNDBELA_outcompints2(A68_32  Vi, void *NonLocals)
#define NL(x) (((UNDBELA_outcompints2 *)NonLocals)->x)
{ 
A68_INT  VNDBELA;  /* YIELD */
A68_INT  WNDBELA_j;
A68_INT  XNDBELA;  /* to part of loop */
A_PROC_ENTRY(outcompints2);
 /* line 334: */
{ 
VNDBELA = 1 ;
CHJAELA_outchar((A68_CHAR)A_VINDEX(Vi,VNDBELA), NL(WMDBELA_discbuff), NL(Msg));
 /* line 335: */
if ( (Vi.upb>1) )
{ 
XNDBELA = Vi.upb;
for ( WNDBELA_j = 2;
WNDBELA_j <= XNDBELA;
WNDBELA_j += 1 )
{ 
A_CALLPROC(NL(HNDBELA_outcompint2),(A_VINDEX(Vi,WNDBELA_j)),(A_VINDEX(Vi,WNDBELA_j),(NL(HNDBELA_outcompint2)).nonlocals));
}
 /* line 336: */
} 
} 
A_PROC_EXIT(outcompints2);
return;
} 
#undef NL

A_STATIC A68_VOID  CODBELA_shellints(A68_32  I, void *NonLocals)
#define NL(x) (((DODBELA_shellints *)NonLocals)->x)
{ 
A68_INT  EODBELA;  /* YIELD */
A68_188  FODBELA;  /* avoid structure result */
A68_316  GODBELA;  /* collateral clause result */
A68_32  HODBELA;  /* OPERATORS - istruct -> vector */
A68_32  IODBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JODBELA;  /* YIELD */
A68_188  KODBELA;  /* avoid structure result */
A68_188 * LODBELA;  /* YIELD */
A68_188 * MODBELA;  /* YIELD */
A68_188 * NODBELA;  /* YIELD */
A68_INT  OODBELA;  /* YIELD */
A68_INT  PODBELA;  /* YIELD */
A68_INT  QODBELA;  /* YIELD */
A68_315  RODBELA;  /* collateral clause result */
A68_INT  SODBELA;  /* YIELD */
A68_INT  TODBELA;  /* ADICOPS - ABS INT */
A68_INT  UODBELA;  /* YIELD */
A68_INT  VODBELA;  /* YIELD */
A68_315 * WODBELA;  /* YIELD */
A68_INT  XODBELA;  /* YIELD */
A68_32  YODBELA;  /* OPERATORS - trim index */
A_PROC_ENTRY(shellints);
 /* line 345: */
 /* line 346: */
{ 
 /* line 347: */
 /* line 348: */
if ( !(*NL(OLDBELA_compilation_failed)) )
{ 
 /* line 349: */
EODBELA = 1 ;
if ( (A_VINDEX(I,EODBELA)==ULCAELA_kfn) )
{ 
CGJAELA_endwrite( NL(WMDBELA_discbuff), NL(Msg), &FODBELA );
(*NL(XMDBELA_discptr)) = FODBELA;
 /* line 350: */
RYIAELA_resetbuffer(NL(WMDBELA_discbuff));
 /* line 351: */
A_CALLPROC(NL(SNDBELA_outcompints2),(I),(I,(NL(SNDBELA_outcompints2)).nonlocals));
 /* line 352: */
for ( ;; )
{ 
 /* line 353: */
if ( !(((*NL(ZNDBELA_inds))!=YNDBELA_nilinds)) ) break;
GODBELA.data[0] = (*(&((*NL(ZNDBELA_inds))->Names)));
GODBELA.data[1] = (*(&((*NL(ZNDBELA_inds))->Stack)));
GODBELA.data[2] = (*(&((*NL(ZNDBELA_inds))->Fnno)));
A_CALLPROC(NL(LNDBELA_outcompints),(A_HISVEC(HODBELA,GODBELA,3,A68_INT )),(A_HISVEC(HODBELA,GODBELA,3,A68_INT ),(NL(LNDBELA_outcompints)).nonlocals));
 /* line 354: */
 /* line 355: */
(*NL(ZNDBELA_inds)) = (*(&((*NL(ZNDBELA_inds))->Rest)));
}
 /* line 356: */
 /* line 357: */
A_CALLPROC(NL(SNDBELA_outcompints2),(A_HVEC(IODBELA,HJCAELA_zero,A68_INT )),(A_HVEC(IODBELA,HJCAELA_zero,A68_INT ),(NL(SNDBELA_outcompints2)).nonlocals));
} 
else
{ 
 /* line 358: */
JODBELA = 1 ;
if ( (A_VINDEX(I,JODBELA)==XLCAELA_kend) )
{ 
A_CALLPROC(NL(SNDBELA_outcompints2),(I),(I,(NL(SNDBELA_outcompints2)).nonlocals));
 /* line 359: */
CGJAELA_endwrite( NL(WMDBELA_discbuff), NL(Msg), &KODBELA );
LODBELA = A_CALLPROC(NL(ZLDBELA_next_keep),(),((NL(ZLDBELA_next_keep)).nonlocals)) ;
(*LODBELA) = KODBELA;
 /* line 360: */
RYIAELA_resetbuffer(NL(WMDBELA_discbuff));
 /* line 361: */
MODBELA = A_CALLPROC(NL(ZLDBELA_next_keep),(),((NL(ZLDBELA_next_keep)).nonlocals)) ;
(*MODBELA) = (*NL(XMDBELA_discptr));
 /* line 362: */
(*NL(XMDBELA_discptr)) = UACAELA_nilptr;
 /* line 363: */
 /* line 364: */
NODBELA = A_CALLPROC(NL(ZLDBELA_next_keep),(),((NL(ZLDBELA_next_keep)).nonlocals)) ;
(*NODBELA) = UACAELA_nilptr;
} 
else
{ 
 /* line 365: */
OODBELA = 1 ;
if ( (A_VINDEX(I,OODBELA)==ZKCAELA_fnend) )
{ 
PODBELA = 2 ;
if ( (A_VINDEX(I,PODBELA)>(-1)) )
{ 
A_CALLPROC(NL(DNDBELA_outcompint),(ZKCAELA_fnend),(ZKCAELA_fnend,(NL(DNDBELA_outcompint)).nonlocals));
} 
 /* line 366: */
 /* line 367: */
QODBELA = 2 ;
if ( (A_VINDEX(I,QODBELA)!=0) )
{ 
SODBELA = 2 ;
TODBELA = A_VINDEX(I,SODBELA) ;
RODBELA.Fnno = A_ABS(TODBELA);
UODBELA = 3 ;
RODBELA.Names = A_VINDEX(I,UODBELA);
VODBELA = 4 ;
RODBELA.Stack = A_VINDEX(I,VODBELA);
 /* line 368: */
RODBELA.Rest = (*NL(ZNDBELA_inds));
 /* line 369: */
WODBELA = A_HEAP(A68_315 ) ;
(*WODBELA) = RODBELA ;
(*NL(ZNDBELA_inds)) = WODBELA;
} 
} 
else
{ 
XODBELA = 1 ;
if ( (A_VINDEX(I,XODBELA)==MLCAELA_dummy) )
{ 
 /* line 370: */
A_CALLPROC(NL(LNDBELA_outcompints),(A_VTRIM(YODBELA,(I),A_VTSCRIPT(&(YODBELA.upb),(I).upb,2,(I).upb))),(A_VTRIM(YODBELA,(I),A_VTSCRIPT(&(YODBELA.upb),(I).upb,2,(I).upb)),(NL(LNDBELA_outcompints)).nonlocals));
} 
else
{ 
 /* line 371: */
 /* line 372: */
 /* line 373: */
A_CALLPROC(NL(SNDBELA_outcompints2),(I),(I,(NL(SNDBELA_outcompints2)).nonlocals));
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(shellints);
return;
} 
#undef NL

A_STATIC A68_VOID  BPDBELA_mname(A68_VC  M, void *NonLocals)
#define NL(x) (((CPDBELA_mname *)NonLocals)->x)
{ 
A_PROC_ENTRY(mname);
 /* line 376: */
 /* line 377: */
{ 
(*NL(XMDBELA_discptr)) = UACAELA_nilptr;
 /* line 378: */
 /* line 379: */
(*NL(YLDBELA_keepsind)) = 0;
} 
A_PROC_EXIT(mname);
return;
} 
#undef NL

A_STATIC A68_VOID  EPDBELA_dumpsourceinfo(A68_188  *ReturnedValue, void *NonLocals)
#define NL(x) (((FPDBELA_dumpsourceinfo *)NonLocals)->x)
{ 
A68_31  HPDBELA_generator;   /* proc value of non-global proc */
A68_VC  MPDBELA;  /* avoid structure result */
A68_87  NPDBELA;  /* OPERATORS - mode -> union mode */
A68_270 * OPDBELA_buffer;
A68_306  PPDBELA;  /* united object - for case conformity */
A68_111 * QPDBELA_file;
A68_122  RPDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SPDBELA;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} TPDBELA; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} UPDBELA; 
A68_188  XPDBELA;  /* clause result */
A68_188  YPDBELA;  /* avoid structure result */
A_PROC_ENTRY(dumpsourceinfo);
{ 
A_CLOSURE( HPDBELA_generator, IPDBELA_generator, JPDBELA_generator );
A_CALLPROC(HPDBELA_generator,(A68_FALSE, &MPDBELA),(A68_FALSE, &MPDBELA,(HPDBELA_generator).nonlocals));
OPDBELA_buffer = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(NPDBELA,mode2,2,MPDBELA));
 /* line 385: */
 /* line 386: */
PPDBELA = NL(Compinput) ;
switch ( PPDBELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF BITS)  */
QPDBELA_file = (PPDBELA.data.mode1);
 /* line 387: */
{ 
 /* line 388: */
YHJAELA_outint2((A68_INT )(*(&(NVBAOSI_get_file_details(A_UNITE(RPDBELA,mode1,1,QPDBELA_file), NL(Msg))->Data_modified))), OPDBELA_buffer, NL(Msg));
 /* line 389: */
 /* line 390: */
 /* line 391: */
YPBAOSI_file_name( QPDBELA_file, &SPDBELA );
TPDBELA.source = SPDBELA ;
UIJAELA_outid2((TPDBELA.destination), OPDBELA_buffer, NL(Msg));
} 
break;
default: 
{ 
YHJAELA_outint2(DZCAOST_seconds(), OPDBELA_buffer, NL(Msg));
 /* line 392: */
 /* line 393: */
 /* line 394: */
UPDBELA.source = CEDBELA_online ;
UIJAELA_outid2((UPDBELA.destination), OPDBELA_buffer, NL(Msg));
} 
break;
} 
 /* line 396: */
LHJAELA_outchars(WPDBELA, OPDBELA_buffer, NL(Msg));
 /* line 397: */
 /* line 398: */
CGJAELA_endwrite( OPDBELA_buffer, NL(Msg), &YPDBELA );
XPDBELA = YPDBELA;
} 
A_PROC_EXIT(dumpsourceinfo);
*ReturnedValue = (XPDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DQDBELA_import(A68_VC  Rename, A68_VC  Name, A68_162  Ctn, void *NonLocals)
#define NL(x) (((EQDBELA_import *)NonLocals)->x)
{ 
A_PROC_ENTRY(import);
 /* line 402: */
{ 
A_CALLPROC(NL(ZMDBELA_outcompid),(Rename),(Rename,(NL(ZMDBELA_outcompid)).nonlocals));
A_CALLPROC(NL(ZMDBELA_outcompid),(Name),(Name,(NL(ZMDBELA_outcompid)).nonlocals));
 /* line 403: */
A_CALLPROC(NL(ZMDBELA_outcompid),(Ctn.Context),(Ctn.Context,(NL(ZMDBELA_outcompid)).nonlocals));
A_CALLPROC(NL(ZMDBELA_outcompid),(Ctn.Import),(Ctn.Import,(NL(ZMDBELA_outcompid)).nonlocals));
} 
A_PROC_EXIT(import);
return;
} 
#undef NL

A_STATIC A68_VOID  VDDBELA_generator(A68_BOOL  UDDBELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WDDBELA;  /* clause result */
A68_VC  XDDBELA;  /* OPERATORS - dynamic generator */
{ 
XDDBELA.upb = 0 ;
( UDDBELA_anonymous? A_VLOC(A68_CHAR ,XDDBELA): A_VHEAP(A68_CHAR ,XDDBELA) );
WDDBELA = XDDBELA;
} 
*ReturnedValue = (WDDBELA);
return;
} 
#undef NL
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */

A68_VOID  NEDBELA_compile_shell(A68_BOOL  Print_text, A68_183  Cr, A68_306  Compinput, A68_248  Outints, A68_43  Outid, A68_43  Outstring, A68_249  Outimport, A68_43  Mname, A68_BOOL * Compilation_failed, A68_97  Msg)
{ 
A68_BOOL  QEDBELA_errorinline;
A68_INT  REDBELA_lineno;
A68_INT  SEDBELA_lastline;
A68_INT  TEDBELA_finishlisting;
A68_CHAR * UEDBELA_bc;
A68_INT  VEDBELA;  /* forall loop counter */
A68_VC  XEDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YEDBELA_sp;
A68_251  BFDBELA_input;   /* proc value of non-global proc */
A68_252  PHDBELA_compflt;   /* proc value of non-global proc */
A68_270 * AJDBELA_specs;
A68_INT  BJDBELA_nextdecl;
A68_INT  CJDBELA_ndecls;
A68_INT  DJDBELA_declsi;
A68_131  HJDBELA_nextkept;   /* proc value of non-global proc */
A68_173  NJDBELA_inkeptid;   /* proc value of non-global proc */
A68_131  SJDBELA_inkeptint;   /* proc value of non-global proc */
A68_310  YJDBELA_setctfromct;   /* proc value of non-global proc */
A68_312  MKDBELA_setctfromctn;   /* proc value of non-global proc */
A68_180  RKDBELA;  /* avoid structure result */
A68_178  SKDBELA;  /* avoid structure result */
A68_INT  TKDBELA_version;
A68_250  VKDBELA_ctfromctn;   /* proc value of non-global proc */
A68_306  ZKDBELA;  /* united object - for case conformity */
A68_111 * ALDBELA_file;
A68_46  BLDBELA;  /* clause result */
A68_VC  CLDBELA;  /* avoid structure result */
A68_46  DLDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  ELDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  FLDBELA;  /* avoid structure result */
A68_143  GLDBELA_fail;   /* proc value of non-global proc */
A68_jmp_buf OEDBELA_endcomp;
if ( sigsetjmp( OEDBELA_endcomp.label,1) ) goto PEDBELA_endcomp;
A_PROC_ENTRY(compile_shell);
 /* line 127: */
 /* line 131: */
{ 
QEDBELA_errorinline = A68_FALSE;
 /* line 132: */
REDBELA_lineno = 0;
SEDBELA_lastline = REDBELA_lineno;
TEDBELA_finishlisting = (REDBELA_lineno-1);
 /* line 133: */
VEDBELA = YDDBELA_bangs.upb -1;
UEDBELA_bc = YDDBELA_bangs.data;
for (;VEDBELA-- >= 0;
(UEDBELA_bc++
) )
{
(*UEDBELA_bc) = ' ';
}
 /* line 134: */
(*Compilation_failed) = A68_FALSE;
 /* line 136: */
 /* line 137: */
YEDBELA_sp = A_HVEC(XEDBELA,' ',A68_CHAR );
 /* line 139: */
A_CLOSURE( BFDBELA_input, CFDBELA_input, DFDBELA_input );
(( DFDBELA_input * ) ( BFDBELA_input.nonlocals )) -> Print_text = Print_text;
(( DFDBELA_input * ) ( BFDBELA_input.nonlocals )) -> TEDBELA_finishlisting = (&TEDBELA_finishlisting);
(( DFDBELA_input * ) ( BFDBELA_input.nonlocals )) -> REDBELA_lineno = (&REDBELA_lineno);
(( DFDBELA_input * ) ( BFDBELA_input.nonlocals )) -> QEDBELA_errorinline = (&QEDBELA_errorinline);
(( DFDBELA_input * ) ( BFDBELA_input.nonlocals )) -> Msg = Msg;
(( DFDBELA_input * ) ( BFDBELA_input.nonlocals )) -> Compinput = Compinput;
 /* line 192: */
A_CLOSURE( PHDBELA_compflt, QHDBELA_compflt, RHDBELA_compflt );
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> Compilation_failed = Compilation_failed;
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> Msg = Msg;
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> Print_text = Print_text;
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> QEDBELA_errorinline = (&QEDBELA_errorinline);
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> TEDBELA_finishlisting = (&TEDBELA_finishlisting);
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> REDBELA_lineno = (&REDBELA_lineno);
(( RHDBELA_compflt * ) ( PHDBELA_compflt.nonlocals )) -> YEDBELA_sp = YEDBELA_sp;
 /* line 220: */
 /* line 221: */
 /* line 223: */
 /* line 224: */
 /* line 225: */
A_CLOSURE( HJDBELA_nextkept, IJDBELA_nextkept, JJDBELA_nextkept );
(( JJDBELA_nextkept * ) ( HJDBELA_nextkept.nonlocals )) -> DJDBELA_declsi = (&DJDBELA_declsi);
(( JJDBELA_nextkept * ) ( HJDBELA_nextkept.nonlocals )) -> CJDBELA_ndecls = (&CJDBELA_ndecls);
(( JJDBELA_nextkept * ) ( HJDBELA_nextkept.nonlocals )) -> AJDBELA_specs = (&AJDBELA_specs);
(( JJDBELA_nextkept * ) ( HJDBELA_nextkept.nonlocals )) -> BJDBELA_nextdecl = (&BJDBELA_nextdecl);
 /* line 237: */
A_CLOSURE( NJDBELA_inkeptid, OJDBELA_inkeptid, PJDBELA_inkeptid );
(( PJDBELA_inkeptid * ) ( NJDBELA_inkeptid.nonlocals )) -> AJDBELA_specs = (&AJDBELA_specs);
 /* line 239: */
A_CLOSURE( SJDBELA_inkeptint, TJDBELA_inkeptint, UJDBELA_inkeptint );
(( UJDBELA_inkeptint * ) ( SJDBELA_inkeptint.nonlocals )) -> AJDBELA_specs = (&AJDBELA_specs);
 /* line 241: */
A_CLOSURE( YJDBELA_setctfromct, ZJDBELA_setctfromct, AKDBELA_setctfromct );
(( AKDBELA_setctfromct * ) ( YJDBELA_setctfromct.nonlocals )) -> CJDBELA_ndecls = (&CJDBELA_ndecls);
(( AKDBELA_setctfromct * ) ( YJDBELA_setctfromct.nonlocals )) -> AJDBELA_specs = (&AJDBELA_specs);
(( AKDBELA_setctfromct * ) ( YJDBELA_setctfromct.nonlocals )) -> BJDBELA_nextdecl = (&BJDBELA_nextdecl);
(( AKDBELA_setctfromct * ) ( YJDBELA_setctfromct.nonlocals )) -> DJDBELA_declsi = (&DJDBELA_declsi);
 /* line 254: */
A_CLOSURE( MKDBELA_setctfromctn, NKDBELA_setctfromctn, OKDBELA_setctfromctn );
(( OKDBELA_setctfromctn * ) ( MKDBELA_setctfromctn.nonlocals )) -> YJDBELA_setctfromct = YJDBELA_setctfromct;
 /* line 266: */
 /* line 267: */
if ( RDDBELA_initialise )
{ 
RDDBELA_initialise = A68_FALSE;
 /* line 268: */
BDBATRN_makelookup(  &RKDBELA );
SDDBELA_lookup = RKDBELA;
 /* line 269: */
 /* line 270: */
NMAATRN_makecharset(  &SKDBELA );
TDDBELA_charset = SKDBELA;
} 
 /* line 272: */
QJBBELA_save_library(Msg);
 /* line 274: */
A_CALLPROC(YJDBELA_setctfromct,(Cr.Context, Msg),(Cr.Context, Msg,(YJDBELA_setctfromct).nonlocals));
 /* line 276: */
TKDBELA_version = UBKAELA_lib_version();
 /* line 278: */
A_CLOSURE( VKDBELA_ctfromctn, WKDBELA_ctfromctn, XKDBELA_ctfromctn );
(( XKDBELA_ctfromctn * ) ( VKDBELA_ctfromctn.nonlocals )) -> MKDBELA_setctfromctn = MKDBELA_setctfromctn;
(( XKDBELA_ctfromctn * ) ( VKDBELA_ctfromctn.nonlocals )) -> Msg = Msg;
 /* line 280: */
 /* line 281: */
ZKDBELA = Compinput ;
switch ( ZKDBELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF BITS)  */
ALDBELA_file = (ZKDBELA.data.mode1);
 /* line 282: */
 /* line 283: */
SIBAOST_testmode_file_name( ALDBELA_file, &CLDBELA );
BLDBELA = A_HVEC(DLDBELA,CLDBELA,A68_VC );
break;
default: 
BLDBELA = A_HVEC(ELDBELA,CEDBELA_online,A68_VC );
break;
} 
XYAAELA_comp_msg( 250, &FLDBELA );
A_CALLPROC(Msg,(FLDBELA, BLDBELA),(FLDBELA, BLDBELA,(Msg).nonlocals));
 /* line 285: */
A_CLOSURE( GLDBELA_fail, HLDBELA_fail, ILDBELA_fail );
(( ILDBELA_fail * ) ( GLDBELA_fail.nonlocals )) -> Compilation_failed = Compilation_failed;
(( ILDBELA_fail * ) ( GLDBELA_fail.nonlocals )) -> OEDBELA_endcomp = OEDBELA_endcomp;
 /* line 287: */
 /* line 288: */
 /* line 289: */
NSBBELA_compile(Outints, Outid, Outstring, GLDBELA_fail, Mname, TKDBELA_version, HJDBELA_nextkept, SJDBELA_inkeptint, NJDBELA_inkeptid, Outimport, VKDBELA_ctfromctn, BFDBELA_input, PHDBELA_compflt, SDDBELA_lookup, TDDBELA_charset);
 /* line 291: */
PEDBELA_endcomp:
 /* line 292: */
/*SKIP*/;
} 
A_PROC_EXIT(compile_shell);
return;
} 
#undef NL
 /* line 299: */
 /* line 300: */

A68_VOID  NLDBELA_ella_shell(A68_BOOL  Print_text, A68_183  Cr, A68_306  Compinput, A68_97  Msg, A68_188  *ReturnedValue)
{ 
A68_BOOL  OLDBELA_compilation_failed;
A68_311  RLDBELA_generator;   /* proc value of non-global proc */
A68_192  XLDBELA;  /* avoid structure result */
A68_192  WLDBELA_keeps;
A68_INT  YLDBELA_keepsind;
A68_314  ZLDBELA_next_keep;   /* proc value of non-global proc */
A68_31  OMDBELA_generator;   /* proc value of non-global proc */
A68_VC  UMDBELA;  /* avoid structure result */
A68_VC  TMDBELA_buffer;
A68_87  VMDBELA;  /* OPERATORS - mode -> union mode */
A68_270 * WMDBELA_discbuff;
A68_188  XMDBELA_discptr;
A68_43  ZMDBELA_outcompid;   /* proc value of non-global proc */
A68_128  DNDBELA_outcompint;   /* proc value of non-global proc */
A68_128  HNDBELA_outcompint2;   /* proc value of non-global proc */
A68_248  LNDBELA_outcompints;   /* proc value of non-global proc */
A68_248  SNDBELA_outcompints2;   /* proc value of non-global proc */
A68_315 * ZNDBELA_inds;
A68_248  BODBELA_shellints;   /* proc value of non-global proc */
A68_43  APDBELA_mname;   /* proc value of non-global proc */
A68_317  DPDBELA_dumpsourceinfo;   /* proc value of non-global proc */
A68_249  CQDBELA_import;   /* proc value of non-global proc */
A68_188  FQDBELA;  /* clause result */
A68_188  GQDBELA;  /* avoid structure result */
A68_188 * HQDBELA;  /* YIELD */
A68_188  IQDBELA;  /* avoid structure result */
A68_188 * JQDBELA;  /* YIELD */
A68_192  KQDBELA;  /* OPERATORS - trim index */
A68_188  LQDBELA;  /* avoid structure result */
A_PROC_ENTRY(ella_shell);
 /* line 301: */
 /* line 302: */
{ 
OLDBELA_compilation_failed = A68_FALSE;
 /* line 306: */
 /* line 307: */
A_CLOSURE( RLDBELA_generator, SLDBELA_generator, TLDBELA_generator );
A_CALLPROC(RLDBELA_generator,(A68_FALSE, &XLDBELA),(A68_FALSE, &XLDBELA,(RLDBELA_generator).nonlocals));
WLDBELA_keeps = XLDBELA;
 /* line 308: */
YLDBELA_keepsind = 0;
 /* line 310: */
 /* line 311: */
 /* line 312: */
A_CLOSURE( ZLDBELA_next_keep, AMDBELA_next_keep, BMDBELA_next_keep );
(( BMDBELA_next_keep * ) ( ZLDBELA_next_keep.nonlocals )) -> YLDBELA_keepsind = (&YLDBELA_keepsind);
(( BMDBELA_next_keep * ) ( ZLDBELA_next_keep.nonlocals )) -> WLDBELA_keeps = (&WLDBELA_keeps);
 /* line 320: */
A_CLOSURE( OMDBELA_generator, PMDBELA_generator, QMDBELA_generator );
A_CALLPROC(OMDBELA_generator,(A68_TRUE, &UMDBELA),(A68_TRUE, &UMDBELA,(OMDBELA_generator).nonlocals));
TMDBELA_buffer = UMDBELA;
 /* line 321: */
WMDBELA_discbuff = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(VMDBELA,mode2,2,TMDBELA_buffer));
 /* line 322: */
XMDBELA_discptr = UACAELA_nilptr;
 /* line 324: */
A_CLOSURE( ZMDBELA_outcompid, ANDBELA_outcompid, BNDBELA_outcompid );
(( BNDBELA_outcompid * ) ( ZMDBELA_outcompid.nonlocals )) -> WMDBELA_discbuff = WMDBELA_discbuff;
(( BNDBELA_outcompid * ) ( ZMDBELA_outcompid.nonlocals )) -> Msg = Msg;
 /* line 326: */
A_CLOSURE( DNDBELA_outcompint, ENDBELA_outcompint, FNDBELA_outcompint );
(( FNDBELA_outcompint * ) ( DNDBELA_outcompint.nonlocals )) -> WMDBELA_discbuff = WMDBELA_discbuff;
(( FNDBELA_outcompint * ) ( DNDBELA_outcompint.nonlocals )) -> Msg = Msg;
 /* line 328: */
A_CLOSURE( HNDBELA_outcompint2, INDBELA_outcompint2, JNDBELA_outcompint2 );
(( JNDBELA_outcompint2 * ) ( HNDBELA_outcompint2.nonlocals )) -> WMDBELA_discbuff = WMDBELA_discbuff;
(( JNDBELA_outcompint2 * ) ( HNDBELA_outcompint2.nonlocals )) -> Msg = Msg;
 /* line 330: */
A_CLOSURE( LNDBELA_outcompints, MNDBELA_outcompints, NNDBELA_outcompints );
(( NNDBELA_outcompints * ) ( LNDBELA_outcompints.nonlocals )) -> HNDBELA_outcompint2 = HNDBELA_outcompint2;
 /* line 333: */
A_CLOSURE( SNDBELA_outcompints2, TNDBELA_outcompints2, UNDBELA_outcompints2 );
(( UNDBELA_outcompints2 * ) ( SNDBELA_outcompints2.nonlocals )) -> WMDBELA_discbuff = WMDBELA_discbuff;
(( UNDBELA_outcompints2 * ) ( SNDBELA_outcompints2.nonlocals )) -> Msg = Msg;
(( UNDBELA_outcompints2 * ) ( SNDBELA_outcompints2.nonlocals )) -> HNDBELA_outcompint2 = HNDBELA_outcompint2;
 /* line 339: */
 /* line 340: */
 /* line 341: */
ZNDBELA_inds = YNDBELA_nilinds;
 /* line 344: */
A_CLOSURE( BODBELA_shellints, CODBELA_shellints, DODBELA_shellints );
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> OLDBELA_compilation_failed = (&OLDBELA_compilation_failed);
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> XMDBELA_discptr = (&XMDBELA_discptr);
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> WMDBELA_discbuff = WMDBELA_discbuff;
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> Msg = Msg;
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> SNDBELA_outcompints2 = SNDBELA_outcompints2;
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> ZNDBELA_inds = (&ZNDBELA_inds);
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> LNDBELA_outcompints = LNDBELA_outcompints;
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> ZLDBELA_next_keep = ZLDBELA_next_keep;
(( DODBELA_shellints * ) ( BODBELA_shellints.nonlocals )) -> DNDBELA_outcompint = DNDBELA_outcompint;
 /* line 375: */
A_CLOSURE( APDBELA_mname, BPDBELA_mname, CPDBELA_mname );
(( CPDBELA_mname * ) ( APDBELA_mname.nonlocals )) -> XMDBELA_discptr = (&XMDBELA_discptr);
(( CPDBELA_mname * ) ( APDBELA_mname.nonlocals )) -> YLDBELA_keepsind = (&YLDBELA_keepsind);
 /* line 382: */
 /* line 383: */
 /* line 384: */
A_CLOSURE( DPDBELA_dumpsourceinfo, EPDBELA_dumpsourceinfo, FPDBELA_dumpsourceinfo );
(( FPDBELA_dumpsourceinfo * ) ( DPDBELA_dumpsourceinfo.nonlocals )) -> Compinput = Compinput;
(( FPDBELA_dumpsourceinfo * ) ( DPDBELA_dumpsourceinfo.nonlocals )) -> Msg = Msg;
 /* line 401: */
A_CLOSURE( CQDBELA_import, DQDBELA_import, EQDBELA_import );
(( EQDBELA_import * ) ( CQDBELA_import.nonlocals )) -> ZMDBELA_outcompid = ZMDBELA_outcompid;
 /* line 406: */
 /* line 407: */
NEDBELA_compile_shell(Print_text, Cr, Compinput, BODBELA_shellints, ZMDBELA_outcompid, ZMDBELA_outcompid, CQDBELA_import, APDBELA_mname, (&OLDBELA_compilation_failed), Msg);
 /* line 409: */
 /* line 410: */
 /* line 411: */
if ( OLDBELA_compilation_failed )
{ 
FQDBELA = UACAELA_nilptr;
} 
else
{ 
A_CALLPROC(DPDBELA_dumpsourceinfo,( &GQDBELA),( &GQDBELA,(DPDBELA_dumpsourceinfo).nonlocals));
HQDBELA = A_CALLPROC(ZLDBELA_next_keep,(),((ZLDBELA_next_keep).nonlocals)) ;
(*HQDBELA) = GQDBELA;
 /* line 412: */
CGJAELA_endwrite( WMDBELA_discbuff, Msg, &IQDBELA );
JQDBELA = A_CALLPROC(ZLDBELA_next_keep,(),((ZLDBELA_next_keep).nonlocals)) ;
(*JQDBELA) = IQDBELA;
 /* line 413: */
 /* line 414: */
 /* line 415: */
 /* line 418: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, A_VTRIM(KQDBELA,(WLDBELA_keeps),A_VTSCRIPT(&(KQDBELA.upb),(WLDBELA_keeps).upb,1,YLDBELA_keepsind)), Msg, &LQDBELA );
FQDBELA = LQDBELA;
} 
} 
A_PROC_EXIT(ella_shell);
*ReturnedValue = (FQDBELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void MDDBELA(void)   /* initialise DECS compshell */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/compshell.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/databasebuffers.m","./mfiles/compmessages.m","./mfiles/compile.m","./mfiles/libmodes.m","./mfiles/libinterface.m","/u/model/ella/transform/assoc/mfiles/charset.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  ZDDBELA;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
NWIAELA();   /* USE databasebuffers */
CFAAELA();   /* USE compmessages */
VPBBELA();   /* USE compile */
FTJAELA();   /* USE libmodes */
SOABELA();   /* USE libinterface */
GMAATRN();   /* USE charset */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/compshell.a68";
A_config.translation_time = "Tue Apr  4 10:40:16 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LDDBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:40:16 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compshell);
UEAALIB_a68config(LGAALIB_configinfo, QDDBELA);
 /* line 106: */
RDDBELA_initialise = A68_TRUE;
 /* line 108: */
 /* line 109: */
 /* line 110: */
VDDBELA_generator( A68_TRUE, &ZDDBELA );
YDDBELA_bangs = ZDDBELA;
 /* line 111: */
CEDBELA_online = BEDBELA;
 /* line 116: */
 /* line 118: */
 /* line 298: */
 /* line 419: */
A_PROC_EXIT(DECS compshell);
} 
#undef NL
/* end of translation of ./a68files/compshell.a68 */
