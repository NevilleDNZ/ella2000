
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
/* UNAME:TVGBSIM */
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
struct A68t161 ;

A_PROCEDURE(struct A68t160 *,A68t159,(A68_INT ,A68_VC ,struct A68t161 *),(A68_INT ,A68_VC ,struct A68t161 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT,REF MODE26,REF MODE161) REF MODE160 */
struct A68t160{
A68_INT  Repeat;
A_PAD_INT(PAD_34)
A68_VC  Name;
A68_VC  Aliasname;
A68_CHAR  Op;
A_PAD_CHAR(PAD_35)
struct A68t161 * Bind;
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE161,REF MODE160)  */
struct A68t161{
A68_VC  Uname;
A68_VC  Lname;
struct A68t162 * Node;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE162)  */
struct A68t164{
A68_INT  Fn;
A_PAD_INT(PAD_36)
A68_INT  Instance;
A_PAD_INT(PAD_37)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,INT)  */
struct A68t165{
struct A68t166 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_38)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE166,INT)  */
struct A68t163 { A68_INT mode; union {
struct A68t164  mode1;
struct A68t165  mode2;
} data; };
typedef struct A68t163  A68_163 ;    /* UNION(MODE164,MODE165)  */
struct A68t162{
struct A68t163  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_39)
A68_INT  Base;
A_PAD_INT(PAD_40)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE163,INT,INT)  */
struct A68t177{
A68_INT  Svoid;
A_PAD_INT(PAD_41)
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT)  */
struct A68t178{
A68_INT  Snull;
A_PAD_INT(PAD_42)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t167 { A68_INT mode; union {
struct A68t170 * mode1;
struct A68t171 * mode2;
struct A68t172 * mode3;
struct A68t173 * mode4;
struct A68t174 * mode5;
struct A68t175 * mode6;
struct A68t176 * mode7;
struct A68t177  mode8;
struct A68t178  mode9;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE170,REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,MODE177,MODE178)  */
A_VECTOR(struct A68t169 ,A68t168);
typedef struct A68t168  A68_168 ;    /* VECTOR [] MODE169 */
struct A68t169{
A68_INT  Instoffset;
A_PAD_INT(PAD_43)
A68_INT  Offset;
A_PAD_INT(PAD_44)
A68_INT  Size;
A_PAD_INT(PAD_45)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT,INT)  */
struct A68t166{
struct A68t167  Type;
struct A68t168  Blocks;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE167,REF MODE168)  */
struct A68t170{
A68_VC  Id;
struct A68t167  T;
struct A68t170 * Rest;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE26,MODE167,REF MODE170)  */
struct A68t171{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_46)
A68_INT  Upb;
A_PAD_INT(PAD_47)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t172{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t173{
A68_INT  No;
A_PAD_INT(PAD_48)
struct A68t167  Type;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT,MODE167)  */
struct A68t174{
A68_INT  No;
A_PAD_INT(PAD_49)
struct A68t172  T;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,MODE172)  */
struct A68t175{
struct A68t167  From;
struct A68t167  To;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE167,MODE167)  */
struct A68t176{
struct A68t167  T;
struct A68t176 * Rest;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE167,REF MODE176)  */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t160 *,A68_VC *),(struct A68t160 *,A68_VC *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE160) MODE26 */
struct A68t181 ;

A_PROCEDURE(struct A68t160 *,A68t180,(struct A68t181 ,A68_INT *,struct A68t97 ),(struct A68t181 ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE181,REF INT,MODE97) REF MODE160 */
A_VECTOR(struct A68t182 ,A68t181);
typedef struct A68t181  A68_181 ;    /* VECTOR [] MODE182 */
struct A68t182{
A68_INT  Sort;
A_PAD_INT(PAD_50)
A68_VC  Value;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(struct A68t160 *,A68t183,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE26,MODE36) REF MODE160 */

A_PROCEDURE(struct A68t160 *,A68t184,(struct A68t160 *),(struct A68t160 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE160) REF MODE160 */

A_PROCEDURE(struct A68t160 *,A68t185,(A68_VC ,struct A68t160 *),(A68_VC ,struct A68t160 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE26,REF MODE160) REF MODE160 */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t160 *,A68_VC *),(struct A68t160 *,A68_VC *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE160) REF MODE26 */

A_PROCEDURE(struct A68t160 *,A68t187,(struct A68t160 *,A68_VC ),(struct A68t160 *,A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE160,REF MODE26) REF MODE160 */

A_PROCEDURE(struct A68t162 *,A68t188,(struct A68t160 *,struct A68t36 ),(struct A68t160 *,struct A68t36 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE160,MODE36) REF MODE162 */
struct A68t189{
A68_VC  Id;
A68_VC  Fullid;
A68_INT  Action;
A_PAD_INT(PAD_51)
A68_INT  Condition;
A_PAD_INT(PAD_52)
struct A68t32  Columns;
struct A68t32  Sizes;
struct A68t162  Location;
A68_INT  Keepnumber;
A_PAD_INT(PAD_53)
A68_VC  Lastvalues;
A68_VC  Testvalues;
A68_VC  Workspace;
struct A68t190 * Decoded;
A68_INT  Flagaddress;
A_PAD_INT(PAD_54)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE26,REF MODE26,INT,INT,REF MODE32,REF MODE32,MODE162,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE190,INT)  */
struct A68t198{
A68_INT  Svvoid;
A_PAD_INT(PAD_55)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT)  */
struct A68t199{
A68_INT  Svnull;
A_PAD_INT(PAD_56)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t190 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198  mode8;
struct A68t199  mode9;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,MODE198,MODE199)  */
struct A68t191{
struct A68t167  Type;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE167)  */
struct A68t192{
struct A68t171 * Type;
A68_INT  Value;
A_PAD_INT(PAD_57)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE171,INT)  */
struct A68t193{
struct A68t172 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_58)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE172,CHAR)  */
struct A68t194{
struct A68t174 * Type;
A68_VC  Value;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE174,REF MODE26)  */
struct A68t195{
struct A68t170 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_59)
struct A68t190  Assoc;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE170,INT,MODE190)  */
struct A68t196{
struct A68t190  Head;
struct A68t196 * Tail;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE190,REF MODE196)  */
struct A68t197{
struct A68t190  From;
struct A68t190  To;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE190,MODE190)  */
struct A68t200{
struct A68t189  Monitor;
A68_INT  Handle;
A_PAD_INT(PAD_60)
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE189,INT,REF MODE200)  */

A_PROCEDURE(struct A68t200 *,A68t201,(struct A68t200 *),(struct A68t200 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE200) REF MODE200 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t200 *),(struct A68t200 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE200) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t189 *,struct A68t190 *,A68_INT ),(A68_INT ,struct A68t189 *,struct A68t190 *,A68_INT ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,REF MODE189,REF MODE190,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t204,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t205,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(INT,MODE36) BOOL */

A_PROCEDURE(struct A68t189 *,A68t206,(struct A68t160 *,A68_INT ,A68_INT ,struct A68t36 ),(struct A68t160 *,A68_INT ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE160,INT,INT,MODE36) REF MODE189 */

A_PROCEDURE(A68_INT ,A68t207,(struct A68t189 *),(struct A68t189 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE189) INT */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,MODE36) VOID */
struct A68t210 ;

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t210 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t32 *),(struct A68t210 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE210,INT,INT,BOOL) REF MODE32 */
struct A68t210 { A68_INT mode; union {
struct A68t160 * mode1;
A68_INT  mode2;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(REF MODE160,INT)  */

A_PROCEDURE(struct A68t189 *,A68t211,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT,BOOL) REF MODE189 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,A68_BOOL ,struct A68t36 ),(A68_INT ,A68_BOOL ,struct A68t36 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT,BOOL,MODE36) VOID */
struct A68t213 { A68_INT mode; union {
struct A68t170 * mode1;
struct A68t171 * mode2;
struct A68t172 * mode3;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(REF MODE170,REF MODE171,REF MODE172)  */
struct A68t214{
struct A68t166  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_61)
A68_INT  Ramsize;
A_PAD_INT(PAD_62)
A68_INT  Step;
A_PAD_INT(PAD_63)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE166,INT,INT,INT)  */
struct A68t215{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_64)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t215 ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] MODE215 */
struct A68t216{
struct A68t214 * Ram;
struct A68t166  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_65)
struct A68t217  Body;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE214,MODE166,INT,REF MODE217)  */
struct A68t218 { A68_INT mode; union {
struct A68t164  mode1;
struct A68t166  mode2;
} data; };
typedef struct A68t218  A68_218 ;    /* UNION(MODE164,MODE166)  */

A_PROCEDURE(A68_BOOL ,A68t219,(struct A68t166 ,struct A68t166 ),(struct A68t166 ,struct A68t166 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE166,MODE166) BOOL */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t164 ,struct A68t164 ),(struct A68t164 ,struct A68t164 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE164,MODE164) BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t165 ,struct A68t165 ),(struct A68t165 ,struct A68t165 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE165,MODE165) BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t163 ,struct A68t163 ),(struct A68t163 ,struct A68t163 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE163,MODE163) BOOL */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t162 ,struct A68t162 ),(struct A68t162 ,struct A68t162 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE162,MODE162) BOOL */

A_PROCEDURE(A68_BOOL ,A68t224,(struct A68t167 ,struct A68t167 ),(struct A68t167 ,struct A68t167 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE167,MODE167) BOOL */

A_PROCEDURE(A68_BOOL ,A68t225,(struct A68t190 ,struct A68t190 ),(struct A68t190 ,struct A68t190 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE190,MODE190) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t168 ,struct A68t168 ,struct A68t168 *),(struct A68t168 ,struct A68t168 ,struct A68t168 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE168,REF MODE168) REF MODE168 */

A_PROCEDURE(A68_INT ,A68t227,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE167) INT */

A_PROCEDURE(struct A68t176 *,A68t228,(struct A68t167 ,A68_INT ,A68_INT ),(struct A68t167 ,A68_INT ,A68_INT ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE167,INT,INT) REF MODE176 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t166 ,A68_INT ,A68_INT ,struct A68t166 *),(struct A68t166 ,A68_INT ,A68_INT ,struct A68t166 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE166,INT,INT) MODE166 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t214 *,A68_INT ,A68_INT ,struct A68t166 *),(struct A68t214 *,A68_INT ,A68_INT ,struct A68t166 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE214,INT,INT) MODE166 */

A_PROCEDURE(A68_VC *,A68t231,(struct A68t190 ,struct A68t167 ),(struct A68t190 ,struct A68t167 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE190,MODE167) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_VC ,struct A68t167 ,struct A68t190 *),(A68_VC ,struct A68t167 ,struct A68t190 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE26,MODE167) MODE190 */

A_PROCEDURE(A68_INT ,A68t233,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE162) INT */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t162 ,A68_INT ),(struct A68t162 ,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE162,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t92 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t163 *),(struct A68t92 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t163 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE92,INT,MODE43,MODE36) MODE163 */

A_PROCEDURE(A68_VOID ,A68t236,(A68_VC ,struct A68t36 ,struct A68t163 *),(A68_VC ,struct A68t36 ,struct A68t163 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE26,MODE36) MODE163 */

A_PROCEDURE(A68_VOID ,A68t237,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t162 ,A68_VC ),(struct A68t162 ,A68_VC ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE162,REF MODE26) VOID */
struct A68t240 ;

A_PROCEDURE(A68_VOID ,A68t239,(A68_INT *,A68_VC *,struct A68t240 ,struct A68t240 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t240 ,struct A68t240 ,struct A68t36 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF INT,REF REF MODE26,MODE240,MODE240,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(A68_INT ,A68_INT ,A68_VC ,struct A68t240 ,struct A68t240 ,struct A68t43 ,struct A68t36 ,struct A68t163 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t240 ,struct A68t240 ,struct A68t43 ,struct A68t36 ,struct A68t163 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(INT,INT,REF MODE26,MODE240,MODE240,MODE43,MODE36) MODE163 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,struct A68t36 ,struct A68t162 *),(A68_VC ,struct A68t36 ,struct A68t162 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE26,MODE36) MODE162 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t162 ,struct A68t162 *),(struct A68t162 ,struct A68t162 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE162) MODE162 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t162 ,struct A68t162 ),(struct A68t162 ,struct A68t162 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE162,MODE162) VOID */

A_PROCEDURE(A68_BOOL ,A68t246,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE162) BOOL */

A_PROCEDURE(A68_VOID ,A68t247,(A68_INT ,struct A68t216 *),(A68_INT ,struct A68t216 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT) MODE216 */

A_PROCEDURE(A68_VOID ,A68t248,(A68_INT ,struct A68t218 *),(A68_INT ,struct A68t218 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(INT) MODE218 */
struct A68t250 ;

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t250 ),(struct A68t250 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE250) VOID */

A_PROCEDURE(A68_BOOL ,A68t250,(A68_VC ),(A68_VC ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t216 ,struct A68t166 *),(struct A68t216 ,struct A68t166 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE216) MODE166 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_INT ,struct A68t166 *),(A68_INT ,struct A68t166 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(INT) MODE166 */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t254,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_BOOL ,A68t256,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF INT,REF BOOL,MODE36) BOOL */
A_ISTRUCT(struct A68t52 ,2,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t258,(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t36 ),(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT,REF BOOL,REF BOOL,MODE36) VOID */
A_ISTRUCT(A68_CHAR ,48,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 4 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kernel --- */
extern A68_VOID  BJCBSIM_simulate(A68_INT *,A68_BOOL *,struct A68t36 );
extern A68_VOID  ZOCBSIM_clearinterrupts(void);
/* --- End of imports from kernel --- */


/* --- Imports from simpast --- */
extern A68_INT  CSFBSIM_savedactivetime;
/* --- End of imports from simpast --- */


/* --- Imports from simmonitor --- */
extern A68_200 * XSFBSIM_testpoints;
extern A68_VOID  RZFBSIM_clear(struct A68t200 *);
extern A68_VOID  DLGBSIM_pttime(void);
extern A68_BOOL  DSGBSIM_domonitors(A68_INT ,struct A68t36 );
/* --- End of imports from simmonitor --- */


/* --- Imports from simtime --- */
extern A68_INT  YPAASIM_activetime;
/* --- End of imports from simtime --- */


/* --- Imports from simnode --- */
/* --- End of imports from simnode --- */


/* --- Imports from basics --- */
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
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void XWBBSIM(void);   /* kernel */
extern void TRFBSIM(void);   /* simpast */
extern void FSFBSIM(void);   /* simmonitor */
extern void TPAASIM(void);   /* simtime */
extern void RZEBSIM(void);   /* simnode */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_255   XVGBSIM = {"$Id: simrun.a68,v 34.2 1995/03/29 13:05:02 ella Exp $"}; 
A_GISVEC(A68_VC ,YVGBSIM,XVGBSIM,53)
A68_BOOL  ZVGBSIM_monitorspending;
static A68_259   OXGBSIM = {"You have not yet run the simulation beyond time "}; 
A_GISVEC(A68_VC ,PXGBSIM,OXGBSIM,48)
typedef struct   /* env of non-global proc */
{
A68_BOOL * GWGBSIM_ans;
A68_jmp_buf  EWGBSIM_exit;
A_PAD_jmp_buf(PAD_66)
} KWGBSIM_localflt;

A_STATIC A68_BOOL  DWGBSIM_simulatedok(A68_INT * Increment, A68_BOOL * Stable, A68_36  Flt);

A_STATIC A68_VOID  JWGBSIM_localflt(A68_VC  Msg, void *NonLocals);

A68_VOID  VWGBSIM_simulateandmonitor(A68_INT  Increment, A68_BOOL * Interrupted, A68_BOOL * Stopped, A68_36  Flt);

A68_VOID  HXGBSIM_replayandmonitor(A68_INT  Increment, A68_BOOL  Dontstop, A68_36  Flt);

A_STATIC A68_VOID  JWGBSIM_localflt(A68_VC  Msg, void *NonLocals)
#define NL(x) (((KWGBSIM_localflt *)NonLocals)->x)
{ 
A68_257  LWGBSIM;  /* collateral clause result */
A68_52  MWGBSIM;  /* OPERATORS - mode -> union mode */
A68_52  NWGBSIM;  /* OPERATORS - mode -> union mode */
A68_56  OWGBSIM;  /* procedure value */
A68_85  PWGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(localflt);
 /* line 76: */
 /* line 77: */
{ 
LWGBSIM.data[0] = A_UNITE(MWGBSIM,mode7,7,Msg);
OWGBSIM.fn.fn_global = LRAAOSL_newline;
OWGBSIM.nonlocals = A68_NIL;
LWGBSIM.data[1] = A_UNITE(NWGBSIM,mode12,12,OWGBSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(PWGBSIM,LWGBSIM,2,A68_52 ));
 /* line 78: */
(*NL(GWGBSIM_ans)) = A68_FALSE;
 /* line 79: */
 /* line 80: */
siglongjmp(NL(EWGBSIM_exit).label,1);
} 
A_PROC_EXIT(localflt);
return;
} 
#undef NL

A_STATIC A68_BOOL  DWGBSIM_simulatedok(A68_INT * Increment, A68_BOOL * Stable, A68_36  Flt)
{ 
A68_BOOL  GWGBSIM_ans;
A68_36  IWGBSIM_localflt;   /* proc value of non-global proc */
A68_jmp_buf EWGBSIM_exit;
A68_BOOL  QWGBSIM;  /* clause result */
if ( sigsetjmp( EWGBSIM_exit.label,1) ) goto FWGBSIM_exit;
A_PROC_ENTRY(simulatedok);
 /* line 72: */
 /* line 73: */
{ 
GWGBSIM_ans = A68_TRUE;
 /* line 75: */
A_CLOSURE( IWGBSIM_localflt, JWGBSIM_localflt, KWGBSIM_localflt );
(( KWGBSIM_localflt * ) ( IWGBSIM_localflt.nonlocals )) -> GWGBSIM_ans = (&GWGBSIM_ans);
(( KWGBSIM_localflt * ) ( IWGBSIM_localflt.nonlocals )) -> EWGBSIM_exit = EWGBSIM_exit;
 /* line 82: */
BJCBSIM_simulate(Increment, Stable, IWGBSIM_localflt);
 /* line 83: */
FWGBSIM_exit:
 /* line 85: */
QWGBSIM = GWGBSIM_ans;
} 
A_PROC_EXIT(simulatedok);
return( QWGBSIM );
} 
#undef NL
 /* line 105: */

A68_VOID  VWGBSIM_simulateandmonitor(A68_INT  Increment, A68_BOOL * Interrupted, A68_BOOL * Stopped, A68_36  Flt)
{ 
A68_INT  WWGBSIM_bite;
A68_INT  XWGBSIM_residue;
A68_BOOL  YWGBSIM_stable;
A68_INT  ZWGBSIM;  /* clause result */
A68_INT  AXGBSIM;  /* clause result */
A68_INT  BXGBSIM_oldtime;
A68_BOOL  CXGBSIM;  /* optbool result */
A68_BOOL  DXGBSIM;  /* clause result */
A_PROC_ENTRY(simulateandmonitor);
 /* line 106: */
 /* line 107: */
{ 
XWGBSIM_residue = Increment;
 /* line 108: */
YWGBSIM_stable = A68_FALSE;
 /* line 109: */
(*Interrupted) = (*Stopped) = A68_FALSE;
 /* line 110: */
ZOCBSIM_clearinterrupts();
 /* line 111: */
for ( ;; )
{ 
 /* line 112: */
if ( ZVGBSIM_monitorspending )
{ 
ZWGBSIM = 0;
} 
else
{ 
ZWGBSIM = XWGBSIM_residue;
} 
WWGBSIM_bite = ZWGBSIM;
 /* line 113: */
(*Interrupted) = !DWGBSIM_simulatedok((&WWGBSIM_bite), (&YWGBSIM_stable), Flt);
 /* line 114: */
XWGBSIM_residue-=WWGBSIM_bite;
 /* line 115: */
if ( (WWGBSIM_bite==0) )
{ 
AXGBSIM = YPAASIM_activetime;
} 
else
{ 
AXGBSIM = (YPAASIM_activetime+1);
} 
BXGBSIM_oldtime = AXGBSIM;
 /* line 116: */
YPAASIM_activetime+=WWGBSIM_bite;
 /* line 120: */
 /* line 121: */
if ( YWGBSIM_stable )
{ 
ZVGBSIM_monitorspending = A68_FALSE;
 /* line 122: */
 /* line 123: */
(*Stopped) = DSGBSIM_domonitors(BXGBSIM_oldtime, Flt);
} 
 /* line 124: */
CXGBSIM = YWGBSIM_stable;
if ( CXGBSIM )
{CXGBSIM = !(*Stopped);
}
if ( CXGBSIM )
{CXGBSIM = !(*Interrupted);
}
if ( CXGBSIM )
{ /* line 125: */
CXGBSIM = (XWGBSIM_residue>0);
}
DXGBSIM = CXGBSIM;
if ( !DXGBSIM ) break;
/*SKIP*/;
}
 /* line 126: */
 /* line 127: */
DLGBSIM_pttime();
} 
A_PROC_EXIT(simulateandmonitor);
return;
} 
#undef NL

A68_VOID  HXGBSIM_replayandmonitor(A68_INT  Increment, A68_BOOL  Dontstop, A68_36  Flt)
{ 
A68_INT  IXGBSIM_residue;
A68_BOOL  JXGBSIM;  /* optbool result */
A68_BOOL  KXGBSIM;  /* clause result */
A68_260  LXGBSIM;  /* collateral clause result */
A68_52  MXGBSIM;  /* OPERATORS - mode -> union mode */
A68_56  NXGBSIM;  /* procedure value */
A68_52  QXGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RXGBSIM;  /* YIELD */
A68_52  SXGBSIM;  /* OPERATORS - mode -> union mode */
A68_52  TXGBSIM;  /* OPERATORS - mode -> union mode */
A68_56  UXGBSIM;  /* procedure value */
A68_85  VXGBSIM;  /* OPERATORS - istruct -> vector */
A68_BOOL  WXGBSIM;  /* clause result */
A_PROC_ENTRY(replayandmonitor);
 /* line 141: */
 /* line 142: */
if ( (Increment>0) )
{ 
IXGBSIM_residue = Increment;
 /* line 143: */
for ( ;; )
{ 
 /* line 144: */
 /* line 145: */
if ( (YPAASIM_activetime<CSFBSIM_savedactivetime) )
{ 
IXGBSIM_residue-=1;
 /* line 146: */
YPAASIM_activetime+=1;
 /* line 150: */
JXGBSIM = !DSGBSIM_domonitors(YPAASIM_activetime, Flt);
if ( ! JXGBSIM )
{JXGBSIM = Dontstop;
}
if ( JXGBSIM )
{ /* line 151: */
JXGBSIM = (IXGBSIM_residue>0);
}
 /* line 153: */
KXGBSIM = JXGBSIM;
} 
else
{ 
if ( (IXGBSIM_residue==Increment) )
{ 
DSGBSIM_domonitors(YPAASIM_activetime, Flt);
} 
 /* line 154: */
 /* line 155: */
 /* line 156: */
NXGBSIM.fn.fn_global = LRAAOSL_newline;
NXGBSIM.nonlocals = A68_NIL;
LXGBSIM.data[0] = A_UNITE(MXGBSIM,mode12,12,NXGBSIM);
 /* line 157: */
RXGBSIM = PXGBSIM ;
LXGBSIM.data[1] = A_UNITE(QXGBSIM,mode7,7,RXGBSIM);
 /* line 158: */
LXGBSIM.data[2] = A_UNITE(SXGBSIM,mode1,1,CSFBSIM_savedactivetime);
UXGBSIM.fn.fn_global = LRAAOSL_newline;
UXGBSIM.nonlocals = A68_NIL;
LXGBSIM.data[3] = A_UNITE(TXGBSIM,mode12,12,UXGBSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(VXGBSIM,LXGBSIM,4,A68_52 ));
 /* line 159: */
 /* line 160: */
 /* line 161: */
KXGBSIM = A68_FALSE;
} 
WXGBSIM = KXGBSIM;
if ( !WXGBSIM ) break;
/*SKIP*/;
}
 /* line 162: */
 /* line 163: */
 /* line 165: */
DLGBSIM_pttime();
} 
else
{ 
RZFBSIM_clear(XSFBSIM_testpoints);
 /* line 166: */
YPAASIM_activetime+=Increment;
 /* line 170: */
DSGBSIM_domonitors(YPAASIM_activetime, Flt);
 /* line 171: */
 /* line 172: */
DLGBSIM_pttime();
} 
A_PROC_EXIT(replayandmonitor);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void UVGBSIM(void)   /* initialise DECS simrun */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simrun.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kernel.m","./mfiles/simpast.m","./mfiles/simmonitor.m","./mfiles/simtime.m","./mfiles/simnode.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
XWBBSIM();   /* USE kernel */
TRFBSIM();   /* USE simpast */
FSFBSIM();   /* USE simmonitor */
TPAASIM();   /* USE simtime */
RZEBSIM();   /* USE simnode */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simrun.a68";
A_config.translation_time = "Tue Apr  4 11:15:07 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "TVGBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:15:07 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simrun);
UEAALIB_a68config(LGAALIB_configinfo, YVGBSIM);
 /* line 64: */
 /* line 71: */
 /* line 104: */
 /* line 140: */
 /* line 174: */
 /* line 176: */
 /* line 181: */
/*SKIP*/;
A_PROC_EXIT(DECS simrun);
} 
#undef NL
/* end of translation of ./a68files/simrun.a68 */
