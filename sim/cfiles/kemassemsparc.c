
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
/* UNAME:JIDASIM */
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
struct A68t160 ;

A_PROCEDURE(A68_CHAR ,A68t159,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160,MODE36) CHAR */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t160 ,A68_INT ,struct A68t36 ,A68_VC *),(struct A68t160 ,A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE160,INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t162,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE160,MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t160 ,struct A68t36 ,A68_VC *),(struct A68t160 ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE160,MODE36) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE160,MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t165,(A68_CHAR ,struct A68t160 ,struct A68t36 ),(A68_CHAR ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(CHAR,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,struct A68t160 ,struct A68t36 ),(A68_VC ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE26,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t160 ,struct A68t36 ),(A68_INT ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_BOOL ,struct A68t160 ,struct A68t36 ),(A68_BOOL ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BOOL,MODE160,MODE36) VOID */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t160 ,struct A68t36 ,struct A68t170 *),(struct A68t160 ,struct A68t36 ,struct A68t170 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE160,MODE36) MODE170 */
struct A68t178{
A68_INT  Svoid;
A_PAD_INT(PAD_34)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179{
A68_INT  Snull;
A_PAD_INT(PAD_35)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t170 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178  mode8;
struct A68t179  mode9;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,MODE178,MODE179)  */
struct A68t171{
A68_VC  Id;
struct A68t170  T;
struct A68t171 * Rest;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE26,MODE170,REF MODE171)  */
struct A68t172{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Upb;
A_PAD_INT(PAD_37)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t173{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t174{
A68_INT  No;
A_PAD_INT(PAD_38)
struct A68t170  Type;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,MODE170)  */
struct A68t175{
A68_INT  No;
A_PAD_INT(PAD_39)
struct A68t173  T;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,MODE173)  */
struct A68t176{
struct A68t170  From;
struct A68t170  To;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE170,MODE170)  */
struct A68t177{
struct A68t170  T;
struct A68t177 * Rest;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE170,REF MODE177)  */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t170 ,struct A68t160 ,struct A68t36 ),(struct A68t170 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE170,MODE160,MODE36) VOID */
struct A68t182 ;

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t160 ,struct A68t36 ,struct A68t182 *),(struct A68t160 ,struct A68t36 ,struct A68t182 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE160,MODE36) MODE182 */
A_VECTOR(struct A68t184 ,A68t183);
typedef struct A68t183  A68_183 ;    /* VECTOR [] MODE184 */
struct A68t184{
A68_INT  Instoffset;
A_PAD_INT(PAD_40)
A68_INT  Offset;
A_PAD_INT(PAD_41)
A68_INT  Size;
A_PAD_INT(PAD_42)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT)  */
struct A68t182{
struct A68t170  Type;
struct A68t183  Blocks;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE170,REF MODE183)  */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t182 ,struct A68t160 ,struct A68t36 ),(struct A68t182 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE182,MODE160,MODE36) VOID */
struct A68t187 ;

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t160 ,struct A68t36 ,struct A68t187 *),(struct A68t160 ,struct A68t36 ,struct A68t187 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE160,MODE36) MODE187 */
struct A68t187{
struct A68t182  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_43)
A68_INT  Ramsize;
A_PAD_INT(PAD_44)
A68_INT  Step;
A_PAD_INT(PAD_45)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE182,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t187 ,struct A68t160 ,struct A68t36 ),(struct A68t187 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE187,MODE160,MODE36) VOID */
struct A68t190 ;

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t160 ,struct A68t36 ,struct A68t190 *),(struct A68t160 ,struct A68t36 ,struct A68t190 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE160,MODE36) MODE190 */
struct A68t190{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_46)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t190 ,struct A68t160 ,struct A68t36 ),(struct A68t190 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE190,MODE160,MODE36) VOID */
struct A68t193 ;

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t160 ,struct A68t36 ,struct A68t193 *),(struct A68t160 ,struct A68t36 ,struct A68t193 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE160,MODE36) MODE193 */
A_VECTOR(struct A68t190 ,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] MODE190 */
struct A68t193{
struct A68t187 * Ram;
struct A68t182  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_47)
struct A68t194  Body;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE187,MODE182,INT,REF MODE194)  */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t193 ,struct A68t160 ,struct A68t36 ),(struct A68t193 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE193,MODE160,MODE36) VOID */
struct A68t197 ;

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t160 ,struct A68t36 ,struct A68t197 *),(struct A68t160 ,struct A68t36 ,struct A68t197 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE160,MODE36) MODE197 */
struct A68t197{
A68_INT  Fn;
A_PAD_INT(PAD_48)
A68_INT  Instance;
A_PAD_INT(PAD_49)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,struct A68t160 ,struct A68t36 ),(struct A68t197 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE197,MODE160,MODE36) VOID */
struct A68t200 ;

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t160 ,struct A68t36 ,struct A68t200 *),(struct A68t160 ,struct A68t36 ,struct A68t200 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE160,MODE36) MODE200 */
struct A68t200 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t182  mode2;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(MODE197,MODE182)  */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t200 ,struct A68t160 ,struct A68t36 ),(struct A68t200 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE200,MODE160,MODE36) VOID */
struct A68t203 ;

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t160 ,struct A68t36 ,struct A68t203 *),(struct A68t160 ,struct A68t36 ,struct A68t203 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE160,MODE36) MODE203 */
struct A68t205{
struct A68t182 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_50)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE182,INT)  */
struct A68t204 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t205  mode2;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE197,MODE205)  */
struct A68t203{
struct A68t204  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_51)
A68_INT  Base;
A_PAD_INT(PAD_52)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE204,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t203 ,struct A68t160 ,struct A68t36 ),(struct A68t203 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE203,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,25,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t216,(A68_VC *),(A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF REF MODE26) VOID */
A_ISTRUCT(struct A68t52 ,5,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_CHAR *,A68t218,(A68_INT ),(A68_INT ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT) REF CHAR */

A_PROCEDURE(A68_VOID ,A68t219,(A68_BITS ,A68_INT ),(A68_BITS ,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(BITS,INT) VOID */
A_ROW(A68_BITS ,A68t220,1);
typedef struct A68t220  A68_220 ;    /* [] BITS */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t220 ),(struct A68t220 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE220) VOID */

A_PROCEDURE(A68_BITS ,A68t222,(A68_INT ),(A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_VOID ,A68t223,(A68_INT *),(A68_INT *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(A68_CHAR *,A68_VC *),(A68_CHAR *,A68_VC *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF CHAR) REF MODE26 */

A_PROCEDURE(A68_BITS ,A68t225,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF CHAR) BITS */
A_ISTRUCT(A68_CHAR ,3,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 3 MODE52 */
A_ROW(A68_INT ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t229,(A68_BOOL ,struct A68t228 *),(A68_BOOL ,struct A68t228 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(BOOL) MODE228 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE160) VOID */
struct A68t231{
A68_INT  Location;
A_PAD_INT(PAD_53)
A68_INT  Size;
A_PAD_INT(PAD_54)
A68_BOOL  Canoptimise;
A_PAD_BOOL(PAD_55)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,INT,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t232,(struct A68t231 ,struct A68t231 ),(struct A68t231 ,struct A68t231 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE231,MODE231) BOOL */
struct A68t233{
A68_BITS  Rs1;
A_PAD_BITS(PAD_56)
A68_BITS  Rs2;
A_PAD_BITS(PAD_57)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(BITS,BITS)  */
struct A68t234{
A68_BITS  Rs1;
A_PAD_BITS(PAD_58)
A68_INT  Imm;
A_PAD_INT(PAD_59)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(BITS,INT)  */
struct A68t235{
A68_INT  Imm;
A_PAD_INT(PAD_60)
A68_BITS  Rd;
A_PAD_BITS(PAD_61)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,BITS)  */
struct A68t236 { A68_INT mode; union {
struct A68t233  mode1;
struct A68t234  mode2;
} data; };
typedef struct A68t236  A68_236 ;    /* UNION(MODE233,MODE234)  */
struct A68t237{
A68_BITS  Rs1;
A_PAD_BITS(PAD_62)
A68_BITS  Rs2;
A_PAD_BITS(PAD_63)
A68_BITS  Rd;
A_PAD_BITS(PAD_64)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(BITS,BITS,BITS)  */
struct A68t238{
A68_BITS  Rs1;
A_PAD_BITS(PAD_65)
A68_INT  Imm;
A_PAD_INT(PAD_66)
A68_BITS  Rd;
A_PAD_BITS(PAD_67)
};
typedef struct A68t238  A68_238 ;    /* STRUCT(BITS,INT,BITS)  */
struct A68t239 { A68_INT mode; union {
struct A68t237  mode1;
struct A68t238  mode2;
} data; };
typedef struct A68t239  A68_239 ;    /* UNION(MODE237,MODE238)  */
struct A68t240{
A68_BITS  Mask;
A_PAD_BITS(PAD_68)
A68_RC  M1a;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(BITS,MODE27)  */
struct A68t241{
A68_BITS  Mask;
A_PAD_BITS(PAD_69)
A68_RC  M1b;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(BITS,MODE27)  */
struct A68t242{
A68_BITS  Mask;
A_PAD_BITS(PAD_70)
A68_RC  M2a;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(BITS,MODE27)  */
struct A68t243{
A68_BITS  Mask;
A_PAD_BITS(PAD_71)
A68_RC  M2b;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(BITS,MODE27)  */
struct A68t244{
A68_BITS  Mask;
A_PAD_BITS(PAD_72)
A68_RC  M2c;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(BITS,MODE27)  */
struct A68t245{
A68_BITS  Mask;
A_PAD_BITS(PAD_73)
A68_RC  M2d;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(BITS,MODE27)  */
struct A68t246{
A68_BITS  Mask;
A_PAD_BITS(PAD_74)
A68_RC  M3a;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(BITS,MODE27)  */
struct A68t247{
A68_BITS  Mask;
A_PAD_BITS(PAD_75)
A68_RC  M3b;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(BITS,MODE27)  */
struct A68t248{
A68_BITS  Mask;
A_PAD_BITS(PAD_76)
A68_RC  M3c;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(BITS,MODE27)  */
struct A68t249{
A68_BITS  Mask;
A_PAD_BITS(PAD_77)
A68_RC  M3d;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(BITS,MODE27)  */
struct A68t250{
A68_BITS  Mask;
A_PAD_BITS(PAD_78)
A68_RC  M3e;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(BITS,MODE27)  */

A_PROCEDURE(A68_VOID ,A68t251,(A68_BOOL ,struct A68t240 *),(A68_BOOL ,struct A68t240 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(BOOL) MODE240 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_BOOL ,struct A68t241 *),(A68_BOOL ,struct A68t241 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BOOL) MODE241 */

A_PROCEDURE(A68_VOID ,A68t253,(A68_BOOL ,struct A68t242 *),(A68_BOOL ,struct A68t242 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(BOOL) MODE242 */

A_PROCEDURE(A68_VOID ,A68t254,(A68_BOOL ,struct A68t243 *),(A68_BOOL ,struct A68t243 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(BOOL) MODE243 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_BOOL ,struct A68t244 *),(A68_BOOL ,struct A68t244 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(BOOL) MODE244 */

A_PROCEDURE(A68_VOID ,A68t256,(A68_BOOL ,struct A68t245 *),(A68_BOOL ,struct A68t245 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(BOOL) MODE245 */

A_PROCEDURE(A68_VOID ,A68t257,(A68_BOOL ,struct A68t246 *),(A68_BOOL ,struct A68t246 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(BOOL) MODE246 */

A_PROCEDURE(A68_VOID ,A68t258,(A68_BOOL ,struct A68t247 *),(A68_BOOL ,struct A68t247 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(BOOL) MODE247 */

A_PROCEDURE(A68_VOID ,A68t259,(A68_BOOL ,struct A68t248 *),(A68_BOOL ,struct A68t248 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(BOOL) MODE248 */

A_PROCEDURE(A68_VOID ,A68t260,(A68_BOOL ,struct A68t249 *),(A68_BOOL ,struct A68t249 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(BOOL) MODE249 */

A_PROCEDURE(A68_VOID ,A68t261,(A68_BOOL ,struct A68t250 *),(A68_BOOL ,struct A68t250 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(BOOL) MODE250 */

A_PROCEDURE(A68_VOID ,A68t262,(A68_BOOL ,A68_RC *),(A68_BOOL ,A68_RC *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(BOOL) MODE27 */
#define A68_263  A68_RC 
#define A68t263 A68t27            /* FLEX [] CHAR */
#define A68_264  A68_240 
#define A68t264 A68t240            /* STRUCT(BITS,MODE263)  */
#define A68_265  A68_241 
#define A68t265 A68t241            /* STRUCT(BITS,MODE263)  */
#define A68_266  A68_242 
#define A68t266 A68t242            /* STRUCT(BITS,MODE263)  */
#define A68_267  A68_243 
#define A68t267 A68t243            /* STRUCT(BITS,MODE263)  */
#define A68_268  A68_244 
#define A68t268 A68t244            /* STRUCT(BITS,MODE263)  */
#define A68_269  A68_245 
#define A68t269 A68t245            /* STRUCT(BITS,MODE263)  */
#define A68_270  A68_246 
#define A68t270 A68t246            /* STRUCT(BITS,MODE263)  */
#define A68_271  A68_247 
#define A68t271 A68t247            /* STRUCT(BITS,MODE263)  */
#define A68_272  A68_248 
#define A68t272 A68t248            /* STRUCT(BITS,MODE263)  */
#define A68_273  A68_249 
#define A68t273 A68t249            /* STRUCT(BITS,MODE263)  */
#define A68_274  A68_250 
#define A68t274 A68t250            /* STRUCT(BITS,MODE263)  */

A_PROCEDURE(A68_BITS ,A68t275,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(BITS) BITS */
A_ISTRUCT(A68_CHAR ,40,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 40 CHAR */
struct A68t277{
struct A68t244  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_79)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE244,BITS)  */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t244 ,A68_BITS ,struct A68t277 *),(struct A68t244 ,A68_BITS ,struct A68t277 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE244,BITS) MODE277 */
struct A68t279{
struct A68t245  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_80)
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE245,BITS)  */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t245 ,A68_BITS ,struct A68t279 *),(struct A68t245 ,A68_BITS ,struct A68t279 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE245,BITS) MODE279 */
struct A68t281{
struct A68t247  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_81)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE247,BITS)  */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t247 ,A68_BITS ,struct A68t281 *),(struct A68t247 ,A68_BITS ,struct A68t281 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE247,BITS) MODE281 */
A_ISTRUCT(A68_CHAR ,2,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t240 ,A68_INT ),(struct A68t240 ,A68_INT ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE240,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t285,(struct A68t240 ,struct A68t231 *),(struct A68t240 ,struct A68t231 *,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE240,REF MODE231) VOID */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t241 ,A68_INT ),(struct A68t241 ,A68_INT ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE241,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t241 ,struct A68t231 *),(struct A68t241 ,struct A68t231 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE241,REF MODE231) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t242 ,A68_INT ),(struct A68t242 ,A68_INT ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE242,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t243 ,struct A68t235 ),(struct A68t243 ,struct A68t235 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE243,MODE235) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t277 ,A68_INT ),(struct A68t277 ,A68_INT ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE277,INT) VOID */
A_ISTRUCT(A68_CHAR ,21,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t277 ,struct A68t231 *),(struct A68t277 ,struct A68t231 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE277,REF MODE231) VOID */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t279 ,A68_INT ),(struct A68t279 ,A68_INT ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE279,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t279 ,struct A68t231 *),(struct A68t279 ,struct A68t231 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE279,REF MODE231) VOID */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t246 ,struct A68t239 ),(struct A68t246 ,struct A68t239 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE246,MODE239) VOID */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t281 ,struct A68t236 ),(struct A68t281 ,struct A68t236 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE281,MODE236) VOID */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t248 ,A68_BITS ),(struct A68t248 ,A68_BITS ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE248,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t249 ,struct A68t236 ),(struct A68t249 ,struct A68t236 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE249,MODE236) VOID */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t250 ,struct A68t239 ),(struct A68t250 ,struct A68t239 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE250,MODE239) VOID */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t231 ),(struct A68t231 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE231) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 35 CHAR */

A_PROCEDURE(A68_VOID ,A68t302,(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ),(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(BITS,INT,BITS,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(A68_INT ,A68_BITS ),(A68_INT ,A68_BITS ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT,BITS) VOID */
struct A68t304{
A68_INT  Addr;
A_PAD_INT(PAD_82)
A68_INT  Env;
A_PAD_INT(PAD_83)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t129 ,struct A68t304 *),(struct A68t129 ,struct A68t304 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE129) MODE304 */

A_PROCEDURE(A68_INT ,A68t306,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF CHAR) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kesave --- */
extern A68_INT  LGBASIM_readint(struct A68t160 ,struct A68t36 );
extern A68_VOID  PHBASIM_writeint(A68_INT ,struct A68t160 ,struct A68t36 );
/* --- End of imports from kesave --- */


/* --- Imports from basics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
extern A68_VOID  QKDAOST_abort(A68_VC );
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
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  AWAAOSL_hexchars(struct A68t50 ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void EFBASIM(void);   /* kesave */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_209   NIDASIM = {"$Id: kemassemsparc.a68,v 34.2 1995/03/29 13:04:52 ella Exp $"}; 
A_GISVEC(A68_VC ,OIDASIM,NIDASIM,60)
static A68_36  PIDASIM_faultproc;
static A68_211   AJDASIM = {"******   SIMULATOR ERROR "}; 
static A68_212   BJDASIM = {"   ******"}; 
A_GISVEC(A68_VC ,CJDASIM,AJDASIM,25)
A_GISVEC(A68_VC ,DJDASIM,BJDASIM,9)
static A68_214   HJDASIM = {"ASSERT: "}; 
A_GISVEC(A68_VC ,IJDASIM,HJDASIM,8)
static A68_VC  NJDASIM_code;
#define PJDASIM_initsize 65536
static A68_215   UJDASIM = {"get_vec_chars:  NOT multiple of 4"}; 
A_GISVEC(A68_VC ,VJDASIM,UJDASIM,33)
static A68_211   OKDASIM = {"Extending code area from "}; 
A_GISVEC(A68_VC ,PKDASIM,OKDASIM,25)
static A68_95   TKDASIM = {" to "}; 
A_GISVEC(A68_VC ,UKDASIM,TKDASIM,4)
A68_INT  GLDASIM_location;
#define WMDASIM_bytesperline 32
static A68_226   LODASIM = {":  "}; 
A_GISVEC(A68_VC ,MODASIM,LODASIM,3)
static A68_226   BPDASIM = {":  "}; 
A_GISVEC(A68_VC ,CPDASIM,BPDASIM,3)
A68_INT  MPDASIM_nullmachineoffset;
static A68_228  RPDASIM_dellist;
static A68_INT  TPDASIM_topdellist;
A68_129  EQDASIM_maexecutable;
#define GQDASIM_mask13 0X1fffU
#define HQDASIM_mask22 0X3fffffU
#define IQDASIM_mask30 0X3fffffffU
A68_INT  JQDASIM_maximm13;
A68_INT  KQDASIM_minimm13;
A68_INT  LQDASIM_maximm22;
A68_INT  MQDASIM_minimm22;
A68_INT  NQDASIM_maximm30;
A68_INT  OQDASIM_minimm30;
A68_231  QQDASIM_nullmachinelabel;
static A68_251  VQDASIM_anonymous;
static A68_252  WQDASIM_anonymous;
static A68_253  XQDASIM_anonymous;
static A68_254  YQDASIM_anonymous;
static A68_255  ZQDASIM_anonymous;
static A68_256  ARDASIM_anonymous;
static A68_257  BRDASIM_anonymous;
static A68_258  CRDASIM_anonymous;
static A68_259  DRDASIM_anonymous;
static A68_260  ERDASIM_anonymous;
static A68_261  FRDASIM_anonymous;
#define XVDASIM_n 0X0U
#define YVDASIM_eq 0X1U
#define ZVDASIM_z YVDASIM_eq
#define AWDASIM_le 0X2U
#define BWDASIM_l 0X3U
#define CWDASIM_leu 0X4U
#define DWDASIM_lu 0X5U
#define EWDASIM_cs DWDASIM_lu
#define FWDASIM_neg 0X6U
#define GWDASIM_vs 0X7U
#define HWDASIM_a 0X8U
#define IWDASIM_ne 0X9U
#define JWDASIM_nz IWDASIM_ne
#define KWDASIM_g 0XaU
#define LWDASIM_ge 0XbU
#define MWDASIM_gu 0XcU
#define NWDASIM_geu 0XdU
#define OWDASIM_cc NWDASIM_geu
#define PWDASIM_pos 0XeU
#define QWDASIM_vc 0XfU
#define RWDASIM_n_a 0X10U
#define SWDASIM_eq_a 0X11U
#define TWDASIM_z_a SWDASIM_eq_a
#define UWDASIM_le_a 0X12U
#define VWDASIM_l_a 0X13U
#define WWDASIM_leu_a 0X14U
#define XWDASIM_lu_a 0X15U
#define YWDASIM_cs_a XWDASIM_lu_a
#define ZWDASIM_neg_a 0X16U
#define AXDASIM_vs_a 0X17U
#define BXDASIM_a_a 0X18U
#define CXDASIM_ne_a 0X19U
#define DXDASIM_nz_a CXDASIM_ne_a
#define EXDASIM_g_a 0X1aU
#define FXDASIM_ge_a 0X1bU
#define GXDASIM_gu_a 0X1cU
#define HXDASIM_geu_a 0X1dU
#define IXDASIM_cc_a HXDASIM_geu_a
#define JXDASIM_pos_a 0X1eU
#define KXDASIM_vc_a 0X1fU
static A68_276   RXDASIM = {"Inappropriate attempt to swap condition."}; 
A_GISVEC(A68_VC ,SXDASIM,RXDASIM,40)
static A68_283   JYDASIM = {"1a"}; 
A_GISARR(A68_RC ,KYDASIM,JYDASIM,2)
A68_240  LYDASIM_call;
static A68_283   NYDASIM = {"1b"}; 
A_GISARR(A68_RC ,OYDASIM,NYDASIM,2)
A68_241  PYDASIM_calld;
static A68_283   RYDASIM = {"2a"}; 
A_GISARR(A68_RC ,SYDASIM,RYDASIM,2)
A68_242  TYDASIM_unimp;
static A68_283   VYDASIM = {"2b"}; 
A_GISARR(A68_RC ,WYDASIM,VYDASIM,2)
A68_243  XYDASIM_sethi;
static A68_283   ZYDASIM = {"2b"}; 
A_GISARR(A68_RC ,AZDASIM,ZYDASIM,2)
A68_243  BZDASIM_nop;
static A68_283   DZDASIM = {"2c"}; 
A_GISARR(A68_RC ,EZDASIM,DZDASIM,2)
A68_244  FZDASIM_b;
static A68_283   HZDASIM = {"2c"}; 
A_GISARR(A68_RC ,IZDASIM,HZDASIM,2)
A68_244  JZDASIM_fb;
static A68_283   LZDASIM = {"2c"}; 
A_GISARR(A68_RC ,MZDASIM,LZDASIM,2)
A68_244  NZDASIM_cb;
static A68_283   PZDASIM = {"2d"}; 
A_GISARR(A68_RC ,QZDASIM,PZDASIM,2)
A68_245  RZDASIM_bd;
static A68_283   TZDASIM = {"2d"}; 
A_GISARR(A68_RC ,UZDASIM,TZDASIM,2)
A68_245  VZDASIM_fbd;
static A68_283   XZDASIM = {"2d"}; 
A_GISARR(A68_RC ,YZDASIM,XZDASIM,2)
A68_245  ZZDASIM_cbd;
static A68_283   BAEASIM = {"3a"}; 
A_GISARR(A68_RC ,CAEASIM,BAEASIM,2)
A68_246  DAEASIM_add;
static A68_283   FAEASIM = {"3a"}; 
A_GISARR(A68_RC ,GAEASIM,FAEASIM,2)
A68_246  HAEASIM_and;
static A68_283   JAEASIM = {"3a"}; 
A_GISARR(A68_RC ,KAEASIM,JAEASIM,2)
A68_246  LAEASIM_or;
static A68_283   NAEASIM = {"3a"}; 
A_GISARR(A68_RC ,OAEASIM,NAEASIM,2)
A68_246  PAEASIM_xor;
static A68_283   RAEASIM = {"3a"}; 
A_GISARR(A68_RC ,SAEASIM,RAEASIM,2)
A68_246  TAEASIM_sub;
static A68_283   VAEASIM = {"3a"}; 
A_GISARR(A68_RC ,WAEASIM,VAEASIM,2)
A68_246  XAEASIM_andn;
static A68_283   ZAEASIM = {"3a"}; 
A_GISARR(A68_RC ,ABEASIM,ZAEASIM,2)
A68_246  BBEASIM_orn;
static A68_283   DBEASIM = {"3a"}; 
A_GISARR(A68_RC ,EBEASIM,DBEASIM,2)
A68_246  FBEASIM_xnor;
static A68_283   HBEASIM = {"3a"}; 
A_GISARR(A68_RC ,IBEASIM,HBEASIM,2)
A68_246  JBEASIM_addx;
static A68_283   LBEASIM = {"3a"}; 
A_GISARR(A68_RC ,MBEASIM,LBEASIM,2)
A68_246  NBEASIM_subx;
static A68_283   PBEASIM = {"3a"}; 
A_GISARR(A68_RC ,QBEASIM,PBEASIM,2)
A68_246  RBEASIM_addcc;
static A68_283   TBEASIM = {"3a"}; 
A_GISARR(A68_RC ,UBEASIM,TBEASIM,2)
A68_246  VBEASIM_andcc;
static A68_283   XBEASIM = {"3a"}; 
A_GISARR(A68_RC ,YBEASIM,XBEASIM,2)
A68_246  ZBEASIM_orcc;
static A68_283   BCEASIM = {"3a"}; 
A_GISARR(A68_RC ,CCEASIM,BCEASIM,2)
A68_246  DCEASIM_xorcc;
static A68_283   FCEASIM = {"3a"}; 
A_GISARR(A68_RC ,GCEASIM,FCEASIM,2)
A68_246  HCEASIM_subcc;
static A68_283   JCEASIM = {"3a"}; 
A_GISARR(A68_RC ,KCEASIM,JCEASIM,2)
A68_246  LCEASIM_andncc;
static A68_283   NCEASIM = {"3a"}; 
A_GISARR(A68_RC ,OCEASIM,NCEASIM,2)
A68_246  PCEASIM_orncc;
static A68_283   RCEASIM = {"3a"}; 
A_GISARR(A68_RC ,SCEASIM,RCEASIM,2)
A68_246  TCEASIM_xnorcc;
static A68_283   VCEASIM = {"3a"}; 
A_GISARR(A68_RC ,WCEASIM,VCEASIM,2)
A68_246  XCEASIM_addxcc;
static A68_283   ZCEASIM = {"3a"}; 
A_GISARR(A68_RC ,ADEASIM,ZCEASIM,2)
A68_246  BDEASIM_subxcc;
static A68_283   DDEASIM = {"3a"}; 
A_GISARR(A68_RC ,EDEASIM,DDEASIM,2)
A68_246  FDEASIM_taddcc;
static A68_283   HDEASIM = {"3a"}; 
A_GISARR(A68_RC ,IDEASIM,HDEASIM,2)
A68_246  JDEASIM_tsubcc;
static A68_283   LDEASIM = {"3a"}; 
A_GISARR(A68_RC ,MDEASIM,LDEASIM,2)
A68_246  NDEASIM_taddcctv;
static A68_283   PDEASIM = {"3a"}; 
A_GISARR(A68_RC ,QDEASIM,PDEASIM,2)
A68_246  RDEASIM_tsubcctv;
static A68_283   TDEASIM = {"3a"}; 
A_GISARR(A68_RC ,UDEASIM,TDEASIM,2)
A68_246  VDEASIM_mulscc;
static A68_283   XDEASIM = {"3a"}; 
A_GISARR(A68_RC ,YDEASIM,XDEASIM,2)
A68_246  ZDEASIM_sll;
static A68_283   BEEASIM = {"3a"}; 
A_GISARR(A68_RC ,CEEASIM,BEEASIM,2)
A68_246  DEEASIM_srl;
static A68_283   FEEASIM = {"3a"}; 
A_GISARR(A68_RC ,GEEASIM,FEEASIM,2)
A68_246  HEEASIM_sra;
static A68_283   JEEASIM = {"3a"}; 
A_GISARR(A68_RC ,KEEASIM,JEEASIM,2)
A68_246  LEEASIM_save;
static A68_283   NEEASIM = {"3a"}; 
A_GISARR(A68_RC ,OEEASIM,NEEASIM,2)
A68_246  PEEASIM_restore;
static A68_283   REEASIM = {"3a"}; 
A_GISARR(A68_RC ,SEEASIM,REEASIM,2)
A68_246  TEEASIM_ld;
static A68_283   VEEASIM = {"3a"}; 
A_GISARR(A68_RC ,WEEASIM,VEEASIM,2)
A68_246  XEEASIM_ldub;
static A68_283   ZEEASIM = {"3a"}; 
A_GISARR(A68_RC ,AFEASIM,ZEEASIM,2)
A68_246  BFEASIM_lduh;
static A68_283   DFEASIM = {"3a"}; 
A_GISARR(A68_RC ,EFEASIM,DFEASIM,2)
A68_246  FFEASIM_ldd;
static A68_283   HFEASIM = {"3a"}; 
A_GISARR(A68_RC ,IFEASIM,HFEASIM,2)
A68_246  JFEASIM_st;
static A68_283   LFEASIM = {"3a"}; 
A_GISARR(A68_RC ,MFEASIM,LFEASIM,2)
A68_246  NFEASIM_stb;
static A68_283   PFEASIM = {"3a"}; 
A_GISARR(A68_RC ,QFEASIM,PFEASIM,2)
A68_246  RFEASIM_sth;
static A68_283   TFEASIM = {"3a"}; 
A_GISARR(A68_RC ,UFEASIM,TFEASIM,2)
A68_246  VFEASIM_std;
static A68_283   XFEASIM = {"3a"}; 
A_GISARR(A68_RC ,YFEASIM,XFEASIM,2)
A68_246  ZFEASIM_ldsb;
static A68_283   BGEASIM = {"3a"}; 
A_GISARR(A68_RC ,CGEASIM,BGEASIM,2)
A68_246  DGEASIM_ldsh;
static A68_283   FGEASIM = {"3a"}; 
A_GISARR(A68_RC ,GGEASIM,FGEASIM,2)
A68_246  HGEASIM_ldstub;
static A68_283   JGEASIM = {"3a"}; 
A_GISARR(A68_RC ,KGEASIM,JGEASIM,2)
A68_246  LGEASIM_swap;
static A68_283   NGEASIM = {"3a"}; 
A_GISARR(A68_RC ,OGEASIM,NGEASIM,2)
A68_246  PGEASIM_ldf;
static A68_283   RGEASIM = {"3a"}; 
A_GISARR(A68_RC ,SGEASIM,RGEASIM,2)
A68_246  TGEASIM_ldfsr;
static A68_283   VGEASIM = {"3a"}; 
A_GISARR(A68_RC ,WGEASIM,VGEASIM,2)
A68_246  XGEASIM_lddf;
static A68_283   ZGEASIM = {"3a"}; 
A_GISARR(A68_RC ,AHEASIM,ZGEASIM,2)
A68_246  BHEASIM_stf;
static A68_283   DHEASIM = {"3a"}; 
A_GISARR(A68_RC ,EHEASIM,DHEASIM,2)
A68_246  FHEASIM_stfsr;
static A68_283   HHEASIM = {"3a"}; 
A_GISARR(A68_RC ,IHEASIM,HHEASIM,2)
A68_246  JHEASIM_stdf;
static A68_283   LHEASIM = {"3a"}; 
A_GISARR(A68_RC ,MHEASIM,LHEASIM,2)
A68_246  NHEASIM_ldc;
static A68_283   PHEASIM = {"3a"}; 
A_GISARR(A68_RC ,QHEASIM,PHEASIM,2)
A68_246  RHEASIM_ldcsr;
static A68_283   THEASIM = {"3a"}; 
A_GISARR(A68_RC ,UHEASIM,THEASIM,2)
A68_246  VHEASIM_lddc;
static A68_283   XHEASIM = {"3a"}; 
A_GISARR(A68_RC ,YHEASIM,XHEASIM,2)
A68_246  ZHEASIM_stc;
static A68_283   BIEASIM = {"3a"}; 
A_GISARR(A68_RC ,CIEASIM,BIEASIM,2)
A68_246  DIEASIM_stcsr;
static A68_283   FIEASIM = {"3a"}; 
A_GISARR(A68_RC ,GIEASIM,FIEASIM,2)
A68_246  HIEASIM_stdc;
static A68_283   JIEASIM = {"3a"}; 
A_GISARR(A68_RC ,KIEASIM,JIEASIM,2)
A68_246  LIEASIM_fitos;
static A68_283   NIEASIM = {"3a"}; 
A_GISARR(A68_RC ,OIEASIM,NIEASIM,2)
A68_246  PIEASIM_fitod;
static A68_283   RIEASIM = {"3a"}; 
A_GISARR(A68_RC ,SIEASIM,RIEASIM,2)
A68_246  TIEASIM_fitox;
static A68_283   VIEASIM = {"3a"}; 
A_GISARR(A68_RC ,WIEASIM,VIEASIM,2)
A68_246  XIEASIM_fstoir;
static A68_283   ZIEASIM = {"3a"}; 
A_GISARR(A68_RC ,AJEASIM,ZIEASIM,2)
A68_246  BJEASIM_fdtoir;
static A68_283   DJEASIM = {"3a"}; 
A_GISARR(A68_RC ,EJEASIM,DJEASIM,2)
A68_246  FJEASIM_fxtoir;
static A68_283   HJEASIM = {"3a"}; 
A_GISARR(A68_RC ,IJEASIM,HJEASIM,2)
A68_246  JJEASIM_fstoi;
static A68_283   LJEASIM = {"3a"}; 
A_GISARR(A68_RC ,MJEASIM,LJEASIM,2)
A68_246  NJEASIM_fdtoi;
static A68_283   PJEASIM = {"3a"}; 
A_GISARR(A68_RC ,QJEASIM,PJEASIM,2)
A68_246  RJEASIM_fxtoi;
static A68_283   TJEASIM = {"3a"}; 
A_GISARR(A68_RC ,UJEASIM,TJEASIM,2)
A68_246  VJEASIM_fstod;
static A68_283   XJEASIM = {"3a"}; 
A_GISARR(A68_RC ,YJEASIM,XJEASIM,2)
A68_246  ZJEASIM_fstox;
static A68_283   BKEASIM = {"3a"}; 
A_GISARR(A68_RC ,CKEASIM,BKEASIM,2)
A68_246  DKEASIM_fdtos;
static A68_283   FKEASIM = {"3a"}; 
A_GISARR(A68_RC ,GKEASIM,FKEASIM,2)
A68_246  HKEASIM_fdtox;
static A68_283   JKEASIM = {"3a"}; 
A_GISARR(A68_RC ,KKEASIM,JKEASIM,2)
A68_246  LKEASIM_fxtos;
static A68_283   NKEASIM = {"3a"}; 
A_GISARR(A68_RC ,OKEASIM,NKEASIM,2)
A68_246  PKEASIM_fxtod;
static A68_283   RKEASIM = {"3a"}; 
A_GISARR(A68_RC ,SKEASIM,RKEASIM,2)
A68_246  TKEASIM_fmovs;
static A68_283   VKEASIM = {"3a"}; 
A_GISARR(A68_RC ,WKEASIM,VKEASIM,2)
A68_246  XKEASIM_fnegs;
static A68_283   ZKEASIM = {"3a"}; 
A_GISARR(A68_RC ,ALEASIM,ZKEASIM,2)
A68_246  BLEASIM_fabss;
static A68_283   DLEASIM = {"3a"}; 
A_GISARR(A68_RC ,ELEASIM,DLEASIM,2)
A68_246  FLEASIM_fsqrts;
static A68_283   HLEASIM = {"3a"}; 
A_GISARR(A68_RC ,ILEASIM,HLEASIM,2)
A68_246  JLEASIM_fsqrtd;
static A68_283   LLEASIM = {"3a"}; 
A_GISARR(A68_RC ,MLEASIM,LLEASIM,2)
A68_246  NLEASIM_fsqrtx;
static A68_283   PLEASIM = {"3a"}; 
A_GISARR(A68_RC ,QLEASIM,PLEASIM,2)
A68_246  RLEASIM_fadds;
static A68_283   TLEASIM = {"3a"}; 
A_GISARR(A68_RC ,ULEASIM,TLEASIM,2)
A68_246  VLEASIM_faddd;
static A68_283   XLEASIM = {"3a"}; 
A_GISARR(A68_RC ,YLEASIM,XLEASIM,2)
A68_246  ZLEASIM_faddx;
static A68_283   BMEASIM = {"3a"}; 
A_GISARR(A68_RC ,CMEASIM,BMEASIM,2)
A68_246  DMEASIM_fsubs;
static A68_283   FMEASIM = {"3a"}; 
A_GISARR(A68_RC ,GMEASIM,FMEASIM,2)
A68_246  HMEASIM_fsubd;
static A68_283   JMEASIM = {"3a"}; 
A_GISARR(A68_RC ,KMEASIM,JMEASIM,2)
A68_246  LMEASIM_fsubx;
static A68_283   NMEASIM = {"3a"}; 
A_GISARR(A68_RC ,OMEASIM,NMEASIM,2)
A68_246  PMEASIM_fmuls;
static A68_283   RMEASIM = {"3a"}; 
A_GISARR(A68_RC ,SMEASIM,RMEASIM,2)
A68_246  TMEASIM_fmuld;
static A68_283   VMEASIM = {"3a"}; 
A_GISARR(A68_RC ,WMEASIM,VMEASIM,2)
A68_246  XMEASIM_fmulx;
static A68_283   ZMEASIM = {"3a"}; 
A_GISARR(A68_RC ,ANEASIM,ZMEASIM,2)
A68_246  BNEASIM_fdivs;
static A68_283   DNEASIM = {"3a"}; 
A_GISARR(A68_RC ,ENEASIM,DNEASIM,2)
A68_246  FNEASIM_fdivd;
static A68_283   HNEASIM = {"3a"}; 
A_GISARR(A68_RC ,INEASIM,HNEASIM,2)
A68_246  JNEASIM_fdivx;
static A68_283   LNEASIM = {"3a"}; 
A_GISARR(A68_RC ,MNEASIM,LNEASIM,2)
A68_246  NNEASIM_fcmps;
static A68_283   PNEASIM = {"3a"}; 
A_GISARR(A68_RC ,QNEASIM,PNEASIM,2)
A68_246  RNEASIM_fcmpd;
static A68_283   TNEASIM = {"3a"}; 
A_GISARR(A68_RC ,UNEASIM,TNEASIM,2)
A68_246  VNEASIM_fcmpx;
static A68_283   XNEASIM = {"3a"}; 
A_GISARR(A68_RC ,YNEASIM,XNEASIM,2)
A68_246  ZNEASIM_fcmpes;
static A68_283   BOEASIM = {"3a"}; 
A_GISARR(A68_RC ,COEASIM,BOEASIM,2)
A68_246  DOEASIM_fcmped;
static A68_283   FOEASIM = {"3a"}; 
A_GISARR(A68_RC ,GOEASIM,FOEASIM,2)
A68_246  HOEASIM_fcmpex;
static A68_283   JOEASIM = {"3b"}; 
A_GISARR(A68_RC ,KOEASIM,JOEASIM,2)
A68_247  LOEASIM_t;
static A68_283   NOEASIM = {"3c"}; 
A_GISARR(A68_RC ,OOEASIM,NOEASIM,2)
A68_248  POEASIM_rdy;
static A68_283   ROEASIM = {"3d"}; 
A_GISARR(A68_RC ,SOEASIM,ROEASIM,2)
A68_249  TOEASIM_wry;
static A68_283   VOEASIM = {"3d"}; 
A_GISARR(A68_RC ,WOEASIM,VOEASIM,2)
A68_249  XOEASIM_iflush;
static A68_283   ZOEASIM = {"3a"}; 
A_GISARR(A68_RC ,APEASIM,ZOEASIM,2)
A68_250  BPEASIM_jmpl;
#define CPEASIM_t_int_overflow 0
static A68_291   AREASIM = {"Branch target too far"}; 
A_GISVEC(A68_VC ,BREASIM,AREASIM,21)
static A68_291   TREASIM = {"Branch target too far"}; 
A_GISVEC(A68_VC ,UREASIM,TREASIM,21)
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
#define IWEASIM_sp HWEASIM_o6
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
#define PXEASIM_fp OXEASIM_i6
#define QXEASIM_r31 0X1fU
#define RXEASIM_i7 QXEASIM_r31
static A68_301   YXEASIM = {"Offset too big for Control transfer"}; 
A_GISVEC(A68_VC ,ZXEASIM,YXEASIM,35)
extern void sparc_32bit_div();

#define MZEASIM_div sparc_32bit_div
extern void sparc_32bit_mul();

#define NZEASIM_mul sparc_32bit_mul
typedef struct   /* env of non-global proc */
{
A68_INT  Size;
A_PAD_INT(PAD_84)
} ZJDASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HNDASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WNDASIM_generator;

A_STATIC A68_VOID  SIDASIM_display(A68_VC  Message);

A68_VOID  ZIDASIM_simfault(A68_VC  Message);

A68_VOID  GJDASIM_assert(A68_VC  Description, A68_BOOL  Assertion);

A_STATIC A68_VOID  KJDASIM_generator(A68_BOOL  JJDASIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  RJDASIM_get_vec_chars(A68_INT  Size, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YJDASIM_generator(A68_BOOL  WJDASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  GKDASIM_free_vec_chars(A68_VC * Array);

A_STATIC A68_VOID  IKDASIM_createcodearea(void);

A_STATIC A68_VOID  KKDASIM_extendcodearea(void);

A_STATIC A68_VOID  FLDASIM_setcodeaccess(void);

A68_CHAR * ILDASIM_macoderef(A68_INT  Location);

A68_INT  KLDASIM_macodesize(void);

A_STATIC A68_VOID  OLDASIM_assemble8bitsat(A68_BITS  Byte, A68_INT  Location);

A_STATIC A68_VOID  SLDASIM_assemble16bitsat(A68_BITS  Word, A68_INT  Location);

A_STATIC A68_VOID  YLDASIM_assemble8bits(A68_BITS  Byte);

A_STATIC A68_VOID  AMDASIM_assemble16bits(A68_BITS  Word);

A_STATIC A68_VOID  CMDASIM_assemble16bitsarray(A68_220  Array);

A_STATIC A68_VOID  GMDASIM_assemble32bits(A68_BITS  Word);

A_STATIC A68_VOID  KMDASIM_assemble32bitsat(A68_BITS  Word, A68_INT  Location);

A_STATIC A68_BITS  NMDASIM_dissassemble16bitsat(A68_INT  Location);

A_STATIC A68_VOID  TMDASIM_setcodeindex(A68_INT * Index);

A_STATIC A68_VOID  VMDASIM_listcode(A68_34 * Out);

A_STATIC A68_VOID  DNDASIM_a(A68_CHAR * C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GNDASIM_generator(A68_BOOL  ENDASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SNDASIM_b(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VNDASIM_generator(A68_BOOL  TNDASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OPDASIM_generator(A68_BOOL  NPDASIM_anonymous, A68_228  *ReturnedValue);

A68_VOID  VPDASIM_mainitialise(A68_36  Flt);

A68_VOID  XPDASIM_machangeflt(A68_36  Flt);

A68_VOID  ZPDASIM_masavestate(A68_160  Ferryout);

A68_VOID  BQDASIM_marestorestate(A68_160  Ferryin);

A68_BOOL  TQDASIM_(A68_231  L1, A68_231  L2);

A_STATIC A68_VOID  HRDASIM_generator(A68_BOOL  GRDASIM_anonymous, A68_240  *ReturnedValue);

A_STATIC A68_VOID  JRDASIM_generator(A68_BOOL  IRDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  SRDASIM_generator(A68_BOOL  RRDASIM_anonymous, A68_241  *ReturnedValue);

A_STATIC A68_VOID  URDASIM_generator(A68_BOOL  TRDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  DSDASIM_generator(A68_BOOL  CSDASIM_anonymous, A68_242  *ReturnedValue);

A_STATIC A68_VOID  FSDASIM_generator(A68_BOOL  ESDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  OSDASIM_generator(A68_BOOL  NSDASIM_anonymous, A68_243  *ReturnedValue);

A_STATIC A68_VOID  QSDASIM_generator(A68_BOOL  PSDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  ZSDASIM_generator(A68_BOOL  YSDASIM_anonymous, A68_244  *ReturnedValue);

A_STATIC A68_VOID  BTDASIM_generator(A68_BOOL  ATDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  KTDASIM_generator(A68_BOOL  JTDASIM_anonymous, A68_245  *ReturnedValue);

A_STATIC A68_VOID  MTDASIM_generator(A68_BOOL  LTDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  VTDASIM_generator(A68_BOOL  UTDASIM_anonymous, A68_246  *ReturnedValue);

A_STATIC A68_VOID  XTDASIM_generator(A68_BOOL  WTDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  GUDASIM_generator(A68_BOOL  FUDASIM_anonymous, A68_247  *ReturnedValue);

A_STATIC A68_VOID  IUDASIM_generator(A68_BOOL  HUDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  RUDASIM_generator(A68_BOOL  QUDASIM_anonymous, A68_248  *ReturnedValue);

A_STATIC A68_VOID  TUDASIM_generator(A68_BOOL  SUDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  CVDASIM_generator(A68_BOOL  BVDASIM_anonymous, A68_249  *ReturnedValue);

A_STATIC A68_VOID  EVDASIM_generator(A68_BOOL  DVDASIM_anonymous, A68_RC  *ReturnedValue);

A_STATIC A68_VOID  NVDASIM_generator(A68_BOOL  MVDASIM_anonymous, A68_250  *ReturnedValue);

A_STATIC A68_VOID  PVDASIM_generator(A68_BOOL  OVDASIM_anonymous, A68_RC  *ReturnedValue);

A68_BITS  MXDASIM_invcondition(A68_BITS  C);

A68_BITS  PXDASIM_swapcondition(A68_BITS  C);

A68_VOID  VXDASIM_(A68_244  Mask, A68_BITS  Cond, A68_277  *ReturnedValue);

A68_VOID  AYDASIM_(A68_245  Mask, A68_BITS  Cond, A68_279  *ReturnedValue);

A68_VOID  FYDASIM_(A68_247  Mask, A68_BITS  Cond, A68_281  *ReturnedValue);

A_STATIC A68_BITS  EPEASIM_delayinstruction(A68_INT  Target);

A68_VOID  NPEASIM_using(A68_240  M, A68_INT  O);

A68_VOID  RPEASIM_using(A68_240  M, A68_231 * Label);

A68_VOID  XPEASIM_using(A68_241  M, A68_INT  O);

A68_VOID  EQEASIM_using(A68_241  M, A68_231 * Label);

A68_VOID  KQEASIM_using(A68_242  M, A68_INT  O);

A68_VOID  QQEASIM_using(A68_243  M, A68_235  O);

A68_VOID  YQEASIM_using(A68_277  Opcode, A68_INT  O);

A68_VOID  HREASIM_using(A68_277  Opcode, A68_231 * Label);

A68_VOID  PREASIM_using(A68_279  Opcode, A68_INT  O);

A68_VOID  ASEASIM_using(A68_279  Opcode, A68_231 * Label);

A68_VOID  ISEASIM_using(A68_246  M, A68_239  Oprnd);

A68_VOID  BTEASIM_using(A68_281  Opcode, A68_236  Oprnd);

A68_VOID  TTEASIM_using(A68_248  M, A68_BITS  O);

A68_VOID  AUEASIM_using(A68_249  M, A68_236  Oprnd);

A68_VOID  PUEASIM_using(A68_250  M, A68_239  Oprnd);

A68_VOID  TXEASIM_fixmachinelabel(A68_231  Label);

A68_VOID  CYEASIM_maret(void);

A68_VOID  FYEASIM_maretl(void);

A68_VOID  MYEASIM_maaddrir(A68_BITS  Rs, A68_INT  I, A68_BITS  Temp, A68_BITS  Rd);

A68_VOID  CZEASIM_mamovir(A68_INT  I, A68_BITS  Rd);

A68_VOID  OZEASIM_madiv(void);

A68_VOID  TZEASIM_mamul(void);

A68_VOID  ZZEASIM_maputchar(A68_CHAR  C);

A_STATIC A68_VOID  GNDASIM_generator(A68_BOOL  ENDASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HNDASIM_generator *)NonLocals)->x)
{ 
A68_VC  INDASIM;  /* clause result */
A68_VC  JNDASIM;  /* OPERATORS - dynamic generator */
{ 
JNDASIM.upb = 8 ;
( ENDASIM_anonymous? A_VLOC(A68_CHAR ,JNDASIM): A_VHEAP(A68_CHAR ,JNDASIM) );
INDASIM = JNDASIM;
} 
*ReturnedValue = (INDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VNDASIM_generator(A68_BOOL  TNDASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WNDASIM_generator *)NonLocals)->x)
{ 
A68_VC  XNDASIM;  /* clause result */
A68_VC  YNDASIM;  /* OPERATORS - dynamic generator */
{ 
YNDASIM.upb = 2 ;
( TNDASIM_anonymous? A_VLOC(A68_CHAR ,YNDASIM): A_VHEAP(A68_CHAR ,YNDASIM) );
XNDASIM = YNDASIM;
} 
*ReturnedValue = (XNDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YJDASIM_generator(A68_BOOL  WJDASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZJDASIM_generator *)NonLocals)->x)
{ 
A68_VC  AKDASIM;  /* clause result */
A68_VC  BKDASIM;  /* OPERATORS - dynamic generator */
{ 
BKDASIM.upb = NL(Size) ;
( WJDASIM_anonymous? A_VLOC(A68_CHAR ,BKDASIM): A_VHEAP(A68_CHAR ,BKDASIM) );
AKDASIM = BKDASIM;
} 
*ReturnedValue = (AKDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DNDASIM_a(A68_CHAR * C, A68_VC  *ReturnedValue)
{ 
A68_31  FNDASIM_generator;   /* proc value of non-global proc */
A68_VC  KNDASIM;  /* avoid structure result */
A68_VC  LNDASIM_ad;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_BITS   destination;
} MNDASIM; 
A68_50  NNDASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  ONDASIM;  /* YIELD */
A68_VC  PNDASIM;  /* avoid structure result */
A68_VC  QNDASIM;  /* clause result */
A_PROC_ENTRY(a);
 /* line 247: */
 /* line 248: */
{ 
 /* line 249: */
A_CLOSURE( FNDASIM_generator, GNDASIM_generator, HNDASIM_generator );
A_CALLPROC(FNDASIM_generator,(A68_FALSE, &KNDASIM),(A68_FALSE, &KNDASIM,(FNDASIM_generator).nonlocals));
LNDASIM_ad = KNDASIM;
MNDASIM.source = C ;
ONDASIM = (MNDASIM.destination) ;
AWAAOSL_hexchars( A_UNITE(NNDASIM,mode1,1,ONDASIM), &PNDASIM );
A_VASSIGN2(PNDASIM,LNDASIM_ad,A68_CHAR );
 /* line 250: */
 /* line 251: */
QNDASIM = LNDASIM_ad;
} 
A_PROC_EXIT(a);
*ReturnedValue = (QNDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SNDASIM_b(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_31  UNDASIM_generator;   /* proc value of non-global proc */
A68_VC  ZNDASIM;  /* avoid structure result */
A68_VC  AODASIM_b;
A68_50  BODASIM;  /* OPERATORS - mode -> union mode */
A68_VC  CODASIM;  /* avoid structure result */
A68_VC  DODASIM;  /* clause result */
A_PROC_ENTRY(b);
 /* line 254: */
 /* line 255: */
{ 
A_CLOSURE( UNDASIM_generator, VNDASIM_generator, WNDASIM_generator );
A_CALLPROC(UNDASIM_generator,(A68_FALSE, &ZNDASIM),(A68_FALSE, &ZNDASIM,(UNDASIM_generator).nonlocals));
AODASIM_b = ZNDASIM;
AWAAOSL_hexchars( A_UNITE(BODASIM,mode5,5,C), &CODASIM );
A_VASSIGN2(CODASIM,AODASIM_b,A68_CHAR );
 /* line 256: */
 /* line 257: */
DODASIM = AODASIM_b;
} 
A_PROC_EXIT(b);
*ReturnedValue = (DODASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JRDASIM_generator(A68_BOOL  IRDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  KRDASIM;  /* clause result */
A68_RC  LRDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 391: */
LRDASIM.dim[0].upb = 2 ;
LRDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(LRDASIM) ;
( IRDASIM_anonymous? A_R1LOC(A68_CHAR ,LRDASIM): A_R1HEAP(A68_CHAR ,LRDASIM) );
KRDASIM = LRDASIM;
} 
*ReturnedValue = (KRDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  URDASIM_generator(A68_BOOL  TRDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  VRDASIM;  /* clause result */
A68_RC  WRDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 392: */
WRDASIM.dim[0].upb = 2 ;
WRDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(WRDASIM) ;
( TRDASIM_anonymous? A_R1LOC(A68_CHAR ,WRDASIM): A_R1HEAP(A68_CHAR ,WRDASIM) );
VRDASIM = WRDASIM;
} 
*ReturnedValue = (VRDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FSDASIM_generator(A68_BOOL  ESDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  GSDASIM;  /* clause result */
A68_RC  HSDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 393: */
HSDASIM.dim[0].upb = 2 ;
HSDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(HSDASIM) ;
( ESDASIM_anonymous? A_R1LOC(A68_CHAR ,HSDASIM): A_R1HEAP(A68_CHAR ,HSDASIM) );
GSDASIM = HSDASIM;
} 
*ReturnedValue = (GSDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QSDASIM_generator(A68_BOOL  PSDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  RSDASIM;  /* clause result */
A68_RC  SSDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 394: */
SSDASIM.dim[0].upb = 2 ;
SSDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(SSDASIM) ;
( PSDASIM_anonymous? A_R1LOC(A68_CHAR ,SSDASIM): A_R1HEAP(A68_CHAR ,SSDASIM) );
RSDASIM = SSDASIM;
} 
*ReturnedValue = (RSDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BTDASIM_generator(A68_BOOL  ATDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  CTDASIM;  /* clause result */
A68_RC  DTDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 395: */
DTDASIM.dim[0].upb = 2 ;
DTDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(DTDASIM) ;
( ATDASIM_anonymous? A_R1LOC(A68_CHAR ,DTDASIM): A_R1HEAP(A68_CHAR ,DTDASIM) );
CTDASIM = DTDASIM;
} 
*ReturnedValue = (CTDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MTDASIM_generator(A68_BOOL  LTDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  NTDASIM;  /* clause result */
A68_RC  OTDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 396: */
OTDASIM.dim[0].upb = 2 ;
OTDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(OTDASIM) ;
( LTDASIM_anonymous? A_R1LOC(A68_CHAR ,OTDASIM): A_R1HEAP(A68_CHAR ,OTDASIM) );
NTDASIM = OTDASIM;
} 
*ReturnedValue = (NTDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XTDASIM_generator(A68_BOOL  WTDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  YTDASIM;  /* clause result */
A68_RC  ZTDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 397: */
ZTDASIM.dim[0].upb = 2 ;
ZTDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(ZTDASIM) ;
( WTDASIM_anonymous? A_R1LOC(A68_CHAR ,ZTDASIM): A_R1HEAP(A68_CHAR ,ZTDASIM) );
YTDASIM = ZTDASIM;
} 
*ReturnedValue = (YTDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  IUDASIM_generator(A68_BOOL  HUDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  JUDASIM;  /* clause result */
A68_RC  KUDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 398: */
KUDASIM.dim[0].upb = 2 ;
KUDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(KUDASIM) ;
( HUDASIM_anonymous? A_R1LOC(A68_CHAR ,KUDASIM): A_R1HEAP(A68_CHAR ,KUDASIM) );
JUDASIM = KUDASIM;
} 
*ReturnedValue = (JUDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TUDASIM_generator(A68_BOOL  SUDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  UUDASIM;  /* clause result */
A68_RC  VUDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 399: */
VUDASIM.dim[0].upb = 2 ;
VUDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(VUDASIM) ;
( SUDASIM_anonymous? A_R1LOC(A68_CHAR ,VUDASIM): A_R1HEAP(A68_CHAR ,VUDASIM) );
UUDASIM = VUDASIM;
} 
*ReturnedValue = (UUDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  EVDASIM_generator(A68_BOOL  DVDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  FVDASIM;  /* clause result */
A68_RC  GVDASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 400: */
GVDASIM.dim[0].upb = 2 ;
GVDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(GVDASIM) ;
( DVDASIM_anonymous? A_R1LOC(A68_CHAR ,GVDASIM): A_R1HEAP(A68_CHAR ,GVDASIM) );
FVDASIM = GVDASIM;
} 
*ReturnedValue = (FVDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PVDASIM_generator(A68_BOOL  OVDASIM_anonymous, A68_RC  *ReturnedValue)
{ 
A68_RC  QVDASIM;  /* clause result */
A68_RC  RVDASIM;  /* OPERATORS - dynamic generator */
{ 
RVDASIM.dim[0].upb = 2 ;
RVDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(RVDASIM) ;
( OVDASIM_anonymous? A_R1LOC(A68_CHAR ,RVDASIM): A_R1HEAP(A68_CHAR ,RVDASIM) );
QVDASIM = RVDASIM;
} 
*ReturnedValue = (QVDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SIDASIM_display(A68_VC  Message)
{ 
A68_210  TIDASIM;  /* collateral clause result */
A68_52  UIDASIM;  /* OPERATORS - mode -> union mode */
A68_52  VIDASIM;  /* OPERATORS - mode -> union mode */
A68_56  WIDASIM;  /* procedure value */
A68_85  XIDASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(display);
 /* line 102: */
TIDASIM.data[0] = A_UNITE(UIDASIM,mode7,7,Message);
WIDASIM.fn.fn_global = LRAAOSL_newline;
WIDASIM.nonlocals = A68_NIL;
TIDASIM.data[1] = A_UNITE(VIDASIM,mode12,12,WIDASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XIDASIM,TIDASIM,2,A68_52 ));
A_PROC_EXIT(display);
return;
} 
#undef NL

A68_VOID  ZIDASIM_simfault(A68_VC  Message)
{ 
A_PROC_ENTRY(simfault);
 /* line 105: */
 /* line 106: */
 /* line 107: */
NKDAOST_sysfault(A_VC_PLUS(A_VC_PLUS(CJDASIM,Message),DJDASIM));
A_PROC_EXIT(simfault);
return;
} 
#undef NL

A68_VOID  GJDASIM_assert(A68_VC  Description, A68_BOOL  Assertion)
{ 
A_PROC_ENTRY(assert);
 /* line 111: */
 /* line 112: */
{ 
 /* line 113: */
 /* line 114: */
if ( !Assertion )
{ 
 /* line 115: */
 /* line 116: */
ZIDASIM_simfault(A_VC_PLUS(IJDASIM,Description));
} 
} 
A_PROC_EXIT(assert);
return;
} 
#undef NL

A_STATIC A68_VOID  KJDASIM_generator(A68_BOOL  JJDASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  LJDASIM;  /* clause result */
A68_VC  MJDASIM;  /* OPERATORS - dynamic generator */
{ 
MJDASIM.upb = 0 ;
( JJDASIM_anonymous? A_VLOC(A68_CHAR ,MJDASIM): A_VHEAP(A68_CHAR ,MJDASIM) );
LJDASIM = MJDASIM;
} 
*ReturnedValue = (LJDASIM);
return;
} 
#undef NL

A68_VOID  RJDASIM_get_vec_chars(A68_INT  Size, A68_VC  *ReturnedValue)
{ 
A68_INT  SJDASIM;  /* ADICOPS - MOD */
A68_INT  TJDASIM;  /* ADICOPS - MOD */
A68_31  XJDASIM_generator;   /* proc value of non-global proc */
A68_VC  CKDASIM;  /* avoid structure result */
A68_VC  DKDASIM_array;
A68_VC  EKDASIM;  /* clause result */
A_PROC_ENTRY(get_vec_chars);
 /* line 128: */
 /* line 129: */
{ 
 /* line 130: */
TJDASIM = 4 ;
if ( (A_MOD(Size,TJDASIM,SJDASIM)!=0) )
{ 
 /* line 131: */
NKDAOST_sysfault(VJDASIM);
} 
 /* line 132: */
 /* line 133: */
A_CLOSURE( XJDASIM_generator, YJDASIM_generator, ZJDASIM_generator );
(( ZJDASIM_generator * ) ( XJDASIM_generator.nonlocals )) -> Size = Size;
A_CALLPROC(XJDASIM_generator,(A68_FALSE, &CKDASIM),(A68_FALSE, &CKDASIM,(XJDASIM_generator).nonlocals));
DKDASIM_array = CKDASIM;
 /* line 134: */
 /* line 135: */
EKDASIM = DKDASIM_array;
} 
A_PROC_EXIT(get_vec_chars);
*ReturnedValue = (EKDASIM);
return;
} 
#undef NL

A68_VOID  GKDASIM_free_vec_chars(A68_VC * Array)
{ 
A68_VC  HKDASIM;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(free_vec_chars);
 /* line 138: */
 /* line 139: */
 /* line 140: */
(*Array) = A_VVAC(HKDASIM);
A_PROC_EXIT(free_vec_chars);
return;
} 
#undef NL

A_STATIC A68_VOID  IKDASIM_createcodearea(void)
{ 
A68_VC  JKDASIM;  /* avoid structure result */
A_PROC_ENTRY(createcodearea);
{ 
if ( (NJDASIM_code.upb>0) )
{ 
GKDASIM_free_vec_chars((&NJDASIM_code));
} 
 /* line 145: */
 /* line 146: */
RJDASIM_get_vec_chars( PJDASIM_initsize, &JKDASIM );
NJDASIM_code = JKDASIM;
} 
A_PROC_EXIT(createcodearea);
return;
} 
#undef NL

A_STATIC A68_VOID  KKDASIM_extendcodearea(void)
{ 
A68_INT  LKDASIM_upb;
A68_INT  MKDASIM_newupb;
A68_217  NKDASIM;  /* collateral clause result */
A68_52  QKDASIM;  /* OPERATORS - mode -> union mode */
A68_VC  RKDASIM;  /* YIELD */
A68_52  SKDASIM;  /* OPERATORS - mode -> union mode */
A68_52  VKDASIM;  /* OPERATORS - mode -> union mode */
A68_VC  WKDASIM;  /* YIELD */
A68_52  XKDASIM;  /* OPERATORS - mode -> union mode */
A68_52  YKDASIM;  /* OPERATORS - mode -> union mode */
A68_56  ZKDASIM;  /* procedure value */
A68_85  ALDASIM;  /* OPERATORS - istruct -> vector */
A68_VC  BLDASIM;  /* avoid structure result */
A68_VC  CLDASIM_newcode;
A68_VC  DLDASIM;  /* OPERATORS - trim index */
A68_VC  ELDASIM;  /* YIELD */
A_PROC_ENTRY(extendcodearea);
{ 
LKDASIM_upb = NJDASIM_code.upb;
MKDASIM_newupb = (LKDASIM_upb*2);
 /* line 152: */
RKDASIM = PKDASIM ;
NKDASIM.data[0] = A_UNITE(QKDASIM,mode7,7,RKDASIM);
NKDASIM.data[1] = A_UNITE(SKDASIM,mode1,1,LKDASIM_upb);
WKDASIM = UKDASIM ;
NKDASIM.data[2] = A_UNITE(VKDASIM,mode7,7,WKDASIM);
NKDASIM.data[3] = A_UNITE(XKDASIM,mode1,1,MKDASIM_newupb);
ZKDASIM.fn.fn_global = LRAAOSL_newline;
ZKDASIM.nonlocals = A68_NIL;
NKDASIM.data[4] = A_UNITE(YKDASIM,mode12,12,ZKDASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ALDASIM,NKDASIM,5,A68_52 ));
 /* line 153: */
RJDASIM_get_vec_chars( MKDASIM_newupb, &BLDASIM );
CLDASIM_newcode = BLDASIM;
 /* line 154: */
ELDASIM = A_VTRIM(DLDASIM,(CLDASIM_newcode),A_VTSCRIPT(&(DLDASIM.upb),(CLDASIM_newcode).upb,1,LKDASIM_upb)) ;
A_VASSIGN2(NJDASIM_code,ELDASIM,A68_CHAR );
 /* line 155: */
GKDASIM_free_vec_chars((&NJDASIM_code));
 /* line 156: */
 /* line 157: */
NJDASIM_code = CLDASIM_newcode;
} 
A_PROC_EXIT(extendcodearea);
return;
} 
#undef NL

A_STATIC A68_VOID  FLDASIM_setcodeaccess(void)
{ 
A_PROC_ENTRY(setcodeaccess);
/*SKIP*/;
A_PROC_EXIT(setcodeaccess);
return;
} 
#undef NL

A68_CHAR * ILDASIM_macoderef(A68_INT  Location)
{ 
A68_CHAR * JLDASIM;  /* clause result */
A_PROC_ENTRY(macoderef);
 /* line 176: */
 /* line 177: */
 /* line 178: */
JLDASIM = (&A_VINDEX(NJDASIM_code,Location));
A_PROC_EXIT(macoderef);
return( JLDASIM );
} 
#undef NL

A68_INT  KLDASIM_macodesize(void)
{ 
A68_INT  LLDASIM;  /* clause result */
A_PROC_ENTRY(macodesize);
LLDASIM = GLDASIM_location;
A_PROC_EXIT(macodesize);
return( LLDASIM );
} 
#undef NL

A_STATIC A68_VOID  OLDASIM_assemble8bitsat(A68_BITS  Byte, A68_INT  Location)
{ 
A68_CHAR * PLDASIM;  /* YIELD */
A_PROC_ENTRY(assemble8bitsat);
 /* line 186: */
 /* line 187: */
 /* line 188: */
PLDASIM = (&A_VINDEX(NJDASIM_code,Location)) ;
(*PLDASIM) = (A68_CHAR)(A68_INT )(A68_BITS )(Byte&0XffU);
A_PROC_EXIT(assemble8bitsat);
return;
} 
#undef NL

A_STATIC A68_VOID  SLDASIM_assemble16bitsat(A68_BITS  Word, A68_INT  Location)
{ 
A68_INT  TLDASIM;  /* SHR */
A68_CHAR * ULDASIM;  /* YIELD */
A68_INT  VLDASIM;  /* YIELD */
A68_CHAR * WLDASIM;  /* YIELD */
A_PROC_ENTRY(assemble16bitsat);
 /* line 191: */
 /* line 192: */
{ 
TLDASIM = 8 ;
ULDASIM = (&A_VINDEX(NJDASIM_code,Location)) ;
(*ULDASIM) = (A68_CHAR)(A68_INT )(A68_BITS )(A_SHR(Word,TLDASIM)&0XffU);
 /* line 193: */
 /* line 194: */
VLDASIM = (Location+1) ;
WLDASIM = (&A_VINDEX(NJDASIM_code,VLDASIM)) ;
(*WLDASIM) = (A68_CHAR)(A68_INT )(A68_BITS )(Word&0XffU);
} 
A_PROC_EXIT(assemble16bitsat);
return;
} 
#undef NL

A_STATIC A68_VOID  YLDASIM_assemble8bits(A68_BITS  Byte)
{ 
A_PROC_ENTRY(assemble8bits);
 /* line 197: */
 /* line 198: */
{ 
for ( ;; )
{ 
if ( !((GLDASIM_location>NJDASIM_code.upb)) ) break;
KKDASIM_extendcodearea();
}
 /* line 199: */
OLDASIM_assemble8bitsat(Byte, GLDASIM_location);
 /* line 200: */
 /* line 201: */
GLDASIM_location+=1;
} 
A_PROC_EXIT(assemble8bits);
return;
} 
#undef NL

A_STATIC A68_VOID  AMDASIM_assemble16bits(A68_BITS  Word)
{ 
A_PROC_ENTRY(assemble16bits);
 /* line 204: */
 /* line 205: */
{ 
for ( ;; )
{ 
if ( !(((GLDASIM_location+1)>NJDASIM_code.upb)) ) break;
KKDASIM_extendcodearea();
}
 /* line 206: */
SLDASIM_assemble16bitsat(Word, GLDASIM_location);
 /* line 207: */
 /* line 208: */
GLDASIM_location+=2;
} 
A_PROC_EXIT(assemble16bits);
return;
} 
#undef NL

A_STATIC A68_VOID  CMDASIM_assemble16bitsarray(A68_220  Array)
{ 
A68_INT  DMDASIM_i;
A68_INT  EMDASIM;  /* to part of loop */
A_PROC_ENTRY(assemble16bitsarray);
 /* line 211: */
 /* line 212: */
EMDASIM = Array.dim[0].upb;
for ( DMDASIM_i = 1;
DMDASIM_i <= EMDASIM;
DMDASIM_i += 1 )
{ 
AMDASIM_assemble16bits(A_R1INDEX(Array,DMDASIM_i));
}
 /* line 213: */
A_PROC_EXIT(assemble16bitsarray);
return;
} 
#undef NL

A_STATIC A68_VOID  GMDASIM_assemble32bits(A68_BITS  Word)
{ 
A68_INT  HMDASIM;  /* SHR */
A_PROC_ENTRY(assemble32bits);
 /* line 216: */
 /* line 217: */
{ 
HMDASIM = 16 ;
AMDASIM_assemble16bits((A68_BITS )(A_SHR(Word,HMDASIM)&0XffffU));
 /* line 218: */
 /* line 219: */
AMDASIM_assemble16bits((A68_BITS )(Word&0XffffU));
} 
A_PROC_EXIT(assemble32bits);
return;
} 
#undef NL

A_STATIC A68_VOID  KMDASIM_assemble32bitsat(A68_BITS  Word, A68_INT  Location)
{ 
A68_INT  LMDASIM;  /* SHR */
A_PROC_ENTRY(assemble32bitsat);
 /* line 222: */
 /* line 223: */
{ 
LMDASIM = 16 ;
SLDASIM_assemble16bitsat((A68_BITS )(A_SHR(Word,LMDASIM)&0XffffU), Location);
 /* line 224: */
 /* line 225: */
SLDASIM_assemble16bitsat((A68_BITS )(Word&0XffffU), (Location+2));
} 
A_PROC_EXIT(assemble32bitsat);
return;
} 
#undef NL

A_STATIC A68_BITS  NMDASIM_dissassemble16bitsat(A68_INT  Location)
{ 
A68_BITS  OMDASIM;  /* clause result */
A68_BITS  PMDASIM;  /* SHL */
A68_INT  QMDASIM;  /* SHL */
A68_INT  RMDASIM;  /* YIELD */
A_PROC_ENTRY(dissassemble16bitsat);
 /* line 228: */
PMDASIM = (A68_BITS )(A68_INT)(unsigned char)(*(&A_VINDEX(NJDASIM_code,Location))) ;
QMDASIM = 8 ;
RMDASIM = (Location+1) ;
OMDASIM = (A68_BITS )(A_SHL(PMDASIM,QMDASIM)|(A68_BITS )(A68_INT)(unsigned char)(*(&A_VINDEX(NJDASIM_code,RMDASIM))));
A_PROC_EXIT(dissassemble16bitsat);
return( OMDASIM );
} 
#undef NL

A_STATIC A68_VOID  TMDASIM_setcodeindex(A68_INT * Index)
{ 
A_PROC_ENTRY(setcodeindex);
 /* line 231: */
 /* line 234: */
 /* line 235: */
(*Index) = GLDASIM_location;
A_PROC_EXIT(setcodeindex);
return;
} 
#undef NL

A_STATIC A68_VOID  VMDASIM_listcode(A68_34 * Out)
{ 
A68_INT  XMDASIM_nbytes;
A68_INT  YMDASIM_nlines;
A68_INT  ZMDASIM;  /* ADICOPS - MOD */
A68_INT  ANDASIM_bytesinlast;
A68_INT  BNDASIM_ptr;
A68_INT  EODASIM;  /* to part of loop */
A68_INT  FODASIM;  /* loop control */
A68_227  GODASIM;  /* collateral clause result */
A68_52  HODASIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  IODASIM;  /* YIELD */
A68_VC  JODASIM;  /* avoid structure result */
A68_52  KODASIM;  /* OPERATORS - mode -> union mode */
A68_52  NODASIM;  /* OPERATORS - mode -> union mode */
A68_VC  OODASIM;  /* YIELD */
A68_85  PODASIM;  /* OPERATORS - istruct -> vector */
A68_INT  QODASIM_k;
A68_INT  RODASIM;  /* to part of loop */
A68_INT  SODASIM;  /* by part of loop */
A68_VC  TODASIM;  /* avoid structure result */
A68_52  UODASIM;  /* OPERATORS - mode -> union mode */
A68_85  VODASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_227  WODASIM;  /* collateral clause result */
A68_52  XODASIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  YODASIM;  /* YIELD */
A68_VC  ZODASIM;  /* avoid structure result */
A68_52  APDASIM;  /* OPERATORS - mode -> union mode */
A68_52  DPDASIM;  /* OPERATORS - mode -> union mode */
A68_VC  EPDASIM;  /* YIELD */
A68_85  FPDASIM;  /* OPERATORS - istruct -> vector */
A68_INT  GPDASIM_k;
A68_INT  HPDASIM;  /* to part of loop */
A68_INT  IPDASIM;  /* by part of loop */
A68_VC  JPDASIM;  /* avoid structure result */
A68_52  KPDASIM;  /* OPERATORS - mode -> union mode */
A68_85  LPDASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(listcode);
 /* line 239: */
 /* line 240: */
{ 
 /* line 241: */
XMDASIM_nbytes = (GLDASIM_location-1);
 /* line 242: */
YMDASIM_nlines = (XMDASIM_nbytes/WMDASIM_bytesperline);
 /* line 243: */
ANDASIM_bytesinlast = A_MOD(XMDASIM_nbytes,WMDASIM_bytesperline,ZMDASIM);
 /* line 244: */
BNDASIM_ptr = 1;
 /* line 246: */
 /* line 253: */
 /* line 259: */
 /* line 260: */
EODASIM = YMDASIM_nlines;
for ( FODASIM = 1;
FODASIM <= EODASIM;
FODASIM += 1 )
{ 
 /* line 261: */
IODASIM = '!' ;
GODASIM.data[0] = A_UNITE(HODASIM,mode6,6,IODASIM);
DNDASIM_a( (&A_VINDEX(NJDASIM_code,BNDASIM_ptr)), &JODASIM );
GODASIM.data[1] = A_UNITE(KODASIM,mode7,7,JODASIM);
OODASIM = MODASIM ;
GODASIM.data[2] = A_UNITE(NODASIM,mode7,7,OODASIM);
GFBAOSL_put(Out, A_HISVEC(PODASIM,GODASIM,3,A68_52 ));
 /* line 262: */
 /* line 263: */
RODASIM = BNDASIM_ptr;
SODASIM = (-1);
for ( QODASIM_k = ((BNDASIM_ptr+WMDASIM_bytesperline)-1);
( SODASIM > 0 && QODASIM_k <= RODASIM) ||
( SODASIM < 0 && QODASIM_k >= RODASIM) ||
( SODASIM == 0 ) ;
QODASIM_k += SODASIM )
{ 
 /* line 264: */
 /* line 265: */
SNDASIM_b( (*(&A_VINDEX(NJDASIM_code,QODASIM_k))), &TODASIM );
GFBAOSL_put(Out, A_HVEC(VODASIM,A_UNITE(UODASIM,mode7,7,TODASIM),A68_52 ));
}
 /* line 266: */
LRAAOSL_newline(Out);
 /* line 267: */
 /* line 268: */
BNDASIM_ptr+=WMDASIM_bytesperline;
}
 /* line 269: */
 /* line 270: */
 /* line 271: */
if ( (ANDASIM_bytesinlast>0) )
{ 
YODASIM = '!' ;
WODASIM.data[0] = A_UNITE(XODASIM,mode6,6,YODASIM);
DNDASIM_a( (&A_VINDEX(NJDASIM_code,BNDASIM_ptr)), &ZODASIM );
WODASIM.data[1] = A_UNITE(APDASIM,mode7,7,ZODASIM);
EPDASIM = CPDASIM ;
WODASIM.data[2] = A_UNITE(DPDASIM,mode7,7,EPDASIM);
GFBAOSL_put(Out, A_HISVEC(FPDASIM,WODASIM,3,A68_52 ));
 /* line 272: */
 /* line 273: */
HPDASIM = BNDASIM_ptr;
IPDASIM = (-1);
for ( GPDASIM_k = ((BNDASIM_ptr+ANDASIM_bytesinlast)-1);
( IPDASIM > 0 && GPDASIM_k <= HPDASIM) ||
( IPDASIM < 0 && GPDASIM_k >= HPDASIM) ||
( IPDASIM == 0 ) ;
GPDASIM_k += IPDASIM )
{ 
 /* line 274: */
 /* line 275: */
SNDASIM_b( (*(&A_VINDEX(NJDASIM_code,GPDASIM_k))), &JPDASIM );
GFBAOSL_put(Out, A_HVEC(LPDASIM,A_UNITE(KPDASIM,mode7,7,JPDASIM),A68_52 ));
}
 /* line 276: */
 /* line 277: */
 /* line 278: */
LRAAOSL_newline(Out);
} 
} 
A_PROC_EXIT(listcode);
return;
} 
#undef NL

A_STATIC A68_VOID  OPDASIM_generator(A68_BOOL  NPDASIM_anonymous, A68_228  *ReturnedValue)
{ 
A68_228  PPDASIM;  /* clause result */
A68_228  QPDASIM;  /* OPERATORS - dynamic generator */
{ 
QPDASIM.dim[0].upb = 50 ;
QPDASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(QPDASIM) ;
( NPDASIM_anonymous? A_R1LOC(A68_INT ,QPDASIM): A_R1HEAP(A68_INT ,QPDASIM) );
PPDASIM = QPDASIM;
} 
*ReturnedValue = (PPDASIM);
return;
} 
#undef NL

A68_VOID  VPDASIM_mainitialise(A68_36  Flt)
{ 
A_PROC_ENTRY(mainitialise);
 /* line 295: */
 /* line 296: */
{ 
PIDASIM_faultproc = Flt;
 /* line 297: */
IKDASIM_createcodearea();
 /* line 298: */
 /* line 299: */
GLDASIM_location = 1;
} 
A_PROC_EXIT(mainitialise);
return;
} 
#undef NL

A68_VOID  XPDASIM_machangeflt(A68_36  Flt)
{ 
A_PROC_ENTRY(machangeflt);
 /* line 303: */
 /* line 304: */
 /* line 305: */
PIDASIM_faultproc = Flt;
A_PROC_EXIT(machangeflt);
return;
} 
#undef NL

A68_VOID  ZPDASIM_masavestate(A68_160  Ferryout)
{ 
A_PROC_ENTRY(masavestate);
 /* line 309: */
 /* line 314: */
{ 
 /* line 315: */
if ( (TPDASIM_topdellist!=0) )
{ 
GMDASIM_assemble32bits(0X01000000U);
 /* line 316: */
 /* line 317: */
TPDASIM_topdellist = 0;
} 
 /* line 318: */
PHBASIM_writeint(GLDASIM_location, Ferryout, PIDASIM_faultproc);
 /* line 319: */
PHBASIM_writeint(NJDASIM_code.upb, Ferryout, PIDASIM_faultproc);
 /* line 320: */
 /* line 321: */
A_CALLPROC(Ferryout,(NJDASIM_code, PIDASIM_faultproc),(NJDASIM_code, PIDASIM_faultproc,(Ferryout).nonlocals));
} 
A_PROC_EXIT(masavestate);
return;
} 
#undef NL

A68_VOID  BQDASIM_marestorestate(A68_160  Ferryin)
{ 
A68_INT  CQDASIM_size;
A68_VC  DQDASIM;  /* avoid structure result */
A_PROC_ENTRY(marestorestate);
 /* line 326: */
 /* line 327: */
{ 
if ( (NJDASIM_code.upb>0) )
{ 
GKDASIM_free_vec_chars((&NJDASIM_code));
} 
 /* line 328: */
GLDASIM_location = LGBASIM_readint(Ferryin, PIDASIM_faultproc);
 /* line 329: */
CQDASIM_size = LGBASIM_readint(Ferryin, PIDASIM_faultproc);
 /* line 330: */
RJDASIM_get_vec_chars( CQDASIM_size, &DQDASIM );
NJDASIM_code = DQDASIM;
 /* line 331: */
 /* line 332: */
A_CALLPROC(Ferryin,(NJDASIM_code, PIDASIM_faultproc),(NJDASIM_code, PIDASIM_faultproc,(Ferryin).nonlocals));
} 
A_PROC_EXIT(marestorestate);
return;
} 
#undef NL

A68_BOOL  TQDASIM_(A68_231  L1, A68_231  L2)
{ 
A68_BOOL  UQDASIM;  /* clause result */
A_PROC_ENTRY(=);
 /* line 362: */
 /* line 363: */
UQDASIM = (((L1.Location==L2.Location)&(L1.Size==L2.Size))&(L1.Canoptimise==L2.Canoptimise));
A_PROC_EXIT(=);
return( UQDASIM );
} 
#undef NL

A_STATIC A68_VOID  HRDASIM_generator(A68_BOOL  GRDASIM_anonymous, A68_240  *ReturnedValue)
{ 
A68_264  MRDASIM_anonymous;
A68_RC  NRDASIM;  /* avoid structure result */
A68_263 * ORDASIM;  /* YIELD */
A68_240  PRDASIM;  /* clause result */
{ 
JRDASIM_generator( GRDASIM_anonymous, &NRDASIM );
ORDASIM = (&((&MRDASIM_anonymous)->M1a)) ;
(*ORDASIM) = NRDASIM;
PRDASIM = MRDASIM_anonymous;
} 
*ReturnedValue = (PRDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SRDASIM_generator(A68_BOOL  RRDASIM_anonymous, A68_241  *ReturnedValue)
{ 
A68_265  XRDASIM_anonymous;
A68_RC  YRDASIM;  /* avoid structure result */
A68_263 * ZRDASIM;  /* YIELD */
A68_241  ASDASIM;  /* clause result */
{ 
URDASIM_generator( RRDASIM_anonymous, &YRDASIM );
ZRDASIM = (&((&XRDASIM_anonymous)->M1b)) ;
(*ZRDASIM) = YRDASIM;
ASDASIM = XRDASIM_anonymous;
} 
*ReturnedValue = (ASDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DSDASIM_generator(A68_BOOL  CSDASIM_anonymous, A68_242  *ReturnedValue)
{ 
A68_266  ISDASIM_anonymous;
A68_RC  JSDASIM;  /* avoid structure result */
A68_263 * KSDASIM;  /* YIELD */
A68_242  LSDASIM;  /* clause result */
{ 
FSDASIM_generator( CSDASIM_anonymous, &JSDASIM );
KSDASIM = (&((&ISDASIM_anonymous)->M2a)) ;
(*KSDASIM) = JSDASIM;
LSDASIM = ISDASIM_anonymous;
} 
*ReturnedValue = (LSDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OSDASIM_generator(A68_BOOL  NSDASIM_anonymous, A68_243  *ReturnedValue)
{ 
A68_267  TSDASIM_anonymous;
A68_RC  USDASIM;  /* avoid structure result */
A68_263 * VSDASIM;  /* YIELD */
A68_243  WSDASIM;  /* clause result */
{ 
QSDASIM_generator( NSDASIM_anonymous, &USDASIM );
VSDASIM = (&((&TSDASIM_anonymous)->M2b)) ;
(*VSDASIM) = USDASIM;
WSDASIM = TSDASIM_anonymous;
} 
*ReturnedValue = (WSDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSDASIM_generator(A68_BOOL  YSDASIM_anonymous, A68_244  *ReturnedValue)
{ 
A68_268  ETDASIM_anonymous;
A68_RC  FTDASIM;  /* avoid structure result */
A68_263 * GTDASIM;  /* YIELD */
A68_244  HTDASIM;  /* clause result */
{ 
BTDASIM_generator( YSDASIM_anonymous, &FTDASIM );
GTDASIM = (&((&ETDASIM_anonymous)->M2c)) ;
(*GTDASIM) = FTDASIM;
HTDASIM = ETDASIM_anonymous;
} 
*ReturnedValue = (HTDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KTDASIM_generator(A68_BOOL  JTDASIM_anonymous, A68_245  *ReturnedValue)
{ 
A68_269  PTDASIM_anonymous;
A68_RC  QTDASIM;  /* avoid structure result */
A68_263 * RTDASIM;  /* YIELD */
A68_245  STDASIM;  /* clause result */
{ 
MTDASIM_generator( JTDASIM_anonymous, &QTDASIM );
RTDASIM = (&((&PTDASIM_anonymous)->M2d)) ;
(*RTDASIM) = QTDASIM;
STDASIM = PTDASIM_anonymous;
} 
*ReturnedValue = (STDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VTDASIM_generator(A68_BOOL  UTDASIM_anonymous, A68_246  *ReturnedValue)
{ 
A68_270  AUDASIM_anonymous;
A68_RC  BUDASIM;  /* avoid structure result */
A68_263 * CUDASIM;  /* YIELD */
A68_246  DUDASIM;  /* clause result */
{ 
XTDASIM_generator( UTDASIM_anonymous, &BUDASIM );
CUDASIM = (&((&AUDASIM_anonymous)->M3a)) ;
(*CUDASIM) = BUDASIM;
DUDASIM = AUDASIM_anonymous;
} 
*ReturnedValue = (DUDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GUDASIM_generator(A68_BOOL  FUDASIM_anonymous, A68_247  *ReturnedValue)
{ 
A68_271  LUDASIM_anonymous;
A68_RC  MUDASIM;  /* avoid structure result */
A68_263 * NUDASIM;  /* YIELD */
A68_247  OUDASIM;  /* clause result */
{ 
IUDASIM_generator( FUDASIM_anonymous, &MUDASIM );
NUDASIM = (&((&LUDASIM_anonymous)->M3b)) ;
(*NUDASIM) = MUDASIM;
OUDASIM = LUDASIM_anonymous;
} 
*ReturnedValue = (OUDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RUDASIM_generator(A68_BOOL  QUDASIM_anonymous, A68_248  *ReturnedValue)
{ 
A68_272  WUDASIM_anonymous;
A68_RC  XUDASIM;  /* avoid structure result */
A68_263 * YUDASIM;  /* YIELD */
A68_248  ZUDASIM;  /* clause result */
{ 
TUDASIM_generator( QUDASIM_anonymous, &XUDASIM );
YUDASIM = (&((&WUDASIM_anonymous)->M3c)) ;
(*YUDASIM) = XUDASIM;
ZUDASIM = WUDASIM_anonymous;
} 
*ReturnedValue = (ZUDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CVDASIM_generator(A68_BOOL  BVDASIM_anonymous, A68_249  *ReturnedValue)
{ 
A68_273  HVDASIM_anonymous;
A68_RC  IVDASIM;  /* avoid structure result */
A68_263 * JVDASIM;  /* YIELD */
A68_249  KVDASIM;  /* clause result */
{ 
EVDASIM_generator( BVDASIM_anonymous, &IVDASIM );
JVDASIM = (&((&HVDASIM_anonymous)->M3d)) ;
(*JVDASIM) = IVDASIM;
KVDASIM = HVDASIM_anonymous;
} 
*ReturnedValue = (KVDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NVDASIM_generator(A68_BOOL  MVDASIM_anonymous, A68_250  *ReturnedValue)
{ 
A68_274  SVDASIM_anonymous;
A68_RC  TVDASIM;  /* avoid structure result */
A68_263 * UVDASIM;  /* YIELD */
A68_250  VVDASIM;  /* clause result */
{ 
PVDASIM_generator( MVDASIM_anonymous, &TVDASIM );
UVDASIM = (&((&SVDASIM_anonymous)->M3e)) ;
(*UVDASIM) = TVDASIM;
VVDASIM = SVDASIM_anonymous;
} 
*ReturnedValue = (VVDASIM);
return;
} 
#undef NL

A68_BITS  MXDASIM_invcondition(A68_BITS  C)
{ 
A68_BITS  NXDASIM;  /* clause result */
A_PROC_ENTRY(invcondition);
 /* line 440: */
NXDASIM = (A68_BITS )((A68_BITS )(C&~0X8U)|(A68_BITS )(~C&0X8U));
A_PROC_EXIT(invcondition);
return( NXDASIM );
} 
#undef NL

A68_BITS  PXDASIM_swapcondition(A68_BITS  C)
{ 
A68_BITS  QXDASIM;  /* clause result */
A_PROC_ENTRY(swapcondition);
 /* line 443: */
 /* line 444: */
if ( (C==IWDASIM_ne) )
{ 
QXDASIM = IWDASIM_ne;
} 
else
{ 
 /* line 445: */
if ( (C==YVDASIM_eq) )
{ 
QXDASIM = YVDASIM_eq;
} 
else
{ 
 /* line 446: */
if ( (C==AWDASIM_le) )
{ 
QXDASIM = LWDASIM_ge;
} 
else
{ 
 /* line 447: */
if ( (C==BWDASIM_l) )
{ 
QXDASIM = KWDASIM_g;
} 
else
{ 
 /* line 448: */
if ( (C==LWDASIM_ge) )
{ 
QXDASIM = AWDASIM_le;
} 
else
{ 
 /* line 449: */
if ( (C==KWDASIM_g) )
{ 
QXDASIM = BWDASIM_l;
} 
else
{ 
ZIDASIM_simfault(SXDASIM);
 /* line 450: */
QXDASIM = XVDASIM_n;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(swapcondition);
return( QXDASIM );
} 
#undef NL

A68_VOID  VXDASIM_(A68_244  Mask, A68_BITS  Cond, A68_277  *ReturnedValue)
{ 
A68_277  WXDASIM;  /* collateral clause result */
A68_277  XXDASIM;  /* clause result */
A_PROC_ENTRY(/);
 /* line 455: */
WXDASIM.M = Mask;
WXDASIM.Cond = Cond;
XXDASIM = WXDASIM;
A_PROC_EXIT(/);
*ReturnedValue = (XXDASIM);
return;
} 
#undef NL

A68_VOID  AYDASIM_(A68_245  Mask, A68_BITS  Cond, A68_279  *ReturnedValue)
{ 
A68_279  BYDASIM;  /* collateral clause result */
A68_279  CYDASIM;  /* clause result */
A_PROC_ENTRY(/);
 /* line 458: */
BYDASIM.M = Mask;
BYDASIM.Cond = Cond;
CYDASIM = BYDASIM;
A_PROC_EXIT(/);
*ReturnedValue = (CYDASIM);
return;
} 
#undef NL

A68_VOID  FYDASIM_(A68_247  Mask, A68_BITS  Cond, A68_281  *ReturnedValue)
{ 
A68_281  GYDASIM;  /* collateral clause result */
A68_281  HYDASIM;  /* clause result */
A_PROC_ENTRY(/);
 /* line 461: */
GYDASIM.M = Mask;
GYDASIM.Cond = Cond;
HYDASIM = GYDASIM;
A_PROC_EXIT(/);
*ReturnedValue = (HYDASIM);
return;
} 
#undef NL

A_STATIC A68_BITS  EPEASIM_delayinstruction(A68_INT  Target)
{ 
A68_BOOL  FPEASIM;  /* optbool result */
A68_BITS  GPEASIM;  /* clause result */
A68_BITS  HPEASIM_targetinst;
A68_BITS  IPEASIM_format2;
A68_BOOL  JPEASIM;  /* optbool result */
A68_INT  KPEASIM;  /* SHL */
A_PROC_ENTRY(delayinstruction);
 /* line 626: */
FPEASIM = (Target>=GLDASIM_location);
if ( ! FPEASIM )
{FPEASIM = (Target<=0);
}
 /* line 628: */
if ( FPEASIM )
{ 
 /* line 629: */
GPEASIM = BZDASIM_nop.Mask;
} 
else
{ 
HPEASIM_targetinst = NMDASIM_dissassemble16bitsat(Target);
 /* line 630: */
IPEASIM_format2 = (A68_BITS )(HPEASIM_targetinst&0Xc1c0U);
 /* line 631: */
 /* line 632: */
JPEASIM = (IPEASIM_format2==0X0080U);
if ( ! JPEASIM )
{JPEASIM = (IPEASIM_format2==0X0180U);
}
 /* line 633: */
if ( ! JPEASIM )
{JPEASIM = (IPEASIM_format2==0X01c0U);
}
 /* line 634: */
if ( ! JPEASIM )
{JPEASIM = ((A68_BITS )(HPEASIM_targetinst&0Xc000U)==0X4000U);
}
 /* line 635: */
if ( ! JPEASIM )
{ /* line 636: */
JPEASIM = ((A68_BITS )(HPEASIM_targetinst&0Xc1f8U)==0X81c0U);
}
 /* line 638: */
if ( JPEASIM )
{ 
 /* line 639: */
GPEASIM = BZDASIM_nop.Mask;
} 
else
{ 
 /* line 640: */
 /* line 641: */
KPEASIM = 16 ;
GPEASIM = (A68_BITS )(A_SHL(HPEASIM_targetinst,KPEASIM)|NMDASIM_dissassemble16bitsat((Target+2)));
} 
} 
A_PROC_EXIT(delayinstruction);
return( GPEASIM );
} 
#undef NL

A68_VOID  NPEASIM_using(A68_240  M, A68_INT  O)
{ 
A68_INT  OPEASIM_dest;
A_PROC_ENTRY(using);
 /* line 652: */
 /* line 653: */
{ 
OPEASIM_dest = O;
 /* line 654: */
 /* line 655: */
if ( (TPDASIM_topdellist!=0) )
{ 
if ( (OPEASIM_dest>GLDASIM_location) )
{ 
OPEASIM_dest+=4;
} 
 /* line 656: */
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 657: */
 /* line 658: */
TPDASIM_topdellist = 0;
} 
 /* line 659: */
 /* line 660: */
GMDASIM_assemble32bits((A68_BITS )(M.Mask|(A68_BITS )((A68_BITS )((OPEASIM_dest-GLDASIM_location)/4)&IQDASIM_mask30)));
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  RPEASIM_using(A68_240  M, A68_231 * Label)
{ 
A68_INT * SPEASIM;  /* YIELD */
A68_BOOL * TPEASIM;  /* YIELD */
A68_INT * UPEASIM;  /* YIELD */
A_PROC_ENTRY(using);
 /* line 663: */
 /* line 664: */
{ 
SPEASIM = (&(Label->Size)) ;
(*SPEASIM) = 30;
 /* line 665: */
TPEASIM = (&(Label->Canoptimise)) ;
(*TPEASIM) = A68_FALSE;
 /* line 666: */
 /* line 667: */
if ( (TPDASIM_topdellist!=0) )
{ 
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 668: */
 /* line 669: */
TPDASIM_topdellist = 0;
} 
 /* line 670: */
UPEASIM = (&(Label->Location)) ;
(*UPEASIM) = GLDASIM_location;
 /* line 671: */
 /* line 672: */
GMDASIM_assemble32bits(M.Mask);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  XPEASIM_using(A68_241  M, A68_INT  O)
{ 
A68_INT  YPEASIM_target;
A68_BITS  ZPEASIM_del;
A68_INT  AQEASIM;  /* clause result */
A68_BITS  BQEASIM_data;
A_PROC_ENTRY(using);
 /* line 676: */
 /* line 677: */
{ 
YPEASIM_target = O;
 /* line 678: */
 /* line 679: */
if ( (TPDASIM_topdellist!=0) )
{ 
if ( (YPEASIM_target>GLDASIM_location) )
{ 
YPEASIM_target+=4;
} 
 /* line 680: */
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 681: */
 /* line 682: */
TPDASIM_topdellist = 0;
} 
 /* line 683: */
ZPEASIM_del = EPEASIM_delayinstruction(YPEASIM_target);
 /* line 684: */
if ( (ZPEASIM_del==BZDASIM_nop.Mask) )
{ 
AQEASIM = 0;
} 
else
{ 
AQEASIM = 4;
} 
YPEASIM_target+=AQEASIM;
 /* line 685: */
YPEASIM_target = ((YPEASIM_target-GLDASIM_location)/4);
 /* line 686: */
BQEASIM_data = (A68_BITS )((A68_BITS )YPEASIM_target&IQDASIM_mask30);
 /* line 687: */
GMDASIM_assemble32bits((A68_BITS )(M.Mask|BQEASIM_data));
 /* line 688: */
 /* line 689: */
GMDASIM_assemble32bits(ZPEASIM_del);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  EQEASIM_using(A68_241  M, A68_231 * Label)
{ 
A68_INT * FQEASIM;  /* YIELD */
A68_BOOL * GQEASIM;  /* YIELD */
A68_INT * HQEASIM;  /* YIELD */
A_PROC_ENTRY(using);
 /* line 692: */
 /* line 693: */
{ 
FQEASIM = (&(Label->Size)) ;
(*FQEASIM) = 30;
 /* line 694: */
GQEASIM = (&(Label->Canoptimise)) ;
(*GQEASIM) = A68_TRUE;
 /* line 695: */
 /* line 696: */
if ( (TPDASIM_topdellist!=0) )
{ 
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 697: */
 /* line 698: */
TPDASIM_topdellist = 0;
} 
 /* line 699: */
HQEASIM = (&(Label->Location)) ;
(*HQEASIM) = GLDASIM_location;
 /* line 700: */
GMDASIM_assemble32bits(M.Mask);
 /* line 701: */
 /* line 702: */
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  KQEASIM_using(A68_242  M, A68_INT  O)
{ 
A68_BITS  LQEASIM_instr;
A68_INT  MQEASIM_i;
A68_INT  NQEASIM;  /* to part of loop */
A_PROC_ENTRY(using);
 /* line 706: */
 /* line 707: */
{ 
LQEASIM_instr = (A68_BITS )(M.Mask|(A68_BITS )((A68_BITS )O&HQDASIM_mask22));
 /* line 708: */
 /* line 709: */
if ( (TPDASIM_topdellist!=0) )
{ 
NQEASIM = TPDASIM_topdellist;
for ( MQEASIM_i = 1;
MQEASIM_i <= NQEASIM;
MQEASIM_i += 1 )
{ 
 /* line 710: */
 /* line 711: */
KMDASIM_assemble32bitsat(LQEASIM_instr, (*(&A_R1INDEX(RPDASIM_dellist,MQEASIM_i))));
}
 /* line 712: */
 /* line 713: */
TPDASIM_topdellist = 0;
} 
 /* line 714: */
 /* line 715: */
GMDASIM_assemble32bits(LQEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  QQEASIM_using(A68_243  M, A68_235  O)
{ 
A68_BITS  RQEASIM;  /* SHL */
A68_INT  SQEASIM;  /* SHL */
A68_BITS  TQEASIM_instr;
A68_INT  UQEASIM_i;
A68_INT  VQEASIM;  /* to part of loop */
A_PROC_ENTRY(using);
 /* line 719: */
 /* line 720: */
{ 
 /* line 721: */
RQEASIM = O.Rd ;
SQEASIM = 25 ;
TQEASIM_instr = (A68_BITS )((A68_BITS )(M.Mask|(A68_BITS )((A68_BITS )O.Imm&HQDASIM_mask22))|A_SHL(RQEASIM,SQEASIM));
 /* line 722: */
 /* line 723: */
if ( (TPDASIM_topdellist!=0) )
{ 
VQEASIM = TPDASIM_topdellist;
for ( UQEASIM_i = 1;
UQEASIM_i <= VQEASIM;
UQEASIM_i += 1 )
{ 
 /* line 724: */
 /* line 725: */
KMDASIM_assemble32bitsat(TQEASIM_instr, (*(&A_R1INDEX(RPDASIM_dellist,UQEASIM_i))));
}
 /* line 726: */
 /* line 727: */
TPDASIM_topdellist = 0;
} 
 /* line 728: */
 /* line 729: */
GMDASIM_assemble32bits(TQEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  YQEASIM_using(A68_277  Opcode, A68_INT  O)
{ 
A68_INT  ZQEASIM_target;
A68_BITS  CREASIM;  /* SHL */
A68_INT  DREASIM;  /* SHL */
A68_BITS  EREASIM_data;
A_PROC_ENTRY(using);
 /* line 733: */
 /* line 734: */
{ 
ZQEASIM_target = ((O-GLDASIM_location)/4);
 /* line 735: */
 /* line 736: */
if ( (TPDASIM_topdellist!=0) )
{ 
if ( (ZQEASIM_target>GLDASIM_location) )
{ 
ZQEASIM_target+=4;
} 
 /* line 737: */
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 738: */
 /* line 739: */
TPDASIM_topdellist = 0;
} 
 /* line 740: */
 /* line 741: */
GJDASIM_assert(BREASIM, ((MQDASIM_minimm22<=ZQEASIM_target)&(ZQEASIM_target<=LQDASIM_maximm22)));
 /* line 742: */
 /* line 743: */
CREASIM = Opcode.Cond ;
DREASIM = 25 ;
EREASIM_data = (A68_BITS )((A68_BITS )((A68_BITS )ZQEASIM_target&HQDASIM_mask22)|A_SHL(CREASIM,DREASIM));
 /* line 744: */
 /* line 745: */
GMDASIM_assemble32bits((A68_BITS )(Opcode.M.Mask|EREASIM_data));
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  HREASIM_using(A68_277  Opcode, A68_231 * Label)
{ 
A68_INT * IREASIM;  /* YIELD */
A68_BOOL * JREASIM;  /* YIELD */
A68_INT * KREASIM;  /* YIELD */
A68_BITS  LREASIM;  /* SHL */
A68_INT  MREASIM;  /* SHL */
A_PROC_ENTRY(using);
 /* line 748: */
 /* line 749: */
{ 
IREASIM = (&(Label->Size)) ;
(*IREASIM) = 22;
 /* line 750: */
JREASIM = (&(Label->Canoptimise)) ;
(*JREASIM) = A68_FALSE;
 /* line 751: */
 /* line 752: */
if ( (TPDASIM_topdellist!=0) )
{ 
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 753: */
 /* line 754: */
TPDASIM_topdellist = 0;
} 
 /* line 755: */
KREASIM = (&(Label->Location)) ;
(*KREASIM) = GLDASIM_location;
 /* line 756: */
 /* line 757: */
LREASIM = Opcode.Cond ;
MREASIM = 25 ;
GMDASIM_assemble32bits((A68_BITS )(Opcode.M.Mask|A_SHL(LREASIM,MREASIM)));
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  PREASIM_using(A68_279  Opcode, A68_INT  O)
{ 
A68_INT  QREASIM_target;
A68_BITS  RREASIM_del;
A68_INT  SREASIM;  /* clause result */
A68_BITS  VREASIM;  /* SHL */
A68_INT  WREASIM;  /* SHL */
A68_BITS  XREASIM_data;
A_PROC_ENTRY(using);
 /* line 761: */
 /* line 762: */
{ 
QREASIM_target = O;
 /* line 763: */
 /* line 764: */
if ( (TPDASIM_topdellist!=0) )
{ 
if ( (QREASIM_target>GLDASIM_location) )
{ 
QREASIM_target+=4;
} 
 /* line 765: */
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 766: */
 /* line 767: */
TPDASIM_topdellist = 0;
} 
 /* line 768: */
RREASIM_del = EPEASIM_delayinstruction(QREASIM_target);
 /* line 769: */
if ( (RREASIM_del==BZDASIM_nop.Mask) )
{ 
SREASIM = 0;
} 
else
{ 
SREASIM = 4;
} 
QREASIM_target+=SREASIM;
 /* line 770: */
QREASIM_target = ((QREASIM_target-GLDASIM_location)/4);
 /* line 771: */
 /* line 772: */
GJDASIM_assert(UREASIM, ((MQDASIM_minimm22<=QREASIM_target)&(QREASIM_target<=LQDASIM_maximm22)));
 /* line 773: */
 /* line 774: */
VREASIM = Opcode.Cond ;
WREASIM = 25 ;
XREASIM_data = (A68_BITS )((A68_BITS )((A68_BITS )QREASIM_target&HQDASIM_mask22)|A_SHL(VREASIM,WREASIM));
 /* line 775: */
GMDASIM_assemble32bits((A68_BITS )(Opcode.M.Mask|XREASIM_data));
 /* line 776: */
 /* line 777: */
GMDASIM_assemble32bits(RREASIM_del);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  ASEASIM_using(A68_279  Opcode, A68_231 * Label)
{ 
A68_INT * BSEASIM;  /* YIELD */
A68_BOOL * CSEASIM;  /* YIELD */
A68_INT * DSEASIM;  /* YIELD */
A68_BITS  ESEASIM;  /* SHL */
A68_INT  FSEASIM;  /* SHL */
A_PROC_ENTRY(using);
 /* line 780: */
 /* line 781: */
{ 
BSEASIM = (&(Label->Size)) ;
(*BSEASIM) = 22;
 /* line 782: */
CSEASIM = (&(Label->Canoptimise)) ;
(*CSEASIM) = A68_TRUE;
 /* line 783: */
 /* line 784: */
if ( (TPDASIM_topdellist!=0) )
{ 
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 785: */
 /* line 786: */
TPDASIM_topdellist = 0;
} 
 /* line 787: */
DSEASIM = (&(Label->Location)) ;
(*DSEASIM) = GLDASIM_location;
 /* line 788: */
ESEASIM = Opcode.Cond ;
FSEASIM = 25 ;
GMDASIM_assemble32bits((A68_BITS )(Opcode.M.Mask|A_SHL(ESEASIM,FSEASIM)));
 /* line 789: */
 /* line 790: */
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  ISEASIM_using(A68_246  M, A68_239  Oprnd)
{ 
A68_239  JSEASIM;  /* united object - for case conformity */
A68_237  KSEASIM_ops;
A68_BITS  LSEASIM;  /* clause result */
A68_BITS  MSEASIM;  /* SHL */
A68_INT  NSEASIM;  /* SHL */
A68_BITS  OSEASIM;  /* SHL */
A68_INT  PSEASIM;  /* SHL */
A68_238  QSEASIM_ops;
A68_BITS  RSEASIM;  /* SHL */
A68_INT  SSEASIM;  /* SHL */
A68_BITS  TSEASIM;  /* SHL */
A68_INT  USEASIM;  /* SHL */
A68_BITS  VSEASIM_data;
A68_BITS  WSEASIM_instr;
A68_INT  XSEASIM_i;
A68_INT  YSEASIM;  /* to part of loop */
A_PROC_ENTRY(using);
 /* line 794: */
 /* line 796: */
{ 
 /* line 797: */
JSEASIM = Oprnd ;
switch ( JSEASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS,BITS)  */
KSEASIM_ops = (JSEASIM.data.mode1);
 /* line 798: */
 /* line 799: */
 /* line 800: */
MSEASIM = KSEASIM_ops.Rd ;
NSEASIM = 25 ;
OSEASIM = KSEASIM_ops.Rs1 ;
PSEASIM = 14 ;
LSEASIM = (A68_BITS )((A68_BITS )(A_SHL(MSEASIM,NSEASIM)|A_SHL(OSEASIM,PSEASIM))|KSEASIM_ops.Rs2);
break;
case 2: /* STRUCT(BITS,INT,BITS)  */
QSEASIM_ops = (JSEASIM.data.mode2);
 /* line 801: */
 /* line 802: */
 /* line 803: */
RSEASIM = QSEASIM_ops.Rd ;
SSEASIM = 25 ;
TSEASIM = QSEASIM_ops.Rs1 ;
USEASIM = 14 ;
LSEASIM = (A68_BITS )((A68_BITS )((A68_BITS )(A_SHL(RSEASIM,SSEASIM)|A_SHL(TSEASIM,USEASIM))|(A68_BITS )((A68_BITS )QSEASIM_ops.Imm&GQDASIM_mask13))|0X2000U);
break;
default: 
A_IMP_SKIP ;
break;
} 
VSEASIM_data = LSEASIM;
 /* line 805: */
WSEASIM_instr = (A68_BITS )(M.Mask|VSEASIM_data);
 /* line 806: */
 /* line 807: */
if ( (TPDASIM_topdellist!=0) )
{ 
YSEASIM = TPDASIM_topdellist;
for ( XSEASIM_i = 1;
XSEASIM_i <= YSEASIM;
XSEASIM_i += 1 )
{ 
 /* line 808: */
 /* line 809: */
KMDASIM_assemble32bitsat(WSEASIM_instr, (*(&A_R1INDEX(RPDASIM_dellist,XSEASIM_i))));
}
 /* line 810: */
 /* line 811: */
TPDASIM_topdellist = 0;
} 
 /* line 812: */
 /* line 813: */
GMDASIM_assemble32bits(WSEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  BTEASIM_using(A68_281  Opcode, A68_236  Oprnd)
{ 
A68_236  CTEASIM;  /* united object - for case conformity */
A68_233  DTEASIM_ops;
A68_BITS  ETEASIM;  /* clause result */
A68_BITS  FTEASIM;  /* SHL */
A68_INT  GTEASIM;  /* SHL */
A68_234  HTEASIM_ops;
A68_BITS  ITEASIM;  /* SHL */
A68_INT  JTEASIM;  /* SHL */
A68_BITS  KTEASIM_data;
A68_BITS  LTEASIM;  /* SHL */
A68_INT  MTEASIM;  /* SHL */
A68_BITS  NTEASIM_cond;
A68_BITS  OTEASIM_instr;
A68_INT  PTEASIM_i;
A68_INT  QTEASIM;  /* to part of loop */
A_PROC_ENTRY(using);
 /* line 817: */
 /* line 819: */
{ 
 /* line 820: */
CTEASIM = Oprnd ;
switch ( CTEASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS)  */
DTEASIM_ops = (CTEASIM.data.mode1);
 /* line 821: */
FTEASIM = DTEASIM_ops.Rs1 ;
GTEASIM = 14 ;
ETEASIM = (A68_BITS )(A_SHL(FTEASIM,GTEASIM)|DTEASIM_ops.Rs2);
break;
case 2: /* STRUCT(BITS,INT)  */
HTEASIM_ops = (CTEASIM.data.mode2);
 /* line 822: */
 /* line 823: */
ITEASIM = HTEASIM_ops.Rs1 ;
JTEASIM = 14 ;
ETEASIM = (A68_BITS )((A68_BITS )(A_SHL(ITEASIM,JTEASIM)|(A68_BITS )((A68_BITS )HTEASIM_ops.Imm&GQDASIM_mask13))|0X2000U);
break;
default: 
A_IMP_SKIP ;
break;
} 
KTEASIM_data = ETEASIM;
 /* line 824: */
LTEASIM = Opcode.Cond ;
MTEASIM = 25 ;
NTEASIM_cond = A_SHL(LTEASIM,MTEASIM);
 /* line 825: */
OTEASIM_instr = (A68_BITS )((A68_BITS )(Opcode.M.Mask|NTEASIM_cond)|KTEASIM_data);
 /* line 826: */
 /* line 827: */
if ( (TPDASIM_topdellist!=0) )
{ 
QTEASIM = TPDASIM_topdellist;
for ( PTEASIM_i = 1;
PTEASIM_i <= QTEASIM;
PTEASIM_i += 1 )
{ 
 /* line 828: */
 /* line 829: */
KMDASIM_assemble32bitsat(OTEASIM_instr, (*(&A_R1INDEX(RPDASIM_dellist,PTEASIM_i))));
}
 /* line 830: */
 /* line 831: */
TPDASIM_topdellist = 0;
} 
 /* line 832: */
 /* line 833: */
GMDASIM_assemble32bits(OTEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  TTEASIM_using(A68_248  M, A68_BITS  O)
{ 
A68_INT  UTEASIM;  /* SHL */
A68_BITS  VTEASIM_instr;
A68_INT  WTEASIM_i;
A68_INT  XTEASIM;  /* to part of loop */
A_PROC_ENTRY(using);
 /* line 838: */
 /* line 839: */
{ 
UTEASIM = 25 ;
VTEASIM_instr = (A68_BITS )(M.Mask|A_SHL(O,UTEASIM));
 /* line 840: */
 /* line 841: */
if ( (TPDASIM_topdellist!=0) )
{ 
XTEASIM = TPDASIM_topdellist;
for ( WTEASIM_i = 1;
WTEASIM_i <= XTEASIM;
WTEASIM_i += 1 )
{ 
 /* line 842: */
 /* line 843: */
KMDASIM_assemble32bitsat(VTEASIM_instr, (*(&A_R1INDEX(RPDASIM_dellist,WTEASIM_i))));
}
 /* line 844: */
 /* line 845: */
TPDASIM_topdellist = 0;
} 
 /* line 846: */
 /* line 847: */
GMDASIM_assemble32bits(VTEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  AUEASIM_using(A68_249  M, A68_236  Oprnd)
{ 
A68_236  BUEASIM;  /* united object - for case conformity */
A68_233  CUEASIM_ops;
A68_BITS  DUEASIM;  /* clause result */
A68_BITS  EUEASIM;  /* SHL */
A68_INT  FUEASIM;  /* SHL */
A68_234  GUEASIM_ops;
A68_BITS  HUEASIM;  /* SHL */
A68_INT  IUEASIM;  /* SHL */
A68_BITS  JUEASIM_data;
A68_BITS  KUEASIM_instr;
A68_INT  LUEASIM_i;
A68_INT  MUEASIM;  /* to part of loop */
A_PROC_ENTRY(using);
 /* line 851: */
 /* line 853: */
{ 
 /* line 854: */
BUEASIM = Oprnd ;
switch ( BUEASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS)  */
CUEASIM_ops = (BUEASIM.data.mode1);
 /* line 855: */
 /* line 856: */
EUEASIM = CUEASIM_ops.Rs1 ;
FUEASIM = 14 ;
DUEASIM = (A68_BITS )(A_SHL(EUEASIM,FUEASIM)|CUEASIM_ops.Rs2);
break;
case 2: /* STRUCT(BITS,INT)  */
GUEASIM_ops = (BUEASIM.data.mode2);
 /* line 857: */
 /* line 858: */
HUEASIM = GUEASIM_ops.Rs1 ;
IUEASIM = 14 ;
DUEASIM = (A68_BITS )((A68_BITS )(A_SHL(HUEASIM,IUEASIM)|(A68_BITS )((A68_BITS )GUEASIM_ops.Imm&GQDASIM_mask13))|0X2000U);
break;
default: 
A_IMP_SKIP ;
break;
} 
JUEASIM_data = DUEASIM;
 /* line 859: */
KUEASIM_instr = (A68_BITS )(M.Mask|JUEASIM_data);
 /* line 860: */
 /* line 861: */
if ( (TPDASIM_topdellist!=0) )
{ 
MUEASIM = TPDASIM_topdellist;
for ( LUEASIM_i = 1;
LUEASIM_i <= MUEASIM;
LUEASIM_i += 1 )
{ 
 /* line 862: */
 /* line 863: */
KMDASIM_assemble32bitsat(KUEASIM_instr, (*(&A_R1INDEX(RPDASIM_dellist,LUEASIM_i))));
}
 /* line 864: */
 /* line 865: */
TPDASIM_topdellist = 0;
} 
 /* line 866: */
 /* line 867: */
GMDASIM_assemble32bits(KUEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  PUEASIM_using(A68_250  M, A68_239  Oprnd)
{ 
A68_239  QUEASIM;  /* united object - for case conformity */
A68_237  RUEASIM_ops;
A68_BITS  SUEASIM;  /* clause result */
A68_BITS  TUEASIM;  /* SHL */
A68_INT  UUEASIM;  /* SHL */
A68_BITS  VUEASIM;  /* SHL */
A68_INT  WUEASIM;  /* SHL */
A68_238  XUEASIM_ops;
A68_BITS  YUEASIM;  /* SHL */
A68_INT  ZUEASIM;  /* SHL */
A68_BITS  AVEASIM;  /* SHL */
A68_INT  BVEASIM;  /* SHL */
A68_BITS  CVEASIM_data;
A68_BITS  DVEASIM_instr;
A_PROC_ENTRY(using);
 /* line 872: */
 /* line 874: */
{ 
 /* line 875: */
QUEASIM = Oprnd ;
switch ( QUEASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS,BITS)  */
RUEASIM_ops = (QUEASIM.data.mode1);
 /* line 876: */
 /* line 877: */
 /* line 878: */
TUEASIM = RUEASIM_ops.Rd ;
UUEASIM = 25 ;
VUEASIM = RUEASIM_ops.Rs1 ;
WUEASIM = 14 ;
SUEASIM = (A68_BITS )((A68_BITS )(A_SHL(TUEASIM,UUEASIM)|A_SHL(VUEASIM,WUEASIM))|RUEASIM_ops.Rs2);
break;
case 2: /* STRUCT(BITS,INT,BITS)  */
XUEASIM_ops = (QUEASIM.data.mode2);
 /* line 879: */
 /* line 880: */
 /* line 881: */
YUEASIM = XUEASIM_ops.Rd ;
ZUEASIM = 25 ;
AVEASIM = XUEASIM_ops.Rs1 ;
BVEASIM = 14 ;
SUEASIM = (A68_BITS )((A68_BITS )((A68_BITS )(A_SHL(YUEASIM,ZUEASIM)|A_SHL(AVEASIM,BVEASIM))|(A68_BITS )((A68_BITS )XUEASIM_ops.Imm&GQDASIM_mask13))|0X2000U);
break;
default: 
A_IMP_SKIP ;
break;
} 
CVEASIM_data = SUEASIM;
 /* line 883: */
DVEASIM_instr = (A68_BITS )(M.Mask|CVEASIM_data);
 /* line 884: */
 /* line 885: */
if ( (TPDASIM_topdellist!=0) )
{ 
GMDASIM_assemble32bits(BZDASIM_nop.Mask);
 /* line 886: */
 /* line 887: */
TPDASIM_topdellist = 0;
} 
 /* line 888: */
 /* line 889: */
GMDASIM_assemble32bits(DVEASIM_instr);
} 
A_PROC_EXIT(using);
return;
} 
#undef NL

A68_VOID  TXEASIM_fixmachinelabel(A68_231  Label)
{ 
A68_INT  UXEASIM_offset;
A68_BOOL  VXEASIM;  /* optbool result */
A68_INT * WXEASIM;  /* YIELD */
A68_BITS  XXEASIM_instr;
A68_INT  AYEASIM;  /* SHL */
A68_INT  BYEASIM;  /* SHL */
A_PROC_ENTRY(fixmachinelabel);
 /* line 934: */
 /* line 935: */
{ 
UXEASIM_offset = ((GLDASIM_location-Label.Location)/4);
 /* line 936: */
VXEASIM = Label.Canoptimise;
if ( VXEASIM )
{VXEASIM = (TPDASIM_topdellist<RPDASIM_dellist.dim[0].upb);
}
 /* line 937: */
if ( VXEASIM )
{ 
TPDASIM_topdellist+=1;
 /* line 938: */
WXEASIM = (&A_R1INDEX(RPDASIM_dellist,TPDASIM_topdellist)) ;
(*WXEASIM) = (Label.Location+4);
 /* line 939: */
 /* line 940: */
UXEASIM_offset+=1;
} 
 /* line 941: */
XXEASIM_instr = NMDASIM_dissassemble16bitsat(Label.Location);
 /* line 942: */
 /* line 943: */
if ( (Label.Size==22) )
{ 
 /* line 944: */
GJDASIM_assert(ZXEASIM, (((MQDASIM_minimm22*4)<=UXEASIM_offset)&(UXEASIM_offset<=(LQDASIM_maximm22*4))));
 /* line 945: */
 /* line 946: */
 /* line 947: */
 /* line 948: */
AYEASIM = 16 ;
KMDASIM_assemble32bitsat((A68_BITS )(A_SHL(XXEASIM_instr,AYEASIM)|(A68_BITS )(HQDASIM_mask22&(A68_BITS )UXEASIM_offset)), Label.Location);
} 
else
{ 
 /* line 949: */
 /* line 950: */
 /* line 951: */
BYEASIM = 16 ;
KMDASIM_assemble32bitsat((A68_BITS )(A_SHL(XXEASIM_instr,BYEASIM)|(A68_BITS )(IQDASIM_mask30&(A68_BITS )UXEASIM_offset)), Label.Location);
} 
} 
A_PROC_EXIT(fixmachinelabel);
return;
} 
#undef NL

A68_VOID  CYEASIM_maret(void)
{ 
A68_238  DYEASIM;  /* collateral clause result */
A68_239  EYEASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(maret);
DYEASIM.Rs1 = RXEASIM_i7;
DYEASIM.Imm = 8;
DYEASIM.Rd = FVEASIM_g0;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(EYEASIM,mode2,2,DYEASIM));
A_PROC_EXIT(maret);
return;
} 
#undef NL

A68_VOID  FYEASIM_maretl(void)
{ 
A68_238  GYEASIM;  /* collateral clause result */
A68_239  HYEASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(maretl);
GYEASIM.Rs1 = KWEASIM_o7;
GYEASIM.Imm = 8;
GYEASIM.Rd = FVEASIM_g0;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(HYEASIM,mode2,2,GYEASIM));
A_PROC_EXIT(maretl);
return;
} 
#undef NL

A68_VOID  MYEASIM_maaddrir(A68_BITS  Rs, A68_INT  I, A68_BITS  Temp, A68_BITS  Rd)
{ 
A68_BOOL  NYEASIM;  /* optbool result */
A68_BITS  OYEASIM;  /* SHR */
A68_INT  PYEASIM;  /* SHR */
A68_INT  QYEASIM_hi;
A68_BITS  RYEASIM;  /* clause result */
A68_BITS  SYEASIM_intermed;
A68_235  TYEASIM;  /* collateral clause result */
A68_238  UYEASIM;  /* collateral clause result */
A68_239  VYEASIM;  /* OPERATORS - mode -> union mode */
A68_237  WYEASIM;  /* collateral clause result */
A68_239  XYEASIM;  /* OPERATORS - mode -> union mode */
A68_238  YYEASIM;  /* collateral clause result */
A68_239  ZYEASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(maaddrir);
 /* line 961: */
 /* line 962: */
{ 
NYEASIM = (I>JQDASIM_maximm13);
if ( ! NYEASIM )
{NYEASIM = (I<KQDASIM_minimm13);
}
 /* line 963: */
if ( NYEASIM )
{ 
OYEASIM = (A68_BITS )I ;
PYEASIM = 10 ;
QYEASIM_hi = (A68_INT )A_SHR(OYEASIM,PYEASIM);
 /* line 964: */
if ( (Rs==Rd) )
{ 
RYEASIM = Temp;
} 
else
{ 
RYEASIM = Rd;
} 
SYEASIM_intermed = RYEASIM;
 /* line 965: */
TYEASIM.Imm = QYEASIM_hi;
TYEASIM.Rd = SYEASIM_intermed;
QQEASIM_using(XYDASIM_sethi, TYEASIM);
 /* line 966: */
UYEASIM.Rs1 = SYEASIM_intermed;
UYEASIM.Imm = (A68_INT )(A68_BITS )((A68_BITS )I&0X3ffU);
UYEASIM.Rd = SYEASIM_intermed;
ISEASIM_using(DAEASIM_add, A_UNITE(VYEASIM,mode2,2,UYEASIM));
 /* line 967: */
WYEASIM.Rs1 = Rs;
WYEASIM.Rs2 = SYEASIM_intermed;
 /* line 968: */
WYEASIM.Rd = Rd;
 /* line 969: */
ISEASIM_using(DAEASIM_add, A_UNITE(XYEASIM,mode1,1,WYEASIM));
} 
else
{ 
YYEASIM.Rs1 = Rs;
YYEASIM.Imm = (A68_INT )(A68_BITS )((A68_BITS )I&GQDASIM_mask13);
 /* line 970: */
YYEASIM.Rd = Rd;
 /* line 971: */
ISEASIM_using(DAEASIM_add, A_UNITE(ZYEASIM,mode2,2,YYEASIM));
} 
} 
A_PROC_EXIT(maaddrir);
return;
} 
#undef NL

A68_VOID  CZEASIM_mamovir(A68_INT  I, A68_BITS  Rd)
{ 
A68_BOOL  DZEASIM;  /* optbool result */
A68_BITS  EZEASIM;  /* SHR */
A68_INT  FZEASIM;  /* SHR */
A68_INT  GZEASIM_hi;
A68_235  HZEASIM;  /* collateral clause result */
A68_238  IZEASIM;  /* collateral clause result */
A68_239  JZEASIM;  /* OPERATORS - mode -> union mode */
A68_238  KZEASIM;  /* collateral clause result */
A68_239  LZEASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(mamovir);
 /* line 976: */
 /* line 977: */
{ 
DZEASIM = (I>JQDASIM_maximm13);
if ( ! DZEASIM )
{DZEASIM = (I<KQDASIM_minimm13);
}
 /* line 978: */
if ( DZEASIM )
{ 
EZEASIM = (A68_BITS )I ;
FZEASIM = 10 ;
GZEASIM_hi = (A68_INT )A_SHR(EZEASIM,FZEASIM);
 /* line 979: */
HZEASIM.Imm = GZEASIM_hi;
HZEASIM.Rd = Rd;
QQEASIM_using(XYDASIM_sethi, HZEASIM);
 /* line 980: */
IZEASIM.Rs1 = Rd;
IZEASIM.Imm = (A68_INT )(A68_BITS )((A68_BITS )I&0X3ffU);
 /* line 981: */
IZEASIM.Rd = Rd;
 /* line 982: */
ISEASIM_using(DAEASIM_add, A_UNITE(JZEASIM,mode2,2,IZEASIM));
} 
else
{ 
KZEASIM.Rs1 = FVEASIM_g0;
KZEASIM.Imm = (A68_INT )(A68_BITS )((A68_BITS )I&GQDASIM_mask13);
 /* line 983: */
KZEASIM.Rd = Rd;
 /* line 984: */
ISEASIM_using(LAEASIM_or, A_UNITE(LZEASIM,mode2,2,KZEASIM));
} 
} 
A_PROC_EXIT(mamovir);
return;
} 
#undef NL

A68_VOID  OZEASIM_madiv(void)
{ 
union {  /* BIOP 99 */
A68_129   source;
A68_304   destination;
} PZEASIM; 
A68_129  QZEASIM;  /* procedure value */
A68_237  RZEASIM;  /* collateral clause result */
A68_239  SZEASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(madiv);
{ 
QZEASIM.fn.fn_global = MZEASIM_div;
QZEASIM.nonlocals = A68_NIL;
PZEASIM.source = QZEASIM ;
CZEASIM_mamovir((PZEASIM.destination).Addr, JWEASIM_r15);
 /* line 999: */
RZEASIM.Rs1 = JWEASIM_r15;
RZEASIM.Rs2 = FVEASIM_g0;
 /* line 1000: */
RZEASIM.Rd = JWEASIM_r15;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(SZEASIM,mode1,1,RZEASIM));
} 
A_PROC_EXIT(madiv);
return;
} 
#undef NL

A68_VOID  TZEASIM_mamul(void)
{ 
union {  /* BIOP 99 */
A68_129   source;
A68_304   destination;
} UZEASIM; 
A68_129  VZEASIM;  /* procedure value */
A68_237  WZEASIM;  /* collateral clause result */
A68_239  XZEASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(mamul);
{ 
VZEASIM.fn.fn_global = NZEASIM_mul;
VZEASIM.nonlocals = A68_NIL;
UZEASIM.source = VZEASIM ;
CZEASIM_mamovir((UZEASIM.destination).Addr, JWEASIM_r15);
 /* line 1005: */
WZEASIM.Rs1 = JWEASIM_r15;
WZEASIM.Rs2 = FVEASIM_g0;
 /* line 1006: */
WZEASIM.Rd = JWEASIM_r15;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(XZEASIM,mode1,1,WZEASIM));
} 
A_PROC_EXIT(mamul);
return;
} 
#undef NL

A68_VOID  ZZEASIM_maputchar(A68_CHAR  C)
{ 
A_PROC_ENTRY(maputchar);
YLDASIM_assemble8bits((A68_BITS )(A68_INT)(unsigned char)C);
A_PROC_EXIT(maputchar);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void KIDASIM(void)   /* initialise DECS kemassemsparc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kemassemsparc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kesave.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_36  QIDASIM;  /* procedure value */
A68_VC  OJDASIM;  /* avoid structure result */
A68_228  SPDASIM;  /* avoid structure result */
A68_129  FQDASIM;  /* procedure value */
A68_231  PQDASIM;  /* collateral clause result */
A68_251  QRDASIM;  /* procedure value */
A68_252  BSDASIM;  /* procedure value */
A68_253  MSDASIM;  /* procedure value */
A68_254  XSDASIM;  /* procedure value */
A68_255  ITDASIM;  /* procedure value */
A68_256  TTDASIM;  /* procedure value */
A68_257  EUDASIM;  /* procedure value */
A68_258  PUDASIM;  /* procedure value */
A68_259  AVDASIM;  /* procedure value */
A68_260  LVDASIM;  /* procedure value */
A68_261  WVDASIM;  /* procedure value */
A68_240  IYDASIM;  /* collateral clause result */
A68_241  MYDASIM;  /* collateral clause result */
A68_242  QYDASIM;  /* collateral clause result */
A68_243  UYDASIM;  /* collateral clause result */
A68_243  YYDASIM;  /* collateral clause result */
A68_244  CZDASIM;  /* collateral clause result */
A68_244  GZDASIM;  /* collateral clause result */
A68_244  KZDASIM;  /* collateral clause result */
A68_245  OZDASIM;  /* collateral clause result */
A68_245  SZDASIM;  /* collateral clause result */
A68_245  WZDASIM;  /* collateral clause result */
A68_246  AAEASIM;  /* collateral clause result */
A68_246  EAEASIM;  /* collateral clause result */
A68_246  IAEASIM;  /* collateral clause result */
A68_246  MAEASIM;  /* collateral clause result */
A68_246  QAEASIM;  /* collateral clause result */
A68_246  UAEASIM;  /* collateral clause result */
A68_246  YAEASIM;  /* collateral clause result */
A68_246  CBEASIM;  /* collateral clause result */
A68_246  GBEASIM;  /* collateral clause result */
A68_246  KBEASIM;  /* collateral clause result */
A68_246  OBEASIM;  /* collateral clause result */
A68_246  SBEASIM;  /* collateral clause result */
A68_246  WBEASIM;  /* collateral clause result */
A68_246  ACEASIM;  /* collateral clause result */
A68_246  ECEASIM;  /* collateral clause result */
A68_246  ICEASIM;  /* collateral clause result */
A68_246  MCEASIM;  /* collateral clause result */
A68_246  QCEASIM;  /* collateral clause result */
A68_246  UCEASIM;  /* collateral clause result */
A68_246  YCEASIM;  /* collateral clause result */
A68_246  CDEASIM;  /* collateral clause result */
A68_246  GDEASIM;  /* collateral clause result */
A68_246  KDEASIM;  /* collateral clause result */
A68_246  ODEASIM;  /* collateral clause result */
A68_246  SDEASIM;  /* collateral clause result */
A68_246  WDEASIM;  /* collateral clause result */
A68_246  AEEASIM;  /* collateral clause result */
A68_246  EEEASIM;  /* collateral clause result */
A68_246  IEEASIM;  /* collateral clause result */
A68_246  MEEASIM;  /* collateral clause result */
A68_246  QEEASIM;  /* collateral clause result */
A68_246  UEEASIM;  /* collateral clause result */
A68_246  YEEASIM;  /* collateral clause result */
A68_246  CFEASIM;  /* collateral clause result */
A68_246  GFEASIM;  /* collateral clause result */
A68_246  KFEASIM;  /* collateral clause result */
A68_246  OFEASIM;  /* collateral clause result */
A68_246  SFEASIM;  /* collateral clause result */
A68_246  WFEASIM;  /* collateral clause result */
A68_246  AGEASIM;  /* collateral clause result */
A68_246  EGEASIM;  /* collateral clause result */
A68_246  IGEASIM;  /* collateral clause result */
A68_246  MGEASIM;  /* collateral clause result */
A68_246  QGEASIM;  /* collateral clause result */
A68_246  UGEASIM;  /* collateral clause result */
A68_246  YGEASIM;  /* collateral clause result */
A68_246  CHEASIM;  /* collateral clause result */
A68_246  GHEASIM;  /* collateral clause result */
A68_246  KHEASIM;  /* collateral clause result */
A68_246  OHEASIM;  /* collateral clause result */
A68_246  SHEASIM;  /* collateral clause result */
A68_246  WHEASIM;  /* collateral clause result */
A68_246  AIEASIM;  /* collateral clause result */
A68_246  EIEASIM;  /* collateral clause result */
A68_246  IIEASIM;  /* collateral clause result */
A68_246  MIEASIM;  /* collateral clause result */
A68_246  QIEASIM;  /* collateral clause result */
A68_246  UIEASIM;  /* collateral clause result */
A68_246  YIEASIM;  /* collateral clause result */
A68_246  CJEASIM;  /* collateral clause result */
A68_246  GJEASIM;  /* collateral clause result */
A68_246  KJEASIM;  /* collateral clause result */
A68_246  OJEASIM;  /* collateral clause result */
A68_246  SJEASIM;  /* collateral clause result */
A68_246  WJEASIM;  /* collateral clause result */
A68_246  AKEASIM;  /* collateral clause result */
A68_246  EKEASIM;  /* collateral clause result */
A68_246  IKEASIM;  /* collateral clause result */
A68_246  MKEASIM;  /* collateral clause result */
A68_246  QKEASIM;  /* collateral clause result */
A68_246  UKEASIM;  /* collateral clause result */
A68_246  YKEASIM;  /* collateral clause result */
A68_246  CLEASIM;  /* collateral clause result */
A68_246  GLEASIM;  /* collateral clause result */
A68_246  KLEASIM;  /* collateral clause result */
A68_246  OLEASIM;  /* collateral clause result */
A68_246  SLEASIM;  /* collateral clause result */
A68_246  WLEASIM;  /* collateral clause result */
A68_246  AMEASIM;  /* collateral clause result */
A68_246  EMEASIM;  /* collateral clause result */
A68_246  IMEASIM;  /* collateral clause result */
A68_246  MMEASIM;  /* collateral clause result */
A68_246  QMEASIM;  /* collateral clause result */
A68_246  UMEASIM;  /* collateral clause result */
A68_246  YMEASIM;  /* collateral clause result */
A68_246  CNEASIM;  /* collateral clause result */
A68_246  GNEASIM;  /* collateral clause result */
A68_246  KNEASIM;  /* collateral clause result */
A68_246  ONEASIM;  /* collateral clause result */
A68_246  SNEASIM;  /* collateral clause result */
A68_246  WNEASIM;  /* collateral clause result */
A68_246  AOEASIM;  /* collateral clause result */
A68_246  EOEASIM;  /* collateral clause result */
A68_247  IOEASIM;  /* collateral clause result */
A68_248  MOEASIM;  /* collateral clause result */
A68_249  QOEASIM;  /* collateral clause result */
A68_249  UOEASIM;  /* collateral clause result */
A68_250  YOEASIM;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
EFBASIM();   /* USE kesave */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kemassemsparc.a68";
A_config.translation_time = "Tue Apr  4 11:06:16 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JIDASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:06:16 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kemassemsparc);
UEAALIB_a68config(LGAALIB_configinfo, OIDASIM);
 /* line 99: */
QIDASIM.fn.fn_global = QKDAOST_abort;
QIDASIM.nonlocals = A68_NIL;
PIDASIM_faultproc = QIDASIM;
 /* line 101: */
 /* line 104: */
 /* line 110: */
 /* line 122: */
KJDASIM_generator( A68_FALSE, &OJDASIM );
NJDASIM_code = OJDASIM;
 /* line 125: */
 /* line 127: */
 /* line 137: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 159: */
 /* line 160: */
 /* line 168: */
 /* line 173: */
GLDASIM_location = 1;
 /* line 175: */
 /* line 180: */
 /* line 181: */
 /* line 183: */
 /* line 185: */
 /* line 190: */
 /* line 196: */
 /* line 203: */
 /* line 210: */
 /* line 215: */
 /* line 221: */
 /* line 227: */
 /* line 230: */
 /* line 237: */
 /* line 283: */
 /* line 285: */
MPDASIM_nullmachineoffset = (-1);
 /* line 290: */
OPDASIM_generator( A68_TRUE, &SPDASIM );
RPDASIM_dellist = SPDASIM;
 /* line 291: */
TPDASIM_topdellist = 0;
 /* line 293: */
 /* line 301: */
 /* line 307: */
 /* line 323: */
 /* line 334: */
FQDASIM.fn.fn_global = FLDASIM_setcodeaccess;
FQDASIM.nonlocals = A68_NIL;
EQDASIM_maexecutable = (FQDASIM);
 /* line 338: */
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
JQDASIM_maximm13 = (A68_INT )0XfffU;
 /* line 344: */
KQDASIM_minimm13 = ((-1)-JQDASIM_maximm13);
 /* line 345: */
LQDASIM_maximm22 = (A68_INT )0X1fffffU;
 /* line 346: */
MQDASIM_minimm22 = ((-1)-LQDASIM_maximm22);
 /* line 347: */
NQDASIM_maximm30 = (A68_INT )0X1fffffffU;
 /* line 348: */
OQDASIM_minimm30 = ((-1)-NQDASIM_maximm30);
 /* line 358: */
 /* line 359: */
PQDASIM.Location = (-1);
PQDASIM.Size = (-1);
PQDASIM.Canoptimise = A68_FALSE;
QQDASIM_nullmachinelabel = PQDASIM;
 /* line 361: */
 /* line 370: */
 /* line 378: */
 /* line 390: */
QRDASIM.fn.fn_global = HRDASIM_generator;
QRDASIM.nonlocals = A68_NIL;
VQDASIM_anonymous = QRDASIM;
BSDASIM.fn.fn_global = SRDASIM_generator;
BSDASIM.nonlocals = A68_NIL;
WQDASIM_anonymous = BSDASIM;
MSDASIM.fn.fn_global = DSDASIM_generator;
MSDASIM.nonlocals = A68_NIL;
XQDASIM_anonymous = MSDASIM;
XSDASIM.fn.fn_global = OSDASIM_generator;
XSDASIM.nonlocals = A68_NIL;
YQDASIM_anonymous = XSDASIM;
ITDASIM.fn.fn_global = ZSDASIM_generator;
ITDASIM.nonlocals = A68_NIL;
ZQDASIM_anonymous = ITDASIM;
TTDASIM.fn.fn_global = KTDASIM_generator;
TTDASIM.nonlocals = A68_NIL;
ARDASIM_anonymous = TTDASIM;
EUDASIM.fn.fn_global = VTDASIM_generator;
EUDASIM.nonlocals = A68_NIL;
BRDASIM_anonymous = EUDASIM;
PUDASIM.fn.fn_global = GUDASIM_generator;
PUDASIM.nonlocals = A68_NIL;
CRDASIM_anonymous = PUDASIM;
AVDASIM.fn.fn_global = RUDASIM_generator;
AVDASIM.nonlocals = A68_NIL;
DRDASIM_anonymous = AVDASIM;
LVDASIM.fn.fn_global = CVDASIM_generator;
LVDASIM.nonlocals = A68_NIL;
ERDASIM_anonymous = LVDASIM;
WVDASIM.fn.fn_global = NVDASIM_generator;
WVDASIM.nonlocals = A68_NIL;
FRDASIM_anonymous = WVDASIM;
 /* line 402: */
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
 /* line 411: */
 /* line 412: */
 /* line 413: */
 /* line 414: */
 /* line 415: */
 /* line 416: */
 /* line 417: */
 /* line 418: */
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
 /* line 428: */
 /* line 429: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
 /* line 433: */
 /* line 434: */
 /* line 435: */
 /* line 436: */
 /* line 439: */
 /* line 442: */
 /* line 453: */
 /* line 454: */
 /* line 457: */
 /* line 460: */
 /* line 469: */
 /* line 471: */
IYDASIM.Mask = 0X40000000U;
IYDASIM.M1a = KYDASIM;
LYDASIM_call = IYDASIM;
 /* line 473: */
 /* line 475: */
MYDASIM.Mask = 0X40000000U;
MYDASIM.M1b = OYDASIM;
PYDASIM_calld = MYDASIM;
 /* line 477: */
 /* line 478: */
QYDASIM.Mask = 0X00000000U;
QYDASIM.M2a = SYDASIM;
TYDASIM_unimp = QYDASIM;
 /* line 480: */
 /* line 481: */
UYDASIM.Mask = 0X01000000U;
UYDASIM.M2b = WYDASIM;
XYDASIM_sethi = UYDASIM;
 /* line 482: */
YYDASIM.Mask = 0X01000000U;
YYDASIM.M2b = AZDASIM;
BZDASIM_nop = YYDASIM;
 /* line 484: */
 /* line 486: */
CZDASIM.Mask = 0X00800000U;
CZDASIM.M2c = EZDASIM;
FZDASIM_b = CZDASIM;
 /* line 487: */
GZDASIM.Mask = 0X01800000U;
GZDASIM.M2c = IZDASIM;
JZDASIM_fb = GZDASIM;
 /* line 488: */
KZDASIM.Mask = 0X01c00000U;
KZDASIM.M2c = MZDASIM;
NZDASIM_cb = KZDASIM;
 /* line 490: */
 /* line 492: */
OZDASIM.Mask = 0X00800000U;
OZDASIM.M2d = QZDASIM;
RZDASIM_bd = OZDASIM;
 /* line 493: */
SZDASIM.Mask = 0X01800000U;
SZDASIM.M2d = UZDASIM;
VZDASIM_fbd = SZDASIM;
 /* line 494: */
WZDASIM.Mask = 0X01c00000U;
WZDASIM.M2d = YZDASIM;
ZZDASIM_cbd = WZDASIM;
 /* line 497: */
 /* line 498: */
AAEASIM.Mask = 0X80000000U;
AAEASIM.M3a = CAEASIM;
DAEASIM_add = AAEASIM;
 /* line 499: */
EAEASIM.Mask = 0X80080000U;
EAEASIM.M3a = GAEASIM;
HAEASIM_and = EAEASIM;
 /* line 500: */
IAEASIM.Mask = 0X80100000U;
IAEASIM.M3a = KAEASIM;
LAEASIM_or = IAEASIM;
 /* line 501: */
MAEASIM.Mask = 0X80180000U;
MAEASIM.M3a = OAEASIM;
PAEASIM_xor = MAEASIM;
 /* line 502: */
QAEASIM.Mask = 0X80200000U;
QAEASIM.M3a = SAEASIM;
TAEASIM_sub = QAEASIM;
 /* line 503: */
UAEASIM.Mask = 0X80280000U;
UAEASIM.M3a = WAEASIM;
XAEASIM_andn = UAEASIM;
 /* line 504: */
YAEASIM.Mask = 0X80300000U;
YAEASIM.M3a = ABEASIM;
BBEASIM_orn = YAEASIM;
 /* line 505: */
CBEASIM.Mask = 0X80380000U;
CBEASIM.M3a = EBEASIM;
FBEASIM_xnor = CBEASIM;
 /* line 506: */
GBEASIM.Mask = 0X80400000U;
GBEASIM.M3a = IBEASIM;
JBEASIM_addx = GBEASIM;
 /* line 507: */
KBEASIM.Mask = 0X80600000U;
KBEASIM.M3a = MBEASIM;
NBEASIM_subx = KBEASIM;
 /* line 509: */
OBEASIM.Mask = 0X80800000U;
OBEASIM.M3a = QBEASIM;
RBEASIM_addcc = OBEASIM;
 /* line 510: */
SBEASIM.Mask = 0X80880000U;
SBEASIM.M3a = UBEASIM;
VBEASIM_andcc = SBEASIM;
 /* line 511: */
WBEASIM.Mask = 0X80900000U;
WBEASIM.M3a = YBEASIM;
ZBEASIM_orcc = WBEASIM;
 /* line 512: */
ACEASIM.Mask = 0X80980000U;
ACEASIM.M3a = CCEASIM;
DCEASIM_xorcc = ACEASIM;
 /* line 513: */
ECEASIM.Mask = 0X80a00000U;
ECEASIM.M3a = GCEASIM;
HCEASIM_subcc = ECEASIM;
 /* line 514: */
ICEASIM.Mask = 0X80a80000U;
ICEASIM.M3a = KCEASIM;
LCEASIM_andncc = ICEASIM;
 /* line 515: */
MCEASIM.Mask = 0X80b00000U;
MCEASIM.M3a = OCEASIM;
PCEASIM_orncc = MCEASIM;
 /* line 516: */
QCEASIM.Mask = 0X80b80000U;
QCEASIM.M3a = SCEASIM;
TCEASIM_xnorcc = QCEASIM;
 /* line 517: */
UCEASIM.Mask = 0X80c00000U;
UCEASIM.M3a = WCEASIM;
XCEASIM_addxcc = UCEASIM;
 /* line 518: */
YCEASIM.Mask = 0X80e00000U;
YCEASIM.M3a = ADEASIM;
BDEASIM_subxcc = YCEASIM;
 /* line 520: */
CDEASIM.Mask = 0X81000000U;
CDEASIM.M3a = EDEASIM;
FDEASIM_taddcc = CDEASIM;
 /* line 521: */
GDEASIM.Mask = 0X81080000U;
GDEASIM.M3a = IDEASIM;
JDEASIM_tsubcc = GDEASIM;
 /* line 522: */
KDEASIM.Mask = 0X81100000U;
KDEASIM.M3a = MDEASIM;
NDEASIM_taddcctv = KDEASIM;
 /* line 523: */
ODEASIM.Mask = 0X81180000U;
ODEASIM.M3a = QDEASIM;
RDEASIM_tsubcctv = ODEASIM;
 /* line 524: */
SDEASIM.Mask = 0X81200000U;
SDEASIM.M3a = UDEASIM;
VDEASIM_mulscc = SDEASIM;
 /* line 525: */
WDEASIM.Mask = 0X81280000U;
WDEASIM.M3a = YDEASIM;
ZDEASIM_sll = WDEASIM;
 /* line 526: */
AEEASIM.Mask = 0X81300000U;
AEEASIM.M3a = CEEASIM;
DEEASIM_srl = AEEASIM;
 /* line 527: */
EEEASIM.Mask = 0X81380000U;
EEEASIM.M3a = GEEASIM;
HEEASIM_sra = EEEASIM;
 /* line 528: */
IEEASIM.Mask = 0X81e00000U;
IEEASIM.M3a = KEEASIM;
LEEASIM_save = IEEASIM;
 /* line 529: */
MEEASIM.Mask = 0X81e80000U;
MEEASIM.M3a = OEEASIM;
PEEASIM_restore = MEEASIM;
 /* line 530: */
QEEASIM.Mask = 0Xc0000000U;
QEEASIM.M3a = SEEASIM;
TEEASIM_ld = QEEASIM;
 /* line 531: */
UEEASIM.Mask = 0Xc0080000U;
UEEASIM.M3a = WEEASIM;
XEEASIM_ldub = UEEASIM;
 /* line 532: */
YEEASIM.Mask = 0Xc0100000U;
YEEASIM.M3a = AFEASIM;
BFEASIM_lduh = YEEASIM;
 /* line 533: */
CFEASIM.Mask = 0Xc0180000U;
CFEASIM.M3a = EFEASIM;
FFEASIM_ldd = CFEASIM;
 /* line 534: */
GFEASIM.Mask = 0Xc0200000U;
GFEASIM.M3a = IFEASIM;
JFEASIM_st = GFEASIM;
 /* line 535: */
KFEASIM.Mask = 0Xc0280000U;
KFEASIM.M3a = MFEASIM;
NFEASIM_stb = KFEASIM;
 /* line 536: */
OFEASIM.Mask = 0Xc0300000U;
OFEASIM.M3a = QFEASIM;
RFEASIM_sth = OFEASIM;
 /* line 537: */
SFEASIM.Mask = 0Xc0380000U;
SFEASIM.M3a = UFEASIM;
VFEASIM_std = SFEASIM;
 /* line 538: */
WFEASIM.Mask = 0Xc0480000U;
WFEASIM.M3a = YFEASIM;
ZFEASIM_ldsb = WFEASIM;
 /* line 539: */
AGEASIM.Mask = 0Xc0500000U;
AGEASIM.M3a = CGEASIM;
DGEASIM_ldsh = AGEASIM;
 /* line 540: */
EGEASIM.Mask = 0Xc0680000U;
EGEASIM.M3a = GGEASIM;
HGEASIM_ldstub = EGEASIM;
 /* line 541: */
IGEASIM.Mask = 0Xc0780000U;
IGEASIM.M3a = KGEASIM;
LGEASIM_swap = IGEASIM;
 /* line 543: */
MGEASIM.Mask = 0Xc1000000U;
MGEASIM.M3a = OGEASIM;
PGEASIM_ldf = MGEASIM;
 /* line 544: */
QGEASIM.Mask = 0Xc1080000U;
QGEASIM.M3a = SGEASIM;
TGEASIM_ldfsr = QGEASIM;
 /* line 545: */
UGEASIM.Mask = 0Xc1180000U;
UGEASIM.M3a = WGEASIM;
XGEASIM_lddf = UGEASIM;
 /* line 546: */
YGEASIM.Mask = 0Xc1200000U;
YGEASIM.M3a = AHEASIM;
BHEASIM_stf = YGEASIM;
 /* line 547: */
CHEASIM.Mask = 0Xc1280000U;
CHEASIM.M3a = EHEASIM;
FHEASIM_stfsr = CHEASIM;
 /* line 548: */
GHEASIM.Mask = 0Xc1380000U;
GHEASIM.M3a = IHEASIM;
JHEASIM_stdf = GHEASIM;
 /* line 549: */
KHEASIM.Mask = 0Xc1800000U;
KHEASIM.M3a = MHEASIM;
NHEASIM_ldc = KHEASIM;
 /* line 550: */
OHEASIM.Mask = 0Xc1880000U;
OHEASIM.M3a = QHEASIM;
RHEASIM_ldcsr = OHEASIM;
 /* line 551: */
SHEASIM.Mask = 0Xc1980000U;
SHEASIM.M3a = UHEASIM;
VHEASIM_lddc = SHEASIM;
 /* line 552: */
WHEASIM.Mask = 0Xc1a00000U;
WHEASIM.M3a = YHEASIM;
ZHEASIM_stc = WHEASIM;
 /* line 553: */
AIEASIM.Mask = 0Xc1a80000U;
AIEASIM.M3a = CIEASIM;
DIEASIM_stcsr = AIEASIM;
 /* line 554: */
EIEASIM.Mask = 0Xc1b80000U;
EIEASIM.M3a = GIEASIM;
HIEASIM_stdc = EIEASIM;
 /* line 556: */
IIEASIM.Mask = 0X81a01880U;
IIEASIM.M3a = KIEASIM;
LIEASIM_fitos = IIEASIM;
 /* line 557: */
MIEASIM.Mask = 0X81a01900U;
MIEASIM.M3a = OIEASIM;
PIEASIM_fitod = MIEASIM;
 /* line 558: */
QIEASIM.Mask = 0X81a01980U;
QIEASIM.M3a = SIEASIM;
TIEASIM_fitox = QIEASIM;
 /* line 560: */
UIEASIM.Mask = 0X81a01820U;
UIEASIM.M3a = WIEASIM;
XIEASIM_fstoir = UIEASIM;
 /* line 561: */
YIEASIM.Mask = 0X81a01840U;
YIEASIM.M3a = AJEASIM;
BJEASIM_fdtoir = YIEASIM;
 /* line 562: */
CJEASIM.Mask = 0X81a01870U;
CJEASIM.M3a = EJEASIM;
FJEASIM_fxtoir = CJEASIM;
 /* line 564: */
GJEASIM.Mask = 0X81a01a20U;
GJEASIM.M3a = IJEASIM;
JJEASIM_fstoi = GJEASIM;
 /* line 565: */
KJEASIM.Mask = 0X81a01a40U;
KJEASIM.M3a = MJEASIM;
NJEASIM_fdtoi = KJEASIM;
 /* line 566: */
OJEASIM.Mask = 0X81a01a70U;
OJEASIM.M3a = QJEASIM;
RJEASIM_fxtoi = OJEASIM;
 /* line 568: */
SJEASIM.Mask = 0X81a01920U;
SJEASIM.M3a = UJEASIM;
VJEASIM_fstod = SJEASIM;
 /* line 569: */
WJEASIM.Mask = 0X81a019a0U;
WJEASIM.M3a = YJEASIM;
ZJEASIM_fstox = WJEASIM;
 /* line 570: */
AKEASIM.Mask = 0X81a018c0U;
AKEASIM.M3a = CKEASIM;
DKEASIM_fdtos = AKEASIM;
 /* line 571: */
EKEASIM.Mask = 0X81a019c0U;
EKEASIM.M3a = GKEASIM;
HKEASIM_fdtox = EKEASIM;
 /* line 572: */
IKEASIM.Mask = 0X81a018e0U;
IKEASIM.M3a = KKEASIM;
LKEASIM_fxtos = IKEASIM;
 /* line 573: */
MKEASIM.Mask = 0X81a01960U;
MKEASIM.M3a = OKEASIM;
PKEASIM_fxtod = MKEASIM;
 /* line 575: */
QKEASIM.Mask = 0X81a00020U;
QKEASIM.M3a = SKEASIM;
TKEASIM_fmovs = QKEASIM;
 /* line 576: */
UKEASIM.Mask = 0X81a000a0U;
UKEASIM.M3a = WKEASIM;
XKEASIM_fnegs = UKEASIM;
 /* line 577: */
YKEASIM.Mask = 0X81a00120U;
YKEASIM.M3a = ALEASIM;
BLEASIM_fabss = YKEASIM;
 /* line 579: */
CLEASIM.Mask = 0X81a00520U;
CLEASIM.M3a = ELEASIM;
FLEASIM_fsqrts = CLEASIM;
 /* line 580: */
GLEASIM.Mask = 0X81a00540U;
GLEASIM.M3a = ILEASIM;
JLEASIM_fsqrtd = GLEASIM;
 /* line 581: */
KLEASIM.Mask = 0X81a00560U;
KLEASIM.M3a = MLEASIM;
NLEASIM_fsqrtx = KLEASIM;
 /* line 583: */
OLEASIM.Mask = 0X81a00820U;
OLEASIM.M3a = QLEASIM;
RLEASIM_fadds = OLEASIM;
 /* line 584: */
SLEASIM.Mask = 0X81a00840U;
SLEASIM.M3a = ULEASIM;
VLEASIM_faddd = SLEASIM;
 /* line 585: */
WLEASIM.Mask = 0X81a00860U;
WLEASIM.M3a = YLEASIM;
ZLEASIM_faddx = WLEASIM;
 /* line 586: */
AMEASIM.Mask = 0X81a008a0U;
AMEASIM.M3a = CMEASIM;
DMEASIM_fsubs = AMEASIM;
 /* line 587: */
EMEASIM.Mask = 0X81a008c0U;
EMEASIM.M3a = GMEASIM;
HMEASIM_fsubd = EMEASIM;
 /* line 588: */
IMEASIM.Mask = 0X81a008e0U;
IMEASIM.M3a = KMEASIM;
LMEASIM_fsubx = IMEASIM;
 /* line 590: */
MMEASIM.Mask = 0X81a00920U;
MMEASIM.M3a = OMEASIM;
PMEASIM_fmuls = MMEASIM;
 /* line 591: */
QMEASIM.Mask = 0X81a00940U;
QMEASIM.M3a = SMEASIM;
TMEASIM_fmuld = QMEASIM;
 /* line 592: */
UMEASIM.Mask = 0X81a00960U;
UMEASIM.M3a = WMEASIM;
XMEASIM_fmulx = UMEASIM;
 /* line 593: */
YMEASIM.Mask = 0X81a009a0U;
YMEASIM.M3a = ANEASIM;
BNEASIM_fdivs = YMEASIM;
 /* line 594: */
CNEASIM.Mask = 0X81a009c0U;
CNEASIM.M3a = ENEASIM;
FNEASIM_fdivd = CNEASIM;
 /* line 595: */
GNEASIM.Mask = 0X81a009e0U;
GNEASIM.M3a = INEASIM;
JNEASIM_fdivx = GNEASIM;
 /* line 597: */
KNEASIM.Mask = 0Xa1a00a20U;
KNEASIM.M3a = MNEASIM;
NNEASIM_fcmps = KNEASIM;
 /* line 598: */
ONEASIM.Mask = 0Xa1a00a40U;
ONEASIM.M3a = QNEASIM;
RNEASIM_fcmpd = ONEASIM;
 /* line 599: */
SNEASIM.Mask = 0Xa1a00a60U;
SNEASIM.M3a = UNEASIM;
VNEASIM_fcmpx = SNEASIM;
 /* line 600: */
WNEASIM.Mask = 0Xa1a00aa0U;
WNEASIM.M3a = YNEASIM;
ZNEASIM_fcmpes = WNEASIM;
 /* line 601: */
AOEASIM.Mask = 0Xa1a00ac0U;
AOEASIM.M3a = COEASIM;
DOEASIM_fcmped = AOEASIM;
 /* line 602: */
EOEASIM.Mask = 0Xa1a00ae0U;
EOEASIM.M3a = GOEASIM;
HOEASIM_fcmpex = EOEASIM;
 /* line 604: */
 /* line 605: */
IOEASIM.Mask = 0X81d00000U;
IOEASIM.M3b = KOEASIM;
LOEASIM_t = IOEASIM;
 /* line 607: */
 /* line 608: */
MOEASIM.Mask = 0X81400000U;
MOEASIM.M3c = OOEASIM;
POEASIM_rdy = MOEASIM;
 /* line 610: */
 /* line 611: */
QOEASIM.Mask = 0X81800000U;
QOEASIM.M3d = SOEASIM;
TOEASIM_wry = QOEASIM;
 /* line 612: */
UOEASIM.Mask = 0X81d80000U;
UOEASIM.M3d = WOEASIM;
XOEASIM_iflush = UOEASIM;
 /* line 614: */
 /* line 615: */
YOEASIM.Mask = 0X81c00000U;
YOEASIM.M3e = APEASIM;
BPEASIM_jmpl = YOEASIM;
 /* line 617: */
 /* line 625: */
 /* line 648: */
 /* line 651: */
 /* line 662: */
 /* line 675: */
 /* line 691: */
 /* line 705: */
 /* line 718: */
 /* line 732: */
 /* line 747: */
 /* line 760: */
 /* line 779: */
 /* line 793: */
 /* line 816: */
 /* line 837: */
 /* line 850: */
 /* line 871: */
 /* line 892: */
 /* line 893: */
 /* line 894: */
 /* line 895: */
 /* line 896: */
 /* line 897: */
 /* line 898: */
 /* line 899: */
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
 /* line 908: */
 /* line 909: */
 /* line 910: */
 /* line 911: */
 /* line 912: */
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
 /* line 918: */
 /* line 919: */
 /* line 920: */
 /* line 921: */
 /* line 922: */
 /* line 923: */
 /* line 924: */
 /* line 930: */
 /* line 954: */
 /* line 955: */
 /* line 957: */
 /* line 958: */
 /* line 960: */
 /* line 975: */
 /* line 987: */
 /* line 990: */
 /* line 992: */
 /* line 993: */
 /* line 996: */
 /* line 997: */
 /* line 998: */
 /* line 1002: */
 /* line 1003: */
 /* line 1004: */
 /* line 1009: */
 /* line 1012: */
 /* line 1014: */
 /* line 1073: */
/*SKIP*/;
A_PROC_EXIT(DECS kemassemsparc);
} 
#undef NL
/* end of translation of ./a68files/kemassemsparc.a68 */
