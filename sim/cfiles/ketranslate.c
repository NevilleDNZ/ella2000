
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
/* UNAME:ADABSIM */
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

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t158 ,struct A68t158 ,struct A68t158 *),(struct A68t158 ,struct A68t158 ,struct A68t158 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE158,MODE158) MODE158 */

A_PROCEDURE(struct A68t158 *,A68t160,(struct A68t158 *,struct A68t158 ),(struct A68t158 *,struct A68t158 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE158,MODE158) REF MODE158 */

A_PROCEDURE(A68_BOOL ,A68t161,(struct A68t158 ,struct A68t158 ),(struct A68t158 ,struct A68t158 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE158,MODE158) BOOL */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t158 ,A68_INT ),(struct A68t158 ,A68_INT ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE158,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,struct A68t158 *),(A68_INT ,struct A68t158 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) MODE158 */
struct A68t164{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t166 ;

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166) VOID */
struct A68t166 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t167,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t168,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BITS,BITS) BITS */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ,A68_INT ),(struct A68t170 ,A68_INT ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t170,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(CHAR) VOID */
struct A68t172 ;

A_PROCEDURE(A68_INT ,A68t171,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE172) INT */

A_PROCEDURE(A68_CHAR ,A68t172,(void),(void *));
typedef struct A68t172  A68_172 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t173,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ),(A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC *),(A68_VC *,void *));
typedef struct A68t176  A68_176 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t177,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE180) VOID */
struct A68t180 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t158  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(BOOL,MODE158,MODE26)  */
struct A68t181{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_37)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_38)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_39)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_40)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_41)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_42)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_43)
A68_INT  Width;
A_PAD_INT(PAD_44)
A68_INT  Page_count;
A_PAD_INT(PAD_45)
A68_INT  Page_length;
A_PAD_INT(PAD_46)
A68_INT  Eof_count;
A_PAD_INT(PAD_47)
struct A68t182 * Standard_reader;
struct A68t183 * Infile;
struct A68t176  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE182,REF MODE183,MODE176,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t184,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t182{
A68_VC  Rdbuffer;
struct A68t184  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_48)
A68_INT  Rdcharno;
A_PAD_INT(PAD_49)
A68_INT  Start_of_word;
A_PAD_INT(PAD_50)
struct A68t185 * Stack;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,MODE184,INT,INT,INT,REF MODE185)  */
struct A68t183{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_51)
A68_INT  Number;
A_PAD_INT(PAD_52)
A68_VC  Name;
struct A68t182 * Reader;
struct A68t183 * Previous;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE182,REF MODE183)  */
struct A68t185{
A68_VC  Line;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */

A_PROCEDURE(struct A68t181 *,A68t186,(void),(void *));
typedef struct A68t186  A68_186 ;    /* PROC REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE176) VOID */
struct A68t191{
A68_VC  Id;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE26,REF MODE191)  */
struct A68t192{
A68_INT  Int;
A_PAD_INT(PAD_53)
struct A68t192 * Rest;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,REF MODE192)  */
struct A68t193 { A68_INT mode; union {
struct A68t194 * mode1;
struct A68t195 * mode2;
struct A68t196 * mode3;
struct A68t197 * mode4;
struct A68t198 * mode5;
} data; };
typedef struct A68t193  A68_193 ;    /* UNION(REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198)  */
struct A68t194{
A68_INT  Attrno;
A_PAD_INT(PAD_54)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
A68_VC  Classname;
struct A68t191 * Strings;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE26,REF MODE191)  */
struct A68t196{
struct A68t193  Elem;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE193,REF MODE196)  */
struct A68t197{
struct A68t193  Attr;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE193)  */
struct A68t198{
A68_INT  Attrnull;
A_PAD_INT(PAD_55)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT)  */
struct A68t199{
A68_INT  Sort;
A_PAD_INT(PAD_56)
A68_VC  Attrname;
struct A68t193  Value;
struct A68t200 * Usage;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,REF MODE26,MODE193,REF MODE200)  */
struct A68t200{
A68_INT  Contextno;
A_PAD_INT(PAD_57)
A68_INT  Closureno;
A_PAD_INT(PAD_58)
A68_INT  Libv_spec;
A_PAD_INT(PAD_59)
A68_INT  Libv_body;
A_PAD_INT(PAD_60)
A68_BOOL  Import;
A_PAD_BOOL(PAD_61)
A68_BOOL  Export;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t201{
struct A68t193  Tag;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE193)  */
struct A68t202 { A68_INT mode; union {
struct A68t203 * mode1;
struct A68t204 * mode2;
struct A68t205 * mode3;
struct A68t206 * mode4;
struct A68t207 * mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t210 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
} data; };
typedef struct A68t202  A68_202 ;    /* UNION(REF MODE203,REF MODE204,REF MODE205,REF MODE206,REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212)  */
struct A68t203{
A68_INT  Int;
A_PAD_INT(PAD_63)
A68_VC  Text;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t204{
A68_INT  Sort;
A_PAD_INT(PAD_64)
struct A68t202  Test;
struct A68t202  Standard;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,MODE202,MODE202)  */
struct A68t205{
A68_INT  Nameno;
A_PAD_INT(PAD_65)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT)  */
struct A68t206{
A68_INT  Intno;
A_PAD_INT(PAD_66)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT)  */
struct A68t207{
struct A68t202  Left;
A68_INT  Sort;
A_PAD_INT(PAD_67)
struct A68t202  Right;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE202,INT,MODE202)  */
struct A68t208{
A68_INT  Sort;
A_PAD_INT(PAD_68)
struct A68t202  Right;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,MODE202)  */
struct A68t209{
struct A68t202  Cond;
struct A68t202  True;
struct A68t202  False;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE202,MODE202,MODE202)  */
struct A68t210{
struct A68t202  Formula;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE202)  */
struct A68t211{
A68_INT  Macparno;
A_PAD_INT(PAD_69)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT)  */
struct A68t212{
A68_INT  Fnull;
A_PAD_INT(PAD_70)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT)  */
struct A68t213{
struct A68t202  Tag;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE202)  */
struct A68t214{
struct A68t202  Formula;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE202,REF MODE214)  */
struct A68t217{
struct A68t202  Lwb;
struct A68t202  Upb;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE202,MODE202)  */
struct A68t216 { A68_INT mode; union {
struct A68t203 * mode1;
struct A68t204 * mode2;
struct A68t205 * mode3;
struct A68t206 * mode4;
struct A68t207 * mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t210 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
struct A68t217  mode11;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(REF MODE203,REF MODE204,REF MODE205,REF MODE206,REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,MODE217)  */
struct A68t215{
A68_INT  Sort;
A_PAD_INT(PAD_71)
A68_VC  Intname;
struct A68t193  Attr;
struct A68t216  Value;
struct A68t200 * Usage;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,REF MODE26,MODE193,MODE216,REF MODE200)  */
struct A68t218 { A68_INT mode; union {
struct A68t219 * mode1;
struct A68t220 * mode2;
struct A68t221 * mode3;
struct A68t222 * mode4;
struct A68t223 * mode5;
struct A68t224 * mode6;
struct A68t225 * mode7;
struct A68t211 * mode8;
struct A68t226 * mode9;
} data; };
typedef struct A68t218  A68_218 ;    /* UNION(REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE211,REF MODE226)  */
struct A68t219{
A68_INT  Typeno;
A_PAD_INT(PAD_72)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT)  */
struct A68t220{
struct A68t202  Size;
struct A68t218  Elem;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE202,MODE218)  */
struct A68t221{
struct A68t218  Elem;
struct A68t221 * Rest;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE218,REF MODE221)  */
struct A68t222{
struct A68t218  From;
struct A68t218  To;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE218,MODE218)  */
struct A68t223{
struct A68t218  Type;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE218)  */
struct A68t224{
struct A68t202  Size;
struct A68t218  Char;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE202,MODE218)  */
struct A68t225{
A68_INT  Tvoid;
A_PAD_INT(PAD_73)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t226{
A68_INT  Tnull;
A_PAD_INT(PAD_74)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */
struct A68t227{
struct A68t218  Tag;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE218)  */
struct A68t228{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t229{
A68_VC  Altname;
struct A68t218  Assoc;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,MODE218)  */
struct A68t230{
A68_VC  Tagname;
struct A68t217  Range;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE26,MODE217)  */
A_VECTOR(struct A68t229 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE229 */
struct A68t231 { A68_INT mode; union {
struct A68t232  mode1;
struct A68t230 * mode2;
struct A68t227 * mode3;
struct A68t228 * mode4;
} data; };
typedef struct A68t231  A68_231 ;    /* UNION(REF MODE232,REF MODE230,REF MODE227,REF MODE228)  */
struct A68t233{
A68_INT  Sort;
A_PAD_INT(PAD_75)
A68_VC  Typename;
struct A68t193  Attr;
struct A68t231  Body;
struct A68t200 * Usage;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,REF MODE26,MODE193,MODE231,REF MODE200)  */
struct A68t234{
A68_INT  Constno;
A_PAD_INT(PAD_76)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT)  */
struct A68t235{
A68_INT  Typeno;
A_PAD_INT(PAD_77)
A68_INT  Primno;
A_PAD_INT(PAD_78)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT)  */
struct A68t236{
A68_INT  Typeno;
A_PAD_INT(PAD_79)
struct A68t202  Index;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT,MODE202)  */
struct A68t237{
A68_INT  Typeno;
A_PAD_INT(PAD_80)
struct A68t217  Range;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT,MODE217)  */
struct A68t238{
struct A68t218  Querytype;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE218)  */
struct A68t240 { A68_INT mode; union {
struct A68t234 * mode1;
struct A68t235 * mode2;
struct A68t236 * mode3;
struct A68t238 * mode4;
struct A68t241 * mode5;
struct A68t242 * mode6;
struct A68t223 * mode7;
struct A68t237 * mode8;
struct A68t243 * mode9;
struct A68t244 * mode10;
struct A68t245 * mode11;
struct A68t246 * mode12;
struct A68t247 * mode13;
struct A68t248 * mode14;
struct A68t249 * mode15;
struct A68t250 * mode16;
struct A68t251 * mode17;
struct A68t252 * mode18;
struct A68t253 * mode19;
struct A68t254 * mode20;
struct A68t255 * mode21;
struct A68t256 * mode22;
struct A68t257 * mode23;
struct A68t258 * mode24;
struct A68t259 * mode25;
struct A68t260 * mode26;
struct A68t261 * mode27;
struct A68t262 * mode28;
struct A68t263 * mode29;
struct A68t264 * mode30;
struct A68t265 * mode31;
struct A68t266 * mode32;
struct A68t267 * mode33;
struct A68t268 * mode34;
} data; };
typedef struct A68t240  A68_240 ;    /* UNION(REF MODE234,REF MODE235,REF MODE236,REF MODE238,REF MODE241,REF MODE242,REF MODE223,REF MODE237,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268)  */
struct A68t239{
A68_INT  Sort;
A_PAD_INT(PAD_81)
A68_VC  Constname;
struct A68t193  Attr;
struct A68t240  Value;
struct A68t200 * Usage;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,REF MODE26,MODE193,MODE240,REF MODE200)  */
struct A68t241{
A68_INT  Typeno;
A_PAD_INT(PAD_82)
struct A68t32  String;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t242{
A68_INT  Cvoid;
A_PAD_INT(PAD_83)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT)  */
struct A68t243{
A68_INT  Typeno;
A_PAD_INT(PAD_84)
A68_INT  Firstno;
A_PAD_INT(PAD_85)
A68_INT  Lastno;
A_PAD_INT(PAD_86)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,INT,INT)  */
struct A68t244{
struct A68t240  Alt;
struct A68t244 * Rest;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE240,REF MODE244)  */
struct A68t245{
A68_INT  Sort;
A_PAD_INT(PAD_87)
A68_INT  Nameno;
A_PAD_INT(PAD_88)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT,INT)  */
struct A68t246{
struct A68t240  Sink;
struct A68t240  Source;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE240,MODE240)  */
struct A68t247{
A68_INT  Typeno;
A_PAD_INT(PAD_89)
A68_INT  Altno;
A_PAD_INT(PAD_90)
struct A68t240  Assoc;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT,INT,MODE240)  */
struct A68t248{
struct A68t240  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_91)
A68_INT  Altno;
A_PAD_INT(PAD_92)
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE240,INT,INT)  */
struct A68t249{
struct A68t240  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_93)
A68_INT  Nameno;
A_PAD_INT(PAD_94)
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE240,INT,INT)  */
struct A68t250{
struct A68t240  Unit;
struct A68t202  Index;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE240,MODE202)  */
struct A68t251{
struct A68t240  Unit;
struct A68t217  Range;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE240,MODE217)  */
struct A68t252{
struct A68t240  Unit;
struct A68t240  Index;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE240,MODE240)  */
struct A68t253{
struct A68t240  Unit;
struct A68t240  Index;
struct A68t240  From;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE240,MODE240,MODE240)  */
struct A68t254{
struct A68t202  Size;
struct A68t240  Elem;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE202,MODE240)  */
struct A68t255{
struct A68t240  Elem;
struct A68t255 * Rest;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE240,REF MODE255)  */
struct A68t256{
A68_BOOL  String;
A_PAD_BOOL(PAD_95)
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t240  Left;
struct A68t240  Right;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(BOOL,INT,MODE240,MODE240)  */
A_VECTOR(struct A68t283 ,A68t282);
typedef struct A68t282  A68_282 ;    /* VECTOR [] MODE283 */
struct A68t285{
struct A68t240  Tag;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE240)  */
struct A68t280{
A68_INT  Fnno;
A_PAD_INT(PAD_97)
struct A68t282  Macparams;
struct A68t193  Attr;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,REF MODE282,MODE193)  */
struct A68t284 { A68_INT mode; union {
struct A68t201  mode1;
struct A68t213  mode2;
struct A68t227  mode3;
struct A68t285  mode4;
struct A68t280  mode5;
} data; };
typedef struct A68t284  A68_284 ;    /* UNION(MODE201,MODE213,MODE227,MODE285,MODE280)  */
struct A68t283{
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t284  Param;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,MODE284)  */
struct A68t257{
struct A68t280  Inst;
struct A68t240  Right;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE280,MODE240)  */
struct A68t258{
struct A68t240  Left;
struct A68t280  Inst;
struct A68t240  Right;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE240,MODE280,MODE240)  */
struct A68t259{
struct A68t240  Input;
struct A68t300 * Choices;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE240,REF MODE300)  */
struct A68t260{
struct A68t202  Cond;
struct A68t240  True;
struct A68t240  False;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE202,MODE240,MODE240)  */
struct A68t261{
struct A68t202  Repl;
struct A68t240  Body;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE202,MODE240)  */
struct A68t262{
struct A68t288 * Body;
struct A68t240  Output;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(REF MODE288,MODE240)  */
struct A68t263{
struct A68t269 * Body;
struct A68t240  Output;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE269,MODE240)  */
struct A68t264{
struct A68t240  Unit;
struct A68t193  Attr;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE240,MODE193)  */
struct A68t265{
struct A68t240  Unit;
struct A68t204  Check;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE240,MODE204)  */
struct A68t266{
struct A68t240  Unit;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE240)  */
struct A68t267{
struct A68t202  Size;
struct A68t240  Char;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE202,MODE240)  */
struct A68t268{
A68_INT  Unull;
A_PAD_INT(PAD_99)
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT)  */
struct A68t271{
A68_INT  Fnno;
A_PAD_INT(PAD_100)
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT)  */
struct A68t270 { A68_INT mode; union {
struct A68t194  mode1;
struct A68t206  mode2;
struct A68t219  mode3;
struct A68t234  mode4;
struct A68t271  mode5;
struct A68t272 * mode6;
struct A68t273 * mode7;
struct A68t274 * mode8;
struct A68t275 * mode9;
struct A68t276 * mode10;
struct A68t277 * mode11;
struct A68t278 * mode12;
} data; };
typedef struct A68t270  A68_270 ;    /* UNION(MODE194,MODE206,MODE219,MODE234,MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278)  */
struct A68t269{
struct A68t270  Step;
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(MODE270,REF MODE269)  */
struct A68t272{
struct A68t202  Cond;
struct A68t286 * Print;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE202,REF MODE286)  */
struct A68t273{
struct A68t202  Cond;
struct A68t286 * Fault;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE202,REF MODE286)  */
struct A68t274{
struct A68t281 * Letnames;
struct A68t240  Unit;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE281,MODE240)  */
struct A68t275{
struct A68t214 * Sizes;
struct A68t280  Inst;
struct A68t281 * Makenames;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE214,MODE280,REF MODE281)  */
struct A68t276{
struct A68t240  From;
struct A68t240  To;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE240,MODE240)  */
struct A68t277{
struct A68t214 * Repls;
struct A68t279 * Joins;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(REF MODE214,REF MODE279)  */
struct A68t278{
A68_INT  Stepnull;
A_PAD_INT(PAD_101)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT)  */
struct A68t279{
struct A68t276  Join;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE276,REF MODE279)  */
struct A68t281{
A68_INT  Nameno;
A_PAD_INT(PAD_102)
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT,REF MODE281)  */
struct A68t287 { A68_INT mode; union {
A68_VC  mode1;
struct A68t213 * mode2;
} data; };
typedef struct A68t287  A68_287 ;    /* UNION(REF MODE26,REF MODE213)  */
struct A68t286{
struct A68t287  Item;
struct A68t286 * Rest;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE287,REF MODE286)  */
struct A68t289 { A68_INT mode; union {
struct A68t194  mode1;
struct A68t206  mode2;
struct A68t219  mode3;
struct A68t234  mode4;
struct A68t271  mode5;
struct A68t272 * mode6;
struct A68t273 * mode7;
struct A68t290 * mode8;
struct A68t291 * mode9;
struct A68t292 * mode10;
struct A68t293 * mode11;
struct A68t294 * mode12;
struct A68t295 * mode13;
struct A68t296 * mode14;
struct A68t297 * mode15;
struct A68t288 * mode16;
struct A68t298 * mode17;
} data; };
typedef struct A68t289  A68_289 ;    /* UNION(MODE194,MODE206,MODE219,MODE234,MODE271,REF MODE272,REF MODE273,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE288,REF MODE298)  */
struct A68t288{
struct A68t289  Step;
struct A68t288 * Rest;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE289,REF MODE288)  */
struct A68t290{
struct A68t274  Seqlet;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE274)  */
struct A68t291{
struct A68t274  Seqvar;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE274)  */
struct A68t292{
struct A68t281 * Pvarnames;
struct A68t240  Init;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE281,MODE240)  */
struct A68t293{
struct A68t240  To;
struct A68t240  From;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE240,MODE240)  */
struct A68t294{
struct A68t240  Input;
struct A68t299 * Choices;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE240,REF MODE299)  */
struct A68t295{
struct A68t202  Cond;
struct A68t289  True;
struct A68t289  False;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE202,MODE289,MODE289)  */
struct A68t296{
struct A68t202  Repl;
struct A68t289  Body;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE202,MODE289)  */
struct A68t297{
A68_INT  Seqnull;
A_PAD_INT(PAD_103)
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT)  */
struct A68t298{
struct A68t202  Size;
struct A68t289  Elem;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE202,MODE289)  */
struct A68t299{
A68_BOOL  Check;
A_PAD_BOOL(PAD_104)
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t240  Test;
struct A68t289  Output;
struct A68t299 * Rest;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(BOOL,INT,MODE240,MODE289,REF MODE299)  */
struct A68t300{
A68_BOOL  Check;
A_PAD_BOOL(PAD_106)
A68_INT  Sort;
A_PAD_INT(PAD_107)
struct A68t240  Test;
struct A68t240  Output;
struct A68t300 * Rest;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(BOOL,INT,MODE240,MODE240,REF MODE300)  */
struct A68t301 { A68_INT mode; union {
struct A68t194  mode1;
struct A68t206  mode2;
struct A68t219  mode3;
struct A68t234  mode4;
struct A68t271  mode5;
} data; };
typedef struct A68t301  A68_301 ;    /* UNION(MODE194,MODE206,MODE219,MODE234,MODE271)  */
struct A68t302{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_108)
A68_VC  Name;
struct A68t282  Macparams;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(BOOL,REF MODE26,REF MODE282)  */
struct A68t303{
struct A68t202  Output;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE202)  */
struct A68t304{
A68_INT  Reform;
A_PAD_INT(PAD_109)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT)  */
struct A68t305{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_110)
struct A68t164  Ctname;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(REF MODE26,INT,MODE164)  */
struct A68t306{
A68_INT  Sort;
A_PAD_INT(PAD_111)
struct A68t240  Init;
struct A68t202  Ambigtime;
struct A68t240  Ambig;
struct A68t202  Delaytime;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT,MODE240,MODE202,MODE240,MODE202)  */
struct A68t307{
struct A68t240  Init;
struct A68t202  Delaytime;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE240,MODE202)  */
struct A68t308{
struct A68t240  Init;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE240)  */
struct A68t309{
A68_INT  Sort;
A_PAD_INT(PAD_112)
struct A68t202  Interval;
struct A68t240  Init;
struct A68t202  Skew;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(INT,MODE202,MODE240,MODE202)  */
struct A68t310{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_113)
A68_INT  Sort;
A_PAD_INT(PAD_114)
struct A68t280  Inst;
struct A68t202  Scale;
struct A68t240  Init;
struct A68t202  Skew;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(BOOL,INT,MODE280,MODE202,MODE240,MODE202)  */
struct A68t312 { A68_INT mode; union {
struct A68t285 * mode1;
struct A68t302 * mode2;
struct A68t303 * mode3;
struct A68t304 * mode4;
struct A68t305 * mode5;
struct A68t306 * mode6;
struct A68t307 * mode7;
struct A68t308 * mode8;
struct A68t309 * mode9;
struct A68t310 * mode10;
struct A68t311 * mode11;
struct A68t313 * mode12;
} data; };
typedef struct A68t312  A68_312 ;    /* UNION(REF MODE285,REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE307,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE313)  */
struct A68t311{
struct A68t192 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_115)
struct A68t312  Fnbody;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE192,BOOL,MODE312)  */
struct A68t313{
A68_INT  Bodynull;
A_PAD_INT(PAD_116)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT)  */
struct A68t314{
A68_INT  Sort;
A_PAD_INT(PAD_117)
struct A68t301  Spec;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(INT,MODE301)  */
struct A68t315{
A68_VC  Name;
struct A68t218  Type;
struct A68t193  Attr;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE26,MODE218,MODE193)  */
A_VECTOR(struct A68t314 ,A68t317);
typedef struct A68t317  A68_317 ;    /* VECTOR [] MODE314 */
A_VECTOR(struct A68t315 ,A68t318);
typedef struct A68t318  A68_318 ;    /* VECTOR [] MODE315 */
struct A68t316{
A68_INT  Sort;
A_PAD_INT(PAD_118)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_119)
A68_VC  Fnname;
struct A68t317  Macspecs;
struct A68t193  Attr;
struct A68t281 * Inputs;
struct A68t281 * Outputs;
struct A68t318  Nametypes;
struct A68t312  Fnbody;
struct A68t200 * Usage;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE317,MODE193,REF MODE281,REF MODE281,REF MODE318,MODE312,REF MODE200)  */
A_VECTOR(struct A68t199 *,A68t320);
typedef struct A68t320  A68_320 ;    /* VECTOR [] REF MODE199 */
A_VECTOR(struct A68t215 *,A68t321);
typedef struct A68t321  A68_321 ;    /* VECTOR [] REF MODE215 */
A_VECTOR(struct A68t233 *,A68t322);
typedef struct A68t322  A68_322 ;    /* VECTOR [] REF MODE233 */
A_VECTOR(struct A68t239 *,A68t323);
typedef struct A68t323  A68_323 ;    /* VECTOR [] REF MODE239 */
A_VECTOR(struct A68t316 *,A68t324);
typedef struct A68t324  A68_324 ;    /* VECTOR [] REF MODE316 */
struct A68t319{
struct A68t320  Attrs;
struct A68t321  Ints;
struct A68t322  Types;
struct A68t323  Consts;
struct A68t324  Fns;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE320,REF MODE321,REF MODE322,REF MODE323,REF MODE324)  */
struct A68t325{
A68_INT  Closureno;
A_PAD_INT(PAD_120)
A68_INT  Sort;
A_PAD_INT(PAD_121)
struct A68t319 * Environ;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT,INT,REF MODE319)  */
struct A68t326{
struct A68t325  Outer;
struct A68t326 * Rest;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE325,REF MODE326)  */
A_VECTOR(struct A68t326 ,A68t328);
typedef struct A68t328  A68_328 ;    /* VECTOR [] MODE326 */
struct A68t327{
struct A68t328  Outers;
struct A68t327 * Rest;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE328,REF MODE327)  */
struct A68t329{
A68_INT  Max_closureno;
A_PAD_INT(PAD_122)
struct A68t326 * Outers;
struct A68t326 * Freelist;
struct A68t327 * Outerslist;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(INT,REF MODE326,REF MODE326,REF MODE327)  */
A_VECTOR(struct A68t326 *,A68t330);
typedef struct A68t330  A68_330 ;    /* VECTOR [] REF MODE326 */

A_PROCEDURE(struct A68t205 *,A68t331,(A68_INT ),(A68_INT ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(INT) REF MODE205 */

A_PROCEDURE(struct A68t206 *,A68t332,(A68_INT ),(A68_INT ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT) REF MODE206 */

A_PROCEDURE(struct A68t210 *,A68t333,(struct A68t202 ),(struct A68t202 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE202) REF MODE210 */

A_PROCEDURE(struct A68t213 *,A68t334,(struct A68t202 ),(struct A68t202 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE202) REF MODE213 */

A_PROCEDURE(struct A68t219 *,A68t335,(A68_INT ),(A68_INT ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT) REF MODE219 */

A_PROCEDURE(struct A68t223 *,A68t336,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE218) REF MODE223 */

A_PROCEDURE(struct A68t227 *,A68t337,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE218) REF MODE227 */

A_PROCEDURE(struct A68t234 *,A68t338,(A68_INT ),(A68_INT ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(INT) REF MODE234 */

A_PROCEDURE(struct A68t238 *,A68t339,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE218) REF MODE238 */

A_PROCEDURE(struct A68t290 *,A68t340,(struct A68t274 ),(struct A68t274 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE274) REF MODE290 */

A_PROCEDURE(struct A68t291 *,A68t341,(struct A68t274 ),(struct A68t274 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE274) REF MODE291 */

A_PROCEDURE(struct A68t266 *,A68t342,(struct A68t240 ),(struct A68t240 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE240) REF MODE266 */

A_PROCEDURE(struct A68t285 *,A68t343,(struct A68t240 ),(struct A68t240 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE240) REF MODE285 */

A_PROCEDURE(struct A68t271 *,A68t344,(A68_INT ),(A68_INT ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(INT) REF MODE271 */

A_PROCEDURE(struct A68t303 *,A68t345,(struct A68t202 ),(struct A68t202 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE202) REF MODE303 */

A_PROCEDURE(struct A68t308 *,A68t346,(struct A68t240 ),(struct A68t240 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE240) REF MODE308 */

A_PROCEDURE(struct A68t211 *,A68t347,(A68_INT ),(A68_INT ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(INT) REF MODE211 */

A_PROCEDURE(struct A68t194 *,A68t348,(A68_INT ),(A68_INT ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(INT) REF MODE194 */

A_PROCEDURE(struct A68t201 *,A68t349,(struct A68t193 ),(struct A68t193 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE193) REF MODE201 */

A_PROCEDURE(struct A68t197 *,A68t350,(struct A68t193 ),(struct A68t193 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE193) REF MODE197 */
A_VECTOR(struct A68t191 *,A68t351);
typedef struct A68t351  A68_351 ;    /* VECTOR [] REF MODE191 */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t329 *),(struct A68t329 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE329) INT */

A_PROCEDURE(struct A68t326 *,A68t353,(A68_INT ,struct A68t329 *,struct A68t97 ),(A68_INT ,struct A68t329 *,struct A68t97 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(INT,REF MODE329,MODE97) REF MODE326 */

A_PROCEDURE(struct A68t326 *,A68t354,(struct A68t329 *),(struct A68t329 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE329) REF MODE326 */

A_PROCEDURE(struct A68t326 **,A68t355,(struct A68t325 ,struct A68t326 **,struct A68t329 *,struct A68t97 ),(struct A68t325 ,struct A68t326 **,struct A68t329 *,struct A68t97 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE325,REF REF MODE326,REF MODE329,MODE97) REF REF MODE326 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t326 **,struct A68t329 *,struct A68t97 ),(struct A68t326 **,struct A68t329 *,struct A68t97 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF REF MODE326,REF MODE329,MODE97) VOID */

A_PROCEDURE(struct A68t329 *,A68t357,(void),(void *));
typedef struct A68t357  A68_357 ;    /* PROC REF MODE329 */

A_PROCEDURE(A68_INT ,A68t358,(struct A68t329 *,struct A68t97 ),(struct A68t329 *,struct A68t97 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE329,MODE97) INT */

A_PROCEDURE(struct A68t329 *,A68t359,(struct A68t329 *,struct A68t97 ),(struct A68t329 *,struct A68t97 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE329,MODE97) REF MODE329 */
struct A68t361 ;

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t329 *,struct A68t97 ,struct A68t361 *),(struct A68t329 *,struct A68t97 ,struct A68t361 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE329,MODE97) MODE361 */
struct A68t361{
struct A68t329 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(REF MODE329,BOOL)  */
struct A68t362{
A68_INT  Token;
A_PAD_INT(PAD_124)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(INT,BOOL)  */
struct A68t364{
A68_INT  Index;
A_PAD_INT(PAD_126)
A68_INT  Count;
A_PAD_INT(PAD_127)
};
typedef struct A68t364  A68_364 ;    /* STRUCT(INT,INT)  */
struct A68t363 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t362  mode3;
struct A68t364  mode4;
} data; };
typedef struct A68t363  A68_363 ;    /* UNION(INT,MODE26,MODE362,MODE364)  */
struct A68t365{
struct A68t329 * Closure;
struct A68t102  Head_data;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(REF MODE329,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t172 ,struct A68t97 ,struct A68t363 *),(struct A68t172 ,struct A68t97 ,struct A68t363 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE172,MODE97) MODE363 */
struct A68t366{
struct A68t172  Getchar;
struct A68t367  Initem;
struct A68t368 * Ids_lookup;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(MODE172,MODE367,REF REF MODE368)  */
A_VECTOR(struct A68t102 ,A68t368);
typedef struct A68t368  A68_368 ;    /* VECTOR [] REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t363 ,struct A68t36 ,struct A68t97 ),(struct A68t363 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE363,MODE36,MODE97) VOID */
struct A68t369{
struct A68t36  Putstring;
struct A68t370  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(MODE36,MODE370,BOOL)  */

A_PROCEDURE(A68_INT ,A68t371,(struct A68t366 ,struct A68t97 ),(struct A68t366 ,struct A68t97 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE366,MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t372,(struct A68t366 ,struct A68t97 ),(struct A68t366 ,struct A68t97 ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE366,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t366 ,struct A68t97 ,struct A68t362 *),(struct A68t366 ,struct A68t97 ,struct A68t362 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE366,MODE97) MODE362 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t366 ,struct A68t97 ,A68_VC *),(struct A68t366 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE366,MODE97) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t375,(struct A68t366 ,struct A68t97 ),(struct A68t366 ,struct A68t97 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE366,MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t366 ,struct A68t97 ,A68_VC *),(struct A68t366 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE366,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t377,(A68_CHAR ,struct A68t369 ,struct A68t97 ),(A68_CHAR ,struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(CHAR,MODE369,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t378,(A68_INT ,struct A68t369 ,struct A68t97 ),(A68_INT ,struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(INT,MODE369,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t379,(A68_VC ,struct A68t369 ,struct A68t97 ),(A68_VC ,struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE26,MODE369,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t380,(A68_INT ,A68_BOOL ,struct A68t369 ,struct A68t97 ),(A68_INT ,A68_BOOL ,struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(INT,BOOL,MODE369,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t381,(A68_BOOL ,struct A68t369 ,struct A68t97 ),(A68_BOOL ,struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(BOOL,MODE369,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t172 ,struct A68t97 ,struct A68t366 *),(struct A68t172 ,struct A68t97 ,struct A68t366 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE172,MODE97) MODE366 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t366 ,struct A68t97 ,struct A68t365 *),(struct A68t366 ,struct A68t97 ,struct A68t365 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE366,MODE97) MODE365 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t369 *),(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t369 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE36,BOOL,BOOL,MODE97) MODE369 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t365 ,struct A68t369 ,struct A68t97 ),(struct A68t365 ,struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE365,MODE369,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t369 ,struct A68t97 ),(struct A68t369 ,struct A68t97 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE369,MODE97) VOID */
struct A68t387{
A68_INT  Sort;
A_PAD_INT(PAD_129)
A68_INT  Size;
A_PAD_INT(PAD_130)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(INT,INT)  */
struct A68t388{
struct A68t387  Head;
struct A68t388 * Tail;
};
typedef struct A68t388  A68_388 ;    /* STRUCT(MODE387,REF MODE388)  */
struct A68t390{
A68_INT  Lab;
A_PAD_INT(PAD_131)
A68_VC  Tag;
};
typedef struct A68t390  A68_390 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t389{
struct A68t390  Labelint;
struct A68t390  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_132)
A68_INT  Evalfn;
A_PAD_INT(PAD_133)
A68_INT  History;
A_PAD_INT(PAD_134)
A68_INT  Declid;
A_PAD_INT(PAD_135)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(MODE390,MODE390,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t389 *,A68t391,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE389 */
struct A68t392 { A68_INT mode; union {
A68_INT  mode1;
struct A68t390  mode2;
} data; };
typedef struct A68t392  A68_392 ;    /* UNION(INT,MODE390,VOID)  */

A_PROCEDURE(A68_VOID ,A68t393,(A68_VC ,struct A68t390 *),(A68_VC ,struct A68t390 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE26) MODE390 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t390 *),(struct A68t390 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC MODE390 */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t396,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t397,(A68_VC ),(A68_VC ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t398,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t399,(A68_INT ,struct A68t392 ),(A68_INT ,struct A68t392 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(INT,MODE392) VOID */

A_PROCEDURE(A68_VOID ,A68t400,(A68_INT ,A68_INT ,struct A68t392 ),(A68_INT ,A68_INT ,struct A68t392 ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(INT,INT,MODE392) VOID */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t390 ),(struct A68t390 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE390) VOID */

A_PROCEDURE(A68_VOID ,A68t402,(A68_INT ,struct A68t390 ),(A68_INT ,struct A68t390 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(INT,MODE390) VOID */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t392 ,struct A68t390 ),(struct A68t392 ,struct A68t390 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE392,MODE390) VOID */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t390 ,struct A68t388 *,struct A68t388 *),(struct A68t390 ,struct A68t388 *,struct A68t388 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE390,REF MODE388,REF MODE388) VOID */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t390 ,A68_INT ),(struct A68t390 ,A68_INT ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE390,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t406,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t407,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t408,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t409,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t411 ;

A_PROCEDURE(A68_VOID ,A68t410,(A68_INT ,struct A68t411 *),(A68_INT ,struct A68t411 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(INT) MODE411 */
struct A68t411{
A68_INT  Lasttime;
A_PAD_INT(PAD_136)
A68_INT  Interrupted;
A_PAD_INT(PAD_137)
};
typedef struct A68t411  A68_411 ;    /* STRUCT(INT,INT)  */
struct A68t413 ;

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t413 ,struct A68t413 ,struct A68t36 ),(struct A68t413 ,struct A68t413 ,struct A68t36 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE413,MODE413,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t413,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t415 ;

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t415 *),(struct A68t415 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC MODE415 */
struct A68t415{
A68_INT  Codesize;
A_PAD_INT(PAD_138)
A68_INT  Datasize;
A_PAD_INT(PAD_139)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_140)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_141)
};
typedef struct A68t415  A68_415 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t416,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(INT,INT) VOID */
struct A68t417{
A68_INT  Svoid;
A_PAD_INT(PAD_142)
};
typedef struct A68t417  A68_417 ;    /* STRUCT(INT)  */
struct A68t418{
A68_INT  Snull;
A_PAD_INT(PAD_143)
};
typedef struct A68t418  A68_418 ;    /* STRUCT(INT)  */
struct A68t419{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_144)
A68_INT  Upb;
A_PAD_INT(PAD_145)
};
typedef struct A68t419  A68_419 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t420{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t420  A68_420 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t421{
A68_INT  No;
A_PAD_INT(PAD_146)
struct A68t420  T;
};
typedef struct A68t421  A68_421 ;    /* STRUCT(INT,MODE420)  */
struct A68t423 { A68_INT mode; union {
struct A68t422 * mode1;
struct A68t419 * mode2;
struct A68t420 * mode3;
struct A68t424 * mode4;
struct A68t421 * mode5;
struct A68t425 * mode6;
struct A68t426 * mode7;
struct A68t417  mode8;
struct A68t418  mode9;
} data; };
typedef struct A68t423  A68_423 ;    /* UNION(REF MODE422,REF MODE419,REF MODE420,REF MODE424,REF MODE421,REF MODE425,REF MODE426,MODE417,MODE418)  */
struct A68t422{
A68_VC  Id;
struct A68t423  T;
struct A68t422 * Rest;
};
typedef struct A68t422  A68_422 ;    /* STRUCT(REF MODE26,MODE423,REF MODE422)  */
struct A68t424{
A68_INT  No;
A_PAD_INT(PAD_147)
struct A68t423  Type;
};
typedef struct A68t424  A68_424 ;    /* STRUCT(INT,MODE423)  */
struct A68t425{
struct A68t423  From;
struct A68t423  To;
};
typedef struct A68t425  A68_425 ;    /* STRUCT(MODE423,MODE423)  */
struct A68t426{
struct A68t423  T;
struct A68t426 * Rest;
};
typedef struct A68t426  A68_426 ;    /* STRUCT(MODE423,REF MODE426)  */
struct A68t427 { A68_INT mode; union {
struct A68t422 * mode1;
struct A68t419 * mode2;
struct A68t420 * mode3;
} data; };
typedef struct A68t427  A68_427 ;    /* UNION(REF MODE422,REF MODE419,REF MODE420)  */
struct A68t428{
A68_INT  Svvoid;
A_PAD_INT(PAD_148)
};
typedef struct A68t428  A68_428 ;    /* STRUCT(INT)  */
struct A68t429{
A68_INT  Svnull;
A_PAD_INT(PAD_149)
};
typedef struct A68t429  A68_429 ;    /* STRUCT(INT)  */
struct A68t430{
struct A68t423  Type;
};
typedef struct A68t430  A68_430 ;    /* STRUCT(MODE423)  */
struct A68t431{
struct A68t419 * Type;
A68_INT  Value;
A_PAD_INT(PAD_150)
};
typedef struct A68t431  A68_431 ;    /* STRUCT(REF MODE419,INT)  */
struct A68t432{
struct A68t420 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_151)
};
typedef struct A68t432  A68_432 ;    /* STRUCT(REF MODE420,CHAR)  */
struct A68t433{
struct A68t421 * Type;
A68_VC  Value;
};
typedef struct A68t433  A68_433 ;    /* STRUCT(REF MODE421,REF MODE26)  */
struct A68t435 { A68_INT mode; union {
struct A68t430 * mode1;
struct A68t431 * mode2;
struct A68t432 * mode3;
struct A68t433 * mode4;
struct A68t434 * mode5;
struct A68t436 * mode6;
struct A68t437 * mode7;
struct A68t428  mode8;
struct A68t429  mode9;
} data; };
typedef struct A68t435  A68_435 ;    /* UNION(REF MODE430,REF MODE431,REF MODE432,REF MODE433,REF MODE434,REF MODE436,REF MODE437,MODE428,MODE429)  */
struct A68t434{
struct A68t422 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_152)
struct A68t435  Assoc;
};
typedef struct A68t434  A68_434 ;    /* STRUCT(REF MODE422,INT,MODE435)  */
struct A68t436{
struct A68t435  Head;
struct A68t436 * Tail;
};
typedef struct A68t436  A68_436 ;    /* STRUCT(MODE435,REF MODE436)  */
struct A68t437{
struct A68t435  From;
struct A68t435  To;
};
typedef struct A68t437  A68_437 ;    /* STRUCT(MODE435,MODE435)  */
struct A68t438{
A68_INT  Instoffset;
A_PAD_INT(PAD_153)
A68_INT  Offset;
A_PAD_INT(PAD_154)
A68_INT  Size;
A_PAD_INT(PAD_155)
};
typedef struct A68t438  A68_438 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t438 ,A68t440);
typedef struct A68t440  A68_440 ;    /* VECTOR [] MODE438 */
struct A68t439{
struct A68t423  Type;
struct A68t440  Blocks;
};
typedef struct A68t439  A68_439 ;    /* STRUCT(MODE423,REF MODE440)  */
struct A68t441{
struct A68t439  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_156)
A68_INT  Ramsize;
A_PAD_INT(PAD_157)
A68_INT  Step;
A_PAD_INT(PAD_158)
};
typedef struct A68t441  A68_441 ;    /* STRUCT(MODE439,INT,INT,INT)  */
struct A68t442{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_159)
};
typedef struct A68t442  A68_442 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t442 ,A68t444);
typedef struct A68t444  A68_444 ;    /* VECTOR [] MODE442 */
struct A68t443{
struct A68t441 * Ram;
struct A68t439  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_160)
struct A68t444  Body;
};
typedef struct A68t443  A68_443 ;    /* STRUCT(REF MODE441,MODE439,INT,REF MODE444)  */
struct A68t445{
A68_INT  Fn;
A_PAD_INT(PAD_161)
A68_INT  Instance;
A_PAD_INT(PAD_162)
};
typedef struct A68t445  A68_445 ;    /* STRUCT(INT,INT)  */
struct A68t446{
struct A68t439 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_163)
};
typedef struct A68t446  A68_446 ;    /* STRUCT(REF MODE439,INT)  */
struct A68t447 { A68_INT mode; union {
struct A68t445  mode1;
struct A68t446  mode2;
} data; };
typedef struct A68t447  A68_447 ;    /* UNION(MODE445,MODE446)  */
struct A68t448 { A68_INT mode; union {
struct A68t445  mode1;
struct A68t439  mode2;
} data; };
typedef struct A68t448  A68_448 ;    /* UNION(MODE445,MODE439)  */
struct A68t449{
struct A68t447  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_164)
A68_INT  Base;
A_PAD_INT(PAD_165)
};
typedef struct A68t449  A68_449 ;    /* STRUCT(MODE447,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t435 ,struct A68t423 *),(struct A68t435 ,struct A68t423 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE435) MODE423 */

A_PROCEDURE(A68_BOOL ,A68t451,(struct A68t423 ,struct A68t423 ),(struct A68t423 ,struct A68t423 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE423,MODE423) BOOL */

A_PROCEDURE(A68_BOOL ,A68t452,(struct A68t435 ,struct A68t435 ),(struct A68t435 ,struct A68t435 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE435,MODE435) BOOL */

A_PROCEDURE(A68_BOOL ,A68t453,(struct A68t439 ,struct A68t439 ),(struct A68t439 ,struct A68t439 ,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE439,MODE439) BOOL */

A_PROCEDURE(A68_BOOL ,A68t454,(struct A68t445 ,struct A68t445 ),(struct A68t445 ,struct A68t445 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE445,MODE445) BOOL */

A_PROCEDURE(A68_BOOL ,A68t455,(struct A68t446 ,struct A68t446 ),(struct A68t446 ,struct A68t446 ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE446,MODE446) BOOL */

A_PROCEDURE(A68_BOOL ,A68t456,(struct A68t447 ,struct A68t447 ),(struct A68t447 ,struct A68t447 ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE447,MODE447) BOOL */

A_PROCEDURE(A68_BOOL ,A68t457,(struct A68t449 ,struct A68t449 ),(struct A68t449 ,struct A68t449 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(MODE449,MODE449) BOOL */

A_PROCEDURE(struct A68t426 *,A68t458,(struct A68t426 *,struct A68t426 *),(struct A68t426 *,struct A68t426 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE426,REF MODE426) REF MODE426 */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t440 ,struct A68t440 ,struct A68t440 *),(struct A68t440 ,struct A68t440 ,struct A68t440 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE440,REF MODE440) REF MODE440 */

A_PROCEDURE(A68_INT ,A68t460,(A68_VC ),(A68_VC ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE26) INT */
struct A68t462 ;

A_PROCEDURE(A68_INT ,A68t461,(struct A68t423 ,struct A68t462 ),(struct A68t423 ,struct A68t462 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE423,MODE462) INT */

A_PROCEDURE(A68_INT ,A68t462,(struct A68t423 ),(struct A68t423 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE423) INT */

A_PROCEDURE(A68_VOID ,A68t463,(A68_INT ,struct A68t423 *),(A68_INT ,struct A68t423 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(INT) MODE423 */
struct A68t465 ;
struct A68t466 ;

A_PROCEDURE(A68_INT ,A68t464,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t439 ,struct A68t439 ,struct A68t441 *,struct A68t465 ,struct A68t466 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t439 ,struct A68t439 ,struct A68t441 *,struct A68t465 ,struct A68t466 ,void *));
typedef struct A68t464  A68_464 ;    /* PROC(REF MODE26,INT,INT,INT,MODE439,MODE439,REF MODE441,MODE465,MODE466) INT */
struct A68t465{
A68_INT  Size;
A_PAD_INT(PAD_166)
A68_INT  Offset;
A_PAD_INT(PAD_167)
A68_BITS  Sort;
A_PAD_BITS(PAD_168)
};
typedef struct A68t465  A68_465 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t466{
A68_INT  Workspace;
A_PAD_INT(PAD_169)
A68_INT  History;
A_PAD_INT(PAD_170)
A68_INT  Declid;
A_PAD_INT(PAD_171)
};
typedef struct A68t466  A68_466 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t467,(A68_INT ,A68_VC ,A68_VC ,struct A68t448 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t448 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE448) VOID */

A_PROCEDURE(A68_VOID ,A68t468,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t469,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t470,(A68_INT ,struct A68t465 ),(A68_INT ,struct A68t465 ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(INT,MODE465) VOID */

A_PROCEDURE(A68_VOID ,A68t471,(A68_INT ,struct A68t440 ,struct A68t440 ),(A68_INT ,struct A68t440 ,struct A68t440 ,void *));
typedef struct A68t471  A68_471 ;    /* PROC(INT,REF MODE440,REF MODE440) VOID */

A_PROCEDURE(A68_VOID ,A68t472,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t473,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE26,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t474,(A68_INT ,struct A68t443 *),(A68_INT ,struct A68t443 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(INT) MODE443 */

A_PROCEDURE(A68_VOID ,A68t475,(A68_INT ,struct A68t448 *),(A68_INT ,struct A68t448 *,void *));
typedef struct A68t475  A68_475 ;    /* PROC(INT) MODE448 */
struct A68t477 ;

A_PROCEDURE(A68_VOID ,A68t476,(A68_INT ,A68_INT ,struct A68t477 *),(A68_INT ,A68_INT ,struct A68t477 *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(INT,INT) MODE477 */
struct A68t477{
A68_INT  Lwb;
A_PAD_INT(PAD_172)
A68_INT  Upb;
A_PAD_INT(PAD_173)
};
typedef struct A68t477  A68_477 ;    /* STRUCT(INT,INT)  */
struct A68t479 ;

A_PROCEDURE(A68_VOID ,A68t478,(A68_INT ,A68_INT ,struct A68t479 *),(A68_INT ,A68_INT ,struct A68t479 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(INT,INT) REF MODE479 */
A_VECTOR(struct A68t480 ,A68t479);
typedef struct A68t479  A68_479 ;    /* VECTOR [] MODE480 */
struct A68t480{
A68_INT  Instoffset;
A_PAD_INT(PAD_174)
A68_INT  Ipno;
A_PAD_INT(PAD_175)
};
typedef struct A68t480  A68_480 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t481,(A68_INT ,struct A68t439 *),(A68_INT ,struct A68t439 *,void *));
typedef struct A68t481  A68_481 ;    /* PROC(INT) MODE439 */

A_PROCEDURE(A68_VOID ,A68t482,(A68_INT ,struct A68t465 *),(A68_INT ,struct A68t465 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(INT) MODE465 */

A_PROCEDURE(A68_VOID ,A68t483,(A68_INT ,struct A68t466 *),(A68_INT ,struct A68t466 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(INT) MODE466 */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t443 ,struct A68t439 *),(struct A68t443 ,struct A68t439 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE443) MODE439 */
struct A68t486 ;

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t486 ),(struct A68t486 ,void *));
typedef struct A68t485  A68_485 ;    /* PROC(MODE486) VOID */

A_PROCEDURE(A68_BOOL ,A68t486,(A68_VC ),(A68_VC ,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t413 ,struct A68t36 ),(struct A68t413 ,struct A68t36 ,void *));
typedef struct A68t487  A68_487 ;    /* PROC(MODE413,MODE36) VOID */

A_PROCEDURE(struct A68t325 *,A68t488,(struct A68t325 *),(struct A68t325 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(REF MODE325) REF MODE325 */
struct A68t489{
A68_INT  Fnno;
A_PAD_INT(PAD_176)
A68_INT  Offset;
A_PAD_INT(PAD_177)
};
typedef struct A68t489  A68_489 ;    /* STRUCT(INT,INT)  */
A_VECTOR(struct A68t489 ,A68t490);
typedef struct A68t490  A68_490 ;    /* VECTOR [] MODE489 */
A_VECTOR(struct A68t492 ,A68t491);
typedef struct A68t491  A68_491 ;    /* VECTOR [] MODE492 */
struct A68t492{
A68_INT  Fnno;
A_PAD_INT(PAD_178)
A68_INT  Size;
A_PAD_INT(PAD_179)
A68_INT  Inputinstance;
A_PAD_INT(PAD_180)
A68_INT  Probeinstance;
A_PAD_INT(PAD_181)
A68_INT  Baseoffset;
A_PAD_INT(PAD_182)
struct A68t490  Instptrs;
};
typedef struct A68t492  A68_492 ;    /* STRUCT(INT,INT,INT,INT,INT,REF MODE490)  */

A_PROCEDURE(A68_INT ,A68t493,(struct A68t312 ,struct A68t316 *,struct A68t319 *,struct A68t329 *,A68_INT ,A68_INT ,A68_INT ,struct A68t36 ),(struct A68t312 ,struct A68t316 *,struct A68t319 *,struct A68t329 *,A68_INT ,A68_INT ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE312,REF MODE316,REF MODE319,REF MODE329,INT,INT,INT,MODE36) INT */

A_PROCEDURE(A68_INT ,A68t494,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t494  A68_494 ;    /* PROC(MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t495,(A68_INT ,struct A68t32 ,struct A68t36 ),(A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t495  A68_495 ;    /* PROC(INT,MODE32,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t496,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t496  A68_496 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t497,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t497  A68_497 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t498);
typedef struct A68t498  A68_498 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t92 ,struct A68t46 ,struct A68t36 ),(struct A68t92 ,struct A68t46 ,struct A68t36 ,void *));
typedef struct A68t499  A68_499 ;    /* PROC(MODE92,MODE46,MODE36) VOID */
struct A68t500{
A68_VC  Declname;
struct A68t54  Status;
struct A68t500 * Rest;
};
typedef struct A68t500  A68_500 ;    /* STRUCT(REF MODE26,REF MODE54,REF MODE500)  */

A_PROCEDURE(A68_BOOL ,A68t501,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t501  A68_501 ;    /* PROC(REF MODE54) BOOL */
A_VECTOR(struct A68t500 *,A68t502);
typedef struct A68t502  A68_502 ;    /* VECTOR [] REF MODE500 */

A_PROCEDURE(A68_INT ,A68t503,(struct A68t502 ,A68_INT ,A68_VC ,struct A68t97 ),(struct A68t502 ,A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE502,INT,REF MODE26,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t32 ,struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(REF MODE32,REF MODE32) MODE32 */

A_PROCEDURE(A68_BOOL ,A68t505,(struct A68t329 *,struct A68t502 ,struct A68t36 ),(struct A68t329 *,struct A68t502 ,struct A68t36 ,void *));
typedef struct A68t505  A68_505 ;    /* PROC(REF MODE329,REF MODE502,MODE36) BOOL */

A_PROCEDURE(A68_INT ,A68t506,(struct A68t111 *,A68_INT ,struct A68t43 ,struct A68t36 ),(struct A68t111 *,A68_INT ,struct A68t43 ,struct A68t36 ,void *));
typedef struct A68t506  A68_506 ;    /* PROC(REF MODE111,INT,MODE43,MODE36) INT */
A_ISTRUCT(A68_CHAR ,33,A68t507);
typedef struct A68t507  A68_507 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t366 ,struct A68t97 ,struct A68t502 *),(struct A68t366 ,struct A68t97 ,struct A68t502 *,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE366,MODE97) REF MODE502 */

A_PROCEDURE(A68_VOID ,A68t509,(A68_BOOL ,struct A68t502 *),(A68_BOOL ,struct A68t502 *,void *));
typedef struct A68t509  A68_509 ;    /* PROC(BOOL) MODE502 */

A_PROCEDURE(A68_VOID ,A68t510,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(BOOL) MODE54 */
A_ISTRUCT(A68_CHAR ,38,A68t511);
typedef struct A68t511  A68_511 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t512);
typedef struct A68t512  A68_512 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t513);
typedef struct A68t513  A68_513 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,41,A68t514);
typedef struct A68t514  A68_514 ;    /* STRUCT 41 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from keinstance --- */
extern A68_493  EQYASIM_translatefunction;
extern A68_INT  DZZASIM_translatetoplevel(struct A68t32 );
extern A68_VOID  ILYASIM_constructcalls(A68_INT ,struct A68t32 ,struct A68t36 );
/* --- End of imports from keinstance --- */


/* --- Imports from kexpand --- */
extern A68_325 * GGMBTRN_expandtoatomic(struct A68t325 *);
/* --- End of imports from kexpand --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  UQCASIM_addseedtype(A68_INT ,A68_INT );
extern A68_VOID  QADASIM_incrementaltablecleanup(void);
extern A68_VOID  RADASIM_finaltablecleanup(void);
/* --- End of imports from kesymbols --- */


/* --- Imports from kebasics --- */
#define RSAASIM_omitexpansion 0X8U
#define USAASIM_diagnoseouterfns 0X40U
/* --- End of imports from kebasics --- */


/* --- Imports from keambasics --- */
extern A68_VOID  ROMASIM_cgsizes(A68_415 *);
/* --- End of imports from keambasics --- */


/* --- Imports from openinterface --- */
extern A68_INT  CLDATRN_inassemint(struct A68t366 ,struct A68t97 );
extern A68_BOOL  OLDATRN_inassembool(struct A68t366 ,struct A68t97 );
extern A68_VOID  INDATRN_inassemid(struct A68t366 ,struct A68t97 ,A68_VC *);
extern A68_VOID  IAGATRN_read_signature(struct A68t172 ,struct A68t97 ,A68_366 *);
extern A68_VOID  GPDATRN_read_closure(struct A68t366 ,struct A68t97 ,A68_365 *);
/* --- End of imports from openinterface --- */


/* --- Imports from timescale --- */
#define HPABTRN_timescale 8
/* --- End of imports from timescale --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t329 *);
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_317  FBAATRN_nilmacspecs;
extern A68_326 * HBAATRN_nilouters;
extern A68_313  LIAATRN_bodynull;
#define OKAATRN_outerdec 1
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  SNGAOST_banner(A68_VC );
/* --- End of imports from ioprocs --- */


/* --- Imports from testmode --- */
extern A68_VOID  SIBAOST_testmode_file_name(struct A68t111 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
extern A68_113  BOBAOSI_update_access;
extern A68_113  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_VOID  XQBAOSI_close_file(struct A68t111 *,struct A68t97 );
extern A68_VOID  HRBAOSI_read_buffer(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
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
extern A68_VOID  UEAAOST_facility(A68_VC *);
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_92  WHAAOSI_user;
extern A68_BOOL  ELAAOSI_cli_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MLXASIM(void);   /* keinstance */
extern void KHLBTRN(void);   /* kexpand */
extern void TCCASIM(void);   /* kesymbols */
extern void JSAASIM(void);   /* kebasics */
extern void XDNASIM(void);   /* keambasics */
extern void TPCATRN(void);   /* openinterface */
extern void CPABTRN(void);   /* timescale */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void TIGAOST(void);   /* ioprocs */
extern void QFBAOST(void);   /* testmode */
extern void JSCAOST(void);   /* basics */
extern void BAAAOST(void);   /* options */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_498   EDABSIM = {"$Id: ketranslate.a68,v 34.3 1995/03/29 13:04:42 ella Exp $"}; 
A_GISVEC(A68_VC ,FDABSIM,EDABSIM,58)
#define MDABSIM_nilseedinfo (A68_500 *)A68_NIL
#define TDABSIM_notfound 0
#define UDABSIM_simdecl 2
#define VDABSIM_probedecl 3
#define WDABSIM_simandprobedecl 4
#define UGABSIM_seeds_version_no 230293
#define VGABSIM_seeds_signature 2222
#define MHABSIM_size 512
static A68_507   DIABSIM = {"Premature end of dump stream file"}; 
A_GISVEC(A68_VC ,EIABSIM,DIABSIM,33)
static A68_511   VJABSIM = {"Reading ELLA from open interface file "}; 
A_GISVEC(A68_VC ,WJABSIM,VJABSIM,38)
static A68_514   UKABSIM = {"Closure contains no simulatable functions"}; 
A_GISVEC(A68_VC ,VKABSIM,UKABSIM,41)
typedef struct   /* env of non-global proc */
{
A68_INT * QEABSIM_i;
} XEABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LFABSIM_i;
} RFABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_36  Flt;
} QGABSIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_36  Flt;
} EHABSIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_36  FHABSIM_myflt;
} KHABSIM_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} QHABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * VHABSIM_pos;
A68_INT * WHABSIM_end;
A68_111 * File;
A68_VC  THABSIM_buffer;
A68_97  LHABSIM_msg;
A68_172  XHABSIM_get_char;
} ZHABSIM_get_char;
typedef struct   /* env of non-global proc */
{
A68_INT  XKABSIM_max;
A_PAD_INT(PAD_185)
} BLABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PIABSIM_maxctno;
A_PAD_INT(PAD_183)
} TIABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LIABSIM_maxseedno;
A_PAD_INT(PAD_184)
} JJABSIM_generator;

A_STATIC A68_VOID  JDABSIM_flt_msg(A68_92  No, A68_46  Params, A68_36  Flt);

A_STATIC A68_BOOL  ODABSIM_is_assembled(A68_54  Seeds);

A_STATIC A68_INT  BEABSIM_find_seedinfo(A68_502  Seedinfo, A68_INT  Ctno, A68_VC  Declname, A68_97  Msg);

A_STATIC A68_VOID  PEABSIM_compactcircuitfns(A68_32  List, A68_32  Seedtypes, A68_32  *ReturnedValue);

A_STATIC A68_VOID  WEABSIM_generator(A68_BOOL  UEABSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KFABSIM_compactprobefns(A68_32  List, A68_32  Seedtypes, A68_32  *ReturnedValue);

A_STATIC A68_VOID  QFABSIM_generator(A68_BOOL  OFABSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  FGABSIM_closureisempty(A68_329 * Closure, A68_502  Seeds, A68_36  Flt);

A_STATIC A68_VOID  PGABSIM_anonymous(A68_92  No, A68_46  Params, void *NonLocals);

A68_INT  AHABSIM_translate(A68_111 * File, A68_INT  Diagnosticlevel, A68_43  Report, A68_36  Flt);

A_STATIC A68_VOID  DHABSIM_anonymous(A68_VC  Msg, void *NonLocals);

A_STATIC A68_VOID  JHABSIM_anonymous(A68_92  No, A68_46  Str, void *NonLocals);

A_STATIC A68_VOID  PHABSIM_generator(A68_BOOL  NHABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_CHAR  YHABSIM_get_char(void *NonLocals);

A_STATIC A68_VOID  KIABSIM_get_seedinfo(A68_366  Reader, A68_97  Msg, A68_502  *ReturnedValue);

A_STATIC A68_VOID  SIABSIM_generator(A68_BOOL  QIABSIM_anonymous, A68_502  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IJABSIM_generator(A68_BOOL  GJABSIM_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ALABSIM_generator(A68_BOOL  YKABSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SIABSIM_generator(A68_BOOL  QIABSIM_anonymous, A68_502  *ReturnedValue, void *NonLocals)
#define NL(x) (((TIABSIM_generator *)NonLocals)->x)
{ 
A68_502  UIABSIM;  /* clause result */
A68_502  VIABSIM;  /* OPERATORS - dynamic generator */
{ 
VIABSIM.upb = NL(PIABSIM_maxctno) ;
( QIABSIM_anonymous? A_VLOC(A68_500 *,VIABSIM): A_VHEAP(A68_500 *,VIABSIM) );
UIABSIM = VIABSIM;
} 
*ReturnedValue = (UIABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  IJABSIM_generator(A68_BOOL  GJABSIM_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((JJABSIM_generator *)NonLocals)->x)
{ 
A68_54  KJABSIM;  /* clause result */
A68_54  LJABSIM;  /* OPERATORS - dynamic generator */
{ 
LJABSIM.upb = NL(LIABSIM_maxseedno) ;
( GJABSIM_anonymous? A_VLOC(A68_BOOL ,LJABSIM): A_VHEAP(A68_BOOL ,LJABSIM) );
KJABSIM = LJABSIM;
} 
*ReturnedValue = (KJABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WEABSIM_generator(A68_BOOL  UEABSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((XEABSIM_generator *)NonLocals)->x)
{ 
A68_32  YEABSIM;  /* clause result */
A68_32  ZEABSIM;  /* OPERATORS - dynamic generator */
{ 
ZEABSIM.upb = (*NL(QEABSIM_i)) ;
( UEABSIM_anonymous? A_VLOC(A68_INT ,ZEABSIM): A_VHEAP(A68_INT ,ZEABSIM) );
YEABSIM = ZEABSIM;
} 
*ReturnedValue = (YEABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QFABSIM_generator(A68_BOOL  OFABSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((RFABSIM_generator *)NonLocals)->x)
{ 
A68_32  SFABSIM;  /* clause result */
A68_32  TFABSIM;  /* OPERATORS - dynamic generator */
{ 
TFABSIM.upb = (*NL(LFABSIM_i)) ;
( OFABSIM_anonymous? A_VLOC(A68_INT ,TFABSIM): A_VHEAP(A68_INT ,TFABSIM) );
SFABSIM = TFABSIM;
} 
*ReturnedValue = (SFABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PGABSIM_anonymous(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((QGABSIM_anonymous *)NonLocals)->x)
{ 
 /* line 207: */
JDABSIM_flt_msg(No, Params, NL(Flt));
return;
} 
#undef NL

A_STATIC A68_VOID  DHABSIM_anonymous(A68_VC  Msg, void *NonLocals)
#define NL(x) (((EHABSIM_anonymous *)NonLocals)->x)
{ 
 /* line 258: */
 /* line 261: */
 /* line 262: */
A_CALLPROC(NL(Flt),(Msg),(Msg,(NL(Flt)).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  JHABSIM_anonymous(A68_92  No, A68_46  Str, void *NonLocals)
#define NL(x) (((KHABSIM_anonymous *)NonLocals)->x)
{ 
 /* line 265: */
JDABSIM_flt_msg(No, Str, NL(FHABSIM_myflt));
return;
} 
#undef NL

A_STATIC A68_VOID  PHABSIM_generator(A68_BOOL  NHABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QHABSIM_generator *)NonLocals)->x)
{ 
A68_VC  RHABSIM;  /* clause result */
A68_VC  SHABSIM;  /* OPERATORS - dynamic generator */
{ 
SHABSIM.upb = MHABSIM_size ;
( NHABSIM_anonymous? A_VLOC(A68_CHAR ,SHABSIM): A_VHEAP(A68_CHAR ,SHABSIM) );
RHABSIM = SHABSIM;
} 
*ReturnedValue = (RHABSIM);
return;
} 
#undef NL

A_STATIC A68_CHAR  YHABSIM_get_char(void *NonLocals)
#define NL(x) (((ZHABSIM_get_char *)NonLocals)->x)
{ 
A68_35  AIABSIM;  /* avoid structure result */
A68_35  BIABSIM_reply;
A68_BOOL  CIABSIM;  /* optbool result */
A68_46  FIABSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  GIABSIM;  /* clause result */
A68_INT  HIABSIM;  /* YIELD */
A_PROC_ENTRY(get_char);
 /* line 273: */
if ( ((*NL(VHABSIM_pos))>=(*NL(WHABSIM_end))) )
{ 
HRBAOSI_read_buffer( NL(File), NL(THABSIM_buffer), NL(WHABSIM_end), NL(LHABSIM_msg), &AIABSIM );
BIABSIM_reply = AIABSIM;
 /* line 274: */
CIABSIM = PPBAOSI_(BIABSIM_reply, GPBAOSI_io_eof);
if ( CIABSIM )
{ /* line 275: */
CIABSIM = ((*NL(WHABSIM_end))==0);
}
 /* line 276: */
if ( CIABSIM )
{ 
A_CALLPROC(NL(LHABSIM_msg),(WHAAOSI_user, A_HVEC(FIABSIM,EIABSIM,A68_VC )),(WHAAOSI_user, A_HVEC(FIABSIM,EIABSIM,A68_VC ),(NL(LHABSIM_msg)).nonlocals));
 /* line 277: */
 /* line 278: */
GIABSIM = ' ';
} 
else
{ 
(*NL(VHABSIM_pos)) = 0;
 /* line 279: */
 /* line 280: */
 /* line 281: */
GIABSIM = A_CALLPROC(NL(XHABSIM_get_char),(),((NL(XHABSIM_get_char)).nonlocals));
} 
} 
else
{ 
 /* line 282: */
HIABSIM = (*NL(VHABSIM_pos))+=1 ;
GIABSIM = (*(&A_VINDEX(NL(THABSIM_buffer),HIABSIM)));
} 
A_PROC_EXIT(get_char);
return( GIABSIM );
} 
#undef NL
 /* line 286: */

A_STATIC A68_VOID  KIABSIM_get_seedinfo(A68_366  Reader, A68_97  Msg, A68_502  *ReturnedValue)
{ 
A68_INT  LIABSIM_maxseedno;
A68_INT  MIABSIM;  /* to part of loop */
A68_INT  NIABSIM;  /* loop control */
A68_VC  OIABSIM;  /* avoid structure result */
A68_INT  PIABSIM_maxctno;
A68_509  RIABSIM_generator;   /* proc value of non-global proc */
A68_502  WIABSIM;  /* avoid structure result */
A68_502  XIABSIM_seedinfo;
A68_INT  YIABSIM_ctno;
A68_INT  ZIABSIM;  /* to part of loop */
A68_INT  AJABSIM_maxdecls;
A68_500 * BJABSIM_si;
A68_INT  CJABSIM;  /* to part of loop */
A68_INT  DJABSIM;  /* loop control */
A68_VC  EJABSIM;  /* avoid structure result */
A68_VC  FJABSIM_declname;
A68_510  HJABSIM_generator;   /* proc value of non-global proc */
A68_54  MJABSIM;  /* avoid structure result */
A68_54  NJABSIM_status;
A68_BOOL * OJABSIM_b;
A68_INT  PJABSIM;  /* forall loop counter */
A68_500  QJABSIM;  /* collateral clause result */
A68_500 * RJABSIM;  /* YIELD */
A68_500 ** SJABSIM;  /* YIELD */
A68_502  TJABSIM;  /* clause result */
A_PROC_ENTRY(get_seedinfo);
 /* line 287: */
 /* line 288: */
{ 
LIABSIM_maxseedno = CLDATRN_inassemint(Reader, Msg);
 /* line 289: */
 /* line 290: */
MIABSIM = LIABSIM_maxseedno;
for ( NIABSIM = 1;
NIABSIM <= MIABSIM;
NIABSIM += 1 )
{ 
CLDATRN_inassemint(Reader, Msg);
 /* line 291: */
 /* line 292: */
INDATRN_inassemid( Reader, Msg, &OIABSIM );
OIABSIM;
}
 /* line 293: */
PIABSIM_maxctno = CLDATRN_inassemint(Reader, Msg);
 /* line 294: */
A_CLOSURE( RIABSIM_generator, SIABSIM_generator, TIABSIM_generator );
(( TIABSIM_generator * ) ( RIABSIM_generator.nonlocals )) -> PIABSIM_maxctno = PIABSIM_maxctno;
A_CALLPROC(RIABSIM_generator,(A68_FALSE, &WIABSIM),(A68_FALSE, &WIABSIM,(RIABSIM_generator).nonlocals));
XIABSIM_seedinfo = WIABSIM;
 /* line 295: */
 /* line 296: */
ZIABSIM = XIABSIM_seedinfo.upb;
for ( YIABSIM_ctno = 1;
YIABSIM_ctno <= ZIABSIM;
YIABSIM_ctno += 1 )
{ 
AJABSIM_maxdecls = CLDATRN_inassemint(Reader, Msg);
 /* line 297: */
BJABSIM_si = MDABSIM_nilseedinfo;
 /* line 298: */
 /* line 299: */
CJABSIM = AJABSIM_maxdecls;
for ( DJABSIM = 1;
DJABSIM <= CJABSIM;
DJABSIM += 1 )
{ 
INDATRN_inassemid( Reader, Msg, &EJABSIM );
FJABSIM_declname = EJABSIM;
 /* line 300: */
A_CLOSURE( HJABSIM_generator, IJABSIM_generator, JJABSIM_generator );
(( JJABSIM_generator * ) ( HJABSIM_generator.nonlocals )) -> LIABSIM_maxseedno = LIABSIM_maxseedno;
A_CALLPROC(HJABSIM_generator,(A68_FALSE, &MJABSIM),(A68_FALSE, &MJABSIM,(HJABSIM_generator).nonlocals));
NJABSIM_status = MJABSIM;
 /* line 301: */
PJABSIM = NJABSIM_status.upb -1;
OJABSIM_b = NJABSIM_status.data;
for (;PJABSIM-- >= 0;
(OJABSIM_b++
) )
{
(*OJABSIM_b) = OLDATRN_inassembool(Reader, Msg);
}
 /* line 302: */
QJABSIM.Declname = FJABSIM_declname;
QJABSIM.Status = NJABSIM_status;
 /* line 303: */
QJABSIM.Rest = BJABSIM_si;
RJABSIM = A_HEAP(A68_500 ) ;
(*RJABSIM) = QJABSIM ;
BJABSIM_si = RJABSIM;
}
 /* line 304: */
 /* line 305: */
SJABSIM = (&A_VINDEX(XIABSIM_seedinfo,YIABSIM_ctno)) ;
(*SJABSIM) = BJABSIM_si;
}
 /* line 306: */
 /* line 307: */
TJABSIM = XIABSIM_seedinfo;
} 
A_PROC_EXIT(get_seedinfo);
*ReturnedValue = (TJABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ALABSIM_generator(A68_BOOL  YKABSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BLABSIM_generator *)NonLocals)->x)
{ 
A68_32  CLABSIM;  /* clause result */
A68_32  DLABSIM;  /* OPERATORS - dynamic generator */
{ 
DLABSIM.upb = NL(XKABSIM_max) ;
( YKABSIM_anonymous? A_VLOC(A68_INT ,DLABSIM): A_VHEAP(A68_INT ,DLABSIM) );
CLABSIM = DLABSIM;
} 
*ReturnedValue = (CLABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JDABSIM_flt_msg(A68_92  No, A68_46  Params, A68_36  Flt)
{ 
A68_106  KDABSIM;  /* OPERATORS - mode -> union mode */
A68_95  LDABSIM;  /* avoid structure result */
A_PROC_ENTRY(flt_msg);
 /* line 98: */
 /* line 99: */
 /* line 100: */
if ( ELAAOSI_cli_msg(A_UNITE(KDABSIM,mode1,1,No)) )
{ 
 /* line 101: */
ONAAOSI_translate_msg( No, Params, &LDABSIM );
A_CALLPROC(Flt,(LDABSIM.Text),(LDABSIM.Text,(Flt).nonlocals));
} 
else
{ 
 /* line 102: */
A_CALLPROC(ZLBAOSI_global_msg,(No, Params),(No, Params,(ZLBAOSI_global_msg).nonlocals));
} 
A_PROC_EXIT(flt_msg);
return;
} 
#undef NL

A_STATIC A68_BOOL  ODABSIM_is_assembled(A68_54  Seeds)
{ 
A68_BOOL  PDABSIM_assembled;
A68_BOOL * QDABSIM_s;
A68_INT  RDABSIM;  /* forall loop counter */
A68_BOOL  SDABSIM;  /* clause result */
A_PROC_ENTRY(is_assembled);
 /* line 109: */
 /* line 110: */
{ 
PDABSIM_assembled = A68_FALSE;
 /* line 111: */
RDABSIM = Seeds.upb -1;
QDABSIM_s = Seeds.data;
for (;RDABSIM-- >= 0;
(QDABSIM_s++
) )
{
if ( !(!PDABSIM_assembled) ) break;
PDABSIM_assembled = (*QDABSIM_s);
}
 /* line 112: */
 /* line 113: */
SDABSIM = PDABSIM_assembled;
} 
A_PROC_EXIT(is_assembled);
return( SDABSIM );
} 
#undef NL
 /* line 118: */

A_STATIC A68_INT  BEABSIM_find_seedinfo(A68_502  Seedinfo, A68_INT  Ctno, A68_VC  Declname, A68_97  Msg)
{ 
A68_500 * CEABSIM_si;
A68_BOOL  DEABSIM_found;
A68_BOOL  EEABSIM;  /* optbool result */
A68_54  FEABSIM_status;
A68_BOOL  GEABSIM;  /* optbool result */
A68_54  HEABSIM;  /* OPERATORS - trim index */
A68_BOOL  IEABSIM_is_sub;
A68_INT  JEABSIM;  /* YIELD */
A68_BOOL  KEABSIM_is_first;
A68_BOOL  LEABSIM;  /* optbool result */
A68_INT  MEABSIM;  /* clause result */
A_PROC_ENTRY(find_seedinfo);
 /* line 119: */
 /* line 120: */
{ 
 /* line 121: */
if ( (Ctno>0) )
{ 
CEABSIM_si = (*(&A_VINDEX(Seedinfo,Ctno)));
 /* line 122: */
DEABSIM_found = A68_FALSE;
 /* line 123: */
for ( ;; )
{ 
 /* line 124: */
EEABSIM = (CEABSIM_si!=MDABSIM_nilseedinfo);
if ( EEABSIM )
{EEABSIM = !DEABSIM_found;
}
if ( !(EEABSIM) ) break;
 /* line 125: */
if ( A_VC_EQ((*(&(CEABSIM_si->Declname))),Declname) )
{ 
 /* line 126: */
DEABSIM_found = A68_TRUE;
} 
else
{ 
 /* line 127: */
 /* line 128: */
CEABSIM_si = (*(&(CEABSIM_si->Rest)));
} 
}
 /* line 129: */
 /* line 130: */
if ( DEABSIM_found )
{ 
FEABSIM_status = (*(&(CEABSIM_si->Status)));
 /* line 131: */
GEABSIM = (FEABSIM_status.upb>1);
if ( GEABSIM )
{GEABSIM = ODABSIM_is_assembled(A_VTRIM(HEABSIM,(FEABSIM_status),A_VTSCRIPT(&(HEABSIM.upb),(FEABSIM_status).upb,2,(FEABSIM_status).upb)));
}
IEABSIM_is_sub = GEABSIM;
 /* line 132: */
JEABSIM = 1 ;
KEABSIM_is_first = (*(&A_VINDEX(FEABSIM_status,JEABSIM)));
 /* line 133: */
LEABSIM = KEABSIM_is_first;
if ( LEABSIM )
{LEABSIM = IEABSIM_is_sub;
}
 /* line 134: */
if ( LEABSIM )
{ 
MEABSIM = WDABSIM_simandprobedecl;
} 
else
{ 
 /* line 135: */
if ( KEABSIM_is_first )
{ 
MEABSIM = UDABSIM_simdecl;
} 
else
{ 
 /* line 136: */
if ( IEABSIM_is_sub )
{ 
 /* line 137: */
MEABSIM = VDABSIM_probedecl;
} 
else
{ 
 /* line 138: */
 /* line 139: */
MEABSIM = TDABSIM_notfound;
} 
} 
} 
} 
else
{ 
 /* line 140: */
 /* line 141: */
MEABSIM = TDABSIM_notfound;
} 
} 
else
{ 
 /* line 142: */
MEABSIM = TDABSIM_notfound;
} 
} 
A_PROC_EXIT(find_seedinfo);
return( MEABSIM );
} 
#undef NL

A_STATIC A68_VOID  PEABSIM_compactcircuitfns(A68_32  List, A68_32  Seedtypes, A68_32  *ReturnedValue)
{ 
A68_INT  QEABSIM_i;
A68_INT  REABSIM_j;
A68_INT  SEABSIM;  /* to part of loop */
A68_BOOL  TEABSIM;  /* optbool result */
A68_33  VEABSIM_generator;   /* proc value of non-global proc */
A68_32  BFABSIM;  /* avoid structure result */
A68_32  AFABSIM_ans;
A68_INT  CFABSIM_j;
A68_INT  DFABSIM;  /* to part of loop */
A68_BOOL  EFABSIM;  /* optbool result */
A68_INT  FFABSIM;  /* YIELD */
A68_INT * GFABSIM;  /* YIELD */
A68_32  HFABSIM;  /* clause result */
A_PROC_ENTRY(compactcircuitfns);
 /* line 148: */
 /* line 149: */
{ 
QEABSIM_i = 0;
 /* line 150: */
SEABSIM = List.upb;
for ( REABSIM_j = 1;
REABSIM_j <= SEABSIM;
REABSIM_j += 1 )
{ 
 /* line 151: */
 /* line 152: */
TEABSIM = ((*(&A_VINDEX(List,REABSIM_j)))>0);
if ( TEABSIM )
{ /* line 153: */
 /* line 154: */
TEABSIM = (((*(&A_VINDEX(Seedtypes,REABSIM_j)))==UDABSIM_simdecl)|((*(&A_VINDEX(Seedtypes,REABSIM_j)))==WDABSIM_simandprobedecl));
}
 /* line 155: */
if ( TEABSIM )
{ 
 /* line 156: */
 /* line 157: */
QEABSIM_i+=1;
} 
}
 /* line 158: */
A_CLOSURE( VEABSIM_generator, WEABSIM_generator, XEABSIM_generator );
(( XEABSIM_generator * ) ( VEABSIM_generator.nonlocals )) -> QEABSIM_i = (&QEABSIM_i);
A_CALLPROC(VEABSIM_generator,(A68_TRUE, &BFABSIM),(A68_TRUE, &BFABSIM,(VEABSIM_generator).nonlocals));
AFABSIM_ans = BFABSIM;
 /* line 159: */
QEABSIM_i = 0;
 /* line 160: */
DFABSIM = List.upb;
for ( CFABSIM_j = 1;
CFABSIM_j <= DFABSIM;
CFABSIM_j += 1 )
{ 
 /* line 161: */
 /* line 162: */
EFABSIM = ((*(&A_VINDEX(List,CFABSIM_j)))>0);
if ( EFABSIM )
{ /* line 163: */
 /* line 164: */
EFABSIM = (((*(&A_VINDEX(Seedtypes,CFABSIM_j)))==UDABSIM_simdecl)|((*(&A_VINDEX(Seedtypes,CFABSIM_j)))==WDABSIM_simandprobedecl));
}
 /* line 165: */
if ( EFABSIM )
{ 
 /* line 166: */
 /* line 167: */
FFABSIM = QEABSIM_i+=1 ;
GFABSIM = (&A_VINDEX(AFABSIM_ans,FFABSIM)) ;
(*GFABSIM) = (*(&A_VINDEX(List,CFABSIM_j)));
} 
}
 /* line 168: */
 /* line 169: */
HFABSIM = AFABSIM_ans;
} 
A_PROC_EXIT(compactcircuitfns);
*ReturnedValue = (HFABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KFABSIM_compactprobefns(A68_32  List, A68_32  Seedtypes, A68_32  *ReturnedValue)
{ 
A68_INT  LFABSIM_i;
A68_INT  MFABSIM_j;
A68_INT  NFABSIM;  /* to part of loop */
A68_33  PFABSIM_generator;   /* proc value of non-global proc */
A68_32  VFABSIM;  /* avoid structure result */
A68_32  UFABSIM_ans;
A68_INT  WFABSIM_j;
A68_INT  XFABSIM;  /* to part of loop */
A68_INT  YFABSIM;  /* YIELD */
A68_INT  ZFABSIM;  /* ADICOPS - ABS INT */
A68_INT * AGABSIM;  /* YIELD */
A68_32  BGABSIM;  /* clause result */
A_PROC_ENTRY(compactprobefns);
 /* line 174: */
 /* line 175: */
{ 
LFABSIM_i = 0;
 /* line 176: */
NFABSIM = List.upb;
for ( MFABSIM_j = 1;
MFABSIM_j <= NFABSIM;
MFABSIM_j += 1 )
{ 
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
if ( (((*(&A_VINDEX(Seedtypes,MFABSIM_j)))==VDABSIM_probedecl)|((*(&A_VINDEX(Seedtypes,MFABSIM_j)))==WDABSIM_simandprobedecl)) )
{ 
 /* line 181: */
 /* line 182: */
LFABSIM_i+=1;
} 
}
 /* line 183: */
A_CLOSURE( PFABSIM_generator, QFABSIM_generator, RFABSIM_generator );
(( RFABSIM_generator * ) ( PFABSIM_generator.nonlocals )) -> LFABSIM_i = (&LFABSIM_i);
A_CALLPROC(PFABSIM_generator,(A68_TRUE, &VFABSIM),(A68_TRUE, &VFABSIM,(PFABSIM_generator).nonlocals));
UFABSIM_ans = VFABSIM;
 /* line 184: */
LFABSIM_i = 0;
 /* line 185: */
XFABSIM = List.upb;
for ( WFABSIM_j = 1;
WFABSIM_j <= XFABSIM;
WFABSIM_j += 1 )
{ 
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
if ( (((*(&A_VINDEX(Seedtypes,WFABSIM_j)))==VDABSIM_probedecl)|((*(&A_VINDEX(Seedtypes,WFABSIM_j)))==WDABSIM_simandprobedecl)) )
{ 
 /* line 190: */
 /* line 191: */
YFABSIM = LFABSIM_i+=1 ;
ZFABSIM = (*(&A_VINDEX(List,WFABSIM_j))) ;
AGABSIM = (&A_VINDEX(UFABSIM_ans,YFABSIM)) ;
(*AGABSIM) = A_ABS(ZFABSIM);
} 
}
 /* line 192: */
 /* line 193: */
BGABSIM = UFABSIM_ans;
} 
A_PROC_EXIT(compactprobefns);
*ReturnedValue = (BGABSIM);
return;
} 
#undef NL
 /* line 197: */

A_STATIC A68_BOOL  FGABSIM_closureisempty(A68_329 * Closure, A68_502  Seeds, A68_36  Flt)
{ 
A68_BOOL  GGABSIM_empty;
A68_326 * HGABSIM_outers;
A68_BOOL  IGABSIM;  /* optbool result */
A68_324  JGABSIM;  /* OPERATORS - simple index */
A68_INT  KGABSIM;  /* YIELD */
A68_316 * LGABSIM_fdec;
A68_97  OGABSIM_anonymous;   /* proc value of non-global proc */
A68_INT  RGABSIM_status;
A68_BOOL  SGABSIM;  /* optbool result */
A68_BOOL  TGABSIM;  /* clause result */
A_PROC_ENTRY(closureisempty);
 /* line 198: */
 /* line 199: */
{ 
GGABSIM_empty = A68_TRUE;
 /* line 200: */
HGABSIM_outers = (*(&(Closure->Outers)));
 /* line 201: */
for ( ;; )
{ 
IGABSIM = GGABSIM_empty;
if ( IGABSIM )
{ /* line 202: */
IGABSIM = (HGABSIM_outers!=HBAATRN_nilouters);
}
if ( !(IGABSIM) ) break;
 /* line 203: */
if ( ((*(&((&(HGABSIM_outers->Outer))->Sort)))==VKAATRN_outerfn) )
{ 
JGABSIM = (*(&((*(&((&(HGABSIM_outers->Outer))->Environ)))->Fns))) ;
KGABSIM = 1 ;
LGABSIM_fdec = (*(&A_VINDEX(JGABSIM,KGABSIM)));
 /* line 204: */
 /* line 205: */
 /* line 206: */
A_CLOSURE( OGABSIM_anonymous, PGABSIM_anonymous, QGABSIM_anonymous );
(( QGABSIM_anonymous * ) ( OGABSIM_anonymous.nonlocals )) -> Flt = Flt;
RGABSIM_status = BEABSIM_find_seedinfo(Seeds, (*(&((*(&(LGABSIM_fdec->Usage)))->Contextno))), (*(&(LGABSIM_fdec->Fnname))), OGABSIM_anonymous);
 /* line 208: */
SGABSIM = (RGABSIM_status==UDABSIM_simdecl);
if ( ! SGABSIM )
{ /* line 209: */
SGABSIM = (RGABSIM_status==WDABSIM_simandprobedecl);
}
 /* line 210: */
if ( SGABSIM )
{ 
 /* line 211: */
 /* line 212: */
GGABSIM_empty = A68_FALSE;
} 
} 
 /* line 213: */
 /* line 214: */
HGABSIM_outers = (*(&(HGABSIM_outers->Rest)));
}
 /* line 215: */
 /* line 216: */
TGABSIM = GGABSIM_empty;
} 
A_PROC_EXIT(closureisempty);
return( TGABSIM );
} 
#undef NL
 /* line 249: */
 /* line 250: */
 /* line 251: */

A68_INT  AHABSIM_translate(A68_111 * File, A68_INT  Diagnosticlevel, A68_43  Report, A68_36  Flt)
{ 
A68_36  CHABSIM_anonymous;   /* proc value of non-global proc */
A68_36  FHABSIM_myflt;
A68_97  IHABSIM_anonymous;   /* proc value of non-global proc */
A68_97  LHABSIM_msg;
A68_31  OHABSIM_generator;   /* proc value of non-global proc */
A68_VC  UHABSIM;  /* avoid structure result */
A68_VC  THABSIM_buffer;
A68_INT  VHABSIM_pos;
A68_INT  WHABSIM_end;
A68_172  XHABSIM_get_char;   /* proc value of non-global proc */
A68_512  UJABSIM;  /* collateral clause result */
A68_52  XJABSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YJABSIM;  /* YIELD */
A68_VC  ZJABSIM;  /* avoid structure result */
A68_52  AKABSIM;  /* OPERATORS - mode -> union mode */
A68_52  BKABSIM;  /* OPERATORS - mode -> union mode */
A68_56  CKABSIM;  /* procedure value */
A68_85  DKABSIM;  /* OPERATORS - istruct -> vector */
A68_366  EKABSIM;  /* avoid structure result */
A68_366  FKABSIM_reader;
A68_365  GKABSIM;  /* avoid structure result */
A68_365  HKABSIM_new_modes;
A68_329 * IKABSIM_closure;
A68_502  JKABSIM;  /* avoid structure result */
A68_502  KKABSIM_seedinfo;
A68_VC  LKABSIM;  /* avoid structure result */
A68_VC * MKABSIM_line;
A68_102  NKABSIM;  /* forall yield */
A68_INT  OKABSIM;  /* forall loop counter */
A68_513  PKABSIM;  /* collateral clause result */
A68_52  QKABSIM;  /* OPERATORS - mode -> union mode */
A68_52  RKABSIM;  /* OPERATORS - mode -> union mode */
A68_56  SKABSIM;  /* procedure value */
A68_85  TKABSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WKABSIM_msg;
A68_INT  XKABSIM_max;
A68_33  ZKABSIM_generator;   /* proc value of non-global proc */
A68_32  FLABSIM;  /* avoid structure result */
A68_32  ELABSIM_fnnos;
A68_32  HLABSIM;  /* avoid structure result */
A68_32  GLABSIM_seedtypes;
A68_INT * ILABSIM_s;
A68_INT * JLABSIM_f;
A68_INT  KLABSIM;  /* forall loop counter */
A68_INT  LLABSIM_simfnfnno;
A68_326 * MLABSIM_outers;
A68_325  NLABSIM_fn;
A68_324  PLABSIM;  /* OPERATORS - simple index */
A68_INT  QLABSIM;  /* YIELD */
A68_316 * OLABSIM_fdec;
A68_INT  RLABSIM_closureno;
A68_INT  SLABSIM_seed;
A68_INT * TLABSIM;  /* YIELD */
A68_BITS  ULABSIM;  /* ADICOPS - <= */
A68_324  VLABSIM;  /* OPERATORS - simple index */
A68_INT  WLABSIM;  /* YIELD */
A68_BITS  XLABSIM;  /* ADICOPS - <= */
A68_INT  YLABSIM_symboltable_fnno;
A68_BOOL  ZLABSIM_want;
A68_317  AMABSIM;  /* != */
A68_314 * BMABSIM_macspec;
A68_317  CMABSIM;  /* forall yield */
A68_INT  DMABSIM;  /* forall loop counter */
A68_BOOL  EMABSIM;  /* optbool result */
A68_INT * FMABSIM;  /* YIELD */
A68_312  GMABSIM;  /* OPERATORS - mode -> union mode */
A68_312 * HMABSIM;  /* YIELD */
A68_BOOL  IMABSIM;  /* optbool result */
A68_316 ** JMABSIM_binding;
A68_324  KMABSIM;  /* OPERATORS - trim index */
A68_324  LMABSIM;  /* OPERATORS - trim index */
A68_324  MMABSIM;  /* forall yield */
A68_INT  NMABSIM;  /* forall loop counter */
A68_INT  OMABSIM_used;
A68_INT * PMABSIM;  /* YIELD */
A68_32  QMABSIM;  /* avoid structure result */
A68_32  RMABSIM_circuitfnnos;
A68_INT  SMABSIM_topfnno;
A68_415  TMABSIM;  /* avoid structure result */
A68_415  UMABSIM_cgsizedata;
A68_INT  VMABSIM_code_data_size;
A68_32  WMABSIM;  /* avoid structure result */
A68_INT  XMABSIM;  /* clause result */
A_PROC_ENTRY(translate);
 /* line 252: */
 /* line 257: */
{ 
A_CLOSURE( CHABSIM_anonymous, DHABSIM_anonymous, EHABSIM_anonymous );
(( EHABSIM_anonymous * ) ( CHABSIM_anonymous.nonlocals )) -> Flt = Flt;
FHABSIM_myflt = (CHABSIM_anonymous);
 /* line 264: */
A_CLOSURE( IHABSIM_anonymous, JHABSIM_anonymous, KHABSIM_anonymous );
(( KHABSIM_anonymous * ) ( IHABSIM_anonymous.nonlocals )) -> FHABSIM_myflt = FHABSIM_myflt;
LHABSIM_msg = (IHABSIM_anonymous);
 /* line 267: */
 /* line 268: */
A_CLOSURE( OHABSIM_generator, PHABSIM_generator, QHABSIM_generator );
A_CALLPROC(OHABSIM_generator,(A68_TRUE, &UHABSIM),(A68_TRUE, &UHABSIM,(OHABSIM_generator).nonlocals));
THABSIM_buffer = UHABSIM;
 /* line 269: */
VHABSIM_pos = MHABSIM_size;
WHABSIM_end = 0;
 /* line 271: */
 /* line 272: */
A_CLOSURE( XHABSIM_get_char, YHABSIM_get_char, ZHABSIM_get_char );
(( ZHABSIM_get_char * ) ( XHABSIM_get_char.nonlocals )) -> VHABSIM_pos = (&VHABSIM_pos);
(( ZHABSIM_get_char * ) ( XHABSIM_get_char.nonlocals )) -> WHABSIM_end = (&WHABSIM_end);
(( ZHABSIM_get_char * ) ( XHABSIM_get_char.nonlocals )) -> File = File;
(( ZHABSIM_get_char * ) ( XHABSIM_get_char.nonlocals )) -> THABSIM_buffer = THABSIM_buffer;
(( ZHABSIM_get_char * ) ( XHABSIM_get_char.nonlocals )) -> LHABSIM_msg = LHABSIM_msg;
(( ZHABSIM_get_char * ) ( XHABSIM_get_char.nonlocals )) -> XHABSIM_get_char = XHABSIM_get_char;
 /* line 285: */
 /* line 310: */
 /* line 311: */
YJABSIM = WJABSIM ;
UJABSIM.data[0] = A_UNITE(XJABSIM,mode7,7,YJABSIM);
SIBAOST_testmode_file_name( File, &ZJABSIM );
UJABSIM.data[1] = A_UNITE(AKABSIM,mode7,7,ZJABSIM);
CKABSIM.fn.fn_global = LRAAOSL_newline;
CKABSIM.nonlocals = A68_NIL;
UJABSIM.data[2] = A_UNITE(BKABSIM,mode12,12,CKABSIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DKABSIM,UJABSIM,3,A68_52 ));
 /* line 313: */
IAGATRN_read_signature( XHABSIM_get_char, LHABSIM_msg, &EKABSIM );
FKABSIM_reader = EKABSIM;
 /* line 314: */
GPDATRN_read_closure( FKABSIM_reader, LHABSIM_msg, &GKABSIM );
HKABSIM_new_modes = GKABSIM;
 /* line 315: */
IKABSIM_closure = HKABSIM_new_modes.Closure;
 /* line 316: */
KIABSIM_get_seedinfo( FKABSIM_reader, LHABSIM_msg, &JKABSIM );
KKABSIM_seedinfo = JKABSIM;
 /* line 318: */
XQBAOSI_close_file(File, LHABSIM_msg);
 /* line 320: */
UEAAOST_facility(  &LKABSIM );
SNGAOST_banner(LKABSIM);
 /* line 321: */
LRAAOSL_newline(KEAAOST_screen);
 /* line 323: */
 /* line 324: */
if ( (HKABSIM_new_modes.Head_data.upb>0) )
{ 
 /* line 325: */
NKABSIM = HKABSIM_new_modes.Head_data ;
OKABSIM = NKABSIM.upb -1;
MKABSIM_line = NKABSIM.data;
for (;OKABSIM-- >= 0;
(MKABSIM_line++
) )
{
PKABSIM.data[0] = A_UNITE(QKABSIM,mode7,7,(*MKABSIM_line));
SKABSIM.fn.fn_global = LRAAOSL_newline;
SKABSIM.nonlocals = A68_NIL;
PKABSIM.data[1] = A_UNITE(RKABSIM,mode12,12,SKABSIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(TKABSIM,PKABSIM,2,A68_52 ));
}
 /* line 326: */
 /* line 327: */
LRAAOSL_newline(KEAAOST_screen);
} 
 /* line 329: */
 /* line 330: */
if ( FGABSIM_closureisempty(IKABSIM_closure, KKABSIM_seedinfo, Flt) )
{ 
WKABSIM_msg = VKABSIM;
 /* line 332: */
 /* line 333: */
A_CALLPROC(Flt,(WKABSIM_msg),(WKABSIM_msg,(Flt).nonlocals));
} 
 /* line 335: */
XKABSIM_max = ZKCATRN_maxclosureno(IKABSIM_closure);
 /* line 336: */
A_CLOSURE( ZKABSIM_generator, ALABSIM_generator, BLABSIM_generator );
(( BLABSIM_generator * ) ( ZKABSIM_generator.nonlocals )) -> XKABSIM_max = XKABSIM_max;
A_CALLPROC(ZKABSIM_generator,(A68_TRUE, &FLABSIM),(A68_TRUE, &FLABSIM,(ZKABSIM_generator).nonlocals));
ELABSIM_fnnos = FLABSIM;
A_CALLPROC(ZKABSIM_generator,(A68_TRUE, &HLABSIM),(A68_TRUE, &HLABSIM,(ZKABSIM_generator).nonlocals));
GLABSIM_seedtypes = HLABSIM;
 /* line 337: */
KLABSIM = GLABSIM_seedtypes.upb -1;
if ( KLABSIM != ELABSIM_fnnos.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
ILABSIM_s = GLABSIM_seedtypes.data;
JLABSIM_f = ELABSIM_fnnos.data;
for (;KLABSIM-- >= 0;
(ILABSIM_s++
,JLABSIM_f++
) )
{
(*JLABSIM_f) = (-1);
(*ILABSIM_s) = (-1);
}
 /* line 338: */
LLABSIM_simfnfnno = (-1);
 /* line 340: */
MLABSIM_outers = (*(&(IKABSIM_closure->Outers)));
 /* line 341: */
for ( ;; )
{ 
 /* line 342: */
if ( !((MLABSIM_outers!=HBAATRN_nilouters)) ) break;
 /* line 343: */
if ( ((*(&((&(MLABSIM_outers->Outer))->Sort)))==VKAATRN_outerfn) )
{ 
NLABSIM_fn = (*(&(MLABSIM_outers->Outer)));
 /* line 344: */
PLABSIM = (*(&((*(&((&NLABSIM_fn)->Environ)))->Fns))) ;
QLABSIM = 1 ;
OLABSIM_fdec = (*(&A_VINDEX(PLABSIM,QLABSIM)));
 /* line 345: */
RLABSIM_closureno = (*(&((*(&(OLABSIM_fdec->Usage)))->Closureno)));
 /* line 347: */
 /* line 348: */
SLABSIM_seed = BEABSIM_find_seedinfo(KKABSIM_seedinfo, (*(&((*(&(OLABSIM_fdec->Usage)))->Contextno))), (*(&(OLABSIM_fdec->Fnname))), LHABSIM_msg);
 /* line 349: */
TLABSIM = (&A_VINDEX(GLABSIM_seedtypes,RLABSIM_closureno)) ;
(*TLABSIM) = SLABSIM_seed;
 /* line 351: */
 /* line 352: */
 /* line 355: */
ULABSIM = (A68_BITS )Diagnosticlevel ;
if ( !A_LB_LE(RSAASIM_omitexpansion,ULABSIM) )
{ 
NLABSIM_fn = (*GGMBTRN_expandtoatomic((&NLABSIM_fn)));
 /* line 356: */
VLABSIM = (*(&((*(&((&NLABSIM_fn)->Environ)))->Fns))) ;
WLABSIM = 1 ;
OLABSIM_fdec = (*(&A_VINDEX(VLABSIM,WLABSIM)));
 /* line 359: */
 /* line 360: */
/*SKIP*/;
} 
 /* line 361: */
 /* line 362: */
XLABSIM = (A68_BITS )Diagnosticlevel ;
if ( A_LB_LE(USAASIM_diagnoseouterfns,XLABSIM) )
{ 
 /* line 363: */
A_CALLPROC(Report,((*(&(OLABSIM_fdec->Fnname)))),((*(&(OLABSIM_fdec->Fnname))),(Report).nonlocals));
} 
 /* line 364: */
 /* line 365: */
 /* line 366: */
 /* line 367: */
YLABSIM_symboltable_fnno = A_CALLPROC(EQYASIM_translatefunction,((*(&(OLABSIM_fdec->Fnbody))), OLABSIM_fdec, (*(&((&NLABSIM_fn)->Environ))), IKABSIM_closure, Diagnosticlevel, RLABSIM_closureno, (-1), FHABSIM_myflt),((*(&(OLABSIM_fdec->Fnbody))), OLABSIM_fdec, (*(&((&NLABSIM_fn)->Environ))), IKABSIM_closure, Diagnosticlevel, RLABSIM_closureno, (-1), FHABSIM_myflt,(EQYASIM_translatefunction).nonlocals));
 /* line 368: */
ZLABSIM_want = A68_TRUE;
 /* line 376: */
 /* line 377: */
 /* line 378: */
AMABSIM = (*(&(OLABSIM_fdec->Macspecs))) ;
if ( ! A_VSTRUCTCOMP(AMABSIM,FBAATRN_nilmacspecs) )
{ 
 /* line 379: */
CMABSIM = (*(&(OLABSIM_fdec->Macspecs))) ;
DMABSIM = CMABSIM.upb -1;
BMABSIM_macspec = CMABSIM.data;
for (;DMABSIM-- >= 0;
(BMABSIM_macspec++
) )
{
 /* line 380: */
if ( ((*(&(BMABSIM_macspec->Sort)))==HPABTRN_timescale) )
{ 
 /* line 381: */
 /* line 382: */
ZLABSIM_want = A68_FALSE;
} 
}
 /* line 383: */
} 
 /* line 385: */
 /* line 386: */
if ( ZLABSIM_want )
{ 
EMABSIM = (SLABSIM_seed==UDABSIM_simdecl);
if ( ! EMABSIM )
{ /* line 387: */
EMABSIM = (SLABSIM_seed==WDABSIM_simandprobedecl);
}
if ( EMABSIM )
{ 
 /* line 388: */
LLABSIM_simfnfnno = YLABSIM_symboltable_fnno;
} 
 /* line 389: */
FMABSIM = (&A_VINDEX(ELABSIM_fnnos,RLABSIM_closureno)) ;
(*FMABSIM) = YLABSIM_symboltable_fnno;
 /* line 390: */
 /* line 391: */
UQCASIM_addseedtype((*(&A_VINDEX(ELABSIM_fnnos,RLABSIM_closureno))), SLABSIM_seed);
} 
 /* line 394: */
HMABSIM = (&(OLABSIM_fdec->Fnbody)) ;
(*HMABSIM) = A_UNITE(GMABSIM,mode12,12,(&LIAATRN_bodynull));
 /* line 395: */
QADASIM_incrementaltablecleanup();
 /* line 399: */
IMABSIM = ((*(&A_VINDEX(ELABSIM_fnnos,RLABSIM_closureno)))!=(-1));
if ( IMABSIM )
{ /* line 400: */
IMABSIM = ((*(&((*(&((&NLABSIM_fn)->Environ)))->Fns))).upb>1);
}
if ( IMABSIM )
{ 
 /* line 401: */
KMABSIM = (*(&((*(&((&NLABSIM_fn)->Environ)))->Fns))) ;
MMABSIM = A_VTRIM(LMABSIM,(KMABSIM),A_VTSCRIPT(&(LMABSIM.upb),(KMABSIM).upb,2,(KMABSIM).upb)) ;
NMABSIM = MMABSIM.upb -1;
JMABSIM_binding = MMABSIM.data;
for (;NMABSIM-- >= 0;
(JMABSIM_binding++
) )
{
 /* line 402: */
if ( ((*(&((*JMABSIM_binding)->Sort)))==OKAATRN_outerdec) )
{ 
OMABSIM_used = (*(&((*(&((*JMABSIM_binding)->Usage)))->Closureno)));
 /* line 403: */
 /* line 404: */
 /* line 405: */
PMABSIM = (&A_VINDEX(ELABSIM_fnnos,OMABSIM_used)) ;
(*PMABSIM) = (-(*(&A_VINDEX(ELABSIM_fnnos,OMABSIM_used))));
} 
}
 /* line 406: */
 /* line 407: */
 /* line 408: */
} 
} 
else
{ 
/*SKIP*/;
} 
 /* line 409: */
 /* line 410: */
MLABSIM_outers = (*(&(MLABSIM_outers->Rest)));
}
 /* line 413: */
PEABSIM_compactcircuitfns( ELABSIM_fnnos, GLABSIM_seedtypes, &QMABSIM );
RMABSIM_circuitfnnos = QMABSIM;
 /* line 414: */
SMABSIM_topfnno = DZZASIM_translatetoplevel(RMABSIM_circuitfnnos);
 /* line 416: */
 /* line 417: */
ROMASIM_cgsizes(  &TMABSIM );
UMABSIM_cgsizedata = TMABSIM;
 /* line 419: */
VMABSIM_code_data_size = (UMABSIM_cgsizedata.Codesize+UMABSIM_cgsizedata.Datasize);
 /* line 422: */
KFABSIM_compactprobefns( ELABSIM_fnnos, GLABSIM_seedtypes, &WMABSIM );
ILYASIM_constructcalls(SMABSIM_topfnno, WMABSIM, FHABSIM_myflt);
 /* line 426: */
RADASIM_finaltablecleanup();
 /* line 429: */
 /* line 430: */
 /* line 433: */
XMABSIM = LLABSIM_simfnfnno;
} 
A_PROC_EXIT(translate);
return( XMABSIM );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void BDABSIM(void)   /* initialise DECS ketranslate */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/ketranslate.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/keinstance.m","/u/model/ella/transform/assoc/mfiles/kexpand.m","./mfiles/kesymbols.m","./mfiles/kebasics.m","./mfiles/keambasics.m","/u/model/ella/transform/assoc/mfiles/openinterface.m","/u/model/ella/transform/assoc/mfiles/timescale.m","/u/model/ella/transform/assoc/mfiles/closureprocs.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MLXASIM();   /* USE keinstance */
KHLBTRN();   /* USE kexpand */
TCCASIM();   /* USE kesymbols */
JSAASIM();   /* USE kebasics */
XDNASIM();   /* USE keambasics */
TPCATRN();   /* USE openinterface */
CPABTRN();   /* USE timescale */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
TIGAOST();   /* USE ioprocs */
QFBAOST();   /* USE testmode */
JSCAOST();   /* USE basics */
BAAAOST();   /* USE options */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/ketranslate.a68";
A_config.translation_time = "Tue Apr  4 11:13:16 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ADABSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:13:16 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ketranslate);
UEAALIB_a68config(LGAALIB_configinfo, FDABSIM);
 /* line 97: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 108: */
 /* line 115: */
 /* line 117: */
 /* line 146: */
 /* line 172: */
 /* line 196: */
 /* line 245: */
 /* line 246: */
 /* line 248: */
 /* line 434: */
A_PROC_EXIT(DECS ketranslate);
} 
#undef NL
/* end of translation of ./a68files/ketranslate.a68 */
