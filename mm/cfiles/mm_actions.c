
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
/* UNAME:QHFAAMM */
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

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t164 *),(struct A68t164 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC REF MODE164 */

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
struct A68t214{
A68_INT  C;
A_PAD_INT(PAD_44)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
A68_BITS  A;
A_PAD_BITS(PAD_45)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t217,(A68_VC ,struct A68t178 ,struct A68t97 ),(A68_VC ,struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE26,MODE178,MODE97) VOID */
struct A68t216{
A68_VC  Parameter;
struct A68t217  Proc;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,MODE217)  */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t178 ,struct A68t97 ),(struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE178,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t177 ,struct A68t97 ),(struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE177,MODE97) VOID */
struct A68t218 { A68_INT mode; union {
struct A68t216  mode1;
struct A68t219  mode2;
struct A68t220  mode3;
} data; };
typedef struct A68t218  A68_218 ;    /* UNION(MODE216,MODE219,MODE220)  */
struct A68t221 { A68_INT mode; union {
struct A68t222 * mode1;
struct A68t223 * mode2;
struct A68t224 * mode3;
} data; };
typedef struct A68t221  A68_221 ;    /* UNION(REF MODE222,REF MODE223,REF MODE224)  */
struct A68t222 ;

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t222 *,struct A68t34 *),(struct A68t222 *,struct A68t34 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE222,REF MODE34) VOID */
struct A68t226 { A68_INT mode; union {
A68_VC  mode1;
struct A68t164  mode2;
struct A68t227  mode3;
} data; };
typedef struct A68t226  A68_226 ;    /* UNION(REF MODE26,REF MODE164,MODE227)  */
struct A68t222{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t175  Parameter;
struct A68t215  Access;
struct A68t214  Continuation;
struct A68t226  Help;
struct A68t218  Command;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(REF MODE26,REF MODE26,MODE175,MODE215,MODE214,MODE226,MODE218)  */
A_VECTOR(struct A68t221 ,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] MODE221 */
struct A68t223{
struct A68t222 * Group;
struct A68t225  Commands;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(REF MODE222,REF MODE225)  */
struct A68t224{
struct A68t222 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t225  Locals;
struct A68t225  Globals;
struct A68t222 * Postlude;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(REF MODE222,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE222)  */
struct A68t228{
struct A68t224 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_46)
struct A68t164  Input_lines;
struct A68t228 * Caller;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE224,INT,REF MODE164,REF MODE228)  */
struct A68t229 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t229 *,struct A68t222 *,struct A68t178 ,struct A68t97 ,struct A68t214 *),(struct A68t229 *,struct A68t222 *,struct A68t178 ,struct A68t97 ,struct A68t214 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE229,REF MODE222,MODE178,MODE97) MODE214 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE164) VOID */
struct A68t233 ;

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t233 ),(struct A68t233 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE233) VOID */
struct A68t229{
struct A68t228 * Stack;
struct A68t189  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_47)
A68_BOOL  Private;
A_PAD_BOOL(PAD_48)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_49)
struct A68t230  Caller;
struct A68t231  Report_error;
struct A68t232  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE228,REF MODE189,BOOL,BOOL,BOOL,MODE230,MODE231,MODE232,MODE97)  */
struct A68t233 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t214 ,struct A68t214 ),(struct A68t214 ,struct A68t214 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE214,MODE214) BOOL */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t225 ,struct A68t225 ,struct A68t225 *),(struct A68t225 ,struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE225,MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t225 ,struct A68t221 ,struct A68t225 *),(struct A68t225 ,struct A68t221 ,struct A68t225 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE225,MODE221) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t225 *,struct A68t225 ,struct A68t225 *),(struct A68t225 *,struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF REF MODE225,MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t225 *,struct A68t221 ,struct A68t225 *),(struct A68t225 *,struct A68t221 ,struct A68t225 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF REF MODE225,MODE221) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t225 ,struct A68t225 *),(struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t221 ,struct A68t225 *),(struct A68t221 ,struct A68t225 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE221) REF MODE225 */

A_PROCEDURE(struct A68t223 *,A68t241,(A68_VC ,A68_VC ,struct A68t215 ,struct A68t225 ),(A68_VC ,A68_VC ,struct A68t215 ,struct A68t225 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE26,MODE26,MODE215,MODE225) REF MODE223 */

A_PROCEDURE(struct A68t224 *,A68t242,(struct A68t222 *,A68_VC ,A68_VC *,struct A68t225 ,struct A68t225 ,struct A68t218 ),(struct A68t222 *,A68_VC ,A68_VC *,struct A68t225 ,struct A68t225 ,struct A68t218 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE222,MODE26,REF REF MODE26,REF MODE225,REF MODE225,MODE218) REF MODE224 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t229 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t229 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE229,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t229 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t229 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE229,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t229 *,A68t245,(struct A68t231 ,struct A68t232 ,struct A68t97 ,struct A68t230 ,struct A68t184 *,struct A68t224 *,struct A68t178 ),(struct A68t231 ,struct A68t232 ,struct A68t97 ,struct A68t230 ,struct A68t184 *,struct A68t224 *,struct A68t178 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE231,MODE232,MODE97,MODE230,REF MODE184,REF MODE224,MODE178) REF MODE229 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t229 *,struct A68t214 *),(struct A68t229 *,struct A68t214 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE229) MODE214 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE26,MODE26,MODE196,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t249,(A68_VC ),(A68_VC ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t250,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t209 ,struct A68t97 ,A68_VC *),(struct A68t209 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE209,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE176,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t120 *),(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t120 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE176,MODE26,MODE97) MODE120 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t144 *),(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t144 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE177,REF INT,REF MODE26,MODE97) MODE144 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE176,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t257,(struct A68t176 ,struct A68t97 ,struct A68t46 ),(struct A68t176 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE176,MODE97,MODE46) INT */
struct A68t258{
A68_INT  Lwb;
A_PAD_INT(PAD_50)
A68_INT  Upb;
A_PAD_INT(PAD_51)
};
typedef struct A68t258  A68_258 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t176 ,struct A68t258 ,struct A68t97 ,struct A68t258 *),(struct A68t176 ,struct A68t258 ,struct A68t97 ,struct A68t258 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE176,MODE258,MODE97) MODE258 */

A_PROCEDURE(A68_VOID ,A68t260,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t261,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE176,MODE97) CHAR */

A_PROCEDURE(struct A68t184 *,A68t262,(void),(void *));
typedef struct A68t262  A68_262 ;    /* PROC REF MODE184 */
struct A68t263{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_52)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_53)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_54)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_55)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_56)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_57)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_58)
A68_INT  Width;
A_PAD_INT(PAD_59)
A68_INT  Page_count;
A_PAD_INT(PAD_60)
A68_INT  Page_length;
A_PAD_INT(PAD_61)
A68_INT  Eof_count;
A_PAD_INT(PAD_62)
struct A68t198 * Standard_reader;
struct A68t264 * Infile;
struct A68t156  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE198,REF MODE264,MODE156,REF MODE92,REF MODE92)  */
struct A68t264{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_63)
A68_INT  Number;
A_PAD_INT(PAD_64)
A68_VC  Name;
struct A68t198 * Reader;
struct A68t264 * Previous;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE198,REF MODE264)  */

A_PROCEDURE(struct A68t263 *,A68t265,(void),(void *));
typedef struct A68t265  A68_265 ;    /* PROC REF MODE263 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE156) VOID */
struct A68t272{
A68_CHAR  Mode;
A_PAD_CHAR(PAD_65)
A68_CHAR  Value;
A_PAD_CHAR(PAD_66)
};
typedef struct A68t272  A68_272 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t270{
struct A68t271 * Module;
struct A68t272  Star;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE271,MODE272,REF MODE270)  */
A_VECTOR(struct A68t274 ,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] MODE274 */
struct A68t274{
A68_VC  Name;
A68_VC  Value;
A68_VC  Initvalue;
struct A68t275 * Default;
A68_BOOL  Permanent;
A_PAD_BOOL(PAD_67)
A68_BITS  Marker;
A_PAD_BITS(PAD_68)
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE275,BOOL,BITS)  */
struct A68t271{
A68_VC  Name;
A68_VC  Filename;
A68_BOOL  Decs;
A_PAD_BOOL(PAD_69)
A68_BOOL  Recursive;
A_PAD_BOOL(PAD_70)
A68_BOOL  Analysed;
A_PAD_BOOL(PAD_71)
A68_BITS  State;
A_PAD_BITS(PAD_72)
struct A68t273  Attributes;
A68_INT  Level;
A_PAD_INT(PAD_73)
A68_INT  Number;
A_PAD_INT(PAD_74)
A68_INT  Marker;
A_PAD_INT(PAD_75)
struct A68t270 * Uses;
struct A68t270 * Usedby;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(REF MODE26,REF MODE26,BOOL,BOOL,BOOL,BITS,REF MODE273,INT,INT,INT,REF MODE270,REF MODE270)  */
struct A68t275{
A68_VC  Name;
A68_VC  Text;
A68_BITS  Tags;
A_PAD_BITS(PAD_76)
struct A68t275 * Last;
struct A68t275 * Rest;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE26,REF MODE26,BITS,REF MODE275,REF MODE275)  */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t275 *),(struct A68t275 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE275) BOOL */
struct A68t278 ;

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t278 ,A68_VC *),(struct A68t278 ,A68_VC *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE278) REF MODE26 */
struct A68t278{
A68_VC  Operating_system;
A68_VC  Star_chars;
A68_VC  Edit_command;
A68_VC  Exe_dir;
A68_VC  Heap_size;
A68_BOOL  Case_sensitive;
A_PAD_BOOL(PAD_77)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE26,BOOL)  */
A_VECTOR(struct A68t275 **,A68t279);
typedef struct A68t279  A68_279 ;    /* VECTOR [] REF REF MODE275 */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t120 ,A68_VC *),(struct A68t120 ,A68_VC *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE120) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t281,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE26,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t282,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE26,MODE26) REF MODE26 */

A_PROCEDURE(struct A68t275 *,A68t283,(A68_VC ,A68_VC ,A68_BITS ),(A68_VC ,A68_VC ,A68_BITS ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE26,REF MODE26,BITS) REF MODE275 */

A_PROCEDURE(A68_INT ,A68t284,(A68_VC ),(A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t275 *,A68t285,(A68_VC ,struct A68t276 ),(A68_VC ,struct A68t276 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE26,MODE276) REF MODE275 */

A_PROCEDURE(struct A68t275 *,A68t286,(A68_VC ),(A68_VC ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE26) REF MODE275 */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t275 *),(struct A68t275 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE275) VOID */

A_PROCEDURE(A68_BOOL ,A68t288,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE26,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t270 *,A68_INT ),(struct A68t270 *,A68_INT ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE270,INT) VOID */
struct A68t291 ;

A_PROCEDURE(struct A68t270 *,A68t290,(struct A68t270 *,struct A68t291 ),(struct A68t270 *,struct A68t291 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE270,MODE291) REF MODE270 */

A_PROCEDURE(A68_BOOL ,A68t291,(struct A68t271 *,struct A68t272 ),(struct A68t271 *,struct A68t272 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE271,MODE272) BOOL */

A_PROCEDURE(struct A68t270 *,A68t292,(struct A68t270 *,A68_VC ),(struct A68t270 *,A68_VC ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE270,MODE26) REF MODE270 */

A_PROCEDURE(A68_BOOL ,A68t293,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE26,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t294,(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ),(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE26,MODE26,BITS,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t295,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t296,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE26,MODE97) BOOL */

A_PROCEDURE(struct A68t270 *,A68t297,(struct A68t270 *,A68_INT ),(struct A68t270 *,A68_INT ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE270,INT) REF MODE270 */

A_PROCEDURE(A68_BOOL ,A68t298,(struct A68t272 ,A68_VC ),(struct A68t272 ,A68_VC ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE272,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t271 *,A68_INT ,A68_VC *),(struct A68t271 *,A68_INT ,A68_VC *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE271,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t300,(struct A68t271 *,A68_INT ),(struct A68t271 *,A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE271,INT) BOOL */
struct A68t302 ;

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t271 *,A68_INT ,struct A68t302 ),(struct A68t271 *,A68_INT ,struct A68t302 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE271,INT,MODE302) VOID */
struct A68t302 { A68_INT mode; union {
A68_VC  mode1;
A68_BOOL  mode2;
} data; };
typedef struct A68t302  A68_302 ;    /* UNION(REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t271 *,A68_INT ),(struct A68t271 *,A68_INT ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE271,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE270) VOID */

A_PROCEDURE(A68_BOOL ,A68t305,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE26,MODE26,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t306,(A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t307,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE26,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t308,(A68_VC ,struct A68t177 ,struct A68t97 ),(A68_VC ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE26,REF MODE177,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t309,(A68_VC ,struct A68t177 ,A68_VC ,struct A68t97 ),(A68_VC ,struct A68t177 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE26,REF MODE177,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t310,(A68_VC ,struct A68t177 ,A68_INT ,struct A68t300 ,struct A68t97 ),(A68_VC ,struct A68t177 ,A68_INT ,struct A68t300 ,struct A68t97 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE26,REF MODE177,INT,MODE300,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t311,(struct A68t34 *,struct A68t271 *,A68_BOOL ,struct A68t97 ),(struct A68t34 *,struct A68t271 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE34,REF MODE271,BOOL,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t312,(struct A68t34 *,A68_VC ,struct A68t97 ),(struct A68t34 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE34,MODE26,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t313,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE34,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t314,(A68_INT ,struct A68t177 ,A68_BOOL ,struct A68t97 ),(A68_INT ,struct A68t177 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(INT,REF MODE177,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t270 *,struct A68t97 ),(struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(REF MODE270,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t316,(struct A68t177 ,A68_INT ,struct A68t97 ),(struct A68t177 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(REF MODE177,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t317,(A68_VC ,A68_INT ,struct A68t300 ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_INT ,struct A68t300 ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE26,INT,MODE300,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t318,(A68_VC ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE26,BOOL,BOOL) VOID */

A_PROCEDURE(A68_BOOL ,A68t319,(A68_VC ,A68_BOOL ,A68_VC *,A68_INT *,struct A68t97 ),(A68_VC ,A68_BOOL ,A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE26,BOOL,REF REF MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t320,(struct A68t271 *,A68_BOOL ,A68_VC *,struct A68t97 ),(struct A68t271 *,A68_BOOL ,A68_VC *,struct A68t97 ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE271,BOOL,REF REF MODE26,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t321,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE26,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t177 ,A68_BOOL ,struct A68t97 ),(struct A68t177 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE177,BOOL,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t323,(struct A68t177 ,A68_BOOL ,struct A68t97 ),(struct A68t177 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE177,BOOL,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t271 *,struct A68t97 ),(struct A68t271 *,struct A68t97 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE271,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t271 *,A68_VC ,struct A68t97 ),(struct A68t271 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE271,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t326,(struct A68t271 *,struct A68t272 ,A68_BOOL ,struct A68t97 ),(struct A68t271 *,struct A68t272 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE271,MODE272,BOOL,MODE97) BOOL */

A_PROCEDURE(struct A68t270 *,A68t327,(struct A68t270 *,A68_BOOL ,struct A68t38 ,struct A68t97 ),(struct A68t270 *,A68_BOOL ,struct A68t38 ,struct A68t97 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE270,BOOL,MODE38,MODE97) REF MODE270 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE129) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VOID ,A68t330,(A68_VC ,A68_BOOL ,struct A68t97 ),(A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE26,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t331);
typedef struct A68t331  A68_331 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t333);
typedef struct A68t333  A68_333 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,10,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t177 ,A68_BOOL *,struct A68t97 ),(struct A68t177 ,A68_BOOL *,struct A68t97 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE177,REF BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t338);
typedef struct A68t338  A68_338 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t339);
typedef struct A68t339  A68_339 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,44,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t342);
typedef struct A68t342  A68_342 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,45,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(struct A68t52 ,11,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 11 MODE52 */
A_ISTRUCT(A68_CHAR ,14,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t352);
typedef struct A68t352  A68_352 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,8,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t356);
typedef struct A68t356  A68_356 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,11,A68t357);
typedef struct A68t357  A68_357 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t367);
typedef struct A68t367  A68_367 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t369);
typedef struct A68t369  A68_369 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,65,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 65 CHAR */
A_ISTRUCT(struct A68t52 ,10,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 10 MODE52 */
A_ISTRUCT(A68_CHAR ,50,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,60,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(struct A68t222 *,A68t376,(A68_VC ,A68_VC ,struct A68t175 ,struct A68t215 ,A68_VC ,struct A68t220 ),(A68_VC ,A68_VC ,struct A68t175 ,struct A68t215 ,A68_VC ,struct A68t220 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE26,MODE26,MODE175,MODE215,MODE26,MODE220) REF MODE222 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t97 ,struct A68t225 *),(struct A68t97 ,struct A68t225 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE97) REF MODE225 */
A_ISTRUCT(A68_CHAR ,38,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t221 ,2,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 2 MODE221 */
A_ISTRUCT(A68_CHAR ,33,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t221 ,5,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 5 MODE221 */
A_ISTRUCT(struct A68t175 ,2,A68t384);
typedef struct A68t384  A68_384 ;    /* STRUCT 2 MODE175 */
A_ISTRUCT(A68_CHAR ,34,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(struct A68t221 ,7,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 7 MODE221 */
A_ISTRUCT(A68_CHAR ,32,A68t387);
typedef struct A68t387  A68_387 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t388);
typedef struct A68t388  A68_388 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t389);
typedef struct A68t389  A68_389 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t392);
typedef struct A68t392  A68_392 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t393);
typedef struct A68t393  A68_393 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(struct A68t221 ,26,A68t394);
typedef struct A68t394  A68_394 ;    /* STRUCT 26 MODE221 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from mm_version --- */
extern A68_VC  IAAAAMM_mm_date;
extern A68_VC  LAAAAMM_mm_string;
extern A68_VC  OAAAAMM_mm_number;
/* --- End of imports from mm_version --- */


/* --- Imports from mm_utilities --- */
extern A68_BOOL  LEDAAMM_try_name(A68_VC ,A68_VC );
extern A68_BOOL  RPEAAMM_are_all_required(A68_VC ,struct A68t177 ,struct A68t97 );
extern A68_VOID  LQEAAMM_prepare_link(struct A68t177 ,struct A68t97 );
extern A68_VOID  IUEAAMM_prepare_compile(A68_VC ,struct A68t177 ,A68_VC ,struct A68t97 );
extern A68_VOID  GVEAAMM_remove_attribute(A68_VC ,struct A68t177 ,A68_INT ,struct A68t300 ,struct A68t97 );
extern A68_BOOL  KJDAAMM_put_module_name(struct A68t34 *,struct A68t271 *,A68_BOOL ,struct A68t97 );
extern A68_BOOL  HKDAAMM_list_compiles(struct A68t34 *,A68_VC ,struct A68t97 );
extern A68_VOID  IMDAAMM_list_links(struct A68t34 *,A68_VC );
extern A68_VOID  BODAAMM_list_attributes(struct A68t34 *,A68_INT );
extern A68_VOID  RVEAAMM_test_attribute(A68_INT ,struct A68t177 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  YXEAAMM_link_programs(struct A68t270 *,struct A68t97 );
extern A68_BOOL  VRDAAMM_unmark_attribute(struct A68t271 *,A68_INT );
extern A68_BOOL  ZRDAAMM_unmark_compile(struct A68t271 *,A68_INT );
extern A68_BOOL  FSDAAMM_unmark_link(struct A68t271 *,A68_INT );
extern A68_BOOL  QZEAAMM_do_specchange(struct A68t177 ,A68_INT ,struct A68t97 );
#define KZEAAMM_optimistic 1
#define LZEAAMM_pessimistic 2
#define MZEAAMM_rebuild 3
extern A68_BOOL  AJDAAMM_check_module_file(struct A68t271 *,A68_BOOL ,A68_VC *,struct A68t97 );
extern A68_VOID  AWDAAMM_execute(A68_VC ,struct A68t97 );
extern A68_VOID  BQDAAMM_show_symbol_class(A68_VC ,A68_VC );
extern A68_VOID  RDFAAMM_do_module_action(struct A68t177 ,A68_BOOL ,struct A68t97 );
extern A68_BOOL  QYEAAMM_do_symbol_move(struct A68t177 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  YBBAAMM_mark_modules(struct A68t270 *,A68_INT );
extern A68_VOID  KPEAAMM_set_compile_mark(struct A68t271 *,A68_VC ,struct A68t97 );
extern A68_270 * EOEAAMM_update_version(struct A68t270 *,A68_BOOL ,struct A68t38 ,struct A68t97 );
#define ZNEAAMM_all_modules A68_FALSE
extern A68_VOID  YGFAAMM_initialise_mm_utilities(struct A68t97 ,A68_VC *);
#define OFDAAMM_first_directory A68_TRUE
/* --- End of imports from mm_utilities --- */


/* --- Imports from mm_oscommands --- */
extern A68_VOID  VWCAAMM_insert_oscommand_item(A68_VC );
extern A68_BOOL  KXCAAMM_obey_oscommand(struct A68t97 );
/* --- End of imports from mm_oscommands --- */


/* --- Imports from mm_basics --- */
extern A68_BOOL  GHAAAMM_flagon(struct A68t275 *);
extern A68_BOOL  KHAAAMM_flagoff(struct A68t275 *);
extern A68_270 * KBAAAMM_nilmodulelist;
extern A68_271 * LBAAAMM_nilmodule;
extern A68_275 * JBAAAMM_nilsymbol;
extern A68_BOOL  VIAAAMM_case_sensitive;
extern A68_VC  BCAAAMM_blankname;
extern A68_INT  DDBAAMM_database_modified(void);
extern A68_INT  CDBAAMM_save_all;
extern A68_BOOL  SIAAAMM_diagnose;
extern A68_275 * KKAAAMM_edit_command;
extern A68_VC  ZJAAAMM_database_name;
extern A68_VC  CKAAAMM_operating_system;
extern A68_279  RKAAAMM_standard_symbols;
extern A68_VC  XHAAAMM_mmd_type;
extern A68_VC  AKAAAMM_detach_name;
extern A68_VC  AIAAAMM_aux_type;
#define ZIAAAMM_changed_tag 0X001U
#define AJAAAMM_mmd_tag 0X002U
extern A68_BITS  IJAAAMM_dest_tag;
extern A68_VOID  UWAAAMM_set_lowercase(A68_VC );
#define DXAAAMM_default_yes 1
#define EXAAAMM_default_no 2
extern A68_BOOL  JXAAAMM_query(A68_VC ,A68_INT ,struct A68t97 );
extern A68_VOID  SZAAAMM_mnot_found(A68_VC ,A68_VC *);
extern A68_VOID  YZAAAMM_fnot_found(A68_VC ,A68_VC *);
extern A68_275 * VMAAAMM_define_symbol(A68_VC ,A68_VC ,A68_BITS );
extern A68_INT  KNAAAMM_undefine_symbol(A68_VC );
extern A68_275 * ALAAAMM_scansymbols(A68_VC ,struct A68t276 );
extern A68_VOID  GMAAAMM_mark_action_symbol(struct A68t275 *);
extern A68_270 * WIAAAMM_modules;
extern A68_270 * SBBAAMM_scanmodules(struct A68t270 *,struct A68t291 );
extern A68_270 * JCBAAMM_findmodule(struct A68t270 *,A68_VC );
extern A68_INT  KEBAAMM_set_modulenumbers(void);
extern A68_VOID  VACAAMM_save_database(A68_VC ,A68_VC ,A68_INT ,struct A68t97 );
extern A68_INT  NIAAAMM_max_level;
extern A68_BOOL  TIAAAMM_attribute_modified;
#define QPAAAMM_compile_attribute 1
#define RPAAAMM_link_attribute 2
#define SPAAAMM_debug_attribute 3
#define TPAAAMM_star_attribute 4
#define UPAAAMM_heap_attribute 5
#define VPAAAMM_exename_attribute 6
#define WPAAAMM_version_attribute 7
#define XPAAAMM_optimise_attribute 8
#define YPAAAMM_max_attribute 8
extern A68_VOID  GTAAAMM_attribute_name(A68_INT ,A68_VC *);
extern A68_VOID  KTAAAMM_attribute_value(struct A68t271 *,A68_INT ,A68_VC *);
extern A68_VOID  YTAAAMM_set_attribute(struct A68t271 *,A68_INT ,struct A68t302 );
extern A68_BOOL  ZUAAAMM_attribute_marked(struct A68t271 *,A68_INT );
extern A68_VC  RDAAAMM_on_string;
extern A68_VC  BFAAAMM_failed_string;
extern A68_VC  KFAAAMM_trfailed_string;
extern A68_VC  JEAAAMM_cc_string;
extern A68_VC  TFAAAMM_ccfailed_string;
extern A68_VC  SEAAAMM_tr_string;
extern A68_275 * NKAAAMM_notify_at_go;
extern A68_275 * MKAAAMM_auto_version;
extern A68_VOID  XSBAAMM_set_usedby_lists(struct A68t270 *);
extern A68_VOID  PTBAAMM_clear_usedby_lists(struct A68t270 *);
extern A68_BOOL  ZWAAAMM_query_active;
extern A68_BOOL  AXAAAMM_can_query(void);
/* --- End of imports from mm_basics --- */


/* --- Imports from commandcaller --- */
/* --- End of imports from commandcaller --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from kernelreader --- */
extern A68_175  ALFAOST_name_syntax;
extern A68_BOOL  ELFAOST_is_name(struct A68t176 );
extern A68_VOID  JLFAOST_get_name(struct A68t176 ,struct A68t97 ,A68_VC *);
extern A68_175  XLFAOST_string_syntax;
extern A68_VOID  QMFAOST_get_string(struct A68t176 ,struct A68t97 ,A68_VC *);
extern A68_175  HNFAOST_filename_syntax;
extern A68_BOOL  SNFAOST_is_filename(struct A68t176 );
extern A68_VOID  XNFAOST_get_filename(struct A68t176 ,A68_VC ,struct A68t97 ,A68_120 *);
extern A68_175  IOFAOST_text_syntax;
extern A68_VOID  FPFAOST_get_text(struct A68t176 ,struct A68t97 ,A68_VC *);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t178 ,struct A68t97 );
extern A68_215  XMDAOST_normalaccess;
extern A68_215  BNDAOST_hiddenaccess;
extern A68_214  ZNDAOST_continue;
extern A68_214  HODAOST_finish;
extern A68_VOID  ARDAOST_makecommands(struct A68t225 ,A68_225 *);
extern A68_223 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t215 ,struct A68t225 );
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_175  SRAAOST_noparameters;
extern A68_VOID  ATAAOST_prod(struct A68t174 ,A68_173 *);
extern A68_VOID  LTAAOST_opt(struct A68t175 ,A68_173 *);
extern A68_VOID  DUAAOST_star(struct A68t175 ,A68_173 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_98  SHAAOSI_system;
extern A68_98  UHAAOSI_fatal;
extern A68_98  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  VTCAOST_clear(struct A68t146 );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_94  BOBAOSI_update_access;
extern A68_94  FOBAOSI_update_truncate_access;
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
extern A68_34 * KEAAOST_screen;
extern A68_VOID  IIAAOST_prompt(A68_VC ,A68_VC *);
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_INT  EPAAOSL_charsleft(struct A68t34 *);
extern A68_VOID  ZXAAOSL_intwidth(A68_INT ,A68_INT ,A68_57 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAAMM(void);   /* mm_version */
extern void EEDAAMM(void);   /* mm_utilities */
extern void AWCAAMM(void);   /* mm_oscommands */
extern void SAAAAMM(void);   /* mm_basics */
extern void AYGAOST(void);   /* commandcaller */
extern void TIGAOST(void);   /* ioprocs */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_329   UHFAAMM = {"$Id: mm_actions.a68,v 34.4 1995/03/29 13:02:34 ella Exp $"}; 
A_GISVEC(A68_VC ,VHFAAMM,UHFAAMM,57)
static A68_331   BIFAAMM = {"Is it OK to go ahead on"}; 
A_GISVEC(A68_VC ,CIFAAMM,BIFAAMM,23)
static A68_332   FIFAAMM = {" node "}; 
A_GISVEC(A68_VC ,GIFAAMM,FIFAAMM,6)
static A68_95   JIFAAMM = {"line"}; 
A_GISVEC(A68_VC ,KIFAAMM,JIFAAMM,4)
static A68_334   SIFAAMM = {"Compile :-"}; 
A_GISVEC(A68_VC ,TIFAAMM,SIFAAMM,10)
static A68_335   VIFAAMM = {"Link :-"}; 
A_GISVEC(A68_VC ,WIFAAMM,VIFAAMM,7)
static A68_337   GJFAAMM = {"on"}; 
A_GISVEC(A68_VC ,HJFAAMM,GJFAAMM,2)
static A68_338   IJFAAMM = {"off"}; 
A_GISVEC(A68_VC ,JJFAAMM,IJFAAMM,3)
static A68_339   LJFAAMM = {"Bad parameter, expect on or off"}; 
A_GISVEC(A68_VC ,MJFAAMM,LJFAAMM,31)
static A68_335   DLFAAMM = {"Module "}; 
A_GISVEC(A68_VC ,ELFAAMM,DLFAAMM,7)
static A68_341   ILFAAMM = {" is a PROGRAM module so cannot be a version."}; 
A_GISVEC(A68_VC ,JLFAAMM,ILFAAMM,44)
static A68_343   SLFAAMM = {"Do you wish to set automatic version updating"}; 
A_GISVEC(A68_VC ,TLFAAMM,SLFAAMM,45)
static A68_344   ULFAAMM = {"auto_version"}; 
A_GISVEC(A68_VC ,VLFAAMM,ULFAAMM,12)
static A68_345   WLFAAMM = {"Environment variables :- "}; 
A_GISVEC(A68_VC ,XLFAAMM,WLFAAMM,25)
static A68_VC  YLFAAMM_env_heading;
static A68_346   OMFAAMM = {"                 Mm version "}; 
A_GISVEC(A68_VC ,PMFAAMM,OMFAAMM,28)
static A68_95   TMFAAMM = {" on "}; 
A_GISVEC(A68_VC ,UMFAAMM,TMFAAMM,4)
static A68_347   ANFAAMM = {"   Modified on "}; 
A_GISVEC(A68_VC ,BNFAAMM,ANFAAMM,15)
static A68_349   ONFAAMM = {"Database name "}; 
A_GISVEC(A68_VC ,PNFAAMM,ONFAAMM,14)
static A68_350   UNFAAMM = {" environment changed."}; 
A_GISVEC(A68_VC ,VNFAAMM,UNFAAMM,21)
static A68_351   YNFAAMM = {" modules changed."}; 
A_GISVEC(A68_VC ,ZNFAAMM,YNFAAMM,17)
static A68_352   COFAAMM = {" all changed."}; 
A_GISVEC(A68_VC ,DOFAAMM,COFAAMM,13)
static A68_349   GOFAAMM = {" not modified."}; 
A_GISVEC(A68_VC ,HOFAAMM,GOFAAMM,14)
static A68_331   OOFAAMM = {"Detached database file "}; 
A_GISVEC(A68_VC ,POFAAMM,OOFAAMM,23)
static A68_354   WOFAAMM = {"Initfile"}; 
static A68_355   XOFAAMM = {"initialise files"}; 
A_GISVEC(A68_VC ,YOFAAMM,XOFAAMM,16)
A_GISVEC(A68_VC ,ZOFAAMM,WOFAAMM,8)
static A68_335   DPFAAMM = {"message"}; 
static A68_354   EPFAAMM = {"messages"}; 
A_GISVEC(A68_VC ,FPFAAMM,EPFAAMM,8)
A_GISVEC(A68_VC ,GPFAAMM,DPFAAMM,7)
static A68_95   RPFAAMM = {" is "}; 
A_GISVEC(A68_VC ,SPFAAMM,RPFAAMM,4)
static A68_338   EQFAAMM = {"dir"}; 
static A68_357   FQFAAMM = {"directories"}; 
A_GISVEC(A68_VC ,GQFAAMM,FQFAAMM,11)
A_GISVEC(A68_VC ,HQFAAMM,EQFAAMM,3)
static A68_338   IQFAAMM = {"lib"}; 
static A68_358   JQFAAMM = {"libraries"}; 
A_GISVEC(A68_VC ,KQFAAMM,JQFAAMM,9)
A_GISVEC(A68_VC ,LQFAAMM,IQFAAMM,3)
static A68_95   MQFAAMM = {"incl"}; 
static A68_354   NQFAAMM = {"includes"}; 
A_GISVEC(A68_VC ,OQFAAMM,NQFAAMM,8)
A_GISVEC(A68_VC ,PQFAAMM,MQFAAMM,4)
static A68_359   TQFAAMM = {"Diagnose is active"}; 
A_GISVEC(A68_VC ,UQFAAMM,TQFAAMM,18)
static A68_360   DRFAAMM = {"Pending compiles :-"}; 
A_GISVEC(A68_VC ,ERFAAMM,DRFAAMM,19)
static A68_355   IRFAAMM = {"Pending links :-"}; 
A_GISVEC(A68_VC ,JRFAAMM,IRFAAMM,16)
static A68_360   NRFAAMM = {"Pending compiles :-"}; 
A_GISVEC(A68_VC ,ORFAAMM,NRFAAMM,19)
static A68_355   PRFAAMM = {"Pending links :-"}; 
A_GISVEC(A68_VC ,QRFAAMM,PRFAAMM,16)
static A68_95   DSFAAMM = {" = \""}; 
A_GISVEC(A68_VC ,ESFAAMM,DSFAAMM,4)
static A68_361   PSFAAMM = {""}; 
A_GISVEC(A68_VC ,QSFAAMM,PSFAAMM,0)
static A68_361   RSFAAMM = {""}; 
A_GISVEC(A68_VC ,SSFAAMM,RSFAAMM,0)
static A68_335   YSFAAMM = {"Symbol "}; 
A_GISVEC(A68_VC ,ZSFAAMM,YSFAAMM,7)
static A68_357   DTFAAMM = {" not found."}; 
A_GISVEC(A68_VC ,ETFAAMM,DTFAAMM,11)
static A68_361   QTFAAMM = {""}; 
A_GISVEC(A68_VC ,RTFAAMM,QTFAAMM,0)
static A68_357   OUFAAMM = {"           "}; 
A_GISVEC(A68_VC ,PUFAAMM,OUFAAMM,11)
static A68_334   PVFAAMM = {"          "}; 
A_GISVEC(A68_VC ,QVFAAMM,PVFAAMM,10)
static A68_352   BWFAAMM = {"Decs module  "}; 
A_GISVEC(A68_VC ,DWFAAMM,BWFAAMM,13)
static A68_352   HWFAAMM = {"Program      "}; 
A_GISVEC(A68_VC ,IWFAAMM,HWFAAMM,13)
static A68_358   MWFAAMM = {"Program  "}; 
A_GISVEC(A68_VC ,NWFAAMM,MWFAAMM,9)
static A68_344   XWFAAMM = {"    If star "}; 
A_GISVEC(A68_VC ,YWFAAMM,XWFAAMM,12)
static A68_95   DXFAAMM = {" is "}; 
A_GISVEC(A68_VC ,EXFAAMM,DXFAAMM,4)
static A68_335   HXFAAMM = {"present"}; 
A_GISVEC(A68_VC ,IXFAAMM,HXFAAMM,7)
static A68_332   LXFAAMM = {"absent"}; 
A_GISVEC(A68_VC ,MXFAAMM,LXFAAMM,6)
static A68_337   BYFAAMM = {"  "}; 
A_GISVEC(A68_VC ,CYFAAMM,BYFAAMM,2)
static A68_338   MYFAAMM = {" = "}; 
A_GISVEC(A68_VC ,NYFAAMM,MYFAAMM,3)
static A68_334   ZYFAAMM = {"    Level "}; 
A_GISVEC(A68_VC ,AZFAAMM,ZYFAAMM,10)
static A68_334   GZFAAMM = {" RECURSIVE"}; 
A_GISVEC(A68_VC ,HZFAAMM,GZFAAMM,10)
static A68_334   OZFAAMM = {"    Uses  "}; 
A_GISVEC(A68_VC ,PZFAAMM,OZFAAMM,10)
static A68_337   XZFAAMM = {" )"}; 
A_GISVEC(A68_VC ,YZFAAMM,XZFAAMM,2)
static A68_345   FAGAAMM = {"    Does not use anything"}; 
A_GISVEC(A68_VC ,GAGAAMM,FAGAAMM,25)
static A68_334   MAGAAMM = {"    Used B"}; 
A_GISVEC(A68_VC ,NAGAAMM,MAGAAMM,10)
static A68_344   VAGAAMM = {"    Not used"}; 
A_GISVEC(A68_VC ,WAGAAMM,VAGAAMM,12)
static A68_360   HBGAAMM = {"No modules to show."}; 
A_GISVEC(A68_VC ,IBGAAMM,HBGAAMM,19)
static A68_360   CCGAAMM = {"Compile all modules"}; 
A_GISVEC(A68_VC ,DCGAAMM,CCGAAMM,19)
static A68_362   HCGAAMM = {"Do cc on all modules"}; 
A_GISVEC(A68_VC ,ICGAAMM,HCGAAMM,20)
static A68_350   MCGAAMM = {"Translate all modules"}; 
A_GISVEC(A68_VC ,NCGAAMM,MCGAAMM,21)
static A68_363   PDGAAMM = {"You cannot re-define symbol"}; 
A_GISVEC(A68_VC ,QDGAAMM,PDGAAMM,27)
static A68_335   FEGAAMM = {"symbol "}; 
A_GISVEC(A68_VC ,GEGAAMM,FEGAAMM,7)
static A68_362   KEGAAMM = {" has been undefined."}; 
A_GISVEC(A68_VC ,LEGAAMM,KEGAAMM,20)
static A68_335   SEGAAMM = {"symbol "}; 
A_GISVEC(A68_VC ,TEGAAMM,SEGAAMM,7)
static A68_355   XEGAAMM = {" does not exist."}; 
A_GISVEC(A68_VC ,YEGAAMM,XEGAAMM,16)
static A68_335   FFGAAMM = {"symbol "}; 
A_GISVEC(A68_VC ,GFGAAMM,FFGAAMM,7)
static A68_364   KFGAAMM = {" has reverted to its default state."}; 
A_GISVEC(A68_VC ,LFGAAMM,KFGAAMM,35)
static A68_335   SFGAAMM = {"symbol "}; 
A_GISVEC(A68_VC ,TFGAAMM,SFGAAMM,7)
static A68_341   XFGAAMM = {" is a local symbol and cannot be un-defined."}; 
A_GISVEC(A68_VC ,YFGAAMM,XFGAAMM,44)
static A68_365   EGGAAMM = {"Unexpected result to undefine_symbol"}; 
A_GISVEC(A68_VC ,FGGAAMM,EGGAAMM,36)
static A68_359   XGGAAMM = {"Remove all modules"}; 
A_GISVEC(A68_VC ,YGGAAMM,XGGAAMM,18)
static A68_366   AHGAAMM = {"All modules have been removed from the database."}; 
A_GISVEC(A68_VC ,BHGAAMM,AHGAAMM,48)
static A68_95   MHGAAMM = {"    "}; 
A_GISVEC(A68_VC ,NHGAAMM,MHGAAMM,4)
static A68_335   KIGAAMM = {"Module "}; 
A_GISVEC(A68_VC ,LIGAAMM,KIGAAMM,7)
static A68_343   PIGAAMM = {" cannot be removed as it is still being used."}; 
A_GISVEC(A68_VC ,QIGAAMM,PIGAAMM,45)
static A68_366   YIGAAMM = {"Remove the following modules from the database:-"}; 
A_GISVEC(A68_VC ,ZIGAAMM,YIGAAMM,48)
static A68_362   GJGAAMM = {"Is it OK to go ahead"}; 
A_GISVEC(A68_VC ,HJGAAMM,GJGAAMM,20)
static A68_335   JJGAAMM = {"Module "}; 
A_GISVEC(A68_VC ,KJGAAMM,JJGAAMM,7)
static A68_365   PJGAAMM = {" has been removed from the database."}; 
A_GISVEC(A68_VC ,QJGAAMM,PJGAAMM,36)
static A68_360   ZJGAAMM = {"Remove all compiles"}; 
A_GISVEC(A68_VC ,AKGAAMM,ZJGAAMM,19)
static A68_355   FKGAAMM = {"Remove all links"}; 
A_GISVEC(A68_VC ,GKGAAMM,FKGAAMM,16)
static A68_360   OKGAAMM = {"Remove all versions"}; 
A_GISVEC(A68_VC ,PKGAAMM,OKGAAMM,19)
static A68_367   ALGAAMM = {"Already detached to the given file, no change."}; 
A_GISVEC(A68_VC ,BLGAAMM,ALGAAMM,46)
static A68_345   JLGAAMM = {"Already detached to file "}; 
A_GISVEC(A68_VC ,KLGAAMM,JLGAAMM,25)
static A68_368   RLGAAMM = {"Do you wish to change the name"}; 
A_GISVEC(A68_VC ,TLGAAMM,RLGAAMM,30)
static A68_369   VLGAAMM = {"Detaching modules to file "}; 
A_GISVEC(A68_VC ,WLGAAMM,VLGAAMM,26)
static A68_358   EMGAAMM = {"No change"}; 
A_GISVEC(A68_VC ,FMGAAMM,EMGAAMM,9)
static A68_370   PMGAAMM = {"The database is not detached, no change"}; 
A_GISVEC(A68_VC ,QMGAAMM,PMGAAMM,39)
static A68_339   XMGAAMM = {"Database is no longer detached."}; 
A_GISVEC(A68_VC ,YMGAAMM,XMGAAMM,31)
static A68_95   LNGAAMM = {"show"}; 
A_GISVEC(A68_VC ,MNGAAMM,LNGAAMM,4)
static A68_371   LOGAAMM = {"The following modules have failed to compile so may need editing."}; 
A_GISVEC(A68_VC ,MOGAAMM,LOGAAMM,65)
static A68_95   TOGAAMM = {"    "}; 
A_GISVEC(A68_VC ,UOGAAMM,TOGAAMM,4)
static A68_367   LPGAAMM = {"No editor set, use an external editor. Module "}; 
A_GISVEC(A68_VC ,MPGAAMM,LPGAAMM,46)
static A68_344   RPGAAMM = {" is in file "}; 
A_GISVEC(A68_VC ,SPGAAMM,RPGAAMM,12)
static A68_95   XPGAAMM = {"    "}; 
A_GISVEC(A68_VC ,YPGAAMM,XPGAAMM,4)
static A68_354   EQGAAMM = {"and has "}; 
A_GISVEC(A68_VC ,FQGAAMM,EQGAAMM,8)
static A68_359   IQGAAMM = {"failed to compile."}; 
A_GISVEC(A68_VC ,JQGAAMM,IQGAAMM,18)
static A68_362   MQGAAMM = {"failed to translate."}; 
A_GISVEC(A68_VC ,NQGAAMM,MQGAAMM,20)
static A68_362   QQGAAMM = {"failed to C compile."}; 
A_GISVEC(A68_VC ,RQGAAMM,QQGAAMM,20)
static A68_344   UQGAAMM = {"compiled OK."}; 
A_GISVEC(A68_VC ,VQGAAMM,UQGAAMM,12)
static A68_373   HRGAAMM = {"No outstanding failure: give a module or file name"}; 
A_GISVEC(A68_VC ,IRGAAMM,HRGAAMM,50)
static A68_368   VRGAAMM = {"Do you wish to compile module "}; 
A_GISVEC(A68_VC ,WRGAAMM,VRGAAMM,30)
static A68_374   ATGAAMM = {"You must supply a parameter when updating non-interactively."}; 
A_GISVEC(A68_VC ,BTGAAMM,ATGAAMM,60)
static A68_375   HTGAAMM = {"No version module found."}; 
A_GISVEC(A68_VC ,ITGAAMM,HTGAAMM,24)
static A68_375   SUGAAMM = {"Total number of uses  = "}; 
A_GISVEC(A68_VC ,TUGAAMM,SUGAAMM,24)
static A68_375   ZUGAAMM = {"Total number of needs = "}; 
A_GISVEC(A68_VC ,AVGAAMM,ZUGAAMM,24)
static A68_351   DWGAAMM = {"Number of levels "}; 
A_GISVEC(A68_VC ,EWGAAMM,DWGAAMM,17)
static A68_355   KWGAAMM = {"Level analysis:-"}; 
A_GISVEC(A68_VC ,LWGAAMM,KWGAAMM,16)
static A68_337   WWGAAMM = {"  "}; 
A_GISVEC(A68_VC ,XWGAAMM,WWGAAMM,2)
static A68_354   CXGAAMM = {" modules"}; 
A_GISVEC(A68_VC ,DXGAAMM,CXGAAMM,8)
static A68_365   NXGAAMM = {"Debug trap, returning from debugger."}; 
A_GISVEC(A68_VC ,OXGAAMM,NXGAAMM,36)
static A68_335   NYGAAMM = {"ANALYSE"}; 
static A68_361   OYGAAMM = {""}; 
static A68_332   QYGAAMM = {"LEVELS"}; 
static A68_361   RYGAAMM = {""}; 
static A68_378   SYGAAMM = {"Count numbers of modules at each level"}; 
A_GISVEC(A68_VC ,TYGAAMM,SYGAAMM,38)
A_GISVEC(A68_VC ,UYGAAMM,RYGAAMM,0)
A_GISVEC(A68_VC ,VYGAAMM,QYGAAMM,6)
static A68_379   ZYGAAMM = {"USAGE"}; 
static A68_361   AZGAAMM = {""}; 
static A68_378   BZGAAMM = {"Count numbers in uses and usedby lists"}; 
A_GISVEC(A68_VC ,CZGAAMM,BZGAAMM,38)
A_GISVEC(A68_VC ,DZGAAMM,AZGAAMM,0)
A_GISVEC(A68_VC ,EZGAAMM,ZYGAAMM,5)
A_GISVEC(A68_VC ,JZGAAMM,OYGAAMM,0)
A_GISVEC(A68_VC ,KZGAAMM,NYGAAMM,7)
static A68_332   NZGAAMM = {"REMOVE"}; 
static A68_338   OZGAAMM = {"REM"}; 
static A68_335   QZGAAMM = {"COMPILE"}; 
static A68_378   RZGAAMM = {"Removes a module from the compile list"}; 
A_GISVEC(A68_VC ,SZGAAMM,RZGAAMM,38)
A_GISVEC(A68_VC ,YZGAAMM,QZGAAMM,7)
static A68_95   CAHAAMM = {"LINK"}; 
static A68_378   DAHAAMM = {"Removes a module from the linking list"}; 
A_GISVEC(A68_VC ,EAHAAMM,DAHAAMM,38)
A_GISVEC(A68_VC ,KAHAAMM,CAHAAMM,4)
static A68_332   OAHAAMM = {"MODULE"}; 
static A68_381   PAHAAMM = {"Remove a module from the database"}; 
A_GISVEC(A68_VC ,QAHAAMM,PAHAAMM,33)
A_GISVEC(A68_VC ,WAHAAMM,OAHAAMM,6)
static A68_335   ABHAAMM = {"PENDING"}; 
static A68_366   BBHAAMM = {"Removes a module from both the compile and lists"}; 
A_GISVEC(A68_VC ,CBHAAMM,BBHAAMM,48)
A_GISVEC(A68_VC ,IBHAAMM,ABHAAMM,7)
static A68_335   MBHAAMM = {"VERSION"}; 
static A68_382   NBHAAMM = {"Remove a module from the version list"}; 
A_GISVEC(A68_VC ,OBHAAMM,NBHAAMM,37)
A_GISVEC(A68_VC ,UBHAAMM,MBHAAMM,7)
A_GISVEC(A68_VC ,ZBHAAMM,OZGAAMM,3)
A_GISVEC(A68_VC ,ACHAAMM,NZGAAMM,6)
static A68_338   DCHAAMM = {"SET"}; 
static A68_361   ECHAAMM = {""}; 
static A68_379   GCHAAMM = {"DEBUG"}; 
static A68_338   HCHAAMM = {"DBG"}; 
static A68_382   LCHAAMM = {"Set debug state for the given modules"}; 
A_GISVEC(A68_VC ,MCHAAMM,LCHAAMM,37)
A_GISVEC(A68_VC ,QCHAAMM,HCHAAMM,3)
A_GISVEC(A68_VC ,RCHAAMM,GCHAAMM,5)
static A68_332   VCHAAMM = {"EXEDIR"}; 
static A68_338   WCHAAMM = {"EXE"}; 
static A68_366   ADHAAMM = {"Set image target directory for the given modules"}; 
A_GISVEC(A68_VC ,BDHAAMM,ADHAAMM,48)
A_GISVEC(A68_VC ,FDHAAMM,WCHAAMM,3)
A_GISVEC(A68_VC ,GDHAAMM,VCHAAMM,6)
static A68_354   KDHAAMM = {"HEAPSIZE"}; 
static A68_338   LDHAAMM = {"HSZ"}; 
static A68_385   PDHAAMM = {"Set heapsize for the given modules"}; 
A_GISVEC(A68_VC ,QDHAAMM,PDHAAMM,34)
A_GISVEC(A68_VC ,UDHAAMM,LDHAAMM,3)
A_GISVEC(A68_VC ,VDHAAMM,KDHAAMM,8)
static A68_354   ZDHAAMM = {"OPTIMISE"}; 
static A68_338   AEHAAMM = {"OPT"}; 
static A68_343   EEHAAMM = {"Set optimise characters for the given modules"}; 
A_GISVEC(A68_VC ,FEHAAMM,EEHAAMM,45)
A_GISVEC(A68_VC ,JEHAAMM,AEHAAMM,3)
A_GISVEC(A68_VC ,KEHAAMM,ZDHAAMM,8)
static A68_354   OEHAAMM = {"STAREDIT"}; 
static A68_338   PEHAAMM = {"STA"}; 
static A68_343   TEHAAMM = {"Set staredit characters for the given modules"}; 
A_GISVEC(A68_VC ,UEHAAMM,TEHAAMM,45)
A_GISVEC(A68_VC ,YEHAAMM,PEHAAMM,3)
A_GISVEC(A68_VC ,ZEHAAMM,OEHAAMM,8)
static A68_95   DFHAAMM = {"DIAG"}; 
static A68_361   EFHAAMM = {""}; 
static A68_359   FFHAAMM = {"Set/clear diagnose"}; 
A_GISVEC(A68_VC ,GFHAAMM,FFHAAMM,18)
A_GISVEC(A68_VC ,HFHAAMM,EFHAAMM,0)
A_GISVEC(A68_VC ,IFHAAMM,DFHAAMM,4)
static A68_379   MFHAAMM = {"QUERY"}; 
static A68_361   NFHAAMM = {""}; 
static A68_346   OFHAAMM = {"Set/clear prompting at query"}; 
A_GISVEC(A68_VC ,PFHAAMM,OFHAAMM,28)
A_GISVEC(A68_VC ,QFHAAMM,NFHAAMM,0)
A_GISVEC(A68_VC ,RFHAAMM,MFHAAMM,5)
A_GISVEC(A68_VC ,WFHAAMM,ECHAAMM,0)
A_GISVEC(A68_VC ,XFHAAMM,DCHAAMM,3)
static A68_95   AGHAAMM = {"SHOW"}; 
static A68_335   CGHAAMM = {"COMPILE"}; 
static A68_350   DGHAAMM = {"Show pending compiles"}; 
A_GISVEC(A68_VC ,EGHAAMM,DGHAAMM,21)
A_GISVEC(A68_VC ,GGHAAMM,CGHAAMM,7)
static A68_335   KGHAAMM = {"ENVIRON"}; 
static A68_355   LGHAAMM = {"Show environment"}; 
A_GISVEC(A68_VC ,MGHAAMM,LGHAAMM,16)
A_GISVEC(A68_VC ,OGHAAMM,KGHAAMM,7)
static A68_95   SGHAAMM = {"LINK"}; 
static A68_359   TGHAAMM = {"Show pending links"}; 
A_GISVEC(A68_VC ,UGHAAMM,TGHAAMM,18)
A_GISVEC(A68_VC ,WGHAAMM,SGHAAMM,4)
static A68_332   AHHAAMM = {"MODULE"}; 
static A68_344   BHHAAMM = {"Show modules"}; 
A_GISVEC(A68_VC ,CHHAAMM,BHHAAMM,12)
A_GISVEC(A68_VC ,IHHAAMM,AHHAAMM,6)
static A68_332   MHHAAMM = {"SYMBOL"}; 
static A68_387   NHHAAMM = {"Show the definition of a symbol."}; 
A_GISVEC(A68_VC ,OHHAAMM,NHHAAMM,32)
A_GISVEC(A68_VC ,UHHAAMM,MHHAAMM,6)
static A68_335   YHHAAMM = {"PENDING"}; 
static A68_339   ZHHAAMM = {"Show pending compiles and links"}; 
A_GISVEC(A68_VC ,AIHAAMM,ZHHAAMM,31)
A_GISVEC(A68_VC ,CIHAAMM,YHHAAMM,7)
static A68_335   GIHAAMM = {"VERSION"}; 
static A68_362   HIHAAMM = {"Show version modules"}; 
A_GISVEC(A68_VC ,IIHAAMM,HIHAAMM,20)
A_GISVEC(A68_VC ,KIHAAMM,GIHAAMM,7)
A_GISVEC(A68_VC ,QIHAAMM,AGHAAMM,4)
static A68_379   TIHAAMM = {"AFTER"}; 
static A68_361   UIHAAMM = {""}; 
static A68_370   VIHAAMM = {"Move symbol pointer after given symbol."}; 
A_GISVEC(A68_VC ,WIHAAMM,VIHAAMM,39)
A_GISVEC(A68_VC ,ZIHAAMM,UIHAAMM,0)
A_GISVEC(A68_VC ,AJHAAMM,TIHAAMM,5)
static A68_332   EJHAAMM = {"ATTACH"}; 
static A68_361   FJHAAMM = {""}; 
static A68_373   GJHAAMM = {"Re-attach the module data to the environment data."}; 
A_GISVEC(A68_VC ,HJHAAMM,GJHAAMM,50)
A_GISVEC(A68_VC ,KJHAAMM,FJHAAMM,0)
A_GISVEC(A68_VC ,LJHAAMM,EJHAAMM,6)
static A68_332   PJHAAMM = {"BEFORE"}; 
static A68_361   QJHAAMM = {""}; 
static A68_388   RJHAAMM = {"Move symbol pointer before given symbol."}; 
A_GISVEC(A68_VC ,SJHAAMM,RJHAAMM,40)
A_GISVEC(A68_VC ,VJHAAMM,QJHAAMM,0)
A_GISVEC(A68_VC ,WJHAAMM,PJHAAMM,6)
static A68_337   AKHAAMM = {"CC"}; 
static A68_361   BKHAAMM = {""}; 
static A68_370   CKHAAMM = {"Prepare to do cc on one or more modules"}; 
A_GISVEC(A68_VC ,DKHAAMM,CKHAAMM,39)
A_GISVEC(A68_VC ,IKHAAMM,BKHAAMM,0)
A_GISVEC(A68_VC ,JKHAAMM,AKHAAMM,2)
static A68_335   NKHAAMM = {"COMPILE"}; 
static A68_378   OKHAAMM = {"Prepare to compile one or more modules"}; 
A_GISVEC(A68_VC ,PKHAAMM,OKHAAMM,38)
A_GISVEC(A68_VC ,VKHAAMM,NKHAAMM,7)
static A68_332   ZKHAAMM = {"DEFINE"}; 
static A68_338   ALHAAMM = {"DEF"}; 
static A68_355   CLHAAMM = {"Define a symbol."}; 
A_GISVEC(A68_VC ,DLHAAMM,CLHAAMM,16)
A_GISVEC(A68_VC ,HLHAAMM,ALHAAMM,3)
A_GISVEC(A68_VC ,ILHAAMM,ZKHAAMM,6)
static A68_332   MLHAAMM = {"DETACH"}; 
static A68_361   NLHAAMM = {""}; 
static A68_389   OLHAAMM = {"Detach the module data from the environment data."}; 
A_GISVEC(A68_VC ,PLHAAMM,OLHAAMM,49)
A_GISVEC(A68_VC ,SLHAAMM,NLHAAMM,0)
A_GISVEC(A68_VC ,TLHAAMM,MLHAAMM,6)
static A68_95   XLHAAMM = {"EDIT"}; 
static A68_337   YLHAAMM = {"ED"}; 
static A68_345   ZLHAAMM = {"Edit a module source file"}; 
A_GISVEC(A68_VC ,AMHAAMM,ZLHAAMM,25)
A_GISVEC(A68_VC ,DMHAAMM,YLHAAMM,2)
A_GISVEC(A68_VC ,EMHAAMM,XLHAAMM,4)
static A68_95   JMHAAMM = {"EXIT"}; 
A_GISVEC(A68_VC ,KMHAAMM,JMHAAMM,4)
static A68_390   MMHAAMM = {"Exit from the utility keeping the modified database"}; 
A_GISVEC(A68_VC ,NMHAAMM,MMHAAMM,51)
static A68_337   UMHAAMM = {"GO"}; 
static A68_364   VMHAAMM = {"Obey the current compiles and links"}; 
A_GISVEC(A68_VC ,WMHAAMM,VMHAAMM,35)
A_GISVEC(A68_VC ,ANHAAMM,UMHAAMM,2)
static A68_335   ENHAAMM = {"INSTALL"}; 
static A68_361   FNHAAMM = {""}; 
static A68_391   GNHAAMM = {"Install a module and all it dependends on"}; 
A_GISVEC(A68_VC ,HNHAAMM,GNHAAMM,41)
A_GISVEC(A68_VC ,KNHAAMM,FNHAAMM,0)
A_GISVEC(A68_VC ,LNHAAMM,ENHAAMM,7)
static A68_95   PNHAAMM = {"LINK"}; 
static A68_375   QNHAAMM = {"Prepare to link a module"}; 
A_GISVEC(A68_VC ,RNHAAMM,QNHAAMM,24)
A_GISVEC(A68_VC ,XNHAAMM,PNHAAMM,4)
static A68_332   BOHAAMM = {"MODULE"}; 
static A68_387   COHAAMM = {"Introduce or re-analyse a module"}; 
A_GISVEC(A68_VC ,DOHAAMM,COHAAMM,32)
A_GISVEC(A68_VC ,HOHAAMM,BOHAAMM,6)
static A68_335   LOHAAMM = {"REBUILD"}; 
static A68_338   MOHAAMM = {"RBD"}; 
static A68_366   NOHAAMM = {"Compile all modules required for a given program"}; 
A_GISVEC(A68_VC ,OOHAAMM,NOHAAMM,48)
A_GISVEC(A68_VC ,TOHAAMM,MOHAAMM,3)
A_GISVEC(A68_VC ,UOHAAMM,LOHAAMM,7)
static A68_95   YOHAAMM = {"SAVE"}; 
static A68_361   ZOHAAMM = {""}; 
static A68_343   APHAAMM = {"Save the database, optionally to a named file"}; 
A_GISVEC(A68_VC ,BPHAAMM,APHAAMM,45)
A_GISVEC(A68_VC ,GPHAAMM,ZOHAAMM,0)
A_GISVEC(A68_VC ,HPHAAMM,YOHAAMM,4)
static A68_355   LPHAAMM = {"SIMPLESPECCHANGE"}; 
static A68_338   MPHAAMM = {"SSC"}; 
static A68_392   NPHAAMM = {"Module has an non pesimistic change to its keep list etc"}; 
A_GISVEC(A68_VC ,OPHAAMM,NPHAAMM,56)
A_GISVEC(A68_VC ,RPHAAMM,MPHAAMM,3)
A_GISVEC(A68_VC ,SPHAAMM,LPHAAMM,16)
static A68_334   WPHAAMM = {"SPECCHANGE"}; 
static A68_95   XPHAAMM = {"SPEC"}; 
static A68_393   YPHAAMM = {"Module has an pesimistic change to its keep list etc"}; 
A_GISVEC(A68_VC ,ZPHAAMM,YPHAAMM,52)
A_GISVEC(A68_VC ,CQHAAMM,XPHAAMM,4)
A_GISVEC(A68_VC ,DQHAAMM,WPHAAMM,10)
static A68_358   HQHAAMM = {"TRANSLATE"}; 
static A68_337   IQHAAMM = {"TR"}; 
static A68_388   JQHAAMM = {"Prepare to translate one or more modules"}; 
A_GISVEC(A68_VC ,KQHAAMM,JQHAAMM,40)
A_GISVEC(A68_VC ,PQHAAMM,IQHAAMM,2)
A_GISVEC(A68_VC ,QQHAAMM,HQHAAMM,9)
static A68_354   UQHAAMM = {"UNDEFINE"}; 
static A68_95   VQHAAMM = {"UDEF"}; 
static A68_359   WQHAAMM = {"Un-define symbols."}; 
A_GISVEC(A68_VC ,XQHAAMM,WQHAAMM,18)
A_GISVEC(A68_VC ,ARHAAMM,VQHAAMM,4)
A_GISVEC(A68_VC ,BRHAAMM,UQHAAMM,8)
static A68_332   FRHAAMM = {"UPDATE"}; 
static A68_361   GRHAAMM = {""}; 
static A68_360   HRHAAMM = {"Update version data"}; 
A_GISVEC(A68_VC ,IRHAAMM,HRHAAMM,19)
A_GISVEC(A68_VC ,LRHAAMM,GRHAAMM,0)
A_GISVEC(A68_VC ,MRHAAMM,FRHAAMM,6)
static A68_335   QRHAAMM = {"VERSION"}; 
static A68_361   RRHAAMM = {""}; 
static A68_341   SRHAAMM = {"Indicate that a module is a version recorder"}; 
A_GISVEC(A68_VC ,TRHAAMM,SRHAAMM,44)
A_GISVEC(A68_VC ,WRHAAMM,RRHAAMM,0)
A_GISVEC(A68_VC ,XRHAAMM,QRHAAMM,7)
static A68_379   BSHAAMM = {"DEBUG"}; 
static A68_361   CSHAAMM = {""}; 
static A68_334   DSHAAMM = {"Debug trap"}; 
A_GISVEC(A68_VC ,ESHAAMM,DSHAAMM,10)
A_GISVEC(A68_VC ,FSHAAMM,CSHAAMM,0)
A_GISVEC(A68_VC ,GSHAAMM,BSHAAMM,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} GMFAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * URFAAMM_found;
} YRFAAMM_show_action;
typedef struct   /* env of non-global proc */
{
A68_BOOL  STFAAMM_all;
A_PAD_BOOL(PAD_78)
A68_97  Msg;
} XTFAAMM_show_module;
typedef struct   /* env of non-global proc */
{
A68_271 ** JNGAAMM_m;
} TNGAAMM_try_failed;
typedef struct   /* env of non-global proc */
{
A68_BOOL * ONGAAMM_first_failed;
} COGAAMM_show_failed;
typedef struct   /* env of non-global proc */
{
A68_177  Param_values;
A68_97  Msg;
} VSGAAMM_version_string;
typedef struct   /* env of non-global proc */
{
A68_INT * XTGAAMM_used_cnt;
} DUGAAMM_count_use;
typedef struct   /* env of non-global proc */
{
A68_INT * YTGAAMM_needed_cnt;
} JUGAAMM_count_need;
typedef struct   /* env of non-global proc */
{
A68_291  BUGAAMM_count_use;
A68_291  HUGAAMM_count_need;
} PUGAAMM_count_usage;
typedef struct   /* env of non-global proc */
{
int dummy;
} NVGAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  QVGAAMM_level_counts;
} WVGAAMM_count_action;
typedef struct   /* env of non-global proc */
{
A68_INT * ZTFAAMM_global_extra;
A68_271 * M;
A68_CHAR * YTFAAMM_sep;
} FUFAAMM_print_module_name;
typedef struct   /* env of non-global proc */
{
A68_271 * M;
A68_BOOL * AUFAAMM_have_indirect;
A68_291  DUFAAMM_print_module_name;
A68_291  MVFAAMM_print_indirect_use;
} OVFAAMM_print_indirect_use;

A68_VOID  ZHFAAMM_obey_go_action(A68_VC  Node, A68_BOOL  Notify, A68_97  Msg);

A_STATIC A68_VOID  CJFAAMM_set_bool_variable(A68_177  Param_values, A68_BOOL * Var, A68_97  Msg);

A_STATIC A68_VOID  UJFAAMM_setdiag_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  XJFAAMM_setquery_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  AKFAAMM_setdebug_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  DKFAAMM_setexedir_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  GKFAAMM_setheapsize_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  JKFAAMM_setoptimise_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  MKFAAMM_setstaredit_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  PKFAAMM_version_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  BMFAAMM_showenviron_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  FMFAAMM_generator(A68_BOOL  DMFAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CRFAAMM_showcompile_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  HRFAAMM_showlink_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  MRFAAMM_showpending_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  TRFAAMM_showsymbol_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_BOOL  XRFAAMM_show_action(A68_275 * Sym, void *NonLocals);

A_STATIC A68_VOID  MTFAAMM_showversion_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  PTFAAMM_showmodule_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_BOOL  WTFAAMM_show_module(A68_271 * M, A68_272  Star_char, void *NonLocals);

A_STATIC A68_BOOL  EUFAAMM_print_module_name(A68_271 * Mu, A68_272  Star, void *NonLocals);

A_STATIC A68_BOOL  NVFAAMM_print_indirect_use(A68_271 * Mu, A68_272  Star, void *NonLocals);

A_STATIC A68_VOID  BCGAAMM_compile_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  GCGAAMM_cc_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  LCGAAMM_translate_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  QCGAAMM_link_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  TCGAAMM_go_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  BDGAAMM_after_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  EDGAAMM_before_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  HDGAAMM_define_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  ZDGAAMM_undefine_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  JGGAAMM_save_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  WGGAAMM_removemodule_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_BOOL  KHGAAMM_list_action(A68_271 * Mm, A68_272  S);

A_STATIC A68_VOID  YJGAAMM_removecompile_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  EKGAAMM_removelink_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  KKGAAMM_removepending_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  NKGAAMM_removeversion_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  TKGAAMM_detach_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  NMGAAMM_attach_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  GNGAAMM_edit_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_BOOL  SNGAAMM_try_failed(A68_271 * Mm, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  BOGAAMM_show_failed(A68_271 * Mm, A68_272  S, void *NonLocals);

A_STATIC A68_VOID  HSGAAMM_simplespecchange_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  KSGAAMM_specchange_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  NSGAAMM_rebuild_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  QSGAAMM_update_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  USGAAMM_version_string(A68_VC  Message, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QTGAAMM_module_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  TTGAAMM_install_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  WTGAAMM_analyseusage_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_BOOL  CUGAAMM_count_use(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  IUGAAMM_count_need(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  OUGAAMM_count_usage(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_VOID  JVGAAMM_analyselevels_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  MVGAAMM_generator(A68_BOOL  KVGAAMM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  VVGAAMM_count_action(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_VOID  LXGAAMM_debug_action(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_222 * AYGAAMM_make_command(A68_VC  Name, A68_VC  Abreviation, A68_175  Parameter, A68_215  Access, A68_VC  Help_text, A68_220  Action);

A68_VOID  KYGAAMM_make_mm_commands(A68_97  Msg, A68_225  *ReturnedValue);

A_STATIC A68_BOOL  EUFAAMM_print_module_name(A68_271 * Mu, A68_272  Star, void *NonLocals)
#define NL(x) (((FUFAAMM_print_module_name *)NonLocals)->x)
{ 
A68_INT  GUFAAMM;  /* clause result */
A68_INT  HUFAAMM_extra;
A68_INT * IUFAAMM;  /* YIELD */
A68_52  JUFAAMM;  /* OPERATORS - mode -> union mode */
A68_85  KUFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_340  LUFAAMM;  /* collateral clause result */
A68_52  MUFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NUFAAMM;  /* procedure value */
A68_52  QUFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RUFAAMM;  /* YIELD */
A68_85  SUFAAMM;  /* OPERATORS - istruct -> vector */
A68_340  TUFAAMM;  /* collateral clause result */
A68_52  UUFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  VUFAAMM;  /* YIELD */
A68_52  WUFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XUFAAMM;  /* YIELD */
A68_85  YUFAAMM;  /* OPERATORS - istruct -> vector */
A68_342  ZUFAAMM;  /* collateral clause result */
A68_52  AVFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  BVFAAMM;  /* YIELD */
A68_52  CVFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  DVFAAMM;  /* YIELD */
A68_52  EVFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  FVFAAMM;  /* YIELD */
A68_52  GVFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  HVFAAMM;  /* YIELD */
A68_85  IVFAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  JVFAAMM;  /* clause result */
A_PROC_ENTRY(print_module_name);
 /* line 254: */
 /* line 255: */
{ 
if ( (Star.Mode==' ') )
{ 
GUFAAMM = 2;
} 
else
{ 
GUFAAMM = 6;
} 
HUFAAMM_extra = (GUFAAMM+(*NL(ZTFAAMM_global_extra)));
 /* line 257: */
IUFAAMM = (&(Mu->Marker)) ;
(*IUFAAMM) = (*(&(NL(M)->Number)));
 /* line 258: */
GFBAOSL_put(KEAAOST_screen, A_HVEC(KUFAAMM,A_UNITE(JUFAAMM,mode6,6,(*NL(YTFAAMM_sep))),A68_52 ));
 /* line 259: */
 /* line 260: */
if ( (((*(&(Mu->Name))).upb+HUFAAMM_extra)>EPAAOSL_charsleft(KEAAOST_screen)) )
{ 
NUFAAMM.fn.fn_global = LRAAOSL_newline;
NUFAAMM.nonlocals = A68_NIL;
LUFAAMM.data[0] = A_UNITE(MUFAAMM,mode12,12,NUFAAMM);
RUFAAMM = PUFAAMM ;
LUFAAMM.data[1] = A_UNITE(QUFAAMM,mode7,7,RUFAAMM);
 /* line 261: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SUFAAMM,LUFAAMM,2,A68_52 ));
} 
 /* line 262: */
(*NL(YTFAAMM_sep)) = ',';
 /* line 263: */
VUFAAMM = ' ' ;
TUFAAMM.data[0] = A_UNITE(UUFAAMM,mode6,6,VUFAAMM);
XUFAAMM = (*(&(Mu->Name))) ;
TUFAAMM.data[1] = A_UNITE(WUFAAMM,mode7,7,XUFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YUFAAMM,TUFAAMM,2,A68_52 ));
 /* line 264: */
 /* line 265: */
if ( (Star.Mode!=' ') )
{ 
BVFAAMM = '{' ;
ZUFAAMM.data[0] = A_UNITE(AVFAAMM,mode6,6,BVFAAMM);
DVFAAMM = Star.Mode ;
ZUFAAMM.data[1] = A_UNITE(CVFAAMM,mode6,6,DVFAAMM);
FVFAAMM = Star.Value ;
ZUFAAMM.data[2] = A_UNITE(EVFAAMM,mode6,6,FVFAAMM);
HVFAAMM = '}' ;
ZUFAAMM.data[3] = A_UNITE(GVFAAMM,mode6,6,HVFAAMM);
 /* line 266: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(IVFAAMM,ZUFAAMM,4,A68_52 ));
} 
 /* line 267: */
 /* line 268: */
JVFAAMM = A68_TRUE;
} 
A_PROC_EXIT(print_module_name);
return( JVFAAMM );
} 
#undef NL

A_STATIC A68_BOOL  NVFAAMM_print_indirect_use(A68_271 * Mu, A68_272  Star, void *NonLocals)
#define NL(x) (((OVFAAMM_print_indirect_use *)NonLocals)->x)
{ 
A68_52  RVFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SVFAAMM;  /* YIELD */
A68_85  TVFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  UVFAAMM;  /* clause result */
A_PROC_ENTRY(print_indirect_use);
 /* line 271: */
 /* line 272: */
{ 
 /* line 273: */
if ( ((*(&(Mu->Marker)))!=(*(&(NL(M)->Number)))) )
{ 
if ( !(*NL(AUFAAMM_have_indirect)) )
{ 
SVFAAMM = QVFAAMM ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(TVFAAMM,A_UNITE(RVFAAMM,mode7,7,SVFAAMM),A68_52 ));
} 
 /* line 274: */
(*NL(AUFAAMM_have_indirect)) = A68_TRUE;
 /* line 275: */
A_CALLPROC(NL(DUFAAMM_print_module_name),(Mu, Star),(Mu, Star,(NL(DUFAAMM_print_module_name)).nonlocals));
 /* line 276: */
 /* line 277: */
SBBAAMM_scanmodules((*(&(Mu->Uses))), NL(MVFAAMM_print_indirect_use));
} 
 /* line 278: */
 /* line 279: */
UVFAAMM = A68_TRUE;
} 
A_PROC_EXIT(print_indirect_use);
return( UVFAAMM );
} 
#undef NL

A_STATIC A68_VOID  FMFAAMM_generator(A68_BOOL  DMFAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GMFAAMM_generator *)NonLocals)->x)
{ 
A68_VC  HMFAAMM;  /* clause result */
A68_VC  IMFAAMM;  /* OPERATORS - dynamic generator */
{ 
IMFAAMM.upb = YLFAAMM_env_heading.upb ;
( DMFAAMM_anonymous? A_VLOC(A68_CHAR ,IMFAAMM): A_VHEAP(A68_CHAR ,IMFAAMM) );
HMFAAMM = IMFAAMM;
} 
*ReturnedValue = (HMFAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  XRFAAMM_show_action(A68_275 * Sym, void *NonLocals)
#define NL(x) (((YRFAAMM_show_action *)NonLocals)->x)
{ 
A68_BOOL  ZRFAAMM;  /* optbool result */
A68_356  ASFAAMM;  /* collateral clause result */
A68_52  BSFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CSFAAMM;  /* YIELD */
A68_52  FSFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GSFAAMM;  /* YIELD */
A68_52  HSFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ISFAAMM;  /* YIELD */
A68_52  JSFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  KSFAAMM;  /* YIELD */
A68_52  LSFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MSFAAMM;  /* procedure value */
A68_85  NSFAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  OSFAAMM;  /* clause result */
A_PROC_ENTRY(show_action);
 /* line 214: */
 /* line 215: */
{ 
(*NL(URFAAMM_found)) = A68_TRUE;
 /* line 216: */
ZRFAAMM = SIAAAMM_diagnose;
if ( ! ZRFAAMM )
{ZRFAAMM = ((A68_BITS )((*(&(Sym->Tags)))&IJAAAMM_dest_tag)!=0X0U);
}
 /* line 217: */
if ( ZRFAAMM )
{ 
CSFAAMM = (*(&(Sym->Name))) ;
ASFAAMM.data[0] = A_UNITE(BSFAAMM,mode7,7,CSFAAMM);
GSFAAMM = ESFAAMM ;
ASFAAMM.data[1] = A_UNITE(FSFAAMM,mode7,7,GSFAAMM);
ISFAAMM = (*(&(Sym->Text))) ;
ASFAAMM.data[2] = A_UNITE(HSFAAMM,mode7,7,ISFAAMM);
KSFAAMM = '\"' ;
ASFAAMM.data[3] = A_UNITE(JSFAAMM,mode6,6,KSFAAMM);
MSFAAMM.fn.fn_global = LRAAOSL_newline;
MSFAAMM.nonlocals = A68_NIL;
ASFAAMM.data[4] = A_UNITE(LSFAAMM,mode12,12,MSFAAMM);
 /* line 218: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NSFAAMM,ASFAAMM,5,A68_52 ));
} 
 /* line 219: */
 /* line 220: */
OSFAAMM = A68_TRUE;
} 
A_PROC_EXIT(show_action);
return( OSFAAMM );
} 
#undef NL

A_STATIC A68_BOOL  WTFAAMM_show_module(A68_271 * M, A68_272  Star_char, void *NonLocals)
#define NL(x) (((XTFAAMM_show_module *)NonLocals)->x)
{ 
A68_CHAR  YTFAAMM_sep;
A68_INT  ZTFAAMM_global_extra;
A68_BOOL  AUFAAMM_have_indirect;
A68_291  DUFAAMM_print_module_name;   /* proc value of non-global proc */
A68_291  MVFAAMM_print_indirect_use;   /* proc value of non-global proc */
A68_340  VVFAAMM;  /* collateral clause result */
A68_57  WVFAAMM;  /* avoid structure result */
A68_52  XVFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  YVFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZVFAAMM;  /* YIELD */
A68_85  AWFAAMM;  /* OPERATORS - istruct -> vector */
A68_85  CWFAAMM;  /* clause result */
A68_52  EWFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FWFAAMM;  /* YIELD */
A68_85  GWFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  JWFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KWFAAMM;  /* YIELD */
A68_85  LWFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  OWFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PWFAAMM;  /* YIELD */
A68_85  QWFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  RWFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SWFAAMM;  /* procedure value */
A68_85  TWFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  UWFAAMM_is_marked;
A68_VC  VWFAAMM_att_val;
A68_356  WWFAAMM;  /* collateral clause result */
A68_52  ZWFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AXFAAMM;  /* YIELD */
A68_52  BXFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  CXFAAMM;  /* YIELD */
A68_52  FXFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GXFAAMM;  /* YIELD */
A68_52  JXFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KXFAAMM;  /* YIELD */
A68_52  NXFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OXFAAMM;  /* YIELD */
A68_52  PXFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  QXFAAMM;  /* procedure value */
A68_85  RXFAAMM;  /* OPERATORS - istruct -> vector */
A68_INT  SXFAAMM_an;
A68_INT  TXFAAMM;  /* to part of loop */
A68_VC  UXFAAMM;  /* avoid structure result */
A68_340  VXFAAMM;  /* collateral clause result */
A68_52  WXFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  XXFAAMM;  /* YIELD */
A68_52  YXFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ZXFAAMM;  /* procedure value */
A68_85  AYFAAMM;  /* OPERATORS - istruct -> vector */
A68_52  DYFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EYFAAMM;  /* YIELD */
A68_85  FYFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_356  GYFAAMM;  /* collateral clause result */
A68_52  HYFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  IYFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  JYFAAMM;  /* YIELD */
A68_VC  KYFAAMM;  /* avoid structure result */
A68_52  LYFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  OYFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PYFAAMM;  /* YIELD */
A68_52  QYFAAMM;  /* OPERATORS - mode -> union mode */
A68_85  RYFAAMM;  /* OPERATORS - istruct -> vector */
A68_340  SYFAAMM;  /* collateral clause result */
A68_52  TYFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  UYFAAMM;  /* YIELD */
A68_52  VYFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  WYFAAMM;  /* procedure value */
A68_85  XYFAAMM;  /* OPERATORS - istruct -> vector */
A68_340  YYFAAMM;  /* collateral clause result */
A68_52  BZFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CZFAAMM;  /* YIELD */
A68_57  DZFAAMM;  /* avoid structure result */
A68_52  EZFAAMM;  /* OPERATORS - mode -> union mode */
A68_85  FZFAAMM;  /* OPERATORS - istruct -> vector */
A68_52  IZFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JZFAAMM;  /* YIELD */
A68_85  KZFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  LZFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MZFAAMM;  /* procedure value */
A68_85  NZFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  QZFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RZFAAMM;  /* YIELD */
A68_85  SZFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  TZFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UZFAAMM;  /* procedure value */
A68_85  VZFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_340  WZFAAMM;  /* collateral clause result */
A68_52  ZZFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AAGAAMM;  /* YIELD */
A68_52  BAGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CAGAAMM;  /* procedure value */
A68_85  DAGAAMM;  /* OPERATORS - istruct -> vector */
A68_340  EAGAAMM;  /* collateral clause result */
A68_52  HAGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IAGAAMM;  /* YIELD */
A68_52  JAGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  KAGAAMM;  /* procedure value */
A68_85  LAGAAMM;  /* OPERATORS - istruct -> vector */
A68_52  OAGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PAGAAMM;  /* YIELD */
A68_85  QAGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  RAGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SAGAAMM;  /* procedure value */
A68_85  TAGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_340  UAGAAMM;  /* collateral clause result */
A68_52  XAGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YAGAAMM;  /* YIELD */
A68_52  ZAGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ABGAAMM;  /* procedure value */
A68_85  BBGAAMM;  /* OPERATORS - istruct -> vector */
A68_52  CBGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  DBGAAMM;  /* procedure value */
A68_85  EBGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FBGAAMM;  /* clause result */
A_PROC_ENTRY(show_module);
 /* line 248: */
 /* line 249: */
{ 
 /* line 250: */
ZTFAAMM_global_extra = 0;
 /* line 251: */
AUFAAMM_have_indirect = A68_FALSE;
 /* line 253: */
A_CLOSURE( DUFAAMM_print_module_name, EUFAAMM_print_module_name, FUFAAMM_print_module_name );
(( FUFAAMM_print_module_name * ) ( DUFAAMM_print_module_name.nonlocals )) -> ZTFAAMM_global_extra = (&ZTFAAMM_global_extra);
(( FUFAAMM_print_module_name * ) ( DUFAAMM_print_module_name.nonlocals )) -> M = M;
(( FUFAAMM_print_module_name * ) ( DUFAAMM_print_module_name.nonlocals )) -> YTFAAMM_sep = (&YTFAAMM_sep);
 /* line 270: */
A_CLOSURE( MVFAAMM_print_indirect_use, NVFAAMM_print_indirect_use, OVFAAMM_print_indirect_use );
(( OVFAAMM_print_indirect_use * ) ( MVFAAMM_print_indirect_use.nonlocals )) -> M = M;
(( OVFAAMM_print_indirect_use * ) ( MVFAAMM_print_indirect_use.nonlocals )) -> AUFAAMM_have_indirect = (&AUFAAMM_have_indirect);
(( OVFAAMM_print_indirect_use * ) ( MVFAAMM_print_indirect_use.nonlocals )) -> DUFAAMM_print_module_name = DUFAAMM_print_module_name;
(( OVFAAMM_print_indirect_use * ) ( MVFAAMM_print_indirect_use.nonlocals )) -> MVFAAMM_print_indirect_use = MVFAAMM_print_indirect_use;
 /* line 281: */
ZXAAOSL_intwidth( (*(&(M->Number))), 3, &WVFAAMM );
VVFAAMM.data[0] = A_UNITE(XVFAAMM,mode13,13,WVFAAMM);
ZVFAAMM = ' ' ;
VVFAAMM.data[1] = A_UNITE(YVFAAMM,mode6,6,ZVFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AWFAAMM,VVFAAMM,2,A68_52 ));
 /* line 282: */
{ 
 /* line 283: */
if ( (*(&(M->Decs))) )
{ 
FWFAAMM = DWFAAMM ;
CWFAAMM = A_HVEC(GWFAAMM,A_UNITE(EWFAAMM,mode7,7,FWFAAMM),A68_52 );
} 
else
{ 
 /* line 284: */
if ( NL(STFAAMM_all) )
{ 
 /* line 285: */
KWFAAMM = IWFAAMM ;
CWFAAMM = A_HVEC(LWFAAMM,A_UNITE(JWFAAMM,mode7,7,KWFAAMM),A68_52 );
} 
else
{ 
PWFAAMM = NWFAAMM ;
CWFAAMM = A_HVEC(QWFAAMM,A_UNITE(OWFAAMM,mode7,7,PWFAAMM),A68_52 );
} 
} 
} 
GFBAOSL_put(KEAAOST_screen, CWFAAMM);
 /* line 286: */
KJDAAMM_put_module_name(KEAAOST_screen, M, NL(STFAAMM_all), NL(Msg));
 /* line 287: */
SWFAAMM.fn.fn_global = LRAAOSL_newline;
SWFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(TWFAAMM,A_UNITE(RWFAAMM,mode12,12,SWFAAMM),A68_52 ));
 /* line 289: */
 /* line 290: */
if ( !NL(STFAAMM_all) )
{ 
UWFAAMM_is_marked = A68_FALSE;
 /* line 291: */
 /* line 293: */
YTFAAMM_sep = ' ';
 /* line 294: */
 /* line 295: */
if ( (Star_char.Mode!=' ') )
{ 
AXFAAMM = YWFAAMM ;
WWFAAMM.data[0] = A_UNITE(ZWFAAMM,mode7,7,AXFAAMM);
CXFAAMM = Star_char.Value ;
WWFAAMM.data[1] = A_UNITE(BXFAAMM,mode6,6,CXFAAMM);
 /* line 296: */
GXFAAMM = EXFAAMM ;
WWFAAMM.data[2] = A_UNITE(FXFAAMM,mode7,7,GXFAAMM);
 /* line 297: */
if ( (Star_char.Mode=='*') )
{ 
 /* line 298: */
KXFAAMM = IXFAAMM ;
WWFAAMM.data[3] = A_UNITE(JXFAAMM,mode7,7,KXFAAMM);
} 
else
{ 
OXFAAMM = MXFAAMM ;
WWFAAMM.data[3] = A_UNITE(NXFAAMM,mode7,7,OXFAAMM);
} 
QXFAAMM.fn.fn_global = LRAAOSL_newline;
QXFAAMM.nonlocals = A68_NIL;
WWFAAMM.data[4] = A_UNITE(PXFAAMM,mode12,12,QXFAAMM);
 /* line 299: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RXFAAMM,WWFAAMM,5,A68_52 ));
} 
 /* line 301: */
 /* line 302: */
TXFAAMM = YPAAAMM_max_attribute;
for ( SXFAAMM_an = 1;
SXFAAMM_an <= TXFAAMM;
SXFAAMM_an += 1 )
{ 
 /* line 303: */
 /* line 304: */
if ( ZUAAAMM_attribute_marked(M, SXFAAMM_an) )
{ 
KTAAAMM_attribute_value( M, SXFAAMM_an, &UXFAAMM );
VWFAAMM_att_val = UXFAAMM;
 /* line 305: */
 /* line 306: */
if ( ((VWFAAMM_att_val.upb+2)>EPAAOSL_charsleft(KEAAOST_screen)) )
{ 
XXFAAMM = ',' ;
VXFAAMM.data[0] = A_UNITE(WXFAAMM,mode6,6,XXFAAMM);
ZXFAAMM.fn.fn_global = LRAAOSL_newline;
ZXFAAMM.nonlocals = A68_NIL;
VXFAAMM.data[1] = A_UNITE(YXFAAMM,mode12,12,ZXFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AYFAAMM,VXFAAMM,2,A68_52 ));
 /* line 307: */
 /* line 308: */
UWFAAMM_is_marked = A68_FALSE;
} 
 /* line 309: */
 /* line 310: */
if ( !UWFAAMM_is_marked )
{ 
EYFAAMM = CYFAAMM ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(FYFAAMM,A_UNITE(DYFAAMM,mode7,7,EYFAAMM),A68_52 ));
 /* line 311: */
 /* line 312: */
UWFAAMM_is_marked = A68_TRUE;
} 
 /* line 313: */
GYFAAMM.data[0] = A_UNITE(HYFAAMM,mode6,6,YTFAAMM_sep);
JYFAAMM = ' ' ;
GYFAAMM.data[1] = A_UNITE(IYFAAMM,mode6,6,JYFAAMM);
GTAAAMM_attribute_name( SXFAAMM_an, &KYFAAMM );
GYFAAMM.data[2] = A_UNITE(LYFAAMM,mode7,7,KYFAAMM);
 /* line 314: */
PYFAAMM = NYFAAMM ;
GYFAAMM.data[3] = A_UNITE(OYFAAMM,mode7,7,PYFAAMM);
GYFAAMM.data[4] = A_UNITE(QYFAAMM,mode7,7,VWFAAMM_att_val);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RYFAAMM,GYFAAMM,5,A68_52 ));
 /* line 315: */
 /* line 316: */
 /* line 317: */
YTFAAMM_sep = ',';
} 
}
 /* line 318: */
if ( UWFAAMM_is_marked )
{ 
UYFAAMM = '.' ;
SYFAAMM.data[0] = A_UNITE(TYFAAMM,mode6,6,UYFAAMM);
WYFAAMM.fn.fn_global = LRAAOSL_newline;
WYFAAMM.nonlocals = A68_NIL;
SYFAAMM.data[1] = A_UNITE(VYFAAMM,mode12,12,WYFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XYFAAMM,SYFAAMM,2,A68_52 ));
} 
 /* line 320: */
CZFAAMM = AZFAAMM ;
YYFAAMM.data[0] = A_UNITE(BZFAAMM,mode7,7,CZFAAMM);
ZXAAOSL_intwidth( (*(&(M->Level))), 3, &DZFAAMM );
YYFAAMM.data[1] = A_UNITE(EZFAAMM,mode13,13,DZFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(FZFAAMM,YYFAAMM,2,A68_52 ));
 /* line 321: */
if ( (*(&(M->Recursive))) )
{ 
JZFAAMM = HZFAAMM ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(KZFAAMM,A_UNITE(IZFAAMM,mode7,7,JZFAAMM),A68_52 ));
} 
 /* line 322: */
MZFAAMM.fn.fn_global = LRAAOSL_newline;
MZFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(NZFAAMM,A_UNITE(LZFAAMM,mode12,12,MZFAAMM),A68_52 ));
 /* line 324: */
 /* line 325: */
if ( ((*(&(M->Uses)))!=KBAAAMM_nilmodulelist) )
{ 
RZFAAMM = PZFAAMM ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(SZFAAMM,A_UNITE(QZFAAMM,mode7,7,RZFAAMM),A68_52 ));
 /* line 326: */
YTFAAMM_sep = ' ';
 /* line 327: */
ZTFAAMM_global_extra = 0;
 /* line 328: */
SBBAAMM_scanmodules((*(&(M->Uses))), DUFAAMM_print_module_name);
 /* line 329: */
UZFAAMM.fn.fn_global = LRAAOSL_newline;
UZFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(VZFAAMM,A_UNITE(TZFAAMM,mode12,12,UZFAAMM),A68_52 ));
 /* line 330: */
YTFAAMM_sep = '(';
 /* line 331: */
ZTFAAMM_global_extra = 2;
 /* line 332: */
SBBAAMM_scanmodules((*(&(M->Uses))), MVFAAMM_print_indirect_use);
 /* line 333: */
if ( AUFAAMM_have_indirect )
{ 
AAGAAMM = YZFAAMM ;
WZFAAMM.data[0] = A_UNITE(ZZFAAMM,mode7,7,AAGAAMM);
CAGAAMM.fn.fn_global = LRAAOSL_newline;
CAGAAMM.nonlocals = A68_NIL;
WZFAAMM.data[1] = A_UNITE(BAGAAMM,mode12,12,CAGAAMM);
 /* line 334: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DAGAAMM,WZFAAMM,2,A68_52 ));
} 
} 
else
{ 
 /* line 335: */
if ( ((*(&(M->Filename))).upb>0) )
{ 
IAGAAMM = GAGAAMM ;
EAGAAMM.data[0] = A_UNITE(HAGAAMM,mode7,7,IAGAAMM);
KAGAAMM.fn.fn_global = LRAAOSL_newline;
KAGAAMM.nonlocals = A68_NIL;
EAGAAMM.data[1] = A_UNITE(JAGAAMM,mode12,12,KAGAAMM);
 /* line 336: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LAGAAMM,EAGAAMM,2,A68_52 ));
} 
} 
 /* line 338: */
 /* line 339: */
if ( ((*(&(M->Usedby)))!=KBAAAMM_nilmodulelist) )
{ 
PAGAAMM = NAGAAMM ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(QAGAAMM,A_UNITE(OAGAAMM,mode7,7,PAGAAMM),A68_52 ));
 /* line 340: */
YTFAAMM_sep = 'y';
 /* line 341: */
ZTFAAMM_global_extra = 0;
 /* line 342: */
SBBAAMM_scanmodules((*(&(M->Usedby))), DUFAAMM_print_module_name);
 /* line 343: */
 /* line 344: */
SAGAAMM.fn.fn_global = LRAAOSL_newline;
SAGAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(TAGAAMM,A_UNITE(RAGAAMM,mode12,12,SAGAAMM),A68_52 ));
} 
else
{ 
 /* line 345: */
if ( (*(&(M->Decs))) )
{ 
YAGAAMM = WAGAAMM ;
UAGAAMM.data[0] = A_UNITE(XAGAAMM,mode7,7,YAGAAMM);
ABGAAMM.fn.fn_global = LRAAOSL_newline;
ABGAAMM.nonlocals = A68_NIL;
UAGAAMM.data[1] = A_UNITE(ZAGAAMM,mode12,12,ABGAAMM);
 /* line 346: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BBGAAMM,UAGAAMM,2,A68_52 ));
} 
} 
 /* line 347: */
 /* line 348: */
DBGAAMM.fn.fn_global = LRAAOSL_newline;
DBGAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(EBGAAMM,A_UNITE(CBGAAMM,mode12,12,DBGAAMM),A68_52 ));
} 
 /* line 349: */
 /* line 350: */
FBGAAMM = A68_TRUE;
} 
A_PROC_EXIT(show_module);
return( FBGAAMM );
} 
#undef NL

A_STATIC A68_BOOL  KHGAAMM_list_action(A68_271 * Mm, A68_272  S)
{ 
A68_333  LHGAAMM;  /* collateral clause result */
A68_52  OHGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PHGAAMM;  /* YIELD */
A68_52  QHGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RHGAAMM;  /* YIELD */
A68_52  SHGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  THGAAMM;  /* procedure value */
A68_85  UHGAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  VHGAAMM;  /* clause result */
A_PROC_ENTRY(list_action);
 /* line 487: */
 /* line 488: */
{ 
 /* line 489: */
if ( ((*(&(Mm->Marker)))==1) )
{ 
PHGAAMM = NHGAAMM ;
LHGAAMM.data[0] = A_UNITE(OHGAAMM,mode7,7,PHGAAMM);
RHGAAMM = (*(&(Mm->Name))) ;
LHGAAMM.data[1] = A_UNITE(QHGAAMM,mode7,7,RHGAAMM);
THGAAMM.fn.fn_global = LRAAOSL_newline;
THGAAMM.nonlocals = A68_NIL;
LHGAAMM.data[2] = A_UNITE(SHGAAMM,mode12,12,THGAAMM);
 /* line 490: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UHGAAMM,LHGAAMM,3,A68_52 ));
} 
 /* line 491: */
 /* line 492: */
VHGAAMM = A68_TRUE;
} 
A_PROC_EXIT(list_action);
return( VHGAAMM );
} 
#undef NL

A_STATIC A68_BOOL  SNGAAMM_try_failed(A68_271 * Mm, A68_272  S, void *NonLocals)
#define NL(x) (((TNGAAMM_try_failed *)NonLocals)->x)
{ 
A68_VC  UNGAAMM;  /* avoid structure result */
A68_VC  VNGAAMM_av;
A68_BOOL  WNGAAMM;  /* optbool result */
A68_BOOL  XNGAAMM;  /* clause result */
A_PROC_ENTRY(try_failed);
 /* line 613: */
 /* line 614: */
{ 
KTAAAMM_attribute_value( Mm, QPAAAMM_compile_attribute, &UNGAAMM );
VNGAAMM_av = UNGAAMM;
 /* line 616: */
 /* line 617: */
WNGAAMM = A_VC_EQ(VNGAAMM_av,BFAAAMM_failed_string);
if ( ! WNGAAMM )
{WNGAAMM = A_VC_EQ(VNGAAMM_av,KFAAAMM_trfailed_string);
}
 /* line 618: */
if ( ! WNGAAMM )
{WNGAAMM = A_VC_EQ(VNGAAMM_av,TFAAAMM_ccfailed_string);
}
 /* line 619: */
if ( WNGAAMM )
{ 
(*NL(JNGAAMM_m)) = Mm;
 /* line 620: */
 /* line 621: */
 /* line 622: */
XNGAAMM = A68_FALSE;
} 
else
{ 
 /* line 623: */
 /* line 624: */
XNGAAMM = A68_TRUE;
} 
} 
A_PROC_EXIT(try_failed);
return( XNGAAMM );
} 
#undef NL

A_STATIC A68_BOOL  BOGAAMM_show_failed(A68_271 * Mm, A68_272  S, void *NonLocals)
#define NL(x) (((COGAAMM_show_failed *)NonLocals)->x)
{ 
A68_VC  DOGAAMM;  /* avoid structure result */
A68_VC  EOGAAMM_av;
A68_BOOL  FOGAAMM_failed;
A68_302  GOGAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  HOGAAMM;  /* YIELD */
A68_302  IOGAAMM;  /* OPERATORS - mode -> union mode */
A68_302  JOGAAMM;  /* OPERATORS - mode -> union mode */
A68_340  KOGAAMM;  /* collateral clause result */
A68_52  NOGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OOGAAMM;  /* YIELD */
A68_52  POGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  QOGAAMM;  /* procedure value */
A68_85  ROGAAMM;  /* OPERATORS - istruct -> vector */
A68_333  SOGAAMM;  /* collateral clause result */
A68_52  VOGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WOGAAMM;  /* YIELD */
A68_52  XOGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YOGAAMM;  /* YIELD */
A68_52  ZOGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  APGAAMM;  /* procedure value */
A68_85  BPGAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  CPGAAMM;  /* clause result */
A_PROC_ENTRY(show_failed);
 /* line 627: */
 /* line 628: */
{ 
KTAAAMM_attribute_value( Mm, QPAAAMM_compile_attribute, &DOGAAMM );
EOGAAMM_av = DOGAAMM;
 /* line 629: */
FOGAAMM_failed = A68_TRUE;
 /* line 631: */
 /* line 632: */
if ( A_VC_EQ(EOGAAMM_av,BFAAAMM_failed_string) )
{ 
 /* line 633: */
HOGAAMM = A68_TRUE ;
YTAAAMM_set_attribute(Mm, QPAAAMM_compile_attribute, A_UNITE(GOGAAMM,mode2,2,HOGAAMM));
} 
else
{ 
 /* line 634: */
if ( A_VC_EQ(EOGAAMM_av,KFAAAMM_trfailed_string) )
{ 
 /* line 635: */
YTAAAMM_set_attribute(Mm, QPAAAMM_compile_attribute, A_UNITE(IOGAAMM,mode1,1,SEAAAMM_tr_string));
} 
else
{ 
 /* line 636: */
if ( A_VC_EQ(EOGAAMM_av,TFAAAMM_ccfailed_string) )
{ 
 /* line 637: */
 /* line 638: */
YTAAAMM_set_attribute(Mm, QPAAAMM_compile_attribute, A_UNITE(JOGAAMM,mode1,1,JEAAAMM_cc_string));
} 
else
{ 
 /* line 639: */
FOGAAMM_failed = A68_FALSE;
} 
} 
} 
 /* line 640: */
 /* line 641: */
if ( FOGAAMM_failed )
{ 
 /* line 642: */
if ( (*NL(ONGAAMM_first_failed)) )
{ 
(*NL(ONGAAMM_first_failed)) = A68_FALSE;
 /* line 643: */
 /* line 644: */
 /* line 645: */
OOGAAMM = MOGAAMM ;
KOGAAMM.data[0] = A_UNITE(NOGAAMM,mode7,7,OOGAAMM);
QOGAAMM.fn.fn_global = LRAAOSL_newline;
QOGAAMM.nonlocals = A68_NIL;
KOGAAMM.data[1] = A_UNITE(POGAAMM,mode12,12,QOGAAMM);
 /* line 646: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ROGAAMM,KOGAAMM,2,A68_52 ));
} 
 /* line 647: */
WOGAAMM = UOGAAMM ;
SOGAAMM.data[0] = A_UNITE(VOGAAMM,mode7,7,WOGAAMM);
YOGAAMM = (*(&(Mm->Name))) ;
SOGAAMM.data[1] = A_UNITE(XOGAAMM,mode7,7,YOGAAMM);
APGAAMM.fn.fn_global = LRAAOSL_newline;
APGAAMM.nonlocals = A68_NIL;
SOGAAMM.data[2] = A_UNITE(ZOGAAMM,mode12,12,APGAAMM);
 /* line 648: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BPGAAMM,SOGAAMM,3,A68_52 ));
} 
 /* line 649: */
 /* line 650: */
CPGAAMM = A68_TRUE;
} 
A_PROC_EXIT(show_failed);
return( CPGAAMM );
} 
#undef NL

A_STATIC A68_VOID  USGAAMM_version_string(A68_VC  Message, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VSGAAMM_version_string *)NonLocals)->x)
{ 
A68_INT  WSGAAMM;  /* YIELD */
A68_VC  XSGAAMM;  /* clause result */
A68_INT  YSGAAMM;  /* YIELD */
A68_VC  ZSGAAMM;  /* avoid structure result */
A68_46  CTGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DTGAAMM;  /* OPERATORS - skip to mode */
A68_VC  ETGAAMM;  /* avoid structure result */
A_PROC_ENTRY(version_string);
 /* line 737: */
 /* line 738: */
{ 
WSGAAMM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(NL(Param_values),WSGAAMM)))) )
{ 
 /* line 739: */
YSGAAMM = 1 ;
JLFAOST_get_name( (*(&A_VINDEX(NL(Param_values),YSGAAMM))), NL(Msg), &ZSGAAMM );
XSGAAMM = ZSGAAMM;
} 
else
{ 
 /* line 740: */
if ( !AXAAAMM_can_query() )
{ 
 /* line 741: */
A_CALLPROC(ZLBAOSI_global_msg,(UHAAOSI_fatal, A_HVEC(CTGAAMM,BTGAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(CTGAAMM,BTGAAMM,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 742: */
 /* line 743: */
 /* line 744: */
XSGAAMM = DTGAAMM;
} 
else
{ 
 /* line 745: */
 /* line 746: */
IIAAOST_prompt( Message, &ETGAAMM );
XSGAAMM = ETGAAMM;
} 
} 
} 
A_PROC_EXIT(version_string);
*ReturnedValue = (XSGAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  CUGAAMM_count_use(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((DUGAAMM_count_use *)NonLocals)->x)
{ 
A68_BOOL  EUGAAMM;  /* clause result */
A_PROC_ENTRY(count_use);
 /* line 775: */
 /* line 776: */
{ 
(*NL(XTGAAMM_used_cnt))+=1;
 /* line 777: */
 /* line 778: */
EUGAAMM = A68_TRUE;
} 
A_PROC_EXIT(count_use);
return( EUGAAMM );
} 
#undef NL

A_STATIC A68_BOOL  IUGAAMM_count_need(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((JUGAAMM_count_need *)NonLocals)->x)
{ 
A68_BOOL  KUGAAMM;  /* clause result */
A_PROC_ENTRY(count_need);
 /* line 781: */
 /* line 782: */
{ 
(*NL(YTGAAMM_needed_cnt))+=1;
 /* line 783: */
 /* line 784: */
KUGAAMM = A68_TRUE;
} 
A_PROC_EXIT(count_need);
return( KUGAAMM );
} 
#undef NL

A_STATIC A68_BOOL  OUGAAMM_count_usage(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((PUGAAMM_count_usage *)NonLocals)->x)
{ 
A68_BOOL  QUGAAMM;  /* clause result */
A_PROC_ENTRY(count_usage);
 /* line 787: */
 /* line 788: */
{ 
SBBAAMM_scanmodules((*(&(M->Uses))), NL(BUGAAMM_count_use));
 /* line 789: */
SBBAAMM_scanmodules((*(&(M->Usedby))), NL(HUGAAMM_count_need));
 /* line 790: */
 /* line 791: */
QUGAAMM = A68_TRUE;
} 
A_PROC_EXIT(count_usage);
return( QUGAAMM );
} 
#undef NL

A_STATIC A68_VOID  MVGAAMM_generator(A68_BOOL  KVGAAMM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((NVGAAMM_generator *)NonLocals)->x)
{ 
A68_32  OVGAAMM;  /* clause result */
A68_32  PVGAAMM;  /* OPERATORS - dynamic generator */
{ 
PVGAAMM.upb = NIAAAMM_max_level ;
( KVGAAMM_anonymous? A_VLOC(A68_INT ,PVGAAMM): A_VHEAP(A68_INT ,PVGAAMM) );
OVGAAMM = PVGAAMM;
} 
*ReturnedValue = (OVGAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  VVGAAMM_count_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((WVGAAMM_count_action *)NonLocals)->x)
{ 
A68_BOOL  XVGAAMM;  /* optbool result */
A68_INT  YVGAAMM;  /* YIELD */
A68_INT * ZVGAAMM;  /* YIELD */
A68_BOOL  AWGAAMM;  /* clause result */
A_PROC_ENTRY(count_action);
 /* line 803: */
 /* line 804: */
{ 
XVGAAMM = ((*(&(M->Level)))>0);
if ( XVGAAMM )
{XVGAAMM = ((*(&(M->Level)))<=NIAAAMM_max_level);
}
 /* line 805: */
if ( XVGAAMM )
{ 
 /* line 806: */
YVGAAMM = (*(&(M->Level))) ;
ZVGAAMM = (&A_VINDEX(NL(QVGAAMM_level_counts),YVGAAMM)) ;
(*ZVGAAMM)+=1;
} 
 /* line 807: */
 /* line 808: */
AWGAAMM = A68_TRUE;
} 
A_PROC_EXIT(count_action);
return( AWGAAMM );
} 
#undef NL

A68_VOID  ZHFAAMM_obey_go_action(A68_VC  Node, A68_BOOL  Notify, A68_97  Msg)
{ 
A68_333  AIFAAMM;  /* collateral clause result */
A68_52  DIFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EIFAAMM;  /* YIELD */
A68_52  HIFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IIFAAMM;  /* YIELD */
A68_52  LIFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MIFAAMM;  /* YIELD */
A68_52  NIFAAMM;  /* OPERATORS - mode -> union mode */
A68_85  OIFAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  PIFAAMM;  /* avoid structure result */
A68_VC  QIFAAMM_prompt;
A68_BOOL  RIFAAMM;  /* optbool result */
A68_BOOL  UIFAAMM_ok;
A68_BOOL  XIFAAMM;  /* optbool result */
A68_BOOL  YIFAAMM;  /* clause result */
A_PROC_ENTRY(obey_go_action);
 /* line 54: */
 /* line 55: */
{ 
 /* line 56: */
EIFAAMM = CIFAAMM ;
AIFAAMM.data[0] = A_UNITE(DIFAAMM,mode7,7,EIFAAMM);
 /* line 57: */
if ( (Node.upb>0) )
{ 
 /* line 58: */
IIFAAMM = GIFAAMM ;
AIFAAMM.data[1] = A_UNITE(HIFAAMM,mode7,7,IIFAAMM);
} 
else
{ 
MIFAAMM = KIFAAMM ;
AIFAAMM.data[1] = A_UNITE(LIFAAMM,mode7,7,MIFAAMM);
} 
AIFAAMM.data[2] = A_UNITE(NIFAAMM,mode7,7,Node);
UJBAOSL_oneline( A_HISVEC(OIFAAMM,AIFAAMM,3,A68_52 ), &PIFAAMM );
QIFAAMM_prompt = PIFAAMM;
 /* line 60: */
 /* line 61: */
RIFAAMM = !Notify;
if ( ! RIFAAMM )
{{ 
UIFAAMM_ok = HKDAAMM_list_compiles(KEAAOST_screen, TIFAAMM, Msg);
 /* line 63: */
IMDAAMM_list_links(KEAAOST_screen, WIFAAMM);
 /* line 64: */
 /* line 65: */
XIFAAMM = UIFAAMM_ok;
if ( XIFAAMM )
{XIFAAMM = JXAAAMM_query(QIFAAMM_prompt, DXAAAMM_default_yes, Msg);
}
YIFAAMM = XIFAAMM;
} 
RIFAAMM = YIFAAMM;
}
 /* line 66: */
if ( RIFAAMM )
{ 
 /* line 67: */
 /* line 68: */
AWDAAMM_execute(Node, Msg);
} 
} 
A_PROC_EXIT(obey_go_action);
return;
} 
#undef NL
 /* line 71: */
 /* line 72: */

A_STATIC A68_VOID  CJFAAMM_set_bool_variable(A68_177  Param_values, A68_BOOL * Var, A68_97  Msg)
{ 
A68_INT  DJFAAMM;  /* YIELD */
A68_VC  EJFAAMM;  /* avoid structure result */
A68_VC  FJFAAMM_p1;
A68_340  KJFAAMM;  /* collateral clause result */
A68_52  NJFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OJFAAMM;  /* YIELD */
A68_52  PJFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  QJFAAMM;  /* procedure value */
A68_85  RJFAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_bool_variable);
 /* line 73: */
 /* line 74: */
{ 
DJFAAMM = 1 ;
QMFAOST_get_string( (*(&A_VINDEX(Param_values,DJFAAMM))), Msg, &EJFAAMM );
FJFAAMM_p1 = EJFAAMM;
 /* line 76: */
UWAAAMM_set_lowercase(FJFAAMM_p1);
 /* line 77: */
 /* line 78: */
if ( LEDAAMM_try_name(FJFAAMM_p1, HJFAAMM) )
{ 
 /* line 79: */
(*Var) = A68_TRUE;
} 
else
{ 
 /* line 80: */
if ( LEDAAMM_try_name(FJFAAMM_p1, JJFAAMM) )
{ 
 /* line 81: */
 /* line 82: */
(*Var) = A68_FALSE;
} 
else
{ 
OJFAAMM = MJFAAMM ;
KJFAAMM.data[0] = A_UNITE(NJFAAMM,mode7,7,OJFAAMM);
QJFAAMM.fn.fn_global = LRAAOSL_newline;
QJFAAMM.nonlocals = A68_NIL;
KJFAAMM.data[1] = A_UNITE(PJFAAMM,mode12,12,QJFAAMM);
 /* line 83: */
 /* line 84: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RJFAAMM,KJFAAMM,2,A68_52 ));
} 
} 
} 
A_PROC_EXIT(set_bool_variable);
return;
} 
#undef NL

A_STATIC A68_VOID  UJFAAMM_setdiag_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setdiag_action);
 /* line 87: */
 /* line 88: */
 /* line 89: */
CJFAAMM_set_bool_variable(Param_values, (&SIAAAMM_diagnose), Msg);
A_PROC_EXIT(setdiag_action);
return;
} 
#undef NL

A_STATIC A68_VOID  XJFAAMM_setquery_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setquery_action);
 /* line 92: */
 /* line 93: */
 /* line 94: */
CJFAAMM_set_bool_variable(Param_values, (&ZWAAAMM_query_active), Msg);
A_PROC_EXIT(setquery_action);
return;
} 
#undef NL

A_STATIC A68_VOID  AKFAAMM_setdebug_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setdebug_action);
 /* line 97: */
 /* line 98: */
 /* line 99: */
RVEAAMM_test_attribute(SPAAAMM_debug_attribute, Param_values, A68_FALSE, Msg);
A_PROC_EXIT(setdebug_action);
return;
} 
#undef NL

A_STATIC A68_VOID  DKFAAMM_setexedir_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setexedir_action);
 /* line 102: */
 /* line 103: */
 /* line 104: */
RVEAAMM_test_attribute(VPAAAMM_exename_attribute, Param_values, A68_TRUE, Msg);
A_PROC_EXIT(setexedir_action);
return;
} 
#undef NL

A_STATIC A68_VOID  GKFAAMM_setheapsize_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setheapsize_action);
 /* line 107: */
 /* line 108: */
 /* line 109: */
RVEAAMM_test_attribute(UPAAAMM_heap_attribute, Param_values, A68_FALSE, Msg);
A_PROC_EXIT(setheapsize_action);
return;
} 
#undef NL

A_STATIC A68_VOID  JKFAAMM_setoptimise_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setoptimise_action);
 /* line 112: */
 /* line 113: */
 /* line 114: */
RVEAAMM_test_attribute(XPAAAMM_optimise_attribute, Param_values, A68_TRUE, Msg);
A_PROC_EXIT(setoptimise_action);
return;
} 
#undef NL

A_STATIC A68_VOID  MKFAAMM_setstaredit_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(setstaredit_action);
 /* line 117: */
 /* line 118: */
 /* line 119: */
RVEAAMM_test_attribute(TPAAAMM_star_attribute, Param_values, A68_TRUE, Msg);
A_PROC_EXIT(setstaredit_action);
return;
} 
#undef NL

A_STATIC A68_VOID  PKFAAMM_version_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_270 * QKFAAMM_ml;
A68_BOOL  RKFAAMM_found;
A68_VC  SKFAAMM_name;
A68_176 * TKFAAMM_p;
A68_INT  UKFAAMM;  /* forall loop counter */
A68_VC  VKFAAMM;  /* avoid structure result */
A68_340  WKFAAMM;  /* collateral clause result */
A68_VC  XKFAAMM;  /* avoid structure result */
A68_52  YKFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ZKFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ALFAAMM;  /* procedure value */
A68_85  BLFAAMM;  /* OPERATORS - istruct -> vector */
A68_342  CLFAAMM;  /* collateral clause result */
A68_52  FLFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GLFAAMM;  /* YIELD */
A68_52  HLFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  KLFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LLFAAMM;  /* YIELD */
A68_52  MLFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NLFAAMM;  /* procedure value */
A68_85  OLFAAMM;  /* OPERATORS - istruct -> vector */
A68_302  PLFAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  QLFAAMM;  /* YIELD */
A68_BOOL  RLFAAMM;  /* optbool result */
A_PROC_ENTRY(version_action);
 /* line 122: */
 /* line 123: */
{ 
 /* line 124: */
RKFAAMM_found = A68_FALSE;
 /* line 125: */
 /* line 127: */
 /* line 128: */
UKFAAMM = Param_values.upb -1;
TKFAAMM_p = Param_values.data;
for (;UKFAAMM-- >= 0;
(TKFAAMM_p++
) )
{
 /* line 129: */
JLFAOST_get_name( (*TKFAAMM_p), Msg, &VKFAAMM );
SKFAAMM_name = VKFAAMM;
 /* line 130: */
UWAAAMM_set_lowercase(SKFAAMM_name);
 /* line 131: */
QKFAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, SKFAAMM_name);
 /* line 132: */
 /* line 133: */
if ( (QKFAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
SZAAAMM_mnot_found( SKFAAMM_name, &XKFAAMM );
WKFAAMM.data[0] = A_UNITE(YKFAAMM,mode7,7,XKFAAMM);
ALFAAMM.fn.fn_global = LRAAOSL_newline;
ALFAAMM.nonlocals = A68_NIL;
WKFAAMM.data[1] = A_UNITE(ZKFAAMM,mode12,12,ALFAAMM);
 /* line 134: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BLFAAMM,WKFAAMM,2,A68_52 ));
} 
else
{ 
 /* line 135: */
if ( !(*(&((*(&(QKFAAMM_ml->Module)))->Decs))) )
{ 
GLFAAMM = ELFAAMM ;
CLFAAMM.data[0] = A_UNITE(FLFAAMM,mode7,7,GLFAAMM);
 /* line 136: */
CLFAAMM.data[1] = A_UNITE(HLFAAMM,mode7,7,SKFAAMM_name);
 /* line 137: */
LLFAAMM = JLFAAMM ;
CLFAAMM.data[2] = A_UNITE(KLFAAMM,mode7,7,LLFAAMM);
NLFAAMM.fn.fn_global = LRAAOSL_newline;
NLFAAMM.nonlocals = A68_NIL;
CLFAAMM.data[3] = A_UNITE(MLFAAMM,mode12,12,NLFAAMM);
 /* line 138: */
 /* line 139: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OLFAAMM,CLFAAMM,4,A68_52 ));
} 
else
{ 
RKFAAMM_found = A68_TRUE;
 /* line 140: */
 /* line 141: */
 /* line 142: */
QLFAAMM = A68_FALSE ;
YTAAAMM_set_attribute((*(&(QKFAAMM_ml->Module))), WPAAAMM_version_attribute, A_UNITE(PLFAAMM,mode2,2,QLFAAMM));
} 
} 
}
 /* line 143: */
 /* line 144: */
RLFAAMM = RKFAAMM_found;
if ( RLFAAMM )
{RLFAAMM = KHAAAMM_flagoff(MKAAAMM_auto_version);
}
 /* line 145: */
if ( RLFAAMM )
{ /* line 146: */
RLFAAMM = JXAAAMM_query(TLFAAMM, DXAAAMM_default_yes, Msg);
}
 /* line 147: */
if ( RLFAAMM )
{ 
 /* line 148: */
 /* line 149: */
VMAAAMM_define_symbol(VLFAAMM, RDAAAMM_on_string, (A68_BITS )(AJAAAMM_mmd_tag|ZIAAAMM_changed_tag));
} 
} 
A_PROC_EXIT(version_action);
return;
} 
#undef NL

A_STATIC A68_VOID  BMFAAMM_showenviron_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  CMFAAMM_db_state;
A68_31  EMFAAMM_generator;   /* proc value of non-global proc */
A68_VC  KMFAAMM;  /* avoid structure result */
A68_VC  JMFAAMM_heading;
A68_348  LMFAAMM;  /* collateral clause result */
A68_52  MMFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NMFAAMM;  /* procedure value */
A68_52  QMFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RMFAAMM;  /* YIELD */
A68_52  SMFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  VMFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WMFAAMM;  /* YIELD */
A68_52  XMFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  YMFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ZMFAAMM;  /* procedure value */
A68_52  CNFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DNFAAMM;  /* YIELD */
A68_52  ENFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  FNFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  GNFAAMM;  /* YIELD */
A68_52  HNFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  INFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JNFAAMM;  /* procedure value */
A68_85  KNFAAMM;  /* OPERATORS - istruct -> vector */
A68_353  LNFAAMM;  /* collateral clause result */
A68_52  MNFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NNFAAMM;  /* procedure value */
A68_52  QNFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RNFAAMM;  /* YIELD */
A68_52  SNFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  TNFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  WNFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XNFAAMM;  /* YIELD */
A68_52  AOFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BOFAAMM;  /* YIELD */
A68_52  EOFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FOFAAMM;  /* YIELD */
A68_52  IOFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JOFAAMM;  /* YIELD */
A68_52  KOFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  LOFAAMM;  /* procedure value */
A68_85  MOFAAMM;  /* OPERATORS - istruct -> vector */
A68_333  NOFAAMM;  /* collateral clause result */
A68_52  QOFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ROFAAMM;  /* YIELD */
A68_52  SOFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  TOFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UOFAAMM;  /* procedure value */
A68_85  VOFAAMM;  /* OPERATORS - istruct -> vector */
A68_52  APFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  BPFAAMM;  /* procedure value */
A68_85  CPFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  HPFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  IPFAAMM;  /* procedure value */
A68_85  JPFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_275 ** KPFAAMM_var;
A68_275 *** LPFAAMM;  /* forall control - []x */
A68_INT  MPFAAMM;  /* forall loop counter */
A68_356  NPFAAMM;  /* collateral clause result */
A68_52  OPFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  PPFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QPFAAMM;  /* YIELD */
A68_52  TPFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UPFAAMM;  /* YIELD */
A68_52  VPFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WPFAAMM;  /* YIELD */
A68_52  XPFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YPFAAMM;  /* procedure value */
A68_85  ZPFAAMM;  /* OPERATORS - istruct -> vector */
A68_146  AQFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  BQFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CQFAAMM;  /* procedure value */
A68_85  DQFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  QQFAAMM;  /* collateral clause result */
A68_52  RQFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SQFAAMM;  /* procedure value */
A68_52  VQFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WQFAAMM;  /* YIELD */
A68_52  XQFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YQFAAMM;  /* procedure value */
A68_85  ZQFAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(showenviron_action);
 /* line 154: */
 /* line 155: */
{ 
CMFAAMM_db_state = DDBAAMM_database_modified();
 /* line 156: */
A_CLOSURE( EMFAAMM_generator, FMFAAMM_generator, GMFAAMM_generator );
A_CALLPROC(EMFAAMM_generator,(A68_TRUE, &KMFAAMM),(A68_TRUE, &KMFAAMM,(EMFAAMM_generator).nonlocals));
JMFAAMM_heading = KMFAAMM;
A_VASSIGN2(YLFAAMM_env_heading,JMFAAMM_heading,A68_CHAR );
 /* line 158: */
NMFAAMM.fn.fn_global = LRAAOSL_newline;
NMFAAMM.nonlocals = A68_NIL;
LMFAAMM.data[0] = A_UNITE(MMFAAMM,mode12,12,NMFAAMM);
RMFAAMM = PMFAAMM ;
LMFAAMM.data[1] = A_UNITE(QMFAAMM,mode7,7,RMFAAMM);
 /* line 159: */
LMFAAMM.data[2] = A_UNITE(SMFAAMM,mode7,7,OAAAAMM_mm_number);
WMFAAMM = UMFAAMM ;
LMFAAMM.data[3] = A_UNITE(VMFAAMM,mode7,7,WMFAAMM);
LMFAAMM.data[4] = A_UNITE(XMFAAMM,mode7,7,CKAAAMM_operating_system);
 /* line 160: */
ZMFAAMM.fn.fn_global = LRAAOSL_newline;
ZMFAAMM.nonlocals = A68_NIL;
LMFAAMM.data[5] = A_UNITE(YMFAAMM,mode12,12,ZMFAAMM);
DNFAAMM = BNFAAMM ;
LMFAAMM.data[6] = A_UNITE(CNFAAMM,mode7,7,DNFAAMM);
 /* line 161: */
LMFAAMM.data[7] = A_UNITE(ENFAAMM,mode7,7,IAAAAMM_mm_date);
GNFAAMM = ' ' ;
LMFAAMM.data[8] = A_UNITE(FNFAAMM,mode6,6,GNFAAMM);
LMFAAMM.data[9] = A_UNITE(HNFAAMM,mode7,7,LAAAAMM_mm_string);
JNFAAMM.fn.fn_global = LRAAOSL_newline;
JNFAAMM.nonlocals = A68_NIL;
LMFAAMM.data[10] = A_UNITE(INFAAMM,mode12,12,JNFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KNFAAMM,LMFAAMM,11,A68_52 ));
 /* line 162: */
NNFAAMM.fn.fn_global = LRAAOSL_newline;
NNFAAMM.nonlocals = A68_NIL;
LNFAAMM.data[0] = A_UNITE(MNFAAMM,mode12,12,NNFAAMM);
RNFAAMM = PNFAAMM ;
LNFAAMM.data[1] = A_UNITE(QNFAAMM,mode7,7,RNFAAMM);
LNFAAMM.data[2] = A_UNITE(SNFAAMM,mode7,7,ZJAAAMM_database_name);
 /* line 163: */
LNFAAMM.data[3] = A_UNITE(TNFAAMM,mode7,7,XHAAAMM_mmd_type);
switch ( CMFAAMM_db_state )
{ 
case 1: 
 /* line 164: */
XNFAAMM = VNFAAMM ;
LNFAAMM.data[4] = A_UNITE(WNFAAMM,mode7,7,XNFAAMM);
break;
case 2: 
 /* line 166: */
BOFAAMM = ZNFAAMM ;
LNFAAMM.data[4] = A_UNITE(AOFAAMM,mode7,7,BOFAAMM);
break;
case 3: 
 /* line 167: */
FOFAAMM = DOFAAMM ;
LNFAAMM.data[4] = A_UNITE(EOFAAMM,mode7,7,FOFAAMM);
break;
default: 
JOFAAMM = HOFAAMM ;
LNFAAMM.data[4] = A_UNITE(IOFAAMM,mode7,7,JOFAAMM);
break;
} 
LOFAAMM.fn.fn_global = LRAAOSL_newline;
LOFAAMM.nonlocals = A68_NIL;
LNFAAMM.data[5] = A_UNITE(KOFAAMM,mode12,12,LOFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(MOFAAMM,LNFAAMM,6,A68_52 ));
 /* line 168: */
 /* line 169: */
if ( (AKAAAMM_detach_name.upb>0) )
{ 
ROFAAMM = POFAAMM ;
NOFAAMM.data[0] = A_UNITE(QOFAAMM,mode7,7,ROFAAMM);
NOFAAMM.data[1] = A_UNITE(SOFAAMM,mode7,7,AKAAAMM_detach_name);
UOFAAMM.fn.fn_global = LRAAOSL_newline;
UOFAAMM.nonlocals = A68_NIL;
NOFAAMM.data[2] = A_UNITE(TOFAAMM,mode12,12,UOFAAMM);
 /* line 170: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VOFAAMM,NOFAAMM,3,A68_52 ));
} 
 /* line 171: */
BQDAAMM_show_symbol_class(ZOFAAMM, YOFAAMM);
 /* line 173: */
BPFAAMM.fn.fn_global = LRAAOSL_newline;
BPFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(CPFAAMM,A_UNITE(APFAAMM,mode12,12,BPFAAMM),A68_52 ));
 /* line 174: */
BQDAAMM_show_symbol_class(GPFAAMM, FPFAAMM);
 /* line 176: */
IPFAAMM.fn.fn_global = LRAAOSL_newline;
IPFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(JPFAAMM,A_UNITE(HPFAAMM,mode12,12,IPFAAMM),A68_52 ));
 /* line 177: */
 /* line 178: */
MPFAAMM = RKAAAMM_standard_symbols.upb -1;
LPFAAMM = RKAAAMM_standard_symbols.data;
for (;MPFAAMM-- >= 0;
(LPFAAMM++
) )
{
KPFAAMM_var = *LPFAAMM;
 /* line 179: */
NPFAAMM.data[0] = A_UNITE(OPFAAMM,mode7,7,JMFAAMM_heading);
QPFAAMM = (*(&((*KPFAAMM_var)->Name))) ;
NPFAAMM.data[1] = A_UNITE(PPFAAMM,mode7,7,QPFAAMM);
UPFAAMM = SPFAAMM ;
NPFAAMM.data[2] = A_UNITE(TPFAAMM,mode7,7,UPFAAMM);
WPFAAMM = (*(&((*KPFAAMM_var)->Text))) ;
NPFAAMM.data[3] = A_UNITE(VPFAAMM,mode7,7,WPFAAMM);
YPFAAMM.fn.fn_global = LRAAOSL_newline;
YPFAAMM.nonlocals = A68_NIL;
NPFAAMM.data[4] = A_UNITE(XPFAAMM,mode12,12,YPFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZPFAAMM,NPFAAMM,5,A68_52 ));
 /* line 180: */
 /* line 181: */
VTCAOST_clear(A_UNITE(AQFAAMM,mode1,1,JMFAAMM_heading));
}
 /* line 183: */
CQFAAMM.fn.fn_global = LRAAOSL_newline;
CQFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(DQFAAMM,A_UNITE(BQFAAMM,mode12,12,CQFAAMM),A68_52 ));
 /* line 184: */
BQDAAMM_show_symbol_class(HQFAAMM, GQFAAMM);
 /* line 185: */
BQDAAMM_show_symbol_class(LQFAAMM, KQFAAMM);
 /* line 186: */
BQDAAMM_show_symbol_class(PQFAAMM, OQFAAMM);
 /* line 187: */
 /* line 188: */
if ( SIAAAMM_diagnose )
{ 
SQFAAMM.fn.fn_global = LRAAOSL_newline;
SQFAAMM.nonlocals = A68_NIL;
QQFAAMM.data[0] = A_UNITE(RQFAAMM,mode12,12,SQFAAMM);
WQFAAMM = UQFAAMM ;
QQFAAMM.data[1] = A_UNITE(VQFAAMM,mode7,7,WQFAAMM);
YQFAAMM.fn.fn_global = LRAAOSL_newline;
YQFAAMM.nonlocals = A68_NIL;
QQFAAMM.data[2] = A_UNITE(XQFAAMM,mode12,12,YQFAAMM);
 /* line 189: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZQFAAMM,QQFAAMM,3,A68_52 ));
} 
 /* line 190: */
 /* line 191: */
/*SKIP*/;
} 
A_PROC_EXIT(showenviron_action);
return;
} 
#undef NL

A_STATIC A68_VOID  CRFAAMM_showcompile_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(showcompile_action);
 /* line 194: */
 /* line 195: */
 /* line 196: */
HKDAAMM_list_compiles(KEAAOST_screen, ERFAAMM, Msg);
A_PROC_EXIT(showcompile_action);
return;
} 
#undef NL

A_STATIC A68_VOID  HRFAAMM_showlink_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(showlink_action);
 /* line 199: */
 /* line 200: */
 /* line 201: */
IMDAAMM_list_links(KEAAOST_screen, JRFAAMM);
A_PROC_EXIT(showlink_action);
return;
} 
#undef NL

A_STATIC A68_VOID  MRFAAMM_showpending_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(showpending_action);
 /* line 204: */
 /* line 205: */
{ 
HKDAAMM_list_compiles(KEAAOST_screen, ORFAAMM, Msg);
 /* line 206: */
 /* line 207: */
IMDAAMM_list_links(KEAAOST_screen, QRFAAMM);
} 
A_PROC_EXIT(showpending_action);
return;
} 
#undef NL

A_STATIC A68_VOID  TRFAAMM_showsymbol_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_BOOL  URFAAMM_found;
A68_276  WRFAAMM_show_action;   /* proc value of non-global proc */
A68_VC  TSFAAMM_name;
A68_176 * USFAAMM_p;
A68_INT  VSFAAMM;  /* forall loop counter */
A68_VC  WSFAAMM;  /* avoid structure result */
A68_342  XSFAAMM;  /* collateral clause result */
A68_52  ATFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BTFAAMM;  /* YIELD */
A68_52  CTFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  FTFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GTFAAMM;  /* YIELD */
A68_52  HTFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ITFAAMM;  /* procedure value */
A68_85  JTFAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(showsymbol_action);
 /* line 210: */
 /* line 211: */
{ 
URFAAMM_found = A68_FALSE;
 /* line 213: */
A_CLOSURE( WRFAAMM_show_action, XRFAAMM_show_action, YRFAAMM_show_action );
(( YRFAAMM_show_action * ) ( WRFAAMM_show_action.nonlocals )) -> URFAAMM_found = (&URFAAMM_found);
 /* line 222: */
 /* line 223: */
if ( RPEAAMM_are_all_required(QSFAAMM, Param_values, Msg) )
{ 
 /* line 224: */
 /* line 225: */
ALAAAMM_scansymbols(SSFAAMM, WRFAAMM_show_action);
} 
else
{ 
 /* line 227: */
 /* line 228: */
VSFAAMM = Param_values.upb -1;
USFAAMM_p = Param_values.data;
for (;VSFAAMM-- >= 0;
(USFAAMM_p++
) )
{
 /* line 229: */
QMFAOST_get_string( (*USFAAMM_p), Msg, &WSFAAMM );
TSFAAMM_name = WSFAAMM;
 /* line 230: */
ALAAAMM_scansymbols(TSFAAMM_name, WRFAAMM_show_action);
 /* line 231: */
 /* line 232: */
if ( !URFAAMM_found )
{ 
BTFAAMM = ZSFAAMM ;
XSFAAMM.data[0] = A_UNITE(ATFAAMM,mode7,7,BTFAAMM);
XSFAAMM.data[1] = A_UNITE(CTFAAMM,mode7,7,TSFAAMM_name);
GTFAAMM = ETFAAMM ;
XSFAAMM.data[2] = A_UNITE(FTFAAMM,mode7,7,GTFAAMM);
ITFAAMM.fn.fn_global = LRAAOSL_newline;
ITFAAMM.nonlocals = A68_NIL;
XSFAAMM.data[3] = A_UNITE(HTFAAMM,mode12,12,ITFAAMM);
 /* line 233: */
 /* line 234: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(JTFAAMM,XSFAAMM,4,A68_52 ));
} 
}
 /* line 235: */
 /* line 236: */
} 
} 
A_PROC_EXIT(showsymbol_action);
return;
} 
#undef NL

A_STATIC A68_VOID  MTFAAMM_showversion_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(showversion_action);
 /* line 239: */
 /* line 240: */
 /* line 241: */
BODAAMM_list_attributes(KEAAOST_screen, WPAAAMM_version_attribute);
A_PROC_EXIT(showversion_action);
return;
} 
#undef NL

A_STATIC A68_VOID  PTFAAMM_showmodule_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_BOOL  STFAAMM_all;
A68_291  VTFAAMM_show_module;   /* proc value of non-global proc */
A68_340  GBGAAMM;  /* collateral clause result */
A68_52  JBGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KBGAAMM;  /* YIELD */
A68_52  LBGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MBGAAMM;  /* procedure value */
A68_85  NBGAAMM;  /* OPERATORS - istruct -> vector */
A68_270 * OBGAAMM_ml;
A68_VC  PBGAAMM_mn;
A68_176 * QBGAAMM_p;
A68_INT  RBGAAMM;  /* forall loop counter */
A68_VC  SBGAAMM;  /* avoid structure result */
A68_340  TBGAAMM;  /* collateral clause result */
A68_VC  UBGAAMM;  /* avoid structure result */
A68_52  VBGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  WBGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  XBGAAMM;  /* procedure value */
A68_85  YBGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(showmodule_action);
 /* line 244: */
 /* line 245: */
{ 
STFAAMM_all = RPEAAMM_are_all_required(RTFAAMM, Param_values, Msg);
 /* line 247: */
A_CLOSURE( VTFAAMM_show_module, WTFAAMM_show_module, XTFAAMM_show_module );
(( XTFAAMM_show_module * ) ( VTFAAMM_show_module.nonlocals )) -> STFAAMM_all = STFAAMM_all;
(( XTFAAMM_show_module * ) ( VTFAAMM_show_module.nonlocals )) -> Msg = Msg;
 /* line 352: */
 /* line 353: */
if ( (WIAAAMM_modules==KBAAAMM_nilmodulelist) )
{ 
KBGAAMM = IBGAAMM ;
GBGAAMM.data[0] = A_UNITE(JBGAAMM,mode7,7,KBGAAMM);
MBGAAMM.fn.fn_global = LRAAOSL_newline;
MBGAAMM.nonlocals = A68_NIL;
GBGAAMM.data[1] = A_UNITE(LBGAAMM,mode12,12,MBGAAMM);
 /* line 354: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NBGAAMM,GBGAAMM,2,A68_52 ));
} 
else
{ 
 /* line 355: */
if ( STFAAMM_all )
{ 
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 356: */
 /* line 357: */
 /* line 358: */
SBBAAMM_scanmodules(WIAAAMM_modules, VTFAAMM_show_module);
} 
else
{ 
 /* line 359: */
 /* line 361: */
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 362: */
 /* line 363: */
RBGAAMM = Param_values.upb -1;
QBGAAMM_p = Param_values.data;
for (;RBGAAMM-- >= 0;
(QBGAAMM_p++
) )
{
 /* line 364: */
JLFAOST_get_name( (*QBGAAMM_p), Msg, &SBGAAMM );
PBGAAMM_mn = SBGAAMM;
 /* line 365: */
UWAAAMM_set_lowercase(PBGAAMM_mn);
 /* line 366: */
OBGAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, PBGAAMM_mn);
 /* line 367: */
 /* line 368: */
if ( (OBGAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
SZAAAMM_mnot_found( PBGAAMM_mn, &UBGAAMM );
TBGAAMM.data[0] = A_UNITE(VBGAAMM,mode7,7,UBGAAMM);
XBGAAMM.fn.fn_global = LRAAOSL_newline;
XBGAAMM.nonlocals = A68_NIL;
TBGAAMM.data[1] = A_UNITE(WBGAAMM,mode12,12,XBGAAMM);
 /* line 369: */
 /* line 370: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YBGAAMM,TBGAAMM,2,A68_52 ));
} 
else
{ 
 /* line 371: */
 /* line 372: */
A_CALLPROC(VTFAAMM_show_module,((*(&(OBGAAMM_ml->Module))), (*(&(OBGAAMM_ml->Star)))),((*(&(OBGAAMM_ml->Module))), (*(&(OBGAAMM_ml->Star))),(VTFAAMM_show_module).nonlocals));
} 
}
 /* line 373: */
 /* line 374: */
} 
} 
} 
A_PROC_EXIT(showmodule_action);
return;
} 
#undef NL

A_STATIC A68_VOID  BCGAAMM_compile_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(compile_action);
 /* line 377: */
 /* line 378: */
{ 
IUEAAMM_prepare_compile(DCGAAMM, Param_values, RDAAAMM_on_string, Msg);
 /* line 379: */
 /* line 380: */
YXEAAMM_link_programs(WIAAAMM_modules, Msg);
} 
A_PROC_EXIT(compile_action);
return;
} 
#undef NL

A_STATIC A68_VOID  GCGAAMM_cc_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(cc_action);
 /* line 383: */
 /* line 384: */
{ 
IUEAAMM_prepare_compile(ICGAAMM, Param_values, JEAAAMM_cc_string, Msg);
 /* line 385: */
 /* line 386: */
YXEAAMM_link_programs(WIAAAMM_modules, Msg);
} 
A_PROC_EXIT(cc_action);
return;
} 
#undef NL

A_STATIC A68_VOID  LCGAAMM_translate_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(translate_action);
 /* line 389: */
 /* line 390: */
 /* line 391: */
IUEAAMM_prepare_compile(NCGAAMM, Param_values, SEAAAMM_tr_string, Msg);
A_PROC_EXIT(translate_action);
return;
} 
#undef NL

A_STATIC A68_VOID  QCGAAMM_link_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(link_action);
 /* line 394: */
 /* line 395: */
 /* line 396: */
LQEAAMM_prepare_link(Param_values, Msg);
A_PROC_EXIT(link_action);
return;
} 
#undef NL

A_STATIC A68_VOID  TCGAAMM_go_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  UCGAAMM;  /* YIELD */
A68_VC  VCGAAMM;  /* clause result */
A68_INT  WCGAAMM;  /* YIELD */
A68_VC  XCGAAMM;  /* avoid structure result */
A68_VC  YCGAAMM_node;
A_PROC_ENTRY(go_action);
 /* line 399: */
 /* line 400: */
{ 
 /* line 401: */
UCGAAMM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Param_values,UCGAAMM)))) )
{ 
 /* line 402: */
 /* line 404: */
WCGAAMM = 1 ;
JLFAOST_get_name( (*(&A_VINDEX(Param_values,WCGAAMM))), Msg, &XCGAAMM );
VCGAAMM = XCGAAMM;
} 
else
{ 
VCGAAMM = BCAAAMM_blankname;
} 
YCGAAMM_node = VCGAAMM;
 /* line 406: */
 /* line 407: */
ZHFAAMM_obey_go_action(YCGAAMM_node, GHAAAMM_flagon(NKAAAMM_notify_at_go), Msg);
} 
A_PROC_EXIT(go_action);
return;
} 
#undef NL

A_STATIC A68_VOID  BDGAAMM_after_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(after_action);
 /* line 410: */
 /* line 411: */
 /* line 412: */
QYEAAMM_do_symbol_move(Param_values, A68_FALSE, Msg);
A_PROC_EXIT(after_action);
return;
} 
#undef NL

A_STATIC A68_VOID  EDGAAMM_before_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(before_action);
 /* line 415: */
 /* line 416: */
 /* line 417: */
QYEAAMM_do_symbol_move(Param_values, A68_TRUE, Msg);
A_PROC_EXIT(before_action);
return;
} 
#undef NL

A_STATIC A68_VOID  HDGAAMM_define_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  IDGAAMM;  /* YIELD */
A68_VC  JDGAAMM;  /* avoid structure result */
A68_VC  KDGAAMM_name;
A68_INT  LDGAAMM;  /* YIELD */
A68_VC  MDGAAMM;  /* avoid structure result */
A68_275 * NDGAAMM_sym;
A68_333  ODGAAMM;  /* collateral clause result */
A68_52  RDGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SDGAAMM;  /* YIELD */
A68_52  TDGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  UDGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  VDGAAMM;  /* procedure value */
A68_85  WDGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(define_action);
 /* line 420: */
 /* line 421: */
{ 
IDGAAMM = 1 ;
QMFAOST_get_string( (*(&A_VINDEX(Param_values,IDGAAMM))), Msg, &JDGAAMM );
KDGAAMM_name = JDGAAMM;
 /* line 422: */
 /* line 423: */
LDGAAMM = 2 ;
FPFAOST_get_text( (*(&A_VINDEX(Param_values,LDGAAMM))), Msg, &MDGAAMM );
NDGAAMM_sym = VMAAAMM_define_symbol(KDGAAMM_name, MDGAAMM, (A68_BITS )(AJAAAMM_mmd_tag|ZIAAAMM_changed_tag));
 /* line 425: */
 /* line 426: */
if ( (NDGAAMM_sym==JBAAAMM_nilsymbol) )
{ 
SDGAAMM = QDGAAMM ;
ODGAAMM.data[0] = A_UNITE(RDGAAMM,mode7,7,SDGAAMM);
ODGAAMM.data[1] = A_UNITE(TDGAAMM,mode7,7,KDGAAMM_name);
VDGAAMM.fn.fn_global = LRAAOSL_newline;
VDGAAMM.nonlocals = A68_NIL;
ODGAAMM.data[2] = A_UNITE(UDGAAMM,mode12,12,VDGAAMM);
 /* line 427: */
 /* line 428: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WDGAAMM,ODGAAMM,3,A68_52 ));
} 
else
{ 
 /* line 429: */
 /* line 430: */
GMAAAMM_mark_action_symbol(NDGAAMM_sym);
} 
} 
A_PROC_EXIT(define_action);
return;
} 
#undef NL

A_STATIC A68_VOID  ZDGAAMM_undefine_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_VC  AEGAAMM_name;
A68_176 * BEGAAMM_p;
A68_INT  CEGAAMM;  /* forall loop counter */
A68_VC  DEGAAMM;  /* avoid structure result */
A68_342  EEGAAMM;  /* collateral clause result */
A68_52  HEGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IEGAAMM;  /* YIELD */
A68_52  JEGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  MEGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NEGAAMM;  /* YIELD */
A68_52  OEGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PEGAAMM;  /* procedure value */
A68_85  QEGAAMM;  /* OPERATORS - istruct -> vector */
A68_342  REGAAMM;  /* collateral clause result */
A68_52  UEGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VEGAAMM;  /* YIELD */
A68_52  WEGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ZEGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AFGAAMM;  /* YIELD */
A68_52  BFGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CFGAAMM;  /* procedure value */
A68_85  DFGAAMM;  /* OPERATORS - istruct -> vector */
A68_342  EFGAAMM;  /* collateral clause result */
A68_52  HFGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IFGAAMM;  /* YIELD */
A68_52  JFGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  MFGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NFGAAMM;  /* YIELD */
A68_52  OFGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PFGAAMM;  /* procedure value */
A68_85  QFGAAMM;  /* OPERATORS - istruct -> vector */
A68_342  RFGAAMM;  /* collateral clause result */
A68_52  UFGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VFGAAMM;  /* YIELD */
A68_52  WFGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ZFGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AGGAAMM;  /* YIELD */
A68_52  BGGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CGGAAMM;  /* procedure value */
A68_85  DGGAAMM;  /* OPERATORS - istruct -> vector */
A68_46  GGGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(undefine_action);
 /* line 433: */
 /* line 434: */
{ 
 /* line 436: */
 /* line 437: */
CEGAAMM = Param_values.upb -1;
BEGAAMM_p = Param_values.data;
for (;CEGAAMM-- >= 0;
(BEGAAMM_p++
) )
{
 /* line 438: */
QMFAOST_get_string( (*BEGAAMM_p), Msg, &DEGAAMM );
AEGAAMM_name = DEGAAMM;
 /* line 439: */
 /* line 441: */
switch ( KNAAAMM_undefine_symbol(AEGAAMM_name) )
{ 
case 1: 
IEGAAMM = GEGAAMM ;
EEGAAMM.data[0] = A_UNITE(HEGAAMM,mode7,7,IEGAAMM);
EEGAAMM.data[1] = A_UNITE(JEGAAMM,mode7,7,AEGAAMM_name);
NEGAAMM = LEGAAMM ;
EEGAAMM.data[2] = A_UNITE(MEGAAMM,mode7,7,NEGAAMM);
PEGAAMM.fn.fn_global = LRAAOSL_newline;
PEGAAMM.nonlocals = A68_NIL;
EEGAAMM.data[3] = A_UNITE(OEGAAMM,mode12,12,PEGAAMM);
 /* line 443: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QEGAAMM,EEGAAMM,4,A68_52 ));
break;
case 2: 
VEGAAMM = TEGAAMM ;
REGAAMM.data[0] = A_UNITE(UEGAAMM,mode7,7,VEGAAMM);
REGAAMM.data[1] = A_UNITE(WEGAAMM,mode7,7,AEGAAMM_name);
AFGAAMM = YEGAAMM ;
REGAAMM.data[2] = A_UNITE(ZEGAAMM,mode7,7,AFGAAMM);
CFGAAMM.fn.fn_global = LRAAOSL_newline;
CFGAAMM.nonlocals = A68_NIL;
REGAAMM.data[3] = A_UNITE(BFGAAMM,mode12,12,CFGAAMM);
 /* line 445: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DFGAAMM,REGAAMM,4,A68_52 ));
break;
case 3: 
IFGAAMM = GFGAAMM ;
EFGAAMM.data[0] = A_UNITE(HFGAAMM,mode7,7,IFGAAMM);
 /* line 446: */
EFGAAMM.data[1] = A_UNITE(JFGAAMM,mode7,7,AEGAAMM_name);
NFGAAMM = LFGAAMM ;
EFGAAMM.data[2] = A_UNITE(MFGAAMM,mode7,7,NFGAAMM);
PFGAAMM.fn.fn_global = LRAAOSL_newline;
PFGAAMM.nonlocals = A68_NIL;
EFGAAMM.data[3] = A_UNITE(OFGAAMM,mode12,12,PFGAAMM);
 /* line 448: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QFGAAMM,EFGAAMM,4,A68_52 ));
break;
case 4: 
VFGAAMM = TFGAAMM ;
RFGAAMM.data[0] = A_UNITE(UFGAAMM,mode7,7,VFGAAMM);
 /* line 449: */
RFGAAMM.data[1] = A_UNITE(WFGAAMM,mode7,7,AEGAAMM_name);
 /* line 450: */
AGGAAMM = YFGAAMM ;
RFGAAMM.data[2] = A_UNITE(ZFGAAMM,mode7,7,AGGAAMM);
CGGAAMM.fn.fn_global = LRAAOSL_newline;
CGGAAMM.nonlocals = A68_NIL;
RFGAAMM.data[3] = A_UNITE(BGGAAMM,mode12,12,CGGAAMM);
 /* line 451: */
 /* line 452: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DGGAAMM,RFGAAMM,4,A68_52 ));
break;
default: 
 /* line 453: */
 /* line 454: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(GGGAAMM,FGGAAMM,A68_VC )),(SHAAOSI_system, A_HVEC(GGGAAMM,FGGAAMM,A68_VC ),(Msg).nonlocals));
break;
} 
}
 /* line 455: */
} 
A_PROC_EXIT(undefine_action);
return;
} 
#undef NL

A_STATIC A68_VOID  JGGAAMM_save_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  KGGAAMM_num_params;
A68_INT  LGGAAMM;  /* YIELD */
A68_VC  MGGAAMM;  /* clause result */
A68_INT  NGGAAMM;  /* YIELD */
A68_120  OGGAAMM;  /* avoid structure result */
A68_VC  PGGAAMM_dbname;
A68_VC  QGGAAMM;  /* clause result */
A68_INT  RGGAAMM;  /* YIELD */
A68_120  SGGAAMM;  /* avoid structure result */
A68_VC  TGGAAMM_dtname;
A_PROC_ENTRY(save_action);
 /* line 458: */
 /* line 459: */
{ 
KGGAAMM_num_params = Param_values.upb;
 /* line 460: */
 /* line 462: */
LGGAAMM = 1 ;
if ( SNFAOST_is_filename((*(&A_VINDEX(Param_values,LGGAAMM)))) )
{ 
 /* line 463: */
 /* line 465: */
NGGAAMM = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Param_values,NGGAAMM))), XHAAAMM_mmd_type, Msg, &OGGAAMM );
MGGAAMM = OGGAAMM.Filename;
} 
else
{ 
MGGAAMM = ZJAAAMM_database_name;
} 
PGGAAMM_dbname = MGGAAMM;
 /* line 466: */
 /* line 468: */
if ( (KGGAAMM_num_params>1) )
{ 
 /* line 469: */
 /* line 471: */
RGGAAMM = 2 ;
XNFAOST_get_filename( (*(&A_VINDEX(Param_values,RGGAAMM))), AIAAAMM_aux_type, Msg, &SGGAAMM );
QGGAAMM = SGGAAMM.Filename;
} 
else
{ 
QGGAAMM = AKAAAMM_detach_name;
} 
TGGAAMM_dtname = QGGAAMM;
 /* line 473: */
 /* line 474: */
VACAAMM_save_database(PGGAAMM_dbname, TGGAAMM_dtname, CDBAAMM_save_all, ZLBAOSI_global_msg);
} 
A_PROC_EXIT(save_action);
return;
} 
#undef NL

A_STATIC A68_VOID  WGGAAMM_removemodule_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_340  ZGGAAMM;  /* collateral clause result */
A68_52  CHGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DHGAAMM;  /* YIELD */
A68_52  EHGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  FHGAAMM;  /* procedure value */
A68_85  GHGAAMM;  /* OPERATORS - istruct -> vector */
A68_271 * HHGAAMM_m;
A68_BOOL  WHGAAMM_have_module;
A68_VC  XHGAAMM_name;
A68_270 * YHGAAMM_ml;
A68_270 ** ZHGAAMM_mltail;
A68_176 * AIGAAMM_p1;
A68_INT  BIGAAMM;  /* forall loop counter */
A68_VC  CIGAAMM;  /* avoid structure result */
A68_340  DIGAAMM;  /* collateral clause result */
A68_VC  EIGAAMM;  /* avoid structure result */
A68_52  FIGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  GIGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  HIGAAMM;  /* procedure value */
A68_85  IIGAAMM;  /* OPERATORS - istruct -> vector */
A68_342  JIGAAMM;  /* collateral clause result */
A68_52  MIGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NIGAAMM;  /* YIELD */
A68_52  OIGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  RIGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SIGAAMM;  /* YIELD */
A68_52  TIGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UIGAAMM;  /* procedure value */
A68_85  VIGAAMM;  /* OPERATORS - istruct -> vector */
A68_INT * WIGAAMM;  /* YIELD */
A68_340  XIGAAMM;  /* collateral clause result */
A68_52  AJGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BJGAAMM;  /* YIELD */
A68_52  CJGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  DJGAAMM;  /* procedure value */
A68_85  EJGAAMM;  /* OPERATORS - istruct -> vector */
A68_291  FJGAAMM;  /* procedure value */
A68_342  IJGAAMM;  /* collateral clause result */
A68_52  LJGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MJGAAMM;  /* YIELD */
A68_52  NJGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OJGAAMM;  /* YIELD */
A68_52  RJGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SJGAAMM;  /* YIELD */
A68_52  TJGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UJGAAMM;  /* procedure value */
A68_85  VJGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(removemodule_action);
 /* line 477: */
 /* line 478: */
{ 
 /* line 479: */
if ( RPEAAMM_are_all_required(YGGAAMM, Param_values, Msg) )
{ 
WIAAAMM_modules = KBAAAMM_nilmodulelist;
 /* line 480: */
TIAAAMM_attribute_modified = A68_TRUE;
 /* line 481: */
 /* line 482: */
DHGAAMM = BHGAAMM ;
ZGGAAMM.data[0] = A_UNITE(CHGAAMM,mode7,7,DHGAAMM);
FHGAAMM.fn.fn_global = LRAAOSL_newline;
FHGAAMM.nonlocals = A68_NIL;
ZGGAAMM.data[1] = A_UNITE(EHGAAMM,mode12,12,FHGAAMM);
 /* line 483: */
 /* line 484: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GHGAAMM,ZGGAAMM,2,A68_52 ));
} 
else
{ 
 /* line 486: */
 /* line 494: */
WHGAAMM_have_module = A68_FALSE;
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 499: */
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 500: */
 /* line 501: */
BIGAAMM = Param_values.upb -1;
AIGAAMM_p1 = Param_values.data;
for (;BIGAAMM-- >= 0;
(AIGAAMM_p1++
) )
{
 /* line 502: */
JLFAOST_get_name( (*AIGAAMM_p1), Msg, &CIGAAMM );
XHGAAMM_name = CIGAAMM;
 /* line 503: */
UWAAAMM_set_lowercase(XHGAAMM_name);
 /* line 504: */
YHGAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, XHGAAMM_name);
 /* line 505: */
 /* line 506: */
if ( (YHGAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
SZAAAMM_mnot_found( XHGAAMM_name, &EIGAAMM );
DIGAAMM.data[0] = A_UNITE(FIGAAMM,mode7,7,EIGAAMM);
HIGAAMM.fn.fn_global = LRAAOSL_newline;
HIGAAMM.nonlocals = A68_NIL;
DIGAAMM.data[1] = A_UNITE(GIGAAMM,mode12,12,HIGAAMM);
 /* line 507: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(IIGAAMM,DIGAAMM,2,A68_52 ));
} 
else
{ 
 /* line 508: */
if ( ((*(&((*(&(YHGAAMM_ml->Module)))->Usedby)))!=KBAAAMM_nilmodulelist) )
{ 
NIGAAMM = LIGAAMM ;
JIGAAMM.data[0] = A_UNITE(MIGAAMM,mode7,7,NIGAAMM);
 /* line 509: */
JIGAAMM.data[1] = A_UNITE(OIGAAMM,mode7,7,XHGAAMM_name);
 /* line 510: */
SIGAAMM = QIGAAMM ;
JIGAAMM.data[2] = A_UNITE(RIGAAMM,mode7,7,SIGAAMM);
UIGAAMM.fn.fn_global = LRAAOSL_newline;
UIGAAMM.nonlocals = A68_NIL;
JIGAAMM.data[3] = A_UNITE(TIGAAMM,mode12,12,UIGAAMM);
 /* line 511: */
 /* line 512: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VIGAAMM,JIGAAMM,4,A68_52 ));
} 
else
{ 
WHGAAMM_have_module = A68_TRUE;
 /* line 513: */
 /* line 514: */
 /* line 515: */
WIGAAMM = (&((*(&(YHGAAMM_ml->Module)))->Marker)) ;
(*WIGAAMM) = 1;
} 
} 
}
 /* line 516: */
 /* line 517: */
if ( WHGAAMM_have_module )
{ 
 /* line 518: */
BJGAAMM = ZIGAAMM ;
XIGAAMM.data[0] = A_UNITE(AJGAAMM,mode7,7,BJGAAMM);
DJGAAMM.fn.fn_global = LRAAOSL_newline;
DJGAAMM.nonlocals = A68_NIL;
XIGAAMM.data[1] = A_UNITE(CJGAAMM,mode12,12,DJGAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EJGAAMM,XIGAAMM,2,A68_52 ));
 /* line 519: */
FJGAAMM.fn.fn_global = KHGAAMM_list_action;
FJGAAMM.nonlocals = A68_NIL;
SBBAAMM_scanmodules(WIAAAMM_modules, FJGAAMM);
 /* line 520: */
 /* line 521: */
if ( JXAAAMM_query(HJGAAMM, DXAAAMM_default_yes, Msg) )
{ 
ZHGAAMM_mltail = (&WIAAAMM_modules);
 /* line 522: */
for ( ;; )
{ 
 /* line 523: */
 /* line 524: */
if ( !(((*ZHGAAMM_mltail)!=KBAAAMM_nilmodulelist)) ) break;
HHGAAMM_m = (*(&((*ZHGAAMM_mltail)->Module)));
 /* line 525: */
 /* line 526: */
if ( ((*(&(HHGAAMM_m->Marker)))!=1) )
{ 
 /* line 527: */
 /* line 528: */
ZHGAAMM_mltail = (&((*ZHGAAMM_mltail)->Rest));
} 
else
{ 
MJGAAMM = KJGAAMM ;
IJGAAMM.data[0] = A_UNITE(LJGAAMM,mode7,7,MJGAAMM);
 /* line 529: */
OJGAAMM = (*(&(HHGAAMM_m->Name))) ;
IJGAAMM.data[1] = A_UNITE(NJGAAMM,mode7,7,OJGAAMM);
 /* line 530: */
SJGAAMM = QJGAAMM ;
IJGAAMM.data[2] = A_UNITE(RJGAAMM,mode7,7,SJGAAMM);
UJGAAMM.fn.fn_global = LRAAOSL_newline;
UJGAAMM.nonlocals = A68_NIL;
IJGAAMM.data[3] = A_UNITE(TJGAAMM,mode12,12,UJGAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VJGAAMM,IJGAAMM,4,A68_52 ));
 /* line 531: */
(*ZHGAAMM_mltail) = (*(&((*ZHGAAMM_mltail)->Rest)));
 /* line 532: */
 /* line 533: */
 /* line 534: */
TIAAAMM_attribute_modified = A68_TRUE;
} 
}
 /* line 536: */
PTBAAMM_clear_usedby_lists(WIAAAMM_modules);
 /* line 537: */
XSBAAMM_set_usedby_lists(WIAAAMM_modules);
 /* line 538: */
 /* line 539: */
 /* line 540: */
 /* line 541: */
 /* line 542: */
KEBAAMM_set_modulenumbers();
} 
} 
} 
} 
A_PROC_EXIT(removemodule_action);
return;
} 
#undef NL

A_STATIC A68_VOID  YJGAAMM_removecompile_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_300  BKGAAMM;  /* procedure value */
A_PROC_ENTRY(removecompile_action);
 /* line 545: */
 /* line 546: */
 /* line 547: */
 /* line 548: */
BKGAAMM.fn.fn_global = ZRDAAMM_unmark_compile;
BKGAAMM.nonlocals = A68_NIL;
GVEAAMM_remove_attribute(AKGAAMM, Param_values, QPAAAMM_compile_attribute, BKGAAMM, Msg);
A_PROC_EXIT(removecompile_action);
return;
} 
#undef NL

A_STATIC A68_VOID  EKGAAMM_removelink_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_300  HKGAAMM;  /* procedure value */
A_PROC_ENTRY(removelink_action);
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 554: */
HKGAAMM.fn.fn_global = FSDAAMM_unmark_link;
HKGAAMM.nonlocals = A68_NIL;
GVEAAMM_remove_attribute(GKGAAMM, Param_values, RPAAAMM_link_attribute, HKGAAMM, Msg);
A_PROC_EXIT(removelink_action);
return;
} 
#undef NL

A_STATIC A68_VOID  KKGAAMM_removepending_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(removepending_action);
 /* line 557: */
 /* line 558: */
{ 
YJGAAMM_removecompile_action(Param_values, Msg);
 /* line 559: */
 /* line 560: */
EKGAAMM_removelink_action(Param_values, Msg);
} 
A_PROC_EXIT(removepending_action);
return;
} 
#undef NL

A_STATIC A68_VOID  NKGAAMM_removeversion_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_300  QKGAAMM;  /* procedure value */
A_PROC_ENTRY(removeversion_action);
 /* line 563: */
 /* line 564: */
 /* line 565: */
 /* line 566: */
QKGAAMM.fn.fn_global = VRDAAMM_unmark_attribute;
QKGAAMM.nonlocals = A68_NIL;
GVEAAMM_remove_attribute(PKGAAMM, Param_values, WPAAAMM_version_attribute, QKGAAMM, Msg);
A_PROC_EXIT(removeversion_action);
return;
} 
#undef NL

A_STATIC A68_VOID  TKGAAMM_detach_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  UKGAAMM;  /* YIELD */
A68_VC  VKGAAMM;  /* clause result */
A68_INT  WKGAAMM;  /* YIELD */
A68_VC  XKGAAMM;  /* avoid structure result */
A68_VC  YKGAAMM_name;
A68_340  ZKGAAMM;  /* collateral clause result */
A68_52  CLGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DLGAAMM;  /* YIELD */
A68_52  ELGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  FLGAAMM;  /* procedure value */
A68_85  GLGAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  HLGAAMM;  /* optbool result */
A68_333  ILGAAMM;  /* collateral clause result */
A68_52  LLGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MLGAAMM;  /* YIELD */
A68_52  NLGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  OLGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PLGAAMM;  /* procedure value */
A68_85  QLGAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  SLGAAMM;  /* clause result */
A68_333  ULGAAMM;  /* collateral clause result */
A68_52  XLGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YLGAAMM;  /* YIELD */
A68_52  ZLGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  AMGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  BMGAAMM;  /* procedure value */
A68_85  CMGAAMM;  /* OPERATORS - istruct -> vector */
A68_340  DMGAAMM;  /* collateral clause result */
A68_52  GMGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HMGAAMM;  /* YIELD */
A68_52  IMGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JMGAAMM;  /* procedure value */
A68_85  KMGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(detach_action);
 /* line 569: */
 /* line 570: */
{ 
 /* line 571: */
UKGAAMM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Param_values,UKGAAMM)))) )
{ 
 /* line 572: */
WKGAAMM = 1 ;
JLFAOST_get_name( (*(&A_VINDEX(Param_values,WKGAAMM))), Msg, &XKGAAMM );
VKGAAMM = XKGAAMM;
} 
else
{ 
 /* line 574: */
if ( (AKAAAMM_detach_name.upb!=0) )
{ 
 /* line 576: */
VKGAAMM = AKAAAMM_detach_name;
} 
else
{ 
VKGAAMM = ZJAAAMM_database_name;
} 
} 
YKGAAMM_name = VKGAAMM;
 /* line 578: */
if ( !VIAAAMM_case_sensitive )
{ 
UWAAAMM_set_lowercase(YKGAAMM_name);
} 
 /* line 579: */
 /* line 580: */
if ( A_VC_EQ(YKGAAMM_name,AKAAAMM_detach_name) )
{ 
 /* line 581: */
DLGAAMM = BLGAAMM ;
ZKGAAMM.data[0] = A_UNITE(CLGAAMM,mode7,7,DLGAAMM);
FLGAAMM.fn.fn_global = LRAAOSL_newline;
FLGAAMM.nonlocals = A68_NIL;
ZKGAAMM.data[1] = A_UNITE(ELGAAMM,mode12,12,FLGAAMM);
 /* line 582: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GLGAAMM,ZKGAAMM,2,A68_52 ));
} 
else
{ 
 /* line 583: */
HLGAAMM = (AKAAAMM_detach_name.upb==0);
if ( ! HLGAAMM )
{{ 
MLGAAMM = KLGAAMM ;
ILGAAMM.data[0] = A_UNITE(LLGAAMM,mode7,7,MLGAAMM);
ILGAAMM.data[1] = A_UNITE(NLGAAMM,mode7,7,AKAAAMM_detach_name);
PLGAAMM.fn.fn_global = LRAAOSL_newline;
PLGAAMM.nonlocals = A68_NIL;
ILGAAMM.data[2] = A_UNITE(OLGAAMM,mode12,12,PLGAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QLGAAMM,ILGAAMM,3,A68_52 ));
 /* line 584: */
SLGAAMM = JXAAAMM_query(TLGAAMM, EXAAAMM_default_no, Msg);
} 
HLGAAMM = SLGAAMM;
}
 /* line 586: */
if ( HLGAAMM )
{ 
AKAAAMM_detach_name = YKGAAMM_name;
 /* line 587: */
YLGAAMM = WLGAAMM ;
ULGAAMM.data[0] = A_UNITE(XLGAAMM,mode7,7,YLGAAMM);
ULGAAMM.data[1] = A_UNITE(ZLGAAMM,mode7,7,AKAAAMM_detach_name);
BMGAAMM.fn.fn_global = LRAAOSL_newline;
BMGAAMM.nonlocals = A68_NIL;
ULGAAMM.data[2] = A_UNITE(AMGAAMM,mode12,12,BMGAAMM);
 /* line 588: */
 /* line 589: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CMGAAMM,ULGAAMM,3,A68_52 ));
} 
else
{ 
HMGAAMM = FMGAAMM ;
DMGAAMM.data[0] = A_UNITE(GMGAAMM,mode7,7,HMGAAMM);
JMGAAMM.fn.fn_global = LRAAOSL_newline;
JMGAAMM.nonlocals = A68_NIL;
DMGAAMM.data[1] = A_UNITE(IMGAAMM,mode12,12,JMGAAMM);
 /* line 590: */
 /* line 591: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KMGAAMM,DMGAAMM,2,A68_52 ));
} 
} 
} 
A_PROC_EXIT(detach_action);
return;
} 
#undef NL

A_STATIC A68_VOID  NMGAAMM_attach_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_340  OMGAAMM;  /* collateral clause result */
A68_52  RMGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SMGAAMM;  /* YIELD */
A68_52  TMGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UMGAAMM;  /* procedure value */
A68_85  VMGAAMM;  /* OPERATORS - istruct -> vector */
A68_340  WMGAAMM;  /* collateral clause result */
A68_52  ZMGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ANGAAMM;  /* YIELD */
A68_52  BNGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CNGAAMM;  /* procedure value */
A68_85  DNGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(attach_action);
 /* line 594: */
 /* line 595: */
{ 
 /* line 596: */
if ( (AKAAAMM_detach_name.upb==0) )
{ 
SMGAAMM = QMGAAMM ;
OMGAAMM.data[0] = A_UNITE(RMGAAMM,mode7,7,SMGAAMM);
UMGAAMM.fn.fn_global = LRAAOSL_newline;
UMGAAMM.nonlocals = A68_NIL;
OMGAAMM.data[1] = A_UNITE(TMGAAMM,mode12,12,UMGAAMM);
 /* line 597: */
 /* line 598: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VMGAAMM,OMGAAMM,2,A68_52 ));
} 
else
{ 
ANGAAMM = YMGAAMM ;
WMGAAMM.data[0] = A_UNITE(ZMGAAMM,mode7,7,ANGAAMM);
CNGAAMM.fn.fn_global = LRAAOSL_newline;
CNGAAMM.nonlocals = A68_NIL;
WMGAAMM.data[1] = A_UNITE(BNGAAMM,mode12,12,CNGAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DNGAAMM,WMGAAMM,2,A68_52 ));
 /* line 599: */
 /* line 600: */
 /* line 601: */
AKAAAMM_detach_name = BCAAAMM_blankname;
} 
} 
A_PROC_EXIT(attach_action);
return;
} 
#undef NL

A_STATIC A68_VOID  GNGAAMM_edit_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_VC  HNGAAMM_name;
A68_VC  INGAAMM_full_name;
A68_271 * JNGAAMM_m;
A68_BOOL  KNGAAMM;  /* optbool result */
A68_BOOL  NNGAAMM_show_failed_modules;
A68_BOOL  ONGAAMM_first_failed;
A68_291  RNGAAMM_try_failed;   /* proc value of non-global proc */
A68_291  AOGAAMM_show_failed;   /* proc value of non-global proc */
A68_INT  DPGAAMM;  /* YIELD */
A68_INT  EPGAAMM;  /* YIELD */
A68_VC  FPGAAMM;  /* avoid structure result */
A68_VC  GPGAAMM_p1;
A68_270 * HPGAAMM_ml;
A68_VC  IPGAAMM;  /* avoid structure result */
A68_VC  JPGAAMM_av;
A68_372  KPGAAMM;  /* collateral clause result */
A68_52  NPGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OPGAAMM;  /* YIELD */
A68_52  PPGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QPGAAMM;  /* YIELD */
A68_52  TPGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UPGAAMM;  /* YIELD */
A68_52  VPGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  WPGAAMM;  /* procedure value */
A68_52  ZPGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AQGAAMM;  /* YIELD */
A68_52  BQGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  CQGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  DQGAAMM;  /* procedure value */
A68_52  GQGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HQGAAMM;  /* YIELD */
A68_52  KQGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LQGAAMM;  /* YIELD */
A68_52  OQGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PQGAAMM;  /* YIELD */
A68_52  SQGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TQGAAMM;  /* YIELD */
A68_52  WQGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XQGAAMM;  /* YIELD */
A68_52  YQGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ZQGAAMM;  /* procedure value */
A68_85  ARGAAMM;  /* OPERATORS - istruct -> vector */
A68_302  BRGAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  CRGAAMM;  /* YIELD */
A68_302  DRGAAMM;  /* OPERATORS - mode -> union mode */
A68_302  ERGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FRGAAMM;  /* avoid structure result */
A68_46  GRGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  JRGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  KRGAAMM;  /* collateral clause result */
A68_52  LRGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MRGAAMM;  /* YIELD */
A68_52  NRGAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ORGAAMM;  /* YIELD */
A68_52  PRGAAMM;  /* OPERATORS - mode -> union mode */
A68_85  QRGAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  RRGAAMM;  /* avoid structure result */
A68_302  SRGAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  TRGAAMM;  /* YIELD */
A68_340  URGAAMM;  /* collateral clause result */
A68_52  XRGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YRGAAMM;  /* YIELD */
A68_52  ZRGAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  ASGAAMM;  /* clause result */
A68_85  BSGAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  CSGAAMM;  /* avoid structure result */
A68_VC  DSGAAMM;  /* avoid structure result */
A68_46  ESGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(edit_action);
 /* line 604: */
 /* line 605: */
{ 
HNGAAMM_name = BCAAAMM_blankname;
 /* line 606: */
 /* line 607: */
JNGAAMM_m = LBAAAMM_nilmodule;
 /* line 608: */
 /* line 609: */
KNGAAMM = ((*(&(KKAAAMM_edit_command->Text))).upb==0);
if ( ! KNGAAMM )
{KNGAAMM = A_VC_EQ((*(&(KKAAAMM_edit_command->Text))),MNGAAMM);
}
NNGAAMM_show_failed_modules = KNGAAMM;
 /* line 610: */
ONGAAMM_first_failed = A68_TRUE;
 /* line 612: */
A_CLOSURE( RNGAAMM_try_failed, SNGAAMM_try_failed, TNGAAMM_try_failed );
(( TNGAAMM_try_failed * ) ( RNGAAMM_try_failed.nonlocals )) -> JNGAAMM_m = (&JNGAAMM_m);
 /* line 626: */
A_CLOSURE( AOGAAMM_show_failed, BOGAAMM_show_failed, COGAAMM_show_failed );
(( COGAAMM_show_failed * ) ( AOGAAMM_show_failed.nonlocals )) -> ONGAAMM_first_failed = (&ONGAAMM_first_failed);
 /* line 652: */
 /* line 653: */
DPGAAMM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Param_values,DPGAAMM)))) )
{ 
EPGAAMM = 1 ;
JLFAOST_get_name( (*(&A_VINDEX(Param_values,EPGAAMM))), Msg, &FPGAAMM );
GPGAAMM_p1 = FPGAAMM;
 /* line 655: */
UWAAAMM_set_lowercase(GPGAAMM_p1);
 /* line 657: */
HPGAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, GPGAAMM_p1);
 /* line 659: */
 /* line 660: */
if ( (HPGAAMM_ml!=KBAAAMM_nilmodulelist) )
{ 
JNGAAMM_m = (*(&(HPGAAMM_ml->Module)));
 /* line 662: */
KTAAAMM_attribute_value( JNGAAMM_m, QPAAAMM_compile_attribute, &IPGAAMM );
JPGAAMM_av = IPGAAMM;
 /* line 664: */
HNGAAMM_name = (*(&(JNGAAMM_m->Filename)));
 /* line 665: */
 /* line 666: */
if ( NNGAAMM_show_failed_modules )
{ 
 /* line 667: */
OPGAAMM = MPGAAMM ;
KPGAAMM.data[0] = A_UNITE(NPGAAMM,mode7,7,OPGAAMM);
QPGAAMM = (*(&(JNGAAMM_m->Name))) ;
KPGAAMM.data[1] = A_UNITE(PPGAAMM,mode7,7,QPGAAMM);
UPGAAMM = SPGAAMM ;
KPGAAMM.data[2] = A_UNITE(TPGAAMM,mode7,7,UPGAAMM);
WPGAAMM.fn.fn_global = LRAAOSL_newline;
WPGAAMM.nonlocals = A68_NIL;
KPGAAMM.data[3] = A_UNITE(VPGAAMM,mode12,12,WPGAAMM);
AQGAAMM = YPGAAMM ;
KPGAAMM.data[4] = A_UNITE(ZPGAAMM,mode7,7,AQGAAMM);
 /* line 668: */
KPGAAMM.data[5] = A_UNITE(BQGAAMM,mode7,7,HNGAAMM_name);
DQGAAMM.fn.fn_global = LRAAOSL_newline;
DQGAAMM.nonlocals = A68_NIL;
KPGAAMM.data[6] = A_UNITE(CQGAAMM,mode12,12,DQGAAMM);
 /* line 669: */
HQGAAMM = FQGAAMM ;
KPGAAMM.data[7] = A_UNITE(GQGAAMM,mode7,7,HQGAAMM);
 /* line 671: */
if ( A_VC_EQ(JPGAAMM_av,BFAAAMM_failed_string) )
{ 
LQGAAMM = JQGAAMM ;
KPGAAMM.data[8] = A_UNITE(KQGAAMM,mode7,7,LQGAAMM);
} 
else
{ 
 /* line 673: */
if ( A_VC_EQ(JPGAAMM_av,KFAAAMM_trfailed_string) )
{ 
PQGAAMM = NQGAAMM ;
KPGAAMM.data[8] = A_UNITE(OQGAAMM,mode7,7,PQGAAMM);
} 
else
{ 
 /* line 675: */
if ( A_VC_EQ(JPGAAMM_av,TFAAAMM_ccfailed_string) )
{ 
 /* line 676: */
TQGAAMM = RQGAAMM ;
KPGAAMM.data[8] = A_UNITE(SQGAAMM,mode7,7,TQGAAMM);
} 
else
{ 
XQGAAMM = VQGAAMM ;
KPGAAMM.data[8] = A_UNITE(WQGAAMM,mode7,7,XQGAAMM);
} 
} 
} 
ZQGAAMM.fn.fn_global = LRAAOSL_newline;
ZQGAAMM.nonlocals = A68_NIL;
KPGAAMM.data[9] = A_UNITE(YQGAAMM,mode12,12,ZQGAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ARGAAMM,KPGAAMM,10,A68_52 ));
 /* line 677: */
 /* line 678: */
if ( A_VC_EQ(JPGAAMM_av,BFAAAMM_failed_string) )
{ 
 /* line 679: */
CRGAAMM = A68_TRUE ;
YTAAAMM_set_attribute(JNGAAMM_m, QPAAAMM_compile_attribute, A_UNITE(BRGAAMM,mode2,2,CRGAAMM));
} 
else
{ 
 /* line 680: */
if ( A_VC_EQ(JPGAAMM_av,KFAAAMM_trfailed_string) )
{ 
 /* line 681: */
YTAAAMM_set_attribute(JNGAAMM_m, QPAAAMM_compile_attribute, A_UNITE(DRGAAMM,mode1,1,SEAAAMM_tr_string));
} 
else
{ 
 /* line 682: */
if ( A_VC_EQ(JPGAAMM_av,TFAAAMM_ccfailed_string) )
{ 
 /* line 683: */
 /* line 684: */
 /* line 685: */
 /* line 686: */
YTAAAMM_set_attribute(JNGAAMM_m, QPAAAMM_compile_attribute, A_UNITE(ERGAAMM,mode1,1,JEAAAMM_cc_string));
} 
} 
} 
} 
} 
else
{ 
 /* line 687: */
 /* line 688: */
SZAAAMM_mnot_found( GPGAAMM_p1, &FRGAAMM );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(GRGAAMM,FRGAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(GRGAAMM,FRGAAMM,A68_VC ),(Msg).nonlocals));
} 
} 
else
{ 
 /* line 689: */
if ( NNGAAMM_show_failed_modules )
{ 
 /* line 690: */
 /* line 691: */
SBBAAMM_scanmodules(WIAAAMM_modules, AOGAAMM_show_failed);
} 
else
{ 
SBBAAMM_scanmodules(WIAAAMM_modules, RNGAAMM_try_failed);
 /* line 692: */
 /* line 693: */
if ( (JNGAAMM_m==LBAAAMM_nilmodule) )
{ 
 /* line 694: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(JRGAAMM,IRGAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(JRGAAMM,IRGAAMM,A68_VC ),(Msg).nonlocals));
} 
 /* line 695: */
 /* line 696: */
HNGAAMM_name = (*(&(JNGAAMM_m->Filename)));
} 
} 
 /* line 698: */
 /* line 700: */
if ( NNGAAMM_show_failed_modules )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 701: */
if ( AJDAAMM_check_module_file(JNGAAMM_m, OFDAAMM_first_directory, (&INGAAMM_full_name), Msg) )
{ 
MRGAAMM = (*(&(KKAAAMM_edit_command->Text))) ;
KRGAAMM.data[0] = A_UNITE(LRGAAMM,mode7,7,MRGAAMM);
 /* line 702: */
ORGAAMM = ' ' ;
KRGAAMM.data[1] = A_UNITE(NRGAAMM,mode6,6,ORGAAMM);
KRGAAMM.data[2] = A_UNITE(PRGAAMM,mode7,7,INGAAMM_full_name);
UJBAOSL_oneline( A_HISVEC(QRGAAMM,KRGAAMM,3,A68_52 ), &RRGAAMM );
VWCAAMM_insert_oscommand_item(RRGAAMM);
 /* line 703: */
 /* line 704: */
if ( KXCAAMM_obey_oscommand(Msg) )
{ 
 /* line 706: */
if ( ZUAAAMM_attribute_marked(JNGAAMM_m, QPAAAMM_compile_attribute) )
{ 
 /* line 707: */
TRGAAMM = A68_TRUE ;
YTAAAMM_set_attribute(JNGAAMM_m, QPAAAMM_compile_attribute, A_UNITE(SRGAAMM,mode2,2,TRGAAMM));
} 
else
{ 
YRGAAMM = WRGAAMM ;
URGAAMM.data[0] = A_UNITE(XRGAAMM,mode7,7,YRGAAMM);
URGAAMM.data[1] = A_UNITE(ZRGAAMM,mode7,7,HNGAAMM_name);
 /* line 708: */
 /* line 709: */
UJBAOSL_oneline( A_HISVEC(BSGAAMM,URGAAMM,2,A68_52 ), &CSGAAMM );
ASGAAMM = JXAAAMM_query(CSGAAMM, DXAAAMM_default_yes, Msg);
if ( ASGAAMM )
{ 
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 710: */
KPEAAMM_set_compile_mark(JNGAAMM_m, RDAAAMM_on_string, Msg);
 /* line 711: */
 /* line 712: */
 /* line 713: */
 /* line 714: */
 /* line 715: */
YXEAAMM_link_programs(WIAAAMM_modules, Msg);
} 
} 
} 
} 
else
{ 
 /* line 716: */
 /* line 717: */
YZAAAMM_fnot_found( HNGAAMM_name, &DSGAAMM );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ESGAAMM,DSGAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(ESGAAMM,DSGAAMM,A68_VC ),(Msg).nonlocals));
} 
} 
} 
A_PROC_EXIT(edit_action);
return;
} 
#undef NL

A_STATIC A68_VOID  HSGAAMM_simplespecchange_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(simplespecchange_action);
 /* line 720: */
 /* line 721: */
 /* line 722: */
QZEAAMM_do_specchange(Param_values, KZEAAMM_optimistic, Msg);
A_PROC_EXIT(simplespecchange_action);
return;
} 
#undef NL

A_STATIC A68_VOID  KSGAAMM_specchange_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(specchange_action);
 /* line 725: */
 /* line 726: */
 /* line 727: */
QZEAAMM_do_specchange(Param_values, LZEAAMM_pessimistic, Msg);
A_PROC_EXIT(specchange_action);
return;
} 
#undef NL

A_STATIC A68_VOID  NSGAAMM_rebuild_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(rebuild_action);
 /* line 730: */
 /* line 731: */
 /* line 732: */
QZEAAMM_do_specchange(Param_values, MZEAAMM_rebuild, Msg);
A_PROC_EXIT(rebuild_action);
return;
} 
#undef NL

A_STATIC A68_VOID  QSGAAMM_update_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_38  TSGAAMM_version_string;   /* proc value of non-global proc */
A68_270 * FTGAAMM_ml;
A68_340  GTGAAMM;  /* collateral clause result */
A68_52  JTGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KTGAAMM;  /* YIELD */
A68_52  LTGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MTGAAMM;  /* procedure value */
A68_85  NTGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(update_action);
 /* line 735: */
 /* line 736: */
{ 
A_CLOSURE( TSGAAMM_version_string, USGAAMM_version_string, VSGAAMM_version_string );
(( VSGAAMM_version_string * ) ( TSGAAMM_version_string.nonlocals )) -> Param_values = Param_values;
(( VSGAAMM_version_string * ) ( TSGAAMM_version_string.nonlocals )) -> Msg = Msg;
 /* line 748: */
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 750: */
FTGAAMM_ml = EOEAAMM_update_version(WIAAAMM_modules, ZNEAAMM_all_modules, TSGAAMM_version_string, Msg);
 /* line 752: */
 /* line 753: */
if ( (FTGAAMM_ml!=KBAAAMM_nilmodulelist) )
{ 
 /* line 754: */
 /* line 755: */
YXEAAMM_link_programs(WIAAAMM_modules, Msg);
} 
else
{ 
KTGAAMM = ITGAAMM ;
GTGAAMM.data[0] = A_UNITE(JTGAAMM,mode7,7,KTGAAMM);
MTGAAMM.fn.fn_global = LRAAOSL_newline;
MTGAAMM.nonlocals = A68_NIL;
GTGAAMM.data[1] = A_UNITE(LTGAAMM,mode12,12,MTGAAMM);
 /* line 756: */
 /* line 757: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NTGAAMM,GTGAAMM,2,A68_52 ));
} 
} 
A_PROC_EXIT(update_action);
return;
} 
#undef NL

A_STATIC A68_VOID  QTGAAMM_module_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(module_action);
 /* line 760: */
 /* line 761: */
 /* line 762: */
RDFAAMM_do_module_action(Param_values, A68_FALSE, Msg);
A_PROC_EXIT(module_action);
return;
} 
#undef NL

A_STATIC A68_VOID  TTGAAMM_install_action(A68_177  Param_values, A68_97  Msg)
{ 
A_PROC_ENTRY(install_action);
 /* line 765: */
 /* line 766: */
 /* line 767: */
RDFAAMM_do_module_action(Param_values, A68_TRUE, Msg);
A_PROC_EXIT(install_action);
return;
} 
#undef NL

A_STATIC A68_VOID  WTGAAMM_analyseusage_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  XTGAAMM_used_cnt;
A68_INT  YTGAAMM_needed_cnt;
A68_291  BUGAAMM_count_use;   /* proc value of non-global proc */
A68_291  HUGAAMM_count_need;   /* proc value of non-global proc */
A68_291  NUGAAMM_count_usage;   /* proc value of non-global proc */
A68_353  RUGAAMM;  /* collateral clause result */
A68_52  UUGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VUGAAMM;  /* YIELD */
A68_52  WUGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  XUGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YUGAAMM;  /* procedure value */
A68_52  BVGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CVGAAMM;  /* YIELD */
A68_52  DVGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  EVGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  FVGAAMM;  /* procedure value */
A68_85  GVGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(analyseusage_action);
 /* line 770: */
 /* line 771: */
{ 
XTGAAMM_used_cnt = 0;
 /* line 772: */
YTGAAMM_needed_cnt = 0;
 /* line 774: */
A_CLOSURE( BUGAAMM_count_use, CUGAAMM_count_use, DUGAAMM_count_use );
(( DUGAAMM_count_use * ) ( BUGAAMM_count_use.nonlocals )) -> XTGAAMM_used_cnt = (&XTGAAMM_used_cnt);
 /* line 780: */
A_CLOSURE( HUGAAMM_count_need, IUGAAMM_count_need, JUGAAMM_count_need );
(( JUGAAMM_count_need * ) ( HUGAAMM_count_need.nonlocals )) -> YTGAAMM_needed_cnt = (&YTGAAMM_needed_cnt);
 /* line 786: */
A_CLOSURE( NUGAAMM_count_usage, OUGAAMM_count_usage, PUGAAMM_count_usage );
(( PUGAAMM_count_usage * ) ( NUGAAMM_count_usage.nonlocals )) -> BUGAAMM_count_use = BUGAAMM_count_use;
(( PUGAAMM_count_usage * ) ( NUGAAMM_count_usage.nonlocals )) -> HUGAAMM_count_need = HUGAAMM_count_need;
 /* line 793: */
SBBAAMM_scanmodules(WIAAAMM_modules, NUGAAMM_count_usage);
 /* line 794: */
VUGAAMM = TUGAAMM ;
RUGAAMM.data[0] = A_UNITE(UUGAAMM,mode7,7,VUGAAMM);
RUGAAMM.data[1] = A_UNITE(WUGAAMM,mode1,1,XTGAAMM_used_cnt);
 /* line 795: */
YUGAAMM.fn.fn_global = LRAAOSL_newline;
YUGAAMM.nonlocals = A68_NIL;
RUGAAMM.data[2] = A_UNITE(XUGAAMM,mode12,12,YUGAAMM);
CVGAAMM = AVGAAMM ;
RUGAAMM.data[3] = A_UNITE(BVGAAMM,mode7,7,CVGAAMM);
RUGAAMM.data[4] = A_UNITE(DVGAAMM,mode1,1,YTGAAMM_needed_cnt);
FVGAAMM.fn.fn_global = LRAAOSL_newline;
FVGAAMM.nonlocals = A68_NIL;
RUGAAMM.data[5] = A_UNITE(EVGAAMM,mode12,12,FVGAAMM);
 /* line 796: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GVGAAMM,RUGAAMM,6,A68_52 ));
} 
A_PROC_EXIT(analyseusage_action);
return;
} 
#undef NL

A_STATIC A68_VOID  JVGAAMM_analyselevels_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_33  LVGAAMM_generator;   /* proc value of non-global proc */
A68_32  RVGAAMM;  /* avoid structure result */
A68_32  QVGAAMM_level_counts;
A68_291  UVGAAMM_count_action;   /* proc value of non-global proc */
A68_146  BWGAAMM;  /* OPERATORS - mode -> union mode */
A68_356  CWGAAMM;  /* collateral clause result */
A68_52  FWGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GWGAAMM;  /* YIELD */
A68_52  HWGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  IWGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JWGAAMM;  /* procedure value */
A68_52  MWGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  NWGAAMM;  /* YIELD */
A68_52  OWGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PWGAAMM;  /* procedure value */
A68_85  QWGAAMM;  /* OPERATORS - istruct -> vector */
A68_INT  RWGAAMM_ln;
A68_INT  SWGAAMM;  /* to part of loop */
A68_356  TWGAAMM;  /* collateral clause result */
A68_57  UWGAAMM;  /* avoid structure result */
A68_52  VWGAAMM;  /* OPERATORS - mode -> union mode */
A68_52  YWGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ZWGAAMM;  /* YIELD */
A68_52  AXGAAMM;  /* OPERATORS - mode -> union mode */
A68_INT  BXGAAMM;  /* YIELD */
A68_52  EXGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FXGAAMM;  /* YIELD */
A68_52  GXGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  HXGAAMM;  /* procedure value */
A68_85  IXGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(analyselevels_action);
 /* line 799: */
 /* line 800: */
{ 
A_CLOSURE( LVGAAMM_generator, MVGAAMM_generator, NVGAAMM_generator );
A_CALLPROC(LVGAAMM_generator,(A68_TRUE, &RVGAAMM),(A68_TRUE, &RVGAAMM,(LVGAAMM_generator).nonlocals));
QVGAAMM_level_counts = RVGAAMM;
 /* line 802: */
A_CLOSURE( UVGAAMM_count_action, VVGAAMM_count_action, WVGAAMM_count_action );
(( WVGAAMM_count_action * ) ( UVGAAMM_count_action.nonlocals )) -> QVGAAMM_level_counts = QVGAAMM_level_counts;
 /* line 810: */
VTCAOST_clear(A_UNITE(BWGAAMM,mode2,2,QVGAAMM_level_counts));
 /* line 811: */
SBBAAMM_scanmodules(WIAAAMM_modules, UVGAAMM_count_action);
 /* line 812: */
GWGAAMM = EWGAAMM ;
CWGAAMM.data[0] = A_UNITE(FWGAAMM,mode7,7,GWGAAMM);
CWGAAMM.data[1] = A_UNITE(HWGAAMM,mode1,1,NIAAAMM_max_level);
 /* line 813: */
JWGAAMM.fn.fn_global = LRAAOSL_newline;
JWGAAMM.nonlocals = A68_NIL;
CWGAAMM.data[2] = A_UNITE(IWGAAMM,mode12,12,JWGAAMM);
NWGAAMM = LWGAAMM ;
CWGAAMM.data[3] = A_UNITE(MWGAAMM,mode7,7,NWGAAMM);
PWGAAMM.fn.fn_global = LRAAOSL_newline;
PWGAAMM.nonlocals = A68_NIL;
CWGAAMM.data[4] = A_UNITE(OWGAAMM,mode12,12,PWGAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QWGAAMM,CWGAAMM,5,A68_52 ));
 /* line 814: */
 /* line 815: */
SWGAAMM = NIAAAMM_max_level;
for ( RWGAAMM_ln = 1;
RWGAAMM_ln <= SWGAAMM;
RWGAAMM_ln += 1 )
{ 
 /* line 816: */
ZXAAOSL_intwidth( RWGAAMM_ln, 3, &UWGAAMM );
TWGAAMM.data[0] = A_UNITE(VWGAAMM,mode13,13,UWGAAMM);
ZWGAAMM = XWGAAMM ;
TWGAAMM.data[1] = A_UNITE(YWGAAMM,mode7,7,ZWGAAMM);
 /* line 817: */
BXGAAMM = (*(&A_VINDEX(QVGAAMM_level_counts,RWGAAMM_ln))) ;
TWGAAMM.data[2] = A_UNITE(AXGAAMM,mode1,1,BXGAAMM);
FXGAAMM = DXGAAMM ;
TWGAAMM.data[3] = A_UNITE(EXGAAMM,mode7,7,FXGAAMM);
HXGAAMM.fn.fn_global = LRAAOSL_newline;
HXGAAMM.nonlocals = A68_NIL;
TWGAAMM.data[4] = A_UNITE(GXGAAMM,mode12,12,HXGAAMM);
 /* line 818: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(IXGAAMM,TWGAAMM,5,A68_52 ));
}
 /* line 819: */
} 
A_PROC_EXIT(analyselevels_action);
return;
} 
#undef NL

A_STATIC A68_VOID  LXGAAMM_debug_action(A68_177  Param_values, A68_97  Msg)
{ 
A68_340  MXGAAMM;  /* collateral clause result */
A68_52  PXGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QXGAAMM;  /* YIELD */
A68_52  RXGAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SXGAAMM;  /* procedure value */
A68_85  TXGAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(debug_action);
 /* line 822: */
 /* line 823: */
QXGAAMM = OXGAAMM ;
MXGAAMM.data[0] = A_UNITE(PXGAAMM,mode7,7,QXGAAMM);
SXGAAMM.fn.fn_global = LRAAOSL_newline;
SXGAAMM.nonlocals = A68_NIL;
MXGAAMM.data[1] = A_UNITE(RXGAAMM,mode12,12,SXGAAMM);
 /* line 824: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(TXGAAMM,MXGAAMM,2,A68_52 ));
A_PROC_EXIT(debug_action);
return;
} 
#undef NL
 /* line 827: */
 /* line 828: */
 /* line 829: */
 /* line 830: */
 /* line 831: */

A_STATIC A68_222 * AYGAAMM_make_command(A68_VC  Name, A68_VC  Abreviation, A68_175  Parameter, A68_215  Access, A68_VC  Help_text, A68_220  Action)
{ 
A68_222  BYGAAMM;  /* collateral clause result */
A68_VC  CYGAAMM;  /* avoid structure result */
A68_VC  DYGAAMM;  /* avoid structure result */
A68_VC  EYGAAMM;  /* avoid structure result */
A68_226  FYGAAMM;  /* OPERATORS - mode -> union mode */
A68_218  GYGAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * HYGAAMM;  /* clause result */
A68_222 * IYGAAMM;  /* YIELD */
A_PROC_ENTRY(make_command);
 /* line 832: */
 /* line 833: */
ZAAAOSI_makervc( Name, &CYGAAMM );
BYGAAMM.Name = CYGAAMM;
ZAAAOSI_makervc( Abreviation, &DYGAAMM );
BYGAAMM.Abreviation = DYGAAMM;
 /* line 834: */
BYGAAMM.Parameter = Parameter;
BYGAAMM.Access = Access;
BYGAAMM.Continuation = ZNDAOST_continue;
ZAAAOSI_makervc( Help_text, &EYGAAMM );
BYGAAMM.Help = A_UNITE(FYGAAMM,mode1,1,EYGAAMM);
 /* line 835: */
BYGAAMM.Command = A_UNITE(GYGAAMM,mode3,3,Action);
IYGAAMM = A_HEAP(A68_222 ) ;
(*IYGAAMM) = BYGAAMM ;
HYGAAMM = IYGAAMM;
A_PROC_EXIT(make_command);
return( HYGAAMM );
} 
#undef NL

A68_VOID  KYGAAMM_make_mm_commands(A68_97  Msg, A68_225  *ReturnedValue)
{ 
A68_VC  LYGAAMM;  /* avoid structure result */
A68_394  MYGAAMM;  /* collateral clause result */
A68_380  PYGAAMM;  /* collateral clause result */
A68_220  WYGAAMM;  /* procedure value */
A68_221  XYGAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * YYGAAMM;  /* YIELD */
A68_220  FZGAAMM;  /* procedure value */
A68_221  GZGAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * HZGAAMM;  /* YIELD */
A68_225  IZGAAMM;  /* OPERATORS - istruct -> vector */
A68_221  LZGAAMM;  /* OPERATORS - mode -> union mode */
A68_223 * MZGAAMM;  /* YIELD */
A68_383  PZGAAMM;  /* collateral clause result */
A68_173  TZGAAMM;  /* avoid structure result */
A68_175  UZGAAMM;  /* OPERATORS - mode -> union mode */
A68_173  VZGAAMM;  /* avoid structure result */
A68_175  WZGAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XZGAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  ZZGAAMM;  /* procedure value */
A68_221  AAHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * BAHAAMM;  /* YIELD */
A68_173  FAHAAMM;  /* avoid structure result */
A68_175  GAHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  HAHAAMM;  /* avoid structure result */
A68_175  IAHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JAHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  LAHAAMM;  /* procedure value */
A68_221  MAHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * NAHAAMM;  /* YIELD */
A68_173  RAHAAMM;  /* avoid structure result */
A68_175  SAHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  TAHAAMM;  /* avoid structure result */
A68_175  UAHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VAHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  XAHAAMM;  /* procedure value */
A68_221  YAHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * ZAHAAMM;  /* YIELD */
A68_173  DBHAAMM;  /* avoid structure result */
A68_175  EBHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  FBHAAMM;  /* avoid structure result */
A68_175  GBHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HBHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  JBHAAMM;  /* procedure value */
A68_221  KBHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * LBHAAMM;  /* YIELD */
A68_173  PBHAAMM;  /* avoid structure result */
A68_175  QBHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  RBHAAMM;  /* avoid structure result */
A68_175  SBHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TBHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  VBHAAMM;  /* procedure value */
A68_221  WBHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * XBHAAMM;  /* YIELD */
A68_225  YBHAAMM;  /* OPERATORS - istruct -> vector */
A68_221  BCHAAMM;  /* OPERATORS - mode -> union mode */
A68_223 * CCHAAMM;  /* YIELD */
A68_386  FCHAAMM;  /* collateral clause result */
A68_384  ICHAAMM;  /* collateral clause result */
A68_173  JCHAAMM;  /* avoid structure result */
A68_175  KCHAAMM;  /* OPERATORS - mode -> union mode */
A68_174  NCHAAMM;  /* OPERATORS - istruct -> vector */
A68_173  OCHAAMM;  /* avoid structure result */
A68_175  PCHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  SCHAAMM;  /* procedure value */
A68_221  TCHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * UCHAAMM;  /* YIELD */
A68_384  XCHAAMM;  /* collateral clause result */
A68_173  YCHAAMM;  /* avoid structure result */
A68_175  ZCHAAMM;  /* OPERATORS - mode -> union mode */
A68_174  CDHAAMM;  /* OPERATORS - istruct -> vector */
A68_173  DDHAAMM;  /* avoid structure result */
A68_175  EDHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  HDHAAMM;  /* procedure value */
A68_221  IDHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * JDHAAMM;  /* YIELD */
A68_384  MDHAAMM;  /* collateral clause result */
A68_173  NDHAAMM;  /* avoid structure result */
A68_175  ODHAAMM;  /* OPERATORS - mode -> union mode */
A68_174  RDHAAMM;  /* OPERATORS - istruct -> vector */
A68_173  SDHAAMM;  /* avoid structure result */
A68_175  TDHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  WDHAAMM;  /* procedure value */
A68_221  XDHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * YDHAAMM;  /* YIELD */
A68_384  BEHAAMM;  /* collateral clause result */
A68_173  CEHAAMM;  /* avoid structure result */
A68_175  DEHAAMM;  /* OPERATORS - mode -> union mode */
A68_174  GEHAAMM;  /* OPERATORS - istruct -> vector */
A68_173  HEHAAMM;  /* avoid structure result */
A68_175  IEHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  LEHAAMM;  /* procedure value */
A68_221  MEHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * NEHAAMM;  /* YIELD */
A68_384  QEHAAMM;  /* collateral clause result */
A68_173  REHAAMM;  /* avoid structure result */
A68_175  SEHAAMM;  /* OPERATORS - mode -> union mode */
A68_174  VEHAAMM;  /* OPERATORS - istruct -> vector */
A68_173  WEHAAMM;  /* avoid structure result */
A68_175  XEHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  AFHAAMM;  /* procedure value */
A68_221  BFHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * CFHAAMM;  /* YIELD */
A68_220  JFHAAMM;  /* procedure value */
A68_221  KFHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * LFHAAMM;  /* YIELD */
A68_220  SFHAAMM;  /* procedure value */
A68_221  TFHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * UFHAAMM;  /* YIELD */
A68_225  VFHAAMM;  /* OPERATORS - istruct -> vector */
A68_221  YFHAAMM;  /* OPERATORS - mode -> union mode */
A68_223 * ZFHAAMM;  /* YIELD */
A68_386  BGHAAMM;  /* collateral clause result */
A68_VC  FGHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  HGHAAMM;  /* procedure value */
A68_221  IGHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * JGHAAMM;  /* YIELD */
A68_VC  NGHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  PGHAAMM;  /* procedure value */
A68_221  QGHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * RGHAAMM;  /* YIELD */
A68_VC  VGHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  XGHAAMM;  /* procedure value */
A68_221  YGHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * ZGHAAMM;  /* YIELD */
A68_173  DHHAAMM;  /* avoid structure result */
A68_175  EHHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  FHHAAMM;  /* avoid structure result */
A68_175  GHHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HHHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  JHHAAMM;  /* procedure value */
A68_221  KHHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * LHHAAMM;  /* YIELD */
A68_173  PHHAAMM;  /* avoid structure result */
A68_175  QHHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  RHHAAMM;  /* avoid structure result */
A68_175  SHHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  THHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  VHHAAMM;  /* procedure value */
A68_221  WHHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * XHHAAMM;  /* YIELD */
A68_VC  BIHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  DIHAAMM;  /* procedure value */
A68_221  EIHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * FIHAAMM;  /* YIELD */
A68_VC  JIHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  LIHAAMM;  /* procedure value */
A68_221  MIHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * NIHAAMM;  /* YIELD */
A68_225  OIHAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  PIHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  RIHAAMM;  /* OPERATORS - mode -> union mode */
A68_223 * SIHAAMM;  /* YIELD */
A68_173  XIHAAMM;  /* avoid structure result */
A68_175  YIHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  BJHAAMM;  /* procedure value */
A68_221  CJHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * DJHAAMM;  /* YIELD */
A68_173  IJHAAMM;  /* avoid structure result */
A68_175  JJHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  MJHAAMM;  /* procedure value */
A68_221  NJHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * OJHAAMM;  /* YIELD */
A68_173  TJHAAMM;  /* avoid structure result */
A68_175  UJHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  XJHAAMM;  /* procedure value */
A68_221  YJHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * ZJHAAMM;  /* YIELD */
A68_173  EKHAAMM;  /* avoid structure result */
A68_175  FKHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  GKHAAMM;  /* avoid structure result */
A68_175  HKHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  KKHAAMM;  /* procedure value */
A68_221  LKHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * MKHAAMM;  /* YIELD */
A68_173  QKHAAMM;  /* avoid structure result */
A68_175  RKHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  SKHAAMM;  /* avoid structure result */
A68_175  TKHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UKHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  WKHAAMM;  /* procedure value */
A68_221  XKHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * YKHAAMM;  /* YIELD */
A68_384  BLHAAMM;  /* collateral clause result */
A68_174  ELHAAMM;  /* OPERATORS - istruct -> vector */
A68_173  FLHAAMM;  /* avoid structure result */
A68_175  GLHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  JLHAAMM;  /* procedure value */
A68_221  KLHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * LLHAAMM;  /* YIELD */
A68_173  QLHAAMM;  /* avoid structure result */
A68_175  RLHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  ULHAAMM;  /* procedure value */
A68_221  VLHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * WLHAAMM;  /* YIELD */
A68_173  BMHAAMM;  /* avoid structure result */
A68_175  CMHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  FMHAAMM;  /* procedure value */
A68_221  GMHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * HMHAAMM;  /* YIELD */
A68_222  IMHAAMM;  /* collateral clause result */
A68_VC  LMHAAMM;  /* avoid structure result */
A68_VC  OMHAAMM;  /* avoid structure result */
A68_226  PMHAAMM;  /* OPERATORS - mode -> union mode */
A68_218  QMHAAMM;  /* OPERATORS - mode -> union mode */
A68_219  RMHAAMM;  /* procedure value */
A68_222 * SMHAAMM;  /* YIELD */
A68_221  TMHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  XMHAAMM;  /* avoid structure result */
A68_175  YMHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ZMHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  BNHAAMM;  /* procedure value */
A68_221  CNHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * DNHAAMM;  /* YIELD */
A68_173  INHAAMM;  /* avoid structure result */
A68_175  JNHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  MNHAAMM;  /* procedure value */
A68_221  NNHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * ONHAAMM;  /* YIELD */
A68_173  SNHAAMM;  /* avoid structure result */
A68_175  TNHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  UNHAAMM;  /* avoid structure result */
A68_175  VNHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WNHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  YNHAAMM;  /* procedure value */
A68_221  ZNHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * AOHAAMM;  /* YIELD */
A68_173  EOHAAMM;  /* avoid structure result */
A68_175  FOHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GOHAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  IOHAAMM;  /* procedure value */
A68_221  JOHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * KOHAAMM;  /* YIELD */
A68_173  POHAAMM;  /* avoid structure result */
A68_175  QOHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  ROHAAMM;  /* avoid structure result */
A68_175  SOHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  VOHAAMM;  /* procedure value */
A68_221  WOHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * XOHAAMM;  /* YIELD */
A68_173  CPHAAMM;  /* avoid structure result */
A68_175  DPHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  EPHAAMM;  /* avoid structure result */
A68_175  FPHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  IPHAAMM;  /* procedure value */
A68_221  JPHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * KPHAAMM;  /* YIELD */
A68_173  PPHAAMM;  /* avoid structure result */
A68_175  QPHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  TPHAAMM;  /* procedure value */
A68_221  UPHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * VPHAAMM;  /* YIELD */
A68_173  AQHAAMM;  /* avoid structure result */
A68_175  BQHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  EQHAAMM;  /* procedure value */
A68_221  FQHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * GQHAAMM;  /* YIELD */
A68_173  LQHAAMM;  /* avoid structure result */
A68_175  MQHAAMM;  /* OPERATORS - mode -> union mode */
A68_173  NQHAAMM;  /* avoid structure result */
A68_175  OQHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  RQHAAMM;  /* procedure value */
A68_221  SQHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * TQHAAMM;  /* YIELD */
A68_173  YQHAAMM;  /* avoid structure result */
A68_175  ZQHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  CRHAAMM;  /* procedure value */
A68_221  DRHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * ERHAAMM;  /* YIELD */
A68_173  JRHAAMM;  /* avoid structure result */
A68_175  KRHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  NRHAAMM;  /* procedure value */
A68_221  ORHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * PRHAAMM;  /* YIELD */
A68_173  URHAAMM;  /* avoid structure result */
A68_175  VRHAAMM;  /* OPERATORS - mode -> union mode */
A68_220  YRHAAMM;  /* procedure value */
A68_221  ZRHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * ASHAAMM;  /* YIELD */
A68_220  HSHAAMM;  /* procedure value */
A68_221  ISHAAMM;  /* OPERATORS - mode -> union mode */
A68_222 * JSHAAMM;  /* YIELD */
A68_225  KSHAAMM;  /* clause result */
A68_225  LSHAAMM;  /* OPERATORS - istruct -> vector */
A68_225  MSHAAMM;  /* avoid structure result */
A_PROC_ENTRY(make_mm_commands);
 /* line 838: */
 /* line 839: */
{ 
YGFAAMM_initialise_mm_utilities( Msg, &LYGAAMM );
LYGAAMM;
 /* line 841: */
 /* line 843: */
 /* line 844: */
 /* line 845: */
 /* line 846: */
 /* line 847: */
 /* line 848: */
 /* line 849: */
WYGAAMM.fn.fn_global = JVGAAMM_analyselevels_action;
WYGAAMM.nonlocals = A68_NIL;
YYGAAMM = AYGAAMM_make_command(VYGAAMM, UYGAAMM, SRAAOST_noparameters, BNDAOST_hiddenaccess, TYGAAMM, WYGAAMM) ;
PYGAAMM.data[0] = A_UNITE(XYGAAMM,mode1,1,YYGAAMM);
 /* line 850: */
 /* line 851: */
 /* line 852: */
 /* line 853: */
 /* line 854: */
FZGAAMM.fn.fn_global = WTGAAMM_analyseusage_action;
FZGAAMM.nonlocals = A68_NIL;
HZGAAMM = AYGAAMM_make_command(EZGAAMM, DZGAAMM, SRAAOST_noparameters, BNDAOST_hiddenaccess, CZGAAMM, FZGAAMM) ;
PYGAAMM.data[1] = A_UNITE(GZGAAMM,mode1,1,HZGAAMM);
 /* line 855: */
MZGAAMM = NSDAOST_make_group(KZGAAMM, JZGAAMM, BNDAOST_hiddenaccess, A_HISVEC(IZGAAMM,PYGAAMM,2,A68_221 )) ;
MYGAAMM.data[0] = A_UNITE(LZGAAMM,mode2,2,MZGAAMM);
 /* line 856: */
 /* line 857: */
 /* line 858: */
 /* line 859: */
 /* line 860: */
 /* line 861: */
DUAAOST_star( ALFAOST_name_syntax, &TZGAAMM );
LTAAOST_opt( A_UNITE(UZGAAMM,mode2,2,TZGAAMM), &VZGAAMM );
ZZGAAMM.fn.fn_global = YJGAAMM_removecompile_action;
ZZGAAMM.nonlocals = A68_NIL;
BAHAAMM = AYGAAMM_make_command(YZGAAMM, A_HVEC(XZGAAMM,'C',A68_CHAR ), A_UNITE(WZGAAMM,mode2,2,VZGAAMM), XMDAOST_normalaccess, SZGAAMM, ZZGAAMM) ;
PZGAAMM.data[0] = A_UNITE(AAHAAMM,mode1,1,BAHAAMM);
 /* line 862: */
 /* line 863: */
 /* line 864: */
 /* line 865: */
 /* line 866: */
DUAAOST_star( ALFAOST_name_syntax, &FAHAAMM );
LTAAOST_opt( A_UNITE(GAHAAMM,mode2,2,FAHAAMM), &HAHAAMM );
LAHAAMM.fn.fn_global = EKGAAMM_removelink_action;
LAHAAMM.nonlocals = A68_NIL;
NAHAAMM = AYGAAMM_make_command(KAHAAMM, A_HVEC(JAHAAMM,'L',A68_CHAR ), A_UNITE(IAHAAMM,mode2,2,HAHAAMM), XMDAOST_normalaccess, EAHAAMM, LAHAAMM) ;
PZGAAMM.data[1] = A_UNITE(MAHAAMM,mode1,1,NAHAAMM);
 /* line 867: */
 /* line 868: */
 /* line 869: */
 /* line 870: */
 /* line 871: */
DUAAOST_star( ALFAOST_name_syntax, &RAHAAMM );
LTAAOST_opt( A_UNITE(SAHAAMM,mode2,2,RAHAAMM), &TAHAAMM );
XAHAAMM.fn.fn_global = WGGAAMM_removemodule_action;
XAHAAMM.nonlocals = A68_NIL;
ZAHAAMM = AYGAAMM_make_command(WAHAAMM, A_HVEC(VAHAAMM,'M',A68_CHAR ), A_UNITE(UAHAAMM,mode2,2,TAHAAMM), XMDAOST_normalaccess, QAHAAMM, XAHAAMM) ;
PZGAAMM.data[2] = A_UNITE(YAHAAMM,mode1,1,ZAHAAMM);
 /* line 872: */
 /* line 873: */
 /* line 874: */
 /* line 875: */
 /* line 876: */
DUAAOST_star( ALFAOST_name_syntax, &DBHAAMM );
LTAAOST_opt( A_UNITE(EBHAAMM,mode2,2,DBHAAMM), &FBHAAMM );
JBHAAMM.fn.fn_global = KKGAAMM_removepending_action;
JBHAAMM.nonlocals = A68_NIL;
LBHAAMM = AYGAAMM_make_command(IBHAAMM, A_HVEC(HBHAAMM,'P',A68_CHAR ), A_UNITE(GBHAAMM,mode2,2,FBHAAMM), XMDAOST_normalaccess, CBHAAMM, JBHAAMM) ;
PZGAAMM.data[3] = A_UNITE(KBHAAMM,mode1,1,LBHAAMM);
 /* line 877: */
 /* line 878: */
 /* line 879: */
 /* line 880: */
 /* line 881: */
DUAAOST_star( ALFAOST_name_syntax, &PBHAAMM );
LTAAOST_opt( A_UNITE(QBHAAMM,mode2,2,PBHAAMM), &RBHAAMM );
VBHAAMM.fn.fn_global = NKGAAMM_removeversion_action;
VBHAAMM.nonlocals = A68_NIL;
XBHAAMM = AYGAAMM_make_command(UBHAAMM, A_HVEC(TBHAAMM,'V',A68_CHAR ), A_UNITE(SBHAAMM,mode2,2,RBHAAMM), XMDAOST_normalaccess, OBHAAMM, VBHAAMM) ;
PZGAAMM.data[4] = A_UNITE(WBHAAMM,mode1,1,XBHAAMM);
 /* line 882: */
CCHAAMM = NSDAOST_make_group(ACHAAMM, ZBHAAMM, XMDAOST_normalaccess, A_HISVEC(YBHAAMM,PZGAAMM,5,A68_221 )) ;
MYGAAMM.data[1] = A_UNITE(BCHAAMM,mode2,2,CCHAAMM);
 /* line 883: */
 /* line 884: */
ICHAAMM.data[0] = XLFAOST_string_syntax;
DUAAOST_star( ALFAOST_name_syntax, &JCHAAMM );
ICHAAMM.data[1] = A_UNITE(KCHAAMM,mode2,2,JCHAAMM);
 /* line 885: */
 /* line 886: */
 /* line 887: */
 /* line 888: */
ATAAOST_prod( A_HISVEC(NCHAAMM,ICHAAMM,2,A68_175 ), &OCHAAMM );
SCHAAMM.fn.fn_global = AKFAAMM_setdebug_action;
SCHAAMM.nonlocals = A68_NIL;
UCHAAMM = AYGAAMM_make_command(RCHAAMM, QCHAAMM, A_UNITE(PCHAAMM,mode2,2,OCHAAMM), XMDAOST_normalaccess, MCHAAMM, SCHAAMM) ;
FCHAAMM.data[0] = A_UNITE(TCHAAMM,mode1,1,UCHAAMM);
 /* line 889: */
XCHAAMM.data[0] = XLFAOST_string_syntax;
DUAAOST_star( ALFAOST_name_syntax, &YCHAAMM );
XCHAAMM.data[1] = A_UNITE(ZCHAAMM,mode2,2,YCHAAMM);
 /* line 890: */
 /* line 891: */
 /* line 892: */
 /* line 893: */
ATAAOST_prod( A_HISVEC(CDHAAMM,XCHAAMM,2,A68_175 ), &DDHAAMM );
HDHAAMM.fn.fn_global = DKFAAMM_setexedir_action;
HDHAAMM.nonlocals = A68_NIL;
JDHAAMM = AYGAAMM_make_command(GDHAAMM, FDHAAMM, A_UNITE(EDHAAMM,mode2,2,DDHAAMM), XMDAOST_normalaccess, BDHAAMM, HDHAAMM) ;
FCHAAMM.data[1] = A_UNITE(IDHAAMM,mode1,1,JDHAAMM);
 /* line 894: */
MDHAAMM.data[0] = XLFAOST_string_syntax;
DUAAOST_star( ALFAOST_name_syntax, &NDHAAMM );
MDHAAMM.data[1] = A_UNITE(ODHAAMM,mode2,2,NDHAAMM);
 /* line 895: */
 /* line 896: */
 /* line 897: */
 /* line 898: */
ATAAOST_prod( A_HISVEC(RDHAAMM,MDHAAMM,2,A68_175 ), &SDHAAMM );
WDHAAMM.fn.fn_global = GKFAAMM_setheapsize_action;
WDHAAMM.nonlocals = A68_NIL;
YDHAAMM = AYGAAMM_make_command(VDHAAMM, UDHAAMM, A_UNITE(TDHAAMM,mode2,2,SDHAAMM), XMDAOST_normalaccess, QDHAAMM, WDHAAMM) ;
FCHAAMM.data[2] = A_UNITE(XDHAAMM,mode1,1,YDHAAMM);
 /* line 899: */
BEHAAMM.data[0] = XLFAOST_string_syntax;
DUAAOST_star( ALFAOST_name_syntax, &CEHAAMM );
BEHAAMM.data[1] = A_UNITE(DEHAAMM,mode2,2,CEHAAMM);
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
ATAAOST_prod( A_HISVEC(GEHAAMM,BEHAAMM,2,A68_175 ), &HEHAAMM );
LEHAAMM.fn.fn_global = JKFAAMM_setoptimise_action;
LEHAAMM.nonlocals = A68_NIL;
NEHAAMM = AYGAAMM_make_command(KEHAAMM, JEHAAMM, A_UNITE(IEHAAMM,mode2,2,HEHAAMM), XMDAOST_normalaccess, FEHAAMM, LEHAAMM) ;
FCHAAMM.data[3] = A_UNITE(MEHAAMM,mode1,1,NEHAAMM);
 /* line 904: */
QEHAAMM.data[0] = XLFAOST_string_syntax;
DUAAOST_star( ALFAOST_name_syntax, &REHAAMM );
QEHAAMM.data[1] = A_UNITE(SEHAAMM,mode2,2,REHAAMM);
 /* line 905: */
 /* line 906: */
 /* line 907: */
 /* line 908: */
ATAAOST_prod( A_HISVEC(VEHAAMM,QEHAAMM,2,A68_175 ), &WEHAAMM );
AFHAAMM.fn.fn_global = MKFAAMM_setstaredit_action;
AFHAAMM.nonlocals = A68_NIL;
CFHAAMM = AYGAAMM_make_command(ZEHAAMM, YEHAAMM, A_UNITE(XEHAAMM,mode2,2,WEHAAMM), XMDAOST_normalaccess, UEHAAMM, AFHAAMM) ;
FCHAAMM.data[4] = A_UNITE(BFHAAMM,mode1,1,CFHAAMM);
 /* line 909: */
 /* line 910: */
 /* line 911: */
 /* line 912: */
 /* line 913: */
JFHAAMM.fn.fn_global = UJFAAMM_setdiag_action;
JFHAAMM.nonlocals = A68_NIL;
LFHAAMM = AYGAAMM_make_command(IFHAAMM, HFHAAMM, XLFAOST_string_syntax, BNDAOST_hiddenaccess, GFHAAMM, JFHAAMM) ;
FCHAAMM.data[5] = A_UNITE(KFHAAMM,mode1,1,LFHAAMM);
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
 /* line 918: */
SFHAAMM.fn.fn_global = XJFAAMM_setquery_action;
SFHAAMM.nonlocals = A68_NIL;
UFHAAMM = AYGAAMM_make_command(RFHAAMM, QFHAAMM, XLFAOST_string_syntax, BNDAOST_hiddenaccess, PFHAAMM, SFHAAMM) ;
FCHAAMM.data[6] = A_UNITE(TFHAAMM,mode1,1,UFHAAMM);
 /* line 919: */
ZFHAAMM = NSDAOST_make_group(XFHAAMM, WFHAAMM, XMDAOST_normalaccess, A_HISVEC(VFHAAMM,FCHAAMM,7,A68_221 )) ;
MYGAAMM.data[2] = A_UNITE(YFHAAMM,mode2,2,ZFHAAMM);
 /* line 920: */
 /* line 921: */
 /* line 922: */
 /* line 923: */
 /* line 924: */
 /* line 925: */
HGHAAMM.fn.fn_global = CRFAAMM_showcompile_action;
HGHAAMM.nonlocals = A68_NIL;
JGHAAMM = AYGAAMM_make_command(GGHAAMM, A_HVEC(FGHAAMM,'C',A68_CHAR ), SRAAOST_noparameters, XMDAOST_normalaccess, EGHAAMM, HGHAAMM) ;
BGHAAMM.data[0] = A_UNITE(IGHAAMM,mode1,1,JGHAAMM);
 /* line 926: */
 /* line 927: */
 /* line 928: */
 /* line 929: */
 /* line 930: */
PGHAAMM.fn.fn_global = BMFAAMM_showenviron_action;
PGHAAMM.nonlocals = A68_NIL;
RGHAAMM = AYGAAMM_make_command(OGHAAMM, A_HVEC(NGHAAMM,'E',A68_CHAR ), SRAAOST_noparameters, XMDAOST_normalaccess, MGHAAMM, PGHAAMM) ;
BGHAAMM.data[1] = A_UNITE(QGHAAMM,mode1,1,RGHAAMM);
 /* line 931: */
 /* line 932: */
 /* line 933: */
 /* line 934: */
 /* line 935: */
XGHAAMM.fn.fn_global = HRFAAMM_showlink_action;
XGHAAMM.nonlocals = A68_NIL;
ZGHAAMM = AYGAAMM_make_command(WGHAAMM, A_HVEC(VGHAAMM,'L',A68_CHAR ), SRAAOST_noparameters, XMDAOST_normalaccess, UGHAAMM, XGHAAMM) ;
BGHAAMM.data[2] = A_UNITE(YGHAAMM,mode1,1,ZGHAAMM);
 /* line 936: */
 /* line 937: */
 /* line 938: */
 /* line 939: */
 /* line 940: */
DUAAOST_star( ALFAOST_name_syntax, &DHHAAMM );
LTAAOST_opt( A_UNITE(EHHAAMM,mode2,2,DHHAAMM), &FHHAAMM );
JHHAAMM.fn.fn_global = PTFAAMM_showmodule_action;
JHHAAMM.nonlocals = A68_NIL;
LHHAAMM = AYGAAMM_make_command(IHHAAMM, A_HVEC(HHHAAMM,'M',A68_CHAR ), A_UNITE(GHHAAMM,mode2,2,FHHAAMM), XMDAOST_normalaccess, CHHAAMM, JHHAAMM) ;
BGHAAMM.data[3] = A_UNITE(KHHAAMM,mode1,1,LHHAAMM);
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
 /* line 945: */
DUAAOST_star( XLFAOST_string_syntax, &PHHAAMM );
LTAAOST_opt( A_UNITE(QHHAAMM,mode2,2,PHHAAMM), &RHHAAMM );
VHHAAMM.fn.fn_global = TRFAAMM_showsymbol_action;
VHHAAMM.nonlocals = A68_NIL;
XHHAAMM = AYGAAMM_make_command(UHHAAMM, A_HVEC(THHAAMM,'S',A68_CHAR ), A_UNITE(SHHAAMM,mode2,2,RHHAAMM), XMDAOST_normalaccess, OHHAAMM, VHHAAMM) ;
BGHAAMM.data[4] = A_UNITE(WHHAAMM,mode1,1,XHHAAMM);
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
 /* line 950: */
DIHAAMM.fn.fn_global = MRFAAMM_showpending_action;
DIHAAMM.nonlocals = A68_NIL;
FIHAAMM = AYGAAMM_make_command(CIHAAMM, A_HVEC(BIHAAMM,'P',A68_CHAR ), SRAAOST_noparameters, XMDAOST_normalaccess, AIHAAMM, DIHAAMM) ;
BGHAAMM.data[5] = A_UNITE(EIHAAMM,mode1,1,FIHAAMM);
 /* line 951: */
 /* line 952: */
 /* line 953: */
 /* line 954: */
 /* line 955: */
LIHAAMM.fn.fn_global = MTFAAMM_showversion_action;
LIHAAMM.nonlocals = A68_NIL;
NIHAAMM = AYGAAMM_make_command(KIHAAMM, A_HVEC(JIHAAMM,'V',A68_CHAR ), SRAAOST_noparameters, XMDAOST_normalaccess, IIHAAMM, LIHAAMM) ;
BGHAAMM.data[6] = A_UNITE(MIHAAMM,mode1,1,NIHAAMM);
 /* line 956: */
SIHAAMM = NSDAOST_make_group(QIHAAMM, A_HVEC(PIHAAMM,'S',A68_CHAR ), XMDAOST_normalaccess, A_HISVEC(OIHAAMM,BGHAAMM,7,A68_221 )) ;
MYGAAMM.data[3] = A_UNITE(RIHAAMM,mode2,2,SIHAAMM);
 /* line 957: */
 /* line 958: */
 /* line 959: */
 /* line 960: */
 /* line 961: */
LTAAOST_opt( ALFAOST_name_syntax, &XIHAAMM );
BJHAAMM.fn.fn_global = BDGAAMM_after_action;
BJHAAMM.nonlocals = A68_NIL;
DJHAAMM = AYGAAMM_make_command(AJHAAMM, ZIHAAMM, A_UNITE(YIHAAMM,mode2,2,XIHAAMM), XMDAOST_normalaccess, WIHAAMM, BJHAAMM) ;
MYGAAMM.data[4] = A_UNITE(CJHAAMM,mode1,1,DJHAAMM);
 /* line 962: */
 /* line 963: */
 /* line 964: */
 /* line 965: */
 /* line 966: */
LTAAOST_opt( ALFAOST_name_syntax, &IJHAAMM );
MJHAAMM.fn.fn_global = NMGAAMM_attach_action;
MJHAAMM.nonlocals = A68_NIL;
OJHAAMM = AYGAAMM_make_command(LJHAAMM, KJHAAMM, A_UNITE(JJHAAMM,mode2,2,IJHAAMM), XMDAOST_normalaccess, HJHAAMM, MJHAAMM) ;
MYGAAMM.data[5] = A_UNITE(NJHAAMM,mode1,1,OJHAAMM);
 /* line 967: */
 /* line 968: */
 /* line 969: */
 /* line 970: */
 /* line 971: */
LTAAOST_opt( ALFAOST_name_syntax, &TJHAAMM );
XJHAAMM.fn.fn_global = EDGAAMM_before_action;
XJHAAMM.nonlocals = A68_NIL;
ZJHAAMM = AYGAAMM_make_command(WJHAAMM, VJHAAMM, A_UNITE(UJHAAMM,mode2,2,TJHAAMM), XMDAOST_normalaccess, SJHAAMM, XJHAAMM) ;
MYGAAMM.data[6] = A_UNITE(YJHAAMM,mode1,1,ZJHAAMM);
 /* line 972: */
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
DUAAOST_star( ALFAOST_name_syntax, &EKHAAMM );
LTAAOST_opt( A_UNITE(FKHAAMM,mode2,2,EKHAAMM), &GKHAAMM );
KKHAAMM.fn.fn_global = GCGAAMM_cc_action;
KKHAAMM.nonlocals = A68_NIL;
MKHAAMM = AYGAAMM_make_command(JKHAAMM, IKHAAMM, A_UNITE(HKHAAMM,mode2,2,GKHAAMM), XMDAOST_normalaccess, DKHAAMM, KKHAAMM) ;
MYGAAMM.data[7] = A_UNITE(LKHAAMM,mode1,1,MKHAAMM);
 /* line 977: */
 /* line 978: */
 /* line 979: */
 /* line 980: */
 /* line 981: */
DUAAOST_star( ALFAOST_name_syntax, &QKHAAMM );
LTAAOST_opt( A_UNITE(RKHAAMM,mode2,2,QKHAAMM), &SKHAAMM );
WKHAAMM.fn.fn_global = BCGAAMM_compile_action;
WKHAAMM.nonlocals = A68_NIL;
YKHAAMM = AYGAAMM_make_command(VKHAAMM, A_HVEC(UKHAAMM,'C',A68_CHAR ), A_UNITE(TKHAAMM,mode2,2,SKHAAMM), XMDAOST_normalaccess, PKHAAMM, WKHAAMM) ;
MYGAAMM.data[8] = A_UNITE(XKHAAMM,mode1,1,YKHAAMM);
 /* line 982: */
BLHAAMM.data[0] = XLFAOST_string_syntax;
BLHAAMM.data[1] = IOFAOST_text_syntax;
 /* line 983: */
 /* line 984: */
 /* line 985: */
 /* line 986: */
ATAAOST_prod( A_HISVEC(ELHAAMM,BLHAAMM,2,A68_175 ), &FLHAAMM );
JLHAAMM.fn.fn_global = HDGAAMM_define_action;
JLHAAMM.nonlocals = A68_NIL;
LLHAAMM = AYGAAMM_make_command(ILHAAMM, HLHAAMM, A_UNITE(GLHAAMM,mode2,2,FLHAAMM), XMDAOST_normalaccess, DLHAAMM, JLHAAMM) ;
MYGAAMM.data[9] = A_UNITE(KLHAAMM,mode1,1,LLHAAMM);
 /* line 987: */
 /* line 988: */
 /* line 989: */
 /* line 990: */
 /* line 991: */
LTAAOST_opt( ALFAOST_name_syntax, &QLHAAMM );
ULHAAMM.fn.fn_global = TKGAAMM_detach_action;
ULHAAMM.nonlocals = A68_NIL;
WLHAAMM = AYGAAMM_make_command(TLHAAMM, SLHAAMM, A_UNITE(RLHAAMM,mode2,2,QLHAAMM), XMDAOST_normalaccess, PLHAAMM, ULHAAMM) ;
MYGAAMM.data[10] = A_UNITE(VLHAAMM,mode1,1,WLHAAMM);
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
 /* line 996: */
LTAAOST_opt( ALFAOST_name_syntax, &BMHAAMM );
FMHAAMM.fn.fn_global = GNGAAMM_edit_action;
FMHAAMM.nonlocals = A68_NIL;
HMHAAMM = AYGAAMM_make_command(EMHAAMM, DMHAAMM, A_UNITE(CMHAAMM,mode2,2,BMHAAMM), XMDAOST_normalaccess, AMHAAMM, FMHAAMM) ;
MYGAAMM.data[11] = A_UNITE(GMHAAMM,mode1,1,HMHAAMM);
ZAAAOSI_makervc( KMHAAMM, &LMHAAMM );
IMHAAMM.Name = LMHAAMM;
IMHAAMM.Abreviation = EOAAOSL_nullstr;
IMHAAMM.Parameter = SRAAOST_noparameters;
 /* line 997: */
IMHAAMM.Access = XMDAOST_normalaccess;
 /* line 999: */
IMHAAMM.Continuation = HODAOST_finish;
 /* line 1000: */
ZAAAOSI_makervc( NMHAAMM, &OMHAAMM );
IMHAAMM.Help = A_UNITE(PMHAAMM,mode1,1,OMHAAMM);
RMHAAMM.fn.fn_global = MMDAOST_nullcommand;
RMHAAMM.nonlocals = A68_NIL;
IMHAAMM.Command = A_UNITE(QMHAAMM,mode2,2,RMHAAMM);
 /* line 1001: */
SMHAAMM = A_HEAP(A68_222 ) ;
(*SMHAAMM) = IMHAAMM ;
MYGAAMM.data[12] = A_UNITE(TMHAAMM,mode1,1,SMHAAMM);
 /* line 1002: */
 /* line 1003: */
 /* line 1004: */
 /* line 1005: */
 /* line 1006: */
LTAAOST_opt( ALFAOST_name_syntax, &XMHAAMM );
BNHAAMM.fn.fn_global = TCGAAMM_go_action;
BNHAAMM.nonlocals = A68_NIL;
DNHAAMM = AYGAAMM_make_command(ANHAAMM, A_HVEC(ZMHAAMM,'G',A68_CHAR ), A_UNITE(YMHAAMM,mode2,2,XMHAAMM), XMDAOST_normalaccess, WMHAAMM, BNHAAMM) ;
MYGAAMM.data[13] = A_UNITE(CNHAAMM,mode1,1,DNHAAMM);
 /* line 1007: */
 /* line 1008: */
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
DUAAOST_star( ALFAOST_name_syntax, &INHAAMM );
MNHAAMM.fn.fn_global = TTGAAMM_install_action;
MNHAAMM.nonlocals = A68_NIL;
ONHAAMM = AYGAAMM_make_command(LNHAAMM, KNHAAMM, A_UNITE(JNHAAMM,mode2,2,INHAAMM), XMDAOST_normalaccess, HNHAAMM, MNHAAMM) ;
MYGAAMM.data[14] = A_UNITE(NNHAAMM,mode1,1,ONHAAMM);
 /* line 1012: */
 /* line 1013: */
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
DUAAOST_star( ALFAOST_name_syntax, &SNHAAMM );
LTAAOST_opt( A_UNITE(TNHAAMM,mode2,2,SNHAAMM), &UNHAAMM );
YNHAAMM.fn.fn_global = QCGAAMM_link_action;
YNHAAMM.nonlocals = A68_NIL;
AOHAAMM = AYGAAMM_make_command(XNHAAMM, A_HVEC(WNHAAMM,'L',A68_CHAR ), A_UNITE(VNHAAMM,mode2,2,UNHAAMM), XMDAOST_normalaccess, RNHAAMM, YNHAAMM) ;
MYGAAMM.data[15] = A_UNITE(ZNHAAMM,mode1,1,AOHAAMM);
 /* line 1017: */
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
 /* line 1021: */
DUAAOST_star( ALFAOST_name_syntax, &EOHAAMM );
IOHAAMM.fn.fn_global = QTGAAMM_module_action;
IOHAAMM.nonlocals = A68_NIL;
KOHAAMM = AYGAAMM_make_command(HOHAAMM, A_HVEC(GOHAAMM,'M',A68_CHAR ), A_UNITE(FOHAAMM,mode2,2,EOHAAMM), XMDAOST_normalaccess, DOHAAMM, IOHAAMM) ;
MYGAAMM.data[16] = A_UNITE(JOHAAMM,mode1,1,KOHAAMM);
 /* line 1022: */
 /* line 1023: */
 /* line 1024: */
 /* line 1025: */
 /* line 1026: */
DUAAOST_star( ALFAOST_name_syntax, &POHAAMM );
LTAAOST_opt( A_UNITE(QOHAAMM,mode2,2,POHAAMM), &ROHAAMM );
VOHAAMM.fn.fn_global = NSGAAMM_rebuild_action;
VOHAAMM.nonlocals = A68_NIL;
XOHAAMM = AYGAAMM_make_command(UOHAAMM, TOHAAMM, A_UNITE(SOHAAMM,mode2,2,ROHAAMM), XMDAOST_normalaccess, OOHAAMM, VOHAAMM) ;
MYGAAMM.data[17] = A_UNITE(WOHAAMM,mode1,1,XOHAAMM);
 /* line 1027: */
 /* line 1028: */
 /* line 1029: */
 /* line 1030: */
 /* line 1031: */
DUAAOST_star( HNFAOST_filename_syntax, &CPHAAMM );
LTAAOST_opt( A_UNITE(DPHAAMM,mode2,2,CPHAAMM), &EPHAAMM );
IPHAAMM.fn.fn_global = JGGAAMM_save_action;
IPHAAMM.nonlocals = A68_NIL;
KPHAAMM = AYGAAMM_make_command(HPHAAMM, GPHAAMM, A_UNITE(FPHAAMM,mode2,2,EPHAAMM), XMDAOST_normalaccess, BPHAAMM, IPHAAMM) ;
MYGAAMM.data[18] = A_UNITE(JPHAAMM,mode1,1,KPHAAMM);
 /* line 1032: */
 /* line 1033: */
 /* line 1034: */
 /* line 1035: */
 /* line 1036: */
DUAAOST_star( ALFAOST_name_syntax, &PPHAAMM );
TPHAAMM.fn.fn_global = HSGAAMM_simplespecchange_action;
TPHAAMM.nonlocals = A68_NIL;
VPHAAMM = AYGAAMM_make_command(SPHAAMM, RPHAAMM, A_UNITE(QPHAAMM,mode2,2,PPHAAMM), XMDAOST_normalaccess, OPHAAMM, TPHAAMM) ;
MYGAAMM.data[19] = A_UNITE(UPHAAMM,mode1,1,VPHAAMM);
 /* line 1037: */
 /* line 1038: */
 /* line 1039: */
 /* line 1040: */
 /* line 1041: */
DUAAOST_star( ALFAOST_name_syntax, &AQHAAMM );
EQHAAMM.fn.fn_global = KSGAAMM_specchange_action;
EQHAAMM.nonlocals = A68_NIL;
GQHAAMM = AYGAAMM_make_command(DQHAAMM, CQHAAMM, A_UNITE(BQHAAMM,mode2,2,AQHAAMM), XMDAOST_normalaccess, ZPHAAMM, EQHAAMM) ;
MYGAAMM.data[20] = A_UNITE(FQHAAMM,mode1,1,GQHAAMM);
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
 /* line 1045: */
 /* line 1046: */
DUAAOST_star( ALFAOST_name_syntax, &LQHAAMM );
LTAAOST_opt( A_UNITE(MQHAAMM,mode2,2,LQHAAMM), &NQHAAMM );
RQHAAMM.fn.fn_global = LCGAAMM_translate_action;
RQHAAMM.nonlocals = A68_NIL;
TQHAAMM = AYGAAMM_make_command(QQHAAMM, PQHAAMM, A_UNITE(OQHAAMM,mode2,2,NQHAAMM), XMDAOST_normalaccess, KQHAAMM, RQHAAMM) ;
MYGAAMM.data[21] = A_UNITE(SQHAAMM,mode1,1,TQHAAMM);
 /* line 1047: */
 /* line 1048: */
 /* line 1049: */
 /* line 1050: */
 /* line 1051: */
DUAAOST_star( XLFAOST_string_syntax, &YQHAAMM );
CRHAAMM.fn.fn_global = ZDGAAMM_undefine_action;
CRHAAMM.nonlocals = A68_NIL;
ERHAAMM = AYGAAMM_make_command(BRHAAMM, ARHAAMM, A_UNITE(ZQHAAMM,mode2,2,YQHAAMM), XMDAOST_normalaccess, XQHAAMM, CRHAAMM) ;
MYGAAMM.data[22] = A_UNITE(DRHAAMM,mode1,1,ERHAAMM);
 /* line 1052: */
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
 /* line 1056: */
LTAAOST_opt( ALFAOST_name_syntax, &JRHAAMM );
NRHAAMM.fn.fn_global = QSGAAMM_update_action;
NRHAAMM.nonlocals = A68_NIL;
PRHAAMM = AYGAAMM_make_command(MRHAAMM, LRHAAMM, A_UNITE(KRHAAMM,mode2,2,JRHAAMM), XMDAOST_normalaccess, IRHAAMM, NRHAAMM) ;
MYGAAMM.data[23] = A_UNITE(ORHAAMM,mode1,1,PRHAAMM);
 /* line 1057: */
 /* line 1058: */
 /* line 1059: */
 /* line 1060: */
 /* line 1061: */
DUAAOST_star( ALFAOST_name_syntax, &URHAAMM );
YRHAAMM.fn.fn_global = PKFAAMM_version_action;
YRHAAMM.nonlocals = A68_NIL;
ASHAAMM = AYGAAMM_make_command(XRHAAMM, WRHAAMM, A_UNITE(VRHAAMM,mode2,2,URHAAMM), XMDAOST_normalaccess, TRHAAMM, YRHAAMM) ;
MYGAAMM.data[24] = A_UNITE(ZRHAAMM,mode1,1,ASHAAMM);
 /* line 1062: */
 /* line 1063: */
 /* line 1064: */
 /* line 1065: */
 /* line 1066: */
 /* line 1067: */
HSHAAMM.fn.fn_global = LXGAAMM_debug_action;
HSHAAMM.nonlocals = A68_NIL;
JSHAAMM = AYGAAMM_make_command(GSHAAMM, FSHAAMM, SRAAOST_noparameters, BNDAOST_hiddenaccess, ESHAAMM, HSHAAMM) ;
MYGAAMM.data[25] = A_UNITE(ISHAAMM,mode1,1,JSHAAMM);
ARDAOST_makecommands( A_HISVEC(LSHAAMM,MYGAAMM,26,A68_221 ), &MSHAAMM );
KSHAAMM = MSHAAMM;
} 
A_PROC_EXIT(make_mm_commands);
*ReturnedValue = (KSHAAMM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void RHFAAMM(void)   /* initialise DECS mm_actions */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/mm_actions.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/mm_version.m","./mfiles/mm_utilities.m","./mfiles/mm_oscommands.m","./mfiles/mm_basics.m","/u/model/ella/ostools/assoc/mfiles/commandcaller.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAAMM();   /* USE mm_version */
EEDAAMM();   /* USE mm_utilities */
AWCAAMM();   /* USE mm_oscommands */
SAAAAMM();   /* USE mm_basics */
AYGAOST();   /* USE commandcaller */
TIGAOST();   /* USE ioprocs */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/mm_actions.a68";
A_config.translation_time = "Tue Apr  4 09:55:17 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "QHFAAMM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:55:17 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mm_actions);
UEAALIB_a68config(LGAALIB_configinfo, VHFAAMM);
 /* line 53: */
 /* line 70: */
 /* line 86: */
 /* line 91: */
 /* line 96: */
 /* line 101: */
 /* line 106: */
 /* line 111: */
 /* line 116: */
 /* line 121: */
 /* line 151: */
YLFAAMM_env_heading = XLFAAMM;
 /* line 153: */
 /* line 193: */
 /* line 198: */
 /* line 203: */
 /* line 209: */
 /* line 238: */
 /* line 243: */
 /* line 376: */
 /* line 382: */
 /* line 388: */
 /* line 393: */
 /* line 398: */
 /* line 409: */
 /* line 414: */
 /* line 419: */
 /* line 432: */
 /* line 457: */
 /* line 476: */
 /* line 544: */
 /* line 550: */
 /* line 556: */
 /* line 562: */
 /* line 568: */
 /* line 593: */
 /* line 603: */
 /* line 719: */
 /* line 724: */
 /* line 729: */
 /* line 734: */
 /* line 759: */
 /* line 764: */
 /* line 769: */
 /* line 798: */
 /* line 821: */
 /* line 826: */
 /* line 837: */
 /* line 1069: */
 /* line 1070: */
 /* line 1071: */
/*SKIP*/;
A_PROC_EXIT(DECS mm_actions);
} 
#undef NL
/* end of translation of ./a68files/mm_actions.a68 */
