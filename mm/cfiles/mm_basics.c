
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
/* UNAME:RAAAAMM */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 4 CHAR */
struct A68t94{
struct A68t95  Access;
A_PAD_ISTRUCT(A68_95 ,PAD_20)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE95)  */
struct A68t97 ;

A_PROCEDURE(struct A68t92 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t97 ),(A68_VC ,struct A68t94 ,struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE97) REF MODE92 */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,struct A68t46 ),(struct A68t98 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,MODE46) VOID */
struct A68t98{
A68_INT  Number;
A_PAD_INT(PAD_21)
struct A68t99 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_22)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE99,BITS)  */
A_VECTOR(struct A68t101 ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] MODE101 */
struct A68t101{
struct A68t98  Msgno;
A68_VC  Text;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE98,REF MODE26)  */
struct A68t99{
A68_VC  Name;
struct A68t100  Messages;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE100)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t92 *,struct A68t97 ),(struct A68t92 *,struct A68t97 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE92,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t92 *,A68_VC *),(struct A68t92 *,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE92) MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE92,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE92,MODE26,MODE97) MODE35 */
struct A68t106{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_23)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_24)
A68_SINT  Device;
A_PAD_SINT(PAD_25)
A68_SINT  Links;
A_PAD_SINT(PAD_26)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_27)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_28)
A68_LINT  Size;
A_PAD_LINT(PAD_29)
A68_LINT  Accessed;
A_PAD_LINT(PAD_30)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_31)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_32)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t108 ;

A_PROCEDURE(struct A68t106 *,A68t107,(struct A68t108 ,struct A68t97 ),(struct A68t108 ,struct A68t97 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE97) REF MODE106 */
struct A68t108 { A68_INT mode; union {
struct A68t92 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(REF MODE92,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE92,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE92,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t92 *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE92,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ),(A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t115,(void),(void *));
typedef struct A68t115  A68_115 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t116,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t117,(void),(void *));
typedef struct A68t117  A68_117 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t120{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t120 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t120 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE26,MODE97) MODE120 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC *),(A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t125,(void),(void *));
typedef struct A68t125  A68_125 ;    /* PROC BOOL */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,struct A68t97 ),(struct A68t127 ,struct A68t97 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE127,MODE97) VOID */
A_VECTOR(struct A68t128 ,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] MODE128 */
struct A68t128{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_33)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t133,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REAL) REAL */
struct A68t134{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t134 *),(A68_BOOL ,struct A68t134 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE134 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t134 ,A68_BOOL ),(struct A68t134 ,A68_BOOL ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE134,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t134 *),(struct A68t134 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC MODE134 */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t140 ;
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 ),(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE129,MODE140,MODE141) VOID */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_VC ,struct A68t122 ),(A68_VC ,struct A68t122 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE122) BOOL */

A_PROCEDURE(A68_BOOL ,A68t141,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t142 ,struct A68t97 ),(struct A68t142 ,struct A68t97 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE142,MODE97) VOID */
struct A68t144{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t146 ),(struct A68t146 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE146) VOID */
struct A68t146 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t148,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BITS,BITS) BITS */
struct A68t150 ;

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t150 ,A68_INT ),(struct A68t150 ,A68_INT ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(CHAR) VOID */
struct A68t152 ;

A_PROCEDURE(A68_INT ,A68t151,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE152) INT */

A_PROCEDURE(A68_CHAR ,A68t152,(void),(void *));
typedef struct A68t152  A68_152 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t153,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t154,(A68_INT ),(A68_INT ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC *),(A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t157,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t158,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t159,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t162 ,A68t161);
typedef struct A68t161  A68_161 ;    /* VECTOR [] MODE162 */
struct A68t162{
A68_INT  Number;
A_PAD_INT(PAD_34)
A68_BITS  Class;
A_PAD_BITS(PAD_35)
A68_VC  Text;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t160{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t161  Setup;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE161)  */

A_PROCEDURE(A68_VOID ,A68t163,(A68_BOOL ,struct A68t160 *),(A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(BOOL) MODE160 */
A_VECTOR(A68_VC ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t46 ,struct A68t164 *),(struct A68t46 ,struct A68t164 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE46) MODE164 */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t164 ,struct A68t46 *),(struct A68t164 ,struct A68t46 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE164) MODE46 */
struct A68t168 ;

A_PROCEDURE(A68_BOOL ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) BOOL */
struct A68t168 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t168  A68_168 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t169,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,struct A68t160 ,struct A68t98 *),(A68_INT ,struct A68t160 ,struct A68t98 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,MODE160) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t171,(struct A68t98 ,struct A68t160 ),(struct A68t98 ,struct A68t160 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE98,MODE160) BOOL */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 56 CHAR */
struct A68t177{
A68_VC  Name;
A68_VC  Text;
A68_BITS  Tags;
A_PAD_BITS(PAD_36)
struct A68t177 * Last;
struct A68t177 * Rest;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE26,BITS,REF MODE177,REF MODE177)  */
struct A68t178{
A68_CHAR  Mode;
A_PAD_CHAR(PAD_37)
A68_CHAR  Value;
A_PAD_CHAR(PAD_38)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t179{
A68_VC  Name;
A68_VC  Value;
A68_VC  Initvalue;
struct A68t177 * Default;
A68_BOOL  Permanent;
A_PAD_BOOL(PAD_39)
A68_BITS  Marker;
A_PAD_BITS(PAD_40)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE177,BOOL,BITS)  */
A_VECTOR(struct A68t179 ,A68t181);
typedef struct A68t181  A68_181 ;    /* VECTOR [] MODE179 */
struct A68t180{
A68_VC  Name;
A68_VC  Filename;
A68_BOOL  Decs;
A_PAD_BOOL(PAD_41)
A68_BOOL  Recursive;
A_PAD_BOOL(PAD_42)
A68_BOOL  Analysed;
A_PAD_BOOL(PAD_43)
A68_BITS  State;
A_PAD_BITS(PAD_44)
struct A68t181  Attributes;
A68_INT  Level;
A_PAD_INT(PAD_45)
A68_INT  Number;
A_PAD_INT(PAD_46)
A68_INT  Marker;
A_PAD_INT(PAD_47)
struct A68t182 * Uses;
struct A68t182 * Usedby;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(REF MODE26,REF MODE26,BOOL,BOOL,BOOL,BITS,REF MODE181,INT,INT,INT,REF MODE182,REF MODE182)  */
struct A68t182{
struct A68t180 * Module;
struct A68t178  Star;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE180,MODE178,REF MODE182)  */
struct A68t183{
A68_INT  Token;
A_PAD_INT(PAD_48)
A68_VC  Value;
struct A68t178  Star;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26,MODE178)  */
struct A68t184{
A68_VC  Word;
A68_INT  Token;
A_PAD_INT(PAD_49)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t185,(A68_BOOL ,struct A68t184 *),(A68_BOOL ,struct A68t184 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(BOOL) MODE184 */
#define A68_186  A68_VC 
#define A68t186 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_187  A68_184 
#define A68t187 A68t184            /* STRUCT(MODE186,INT)  */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t178 ,struct A68t178 ),(struct A68t178 ,struct A68t178 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE178,MODE178) BOOL */
A_ISTRUCT(A68_CHAR ,10,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,12,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 12 REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t199,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE177) BOOL */
A_ISTRUCT(A68_CHAR ,13,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 13 CHAR */
A_VECTOR(struct A68t177 **,A68t201);
typedef struct A68t201  A68_201 ;    /* VECTOR [] REF REF MODE177 */
A_ISTRUCT(struct A68t177 **,10,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 10 REF REF MODE177 */

A_PROCEDURE(A68_VOID ,A68t203,(A68_BOOL ,struct A68t164 *),(A68_BOOL ,struct A68t164 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(BOOL) MODE164 */

A_PROCEDURE(struct A68t177 *,A68t204,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE26,MODE199) REF MODE177 */

A_PROCEDURE(struct A68t177 *,A68t205,(A68_VC ),(A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26) REF MODE177 */
A_ISTRUCT(A68_CHAR ,1,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_BOOL ,A68t207,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE177) VOID */

A_PROCEDURE(struct A68t177 *,A68t209,(A68_VC ,A68_VC ,A68_BITS ),(A68_VC ,A68_VC ,A68_BITS ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,REF MODE26,BITS) REF MODE177 */

A_PROCEDURE(A68_INT ,A68t210,(A68_VC ),(A68_VC ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_BOOL ,A68t211,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(BITS) BOOL */
A_ISTRUCT(A68_CHAR ,18,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t217,(A68_BOOL ,struct A68t181 *),(A68_BOOL ,struct A68t181 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(BOOL) MODE181 */
struct A68t218{
A68_VC  Operating_system;
A68_VC  Star_chars;
A68_VC  Edit_command;
A68_VC  Exe_dir;
A68_VC  Heap_size;
A68_BOOL  Case_sensitive;
A_PAD_BOOL(PAD_50)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t218 ,A68_VC *),(struct A68t218 ,A68_VC *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE218) REF MODE26 */
A_ISTRUCT(struct A68t179 ,8,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 8 MODE179 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t180 *,A68_INT ,A68_VC *),(struct A68t180 *,A68_INT ,A68_VC *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE180,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t180 *,A68_INT ),(struct A68t180 *,A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE180,INT) BOOL */
struct A68t223 { A68_INT mode; union {
A68_VC  mode1;
A68_BOOL  mode2;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t180 *,A68_INT ,struct A68t223 ),(struct A68t180 *,A68_INT ,struct A68t223 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE180,INT,MODE223) VOID */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t180 *,A68_INT ),(struct A68t180 *,A68_INT ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE180,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t180 *,A68_INT ,A68_VC ),(struct A68t180 *,A68_INT ,A68_VC ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE180,INT,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t227,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE26,INT,MODE97) BOOL */
A_ISTRUCT(struct A68t52 ,2,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,23,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 47 CHAR */

A_PROCEDURE(A68_BOOL ,A68t231,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t232,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE26,MODE26) REF MODE26 */
A_ISTRUCT(struct A68t52 ,4,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t178 ,A68_VC ),(struct A68t178 ,A68_VC ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE178,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t120 ,A68_VC *),(struct A68t120 ,A68_VC *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE120) REF MODE26 */
A_ISTRUCT(struct A68t52 ,3,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t237,(struct A68t180 *,struct A68t178 ),(struct A68t180 *,struct A68t178 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE180,MODE178) BOOL */

A_PROCEDURE(struct A68t182 *,A68t238,(struct A68t182 *,struct A68t237 ),(struct A68t182 *,struct A68t237 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE182,MODE237) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t182 *,A68_INT ),(struct A68t182 *,A68_INT ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE182,INT) VOID */

A_PROCEDURE(struct A68t182 *,A68t240,(struct A68t182 *,A68_VC ),(struct A68t182 *,A68_VC ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE182,MODE26) REF MODE182 */

A_PROCEDURE(struct A68t182 *,A68t241,(struct A68t182 **,struct A68t180 *,struct A68t178 ),(struct A68t182 **,struct A68t180 *,struct A68t178 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF REF MODE182,REF MODE180,MODE178) REF MODE182 */

A_PROCEDURE(A68_BOOL ,A68t242,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,MODE97) BOOL */

A_PROCEDURE(struct A68t182 *,A68t243,(struct A68t182 *,A68_INT ),(struct A68t182 *,A68_INT ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE182,INT) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t244,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,21,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t52 ,9,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 9 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t250,(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ),(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE26,MODE26,BITS,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t178 *),(struct A68t178 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC MODE178 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_VC ,A68_VC ,A68_BITS ,A68_VC *),(A68_VC ,A68_VC ,A68_BITS ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE26,MODE26,BITS) REF MODE26 */
A_ISTRUCT(struct A68t52 ,5,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(struct A68t182 *,A68t254,(struct A68t182 **,A68_VC ),(struct A68t182 **,A68_VC ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF REF MODE182,MODE26) REF MODE182 */
A_ISTRUCT(A68_CHAR ,24,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t182 *),(struct A68t182 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE182) VOID */

A_PROCEDURE(A68_BOOL ,A68t260,(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ),(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE26,MODE26,BITS,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t34 *,struct A68t182 *),(struct A68t34 *,struct A68t182 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE34,REF MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t34 *,A68_BITS ),(struct A68t34 *,A68_BITS ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE34,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 32 CHAR */
A_VECTOR(struct A68t184 ,A68t265);
typedef struct A68t265  A68_265 ;    /* VECTOR [] MODE184 */
A_ISTRUCT(struct A68t184 ,6,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 6 MODE184 */

A_PROCEDURE(A68_BOOL ,A68t267,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE26,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,14,A68t268);
typedef struct A68t268  A68_268 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t183 *),(struct A68t183 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC MODE183 */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t182 *,struct A68t182 **),(struct A68t182 *,struct A68t182 **,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF MODE182,REF REF MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t178 ),(struct A68t178 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE178) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_BOOL ,A68t274,(struct A68t183 ,struct A68t182 *),(struct A68t183 ,struct A68t182 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE183,REF MODE182) BOOL */
A_ISTRUCT(A68_CHAR ,33,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t183 ,A68_BOOL ),(struct A68t183 ,A68_BOOL ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE183,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t180 *),(struct A68t180 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE180) VOID */
A_ISTRUCT(A68_CHAR ,20,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_98  UHAAOSI_fatal;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_INT  FVCAOST_max(A68_INT ,A68_INT );
extern A68_INT  XVCAOST_charstoint(A68_VC ,A68_BOOL *);
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
#define VPBAOSI_newline_char '\012'
extern A68_94  PNBAOSI_read_access;
extern A68_94  TNBAOSI_write_access;
extern A68_94  BOBAOSI_update_access;
extern A68_94  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_92 * FQBAOSI_open_file(A68_VC ,struct A68t94 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t92 *,struct A68t97 );
extern A68_VOID  YPBAOSI_file_name(struct A68t92 *,A68_VC *);
extern A68_VOID  SRBAOSI_read_line(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t92 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_120 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
extern A68_BOOL  FIAAOST_interactive(void);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
extern A68_VOID  IIAAOST_prompt(A68_VC ,A68_VC *);
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_INT  EPAAOSL_charsleft(struct A68t34 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_34 * XPAAOSL_make_channel(struct A68t87 ,struct A68t88 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_175   VAAAAMM = {"$Id: mm_basics.a68,v 34.3 1995/03/29 13:02:34 ella Exp $"}; 
A_GISVEC(A68_VC ,WAAAAMM,VAAAAMM,56)
static A68_185  XAAAAMM_anonymous;
A68_177 * JBAAAMM_nilsymbol;
A68_182 * KBAAAMM_nilmodulelist;
A68_180 * LBAAAMM_nilmodule;
A68_178  NBAAAMM_blank_star;
static A68_189   UBAAAMM = {"2109930912"}; 
A_GISVEC(A68_VC ,VBAAAMM,UBAAAMM,10)
static A68_VC  WBAAAMM_signature;
A68_VC  BCAAAMM_blankname;
A68_VC  HCAAAMM_nostars;
static A68_190   JCAAAMM = {"no staredit"}; 
A_GISVEC(A68_VC ,KCAAAMM,JCAAAMM,11)
A68_VC  QCAAAMM_nooptimise;
static A68_190   SCAAAMM = {"no optimise"}; 
A_GISVEC(A68_VC ,TCAAAMM,SCAAAMM,11)
A68_VC  ZCAAAMM_true_string;
static A68_95   BDAAAMM = {"true"}; 
A_GISVEC(A68_VC ,CDAAAMM,BDAAAMM,4)
A68_VC  IDAAAMM_false_string;
static A68_191   KDAAAMM = {"false"}; 
A_GISVEC(A68_VC ,LDAAAMM,KDAAAMM,5)
A68_VC  RDAAAMM_on_string;
static A68_192   TDAAAMM = {"on"}; 
A_GISVEC(A68_VC ,UDAAAMM,TDAAAMM,2)
A68_VC  AEAAAMM_off_string;
static A68_193   CEAAAMM = {"off"}; 
A_GISVEC(A68_VC ,DEAAAMM,CEAAAMM,3)
A68_VC  JEAAAMM_cc_string;
static A68_192   LEAAAMM = {"cc"}; 
A_GISVEC(A68_VC ,MEAAAMM,LEAAAMM,2)
A68_VC  SEAAAMM_tr_string;
static A68_192   UEAAAMM = {"tr"}; 
A_GISVEC(A68_VC ,VEAAAMM,UEAAAMM,2)
A68_VC  BFAAAMM_failed_string;
static A68_194   DFAAAMM = {"failed"}; 
A_GISVEC(A68_VC ,EFAAAMM,DFAAAMM,6)
A68_VC  KFAAAMM_trfailed_string;
static A68_195   MFAAAMM = {"trfailed"}; 
A_GISVEC(A68_VC ,NFAAAMM,MFAAAMM,8)
A68_VC  TFAAAMM_ccfailed_string;
static A68_195   VFAAAMM = {"ccfailed"}; 
A_GISVEC(A68_VC ,WFAAAMM,VFAAAMM,8)
A68_VC  CGAAAMM_translate_string;
static A68_196   EGAAAMM = {"translate"}; 
A_GISVEC(A68_VC ,FGAAAMM,EGAAAMM,9)
A68_VC  LGAAAMM_compile_string;
static A68_197   NGAAAMM = {"compile"}; 
A_GISVEC(A68_VC ,OGAAAMM,NGAAAMM,7)
A68_VC  UGAAAMM_link_string;
static A68_95   WGAAAMM = {"link"}; 
A_GISVEC(A68_VC ,XGAAAMM,WGAAAMM,4)
static A68_164  BHAAAMM_std_sym_values;
static A68_INT  CHAAAMM_translate_str_top;
static A68_INT  DHAAAMM_compile_str_top;
static A68_INT  EHAAAMM_link_str_top;
#define NHAAAMM_bsize 80
#define OHAAAMM_bufmax 256
#define PHAAAMM_tab '\011'
#define QHAAAMM_lf '\012'
#define RHAAAMM_eof '\032'
A68_INT  SHAAAMM_lcbias;
A68_INT  THAAAMM_zero;
#define UHAAAMM_std_state 0X0U
static A68_95   VHAAAMM = {".mmd"}; 
A_GISVEC(A68_VC ,WHAAAMM,VHAAAMM,4)
A68_VC  XHAAAMM_mmd_type;
static A68_95   YHAAAMM = {".aux"}; 
A_GISVEC(A68_VC ,ZHAAAMM,YHAAAMM,4)
A68_VC  AIAAAMM_aux_type;
static A68_95   BIAAAMM = {".mmi"}; 
A_GISVEC(A68_VC ,CIAAAMM,BIAAAMM,4)
A68_VC  DIAAAMM_inp_type;
static A68_95   EIAAAMM = {".sta"}; 
A_GISVEC(A68_VC ,FIAAAMM,EIAAAMM,4)
A68_VC  GIAAAMM_sta_type;
static A68_95   HIAAAMM = {".a68"}; 
A_GISVEC(A68_VC ,IIAAAMM,HIAAAMM,4)
A68_VC  JIAAAMM_a68_type;
static A68_200   KIAAAMM = {"$MM_INIT_FILE"}; 
A_GISVEC(A68_VC ,LIAAAMM,KIAAAMM,13)
static A68_VC  MIAAAMM_init_file_name;
A68_INT  NIAAAMM_max_level;
A68_INT  OIAAAMM_max_module_name_size;
static A68_INT  PIAAAMM_init_module_count;
static A68_INT  QIAAAMM_init_file_count;
A68_BOOL  RIAAAMM_need_to_tidy;
A68_BOOL  SIAAAMM_diagnose;
A68_BOOL  TIAAAMM_attribute_modified;
A68_BOOL  UIAAAMM_ring_bell;
A68_BOOL  VIAAAMM_case_sensitive;
A68_182 * WIAAAMM_modules;
static A68_177 * XIAAAMM_symbols;
static A68_177 ** YIAAAMM_sym_tail;
#define ZIAAAMM_changed_tag 0X001U
#define AJAAAMM_mmd_tag 0X002U
#define BJAAAMM_aux_tag 0X004U
#define CJAAAMM_init_tag 0X008U
#define DJAAAMM_local_tag 0X010U
#define EJAAAMM_system_tag 0X020U
#define FJAAAMM_translate_tag 0X040U
#define GJAAAMM_compile_tag 0X080U
#define HJAAAMM_link_tag 0X100U
A68_BITS  IJAAAMM_dest_tag;
static A68_BITS  JJAAAMM_dest_mask;
A68_BITS  KJAAAMM_action_tag;
static A68_BITS  LJAAAMM_symbols_modified;
static A68_VC  MJAAAMM_std_star_chars;
static A68_VC  NJAAAMM_std_edit_command;
static A68_VC  OJAAAMM_std_exe_dir;
static A68_VC  PJAAAMM_std_heap_size;
static A68_VC  UJAAAMM_std_database_name;
static A68_197   WJAAAMM = {"modules"}; 
A_GISVEC(A68_VC ,XJAAAMM,WJAAAMM,7)
A68_VC  ZJAAAMM_database_name;
A68_VC  AKAAAMM_detach_name;
static A68_VC  BKAAAMM_init_detach_name;
A68_VC  CKAAAMM_operating_system;
static A68_177 * DKAAAMM_default_off;
static A68_177 * EKAAAMM_default_on;
A68_177 * FKAAAMM_default_debug;
A68_177 * GKAAAMM_default_star_chars;
A68_177 * HKAAAMM_default_heap_size;
A68_177 * IKAAAMM_default_optimise_chars;
A68_177 * JKAAAMM_default_exe_dir;
A68_177 * KKAAAMM_edit_command;
A68_177 * LKAAAMM_auto_link;
A68_177 * MKAAAMM_auto_version;
A68_177 * NKAAAMM_notify_at_go;
A68_177 * OKAAAMM_bell_flag;
A68_201  RKAAAMM_standard_symbols;
static A68_164  WKAAAMM_init_sym_values;
static A68_206   MLAAAMM = {""}; 
A_GISVEC(A68_VC ,TLAAAMM,MLAAAMM,0)
static A68_193   AOAAAMM = {"off"}; 
A_GISVEC(A68_VC ,BOAAAMM,AOAAAMM,3)
static A68_192   COAAAMM = {"on"}; 
A_GISVEC(A68_VC ,DOAAAMM,COAAAMM,2)
static A68_200   EOAAAMM = {"default_debug"}; 
A_GISVEC(A68_VC ,FOAAAMM,EOAAAMM,13)
static A68_212   GOAAAMM = {"default_star_chars"}; 
A_GISVEC(A68_VC ,HOAAAMM,GOAAAMM,18)
static A68_213   IOAAAMM = {"default_heap_size"}; 
A_GISVEC(A68_VC ,JOAAAMM,IOAAAMM,17)
static A68_214   KOAAAMM = {"default_optimise_chars"}; 
A_GISVEC(A68_VC ,LOAAAMM,KOAAAMM,22)
static A68_215   MOAAAMM = {"default_exe_dir"}; 
A_GISVEC(A68_VC ,NOAAAMM,MOAAAMM,15)
static A68_216   OOAAAMM = {"edit_command"}; 
A_GISVEC(A68_VC ,POAAAMM,OOAAAMM,12)
static A68_196   QOAAAMM = {"auto_link"}; 
A_GISVEC(A68_VC ,ROAAAMM,QOAAAMM,9)
static A68_216   SOAAAMM = {"auto_version"}; 
A_GISVEC(A68_VC ,TOAAAMM,SOAAAMM,12)
static A68_216   UOAAAMM = {"notify_at_go"}; 
A_GISVEC(A68_VC ,VOAAAMM,UOAAAMM,12)
static A68_196   WOAAAMM = {"bell_flag"}; 
A_GISVEC(A68_VC ,XOAAAMM,WOAAAMM,9)
#define QPAAAMM_compile_attribute 1
#define RPAAAMM_link_attribute 2
#define SPAAAMM_debug_attribute 3
#define TPAAAMM_star_attribute 4
#define UPAAAMM_heap_attribute 5
#define VPAAAMM_exename_attribute 6
#define WPAAAMM_version_attribute 7
#define XPAAAMM_optimise_attribute 8
#define YPAAAMM_max_attribute 8
static A68_VC  DQAAAMM_compile_txt;
static A68_197   FQAAAMM = {"Compile"}; 
A_GISVEC(A68_VC ,GQAAAMM,FQAAAMM,7)
static A68_VC  MQAAAMM_link_txt;
static A68_95   OQAAAMM = {"Link"}; 
A_GISVEC(A68_VC ,PQAAAMM,OQAAAMM,4)
static A68_VC  VQAAAMM_debug_txt;
static A68_191   XQAAAMM = {"Debug"}; 
A_GISVEC(A68_VC ,YQAAAMM,XQAAAMM,5)
static A68_VC  ERAAAMM_star_txt;
static A68_191   GRAAAMM = {"Stars"}; 
A_GISVEC(A68_VC ,HRAAAMM,GRAAAMM,5)
static A68_VC  NRAAAMM_heap_size_txt;
static A68_196   PRAAAMM = {"Heap size"}; 
A_GISVEC(A68_VC ,QRAAAMM,PRAAAMM,9)
static A68_VC  WRAAAMM_exename_txt;
static A68_197   YRAAAMM = {"Exename"}; 
A_GISVEC(A68_VC ,ZRAAAMM,YRAAAMM,7)
static A68_VC  FSAAAMM_version_txt;
static A68_197   HSAAAMM = {"Version"}; 
A_GISVEC(A68_VC ,ISAAAMM,HSAAAMM,7)
static A68_VC  OSAAAMM_optimise_txt;
static A68_195   QSAAAMM = {"Optimise"}; 
A_GISVEC(A68_VC ,RSAAAMM,QSAAAMM,8)
static A68_181  XSAAAMM_default_attributes;
A68_BOOL  ZWAAAMM_query_active;
#define DXAAAMM_default_yes 1
#define EXAAAMM_default_no 2
#define FXAAAMM_no_default 3
static A68_197   MXAAAMM = {" [n] ? "}; 
A_GISVEC(A68_VC ,NXAAAMM,MXAAAMM,7)
static A68_197   QXAAAMM = {" [y] ? "}; 
A_GISVEC(A68_VC ,RXAAAMM,QXAAAMM,7)
static A68_193   UXAAAMM = {" ? "}; 
A_GISVEC(A68_VC ,VXAAAMM,UXAAAMM,3)
static A68_229   JYAAAMM = {"Please answer yes or no"}; 
A_GISVEC(A68_VC ,KYAAAMM,JYAAAMM,23)
static A68_230   QYAAAMM = {"Query called non-interactively with no default."}; 
A_GISVEC(A68_VC ,RYAAAMM,QYAAAMM,47)
static A68_190   KZAAAMM = {" not found."}; 
A_GISVEC(A68_VC ,LZAAAMM,KZAAAMM,11)
static A68_194   TZAAAMM = {"Module"}; 
A_GISVEC(A68_VC ,VZAAAMM,TZAAAMM,6)
static A68_95   ZZAAAMM = {"File"}; 
A_GISVEC(A68_VC ,BABAAMM,ZZAAAMM,4)
#define ZCBAAMM_save_none 0
#define ADBAAMM_save_environ 1
#define BDBAAMM_save_modules 2
A68_INT  CDBAAMM_save_all;
#define UEBAAMM_by_number 1
#define VEBAAMM_by_level 2
#define WEBAAMM_alphabetically 3
static A68_213   AGBAAMM = {"Warning:- module "}; 
A_GISVEC(A68_VC ,BGBAAMM,AGBAAMM,17)
static A68_245   GGBAAMM = {" is used recursively?"}; 
A_GISVEC(A68_VC ,HGBAAMM,GGBAAMM,21)
static A68_246   AHBAAMM = {"Recursive modules present."}; 
A_GISVEC(A68_VC ,BHBAAMM,AHBAAMM,26)
static A68_247   EHBAAMM = {"Number of decs modules    = "}; 
A_GISVEC(A68_VC ,FHBAAMM,EHBAAMM,28)
static A68_247   LHBAAMM = {"Number of program modules = "}; 
A_GISVEC(A68_VC ,MHBAAMM,LHBAAMM,28)
static A68_247   SHBAAMM = {"Maximum level             = "}; 
A_GISVEC(A68_VC ,THBAAMM,SHBAAMM,28)
static A68_249   BIBAAMM = {"There are no modules in the database."}; 
A_GISVEC(A68_VC ,CIBAAMM,BIBAAMM,37)
#define KJBAAMM_text_mode 0
#define LJBAAMM_string_mode 1
#define MJBAAMM_name_mode 2
#define NJBAAMM_number_mode 3
static A68_194   CLBAAMM = {" file "}; 
A_GISVEC(A68_VC ,DLBAAMM,CLBAAMM,6)
static A68_190   ILBAAMM = {" not found."}; 
A_GISVEC(A68_VC ,JLBAAMM,ILBAAMM,11)
static A68_197   QMBAAMM = {"Version"}; 
A_GISVEC(A68_VC ,RMBAAMM,QMBAAMM,7)
static A68_255   TMBAAMM = {"Database is out of date."}; 
A_GISVEC(A68_VC ,UMBAAMM,TMBAAMM,24)
static A68_95   WMBAAMM = {"Stop"}; 
A_GISVEC(A68_VC ,XMBAAMM,WMBAAMM,4)
static A68_95   ANBAAMM = {"Decs"}; 
A_GISVEC(A68_VC ,BNBAAMM,ANBAAMM,4)
static A68_95   DNBAAMM = {"Prog"}; 
A_GISVEC(A68_VC ,ENBAAMM,DNBAAMM,4)
static A68_95   FNBAAMM = {"Decs"}; 
A_GISVEC(A68_VC ,GNBAAMM,FNBAAMM,4)
static A68_95   HOBAAMM = {"Uses"}; 
A_GISVEC(A68_VC ,IOBAAMM,HOBAAMM,4)
static A68_196   MOBAAMM = {"Attribute"}; 
A_GISVEC(A68_VC ,NOBAAMM,MOBAAMM,9)
static A68_212   WOBAAMM = {"Attribute: module "}; 
A_GISVEC(A68_VC ,XOBAAMM,WOBAAMM,18)
static A68_229   BPBAAMM = {" no longer in database."}; 
A_GISVEC(A68_VC ,CPBAAMM,BPBAAMM,23)
static A68_189   NPBAAMM = {"Initialise"}; 
A_GISVEC(A68_VC ,OPBAAMM,NPBAAMM,10)
static A68_196   XPBAAMM = {"Initfile "}; 
A_GISVEC(A68_VC ,ZPBAAMM,XPBAAMM,9)
static A68_189   EQBAAMM = {"Initialise"}; 
A_GISVEC(A68_VC ,FQBAAMM,EQBAAMM,10)
static A68_194   HQBAAMM = {"Detach"}; 
A_GISVEC(A68_VC ,IQBAAMM,HQBAAMM,6)
static A68_195   JQBAAMM = {"Detached"}; 
A_GISVEC(A68_VC ,KQBAAMM,JQBAAMM,8)
static A68_194   MQBAAMM = {"Define"}; 
A_GISVEC(A68_VC ,NQBAAMM,MQBAAMM,6)
static A68_197   JRBAAMM = {"Symbol "}; 
A_GISVEC(A68_VC ,KRBAAMM,JRBAAMM,7)
static A68_256   ORBAAMM = {" is local and cannot be re-defined."}; 
A_GISVEC(A68_VC ,PRBAAMM,ORBAAMM,35)
static A68_95   WRBAAMM = {"Diag"}; 
A_GISVEC(A68_VC ,XRBAAMM,WRBAAMM,4)
static A68_257   ZRBAAMM = {"Error in database: "}; 
A_GISVEC(A68_VC ,ASBAAMM,ZRBAAMM,19)
static A68_258   ESBAAMM = {" not recognised."}; 
A_GISVEC(A68_VC ,FSBAAMM,ESBAAMM,16)
static A68_215   NSBAAMM = {" database file "}; 
A_GISVEC(A68_VC ,OSBAAMM,NSBAAMM,15)
static A68_245   MUBAAMM = {"Create database file "}; 
A_GISVEC(A68_VC ,NUBAAMM,MUBAAMM,21)
static A68_195   WUBAAMM = {"Version "}; 
A_GISVEC(A68_VC ,XUBAAMM,WUBAAMM,8)
static A68_189   FVBAAMM = {"Initialise"}; 
A_GISVEC(A68_VC ,GVBAAMM,FVBAAMM,10)
static A68_190   IVBAAMM = {"Initialise "}; 
A_GISVEC(A68_VC ,JVBAAMM,IVBAAMM,11)
static A68_191   JWBAAMM = {"     "}; 
A_GISVEC(A68_VC ,KWBAAMM,JWBAAMM,5)
static A68_191   EXBAAMM = {"Decs "}; 
A_GISVEC(A68_VC ,FXBAAMM,EXBAAMM,5)
static A68_191   IXBAAMM = {"Prog "}; 
A_GISVEC(A68_VC ,JXBAAMM,IXBAAMM,5)
static A68_95   PYBAAMM = {"Uses"}; 
A_GISVEC(A68_VC ,QYBAAMM,PYBAAMM,4)
static A68_197   KZBAAMM = {"Define "}; 
A_GISVEC(A68_VC ,LZBAAMM,KZBAAMM,7)
static A68_192   QZBAAMM = {" \""}; 
A_GISVEC(A68_VC ,RZBAAMM,QZBAAMM,2)
static A68_192   ZZBAAMM = {"\"~"}; 
A_GISVEC(A68_VC ,AACAAMM,ZZBAAMM,2)
static A68_95   ZACAAMM = {".tmp"}; 
A_GISVEC(A68_VC ,BBCAAMM,ZACAAMM,4)
static A68_189   ZCCAAMM = {"Attribute "}; 
A_GISVEC(A68_VC ,ADCAAMM,ZCCAAMM,10)
static A68_190   FECAAMM = {"Initialise "}; 
A_GISVEC(A68_VC ,GECAAMM,FECAAMM,11)
static A68_214   RECAAMM = {"Writing database file "}; 
A_GISVEC(A68_VC ,SECAAMM,RECAAMM,22)
static A68_195   BFCAAMM = {"Version "}; 
A_GISVEC(A68_VC ,CFCAAMM,BFCAAMM,8)
static A68_195   JFCAAMM = {"Initfile"}; 
A_GISVEC(A68_VC ,KFCAAMM,JFCAAMM,8)
static A68_95   LFCAAMM = {".tmx"}; 
A_GISVEC(A68_VC ,NFCAAMM,LFCAAMM,4)
static A68_264   KGCAAMM = {"Saving detached modules in file "}; 
A_GISVEC(A68_VC ,LGCAAMM,KGCAAMM,32)
static A68_195   UGCAAMM = {"Version "}; 
A_GISVEC(A68_VC ,VGCAAMM,UGCAAMM,8)
static A68_197   DHCAAMM = {"Detach "}; 
A_GISVEC(A68_VC ,EHCAAMM,DHCAAMM,7)
#define LHCAAMM_unknown_tok 0
#define MHCAAMM_name_tok 1
#define NHCAAMM_program_tok 2
#define OHCAAMM_decs_tok 3
#define PHCAAMM_use_tok 4
#define QHCAAMM_begin_tok 5
#define RHCAAMM_context_tok 6
#define SHCAAMM_void_tok 7
#define THCAAMM_comma_tok 8
#define UHCAAMM_colon_tok 9
static A68_197   WHCAAMM = {"PROGRAM"}; 
A_GISVEC(A68_VC ,XHCAAMM,WHCAAMM,7)
static A68_95   YHCAAMM = {"DECS"}; 
A_GISVEC(A68_VC ,ZHCAAMM,YHCAAMM,4)
static A68_193   AICAAMM = {"USE"}; 
A_GISVEC(A68_VC ,BICAAMM,AICAAMM,3)
static A68_191   CICAAMM = {"BEGIN"}; 
A_GISVEC(A68_VC ,DICAAMM,CICAAMM,5)
static A68_197   EICAAMM = {"CONTEXT"}; 
A_GISVEC(A68_VC ,FICAAMM,EICAAMM,7)
static A68_95   GICAAMM = {"VOID"}; 
A_GISVEC(A68_VC ,HICAAMM,GICAAMM,4)
static A68_265  JICAAMM_reserved_words;
static A68_206   AJCAAMM = {""}; 
A_GISVEC(A68_VC ,BJCAAMM,AJCAAMM,0)
static A68_268   QJCAAMM = {"Read module:- "}; 
A_GISVEC(A68_VC ,RJCAAMM,QJCAAMM,14)
static A68_190   FKCAAMM = {"End of file"}; 
A_GISVEC(A68_VC ,GKCAAMM,FKCAAMM,11)
static A68_272   KNCAAMM = {"Used module name expected"}; 
A_GISVEC(A68_VC ,LNCAAMM,KNCAAMM,25)
static A68_273   ZNCAAMM = {"Conflict of stars in use list"}; 
A_GISVEC(A68_VC ,AOCAAMM,ZNCAAMM,29)
static A68_275   IOCAAMM = {"Conflict of stars for module name"}; 
A_GISVEC(A68_VC ,JOCAAMM,IOCAAMM,33)
static A68_275   EPCAAMM = {"Conflict of stars for module name"}; 
A_GISVEC(A68_VC ,FPCAAMM,EPCAAMM,33)
static A68_197   TPCAAMM = {"Module "}; 
A_GISVEC(A68_VC ,UPCAAMM,TPCAAMM,7)
static A68_200   YPCAAMM = {" must be DECS"}; 
A_GISVEC(A68_VC ,ZPCAAMM,YPCAAMM,13)
static A68_216   HQCAAMM = {"     Module "}; 
A_GISVEC(A68_VC ,IQCAAMM,HQCAAMM,12)
static A68_268   MQCAAMM = {" already read,"}; 
A_GISVEC(A68_VC ,NQCAAMM,MQCAAMM,14)
static A68_249   YQCAAMM = {"All versions must be of the same type"}; 
A_GISVEC(A68_VC ,ZQCAAMM,YQCAAMM,37)
static A68_278   BRCAAMM = {"Module name expected"}; 
A_GISVEC(A68_VC ,CRCAAMM,BRCAAMM,20)
static A68_189   LRCAAMM = {"     Modul"}; 
A_GISVEC(A68_VC ,MRCAAMM,LRCAAMM,10)
static A68_196   BSCAAMM = {" analysed"}; 
A_GISVEC(A68_VC ,CSCAAMM,BSCAAMM,9)
static A68_258   LSCAAMM = {"No algol heading"}; 
A_GISVEC(A68_VC ,MSCAAMM,LSCAAMM,16)
typedef struct   /* env of non-global proc */
{
A68_VC  Name;
} QLAAAMM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Before;
A_PAD_BOOL(PAD_51)
} BMAAAMM_move_action;
typedef struct   /* env of non-global proc */
{
A68_INT  State;
A_PAD_INT(PAD_52)
} ECBAAMM_action;
typedef struct   /* env of non-global proc */
{
A68_VC  Name;
} OCBAAMM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * JDBAAMM_m_count;
A68_BOOL * IDBAAMM_mod_changed;
A68_BOOL * GDBAAMM_env_changed;
} ODBAAMM_action;
typedef struct   /* env of non-global proc */
{
A68_jmp_buf  AEBAAMM_nofile;
A_PAD_jmp_buf(PAD_53)
} HEBAAMM_trap;
typedef struct   /* env of non-global proc */
{
A68_INT * LEBAAMM_module_number;
} QEBAAMM_cnt_module;
typedef struct   /* env of non-global proc */
{
A68_VC  Stars;
A68_BOOL * LFBAAMM_has_recursion;
A68_INT * MFBAAMM_d_cnt;
A68_INT * NFBAAMM_p_cnt;
A68_239  QFBAAMM_do_setlevels;
} SFBAAMM_do_setlevels;
typedef struct   /* env of non-global proc */
{
int dummy;
} TIBAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * AJBAAMM_continue;
A68_INT * ZIBAAMM_cpos;
A68_INT * YIBAAMM_buftop;
A68_92 * PIBAAMM_dbfile;
A68_VC  WIBAAMM_buffer;
A68_97  Msg;
} DJBAAMM_next_char;
typedef struct   /* env of non-global proc */
{
A68_152  BJBAAMM_next_char;
A68_BOOL * AJBAAMM_continue;
A68_INT * ZIBAAMM_cpos;
A68_VC  WIBAAMM_buffer;
} RJBAAMM_next_item;
typedef struct   /* env of non-global proc */
{
A68_152  BJBAAMM_next_char;
A68_INT * ZIBAAMM_cpos;
} JKBAAMM_read_star;
typedef struct   /* env of non-global proc */
{
A68_51  PJBAAMM_next_item;
A68_97  Msg;
} UKBAAMM_external_database;
typedef struct   /* env of non-global proc */
{
A68_251  HKBAAMM_read_star;
A68_51  PJBAAMM_next_item;
A68_BOOL * OIBAAMM_have_signature;
A68_97  Msg;
A68_152  BJBAAMM_next_char;
A68_INT * ZIBAAMM_cpos;
A68_180 ** NIBAAMM_current_module;
A68_252  SKBAAMM_external_database;
A68_BITS  Src_tag;
A_PAD_BITS(PAD_55)
} SLBAAMM_read_database_line;
typedef struct   /* env of non-global proc */
{
A68_34 * Db_chan;
A68_CHAR * UVBAAMM_sep;
} AWBAAMM_put_list;
typedef struct   /* env of non-global proc */
{
A68_INT * VVBAAMM_module_count;
A68_34 * Db_chan;
A68_CHAR * UVBAAMM_sep;
A68_237  YVBAAMM_put_list;
} CXBAAMM_put_module;
typedef struct   /* env of non-global proc */
{
int dummy;
} HBCAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_92 ** DBCAAMM_database;
A68_97  Msg;
} PBCAAMM_db_line;
typedef struct   /* env of non-global proc */
{
A68_34 * UBCAAMM_db_chan;
} ZBCAAMM_put_attributes;
typedef struct   /* env of non-global proc */
{
A68_34 * UBCAAMM_db_chan;
} DECAAMM_write_init;
typedef struct   /* env of non-global proc */
{
int dummy;
} VFCAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_92 ** RFCAAMM_auxfile;
A68_97  Msg;
} DGCAAMM_aux_line;
typedef struct   /* env of non-global proc */
{
int dummy;
} TICAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * IJCAAMM_errors;
} MJCAAMM_failed;
typedef struct   /* env of non-global proc */
{
A68_92 * PICAAMM_mf;
A68_VC  WICAAMM_buffer;
A68_INT * YICAAMM_buftop;
A68_97  Msg;
A68_36  KJCAAMM_failed;
A68_jmp_buf  NICAAMM_end_of_file;
A_PAD_jmp_buf(PAD_56)
A68_INT * ZICAAMM_cpos;
A68_178 * GJCAAMM_star_char;
} AKCAAMM_nextline;
typedef struct   /* env of non-global proc */
{
A68_INT * ZICAAMM_cpos;
A68_INT * YICAAMM_buftop;
A68_VC  WICAAMM_buffer;
A68_152  OKCAAMM_nextchar;
A68_129  YJCAAMM_nextline;
} QKCAAMM_nextchar;
typedef struct   /* env of non-global proc */
{
A68_152  OKCAAMM_nextchar;
A68_INT * ZICAAMM_cpos;
A68_178 * GJCAAMM_star_char;
} WKCAAMM_get_basic;
typedef struct   /* env of non-global proc */
{
A68_270  JMCAAMM_install_use_list;
} LMCAAMM_install_use_list;
typedef struct   /* env of non-global proc */
{
A68_269  UKCAAMM_get_basic;
A68_36  KJCAAMM_failed;
A68_270  JMCAAMM_install_use_list;
A68_182 ** HJCAAMM_local_modules;
} ZMCAAMM_read_uselist;
typedef struct   /* env of non-global proc */
{
A68_36  KJCAAMM_failed;
} HOCAAMM_check_star_clash;
typedef struct   /* env of non-global proc */
{
A68_182 ** HJCAAMM_local_modules;
A68_VC  FJCAAMM_filename;
A68_36  KJCAAMM_failed;
} QOCAAMM_make_module;
typedef struct   /* env of non-global proc */
{
A68_VC  Stars;
A68_BOOL * LFBAAMM_has_recursion;
A68_INT  Level;
A_PAD_INT(PAD_54)
A68_INT * MFBAAMM_d_cnt;
A68_INT * NFBAAMM_p_cnt;
A68_239  QFBAAMM_do_setlevels;
} YFBAAMM_set_action;
typedef struct   /* env of non-global proc */
{
A68_251  HKBAAMM_read_star;
} YLBAAMM_check_module;
typedef struct   /* env of non-global proc */
{
int dummy;
} YNBAAMM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SPBAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_177 * QQBAAMM_sym;
A68_36  SQBAAMM_addtxt;
A68_51  PJBAAMM_next_item;
} UQBAAMM_addtxt;
typedef struct   /* env of non-global proc */
{
A68_180 * Mm;
} HTBAAMM_set_usedby_action;
typedef struct   /* env of non-global proc */
{
int dummy;
} ECCAAMM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MCCAAMM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BLCAAMM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TNCAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_180 ** UOCAAMM_module;
A68_VC  FJCAAMM_filename;
A68_182 * SOCAAMM_ml;
A68_183  Basic;
A68_182 ** HJCAAMM_local_modules;
} YOCAAMM_update_module;
typedef struct   /* env of non-global proc */
{
int dummy;
} MPCAAMM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IMBAAMM_generator;

A_STATIC A68_VOID  ZAAAAMM_generator(A68_BOOL  YAAAAMM_anonymous, A68_184  *ReturnedValue);

A_STATIC A68_VOID  BBAAAMM_generator(A68_BOOL  ABAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  QBAAAMM_includes(A68_178  A, A68_178  B);

A_STATIC A68_VOID  YBAAAMM_generator(A68_BOOL  XBAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ECAAAMM_generator(A68_BOOL  DCAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NCAAAMM_generator(A68_BOOL  MCAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WCAAAMM_generator(A68_BOOL  VCAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FDAAAMM_generator(A68_BOOL  EDAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ODAAAMM_generator(A68_BOOL  NDAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XDAAAMM_generator(A68_BOOL  WDAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GEAAAMM_generator(A68_BOOL  FEAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PEAAAMM_generator(A68_BOOL  OEAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YEAAAMM_generator(A68_BOOL  XEAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HFAAAMM_generator(A68_BOOL  GFAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QFAAAMM_generator(A68_BOOL  PFAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZFAAAMM_generator(A68_BOOL  YFAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IGAAAMM_generator(A68_BOOL  HGAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RGAAAMM_generator(A68_BOOL  QGAAAMM_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  GHAAAMM_flagon(A68_177 * Flag);

A68_BOOL  KHAAAMM_flagoff(A68_177 * Flag);

A_STATIC A68_VOID  RJAAAMM_generator(A68_BOOL  QJAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TKAAAMM_generator(A68_BOOL  SKAAAMM_anonymous, A68_164  *ReturnedValue);

A68_177 * ALAAAMM_scansymbols(A68_VC  Prefix, A68_199  Action);

A68_177 * LLAAAMM_findsymbol(A68_VC  Name);

A_STATIC A68_BOOL  PLAAAMM_anonymous(A68_177 * S, void *NonLocals);

A68_BOOL  WLAAAMM_move_symbol_pointer(A68_VC  Name, A68_BOOL  Before);

A_STATIC A68_BOOL  AMAAAMM_move_action(A68_177 * S, void *NonLocals);

A68_VOID  GMAAAMM_mark_action_symbol(A68_177 * Sym);

A68_177 * VMAAAMM_define_symbol(A68_VC  Name, A68_VC  Text, A68_BITS  Tags);

A68_INT  KNAAAMM_undefine_symbol(A68_VC  Name);

A_STATIC A68_BOOL  XNAAAMM_symbols_changed(A68_BITS  Tag);

A_STATIC A68_VOID  ZNAAAMM_initialise_std_symbols(void);

A_STATIC A68_VOID  CPAAAMM_default_off_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EPAAAMM_default_on_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GPAAAMM_default_debug_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IPAAAMM_default_star_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KPAAAMM_default_heap_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MPAAAMM_default_exename_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OPAAAMM_default_optimise_proc(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AQAAAMM_generator(A68_BOOL  ZPAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JQAAAMM_generator(A68_BOOL  IQAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SQAAAMM_generator(A68_BOOL  RQAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BRAAAMM_generator(A68_BOOL  ARAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KRAAAMM_generator(A68_BOOL  JRAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TRAAAMM_generator(A68_BOOL  SRAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CSAAAMM_generator(A68_BOOL  BSAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LSAAAMM_generator(A68_BOOL  KSAAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  USAAAMM_generator(A68_BOOL  TSAAAMM_anonymous, A68_181  *ReturnedValue);

A68_VOID  ATAAAMM_initialise_mm_basics(A68_218  Os, A68_VC  *ReturnedValue);

A68_VOID  GTAAAMM_attribute_name(A68_INT  Attribute_number, A68_VC  *ReturnedValue);

A68_VOID  KTAAAMM_attribute_value(A68_180 * M, A68_INT  Attribute_number, A68_VC  *ReturnedValue);

A68_BOOL  QTAAAMM_attribute_state(A68_180 * M, A68_INT  Attribute_number);

A68_VOID  YTAAAMM_set_attribute(A68_180 * M, A68_INT  Attribute_number, A68_223  Value);

A68_VOID  LUAAAMM_clear_attribute(A68_180 * M, A68_INT  Attribute_number);

A68_BOOL  SUAAAMM_permanent_attribute(A68_180 * M, A68_INT  Attribute_number);

A68_BOOL  ZUAAAMM_attribute_marked(A68_180 * M, A68_INT  Attribute_number);

A_STATIC A68_VOID  GVAAAMM_initialise_attribute(A68_180 * M, A68_INT  Attribute_number, A68_VC  Value);

A_STATIC A68_BOOL  XVAAAMM_fetch_attribute(A68_180 * M, A68_INT  Attribute_number);

A_STATIC A68_BOOL  JWAAAMM_attribute_changed(A68_180 * M, A68_INT  Attribute_number);

A68_VOID  UWAAAMM_set_lowercase(A68_VC  Str);

A68_BOOL  AXAAAMM_can_query(void);

A68_BOOL  JXAAAMM_query(A68_VC  Question, A68_INT  Default, A68_97  Msg);

A_STATIC A68_BOOL  WYAAAMM_is_in_string(A68_CHAR  Required, A68_VC  Str);

A68_VOID  EZAAAMM_not_found(A68_VC  Heading, A68_VC  Name, A68_VC  *ReturnedValue);

A68_VOID  SZAAAMM_mnot_found(A68_VC  Name, A68_VC  *ReturnedValue);

A68_VOID  YZAAAMM_fnot_found(A68_VC  Name, A68_VC  *ReturnedValue);

A68_BOOL  FABAAMM_check_star(A68_178  S, A68_VC  Stars);

A68_VOID  LABAAMM_shortname(A68_120  Fn, A68_VC  *ReturnedValue);

A68_VOID  XABAAMM_fullname(A68_120  Fn, A68_VC  *ReturnedValue);

A68_182 * SBBAAMM_scanmodules(A68_182 * List, A68_237  Action);

A68_VOID  YBBAAMM_mark_modules(A68_182 * List, A68_INT  State);

A_STATIC A68_BOOL  DCBAAMM_action(A68_180 * M, A68_178  S, void *NonLocals);

A68_182 * JCBAAMM_findmodule(A68_182 * List, A68_VC  Name);

A_STATIC A68_BOOL  NCBAAMM_anonymous(A68_180 * M, A68_178  S, void *NonLocals);

A_STATIC A68_182 * UCBAAMM_add_module(A68_182 ** Head, A68_180 * M, A68_178  S);

A68_INT  DDBAAMM_database_modified(void);

A_STATIC A68_BOOL  NDBAAMM_action(A68_180 * M, A68_178  S, void *NonLocals);

A68_BOOL  ZDBAAMM_file_exists(A68_VC  Name, A68_97  Msg);

A_STATIC A68_VOID  GEBAAMM_trap(A68_98  N, A68_46  P, void *NonLocals);

A68_INT  KEBAAMM_set_modulenumbers(void);

A_STATIC A68_BOOL  PEBAAMM_cnt_module(A68_180 * Module, A68_178  Star_char, void *NonLocals);

A68_182 * ZEBAAMM_order_modules(A68_182 * List, A68_INT  Mode);

A68_VOID  KFBAAMM_set_levels(A68_VC  Stars, A68_97  Msg);

A_STATIC A68_VOID  RFBAAMM_do_setlevels(A68_182 * List, A68_INT  Level, void *NonLocals);

A_STATIC A68_BOOL  XFBAAMM_set_action(A68_180 * Module, A68_178  St, void *NonLocals);

A_STATIC A68_BOOL  VGBAAMM_clear_levels(A68_180 * M, A68_178  S);

A_STATIC A68_VOID  MIBAAMM_read_database_file(A68_VC  Filename, A68_VC  Mode_chars, A68_BITS  Src_tag, A68_97  Msg);

A_STATIC A68_VOID  SIBAAMM_generator(A68_BOOL  QIBAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_CHAR  CJBAAMM_next_char(void *NonLocals);

A_STATIC A68_VOID  QJBAAMM_next_item(A68_INT  Mode, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IKBAAMM_read_star(A68_178  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TKBAAMM_external_database(A68_VC  Sort, A68_VC  Def_type, A68_BITS  Tag, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RLBAAMM_read_database_line(void *NonLocals);

A_STATIC A68_182 * XLBAAMM_check_module(A68_182 ** Head, A68_VC  Name, void *NonLocals);

A_STATIC A68_VOID  HMBAAMM_generator(A68_BOOL  FMBAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XNBAAMM_generator(A68_BOOL  VNBAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RPBAAMM_generator(A68_BOOL  PPBAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TQBAAMM_addtxt(A68_VC  Txt, void *NonLocals);

A68_VOID  XSBAAMM_set_usedby_lists(A68_182 * List);

A_STATIC A68_BOOL  BTBAAMM_module_action(A68_180 * Mm, A68_178  Ss);

A_STATIC A68_BOOL  GTBAAMM_set_usedby_action(A68_180 * M, A68_178  S, void *NonLocals);

A68_VOID  PTBAAMM_clear_usedby_lists(A68_182 * List);

A_STATIC A68_BOOL  TTBAAMM_remove_old_usedby(A68_180 * M, A68_178  S);

A68_BOOL  BUBAAMM_read_database(A68_VC  Dbname, A68_VC  Mode_chars, A68_BITS  Tag, A68_97  Msg);

A68_VOID  HUBAAMM_create_database(A68_VC  Dbname, A68_97  Msg);

A_STATIC A68_VOID  TVBAAMM_save_moduledata(A68_34 * Db_chan, A68_182 * List);

A_STATIC A68_BOOL  ZVBAAMM_put_list(A68_180 * M, A68_178  S, void *NonLocals);

A_STATIC A68_BOOL  BXBAAMM_put_module(A68_180 * M, A68_178  S, void *NonLocals);

A_STATIC A68_VOID  DZBAAMM_write_symbols(A68_34 * Db_chan, A68_BITS  Dst_tag);

A68_VOID  VACAAMM_save_database(A68_VC  Dbname, A68_VC  Dtname, A68_INT  Save_mode, A68_97  Msg);

A_STATIC A68_VOID  GBCAAMM_generator(A68_BOOL  EBCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OBCAAMM_db_line(A68_VC  Line, void *NonLocals);

A_STATIC A68_BOOL  YBCAAMM_put_attributes(A68_180 * M, A68_178  S, void *NonLocals);

A_STATIC A68_VOID  DCCAAMM_generator(A68_BOOL  BCCAAMM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LCCAAMM_generator(A68_BOOL  JCCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  CECAAMM_write_init(A68_177 * Sym, void *NonLocals);

A_STATIC A68_VOID  UFCAAMM_generator(A68_BOOL  SFCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CGCAAMM_aux_line(A68_VC  Line, void *NonLocals);

A68_BOOL  MICAAMM_read_module(A68_VC  Fname, A68_97  Msg);

A_STATIC A68_VOID  SICAAMM_generator(A68_BOOL  QICAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LJCAAMM_failed(A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  ZJCAAMM_nextline(void *NonLocals);

A_STATIC A68_CHAR  PKCAAMM_nextchar(void *NonLocals);

A_STATIC A68_VOID  VKCAAMM_get_basic(A68_183  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ALCAAMM_generator(A68_BOOL  YKCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KMCAAMM_install_use_list(A68_182 * Ml, A68_182 ** Uses, void *NonLocals);

A_STATIC A68_VOID  YMCAAMM_read_uselist(A68_178  Fs, void *NonLocals);

A_STATIC A68_VOID  SNCAAMM_generator(A68_BOOL  QNCAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  GOCAAMM_check_star_clash(A68_183  Basic, A68_182 * Ml, void *NonLocals);

A_STATIC A68_BOOL  POCAAMM_make_module(A68_183  Basic, A68_BOOL  Decs, void *NonLocals);

A_STATIC A68_VOID  XOCAAMM_update_module(A68_180 * M, void *NonLocals);

A_STATIC A68_VOID  LPCAAMM_generator(A68_BOOL  JPCAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HMBAAMM_generator(A68_BOOL  FMBAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((IMBAAMM_generator *)NonLocals)->x)
{ 
A68_181  JMBAAMM;  /* clause result */
A68_181  KMBAAMM;  /* OPERATORS - dynamic generator */
{ 
KMBAAMM.upb = YPAAAMM_max_attribute ;
( FMBAAMM_anonymous? A_VLOC(A68_179 ,KMBAAMM): A_VHEAP(A68_179 ,KMBAAMM) );
JMBAAMM = KMBAAMM;
} 
*ReturnedValue = (JMBAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  XFBAAMM_set_action(A68_180 * Module, A68_178  St, void *NonLocals)
#define NL(x) (((YFBAAMM_set_action *)NonLocals)->x)
{ 
A68_233  ZFBAAMM;  /* collateral clause result */
A68_52  CGBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DGBAAMM;  /* YIELD */
A68_52  EGBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FGBAAMM;  /* YIELD */
A68_52  IGBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JGBAAMM;  /* YIELD */
A68_52  KGBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  LGBAAMM;  /* procedure value */
A68_85  MGBAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL * NGBAAMM;  /* YIELD */
A68_INT * OGBAAMM;  /* clause result */
A68_INT * PGBAAMM;  /* YIELD */
A68_INT * QGBAAMM;  /* YIELD */
A68_INT * RGBAAMM;  /* YIELD */
A68_BOOL  SGBAAMM;  /* clause result */
A_PROC_ENTRY(set_action);
 /* line 777: */
 /* line 778: */
{ 
 /* line 780: */
if ( !FABAAMM_check_star(St, NL(Stars)) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 781: */
if ( ((*(&(Module->Marker)))!=0) )
{ 
 /* line 782: */
if ( !(*(&(Module->Recursive))) )
{ 
DGBAAMM = BGBAAMM ;
ZFBAAMM.data[0] = A_UNITE(CGBAAMM,mode7,7,DGBAAMM);
 /* line 783: */
FGBAAMM = (*(&(Module->Name))) ;
ZFBAAMM.data[1] = A_UNITE(EGBAAMM,mode7,7,FGBAAMM);
JGBAAMM = HGBAAMM ;
ZFBAAMM.data[2] = A_UNITE(IGBAAMM,mode7,7,JGBAAMM);
LGBAAMM.fn.fn_global = LRAAOSL_newline;
LGBAAMM.nonlocals = A68_NIL;
ZFBAAMM.data[3] = A_UNITE(KGBAAMM,mode12,12,LGBAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(MGBAAMM,ZFBAAMM,4,A68_52 ));
 /* line 784: */
 /* line 785: */
 /* line 786: */
NGBAAMM = (&(Module->Recursive)) ;
(*NL(LFBAAMM_has_recursion)) = (*NGBAAMM) = A68_TRUE;
} 
} 
else
{ 
 /* line 787: */
if ( ((*(&(Module->Level)))<NL(Level)) )
{ 
 /* line 788: */
if ( ((*(&(Module->Level)))==0) )
{ 
if ( (*(&(Module->Decs))) )
{ 
OGBAAMM = NL(MFBAAMM_d_cnt);
} 
else
{ 
 /* line 789: */
OGBAAMM = NL(NFBAAMM_p_cnt);
} 
(*OGBAAMM)+=1;
} 
 /* line 790: */
NIAAAMM_max_level = FVCAOST_max(NIAAAMM_max_level, NL(Level));
 /* line 791: */
PGBAAMM = (&(Module->Level)) ;
(*PGBAAMM) = NL(Level);
 /* line 792: */
QGBAAMM = (&(Module->Marker)) ;
(*QGBAAMM) = 1;
 /* line 793: */
A_CALLPROC(NL(QFBAAMM_do_setlevels),((*(&(Module->Usedby))), (NL(Level)+1)),((*(&(Module->Usedby))), (NL(Level)+1),(NL(QFBAAMM_do_setlevels)).nonlocals));
 /* line 794: */
 /* line 795: */
RGBAAMM = (&(Module->Marker)) ;
(*RGBAAMM) = 0;
} 
} 
} 
 /* line 796: */
 /* line 797: */
SGBAAMM = A68_TRUE;
} 
A_PROC_EXIT(set_action);
return( SGBAAMM );
} 
#undef NL
 /* line 923: */

A_STATIC A68_182 * XLBAAMM_check_module(A68_182 ** Head, A68_VC  Name, void *NonLocals)
#define NL(x) (((YLBAAMM_check_module *)NonLocals)->x)
{ 
A68_178  ZLBAAMM;  /* avoid structure result */
A68_178  AMBAAMM_star;
A68_182 * BMBAAMM_ml;
A68_180 * CMBAAMM_mu;
A68_180  DMBAAMM;  /* collateral clause result */
A68_VC  EMBAAMM;  /* avoid structure result */
A68_217  GMBAAMM_generator;   /* proc value of non-global proc */
A68_181  LMBAAMM;  /* avoid structure result */
A68_180 * MMBAAMM;  /* YIELD */
A68_182 * NMBAAMM;  /* clause result */
A_PROC_ENTRY(check_module);
 /* line 924: */
 /* line 925: */
{ 
A_CALLPROC(NL(HKBAAMM_read_star),( &ZLBAAMM),( &ZLBAAMM,(NL(HKBAAMM_read_star)).nonlocals));
AMBAAMM_star = ZLBAAMM;
 /* line 926: */
BMBAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, Name);
 /* line 927: */
 /* line 929: */
 /* line 930: */
if ( (BMBAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
 /* line 931: */
ZAAAOSI_makervc( Name, &EMBAAMM );
DMBAAMM.Name = EMBAAMM;
DMBAAMM.Filename = BCAAAMM_blankname;
DMBAAMM.Decs = A68_TRUE;
DMBAAMM.Recursive = A68_FALSE;
DMBAAMM.Analysed = A68_FALSE;
 /* line 932: */
DMBAAMM.State = UHAAAMM_std_state;
A_CLOSURE( GMBAAMM_generator, HMBAAMM_generator, IMBAAMM_generator );
 /* line 933: */
 /* line 934: */
A_CALLPROC(GMBAAMM_generator,(A68_FALSE, &LMBAAMM),(A68_FALSE, &LMBAAMM,(GMBAAMM_generator).nonlocals));
A_VASSIGN2(XSAAAMM_default_attributes,LMBAAMM,A68_179 ) ;
DMBAAMM.Attributes = LMBAAMM;
DMBAAMM.Level = 0;
DMBAAMM.Number = 0;
DMBAAMM.Marker = 0;
DMBAAMM.Uses = KBAAAMM_nilmodulelist;
DMBAAMM.Usedby = KBAAAMM_nilmodulelist;
MMBAAMM = A_HEAP(A68_180 ) ;
(*MMBAAMM) = DMBAAMM ;
CMBAAMM_mu = MMBAAMM;
 /* line 935: */
 /* line 936: */
 /* line 937: */
UCBAAMM_add_module((&WIAAAMM_modules), CMBAAMM_mu, NBAAAMM_blank_star);
} 
else
{ 
 /* line 938: */
CMBAAMM_mu = (*(&(BMBAAMM_ml->Module)));
} 
 /* line 939: */
 /* line 940: */
NMBAAMM = UCBAAMM_add_module(Head, CMBAAMM_mu, AMBAAMM_star);
} 
A_PROC_EXIT(check_module);
return( NMBAAMM );
} 
#undef NL

A_STATIC A68_VOID  XNBAAMM_generator(A68_BOOL  VNBAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((YNBAAMM_generator *)NonLocals)->x)
{ 
A68_181  ZNBAAMM;  /* clause result */
A68_181  AOBAAMM;  /* OPERATORS - dynamic generator */
{ 
AOBAAMM.upb = YPAAAMM_max_attribute ;
( VNBAAMM_anonymous? A_VLOC(A68_179 ,AOBAAMM): A_VHEAP(A68_179 ,AOBAAMM) );
ZNBAAMM = AOBAAMM;
} 
*ReturnedValue = (ZNBAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  RPBAAMM_generator(A68_BOOL  PPBAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SPBAAMM_generator *)NonLocals)->x)
{ 
A68_VC  TPBAAMM;  /* clause result */
A68_VC  UPBAAMM;  /* OPERATORS - dynamic generator */
{ 
UPBAAMM.upb = 10 ;
( PPBAAMM_anonymous? A_VLOC(A68_CHAR ,UPBAAMM): A_VHEAP(A68_CHAR ,UPBAAMM) );
TPBAAMM = UPBAAMM;
} 
*ReturnedValue = (TPBAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  TQBAAMM_addtxt(A68_VC  Txt, void *NonLocals)
#define NL(x) (((UQBAAMM_addtxt *)NonLocals)->x)
{ 
A68_INT  VQBAAMM_top;
A68_BOOL  WQBAAMM;  /* optbool result */
A68_BOOL  XQBAAMM_more;
A68_228  YQBAAMM;  /* collateral clause result */
A68_52  ZQBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ARBAAMM;  /* YIELD */
A68_VC  BRBAAMM;  /* OPERATORS - trim index */
A68_52  CRBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DRBAAMM;  /* YIELD */
A68_85  ERBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  FRBAAMM;  /* avoid structure result */
A68_VC * GRBAAMM;  /* YIELD */
A68_VC  HRBAAMM;  /* avoid structure result */
A_PROC_ENTRY(addtxt);
 /* line 1042: */
 /* line 1043: */
{ 
VQBAAMM_top = Txt.upb;
 /* line 1044: */
WQBAAMM = (VQBAAMM_top>0);
if ( WQBAAMM )
{WQBAAMM = (A_VINDEX(Txt,VQBAAMM_top)=='~');
}
XQBAAMM_more = WQBAAMM;
 /* line 1046: */
if ( XQBAAMM_more )
{ 
VQBAAMM_top-=1;
} 
 /* line 1047: */
 /* line 1048: */
if ( (VQBAAMM_top>2) )
{ 
ARBAAMM = (*(&(NL(QQBAAMM_sym)->Text))) ;
YQBAAMM.data[0] = A_UNITE(ZQBAAMM,mode7,7,ARBAAMM);
DRBAAMM = A_VTRIM(BRBAAMM,(Txt),A_VTSCRIPT(&(BRBAAMM.upb),(Txt).upb,2,(VQBAAMM_top-1))) ;
YQBAAMM.data[1] = A_UNITE(CRBAAMM,mode7,7,DRBAAMM);
 /* line 1049: */
UJBAOSL_oneline( A_HISVEC(ERBAAMM,YQBAAMM,2,A68_52 ), &FRBAAMM );
GRBAAMM = (&(NL(QQBAAMM_sym)->Text)) ;
(*GRBAAMM) = FRBAAMM;
} 
 /* line 1050: */
if ( XQBAAMM_more )
{ 
 /* line 1051: */
A_CALLPROC(NL(PJBAAMM_next_item),(KJBAAMM_text_mode, &HRBAAMM),(KJBAAMM_text_mode, &HRBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
A_CALLPROC(NL(SQBAAMM_addtxt),(HRBAAMM),(HRBAAMM,(NL(SQBAAMM_addtxt)).nonlocals));
} 
} 
A_PROC_EXIT(addtxt);
return;
} 
#undef NL

A_STATIC A68_BOOL  GTBAAMM_set_usedby_action(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((HTBAAMM_set_usedby_action *)NonLocals)->x)
{ 
A68_182  ITBAAMM;  /* collateral clause result */
A68_182 * JTBAAMM;  /* YIELD */
A68_182 ** KTBAAMM;  /* YIELD */
A68_BOOL  LTBAAMM;  /* clause result */
A_PROC_ENTRY(set_usedby_action);
 /* line 1080: */
 /* line 1081: */
{ 
ITBAAMM.Module = NL(Mm);
ITBAAMM.Star = S;
ITBAAMM.Rest = (*(&(M->Usedby)));
JTBAAMM = A_HEAP(A68_182 ) ;
(*JTBAAMM) = ITBAAMM ;
KTBAAMM = (&(M->Usedby)) ;
(*KTBAAMM) = JTBAAMM;
 /* line 1082: */
 /* line 1083: */
LTBAAMM = A68_TRUE;
} 
A_PROC_EXIT(set_usedby_action);
return( LTBAAMM );
} 
#undef NL

A_STATIC A68_VOID  DCCAAMM_generator(A68_BOOL  BCCAAMM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ECCAAMM_generator *)NonLocals)->x)
{ 
A68_32  FCCAAMM;  /* clause result */
A68_32  GCCAAMM;  /* OPERATORS - dynamic generator */
{ 
GCCAAMM.upb = YPAAAMM_max_attribute ;
( BCCAAMM_anonymous? A_VLOC(A68_INT ,GCCAAMM): A_VHEAP(A68_INT ,GCCAAMM) );
FCCAAMM = GCCAAMM;
} 
*ReturnedValue = (FCCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  LCCAAMM_generator(A68_BOOL  JCCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MCCAAMM_generator *)NonLocals)->x)
{ 
A68_VC  NCCAAMM;  /* clause result */
A68_VC  OCCAAMM;  /* OPERATORS - dynamic generator */
{ 
OCCAAMM.upb = YPAAAMM_max_attribute ;
( JCCAAMM_anonymous? A_VLOC(A68_CHAR ,OCCAAMM): A_VHEAP(A68_CHAR ,OCCAAMM) );
NCCAAMM = OCCAAMM;
} 
*ReturnedValue = (NCCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  ALCAAMM_generator(A68_BOOL  YKCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BLCAAMM_generator *)NonLocals)->x)
{ 
A68_VC  CLCAAMM;  /* clause result */
A68_VC  DLCAAMM;  /* OPERATORS - dynamic generator */
{ 
DLCAAMM.upb = NHAAAMM_bsize ;
( YKCAAMM_anonymous? A_VLOC(A68_CHAR ,DLCAAMM): A_VHEAP(A68_CHAR ,DLCAAMM) );
CLCAAMM = DLCAAMM;
} 
*ReturnedValue = (CLCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  SNCAAMM_generator(A68_BOOL  QNCAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNCAAMM_generator *)NonLocals)->x)
{ 
A68_181  UNCAAMM;  /* clause result */
A68_181  VNCAAMM;  /* OPERATORS - dynamic generator */
{ 
VNCAAMM.upb = YPAAAMM_max_attribute ;
( QNCAAMM_anonymous? A_VLOC(A68_179 ,VNCAAMM): A_VHEAP(A68_179 ,VNCAAMM) );
UNCAAMM = VNCAAMM;
} 
*ReturnedValue = (UNCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  XOCAAMM_update_module(A68_180 * M, void *NonLocals)
#define NL(x) (((YOCAAMM_update_module *)NonLocals)->x)
{ 
A68_182 ** ZOCAAMM;  /* YIELD */
A68_VC * APCAAMM;  /* YIELD */
A68_178 * BPCAAMM;  /* YIELD */
A68_INT * CPCAAMM;  /* YIELD */
A68_BOOL * DPCAAMM;  /* YIELD */
A_PROC_ENTRY(update_module);
 /* line 1542: */
 /* line 1543: */
{ 
(*NL(UOCAAMM_module)) = M;
 /* line 1544: */
ZOCAAMM = (&((*NL(UOCAAMM_module))->Uses)) ;
(*ZOCAAMM) = KBAAAMM_nilmodulelist;
 /* line 1545: */
APCAAMM = (&((*NL(UOCAAMM_module))->Filename)) ;
(*APCAAMM) = NL(FJCAAMM_filename);
 /* line 1546: */
BPCAAMM = (&(NL(SOCAAMM_ml)->Star)) ;
(*BPCAAMM) = NL(Basic).Star;
 /* line 1547: */
CPCAAMM = (&((*NL(UOCAAMM_module))->Marker)) ;
(*CPCAAMM) = 2;
 /* line 1548: */
DPCAAMM = (&((*NL(UOCAAMM_module))->Analysed)) ;
(*DPCAAMM) = A68_TRUE;
 /* line 1549: */
 /* line 1550: */
UCBAAMM_add_module(NL(HJCAAMM_local_modules), (*NL(UOCAAMM_module)), NL(Basic).Star);
} 
A_PROC_EXIT(update_module);
return;
} 
#undef NL

A_STATIC A68_VOID  LPCAAMM_generator(A68_BOOL  JPCAAMM_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((MPCAAMM_generator *)NonLocals)->x)
{ 
A68_181  NPCAAMM;  /* clause result */
A68_181  OPCAAMM;  /* OPERATORS - dynamic generator */
{ 
OPCAAMM.upb = YPAAAMM_max_attribute ;
( JPCAAMM_anonymous? A_VLOC(A68_179 ,OPCAAMM): A_VHEAP(A68_179 ,OPCAAMM) );
NPCAAMM = OPCAAMM;
} 
*ReturnedValue = (NPCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  BBAAAMM_generator(A68_BOOL  ABAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CBAAAMM;  /* clause result */
A68_VC  DBAAAMM;  /* OPERATORS - dynamic generator */
{ 
 /* line 75: */
DBAAAMM.upb = 0 ;
( ABAAAMM_anonymous? A_VLOC(A68_CHAR ,DBAAAMM): A_VHEAP(A68_CHAR ,DBAAAMM) );
CBAAAMM = DBAAAMM;
} 
*ReturnedValue = (CBAAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  PLAAAMM_anonymous(A68_177 * S, void *NonLocals)
#define NL(x) (((QLAAAMM_anonymous *)NonLocals)->x)
{ 
A68_BOOL  RLAAAMM;  /* clause result */
RLAAAMM = A_VC_NE((*(&(S->Name))),NL(Name));
return( RLAAAMM );
} 
#undef NL

A_STATIC A68_BOOL  AMAAAMM_move_action(A68_177 * S, void *NonLocals)
#define NL(x) (((BMAAAMM_move_action *)NonLocals)->x)
{ 
A68_BOOL  CMAAAMM;  /* clause result */
A_PROC_ENTRY(move_action);
 /* line 231: */
if ( NL(Before) )
{ 
 /* line 232: */
CMAAAMM = A68_FALSE;
} 
else
{ 
YIAAAMM_sym_tail = (&(S->Rest));
 /* line 233: */
CMAAAMM = A68_TRUE;
} 
A_PROC_EXIT(move_action);
return( CMAAAMM );
} 
#undef NL

A_STATIC A68_BOOL  DCBAAMM_action(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((ECBAAMM_action *)NonLocals)->x)
{ 
A68_INT * FCBAAMM;  /* YIELD */
A68_BOOL  GCBAAMM;  /* clause result */
A_PROC_ENTRY(action);
 /* line 652: */
 /* line 653: */
{ 
FCBAAMM = (&(M->Marker)) ;
(*FCBAAMM) = NL(State);
 /* line 654: */
 /* line 655: */
GCBAAMM = A68_TRUE;
} 
A_PROC_EXIT(action);
return( GCBAAMM );
} 
#undef NL

A_STATIC A68_BOOL  NCBAAMM_anonymous(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((OCBAAMM_anonymous *)NonLocals)->x)
{ 
A68_BOOL  PCBAAMM;  /* clause result */
PCBAAMM = A_VC_NE(NL(Name),(*(&(M->Name))));
return( PCBAAMM );
} 
#undef NL

A_STATIC A68_BOOL  NDBAAMM_action(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((ODBAAMM_action *)NonLocals)->x)
{ 
A68_BOOL  PDBAAMM;  /* optbool result */
A68_INT  QDBAAMM_an;
A68_INT  RDBAAMM;  /* to part of loop */
A68_BOOL  SDBAAMM;  /* optbool result */
A68_BOOL  TDBAAMM;  /* clause result */
A_PROC_ENTRY(action);
 /* line 689: */
 /* line 690: */
{ 
(*NL(JDBAAMM_m_count))+=1;
 /* line 691: */
PDBAAMM = (*NL(IDBAAMM_mod_changed));
if ( ! PDBAAMM )
{PDBAAMM = (*(&(M->Analysed)));
}
(*NL(IDBAAMM_mod_changed)) = PDBAAMM;
 /* line 692: */
RDBAAMM = YPAAAMM_max_attribute;
for ( QDBAAMM_an = 1;
QDBAAMM_an <= RDBAAMM;
QDBAAMM_an += 1 )
{ 
 /* line 693: */
 /* line 694: */
if ( !(!(*NL(GDBAAMM_env_changed))) ) break;
 /* line 695: */
(*NL(GDBAAMM_env_changed)) = JWAAAMM_attribute_changed(M, QDBAAMM_an);
}
 /* line 696: */
SDBAAMM = (*NL(IDBAAMM_mod_changed));
if ( SDBAAMM )
{SDBAAMM = (*NL(GDBAAMM_env_changed));
}
 /* line 697: */
TDBAAMM = !SDBAAMM;
} 
A_PROC_EXIT(action);
return( TDBAAMM );
} 
#undef NL

A_STATIC A68_VOID  GEBAAMM_trap(A68_98  N, A68_46  P, void *NonLocals)
#define NL(x) (((HEBAAMM_trap *)NonLocals)->x)
{ 
A_PROC_ENTRY(trap);
 /* line 715: */
 /* line 716: */
 /* line 717: */
siglongjmp(NL(AEBAAMM_nofile).label,1);
A_PROC_EXIT(trap);
return;
} 
#undef NL

A_STATIC A68_BOOL  PEBAAMM_cnt_module(A68_180 * Module, A68_178  Star_char, void *NonLocals)
#define NL(x) (((QEBAAMM_cnt_module *)NonLocals)->x)
{ 
A68_INT * REBAAMM;  /* YIELD */
A68_BOOL  SEBAAMM;  /* clause result */
A_PROC_ENTRY(cnt_module);
 /* line 732: */
{ 
REBAAMM = (&(Module->Number)) ;
(*REBAAMM) = (*NL(LEBAAMM_module_number))+=1;
SEBAAMM = A68_TRUE;
} 
A_PROC_EXIT(cnt_module);
return( SEBAAMM );
} 
#undef NL

A_STATIC A68_VOID  RFBAAMM_do_setlevels(A68_182 * List, A68_INT  Level, void *NonLocals)
#define NL(x) (((SFBAAMM_do_setlevels *)NonLocals)->x)
{ 
A68_237  WFBAAMM_set_action;   /* proc value of non-global proc */
A_PROC_ENTRY(do_setlevels);
 /* line 775: */
 /* line 776: */
{ 
A_CLOSURE( WFBAAMM_set_action, XFBAAMM_set_action, YFBAAMM_set_action );
(( YFBAAMM_set_action * ) ( WFBAAMM_set_action.nonlocals )) -> Stars = NL(Stars);
(( YFBAAMM_set_action * ) ( WFBAAMM_set_action.nonlocals )) -> LFBAAMM_has_recursion = NL(LFBAAMM_has_recursion);
(( YFBAAMM_set_action * ) ( WFBAAMM_set_action.nonlocals )) -> Level = Level;
(( YFBAAMM_set_action * ) ( WFBAAMM_set_action.nonlocals )) -> MFBAAMM_d_cnt = NL(MFBAAMM_d_cnt);
(( YFBAAMM_set_action * ) ( WFBAAMM_set_action.nonlocals )) -> NFBAAMM_p_cnt = NL(NFBAAMM_p_cnt);
(( YFBAAMM_set_action * ) ( WFBAAMM_set_action.nonlocals )) -> QFBAAMM_do_setlevels = NL(QFBAAMM_do_setlevels);
 /* line 799: */
 /* line 800: */
SBBAAMM_scanmodules(List, WFBAAMM_set_action);
} 
A_PROC_EXIT(do_setlevels);
return;
} 
#undef NL

A_STATIC A68_BOOL  VGBAAMM_clear_levels(A68_180 * M, A68_178  S)
{ 
A68_INT * WGBAAMM;  /* YIELD */
A68_INT * XGBAAMM;  /* YIELD */
A68_BOOL  YGBAAMM;  /* clause result */
A_PROC_ENTRY(clear_levels);
 /* line 803: */
 /* line 804: */
{ 
WGBAAMM = (&(M->Level)) ;
XGBAAMM = (&(M->Marker)) ;
(*XGBAAMM) = (*WGBAAMM) = 0;
 /* line 805: */
 /* line 806: */
YGBAAMM = A68_TRUE;
} 
A_PROC_EXIT(clear_levels);
return( YGBAAMM );
} 
#undef NL

A_STATIC A68_VOID  SIBAAMM_generator(A68_BOOL  QIBAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TIBAAMM_generator *)NonLocals)->x)
{ 
A68_VC  UIBAAMM;  /* clause result */
A68_VC  VIBAAMM;  /* OPERATORS - dynamic generator */
{ 
VIBAAMM.upb = OHAAAMM_bufmax ;
( QIBAAMM_anonymous? A_VLOC(A68_CHAR ,VIBAAMM): A_VHEAP(A68_CHAR ,VIBAAMM) );
UIBAAMM = VIBAAMM;
} 
*ReturnedValue = (UIBAAMM);
return;
} 
#undef NL

A_STATIC A68_CHAR  CJBAAMM_next_char(void *NonLocals)
#define NL(x) (((DJBAAMM_next_char *)NonLocals)->x)
{ 
A68_BOOL  EJBAAMM;  /* optbool result */
A68_35  FJBAAMM;  /* avoid structure result */
A68_INT  GJBAAMM;  /* YIELD */
A68_CHAR * HJBAAMM;  /* YIELD */
A68_CHAR  IJBAAMM;  /* clause result */
A68_INT  JJBAAMM;  /* YIELD */
A_PROC_ENTRY(next_char);
{ 
for ( ;; )
{ 
EJBAAMM = (*NL(AJBAAMM_continue));
if ( EJBAAMM )
{ /* line 840: */
EJBAAMM = ((*NL(ZIBAAMM_cpos))>=(*NL(YIBAAMM_buftop)));
}
 /* line 841: */
if ( !(EJBAAMM) ) break;
 /* line 842: */
SRBAOSI_read_line( NL(PIBAAMM_dbfile), NL(WIBAAMM_buffer), NL(YIBAAMM_buftop), NL(Msg), &FJBAAMM );
(*NL(AJBAAMM_continue)) = !PPBAOSI_(FJBAAMM, GPBAOSI_io_eof);
 /* line 843: */
(*NL(ZIBAAMM_cpos)) = 0;
 /* line 844: */
if ( !(*NL(AJBAAMM_continue)) )
{ 
(*NL(YIBAAMM_buftop)) = 0;
} 
 /* line 845: */
 /* line 846: */
GJBAAMM = (*NL(YIBAAMM_buftop))+=1 ;
HJBAAMM = (&A_VINDEX(NL(WIBAAMM_buffer),GJBAAMM)) ;
(*HJBAAMM) = QHAAAMM_lf;
}
 /* line 847: */
if ( (*NL(AJBAAMM_continue)) )
{ 
JJBAAMM = (*NL(ZIBAAMM_cpos))+=1 ;
IJBAAMM = (*(&A_VINDEX(NL(WIBAAMM_buffer),JJBAAMM)));
} 
else
{ 
 /* line 848: */
IJBAAMM = RHAAAMM_eof;
} 
} 
A_PROC_EXIT(next_char);
return( IJBAAMM );
} 
#undef NL

A_STATIC A68_VOID  QJBAAMM_next_item(A68_INT  Mode, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RJBAAMM_next_item *)NonLocals)->x)
{ 
A68_CHAR  SJBAAMM_c;
A68_BOOL  TJBAAMM;  /* optbool result */
A68_BOOL  UJBAAMM;  /* clause result */
A68_INT  VJBAAMM_start;
A68_BOOL  WJBAAMM;  /* optbool result */
A68_BOOL  XJBAAMM;  /* clause result */
A68_BOOL  YJBAAMM;  /* optbool result */
A68_BOOL  ZJBAAMM;  /* optbool result */
A68_BOOL  AKBAAMM;  /* optbool result */
A68_BOOL  BKBAAMM;  /* optbool result */
A68_BOOL  CKBAAMM;  /* clause result */
A68_INT  DKBAAMM_end;
A68_BOOL  EKBAAMM;  /* optbool result */
A68_VC  FKBAAMM;  /* clause result */
A68_VC  GKBAAMM;  /* OPERATORS - trim index */
A_PROC_ENTRY(next_item);
 /* line 856: */
 /* line 857: */
{ 
 /* line 859: */
for ( ;; )
{ 
SJBAAMM_c = A_CALLPROC(NL(BJBAAMM_next_char),(),((NL(BJBAAMM_next_char)).nonlocals));
TJBAAMM = (SJBAAMM_c==' ');
if ( ! TJBAAMM )
{TJBAAMM = (SJBAAMM_c==QHAAAMM_lf);
}
UJBAAMM = TJBAAMM;
if ( !UJBAAMM ) break;
/*SKIP*/;
}
 /* line 860: */
 /* line 861: */
if ( (*NL(AJBAAMM_continue)) )
{ 
VJBAAMM_start = (*NL(ZIBAAMM_cpos));
 /* line 863: */
for ( ;; )
{ 
 /* line 864: */
SJBAAMM_c = A_CALLPROC(NL(BJBAAMM_next_char),(),((NL(BJBAAMM_next_char)).nonlocals));
 /* line 865: */
 /* line 866: */
WJBAAMM = (SJBAAMM_c!=QHAAAMM_lf);
if ( WJBAAMM )
{switch ( Mode )
{ 
case 1: 
 /* line 867: */
XJBAAMM = (SJBAAMM_c!=' ');
break;
case 2: 
YJBAAMM = (SJBAAMM_c>='A');
if ( YJBAAMM )
{YJBAAMM = (SJBAAMM_c<='Z');
}
 /* line 868: */
if ( ! YJBAAMM )
{ZJBAAMM = (SJBAAMM_c>='a');
if ( ZJBAAMM )
{ZJBAAMM = (SJBAAMM_c<='z');
}
YJBAAMM = ZJBAAMM;
}
 /* line 869: */
if ( ! YJBAAMM )
{AKBAAMM = (SJBAAMM_c>='0');
if ( AKBAAMM )
{AKBAAMM = (SJBAAMM_c<='9');
}
YJBAAMM = AKBAAMM;
}
 /* line 870: */
if ( ! YJBAAMM )
{YJBAAMM = (SJBAAMM_c=='_');
}
 /* line 871: */
XJBAAMM = YJBAAMM;
break;
case 3: 
BKBAAMM = (SJBAAMM_c>='0');
if ( BKBAAMM )
{ /* line 872: */
BKBAAMM = (SJBAAMM_c<='9');
}
XJBAAMM = BKBAAMM;
break;
default: 
 /* line 873: */
 /* line 874: */
XJBAAMM = A68_TRUE;
break;
} 
WJBAAMM = XJBAAMM;
}
CKBAAMM = WJBAAMM;
if ( !CKBAAMM ) break;
/*SKIP*/;
}
 /* line 876: */
DKBAAMM_end = ((*NL(ZIBAAMM_cpos))-1);
 /* line 878: */
EKBAAMM = (SJBAAMM_c!=' ');
if ( EKBAAMM )
{EKBAAMM = (SJBAAMM_c!=QHAAAMM_lf);
}
if ( EKBAAMM )
{ 
(*NL(ZIBAAMM_cpos))-=1;
} 
 /* line 879: */
 /* line 880: */
 /* line 882: */
FKBAAMM = A_VTRIM(GKBAAMM,(NL(WIBAAMM_buffer)),A_VTSCRIPT(&(GKBAAMM.upb),(NL(WIBAAMM_buffer)).upb,VJBAAMM_start,DKBAAMM_end));
} 
else
{ 
 /* line 883: */
FKBAAMM = BCAAAMM_blankname;
} 
} 
A_PROC_EXIT(next_item);
*ReturnedValue = (FKBAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  IKBAAMM_read_star(A68_178  *ReturnedValue, void *NonLocals)
#define NL(x) (((JKBAAMM_read_star *)NonLocals)->x)
{ 
A68_CHAR  KKBAAMM_mode;
A68_BOOL  LKBAAMM;  /* clause result */
A68_BOOL  MKBAAMM;  /* optbool result */
A68_178  NKBAAMM;  /* collateral clause result */
A68_178  OKBAAMM;  /* clause result */
A_PROC_ENTRY(read_star);
{ 
 /* line 889: */
for ( ;; )
{ 
KKBAAMM_mode = A_CALLPROC(NL(BJBAAMM_next_char),(),((NL(BJBAAMM_next_char)).nonlocals));
LKBAAMM = (KKBAAMM_mode==' ');
if ( !LKBAAMM ) break;
/*SKIP*/;
}
 /* line 890: */
MKBAAMM = (KKBAAMM_mode=='*');
if ( ! MKBAAMM )
{MKBAAMM = (KKBAAMM_mode=='%');
}
 /* line 891: */
if ( MKBAAMM )
{ 
NKBAAMM.Mode = KKBAAMM_mode;
 /* line 892: */
 /* line 893: */
NKBAAMM.Value = A_CALLPROC(NL(BJBAAMM_next_char),(),((NL(BJBAAMM_next_char)).nonlocals));
OKBAAMM = NKBAAMM;
} 
else
{ 
(*NL(ZIBAAMM_cpos))-=1;
 /* line 894: */
 /* line 895: */
 /* line 896: */
OKBAAMM = NBAAAMM_blank_star;
} 
} 
A_PROC_EXIT(read_star);
*ReturnedValue = (OKBAAMM);
return;
} 
#undef NL
 /* line 899: */
 /* line 900: */

A_STATIC A68_VOID  TKBAAMM_external_database(A68_VC  Sort, A68_VC  Def_type, A68_BITS  Tag, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UKBAAMM_external_database *)NonLocals)->x)
{ 
A68_VC  VKBAAMM_dbfile_name;
A68_VC  WKBAAMM;  /* avoid structure result */
A68_VC  XKBAAMM;  /* avoid structure result */
A68_120  YKBAAMM;  /* avoid structure result */
A68_120  ZKBAAMM_fn;
A68_253  ALBAAMM;  /* collateral clause result */
A68_52  BLBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ELBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FLBAAMM;  /* YIELD */
A68_52  GLBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  HLBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  KLBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LLBAAMM;  /* YIELD */
A68_85  MLBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  NLBAAMM;  /* avoid structure result */
A68_46  OLBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PLBAAMM;  /* clause result */
A_PROC_ENTRY(external_database);
 /* line 901: */
 /* line 902: */
{ 
 /* line 904: */
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &WKBAAMM),(LJBAAMM_string_mode, &WKBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
ZAAAOSI_makervc( WKBAAMM, &XKBAAMM );
VKBAAMM_dbfile_name = XKBAAMM;
 /* line 905: */
if ( !VIAAAMM_case_sensitive )
{ 
UWAAAMM_set_lowercase(VKBAAMM_dbfile_name);
} 
 /* line 907: */
TNCAOSI_parse_filename( VKBAAMM_dbfile_name, Def_type, NL(Msg), &YKBAAMM );
ZKBAAMM_fn = YKBAAMM;
 /* line 909: */
 /* line 910: */
if ( ZDBAAMM_file_exists(ZKBAAMM_fn.Filename, NL(Msg)) )
{ 
 /* line 911: */
 /* line 912: */
MIBAAMM_read_database_file(ZKBAAMM_fn.Filename, Sort, Tag, NL(Msg));
} 
else
{ 
ALBAAMM.data[0] = A_UNITE(BLBAAMM,mode7,7,Sort);
FLBAAMM = DLBAAMM ;
ALBAAMM.data[1] = A_UNITE(ELBAAMM,mode7,7,FLBAAMM);
ALBAAMM.data[2] = A_UNITE(GLBAAMM,mode7,7,VKBAAMM_dbfile_name);
 /* line 913: */
ALBAAMM.data[3] = A_UNITE(HLBAAMM,mode7,7,Def_type);
LLBAAMM = JLBAAMM ;
ALBAAMM.data[4] = A_UNITE(KLBAAMM,mode7,7,LLBAAMM);
 /* line 914: */
UJBAOSL_oneline( A_HISVEC(MLBAAMM,ALBAAMM,5,A68_52 ), &NLBAAMM );
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(OLBAAMM,NLBAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(OLBAAMM,NLBAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 915: */
 /* line 916: */
PLBAAMM = VKBAAMM_dbfile_name;
} 
A_PROC_EXIT(external_database);
*ReturnedValue = (PLBAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  RLBAAMM_read_database_line(void *NonLocals)
#define NL(x) (((SLBAAMM_read_database_line *)NonLocals)->x)
{ 
A68_CHAR  TLBAAMM_c;
A68_254  WLBAAMM_check_module;   /* proc value of non-global proc */
A68_VC  OMBAAMM;  /* avoid structure result */
A68_VC  PMBAAMM_word;
A68_VC  SMBAAMM;  /* avoid structure result */
A68_46  VMBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YMBAAMM;  /* avoid structure result */
A68_46  ZMBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  CNBAAMM;  /* optbool result */
A68_BOOL  HNBAAMM_decs_type;
A68_VC  INBAAMM;  /* avoid structure result */
A68_VC  JNBAAMM_name;
A68_BOOL  KNBAAMM_nerr;
A68_VC  LNBAAMM;  /* avoid structure result */
A68_INT  MNBAAMM_level;
A68_VC  NNBAAMM_filename;
A68_178  ONBAAMM_star;
A68_VC  PNBAAMM;  /* avoid structure result */
A68_VC  QNBAAMM;  /* avoid structure result */
A68_178  RNBAAMM;  /* avoid structure result */
A68_182 * SNBAAMM_ml;
A68_180  TNBAAMM;  /* collateral clause result */
A68_VC  UNBAAMM;  /* avoid structure result */
A68_217  WNBAAMM_generator;   /* proc value of non-global proc */
A68_181  BOBAAMM;  /* avoid structure result */
A68_180 * COBAAMM;  /* YIELD */
A68_VC * DOBAAMM;  /* YIELD */
A68_BOOL * EOBAAMM;  /* YIELD */
A68_INT * FOBAAMM;  /* YIELD */
A68_178 * GOBAAMM;  /* YIELD */
A68_182 ** JOBAAMM_uses;
A68_VC  KOBAAMM;  /* avoid structure result */
A68_BOOL  LOBAAMM;  /* clause result */
A68_VC  OOBAAMM;  /* avoid structure result */
A68_VC  POBAAMM_mname;
A68_VC  QOBAAMM;  /* avoid structure result */
A68_VC  ROBAAMM_state_chars;
A68_INT  SOBAAMM_state_top;
A68_INT  TOBAAMM_state_char_pos;
A68_182 * UOBAAMM_mml;
A68_233  VOBAAMM;  /* collateral clause result */
A68_52  YOBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ZOBAAMM;  /* YIELD */
A68_52  APBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  DPBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EPBAAMM;  /* YIELD */
A68_52  FPBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  GPBAAMM;  /* procedure value */
A68_85  HPBAAMM;  /* OPERATORS - istruct -> vector */
A68_INT  IPBAAMM_an;
A68_INT  JPBAAMM;  /* to part of loop */
A68_BOOL  KPBAAMM;  /* optbool result */
A68_VC  LPBAAMM;  /* avoid structure result */
A68_VC  MPBAAMM;  /* avoid structure result */
A68_31  QPBAAMM_generator;   /* proc value of non-global proc */
A68_VC  WPBAAMM;  /* avoid structure result */
A68_VC  VPBAAMM_symname;
A68_VC  YPBAAMM;  /* OPERATORS - trim index */
A68_VC  AQBAAMM;  /* YIELD */
A68_VC  BQBAAMM;  /* OPERATORS - assign op */
A68_INT  CQBAAMM;  /* YIELD */
A68_CHAR * DQBAAMM;  /* YIELD */
A68_VC  GQBAAMM;  /* avoid structure result */
A68_VC  LQBAAMM;  /* avoid structure result */
A68_VC  OQBAAMM;  /* avoid structure result */
A68_VC  PQBAAMM_name;
A68_177 * QQBAAMM_sym;
A68_36  SQBAAMM_addtxt;   /* proc value of non-global proc */
A68_236  IRBAAMM;  /* collateral clause result */
A68_52  LRBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MRBAAMM;  /* YIELD */
A68_52  NRBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  QRBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RRBAAMM;  /* YIELD */
A68_85  SRBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  TRBAAMM;  /* avoid structure result */
A68_46  URBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VRBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_236  YRBAAMM;  /* collateral clause result */
A68_52  BSBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CSBAAMM;  /* YIELD */
A68_52  DSBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  GSBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HSBAAMM;  /* YIELD */
A68_85  ISBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  JSBAAMM;  /* avoid structure result */
A68_46  KSBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(read_database_line);
{ 
 /* line 922: */
A_CLOSURE( WLBAAMM_check_module, XLBAAMM_check_module, YLBAAMM_check_module );
(( YLBAAMM_check_module * ) ( WLBAAMM_check_module.nonlocals )) -> HKBAAMM_read_star = NL(HKBAAMM_read_star);
 /* line 942: */
A_CALLPROC(NL(PJBAAMM_next_item),(MJBAAMM_name_mode, &OMBAAMM),(MJBAAMM_name_mode, &OMBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
PMBAAMM_word = OMBAAMM;
 /* line 944: */
 /* line 945: */
if ( A_VC_EQ(PMBAAMM_word,RMBAAMM) )
{ 
 /* line 946: */
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &SMBAAMM),(LJBAAMM_string_mode, &SMBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
(*NL(OIBAAMM_have_signature)) = A_VC_EQ(WBAAAMM_signature,SMBAAMM);
} 
else
{ 
 /* line 948: */
if ( (PMBAAMM_word.upb==0) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 949: */
if ( !(*NL(OIBAAMM_have_signature)) )
{ 
 /* line 950: */
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(VMBAAMM,UMBAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(VMBAAMM,UMBAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 951: */
if ( A_VC_EQ(PMBAAMM_word,XMBAAMM) )
{ 
 /* line 952: */
A_CALLPROC(NL(PJBAAMM_next_item),(KJBAAMM_text_mode, &YMBAAMM),(KJBAAMM_text_mode, &YMBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(ZMBAAMM,YMBAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(ZMBAAMM,YMBAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
CNBAAMM = A_VC_EQ(PMBAAMM_word,BNBAAMM);
if ( ! CNBAAMM )
{CNBAAMM = A_VC_EQ(PMBAAMM_word,ENBAAMM);
}
 /* line 953: */
if ( CNBAAMM )
{ 
HNBAAMM_decs_type = A_VC_EQ(PMBAAMM_word,GNBAAMM);
 /* line 954: */
A_CALLPROC(NL(PJBAAMM_next_item),(MJBAAMM_name_mode, &INBAAMM),(MJBAAMM_name_mode, &INBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
JNBAAMM_name = INBAAMM;
 /* line 955: */
 /* line 956: */
A_CALLPROC(NL(PJBAAMM_next_item),(NJBAAMM_number_mode, &LNBAAMM),(NJBAAMM_number_mode, &LNBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
MNBAAMM_level = XVCAOST_charstoint(LNBAAMM, (&KNBAAMM_nerr));
 /* line 958: */
for ( ;; )
{ 
if ( !(((TLBAAMM_c = A_CALLPROC(NL(BJBAAMM_next_char),(),((NL(BJBAAMM_next_char)).nonlocals)))==' ')) ) break;
/*SKIP*/;
}
 /* line 960: */
NNBAAMM_filename = BCAAAMM_blankname;
 /* line 961: */
ONBAAMM_star = NBAAAMM_blank_star;
 /* line 963: */
 /* line 964: */
if ( (TLBAAMM_c!='?') )
{ 
(*NL(ZIBAAMM_cpos))-=1;
 /* line 965: */
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &PNBAAMM),(LJBAAMM_string_mode, &PNBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
ZAAAOSI_makervc( PNBAAMM, &QNBAAMM );
NNBAAMM_filename = QNBAAMM;
 /* line 966: */
 /* line 967: */
A_CALLPROC(NL(HKBAAMM_read_star),( &RNBAAMM),( &RNBAAMM,(NL(HKBAAMM_read_star)).nonlocals));
ONBAAMM_star = RNBAAMM;
} 
 /* line 969: */
SNBAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, JNBAAMM_name);
 /* line 971: */
if ( !VIAAAMM_case_sensitive )
{ 
UWAAAMM_set_lowercase(NNBAAMM_filename);
} 
 /* line 972: */
NIAAAMM_max_level = FVCAOST_max(NIAAAMM_max_level, MNBAAMM_level);
 /* line 973: */
OIAAAMM_max_module_name_size = FVCAOST_max(OIAAAMM_max_module_name_size, JNBAAMM_name.upb);
 /* line 974: */
 /* line 975: */
if ( (SNBAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
 /* line 976: */
ZAAAOSI_makervc( JNBAAMM_name, &UNBAAMM );
TNBAAMM.Name = UNBAAMM;
TNBAAMM.Filename = NNBAAMM_filename;
TNBAAMM.Decs = HNBAAMM_decs_type;
TNBAAMM.Recursive = A68_FALSE;
 /* line 977: */
TNBAAMM.Analysed = A68_FALSE;
 /* line 978: */
TNBAAMM.State = UHAAAMM_std_state;
A_CLOSURE( WNBAAMM_generator, XNBAAMM_generator, YNBAAMM_generator );
 /* line 979: */
 /* line 980: */
A_CALLPROC(WNBAAMM_generator,(A68_FALSE, &BOBAAMM),(A68_FALSE, &BOBAAMM,(WNBAAMM_generator).nonlocals));
A_VASSIGN2(XSAAAMM_default_attributes,BOBAAMM,A68_179 ) ;
TNBAAMM.Attributes = BOBAAMM;
TNBAAMM.Level = MNBAAMM_level;
TNBAAMM.Number = 0;
TNBAAMM.Marker = 0;
TNBAAMM.Uses = KBAAAMM_nilmodulelist;
TNBAAMM.Usedby = KBAAAMM_nilmodulelist;
COBAAMM = A_HEAP(A68_180 ) ;
(*COBAAMM) = TNBAAMM ;
(*NL(NIBAAMM_current_module)) = COBAAMM;
 /* line 981: */
 /* line 982: */
 /* line 983: */
UCBAAMM_add_module((&WIAAAMM_modules), (*NL(NIBAAMM_current_module)), ONBAAMM_star);
} 
else
{ 
(*NL(NIBAAMM_current_module)) = (*(&(SNBAAMM_ml->Module)));
 /* line 984: */
DOBAAMM = (&((*NL(NIBAAMM_current_module))->Filename)) ;
(*DOBAAMM) = NNBAAMM_filename;
 /* line 985: */
EOBAAMM = (&((*NL(NIBAAMM_current_module))->Decs)) ;
(*EOBAAMM) = HNBAAMM_decs_type;
 /* line 986: */
FOBAAMM = (&((*NL(NIBAAMM_current_module))->Level)) ;
(*FOBAAMM) = MNBAAMM_level;
 /* line 987: */
 /* line 988: */
 /* line 990: */
GOBAAMM = (&(SNBAAMM_ml->Star)) ;
(*GOBAAMM) = ONBAAMM_star;
} 
} 
else
{ 
 /* line 991: */
if ( A_VC_EQ(PMBAAMM_word,IOBAAMM) )
{ 
JOBAAMM_uses = (&((*NL(NIBAAMM_current_module))->Uses));
 /* line 993: */
for ( ;; )
{ 
 /* line 994: */
A_CALLPROC(NL(PJBAAMM_next_item),(MJBAAMM_name_mode, &KOBAAMM),(MJBAAMM_name_mode, &KOBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
JOBAAMM_uses = (&(A_CALLPROC(WLBAAMM_check_module,(JOBAAMM_uses, KOBAAMM),(JOBAAMM_uses, KOBAAMM,(WLBAAMM_check_module).nonlocals))->Rest));
 /* line 995: */
 /* line 996: */
 /* line 998: */
LOBAAMM = (A_CALLPROC(NL(BJBAAMM_next_char),(),((NL(BJBAAMM_next_char)).nonlocals))==',');
if ( !LOBAAMM ) break;
/*SKIP*/;
}
 /* line 1000: */
} 
else
{ 
 /* line 1001: */
if ( A_VC_EQ(PMBAAMM_word,NOBAAMM) )
{ 
A_CALLPROC(NL(PJBAAMM_next_item),(MJBAAMM_name_mode, &OOBAAMM),(MJBAAMM_name_mode, &OOBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
POBAAMM_mname = OOBAAMM;
 /* line 1002: */
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &QOBAAMM),(LJBAAMM_string_mode, &QOBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
ROBAAMM_state_chars = QOBAAMM;
 /* line 1003: */
SOBAAMM_state_top = ROBAAMM_state_chars.upb;
 /* line 1004: */
TOBAAMM_state_char_pos = 0;
 /* line 1005: */
UOBAAMM_mml = JCBAAMM_findmodule(WIAAAMM_modules, POBAAMM_mname);
 /* line 1007: */
 /* line 1008: */
if ( (UOBAAMM_mml==KBAAAMM_nilmodulelist) )
{ 
TIAAAMM_attribute_modified = A68_TRUE;
 /* line 1009: */
ZOBAAMM = XOBAAMM ;
VOBAAMM.data[0] = A_UNITE(YOBAAMM,mode7,7,ZOBAAMM);
 /* line 1010: */
VOBAAMM.data[1] = A_UNITE(APBAAMM,mode7,7,POBAAMM_mname);
EPBAAMM = CPBAAMM ;
VOBAAMM.data[2] = A_UNITE(DPBAAMM,mode7,7,EPBAAMM);
GPBAAMM.fn.fn_global = LRAAOSL_newline;
GPBAAMM.nonlocals = A68_NIL;
VOBAAMM.data[3] = A_UNITE(FPBAAMM,mode12,12,GPBAAMM);
 /* line 1011: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HPBAAMM,VOBAAMM,4,A68_52 ));
} 
 /* line 1012: */
 /* line 1013: */
JPBAAMM = YPAAAMM_max_attribute;
for ( IPBAAMM_an = 1;
IPBAAMM_an <= JPBAAMM;
IPBAAMM_an += 1 )
{ 
 /* line 1014: */
 /* line 1015: */
KPBAAMM = ((TOBAAMM_state_char_pos+=1)<=SOBAAMM_state_top);
if ( KPBAAMM )
{KPBAAMM = (A_VINDEX(ROBAAMM_state_chars,TOBAAMM_state_char_pos)=='+');
}
 /* line 1016: */
if ( KPBAAMM )
{ 
 /* line 1017: */
if ( (UOBAAMM_mml!=KBAAAMM_nilmodulelist) )
{ 
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &LPBAAMM),(LJBAAMM_string_mode, &LPBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
GVAAAMM_initialise_attribute((*(&(UOBAAMM_mml->Module))), IPBAAMM_an, LPBAAMM);
} 
else
{ 
 /* line 1021: */
 /* line 1022: */
 /* line 1023: */
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &MPBAAMM),(LJBAAMM_string_mode, &MPBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
MPBAAMM;
} 
} 
}
 /* line 1025: */
} 
else
{ 
 /* line 1026: */
if ( A_VC_EQ(PMBAAMM_word,OPBAAMM) )
{ 
A_CLOSURE( QPBAAMM_generator, RPBAAMM_generator, SPBAAMM_generator );
A_CALLPROC(QPBAAMM_generator,(A68_TRUE, &WPBAAMM),(A68_TRUE, &WPBAAMM,(QPBAAMM_generator).nonlocals));
VPBAAMM_symname = WPBAAMM;
 /* line 1028: */
AQBAAMM = A_VTRIM(YPBAAMM,(VPBAAMM_symname),A_VTSCRIPT(&(YPBAAMM.upb),(VPBAAMM_symname).upb,1,9)) ;
BQBAAMM = ZPBAAMM ;
A_VASSIGN2(BQBAAMM,AQBAAMM,A68_CHAR );
 /* line 1029: */
CQBAAMM = 10 ;
DQBAAMM = (&A_VINDEX(VPBAAMM_symname,CQBAAMM)) ;
(*DQBAAMM) = (A68_CHAR)((QIAAAMM_init_file_count+=1)+(A68_INT)(unsigned char)'0');
 /* line 1030: */
 /* line 1031: */
 /* line 1032: */
 /* line 1034: */
A_CALLPROC(NL(SKBAAMM_external_database),(FQBAAMM, XHAAAMM_mmd_type, CJAAAMM_init_tag, &GQBAAMM),(FQBAAMM, XHAAAMM_mmd_type, CJAAAMM_init_tag, &GQBAAMM,(NL(SKBAAMM_external_database)).nonlocals));
VMAAAMM_define_symbol(VPBAAMM_symname, GQBAAMM, DJAAAMM_local_tag);
} 
else
{ 
 /* line 1035: */
if ( A_VC_EQ(PMBAAMM_word,IQBAAMM) )
{ 
 /* line 1037: */
A_CALLPROC(NL(SKBAAMM_external_database),(KQBAAMM, AIAAAMM_aux_type, BJAAAMM_aux_tag, &LQBAAMM),(KQBAAMM, AIAAAMM_aux_type, BJAAAMM_aux_tag, &LQBAAMM,(NL(SKBAAMM_external_database)).nonlocals));
AKAAAMM_detach_name = LQBAAMM;
} 
else
{ 
 /* line 1038: */
if ( A_VC_EQ(PMBAAMM_word,NQBAAMM) )
{ 
A_CALLPROC(NL(PJBAAMM_next_item),(LJBAAMM_string_mode, &OQBAAMM),(LJBAAMM_string_mode, &OQBAAMM,(NL(PJBAAMM_next_item)).nonlocals));
PQBAAMM_name = OQBAAMM;
 /* line 1039: */
QQBAAMM_sym = VMAAAMM_define_symbol(PQBAAMM_name, BCAAAMM_blankname, NL(Src_tag));
 /* line 1041: */
A_CLOSURE( SQBAAMM_addtxt, TQBAAMM_addtxt, UQBAAMM_addtxt );
(( UQBAAMM_addtxt * ) ( SQBAAMM_addtxt.nonlocals )) -> QQBAAMM_sym = QQBAAMM_sym;
(( UQBAAMM_addtxt * ) ( SQBAAMM_addtxt.nonlocals )) -> SQBAAMM_addtxt = SQBAAMM_addtxt;
(( UQBAAMM_addtxt * ) ( SQBAAMM_addtxt.nonlocals )) -> PJBAAMM_next_item = NL(PJBAAMM_next_item);
 /* line 1053: */
 /* line 1054: */
if ( (QQBAAMM_sym==JBAAAMM_nilsymbol) )
{ 
MRBAAMM = KRBAAMM ;
IRBAAMM.data[0] = A_UNITE(LRBAAMM,mode7,7,MRBAAMM);
 /* line 1055: */
IRBAAMM.data[1] = A_UNITE(NRBAAMM,mode7,7,PQBAAMM_name);
RRBAAMM = PRBAAMM ;
IRBAAMM.data[2] = A_UNITE(QRBAAMM,mode7,7,RRBAAMM);
 /* line 1056: */
 /* line 1057: */
UJBAOSL_oneline( A_HISVEC(SRBAAMM,IRBAAMM,3,A68_52 ), &TRBAAMM );
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(URBAAMM,TRBAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(URBAAMM,TRBAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 1058: */
A_CALLPROC(SQBAAMM_addtxt,(A_HVEC(VRBAAMM,'~',A68_CHAR )),(A_HVEC(VRBAAMM,'~',A68_CHAR ),(SQBAAMM_addtxt).nonlocals));
} 
 /* line 1059: */
 /* line 1060: */
GMAAAMM_mark_action_symbol(QQBAAMM_sym);
} 
else
{ 
 /* line 1061: */
if ( A_VC_EQ(PMBAAMM_word,XRBAAMM) )
{ 
 /* line 1062: */
 /* line 1063: */
SIAAAMM_diagnose = A68_TRUE;
} 
else
{ 
 /* line 1064: */
CSBAAMM = ASBAAMM ;
YRBAAMM.data[0] = A_UNITE(BSBAAMM,mode7,7,CSBAAMM);
YRBAAMM.data[1] = A_UNITE(DSBAAMM,mode7,7,PMBAAMM_word);
HSBAAMM = FSBAAMM ;
YRBAAMM.data[2] = A_UNITE(GSBAAMM,mode7,7,HSBAAMM);
 /* line 1065: */
 /* line 1066: */
UJBAOSL_oneline( A_HISVEC(ISBAAMM,YRBAAMM,3,A68_52 ), &JSBAAMM );
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(KSBAAMM,JSBAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(KSBAAMM,JSBAAMM,A68_VC ),(NL(Msg)).nonlocals));
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
A_PROC_EXIT(read_database_line);
return;
} 
#undef NL

A_STATIC A68_BOOL  BTBAAMM_module_action(A68_180 * Mm, A68_178  Ss)
{ 
A68_237  FTBAAMM_set_usedby_action;   /* proc value of non-global proc */
A68_BOOL  MTBAAMM;  /* clause result */
A_PROC_ENTRY(module_action);
 /* line 1077: */
 /* line 1079: */
{ 
A_CLOSURE( FTBAAMM_set_usedby_action, GTBAAMM_set_usedby_action, HTBAAMM_set_usedby_action );
(( HTBAAMM_set_usedby_action * ) ( FTBAAMM_set_usedby_action.nonlocals )) -> Mm = Mm;
 /* line 1085: */
SBBAAMM_scanmodules((*(&(Mm->Uses))), FTBAAMM_set_usedby_action);
 /* line 1086: */
 /* line 1087: */
MTBAAMM = A68_TRUE;
} 
A_PROC_EXIT(module_action);
return( MTBAAMM );
} 
#undef NL

A_STATIC A68_BOOL  TTBAAMM_remove_old_usedby(A68_180 * M, A68_178  S)
{ 
A68_182 ** UTBAAMM;  /* YIELD */
A68_BOOL  VTBAAMM;  /* clause result */
A_PROC_ENTRY(remove_old_usedby);
 /* line 1095: */
 /* line 1096: */
{ 
UTBAAMM = (&(M->Usedby)) ;
(*UTBAAMM) = KBAAAMM_nilmodulelist;
 /* line 1097: */
 /* line 1098: */
VTBAAMM = A68_TRUE;
} 
A_PROC_EXIT(remove_old_usedby);
return( VTBAAMM );
} 
#undef NL

A_STATIC A68_BOOL  ZVBAAMM_put_list(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((AWBAAMM_put_list *)NonLocals)->x)
{ 
A68_INT  BWBAAMM_top;
A68_INT  CWBAAMM;  /* clause result */
A68_INT  DWBAAMM_extra;
A68_52  EWBAAMM;  /* OPERATORS - mode -> union mode */
A68_85  FWBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_228  GWBAAMM;  /* collateral clause result */
A68_52  HWBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  IWBAAMM;  /* procedure value */
A68_52  LWBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MWBAAMM;  /* YIELD */
A68_85  NWBAAMM;  /* OPERATORS - istruct -> vector */
A68_52  OWBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PWBAAMM;  /* YIELD */
A68_85  QWBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_228  RWBAAMM;  /* collateral clause result */
A68_52  SWBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  TWBAAMM;  /* YIELD */
A68_52  UWBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  VWBAAMM;  /* YIELD */
A68_85  WWBAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  XWBAAMM;  /* clause result */
A_PROC_ENTRY(put_list);
 /* line 1146: */
 /* line 1147: */
{ 
BWBAAMM_top = (*(&(M->Name))).upb;
 /* line 1148: */
if ( (S.Mode==' ') )
{ 
CWBAAMM = 1;
} 
else
{ 
CWBAAMM = 4;
} 
DWBAAMM_extra = CWBAAMM;
 /* line 1150: */
GFBAOSL_put(NL(Db_chan), A_HVEC(FWBAAMM,A_UNITE(EWBAAMM,mode6,6,(*NL(UVBAAMM_sep))),A68_52 ));
 /* line 1151: */
 /* line 1152: */
if ( ((BWBAAMM_top+DWBAAMM_extra)>EPAAOSL_charsleft(NL(Db_chan))) )
{ 
IWBAAMM.fn.fn_global = LRAAOSL_newline;
IWBAAMM.nonlocals = A68_NIL;
GWBAAMM.data[0] = A_UNITE(HWBAAMM,mode12,12,IWBAAMM);
MWBAAMM = KWBAAMM ;
GWBAAMM.data[1] = A_UNITE(LWBAAMM,mode7,7,MWBAAMM);
 /* line 1153: */
GFBAOSL_put(NL(Db_chan), A_HISVEC(NWBAAMM,GWBAAMM,2,A68_52 ));
} 
 /* line 1154: */
(*NL(UVBAAMM_sep)) = ',';
 /* line 1155: */
PWBAAMM = (*(&(M->Name))) ;
GFBAOSL_put(NL(Db_chan), A_HVEC(QWBAAMM,A_UNITE(OWBAAMM,mode7,7,PWBAAMM),A68_52 ));
 /* line 1156: */
if ( (S.Mode!=' ') )
{ 
TWBAAMM = S.Mode ;
RWBAAMM.data[0] = A_UNITE(SWBAAMM,mode6,6,TWBAAMM);
VWBAAMM = S.Value ;
RWBAAMM.data[1] = A_UNITE(UWBAAMM,mode6,6,VWBAAMM);
GFBAOSL_put(NL(Db_chan), A_HISVEC(WWBAAMM,RWBAAMM,2,A68_52 ));
} 
 /* line 1157: */
 /* line 1158: */
XWBAAMM = A68_TRUE;
} 
A_PROC_EXIT(put_list);
return( XWBAAMM );
} 
#undef NL

A_STATIC A68_BOOL  BXBAAMM_put_module(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((CXBAAMM_put_module *)NonLocals)->x)
{ 
A68_253  DXBAAMM;  /* collateral clause result */
A68_52  GXBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HXBAAMM;  /* YIELD */
A68_52  KXBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LXBAAMM;  /* YIELD */
A68_52  MXBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NXBAAMM;  /* YIELD */
A68_52  OXBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  PXBAAMM;  /* YIELD */
A68_52  QXBAAMM;  /* OPERATORS - mode -> union mode */
A68_INT  RXBAAMM;  /* YIELD */
A68_52  SXBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  TXBAAMM;  /* YIELD */
A68_85  UXBAAMM;  /* OPERATORS - istruct -> vector */
A68_228  VXBAAMM;  /* collateral clause result */
A68_52  WXBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XXBAAMM;  /* YIELD */
A68_52  YXBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZXBAAMM;  /* YIELD */
A68_85  AYBAAMM;  /* OPERATORS - istruct -> vector */
A68_236  BYBAAMM;  /* collateral clause result */
A68_52  CYBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  DYBAAMM;  /* YIELD */
A68_52  EYBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  FYBAAMM;  /* YIELD */
A68_52  GYBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  HYBAAMM;  /* YIELD */
A68_85  IYBAAMM;  /* OPERATORS - istruct -> vector */
A68_52  JYBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  KYBAAMM;  /* YIELD */
A68_85  LYBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  MYBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NYBAAMM;  /* procedure value */
A68_85  OYBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  RYBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SYBAAMM;  /* YIELD */
A68_85  TYBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_228  UYBAAMM;  /* collateral clause result */
A68_52  VYBAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  WYBAAMM;  /* YIELD */
A68_52  XYBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YYBAAMM;  /* procedure value */
A68_85  ZYBAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  AZBAAMM;  /* clause result */
A_PROC_ENTRY(put_module);
 /* line 1161: */
 /* line 1162: */
{ 
(*NL(VVBAAMM_module_count))+=1;
 /* line 1163: */
if ( (*(&(M->Decs))) )
{ 
HXBAAMM = FXBAAMM ;
DXBAAMM.data[0] = A_UNITE(GXBAAMM,mode7,7,HXBAAMM);
} 
else
{ 
 /* line 1164: */
LXBAAMM = JXBAAMM ;
DXBAAMM.data[0] = A_UNITE(KXBAAMM,mode7,7,LXBAAMM);
} 
NXBAAMM = (*(&(M->Name))) ;
DXBAAMM.data[1] = A_UNITE(MXBAAMM,mode7,7,NXBAAMM);
PXBAAMM = ' ' ;
DXBAAMM.data[2] = A_UNITE(OXBAAMM,mode6,6,PXBAAMM);
RXBAAMM = (*(&(M->Level))) ;
DXBAAMM.data[3] = A_UNITE(QXBAAMM,mode1,1,RXBAAMM);
TXBAAMM = ' ' ;
DXBAAMM.data[4] = A_UNITE(SXBAAMM,mode6,6,TXBAAMM);
GFBAOSL_put(NL(Db_chan), A_HISVEC(UXBAAMM,DXBAAMM,5,A68_52 ));
 /* line 1165: */
 /* line 1166: */
if ( ((*(&(M->Filename))).upb>0) )
{ 
XXBAAMM = (*(&(M->Filename))) ;
VXBAAMM.data[0] = A_UNITE(WXBAAMM,mode7,7,XXBAAMM);
ZXBAAMM = ' ' ;
VXBAAMM.data[1] = A_UNITE(YXBAAMM,mode6,6,ZXBAAMM);
GFBAOSL_put(NL(Db_chan), A_HISVEC(AYBAAMM,VXBAAMM,2,A68_52 ));
 /* line 1167: */
 /* line 1168: */
if ( (S.Mode!=' ') )
{ 
DYBAAMM = S.Mode ;
BYBAAMM.data[0] = A_UNITE(CYBAAMM,mode6,6,DYBAAMM);
FYBAAMM = S.Value ;
BYBAAMM.data[1] = A_UNITE(EYBAAMM,mode6,6,FYBAAMM);
HYBAAMM = ' ' ;
BYBAAMM.data[2] = A_UNITE(GYBAAMM,mode6,6,HYBAAMM);
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
GFBAOSL_put(NL(Db_chan), A_HISVEC(IYBAAMM,BYBAAMM,3,A68_52 ));
} 
} 
else
{ 
 /* line 1172: */
KYBAAMM = '?' ;
GFBAOSL_put(NL(Db_chan), A_HVEC(LYBAAMM,A_UNITE(JYBAAMM,mode6,6,KYBAAMM),A68_52 ));
} 
 /* line 1173: */
NYBAAMM.fn.fn_global = LRAAOSL_newline;
NYBAAMM.nonlocals = A68_NIL;
GFBAOSL_put(NL(Db_chan), A_HVEC(OYBAAMM,A_UNITE(MYBAAMM,mode12,12,NYBAAMM),A68_52 ));
 /* line 1175: */
 /* line 1176: */
if ( ((*(&(M->Uses)))!=KBAAAMM_nilmodulelist) )
{ 
(*NL(UVBAAMM_sep)) = ' ';
 /* line 1177: */
SYBAAMM = QYBAAMM ;
GFBAOSL_put(NL(Db_chan), A_HVEC(TYBAAMM,A_UNITE(RYBAAMM,mode7,7,SYBAAMM),A68_52 ));
 /* line 1178: */
SBBAAMM_scanmodules((*(&(M->Uses))), NL(YVBAAMM_put_list));
 /* line 1179: */
WYBAAMM = '.' ;
UYBAAMM.data[0] = A_UNITE(VYBAAMM,mode6,6,WYBAAMM);
YYBAAMM.fn.fn_global = LRAAOSL_newline;
YYBAAMM.nonlocals = A68_NIL;
UYBAAMM.data[1] = A_UNITE(XYBAAMM,mode12,12,YYBAAMM);
 /* line 1180: */
GFBAOSL_put(NL(Db_chan), A_HISVEC(ZYBAAMM,UYBAAMM,2,A68_52 ));
} 
 /* line 1181: */
 /* line 1182: */
AZBAAMM = A68_TRUE;
} 
A_PROC_EXIT(put_module);
return( AZBAAMM );
} 
#undef NL

A_STATIC A68_VOID  GBCAAMM_generator(A68_BOOL  EBCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HBCAAMM_generator *)NonLocals)->x)
{ 
A68_VC  IBCAAMM;  /* clause result */
A68_VC  JBCAAMM;  /* OPERATORS - dynamic generator */
{ 
JBCAAMM.upb = NHAAAMM_bsize ;
( EBCAAMM_anonymous? A_VLOC(A68_CHAR ,JBCAAMM): A_VHEAP(A68_CHAR ,JBCAAMM) );
IBCAAMM = JBCAAMM;
} 
*ReturnedValue = (IBCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  OBCAAMM_db_line(A68_VC  Line, void *NonLocals)
#define NL(x) (((PBCAAMM_db_line *)NonLocals)->x)
{ 
A68_35  QBCAAMM;  /* avoid structure result */
A_PROC_ENTRY(db_line);
 /* line 1232: */
JSBAOSI_write_buffer( (*NL(DBCAAMM_database)), Line, NL(Msg), &QBCAAMM );
QBCAAMM;
A_PROC_EXIT(db_line);
return;
} 
#undef NL

A_STATIC A68_BOOL  YBCAAMM_put_attributes(A68_180 * M, A68_178  S, void *NonLocals)
#define NL(x) (((ZBCAAMM_put_attributes *)NonLocals)->x)
{ 
A68_VC  ACCAAMM_att_val;
A68_33  CCCAAMM_generator;   /* proc value of non-global proc */
A68_32  ICCAAMM;  /* avoid structure result */
A68_32  HCCAAMM_attribute_map;
A68_31  KCCAAMM_generator;   /* proc value of non-global proc */
A68_VC  QCCAAMM;  /* avoid structure result */
A68_VC  PCCAAMM_attr_string;
A68_INT  RCCAAMM_map_ptr;
A68_INT  SCCAAMM_an;
A68_INT  TCCAAMM;  /* to part of loop */
A68_INT  UCCAAMM;  /* YIELD */
A68_INT * VCCAAMM;  /* YIELD */
A68_CHAR * WCCAAMM;  /* YIELD */
A68_CHAR * XCCAAMM;  /* YIELD */
A68_233  YCCAAMM;  /* collateral clause result */
A68_52  BDCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CDCAAMM;  /* YIELD */
A68_52  DDCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EDCAAMM;  /* YIELD */
A68_52  FDCAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  GDCAAMM;  /* YIELD */
A68_52  HDCAAMM;  /* OPERATORS - mode -> union mode */
A68_85  IDCAAMM;  /* OPERATORS - istruct -> vector */
A68_INT  JDCAAMM_ptr;
A68_INT  KDCAAMM;  /* to part of loop */
A68_VC  LDCAAMM;  /* avoid structure result */
A68_52  MDCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NDCAAMM;  /* procedure value */
A68_85  ODCAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_228  PDCAAMM;  /* collateral clause result */
A68_52  QDCAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  RDCAAMM;  /* YIELD */
A68_52  SDCAAMM;  /* OPERATORS - mode -> union mode */
A68_85  TDCAAMM;  /* OPERATORS - istruct -> vector */
A68_52  UDCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  VDCAAMM;  /* procedure value */
A68_85  WDCAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  XDCAAMM;  /* clause result */
A_PROC_ENTRY(put_attributes);
 /* line 1237: */
 /* line 1238: */
{ 
 /* line 1239: */
A_CLOSURE( CCCAAMM_generator, DCCAAMM_generator, ECCAAMM_generator );
A_CALLPROC(CCCAAMM_generator,(A68_TRUE, &ICCAAMM),(A68_TRUE, &ICCAAMM,(CCCAAMM_generator).nonlocals));
HCCAAMM_attribute_map = ICCAAMM;
 /* line 1240: */
A_CLOSURE( KCCAAMM_generator, LCCAAMM_generator, MCCAAMM_generator );
A_CALLPROC(KCCAAMM_generator,(A68_TRUE, &QCCAAMM),(A68_TRUE, &QCCAAMM,(KCCAAMM_generator).nonlocals));
PCCAAMM_attr_string = QCCAAMM;
 /* line 1241: */
RCCAAMM_map_ptr = 0;
 /* line 1243: */
 /* line 1244: */
TCCAAMM = YPAAAMM_max_attribute;
for ( SCCAAMM_an = 1;
SCCAAMM_an <= TCCAAMM;
SCCAAMM_an += 1 )
{ 
 /* line 1245: */
 /* line 1246: */
if ( XVAAAMM_fetch_attribute(M, SCCAAMM_an) )
{ 
UCCAAMM = RCCAAMM_map_ptr+=1 ;
VCCAAMM = (&A_VINDEX(HCCAAMM_attribute_map,UCCAAMM)) ;
(*VCCAAMM) = SCCAAMM_an;
 /* line 1247: */
 /* line 1248: */
 /* line 1249: */
WCCAAMM = (&A_VINDEX(PCCAAMM_attr_string,SCCAAMM_an)) ;
(*WCCAAMM) = '+';
} 
else
{ 
 /* line 1250: */
 /* line 1251: */
XCCAAMM = (&A_VINDEX(PCCAAMM_attr_string,SCCAAMM_an)) ;
(*XCCAAMM) = '-';
} 
}
 /* line 1253: */
 /* line 1254: */
if ( (RCCAAMM_map_ptr>0) )
{ 
CDCAAMM = ADCAAMM ;
YCCAAMM.data[0] = A_UNITE(BDCAAMM,mode7,7,CDCAAMM);
EDCAAMM = (*(&(M->Name))) ;
YCCAAMM.data[1] = A_UNITE(DDCAAMM,mode7,7,EDCAAMM);
GDCAAMM = ' ' ;
YCCAAMM.data[2] = A_UNITE(FDCAAMM,mode6,6,GDCAAMM);
YCCAAMM.data[3] = A_UNITE(HDCAAMM,mode7,7,PCCAAMM_attr_string);
GFBAOSL_put(NL(UBCAAMM_db_chan), A_HISVEC(IDCAAMM,YCCAAMM,4,A68_52 ));
 /* line 1255: */
 /* line 1256: */
KDCAAMM = RCCAAMM_map_ptr;
for ( JDCAAMM_ptr = 1;
JDCAAMM_ptr <= KDCAAMM;
JDCAAMM_ptr += 1 )
{ 
 /* line 1257: */
KTAAAMM_attribute_value( M, (*(&A_VINDEX(HCCAAMM_attribute_map,JDCAAMM_ptr))), &LDCAAMM );
ACCAAMM_att_val = LDCAAMM;
 /* line 1258: */
 /* line 1259: */
if ( ((ACCAAMM_att_val.upb+1)>EPAAOSL_charsleft(NL(UBCAAMM_db_chan))) )
{ 
 /* line 1260: */
NDCAAMM.fn.fn_global = LRAAOSL_newline;
NDCAAMM.nonlocals = A68_NIL;
GFBAOSL_put(NL(UBCAAMM_db_chan), A_HVEC(ODCAAMM,A_UNITE(MDCAAMM,mode12,12,NDCAAMM),A68_52 ));
} 
 /* line 1261: */
RDCAAMM = ' ' ;
PDCAAMM.data[0] = A_UNITE(QDCAAMM,mode6,6,RDCAAMM);
PDCAAMM.data[1] = A_UNITE(SDCAAMM,mode7,7,ACCAAMM_att_val);
 /* line 1262: */
GFBAOSL_put(NL(UBCAAMM_db_chan), A_HISVEC(TDCAAMM,PDCAAMM,2,A68_52 ));
}
 /* line 1263: */
 /* line 1264: */
VDCAAMM.fn.fn_global = LRAAOSL_newline;
VDCAAMM.nonlocals = A68_NIL;
GFBAOSL_put(NL(UBCAAMM_db_chan), A_HVEC(WDCAAMM,A_UNITE(UDCAAMM,mode12,12,VDCAAMM),A68_52 ));
} 
 /* line 1265: */
 /* line 1266: */
XDCAAMM = A68_TRUE;
} 
A_PROC_EXIT(put_attributes);
return( XDCAAMM );
} 
#undef NL

A_STATIC A68_BOOL  CECAAMM_write_init(A68_177 * Sym, void *NonLocals)
#define NL(x) (((DECAAMM_write_init *)NonLocals)->x)
{ 
A68_236  EECAAMM;  /* collateral clause result */
A68_52  HECAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IECAAMM;  /* YIELD */
A68_52  JECAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KECAAMM;  /* YIELD */
A68_52  LECAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MECAAMM;  /* procedure value */
A68_85  NECAAMM;  /* OPERATORS - istruct -> vector */
A68_BITS * OECAAMM;  /* YIELD */
A68_BOOL  PECAAMM;  /* clause result */
A_PROC_ENTRY(write_init);
 /* line 1272: */
 /* line 1273: */
{ 
IECAAMM = GECAAMM ;
EECAAMM.data[0] = A_UNITE(HECAAMM,mode7,7,IECAAMM);
KECAAMM = (*(&(Sym->Text))) ;
EECAAMM.data[1] = A_UNITE(JECAAMM,mode7,7,KECAAMM);
MECAAMM.fn.fn_global = LRAAOSL_newline;
MECAAMM.nonlocals = A68_NIL;
EECAAMM.data[2] = A_UNITE(LECAAMM,mode12,12,MECAAMM);
GFBAOSL_put(NL(UBCAAMM_db_chan), A_HISVEC(NECAAMM,EECAAMM,3,A68_52 ));
 /* line 1274: */
OECAAMM = (&(Sym->Tags)) ;
(*OECAAMM) = (A68_BITS )((A68_BITS )((*(&(Sym->Tags)))&JJAAAMM_dest_mask)|DJAAAMM_local_tag);
 /* line 1275: */
 /* line 1276: */
PECAAMM = A68_TRUE;
} 
A_PROC_EXIT(write_init);
return( PECAAMM );
} 
#undef NL

A_STATIC A68_VOID  UFCAAMM_generator(A68_BOOL  SFCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VFCAAMM_generator *)NonLocals)->x)
{ 
A68_VC  WFCAAMM;  /* clause result */
A68_VC  XFCAAMM;  /* OPERATORS - dynamic generator */
{ 
XFCAAMM.upb = NHAAAMM_bsize ;
( SFCAAMM_anonymous? A_VLOC(A68_CHAR ,XFCAAMM): A_VHEAP(A68_CHAR ,XFCAAMM) );
WFCAAMM = XFCAAMM;
} 
*ReturnedValue = (WFCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  CGCAAMM_aux_line(A68_VC  Line, void *NonLocals)
#define NL(x) (((DGCAAMM_aux_line *)NonLocals)->x)
{ 
A68_35  EGCAAMM;  /* avoid structure result */
A_PROC_ENTRY(aux_line);
 /* line 1298: */
JSBAOSI_write_buffer( (*NL(RFCAAMM_auxfile)), Line, NL(Msg), &EGCAAMM );
EGCAAMM;
A_PROC_EXIT(aux_line);
return;
} 
#undef NL

A_STATIC A68_VOID  SICAAMM_generator(A68_BOOL  QICAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TICAAMM_generator *)NonLocals)->x)
{ 
A68_VC  UICAAMM;  /* clause result */
A68_VC  VICAAMM;  /* OPERATORS - dynamic generator */
{ 
VICAAMM.upb = OHAAAMM_bufmax ;
( QICAAMM_anonymous? A_VLOC(A68_CHAR ,VICAAMM): A_VHEAP(A68_CHAR ,VICAAMM) );
UICAAMM = VICAAMM;
} 
*ReturnedValue = (UICAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  LJCAAMM_failed(A68_VC  Text, void *NonLocals)
#define NL(x) (((MJCAAMM_failed *)NonLocals)->x)
{ 
A68_233  NJCAAMM;  /* collateral clause result */
A68_52  OJCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PJCAAMM;  /* procedure value */
A68_52  SJCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TJCAAMM;  /* YIELD */
A68_52  UJCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  VJCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  WJCAAMM;  /* procedure value */
A68_85  XJCAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(failed);
 /* line 1353: */
 /* line 1354: */
{ 
(*NL(IJCAAMM_errors)) = A68_TRUE;
 /* line 1355: */
PJCAAMM.fn.fn_global = LRAAOSL_newline;
PJCAAMM.nonlocals = A68_NIL;
NJCAAMM.data[0] = A_UNITE(OJCAAMM,mode12,12,PJCAAMM);
TJCAAMM = RJCAAMM ;
NJCAAMM.data[1] = A_UNITE(SJCAAMM,mode7,7,TJCAAMM);
NJCAAMM.data[2] = A_UNITE(UJCAAMM,mode7,7,Text);
WJCAAMM.fn.fn_global = LRAAOSL_newline;
WJCAAMM.nonlocals = A68_NIL;
NJCAAMM.data[3] = A_UNITE(VJCAAMM,mode12,12,WJCAAMM);
 /* line 1356: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XJCAAMM,NJCAAMM,4,A68_52 ));
} 
A_PROC_EXIT(failed);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJCAAMM_nextline(void *NonLocals)
#define NL(x) (((AKCAAMM_nextline *)NonLocals)->x)
{ 
A68_35  BKCAAMM_rr;
A68_35  CKCAAMM;  /* avoid structure result */
A68_BOOL  DKCAAMM;  /* optbool result */
A68_BOOL  EKCAAMM;  /* clause result */
A68_INT  HKCAAMM;  /* YIELD */
A68_CHAR * IKCAAMM;  /* YIELD */
A68_INT  JKCAAMM;  /* YIELD */
A68_CHAR  KKCAAMM_fc;
A68_BOOL  LKCAAMM;  /* optbool result */
A68_178  MKCAAMM;  /* collateral clause result */
A68_INT  NKCAAMM;  /* YIELD */
A_PROC_ENTRY(nextline);
{ 
 /* line 1362: */
for ( ;; )
{ 
SRBAOSI_read_line( NL(PICAAMM_mf), NL(WICAAMM_buffer), NL(YICAAMM_buftop), NL(Msg), &CKCAAMM );
BKCAAMM_rr = CKCAAMM;
 /* line 1363: */
DKCAAMM = !PPBAOSI_(BKCAAMM_rr, GPBAOSI_io_eof);
if ( DKCAAMM )
{DKCAAMM = ((*NL(YICAAMM_buftop))==0);
}
EKCAAMM = DKCAAMM;
if ( !EKCAAMM ) break;
/*SKIP*/;
}
 /* line 1364: */
 /* line 1365: */
if ( PPBAOSI_(BKCAAMM_rr, GPBAOSI_io_eof) )
{ 
A_CALLPROC(NL(KJCAAMM_failed),(GKCAAMM),(GKCAAMM,(NL(KJCAAMM_failed)).nonlocals));
 /* line 1366: */
 /* line 1367: */
siglongjmp(NL(NICAAMM_end_of_file).label,1);
} 
 /* line 1368: */
(*NL(ZICAAMM_cpos)) = 0;
 /* line 1369: */
HKCAAMM = (*NL(YICAAMM_buftop))+=1 ;
IKCAAMM = (&A_VINDEX(NL(WICAAMM_buffer),HKCAAMM)) ;
(*IKCAAMM) = ' ';
 /* line 1370: */
 /* line 1371: */
if ( ((*NL(YICAAMM_buftop))>=3) )
{ 
JKCAAMM = 1 ;
KKCAAMM_fc = (*(&A_VINDEX(NL(WICAAMM_buffer),JKCAAMM)));
 /* line 1373: */
LKCAAMM = (KKCAAMM_fc=='*');
if ( ! LKCAAMM )
{LKCAAMM = (KKCAAMM_fc=='%');
}
 /* line 1374: */
if ( LKCAAMM )
{ 
MKCAAMM.Mode = KKCAAMM_fc;
 /* line 1375: */
 /* line 1377: */
NKCAAMM = (*NL(ZICAAMM_cpos)) = 2 ;
MKCAAMM.Value = (*(&A_VINDEX(NL(WICAAMM_buffer),NKCAAMM)));
} 
else
{ 
 /* line 1378: */
MKCAAMM = NBAAAMM_blank_star;
} 
 /* line 1379: */
(*NL(GJCAAMM_star_char)) = MKCAAMM;
} 
} 
A_PROC_EXIT(nextline);
return;
} 
#undef NL

A_STATIC A68_CHAR  PKCAAMM_nextchar(void *NonLocals)
#define NL(x) (((QKCAAMM_nextchar *)NonLocals)->x)
{ 
A68_INT  SKCAAMM;  /* YIELD */
A68_CHAR  RKCAAMM_c;
A68_CHAR  TKCAAMM;  /* clause result */
A_PROC_ENTRY(nextchar);
{ 
 /* line 1384: */
if ( ((*NL(ZICAAMM_cpos))<(*NL(YICAAMM_buftop))) )
{ 
SKCAAMM = (*NL(ZICAAMM_cpos))+=1 ;
RKCAAMM_c = (*(&A_VINDEX(NL(WICAAMM_buffer),SKCAAMM)));
 /* line 1386: */
 /* line 1387: */
if ( (RKCAAMM_c=='{') )
{ 
for ( ;; )
{ 
if ( !((A_CALLPROC(NL(OKCAAMM_nextchar),(),((NL(OKCAAMM_nextchar)).nonlocals))!='}')) ) break;
/*SKIP*/;
}
 /* line 1388: */
 /* line 1389: */
RKCAAMM_c = A_CALLPROC(NL(OKCAAMM_nextchar),(),((NL(OKCAAMM_nextchar)).nonlocals));
} 
 /* line 1390: */
if ( (RKCAAMM_c==PHAAAMM_tab) )
{ 
TKCAAMM = ' ';
} 
else
{ 
 /* line 1391: */
 /* line 1392: */
TKCAAMM = RKCAAMM_c;
} 
} 
else
{ 
A_CALLPROC(NL(YJCAAMM_nextline),(),((NL(YJCAAMM_nextline)).nonlocals));
 /* line 1393: */
 /* line 1394: */
 /* line 1395: */
TKCAAMM = A_CALLPROC(NL(OKCAAMM_nextchar),(),((NL(OKCAAMM_nextchar)).nonlocals));
} 
} 
A_PROC_EXIT(nextchar);
return( TKCAAMM );
} 
#undef NL

A_STATIC A68_VOID  VKCAAMM_get_basic(A68_183  *ReturnedValue, void *NonLocals)
#define NL(x) (((WKCAAMM_get_basic *)NonLocals)->x)
{ 
A68_CHAR  XKCAAMM_c;
A68_31  ZKCAAMM_generator;   /* proc value of non-global proc */
A68_VC  FLCAAMM;  /* avoid structure result */
A68_VC  ELCAAMM_tmpstr;
A68_INT  GLCAAMM_tpos;
A68_BOOL  HLCAAMM;  /* clause result */
A68_BOOL  ILCAAMM;  /* optbool result */
A68_INT  JLCAAMM;  /* YIELD */
A68_CHAR * KLCAAMM;  /* YIELD */
A68_BOOL  LLCAAMM;  /* optbool result */
A68_BOOL  MLCAAMM;  /* optbool result */
A68_BOOL  NLCAAMM;  /* clause result */
A68_183  OLCAAMM;  /* collateral clause result */
A68_VC  PLCAAMM;  /* OPERATORS - trim index */
A68_VC  QLCAAMM;  /* avoid structure result */
A68_183  RLCAAMM;  /* clause result */
A68_BOOL  SLCAAMM;  /* optbool result */
A68_INT  TLCAAMM_token;
A68_INT  ULCAAMM;  /* YIELD */
A68_CHAR * VLCAAMM;  /* YIELD */
A68_BOOL  WLCAAMM;  /* optbool result */
A68_BOOL  XLCAAMM;  /* clause result */
A68_VC  YLCAAMM;  /* OPERATORS - trim index */
A68_VC  ZLCAAMM_word;
A68_184  AMCAAMM_rw;
A68_184 * BMCAAMM;  /* forall control - []x */
A68_INT  CMCAAMM;  /* forall loop counter */
A68_183  DMCAAMM;  /* collateral clause result */
A68_183  EMCAAMM;  /* collateral clause result */
A68_183  FMCAAMM;  /* collateral clause result */
A68_183  GMCAAMM;  /* collateral clause result */
A_PROC_ENTRY(get_basic);
{ 
XKCAAMM_c = ' ';
 /* line 1400: */
A_CLOSURE( ZKCAAMM_generator, ALCAAMM_generator, BLCAAMM_generator );
A_CALLPROC(ZKCAAMM_generator,(A68_TRUE, &FLCAAMM),(A68_TRUE, &FLCAAMM,(ZKCAAMM_generator).nonlocals));
ELCAAMM_tmpstr = FLCAAMM;
 /* line 1401: */
GLCAAMM_tpos = 0;
 /* line 1403: */
for ( ;; )
{ 
XKCAAMM_c = A_CALLPROC(NL(OKCAAMM_nextchar),(),((NL(OKCAAMM_nextchar)).nonlocals));
HLCAAMM = (XKCAAMM_c==' ');
if ( !HLCAAMM ) break;
/*SKIP*/;
}
 /* line 1404: */
ILCAAMM = (XKCAAMM_c>='a');
if ( ILCAAMM )
{ILCAAMM = (XKCAAMM_c<='z');
}
 /* line 1405: */
if ( ILCAAMM )
{ 
for ( ;; )
{ 
if ( (XKCAAMM_c!=' ') )
{ 
JLCAAMM = GLCAAMM_tpos+=1 ;
KLCAAMM = (&A_VINDEX(ELCAAMM_tmpstr,JLCAAMM)) ;
(*KLCAAMM) = XKCAAMM_c;
} 
 /* line 1406: */
XKCAAMM_c = A_CALLPROC(NL(OKCAAMM_nextchar),(),((NL(OKCAAMM_nextchar)).nonlocals));
 /* line 1407: */
LLCAAMM = (XKCAAMM_c>='a');
if ( LLCAAMM )
{LLCAAMM = (XKCAAMM_c<='z');
}
 /* line 1408: */
if ( ! LLCAAMM )
{MLCAAMM = (XKCAAMM_c>='0');
if ( MLCAAMM )
{MLCAAMM = (XKCAAMM_c<='9');
}
LLCAAMM = MLCAAMM;
}
 /* line 1409: */
if ( ! LLCAAMM )
{LLCAAMM = (XKCAAMM_c=='_');
}
if ( ! LLCAAMM )
{ /* line 1410: */
LLCAAMM = (XKCAAMM_c==' ');
}
NLCAAMM = LLCAAMM;
if ( !NLCAAMM ) break;
/*SKIP*/;
}
 /* line 1411: */
(*NL(ZICAAMM_cpos))-=1;
 /* line 1412: */
OLCAAMM.Token = MHCAAMM_name_tok;
ZAAAOSI_makervc( A_VTRIM(PLCAAMM,(ELCAAMM_tmpstr),A_VTSCRIPT(&(PLCAAMM.upb),(ELCAAMM_tmpstr).upb,1,GLCAAMM_tpos)), &QLCAAMM );
OLCAAMM.Value = QLCAAMM;
 /* line 1414: */
OLCAAMM.Star = (*NL(GJCAAMM_star_char));
RLCAAMM = OLCAAMM;
} 
else
{ 
SLCAAMM = (XKCAAMM_c>='A');
if ( SLCAAMM )
{SLCAAMM = (XKCAAMM_c<='Z');
}
 /* line 1415: */
if ( SLCAAMM )
{ 
TLCAAMM_token = LHCAAMM_unknown_tok;
 /* line 1417: */
for ( ;; )
{ 
ULCAAMM = GLCAAMM_tpos+=1 ;
VLCAAMM = (&A_VINDEX(ELCAAMM_tmpstr,ULCAAMM)) ;
(*VLCAAMM) = XKCAAMM_c;
 /* line 1418: */
XKCAAMM_c = A_CALLPROC(NL(OKCAAMM_nextchar),(),((NL(OKCAAMM_nextchar)).nonlocals));
 /* line 1419: */
WLCAAMM = (XKCAAMM_c>='A');
if ( WLCAAMM )
{ /* line 1420: */
WLCAAMM = (XKCAAMM_c<='Z');
}
XLCAAMM = WLCAAMM;
if ( !XLCAAMM ) break;
/*SKIP*/;
}
 /* line 1421: */
(*NL(ZICAAMM_cpos))-=1;
 /* line 1423: */
ZLCAAMM_word = A_VTRIM(YLCAAMM,(ELCAAMM_tmpstr),A_VTSCRIPT(&(YLCAAMM.upb),(ELCAAMM_tmpstr).upb,1,GLCAAMM_tpos));
 /* line 1425: */
CMCAAMM = JICAAMM_reserved_words.upb -1;
BMCAAMM = JICAAMM_reserved_words.data;
for (;CMCAAMM-- >= 0;
(BMCAAMM++
) )
{
AMCAAMM_rw = *BMCAAMM;
 /* line 1426: */
 /* line 1427: */
if ( !((TLCAAMM_token==LHCAAMM_unknown_tok)) ) break;
if ( A_VC_EQ(AMCAAMM_rw.Word,ZLCAAMM_word) )
{ 
 /* line 1428: */
TLCAAMM_token = AMCAAMM_rw.Token;
} 
}
 /* line 1429: */
DMCAAMM.Token = TLCAAMM_token;
DMCAAMM.Value = BCAAAMM_blankname;
 /* line 1430: */
DMCAAMM.Star = (*NL(GJCAAMM_star_char));
RLCAAMM = DMCAAMM;
} 
else
{ 
 /* line 1431: */
if ( (XKCAAMM_c==',') )
{ 
EMCAAMM.Token = THCAAMM_comma_tok;
EMCAAMM.Value = BCAAAMM_blankname;
 /* line 1432: */
EMCAAMM.Star = (*NL(GJCAAMM_star_char));
RLCAAMM = EMCAAMM;
} 
else
{ 
 /* line 1433: */
if ( (XKCAAMM_c==':') )
{ 
FMCAAMM.Token = UHCAAMM_colon_tok;
FMCAAMM.Value = BCAAAMM_blankname;
 /* line 1434: */
 /* line 1435: */
FMCAAMM.Star = (*NL(GJCAAMM_star_char));
RLCAAMM = FMCAAMM;
} 
else
{ 
GMCAAMM.Token = LHCAAMM_unknown_tok;
GMCAAMM.Value = BCAAAMM_blankname;
 /* line 1436: */
 /* line 1437: */
GMCAAMM.Star = (*NL(GJCAAMM_star_char));
RLCAAMM = GMCAAMM;
} 
} 
} 
} 
} 
A_PROC_EXIT(get_basic);
*ReturnedValue = (RLCAAMM);
return;
} 
#undef NL
 /* line 1440: */

A_STATIC A68_VOID  KMCAAMM_install_use_list(A68_182 * Ml, A68_182 ** Uses, void *NonLocals)
#define NL(x) (((LMCAAMM_install_use_list *)NonLocals)->x)
{ 
A68_180 * MMCAAMM_mm;
A68_178  NMCAAMM_star;
A68_182 * OMCAAMM_new;
A68_182 ** PMCAAMM_ll;
A68_182 ** QMCAAMM_tail;
A68_BOOL  RMCAAMM_make_new_list;
A68_182  SMCAAMM;  /* collateral clause result */
A68_182 * TMCAAMM;  /* YIELD */
A68_182 * UMCAAMM;  /* clause result */
A68_182 ** VMCAAMM;  /* YIELD */
A_PROC_ENTRY(install_use_list);
 /* line 1441: */
 /* line 1442: */
{ 
 /* line 1443: */
if ( (Ml!=KBAAAMM_nilmodulelist) )
{ 
MMCAAMM_mm = (*(&(Ml->Module)));
 /* line 1444: */
NMCAAMM_star = (*(&(Ml->Star)));
 /* line 1445: */
OMCAAMM_new = KBAAAMM_nilmodulelist;
 /* line 1446: */
PMCAAMM_ll = Uses;
 /* line 1447: */
QMCAAMM_tail = (&OMCAAMM_new);
 /* line 1448: */
RMCAAMM_make_new_list = ((*(&(Ml->Rest)))!=KBAAAMM_nilmodulelist);
 /* line 1450: */
for ( ;; )
{ 
 /* line 1451: */
 /* line 1452: */
if ( !(((*PMCAAMM_ll)!=KBAAAMM_nilmodulelist)) ) break;
 /* line 1453: */
if ( QBAAAMM_includes(NMCAAMM_star, (*(&((*PMCAAMM_ll)->Star)))) )
{ 
 /* line 1454: */
if ( RMCAAMM_make_new_list )
{ 
 /* line 1455: */
SMCAAMM.Module = (*(&((*PMCAAMM_ll)->Module)));
SMCAAMM.Star = (*(&((*PMCAAMM_ll)->Star)));
SMCAAMM.Rest = (*QMCAAMM_tail);
TMCAAMM = A_HEAP(A68_182 ) ;
(*TMCAAMM) = SMCAAMM ;
(*QMCAAMM_tail) = TMCAAMM;
 /* line 1456: */
 /* line 1457: */
QMCAAMM_tail = (&((*QMCAAMM_tail)->Rest));
} 
 /* line 1458: */
 /* line 1459: */
PMCAAMM_ll = (&((*PMCAAMM_ll)->Rest));
} 
else
{ 
 /* line 1460: */
if ( RMCAAMM_make_new_list )
{ 
 /* line 1461: */
 /* line 1462: */
PMCAAMM_ll = (&((*PMCAAMM_ll)->Rest));
} 
else
{ 
 /* line 1463: */
 /* line 1464: */
(*PMCAAMM_ll) = (*(&((*PMCAAMM_ll)->Rest)));
} 
} 
}
 /* line 1465: */
if ( RMCAAMM_make_new_list )
{ 
UMCAAMM = OMCAAMM_new;
} 
else
{ 
UMCAAMM = (*Uses);
} 
VMCAAMM = (&(MMCAAMM_mm->Uses)) ;
(*VMCAAMM) = UMCAAMM;
 /* line 1466: */
 /* line 1467: */
 /* line 1468: */
A_CALLPROC(NL(JMCAAMM_install_use_list),((*(&(Ml->Rest))), Uses),((*(&(Ml->Rest))), Uses,(NL(JMCAAMM_install_use_list)).nonlocals));
} 
} 
A_PROC_EXIT(install_use_list);
return;
} 
#undef NL

A_STATIC A68_VOID  YMCAAMM_read_uselist(A68_178  Fs, void *NonLocals)
#define NL(x) (((ZMCAAMM_read_uselist *)NonLocals)->x)
{ 
A68_182 * ANCAAMM_uses;
A68_VC  BNCAAMM_mname;
A68_180 * CNCAAMM_mu;
A68_182 * DNCAAMM_mue;
A68_182 * ENCAAMM_mm;
A68_178  FNCAAMM_ls;
A68_183  GNCAAMM_b;
A68_183  HNCAAMM;  /* collateral clause result */
A68_183  INCAAMM_sep;
A68_183  JNCAAMM;  /* avoid structure result */
A68_BOOL  MNCAAMM;  /* clause result */
A68_BOOL  NNCAAMM;  /* optbool result */
A68_BOOL  ONCAAMM;  /* clause result */
A68_180  PNCAAMM;  /* collateral clause result */
A68_217  RNCAAMM_generator;   /* proc value of non-global proc */
A68_181  WNCAAMM;  /* avoid structure result */
A68_180 * XNCAAMM;  /* YIELD */
A68_INT * YNCAAMM;  /* YIELD */
A68_178 * BOCAAMM;  /* YIELD */
A68_183  COCAAMM;  /* avoid structure result */
A_PROC_ENTRY(read_uselist);
 /* line 1471: */
 /* line 1472: */
{ 
ANCAAMM_uses = KBAAAMM_nilmodulelist;
 /* line 1473: */
 /* line 1474: */
 /* line 1475: */
 /* line 1476: */
FNCAAMM_ls = Fs;
 /* line 1477: */
HNCAAMM.Token = THCAAMM_comma_tok;
HNCAAMM.Value = BCAAAMM_blankname;
HNCAAMM.Star = Fs;
INCAAMM_sep = HNCAAMM;
 /* line 1479: */
for ( ;; )
{ 
 /* line 1480: */
A_CALLPROC(NL(UKCAAMM_get_basic),( &JNCAAMM),( &JNCAAMM,(NL(UKCAAMM_get_basic)).nonlocals));
GNCAAMM_b = JNCAAMM;
 /* line 1481: */
 /* line 1482: */
if ( ((*(&((&INCAAMM_sep)->Token)))==THCAAMM_comma_tok) )
{ 
 /* line 1483: */
if ( ((*(&((&GNCAAMM_b)->Token)))!=MHCAAMM_name_tok) )
{ 
 /* line 1484: */
A_CALLPROC(NL(KJCAAMM_failed),(LNCAAMM),(LNCAAMM,(NL(KJCAAMM_failed)).nonlocals));
} 
 /* line 1485: */
 /* line 1486: */
MNCAAMM = A68_TRUE;
} 
else
{ 
NNCAAMM = ((*(&((&((&INCAAMM_sep)->Star))->Mode)))==' ');
if ( ! NNCAAMM )
{NNCAAMM = ((*(&((&GNCAAMM_b)->Token)))!=MHCAAMM_name_tok);
}
 /* line 1487: */
if ( NNCAAMM )
{ 
 /* line 1488: */
 /* line 1489: */
MNCAAMM = A68_FALSE;
} 
else
{ 
 /* line 1490: */
 /* line 1491: */
MNCAAMM = A68_TRUE;
} 
} 
 /* line 1492: */
ONCAAMM = MNCAAMM;
if ( !ONCAAMM ) break;
FNCAAMM_ls = (*(&((&GNCAAMM_b)->Star)));
 /* line 1493: */
BNCAAMM_mname = (*(&((&GNCAAMM_b)->Value)));
 /* line 1494: */
DNCAAMM_mue = JCBAAMM_findmodule(WIAAAMM_modules, BNCAAMM_mname);
 /* line 1495: */
 /* line 1496: */
if ( (DNCAAMM_mue==KBAAAMM_nilmodulelist) )
{ 
OIAAAMM_max_module_name_size = FVCAOST_max(OIAAAMM_max_module_name_size, BNCAAMM_mname.upb);
 /* line 1497: */
 /* line 1498: */
PNCAAMM.Name = BNCAAMM_mname;
PNCAAMM.Filename = BCAAAMM_blankname;
PNCAAMM.Decs = A68_TRUE;
PNCAAMM.Recursive = A68_FALSE;
PNCAAMM.Analysed = A68_FALSE;
 /* line 1499: */
PNCAAMM.State = UHAAAMM_std_state;
A_CLOSURE( RNCAAMM_generator, SNCAAMM_generator, TNCAAMM_generator );
 /* line 1500: */
A_CALLPROC(RNCAAMM_generator,(A68_FALSE, &WNCAAMM),(A68_FALSE, &WNCAAMM,(RNCAAMM_generator).nonlocals));
A_VASSIGN2(XSAAAMM_default_attributes,WNCAAMM,A68_179 ) ;
PNCAAMM.Attributes = WNCAAMM;
PNCAAMM.Level = 0;
PNCAAMM.Number = 0;
PNCAAMM.Marker = 1;
PNCAAMM.Uses = KBAAAMM_nilmodulelist;
PNCAAMM.Usedby = KBAAAMM_nilmodulelist;
XNCAAMM = A_HEAP(A68_180 ) ;
(*XNCAAMM) = PNCAAMM ;
CNCAAMM_mu = XNCAAMM;
 /* line 1501: */
UCBAAMM_add_module((&WIAAAMM_modules), CNCAAMM_mu, FNCAAMM_ls);
 /* line 1502: */
 /* line 1503: */
 /* line 1504: */
ENCAAMM_mm = KBAAAMM_nilmodulelist;
} 
else
{ 
ENCAAMM_mm = JCBAAMM_findmodule(ANCAAMM_uses, BNCAAMM_mname);
 /* line 1505: */
CNCAAMM_mu = (*(&(DNCAAMM_mue->Module)));
 /* line 1506: */
if ( ((*(&(CNCAAMM_mu->Marker)))==0) )
{ 
 /* line 1507: */
YNCAAMM = (&(CNCAAMM_mu->Marker)) ;
(*YNCAAMM) = 1;
} 
} 
 /* line 1508: */
 /* line 1509: */
if ( (ENCAAMM_mm==KBAAAMM_nilmodulelist) )
{ 
 /* line 1510: */
UCBAAMM_add_module((&ANCAAMM_uses), CNCAAMM_mu, FNCAAMM_ls);
} 
else
{ 
 /* line 1511: */
if ( ((*(&((&FNCAAMM_ls)->Value)))!=(*(&((&(ENCAAMM_mm->Star))->Value)))) )
{ 
 /* line 1512: */
A_CALLPROC(NL(KJCAAMM_failed),(AOCAAMM),(AOCAAMM,(NL(KJCAAMM_failed)).nonlocals));
} 
else
{ 
 /* line 1513: */
if ( ((*(&((&FNCAAMM_ls)->Mode)))!=(*(&((&(ENCAAMM_mm->Star))->Mode)))) )
{ 
 /* line 1514: */
BOCAAMM = (&(ENCAAMM_mm->Star)) ;
(*BOCAAMM) = NBAAAMM_blank_star;
} 
} 
} 
 /* line 1515: */
 /* line 1516: */
A_CALLPROC(NL(UKCAAMM_get_basic),( &COCAAMM),( &COCAAMM,(NL(UKCAAMM_get_basic)).nonlocals));
INCAAMM_sep = COCAAMM;
}
 /* line 1518: */
 /* line 1519: */
A_CALLPROC(NL(JMCAAMM_install_use_list),((*NL(HJCAAMM_local_modules)), (&ANCAAMM_uses)),((*NL(HJCAAMM_local_modules)), (&ANCAAMM_uses),(NL(JMCAAMM_install_use_list)).nonlocals));
} 
A_PROC_EXIT(read_uselist);
return;
} 
#undef NL

A_STATIC A68_BOOL  GOCAAMM_check_star_clash(A68_183  Basic, A68_182 * Ml, void *NonLocals)
#define NL(x) (((HOCAAMM_check_star_clash *)NonLocals)->x)
{ 
A68_BOOL  KOCAAMM;  /* clause result */
A68_178 * LOCAAMM;  /* YIELD */
A_PROC_ENTRY(check_star_clash);
 /* line 1522: */
 /* line 1523: */
{ 
 /* line 1524: */
if ( (Basic.Star.Value!=(*(&((&(Ml->Star))->Value)))) )
{ 
A_CALLPROC(NL(KJCAAMM_failed),(JOCAAMM),(JOCAAMM,(NL(KJCAAMM_failed)).nonlocals));
 /* line 1525: */
 /* line 1526: */
KOCAAMM = A68_FALSE;
} 
else
{ 
 /* line 1527: */
if ( (Basic.Star.Mode!=(*(&((&(Ml->Star))->Mode)))) )
{ 
LOCAAMM = (&(Ml->Star)) ;
(*LOCAAMM) = NBAAAMM_blank_star;
 /* line 1528: */
 /* line 1529: */
 /* line 1530: */
KOCAAMM = A68_TRUE;
} 
else
{ 
 /* line 1531: */
 /* line 1532: */
KOCAAMM = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(check_star_clash);
return( KOCAAMM );
} 
#undef NL

A_STATIC A68_BOOL  POCAAMM_make_module(A68_183  Basic, A68_BOOL  Decs, void *NonLocals)
#define NL(x) (((QOCAAMM_make_module *)NonLocals)->x)
{ 
A68_VC  ROCAAMM_name;
A68_182 * SOCAAMM_ml;
A68_182 * TOCAAMM_locmod;
A68_180 * UOCAAMM_module;
A68_277  WOCAAMM_update_module;   /* proc value of non-global proc */
A68_BOOL  GPCAAMM;  /* clause result */
A68_178 * HPCAAMM;  /* YIELD */
A68_180  IPCAAMM;  /* collateral clause result */
A68_217  KPCAAMM_generator;   /* proc value of non-global proc */
A68_181  PPCAAMM;  /* avoid structure result */
A68_180 * QPCAAMM;  /* YIELD */
A68_BOOL  RPCAAMM;  /* optbool result */
A68_236  SPCAAMM;  /* collateral clause result */
A68_52  VPCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WPCAAMM;  /* YIELD */
A68_52  XPCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  AQCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BQCAAMM;  /* YIELD */
A68_85  CQCAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  DQCAAMM;  /* avoid structure result */
A68_233  EQCAAMM;  /* collateral clause result */
A68_52  FQCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  GQCAAMM;  /* procedure value */
A68_52  JQCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KQCAAMM;  /* YIELD */
A68_52  LQCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  OQCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PQCAAMM;  /* YIELD */
A68_85  QQCAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(make_module);
 /* line 1535: */
 /* line 1536: */
{ 
ROCAAMM_name = Basic.Value;
 /* line 1537: */
SOCAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, ROCAAMM_name);
 /* line 1538: */
TOCAAMM_locmod = JCBAAMM_findmodule((*NL(HJCAAMM_local_modules)), ROCAAMM_name);
 /* line 1539: */
UOCAAMM_module = LBAAAMM_nilmodule;
 /* line 1541: */
A_CLOSURE( WOCAAMM_update_module, XOCAAMM_update_module, YOCAAMM_update_module );
(( YOCAAMM_update_module * ) ( WOCAAMM_update_module.nonlocals )) -> UOCAAMM_module = (&UOCAAMM_module);
(( YOCAAMM_update_module * ) ( WOCAAMM_update_module.nonlocals )) -> FJCAAMM_filename = NL(FJCAAMM_filename);
(( YOCAAMM_update_module * ) ( WOCAAMM_update_module.nonlocals )) -> SOCAAMM_ml = SOCAAMM_ml;
(( YOCAAMM_update_module * ) ( WOCAAMM_update_module.nonlocals )) -> Basic = Basic;
(( YOCAAMM_update_module * ) ( WOCAAMM_update_module.nonlocals )) -> HJCAAMM_local_modules = NL(HJCAAMM_local_modules);
 /* line 1552: */
 /* line 1553: */
if ( (TOCAAMM_locmod!=KBAAAMM_nilmodulelist) )
{ 
 /* line 1554: */
if ( (Basic.Star.Value!=(*(&((&(TOCAAMM_locmod->Star))->Value)))) )
{ 
A_CALLPROC(NL(KJCAAMM_failed),(FPCAAMM),(FPCAAMM,(NL(KJCAAMM_failed)).nonlocals));
 /* line 1555: */
 /* line 1556: */
GPCAAMM = A68_FALSE;
} 
else
{ 
 /* line 1557: */
if ( (Basic.Star.Mode!=(*(&((&(TOCAAMM_locmod->Star))->Mode)))) )
{ 
HPCAAMM = (&(TOCAAMM_locmod->Star)) ;
(*HPCAAMM) = NBAAAMM_blank_star;
 /* line 1558: */
 /* line 1559: */
 /* line 1560: */
GPCAAMM = A68_TRUE;
} 
else
{ 
 /* line 1561: */
 /* line 1562: */
GPCAAMM = A68_TRUE;
} 
} 
} 
else
{ 
 /* line 1563: */
if ( (SOCAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
OIAAAMM_max_module_name_size = FVCAOST_max(OIAAAMM_max_module_name_size, ROCAAMM_name.upb);
 /* line 1564: */
 /* line 1565: */
IPCAAMM.Name = ROCAAMM_name;
IPCAAMM.Filename = NL(FJCAAMM_filename);
IPCAAMM.Decs = Decs;
IPCAAMM.Recursive = A68_FALSE;
IPCAAMM.Analysed = A68_TRUE;
 /* line 1566: */
IPCAAMM.State = UHAAAMM_std_state;
A_CLOSURE( KPCAAMM_generator, LPCAAMM_generator, MPCAAMM_generator );
 /* line 1567: */
 /* line 1568: */
A_CALLPROC(KPCAAMM_generator,(A68_FALSE, &PPCAAMM),(A68_FALSE, &PPCAAMM,(KPCAAMM_generator).nonlocals));
A_VASSIGN2(XSAAAMM_default_attributes,PPCAAMM,A68_179 ) ;
IPCAAMM.Attributes = PPCAAMM;
IPCAAMM.Level = 0;
IPCAAMM.Number = 0;
IPCAAMM.Marker = 2;
IPCAAMM.Uses = KBAAAMM_nilmodulelist;
IPCAAMM.Usedby = KBAAAMM_nilmodulelist;
QPCAAMM = A_HEAP(A68_180 ) ;
(*QPCAAMM) = IPCAAMM ;
UOCAAMM_module = QPCAAMM;
 /* line 1569: */
UCBAAMM_add_module((&WIAAAMM_modules), UOCAAMM_module, Basic.Star);
 /* line 1570: */
UCBAAMM_add_module(NL(HJCAAMM_local_modules), UOCAAMM_module, Basic.Star);
 /* line 1571: */
 /* line 1572: */
GPCAAMM = A68_TRUE;
} 
else
{ 
 /* line 1573: */
if ( ((*(&((*(&(SOCAAMM_ml->Module)))->Marker)))!=2) )
{ 
RPCAAMM = !Decs;
if ( RPCAAMM )
{RPCAAMM = (*(&((*(&(SOCAAMM_ml->Module)))->Decs)));
}
 /* line 1574: */
if ( RPCAAMM )
{ 
WPCAAMM = UPCAAMM ;
SPCAAMM.data[0] = A_UNITE(VPCAAMM,mode7,7,WPCAAMM);
SPCAAMM.data[1] = A_UNITE(XPCAAMM,mode7,7,ROCAAMM_name);
BQCAAMM = ZPCAAMM ;
SPCAAMM.data[2] = A_UNITE(AQCAAMM,mode7,7,BQCAAMM);
UJBAOSL_oneline( A_HISVEC(CQCAAMM,SPCAAMM,3,A68_52 ), &DQCAAMM );
A_CALLPROC(NL(KJCAAMM_failed),(DQCAAMM),(DQCAAMM,(NL(KJCAAMM_failed)).nonlocals));
 /* line 1575: */
 /* line 1576: */
 /* line 1577: */
GPCAAMM = A68_FALSE;
} 
else
{ 
A_CALLPROC(WOCAAMM_update_module,((*(&(SOCAAMM_ml->Module)))),((*(&(SOCAAMM_ml->Module))),(WOCAAMM_update_module).nonlocals));
 /* line 1578: */
 /* line 1579: */
 /* line 1580: */
GPCAAMM = A68_TRUE;
} 
} 
else
{ 
 /* line 1581: */
if ( ((*(&((*(&(SOCAAMM_ml->Module)))->Filename))).upb>0) )
{ 
GQCAAMM.fn.fn_global = LRAAOSL_newline;
GQCAAMM.nonlocals = A68_NIL;
EQCAAMM.data[0] = A_UNITE(FQCAAMM,mode12,12,GQCAAMM);
KQCAAMM = IQCAAMM ;
EQCAAMM.data[1] = A_UNITE(JQCAAMM,mode7,7,KQCAAMM);
EQCAAMM.data[2] = A_UNITE(LQCAAMM,mode7,7,ROCAAMM_name);
PQCAAMM = NQCAAMM ;
EQCAAMM.data[3] = A_UNITE(OQCAAMM,mode7,7,PQCAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QQCAAMM,EQCAAMM,4,A68_52 ));
 /* line 1582: */
 /* line 1583: */
 /* line 1584: */
GPCAAMM = A68_FALSE;
} 
else
{ 
 /* line 1585: */
 /* line 1586: */
GPCAAMM = A68_FALSE;
} 
} 
} 
} 
} 
A_PROC_EXIT(make_module);
return( GPCAAMM );
} 
#undef NL

A_STATIC A68_VOID  ZAAAAMM_generator(A68_BOOL  YAAAAMM_anonymous, A68_184  *ReturnedValue)
{ 
A68_187  EBAAAMM_anonymous;
A68_VC  FBAAAMM;  /* avoid structure result */
A68_186 * GBAAAMM;  /* YIELD */
A68_184  HBAAAMM;  /* clause result */
{ 
BBAAAMM_generator( YAAAAMM_anonymous, &FBAAAMM );
GBAAAMM = (&((&EBAAAMM_anonymous)->Word)) ;
(*GBAAAMM) = FBAAAMM;
HBAAAMM = EBAAAMM_anonymous;
} 
*ReturnedValue = (HBAAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QBAAAMM_includes(A68_178  A, A68_178  B)
{ 
A68_BOOL  RBAAAMM;  /* optbool result */
A68_BOOL  SBAAAMM;  /* clause result */
A68_BOOL  TBAAAMM;  /* clause result */
A_PROC_ENTRY(includes);
 /* line 83: */
RBAAAMM = (A.Mode==' ');
if ( ! RBAAAMM )
{RBAAAMM = (B.Mode==' ');
}
 /* line 84: */
if ( ! RBAAAMM )
{{ 
if ( (A.Value==B.Value) )
{ 
 /* line 85: */
SBAAAMM = (A.Mode==B.Mode);
} 
else
{ 
 /* line 86: */
SBAAAMM = A68_TRUE;
} 
} 
RBAAAMM = SBAAAMM;
}
TBAAAMM = RBAAAMM;
A_PROC_EXIT(includes);
return( TBAAAMM );
} 
#undef NL

A_STATIC A68_VOID  YBAAAMM_generator(A68_BOOL  XBAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ZBAAAMM;  /* clause result */
A68_VC  ACAAAMM;  /* OPERATORS - dynamic generator */
{ 
ACAAAMM.upb = 0 ;
( XBAAAMM_anonymous? A_VLOC(A68_CHAR ,ACAAAMM): A_VHEAP(A68_CHAR ,ACAAAMM) );
ZBAAAMM = ACAAAMM;
} 
*ReturnedValue = (ZBAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  ECAAAMM_generator(A68_BOOL  DCAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  FCAAAMM;  /* clause result */
A68_VC  GCAAAMM;  /* OPERATORS - dynamic generator */
{ 
GCAAAMM.upb = 11 ;
( DCAAAMM_anonymous? A_VLOC(A68_CHAR ,GCAAAMM): A_VHEAP(A68_CHAR ,GCAAAMM) );
FCAAAMM = GCAAAMM;
} 
*ReturnedValue = (FCAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  NCAAAMM_generator(A68_BOOL  MCAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  OCAAAMM;  /* clause result */
A68_VC  PCAAAMM;  /* OPERATORS - dynamic generator */
{ 
PCAAAMM.upb = 11 ;
( MCAAAMM_anonymous? A_VLOC(A68_CHAR ,PCAAAMM): A_VHEAP(A68_CHAR ,PCAAAMM) );
OCAAAMM = PCAAAMM;
} 
*ReturnedValue = (OCAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  WCAAAMM_generator(A68_BOOL  VCAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  XCAAAMM;  /* clause result */
A68_VC  YCAAAMM;  /* OPERATORS - dynamic generator */
{ 
YCAAAMM.upb = 4 ;
( VCAAAMM_anonymous? A_VLOC(A68_CHAR ,YCAAAMM): A_VHEAP(A68_CHAR ,YCAAAMM) );
XCAAAMM = YCAAAMM;
} 
*ReturnedValue = (XCAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  FDAAAMM_generator(A68_BOOL  EDAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GDAAAMM;  /* clause result */
A68_VC  HDAAAMM;  /* OPERATORS - dynamic generator */
{ 
HDAAAMM.upb = 5 ;
( EDAAAMM_anonymous? A_VLOC(A68_CHAR ,HDAAAMM): A_VHEAP(A68_CHAR ,HDAAAMM) );
GDAAAMM = HDAAAMM;
} 
*ReturnedValue = (GDAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  ODAAAMM_generator(A68_BOOL  NDAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PDAAAMM;  /* clause result */
A68_VC  QDAAAMM;  /* OPERATORS - dynamic generator */
{ 
QDAAAMM.upb = 2 ;
( NDAAAMM_anonymous? A_VLOC(A68_CHAR ,QDAAAMM): A_VHEAP(A68_CHAR ,QDAAAMM) );
PDAAAMM = QDAAAMM;
} 
*ReturnedValue = (PDAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  XDAAAMM_generator(A68_BOOL  WDAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YDAAAMM;  /* clause result */
A68_VC  ZDAAAMM;  /* OPERATORS - dynamic generator */
{ 
ZDAAAMM.upb = 3 ;
( WDAAAMM_anonymous? A_VLOC(A68_CHAR ,ZDAAAMM): A_VHEAP(A68_CHAR ,ZDAAAMM) );
YDAAAMM = ZDAAAMM;
} 
*ReturnedValue = (YDAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  GEAAAMM_generator(A68_BOOL  FEAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HEAAAMM;  /* clause result */
A68_VC  IEAAAMM;  /* OPERATORS - dynamic generator */
{ 
IEAAAMM.upb = 2 ;
( FEAAAMM_anonymous? A_VLOC(A68_CHAR ,IEAAAMM): A_VHEAP(A68_CHAR ,IEAAAMM) );
HEAAAMM = IEAAAMM;
} 
*ReturnedValue = (HEAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  PEAAAMM_generator(A68_BOOL  OEAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QEAAAMM;  /* clause result */
A68_VC  REAAAMM;  /* OPERATORS - dynamic generator */
{ 
REAAAMM.upb = 2 ;
( OEAAAMM_anonymous? A_VLOC(A68_CHAR ,REAAAMM): A_VHEAP(A68_CHAR ,REAAAMM) );
QEAAAMM = REAAAMM;
} 
*ReturnedValue = (QEAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  YEAAAMM_generator(A68_BOOL  XEAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ZEAAAMM;  /* clause result */
A68_VC  AFAAAMM;  /* OPERATORS - dynamic generator */
{ 
AFAAAMM.upb = 6 ;
( XEAAAMM_anonymous? A_VLOC(A68_CHAR ,AFAAAMM): A_VHEAP(A68_CHAR ,AFAAAMM) );
ZEAAAMM = AFAAAMM;
} 
*ReturnedValue = (ZEAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  HFAAAMM_generator(A68_BOOL  GFAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IFAAAMM;  /* clause result */
A68_VC  JFAAAMM;  /* OPERATORS - dynamic generator */
{ 
JFAAAMM.upb = 8 ;
( GFAAAMM_anonymous? A_VLOC(A68_CHAR ,JFAAAMM): A_VHEAP(A68_CHAR ,JFAAAMM) );
IFAAAMM = JFAAAMM;
} 
*ReturnedValue = (IFAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  QFAAAMM_generator(A68_BOOL  PFAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RFAAAMM;  /* clause result */
A68_VC  SFAAAMM;  /* OPERATORS - dynamic generator */
{ 
SFAAAMM.upb = 8 ;
( PFAAAMM_anonymous? A_VLOC(A68_CHAR ,SFAAAMM): A_VHEAP(A68_CHAR ,SFAAAMM) );
RFAAAMM = SFAAAMM;
} 
*ReturnedValue = (RFAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZFAAAMM_generator(A68_BOOL  YFAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AGAAAMM;  /* clause result */
A68_VC  BGAAAMM;  /* OPERATORS - dynamic generator */
{ 
BGAAAMM.upb = 9 ;
( YFAAAMM_anonymous? A_VLOC(A68_CHAR ,BGAAAMM): A_VHEAP(A68_CHAR ,BGAAAMM) );
AGAAAMM = BGAAAMM;
} 
*ReturnedValue = (AGAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  IGAAAMM_generator(A68_BOOL  HGAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JGAAAMM;  /* clause result */
A68_VC  KGAAAMM;  /* OPERATORS - dynamic generator */
{ 
KGAAAMM.upb = 7 ;
( HGAAAMM_anonymous? A_VLOC(A68_CHAR ,KGAAAMM): A_VHEAP(A68_CHAR ,KGAAAMM) );
JGAAAMM = KGAAAMM;
} 
*ReturnedValue = (JGAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  RGAAAMM_generator(A68_BOOL  QGAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SGAAAMM;  /* clause result */
A68_VC  TGAAAMM;  /* OPERATORS - dynamic generator */
{ 
TGAAAMM.upb = 4 ;
( QGAAAMM_anonymous? A_VLOC(A68_CHAR ,TGAAAMM): A_VHEAP(A68_CHAR ,TGAAAMM) );
SGAAAMM = TGAAAMM;
} 
*ReturnedValue = (SGAAAMM);
return;
} 
#undef NL

A68_BOOL  GHAAAMM_flagon(A68_177 * Flag)
{ 
A68_BOOL  HHAAAMM;  /* optbool result */
A68_BOOL  IHAAAMM;  /* clause result */
A_PROC_ENTRY(flagon);
 /* line 123: */
HHAAAMM = A_VC_EQ((*(&(Flag->Text))),ZCAAAMM_true_string);
if ( ! HHAAAMM )
{HHAAAMM = A_VC_EQ((*(&(Flag->Text))),RDAAAMM_on_string);
}
IHAAAMM = HHAAAMM;
A_PROC_EXIT(flagon);
return( IHAAAMM );
} 
#undef NL

A68_BOOL  KHAAAMM_flagoff(A68_177 * Flag)
{ 
A68_BOOL  LHAAAMM;  /* optbool result */
A68_BOOL  MHAAAMM;  /* clause result */
A_PROC_ENTRY(flagoff);
 /* line 126: */
LHAAAMM = A_VC_EQ((*(&(Flag->Text))),IDAAAMM_false_string);
if ( ! LHAAAMM )
{LHAAAMM = A_VC_EQ((*(&(Flag->Text))),AEAAAMM_off_string);
}
MHAAAMM = LHAAAMM;
A_PROC_EXIT(flagoff);
return( MHAAAMM );
} 
#undef NL

A_STATIC A68_VOID  RJAAAMM_generator(A68_BOOL  QJAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SJAAAMM;  /* clause result */
A68_VC  TJAAAMM;  /* OPERATORS - dynamic generator */
{ 
TJAAAMM.upb = 7 ;
( QJAAAMM_anonymous? A_VLOC(A68_CHAR ,TJAAAMM): A_VHEAP(A68_CHAR ,TJAAAMM) );
SJAAAMM = TJAAAMM;
} 
*ReturnedValue = (SJAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  TKAAAMM_generator(A68_BOOL  SKAAAMM_anonymous, A68_164  *ReturnedValue)
{ 
A68_164  UKAAAMM;  /* clause result */
A68_164  VKAAAMM;  /* OPERATORS - dynamic generator */
{ 
VKAAAMM.upb = RKAAAMM_standard_symbols.upb ;
( SKAAAMM_anonymous? A_VLOC(A68_VC ,VKAAAMM): A_VHEAP(A68_VC ,VKAAAMM) );
UKAAAMM = VKAAAMM;
} 
*ReturnedValue = (UKAAAMM);
return;
} 
#undef NL
 /* line 205: */

A68_177 * ALAAAMM_scansymbols(A68_VC  Prefix, A68_199  Action)
{ 
A68_INT  BLAAAMM_ptop;
A68_BOOL  CLAAAMM_select;
A68_177 * DLAAAMM_sym;
A68_BOOL  ELAAAMM;  /* optbool result */
A68_BOOL  FLAAAMM;  /* optbool result */
A68_BOOL  GLAAAMM;  /* optbool result */
A68_VC  HLAAAMM;  /* OPERATORS - trim index */
A68_VC  ILAAAMM;  /* OPERATORS - trim index */
A68_177 * JLAAAMM;  /* clause result */
A_PROC_ENTRY(scansymbols);
 /* line 206: */
 /* line 207: */
{ 
BLAAAMM_ptop = Prefix.upb;
 /* line 208: */
CLAAAMM_select = (BLAAAMM_ptop>0);
 /* line 209: */
DLAAAMM_sym = XIAAAMM_symbols;
 /* line 211: */
for ( ;; )
{ 
 /* line 212: */
ELAAAMM = (DLAAAMM_sym!=JBAAAMM_nilsymbol);
if ( ELAAAMM )
{FLAAAMM = CLAAAMM_select;
if ( FLAAAMM )
{ /* line 213: */
GLAAAMM = ((*(&(DLAAAMM_sym->Name))).upb<BLAAAMM_ptop);
if ( ! GLAAAMM )
{HLAAAMM = (*(&(DLAAAMM_sym->Name))) ;
GLAAAMM = A_VC_NE(A_VTRIM(ILAAAMM,(HLAAAMM),A_VTSCRIPT(&(ILAAAMM.upb),(HLAAAMM).upb,1,BLAAAMM_ptop)),Prefix);
}
FLAAAMM = GLAAAMM;
}
 /* line 214: */
if ( ! FLAAAMM )
{FLAAAMM = A_CALLPROC(Action,(DLAAAMM_sym),(DLAAAMM_sym,(Action).nonlocals));
}
 /* line 215: */
ELAAAMM = FLAAAMM;
}
 /* line 216: */
if ( !(ELAAAMM) ) break;
 /* line 217: */
DLAAAMM_sym = (*(&(DLAAAMM_sym->Rest)));
}
 /* line 218: */
 /* line 219: */
JLAAAMM = DLAAAMM_sym;
} 
A_PROC_EXIT(scansymbols);
return( JLAAAMM );
} 
#undef NL

A68_177 * LLAAAMM_findsymbol(A68_VC  Name)
{ 
A68_199  OLAAAMM_anonymous;   /* proc value of non-global proc */
A68_177 * SLAAAMM;  /* clause result */
A_PROC_ENTRY(findsymbol);
 /* line 222: */
 /* line 223: */
A_CLOSURE( OLAAAMM_anonymous, PLAAAMM_anonymous, QLAAAMM_anonymous );
(( QLAAAMM_anonymous * ) ( OLAAAMM_anonymous.nonlocals )) -> Name = Name;
 /* line 224: */
SLAAAMM = ALAAAMM_scansymbols(TLAAAMM, OLAAAMM_anonymous);
A_PROC_EXIT(findsymbol);
return( SLAAAMM );
} 
#undef NL

A68_BOOL  WLAAAMM_move_symbol_pointer(A68_VC  Name, A68_BOOL  Before)
{ 
A68_BOOL  XLAAAMM_noname;
A68_199  ZLAAAMM_move_action;   /* proc value of non-global proc */
A68_BOOL  DMAAAMM;  /* optbool result */
A68_BOOL  EMAAAMM;  /* clause result */
A_PROC_ENTRY(move_symbol_pointer);
 /* line 227: */
 /* line 228: */
{ 
XLAAAMM_noname = (Name.upb==0);
 /* line 230: */
A_CLOSURE( ZLAAAMM_move_action, AMAAAMM_move_action, BMAAAMM_move_action );
(( BMAAAMM_move_action * ) ( ZLAAAMM_move_action.nonlocals )) -> Before = Before;
 /* line 235: */
YIAAAMM_sym_tail = (&XIAAAMM_symbols);
 /* line 236: */
DMAAAMM = XLAAAMM_noname;
if ( DMAAAMM )
{DMAAAMM = Before;
}
 /* line 237: */
if ( DMAAAMM )
{ 
 /* line 238: */
 /* line 239: */
EMAAAMM = A68_TRUE;
} 
else
{ 
ALAAAMM_scansymbols(Name, ZLAAAMM_move_action);
 /* line 240: */
if ( ((*YIAAAMM_sym_tail)==JBAAAMM_nilsymbol) )
{ 
EMAAAMM = XLAAAMM_noname;
} 
else
{ 
 /* line 241: */
 /* line 242: */
EMAAAMM = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(move_symbol_pointer);
return( EMAAAMM );
} 
#undef NL

A68_VOID  GMAAAMM_mark_action_symbol(A68_177 * Sym)
{ 
A68_VC  HMAAAMM_name;
A68_INT  IMAAAMM_top;
A68_BOOL  JMAAAMM;  /* optbool result */
A68_VC  KMAAAMM;  /* OPERATORS - trim index */
A68_BITS * LMAAAMM;  /* YIELD */
A68_BOOL  MMAAAMM;  /* optbool result */
A68_VC  NMAAAMM;  /* OPERATORS - trim index */
A68_BITS * OMAAAMM;  /* YIELD */
A68_BOOL  PMAAAMM;  /* optbool result */
A68_VC  QMAAAMM;  /* OPERATORS - trim index */
A68_BITS * RMAAAMM;  /* YIELD */
A_PROC_ENTRY(mark_action_symbol);
 /* line 245: */
 /* line 246: */
{ 
HMAAAMM_name = (*(&(Sym->Name)));
 /* line 247: */
IMAAAMM_top = HMAAAMM_name.upb;
 /* line 249: */
 /* line 250: */
JMAAAMM = (IMAAAMM_top>EHAAAMM_link_str_top);
if ( JMAAAMM )
{JMAAAMM = A_VC_EQ(A_VTRIM(KMAAAMM,(HMAAAMM_name),A_VTSCRIPT(&(KMAAAMM.upb),(HMAAAMM_name).upb,1,EHAAAMM_link_str_top)),UGAAAMM_link_string);
}
 /* line 251: */
if ( JMAAAMM )
{ 
 /* line 252: */
LMAAAMM = (&(Sym->Tags)) ;
(*LMAAAMM) = (A68_BITS )((*(&(Sym->Tags)))|HJAAAMM_link_tag);
} 
else
{ 
 /* line 253: */
MMAAAMM = (IMAAAMM_top>DHAAAMM_compile_str_top);
if ( MMAAAMM )
{MMAAAMM = A_VC_EQ(A_VTRIM(NMAAAMM,(HMAAAMM_name),A_VTSCRIPT(&(NMAAAMM.upb),(HMAAAMM_name).upb,1,DHAAAMM_compile_str_top)),LGAAAMM_compile_string);
}
 /* line 254: */
if ( MMAAAMM )
{ 
 /* line 255: */
OMAAAMM = (&(Sym->Tags)) ;
(*OMAAAMM) = (A68_BITS )((*(&(Sym->Tags)))|GJAAAMM_compile_tag);
} 
else
{ 
 /* line 256: */
PMAAAMM = (IMAAAMM_top>CHAAAMM_translate_str_top);
if ( PMAAAMM )
{PMAAAMM = A_VC_EQ(A_VTRIM(QMAAAMM,(HMAAAMM_name),A_VTSCRIPT(&(QMAAAMM.upb),(HMAAAMM_name).upb,1,CHAAAMM_translate_str_top)),CGAAAMM_translate_string);
}
 /* line 257: */
if ( PMAAAMM )
{ 
 /* line 258: */
 /* line 259: */
RMAAAMM = (&(Sym->Tags)) ;
(*RMAAAMM) = (A68_BITS )((*(&(Sym->Tags)))|FJAAAMM_translate_tag);
} 
} 
} 
} 
A_PROC_EXIT(mark_action_symbol);
return;
} 
#undef NL
 /* line 262: */
 /* line 263: */

A68_177 * VMAAAMM_define_symbol(A68_VC  Name, A68_VC  Text, A68_BITS  Tags)
{ 
A68_177 * WMAAAMM_sym;
A68_BITS  XMAAAMM_is_changed_tag;
A68_BITS  YMAAAMM_dest_mark;
A68_BOOL  ZMAAAMM;  /* optbool result */
A68_BOOL  ANAAAMM_local_sym;
A68_BOOL  BNAAAMM;  /* optbool result */
A68_BOOL  CNAAAMM;  /* optbool result */
A68_BITS * DNAAAMM;  /* YIELD */
A68_VC * ENAAAMM;  /* YIELD */
A68_177  FNAAAMM;  /* collateral clause result */
A68_VC  GNAAAMM;  /* avoid structure result */
A68_177 * HNAAAMM;  /* YIELD */
A68_177 * INAAAMM;  /* clause result */
A_PROC_ENTRY(define_symbol);
 /* line 264: */
 /* line 265: */
{ 
WMAAAMM_sym = XIAAAMM_symbols;
 /* line 266: */
XMAAAMM_is_changed_tag = (A68_BITS )(Tags&ZIAAAMM_changed_tag);
 /* line 267: */
YMAAAMM_dest_mark = (A68_BITS )(Tags&IJAAAMM_dest_tag);
 /* line 269: */
 /* line 270: */
if ( (XMAAAMM_is_changed_tag!=0X0U) )
{ 
 /* line 271: */
LJAAAMM_symbols_modified = (A68_BITS )(LJAAAMM_symbols_modified|YMAAAMM_dest_mark);
} 
 /* line 272: */
for ( ;; )
{ 
ZMAAAMM = (WMAAAMM_sym!=JBAAAMM_nilsymbol);
if ( ZMAAAMM )
{ /* line 273: */
ZMAAAMM = A_VC_NE(Name,(*(&(WMAAAMM_sym->Name))));
}
 /* line 274: */
if ( !(ZMAAAMM) ) break;
 /* line 275: */
WMAAAMM_sym = (*(&(WMAAAMM_sym->Rest)));
}
 /* line 276: */
 /* line 277: */
if ( (WMAAAMM_sym!=JBAAAMM_nilsymbol) )
{ 
ANAAAMM_local_sym = ((A68_BITS )((*(&(WMAAAMM_sym->Tags)))&DJAAAMM_local_tag)!=0X0U);
 /* line 279: */
 /* line 280: */
BNAAAMM = ((A68_BITS )(Tags&DJAAAMM_local_tag)!=0X0U);
if ( ! BNAAAMM )
{CNAAAMM = !ANAAAMM_local_sym;
if ( CNAAAMM )
{CNAAAMM = A_VC_NE((*(&(WMAAAMM_sym->Text))),Text);
}
BNAAAMM = CNAAAMM;
}
 /* line 281: */
if ( BNAAAMM )
{ 
 /* line 282: */
DNAAAMM = (&(WMAAAMM_sym->Tags)) ;
(*DNAAAMM) = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(WMAAAMM_sym->Tags)))&JJAAAMM_dest_mask)|YMAAAMM_dest_mark)|XMAAAMM_is_changed_tag);
 /* line 283: */
 /* line 284: */
ENAAAMM = (&(WMAAAMM_sym->Text)) ;
(*ENAAAMM) = Text;
} 
else
{ 
 /* line 285: */
if ( ANAAAMM_local_sym )
{ 
 /* line 286: */
 /* line 287: */
 /* line 288: */
WMAAAMM_sym = JBAAAMM_nilsymbol;
} 
} 
} 
else
{ 
 /* line 289: */
ZAAAOSI_makervc( Name, &GNAAAMM );
FNAAAMM.Name = GNAAAMM;
FNAAAMM.Text = Text;
FNAAAMM.Tags = Tags;
FNAAAMM.Last = JBAAAMM_nilsymbol;
FNAAAMM.Rest = (*YIAAAMM_sym_tail);
HNAAAMM = A_HEAP(A68_177 ) ;
(*HNAAAMM) = FNAAAMM ;
(*YIAAAMM_sym_tail) = WMAAAMM_sym = HNAAAMM;
 /* line 290: */
 /* line 291: */
YIAAAMM_sym_tail = (&((*YIAAAMM_sym_tail)->Rest));
} 
 /* line 292: */
 /* line 293: */
INAAAMM = WMAAAMM_sym;
} 
A_PROC_EXIT(define_symbol);
return( INAAAMM );
} 
#undef NL

A68_INT  KNAAAMM_undefine_symbol(A68_VC  Name)
{ 
A68_177 ** LNAAAMM_sym;
A68_BOOL  MNAAAMM;  /* optbool result */
A68_INT  NNAAAMM;  /* clause result */
A68_BITS  ONAAAMM_dest_mark;
A68_BITS * PNAAAMM;  /* YIELD */
A68_VC * QNAAAMM_text;
A68_177 ** RNAAAMM_sym;
A68_177 *** SNAAAMM;  /* forall control - []x */
A68_INT  TNAAAMM;  /* forall loop counter */
A68_VC * UNAAAMM;  /* YIELD */
A68_BITS  VNAAAMM_dest_mark;
A_PROC_ENTRY(undefine_symbol);
 /* line 296: */
 /* line 297: */
{ 
LNAAAMM_sym = (&XIAAAMM_symbols);
 /* line 299: */
for ( ;; )
{ 
MNAAAMM = ((*LNAAAMM_sym)!=JBAAAMM_nilsymbol);
if ( MNAAAMM )
{ /* line 300: */
MNAAAMM = A_VC_NE(Name,(*(&((*LNAAAMM_sym)->Name))));
}
 /* line 301: */
if ( !(MNAAAMM) ) break;
 /* line 302: */
LNAAAMM_sym = (&((*LNAAAMM_sym)->Rest));
}
 /* line 303: */
 /* line 305: */
if ( ((*LNAAAMM_sym)==JBAAAMM_nilsymbol) )
{ 
NNAAAMM = 2;
} 
else
{ 
 /* line 306: */
if ( ((A68_BITS )((*(&((*LNAAAMM_sym)->Tags)))&EJAAAMM_system_tag)!=0X0U) )
{ 
ONAAAMM_dest_mark = (A68_BITS )((*(&((*LNAAAMM_sym)->Tags)))&IJAAAMM_dest_tag);
 /* line 308: */
LJAAAMM_symbols_modified = (A68_BITS )(LJAAAMM_symbols_modified|ONAAAMM_dest_mark);
 /* line 309: */
PNAAAMM = (&((*LNAAAMM_sym)->Tags)) ;
(*PNAAAMM) = (A68_BITS )((*(&((*LNAAAMM_sym)->Tags)))&JJAAAMM_dest_mask);
 /* line 310: */
 /* line 311: */
TNAAAMM = WKAAAMM_init_sym_values.upb -1;
if ( TNAAAMM != RKAAAMM_standard_symbols.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
QNAAAMM_text = WKAAAMM_init_sym_values.data;
SNAAAMM = RKAAAMM_standard_symbols.data;
for (;TNAAAMM-- >= 0;
(QNAAAMM_text++
,SNAAAMM++
) )
{
RNAAAMM_sym = *SNAAAMM;
 /* line 312: */
if ( A_VC_EQ((*(&((*RNAAAMM_sym)->Name))),Name) )
{ 
 /* line 313: */
UNAAAMM = (&((*RNAAAMM_sym)->Text)) ;
(*UNAAAMM) = (*QNAAAMM_text);
} 
}
 /* line 314: */
 /* line 315: */
NNAAAMM = 3;
} 
else
{ 
 /* line 317: */
if ( ((A68_BITS )((*(&((*LNAAAMM_sym)->Tags)))&DJAAAMM_local_tag)!=0X0U) )
{ 
 /* line 318: */
NNAAAMM = 4;
} 
else
{ 
VNAAAMM_dest_mark = (A68_BITS )((*(&((*LNAAAMM_sym)->Tags)))&IJAAAMM_dest_tag);
 /* line 320: */
LJAAAMM_symbols_modified = (A68_BITS )(LJAAAMM_symbols_modified|VNAAAMM_dest_mark);
 /* line 321: */
(*LNAAAMM_sym) = (*(&((*LNAAAMM_sym)->Rest)));
 /* line 322: */
 /* line 323: */
 /* line 324: */
NNAAAMM = 1;
} 
} 
} 
} 
A_PROC_EXIT(undefine_symbol);
return( NNAAAMM );
} 
#undef NL

A_STATIC A68_BOOL  XNAAAMM_symbols_changed(A68_BITS  Tag)
{ 
A68_BOOL  YNAAAMM;  /* clause result */
A_PROC_ENTRY(symbols_changed);
 /* line 327: */
 /* line 328: */
 /* line 329: */
YNAAAMM = ((A68_BITS )(LJAAAMM_symbols_modified&Tag)!=0X0U);
A_PROC_EXIT(symbols_changed);
return( YNAAAMM );
} 
#undef NL

A_STATIC A68_VOID  ZNAAAMM_initialise_std_symbols(void)
{ 
A68_VC * YOAAAMM_text;
A68_177 ** ZOAAAMM_sym;
A68_177 *** APAAAMM;  /* forall control - []x */
A68_INT  BPAAAMM;  /* forall loop counter */
A_PROC_ENTRY(initialise_std_symbols);
{ 
 /* line 334: */
DKAAAMM_default_off = VMAAAMM_define_symbol(BOAAAMM, AEAAAMM_off_string, DJAAAMM_local_tag);
 /* line 335: */
 /* line 336: */
EKAAAMM_default_on = VMAAAMM_define_symbol(DOAAAMM, RDAAAMM_on_string, DJAAAMM_local_tag);
 /* line 337: */
 /* line 338: */
FKAAAMM_default_debug = VMAAAMM_define_symbol(FOAAAMM, RDAAAMM_on_string, EJAAAMM_system_tag);
 /* line 339: */
 /* line 340: */
GKAAAMM_default_star_chars = VMAAAMM_define_symbol(HOAAAMM, MJAAAMM_std_star_chars, EJAAAMM_system_tag);
 /* line 341: */
 /* line 342: */
HKAAAMM_default_heap_size = VMAAAMM_define_symbol(JOAAAMM, PJAAAMM_std_heap_size, EJAAAMM_system_tag);
 /* line 343: */
 /* line 344: */
IKAAAMM_default_optimise_chars = VMAAAMM_define_symbol(LOAAAMM, AEAAAMM_off_string, EJAAAMM_system_tag);
 /* line 345: */
 /* line 346: */
JKAAAMM_default_exe_dir = VMAAAMM_define_symbol(NOAAAMM, OJAAAMM_std_exe_dir, EJAAAMM_system_tag);
 /* line 348: */
 /* line 349: */
KKAAAMM_edit_command = VMAAAMM_define_symbol(POAAAMM, NJAAAMM_std_edit_command, EJAAAMM_system_tag);
 /* line 350: */
 /* line 351: */
LKAAAMM_auto_link = VMAAAMM_define_symbol(ROAAAMM, RDAAAMM_on_string, EJAAAMM_system_tag);
 /* line 352: */
 /* line 353: */
MKAAAMM_auto_version = VMAAAMM_define_symbol(TOAAAMM, AEAAAMM_off_string, EJAAAMM_system_tag);
 /* line 354: */
 /* line 355: */
NKAAAMM_notify_at_go = VMAAAMM_define_symbol(VOAAAMM, RDAAAMM_on_string, EJAAAMM_system_tag);
 /* line 356: */
 /* line 357: */
OKAAAMM_bell_flag = VMAAAMM_define_symbol(XOAAAMM, RDAAAMM_on_string, EJAAAMM_system_tag);
 /* line 359: */
 /* line 360: */
BPAAAMM = WKAAAMM_init_sym_values.upb -1;
if ( BPAAAMM != RKAAAMM_standard_symbols.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
YOAAAMM_text = WKAAAMM_init_sym_values.data;
APAAAMM = RKAAAMM_standard_symbols.data;
for (;BPAAAMM-- >= 0;
(YOAAAMM_text++
,APAAAMM++
) )
{
ZOAAAMM_sym = *APAAAMM;
 /* line 361: */
 /* line 362: */
(*YOAAAMM_text) = (*(&((*ZOAAAMM_sym)->Text)));
}
 /* line 363: */
 /* line 364: */
/*SKIP*/;
} 
A_PROC_EXIT(initialise_std_symbols);
return;
} 
#undef NL

A_STATIC A68_VOID  CPAAAMM_default_off_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  DPAAAMM;  /* clause result */
A_PROC_ENTRY(default_off_proc);
DPAAAMM = AEAAAMM_off_string;
A_PROC_EXIT(default_off_proc);
*ReturnedValue = (DPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  EPAAAMM_default_on_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  FPAAAMM;  /* clause result */
A_PROC_ENTRY(default_on_proc);
FPAAAMM = RDAAAMM_on_string;
A_PROC_EXIT(default_on_proc);
*ReturnedValue = (FPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  GPAAAMM_default_debug_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  HPAAAMM;  /* clause result */
A_PROC_ENTRY(default_debug_proc);
HPAAAMM = (*(&(FKAAAMM_default_debug->Text)));
A_PROC_EXIT(default_debug_proc);
*ReturnedValue = (HPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  IPAAAMM_default_star_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  JPAAAMM;  /* clause result */
A_PROC_ENTRY(default_star_proc);
JPAAAMM = (*(&(GKAAAMM_default_star_chars->Text)));
A_PROC_EXIT(default_star_proc);
*ReturnedValue = (JPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  KPAAAMM_default_heap_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  LPAAAMM;  /* clause result */
A_PROC_ENTRY(default_heap_proc);
LPAAAMM = (*(&(HKAAAMM_default_heap_size->Text)));
A_PROC_EXIT(default_heap_proc);
*ReturnedValue = (LPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  MPAAAMM_default_exename_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  NPAAAMM;  /* clause result */
A_PROC_ENTRY(default_exename_proc);
NPAAAMM = (*(&(JKAAAMM_default_exe_dir->Text)));
A_PROC_EXIT(default_exename_proc);
*ReturnedValue = (NPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  OPAAAMM_default_optimise_proc(A68_VC  *ReturnedValue)
{ 
A68_VC  PPAAAMM;  /* clause result */
A_PROC_ENTRY(default_optimise_proc);
PPAAAMM = (*(&(IKAAAMM_default_optimise_chars->Text)));
A_PROC_EXIT(default_optimise_proc);
*ReturnedValue = (PPAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  AQAAAMM_generator(A68_BOOL  ZPAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BQAAAMM;  /* clause result */
A68_VC  CQAAAMM;  /* OPERATORS - dynamic generator */
{ 
CQAAAMM.upb = 7 ;
( ZPAAAMM_anonymous? A_VLOC(A68_CHAR ,CQAAAMM): A_VHEAP(A68_CHAR ,CQAAAMM) );
BQAAAMM = CQAAAMM;
} 
*ReturnedValue = (BQAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  JQAAAMM_generator(A68_BOOL  IQAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KQAAAMM;  /* clause result */
A68_VC  LQAAAMM;  /* OPERATORS - dynamic generator */
{ 
LQAAAMM.upb = 4 ;
( IQAAAMM_anonymous? A_VLOC(A68_CHAR ,LQAAAMM): A_VHEAP(A68_CHAR ,LQAAAMM) );
KQAAAMM = LQAAAMM;
} 
*ReturnedValue = (KQAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  SQAAAMM_generator(A68_BOOL  RQAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  TQAAAMM;  /* clause result */
A68_VC  UQAAAMM;  /* OPERATORS - dynamic generator */
{ 
UQAAAMM.upb = 5 ;
( RQAAAMM_anonymous? A_VLOC(A68_CHAR ,UQAAAMM): A_VHEAP(A68_CHAR ,UQAAAMM) );
TQAAAMM = UQAAAMM;
} 
*ReturnedValue = (TQAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  BRAAAMM_generator(A68_BOOL  ARAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CRAAAMM;  /* clause result */
A68_VC  DRAAAMM;  /* OPERATORS - dynamic generator */
{ 
DRAAAMM.upb = 5 ;
( ARAAAMM_anonymous? A_VLOC(A68_CHAR ,DRAAAMM): A_VHEAP(A68_CHAR ,DRAAAMM) );
CRAAAMM = DRAAAMM;
} 
*ReturnedValue = (CRAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  KRAAAMM_generator(A68_BOOL  JRAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  LRAAAMM;  /* clause result */
A68_VC  MRAAAMM;  /* OPERATORS - dynamic generator */
{ 
MRAAAMM.upb = 9 ;
( JRAAAMM_anonymous? A_VLOC(A68_CHAR ,MRAAAMM): A_VHEAP(A68_CHAR ,MRAAAMM) );
LRAAAMM = MRAAAMM;
} 
*ReturnedValue = (LRAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  TRAAAMM_generator(A68_BOOL  SRAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  URAAAMM;  /* clause result */
A68_VC  VRAAAMM;  /* OPERATORS - dynamic generator */
{ 
VRAAAMM.upb = 7 ;
( SRAAAMM_anonymous? A_VLOC(A68_CHAR ,VRAAAMM): A_VHEAP(A68_CHAR ,VRAAAMM) );
URAAAMM = VRAAAMM;
} 
*ReturnedValue = (URAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  CSAAAMM_generator(A68_BOOL  BSAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DSAAAMM;  /* clause result */
A68_VC  ESAAAMM;  /* OPERATORS - dynamic generator */
{ 
ESAAAMM.upb = 7 ;
( BSAAAMM_anonymous? A_VLOC(A68_CHAR ,ESAAAMM): A_VHEAP(A68_CHAR ,ESAAAMM) );
DSAAAMM = ESAAAMM;
} 
*ReturnedValue = (DSAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  LSAAAMM_generator(A68_BOOL  KSAAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MSAAAMM;  /* clause result */
A68_VC  NSAAAMM;  /* OPERATORS - dynamic generator */
{ 
NSAAAMM.upb = 8 ;
( KSAAAMM_anonymous? A_VLOC(A68_CHAR ,NSAAAMM): A_VHEAP(A68_CHAR ,NSAAAMM) );
MSAAAMM = NSAAAMM;
} 
*ReturnedValue = (MSAAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  USAAAMM_generator(A68_BOOL  TSAAAMM_anonymous, A68_181  *ReturnedValue)
{ 
A68_181  VSAAAMM;  /* clause result */
A68_181  WSAAAMM;  /* OPERATORS - dynamic generator */
{ 
WSAAAMM.upb = YPAAAMM_max_attribute ;
( TSAAAMM_anonymous? A_VLOC(A68_179 ,WSAAAMM): A_VHEAP(A68_179 ,WSAAAMM) );
VSAAAMM = WSAAAMM;
} 
*ReturnedValue = (VSAAAMM);
return;
} 
#undef NL

A68_VOID  ATAAAMM_initialise_mm_basics(A68_218  Os, A68_VC  *ReturnedValue)
{ 
A68_220  BTAAAMM;  /* collateral clause result */
A68_181  CTAAAMM;  /* OPERATORS - istruct -> vector */
A68_181  DTAAAMM;  /* OPERATORS - assign op */
A68_VC  ETAAAMM;  /* clause result */
A_PROC_ENTRY(initialise_mm_basics);
 /* line 402: */
 /* line 403: */
{ 
CKAAAMM_operating_system = Os.Operating_system;
 /* line 404: */
MJAAAMM_std_star_chars = Os.Star_chars;
 /* line 405: */
NJAAAMM_std_edit_command = Os.Edit_command;
 /* line 406: */
OJAAAMM_std_exe_dir = Os.Exe_dir;
 /* line 407: */
PJAAAMM_std_heap_size = Os.Heap_size;
 /* line 408: */
VIAAAMM_case_sensitive = Os.Case_sensitive;
 /* line 409: */
ZNAAAMM_initialise_std_symbols();
 /* line 410: */
 /* line 411: */
BTAAAMM.data[0].Name = DQAAAMM_compile_txt;
BTAAAMM.data[0].Value = AEAAAMM_off_string;
BTAAAMM.data[0].Initvalue = AEAAAMM_off_string;
 /* line 412: */
BTAAAMM.data[0].Default = DKAAAMM_default_off;
BTAAAMM.data[0].Permanent = A68_FALSE;
 /* line 413: */
BTAAAMM.data[0].Marker = 0X1U;
BTAAAMM.data[1].Name = MQAAAMM_link_txt;
BTAAAMM.data[1].Value = AEAAAMM_off_string;
BTAAAMM.data[1].Initvalue = AEAAAMM_off_string;
 /* line 414: */
BTAAAMM.data[1].Default = DKAAAMM_default_off;
BTAAAMM.data[1].Permanent = A68_FALSE;
 /* line 415: */
BTAAAMM.data[1].Marker = 0X4U;
BTAAAMM.data[2].Name = VQAAAMM_debug_txt;
BTAAAMM.data[2].Value = RDAAAMM_on_string;
BTAAAMM.data[2].Initvalue = RDAAAMM_on_string;
 /* line 416: */
BTAAAMM.data[2].Default = FKAAAMM_default_debug;
BTAAAMM.data[2].Permanent = A68_FALSE;
 /* line 417: */
BTAAAMM.data[2].Marker = 0X10U;
BTAAAMM.data[3].Name = ERAAAMM_star_txt;
BTAAAMM.data[3].Value = MJAAAMM_std_star_chars;
BTAAAMM.data[3].Initvalue = MJAAAMM_std_star_chars;
 /* line 418: */
BTAAAMM.data[3].Default = GKAAAMM_default_star_chars;
BTAAAMM.data[3].Permanent = A68_TRUE;
 /* line 419: */
BTAAAMM.data[3].Marker = 0X40U;
BTAAAMM.data[4].Name = NRAAAMM_heap_size_txt;
BTAAAMM.data[4].Value = PJAAAMM_std_heap_size;
BTAAAMM.data[4].Initvalue = PJAAAMM_std_heap_size;
 /* line 420: */
BTAAAMM.data[4].Default = HKAAAMM_default_heap_size;
BTAAAMM.data[4].Permanent = A68_FALSE;
 /* line 421: */
BTAAAMM.data[4].Marker = 0X100U;
BTAAAMM.data[5].Name = WRAAAMM_exename_txt;
BTAAAMM.data[5].Value = OJAAAMM_std_exe_dir;
BTAAAMM.data[5].Initvalue = OJAAAMM_std_exe_dir;
 /* line 422: */
BTAAAMM.data[5].Default = JKAAAMM_default_exe_dir;
BTAAAMM.data[5].Permanent = A68_FALSE;
 /* line 423: */
BTAAAMM.data[5].Marker = 0X400U;
BTAAAMM.data[6].Name = FSAAAMM_version_txt;
BTAAAMM.data[6].Value = AEAAAMM_off_string;
BTAAAMM.data[6].Initvalue = AEAAAMM_off_string;
 /* line 424: */
BTAAAMM.data[6].Default = DKAAAMM_default_off;
BTAAAMM.data[6].Permanent = A68_TRUE;
 /* line 425: */
BTAAAMM.data[6].Marker = 0X10000U;
BTAAAMM.data[7].Name = OSAAAMM_optimise_txt;
BTAAAMM.data[7].Value = AEAAAMM_off_string;
BTAAAMM.data[7].Initvalue = AEAAAMM_off_string;
 /* line 426: */
BTAAAMM.data[7].Default = IKAAAMM_default_optimise_chars;
BTAAAMM.data[7].Permanent = A68_TRUE;
BTAAAMM.data[7].Marker = 0X40000U;
DTAAAMM = A_HISVEC(CTAAAMM,BTAAAMM,8,A68_179 ) ;
A_VASSIGN2(DTAAAMM,XSAAAMM_default_attributes,A68_179 );
 /* line 427: */
 /* line 428: */
ETAAAMM = CKAAAMM_operating_system;
} 
A_PROC_EXIT(initialise_mm_basics);
*ReturnedValue = (ETAAAMM);
return;
} 
#undef NL

A68_VOID  GTAAAMM_attribute_name(A68_INT  Attribute_number, A68_VC  *ReturnedValue)
{ 
A68_VC  HTAAAMM;  /* clause result */
A_PROC_ENTRY(attribute_name);
 /* line 431: */
 /* line 432: */
 /* line 433: */
HTAAAMM = (*(&((&A_VINDEX(XSAAAMM_default_attributes,Attribute_number))->Name)));
A_PROC_EXIT(attribute_name);
*ReturnedValue = (HTAAAMM);
return;
} 
#undef NL

A68_VOID  KTAAAMM_attribute_value(A68_180 * M, A68_INT  Attribute_number, A68_VC  *ReturnedValue)
{ 
A68_181  LTAAAMM;  /* OPERATORS - simple index */
A68_179 * MTAAAMM_attr;
A68_VC  NTAAAMM;  /* clause result */
A_PROC_ENTRY(attribute_value);
 /* line 436: */
 /* line 437: */
{ 
LTAAAMM = (*(&(M->Attributes))) ;
MTAAAMM_attr = (&A_VINDEX(LTAAAMM,Attribute_number));
 /* line 439: */
 /* line 441: */
if ( ((A68_BITS )((*(&(M->State)))&(*(&(MTAAAMM_attr->Marker))))!=0X0U) )
{ 
 /* line 443: */
NTAAAMM = (*(&(MTAAAMM_attr->Value)));
} 
else
{ 
 /* line 444: */
NTAAAMM = (*(&((*(&(MTAAAMM_attr->Default)))->Text)));
} 
} 
A_PROC_EXIT(attribute_value);
*ReturnedValue = (NTAAAMM);
return;
} 
#undef NL

A68_BOOL  QTAAAMM_attribute_state(A68_180 * M, A68_INT  Attribute_number)
{ 
A68_VC  RTAAAMM;  /* avoid structure result */
A68_VC  STAAAMM_value;
A68_BOOL  TTAAAMM;  /* optbool result */
A68_BOOL  UTAAAMM;  /* clause result */
A_PROC_ENTRY(attribute_state);
 /* line 447: */
 /* line 448: */
{ 
KTAAAMM_attribute_value( M, Attribute_number, &RTAAAMM );
STAAAMM_value = RTAAAMM;
 /* line 450: */
TTAAAMM = A_VC_EQ(STAAAMM_value,RDAAAMM_on_string);
if ( ! TTAAAMM )
{ /* line 451: */
TTAAAMM = A_VC_EQ(STAAAMM_value,ZCAAAMM_true_string);
}
UTAAAMM = TTAAAMM;
} 
A_PROC_EXIT(attribute_state);
return( UTAAAMM );
} 
#undef NL
 /* line 454: */
 /* line 455: */

A68_VOID  YTAAAMM_set_attribute(A68_180 * M, A68_INT  Attribute_number, A68_223  Value)
{ 
A68_181  ZTAAAMM;  /* OPERATORS - simple index */
A68_179 * AUAAAMM_attr;
A68_223  BUAAAMM;  /* united object - for case conformity */
A68_VC  CUAAAMM_str;
A68_VC  DUAAAMM;  /* clause result */
A68_BOOL  EUAAAMM_on;
A68_VC  FUAAAMM;  /* OPERATORS - skip to mode */
A68_VC  GUAAAMM_new_value;
A68_BITS * HUAAAMM;  /* YIELD */
A68_VC * IUAAAMM;  /* YIELD */
A_PROC_ENTRY(set_attribute);
 /* line 456: */
 /* line 457: */
{ 
ZTAAAMM = (*(&(M->Attributes))) ;
AUAAAMM_attr = (&A_VINDEX(ZTAAAMM,Attribute_number));
 /* line 458: */
 /* line 459: */
 /* line 460: */
BUAAAMM = Value ;
switch ( BUAAAMM.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
CUAAAMM_str = (BUAAAMM.data.mode1);
 /* line 461: */
DUAAAMM = CUAAAMM_str;
break;
case 2: /* BOOL */
EUAAAMM_on = (BUAAAMM.data.mode2);
if ( EUAAAMM_on )
{ 
DUAAAMM = RDAAAMM_on_string;
} 
else
{ 
 /* line 462: */
 /* line 464: */
DUAAAMM = AEAAAMM_off_string;
} 
break;
default: 
DUAAAMM = FUAAAMM;
break;
} 
GUAAAMM_new_value = DUAAAMM;
 /* line 466: */
HUAAAMM = (&(M->State)) ;
(*HUAAAMM) = (A68_BITS )((*(&(M->State)))|(*(&(AUAAAMM_attr->Marker))));
 /* line 467: */
 /* line 468: */
IUAAAMM = (&(AUAAAMM_attr->Value)) ;
(*IUAAAMM) = GUAAAMM_new_value;
} 
A_PROC_EXIT(set_attribute);
return;
} 
#undef NL

A68_VOID  LUAAAMM_clear_attribute(A68_180 * M, A68_INT  Attribute_number)
{ 
A68_181  MUAAAMM;  /* OPERATORS - simple index */
A68_179 * NUAAAMM_attr;
A68_BITS * OUAAAMM;  /* YIELD */
A68_VC * PUAAAMM;  /* YIELD */
A_PROC_ENTRY(clear_attribute);
 /* line 471: */
 /* line 472: */
{ 
MUAAAMM = (*(&(M->Attributes))) ;
NUAAAMM_attr = (&A_VINDEX(MUAAAMM,Attribute_number));
 /* line 474: */
OUAAAMM = (&(M->State)) ;
(*OUAAAMM) = (A68_BITS )((*(&(M->State)))&~(*(&(NUAAAMM_attr->Marker))));
 /* line 475: */
 /* line 476: */
PUAAAMM = (&(NUAAAMM_attr->Value)) ;
(*PUAAAMM) = (*(&((*(&(NUAAAMM_attr->Default)))->Text)));
} 
A_PROC_EXIT(clear_attribute);
return;
} 
#undef NL

A68_BOOL  SUAAAMM_permanent_attribute(A68_180 * M, A68_INT  Attribute_number)
{ 
A68_179  TUAAAMM;  /* clause result */
A68_181  UUAAAMM;  /* OPERATORS - simple index */
A68_179  VUAAAMM_attr;
A68_BOOL  WUAAAMM;  /* clause result */
A_PROC_ENTRY(permanent_attribute);
 /* line 479: */
 /* line 480: */
{ 
 /* line 481: */
if ( (M==LBAAAMM_nilmodule) )
{ 
 /* line 482: */
 /* line 483: */
TUAAAMM = (*(&A_VINDEX(XSAAAMM_default_attributes,Attribute_number)));
} 
else
{ 
 /* line 484: */
UUAAAMM = (*(&(M->Attributes))) ;
TUAAAMM = (*(&A_VINDEX(UUAAAMM,Attribute_number)));
} 
VUAAAMM_attr = TUAAAMM;
 /* line 486: */
 /* line 487: */
WUAAAMM = VUAAAMM_attr.Permanent;
} 
A_PROC_EXIT(permanent_attribute);
return( WUAAAMM );
} 
#undef NL

A68_BOOL  ZUAAAMM_attribute_marked(A68_180 * M, A68_INT  Attribute_number)
{ 
A68_181  AVAAAMM;  /* OPERATORS - simple index */
A68_179 * BVAAAMM_attr;
A68_BOOL  CVAAAMM;  /* clause result */
A_PROC_ENTRY(attribute_marked);
 /* line 490: */
 /* line 491: */
{ 
AVAAAMM = (*(&(M->Attributes))) ;
BVAAAMM_attr = (&A_VINDEX(AVAAAMM,Attribute_number));
 /* line 493: */
 /* line 494: */
CVAAAMM = ((A68_BITS )((*(&(M->State)))&(*(&(BVAAAMM_attr->Marker))))!=0X0U);
} 
A_PROC_EXIT(attribute_marked);
return( CVAAAMM );
} 
#undef NL
 /* line 497: */
 /* line 498: */

A_STATIC A68_VOID  GVAAAMM_initialise_attribute(A68_180 * M, A68_INT  Attribute_number, A68_VC  Value)
{ 
A68_181  HVAAAMM;  /* OPERATORS - simple index */
A68_179 * IVAAAMM_attr;
A68_BITS  JVAAAMM;  /* SHL */
A68_INT  KVAAAMM;  /* SHL */
A68_BITS  LVAAAMM_mark_init;
A68_BOOL  MVAAAMM_notstd;
A68_BITS * NVAAAMM;  /* YIELD */
A68_VC  OVAAAMM_str;
A68_VC * PVAAAMM;  /* forall control - []x */
A68_INT  QVAAAMM;  /* forall loop counter */
A68_VC * RVAAAMM;  /* YIELD */
A68_VC  SVAAAMM;  /* avoid structure result */
A68_VC * TVAAAMM;  /* YIELD */
A68_VC * UVAAAMM;  /* YIELD */
A_PROC_ENTRY(initialise_attribute);
 /* line 499: */
 /* line 500: */
{ 
HVAAAMM = (*(&(M->Attributes))) ;
IVAAAMM_attr = (&A_VINDEX(HVAAAMM,Attribute_number));
 /* line 501: */
JVAAAMM = (*(&(IVAAAMM_attr->Marker))) ;
KVAAAMM = 1 ;
LVAAAMM_mark_init = A_SHL(JVAAAMM,KVAAAMM);
 /* line 502: */
MVAAAMM_notstd = A68_TRUE;
 /* line 504: */
NVAAAMM = (&(M->State)) ;
(*NVAAAMM) = (A68_BITS )((A68_BITS )((*(&(M->State)))|(*(&(IVAAAMM_attr->Marker))))|LVAAAMM_mark_init);
 /* line 505: */
 /* line 506: */
QVAAAMM = BHAAAMM_std_sym_values.upb -1;
PVAAAMM = BHAAAMM_std_sym_values.data;
for (;QVAAAMM-- >= 0;
(PVAAAMM++
) )
{
OVAAAMM_str = *PVAAAMM;
 /* line 507: */
if ( !(MVAAAMM_notstd) ) break;
 /* line 508: */
if ( A_VC_EQ(Value,OVAAAMM_str) )
{ 
RVAAAMM = (&(IVAAAMM_attr->Value)) ;
(*RVAAAMM) = OVAAAMM_str;
 /* line 509: */
 /* line 510: */
 /* line 511: */
MVAAAMM_notstd = A68_FALSE;
} 
}
 /* line 512: */
if ( MVAAAMM_notstd )
{ 
ZAAAOSI_makervc( Value, &SVAAAMM );
TVAAAMM = (&(IVAAAMM_attr->Value)) ;
(*TVAAAMM) = SVAAAMM;
} 
 /* line 513: */
 /* line 514: */
UVAAAMM = (&(IVAAAMM_attr->Initvalue)) ;
(*UVAAAMM) = (*(&(IVAAAMM_attr->Value)));
} 
A_PROC_EXIT(initialise_attribute);
return;
} 
#undef NL

A_STATIC A68_BOOL  XVAAAMM_fetch_attribute(A68_180 * M, A68_INT  Attribute_number)
{ 
A68_181  YVAAAMM;  /* OPERATORS - simple index */
A68_179 * ZVAAAMM_attr;
A68_BITS  AWAAAMM;  /* SHL */
A68_INT  BWAAAMM;  /* SHL */
A68_BITS  CWAAAMM_mark_init;
A68_VC * DWAAAMM;  /* YIELD */
A68_BITS * EWAAAMM;  /* YIELD */
A68_BOOL  FWAAAMM;  /* clause result */
A68_BITS * GWAAAMM;  /* YIELD */
A_PROC_ENTRY(fetch_attribute);
 /* line 517: */
 /* line 518: */
{ 
YVAAAMM = (*(&(M->Attributes))) ;
ZVAAAMM_attr = (&A_VINDEX(YVAAAMM,Attribute_number));
 /* line 519: */
AWAAAMM = (*(&(ZVAAAMM_attr->Marker))) ;
BWAAAMM = 1 ;
CWAAAMM_mark_init = A_SHL(AWAAAMM,BWAAAMM);
 /* line 521: */
 /* line 522: */
if ( ((A68_BITS )((*(&(M->State)))&(*(&(ZVAAAMM_attr->Marker))))!=0X0U) )
{ 
DWAAAMM = (&(ZVAAAMM_attr->Initvalue)) ;
(*DWAAAMM) = (*(&(ZVAAAMM_attr->Value)));
 /* line 523: */
EWAAAMM = (&(M->State)) ;
(*EWAAAMM) = (A68_BITS )((*(&(M->State)))|CWAAAMM_mark_init);
 /* line 524: */
 /* line 525: */
 /* line 526: */
FWAAAMM = A68_TRUE;
} 
else
{ 
GWAAAMM = (&(M->State)) ;
(*GWAAAMM) = (A68_BITS )((*(&(M->State)))&~CWAAAMM_mark_init);
 /* line 527: */
 /* line 528: */
 /* line 529: */
FWAAAMM = A68_FALSE;
} 
} 
A_PROC_EXIT(fetch_attribute);
return( FWAAAMM );
} 
#undef NL

A_STATIC A68_BOOL  JWAAAMM_attribute_changed(A68_180 * M, A68_INT  Attribute_number)
{ 
A68_181  KWAAAMM;  /* OPERATORS - simple index */
A68_179 * LWAAAMM_attr;
A68_BITS  MWAAAMM;  /* SHL */
A68_INT  NWAAAMM;  /* SHL */
A68_BITS  OWAAAMM_mask;
A68_BITS  PWAAAMM_mark;
A68_BOOL  QWAAAMM;  /* optbool result */
A68_BOOL  RWAAAMM;  /* optbool result */
A68_BOOL  SWAAAMM;  /* clause result */
A_PROC_ENTRY(attribute_changed);
 /* line 532: */
 /* line 533: */
{ 
KWAAAMM = (*(&(M->Attributes))) ;
LWAAAMM_attr = (&A_VINDEX(KWAAAMM,Attribute_number));
 /* line 534: */
MWAAAMM = (*(&(LWAAAMM_attr->Marker))) ;
NWAAAMM = 1 ;
OWAAAMM_mask = (A68_BITS )((*(&(LWAAAMM_attr->Marker)))|A_SHL(MWAAAMM,NWAAAMM));
 /* line 535: */
PWAAAMM_mark = (A68_BITS )((*(&(M->State)))&OWAAAMM_mask);
 /* line 537: */
QWAAAMM = (PWAAAMM_mark!=0X0U);
if ( QWAAAMM )
{ /* line 538: */
RWAAAMM = (PWAAAMM_mark!=OWAAAMM_mask);
if ( ! RWAAAMM )
{RWAAAMM = A_VC_NE((*(&(LWAAAMM_attr->Value))),(*(&(LWAAAMM_attr->Initvalue))));
}
 /* line 539: */
QWAAAMM = RWAAAMM;
}
SWAAAMM = QWAAAMM;
} 
A_PROC_EXIT(attribute_changed);
return( SWAAAMM );
} 
#undef NL

A68_VOID  UWAAAMM_set_lowercase(A68_VC  Str)
{ 
A68_BOOL  VWAAAMM_in_quotes;
A68_CHAR * WWAAAMM_c;
A68_INT  XWAAAMM;  /* forall loop counter */
A68_BOOL  YWAAAMM;  /* optbool result */
A_PROC_ENTRY(set_lowercase);
 /* line 542: */
 /* line 543: */
{ 
VWAAAMM_in_quotes = A68_FALSE;
 /* line 545: */
 /* line 546: */
XWAAAMM = Str.upb -1;
WWAAAMM_c = Str.data;
for (;XWAAAMM-- >= 0;
(WWAAAMM_c++
) )
{
 /* line 547: */
YWAAAMM = !VWAAAMM_in_quotes;
if ( YWAAAMM )
{YWAAAMM = ((*WWAAAMM_c)>='A');
}
if ( YWAAAMM )
{YWAAAMM = ((*WWAAAMM_c)<='Z');
}
 /* line 548: */
if ( YWAAAMM )
{ 
 /* line 549: */
(*WWAAAMM_c) = (A68_CHAR)((A68_INT)(unsigned char)(*WWAAAMM_c)+SHAAAMM_lcbias);
} 
 /* line 550: */
if ( ((*WWAAAMM_c)=='\"') )
{ 
 /* line 551: */
VWAAAMM_in_quotes = !VWAAAMM_in_quotes;
} 
}
 /* line 552: */
} 
A_PROC_EXIT(set_lowercase);
return;
} 
#undef NL

A68_BOOL  AXAAAMM_can_query(void)
{ 
A68_BOOL  BXAAAMM;  /* optbool result */
A68_BOOL  CXAAAMM;  /* clause result */
A_PROC_ENTRY(can_query);
BXAAAMM = ZWAAAMM_query_active;
if ( BXAAAMM )
{BXAAAMM = FIAAOST_interactive();
}
CXAAAMM = BXAAAMM;
A_PROC_EXIT(can_query);
return( CXAAAMM );
} 
#undef NL

A68_BOOL  JXAAAMM_query(A68_VC  Question, A68_INT  Default, A68_97  Msg)
{ 
A68_228  KXAAAMM;  /* collateral clause result */
A68_52  LXAAAMM;  /* OPERATORS - mode -> union mode */
A68_52  OXAAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PXAAAMM;  /* YIELD */
A68_52  SXAAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TXAAAMM;  /* YIELD */
A68_52  WXAAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XXAAAMM;  /* YIELD */
A68_85  YXAAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  ZXAAAMM;  /* avoid structure result */
A68_VC  AYAAAMM_qn;
A68_VC  BYAAAMM_reply;
A68_BOOL  CYAAAMM_result;
A68_CHAR  DYAAAMM_fc;
A68_VC  EYAAAMM;  /* avoid structure result */
A68_BOOL  FYAAAMM;  /* clause result */
A68_INT  GYAAAMM;  /* YIELD */
A68_BOOL  HYAAAMM;  /* clause result */
A68_228  IYAAAMM;  /* collateral clause result */
A68_52  LYAAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MYAAAMM;  /* YIELD */
A68_52  NYAAAMM;  /* OPERATORS - mode -> union mode */
A68_56  OYAAAMM;  /* procedure value */
A68_85  PYAAAMM;  /* OPERATORS - istruct -> vector */
A68_46  SYAAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  TYAAAMM;  /* clause result */
A_PROC_ENTRY(query);
 /* line 561: */
 /* line 562: */
{ 
 /* line 563: */
KXAAAMM.data[0] = A_UNITE(LXAAAMM,mode7,7,Question);
 /* line 564: */
if ( (Default==EXAAAMM_default_no) )
{ 
PXAAAMM = NXAAAMM ;
KXAAAMM.data[1] = A_UNITE(OXAAAMM,mode7,7,PXAAAMM);
} 
else
{ 
 /* line 565: */
if ( (Default==DXAAAMM_default_yes) )
{ 
 /* line 566: */
TXAAAMM = RXAAAMM ;
KXAAAMM.data[1] = A_UNITE(SXAAAMM,mode7,7,TXAAAMM);
} 
else
{ 
XXAAAMM = VXAAAMM ;
KXAAAMM.data[1] = A_UNITE(WXAAAMM,mode7,7,XXAAAMM);
} 
} 
UJBAOSL_oneline( A_HISVEC(YXAAAMM,KXAAAMM,2,A68_52 ), &ZXAAAMM );
AYAAAMM_qn = ZXAAAMM;
 /* line 567: */
 /* line 568: */
CYAAAMM_result = A68_FALSE;
 /* line 569: */
 /* line 571: */
 /* line 572: */
if ( AXAAAMM_can_query() )
{ 
for ( ;; )
{ 
 /* line 573: */
IIAAOST_prompt( AYAAAMM_qn, &EYAAAMM );
BYAAAMM_reply = EYAAAMM;
 /* line 574: */
UWAAAMM_set_lowercase(BYAAAMM_reply);
 /* line 575: */
 /* line 576: */
if ( (BYAAAMM_reply.upb==0) )
{ 
CYAAAMM_result = (Default==DXAAAMM_default_yes);
 /* line 577: */
 /* line 578: */
FYAAAMM = (Default==FXAAAMM_no_default);
} 
else
{ 
 /* line 579: */
GYAAAMM = 1 ;
if ( ((DYAAAMM_fc = (*(&A_VINDEX(BYAAAMM_reply,GYAAAMM))))=='y') )
{ 
CYAAAMM_result = A68_TRUE;
 /* line 580: */
 /* line 581: */
FYAAAMM = A68_FALSE;
} 
else
{ 
 /* line 582: */
if ( (DYAAAMM_fc=='n') )
{ 
 /* line 583: */
 /* line 584: */
FYAAAMM = CYAAAMM_result = A68_FALSE;
} 
else
{ 
 /* line 585: */
 /* line 586: */
FYAAAMM = A68_TRUE;
} 
} 
} 
 /* line 587: */
HYAAAMM = FYAAAMM;
if ( !HYAAAMM ) break;
MYAAAMM = KYAAAMM ;
IYAAAMM.data[0] = A_UNITE(LYAAAMM,mode7,7,MYAAAMM);
OYAAAMM.fn.fn_global = LRAAOSL_newline;
OYAAAMM.nonlocals = A68_NIL;
IYAAAMM.data[1] = A_UNITE(NYAAAMM,mode12,12,OYAAAMM);
 /* line 588: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PYAAAMM,IYAAAMM,2,A68_52 ));
}
 /* line 589: */
} 
else
{ 
 /* line 590: */
if ( (Default==FXAAAMM_no_default) )
{ 
 /* line 591: */
 /* line 592: */
A_CALLPROC(ZLBAOSI_global_msg,(UHAAOSI_fatal, A_HVEC(SYAAAMM,RYAAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(SYAAAMM,RYAAAMM,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
else
{ 
 /* line 593: */
CYAAAMM_result = (Default==DXAAAMM_default_yes);
} 
} 
 /* line 594: */
 /* line 595: */
TYAAAMM = CYAAAMM_result;
} 
A_PROC_EXIT(query);
return( TYAAAMM );
} 
#undef NL

A_STATIC A68_BOOL  WYAAAMM_is_in_string(A68_CHAR  Required, A68_VC  Str)
{ 
A68_BOOL  XYAAAMM_found;
A68_CHAR  YYAAAMM_c;
A68_CHAR * ZYAAAMM;  /* forall control - []x */
A68_INT  AZAAAMM;  /* forall loop counter */
A68_BOOL  BZAAAMM;  /* clause result */
A_PROC_ENTRY(is_in_string);
 /* line 598: */
 /* line 599: */
{ 
XYAAAMM_found = A68_FALSE;
 /* line 601: */
AZAAAMM = Str.upb -1;
ZYAAAMM = Str.data;
for (;AZAAAMM-- >= 0;
(ZYAAAMM++
) )
{
YYAAAMM_c = *ZYAAAMM;
if ( !(!XYAAAMM_found) ) break;
XYAAAMM_found = (YYAAAMM_c==Required);
}
 /* line 602: */
 /* line 603: */
BZAAAMM = XYAAAMM_found;
} 
A_PROC_EXIT(is_in_string);
return( BZAAAMM );
} 
#undef NL

A68_VOID  EZAAAMM_not_found(A68_VC  Heading, A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_233  FZAAAMM;  /* collateral clause result */
A68_52  GZAAAMM;  /* OPERATORS - mode -> union mode */
A68_52  HZAAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  IZAAAMM;  /* YIELD */
A68_52  JZAAAMM;  /* OPERATORS - mode -> union mode */
A68_52  MZAAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NZAAAMM;  /* YIELD */
A68_VC  OZAAAMM;  /* clause result */
A68_85  PZAAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  QZAAAMM;  /* avoid structure result */
A_PROC_ENTRY(not_found);
 /* line 606: */
 /* line 607: */
FZAAAMM.data[0] = A_UNITE(GZAAAMM,mode7,7,Heading);
IZAAAMM = ' ' ;
FZAAAMM.data[1] = A_UNITE(HZAAAMM,mode6,6,IZAAAMM);
FZAAAMM.data[2] = A_UNITE(JZAAAMM,mode7,7,Name);
NZAAAMM = LZAAAMM ;
FZAAAMM.data[3] = A_UNITE(MZAAAMM,mode7,7,NZAAAMM);
 /* line 608: */
UJBAOSL_oneline( A_HISVEC(PZAAAMM,FZAAAMM,4,A68_52 ), &QZAAAMM );
OZAAAMM = QZAAAMM;
A_PROC_EXIT(not_found);
*ReturnedValue = (OZAAAMM);
return;
} 
#undef NL

A68_VOID  SZAAAMM_mnot_found(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  UZAAAMM;  /* clause result */
A68_VC  WZAAAMM;  /* avoid structure result */
A_PROC_ENTRY(mnot_found);
 /* line 611: */
 /* line 612: */
 /* line 613: */
EZAAAMM_not_found( VZAAAMM, Name, &WZAAAMM );
UZAAAMM = WZAAAMM;
A_PROC_EXIT(mnot_found);
*ReturnedValue = (UZAAAMM);
return;
} 
#undef NL

A68_VOID  YZAAAMM_fnot_found(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  AABAAMM;  /* clause result */
A68_VC  CABAAMM;  /* avoid structure result */
A_PROC_ENTRY(fnot_found);
 /* line 616: */
 /* line 617: */
 /* line 618: */
EZAAAMM_not_found( BABAAMM, Name, &CABAAMM );
AABAAMM = CABAAMM;
A_PROC_EXIT(fnot_found);
*ReturnedValue = (AABAAMM);
return;
} 
#undef NL

A68_BOOL  FABAAMM_check_star(A68_178  S, A68_VC  Stars)
{ 
A68_BOOL  GABAAMM;  /* optbool result */
A68_BOOL  HABAAMM;  /* optbool result */
A68_BOOL  IABAAMM;  /* optbool result */
A68_BOOL  JABAAMM;  /* clause result */
A_PROC_ENTRY(check_star);
 /* line 621: */
 /* line 622: */
GABAAMM = (S.Mode==' ');
if ( ! GABAAMM )
{HABAAMM = (S.Mode=='*');
if ( HABAAMM )
{HABAAMM = WYAAAMM_is_in_string(S.Value, Stars);
}
GABAAMM = HABAAMM;
}
 /* line 623: */
if ( ! GABAAMM )
{IABAAMM = (S.Mode=='%');
if ( IABAAMM )
{IABAAMM = !WYAAAMM_is_in_string(S.Value, Stars);
}
GABAAMM = IABAAMM;
}
JABAAMM = GABAAMM;
A_PROC_EXIT(check_star);
return( JABAAMM );
} 
#undef NL

A68_VOID  LABAAMM_shortname(A68_120  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  MABAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NABAAMM;  /* clause result */
A68_VC  OABAAMM;  /* avoid structure result */
A68_228  PABAAMM;  /* collateral clause result */
A68_52  QABAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RABAAMM;  /* YIELD */
A68_52  SABAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TABAAMM;  /* YIELD */
A68_85  UABAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  VABAAMM;  /* avoid structure result */
A_PROC_ENTRY(shortname);
 /* line 626: */
 /* line 628: */
if ( A_VC_EQ(Fn.Type,A_HVEC(MABAAMM,'.',A68_CHAR )) )
{ 
 /* line 629: */
ZAAAOSI_makervc( Fn.Name, &OABAAMM );
NABAAMM = OABAAMM;
} 
else
{ 
RABAAMM = Fn.Name ;
PABAAMM.data[0] = A_UNITE(QABAAMM,mode7,7,RABAAMM);
TABAAMM = Fn.Type ;
PABAAMM.data[1] = A_UNITE(SABAAMM,mode7,7,TABAAMM);
 /* line 630: */
UJBAOSL_oneline( A_HISVEC(UABAAMM,PABAAMM,2,A68_52 ), &VABAAMM );
NABAAMM = VABAAMM;
} 
A_PROC_EXIT(shortname);
*ReturnedValue = (NABAAMM);
return;
} 
#undef NL

A68_VOID  XABAAMM_fullname(A68_120  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  YABAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_228  ZABAAMM;  /* collateral clause result */
A68_52  ABBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BBBAAMM;  /* YIELD */
A68_52  CBBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DBBAAMM;  /* YIELD */
A68_VC  EBBAAMM;  /* clause result */
A68_85  FBBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  GBBAAMM;  /* avoid structure result */
A68_236  HBBAAMM;  /* collateral clause result */
A68_52  IBBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JBBAAMM;  /* YIELD */
A68_52  KBBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LBBAAMM;  /* YIELD */
A68_52  MBBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NBBAAMM;  /* YIELD */
A68_85  OBBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  PBBAAMM;  /* avoid structure result */
A_PROC_ENTRY(fullname);
 /* line 633: */
 /* line 634: */
if ( A_VC_EQ(Fn.Type,A_HVEC(YABAAMM,'.',A68_CHAR )) )
{ 
BBBAAMM = Fn.Directory ;
ZABAAMM.data[0] = A_UNITE(ABBAAMM,mode7,7,BBBAAMM);
DBBAAMM = Fn.Name ;
ZABAAMM.data[1] = A_UNITE(CBBAAMM,mode7,7,DBBAAMM);
 /* line 635: */
 /* line 636: */
UJBAOSL_oneline( A_HISVEC(FBBAAMM,ZABAAMM,2,A68_52 ), &GBBAAMM );
EBBAAMM = GBBAAMM;
} 
else
{ 
JBBAAMM = Fn.Directory ;
HBBAAMM.data[0] = A_UNITE(IBBAAMM,mode7,7,JBBAAMM);
LBBAAMM = Fn.Name ;
HBBAAMM.data[1] = A_UNITE(KBBAAMM,mode7,7,LBBAAMM);
NBBAAMM = Fn.Type ;
HBBAAMM.data[2] = A_UNITE(MBBAAMM,mode7,7,NBBAAMM);
 /* line 637: */
UJBAOSL_oneline( A_HISVEC(OBBAAMM,HBBAAMM,3,A68_52 ), &PBBAAMM );
EBBAAMM = PBBAAMM;
} 
A_PROC_EXIT(fullname);
*ReturnedValue = (EBBAAMM);
return;
} 
#undef NL
 /* line 640: */

A68_182 * SBBAAMM_scanmodules(A68_182 * List, A68_237  Action)
{ 
A68_182 * TBBAAMM_l;
A68_BOOL  UBBAAMM;  /* optbool result */
A68_182 * VBBAAMM;  /* clause result */
A_PROC_ENTRY(scanmodules);
 /* line 641: */
 /* line 642: */
{ 
TBBAAMM_l = List;
 /* line 644: */
for ( ;; )
{ 
 /* line 645: */
UBBAAMM = (TBBAAMM_l!=KBAAAMM_nilmodulelist);
if ( UBBAAMM )
{UBBAAMM = A_CALLPROC(Action,((*(&(TBBAAMM_l->Module))), (*(&(TBBAAMM_l->Star)))),((*(&(TBBAAMM_l->Module))), (*(&(TBBAAMM_l->Star))),(Action).nonlocals));
}
if ( !(UBBAAMM) ) break;
TBBAAMM_l = (*(&(TBBAAMM_l->Rest)));
}
 /* line 646: */
 /* line 647: */
VBBAAMM = TBBAAMM_l;
} 
A_PROC_EXIT(scanmodules);
return( VBBAAMM );
} 
#undef NL

A68_VOID  YBBAAMM_mark_modules(A68_182 * List, A68_INT  State)
{ 
A68_237  CCBAAMM_action;   /* proc value of non-global proc */
A_PROC_ENTRY(mark_modules);
 /* line 650: */
 /* line 651: */
{ 
A_CLOSURE( CCBAAMM_action, DCBAAMM_action, ECBAAMM_action );
(( ECBAAMM_action * ) ( CCBAAMM_action.nonlocals )) -> State = State;
 /* line 657: */
 /* line 658: */
SBBAAMM_scanmodules(List, CCBAAMM_action);
} 
A_PROC_EXIT(mark_modules);
return;
} 
#undef NL

A68_182 * JCBAAMM_findmodule(A68_182 * List, A68_VC  Name)
{ 
A68_237  MCBAAMM_anonymous;   /* proc value of non-global proc */
A68_182 * QCBAAMM;  /* clause result */
A_PROC_ENTRY(findmodule);
 /* line 661: */
 /* line 662: */
A_CLOSURE( MCBAAMM_anonymous, NCBAAMM_anonymous, OCBAAMM_anonymous );
(( OCBAAMM_anonymous * ) ( MCBAAMM_anonymous.nonlocals )) -> Name = Name;
 /* line 663: */
QCBAAMM = SBBAAMM_scanmodules(List, MCBAAMM_anonymous);
A_PROC_EXIT(findmodule);
return( QCBAAMM );
} 
#undef NL
 /* line 666: */
 /* line 667: */

A_STATIC A68_182 * UCBAAMM_add_module(A68_182 ** Head, A68_180 * M, A68_178  S)
{ 
A68_182 ** VCBAAMM_ml;
A68_182  WCBAAMM;  /* collateral clause result */
A68_182 * XCBAAMM;  /* clause result */
A68_182 * YCBAAMM;  /* YIELD */
A_PROC_ENTRY(add_module);
 /* line 668: */
 /* line 669: */
{ 
VCBAAMM_ml = Head;
 /* line 671: */
for ( ;; )
{ 
if ( !(((*VCBAAMM_ml)!=KBAAAMM_nilmodulelist)) ) break;
VCBAAMM_ml = (&((*VCBAAMM_ml)->Rest));
}
 /* line 672: */
WCBAAMM.Module = M;
WCBAAMM.Star = S;
 /* line 673: */
WCBAAMM.Rest = (*VCBAAMM_ml);
YCBAAMM = A_HEAP(A68_182 ) ;
(*YCBAAMM) = WCBAAMM ;
XCBAAMM = (*VCBAAMM_ml) = YCBAAMM;
} 
A_PROC_EXIT(add_module);
return( XCBAAMM );
} 
#undef NL

A68_INT  DDBAAMM_database_modified(void)
{ 
A68_BOOL  EDBAAMM_detach_changed;
A68_BOOL  FDBAAMM;  /* optbool result */
A68_BOOL  GDBAAMM_env_changed;
A68_BOOL  HDBAAMM;  /* optbool result */
A68_BOOL  IDBAAMM_mod_changed;
A68_INT  JDBAAMM_m_count;
A68_237  MDBAAMM_action;   /* proc value of non-global proc */
A68_BOOL  UDBAAMM;  /* optbool result */
A68_BOOL  VDBAAMM;  /* optbool result */
A68_INT  WDBAAMM;  /* clause result */
A_PROC_ENTRY(database_modified);
{ 
EDBAAMM_detach_changed = A_VC_NE(AKAAAMM_detach_name,BKAAAMM_init_detach_name);
 /* line 682: */
 /* line 683: */
FDBAAMM = TIAAAMM_attribute_modified;
if ( ! FDBAAMM )
{FDBAAMM = EDBAAMM_detach_changed;
}
 /* line 684: */
if ( ! FDBAAMM )
{FDBAAMM = XNAAAMM_symbols_changed(AJAAAMM_mmd_tag);
}
GDBAAMM_env_changed = FDBAAMM;
 /* line 685: */
HDBAAMM = EDBAAMM_detach_changed;
if ( ! HDBAAMM )
{HDBAAMM = XNAAAMM_symbols_changed(BJAAAMM_aux_tag);
}
IDBAAMM_mod_changed = HDBAAMM;
 /* line 686: */
JDBAAMM_m_count = 0;
 /* line 688: */
A_CLOSURE( MDBAAMM_action, NDBAAMM_action, ODBAAMM_action );
(( ODBAAMM_action * ) ( MDBAAMM_action.nonlocals )) -> JDBAAMM_m_count = (&JDBAAMM_m_count);
(( ODBAAMM_action * ) ( MDBAAMM_action.nonlocals )) -> IDBAAMM_mod_changed = (&IDBAAMM_mod_changed);
(( ODBAAMM_action * ) ( MDBAAMM_action.nonlocals )) -> GDBAAMM_env_changed = (&GDBAAMM_env_changed);
 /* line 699: */
SBBAAMM_scanmodules(WIAAAMM_modules, MDBAAMM_action);
 /* line 700: */
UDBAAMM = IDBAAMM_mod_changed;
if ( ! UDBAAMM )
{UDBAAMM = (JDBAAMM_m_count!=PIAAAMM_init_module_count);
}
IDBAAMM_mod_changed = UDBAAMM;
 /* line 702: */
 /* line 703: */
VDBAAMM = IDBAAMM_mod_changed;
if ( VDBAAMM )
{VDBAAMM = GDBAAMM_env_changed;
}
 /* line 704: */
if ( VDBAAMM )
{ 
WDBAAMM = CDBAAMM_save_all;
} 
else
{ 
 /* line 705: */
if ( IDBAAMM_mod_changed )
{ 
WDBAAMM = BDBAAMM_save_modules;
} 
else
{ 
 /* line 706: */
if ( GDBAAMM_env_changed )
{ 
 /* line 707: */
WDBAAMM = ADBAAMM_save_environ;
} 
else
{ 
 /* line 708: */
WDBAAMM = ZCBAAMM_save_none;
} 
} 
} 
} 
A_PROC_EXIT(database_modified);
return( WDBAAMM );
} 
#undef NL

A68_BOOL  ZDBAAMM_file_exists(A68_VC  Name, A68_97  Msg)
{ 
A68_BOOL  CEBAAMM_found;
A68_97  FEBAAMM_trap;   /* proc value of non-global proc */
A68_jmp_buf AEBAAMM_nofile;
A68_92 * IEBAAMM_f;
A68_BOOL  JEBAAMM;  /* clause result */
if ( sigsetjmp( AEBAAMM_nofile.label,1) ) goto BEBAAMM_nofile;
A_PROC_ENTRY(file_exists);
 /* line 711: */
 /* line 712: */
{ 
CEBAAMM_found = A68_FALSE;
 /* line 714: */
A_CLOSURE( FEBAAMM_trap, GEBAAMM_trap, HEBAAMM_trap );
(( HEBAAMM_trap * ) ( FEBAAMM_trap.nonlocals )) -> AEBAAMM_nofile = AEBAAMM_nofile;
 /* line 719: */
IEBAAMM_f = FQBAOSI_open_file(Name, PNBAOSI_read_access, FEBAAMM_trap);
 /* line 721: */
CEBAAMM_found = A68_TRUE;
 /* line 722: */
XQBAOSI_close_file(IEBAAMM_f, FEBAAMM_trap);
 /* line 723: */
BEBAAMM_nofile:
 /* line 725: */
JEBAAMM = CEBAAMM_found;
} 
A_PROC_EXIT(file_exists);
return( JEBAAMM );
} 
#undef NL

A68_INT  KEBAAMM_set_modulenumbers(void)
{ 
A68_INT  LEBAAMM_module_number;
A68_237  OEBAAMM_cnt_module;   /* proc value of non-global proc */
A68_INT  TEBAAMM;  /* clause result */
A_PROC_ENTRY(set_modulenumbers);
{ 
LEBAAMM_module_number = 0;
 /* line 731: */
A_CLOSURE( OEBAAMM_cnt_module, PEBAAMM_cnt_module, QEBAAMM_cnt_module );
(( QEBAAMM_cnt_module * ) ( OEBAAMM_cnt_module.nonlocals )) -> LEBAAMM_module_number = (&LEBAAMM_module_number);
 /* line 734: */
SBBAAMM_scanmodules(WIAAAMM_modules, OEBAAMM_cnt_module);
 /* line 735: */
 /* line 736: */
TEBAAMM = LEBAAMM_module_number;
} 
A_PROC_EXIT(set_modulenumbers);
return( TEBAAMM );
} 
#undef NL

A68_182 * ZEBAAMM_order_modules(A68_182 * List, A68_INT  Mode)
{ 
A68_182 * AFBAAMM_new;
A68_182 * BFBAAMM_ll;
A68_182 * CFBAAMM_next;
A68_182 ** DFBAAMM_tail;
A68_BOOL  EFBAAMM;  /* optbool result */
A68_BOOL  FFBAAMM;  /* clause result */
A68_182 ** GFBAAMM;  /* YIELD */
A68_182 * HFBAAMM;  /* clause result */
A_PROC_ENTRY(order_modules);
 /* line 742: */
 /* line 743: */
{ 
AFBAAMM_new = KBAAAMM_nilmodulelist;
 /* line 744: */
BFBAAMM_ll = List;
 /* line 745: */
 /* line 746: */
 /* line 748: */
for ( ;; )
{ 
 /* line 749: */
 /* line 750: */
if ( !((BFBAAMM_ll!=KBAAAMM_nilmodulelist)) ) break;
DFBAAMM_tail = (&AFBAAMM_new);
 /* line 751: */
CFBAAMM_next = (*(&(BFBAAMM_ll->Rest)));
 /* line 752: */
for ( ;; )
{ 
 /* line 753: */
EFBAAMM = ((*DFBAAMM_tail)!=KBAAAMM_nilmodulelist);
if ( EFBAAMM )
{switch ( Mode )
{ 
case 1: 
 /* line 754: */
FFBAAMM = ((*(&((*(&(BFBAAMM_ll->Module)))->Number)))>(*(&((*(&((*DFBAAMM_tail)->Module)))->Number))));
break;
case 2: 
 /* line 755: */
FFBAAMM = ((*(&((*(&(BFBAAMM_ll->Module)))->Level)))>(*(&((*(&((*DFBAAMM_tail)->Module)))->Level))));
break;
case 3: 
 /* line 756: */
 /* line 757: */
FFBAAMM = A_VC_GT((*(&((*(&(BFBAAMM_ll->Module)))->Name))),(*(&((*(&((*DFBAAMM_tail)->Module)))->Name))));
break;
default: 
 /* line 758: */
 /* line 759: */
FFBAAMM = A68_FALSE;
break;
} 
EFBAAMM = FFBAAMM;
}
 /* line 760: */
if ( !(EFBAAMM) ) break;
 /* line 761: */
DFBAAMM_tail = (&((*DFBAAMM_tail)->Rest));
}
 /* line 762: */
GFBAAMM = (&(BFBAAMM_ll->Rest)) ;
(*GFBAAMM) = (*DFBAAMM_tail);
 /* line 763: */
(*DFBAAMM_tail) = BFBAAMM_ll;
 /* line 764: */
 /* line 765: */
BFBAAMM_ll = CFBAAMM_next;
}
 /* line 766: */
 /* line 767: */
HFBAAMM = AFBAAMM_new;
} 
A_PROC_EXIT(order_modules);
return( HFBAAMM );
} 
#undef NL

A68_VOID  KFBAAMM_set_levels(A68_VC  Stars, A68_97  Msg)
{ 
A68_BOOL  LFBAAMM_has_recursion;
A68_INT  MFBAAMM_d_cnt;
A68_INT  NFBAAMM_p_cnt;
A68_239  QFBAAMM_do_setlevels;   /* proc value of non-global proc */
A68_237  ZGBAAMM;  /* procedure value */
A68_46  CHBAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_248  DHBAAMM;  /* collateral clause result */
A68_52  GHBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HHBAAMM;  /* YIELD */
A68_52  IHBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  JHBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  KHBAAMM;  /* procedure value */
A68_52  NHBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OHBAAMM;  /* YIELD */
A68_52  PHBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  QHBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  RHBAAMM;  /* procedure value */
A68_52  UHBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VHBAAMM;  /* YIELD */
A68_52  WHBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  XHBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YHBAAMM;  /* procedure value */
A68_85  ZHBAAMM;  /* OPERATORS - istruct -> vector */
A68_228  AIBAAMM;  /* collateral clause result */
A68_52  DIBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EIBAAMM;  /* YIELD */
A68_52  FIBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  GIBAAMM;  /* procedure value */
A68_85  HIBAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_levels);
 /* line 770: */
 /* line 771: */
{ 
LFBAAMM_has_recursion = A68_FALSE;
 /* line 772: */
MFBAAMM_d_cnt = 0;
NFBAAMM_p_cnt = 0;
 /* line 774: */
A_CLOSURE( QFBAAMM_do_setlevels, RFBAAMM_do_setlevels, SFBAAMM_do_setlevels );
(( SFBAAMM_do_setlevels * ) ( QFBAAMM_do_setlevels.nonlocals )) -> Stars = Stars;
(( SFBAAMM_do_setlevels * ) ( QFBAAMM_do_setlevels.nonlocals )) -> LFBAAMM_has_recursion = (&LFBAAMM_has_recursion);
(( SFBAAMM_do_setlevels * ) ( QFBAAMM_do_setlevels.nonlocals )) -> MFBAAMM_d_cnt = (&MFBAAMM_d_cnt);
(( SFBAAMM_do_setlevels * ) ( QFBAAMM_do_setlevels.nonlocals )) -> NFBAAMM_p_cnt = (&NFBAAMM_p_cnt);
(( SFBAAMM_do_setlevels * ) ( QFBAAMM_do_setlevels.nonlocals )) -> QFBAAMM_do_setlevels = QFBAAMM_do_setlevels;
 /* line 802: */
 /* line 808: */
 /* line 809: */
if ( (WIAAAMM_modules!=KBAAAMM_nilmodulelist) )
{ 
NIAAAMM_max_level = 0;
 /* line 810: */
ZGBAAMM.fn.fn_global = VGBAAMM_clear_levels;
ZGBAAMM.nonlocals = A68_NIL;
SBBAAMM_scanmodules(WIAAAMM_modules, ZGBAAMM);
 /* line 811: */
A_CALLPROC(QFBAAMM_do_setlevels,(WIAAAMM_modules, 1),(WIAAAMM_modules, 1,(QFBAAMM_do_setlevels).nonlocals));
 /* line 813: */
if ( LFBAAMM_has_recursion )
{ 
A_CALLPROC(Msg,(UHAAOSI_fatal, A_HVEC(CHBAAMM,BHBAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(CHBAAMM,BHBAAMM,A68_VC ),(Msg).nonlocals));
} 
 /* line 815: */
HHBAAMM = FHBAAMM ;
DHBAAMM.data[0] = A_UNITE(GHBAAMM,mode7,7,HHBAAMM);
DHBAAMM.data[1] = A_UNITE(IHBAAMM,mode1,1,MFBAAMM_d_cnt);
 /* line 816: */
KHBAAMM.fn.fn_global = LRAAOSL_newline;
KHBAAMM.nonlocals = A68_NIL;
DHBAAMM.data[2] = A_UNITE(JHBAAMM,mode12,12,KHBAAMM);
OHBAAMM = MHBAAMM ;
DHBAAMM.data[3] = A_UNITE(NHBAAMM,mode7,7,OHBAAMM);
DHBAAMM.data[4] = A_UNITE(PHBAAMM,mode1,1,NFBAAMM_p_cnt);
 /* line 817: */
RHBAAMM.fn.fn_global = LRAAOSL_newline;
RHBAAMM.nonlocals = A68_NIL;
DHBAAMM.data[5] = A_UNITE(QHBAAMM,mode12,12,RHBAAMM);
VHBAAMM = THBAAMM ;
DHBAAMM.data[6] = A_UNITE(UHBAAMM,mode7,7,VHBAAMM);
DHBAAMM.data[7] = A_UNITE(WHBAAMM,mode1,1,NIAAAMM_max_level);
YHBAAMM.fn.fn_global = LRAAOSL_newline;
YHBAAMM.nonlocals = A68_NIL;
DHBAAMM.data[8] = A_UNITE(XHBAAMM,mode12,12,YHBAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZHBAAMM,DHBAAMM,9,A68_52 ));
 /* line 819: */
 /* line 820: */
 /* line 821: */
WIAAAMM_modules = ZEBAAMM_order_modules(WIAAAMM_modules, VEBAAMM_by_level);
} 
else
{ 
EIBAAMM = CIBAAMM ;
AIBAAMM.data[0] = A_UNITE(DIBAAMM,mode7,7,EIBAAMM);
GIBAAMM.fn.fn_global = LRAAOSL_newline;
GIBAAMM.nonlocals = A68_NIL;
AIBAAMM.data[1] = A_UNITE(FIBAAMM,mode12,12,GIBAAMM);
 /* line 822: */
 /* line 823: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HIBAAMM,AIBAAMM,2,A68_52 ));
} 
} 
A_PROC_EXIT(set_levels);
return;
} 
#undef NL
 /* line 826: */
 /* line 827: */
 /* line 828: */

A_STATIC A68_VOID  MIBAAMM_read_database_file(A68_VC  Filename, A68_VC  Mode_chars, A68_BITS  Src_tag, A68_97  Msg)
{ 
A68_180 * NIBAAMM_current_module;
A68_BOOL  OIBAAMM_have_signature;
A68_92 * PIBAAMM_dbfile;
A68_31  RIBAAMM_generator;   /* proc value of non-global proc */
A68_VC  XIBAAMM;  /* avoid structure result */
A68_VC  WIBAAMM_buffer;
A68_INT  YIBAAMM_buftop;
A68_INT  ZIBAAMM_cpos;
A68_BOOL  AJBAAMM_continue;
A68_152  BJBAAMM_next_char;   /* proc value of non-global proc */
A68_51  PJBAAMM_next_item;   /* proc value of non-global proc */
A68_251  HKBAAMM_read_star;   /* proc value of non-global proc */
A68_252  SKBAAMM_external_database;   /* proc value of non-global proc */
A68_129  QLBAAMM_read_database_line;   /* proc value of non-global proc */
A68_233  LSBAAMM;  /* collateral clause result */
A68_52  MSBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  PSBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QSBAAMM;  /* YIELD */
A68_VC  RSBAAMM;  /* avoid structure result */
A68_52  SSBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  TSBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  USBAAMM;  /* procedure value */
A68_85  VSBAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(read_database_file);
 /* line 829: */
 /* line 830: */
{ 
NIBAAMM_current_module = LBAAAMM_nilmodule;
 /* line 831: */
OIBAAMM_have_signature = A68_FALSE;
 /* line 832: */
PIBAAMM_dbfile = FQBAOSI_open_file(Filename, PNBAOSI_read_access, Msg);
 /* line 833: */
A_CLOSURE( RIBAAMM_generator, SIBAAMM_generator, TIBAAMM_generator );
A_CALLPROC(RIBAAMM_generator,(A68_TRUE, &XIBAAMM),(A68_TRUE, &XIBAAMM,(RIBAAMM_generator).nonlocals));
WIBAAMM_buffer = XIBAAMM;
 /* line 834: */
YIBAAMM_buftop = 0;
ZIBAAMM_cpos = 0;
 /* line 835: */
AJBAAMM_continue = A68_TRUE;
 /* line 837: */
 /* line 838: */
 /* line 839: */
A_CLOSURE( BJBAAMM_next_char, CJBAAMM_next_char, DJBAAMM_next_char );
(( DJBAAMM_next_char * ) ( BJBAAMM_next_char.nonlocals )) -> AJBAAMM_continue = (&AJBAAMM_continue);
(( DJBAAMM_next_char * ) ( BJBAAMM_next_char.nonlocals )) -> ZIBAAMM_cpos = (&ZIBAAMM_cpos);
(( DJBAAMM_next_char * ) ( BJBAAMM_next_char.nonlocals )) -> YIBAAMM_buftop = (&YIBAAMM_buftop);
(( DJBAAMM_next_char * ) ( BJBAAMM_next_char.nonlocals )) -> PIBAAMM_dbfile = PIBAAMM_dbfile;
(( DJBAAMM_next_char * ) ( BJBAAMM_next_char.nonlocals )) -> WIBAAMM_buffer = WIBAAMM_buffer;
(( DJBAAMM_next_char * ) ( BJBAAMM_next_char.nonlocals )) -> Msg = Msg;
 /* line 850: */
 /* line 851: */
 /* line 852: */
 /* line 853: */
 /* line 855: */
A_CLOSURE( PJBAAMM_next_item, QJBAAMM_next_item, RJBAAMM_next_item );
(( RJBAAMM_next_item * ) ( PJBAAMM_next_item.nonlocals )) -> BJBAAMM_next_char = BJBAAMM_next_char;
(( RJBAAMM_next_item * ) ( PJBAAMM_next_item.nonlocals )) -> AJBAAMM_continue = (&AJBAAMM_continue);
(( RJBAAMM_next_item * ) ( PJBAAMM_next_item.nonlocals )) -> ZIBAAMM_cpos = (&ZIBAAMM_cpos);
(( RJBAAMM_next_item * ) ( PJBAAMM_next_item.nonlocals )) -> WIBAAMM_buffer = WIBAAMM_buffer;
 /* line 885: */
 /* line 886: */
 /* line 887: */
A_CLOSURE( HKBAAMM_read_star, IKBAAMM_read_star, JKBAAMM_read_star );
(( JKBAAMM_read_star * ) ( HKBAAMM_read_star.nonlocals )) -> BJBAAMM_next_char = BJBAAMM_next_char;
(( JKBAAMM_read_star * ) ( HKBAAMM_read_star.nonlocals )) -> ZIBAAMM_cpos = (&ZIBAAMM_cpos);
 /* line 898: */
A_CLOSURE( SKBAAMM_external_database, TKBAAMM_external_database, UKBAAMM_external_database );
(( UKBAAMM_external_database * ) ( SKBAAMM_external_database.nonlocals )) -> PJBAAMM_next_item = PJBAAMM_next_item;
(( UKBAAMM_external_database * ) ( SKBAAMM_external_database.nonlocals )) -> Msg = Msg;
 /* line 918: */
 /* line 919: */
 /* line 920: */
A_CLOSURE( QLBAAMM_read_database_line, RLBAAMM_read_database_line, SLBAAMM_read_database_line );
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> HKBAAMM_read_star = HKBAAMM_read_star;
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> PJBAAMM_next_item = PJBAAMM_next_item;
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> OIBAAMM_have_signature = (&OIBAAMM_have_signature);
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> Msg = Msg;
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> BJBAAMM_next_char = BJBAAMM_next_char;
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> ZIBAAMM_cpos = (&ZIBAAMM_cpos);
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> NIBAAMM_current_module = (&NIBAAMM_current_module);
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> SKBAAMM_external_database = SKBAAMM_external_database;
(( SLBAAMM_read_database_line * ) ( QLBAAMM_read_database_line.nonlocals )) -> Src_tag = Src_tag;
 /* line 1068: */
LSBAAMM.data[0] = A_UNITE(MSBAAMM,mode7,7,Mode_chars);
QSBAAMM = OSBAAMM ;
LSBAAMM.data[1] = A_UNITE(PSBAAMM,mode7,7,QSBAAMM);
 /* line 1069: */
YPBAOSI_file_name( PIBAAMM_dbfile, &RSBAAMM );
LSBAAMM.data[2] = A_UNITE(SSBAAMM,mode7,7,RSBAAMM);
USBAAMM.fn.fn_global = LRAAOSL_newline;
USBAAMM.nonlocals = A68_NIL;
LSBAAMM.data[3] = A_UNITE(TSBAAMM,mode12,12,USBAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VSBAAMM,LSBAAMM,4,A68_52 ));
 /* line 1070: */
for ( ;; )
{ 
if ( !(AJBAAMM_continue) ) break;
A_CALLPROC(QLBAAMM_read_database_line,(),((QLBAAMM_read_database_line).nonlocals));
}
 /* line 1071: */
 /* line 1072: */
XQBAOSI_close_file(PIBAAMM_dbfile, Msg);
} 
A_PROC_EXIT(read_database_file);
return;
} 
#undef NL

A68_VOID  XSBAAMM_set_usedby_lists(A68_182 * List)
{ 
A68_237  NTBAAMM;  /* procedure value */
A_PROC_ENTRY(set_usedby_lists);
 /* line 1075: */
 /* line 1076: */
{ 
 /* line 1089: */
 /* line 1090: */
NTBAAMM.fn.fn_global = BTBAAMM_module_action;
NTBAAMM.nonlocals = A68_NIL;
SBBAAMM_scanmodules(List, NTBAAMM);
} 
A_PROC_EXIT(set_usedby_lists);
return;
} 
#undef NL

A68_VOID  PTBAAMM_clear_usedby_lists(A68_182 * List)
{ 
A68_237  WTBAAMM;  /* procedure value */
A_PROC_ENTRY(clear_usedby_lists);
 /* line 1093: */
 /* line 1094: */
{ 
 /* line 1100: */
 /* line 1101: */
WTBAAMM.fn.fn_global = TTBAAMM_remove_old_usedby;
WTBAAMM.nonlocals = A68_NIL;
SBBAAMM_scanmodules(List, WTBAAMM);
} 
A_PROC_EXIT(clear_usedby_lists);
return;
} 
#undef NL
 /* line 1105: */
 /* line 1106: */
 /* line 1107: */

A68_BOOL  BUBAAMM_read_database(A68_VC  Dbname, A68_VC  Mode_chars, A68_BITS  Tag, A68_97  Msg)
{ 
A68_120  CUBAAMM;  /* avoid structure result */
A68_120  DUBAAMM_fn;
A68_BOOL  EUBAAMM;  /* clause result */
A_PROC_ENTRY(read_database);
 /* line 1108: */
 /* line 1109: */
{ 
TNCAOSI_parse_filename( Dbname, XHAAAMM_mmd_type, Msg, &CUBAAMM );
DUBAAMM_fn = CUBAAMM;
 /* line 1111: */
 /* line 1112: */
if ( ZDBAAMM_file_exists(DUBAAMM_fn.Filename, Msg) )
{ 
MIBAAMM_read_database_file(DUBAAMM_fn.Filename, Mode_chars, Tag, Msg);
 /* line 1113: */
BKAAAMM_init_detach_name = AKAAAMM_detach_name;
 /* line 1114: */
LJAAAMM_symbols_modified = 0X0U;
 /* line 1115: */
XSBAAMM_set_usedby_lists(WIAAAMM_modules);
 /* line 1116: */
KFBAAMM_set_levels((*(&(GKAAAMM_default_star_chars->Text))), Msg);
 /* line 1117: */
PIAAAMM_init_module_count = KEBAAMM_set_modulenumbers();
 /* line 1118: */
 /* line 1119: */
 /* line 1120: */
EUBAAMM = A68_TRUE;
} 
else
{ 
 /* line 1121: */
 /* line 1122: */
EUBAAMM = A68_FALSE;
} 
} 
A_PROC_EXIT(read_database);
return( EUBAAMM );
} 
#undef NL
 /* line 1125: */

A68_VOID  HUBAAMM_create_database(A68_VC  Dbname, A68_97  Msg)
{ 
A68_120  IUBAAMM;  /* avoid structure result */
A68_120  JUBAAMM_fn;
A68_92 * KUBAAMM_dbfile;
A68_236  LUBAAMM;  /* collateral clause result */
A68_52  OUBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PUBAAMM;  /* YIELD */
A68_52  QUBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RUBAAMM;  /* YIELD */
A68_52  SUBAAMM;  /* OPERATORS - mode -> union mode */
A68_56  TUBAAMM;  /* procedure value */
A68_85  UUBAAMM;  /* OPERATORS - istruct -> vector */
A68_236  VUBAAMM;  /* collateral clause result */
A68_52  YUBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ZUBAAMM;  /* YIELD */
A68_52  AVBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  BVBAAMM;  /* OPERATORS - mode -> union mode */
A68_85  CVBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  DVBAAMM;  /* avoid structure result */
A68_35  EVBAAMM;  /* avoid structure result */
A68_236  HVBAAMM;  /* collateral clause result */
A68_52  KVBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LVBAAMM;  /* YIELD */
A68_52  MVBAAMM;  /* OPERATORS - mode -> union mode */
A68_52  NVBAAMM;  /* OPERATORS - mode -> union mode */
A68_85  OVBAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  PVBAAMM;  /* avoid structure result */
A68_35  QVBAAMM;  /* avoid structure result */
A_PROC_ENTRY(create_database);
 /* line 1126: */
 /* line 1127: */
{ 
TNCAOSI_parse_filename( Dbname, XHAAAMM_mmd_type, Msg, &IUBAAMM );
JUBAAMM_fn = IUBAAMM;
 /* line 1128: */
KUBAAMM_dbfile = FQBAOSI_open_file(JUBAAMM_fn.Filename, TNBAOSI_write_access, Msg);
 /* line 1130: */
PUBAAMM = NUBAAMM ;
LUBAAMM.data[0] = A_UNITE(OUBAAMM,mode7,7,PUBAAMM);
RUBAAMM = JUBAAMM_fn.Filename ;
LUBAAMM.data[1] = A_UNITE(QUBAAMM,mode7,7,RUBAAMM);
TUBAAMM.fn.fn_global = LRAAOSL_newline;
TUBAAMM.nonlocals = A68_NIL;
LUBAAMM.data[2] = A_UNITE(SUBAAMM,mode12,12,TUBAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UUBAAMM,LUBAAMM,3,A68_52 ));
 /* line 1131: */
 /* line 1132: */
ZUBAAMM = XUBAAMM ;
VUBAAMM.data[0] = A_UNITE(YUBAAMM,mode7,7,ZUBAAMM);
VUBAAMM.data[1] = A_UNITE(AVBAAMM,mode7,7,WBAAAMM_signature);
VUBAAMM.data[2] = A_UNITE(BVBAAMM,mode6,6,VPBAOSI_newline_char);
UJBAOSL_oneline( A_HISVEC(CVBAAMM,VUBAAMM,3,A68_52 ), &DVBAAMM );
JSBAOSI_write_buffer( KUBAAMM_dbfile, DVBAAMM, Msg, &EVBAAMM );
EVBAAMM;
 /* line 1133: */
 /* line 1134: */
if ( BUBAAMM_read_database(MIAAAMM_init_file_name, GVBAAMM, CJAAAMM_init_tag, Msg) )
{ 
LVBAAMM = JVBAAMM ;
HVBAAMM.data[0] = A_UNITE(KVBAAMM,mode7,7,LVBAAMM);
 /* line 1135: */
HVBAAMM.data[1] = A_UNITE(MVBAAMM,mode7,7,MIAAAMM_init_file_name);
HVBAAMM.data[2] = A_UNITE(NVBAAMM,mode6,6,VPBAOSI_newline_char);
 /* line 1136: */
UJBAOSL_oneline( A_HISVEC(OVBAAMM,HVBAAMM,3,A68_52 ), &PVBAAMM );
JSBAOSI_write_buffer( KUBAAMM_dbfile, PVBAAMM, Msg, &QVBAAMM );
QVBAAMM;
} 
 /* line 1137: */
 /* line 1138: */
XQBAOSI_close_file(KUBAAMM_dbfile, Msg);
} 
A_PROC_EXIT(create_database);
return;
} 
#undef NL

A_STATIC A68_VOID  TVBAAMM_save_moduledata(A68_34 * Db_chan, A68_182 * List)
{ 
A68_CHAR  UVBAAMM_sep;
A68_INT  VVBAAMM_module_count;
A68_237  YVBAAMM_put_list;   /* proc value of non-global proc */
A68_237  AXBAAMM_put_module;   /* proc value of non-global proc */
A_PROC_ENTRY(save_moduledata);
 /* line 1141: */
 /* line 1142: */
{ 
UVBAAMM_sep = ' ';
 /* line 1143: */
VVBAAMM_module_count = 0;
 /* line 1145: */
A_CLOSURE( YVBAAMM_put_list, ZVBAAMM_put_list, AWBAAMM_put_list );
(( AWBAAMM_put_list * ) ( YVBAAMM_put_list.nonlocals )) -> Db_chan = Db_chan;
(( AWBAAMM_put_list * ) ( YVBAAMM_put_list.nonlocals )) -> UVBAAMM_sep = (&UVBAAMM_sep);
 /* line 1160: */
A_CLOSURE( AXBAAMM_put_module, BXBAAMM_put_module, CXBAAMM_put_module );
(( CXBAAMM_put_module * ) ( AXBAAMM_put_module.nonlocals )) -> VVBAAMM_module_count = (&VVBAAMM_module_count);
(( CXBAAMM_put_module * ) ( AXBAAMM_put_module.nonlocals )) -> Db_chan = Db_chan;
(( CXBAAMM_put_module * ) ( AXBAAMM_put_module.nonlocals )) -> UVBAAMM_sep = (&UVBAAMM_sep);
(( CXBAAMM_put_module * ) ( AXBAAMM_put_module.nonlocals )) -> YVBAAMM_put_list = YVBAAMM_put_list;
 /* line 1184: */
VVBAAMM_module_count = 0;
 /* line 1185: */
SBBAAMM_scanmodules(List, AXBAAMM_put_module);
 /* line 1186: */
 /* line 1187: */
PIAAAMM_init_module_count = VVBAAMM_module_count;
} 
A_PROC_EXIT(save_moduledata);
return;
} 
#undef NL

A_STATIC A68_VOID  DZBAAMM_write_symbols(A68_34 * Db_chan, A68_BITS  Dst_tag)
{ 
A68_177 * EZBAAMM_sym;
A68_INT  FZBAAMM_cleft;
A68_INT  GZBAAMM_top;
A68_INT  HZBAAMM_pos;
A68_VC  IZBAAMM_text;
A68_236  JZBAAMM;  /* collateral clause result */
A68_52  MZBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NZBAAMM;  /* YIELD */
A68_52  OZBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PZBAAMM;  /* YIELD */
A68_52  SZBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TZBAAMM;  /* YIELD */
A68_85  UZBAAMM;  /* OPERATORS - istruct -> vector */
A68_233  VZBAAMM;  /* collateral clause result */
A68_VC  WZBAAMM;  /* OPERATORS - trim index */
A68_52  XZBAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YZBAAMM;  /* YIELD */
A68_52  BACAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CACAAMM;  /* YIELD */
A68_52  DACAAMM;  /* OPERATORS - mode -> union mode */
A68_56  EACAAMM;  /* procedure value */
A68_52  FACAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  GACAAMM;  /* YIELD */
A68_85  HACAAMM;  /* OPERATORS - istruct -> vector */
A68_236  IACAAMM;  /* collateral clause result */
A68_VC  JACAAMM;  /* OPERATORS - trim index */
A68_52  KACAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LACAAMM;  /* YIELD */
A68_52  MACAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  NACAAMM;  /* YIELD */
A68_52  OACAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PACAAMM;  /* procedure value */
A68_85  QACAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(write_symbols);
 /* line 1190: */
 /* line 1191: */
{ 
EZBAAMM_sym = XIAAAMM_symbols;
 /* line 1192: */
 /* line 1193: */
 /* line 1195: */
for ( ;; )
{ 
 /* line 1196: */
 /* line 1197: */
if ( !((EZBAAMM_sym!=JBAAAMM_nilsymbol)) ) break;
 /* line 1198: */
if ( ((A68_BITS )((*(&(EZBAAMM_sym->Tags)))&Dst_tag)!=0X0U) )
{ 
NZBAAMM = LZBAAMM ;
JZBAAMM.data[0] = A_UNITE(MZBAAMM,mode7,7,NZBAAMM);
PZBAAMM = (*(&(EZBAAMM_sym->Name))) ;
JZBAAMM.data[1] = A_UNITE(OZBAAMM,mode7,7,PZBAAMM);
TZBAAMM = RZBAAMM ;
JZBAAMM.data[2] = A_UNITE(SZBAAMM,mode7,7,TZBAAMM);
GFBAOSL_put(Db_chan, A_HISVEC(UZBAAMM,JZBAAMM,3,A68_52 ));
 /* line 1199: */
IZBAAMM_text = (*(&(EZBAAMM_sym->Text)));
 /* line 1200: */
GZBAAMM_top = IZBAAMM_text.upb;
 /* line 1201: */
HZBAAMM_pos = 0;
 /* line 1202: */
for ( ;; )
{ 
 /* line 1203: */
 /* line 1204: */
if ( !((HZBAAMM_pos<GZBAAMM_top)) ) break;
FZBAAMM_cleft = (EPAAOSL_charsleft(Db_chan)-2);
 /* line 1205: */
 /* line 1206: */
if ( ((GZBAAMM_top-HZBAAMM_pos)>FZBAAMM_cleft) )
{ 
YZBAAMM = A_VTRIM(WZBAAMM,(IZBAAMM_text),A_VTSCRIPT(&(WZBAAMM.upb),(IZBAAMM_text).upb,(HZBAAMM_pos+1),(HZBAAMM_pos+FZBAAMM_cleft))) ;
VZBAAMM.data[0] = A_UNITE(XZBAAMM,mode7,7,YZBAAMM);
 /* line 1207: */
CACAAMM = AACAAMM ;
VZBAAMM.data[1] = A_UNITE(BACAAMM,mode7,7,CACAAMM);
EACAAMM.fn.fn_global = LRAAOSL_newline;
EACAAMM.nonlocals = A68_NIL;
VZBAAMM.data[2] = A_UNITE(DACAAMM,mode12,12,EACAAMM);
GACAAMM = '\"' ;
VZBAAMM.data[3] = A_UNITE(FACAAMM,mode6,6,GACAAMM);
GFBAOSL_put(Db_chan, A_HISVEC(HACAAMM,VZBAAMM,4,A68_52 ));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
HZBAAMM_pos+=FZBAAMM_cleft;
} 
else
{ 
LACAAMM = A_VTRIM(JACAAMM,(IZBAAMM_text),A_VTSCRIPT(&(JACAAMM.upb),(IZBAAMM_text).upb,(HZBAAMM_pos+1),(IZBAAMM_text).upb)) ;
IACAAMM.data[0] = A_UNITE(KACAAMM,mode7,7,LACAAMM);
NACAAMM = '\"' ;
IACAAMM.data[1] = A_UNITE(MACAAMM,mode6,6,NACAAMM);
PACAAMM.fn.fn_global = LRAAOSL_newline;
PACAAMM.nonlocals = A68_NIL;
IACAAMM.data[2] = A_UNITE(OACAAMM,mode12,12,PACAAMM);
GFBAOSL_put(Db_chan, A_HISVEC(QACAAMM,IACAAMM,3,A68_52 ));
 /* line 1211: */
 /* line 1212: */
 /* line 1213: */
HZBAAMM_pos = GZBAAMM_top;
} 
}
 /* line 1214: */
} 
 /* line 1215: */
 /* line 1216: */
EZBAAMM_sym = (*(&(EZBAAMM_sym->Rest)));
}
 /* line 1217: */
} 
A_PROC_EXIT(write_symbols);
return;
} 
#undef NL
 /* line 1220: */
 /* line 1221: */
 /* line 1222: */

A68_VOID  VACAAMM_save_database(A68_VC  Dbname, A68_VC  Dtname, A68_INT  Save_mode, A68_97  Msg)
{ 
A68_BOOL  WACAAMM;  /* optbool result */
A68_INT  XACAAMM;  /* clause result */
A68_INT  YACAAMM_mode;
A68_VC  ABCAAMM;  /* clause result */
A68_VC  CBCAAMM_dbtype;
A68_92 * DBCAAMM_database;
A68_31  FBCAAMM_generator;   /* proc value of non-global proc */
A68_VC  LBCAAMM;  /* avoid structure result */
A68_VC  KBCAAMM_db_buffer;
A68_36  NBCAAMM_db_line;   /* proc value of non-global proc */
A68_88  RBCAAMM;  /* OPERATORS - mode -> union mode */
A68_36  SBCAAMM;  /* YIELD */
A68_87  TBCAAMM;  /* OPERATORS - mode -> union mode */
A68_34 * UBCAAMM_db_chan;
A68_237  XBCAAMM_put_attributes;   /* proc value of non-global proc */
A68_120  YDCAAMM;  /* avoid structure result */
A68_120  ZDCAAMM_dbfn;
A68_199  BECAAMM_write_init;   /* proc value of non-global proc */
A68_236  QECAAMM;  /* collateral clause result */
A68_52  TECAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UECAAMM;  /* YIELD */
A68_52  VECAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WECAAMM;  /* YIELD */
A68_52  XECAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YECAAMM;  /* procedure value */
A68_85  ZECAAMM;  /* OPERATORS - istruct -> vector */
A68_236  AFCAAMM;  /* collateral clause result */
A68_52  DFCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EFCAAMM;  /* YIELD */
A68_52  FFCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  GFCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  HFCAAMM;  /* procedure value */
A68_85  IFCAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  MFCAAMM;  /* clause result */
A68_VC  OFCAAMM_auxdbtype;
A68_120  PFCAAMM;  /* avoid structure result */
A68_120  QFCAAMM_axfn;
A68_92 * RFCAAMM_auxfile;
A68_31  TFCAAMM_generator;   /* proc value of non-global proc */
A68_VC  ZFCAAMM;  /* avoid structure result */
A68_VC  YFCAAMM_aux_buffer;
A68_36  BGCAAMM_aux_line;   /* proc value of non-global proc */
A68_88  FGCAAMM;  /* OPERATORS - mode -> union mode */
A68_36  GGCAAMM;  /* YIELD */
A68_87  HGCAAMM;  /* OPERATORS - mode -> union mode */
A68_34 * IGCAAMM_aux_chan;
A68_236  JGCAAMM;  /* collateral clause result */
A68_52  MGCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NGCAAMM;  /* YIELD */
A68_52  OGCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PGCAAMM;  /* YIELD */
A68_52  QGCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  RGCAAMM;  /* procedure value */
A68_85  SGCAAMM;  /* OPERATORS - istruct -> vector */
A68_236  TGCAAMM;  /* collateral clause result */
A68_52  WGCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XGCAAMM;  /* YIELD */
A68_52  YGCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ZGCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  AHCAAMM;  /* procedure value */
A68_85  BHCAAMM;  /* OPERATORS - istruct -> vector */
A68_236  CHCAAMM;  /* collateral clause result */
A68_52  FHCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GHCAAMM;  /* YIELD */
A68_52  HHCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  IHCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JHCAAMM;  /* procedure value */
A68_85  KHCAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(save_database);
 /* line 1223: */
 /* line 1224: */
{ 
WACAAMM = (Save_mode!=0);
if ( WACAAMM )
{WACAAMM = (Dtname.upb==0);
}
 /* line 1225: */
if ( WACAAMM )
{ 
 /* line 1226: */
XACAAMM = CDBAAMM_save_all;
} 
else
{ 
XACAAMM = Save_mode;
} 
YACAAMM_mode = XACAAMM;
 /* line 1227: */
if ( SIAAAMM_diagnose )
{ 
ABCAAMM = BBCAAMM;
} 
else
{ 
ABCAAMM = XHAAAMM_mmd_type;
} 
CBCAAMM_dbtype = ABCAAMM;
 /* line 1228: */
 /* line 1229: */
A_CLOSURE( FBCAAMM_generator, GBCAAMM_generator, HBCAAMM_generator );
A_CALLPROC(FBCAAMM_generator,(A68_TRUE, &LBCAAMM),(A68_TRUE, &LBCAAMM,(FBCAAMM_generator).nonlocals));
KBCAAMM_db_buffer = LBCAAMM;
 /* line 1231: */
A_CLOSURE( NBCAAMM_db_line, OBCAAMM_db_line, PBCAAMM_db_line );
(( PBCAAMM_db_line * ) ( NBCAAMM_db_line.nonlocals )) -> DBCAAMM_database = (&DBCAAMM_database);
(( PBCAAMM_db_line * ) ( NBCAAMM_db_line.nonlocals )) -> Msg = Msg;
 /* line 1234: */
SBCAAMM = NBCAAMM_db_line ;
UBCAAMM_db_chan = XPAAOSL_make_channel(A_UNITE(TBCAAMM,mode2,2,KBCAAMM_db_buffer), A_UNITE(RBCAAMM,mode1,1,SBCAAMM));
 /* line 1236: */
A_CLOSURE( XBCAAMM_put_attributes, YBCAAMM_put_attributes, ZBCAAMM_put_attributes );
(( ZBCAAMM_put_attributes * ) ( XBCAAMM_put_attributes.nonlocals )) -> UBCAAMM_db_chan = UBCAAMM_db_chan;
 /* line 1268: */
 /* line 1269: */
if ( (YACAAMM_mode & 1) )
{ 
TNCAOSI_parse_filename( Dbname, CBCAAMM_dbtype, Msg, &YDCAAMM );
ZDCAAMM_dbfn = YDCAAMM;
 /* line 1271: */
A_CLOSURE( BECAAMM_write_init, CECAAMM_write_init, DECAAMM_write_init );
(( DECAAMM_write_init * ) ( BECAAMM_write_init.nonlocals )) -> UBCAAMM_db_chan = UBCAAMM_db_chan;
 /* line 1278: */
DBCAAMM_database = FQBAOSI_open_file(ZDCAAMM_dbfn.Filename, TNBAOSI_write_access, Msg);
 /* line 1279: */
UECAAMM = SECAAMM ;
QECAAMM.data[0] = A_UNITE(TECAAMM,mode7,7,UECAAMM);
WECAAMM = ZDCAAMM_dbfn.Filename ;
QECAAMM.data[1] = A_UNITE(VECAAMM,mode7,7,WECAAMM);
YECAAMM.fn.fn_global = LRAAOSL_newline;
YECAAMM.nonlocals = A68_NIL;
QECAAMM.data[2] = A_UNITE(XECAAMM,mode12,12,YECAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZECAAMM,QECAAMM,3,A68_52 ));
 /* line 1280: */
EFCAAMM = CFCAAMM ;
AFCAAMM.data[0] = A_UNITE(DFCAAMM,mode7,7,EFCAAMM);
AFCAAMM.data[1] = A_UNITE(FFCAAMM,mode7,7,WBAAAMM_signature);
HFCAAMM.fn.fn_global = LRAAOSL_newline;
HFCAAMM.nonlocals = A68_NIL;
AFCAAMM.data[2] = A_UNITE(GFCAAMM,mode12,12,HFCAAMM);
GFBAOSL_put(UBCAAMM_db_chan, A_HISVEC(IFCAAMM,AFCAAMM,3,A68_52 ));
 /* line 1281: */
ALAAAMM_scansymbols(KFCAAMM, BECAAMM_write_init);
 /* line 1282: */
TIAAAMM_attribute_modified = A68_FALSE;
 /* line 1283: */
LJAAAMM_symbols_modified = 0X0U;
 /* line 1284: */
 /* line 1285: */
DZBAAMM_write_symbols(UBCAAMM_db_chan, AJAAAMM_mmd_tag);
} 
 /* line 1287: */
 /* line 1288: */
if ( (YACAAMM_mode>=2) )
{ 
 /* line 1289: */
if ( (Dtname.upb==0) )
{ 
DZBAAMM_write_symbols(UBCAAMM_db_chan, BJAAAMM_aux_tag);
 /* line 1290: */
 /* line 1291: */
 /* line 1292: */
TVBAAMM_save_moduledata(UBCAAMM_db_chan, WIAAAMM_modules);
} 
else
{ 
if ( SIAAAMM_diagnose )
{ 
MFCAAMM = NFCAAMM;
} 
else
{ 
MFCAAMM = AIAAAMM_aux_type;
} 
OFCAAMM_auxdbtype = MFCAAMM;
 /* line 1293: */
TNCAOSI_parse_filename( Dtname, OFCAAMM_auxdbtype, Msg, &PFCAAMM );
QFCAAMM_axfn = PFCAAMM;
 /* line 1294: */
RFCAAMM_auxfile = FQBAOSI_open_file(QFCAAMM_axfn.Filename, TNBAOSI_write_access, Msg);
 /* line 1295: */
A_CLOSURE( TFCAAMM_generator, UFCAAMM_generator, VFCAAMM_generator );
A_CALLPROC(TFCAAMM_generator,(A68_TRUE, &ZFCAAMM),(A68_TRUE, &ZFCAAMM,(TFCAAMM_generator).nonlocals));
YFCAAMM_aux_buffer = ZFCAAMM;
 /* line 1297: */
A_CLOSURE( BGCAAMM_aux_line, CGCAAMM_aux_line, DGCAAMM_aux_line );
(( DGCAAMM_aux_line * ) ( BGCAAMM_aux_line.nonlocals )) -> RFCAAMM_auxfile = (&RFCAAMM_auxfile);
(( DGCAAMM_aux_line * ) ( BGCAAMM_aux_line.nonlocals )) -> Msg = Msg;
 /* line 1300: */
GGCAAMM = BGCAAMM_aux_line ;
IGCAAMM_aux_chan = XPAAOSL_make_channel(A_UNITE(HGCAAMM,mode2,2,YFCAAMM_aux_buffer), A_UNITE(FGCAAMM,mode1,1,GGCAAMM));
 /* line 1302: */
 /* line 1303: */
NGCAAMM = LGCAAMM ;
JGCAAMM.data[0] = A_UNITE(MGCAAMM,mode7,7,NGCAAMM);
PGCAAMM = QFCAAMM_axfn.Filename ;
JGCAAMM.data[1] = A_UNITE(OGCAAMM,mode7,7,PGCAAMM);
RGCAAMM.fn.fn_global = LRAAOSL_newline;
RGCAAMM.nonlocals = A68_NIL;
JGCAAMM.data[2] = A_UNITE(QGCAAMM,mode12,12,RGCAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SGCAAMM,JGCAAMM,3,A68_52 ));
 /* line 1304: */
XGCAAMM = VGCAAMM ;
TGCAAMM.data[0] = A_UNITE(WGCAAMM,mode7,7,XGCAAMM);
TGCAAMM.data[1] = A_UNITE(YGCAAMM,mode7,7,WBAAAMM_signature);
AHCAAMM.fn.fn_global = LRAAOSL_newline;
AHCAAMM.nonlocals = A68_NIL;
TGCAAMM.data[2] = A_UNITE(ZGCAAMM,mode12,12,AHCAAMM);
GFBAOSL_put(IGCAAMM_aux_chan, A_HISVEC(BHCAAMM,TGCAAMM,3,A68_52 ));
 /* line 1305: */
DZBAAMM_write_symbols(UBCAAMM_db_chan, BJAAAMM_aux_tag);
 /* line 1306: */
TVBAAMM_save_moduledata(IGCAAMM_aux_chan, WIAAAMM_modules);
 /* line 1307: */
XQBAOSI_close_file(RFCAAMM_auxfile, Msg);
 /* line 1308: */
 /* line 1309: */
 /* line 1310: */
RIAAAMM_need_to_tidy = A68_TRUE;
} 
} 
 /* line 1312: */
 /* line 1313: */
if ( (YACAAMM_mode & 1) )
{ 
 /* line 1314: */
if ( (Dtname.upb>0) )
{ 
GHCAAMM = EHCAAMM ;
CHCAAMM.data[0] = A_UNITE(FHCAAMM,mode7,7,GHCAAMM);
CHCAAMM.data[1] = A_UNITE(HHCAAMM,mode7,7,Dtname);
JHCAAMM.fn.fn_global = LRAAOSL_newline;
JHCAAMM.nonlocals = A68_NIL;
CHCAAMM.data[2] = A_UNITE(IHCAAMM,mode12,12,JHCAAMM);
 /* line 1315: */
GFBAOSL_put(UBCAAMM_db_chan, A_HISVEC(KHCAAMM,CHCAAMM,3,A68_52 ));
} 
 /* line 1317: */
SBBAAMM_scanmodules(WIAAAMM_modules, XBCAAMM_put_attributes);
 /* line 1318: */
XQBAOSI_close_file(DBCAAMM_database, Msg);
 /* line 1319: */
 /* line 1320: */
 /* line 1321: */
RIAAAMM_need_to_tidy = A68_TRUE;
} 
} 
A_PROC_EXIT(save_database);
return;
} 
#undef NL

A68_BOOL  MICAAMM_read_module(A68_VC  Fname, A68_97  Msg)
{ 
A68_92 * PICAAMM_mf;
A68_31  RICAAMM_generator;   /* proc value of non-global proc */
A68_VC  XICAAMM;  /* avoid structure result */
A68_VC  WICAAMM_buffer;
A68_INT  YICAAMM_buftop;
A68_INT  ZICAAMM_cpos;
A68_120  CJCAAMM;  /* avoid structure result */
A68_120  DJCAAMM_fn;
A68_VC  EJCAAMM;  /* avoid structure result */
A68_VC  FJCAAMM_filename;
A68_178  GJCAAMM_star_char;
A68_182 * HJCAAMM_local_modules;
A68_BOOL  IJCAAMM_errors;
A68_36  KJCAAMM_failed;   /* proc value of non-global proc */
A68_129  YJCAAMM_nextline;   /* proc value of non-global proc */
A68_jmp_buf NICAAMM_end_of_file;
A68_152  OKCAAMM_nextchar;   /* proc value of non-global proc */
A68_269  UKCAAMM_get_basic;   /* proc value of non-global proc */
A68_270  JMCAAMM_install_use_list;   /* proc value of non-global proc */
A68_271  XMCAAMM_read_uselist;   /* proc value of non-global proc */
A68_274  FOCAAMM_check_star_clash;   /* proc value of non-global proc */
A68_276  OOCAAMM_make_module;   /* proc value of non-global proc */
A68_183  RQCAAMM_basic;
A68_BOOL  SQCAAMM_decs;
A68_BOOL  TQCAAMM_program;
A68_BOOL  UQCAAMM_continue;
A68_183  VQCAAMM;  /* avoid structure result */
A68_BOOL  WQCAAMM;  /* optbool result */
A68_BOOL  XQCAAMM;  /* optbool result */
A68_183  ARCAAMM;  /* avoid structure result */
A68_BOOL  DRCAAMM;  /* optbool result */
A68_BOOL  ERCAAMM;  /* optbool result */
A68_BOOL  FRCAAMM;  /* optbool result */
A68_CHAR  GRCAAMM_sep;
A68_182 * HRCAAMM_mm;
A68_228  IRCAAMM;  /* collateral clause result */
A68_52  JRCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  KRCAAMM;  /* procedure value */
A68_52  NRCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ORCAAMM;  /* YIELD */
A68_85  PRCAAMM;  /* OPERATORS - istruct -> vector */
A68_52  QRCAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  RRCAAMM;  /* YIELD */
A68_85  SRCAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_236  TRCAAMM;  /* collateral clause result */
A68_52  URCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  VRCAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  WRCAAMM;  /* YIELD */
A68_52  XRCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YRCAAMM;  /* YIELD */
A68_85  ZRCAAMM;  /* OPERATORS - istruct -> vector */
A68_228  ASCAAMM;  /* collateral clause result */
A68_52  DSCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ESCAAMM;  /* YIELD */
A68_52  FSCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  GSCAAMM;  /* procedure value */
A68_85  HSCAAMM;  /* OPERATORS - istruct -> vector */
A68_52  ISCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JSCAAMM;  /* procedure value */
A68_85  KSCAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  NSCAAMM;  /* clause result */
if ( sigsetjmp( NICAAMM_end_of_file.label,1) ) goto OICAAMM_end_of_file;
A_PROC_ENTRY(read_module);
 /* line 1341: */
 /* line 1342: */
{ 
PICAAMM_mf = FQBAOSI_open_file(Fname, PNBAOSI_read_access, Msg);
 /* line 1343: */
A_CLOSURE( RICAAMM_generator, SICAAMM_generator, TICAAMM_generator );
A_CALLPROC(RICAAMM_generator,(A68_TRUE, &XICAAMM),(A68_TRUE, &XICAAMM,(RICAAMM_generator).nonlocals));
WICAAMM_buffer = XICAAMM;
 /* line 1344: */
YICAAMM_buftop = 0;
ZICAAMM_cpos = 0;
 /* line 1346: */
TNCAOSI_parse_filename( Fname, BJCAAMM, Msg, &CJCAAMM );
DJCAAMM_fn = CJCAAMM;
 /* line 1347: */
LABAAMM_shortname( DJCAAMM_fn, &EJCAAMM );
FJCAAMM_filename = EJCAAMM;
 /* line 1348: */
GJCAAMM_star_char = NBAAAMM_blank_star;
 /* line 1349: */
HJCAAMM_local_modules = KBAAAMM_nilmodulelist;
 /* line 1350: */
IJCAAMM_errors = A68_FALSE;
 /* line 1352: */
A_CLOSURE( KJCAAMM_failed, LJCAAMM_failed, MJCAAMM_failed );
(( MJCAAMM_failed * ) ( KJCAAMM_failed.nonlocals )) -> IJCAAMM_errors = (&IJCAAMM_errors);
 /* line 1358: */
 /* line 1359: */
 /* line 1360: */
A_CLOSURE( YJCAAMM_nextline, ZJCAAMM_nextline, AKCAAMM_nextline );
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> PICAAMM_mf = PICAAMM_mf;
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> WICAAMM_buffer = WICAAMM_buffer;
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> YICAAMM_buftop = (&YICAAMM_buftop);
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> Msg = Msg;
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> KJCAAMM_failed = KJCAAMM_failed;
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> NICAAMM_end_of_file = NICAAMM_end_of_file;
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> ZICAAMM_cpos = (&ZICAAMM_cpos);
(( AKCAAMM_nextline * ) ( YJCAAMM_nextline.nonlocals )) -> GJCAAMM_star_char = (&GJCAAMM_star_char);
 /* line 1381: */
 /* line 1382: */
 /* line 1383: */
A_CLOSURE( OKCAAMM_nextchar, PKCAAMM_nextchar, QKCAAMM_nextchar );
(( QKCAAMM_nextchar * ) ( OKCAAMM_nextchar.nonlocals )) -> ZICAAMM_cpos = (&ZICAAMM_cpos);
(( QKCAAMM_nextchar * ) ( OKCAAMM_nextchar.nonlocals )) -> YICAAMM_buftop = (&YICAAMM_buftop);
(( QKCAAMM_nextchar * ) ( OKCAAMM_nextchar.nonlocals )) -> WICAAMM_buffer = WICAAMM_buffer;
(( QKCAAMM_nextchar * ) ( OKCAAMM_nextchar.nonlocals )) -> OKCAAMM_nextchar = OKCAAMM_nextchar;
(( QKCAAMM_nextchar * ) ( OKCAAMM_nextchar.nonlocals )) -> YJCAAMM_nextline = YJCAAMM_nextline;
 /* line 1397: */
 /* line 1398: */
 /* line 1399: */
A_CLOSURE( UKCAAMM_get_basic, VKCAAMM_get_basic, WKCAAMM_get_basic );
(( WKCAAMM_get_basic * ) ( UKCAAMM_get_basic.nonlocals )) -> OKCAAMM_nextchar = OKCAAMM_nextchar;
(( WKCAAMM_get_basic * ) ( UKCAAMM_get_basic.nonlocals )) -> ZICAAMM_cpos = (&ZICAAMM_cpos);
(( WKCAAMM_get_basic * ) ( UKCAAMM_get_basic.nonlocals )) -> GJCAAMM_star_char = (&GJCAAMM_star_char);
 /* line 1439: */
A_CLOSURE( JMCAAMM_install_use_list, KMCAAMM_install_use_list, LMCAAMM_install_use_list );
(( LMCAAMM_install_use_list * ) ( JMCAAMM_install_use_list.nonlocals )) -> JMCAAMM_install_use_list = JMCAAMM_install_use_list;
 /* line 1470: */
A_CLOSURE( XMCAAMM_read_uselist, YMCAAMM_read_uselist, ZMCAAMM_read_uselist );
(( ZMCAAMM_read_uselist * ) ( XMCAAMM_read_uselist.nonlocals )) -> UKCAAMM_get_basic = UKCAAMM_get_basic;
(( ZMCAAMM_read_uselist * ) ( XMCAAMM_read_uselist.nonlocals )) -> KJCAAMM_failed = KJCAAMM_failed;
(( ZMCAAMM_read_uselist * ) ( XMCAAMM_read_uselist.nonlocals )) -> JMCAAMM_install_use_list = JMCAAMM_install_use_list;
(( ZMCAAMM_read_uselist * ) ( XMCAAMM_read_uselist.nonlocals )) -> HJCAAMM_local_modules = (&HJCAAMM_local_modules);
 /* line 1521: */
A_CLOSURE( FOCAAMM_check_star_clash, GOCAAMM_check_star_clash, HOCAAMM_check_star_clash );
(( HOCAAMM_check_star_clash * ) ( FOCAAMM_check_star_clash.nonlocals )) -> KJCAAMM_failed = KJCAAMM_failed;
 /* line 1534: */
A_CLOSURE( OOCAAMM_make_module, POCAAMM_make_module, QOCAAMM_make_module );
(( QOCAAMM_make_module * ) ( OOCAAMM_make_module.nonlocals )) -> HJCAAMM_local_modules = (&HJCAAMM_local_modules);
(( QOCAAMM_make_module * ) ( OOCAAMM_make_module.nonlocals )) -> FJCAAMM_filename = FJCAAMM_filename;
(( QOCAAMM_make_module * ) ( OOCAAMM_make_module.nonlocals )) -> KJCAAMM_failed = KJCAAMM_failed;
 /* line 1588: */
 /* line 1589: */
SQCAAMM_decs = A68_FALSE;
 /* line 1590: */
TQCAAMM_program = A68_FALSE;
 /* line 1591: */
UQCAAMM_continue = A68_TRUE;
 /* line 1593: */
if ( !VIAAAMM_case_sensitive )
{ 
UWAAAMM_set_lowercase(FJCAAMM_filename);
} 
 /* line 1594: */
for ( ;; )
{ 
 /* line 1595: */
 /* line 1596: */
if ( !(UQCAAMM_continue) ) break;
A_CALLPROC(UKCAAMM_get_basic,( &VQCAAMM),( &VQCAAMM,(UKCAAMM_get_basic).nonlocals));
RQCAAMM_basic = VQCAAMM;
 /* line 1597: */
 /* line 1598: */
WQCAAMM = ((*(&((&RQCAAMM_basic)->Token)))==OHCAAMM_decs_tok);
if ( ! WQCAAMM )
{WQCAAMM = ((*(&((&RQCAAMM_basic)->Token)))==NHCAAMM_program_tok);
}
 /* line 1599: */
if ( WQCAAMM )
{ 
XQCAAMM = TQCAAMM_program;
if ( ! XQCAAMM )
{XQCAAMM = SQCAAMM_decs;
}
 /* line 1600: */
if ( !XQCAAMM )
{ 
SQCAAMM_decs = ((*(&((&RQCAAMM_basic)->Token)))==OHCAAMM_decs_tok);
 /* line 1601: */
 /* line 1602: */
TQCAAMM_program = !SQCAAMM_decs;
} 
else
{ 
 /* line 1603: */
if ( (((*(&((&RQCAAMM_basic)->Token)))==OHCAAMM_decs_tok)!=SQCAAMM_decs) )
{ 
A_CALLPROC(KJCAAMM_failed,(ZQCAAMM),(ZQCAAMM,(KJCAAMM_failed).nonlocals));
 /* line 1604: */
 /* line 1605: */
UQCAAMM_continue = A68_FALSE;
} 
} 
 /* line 1606: */
A_CALLPROC(UKCAAMM_get_basic,( &ARCAAMM),( &ARCAAMM,(UKCAAMM_get_basic).nonlocals));
RQCAAMM_basic = ARCAAMM;
 /* line 1607: */
 /* line 1608: */
if ( ((*(&((&RQCAAMM_basic)->Token)))!=MHCAAMM_name_tok) )
{ 
A_CALLPROC(KJCAAMM_failed,(CRCAAMM),(CRCAAMM,(KJCAAMM_failed).nonlocals));
 /* line 1609: */
 /* line 1610: */
 /* line 1611: */
UQCAAMM_continue = A68_FALSE;
} 
else
{ 
 /* line 1612: */
 /* line 1613: */
UQCAAMM_continue = A_CALLPROC(OOCAAMM_make_module,(RQCAAMM_basic, SQCAAMM_decs),(RQCAAMM_basic, SQCAAMM_decs,(OOCAAMM_make_module).nonlocals));
} 
} 
else
{ 
DRCAAMM = TQCAAMM_program;
if ( ! DRCAAMM )
{DRCAAMM = SQCAAMM_decs;
}
 /* line 1614: */
if ( !DRCAAMM )
{ 
 /* line 1615: */
UQCAAMM_continue = A68_FALSE;
} 
else
{ 
 /* line 1616: */
if ( ((*(&((&RQCAAMM_basic)->Token)))==PHCAAMM_use_tok) )
{ 
A_CALLPROC(XMCAAMM_read_uselist,((*(&((&RQCAAMM_basic)->Star)))),((*(&((&RQCAAMM_basic)->Star))),(XMCAAMM_read_uselist).nonlocals));
 /* line 1617: */
 /* line 1618: */
UQCAAMM_continue = A68_FALSE;
} 
else
{ 
 /* line 1619: */
ERCAAMM = ((*(&((&RQCAAMM_basic)->Token)))!=RHCAAMM_context_tok);
if ( ERCAAMM )
{ERCAAMM = ((*(&((&RQCAAMM_basic)->Token)))!=SHCAAMM_void_tok);
}
 /* line 1620: */
if ( ERCAAMM )
{ 
 /* line 1621: */
 /* line 1622: */
UQCAAMM_continue = A68_FALSE;
} 
} 
} 
} 
}
 /* line 1624: */
OICAAMM_end_of_file:
 /* line 1626: */
XQBAOSI_close_file(PICAAMM_mf, Msg);
 /* line 1627: */
 /* line 1629: */
if ( IJCAAMM_errors )
{ 
/*SKIP*/;
} 
else
{ 
FRCAAMM = SQCAAMM_decs;
if ( ! FRCAAMM )
{FRCAAMM = TQCAAMM_program;
}
 /* line 1630: */
if ( FRCAAMM )
{ 
 /* line 1631: */
if ( (HJCAAMM_local_modules!=KBAAAMM_nilmodulelist) )
{ 
GRCAAMM_sep = ' ';
 /* line 1632: */
HRCAAMM_mm = HJCAAMM_local_modules;
 /* line 1634: */
KRCAAMM.fn.fn_global = LRAAOSL_newline;
KRCAAMM.nonlocals = A68_NIL;
IRCAAMM.data[0] = A_UNITE(JRCAAMM,mode12,12,KRCAAMM);
ORCAAMM = MRCAAMM ;
IRCAAMM.data[1] = A_UNITE(NRCAAMM,mode7,7,ORCAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PRCAAMM,IRCAAMM,2,A68_52 ));
 /* line 1635: */
 /* line 1636: */
if ( ((*(&(HJCAAMM_local_modules->Rest)))==KBAAAMM_nilmodulelist) )
{ 
 /* line 1637: */
 /* line 1638: */
GRCAAMM_sep = 'e';
} 
else
{ 
RRCAAMM = 'e' ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(SRCAAMM,A_UNITE(QRCAAMM,mode6,6,RRCAAMM),A68_52 ));
 /* line 1639: */
 /* line 1640: */
GRCAAMM_sep = 's';
} 
 /* line 1642: */
for ( ;; )
{ 
 /* line 1643: */
 /* line 1644: */
if ( !((HRCAAMM_mm!=KBAAAMM_nilmodulelist)) ) break;
TRCAAMM.data[0] = A_UNITE(URCAAMM,mode6,6,GRCAAMM_sep);
WRCAAMM = ' ' ;
TRCAAMM.data[1] = A_UNITE(VRCAAMM,mode6,6,WRCAAMM);
YRCAAMM = (*(&((*(&(HRCAAMM_mm->Module)))->Name))) ;
TRCAAMM.data[2] = A_UNITE(XRCAAMM,mode7,7,YRCAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZRCAAMM,TRCAAMM,3,A68_52 ));
 /* line 1645: */
GRCAAMM_sep = ',';
 /* line 1646: */
 /* line 1647: */
HRCAAMM_mm = (*(&(HRCAAMM_mm->Rest)));
}
 /* line 1648: */
ESCAAMM = CSCAAMM ;
ASCAAMM.data[0] = A_UNITE(DSCAAMM,mode7,7,ESCAAMM);
GSCAAMM.fn.fn_global = LRAAOSL_newline;
GSCAAMM.nonlocals = A68_NIL;
ASCAAMM.data[1] = A_UNITE(FSCAAMM,mode12,12,GSCAAMM);
 /* line 1649: */
 /* line 1650: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HSCAAMM,ASCAAMM,2,A68_52 ));
} 
else
{ 
 /* line 1651: */
 /* line 1652: */
 /* line 1653: */
JSCAAMM.fn.fn_global = LRAAOSL_newline;
JSCAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(KSCAAMM,A_UNITE(ISCAAMM,mode12,12,JSCAAMM),A68_52 ));
} 
} 
else
{ 
 /* line 1654: */
A_CALLPROC(KJCAAMM_failed,(MSCAAMM),(MSCAAMM,(KJCAAMM_failed).nonlocals));
} 
} 
 /* line 1655: */
 /* line 1656: */
NSCAAMM = IJCAAMM_errors;
} 
A_PROC_EXIT(read_module);
return( NSCAAMM );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void SAAAAMM(void)   /* initialise DECS mm_basics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/mm_basics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_185  IBAAAMM;  /* procedure value */
A68_178  MBAAAMM;  /* collateral clause result */
A68_VC  CCAAAMM;  /* avoid structure result */
A68_VC  ICAAAMM;  /* avoid structure result */
A68_VC  LCAAAMM;  /* OPERATORS - assign op */
A68_VC  RCAAAMM;  /* avoid structure result */
A68_VC  UCAAAMM;  /* OPERATORS - assign op */
A68_VC  ADAAAMM;  /* avoid structure result */
A68_VC  DDAAAMM;  /* OPERATORS - assign op */
A68_VC  JDAAAMM;  /* avoid structure result */
A68_VC  MDAAAMM;  /* OPERATORS - assign op */
A68_VC  SDAAAMM;  /* avoid structure result */
A68_VC  VDAAAMM;  /* OPERATORS - assign op */
A68_VC  BEAAAMM;  /* avoid structure result */
A68_VC  EEAAAMM;  /* OPERATORS - assign op */
A68_VC  KEAAAMM;  /* avoid structure result */
A68_VC  NEAAAMM;  /* OPERATORS - assign op */
A68_VC  TEAAAMM;  /* avoid structure result */
A68_VC  WEAAAMM;  /* OPERATORS - assign op */
A68_VC  CFAAAMM;  /* avoid structure result */
A68_VC  FFAAAMM;  /* OPERATORS - assign op */
A68_VC  LFAAAMM;  /* avoid structure result */
A68_VC  OFAAAMM;  /* OPERATORS - assign op */
A68_VC  UFAAAMM;  /* avoid structure result */
A68_VC  XFAAAMM;  /* OPERATORS - assign op */
A68_VC  DGAAAMM;  /* avoid structure result */
A68_VC  GGAAAMM;  /* OPERATORS - assign op */
A68_VC  MGAAAMM;  /* avoid structure result */
A68_VC  PGAAAMM;  /* OPERATORS - assign op */
A68_VC  VGAAAMM;  /* avoid structure result */
A68_VC  YGAAAMM;  /* OPERATORS - assign op */
A68_198  ZGAAAMM;  /* collateral clause result */
A68_164  AHAAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  VJAAAMM;  /* avoid structure result */
A68_VC  YJAAAMM;  /* OPERATORS - assign op */
A68_202  PKAAAMM;  /* collateral clause result */
A68_201  QKAAAMM;  /* OPERATORS - istruct -> vector */
A68_164  XKAAAMM;  /* avoid structure result */
A68_VC  EQAAAMM;  /* avoid structure result */
A68_VC  HQAAAMM;  /* OPERATORS - assign op */
A68_VC  NQAAAMM;  /* avoid structure result */
A68_VC  QQAAAMM;  /* OPERATORS - assign op */
A68_VC  WQAAAMM;  /* avoid structure result */
A68_VC  ZQAAAMM;  /* OPERATORS - assign op */
A68_VC  FRAAAMM;  /* avoid structure result */
A68_VC  IRAAAMM;  /* OPERATORS - assign op */
A68_VC  ORAAAMM;  /* avoid structure result */
A68_VC  RRAAAMM;  /* OPERATORS - assign op */
A68_VC  XRAAAMM;  /* avoid structure result */
A68_VC  ASAAAMM;  /* OPERATORS - assign op */
A68_VC  GSAAAMM;  /* avoid structure result */
A68_VC  JSAAAMM;  /* OPERATORS - assign op */
A68_VC  PSAAAMM;  /* avoid structure result */
A68_VC  SSAAAMM;  /* OPERATORS - assign op */
A68_181  YSAAAMM;  /* avoid structure result */
A68_266  VHCAAMM;  /* collateral clause result */
A68_265  IICAAMM;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/mm_basics.a68";
A_config.translation_time = "Tue Apr  4 09:54:19 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RAAAAMM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:54:19 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mm_basics);
UEAALIB_a68config(LGAALIB_configinfo, WAAAAMM);
 /* line 44: */
 /* line 74: */
IBAAAMM.fn.fn_global = ZAAAAMM_generator;
IBAAAMM.nonlocals = A68_NIL;
XAAAAMM_anonymous = IBAAAMM;
 /* line 77: */
JBAAAMM_nilsymbol = (A68_177 *)A68_NIL;
 /* line 78: */
KBAAAMM_nilmodulelist = (A68_182 *)A68_NIL;
 /* line 79: */
LBAAAMM_nilmodule = (A68_180 *)A68_NIL;
 /* line 81: */
MBAAAMM.Mode = ' ';
MBAAAMM.Value = ' ';
NBAAAMM_blank_star = MBAAAMM;
 /* line 82: */
 /* line 88: */
WBAAAMM_signature = VBAAAMM;
 /* line 89: */
YBAAAMM_generator( A68_TRUE, &CCAAAMM );
BCAAAMM_blankname = CCAAAMM;
 /* line 90: */
ECAAAMM_generator( A68_TRUE, &ICAAAMM );
HCAAAMM_nostars = ICAAAMM;
LCAAAMM = KCAAAMM ;
A_VASSIGN2(LCAAAMM,HCAAAMM_nostars,A68_CHAR );
 /* line 91: */
NCAAAMM_generator( A68_TRUE, &RCAAAMM );
QCAAAMM_nooptimise = RCAAAMM;
UCAAAMM = TCAAAMM ;
A_VASSIGN2(UCAAAMM,QCAAAMM_nooptimise,A68_CHAR );
 /* line 92: */
WCAAAMM_generator( A68_TRUE, &ADAAAMM );
ZCAAAMM_true_string = ADAAAMM;
DDAAAMM = CDAAAMM ;
A_VASSIGN2(DDAAAMM,ZCAAAMM_true_string,A68_CHAR );
 /* line 93: */
FDAAAMM_generator( A68_TRUE, &JDAAAMM );
IDAAAMM_false_string = JDAAAMM;
MDAAAMM = LDAAAMM ;
A_VASSIGN2(MDAAAMM,IDAAAMM_false_string,A68_CHAR );
 /* line 94: */
ODAAAMM_generator( A68_TRUE, &SDAAAMM );
RDAAAMM_on_string = SDAAAMM;
VDAAAMM = UDAAAMM ;
A_VASSIGN2(VDAAAMM,RDAAAMM_on_string,A68_CHAR );
 /* line 95: */
XDAAAMM_generator( A68_TRUE, &BEAAAMM );
AEAAAMM_off_string = BEAAAMM;
EEAAAMM = DEAAAMM ;
A_VASSIGN2(EEAAAMM,AEAAAMM_off_string,A68_CHAR );
 /* line 96: */
GEAAAMM_generator( A68_TRUE, &KEAAAMM );
JEAAAMM_cc_string = KEAAAMM;
NEAAAMM = MEAAAMM ;
A_VASSIGN2(NEAAAMM,JEAAAMM_cc_string,A68_CHAR );
 /* line 97: */
PEAAAMM_generator( A68_TRUE, &TEAAAMM );
SEAAAMM_tr_string = TEAAAMM;
WEAAAMM = VEAAAMM ;
A_VASSIGN2(WEAAAMM,SEAAAMM_tr_string,A68_CHAR );
 /* line 98: */
YEAAAMM_generator( A68_TRUE, &CFAAAMM );
BFAAAMM_failed_string = CFAAAMM;
FFAAAMM = EFAAAMM ;
A_VASSIGN2(FFAAAMM,BFAAAMM_failed_string,A68_CHAR );
 /* line 99: */
HFAAAMM_generator( A68_TRUE, &LFAAAMM );
KFAAAMM_trfailed_string = LFAAAMM;
OFAAAMM = NFAAAMM ;
A_VASSIGN2(OFAAAMM,KFAAAMM_trfailed_string,A68_CHAR );
 /* line 100: */
QFAAAMM_generator( A68_TRUE, &UFAAAMM );
TFAAAMM_ccfailed_string = UFAAAMM;
XFAAAMM = WFAAAMM ;
A_VASSIGN2(XFAAAMM,TFAAAMM_ccfailed_string,A68_CHAR );
 /* line 101: */
ZFAAAMM_generator( A68_TRUE, &DGAAAMM );
CGAAAMM_translate_string = DGAAAMM;
GGAAAMM = FGAAAMM ;
A_VASSIGN2(GGAAAMM,CGAAAMM_translate_string,A68_CHAR );
 /* line 102: */
IGAAAMM_generator( A68_TRUE, &MGAAAMM );
LGAAAMM_compile_string = MGAAAMM;
PGAAAMM = OGAAAMM ;
A_VASSIGN2(PGAAAMM,LGAAAMM_compile_string,A68_CHAR );
 /* line 103: */
RGAAAMM_generator( A68_TRUE, &VGAAAMM );
UGAAAMM_link_string = VGAAAMM;
YGAAAMM = XGAAAMM ;
A_VASSIGN2(YGAAAMM,UGAAAMM_link_string,A68_CHAR );
 /* line 105: */
 /* line 106: */
ZGAAAMM.data[0] = ZCAAAMM_true_string;
 /* line 107: */
ZGAAAMM.data[1] = IDAAAMM_false_string;
 /* line 108: */
ZGAAAMM.data[2] = RDAAAMM_on_string;
 /* line 109: */
ZGAAAMM.data[3] = AEAAAMM_off_string;
 /* line 110: */
ZGAAAMM.data[4] = BFAAAMM_failed_string;
 /* line 111: */
ZGAAAMM.data[5] = KFAAAMM_trfailed_string;
 /* line 112: */
ZGAAAMM.data[6] = JEAAAMM_cc_string;
 /* line 113: */
ZGAAAMM.data[7] = SEAAAMM_tr_string;
 /* line 114: */
ZGAAAMM.data[8] = TFAAAMM_ccfailed_string;
 /* line 115: */
ZGAAAMM.data[9] = CGAAAMM_translate_string;
 /* line 116: */
ZGAAAMM.data[10] = LGAAAMM_compile_string;
ZGAAAMM.data[11] = UGAAAMM_link_string;
BHAAAMM_std_sym_values = A_HISVEC(AHAAAMM,ZGAAAMM,12,A68_VC );
 /* line 118: */
CHAAAMM_translate_str_top = CGAAAMM_translate_string.upb;
 /* line 119: */
DHAAAMM_compile_str_top = LGAAAMM_compile_string.upb;
 /* line 120: */
EHAAAMM_link_str_top = UGAAAMM_link_string.upb;
 /* line 122: */
 /* line 125: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
SHAAAMM_lcbias = ((A68_INT)(unsigned char)'a'-(A68_INT)(unsigned char)'A');
 /* line 132: */
THAAAMM_zero = (A68_INT)(unsigned char)'0';
 /* line 133: */
 /* line 134: */
XHAAAMM_mmd_type = WHAAAMM;
 /* line 135: */
AIAAAMM_aux_type = ZHAAAMM;
 /* line 136: */
DIAAAMM_inp_type = CIAAAMM;
 /* line 137: */
GIAAAMM_sta_type = FIAAAMM;
 /* line 138: */
JIAAAMM_a68_type = IIAAAMM;
 /* line 139: */
MIAAAMM_init_file_name = LIAAAMM;
 /* line 141: */
NIAAAMM_max_level = 0;
 /* line 142: */
OIAAAMM_max_module_name_size = 0;
 /* line 143: */
PIAAAMM_init_module_count = 0;
 /* line 144: */
QIAAAMM_init_file_count = 0;
 /* line 145: */
RIAAAMM_need_to_tidy = A68_FALSE;
 /* line 146: */
SIAAAMM_diagnose = A68_FALSE;
 /* line 147: */
TIAAAMM_attribute_modified = A68_FALSE;
 /* line 148: */
UIAAAMM_ring_bell = A68_FALSE;
 /* line 149: */
VIAAAMM_case_sensitive = A68_FALSE;
 /* line 150: */
WIAAAMM_modules = KBAAAMM_nilmodulelist;
 /* line 151: */
XIAAAMM_symbols = JBAAAMM_nilsymbol;
 /* line 152: */
YIAAAMM_sym_tail = (&XIAAAMM_symbols);
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
IJAAAMM_dest_tag = (A68_BITS )((A68_BITS )(AJAAAMM_mmd_tag|BJAAAMM_aux_tag)|CJAAAMM_init_tag);
 /* line 163: */
JJAAAMM_dest_mask = ~IJAAAMM_dest_tag;
 /* line 164: */
KJAAAMM_action_tag = (A68_BITS )((A68_BITS )(FJAAAMM_translate_tag|GJAAAMM_compile_tag)|HJAAAMM_link_tag);
 /* line 165: */
LJAAAMM_symbols_modified = 0X0U;
 /* line 167: */
MJAAAMM_std_star_chars = BCAAAMM_blankname;
 /* line 168: */
NJAAAMM_std_edit_command = BCAAAMM_blankname;
 /* line 169: */
OJAAAMM_std_exe_dir = BCAAAMM_blankname;
 /* line 170: */
PJAAAMM_std_heap_size = BCAAAMM_blankname;
 /* line 172: */
RJAAAMM_generator( A68_TRUE, &VJAAAMM );
UJAAAMM_std_database_name = VJAAAMM;
YJAAAMM = XJAAAMM ;
A_VASSIGN2(YJAAAMM,UJAAAMM_std_database_name,A68_CHAR );
 /* line 173: */
ZJAAAMM_database_name = UJAAAMM_std_database_name;
 /* line 174: */
AKAAAMM_detach_name = BCAAAMM_blankname;
 /* line 175: */
BKAAAMM_init_detach_name = BCAAAMM_blankname;
 /* line 176: */
CKAAAMM_operating_system = BCAAAMM_blankname;
 /* line 178: */
DKAAAMM_default_off = JBAAAMM_nilsymbol;
 /* line 179: */
EKAAAMM_default_on = JBAAAMM_nilsymbol;
 /* line 180: */
FKAAAMM_default_debug = JBAAAMM_nilsymbol;
 /* line 181: */
GKAAAMM_default_star_chars = JBAAAMM_nilsymbol;
 /* line 182: */
HKAAAMM_default_heap_size = JBAAAMM_nilsymbol;
 /* line 183: */
IKAAAMM_default_optimise_chars = JBAAAMM_nilsymbol;
 /* line 184: */
JKAAAMM_default_exe_dir = JBAAAMM_nilsymbol;
 /* line 185: */
KKAAAMM_edit_command = JBAAAMM_nilsymbol;
 /* line 186: */
LKAAAMM_auto_link = JBAAAMM_nilsymbol;
 /* line 187: */
MKAAAMM_auto_version = JBAAAMM_nilsymbol;
 /* line 188: */
NKAAAMM_notify_at_go = JBAAAMM_nilsymbol;
 /* line 189: */
OKAAAMM_bell_flag = JBAAAMM_nilsymbol;
 /* line 191: */
 /* line 192: */
PKAAAMM.data[0] = (&FKAAAMM_default_debug);
 /* line 193: */
PKAAAMM.data[1] = (&GKAAAMM_default_star_chars);
 /* line 194: */
PKAAAMM.data[2] = (&HKAAAMM_default_heap_size);
 /* line 195: */
PKAAAMM.data[3] = (&IKAAAMM_default_optimise_chars);
 /* line 196: */
PKAAAMM.data[4] = (&JKAAAMM_default_exe_dir);
 /* line 197: */
PKAAAMM.data[5] = (&KKAAAMM_edit_command);
 /* line 198: */
PKAAAMM.data[6] = (&LKAAAMM_auto_link);
 /* line 199: */
PKAAAMM.data[7] = (&MKAAAMM_auto_version);
 /* line 200: */
PKAAAMM.data[8] = (&NKAAAMM_notify_at_go);
PKAAAMM.data[9] = (&OKAAAMM_bell_flag);
RKAAAMM_standard_symbols = A_HISVEC(QKAAAMM,PKAAAMM,10,A68_177 **);
 /* line 202: */
TKAAAMM_generator( A68_TRUE, &XKAAAMM );
WKAAAMM_init_sym_values = XKAAAMM;
 /* line 204: */
 /* line 221: */
 /* line 226: */
 /* line 244: */
 /* line 261: */
 /* line 295: */
 /* line 326: */
 /* line 331: */
 /* line 332: */
 /* line 333: */
 /* line 366: */
 /* line 367: */
 /* line 368: */
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 372: */
 /* line 374: */
 /* line 375: */
 /* line 376: */
 /* line 377: */
 /* line 378: */
 /* line 379: */
 /* line 380: */
 /* line 381: */
 /* line 382: */
 /* line 384: */
AQAAAMM_generator( A68_TRUE, &EQAAAMM );
DQAAAMM_compile_txt = EQAAAMM;
HQAAAMM = GQAAAMM ;
A_VASSIGN2(HQAAAMM,DQAAAMM_compile_txt,A68_CHAR );
 /* line 385: */
JQAAAMM_generator( A68_TRUE, &NQAAAMM );
MQAAAMM_link_txt = NQAAAMM;
QQAAAMM = PQAAAMM ;
A_VASSIGN2(QQAAAMM,MQAAAMM_link_txt,A68_CHAR );
 /* line 386: */
SQAAAMM_generator( A68_TRUE, &WQAAAMM );
VQAAAMM_debug_txt = WQAAAMM;
ZQAAAMM = YQAAAMM ;
A_VASSIGN2(ZQAAAMM,VQAAAMM_debug_txt,A68_CHAR );
 /* line 387: */
BRAAAMM_generator( A68_TRUE, &FRAAAMM );
ERAAAMM_star_txt = FRAAAMM;
IRAAAMM = HRAAAMM ;
A_VASSIGN2(IRAAAMM,ERAAAMM_star_txt,A68_CHAR );
 /* line 388: */
KRAAAMM_generator( A68_TRUE, &ORAAAMM );
NRAAAMM_heap_size_txt = ORAAAMM;
RRAAAMM = QRAAAMM ;
A_VASSIGN2(RRAAAMM,NRAAAMM_heap_size_txt,A68_CHAR );
 /* line 389: */
TRAAAMM_generator( A68_TRUE, &XRAAAMM );
WRAAAMM_exename_txt = XRAAAMM;
ASAAAMM = ZRAAAMM ;
A_VASSIGN2(ASAAAMM,WRAAAMM_exename_txt,A68_CHAR );
 /* line 390: */
CSAAAMM_generator( A68_TRUE, &GSAAAMM );
FSAAAMM_version_txt = GSAAAMM;
JSAAAMM = ISAAAMM ;
A_VASSIGN2(JSAAAMM,FSAAAMM_version_txt,A68_CHAR );
 /* line 391: */
LSAAAMM_generator( A68_TRUE, &PSAAAMM );
OSAAAMM_optimise_txt = PSAAAMM;
SSAAAMM = RSAAAMM ;
A_VASSIGN2(SSAAAMM,OSAAAMM_optimise_txt,A68_CHAR );
 /* line 393: */
USAAAMM_generator( A68_TRUE, &YSAAAMM );
XSAAAMM_default_attributes = YSAAAMM;
 /* line 395: */
 /* line 401: */
 /* line 430: */
 /* line 435: */
 /* line 446: */
 /* line 453: */
 /* line 470: */
 /* line 478: */
 /* line 489: */
 /* line 496: */
 /* line 516: */
 /* line 531: */
 /* line 541: */
 /* line 554: */
ZWAAAMM_query_active = A68_TRUE;
 /* line 555: */
 /* line 557: */
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 597: */
 /* line 605: */
 /* line 610: */
 /* line 615: */
 /* line 620: */
 /* line 625: */
 /* line 632: */
 /* line 639: */
 /* line 649: */
 /* line 660: */
 /* line 665: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
 /* line 678: */
CDBAAMM_save_all = (ADBAAMM_save_environ+BDBAAMM_save_modules);
 /* line 679: */
 /* line 680: */
 /* line 681: */
 /* line 710: */
 /* line 727: */
 /* line 728: */
 /* line 729: */
 /* line 738: */
 /* line 739: */
 /* line 740: */
 /* line 741: */
 /* line 769: */
 /* line 825: */
 /* line 1074: */
 /* line 1092: */
 /* line 1104: */
 /* line 1124: */
 /* line 1140: */
 /* line 1189: */
 /* line 1219: */
 /* line 1323: */
 /* line 1324: */
 /* line 1325: */
 /* line 1326: */
 /* line 1327: */
 /* line 1328: */
 /* line 1329: */
 /* line 1330: */
 /* line 1331: */
 /* line 1332: */
 /* line 1333: */
VHCAAMM.data[0].Word = XHCAAMM;
 /* line 1334: */
VHCAAMM.data[0].Token = NHCAAMM_program_tok;
VHCAAMM.data[1].Word = ZHCAAMM;
 /* line 1335: */
VHCAAMM.data[1].Token = OHCAAMM_decs_tok;
VHCAAMM.data[2].Word = BICAAMM;
 /* line 1336: */
VHCAAMM.data[2].Token = PHCAAMM_use_tok;
VHCAAMM.data[3].Word = DICAAMM;
 /* line 1337: */
VHCAAMM.data[3].Token = QHCAAMM_begin_tok;
VHCAAMM.data[4].Word = FICAAMM;
 /* line 1338: */
VHCAAMM.data[4].Token = RHCAAMM_context_tok;
VHCAAMM.data[5].Word = HICAAMM;
VHCAAMM.data[5].Token = SHCAAMM_void_tok;
JICAAMM_reserved_words = A_HISVEC(IICAAMM,VHCAAMM,6,A68_184 );
 /* line 1340: */
 /* line 1658: */
 /* line 1659: */
 /* line 1692: */
/*SKIP*/;
A_PROC_EXIT(DECS mm_basics);
} 
#undef NL
/* end of translation of ./a68files/mm_basics.a68 */
