
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
/* UNAME:XYIASIM */
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

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC *),(A68_VC *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_CHAR *,A68t161,(A68_INT ),(A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) REF CHAR */
struct A68t163 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t163 ),(struct A68t163 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE163) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t164{
A68_INT  Location;
A_PAD_INT(PAD_34)
A68_INT  Size;
A_PAD_INT(PAD_35)
A68_BOOL  Canoptimise;
A_PAD_BOOL(PAD_36)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,INT,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t165,(struct A68t164 ,struct A68t164 ),(struct A68t164 ,struct A68t164 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE164,MODE164) BOOL */
struct A68t166{
A68_BITS  Rs1;
A_PAD_BITS(PAD_37)
A68_BITS  Rs2;
A_PAD_BITS(PAD_38)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(BITS,BITS)  */
struct A68t167{
A68_BITS  Rs1;
A_PAD_BITS(PAD_39)
A68_INT  Imm;
A_PAD_INT(PAD_40)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(BITS,INT)  */
struct A68t168{
A68_INT  Imm;
A_PAD_INT(PAD_41)
A68_BITS  Rd;
A_PAD_BITS(PAD_42)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,BITS)  */
struct A68t169 { A68_INT mode; union {
struct A68t166  mode1;
struct A68t167  mode2;
} data; };
typedef struct A68t169  A68_169 ;    /* UNION(MODE166,MODE167)  */
struct A68t170{
A68_BITS  Rs1;
A_PAD_BITS(PAD_43)
A68_BITS  Rs2;
A_PAD_BITS(PAD_44)
A68_BITS  Rd;
A_PAD_BITS(PAD_45)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(BITS,BITS,BITS)  */
struct A68t171{
A68_BITS  Rs1;
A_PAD_BITS(PAD_46)
A68_INT  Imm;
A_PAD_INT(PAD_47)
A68_BITS  Rd;
A_PAD_BITS(PAD_48)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(BITS,INT,BITS)  */
struct A68t172 { A68_INT mode; union {
struct A68t170  mode1;
struct A68t171  mode2;
} data; };
typedef struct A68t172  A68_172 ;    /* UNION(MODE170,MODE171)  */
struct A68t173{
A68_BITS  Mask;
A_PAD_BITS(PAD_49)
A68_RC  M1a;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS,MODE27)  */
struct A68t174{
A68_BITS  Mask;
A_PAD_BITS(PAD_50)
A68_RC  M1b;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(BITS,MODE27)  */
struct A68t175{
A68_BITS  Mask;
A_PAD_BITS(PAD_51)
A68_RC  M2a;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(BITS,MODE27)  */
struct A68t176{
A68_BITS  Mask;
A_PAD_BITS(PAD_52)
A68_RC  M2b;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(BITS,MODE27)  */
struct A68t177{
A68_BITS  Mask;
A_PAD_BITS(PAD_53)
A68_RC  M2c;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(BITS,MODE27)  */
struct A68t178{
A68_BITS  Mask;
A_PAD_BITS(PAD_54)
A68_RC  M2d;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(BITS,MODE27)  */
struct A68t179{
A68_BITS  Mask;
A_PAD_BITS(PAD_55)
A68_RC  M3a;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(BITS,MODE27)  */
struct A68t180{
A68_BITS  Mask;
A_PAD_BITS(PAD_56)
A68_RC  M3c;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(BITS,MODE27)  */
struct A68t181{
A68_BITS  Mask;
A_PAD_BITS(PAD_57)
A68_RC  M3d;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BITS,MODE27)  */
struct A68t182{
A68_BITS  Mask;
A_PAD_BITS(PAD_58)
A68_RC  M3e;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(BITS,MODE27)  */
struct A68t183{
A68_BITS  Mask;
A_PAD_BITS(PAD_59)
A68_RC  M3b;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(BITS,MODE27)  */

A_PROCEDURE(A68_BITS ,A68t184,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(BITS) BITS */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE173,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t174 ,A68_INT ),(struct A68t174 ,A68_INT ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE174,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t175 ,A68_INT ),(struct A68t175 ,A68_INT ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE175,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t176 ,struct A68t168 ),(struct A68t176 ,struct A68t168 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE176,MODE168) VOID */
struct A68t189{
struct A68t177  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_60)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE177,BITS)  */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t189 ,A68_INT ),(struct A68t189 ,A68_INT ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE189,INT) VOID */
struct A68t191{
struct A68t178  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_61)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE178,BITS)  */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t191 ,A68_INT ),(struct A68t191 ,A68_INT ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE191,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t179 ,struct A68t172 ),(struct A68t179 ,struct A68t172 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE179,MODE172) VOID */
struct A68t194{
struct A68t183  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_62)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE183,BITS)  */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t194 ,struct A68t169 ),(struct A68t194 ,struct A68t169 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE194,MODE169) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t180 ,A68_BITS ),(struct A68t180 ,A68_BITS ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE180,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t181 ,struct A68t169 ),(struct A68t181 ,struct A68t169 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE181,MODE169) VOID */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t182 ,struct A68t172 ),(struct A68t182 ,struct A68t172 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE182,MODE172) VOID */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t173 ,struct A68t164 *),(struct A68t173 ,struct A68t164 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE173,REF MODE164) VOID */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t174 ,struct A68t164 *),(struct A68t174 ,struct A68t164 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE174,REF MODE164) VOID */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t189 ,struct A68t164 *),(struct A68t189 ,struct A68t164 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE189,REF MODE164) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t191 ,struct A68t164 *),(struct A68t191 ,struct A68t164 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE191,REF MODE164) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t177 ,A68_BITS ,struct A68t189 *),(struct A68t177 ,A68_BITS ,struct A68t189 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE177,BITS) MODE189 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t178 ,A68_BITS ,struct A68t191 *),(struct A68t178 ,A68_BITS ,struct A68t191 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE178,BITS) MODE191 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t183 ,A68_BITS ,struct A68t194 *),(struct A68t183 ,A68_BITS ,struct A68t194 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE183,BITS) MODE194 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE164) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ),(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(BITS,INT,BITS,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,A68_BITS ),(A68_INT ,A68_BITS ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,BITS) VOID */
struct A68t209{
A68_INT  Ws;
A_PAD_INT(PAD_63)
A68_BOOL  Up;
A_PAD_BOOL(PAD_64)
A68_INT  Sizeunit;
A_PAD_INT(PAD_65)
struct A68t32  Al;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,BOOL,INT,REF MODE32)  */
struct A68t210{
struct A68t163  Ferryout;
struct A68t36  Flt;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE163,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t163 ,struct A68t36 ,struct A68t210 *),(struct A68t163 ,struct A68t36 ,struct A68t210 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE163,MODE36) MODE210 */
struct A68t212{
struct A68t163  Ferryin;
struct A68t36  Flt;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE163,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t163 ,struct A68t36 ,struct A68t212 *),(struct A68t163 ,struct A68t36 ,struct A68t212 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE163,MODE36) MODE212 */

A_PROCEDURE(A68_VOID ,A68t214,(A68_BOOL ,A68_VC ),(A68_BOOL ,A68_VC ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(BOOL,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(A68_BOOL ,struct A68t210 ),(A68_BOOL ,struct A68t210 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(BOOL,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t216,(A68_BOOL *,struct A68t212 ),(A68_BOOL *,struct A68t212 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF BOOL,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,struct A68t210 ),(A68_INT ,struct A68t210 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT *,struct A68t212 ),(A68_INT *,struct A68t212 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF INT,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t219,(A68_VC ,struct A68t210 ),(A68_VC ,struct A68t210 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE26,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC *,struct A68t212 ),(A68_VC *,struct A68t212 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF REF MODE26,MODE212) VOID */

A_PROCEDURE(A68_INT ,A68t221,(A68_VC ),(A68_VC ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE26) INT */
struct A68t222{
A68_INT  Machine_offset;
A_PAD_INT(PAD_66)
struct A68t222 * Rest;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT,REF MODE222)  */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t222 *,A68_VC ),(struct A68t222 *,A68_VC ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE222,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t224,(struct A68t222 **),(struct A68t222 **,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF REF MODE222) INT */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t222 **,A68_INT ),(struct A68t222 **,A68_INT ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF REF MODE222,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t226,(struct A68t222 *),(struct A68t222 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE222) BOOL */
struct A68t227{
A68_VC  Mem;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t227 *),(struct A68t227 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC MODE227 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t227 *,A68_INT ),(struct A68t227 *,A68_INT ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE227,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t227 *),(struct A68t227 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE227) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t227 ,A68_VC ),(struct A68t227 ,A68_VC ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE227,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t232,(struct A68t227 *),(struct A68t227 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE227) INT */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t227 *,struct A68t210 ),(struct A68t227 *,struct A68t210 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE227,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t227 *,struct A68t212 ),(struct A68t227 *,struct A68t212 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE227,MODE212) VOID */
struct A68t235{
A68_INT  Off;
A_PAD_INT(PAD_67)
A68_INT  Len;
A_PAD_INT(PAD_68)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t236,(A68_INT ,A68_INT ,struct A68t235 *),(A68_INT ,A68_INT ,struct A68t235 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(INT,INT) MODE235 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t227 *,struct A68t235 ,A68_VC *),(struct A68t227 *,struct A68t235 ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE227,MODE235) REF MODE26 */
struct A68t238{
A68_VC  W;
A68_INT  O;
A_PAD_INT(PAD_69)
};
typedef struct A68t238  A68_238 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t239,(A68_VC ,A68_INT ,struct A68t238 *),(A68_VC ,A68_INT ,struct A68t238 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE26,INT) MODE238 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t227 *,struct A68t238 ),(struct A68t227 *,struct A68t238 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE227,MODE238) VOID */
struct A68t241{
A68_INT  Lab;
A_PAD_INT(PAD_70)
A68_VC  Tag;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,struct A68t241 *),(A68_VC ,struct A68t241 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26) MODE241 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t241 ,A68_VC ),(struct A68t241 ,A68_VC ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE241,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t241 *,struct A68t210 ),(struct A68t241 *,struct A68t210 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE241,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t241 *,struct A68t212 ),(struct A68t241 *,struct A68t212 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE241,MODE212) VOID */

A_PROCEDURE(A68_BOOL ,A68t246,(struct A68t241 *,struct A68t241 ),(struct A68t241 *,struct A68t241 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE241,MODE241) BOOL */
struct A68t247 { A68_INT mode; union {
A68_INT  mode1;
struct A68t241  mode2;
} data; };
typedef struct A68t247  A68_247 ;    /* UNION(INT,MODE241,VOID)  */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t247 ,A68_VC ),(struct A68t247 ,A68_VC ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE247,MODE26) VOID */
struct A68t249{
struct A68t241  Label;
A68_INT  Machine_offset;
A_PAD_INT(PAD_71)
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE241,INT)  */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t241 ,A68_INT ,struct A68t249 *),(struct A68t241 ,A68_INT ,struct A68t249 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE241,INT) MODE249 */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t249 ,A68_VC ),(struct A68t249 ,A68_VC ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE249,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t249 *,struct A68t210 ),(struct A68t249 *,struct A68t210 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE249,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t249 *,struct A68t212 ),(struct A68t249 *,struct A68t212 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE249,MODE212) VOID */
struct A68t254{
struct A68t249  Labeled_offset;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE249,REF MODE254)  */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t254 *,A68_VC ),(struct A68t254 *,A68_VC ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE254,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t254 *,struct A68t210 ),(struct A68t254 *,struct A68t210 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE254,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t254 **,struct A68t212 ),(struct A68t254 **,struct A68t212 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF REF MODE254,MODE212) VOID */

A_PROCEDURE(A68_INT ,A68t258,(struct A68t254 *,struct A68t241 ),(struct A68t254 *,struct A68t241 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE254,MODE241) INT */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t254 **,struct A68t249 ),(struct A68t254 **,struct A68t249 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF REF MODE254,MODE249) VOID */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t254 **),(struct A68t254 **,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF REF MODE254) VOID */

A_PROCEDURE(A68_BOOL ,A68t261,(struct A68t254 *),(struct A68t254 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE254) BOOL */
struct A68t262{
struct A68t164  Machine_label;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE164,REF MODE262)  */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t262 *,A68_VC ),(struct A68t262 *,A68_VC ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE262,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t262 **,struct A68t164 *),(struct A68t262 **,struct A68t164 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF REF MODE262) MODE164 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t262 **,struct A68t164 ),(struct A68t262 **,struct A68t164 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF REF MODE262,MODE164) VOID */

A_PROCEDURE(A68_BOOL ,A68t266,(struct A68t262 *),(struct A68t262 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE262) BOOL */
struct A68t267{
struct A68t241  Label;
struct A68t262 * Machine_label_stack;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE241,REF MODE262)  */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t241 ,struct A68t262 *,struct A68t267 *),(struct A68t241 ,struct A68t262 *,struct A68t267 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE241,REF MODE262) MODE267 */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t267 ,A68_VC ),(struct A68t267 ,A68_VC ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE267,MODE26) VOID */
struct A68t270{
struct A68t267  Back_patch;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE267,REF MODE270)  */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t270 *,A68_VC ),(struct A68t270 *,A68_VC ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE270,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t272,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE270) BOOL */

A_PROCEDURE(struct A68t262 *,A68t273,(struct A68t270 **,struct A68t241 ),(struct A68t270 **,struct A68t241 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF REF MODE270,MODE241) REF MODE262 */
struct A68t274{
struct A68t164  Ml;
struct A68t241  Lab;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE164,MODE241)  */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t164 ,struct A68t241 ,struct A68t274 *),(struct A68t164 ,struct A68t241 ,struct A68t274 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE164,MODE241) MODE274 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t270 **,struct A68t274 ),(struct A68t270 **,struct A68t274 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF REF MODE270,MODE274) VOID */
struct A68t277{
A68_INT  Sort;
A_PAD_INT(PAD_72)
A68_INT  Size;
A_PAD_INT(PAD_73)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t277 ,A68_VC ),(struct A68t277 ,A68_VC ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE277,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t277 *,struct A68t210 ),(struct A68t277 *,struct A68t210 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE277,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t277 *,struct A68t212 ),(struct A68t277 *,struct A68t212 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE277,MODE212) VOID */
struct A68t281{
struct A68t277  Head;
struct A68t281 * Tail;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE277,REF MODE281)  */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t281 *,A68_VC ),(struct A68t281 *,A68_VC ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE281,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t281 *,struct A68t210 ),(struct A68t281 *,struct A68t210 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE281,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t281 **,struct A68t212 ),(struct A68t281 **,struct A68t212 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF REF MODE281,MODE212) VOID */

A_PROCEDURE(A68_INT ,A68t285,(struct A68t281 *),(struct A68t281 *,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE281) INT */
struct A68t286{
struct A68t241  Label;
struct A68t281 * Input_params;
struct A68t281 * Output_params;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE241,REF MODE281,REF MODE281)  */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t241 ,struct A68t281 *,struct A68t281 *,struct A68t286 *),(struct A68t241 ,struct A68t281 *,struct A68t281 *,struct A68t286 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE241,REF MODE281,REF MODE281) MODE286 */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t286 ,A68_VC ),(struct A68t286 ,A68_VC ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE286,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t286 *,struct A68t210 ),(struct A68t286 *,struct A68t210 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE286,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t286 *,struct A68t212 ),(struct A68t286 *,struct A68t212 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE286,MODE212) VOID */
struct A68t291{
struct A68t241  Label;
struct A68t281 * Spec;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE241,REF MODE281)  */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t241 ,struct A68t281 *,struct A68t291 *),(struct A68t241 ,struct A68t281 *,struct A68t291 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE241,REF MODE281) MODE291 */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t291 ,A68_VC ),(struct A68t291 ,A68_VC ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE291,MODE26) VOID */
struct A68t294{
struct A68t291  Labeled_spec;
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE291,REF MODE294)  */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t294 *,A68_VC ),(struct A68t294 *,A68_VC ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE294,MODE26) VOID */

A_PROCEDURE(struct A68t281 *,A68t296,(struct A68t294 **,struct A68t241 ),(struct A68t294 **,struct A68t241 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF REF MODE294,MODE241) REF MODE281 */

A_PROCEDURE(A68_BOOL ,A68t297,(struct A68t294 *,struct A68t241 ),(struct A68t294 *,struct A68t241 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE294,MODE241) BOOL */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t294 **,struct A68t291 ),(struct A68t294 **,struct A68t291 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF REF MODE294,MODE291) VOID */
struct A68t299{
struct A68t286  Labeled_params;
struct A68t299 * Rest;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE286,REF MODE299)  */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t299 *,A68_VC ),(struct A68t299 *,A68_VC ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE299,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t299 *,struct A68t210 ),(struct A68t299 *,struct A68t210 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE299,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t299 **,struct A68t212 ),(struct A68t299 **,struct A68t212 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF REF MODE299,MODE212) VOID */
A_ROW(struct A68t281 *,A68t303,1);
typedef struct A68t303  A68_303 ;    /* [] REF MODE281 */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t299 *,struct A68t241 ,struct A68t303 *),(struct A68t299 *,struct A68t241 ,struct A68t303 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE299,MODE241) MODE303 */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t299 **,struct A68t286 ),(struct A68t299 **,struct A68t286 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF REF MODE299,MODE286) VOID */

A_PROCEDURE(A68_VOID ,A68t306,(struct A68t299 **),(struct A68t299 **,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF REF MODE299) VOID */
struct A68t307{
A68_INT  Current_size;
A_PAD_INT(PAD_74)
A68_INT  Max_size;
A_PAD_INT(PAD_75)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t307 *),(struct A68t307 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC MODE307 */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t307 ,A68_VC ),(struct A68t307 ,A68_VC ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE307,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t307 *,struct A68t210 ),(struct A68t307 *,struct A68t210 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE307,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t307 *,struct A68t212 ),(struct A68t307 *,struct A68t212 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE307,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t312,(struct A68t307 *),(struct A68t307 *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE307) VOID */

A_PROCEDURE(A68_INT ,A68t313,(struct A68t307 *),(struct A68t307 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE307) INT */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t307 *,A68_INT ),(struct A68t307 *,A68_INT ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(REF MODE307,INT) VOID */
struct A68t315{
A68_INT  Window_offset;
A_PAD_INT(PAD_76)
A68_INT  Register_ind;
A_PAD_INT(PAD_77)
A68_INT  Memory_offset;
A_PAD_INT(PAD_78)
A68_INT  Max_offset;
A_PAD_INT(PAD_79)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t315 *),(struct A68t315 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC MODE315 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t315 ,A68_VC ),(struct A68t315 ,A68_VC ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE315,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t315 *,struct A68t210 ),(struct A68t315 *,struct A68t210 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE315,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t315 *,struct A68t212 ),(struct A68t315 *,struct A68t212 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE315,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t315 *),(struct A68t315 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE315) VOID */

A_PROCEDURE(A68_BOOL ,A68t321,(struct A68t315 *),(struct A68t315 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE315) BOOL */

A_PROCEDURE(A68_INT ,A68t322,(struct A68t315 *),(struct A68t315 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE315) INT */
struct A68t323{
A68_BOOL  Ircallinst_flag;
A_PAD_BOOL(PAD_80)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t324,(A68_BOOL ,struct A68t323 *),(A68_BOOL ,struct A68t323 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(BOOL) MODE323 */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t323 ,A68_VC ),(struct A68t323 ,A68_VC ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE323,MODE26) VOID */
struct A68t326{
A68_INT  Copy_stack_number;
A_PAD_INT(PAD_81)
A68_BOOL  Register_flag;
A_PAD_BOOL(PAD_82)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t327,(A68_INT ,A68_BOOL ,struct A68t326 *),(A68_INT ,A68_BOOL ,struct A68t326 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(INT,BOOL) MODE326 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t326 ,A68_VC ),(struct A68t326 ,A68_VC ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE326,MODE26) VOID */
struct A68t329{
A68_VC  Constant;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t330,(A68_VC ,struct A68t329 *),(A68_VC ,struct A68t329 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE26) MODE329 */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t329 ,A68_VC ),(struct A68t329 ,A68_VC ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE329,MODE26) VOID */
struct A68t332{
A68_INT  Sumconstant;
A_PAD_INT(PAD_83)
A68_BOOL  Callinst_flag;
A_PAD_BOOL(PAD_84)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t333,(A68_INT ,A68_BOOL ,struct A68t332 *),(A68_INT ,A68_BOOL ,struct A68t332 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(INT,BOOL) MODE332 */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t332 ,A68_VC ),(struct A68t332 ,A68_VC ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE332,MODE26) VOID */
struct A68t335{
A68_BOOL  Indcallinst_flag;
A_PAD_BOOL(PAD_85)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t336,(A68_BOOL ,struct A68t335 *),(A68_BOOL ,struct A68t335 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(BOOL) MODE335 */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t335 ,A68_VC ),(struct A68t335 ,A68_VC ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE335,MODE26) VOID */
struct A68t338{
A68_BITS  Condition;
A_PAD_BITS(PAD_86)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t339,(A68_BITS ,struct A68t338 *),(A68_BITS ,struct A68t338 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(BITS) MODE338 */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t338 ,A68_VC ),(struct A68t338 ,A68_VC ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE338,MODE26) VOID */
struct A68t341 { A68_INT mode; union {
struct A68t323  mode1;
struct A68t326  mode2;
struct A68t329  mode3;
struct A68t332  mode4;
struct A68t335  mode5;
struct A68t338  mode6;
} data; };
typedef struct A68t341  A68_341 ;    /* UNION(MODE323,MODE326,MODE329,MODE332,MODE335,MODE338,VOID)  */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t341 ,A68_VC ),(struct A68t341 ,A68_VC ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE341,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t341 ,struct A68t341 ,struct A68t341 *),(struct A68t341 ,struct A68t341 ,struct A68t341 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE341,MODE341) MODE341 */

A_PROCEDURE(A68_BOOL ,A68t344,(struct A68t341 ),(struct A68t341 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE341) BOOL */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t341 ,struct A68t341 *),(struct A68t341 ,struct A68t341 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE341) MODE341 */
struct A68t346 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
A68_CHAR  mode3;
} data; };
typedef struct A68t346  A68_346 ;    /* UNION(BOOL,INT,CHAR)  */
struct A68t347{
struct A68t346  Location_type;
struct A68t341  Symbolic_state;
A68_INT  Alloc_register;
A_PAD_INT(PAD_87)
A68_INT  Bit_length;
A_PAD_INT(PAD_88)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE346,MODE341,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t347 ,A68_VC ),(struct A68t347 ,A68_VC ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE347,MODE26) VOID */
A_VECTOR(struct A68t347 ,A68t350);
typedef struct A68t350  A68_350 ;    /* VECTOR [] MODE347 */
struct A68t349{
struct A68t350  Stack_locations;
A68_INT  Top;
A_PAD_INT(PAD_89)
};
typedef struct A68t349  A68_349 ;    /* STRUCT(REF MODE350,INT)  */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t349 *),(struct A68t349 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC MODE349 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t349 ,A68_VC ),(struct A68t349 ,A68_VC ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE349,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t349 *,struct A68t349 *),(struct A68t349 *,struct A68t349 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE349) MODE349 */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t349 *),(struct A68t349 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE349) VOID */

A_PROCEDURE(A68_INT ,A68t355,(struct A68t349 *),(struct A68t349 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE349) INT */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t349 *,struct A68t347 *),(struct A68t349 *,struct A68t347 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE349) MODE347 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t349 *,struct A68t347 ),(struct A68t349 *,struct A68t347 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE349,MODE347) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t349 *,A68_INT ,struct A68t347 *),(struct A68t349 *,A68_INT ,struct A68t347 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE349,INT) MODE347 */
struct A68t359{
struct A68t347  Loc;
A68_INT  O;
A_PAD_INT(PAD_90)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(MODE347,INT)  */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t347 ,A68_INT ,struct A68t359 *),(struct A68t347 ,A68_INT ,struct A68t359 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE347,INT) MODE359 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t349 *,struct A68t359 ),(struct A68t349 *,struct A68t359 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE349,MODE359) VOID */

A_PROCEDURE(A68_BOOL ,A68t362,(struct A68t349 *),(struct A68t349 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE349) BOOL */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t349 *,A68_INT ,struct A68t346 *),(struct A68t349 *,A68_INT ,struct A68t346 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE349,INT) MODE346 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t349 *,A68_INT ,struct A68t341 *),(struct A68t349 *,A68_INT ,struct A68t341 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE349,INT) MODE341 */

A_PROCEDURE(A68_INT ,A68t365,(struct A68t349 *,A68_INT ),(struct A68t349 *,A68_INT ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE349,INT) INT */
struct A68t366{
A68_INT  O;
A_PAD_INT(PAD_91)
struct A68t341  Ss;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,MODE341)  */

A_PROCEDURE(A68_VOID ,A68t367,(A68_INT ,struct A68t341 ,struct A68t366 *),(A68_INT ,struct A68t341 ,struct A68t366 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(INT,MODE341) MODE366 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t349 *,struct A68t366 ),(struct A68t349 *,struct A68t366 ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE349,MODE366) VOID */
struct A68t369{
A68_INT  O;
A_PAD_INT(PAD_92)
A68_INT  Bl;
A_PAD_INT(PAD_93)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t370,(A68_INT ,A68_INT ,struct A68t369 *),(A68_INT ,A68_INT ,struct A68t369 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(INT,INT) MODE369 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t349 *,struct A68t369 ),(struct A68t349 *,struct A68t369 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE349,MODE369) VOID */
struct A68t372{
A68_INT  O;
A_PAD_INT(PAD_94)
A68_INT  R;
A_PAD_INT(PAD_95)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t373,(A68_INT ,A68_INT ,struct A68t372 *),(A68_INT ,A68_INT ,struct A68t372 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(INT,INT) MODE372 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t349 *,struct A68t372 ),(struct A68t349 *,struct A68t372 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE349,MODE372) VOID */
struct A68t375{
struct A68t349  Location_stack;
struct A68t315  Rm_allocator;
struct A68t307  Size_recorder;
};
typedef struct A68t375  A68_375 ;    /* STRUCT(MODE349,MODE315,MODE307)  */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t375 *),(struct A68t375 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC MODE375 */

A_PROCEDURE(struct A68t375 *,A68t377,(struct A68t375 *),(struct A68t375 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE375) REF MODE375 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t375 ,A68_VC ),(struct A68t375 ,A68_VC ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE375,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t375 *,struct A68t210 ),(struct A68t375 *,struct A68t210 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE375,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t375 *,struct A68t212 ),(struct A68t375 *,struct A68t212 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE375,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t375 *),(struct A68t375 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE375) VOID */

A_PROCEDURE(A68_INT ,A68t382,(struct A68t375 *),(struct A68t375 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE375) INT */

A_PROCEDURE(A68_BOOL ,A68t383,(struct A68t375 *),(struct A68t375 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE375) BOOL */

A_PROCEDURE(A68_INT ,A68t384,(struct A68t375 *,A68_INT ),(struct A68t375 *,A68_INT ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE375,INT) INT */

A_PROCEDURE(A68_BITS ,A68t385,(struct A68t375 *,A68_INT ),(struct A68t375 *,A68_INT ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE375,INT) BITS */
struct A68t386 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
} data; };
typedef struct A68t386  A68_386 ;    /* UNION(BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t375 *,A68_INT ,struct A68t386 *),(struct A68t375 *,A68_INT ,struct A68t386 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE375,INT) MODE386 */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t375 *,A68_INT ,struct A68t172 *),(struct A68t375 *,A68_INT ,struct A68t172 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE375,INT) MODE172 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t375 *,A68_INT ,struct A68t170 *),(struct A68t375 *,A68_INT ,struct A68t170 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE375,INT) MODE170 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t375 *,A68_INT ),(struct A68t375 *,A68_INT ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(REF MODE375,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t375 *,struct A68t172 *),(struct A68t375 *,struct A68t172 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(REF MODE375) MODE172 */

A_PROCEDURE(A68_BOOL ,A68t392,(struct A68t375 *,A68_INT ),(struct A68t375 *,A68_INT ,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE375,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t393,(struct A68t375 *,struct A68t281 *),(struct A68t375 *,struct A68t281 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE375,REF MODE281) INT */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t375 *,struct A68t303 ),(struct A68t375 *,struct A68t303 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE375,MODE303) VOID */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t375 *,struct A68t281 *),(struct A68t375 *,struct A68t281 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE375,REF MODE281) VOID */

A_PROCEDURE(struct A68t281 *,A68t396,(struct A68t375 *),(struct A68t375 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE375) REF MODE281 */
struct A68t397{
A68_INT  W;
A_PAD_INT(PAD_96)
A68_INT  V;
A_PAD_INT(PAD_97)
A68_INT  A;
A_PAD_INT(PAD_98)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t235 ,A68_INT ,struct A68t397 *),(struct A68t235 ,A68_INT ,struct A68t397 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE235,INT) MODE397 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t375 *,struct A68t397 ),(struct A68t375 *,struct A68t397 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE375,MODE397) VOID */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t375 *,A68_BITS ),(struct A68t375 *,A68_BITS ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE375,BITS) VOID */
struct A68t401{
A68_VC  Wo;
A68_INT  Len;
A_PAD_INT(PAD_99)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t402,(A68_VC ,A68_INT ,struct A68t401 *),(A68_VC ,A68_INT ,struct A68t401 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE26,INT) MODE401 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t375 *,struct A68t401 ),(struct A68t375 *,struct A68t401 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE375,MODE401) VOID */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t375 *,struct A68t369 ),(struct A68t375 *,struct A68t369 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE375,MODE369) VOID */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t406,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,67,A68t407);
typedef struct A68t407  A68_407 ;    /* STRUCT 67 CHAR */
struct A68t408{
A68_INT  Addr;
A_PAD_INT(PAD_100)
A68_INT  Env;
A_PAD_INT(PAD_101)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t129 ,struct A68t408 *),(struct A68t129 ,struct A68t408 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE129) MODE408 */

A_PROCEDURE(A68_INT ,A68t410,(struct A68t375 *,A68_INT ,A68_INT ),(struct A68t375 *,A68_INT ,A68_INT ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE375,INT,INT) INT */
struct A68t411{
struct A68t32  Locations;
A68_INT  Top;
A_PAD_INT(PAD_102)
A68_BOOL  Inline;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t411  A68_411 ;    /* STRUCT(REF MODE32,INT,BOOL)  */

A_PROCEDURE(struct A68t411 *,A68t412,(void),(void *));
typedef struct A68t412  A68_412 ;    /* PROC REF MODE411 */

A_PROCEDURE(struct A68t411 *,A68t413,(struct A68t411 *,struct A68t386 ),(struct A68t411 *,struct A68t386 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE411,MODE386) REF MODE411 */

A_PROCEDURE(struct A68t411 *,A68t414,(struct A68t411 *),(struct A68t411 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE411) REF MODE411 */
A_ISTRUCT(A68_CHAR ,21,A68t415);
typedef struct A68t415  A68_415 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_INT ,A68t416,(struct A68t411 *),(struct A68t411 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE411) INT */

A_PROCEDURE(A68_BOOL ,A68t417,(struct A68t411 *),(struct A68t411 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE411) BOOL */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t411 *,A68_INT ),(struct A68t411 *,A68_INT ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE411,INT) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t419);
typedef struct A68t419  A68_419 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_BOOL ,A68t421,(struct A68t375 *,A68_INT *),(struct A68t375 *,A68_INT *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE375,REF INT) BOOL */

A_PROCEDURE(A68_BITS ,A68t422,(void),(void *));
typedef struct A68t422  A68_422 ;    /* PROC BITS */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t375 *,A68_INT ,A68_INT ),(struct A68t375 *,A68_INT ,A68_INT ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE375,INT,INT) VOID */
A_ROW(A68_INT ,A68t424,1);
typedef struct A68t424  A68_424 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t375 *,struct A68t421 ,struct A68t421 ,struct A68t129 ,struct A68t424 ),(struct A68t375 *,struct A68t421 ,struct A68t421 ,struct A68t129 ,struct A68t424 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE375,MODE421,MODE421,MODE129,MODE424) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t375 *,struct A68t421 ,struct A68t129 ,struct A68t424 ),(struct A68t375 *,struct A68t421 ,struct A68t129 ,struct A68t424 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE375,MODE421,MODE129,MODE424) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t375 *,struct A68t383 ,struct A68t381 ,struct A68t381 ),(struct A68t375 *,struct A68t383 ,struct A68t381 ,struct A68t381 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE375,MODE383,MODE381,MODE381) VOID */
struct A68t428{
struct A68t241  Biopname;
struct A68t381 * Biop_action;
};
typedef struct A68t428  A68_428 ;    /* STRUCT(MODE241,REF MODE381)  */
A_ROW(struct A68t428 ,A68t430,1);
typedef struct A68t430  A68_430 ;    /* [] MODE428 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t430 *),(struct A68t430 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC REF MODE430 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_BOOL ,struct A68t430 *),(A68_BOOL ,struct A68t430 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(BOOL) MODE430 */
A_ISTRUCT(A68_CHAR ,14,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_INT ,5,A68t434);
typedef struct A68t434  A68_434 ;    /* STRUCT 5 INT */
A_ISTRUCT(A68_CHAR ,13,A68t435);
typedef struct A68t435  A68_435 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_INT ,4,A68t436);
typedef struct A68t436  A68_436 ;    /* STRUCT 4 INT */
A_ISTRUCT(A68_CHAR ,5,A68t437);
typedef struct A68t437  A68_437 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_INT ,3,A68t438);
typedef struct A68t438  A68_438 ;    /* STRUCT 3 INT */
A_ISTRUCT(A68_CHAR ,7,A68t439);
typedef struct A68t439  A68_439 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t440);
typedef struct A68t440  A68_440 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t441);
typedef struct A68t441  A68_441 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t442);
typedef struct A68t442  A68_442 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t443);
typedef struct A68t443  A68_443 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_INT ,2,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 2 INT */
A_ISTRUCT(A68_CHAR ,8,A68t445);
typedef struct A68t445  A68_445 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t446);
typedef struct A68t446  A68_446 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_INT ,7,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 7 INT */
A_ISTRUCT(struct A68t428 ,77,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 77 MODE428 */

A_PROCEDURE(A68_BOOL ,A68t449,(struct A68t430 ,struct A68t241 ,struct A68t375 *),(struct A68t430 ,struct A68t241 ,struct A68t375 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE430,MODE241,REF MODE375) BOOL */

A_PROCEDURE(A68_BOOL ,A68t450,(struct A68t375 *,struct A68t241 ),(struct A68t375 *,struct A68t241 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE375,MODE241) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kecodegenstacksparc --- */
#define EZGASIM_tos 0
#define FZGASIM_tos1 1
extern A68_BITS  GBHASIM_rdest(struct A68t375 *,A68_INT );
extern A68_BITS  KBHASIM_rsource(struct A68t375 *,A68_INT );
extern A68_VOID  LCHASIM_source(struct A68t375 *,A68_INT ,A68_386 *);
extern A68_VOID  QDHASIM_smallind(struct A68t375 *,A68_INT ,A68_172 *);
extern A68_VOID  QEHASIM_loadoperands(struct A68t375 *,A68_INT ,A68_170 *);
extern A68_VOID  DFHASIM_sizeoperands(struct A68t375 *,A68_INT ,A68_172 *);
extern A68_VOID  HGHASIM_transmutesmall(struct A68t375 *,A68_INT );
extern A68_VOID  SGHASIM_monop(struct A68t375 *,A68_172 *);
extern A68_VOID  BIHASIM_assocdyop(struct A68t375 *,A68_172 *);
extern A68_VOID  XIHASIM_calculatenewdynamicaddr(struct A68t375 *,A68_INT );
extern A68_VOID  IHHASIM_pop(struct A68t375 *);
extern A68_VOID  EPHASIM_pushnewstacklocation(struct A68t375 *,A68_INT );
extern A68_VOID  QPHASIM_pushnewunknownstacklocation(struct A68t375 *);
extern A68_VOID  PMHASIM_forceload(struct A68t375 *,A68_INT );
extern A68_VOID  YNHASIM_forceindepmem(struct A68t375 *);
extern A68_VOID  PVIASIM_itos(struct A68t375 *,struct A68t369 );
extern A68_VOID  XVIASIM_utos(struct A68t375 *,struct A68t369 );
extern A68_VOID  AWIASIM_stoi(struct A68t375 *,A68_INT );
extern A68_VOID  QWIASIM_stou(struct A68t375 *,A68_INT );
/* --- End of imports from kecodegenstacksparc --- */


/* --- Imports from kecodegenserversparc --- */
extern A68_VOID  YLFASIM_label(A68_VC ,A68_241 *);
extern A68_BITS  NEGASIM_tempreg1;
extern A68_BITS  OEGASIM_tempreg2;
extern A68_BITS  PEGASIM_tempreg3;
extern A68_BITS  QEGASIM_tempreg4;
extern A68_VOID  IIGASIM_inregister(A68_BOOL ,A68_323 *);
extern A68_VOID  JVGASIM_typeof(struct A68t349 *,A68_INT ,A68_346 *);
extern A68_VOID  PVGASIM_stateof(struct A68t349 *,A68_INT ,A68_341 *);
extern A68_INT  BWGASIM_sizeof(struct A68t349 *,A68_INT );
extern A68_VOID  HWGASIM_given(A68_INT ,struct A68t341 ,A68_366 *);
extern A68_VOID  MWGASIM_changestateof(struct A68t349 *,struct A68t366 );
extern A68_VOID  SWGASIM_givenn(A68_INT ,A68_INT ,A68_369 *);
extern A68_VOID  XWGASIM_changesizeof(struct A68t349 *,struct A68t369 );
/* --- End of imports from kecodegenserversparc --- */


/* --- Imports from kemassemsparc --- */
extern A68_VOID  ZIDASIM_simfault(A68_VC );
extern A68_VOID  GJDASIM_assert(A68_VC ,A68_BOOL );
extern A68_INT  GLDASIM_location;
extern A68_176  BZDASIM_nop;
extern A68_177  FZDASIM_b;
extern A68_178  RZDASIM_bd;
extern A68_179  DAEASIM_add;
extern A68_179  HAEASIM_and;
extern A68_179  LAEASIM_or;
extern A68_179  PAEASIM_xor;
extern A68_179  TAEASIM_sub;
extern A68_179  FBEASIM_xnor;
extern A68_179  JBEASIM_addx;
extern A68_179  NBEASIM_subx;
extern A68_179  HCEASIM_subcc;
extern A68_179  ZDEASIM_sll;
extern A68_179  DEEASIM_srl;
extern A68_179  HEEASIM_sra;
extern A68_182  BPEASIM_jmpl;
extern A68_179  TEEASIM_ld;
extern A68_179  JFEASIM_st;
#define YVDASIM_eq 0X1U
#define ZVDASIM_z YVDASIM_eq
#define AWDASIM_le 0X2U
#define BWDASIM_l 0X3U
#define CWDASIM_leu 0X4U
#define DWDASIM_lu 0X5U
#define EWDASIM_cs DWDASIM_lu
#define IWDASIM_ne 0X9U
#define JWDASIM_nz IWDASIM_ne
#define KWDASIM_g 0XaU
#define LWDASIM_ge 0XbU
#define MWDASIM_gu 0XcU
#define NWDASIM_geu 0XdU
#define OWDASIM_cc NWDASIM_geu
#define RWDASIM_n_a 0X10U
#define SWDASIM_eq_a 0X11U
#define TWDASIM_z_a SWDASIM_eq_a
#define XWDASIM_lu_a 0X15U
#define YWDASIM_cs_a XWDASIM_lu_a
#define ZWDASIM_neg_a 0X16U
#define CXDASIM_ne_a 0X19U
#define DXDASIM_nz_a CXDASIM_ne_a
#define HXDASIM_geu_a 0X1dU
#define IXDASIM_cc_a HXDASIM_geu_a
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
#define QXEASIM_r31 0X1fU
#define RXEASIM_i7 QXEASIM_r31
#define IWEASIM_sp HWEASIM_o6
#define PXEASIM_fp OXEASIM_i6
extern A68_VOID  QQEASIM_using(struct A68t176 ,struct A68t168 );
extern A68_VOID  YQEASIM_using(struct A68t189 ,A68_INT );
extern A68_VOID  ISEASIM_using(struct A68t179 ,struct A68t172 );
extern A68_VOID  PUEASIM_using(struct A68t182 ,struct A68t172 );
extern A68_VOID  ASEASIM_using(struct A68t191 ,struct A68t164 *);
extern A68_VOID  VXDASIM_(struct A68t177 ,A68_BITS ,A68_189 *);
extern A68_VOID  AYDASIM_(struct A68t178 ,A68_BITS ,A68_191 *);
extern A68_VOID  TXEASIM_fixmachinelabel(struct A68t164 );
extern A68_VOID  CZEASIM_mamovir(A68_INT ,A68_BITS );
extern A68_VOID  OZEASIM_madiv(void);
extern A68_VOID  TZEASIM_mamul(void);
/* --- End of imports from kemassemsparc --- */


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
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZYGASIM(void);   /* kecodegenstacksparc */
extern void AAFASIM(void);   /* kecodegenserversparc */
extern void KIDASIM(void);   /* kemassemsparc */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_407   BZIASIM = {"$Id: kecodegenbiopifsparc.a68,v 34.2 1995/03/29 13:04:44 ella Exp $"}; 
A_GISVEC(A68_VC ,CZIASIM,BZIASIM,67)
#define DZIASIM_optimiseon A68_TRUE
extern void ADD_US();

#define EZIASIM_plus_us_1 ADD_US
extern void SUB_US();

#define FZIASIM_minus_us_1 SUB_US
extern void ADD_S();

#define GZIASIM_plus_s_1 ADD_S
extern void SUB_S();

#define HZIASIM_minus_s_1 SUB_S
extern void TIMES_US();

#define IZIASIM_times_us_1 TIMES_US
extern void TIMES_S();

#define JZIASIM_times_s_1 TIMES_S
extern void DIVIDE_S();

#define KZIASIM_divide_s_1 DIVIDE_S
extern void DIVIDE_US();

#define LZIASIM_divide_us_1 DIVIDE_US
extern void RANGE_US();

#define MZIASIM_range_us_1 RANGE_US
extern void RANGE_S();

#define NZIASIM_range_s_1 RANGE_S
extern void LT_US();

#define OZIASIM_lt_us_1 LT_US
extern void LT_S();

#define PZIASIM_lt_s_1 LT_S
extern void GT_US();

#define QZIASIM_gt_us_1 GT_US
extern void GT_S();

#define RZIASIM_gt_s_1 GT_S
extern void ABS_S();

#define SZIASIM_abs_s_1 ABS_S
extern void NEGATE_S();

#define TZIASIM_negate_s_1 NEGATE_S
extern void NEGATE_US();

#define UZIASIM_negate_us_1 NEGATE_US
extern void MOD_S();

#define VZIASIM_mod_s_1 MOD_S
extern void MOD_US();

#define WZIASIM_mod_us_1 MOD_US
extern void AND();

#define XZIASIM_and_1 AND
extern void OR();

#define YZIASIM_or_1 OR
extern void NOT();

#define ZZIASIM_not_1 NOT
extern void XOR();

#define AAJASIM_xor_1 XOR
extern void SL();

#define BAJASIM_sl_1 SL
extern void SR_US();

#define CAJASIM_sr_us_1 SR_US
extern void SR_S();

#define DAJASIM_sr_s_1 SR_S
extern void TRANSFORM_US_1();

#define EAJASIM_transform_us_1 TRANSFORM_US_1
extern void TRANSFORM_S_1();

#define FAJASIM_transform_s_1 TRANSFORM_S_1
extern void TRANSFORM_US_2();

#define GAJASIM_transform_us_2 TRANSFORM_US_2
extern void TRANSFORM_S_2();

#define HAJASIM_transform_s_2 TRANSFORM_S_2
extern void EQ_US();

#define IAJASIM_eq_us_1 EQ_US
extern void EQ_S();

#define JAJASIM_eq_s_1 EQ_S
extern void LE_US();

#define KAJASIM_le_us_1 LE_US
extern void LE_S();

#define LAJASIM_le_s_1 LE_S
extern void GE_US();

#define MAJASIM_ge_us_1 GE_US
extern void GE_S();

#define NAJASIM_ge_s_1 GE_S
extern void SQRT_US();

#define OAJASIM_sqrt_us_1 SQRT_US
extern void CONVERT_US_1();

#define PAJASIM_convert_us_1 CONVERT_US_1
extern void CONVERT_US_2();

#define QAJASIM_convert_us_2 CONVERT_US_2
extern void CHANGE_REAL_1();

#define RAJASIM_change_real_1 CHANGE_REAL_1
extern void CHANGE_REAL_2();

#define SAJASIM_change_real_2 CHANGE_REAL_2
extern void CONVERT_REAL_1();

#define TAJASIM_convert_real_1 CONVERT_REAL_1
extern void CONVERT_REAL_2();

#define UAJASIM_convert_real_2 CONVERT_REAL_2
extern void F_TO_R_1();

#define VAJASIM_f_to_r_1 F_TO_R_1
extern void F_TO_R_2();

#define WAJASIM_f_to_r_2 F_TO_R_2
extern void R_TO_F_1();

#define XAJASIM_r_to_f_1 R_TO_F_1
extern void R_TO_F_2();

#define YAJASIM_r_to_f_2 R_TO_F_2
extern void DIVIDE_REAL_1();

#define ZAJASIM_divide_real_1 DIVIDE_REAL_1
extern void DIVIDE_REAL_2();

#define ABJASIM_divide_real_2 DIVIDE_REAL_2
extern void EQ_REAL_1();

#define BBJASIM_eq_real_1 EQ_REAL_1
extern void EQ_REAL_2();

#define CBJASIM_eq_real_2 EQ_REAL_2
extern void GT_REAL_1();

#define DBJASIM_gt_real_1 GT_REAL_1
extern void GT_REAL_2();

#define EBJASIM_gt_real_2 GT_REAL_2
extern void LT_REAL_1();

#define FBJASIM_lt_real_1 LT_REAL_1
extern void LT_REAL_2();

#define GBJASIM_lt_real_2 LT_REAL_2
extern void MINUS_REAL_1();

#define HBJASIM_minus_real_1 MINUS_REAL_1
extern void MINUS_REAL_2();

#define IBJASIM_minus_real_2 MINUS_REAL_2
extern void NEGATE_REAL_1();

#define JBJASIM_negate_real_1 NEGATE_REAL_1
extern void NEGATE_REAL_2();

#define KBJASIM_negate_real_2 NEGATE_REAL_2
extern void PLUS_REAL_1();

#define LBJASIM_plus_real_1 PLUS_REAL_1
extern void PLUS_REAL_2();

#define MBJASIM_plus_real_2 PLUS_REAL_2
extern void TIMES_REAL_1();

#define NBJASIM_times_real_1 TIMES_REAL_1
extern void TIMES_REAL_2();

#define OBJASIM_times_real_2 TIMES_REAL_2
#define PBJASIM_bs 1
#define QBJASIM_tv 2
#define RBJASIM_ch 3
#define SBJASIM_ee 4
#define TBJASIM_ei 5
#define UBJASIM_ds 6
#define VBJASIM_sr 7
#define WBJASIM_lr 8
#define XBJASIM_i 9
#define YBJASIM_q 10
#define ZBJASIM_r 11
#define ACJASIM_ms_tos 92
static A68_415   EFJASIM = {"arith stack underflow"}; 
A_GISVEC(A68_VC ,FFJASIM,EFJASIM,21)
static A68_419   XFJASIM = {"Check size is: stack size incorrect"}; 
A_GISVEC(A68_VC ,YFJASIM,XFJASIM,35)
static A68_420   BGJASIM = {"Arith stack underflow: ADD"}; 
A_GISVEC(A68_VC ,CGJASIM,BGJASIM,26)
static A68_420   SGJASIM = {"Arith stack underflow: SUB"}; 
A_GISVEC(A68_VC ,TGJASIM,SGJASIM,26)
static A68_420   JHJASIM = {"Arith stack underflow: MUL"}; 
A_GISVEC(A68_VC ,KHJASIM,JHJASIM,26)
static A68_420   YHJASIM = {"Arith stack underflow: DIV"}; 
A_GISVEC(A68_VC ,ZHJASIM,YHJASIM,26)
static A68_420   RIJASIM = {"Arith stack underflow: MAX"}; 
A_GISVEC(A68_VC ,SIJASIM,RIJASIM,26)
static A68_INT  JVJASIM_paramcount;
static A68_415   DZJASIM = {"ms_push: unknown case"}; 
A_GISVEC(A68_VC ,EZJASIM,DZJASIM,21)
#define HJKASIM_q_x EZGASIM_tos
#define HMKASIM_nilpaction (A68_381 *)A68_NIL
static A68_INT  IMKASIM_tos2;
static A68_INT  JMKASIM_tos3;
static A68_95   QMKASIM = {"EQ|2"}; 
A_GISVEC(A68_VC ,RMKASIM,QMKASIM,4)
static A68_95   XMKASIM = {"GT|2"}; 
A_GISVEC(A68_VC ,YMKASIM,XMKASIM,4)
static A68_95   ENKASIM = {"GE|2"}; 
A_GISVEC(A68_VC ,FNKASIM,ENKASIM,4)
static A68_95   LNKASIM = {"LT|2"}; 
A_GISVEC(A68_VC ,MNKASIM,LNKASIM,4)
static A68_95   SNKASIM = {"LE|2"}; 
A_GISVEC(A68_VC ,TNKASIM,SNKASIM,4)
static A68_95   ZNKASIM = {"EQ|3"}; 
A_GISVEC(A68_VC ,AOKASIM,ZNKASIM,4)
static A68_95   GOKASIM = {"GT|3"}; 
A_GISVEC(A68_VC ,HOKASIM,GOKASIM,4)
static A68_95   NOKASIM = {"GE|3"}; 
A_GISVEC(A68_VC ,OOKASIM,NOKASIM,4)
static A68_95   UOKASIM = {"LT|3"}; 
A_GISVEC(A68_VC ,VOKASIM,UOKASIM,4)
static A68_95   BPKASIM = {"LE|3"}; 
A_GISVEC(A68_VC ,CPKASIM,BPKASIM,4)
static A68_433   IPKASIM = {"TRANSFORM_US|1"}; 
A_GISVEC(A68_VC ,JPKASIM,IPKASIM,14)
static A68_435   TPKASIM = {"TRANSFORM_S|1"}; 
A_GISVEC(A68_VC ,UPKASIM,TPKASIM,13)
static A68_433   EQKASIM = {"TRANSFORM_US|2"}; 
A_GISVEC(A68_VC ,FQKASIM,EQKASIM,14)
static A68_435   PQKASIM = {"TRANSFORM_S|2"}; 
A_GISVEC(A68_VC ,QQKASIM,PQKASIM,13)
static A68_437   ARKASIM = {"AND|2"}; 
A_GISVEC(A68_VC ,BRKASIM,ARKASIM,5)
static A68_95   HRKASIM = {"OR|2"}; 
A_GISVEC(A68_VC ,IRKASIM,HRKASIM,4)
static A68_437   ORKASIM = {"NOT|2"}; 
A_GISVEC(A68_VC ,PRKASIM,ORKASIM,5)
static A68_437   VRKASIM = {"XOR|2"}; 
A_GISVEC(A68_VC ,WRKASIM,VRKASIM,5)
static A68_95   CSKASIM = {"SL|1"}; 
A_GISVEC(A68_VC ,DSKASIM,CSKASIM,4)
static A68_439   OTKASIM = {"SR_US|1"}; 
A_GISVEC(A68_VC ,PTKASIM,OTKASIM,7)
static A68_440   CVKASIM = {"SR_S|1"}; 
A_GISVEC(A68_VC ,DVKASIM,CVKASIM,6)
static A68_441   QWKASIM = {"PLUS_US|1"}; 
A_GISVEC(A68_VC ,RWKASIM,QWKASIM,9)
static A68_442   RXKASIM = {"MINUS_US|1"}; 
A_GISVEC(A68_VC ,SXKASIM,RXKASIM,10)
static A68_443   SYKASIM = {"NEGATE_US|1"}; 
A_GISVEC(A68_VC ,TYKASIM,SYKASIM,11)
static A68_442   UZKASIM = {"TIMES_US|1"}; 
A_GISVEC(A68_VC ,VZKASIM,UZKASIM,10)
static A68_443   GALASIM = {"DIVIDE_US|1"}; 
A_GISVEC(A68_VC ,HALASIM,GALASIM,11)
static A68_445   RALASIM = {"MOD_US|1"}; 
A_GISVEC(A68_VC ,SALASIM,RALASIM,8)
static A68_442   CBLASIM = {"RANGE_US|1"}; 
A_GISVEC(A68_VC ,DBLASIM,CBLASIM,10)
static A68_445   NBLASIM = {"PLUS_S|1"}; 
A_GISVEC(A68_VC ,OBLASIM,NBLASIM,8)
static A68_441   PCLASIM = {"MINUS_S|1"}; 
A_GISVEC(A68_VC ,QCLASIM,PCLASIM,9)
static A68_442   QDLASIM = {"NEGATE_S|1"}; 
A_GISVEC(A68_VC ,RDLASIM,QDLASIM,10)
static A68_439   SELASIM = {"ABS_S|1"}; 
A_GISVEC(A68_VC ,TELASIM,SELASIM,7)
static A68_441   YFLASIM = {"TIMES_S|1"}; 
A_GISVEC(A68_VC ,ZFLASIM,YFLASIM,9)
static A68_442   KGLASIM = {"DIVIDE_S|1"}; 
A_GISVEC(A68_VC ,LGLASIM,KGLASIM,10)
static A68_441   VGLASIM = {"SQRT_US|1"}; 
A_GISVEC(A68_VC ,WGLASIM,VGLASIM,9)
static A68_439   HHLASIM = {"MOD_S|1"}; 
A_GISVEC(A68_VC ,IHLASIM,HHLASIM,7)
static A68_441   SHLASIM = {"RANGE_S|1"}; 
A_GISVEC(A68_VC ,THLASIM,SHLASIM,9)
static A68_439   DILASIM = {"EQ_US|1"}; 
A_GISVEC(A68_VC ,EILASIM,DILASIM,7)
static A68_439   WILASIM = {"GT_US|1"}; 
A_GISVEC(A68_VC ,XILASIM,WILASIM,7)
static A68_439   PJLASIM = {"GE_US|1"}; 
A_GISVEC(A68_VC ,QJLASIM,PJLASIM,7)
static A68_439   IKLASIM = {"LT_US|1"}; 
A_GISVEC(A68_VC ,JKLASIM,IKLASIM,7)
static A68_439   BLLASIM = {"LE_US|1"}; 
A_GISVEC(A68_VC ,CLLASIM,BLLASIM,7)
static A68_440   ULLASIM = {"EQ_S|1"}; 
A_GISVEC(A68_VC ,VLLASIM,ULLASIM,6)
static A68_440   NMLASIM = {"GT_S|1"}; 
A_GISVEC(A68_VC ,OMLASIM,NMLASIM,6)
static A68_440   GNLASIM = {"GE_S|1"}; 
A_GISVEC(A68_VC ,HNLASIM,GNLASIM,6)
static A68_440   ZNLASIM = {"LT_S|1"}; 
A_GISVEC(A68_VC ,AOLASIM,ZNLASIM,6)
static A68_440   SOLASIM = {"LE_S|1"}; 
A_GISVEC(A68_VC ,TOLASIM,SOLASIM,6)
static A68_446   LPLASIM = {"CONVERT_US|1"}; 
A_GISVEC(A68_VC ,MPLASIM,LPLASIM,12)
static A68_446   WPLASIM = {"CONVERT_US|2"}; 
A_GISVEC(A68_VC ,XPLASIM,WPLASIM,12)
static A68_437   HQLASIM = {"AND|1"}; 
A_GISVEC(A68_VC ,IQLASIM,HQLASIM,5)
static A68_95   CRLASIM = {"OR|1"}; 
A_GISVEC(A68_VC ,DRLASIM,CRLASIM,4)
static A68_437   XRLASIM = {"NOT|1"}; 
A_GISVEC(A68_VC ,YRLASIM,XRLASIM,5)
static A68_437   ZSLASIM = {"XOR|1"}; 
A_GISVEC(A68_VC ,ATLASIM,ZSLASIM,5)
static A68_433   VTLASIM = {"CONVERT_REAL|1"}; 
A_GISVEC(A68_VC ,WTLASIM,VTLASIM,14)
static A68_433   GULASIM = {"CONVERT_REAL|2"}; 
A_GISVEC(A68_VC ,HULASIM,GULASIM,14)
static A68_445   RULASIM = {"F_TO_R|1"}; 
A_GISVEC(A68_VC ,SULASIM,RULASIM,8)
static A68_445   CVLASIM = {"F_TO_R|2"}; 
A_GISVEC(A68_VC ,DVLASIM,CVLASIM,8)
static A68_445   NVLASIM = {"R_TO_F|1"}; 
A_GISVEC(A68_VC ,OVLASIM,NVLASIM,8)
static A68_445   YVLASIM = {"R_TO_F|2"}; 
A_GISVEC(A68_VC ,ZVLASIM,YVLASIM,8)
static A68_443   JWLASIM = {"PLUS_REAL|1"}; 
A_GISVEC(A68_VC ,KWLASIM,JWLASIM,11)
static A68_443   UWLASIM = {"PLUS_REAL|2"}; 
A_GISVEC(A68_VC ,VWLASIM,UWLASIM,11)
static A68_446   FXLASIM = {"MINUS_REAL|1"}; 
A_GISVEC(A68_VC ,GXLASIM,FXLASIM,12)
static A68_446   QXLASIM = {"MINUS_REAL|2"}; 
A_GISVEC(A68_VC ,RXLASIM,QXLASIM,12)
static A68_435   BYLASIM = {"NEGATE_REAL|1"}; 
A_GISVEC(A68_VC ,CYLASIM,BYLASIM,13)
static A68_435   MYLASIM = {"NEGATE_REAL|2"}; 
A_GISVEC(A68_VC ,NYLASIM,MYLASIM,13)
static A68_446   XYLASIM = {"TIMES_REAL|1"}; 
A_GISVEC(A68_VC ,YYLASIM,XYLASIM,12)
static A68_446   IZLASIM = {"TIMES_REAL|2"}; 
A_GISVEC(A68_VC ,JZLASIM,IZLASIM,12)
static A68_435   TZLASIM = {"DIVIDE_REAL|1"}; 
A_GISVEC(A68_VC ,UZLASIM,TZLASIM,13)
static A68_435   EAMASIM = {"DIVIDE_REAL|2"}; 
A_GISVEC(A68_VC ,FAMASIM,EAMASIM,13)
static A68_441   PAMASIM = {"EQ_REAL|1"}; 
A_GISVEC(A68_VC ,QAMASIM,PAMASIM,9)
static A68_441   ABMASIM = {"EQ_REAL|2"}; 
A_GISVEC(A68_VC ,BBMASIM,ABMASIM,9)
static A68_441   LBMASIM = {"GT_REAL|1"}; 
A_GISVEC(A68_VC ,MBMASIM,LBMASIM,9)
static A68_441   WBMASIM = {"GT_REAL|2"}; 
A_GISVEC(A68_VC ,XBMASIM,WBMASIM,9)
static A68_441   HCMASIM = {"LT_REAL|1"}; 
A_GISVEC(A68_VC ,ICMASIM,HCMASIM,9)
static A68_441   SCMASIM = {"LT_REAL|2"}; 
A_GISVEC(A68_VC ,TCMASIM,SCMASIM,9)
static A68_435   DDMASIM = {"CHANGE_REAL|1"}; 
A_GISVEC(A68_VC ,EDMASIM,DDMASIM,13)
static A68_435   ODMASIM = {"CHANGE_REAL|2"}; 
A_GISVEC(A68_VC ,PDMASIM,ODMASIM,13)
static A68_430  MEMASIM_bal;
typedef struct   /* env of non-global proc */
{
A68_411 * S;
} OEJASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} ETKASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} SUKASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} GWKASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} KZKASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} FCLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} IELASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} OFLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} NILASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} GJLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} ZJLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} SKLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} LLLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} EMLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} XMLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} QNLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} JOLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} CPLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} PSLASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_375 * Ams;
} LTLASIM_anonymous;

A_STATIC A68_INT  ECJASIM_either(A68_375 * S, A68_INT  A, A68_INT  B);

A_STATIC A68_VOID  KCJASIM_size(A68_375 * S, A68_INT  O, A68_386  *ReturnedValue);

A_STATIC A68_VOID  UCJASIM_value(A68_375 * S, A68_INT  O, A68_386  *ReturnedValue);

A_STATIC A68_411 * XCJASIM_arithstack(void);

A_STATIC A68_VOID  ADJASIM_generator(A68_BOOL  ZCJASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_411 * IDJASIM_push(A68_411 * S, A68_386  Val);

A_STATIC A68_VOID  NEJASIM_generator(A68_BOOL  LEJASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_411 * CFJASIM_pop(A68_411 * S);

A_STATIC A68_INT  NFJASIM_tos(A68_411 * S);

A_STATIC A68_BOOL  SFJASIM_inline(A68_411 * S);

A_STATIC A68_VOID  WFJASIM_checksizeis(A68_411 * S, A68_INT  Size);

A_STATIC A68_411 * AGJASIM_add(A68_411 * S);

A_STATIC A68_411 * RGJASIM_sub(A68_411 * S);

A_STATIC A68_411 * IHJASIM_mul(A68_411 * S);

A_STATIC A68_411 * XHJASIM_div(A68_411 * S);

A_STATIC A68_411 * QIJASIM_max(A68_411 * S);

A_STATIC A68_BOOL  VJJASIM_nospace(A68_375 * S, A68_INT * I);

A_STATIC A68_BOOL  ZJJASIM_bsxbslogicalws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  LKJASIM_bslogicalws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  XKJASIM_bsxbslogicalrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  DLJASIM_bslogicalrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  JLJASIM_dividews(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  IMJASIM_timesrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  PMJASIM_timesws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  QNJASIM_shiftrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  XNJASIM_plusws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  KOJASIM_plusrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  TOJASIM_notrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  ZOJASIM_convert_1ws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  QPJASIM_convert_2ws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  LQJASIM_negatews(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  XQJASIM_negaters(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  FRJASIM_sqrtws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  KSJASIM_sqrtrs(A68_375 * S, A68_INT * Resspc);

A_STATIC A68_BOOL  USJASIM_modws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  TTJASIM_convert_real_1ws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_BOOL  RUJASIM_convert_real_2ws(A68_375 * S, A68_INT * Wrkspc);

A_STATIC A68_VOID  LVJASIM_startnewparams(A68_INT  Noofparams);

A_STATIC A68_BITS  OVJASIM_paramreg(void);

A_STATIC A68_VOID  QVJASIM_passnewparam(void);

A_STATIC A68_VOID  UVJASIM_removeparameters(A68_INT  Noofparams);

A_STATIC A68_VOID  ZVJASIM_ms_pushbs(A68_375 * S, A68_INT  O);

A_STATIC A68_VOID  ZWJASIM_ms_pushei(A68_375 * S, A68_INT  O);

A_STATIC A68_VOID  GXJASIM_ms_pushds(A68_375 * S, A68_INT  O);

A_STATIC A68_VOID  DYJASIM_ms_pushlr(A68_375 * S, A68_INT  O);

A_STATIC A68_VOID  KYJASIM_ms_pushi(A68_375 * S, A68_INT  O);

A_STATIC A68_VOID  VYJASIM_ms_pushr(A68_375 * S, A68_INT  O);

A_STATIC A68_VOID  CZJASIM_ms_push(A68_375 * S, A68_INT  O, A68_INT  Paramtype);

A_STATIC A68_VOID  KZJASIM_oolbiopbs(A68_375 * S, A68_421  Fixedws, A68_421  Fixedrs, A68_129  Biop, A68_424  Inparamtype);

A_STATIC A68_VOID  WCKASIM_oolbioptv(A68_375 * S, A68_421  Fixedws, A68_129  Biop, A68_424  Inparamtype);

A_STATIC A68_VOID  AFKASIM_oolbiopstruct(A68_375 * S, A68_421  Fixedws, A68_129  Biop, A68_424  Inparamtype);

A_STATIC A68_VOID  TGKASIM_tvxtvand_2(A68_375 * Ams);

A_STATIC A68_VOID  NHKASIM_tvxtvor_2(A68_375 * Ams);

A_STATIC A68_VOID  HIKASIM_tvxtvnot_2(A68_375 * Ams);

A_STATIC A68_VOID  GJKASIM_eixeirelation(A68_375 * Ams, A68_BITS  Rel);

A_STATIC A68_VOID  AKKASIM_eexeerelation(A68_375 * Ams, A68_BITS  Rel);

A_STATIC A68_VOID  YKKASIM_optbiopbsxbsbs(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction);

A_STATIC A68_VOID  JLKASIM_optbiopbsbs(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction);

A_STATIC A68_VOID  QLKASIM_optbiopbsibs(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction);

A_STATIC A68_VOID  ZLKASIM_optbiopbsxbstv(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction);

A_STATIC A68_BOOL  FMKASIM_alwaysoptimise(A68_375 * S);

A_STATIC A68_VOID  KMKASIM_biopactionlist(A68_430  *ReturnedValue);

A_STATIC A68_VOID  MMKASIM_generator(A68_BOOL  LMKASIM_anonymous, A68_430  *ReturnedValue);

A_STATIC A68_VOID  UMKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  BNKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  INKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  PNKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  WNKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  DOKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  KOKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  ROKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  YOKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  FPKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  MPKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  XPKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  IQKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  TQKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  ERKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  LRKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  SRKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  ZRKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  GSKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  ISKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  NSKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  DTKASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  STKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  UTKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  ZTKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  RUKASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  GVKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  IVKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  NVKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  FWKASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  UWKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  WWKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  AXKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  GXKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  VXKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  XXKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  BYKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  HYKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  WYKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  YYKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  CZKASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  JZKASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  YZKASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  KALASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  VALASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  GBLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  RBLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  TBLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  XBLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  ECLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  TCLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  VCLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  ZCLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  FDLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  UDLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  WDLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  AELASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  HELASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  WELASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  YELASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  CFLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  NFLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  CGLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  OGLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  ZGLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  LHLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  WHLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  HILASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  JILASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  MILASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  AJLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  CJLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  FJLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  TJLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  VJLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  YJLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  MKLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  OKLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  RKLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  FLLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  HLLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  KLLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  YLLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  AMLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  DMLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  RMLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  TMLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  WMLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  KNLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  MNLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  PNLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  DOLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  FOLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  IOLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  WOLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  YOLASIM_anonymous(A68_375 * Sa);

A_STATIC A68_VOID  BPLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  PPLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  AQLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  LQLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  NQLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  RQLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  GRLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  IRLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  MRLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  BSLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  DSLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  HSLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  OSLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  DTLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  FTLASIM_anonymous(A68_375 * S);

A_STATIC A68_VOID  KTLASIM_anonymous(A68_375 * S, void *NonLocals);

A_STATIC A68_VOID  ZTLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  KULASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  VULASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  GVLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  RVLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  CWLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  NWLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  YWLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  JXLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  UXLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  FYLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  QYLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  BZLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  MZLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  XZLASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  IAMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  TAMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  EBMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  PBMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  ACMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  LCMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  WCMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  HDMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_VOID  SDMASIM_anonymous(A68_375 * Ams);

A_STATIC A68_BOOL  GEMASIM_generatebiop(A68_430  Bal, A68_241  L, A68_375 * Ams);

A68_VOID  NEMASIM_kecodegenbiopifinit(void);

A68_BOOL  REMASIM_generatecallbiop(A68_375 * Ams, A68_241  L);

A_STATIC A68_BOOL  ISKASIM_anonymous(A68_375 * S)
{ 
A68_INT  JSKASIM_i;
A68_BOOL  KSKASIM;  /* optbool result */
A68_BOOL  LSKASIM;  /* clause result */
 /* line 1514: */
{ 
KSKASIM = QNJASIM_shiftrs(S, (&JSKASIM_i));
if ( KSKASIM )
{KSKASIM = (JSKASIM_i<=32);
}
LSKASIM = KSKASIM;
} 
return( LSKASIM );
} 
#undef NL

A_STATIC A68_VOID  NSKASIM_anonymous(A68_375 * S)
{ 
A68_INT  OSKASIM_i;
A68_170  PSKASIM;  /* collateral clause result */
A68_172  QSKASIM;  /* OPERATORS - mode -> union mode */
A68_369  RSKASIM;  /* avoid structure result */
A68_323  SSKASIM;  /* avoid structure result */
A68_341  TSKASIM;  /* OPERATORS - mode -> union mode */
A68_366  USKASIM;  /* avoid structure result */
A68_170  VSKASIM;  /* collateral clause result */
A68_172  WSKASIM;  /* OPERATORS - mode -> union mode */
A68_369  XSKASIM;  /* avoid structure result */
A68_323  YSKASIM;  /* avoid structure result */
A68_341  ZSKASIM;  /* OPERATORS - mode -> union mode */
A68_366  ATKASIM;  /* avoid structure result */
 /* line 1516: */
{ 
QNJASIM_shiftrs(S, (&OSKASIM_i));
 /* line 1517: */
PSKASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
PSKASIM.Rs2 = FVEASIM_g0;
PSKASIM.Rd = GBHASIM_rdest(S, IMKASIM_tos2);
ISEASIM_using(LAEASIM_or, A_UNITE(QSKASIM,mode1,1,PSKASIM));
 /* line 1518: */
SWGASIM_givenn( IMKASIM_tos2, OSKASIM_i, &RSKASIM );
XWGASIM_changesizeof((&(S->Location_stack)), RSKASIM);
 /* line 1519: */
IIGASIM_inregister( A68_FALSE, &SSKASIM );
HWGASIM_given( IMKASIM_tos2, A_UNITE(TSKASIM,mode1,1,SSKASIM), &USKASIM );
MWGASIM_changestateof((&(S->Location_stack)), USKASIM);
 /* line 1520: */
VSKASIM.Rs1 = KBHASIM_rsource(S, EZGASIM_tos);
VSKASIM.Rs2 = FVEASIM_g0;
VSKASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(WSKASIM,mode1,1,VSKASIM));
 /* line 1521: */
SWGASIM_givenn( FZGASIM_tos1, 32, &XSKASIM );
XWGASIM_changesizeof((&(S->Location_stack)), XSKASIM);
 /* line 1522: */
IIGASIM_inregister( A68_FALSE, &YSKASIM );
HWGASIM_given( FZGASIM_tos1, A_UNITE(ZSKASIM,mode1,1,YSKASIM), &ATKASIM );
MWGASIM_changestateof((&(S->Location_stack)), ATKASIM);
 /* line 1523: */
 /* line 1524: */
IHHASIM_pop(S);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DTKASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((ETKASIM_anonymous *)NonLocals)->x)
{ 
A68_438  FTKASIM;  /* collateral clause result */
A68_424  GTKASIM;  /* OPERATORS - istruct to row */
A68_421  HTKASIM;  /* procedure value */
A68_421  ITKASIM;  /* procedure value */
A68_129  JTKASIM;  /* procedure value */
 /* line 1526: */
 /* line 1527: */
FTKASIM.data[0] = YBJASIM_q;
FTKASIM.data[1] = PBJASIM_bs;
FTKASIM.data[2] = XBJASIM_i;
 /* line 1528: */
HTKASIM.fn.fn_global = VJJASIM_nospace;
HTKASIM.nonlocals = A68_NIL;
ITKASIM.fn.fn_global = QNJASIM_shiftrs;
ITKASIM.nonlocals = A68_NIL;
JTKASIM.fn.fn_global = BAJASIM_sl_1;
JTKASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), HTKASIM, ITKASIM, JTKASIM, A_HIS1ARR(GTKASIM,FTKASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_BOOL  UTKASIM_anonymous(A68_375 * S)
{ 
A68_INT  VTKASIM_i;
A68_BOOL  WTKASIM;  /* optbool result */
A68_BOOL  XTKASIM;  /* clause result */
 /* line 1534: */
{ 
WTKASIM = QNJASIM_shiftrs(S, (&VTKASIM_i));
if ( WTKASIM )
{WTKASIM = (VTKASIM_i<=32);
}
XTKASIM = WTKASIM;
} 
return( XTKASIM );
} 
#undef NL

A_STATIC A68_VOID  ZTKASIM_anonymous(A68_375 * S)
{ 
A68_INT  AUKASIM_i;
A68_170  BUKASIM;  /* collateral clause result */
A68_172  CUKASIM;  /* OPERATORS - mode -> union mode */
A68_171  DUKASIM;  /* collateral clause result */
A68_172  EUKASIM;  /* OPERATORS - mode -> union mode */
A68_369  FUKASIM;  /* avoid structure result */
A68_323  GUKASIM;  /* avoid structure result */
A68_341  HUKASIM;  /* OPERATORS - mode -> union mode */
A68_366  IUKASIM;  /* avoid structure result */
A68_170  JUKASIM;  /* collateral clause result */
A68_172  KUKASIM;  /* OPERATORS - mode -> union mode */
A68_369  LUKASIM;  /* avoid structure result */
A68_323  MUKASIM;  /* avoid structure result */
A68_341  NUKASIM;  /* OPERATORS - mode -> union mode */
A68_366  OUKASIM;  /* avoid structure result */
 /* line 1536: */
{ 
QNJASIM_shiftrs(S, (&AUKASIM_i));
 /* line 1537: */
BUKASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
BUKASIM.Rs2 = FVEASIM_g0;
BUKASIM.Rd = GBHASIM_rdest(S, IMKASIM_tos2);
ISEASIM_using(LAEASIM_or, A_UNITE(CUKASIM,mode1,1,BUKASIM));
 /* line 1538: */
 /* line 1539: */
DUKASIM.Rs1 = GBHASIM_rdest(S, IMKASIM_tos2);
DUKASIM.Imm = (AUKASIM_i-BWGASIM_sizeof((&(S->Location_stack)), FZGASIM_tos1));
DUKASIM.Rd = GBHASIM_rdest(S, IMKASIM_tos2);
ISEASIM_using(DEEASIM_srl, A_UNITE(EUKASIM,mode2,2,DUKASIM));
 /* line 1540: */
SWGASIM_givenn( IMKASIM_tos2, AUKASIM_i, &FUKASIM );
XWGASIM_changesizeof((&(S->Location_stack)), FUKASIM);
 /* line 1541: */
IIGASIM_inregister( A68_FALSE, &GUKASIM );
HWGASIM_given( IMKASIM_tos2, A_UNITE(HUKASIM,mode1,1,GUKASIM), &IUKASIM );
MWGASIM_changestateof((&(S->Location_stack)), IUKASIM);
 /* line 1542: */
JUKASIM.Rs1 = KBHASIM_rsource(S, EZGASIM_tos);
JUKASIM.Rs2 = FVEASIM_g0;
JUKASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(KUKASIM,mode1,1,JUKASIM));
 /* line 1543: */
SWGASIM_givenn( FZGASIM_tos1, 32, &LUKASIM );
XWGASIM_changesizeof((&(S->Location_stack)), LUKASIM);
 /* line 1544: */
IIGASIM_inregister( A68_FALSE, &MUKASIM );
HWGASIM_given( FZGASIM_tos1, A_UNITE(NUKASIM,mode1,1,MUKASIM), &OUKASIM );
MWGASIM_changestateof((&(S->Location_stack)), OUKASIM);
 /* line 1545: */
 /* line 1546: */
IHHASIM_pop(S);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  RUKASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((SUKASIM_anonymous *)NonLocals)->x)
{ 
A68_438  TUKASIM;  /* collateral clause result */
A68_424  UUKASIM;  /* OPERATORS - istruct to row */
A68_421  VUKASIM;  /* procedure value */
A68_421  WUKASIM;  /* procedure value */
A68_129  XUKASIM;  /* procedure value */
 /* line 1548: */
 /* line 1549: */
TUKASIM.data[0] = YBJASIM_q;
TUKASIM.data[1] = PBJASIM_bs;
TUKASIM.data[2] = XBJASIM_i;
 /* line 1550: */
VUKASIM.fn.fn_global = VJJASIM_nospace;
VUKASIM.nonlocals = A68_NIL;
WUKASIM.fn.fn_global = QNJASIM_shiftrs;
WUKASIM.nonlocals = A68_NIL;
XUKASIM.fn.fn_global = CAJASIM_sr_us_1;
XUKASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), VUKASIM, WUKASIM, XUKASIM, A_HIS1ARR(UUKASIM,TUKASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_BOOL  IVKASIM_anonymous(A68_375 * S)
{ 
A68_INT  JVKASIM_i;
A68_BOOL  KVKASIM;  /* optbool result */
A68_BOOL  LVKASIM;  /* clause result */
 /* line 1556: */
{ 
KVKASIM = QNJASIM_shiftrs(S, (&JVKASIM_i));
if ( KVKASIM )
{KVKASIM = (JVKASIM_i<=32);
}
LVKASIM = KVKASIM;
} 
return( LVKASIM );
} 
#undef NL

A_STATIC A68_VOID  NVKASIM_anonymous(A68_375 * S)
{ 
A68_INT  OVKASIM_i;
A68_170  PVKASIM;  /* collateral clause result */
A68_172  QVKASIM;  /* OPERATORS - mode -> union mode */
A68_171  RVKASIM;  /* collateral clause result */
A68_172  SVKASIM;  /* OPERATORS - mode -> union mode */
A68_369  TVKASIM;  /* avoid structure result */
A68_323  UVKASIM;  /* avoid structure result */
A68_341  VVKASIM;  /* OPERATORS - mode -> union mode */
A68_366  WVKASIM;  /* avoid structure result */
A68_170  XVKASIM;  /* collateral clause result */
A68_172  YVKASIM;  /* OPERATORS - mode -> union mode */
A68_369  ZVKASIM;  /* avoid structure result */
A68_323  AWKASIM;  /* avoid structure result */
A68_341  BWKASIM;  /* OPERATORS - mode -> union mode */
A68_366  CWKASIM;  /* avoid structure result */
 /* line 1558: */
{ 
QNJASIM_shiftrs(S, (&OVKASIM_i));
 /* line 1559: */
PVKASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
PVKASIM.Rs2 = FVEASIM_g0;
PVKASIM.Rd = GBHASIM_rdest(S, IMKASIM_tos2);
ISEASIM_using(LAEASIM_or, A_UNITE(QVKASIM,mode1,1,PVKASIM));
 /* line 1560: */
 /* line 1561: */
RVKASIM.Rs1 = GBHASIM_rdest(S, IMKASIM_tos2);
RVKASIM.Imm = (OVKASIM_i-BWGASIM_sizeof((&(S->Location_stack)), FZGASIM_tos1));
RVKASIM.Rd = GBHASIM_rdest(S, IMKASIM_tos2);
ISEASIM_using(HEEASIM_sra, A_UNITE(SVKASIM,mode2,2,RVKASIM));
 /* line 1562: */
SWGASIM_givenn( IMKASIM_tos2, OVKASIM_i, &TVKASIM );
XWGASIM_changesizeof((&(S->Location_stack)), TVKASIM);
 /* line 1563: */
IIGASIM_inregister( A68_FALSE, &UVKASIM );
HWGASIM_given( IMKASIM_tos2, A_UNITE(VVKASIM,mode1,1,UVKASIM), &WVKASIM );
MWGASIM_changestateof((&(S->Location_stack)), WVKASIM);
 /* line 1564: */
XVKASIM.Rs1 = KBHASIM_rsource(S, EZGASIM_tos);
XVKASIM.Rs2 = FVEASIM_g0;
XVKASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(YVKASIM,mode1,1,XVKASIM));
 /* line 1565: */
SWGASIM_givenn( FZGASIM_tos1, 32, &ZVKASIM );
XWGASIM_changesizeof((&(S->Location_stack)), ZVKASIM);
 /* line 1566: */
IIGASIM_inregister( A68_FALSE, &AWKASIM );
HWGASIM_given( FZGASIM_tos1, A_UNITE(BWKASIM,mode1,1,AWKASIM), &CWKASIM );
MWGASIM_changestateof((&(S->Location_stack)), CWKASIM);
 /* line 1567: */
 /* line 1568: */
IHHASIM_pop(S);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  FWKASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((GWKASIM_anonymous *)NonLocals)->x)
{ 
A68_438  HWKASIM;  /* collateral clause result */
A68_424  IWKASIM;  /* OPERATORS - istruct to row */
A68_421  JWKASIM;  /* procedure value */
A68_421  KWKASIM;  /* procedure value */
A68_129  LWKASIM;  /* procedure value */
 /* line 1570: */
 /* line 1571: */
HWKASIM.data[0] = YBJASIM_q;
HWKASIM.data[1] = PBJASIM_bs;
HWKASIM.data[2] = XBJASIM_i;
 /* line 1572: */
JWKASIM.fn.fn_global = VJJASIM_nospace;
JWKASIM.nonlocals = A68_NIL;
KWKASIM.fn.fn_global = QNJASIM_shiftrs;
KWKASIM.nonlocals = A68_NIL;
LWKASIM.fn.fn_global = DAJASIM_sr_s_1;
LWKASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), JWKASIM, KWKASIM, LWKASIM, A_HIS1ARR(IWKASIM,HWKASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_BOOL  WWKASIM_anonymous(A68_375 * S)
{ 
A68_INT  XWKASIM_i;
A68_BOOL  YWKASIM;  /* clause result */
 /* line 1578: */
{ 
KOJASIM_plusrs(S, (&XWKASIM_i));
YWKASIM = (XWKASIM_i<=32);
} 
return( YWKASIM );
} 
#undef NL

A_STATIC A68_VOID  AXKASIM_anonymous(A68_375 * S)
{ 
A68_INT  BXKASIM_i;
A68_170  CXKASIM;  /* collateral clause result */
A68_172  DXKASIM;  /* OPERATORS - mode -> union mode */
A68_369  EXKASIM;  /* avoid structure result */
 /* line 1580: */
{ 
KOJASIM_plusrs(S, (&BXKASIM_i));
QWIASIM_stou(S, FZGASIM_tos1);
QWIASIM_stou(S, JMKASIM_tos3);
 /* line 1581: */
CXKASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
CXKASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
CXKASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(DAEASIM_add, A_UNITE(DXKASIM,mode1,1,CXKASIM));
 /* line 1582: */
SWGASIM_givenn( JMKASIM_tos3, BXKASIM_i, &EXKASIM );
XVIASIM_utos(S, EXKASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GXKASIM_anonymous(A68_375 * S)
{ 
A68_436  HXKASIM;  /* collateral clause result */
A68_424  IXKASIM;  /* OPERATORS - istruct to row */
A68_421  JXKASIM;  /* procedure value */
A68_421  KXKASIM;  /* procedure value */
A68_129  LXKASIM;  /* procedure value */
 /* line 1584: */
HXKASIM.data[0] = YBJASIM_q;
HXKASIM.data[1] = PBJASIM_bs;
HXKASIM.data[2] = YBJASIM_q;
HXKASIM.data[3] = PBJASIM_bs;
 /* line 1585: */
JXKASIM.fn.fn_global = XNJASIM_plusws;
JXKASIM.nonlocals = A68_NIL;
KXKASIM.fn.fn_global = KOJASIM_plusrs;
KXKASIM.nonlocals = A68_NIL;
LXKASIM.fn.fn_global = EZIASIM_plus_us_1;
LXKASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(S, JXKASIM, KXKASIM, LXKASIM, A_HIS1ARR(IXKASIM,HXKASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_BOOL  XXKASIM_anonymous(A68_375 * S)
{ 
A68_INT  YXKASIM_i;
A68_BOOL  ZXKASIM;  /* clause result */
 /* line 1591: */
{ 
KOJASIM_plusrs(S, (&YXKASIM_i));
ZXKASIM = (YXKASIM_i<=32);
} 
return( ZXKASIM );
} 
#undef NL

A_STATIC A68_VOID  BYKASIM_anonymous(A68_375 * S)
{ 
A68_INT  CYKASIM_i;
A68_170  DYKASIM;  /* collateral clause result */
A68_172  EYKASIM;  /* OPERATORS - mode -> union mode */
A68_369  FYKASIM;  /* avoid structure result */
 /* line 1593: */
{ 
KOJASIM_plusrs(S, (&CYKASIM_i));
QWIASIM_stou(S, FZGASIM_tos1);
QWIASIM_stou(S, JMKASIM_tos3);
 /* line 1594: */
DYKASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
DYKASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
DYKASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(TAEASIM_sub, A_UNITE(EYKASIM,mode1,1,DYKASIM));
 /* line 1595: */
SWGASIM_givenn( JMKASIM_tos3, CYKASIM_i, &FYKASIM );
XVIASIM_utos(S, FYKASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  HYKASIM_anonymous(A68_375 * S)
{ 
A68_436  IYKASIM;  /* collateral clause result */
A68_424  JYKASIM;  /* OPERATORS - istruct to row */
A68_421  KYKASIM;  /* procedure value */
A68_421  LYKASIM;  /* procedure value */
A68_129  MYKASIM;  /* procedure value */
 /* line 1597: */
IYKASIM.data[0] = YBJASIM_q;
IYKASIM.data[1] = PBJASIM_bs;
IYKASIM.data[2] = YBJASIM_q;
IYKASIM.data[3] = PBJASIM_bs;
 /* line 1598: */
KYKASIM.fn.fn_global = XNJASIM_plusws;
KYKASIM.nonlocals = A68_NIL;
LYKASIM.fn.fn_global = KOJASIM_plusrs;
LYKASIM.nonlocals = A68_NIL;
MYKASIM.fn.fn_global = FZIASIM_minus_us_1;
MYKASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(S, KYKASIM, LYKASIM, MYKASIM, A_HIS1ARR(JYKASIM,IYKASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_BOOL  YYKASIM_anonymous(A68_375 * S)
{ 
A68_INT  ZYKASIM_i;
A68_BOOL  AZKASIM;  /* clause result */
 /* line 1604: */
{ 
XQJASIM_negaters(S, (&ZYKASIM_i));
AZKASIM = (ZYKASIM_i<=32);
} 
return( AZKASIM );
} 
#undef NL

A_STATIC A68_VOID  CZKASIM_anonymous(A68_375 * S)
{ 
A68_INT  DZKASIM_i;
A68_170  EZKASIM;  /* collateral clause result */
A68_172  FZKASIM;  /* OPERATORS - mode -> union mode */
A68_369  GZKASIM;  /* avoid structure result */
 /* line 1606: */
{ 
XQJASIM_negaters(S, (&DZKASIM_i));
QWIASIM_stou(S, FZGASIM_tos1);
 /* line 1607: */
EZKASIM.Rs1 = FVEASIM_g0;
EZKASIM.Rs2 = KBHASIM_rsource(S, FZGASIM_tos1);
EZKASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(TAEASIM_sub, A_UNITE(FZKASIM,mode1,1,EZKASIM));
 /* line 1608: */
SWGASIM_givenn( FZGASIM_tos1, DZKASIM_i, &GZKASIM );
PVIASIM_itos(S, GZKASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  JZKASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((KZKASIM_anonymous *)NonLocals)->x)
{ 
A68_444  LZKASIM;  /* collateral clause result */
A68_424  MZKASIM;  /* OPERATORS - istruct to row */
A68_421  NZKASIM;  /* procedure value */
A68_421  OZKASIM;  /* procedure value */
A68_129  PZKASIM;  /* procedure value */
 /* line 1610: */
 /* line 1611: */
LZKASIM.data[0] = YBJASIM_q;
LZKASIM.data[1] = PBJASIM_bs;
 /* line 1612: */
NZKASIM.fn.fn_global = LQJASIM_negatews;
NZKASIM.nonlocals = A68_NIL;
OZKASIM.fn.fn_global = XQJASIM_negaters;
OZKASIM.nonlocals = A68_NIL;
PZKASIM.fn.fn_global = UZIASIM_negate_us_1;
PZKASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), NZKASIM, OZKASIM, PZKASIM, A_HIS1ARR(MZKASIM,LZKASIM,A68_INT ,2));
return;
} 
#undef NL

A_STATIC A68_BOOL  TBLASIM_anonymous(A68_375 * S)
{ 
A68_INT  UBLASIM_i;
A68_BOOL  VBLASIM;  /* clause result */
 /* line 1638: */
{ 
KOJASIM_plusrs(S, (&UBLASIM_i));
VBLASIM = (UBLASIM_i<=32);
} 
return( VBLASIM );
} 
#undef NL

A_STATIC A68_VOID  XBLASIM_anonymous(A68_375 * S)
{ 
A68_INT  YBLASIM_i;
A68_170  ZBLASIM;  /* collateral clause result */
A68_172  ACLASIM;  /* OPERATORS - mode -> union mode */
A68_369  BCLASIM;  /* avoid structure result */
 /* line 1640: */
{ 
KOJASIM_plusrs(S, (&YBLASIM_i));
AWIASIM_stoi(S, FZGASIM_tos1);
AWIASIM_stoi(S, JMKASIM_tos3);
 /* line 1641: */
ZBLASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
ZBLASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
ZBLASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(DAEASIM_add, A_UNITE(ACLASIM,mode1,1,ZBLASIM));
 /* line 1642: */
SWGASIM_givenn( JMKASIM_tos3, YBLASIM_i, &BCLASIM );
PVIASIM_itos(S, BCLASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ECLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((FCLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  GCLASIM;  /* collateral clause result */
A68_424  HCLASIM;  /* OPERATORS - istruct to row */
A68_421  ICLASIM;  /* procedure value */
A68_421  JCLASIM;  /* procedure value */
A68_129  KCLASIM;  /* procedure value */
 /* line 1644: */
 /* line 1645: */
GCLASIM.data[0] = YBJASIM_q;
GCLASIM.data[1] = PBJASIM_bs;
GCLASIM.data[2] = YBJASIM_q;
GCLASIM.data[3] = PBJASIM_bs;
 /* line 1646: */
ICLASIM.fn.fn_global = XNJASIM_plusws;
ICLASIM.nonlocals = A68_NIL;
JCLASIM.fn.fn_global = KOJASIM_plusrs;
JCLASIM.nonlocals = A68_NIL;
KCLASIM.fn.fn_global = GZIASIM_plus_s_1;
KCLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), ICLASIM, JCLASIM, KCLASIM, A_HIS1ARR(HCLASIM,GCLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_BOOL  VCLASIM_anonymous(A68_375 * S)
{ 
A68_INT  WCLASIM_i;
A68_BOOL  XCLASIM;  /* clause result */
 /* line 1652: */
{ 
KOJASIM_plusrs(S, (&WCLASIM_i));
XCLASIM = (WCLASIM_i<=32);
} 
return( XCLASIM );
} 
#undef NL

A_STATIC A68_VOID  ZCLASIM_anonymous(A68_375 * S)
{ 
A68_INT  ADLASIM_i;
A68_170  BDLASIM;  /* collateral clause result */
A68_172  CDLASIM;  /* OPERATORS - mode -> union mode */
A68_369  DDLASIM;  /* avoid structure result */
 /* line 1654: */
{ 
KOJASIM_plusrs(S, (&ADLASIM_i));
AWIASIM_stoi(S, FZGASIM_tos1);
AWIASIM_stoi(S, JMKASIM_tos3);
 /* line 1655: */
BDLASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
BDLASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
BDLASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(TAEASIM_sub, A_UNITE(CDLASIM,mode1,1,BDLASIM));
 /* line 1656: */
SWGASIM_givenn( JMKASIM_tos3, ADLASIM_i, &DDLASIM );
PVIASIM_itos(S, DDLASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  FDLASIM_anonymous(A68_375 * S)
{ 
A68_436  GDLASIM;  /* collateral clause result */
A68_424  HDLASIM;  /* OPERATORS - istruct to row */
A68_421  IDLASIM;  /* procedure value */
A68_421  JDLASIM;  /* procedure value */
A68_129  KDLASIM;  /* procedure value */
 /* line 1658: */
GDLASIM.data[0] = YBJASIM_q;
GDLASIM.data[1] = PBJASIM_bs;
GDLASIM.data[2] = YBJASIM_q;
GDLASIM.data[3] = PBJASIM_bs;
 /* line 1659: */
IDLASIM.fn.fn_global = XNJASIM_plusws;
IDLASIM.nonlocals = A68_NIL;
JDLASIM.fn.fn_global = KOJASIM_plusrs;
JDLASIM.nonlocals = A68_NIL;
KDLASIM.fn.fn_global = HZIASIM_minus_s_1;
KDLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(S, IDLASIM, JDLASIM, KDLASIM, A_HIS1ARR(HDLASIM,GDLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_BOOL  WDLASIM_anonymous(A68_375 * S)
{ 
A68_INT  XDLASIM_i;
A68_BOOL  YDLASIM;  /* clause result */
 /* line 1665: */
{ 
XQJASIM_negaters(S, (&XDLASIM_i));
YDLASIM = (XDLASIM_i<=32);
} 
return( YDLASIM );
} 
#undef NL

A_STATIC A68_VOID  AELASIM_anonymous(A68_375 * S)
{ 
A68_INT  BELASIM_i;
A68_170  CELASIM;  /* collateral clause result */
A68_172  DELASIM;  /* OPERATORS - mode -> union mode */
A68_369  EELASIM;  /* avoid structure result */
 /* line 1667: */
{ 
XQJASIM_negaters(S, (&BELASIM_i));
AWIASIM_stoi(S, FZGASIM_tos1);
 /* line 1668: */
CELASIM.Rs1 = FVEASIM_g0;
CELASIM.Rs2 = KBHASIM_rsource(S, FZGASIM_tos1);
CELASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(TAEASIM_sub, A_UNITE(DELASIM,mode1,1,CELASIM));
 /* line 1669: */
SWGASIM_givenn( FZGASIM_tos1, BELASIM_i, &EELASIM );
PVIASIM_itos(S, EELASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  HELASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((IELASIM_anonymous *)NonLocals)->x)
{ 
A68_444  JELASIM;  /* collateral clause result */
A68_424  KELASIM;  /* OPERATORS - istruct to row */
A68_421  LELASIM;  /* procedure value */
A68_421  MELASIM;  /* procedure value */
A68_129  NELASIM;  /* procedure value */
 /* line 1671: */
 /* line 1672: */
JELASIM.data[0] = YBJASIM_q;
JELASIM.data[1] = PBJASIM_bs;
 /* line 1673: */
LELASIM.fn.fn_global = LQJASIM_negatews;
LELASIM.nonlocals = A68_NIL;
MELASIM.fn.fn_global = XQJASIM_negaters;
MELASIM.nonlocals = A68_NIL;
NELASIM.fn.fn_global = TZIASIM_negate_s_1;
NELASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), LELASIM, MELASIM, NELASIM, A_HIS1ARR(KELASIM,JELASIM,A68_INT ,2));
return;
} 
#undef NL

A_STATIC A68_BOOL  YELASIM_anonymous(A68_375 * S)
{ 
A68_INT  ZELASIM_i;
A68_BOOL  AFLASIM;  /* clause result */
 /* line 1679: */
{ 
DLJASIM_bslogicalrs(S, (&ZELASIM_i));
AFLASIM = (ZELASIM_i<=32);
} 
return( AFLASIM );
} 
#undef NL

A_STATIC A68_VOID  CFLASIM_anonymous(A68_375 * S)
{ 
A68_INT  DFLASIM_i;
A68_170  EFLASIM;  /* collateral clause result */
A68_172  FFLASIM;  /* OPERATORS - mode -> union mode */
A68_164  GFLASIM_over;
A68_191  HFLASIM;  /* avoid structure result */
A68_170  IFLASIM;  /* collateral clause result */
A68_172  JFLASIM;  /* OPERATORS - mode -> union mode */
A68_369  KFLASIM;  /* avoid structure result */
 /* line 1681: */
{ 
DLJASIM_bslogicalrs(S, (&DFLASIM_i));
AWIASIM_stoi(S, FZGASIM_tos1);
 /* line 1682: */
EFLASIM.Rs1 = FVEASIM_g0;
EFLASIM.Rs2 = KBHASIM_rsource(S, FZGASIM_tos1);
EFLASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(FFLASIM,mode1,1,EFLASIM));
 /* line 1683: */
 /* line 1684: */
AYDASIM_( RZDASIM_bd, ZWDASIM_neg_a, &HFLASIM );
ASEASIM_using(HFLASIM, (&GFLASIM_over));
 /* line 1685: */
IFLASIM.Rs1 = NEGASIM_tempreg1;
IFLASIM.Rs2 = FVEASIM_g0;
IFLASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(JFLASIM,mode1,1,IFLASIM));
 /* line 1686: */
TXEASIM_fixmachinelabel(GFLASIM_over);
 /* line 1687: */
SWGASIM_givenn( FZGASIM_tos1, DFLASIM_i, &KFLASIM );
XVIASIM_utos(S, KFLASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  NFLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((OFLASIM_anonymous *)NonLocals)->x)
{ 
A68_444  PFLASIM;  /* collateral clause result */
A68_424  QFLASIM;  /* OPERATORS - istruct to row */
A68_421  RFLASIM;  /* procedure value */
A68_421  SFLASIM;  /* procedure value */
A68_129  TFLASIM;  /* procedure value */
 /* line 1689: */
 /* line 1690: */
PFLASIM.data[0] = YBJASIM_q;
PFLASIM.data[1] = PBJASIM_bs;
 /* line 1691: */
RFLASIM.fn.fn_global = LKJASIM_bslogicalws;
RFLASIM.nonlocals = A68_NIL;
SFLASIM.fn.fn_global = DLJASIM_bslogicalrs;
SFLASIM.nonlocals = A68_NIL;
TFLASIM.fn.fn_global = SZIASIM_abs_s_1;
TFLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), RFLASIM, SFLASIM, TFLASIM, A_HIS1ARR(QFLASIM,PFLASIM,A68_INT ,2));
return;
} 
#undef NL

A_STATIC A68_VOID  JILASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1722: */
{ 
QWIASIM_stou(Sa, FZGASIM_tos1);
QWIASIM_stou(Sa, JMKASIM_tos3);
 /* line 1723: */
 /* line 1724: */
GJKASIM_eixeirelation(Sa, YVDASIM_eq);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  MILASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((NILASIM_anonymous *)NonLocals)->x)
{ 
A68_436  OILASIM;  /* collateral clause result */
A68_424  PILASIM;  /* OPERATORS - istruct to row */
A68_421  QILASIM;  /* procedure value */
A68_129  RILASIM;  /* procedure value */
 /* line 1726: */
 /* line 1727: */
OILASIM.data[0] = YBJASIM_q;
OILASIM.data[1] = PBJASIM_bs;
OILASIM.data[2] = YBJASIM_q;
OILASIM.data[3] = PBJASIM_bs;
 /* line 1728: */
QILASIM.fn.fn_global = XNJASIM_plusws;
QILASIM.nonlocals = A68_NIL;
RILASIM.fn.fn_global = IAJASIM_eq_us_1;
RILASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), QILASIM, RILASIM, A_HIS1ARR(PILASIM,OILASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  CJLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1734: */
{ 
QWIASIM_stou(Sa, FZGASIM_tos1);
QWIASIM_stou(Sa, JMKASIM_tos3);
 /* line 1735: */
 /* line 1736: */
GJKASIM_eixeirelation(Sa, MWDASIM_gu);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  FJLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((GJLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  HJLASIM;  /* collateral clause result */
A68_424  IJLASIM;  /* OPERATORS - istruct to row */
A68_421  JJLASIM;  /* procedure value */
A68_129  KJLASIM;  /* procedure value */
 /* line 1738: */
 /* line 1739: */
HJLASIM.data[0] = YBJASIM_q;
HJLASIM.data[1] = PBJASIM_bs;
HJLASIM.data[2] = YBJASIM_q;
HJLASIM.data[3] = PBJASIM_bs;
 /* line 1740: */
JJLASIM.fn.fn_global = XNJASIM_plusws;
JJLASIM.nonlocals = A68_NIL;
KJLASIM.fn.fn_global = QZIASIM_gt_us_1;
KJLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), JJLASIM, KJLASIM, A_HIS1ARR(IJLASIM,HJLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  VJLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1746: */
{ 
QWIASIM_stou(Sa, FZGASIM_tos1);
QWIASIM_stou(Sa, JMKASIM_tos3);
 /* line 1747: */
 /* line 1748: */
GJKASIM_eixeirelation(Sa, NWDASIM_geu);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  YJLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((ZJLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  AKLASIM;  /* collateral clause result */
A68_424  BKLASIM;  /* OPERATORS - istruct to row */
A68_421  CKLASIM;  /* procedure value */
A68_129  DKLASIM;  /* procedure value */
 /* line 1750: */
 /* line 1751: */
AKLASIM.data[0] = YBJASIM_q;
AKLASIM.data[1] = PBJASIM_bs;
AKLASIM.data[2] = YBJASIM_q;
AKLASIM.data[3] = PBJASIM_bs;
 /* line 1752: */
CKLASIM.fn.fn_global = XNJASIM_plusws;
CKLASIM.nonlocals = A68_NIL;
DKLASIM.fn.fn_global = MAJASIM_ge_us_1;
DKLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), CKLASIM, DKLASIM, A_HIS1ARR(BKLASIM,AKLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  OKLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1758: */
{ 
QWIASIM_stou(Sa, FZGASIM_tos1);
QWIASIM_stou(Sa, JMKASIM_tos3);
 /* line 1759: */
 /* line 1760: */
GJKASIM_eixeirelation(Sa, DWDASIM_lu);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  RKLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((SKLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  TKLASIM;  /* collateral clause result */
A68_424  UKLASIM;  /* OPERATORS - istruct to row */
A68_421  VKLASIM;  /* procedure value */
A68_129  WKLASIM;  /* procedure value */
 /* line 1762: */
 /* line 1763: */
TKLASIM.data[0] = YBJASIM_q;
TKLASIM.data[1] = PBJASIM_bs;
TKLASIM.data[2] = YBJASIM_q;
TKLASIM.data[3] = PBJASIM_bs;
 /* line 1764: */
VKLASIM.fn.fn_global = XNJASIM_plusws;
VKLASIM.nonlocals = A68_NIL;
WKLASIM.fn.fn_global = OZIASIM_lt_us_1;
WKLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), VKLASIM, WKLASIM, A_HIS1ARR(UKLASIM,TKLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  HLLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1770: */
{ 
QWIASIM_stou(Sa, FZGASIM_tos1);
QWIASIM_stou(Sa, JMKASIM_tos3);
 /* line 1771: */
 /* line 1772: */
GJKASIM_eixeirelation(Sa, CWDASIM_leu);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  KLLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((LLLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  MLLASIM;  /* collateral clause result */
A68_424  NLLASIM;  /* OPERATORS - istruct to row */
A68_421  OLLASIM;  /* procedure value */
A68_129  PLLASIM;  /* procedure value */
 /* line 1774: */
 /* line 1775: */
MLLASIM.data[0] = YBJASIM_q;
MLLASIM.data[1] = PBJASIM_bs;
MLLASIM.data[2] = YBJASIM_q;
MLLASIM.data[3] = PBJASIM_bs;
 /* line 1776: */
OLLASIM.fn.fn_global = XNJASIM_plusws;
OLLASIM.nonlocals = A68_NIL;
PLLASIM.fn.fn_global = KAJASIM_le_us_1;
PLLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), OLLASIM, PLLASIM, A_HIS1ARR(NLLASIM,MLLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  AMLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1782: */
{ 
AWIASIM_stoi(Sa, FZGASIM_tos1);
AWIASIM_stoi(Sa, JMKASIM_tos3);
 /* line 1783: */
 /* line 1784: */
GJKASIM_eixeirelation(Sa, YVDASIM_eq);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DMLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((EMLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  FMLASIM;  /* collateral clause result */
A68_424  GMLASIM;  /* OPERATORS - istruct to row */
A68_421  HMLASIM;  /* procedure value */
A68_129  IMLASIM;  /* procedure value */
 /* line 1786: */
 /* line 1787: */
FMLASIM.data[0] = YBJASIM_q;
FMLASIM.data[1] = PBJASIM_bs;
FMLASIM.data[2] = YBJASIM_q;
FMLASIM.data[3] = PBJASIM_bs;
 /* line 1788: */
HMLASIM.fn.fn_global = XNJASIM_plusws;
HMLASIM.nonlocals = A68_NIL;
IMLASIM.fn.fn_global = JAJASIM_eq_s_1;
IMLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), HMLASIM, IMLASIM, A_HIS1ARR(GMLASIM,FMLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  TMLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1794: */
{ 
AWIASIM_stoi(Sa, FZGASIM_tos1);
AWIASIM_stoi(Sa, JMKASIM_tos3);
 /* line 1795: */
 /* line 1796: */
GJKASIM_eixeirelation(Sa, KWDASIM_g);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  WMLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((XMLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  YMLASIM;  /* collateral clause result */
A68_424  ZMLASIM;  /* OPERATORS - istruct to row */
A68_421  ANLASIM;  /* procedure value */
A68_129  BNLASIM;  /* procedure value */
 /* line 1798: */
 /* line 1799: */
YMLASIM.data[0] = YBJASIM_q;
YMLASIM.data[1] = PBJASIM_bs;
YMLASIM.data[2] = YBJASIM_q;
YMLASIM.data[3] = PBJASIM_bs;
 /* line 1800: */
ANLASIM.fn.fn_global = XNJASIM_plusws;
ANLASIM.nonlocals = A68_NIL;
BNLASIM.fn.fn_global = RZIASIM_gt_s_1;
BNLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), ANLASIM, BNLASIM, A_HIS1ARR(ZMLASIM,YMLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  MNLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1806: */
{ 
AWIASIM_stoi(Sa, FZGASIM_tos1);
AWIASIM_stoi(Sa, JMKASIM_tos3);
 /* line 1807: */
 /* line 1808: */
GJKASIM_eixeirelation(Sa, LWDASIM_ge);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  PNLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((QNLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  RNLASIM;  /* collateral clause result */
A68_424  SNLASIM;  /* OPERATORS - istruct to row */
A68_421  TNLASIM;  /* procedure value */
A68_129  UNLASIM;  /* procedure value */
 /* line 1810: */
 /* line 1811: */
RNLASIM.data[0] = YBJASIM_q;
RNLASIM.data[1] = PBJASIM_bs;
RNLASIM.data[2] = YBJASIM_q;
RNLASIM.data[3] = PBJASIM_bs;
 /* line 1812: */
TNLASIM.fn.fn_global = XNJASIM_plusws;
TNLASIM.nonlocals = A68_NIL;
UNLASIM.fn.fn_global = NAJASIM_ge_s_1;
UNLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), TNLASIM, UNLASIM, A_HIS1ARR(SNLASIM,RNLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  FOLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1818: */
{ 
AWIASIM_stoi(Sa, FZGASIM_tos1);
AWIASIM_stoi(Sa, JMKASIM_tos3);
 /* line 1819: */
 /* line 1820: */
GJKASIM_eixeirelation(Sa, BWDASIM_l);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  IOLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((JOLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  KOLASIM;  /* collateral clause result */
A68_424  LOLASIM;  /* OPERATORS - istruct to row */
A68_421  MOLASIM;  /* procedure value */
A68_129  NOLASIM;  /* procedure value */
 /* line 1822: */
 /* line 1823: */
KOLASIM.data[0] = YBJASIM_q;
KOLASIM.data[1] = PBJASIM_bs;
KOLASIM.data[2] = YBJASIM_q;
KOLASIM.data[3] = PBJASIM_bs;
 /* line 1824: */
MOLASIM.fn.fn_global = XNJASIM_plusws;
MOLASIM.nonlocals = A68_NIL;
NOLASIM.fn.fn_global = PZIASIM_lt_s_1;
NOLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), MOLASIM, NOLASIM, A_HIS1ARR(LOLASIM,KOLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  YOLASIM_anonymous(A68_375 * Sa)
{ 
 /* line 1830: */
{ 
AWIASIM_stoi(Sa, FZGASIM_tos1);
AWIASIM_stoi(Sa, JMKASIM_tos3);
 /* line 1831: */
 /* line 1832: */
GJKASIM_eixeirelation(Sa, AWDASIM_le);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  BPLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((CPLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  DPLASIM;  /* collateral clause result */
A68_424  EPLASIM;  /* OPERATORS - istruct to row */
A68_421  FPLASIM;  /* procedure value */
A68_129  GPLASIM;  /* procedure value */
 /* line 1834: */
 /* line 1835: */
DPLASIM.data[0] = YBJASIM_q;
DPLASIM.data[1] = PBJASIM_bs;
DPLASIM.data[2] = YBJASIM_q;
DPLASIM.data[3] = PBJASIM_bs;
 /* line 1836: */
FPLASIM.fn.fn_global = XNJASIM_plusws;
FPLASIM.nonlocals = A68_NIL;
GPLASIM.fn.fn_global = LAJASIM_le_s_1;
GPLASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(NL(Ams), FPLASIM, GPLASIM, A_HIS1ARR(EPLASIM,DPLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  NQLASIM_anonymous(A68_375 * S)
{ 
A68_170  OQLASIM;  /* collateral clause result */
A68_172  PQLASIM;  /* OPERATORS - mode -> union mode */
 /* line 1852: */
OQLASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
OQLASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
 /* line 1853: */
OQLASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(HAEASIM_and, A_UNITE(PQLASIM,mode1,1,OQLASIM));
return;
} 
#undef NL

A_STATIC A68_VOID  RQLASIM_anonymous(A68_375 * S)
{ 
A68_436  SQLASIM;  /* collateral clause result */
A68_424  TQLASIM;  /* OPERATORS - istruct to row */
A68_421  UQLASIM;  /* procedure value */
A68_421  VQLASIM;  /* procedure value */
A68_129  WQLASIM;  /* procedure value */
 /* line 1855: */
 /* line 1856: */
SQLASIM.data[0] = YBJASIM_q;
SQLASIM.data[1] = PBJASIM_bs;
SQLASIM.data[2] = YBJASIM_q;
SQLASIM.data[3] = PBJASIM_bs;
 /* line 1857: */
UQLASIM.fn.fn_global = ZJJASIM_bsxbslogicalws;
UQLASIM.nonlocals = A68_NIL;
VQLASIM.fn.fn_global = XKJASIM_bsxbslogicalrs;
VQLASIM.nonlocals = A68_NIL;
WQLASIM.fn.fn_global = XZIASIM_and_1;
WQLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(S, UQLASIM, VQLASIM, WQLASIM, A_HIS1ARR(TQLASIM,SQLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  IRLASIM_anonymous(A68_375 * S)
{ 
A68_170  JRLASIM;  /* collateral clause result */
A68_172  KRLASIM;  /* OPERATORS - mode -> union mode */
 /* line 1863: */
JRLASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
JRLASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
JRLASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(LAEASIM_or, A_UNITE(KRLASIM,mode1,1,JRLASIM));
return;
} 
#undef NL

A_STATIC A68_VOID  MRLASIM_anonymous(A68_375 * S)
{ 
A68_436  NRLASIM;  /* collateral clause result */
A68_424  ORLASIM;  /* OPERATORS - istruct to row */
A68_421  PRLASIM;  /* procedure value */
A68_421  QRLASIM;  /* procedure value */
A68_129  RRLASIM;  /* procedure value */
 /* line 1865: */
 /* line 1866: */
NRLASIM.data[0] = YBJASIM_q;
NRLASIM.data[1] = PBJASIM_bs;
NRLASIM.data[2] = YBJASIM_q;
NRLASIM.data[3] = PBJASIM_bs;
 /* line 1867: */
PRLASIM.fn.fn_global = ZJJASIM_bsxbslogicalws;
PRLASIM.nonlocals = A68_NIL;
QRLASIM.fn.fn_global = XKJASIM_bsxbslogicalrs;
QRLASIM.nonlocals = A68_NIL;
RRLASIM.fn.fn_global = YZIASIM_or_1;
RRLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(S, PRLASIM, QRLASIM, RRLASIM, A_HIS1ARR(ORLASIM,NRLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_BOOL  DSLASIM_anonymous(A68_375 * S)
{ 
A68_INT  ESLASIM_i;
A68_BOOL  FSLASIM;  /* clause result */
 /* line 1873: */
{ 
TOJASIM_notrs(S, (&ESLASIM_i));
FSLASIM = (ESLASIM_i<=32);
} 
return( FSLASIM );
} 
#undef NL

A_STATIC A68_VOID  HSLASIM_anonymous(A68_375 * S)
{ 
A68_170  ISLASIM;  /* collateral clause result */
A68_172  JSLASIM;  /* OPERATORS - mode -> union mode */
A68_INT  KSLASIM_i;
A68_369  LSLASIM;  /* avoid structure result */
 /* line 1876: */
{ 
ISLASIM.Rs1 = FVEASIM_g0;
ISLASIM.Rs2 = KBHASIM_rsource(S, FZGASIM_tos1);
ISLASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(FBEASIM_xnor, A_UNITE(JSLASIM,mode1,1,ISLASIM));
 /* line 1877: */
TOJASIM_notrs(S, (&KSLASIM_i));
QWIASIM_stou(S, FZGASIM_tos1);
 /* line 1878: */
SWGASIM_givenn( FZGASIM_tos1, KSLASIM_i, &LSLASIM );
XVIASIM_utos(S, LSLASIM);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  OSLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((PSLASIM_anonymous *)NonLocals)->x)
{ 
A68_444  QSLASIM;  /* collateral clause result */
A68_424  RSLASIM;  /* OPERATORS - istruct to row */
A68_421  SSLASIM;  /* procedure value */
A68_421  TSLASIM;  /* procedure value */
A68_129  USLASIM;  /* procedure value */
 /* line 1880: */
 /* line 1881: */
QSLASIM.data[0] = YBJASIM_q;
QSLASIM.data[1] = PBJASIM_bs;
 /* line 1882: */
SSLASIM.fn.fn_global = VJJASIM_nospace;
SSLASIM.nonlocals = A68_NIL;
TSLASIM.fn.fn_global = TOJASIM_notrs;
TSLASIM.nonlocals = A68_NIL;
USLASIM.fn.fn_global = ZZIASIM_not_1;
USLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), SSLASIM, TSLASIM, USLASIM, A_HIS1ARR(RSLASIM,QSLASIM,A68_INT ,2));
return;
} 
#undef NL

A_STATIC A68_VOID  FTLASIM_anonymous(A68_375 * S)
{ 
A68_170  GTLASIM;  /* collateral clause result */
A68_172  HTLASIM;  /* OPERATORS - mode -> union mode */
 /* line 1888: */
GTLASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
GTLASIM.Rs2 = KBHASIM_rsource(S, JMKASIM_tos3);
GTLASIM.Rd = GBHASIM_rdest(S, JMKASIM_tos3);
ISEASIM_using(PAEASIM_xor, A_UNITE(HTLASIM,mode1,1,GTLASIM));
return;
} 
#undef NL

A_STATIC A68_VOID  KTLASIM_anonymous(A68_375 * S, void *NonLocals)
#define NL(x) (((LTLASIM_anonymous *)NonLocals)->x)
{ 
A68_436  MTLASIM;  /* collateral clause result */
A68_424  NTLASIM;  /* OPERATORS - istruct to row */
A68_421  OTLASIM;  /* procedure value */
A68_421  PTLASIM;  /* procedure value */
A68_129  QTLASIM;  /* procedure value */
 /* line 1890: */
 /* line 1891: */
MTLASIM.data[0] = YBJASIM_q;
MTLASIM.data[1] = PBJASIM_bs;
MTLASIM.data[2] = YBJASIM_q;
MTLASIM.data[3] = PBJASIM_bs;
 /* line 1892: */
OTLASIM.fn.fn_global = ZJJASIM_bsxbslogicalws;
OTLASIM.nonlocals = A68_NIL;
PTLASIM.fn.fn_global = XKJASIM_bsxbslogicalrs;
PTLASIM.nonlocals = A68_NIL;
QTLASIM.fn.fn_global = AAJASIM_xor_1;
QTLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(NL(Ams), OTLASIM, PTLASIM, QTLASIM, A_HIS1ARR(NTLASIM,MTLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  ADJASIM_generator(A68_BOOL  ZCJASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  BDJASIM;  /* clause result */
A68_32  CDJASIM;  /* OPERATORS - dynamic generator */
{ 
CDJASIM.upb = 100 ;
( ZCJASIM_anonymous? A_VLOC(A68_INT ,CDJASIM): A_VHEAP(A68_INT ,CDJASIM) );
BDJASIM = CDJASIM;
} 
*ReturnedValue = (BDJASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NEJASIM_generator(A68_BOOL  LEJASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((OEJASIM_generator *)NonLocals)->x)
{ 
A68_32  PEJASIM;  /* clause result */
A68_32  QEJASIM;  /* OPERATORS - dynamic generator */
{ 
QEJASIM.upb = ((*(&(NL(S)->Locations))).upb+100) ;
( LEJASIM_anonymous? A_VLOC(A68_INT ,QEJASIM): A_VHEAP(A68_INT ,QEJASIM) );
PEJASIM = QEJASIM;
} 
*ReturnedValue = (PEJASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MMKASIM_generator(A68_BOOL  LMKASIM_anonymous, A68_430  *ReturnedValue)
{ 
A68_430  NMKASIM;  /* clause result */
A68_430  OMKASIM;  /* OPERATORS - dynamic generator */
{ 
OMKASIM.dim[0].upb = 77 ;
OMKASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(OMKASIM) ;
( LMKASIM_anonymous? A_R1LOC(A68_428 ,OMKASIM): A_R1HEAP(A68_428 ,OMKASIM) );
NMKASIM = OMKASIM;
} 
*ReturnedValue = (NMKASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UMKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1447: */
 /* line 1448: */
GJKASIM_eixeirelation(Ams, YVDASIM_eq);
return;
} 
#undef NL

A_STATIC A68_VOID  BNKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1450: */
 /* line 1451: */
GJKASIM_eixeirelation(Ams, KWDASIM_g);
return;
} 
#undef NL

A_STATIC A68_VOID  INKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1453: */
 /* line 1454: */
GJKASIM_eixeirelation(Ams, LWDASIM_ge);
return;
} 
#undef NL

A_STATIC A68_VOID  PNKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1456: */
 /* line 1457: */
GJKASIM_eixeirelation(Ams, BWDASIM_l);
return;
} 
#undef NL

A_STATIC A68_VOID  WNKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1459: */
 /* line 1460: */
GJKASIM_eixeirelation(Ams, AWDASIM_le);
return;
} 
#undef NL

A_STATIC A68_VOID  DOKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1462: */
 /* line 1463: */
AKKASIM_eexeerelation(Ams, YVDASIM_eq);
return;
} 
#undef NL

A_STATIC A68_VOID  KOKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1465: */
 /* line 1466: */
AKKASIM_eexeerelation(Ams, MWDASIM_gu);
return;
} 
#undef NL

A_STATIC A68_VOID  ROKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1468: */
 /* line 1469: */
AKKASIM_eexeerelation(Ams, NWDASIM_geu);
return;
} 
#undef NL

A_STATIC A68_VOID  YOKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1471: */
 /* line 1472: */
AKKASIM_eexeerelation(Ams, DWDASIM_lu);
return;
} 
#undef NL

A_STATIC A68_VOID  FPKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1474: */
 /* line 1475: */
AKKASIM_eexeerelation(Ams, CWDASIM_leu);
return;
} 
#undef NL

A_STATIC A68_VOID  MPKASIM_anonymous(A68_375 * Ams)
{ 
A68_434  NPKASIM;  /* collateral clause result */
A68_424  OPKASIM;  /* OPERATORS - istruct to row */
A68_421  PPKASIM;  /* procedure value */
A68_129  QPKASIM;  /* procedure value */
 /* line 1478: */
 /* line 1479: */
NPKASIM.data[0] = YBJASIM_q;
NPKASIM.data[1] = PBJASIM_bs;
NPKASIM.data[2] = XBJASIM_i;
NPKASIM.data[3] = XBJASIM_i;
NPKASIM.data[4] = ZBJASIM_r;
 /* line 1480: */
PPKASIM.fn.fn_global = VJJASIM_nospace;
PPKASIM.nonlocals = A68_NIL;
QPKASIM.fn.fn_global = EAJASIM_transform_us_1;
QPKASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, PPKASIM, QPKASIM, A_HIS1ARR(OPKASIM,NPKASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  XPKASIM_anonymous(A68_375 * Ams)
{ 
A68_434  YPKASIM;  /* collateral clause result */
A68_424  ZPKASIM;  /* OPERATORS - istruct to row */
A68_421  AQKASIM;  /* procedure value */
A68_129  BQKASIM;  /* procedure value */
 /* line 1483: */
 /* line 1484: */
YPKASIM.data[0] = YBJASIM_q;
YPKASIM.data[1] = PBJASIM_bs;
YPKASIM.data[2] = XBJASIM_i;
YPKASIM.data[3] = XBJASIM_i;
YPKASIM.data[4] = ZBJASIM_r;
 /* line 1485: */
AQKASIM.fn.fn_global = VJJASIM_nospace;
AQKASIM.nonlocals = A68_NIL;
BQKASIM.fn.fn_global = FAJASIM_transform_s_1;
BQKASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, AQKASIM, BQKASIM, A_HIS1ARR(ZPKASIM,YPKASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  IQKASIM_anonymous(A68_375 * Ams)
{ 
A68_436  JQKASIM;  /* collateral clause result */
A68_424  KQKASIM;  /* OPERATORS - istruct to row */
A68_421  LQKASIM;  /* procedure value */
A68_129  MQKASIM;  /* procedure value */
 /* line 1488: */
 /* line 1489: */
JQKASIM.data[0] = YBJASIM_q;
JQKASIM.data[1] = TBJASIM_ei;
JQKASIM.data[2] = XBJASIM_i;
JQKASIM.data[3] = ZBJASIM_r;
 /* line 1490: */
LQKASIM.fn.fn_global = VJJASIM_nospace;
LQKASIM.nonlocals = A68_NIL;
MQKASIM.fn.fn_global = GAJASIM_transform_us_2;
MQKASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, LQKASIM, MQKASIM, A_HIS1ARR(KQKASIM,JQKASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  TQKASIM_anonymous(A68_375 * Ams)
{ 
A68_436  UQKASIM;  /* collateral clause result */
A68_424  VQKASIM;  /* OPERATORS - istruct to row */
A68_421  WQKASIM;  /* procedure value */
A68_129  XQKASIM;  /* procedure value */
 /* line 1493: */
 /* line 1494: */
UQKASIM.data[0] = YBJASIM_q;
UQKASIM.data[1] = TBJASIM_ei;
UQKASIM.data[2] = XBJASIM_i;
UQKASIM.data[3] = ZBJASIM_r;
 /* line 1495: */
WQKASIM.fn.fn_global = VJJASIM_nospace;
WQKASIM.nonlocals = A68_NIL;
XQKASIM.fn.fn_global = HAJASIM_transform_s_2;
XQKASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, WQKASIM, XQKASIM, A_HIS1ARR(VQKASIM,UQKASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  ERKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1497: */
 /* line 1498: */
TGKASIM_tvxtvand_2(Ams);
return;
} 
#undef NL

A_STATIC A68_VOID  LRKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1500: */
 /* line 1501: */
NHKASIM_tvxtvor_2(Ams);
return;
} 
#undef NL

A_STATIC A68_VOID  SRKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1504: */
 /* line 1505: */
HIKASIM_tvxtvnot_2(Ams);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRKASIM_anonymous(A68_375 * Ams)
{ 
 /* line 1508: */
 /* line 1509: */
AKKASIM_eexeerelation(Ams, IWDASIM_ne);
return;
} 
#undef NL

A_STATIC A68_VOID  GSKASIM_anonymous(A68_375 * Ams)
{ 
A68_381  CTKASIM_anonymous;   /* proc value of non-global proc */
A68_383  KTKASIM;  /* procedure value */
A68_381  LTKASIM;  /* procedure value */
 /* line 1512: */
 /* line 1513: */
 /* line 1515: */
 /* line 1525: */
A_CLOSURE( CTKASIM_anonymous, DTKASIM_anonymous, ETKASIM_anonymous );
(( ETKASIM_anonymous * ) ( CTKASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1529: */
KTKASIM.fn.fn_global = ISKASIM_anonymous;
KTKASIM.nonlocals = A68_NIL;
LTKASIM.fn.fn_global = NSKASIM_anonymous;
LTKASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, KTKASIM, LTKASIM, CTKASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  STKASIM_anonymous(A68_375 * Ams)
{ 
A68_381  QUKASIM_anonymous;   /* proc value of non-global proc */
A68_383  YUKASIM;  /* procedure value */
A68_381  ZUKASIM;  /* procedure value */
 /* line 1532: */
 /* line 1533: */
 /* line 1535: */
 /* line 1547: */
A_CLOSURE( QUKASIM_anonymous, RUKASIM_anonymous, SUKASIM_anonymous );
(( SUKASIM_anonymous * ) ( QUKASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1551: */
YUKASIM.fn.fn_global = UTKASIM_anonymous;
YUKASIM.nonlocals = A68_NIL;
ZUKASIM.fn.fn_global = ZTKASIM_anonymous;
ZUKASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, YUKASIM, ZUKASIM, QUKASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  GVKASIM_anonymous(A68_375 * Ams)
{ 
A68_381  EWKASIM_anonymous;   /* proc value of non-global proc */
A68_383  MWKASIM;  /* procedure value */
A68_381  NWKASIM;  /* procedure value */
 /* line 1554: */
 /* line 1555: */
 /* line 1557: */
 /* line 1569: */
A_CLOSURE( EWKASIM_anonymous, FWKASIM_anonymous, GWKASIM_anonymous );
(( GWKASIM_anonymous * ) ( EWKASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1573: */
MWKASIM.fn.fn_global = IVKASIM_anonymous;
MWKASIM.nonlocals = A68_NIL;
NWKASIM.fn.fn_global = NVKASIM_anonymous;
NWKASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, MWKASIM, NWKASIM, EWKASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  UWKASIM_anonymous(A68_375 * Ams)
{ 
A68_383  MXKASIM;  /* procedure value */
A68_381  NXKASIM;  /* procedure value */
A68_381  OXKASIM;  /* procedure value */
 /* line 1576: */
 /* line 1577: */
 /* line 1579: */
 /* line 1583: */
 /* line 1586: */
MXKASIM.fn.fn_global = WWKASIM_anonymous;
MXKASIM.nonlocals = A68_NIL;
NXKASIM.fn.fn_global = AXKASIM_anonymous;
NXKASIM.nonlocals = A68_NIL;
OXKASIM.fn.fn_global = GXKASIM_anonymous;
OXKASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, MXKASIM, NXKASIM, OXKASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VXKASIM_anonymous(A68_375 * Ams)
{ 
A68_383  NYKASIM;  /* procedure value */
A68_381  OYKASIM;  /* procedure value */
A68_381  PYKASIM;  /* procedure value */
 /* line 1589: */
 /* line 1590: */
 /* line 1592: */
 /* line 1596: */
 /* line 1599: */
NYKASIM.fn.fn_global = XXKASIM_anonymous;
NYKASIM.nonlocals = A68_NIL;
OYKASIM.fn.fn_global = BYKASIM_anonymous;
OYKASIM.nonlocals = A68_NIL;
PYKASIM.fn.fn_global = HYKASIM_anonymous;
PYKASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, NYKASIM, OYKASIM, PYKASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WYKASIM_anonymous(A68_375 * Ams)
{ 
A68_381  IZKASIM_anonymous;   /* proc value of non-global proc */
A68_383  QZKASIM;  /* procedure value */
A68_381  RZKASIM;  /* procedure value */
 /* line 1602: */
 /* line 1603: */
 /* line 1605: */
 /* line 1609: */
A_CLOSURE( IZKASIM_anonymous, JZKASIM_anonymous, KZKASIM_anonymous );
(( KZKASIM_anonymous * ) ( IZKASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1613: */
QZKASIM.fn.fn_global = YYKASIM_anonymous;
QZKASIM.nonlocals = A68_NIL;
RZKASIM.fn.fn_global = CZKASIM_anonymous;
RZKASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, QZKASIM, RZKASIM, IZKASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  YZKASIM_anonymous(A68_375 * Ams)
{ 
A68_436  ZZKASIM;  /* collateral clause result */
A68_424  AALASIM;  /* OPERATORS - istruct to row */
A68_421  BALASIM;  /* procedure value */
A68_421  CALASIM;  /* procedure value */
A68_129  DALASIM;  /* procedure value */
 /* line 1616: */
 /* line 1617: */
ZZKASIM.data[0] = YBJASIM_q;
ZZKASIM.data[1] = PBJASIM_bs;
ZZKASIM.data[2] = YBJASIM_q;
ZZKASIM.data[3] = PBJASIM_bs;
 /* line 1618: */
BALASIM.fn.fn_global = PMJASIM_timesws;
BALASIM.nonlocals = A68_NIL;
CALASIM.fn.fn_global = IMJASIM_timesrs;
CALASIM.nonlocals = A68_NIL;
DALASIM.fn.fn_global = IZIASIM_times_us_1;
DALASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(Ams, BALASIM, CALASIM, DALASIM, A_HIS1ARR(AALASIM,ZZKASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  KALASIM_anonymous(A68_375 * Ams)
{ 
A68_434  LALASIM;  /* collateral clause result */
A68_424  MALASIM;  /* OPERATORS - istruct to row */
A68_421  NALASIM;  /* procedure value */
A68_129  OALASIM;  /* procedure value */
 /* line 1621: */
 /* line 1622: */
LALASIM.data[0] = YBJASIM_q;
LALASIM.data[1] = PBJASIM_bs;
LALASIM.data[2] = YBJASIM_q;
LALASIM.data[3] = PBJASIM_bs;
LALASIM.data[4] = ZBJASIM_r;
 /* line 1623: */
NALASIM.fn.fn_global = JLJASIM_dividews;
NALASIM.nonlocals = A68_NIL;
OALASIM.fn.fn_global = LZIASIM_divide_us_1;
OALASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, NALASIM, OALASIM, A_HIS1ARR(MALASIM,LALASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  VALASIM_anonymous(A68_375 * Ams)
{ 
A68_434  WALASIM;  /* collateral clause result */
A68_424  XALASIM;  /* OPERATORS - istruct to row */
A68_421  YALASIM;  /* procedure value */
A68_129  ZALASIM;  /* procedure value */
 /* line 1626: */
 /* line 1627: */
WALASIM.data[0] = YBJASIM_q;
WALASIM.data[1] = PBJASIM_bs;
WALASIM.data[2] = YBJASIM_q;
WALASIM.data[3] = PBJASIM_bs;
WALASIM.data[4] = ZBJASIM_r;
 /* line 1628: */
YALASIM.fn.fn_global = USJASIM_modws;
YALASIM.nonlocals = A68_NIL;
ZALASIM.fn.fn_global = WZIASIM_mod_us_1;
ZALASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, YALASIM, ZALASIM, A_HIS1ARR(XALASIM,WALASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  GBLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  HBLASIM;  /* collateral clause result */
A68_424  IBLASIM;  /* OPERATORS - istruct to row */
A68_421  JBLASIM;  /* procedure value */
A68_129  KBLASIM;  /* procedure value */
 /* line 1631: */
 /* line 1632: */
HBLASIM.data[0] = YBJASIM_q;
HBLASIM.data[1] = PBJASIM_bs;
HBLASIM.data[2] = XBJASIM_i;
HBLASIM.data[3] = ZBJASIM_r;
 /* line 1633: */
JBLASIM.fn.fn_global = VJJASIM_nospace;
JBLASIM.nonlocals = A68_NIL;
KBLASIM.fn.fn_global = MZIASIM_range_us_1;
KBLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, JBLASIM, KBLASIM, A_HIS1ARR(IBLASIM,HBLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  RBLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  DCLASIM_anonymous;   /* proc value of non-global proc */
A68_383  LCLASIM;  /* procedure value */
A68_381  MCLASIM;  /* procedure value */
 /* line 1636: */
 /* line 1637: */
 /* line 1639: */
 /* line 1643: */
A_CLOSURE( DCLASIM_anonymous, ECLASIM_anonymous, FCLASIM_anonymous );
(( FCLASIM_anonymous * ) ( DCLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1647: */
LCLASIM.fn.fn_global = TBLASIM_anonymous;
LCLASIM.nonlocals = A68_NIL;
MCLASIM.fn.fn_global = XBLASIM_anonymous;
MCLASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, LCLASIM, MCLASIM, DCLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  TCLASIM_anonymous(A68_375 * Ams)
{ 
A68_383  LDLASIM;  /* procedure value */
A68_381  MDLASIM;  /* procedure value */
A68_381  NDLASIM;  /* procedure value */
 /* line 1650: */
 /* line 1651: */
 /* line 1653: */
 /* line 1657: */
 /* line 1660: */
LDLASIM.fn.fn_global = VCLASIM_anonymous;
LDLASIM.nonlocals = A68_NIL;
MDLASIM.fn.fn_global = ZCLASIM_anonymous;
MDLASIM.nonlocals = A68_NIL;
NDLASIM.fn.fn_global = FDLASIM_anonymous;
NDLASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, LDLASIM, MDLASIM, NDLASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UDLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  GELASIM_anonymous;   /* proc value of non-global proc */
A68_383  OELASIM;  /* procedure value */
A68_381  PELASIM;  /* procedure value */
 /* line 1663: */
 /* line 1664: */
 /* line 1666: */
 /* line 1670: */
A_CLOSURE( GELASIM_anonymous, HELASIM_anonymous, IELASIM_anonymous );
(( IELASIM_anonymous * ) ( GELASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1674: */
OELASIM.fn.fn_global = WDLASIM_anonymous;
OELASIM.nonlocals = A68_NIL;
PELASIM.fn.fn_global = AELASIM_anonymous;
PELASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, OELASIM, PELASIM, GELASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  WELASIM_anonymous(A68_375 * Ams)
{ 
A68_381  MFLASIM_anonymous;   /* proc value of non-global proc */
A68_383  UFLASIM;  /* procedure value */
A68_381  VFLASIM;  /* procedure value */
 /* line 1677: */
 /* line 1678: */
 /* line 1680: */
 /* line 1688: */
A_CLOSURE( MFLASIM_anonymous, NFLASIM_anonymous, OFLASIM_anonymous );
(( OFLASIM_anonymous * ) ( MFLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1692: */
UFLASIM.fn.fn_global = YELASIM_anonymous;
UFLASIM.nonlocals = A68_NIL;
VFLASIM.fn.fn_global = CFLASIM_anonymous;
VFLASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, UFLASIM, VFLASIM, MFLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  CGLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  DGLASIM;  /* collateral clause result */
A68_424  EGLASIM;  /* OPERATORS - istruct to row */
A68_421  FGLASIM;  /* procedure value */
A68_421  GGLASIM;  /* procedure value */
A68_129  HGLASIM;  /* procedure value */
 /* line 1695: */
 /* line 1696: */
DGLASIM.data[0] = YBJASIM_q;
DGLASIM.data[1] = PBJASIM_bs;
DGLASIM.data[2] = YBJASIM_q;
DGLASIM.data[3] = PBJASIM_bs;
 /* line 1697: */
FGLASIM.fn.fn_global = PMJASIM_timesws;
FGLASIM.nonlocals = A68_NIL;
GGLASIM.fn.fn_global = IMJASIM_timesrs;
GGLASIM.nonlocals = A68_NIL;
HGLASIM.fn.fn_global = JZIASIM_times_s_1;
HGLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(Ams, FGLASIM, GGLASIM, HGLASIM, A_HIS1ARR(EGLASIM,DGLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  OGLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  PGLASIM;  /* collateral clause result */
A68_424  QGLASIM;  /* OPERATORS - istruct to row */
A68_421  RGLASIM;  /* procedure value */
A68_129  SGLASIM;  /* procedure value */
 /* line 1700: */
 /* line 1701: */
PGLASIM.data[0] = YBJASIM_q;
PGLASIM.data[1] = PBJASIM_bs;
PGLASIM.data[2] = YBJASIM_q;
PGLASIM.data[3] = PBJASIM_bs;
PGLASIM.data[4] = ZBJASIM_r;
 /* line 1702: */
RGLASIM.fn.fn_global = JLJASIM_dividews;
RGLASIM.nonlocals = A68_NIL;
SGLASIM.fn.fn_global = KZIASIM_divide_s_1;
SGLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, RGLASIM, SGLASIM, A_HIS1ARR(QGLASIM,PGLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  ZGLASIM_anonymous(A68_375 * Ams)
{ 
A68_444  AHLASIM;  /* collateral clause result */
A68_424  BHLASIM;  /* OPERATORS - istruct to row */
A68_421  CHLASIM;  /* procedure value */
A68_421  DHLASIM;  /* procedure value */
A68_129  EHLASIM;  /* procedure value */
 /* line 1705: */
 /* line 1706: */
AHLASIM.data[0] = YBJASIM_q;
AHLASIM.data[1] = PBJASIM_bs;
 /* line 1707: */
CHLASIM.fn.fn_global = FRJASIM_sqrtws;
CHLASIM.nonlocals = A68_NIL;
DHLASIM.fn.fn_global = KSJASIM_sqrtrs;
DHLASIM.nonlocals = A68_NIL;
EHLASIM.fn.fn_global = OAJASIM_sqrt_us_1;
EHLASIM.nonlocals = A68_NIL;
KZJASIM_oolbiopbs(Ams, CHLASIM, DHLASIM, EHLASIM, A_HIS1ARR(BHLASIM,AHLASIM,A68_INT ,2));
return;
} 
#undef NL

A_STATIC A68_VOID  LHLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  MHLASIM;  /* collateral clause result */
A68_424  NHLASIM;  /* OPERATORS - istruct to row */
A68_421  OHLASIM;  /* procedure value */
A68_129  PHLASIM;  /* procedure value */
 /* line 1710: */
 /* line 1711: */
MHLASIM.data[0] = YBJASIM_q;
MHLASIM.data[1] = PBJASIM_bs;
MHLASIM.data[2] = YBJASIM_q;
MHLASIM.data[3] = PBJASIM_bs;
MHLASIM.data[4] = ZBJASIM_r;
 /* line 1712: */
OHLASIM.fn.fn_global = USJASIM_modws;
OHLASIM.nonlocals = A68_NIL;
PHLASIM.fn.fn_global = VZIASIM_mod_s_1;
PHLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, OHLASIM, PHLASIM, A_HIS1ARR(NHLASIM,MHLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  WHLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  XHLASIM;  /* collateral clause result */
A68_424  YHLASIM;  /* OPERATORS - istruct to row */
A68_421  ZHLASIM;  /* procedure value */
A68_129  AILASIM;  /* procedure value */
 /* line 1715: */
 /* line 1716: */
XHLASIM.data[0] = YBJASIM_q;
XHLASIM.data[1] = PBJASIM_bs;
XHLASIM.data[2] = XBJASIM_i;
XHLASIM.data[3] = ZBJASIM_r;
 /* line 1717: */
ZHLASIM.fn.fn_global = VJJASIM_nospace;
ZHLASIM.nonlocals = A68_NIL;
AILASIM.fn.fn_global = NZIASIM_range_s_1;
AILASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, ZHLASIM, AILASIM, A_HIS1ARR(YHLASIM,XHLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  HILASIM_anonymous(A68_375 * Ams)
{ 
A68_381  LILASIM_anonymous;   /* proc value of non-global proc */
A68_383  SILASIM;  /* procedure value */
A68_381  TILASIM;  /* procedure value */
 /* line 1720: */
 /* line 1721: */
 /* line 1725: */
A_CLOSURE( LILASIM_anonymous, MILASIM_anonymous, NILASIM_anonymous );
(( NILASIM_anonymous * ) ( LILASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1729: */
SILASIM.fn.fn_global = FMKASIM_alwaysoptimise;
SILASIM.nonlocals = A68_NIL;
TILASIM.fn.fn_global = JILASIM_anonymous;
TILASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, SILASIM, TILASIM, LILASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  AJLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  EJLASIM_anonymous;   /* proc value of non-global proc */
A68_383  LJLASIM;  /* procedure value */
A68_381  MJLASIM;  /* procedure value */
 /* line 1732: */
 /* line 1733: */
 /* line 1737: */
A_CLOSURE( EJLASIM_anonymous, FJLASIM_anonymous, GJLASIM_anonymous );
(( GJLASIM_anonymous * ) ( EJLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1741: */
LJLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
LJLASIM.nonlocals = A68_NIL;
MJLASIM.fn.fn_global = CJLASIM_anonymous;
MJLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, LJLASIM, MJLASIM, EJLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  TJLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  XJLASIM_anonymous;   /* proc value of non-global proc */
A68_383  EKLASIM;  /* procedure value */
A68_381  FKLASIM;  /* procedure value */
 /* line 1744: */
 /* line 1745: */
 /* line 1749: */
A_CLOSURE( XJLASIM_anonymous, YJLASIM_anonymous, ZJLASIM_anonymous );
(( ZJLASIM_anonymous * ) ( XJLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1753: */
EKLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
EKLASIM.nonlocals = A68_NIL;
FKLASIM.fn.fn_global = VJLASIM_anonymous;
FKLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, EKLASIM, FKLASIM, XJLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  MKLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  QKLASIM_anonymous;   /* proc value of non-global proc */
A68_383  XKLASIM;  /* procedure value */
A68_381  YKLASIM;  /* procedure value */
 /* line 1756: */
 /* line 1757: */
 /* line 1761: */
A_CLOSURE( QKLASIM_anonymous, RKLASIM_anonymous, SKLASIM_anonymous );
(( SKLASIM_anonymous * ) ( QKLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1765: */
XKLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
XKLASIM.nonlocals = A68_NIL;
YKLASIM.fn.fn_global = OKLASIM_anonymous;
YKLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, XKLASIM, YKLASIM, QKLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  FLLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  JLLASIM_anonymous;   /* proc value of non-global proc */
A68_383  QLLASIM;  /* procedure value */
A68_381  RLLASIM;  /* procedure value */
 /* line 1768: */
 /* line 1769: */
 /* line 1773: */
A_CLOSURE( JLLASIM_anonymous, KLLASIM_anonymous, LLLASIM_anonymous );
(( LLLASIM_anonymous * ) ( JLLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1777: */
QLLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
QLLASIM.nonlocals = A68_NIL;
RLLASIM.fn.fn_global = HLLASIM_anonymous;
RLLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, QLLASIM, RLLASIM, JLLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  YLLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  CMLASIM_anonymous;   /* proc value of non-global proc */
A68_383  JMLASIM;  /* procedure value */
A68_381  KMLASIM;  /* procedure value */
 /* line 1780: */
 /* line 1781: */
 /* line 1785: */
A_CLOSURE( CMLASIM_anonymous, DMLASIM_anonymous, EMLASIM_anonymous );
(( EMLASIM_anonymous * ) ( CMLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1789: */
JMLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
JMLASIM.nonlocals = A68_NIL;
KMLASIM.fn.fn_global = AMLASIM_anonymous;
KMLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, JMLASIM, KMLASIM, CMLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  RMLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  VMLASIM_anonymous;   /* proc value of non-global proc */
A68_383  CNLASIM;  /* procedure value */
A68_381  DNLASIM;  /* procedure value */
 /* line 1792: */
 /* line 1793: */
 /* line 1797: */
A_CLOSURE( VMLASIM_anonymous, WMLASIM_anonymous, XMLASIM_anonymous );
(( XMLASIM_anonymous * ) ( VMLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1801: */
CNLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
CNLASIM.nonlocals = A68_NIL;
DNLASIM.fn.fn_global = TMLASIM_anonymous;
DNLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, CNLASIM, DNLASIM, VMLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  KNLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  ONLASIM_anonymous;   /* proc value of non-global proc */
A68_383  VNLASIM;  /* procedure value */
A68_381  WNLASIM;  /* procedure value */
 /* line 1804: */
 /* line 1805: */
 /* line 1809: */
A_CLOSURE( ONLASIM_anonymous, PNLASIM_anonymous, QNLASIM_anonymous );
(( QNLASIM_anonymous * ) ( ONLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1813: */
VNLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
VNLASIM.nonlocals = A68_NIL;
WNLASIM.fn.fn_global = MNLASIM_anonymous;
WNLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, VNLASIM, WNLASIM, ONLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  DOLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  HOLASIM_anonymous;   /* proc value of non-global proc */
A68_383  OOLASIM;  /* procedure value */
A68_381  POLASIM;  /* procedure value */
 /* line 1816: */
 /* line 1817: */
 /* line 1821: */
A_CLOSURE( HOLASIM_anonymous, IOLASIM_anonymous, JOLASIM_anonymous );
(( JOLASIM_anonymous * ) ( HOLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1825: */
OOLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
OOLASIM.nonlocals = A68_NIL;
POLASIM.fn.fn_global = FOLASIM_anonymous;
POLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, OOLASIM, POLASIM, HOLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  WOLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  APLASIM_anonymous;   /* proc value of non-global proc */
A68_383  HPLASIM;  /* procedure value */
A68_381  IPLASIM;  /* procedure value */
 /* line 1828: */
 /* line 1829: */
 /* line 1833: */
A_CLOSURE( APLASIM_anonymous, BPLASIM_anonymous, CPLASIM_anonymous );
(( CPLASIM_anonymous * ) ( APLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1837: */
HPLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
HPLASIM.nonlocals = A68_NIL;
IPLASIM.fn.fn_global = YOLASIM_anonymous;
IPLASIM.nonlocals = A68_NIL;
ZLKASIM_optbiopbsxbstv(Ams, HPLASIM, IPLASIM, APLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  PPLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  QPLASIM;  /* collateral clause result */
A68_424  RPLASIM;  /* OPERATORS - istruct to row */
A68_421  SPLASIM;  /* procedure value */
A68_129  TPLASIM;  /* procedure value */
 /* line 1840: */
 /* line 1841: */
QPLASIM.data[0] = YBJASIM_q;
QPLASIM.data[1] = PBJASIM_bs;
QPLASIM.data[2] = XBJASIM_i;
QPLASIM.data[3] = ZBJASIM_r;
 /* line 1842: */
SPLASIM.fn.fn_global = ZOJASIM_convert_1ws;
SPLASIM.nonlocals = A68_NIL;
TPLASIM.fn.fn_global = PAJASIM_convert_us_1;
TPLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, SPLASIM, TPLASIM, A_HIS1ARR(RPLASIM,QPLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  AQLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  BQLASIM;  /* collateral clause result */
A68_424  CQLASIM;  /* OPERATORS - istruct to row */
A68_421  DQLASIM;  /* procedure value */
A68_129  EQLASIM;  /* procedure value */
 /* line 1845: */
 /* line 1846: */
BQLASIM.data[0] = YBJASIM_q;
BQLASIM.data[1] = UBJASIM_ds;
BQLASIM.data[2] = XBJASIM_i;
BQLASIM.data[3] = ZBJASIM_r;
 /* line 1847: */
DQLASIM.fn.fn_global = QPJASIM_convert_2ws;
DQLASIM.nonlocals = A68_NIL;
EQLASIM.fn.fn_global = QAJASIM_convert_us_2;
EQLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, DQLASIM, EQLASIM, A_HIS1ARR(CQLASIM,BQLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  LQLASIM_anonymous(A68_375 * Ams)
{ 
A68_383  XQLASIM;  /* procedure value */
A68_381  YQLASIM;  /* procedure value */
A68_381  ZQLASIM;  /* procedure value */
 /* line 1850: */
 /* line 1851: */
 /* line 1854: */
 /* line 1858: */
XQLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
XQLASIM.nonlocals = A68_NIL;
YQLASIM.fn.fn_global = NQLASIM_anonymous;
YQLASIM.nonlocals = A68_NIL;
ZQLASIM.fn.fn_global = RQLASIM_anonymous;
ZQLASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, XQLASIM, YQLASIM, ZQLASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GRLASIM_anonymous(A68_375 * Ams)
{ 
A68_383  SRLASIM;  /* procedure value */
A68_381  TRLASIM;  /* procedure value */
A68_381  URLASIM;  /* procedure value */
 /* line 1861: */
 /* line 1862: */
 /* line 1864: */
 /* line 1868: */
SRLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
SRLASIM.nonlocals = A68_NIL;
TRLASIM.fn.fn_global = IRLASIM_anonymous;
TRLASIM.nonlocals = A68_NIL;
URLASIM.fn.fn_global = MRLASIM_anonymous;
URLASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, SRLASIM, TRLASIM, URLASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BSLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  NSLASIM_anonymous;   /* proc value of non-global proc */
A68_383  VSLASIM;  /* procedure value */
A68_381  WSLASIM;  /* procedure value */
 /* line 1871: */
 /* line 1872: */
 /* line 1874: */
 /* line 1879: */
A_CLOSURE( NSLASIM_anonymous, OSLASIM_anonymous, PSLASIM_anonymous );
(( PSLASIM_anonymous * ) ( NSLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1883: */
VSLASIM.fn.fn_global = DSLASIM_anonymous;
VSLASIM.nonlocals = A68_NIL;
WSLASIM.fn.fn_global = HSLASIM_anonymous;
WSLASIM.nonlocals = A68_NIL;
JLKASIM_optbiopbsbs(Ams, VSLASIM, WSLASIM, NSLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  DTLASIM_anonymous(A68_375 * Ams)
{ 
A68_381  JTLASIM_anonymous;   /* proc value of non-global proc */
A68_383  RTLASIM;  /* procedure value */
A68_381  STLASIM;  /* procedure value */
 /* line 1886: */
 /* line 1887: */
 /* line 1889: */
A_CLOSURE( JTLASIM_anonymous, KTLASIM_anonymous, LTLASIM_anonymous );
(( LTLASIM_anonymous * ) ( JTLASIM_anonymous.nonlocals )) -> Ams = Ams;
 /* line 1893: */
RTLASIM.fn.fn_global = FMKASIM_alwaysoptimise;
RTLASIM.nonlocals = A68_NIL;
STLASIM.fn.fn_global = FTLASIM_anonymous;
STLASIM.nonlocals = A68_NIL;
YKKASIM_optbiopbsxbsbs(Ams, RTLASIM, STLASIM, JTLASIM_anonymous);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTLASIM_anonymous(A68_375 * Ams)
{ 
A68_447  AULASIM;  /* collateral clause result */
A68_424  BULASIM;  /* OPERATORS - istruct to row */
A68_421  CULASIM;  /* procedure value */
A68_129  DULASIM;  /* procedure value */
 /* line 1896: */
 /* line 1897: */
AULASIM.data[0] = YBJASIM_q;
AULASIM.data[1] = PBJASIM_bs;
AULASIM.data[2] = YBJASIM_q;
AULASIM.data[3] = PBJASIM_bs;
AULASIM.data[4] = XBJASIM_i;
AULASIM.data[5] = XBJASIM_i;
AULASIM.data[6] = ZBJASIM_r;
 /* line 1898: */
CULASIM.fn.fn_global = TTJASIM_convert_real_1ws;
CULASIM.nonlocals = A68_NIL;
DULASIM.fn.fn_global = TAJASIM_convert_real_1;
DULASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, CULASIM, DULASIM, A_HIS1ARR(BULASIM,AULASIM,A68_INT ,7));
return;
} 
#undef NL

A_STATIC A68_VOID  KULASIM_anonymous(A68_375 * Ams)
{ 
A68_447  LULASIM;  /* collateral clause result */
A68_424  MULASIM;  /* OPERATORS - istruct to row */
A68_421  NULASIM;  /* procedure value */
A68_129  OULASIM;  /* procedure value */
 /* line 1901: */
 /* line 1902: */
LULASIM.data[0] = YBJASIM_q;
LULASIM.data[1] = UBJASIM_ds;
LULASIM.data[2] = YBJASIM_q;
LULASIM.data[3] = PBJASIM_bs;
LULASIM.data[4] = XBJASIM_i;
LULASIM.data[5] = XBJASIM_i;
LULASIM.data[6] = ZBJASIM_r;
 /* line 1903: */
NULASIM.fn.fn_global = RUJASIM_convert_real_2ws;
NULASIM.nonlocals = A68_NIL;
OULASIM.fn.fn_global = UAJASIM_convert_real_2;
OULASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, NULASIM, OULASIM, A_HIS1ARR(MULASIM,LULASIM,A68_INT ,7));
return;
} 
#undef NL

A_STATIC A68_VOID  VULASIM_anonymous(A68_375 * Ams)
{ 
A68_438  WULASIM;  /* collateral clause result */
A68_424  XULASIM;  /* OPERATORS - istruct to row */
A68_421  YULASIM;  /* procedure value */
A68_129  ZULASIM;  /* procedure value */
 /* line 1906: */
 /* line 1907: */
WULASIM.data[0] = YBJASIM_q;
WULASIM.data[1] = UBJASIM_ds;
WULASIM.data[2] = ZBJASIM_r;
 /* line 1908: */
YULASIM.fn.fn_global = VJJASIM_nospace;
YULASIM.nonlocals = A68_NIL;
ZULASIM.fn.fn_global = VAJASIM_f_to_r_1;
ZULASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, YULASIM, ZULASIM, A_HIS1ARR(XULASIM,WULASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_VOID  GVLASIM_anonymous(A68_375 * Ams)
{ 
A68_438  HVLASIM;  /* collateral clause result */
A68_424  IVLASIM;  /* OPERATORS - istruct to row */
A68_421  JVLASIM;  /* procedure value */
A68_129  KVLASIM;  /* procedure value */
 /* line 1911: */
 /* line 1912: */
HVLASIM.data[0] = YBJASIM_q;
HVLASIM.data[1] = UBJASIM_ds;
HVLASIM.data[2] = ZBJASIM_r;
 /* line 1913: */
JVLASIM.fn.fn_global = VJJASIM_nospace;
JVLASIM.nonlocals = A68_NIL;
KVLASIM.fn.fn_global = WAJASIM_f_to_r_2;
KVLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, JVLASIM, KVLASIM, A_HIS1ARR(IVLASIM,HVLASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_VOID  RVLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  SVLASIM;  /* collateral clause result */
A68_424  TVLASIM;  /* OPERATORS - istruct to row */
A68_421  UVLASIM;  /* procedure value */
A68_129  VVLASIM;  /* procedure value */
 /* line 1916: */
 /* line 1917: */
SVLASIM.data[0] = YBJASIM_q;
SVLASIM.data[1] = VBJASIM_sr;
SVLASIM.data[2] = XBJASIM_i;
SVLASIM.data[3] = ZBJASIM_r;
 /* line 1918: */
UVLASIM.fn.fn_global = VJJASIM_nospace;
UVLASIM.nonlocals = A68_NIL;
VVLASIM.fn.fn_global = XAJASIM_r_to_f_1;
VVLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, UVLASIM, VVLASIM, A_HIS1ARR(TVLASIM,SVLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  CWLASIM_anonymous(A68_375 * Ams)
{ 
A68_436  DWLASIM;  /* collateral clause result */
A68_424  EWLASIM;  /* OPERATORS - istruct to row */
A68_421  FWLASIM;  /* procedure value */
A68_129  GWLASIM;  /* procedure value */
 /* line 1921: */
 /* line 1922: */
DWLASIM.data[0] = YBJASIM_q;
DWLASIM.data[1] = WBJASIM_lr;
DWLASIM.data[2] = XBJASIM_i;
DWLASIM.data[3] = ZBJASIM_r;
 /* line 1923: */
FWLASIM.fn.fn_global = VJJASIM_nospace;
FWLASIM.nonlocals = A68_NIL;
GWLASIM.fn.fn_global = YAJASIM_r_to_f_2;
GWLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, FWLASIM, GWLASIM, A_HIS1ARR(EWLASIM,DWLASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  NWLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  OWLASIM;  /* collateral clause result */
A68_424  PWLASIM;  /* OPERATORS - istruct to row */
A68_421  QWLASIM;  /* procedure value */
A68_129  RWLASIM;  /* procedure value */
 /* line 1926: */
 /* line 1927: */
OWLASIM.data[0] = YBJASIM_q;
OWLASIM.data[1] = VBJASIM_sr;
OWLASIM.data[2] = YBJASIM_q;
OWLASIM.data[3] = VBJASIM_sr;
OWLASIM.data[4] = ZBJASIM_r;
 /* line 1928: */
QWLASIM.fn.fn_global = VJJASIM_nospace;
QWLASIM.nonlocals = A68_NIL;
RWLASIM.fn.fn_global = LBJASIM_plus_real_1;
RWLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, QWLASIM, RWLASIM, A_HIS1ARR(PWLASIM,OWLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  YWLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  ZWLASIM;  /* collateral clause result */
A68_424  AXLASIM;  /* OPERATORS - istruct to row */
A68_421  BXLASIM;  /* procedure value */
A68_129  CXLASIM;  /* procedure value */
 /* line 1931: */
 /* line 1932: */
ZWLASIM.data[0] = YBJASIM_q;
ZWLASIM.data[1] = WBJASIM_lr;
ZWLASIM.data[2] = YBJASIM_q;
ZWLASIM.data[3] = WBJASIM_lr;
ZWLASIM.data[4] = ZBJASIM_r;
 /* line 1933: */
BXLASIM.fn.fn_global = VJJASIM_nospace;
BXLASIM.nonlocals = A68_NIL;
CXLASIM.fn.fn_global = MBJASIM_plus_real_2;
CXLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, BXLASIM, CXLASIM, A_HIS1ARR(AXLASIM,ZWLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  JXLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  KXLASIM;  /* collateral clause result */
A68_424  LXLASIM;  /* OPERATORS - istruct to row */
A68_421  MXLASIM;  /* procedure value */
A68_129  NXLASIM;  /* procedure value */
 /* line 1936: */
 /* line 1937: */
KXLASIM.data[0] = YBJASIM_q;
KXLASIM.data[1] = VBJASIM_sr;
KXLASIM.data[2] = YBJASIM_q;
KXLASIM.data[3] = VBJASIM_sr;
KXLASIM.data[4] = ZBJASIM_r;
 /* line 1938: */
MXLASIM.fn.fn_global = VJJASIM_nospace;
MXLASIM.nonlocals = A68_NIL;
NXLASIM.fn.fn_global = HBJASIM_minus_real_1;
NXLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, MXLASIM, NXLASIM, A_HIS1ARR(LXLASIM,KXLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  UXLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  VXLASIM;  /* collateral clause result */
A68_424  WXLASIM;  /* OPERATORS - istruct to row */
A68_421  XXLASIM;  /* procedure value */
A68_129  YXLASIM;  /* procedure value */
 /* line 1941: */
 /* line 1942: */
VXLASIM.data[0] = YBJASIM_q;
VXLASIM.data[1] = WBJASIM_lr;
VXLASIM.data[2] = YBJASIM_q;
VXLASIM.data[3] = WBJASIM_lr;
VXLASIM.data[4] = ZBJASIM_r;
 /* line 1943: */
XXLASIM.fn.fn_global = VJJASIM_nospace;
XXLASIM.nonlocals = A68_NIL;
YXLASIM.fn.fn_global = IBJASIM_minus_real_2;
YXLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, XXLASIM, YXLASIM, A_HIS1ARR(WXLASIM,VXLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  FYLASIM_anonymous(A68_375 * Ams)
{ 
A68_438  GYLASIM;  /* collateral clause result */
A68_424  HYLASIM;  /* OPERATORS - istruct to row */
A68_421  IYLASIM;  /* procedure value */
A68_129  JYLASIM;  /* procedure value */
 /* line 1946: */
 /* line 1947: */
GYLASIM.data[0] = YBJASIM_q;
GYLASIM.data[1] = VBJASIM_sr;
GYLASIM.data[2] = ZBJASIM_r;
 /* line 1948: */
IYLASIM.fn.fn_global = VJJASIM_nospace;
IYLASIM.nonlocals = A68_NIL;
JYLASIM.fn.fn_global = JBJASIM_negate_real_1;
JYLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, IYLASIM, JYLASIM, A_HIS1ARR(HYLASIM,GYLASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_VOID  QYLASIM_anonymous(A68_375 * Ams)
{ 
A68_438  RYLASIM;  /* collateral clause result */
A68_424  SYLASIM;  /* OPERATORS - istruct to row */
A68_421  TYLASIM;  /* procedure value */
A68_129  UYLASIM;  /* procedure value */
 /* line 1951: */
 /* line 1952: */
RYLASIM.data[0] = YBJASIM_q;
RYLASIM.data[1] = WBJASIM_lr;
RYLASIM.data[2] = ZBJASIM_r;
 /* line 1953: */
TYLASIM.fn.fn_global = VJJASIM_nospace;
TYLASIM.nonlocals = A68_NIL;
UYLASIM.fn.fn_global = KBJASIM_negate_real_2;
UYLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, TYLASIM, UYLASIM, A_HIS1ARR(SYLASIM,RYLASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_VOID  BZLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  CZLASIM;  /* collateral clause result */
A68_424  DZLASIM;  /* OPERATORS - istruct to row */
A68_421  EZLASIM;  /* procedure value */
A68_129  FZLASIM;  /* procedure value */
 /* line 1956: */
 /* line 1957: */
CZLASIM.data[0] = YBJASIM_q;
CZLASIM.data[1] = VBJASIM_sr;
CZLASIM.data[2] = YBJASIM_q;
CZLASIM.data[3] = VBJASIM_sr;
CZLASIM.data[4] = ZBJASIM_r;
 /* line 1958: */
EZLASIM.fn.fn_global = VJJASIM_nospace;
EZLASIM.nonlocals = A68_NIL;
FZLASIM.fn.fn_global = NBJASIM_times_real_1;
FZLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, EZLASIM, FZLASIM, A_HIS1ARR(DZLASIM,CZLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  MZLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  NZLASIM;  /* collateral clause result */
A68_424  OZLASIM;  /* OPERATORS - istruct to row */
A68_421  PZLASIM;  /* procedure value */
A68_129  QZLASIM;  /* procedure value */
 /* line 1961: */
 /* line 1962: */
NZLASIM.data[0] = YBJASIM_q;
NZLASIM.data[1] = WBJASIM_lr;
NZLASIM.data[2] = YBJASIM_q;
NZLASIM.data[3] = WBJASIM_lr;
NZLASIM.data[4] = ZBJASIM_r;
 /* line 1963: */
PZLASIM.fn.fn_global = VJJASIM_nospace;
PZLASIM.nonlocals = A68_NIL;
QZLASIM.fn.fn_global = OBJASIM_times_real_2;
QZLASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, PZLASIM, QZLASIM, A_HIS1ARR(OZLASIM,NZLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  XZLASIM_anonymous(A68_375 * Ams)
{ 
A68_434  YZLASIM;  /* collateral clause result */
A68_424  ZZLASIM;  /* OPERATORS - istruct to row */
A68_421  AAMASIM;  /* procedure value */
A68_129  BAMASIM;  /* procedure value */
 /* line 1966: */
 /* line 1967: */
YZLASIM.data[0] = YBJASIM_q;
YZLASIM.data[1] = VBJASIM_sr;
YZLASIM.data[2] = YBJASIM_q;
YZLASIM.data[3] = VBJASIM_sr;
YZLASIM.data[4] = ZBJASIM_r;
 /* line 1968: */
AAMASIM.fn.fn_global = VJJASIM_nospace;
AAMASIM.nonlocals = A68_NIL;
BAMASIM.fn.fn_global = ZAJASIM_divide_real_1;
BAMASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, AAMASIM, BAMASIM, A_HIS1ARR(ZZLASIM,YZLASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  IAMASIM_anonymous(A68_375 * Ams)
{ 
A68_434  JAMASIM;  /* collateral clause result */
A68_424  KAMASIM;  /* OPERATORS - istruct to row */
A68_421  LAMASIM;  /* procedure value */
A68_129  MAMASIM;  /* procedure value */
 /* line 1971: */
 /* line 1972: */
JAMASIM.data[0] = YBJASIM_q;
JAMASIM.data[1] = WBJASIM_lr;
JAMASIM.data[2] = YBJASIM_q;
JAMASIM.data[3] = WBJASIM_lr;
JAMASIM.data[4] = ZBJASIM_r;
 /* line 1973: */
LAMASIM.fn.fn_global = VJJASIM_nospace;
LAMASIM.nonlocals = A68_NIL;
MAMASIM.fn.fn_global = ABJASIM_divide_real_2;
MAMASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, LAMASIM, MAMASIM, A_HIS1ARR(KAMASIM,JAMASIM,A68_INT ,5));
return;
} 
#undef NL

A_STATIC A68_VOID  TAMASIM_anonymous(A68_375 * Ams)
{ 
A68_436  UAMASIM;  /* collateral clause result */
A68_424  VAMASIM;  /* OPERATORS - istruct to row */
A68_421  WAMASIM;  /* procedure value */
A68_129  XAMASIM;  /* procedure value */
 /* line 1976: */
 /* line 1977: */
UAMASIM.data[0] = YBJASIM_q;
UAMASIM.data[1] = VBJASIM_sr;
UAMASIM.data[2] = YBJASIM_q;
UAMASIM.data[3] = VBJASIM_sr;
 /* line 1978: */
WAMASIM.fn.fn_global = VJJASIM_nospace;
WAMASIM.nonlocals = A68_NIL;
XAMASIM.fn.fn_global = BBJASIM_eq_real_1;
XAMASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(Ams, WAMASIM, XAMASIM, A_HIS1ARR(VAMASIM,UAMASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  EBMASIM_anonymous(A68_375 * Ams)
{ 
A68_436  FBMASIM;  /* collateral clause result */
A68_424  GBMASIM;  /* OPERATORS - istruct to row */
A68_421  HBMASIM;  /* procedure value */
A68_129  IBMASIM;  /* procedure value */
 /* line 1981: */
 /* line 1982: */
FBMASIM.data[0] = YBJASIM_q;
FBMASIM.data[1] = WBJASIM_lr;
FBMASIM.data[2] = YBJASIM_q;
FBMASIM.data[3] = WBJASIM_lr;
 /* line 1983: */
HBMASIM.fn.fn_global = VJJASIM_nospace;
HBMASIM.nonlocals = A68_NIL;
IBMASIM.fn.fn_global = CBJASIM_eq_real_2;
IBMASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(Ams, HBMASIM, IBMASIM, A_HIS1ARR(GBMASIM,FBMASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  PBMASIM_anonymous(A68_375 * Ams)
{ 
A68_436  QBMASIM;  /* collateral clause result */
A68_424  RBMASIM;  /* OPERATORS - istruct to row */
A68_421  SBMASIM;  /* procedure value */
A68_129  TBMASIM;  /* procedure value */
 /* line 1986: */
 /* line 1987: */
QBMASIM.data[0] = YBJASIM_q;
QBMASIM.data[1] = VBJASIM_sr;
QBMASIM.data[2] = YBJASIM_q;
QBMASIM.data[3] = VBJASIM_sr;
 /* line 1988: */
SBMASIM.fn.fn_global = VJJASIM_nospace;
SBMASIM.nonlocals = A68_NIL;
TBMASIM.fn.fn_global = DBJASIM_gt_real_1;
TBMASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(Ams, SBMASIM, TBMASIM, A_HIS1ARR(RBMASIM,QBMASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  ACMASIM_anonymous(A68_375 * Ams)
{ 
A68_436  BCMASIM;  /* collateral clause result */
A68_424  CCMASIM;  /* OPERATORS - istruct to row */
A68_421  DCMASIM;  /* procedure value */
A68_129  ECMASIM;  /* procedure value */
 /* line 1991: */
 /* line 1992: */
BCMASIM.data[0] = YBJASIM_q;
BCMASIM.data[1] = WBJASIM_lr;
BCMASIM.data[2] = YBJASIM_q;
BCMASIM.data[3] = WBJASIM_lr;
 /* line 1993: */
DCMASIM.fn.fn_global = VJJASIM_nospace;
DCMASIM.nonlocals = A68_NIL;
ECMASIM.fn.fn_global = EBJASIM_gt_real_2;
ECMASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(Ams, DCMASIM, ECMASIM, A_HIS1ARR(CCMASIM,BCMASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  LCMASIM_anonymous(A68_375 * Ams)
{ 
A68_436  MCMASIM;  /* collateral clause result */
A68_424  NCMASIM;  /* OPERATORS - istruct to row */
A68_421  OCMASIM;  /* procedure value */
A68_129  PCMASIM;  /* procedure value */
 /* line 1996: */
 /* line 1997: */
MCMASIM.data[0] = YBJASIM_q;
MCMASIM.data[1] = VBJASIM_sr;
MCMASIM.data[2] = YBJASIM_q;
MCMASIM.data[3] = VBJASIM_sr;
 /* line 1998: */
OCMASIM.fn.fn_global = VJJASIM_nospace;
OCMASIM.nonlocals = A68_NIL;
PCMASIM.fn.fn_global = FBJASIM_lt_real_1;
PCMASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(Ams, OCMASIM, PCMASIM, A_HIS1ARR(NCMASIM,MCMASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  WCMASIM_anonymous(A68_375 * Ams)
{ 
A68_436  XCMASIM;  /* collateral clause result */
A68_424  YCMASIM;  /* OPERATORS - istruct to row */
A68_421  ZCMASIM;  /* procedure value */
A68_129  ADMASIM;  /* procedure value */
 /* line 2001: */
 /* line 2002: */
XCMASIM.data[0] = YBJASIM_q;
XCMASIM.data[1] = WBJASIM_lr;
XCMASIM.data[2] = YBJASIM_q;
XCMASIM.data[3] = WBJASIM_lr;
 /* line 2003: */
ZCMASIM.fn.fn_global = VJJASIM_nospace;
ZCMASIM.nonlocals = A68_NIL;
ADMASIM.fn.fn_global = GBJASIM_lt_real_2;
ADMASIM.nonlocals = A68_NIL;
WCKASIM_oolbioptv(Ams, ZCMASIM, ADMASIM, A_HIS1ARR(YCMASIM,XCMASIM,A68_INT ,4));
return;
} 
#undef NL

A_STATIC A68_VOID  HDMASIM_anonymous(A68_375 * Ams)
{ 
A68_438  IDMASIM;  /* collateral clause result */
A68_424  JDMASIM;  /* OPERATORS - istruct to row */
A68_421  KDMASIM;  /* procedure value */
A68_129  LDMASIM;  /* procedure value */
 /* line 2006: */
 /* line 2007: */
IDMASIM.data[0] = YBJASIM_q;
IDMASIM.data[1] = VBJASIM_sr;
IDMASIM.data[2] = ZBJASIM_r;
 /* line 2008: */
KDMASIM.fn.fn_global = VJJASIM_nospace;
KDMASIM.nonlocals = A68_NIL;
LDMASIM.fn.fn_global = RAJASIM_change_real_1;
LDMASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, KDMASIM, LDMASIM, A_HIS1ARR(JDMASIM,IDMASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_VOID  SDMASIM_anonymous(A68_375 * Ams)
{ 
A68_438  TDMASIM;  /* collateral clause result */
A68_424  UDMASIM;  /* OPERATORS - istruct to row */
A68_421  VDMASIM;  /* procedure value */
A68_129  WDMASIM;  /* procedure value */
 /* line 2011: */
 /* line 2012: */
TDMASIM.data[0] = YBJASIM_q;
TDMASIM.data[1] = WBJASIM_lr;
TDMASIM.data[2] = ZBJASIM_r;
 /* line 2013: */
VDMASIM.fn.fn_global = VJJASIM_nospace;
VDMASIM.nonlocals = A68_NIL;
WDMASIM.fn.fn_global = SAJASIM_change_real_2;
WDMASIM.nonlocals = A68_NIL;
AFKASIM_oolbiopstruct(Ams, VDMASIM, WDMASIM, A_HIS1ARR(UDMASIM,TDMASIM,A68_INT ,3));
return;
} 
#undef NL

A_STATIC A68_INT  ECJASIM_either(A68_375 * S, A68_INT  A, A68_INT  B)
{ 
A68_346  FCJASIM;  /* avoid structure result */
A68_346  GCJASIM;  /* united object - for case conformity */
A68_INT  HCJASIM;  /* clause result */
A_PROC_ENTRY(either);
 /* line 154: */
 /* line 155: */
JVGASIM_typeof( (&(S->Location_stack)), A, &FCJASIM );
GCJASIM = FCJASIM ;
switch ( GCJASIM.mode )
{ 
case 3: /* CHAR */
 /* line 156: */
 /* line 157: */
HCJASIM = B;
break;
default: 
HCJASIM = A;
break;
} 
A_PROC_EXIT(either);
return( HCJASIM );
} 
#undef NL

A_STATIC A68_VOID  KCJASIM_size(A68_375 * S, A68_INT  O, A68_386  *ReturnedValue)
{ 
A68_346  LCJASIM;  /* avoid structure result */
A68_346  MCJASIM;  /* united object - for case conformity */
A68_172  NCJASIM;  /* avoid structure result */
A68_386  OCJASIM;  /* clause result */
A68_386  PCJASIM;  /* OPERATORS - mode -> union mode */
A68_386  QCJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  RCJASIM;  /* YIELD */
A_PROC_ENTRY(size);
 /* line 161: */
 /* line 162: */
JVGASIM_typeof( (&(S->Location_stack)), O, &LCJASIM );
MCJASIM = LCJASIM ;
switch ( MCJASIM.mode )
{ 
case 3: /* CHAR */
 /* line 163: */
 /* line 164: */
{ 
DFHASIM_sizeoperands( S, O, &NCJASIM );
ISEASIM_using(TEEASIM_ld, NCJASIM);
 /* line 165: */
 /* line 166: */
 /* line 167: */
OCJASIM = A_UNITE(PCJASIM,mode1,1,NEGASIM_tempreg1);
} 
break;
default: 
 /* line 168: */
RCJASIM = BWGASIM_sizeof((&(S->Location_stack)), O) ;
OCJASIM = A_UNITE(QCJASIM,mode2,2,RCJASIM);
break;
} 
A_PROC_EXIT(size);
*ReturnedValue = (OCJASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UCJASIM_value(A68_375 * S, A68_INT  O, A68_386  *ReturnedValue)
{ 
A68_386  VCJASIM;  /* clause result */
A68_386  WCJASIM;  /* avoid structure result */
A_PROC_ENTRY(value);
LCHASIM_source( S, O, &WCJASIM );
VCJASIM = WCJASIM;
A_PROC_EXIT(value);
*ReturnedValue = (VCJASIM);
return;
} 
#undef NL

A_STATIC A68_411 * XCJASIM_arithstack(void)
{ 
A68_411  YCJASIM;  /* collateral clause result */
A68_32  DDJASIM;  /* avoid structure result */
A68_411 * EDJASIM;  /* clause result */
A68_411 * FDJASIM;  /* YIELD */
A_PROC_ENTRY(arithstack);
ADJASIM_generator( A68_FALSE, &DDJASIM );
YCJASIM.Locations = DDJASIM;
YCJASIM.Top = 0;
YCJASIM.Inline = A68_FALSE;
FDJASIM = A_HEAP(A68_411 ) ;
(*FDJASIM) = YCJASIM ;
EDJASIM = FDJASIM;
A_PROC_EXIT(arithstack);
return( EDJASIM );
} 
#undef NL

A_STATIC A68_411 * IDJASIM_push(A68_411 * S, A68_386  Val)
{ 
A68_INT * JDJASIM;  /* YIELD */
A68_386  KDJASIM;  /* united object - for case conformity */
A68_BITS  LDJASIM_r;
A68_171  MDJASIM;  /* collateral clause result */
A68_172  NDJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ODJASIM_i;
A68_INT  PDJASIM;  /* by part of loop */
A68_171  QDJASIM;  /* collateral clause result */
A68_32  RDJASIM;  /* OPERATORS - simple index */
A68_172  SDJASIM;  /* OPERATORS - mode -> union mode */
A68_171  TDJASIM;  /* collateral clause result */
A68_172  UDJASIM;  /* OPERATORS - mode -> union mode */
A68_170  VDJASIM;  /* collateral clause result */
A68_172  WDJASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL * XDJASIM;  /* YIELD */
A68_171  YDJASIM;  /* collateral clause result */
A68_172  ZDJASIM;  /* OPERATORS - mode -> union mode */
A68_171  AEJASIM;  /* collateral clause result */
A68_172  BEJASIM;  /* OPERATORS - mode -> union mode */
A68_170  CEJASIM;  /* collateral clause result */
A68_172  DEJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  EEJASIM_i;
A68_171  FEJASIM;  /* collateral clause result */
A68_172  GEJASIM;  /* OPERATORS - mode -> union mode */
A68_171  HEJASIM;  /* collateral clause result */
A68_172  IEJASIM;  /* OPERATORS - mode -> union mode */
A68_171  JEJASIM;  /* collateral clause result */
A68_172  KEJASIM;  /* OPERATORS - mode -> union mode */
A68_33  MEJASIM_generator;   /* proc value of non-global proc */
A68_32  REJASIM;  /* avoid structure result */
A68_32  SEJASIM_newstack;
A68_32  TEJASIM;  /* OPERATORS - trim index */
A68_32  UEJASIM;  /* YIELD */
A68_32  VEJASIM;  /* OPERATORS - assign op */
A68_32 * WEJASIM;  /* YIELD */
A68_32  XEJASIM;  /* OPERATORS - simple index */
A68_INT  YEJASIM;  /* YIELD */
A68_INT * ZEJASIM;  /* YIELD */
A68_411 * AFJASIM;  /* clause result */
A_PROC_ENTRY(push);
 /* line 191: */
 /* line 192: */
{ 
JDJASIM = (&(S->Top)) ;
(*JDJASIM)+=1;
 /* line 194: */
 /* line 195: */
KDJASIM = Val ;
switch ( KDJASIM.mode )
{ 
case 1: /* BITS */
LDJASIM_r = (KDJASIM.data.mode1);
 /* line 196: */
 /* line 197: */
{ 
 /* line 198: */
if ( !(*(&(S->Inline))) )
{ 
MDJASIM.Rs1 = IWEASIM_sp;
MDJASIM.Imm = ((*(&(S->Top)))*8);
MDJASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(NDJASIM,mode2,2,MDJASIM));
 /* line 199: */
PDJASIM = (-1);
for ( ODJASIM_i = ((*(&(S->Top)))-1);
( PDJASIM > 0 && ODJASIM_i <= 1) ||
( PDJASIM < 0 && ODJASIM_i >= 1) ||
( PDJASIM == 0 ) ;
ODJASIM_i += PDJASIM )
{ 
 /* line 200: */
QDJASIM.Rs1 = FVEASIM_g0;
RDJASIM = (*(&(S->Locations))) ;
QDJASIM.Imm = (*(&A_VINDEX(RDJASIM,ODJASIM_i)));
QDJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(LAEASIM_or, A_UNITE(SDJASIM,mode2,2,QDJASIM));
 /* line 201: */
TDJASIM.Rs1 = IWEASIM_sp;
TDJASIM.Imm = (ACJASIM_ms_tos+(ODJASIM_i*8));
 /* line 202: */
TDJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(UDJASIM,mode2,2,TDJASIM));
}
 /* line 203: */
VDJASIM.Rs1 = LDJASIM_r;
VDJASIM.Rs2 = FVEASIM_g0;
VDJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(WDJASIM,mode1,1,VDJASIM));
 /* line 204: */
 /* line 205: */
 /* line 206: */
XDJASIM = (&(S->Inline)) ;
(*XDJASIM) = A68_TRUE;
} 
else
{ 
 /* line 207: */
if ( ((*(&(S->Top)))>1) )
{ 
YDJASIM.Rs1 = IWEASIM_sp;
YDJASIM.Imm = 8;
YDJASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(ZDJASIM,mode2,2,YDJASIM));
 /* line 208: */
AEJASIM.Rs1 = IWEASIM_sp;
AEJASIM.Imm = ACJASIM_ms_tos;
 /* line 209: */
AEJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(BEJASIM,mode2,2,AEJASIM));
} 
 /* line 210: */
CEJASIM.Rs1 = LDJASIM_r;
CEJASIM.Rs2 = FVEASIM_g0;
 /* line 211: */
CEJASIM.Rd = NEGASIM_tempreg1;
 /* line 212: */
 /* line 213: */
ISEASIM_using(LAEASIM_or, A_UNITE(DEJASIM,mode1,1,CEJASIM));
} 
} 
break;
case 2: /* INT */
EEJASIM_i = (KDJASIM.data.mode2);
 /* line 214: */
 /* line 215: */
{ 
 /* line 216: */
if ( (*(&(S->Inline))) )
{ 
FEJASIM.Rs1 = IWEASIM_sp;
FEJASIM.Imm = 8;
FEJASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(GEJASIM,mode2,2,FEJASIM));
 /* line 217: */
HEJASIM.Rs1 = IWEASIM_sp;
HEJASIM.Imm = ACJASIM_ms_tos;
HEJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(IEJASIM,mode2,2,HEJASIM));
 /* line 218: */
JEJASIM.Rs1 = FVEASIM_g0;
JEJASIM.Imm = EEJASIM_i;
 /* line 219: */
JEJASIM.Rd = NEGASIM_tempreg1;
 /* line 220: */
ISEASIM_using(LAEASIM_or, A_UNITE(KEJASIM,mode2,2,JEJASIM));
} 
else
{ 
 /* line 221: */
if ( ((*(&(S->Top)))>(*(&(S->Locations))).upb) )
{ 
A_CLOSURE( MEJASIM_generator, NEJASIM_generator, OEJASIM_generator );
(( OEJASIM_generator * ) ( MEJASIM_generator.nonlocals )) -> S = S;
A_CALLPROC(MEJASIM_generator,(A68_FALSE, &REJASIM),(A68_FALSE, &REJASIM,(MEJASIM_generator).nonlocals));
SEJASIM_newstack = REJASIM;
 /* line 222: */
UEJASIM = A_VTRIM(TEJASIM,(SEJASIM_newstack),A_VTSCRIPT(&(TEJASIM.upb),(SEJASIM_newstack).upb,1,(*(&(S->Locations))).upb)) ;
VEJASIM = (*(&(S->Locations))) ;
A_VASSIGN2(VEJASIM,UEJASIM,A68_INT );
 /* line 223: */
 /* line 224: */
WEJASIM = (&(S->Locations)) ;
(*WEJASIM) = SEJASIM_newstack;
} 
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
XEJASIM = (*(&(S->Locations))) ;
YEJASIM = (*(&(S->Top))) ;
ZEJASIM = (&A_VINDEX(XEJASIM,YEJASIM)) ;
(*ZEJASIM) = EEJASIM_i;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 229: */
 /* line 230: */
AFJASIM = S;
} 
A_PROC_EXIT(push);
return( AFJASIM );
} 
#undef NL

A_STATIC A68_411 * CFJASIM_pop(A68_411 * S)
{ 
A68_INT * DFJASIM;  /* YIELD */
A68_BOOL  GFJASIM;  /* optbool result */
A68_171  HFJASIM;  /* collateral clause result */
A68_172  IFJASIM;  /* OPERATORS - mode -> union mode */
A68_171  JFJASIM;  /* collateral clause result */
A68_172  KFJASIM;  /* OPERATORS - mode -> union mode */
A68_411 * LFJASIM;  /* clause result */
A_PROC_ENTRY(pop);
 /* line 234: */
 /* line 235: */
{ 
DFJASIM = (&(S->Top)) ;
(*DFJASIM)-=1;
 /* line 236: */
GJDASIM_assert(FFJASIM, ((*(&(S->Top)))>=0));
 /* line 237: */
GFJASIM = (*(&(S->Inline)));
if ( GFJASIM )
{GFJASIM = ((*(&(S->Top)))>1);
}
 /* line 238: */
if ( GFJASIM )
{ 
HFJASIM.Rs1 = IWEASIM_sp;
HFJASIM.Imm = ACJASIM_ms_tos;
HFJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TEEASIM_ld, A_UNITE(IFJASIM,mode2,2,HFJASIM));
 /* line 239: */
JFJASIM.Rs1 = IWEASIM_sp;
JFJASIM.Imm = 8;
 /* line 240: */
JFJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(KFJASIM,mode2,2,JFJASIM));
} 
 /* line 241: */
 /* line 242: */
LFJASIM = S;
} 
A_PROC_EXIT(pop);
return( LFJASIM );
} 
#undef NL

A_STATIC A68_INT  NFJASIM_tos(A68_411 * S)
{ 
A68_INT  OFJASIM;  /* clause result */
A68_32  PFJASIM;  /* OPERATORS - simple index */
A68_INT  QFJASIM;  /* YIELD */
A_PROC_ENTRY(tos);
PFJASIM = (*(&(S->Locations))) ;
QFJASIM = (*(&(S->Top))) ;
OFJASIM = (*(&A_VINDEX(PFJASIM,QFJASIM)));
A_PROC_EXIT(tos);
return( OFJASIM );
} 
#undef NL

A_STATIC A68_BOOL  SFJASIM_inline(A68_411 * S)
{ 
A68_BOOL  TFJASIM;  /* clause result */
A_PROC_ENTRY(inline);
TFJASIM = (*(&(S->Inline)));
A_PROC_EXIT(inline);
return( TFJASIM );
} 
#undef NL

A_STATIC A68_VOID  WFJASIM_checksizeis(A68_411 * S, A68_INT  Size)
{ 
A_PROC_ENTRY(checksizeis);
 /* line 252: */
GJDASIM_assert(YFJASIM, ((*(&(S->Top)))==Size));
A_PROC_EXIT(checksizeis);
return;
} 
#undef NL

A_STATIC A68_411 * AGJASIM_add(A68_411 * S)
{ 
A68_171  DGJASIM;  /* collateral clause result */
A68_172  EGJASIM;  /* OPERATORS - mode -> union mode */
A68_171  FGJASIM;  /* collateral clause result */
A68_172  GGJASIM;  /* OPERATORS - mode -> union mode */
A68_170  HGJASIM;  /* collateral clause result */
A68_172  IGJASIM;  /* OPERATORS - mode -> union mode */
A68_32  JGJASIM;  /* OPERATORS - simple index */
A68_INT  KGJASIM;  /* YIELD */
A68_32  LGJASIM;  /* OPERATORS - simple index */
A68_INT  MGJASIM;  /* YIELD */
A68_INT * NGJASIM;  /* YIELD */
A68_INT * OGJASIM;  /* YIELD */
A68_411 * PGJASIM;  /* clause result */
A_PROC_ENTRY(add);
 /* line 256: */
 /* line 257: */
{ 
GJDASIM_assert(CGJASIM, ((*(&(S->Top)))>1));
 /* line 258: */
 /* line 259: */
if ( (*(&(S->Inline))) )
{ 
DGJASIM.Rs1 = IWEASIM_sp;
DGJASIM.Imm = ACJASIM_ms_tos;
DGJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(EGJASIM,mode2,2,DGJASIM));
 /* line 260: */
FGJASIM.Rs1 = IWEASIM_sp;
FGJASIM.Imm = 8;
FGJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(GGJASIM,mode2,2,FGJASIM));
 /* line 261: */
HGJASIM.Rs1 = OEGASIM_tempreg2;
HGJASIM.Rs2 = NEGASIM_tempreg1;
 /* line 262: */
HGJASIM.Rd = NEGASIM_tempreg1;
 /* line 263: */
ISEASIM_using(DAEASIM_add, A_UNITE(IGJASIM,mode1,1,HGJASIM));
} 
else
{ 
 /* line 264: */
JGJASIM = (*(&(S->Locations))) ;
KGJASIM = ((*(&(S->Top)))-1) ;
LGJASIM = (*(&(S->Locations))) ;
MGJASIM = (*(&(S->Top))) ;
NGJASIM = (&A_VINDEX(JGJASIM,KGJASIM)) ;
(*NGJASIM)+=(*(&A_VINDEX(LGJASIM,MGJASIM)));
} 
 /* line 265: */
OGJASIM = (&(S->Top)) ;
(*OGJASIM)-=1;
 /* line 266: */
 /* line 267: */
PGJASIM = S;
} 
A_PROC_EXIT(add);
return( PGJASIM );
} 
#undef NL

A_STATIC A68_411 * RGJASIM_sub(A68_411 * S)
{ 
A68_171  UGJASIM;  /* collateral clause result */
A68_172  VGJASIM;  /* OPERATORS - mode -> union mode */
A68_171  WGJASIM;  /* collateral clause result */
A68_172  XGJASIM;  /* OPERATORS - mode -> union mode */
A68_170  YGJASIM;  /* collateral clause result */
A68_172  ZGJASIM;  /* OPERATORS - mode -> union mode */
A68_32  AHJASIM;  /* OPERATORS - simple index */
A68_INT  BHJASIM;  /* YIELD */
A68_32  CHJASIM;  /* OPERATORS - simple index */
A68_INT  DHJASIM;  /* YIELD */
A68_INT * EHJASIM;  /* YIELD */
A68_INT * FHJASIM;  /* YIELD */
A68_411 * GHJASIM;  /* clause result */
A_PROC_ENTRY(sub);
 /* line 271: */
 /* line 272: */
{ 
GJDASIM_assert(TGJASIM, ((*(&(S->Top)))>1));
 /* line 273: */
 /* line 274: */
if ( (*(&(S->Inline))) )
{ 
UGJASIM.Rs1 = IWEASIM_sp;
UGJASIM.Imm = ACJASIM_ms_tos;
UGJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(VGJASIM,mode2,2,UGJASIM));
 /* line 275: */
WGJASIM.Rs1 = IWEASIM_sp;
WGJASIM.Imm = 8;
WGJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(XGJASIM,mode2,2,WGJASIM));
 /* line 276: */
YGJASIM.Rs1 = OEGASIM_tempreg2;
YGJASIM.Rs2 = NEGASIM_tempreg1;
 /* line 277: */
YGJASIM.Rd = NEGASIM_tempreg1;
 /* line 278: */
ISEASIM_using(TAEASIM_sub, A_UNITE(ZGJASIM,mode1,1,YGJASIM));
} 
else
{ 
 /* line 279: */
AHJASIM = (*(&(S->Locations))) ;
BHJASIM = ((*(&(S->Top)))-1) ;
CHJASIM = (*(&(S->Locations))) ;
DHJASIM = (*(&(S->Top))) ;
EHJASIM = (&A_VINDEX(AHJASIM,BHJASIM)) ;
(*EHJASIM)-=(*(&A_VINDEX(CHJASIM,DHJASIM)));
} 
 /* line 280: */
FHJASIM = (&(S->Top)) ;
(*FHJASIM)-=1;
 /* line 281: */
 /* line 282: */
GHJASIM = S;
} 
A_PROC_EXIT(sub);
return( GHJASIM );
} 
#undef NL

A_STATIC A68_411 * IHJASIM_mul(A68_411 * S)
{ 
A68_171  LHJASIM;  /* collateral clause result */
A68_172  MHJASIM;  /* OPERATORS - mode -> union mode */
A68_171  NHJASIM;  /* collateral clause result */
A68_172  OHJASIM;  /* OPERATORS - mode -> union mode */
A68_32  PHJASIM;  /* OPERATORS - simple index */
A68_INT  QHJASIM;  /* YIELD */
A68_32  RHJASIM;  /* OPERATORS - simple index */
A68_INT  SHJASIM;  /* YIELD */
A68_INT * THJASIM;  /* YIELD */
A68_INT * UHJASIM;  /* YIELD */
A68_411 * VHJASIM;  /* clause result */
A_PROC_ENTRY(mul);
 /* line 286: */
 /* line 287: */
{ 
GJDASIM_assert(KHJASIM, ((*(&(S->Top)))>1));
 /* line 288: */
 /* line 289: */
if ( (*(&(S->Inline))) )
{ 
LHJASIM.Rs1 = IWEASIM_sp;
LHJASIM.Imm = ACJASIM_ms_tos;
LHJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(MHJASIM,mode2,2,LHJASIM));
 /* line 290: */
TZEASIM_mamul();
 /* line 291: */
NHJASIM.Rs1 = IWEASIM_sp;
NHJASIM.Imm = 8;
 /* line 292: */
NHJASIM.Rd = IWEASIM_sp;
 /* line 293: */
ISEASIM_using(DAEASIM_add, A_UNITE(OHJASIM,mode2,2,NHJASIM));
} 
else
{ 
 /* line 294: */
PHJASIM = (*(&(S->Locations))) ;
QHJASIM = ((*(&(S->Top)))-1) ;
RHJASIM = (*(&(S->Locations))) ;
SHJASIM = (*(&(S->Top))) ;
THJASIM = (&A_VINDEX(PHJASIM,QHJASIM)) ;
(*THJASIM)*=(*(&A_VINDEX(RHJASIM,SHJASIM)));
} 
 /* line 295: */
UHJASIM = (&(S->Top)) ;
(*UHJASIM)-=1;
 /* line 296: */
 /* line 297: */
VHJASIM = S;
} 
A_PROC_EXIT(mul);
return( VHJASIM );
} 
#undef NL

A_STATIC A68_411 * XHJASIM_div(A68_411 * S)
{ 
A68_171  AIJASIM;  /* collateral clause result */
A68_172  BIJASIM;  /* OPERATORS - mode -> union mode */
A68_171  CIJASIM;  /* collateral clause result */
A68_172  DIJASIM;  /* OPERATORS - mode -> union mode */
A68_170  EIJASIM;  /* collateral clause result */
A68_172  FIJASIM;  /* OPERATORS - mode -> union mode */
A68_170  GIJASIM;  /* collateral clause result */
A68_172  HIJASIM;  /* OPERATORS - mode -> union mode */
A68_32  IIJASIM;  /* OPERATORS - simple index */
A68_INT  JIJASIM;  /* YIELD */
A68_32  KIJASIM;  /* OPERATORS - simple index */
A68_INT  LIJASIM;  /* YIELD */
A68_INT * MIJASIM;  /* YIELD */
A68_INT * NIJASIM;  /* YIELD */
A68_411 * OIJASIM;  /* clause result */
A_PROC_ENTRY(div);
 /* line 301: */
 /* line 302: */
{ 
GJDASIM_assert(ZHJASIM, ((*(&(S->Top)))>1));
 /* line 303: */
 /* line 304: */
if ( (*(&(S->Inline))) )
{ 
AIJASIM.Rs1 = IWEASIM_sp;
AIJASIM.Imm = ACJASIM_ms_tos;
AIJASIM.Rd = VVEASIM_o0;
ISEASIM_using(TEEASIM_ld, A_UNITE(BIJASIM,mode2,2,AIJASIM));
 /* line 305: */
CIJASIM.Rs1 = IWEASIM_sp;
CIJASIM.Imm = 8;
CIJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(DIJASIM,mode2,2,CIJASIM));
 /* line 306: */
OZEASIM_madiv();
 /* line 307: */
EIJASIM.Rs1 = NEGASIM_tempreg1;
EIJASIM.Rs2 = FVEASIM_g0;
EIJASIM.Rd = XVEASIM_o1;
ISEASIM_using(LAEASIM_or, A_UNITE(FIJASIM,mode1,1,EIJASIM));
 /* line 309: */
GIJASIM.Rs1 = VVEASIM_o0;
GIJASIM.Rs2 = FVEASIM_g0;
 /* line 310: */
GIJASIM.Rd = NEGASIM_tempreg1;
 /* line 311: */
ISEASIM_using(LAEASIM_or, A_UNITE(HIJASIM,mode1,1,GIJASIM));
} 
else
{ 
 /* line 312: */
IIJASIM = (*(&(S->Locations))) ;
JIJASIM = ((*(&(S->Top)))-1) ;
KIJASIM = (*(&(S->Locations))) ;
LIJASIM = (*(&(S->Top))) ;
MIJASIM = (&A_VINDEX(IIJASIM,JIJASIM)) ;
(*MIJASIM)/=(*(&A_VINDEX(KIJASIM,LIJASIM)));
} 
 /* line 313: */
NIJASIM = (&(S->Top)) ;
(*NIJASIM)-=1;
 /* line 314: */
 /* line 315: */
OIJASIM = S;
} 
A_PROC_EXIT(div);
return( OIJASIM );
} 
#undef NL

A_STATIC A68_411 * QIJASIM_max(A68_411 * S)
{ 
A68_171  TIJASIM;  /* collateral clause result */
A68_172  UIJASIM;  /* OPERATORS - mode -> union mode */
A68_171  VIJASIM;  /* collateral clause result */
A68_172  WIJASIM;  /* OPERATORS - mode -> union mode */
A68_170  XIJASIM;  /* collateral clause result */
A68_172  YIJASIM;  /* OPERATORS - mode -> union mode */
A68_170  ZIJASIM;  /* collateral clause result */
A68_172  AJJASIM;  /* OPERATORS - mode -> union mode */
A68_170  BJJASIM;  /* collateral clause result */
A68_172  CJJASIM;  /* OPERATORS - mode -> union mode */
A68_170  DJJASIM;  /* collateral clause result */
A68_172  EJJASIM;  /* OPERATORS - mode -> union mode */
A68_32  FJJASIM;  /* OPERATORS - simple index */
A68_INT  GJJASIM;  /* YIELD */
A68_32  HJJASIM;  /* OPERATORS - simple index */
A68_INT  IJJASIM;  /* YIELD */
A68_INT  JJJASIM;  /* clause result */
A68_32  KJJASIM;  /* OPERATORS - simple index */
A68_INT  LJJASIM;  /* YIELD */
A68_32  MJJASIM;  /* OPERATORS - simple index */
A68_INT  NJJASIM;  /* YIELD */
A68_32  OJJASIM;  /* OPERATORS - simple index */
A68_INT  PJJASIM;  /* YIELD */
A68_INT * QJJASIM;  /* YIELD */
A68_INT * RJJASIM;  /* YIELD */
A68_411 * SJJASIM;  /* clause result */
A_PROC_ENTRY(max);
 /* line 319: */
 /* line 320: */
{ 
GJDASIM_assert(SIJASIM, ((*(&(S->Top)))>1));
 /* line 321: */
 /* line 322: */
if ( (*(&(S->Inline))) )
{ 
TIJASIM.Rs1 = IWEASIM_sp;
TIJASIM.Imm = ACJASIM_ms_tos;
TIJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(UIJASIM,mode2,2,TIJASIM));
 /* line 323: */
VIJASIM.Rs1 = IWEASIM_sp;
VIJASIM.Imm = 8;
VIJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(WIJASIM,mode2,2,VIJASIM));
 /* line 328: */
XIJASIM.Rs1 = OEGASIM_tempreg2;
XIJASIM.Rs2 = NEGASIM_tempreg1;
XIJASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(HCEASIM_subcc, A_UNITE(YIJASIM,mode1,1,XIJASIM));
 /* line 334: */
ZIJASIM.Rs1 = OEGASIM_tempreg2;
ZIJASIM.Rs2 = OEGASIM_tempreg2;
ZIJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(NBEASIM_subx, A_UNITE(AJJASIM,mode1,1,ZIJASIM));
 /* line 339: */
BJJASIM.Rs1 = PEGASIM_tempreg3;
BJJASIM.Rs2 = OEGASIM_tempreg2;
BJJASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(LAEASIM_or, A_UNITE(CJJASIM,mode1,1,BJJASIM));
 /* line 345: */
DJJASIM.Rs1 = OEGASIM_tempreg2;
DJJASIM.Rs2 = NEGASIM_tempreg1;
 /* line 350: */
DJJASIM.Rd = NEGASIM_tempreg1;
 /* line 351: */
ISEASIM_using(JBEASIM_addx, A_UNITE(EJJASIM,mode1,1,DJJASIM));
} 
else
{ 
 /* line 352: */
 /* line 353: */
 /* line 354: */
FJJASIM = (*(&(S->Locations))) ;
GJJASIM = (*(&(S->Top))) ;
HJJASIM = (*(&(S->Locations))) ;
IJJASIM = ((*(&(S->Top)))-1) ;
if ( ((*(&A_VINDEX(FJJASIM,GJJASIM)))>(*(&A_VINDEX(HJJASIM,IJJASIM)))) )
{ 
 /* line 355: */
 /* line 356: */
KJJASIM = (*(&(S->Locations))) ;
LJJASIM = (*(&(S->Top))) ;
JJJASIM = (*(&A_VINDEX(KJJASIM,LJJASIM)));
} 
else
{ 
 /* line 357: */
 /* line 358: */
MJJASIM = (*(&(S->Locations))) ;
NJJASIM = ((*(&(S->Top)))-1) ;
JJJASIM = (*(&A_VINDEX(MJJASIM,NJJASIM)));
} 
OJJASIM = (*(&(S->Locations))) ;
PJJASIM = ((*(&(S->Top)))-1) ;
QJJASIM = (&A_VINDEX(OJJASIM,PJJASIM)) ;
(*QJJASIM) = JJJASIM;
} 
 /* line 359: */
RJJASIM = (&(S->Top)) ;
(*RJJASIM)-=1;
 /* line 360: */
 /* line 361: */
SJJASIM = S;
} 
A_PROC_EXIT(max);
return( SJJASIM );
} 
#undef NL

A_STATIC A68_BOOL  VJJASIM_nospace(A68_375 * S, A68_INT * I)
{ 
A68_BOOL  WJJASIM;  /* clause result */
A_PROC_ENTRY(nospace);
 /* line 374: */
 /* line 375: */
{ 
(*I) = 0;
 /* line 376: */
 /* line 377: */
WJJASIM = A68_TRUE;
} 
A_PROC_EXIT(nospace);
return( WJJASIM );
} 
#undef NL

A_STATIC A68_BOOL  ZJJASIM_bsxbslogicalws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_411 * AKJASIM_as;
A68_386  BKJASIM;  /* avoid structure result */
A68_386  CKJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DKJASIM;  /* YIELD */
A68_386  EKJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FKJASIM;  /* YIELD */
A68_386  GKJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HKJASIM;  /* YIELD */
A68_BOOL  IKJASIM;  /* clause result */
A_PROC_ENTRY(bsxbslogicalws);
 /* line 383: */
 /* line 384: */
{ 
AKJASIM_as = XCJASIM_arithstack();
 /* line 385: */
KCJASIM_size( S, ECJASIM_either(S, (EZGASIM_tos+1), (EZGASIM_tos+3)), &BKJASIM );
AKJASIM_as = IDJASIM_push(AKJASIM_as, BKJASIM);
 /* line 386: */
DKJASIM = 31 ;
AKJASIM_as = AGJASIM_add(IDJASIM_push(AKJASIM_as, A_UNITE(CKJASIM,mode2,2,DKJASIM)));
 /* line 387: */
FKJASIM = 32 ;
AKJASIM_as = XHJASIM_div(IDJASIM_push(AKJASIM_as, A_UNITE(EKJASIM,mode2,2,FKJASIM)));
 /* line 388: */
HKJASIM = 4 ;
AKJASIM_as = IHJASIM_mul(IDJASIM_push(AKJASIM_as, A_UNITE(GKJASIM,mode2,2,HKJASIM)));
 /* line 389: */
WFJASIM_checksizeis(AKJASIM_as, 1);
 /* line 390: */
(*Wrkspc) = NFJASIM_tos(AKJASIM_as);
 /* line 391: */
 /* line 392: */
IKJASIM = !SFJASIM_inline(AKJASIM_as);
} 
A_PROC_EXIT(bsxbslogicalws);
return( IKJASIM );
} 
#undef NL

A_STATIC A68_BOOL  LKJASIM_bslogicalws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_411 * MKJASIM_as;
A68_386  NKJASIM;  /* avoid structure result */
A68_386  OKJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PKJASIM;  /* YIELD */
A68_386  QKJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  RKJASIM;  /* YIELD */
A68_386  SKJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  TKJASIM;  /* YIELD */
A68_BOOL  UKJASIM;  /* clause result */
A_PROC_ENTRY(bslogicalws);
 /* line 397: */
 /* line 398: */
{ 
MKJASIM_as = XCJASIM_arithstack();
 /* line 399: */
KCJASIM_size( S, FZGASIM_tos1, &NKJASIM );
MKJASIM_as = IDJASIM_push(MKJASIM_as, NKJASIM);
 /* line 400: */
PKJASIM = 31 ;
MKJASIM_as = AGJASIM_add(IDJASIM_push(MKJASIM_as, A_UNITE(OKJASIM,mode2,2,PKJASIM)));
 /* line 401: */
RKJASIM = 32 ;
MKJASIM_as = XHJASIM_div(IDJASIM_push(MKJASIM_as, A_UNITE(QKJASIM,mode2,2,RKJASIM)));
 /* line 402: */
TKJASIM = 4 ;
MKJASIM_as = IHJASIM_mul(IDJASIM_push(MKJASIM_as, A_UNITE(SKJASIM,mode2,2,TKJASIM)));
 /* line 403: */
WFJASIM_checksizeis(MKJASIM_as, 1);
 /* line 404: */
(*Wrkspc) = NFJASIM_tos(MKJASIM_as);
 /* line 405: */
 /* line 406: */
UKJASIM = !SFJASIM_inline(MKJASIM_as);
} 
A_PROC_EXIT(bslogicalws);
return( UKJASIM );
} 
#undef NL

A_STATIC A68_BOOL  XKJASIM_bsxbslogicalrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_411 * YKJASIM_as;
A68_386  ZKJASIM;  /* avoid structure result */
A68_BOOL  ALJASIM;  /* clause result */
A_PROC_ENTRY(bsxbslogicalrs);
 /* line 411: */
 /* line 412: */
{ 
YKJASIM_as = XCJASIM_arithstack();
 /* line 413: */
KCJASIM_size( S, ECJASIM_either(S, (EZGASIM_tos+1), (EZGASIM_tos+3)), &ZKJASIM );
YKJASIM_as = IDJASIM_push(YKJASIM_as, ZKJASIM);
 /* line 414: */
WFJASIM_checksizeis(YKJASIM_as, 1);
 /* line 415: */
(*Resspc) = NFJASIM_tos(YKJASIM_as);
 /* line 416: */
 /* line 417: */
ALJASIM = !SFJASIM_inline(YKJASIM_as);
} 
A_PROC_EXIT(bsxbslogicalrs);
return( ALJASIM );
} 
#undef NL

A_STATIC A68_BOOL  DLJASIM_bslogicalrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_411 * ELJASIM_as;
A68_386  FLJASIM;  /* avoid structure result */
A68_BOOL  GLJASIM;  /* clause result */
A_PROC_ENTRY(bslogicalrs);
 /* line 422: */
 /* line 423: */
{ 
ELJASIM_as = XCJASIM_arithstack();
 /* line 424: */
KCJASIM_size( S, FZGASIM_tos1, &FLJASIM );
ELJASIM_as = IDJASIM_push(ELJASIM_as, FLJASIM);
 /* line 425: */
WFJASIM_checksizeis(ELJASIM_as, 1);
 /* line 426: */
(*Resspc) = NFJASIM_tos(ELJASIM_as);
 /* line 427: */
 /* line 428: */
GLJASIM = !SFJASIM_inline(ELJASIM_as);
} 
A_PROC_EXIT(bslogicalrs);
return( GLJASIM );
} 
#undef NL

A_STATIC A68_BOOL  JLJASIM_dividews(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  LLJASIM;  /* avoid structure result */
A68_411 * KLJASIM_as;
A68_386  MLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  NLJASIM;  /* YIELD */
A68_386  OLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PLJASIM;  /* YIELD */
A68_386  QLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  RLJASIM;  /* YIELD */
A68_386  SLJASIM;  /* avoid structure result */
A68_386  TLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ULJASIM;  /* YIELD */
A68_386  VLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WLJASIM;  /* YIELD */
A68_386  XLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YLJASIM;  /* YIELD */
A68_386  ZLJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  AMJASIM;  /* YIELD */
A68_386  BMJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CMJASIM;  /* YIELD */
A68_386  DMJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  EMJASIM;  /* YIELD */
A68_BOOL  FMJASIM;  /* clause result */
A_PROC_ENTRY(dividews);
 /* line 436: */
 /* line 437: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &LLJASIM );
KLJASIM_as = IDJASIM_push(XCJASIM_arithstack(), LLJASIM);
 /* line 438: */
NLJASIM = 7 ;
KLJASIM_as = AGJASIM_add(IDJASIM_push(KLJASIM_as, A_UNITE(MLJASIM,mode2,2,NLJASIM)));
 /* line 439: */
PLJASIM = 8 ;
KLJASIM_as = XHJASIM_div(IDJASIM_push(KLJASIM_as, A_UNITE(OLJASIM,mode2,2,PLJASIM)));
 /* line 440: */
RLJASIM = 2 ;
KLJASIM_as = IHJASIM_mul(IDJASIM_push(KLJASIM_as, A_UNITE(QLJASIM,mode2,2,RLJASIM)));
 /* line 441: */
KCJASIM_size( S, (EZGASIM_tos+3), &SLJASIM );
KLJASIM_as = IDJASIM_push(KLJASIM_as, SLJASIM);
 /* line 442: */
ULJASIM = 7 ;
KLJASIM_as = AGJASIM_add(IDJASIM_push(KLJASIM_as, A_UNITE(TLJASIM,mode2,2,ULJASIM)));
 /* line 443: */
WLJASIM = 8 ;
KLJASIM_as = XHJASIM_div(IDJASIM_push(KLJASIM_as, A_UNITE(VLJASIM,mode2,2,WLJASIM)));
 /* line 444: */
YLJASIM = 3 ;
KLJASIM_as = IHJASIM_mul(IDJASIM_push(KLJASIM_as, A_UNITE(XLJASIM,mode2,2,YLJASIM)));
 /* line 445: */
KLJASIM_as = AGJASIM_add(KLJASIM_as);
 /* line 446: */
AMJASIM = 5 ;
KLJASIM_as = AGJASIM_add(IDJASIM_push(KLJASIM_as, A_UNITE(ZLJASIM,mode2,2,AMJASIM)));
 /* line 447: */
CMJASIM = 4 ;
KLJASIM_as = XHJASIM_div(IDJASIM_push(KLJASIM_as, A_UNITE(BMJASIM,mode2,2,CMJASIM)));
 /* line 448: */
EMJASIM = 4 ;
KLJASIM_as = IHJASIM_mul(IDJASIM_push(KLJASIM_as, A_UNITE(DMJASIM,mode2,2,EMJASIM)));
 /* line 449: */
WFJASIM_checksizeis(KLJASIM_as, 1);
 /* line 450: */
(*Wrkspc) = NFJASIM_tos(KLJASIM_as);
 /* line 451: */
 /* line 452: */
FMJASIM = !SFJASIM_inline(KLJASIM_as);
} 
A_PROC_EXIT(dividews);
return( FMJASIM );
} 
#undef NL

A_STATIC A68_BOOL  IMJASIM_timesrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_386  KMJASIM;  /* avoid structure result */
A68_411 * JMJASIM_as;
A68_386  LMJASIM;  /* avoid structure result */
A68_BOOL  MMJASIM;  /* clause result */
A_PROC_ENTRY(timesrs);
 /* line 457: */
 /* line 458: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &KMJASIM );
JMJASIM_as = IDJASIM_push(XCJASIM_arithstack(), KMJASIM);
 /* line 459: */
KCJASIM_size( S, (EZGASIM_tos+3), &LMJASIM );
JMJASIM_as = AGJASIM_add(IDJASIM_push(JMJASIM_as, LMJASIM));
 /* line 460: */
WFJASIM_checksizeis(JMJASIM_as, 1);
 /* line 461: */
(*Resspc) = NFJASIM_tos(JMJASIM_as);
 /* line 462: */
 /* line 463: */
MMJASIM = !SFJASIM_inline(JMJASIM_as);
} 
A_PROC_EXIT(timesrs);
return( MMJASIM );
} 
#undef NL

A_STATIC A68_BOOL  PMJASIM_timesws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  RMJASIM;  /* avoid structure result */
A68_411 * QMJASIM_as;
A68_386  SMJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  TMJASIM;  /* YIELD */
A68_386  UMJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  VMJASIM;  /* YIELD */
A68_386  WMJASIM;  /* avoid structure result */
A68_386  XMJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YMJASIM;  /* YIELD */
A68_386  ZMJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ANJASIM;  /* YIELD */
A68_386  BNJASIM;  /* avoid structure result */
A68_386  CNJASIM;  /* avoid structure result */
A68_386  DNJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ENJASIM;  /* YIELD */
A68_386  FNJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  GNJASIM;  /* YIELD */
A68_386  HNJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  INJASIM;  /* YIELD */
A68_386  JNJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  KNJASIM;  /* YIELD */
A68_386  LNJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  MNJASIM;  /* YIELD */
A68_BOOL  NNJASIM;  /* clause result */
A_PROC_ENTRY(timesws);
 /* line 468: */
 /* line 469: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &RMJASIM );
QMJASIM_as = IDJASIM_push(XCJASIM_arithstack(), RMJASIM);
 /* line 470: */
TMJASIM = 7 ;
QMJASIM_as = AGJASIM_add(IDJASIM_push(QMJASIM_as, A_UNITE(SMJASIM,mode2,2,TMJASIM)));
 /* line 471: */
VMJASIM = 8 ;
QMJASIM_as = XHJASIM_div(IDJASIM_push(QMJASIM_as, A_UNITE(UMJASIM,mode2,2,VMJASIM)));
 /* line 472: */
KCJASIM_size( S, (EZGASIM_tos+3), &WMJASIM );
QMJASIM_as = IDJASIM_push(QMJASIM_as, WMJASIM);
 /* line 473: */
YMJASIM = 7 ;
QMJASIM_as = AGJASIM_add(IDJASIM_push(QMJASIM_as, A_UNITE(XMJASIM,mode2,2,YMJASIM)));
 /* line 474: */
ANJASIM = 8 ;
QMJASIM_as = XHJASIM_div(IDJASIM_push(QMJASIM_as, A_UNITE(ZMJASIM,mode2,2,ANJASIM)));
 /* line 475: */
QMJASIM_as = AGJASIM_add(QMJASIM_as);
 /* line 476: */
KCJASIM_size( S, (EZGASIM_tos+1), &BNJASIM );
QMJASIM_as = IDJASIM_push(QMJASIM_as, BNJASIM);
 /* line 477: */
KCJASIM_size( S, (EZGASIM_tos+3), &CNJASIM );
QMJASIM_as = AGJASIM_add(IDJASIM_push(QMJASIM_as, CNJASIM));
 /* line 478: */
ENJASIM = 7 ;
QMJASIM_as = AGJASIM_add(IDJASIM_push(QMJASIM_as, A_UNITE(DNJASIM,mode2,2,ENJASIM)));
 /* line 479: */
GNJASIM = 8 ;
QMJASIM_as = XHJASIM_div(IDJASIM_push(QMJASIM_as, A_UNITE(FNJASIM,mode2,2,GNJASIM)));
 /* line 480: */
QMJASIM_as = AGJASIM_add(QMJASIM_as);
 /* line 481: */
INJASIM = 3 ;
QMJASIM_as = AGJASIM_add(IDJASIM_push(QMJASIM_as, A_UNITE(HNJASIM,mode2,2,INJASIM)));
 /* line 482: */
KNJASIM = 4 ;
QMJASIM_as = XHJASIM_div(IDJASIM_push(QMJASIM_as, A_UNITE(JNJASIM,mode2,2,KNJASIM)));
 /* line 483: */
MNJASIM = 4 ;
QMJASIM_as = IHJASIM_mul(IDJASIM_push(QMJASIM_as, A_UNITE(LNJASIM,mode2,2,MNJASIM)));
 /* line 484: */
WFJASIM_checksizeis(QMJASIM_as, 1);
 /* line 485: */
(*Wrkspc) = NFJASIM_tos(QMJASIM_as);
 /* line 486: */
 /* line 487: */
NNJASIM = !SFJASIM_inline(QMJASIM_as);
} 
A_PROC_EXIT(timesws);
return( NNJASIM );
} 
#undef NL

A_STATIC A68_BOOL  QNJASIM_shiftrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_386  SNJASIM;  /* avoid structure result */
A68_411 * RNJASIM_as;
A68_386  TNJASIM;  /* avoid structure result */
A68_BOOL  UNJASIM;  /* clause result */
A_PROC_ENTRY(shiftrs);
 /* line 492: */
 /* line 493: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &SNJASIM );
RNJASIM_as = IDJASIM_push(XCJASIM_arithstack(), SNJASIM);
 /* line 494: */
UCJASIM_value( S, (EZGASIM_tos+2), &TNJASIM );
RNJASIM_as = AGJASIM_add(IDJASIM_push(RNJASIM_as, TNJASIM));
 /* line 495: */
WFJASIM_checksizeis(RNJASIM_as, 1);
 /* line 496: */
(*Resspc) = NFJASIM_tos(RNJASIM_as);
 /* line 497: */
 /* line 498: */
UNJASIM = !SFJASIM_inline(RNJASIM_as);
} 
A_PROC_EXIT(shiftrs);
return( UNJASIM );
} 
#undef NL

A_STATIC A68_BOOL  XNJASIM_plusws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  ZNJASIM;  /* avoid structure result */
A68_411 * YNJASIM_as;
A68_386  AOJASIM;  /* avoid structure result */
A68_386  BOJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  COJASIM;  /* YIELD */
A68_386  DOJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  EOJASIM;  /* YIELD */
A68_386  FOJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  GOJASIM;  /* YIELD */
A68_BOOL  HOJASIM;  /* clause result */
A_PROC_ENTRY(plusws);
 /* line 503: */
 /* line 504: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &ZNJASIM );
YNJASIM_as = IDJASIM_push(XCJASIM_arithstack(), ZNJASIM);
 /* line 505: */
KCJASIM_size( S, (EZGASIM_tos+3), &AOJASIM );
YNJASIM_as = QIJASIM_max(IDJASIM_push(YNJASIM_as, AOJASIM));
 /* line 506: */
COJASIM = (1+31) ;
YNJASIM_as = AGJASIM_add(IDJASIM_push(YNJASIM_as, A_UNITE(BOJASIM,mode2,2,COJASIM)));
 /* line 507: */
EOJASIM = 32 ;
YNJASIM_as = XHJASIM_div(IDJASIM_push(YNJASIM_as, A_UNITE(DOJASIM,mode2,2,EOJASIM)));
 /* line 508: */
GOJASIM = 8 ;
YNJASIM_as = IHJASIM_mul(IDJASIM_push(YNJASIM_as, A_UNITE(FOJASIM,mode2,2,GOJASIM)));
 /* line 509: */
WFJASIM_checksizeis(YNJASIM_as, 1);
 /* line 510: */
(*Wrkspc) = NFJASIM_tos(YNJASIM_as);
 /* line 511: */
 /* line 512: */
HOJASIM = !SFJASIM_inline(YNJASIM_as);
} 
A_PROC_EXIT(plusws);
return( HOJASIM );
} 
#undef NL

A_STATIC A68_BOOL  KOJASIM_plusrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_386  MOJASIM;  /* avoid structure result */
A68_411 * LOJASIM_as;
A68_386  NOJASIM;  /* avoid structure result */
A68_386  OOJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  POJASIM;  /* YIELD */
A68_BOOL  QOJASIM;  /* clause result */
A_PROC_ENTRY(plusrs);
 /* line 517: */
 /* line 518: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &MOJASIM );
LOJASIM_as = IDJASIM_push(XCJASIM_arithstack(), MOJASIM);
 /* line 519: */
KCJASIM_size( S, (EZGASIM_tos+3), &NOJASIM );
LOJASIM_as = QIJASIM_max(IDJASIM_push(LOJASIM_as, NOJASIM));
 /* line 520: */
POJASIM = 1 ;
LOJASIM_as = AGJASIM_add(IDJASIM_push(LOJASIM_as, A_UNITE(OOJASIM,mode2,2,POJASIM)));
 /* line 521: */
WFJASIM_checksizeis(LOJASIM_as, 1);
 /* line 522: */
(*Resspc) = NFJASIM_tos(LOJASIM_as);
 /* line 523: */
 /* line 524: */
QOJASIM = !SFJASIM_inline(LOJASIM_as);
} 
A_PROC_EXIT(plusrs);
return( QOJASIM );
} 
#undef NL

A_STATIC A68_BOOL  TOJASIM_notrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_386  VOJASIM;  /* avoid structure result */
A68_411 * UOJASIM_as;
A68_BOOL  WOJASIM;  /* clause result */
A_PROC_ENTRY(notrs);
 /* line 528: */
 /* line 529: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &VOJASIM );
UOJASIM_as = IDJASIM_push(XCJASIM_arithstack(), VOJASIM);
 /* line 530: */
WFJASIM_checksizeis(UOJASIM_as, 1);
 /* line 531: */
(*Resspc) = NFJASIM_tos(UOJASIM_as);
 /* line 532: */
 /* line 533: */
WOJASIM = !SFJASIM_inline(UOJASIM_as);
} 
A_PROC_EXIT(notrs);
return( WOJASIM );
} 
#undef NL

A_STATIC A68_BOOL  ZOJASIM_convert_1ws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  BPJASIM;  /* avoid structure result */
A68_411 * APJASIM_as;
A68_386  CPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DPJASIM;  /* YIELD */
A68_386  EPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FPJASIM;  /* YIELD */
A68_386  GPJASIM;  /* avoid structure result */
A68_386  HPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  IPJASIM;  /* YIELD */
A68_386  JPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  KPJASIM;  /* YIELD */
A68_386  LPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  MPJASIM;  /* YIELD */
A68_BOOL  NPJASIM;  /* clause result */
A_PROC_ENTRY(convert_1ws);
 /* line 538: */
 /* line 539: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &BPJASIM );
APJASIM_as = IDJASIM_push(XCJASIM_arithstack(), BPJASIM);
 /* line 540: */
DPJASIM = 7 ;
APJASIM_as = AGJASIM_add(IDJASIM_push(APJASIM_as, A_UNITE(CPJASIM,mode2,2,DPJASIM)));
 /* line 541: */
FPJASIM = 8 ;
APJASIM_as = XHJASIM_div(IDJASIM_push(APJASIM_as, A_UNITE(EPJASIM,mode2,2,FPJASIM)));
 /* line 542: */
UCJASIM_value( S, (EZGASIM_tos+2), &GPJASIM );
APJASIM_as = AGJASIM_add(IDJASIM_push(APJASIM_as, GPJASIM));
 /* line 543: */
IPJASIM = 3 ;
APJASIM_as = AGJASIM_add(IDJASIM_push(APJASIM_as, A_UNITE(HPJASIM,mode2,2,IPJASIM)));
 /* line 544: */
KPJASIM = 4 ;
APJASIM_as = XHJASIM_div(IDJASIM_push(APJASIM_as, A_UNITE(JPJASIM,mode2,2,KPJASIM)));
 /* line 545: */
MPJASIM = 4 ;
APJASIM_as = IHJASIM_mul(IDJASIM_push(APJASIM_as, A_UNITE(LPJASIM,mode2,2,MPJASIM)));
 /* line 546: */
WFJASIM_checksizeis(APJASIM_as, 1);
 /* line 547: */
(*Wrkspc) = NFJASIM_tos(APJASIM_as);
 /* line 548: */
 /* line 549: */
NPJASIM = !SFJASIM_inline(APJASIM_as);
} 
A_PROC_EXIT(convert_1ws);
return( NPJASIM );
} 
#undef NL

A_STATIC A68_BOOL  QPJASIM_convert_2ws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  SPJASIM;  /* avoid structure result */
A68_411 * RPJASIM_as;
A68_386  TPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  UPJASIM;  /* YIELD */
A68_386  VPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WPJASIM;  /* YIELD */
A68_386  XPJASIM;  /* avoid structure result */
A68_386  YPJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZPJASIM;  /* YIELD */
A68_386  AQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  BQJASIM;  /* YIELD */
A68_386  CQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DQJASIM;  /* YIELD */
A68_386  EQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FQJASIM;  /* YIELD */
A68_386  GQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HQJASIM;  /* YIELD */
A68_BOOL  IQJASIM;  /* clause result */
A_PROC_ENTRY(convert_2ws);
 /* line 554: */
 /* line 555: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &SPJASIM );
RPJASIM_as = IDJASIM_push(XCJASIM_arithstack(), SPJASIM);
 /* line 556: */
UPJASIM = 7 ;
RPJASIM_as = AGJASIM_add(IDJASIM_push(RPJASIM_as, A_UNITE(TPJASIM,mode2,2,UPJASIM)));
 /* line 557: */
WPJASIM = 8 ;
RPJASIM_as = XHJASIM_div(IDJASIM_push(RPJASIM_as, A_UNITE(VPJASIM,mode2,2,WPJASIM)));
 /* line 558: */
UCJASIM_value( S, (EZGASIM_tos+2), &XPJASIM );
RPJASIM_as = IDJASIM_push(RPJASIM_as, XPJASIM);
 /* line 559: */
ZPJASIM = 7 ;
RPJASIM_as = AGJASIM_add(IDJASIM_push(RPJASIM_as, A_UNITE(YPJASIM,mode2,2,ZPJASIM)));
 /* line 560: */
BQJASIM = 8 ;
RPJASIM_as = XHJASIM_div(IDJASIM_push(RPJASIM_as, A_UNITE(AQJASIM,mode2,2,BQJASIM)));
 /* line 561: */
RPJASIM_as = AGJASIM_add(RPJASIM_as);
 /* line 562: */
DQJASIM = 3 ;
RPJASIM_as = AGJASIM_add(IDJASIM_push(RPJASIM_as, A_UNITE(CQJASIM,mode2,2,DQJASIM)));
 /* line 563: */
FQJASIM = 4 ;
RPJASIM_as = XHJASIM_div(IDJASIM_push(RPJASIM_as, A_UNITE(EQJASIM,mode2,2,FQJASIM)));
 /* line 564: */
HQJASIM = 4 ;
RPJASIM_as = IHJASIM_mul(IDJASIM_push(RPJASIM_as, A_UNITE(GQJASIM,mode2,2,HQJASIM)));
 /* line 565: */
WFJASIM_checksizeis(RPJASIM_as, 1);
 /* line 566: */
(*Wrkspc) = NFJASIM_tos(RPJASIM_as);
 /* line 567: */
 /* line 568: */
IQJASIM = !SFJASIM_inline(RPJASIM_as);
} 
A_PROC_EXIT(convert_2ws);
return( IQJASIM );
} 
#undef NL

A_STATIC A68_BOOL  LQJASIM_negatews(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  NQJASIM;  /* avoid structure result */
A68_411 * MQJASIM_as;
A68_386  OQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PQJASIM;  /* YIELD */
A68_386  QQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  RQJASIM;  /* YIELD */
A68_386  SQJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  TQJASIM;  /* YIELD */
A68_BOOL  UQJASIM;  /* clause result */
A_PROC_ENTRY(negatews);
 /* line 572: */
 /* line 573: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &NQJASIM );
MQJASIM_as = IDJASIM_push(XCJASIM_arithstack(), NQJASIM);
 /* line 574: */
PQJASIM = 31 ;
MQJASIM_as = AGJASIM_add(IDJASIM_push(MQJASIM_as, A_UNITE(OQJASIM,mode2,2,PQJASIM)));
 /* line 575: */
RQJASIM = 32 ;
MQJASIM_as = XHJASIM_div(IDJASIM_push(MQJASIM_as, A_UNITE(QQJASIM,mode2,2,RQJASIM)));
 /* line 576: */
TQJASIM = 16 ;
MQJASIM_as = IHJASIM_mul(IDJASIM_push(MQJASIM_as, A_UNITE(SQJASIM,mode2,2,TQJASIM)));
 /* line 577: */
WFJASIM_checksizeis(MQJASIM_as, 1);
 /* line 578: */
(*Wrkspc) = NFJASIM_tos(MQJASIM_as);
 /* line 579: */
 /* line 580: */
UQJASIM = !SFJASIM_inline(MQJASIM_as);
} 
A_PROC_EXIT(negatews);
return( UQJASIM );
} 
#undef NL

A_STATIC A68_BOOL  XQJASIM_negaters(A68_375 * S, A68_INT * Resspc)
{ 
A68_386  ZQJASIM;  /* avoid structure result */
A68_411 * YQJASIM_as;
A68_386  ARJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  BRJASIM;  /* YIELD */
A68_BOOL  CRJASIM;  /* clause result */
A_PROC_ENTRY(negaters);
 /* line 584: */
 /* line 585: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &ZQJASIM );
YQJASIM_as = IDJASIM_push(XCJASIM_arithstack(), ZQJASIM);
 /* line 586: */
BRJASIM = 1 ;
YQJASIM_as = AGJASIM_add(IDJASIM_push(YQJASIM_as, A_UNITE(ARJASIM,mode2,2,BRJASIM)));
 /* line 587: */
WFJASIM_checksizeis(YQJASIM_as, 1);
 /* line 588: */
(*Resspc) = NFJASIM_tos(YQJASIM_as);
 /* line 589: */
 /* line 590: */
CRJASIM = !SFJASIM_inline(YQJASIM_as);
} 
A_PROC_EXIT(negaters);
return( CRJASIM );
} 
#undef NL

A_STATIC A68_BOOL  FRJASIM_sqrtws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  HRJASIM;  /* avoid structure result */
A68_411 * GRJASIM_as;
A68_386  IRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  JRJASIM;  /* YIELD */
A68_386  KRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  LRJASIM;  /* YIELD */
A68_386  MRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  NRJASIM;  /* YIELD */
A68_386  ORJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PRJASIM;  /* YIELD */
A68_386  QRJASIM;  /* avoid structure result */
A68_386  RRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  SRJASIM;  /* YIELD */
A68_386  TRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  URJASIM;  /* YIELD */
A68_386  VRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WRJASIM;  /* YIELD */
A68_386  XRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YRJASIM;  /* YIELD */
A68_386  ZRJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ASJASIM;  /* YIELD */
A68_386  BSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CSJASIM;  /* YIELD */
A68_386  DSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ESJASIM;  /* YIELD */
A68_386  FSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  GSJASIM;  /* YIELD */
A68_BOOL  HSJASIM;  /* clause result */
A_PROC_ENTRY(sqrtws);
 /* line 595: */
 /* line 596: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &HRJASIM );
GRJASIM_as = IDJASIM_push(XCJASIM_arithstack(), HRJASIM);
 /* line 597: */
JRJASIM = 1 ;
GRJASIM_as = AGJASIM_add(IDJASIM_push(GRJASIM_as, A_UNITE(IRJASIM,mode2,2,JRJASIM)));
 /* line 598: */
LRJASIM = 2 ;
GRJASIM_as = XHJASIM_div(IDJASIM_push(GRJASIM_as, A_UNITE(KRJASIM,mode2,2,LRJASIM)));
 /* line 599: */
NRJASIM = 8 ;
GRJASIM_as = AGJASIM_add(IDJASIM_push(GRJASIM_as, A_UNITE(MRJASIM,mode2,2,NRJASIM)));
 /* line 600: */
PRJASIM = 8 ;
GRJASIM_as = XHJASIM_div(IDJASIM_push(GRJASIM_as, A_UNITE(ORJASIM,mode2,2,PRJASIM)));
 /* line 601: */
KCJASIM_size( S, (EZGASIM_tos+1), &QRJASIM );
GRJASIM_as = IDJASIM_push(GRJASIM_as, QRJASIM);
 /* line 602: */
SRJASIM = 1 ;
GRJASIM_as = AGJASIM_add(IDJASIM_push(GRJASIM_as, A_UNITE(RRJASIM,mode2,2,SRJASIM)));
 /* line 603: */
URJASIM = 2 ;
GRJASIM_as = XHJASIM_div(IDJASIM_push(GRJASIM_as, A_UNITE(TRJASIM,mode2,2,URJASIM)));
 /* line 604: */
WRJASIM = 7 ;
GRJASIM_as = AGJASIM_add(IDJASIM_push(GRJASIM_as, A_UNITE(VRJASIM,mode2,2,WRJASIM)));
 /* line 605: */
YRJASIM = 8 ;
GRJASIM_as = XHJASIM_div(IDJASIM_push(GRJASIM_as, A_UNITE(XRJASIM,mode2,2,YRJASIM)));
 /* line 606: */
ASJASIM = 6 ;
GRJASIM_as = IHJASIM_mul(IDJASIM_push(GRJASIM_as, A_UNITE(ZRJASIM,mode2,2,ASJASIM)));
 /* line 607: */
GRJASIM_as = AGJASIM_add(GRJASIM_as);
 /* line 608: */
CSJASIM = 3 ;
GRJASIM_as = AGJASIM_add(IDJASIM_push(GRJASIM_as, A_UNITE(BSJASIM,mode2,2,CSJASIM)));
 /* line 609: */
ESJASIM = 4 ;
GRJASIM_as = XHJASIM_div(IDJASIM_push(GRJASIM_as, A_UNITE(DSJASIM,mode2,2,ESJASIM)));
 /* line 610: */
GSJASIM = 4 ;
GRJASIM_as = IHJASIM_mul(IDJASIM_push(GRJASIM_as, A_UNITE(FSJASIM,mode2,2,GSJASIM)));
 /* line 611: */
WFJASIM_checksizeis(GRJASIM_as, 1);
 /* line 612: */
(*Wrkspc) = NFJASIM_tos(GRJASIM_as);
 /* line 613: */
 /* line 614: */
HSJASIM = !SFJASIM_inline(GRJASIM_as);
} 
A_PROC_EXIT(sqrtws);
return( HSJASIM );
} 
#undef NL

A_STATIC A68_BOOL  KSJASIM_sqrtrs(A68_375 * S, A68_INT * Resspc)
{ 
A68_386  MSJASIM;  /* avoid structure result */
A68_411 * LSJASIM_as;
A68_386  NSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  OSJASIM;  /* YIELD */
A68_386  PSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  QSJASIM;  /* YIELD */
A68_BOOL  RSJASIM;  /* clause result */
A_PROC_ENTRY(sqrtrs);
 /* line 618: */
 /* line 619: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &MSJASIM );
LSJASIM_as = IDJASIM_push(XCJASIM_arithstack(), MSJASIM);
 /* line 620: */
OSJASIM = 1 ;
LSJASIM_as = AGJASIM_add(IDJASIM_push(LSJASIM_as, A_UNITE(NSJASIM,mode2,2,OSJASIM)));
 /* line 621: */
QSJASIM = 2 ;
LSJASIM_as = XHJASIM_div(IDJASIM_push(LSJASIM_as, A_UNITE(PSJASIM,mode2,2,QSJASIM)));
 /* line 622: */
WFJASIM_checksizeis(LSJASIM_as, 1);
 /* line 623: */
(*Resspc) = NFJASIM_tos(LSJASIM_as);
 /* line 624: */
 /* line 625: */
RSJASIM = !SFJASIM_inline(LSJASIM_as);
} 
A_PROC_EXIT(sqrtrs);
return( RSJASIM );
} 
#undef NL

A_STATIC A68_BOOL  USJASIM_modws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  WSJASIM;  /* avoid structure result */
A68_411 * VSJASIM_as;
A68_386  XSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YSJASIM;  /* YIELD */
A68_386  ZSJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ATJASIM;  /* YIELD */
A68_386  BTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CTJASIM;  /* YIELD */
A68_386  DTJASIM;  /* avoid structure result */
A68_386  ETJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FTJASIM;  /* YIELD */
A68_386  GTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HTJASIM;  /* YIELD */
A68_386  ITJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  JTJASIM;  /* YIELD */
A68_386  KTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  LTJASIM;  /* YIELD */
A68_386  MTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  NTJASIM;  /* YIELD */
A68_386  OTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PTJASIM;  /* YIELD */
A68_BOOL  QTJASIM;  /* clause result */
A_PROC_ENTRY(modws);
 /* line 634: */
 /* line 635: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &WSJASIM );
VSJASIM_as = IDJASIM_push(XCJASIM_arithstack(), WSJASIM);
 /* line 636: */
YSJASIM = 7 ;
VSJASIM_as = AGJASIM_add(IDJASIM_push(VSJASIM_as, A_UNITE(XSJASIM,mode2,2,YSJASIM)));
 /* line 637: */
ATJASIM = 8 ;
VSJASIM_as = XHJASIM_div(IDJASIM_push(VSJASIM_as, A_UNITE(ZSJASIM,mode2,2,ATJASIM)));
 /* line 638: */
CTJASIM = 3 ;
VSJASIM_as = IHJASIM_mul(IDJASIM_push(VSJASIM_as, A_UNITE(BTJASIM,mode2,2,CTJASIM)));
 /* line 639: */
KCJASIM_size( S, (EZGASIM_tos+3), &DTJASIM );
VSJASIM_as = IDJASIM_push(VSJASIM_as, DTJASIM);
 /* line 640: */
FTJASIM = 7 ;
VSJASIM_as = AGJASIM_add(IDJASIM_push(VSJASIM_as, A_UNITE(ETJASIM,mode2,2,FTJASIM)));
 /* line 641: */
HTJASIM = 8 ;
VSJASIM_as = XHJASIM_div(IDJASIM_push(VSJASIM_as, A_UNITE(GTJASIM,mode2,2,HTJASIM)));
 /* line 642: */
JTJASIM = 3 ;
VSJASIM_as = IHJASIM_mul(IDJASIM_push(VSJASIM_as, A_UNITE(ITJASIM,mode2,2,JTJASIM)));
 /* line 643: */
VSJASIM_as = AGJASIM_add(VSJASIM_as);
 /* line 644: */
LTJASIM = 7 ;
VSJASIM_as = AGJASIM_add(IDJASIM_push(VSJASIM_as, A_UNITE(KTJASIM,mode2,2,LTJASIM)));
 /* line 645: */
NTJASIM = 4 ;
VSJASIM_as = XHJASIM_div(IDJASIM_push(VSJASIM_as, A_UNITE(MTJASIM,mode2,2,NTJASIM)));
 /* line 646: */
PTJASIM = 4 ;
VSJASIM_as = IHJASIM_mul(IDJASIM_push(VSJASIM_as, A_UNITE(OTJASIM,mode2,2,PTJASIM)));
 /* line 647: */
WFJASIM_checksizeis(VSJASIM_as, 1);
 /* line 648: */
(*Wrkspc) = NFJASIM_tos(VSJASIM_as);
 /* line 649: */
 /* line 650: */
QTJASIM = !SFJASIM_inline(VSJASIM_as);
} 
A_PROC_EXIT(modws);
return( QTJASIM );
} 
#undef NL

A_STATIC A68_BOOL  TTJASIM_convert_real_1ws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  VTJASIM;  /* avoid structure result */
A68_411 * UTJASIM_as;
A68_386  WTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  XTJASIM;  /* YIELD */
A68_386  YTJASIM;  /* avoid structure result */
A68_386  ZTJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  AUJASIM;  /* YIELD */
A68_386  BUJASIM;  /* avoid structure result */
A68_386  CUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DUJASIM;  /* YIELD */
A68_386  EUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FUJASIM;  /* YIELD */
A68_386  GUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HUJASIM;  /* YIELD */
A68_386  IUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  JUJASIM;  /* YIELD */
A68_386  KUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  LUJASIM;  /* YIELD */
A68_386  MUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  NUJASIM;  /* YIELD */
A68_BOOL  OUJASIM;  /* clause result */
A_PROC_ENTRY(convert_real_1ws);
 /* line 659: */
 /* line 660: */
{ 
KCJASIM_size( S, (EZGASIM_tos+1), &VTJASIM );
UTJASIM_as = IDJASIM_push(XCJASIM_arithstack(), VTJASIM);
 /* line 661: */
XTJASIM = 14 ;
UTJASIM_as = IHJASIM_mul(IDJASIM_push(UTJASIM_as, A_UNITE(WTJASIM,mode2,2,XTJASIM)));
 /* line 662: */
UCJASIM_value( S, (EZGASIM_tos+4), &YTJASIM );
UTJASIM_as = IDJASIM_push(UTJASIM_as, YTJASIM);
 /* line 663: */
AUJASIM = 24 ;
UTJASIM_as = IHJASIM_mul(IDJASIM_push(UTJASIM_as, A_UNITE(ZTJASIM,mode2,2,AUJASIM)));
 /* line 664: */
UTJASIM_as = AGJASIM_add(UTJASIM_as);
 /* line 665: */
UCJASIM_value( S, (EZGASIM_tos+5), &BUJASIM );
UTJASIM_as = IDJASIM_push(UTJASIM_as, BUJASIM);
 /* line 666: */
DUJASIM = 3 ;
UTJASIM_as = IHJASIM_mul(IDJASIM_push(UTJASIM_as, A_UNITE(CUJASIM,mode2,2,DUJASIM)));
 /* line 667: */
UTJASIM_as = AGJASIM_add(UTJASIM_as);
 /* line 668: */
FUJASIM = 551 ;
UTJASIM_as = AGJASIM_add(IDJASIM_push(UTJASIM_as, A_UNITE(EUJASIM,mode2,2,FUJASIM)));
 /* line 669: */
HUJASIM = 24 ;
UTJASIM_as = XHJASIM_div(IDJASIM_push(UTJASIM_as, A_UNITE(GUJASIM,mode2,2,HUJASIM)));
 /* line 670: */
JUJASIM = 3 ;
UTJASIM_as = AGJASIM_add(IDJASIM_push(UTJASIM_as, A_UNITE(IUJASIM,mode2,2,JUJASIM)));
 /* line 671: */
LUJASIM = 4 ;
UTJASIM_as = XHJASIM_div(IDJASIM_push(UTJASIM_as, A_UNITE(KUJASIM,mode2,2,LUJASIM)));
 /* line 672: */
NUJASIM = 4 ;
UTJASIM_as = IHJASIM_mul(IDJASIM_push(UTJASIM_as, A_UNITE(MUJASIM,mode2,2,NUJASIM)));
 /* line 673: */
WFJASIM_checksizeis(UTJASIM_as, 1);
 /* line 674: */
(*Wrkspc) = NFJASIM_tos(UTJASIM_as);
 /* line 675: */
 /* line 676: */
OUJASIM = !SFJASIM_inline(UTJASIM_as);
} 
A_PROC_EXIT(convert_real_1ws);
return( OUJASIM );
} 
#undef NL

A_STATIC A68_BOOL  RUJASIM_convert_real_2ws(A68_375 * S, A68_INT * Wrkspc)
{ 
A68_386  TUJASIM;  /* avoid structure result */
A68_411 * SUJASIM_as;
A68_386  UUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  VUJASIM;  /* YIELD */
A68_386  WUJASIM;  /* avoid structure result */
A68_386  XUJASIM;  /* avoid structure result */
A68_386  YUJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZUJASIM;  /* YIELD */
A68_386  AVJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  BVJASIM;  /* YIELD */
A68_386  CVJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DVJASIM;  /* YIELD */
A68_386  EVJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  FVJASIM;  /* YIELD */
A68_386  GVJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HVJASIM;  /* YIELD */
A68_BOOL  IVJASIM;  /* clause result */
A_PROC_ENTRY(convert_real_2ws);
 /* line 685: */
 /* line 686: */
{ 
KCJASIM_size( S, (EZGASIM_tos+3), &TUJASIM );
SUJASIM_as = IDJASIM_push(XCJASIM_arithstack(), TUJASIM);
 /* line 687: */
VUJASIM = 8 ;
SUJASIM_as = IHJASIM_mul(IDJASIM_push(SUJASIM_as, A_UNITE(UUJASIM,mode2,2,VUJASIM)));
 /* line 688: */
UCJASIM_value( S, (EZGASIM_tos+5), &WUJASIM );
SUJASIM_as = IDJASIM_push(SUJASIM_as, WUJASIM);
 /* line 689: */
SUJASIM_as = AGJASIM_add(SUJASIM_as);
 /* line 690: */
UCJASIM_value( S, (EZGASIM_tos+4), &XUJASIM );
SUJASIM_as = IDJASIM_push(SUJASIM_as, XUJASIM);
 /* line 691: */
SUJASIM_as = AGJASIM_add(SUJASIM_as);
 /* line 692: */
ZUJASIM = 180 ;
SUJASIM_as = AGJASIM_add(IDJASIM_push(SUJASIM_as, A_UNITE(YUJASIM,mode2,2,ZUJASIM)));
 /* line 693: */
BVJASIM = 8 ;
SUJASIM_as = XHJASIM_div(IDJASIM_push(SUJASIM_as, A_UNITE(AVJASIM,mode2,2,BVJASIM)));
 /* line 694: */
DVJASIM = 3 ;
SUJASIM_as = AGJASIM_add(IDJASIM_push(SUJASIM_as, A_UNITE(CVJASIM,mode2,2,DVJASIM)));
 /* line 695: */
FVJASIM = 4 ;
SUJASIM_as = XHJASIM_div(IDJASIM_push(SUJASIM_as, A_UNITE(EVJASIM,mode2,2,FVJASIM)));
 /* line 696: */
HVJASIM = 4 ;
SUJASIM_as = IHJASIM_mul(IDJASIM_push(SUJASIM_as, A_UNITE(GVJASIM,mode2,2,HVJASIM)));
 /* line 697: */
WFJASIM_checksizeis(SUJASIM_as, 1);
 /* line 698: */
(*Wrkspc) = NFJASIM_tos(SUJASIM_as);
 /* line 699: */
 /* line 700: */
IVJASIM = !SFJASIM_inline(SUJASIM_as);
} 
A_PROC_EXIT(convert_real_2ws);
return( IVJASIM );
} 
#undef NL

A_STATIC A68_VOID  LVJASIM_startnewparams(A68_INT  Noofparams)
{ 
A68_171  MVJASIM;  /* collateral clause result */
A68_172  NVJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(startnewparams);
 /* line 708: */
 /* line 709: */
{ 
JVJASIM_paramcount = 0;
 /* line 710: */
 /* line 715: */
if ( (Noofparams>6) )
{ 
MVJASIM.Rs1 = IWEASIM_sp;
MVJASIM.Imm = ((Noofparams-6)*8);
 /* line 716: */
MVJASIM.Rd = IWEASIM_sp;
 /* line 717: */
ISEASIM_using(TAEASIM_sub, A_UNITE(NVJASIM,mode2,2,MVJASIM));
} 
} 
A_PROC_EXIT(startnewparams);
return;
} 
#undef NL

A_STATIC A68_BITS  OVJASIM_paramreg(void)
{ 
A68_BITS  PVJASIM;  /* clause result */
A_PROC_ENTRY(paramreg);
 /* line 721: */
if ( (JVJASIM_paramcount<6) )
{ 
 /* line 722: */
 /* line 724: */
PVJASIM = (A68_BITS )((A68_INT )VVEASIM_o0+JVJASIM_paramcount);
} 
else
{ 
PVJASIM = NEGASIM_tempreg1;
} 
A_PROC_EXIT(paramreg);
return( PVJASIM );
} 
#undef NL

A_STATIC A68_VOID  QVJASIM_passnewparam(void)
{ 
A68_171  RVJASIM;  /* collateral clause result */
A68_172  SVJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(passnewparam);
{ 
 /* line 729: */
if ( (JVJASIM_paramcount>=6) )
{ 
RVJASIM.Rs1 = IWEASIM_sp;
RVJASIM.Imm = (ACJASIM_ms_tos+((JVJASIM_paramcount-6)*4));
 /* line 730: */
RVJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(SVJASIM,mode2,2,RVJASIM));
} 
 /* line 731: */
 /* line 732: */
JVJASIM_paramcount+=1;
} 
A_PROC_EXIT(passnewparam);
return;
} 
#undef NL

A_STATIC A68_VOID  UVJASIM_removeparameters(A68_INT  Noofparams)
{ 
A68_171  VVJASIM;  /* collateral clause result */
A68_172  WVJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(removeparameters);
 /* line 735: */
 /* line 736: */
if ( (Noofparams>6) )
{ 
VVJASIM.Rs1 = IWEASIM_sp;
VVJASIM.Imm = ((Noofparams-6)*8);
 /* line 737: */
VVJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(WVJASIM,mode2,2,VVJASIM));
} 
A_PROC_EXIT(removeparameters);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVJASIM_ms_pushbs(A68_375 * S, A68_INT  O)
{ 
A68_346  AWJASIM;  /* avoid structure result */
A68_346  BWJASIM;  /* united object - for case conformity */
A68_CHAR  CWJASIM_loc;
A68_170  DWJASIM;  /* collateral clause result */
A68_172  EWJASIM;  /* OPERATORS - mode -> union mode */
A68_170  FWJASIM;  /* collateral clause result */
A68_172  GWJASIM;  /* OPERATORS - mode -> union mode */
A68_171  HWJASIM;  /* collateral clause result */
A68_172  IWJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  JWJASIM_loc;
A68_170  KWJASIM;  /* avoid structure result */
A68_170  LWJASIM_rrr;
A68_170  MWJASIM;  /* collateral clause result */
A68_172  NWJASIM;  /* OPERATORS - mode -> union mode */
A68_170  OWJASIM;  /* collateral clause result */
A68_172  PWJASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  QWJASIM_loc;
A68_170  RWJASIM;  /* collateral clause result */
A68_172  SWJASIM;  /* OPERATORS - mode -> union mode */
A68_170  TWJASIM;  /* collateral clause result */
A68_172  UWJASIM;  /* OPERATORS - mode -> union mode */
A68_170  VWJASIM;  /* collateral clause result */
A68_172  WWJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ms_pushbs);
 /* line 744: */
 /* line 745: */
JVGASIM_typeof( (&(S->Location_stack)), O, &AWJASIM );
BWJASIM = AWJASIM ;
switch ( BWJASIM.mode )
{ 
case 3: /* CHAR */
CWJASIM_loc = (BWJASIM.data.mode3);
 /* line 746: */
 /* line 747: */
{ 
DWJASIM.Rs1 = KBHASIM_rsource(S, O);
DWJASIM.Rs2 = FVEASIM_g0;
DWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(EWJASIM,mode1,1,DWJASIM));
 /* line 748: */
QVJASIM_passnewparam();
 /* line 749: */
FWJASIM.Rs1 = FVEASIM_g0;
FWJASIM.Rs2 = FVEASIM_g0;
FWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(GWJASIM,mode1,1,FWJASIM));
 /* line 750: */
QVJASIM_passnewparam();
 /* line 751: */
HWJASIM.Rs1 = KBHASIM_rsource(S, O);
HWJASIM.Imm = (-4);
HWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(TEEASIM_ld, A_UNITE(IWJASIM,mode2,2,HWJASIM));
 /* line 752: */
 /* line 753: */
 /* line 754: */
QVJASIM_passnewparam();
} 
break;
case 2: /* INT */
JWJASIM_loc = (BWJASIM.data.mode2);
 /* line 755: */
 /* line 756: */
{ 
QEHASIM_loadoperands( S, O, &KWJASIM );
LWJASIM_rrr = KWJASIM;
 /* line 757: */
MWJASIM.Rs1 = LWJASIM_rrr.Rs1;
MWJASIM.Rs2 = FVEASIM_g0;
MWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(NWJASIM,mode1,1,MWJASIM));
 /* line 758: */
QVJASIM_passnewparam();
 /* line 759: */
OWJASIM.Rs1 = FVEASIM_g0;
OWJASIM.Rs2 = FVEASIM_g0;
OWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(PWJASIM,mode1,1,OWJASIM));
 /* line 760: */
QVJASIM_passnewparam();
 /* line 761: */
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), O), OVJASIM_paramreg());
 /* line 762: */
 /* line 763: */
 /* line 764: */
QVJASIM_passnewparam();
} 
break;
case 1: /* BOOL */
QWJASIM_loc = (BWJASIM.data.mode1);
 /* line 765: */
 /* line 766: */
{ 
XIHASIM_calculatenewdynamicaddr(S, O);
 /* line 767: */
RWJASIM.Rs1 = PEGASIM_tempreg3;
RWJASIM.Rs2 = FVEASIM_g0;
RWJASIM.Rd = KBHASIM_rsource(S, O);
ISEASIM_using(JFEASIM_st, A_UNITE(SWJASIM,mode1,1,RWJASIM));
 /* line 768: */
TWJASIM.Rs1 = PEGASIM_tempreg3;
TWJASIM.Rs2 = FVEASIM_g0;
TWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(UWJASIM,mode1,1,TWJASIM));
 /* line 769: */
QVJASIM_passnewparam();
 /* line 770: */
VWJASIM.Rs1 = FVEASIM_g0;
VWJASIM.Rs2 = FVEASIM_g0;
VWJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(WWJASIM,mode1,1,VWJASIM));
 /* line 771: */
QVJASIM_passnewparam();
 /* line 772: */
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), O), OVJASIM_paramreg());
 /* line 773: */
 /* line 774: */
 /* line 775: */
QVJASIM_passnewparam();
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(ms_pushbs);
return;
} 
#undef NL

A_STATIC A68_VOID  ZWJASIM_ms_pushei(A68_375 * S, A68_INT  O)
{ 
A68_170  AXJASIM;  /* collateral clause result */
A68_172  BXJASIM;  /* OPERATORS - mode -> union mode */
A68_170  CXJASIM;  /* collateral clause result */
A68_172  DXJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ms_pushei);
 /* line 780: */
 /* line 781: */
{ 
XIHASIM_calculatenewdynamicaddr(S, O);
 /* line 782: */
AXJASIM.Rs1 = PEGASIM_tempreg3;
AXJASIM.Rs2 = FVEASIM_g0;
AXJASIM.Rd = KBHASIM_rsource(S, O);
ISEASIM_using(JFEASIM_st, A_UNITE(BXJASIM,mode1,1,AXJASIM));
 /* line 783: */
CXJASIM.Rs1 = PEGASIM_tempreg3;
CXJASIM.Rs2 = FVEASIM_g0;
CXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(DXJASIM,mode1,1,CXJASIM));
 /* line 784: */
 /* line 785: */
QVJASIM_passnewparam();
} 
A_PROC_EXIT(ms_pushei);
return;
} 
#undef NL

A_STATIC A68_VOID  GXJASIM_ms_pushds(A68_375 * S, A68_INT  O)
{ 
A68_346  HXJASIM;  /* avoid structure result */
A68_346  IXJASIM;  /* united object - for case conformity */
A68_170  JXJASIM;  /* collateral clause result */
A68_172  KXJASIM;  /* OPERATORS - mode -> union mode */
A68_170  LXJASIM;  /* collateral clause result */
A68_172  MXJASIM;  /* OPERATORS - mode -> union mode */
A68_170  NXJASIM;  /* avoid structure result */
A68_170  OXJASIM_rrr;
A68_170  PXJASIM;  /* collateral clause result */
A68_172  QXJASIM;  /* OPERATORS - mode -> union mode */
A68_346  RXJASIM;  /* avoid structure result */
A68_346  SXJASIM;  /* united object - for case conformity */
A68_171  TXJASIM;  /* collateral clause result */
A68_172  UXJASIM;  /* OPERATORS - mode -> union mode */
A68_171  VXJASIM;  /* collateral clause result */
A68_172  WXJASIM;  /* OPERATORS - mode -> union mode */
A68_171  XXJASIM;  /* collateral clause result */
A68_172  YXJASIM;  /* OPERATORS - mode -> union mode */
A68_171  ZXJASIM;  /* collateral clause result */
A68_172  AYJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ms_pushds);
 /* line 790: */
 /* line 791: */
{ 
 /* line 792: */
JVGASIM_typeof( (&(S->Location_stack)), O, &HXJASIM );
IXJASIM = HXJASIM ;
switch ( IXJASIM.mode )
{ 
case 1: /* BOOL */
 /* line 793: */
 /* line 794: */
{ 
XIHASIM_calculatenewdynamicaddr(S, O);
 /* line 795: */
JXJASIM.Rs1 = PEGASIM_tempreg3;
JXJASIM.Rs2 = FVEASIM_g0;
JXJASIM.Rd = KBHASIM_rsource(S, O);
ISEASIM_using(JFEASIM_st, A_UNITE(KXJASIM,mode1,1,JXJASIM));
 /* line 796: */
LXJASIM.Rs1 = PEGASIM_tempreg3;
LXJASIM.Rs2 = FVEASIM_g0;
LXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(MXJASIM,mode1,1,LXJASIM));
 /* line 797: */
 /* line 798: */
 /* line 799: */
 /* line 800: */
QVJASIM_passnewparam();
} 
break;
default: 
QEHASIM_loadoperands( S, O, &NXJASIM );
OXJASIM_rrr = NXJASIM;
 /* line 801: */
PXJASIM.Rs1 = OXJASIM_rrr.Rs1;
PXJASIM.Rs2 = FVEASIM_g0;
PXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(QXJASIM,mode1,1,PXJASIM));
 /* line 802: */
 /* line 803: */
QVJASIM_passnewparam();
break;
} 
 /* line 804: */
 /* line 805: */
JVGASIM_typeof( (&(S->Location_stack)), O, &RXJASIM );
SXJASIM = RXJASIM ;
switch ( SXJASIM.mode )
{ 
case 3: /* CHAR */
 /* line 806: */
 /* line 807: */
{ 
TXJASIM.Rs1 = KBHASIM_rsource(S, O);
TXJASIM.Imm = (-4);
TXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(TEEASIM_ld, A_UNITE(UXJASIM,mode2,2,TXJASIM));
 /* line 808: */
VXJASIM.Rs1 = OVJASIM_paramreg();
VXJASIM.Imm = 7;
VXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(DAEASIM_add, A_UNITE(WXJASIM,mode2,2,VXJASIM));
 /* line 809: */
XXJASIM.Rs1 = OVJASIM_paramreg();
XXJASIM.Imm = 3;
XXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(HEEASIM_sra, A_UNITE(YXJASIM,mode2,2,XXJASIM));
 /* line 810: */
 /* line 811: */
 /* line 812: */
 /* line 813: */
QVJASIM_passnewparam();
} 
break;
default: 
ZXJASIM.Rs1 = FVEASIM_g0;
ZXJASIM.Imm = ((BWGASIM_sizeof((&(S->Location_stack)), O)+7)/8);
ZXJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(AYJASIM,mode2,2,ZXJASIM));
 /* line 814: */
 /* line 815: */
 /* line 816: */
QVJASIM_passnewparam();
break;
} 
} 
A_PROC_EXIT(ms_pushds);
return;
} 
#undef NL

A_STATIC A68_VOID  DYJASIM_ms_pushlr(A68_375 * S, A68_INT  O)
{ 
A68_170  EYJASIM;  /* avoid structure result */
A68_170  FYJASIM_rrr;
A68_170  GYJASIM;  /* collateral clause result */
A68_172  HYJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ms_pushlr);
 /* line 820: */
 /* line 821: */
{ 
QEHASIM_loadoperands( S, O, &EYJASIM );
FYJASIM_rrr = EYJASIM;
 /* line 822: */
GYJASIM.Rs1 = FYJASIM_rrr.Rs1;
GYJASIM.Rs2 = FVEASIM_g0;
GYJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(HYJASIM,mode1,1,GYJASIM));
 /* line 823: */
 /* line 824: */
QVJASIM_passnewparam();
} 
A_PROC_EXIT(ms_pushlr);
return;
} 
#undef NL

A_STATIC A68_VOID  KYJASIM_ms_pushi(A68_375 * S, A68_INT  O)
{ 
A68_386  LYJASIM;  /* avoid structure result */
A68_386  MYJASIM;  /* united object - for case conformity */
A68_BITS  NYJASIM_r;
A68_170  OYJASIM;  /* collateral clause result */
A68_172  PYJASIM;  /* OPERATORS - mode -> union mode */
A68_INT  QYJASIM_i;
A68_171  RYJASIM;  /* collateral clause result */
A68_172  SYJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ms_pushi);
 /* line 828: */
 /* line 832: */
{ 
 /* line 833: */
LCHASIM_source( S, O, &LYJASIM );
MYJASIM = LYJASIM ;
switch ( MYJASIM.mode )
{ 
case 1: /* BITS */
NYJASIM_r = (MYJASIM.data.mode1);
OYJASIM.Rs1 = FVEASIM_g0;
OYJASIM.Rs2 = NYJASIM_r;
OYJASIM.Rd = OVJASIM_paramreg();
 /* line 834: */
ISEASIM_using(LAEASIM_or, A_UNITE(PYJASIM,mode1,1,OYJASIM));
break;
case 2: /* INT */
QYJASIM_i = (MYJASIM.data.mode2);
RYJASIM.Rs1 = FVEASIM_g0;
RYJASIM.Imm = QYJASIM_i;
 /* line 835: */
RYJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(SYJASIM,mode2,2,RYJASIM));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 836: */
 /* line 837: */
QVJASIM_passnewparam();
} 
A_PROC_EXIT(ms_pushi);
return;
} 
#undef NL

A_STATIC A68_VOID  VYJASIM_ms_pushr(A68_375 * S, A68_INT  O)
{ 
A68_172  WYJASIM;  /* avoid structure result */
A68_170  XYJASIM;  /* collateral clause result */
A68_172  YYJASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ms_pushr);
 /* line 841: */
 /* line 842: */
{ 
QDHASIM_smallind( S, O, &WYJASIM );
ISEASIM_using(DAEASIM_add, WYJASIM);
 /* line 843: */
XYJASIM.Rs1 = GBHASIM_rdest(S, O);
XYJASIM.Rs2 = FVEASIM_g0;
XYJASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(YYJASIM,mode1,1,XYJASIM));
 /* line 844: */
 /* line 845: */
QVJASIM_passnewparam();
} 
A_PROC_EXIT(ms_pushr);
return;
} 
#undef NL

A_STATIC A68_VOID  CZJASIM_ms_push(A68_375 * S, A68_INT  O, A68_INT  Paramtype)
{ 
A_PROC_ENTRY(ms_push);
 /* line 851: */
 /* line 852: */
switch ( Paramtype )
{ 
case 1: 
 /* line 853: */
ZVJASIM_ms_pushbs(S, O);
break;
case 2: 
 /* line 854: */
KYJASIM_ms_pushi(S, O);
break;
case 3: 
 /* line 855: */
KYJASIM_ms_pushi(S, O);
break;
case 4: 
 /* line 856: */
KYJASIM_ms_pushi(S, O);
break;
case 5: 
 /* line 857: */
ZWJASIM_ms_pushei(S, O);
break;
case 6: 
 /* line 858: */
GXJASIM_ms_pushds(S, O);
break;
case 7: 
 /* line 859: */
ZWJASIM_ms_pushei(S, O);
break;
case 8: 
 /* line 860: */
DYJASIM_ms_pushlr(S, O);
break;
case 9: 
 /* line 861: */
KYJASIM_ms_pushi(S, O);
break;
case 10: 
 /* line 862: */
KYJASIM_ms_pushi(S, O);
break;
case 11: 
 /* line 863: */
 /* line 864: */
VYJASIM_ms_pushr(S, O);
break;
default: 
 /* line 865: */
ZIDASIM_simfault(EZJASIM);
break;
} 
A_PROC_EXIT(ms_push);
return;
} 
#undef NL
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */

A_STATIC A68_VOID  KZJASIM_oolbiopbs(A68_375 * S, A68_421  Fixedws, A68_421  Fixedrs, A68_129  Biop, A68_424  Inparamtype)
{ 
A68_INT  LZJASIM_fws;
A68_INT  MZJASIM_frs;
A68_170  NZJASIM;  /* collateral clause result */
A68_172  OZJASIM;  /* OPERATORS - mode -> union mode */
A68_171  PZJASIM;  /* collateral clause result */
A68_172  QZJASIM;  /* OPERATORS - mode -> union mode */
A68_171  RZJASIM;  /* collateral clause result */
A68_172  SZJASIM;  /* OPERATORS - mode -> union mode */
A68_171  TZJASIM;  /* collateral clause result */
A68_172  UZJASIM;  /* OPERATORS - mode -> union mode */
A68_171  VZJASIM;  /* collateral clause result */
A68_172  WZJASIM;  /* OPERATORS - mode -> union mode */
A68_171  XZJASIM;  /* collateral clause result */
A68_172  YZJASIM;  /* OPERATORS - mode -> union mode */
A68_171  ZZJASIM;  /* collateral clause result */
A68_172  AAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  BAKASIM;  /* collateral clause result */
A68_172  CAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  DAKASIM;  /* collateral clause result */
A68_172  EAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  FAKASIM;  /* collateral clause result */
A68_172  GAKASIM;  /* OPERATORS - mode -> union mode */
A68_170  HAKASIM;  /* collateral clause result */
A68_172  IAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  JAKASIM;  /* collateral clause result */
A68_172  KAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  LAKASIM;  /* collateral clause result */
A68_172  MAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  NAKASIM;  /* collateral clause result */
A68_172  OAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  PAKASIM;  /* collateral clause result */
A68_172  QAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  RAKASIM;  /* collateral clause result */
A68_172  SAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  TAKASIM;  /* collateral clause result */
A68_172  UAKASIM;  /* OPERATORS - mode -> union mode */
A68_170  VAKASIM;  /* collateral clause result */
A68_172  WAKASIM;  /* OPERATORS - mode -> union mode */
A68_171  XAKASIM;  /* collateral clause result */
A68_172  YAKASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZAKASIM_j;
A68_INT  ABKASIM;  /* to part of loop */
A68_170  BBKASIM;  /* collateral clause result */
A68_172  CBKASIM;  /* OPERATORS - mode -> union mode */
A68_170  DBKASIM;  /* collateral clause result */
A68_172  EBKASIM;  /* OPERATORS - mode -> union mode */
union {  /* BIOP 99 */
A68_129   source;
A68_408   destination;
} FBKASIM; 
A68_170  GBKASIM;  /* collateral clause result */
A68_172  HBKASIM;  /* OPERATORS - mode -> union mode */
A68_168  IBKASIM;  /* collateral clause result */
A68_171  JBKASIM;  /* collateral clause result */
A68_172  KBKASIM;  /* OPERATORS - mode -> union mode */
A68_171  LBKASIM;  /* collateral clause result */
A68_172  MBKASIM;  /* OPERATORS - mode -> union mode */
A68_171  NBKASIM;  /* collateral clause result */
A68_172  OBKASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  PBKASIM_rsisknown;
A68_INT  QBKASIM_j;
A68_INT  RBKASIM;  /* to part of loop */
A68_172  SBKASIM;  /* avoid structure result */
A68_171  TBKASIM;  /* collateral clause result */
A68_172  UBKASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  VBKASIM;  /* optbool result */
A68_171  WBKASIM;  /* collateral clause result */
A68_172  XBKASIM;  /* OPERATORS - mode -> union mode */
A68_171  YBKASIM;  /* collateral clause result */
A68_172  ZBKASIM;  /* OPERATORS - mode -> union mode */
A68_171  ACKASIM;  /* collateral clause result */
A68_172  BCKASIM;  /* OPERATORS - mode -> union mode */
A68_171  CCKASIM;  /* collateral clause result */
A68_172  DCKASIM;  /* OPERATORS - mode -> union mode */
A68_171  ECKASIM;  /* collateral clause result */
A68_172  FCKASIM;  /* OPERATORS - mode -> union mode */
A68_170  GCKASIM;  /* collateral clause result */
A68_172  HCKASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ICKASIM_loop;
A68_171  JCKASIM;  /* collateral clause result */
A68_172  KCKASIM;  /* OPERATORS - mode -> union mode */
A68_170  LCKASIM;  /* collateral clause result */
A68_172  MCKASIM;  /* OPERATORS - mode -> union mode */
A68_189  NCKASIM;  /* avoid structure result */
A68_170  OCKASIM;  /* collateral clause result */
A68_172  PCKASIM;  /* OPERATORS - mode -> union mode */
A68_171  QCKASIM;  /* collateral clause result */
A68_172  RCKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(oolbiopbs);
 /* line 876: */
 /* line 878: */
{ 
 /* line 884: */
NZJASIM.Rs1 = IWEASIM_sp;
NZJASIM.Rs2 = FVEASIM_g0;
NZJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(OZJASIM,mode1,1,NZJASIM));
 /* line 890: */
PZJASIM.Rs1 = IWEASIM_sp;
PZJASIM.Imm = ((-ACJASIM_ms_tos)-(5*4));
PZJASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(QZJASIM,mode2,2,PZJASIM));
 /* line 891: */
RZJASIM.Rs1 = PXEASIM_fp;
RZJASIM.Imm = (-8);
RZJASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(SZJASIM,mode2,2,RZJASIM));
 /* line 892: */
TZJASIM.Rs1 = PXEASIM_fp;
TZJASIM.Imm = (-12);
TZJASIM.Rd = HVEASIM_g1;
ISEASIM_using(JFEASIM_st, A_UNITE(UZJASIM,mode2,2,TZJASIM));
 /* line 893: */
VZJASIM.Rs1 = PXEASIM_fp;
VZJASIM.Imm = (-16);
VZJASIM.Rd = JVEASIM_g2;
ISEASIM_using(JFEASIM_st, A_UNITE(WZJASIM,mode2,2,VZJASIM));
 /* line 894: */
XZJASIM.Rs1 = PXEASIM_fp;
XZJASIM.Imm = (-20);
XZJASIM.Rd = LVEASIM_g3;
ISEASIM_using(JFEASIM_st, A_UNITE(YZJASIM,mode2,2,XZJASIM));
 /* line 897: */
 /* line 898: */
if ( A_CALLPROC(Fixedws,(S, (&LZJASIM_fws)),(S, (&LZJASIM_fws),(Fixedws).nonlocals)) )
{ 
ZZJASIM.Rs1 = IWEASIM_sp;
ZZJASIM.Imm = (((LZJASIM_fws+7)/8)*8);
 /* line 899: */
ZZJASIM.Rd = IWEASIM_sp;
 /* line 900: */
ISEASIM_using(TAEASIM_sub, A_UNITE(AAKASIM,mode2,2,ZZJASIM));
} 
else
{ 
BAKASIM.Rs1 = NEGASIM_tempreg1;
BAKASIM.Imm = 7;
BAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(CAKASIM,mode2,2,BAKASIM));
 /* line 901: */
DAKASIM.Rs1 = NEGASIM_tempreg1;
DAKASIM.Imm = 3;
DAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(EAKASIM,mode2,2,DAKASIM));
 /* line 902: */
FAKASIM.Rs1 = NEGASIM_tempreg1;
FAKASIM.Imm = 3;
FAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(GAKASIM,mode2,2,FAKASIM));
 /* line 903: */
HAKASIM.Rs1 = IWEASIM_sp;
HAKASIM.Rs2 = NEGASIM_tempreg1;
 /* line 904: */
HAKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(IAKASIM,mode1,1,HAKASIM));
} 
 /* line 907: */
JAKASIM.Rs1 = IWEASIM_sp;
JAKASIM.Imm = ACJASIM_ms_tos;
JAKASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(DAEASIM_add, A_UNITE(KAKASIM,mode2,2,JAKASIM));
 /* line 912: */
 /* line 913: */
if ( A_CALLPROC(Fixedrs,(S, (&MZJASIM_frs)),(S, (&MZJASIM_frs),(Fixedrs).nonlocals)) )
{ 
LAKASIM.Rs1 = IWEASIM_sp;
LAKASIM.Imm = ((((MZJASIM_frs+63)/64)*8)+8);
 /* line 914: */
LAKASIM.Rd = IWEASIM_sp;
 /* line 915: */
ISEASIM_using(TAEASIM_sub, A_UNITE(MAKASIM,mode2,2,LAKASIM));
} 
else
{ 
NAKASIM.Rs1 = NEGASIM_tempreg1;
NAKASIM.Imm = 63;
NAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(OAKASIM,mode2,2,NAKASIM));
 /* line 916: */
PAKASIM.Rs1 = NEGASIM_tempreg1;
PAKASIM.Imm = 6;
PAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(QAKASIM,mode2,2,PAKASIM));
 /* line 917: */
RAKASIM.Rs1 = NEGASIM_tempreg1;
RAKASIM.Imm = 3;
RAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(SAKASIM,mode2,2,RAKASIM));
 /* line 918: */
TAKASIM.Rs1 = NEGASIM_tempreg1;
TAKASIM.Imm = 8;
TAKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(UAKASIM,mode2,2,TAKASIM));
 /* line 919: */
VAKASIM.Rs1 = IWEASIM_sp;
VAKASIM.Rs2 = NEGASIM_tempreg1;
 /* line 920: */
VAKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(WAKASIM,mode1,1,VAKASIM));
} 
 /* line 922: */
XAKASIM.Rs1 = IWEASIM_sp;
XAKASIM.Imm = ACJASIM_ms_tos;
XAKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(DAEASIM_add, A_UNITE(YAKASIM,mode2,2,XAKASIM));
 /* line 925: */
LVJASIM_startnewparams(((Inparamtype.dim[0].upb*3)+2));
 /* line 928: */
ABKASIM = Inparamtype.dim[0].upb;
for ( ZAKASIM_j = 1;
ZAKASIM_j <= ABKASIM;
ZAKASIM_j += 1 )
{ 
 /* line 929: */
 /* line 930: */
CZJASIM_ms_push(S, ((EZGASIM_tos+ZAKASIM_j)-1), A_R1INDEX(Inparamtype,ZAKASIM_j));
}
 /* line 933: */
BBKASIM.Rs1 = OEGASIM_tempreg2;
BBKASIM.Rs2 = FVEASIM_g0;
BBKASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(CBKASIM,mode1,1,BBKASIM));
 /* line 934: */
QVJASIM_passnewparam();
 /* line 936: */
DBKASIM.Rs1 = QEGASIM_tempreg4;
DBKASIM.Rs2 = FVEASIM_g0;
DBKASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(EBKASIM,mode1,1,DBKASIM));
 /* line 937: */
QVJASIM_passnewparam();
 /* line 940: */
FBKASIM.source = Biop ;
CZEASIM_mamovir((FBKASIM.destination).Addr, JWEASIM_r15);
 /* line 941: */
GBKASIM.Rs1 = JWEASIM_r15;
GBKASIM.Rs2 = EVEASIM_r0;
GBKASIM.Rd = JWEASIM_r15;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(HBKASIM,mode1,1,GBKASIM));
 /* line 942: */
IBKASIM.Imm = 0;
IBKASIM.Rd = FVEASIM_g0;
QQEASIM_using(BZDASIM_nop, IBKASIM);
 /* line 945: */
JBKASIM.Rs1 = PXEASIM_fp;
JBKASIM.Imm = (-20);
JBKASIM.Rd = LVEASIM_g3;
ISEASIM_using(TEEASIM_ld, A_UNITE(KBKASIM,mode2,2,JBKASIM));
 /* line 946: */
LBKASIM.Rs1 = PXEASIM_fp;
LBKASIM.Imm = (-16);
LBKASIM.Rd = JVEASIM_g2;
ISEASIM_using(TEEASIM_ld, A_UNITE(MBKASIM,mode2,2,LBKASIM));
 /* line 947: */
NBKASIM.Rs1 = PXEASIM_fp;
NBKASIM.Imm = (-12);
NBKASIM.Rd = HVEASIM_g1;
ISEASIM_using(TEEASIM_ld, A_UNITE(OBKASIM,mode2,2,NBKASIM));
 /* line 950: */
PBKASIM_rsisknown = A_CALLPROC(Fixedrs,(S, (&MZJASIM_frs)),(S, (&MZJASIM_frs),(Fixedrs).nonlocals));
 /* line 953: */
RBKASIM = Inparamtype.dim[0].upb;
for ( QBKASIM_j = 1;
QBKASIM_j <= RBKASIM;
QBKASIM_j += 1 )
{ 
 /* line 955: */
IHHASIM_pop(S);
}
 /* line 958: */
 /* line 959: */
if ( PBKASIM_rsisknown )
{ 
 /* line 960: */
 /* line 961: */
EPHASIM_pushnewstacklocation(S, MZJASIM_frs);
} 
else
{ 
QPHASIM_pushnewunknownstacklocation(S);
 /* line 962: */
 /* line 963: */
DFHASIM_sizeoperands( S, EZGASIM_tos, &SBKASIM );
ISEASIM_using(JFEASIM_st, SBKASIM);
} 
 /* line 966: */
UVJASIM_removeparameters(((Inparamtype.dim[0].upb*3)+2));
 /* line 969: */
EPHASIM_pushnewstacklocation(S, 32);
 /* line 970: */
TBKASIM.Rs1 = IWEASIM_sp;
TBKASIM.Imm = ACJASIM_ms_tos;
TBKASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(TEEASIM_ld, A_UNITE(UBKASIM,mode2,2,TBKASIM));
 /* line 975: */
VBKASIM = PBKASIM_rsisknown;
if ( VBKASIM )
{VBKASIM = (MZJASIM_frs<=32);
}
 /* line 977: */
if ( VBKASIM )
{ 
WBKASIM.Rs1 = IWEASIM_sp;
WBKASIM.Imm = (ACJASIM_ms_tos+4);
 /* line 978: */
WBKASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
 /* line 980: */
ISEASIM_using(TEEASIM_ld, A_UNITE(XBKASIM,mode2,2,WBKASIM));
} 
else
{ 
 /* line 981: */
if ( PBKASIM_rsisknown )
{ 
 /* line 982: */
 /* line 983: */
CZEASIM_mamovir((((MZJASIM_frs+31)/32)*4), NEGASIM_tempreg1);
} 
else
{ 
YBKASIM.Rs1 = NEGASIM_tempreg1;
YBKASIM.Imm = 31;
YBKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(ZBKASIM,mode2,2,YBKASIM));
 /* line 984: */
ACKASIM.Rs1 = NEGASIM_tempreg1;
ACKASIM.Imm = 5;
ACKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(BCKASIM,mode2,2,ACKASIM));
 /* line 985: */
CCKASIM.Rs1 = NEGASIM_tempreg1;
CCKASIM.Imm = 2;
 /* line 986: */
CCKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(DCKASIM,mode2,2,CCKASIM));
} 
 /* line 987: */
ECKASIM.Rs1 = IWEASIM_sp;
ECKASIM.Imm = ACJASIM_ms_tos;
ECKASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(DAEASIM_add, A_UNITE(FCKASIM,mode2,2,ECKASIM));
 /* line 988: */
GCKASIM.Rs1 = PEGASIM_tempreg3;
GCKASIM.Rs2 = NEGASIM_tempreg1;
GCKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(HCKASIM,mode1,1,GCKASIM));
 /* line 989: */
ICKASIM_loop = GLDASIM_location;
 /* line 990: */
JCKASIM.Rs1 = NEGASIM_tempreg1;
JCKASIM.Imm = 4;
JCKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(KCKASIM,mode2,2,JCKASIM));
 /* line 991: */
LCKASIM.Rs1 = GBHASIM_rdest(S, FZGASIM_tos1);
LCKASIM.Rs2 = NEGASIM_tempreg1;
LCKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(MCKASIM,mode1,1,LCKASIM));
 /* line 992: */
VXDASIM_( FZDASIM_b, CXDASIM_ne_a, &NCKASIM );
YQEASIM_using(NCKASIM, ICKASIM_loop);
 /* line 993: */
OCKASIM.Rs1 = PEGASIM_tempreg3;
OCKASIM.Rs2 = NEGASIM_tempreg1;
 /* line 994: */
OCKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(PCKASIM,mode1,1,OCKASIM));
} 
 /* line 997: */
QCKASIM.Rs1 = PXEASIM_fp;
QCKASIM.Imm = (-8);
 /* line 999: */
QCKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TEEASIM_ld, A_UNITE(RCKASIM,mode2,2,QCKASIM));
} 
A_PROC_EXIT(oolbiopbs);
return;
} 
#undef NL
 /* line 1006: */
 /* line 1007: */
 /* line 1008: */

A_STATIC A68_VOID  WCKASIM_oolbioptv(A68_375 * S, A68_421  Fixedws, A68_129  Biop, A68_424  Inparamtype)
{ 
A68_INT  XCKASIM_fws;
A68_170  YCKASIM;  /* collateral clause result */
A68_172  ZCKASIM;  /* OPERATORS - mode -> union mode */
A68_171  ADKASIM;  /* collateral clause result */
A68_172  BDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  CDKASIM;  /* collateral clause result */
A68_172  DDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  EDKASIM;  /* collateral clause result */
A68_172  FDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  GDKASIM;  /* collateral clause result */
A68_172  HDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  IDKASIM;  /* collateral clause result */
A68_172  JDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  KDKASIM;  /* collateral clause result */
A68_172  LDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  MDKASIM;  /* collateral clause result */
A68_172  NDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  ODKASIM;  /* collateral clause result */
A68_172  PDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  QDKASIM;  /* collateral clause result */
A68_172  RDKASIM;  /* OPERATORS - mode -> union mode */
A68_170  SDKASIM;  /* collateral clause result */
A68_172  TDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  UDKASIM;  /* collateral clause result */
A68_172  VDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  WDKASIM;  /* collateral clause result */
A68_172  XDKASIM;  /* OPERATORS - mode -> union mode */
A68_171  YDKASIM;  /* collateral clause result */
A68_172  ZDKASIM;  /* OPERATORS - mode -> union mode */
A68_INT  AEKASIM_j;
A68_INT  BEKASIM;  /* to part of loop */
A68_170  CEKASIM;  /* collateral clause result */
A68_172  DEKASIM;  /* OPERATORS - mode -> union mode */
A68_170  EEKASIM;  /* collateral clause result */
A68_172  FEKASIM;  /* OPERATORS - mode -> union mode */
union {  /* BIOP 99 */
A68_129   source;
A68_408   destination;
} GEKASIM; 
A68_170  HEKASIM;  /* collateral clause result */
A68_172  IEKASIM;  /* OPERATORS - mode -> union mode */
A68_168  JEKASIM;  /* collateral clause result */
A68_171  KEKASIM;  /* collateral clause result */
A68_172  LEKASIM;  /* OPERATORS - mode -> union mode */
A68_171  MEKASIM;  /* collateral clause result */
A68_172  NEKASIM;  /* OPERATORS - mode -> union mode */
A68_171  OEKASIM;  /* collateral clause result */
A68_172  PEKASIM;  /* OPERATORS - mode -> union mode */
A68_INT  QEKASIM_j;
A68_INT  REKASIM;  /* to part of loop */
A68_171  SEKASIM;  /* collateral clause result */
A68_172  TEKASIM;  /* OPERATORS - mode -> union mode */
A68_171  UEKASIM;  /* collateral clause result */
A68_172  VEKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(oolbioptv);
 /* line 1010: */
 /* line 1011: */
{ 
 /* line 1018: */
YCKASIM.Rs1 = IWEASIM_sp;
YCKASIM.Rs2 = FVEASIM_g0;
YCKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(ZCKASIM,mode1,1,YCKASIM));
 /* line 1024: */
ADKASIM.Rs1 = IWEASIM_sp;
ADKASIM.Imm = ((-ACJASIM_ms_tos)-(5*4));
ADKASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(BDKASIM,mode2,2,ADKASIM));
 /* line 1025: */
CDKASIM.Rs1 = PXEASIM_fp;
CDKASIM.Imm = (-8);
CDKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(DDKASIM,mode2,2,CDKASIM));
 /* line 1026: */
EDKASIM.Rs1 = PXEASIM_fp;
EDKASIM.Imm = (-12);
EDKASIM.Rd = HVEASIM_g1;
ISEASIM_using(JFEASIM_st, A_UNITE(FDKASIM,mode2,2,EDKASIM));
 /* line 1027: */
GDKASIM.Rs1 = PXEASIM_fp;
GDKASIM.Imm = (-16);
GDKASIM.Rd = JVEASIM_g2;
ISEASIM_using(JFEASIM_st, A_UNITE(HDKASIM,mode2,2,GDKASIM));
 /* line 1028: */
IDKASIM.Rs1 = PXEASIM_fp;
IDKASIM.Imm = (-20);
IDKASIM.Rd = LVEASIM_g3;
ISEASIM_using(JFEASIM_st, A_UNITE(JDKASIM,mode2,2,IDKASIM));
 /* line 1031: */
 /* line 1032: */
if ( A_CALLPROC(Fixedws,(S, (&XCKASIM_fws)),(S, (&XCKASIM_fws),(Fixedws).nonlocals)) )
{ 
KDKASIM.Rs1 = IWEASIM_sp;
KDKASIM.Imm = (((XCKASIM_fws+7)/8)*8);
 /* line 1033: */
KDKASIM.Rd = IWEASIM_sp;
 /* line 1034: */
ISEASIM_using(TAEASIM_sub, A_UNITE(LDKASIM,mode2,2,KDKASIM));
} 
else
{ 
MDKASIM.Rs1 = NEGASIM_tempreg1;
MDKASIM.Imm = 7;
MDKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(NDKASIM,mode2,2,MDKASIM));
 /* line 1035: */
ODKASIM.Rs1 = NEGASIM_tempreg1;
ODKASIM.Imm = 3;
ODKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(PDKASIM,mode2,2,ODKASIM));
 /* line 1036: */
QDKASIM.Rs1 = NEGASIM_tempreg1;
QDKASIM.Imm = 3;
QDKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(RDKASIM,mode2,2,QDKASIM));
 /* line 1037: */
SDKASIM.Rs1 = IWEASIM_sp;
SDKASIM.Rs2 = NEGASIM_tempreg1;
 /* line 1038: */
SDKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(TDKASIM,mode1,1,SDKASIM));
} 
 /* line 1042: */
UDKASIM.Rs1 = IWEASIM_sp;
UDKASIM.Imm = ACJASIM_ms_tos;
UDKASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(DAEASIM_add, A_UNITE(VDKASIM,mode2,2,UDKASIM));
 /* line 1046: */
WDKASIM.Rs1 = IWEASIM_sp;
WDKASIM.Imm = 8;
WDKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(XDKASIM,mode2,2,WDKASIM));
 /* line 1049: */
YDKASIM.Rs1 = IWEASIM_sp;
YDKASIM.Imm = ACJASIM_ms_tos;
YDKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(DAEASIM_add, A_UNITE(ZDKASIM,mode2,2,YDKASIM));
 /* line 1052: */
LVJASIM_startnewparams(((Inparamtype.dim[0].upb*3)+2));
 /* line 1055: */
BEKASIM = Inparamtype.dim[0].upb;
for ( AEKASIM_j = 1;
AEKASIM_j <= BEKASIM;
AEKASIM_j += 1 )
{ 
 /* line 1056: */
 /* line 1057: */
CZJASIM_ms_push(S, ((EZGASIM_tos+AEKASIM_j)-1), A_R1INDEX(Inparamtype,AEKASIM_j));
}
 /* line 1060: */
CEKASIM.Rs1 = OEGASIM_tempreg2;
CEKASIM.Rs2 = FVEASIM_g0;
CEKASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(DEKASIM,mode1,1,CEKASIM));
 /* line 1061: */
QVJASIM_passnewparam();
 /* line 1063: */
EEKASIM.Rs1 = QEGASIM_tempreg4;
EEKASIM.Rs2 = FVEASIM_g0;
EEKASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(FEKASIM,mode1,1,EEKASIM));
 /* line 1064: */
QVJASIM_passnewparam();
 /* line 1067: */
GEKASIM.source = Biop ;
CZEASIM_mamovir((GEKASIM.destination).Addr, JWEASIM_r15);
 /* line 1068: */
HEKASIM.Rs1 = JWEASIM_r15;
HEKASIM.Rs2 = EVEASIM_r0;
HEKASIM.Rd = JWEASIM_r15;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(IEKASIM,mode1,1,HEKASIM));
 /* line 1069: */
JEKASIM.Imm = 0;
JEKASIM.Rd = FVEASIM_g0;
QQEASIM_using(BZDASIM_nop, JEKASIM);
 /* line 1073: */
KEKASIM.Rs1 = PXEASIM_fp;
KEKASIM.Imm = (-20);
KEKASIM.Rd = LVEASIM_g3;
ISEASIM_using(TEEASIM_ld, A_UNITE(LEKASIM,mode2,2,KEKASIM));
 /* line 1074: */
MEKASIM.Rs1 = PXEASIM_fp;
MEKASIM.Imm = (-16);
MEKASIM.Rd = JVEASIM_g2;
ISEASIM_using(TEEASIM_ld, A_UNITE(NEKASIM,mode2,2,MEKASIM));
 /* line 1075: */
OEKASIM.Rs1 = PXEASIM_fp;
OEKASIM.Imm = (-12);
OEKASIM.Rd = HVEASIM_g1;
ISEASIM_using(TEEASIM_ld, A_UNITE(PEKASIM,mode2,2,OEKASIM));
 /* line 1078: */
REKASIM = Inparamtype.dim[0].upb;
for ( QEKASIM_j = 1;
QEKASIM_j <= REKASIM;
QEKASIM_j += 1 )
{ 
 /* line 1080: */
IHHASIM_pop(S);
}
 /* line 1082: */
UVJASIM_removeparameters(((Inparamtype.dim[0].upb*3)+2));
 /* line 1085: */
EPHASIM_pushnewstacklocation(S, 32);
 /* line 1086: */
SEKASIM.Rs1 = IWEASIM_sp;
SEKASIM.Imm = ACJASIM_ms_tos;
SEKASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(TEEASIM_ld, A_UNITE(TEKASIM,mode2,2,SEKASIM));
 /* line 1089: */
UEKASIM.Rs1 = PXEASIM_fp;
UEKASIM.Imm = (-8);
 /* line 1091: */
UEKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TEEASIM_ld, A_UNITE(VEKASIM,mode2,2,UEKASIM));
} 
A_PROC_EXIT(oolbioptv);
return;
} 
#undef NL
 /* line 1096: */
 /* line 1097: */
 /* line 1098: */

A_STATIC A68_VOID  AFKASIM_oolbiopstruct(A68_375 * S, A68_421  Fixedws, A68_129  Biop, A68_424  Inparamtype)
{ 
A68_INT  BFKASIM_fws;
A68_170  CFKASIM;  /* collateral clause result */
A68_172  DFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  EFKASIM;  /* collateral clause result */
A68_172  FFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  GFKASIM;  /* collateral clause result */
A68_172  HFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  IFKASIM;  /* collateral clause result */
A68_172  JFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  KFKASIM;  /* collateral clause result */
A68_172  LFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  MFKASIM;  /* collateral clause result */
A68_172  NFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  OFKASIM;  /* collateral clause result */
A68_172  PFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  QFKASIM;  /* collateral clause result */
A68_172  RFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  SFKASIM;  /* collateral clause result */
A68_172  TFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  UFKASIM;  /* collateral clause result */
A68_172  VFKASIM;  /* OPERATORS - mode -> union mode */
A68_170  WFKASIM;  /* collateral clause result */
A68_172  XFKASIM;  /* OPERATORS - mode -> union mode */
A68_171  YFKASIM;  /* collateral clause result */
A68_172  ZFKASIM;  /* OPERATORS - mode -> union mode */
A68_INT  AGKASIM_j;
A68_INT  BGKASIM;  /* to part of loop */
A68_170  CGKASIM;  /* collateral clause result */
A68_172  DGKASIM;  /* OPERATORS - mode -> union mode */
union {  /* BIOP 99 */
A68_129   source;
A68_408   destination;
} EGKASIM; 
A68_170  FGKASIM;  /* collateral clause result */
A68_172  GGKASIM;  /* OPERATORS - mode -> union mode */
A68_168  HGKASIM;  /* collateral clause result */
A68_171  IGKASIM;  /* collateral clause result */
A68_172  JGKASIM;  /* OPERATORS - mode -> union mode */
A68_171  KGKASIM;  /* collateral clause result */
A68_172  LGKASIM;  /* OPERATORS - mode -> union mode */
A68_171  MGKASIM;  /* collateral clause result */
A68_172  NGKASIM;  /* OPERATORS - mode -> union mode */
A68_INT  OGKASIM_j;
A68_INT  PGKASIM;  /* to part of loop */
A68_171  QGKASIM;  /* collateral clause result */
A68_172  RGKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(oolbiopstruct);
 /* line 1100: */
 /* line 1101: */
{ 
 /* line 1105: */
YNHASIM_forceindepmem(S);
 /* line 1112: */
CFKASIM.Rs1 = IWEASIM_sp;
CFKASIM.Rs2 = FVEASIM_g0;
CFKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(DFKASIM,mode1,1,CFKASIM));
 /* line 1118: */
EFKASIM.Rs1 = IWEASIM_sp;
EFKASIM.Imm = ((-ACJASIM_ms_tos)-(5*4));
EFKASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(FFKASIM,mode2,2,EFKASIM));
 /* line 1119: */
GFKASIM.Rs1 = PXEASIM_fp;
GFKASIM.Imm = (-8);
GFKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(HFKASIM,mode2,2,GFKASIM));
 /* line 1120: */
IFKASIM.Rs1 = PXEASIM_fp;
IFKASIM.Imm = (-12);
IFKASIM.Rd = HVEASIM_g1;
ISEASIM_using(JFEASIM_st, A_UNITE(JFKASIM,mode2,2,IFKASIM));
 /* line 1121: */
KFKASIM.Rs1 = PXEASIM_fp;
KFKASIM.Imm = (-16);
KFKASIM.Rd = JVEASIM_g2;
ISEASIM_using(JFEASIM_st, A_UNITE(LFKASIM,mode2,2,KFKASIM));
 /* line 1122: */
MFKASIM.Rs1 = PXEASIM_fp;
MFKASIM.Imm = (-20);
MFKASIM.Rd = LVEASIM_g3;
ISEASIM_using(JFEASIM_st, A_UNITE(NFKASIM,mode2,2,MFKASIM));
 /* line 1125: */
 /* line 1126: */
if ( A_CALLPROC(Fixedws,(S, (&BFKASIM_fws)),(S, (&BFKASIM_fws),(Fixedws).nonlocals)) )
{ 
OFKASIM.Rs1 = IWEASIM_sp;
OFKASIM.Imm = (((BFKASIM_fws+7)/8)*8);
 /* line 1127: */
OFKASIM.Rd = IWEASIM_sp;
 /* line 1128: */
ISEASIM_using(TAEASIM_sub, A_UNITE(PFKASIM,mode2,2,OFKASIM));
} 
else
{ 
QFKASIM.Rs1 = NEGASIM_tempreg1;
QFKASIM.Imm = 7;
QFKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(RFKASIM,mode2,2,QFKASIM));
 /* line 1129: */
SFKASIM.Rs1 = NEGASIM_tempreg1;
SFKASIM.Imm = 3;
SFKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(TFKASIM,mode2,2,SFKASIM));
 /* line 1130: */
UFKASIM.Rs1 = NEGASIM_tempreg1;
UFKASIM.Imm = 3;
UFKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(VFKASIM,mode2,2,UFKASIM));
 /* line 1131: */
WFKASIM.Rs1 = IWEASIM_sp;
WFKASIM.Rs2 = NEGASIM_tempreg1;
 /* line 1132: */
WFKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TAEASIM_sub, A_UNITE(XFKASIM,mode1,1,WFKASIM));
} 
 /* line 1134: */
YFKASIM.Rs1 = IWEASIM_sp;
YFKASIM.Imm = ACJASIM_ms_tos;
YFKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(DAEASIM_add, A_UNITE(ZFKASIM,mode2,2,YFKASIM));
 /* line 1138: */
LVJASIM_startnewparams(((Inparamtype.dim[0].upb*3)+2));
 /* line 1141: */
BGKASIM = Inparamtype.dim[0].upb;
for ( AGKASIM_j = 1;
AGKASIM_j <= BGKASIM;
AGKASIM_j += 1 )
{ 
 /* line 1142: */
 /* line 1143: */
CZJASIM_ms_push(S, ((EZGASIM_tos+AGKASIM_j)-1), A_R1INDEX(Inparamtype,AGKASIM_j));
}
 /* line 1149: */
CGKASIM.Rs1 = OEGASIM_tempreg2;
CGKASIM.Rs2 = FVEASIM_g0;
CGKASIM.Rd = OVJASIM_paramreg();
ISEASIM_using(LAEASIM_or, A_UNITE(DGKASIM,mode1,1,CGKASIM));
 /* line 1150: */
QVJASIM_passnewparam();
 /* line 1153: */
EGKASIM.source = Biop ;
CZEASIM_mamovir((EGKASIM.destination).Addr, JWEASIM_r15);
 /* line 1154: */
FGKASIM.Rs1 = JWEASIM_r15;
FGKASIM.Rs2 = EVEASIM_r0;
FGKASIM.Rd = JWEASIM_r15;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(GGKASIM,mode1,1,FGKASIM));
 /* line 1155: */
HGKASIM.Imm = 0;
HGKASIM.Rd = FVEASIM_g0;
QQEASIM_using(BZDASIM_nop, HGKASIM);
 /* line 1158: */
IGKASIM.Rs1 = PXEASIM_fp;
IGKASIM.Imm = (-20);
IGKASIM.Rd = LVEASIM_g3;
ISEASIM_using(TEEASIM_ld, A_UNITE(JGKASIM,mode2,2,IGKASIM));
 /* line 1159: */
KGKASIM.Rs1 = PXEASIM_fp;
KGKASIM.Imm = (-16);
KGKASIM.Rd = JVEASIM_g2;
ISEASIM_using(TEEASIM_ld, A_UNITE(LGKASIM,mode2,2,KGKASIM));
 /* line 1160: */
MGKASIM.Rs1 = PXEASIM_fp;
MGKASIM.Imm = (-12);
MGKASIM.Rd = HVEASIM_g1;
ISEASIM_using(TEEASIM_ld, A_UNITE(NGKASIM,mode2,2,MGKASIM));
 /* line 1163: */
PGKASIM = Inparamtype.dim[0].upb;
for ( OGKASIM_j = 1;
OGKASIM_j <= PGKASIM;
OGKASIM_j += 1 )
{ 
 /* line 1165: */
IHHASIM_pop(S);
}
 /* line 1168: */
QGKASIM.Rs1 = PXEASIM_fp;
QGKASIM.Imm = (-8);
 /* line 1170: */
QGKASIM.Rd = IWEASIM_sp;
ISEASIM_using(TEEASIM_ld, A_UNITE(RGKASIM,mode2,2,QGKASIM));
} 
A_PROC_EXIT(oolbiopstruct);
return;
} 
#undef NL

A_STATIC A68_VOID  TGKASIM_tvxtvand_2(A68_375 * Ams)
{ 
A68_172  UGKASIM;  /* avoid structure result */
A68_172  VGKASIM;  /* united object - for case conformity */
A68_170  WGKASIM_rrr;
A68_170  XGKASIM;  /* collateral clause result */
A68_172  YGKASIM;  /* OPERATORS - mode -> union mode */
A68_172  ZGKASIM;  /* OPERATORS - mode -> union mode */
A68_171  AHKASIM;  /* collateral clause result */
A68_172  BHKASIM;  /* OPERATORS - mode -> union mode */
A68_170  CHKASIM;  /* collateral clause result */
A68_172  DHKASIM;  /* OPERATORS - mode -> union mode */
A68_171  EHKASIM_rir;
A68_171  FHKASIM;  /* collateral clause result */
A68_172  GHKASIM;  /* OPERATORS - mode -> union mode */
A68_172  HHKASIM;  /* OPERATORS - mode -> union mode */
A68_171  IHKASIM;  /* collateral clause result */
A68_172  JHKASIM;  /* OPERATORS - mode -> union mode */
A68_170  KHKASIM;  /* collateral clause result */
A68_172  LHKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tvxtvand_2);
 /* line 1178: */
 /* line 1179: */
BIHASIM_assocdyop( Ams, &UGKASIM );
VGKASIM = UGKASIM ;
switch ( VGKASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS,BITS)  */
WGKASIM_rrr = (VGKASIM.data.mode1);
 /* line 1180: */
 /* line 1181: */
{ 
XGKASIM.Rs1 = WGKASIM_rrr.Rs1;
XGKASIM.Rs2 = WGKASIM_rrr.Rs2;
XGKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(YGKASIM,mode1,1,XGKASIM));
 /* line 1182: */
ISEASIM_using(LAEASIM_or, A_UNITE(ZGKASIM,mode1,1,WGKASIM_rrr));
 /* line 1183: */
AHKASIM.Rs1 = WGKASIM_rrr.Rd;
AHKASIM.Imm = 1;
AHKASIM.Rd = WGKASIM_rrr.Rd;
ISEASIM_using(HAEASIM_and, A_UNITE(BHKASIM,mode2,2,AHKASIM));
 /* line 1184: */
CHKASIM.Rs1 = NEGASIM_tempreg1;
CHKASIM.Rs2 = WGKASIM_rrr.Rd;
CHKASIM.Rd = WGKASIM_rrr.Rd;
ISEASIM_using(LAEASIM_or, A_UNITE(DHKASIM,mode1,1,CHKASIM));
 /* line 1185: */
 /* line 1186: */
 /* line 1187: */
IHHASIM_pop(Ams);
} 
break;
case 2: /* STRUCT(BITS,INT,BITS)  */
EHKASIM_rir = (VGKASIM.data.mode2);
 /* line 1188: */
 /* line 1189: */
{ 
FHKASIM.Rs1 = EHKASIM_rir.Rs1;
FHKASIM.Imm = EHKASIM_rir.Imm;
FHKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(GHKASIM,mode2,2,FHKASIM));
 /* line 1190: */
ISEASIM_using(LAEASIM_or, A_UNITE(HHKASIM,mode2,2,EHKASIM_rir));
 /* line 1191: */
IHKASIM.Rs1 = EHKASIM_rir.Rd;
IHKASIM.Imm = 1;
IHKASIM.Rd = EHKASIM_rir.Rd;
ISEASIM_using(HAEASIM_and, A_UNITE(JHKASIM,mode2,2,IHKASIM));
 /* line 1192: */
KHKASIM.Rs1 = NEGASIM_tempreg1;
KHKASIM.Rs2 = EHKASIM_rir.Rd;
KHKASIM.Rd = EHKASIM_rir.Rd;
ISEASIM_using(LAEASIM_or, A_UNITE(LHKASIM,mode1,1,KHKASIM));
 /* line 1193: */
 /* line 1194: */
 /* line 1195: */
IHHASIM_pop(Ams);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(tvxtvand_2);
return;
} 
#undef NL

A_STATIC A68_VOID  NHKASIM_tvxtvor_2(A68_375 * Ams)
{ 
A68_172  OHKASIM;  /* avoid structure result */
A68_172  PHKASIM;  /* united object - for case conformity */
A68_170  QHKASIM_rrr;
A68_170  RHKASIM;  /* collateral clause result */
A68_172  SHKASIM;  /* OPERATORS - mode -> union mode */
A68_172  THKASIM;  /* OPERATORS - mode -> union mode */
A68_171  UHKASIM;  /* collateral clause result */
A68_172  VHKASIM;  /* OPERATORS - mode -> union mode */
A68_170  WHKASIM;  /* collateral clause result */
A68_172  XHKASIM;  /* OPERATORS - mode -> union mode */
A68_171  YHKASIM_rir;
A68_171  ZHKASIM;  /* collateral clause result */
A68_172  AIKASIM;  /* OPERATORS - mode -> union mode */
A68_172  BIKASIM;  /* OPERATORS - mode -> union mode */
A68_171  CIKASIM;  /* collateral clause result */
A68_172  DIKASIM;  /* OPERATORS - mode -> union mode */
A68_170  EIKASIM;  /* collateral clause result */
A68_172  FIKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tvxtvor_2);
 /* line 1199: */
 /* line 1200: */
BIHASIM_assocdyop( Ams, &OHKASIM );
PHKASIM = OHKASIM ;
switch ( PHKASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS,BITS)  */
QHKASIM_rrr = (PHKASIM.data.mode1);
 /* line 1201: */
 /* line 1202: */
{ 
RHKASIM.Rs1 = QHKASIM_rrr.Rs1;
RHKASIM.Rs2 = QHKASIM_rrr.Rs2;
RHKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(SHKASIM,mode1,1,RHKASIM));
 /* line 1203: */
ISEASIM_using(LAEASIM_or, A_UNITE(THKASIM,mode1,1,QHKASIM_rrr));
 /* line 1204: */
UHKASIM.Rs1 = QHKASIM_rrr.Rd;
UHKASIM.Imm = 2;
UHKASIM.Rd = QHKASIM_rrr.Rd;
ISEASIM_using(HAEASIM_and, A_UNITE(VHKASIM,mode2,2,UHKASIM));
 /* line 1205: */
WHKASIM.Rs1 = NEGASIM_tempreg1;
WHKASIM.Rs2 = QHKASIM_rrr.Rd;
WHKASIM.Rd = QHKASIM_rrr.Rd;
ISEASIM_using(LAEASIM_or, A_UNITE(XHKASIM,mode1,1,WHKASIM));
 /* line 1206: */
 /* line 1207: */
 /* line 1208: */
IHHASIM_pop(Ams);
} 
break;
case 2: /* STRUCT(BITS,INT,BITS)  */
YHKASIM_rir = (PHKASIM.data.mode2);
 /* line 1209: */
 /* line 1210: */
{ 
ZHKASIM.Rs1 = YHKASIM_rir.Rs1;
ZHKASIM.Imm = YHKASIM_rir.Imm;
ZHKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(AIKASIM,mode2,2,ZHKASIM));
 /* line 1211: */
ISEASIM_using(LAEASIM_or, A_UNITE(BIKASIM,mode2,2,YHKASIM_rir));
 /* line 1212: */
CIKASIM.Rs1 = YHKASIM_rir.Rd;
CIKASIM.Imm = 2;
CIKASIM.Rd = YHKASIM_rir.Rd;
ISEASIM_using(HAEASIM_and, A_UNITE(DIKASIM,mode2,2,CIKASIM));
 /* line 1213: */
EIKASIM.Rs1 = NEGASIM_tempreg1;
EIKASIM.Rs2 = YHKASIM_rir.Rd;
EIKASIM.Rd = YHKASIM_rir.Rd;
ISEASIM_using(LAEASIM_or, A_UNITE(FIKASIM,mode1,1,EIKASIM));
 /* line 1214: */
 /* line 1215: */
 /* line 1216: */
IHHASIM_pop(Ams);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(tvxtvor_2);
return;
} 
#undef NL

A_STATIC A68_VOID  HIKASIM_tvxtvnot_2(A68_375 * Ams)
{ 
A68_172  IIKASIM;  /* avoid structure result */
A68_172  JIKASIM;  /* united object - for case conformity */
A68_170  KIKASIM_rrr;
A68_171  LIKASIM;  /* collateral clause result */
A68_172  MIKASIM;  /* OPERATORS - mode -> union mode */
A68_170  NIKASIM;  /* collateral clause result */
A68_172  OIKASIM;  /* OPERATORS - mode -> union mode */
A68_172  PIKASIM;  /* OPERATORS - mode -> union mode */
A68_170  QIKASIM;  /* collateral clause result */
A68_172  RIKASIM;  /* OPERATORS - mode -> union mode */
A68_170  SIKASIM;  /* collateral clause result */
A68_172  TIKASIM;  /* OPERATORS - mode -> union mode */
A68_171  UIKASIM_rir;
A68_171  VIKASIM;  /* collateral clause result */
A68_172  WIKASIM;  /* OPERATORS - mode -> union mode */
A68_171  XIKASIM;  /* collateral clause result */
A68_172  YIKASIM;  /* OPERATORS - mode -> union mode */
A68_172  ZIKASIM;  /* OPERATORS - mode -> union mode */
A68_170  AJKASIM;  /* collateral clause result */
A68_172  BJKASIM;  /* OPERATORS - mode -> union mode */
A68_170  CJKASIM;  /* collateral clause result */
A68_172  DJKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tvxtvnot_2);
 /* line 1221: */
 /* line 1222: */
SGHASIM_monop( Ams, &IIKASIM );
JIKASIM = IIKASIM ;
switch ( JIKASIM.mode )
{ 
case 1: /* STRUCT(BITS,BITS,BITS)  */
KIKASIM_rrr = (JIKASIM.data.mode1);
 /* line 1223: */
 /* line 1224: */
{ 
LIKASIM.Rs1 = FVEASIM_g0;
LIKASIM.Imm = 3;
LIKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(MIKASIM,mode2,2,LIKASIM));
 /* line 1225: */
NIKASIM.Rs1 = NEGASIM_tempreg1;
NIKASIM.Rs2 = KIKASIM_rrr.Rs2;
NIKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TAEASIM_sub, A_UNITE(OIKASIM,mode1,1,NIKASIM));
 /* line 1226: */
ISEASIM_using(HCEASIM_subcc, A_UNITE(PIKASIM,mode1,1,KIKASIM_rrr));
 /* line 1227: */
QIKASIM.Rs1 = KIKASIM_rrr.Rd;
QIKASIM.Rs2 = KIKASIM_rrr.Rd;
QIKASIM.Rd = KIKASIM_rrr.Rd;
ISEASIM_using(NBEASIM_subx, A_UNITE(RIKASIM,mode1,1,QIKASIM));
 /* line 1228: */
SIKASIM.Rs1 = NEGASIM_tempreg1;
SIKASIM.Rs2 = KIKASIM_rrr.Rd;
 /* line 1229: */
SIKASIM.Rd = KIKASIM_rrr.Rd;
 /* line 1230: */
ISEASIM_using(HAEASIM_and, A_UNITE(TIKASIM,mode1,1,SIKASIM));
} 
break;
case 2: /* STRUCT(BITS,INT,BITS)  */
UIKASIM_rir = (JIKASIM.data.mode2);
 /* line 1231: */
 /* line 1232: */
{ 
VIKASIM.Rs1 = FVEASIM_g0;
VIKASIM.Imm = 3;
VIKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(WIKASIM,mode2,2,VIKASIM));
 /* line 1233: */
XIKASIM.Rs1 = NEGASIM_tempreg1;
XIKASIM.Imm = UIKASIM_rir.Imm;
XIKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TAEASIM_sub, A_UNITE(YIKASIM,mode2,2,XIKASIM));
 /* line 1234: */
ISEASIM_using(HCEASIM_subcc, A_UNITE(ZIKASIM,mode2,2,UIKASIM_rir));
 /* line 1235: */
AJKASIM.Rs1 = UIKASIM_rir.Rd;
AJKASIM.Rs2 = UIKASIM_rir.Rd;
AJKASIM.Rd = UIKASIM_rir.Rd;
ISEASIM_using(NBEASIM_subx, A_UNITE(BJKASIM,mode1,1,AJKASIM));
 /* line 1236: */
CJKASIM.Rs1 = NEGASIM_tempreg1;
CJKASIM.Rs2 = UIKASIM_rir.Rd;
 /* line 1237: */
CJKASIM.Rd = UIKASIM_rir.Rd;
 /* line 1238: */
ISEASIM_using(HAEASIM_and, A_UNITE(DJKASIM,mode1,1,CJKASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(tvxtvnot_2);
return;
} 
#undef NL

A_STATIC A68_VOID  GJKASIM_eixeirelation(A68_375 * Ams, A68_BITS  Rel)
{ 
A68_INT  IJKASIM_ei_x;
A68_INT  JJKASIM_q_y;
A68_INT  KJKASIM_ei_y;
A68_170  LJKASIM;  /* collateral clause result */
A68_172  MJKASIM;  /* OPERATORS - mode -> union mode */
A68_170  NJKASIM;  /* collateral clause result */
A68_172  OJKASIM;  /* OPERATORS - mode -> union mode */
A68_170  PJKASIM;  /* collateral clause result */
A68_172  QJKASIM;  /* OPERATORS - mode -> union mode */
A68_189  RJKASIM;  /* avoid structure result */
A68_171  SJKASIM;  /* collateral clause result */
A68_172  TJKASIM;  /* OPERATORS - mode -> union mode */
A68_171  UJKASIM;  /* collateral clause result */
A68_172  VJKASIM;  /* OPERATORS - mode -> union mode */
A68_170  WJKASIM;  /* collateral clause result */
A68_172  XJKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(eixeirelation);
 /* line 1244: */
 /* line 1245: */
{ 
 /* line 1246: */
IJKASIM_ei_x = (EZGASIM_tos+1);
 /* line 1247: */
JJKASIM_q_y = (EZGASIM_tos+2);
 /* line 1248: */
KJKASIM_ei_y = (EZGASIM_tos+3);
 /* line 1249: */
HGHASIM_transmutesmall(Ams, KJKASIM_ei_y);
 /* line 1250: */
HGHASIM_transmutesmall(Ams, JJKASIM_q_y);
 /* line 1251: */
HGHASIM_transmutesmall(Ams, IJKASIM_ei_x);
 /* line 1252: */
HGHASIM_transmutesmall(Ams, HJKASIM_q_x);
 /* line 1254: */
LJKASIM.Rs1 = KBHASIM_rsource(Ams, HJKASIM_q_x);
LJKASIM.Rs2 = KBHASIM_rsource(Ams, JJKASIM_q_y);
LJKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(MJKASIM,mode1,1,LJKASIM));
 /* line 1255: */
NJKASIM.Rs1 = FVEASIM_g0;
NJKASIM.Rs2 = NEGASIM_tempreg1;
NJKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TAEASIM_sub, A_UNITE(OJKASIM,mode1,1,NJKASIM));
 /* line 1258: */
PJKASIM.Rs1 = KBHASIM_rsource(Ams, IJKASIM_ei_x);
PJKASIM.Rs2 = KBHASIM_rsource(Ams, KJKASIM_ei_y);
PJKASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(QJKASIM,mode1,1,PJKASIM));
 /* line 1259: */
VXDASIM_( FZDASIM_b, (A68_BITS )(Rel|RWDASIM_n_a), &RJKASIM );
YQEASIM_using(RJKASIM, (GLDASIM_location+12));
 /* line 1260: */
SJKASIM.Rs1 = FVEASIM_g0;
SJKASIM.Imm = 2;
SJKASIM.Rd = GBHASIM_rdest(Ams, KJKASIM_ei_y);
ISEASIM_using(LAEASIM_or, A_UNITE(TJKASIM,mode2,2,SJKASIM));
 /* line 1261: */
UJKASIM.Rs1 = FVEASIM_g0;
UJKASIM.Imm = 1;
UJKASIM.Rd = GBHASIM_rdest(Ams, KJKASIM_ei_y);
ISEASIM_using(LAEASIM_or, A_UNITE(VJKASIM,mode2,2,UJKASIM));
 /* line 1264: */
WJKASIM.Rs1 = NEGASIM_tempreg1;
WJKASIM.Rs2 = GBHASIM_rdest(Ams, KJKASIM_ei_y);
WJKASIM.Rd = GBHASIM_rdest(Ams, KJKASIM_ei_y);
ISEASIM_using(HAEASIM_and, A_UNITE(XJKASIM,mode1,1,WJKASIM));
 /* line 1267: */
IHHASIM_pop(Ams);
IHHASIM_pop(Ams);
 /* line 1268: */
IHHASIM_pop(Ams);
} 
A_PROC_EXIT(eixeirelation);
return;
} 
#undef NL

A_STATIC A68_VOID  AKKASIM_eexeerelation(A68_375 * Ams, A68_BITS  Rel)
{ 
A68_170  BKKASIM;  /* collateral clause result */
A68_172  CKKASIM;  /* OPERATORS - mode -> union mode */
A68_170  DKKASIM;  /* collateral clause result */
A68_172  EKKASIM;  /* OPERATORS - mode -> union mode */
A68_170  FKKASIM;  /* collateral clause result */
A68_172  GKKASIM;  /* OPERATORS - mode -> union mode */
A68_170  HKKASIM;  /* collateral clause result */
A68_172  IKKASIM;  /* OPERATORS - mode -> union mode */
A68_170  JKKASIM;  /* collateral clause result */
A68_172  KKKASIM;  /* OPERATORS - mode -> union mode */
A68_170  LKKASIM;  /* collateral clause result */
A68_172  MKKASIM;  /* OPERATORS - mode -> union mode */
A68_189  NKKASIM;  /* avoid structure result */
A68_171  OKKASIM;  /* collateral clause result */
A68_172  PKKASIM;  /* OPERATORS - mode -> union mode */
A68_171  QKKASIM;  /* collateral clause result */
A68_172  RKKASIM;  /* OPERATORS - mode -> union mode */
A68_170  SKKASIM;  /* collateral clause result */
A68_172  TKKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(eexeerelation);
 /* line 1273: */
 /* line 1274: */
{ 
HGHASIM_transmutesmall(Ams, EZGASIM_tos);
 /* line 1275: */
HGHASIM_transmutesmall(Ams, FZGASIM_tos1);
 /* line 1278: */
BKKASIM.Rs1 = FVEASIM_g0;
BKKASIM.Rs2 = KBHASIM_rsource(Ams, EZGASIM_tos);
BKKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(CKKASIM,mode1,1,BKKASIM));
 /* line 1279: */
DKKASIM.Rs1 = NEGASIM_tempreg1;
DKKASIM.Rs2 = NEGASIM_tempreg1;
DKKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(NBEASIM_subx, A_UNITE(EKKASIM,mode1,1,DKKASIM));
 /* line 1282: */
FKKASIM.Rs1 = FVEASIM_g0;
FKKASIM.Rs2 = KBHASIM_rsource(Ams, FZGASIM_tos1);
FKKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(HCEASIM_subcc, A_UNITE(GKKASIM,mode1,1,FKKASIM));
 /* line 1283: */
HKKASIM.Rs1 = OEGASIM_tempreg2;
HKKASIM.Rs2 = OEGASIM_tempreg2;
HKKASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(NBEASIM_subx, A_UNITE(IKKASIM,mode1,1,HKKASIM));
 /* line 1285: */
JKKASIM.Rs1 = NEGASIM_tempreg1;
JKKASIM.Rs2 = OEGASIM_tempreg2;
JKKASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(KKKASIM,mode1,1,JKKASIM));
 /* line 1287: */
LKKASIM.Rs1 = KBHASIM_rsource(Ams, EZGASIM_tos);
LKKASIM.Rs2 = KBHASIM_rsource(Ams, FZGASIM_tos1);
LKKASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(MKKASIM,mode1,1,LKKASIM));
 /* line 1288: */
VXDASIM_( FZDASIM_b, (A68_BITS )(Rel|RWDASIM_n_a), &NKKASIM );
YQEASIM_using(NKKASIM, (GLDASIM_location+12));
 /* line 1289: */
OKKASIM.Rs1 = FVEASIM_g0;
OKKASIM.Imm = 2;
OKKASIM.Rd = GBHASIM_rdest(Ams, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(PKKASIM,mode2,2,OKKASIM));
 /* line 1290: */
QKKASIM.Rs1 = FVEASIM_g0;
QKKASIM.Imm = 1;
QKKASIM.Rd = GBHASIM_rdest(Ams, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(RKKASIM,mode2,2,QKKASIM));
 /* line 1293: */
SKKASIM.Rs1 = NEGASIM_tempreg1;
SKKASIM.Rs2 = GBHASIM_rdest(Ams, FZGASIM_tos1);
SKKASIM.Rd = GBHASIM_rdest(Ams, FZGASIM_tos1);
ISEASIM_using(HAEASIM_and, A_UNITE(TKKASIM,mode1,1,SKKASIM));
 /* line 1296: */
 /* line 1297: */
IHHASIM_pop(Ams);
} 
A_PROC_EXIT(eexeerelation);
return;
} 
#undef NL
 /* line 1307: */
 /* line 1308: */
 /* line 1309: */

A_STATIC A68_VOID  YKKASIM_optbiopbsxbsbs(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction)
{ 
A68_346  ZKKASIM;  /* avoid structure result */
A68_346  ALKASIM;  /* united object - for case conformity */
A68_346  BLKASIM;  /* avoid structure result */
A68_346  CLKASIM;  /* united object - for case conformity */
A68_170  DLKASIM;  /* collateral clause result */
A68_172  ELKASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(optbiopbsxbsbs);
 /* line 1311: */
 /* line 1312: */
if ( !DZIASIM_optimiseon )
{ 
 /* line 1313: */
 /* line 1315: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
else
{ 
 /* line 1316: */
JVGASIM_typeof( (&(S->Location_stack)), (EZGASIM_tos+1), &ZKKASIM );
ALKASIM = ZKKASIM ;
switch ( ALKASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1317: */
 /* line 1318: */
JVGASIM_typeof( (&(S->Location_stack)), (EZGASIM_tos+3), &BLKASIM );
CLKASIM = BLKASIM ;
switch ( CLKASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1319: */
 /* line 1321: */
if ( A_CALLPROC(Optimise,(S),(S,(Optimise).nonlocals)) )
{ 
DLKASIM.Rs1 = KBHASIM_rsource(S, EZGASIM_tos);
DLKASIM.Rs2 = KBHASIM_rsource(S, (EZGASIM_tos+2));
DLKASIM.Rd = GBHASIM_rdest(S, (EZGASIM_tos+2));
ISEASIM_using(HAEASIM_and, A_UNITE(ELKASIM,mode1,1,DLKASIM));
 /* line 1322: */
A_CALLPROC(Optimiseaction,(S),(S,(Optimiseaction).nonlocals));
 /* line 1324: */
IHHASIM_pop(S);
 /* line 1325: */
 /* line 1326: */
IHHASIM_pop(S);
} 
else
{ 
 /* line 1327: */
 /* line 1328: */
 /* line 1329: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
break;
default: 
 /* line 1330: */
 /* line 1331: */
 /* line 1332: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
break;
default: 
 /* line 1333: */
 /* line 1334: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
} 
A_PROC_EXIT(optbiopbsxbsbs);
return;
} 
#undef NL
 /* line 1337: */
 /* line 1338: */
 /* line 1339: */

A_STATIC A68_VOID  JLKASIM_optbiopbsbs(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction)
{ 
A68_346  KLKASIM;  /* avoid structure result */
A68_346  LLKASIM;  /* united object - for case conformity */
A_PROC_ENTRY(optbiopbsbs);
 /* line 1341: */
 /* line 1342: */
if ( !DZIASIM_optimiseon )
{ 
 /* line 1343: */
 /* line 1345: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
else
{ 
 /* line 1346: */
JVGASIM_typeof( (&(S->Location_stack)), (EZGASIM_tos+1), &KLKASIM );
LLKASIM = KLKASIM ;
switch ( LLKASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1347: */
 /* line 1348: */
if ( A_CALLPROC(Optimise,(S),(S,(Optimise).nonlocals)) )
{ 
PMHASIM_forceload(S, EZGASIM_tos);
 /* line 1351: */
 /* line 1352: */
 /* line 1353: */
A_CALLPROC(Optimiseaction,(S),(S,(Optimiseaction).nonlocals));
} 
else
{ 
 /* line 1354: */
 /* line 1355: */
 /* line 1356: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
break;
default: 
 /* line 1357: */
 /* line 1358: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
} 
A_PROC_EXIT(optbiopbsbs);
return;
} 
#undef NL
 /* line 1361: */
 /* line 1362: */
 /* line 1363: */

A_STATIC A68_VOID  QLKASIM_optbiopbsibs(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction)
{ 
A68_346  RLKASIM;  /* avoid structure result */
A68_346  SLKASIM;  /* united object - for case conformity */
A68_341  TLKASIM;  /* avoid structure result */
A68_341  ULKASIM;  /* united object - for case conformity */
A_PROC_ENTRY(optbiopbsibs);
 /* line 1365: */
 /* line 1366: */
if ( !DZIASIM_optimiseon )
{ 
 /* line 1367: */
 /* line 1369: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
else
{ 
 /* line 1370: */
JVGASIM_typeof( (&(S->Location_stack)), (EZGASIM_tos+1), &RLKASIM );
SLKASIM = RLKASIM ;
switch ( SLKASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1371: */
 /* line 1372: */
PVGASIM_stateof( (&(S->Location_stack)), (EZGASIM_tos+2), &TLKASIM );
ULKASIM = TLKASIM ;
switch ( ULKASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
 /* line 1373: */
 /* line 1374: */
if ( A_CALLPROC(Optimise,(S),(S,(Optimise).nonlocals)) )
{ 
 /* line 1375: */
 /* line 1376: */
A_CALLPROC(Optimiseaction,(S),(S,(Optimiseaction).nonlocals));
} 
else
{ 
 /* line 1377: */
 /* line 1378: */
 /* line 1379: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
break;
default: 
 /* line 1380: */
 /* line 1381: */
 /* line 1382: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
break;
default: 
 /* line 1383: */
 /* line 1384: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
} 
A_PROC_EXIT(optbiopbsibs);
return;
} 
#undef NL
 /* line 1387: */
 /* line 1388: */
 /* line 1389: */

A_STATIC A68_VOID  ZLKASIM_optbiopbsxbstv(A68_375 * S, A68_383  Optimise, A68_381  Optimiseaction, A68_381  Defaultaction)
{ 
A68_346  AMKASIM;  /* avoid structure result */
A68_346  BMKASIM;  /* united object - for case conformity */
A68_346  CMKASIM;  /* avoid structure result */
A68_346  DMKASIM;  /* united object - for case conformity */
A_PROC_ENTRY(optbiopbsxbstv);
 /* line 1391: */
 /* line 1392: */
if ( !DZIASIM_optimiseon )
{ 
 /* line 1393: */
 /* line 1395: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
else
{ 
 /* line 1396: */
JVGASIM_typeof( (&(S->Location_stack)), (EZGASIM_tos+1), &AMKASIM );
BMKASIM = AMKASIM ;
switch ( BMKASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1397: */
 /* line 1398: */
JVGASIM_typeof( (&(S->Location_stack)), (EZGASIM_tos+3), &CMKASIM );
DMKASIM = CMKASIM ;
switch ( DMKASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1399: */
 /* line 1400: */
if ( A_CALLPROC(Optimise,(S),(S,(Optimise).nonlocals)) )
{ 
 /* line 1401: */
 /* line 1402: */
A_CALLPROC(Optimiseaction,(S),(S,(Optimiseaction).nonlocals));
} 
else
{ 
 /* line 1403: */
 /* line 1404: */
 /* line 1405: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
} 
break;
default: 
 /* line 1406: */
 /* line 1407: */
 /* line 1408: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
break;
default: 
 /* line 1409: */
 /* line 1410: */
A_CALLPROC(Defaultaction,(S),(S,(Defaultaction).nonlocals));
break;
} 
} 
A_PROC_EXIT(optbiopbsxbstv);
return;
} 
#undef NL

A_STATIC A68_BOOL  FMKASIM_alwaysoptimise(A68_375 * S)
{ 
A68_BOOL  GMKASIM;  /* clause result */
A_PROC_ENTRY(alwaysoptimise);
GMKASIM = A68_TRUE;
A_PROC_EXIT(alwaysoptimise);
return( GMKASIM );
} 
#undef NL

A_STATIC A68_VOID  KMKASIM_biopactionlist(A68_430  *ReturnedValue)
{ 
A68_448  PMKASIM;  /* collateral clause result */
A68_241  SMKASIM;  /* avoid structure result */
A68_381 * VMKASIM;  /* YIELD */
A68_381  WMKASIM;  /* procedure value */
A68_241  ZMKASIM;  /* avoid structure result */
A68_381 * CNKASIM;  /* YIELD */
A68_381  DNKASIM;  /* procedure value */
A68_241  GNKASIM;  /* avoid structure result */
A68_381 * JNKASIM;  /* YIELD */
A68_381  KNKASIM;  /* procedure value */
A68_241  NNKASIM;  /* avoid structure result */
A68_381 * QNKASIM;  /* YIELD */
A68_381  RNKASIM;  /* procedure value */
A68_241  UNKASIM;  /* avoid structure result */
A68_381 * XNKASIM;  /* YIELD */
A68_381  YNKASIM;  /* procedure value */
A68_241  BOKASIM;  /* avoid structure result */
A68_381 * EOKASIM;  /* YIELD */
A68_381  FOKASIM;  /* procedure value */
A68_241  IOKASIM;  /* avoid structure result */
A68_381 * LOKASIM;  /* YIELD */
A68_381  MOKASIM;  /* procedure value */
A68_241  POKASIM;  /* avoid structure result */
A68_381 * SOKASIM;  /* YIELD */
A68_381  TOKASIM;  /* procedure value */
A68_241  WOKASIM;  /* avoid structure result */
A68_381 * ZOKASIM;  /* YIELD */
A68_381  APKASIM;  /* procedure value */
A68_241  DPKASIM;  /* avoid structure result */
A68_381 * GPKASIM;  /* YIELD */
A68_381  HPKASIM;  /* procedure value */
A68_241  KPKASIM;  /* avoid structure result */
A68_381 * RPKASIM;  /* YIELD */
A68_381  SPKASIM;  /* procedure value */
A68_241  VPKASIM;  /* avoid structure result */
A68_381 * CQKASIM;  /* YIELD */
A68_381  DQKASIM;  /* procedure value */
A68_241  GQKASIM;  /* avoid structure result */
A68_381 * NQKASIM;  /* YIELD */
A68_381  OQKASIM;  /* procedure value */
A68_241  RQKASIM;  /* avoid structure result */
A68_381 * YQKASIM;  /* YIELD */
A68_381  ZQKASIM;  /* procedure value */
A68_241  CRKASIM;  /* avoid structure result */
A68_381 * FRKASIM;  /* YIELD */
A68_381  GRKASIM;  /* procedure value */
A68_241  JRKASIM;  /* avoid structure result */
A68_381 * MRKASIM;  /* YIELD */
A68_381  NRKASIM;  /* procedure value */
A68_241  QRKASIM;  /* avoid structure result */
A68_381 * TRKASIM;  /* YIELD */
A68_381  URKASIM;  /* procedure value */
A68_241  XRKASIM;  /* avoid structure result */
A68_381 * ASKASIM;  /* YIELD */
A68_381  BSKASIM;  /* procedure value */
A68_241  ESKASIM;  /* avoid structure result */
A68_381 * MTKASIM;  /* YIELD */
A68_381  NTKASIM;  /* procedure value */
A68_241  QTKASIM;  /* avoid structure result */
A68_381 * AVKASIM;  /* YIELD */
A68_381  BVKASIM;  /* procedure value */
A68_241  EVKASIM;  /* avoid structure result */
A68_381 * OWKASIM;  /* YIELD */
A68_381  PWKASIM;  /* procedure value */
A68_241  SWKASIM;  /* avoid structure result */
A68_381 * PXKASIM;  /* YIELD */
A68_381  QXKASIM;  /* procedure value */
A68_241  TXKASIM;  /* avoid structure result */
A68_381 * QYKASIM;  /* YIELD */
A68_381  RYKASIM;  /* procedure value */
A68_241  UYKASIM;  /* avoid structure result */
A68_381 * SZKASIM;  /* YIELD */
A68_381  TZKASIM;  /* procedure value */
A68_241  WZKASIM;  /* avoid structure result */
A68_381 * EALASIM;  /* YIELD */
A68_381  FALASIM;  /* procedure value */
A68_241  IALASIM;  /* avoid structure result */
A68_381 * PALASIM;  /* YIELD */
A68_381  QALASIM;  /* procedure value */
A68_241  TALASIM;  /* avoid structure result */
A68_381 * ABLASIM;  /* YIELD */
A68_381  BBLASIM;  /* procedure value */
A68_241  EBLASIM;  /* avoid structure result */
A68_381 * LBLASIM;  /* YIELD */
A68_381  MBLASIM;  /* procedure value */
A68_241  PBLASIM;  /* avoid structure result */
A68_381 * NCLASIM;  /* YIELD */
A68_381  OCLASIM;  /* procedure value */
A68_241  RCLASIM;  /* avoid structure result */
A68_381 * ODLASIM;  /* YIELD */
A68_381  PDLASIM;  /* procedure value */
A68_241  SDLASIM;  /* avoid structure result */
A68_381 * QELASIM;  /* YIELD */
A68_381  RELASIM;  /* procedure value */
A68_241  UELASIM;  /* avoid structure result */
A68_381 * WFLASIM;  /* YIELD */
A68_381  XFLASIM;  /* procedure value */
A68_241  AGLASIM;  /* avoid structure result */
A68_381 * IGLASIM;  /* YIELD */
A68_381  JGLASIM;  /* procedure value */
A68_241  MGLASIM;  /* avoid structure result */
A68_381 * TGLASIM;  /* YIELD */
A68_381  UGLASIM;  /* procedure value */
A68_241  XGLASIM;  /* avoid structure result */
A68_381 * FHLASIM;  /* YIELD */
A68_381  GHLASIM;  /* procedure value */
A68_241  JHLASIM;  /* avoid structure result */
A68_381 * QHLASIM;  /* YIELD */
A68_381  RHLASIM;  /* procedure value */
A68_241  UHLASIM;  /* avoid structure result */
A68_381 * BILASIM;  /* YIELD */
A68_381  CILASIM;  /* procedure value */
A68_241  FILASIM;  /* avoid structure result */
A68_381 * UILASIM;  /* YIELD */
A68_381  VILASIM;  /* procedure value */
A68_241  YILASIM;  /* avoid structure result */
A68_381 * NJLASIM;  /* YIELD */
A68_381  OJLASIM;  /* procedure value */
A68_241  RJLASIM;  /* avoid structure result */
A68_381 * GKLASIM;  /* YIELD */
A68_381  HKLASIM;  /* procedure value */
A68_241  KKLASIM;  /* avoid structure result */
A68_381 * ZKLASIM;  /* YIELD */
A68_381  ALLASIM;  /* procedure value */
A68_241  DLLASIM;  /* avoid structure result */
A68_381 * SLLASIM;  /* YIELD */
A68_381  TLLASIM;  /* procedure value */
A68_241  WLLASIM;  /* avoid structure result */
A68_381 * LMLASIM;  /* YIELD */
A68_381  MMLASIM;  /* procedure value */
A68_241  PMLASIM;  /* avoid structure result */
A68_381 * ENLASIM;  /* YIELD */
A68_381  FNLASIM;  /* procedure value */
A68_241  INLASIM;  /* avoid structure result */
A68_381 * XNLASIM;  /* YIELD */
A68_381  YNLASIM;  /* procedure value */
A68_241  BOLASIM;  /* avoid structure result */
A68_381 * QOLASIM;  /* YIELD */
A68_381  ROLASIM;  /* procedure value */
A68_241  UOLASIM;  /* avoid structure result */
A68_381 * JPLASIM;  /* YIELD */
A68_381  KPLASIM;  /* procedure value */
A68_241  NPLASIM;  /* avoid structure result */
A68_381 * UPLASIM;  /* YIELD */
A68_381  VPLASIM;  /* procedure value */
A68_241  YPLASIM;  /* avoid structure result */
A68_381 * FQLASIM;  /* YIELD */
A68_381  GQLASIM;  /* procedure value */
A68_241  JQLASIM;  /* avoid structure result */
A68_381 * ARLASIM;  /* YIELD */
A68_381  BRLASIM;  /* procedure value */
A68_241  ERLASIM;  /* avoid structure result */
A68_381 * VRLASIM;  /* YIELD */
A68_381  WRLASIM;  /* procedure value */
A68_241  ZRLASIM;  /* avoid structure result */
A68_381 * XSLASIM;  /* YIELD */
A68_381  YSLASIM;  /* procedure value */
A68_241  BTLASIM;  /* avoid structure result */
A68_381 * TTLASIM;  /* YIELD */
A68_381  UTLASIM;  /* procedure value */
A68_241  XTLASIM;  /* avoid structure result */
A68_381 * EULASIM;  /* YIELD */
A68_381  FULASIM;  /* procedure value */
A68_241  IULASIM;  /* avoid structure result */
A68_381 * PULASIM;  /* YIELD */
A68_381  QULASIM;  /* procedure value */
A68_241  TULASIM;  /* avoid structure result */
A68_381 * AVLASIM;  /* YIELD */
A68_381  BVLASIM;  /* procedure value */
A68_241  EVLASIM;  /* avoid structure result */
A68_381 * LVLASIM;  /* YIELD */
A68_381  MVLASIM;  /* procedure value */
A68_241  PVLASIM;  /* avoid structure result */
A68_381 * WVLASIM;  /* YIELD */
A68_381  XVLASIM;  /* procedure value */
A68_241  AWLASIM;  /* avoid structure result */
A68_381 * HWLASIM;  /* YIELD */
A68_381  IWLASIM;  /* procedure value */
A68_241  LWLASIM;  /* avoid structure result */
A68_381 * SWLASIM;  /* YIELD */
A68_381  TWLASIM;  /* procedure value */
A68_241  WWLASIM;  /* avoid structure result */
A68_381 * DXLASIM;  /* YIELD */
A68_381  EXLASIM;  /* procedure value */
A68_241  HXLASIM;  /* avoid structure result */
A68_381 * OXLASIM;  /* YIELD */
A68_381  PXLASIM;  /* procedure value */
A68_241  SXLASIM;  /* avoid structure result */
A68_381 * ZXLASIM;  /* YIELD */
A68_381  AYLASIM;  /* procedure value */
A68_241  DYLASIM;  /* avoid structure result */
A68_381 * KYLASIM;  /* YIELD */
A68_381  LYLASIM;  /* procedure value */
A68_241  OYLASIM;  /* avoid structure result */
A68_381 * VYLASIM;  /* YIELD */
A68_381  WYLASIM;  /* procedure value */
A68_241  ZYLASIM;  /* avoid structure result */
A68_381 * GZLASIM;  /* YIELD */
A68_381  HZLASIM;  /* procedure value */
A68_241  KZLASIM;  /* avoid structure result */
A68_381 * RZLASIM;  /* YIELD */
A68_381  SZLASIM;  /* procedure value */
A68_241  VZLASIM;  /* avoid structure result */
A68_381 * CAMASIM;  /* YIELD */
A68_381  DAMASIM;  /* procedure value */
A68_241  GAMASIM;  /* avoid structure result */
A68_381 * NAMASIM;  /* YIELD */
A68_381  OAMASIM;  /* procedure value */
A68_241  RAMASIM;  /* avoid structure result */
A68_381 * YAMASIM;  /* YIELD */
A68_381  ZAMASIM;  /* procedure value */
A68_241  CBMASIM;  /* avoid structure result */
A68_381 * JBMASIM;  /* YIELD */
A68_381  KBMASIM;  /* procedure value */
A68_241  NBMASIM;  /* avoid structure result */
A68_381 * UBMASIM;  /* YIELD */
A68_381  VBMASIM;  /* procedure value */
A68_241  YBMASIM;  /* avoid structure result */
A68_381 * FCMASIM;  /* YIELD */
A68_381  GCMASIM;  /* procedure value */
A68_241  JCMASIM;  /* avoid structure result */
A68_381 * QCMASIM;  /* YIELD */
A68_381  RCMASIM;  /* procedure value */
A68_241  UCMASIM;  /* avoid structure result */
A68_381 * BDMASIM;  /* YIELD */
A68_381  CDMASIM;  /* procedure value */
A68_241  FDMASIM;  /* avoid structure result */
A68_381 * MDMASIM;  /* YIELD */
A68_381  NDMASIM;  /* procedure value */
A68_241  QDMASIM;  /* avoid structure result */
A68_381 * XDMASIM;  /* YIELD */
A68_381  YDMASIM;  /* procedure value */
A68_430  ZDMASIM;  /* clause result */
A68_430  AEMASIM;  /* avoid structure result */
A68_430  BEMASIM;  /* OPERATORS - istruct to row */
A68_430  CEMASIM;  /* OPERATORS - assign op */
A_PROC_ENTRY(biopactionlist);
 /* line 1445: */
 /* line 1446: */
YLFASIM_label( RMKASIM, &SMKASIM );
PMKASIM.data[0].Biopname = SMKASIM;
 /* line 1449: */
VMKASIM = A_HEAP(A68_381 ) ;
WMKASIM.fn.fn_global = UMKASIM_anonymous;
WMKASIM.nonlocals = A68_NIL;
(*VMKASIM) = WMKASIM ;
PMKASIM.data[0].Biop_action = VMKASIM;
YLFASIM_label( YMKASIM, &ZMKASIM );
PMKASIM.data[1].Biopname = ZMKASIM;
 /* line 1452: */
CNKASIM = A_HEAP(A68_381 ) ;
DNKASIM.fn.fn_global = BNKASIM_anonymous;
DNKASIM.nonlocals = A68_NIL;
(*CNKASIM) = DNKASIM ;
PMKASIM.data[1].Biop_action = CNKASIM;
YLFASIM_label( FNKASIM, &GNKASIM );
PMKASIM.data[2].Biopname = GNKASIM;
 /* line 1455: */
JNKASIM = A_HEAP(A68_381 ) ;
KNKASIM.fn.fn_global = INKASIM_anonymous;
KNKASIM.nonlocals = A68_NIL;
(*JNKASIM) = KNKASIM ;
PMKASIM.data[2].Biop_action = JNKASIM;
YLFASIM_label( MNKASIM, &NNKASIM );
PMKASIM.data[3].Biopname = NNKASIM;
 /* line 1458: */
QNKASIM = A_HEAP(A68_381 ) ;
RNKASIM.fn.fn_global = PNKASIM_anonymous;
RNKASIM.nonlocals = A68_NIL;
(*QNKASIM) = RNKASIM ;
PMKASIM.data[3].Biop_action = QNKASIM;
YLFASIM_label( TNKASIM, &UNKASIM );
PMKASIM.data[4].Biopname = UNKASIM;
 /* line 1461: */
XNKASIM = A_HEAP(A68_381 ) ;
YNKASIM.fn.fn_global = WNKASIM_anonymous;
YNKASIM.nonlocals = A68_NIL;
(*XNKASIM) = YNKASIM ;
PMKASIM.data[4].Biop_action = XNKASIM;
YLFASIM_label( AOKASIM, &BOKASIM );
PMKASIM.data[5].Biopname = BOKASIM;
 /* line 1464: */
EOKASIM = A_HEAP(A68_381 ) ;
FOKASIM.fn.fn_global = DOKASIM_anonymous;
FOKASIM.nonlocals = A68_NIL;
(*EOKASIM) = FOKASIM ;
PMKASIM.data[5].Biop_action = EOKASIM;
YLFASIM_label( HOKASIM, &IOKASIM );
PMKASIM.data[6].Biopname = IOKASIM;
 /* line 1467: */
LOKASIM = A_HEAP(A68_381 ) ;
MOKASIM.fn.fn_global = KOKASIM_anonymous;
MOKASIM.nonlocals = A68_NIL;
(*LOKASIM) = MOKASIM ;
PMKASIM.data[6].Biop_action = LOKASIM;
YLFASIM_label( OOKASIM, &POKASIM );
PMKASIM.data[7].Biopname = POKASIM;
 /* line 1470: */
SOKASIM = A_HEAP(A68_381 ) ;
TOKASIM.fn.fn_global = ROKASIM_anonymous;
TOKASIM.nonlocals = A68_NIL;
(*SOKASIM) = TOKASIM ;
PMKASIM.data[7].Biop_action = SOKASIM;
YLFASIM_label( VOKASIM, &WOKASIM );
PMKASIM.data[8].Biopname = WOKASIM;
 /* line 1473: */
ZOKASIM = A_HEAP(A68_381 ) ;
APKASIM.fn.fn_global = YOKASIM_anonymous;
APKASIM.nonlocals = A68_NIL;
(*ZOKASIM) = APKASIM ;
PMKASIM.data[8].Biop_action = ZOKASIM;
YLFASIM_label( CPKASIM, &DPKASIM );
PMKASIM.data[9].Biopname = DPKASIM;
 /* line 1476: */
GPKASIM = A_HEAP(A68_381 ) ;
HPKASIM.fn.fn_global = FPKASIM_anonymous;
HPKASIM.nonlocals = A68_NIL;
(*GPKASIM) = HPKASIM ;
PMKASIM.data[9].Biop_action = GPKASIM;
 /* line 1477: */
YLFASIM_label( JPKASIM, &KPKASIM );
PMKASIM.data[10].Biopname = KPKASIM;
 /* line 1481: */
RPKASIM = A_HEAP(A68_381 ) ;
SPKASIM.fn.fn_global = MPKASIM_anonymous;
SPKASIM.nonlocals = A68_NIL;
(*RPKASIM) = SPKASIM ;
PMKASIM.data[10].Biop_action = RPKASIM;
 /* line 1482: */
YLFASIM_label( UPKASIM, &VPKASIM );
PMKASIM.data[11].Biopname = VPKASIM;
 /* line 1486: */
CQKASIM = A_HEAP(A68_381 ) ;
DQKASIM.fn.fn_global = XPKASIM_anonymous;
DQKASIM.nonlocals = A68_NIL;
(*CQKASIM) = DQKASIM ;
PMKASIM.data[11].Biop_action = CQKASIM;
 /* line 1487: */
YLFASIM_label( FQKASIM, &GQKASIM );
PMKASIM.data[12].Biopname = GQKASIM;
 /* line 1491: */
NQKASIM = A_HEAP(A68_381 ) ;
OQKASIM.fn.fn_global = IQKASIM_anonymous;
OQKASIM.nonlocals = A68_NIL;
(*NQKASIM) = OQKASIM ;
PMKASIM.data[12].Biop_action = NQKASIM;
 /* line 1492: */
YLFASIM_label( QQKASIM, &RQKASIM );
PMKASIM.data[13].Biopname = RQKASIM;
 /* line 1496: */
YQKASIM = A_HEAP(A68_381 ) ;
ZQKASIM.fn.fn_global = TQKASIM_anonymous;
ZQKASIM.nonlocals = A68_NIL;
(*YQKASIM) = ZQKASIM ;
PMKASIM.data[13].Biop_action = YQKASIM;
YLFASIM_label( BRKASIM, &CRKASIM );
PMKASIM.data[14].Biopname = CRKASIM;
 /* line 1499: */
FRKASIM = A_HEAP(A68_381 ) ;
GRKASIM.fn.fn_global = ERKASIM_anonymous;
GRKASIM.nonlocals = A68_NIL;
(*FRKASIM) = GRKASIM ;
PMKASIM.data[14].Biop_action = FRKASIM;
YLFASIM_label( IRKASIM, &JRKASIM );
PMKASIM.data[15].Biopname = JRKASIM;
 /* line 1502: */
MRKASIM = A_HEAP(A68_381 ) ;
NRKASIM.fn.fn_global = LRKASIM_anonymous;
NRKASIM.nonlocals = A68_NIL;
(*MRKASIM) = NRKASIM ;
PMKASIM.data[15].Biop_action = MRKASIM;
 /* line 1503: */
YLFASIM_label( PRKASIM, &QRKASIM );
PMKASIM.data[16].Biopname = QRKASIM;
 /* line 1506: */
TRKASIM = A_HEAP(A68_381 ) ;
URKASIM.fn.fn_global = SRKASIM_anonymous;
URKASIM.nonlocals = A68_NIL;
(*TRKASIM) = URKASIM ;
PMKASIM.data[16].Biop_action = TRKASIM;
 /* line 1507: */
YLFASIM_label( WRKASIM, &XRKASIM );
PMKASIM.data[17].Biopname = XRKASIM;
 /* line 1510: */
ASKASIM = A_HEAP(A68_381 ) ;
BSKASIM.fn.fn_global = ZRKASIM_anonymous;
BSKASIM.nonlocals = A68_NIL;
(*ASKASIM) = BSKASIM ;
PMKASIM.data[17].Biop_action = ASKASIM;
 /* line 1511: */
YLFASIM_label( DSKASIM, &ESKASIM );
PMKASIM.data[18].Biopname = ESKASIM;
 /* line 1530: */
MTKASIM = A_HEAP(A68_381 ) ;
NTKASIM.fn.fn_global = GSKASIM_anonymous;
NTKASIM.nonlocals = A68_NIL;
(*MTKASIM) = NTKASIM ;
PMKASIM.data[18].Biop_action = MTKASIM;
 /* line 1531: */
YLFASIM_label( PTKASIM, &QTKASIM );
PMKASIM.data[19].Biopname = QTKASIM;
 /* line 1552: */
AVKASIM = A_HEAP(A68_381 ) ;
BVKASIM.fn.fn_global = STKASIM_anonymous;
BVKASIM.nonlocals = A68_NIL;
(*AVKASIM) = BVKASIM ;
PMKASIM.data[19].Biop_action = AVKASIM;
 /* line 1553: */
YLFASIM_label( DVKASIM, &EVKASIM );
PMKASIM.data[20].Biopname = EVKASIM;
 /* line 1574: */
OWKASIM = A_HEAP(A68_381 ) ;
PWKASIM.fn.fn_global = GVKASIM_anonymous;
PWKASIM.nonlocals = A68_NIL;
(*OWKASIM) = PWKASIM ;
PMKASIM.data[20].Biop_action = OWKASIM;
 /* line 1575: */
YLFASIM_label( RWKASIM, &SWKASIM );
PMKASIM.data[21].Biopname = SWKASIM;
 /* line 1587: */
PXKASIM = A_HEAP(A68_381 ) ;
QXKASIM.fn.fn_global = UWKASIM_anonymous;
QXKASIM.nonlocals = A68_NIL;
(*PXKASIM) = QXKASIM ;
PMKASIM.data[21].Biop_action = PXKASIM;
 /* line 1588: */
YLFASIM_label( SXKASIM, &TXKASIM );
PMKASIM.data[22].Biopname = TXKASIM;
 /* line 1600: */
QYKASIM = A_HEAP(A68_381 ) ;
RYKASIM.fn.fn_global = VXKASIM_anonymous;
RYKASIM.nonlocals = A68_NIL;
(*QYKASIM) = RYKASIM ;
PMKASIM.data[22].Biop_action = QYKASIM;
 /* line 1601: */
YLFASIM_label( TYKASIM, &UYKASIM );
PMKASIM.data[23].Biopname = UYKASIM;
 /* line 1614: */
SZKASIM = A_HEAP(A68_381 ) ;
TZKASIM.fn.fn_global = WYKASIM_anonymous;
TZKASIM.nonlocals = A68_NIL;
(*SZKASIM) = TZKASIM ;
PMKASIM.data[23].Biop_action = SZKASIM;
 /* line 1615: */
YLFASIM_label( VZKASIM, &WZKASIM );
PMKASIM.data[24].Biopname = WZKASIM;
 /* line 1619: */
EALASIM = A_HEAP(A68_381 ) ;
FALASIM.fn.fn_global = YZKASIM_anonymous;
FALASIM.nonlocals = A68_NIL;
(*EALASIM) = FALASIM ;
PMKASIM.data[24].Biop_action = EALASIM;
 /* line 1620: */
YLFASIM_label( HALASIM, &IALASIM );
PMKASIM.data[25].Biopname = IALASIM;
 /* line 1624: */
PALASIM = A_HEAP(A68_381 ) ;
QALASIM.fn.fn_global = KALASIM_anonymous;
QALASIM.nonlocals = A68_NIL;
(*PALASIM) = QALASIM ;
PMKASIM.data[25].Biop_action = PALASIM;
 /* line 1625: */
YLFASIM_label( SALASIM, &TALASIM );
PMKASIM.data[26].Biopname = TALASIM;
 /* line 1629: */
ABLASIM = A_HEAP(A68_381 ) ;
BBLASIM.fn.fn_global = VALASIM_anonymous;
BBLASIM.nonlocals = A68_NIL;
(*ABLASIM) = BBLASIM ;
PMKASIM.data[26].Biop_action = ABLASIM;
 /* line 1630: */
YLFASIM_label( DBLASIM, &EBLASIM );
PMKASIM.data[27].Biopname = EBLASIM;
 /* line 1634: */
LBLASIM = A_HEAP(A68_381 ) ;
MBLASIM.fn.fn_global = GBLASIM_anonymous;
MBLASIM.nonlocals = A68_NIL;
(*LBLASIM) = MBLASIM ;
PMKASIM.data[27].Biop_action = LBLASIM;
 /* line 1635: */
YLFASIM_label( OBLASIM, &PBLASIM );
PMKASIM.data[28].Biopname = PBLASIM;
 /* line 1648: */
NCLASIM = A_HEAP(A68_381 ) ;
OCLASIM.fn.fn_global = RBLASIM_anonymous;
OCLASIM.nonlocals = A68_NIL;
(*NCLASIM) = OCLASIM ;
PMKASIM.data[28].Biop_action = NCLASIM;
 /* line 1649: */
YLFASIM_label( QCLASIM, &RCLASIM );
PMKASIM.data[29].Biopname = RCLASIM;
 /* line 1661: */
ODLASIM = A_HEAP(A68_381 ) ;
PDLASIM.fn.fn_global = TCLASIM_anonymous;
PDLASIM.nonlocals = A68_NIL;
(*ODLASIM) = PDLASIM ;
PMKASIM.data[29].Biop_action = ODLASIM;
 /* line 1662: */
YLFASIM_label( RDLASIM, &SDLASIM );
PMKASIM.data[30].Biopname = SDLASIM;
 /* line 1675: */
QELASIM = A_HEAP(A68_381 ) ;
RELASIM.fn.fn_global = UDLASIM_anonymous;
RELASIM.nonlocals = A68_NIL;
(*QELASIM) = RELASIM ;
PMKASIM.data[30].Biop_action = QELASIM;
 /* line 1676: */
YLFASIM_label( TELASIM, &UELASIM );
PMKASIM.data[31].Biopname = UELASIM;
 /* line 1693: */
WFLASIM = A_HEAP(A68_381 ) ;
XFLASIM.fn.fn_global = WELASIM_anonymous;
XFLASIM.nonlocals = A68_NIL;
(*WFLASIM) = XFLASIM ;
PMKASIM.data[31].Biop_action = WFLASIM;
 /* line 1694: */
YLFASIM_label( ZFLASIM, &AGLASIM );
PMKASIM.data[32].Biopname = AGLASIM;
 /* line 1698: */
IGLASIM = A_HEAP(A68_381 ) ;
JGLASIM.fn.fn_global = CGLASIM_anonymous;
JGLASIM.nonlocals = A68_NIL;
(*IGLASIM) = JGLASIM ;
PMKASIM.data[32].Biop_action = IGLASIM;
 /* line 1699: */
YLFASIM_label( LGLASIM, &MGLASIM );
PMKASIM.data[33].Biopname = MGLASIM;
 /* line 1703: */
TGLASIM = A_HEAP(A68_381 ) ;
UGLASIM.fn.fn_global = OGLASIM_anonymous;
UGLASIM.nonlocals = A68_NIL;
(*TGLASIM) = UGLASIM ;
PMKASIM.data[33].Biop_action = TGLASIM;
 /* line 1704: */
YLFASIM_label( WGLASIM, &XGLASIM );
PMKASIM.data[34].Biopname = XGLASIM;
 /* line 1708: */
FHLASIM = A_HEAP(A68_381 ) ;
GHLASIM.fn.fn_global = ZGLASIM_anonymous;
GHLASIM.nonlocals = A68_NIL;
(*FHLASIM) = GHLASIM ;
PMKASIM.data[34].Biop_action = FHLASIM;
 /* line 1709: */
YLFASIM_label( IHLASIM, &JHLASIM );
PMKASIM.data[35].Biopname = JHLASIM;
 /* line 1713: */
QHLASIM = A_HEAP(A68_381 ) ;
RHLASIM.fn.fn_global = LHLASIM_anonymous;
RHLASIM.nonlocals = A68_NIL;
(*QHLASIM) = RHLASIM ;
PMKASIM.data[35].Biop_action = QHLASIM;
 /* line 1714: */
YLFASIM_label( THLASIM, &UHLASIM );
PMKASIM.data[36].Biopname = UHLASIM;
 /* line 1718: */
BILASIM = A_HEAP(A68_381 ) ;
CILASIM.fn.fn_global = WHLASIM_anonymous;
CILASIM.nonlocals = A68_NIL;
(*BILASIM) = CILASIM ;
PMKASIM.data[36].Biop_action = BILASIM;
 /* line 1719: */
YLFASIM_label( EILASIM, &FILASIM );
PMKASIM.data[37].Biopname = FILASIM;
 /* line 1730: */
UILASIM = A_HEAP(A68_381 ) ;
VILASIM.fn.fn_global = HILASIM_anonymous;
VILASIM.nonlocals = A68_NIL;
(*UILASIM) = VILASIM ;
PMKASIM.data[37].Biop_action = UILASIM;
 /* line 1731: */
YLFASIM_label( XILASIM, &YILASIM );
PMKASIM.data[38].Biopname = YILASIM;
 /* line 1742: */
NJLASIM = A_HEAP(A68_381 ) ;
OJLASIM.fn.fn_global = AJLASIM_anonymous;
OJLASIM.nonlocals = A68_NIL;
(*NJLASIM) = OJLASIM ;
PMKASIM.data[38].Biop_action = NJLASIM;
 /* line 1743: */
YLFASIM_label( QJLASIM, &RJLASIM );
PMKASIM.data[39].Biopname = RJLASIM;
 /* line 1754: */
GKLASIM = A_HEAP(A68_381 ) ;
HKLASIM.fn.fn_global = TJLASIM_anonymous;
HKLASIM.nonlocals = A68_NIL;
(*GKLASIM) = HKLASIM ;
PMKASIM.data[39].Biop_action = GKLASIM;
 /* line 1755: */
YLFASIM_label( JKLASIM, &KKLASIM );
PMKASIM.data[40].Biopname = KKLASIM;
 /* line 1766: */
ZKLASIM = A_HEAP(A68_381 ) ;
ALLASIM.fn.fn_global = MKLASIM_anonymous;
ALLASIM.nonlocals = A68_NIL;
(*ZKLASIM) = ALLASIM ;
PMKASIM.data[40].Biop_action = ZKLASIM;
 /* line 1767: */
YLFASIM_label( CLLASIM, &DLLASIM );
PMKASIM.data[41].Biopname = DLLASIM;
 /* line 1778: */
SLLASIM = A_HEAP(A68_381 ) ;
TLLASIM.fn.fn_global = FLLASIM_anonymous;
TLLASIM.nonlocals = A68_NIL;
(*SLLASIM) = TLLASIM ;
PMKASIM.data[41].Biop_action = SLLASIM;
 /* line 1779: */
YLFASIM_label( VLLASIM, &WLLASIM );
PMKASIM.data[42].Biopname = WLLASIM;
 /* line 1790: */
LMLASIM = A_HEAP(A68_381 ) ;
MMLASIM.fn.fn_global = YLLASIM_anonymous;
MMLASIM.nonlocals = A68_NIL;
(*LMLASIM) = MMLASIM ;
PMKASIM.data[42].Biop_action = LMLASIM;
 /* line 1791: */
YLFASIM_label( OMLASIM, &PMLASIM );
PMKASIM.data[43].Biopname = PMLASIM;
 /* line 1802: */
ENLASIM = A_HEAP(A68_381 ) ;
FNLASIM.fn.fn_global = RMLASIM_anonymous;
FNLASIM.nonlocals = A68_NIL;
(*ENLASIM) = FNLASIM ;
PMKASIM.data[43].Biop_action = ENLASIM;
 /* line 1803: */
YLFASIM_label( HNLASIM, &INLASIM );
PMKASIM.data[44].Biopname = INLASIM;
 /* line 1814: */
XNLASIM = A_HEAP(A68_381 ) ;
YNLASIM.fn.fn_global = KNLASIM_anonymous;
YNLASIM.nonlocals = A68_NIL;
(*XNLASIM) = YNLASIM ;
PMKASIM.data[44].Biop_action = XNLASIM;
 /* line 1815: */
YLFASIM_label( AOLASIM, &BOLASIM );
PMKASIM.data[45].Biopname = BOLASIM;
 /* line 1826: */
QOLASIM = A_HEAP(A68_381 ) ;
ROLASIM.fn.fn_global = DOLASIM_anonymous;
ROLASIM.nonlocals = A68_NIL;
(*QOLASIM) = ROLASIM ;
PMKASIM.data[45].Biop_action = QOLASIM;
 /* line 1827: */
YLFASIM_label( TOLASIM, &UOLASIM );
PMKASIM.data[46].Biopname = UOLASIM;
 /* line 1838: */
JPLASIM = A_HEAP(A68_381 ) ;
KPLASIM.fn.fn_global = WOLASIM_anonymous;
KPLASIM.nonlocals = A68_NIL;
(*JPLASIM) = KPLASIM ;
PMKASIM.data[46].Biop_action = JPLASIM;
 /* line 1839: */
YLFASIM_label( MPLASIM, &NPLASIM );
PMKASIM.data[47].Biopname = NPLASIM;
 /* line 1843: */
UPLASIM = A_HEAP(A68_381 ) ;
VPLASIM.fn.fn_global = PPLASIM_anonymous;
VPLASIM.nonlocals = A68_NIL;
(*UPLASIM) = VPLASIM ;
PMKASIM.data[47].Biop_action = UPLASIM;
 /* line 1844: */
YLFASIM_label( XPLASIM, &YPLASIM );
PMKASIM.data[48].Biopname = YPLASIM;
 /* line 1848: */
FQLASIM = A_HEAP(A68_381 ) ;
GQLASIM.fn.fn_global = AQLASIM_anonymous;
GQLASIM.nonlocals = A68_NIL;
(*FQLASIM) = GQLASIM ;
PMKASIM.data[48].Biop_action = FQLASIM;
 /* line 1849: */
YLFASIM_label( IQLASIM, &JQLASIM );
PMKASIM.data[49].Biopname = JQLASIM;
 /* line 1859: */
ARLASIM = A_HEAP(A68_381 ) ;
BRLASIM.fn.fn_global = LQLASIM_anonymous;
BRLASIM.nonlocals = A68_NIL;
(*ARLASIM) = BRLASIM ;
PMKASIM.data[49].Biop_action = ARLASIM;
 /* line 1860: */
YLFASIM_label( DRLASIM, &ERLASIM );
PMKASIM.data[50].Biopname = ERLASIM;
 /* line 1869: */
VRLASIM = A_HEAP(A68_381 ) ;
WRLASIM.fn.fn_global = GRLASIM_anonymous;
WRLASIM.nonlocals = A68_NIL;
(*VRLASIM) = WRLASIM ;
PMKASIM.data[50].Biop_action = VRLASIM;
 /* line 1870: */
YLFASIM_label( YRLASIM, &ZRLASIM );
PMKASIM.data[51].Biopname = ZRLASIM;
 /* line 1884: */
XSLASIM = A_HEAP(A68_381 ) ;
YSLASIM.fn.fn_global = BSLASIM_anonymous;
YSLASIM.nonlocals = A68_NIL;
(*XSLASIM) = YSLASIM ;
PMKASIM.data[51].Biop_action = XSLASIM;
 /* line 1885: */
YLFASIM_label( ATLASIM, &BTLASIM );
PMKASIM.data[52].Biopname = BTLASIM;
 /* line 1894: */
TTLASIM = A_HEAP(A68_381 ) ;
UTLASIM.fn.fn_global = DTLASIM_anonymous;
UTLASIM.nonlocals = A68_NIL;
(*TTLASIM) = UTLASIM ;
PMKASIM.data[52].Biop_action = TTLASIM;
 /* line 1895: */
YLFASIM_label( WTLASIM, &XTLASIM );
PMKASIM.data[53].Biopname = XTLASIM;
 /* line 1899: */
EULASIM = A_HEAP(A68_381 ) ;
FULASIM.fn.fn_global = ZTLASIM_anonymous;
FULASIM.nonlocals = A68_NIL;
(*EULASIM) = FULASIM ;
PMKASIM.data[53].Biop_action = EULASIM;
 /* line 1900: */
YLFASIM_label( HULASIM, &IULASIM );
PMKASIM.data[54].Biopname = IULASIM;
 /* line 1904: */
PULASIM = A_HEAP(A68_381 ) ;
QULASIM.fn.fn_global = KULASIM_anonymous;
QULASIM.nonlocals = A68_NIL;
(*PULASIM) = QULASIM ;
PMKASIM.data[54].Biop_action = PULASIM;
 /* line 1905: */
YLFASIM_label( SULASIM, &TULASIM );
PMKASIM.data[55].Biopname = TULASIM;
 /* line 1909: */
AVLASIM = A_HEAP(A68_381 ) ;
BVLASIM.fn.fn_global = VULASIM_anonymous;
BVLASIM.nonlocals = A68_NIL;
(*AVLASIM) = BVLASIM ;
PMKASIM.data[55].Biop_action = AVLASIM;
 /* line 1910: */
YLFASIM_label( DVLASIM, &EVLASIM );
PMKASIM.data[56].Biopname = EVLASIM;
 /* line 1914: */
LVLASIM = A_HEAP(A68_381 ) ;
MVLASIM.fn.fn_global = GVLASIM_anonymous;
MVLASIM.nonlocals = A68_NIL;
(*LVLASIM) = MVLASIM ;
PMKASIM.data[56].Biop_action = LVLASIM;
 /* line 1915: */
YLFASIM_label( OVLASIM, &PVLASIM );
PMKASIM.data[57].Biopname = PVLASIM;
 /* line 1919: */
WVLASIM = A_HEAP(A68_381 ) ;
XVLASIM.fn.fn_global = RVLASIM_anonymous;
XVLASIM.nonlocals = A68_NIL;
(*WVLASIM) = XVLASIM ;
PMKASIM.data[57].Biop_action = WVLASIM;
 /* line 1920: */
YLFASIM_label( ZVLASIM, &AWLASIM );
PMKASIM.data[58].Biopname = AWLASIM;
 /* line 1924: */
HWLASIM = A_HEAP(A68_381 ) ;
IWLASIM.fn.fn_global = CWLASIM_anonymous;
IWLASIM.nonlocals = A68_NIL;
(*HWLASIM) = IWLASIM ;
PMKASIM.data[58].Biop_action = HWLASIM;
 /* line 1925: */
YLFASIM_label( KWLASIM, &LWLASIM );
PMKASIM.data[59].Biopname = LWLASIM;
 /* line 1929: */
SWLASIM = A_HEAP(A68_381 ) ;
TWLASIM.fn.fn_global = NWLASIM_anonymous;
TWLASIM.nonlocals = A68_NIL;
(*SWLASIM) = TWLASIM ;
PMKASIM.data[59].Biop_action = SWLASIM;
 /* line 1930: */
YLFASIM_label( VWLASIM, &WWLASIM );
PMKASIM.data[60].Biopname = WWLASIM;
 /* line 1934: */
DXLASIM = A_HEAP(A68_381 ) ;
EXLASIM.fn.fn_global = YWLASIM_anonymous;
EXLASIM.nonlocals = A68_NIL;
(*DXLASIM) = EXLASIM ;
PMKASIM.data[60].Biop_action = DXLASIM;
 /* line 1935: */
YLFASIM_label( GXLASIM, &HXLASIM );
PMKASIM.data[61].Biopname = HXLASIM;
 /* line 1939: */
OXLASIM = A_HEAP(A68_381 ) ;
PXLASIM.fn.fn_global = JXLASIM_anonymous;
PXLASIM.nonlocals = A68_NIL;
(*OXLASIM) = PXLASIM ;
PMKASIM.data[61].Biop_action = OXLASIM;
 /* line 1940: */
YLFASIM_label( RXLASIM, &SXLASIM );
PMKASIM.data[62].Biopname = SXLASIM;
 /* line 1944: */
ZXLASIM = A_HEAP(A68_381 ) ;
AYLASIM.fn.fn_global = UXLASIM_anonymous;
AYLASIM.nonlocals = A68_NIL;
(*ZXLASIM) = AYLASIM ;
PMKASIM.data[62].Biop_action = ZXLASIM;
 /* line 1945: */
YLFASIM_label( CYLASIM, &DYLASIM );
PMKASIM.data[63].Biopname = DYLASIM;
 /* line 1949: */
KYLASIM = A_HEAP(A68_381 ) ;
LYLASIM.fn.fn_global = FYLASIM_anonymous;
LYLASIM.nonlocals = A68_NIL;
(*KYLASIM) = LYLASIM ;
PMKASIM.data[63].Biop_action = KYLASIM;
 /* line 1950: */
YLFASIM_label( NYLASIM, &OYLASIM );
PMKASIM.data[64].Biopname = OYLASIM;
 /* line 1954: */
VYLASIM = A_HEAP(A68_381 ) ;
WYLASIM.fn.fn_global = QYLASIM_anonymous;
WYLASIM.nonlocals = A68_NIL;
(*VYLASIM) = WYLASIM ;
PMKASIM.data[64].Biop_action = VYLASIM;
 /* line 1955: */
YLFASIM_label( YYLASIM, &ZYLASIM );
PMKASIM.data[65].Biopname = ZYLASIM;
 /* line 1959: */
GZLASIM = A_HEAP(A68_381 ) ;
HZLASIM.fn.fn_global = BZLASIM_anonymous;
HZLASIM.nonlocals = A68_NIL;
(*GZLASIM) = HZLASIM ;
PMKASIM.data[65].Biop_action = GZLASIM;
 /* line 1960: */
YLFASIM_label( JZLASIM, &KZLASIM );
PMKASIM.data[66].Biopname = KZLASIM;
 /* line 1964: */
RZLASIM = A_HEAP(A68_381 ) ;
SZLASIM.fn.fn_global = MZLASIM_anonymous;
SZLASIM.nonlocals = A68_NIL;
(*RZLASIM) = SZLASIM ;
PMKASIM.data[66].Biop_action = RZLASIM;
 /* line 1965: */
YLFASIM_label( UZLASIM, &VZLASIM );
PMKASIM.data[67].Biopname = VZLASIM;
 /* line 1969: */
CAMASIM = A_HEAP(A68_381 ) ;
DAMASIM.fn.fn_global = XZLASIM_anonymous;
DAMASIM.nonlocals = A68_NIL;
(*CAMASIM) = DAMASIM ;
PMKASIM.data[67].Biop_action = CAMASIM;
 /* line 1970: */
YLFASIM_label( FAMASIM, &GAMASIM );
PMKASIM.data[68].Biopname = GAMASIM;
 /* line 1974: */
NAMASIM = A_HEAP(A68_381 ) ;
OAMASIM.fn.fn_global = IAMASIM_anonymous;
OAMASIM.nonlocals = A68_NIL;
(*NAMASIM) = OAMASIM ;
PMKASIM.data[68].Biop_action = NAMASIM;
 /* line 1975: */
YLFASIM_label( QAMASIM, &RAMASIM );
PMKASIM.data[69].Biopname = RAMASIM;
 /* line 1979: */
YAMASIM = A_HEAP(A68_381 ) ;
ZAMASIM.fn.fn_global = TAMASIM_anonymous;
ZAMASIM.nonlocals = A68_NIL;
(*YAMASIM) = ZAMASIM ;
PMKASIM.data[69].Biop_action = YAMASIM;
 /* line 1980: */
YLFASIM_label( BBMASIM, &CBMASIM );
PMKASIM.data[70].Biopname = CBMASIM;
 /* line 1984: */
JBMASIM = A_HEAP(A68_381 ) ;
KBMASIM.fn.fn_global = EBMASIM_anonymous;
KBMASIM.nonlocals = A68_NIL;
(*JBMASIM) = KBMASIM ;
PMKASIM.data[70].Biop_action = JBMASIM;
 /* line 1985: */
YLFASIM_label( MBMASIM, &NBMASIM );
PMKASIM.data[71].Biopname = NBMASIM;
 /* line 1989: */
UBMASIM = A_HEAP(A68_381 ) ;
VBMASIM.fn.fn_global = PBMASIM_anonymous;
VBMASIM.nonlocals = A68_NIL;
(*UBMASIM) = VBMASIM ;
PMKASIM.data[71].Biop_action = UBMASIM;
 /* line 1990: */
YLFASIM_label( XBMASIM, &YBMASIM );
PMKASIM.data[72].Biopname = YBMASIM;
 /* line 1994: */
FCMASIM = A_HEAP(A68_381 ) ;
GCMASIM.fn.fn_global = ACMASIM_anonymous;
GCMASIM.nonlocals = A68_NIL;
(*FCMASIM) = GCMASIM ;
PMKASIM.data[72].Biop_action = FCMASIM;
 /* line 1995: */
YLFASIM_label( ICMASIM, &JCMASIM );
PMKASIM.data[73].Biopname = JCMASIM;
 /* line 1999: */
QCMASIM = A_HEAP(A68_381 ) ;
RCMASIM.fn.fn_global = LCMASIM_anonymous;
RCMASIM.nonlocals = A68_NIL;
(*QCMASIM) = RCMASIM ;
PMKASIM.data[73].Biop_action = QCMASIM;
 /* line 2000: */
YLFASIM_label( TCMASIM, &UCMASIM );
PMKASIM.data[74].Biopname = UCMASIM;
 /* line 2004: */
BDMASIM = A_HEAP(A68_381 ) ;
CDMASIM.fn.fn_global = WCMASIM_anonymous;
CDMASIM.nonlocals = A68_NIL;
(*BDMASIM) = CDMASIM ;
PMKASIM.data[74].Biop_action = BDMASIM;
 /* line 2005: */
YLFASIM_label( EDMASIM, &FDMASIM );
PMKASIM.data[75].Biopname = FDMASIM;
 /* line 2009: */
MDMASIM = A_HEAP(A68_381 ) ;
NDMASIM.fn.fn_global = HDMASIM_anonymous;
NDMASIM.nonlocals = A68_NIL;
(*MDMASIM) = NDMASIM ;
PMKASIM.data[75].Biop_action = MDMASIM;
 /* line 2010: */
YLFASIM_label( PDMASIM, &QDMASIM );
PMKASIM.data[76].Biopname = QDMASIM;
 /* line 2014: */
XDMASIM = A_HEAP(A68_381 ) ;
YDMASIM.fn.fn_global = SDMASIM_anonymous;
YDMASIM.nonlocals = A68_NIL;
(*XDMASIM) = YDMASIM ;
PMKASIM.data[76].Biop_action = XDMASIM;
MMKASIM_generator( A68_FALSE, &AEMASIM );
CEMASIM = A_HIS1ARR(BEMASIM,PMKASIM,A68_428 ,77) ;
A_R1ASSIGN2(CEMASIM,AEMASIM,A68_428 ) ;
ZDMASIM = AEMASIM;
A_PROC_EXIT(biopactionlist);
*ReturnedValue = (ZDMASIM);
return;
} 
#undef NL
 /* line 2017: */
 /* line 2018: */

A_STATIC A68_BOOL  GEMASIM_generatebiop(A68_430  Bal, A68_241  L, A68_375 * Ams)
{ 
A68_BOOL  HEMASIM_found;
A68_INT  IEMASIM_i;
A68_INT  JEMASIM;  /* to part of loop */
A68_381  KEMASIM;  /* CALL */
A68_BOOL  LEMASIM;  /* clause result */
A_PROC_ENTRY(generatebiop);
 /* line 2022: */
 /* line 2023: */
{ 
HEMASIM_found = A68_FALSE;
 /* line 2025: */
JEMASIM = Bal.dim[0].upb;
for ( IEMASIM_i = 1;
IEMASIM_i <= JEMASIM;
IEMASIM_i += 1 )
{ 
 /* line 2026: */
if ( !(!HEMASIM_found) ) break;
 /* line 2027: */
if ( A_VC_EQ((*(&((&((&A_R1INDEX(Bal,IEMASIM_i))->Biopname))->Tag))),L.Tag) )
{ 
HEMASIM_found = A68_TRUE;
 /* line 2028: */
 /* line 2029: */
KEMASIM = (*(*(&((&A_R1INDEX(Bal,IEMASIM_i))->Biop_action)))) ;
A_CALLPROC(KEMASIM,(Ams),(Ams,(KEMASIM).nonlocals));
} 
}
 /* line 2030: */
 /* line 2031: */
LEMASIM = HEMASIM_found;
} 
A_PROC_EXIT(generatebiop);
return( LEMASIM );
} 
#undef NL

A68_VOID  NEMASIM_kecodegenbiopifinit(void)
{ 
A68_430  OEMASIM;  /* avoid structure result */
A_PROC_ENTRY(kecodegenbiopifinit);
KMKASIM_biopactionlist(  &OEMASIM );
MEMASIM_bal = OEMASIM;
A_PROC_EXIT(kecodegenbiopifinit);
return;
} 
#undef NL

A68_BOOL  REMASIM_generatecallbiop(A68_375 * Ams, A68_241  L)
{ 
A68_BOOL  SEMASIM;  /* clause result */
A_PROC_ENTRY(generatecallbiop);
 /* line 2042: */
 /* line 2045: */
SEMASIM = GEMASIM_generatebiop(MEMASIM_bal, L, Ams);
A_PROC_EXIT(generatecallbiop);
return( SEMASIM );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void YYIASIM(void)   /* initialise DECS kecodegenbiopifsparc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kecodegenbiopifsparc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kecodegenstacksparc.m","./mfiles/kecodegenserversparc.m","./mfiles/kemassemsparc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZYGASIM();   /* USE kecodegenstacksparc */
AAFASIM();   /* USE kecodegenserversparc */
KIDASIM();   /* USE kemassemsparc */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kecodegenbiopifsparc.a68";
A_config.translation_time = "Tue Apr  4 11:07:27 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XYIASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:07:27 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kecodegenbiopifsparc);
UEAALIB_a68config(LGAALIB_configinfo, CZIASIM);
 /* line 62: */
 /* line 68: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 139: */
 /* line 149: */
 /* line 153: */
 /* line 160: */
 /* line 171: */
 /* line 174: */
 /* line 176: */
 /* line 178: */
 /* line 180: */
 /* line 181: */
 /* line 190: */
 /* line 233: */
 /* line 245: */
 /* line 248: */
 /* line 251: */
 /* line 255: */
 /* line 270: */
 /* line 285: */
 /* line 300: */
 /* line 318: */
 /* line 370: */
 /* line 372: */
 /* line 379: */
 /* line 394: */
 /* line 408: */
 /* line 419: */
 /* line 430: */
 /* line 455: */
 /* line 465: */
 /* line 489: */
 /* line 500: */
 /* line 514: */
 /* line 526: */
 /* line 535: */
 /* line 551: */
 /* line 570: */
 /* line 582: */
 /* line 592: */
 /* line 616: */
 /* line 628: */
 /* line 652: */
 /* line 678: */
 /* line 706: */
 /* line 707: */
 /* line 719: */
 /* line 720: */
 /* line 726: */
 /* line 727: */
 /* line 728: */
 /* line 734: */
 /* line 740: */
 /* line 778: */
 /* line 788: */
 /* line 818: */
 /* line 826: */
 /* line 839: */
 /* line 847: */
 /* line 870: */
 /* line 1005: */
 /* line 1095: */
 /* line 1176: */
 /* line 1197: */
 /* line 1219: */
 /* line 1242: */
 /* line 1271: */
 /* line 1306: */
 /* line 1336: */
 /* line 1360: */
 /* line 1386: */
 /* line 1412: */
 /* line 1415: */
 /* line 1418: */
 /* line 1420: */
 /* line 1424: */
 /* line 1426: */
 /* line 1427: */
IMKASIM_tos2 = (EZGASIM_tos+2);
 /* line 1428: */
JMKASIM_tos3 = (EZGASIM_tos+3);
 /* line 1431: */
 /* line 1434: */
 /* line 1437: */
 /* line 1440: */
 /* line 1442: */
 /* line 1444: */
 /* line 2016: */
 /* line 2034: */
 /* line 2037: */
 /* line 2038: */
 /* line 2041: */
 /* line 2046: */
A_PROC_EXIT(DECS kecodegenbiopifsparc);
} 
#undef NL
/* end of translation of ./a68files/kecodegenbiopifsparc.a68 */
