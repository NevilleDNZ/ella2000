
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
/* UNAME:YYGASIM */
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

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC *),(A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_CHAR *,A68t209,(A68_INT ),(A68_INT ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT) REF CHAR */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE160) VOID */
struct A68t211{
A68_INT  Location;
A_PAD_INT(PAD_53)
A68_INT  Size;
A_PAD_INT(PAD_54)
A68_BOOL  Canoptimise;
A_PAD_BOOL(PAD_55)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,INT,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t211 ,struct A68t211 ),(struct A68t211 ,struct A68t211 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE211,MODE211) BOOL */
struct A68t213{
A68_BITS  Rs1;
A_PAD_BITS(PAD_56)
A68_BITS  Rs2;
A_PAD_BITS(PAD_57)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(BITS,BITS)  */
struct A68t214{
A68_BITS  Rs1;
A_PAD_BITS(PAD_58)
A68_INT  Imm;
A_PAD_INT(PAD_59)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(BITS,INT)  */
struct A68t215{
A68_INT  Imm;
A_PAD_INT(PAD_60)
A68_BITS  Rd;
A_PAD_BITS(PAD_61)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,BITS)  */
struct A68t216 { A68_INT mode; union {
struct A68t213  mode1;
struct A68t214  mode2;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(MODE213,MODE214)  */
struct A68t217{
A68_BITS  Rs1;
A_PAD_BITS(PAD_62)
A68_BITS  Rs2;
A_PAD_BITS(PAD_63)
A68_BITS  Rd;
A_PAD_BITS(PAD_64)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(BITS,BITS,BITS)  */
struct A68t218{
A68_BITS  Rs1;
A_PAD_BITS(PAD_65)
A68_INT  Imm;
A_PAD_INT(PAD_66)
A68_BITS  Rd;
A_PAD_BITS(PAD_67)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(BITS,INT,BITS)  */
struct A68t219 { A68_INT mode; union {
struct A68t217  mode1;
struct A68t218  mode2;
} data; };
typedef struct A68t219  A68_219 ;    /* UNION(MODE217,MODE218)  */
struct A68t220{
A68_BITS  Mask;
A_PAD_BITS(PAD_68)
A68_RC  M1a;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(BITS,MODE27)  */
struct A68t221{
A68_BITS  Mask;
A_PAD_BITS(PAD_69)
A68_RC  M1b;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(BITS,MODE27)  */
struct A68t222{
A68_BITS  Mask;
A_PAD_BITS(PAD_70)
A68_RC  M2a;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(BITS,MODE27)  */
struct A68t223{
A68_BITS  Mask;
A_PAD_BITS(PAD_71)
A68_RC  M2b;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(BITS,MODE27)  */
struct A68t224{
A68_BITS  Mask;
A_PAD_BITS(PAD_72)
A68_RC  M2c;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(BITS,MODE27)  */
struct A68t225{
A68_BITS  Mask;
A_PAD_BITS(PAD_73)
A68_RC  M2d;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(BITS,MODE27)  */
struct A68t226{
A68_BITS  Mask;
A_PAD_BITS(PAD_74)
A68_RC  M3a;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(BITS,MODE27)  */
struct A68t227{
A68_BITS  Mask;
A_PAD_BITS(PAD_75)
A68_RC  M3c;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(BITS,MODE27)  */
struct A68t228{
A68_BITS  Mask;
A_PAD_BITS(PAD_76)
A68_RC  M3d;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(BITS,MODE27)  */
struct A68t229{
A68_BITS  Mask;
A_PAD_BITS(PAD_77)
A68_RC  M3e;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(BITS,MODE27)  */
struct A68t230{
A68_BITS  Mask;
A_PAD_BITS(PAD_78)
A68_RC  M3b;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(BITS,MODE27)  */

A_PROCEDURE(A68_BITS ,A68t231,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BITS) BITS */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t220 ,A68_INT ),(struct A68t220 ,A68_INT ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE220,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t221 ,A68_INT ),(struct A68t221 ,A68_INT ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE221,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t222 ,A68_INT ),(struct A68t222 ,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE222,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t223 ,struct A68t215 ),(struct A68t223 ,struct A68t215 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE223,MODE215) VOID */
struct A68t236{
struct A68t224  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_79)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE224,BITS)  */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t236 ,A68_INT ),(struct A68t236 ,A68_INT ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE236,INT) VOID */
struct A68t238{
struct A68t225  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_80)
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE225,BITS)  */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t238 ,A68_INT ),(struct A68t238 ,A68_INT ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE238,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t226 ,struct A68t219 ),(struct A68t226 ,struct A68t219 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE226,MODE219) VOID */
struct A68t241{
struct A68t230  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_81)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE230,BITS)  */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t241 ,struct A68t216 ),(struct A68t241 ,struct A68t216 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE241,MODE216) VOID */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t227 ,A68_BITS ),(struct A68t227 ,A68_BITS ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE227,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t228 ,struct A68t216 ),(struct A68t228 ,struct A68t216 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE228,MODE216) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t229 ,struct A68t219 ),(struct A68t229 ,struct A68t219 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE229,MODE219) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t220 ,struct A68t211 *),(struct A68t220 ,struct A68t211 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE220,REF MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t221 ,struct A68t211 *),(struct A68t221 ,struct A68t211 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE221,REF MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t236 ,struct A68t211 *),(struct A68t236 ,struct A68t211 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE236,REF MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t238 ,struct A68t211 *),(struct A68t238 ,struct A68t211 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE238,REF MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t224 ,A68_BITS ,struct A68t236 *),(struct A68t224 ,A68_BITS ,struct A68t236 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE224,BITS) MODE236 */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t225 ,A68_BITS ,struct A68t238 *),(struct A68t225 ,A68_BITS ,struct A68t238 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE225,BITS) MODE238 */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t230 ,A68_BITS ,struct A68t241 *),(struct A68t230 ,A68_BITS ,struct A68t241 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE230,BITS) MODE241 */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t211 ),(struct A68t211 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t254,(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ),(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(BITS,INT,BITS,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t255,(A68_INT ,A68_BITS ),(A68_INT ,A68_BITS ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(INT,BITS) VOID */
struct A68t256{
A68_INT  Ws;
A_PAD_INT(PAD_82)
A68_BOOL  Up;
A_PAD_BOOL(PAD_83)
A68_INT  Sizeunit;
A_PAD_INT(PAD_84)
struct A68t32  Al;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT,BOOL,INT,REF MODE32)  */
struct A68t257{
struct A68t160  Ferryout;
struct A68t36  Flt;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE160,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t160 ,struct A68t36 ,struct A68t257 *),(struct A68t160 ,struct A68t36 ,struct A68t257 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE160,MODE36) MODE257 */
struct A68t259{
struct A68t160  Ferryin;
struct A68t36  Flt;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE160,MODE36)  */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t160 ,struct A68t36 ,struct A68t259 *),(struct A68t160 ,struct A68t36 ,struct A68t259 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE160,MODE36) MODE259 */

A_PROCEDURE(A68_VOID ,A68t261,(A68_BOOL ,A68_VC ),(A68_BOOL ,A68_VC ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(BOOL,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(A68_BOOL ,struct A68t257 ),(A68_BOOL ,struct A68t257 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(BOOL,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(A68_BOOL *,struct A68t259 ),(A68_BOOL *,struct A68t259 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF BOOL,MODE259) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(A68_INT ,struct A68t257 ),(A68_INT ,struct A68t257 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(INT,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(A68_INT *,struct A68t259 ),(A68_INT *,struct A68t259 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF INT,MODE259) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(A68_VC ,struct A68t257 ),(A68_VC ,struct A68t257 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE26,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC *,struct A68t259 ),(A68_VC *,struct A68t259 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF REF MODE26,MODE259) VOID */

A_PROCEDURE(A68_INT ,A68t268,(A68_VC ),(A68_VC ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26) INT */
struct A68t269{
A68_INT  Machine_offset;
A_PAD_INT(PAD_85)
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT,REF MODE269)  */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t269 *,A68_VC ),(struct A68t269 *,A68_VC ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF MODE269,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t271,(struct A68t269 **),(struct A68t269 **,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF REF MODE269) INT */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t269 **,A68_INT ),(struct A68t269 **,A68_INT ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF REF MODE269,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t273,(struct A68t269 *),(struct A68t269 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE269) BOOL */
struct A68t274{
A68_VC  Mem;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t274 *),(struct A68t274 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC MODE274 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t274 *,A68_INT ),(struct A68t274 *,A68_INT ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE274,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t274 *),(struct A68t274 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE274) VOID */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t274 ,A68_VC ),(struct A68t274 ,A68_VC ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE274,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t279,(struct A68t274 *),(struct A68t274 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE274) INT */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t274 *,struct A68t257 ),(struct A68t274 *,struct A68t257 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE274,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t274 *,struct A68t259 ),(struct A68t274 *,struct A68t259 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE274,MODE259) VOID */
struct A68t282{
A68_INT  Off;
A_PAD_INT(PAD_86)
A68_INT  Len;
A_PAD_INT(PAD_87)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t283,(A68_INT ,A68_INT ,struct A68t282 *),(A68_INT ,A68_INT ,struct A68t282 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT,INT) MODE282 */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t274 *,struct A68t282 ,A68_VC *),(struct A68t274 *,struct A68t282 ,A68_VC *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE274,MODE282) REF MODE26 */
struct A68t285{
A68_VC  W;
A68_INT  O;
A_PAD_INT(PAD_88)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ,A68_INT ,struct A68t285 *),(A68_VC ,A68_INT ,struct A68t285 *,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE26,INT) MODE285 */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t274 *,struct A68t285 ),(struct A68t274 *,struct A68t285 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE274,MODE285) VOID */
struct A68t288{
A68_INT  Lab;
A_PAD_INT(PAD_89)
A68_VC  Tag;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t289,(A68_VC ,struct A68t288 *),(A68_VC ,struct A68t288 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE26) MODE288 */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t288 ,A68_VC ),(struct A68t288 ,A68_VC ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE288,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t288 *,struct A68t257 ),(struct A68t288 *,struct A68t257 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE288,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t288 *,struct A68t259 ),(struct A68t288 *,struct A68t259 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE288,MODE259) VOID */

A_PROCEDURE(A68_BOOL ,A68t293,(struct A68t288 *,struct A68t288 ),(struct A68t288 *,struct A68t288 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE288,MODE288) BOOL */
struct A68t294 { A68_INT mode; union {
A68_INT  mode1;
struct A68t288  mode2;
} data; };
typedef struct A68t294  A68_294 ;    /* UNION(INT,MODE288,VOID)  */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t294 ,A68_VC ),(struct A68t294 ,A68_VC ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE294,MODE26) VOID */
struct A68t296{
struct A68t288  Label;
A68_INT  Machine_offset;
A_PAD_INT(PAD_90)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE288,INT)  */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t288 ,A68_INT ,struct A68t296 *),(struct A68t288 ,A68_INT ,struct A68t296 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE288,INT) MODE296 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t296 ,A68_VC ),(struct A68t296 ,A68_VC ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE296,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t296 *,struct A68t257 ),(struct A68t296 *,struct A68t257 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE296,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t296 *,struct A68t259 ),(struct A68t296 *,struct A68t259 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE296,MODE259) VOID */
struct A68t301{
struct A68t296  Labeled_offset;
struct A68t301 * Rest;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE296,REF MODE301)  */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t301 *,A68_VC ),(struct A68t301 *,A68_VC ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE301,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t301 *,struct A68t257 ),(struct A68t301 *,struct A68t257 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE301,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t301 **,struct A68t259 ),(struct A68t301 **,struct A68t259 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF REF MODE301,MODE259) VOID */

A_PROCEDURE(A68_INT ,A68t305,(struct A68t301 *,struct A68t288 ),(struct A68t301 *,struct A68t288 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE301,MODE288) INT */

A_PROCEDURE(A68_VOID ,A68t306,(struct A68t301 **,struct A68t296 ),(struct A68t301 **,struct A68t296 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF REF MODE301,MODE296) VOID */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t301 **),(struct A68t301 **,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF REF MODE301) VOID */

A_PROCEDURE(A68_BOOL ,A68t308,(struct A68t301 *),(struct A68t301 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE301) BOOL */
struct A68t309{
struct A68t211  Machine_label;
struct A68t309 * Rest;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE211,REF MODE309)  */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t309 *,A68_VC ),(struct A68t309 *,A68_VC ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE309,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t309 **,struct A68t211 *),(struct A68t309 **,struct A68t211 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF REF MODE309) MODE211 */

A_PROCEDURE(A68_VOID ,A68t312,(struct A68t309 **,struct A68t211 ),(struct A68t309 **,struct A68t211 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF REF MODE309,MODE211) VOID */

A_PROCEDURE(A68_BOOL ,A68t313,(struct A68t309 *),(struct A68t309 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE309) BOOL */
struct A68t314{
struct A68t288  Label;
struct A68t309 * Machine_label_stack;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE288,REF MODE309)  */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t288 ,struct A68t309 *,struct A68t314 *),(struct A68t288 ,struct A68t309 *,struct A68t314 *,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE288,REF MODE309) MODE314 */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t314 ,A68_VC ),(struct A68t314 ,A68_VC ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE314,MODE26) VOID */
struct A68t317{
struct A68t314  Back_patch;
struct A68t317 * Rest;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE314,REF MODE317)  */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t317 *,A68_VC ),(struct A68t317 *,A68_VC ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE317,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t319,(struct A68t317 *),(struct A68t317 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE317) BOOL */

A_PROCEDURE(struct A68t309 *,A68t320,(struct A68t317 **,struct A68t288 ),(struct A68t317 **,struct A68t288 ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF REF MODE317,MODE288) REF MODE309 */
struct A68t321{
struct A68t211  Ml;
struct A68t288  Lab;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE211,MODE288)  */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t211 ,struct A68t288 ,struct A68t321 *),(struct A68t211 ,struct A68t288 ,struct A68t321 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE211,MODE288) MODE321 */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t317 **,struct A68t321 ),(struct A68t317 **,struct A68t321 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF REF MODE317,MODE321) VOID */
struct A68t324{
A68_INT  Sort;
A_PAD_INT(PAD_91)
A68_INT  Size;
A_PAD_INT(PAD_92)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t324 ,A68_VC ),(struct A68t324 ,A68_VC ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE324,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t324 *,struct A68t257 ),(struct A68t324 *,struct A68t257 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE324,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t324 *,struct A68t259 ),(struct A68t324 *,struct A68t259 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE324,MODE259) VOID */
struct A68t328{
struct A68t324  Head;
struct A68t328 * Tail;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(MODE324,REF MODE328)  */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t328 *,A68_VC ),(struct A68t328 *,A68_VC ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE328,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t328 *,struct A68t257 ),(struct A68t328 *,struct A68t257 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE328,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t328 **,struct A68t259 ),(struct A68t328 **,struct A68t259 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF REF MODE328,MODE259) VOID */

A_PROCEDURE(A68_INT ,A68t332,(struct A68t328 *),(struct A68t328 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE328) INT */
struct A68t333{
struct A68t288  Label;
struct A68t328 * Input_params;
struct A68t328 * Output_params;
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE288,REF MODE328,REF MODE328)  */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t288 ,struct A68t328 *,struct A68t328 *,struct A68t333 *),(struct A68t288 ,struct A68t328 *,struct A68t328 *,struct A68t333 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE288,REF MODE328,REF MODE328) MODE333 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t333 ,A68_VC ),(struct A68t333 ,A68_VC ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE333,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t333 *,struct A68t257 ),(struct A68t333 *,struct A68t257 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE333,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t333 *,struct A68t259 ),(struct A68t333 *,struct A68t259 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(REF MODE333,MODE259) VOID */
struct A68t338{
struct A68t288  Label;
struct A68t328 * Spec;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE288,REF MODE328)  */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t288 ,struct A68t328 *,struct A68t338 *),(struct A68t288 ,struct A68t328 *,struct A68t338 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE288,REF MODE328) MODE338 */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t338 ,A68_VC ),(struct A68t338 ,A68_VC ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE338,MODE26) VOID */
struct A68t341{
struct A68t338  Labeled_spec;
struct A68t341 * Rest;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(MODE338,REF MODE341)  */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t341 *,A68_VC ),(struct A68t341 *,A68_VC ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE341,MODE26) VOID */

A_PROCEDURE(struct A68t328 *,A68t343,(struct A68t341 **,struct A68t288 ),(struct A68t341 **,struct A68t288 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF REF MODE341,MODE288) REF MODE328 */

A_PROCEDURE(A68_BOOL ,A68t344,(struct A68t341 *,struct A68t288 ),(struct A68t341 *,struct A68t288 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE341,MODE288) BOOL */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t341 **,struct A68t338 ),(struct A68t341 **,struct A68t338 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF REF MODE341,MODE338) VOID */
struct A68t346{
struct A68t333  Labeled_params;
struct A68t346 * Rest;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(MODE333,REF MODE346)  */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t346 *,A68_VC ),(struct A68t346 *,A68_VC ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE346,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t346 *,struct A68t257 ),(struct A68t346 *,struct A68t257 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE346,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t346 **,struct A68t259 ),(struct A68t346 **,struct A68t259 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF REF MODE346,MODE259) VOID */
A_ROW(struct A68t328 *,A68t350,1);
typedef struct A68t350  A68_350 ;    /* [] REF MODE328 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t346 *,struct A68t288 ,struct A68t350 *),(struct A68t346 *,struct A68t288 ,struct A68t350 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE346,MODE288) MODE350 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t346 **,struct A68t333 ),(struct A68t346 **,struct A68t333 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF REF MODE346,MODE333) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t346 **),(struct A68t346 **,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF REF MODE346) VOID */
struct A68t354{
A68_INT  Current_size;
A_PAD_INT(PAD_93)
A68_INT  Max_size;
A_PAD_INT(PAD_94)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t354 *),(struct A68t354 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC MODE354 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t354 ,A68_VC ),(struct A68t354 ,A68_VC ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE354,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t354 *,struct A68t257 ),(struct A68t354 *,struct A68t257 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE354,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t354 *,struct A68t259 ),(struct A68t354 *,struct A68t259 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE354,MODE259) VOID */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t354 *),(struct A68t354 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE354) VOID */

A_PROCEDURE(A68_INT ,A68t360,(struct A68t354 *),(struct A68t354 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE354) INT */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t354 *,A68_INT ),(struct A68t354 *,A68_INT ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE354,INT) VOID */
struct A68t362{
A68_INT  Window_offset;
A_PAD_INT(PAD_95)
A68_INT  Register_ind;
A_PAD_INT(PAD_96)
A68_INT  Memory_offset;
A_PAD_INT(PAD_97)
A68_INT  Max_offset;
A_PAD_INT(PAD_98)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t362 *),(struct A68t362 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC MODE362 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t362 ,A68_VC ),(struct A68t362 ,A68_VC ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE362,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t362 *,struct A68t257 ),(struct A68t362 *,struct A68t257 ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE362,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t362 *,struct A68t259 ),(struct A68t362 *,struct A68t259 ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE362,MODE259) VOID */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t362 *),(struct A68t362 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE362) VOID */

A_PROCEDURE(A68_BOOL ,A68t368,(struct A68t362 *),(struct A68t362 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE362) BOOL */

A_PROCEDURE(A68_INT ,A68t369,(struct A68t362 *),(struct A68t362 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE362) INT */
struct A68t370{
A68_BOOL  Ircallinst_flag;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t370  A68_370 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t371,(A68_BOOL ,struct A68t370 *),(A68_BOOL ,struct A68t370 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(BOOL) MODE370 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t370 ,A68_VC ),(struct A68t370 ,A68_VC ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE370,MODE26) VOID */
struct A68t373{
A68_INT  Copy_stack_number;
A_PAD_INT(PAD_100)
A68_BOOL  Register_flag;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t373  A68_373 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t374,(A68_INT ,A68_BOOL ,struct A68t373 *),(A68_INT ,A68_BOOL ,struct A68t373 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(INT,BOOL) MODE373 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t373 ,A68_VC ),(struct A68t373 ,A68_VC ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE373,MODE26) VOID */
struct A68t376{
A68_VC  Constant;
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t377,(A68_VC ,struct A68t376 *),(A68_VC ,struct A68t376 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE26) MODE376 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t376 ,A68_VC ),(struct A68t376 ,A68_VC ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE376,MODE26) VOID */
struct A68t379{
A68_INT  Sumconstant;
A_PAD_INT(PAD_102)
A68_BOOL  Callinst_flag;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t380,(A68_INT ,A68_BOOL ,struct A68t379 *),(A68_INT ,A68_BOOL ,struct A68t379 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(INT,BOOL) MODE379 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t379 ,A68_VC ),(struct A68t379 ,A68_VC ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE379,MODE26) VOID */
struct A68t382{
A68_BOOL  Indcallinst_flag;
A_PAD_BOOL(PAD_104)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t383,(A68_BOOL ,struct A68t382 *),(A68_BOOL ,struct A68t382 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(BOOL) MODE382 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t382 ,A68_VC ),(struct A68t382 ,A68_VC ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE382,MODE26) VOID */
struct A68t385{
A68_BITS  Condition;
A_PAD_BITS(PAD_105)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t386,(A68_BITS ,struct A68t385 *),(A68_BITS ,struct A68t385 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(BITS) MODE385 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t385 ,A68_VC ),(struct A68t385 ,A68_VC ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE385,MODE26) VOID */
struct A68t388 { A68_INT mode; union {
struct A68t370  mode1;
struct A68t373  mode2;
struct A68t376  mode3;
struct A68t379  mode4;
struct A68t382  mode5;
struct A68t385  mode6;
} data; };
typedef struct A68t388  A68_388 ;    /* UNION(MODE370,MODE373,MODE376,MODE379,MODE382,MODE385,VOID)  */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t388 ,A68_VC ),(struct A68t388 ,A68_VC ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE388,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t388 ,struct A68t388 ,struct A68t388 *),(struct A68t388 ,struct A68t388 ,struct A68t388 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE388,MODE388) MODE388 */

A_PROCEDURE(A68_BOOL ,A68t391,(struct A68t388 ),(struct A68t388 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE388) BOOL */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t388 ,struct A68t388 *),(struct A68t388 ,struct A68t388 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE388) MODE388 */
struct A68t393 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
A68_CHAR  mode3;
} data; };
typedef struct A68t393  A68_393 ;    /* UNION(BOOL,INT,CHAR)  */
struct A68t394{
struct A68t393  Location_type;
struct A68t388  Symbolic_state;
A68_INT  Alloc_register;
A_PAD_INT(PAD_106)
A68_INT  Bit_length;
A_PAD_INT(PAD_107)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(MODE393,MODE388,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t394 ,A68_VC ),(struct A68t394 ,A68_VC ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE394,MODE26) VOID */
A_VECTOR(struct A68t394 ,A68t397);
typedef struct A68t397  A68_397 ;    /* VECTOR [] MODE394 */
struct A68t396{
struct A68t397  Stack_locations;
A68_INT  Top;
A_PAD_INT(PAD_108)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE397,INT)  */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t396 *),(struct A68t396 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC MODE396 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t396 ,A68_VC ),(struct A68t396 ,A68_VC ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE396,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t396 *,struct A68t396 *),(struct A68t396 *,struct A68t396 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE396) MODE396 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t396 *),(struct A68t396 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE396) VOID */

A_PROCEDURE(A68_INT ,A68t402,(struct A68t396 *),(struct A68t396 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE396) INT */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t396 *,struct A68t394 *),(struct A68t396 *,struct A68t394 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE396) MODE394 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t396 *,struct A68t394 ),(struct A68t396 *,struct A68t394 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE396,MODE394) VOID */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t396 *,A68_INT ,struct A68t394 *),(struct A68t396 *,A68_INT ,struct A68t394 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE396,INT) MODE394 */
struct A68t406{
struct A68t394  Loc;
A68_INT  O;
A_PAD_INT(PAD_109)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE394,INT)  */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t394 ,A68_INT ,struct A68t406 *),(struct A68t394 ,A68_INT ,struct A68t406 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE394,INT) MODE406 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t396 *,struct A68t406 ),(struct A68t396 *,struct A68t406 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE396,MODE406) VOID */

A_PROCEDURE(A68_BOOL ,A68t409,(struct A68t396 *),(struct A68t396 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE396) BOOL */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t396 *,A68_INT ,struct A68t393 *),(struct A68t396 *,A68_INT ,struct A68t393 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE396,INT) MODE393 */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t396 *,A68_INT ,struct A68t388 *),(struct A68t396 *,A68_INT ,struct A68t388 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE396,INT) MODE388 */

A_PROCEDURE(A68_INT ,A68t412,(struct A68t396 *,A68_INT ),(struct A68t396 *,A68_INT ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE396,INT) INT */
struct A68t413{
A68_INT  O;
A_PAD_INT(PAD_110)
struct A68t388  Ss;
};
typedef struct A68t413  A68_413 ;    /* STRUCT(INT,MODE388)  */

A_PROCEDURE(A68_VOID ,A68t414,(A68_INT ,struct A68t388 ,struct A68t413 *),(A68_INT ,struct A68t388 ,struct A68t413 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(INT,MODE388) MODE413 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t396 *,struct A68t413 ),(struct A68t396 *,struct A68t413 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE396,MODE413) VOID */
struct A68t416{
A68_INT  O;
A_PAD_INT(PAD_111)
A68_INT  Bl;
A_PAD_INT(PAD_112)
};
typedef struct A68t416  A68_416 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t417,(A68_INT ,A68_INT ,struct A68t416 *),(A68_INT ,A68_INT ,struct A68t416 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(INT,INT) MODE416 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t396 *,struct A68t416 ),(struct A68t396 *,struct A68t416 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE396,MODE416) VOID */
struct A68t419{
A68_INT  O;
A_PAD_INT(PAD_113)
A68_INT  R;
A_PAD_INT(PAD_114)
};
typedef struct A68t419  A68_419 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t420,(A68_INT ,A68_INT ,struct A68t419 *),(A68_INT ,A68_INT ,struct A68t419 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(INT,INT) MODE419 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t396 *,struct A68t419 ),(struct A68t396 *,struct A68t419 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE396,MODE419) VOID */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t423,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,66,A68t424);
typedef struct A68t424  A68_424 ;    /* STRUCT 66 CHAR */
struct A68t425{
struct A68t396  Location_stack;
struct A68t362  Rm_allocator;
struct A68t354  Size_recorder;
};
typedef struct A68t425  A68_425 ;    /* STRUCT(MODE396,MODE362,MODE354)  */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t425 *),(struct A68t425 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC MODE425 */

A_PROCEDURE(struct A68t425 *,A68t427,(struct A68t425 *),(struct A68t425 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE425) REF MODE425 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t425 ,A68_VC ),(struct A68t425 ,A68_VC ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE425,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t429);
typedef struct A68t429  A68_429 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t430);
typedef struct A68t430  A68_430 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t425 *,struct A68t257 ),(struct A68t425 *,struct A68t257 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE425,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t425 *,struct A68t259 ),(struct A68t425 *,struct A68t259 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE425,MODE259) VOID */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t425 *),(struct A68t425 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE425) VOID */

A_PROCEDURE(A68_INT ,A68t434,(struct A68t425 *),(struct A68t425 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE425) INT */

A_PROCEDURE(A68_BOOL ,A68t435,(struct A68t425 *),(struct A68t425 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE425) BOOL */

A_PROCEDURE(A68_INT ,A68t436,(struct A68t425 *,A68_INT ),(struct A68t425 *,A68_INT ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE425,INT) INT */

A_PROCEDURE(A68_BITS ,A68t437,(struct A68t425 *,A68_INT ),(struct A68t425 *,A68_INT ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE425,INT) BITS */
struct A68t438 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
} data; };
typedef struct A68t438  A68_438 ;    /* UNION(BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t425 *,A68_INT ,struct A68t438 *),(struct A68t425 *,A68_INT ,struct A68t438 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE425,INT) MODE438 */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t425 *,A68_INT ,struct A68t219 *),(struct A68t425 *,A68_INT ,struct A68t219 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE425,INT) MODE219 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t425 *,A68_INT ,struct A68t217 *),(struct A68t425 *,A68_INT ,struct A68t217 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE425,INT) MODE217 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t425 *,A68_INT ),(struct A68t425 *,A68_INT ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE425,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t425 *,struct A68t219 *),(struct A68t425 *,struct A68t219 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE425) MODE219 */

A_PROCEDURE(A68_BOOL ,A68t444,(struct A68t425 *,A68_INT ),(struct A68t425 *,A68_INT ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE425,INT) BOOL */
struct A68t445 { A68_INT mode; union {
struct A68t376  mode1;
struct A68t382  mode2;
} data; };
typedef struct A68t445  A68_445 ;    /* UNION(MODE376,MODE382)  */
struct A68t446 { A68_INT mode; union {
A68_INT  mode1;
A68_CHAR  mode2;
} data; };
typedef struct A68t446  A68_446 ;    /* UNION(INT,CHAR)  */

A_PROCEDURE(A68_INT ,A68t447,(struct A68t425 *,struct A68t328 *),(struct A68t425 *,struct A68t328 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE425,REF MODE328) INT */
A_ISTRUCT(A68_CHAR ,41,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t425 *,struct A68t350 ),(struct A68t425 *,struct A68t350 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE425,MODE350) VOID */
A_ISTRUCT(A68_CHAR ,45,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t425 *,struct A68t328 *),(struct A68t425 *,struct A68t328 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE425,REF MODE328) VOID */

A_PROCEDURE(struct A68t328 *,A68t455,(struct A68t425 *),(struct A68t425 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE425) REF MODE328 */
A_ISTRUCT(A68_CHAR ,42,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 33 CHAR */
struct A68t458{
A68_INT  W;
A_PAD_INT(PAD_115)
A68_INT  V;
A_PAD_INT(PAD_116)
A68_INT  A;
A_PAD_INT(PAD_117)
};
typedef struct A68t458  A68_458 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t282 ,A68_INT ,struct A68t458 *),(struct A68t282 ,A68_INT ,struct A68t458 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(MODE282,INT) MODE458 */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t425 *,struct A68t458 ),(struct A68t425 *,struct A68t458 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE425,MODE458) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t425 *,A68_BITS ),(struct A68t425 *,A68_BITS ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE425,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t425 *,A68_INT ,A68_INT ),(struct A68t425 *,A68_INT ,A68_INT ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE425,INT,INT) VOID */
struct A68t463{
A68_VC  Wo;
A68_INT  Len;
A_PAD_INT(PAD_118)
};
typedef struct A68t463  A68_463 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t464,(A68_VC ,A68_INT ,struct A68t463 *),(A68_VC ,A68_INT ,struct A68t463 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(REF MODE26,INT) MODE463 */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t425 *,struct A68t463 ),(struct A68t425 *,struct A68t463 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE425,MODE463) VOID */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t425 *,struct A68t416 ),(struct A68t425 *,struct A68t416 ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE425,MODE416) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kecodegenserversparc --- */
extern A68_VOID  OCFASIM_newword(A68_INT ,A68_VC *);
extern A68_VOID  YCFASIM_word(A68_INT ,A68_VC *);
extern A68_INT  FFFASIM_integer(A68_VC );
extern A68_INT  QHFASIM_bytesize(A68_INT );
#define EXFASIM_unknown 0
#define FXFASIM_fixed 1
#define GXFASIM_instanceptr 2
#define HXFASIM_boolean 3
#define IXFASIM_integer 4
extern A68_328 * GYFASIM_nilparams;
extern A68_INT  UYFASIM_length(struct A68t328 *);
extern A68_VOID  MXGASIM_sizerecorder(A68_354 *);
extern A68_VOID  RXGASIM_dump(struct A68t354 ,A68_VC );
extern A68_VOID  GYGASIM_save(struct A68t354 *,struct A68t257 );
extern A68_VOID  JYGASIM_restore(struct A68t354 *,struct A68t259 );
extern A68_VOID  XYGASIM_clear(struct A68t354 *);
extern A68_INT  LYGASIM_maxsize(struct A68t354 *);
extern A68_VOID  PYGASIM_plus(struct A68t354 *,A68_INT );
extern A68_VOID  UYGASIM_minus(struct A68t354 *,A68_INT );
extern A68_VOID  UEGASIM_rmallocator(A68_362 *);
extern A68_BITS  TEGASIM_globalpointer;
extern A68_BITS  REGASIM_callinstpointer;
extern A68_BITS  SEGASIM_dynamicpointer;
extern A68_BITS  NEGASIM_tempreg1;
extern A68_BITS  OEGASIM_tempreg2;
extern A68_BITS  PEGASIM_tempreg3;
extern A68_BITS  QEGASIM_tempreg4;
extern A68_VOID  ZEGASIM_dump(struct A68t362 ,A68_VC );
extern A68_VOID  YGGASIM_save(struct A68t362 *,struct A68t257 );
extern A68_VOID  BHGASIM_restore(struct A68t362 *,struct A68t259 );
extern A68_VOID  DHGASIM_clear(struct A68t362 *);
extern A68_VOID  KHGASIM_savewindow(struct A68t362 *);
extern A68_VOID  PHGASIM_restorewindow(struct A68t362 *);
extern A68_BOOL  UHGASIM_willsaveonreserver(struct A68t362 *);
extern A68_INT  XHGASIM_reserver(struct A68t362 *);
extern A68_VOID  CIGASIM_unreserver(struct A68t362 *);
extern A68_VOID  IIGASIM_inregister(A68_BOOL ,A68_370 *);
extern A68_VOID  BJGASIM_copy(A68_INT ,A68_BOOL ,A68_373 *);
extern A68_VOID  WJGASIM_const(A68_VC ,A68_376 *);
extern A68_VOID  NLGASIM_indirected(A68_BOOL ,A68_382 *);
extern A68_VOID  FMGASIM_condition(A68_BITS ,A68_385 *);
extern A68_VOID  INGASIM_(struct A68t388 ,struct A68t388 ,A68_388 *);
extern A68_BOOL  CPGASIM_allocregisterinuse(struct A68t388 );
extern A68_BOOL  LPGASIM_callinstpointerinuse(struct A68t388 );
extern A68_VOID  UOGASIM_not(struct A68t388 ,A68_388 *);
#define TPGASIM_smallstacklocation A68_TRUE
#define UPGASIM_largestacklocation 0
#define VPGASIM_unknownstacklocation ' '
extern A68_VOID  PRGASIM_locationstack(A68_396 *);
extern A68_VOID  ZRGASIM_dump(struct A68t396 ,A68_VC );
extern A68_VOID  XSGASIM_new(struct A68t396 *,A68_396 *);
extern A68_VOID  JTGASIM_clear(struct A68t396 *);
extern A68_INT  MTGASIM_length(struct A68t396 *);
extern A68_VOID  PTGASIM_pop(struct A68t396 *,A68_394 *);
extern A68_VOID  WTGASIM_push(struct A68t396 *,struct A68t394 );
extern A68_VOID  VUGASIM_att(struct A68t394 ,A68_INT ,A68_406 *);
extern A68_VOID  AVGASIM_put(struct A68t396 *,struct A68t406 );
extern A68_VOID  JVGASIM_typeof(struct A68t396 *,A68_INT ,A68_393 *);
extern A68_VOID  PVGASIM_stateof(struct A68t396 *,A68_INT ,A68_388 *);
extern A68_INT  VVGASIM_registerof(struct A68t396 *,A68_INT );
extern A68_INT  BWGASIM_sizeof(struct A68t396 *,A68_INT );
extern A68_VOID  HWGASIM_given(A68_INT ,struct A68t388 ,A68_413 *);
extern A68_VOID  MWGASIM_changestateof(struct A68t396 *,struct A68t413 );
extern A68_VOID  SWGASIM_givenn(A68_INT ,A68_INT ,A68_416 *);
extern A68_VOID  XWGASIM_changesizeof(struct A68t396 *,struct A68t416 );
/* --- End of imports from kecodegenserversparc --- */


/* --- Imports from kemassemsparc --- */
extern A68_VOID  ZIDASIM_simfault(A68_VC );
extern A68_VOID  GJDASIM_assert(A68_VC ,A68_BOOL );
extern A68_INT  GLDASIM_location;
extern A68_INT  JQDASIM_maximm13;
extern A68_INT  KQDASIM_minimm13;
extern A68_220  LYDASIM_call;
extern A68_223  XYDASIM_sethi;
extern A68_223  BZDASIM_nop;
extern A68_224  FZDASIM_b;
extern A68_225  RZDASIM_bd;
extern A68_226  DAEASIM_add;
extern A68_226  HAEASIM_and;
extern A68_226  LAEASIM_or;
extern A68_226  TAEASIM_sub;
extern A68_226  FBEASIM_xnor;
extern A68_226  NBEASIM_subx;
extern A68_226  RBEASIM_addcc;
extern A68_226  ZBEASIM_orcc;
extern A68_226  HCEASIM_subcc;
extern A68_226  ZDEASIM_sll;
extern A68_226  DEEASIM_srl;
extern A68_226  HEEASIM_sra;
extern A68_230  LOEASIM_t;
extern A68_226  TEEASIM_ld;
extern A68_226  JFEASIM_st;
#define YVDASIM_eq 0X1U
#define ZVDASIM_z YVDASIM_eq
#define DWDASIM_lu 0X5U
#define EWDASIM_cs DWDASIM_lu
#define GWDASIM_vs 0X7U
#define HWDASIM_a 0X8U
#define IWDASIM_ne 0X9U
#define JWDASIM_nz IWDASIM_ne
#define NWDASIM_geu 0XdU
#define OWDASIM_cc NWDASIM_geu
#define RWDASIM_n_a 0X10U
#define SWDASIM_eq_a 0X11U
#define TWDASIM_z_a SWDASIM_eq_a
#define VWDASIM_l_a 0X13U
#define WWDASIM_leu_a 0X14U
#define XWDASIM_lu_a 0X15U
#define YWDASIM_cs_a XWDASIM_lu_a
#define ZWDASIM_neg_a 0X16U
#define CXDASIM_ne_a 0X19U
#define DXDASIM_nz_a CXDASIM_ne_a
#define EXDASIM_g_a 0X1aU
#define FXDASIM_ge_a 0X1bU
#define HXDASIM_geu_a 0X1dU
#define IXDASIM_cc_a HXDASIM_geu_a
#define JXDASIM_pos_a 0X1eU
extern A68_BITS  PXDASIM_swapcondition(A68_BITS );
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
extern A68_VOID  NPEASIM_using(struct A68t220 ,A68_INT );
extern A68_VOID  QQEASIM_using(struct A68t223 ,struct A68t215 );
extern A68_VOID  YQEASIM_using(struct A68t236 ,A68_INT );
extern A68_VOID  PREASIM_using(struct A68t238 ,A68_INT );
extern A68_VOID  ISEASIM_using(struct A68t226 ,struct A68t219 );
extern A68_VOID  BTEASIM_using(struct A68t241 ,struct A68t216 );
extern A68_VOID  HREASIM_using(struct A68t236 ,struct A68t211 *);
extern A68_VOID  ASEASIM_using(struct A68t238 ,struct A68t211 *);
extern A68_VOID  VXDASIM_(struct A68t224 ,A68_BITS ,A68_236 *);
extern A68_VOID  AYDASIM_(struct A68t225 ,A68_BITS ,A68_238 *);
extern A68_VOID  FYDASIM_(struct A68t230 ,A68_BITS ,A68_241 *);
extern A68_VOID  TXEASIM_fixmachinelabel(struct A68t211 );
extern A68_VOID  MYEASIM_maaddrir(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS );
extern A68_VOID  CZEASIM_mamovir(A68_INT ,A68_BITS );
extern A68_VOID  OZEASIM_madiv(void);
extern A68_VOID  TZEASIM_mamul(void);
extern A68_VOID  ZZEASIM_maputchar(A68_CHAR );
#define CPEASIM_t_int_overflow 0
/* --- End of imports from kemassemsparc --- */


/* --- Imports from kesave --- */
/* --- End of imports from kesave --- */


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
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AAFASIM(void);   /* kecodegenserversparc */
extern void KIDASIM(void);   /* kemassemsparc */
extern void EFBASIM(void);   /* kesave */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_424   CZGASIM = {"$Id: kecodegenstacksparc.a68,v 34.2 1995/03/29 13:04:48 ella Exp $"}; 
A_GISVEC(A68_VC ,DZGASIM,CZGASIM,66)
#define EZGASIM_tos 0
#define FZGASIM_tos1 1
static A68_429   WZGASIM = {"STACKALLOCATOR"}; 
A_GISVEC(A68_VC ,XZGASIM,WZGASIM,14)
static A68_448   BQHASIM = {"Implementation Restricted to 6 parameters"}; 
A_GISVEC(A68_VC ,CQHASIM,BQHASIM,41)
static A68_449   PRHASIM = {"Callinst pointer not found as specified on stack advance."}; 
A_GISVEC(A68_VC ,QRHASIM,PRHASIM,57)
static A68_449   RRHASIM = {"Callinst pointer not found as specified on stack advance."}; 
A_GISVEC(A68_VC ,SRHASIM,RRHASIM,57)
static A68_450   HSHASIM = {"Fixed location not found as specified on stack advance."}; 
A_GISVEC(A68_VC ,ISHASIM,HSHASIM,55)
static A68_450   VSHASIM = {"Small location not found as specified on stack advance."}; 
A_GISVEC(A68_VC ,WSHASIM,VSHASIM,55)
static A68_452   BTHASIM = {"Implementation limit of 6 returned parameters"}; 
A_GISVEC(A68_VC ,DTHASIM,BTHASIM,45)
static A68_453   UUHASIM = {"Implementation restriced to 6 returned parameters "}; 
A_GISVEC(A68_VC ,VUHASIM,UUHASIM,50)
static A68_456   NYHASIM = {"The copied location must be in this window"}; 
A_GISVEC(A68_VC ,OYHASIM,NYHASIM,42)
static A68_456   SYHASIM = {"The copied location must be in this window"}; 
A_GISVEC(A68_VC ,TYHASIM,SYHASIM,42)
static A68_456   BZHASIM = {"The copied location must be in this window"}; 
A_GISVEC(A68_VC ,CZHASIM,BZHASIM,42)
static A68_457   KZHASIM = {"Global is restricted to 4 (bytes)"}; 
A_GISVEC(A68_VC ,LZHASIM,KZHASIM,33)
#define OAIASIM_addr EZGASIM_tos
#define PAIASIM_boffset FZGASIM_tos1

A68_VOID  GZGASIM_stackallocator(A68_425  *ReturnedValue);

A68_425 * NZGASIM_new(A68_425 * S);

A68_VOID  UZGASIM_dump(A68_425  S, A68_VC  Indent);

A68_VOID  IAHASIM_save(A68_425 * X, A68_257  Ff);

A68_VOID  LAHASIM_restore(A68_425 * X, A68_259  Ff);

A68_VOID  NAHASIM_clear(A68_425 * S);

A68_INT  PAHASIM_dynamicusage(A68_425 * S);

A68_INT  SAHASIM_length(A68_425 * S);

A68_BOOL  VAHASIM_cleared(A68_425 * S);

A68_INT  ZAHASIM_locatecopy(A68_425 * S, A68_INT  O);

A68_BITS  GBHASIM_rdest(A68_425 * Stack, A68_INT  O);

A68_BITS  KBHASIM_rsource(A68_425 * Stack, A68_INT  O);

A68_VOID  LCHASIM_source(A68_425 * Stack, A68_INT  O, A68_438  *ReturnedValue);

A68_VOID  QDHASIM_smallind(A68_425 * Stack, A68_INT  O, A68_219  *ReturnedValue);

A68_VOID  QEHASIM_loadoperands(A68_425 * Stack, A68_INT  O, A68_217  *ReturnedValue);

A68_VOID  DFHASIM_sizeoperands(A68_425 * Stack, A68_INT  O, A68_219  *ReturnedValue);

A68_VOID  IFHASIM_forcecondition(A68_425 * S);

A_STATIC A68_VOID  WFHASIM_forcenocallinst(A68_425 * S, A68_INT  O);

A68_VOID  HGHASIM_transmutesmall(A68_425 * S, A68_INT  O);

A68_VOID  SGHASIM_monop(A68_425 * Stack, A68_219  *ReturnedValue);

A68_VOID  IHHASIM_pop(A68_425 * S);

A68_VOID  LHHASIM_nonassocdyop(A68_425 * Stack, A68_219  *ReturnedValue);

A68_VOID  BIHASIM_assocdyop(A68_425 * Stack, A68_219  *ReturnedValue);

A68_VOID  XIHASIM_calculatenewdynamicaddr(A68_425 * S, A68_INT  O);

A68_VOID  WJHASIM_loadindex(A68_425 * S, A68_INT  O);

A68_VOID  KKHASIM_loopindex(A68_425 * S, A68_INT  Loop);

A68_BOOL  QKHASIM_allocregisterinuse(A68_425 * S, A68_INT  O);

A68_VOID  FLHASIM_freecopy(A68_425 * S, A68_INT  O);

A68_VOID  PMHASIM_forceload(A68_425 * S, A68_INT  O);

A68_VOID  TNHASIM_forceallload(A68_425 * S);

A68_VOID  YNHASIM_forceindepmem(A68_425 * S);

A68_VOID  FOHASIM_conform(A68_425 * S);

A_STATIC A68_VOID  KOHASIM_makewindowpushable(A68_425 * S);

A68_VOID  TOHASIM_pushnew(A68_425 * S, A68_INT  Length);

A68_VOID  EPHASIM_pushnewstacklocation(A68_425 * S, A68_INT  Length);

A68_VOID  QPHASIM_pushnewunknownstacklocation(A68_425 * S);

A68_INT  ZPHASIM_advance(A68_425 * S, A68_328 * Ips);

A68_VOID  ATHASIM_replace(A68_425 * S, A68_350  P);

A68_VOID  TUHASIM_compress(A68_425 * S, A68_INT  N);

A68_VOID  KWHASIM_createparams(A68_425 * S, A68_328 * P);

A68_VOID  BXHASIM_createspec(A68_425 * S, A68_328 * P);

A68_328 * LXHASIM_derivespec(A68_425 * S);

A68_VOID  HYHASIM_local(A68_425 * Stack, A68_INT  N);

A68_VOID  JZHASIM_global(A68_425 * Stack, A68_INT  W);

A68_VOID  PZHASIM_att(A68_282  Ip, A68_INT  N, A68_458  *ReturnedValue);

A68_VOID  UZHASIM_store(A68_425 * Stack, A68_458  Ip);

A68_VOID  NAIASIM_bstring(A68_425 * Stack, A68_INT  W);

A68_VOID  XHIASIM_add(A68_425 * Stack);

A68_VOID  OIIASIM_not(A68_425 * Stack);

A68_VOID  WIIASIM_shl(A68_425 * Stack);

A68_VOID  RKIASIM_shr(A68_425 * Stack);

A68_VOID  MMIASIM_mul(A68_425 * Stack);

A68_VOID  NNIASIM_div(A68_425 * Stack);

A68_VOID  AOIASIM_mod(A68_425 * Stack);

A68_VOID  KPIASIM_test(A68_425 * Stack);

A68_VOID  YPIASIM_genericrelation(A68_425 * Stack, A68_BITS  Cc);

A68_VOID  UQIASIM_eq(A68_425 * S);

A_STATIC A68_VOID  JTIASIM_pushint_general(A68_425 * Stack, A68_INT  I, A68_INT  Len);

A68_VOID  YTIASIM_pushint(A68_425 * Stack, A68_INT  I);

A68_VOID  BUIASIM_len(A68_VC  W, A68_INT  L, A68_463  *ReturnedValue);

A68_VOID  GUIASIM_pushconst(A68_425 * Stack, A68_463  X);

A68_VOID  PVIASIM_itos(A68_425 * Stack, A68_416  Ip);

A68_VOID  XVIASIM_utos(A68_425 * Stack, A68_416  Ip);

A68_VOID  AWIASIM_stoi(A68_425 * Stack, A68_INT  O);

A68_VOID  QWIASIM_stou(A68_425 * Stack, A68_INT  O);

A68_VOID  GXIASIM_itos(A68_425 * Stack, A68_INT  W);

A68_VOID  KXIASIM_utos(A68_425 * Stack, A68_INT  W);

A68_VOID  NXIASIM_stoi(A68_425 * Stack);

A68_VOID  PXIASIM_stou(A68_425 * Stack);

A68_VOID  SXIASIM_drop(A68_425 * Stack, A68_INT  N);

A68_VOID  XXIASIM_fanout(A68_425 * Stack, A68_INT  Offset);

A68_VOID  GZGASIM_stackallocator(A68_425  *ReturnedValue)
{ 
A68_425  HZGASIM;  /* collateral clause result */
A68_396  IZGASIM;  /* avoid structure result */
A68_362  JZGASIM;  /* avoid structure result */
A68_354  KZGASIM;  /* avoid structure result */
A68_425  LZGASIM;  /* clause result */
A_PROC_ENTRY(stackallocator);
PRGASIM_locationstack(  &IZGASIM );
HZGASIM.Location_stack = IZGASIM;
UEGASIM_rmallocator(  &JZGASIM );
HZGASIM.Rm_allocator = JZGASIM;
MXGASIM_sizerecorder(  &KZGASIM );
HZGASIM.Size_recorder = KZGASIM;
LZGASIM = HZGASIM;
A_PROC_EXIT(stackallocator);
*ReturnedValue = (LZGASIM);
return;
} 
#undef NL

A68_425 * NZGASIM_new(A68_425 * S)
{ 
A68_425  OZGASIM;  /* collateral clause result */
A68_396  PZGASIM;  /* avoid structure result */
A68_425 * QZGASIM;  /* clause result */
A68_425 * RZGASIM;  /* YIELD */
A_PROC_ENTRY(new);
 /* line 127: */
 /* line 128: */
 /* line 129: */
XSGASIM_new( (&(S->Location_stack)), &PZGASIM );
OZGASIM.Location_stack = PZGASIM;
 /* line 130: */
OZGASIM.Rm_allocator = (*(&(S->Rm_allocator)));
OZGASIM.Size_recorder = (*(&(S->Size_recorder)));
RZGASIM = A_HEAP(A68_425 ) ;
(*RZGASIM) = OZGASIM ;
QZGASIM = RZGASIM;
A_PROC_EXIT(new);
return( QZGASIM );
} 
#undef NL

A68_VOID  UZGASIM_dump(A68_425  S, A68_VC  Indent)
{ 
A68_430  VZGASIM;  /* collateral clause result */
A68_52  YZGASIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZZGASIM;  /* YIELD */
A68_52  AAHASIM;  /* OPERATORS - mode -> union mode */
A68_56  BAHASIM;  /* procedure value */
A68_85  CAHASIM;  /* OPERATORS - istruct -> vector */
A68_VC  DAHASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EAHASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FAHASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dump);
 /* line 136: */
 /* line 137: */
{ 
ZZGASIM = A_VC_PLUS(Indent,XZGASIM) ;
VZGASIM.data[0] = A_UNITE(YZGASIM,mode7,7,ZZGASIM);
BAHASIM.fn.fn_global = LRAAOSL_newline;
BAHASIM.nonlocals = A68_NIL;
VZGASIM.data[1] = A_UNITE(AAHASIM,mode12,12,BAHASIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CAHASIM,VZGASIM,2,A68_52 ));
 /* line 138: */
ZRGASIM_dump(S.Location_stack, A_VC_PLUS(Indent,A_HVEC(DAHASIM,' ',A68_CHAR )));
 /* line 139: */
ZEGASIM_dump(S.Rm_allocator, A_VC_PLUS(Indent,A_HVEC(EAHASIM,' ',A68_CHAR )));
 /* line 140: */
 /* line 141: */
RXGASIM_dump(S.Size_recorder, A_VC_PLUS(Indent,A_HVEC(FAHASIM,' ',A68_CHAR )));
} 
A_PROC_EXIT(dump);
return;
} 
#undef NL

A68_VOID  IAHASIM_save(A68_425 * X, A68_257  Ff)
{ 
A_PROC_ENTRY(save);
 /* line 146: */
 /* line 149: */
{ 
YGGASIM_save((&(X->Rm_allocator)), Ff);
 /* line 151: */
 /* line 153: */
GYGASIM_save((&(X->Size_recorder)), Ff);
} 
A_PROC_EXIT(save);
return;
} 
#undef NL

A68_VOID  LAHASIM_restore(A68_425 * X, A68_259  Ff)
{ 
A_PROC_ENTRY(restore);
 /* line 158: */
 /* line 161: */
{ 
BHGASIM_restore((&(X->Rm_allocator)), Ff);
 /* line 163: */
 /* line 165: */
JYGASIM_restore((&(X->Size_recorder)), Ff);
} 
A_PROC_EXIT(restore);
return;
} 
#undef NL

A68_VOID  NAHASIM_clear(A68_425 * S)
{ 
A_PROC_ENTRY(clear);
 /* line 170: */
 /* line 171: */
{ 
JTGASIM_clear((&(S->Location_stack)));
 /* line 172: */
DHGASIM_clear((&(S->Rm_allocator)));
 /* line 173: */
 /* line 174: */
XYGASIM_clear((&(S->Size_recorder)));
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_INT  PAHASIM_dynamicusage(A68_425 * S)
{ 
A68_INT  QAHASIM;  /* clause result */
A_PROC_ENTRY(dynamicusage);
 /* line 178: */
QAHASIM = LYGASIM_maxsize((&(S->Size_recorder)));
A_PROC_EXIT(dynamicusage);
return( QAHASIM );
} 
#undef NL

A68_INT  SAHASIM_length(A68_425 * S)
{ 
A68_INT  TAHASIM;  /* clause result */
A_PROC_ENTRY(length);
 /* line 182: */
TAHASIM = MTGASIM_length((&(S->Location_stack)));
A_PROC_EXIT(length);
return( TAHASIM );
} 
#undef NL

A68_BOOL  VAHASIM_cleared(A68_425 * S)
{ 
A68_BOOL  WAHASIM;  /* clause result */
A_PROC_ENTRY(cleared);
 /* line 187: */
WAHASIM = (SAHASIM_length(S)==0);
A_PROC_EXIT(cleared);
return( WAHASIM );
} 
#undef NL

A68_INT  ZAHASIM_locatecopy(A68_425 * S, A68_INT  O)
{ 
A68_388  ABHASIM;  /* avoid structure result */
A68_388  BBHASIM;  /* united object - for case conformity */
A68_373  CBHASIM_c;
A68_INT  DBHASIM;  /* clause result */
A_PROC_ENTRY(locatecopy);
 /* line 195: */
 /* line 196: */
PVGASIM_stateof( (&(S->Location_stack)), O, &ABHASIM );
BBHASIM = ABHASIM ;
switch ( BBHASIM.mode )
{ 
case 2: /* STRUCT(INT,BOOL)  */
CBHASIM_c = (BBHASIM.data.mode2);
 /* line 197: */
DBHASIM = ZAHASIM_locatecopy(S, (CBHASIM_c.Copy_stack_number+O));
break;
default: 
DBHASIM = O;
break;
} 
A_PROC_EXIT(locatecopy);
return( DBHASIM );
} 
#undef NL

A68_BITS  GBHASIM_rdest(A68_425 * Stack, A68_INT  O)
{ 
A68_BITS  HBHASIM;  /* clause result */
A_PROC_ENTRY(rdest);
 /* line 202: */
 /* line 203: */
 /* line 204: */
 /* line 205: */
HBHASIM = (A68_BITS )(VVGASIM_registerof((&(Stack->Location_stack)), O)+(*(&((&(Stack->Rm_allocator))->Window_offset))));
A_PROC_EXIT(rdest);
return( HBHASIM );
} 
#undef NL

A68_BITS  KBHASIM_rsource(A68_425 * Stack, A68_INT  O)
{ 
A68_INT  LBHASIM_copied;
A68_388  MBHASIM;  /* avoid structure result */
A68_388  NBHASIM;  /* united object - for case conformity */
A68_370  OBHASIM_ir;
A68_BITS  PBHASIM;  /* clause result */
A68_376  QBHASIM_c;
A68_218  RBHASIM;  /* collateral clause result */
A68_219  SBHASIM;  /* OPERATORS - mode -> union mode */
A68_370  TBHASIM;  /* avoid structure result */
A68_388  UBHASIM;  /* OPERATORS - mode -> union mode */
A68_413  VBHASIM;  /* avoid structure result */
A68_379  WBHASIM_sc;
A68_218  XBHASIM;  /* collateral clause result */
A68_219  YBHASIM;  /* OPERATORS - mode -> union mode */
A68_217  ZBHASIM;  /* collateral clause result */
A68_219  ACHASIM;  /* OPERATORS - mode -> union mode */
A68_370  BCHASIM;  /* avoid structure result */
A68_388  CCHASIM;  /* OPERATORS - mode -> union mode */
A68_413  DCHASIM;  /* avoid structure result */
A68_218  ECHASIM;  /* collateral clause result */
A68_219  FCHASIM;  /* OPERATORS - mode -> union mode */
A68_370  GCHASIM;  /* avoid structure result */
A68_388  HCHASIM;  /* OPERATORS - mode -> union mode */
A68_413  ICHASIM;  /* avoid structure result */
A_PROC_ENTRY(rsource);
 /* line 211: */
 /* line 212: */
{ 
LBHASIM_copied = ZAHASIM_locatecopy(Stack, O);
 /* line 213: */
 /* line 214: */
PVGASIM_stateof( (&(Stack->Location_stack)), LBHASIM_copied, &MBHASIM );
NBHASIM = MBHASIM ;
switch ( NBHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
OBHASIM_ir = (NBHASIM.data.mode1);
 /* line 215: */
 /* line 217: */
if ( OBHASIM_ir.Ircallinst_flag )
{ 
 /* line 218: */
PBHASIM = REGASIM_callinstpointer;
} 
else
{ 
 /* line 219: */
 /* line 220: */
PBHASIM = GBHASIM_rdest(Stack, LBHASIM_copied);
} 
break;
case 3: /* STRUCT(REF MODE26)  */
QBHASIM_c = (NBHASIM.data.mode3);
 /* line 221: */
 /* line 222: */
{ 
RBHASIM.Rs1 = FVEASIM_g0;
RBHASIM.Imm = FFFASIM_integer(QBHASIM_c.Constant);
RBHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(LAEASIM_or, A_UNITE(SBHASIM,mode2,2,RBHASIM));
 /* line 223: */
IIGASIM_inregister( A68_FALSE, &TBHASIM );
HWGASIM_given( O, A_UNITE(UBHASIM,mode1,1,TBHASIM), &VBHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), VBHASIM);
 /* line 224: */
 /* line 225: */
 /* line 226: */
PBHASIM = GBHASIM_rdest(Stack, O);
} 
break;
case 4: /* STRUCT(INT,BOOL)  */
WBHASIM_sc = (NBHASIM.data.mode4);
 /* line 227: */
 /* line 228: */
if ( WBHASIM_sc.Callinst_flag )
{ 
XBHASIM.Rs1 = REGASIM_callinstpointer;
XBHASIM.Imm = WBHASIM_sc.Sumconstant;
XBHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(DAEASIM_add, A_UNITE(YBHASIM,mode2,2,XBHASIM));
 /* line 229: */
ZBHASIM.Rs1 = GBHASIM_rdest(Stack, O);
ZBHASIM.Rs2 = TEGASIM_globalpointer;
ZBHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(TAEASIM_sub, A_UNITE(ACHASIM,mode1,1,ZBHASIM));
 /* line 230: */
IIGASIM_inregister( A68_FALSE, &BCHASIM );
HWGASIM_given( O, A_UNITE(CCHASIM,mode1,1,BCHASIM), &DCHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), DCHASIM);
 /* line 231: */
 /* line 232: */
 /* line 233: */
PBHASIM = GBHASIM_rdest(Stack, O);
} 
else
{ 
ECHASIM.Rs1 = GBHASIM_rdest(Stack, LBHASIM_copied);
ECHASIM.Imm = WBHASIM_sc.Sumconstant;
ECHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(DAEASIM_add, A_UNITE(FCHASIM,mode2,2,ECHASIM));
 /* line 234: */
IIGASIM_inregister( A68_FALSE, &GCHASIM );
HWGASIM_given( O, A_UNITE(HCHASIM,mode1,1,GCHASIM), &ICHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), ICHASIM);
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
PBHASIM = GBHASIM_rdest(Stack, O);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(rsource);
return( PBHASIM );
} 
#undef NL

A68_VOID  LCHASIM_source(A68_425 * Stack, A68_INT  O, A68_438  *ReturnedValue)
{ 
A68_INT  MCHASIM_copied;
A68_388  NCHASIM;  /* avoid structure result */
A68_388  OCHASIM;  /* united object - for case conformity */
A68_370  PCHASIM_ir;
A68_438  QCHASIM;  /* clause result */
A68_438  RCHASIM;  /* OPERATORS - mode -> union mode */
A68_438  SCHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  TCHASIM;  /* YIELD */
A68_376  UCHASIM_c;
A68_438  VCHASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WCHASIM;  /* YIELD */
A68_379  XCHASIM_sc;
A68_218  YCHASIM;  /* collateral clause result */
A68_219  ZCHASIM;  /* OPERATORS - mode -> union mode */
A68_217  ADHASIM;  /* collateral clause result */
A68_219  BDHASIM;  /* OPERATORS - mode -> union mode */
A68_370  CDHASIM;  /* avoid structure result */
A68_388  DDHASIM;  /* OPERATORS - mode -> union mode */
A68_413  EDHASIM;  /* avoid structure result */
A68_438  FDHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  GDHASIM;  /* YIELD */
A68_218  HDHASIM;  /* collateral clause result */
A68_219  IDHASIM;  /* OPERATORS - mode -> union mode */
A68_370  JDHASIM;  /* avoid structure result */
A68_388  KDHASIM;  /* OPERATORS - mode -> union mode */
A68_413  LDHASIM;  /* avoid structure result */
A68_438  MDHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  NDHASIM;  /* YIELD */
A_PROC_ENTRY(source);
 /* line 244: */
 /* line 245: */
{ 
MCHASIM_copied = ZAHASIM_locatecopy(Stack, O);
 /* line 246: */
 /* line 247: */
PVGASIM_stateof( (&(Stack->Location_stack)), MCHASIM_copied, &NCHASIM );
OCHASIM = NCHASIM ;
switch ( OCHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
PCHASIM_ir = (OCHASIM.data.mode1);
 /* line 248: */
 /* line 250: */
if ( PCHASIM_ir.Ircallinst_flag )
{ 
 /* line 251: */
QCHASIM = A_UNITE(RCHASIM,mode1,1,REGASIM_callinstpointer);
} 
else
{ 
 /* line 252: */
 /* line 253: */
TCHASIM = GBHASIM_rdest(Stack, MCHASIM_copied) ;
QCHASIM = A_UNITE(SCHASIM,mode1,1,TCHASIM);
} 
break;
case 3: /* STRUCT(REF MODE26)  */
UCHASIM_c = (OCHASIM.data.mode3);
 /* line 254: */
WCHASIM = FFFASIM_integer(UCHASIM_c.Constant) ;
QCHASIM = A_UNITE(VCHASIM,mode2,2,WCHASIM);
break;
case 4: /* STRUCT(INT,BOOL)  */
XCHASIM_sc = (OCHASIM.data.mode4);
 /* line 255: */
 /* line 256: */
if ( XCHASIM_sc.Callinst_flag )
{ 
YCHASIM.Rs1 = REGASIM_callinstpointer;
YCHASIM.Imm = XCHASIM_sc.Sumconstant;
YCHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(DAEASIM_add, A_UNITE(ZCHASIM,mode2,2,YCHASIM));
 /* line 257: */
ADHASIM.Rs1 = GBHASIM_rdest(Stack, O);
ADHASIM.Rs2 = TEGASIM_globalpointer;
ADHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(TAEASIM_sub, A_UNITE(BDHASIM,mode1,1,ADHASIM));
 /* line 258: */
IIGASIM_inregister( A68_FALSE, &CDHASIM );
HWGASIM_given( O, A_UNITE(DDHASIM,mode1,1,CDHASIM), &EDHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), EDHASIM);
 /* line 259: */
 /* line 260: */
 /* line 261: */
GDHASIM = GBHASIM_rdest(Stack, O) ;
QCHASIM = A_UNITE(FDHASIM,mode1,1,GDHASIM);
} 
else
{ 
HDHASIM.Rs1 = GBHASIM_rdest(Stack, MCHASIM_copied);
HDHASIM.Imm = XCHASIM_sc.Sumconstant;
HDHASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(DAEASIM_add, A_UNITE(IDHASIM,mode2,2,HDHASIM));
 /* line 262: */
IIGASIM_inregister( A68_FALSE, &JDHASIM );
HWGASIM_given( O, A_UNITE(KDHASIM,mode1,1,JDHASIM), &LDHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), LDHASIM);
 /* line 263: */
 /* line 264: */
 /* line 265: */
 /* line 266: */
NDHASIM = GBHASIM_rdest(Stack, O) ;
QCHASIM = A_UNITE(MDHASIM,mode1,1,NDHASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(source);
*ReturnedValue = (QCHASIM);
return;
} 
#undef NL

A68_VOID  QDHASIM_smallind(A68_425 * Stack, A68_INT  O, A68_219  *ReturnedValue)
{ 
A68_INT  RDHASIM_copied;
A68_BITS  SDHASIM_dest;
A68_388  TDHASIM;  /* avoid structure result */
A68_388  UDHASIM;  /* united object - for case conformity */
A68_370  VDHASIM_ir;
A68_217  WDHASIM;  /* collateral clause result */
A68_219  XDHASIM;  /* clause result */
A68_219  YDHASIM;  /* OPERATORS - mode -> union mode */
A68_217  ZDHASIM;  /* collateral clause result */
A68_219  AEHASIM;  /* OPERATORS - mode -> union mode */
A68_376  BEHASIM_c;
A68_218  CEHASIM;  /* collateral clause result */
A68_219  DEHASIM;  /* OPERATORS - mode -> union mode */
A68_379  EEHASIM_sc;
A68_218  FEHASIM;  /* collateral clause result */
A68_219  GEHASIM;  /* OPERATORS - mode -> union mode */
A68_217  HEHASIM;  /* collateral clause result */
A68_219  IEHASIM;  /* OPERATORS - mode -> union mode */
A68_219  JEHASIM_result;
A68_370  KEHASIM;  /* avoid structure result */
A68_388  LEHASIM;  /* OPERATORS - mode -> union mode */
A68_413  MEHASIM;  /* avoid structure result */
A68_219  NEHASIM;  /* clause result */
A_PROC_ENTRY(smallind);
 /* line 272: */
 /* line 274: */
{ 
RDHASIM_copied = ZAHASIM_locatecopy(Stack, O);
 /* line 275: */
SDHASIM_dest = GBHASIM_rdest(Stack, O);
 /* line 276: */
 /* line 277: */
 /* line 278: */
PVGASIM_stateof( (&(Stack->Location_stack)), RDHASIM_copied, &TDHASIM );
UDHASIM = TDHASIM ;
switch ( UDHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
VDHASIM_ir = (UDHASIM.data.mode1);
 /* line 279: */
 /* line 280: */
if ( VDHASIM_ir.Ircallinst_flag )
{ 
WDHASIM.Rs1 = REGASIM_callinstpointer;
WDHASIM.Rs2 = FVEASIM_g0;
 /* line 281: */
WDHASIM.Rd = SDHASIM_dest;
 /* line 282: */
XDHASIM = A_UNITE(YDHASIM,mode1,1,WDHASIM);
} 
else
{ 
ZDHASIM.Rs1 = TEGASIM_globalpointer;
ZDHASIM.Rs2 = KBHASIM_rsource(Stack, RDHASIM_copied);
 /* line 283: */
ZDHASIM.Rd = SDHASIM_dest;
 /* line 284: */
XDHASIM = A_UNITE(AEHASIM,mode1,1,ZDHASIM);
} 
break;
case 3: /* STRUCT(REF MODE26)  */
BEHASIM_c = (UDHASIM.data.mode3);
 /* line 285: */
CEHASIM.Rs1 = TEGASIM_globalpointer;
CEHASIM.Imm = FFFASIM_integer(BEHASIM_c.Constant);
CEHASIM.Rd = SDHASIM_dest;
 /* line 286: */
XDHASIM = A_UNITE(DEHASIM,mode2,2,CEHASIM);
break;
case 4: /* STRUCT(INT,BOOL)  */
EEHASIM_sc = (UDHASIM.data.mode4);
 /* line 287: */
 /* line 288: */
if ( EEHASIM_sc.Callinst_flag )
{ 
FEHASIM.Rs1 = REGASIM_callinstpointer;
FEHASIM.Imm = EEHASIM_sc.Sumconstant;
 /* line 289: */
FEHASIM.Rd = SDHASIM_dest;
 /* line 290: */
XDHASIM = A_UNITE(GEHASIM,mode2,2,FEHASIM);
} 
else
{ 
HEHASIM.Rs1 = TEGASIM_globalpointer;
HEHASIM.Rs2 = KBHASIM_rsource(Stack, O);
 /* line 291: */
HEHASIM.Rd = SDHASIM_dest;
 /* line 292: */
XDHASIM = A_UNITE(IEHASIM,mode1,1,HEHASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
JEHASIM_result = XDHASIM;
 /* line 293: */
IIGASIM_inregister( A68_FALSE, &KEHASIM );
HWGASIM_given( O, A_UNITE(LEHASIM,mode1,1,KEHASIM), &MEHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), MEHASIM);
 /* line 294: */
 /* line 295: */
NEHASIM = JEHASIM_result;
} 
A_PROC_EXIT(smallind);
*ReturnedValue = (NEHASIM);
return;
} 
#undef NL

A68_VOID  QEHASIM_loadoperands(A68_425 * Stack, A68_INT  O, A68_217  *ReturnedValue)
{ 
A68_INT  REHASIM_copied;
A68_388  SEHASIM;  /* avoid structure result */
A68_388  TEHASIM;  /* united object - for case conformity */
A68_370  UEHASIM_ir;
A68_BITS  VEHASIM;  /* clause result */
A68_376  WEHASIM_c;
A68_382  XEHASIM_in;
A68_BITS  YEHASIM_rsource;
A68_217  ZEHASIM;  /* collateral clause result */
A68_217  AFHASIM;  /* clause result */
A_PROC_ENTRY(loadoperands);
 /* line 304: */
 /* line 305: */
{ 
REHASIM_copied = ZAHASIM_locatecopy(Stack, O);
 /* line 306: */
 /* line 307: */
 /* line 308: */
PVGASIM_stateof( (&(Stack->Location_stack)), REHASIM_copied, &SEHASIM );
TEHASIM = SEHASIM ;
switch ( TEHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
UEHASIM_ir = (TEHASIM.data.mode1);
 /* line 309: */
 /* line 311: */
if ( UEHASIM_ir.Ircallinst_flag )
{ 
 /* line 312: */
VEHASIM = REGASIM_callinstpointer;
} 
else
{ 
 /* line 313: */
 /* line 314: */
VEHASIM = GBHASIM_rdest(Stack, REHASIM_copied);
} 
break;
case 3: /* STRUCT(REF MODE26)  */
WEHASIM_c = (TEHASIM.data.mode3);
 /* line 315: */
 /* line 316: */
VEHASIM = GBHASIM_rdest(Stack, REHASIM_copied);
break;
case 5: /* STRUCT(BOOL)  */
XEHASIM_in = (TEHASIM.data.mode5);
 /* line 317: */
 /* line 319: */
if ( XEHASIM_in.Indcallinst_flag )
{ 
 /* line 320: */
VEHASIM = REGASIM_callinstpointer;
} 
else
{ 
 /* line 321: */
 /* line 322: */
VEHASIM = GBHASIM_rdest(Stack, REHASIM_copied);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
YEHASIM_rsource = VEHASIM;
 /* line 323: */
ZEHASIM.Rs1 = YEHASIM_rsource;
ZEHASIM.Rs2 = NEGASIM_tempreg1;
 /* line 324: */
ZEHASIM.Rd = OEGASIM_tempreg2;
AFHASIM = ZEHASIM;
} 
A_PROC_EXIT(loadoperands);
*ReturnedValue = (AFHASIM);
return;
} 
#undef NL

A68_VOID  DFHASIM_sizeoperands(A68_425 * Stack, A68_INT  O, A68_219  *ReturnedValue)
{ 
A68_218  EFHASIM;  /* collateral clause result */
A68_219  FFHASIM;  /* clause result */
A68_219  GFHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sizeoperands);
 /* line 331: */
 /* line 332: */
EFHASIM.Rs1 = GBHASIM_rdest(Stack, O);
EFHASIM.Imm = (-4);
 /* line 333: */
EFHASIM.Rd = NEGASIM_tempreg1;
FFHASIM = A_UNITE(GFHASIM,mode2,2,EFHASIM);
A_PROC_EXIT(sizeoperands);
*ReturnedValue = (FFHASIM);
return;
} 
#undef NL

A68_VOID  IFHASIM_forcecondition(A68_425 * S)
{ 
A68_388  JFHASIM;  /* avoid structure result */
A68_388  KFHASIM;  /* united object - for case conformity */
A68_385  LFHASIM_c;
A68_236  MFHASIM;  /* avoid structure result */
A68_218  NFHASIM;  /* collateral clause result */
A68_219  OFHASIM;  /* OPERATORS - mode -> union mode */
A68_217  PFHASIM;  /* collateral clause result */
A68_219  QFHASIM;  /* OPERATORS - mode -> union mode */
A68_370  RFHASIM;  /* avoid structure result */
A68_388  SFHASIM;  /* OPERATORS - mode -> union mode */
A68_413  TFHASIM;  /* avoid structure result */
A_PROC_ENTRY(forcecondition);
 /* line 342: */
 /* line 343: */
if ( !VAHASIM_cleared(S) )
{ 
 /* line 344: */
PVGASIM_stateof( (&(S->Location_stack)), EZGASIM_tos, &JFHASIM );
KFHASIM = JFHASIM ;
switch ( KFHASIM.mode )
{ 
case 6: /* STRUCT(BITS)  */
LFHASIM_c = (KFHASIM.data.mode6);
 /* line 345: */
 /* line 346: */
{ 
VXDASIM_( FZDASIM_b, (A68_BITS )(LFHASIM_c.Condition|RWDASIM_n_a), &MFHASIM );
YQEASIM_using(MFHASIM, (GLDASIM_location+12));
 /* line 347: */
NFHASIM.Rs1 = FVEASIM_g0;
NFHASIM.Imm = 1;
NFHASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(OFHASIM,mode2,2,NFHASIM));
 /* line 348: */
PFHASIM.Rs1 = FVEASIM_g0;
PFHASIM.Rs2 = FVEASIM_g0;
PFHASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(QFHASIM,mode1,1,PFHASIM));
 /* line 349: */
 /* line 350: */
 /* line 351: */
IIGASIM_inregister( A68_FALSE, &RFHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(SFHASIM,mode1,1,RFHASIM), &TFHASIM );
MWGASIM_changestateof((&(S->Location_stack)), TFHASIM);
} 
break;
default: 
 /* line 352: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(forcecondition);
return;
} 
#undef NL

A_STATIC A68_VOID  WFHASIM_forcenocallinst(A68_425 * S, A68_INT  O)
{ 
A68_388  XFHASIM;  /* avoid structure result */
A68_388  YFHASIM;  /* united object - for case conformity */
A68_370  ZFHASIM_ir;
A68_217  AGHASIM;  /* collateral clause result */
A68_219  BGHASIM;  /* OPERATORS - mode -> union mode */
A68_370  CGHASIM;  /* avoid structure result */
A68_388  DGHASIM;  /* OPERATORS - mode -> union mode */
A68_413  EGHASIM;  /* avoid structure result */
A_PROC_ENTRY(forcenocallinst);
 /* line 358: */
 /* line 359: */
PVGASIM_stateof( (&(S->Location_stack)), O, &XFHASIM );
YFHASIM = XFHASIM ;
switch ( YFHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
ZFHASIM_ir = (YFHASIM.data.mode1);
 /* line 360: */
 /* line 361: */
if ( ZFHASIM_ir.Ircallinst_flag )
{ 
AGHASIM.Rs1 = REGASIM_callinstpointer;
AGHASIM.Rs2 = TEGASIM_globalpointer;
AGHASIM.Rd = GBHASIM_rdest(S, O);
ISEASIM_using(TAEASIM_sub, A_UNITE(BGHASIM,mode1,1,AGHASIM));
 /* line 362: */
 /* line 363: */
 /* line 364: */
 /* line 365: */
IIGASIM_inregister( A68_FALSE, &CGHASIM );
HWGASIM_given( O, A_UNITE(DGHASIM,mode1,1,CGHASIM), &EGHASIM );
MWGASIM_changestateof((&(S->Location_stack)), EGHASIM);
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(forcenocallinst);
return;
} 
#undef NL

A68_VOID  HGHASIM_transmutesmall(A68_425 * S, A68_INT  O)
{ 
A68_393  IGHASIM;  /* avoid structure result */
A68_393  JGHASIM;  /* united object - for case conformity */
A68_217  KGHASIM;  /* collateral clause result */
A68_219  LGHASIM;  /* OPERATORS - mode -> union mode */
A68_394  MGHASIM;  /* collateral clause result */
A68_393  NGHASIM;  /* OPERATORS - mode -> union mode */
A68_370  OGHASIM;  /* avoid structure result */
A68_388  PGHASIM;  /* OPERATORS - mode -> union mode */
A68_406  QGHASIM;  /* avoid structure result */
A_PROC_ENTRY(transmutesmall);
 /* line 378: */
 /* line 379: */
JVGASIM_typeof( (&(S->Location_stack)), O, &IGHASIM );
JGHASIM = IGHASIM ;
switch ( JGHASIM.mode )
{ 
case 3: /* CHAR */
 /* line 381: */
 /* line 382: */
{ 
 /* line 383: */
KGHASIM.Rs1 = GBHASIM_rdest(S, ZAHASIM_locatecopy(S, O));
KGHASIM.Rs2 = FVEASIM_g0;
KGHASIM.Rd = GBHASIM_rdest(S, O);
ISEASIM_using(TEEASIM_ld, A_UNITE(LGHASIM,mode1,1,KGHASIM));
 /* line 384: */
 /* line 385: */
MGHASIM.Location_type = A_UNITE(NGHASIM,mode1,1,TPGASIM_smallstacklocation);
 /* line 386: */
IIGASIM_inregister( A68_FALSE, &OGHASIM );
MGHASIM.Symbolic_state = A_UNITE(PGHASIM,mode1,1,OGHASIM);
 /* line 387: */
MGHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), O);
MGHASIM.Bit_length = 32;
 /* line 391: */
 /* line 392: */
 /* line 393: */
VUGASIM_att( MGHASIM, O, &QGHASIM );
AVGASIM_put((&(S->Location_stack)), QGHASIM);
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(transmutesmall);
return;
} 
#undef NL

A68_VOID  SGHASIM_monop(A68_425 * Stack, A68_219  *ReturnedValue)
{ 
A68_438  TGHASIM;  /* avoid structure result */
A68_438  UGHASIM;  /* united object - for case conformity */
A68_INT  VGHASIM_i;
A68_218  WGHASIM;  /* collateral clause result */
A68_219  XGHASIM;  /* clause result */
A68_219  YGHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  ZGHASIM_r;
A68_217  AHHASIM;  /* collateral clause result */
A68_219  BHHASIM;  /* OPERATORS - mode -> union mode */
A68_219  CHHASIM_result;
A68_370  DHHASIM;  /* avoid structure result */
A68_388  EHHASIM;  /* OPERATORS - mode -> union mode */
A68_413  FHHASIM;  /* avoid structure result */
A68_219  GHHASIM;  /* clause result */
A_PROC_ENTRY(monop);
 /* line 402: */
 /* line 403: */
{ 
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 405: */
 /* line 406: */
 /* line 407: */
LCHASIM_source( Stack, EZGASIM_tos, &TGHASIM );
UGHASIM = TGHASIM ;
switch ( UGHASIM.mode )
{ 
case 2: /* INT */
VGHASIM_i = (UGHASIM.data.mode2);
WGHASIM.Rs1 = FVEASIM_g0;
WGHASIM.Imm = VGHASIM_i;
WGHASIM.Rd = GBHASIM_rdest(Stack, EZGASIM_tos);
 /* line 408: */
XGHASIM = A_UNITE(YGHASIM,mode2,2,WGHASIM);
break;
case 1: /* BITS */
ZGHASIM_r = (UGHASIM.data.mode1);
AHHASIM.Rs1 = FVEASIM_g0;
AHHASIM.Rs2 = ZGHASIM_r;
 /* line 409: */
AHHASIM.Rd = GBHASIM_rdest(Stack, EZGASIM_tos);
XGHASIM = A_UNITE(BHHASIM,mode1,1,AHHASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
CHHASIM_result = XGHASIM;
 /* line 410: */
IIGASIM_inregister( A68_FALSE, &DHHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(EHHASIM,mode1,1,DHHASIM), &FHHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), FHHASIM);
 /* line 411: */
 /* line 412: */
GHHASIM = CHHASIM_result;
} 
A_PROC_EXIT(monop);
*ReturnedValue = (GHHASIM);
return;
} 
#undef NL

A68_VOID  IHHASIM_pop(A68_425 * S)
{ 
A68_394  JHHASIM;  /* avoid structure result */
A_PROC_ENTRY(pop);
 /* line 418: */
 /* line 419: */
{ 
CIGASIM_unreserver((&(S->Rm_allocator)));
 /* line 420: */
UYGASIM_minus((&(S->Size_recorder)), QHFASIM_bytesize(BWGASIM_sizeof((&(S->Location_stack)), EZGASIM_tos)));
 /* line 421: */
 /* line 422: */
PTGASIM_pop( (&(S->Location_stack)), &JHHASIM );
JHHASIM;
} 
A_PROC_EXIT(pop);
return;
} 
#undef NL

A68_VOID  LHHASIM_nonassocdyop(A68_425 * Stack, A68_219  *ReturnedValue)
{ 
A68_438  MHHASIM;  /* avoid structure result */
A68_438  NHHASIM;  /* united object - for case conformity */
A68_INT  OHHASIM_i;
A68_218  PHHASIM;  /* collateral clause result */
A68_219  QHHASIM;  /* clause result */
A68_219  RHHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  SHHASIM_r;
A68_217  THHASIM;  /* collateral clause result */
A68_219  UHHASIM;  /* OPERATORS - mode -> union mode */
A68_219  VHHASIM_result;
A68_370  WHHASIM;  /* avoid structure result */
A68_388  XHHASIM;  /* OPERATORS - mode -> union mode */
A68_413  YHHASIM;  /* avoid structure result */
A68_219  ZHHASIM;  /* clause result */
A_PROC_ENTRY(nonassocdyop);
 /* line 431: */
 /* line 432: */
{ 
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 434: */
 /* line 435: */
 /* line 436: */
LCHASIM_source( Stack, EZGASIM_tos, &MHHASIM );
NHHASIM = MHHASIM ;
switch ( NHHASIM.mode )
{ 
case 2: /* INT */
OHHASIM_i = (NHHASIM.data.mode2);
PHHASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
PHHASIM.Imm = OHHASIM_i;
PHHASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 437: */
QHHASIM = A_UNITE(RHHASIM,mode2,2,PHHASIM);
break;
case 1: /* BITS */
SHHASIM_r = (NHHASIM.data.mode1);
THHASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
THHASIM.Rs2 = SHHASIM_r;
 /* line 438: */
THHASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
QHHASIM = A_UNITE(UHHASIM,mode1,1,THHASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
VHHASIM_result = QHHASIM;
 /* line 439: */
IIGASIM_inregister( A68_FALSE, &WHHASIM );
HWGASIM_given( FZGASIM_tos1, A_UNITE(XHHASIM,mode1,1,WHHASIM), &YHHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), YHHASIM);
 /* line 440: */
 /* line 441: */
ZHHASIM = VHHASIM_result;
} 
A_PROC_EXIT(nonassocdyop);
*ReturnedValue = (ZHHASIM);
return;
} 
#undef NL

A68_VOID  BIHASIM_assocdyop(A68_425 * Stack, A68_219  *ReturnedValue)
{ 
A68_388  CIHASIM;  /* avoid structure result */
A68_388  DIHASIM;  /* united object - for case conformity */
A68_376  EIHASIM_c;
A68_218  FIHASIM;  /* collateral clause result */
A68_219  GIHASIM;  /* clause result */
A68_219  HIHASIM;  /* OPERATORS - mode -> union mode */
A68_438  IIHASIM;  /* avoid structure result */
A68_438  JIHASIM;  /* united object - for case conformity */
A68_INT  KIHASIM_i;
A68_218  LIHASIM;  /* collateral clause result */
A68_219  MIHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  NIHASIM_r;
A68_217  OIHASIM;  /* collateral clause result */
A68_219  PIHASIM;  /* OPERATORS - mode -> union mode */
A68_219  QIHASIM_result;
A68_370  RIHASIM;  /* avoid structure result */
A68_388  SIHASIM;  /* OPERATORS - mode -> union mode */
A68_413  TIHASIM;  /* avoid structure result */
A68_219  UIHASIM;  /* clause result */
A_PROC_ENTRY(assocdyop);
 /* line 452: */
 /* line 453: */
{ 
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 455: */
 /* line 456: */
 /* line 457: */
PVGASIM_stateof( (&(Stack->Location_stack)), EZGASIM_tos, &CIHASIM );
DIHASIM = CIHASIM ;
switch ( DIHASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
EIHASIM_c = (DIHASIM.data.mode3);
 /* line 458: */
FIHASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
FIHASIM.Imm = FFFASIM_integer(EIHASIM_c.Constant);
 /* line 459: */
FIHASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 460: */
GIHASIM = A_UNITE(HIHASIM,mode2,2,FIHASIM);
break;
default: 
 /* line 461: */
LCHASIM_source( Stack, FZGASIM_tos1, &IIHASIM );
JIHASIM = IIHASIM ;
switch ( JIHASIM.mode )
{ 
case 2: /* INT */
KIHASIM_i = (JIHASIM.data.mode2);
LIHASIM.Rs1 = KBHASIM_rsource(Stack, EZGASIM_tos);
LIHASIM.Imm = KIHASIM_i;
LIHASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 462: */
GIHASIM = A_UNITE(MIHASIM,mode2,2,LIHASIM);
break;
case 1: /* BITS */
NIHASIM_r = (JIHASIM.data.mode1);
OIHASIM.Rs1 = KBHASIM_rsource(Stack, EZGASIM_tos);
OIHASIM.Rs2 = NIHASIM_r;
 /* line 463: */
OIHASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 464: */
GIHASIM = A_UNITE(PIHASIM,mode1,1,OIHASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
} 
QIHASIM_result = GIHASIM;
 /* line 465: */
IIGASIM_inregister( A68_FALSE, &RIHASIM );
HWGASIM_given( FZGASIM_tos1, A_UNITE(SIHASIM,mode1,1,RIHASIM), &TIHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), TIHASIM);
 /* line 466: */
 /* line 467: */
UIHASIM = QIHASIM_result;
} 
A_PROC_EXIT(assocdyop);
*ReturnedValue = (UIHASIM);
return;
} 
#undef NL

A68_VOID  XIHASIM_calculatenewdynamicaddr(A68_425 * S, A68_INT  O)
{ 
A68_INT  YIHASIM_bottom;
A68_INT  ZIHASIM_distfromprev;
A68_INT  AJHASIM_i;
A68_BOOL  BJHASIM;  /* optbool result */
A68_393  CJHASIM;  /* avoid structure result */
A68_393  DJHASIM;  /* united object - for case conformity */
A68_BOOL  EJHASIM;  /* clause result */
A68_388  FJHASIM;  /* avoid structure result */
A68_388  GJHASIM;  /* united object - for case conformity */
A68_BITS  HJHASIM;  /* clause result */
A68_BITS  IJHASIM_basereg;
A68_393  JJHASIM;  /* avoid structure result */
A68_393  KJHASIM;  /* united object - for case conformity */
A68_219  LJHASIM;  /* avoid structure result */
A68_218  MJHASIM;  /* collateral clause result */
A68_219  NJHASIM;  /* OPERATORS - mode -> union mode */
A68_218  OJHASIM;  /* collateral clause result */
A68_219  PJHASIM;  /* OPERATORS - mode -> union mode */
A68_218  QJHASIM;  /* collateral clause result */
A68_219  RJHASIM;  /* OPERATORS - mode -> union mode */
A68_217  SJHASIM;  /* collateral clause result */
A68_219  TJHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(calculatenewdynamicaddr);
 /* line 477: */
 /* line 484: */
{ 
YIHASIM_bottom = (SAHASIM_length(S)-1);
 /* line 486: */
ZIHASIM_distfromprev = 0;
 /* line 487: */
AJHASIM_i = (O+1);
 /* line 488: */
for ( ;; )
{ 
 /* line 489: */
BJHASIM = (AJHASIM_i<=YIHASIM_bottom);
if ( BJHASIM )
{ /* line 490: */
JVGASIM_typeof( (&(S->Location_stack)), AJHASIM_i, &CJHASIM );
DJHASIM = CJHASIM ;
switch ( DJHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 491: */
 /* line 492: */
{ 
ZIHASIM_distfromprev+=8;
 /* line 493: */
 /* line 494: */
 /* line 495: */
EJHASIM = A68_TRUE;
} 
break;
case 2: /* INT */
 /* line 496: */
 /* line 497: */
PVGASIM_stateof( (&(S->Location_stack)), AJHASIM_i, &FJHASIM );
GJHASIM = FJHASIM ;
switch ( GJHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
 /* line 498: */
 /* line 499: */
{ 
 /* line 500: */
ZIHASIM_distfromprev+=(QHFASIM_bytesize(BWGASIM_sizeof((&(S->Location_stack)), AJHASIM_i))+4);
 /* line 501: */
 /* line 502: */
 /* line 503: */
 /* line 504: */
EJHASIM = A68_FALSE;
} 
break;
default: 
 /* line 505: */
{ 
 /* line 506: */
ZIHASIM_distfromprev+=(QHFASIM_bytesize(BWGASIM_sizeof((&(S->Location_stack)), AJHASIM_i))+4);
 /* line 507: */
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 511: */
EJHASIM = A68_TRUE;
} 
break;
} 
break;
default: 
 /* line 512: */
{ 
ZIHASIM_distfromprev+=4;
 /* line 513: */
 /* line 514: */
 /* line 515: */
 /* line 516: */
EJHASIM = A68_FALSE;
} 
break;
} 
BJHASIM = EJHASIM;
}
if ( !(BJHASIM) ) break;
AJHASIM_i+=1;
}
 /* line 518: */
 /* line 519: */
 /* line 520: */
if ( (AJHASIM_i<=YIHASIM_bottom) )
{ 
 /* line 521: */
 /* line 522: */
HJHASIM = GBHASIM_rdest(S, AJHASIM_i);
} 
else
{ 
ZIHASIM_distfromprev+=4;
 /* line 523: */
 /* line 524: */
HJHASIM = SEGASIM_dynamicpointer;
} 
IJHASIM_basereg = HJHASIM;
 /* line 526: */
MYEASIM_maaddrir(IJHASIM_basereg, ZIHASIM_distfromprev, FVEASIM_g0, PEGASIM_tempreg3);
 /* line 528: */
 /* line 529: */
if ( (AJHASIM_i<=YIHASIM_bottom) )
{ 
 /* line 530: */
JVGASIM_typeof( (&(S->Location_stack)), AJHASIM_i, &JJHASIM );
KJHASIM = JJHASIM ;
switch ( KJHASIM.mode )
{ 
case 3: /* CHAR */
 /* line 531: */
 /* line 533: */
{ 
DFHASIM_sizeoperands( S, AJHASIM_i, &LJHASIM );
ISEASIM_using(TEEASIM_ld, LJHASIM);
 /* line 534: */
MJHASIM.Rs1 = NEGASIM_tempreg1;
MJHASIM.Imm = 31;
MJHASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(NJHASIM,mode2,2,MJHASIM));
 /* line 535: */
OJHASIM.Rs1 = NEGASIM_tempreg1;
OJHASIM.Imm = 5;
OJHASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(PJHASIM,mode2,2,OJHASIM));
 /* line 536: */
QJHASIM.Rs1 = NEGASIM_tempreg1;
QJHASIM.Imm = 2;
QJHASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(RJHASIM,mode2,2,QJHASIM));
 /* line 537: */
SJHASIM.Rs1 = PEGASIM_tempreg3;
SJHASIM.Rs2 = NEGASIM_tempreg1;
 /* line 538: */
SJHASIM.Rd = PEGASIM_tempreg3;
 /* line 539: */
 /* line 540: */
ISEASIM_using(DAEASIM_add, A_UNITE(TJHASIM,mode1,1,SJHASIM));
} 
break;
default: 
 /* line 541: */
 /* line 542: */
/*SKIP*/;
break;
} 
} 
} 
A_PROC_EXIT(calculatenewdynamicaddr);
return;
} 
#undef NL

A68_VOID  WJHASIM_loadindex(A68_425 * S, A68_INT  O)
{ 
A68_393  XJHASIM;  /* avoid structure result */
A68_393  YJHASIM;  /* united object - for case conformity */
A68_217  ZJHASIM;  /* collateral clause result */
A68_219  AKHASIM;  /* OPERATORS - mode -> union mode */
A68_219  BKHASIM;  /* avoid structure result */
A68_218  CKHASIM;  /* collateral clause result */
A68_219  DKHASIM;  /* OPERATORS - mode -> union mode */
A68_218  EKHASIM;  /* collateral clause result */
A68_219  FKHASIM;  /* OPERATORS - mode -> union mode */
A68_218  GKHASIM;  /* collateral clause result */
A68_219  HKHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loadindex);
 /* line 549: */
 /* line 550: */
JVGASIM_typeof( (&(S->Location_stack)), O, &XJHASIM );
YJHASIM = XJHASIM ;
switch ( YJHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 551: */
ZJHASIM.Rs1 = FVEASIM_g0;
ZJHASIM.Rs2 = FVEASIM_g0;
ZJHASIM.Rd = NEGASIM_tempreg1;
 /* line 552: */
ISEASIM_using(LAEASIM_or, A_UNITE(AKHASIM,mode1,1,ZJHASIM));
break;
case 2: /* INT */
 /* line 553: */
 /* line 554: */
CZEASIM_mamovir((QHFASIM_bytesize(BWGASIM_sizeof((&(S->Location_stack)), O))-4), NEGASIM_tempreg1);
break;
case 3: /* CHAR */
 /* line 555: */
 /* line 556: */
{ 
DFHASIM_sizeoperands( S, O, &BKHASIM );
ISEASIM_using(TEEASIM_ld, BKHASIM);
 /* line 557: */
CKHASIM.Rs1 = NEGASIM_tempreg1;
CKHASIM.Imm = 1;
CKHASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TAEASIM_sub, A_UNITE(DKHASIM,mode2,2,CKHASIM));
 /* line 558: */
EKHASIM.Rs1 = NEGASIM_tempreg1;
EKHASIM.Imm = 5;
EKHASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HEEASIM_sra, A_UNITE(FKHASIM,mode2,2,EKHASIM));
 /* line 559: */
GKHASIM.Rs1 = NEGASIM_tempreg1;
GKHASIM.Imm = 2;
 /* line 560: */
GKHASIM.Rd = NEGASIM_tempreg1;
 /* line 561: */
ISEASIM_using(ZDEASIM_sll, A_UNITE(HKHASIM,mode2,2,GKHASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(loadindex);
return;
} 
#undef NL

A68_VOID  KKHASIM_loopindex(A68_425 * S, A68_INT  Loop)
{ 
A68_218  LKHASIM;  /* collateral clause result */
A68_219  MKHASIM;  /* OPERATORS - mode -> union mode */
A68_238  NKHASIM;  /* avoid structure result */
A_PROC_ENTRY(loopindex);
 /* line 566: */
 /* line 567: */
{ 
LKHASIM.Rs1 = NEGASIM_tempreg1;
LKHASIM.Imm = 4;
LKHASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(MKHASIM,mode2,2,LKHASIM));
 /* line 568: */
 /* line 569: */
AYDASIM_( RZDASIM_bd, JXDASIM_pos_a, &NKHASIM );
PREASIM_using(NKHASIM, Loop);
} 
A_PROC_EXIT(loopindex);
return;
} 
#undef NL

A68_BOOL  QKHASIM_allocregisterinuse(A68_425 * S, A68_INT  O)
{ 
A68_393  RKHASIM;  /* avoid structure result */
A68_393  SKHASIM;  /* united object - for case conformity */
A68_BOOL  TKHASIM;  /* clause result */
A68_388  UKHASIM;  /* avoid structure result */
A68_388  VKHASIM;  /* avoid structure result */
A68_388  WKHASIM;  /* united object - for case conformity */
A68_382  XKHASIM_i;
A68_373  YKHASIM_c;
A68_388  ZKHASIM;  /* avoid structure result */
A68_388  ALHASIM;  /* united object - for case conformity */
A68_370  BLHASIM_ir;
A68_373  CLHASIM_c;
A_PROC_ENTRY(allocregisterinuse);
 /* line 577: */
 /* line 578: */
JVGASIM_typeof( (&(S->Location_stack)), O, &RKHASIM );
SKHASIM = RKHASIM ;
switch ( SKHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 579: */
PVGASIM_stateof( (&(S->Location_stack)), O, &UKHASIM );
TKHASIM = CPGASIM_allocregisterinuse(UKHASIM);
break;
case 2: /* INT */
 /* line 580: */
 /* line 581: */
PVGASIM_stateof( (&(S->Location_stack)), O, &VKHASIM );
WKHASIM = VKHASIM ;
switch ( WKHASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
 /* line 582: */
TKHASIM = A68_TRUE;
break;
case 1: /* STRUCT(BOOL)  */
 /* line 583: */
TKHASIM = A68_TRUE;
break;
case 5: /* STRUCT(BOOL)  */
XKHASIM_i = (WKHASIM.data.mode5);
 /* line 584: */
TKHASIM = !XKHASIM_i.Indcallinst_flag;
break;
case 2: /* STRUCT(INT,BOOL)  */
YKHASIM_c = (WKHASIM.data.mode2);
 /* line 585: */
 /* line 586: */
TKHASIM = YKHASIM_c.Register_flag;
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: /* CHAR */
 /* line 587: */
 /* line 588: */
PVGASIM_stateof( (&(S->Location_stack)), O, &ZKHASIM );
ALHASIM = ZKHASIM ;
switch ( ALHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
BLHASIM_ir = (ALHASIM.data.mode1);
 /* line 589: */
TKHASIM = !BLHASIM_ir.Ircallinst_flag;
break;
case 2: /* STRUCT(INT,BOOL)  */
CLHASIM_c = (ALHASIM.data.mode2);
 /* line 590: */
 /* line 591: */
TKHASIM = CLHASIM_c.Register_flag;
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(allocregisterinuse);
return( TKHASIM );
} 
#undef NL

A68_VOID  FLHASIM_freecopy(A68_425 * S, A68_INT  O)
{ 
A68_INT  GLHASIM_copiedloc;
A68_388  HLHASIM;  /* avoid structure result */
A68_388  ILHASIM;  /* united object - for case conformity */
A68_393  JLHASIM;  /* avoid structure result */
A68_393  KLHASIM;  /* united object - for case conformity */
A68_217  LLHASIM;  /* collateral clause result */
A68_219  MLHASIM;  /* OPERATORS - mode -> union mode */
A68_388  NLHASIM;  /* avoid structure result */
A68_413  OLHASIM;  /* avoid structure result */
A68_388  PLHASIM;  /* avoid structure result */
A68_388  QLHASIM;  /* united object - for case conformity */
A68_INT  RLHASIM_loop;
A68_217  SLHASIM;  /* avoid structure result */
A68_219  TLHASIM;  /* OPERATORS - mode -> union mode */
A68_217  ULHASIM;  /* collateral clause result */
A68_219  VLHASIM;  /* OPERATORS - mode -> union mode */
A68_370  WLHASIM;  /* avoid structure result */
A68_388  XLHASIM;  /* OPERATORS - mode -> union mode */
A68_413  YLHASIM;  /* avoid structure result */
A68_217  ZLHASIM;  /* collateral clause result */
A68_219  AMHASIM;  /* OPERATORS - mode -> union mode */
A68_388  BMHASIM;  /* avoid structure result */
A68_413  CMHASIM;  /* avoid structure result */
A68_388  DMHASIM;  /* avoid structure result */
A68_388  EMHASIM;  /* united object - for case conformity */
A68_INT  FMHASIM_loop;
A68_217  GMHASIM;  /* avoid structure result */
A68_219  HMHASIM;  /* OPERATORS - mode -> union mode */
A68_217  IMHASIM;  /* collateral clause result */
A68_219  JMHASIM;  /* OPERATORS - mode -> union mode */
A68_370  KMHASIM;  /* avoid structure result */
A68_388  LMHASIM;  /* OPERATORS - mode -> union mode */
A68_413  MMHASIM;  /* avoid structure result */
A_PROC_ENTRY(freecopy);
 /* line 597: */
 /* line 598: */
{ 
GLHASIM_copiedloc = ZAHASIM_locatecopy(S, O);
 /* line 599: */
 /* line 600: */
PVGASIM_stateof( (&(S->Location_stack)), O, &HLHASIM );
ILHASIM = HLHASIM ;
switch ( ILHASIM.mode )
{ 
case 2: /* STRUCT(INT,BOOL)  */
 /* line 601: */
 /* line 602: */
JVGASIM_typeof( (&(S->Location_stack)), O, &JLHASIM );
KLHASIM = JLHASIM ;
switch ( KLHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 603: */
 /* line 604: */
{ 
 /* line 605: */
if ( QKHASIM_allocregisterinuse(S, GLHASIM_copiedloc) )
{ 
LLHASIM.Rs1 = GBHASIM_rdest(S, GLHASIM_copiedloc);
LLHASIM.Rs2 = FVEASIM_g0;
 /* line 606: */
LLHASIM.Rd = GBHASIM_rdest(S, O);
ISEASIM_using(LAEASIM_or, A_UNITE(MLHASIM,mode1,1,LLHASIM));
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
PVGASIM_stateof( (&(S->Location_stack)), GLHASIM_copiedloc, &NLHASIM );
HWGASIM_given( O, NLHASIM, &OLHASIM );
MWGASIM_changestateof((&(S->Location_stack)), OLHASIM);
} 
break;
case 2: /* INT */
 /* line 611: */
 /* line 612: */
PVGASIM_stateof( (&(S->Location_stack)), GLHASIM_copiedloc, &PLHASIM );
QLHASIM = PLHASIM ;
switch ( QLHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
 /* line 613: */
 /* line 614: */
{ 
WJHASIM_loadindex(S, O);
 /* line 615: */
RLHASIM_loop = GLDASIM_location;
 /* line 616: */
QEHASIM_loadoperands( S, GLHASIM_copiedloc, &SLHASIM );
ISEASIM_using(TEEASIM_ld, A_UNITE(TLHASIM,mode1,1,SLHASIM));
 /* line 617: */
ULHASIM.Rs1 = GBHASIM_rdest(S, O);
ULHASIM.Rs2 = NEGASIM_tempreg1;
ULHASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(VLHASIM,mode1,1,ULHASIM));
 /* line 618: */
KKHASIM_loopindex(S, RLHASIM_loop);
 /* line 619: */
 /* line 620: */
 /* line 621: */
 /* line 622: */
IIGASIM_inregister( A68_FALSE, &WLHASIM );
HWGASIM_given( O, A_UNITE(XLHASIM,mode1,1,WLHASIM), &YLHASIM );
MWGASIM_changestateof((&(S->Location_stack)), YLHASIM);
} 
break;
case 3: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(BOOL)  */
 /* line 626: */
 /* line 627: */
{ 
 /* line 628: */
if ( QKHASIM_allocregisterinuse(S, GLHASIM_copiedloc) )
{ 
ZLHASIM.Rs1 = GBHASIM_rdest(S, GLHASIM_copiedloc);
ZLHASIM.Rs2 = FVEASIM_g0;
 /* line 629: */
ZLHASIM.Rd = GBHASIM_rdest(S, O);
ISEASIM_using(LAEASIM_or, A_UNITE(AMHASIM,mode1,1,ZLHASIM));
} 
 /* line 630: */
 /* line 631: */
 /* line 632: */
 /* line 633: */
 /* line 634: */
PVGASIM_stateof( (&(S->Location_stack)), GLHASIM_copiedloc, &BMHASIM );
HWGASIM_given( O, BMHASIM, &CMHASIM );
MWGASIM_changestateof((&(S->Location_stack)), CMHASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: /* CHAR */
 /* line 635: */
 /* line 636: */
PVGASIM_stateof( (&(S->Location_stack)), GLHASIM_copiedloc, &DMHASIM );
EMHASIM = DMHASIM ;
switch ( EMHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
 /* line 637: */
 /* line 638: */
{ 
WJHASIM_loadindex(S, O);
 /* line 639: */
FMHASIM_loop = GLDASIM_location;
 /* line 640: */
QEHASIM_loadoperands( S, GLHASIM_copiedloc, &GMHASIM );
ISEASIM_using(TEEASIM_ld, A_UNITE(HMHASIM,mode1,1,GMHASIM));
 /* line 641: */
IMHASIM.Rs1 = GBHASIM_rdest(S, O);
IMHASIM.Rs2 = NEGASIM_tempreg1;
IMHASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(JMHASIM,mode1,1,IMHASIM));
 /* line 642: */
KKHASIM_loopindex(S, FMHASIM_loop);
 /* line 643: */
 /* line 644: */
 /* line 645: */
 /* line 646: */
 /* line 647: */
 /* line 648: */
 /* line 650: */
IIGASIM_inregister( A68_FALSE, &KMHASIM );
HWGASIM_given( O, A_UNITE(LMHASIM,mode1,1,KMHASIM), &MMHASIM );
MWGASIM_changestateof((&(S->Location_stack)), MMHASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
 /* line 651: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(freecopy);
return;
} 
#undef NL

A68_VOID  PMHASIM_forceload(A68_425 * S, A68_INT  O)
{ 
A68_393  QMHASIM;  /* avoid structure result */
A68_393  RMHASIM;  /* united object - for case conformity */
A68_BOOL  SMHASIM;  /* optbool result */
A68_217  TMHASIM;  /* collateral clause result */
A68_219  UMHASIM;  /* OPERATORS - mode -> union mode */
A68_370  VMHASIM;  /* avoid structure result */
A68_388  WMHASIM;  /* OPERATORS - mode -> union mode */
A68_413  XMHASIM;  /* avoid structure result */
A68_388  YMHASIM;  /* avoid structure result */
A68_388  ZMHASIM;  /* united object - for case conformity */
A68_INT  ANHASIM_loop;
A68_217  BNHASIM;  /* avoid structure result */
A68_219  CNHASIM;  /* OPERATORS - mode -> union mode */
A68_217  DNHASIM;  /* collateral clause result */
A68_219  ENHASIM;  /* OPERATORS - mode -> union mode */
A68_370  FNHASIM;  /* avoid structure result */
A68_388  GNHASIM;  /* OPERATORS - mode -> union mode */
A68_413  HNHASIM;  /* avoid structure result */
A68_INT  INHASIM_loop;
A68_217  JNHASIM;  /* avoid structure result */
A68_219  KNHASIM;  /* OPERATORS - mode -> union mode */
A68_217  LNHASIM;  /* collateral clause result */
A68_219  MNHASIM;  /* OPERATORS - mode -> union mode */
A68_370  NNHASIM;  /* avoid structure result */
A68_388  ONHASIM;  /* OPERATORS - mode -> union mode */
A68_413  PNHASIM;  /* avoid structure result */
A68_217  QNHASIM;  /* collateral clause result */
A68_219  RNHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forceload);
 /* line 659: */
 /* line 660: */
{ 
 /* line 661: */
JVGASIM_typeof( (&(S->Location_stack)), O, &QMHASIM );
RMHASIM = QMHASIM ;
switch ( RMHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 662: */
 /* line 663: */
SMHASIM = (KBHASIM_rsource(S, O)!=GBHASIM_rdest(S, O));
if ( SMHASIM )
{ /* line 664: */
SMHASIM = (KBHASIM_rsource(S, O)!=REGASIM_callinstpointer);
}
 /* line 665: */
if ( SMHASIM )
{ 
TMHASIM.Rs1 = KBHASIM_rsource(S, O);
TMHASIM.Rs2 = FVEASIM_g0;
TMHASIM.Rd = GBHASIM_rdest(S, O);
ISEASIM_using(LAEASIM_or, A_UNITE(UMHASIM,mode1,1,TMHASIM));
 /* line 666: */
 /* line 667: */
 /* line 668: */
IIGASIM_inregister( A68_FALSE, &VMHASIM );
HWGASIM_given( O, A_UNITE(WMHASIM,mode1,1,VMHASIM), &XMHASIM );
MWGASIM_changestateof((&(S->Location_stack)), XMHASIM);
} 
break;
case 2: /* INT */
case 3: /* CHAR */
 /* line 669: */
 /* line 670: */
{ 
 /* line 671: */
PVGASIM_stateof( (&(S->Location_stack)), O, &YMHASIM );
ZMHASIM = YMHASIM ;
switch ( ZMHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
 /* line 672: */
/*SKIP*/;
break;
case 2: /* STRUCT(INT,BOOL)  */
 /* line 673: */
 /* line 674: */
{ 
WJHASIM_loadindex(S, O);
 /* line 675: */
ANHASIM_loop = GLDASIM_location;
 /* line 676: */
QEHASIM_loadoperands( S, O, &BNHASIM );
ISEASIM_using(TEEASIM_ld, A_UNITE(CNHASIM,mode1,1,BNHASIM));
 /* line 677: */
DNHASIM.Rs1 = GBHASIM_rdest(S, O);
DNHASIM.Rs2 = NEGASIM_tempreg1;
DNHASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(ENHASIM,mode1,1,DNHASIM));
 /* line 678: */
KKHASIM_loopindex(S, ANHASIM_loop);
 /* line 679: */
 /* line 680: */
 /* line 681: */
 /* line 682: */
 /* line 683: */
IIGASIM_inregister( A68_FALSE, &FNHASIM );
HWGASIM_given( O, A_UNITE(GNHASIM,mode1,1,FNHASIM), &HNHASIM );
MWGASIM_changestateof((&(S->Location_stack)), HNHASIM);
} 
break;
default: 
WJHASIM_loadindex(S, O);
 /* line 684: */
XIHASIM_calculatenewdynamicaddr(S, O);
 /* line 685: */
INHASIM_loop = GLDASIM_location;
 /* line 686: */
QEHASIM_loadoperands( S, O, &JNHASIM );
ISEASIM_using(TEEASIM_ld, A_UNITE(KNHASIM,mode1,1,JNHASIM));
 /* line 687: */
LNHASIM.Rs1 = PEGASIM_tempreg3;
LNHASIM.Rs2 = NEGASIM_tempreg1;
LNHASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(MNHASIM,mode1,1,LNHASIM));
 /* line 688: */
KKHASIM_loopindex(S, INHASIM_loop);
 /* line 689: */
 /* line 690: */
IIGASIM_inregister( A68_FALSE, &NNHASIM );
HWGASIM_given( O, A_UNITE(ONHASIM,mode1,1,NNHASIM), &PNHASIM );
MWGASIM_changestateof((&(S->Location_stack)), PNHASIM);
 /* line 691: */
QNHASIM.Rs1 = PEGASIM_tempreg3;
QNHASIM.Rs2 = FVEASIM_g0;
 /* line 693: */
QNHASIM.Rd = GBHASIM_rdest(S, O);
 /* line 694: */
 /* line 695: */
 /* line 696: */
ISEASIM_using(LAEASIM_or, A_UNITE(RNHASIM,mode1,1,QNHASIM));
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(forceload);
return;
} 
#undef NL

A68_VOID  TNHASIM_forceallload(A68_425 * S)
{ 
A68_INT  UNHASIM_i;
A68_INT  VNHASIM;  /* to part of loop */
A68_INT  WNHASIM;  /* by part of loop */
A_PROC_ENTRY(forceallload);
 /* line 704: */
VNHASIM = EZGASIM_tos;
WNHASIM = (-1);
for ( UNHASIM_i = (SAHASIM_length(S)-1);
( WNHASIM > 0 && UNHASIM_i <= VNHASIM) ||
( WNHASIM < 0 && UNHASIM_i >= VNHASIM) ||
( WNHASIM == 0 ) ;
UNHASIM_i += WNHASIM )
{ 
PMHASIM_forceload(S, UNHASIM_i);
}
A_PROC_EXIT(forceallload);
return;
} 
#undef NL

A68_VOID  YNHASIM_forceindepmem(A68_425 * S)
{ 
A68_INT  ZNHASIM_i;
A68_INT  AOHASIM;  /* to part of loop */
A68_INT  BOHASIM;  /* by part of loop */
A68_388  COHASIM;  /* avoid structure result */
A68_388  DOHASIM;  /* united object - for case conformity */
A_PROC_ENTRY(forceindepmem);
 /* line 711: */
AOHASIM = EZGASIM_tos;
BOHASIM = (-1);
for ( ZNHASIM_i = (SAHASIM_length(S)-1);
( BOHASIM > 0 && ZNHASIM_i <= AOHASIM) ||
( BOHASIM < 0 && ZNHASIM_i >= AOHASIM) ||
( BOHASIM == 0 ) ;
ZNHASIM_i += BOHASIM )
{ 
 /* line 712: */
 /* line 713: */
PVGASIM_stateof( (&(S->Location_stack)), ZNHASIM_i, &COHASIM );
DOHASIM = COHASIM ;
switch ( DOHASIM.mode )
{ 
case 5: /* STRUCT(BOOL)  */
 /* line 714: */
PMHASIM_forceload(S, ZNHASIM_i);
break;
default: 
/*SKIP*/;
break;
} 
}
A_PROC_EXIT(forceindepmem);
return;
} 
#undef NL

A68_VOID  FOHASIM_conform(A68_425 * S)
{ 
A68_INT  GOHASIM_i;
A68_INT  HOHASIM;  /* to part of loop */
A68_INT  IOHASIM;  /* by part of loop */
A_PROC_ENTRY(conform);
 /* line 723: */
HOHASIM = EZGASIM_tos;
IOHASIM = (-1);
for ( GOHASIM_i = (SAHASIM_length(S)-1);
( IOHASIM > 0 && GOHASIM_i <= HOHASIM) ||
( IOHASIM < 0 && GOHASIM_i >= HOHASIM) ||
( IOHASIM == 0 ) ;
GOHASIM_i += IOHASIM )
{ 
PMHASIM_forceload(S, GOHASIM_i);
}
A_PROC_EXIT(conform);
return;
} 
#undef NL

A_STATIC A68_VOID  KOHASIM_makewindowpushable(A68_425 * S)
{ 
A68_INT  LOHASIM_i;
A68_INT  MOHASIM;  /* to part of loop */
A68_388  NOHASIM;  /* avoid structure result */
A68_388  OOHASIM;  /* united object - for case conformity */
A68_INT  POHASIM_i;
A68_INT  QOHASIM;  /* to part of loop */
A_PROC_ENTRY(makewindowpushable);
 /* line 729: */
 /* line 730: */
if ( UHGASIM_willsaveonreserver((&(S->Rm_allocator))) )
{ 
MOHASIM = (EZGASIM_tos+19);
for ( LOHASIM_i = (EZGASIM_tos+6);
LOHASIM_i <= MOHASIM;
LOHASIM_i += 1 )
{ 
 /* line 731: */
 /* line 732: */
PVGASIM_stateof( (&(S->Location_stack)), LOHASIM_i, &NOHASIM );
OOHASIM = NOHASIM ;
switch ( OOHASIM.mode )
{ 
case 5: /* STRUCT(BOOL)  */
 /* line 733: */
PMHASIM_forceload(S, LOHASIM_i);
break;
default: 
 /* line 734: */
/*SKIP*/;
break;
} 
}
 /* line 735: */
QOHASIM = (EZGASIM_tos+5);
for ( POHASIM_i = EZGASIM_tos;
POHASIM_i <= QOHASIM;
POHASIM_i += 1 )
{ 
 /* line 736: */
 /* line 737: */
FLHASIM_freecopy(S, POHASIM_i);
}
 /* line 738: */
} 
A_PROC_EXIT(makewindowpushable);
return;
} 
#undef NL

A68_VOID  TOHASIM_pushnew(A68_425 * S, A68_INT  Length)
{ 
A68_394  UOHASIM;  /* collateral clause result */
A68_393  VOHASIM;  /* OPERATORS - mode -> union mode */
A68_370  WOHASIM;  /* avoid structure result */
A68_388  XOHASIM;  /* OPERATORS - mode -> union mode */
A68_394  YOHASIM;  /* collateral clause result */
A68_393  ZOHASIM;  /* OPERATORS - mode -> union mode */
A68_370  APHASIM;  /* avoid structure result */
A68_388  BPHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pushnew);
 /* line 744: */
 /* line 745: */
{ 
KOHASIM_makewindowpushable(S);
 /* line 746: */
 /* line 747: */
if ( (QHFASIM_bytesize(Length)==4) )
{ 
 /* line 748: */
UOHASIM.Location_type = A_UNITE(VOHASIM,mode1,1,TPGASIM_smallstacklocation);
 /* line 749: */
IIGASIM_inregister( A68_FALSE, &WOHASIM );
UOHASIM.Symbolic_state = A_UNITE(XOHASIM,mode1,1,WOHASIM);
UOHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
UOHASIM.Bit_length = Length;
 /* line 750: */
 /* line 751: */
WTGASIM_push((&(S->Location_stack)), UOHASIM);
} 
else
{ 
 /* line 752: */
YOHASIM.Location_type = A_UNITE(ZOHASIM,mode2,2,UPGASIM_largestacklocation);
 /* line 753: */
IIGASIM_inregister( A68_FALSE, &APHASIM );
YOHASIM.Symbolic_state = A_UNITE(BPHASIM,mode1,1,APHASIM);
YOHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
YOHASIM.Bit_length = Length;
 /* line 754: */
WTGASIM_push((&(S->Location_stack)), YOHASIM);
} 
 /* line 755: */
 /* line 756: */
PYGASIM_plus((&(S->Size_recorder)), QHFASIM_bytesize(Length));
} 
A_PROC_EXIT(pushnew);
return;
} 
#undef NL

A68_VOID  EPHASIM_pushnewstacklocation(A68_425 * S, A68_INT  Length)
{ 
A68_394  FPHASIM;  /* collateral clause result */
A68_393  GPHASIM;  /* OPERATORS - mode -> union mode */
A68_370  HPHASIM;  /* avoid structure result */
A68_388  IPHASIM;  /* OPERATORS - mode -> union mode */
A68_394  JPHASIM;  /* collateral clause result */
A68_393  KPHASIM;  /* OPERATORS - mode -> union mode */
A68_370  LPHASIM;  /* avoid structure result */
A68_388  MPHASIM;  /* OPERATORS - mode -> union mode */
A68_217  NPHASIM;  /* collateral clause result */
A68_219  OPHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pushnewstacklocation);
 /* line 763: */
 /* line 764: */
{ 
KOHASIM_makewindowpushable(S);
 /* line 765: */
 /* line 766: */
if ( (QHFASIM_bytesize(Length)==4) )
{ 
 /* line 767: */
FPHASIM.Location_type = A_UNITE(GPHASIM,mode1,1,TPGASIM_smallstacklocation);
 /* line 768: */
IIGASIM_inregister( A68_FALSE, &HPHASIM );
FPHASIM.Symbolic_state = A_UNITE(IPHASIM,mode1,1,HPHASIM);
FPHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
FPHASIM.Bit_length = Length;
 /* line 769: */
 /* line 770: */
WTGASIM_push((&(S->Location_stack)), FPHASIM);
} 
else
{ 
 /* line 771: */
JPHASIM.Location_type = A_UNITE(KPHASIM,mode2,2,UPGASIM_largestacklocation);
 /* line 772: */
IIGASIM_inregister( A68_FALSE, &LPHASIM );
JPHASIM.Symbolic_state = A_UNITE(MPHASIM,mode1,1,LPHASIM);
JPHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
JPHASIM.Bit_length = Length;
WTGASIM_push((&(S->Location_stack)), JPHASIM);
 /* line 773: */
XIHASIM_calculatenewdynamicaddr(S, EZGASIM_tos);
 /* line 774: */
NPHASIM.Rs1 = PEGASIM_tempreg3;
NPHASIM.Rs2 = FVEASIM_g0;
 /* line 775: */
NPHASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(OPHASIM,mode1,1,NPHASIM));
} 
 /* line 776: */
 /* line 777: */
PYGASIM_plus((&(S->Size_recorder)), QHFASIM_bytesize(Length));
} 
A_PROC_EXIT(pushnewstacklocation);
return;
} 
#undef NL

A68_VOID  QPHASIM_pushnewunknownstacklocation(A68_425 * S)
{ 
A68_394  RPHASIM;  /* collateral clause result */
A68_393  SPHASIM;  /* OPERATORS - mode -> union mode */
A68_370  TPHASIM;  /* avoid structure result */
A68_388  UPHASIM;  /* OPERATORS - mode -> union mode */
A68_217  VPHASIM;  /* collateral clause result */
A68_219  WPHASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(pushnewunknownstacklocation);
 /* line 784: */
 /* line 785: */
{ 
KOHASIM_makewindowpushable(S);
 /* line 786: */
 /* line 787: */
 /* line 788: */
RPHASIM.Location_type = A_UNITE(SPHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 789: */
IIGASIM_inregister( A68_FALSE, &TPHASIM );
RPHASIM.Symbolic_state = A_UNITE(UPHASIM,mode1,1,TPHASIM);
 /* line 790: */
RPHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
RPHASIM.Bit_length = 0;
WTGASIM_push((&(S->Location_stack)), RPHASIM);
 /* line 791: */
XIHASIM_calculatenewdynamicaddr(S, EZGASIM_tos);
 /* line 792: */
VPHASIM.Rs1 = PEGASIM_tempreg3;
VPHASIM.Rs2 = FVEASIM_g0;
 /* line 793: */
VPHASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(WPHASIM,mode1,1,VPHASIM));
} 
A_PROC_EXIT(pushnewunknownstacklocation);
return;
} 
#undef NL

A68_INT  ZPHASIM_advance(A68_425 * S, A68_328 * Ips)
{ 
A68_INT  AQHASIM_noofparams;
A68_INT  DQHASIM_i;
A68_INT  EQHASIM;  /* to part of loop */
A68_328 * FQHASIM_i;
A68_INT  GQHASIM_n;
A68_BITS  HQHASIM_outreg;
A68_393  IQHASIM;  /* avoid structure result */
A68_393  JQHASIM;  /* united object - for case conformity */
A68_BITS  KQHASIM_source;
A68_BITS  LQHASIM_dest;
A68_217  MQHASIM;  /* collateral clause result */
A68_219  NQHASIM;  /* OPERATORS - mode -> union mode */
A68_217  OQHASIM;  /* collateral clause result */
A68_219  PQHASIM;  /* OPERATORS - mode -> union mode */
A68_217  QQHASIM;  /* collateral clause result */
A68_219  RQHASIM;  /* OPERATORS - mode -> union mode */
A68_217  SQHASIM;  /* collateral clause result */
A68_219  TQHASIM;  /* OPERATORS - mode -> union mode */
A68_219  UQHASIM;  /* avoid structure result */
A68_394  VQHASIM;  /* collateral clause result */
A68_393  WQHASIM;  /* OPERATORS - mode -> union mode */
A68_370  XQHASIM;  /* avoid structure result */
A68_388  YQHASIM;  /* OPERATORS - mode -> union mode */
A68_406  ZQHASIM;  /* avoid structure result */
A68_217  ARHASIM;  /* collateral clause result */
A68_219  BRHASIM;  /* OPERATORS - mode -> union mode */
A68_219  CRHASIM;  /* avoid structure result */
A68_394  DRHASIM;  /* collateral clause result */
A68_393  ERHASIM;  /* OPERATORS - mode -> union mode */
A68_370  FRHASIM;  /* avoid structure result */
A68_388  GRHASIM;  /* OPERATORS - mode -> union mode */
A68_406  HRHASIM;  /* avoid structure result */
A68_217  IRHASIM;  /* collateral clause result */
A68_219  JRHASIM;  /* OPERATORS - mode -> union mode */
A68_217  KRHASIM;  /* collateral clause result */
A68_219  LRHASIM;  /* OPERATORS - mode -> union mode */
A68_388  MRHASIM;  /* avoid structure result */
A68_388  NRHASIM;  /* united object - for case conformity */
A68_370  ORHASIM_ir;
A68_393  TRHASIM;  /* avoid structure result */
A68_393  URHASIM;  /* united object - for case conformity */
A68_438  VRHASIM;  /* avoid structure result */
A68_438  WRHASIM;  /* united object - for case conformity */
A68_INT  XRHASIM_i;
A68_218  YRHASIM;  /* collateral clause result */
A68_219  ZRHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  ASHASIM_r;
A68_BITS  BSHASIM;  /* clause result */
A68_BITS  CSHASIM_augreg;
A68_217  DSHASIM;  /* collateral clause result */
A68_219  ESHASIM;  /* OPERATORS - mode -> union mode */
A68_217  FSHASIM;  /* collateral clause result */
A68_219  GSHASIM;  /* OPERATORS - mode -> union mode */
A68_393  JSHASIM;  /* avoid structure result */
A68_393  KSHASIM;  /* united object - for case conformity */
A68_438  LSHASIM;  /* avoid structure result */
A68_438  MSHASIM;  /* united object - for case conformity */
A68_INT  NSHASIM_i;
A68_218  OSHASIM;  /* collateral clause result */
A68_219  PSHASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  QSHASIM_r;
A68_BITS  RSHASIM;  /* clause result */
A68_BITS  SSHASIM_augreg;
A68_217  TSHASIM;  /* collateral clause result */
A68_219  USHASIM;  /* OPERATORS - mode -> union mode */
A68_INT  XSHASIM;  /* clause result */
A_PROC_ENTRY(advance);
 /* line 813: */
 /* line 815: */
{ 
AQHASIM_noofparams = UYFASIM_length(Ips);
 /* line 816: */
GJDASIM_assert(CQHASIM, (AQHASIM_noofparams<=6));
 /* line 820: */
YNHASIM_forceindepmem(S);
 /* line 824: */
EQHASIM = AQHASIM_noofparams;
for ( DQHASIM_i = 1;
DQHASIM_i <= EQHASIM;
DQHASIM_i += 1 )
{ 
 /* line 825: */
 /* line 826: */
FLHASIM_freecopy(S, ((EZGASIM_tos+DQHASIM_i)-1));
}
 /* line 828: */
 /* line 830: */
if ( ((A68_INT )GBHASIM_rdest(S, EZGASIM_tos)<((A68_INT )GWEASIM_r14-AQHASIM_noofparams)) )
{ 
 /* line 831: */
KHGASIM_savewindow((&(S->Rm_allocator)));
} 
 /* line 836: */
FQHASIM_i = Ips;
 /* line 837: */
GQHASIM_n = (AQHASIM_noofparams-1);
 /* line 838: */
for ( ;; )
{ 
 /* line 839: */
if ( !((FQHASIM_i!=GYFASIM_nilparams)) ) break;
HQHASIM_outreg = (A68_BITS )(((A68_INT )FWEASIM_o5-(AQHASIM_noofparams-1))+GQHASIM_n);
 /* line 840: */
 /* line 841: */
if ( ((*(&((&(FQHASIM_i->Head))->Sort)))==EXFASIM_unknown) )
{ 
 /* line 842: */
JVGASIM_typeof( (&(S->Location_stack)), GQHASIM_n, &IQHASIM );
JQHASIM = IQHASIM ;
switch ( JQHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 843: */
 /* line 844: */
{ 
XIHASIM_calculatenewdynamicaddr(S, GQHASIM_n);
 /* line 845: */
KQHASIM_source = KBHASIM_rsource(S, GQHASIM_n);
 /* line 846: */
LQHASIM_dest = GBHASIM_rdest(S, GQHASIM_n);
 /* line 847: */
 /* line 848: */
if ( (KQHASIM_source==REGASIM_callinstpointer) )
{ 
MQHASIM.Rs1 = KQHASIM_source;
MQHASIM.Rs2 = TEGASIM_globalpointer;
MQHASIM.Rd = LQHASIM_dest;
ISEASIM_using(TAEASIM_sub, A_UNITE(NQHASIM,mode1,1,MQHASIM));
 /* line 849: */
OQHASIM.Rs1 = PEGASIM_tempreg3;
OQHASIM.Rs2 = FVEASIM_g0;
 /* line 850: */
OQHASIM.Rd = LQHASIM_dest;
 /* line 851: */
ISEASIM_using(JFEASIM_st, A_UNITE(PQHASIM,mode1,1,OQHASIM));
} 
else
{ 
QQHASIM.Rs1 = PEGASIM_tempreg3;
QQHASIM.Rs2 = FVEASIM_g0;
 /* line 852: */
QQHASIM.Rd = KQHASIM_source;
ISEASIM_using(JFEASIM_st, A_UNITE(RQHASIM,mode1,1,QQHASIM));
} 
 /* line 853: */
SQHASIM.Rs1 = PEGASIM_tempreg3;
SQHASIM.Rs2 = FVEASIM_g0;
SQHASIM.Rd = LQHASIM_dest;
ISEASIM_using(LAEASIM_or, A_UNITE(TQHASIM,mode1,1,SQHASIM));
 /* line 854: */
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), GQHASIM_n), NEGASIM_tempreg1);
 /* line 855: */
DFHASIM_sizeoperands( S, GQHASIM_n, &UQHASIM );
ISEASIM_using(JFEASIM_st, UQHASIM);
 /* line 856: */
 /* line 857: */
VQHASIM.Location_type = A_UNITE(WQHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 858: */
IIGASIM_inregister( A68_FALSE, &XQHASIM );
VQHASIM.Symbolic_state = A_UNITE(YQHASIM,mode1,1,XQHASIM);
VQHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), GQHASIM_n);
VQHASIM.Bit_length = 0;
VUGASIM_att( VQHASIM, GQHASIM_n, &ZQHASIM );
AVGASIM_put((&(S->Location_stack)), ZQHASIM);
 /* line 859: */
ARHASIM.Rs1 = LQHASIM_dest;
ARHASIM.Rs2 = FVEASIM_g0;
 /* line 860: */
ARHASIM.Rd = HQHASIM_outreg;
 /* line 861: */
ISEASIM_using(LAEASIM_or, A_UNITE(BRHASIM,mode1,1,ARHASIM));
} 
break;
case 2: /* INT */
 /* line 862: */
 /* line 863: */
{ 
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), GQHASIM_n), NEGASIM_tempreg1);
 /* line 864: */
DFHASIM_sizeoperands( S, GQHASIM_n, &CRHASIM );
ISEASIM_using(JFEASIM_st, CRHASIM);
 /* line 865: */
 /* line 866: */
DRHASIM.Location_type = A_UNITE(ERHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 867: */
IIGASIM_inregister( A68_FALSE, &FRHASIM );
DRHASIM.Symbolic_state = A_UNITE(GRHASIM,mode1,1,FRHASIM);
DRHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), GQHASIM_n);
DRHASIM.Bit_length = 0;
VUGASIM_att( DRHASIM, GQHASIM_n, &HRHASIM );
AVGASIM_put((&(S->Location_stack)), HRHASIM);
 /* line 868: */
IRHASIM.Rs1 = GBHASIM_rdest(S, GQHASIM_n);
IRHASIM.Rs2 = FVEASIM_g0;
 /* line 869: */
IRHASIM.Rd = HQHASIM_outreg;
 /* line 870: */
ISEASIM_using(LAEASIM_or, A_UNITE(JRHASIM,mode1,1,IRHASIM));
} 
break;
case 3: /* CHAR */
 /* line 871: */
KRHASIM.Rs1 = KBHASIM_rsource(S, GQHASIM_n);
KRHASIM.Rs2 = FVEASIM_g0;
 /* line 872: */
KRHASIM.Rd = HQHASIM_outreg;
 /* line 873: */
ISEASIM_using(LAEASIM_or, A_UNITE(LRHASIM,mode1,1,KRHASIM));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
 /* line 874: */
if ( ((*(&((&(FQHASIM_i->Head))->Sort)))==GXFASIM_instanceptr) )
{ 
 /* line 875: */
PVGASIM_stateof( (&(S->Location_stack)), GQHASIM_n, &MRHASIM );
NRHASIM = MRHASIM ;
switch ( NRHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
ORHASIM_ir = (NRHASIM.data.mode1);
 /* line 877: */
 /* line 878: */
 /* line 879: */
GJDASIM_assert(QRHASIM, (ORHASIM_ir.Ircallinst_flag==A68_TRUE));
break;
default: 
 /* line 880: */
 /* line 881: */
 /* line 882: */
ZIDASIM_simfault(SRHASIM);
break;
} 
} 
else
{ 
 /* line 883: */
if ( ((*(&((&(FQHASIM_i->Head))->Sort)))==FXFASIM_fixed) )
{ 
 /* line 884: */
JVGASIM_typeof( (&(S->Location_stack)), GQHASIM_n, &TRHASIM );
URHASIM = TRHASIM ;
switch ( URHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 885: */
 /* line 886: */
{ 
 /* line 887: */
LCHASIM_source( S, GQHASIM_n, &VRHASIM );
WRHASIM = VRHASIM ;
switch ( WRHASIM.mode )
{ 
case 2: /* INT */
XRHASIM_i = (WRHASIM.data.mode2);
YRHASIM.Rs1 = FVEASIM_g0;
YRHASIM.Imm = XRHASIM_i;
YRHASIM.Rd = HQHASIM_outreg;
 /* line 888: */
ISEASIM_using(LAEASIM_or, A_UNITE(ZRHASIM,mode2,2,YRHASIM));
break;
case 1: /* BITS */
ASHASIM_r = (WRHASIM.data.mode1);
 /* line 889: */
 /* line 891: */
{ 
if ( (ASHASIM_r==REGASIM_callinstpointer) )
{ 
BSHASIM = TEGASIM_globalpointer;
} 
else
{ 
BSHASIM = FVEASIM_g0;
} 
CSHASIM_augreg = BSHASIM;
 /* line 892: */
DSHASIM.Rs1 = ASHASIM_r;
DSHASIM.Rs2 = CSHASIM_augreg;
 /* line 893: */
DSHASIM.Rd = HQHASIM_outreg;
 /* line 894: */
 /* line 895: */
 /* line 896: */
ISEASIM_using(TAEASIM_sub, A_UNITE(ESHASIM,mode1,1,DSHASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 2: /* INT */
 /* line 897: */
FSHASIM.Rs1 = KBHASIM_rsource(S, GQHASIM_n);
FSHASIM.Rs2 = FVEASIM_g0;
 /* line 898: */
FSHASIM.Rd = HQHASIM_outreg;
 /* line 899: */
ISEASIM_using(LAEASIM_or, A_UNITE(GSHASIM,mode1,1,FSHASIM));
break;
default: 
 /* line 900: */
 /* line 901: */
 /* line 902: */
ZIDASIM_simfault(ISHASIM);
break;
} 
} 
else
{ 
 /* line 903: */
 /* line 904: */
if ( (((*(&((&(FQHASIM_i->Head))->Sort)))==HXFASIM_boolean)|((*(&((&(FQHASIM_i->Head))->Sort)))==IXFASIM_integer)) )
{ 
 /* line 905: */
JVGASIM_typeof( (&(S->Location_stack)), GQHASIM_n, &JSHASIM );
KSHASIM = JSHASIM ;
switch ( KSHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 906: */
 /* line 907: */
{ 
 /* line 908: */
LCHASIM_source( S, GQHASIM_n, &LSHASIM );
MSHASIM = LSHASIM ;
switch ( MSHASIM.mode )
{ 
case 2: /* INT */
NSHASIM_i = (MSHASIM.data.mode2);
OSHASIM.Rs1 = FVEASIM_g0;
OSHASIM.Imm = NSHASIM_i;
OSHASIM.Rd = HQHASIM_outreg;
 /* line 909: */
ISEASIM_using(LAEASIM_or, A_UNITE(PSHASIM,mode2,2,OSHASIM));
break;
case 1: /* BITS */
QSHASIM_r = (MSHASIM.data.mode1);
 /* line 910: */
 /* line 912: */
{ 
if ( (QSHASIM_r==REGASIM_callinstpointer) )
{ 
RSHASIM = TEGASIM_globalpointer;
} 
else
{ 
RSHASIM = FVEASIM_g0;
} 
SSHASIM_augreg = RSHASIM;
 /* line 913: */
TSHASIM.Rs1 = QSHASIM_r;
TSHASIM.Rs2 = SSHASIM_augreg;
 /* line 914: */
TSHASIM.Rd = HQHASIM_outreg;
 /* line 915: */
 /* line 916: */
 /* line 917: */
 /* line 918: */
ISEASIM_using(TAEASIM_sub, A_UNITE(USHASIM,mode1,1,TSHASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
 /* line 919: */
 /* line 920: */
 /* line 921: */
ZIDASIM_simfault(WSHASIM);
break;
} 
} 
} 
} 
} 
 /* line 922: */
FQHASIM_i = (*(&(FQHASIM_i->Tail)));
 /* line 923: */
 /* line 924: */
GQHASIM_n = (GQHASIM_n-1);
}
 /* line 926: */
 /* line 927: */
XSHASIM = AQHASIM_noofparams;
} 
A_PROC_EXIT(advance);
return( XSHASIM );
} 
#undef NL

A68_VOID  ATHASIM_replace(A68_425 * S, A68_350  P)
{ 
A68_INT  CTHASIM;  /* YIELD */
A68_INT  ETHASIM;  /* YIELD */
A68_INT  FTHASIM;  /* YIELD */
A68_INT  GTHASIM;  /* to part of loop */
A68_INT  HTHASIM;  /* loop control */
A68_INT  ITHASIM;  /* YIELD */
A68_INT  JTHASIM;  /* YIELD */
A68_INT  KTHASIM;  /* to part of loop */
A68_INT  LTHASIM;  /* loop control */
A68_INT  MTHASIM_i;
A68_INT  NTHASIM;  /* YIELD */
A68_INT  OTHASIM;  /* to part of loop */
A68_217  PTHASIM;  /* collateral clause result */
A68_INT  QTHASIM;  /* YIELD */
A68_219  RTHASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  STHASIM;  /* optbool result */
A68_INT  UTHASIM;  /* YIELD */
A68_328 * TTHASIM_ops;
A68_INT  WTHASIM;  /* YIELD */
A68_INT  VTHASIM_n;
A68_394  XTHASIM;  /* collateral clause result */
A68_393  YTHASIM;  /* OPERATORS - mode -> union mode */
A68_370  ZTHASIM;  /* avoid structure result */
A68_388  AUHASIM;  /* OPERATORS - mode -> union mode */
A68_406  BUHASIM;  /* avoid structure result */
A68_394  CUHASIM;  /* collateral clause result */
A68_393  DUHASIM;  /* OPERATORS - mode -> union mode */
A68_370  EUHASIM;  /* avoid structure result */
A68_388  FUHASIM;  /* OPERATORS - mode -> union mode */
A68_406  GUHASIM;  /* avoid structure result */
A68_394  HUHASIM;  /* collateral clause result */
A68_393  IUHASIM;  /* OPERATORS - mode -> union mode */
A68_370  JUHASIM;  /* avoid structure result */
A68_388  KUHASIM;  /* OPERATORS - mode -> union mode */
A68_406  LUHASIM;  /* avoid structure result */
A68_394  MUHASIM;  /* collateral clause result */
A68_393  NUHASIM;  /* OPERATORS - mode -> union mode */
A68_370  OUHASIM;  /* avoid structure result */
A68_388  PUHASIM;  /* OPERATORS - mode -> union mode */
A68_406  QUHASIM;  /* avoid structure result */
A_PROC_ENTRY(replace);
 /* line 939: */
 /* line 940: */
{ 
 /* line 941: */
CTHASIM = 2 ;
GJDASIM_assert(DTHASIM, (UYFASIM_length(A_R1INDEX(P,CTHASIM))<=6));
 /* line 946: */
ETHASIM = 1 ;
FTHASIM = 2 ;
GTHASIM = (UYFASIM_length(A_R1INDEX(P,ETHASIM))-UYFASIM_length(A_R1INDEX(P,FTHASIM)));
for ( HTHASIM = 1;
HTHASIM <= GTHASIM;
HTHASIM += 1 )
{ 
IHHASIM_pop(S);
}
 /* line 947: */
ITHASIM = 2 ;
JTHASIM = 1 ;
KTHASIM = (UYFASIM_length(A_R1INDEX(P,ITHASIM))-UYFASIM_length(A_R1INDEX(P,JTHASIM)));
for ( LTHASIM = 1;
LTHASIM <= KTHASIM;
LTHASIM += 1 )
{ 
TOHASIM_pushnew(S, 32);
}
 /* line 950: */
NTHASIM = 2 ;
OTHASIM = UYFASIM_length(A_R1INDEX(P,NTHASIM));
for ( MTHASIM_i = 1;
MTHASIM_i <= OTHASIM;
MTHASIM_i += 1 )
{ 
 /* line 951: */
PTHASIM.Rs1 = (A68_BITS )((A68_INT )HWEASIM_o6-MTHASIM_i);
PTHASIM.Rs2 = FVEASIM_g0;
 /* line 952: */
QTHASIM = 2 ;
PTHASIM.Rd = GBHASIM_rdest(S, ((EZGASIM_tos+UYFASIM_length(A_R1INDEX(P,QTHASIM)))-MTHASIM_i));
ISEASIM_using(LAEASIM_or, A_UNITE(RTHASIM,mode1,1,PTHASIM));
}
 /* line 954: */
 /* line 955: */
STHASIM = ((*(&((&(S->Rm_allocator))->Window_offset)))!=0);
if ( STHASIM )
{ /* line 956: */
STHASIM = ((A68_INT )GBHASIM_rdest(S, EZGASIM_tos)>(A68_INT )AXEASIM_l7);
}
 /* line 959: */
if ( STHASIM )
{ 
 /* line 960: */
PHGASIM_restorewindow((&(S->Rm_allocator)));
} 
 /* line 962: */
UTHASIM = 2 ;
TTHASIM_ops = A_R1INDEX(P,UTHASIM);
 /* line 963: */
WTHASIM = 2 ;
VTHASIM_n = ((EZGASIM_tos+UYFASIM_length(A_R1INDEX(P,WTHASIM)))-1);
 /* line 965: */
for ( ;; )
{ 
 /* line 966: */
if ( !((TTHASIM_ops!=GYFASIM_nilparams)) ) break;
 /* line 967: */
if ( ((*(&((&(TTHASIM_ops->Head))->Sort)))==EXFASIM_unknown) )
{ 
 /* line 968: */
XTHASIM.Location_type = A_UNITE(YTHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 969: */
IIGASIM_inregister( A68_FALSE, &ZTHASIM );
XTHASIM.Symbolic_state = A_UNITE(AUHASIM,mode1,1,ZTHASIM);
XTHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), VTHASIM_n);
XTHASIM.Bit_length = 0;
 /* line 970: */
VUGASIM_att( XTHASIM, VTHASIM_n, &BUHASIM );
AVGASIM_put((&(S->Location_stack)), BUHASIM);
} 
else
{ 
 /* line 971: */
if ( ((*(&((&(TTHASIM_ops->Head))->Sort)))==GXFASIM_instanceptr) )
{ 
 /* line 972: */
CUHASIM.Location_type = A_UNITE(DUHASIM,mode1,1,TPGASIM_smallstacklocation);
 /* line 973: */
IIGASIM_inregister( A68_TRUE, &EUHASIM );
CUHASIM.Symbolic_state = A_UNITE(FUHASIM,mode1,1,EUHASIM);
CUHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), VTHASIM_n);
CUHASIM.Bit_length = 32;
 /* line 974: */
VUGASIM_att( CUHASIM, VTHASIM_n, &GUHASIM );
AVGASIM_put((&(S->Location_stack)), GUHASIM);
} 
else
{ 
 /* line 975: */
if ( (((*(&((&(TTHASIM_ops->Head))->Sort)))==FXFASIM_fixed)&((*(&((&(TTHASIM_ops->Head))->Size)))>32)) )
{ 
 /* line 976: */
HUHASIM.Location_type = A_UNITE(IUHASIM,mode2,2,UPGASIM_largestacklocation);
 /* line 977: */
IIGASIM_inregister( A68_FALSE, &JUHASIM );
HUHASIM.Symbolic_state = A_UNITE(KUHASIM,mode1,1,JUHASIM);
HUHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), VTHASIM_n);
 /* line 978: */
HUHASIM.Bit_length = (*(&((&(TTHASIM_ops->Head))->Size)));
 /* line 979: */
 /* line 980: */
VUGASIM_att( HUHASIM, VTHASIM_n, &LUHASIM );
AVGASIM_put((&(S->Location_stack)), LUHASIM);
} 
else
{ 
 /* line 981: */
MUHASIM.Location_type = A_UNITE(NUHASIM,mode1,1,TPGASIM_smallstacklocation);
 /* line 982: */
IIGASIM_inregister( A68_FALSE, &OUHASIM );
MUHASIM.Symbolic_state = A_UNITE(PUHASIM,mode1,1,OUHASIM);
MUHASIM.Alloc_register = VVGASIM_registerof((&(S->Location_stack)), VTHASIM_n);
 /* line 983: */
MUHASIM.Bit_length = (*(&((&(TTHASIM_ops->Head))->Size)));
 /* line 984: */
VUGASIM_att( MUHASIM, VTHASIM_n, &QUHASIM );
AVGASIM_put((&(S->Location_stack)), QUHASIM);
} 
} 
} 
 /* line 985: */
TTHASIM_ops = (*(&(TTHASIM_ops->Tail)));
 /* line 986: */
 /* line 987: */
VTHASIM_n-=1;
}
 /* line 988: */
} 
A_PROC_EXIT(replace);
return;
} 
#undef NL

A68_VOID  TUHASIM_compress(A68_425 * S, A68_INT  N)
{ 
A68_INT  WUHASIM_i;
A68_INT  XUHASIM;  /* to part of loop */
A68_INT  YUHASIM_i;
A68_INT  ZUHASIM;  /* to part of loop */
A68_217  AVHASIM;  /* collateral clause result */
A68_219  BVHASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CVHASIM_i;
A68_INT  DVHASIM;  /* to part of loop */
A68_217  EVHASIM;  /* collateral clause result */
A68_219  FVHASIM;  /* OPERATORS - mode -> union mode */
A68_425  GVHASIM_olds;
A68_INT  HVHASIM_i;
A68_INT  IVHASIM;  /* to part of loop */
A68_INT  JVHASIM;  /* by part of loop */
A68_393  KVHASIM;  /* avoid structure result */
A68_393  LVHASIM;  /* united object - for case conformity */
A68_388  MVHASIM;  /* avoid structure result */
A68_413  NVHASIM;  /* avoid structure result */
A68_INT  OVHASIM_loop;
A68_217  PVHASIM;  /* collateral clause result */
A68_219  QVHASIM;  /* OPERATORS - mode -> union mode */
A68_217  RVHASIM;  /* avoid structure result */
A68_219  SVHASIM;  /* OPERATORS - mode -> union mode */
A68_217  TVHASIM;  /* collateral clause result */
A68_219  UVHASIM;  /* OPERATORS - mode -> union mode */
A68_394  VVHASIM;  /* collateral clause result */
A68_393  WVHASIM;  /* OPERATORS - mode -> union mode */
A68_370  XVHASIM;  /* avoid structure result */
A68_388  YVHASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZVHASIM_loop;
A68_217  AWHASIM;  /* collateral clause result */
A68_219  BWHASIM;  /* OPERATORS - mode -> union mode */
A68_217  CWHASIM;  /* avoid structure result */
A68_219  DWHASIM;  /* OPERATORS - mode -> union mode */
A68_217  EWHASIM;  /* collateral clause result */
A68_219  FWHASIM;  /* OPERATORS - mode -> union mode */
A68_219  GWHASIM;  /* avoid structure result */
A68_219  HWHASIM;  /* avoid structure result */
A_PROC_ENTRY(compress);
 /* line 997: */
 /* line 998: */
{ 
 /* line 999: */
if ( (N!=0) )
{ 
GJDASIM_assert(VUHASIM, (N<=6));
 /* line 1001: */
XUHASIM = (N-1);
for ( WUHASIM_i = EZGASIM_tos;
WUHASIM_i <= XUHASIM;
WUHASIM_i += 1 )
{ 
 /* line 1002: */
 /* line 1003: */
PMHASIM_forceload(S, WUHASIM_i);
}
 /* line 1006: */
 /* line 1009: */
if ( (N!=SAHASIM_length(S)) )
{ 
ZUHASIM = N;
for ( YUHASIM_i = 1;
YUHASIM_i <= ZUHASIM;
YUHASIM_i += 1 )
{ 
 /* line 1010: */
AVHASIM.Rs1 = GBHASIM_rdest(S, ((EZGASIM_tos+N)-YUHASIM_i));
AVHASIM.Rs2 = FVEASIM_g0;
 /* line 1011: */
AVHASIM.Rd = (A68_BITS )((A68_INT )OXEASIM_i6-YUHASIM_i);
ISEASIM_using(LAEASIM_or, A_UNITE(BVHASIM,mode1,1,AVHASIM));
}
 /* line 1013: */
for ( ;; )
{ 
 /* line 1014: */
if ( !(((*(&((&(S->Rm_allocator))->Window_offset)))!=0)) ) break;
PHGASIM_restorewindow((&(S->Rm_allocator)));
 /* line 1015: */
DVHASIM = N;
for ( CVHASIM_i = 1;
CVHASIM_i <= DVHASIM;
CVHASIM_i += 1 )
{ 
 /* line 1016: */
EVHASIM.Rs1 = (A68_BITS )((A68_INT )HWEASIM_o6-CVHASIM_i);
EVHASIM.Rs2 = FVEASIM_g0;
 /* line 1017: */
EVHASIM.Rd = (A68_BITS )((A68_INT )OXEASIM_i6-CVHASIM_i);
ISEASIM_using(LAEASIM_or, A_UNITE(FVHASIM,mode1,1,EVHASIM));
}
 /* line 1018: */
}
 /* line 1020: */
GVHASIM_olds = (*S);
 /* line 1023: */
NAHASIM_clear(S);
 /* line 1026: */
IVHASIM = EZGASIM_tos;
JVHASIM = (-1);
for ( HVHASIM_i = (N-1);
( JVHASIM > 0 && HVHASIM_i <= IVHASIM) ||
( JVHASIM < 0 && HVHASIM_i >= IVHASIM) ||
( JVHASIM == 0 ) ;
HVHASIM_i += JVHASIM )
{ 
 /* line 1027: */
 /* line 1028: */
JVGASIM_typeof( (&((&GVHASIM_olds)->Location_stack)), HVHASIM_i, &KVHASIM );
LVHASIM = KVHASIM ;
switch ( LVHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1029: */
 /* line 1030: */
{ 
TOHASIM_pushnew(S, BWGASIM_sizeof((&((&GVHASIM_olds)->Location_stack)), HVHASIM_i));
 /* line 1031: */
 /* line 1032: */
 /* line 1033: */
 /* line 1034: */
PVGASIM_stateof( (&((&GVHASIM_olds)->Location_stack)), HVHASIM_i, &MVHASIM );
HWGASIM_given( EZGASIM_tos, MVHASIM, &NVHASIM );
MWGASIM_changestateof((&(S->Location_stack)), NVHASIM);
} 
break;
case 2: /* INT */
 /* line 1035: */
 /* line 1036: */
{ 
TOHASIM_pushnew(S, BWGASIM_sizeof((&((&GVHASIM_olds)->Location_stack)), HVHASIM_i));
 /* line 1038: */
XIHASIM_calculatenewdynamicaddr(S, EZGASIM_tos);
 /* line 1039: */
WJHASIM_loadindex(S, EZGASIM_tos);
 /* line 1040: */
OVHASIM_loop = GLDASIM_location;
 /* line 1041: */
PVHASIM.Rs1 = PEGASIM_tempreg3;
PVHASIM.Rs2 = NEGASIM_tempreg1;
PVHASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(QVHASIM,mode1,1,PVHASIM));
 /* line 1042: */
QEHASIM_loadoperands( S, HVHASIM_i, &RVHASIM );
ISEASIM_using(JFEASIM_st, A_UNITE(SVHASIM,mode1,1,RVHASIM));
 /* line 1043: */
KKHASIM_loopindex(S, OVHASIM_loop);
 /* line 1044: */
TVHASIM.Rs1 = PEGASIM_tempreg3;
TVHASIM.Rs2 = FVEASIM_g0;
 /* line 1045: */
TVHASIM.Rd = GBHASIM_rdest(S, HVHASIM_i);
 /* line 1046: */
ISEASIM_using(LAEASIM_or, A_UNITE(UVHASIM,mode1,1,TVHASIM));
} 
break;
case 3: /* CHAR */
 /* line 1047: */
 /* line 1048: */
{ 
 /* line 1049: */
 /* line 1050: */
VVHASIM.Location_type = A_UNITE(WVHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 1051: */
IIGASIM_inregister( A68_FALSE, &XVHASIM );
VVHASIM.Symbolic_state = A_UNITE(YVHASIM,mode1,1,XVHASIM);
VVHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
VVHASIM.Bit_length = 0;
WTGASIM_push((&(S->Location_stack)), VVHASIM);
 /* line 1052: */
XIHASIM_calculatenewdynamicaddr(S, EZGASIM_tos);
 /* line 1053: */
WJHASIM_loadindex((&GVHASIM_olds), HVHASIM_i);
 /* line 1054: */
ZVHASIM_loop = GLDASIM_location;
 /* line 1055: */
AWHASIM.Rs1 = PEGASIM_tempreg3;
AWHASIM.Rs2 = NEGASIM_tempreg1;
AWHASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(BWHASIM,mode1,1,AWHASIM));
 /* line 1056: */
QEHASIM_loadoperands( S, HVHASIM_i, &CWHASIM );
ISEASIM_using(JFEASIM_st, A_UNITE(DWHASIM,mode1,1,CWHASIM));
 /* line 1057: */
KKHASIM_loopindex(S, ZVHASIM_loop);
 /* line 1058: */
EWHASIM.Rs1 = PEGASIM_tempreg3;
EWHASIM.Rs2 = FVEASIM_g0;
EWHASIM.Rd = GBHASIM_rdest(S, HVHASIM_i);
ISEASIM_using(LAEASIM_or, A_UNITE(FWHASIM,mode1,1,EWHASIM));
 /* line 1059: */
DFHASIM_sizeoperands( (&GVHASIM_olds), HVHASIM_i, &GWHASIM );
ISEASIM_using(TEEASIM_ld, GWHASIM);
 /* line 1060: */
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
DFHASIM_sizeoperands( S, EZGASIM_tos, &HWHASIM );
ISEASIM_using(JFEASIM_st, HWHASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 1064: */
 /* line 1065: */
 /* line 1066: */
} 
} 
} 
A_PROC_EXIT(compress);
return;
} 
#undef NL

A68_VOID  KWHASIM_createparams(A68_425 * S, A68_328 * P)
{ 
A68_328 * LWHASIM_pc;
A68_394  MWHASIM;  /* collateral clause result */
A68_393  NWHASIM;  /* OPERATORS - mode -> union mode */
A68_370  OWHASIM;  /* avoid structure result */
A68_388  PWHASIM;  /* OPERATORS - mode -> union mode */
A68_370  QWHASIM;  /* avoid structure result */
A68_388  RWHASIM;  /* OPERATORS - mode -> union mode */
A68_413  SWHASIM;  /* avoid structure result */
A68_370  TWHASIM;  /* avoid structure result */
A68_388  UWHASIM;  /* OPERATORS - mode -> union mode */
A68_413  VWHASIM;  /* avoid structure result */
A68_370  WWHASIM;  /* avoid structure result */
A68_388  XWHASIM;  /* OPERATORS - mode -> union mode */
A68_413  YWHASIM;  /* avoid structure result */
A_PROC_ENTRY(createparams);
 /* line 1073: */
 /* line 1074: */
{ 
LWHASIM_pc = P;
 /* line 1075: */
for ( ;; )
{ 
 /* line 1076: */
if ( !((LWHASIM_pc!=GYFASIM_nilparams)) ) break;
 /* line 1077: */
if ( ((*(&((&(LWHASIM_pc->Head))->Sort)))==EXFASIM_unknown) )
{ 
 /* line 1078: */
 /* line 1079: */
MWHASIM.Location_type = A_UNITE(NWHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 1080: */
IIGASIM_inregister( A68_FALSE, &OWHASIM );
MWHASIM.Symbolic_state = A_UNITE(PWHASIM,mode1,1,OWHASIM);
MWHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
MWHASIM.Bit_length = 0;
 /* line 1081: */
WTGASIM_push((&(S->Location_stack)), MWHASIM);
} 
else
{ 
 /* line 1082: */
if ( ((*(&((&(LWHASIM_pc->Head))->Sort)))==GXFASIM_instanceptr) )
{ 
TOHASIM_pushnew(S, 32);
 /* line 1083: */
 /* line 1084: */
IIGASIM_inregister( A68_TRUE, &QWHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(RWHASIM,mode1,1,QWHASIM), &SWHASIM );
MWGASIM_changestateof((&(S->Location_stack)), SWHASIM);
} 
else
{ 
 /* line 1085: */
if ( ((*(&((&(LWHASIM_pc->Head))->Sort)))==FXFASIM_fixed) )
{ 
TOHASIM_pushnew(S, (*(&((&(LWHASIM_pc->Head))->Size))));
 /* line 1086: */
 /* line 1087: */
IIGASIM_inregister( A68_FALSE, &TWHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(UWHASIM,mode1,1,TWHASIM), &VWHASIM );
MWGASIM_changestateof((&(S->Location_stack)), VWHASIM);
} 
else
{ 
 /* line 1088: */
 /* line 1089: */
if ( (((*(&((&(LWHASIM_pc->Head))->Sort)))==HXFASIM_boolean)|((*(&((&(LWHASIM_pc->Head))->Sort)))==IXFASIM_integer)) )
{ 
TOHASIM_pushnew(S, 32);
 /* line 1090: */
 /* line 1091: */
IIGASIM_inregister( A68_FALSE, &WWHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(XWHASIM,mode1,1,WWHASIM), &YWHASIM );
MWGASIM_changestateof((&(S->Location_stack)), YWHASIM);
} 
} 
} 
} 
 /* line 1092: */
 /* line 1093: */
LWHASIM_pc = (*(&(LWHASIM_pc->Tail)));
}
 /* line 1094: */
} 
A_PROC_EXIT(createparams);
return;
} 
#undef NL

A68_VOID  BXHASIM_createspec(A68_425 * S, A68_328 * P)
{ 
A68_328 * CXHASIM_pc;
A68_394  DXHASIM;  /* collateral clause result */
A68_393  EXHASIM;  /* OPERATORS - mode -> union mode */
A68_370  FXHASIM;  /* avoid structure result */
A68_388  GXHASIM;  /* OPERATORS - mode -> union mode */
A68_370  HXHASIM;  /* avoid structure result */
A68_388  IXHASIM;  /* OPERATORS - mode -> union mode */
A68_413  JXHASIM;  /* avoid structure result */
A_PROC_ENTRY(createspec);
 /* line 1104: */
 /* line 1105: */
{ 
NAHASIM_clear(S);
 /* line 1106: */
CXHASIM_pc = P;
 /* line 1107: */
for ( ;; )
{ 
 /* line 1108: */
if ( !((CXHASIM_pc!=GYFASIM_nilparams)) ) break;
 /* line 1109: */
if ( ((*(&((&(CXHASIM_pc->Head))->Sort)))==EXFASIM_unknown) )
{ 
 /* line 1110: */
 /* line 1111: */
DXHASIM.Location_type = A_UNITE(EXHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 1112: */
IIGASIM_inregister( A68_FALSE, &FXHASIM );
DXHASIM.Symbolic_state = A_UNITE(GXHASIM,mode1,1,FXHASIM);
DXHASIM.Alloc_register = XHGASIM_reserver((&(S->Rm_allocator)));
DXHASIM.Bit_length = 0;
 /* line 1113: */
WTGASIM_push((&(S->Location_stack)), DXHASIM);
} 
else
{ 
 /* line 1114: */
if ( ((*(&((&(CXHASIM_pc->Head))->Sort)))==GXFASIM_instanceptr) )
{ 
TOHASIM_pushnew(S, 32);
 /* line 1115: */
 /* line 1116: */
IIGASIM_inregister( A68_TRUE, &HXHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(IXHASIM,mode1,1,HXHASIM), &JXHASIM );
MWGASIM_changestateof((&(S->Location_stack)), JXHASIM);
} 
else
{ 
 /* line 1117: */
if ( ((*(&((&(CXHASIM_pc->Head))->Sort)))==FXFASIM_fixed) )
{ 
 /* line 1118: */
TOHASIM_pushnew(S, (*(&((&(CXHASIM_pc->Head))->Size))));
} 
} 
} 
 /* line 1119: */
 /* line 1120: */
CXHASIM_pc = (*(&(CXHASIM_pc->Tail)));
}
 /* line 1121: */
} 
A_PROC_EXIT(createspec);
return;
} 
#undef NL

A68_328 * LXHASIM_derivespec(A68_425 * S)
{ 
A68_328 * MXHASIM_result;
A68_INT  NXHASIM_i;
A68_INT  OXHASIM;  /* to part of loop */
A68_393  PXHASIM;  /* avoid structure result */
A68_393  QXHASIM;  /* united object - for case conformity */
A68_388  RXHASIM;  /* avoid structure result */
A68_388  SXHASIM;  /* united object - for case conformity */
A68_370  TXHASIM_ir;
A68_328  UXHASIM;  /* collateral clause result */
A68_328 * VXHASIM;  /* YIELD */
A68_328  WXHASIM;  /* collateral clause result */
A68_328 * XXHASIM;  /* YIELD */
A68_328  YXHASIM;  /* collateral clause result */
A68_328 * ZXHASIM;  /* YIELD */
A68_328  AYHASIM;  /* collateral clause result */
A68_328 * BYHASIM;  /* YIELD */
A68_328  CYHASIM;  /* collateral clause result */
A68_328 * DYHASIM;  /* YIELD */
A68_328 * EYHASIM;  /* clause result */
A_PROC_ENTRY(derivespec);
 /* line 1128: */
 /* line 1129: */
{ 
MXHASIM_result = (A68_328 *)A68_NIL;
 /* line 1130: */
OXHASIM = (SAHASIM_length(S)-1);
for ( NXHASIM_i = EZGASIM_tos;
NXHASIM_i <= OXHASIM;
NXHASIM_i += 1 )
{ 
 /* line 1131: */
 /* line 1132: */
JVGASIM_typeof( (&(S->Location_stack)), NXHASIM_i, &PXHASIM );
QXHASIM = PXHASIM ;
switch ( QXHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1133: */
 /* line 1134: */
PVGASIM_stateof( (&(S->Location_stack)), NXHASIM_i, &RXHASIM );
SXHASIM = RXHASIM ;
switch ( SXHASIM.mode )
{ 
case 1: /* STRUCT(BOOL)  */
TXHASIM_ir = (SXHASIM.data.mode1);
 /* line 1135: */
 /* line 1136: */
if ( TXHASIM_ir.Ircallinst_flag )
{ 
UXHASIM.Head.Sort = GXFASIM_instanceptr;
UXHASIM.Head.Size = 32;
 /* line 1137: */
UXHASIM.Tail = MXHASIM_result;
 /* line 1138: */
VXHASIM = A_HEAP(A68_328 ) ;
(*VXHASIM) = UXHASIM ;
MXHASIM_result = VXHASIM;
} 
else
{ 
WXHASIM.Head.Sort = FXFASIM_fixed;
WXHASIM.Head.Size = BWGASIM_sizeof((&(S->Location_stack)), NXHASIM_i);
 /* line 1139: */
WXHASIM.Tail = MXHASIM_result;
 /* line 1140: */
 /* line 1141: */
XXHASIM = A_HEAP(A68_328 ) ;
(*XXHASIM) = WXHASIM ;
MXHASIM_result = XXHASIM;
} 
break;
default: 
YXHASIM.Head.Sort = FXFASIM_fixed;
YXHASIM.Head.Size = BWGASIM_sizeof((&(S->Location_stack)), NXHASIM_i);
 /* line 1142: */
YXHASIM.Tail = MXHASIM_result;
 /* line 1143: */
ZXHASIM = A_HEAP(A68_328 ) ;
(*ZXHASIM) = YXHASIM ;
MXHASIM_result = ZXHASIM;
break;
} 
break;
case 2: /* INT */
 /* line 1144: */
AYHASIM.Head.Sort = FXFASIM_fixed;
AYHASIM.Head.Size = BWGASIM_sizeof((&(S->Location_stack)), NXHASIM_i);
AYHASIM.Tail = MXHASIM_result;
 /* line 1145: */
BYHASIM = A_HEAP(A68_328 ) ;
(*BYHASIM) = AYHASIM ;
MXHASIM_result = BYHASIM;
break;
case 3: /* CHAR */
 /* line 1146: */
CYHASIM.Head.Sort = EXFASIM_unknown;
CYHASIM.Head.Size = 0;
 /* line 1147: */
CYHASIM.Tail = MXHASIM_result;
 /* line 1148: */
DYHASIM = A_HEAP(A68_328 ) ;
(*DYHASIM) = CYHASIM ;
MXHASIM_result = DYHASIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 1149: */
 /* line 1150: */
EYHASIM = MXHASIM_result;
} 
A_PROC_EXIT(derivespec);
return( EYHASIM );
} 
#undef NL

A68_VOID  HYHASIM_local(A68_425 * Stack, A68_INT  N)
{ 
A68_393  IYHASIM;  /* avoid structure result */
A68_393  JYHASIM;  /* united object - for case conformity */
A68_388  KYHASIM;  /* avoid structure result */
A68_388  LYHASIM;  /* avoid structure result */
A68_413  MYHASIM;  /* avoid structure result */
A68_373  PYHASIM;  /* avoid structure result */
A68_388  QYHASIM;  /* OPERATORS - mode -> union mode */
A68_413  RYHASIM;  /* avoid structure result */
A68_373  UYHASIM;  /* avoid structure result */
A68_388  VYHASIM;  /* OPERATORS - mode -> union mode */
A68_413  WYHASIM;  /* avoid structure result */
A68_394  XYHASIM;  /* collateral clause result */
A68_393  YYHASIM;  /* OPERATORS - mode -> union mode */
A68_373  ZYHASIM;  /* avoid structure result */
A68_388  AZHASIM;  /* OPERATORS - mode -> union mode */
A68_217  DZHASIM;  /* collateral clause result */
A68_219  EZHASIM;  /* OPERATORS - mode -> union mode */
A68_219  FZHASIM;  /* avoid structure result */
A68_219  GZHASIM;  /* avoid structure result */
A_PROC_ENTRY(local);
 /* line 1155: */
 /* line 1158: */
{ 
 /* line 1159: */
JVGASIM_typeof( (&(Stack->Location_stack)), N, &IYHASIM );
JYHASIM = IYHASIM ;
switch ( JYHASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1160: */
 /* line 1161: */
{ 
EPHASIM_pushnewstacklocation(Stack, BWGASIM_sizeof((&(Stack->Location_stack)), N));
 /* line 1162: */
 /* line 1163: */
PVGASIM_stateof( (&(Stack->Location_stack)), (N+1), &KYHASIM );
if ( LPGASIM_callinstpointerinuse(KYHASIM) )
{ 
 /* line 1164: */
 /* line 1165: */
PVGASIM_stateof( (&(Stack->Location_stack)), (N+1), &LYHASIM );
HWGASIM_given( EZGASIM_tos, LYHASIM, &MYHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), MYHASIM);
} 
else
{ 
 /* line 1166: */
GJDASIM_assert(OYHASIM, ((A68_INT )GBHASIM_rdest(Stack, (N+1))<=(A68_INT )MXEASIM_i5));
 /* line 1167: */
 /* line 1168: */
 /* line 1169: */
 /* line 1171: */
BJGASIM_copy( (N+1), A68_FALSE, &PYHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(QYHASIM,mode2,2,PYHASIM), &RYHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), RYHASIM);
} 
} 
break;
case 2: /* INT */
 /* line 1172: */
 /* line 1173: */
{ 
PMHASIM_forceload(Stack, N);
 /* line 1174: */
EPHASIM_pushnewstacklocation(Stack, BWGASIM_sizeof((&(Stack->Location_stack)), N));
 /* line 1175: */
 /* line 1176: */
GJDASIM_assert(TYHASIM, ((A68_INT )GBHASIM_rdest(Stack, (N+1))<=(A68_INT )MXEASIM_i5));
 /* line 1177: */
 /* line 1178: */
 /* line 1180: */
BJGASIM_copy( (N+1), A68_TRUE, &UYHASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(VYHASIM,mode2,2,UYHASIM), &WYHASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), WYHASIM);
} 
break;
case 3: /* CHAR */
 /* line 1181: */
 /* line 1182: */
{ 
PMHASIM_forceload(Stack, N);
 /* line 1183: */
 /* line 1184: */
 /* line 1185: */
XYHASIM.Location_type = A_UNITE(YYHASIM,mode3,3,VPGASIM_unknownstacklocation);
 /* line 1186: */
BJGASIM_copy( (N+1), A68_TRUE, &ZYHASIM );
XYHASIM.Symbolic_state = A_UNITE(AZHASIM,mode2,2,ZYHASIM);
XYHASIM.Alloc_register = XHGASIM_reserver((&(Stack->Rm_allocator)));
XYHASIM.Bit_length = 0;
WTGASIM_push((&(Stack->Location_stack)), XYHASIM);
 /* line 1187: */
 /* line 1188: */
GJDASIM_assert(CZHASIM, ((A68_INT )GBHASIM_rdest(Stack, (N+1))<=(A68_INT )MXEASIM_i5));
 /* line 1189: */
XIHASIM_calculatenewdynamicaddr(Stack, EZGASIM_tos);
 /* line 1190: */
DZHASIM.Rs1 = PEGASIM_tempreg3;
DZHASIM.Rs2 = FVEASIM_g0;
DZHASIM.Rd = GBHASIM_rdest(Stack, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(EZHASIM,mode1,1,DZHASIM));
 /* line 1191: */
DFHASIM_sizeoperands( Stack, (N+1), &FZHASIM );
ISEASIM_using(TEEASIM_ld, FZHASIM);
 /* line 1192: */
 /* line 1193: */
 /* line 1194: */
 /* line 1195: */
DFHASIM_sizeoperands( Stack, EZGASIM_tos, &GZHASIM );
ISEASIM_using(JFEASIM_st, GZHASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(local);
return;
} 
#undef NL

A68_VOID  JZHASIM_global(A68_425 * Stack, A68_INT  W)
{ 
A68_219  MZHASIM;  /* avoid structure result */
A_PROC_ENTRY(global);
 /* line 1201: */
 /* line 1203: */
{ 
GJDASIM_assert(LZHASIM, (W==4));
 /* line 1205: */
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1207: */
 /* line 1208: */
QDHASIM_smallind( Stack, EZGASIM_tos, &MZHASIM );
ISEASIM_using(TEEASIM_ld, MZHASIM);
} 
A_PROC_EXIT(global);
return;
} 
#undef NL

A68_VOID  PZHASIM_att(A68_282  Ip, A68_INT  N, A68_458  *ReturnedValue)
{ 
A68_458  QZHASIM;  /* collateral clause result */
A68_458  RZHASIM;  /* clause result */
A_PROC_ENTRY(att);
 /* line 1215: */
QZHASIM.W = Ip.Len;
QZHASIM.V = Ip.Off;
QZHASIM.A = N;
RZHASIM = QZHASIM;
A_PROC_EXIT(att);
*ReturnedValue = (RZHASIM);
return;
} 
#undef NL
 /* line 1218: */

A68_VOID  UZHASIM_store(A68_425 * Stack, A68_458  Ip)
{ 
A68_219  VZHASIM;  /* avoid structure result */
A68_219  WZHASIM;  /* united object - for case conformity */
A68_218  XZHASIM_rir;
A68_218  YZHASIM;  /* collateral clause result */
A68_219  ZZHASIM;  /* clause result */
A68_219  AAIASIM;  /* OPERATORS - mode -> union mode */
A68_217  BAIASIM_rrr;
A68_217  CAIASIM;  /* collateral clause result */
A68_219  DAIASIM;  /* OPERATORS - mode -> union mode */
A68_219  EAIASIM_ops;
A68_219  FAIASIM;  /* avoid structure result */
A68_INT  GAIASIM_loop;
A68_217  HAIASIM;  /* avoid structure result */
A68_219  IAIASIM;  /* OPERATORS - mode -> union mode */
A68_217  JAIASIM;  /* collateral clause result */
A68_219  KAIASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(store);
 /* line 1223: */
 /* line 1225: */
{ 
YNHASIM_forceindepmem(Stack);
 /* line 1226: */
HGHASIM_transmutesmall(Stack, Ip.A);
 /* line 1228: */
 /* line 1232: */
if ( (Ip.W<=4) )
{ 
 /* line 1233: */
QDHASIM_smallind( Stack, Ip.A, &VZHASIM );
WZHASIM = VZHASIM ;
switch ( WZHASIM.mode )
{ 
case 2: /* STRUCT(BITS,INT,BITS)  */
XZHASIM_rir = (WZHASIM.data.mode2);
YZHASIM.Rs1 = XZHASIM_rir.Rs1;
YZHASIM.Imm = XZHASIM_rir.Imm;
YZHASIM.Rd = KBHASIM_rsource(Stack, Ip.V);
 /* line 1234: */
ZZHASIM = A_UNITE(AAIASIM,mode2,2,YZHASIM);
break;
case 1: /* STRUCT(BITS,BITS,BITS)  */
BAIASIM_rrr = (WZHASIM.data.mode1);
CAIASIM.Rs1 = BAIASIM_rrr.Rs1;
CAIASIM.Rs2 = BAIASIM_rrr.Rs2;
 /* line 1235: */
CAIASIM.Rd = KBHASIM_rsource(Stack, Ip.V);
ZZHASIM = A_UNITE(DAIASIM,mode1,1,CAIASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
EAIASIM_ops = ZZHASIM;
 /* line 1236: */
 /* line 1237: */
 /* line 1239: */
ISEASIM_using(JFEASIM_st, EAIASIM_ops);
} 
else
{ 
QDHASIM_smallind( Stack, Ip.A, &FAIASIM );
ISEASIM_using(DAEASIM_add, FAIASIM);
 /* line 1240: */
WJHASIM_loadindex(Stack, Ip.V);
 /* line 1241: */
GAIASIM_loop = GLDASIM_location;
 /* line 1242: */
QEHASIM_loadoperands( Stack, Ip.V, &HAIASIM );
ISEASIM_using(TEEASIM_ld, A_UNITE(IAIASIM,mode1,1,HAIASIM));
 /* line 1243: */
JAIASIM.Rs1 = KBHASIM_rsource(Stack, Ip.A);
JAIASIM.Rs2 = NEGASIM_tempreg1;
JAIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(KAIASIM,mode1,1,JAIASIM));
 /* line 1244: */
 /* line 1245: */
KKHASIM_loopindex(Stack, GAIASIM_loop);
} 
 /* line 1247: */
IHHASIM_pop(Stack);
 /* line 1249: */
IHHASIM_pop(Stack);
} 
A_PROC_EXIT(store);
return;
} 
#undef NL

A68_VOID  NAIASIM_bstring(A68_425 * Stack, A68_INT  W)
{ 
A68_219  QAIASIM;  /* avoid structure result */
A68_BITS  RAIASIM_source;
A68_388  SAIASIM;  /* avoid structure result */
A68_388  TAIASIM;  /* united object - for case conformity */
A68_376  UAIASIM_bc;
A68_INT  VAIASIM_offset;
A68_INT  WAIASIM;  /* ADICOPS - MOD */
A68_INT  XAIASIM;  /* ADICOPS - MOD */
A68_BITS  YAIASIM_dest;
A68_217  ZAIASIM;  /* collateral clause result */
A68_219  ABIASIM;  /* OPERATORS - mode -> union mode */
A68_218  BBIASIM;  /* collateral clause result */
A68_219  CBIASIM;  /* OPERATORS - mode -> union mode */
A68_218  DBIASIM;  /* collateral clause result */
A68_219  EBIASIM;  /* OPERATORS - mode -> union mode */
A68_218  FBIASIM;  /* collateral clause result */
A68_219  GBIASIM;  /* OPERATORS - mode -> union mode */
A68_217  HBIASIM;  /* collateral clause result */
A68_219  IBIASIM;  /* OPERATORS - mode -> union mode */
A68_218  JBIASIM;  /* collateral clause result */
A68_219  KBIASIM;  /* OPERATORS - mode -> union mode */
A68_218  LBIASIM;  /* collateral clause result */
A68_219  MBIASIM;  /* OPERATORS - mode -> union mode */
A68_217  NBIASIM;  /* collateral clause result */
A68_219  OBIASIM;  /* OPERATORS - mode -> union mode */
A68_416  PBIASIM;  /* avoid structure result */
A68_370  QBIASIM;  /* avoid structure result */
A68_388  RBIASIM;  /* OPERATORS - mode -> union mode */
A68_413  SBIASIM;  /* avoid structure result */
A68_INT  TBIASIM;  /* ADICOPS - MOD */
A68_INT  UBIASIM;  /* ADICOPS - MOD */
A68_BOOL  VBIASIM;  /* optbool result */
A68_217  WBIASIM;  /* collateral clause result */
A68_219  XBIASIM;  /* OPERATORS - mode -> union mode */
A68_394  YBIASIM;  /* collateral clause result */
A68_393  ZBIASIM;  /* OPERATORS - mode -> union mode */
A68_388  ACIASIM;  /* avoid structure result */
A68_382  BCIASIM;  /* avoid structure result */
A68_388  CCIASIM;  /* OPERATORS - mode -> union mode */
A68_406  DCIASIM;  /* avoid structure result */
A68_211  ECIASIM_start;
A68_217  FCIASIM;  /* collateral clause result */
A68_219  GCIASIM;  /* OPERATORS - mode -> union mode */
A68_217  HCIASIM;  /* collateral clause result */
A68_219  ICIASIM;  /* OPERATORS - mode -> union mode */
A68_218  JCIASIM;  /* collateral clause result */
A68_219  KCIASIM;  /* OPERATORS - mode -> union mode */
A68_218  LCIASIM;  /* collateral clause result */
A68_INT  MCIASIM;  /* ADICOPS - MOD */
A68_INT  NCIASIM;  /* ADICOPS - MOD */
A68_INT  OCIASIM;  /* ADICOPS - MOD */
A68_INT  PCIASIM;  /* ADICOPS - MOD */
A68_INT  QCIASIM;  /* ADICOPS - MOD */
A68_219  RCIASIM;  /* OPERATORS - mode -> union mode */
A68_217  SCIASIM;  /* collateral clause result */
A68_219  TCIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  UCIASIM_loop;
A68_217  VCIASIM;  /* collateral clause result */
A68_219  WCIASIM;  /* OPERATORS - mode -> union mode */
A68_218  XCIASIM;  /* collateral clause result */
A68_219  YCIASIM;  /* OPERATORS - mode -> union mode */
A68_236  ZCIASIM;  /* avoid structure result */
A68_217  ADIASIM;  /* collateral clause result */
A68_219  BDIASIM;  /* OPERATORS - mode -> union mode */
A68_217  CDIASIM;  /* collateral clause result */
A68_219  DDIASIM;  /* OPERATORS - mode -> union mode */
A68_218  EDIASIM;  /* collateral clause result */
A68_219  FDIASIM;  /* OPERATORS - mode -> union mode */
A68_218  GDIASIM;  /* collateral clause result */
A68_INT  HDIASIM;  /* ADICOPS - MOD */
A68_INT  IDIASIM;  /* ADICOPS - MOD */
A68_INT  JDIASIM;  /* ADICOPS - MOD */
A68_INT  KDIASIM;  /* ADICOPS - MOD */
A68_INT  LDIASIM;  /* ADICOPS - MOD */
A68_INT  MDIASIM;  /* ADICOPS - MOD */
A68_219  NDIASIM;  /* OPERATORS - mode -> union mode */
A68_217  ODIASIM;  /* collateral clause result */
A68_219  PDIASIM;  /* OPERATORS - mode -> union mode */
A68_236  QDIASIM;  /* avoid structure result */
A68_218  RDIASIM;  /* collateral clause result */
A68_219  SDIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  TDIASIM_loop;
A68_217  UDIASIM;  /* collateral clause result */
A68_219  VDIASIM;  /* OPERATORS - mode -> union mode */
A68_218  WDIASIM;  /* collateral clause result */
A68_219  XDIASIM;  /* OPERATORS - mode -> union mode */
A68_217  YDIASIM;  /* collateral clause result */
A68_219  ZDIASIM;  /* OPERATORS - mode -> union mode */
A68_217  AEIASIM;  /* collateral clause result */
A68_219  BEIASIM;  /* OPERATORS - mode -> union mode */
A68_218  CEIASIM;  /* collateral clause result */
A68_219  DEIASIM;  /* OPERATORS - mode -> union mode */
A68_236  EEIASIM;  /* avoid structure result */
A68_218  FEIASIM;  /* collateral clause result */
A68_219  GEIASIM;  /* OPERATORS - mode -> union mode */
A68_394  HEIASIM;  /* collateral clause result */
A68_393  IEIASIM;  /* OPERATORS - mode -> union mode */
A68_370  JEIASIM;  /* avoid structure result */
A68_388  KEIASIM;  /* OPERATORS - mode -> union mode */
A68_406  LEIASIM;  /* avoid structure result */
A68_BITS  MEIASIM_offset;
A68_218  NEIASIM;  /* collateral clause result */
A68_219  OEIASIM;  /* OPERATORS - mode -> union mode */
A68_218  PEIASIM;  /* collateral clause result */
A68_219  QEIASIM;  /* OPERATORS - mode -> union mode */
A68_217  REIASIM;  /* collateral clause result */
A68_219  SEIASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  TEIASIM_dest;
A68_211  UEIASIM_end;
A68_218  VEIASIM;  /* collateral clause result */
A68_219  WEIASIM;  /* OPERATORS - mode -> union mode */
A68_217  XEIASIM;  /* collateral clause result */
A68_219  YEIASIM;  /* OPERATORS - mode -> union mode */
A68_217  ZEIASIM;  /* collateral clause result */
A68_219  AFIASIM;  /* OPERATORS - mode -> union mode */
A68_218  BFIASIM;  /* collateral clause result */
A68_219  CFIASIM;  /* OPERATORS - mode -> union mode */
A68_238  DFIASIM;  /* avoid structure result */
A68_218  EFIASIM;  /* collateral clause result */
A68_219  FFIASIM;  /* OPERATORS - mode -> union mode */
A68_217  GFIASIM;  /* collateral clause result */
A68_219  HFIASIM;  /* OPERATORS - mode -> union mode */
A68_217  IFIASIM;  /* collateral clause result */
A68_219  JFIASIM;  /* OPERATORS - mode -> union mode */
A68_217  KFIASIM;  /* collateral clause result */
A68_219  LFIASIM;  /* OPERATORS - mode -> union mode */
A68_218  MFIASIM;  /* collateral clause result */
A68_219  NFIASIM;  /* OPERATORS - mode -> union mode */
A68_218  OFIASIM;  /* collateral clause result */
A68_219  PFIASIM;  /* OPERATORS - mode -> union mode */
A68_217  QFIASIM;  /* collateral clause result */
A68_219  RFIASIM;  /* OPERATORS - mode -> union mode */
A68_416  SFIASIM;  /* avoid structure result */
A68_370  TFIASIM;  /* avoid structure result */
A68_388  UFIASIM;  /* OPERATORS - mode -> union mode */
A68_413  VFIASIM;  /* avoid structure result */
A68_211  WFIASIM_start;
A68_BITS  XFIASIM_offset;
A68_BITS  YFIASIM_source;
A68_BITS  ZFIASIM_rboffset;
A68_BITS  AGIASIM_lboffset;
A68_BITS  BGIASIM_dest;
A68_217  CGIASIM;  /* collateral clause result */
A68_219  DGIASIM;  /* OPERATORS - mode -> union mode */
A68_217  EGIASIM;  /* collateral clause result */
A68_219  FGIASIM;  /* OPERATORS - mode -> union mode */
A68_217  GGIASIM;  /* collateral clause result */
A68_219  HGIASIM;  /* OPERATORS - mode -> union mode */
A68_217  IGIASIM;  /* collateral clause result */
A68_219  JGIASIM;  /* OPERATORS - mode -> union mode */
A68_217  KGIASIM;  /* collateral clause result */
A68_219  LGIASIM;  /* OPERATORS - mode -> union mode */
A68_218  MGIASIM;  /* collateral clause result */
A68_219  NGIASIM;  /* OPERATORS - mode -> union mode */
A68_218  OGIASIM;  /* collateral clause result */
A68_INT  PGIASIM;  /* ADICOPS - MOD */
A68_INT  QGIASIM;  /* ADICOPS - MOD */
A68_INT  RGIASIM;  /* ADICOPS - MOD */
A68_INT  SGIASIM;  /* ADICOPS - MOD */
A68_INT  TGIASIM;  /* ADICOPS - MOD */
A68_219  UGIASIM;  /* OPERATORS - mode -> union mode */
A68_236  VGIASIM;  /* avoid structure result */
A68_217  WGIASIM;  /* collateral clause result */
A68_219  XGIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YGIASIM_loop;
A68_217  ZGIASIM;  /* collateral clause result */
A68_219  AHIASIM;  /* OPERATORS - mode -> union mode */
A68_217  BHIASIM;  /* collateral clause result */
A68_219  CHIASIM;  /* OPERATORS - mode -> union mode */
A68_218  DHIASIM;  /* collateral clause result */
A68_219  EHIASIM;  /* OPERATORS - mode -> union mode */
A68_236  FHIASIM;  /* avoid structure result */
A68_217  GHIASIM;  /* collateral clause result */
A68_219  HHIASIM;  /* OPERATORS - mode -> union mode */
A68_217  IHIASIM;  /* collateral clause result */
A68_219  JHIASIM;  /* OPERATORS - mode -> union mode */
A68_217  KHIASIM;  /* collateral clause result */
A68_219  LHIASIM;  /* OPERATORS - mode -> union mode */
A68_218  MHIASIM;  /* collateral clause result */
A68_219  NHIASIM;  /* OPERATORS - mode -> union mode */
A68_236  OHIASIM;  /* avoid structure result */
A68_217  PHIASIM;  /* collateral clause result */
A68_219  QHIASIM;  /* OPERATORS - mode -> union mode */
A68_394  RHIASIM;  /* collateral clause result */
A68_393  SHIASIM;  /* OPERATORS - mode -> union mode */
A68_370  THIASIM;  /* avoid structure result */
A68_388  UHIASIM;  /* OPERATORS - mode -> union mode */
A68_406  VHIASIM;  /* avoid structure result */
A_PROC_ENTRY(bstring);
 /* line 1254: */
 /* line 1256: */
{ 
 /* line 1257: */
HGHASIM_transmutesmall(Stack, OAIASIM_addr);
 /* line 1258: */
HGHASIM_transmutesmall(Stack, PAIASIM_boffset);
 /* line 1259: */
FLHASIM_freecopy(Stack, OAIASIM_addr);
 /* line 1261: */
QDHASIM_smallind( Stack, OAIASIM_addr, &QAIASIM );
ISEASIM_using(DAEASIM_add, QAIASIM);
 /* line 1263: */
RAIASIM_source = KBHASIM_rsource(Stack, OAIASIM_addr);
 /* line 1265: */
 /* line 1266: */
PVGASIM_stateof( (&(Stack->Location_stack)), PAIASIM_boffset, &SAIASIM );
TAIASIM = SAIASIM ;
switch ( TAIASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
UAIASIM_bc = (TAIASIM.data.mode3);
 /* line 1267: */
 /* line 1268: */
{ 
VAIASIM_offset = FFFASIM_integer(UAIASIM_bc.Constant);
 /* line 1269: */
 /* line 1270: */
if ( (VAIASIM_offset>31) )
{ 
MYEASIM_maaddrir(RAIASIM_source, ((VAIASIM_offset/32)*4), NEGASIM_tempreg1, RAIASIM_source);
 /* line 1271: */
 /* line 1272: */
XAIASIM = 32 ;
VAIASIM_offset = A_MOD(VAIASIM_offset,XAIASIM,WAIASIM);
} 
 /* line 1274: */
YAIASIM_dest = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1276: */
 /* line 1278: */
if ( (W<=32) )
{ 
ZAIASIM.Rs1 = RAIASIM_source;
ZAIASIM.Rs2 = FVEASIM_g0;
ZAIASIM.Rd = YAIASIM_dest;
ISEASIM_using(TEEASIM_ld, A_UNITE(ABIASIM,mode1,1,ZAIASIM));
 /* line 1279: */
if ( (VAIASIM_offset>0) )
{ 
BBIASIM.Rs1 = YAIASIM_dest;
BBIASIM.Imm = VAIASIM_offset;
BBIASIM.Rd = YAIASIM_dest;
ISEASIM_using(ZDEASIM_sll, A_UNITE(CBIASIM,mode2,2,BBIASIM));
} 
 /* line 1280: */
 /* line 1281: */
if ( ((W+VAIASIM_offset)>32) )
{ 
DBIASIM.Rs1 = RAIASIM_source;
DBIASIM.Imm = 4;
DBIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TEEASIM_ld, A_UNITE(EBIASIM,mode2,2,DBIASIM));
 /* line 1282: */
FBIASIM.Rs1 = NEGASIM_tempreg1;
FBIASIM.Imm = (32-VAIASIM_offset);
FBIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DEEASIM_srl, A_UNITE(GBIASIM,mode2,2,FBIASIM));
 /* line 1283: */
HBIASIM.Rs1 = NEGASIM_tempreg1;
HBIASIM.Rs2 = YAIASIM_dest;
 /* line 1284: */
HBIASIM.Rd = YAIASIM_dest;
ISEASIM_using(LAEASIM_or, A_UNITE(IBIASIM,mode1,1,HBIASIM));
} 
 /* line 1285: */
 /* line 1286: */
if ( (W!=32) )
{ 
JBIASIM.Rs1 = FVEASIM_g0;
JBIASIM.Imm = (-1);
JBIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(KBIASIM,mode2,2,JBIASIM));
 /* line 1287: */
LBIASIM.Rs1 = NEGASIM_tempreg1;
LBIASIM.Imm = (32-W);
LBIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(MBIASIM,mode2,2,LBIASIM));
 /* line 1288: */
NBIASIM.Rs1 = YAIASIM_dest;
NBIASIM.Rs2 = NEGASIM_tempreg1;
 /* line 1289: */
NBIASIM.Rd = YAIASIM_dest;
ISEASIM_using(HAEASIM_and, A_UNITE(OBIASIM,mode1,1,NBIASIM));
} 
 /* line 1290: */
IHHASIM_pop(Stack);
 /* line 1291: */
SWGASIM_givenn( EZGASIM_tos, W, &PBIASIM );
XWGASIM_changesizeof((&(Stack->Location_stack)), PBIASIM);
 /* line 1292: */
 /* line 1293: */
IIGASIM_inregister( A68_FALSE, &QBIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(RBIASIM,mode1,1,QBIASIM), &SBIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), SBIASIM);
} 
else
{ 
UBIASIM = 32 ;
VBIASIM = (A_MOD(W,UBIASIM,TBIASIM)==0);
if ( VBIASIM )
{VBIASIM = (VAIASIM_offset==0);
}
 /* line 1296: */
if ( VBIASIM )
{ 
 /* line 1297: */
if ( (RAIASIM_source!=REGASIM_callinstpointer) )
{ 
WBIASIM.Rs1 = RAIASIM_source;
WBIASIM.Rs2 = FVEASIM_g0;
 /* line 1298: */
WBIASIM.Rd = YAIASIM_dest;
ISEASIM_using(LAEASIM_or, A_UNITE(XBIASIM,mode1,1,WBIASIM));
} 
 /* line 1299: */
IHHASIM_pop(Stack);
 /* line 1300: */
 /* line 1301: */
YBIASIM.Location_type = A_UNITE(ZBIASIM,mode2,2,UPGASIM_largestacklocation);
 /* line 1302: */
 /* line 1303: */
PVGASIM_stateof( (&(Stack->Location_stack)), EZGASIM_tos, &ACIASIM );
NLGASIM_indirected( LPGASIM_callinstpointerinuse(ACIASIM), &BCIASIM );
YBIASIM.Symbolic_state = A_UNITE(CCIASIM,mode5,5,BCIASIM);
YBIASIM.Alloc_register = VVGASIM_registerof((&(Stack->Location_stack)), EZGASIM_tos);
YBIASIM.Bit_length = W;
 /* line 1304: */
 /* line 1306: */
VUGASIM_att( YBIASIM, EZGASIM_tos, &DCIASIM );
AVGASIM_put((&(Stack->Location_stack)), DCIASIM);
} 
else
{ 
 /* line 1308: */
XIHASIM_calculatenewdynamicaddr(Stack, FZGASIM_tos1);
 /* line 1309: */
FCIASIM.Rs1 = PEGASIM_tempreg3;
FCIASIM.Rs2 = FVEASIM_g0;
FCIASIM.Rd = YAIASIM_dest;
ISEASIM_using(LAEASIM_or, A_UNITE(GCIASIM,mode1,1,FCIASIM));
 /* line 1310: */
CZEASIM_mamovir((QHFASIM_bytesize((W+VAIASIM_offset))-4), NEGASIM_tempreg1);
 /* line 1312: */
 /* line 1314: */
if ( (VAIASIM_offset==0) )
{ 
HCIASIM.Rs1 = RAIASIM_source;
HCIASIM.Rs2 = NEGASIM_tempreg1;
HCIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(ICIASIM,mode1,1,HCIASIM));
 /* line 1315: */
JCIASIM.Rs1 = FVEASIM_g0;
JCIASIM.Imm = (-1);
JCIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(LAEASIM_or, A_UNITE(KCIASIM,mode2,2,JCIASIM));
 /* line 1316: */
LCIASIM.Rs1 = PEGASIM_tempreg3;
NCIASIM = 32 ;
PCIASIM = (32-A_MOD(W,NCIASIM,MCIASIM)) ;
QCIASIM = 32 ;
LCIASIM.Imm = A_MOD(PCIASIM,QCIASIM,OCIASIM);
LCIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(ZDEASIM_sll, A_UNITE(RCIASIM,mode2,2,LCIASIM));
 /* line 1317: */
SCIASIM.Rs1 = OEGASIM_tempreg2;
SCIASIM.Rs2 = PEGASIM_tempreg3;
SCIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(HAEASIM_and, A_UNITE(TCIASIM,mode1,1,SCIASIM));
 /* line 1319: */
UCIASIM_loop = GLDASIM_location;
 /* line 1320: */
VCIASIM.Rs1 = YAIASIM_dest;
VCIASIM.Rs2 = NEGASIM_tempreg1;
VCIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(JFEASIM_st, A_UNITE(WCIASIM,mode1,1,VCIASIM));
 /* line 1321: */
XCIASIM.Rs1 = NEGASIM_tempreg1;
XCIASIM.Imm = 4;
XCIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(YCIASIM,mode2,2,XCIASIM));
 /* line 1322: */
VXDASIM_( FZDASIM_b, JXDASIM_pos_a, &ZCIASIM );
YQEASIM_using(ZCIASIM, UCIASIM_loop);
 /* line 1323: */
ADIASIM.Rs1 = RAIASIM_source;
ADIASIM.Rs2 = NEGASIM_tempreg1;
 /* line 1324: */
ADIASIM.Rd = OEGASIM_tempreg2;
 /* line 1326: */
ISEASIM_using(TEEASIM_ld, A_UNITE(BDIASIM,mode1,1,ADIASIM));
} 
else
{ 
CDIASIM.Rs1 = RAIASIM_source;
CDIASIM.Rs2 = NEGASIM_tempreg1;
CDIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(DDIASIM,mode1,1,CDIASIM));
 /* line 1327: */
EDIASIM.Rs1 = FVEASIM_g0;
EDIASIM.Imm = (-1);
EDIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(LAEASIM_or, A_UNITE(FDIASIM,mode2,2,EDIASIM));
 /* line 1328: */
GDIASIM.Rs1 = PEGASIM_tempreg3;
IDIASIM = (VAIASIM_offset+W) ;
JDIASIM = 32 ;
LDIASIM = A_MOD(IDIASIM,JDIASIM,HDIASIM) ;
MDIASIM = 32 ;
GDIASIM.Imm = (32-A_MOD(LDIASIM,MDIASIM,KDIASIM));
GDIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(ZDEASIM_sll, A_UNITE(NDIASIM,mode2,2,GDIASIM));
 /* line 1329: */
ODIASIM.Rs1 = PEGASIM_tempreg3;
ODIASIM.Rs2 = OEGASIM_tempreg2;
ODIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(HAEASIM_and, A_UNITE(PDIASIM,mode1,1,ODIASIM));
 /* line 1330: */
VXDASIM_( FZDASIM_b, HWDASIM_a, &QDIASIM );
HREASIM_using(QDIASIM, (&ECIASIM_start));
 /* line 1331: */
RDIASIM.Rs1 = OEGASIM_tempreg2;
RDIASIM.Imm = VAIASIM_offset;
RDIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(ZDEASIM_sll, A_UNITE(SDIASIM,mode2,2,RDIASIM));
 /* line 1333: */
TDIASIM_loop = GLDASIM_location;
 /* line 1334: */
UDIASIM.Rs1 = RAIASIM_source;
UDIASIM.Rs2 = NEGASIM_tempreg1;
UDIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(VDIASIM,mode1,1,UDIASIM));
 /* line 1335: */
WDIASIM.Rs1 = OEGASIM_tempreg2;
WDIASIM.Imm = VAIASIM_offset;
WDIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(ZDEASIM_sll, A_UNITE(XDIASIM,mode2,2,WDIASIM));
 /* line 1336: */
YDIASIM.Rs1 = PEGASIM_tempreg3;
YDIASIM.Rs2 = QEGASIM_tempreg4;
YDIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(LAEASIM_or, A_UNITE(ZDIASIM,mode1,1,YDIASIM));
 /* line 1338: */
TXEASIM_fixmachinelabel(ECIASIM_start);
 /* line 1339: */
AEIASIM.Rs1 = YAIASIM_dest;
AEIASIM.Rs2 = NEGASIM_tempreg1;
AEIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(JFEASIM_st, A_UNITE(BEIASIM,mode1,1,AEIASIM));
 /* line 1340: */
CEIASIM.Rs1 = NEGASIM_tempreg1;
CEIASIM.Imm = 4;
CEIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(DEIASIM,mode2,2,CEIASIM));
 /* line 1341: */
VXDASIM_( FZDASIM_b, JXDASIM_pos_a, &EEIASIM );
YQEASIM_using(EEIASIM, TDIASIM_loop);
 /* line 1342: */
FEIASIM.Rs1 = OEGASIM_tempreg2;
FEIASIM.Imm = (32-VAIASIM_offset);
 /* line 1343: */
FEIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(DEEASIM_srl, A_UNITE(GEIASIM,mode2,2,FEIASIM));
} 
 /* line 1344: */
IHHASIM_pop(Stack);
 /* line 1345: */
 /* line 1346: */
HEIASIM.Location_type = A_UNITE(IEIASIM,mode2,2,UPGASIM_largestacklocation);
 /* line 1347: */
IIGASIM_inregister( A68_FALSE, &JEIASIM );
HEIASIM.Symbolic_state = A_UNITE(KEIASIM,mode1,1,JEIASIM);
HEIASIM.Alloc_register = VVGASIM_registerof((&(Stack->Location_stack)), EZGASIM_tos);
HEIASIM.Bit_length = W;
 /* line 1348: */
 /* line 1349: */
 /* line 1350: */
 /* line 1351: */
VUGASIM_att( HEIASIM, EZGASIM_tos, &LEIASIM );
AVGASIM_put((&(Stack->Location_stack)), LEIASIM);
} 
} 
} 
break;
default: 
MEIASIM_offset = KBHASIM_rsource(Stack, PAIASIM_boffset);
 /* line 1352: */
NEIASIM.Rs1 = MEIASIM_offset;
NEIASIM.Imm = 5;
NEIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DEEASIM_srl, A_UNITE(OEIASIM,mode2,2,NEIASIM));
 /* line 1353: */
PEIASIM.Rs1 = NEGASIM_tempreg1;
PEIASIM.Imm = 2;
PEIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(QEIASIM,mode2,2,PEIASIM));
 /* line 1354: */
REIASIM.Rs1 = NEGASIM_tempreg1;
REIASIM.Rs2 = RAIASIM_source;
REIASIM.Rd = RAIASIM_source;
ISEASIM_using(DAEASIM_add, A_UNITE(SEIASIM,mode1,1,REIASIM));
 /* line 1357: */
 /* line 1359: */
if ( (W<=32) )
{ 
TEIASIM_dest = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1360: */
 /* line 1361: */
VEIASIM.Rs1 = MEIASIM_offset;
VEIASIM.Imm = (A68_INT )0X1fU;
VEIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HAEASIM_and, A_UNITE(WEIASIM,mode2,2,VEIASIM));
 /* line 1362: */
XEIASIM.Rs1 = RAIASIM_source;
XEIASIM.Rs2 = FVEASIM_g0;
XEIASIM.Rd = TEIASIM_dest;
ISEASIM_using(TEEASIM_ld, A_UNITE(YEIASIM,mode1,1,XEIASIM));
 /* line 1363: */
ZEIASIM.Rs1 = TEIASIM_dest;
ZEIASIM.Rs2 = NEGASIM_tempreg1;
ZEIASIM.Rd = TEIASIM_dest;
ISEASIM_using(ZDEASIM_sll, A_UNITE(AFIASIM,mode1,1,ZEIASIM));
 /* line 1364: */
BFIASIM.Rs1 = NEGASIM_tempreg1;
BFIASIM.Imm = (32-W);
BFIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(CFIASIM,mode2,2,BFIASIM));
 /* line 1365: */
AYDASIM_( RZDASIM_bd, WWDASIM_leu_a, &DFIASIM );
ASEASIM_using(DFIASIM, (&UEIASIM_end));
 /* line 1366: */
EFIASIM.Rs1 = RAIASIM_source;
EFIASIM.Imm = 4;
EFIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(FFIASIM,mode2,2,EFIASIM));
 /* line 1367: */
GFIASIM.Rs1 = FVEASIM_g0;
GFIASIM.Rs2 = NEGASIM_tempreg1;
GFIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TAEASIM_sub, A_UNITE(HFIASIM,mode1,1,GFIASIM));
 /* line 1368: */
IFIASIM.Rs1 = OEGASIM_tempreg2;
IFIASIM.Rs2 = NEGASIM_tempreg1;
IFIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(DEEASIM_srl, A_UNITE(JFIASIM,mode1,1,IFIASIM));
 /* line 1369: */
KFIASIM.Rs1 = OEGASIM_tempreg2;
KFIASIM.Rs2 = TEIASIM_dest;
KFIASIM.Rd = TEIASIM_dest;
ISEASIM_using(LAEASIM_or, A_UNITE(LFIASIM,mode1,1,KFIASIM));
 /* line 1370: */
TXEASIM_fixmachinelabel(UEIASIM_end);
 /* line 1372: */
 /* line 1373: */
if ( (W!=32) )
{ 
MFIASIM.Rs1 = FVEASIM_g0;
MFIASIM.Imm = (-1);
MFIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(NFIASIM,mode2,2,MFIASIM));
 /* line 1374: */
OFIASIM.Rs1 = NEGASIM_tempreg1;
OFIASIM.Imm = (32-W);
OFIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(ZDEASIM_sll, A_UNITE(PFIASIM,mode2,2,OFIASIM));
 /* line 1375: */
QFIASIM.Rs1 = TEIASIM_dest;
QFIASIM.Rs2 = NEGASIM_tempreg1;
 /* line 1376: */
QFIASIM.Rd = TEIASIM_dest;
ISEASIM_using(HAEASIM_and, A_UNITE(RFIASIM,mode1,1,QFIASIM));
} 
 /* line 1377: */
IHHASIM_pop(Stack);
 /* line 1378: */
SWGASIM_givenn( EZGASIM_tos, W, &SFIASIM );
XWGASIM_changesizeof((&(Stack->Location_stack)), SFIASIM);
 /* line 1379: */
 /* line 1380: */
 /* line 1382: */
IIGASIM_inregister( A68_FALSE, &TFIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(UFIASIM,mode1,1,TFIASIM), &VFIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), VFIASIM);
} 
else
{ 
 /* line 1385: */
TOHASIM_pushnew(Stack, 32);
TOHASIM_pushnew(Stack, 32);
 /* line 1386: */
XFIASIM_offset = KBHASIM_rsource(Stack, (EZGASIM_tos+3));
 /* line 1387: */
YFIASIM_source = KBHASIM_rsource(Stack, (EZGASIM_tos+2));
 /* line 1388: */
ZFIASIM_rboffset = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1389: */
AGIASIM_lboffset = GBHASIM_rdest(Stack, EZGASIM_tos);
 /* line 1390: */
BGIASIM_dest = GBHASIM_rdest(Stack, (EZGASIM_tos+3));
 /* line 1391: */
CGIASIM.Rs1 = GBHASIM_rdest(Stack, PAIASIM_boffset);
CGIASIM.Rs2 = FVEASIM_g0;
CGIASIM.Rd = AGIASIM_lboffset;
ISEASIM_using(LAEASIM_or, A_UNITE(DGIASIM,mode1,1,CGIASIM));
 /* line 1393: */
EGIASIM.Rs1 = FVEASIM_g0;
EGIASIM.Rs2 = AGIASIM_lboffset;
EGIASIM.Rd = ZFIASIM_rboffset;
ISEASIM_using(TAEASIM_sub, A_UNITE(FGIASIM,mode1,1,EGIASIM));
 /* line 1395: */
XIHASIM_calculatenewdynamicaddr(Stack, FZGASIM_tos1);
 /* line 1396: */
GGIASIM.Rs1 = PEGASIM_tempreg3;
GGIASIM.Rs2 = FVEASIM_g0;
GGIASIM.Rd = BGIASIM_dest;
ISEASIM_using(LAEASIM_or, A_UNITE(HGIASIM,mode1,1,GGIASIM));
 /* line 1398: */
CZEASIM_mamovir((QHFASIM_bytesize(W)-4), NEGASIM_tempreg1);
 /* line 1399: */
IGIASIM.Rs1 = YFIASIM_source;
IGIASIM.Rs2 = NEGASIM_tempreg1;
IGIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(JGIASIM,mode1,1,IGIASIM));
 /* line 1400: */
KGIASIM.Rs1 = OEGASIM_tempreg2;
KGIASIM.Rs2 = AGIASIM_lboffset;
KGIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(ZDEASIM_sll, A_UNITE(LGIASIM,mode1,1,KGIASIM));
 /* line 1401: */
MGIASIM.Rs1 = FVEASIM_g0;
MGIASIM.Imm = (-1);
MGIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(LAEASIM_or, A_UNITE(NGIASIM,mode2,2,MGIASIM));
 /* line 1402: */
OGIASIM.Rs1 = PEGASIM_tempreg3;
QGIASIM = 32 ;
SGIASIM = (32-A_MOD(W,QGIASIM,PGIASIM)) ;
TGIASIM = 32 ;
OGIASIM.Imm = A_MOD(SGIASIM,TGIASIM,RGIASIM);
OGIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(ZDEASIM_sll, A_UNITE(UGIASIM,mode2,2,OGIASIM));
 /* line 1403: */
VXDASIM_( FZDASIM_b, HWDASIM_a, &VGIASIM );
HREASIM_using(VGIASIM, (&WFIASIM_start));
 /* line 1404: */
WGIASIM.Rs1 = QEGASIM_tempreg4;
WGIASIM.Rs2 = PEGASIM_tempreg3;
WGIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(HAEASIM_and, A_UNITE(XGIASIM,mode1,1,WGIASIM));
 /* line 1406: */
YGIASIM_loop = GLDASIM_location;
 /* line 1407: */
ZGIASIM.Rs1 = YFIASIM_source;
ZGIASIM.Rs2 = NEGASIM_tempreg1;
ZGIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(AHIASIM,mode1,1,ZGIASIM));
 /* line 1408: */
BHIASIM.Rs1 = OEGASIM_tempreg2;
BHIASIM.Rs2 = AGIASIM_lboffset;
BHIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(ZDEASIM_sll, A_UNITE(CHIASIM,mode1,1,BHIASIM));
 /* line 1411: */
DHIASIM.Rs1 = ZFIASIM_rboffset;
DHIASIM.Imm = 32;
DHIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(EHIASIM,mode2,2,DHIASIM));
 /* line 1412: */
VXDASIM_( FZDASIM_b, XWDASIM_lu_a, &FHIASIM );
YQEASIM_using(FHIASIM, (GLDASIM_location+12));
 /* line 1413: */
GHIASIM.Rs1 = PEGASIM_tempreg3;
GHIASIM.Rs2 = QEGASIM_tempreg4;
GHIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(LAEASIM_or, A_UNITE(HHIASIM,mode1,1,GHIASIM));
 /* line 1414: */
IHIASIM.Rs1 = PEGASIM_tempreg3;
IHIASIM.Rs2 = FVEASIM_g0;
IHIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(LAEASIM_or, A_UNITE(JHIASIM,mode1,1,IHIASIM));
 /* line 1416: */
TXEASIM_fixmachinelabel(WFIASIM_start);
 /* line 1417: */
KHIASIM.Rs1 = BGIASIM_dest;
KHIASIM.Rs2 = NEGASIM_tempreg1;
KHIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(JFEASIM_st, A_UNITE(LHIASIM,mode1,1,KHIASIM));
 /* line 1418: */
MHIASIM.Rs1 = NEGASIM_tempreg1;
MHIASIM.Imm = 4;
MHIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(NHIASIM,mode2,2,MHIASIM));
 /* line 1419: */
VXDASIM_( FZDASIM_b, JXDASIM_pos_a, &OHIASIM );
YQEASIM_using(OHIASIM, YGIASIM_loop);
 /* line 1420: */
PHIASIM.Rs1 = OEGASIM_tempreg2;
PHIASIM.Rs2 = ZFIASIM_rboffset;
PHIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(DEEASIM_srl, A_UNITE(QHIASIM,mode1,1,PHIASIM));
 /* line 1422: */
IHHASIM_pop(Stack);
IHHASIM_pop(Stack);
 /* line 1423: */
IHHASIM_pop(Stack);
 /* line 1424: */
 /* line 1425: */
RHIASIM.Location_type = A_UNITE(SHIASIM,mode2,2,UPGASIM_largestacklocation);
 /* line 1426: */
IIGASIM_inregister( A68_FALSE, &THIASIM );
RHIASIM.Symbolic_state = A_UNITE(UHIASIM,mode1,1,THIASIM);
RHIASIM.Alloc_register = VVGASIM_registerof((&(Stack->Location_stack)), EZGASIM_tos);
RHIASIM.Bit_length = W;
 /* line 1427: */
 /* line 1428: */
 /* line 1429: */
VUGASIM_att( RHIASIM, EZGASIM_tos, &VHIASIM );
AVGASIM_put((&(Stack->Location_stack)), VHIASIM);
} 
break;
} 
} 
A_PROC_EXIT(bstring);
return;
} 
#undef NL

A68_VOID  XHIASIM_add(A68_425 * Stack)
{ 
A68_388  ZHIASIM;  /* avoid structure result */
A68_388  AIIASIM;  /* avoid structure result */
A68_388  BIIASIM;  /* avoid structure result */
A68_388  YHIASIM_r;
A68_388  CIIASIM;  /* united object - for case conformity */
A68_BITS  DIIASIM_t2;
A68_388  EIIASIM;  /* avoid structure result */
A68_388  FIIASIM;  /* avoid structure result */
A68_388  GIIASIM;  /* avoid structure result */
A68_388  HIIASIM;  /* united object - for case conformity */
A68_219  IIIASIM;  /* avoid structure result */
A68_214  JIIASIM;  /* collateral clause result */
A68_216  KIIASIM;  /* OPERATORS - mode -> union mode */
A68_241  LIIASIM;  /* avoid structure result */
A68_413  MIIASIM;  /* avoid structure result */
A_PROC_ENTRY(add);
 /* line 1434: */
 /* line 1435: */
{ 
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 1436: */
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1438: */
 /* line 1439: */
PVGASIM_stateof( (&(Stack->Location_stack)), EZGASIM_tos, &ZHIASIM );
PVGASIM_stateof( (&(Stack->Location_stack)), FZGASIM_tos1, &AIIASIM );
INGASIM_( AIIASIM, ZHIASIM, &BIIASIM );
YHIASIM_r = BIIASIM;
 /* line 1440: */
 /* line 1441: */
CIIASIM = YHIASIM_r ;
switch ( CIIASIM.mode )
{ 
case 7: /* VOID */
 /* line 1442: */
 /* line 1443: */
{ 
DIIASIM_t2 = KBHASIM_rsource(Stack, FZGASIM_tos1);
 /* line 1444: */
 /* line 1445: */
 /* line 1446: */
 /* line 1447: */
 /* line 1448: */
PVGASIM_stateof( (&(Stack->Location_stack)), EZGASIM_tos, &EIIASIM );
PVGASIM_stateof( (&(Stack->Location_stack)), FZGASIM_tos1, &FIIASIM );
INGASIM_( FIIASIM, EIIASIM, &GIIASIM );
YHIASIM_r = GIIASIM;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1450: */
 /* line 1451: */
HIIASIM = YHIASIM_r ;
switch ( HIIASIM.mode )
{ 
case 7: /* VOID */
 /* line 1452: */
 /* line 1453: */
{ 
WFHASIM_forcenocallinst(Stack, FZGASIM_tos1);
 /* line 1454: */
WFHASIM_forcenocallinst(Stack, EZGASIM_tos);
 /* line 1455: */
BIHASIM_assocdyop( Stack, &IIIASIM );
ISEASIM_using(RBEASIM_addcc, IIIASIM);
 /* line 1456: */
JIIASIM.Rs1 = FVEASIM_g0;
JIIASIM.Imm = CPEASIM_t_int_overflow;
FYDASIM_( LOEASIM_t, GWDASIM_vs, &LIIASIM );
BTEASIM_using(LIIASIM, A_UNITE(KIIASIM,mode2,2,JIIASIM));
 /* line 1457: */
 /* line 1458: */
 /* line 1459: */
 /* line 1460: */
IHHASIM_pop(Stack);
} 
break;
default: 
 /* line 1461: */
{ 
HWGASIM_given( FZGASIM_tos1, YHIASIM_r, &MIIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), MIIASIM);
 /* line 1462: */
 /* line 1463: */
 /* line 1464: */
 /* line 1465: */
IHHASIM_pop(Stack);
} 
break;
} 
} 
A_PROC_EXIT(add);
return;
} 
#undef NL

A68_VOID  OIIASIM_not(A68_425 * Stack)
{ 
A68_388  QIIASIM;  /* avoid structure result */
A68_388  RIIASIM;  /* avoid structure result */
A68_388  PIIASIM_r;
A68_388  SIIASIM;  /* united object - for case conformity */
A68_219  TIIASIM;  /* avoid structure result */
A68_413  UIIASIM;  /* avoid structure result */
A_PROC_ENTRY(not);
 /* line 1471: */
 /* line 1472: */
{ 
PVGASIM_stateof( (&(Stack->Location_stack)), EZGASIM_tos, &QIIASIM );
UOGASIM_not( QIIASIM, &RIIASIM );
PIIASIM_r = RIIASIM;
 /* line 1473: */
 /* line 1474: */
SIIASIM = PIIASIM_r ;
switch ( SIIASIM.mode )
{ 
case 7: /* VOID */
 /* line 1475: */
 /* line 1476: */
 /* line 1477: */
SGHASIM_monop( Stack, &TIIASIM );
ISEASIM_using(FBEASIM_xnor, TIIASIM);
break;
default: 
 /* line 1478: */
 /* line 1479: */
HWGASIM_given( EZGASIM_tos, PIIASIM_r, &UIIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), UIIASIM);
break;
} 
} 
A_PROC_EXIT(not);
return;
} 
#undef NL

A68_VOID  WIIASIM_shl(A68_425 * Stack)
{ 
A68_BITS  XIIASIM_rs;
A68_BITS  YIIASIM_rd;
A68_438  ZIIASIM;  /* avoid structure result */
A68_438  AJIASIM;  /* united object - for case conformity */
A68_BITS  BJIASIM_r;
A68_211  CJIASIM_fi;
A68_211  DJIASIM_fi1;
A68_211  EJIASIM_fi2;
A68_211  FJIASIM_islessthan32;
A68_211  GJIASIM_isinrange;
A68_218  HJIASIM;  /* collateral clause result */
A68_219  IJIASIM;  /* OPERATORS - mode -> union mode */
A68_236  JJIASIM;  /* avoid structure result */
A68_218  KJIASIM;  /* collateral clause result */
A68_219  LJIASIM;  /* OPERATORS - mode -> union mode */
A68_217  MJIASIM;  /* collateral clause result */
A68_219  NJIASIM;  /* OPERATORS - mode -> union mode */
A68_238  OJIASIM;  /* avoid structure result */
A68_236  PJIASIM;  /* avoid structure result */
A68_217  QJIASIM;  /* collateral clause result */
A68_219  RJIASIM;  /* OPERATORS - mode -> union mode */
A68_217  SJIASIM;  /* collateral clause result */
A68_219  TJIASIM;  /* OPERATORS - mode -> union mode */
A68_217  UJIASIM;  /* collateral clause result */
A68_219  VJIASIM;  /* OPERATORS - mode -> union mode */
A68_238  WJIASIM;  /* avoid structure result */
A68_236  XJIASIM;  /* avoid structure result */
A68_217  YJIASIM;  /* collateral clause result */
A68_219  ZJIASIM;  /* OPERATORS - mode -> union mode */
A68_217  AKIASIM;  /* collateral clause result */
A68_219  BKIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CKIASIM_i;
A68_217  DKIASIM;  /* collateral clause result */
A68_219  EKIASIM;  /* OPERATORS - mode -> union mode */
A68_218  FKIASIM;  /* collateral clause result */
A68_219  GKIASIM;  /* OPERATORS - mode -> union mode */
A68_217  HKIASIM;  /* collateral clause result */
A68_219  IKIASIM;  /* OPERATORS - mode -> union mode */
A68_217  JKIASIM;  /* collateral clause result */
A68_219  KKIASIM;  /* OPERATORS - mode -> union mode */
A68_218  LKIASIM;  /* collateral clause result */
A68_219  MKIASIM;  /* OPERATORS - mode -> union mode */
A68_370  NKIASIM;  /* avoid structure result */
A68_388  OKIASIM;  /* OPERATORS - mode -> union mode */
A68_413  PKIASIM;  /* avoid structure result */
A_PROC_ENTRY(shl);
 /* line 1486: */
 /* line 1487: */
{ 
 /* line 1489: */
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1490: */
XIIASIM_rs = KBHASIM_rsource(Stack, FZGASIM_tos1);
 /* line 1491: */
YIIASIM_rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1493: */
 /* line 1494: */
LCHASIM_source( Stack, EZGASIM_tos, &ZIIASIM );
AJIASIM = ZIIASIM ;
switch ( AJIASIM.mode )
{ 
case 1: /* BITS */
BJIASIM_r = (AJIASIM.data.mode1);
 /* line 1495: */
 /* line 1496: */
{ 
 /* line 1498: */
HJIASIM.Rs1 = BJIASIM_r;
HJIASIM.Imm = 32;
HJIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(IJIASIM,mode2,2,HJIASIM));
 /* line 1499: */
VXDASIM_( FZDASIM_b, VWDASIM_l_a, &JJIASIM );
HREASIM_using(JJIASIM, (&FJIASIM_islessthan32));
 /* line 1500: */
KJIASIM.Rs1 = BJIASIM_r;
KJIASIM.Imm = (-32);
KJIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(LJIASIM,mode2,2,KJIASIM));
 /* line 1502: */
MJIASIM.Rs1 = FVEASIM_g0;
MJIASIM.Rs2 = FVEASIM_g0;
MJIASIM.Rd = YIIASIM_rd;
ISEASIM_using(LAEASIM_or, A_UNITE(NJIASIM,mode1,1,MJIASIM));
 /* line 1503: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &OJIASIM );
ASEASIM_using(OJIASIM, (&DJIASIM_fi1));
 /* line 1505: */
TXEASIM_fixmachinelabel(FJIASIM_islessthan32);
 /* line 1506: */
VXDASIM_( FZDASIM_b, EXDASIM_g_a, &PJIASIM );
HREASIM_using(PJIASIM, (&GJIASIM_isinrange));
 /* line 1507: */
QJIASIM.Rs1 = FVEASIM_g0;
QJIASIM.Rs2 = BJIASIM_r;
QJIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(RJIASIM,mode1,1,QJIASIM));
 /* line 1509: */
SJIASIM.Rs1 = XIIASIM_rs;
SJIASIM.Rs2 = XIIASIM_rs;
SJIASIM.Rd = FVEASIM_g0;
ISEASIM_using(RBEASIM_addcc, A_UNITE(TJIASIM,mode1,1,SJIASIM));
 /* line 1510: */
UJIASIM.Rs1 = FVEASIM_g0;
UJIASIM.Rs2 = FVEASIM_g0;
UJIASIM.Rd = YIIASIM_rd;
ISEASIM_using(NBEASIM_subx, A_UNITE(VJIASIM,mode1,1,UJIASIM));
 /* line 1511: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &WJIASIM );
ASEASIM_using(WJIASIM, (&EJIASIM_fi2));
 /* line 1513: */
TXEASIM_fixmachinelabel(GJIASIM_isinrange);
 /* line 1514: */
VXDASIM_( FZDASIM_b, ZWDASIM_neg_a, &XJIASIM );
HREASIM_using(XJIASIM, (&CJIASIM_fi));
 /* line 1515: */
YJIASIM.Rs1 = XIIASIM_rs;
YJIASIM.Rs2 = BJIASIM_r;
YJIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(ZDEASIM_sll, A_UNITE(ZJIASIM,mode1,1,YJIASIM));
 /* line 1516: */
AKIASIM.Rs1 = XIIASIM_rs;
AKIASIM.Rs2 = NEGASIM_tempreg1;
AKIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(HEEASIM_sra, A_UNITE(BKIASIM,mode1,1,AKIASIM));
 /* line 1517: */
TXEASIM_fixmachinelabel(CJIASIM_fi);
 /* line 1518: */
TXEASIM_fixmachinelabel(DJIASIM_fi1);
 /* line 1519: */
 /* line 1520: */
 /* line 1521: */
TXEASIM_fixmachinelabel(EJIASIM_fi2);
} 
break;
case 2: /* INT */
CKIASIM_i = (AJIASIM.data.mode2);
 /* line 1522: */
 /* line 1523: */
if ( (CKIASIM_i>0) )
{ 
 /* line 1524: */
if ( (CKIASIM_i>=32) )
{ 
DKIASIM.Rs1 = FVEASIM_g0;
DKIASIM.Rs2 = FVEASIM_g0;
 /* line 1525: */
DKIASIM.Rd = YIIASIM_rd;
 /* line 1526: */
ISEASIM_using(LAEASIM_or, A_UNITE(EKIASIM,mode1,1,DKIASIM));
} 
else
{ 
FKIASIM.Rs1 = XIIASIM_rs;
FKIASIM.Imm = CKIASIM_i;
 /* line 1527: */
FKIASIM.Rd = YIIASIM_rd;
 /* line 1528: */
 /* line 1529: */
ISEASIM_using(ZDEASIM_sll, A_UNITE(GKIASIM,mode2,2,FKIASIM));
} 
} 
else
{ 
 /* line 1530: */
if ( (CKIASIM_i<=(-32)) )
{ 
HKIASIM.Rs1 = XIIASIM_rs;
HKIASIM.Rs2 = XIIASIM_rs;
HKIASIM.Rd = FVEASIM_g0;
ISEASIM_using(RBEASIM_addcc, A_UNITE(IKIASIM,mode1,1,HKIASIM));
 /* line 1531: */
JKIASIM.Rs1 = FVEASIM_g0;
JKIASIM.Rs2 = FVEASIM_g0;
 /* line 1532: */
JKIASIM.Rd = YIIASIM_rd;
 /* line 1533: */
ISEASIM_using(NBEASIM_subx, A_UNITE(KKIASIM,mode1,1,JKIASIM));
} 
else
{ 
LKIASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
LKIASIM.Imm = (32-CKIASIM_i);
 /* line 1534: */
LKIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1535: */
 /* line 1536: */
ISEASIM_using(HEEASIM_sra, A_UNITE(MKIASIM,mode2,2,LKIASIM));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1538: */
IHHASIM_pop(Stack);
 /* line 1539: */
 /* line 1541: */
IIGASIM_inregister( A68_FALSE, &NKIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(OKIASIM,mode1,1,NKIASIM), &PKIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), PKIASIM);
} 
A_PROC_EXIT(shl);
return;
} 
#undef NL

A68_VOID  RKIASIM_shr(A68_425 * Stack)
{ 
A68_BITS  SKIASIM_rs;
A68_BITS  TKIASIM_rd;
A68_438  UKIASIM;  /* avoid structure result */
A68_438  VKIASIM;  /* united object - for case conformity */
A68_BITS  WKIASIM_r;
A68_211  XKIASIM_fi;
A68_211  YKIASIM_fi1;
A68_211  ZKIASIM_fi2;
A68_211  ALIASIM_islessthan32;
A68_211  BLIASIM_isinrange;
A68_218  CLIASIM;  /* collateral clause result */
A68_219  DLIASIM;  /* OPERATORS - mode -> union mode */
A68_236  ELIASIM;  /* avoid structure result */
A68_218  FLIASIM;  /* collateral clause result */
A68_219  GLIASIM;  /* OPERATORS - mode -> union mode */
A68_217  HLIASIM;  /* collateral clause result */
A68_219  ILIASIM;  /* OPERATORS - mode -> union mode */
A68_217  JLIASIM;  /* collateral clause result */
A68_219  KLIASIM;  /* OPERATORS - mode -> union mode */
A68_238  LLIASIM;  /* avoid structure result */
A68_236  MLIASIM;  /* avoid structure result */
A68_217  NLIASIM;  /* collateral clause result */
A68_219  OLIASIM;  /* OPERATORS - mode -> union mode */
A68_217  PLIASIM;  /* collateral clause result */
A68_219  QLIASIM;  /* OPERATORS - mode -> union mode */
A68_238  RLIASIM;  /* avoid structure result */
A68_236  SLIASIM;  /* avoid structure result */
A68_217  TLIASIM;  /* collateral clause result */
A68_219  ULIASIM;  /* OPERATORS - mode -> union mode */
A68_217  VLIASIM;  /* collateral clause result */
A68_219  WLIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  XLIASIM_i;
A68_217  YLIASIM;  /* collateral clause result */
A68_219  ZLIASIM;  /* OPERATORS - mode -> union mode */
A68_217  AMIASIM;  /* collateral clause result */
A68_219  BMIASIM;  /* OPERATORS - mode -> union mode */
A68_218  CMIASIM;  /* collateral clause result */
A68_219  DMIASIM;  /* OPERATORS - mode -> union mode */
A68_217  EMIASIM;  /* collateral clause result */
A68_219  FMIASIM;  /* OPERATORS - mode -> union mode */
A68_218  GMIASIM;  /* collateral clause result */
A68_219  HMIASIM;  /* OPERATORS - mode -> union mode */
A68_370  IMIASIM;  /* avoid structure result */
A68_388  JMIASIM;  /* OPERATORS - mode -> union mode */
A68_413  KMIASIM;  /* avoid structure result */
A_PROC_ENTRY(shr);
 /* line 1547: */
 /* line 1548: */
{ 
 /* line 1550: */
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1551: */
SKIASIM_rs = KBHASIM_rsource(Stack, FZGASIM_tos1);
 /* line 1552: */
TKIASIM_rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1554: */
 /* line 1555: */
LCHASIM_source( Stack, EZGASIM_tos, &UKIASIM );
VKIASIM = UKIASIM ;
switch ( VKIASIM.mode )
{ 
case 1: /* BITS */
WKIASIM_r = (VKIASIM.data.mode1);
 /* line 1556: */
 /* line 1557: */
{ 
 /* line 1559: */
CLIASIM.Rs1 = WKIASIM_r;
CLIASIM.Imm = 32;
CLIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(DLIASIM,mode2,2,CLIASIM));
 /* line 1560: */
VXDASIM_( FZDASIM_b, VWDASIM_l_a, &ELIASIM );
HREASIM_using(ELIASIM, (&ALIASIM_islessthan32));
 /* line 1561: */
FLIASIM.Rs1 = WKIASIM_r;
FLIASIM.Imm = (-32);
FLIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(GLIASIM,mode2,2,FLIASIM));
 /* line 1563: */
HLIASIM.Rs1 = SKIASIM_rs;
HLIASIM.Rs2 = SKIASIM_rs;
HLIASIM.Rd = FVEASIM_g0;
ISEASIM_using(RBEASIM_addcc, A_UNITE(ILIASIM,mode1,1,HLIASIM));
 /* line 1564: */
JLIASIM.Rs1 = FVEASIM_g0;
JLIASIM.Rs2 = FVEASIM_g0;
JLIASIM.Rd = TKIASIM_rd;
ISEASIM_using(NBEASIM_subx, A_UNITE(KLIASIM,mode1,1,JLIASIM));
 /* line 1566: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &LLIASIM );
ASEASIM_using(LLIASIM, (&YKIASIM_fi1));
 /* line 1569: */
TXEASIM_fixmachinelabel(ALIASIM_islessthan32);
 /* line 1570: */
VXDASIM_( FZDASIM_b, EXDASIM_g_a, &MLIASIM );
HREASIM_using(MLIASIM, (&BLIASIM_isinrange));
 /* line 1571: */
NLIASIM.Rs1 = FVEASIM_g0;
NLIASIM.Rs2 = WKIASIM_r;
NLIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(OLIASIM,mode1,1,NLIASIM));
 /* line 1573: */
PLIASIM.Rs1 = FVEASIM_g0;
PLIASIM.Rs2 = FVEASIM_g0;
PLIASIM.Rd = TKIASIM_rd;
ISEASIM_using(LAEASIM_or, A_UNITE(QLIASIM,mode1,1,PLIASIM));
 /* line 1574: */
AYDASIM_( RZDASIM_bd, HWDASIM_a, &RLIASIM );
ASEASIM_using(RLIASIM, (&ZKIASIM_fi2));
 /* line 1576: */
TXEASIM_fixmachinelabel(BLIASIM_isinrange);
 /* line 1577: */
VXDASIM_( FZDASIM_b, ZWDASIM_neg_a, &SLIASIM );
HREASIM_using(SLIASIM, (&XKIASIM_fi));
 /* line 1578: */
TLIASIM.Rs1 = SKIASIM_rs;
TLIASIM.Rs2 = WKIASIM_r;
TLIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(HEEASIM_sra, A_UNITE(ULIASIM,mode1,1,TLIASIM));
 /* line 1579: */
VLIASIM.Rs1 = SKIASIM_rs;
VLIASIM.Rs2 = NEGASIM_tempreg1;
VLIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(ZDEASIM_sll, A_UNITE(WLIASIM,mode1,1,VLIASIM));
 /* line 1581: */
TXEASIM_fixmachinelabel(XKIASIM_fi);
 /* line 1582: */
TXEASIM_fixmachinelabel(YKIASIM_fi1);
 /* line 1583: */
 /* line 1584: */
 /* line 1585: */
TXEASIM_fixmachinelabel(ZKIASIM_fi2);
} 
break;
case 2: /* INT */
XLIASIM_i = (VKIASIM.data.mode2);
 /* line 1586: */
 /* line 1587: */
if ( (XLIASIM_i>0) )
{ 
 /* line 1588: */
if ( (XLIASIM_i>=32) )
{ 
YLIASIM.Rs1 = SKIASIM_rs;
YLIASIM.Rs2 = SKIASIM_rs;
YLIASIM.Rd = FVEASIM_g0;
ISEASIM_using(RBEASIM_addcc, A_UNITE(ZLIASIM,mode1,1,YLIASIM));
 /* line 1589: */
AMIASIM.Rs1 = FVEASIM_g0;
AMIASIM.Rs2 = FVEASIM_g0;
 /* line 1590: */
AMIASIM.Rd = TKIASIM_rd;
 /* line 1591: */
ISEASIM_using(NBEASIM_subx, A_UNITE(BMIASIM,mode1,1,AMIASIM));
} 
else
{ 
CMIASIM.Rs1 = SKIASIM_rs;
CMIASIM.Imm = XLIASIM_i;
 /* line 1592: */
CMIASIM.Rd = TKIASIM_rd;
 /* line 1593: */
 /* line 1594: */
ISEASIM_using(HEEASIM_sra, A_UNITE(DMIASIM,mode2,2,CMIASIM));
} 
} 
else
{ 
 /* line 1595: */
if ( (XLIASIM_i<=(-32)) )
{ 
EMIASIM.Rs1 = FVEASIM_g0;
EMIASIM.Rs2 = FVEASIM_g0;
 /* line 1596: */
EMIASIM.Rd = TKIASIM_rd;
 /* line 1597: */
ISEASIM_using(LAEASIM_or, A_UNITE(FMIASIM,mode1,1,EMIASIM));
} 
else
{ 
GMIASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
GMIASIM.Imm = (32-XLIASIM_i);
 /* line 1598: */
GMIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
 /* line 1599: */
 /* line 1600: */
ISEASIM_using(ZDEASIM_sll, A_UNITE(HMIASIM,mode2,2,GMIASIM));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1602: */
IHHASIM_pop(Stack);
 /* line 1603: */
 /* line 1604: */
IIGASIM_inregister( A68_FALSE, &IMIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(JMIASIM,mode1,1,IMIASIM), &KMIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), KMIASIM);
} 
A_PROC_EXIT(shr);
return;
} 
#undef NL

A68_VOID  MMIASIM_mul(A68_425 * Stack)
{ 
A68_438  NMIASIM;  /* avoid structure result */
A68_438  OMIASIM;  /* united object - for case conformity */
A68_BITS  PMIASIM_r;
A68_217  QMIASIM;  /* collateral clause result */
A68_219  RMIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  SMIASIM_i;
A68_218  TMIASIM;  /* collateral clause result */
A68_219  UMIASIM;  /* OPERATORS - mode -> union mode */
A68_438  VMIASIM;  /* avoid structure result */
A68_438  WMIASIM_ri;
A68_438  XMIASIM;  /* united object - for case conformity */
A68_BITS  YMIASIM_r;
A68_217  ZMIASIM;  /* collateral clause result */
A68_219  ANIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  BNIASIM_i;
A68_218  CNIASIM;  /* collateral clause result */
A68_219  DNIASIM;  /* OPERATORS - mode -> union mode */
A68_214  ENIASIM;  /* collateral clause result */
A68_216  FNIASIM;  /* OPERATORS - mode -> union mode */
A68_241  GNIASIM;  /* avoid structure result */
A68_217  HNIASIM;  /* collateral clause result */
A68_219  INIASIM;  /* OPERATORS - mode -> union mode */
A68_370  JNIASIM;  /* avoid structure result */
A68_388  KNIASIM;  /* OPERATORS - mode -> union mode */
A68_413  LNIASIM;  /* avoid structure result */
A_PROC_ENTRY(mul);
 /* line 1609: */
 /* line 1614: */
{ 
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1615: */
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 1617: */
 /* line 1618: */
LCHASIM_source( Stack, EZGASIM_tos, &NMIASIM );
OMIASIM = NMIASIM ;
switch ( OMIASIM.mode )
{ 
case 1: /* BITS */
PMIASIM_r = (OMIASIM.data.mode1);
QMIASIM.Rs1 = FVEASIM_g0;
QMIASIM.Rs2 = PMIASIM_r;
QMIASIM.Rd = NEGASIM_tempreg1;
 /* line 1619: */
ISEASIM_using(LAEASIM_or, A_UNITE(RMIASIM,mode1,1,QMIASIM));
break;
case 2: /* INT */
SMIASIM_i = (OMIASIM.data.mode2);
TMIASIM.Rs1 = FVEASIM_g0;
TMIASIM.Imm = SMIASIM_i;
 /* line 1620: */
TMIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(UMIASIM,mode2,2,TMIASIM));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1622: */
LCHASIM_source( Stack, FZGASIM_tos1, &VMIASIM );
WMIASIM_ri = VMIASIM;
 /* line 1623: */
TZEASIM_mamul();
 /* line 1625: */
 /* line 1626: */
XMIASIM = WMIASIM_ri ;
switch ( XMIASIM.mode )
{ 
case 1: /* BITS */
YMIASIM_r = (XMIASIM.data.mode1);
ZMIASIM.Rs1 = FVEASIM_g0;
ZMIASIM.Rs2 = YMIASIM_r;
ZMIASIM.Rd = OEGASIM_tempreg2;
 /* line 1627: */
ISEASIM_using(LAEASIM_or, A_UNITE(ANIASIM,mode1,1,ZMIASIM));
break;
case 2: /* INT */
BNIASIM_i = (XMIASIM.data.mode2);
CNIASIM.Rs1 = FVEASIM_g0;
CNIASIM.Imm = BNIASIM_i;
 /* line 1628: */
CNIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(LAEASIM_or, A_UNITE(DNIASIM,mode2,2,CNIASIM));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1630: */
ENIASIM.Rs1 = FVEASIM_g0;
ENIASIM.Imm = CPEASIM_t_int_overflow;
FYDASIM_( LOEASIM_t, JWDASIM_nz, &GNIASIM );
BTEASIM_using(GNIASIM, A_UNITE(FNIASIM,mode2,2,ENIASIM));
 /* line 1632: */
HNIASIM.Rs1 = NEGASIM_tempreg1;
HNIASIM.Rs2 = FVEASIM_g0;
HNIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(INIASIM,mode1,1,HNIASIM));
 /* line 1633: */
IHHASIM_pop(Stack);
 /* line 1634: */
 /* line 1635: */
IIGASIM_inregister( A68_FALSE, &JNIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(KNIASIM,mode1,1,JNIASIM), &LNIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), LNIASIM);
} 
A_PROC_EXIT(mul);
return;
} 
#undef NL

A68_VOID  NNIASIM_div(A68_425 * Stack)
{ 
A68_BOOL  ONIASIM_windowsaveneeded;
A68_217  PNIASIM;  /* collateral clause result */
A68_219  QNIASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  RNIASIM_rstos1;
A68_217  SNIASIM;  /* collateral clause result */
A68_219  TNIASIM;  /* OPERATORS - mode -> union mode */
A68_217  UNIASIM;  /* collateral clause result */
A68_219  VNIASIM;  /* OPERATORS - mode -> union mode */
A68_370  WNIASIM;  /* avoid structure result */
A68_388  XNIASIM;  /* OPERATORS - mode -> union mode */
A68_413  YNIASIM;  /* avoid structure result */
A_PROC_ENTRY(div);
 /* line 1640: */
 /* line 1645: */
{ 
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1646: */
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 1648: */
ONIASIM_windowsaveneeded = ((A68_INT )GBHASIM_rdest(Stack, EZGASIM_tos)<(A68_INT )DWEASIM_o4);
 /* line 1650: */
 /* line 1651: */
if ( ONIASIM_windowsaveneeded )
{ 
TNHASIM_forceallload(Stack);
 /* line 1652: */
 /* line 1653: */
KHGASIM_savewindow((&(Stack->Rm_allocator)));
} 
 /* line 1655: */
PNIASIM.Rs1 = KBHASIM_rsource(Stack, EZGASIM_tos);
PNIASIM.Rs2 = FVEASIM_g0;
PNIASIM.Rd = XVEASIM_o1;
ISEASIM_using(LAEASIM_or, A_UNITE(QNIASIM,mode1,1,PNIASIM));
 /* line 1656: */
RNIASIM_rstos1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
 /* line 1659: */
OZEASIM_madiv();
 /* line 1660: */
SNIASIM.Rs1 = RNIASIM_rstos1;
SNIASIM.Rs2 = FVEASIM_g0;
SNIASIM.Rd = VVEASIM_o0;
ISEASIM_using(LAEASIM_or, A_UNITE(TNIASIM,mode1,1,SNIASIM));
 /* line 1661: */
UNIASIM.Rs1 = VVEASIM_o0;
UNIASIM.Rs2 = FVEASIM_g0;
UNIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(VNIASIM,mode1,1,UNIASIM));
 /* line 1663: */
 /* line 1664: */
if ( ONIASIM_windowsaveneeded )
{ 
 /* line 1665: */
PHGASIM_restorewindow((&(Stack->Rm_allocator)));
} 
 /* line 1667: */
IHHASIM_pop(Stack);
 /* line 1668: */
 /* line 1670: */
IIGASIM_inregister( A68_FALSE, &WNIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(XNIASIM,mode1,1,WNIASIM), &YNIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), YNIASIM);
} 
A_PROC_EXIT(div);
return;
} 
#undef NL

A68_VOID  AOIASIM_mod(A68_425 * Stack)
{ 
A68_211  BOIASIM_l1;
A68_211  COIASIM_l2;
A68_211  DOIASIM_l3;
A68_BOOL  EOIASIM_windowsaveneeded;
A68_217  FOIASIM;  /* collateral clause result */
A68_219  GOIASIM;  /* OPERATORS - mode -> union mode */
A68_217  HOIASIM;  /* collateral clause result */
A68_219  IOIASIM;  /* OPERATORS - mode -> union mode */
A68_217  JOIASIM;  /* collateral clause result */
A68_219  KOIASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  LOIASIM_rstos1;
A68_217  MOIASIM;  /* collateral clause result */
A68_219  NOIASIM;  /* OPERATORS - mode -> union mode */
A68_217  OOIASIM;  /* collateral clause result */
A68_219  POIASIM;  /* OPERATORS - mode -> union mode */
A68_217  QOIASIM;  /* collateral clause result */
A68_219  ROIASIM;  /* OPERATORS - mode -> union mode */
A68_217  SOIASIM;  /* collateral clause result */
A68_219  TOIASIM;  /* OPERATORS - mode -> union mode */
A68_217  UOIASIM;  /* collateral clause result */
A68_219  VOIASIM;  /* OPERATORS - mode -> union mode */
A68_238  WOIASIM;  /* avoid structure result */
A68_217  XOIASIM;  /* collateral clause result */
A68_219  YOIASIM;  /* OPERATORS - mode -> union mode */
A68_238  ZOIASIM;  /* avoid structure result */
A68_217  APIASIM;  /* collateral clause result */
A68_219  BPIASIM;  /* OPERATORS - mode -> union mode */
A68_236  CPIASIM;  /* avoid structure result */
A68_215  DPIASIM;  /* collateral clause result */
A68_217  EPIASIM;  /* collateral clause result */
A68_219  FPIASIM;  /* OPERATORS - mode -> union mode */
A68_370  GPIASIM;  /* avoid structure result */
A68_388  HPIASIM;  /* OPERATORS - mode -> union mode */
A68_413  IPIASIM;  /* avoid structure result */
A_PROC_ENTRY(mod);
 /* line 1675: */
 /* line 1677: */
{ 
 /* line 1679: */
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1680: */
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 1683: */
EOIASIM_windowsaveneeded = ((A68_INT )GBHASIM_rdest(Stack, EZGASIM_tos)<(A68_INT )DWEASIM_o4);
 /* line 1685: */
 /* line 1686: */
if ( EOIASIM_windowsaveneeded )
{ 
TNHASIM_forceallload(Stack);
 /* line 1687: */
 /* line 1688: */
KHGASIM_savewindow((&(Stack->Rm_allocator)));
} 
 /* line 1690: */
FOIASIM.Rs1 = KBHASIM_rsource(Stack, EZGASIM_tos);
FOIASIM.Rs2 = FVEASIM_g0;
FOIASIM.Rd = XVEASIM_o1;
ISEASIM_using(LAEASIM_or, A_UNITE(GOIASIM,mode1,1,FOIASIM));
 /* line 1691: */
HOIASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
HOIASIM.Rs2 = FVEASIM_g0;
HOIASIM.Rd = VVEASIM_o0;
ISEASIM_using(LAEASIM_or, A_UNITE(IOIASIM,mode1,1,HOIASIM));
 /* line 1694: */
JOIASIM.Rs1 = KBHASIM_rsource(Stack, EZGASIM_tos);
JOIASIM.Rs2 = FVEASIM_g0;
JOIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(LAEASIM_or, A_UNITE(KOIASIM,mode1,1,JOIASIM));
 /* line 1696: */
LOIASIM_rstos1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
 /* line 1697: */
OZEASIM_madiv();
 /* line 1698: */
MOIASIM.Rs1 = LOIASIM_rstos1;
MOIASIM.Rs2 = FVEASIM_g0;
MOIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(LAEASIM_or, A_UNITE(NOIASIM,mode1,1,MOIASIM));
 /* line 1700: */
OOIASIM.Rs1 = VVEASIM_o0;
OOIASIM.Rs2 = FVEASIM_g0;
OOIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(POIASIM,mode1,1,OOIASIM));
 /* line 1701: */
QOIASIM.Rs1 = OEGASIM_tempreg2;
QOIASIM.Rs2 = FVEASIM_g0;
QOIASIM.Rd = XVEASIM_o1;
ISEASIM_using(LAEASIM_or, A_UNITE(ROIASIM,mode1,1,QOIASIM));
 /* line 1703: */
TZEASIM_mamul();
 /* line 1704: */
SOIASIM.Rs1 = PEGASIM_tempreg3;
SOIASIM.Rs2 = FVEASIM_g0;
SOIASIM.Rd = VVEASIM_o0;
ISEASIM_using(LAEASIM_or, A_UNITE(TOIASIM,mode1,1,SOIASIM));
 /* line 1706: */
UOIASIM.Rs1 = VVEASIM_o0;
UOIASIM.Rs2 = NEGASIM_tempreg1;
UOIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(HCEASIM_subcc, A_UNITE(VOIASIM,mode1,1,UOIASIM));
 /* line 1707: */
AYDASIM_( RZDASIM_bd, FXDASIM_ge_a, &WOIASIM );
ASEASIM_using(WOIASIM, (&COIASIM_l2));
 /* line 1708: */
XOIASIM.Rs1 = FVEASIM_g0;
XOIASIM.Rs2 = XVEASIM_o1;
XOIASIM.Rd = FVEASIM_g0;
ISEASIM_using(ZBEASIM_orcc, A_UNITE(YOIASIM,mode1,1,XOIASIM));
 /* line 1709: */
AYDASIM_( RZDASIM_bd, FXDASIM_ge_a, &ZOIASIM );
ASEASIM_using(ZOIASIM, (&BOIASIM_l1));
 /* line 1710: */
APIASIM.Rs1 = GBHASIM_rdest(Stack, FZGASIM_tos1);
APIASIM.Rs2 = XVEASIM_o1;
APIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(TAEASIM_sub, A_UNITE(BPIASIM,mode1,1,APIASIM));
 /* line 1711: */
VXDASIM_( FZDASIM_b, HWDASIM_a, &CPIASIM );
HREASIM_using(CPIASIM, (&DOIASIM_l3));
 /* line 1712: */
DPIASIM.Imm = 0;
DPIASIM.Rd = FVEASIM_g0;
QQEASIM_using(BZDASIM_nop, DPIASIM);
 /* line 1713: */
TXEASIM_fixmachinelabel(BOIASIM_l1);
 /* line 1714: */
EPIASIM.Rs1 = GBHASIM_rdest(Stack, FZGASIM_tos1);
EPIASIM.Rs2 = XVEASIM_o1;
EPIASIM.Rd = GBHASIM_rdest(Stack, FZGASIM_tos1);
ISEASIM_using(DAEASIM_add, A_UNITE(FPIASIM,mode1,1,EPIASIM));
 /* line 1715: */
TXEASIM_fixmachinelabel(COIASIM_l2);
 /* line 1716: */
TXEASIM_fixmachinelabel(DOIASIM_l3);
 /* line 1717: */
 /* line 1718: */
if ( EOIASIM_windowsaveneeded )
{ 
 /* line 1719: */
PHGASIM_restorewindow((&(Stack->Rm_allocator)));
} 
 /* line 1720: */
IHHASIM_pop(Stack);
 /* line 1721: */
 /* line 1723: */
IIGASIM_inregister( A68_FALSE, &GPIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(HPIASIM,mode1,1,GPIASIM), &IPIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), IPIASIM);
} 
A_PROC_EXIT(mod);
return;
} 
#undef NL

A68_VOID  KPIASIM_test(A68_425 * Stack)
{ 
A68_438  LPIASIM;  /* avoid structure result */
A68_438  MPIASIM;  /* united object - for case conformity */
A68_BITS  NPIASIM_r;
A68_217  OPIASIM;  /* collateral clause result */
A68_219  PPIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  QPIASIM_i;
A68_218  RPIASIM;  /* collateral clause result */
A68_219  SPIASIM;  /* OPERATORS - mode -> union mode */
A68_385  TPIASIM;  /* avoid structure result */
A68_388  UPIASIM;  /* OPERATORS - mode -> union mode */
A68_413  VPIASIM;  /* avoid structure result */
A_PROC_ENTRY(test);
 /* line 1729: */
 /* line 1731: */
{ 
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
 /* line 1733: */
 /* line 1734: */
LCHASIM_source( Stack, EZGASIM_tos, &LPIASIM );
MPIASIM = LPIASIM ;
switch ( MPIASIM.mode )
{ 
case 1: /* BITS */
NPIASIM_r = (MPIASIM.data.mode1);
OPIASIM.Rs1 = FVEASIM_g0;
OPIASIM.Rs2 = NPIASIM_r;
OPIASIM.Rd = FVEASIM_g0;
 /* line 1735: */
ISEASIM_using(ZBEASIM_orcc, A_UNITE(PPIASIM,mode1,1,OPIASIM));
break;
case 2: /* INT */
QPIASIM_i = (MPIASIM.data.mode2);
RPIASIM.Rs1 = FVEASIM_g0;
RPIASIM.Imm = QPIASIM_i;
 /* line 1736: */
RPIASIM.Rd = FVEASIM_g0;
ISEASIM_using(ZBEASIM_orcc, A_UNITE(SPIASIM,mode2,2,RPIASIM));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1737: */
 /* line 1739: */
FMGASIM_condition( IWDASIM_ne, &TPIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(UPIASIM,mode6,6,TPIASIM), &VPIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), VPIASIM);
} 
A_PROC_EXIT(test);
return;
} 
#undef NL

A68_VOID  YPIASIM_genericrelation(A68_425 * Stack, A68_BITS  Cc)
{ 
A68_BITS  ZPIASIM_newcc;
A68_396 * AQIASIM_l;
A68_388  BQIASIM;  /* avoid structure result */
A68_388  CQIASIM;  /* united object - for case conformity */
A68_376  DQIASIM_c;
A68_218  EQIASIM;  /* collateral clause result */
A68_219  FQIASIM;  /* clause result */
A68_219  GQIASIM;  /* OPERATORS - mode -> union mode */
A68_438  HQIASIM;  /* avoid structure result */
A68_438  IQIASIM;  /* united object - for case conformity */
A68_INT  JQIASIM_i;
A68_218  KQIASIM;  /* collateral clause result */
A68_219  LQIASIM;  /* OPERATORS - mode -> union mode */
A68_BITS  MQIASIM_r;
A68_217  NQIASIM;  /* collateral clause result */
A68_219  OQIASIM;  /* OPERATORS - mode -> union mode */
A68_219  PQIASIM_comp;
A68_385  QQIASIM;  /* avoid structure result */
A68_388  RQIASIM;  /* OPERATORS - mode -> union mode */
A68_413  SQIASIM;  /* avoid structure result */
A_PROC_ENTRY(genericrelation);
 /* line 1745: */
 /* line 1746: */
{ 
 /* line 1747: */
HGHASIM_transmutesmall(Stack, EZGASIM_tos);
HGHASIM_transmutesmall(Stack, FZGASIM_tos1);
 /* line 1749: */
AQIASIM_l = (&(Stack->Location_stack));
 /* line 1750: */
 /* line 1751: */
 /* line 1752: */
PVGASIM_stateof( AQIASIM_l, FZGASIM_tos1, &BQIASIM );
CQIASIM = BQIASIM ;
switch ( CQIASIM.mode )
{ 
case 3: /* STRUCT(REF MODE26)  */
DQIASIM_c = (CQIASIM.data.mode3);
 /* line 1753: */
 /* line 1754: */
{ 
ZPIASIM_newcc = PXDASIM_swapcondition(Cc);
 /* line 1755: */
EQIASIM.Rs1 = KBHASIM_rsource(Stack, EZGASIM_tos);
EQIASIM.Imm = FFFASIM_integer(DQIASIM_c.Constant);
 /* line 1756: */
EQIASIM.Rd = FVEASIM_g0;
 /* line 1757: */
 /* line 1758: */
FQIASIM = A_UNITE(GQIASIM,mode2,2,EQIASIM);
} 
break;
default: 
 /* line 1759: */
{ 
ZPIASIM_newcc = Cc;
 /* line 1760: */
 /* line 1761: */
LCHASIM_source( Stack, EZGASIM_tos, &HQIASIM );
IQIASIM = HQIASIM ;
switch ( IQIASIM.mode )
{ 
case 2: /* INT */
JQIASIM_i = (IQIASIM.data.mode2);
KQIASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
KQIASIM.Imm = JQIASIM_i;
KQIASIM.Rd = FVEASIM_g0;
 /* line 1762: */
FQIASIM = A_UNITE(LQIASIM,mode2,2,KQIASIM);
break;
case 1: /* BITS */
MQIASIM_r = (IQIASIM.data.mode1);
NQIASIM.Rs1 = KBHASIM_rsource(Stack, FZGASIM_tos1);
NQIASIM.Rs2 = MQIASIM_r;
 /* line 1763: */
NQIASIM.Rd = FVEASIM_g0;
 /* line 1764: */
 /* line 1765: */
FQIASIM = A_UNITE(OQIASIM,mode1,1,NQIASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
} 
PQIASIM_comp = FQIASIM;
 /* line 1766: */
ISEASIM_using(HCEASIM_subcc, PQIASIM_comp);
 /* line 1768: */
FMGASIM_condition( ZPIASIM_newcc, &QQIASIM );
HWGASIM_given( FZGASIM_tos1, A_UNITE(RQIASIM,mode6,6,QQIASIM), &SQIASIM );
MWGASIM_changestateof(AQIASIM_l, SQIASIM);
 /* line 1769: */
 /* line 1770: */
IHHASIM_pop(Stack);
} 
A_PROC_EXIT(genericrelation);
return;
} 
#undef NL

A68_VOID  UQIASIM_eq(A68_425 * S)
{ 
A68_BOOL  VQIASIM_done;
A68_393  WQIASIM;  /* avoid structure result */
A68_393  XQIASIM;  /* united object - for case conformity */
A68_393  YQIASIM;  /* avoid structure result */
A68_393  ZQIASIM;  /* united object - for case conformity */
A68_217  ARIASIM;  /* collateral clause result */
A68_219  BRIASIM;  /* OPERATORS - mode -> union mode */
A68_370  CRIASIM;  /* avoid structure result */
A68_388  DRIASIM;  /* OPERATORS - mode -> union mode */
A68_413  ERIASIM;  /* avoid structure result */
A68_217  FRIASIM;  /* collateral clause result */
A68_219  GRIASIM;  /* OPERATORS - mode -> union mode */
A68_370  HRIASIM;  /* avoid structure result */
A68_388  IRIASIM;  /* OPERATORS - mode -> union mode */
A68_413  JRIASIM;  /* avoid structure result */
A68_219  KRIASIM;  /* avoid structure result */
A68_217  LRIASIM;  /* collateral clause result */
A68_219  MRIASIM;  /* OPERATORS - mode -> union mode */
A68_393  NRIASIM;  /* avoid structure result */
A68_393  ORIASIM;  /* united object - for case conformity */
A68_217  PRIASIM;  /* collateral clause result */
A68_219  QRIASIM;  /* OPERATORS - mode -> union mode */
A68_370  RRIASIM;  /* avoid structure result */
A68_388  SRIASIM;  /* OPERATORS - mode -> union mode */
A68_413  TRIASIM;  /* avoid structure result */
A68_217  URIASIM;  /* collateral clause result */
A68_219  VRIASIM;  /* OPERATORS - mode -> union mode */
A68_217  WRIASIM;  /* collateral clause result */
A68_219  XRIASIM;  /* OPERATORS - mode -> union mode */
A68_370  YRIASIM;  /* avoid structure result */
A68_388  ZRIASIM;  /* OPERATORS - mode -> union mode */
A68_413  ASIASIM;  /* avoid structure result */
A68_219  BSIASIM;  /* avoid structure result */
A68_217  CSIASIM;  /* collateral clause result */
A68_219  DSIASIM;  /* OPERATORS - mode -> union mode */
A68_393  ESIASIM;  /* avoid structure result */
A68_393  FSIASIM;  /* united object - for case conformity */
A68_219  GSIASIM;  /* avoid structure result */
A68_218  HSIASIM;  /* collateral clause result */
A68_219  ISIASIM;  /* OPERATORS - mode -> union mode */
A68_217  JSIASIM;  /* collateral clause result */
A68_219  KSIASIM;  /* OPERATORS - mode -> union mode */
A68_219  LSIASIM;  /* avoid structure result */
A68_217  MSIASIM;  /* collateral clause result */
A68_219  NSIASIM;  /* OPERATORS - mode -> union mode */
A68_211  OSIASIM_finished;
A68_211  PSIASIM_endloop;
A68_238  QSIASIM;  /* avoid structure result */
A68_INT  RSIASIM_loop;
A68_217  SSIASIM;  /* avoid structure result */
A68_219  TSIASIM;  /* OPERATORS - mode -> union mode */
A68_217  VSIASIM;  /* avoid structure result */
A68_217  USIASIM_eq_rrr;
A68_BITS * WSIASIM;  /* YIELD */
A68_219  XSIASIM;  /* OPERATORS - mode -> union mode */
A68_217  YSIASIM;  /* collateral clause result */
A68_219  ZSIASIM;  /* OPERATORS - mode -> union mode */
A68_236  ATIASIM;  /* avoid structure result */
A68_217  BTIASIM;  /* collateral clause result */
A68_219  CTIASIM;  /* OPERATORS - mode -> union mode */
A68_385  DTIASIM;  /* avoid structure result */
A68_388  ETIASIM;  /* OPERATORS - mode -> union mode */
A68_413  FTIASIM;  /* avoid structure result */
A_PROC_ENTRY(eq);
 /* line 1776: */
 /* line 1777: */
{ 
VQIASIM_done = A68_FALSE;
 /* line 1779: */
 /* line 1780: */
JVGASIM_typeof( (&(S->Location_stack)), EZGASIM_tos, &WQIASIM );
XQIASIM = WQIASIM ;
switch ( XQIASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1781: */
 /* line 1782: */
JVGASIM_typeof( (&(S->Location_stack)), FZGASIM_tos1, &YQIASIM );
ZQIASIM = YQIASIM ;
switch ( ZQIASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1783: */
 /* line 1785: */
{ 
 /* line 1786: */
if ( (BWGASIM_sizeof((&(S->Location_stack)), EZGASIM_tos)!=BWGASIM_sizeof((&(S->Location_stack)), FZGASIM_tos1)) )
{ 
ARIASIM.Rs1 = FVEASIM_g0;
ARIASIM.Rs2 = FVEASIM_g0;
ARIASIM.Rd = GBHASIM_rdest(S, FZGASIM_tos1);
ISEASIM_using(LAEASIM_or, A_UNITE(BRIASIM,mode1,1,ARIASIM));
 /* line 1787: */
IIGASIM_inregister( A68_FALSE, &CRIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(DRIASIM,mode1,1,CRIASIM), &ERIASIM );
MWGASIM_changestateof((&(S->Location_stack)), ERIASIM);
 /* line 1788: */
 /* line 1789: */
 /* line 1790: */
IHHASIM_pop(S);
} 
else
{ 
 /* line 1791: */
YPIASIM_genericrelation(S, YVDASIM_eq);
} 
 /* line 1792: */
 /* line 1793: */
 /* line 1794: */
VQIASIM_done = A68_TRUE;
} 
break;
case 2: /* INT */
 /* line 1795: */
 /* line 1796: */
{ 
IHHASIM_pop(S);
IHHASIM_pop(S);
 /* line 1797: */
EPHASIM_pushnewstacklocation(S, 32);
 /* line 1798: */
FRIASIM.Rs1 = FVEASIM_g0;
FRIASIM.Rs2 = FVEASIM_g0;
FRIASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(GRIASIM,mode1,1,FRIASIM));
 /* line 1799: */
IIGASIM_inregister( A68_FALSE, &HRIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(IRIASIM,mode1,1,HRIASIM), &JRIASIM );
MWGASIM_changestateof((&(S->Location_stack)), JRIASIM);
 /* line 1800: */
 /* line 1801: */
 /* line 1802: */
VQIASIM_done = A68_TRUE;
} 
break;
case 3: /* CHAR */
 /* line 1803: */
 /* line 1804: */
{ 
DFHASIM_sizeoperands( S, FZGASIM_tos1, &KRIASIM );
ISEASIM_using(TEEASIM_ld, KRIASIM);
 /* line 1805: */
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), EZGASIM_tos), OEGASIM_tempreg2);
 /* line 1806: */
LRIASIM.Rs1 = NEGASIM_tempreg1;
LRIASIM.Rs2 = OEGASIM_tempreg2;
 /* line 1807: */
LRIASIM.Rd = FVEASIM_g0;
 /* line 1808: */
 /* line 1809: */
ISEASIM_using(HCEASIM_subcc, A_UNITE(MRIASIM,mode1,1,LRIASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: /* INT */
 /* line 1810: */
 /* line 1811: */
JVGASIM_typeof( (&(S->Location_stack)), FZGASIM_tos1, &NRIASIM );
ORIASIM = NRIASIM ;
switch ( ORIASIM.mode )
{ 
case 2: /* INT */
 /* line 1812: */
 /* line 1813: */
if ( (BWGASIM_sizeof((&(S->Location_stack)), EZGASIM_tos)!=BWGASIM_sizeof((&(S->Location_stack)), FZGASIM_tos1)) )
{ 
IHHASIM_pop(S);
IHHASIM_pop(S);
 /* line 1814: */
EPHASIM_pushnewstacklocation(S, 32);
 /* line 1815: */
PRIASIM.Rs1 = FVEASIM_g0;
PRIASIM.Rs2 = FVEASIM_g0;
PRIASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(QRIASIM,mode1,1,PRIASIM));
 /* line 1816: */
IIGASIM_inregister( A68_FALSE, &RRIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(SRIASIM,mode1,1,RRIASIM), &TRIASIM );
MWGASIM_changestateof((&(S->Location_stack)), TRIASIM);
 /* line 1817: */
 /* line 1818: */
 /* line 1819: */
VQIASIM_done = A68_TRUE;
} 
else
{ 
URIASIM.Rs1 = FVEASIM_g0;
URIASIM.Rs2 = FVEASIM_g0;
 /* line 1820: */
URIASIM.Rd = FVEASIM_g0;
 /* line 1821: */
ISEASIM_using(ZBEASIM_orcc, A_UNITE(VRIASIM,mode1,1,URIASIM));
} 
break;
case 1: /* BOOL */
 /* line 1822: */
 /* line 1823: */
{ 
IHHASIM_pop(S);
IHHASIM_pop(S);
 /* line 1824: */
EPHASIM_pushnewstacklocation(S, 32);
 /* line 1825: */
WRIASIM.Rs1 = FVEASIM_g0;
WRIASIM.Rs2 = FVEASIM_g0;
WRIASIM.Rd = GBHASIM_rdest(S, EZGASIM_tos);
ISEASIM_using(LAEASIM_or, A_UNITE(XRIASIM,mode1,1,WRIASIM));
 /* line 1826: */
IIGASIM_inregister( A68_FALSE, &YRIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(ZRIASIM,mode1,1,YRIASIM), &ASIASIM );
MWGASIM_changestateof((&(S->Location_stack)), ASIASIM);
 /* line 1827: */
 /* line 1828: */
 /* line 1829: */
VQIASIM_done = A68_TRUE;
} 
break;
case 3: /* CHAR */
 /* line 1830: */
 /* line 1831: */
{ 
DFHASIM_sizeoperands( S, FZGASIM_tos1, &BSIASIM );
ISEASIM_using(TEEASIM_ld, BSIASIM);
 /* line 1832: */
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), EZGASIM_tos), OEGASIM_tempreg2);
 /* line 1833: */
CSIASIM.Rs1 = NEGASIM_tempreg1;
CSIASIM.Rs2 = OEGASIM_tempreg2;
 /* line 1834: */
CSIASIM.Rd = FVEASIM_g0;
 /* line 1835: */
 /* line 1836: */
ISEASIM_using(HCEASIM_subcc, A_UNITE(DSIASIM,mode1,1,CSIASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: /* CHAR */
 /* line 1837: */
 /* line 1838: */
JVGASIM_typeof( (&(S->Location_stack)), FZGASIM_tos1, &ESIASIM );
FSIASIM = ESIASIM ;
switch ( FSIASIM.mode )
{ 
case 3: /* CHAR */
 /* line 1839: */
 /* line 1840: */
{ 
DFHASIM_sizeoperands( S, EZGASIM_tos, &GSIASIM );
ISEASIM_using(TEEASIM_ld, GSIASIM);
 /* line 1841: */
HSIASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
HSIASIM.Imm = (-4);
HSIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(ISIASIM,mode2,2,HSIASIM));
 /* line 1842: */
JSIASIM.Rs1 = NEGASIM_tempreg1;
JSIASIM.Rs2 = OEGASIM_tempreg2;
 /* line 1843: */
JSIASIM.Rd = FVEASIM_g0;
 /* line 1844: */
 /* line 1845: */
ISEASIM_using(HCEASIM_subcc, A_UNITE(KSIASIM,mode1,1,JSIASIM));
} 
break;
default: 
DFHASIM_sizeoperands( S, EZGASIM_tos, &LSIASIM );
ISEASIM_using(TEEASIM_ld, LSIASIM);
 /* line 1846: */
CZEASIM_mamovir(BWGASIM_sizeof((&(S->Location_stack)), FZGASIM_tos1), OEGASIM_tempreg2);
 /* line 1847: */
MSIASIM.Rs1 = NEGASIM_tempreg1;
MSIASIM.Rs2 = OEGASIM_tempreg2;
 /* line 1848: */
MSIASIM.Rd = FVEASIM_g0;
 /* line 1849: */
ISEASIM_using(HCEASIM_subcc, A_UNITE(NSIASIM,mode1,1,MSIASIM));
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1851: */
 /* line 1853: */
if ( !VQIASIM_done )
{ 
 /* line 1854: */
AYDASIM_( RZDASIM_bd, CXDASIM_ne_a, &QSIASIM );
ASEASIM_using(QSIASIM, (&OSIASIM_finished));
 /* line 1857: */
WJHASIM_loadindex(S, EZGASIM_tos);
 /* line 1864: */
RSIASIM_loop = GLDASIM_location;
 /* line 1865: */
QEHASIM_loadoperands( S, EZGASIM_tos, &SSIASIM );
ISEASIM_using(TEEASIM_ld, A_UNITE(TSIASIM,mode1,1,SSIASIM));
 /* line 1866: */
QEHASIM_loadoperands( S, FZGASIM_tos1, &VSIASIM );
USIASIM_eq_rrr = VSIASIM;
 /* line 1867: */
WSIASIM = (&((&USIASIM_eq_rrr)->Rd)) ;
(*WSIASIM) = PEGASIM_tempreg3;
 /* line 1868: */
ISEASIM_using(TEEASIM_ld, A_UNITE(XSIASIM,mode1,1,USIASIM_eq_rrr));
 /* line 1869: */
YSIASIM.Rs1 = OEGASIM_tempreg2;
YSIASIM.Rs2 = PEGASIM_tempreg3;
YSIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(HCEASIM_subcc, A_UNITE(ZSIASIM,mode1,1,YSIASIM));
 /* line 1870: */
VXDASIM_( FZDASIM_b, IWDASIM_ne, &ATIASIM );
HREASIM_using(ATIASIM, (&PSIASIM_endloop));
 /* line 1871: */
KKHASIM_loopindex(S, RSIASIM_loop);
 /* line 1872: */
TXEASIM_fixmachinelabel(PSIASIM_endloop);
 /* line 1875: */
BTIASIM.Rs1 = QEGASIM_tempreg4;
BTIASIM.Rs2 = FVEASIM_g0;
BTIASIM.Rd = FVEASIM_g0;
ISEASIM_using(HCEASIM_subcc, A_UNITE(CTIASIM,mode1,1,BTIASIM));
 /* line 1877: */
TXEASIM_fixmachinelabel(OSIASIM_finished);
 /* line 1878: */
IHHASIM_pop(S);
IHHASIM_pop(S);
 /* line 1879: */
EPHASIM_pushnewstacklocation(S, 32);
 /* line 1881: */
 /* line 1882: */
 /* line 1885: */
FMGASIM_condition( YVDASIM_eq, &DTIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(ETIASIM,mode6,6,DTIASIM), &FTIASIM );
MWGASIM_changestateof((&(S->Location_stack)), FTIASIM);
} 
} 
A_PROC_EXIT(eq);
return;
} 
#undef NL

A_STATIC A68_VOID  JTIASIM_pushint_general(A68_425 * Stack, A68_INT  I, A68_INT  Len)
{ 
A68_BOOL  KTIASIM;  /* optbool result */
A68_BITS  LTIASIM;  /* SHR */
A68_INT  MTIASIM;  /* SHR */
A68_INT  NTIASIM_hi;
A68_BITS  OTIASIM_allocreg;
A68_215  PTIASIM;  /* collateral clause result */
A68_218  QTIASIM;  /* collateral clause result */
A68_219  RTIASIM;  /* OPERATORS - mode -> union mode */
A68_VC  STIASIM;  /* avoid structure result */
A68_376  TTIASIM;  /* avoid structure result */
A68_388  UTIASIM;  /* OPERATORS - mode -> union mode */
A68_413  VTIASIM;  /* avoid structure result */
A_PROC_ENTRY(pushint_general);
 /* line 1890: */
 /* line 1891: */
{ 
KTIASIM = (I>JQDASIM_maximm13);
if ( ! KTIASIM )
{KTIASIM = (I<KQDASIM_minimm13);
}
 /* line 1892: */
if ( KTIASIM )
{ 
LTIASIM = (A68_BITS )I ;
MTIASIM = 10 ;
NTIASIM_hi = (A68_INT )A_SHR(LTIASIM,MTIASIM);
 /* line 1893: */
EPHASIM_pushnewstacklocation(Stack, Len);
 /* line 1894: */
OTIASIM_allocreg = GBHASIM_rdest(Stack, EZGASIM_tos);
 /* line 1895: */
PTIASIM.Imm = NTIASIM_hi;
PTIASIM.Rd = OTIASIM_allocreg;
QQEASIM_using(XYDASIM_sethi, PTIASIM);
 /* line 1896: */
QTIASIM.Rs1 = OTIASIM_allocreg;
QTIASIM.Imm = (A68_INT )(A68_BITS )((A68_BITS )I&0X3ffU);
 /* line 1897: */
QTIASIM.Rd = OTIASIM_allocreg;
 /* line 1898: */
ISEASIM_using(DAEASIM_add, A_UNITE(RTIASIM,mode2,2,QTIASIM));
} 
else
{ 
EPHASIM_pushnewstacklocation(Stack, Len);
 /* line 1899: */
 /* line 1900: */
 /* line 1901: */
YCFASIM_word( I, &STIASIM );
WJGASIM_const( STIASIM, &TTIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(UTIASIM,mode3,3,TTIASIM), &VTIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), VTIASIM);
} 
} 
A_PROC_EXIT(pushint_general);
return;
} 
#undef NL

A68_VOID  YTIASIM_pushint(A68_425 * Stack, A68_INT  I)
{ 
A_PROC_ENTRY(pushint);
 /* line 1906: */
JTIASIM_pushint_general(Stack, I, 32);
A_PROC_EXIT(pushint);
return;
} 
#undef NL

A68_VOID  BUIASIM_len(A68_VC  W, A68_INT  L, A68_463  *ReturnedValue)
{ 
A68_463  CUIASIM;  /* collateral clause result */
A68_463  DUIASIM;  /* clause result */
A_PROC_ENTRY(len);
 /* line 1911: */
CUIASIM.Wo = W;
CUIASIM.Len = L;
DUIASIM = CUIASIM;
A_PROC_EXIT(len);
*ReturnedValue = (DUIASIM);
return;
} 
#undef NL

A68_VOID  GUIASIM_pushconst(A68_425 * Stack, A68_463  X)
{ 
A68_VC  IUIASIM;  /* avoid structure result */
A68_VC  HUIASIM_newconst;
A68_INT  JUIASIM_i;
A68_INT  KUIASIM;  /* to part of loop */
A68_CHAR * LUIASIM;  /* YIELD */
A68_VC  MUIASIM;  /* OPERATORS - simple index */
A68_CHAR * NUIASIM;  /* YIELD */
A68_INT  OUIASIM;  /* ADICOPS - MOD */
A68_INT  PUIASIM;  /* ADICOPS - MOD */
A68_INT  QUIASIM;  /* ADICOPS - MOD */
A68_INT  RUIASIM;  /* YIELD */
A68_INT  SUIASIM;  /* YIELD */
A68_INT  TUIASIM;  /* ADICOPS - MOD */
A68_INT  UUIASIM;  /* ADICOPS - MOD */
A68_INT  VUIASIM;  /* ADICOPS - MOD */
A68_BITS  WUIASIM;  /* SHR */
A68_INT  XUIASIM;  /* SHR */
A68_INT  YUIASIM;  /* ADICOPS - MOD */
A68_INT  ZUIASIM;  /* ADICOPS - MOD */
A68_INT  AVIASIM;  /* ADICOPS - MOD */
A68_BITS  BVIASIM;  /* SHL */
A68_INT  CVIASIM;  /* SHL */
A68_CHAR * DVIASIM;  /* YIELD */
A68_393  EVIASIM;  /* avoid structure result */
A68_393  FVIASIM;  /* united object - for case conformity */
A68_376  GVIASIM;  /* avoid structure result */
A68_388  HVIASIM;  /* OPERATORS - mode -> union mode */
A68_413  IVIASIM;  /* avoid structure result */
A68_218  JVIASIM;  /* collateral clause result */
A68_219  KVIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  LVIASIM_i;
A68_INT  MVIASIM;  /* to part of loop */
A_PROC_ENTRY(pushconst);
 /* line 1916: */
 /* line 1919: */
{ 
OCFASIM_newword( QHFASIM_bytesize(X.Len), &IUIASIM );
HUIASIM_newconst = IUIASIM;
 /* line 1921: */
KUIASIM = HUIASIM_newconst.upb;
for ( JUIASIM_i = 1;
JUIASIM_i <= KUIASIM;
JUIASIM_i += 1 )
{ 
 /* line 1922: */
 /* line 1923: */
if ( ((JUIASIM_i-1)>(X.Len/8)) )
{ 
 /* line 1924: */
 /* line 1925: */
LUIASIM = (&A_VINDEX(HUIASIM_newconst,JUIASIM_i)) ;
(*LUIASIM) = (A68_CHAR)0;
} 
else
{ 
 /* line 1926: */
 /* line 1927: */
MUIASIM = X.Wo ;
NUIASIM = (&A_VINDEX(HUIASIM_newconst,JUIASIM_i)) ;
(*NUIASIM) = (*(&A_VINDEX(MUIASIM,JUIASIM_i)));
} 
}
 /* line 1929: */
 /* line 1930: */
PUIASIM = X.Len ;
QUIASIM = 8 ;
if ( (A_MOD(PUIASIM,QUIASIM,OUIASIM)!=0) )
{ 
 /* line 1931: */
 /* line 1932: */
 /* line 1933: */
RUIASIM = (1+(X.Len/8)) ;
SUIASIM = (1+(X.Len/8)) ;
UUIASIM = X.Len ;
VUIASIM = 8 ;
WUIASIM = (A68_BITS )(A68_INT)(unsigned char)(*(&A_VINDEX(HUIASIM_newconst,SUIASIM))) ;
XUIASIM = (8-A_MOD(UUIASIM,VUIASIM,TUIASIM)) ;
ZUIASIM = X.Len ;
AVIASIM = 8 ;
BVIASIM = A_SHR(WUIASIM,XUIASIM) ;
CVIASIM = (8-A_MOD(ZUIASIM,AVIASIM,YUIASIM)) ;
DVIASIM = (&A_VINDEX(HUIASIM_newconst,RUIASIM)) ;
(*DVIASIM) = (A68_CHAR)(A68_INT )A_SHL(BVIASIM,CVIASIM);
} 
 /* line 1937: */
 /* line 1938: */
if ( (QHFASIM_bytesize(X.Len)<=4) )
{ 
 /* line 1939: */
 /* line 1940: */
JTIASIM_pushint_general(Stack, FFFASIM_integer(X.Wo), X.Len);
} 
else
{ 
TOHASIM_pushnew(Stack, X.Len);
 /* line 1942: */
 /* line 1943: */
JVGASIM_typeof( (&(Stack->Location_stack)), EZGASIM_tos, &EVIASIM );
FVIASIM = EVIASIM ;
switch ( FVIASIM.mode )
{ 
case 2: /* INT */
 /* line 1944: */
 /* line 1949: */
{ 
WJGASIM_const( HUIASIM_newconst, &GVIASIM );
HWGASIM_given( EZGASIM_tos, A_UNITE(HVIASIM,mode3,3,GVIASIM), &IVIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), IVIASIM);
 /* line 1950: */
NPEASIM_using(LYDASIM_call, ((GLDASIM_location+8)+HUIASIM_newconst.upb));
 /* line 1951: */
JVIASIM.Rs1 = JWEASIM_r15;
JVIASIM.Imm = 8;
JVIASIM.Rd = GBHASIM_rdest(Stack, EZGASIM_tos);
ISEASIM_using(DAEASIM_add, A_UNITE(KVIASIM,mode2,2,JVIASIM));
 /* line 1952: */
MVIASIM = HUIASIM_newconst.upb;
for ( LVIASIM_i = 1;
LVIASIM_i <= MVIASIM;
LVIASIM_i += 1 )
{ 
 /* line 1953: */
 /* line 1954: */
ZZEASIM_maputchar((*(&A_VINDEX(HUIASIM_newconst,LVIASIM_i))));
}
 /* line 1955: */
 /* line 1956: */
 /* line 1957: */
 /* line 1958: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(pushconst);
return;
} 
#undef NL

A68_VOID  PVIASIM_itos(A68_425 * Stack, A68_416  Ip)
{ 
A68_218  QVIASIM;  /* collateral clause result */
A68_219  RVIASIM;  /* OPERATORS - mode -> union mode */
A68_370  SVIASIM;  /* avoid structure result */
A68_388  TVIASIM;  /* OPERATORS - mode -> union mode */
A68_413  UVIASIM;  /* avoid structure result */
A_PROC_ENTRY(itos);
 /* line 1964: */
 /* line 1967: */
{ 
 /* line 1970: */
if ( (Ip.Bl==32) )
{ 
 /* line 1971: */
/*SKIP*/;
} 
else
{ 
QVIASIM.Rs1 = KBHASIM_rsource(Stack, Ip.O);
 /* line 1972: */
QVIASIM.Imm = (32-Ip.Bl);
QVIASIM.Rd = GBHASIM_rdest(Stack, Ip.O);
ISEASIM_using(ZDEASIM_sll, A_UNITE(RVIASIM,mode2,2,QVIASIM));
 /* line 1973: */
IIGASIM_inregister( A68_FALSE, &SVIASIM );
HWGASIM_given( Ip.O, A_UNITE(TVIASIM,mode1,1,SVIASIM), &UVIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), UVIASIM);
 /* line 1974: */
 /* line 1975: */
 /* line 1976: */
XWGASIM_changesizeof((&(Stack->Location_stack)), Ip);
} 
} 
A_PROC_EXIT(itos);
return;
} 
#undef NL

A68_VOID  XVIASIM_utos(A68_425 * Stack, A68_416  Ip)
{ 
A_PROC_ENTRY(utos);
 /* line 1982: */
PVIASIM_itos(Stack, Ip);
A_PROC_EXIT(utos);
return;
} 
#undef NL

A68_VOID  AWIASIM_stoi(A68_425 * Stack, A68_INT  O)
{ 
A68_393  BWIASIM;  /* avoid structure result */
A68_393  CWIASIM;  /* united object - for case conformity */
A68_218  DWIASIM;  /* collateral clause result */
A68_219  EWIASIM;  /* OPERATORS - mode -> union mode */
A68_370  FWIASIM;  /* avoid structure result */
A68_388  GWIASIM;  /* OPERATORS - mode -> union mode */
A68_413  HWIASIM;  /* avoid structure result */
A68_416  IWIASIM;  /* avoid structure result */
A68_219  JWIASIM;  /* avoid structure result */
A68_217  KWIASIM;  /* collateral clause result */
A68_219  LWIASIM;  /* OPERATORS - mode -> union mode */
A68_217  MWIASIM;  /* collateral clause result */
A68_219  NWIASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(stoi);
 /* line 1988: */
 /* line 1989: */
JVGASIM_typeof( (&(Stack->Location_stack)), O, &BWIASIM );
CWIASIM = BWIASIM ;
switch ( CWIASIM.mode )
{ 
case 1: /* BOOL */
 /* line 1991: */
 /* line 1994: */
if ( (BWGASIM_sizeof((&(Stack->Location_stack)), O)==32) )
{ 
 /* line 1995: */
/*SKIP*/;
} 
else
{ 
DWIASIM.Rs1 = KBHASIM_rsource(Stack, O);
 /* line 1996: */
DWIASIM.Imm = (32-BWGASIM_sizeof((&(Stack->Location_stack)), O));
DWIASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(HEEASIM_sra, A_UNITE(EWIASIM,mode2,2,DWIASIM));
 /* line 1997: */
IIGASIM_inregister( A68_FALSE, &FWIASIM );
HWGASIM_given( O, A_UNITE(GWIASIM,mode1,1,FWIASIM), &HWIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), HWIASIM);
 /* line 1998: */
 /* line 1999: */
 /* line 2000: */
SWGASIM_givenn( O, 32, &IWIASIM );
XWGASIM_changesizeof((&(Stack->Location_stack)), IWIASIM);
} 
break;
case 3: /* CHAR */
 /* line 2002: */
 /* line 2004: */
{ 
DFHASIM_sizeoperands( Stack, O, &JWIASIM );
ISEASIM_using(TEEASIM_ld, JWIASIM);
 /* line 2005: */
KWIASIM.Rs1 = FVEASIM_g0;
KWIASIM.Rs2 = NEGASIM_tempreg1;
KWIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(LWIASIM,mode1,1,KWIASIM));
 /* line 2007: */
HGHASIM_transmutesmall(Stack, O);
 /* line 2008: */
MWIASIM.Rs1 = KBHASIM_rsource(Stack, O);
MWIASIM.Rs2 = NEGASIM_tempreg1;
 /* line 2009: */
MWIASIM.Rd = GBHASIM_rdest(Stack, O);
 /* line 2011: */
ISEASIM_using(HEEASIM_sra, A_UNITE(NWIASIM,mode1,1,MWIASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(stoi);
return;
} 
#undef NL

A68_VOID  QWIASIM_stou(A68_425 * Stack, A68_INT  O)
{ 
A68_393  RWIASIM;  /* avoid structure result */
A68_393  SWIASIM;  /* united object - for case conformity */
A68_218  TWIASIM;  /* collateral clause result */
A68_219  UWIASIM;  /* OPERATORS - mode -> union mode */
A68_370  VWIASIM;  /* avoid structure result */
A68_388  WWIASIM;  /* OPERATORS - mode -> union mode */
A68_413  XWIASIM;  /* avoid structure result */
A68_416  YWIASIM;  /* avoid structure result */
A68_219  ZWIASIM;  /* avoid structure result */
A68_217  AXIASIM;  /* collateral clause result */
A68_219  BXIASIM;  /* OPERATORS - mode -> union mode */
A68_217  CXIASIM;  /* collateral clause result */
A68_219  DXIASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(stou);
 /* line 2017: */
 /* line 2018: */
JVGASIM_typeof( (&(Stack->Location_stack)), O, &RWIASIM );
SWIASIM = RWIASIM ;
switch ( SWIASIM.mode )
{ 
case 1: /* BOOL */
 /* line 2019: */
 /* line 2022: */
if ( (BWGASIM_sizeof((&(Stack->Location_stack)), O)==32) )
{ 
 /* line 2023: */
/*SKIP*/;
} 
else
{ 
TWIASIM.Rs1 = KBHASIM_rsource(Stack, O);
 /* line 2024: */
TWIASIM.Imm = (32-BWGASIM_sizeof((&(Stack->Location_stack)), O));
TWIASIM.Rd = GBHASIM_rdest(Stack, O);
ISEASIM_using(DEEASIM_srl, A_UNITE(UWIASIM,mode2,2,TWIASIM));
 /* line 2025: */
IIGASIM_inregister( A68_FALSE, &VWIASIM );
HWGASIM_given( O, A_UNITE(WWIASIM,mode1,1,VWIASIM), &XWIASIM );
MWGASIM_changestateof((&(Stack->Location_stack)), XWIASIM);
 /* line 2026: */
 /* line 2027: */
 /* line 2028: */
SWGASIM_givenn( O, 32, &YWIASIM );
XWGASIM_changesizeof((&(Stack->Location_stack)), YWIASIM);
} 
break;
case 3: /* CHAR */
 /* line 2030: */
 /* line 2032: */
{ 
DFHASIM_sizeoperands( Stack, O, &ZWIASIM );
ISEASIM_using(TEEASIM_ld, ZWIASIM);
 /* line 2033: */
AXIASIM.Rs1 = FVEASIM_g0;
AXIASIM.Rs2 = NEGASIM_tempreg1;
AXIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(HCEASIM_subcc, A_UNITE(BXIASIM,mode1,1,AXIASIM));
 /* line 2035: */
HGHASIM_transmutesmall(Stack, O);
 /* line 2036: */
CXIASIM.Rs1 = KBHASIM_rsource(Stack, O);
CXIASIM.Rs2 = NEGASIM_tempreg1;
 /* line 2037: */
CXIASIM.Rd = GBHASIM_rdest(Stack, O);
 /* line 2039: */
ISEASIM_using(DEEASIM_srl, A_UNITE(DXIASIM,mode1,1,CXIASIM));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(stou);
return;
} 
#undef NL

A68_VOID  GXIASIM_itos(A68_425 * Stack, A68_INT  W)
{ 
A68_416  HXIASIM;  /* avoid structure result */
A_PROC_ENTRY(itos);
 /* line 2045: */
SWGASIM_givenn( EZGASIM_tos, W, &HXIASIM );
PVIASIM_itos(Stack, HXIASIM);
A_PROC_EXIT(itos);
return;
} 
#undef NL

A68_VOID  KXIASIM_utos(A68_425 * Stack, A68_INT  W)
{ 
A68_416  LXIASIM;  /* avoid structure result */
A_PROC_ENTRY(utos);
 /* line 2051: */
SWGASIM_givenn( EZGASIM_tos, W, &LXIASIM );
XVIASIM_utos(Stack, LXIASIM);
A_PROC_EXIT(utos);
return;
} 
#undef NL

A68_VOID  NXIASIM_stoi(A68_425 * Stack)
{ 
A_PROC_ENTRY(stoi);
 /* line 2057: */
AWIASIM_stoi(Stack, EZGASIM_tos);
A_PROC_EXIT(stoi);
return;
} 
#undef NL

A68_VOID  PXIASIM_stou(A68_425 * Stack)
{ 
A_PROC_ENTRY(stou);
 /* line 2063: */
QWIASIM_stou(Stack, EZGASIM_tos);
A_PROC_EXIT(stou);
return;
} 
#undef NL

A68_VOID  SXIASIM_drop(A68_425 * Stack, A68_INT  N)
{ 
A68_INT  TXIASIM;  /* to part of loop */
A68_INT  UXIASIM;  /* loop control */
A_PROC_ENTRY(drop);
 /* line 2068: */
TXIASIM = N;
for ( UXIASIM = 1;
UXIASIM <= TXIASIM;
UXIASIM += 1 )
{ 
IHHASIM_pop(Stack);
}
A_PROC_EXIT(drop);
return;
} 
#undef NL

A68_VOID  XXIASIM_fanout(A68_425 * Stack, A68_INT  Offset)
{ 
A68_438  YXIASIM;  /* avoid structure result */
A68_438  ZXIASIM;  /* united object - for case conformity */
A68_BITS  AYIASIM_r;
A68_217  BYIASIM;  /* collateral clause result */
A68_219  CYIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  DYIASIM_i;
A68_218  EYIASIM;  /* collateral clause result */
A68_219  FYIASIM;  /* OPERATORS - mode -> union mode */
A68_217  GYIASIM;  /* collateral clause result */
A68_219  HYIASIM;  /* OPERATORS - mode -> union mode */
A68_217  IYIASIM;  /* collateral clause result */
A68_219  JYIASIM;  /* OPERATORS - mode -> union mode */
A68_217  KYIASIM;  /* collateral clause result */
A68_219  LYIASIM;  /* OPERATORS - mode -> union mode */
A68_218  MYIASIM;  /* collateral clause result */
A68_219  NYIASIM;  /* OPERATORS - mode -> union mode */
A68_218  OYIASIM;  /* collateral clause result */
A68_219  PYIASIM;  /* OPERATORS - mode -> union mode */
A68_INT  QYIASIM_loop;
A68_217  RYIASIM;  /* collateral clause result */
A68_219  SYIASIM;  /* OPERATORS - mode -> union mode */
A68_218  TYIASIM;  /* collateral clause result */
A68_219  UYIASIM;  /* OPERATORS - mode -> union mode */
A68_236  VYIASIM;  /* avoid structure result */
A68_217  WYIASIM;  /* collateral clause result */
A68_219  XYIASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fanout);
 /* line 2076: */
 /* line 2077: */
{ 
YTIASIM_pushint(Stack, Offset);
XHIASIM_add(Stack);
 /* line 2078: */
 /* line 2079: */
LCHASIM_source( Stack, EZGASIM_tos, &YXIASIM );
ZXIASIM = YXIASIM ;
switch ( ZXIASIM.mode )
{ 
case 1: /* BITS */
AYIASIM_r = (ZXIASIM.data.mode1);
BYIASIM.Rs1 = TEGASIM_globalpointer;
BYIASIM.Rs2 = AYIASIM_r;
BYIASIM.Rd = NEGASIM_tempreg1;
 /* line 2080: */
ISEASIM_using(DAEASIM_add, A_UNITE(CYIASIM,mode1,1,BYIASIM));
break;
case 2: /* INT */
DYIASIM_i = (ZXIASIM.data.mode2);
EYIASIM.Rs1 = TEGASIM_globalpointer;
EYIASIM.Imm = DYIASIM_i;
 /* line 2081: */
EYIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(FYIASIM,mode2,2,EYIASIM));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2082: */
GYIASIM.Rs1 = NEGASIM_tempreg1;
GYIASIM.Rs2 = FVEASIM_g0;
GYIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(TEEASIM_ld, A_UNITE(HYIASIM,mode1,1,GYIASIM));
 /* line 2083: */
IYIASIM.Rs1 = TEGASIM_globalpointer;
IYIASIM.Rs2 = NEGASIM_tempreg1;
IYIASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(DAEASIM_add, A_UNITE(JYIASIM,mode1,1,IYIASIM));
 /* line 2085: */
KYIASIM.Rs1 = NEGASIM_tempreg1;
KYIASIM.Rs2 = FVEASIM_g0;
KYIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(TEEASIM_ld, A_UNITE(LYIASIM,mode1,1,KYIASIM));
 /* line 2086: */
MYIASIM.Rs1 = OEGASIM_tempreg2;
MYIASIM.Imm = 2;
MYIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(ZDEASIM_sll, A_UNITE(NYIASIM,mode2,2,MYIASIM));
 /* line 2088: */
OYIASIM.Rs1 = FVEASIM_g0;
OYIASIM.Imm = 1;
OYIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(LAEASIM_or, A_UNITE(PYIASIM,mode2,2,OYIASIM));
 /* line 2090: */
QYIASIM_loop = GLDASIM_location;
 /* line 2091: */
RYIASIM.Rs1 = NEGASIM_tempreg1;
RYIASIM.Rs2 = OEGASIM_tempreg2;
RYIASIM.Rd = QEGASIM_tempreg4;
ISEASIM_using(TEEASIM_ld, A_UNITE(SYIASIM,mode1,1,RYIASIM));
 /* line 2092: */
TYIASIM.Rs1 = OEGASIM_tempreg2;
TYIASIM.Imm = 4;
TYIASIM.Rd = OEGASIM_tempreg2;
ISEASIM_using(HCEASIM_subcc, A_UNITE(UYIASIM,mode2,2,TYIASIM));
 /* line 2093: */
VXDASIM_( FZDASIM_b, JXDASIM_pos_a, &VYIASIM );
YQEASIM_using(VYIASIM, QYIASIM_loop);
 /* line 2094: */
WYIASIM.Rs1 = TEGASIM_globalpointer;
WYIASIM.Rs2 = QEGASIM_tempreg4;
WYIASIM.Rd = PEGASIM_tempreg3;
ISEASIM_using(JFEASIM_st, A_UNITE(XYIASIM,mode1,1,WYIASIM));
 /* line 2096: */
 /* line 2097: */
IHHASIM_pop(Stack);
} 
A_PROC_EXIT(fanout);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void ZYGASIM(void)   /* initialise DECS kecodegenstacksparc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kecodegenstacksparc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kecodegenserversparc.m","./mfiles/kemassemsparc.m","./mfiles/kesave.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AAFASIM();   /* USE kecodegenserversparc */
KIDASIM();   /* USE kemassemsparc */
EFBASIM();   /* USE kesave */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kecodegenstacksparc.a68";
A_config.translation_time = "Tue Apr  4 11:06:51 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YYGASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:06:51 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kecodegenstacksparc);
UEAALIB_a68config(LGAALIB_configinfo, DZGASIM);
 /* line 92: */
 /* line 113: */
 /* line 115: */
 /* line 116: */
 /* line 118: */
 /* line 121: */
 /* line 123: */
 /* line 133: */
 /* line 143: */
 /* line 155: */
 /* line 167: */
 /* line 176: */
 /* line 180: */
 /* line 184: */
 /* line 189: */
 /* line 199: */
 /* line 207: */
 /* line 240: */
 /* line 268: */
 /* line 299: */
 /* line 326: */
 /* line 335: */
 /* line 354: */
 /* line 368: */
 /* line 396: */
 /* line 415: */
 /* line 424: */
 /* line 443: */
 /* line 470: */
 /* line 544: */
 /* line 563: */
 /* line 572: */
 /* line 593: */
 /* line 655: */
 /* line 698: */
 /* line 707: */
 /* line 716: */
 /* line 725: */
 /* line 740: */
 /* line 758: */
 /* line 780: */
 /* line 797: */
 /* line 931: */
 /* line 991: */
 /* line 1068: */
 /* line 1096: */
 /* line 1124: */
 /* line 1152: */
 /* line 1198: */
 /* line 1211: */
 /* line 1217: */
 /* line 1251: */
 /* line 1431: */
 /* line 1468: */
 /* line 1483: */
 /* line 1544: */
 /* line 1606: */
 /* line 1637: */
 /* line 1672: */
 /* line 1726: */
 /* line 1741: */
 /* line 1772: */
 /* line 1888: */
 /* line 1904: */
 /* line 1909: */
 /* line 1913: */
 /* line 1960: */
 /* line 1978: */
 /* line 1984: */
 /* line 2013: */
 /* line 2041: */
 /* line 2047: */
 /* line 2053: */
 /* line 2059: */
 /* line 2065: */
 /* line 2070: */
 /* line 2099: */
 /* line 2101: */
 /* line 2172: */
/*SKIP*/;
A_PROC_EXIT(DECS kecodegenstacksparc);
} 
#undef NL
/* end of translation of ./a68files/kecodegenstacksparc.a68 */
