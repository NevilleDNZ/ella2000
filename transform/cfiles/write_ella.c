
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
/* UNAME:YOMBTRN */
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
struct A68t173{
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t173 ,struct A68t173 ,struct A68t173 *),(struct A68t173 ,struct A68t173 ,struct A68t173 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE173,MODE173) MODE173 */

A_PROCEDURE(struct A68t173 *,A68t175,(struct A68t173 *,struct A68t173 ),(struct A68t173 *,struct A68t173 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE173,MODE173) REF MODE173 */

A_PROCEDURE(A68_BOOL ,A68t176,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE173,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,struct A68t173 *),(A68_INT ,struct A68t173 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) MODE173 */
struct A68t179{
A68_VC  Id;
struct A68t179 * Rest;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,REF MODE179)  */
struct A68t180{
A68_INT  Int;
A_PAD_INT(PAD_37)
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t181 { A68_INT mode; union {
struct A68t182 * mode1;
struct A68t183 * mode2;
struct A68t184 * mode3;
struct A68t185 * mode4;
struct A68t186 * mode5;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186)  */
struct A68t182{
A68_INT  Attrno;
A_PAD_INT(PAD_38)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_VC  Classname;
struct A68t179 * Strings;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE179)  */
struct A68t184{
struct A68t181  Elem;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE181,REF MODE184)  */
struct A68t185{
struct A68t181  Attr;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE181)  */
struct A68t186{
A68_INT  Attrnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_INT  Sort;
A_PAD_INT(PAD_40)
A68_VC  Attrname;
struct A68t181  Value;
struct A68t188 * Usage;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26,MODE181,REF MODE188)  */
struct A68t188{
A68_INT  Contextno;
A_PAD_INT(PAD_41)
A68_INT  Closureno;
A_PAD_INT(PAD_42)
A68_INT  Libv_spec;
A_PAD_INT(PAD_43)
A68_INT  Libv_body;
A_PAD_INT(PAD_44)
A68_BOOL  Import;
A_PAD_BOOL(PAD_45)
A68_BOOL  Export;
A_PAD_BOOL(PAD_46)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t189{
struct A68t181  Tag;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE181)  */
struct A68t190 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198 * mode8;
struct A68t199 * mode9;
struct A68t200 * mode10;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200)  */
struct A68t191{
A68_INT  Int;
A_PAD_INT(PAD_47)
A68_VC  Text;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t192{
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t190  Test;
struct A68t190  Standard;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,MODE190,MODE190)  */
struct A68t193{
A68_INT  Nameno;
A_PAD_INT(PAD_49)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Intno;
A_PAD_INT(PAD_50)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t190  Left;
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t190  Right;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE190,INT,MODE190)  */
struct A68t196{
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t190  Right;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,MODE190)  */
struct A68t197{
struct A68t190  Cond;
struct A68t190  True;
struct A68t190  False;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE190,MODE190,MODE190)  */
struct A68t198{
struct A68t190  Formula;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE190)  */
struct A68t199{
A68_INT  Macparno;
A_PAD_INT(PAD_53)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t200{
A68_INT  Fnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t201{
struct A68t190  Tag;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE190)  */
struct A68t202{
struct A68t190  Formula;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE190,REF MODE202)  */
struct A68t205{
struct A68t190  Lwb;
struct A68t190  Upb;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE190,MODE190)  */
struct A68t204 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198 * mode8;
struct A68t199 * mode9;
struct A68t200 * mode10;
struct A68t205  mode11;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,MODE205)  */
struct A68t203{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Intname;
struct A68t181  Attr;
struct A68t204  Value;
struct A68t188 * Usage;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE204,REF MODE188)  */
struct A68t206 { A68_INT mode; union {
struct A68t207 * mode1;
struct A68t208 * mode2;
struct A68t209 * mode3;
struct A68t210 * mode4;
struct A68t211 * mode5;
struct A68t212 * mode6;
struct A68t213 * mode7;
struct A68t199 * mode8;
struct A68t214 * mode9;
} data; };
typedef struct A68t206  A68_206 ;    /* UNION(REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE199,REF MODE214)  */
struct A68t207{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
struct A68t190  Size;
struct A68t206  Elem;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE190,MODE206)  */
struct A68t209{
struct A68t206  Elem;
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE206,REF MODE209)  */
struct A68t210{
struct A68t206  From;
struct A68t206  To;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t211{
struct A68t206  Type;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE206)  */
struct A68t212{
struct A68t190  Size;
struct A68t206  Char;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE190,MODE206)  */
struct A68t213{
A68_INT  Tvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT)  */
struct A68t214{
A68_INT  Tnull;
A_PAD_INT(PAD_58)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
struct A68t206  Tag;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE206)  */
struct A68t216{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t217{
A68_VC  Altname;
struct A68t206  Assoc;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE26,MODE206)  */
struct A68t218{
A68_VC  Tagname;
struct A68t205  Range;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,MODE205)  */
A_VECTOR(struct A68t217 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE217 */
struct A68t219 { A68_INT mode; union {
struct A68t220  mode1;
struct A68t218 * mode2;
struct A68t215 * mode3;
struct A68t216 * mode4;
} data; };
typedef struct A68t219  A68_219 ;    /* UNION(REF MODE220,REF MODE218,REF MODE215,REF MODE216)  */
struct A68t221{
A68_INT  Sort;
A_PAD_INT(PAD_59)
A68_VC  Typename;
struct A68t181  Attr;
struct A68t219  Body;
struct A68t188 * Usage;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE219,REF MODE188)  */
struct A68t222{
A68_INT  Constno;
A_PAD_INT(PAD_60)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT)  */
struct A68t223{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
A68_INT  Primno;
A_PAD_INT(PAD_62)
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,INT)  */
struct A68t224{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t190  Index;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT,MODE190)  */
struct A68t225{
A68_INT  Typeno;
A_PAD_INT(PAD_64)
struct A68t205  Range;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,MODE205)  */
struct A68t226{
struct A68t206  Querytype;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE206)  */
struct A68t228 { A68_INT mode; union {
struct A68t222 * mode1;
struct A68t223 * mode2;
struct A68t224 * mode3;
struct A68t226 * mode4;
struct A68t229 * mode5;
struct A68t230 * mode6;
struct A68t211 * mode7;
struct A68t225 * mode8;
struct A68t231 * mode9;
struct A68t232 * mode10;
struct A68t233 * mode11;
struct A68t234 * mode12;
struct A68t235 * mode13;
struct A68t236 * mode14;
struct A68t237 * mode15;
struct A68t238 * mode16;
struct A68t239 * mode17;
struct A68t240 * mode18;
struct A68t241 * mode19;
struct A68t242 * mode20;
struct A68t243 * mode21;
struct A68t244 * mode22;
struct A68t245 * mode23;
struct A68t246 * mode24;
struct A68t247 * mode25;
struct A68t248 * mode26;
struct A68t249 * mode27;
struct A68t250 * mode28;
struct A68t251 * mode29;
struct A68t252 * mode30;
struct A68t253 * mode31;
struct A68t254 * mode32;
struct A68t255 * mode33;
struct A68t256 * mode34;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(REF MODE222,REF MODE223,REF MODE224,REF MODE226,REF MODE229,REF MODE230,REF MODE211,REF MODE225,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_65)
A68_VC  Constname;
struct A68t181  Attr;
struct A68t228  Value;
struct A68t188 * Usage;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE228,REF MODE188)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_66)
struct A68t32  String;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t230{
A68_INT  Cvoid;
A_PAD_INT(PAD_67)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT)  */
struct A68t231{
A68_INT  Typeno;
A_PAD_INT(PAD_68)
A68_INT  Firstno;
A_PAD_INT(PAD_69)
A68_INT  Lastno;
A_PAD_INT(PAD_70)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,INT,INT)  */
struct A68t232{
struct A68t228  Alt;
struct A68t232 * Rest;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE228,REF MODE232)  */
struct A68t233{
A68_INT  Sort;
A_PAD_INT(PAD_71)
A68_INT  Nameno;
A_PAD_INT(PAD_72)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,INT)  */
struct A68t234{
struct A68t228  Sink;
struct A68t228  Source;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t235{
A68_INT  Typeno;
A_PAD_INT(PAD_73)
A68_INT  Altno;
A_PAD_INT(PAD_74)
struct A68t228  Assoc;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT,MODE228)  */
struct A68t236{
struct A68t228  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_75)
A68_INT  Altno;
A_PAD_INT(PAD_76)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE228,INT,INT)  */
struct A68t237{
struct A68t228  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_77)
A68_INT  Nameno;
A_PAD_INT(PAD_78)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE228,INT,INT)  */
struct A68t238{
struct A68t228  Unit;
struct A68t190  Index;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE228,MODE190)  */
struct A68t239{
struct A68t228  Unit;
struct A68t205  Range;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE228,MODE205)  */
struct A68t240{
struct A68t228  Unit;
struct A68t228  Index;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t241{
struct A68t228  Unit;
struct A68t228  Index;
struct A68t228  From;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE228,MODE228,MODE228)  */
struct A68t242{
struct A68t190  Size;
struct A68t228  Elem;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t243{
struct A68t228  Elem;
struct A68t243 * Rest;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE228,REF MODE243)  */
struct A68t244{
A68_BOOL  String;
A_PAD_BOOL(PAD_79)
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t228  Left;
struct A68t228  Right;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(BOOL,INT,MODE228,MODE228)  */
A_VECTOR(struct A68t271 ,A68t270);
typedef struct A68t270  A68_270 ;    /* VECTOR [] MODE271 */
struct A68t273{
struct A68t228  Tag;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE228)  */
struct A68t268{
A68_INT  Fnno;
A_PAD_INT(PAD_81)
struct A68t270  Macparams;
struct A68t181  Attr;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE270,MODE181)  */
struct A68t272 { A68_INT mode; union {
struct A68t189  mode1;
struct A68t201  mode2;
struct A68t215  mode3;
struct A68t273  mode4;
struct A68t268  mode5;
} data; };
typedef struct A68t272  A68_272 ;    /* UNION(MODE189,MODE201,MODE215,MODE273,MODE268)  */
struct A68t271{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t272  Param;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,MODE272)  */
struct A68t245{
struct A68t268  Inst;
struct A68t228  Right;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE268,MODE228)  */
struct A68t246{
struct A68t228  Left;
struct A68t268  Inst;
struct A68t228  Right;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE228,MODE268,MODE228)  */
struct A68t247{
struct A68t228  Input;
struct A68t288 * Choices;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE228,REF MODE288)  */
struct A68t248{
struct A68t190  Cond;
struct A68t228  True;
struct A68t228  False;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE190,MODE228,MODE228)  */
struct A68t249{
struct A68t190  Repl;
struct A68t228  Body;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t250{
struct A68t276 * Body;
struct A68t228  Output;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE276,MODE228)  */
struct A68t251{
struct A68t257 * Body;
struct A68t228  Output;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE257,MODE228)  */
struct A68t252{
struct A68t228  Unit;
struct A68t181  Attr;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE228,MODE181)  */
struct A68t253{
struct A68t228  Unit;
struct A68t192  Check;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE228,MODE192)  */
struct A68t254{
struct A68t228  Unit;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE228)  */
struct A68t255{
struct A68t190  Size;
struct A68t228  Char;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t256{
A68_INT  Unull;
A_PAD_INT(PAD_83)
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT)  */
struct A68t259{
A68_INT  Fnno;
A_PAD_INT(PAD_84)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t258 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
struct A68t260 * mode6;
struct A68t261 * mode7;
struct A68t262 * mode8;
struct A68t263 * mode9;
struct A68t264 * mode10;
struct A68t265 * mode11;
struct A68t266 * mode12;
} data; };
typedef struct A68t258  A68_258 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266)  */
struct A68t257{
struct A68t258  Step;
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE258,REF MODE257)  */
struct A68t260{
struct A68t190  Cond;
struct A68t274 * Print;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE190,REF MODE274)  */
struct A68t261{
struct A68t190  Cond;
struct A68t274 * Fault;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE190,REF MODE274)  */
struct A68t262{
struct A68t269 * Letnames;
struct A68t228  Unit;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(REF MODE269,MODE228)  */
struct A68t263{
struct A68t202 * Sizes;
struct A68t268  Inst;
struct A68t269 * Makenames;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE202,MODE268,REF MODE269)  */
struct A68t264{
struct A68t228  From;
struct A68t228  To;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t265{
struct A68t202 * Repls;
struct A68t267 * Joins;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(REF MODE202,REF MODE267)  */
struct A68t266{
A68_INT  Stepnull;
A_PAD_INT(PAD_85)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT)  */
struct A68t267{
struct A68t264  Join;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE264,REF MODE267)  */
struct A68t269{
A68_INT  Nameno;
A_PAD_INT(PAD_86)
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT,REF MODE269)  */
struct A68t275 { A68_INT mode; union {
A68_VC  mode1;
struct A68t201 * mode2;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(REF MODE26,REF MODE201)  */
struct A68t274{
struct A68t275  Item;
struct A68t274 * Rest;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE275,REF MODE274)  */
struct A68t277 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
struct A68t260 * mode6;
struct A68t261 * mode7;
struct A68t278 * mode8;
struct A68t279 * mode9;
struct A68t280 * mode10;
struct A68t281 * mode11;
struct A68t282 * mode12;
struct A68t283 * mode13;
struct A68t284 * mode14;
struct A68t285 * mode15;
struct A68t276 * mode16;
struct A68t286 * mode17;
} data; };
typedef struct A68t277  A68_277 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259,REF MODE260,REF MODE261,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE276,REF MODE286)  */
struct A68t276{
struct A68t277  Step;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE277,REF MODE276)  */
struct A68t278{
struct A68t262  Seqlet;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE262)  */
struct A68t279{
struct A68t262  Seqvar;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE262)  */
struct A68t280{
struct A68t269 * Pvarnames;
struct A68t228  Init;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE269,MODE228)  */
struct A68t281{
struct A68t228  To;
struct A68t228  From;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t282{
struct A68t228  Input;
struct A68t287 * Choices;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE228,REF MODE287)  */
struct A68t283{
struct A68t190  Cond;
struct A68t277  True;
struct A68t277  False;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE190,MODE277,MODE277)  */
struct A68t284{
struct A68t190  Repl;
struct A68t277  Body;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE190,MODE277)  */
struct A68t285{
A68_INT  Seqnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT)  */
struct A68t286{
struct A68t190  Size;
struct A68t277  Elem;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE190,MODE277)  */
struct A68t287{
A68_BOOL  Check;
A_PAD_BOOL(PAD_88)
A68_INT  Sort;
A_PAD_INT(PAD_89)
struct A68t228  Test;
struct A68t277  Output;
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(BOOL,INT,MODE228,MODE277,REF MODE287)  */
struct A68t288{
A68_BOOL  Check;
A_PAD_BOOL(PAD_90)
A68_INT  Sort;
A_PAD_INT(PAD_91)
struct A68t228  Test;
struct A68t228  Output;
struct A68t288 * Rest;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(BOOL,INT,MODE228,MODE228,REF MODE288)  */
struct A68t289 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
} data; };
typedef struct A68t289  A68_289 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259)  */
struct A68t290{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_92)
A68_VC  Name;
struct A68t270  Macparams;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(BOOL,REF MODE26,REF MODE270)  */
struct A68t291{
struct A68t190  Output;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE190)  */
struct A68t292{
A68_INT  Reform;
A_PAD_INT(PAD_93)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT)  */
struct A68t293{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_94)
struct A68t144  Ctname;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE26,INT,MODE144)  */
struct A68t294{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t228  Init;
struct A68t190  Ambigtime;
struct A68t228  Ambig;
struct A68t190  Delaytime;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,MODE228,MODE190,MODE228,MODE190)  */
struct A68t295{
struct A68t228  Init;
struct A68t190  Delaytime;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE228,MODE190)  */
struct A68t296{
struct A68t228  Init;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE228)  */
struct A68t297{
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t190  Interval;
struct A68t228  Init;
struct A68t190  Skew;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,MODE190,MODE228,MODE190)  */
struct A68t298{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_97)
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t268  Inst;
struct A68t190  Scale;
struct A68t228  Init;
struct A68t190  Skew;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(BOOL,INT,MODE268,MODE190,MODE228,MODE190)  */
struct A68t300 { A68_INT mode; union {
struct A68t273 * mode1;
struct A68t290 * mode2;
struct A68t291 * mode3;
struct A68t292 * mode4;
struct A68t293 * mode5;
struct A68t294 * mode6;
struct A68t295 * mode7;
struct A68t296 * mode8;
struct A68t297 * mode9;
struct A68t298 * mode10;
struct A68t299 * mode11;
struct A68t301 * mode12;
} data; };
typedef struct A68t300  A68_300 ;    /* UNION(REF MODE273,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE301)  */
struct A68t299{
struct A68t180 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_99)
struct A68t300  Fnbody;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE180,BOOL,MODE300)  */
struct A68t301{
A68_INT  Bodynull;
A_PAD_INT(PAD_100)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT)  */
struct A68t302{
A68_INT  Sort;
A_PAD_INT(PAD_101)
struct A68t289  Spec;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,MODE289)  */
struct A68t303{
A68_VC  Name;
struct A68t206  Type;
struct A68t181  Attr;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE26,MODE206,MODE181)  */
A_VECTOR(struct A68t302 ,A68t305);
typedef struct A68t305  A68_305 ;    /* VECTOR [] MODE302 */
A_VECTOR(struct A68t303 ,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] MODE303 */
struct A68t304{
A68_INT  Sort;
A_PAD_INT(PAD_102)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_103)
A68_VC  Fnname;
struct A68t305  Macspecs;
struct A68t181  Attr;
struct A68t269 * Inputs;
struct A68t269 * Outputs;
struct A68t306  Nametypes;
struct A68t300  Fnbody;
struct A68t188 * Usage;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE305,MODE181,REF MODE269,REF MODE269,REF MODE306,MODE300,REF MODE188)  */
A_VECTOR(struct A68t187 *,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] REF MODE187 */
A_VECTOR(struct A68t203 *,A68t309);
typedef struct A68t309  A68_309 ;    /* VECTOR [] REF MODE203 */
A_VECTOR(struct A68t221 *,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] REF MODE221 */
A_VECTOR(struct A68t227 *,A68t311);
typedef struct A68t311  A68_311 ;    /* VECTOR [] REF MODE227 */
A_VECTOR(struct A68t304 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE304 */
struct A68t307{
struct A68t308  Attrs;
struct A68t309  Ints;
struct A68t310  Types;
struct A68t311  Consts;
struct A68t312  Fns;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312)  */
struct A68t313{
A68_INT  Closureno;
A_PAD_INT(PAD_104)
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t307 * Environ;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT,INT,REF MODE307)  */
struct A68t314{
struct A68t313  Outer;
struct A68t314 * Rest;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE313,REF MODE314)  */
A_VECTOR(struct A68t314 ,A68t316);
typedef struct A68t316  A68_316 ;    /* VECTOR [] MODE314 */
struct A68t315{
struct A68t316  Outers;
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE316,REF MODE315)  */
struct A68t317{
A68_INT  Max_closureno;
A_PAD_INT(PAD_106)
struct A68t314 * Outers;
struct A68t314 * Freelist;
struct A68t315 * Outerslist;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT,REF MODE314,REF MODE314,REF MODE315)  */
A_VECTOR(struct A68t314 *,A68t318);
typedef struct A68t318  A68_318 ;    /* VECTOR [] REF MODE314 */

A_PROCEDURE(struct A68t193 *,A68t319,(A68_INT ),(A68_INT ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(INT) REF MODE193 */

A_PROCEDURE(struct A68t194 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE194 */

A_PROCEDURE(struct A68t198 *,A68t321,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE190) REF MODE198 */

A_PROCEDURE(struct A68t201 *,A68t322,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE190) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t323,(A68_INT ),(A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) REF MODE207 */

A_PROCEDURE(struct A68t211 *,A68t324,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE206) REF MODE211 */

A_PROCEDURE(struct A68t215 *,A68t325,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE206) REF MODE215 */

A_PROCEDURE(struct A68t222 *,A68t326,(A68_INT ),(A68_INT ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT) REF MODE222 */

A_PROCEDURE(struct A68t226 *,A68t327,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE206) REF MODE226 */

A_PROCEDURE(struct A68t278 *,A68t328,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE262) REF MODE278 */

A_PROCEDURE(struct A68t279 *,A68t329,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE262) REF MODE279 */

A_PROCEDURE(struct A68t254 *,A68t330,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE228) REF MODE254 */

A_PROCEDURE(struct A68t273 *,A68t331,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE228) REF MODE273 */

A_PROCEDURE(struct A68t259 *,A68t332,(A68_INT ),(A68_INT ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT) REF MODE259 */

A_PROCEDURE(struct A68t291 *,A68t333,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE190) REF MODE291 */

A_PROCEDURE(struct A68t296 *,A68t334,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE228) REF MODE296 */

A_PROCEDURE(struct A68t199 *,A68t335,(A68_INT ),(A68_INT ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT) REF MODE199 */

A_PROCEDURE(struct A68t182 *,A68t336,(A68_INT ),(A68_INT ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT) REF MODE182 */

A_PROCEDURE(struct A68t189 *,A68t337,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE181) REF MODE189 */

A_PROCEDURE(struct A68t185 *,A68t338,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE181) REF MODE185 */
A_VECTOR(struct A68t179 *,A68t339);
typedef struct A68t339  A68_339 ;    /* VECTOR [] REF MODE179 */

A_PROCEDURE(struct A68t191 *,A68t340,(A68_INT ),(A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT) REF MODE191 */

A_PROCEDURE(A68_INT ,A68t341,(struct A68t190 ,struct A68t97 ),(struct A68t190 ,struct A68t97 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE190,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t342,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE190) INT */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t190 ,struct A68t190 *),(struct A68t190 ,struct A68t190 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE190) MODE190 */

A_PROCEDURE(struct A68t187 *,A68t344,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE313) REF MODE187 */

A_PROCEDURE(struct A68t203 *,A68t345,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE313) REF MODE203 */

A_PROCEDURE(struct A68t221 *,A68t346,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE313) REF MODE221 */

A_PROCEDURE(struct A68t227 *,A68t347,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE313) REF MODE227 */

A_PROCEDURE(struct A68t304 *,A68t348,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE313) REF MODE304 */

A_PROCEDURE(A68_INT ,A68t349,(struct A68t188 *,struct A68t308 ),(struct A68t188 *,struct A68t308 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE188,REF MODE308) INT */

A_PROCEDURE(A68_INT ,A68t350,(struct A68t188 *,struct A68t309 ),(struct A68t188 *,struct A68t309 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE188,REF MODE309) INT */

A_PROCEDURE(A68_INT ,A68t351,(struct A68t188 *,struct A68t310 ),(struct A68t188 *,struct A68t310 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE188,REF MODE310) INT */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t188 *,struct A68t311 ),(struct A68t188 *,struct A68t311 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE188,REF MODE311) INT */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t188 *,struct A68t312 ),(struct A68t188 *,struct A68t312 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE188,REF MODE312) INT */

A_PROCEDURE(struct A68t187 *,A68t354,(struct A68t182 ,struct A68t317 *,struct A68t307 *),(struct A68t182 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE182,REF MODE317,REF MODE307) REF MODE187 */

A_PROCEDURE(struct A68t203 *,A68t355,(struct A68t194 ,struct A68t317 *,struct A68t307 *),(struct A68t194 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE194,REF MODE317,REF MODE307) REF MODE203 */

A_PROCEDURE(struct A68t221 *,A68t356,(struct A68t207 ,struct A68t317 *,struct A68t307 *),(struct A68t207 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE207,REF MODE317,REF MODE307) REF MODE221 */

A_PROCEDURE(struct A68t227 *,A68t357,(struct A68t222 ,struct A68t317 *,struct A68t307 *),(struct A68t222 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE222,REF MODE317,REF MODE307) REF MODE227 */

A_PROCEDURE(struct A68t304 *,A68t358,(struct A68t259 ,struct A68t317 *,struct A68t307 *),(struct A68t259 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE259,REF MODE317,REF MODE307) REF MODE304 */

A_PROCEDURE(struct A68t210 *,A68t359,(struct A68t304 *),(struct A68t304 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE304) REF MODE210 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t209 *,struct A68t190 *),(struct A68t209 *,struct A68t190 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE209) MODE190 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t206 ,struct A68t307 *,struct A68t190 *),(struct A68t206 ,struct A68t307 *,struct A68t190 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE206,REF MODE307) MODE190 */

A_PROCEDURE(struct A68t304 *,A68t362,(struct A68t304 *,struct A68t307 *,struct A68t307 *),(struct A68t304 *,struct A68t307 *,struct A68t307 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE304,REF MODE307,REF MODE307) REF MODE304 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t269 *,struct A68t304 *,struct A68t206 *),(struct A68t269 *,struct A68t304 *,struct A68t206 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE269,REF MODE304) MODE206 */

A_PROCEDURE(A68_INT ,A68t364,(struct A68t269 *),(struct A68t269 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE269) INT */

A_PROCEDURE(A68_INT ,A68t365,(struct A68t269 *,A68_INT ),(struct A68t269 *,A68_INT ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE269,INT) INT */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t228 ,struct A68t304 *,struct A68t307 *,struct A68t206 *),(struct A68t228 ,struct A68t304 *,struct A68t307 *,struct A68t206 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE228,REF MODE304,REF MODE307) MODE206 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t206 ,struct A68t307 *,struct A68t206 *),(struct A68t206 ,struct A68t307 *,struct A68t206 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE206,REF MODE307) MODE206 */

A_PROCEDURE(A68_BOOL ,A68t368,(struct A68t206 ,struct A68t206 ,struct A68t307 *,struct A68t307 *,A68_BOOL ),(struct A68t206 ,struct A68t206 ,struct A68t307 *,struct A68t307 *,A68_BOOL ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE206,MODE206,REF MODE307,REF MODE307,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t369,(struct A68t237 *,struct A68t307 *),(struct A68t237 *,struct A68t307 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE237,REF MODE307) INT */

A_PROCEDURE(A68_INT ,A68t370,(struct A68t317 *),(struct A68t317 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(REF MODE317) INT */

A_PROCEDURE(struct A68t314 *,A68t371,(A68_INT ,struct A68t317 *,struct A68t97 ),(A68_INT ,struct A68t317 *,struct A68t97 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(INT,REF MODE317,MODE97) REF MODE314 */

A_PROCEDURE(struct A68t314 *,A68t372,(struct A68t317 *),(struct A68t317 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE317) REF MODE314 */

A_PROCEDURE(struct A68t314 **,A68t373,(struct A68t313 ,struct A68t314 **,struct A68t317 *,struct A68t97 ),(struct A68t313 ,struct A68t314 **,struct A68t317 *,struct A68t97 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE313,REF REF MODE314,REF MODE317,MODE97) REF REF MODE314 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t314 **,struct A68t317 *,struct A68t97 ),(struct A68t314 **,struct A68t317 *,struct A68t97 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF REF MODE314,REF MODE317,MODE97) VOID */

A_PROCEDURE(struct A68t317 *,A68t375,(void),(void *));
typedef struct A68t375  A68_375 ;    /* PROC REF MODE317 */

A_PROCEDURE(A68_INT ,A68t376,(struct A68t317 *,struct A68t97 ),(struct A68t317 *,struct A68t97 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE317,MODE97) INT */

A_PROCEDURE(struct A68t317 *,A68t377,(struct A68t317 *,struct A68t97 ),(struct A68t317 *,struct A68t97 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE317,MODE97) REF MODE317 */

A_PROCEDURE(A68_VOID ,A68t378,(A68_BOOL ,struct A68t53 *),(A68_BOOL ,struct A68t53 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(BOOL) MODE53 */

A_PROCEDURE(A68_BOOL ,A68t379,(struct A68t53 ,A68_INT ),(struct A68t53 ,A68_INT ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE53,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t53 ,A68_INT ,struct A68t53 *),(struct A68t53 ,A68_INT ,struct A68t53 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE53,INT) REF MODE53 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC MODE53 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t32 ,struct A68t53 *),(struct A68t32 ,struct A68t53 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE32) MODE53 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 57 CHAR */
struct A68t386{
A68_BOOL  Written;
A_PAD_BOOL(PAD_107)
struct A68t289  Decl;
struct A68t386 * Rest;
};
typedef struct A68t386  A68_386 ;    /* STRUCT(BOOL,MODE289,REF MODE386)  */
struct A68t387{
struct A68t304 * Fd;
struct A68t386 * Mplist;
struct A68t307 * Dec_env;
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE304,REF MODE386,REF MODE307)  */

A_PROCEDURE(A68_VOID ,A68t388,(A68_BOOL ,struct A68t164 *),(A68_BOOL ,struct A68t164 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(BOOL) MODE164 */
A_ISTRUCT(A68_CHAR ,2,A68t389);
typedef struct A68t389  A68_389 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t392);
typedef struct A68t392  A68_392 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t393);
typedef struct A68t393  A68_393 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_BOOL ,A68t394,(struct A68t190 ,struct A68t190 ),(struct A68t190 ,struct A68t190 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE190,MODE190) BOOL */

A_PROCEDURE(A68_BOOL ,A68t395,(struct A68t206 ,struct A68t206 ),(struct A68t206 ,struct A68t206 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE206,MODE206) BOOL */

A_PROCEDURE(A68_INT ,A68t396,(struct A68t271 ),(struct A68t271 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(MODE271) INT */

A_PROCEDURE(struct A68t386 *,A68t397,(struct A68t305 ,struct A68t386 *),(struct A68t305 ,struct A68t386 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE305,REF MODE386) REF MODE386 */

A_PROCEDURE(A68_BOOL ,A68t398,(struct A68t289 ,struct A68t289 ),(struct A68t289 ,struct A68t289 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE289,MODE289) BOOL */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t387 *,struct A68t304 *,struct A68t386 *,struct A68t307 *),(struct A68t387 *,struct A68t304 *,struct A68t386 *,struct A68t307 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE387,REF MODE304,REF MODE386,REF MODE307) VOID */

A_PROCEDURE(A68_VOID ,A68t400,(A68_INT ,struct A68t387 *,A68_VC *),(A68_INT ,struct A68t387 *,A68_VC *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(INT,REF MODE387) MODE26 */

A_PROCEDURE(A68_VOID ,A68t401,(A68_INT ,A68_INT ,struct A68t387 *,struct A68t97 ,A68_VC *),(A68_INT ,A68_INT ,struct A68t387 *,struct A68t97 ,A68_VC *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(INT,INT,REF MODE387,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,11,A68t402);
typedef struct A68t402  A68_402 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_BOOL ,A68t403,(A68_INT ,struct A68t387 *),(A68_INT ,struct A68t387 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(INT,REF MODE387) BOOL */

A_PROCEDURE(A68_CHAR ,A68t404,(A68_INT ,A68_INT ,struct A68t387 *,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(INT,INT,REF MODE387,MODE97) CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t405);
typedef struct A68t405  A68_405 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t406,(A68_INT ,struct A68t32 ,struct A68t387 *,struct A68t97 ,A68_VC *),(A68_INT ,struct A68t32 ,struct A68t387 *,struct A68t97 ,A68_VC *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(INT,REF MODE32,REF MODE387,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t407,(struct A68t289 ,struct A68t387 *),(struct A68t289 ,struct A68t387 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE289,REF MODE387) BOOL */
A_ISTRUCT(A68_CHAR ,22,A68t408);
typedef struct A68t408  A68_408 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t409,(struct A68t221 *),(struct A68t221 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE221) BOOL */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t173 *),(struct A68t173 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC MODE173 */
A_ISTRUCT(A68_CHAR ,50,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,71,A68t412);
typedef struct A68t412  A68_412 ;    /* STRUCT 71 CHAR */
A_ISTRUCT(A68_CHAR ,62,A68t413);
typedef struct A68t413  A68_413 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_VC ,3,A68t414);
typedef struct A68t414  A68_414 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t313 ,struct A68t36 ,struct A68t114 ,struct A68t173 ,struct A68t97 ),(struct A68t313 ,struct A68t36 ,struct A68t114 ,struct A68t173 ,struct A68t97 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE313,MODE36,MODE114,MODE173,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t416,(A68_VC ,struct A68t387 ,struct A68t97 ),(A68_VC ,struct A68t387 ,struct A68t97 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE26,MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t179 *,struct A68t387 *,struct A68t97 ),(struct A68t179 *,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE179,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t181 ,struct A68t387 *,struct A68t97 ),(struct A68t181 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE181,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t181 ,A68_INT ,struct A68t387 *,struct A68t97 ),(struct A68t181 ,A68_INT ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE181,INT,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t420,(A68_VC ,struct A68t181 ,struct A68t387 *,struct A68t97 ),(A68_VC ,struct A68t181 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE26,MODE181,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t190 ,struct A68t387 *,struct A68t97 ),(struct A68t190 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE190,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE190) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t205 ,struct A68t387 *,struct A68t97 ),(struct A68t205 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE205,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t202 *,struct A68t387 *,struct A68t97 ),(struct A68t202 *,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE202,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t219 ,struct A68t387 *,struct A68t97 ),(struct A68t219 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE219,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t206 ,struct A68t387 *,struct A68t97 ),(struct A68t206 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE206,REF MODE387,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 23 CHAR */
struct A68t429 { A68_INT mode; union {
struct A68t305  mode1;
struct A68t270  mode2;
} data; };
typedef struct A68t429  A68_429 ;    /* UNION(REF MODE305,REF MODE270)  */

A_PROCEDURE(A68_INT ,A68t430,(struct A68t429 ),(struct A68t429 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE429) INT */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t228 ,struct A68t387 *,struct A68t97 ),(struct A68t228 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE228,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t268 ,A68_BOOL ,A68_BOOL ,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t268 ,A68_BOOL ,A68_BOOL ,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE268,BOOL,BOOL,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t270 ,A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t270 ,A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE270,BOOL,BOOL,INT,INT,INT,REF MODE387,MODE431,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t434);
typedef struct A68t434  A68_434 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t435);
typedef struct A68t435  A68_435 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_BOOL ,A68t436,(A68_INT ,A68_VC ,A68_VC ,A68_INT *,struct A68t97 ),(A68_INT ,A68_VC ,A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(INT,MODE26,MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t437,(A68_INT ,A68_VC ,A68_INT *),(A68_INT ,A68_VC ,A68_INT *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(INT,MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t187 *,A68_INT ,struct A68t387 *,A68_VC ,A68_INT *,struct A68t97 ),(struct A68t187 *,A68_INT ,struct A68t387 *,A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE187,INT,REF MODE387,MODE26,REF INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t203 *,A68_INT ,struct A68t387 *,A68_VC ,A68_INT *,struct A68t97 ),(struct A68t203 *,A68_INT ,struct A68t387 *,A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE203,INT,REF MODE387,MODE26,REF INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t440);
typedef struct A68t440  A68_440 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_BOOL ,A68t441,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t442,(A68_CHAR ,A68_BOOL ),(A68_CHAR ,A68_BOOL ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(CHAR,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t443);
typedef struct A68t443  A68_443 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t221 *,A68_INT ,struct A68t387 *,A68_VC ,A68_INT *,struct A68t97 ),(struct A68t221 *,A68_INT ,struct A68t387 *,A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE221,INT,REF MODE387,MODE26,REF INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t227 *,A68_INT ,struct A68t387 *,struct A68t431 ,A68_VC ,A68_INT *,struct A68t97 ),(struct A68t227 *,A68_INT ,struct A68t387 *,struct A68t431 ,A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE227,INT,REF MODE387,MODE431,MODE26,REF INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t269 *,struct A68t387 *,struct A68t97 ),(struct A68t269 *,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE269,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t305 ,struct A68t304 *,struct A68t387 *,struct A68t431 ,A68_BOOL ,A68_INT ),(struct A68t305 ,struct A68t304 *,struct A68t387 *,struct A68t431 ,A68_BOOL ,A68_INT ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE305,REF MODE304,REF MODE387,MODE431,BOOL,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t304 *,A68_INT ,A68_BOOL ,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t304 *,A68_INT ,A68_BOOL ,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE304,INT,BOOL,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t289 ,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t289 ,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE289,REF MODE387,MODE431,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t289 ),(struct A68t289 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE289) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 32 CHAR */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t300 ,struct A68t431 ,struct A68t387 *,struct A68t97 ),(struct A68t300 ,struct A68t431 ,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE300,MODE431,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t304 *,A68_INT ,struct A68t387 *,struct A68t431 ,A68_VC ,A68_INT *,struct A68t97 ),(struct A68t304 *,A68_INT ,struct A68t387 *,struct A68t431 ,A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE304,INT,REF MODE387,MODE431,MODE26,REF INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t289 ,A68_VC ,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t289 ,A68_VC ,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE289,MODE26,REF INT,REF MODE387,MODE431,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,30,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t190 ,struct A68t274 *,struct A68t387 *,struct A68t97 ),(struct A68t190 ,struct A68t274 *,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE190,REF MODE274,REF MODE387,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,29,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t260 *,A68_VC ,A68_INT *,struct A68t387 *,struct A68t97 ),(struct A68t260 *,A68_VC ,A68_INT *,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE260,MODE26,REF INT,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t261 *,A68_VC ,A68_INT *,struct A68t387 *,struct A68t97 ),(struct A68t261 *,A68_VC ,A68_INT *,struct A68t387 *,struct A68t97 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE261,MODE26,REF INT,REF MODE387,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t269 *,struct A68t387 *,A68_INT ,A68_INT ,struct A68t97 ),(struct A68t269 *,struct A68t387 *,A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE269,REF MODE387,INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t262 *,A68_VC ,A68_INT *,A68_INT ,A68_INT ,A68_INT ,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t262 *,A68_VC ,A68_INT *,A68_INT ,A68_INT ,A68_INT ,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE262,MODE26,REF INT,INT,INT,INT,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t263 *,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t263 *,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t464  A68_464 ;    /* PROC(REF MODE263,REF INT,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t264 *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t264 *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE264,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t264 *,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t264 *,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE264,REF INT,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t265 *,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t265 *,A68_INT *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE265,REF INT,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t257 *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t257 *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE257,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t276 *,struct A68t387 *,struct A68t431 ,struct A68t97 ),(struct A68t276 *,struct A68t387 *,struct A68t431 ,struct A68t97 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE276,REF MODE387,MODE431,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t277 ),(struct A68t277 ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE277) VOID */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t228 ,A68_INT ),(struct A68t228 ,A68_INT ,void *));
typedef struct A68t471  A68_471 ;    /* PROC(MODE228,INT) VOID */
A_ISTRUCT(A68_CHAR ,24,A68t472);
typedef struct A68t472  A68_472 ;    /* STRUCT 24 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from syntax_inds --- */
#define MDBATRN_blank_ind 0
#define AGBATRN_adecls_ind 1
#define BGBATRN_adelay_ind 2
#define CGBATRN_alien_ind 3
#define DGBATRN_arith_ind 4
#define EGBATRN_attrbr_ind 5
#define FGBATRN_attrdata_ind 6
#define GGBATRN_attrdec_ind 7
#define HGBATRN_attritem_ind 8
#define IGBATRN_attrmpar_ind 9
#define JGBATRN_attrname_ind 10
#define KGBATRN_attrstr_ind 11
#define LGBATRN_backslash_ind 12
#define MGBATRN_becomes_ind 13
#define NGBATRN_biop_ind 14
#define OGBATRN_block_ind 15
#define PGBATRN_body_ind 16
#define QGBATRN_caseelse_ind 17
#define RGBATRN_caseof_ind 18
#define SGBATRN_cbasic_ind 19
#define TGBATRN_cchar_ind 20
#define UGBATRN_ccharrange_ind 21
#define VGBATRN_cdecls_ind 22
#define WGBATRN_char_ind 23
#define XGBATRN_choice_ind 24
#define YGBATRN_chooser_ind 25
#define ZGBATRN_cint_ind 26
#define AHBATRN_cmpar_ind 27
#define BHBATRN_cname_ind 28
#define CHBATRN_conc_ind 29
#define DHBATRN_condition_ind 30
#define EHBATRN_constdec_ind 31
#define FHBATRN_constitem_ind 32
#define GHBATRN_cquery_ind 33
#define HHBATRN_cquote_ind 34
#define IHBATRN_crange_ind 35
#define JHBATRN_ctype_ind 36
#define KHBATRN_cvoid_ind 37
#define LHBATRN_dotdot_ind 38
#define MHBATRN_else_ind 39
#define NHBATRN_elseof_ind 40
#define OHBATRN_endalts_ind 41
#define PHBATRN_endassign_ind 42
#define QHBATRN_endattr_ind 43
#define RHBATRN_endattrdata_ind 44
#define SHBATRN_endblock_ind 45
#define THBATRN_endbody_ind 46
#define UHBATRN_endcase_ind 47
#define VHBATRN_endchars_ind 48
#define WHBATRN_endchoice_ind 49
#define XHBATRN_endcint_ind 50
#define YHBATRN_endcquery_ind 51
#define ZHBATRN_endcquote_ind 52
#define AIBATRN_enddec_ind 53
#define BIBATRN_endfdop_ind 54
#define CIBATRN_endfmop_ind 55
#define DIBATRN_endfnspec_ind 56
#define EIBATRN_endformula_ind 57
#define FIBATRN_endif_ind 58
#define GIBATRN_endindex_ind 59
#define HIBATRN_endint_ind 60
#define JIBATRN_endmacspec_ind 62
#define KIBATRN_endmakemult_ind 63
#define LIBATRN_endmparams_ind 64
#define MIBATRN_endmult_ind 65
#define NIBATRN_endnamelist_ind 66
#define OIBATRN_endouterdec_ind 67
#define PIBATRN_endoutput_ind 68
#define QIBATRN_endrange_ind 69
#define RIBATRN_endrepl_ind 70
#define SIBATRN_endreplace_ind 71
#define TIBATRN_endrow_ind 72
#define UIBATRN_endseqrepl_ind 73
#define VIBATRN_endseqrow_ind 74
#define WIBATRN_endsequence_ind 75
#define XIBATRN_endseries_ind 76
#define YIBATRN_endstep_ind 77
#define ZIBATRN_endstr_ind 78
#define AJBATRN_endstring_ind 79
#define BJBATRN_endtfn_ind 80
#define CJBATRN_enduassoc_ind 81
#define DJBATRN_enduconc_ind 82
#define EJBATRN_endudinst_ind 83
#define FJBATRN_enduextract_ind 84
#define GJBATRN_endufn_ind 85
#define HJBATRN_enduminst_ind 86
#define IJBATRN_enduportname_ind 87
#define JJBATRN_endurepl_ind 88
#define KJBATRN_esac_ind 89
#define LJBATRN_expmacdec_ind 90
#define MJBATRN_expmparams_ind 91
#define NJBATRN_farith_ind 92
#define OJBATRN_faster_ind 93
#define PJBATRN_fault_ind 94
#define QJBATRN_fbr_ind 95
#define RJBATRN_fdecls_ind 96
#define SJBATRN_fdop_ind 97
#define TJBATRN_fi_ind 98
#define UJBATRN_fif_ind 99
#define VJBATRN_finishjoin_ind 100
#define WJBATRN_fint_ind 101
#define XJBATRN_fmop_ind 102
#define YJBATRN_fmpar_ind 103
#define ZJBATRN_fname_ind 104
#define AKBATRN_fndec_ind 105
#define BKBATRN_fnitem_ind 106
#define CKBATRN_fnname_ind 107
#define DKBATRN_fnspec_ind 108
#define EKBATRN_forjoin_ind 109
#define FKBATRN_formula_ind 110
#define GKBATRN_idecls_ind 111
#define HKBATRN_idelay_ind 112
#define IKBATRN_impint_ind 113
#define JKBATRN_import_ind 114
#define KKBATRN_imptype_ind 115
#define LKBATRN_inst_ind 116
#define MKBATRN_instattr_ind 117
#define NKBATRN_intdec_ind 118
#define OKBATRN_intitem_ind 119
#define PKBATRN_join_ind 120
#define QKBATRN_let_ind 121
#define RKBATRN_letname_ind 122
#define SKBATRN_letstr_ind 123
#define TKBATRN_macdec_ind 124
#define UKBATRN_macitem_ind 125
#define VKBATRN_macspec_ind 126
#define WKBATRN_make_ind 127
#define XKBATRN_makeinst_ind 128
#define YKBATRN_makemult_ind 129
#define ZKBATRN_mdecls_ind 130
#define ALBATRN_mparams_ind 131
#define BLBATRN_nameattr_ind 132
#define CLBATRN_namelist_ind 133
#define DLBATRN_newalts_ind 134
#define ELBATRN_newchars_ind 135
#define FLBATRN_newint_ind 136
#define GLBATRN_nobody_ind 137
#define HLBATRN_nonameattr_ind 138
#define ILBATRN_nooutput_ind 139
#define JLBATRN_operator_ind 140
#define KLBATRN_option_ind 141
#define LLBATRN_output_ind 142
#define MLBATRN_print_ind 143
#define NLBATRN_printif_ind 144
#define OLBATRN_printstring_ind 145
#define PLBATRN_ram_ind 146
#define QLBATRN_reform_ind 147
#define RLBATRN_replace_ind 148
#define SLBATRN_sample_ind 149
#define TLBATRN_sep_ind 150
#define VLBATRN_seqassign_ind 152
#define WLBATRN_seqbr_ind 153
#define XLBATRN_seqcase_ind 154
#define YLBATRN_seqchoice_ind 155
#define ZLBATRN_seqif_ind 156
#define AMBATRN_seqlet_ind 157
#define BMBATRN_seqletname_ind 158
#define CMBATRN_seqletstr_ind 159
#define DMBATRN_seqpvar_ind 160
#define EMBATRN_seqpvarname_ind 161
#define FMBATRN_seqpvarstr_ind 162
#define GMBATRN_seqrepl_ind 163
#define HMBATRN_seqrow_ind 164
#define IMBATRN_seqstat_ind 165
#define JMBATRN_seqvar_ind 166
#define KMBATRN_seqvarname_ind 167
#define LMBATRN_seqvarstr_ind 168
#define MMBATRN_slashslash_ind 169
#define NMBATRN_slower_ind 170
#define OMBATRN_startcharrange_ind 171
#define PMBATRN_startjoin_ind 172
#define QMBATRN_startrange_ind 173
#define RMBATRN_startrepl_ind 174
#define SMBATRN_tbr_ind 175
#define TMBATRN_tdecls_ind 176
#define UMBATRN_terms_ind 177
#define VMBATRN_tfn_ind 178
#define WMBATRN_then_ind 179
#define XMBATRN_tmpar_ind 180
#define YMBATRN_tname_ind 181
#define ZMBATRN_to_ind 182
#define ANBATRN_trow_ind 183
#define BNBATRN_tstr_ind 184
#define CNBATRN_tstring_ind 185
#define DNBATRN_tvoid_ind 186
#define ENBATRN_typealias_ind 187
#define FNBATRN_typedec_ind 188
#define GNBATRN_typeitem_ind 189
#define HNBATRN_ualts_ind 190
#define INBATRN_uassoc_ind 191
#define JNBATRN_uattr_ind 192
#define KNBATRN_ubr_ind 193
#define LNBATRN_ucase_ind 194
#define MNBATRN_uconc_ind 195
#define NNBATRN_udinst_ind 196
#define ONBATRN_udyindex_ind 197
#define PNBATRN_uextract_ind 198
#define QNBATRN_ufn_ind 199
#define RNBATRN_uif_ind 200
#define SNBATRN_uindex_ind 201
#define TNBATRN_uio_ind 202
#define UNBATRN_uminst_ind 203
#define VNBATRN_uname_ind 204
#define WNBATRN_unitattr_ind 205
#define XNBATRN_unull_ind 206
#define YNBATRN_uportname_ind 207
#define ZNBATRN_urepl_ind 208
#define AOBATRN_ureplace_ind 209
#define BOBATRN_urow_ind 210
#define COBATRN_usequence_ind 211
#define DOBATRN_useries_ind 212
#define EOBATRN_ustr_ind 213
#define FOBATRN_ustring_ind 214
#define GOBATRN_utrim_ind 215
/* --- End of imports from syntax_inds --- */


/* --- Imports from closureprocs --- */
/* --- End of imports from closureprocs --- */


/* --- Imports from modeprocs --- */
extern A68_187 * APMATRN_get_outerattr(struct A68t313 );
extern A68_203 * HPMATRN_get_outerint(struct A68t313 );
extern A68_221 * OPMATRN_get_outertype(struct A68t313 );
extern A68_227 * VPMATRN_get_outerconst(struct A68t313 );
extern A68_304 * CQMATRN_get_outerfn(struct A68t313 );
extern A68_VOID  VUNATRN_unit_type(struct A68t228 ,struct A68t304 *,struct A68t307 *,A68_206 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_209 * GAAATRN_niltstr;
extern A68_232 * HAAATRN_nilualts;
extern A68_243 * IAAATRN_nilustr;
extern A68_288 * JAAATRN_niluchoices;
extern A68_179 * LAAATRN_nilids;
extern A68_274 * MAAATRN_nilprintitems;
extern A68_269 * NAAATRN_nilnames;
extern A68_287 * PAAATRN_nilseqchoices;
extern A68_276 * QAAATRN_nilsequence;
extern A68_267 * RAAATRN_niljoins;
extern A68_257 * SAAATRN_nilseries;
extern A68_187 * UAAATRN_nilattrdec;
extern A68_203 * VAAATRN_nilintdec;
extern A68_221 * WAAATRN_niltypedec;
extern A68_227 * XAAATRN_nilconstdec;
extern A68_304 * YAAATRN_nilfndec;
extern A68_270  ABAATRN_nilmacparams;
extern A68_202 * BBAATRN_nilformulas;
extern A68_184 * DBAATRN_nilattrstr;
extern A68_305  FBAATRN_nilmacspecs;
extern A68_214  DIAATRN_tnull;
#define WIAATRN_normalchoice 1
#define XIAATRN_elseofchoice 2
#define YIAATRN_elsechoice 3
#define ZIAATRN_noelsechoice 4
#define AJAATRN_explicitmacpar 0
#define BJAATRN_implicitmacpar 1
#define EKAATRN_constint2 2
#define FKAATRN_const2int 3
#define GKAATRN_const2int2 4
#define JKAATRN_int2 2
#define MKAATRN_uiosource 3
#define NKAATRN_uiosink 4
#define QKAATRN_macpardec 3
#define WKAATRN_assembler_version_no 921103
/* --- End of imports from assmodes --- */


/* --- Imports from options --- */
extern A68_BOOL  MBAAOST_includes(struct A68t173 ,struct A68t173 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_173 *);
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_98  SHAAOSI_system;
extern A68_98  UHAAOSI_fatal;
/* --- End of imports from messageproc --- */


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
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void FDBATRN(void);   /* syntax_inds */
extern void SKCATRN(void);   /* closureprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_385   CPMBTRN = {"$Id: write_ella.a68,v 34.3 1995/03/29 13:03:07 ella Exp $"}; 
A_GISVEC(A68_VC ,DPMBTRN,CPMBTRN,57)
#define EPMBTRN_nilmplist (A68_386 *)A68_NIL
static A68_164  JPMBTRN_nullidvec;
static A68_387  LPMBTRN_nullrgenv;
#define MPMBTRN_write_version_no 921103
static A68_VC  OPMBTRN_orb_txt;
static A68_VC  QPMBTRN_crb_txt;
static A68_VC  SPMBTRN_osb_txt;
static A68_VC  UPMBTRN_csb_txt;
static A68_VC  WPMBTRN_ocb_txt;
static A68_VC  YPMBTRN_ccb_txt;
static A68_VC  AQMBTRN_vis_space_txt;
static A68_VC  CQMBTRN_slash_txt;
static A68_VC  EQMBTRN_ampsand_txt;
static A68_VC  GQMBTRN_qmark_txt;
static A68_95   HQMBTRN = {"ATTR"}; 
A_GISVEC(A68_VC ,IQMBTRN,HQMBTRN,4)
static A68_VC  JQMBTRN_attr_txt;
static A68_VC  LQMBTRN_at_txt;
static A68_VC  NQMBTRN_prime_txt;
static A68_VC  PQMBTRN_equals_txt;
static A68_VC  RQMBTRN_stroke_txt;
static A68_VC  TQMBTRN_colon_txt;
static A68_VC  VQMBTRN_comma_txt;
static A68_VC  XQMBTRN_dot_txt;
static A68_VC  ZQMBTRN_semi_txt;
static A68_VC  BRMBTRN_plus_txt;
static A68_VC  DRMBTRN_minus_txt;
static A68_VC  FRMBTRN_star_txt;
static A68_VC  HRMBTRN_perc_txt;
static A68_389   IRMBTRN = {"/="}; 
A_GISVEC(A68_VC ,JRMBTRN,IRMBTRN,2)
static A68_VC  KRMBTRN_ne_txt;
static A68_389   LRMBTRN = {"<="}; 
A_GISVEC(A68_VC ,MRMBTRN,LRMBTRN,2)
static A68_VC  NRMBTRN_le_txt;
static A68_389   ORMBTRN = {">="}; 
A_GISVEC(A68_VC ,PRMBTRN,ORMBTRN,2)
static A68_VC  QRMBTRN_ge_txt;
static A68_VC  SRMBTRN_lt_txt;
static A68_VC  URMBTRN_gt_txt;
static A68_390   VRMBTRN = {"AND"}; 
A_GISVEC(A68_VC ,WRMBTRN,VRMBTRN,3)
static A68_VC  XRMBTRN_and_txt;
static A68_389   YRMBTRN = {"OR"}; 
A_GISVEC(A68_VC ,ZRMBTRN,YRMBTRN,2)
static A68_VC  ASMBTRN_or_txt;
static A68_389   BSMBTRN = {"SL"}; 
A_GISVEC(A68_VC ,CSMBTRN,BSMBTRN,2)
static A68_VC  DSMBTRN_sl_txt;
static A68_389   ESMBTRN = {"SR"}; 
A_GISVEC(A68_VC ,FSMBTRN,ESMBTRN,2)
static A68_VC  GSMBTRN_sr_txt;
static A68_95   HSMBTRN = {"IAND"}; 
A_GISVEC(A68_VC ,ISMBTRN,HSMBTRN,4)
static A68_VC  JSMBTRN_iand_txt;
static A68_390   KSMBTRN = {"IOR"}; 
A_GISVEC(A68_VC ,LSMBTRN,KSMBTRN,3)
static A68_VC  MSMBTRN_ior_txt;
static A68_390   NSMBTRN = {"MOD"}; 
A_GISVEC(A68_VC ,OSMBTRN,NSMBTRN,3)
static A68_VC  PSMBTRN_mod_txt;
static A68_390   QSMBTRN = {"NOT"}; 
A_GISVEC(A68_VC ,RSMBTRN,QSMBTRN,3)
static A68_VC  SSMBTRN_not_txt;
static A68_95   TSMBTRN = {"INOT"}; 
A_GISVEC(A68_VC ,USMBTRN,TSMBTRN,4)
static A68_VC  VSMBTRN_inot_txt;
static A68_95   WSMBTRN = {"SQRT"}; 
A_GISVEC(A68_VC ,XSMBTRN,WSMBTRN,4)
static A68_VC  YSMBTRN_sqrt_txt;
static A68_390   ZSMBTRN = {"ABS"}; 
A_GISVEC(A68_VC ,ATMBTRN,ZSMBTRN,3)
static A68_VC  BTMBTRN_abs_txt;
static A68_390   CTMBTRN = {"INT"}; 
A_GISVEC(A68_VC ,DTMBTRN,CTMBTRN,3)
static A68_VC  ETMBTRN_int_txt;
static A68_389   FTMBTRN = {"IF"}; 
A_GISVEC(A68_VC ,GTMBTRN,FTMBTRN,2)
static A68_VC  HTMBTRN_if_txt;
static A68_95   ITMBTRN = {"THEN"}; 
A_GISVEC(A68_VC ,JTMBTRN,ITMBTRN,4)
static A68_VC  KTMBTRN_then_txt;
static A68_95   LTMBTRN = {"ELSE"}; 
A_GISVEC(A68_VC ,MTMBTRN,LTMBTRN,4)
static A68_VC  NTMBTRN_else_txt;
static A68_389   OTMBTRN = {"FI"}; 
A_GISVEC(A68_VC ,PTMBTRN,OTMBTRN,2)
static A68_VC  QTMBTRN_fi_txt;
static A68_389   RTMBTRN = {".."}; 
A_GISVEC(A68_VC ,STMBTRN,RTMBTRN,2)
static A68_VC  TTMBTRN_dotdot_txt;
static A68_95   UTMBTRN = {"TYPE"}; 
A_GISVEC(A68_VC ,VTMBTRN,UTMBTRN,4)
static A68_VC  WTMBTRN_type_txt;
static A68_389   XTMBTRN = {"->"}; 
A_GISVEC(A68_VC ,YTMBTRN,XTMBTRN,2)
static A68_VC  ZTMBTRN_to_txt;
static A68_391   AUMBTRN = {"STRING"}; 
A_GISVEC(A68_VC ,BUMBTRN,AUMBTRN,6)
static A68_VC  CUMBTRN_string_txt;
static A68_389   DUMBTRN = {"/("}; 
A_GISVEC(A68_VC ,EUMBTRN,DUMBTRN,2)
static A68_VC  FUMBTRN_slashbr_txt;
static A68_390   GUMBTRN = {"NEW"}; 
A_GISVEC(A68_VC ,HUMBTRN,GUMBTRN,3)
static A68_VC  IUMBTRN_new_txt;
static A68_391   JUMBTRN = {"NOBODY"}; 
A_GISVEC(A68_VC ,KUMBTRN,JUMBTRN,6)
static A68_VC  LUMBTRN_nobody_txt;
static A68_95   MUMBTRN = {"BIOP"}; 
A_GISVEC(A68_VC ,NUMBTRN,MUMBTRN,4)
static A68_VC  OUMBTRN_biop_txt;
static A68_392   PUMBTRN = {"ALIEN"}; 
A_GISVEC(A68_VC ,QUMBTRN,PUMBTRN,5)
static A68_VC  RUMBTRN_alien_txt;
static A68_392   SUMBTRN = {"ARITH"}; 
A_GISVEC(A68_VC ,TUMBTRN,SUMBTRN,5)
static A68_VC  UUMBTRN_arith_txt;
static A68_391   VUMBTRN = {"REFORM"}; 
A_GISVEC(A68_VC ,WUMBTRN,VUMBTRN,6)
static A68_VC  XUMBTRN_reform_txt;
static A68_391   YUMBTRN = {"IMPORT"}; 
A_GISVEC(A68_VC ,ZUMBTRN,YUMBTRN,6)
static A68_VC  AVMBTRN_import_txt;
static A68_392   BVMBTRN = {"DELAY"}; 
A_GISVEC(A68_VC ,CVMBTRN,BVMBTRN,5)
static A68_VC  DVMBTRN_delay_txt;
static A68_391   EVMBTRN = {"IDELAY"}; 
A_GISVEC(A68_VC ,FVMBTRN,EVMBTRN,6)
static A68_VC  GVMBTRN_idelay_txt;
static A68_390   HVMBTRN = {"RAM"}; 
A_GISVEC(A68_VC ,IVMBTRN,HVMBTRN,3)
static A68_VC  JVMBTRN_ram_txt;
static A68_391   KVMBTRN = {"SAMPLE"}; 
A_GISVEC(A68_VC ,LVMBTRN,KVMBTRN,6)
static A68_VC  MVMBTRN_sample_txt;
static A68_391   NVMBTRN = {"FASTER"}; 
A_GISVEC(A68_VC ,OVMBTRN,NVMBTRN,6)
static A68_VC  PVMBTRN_faster_txt;
static A68_391   QVMBTRN = {"SLOWER"}; 
A_GISVEC(A68_VC ,RVMBTRN,QVMBTRN,6)
static A68_VC  SVMBTRN_slower_txt;
static A68_392   TVMBTRN = {"CONST"}; 
A_GISVEC(A68_VC ,UVMBTRN,TVMBTRN,5)
static A68_VC  VVMBTRN_const_txt;
static A68_392   WVMBTRN = {"PRINT"}; 
A_GISVEC(A68_VC ,XVMBTRN,WVMBTRN,5)
static A68_VC  YVMBTRN_print_txt;
static A68_392   ZVMBTRN = {"FAULT"}; 
A_GISVEC(A68_VC ,AWMBTRN,ZVMBTRN,5)
static A68_VC  BWMBTRN_fault_txt;
static A68_390   CWMBTRN = {"LET"}; 
A_GISVEC(A68_VC ,DWMBTRN,CWMBTRN,3)
static A68_VC  EWMBTRN_let_txt;
static A68_95   FWMBTRN = {"MAKE"}; 
A_GISVEC(A68_VC ,GWMBTRN,FWMBTRN,4)
static A68_VC  HWMBTRN_make_txt;
static A68_95   IWMBTRN = {"JOIN"}; 
A_GISVEC(A68_VC ,JWMBTRN,IWMBTRN,4)
static A68_VC  KWMBTRN_join_txt;
static A68_390   LWMBTRN = {"FOR"}; 
A_GISVEC(A68_VC ,MWMBTRN,LWMBTRN,3)
static A68_VC  NWMBTRN_for_txt;
static A68_389   OWMBTRN = {":="}; 
A_GISVEC(A68_VC ,PWMBTRN,OWMBTRN,2)
static A68_VC  QWMBTRN_becomes_txt;
static A68_95   RWMBTRN = {"CASE"}; 
A_GISVEC(A68_VC ,SWMBTRN,RWMBTRN,4)
static A68_VC  TWMBTRN_case_txt;
static A68_389   UWMBTRN = {"OF"}; 
A_GISVEC(A68_VC ,VWMBTRN,UWMBTRN,2)
static A68_VC  WWMBTRN_of_txt;
static A68_391   XWMBTRN = {"ELSEOF"}; 
A_GISVEC(A68_VC ,YWMBTRN,XWMBTRN,6)
static A68_VC  ZWMBTRN_elseof_txt;
static A68_95   AXMBTRN = {"ESAC"}; 
A_GISVEC(A68_VC ,BXMBTRN,AXMBTRN,4)
static A68_VC  CXMBTRN_esac_txt;
static A68_390   DXMBTRN = {"VAR"}; 
A_GISVEC(A68_VC ,EXMBTRN,DXMBTRN,3)
static A68_VC  FXMBTRN_var_txt;
static A68_95   GXMBTRN = {"PVAR"}; 
A_GISVEC(A68_VC ,HXMBTRN,GXMBTRN,4)
static A68_VC  IXMBTRN_pvar_txt;
static A68_390   JXMBTRN = {"::="}; 
A_GISVEC(A68_VC ,KXMBTRN,JXMBTRN,3)
static A68_VC  LXMBTRN_init_txt;
static A68_391   MXMBTRN = {"OUTPUT"}; 
A_GISVEC(A68_VC ,NXMBTRN,MXMBTRN,6)
static A68_VC  OXMBTRN_output_txt;
static A68_390   PXMBTRN = {"END"}; 
A_GISVEC(A68_VC ,QXMBTRN,PXMBTRN,3)
static A68_VC  RXMBTRN_end_txt;
static A68_389   SXMBTRN = {"IO"}; 
A_GISVEC(A68_VC ,TXMBTRN,SXMBTRN,2)
static A68_VC  UXMBTRN_io_txt;
static A68_389   VXMBTRN = {"//"}; 
A_GISVEC(A68_VC ,WXMBTRN,VXMBTRN,2)
static A68_VC  XXMBTRN_twoslash_txt;
static A68_389   YXMBTRN = {"[["}; 
A_GISVEC(A68_VC ,ZXMBTRN,YXMBTRN,2)
static A68_VC  AYMBTRN_twoosb_txt;
static A68_389   BYMBTRN = {"]]"}; 
A_GISVEC(A68_VC ,CYMBTRN,BYMBTRN,2)
static A68_VC  DYMBTRN_twocsb_txt;
static A68_393   EYMBTRN = {"REPLACE"}; 
A_GISVEC(A68_VC ,FYMBTRN,EYMBTRN,7)
static A68_VC  GYMBTRN_replace_txt;
static A68_95   HYMBTRN = {"CONC"}; 
A_GISVEC(A68_VC ,IYMBTRN,HYMBTRN,4)
static A68_VC  JYMBTRN_conc_txt;
static A68_392   KYMBTRN = {"BEGIN"}; 
A_GISVEC(A68_VC ,LYMBTRN,KYMBTRN,5)
static A68_VC  MYMBTRN_begin_txt;
static A68_390   NYMBTRN = {"SEQ"}; 
A_GISVEC(A68_VC ,OYMBTRN,NYMBTRN,3)
static A68_VC  PYMBTRN_seq_txt;
static A68_390   QYMBTRN = {"MAC"}; 
A_GISVEC(A68_VC ,RYMBTRN,QYMBTRN,3)
static A68_VC  SYMBTRN_mac_txt;
static A68_389   TYMBTRN = {"FN"}; 
A_GISVEC(A68_VC ,UYMBTRN,TYMBTRN,2)
static A68_VC  VYMBTRN_fn_txt;
static A68_389   WYMBTRN = {"()"}; 
A_GISVEC(A68_VC ,XYMBTRN,WYMBTRN,2)
static A68_VC  YYMBTRN_void_txt;
static A68_VC  AZMBTRN_hash_txt;
static A68_VC  CZMBTRN_backslash_txt;
static A68_390   DZMBTRN = {"_?_"}; 
A_GISVEC(A68_VC ,EZMBTRN,DZMBTRN,3)
static A68_VC  FZMBTRN_qmark_name;
static A68_402   ZENBTRN = {"altname dec"}; 
A_GISVEC(A68_VC ,AFNBTRN,ZENBTRN,11)
static A68_405   YFNBTRN = {"find_char"}; 
A_GISVEC(A68_VC ,ZFNBTRN,YFNBTRN,9)
static A68_402   AHNBTRN = {"make_string"}; 
A_GISVEC(A68_VC ,BHNBTRN,AHNBTRN,11)
static A68_408   NHNBTRN = {"Unexpected op sort in "}; 
A_GISVEC(A68_VC ,OHNBTRN,NHNBTRN,22)
static A68_VC  PHNBTRN_badop;
static A68_411   GINBTRN = {"Write item lists in full, ie. no comma separation."}; 
A_GISVEC(A68_VC ,HINBTRN,GINBTRN,50)
static A68_412   IINBTRN = {"Expand characters in char type declarations, also suppresses radix etc."}; 
A_GISVEC(A68_VC ,JINBTRN,IINBTRN,71)
static A68_413   KINBTRN = {"Expand delays to contain all fields CASE to contain ELSE part."}; 
A_GISVEC(A68_VC ,LINBTRN,KINBTRN,62)
A68_46  NINBTRN_write_ella_options;
static A68_95   VMNBTRN = {"FDOP"}; 
A_GISVEC(A68_VC ,WMNBTRN,VMNBTRN,4)
static A68_95   ZMNBTRN = {"FDOP"}; 
A_GISVEC(A68_VC ,ANNBTRN,ZMNBTRN,4)
static A68_95   FNNBTRN = {"FMOP"}; 
A_GISVEC(A68_VC ,GNNBTRN,FNNBTRN,4)
static A68_95   JNNBTRN = {"FMOP"}; 
A_GISVEC(A68_VC ,KNNBTRN,JNNBTRN,4)
static A68_423   QNNBTRN = {"Unexpected mode in FORMULA"}; 
A_GISVEC(A68_VC ,RNNBTRN,QNNBTRN,26)
static A68_428   MPNBTRN = {"Unexpected mode in TYPE"}; 
A_GISVEC(A68_VC ,NPNBTRN,MPNBTRN,23)
static A68_434   YQNBTRN = {"write_macparam"}; 
A_GISVEC(A68_VC ,ZQNBTRN,YQNBTRN,14)
static A68_435   HSNBTRN = {"write_replicator - 1"}; 
A_GISVEC(A68_VC ,ISNBTRN,HSNBTRN,20)
static A68_435   PSNBTRN = {"write_replicator - 2"}; 
A_GISVEC(A68_VC ,QSNBTRN,PSNBTRN,20)
static A68_440   HUNBTRN = {"write_intdec"}; 
A_GISVEC(A68_VC ,IUNBTRN,HUNBTRN,12)
static A68_443   EWNBTRN = {"Unexpected mode in TYPEBODY"}; 
A_GISVEC(A68_VC ,FWNBTRN,EWNBTRN,27)
static A68_435   CZNBTRN = {"write_mpvalue: fname"}; 
A_GISVEC(A68_VC ,DZNBTRN,CZNBTRN,20)
static A68_435   LZNBTRN = {"write_mpvalue: tname"}; 
A_GISVEC(A68_VC ,MZNBTRN,LZNBTRN,20)
static A68_450   AAOBTRN = {"write_mpvalue: fnname - 1"}; 
A_GISVEC(A68_VC ,BAOBTRN,AAOBTRN,25)
static A68_450   DAOBTRN = {"write_mpvalue: fnname - 2"}; 
A_GISVEC(A68_VC ,EAOBTRN,DAOBTRN,25)
static A68_451   GAOBTRN = {"write_mpvalue"}; 
A_GISVEC(A68_VC ,HAOBTRN,GAOBTRN,13)
static A68_453   UCOBTRN = {"write_pspec: un_known param type"}; 
A_GISVEC(A68_VC ,VCOBTRN,UCOBTRN,32)
static A68_450   AEOBTRN = {"Unexpected mode in FNBODY"}; 
A_GISVEC(A68_VC ,BEOBTRN,AEOBTRN,25)
static A68_457   XFOBTRN = {"Unexpected mode in DECLARATION"}; 
A_GISVEC(A68_VC ,YFOBTRN,XFOBTRN,30)
static A68_459   PGOBTRN = {"Unexpected mode in PRINTITEMS"}; 
A_GISVEC(A68_VC ,QGOBTRN,PGOBTRN,29)
static A68_428   NKOBTRN = {"Unexpected mode in STEP"}; 
A_GISVEC(A68_VC ,OKOBTRN,NKOBTRN,23)
static A68_423   SLOBTRN = {"Unexpected mode in SEQSTEP"}; 
A_GISVEC(A68_VC ,TLOBTRN,SLOBTRN,26)
static A68_428   OPOBTRN = {"Unexpected mode in UNIT"}; 
A_GISVEC(A68_VC ,PPOBTRN,OPOBTRN,23)
static A68_408   SPOBTRN = {"Write ELLA out of date"}; 
A_GISVEC(A68_VC ,TPOBTRN,SPOBTRN,22)
static A68_472   AQOBTRN = {"Unexpected mode in OUTER"}; 
A_GISVEC(A68_VC ,BQOBTRN,AQOBTRN,24)
typedef struct   /* env of non-global proc */
{
A68_32  Rvi;
} QGNBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_36  Write_text;
} FJNBTRN_write_string;
typedef struct   /* env of non-global proc */
{
A68_416  DJNBTRN_write_string;
A68_114  Set_ind;
} JKNBTRN_write_strings;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_417  HKNBTRN_write_strings;
A68_418  OKNBTRN_write_basicattr;
} QKNBTRN_write_basicattr;
typedef struct   /* env of non-global proc */
{
A68_36  Write_text;
A68_114  Set_ind;
A68_418  OKNBTRN_write_basicattr;
} ILNBTRN_write_attr;
typedef struct   /* env of non-global proc */
{
A68_36  Write_text;
A68_419  GLNBTRN_write_attr;
} QLNBTRN_write_nameitem;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_BOOL  XINBTRN_expand_char_decs;
A_PAD_BOOL(PAD_110)
A68_36  Write_text;
A68_420  OLNBTRN_write_nameitem;
A68_421  ULNBTRN_write_formula;
} WLNBTRN_write_formula;
typedef struct   /* env of non-global proc */
{
A68_421  ULNBTRN_write_formula;
A68_114  Set_ind;
A68_36  Write_text;
} YNNBTRN_write_range;
typedef struct   /* env of non-global proc */
{
A68_36  Write_text;
A68_421  ULNBTRN_write_formula;
} EONBTRN_write_index;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_421  CONBTRN_write_index;
} MONBTRN_write_indexes;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_420  OLNBTRN_write_nameitem;
A68_426 * OONBTRN_write_typebody;
A68_421  CONBTRN_write_index;
A68_427  SONBTRN_write_type;
A68_421  ULNBTRN_write_formula;
} UONBTRN_write_type;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_419  GLNBTRN_write_attr;
A68_421  ULNBTRN_write_formula;
A68_427  SONBTRN_write_type;
A68_432 * CQNBTRN_write_instance;
} OQNBTRN_write_macparams;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_433  MQNBTRN_write_macparams;
A68_419  GLNBTRN_write_attr;
} KRNBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_420  OLNBTRN_write_nameitem;
A68_424  WNNBTRN_write_range;
} ASNBTRN_write_replicator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  VINBTRN_no_comma_lists;
A_PAD_BOOL(PAD_111)
A68_36  Write_text;
A68_114  Set_ind;
} BTNBTRN_write_keyword;
typedef struct   /* env of non-global proc */
{
A68_BOOL  VINBTRN_no_comma_lists;
A_PAD_BOOL(PAD_112)
A68_114  Set_ind;
A68_36  Write_text;
} JTNBTRN_write_listkeyword;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_114  Set_ind;
A68_36  Write_text;
A68_419  GLNBTRN_write_attr;
} UTNBTRN_write_attrdec;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_114  Set_ind;
A68_420  OLNBTRN_write_nameitem;
A68_36  Write_text;
A68_421  ULNBTRN_write_formula;
A68_424  WNNBTRN_write_range;
} DUNBTRN_write_intdec;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_427  SONBTRN_write_type;
A68_424  WNNBTRN_write_range;
A68_BOOL  XINBTRN_expand_char_decs;
A_PAD_BOOL(PAD_113)
} PUNBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_114  Set_ind;
A68_420  OLNBTRN_write_nameitem;
A68_36  Write_text;
A68_426 * OONBTRN_write_typebody;
} PWNBTRN_write_typedec;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_114  Set_ind;
A68_420  OLNBTRN_write_nameitem;
A68_36  Write_text;
} ZWNBTRN_write_constdec;
typedef struct   /* env of non-global proc */
{
A68_BOOL  VINBTRN_no_comma_lists;
A_PAD_BOOL(PAD_114)
A68_114  Set_ind;
A68_36  Write_text;
A68_420  OLNBTRN_write_nameitem;
A68_427  SONBTRN_write_type;
A68_419  GLNBTRN_write_attr;
} FXNBTRN_write_terminals;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_447 * WXNBTRN_write_macspecs;
A68_419  GLNBTRN_write_attr;
A68_446  DXNBTRN_write_terminals;
} FYNBTRN_write_fndecspec;
typedef struct   /* env of non-global proc */
{
A68_419  GLNBTRN_write_attr;
A68_421  ULNBTRN_write_formula;
A68_424  WNNBTRN_write_range;
A68_36  Write_text;
A68_427  SONBTRN_write_type;
A68_432 * CQNBTRN_write_instance;
} PYNBTRN_write_mpvalue;
typedef struct   /* env of non-global proc */
{
A68_36  Write_text;
A68_420  OLNBTRN_write_nameitem;
A68_426 * OONBTRN_write_typebody;
A68_448  DYNBTRN_write_fndecspec;
A68_114  Set_ind;
} PAOBTRN_write_specvalue;
typedef struct   /* env of non-global proc */
{
A68_437  HTNBTRN_write_listkeyword;
A68_114  Set_ind;
A68_BOOL  VINBTRN_no_comma_lists;
A_PAD_BOOL(PAD_116)
A68_427  SONBTRN_write_type;
A68_97  Msg;
A68_36  Write_text;
A68_449  NYNBTRN_write_mpvalue;
A68_449  NAOBTRN_write_specvalue;
} WBOBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_433  MQNBTRN_write_macparams;
A68_421  ULNBTRN_write_formula;
A68_BOOL  ZINBTRN_expand_delays;
A_PAD_BOOL(PAD_117)
A68_432 * CQNBTRN_write_instance;
A68_454  GDOBTRN_write_fnbody;
} IDOBTRN_write_fnbody;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_448  DYNBTRN_write_fndecspec;
A68_36  Write_text;
A68_114  Set_ind;
A68_454  GDOBTRN_write_fnbody;
} MEOBTRN_write_fndec;
typedef struct   /* env of non-global proc */
{
A68_438  STNBTRN_write_attrdec;
A68_439  BUNBTRN_write_intdec;
A68_444  NWNBTRN_write_typedec;
A68_445  XWNBTRN_write_constdec;
A68_455  KEOBTRN_write_fndec;
} ZEOBTRN_write_declaration;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_421  ULNBTRN_write_formula;
A68_416  DJNBTRN_write_string;
} GGOBTRN_write_printitem;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_458  EGOBTRN_write_printitem;
} ZGOBTRN_write_print;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_458  EGOBTRN_write_printitem;
} HHOBTRN_write_fault;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_420  OLNBTRN_write_nameitem;
} PHOBTRN_write_letnames;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_462  NHOBTRN_write_letnames;
A68_36  Write_text;
} IIOBTRN_write_let;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_425  KONBTRN_write_indexes;
A68_114  Set_ind;
A68_432 * CQNBTRN_write_instance;
A68_36  Write_text;
A68_BOOL  VINBTRN_no_comma_lists;
A_PAD_BOOL(PAD_118)
A68_420  OLNBTRN_write_nameitem;
} QIOBTRN_write_make;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
} DJOBTRN_do_write_join;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_465  BJOBTRN_do_write_join;
} LJOBTRN_write_join;
typedef struct   /* env of non-global proc */
{
A68_436  ZSNBTRN_write_keyword;
A68_421  YRNBTRN_write_replicator;
A68_114  Set_ind;
A68_36  Write_text;
A68_465  BJOBTRN_do_write_join;
} TJOBTRN_write_repljoin;
typedef struct   /* env of non-global proc */
{
A68_456  XEOBTRN_write_declaration;
A68_460  XGOBTRN_write_print;
A68_461  FHOBTRN_write_fault;
A68_463  GIOBTRN_write_let;
A68_464  OIOBTRN_write_make;
A68_466  JJOBTRN_write_join;
A68_467  RJOBTRN_write_repljoin;
A68_36  Write_text;
A68_114  Set_ind;
} CKOBTRN_write_series;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_BOOL  ZINBTRN_expand_delays;
A_PAD_BOOL(PAD_120)
A68_421  ULNBTRN_write_formula;
A68_421  YRNBTRN_write_replicator;
A68_456  XEOBTRN_write_declaration;
A68_460  XGOBTRN_write_print;
A68_461  FHOBTRN_write_fault;
A68_463  GIOBTRN_write_let;
A68_436  ZSNBTRN_write_keyword;
A68_462  NHOBTRN_write_letnames;
} WKOBTRN_write_sequence;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_431  HMOBTRN_write_unit;
A68_427  SONBTRN_write_type;
A68_421  ULNBTRN_write_formula;
A68_424  WNNBTRN_write_range;
A68_416  DJNBTRN_write_string;
A68_421  CONBTRN_write_index;
A68_432 * CQNBTRN_write_instance;
A68_BOOL  ZINBTRN_expand_delays;
A_PAD_BOOL(PAD_121)
A68_421  YRNBTRN_write_replicator;
A68_469  UKOBTRN_write_sequence;
A68_468  AKOBTRN_write_series;
A68_419  GLNBTRN_write_attr;
} JMOBTRN_write_unit;
typedef struct   /* env of non-global proc */
{
A68_INT  IJNBTRN_ttop;
A_PAD_INT(PAD_108)
A68_INT * GJNBTRN_num_quotes;
} PJNBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_BOOL  XINBTRN_expand_char_decs;
A_PAD_BOOL(PAD_109)
A68_36  Write_text;
A68_422  ZLNBTRN_write_f;
A68_387 * Env;
A68_420  OLNBTRN_write_nameitem;
A68_97  Msg;
A68_421  ULNBTRN_write_formula;
} BMNBTRN_write_f;
typedef struct   /* env of non-global proc */
{
A68_CHAR * EVNBTRN_lastchar;
A68_BOOL * FVNBTRN_first;
A68_INT * CVNBTRN_lastcharval;
A68_BOOL * GVNBTRN_incharrange;
A68_CHAR * DVNBTRN_firstchar;
A68_INT * BVNBTRN_firstcharval;
A68_36  Write_text;
A68_114  Set_ind;
} RVNBTRN_do_char;
typedef struct   /* env of non-global proc */
{
A68_437  HTNBTRN_write_listkeyword;
A68_INT * BCOBTRN_keyword_ind;
A68_114  Set_ind;
A68_387 * Env;
A68_BOOL  VINBTRN_no_comma_lists;
A_PAD_BOOL(PAD_115)
A68_206 * ZBOBTRN_lasttype;
A68_427  SONBTRN_write_type;
A68_97  Msg;
A68_36  Write_text;
} FCOBTRN_write_pspec;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_431  Write_unit;
A68_387 * Env;
A68_97  Msg;
A68_36  Write_text;
A68_BOOL  ZINBTRN_expand_delays;
A_PAD_BOOL(PAD_119)
A68_470  ZKOBTRN_write_statement;
A68_421  ULNBTRN_write_formula;
A68_421  YRNBTRN_write_replicator;
} BLOBTRN_write_statement;
typedef struct   /* env of non-global proc */
{
A68_114  Set_ind;
A68_36  Write_text;
A68_431  HMOBTRN_write_unit;
A68_387 * Env;
A68_97  Msg;
} PMOBTRN_write_output;

A_STATIC A68_VOID  GPMBTRN_generator(A68_BOOL  FPMBTRN_anonymous, A68_164  *ReturnedValue);

A_STATIC A68_BOOL  IZMBTRN_(A68_190  A, A68_190  B);

A_STATIC A68_BOOL  NANBTRN_(A68_206  A, A68_206  B);

A_STATIC A68_INT  UBNBTRN_macparam_sort(A68_271  Param);

A_STATIC A68_386 * YBNBTRN_make_mplist(A68_305  Macspecs, A68_386 * Mp);

A_STATIC A68_BOOL  HCNBTRN_equal_decl(A68_289  Da, A68_289  Db);

A_STATIC A68_VOID  ADNBTRN_set_fnenv(A68_387 * Env, A68_304 * Fd, A68_386 * Outer_mplist, A68_307 * Dec_env);

A_STATIC A68_VOID  FDNBTRN_attrname(A68_INT  Attrno, A68_387 * Env, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MDNBTRN_intname(A68_INT  Intno, A68_387 * Env, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TDNBTRN_typename(A68_INT  Typeno, A68_387 * Env, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AENBTRN_constname(A68_INT  Constno, A68_387 * Env, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HENBTRN_fnname(A68_INT  Fnno, A68_387 * Env, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QENBTRN_altname(A68_INT  Typeno, A68_INT  Nno, A68_387 * Env, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  FFNBTRN_is_ella_char(A68_INT  Typeno, A68_387 * Env);

A_STATIC A68_CHAR  QFNBTRN_find_char(A68_INT  Typeno, A68_INT  Primno, A68_387 * Env, A68_97  Msg);

A_STATIC A68_VOID  GGNBTRN_make_string(A68_INT  Typeno, A68_32  Rvi, A68_387 * Env, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PGNBTRN_generator(A68_BOOL  NGNBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  GHNBTRN_mpname(A68_289  Decl, A68_387 * Env);

A_STATIC A68_BOOL  RHNBTRN_has_typebody(A68_221 * Tdec);

A68_VOID  WHNBTRN_write_no_comma_lists(A68_173  *ReturnedValue);

A68_VOID  ZHNBTRN_write_expand_char_decs(A68_173  *ReturnedValue);

A68_VOID  CINBTRN_write_expand_delays(A68_173  *ReturnedValue);

A68_VOID  TINBTRN_write_ella(A68_313  Dec, A68_36  Write_text, A68_114  Set_ind, A68_173  Options, A68_97  Msg);

A_STATIC A68_VOID  EJNBTRN_write_string(A68_VC  Text, A68_387  Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OJNBTRN_generator(A68_BOOL  MJNBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IKNBTRN_write_strings(A68_179 * Ids, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  PKNBTRN_write_basicattr(A68_181  Attr, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  HLNBTRN_write_attr(A68_181  Attr, A68_INT  Ind, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  PLNBTRN_write_nameitem(A68_VC  Name, A68_181  Attr, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  VLNBTRN_write_formula(A68_190  Form, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  AMNBTRN_write_f(A68_190  F, void *NonLocals);

A_STATIC A68_VOID  XNNBTRN_write_range(A68_205  R, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  DONBTRN_write_index(A68_190  F, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  LONBTRN_write_indexes(A68_202 * Flist, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  TONBTRN_write_type(A68_206  T, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_INT  QPNBTRN_explicit_size(A68_429  Vector);

A_STATIC A68_VOID  NQNBTRN_write_macparams(A68_270  Params, A68_BOOL  Is_macro, A68_BOOL  In_macparam, A68_INT  First, A68_INT  Last, A68_INT  Sort, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  JRNBTRN_anonymous(A68_268  Inst, A68_BOOL  Ismake, A68_BOOL  In_macparam, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  ZRNBTRN_write_replicator(A68_190  Repl, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_BOOL  ATNBTRN_write_keyword(A68_INT  Ind, A68_VC  Txt, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals);

A_STATIC A68_BOOL  ITNBTRN_write_listkeyword(A68_INT  Ind, A68_VC  Txt, A68_INT * Keyword_ind, void *NonLocals);

A_STATIC A68_VOID  TTNBTRN_write_attrdec(A68_187 * Ad, A68_INT  Attrno, A68_387 * Env, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  CUNBTRN_write_intdec(A68_203 * Id, A68_INT  Intno, A68_387 * Env, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OUNBTRN_anonymous(A68_219  Body, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_BOOL  IVNBTRN_letter_or_digit(A68_CHAR  C);

A_STATIC A68_VOID  QVNBTRN_do_char(A68_CHAR  C, A68_BOOL  Endspec, void *NonLocals);

A_STATIC A68_VOID  OWNBTRN_write_typedec(A68_221 * Td, A68_INT  Typeno, A68_387 * Env, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  YWNBTRN_write_constdec(A68_227 * Cd, A68_INT  Constno, A68_387 * Env, A68_431  Write_unit, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  EXNBTRN_write_terminals(A68_269 * Terminals, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  EYNBTRN_write_fndecspec(A68_304 * Fd, A68_INT  Fnno, A68_BOOL  In_macspec, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OYNBTRN_write_mpvalue(A68_289  Spec, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OAOBTRN_write_specvalue(A68_289  Sp, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  VBOBTRN_anonymous(A68_305  Macspecs, A68_304 * Fd, A68_387 * Env, A68_431  Write_unit, A68_BOOL  In_macspec, A68_INT  Macspectop, void *NonLocals);

A_STATIC A68_VOID  ECOBTRN_write_pspec(A68_289  Spec, void *NonLocals);

A_STATIC A68_VOID  HDOBTRN_write_fnbody(A68_300  Fnbody, A68_431  Write_unit, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  LEOBTRN_write_fndec(A68_304 * Fd, A68_INT  Fnno, A68_387 * Env, A68_431  Write_unit, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  YEOBTRN_write_declaration(A68_289  Dd, A68_VC  Term, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  FGOBTRN_write_printitem(A68_190  Cond, A68_274 * Pii, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  YGOBTRN_write_print(A68_260 * Pr, A68_VC  Term, A68_INT * Keyword_ind, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  GHOBTRN_write_fault(A68_261 * Ft, A68_VC  Term, A68_INT * Keyword_ind, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OHOBTRN_write_letnames(A68_269 * Letnames, A68_387 * Env, A68_INT  Ind, A68_INT  Strind, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  HIOBTRN_write_let(A68_262 * Le, A68_VC  Term, A68_INT * Keyword_ind, A68_INT  Ind1, A68_INT  Ind2, A68_INT  Ind3, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  PIOBTRN_write_make(A68_263 * Mk, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  CJOBTRN_do_write_join(A68_264 * J, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  KJOBTRN_write_join(A68_264 * J, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  SJOBTRN_write_repljoin(A68_265 * Re, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  BKOBTRN_write_series(A68_257 * Ss, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  VKOBTRN_write_sequence(A68_276 * Sqq, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  ALOBTRN_write_statement(A68_277  St, void *NonLocals);

A_STATIC A68_VOID  IMOBTRN_write_unit(A68_228  U, A68_387 * Env, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  OMOBTRN_write_output(A68_228  Output, A68_INT  Endserorseq_ind, void *NonLocals);

A_STATIC A68_VOID  OJNBTRN_generator(A68_BOOL  MJNBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PJNBTRN_generator *)NonLocals)->x)
{ 
A68_VC  QJNBTRN;  /* clause result */
A68_VC  RJNBTRN;  /* OPERATORS - dynamic generator */
{ 
RJNBTRN.upb = ((NL(IJNBTRN_ttop)+(*NL(GJNBTRN_num_quotes)))+2) ;
( MJNBTRN_anonymous? A_VLOC(A68_CHAR ,RJNBTRN): A_VHEAP(A68_CHAR ,RJNBTRN) );
QJNBTRN = RJNBTRN;
} 
*ReturnedValue = (QJNBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AMNBTRN_write_f(A68_190  F, void *NonLocals)
#define NL(x) (((BMNBTRN_write_f *)NonLocals)->x)
{ 
A68_190  CMNBTRN;  /* united object - for case conformity */
A68_191 * DMNBTRN_fint;
A68_BOOL  EMNBTRN;  /* optbool result */
A68_VC  FMNBTRN;  /* avoid structure result */
A68_192 * GMNBTRN_fc;
A68_193 * HMNBTRN_far;
A68_306  IMNBTRN;  /* OPERATORS - simple index */
A68_INT  JMNBTRN;  /* YIELD */
A68_194 * KMNBTRN_fna;
A68_309  LMNBTRN;  /* OPERATORS - simple index */
A68_INT  MMNBTRN;  /* YIELD */
A68_203 * NMNBTRN_idec;
A68_289  OMNBTRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  PMNBTRN_written;
A68_VC  QMNBTRN;  /* avoid structure result */
A68_VC  RMNBTRN;  /* avoid structure result */
A68_VC  SMNBTRN;  /* avoid structure result */
A68_195 * TMNBTRN_fdop;
A68_VC  UMNBTRN;  /* clause result */
A68_46  XMNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YMNBTRN;  /* OPERATORS - skip to mode */
A68_46  BNNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CNNBTRN;  /* OPERATORS - skip to mode */
A68_196 * DNNBTRN_fmop;
A68_VC  ENNBTRN;  /* clause result */
A68_46  HNNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  INNBTRN;  /* OPERATORS - skip to mode */
A68_46  LNNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MNNBTRN;  /* OPERATORS - skip to mode */
A68_197 * NNNBTRN_fcnd;
A68_198 * ONNBTRN_fbr;
A68_200 * PNNBTRN_fnl;
A68_46  SNNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_f);
 /* line 569: */
 /* line 570: */
{ 
 /* line 571: */
CMNBTRN = F ;
switch ( CMNBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
DMNBTRN_fint = (CMNBTRN.data.mode1);
 /* line 572: */
 /* line 573: */
{ 
A_CALLPROC(NL(Set_ind),(WJBATRN_fint_ind),(WJBATRN_fint_ind,(NL(Set_ind)).nonlocals));
 /* line 574: */
EMNBTRN = !NL(XINBTRN_expand_char_decs);
if ( EMNBTRN )
{EMNBTRN = ((*(&(DMNBTRN_fint->Text))).upb>0);
}
 /* line 575: */
if ( EMNBTRN )
{ 
 /* line 576: */
 /* line 577: */
A_CALLPROC(NL(Write_text),((*(&(DMNBTRN_fint->Text)))),((*(&(DMNBTRN_fint->Text))),(NL(Write_text)).nonlocals));
} 
else
{ 
 /* line 578: */
 /* line 579: */
 /* line 580: */
FCAAOSI_intchars( (*(&(DMNBTRN_fint->Int))), &FMNBTRN );
A_CALLPROC(NL(Write_text),(FMNBTRN),(FMNBTRN,(NL(Write_text)).nonlocals));
} 
} 
break;
case 2: /* REF STRUCT(INT,MODE190,MODE190)  */
GMNBTRN_fc = (CMNBTRN.data.mode2);
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 584: */
A_CALLPROC(NL(ZLNBTRN_write_f),((*(&(GMNBTRN_fc->Test)))),((*(&(GMNBTRN_fc->Test))),(NL(ZLNBTRN_write_f)).nonlocals));
break;
case 3: /* REF STRUCT(INT)  */
HMNBTRN_far = (CMNBTRN.data.mode3);
 /* line 585: */
 /* line 586: */
{ 
A_CALLPROC(NL(Set_ind),(NJBATRN_farith_ind),(NJBATRN_farith_ind,(NL(Set_ind)).nonlocals));
 /* line 587: */
 /* line 588: */
 /* line 589: */
IMNBTRN = (*(&((*(&(NL(Env)->Fd)))->Nametypes))) ;
JMNBTRN = (*(&(HMNBTRN_far->Nameno))) ;
A_CALLPROC(NL(Write_text),((*(&((&A_VINDEX(IMNBTRN,JMNBTRN))->Name)))),((*(&((&A_VINDEX(IMNBTRN,JMNBTRN))->Name))),(NL(Write_text)).nonlocals));
} 
break;
case 4: /* REF STRUCT(INT)  */
KMNBTRN_fna = (CMNBTRN.data.mode4);
 /* line 590: */
{ 
LMNBTRN = (*(&((*(&(NL(Env)->Dec_env)))->Ints))) ;
MMNBTRN = (*(&(KMNBTRN_fna->Intno))) ;
NMNBTRN_idec = (*(&A_VINDEX(LMNBTRN,MMNBTRN)));
 /* line 592: */
 /* line 593: */
if ( ((*(&(NMNBTRN_idec->Sort)))==QKAATRN_macpardec) )
{ 
PMNBTRN_written = GHNBTRN_mpname(A_UNITE(OMNBTRN,mode2,2,(*KMNBTRN_fna)), NL(Env));
 /* line 595: */
 /* line 596: */
if ( !PMNBTRN_written )
{ 
A_CALLPROC(NL(Set_ind),(IKBATRN_impint_ind),(IKBATRN_impint_ind,(NL(Set_ind)).nonlocals));
 /* line 597: */
A_CALLPROC(NL(Write_text),(ETMBTRN_int_txt),(ETMBTRN_int_txt,(NL(Write_text)).nonlocals));
 /* line 598: */
 /* line 599: */
 /* line 600: */
 /* line 601: */
MDNBTRN_intname( (*(&(KMNBTRN_fna->Intno))), NL(Env), &QMNBTRN );
A_CALLPROC(NL(OLNBTRN_write_nameitem),(QMNBTRN, (*(&(NMNBTRN_idec->Attr))), NL(Env), NL(Msg)),(QMNBTRN, (*(&(NMNBTRN_idec->Attr))), NL(Env), NL(Msg),(NL(OLNBTRN_write_nameitem)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Set_ind),(YJBATRN_fmpar_ind),(YJBATRN_fmpar_ind,(NL(Set_ind)).nonlocals));
 /* line 602: */
 /* line 603: */
 /* line 604: */
 /* line 605: */
MDNBTRN_intname( (*(&(KMNBTRN_fna->Intno))), NL(Env), &RMNBTRN );
A_CALLPROC(NL(Write_text),(RMNBTRN),(RMNBTRN,(NL(Write_text)).nonlocals));
} 
} 
else
{ 
A_CALLPROC(NL(Set_ind),(ZJBATRN_fname_ind),(ZJBATRN_fname_ind,(NL(Set_ind)).nonlocals));
 /* line 606: */
 /* line 607: */
 /* line 608: */
 /* line 609: */
MDNBTRN_intname( (*(&(KMNBTRN_fna->Intno))), NL(Env), &SMNBTRN );
A_CALLPROC(NL(Write_text),(SMNBTRN),(SMNBTRN,(NL(Write_text)).nonlocals));
} 
} 
break;
case 5: /* REF STRUCT(MODE190,INT,MODE190)  */
TMNBTRN_fdop = (CMNBTRN.data.mode5);
 /* line 610: */
{ 
A_CALLPROC(NL(Set_ind),(SJBATRN_fdop_ind),(SJBATRN_fdop_ind,(NL(Set_ind)).nonlocals));
 /* line 611: */
A_CALLPROC(NL(ZLNBTRN_write_f),((*(&(TMNBTRN_fdop->Left)))),((*(&(TMNBTRN_fdop->Left))),(NL(ZLNBTRN_write_f)).nonlocals));
 /* line 612: */
A_CALLPROC(NL(Set_ind),(JLBATRN_operator_ind),(JLBATRN_operator_ind,(NL(Set_ind)).nonlocals));
 /* line 613: */
 /* line 614: */
switch ( (*(&(TMNBTRN_fdop->Sort))) )
{ 
case 1: 
UMNBTRN = BRMBTRN_plus_txt;
break;
case 2: 
UMNBTRN = DRMBTRN_minus_txt;
break;
case 3: 
UMNBTRN = FRMBTRN_star_txt;
break;
case 4: 
UMNBTRN = HRMBTRN_perc_txt;
break;
case 5: 
 /* line 615: */
UMNBTRN = PQMBTRN_equals_txt;
break;
case 6: 
UMNBTRN = KRMBTRN_ne_txt;
break;
case 7: 
UMNBTRN = NRMBTRN_le_txt;
break;
case 8: 
UMNBTRN = QRMBTRN_ge_txt;
break;
case 9: 
UMNBTRN = SRMBTRN_lt_txt;
break;
case 10: 
UMNBTRN = URMBTRN_gt_txt;
break;
case 11: 
UMNBTRN = XRMBTRN_and_txt;
break;
case 12: 
 /* line 616: */
UMNBTRN = ASMBTRN_or_txt;
break;
case 13: 
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(XMNBTRN,A_VC_PLUS(PHNBTRN_badop,WMNBTRN),A68_VC )),(SHAAOSI_system, A_HVEC(XMNBTRN,A_VC_PLUS(PHNBTRN_badop,WMNBTRN),A68_VC ),(NL(Msg)).nonlocals));
 /* line 617: */
UMNBTRN = YMNBTRN;
} 
break;
case 14: 
UMNBTRN = DSMBTRN_sl_txt;
break;
case 15: 
UMNBTRN = GSMBTRN_sr_txt;
break;
case 16: 
UMNBTRN = JSMBTRN_iand_txt;
break;
case 17: 
 /* line 618: */
UMNBTRN = MSMBTRN_ior_txt;
break;
case 18: 
 /* line 619: */
UMNBTRN = PSMBTRN_mod_txt;
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(BNNBTRN,A_VC_PLUS(PHNBTRN_badop,ANNBTRN),A68_VC )),(SHAAOSI_system, A_HVEC(BNNBTRN,A_VC_PLUS(PHNBTRN_badop,ANNBTRN),A68_VC ),(NL(Msg)).nonlocals));
 /* line 620: */
 /* line 621: */
UMNBTRN = CNNBTRN;
break;
} 
A_CALLPROC(NL(Write_text),(UMNBTRN),(UMNBTRN,(NL(Write_text)).nonlocals));
 /* line 622: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 623: */
A_CALLPROC(NL(ZLNBTRN_write_f),((*(&(TMNBTRN_fdop->Right)))),((*(&(TMNBTRN_fdop->Right))),(NL(ZLNBTRN_write_f)).nonlocals));
 /* line 624: */
 /* line 625: */
 /* line 626: */
A_CALLPROC(NL(Set_ind),(BIBATRN_endfdop_ind),(BIBATRN_endfdop_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT,MODE190)  */
DNNBTRN_fmop = (CMNBTRN.data.mode6);
 /* line 627: */
{ 
A_CALLPROC(NL(Set_ind),(XJBATRN_fmop_ind),(XJBATRN_fmop_ind,(NL(Set_ind)).nonlocals));
 /* line 628: */
A_CALLPROC(NL(Set_ind),(JLBATRN_operator_ind),(JLBATRN_operator_ind,(NL(Set_ind)).nonlocals));
 /* line 629: */
 /* line 630: */
switch ( (*(&(DNNBTRN_fmop->Sort))) )
{ 
case 1: 
ENNBTRN = BRMBTRN_plus_txt;
break;
case 2: 
ENNBTRN = DRMBTRN_minus_txt;
break;
case 3: 
 /* line 631: */
ENNBTRN = SSMBTRN_not_txt;
break;
case 4: 
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(HNNBTRN,A_VC_PLUS(PHNBTRN_badop,GNNBTRN),A68_VC )),(SHAAOSI_system, A_HVEC(HNNBTRN,A_VC_PLUS(PHNBTRN_badop,GNNBTRN),A68_VC ),(NL(Msg)).nonlocals));
 /* line 632: */
ENNBTRN = INNBTRN;
} 
break;
case 5: 
ENNBTRN = VSMBTRN_inot_txt;
break;
case 6: 
 /* line 633: */
ENNBTRN = YSMBTRN_sqrt_txt;
break;
case 7: 
 /* line 634: */
ENNBTRN = BTMBTRN_abs_txt;
break;
default: 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(LNNBTRN,A_VC_PLUS(PHNBTRN_badop,KNNBTRN),A68_VC )),(SHAAOSI_system, A_HVEC(LNNBTRN,A_VC_PLUS(PHNBTRN_badop,KNNBTRN),A68_VC ),(NL(Msg)).nonlocals));
 /* line 635: */
 /* line 636: */
ENNBTRN = MNNBTRN;
break;
} 
A_CALLPROC(NL(Write_text),(ENNBTRN),(ENNBTRN,(NL(Write_text)).nonlocals));
 /* line 637: */
A_CALLPROC(NL(ZLNBTRN_write_f),((*(&(DNNBTRN_fmop->Right)))),((*(&(DNNBTRN_fmop->Right))),(NL(ZLNBTRN_write_f)).nonlocals));
 /* line 638: */
 /* line 639: */
 /* line 640: */
A_CALLPROC(NL(Set_ind),(CIBATRN_endfmop_ind),(CIBATRN_endfmop_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE190,MODE190,MODE190)  */
NNNBTRN_fcnd = (CMNBTRN.data.mode7);
 /* line 641: */
{ 
A_CALLPROC(NL(Set_ind),(UJBATRN_fif_ind),(UJBATRN_fif_ind,(NL(Set_ind)).nonlocals));
 /* line 642: */
A_CALLPROC(NL(Write_text),(HTMBTRN_if_txt),(HTMBTRN_if_txt,(NL(Write_text)).nonlocals));
 /* line 643: */
A_CALLPROC(NL(Set_ind),(DHBATRN_condition_ind),(DHBATRN_condition_ind,(NL(Set_ind)).nonlocals));
 /* line 644: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(NNNBTRN_fcnd->Cond))), NL(Env), NL(Msg)),((*(&(NNNBTRN_fcnd->Cond))), NL(Env), NL(Msg),(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 645: */
A_CALLPROC(NL(Set_ind),(WMBATRN_then_ind),(WMBATRN_then_ind,(NL(Set_ind)).nonlocals));
 /* line 646: */
A_CALLPROC(NL(Write_text),(KTMBTRN_then_txt),(KTMBTRN_then_txt,(NL(Write_text)).nonlocals));
 /* line 647: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 648: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(NNNBTRN_fcnd->True))), NL(Env), NL(Msg)),((*(&(NNNBTRN_fcnd->True))), NL(Env), NL(Msg),(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 649: */
A_CALLPROC(NL(Set_ind),(MHBATRN_else_ind),(MHBATRN_else_ind,(NL(Set_ind)).nonlocals));
 /* line 650: */
A_CALLPROC(NL(Write_text),(NTMBTRN_else_txt),(NTMBTRN_else_txt,(NL(Write_text)).nonlocals));
 /* line 651: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 652: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(NNNBTRN_fcnd->False))), NL(Env), NL(Msg)),((*(&(NNNBTRN_fcnd->False))), NL(Env), NL(Msg),(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 653: */
A_CALLPROC(NL(Set_ind),(TJBATRN_fi_ind),(TJBATRN_fi_ind,(NL(Set_ind)).nonlocals));
 /* line 654: */
A_CALLPROC(NL(Write_text),(QTMBTRN_fi_txt),(QTMBTRN_fi_txt,(NL(Write_text)).nonlocals));
 /* line 655: */
 /* line 656: */
 /* line 657: */
A_CALLPROC(NL(Set_ind),(FIBATRN_endif_ind),(FIBATRN_endif_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE190)  */
ONNBTRN_fbr = (CMNBTRN.data.mode8);
 /* line 658: */
{ 
A_CALLPROC(NL(Set_ind),(QJBATRN_fbr_ind),(QJBATRN_fbr_ind,(NL(Set_ind)).nonlocals));
 /* line 659: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 660: */
A_CALLPROC(NL(ZLNBTRN_write_f),((*(&(ONNBTRN_fbr->Formula)))),((*(&(ONNBTRN_fbr->Formula))),(NL(ZLNBTRN_write_f)).nonlocals));
 /* line 661: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 662: */
 /* line 663: */
 /* line 664: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 10: /* REF STRUCT(INT)  */
PNNBTRN_fnl = (CMNBTRN.data.mode10);
 /* line 665: */
 /* line 666: */
A_CALLPROC(NL(Write_text),(AQMBTRN_vis_space_txt),(AQMBTRN_vis_space_txt,(NL(Write_text)).nonlocals));
break;
default: 
 /* line 667: */
 /* line 668: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(SNNBTRN,RNNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(SNNBTRN,RNNBTRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(write_f);
return;
} 
#undef NL

A_STATIC A68_BOOL  IVNBTRN_letter_or_digit(A68_CHAR  C)
{ 
A68_BOOL  JVNBTRN;  /* optbool result */
A68_BOOL  KVNBTRN;  /* optbool result */
A68_BOOL  LVNBTRN;  /* optbool result */
A68_BOOL  MVNBTRN;  /* clause result */
A_PROC_ENTRY(letter_or_digit);
 /* line 1042: */
JVNBTRN = (C>='0');
if ( JVNBTRN )
{JVNBTRN = (C<='9');
}
 /* line 1043: */
if ( ! JVNBTRN )
{KVNBTRN = (C>='A');
if ( KVNBTRN )
{KVNBTRN = (C<='Z');
}
JVNBTRN = KVNBTRN;
}
 /* line 1044: */
if ( ! JVNBTRN )
{LVNBTRN = (C>='a');
if ( LVNBTRN )
{LVNBTRN = (C<='z');
}
JVNBTRN = LVNBTRN;
}
MVNBTRN = JVNBTRN;
A_PROC_EXIT(letter_or_digit);
return( MVNBTRN );
} 
#undef NL

A_STATIC A68_VOID  QVNBTRN_do_char(A68_CHAR  C, A68_BOOL  Endspec, void *NonLocals)
#define NL(x) (((RVNBTRN_do_char *)NonLocals)->x)
{ 
A68_VC  SVNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TVNBTRN_primechar_txt;
A68_INT  UVNBTRN_val;
A68_BOOL  VVNBTRN;  /* optbool result */
A68_VC  WVNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XVNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(do_char);
 /* line 1047: */
 /* line 1048: */
{ 
TVNBTRN_primechar_txt = A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(SVNBTRN,(*NL(EVNBTRN_lastchar)),A68_CHAR ));
 /* line 1049: */
UVNBTRN_val = (A68_INT)(unsigned char)C;
 /* line 1051: */
 /* line 1053: */
if ( (*NL(FVNBTRN_first)) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1054: */
VVNBTRN = (UVNBTRN_val==((*NL(CVNBTRN_lastcharval))+1));
if ( VVNBTRN )
{VVNBTRN = IVNBTRN_letter_or_digit((*NL(EVNBTRN_lastchar)));
}
 /* line 1055: */
if ( VVNBTRN )
{VVNBTRN = IVNBTRN_letter_or_digit(C);
}
 /* line 1056: */
if ( VVNBTRN )
{ 
 /* line 1057: */
if ( !(*NL(GVNBTRN_incharrange)) )
{ 
(*NL(DVNBTRN_firstchar)) = (*NL(EVNBTRN_lastchar));
 /* line 1058: */
(*NL(BVNBTRN_firstcharval)) = (*NL(CVNBTRN_lastcharval));
 /* line 1059: */
 /* line 1060: */
 /* line 1061: */
(*NL(GVNBTRN_incharrange)) = A68_TRUE;
} 
} 
else
{ 
 /* line 1062: */
if ( (*NL(GVNBTRN_incharrange)) )
{ 
 /* line 1063: */
if ( (((*NL(BVNBTRN_firstcharval))+1)==(*NL(CVNBTRN_lastcharval))) )
{ 
A_CALLPROC(NL(Write_text),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(WVNBTRN,(*NL(DVNBTRN_firstchar)),A68_CHAR ))),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(WVNBTRN,(*NL(DVNBTRN_firstchar)),A68_CHAR )),(NL(Write_text)).nonlocals));
 /* line 1064: */
A_CALLPROC(NL(Write_text),(RQMBTRN_stroke_txt),(RQMBTRN_stroke_txt,(NL(Write_text)).nonlocals));
 /* line 1065: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
A_CALLPROC(NL(Write_text),(TVNBTRN_primechar_txt),(TVNBTRN_primechar_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Set_ind),(OMBATRN_startcharrange_ind),(OMBATRN_startcharrange_ind,(NL(Set_ind)).nonlocals));
 /* line 1069: */
A_CALLPROC(NL(Write_text),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(XVNBTRN,(*NL(DVNBTRN_firstchar)),A68_CHAR ))),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(XVNBTRN,(*NL(DVNBTRN_firstchar)),A68_CHAR )),(NL(Write_text)).nonlocals));
 /* line 1070: */
A_CALLPROC(NL(Set_ind),(LHBATRN_dotdot_ind),(LHBATRN_dotdot_ind,(NL(Set_ind)).nonlocals));
 /* line 1071: */
A_CALLPROC(NL(Write_text),(TTMBTRN_dotdot_txt),(TTMBTRN_dotdot_txt,(NL(Write_text)).nonlocals));
 /* line 1072: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1073: */
A_CALLPROC(NL(Write_text),(TVNBTRN_primechar_txt),(TVNBTRN_primechar_txt,(NL(Write_text)).nonlocals));
 /* line 1074: */
 /* line 1075: */
A_CALLPROC(NL(Set_ind),(QIBATRN_endrange_ind),(QIBATRN_endrange_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1076: */
 /* line 1077: */
 /* line 1078: */
(*NL(GVNBTRN_incharrange)) = A68_FALSE;
} 
else
{ 
A_CALLPROC(NL(Set_ind),(WGBATRN_char_ind),(WGBATRN_char_ind,(NL(Set_ind)).nonlocals));
 /* line 1079: */
 /* line 1080: */
A_CALLPROC(NL(Write_text),(TVNBTRN_primechar_txt),(TVNBTRN_primechar_txt,(NL(Write_text)).nonlocals));
} 
} 
} 
 /* line 1081: */
 /* line 1083: */
if ( (*NL(GVNBTRN_incharrange)) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1084: */
if ( Endspec )
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1085: */
 /* line 1086: */
A_CALLPROC(NL(Set_ind),(VHBATRN_endchars_ind),(VHBATRN_endchars_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 1087: */
if ( !(*NL(FVNBTRN_first)) )
{ 
A_CALLPROC(NL(Write_text),(RQMBTRN_stroke_txt),(RQMBTRN_stroke_txt,(NL(Write_text)).nonlocals));
 /* line 1088: */
 /* line 1089: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
} 
} 
 /* line 1090: */
(*NL(FVNBTRN_first)) = A68_FALSE;
 /* line 1091: */
(*NL(CVNBTRN_lastcharval)) = UVNBTRN_val;
 /* line 1092: */
 /* line 1093: */
(*NL(EVNBTRN_lastchar)) = C;
} 
A_PROC_EXIT(do_char);
return;
} 
#undef NL

A_STATIC A68_VOID  ECOBTRN_write_pspec(A68_289  Spec, void *NonLocals)
#define NL(x) (((FCOBTRN_write_pspec *)NonLocals)->x)
{ 
A68_289  GCOBTRN;  /* united object - for case conformity */
A68_222  HCOBTRN_cn;
A68_311  ICOBTRN;  /* OPERATORS - simple index */
A68_INT  JCOBTRN;  /* YIELD */
A68_227 * KCOBTRN_c;
A68_206  LCOBTRN;  /* avoid structure result */
A68_206  MCOBTRN_ty;
A68_BOOL  NCOBTRN;  /* optbool result */
A68_BOOL  OCOBTRN_need_to_print;
A68_BOOL  PCOBTRN;  /* optbool result */
A68_259  QCOBTRN_fnn;
A68_312  RCOBTRN;  /* OPERATORS - simple index */
A68_INT  SCOBTRN;  /* YIELD */
A68_304 * TCOBTRN_f;
A68_46  WCOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_pspec);
 /* line 1351: */
 /* line 1352: */
GCOBTRN = Spec ;
switch ( GCOBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
 /* line 1353: */
 /* line 1354: */
if ( A_CALLPROC(NL(HTNBTRN_write_listkeyword),(HGBATRN_attritem_ind, JQMBTRN_attr_txt, NL(BCOBTRN_keyword_ind)),(HGBATRN_attritem_ind, JQMBTRN_attr_txt, NL(BCOBTRN_keyword_ind),(NL(HTNBTRN_write_listkeyword)).nonlocals)) )
{ 
 /* line 1355: */
 /* line 1356: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 2: /* STRUCT(INT)  */
 /* line 1357: */
 /* line 1358: */
if ( A_CALLPROC(NL(HTNBTRN_write_listkeyword),(OKBATRN_intitem_ind, ETMBTRN_int_txt, NL(BCOBTRN_keyword_ind)),(OKBATRN_intitem_ind, ETMBTRN_int_txt, NL(BCOBTRN_keyword_ind),(NL(HTNBTRN_write_listkeyword)).nonlocals)) )
{ 
 /* line 1359: */
 /* line 1360: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 3: /* STRUCT(INT)  */
 /* line 1361: */
 /* line 1362: */
if ( A_CALLPROC(NL(HTNBTRN_write_listkeyword),(GNBATRN_typeitem_ind, WTMBTRN_type_txt, NL(BCOBTRN_keyword_ind)),(GNBATRN_typeitem_ind, WTMBTRN_type_txt, NL(BCOBTRN_keyword_ind),(NL(HTNBTRN_write_listkeyword)).nonlocals)) )
{ 
 /* line 1363: */
 /* line 1364: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 4: /* STRUCT(INT)  */
HCOBTRN_cn = (GCOBTRN.data.mode4);
 /* line 1365: */
 /* line 1366: */
{ 
ICOBTRN = (*(&((*(&(NL(Env)->Dec_env)))->Consts))) ;
JCOBTRN = HCOBTRN_cn.Constno ;
KCOBTRN_c = (*(&A_VINDEX(ICOBTRN,JCOBTRN)));
 /* line 1367: */
VUNATRN_unit_type( (*(&(KCOBTRN_c->Value))), (*(&(NL(Env)->Fd))), (*(&(NL(Env)->Dec_env))), &LCOBTRN );
MCOBTRN_ty = LCOBTRN;
 /* line 1368: */
NCOBTRN = NL(VINBTRN_no_comma_lists);
if ( ! NCOBTRN )
{NCOBTRN = ((*NL(BCOBTRN_keyword_ind))!=FHBATRN_constitem_ind);
}
OCOBTRN_need_to_print = NCOBTRN;
 /* line 1370: */
PCOBTRN = !OCOBTRN_need_to_print;
if ( PCOBTRN )
{PCOBTRN = !NANBTRN_(MCOBTRN_ty, (*NL(ZBOBTRN_lasttype)));
}
 /* line 1371: */
if ( PCOBTRN )
{ 
 /* line 1373: */
(*NL(BCOBTRN_keyword_ind)) = (-1);
} 
 /* line 1374: */
(*NL(ZBOBTRN_lasttype)) = MCOBTRN_ty;
 /* line 1375: */
 /* line 1376: */
if ( A_CALLPROC(NL(HTNBTRN_write_listkeyword),(FHBATRN_constitem_ind, VVMBTRN_const_txt, NL(BCOBTRN_keyword_ind)),(FHBATRN_constitem_ind, VVMBTRN_const_txt, NL(BCOBTRN_keyword_ind),(NL(HTNBTRN_write_listkeyword)).nonlocals)) )
{ 
A_CALLPROC(NL(SONBTRN_write_type),(MCOBTRN_ty, NL(Env), NL(Msg)),(MCOBTRN_ty, NL(Env), NL(Msg),(NL(SONBTRN_write_type)).nonlocals));
 /* line 1377: */
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 1378: */
 /* line 1379: */
 /* line 1380: */
 /* line 1381: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
} 
} 
break;
case 5: /* STRUCT(INT)  */
QCOBTRN_fnn = (GCOBTRN.data.mode5);
 /* line 1382: */
{ 
RCOBTRN = (*(&((*(&(NL(Env)->Dec_env)))->Fns))) ;
SCOBTRN = QCOBTRN_fnn.Fnno ;
TCOBTRN_f = (*(&A_VINDEX(RCOBTRN,SCOBTRN)));
 /* line 1384: */
 /* line 1385: */
if ( (*(&(TCOBTRN_f->Macro))) )
{ 
 /* line 1386: */
if ( A_CALLPROC(NL(HTNBTRN_write_listkeyword),(UKBATRN_macitem_ind, SYMBTRN_mac_txt, NL(BCOBTRN_keyword_ind)),(UKBATRN_macitem_ind, SYMBTRN_mac_txt, NL(BCOBTRN_keyword_ind),(NL(HTNBTRN_write_listkeyword)).nonlocals)) )
{ 
 /* line 1387: */
 /* line 1388: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
} 
} 
else
{ 
 /* line 1389: */
if ( A_CALLPROC(NL(HTNBTRN_write_listkeyword),(BKBATRN_fnitem_ind, VYMBTRN_fn_txt, NL(BCOBTRN_keyword_ind)),(BKBATRN_fnitem_ind, VYMBTRN_fn_txt, NL(BCOBTRN_keyword_ind),(NL(HTNBTRN_write_listkeyword)).nonlocals)) )
{ 
 /* line 1390: */
 /* line 1391: */
 /* line 1392: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
} 
} 
} 
break;
default: 
 /* line 1393: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(WCOBTRN,VCOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(WCOBTRN,VCOBTRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
A_PROC_EXIT(write_pspec);
return;
} 
#undef NL

A_STATIC A68_VOID  ALOBTRN_write_statement(A68_277  St, void *NonLocals)
#define NL(x) (((BLOBTRN_write_statement *)NonLocals)->x)
{ 
A68_277  CLOBTRN;  /* united object - for case conformity */
A68_281 * DLOBTRN_as;
A68_282 * ELOBTRN_scse;
A68_287 * FLOBTRN_ch;
A68_BOOL  GLOBTRN;  /* optbool result */
A68_BOOL  HLOBTRN;  /* optbool result */
A68_BOOL  ILOBTRN;  /* optbool result */
A68_BOOL  JLOBTRN;  /* optbool result */
A68_283 * KLOBTRN_if;
A68_277  LLOBTRN;  /* united object - for case conformity */
A68_285 * MLOBTRN_nll;
A68_284 * NLOBTRN_srp;
A68_286 * OLOBTRN_srw;
A68_285 * PLOBTRN_snl;
A68_276 * QLOBTRN_seq;
A68_276 * RLOBTRN_sel;
A68_46  ULOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_statement);
 /* line 1859: */
 /* line 1860: */
{ 
 /* line 1861: */
CLOBTRN = St ;
switch ( CLOBTRN.mode )
{ 
case 11: /* REF STRUCT(MODE228,MODE228)  */
DLOBTRN_as = (CLOBTRN.data.mode11);
 /* line 1862: */
{ 
A_CALLPROC(NL(Set_ind),(VLBATRN_seqassign_ind),(VLBATRN_seqassign_ind,(NL(Set_ind)).nonlocals));
 /* line 1863: */
A_CALLPROC(NL(Write_unit),((*(&(DLOBTRN_as->To))), NL(Env), NL(Msg)),((*(&(DLOBTRN_as->To))), NL(Env), NL(Msg),(NL(Write_unit)).nonlocals));
 /* line 1864: */
A_CALLPROC(NL(Set_ind),(MGBATRN_becomes_ind),(MGBATRN_becomes_ind,(NL(Set_ind)).nonlocals));
 /* line 1865: */
A_CALLPROC(NL(Write_text),(QWMBTRN_becomes_txt),(QWMBTRN_becomes_txt,(NL(Write_text)).nonlocals));
 /* line 1866: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1867: */
A_CALLPROC(NL(Write_unit),((*(&(DLOBTRN_as->From))), NL(Env), NL(Msg)),((*(&(DLOBTRN_as->From))), NL(Env), NL(Msg),(NL(Write_unit)).nonlocals));
 /* line 1868: */
 /* line 1869: */
 /* line 1870: */
A_CALLPROC(NL(Set_ind),(PHBATRN_endassign_ind),(PHBATRN_endassign_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 12: /* REF STRUCT(MODE228,REF MODE287)  */
ELOBTRN_scse = (CLOBTRN.data.mode12);
 /* line 1871: */
{ 
FLOBTRN_ch = (*(&(ELOBTRN_scse->Choices)));
 /* line 1873: */
A_CALLPROC(NL(Set_ind),(XLBATRN_seqcase_ind),(XLBATRN_seqcase_ind,(NL(Set_ind)).nonlocals));
 /* line 1874: */
A_CALLPROC(NL(Write_text),(TWMBTRN_case_txt),(TWMBTRN_case_txt,(NL(Write_text)).nonlocals));
 /* line 1875: */
A_CALLPROC(NL(Set_ind),(YGBATRN_chooser_ind),(YGBATRN_chooser_ind,(NL(Set_ind)).nonlocals));
 /* line 1876: */
A_CALLPROC(NL(Write_unit),((*(&(ELOBTRN_scse->Input))), NL(Env), NL(Msg)),((*(&(ELOBTRN_scse->Input))), NL(Env), NL(Msg),(NL(Write_unit)).nonlocals));
 /* line 1877: */
A_CALLPROC(NL(Set_ind),(RGBATRN_caseof_ind),(RGBATRN_caseof_ind,(NL(Set_ind)).nonlocals));
 /* line 1878: */
A_CALLPROC(NL(Write_text),(WWMBTRN_of_txt),(WWMBTRN_of_txt,(NL(Write_text)).nonlocals));
 /* line 1879: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 1880: */
for ( ;; )
{ 
 /* line 1881: */
 /* line 1882: */
if ( !((FLOBTRN_ch!=PAAATRN_nilseqchoices)) ) break;
 /* line 1883: */
if ( ((*(&(FLOBTRN_ch->Sort)))==XIAATRN_elseofchoice) )
{ 
A_CALLPROC(NL(Set_ind),(NHBATRN_elseof_ind),(NHBATRN_elseof_ind,(NL(Set_ind)).nonlocals));
 /* line 1884: */
A_CALLPROC(NL(Write_text),(ZWMBTRN_elseof_txt),(ZWMBTRN_elseof_txt,(NL(Write_text)).nonlocals));
 /* line 1885: */
 /* line 1886: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 1887: */
GLOBTRN = ((*(&(FLOBTRN_ch->Sort)))==YIAATRN_elsechoice);
if ( ! GLOBTRN )
{HLOBTRN = NL(ZINBTRN_expand_delays);
if ( HLOBTRN )
{HLOBTRN = ((*(&(FLOBTRN_ch->Sort)))==ZIAATRN_noelsechoice);
}
GLOBTRN = HLOBTRN;
}
 /* line 1888: */
if ( GLOBTRN )
{ 
A_CALLPROC(NL(Set_ind),(QGBATRN_caseelse_ind),(QGBATRN_caseelse_ind,(NL(Set_ind)).nonlocals));
 /* line 1889: */
A_CALLPROC(NL(Write_text),(NTMBTRN_else_txt),(NTMBTRN_else_txt,(NL(Write_text)).nonlocals));
 /* line 1890: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 1891: */
 /* line 1892: */
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(FLOBTRN_ch->Output)))),((*(&(FLOBTRN_ch->Output))),(NL(ZKOBTRN_write_statement)).nonlocals));
} 
} 
 /* line 1893: */
 /* line 1894: */
ILOBTRN = ((*(&(FLOBTRN_ch->Sort)))==WIAATRN_normalchoice);
if ( ! ILOBTRN )
{ILOBTRN = ((*(&(FLOBTRN_ch->Sort)))==XIAATRN_elseofchoice);
}
 /* line 1895: */
if ( ILOBTRN )
{ 
A_CALLPROC(NL(Set_ind),(YLBATRN_seqchoice_ind),(YLBATRN_seqchoice_ind,(NL(Set_ind)).nonlocals));
 /* line 1896: */
A_CALLPROC(NL(Write_unit),((*(&(FLOBTRN_ch->Test))), NL(Env), NL(Msg)),((*(&(FLOBTRN_ch->Test))), NL(Env), NL(Msg),(NL(Write_unit)).nonlocals));
 /* line 1897: */
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 1898: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1899: */
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(FLOBTRN_ch->Output)))),((*(&(FLOBTRN_ch->Output))),(NL(ZKOBTRN_write_statement)).nonlocals));
 /* line 1900: */
 /* line 1901: */
A_CALLPROC(NL(Set_ind),(WHBATRN_endchoice_ind),(WHBATRN_endchoice_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1902: */
FLOBTRN_ch = (*(&(FLOBTRN_ch->Rest)));
 /* line 1903: */
JLOBTRN = (FLOBTRN_ch!=PAAATRN_nilseqchoices);
if ( JLOBTRN )
{JLOBTRN = ((*(&(FLOBTRN_ch->Sort)))==WIAATRN_normalchoice);
}
 /* line 1904: */
if ( JLOBTRN )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1905: */
 /* line 1906: */
 /* line 1907: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1908: */
A_CALLPROC(NL(Set_ind),(KJBATRN_esac_ind),(KJBATRN_esac_ind,(NL(Set_ind)).nonlocals));
 /* line 1909: */
A_CALLPROC(NL(Write_text),(CXMBTRN_esac_txt),(CXMBTRN_esac_txt,(NL(Write_text)).nonlocals));
 /* line 1910: */
 /* line 1911: */
 /* line 1912: */
A_CALLPROC(NL(Set_ind),(UHBATRN_endcase_ind),(UHBATRN_endcase_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 13: /* REF STRUCT(MODE190,MODE277,MODE277)  */
KLOBTRN_if = (CLOBTRN.data.mode13);
 /* line 1913: */
{ 
A_CALLPROC(NL(Set_ind),(ZLBATRN_seqif_ind),(ZLBATRN_seqif_ind,(NL(Set_ind)).nonlocals));
 /* line 1914: */
A_CALLPROC(NL(Write_text),(HTMBTRN_if_txt),(HTMBTRN_if_txt,(NL(Write_text)).nonlocals));
 /* line 1915: */
A_CALLPROC(NL(Set_ind),(DHBATRN_condition_ind),(DHBATRN_condition_ind,(NL(Set_ind)).nonlocals));
 /* line 1916: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(KLOBTRN_if->Cond))), NL(Env), NL(Msg)),((*(&(KLOBTRN_if->Cond))), NL(Env), NL(Msg),(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1917: */
A_CALLPROC(NL(Set_ind),(WMBATRN_then_ind),(WMBATRN_then_ind,(NL(Set_ind)).nonlocals));
 /* line 1918: */
A_CALLPROC(NL(Write_text),(KTMBTRN_then_txt),(KTMBTRN_then_txt,(NL(Write_text)).nonlocals));
 /* line 1919: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 1920: */
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(KLOBTRN_if->True)))),((*(&(KLOBTRN_if->True))),(NL(ZKOBTRN_write_statement)).nonlocals));
 /* line 1921: */
 /* line 1922: */
LLOBTRN = (*(&(KLOBTRN_if->False))) ;
switch ( LLOBTRN.mode )
{ 
case 15: /* REF STRUCT(INT)  */
MLOBTRN_nll = (LLOBTRN.data.mode15);
 /* line 1923: */
 /* line 1924: */
/*SKIP*/;
break;
default: 
A_CALLPROC(NL(Set_ind),(MHBATRN_else_ind),(MHBATRN_else_ind,(NL(Set_ind)).nonlocals));
 /* line 1925: */
A_CALLPROC(NL(Write_text),(NTMBTRN_else_txt),(NTMBTRN_else_txt,(NL(Write_text)).nonlocals));
 /* line 1926: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 1927: */
 /* line 1928: */
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(KLOBTRN_if->False)))),((*(&(KLOBTRN_if->False))),(NL(ZKOBTRN_write_statement)).nonlocals));
break;
} 
 /* line 1929: */
A_CALLPROC(NL(Set_ind),(TJBATRN_fi_ind),(TJBATRN_fi_ind,(NL(Set_ind)).nonlocals));
 /* line 1930: */
A_CALLPROC(NL(Write_text),(QTMBTRN_fi_txt),(QTMBTRN_fi_txt,(NL(Write_text)).nonlocals));
 /* line 1931: */
 /* line 1932: */
 /* line 1933: */
A_CALLPROC(NL(Set_ind),(FIBATRN_endif_ind),(FIBATRN_endif_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE190,MODE277)  */
NLOBTRN_srp = (CLOBTRN.data.mode14);
 /* line 1934: */
{ 
A_CALLPROC(NL(Set_ind),(GMBATRN_seqrepl_ind),(GMBATRN_seqrepl_ind,(NL(Set_ind)).nonlocals));
 /* line 1935: */
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 1936: */
A_CALLPROC(NL(YRNBTRN_write_replicator),((*(&(NLOBTRN_srp->Repl))), NL(Env), NL(Msg)),((*(&(NLOBTRN_srp->Repl))), NL(Env), NL(Msg),(NL(YRNBTRN_write_replicator)).nonlocals));
 /* line 1937: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
 /* line 1938: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1939: */
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(NLOBTRN_srp->Body)))),((*(&(NLOBTRN_srp->Body))),(NL(ZKOBTRN_write_statement)).nonlocals));
 /* line 1940: */
 /* line 1941: */
 /* line 1942: */
A_CALLPROC(NL(Set_ind),(UIBATRN_endseqrepl_ind),(UIBATRN_endseqrepl_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE190,MODE277)  */
OLOBTRN_srw = (CLOBTRN.data.mode17);
 /* line 1943: */
{ 
A_CALLPROC(NL(Set_ind),(HMBATRN_seqrow_ind),(HMBATRN_seqrow_ind,(NL(Set_ind)).nonlocals));
 /* line 1944: */
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 1945: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(OLOBTRN_srw->Size))), NL(Env), NL(Msg)),((*(&(OLOBTRN_srw->Size))), NL(Env), NL(Msg),(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1946: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
 /* line 1947: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1948: */
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(OLOBTRN_srw->Elem)))),((*(&(OLOBTRN_srw->Elem))),(NL(ZKOBTRN_write_statement)).nonlocals));
 /* line 1949: */
 /* line 1950: */
 /* line 1951: */
A_CALLPROC(NL(Set_ind),(VIBATRN_endseqrow_ind),(VIBATRN_endseqrow_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 15: /* REF STRUCT(INT)  */
PLOBTRN_snl = (CLOBTRN.data.mode15);
 /* line 1952: */
/*SKIP*/;
break;
case 16: /* REF STRUCT(MODE277,REF MODE276)  */
QLOBTRN_seq = (CLOBTRN.data.mode16);
 /* line 1953: */
{ 
RLOBTRN_sel = QLOBTRN_seq;
 /* line 1955: */
A_CALLPROC(NL(Set_ind),(WLBATRN_seqbr_ind),(WLBATRN_seqbr_ind,(NL(Set_ind)).nonlocals));
 /* line 1956: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1957: */
for ( ;; )
{ 
 /* line 1958: */
 /* line 1959: */
if ( !((RLOBTRN_sel!=QAAATRN_nilsequence)) ) break;
A_CALLPROC(NL(ZKOBTRN_write_statement),((*(&(RLOBTRN_sel->Step)))),((*(&(RLOBTRN_sel->Step))),(NL(ZKOBTRN_write_statement)).nonlocals));
 /* line 1960: */
RLOBTRN_sel = (*(&(RLOBTRN_sel->Rest)));
 /* line 1961: */
 /* line 1962: */
if ( (RLOBTRN_sel!=QAAATRN_nilsequence) )
{ 
A_CALLPROC(NL(Write_text),(ZQMBTRN_semi_txt),(ZQMBTRN_semi_txt,(NL(Write_text)).nonlocals));
 /* line 1963: */
 /* line 1964: */
 /* line 1965: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1966: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1967: */
 /* line 1968: */
 /* line 1969: */
 /* line 1970: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
break;
default: 
 /* line 1971: */
 /* line 1972: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(ULOBTRN,TLOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(ULOBTRN,TLOBTRN,A68_VC ),(NL(Msg)).nonlocals));
break;
} 
} 
A_PROC_EXIT(write_statement);
return;
} 
#undef NL

A_STATIC A68_VOID  OMOBTRN_write_output(A68_228  Output, A68_INT  Endserorseq_ind, void *NonLocals)
#define NL(x) (((PMOBTRN_write_output *)NonLocals)->x)
{ 
A68_228  QMOBTRN;  /* united object - for case conformity */
A_PROC_ENTRY(write_output);
 /* line 2024: */
 /* line 2025: */
{ 
 /* line 2026: */
QMOBTRN = Output ;
switch ( QMOBTRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 2027: */
 /* line 2028: */
A_CALLPROC(NL(Set_ind),(ILBATRN_nooutput_ind),(ILBATRN_nooutput_ind,(NL(Set_ind)).nonlocals));
break;
default: 
A_CALLPROC(NL(Set_ind),(LLBATRN_output_ind),(LLBATRN_output_ind,(NL(Set_ind)).nonlocals));
 /* line 2029: */
A_CALLPROC(NL(Write_text),(OXMBTRN_output_txt),(OXMBTRN_output_txt,(NL(Write_text)).nonlocals));
 /* line 2030: */
A_CALLPROC(NL(HMOBTRN_write_unit),(Output, NL(Env), NL(Msg)),(Output, NL(Env), NL(Msg),(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2031: */
 /* line 2032: */
A_CALLPROC(NL(Set_ind),(PIBATRN_endoutput_ind),(PIBATRN_endoutput_ind,(NL(Set_ind)).nonlocals));
break;
} 
 /* line 2033: */
A_CALLPROC(NL(Set_ind),(SHBATRN_endblock_ind),(SHBATRN_endblock_ind,(NL(Set_ind)).nonlocals));
 /* line 2034: */
A_CALLPROC(NL(Write_text),(RXMBTRN_end_txt),(RXMBTRN_end_txt,(NL(Write_text)).nonlocals));
 /* line 2035: */
 /* line 2036: */
A_CALLPROC(NL(Set_ind),(Endserorseq_ind),(Endserorseq_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_output);
return;
} 
#undef NL

A_STATIC A68_VOID  PGNBTRN_generator(A68_BOOL  NGNBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QGNBTRN_generator *)NonLocals)->x)
{ 
A68_VC  RGNBTRN;  /* clause result */
A68_VC  SGNBTRN;  /* OPERATORS - dynamic generator */
{ 
SGNBTRN.upb = NL(Rvi).upb ;
( NGNBTRN_anonymous? A_VLOC(A68_CHAR ,SGNBTRN): A_VHEAP(A68_CHAR ,SGNBTRN) );
RGNBTRN = SGNBTRN;
} 
*ReturnedValue = (RGNBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EJNBTRN_write_string(A68_VC  Text, A68_387  Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((FJNBTRN_write_string *)NonLocals)->x)
{ 
A68_INT  GJNBTRN_num_quotes;
A68_INT  HJNBTRN_tpos;
A68_INT  IJNBTRN_ttop;
A68_CHAR  JJNBTRN_cc;
A68_CHAR * KJNBTRN_c;
A68_INT  LJNBTRN;  /* forall loop counter */
A68_31  NJNBTRN_generator;   /* proc value of non-global proc */
A68_VC  TJNBTRN;  /* avoid structure result */
A68_VC  SJNBTRN_textout;
A68_INT  UJNBTRN;  /* YIELD */
A68_CHAR * VJNBTRN;  /* YIELD */
A68_INT  WJNBTRN_j;
A68_INT  XJNBTRN;  /* to part of loop */
A68_INT  YJNBTRN;  /* YIELD */
A68_CHAR * ZJNBTRN;  /* YIELD */
A68_INT  AKNBTRN;  /* YIELD */
A68_CHAR * BKNBTRN;  /* YIELD */
A68_INT  CKNBTRN;  /* YIELD */
A68_CHAR * DKNBTRN;  /* YIELD */
A_PROC_ENTRY(write_string);
 /* line 455: */
 /* line 460: */
{ 
GJNBTRN_num_quotes = 0;
HJNBTRN_tpos = 0;
 /* line 461: */
IJNBTRN_ttop = Text.upb;
 /* line 462: */
 /* line 464: */
LJNBTRN = Text.upb -1;
KJNBTRN_c = Text.data;
for (;LJNBTRN-- >= 0;
(KJNBTRN_c++
) )
{
if ( ((*KJNBTRN_c)=='\"') )
{ 
GJNBTRN_num_quotes+=1;
} 
}
 /* line 466: */
A_CLOSURE( NJNBTRN_generator, OJNBTRN_generator, PJNBTRN_generator );
(( PJNBTRN_generator * ) ( NJNBTRN_generator.nonlocals )) -> IJNBTRN_ttop = IJNBTRN_ttop;
(( PJNBTRN_generator * ) ( NJNBTRN_generator.nonlocals )) -> GJNBTRN_num_quotes = (&GJNBTRN_num_quotes);
A_CALLPROC(NJNBTRN_generator,(A68_TRUE, &TJNBTRN),(A68_TRUE, &TJNBTRN,(NJNBTRN_generator).nonlocals));
SJNBTRN_textout = TJNBTRN;
 /* line 468: */
UJNBTRN = HJNBTRN_tpos+=1 ;
VJNBTRN = (&A_VINDEX(SJNBTRN_textout,UJNBTRN)) ;
(*VJNBTRN) = '\"';
 /* line 469: */
 /* line 470: */
XJNBTRN = IJNBTRN_ttop;
for ( WJNBTRN_j = 1;
WJNBTRN_j <= XJNBTRN;
WJNBTRN_j += 1 )
{ 
 /* line 471: */
JJNBTRN_cc = (*(&A_VINDEX(Text,WJNBTRN_j)));
 /* line 472: */
YJNBTRN = HJNBTRN_tpos+=1 ;
ZJNBTRN = (&A_VINDEX(SJNBTRN_textout,YJNBTRN)) ;
(*ZJNBTRN) = JJNBTRN_cc;
 /* line 473: */
if ( (JJNBTRN_cc=='\"') )
{ 
 /* line 474: */
AKNBTRN = HJNBTRN_tpos+=1 ;
BKNBTRN = (&A_VINDEX(SJNBTRN_textout,AKNBTRN)) ;
(*BKNBTRN) = JJNBTRN_cc;
} 
}
 /* line 475: */
CKNBTRN = HJNBTRN_tpos+=1 ;
DKNBTRN = (&A_VINDEX(SJNBTRN_textout,CKNBTRN)) ;
(*DKNBTRN) = '\"';
 /* line 476: */
 /* line 477: */
A_CALLPROC(NL(Write_text),(SJNBTRN_textout),(SJNBTRN_textout,(NL(Write_text)).nonlocals));
} 
A_PROC_EXIT(write_string);
return;
} 
#undef NL

A_STATIC A68_VOID  IKNBTRN_write_strings(A68_179 * Ids, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((JKNBTRN_write_strings *)NonLocals)->x)
{ 
A68_179 * KKNBTRN_strings;
A_PROC_ENTRY(write_strings);
 /* line 481: */
 /* line 482: */
{ 
KKNBTRN_strings = Ids;
 /* line 483: */
for ( ;; )
{ 
 /* line 484: */
if ( !((KKNBTRN_strings!=LAAATRN_nilids)) ) break;
A_CALLPROC(NL(DJNBTRN_write_string),((*(&(KKNBTRN_strings->Id))), (*Env), Msg),((*(&(KKNBTRN_strings->Id))), (*Env), Msg,(NL(DJNBTRN_write_string)).nonlocals));
 /* line 485: */
KKNBTRN_strings = (*(&(KKNBTRN_strings->Rest)));
 /* line 486: */
if ( (KKNBTRN_strings!=LAAATRN_nilids) )
{ 
 /* line 487: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 488: */
} 
A_PROC_EXIT(write_strings);
return;
} 
#undef NL

A_STATIC A68_VOID  PKNBTRN_write_basicattr(A68_181  Attr, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((QKNBTRN_write_basicattr *)NonLocals)->x)
{ 
A68_181  RKNBTRN;  /* united object - for case conformity */
A68_182 * SKNBTRN_an;
A68_308  TKNBTRN;  /* OPERATORS - simple index */
A68_INT  UKNBTRN;  /* YIELD */
A68_187 * VKNBTRN_adec;
A68_289  WKNBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XKNBTRN;  /* avoid structure result */
A68_183 * YKNBTRN_ad;
A68_184 * ZKNBTRN_attrs;
A68_184 * ALNBTRN_el;
A68_185 * BLNBTRN_abr;
A_PROC_ENTRY(write_basicattr);
 /* line 491: */
 /* line 492: */
{ 
 /* line 493: */
RKNBTRN = Attr ;
switch ( RKNBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
SKNBTRN_an = (RKNBTRN.data.mode1);
 /* line 494: */
{ 
TKNBTRN = (*(&((*(&(Env->Dec_env)))->Attrs))) ;
UKNBTRN = (*(&(SKNBTRN_an->Attrno))) ;
VKNBTRN_adec = (*(&A_VINDEX(TKNBTRN,UKNBTRN)));
 /* line 495: */
 /* line 496: */
if ( ((*(&(VKNBTRN_adec->Sort)))==QKAATRN_macpardec) )
{ 
A_CALLPROC(NL(Set_ind),(IGBATRN_attrmpar_ind),(IGBATRN_attrmpar_ind,(NL(Set_ind)).nonlocals));
 /* line 497: */
 /* line 498: */
 /* line 499: */
GHNBTRN_mpname(A_UNITE(WKNBTRN,mode1,1,(*SKNBTRN_an)), Env);
} 
else
{ 
 /* line 500: */
A_CALLPROC(NL(Set_ind),(JGBATRN_attrname_ind),(JGBATRN_attrname_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 501: */
 /* line 502: */
 /* line 503: */
FDNBTRN_attrname( (*(&(SKNBTRN_an->Attrno))), Env, &XKNBTRN );
A_CALLPROC(NL(Write_text),(XKNBTRN),(XKNBTRN,(NL(Write_text)).nonlocals));
} 
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE179)  */
YKNBTRN_ad = (RKNBTRN.data.mode2);
 /* line 504: */
{ 
A_CALLPROC(NL(Set_ind),(FGBATRN_attrdata_ind),(FGBATRN_attrdata_ind,(NL(Set_ind)).nonlocals));
 /* line 505: */
 /* line 506: */
if ( !A_VC_EQ((*(&(YKNBTRN_ad->Classname))),TTCAOST_nullid) )
{ 
A_CALLPROC(NL(Write_text),((*(&(YKNBTRN_ad->Classname)))),((*(&(YKNBTRN_ad->Classname))),(NL(Write_text)).nonlocals));
 /* line 507: */
 /* line 508: */
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
} 
 /* line 509: */
A_CALLPROC(NL(HKNBTRN_write_strings),((*(&(YKNBTRN_ad->Strings))), Env, Msg),((*(&(YKNBTRN_ad->Strings))), Env, Msg,(NL(HKNBTRN_write_strings)).nonlocals));
 /* line 510: */
 /* line 511: */
 /* line 512: */
A_CALLPROC(NL(Set_ind),(RHBATRN_endattrdata_ind),(RHBATRN_endattrdata_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE181,REF MODE184)  */
ZKNBTRN_attrs = (RKNBTRN.data.mode3);
 /* line 513: */
{ 
ALNBTRN_el = ZKNBTRN_attrs;
 /* line 515: */
A_CALLPROC(NL(Set_ind),(KGBATRN_attrstr_ind),(KGBATRN_attrstr_ind,(NL(Set_ind)).nonlocals));
 /* line 516: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 517: */
for ( ;; )
{ 
 /* line 518: */
 /* line 519: */
if ( !((ALNBTRN_el!=DBAATRN_nilattrstr)) ) break;
A_CALLPROC(NL(OKNBTRN_write_basicattr),((*(&(ALNBTRN_el->Elem))), Env, Msg),((*(&(ALNBTRN_el->Elem))), Env, Msg,(NL(OKNBTRN_write_basicattr)).nonlocals));
 /* line 520: */
ALNBTRN_el = (*(&(ALNBTRN_el->Rest)));
 /* line 521: */
 /* line 522: */
if ( (ALNBTRN_el!=DBAATRN_nilattrstr) )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 523: */
 /* line 524: */
 /* line 525: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 526: */
 /* line 527: */
 /* line 528: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 529: */
 /* line 530: */
} 
break;
case 4: /* REF STRUCT(MODE181)  */
BLNBTRN_abr = (RKNBTRN.data.mode4);
 /* line 531: */
{ 
A_CALLPROC(NL(Set_ind),(EGBATRN_attrbr_ind),(EGBATRN_attrbr_ind,(NL(Set_ind)).nonlocals));
 /* line 532: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 533: */
A_CALLPROC(NL(OKNBTRN_write_basicattr),((*(&(BLNBTRN_abr->Attr))), Env, Msg),((*(&(BLNBTRN_abr->Attr))), Env, Msg,(NL(OKNBTRN_write_basicattr)).nonlocals));
 /* line 534: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 535: */
 /* line 536: */
 /* line 537: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 5: /* REF STRUCT(INT)  */
 /* line 538: */
 /* line 539: */
/*SKIP*/;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(write_basicattr);
return;
} 
#undef NL
 /* line 542: */
 /* line 543: */
 /* line 544: */

A_STATIC A68_VOID  HLNBTRN_write_attr(A68_181  Attr, A68_INT  Ind, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((ILNBTRN_write_attr *)NonLocals)->x)
{ 
A68_181  JLNBTRN;  /* united object - for case conformity */
A_PROC_ENTRY(write_attr);
 /* line 545: */
 /* line 546: */
JLNBTRN = Attr ;
switch ( JLNBTRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
 /* line 547: */
/*SKIP*/;
break;
default: 
{ 
 /* line 548: */
if ( (Ind!=MDBATRN_blank_ind) )
{ 
A_CALLPROC(NL(Write_text),(LQMBTRN_at_txt),(LQMBTRN_at_txt,(NL(Write_text)).nonlocals));
 /* line 549: */
 /* line 550: */
A_CALLPROC(NL(Set_ind),(Ind),(Ind,(NL(Set_ind)).nonlocals));
} 
 /* line 551: */
 /* line 552: */
 /* line 553: */
A_CALLPROC(NL(OKNBTRN_write_basicattr),(Attr, Env, Msg),(Attr, Env, Msg,(NL(OKNBTRN_write_basicattr)).nonlocals));
} 
break;
} 
A_PROC_EXIT(write_attr);
return;
} 
#undef NL
 /* line 556: */
 /* line 557: */
 /* line 558: */

A_STATIC A68_VOID  PLNBTRN_write_nameitem(A68_VC  Name, A68_181  Attr, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((QLNBTRN_write_nameitem *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_nameitem);
 /* line 559: */
 /* line 560: */
{ 
 /* line 561: */
if ( (Name.upb>0) )
{ 
A_CALLPROC(NL(Write_text),(Name),(Name,(NL(Write_text)).nonlocals));
 /* line 562: */
 /* line 563: */
 /* line 564: */
A_CALLPROC(NL(GLNBTRN_write_attr),(Attr, BLBATRN_nameattr_ind, Env, Msg),(Attr, BLBATRN_nameattr_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
} 
} 
A_PROC_EXIT(write_nameitem);
return;
} 
#undef NL

A_STATIC A68_VOID  VLNBTRN_write_formula(A68_190  Form, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((WLNBTRN_write_formula *)NonLocals)->x)
{ 
A68_422  ZLNBTRN_write_f;   /* proc value of non-global proc */
A_PROC_ENTRY(write_formula);
 /* line 567: */
 /* line 568: */
{ 
A_CLOSURE( ZLNBTRN_write_f, AMNBTRN_write_f, BMNBTRN_write_f );
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> Set_ind = NL(Set_ind);
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> XINBTRN_expand_char_decs = NL(XINBTRN_expand_char_decs);
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> Write_text = NL(Write_text);
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> ZLNBTRN_write_f = ZLNBTRN_write_f;
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> Env = Env;
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> OLNBTRN_write_nameitem = NL(OLNBTRN_write_nameitem);
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> Msg = Msg;
(( BMNBTRN_write_f * ) ( ZLNBTRN_write_f.nonlocals )) -> ULNBTRN_write_formula = NL(ULNBTRN_write_formula);
 /* line 670: */
A_CALLPROC(NL(Set_ind),(FKBATRN_formula_ind),(FKBATRN_formula_ind,(NL(Set_ind)).nonlocals));
 /* line 671: */
A_CALLPROC(ZLNBTRN_write_f,(Form),(Form,(ZLNBTRN_write_f).nonlocals));
 /* line 672: */
 /* line 673: */
A_CALLPROC(NL(Set_ind),(EIBATRN_endformula_ind),(EIBATRN_endformula_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_formula);
return;
} 
#undef NL

A_STATIC A68_VOID  XNNBTRN_write_range(A68_205  R, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((YNNBTRN_write_range *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_range);
 /* line 677: */
 /* line 678: */
{ 
A_CALLPROC(NL(ULNBTRN_write_formula),(R.Lwb, Env, Msg),(R.Lwb, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 679: */
A_CALLPROC(NL(Set_ind),(LHBATRN_dotdot_ind),(LHBATRN_dotdot_ind,(NL(Set_ind)).nonlocals));
 /* line 680: */
A_CALLPROC(NL(Write_text),(TTMBTRN_dotdot_txt),(TTMBTRN_dotdot_txt,(NL(Write_text)).nonlocals));
 /* line 681: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 682: */
 /* line 683: */
A_CALLPROC(NL(ULNBTRN_write_formula),(R.Upb, Env, Msg),(R.Upb, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
} 
A_PROC_EXIT(write_range);
return;
} 
#undef NL

A_STATIC A68_VOID  DONBTRN_write_index(A68_190  F, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((EONBTRN_write_index *)NonLocals)->x)
{ 
A68_190  FONBTRN;  /* united object - for case conformity */
A68_200 * GONBTRN_nl;
A_PROC_ENTRY(write_index);
 /* line 686: */
 /* line 687: */
{ 
 /* line 688: */
FONBTRN = F ;
switch ( FONBTRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
GONBTRN_nl = (FONBTRN.data.mode10);
 /* line 689: */
 /* line 690: */
/*SKIP*/;
break;
default: 
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 691: */
A_CALLPROC(NL(ULNBTRN_write_formula),(F, Env, Msg),(F, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 692: */
 /* line 693: */
 /* line 694: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
break;
} 
} 
A_PROC_EXIT(write_index);
return;
} 
#undef NL

A_STATIC A68_VOID  LONBTRN_write_indexes(A68_202 * Flist, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((MONBTRN_write_indexes *)NonLocals)->x)
{ 
A68_202 * NONBTRN_fs;
A_PROC_ENTRY(write_indexes);
 /* line 697: */
 /* line 698: */
{ 
NONBTRN_fs = Flist;
 /* line 700: */
 /* line 701: */
if ( (NONBTRN_fs!=BBAATRN_nilformulas) )
{ 
A_CALLPROC(NL(Set_ind),(YKBATRN_makemult_ind),(YKBATRN_makemult_ind,(NL(Set_ind)).nonlocals));
 /* line 702: */
for ( ;; )
{ 
 /* line 703: */
 /* line 704: */
if ( !((NONBTRN_fs!=BBAATRN_nilformulas)) ) break;
A_CALLPROC(NL(CONBTRN_write_index),((*(&(NONBTRN_fs->Formula))), Env, Msg),((*(&(NONBTRN_fs->Formula))), Env, Msg,(NL(CONBTRN_write_index)).nonlocals));
 /* line 705: */
NONBTRN_fs = (*(&(NONBTRN_fs->Rest)));
 /* line 706: */
if ( (NONBTRN_fs!=BBAATRN_nilformulas) )
{ 
 /* line 707: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 708: */
 /* line 709: */
 /* line 710: */
A_CALLPROC(NL(Set_ind),(KIBATRN_endmakemult_ind),(KIBATRN_endmakemult_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_indexes);
return;
} 
#undef NL

A_STATIC A68_VOID  TONBTRN_write_type(A68_206  T, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((UONBTRN_write_type *)NonLocals)->x)
{ 
A68_206  VONBTRN;  /* united object - for case conformity */
A68_207 * WONBTRN_tnm;
A68_310  XONBTRN;  /* OPERATORS - simple index */
A68_INT  YONBTRN;  /* YIELD */
A68_221 * ZONBTRN_tdec;
A68_289  APNBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BPNBTRN;  /* avoid structure result */
A68_VC  CPNBTRN;  /* avoid structure result */
A68_VC  DPNBTRN;  /* avoid structure result */
A68_208 * EPNBTRN_tr;
A68_209 * FPNBTRN_ts;
A68_209 * GPNBTRN_el;
A68_210 * HPNBTRN_tf;
A68_212 * IPNBTRN_tsr;
A68_211 * JPNBTRN_tb;
A68_214 * KPNBTRN_tnl;
A68_213 * LPNBTRN_tv;
A68_46  OPNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_type);
 /* line 715: */
 /* line 716: */
{ 
 /* line 717: */
VONBTRN = T ;
switch ( VONBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
WONBTRN_tnm = (VONBTRN.data.mode1);
 /* line 718: */
{ 
XONBTRN = (*(&((*(&(Env->Dec_env)))->Types))) ;
YONBTRN = (*(&(WONBTRN_tnm->Typeno))) ;
ZONBTRN_tdec = (*(&A_VINDEX(XONBTRN,YONBTRN)));
 /* line 720: */
 /* line 721: */
if ( (ZONBTRN_tdec==WAAATRN_niltypedec) )
{ 
A_CALLPROC(NL(Set_ind),(XMBATRN_tmpar_ind),(XMBATRN_tmpar_ind,(NL(Set_ind)).nonlocals));
 /* line 722: */
 /* line 723: */
A_CALLPROC(NL(Write_text),(WTMBTRN_type_txt),(WTMBTRN_type_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
 /* line 724: */
if ( ((*(&(ZONBTRN_tdec->Sort)))==QKAATRN_macpardec) )
{ 
 /* line 725: */
if ( !GHNBTRN_mpname(A_UNITE(APNBTRN,mode3,3,(*WONBTRN_tnm)), Env) )
{ 
A_CALLPROC(NL(Set_ind),(KKBATRN_imptype_ind),(KKBATRN_imptype_ind,(NL(Set_ind)).nonlocals));
 /* line 726: */
A_CALLPROC(NL(Write_text),(WTMBTRN_type_txt),(WTMBTRN_type_txt,(NL(Write_text)).nonlocals));
 /* line 727: */
 /* line 728: */
TDNBTRN_typename( (*(&(WONBTRN_tnm->Typeno))), Env, &BPNBTRN );
A_CALLPROC(NL(OLNBTRN_write_nameitem),(BPNBTRN, (*(&(ZONBTRN_tdec->Attr))), Env, Msg),(BPNBTRN, (*(&(ZONBTRN_tdec->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 729: */
 /* line 730: */
if ( RHNBTRN_has_typebody(ZONBTRN_tdec) )
{ 
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 731: */
 /* line 732: */
 /* line 733: */
 /* line 734: */
A_CALLPROC((*NL(OONBTRN_write_typebody)),((*(&(ZONBTRN_tdec->Body))), Env, Msg),((*(&(ZONBTRN_tdec->Body))), Env, Msg,((*NL(OONBTRN_write_typebody))).nonlocals));
} 
} 
else
{ 
A_CALLPROC(NL(Set_ind),(XMBATRN_tmpar_ind),(XMBATRN_tmpar_ind,(NL(Set_ind)).nonlocals));
 /* line 735: */
 /* line 736: */
 /* line 737: */
 /* line 738: */
TDNBTRN_typename( (*(&(WONBTRN_tnm->Typeno))), Env, &CPNBTRN );
A_CALLPROC(NL(Write_text),(CPNBTRN),(CPNBTRN,(NL(Write_text)).nonlocals));
} 
} 
else
{ 
A_CALLPROC(NL(Set_ind),(YMBATRN_tname_ind),(YMBATRN_tname_ind,(NL(Set_ind)).nonlocals));
 /* line 739: */
 /* line 740: */
 /* line 741: */
 /* line 742: */
TDNBTRN_typename( (*(&(WONBTRN_tnm->Typeno))), Env, &DPNBTRN );
A_CALLPROC(NL(Write_text),(DPNBTRN),(DPNBTRN,(NL(Write_text)).nonlocals));
} 
} 
} 
break;
case 2: /* REF STRUCT(MODE190,MODE206)  */
EPNBTRN_tr = (VONBTRN.data.mode2);
 /* line 743: */
{ 
A_CALLPROC(NL(Set_ind),(ANBATRN_trow_ind),(ANBATRN_trow_ind,(NL(Set_ind)).nonlocals));
 /* line 744: */
A_CALLPROC(NL(CONBTRN_write_index),((*(&(EPNBTRN_tr->Size))), Env, Msg),((*(&(EPNBTRN_tr->Size))), Env, Msg,(NL(CONBTRN_write_index)).nonlocals));
 /* line 745: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 746: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(EPNBTRN_tr->Elem))), Env, Msg),((*(&(EPNBTRN_tr->Elem))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 747: */
 /* line 748: */
 /* line 749: */
A_CALLPROC(NL(Set_ind),(TIBATRN_endrow_ind),(TIBATRN_endrow_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE206,REF MODE209)  */
FPNBTRN_ts = (VONBTRN.data.mode3);
 /* line 750: */
{ 
GPNBTRN_el = FPNBTRN_ts;
 /* line 752: */
A_CALLPROC(NL(Set_ind),(BNBATRN_tstr_ind),(BNBATRN_tstr_ind,(NL(Set_ind)).nonlocals));
 /* line 753: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 754: */
for ( ;; )
{ 
 /* line 755: */
 /* line 756: */
if ( !((GPNBTRN_el!=GAAATRN_niltstr)) ) break;
A_CALLPROC(NL(SONBTRN_write_type),((*(&(GPNBTRN_el->Elem))), Env, Msg),((*(&(GPNBTRN_el->Elem))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 757: */
GPNBTRN_el = (*(&(GPNBTRN_el->Rest)));
 /* line 758: */
 /* line 759: */
if ( (GPNBTRN_el!=GAAATRN_niltstr) )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 760: */
 /* line 761: */
 /* line 762: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 763: */
 /* line 764: */
 /* line 765: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 766: */
 /* line 767: */
} 
break;
case 4: /* REF STRUCT(MODE206,MODE206)  */
HPNBTRN_tf = (VONBTRN.data.mode4);
 /* line 768: */
{ 
A_CALLPROC(NL(Set_ind),(VMBATRN_tfn_ind),(VMBATRN_tfn_ind,(NL(Set_ind)).nonlocals));
 /* line 769: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(HPNBTRN_tf->From))), Env, Msg),((*(&(HPNBTRN_tf->From))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 770: */
A_CALLPROC(NL(Set_ind),(ZMBATRN_to_ind),(ZMBATRN_to_ind,(NL(Set_ind)).nonlocals));
 /* line 771: */
A_CALLPROC(NL(Write_text),(ZTMBTRN_to_txt),(ZTMBTRN_to_txt,(NL(Write_text)).nonlocals));
 /* line 772: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 773: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(HPNBTRN_tf->To))), Env, Msg),((*(&(HPNBTRN_tf->To))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 774: */
 /* line 775: */
 /* line 776: */
A_CALLPROC(NL(Set_ind),(BJBATRN_endtfn_ind),(BJBATRN_endtfn_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE190,MODE206)  */
IPNBTRN_tsr = (VONBTRN.data.mode6);
 /* line 777: */
{ 
A_CALLPROC(NL(Set_ind),(CNBATRN_tstring_ind),(CNBATRN_tstring_ind,(NL(Set_ind)).nonlocals));
 /* line 778: */
A_CALLPROC(NL(Write_text),(CUMBTRN_string_txt),(CUMBTRN_string_txt,(NL(Write_text)).nonlocals));
 /* line 779: */
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 780: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(IPNBTRN_tsr->Size))), Env, Msg),((*(&(IPNBTRN_tsr->Size))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 781: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
 /* line 782: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 783: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(IPNBTRN_tsr->Char))), Env, Msg),((*(&(IPNBTRN_tsr->Char))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 784: */
 /* line 785: */
 /* line 786: */
A_CALLPROC(NL(Set_ind),(AJBATRN_endstring_ind),(AJBATRN_endstring_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 5: /* REF STRUCT(MODE206)  */
JPNBTRN_tb = (VONBTRN.data.mode5);
 /* line 787: */
{ 
A_CALLPROC(NL(Set_ind),(SMBATRN_tbr_ind),(SMBATRN_tbr_ind,(NL(Set_ind)).nonlocals));
 /* line 788: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 789: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(JPNBTRN_tb->Type))), Env, Msg),((*(&(JPNBTRN_tb->Type))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 790: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 791: */
 /* line 792: */
 /* line 793: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT)  */
KPNBTRN_tnl = (VONBTRN.data.mode9);
 /* line 794: */
A_CALLPROC(NL(Write_text),(AQMBTRN_vis_space_txt),(AQMBTRN_vis_space_txt,(NL(Write_text)).nonlocals));
break;
case 7: /* REF STRUCT(INT)  */
LPNBTRN_tv = (VONBTRN.data.mode7);
 /* line 795: */
{ 
A_CALLPROC(NL(Set_ind),(DNBATRN_tvoid_ind),(DNBATRN_tvoid_ind,(NL(Set_ind)).nonlocals));
 /* line 796: */
 /* line 797: */
 /* line 798: */
 /* line 799: */
A_CALLPROC(NL(Write_text),(YYMBTRN_void_txt),(YYMBTRN_void_txt,(NL(Write_text)).nonlocals));
} 
break;
default: 
 /* line 800: */
 /* line 801: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(OPNBTRN,NPNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(OPNBTRN,NPNBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
A_PROC_EXIT(write_type);
return;
} 
#undef NL

A_STATIC A68_INT  QPNBTRN_explicit_size(A68_429  Vector)
{ 
A68_INT  RPNBTRN_explicitsize;
A68_429  SPNBTRN;  /* united object - for case conformity */
A68_305  TPNBTRN_ms;
A68_INT  UPNBTRN_ms_index;
A68_INT  VPNBTRN;  /* to part of loop */
A68_INT  WPNBTRN_sorts;
A68_270  XPNBTRN_mp;
A68_INT  YPNBTRN_mp_index;
A68_INT  ZPNBTRN;  /* to part of loop */
A68_INT  AQNBTRN_sortp;
A68_INT  BQNBTRN;  /* clause result */
A_PROC_ENTRY(explicit_size);
 /* line 805: */
 /* line 806: */
{ 
RPNBTRN_explicitsize = 0;
 /* line 807: */
 /* line 808: */
SPNBTRN = Vector ;
switch ( SPNBTRN.mode )
{ 
case 1: /* REF VECTOR [] MODE302 */
TPNBTRN_ms = (SPNBTRN.data.mode1);
 /* line 809: */
 /* line 810: */
if ( ! A_VSTRUCTCOMP(TPNBTRN_ms,FBAATRN_nilmacspecs) )
{ 
 /* line 811: */
VPNBTRN = TPNBTRN_ms.upb;
for ( UPNBTRN_ms_index = 1;
UPNBTRN_ms_index <= VPNBTRN;
UPNBTRN_ms_index += 1 )
{ 
WPNBTRN_sorts = (A68_INT )(A68_BITS )((A68_BITS )(*(&((&A_VINDEX(TPNBTRN_ms,UPNBTRN_ms_index))->Sort)))&0X1U);
 /* line 812: */
if ( (WPNBTRN_sorts==AJAATRN_explicitmacpar) )
{ 
 /* line 813: */
RPNBTRN_explicitsize = UPNBTRN_ms_index;
} 
}
 /* line 814: */
 /* line 815: */
} 
break;
case 2: /* REF VECTOR [] MODE271 */
XPNBTRN_mp = (SPNBTRN.data.mode2);
 /* line 816: */
 /* line 817: */
if ( ! A_VSTRUCTCOMP(XPNBTRN_mp,ABAATRN_nilmacparams) )
{ 
 /* line 818: */
ZPNBTRN = XPNBTRN_mp.upb;
for ( YPNBTRN_mp_index = 1;
YPNBTRN_mp_index <= ZPNBTRN;
YPNBTRN_mp_index += 1 )
{ 
AQNBTRN_sortp = UBNBTRN_macparam_sort((*(&A_VINDEX(XPNBTRN_mp,YPNBTRN_mp_index))));
 /* line 819: */
if ( (AQNBTRN_sortp==AJAATRN_explicitmacpar) )
{ 
 /* line 820: */
RPNBTRN_explicitsize = YPNBTRN_mp_index;
} 
}
 /* line 821: */
 /* line 822: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 823: */
 /* line 824: */
BQNBTRN = RPNBTRN_explicitsize;
} 
A_PROC_EXIT(explicit_size);
return( BQNBTRN );
} 
#undef NL
 /* line 830: */
 /* line 831: */
 /* line 832: */
 /* line 833: */
 /* line 834: */

A_STATIC A68_VOID  NQNBTRN_write_macparams(A68_270  Params, A68_BOOL  Is_macro, A68_BOOL  In_macparam, A68_INT  First, A68_INT  Last, A68_INT  Sort, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((OQNBTRN_write_macparams *)NonLocals)->x)
{ 
A68_BOOL  PQNBTRN;  /* optbool result */
A68_INT  QQNBTRN_mpno;
A68_INT  RQNBTRN;  /* to part of loop */
A68_272  SQNBTRN;  /* united object - for case conformity */
A68_189  TQNBTRN_at;
A68_201  UQNBTRN_ft;
A68_215  VQNBTRN_tt;
A68_273  WQNBTRN_ct;
A68_268  XQNBTRN_inst;
A68_46  ARNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  BRNBTRN;  /* optbool result */
A_PROC_ENTRY(write_macparams);
 /* line 835: */
 /* line 836: */
{ 
 /* line 837: */
if ( (Last>0) )
{ 
PQNBTRN = Is_macro;
if ( ! PQNBTRN )
{PQNBTRN = In_macparam;
}
 /* line 838: */
if ( PQNBTRN )
{ 
 /* line 839: */
A_CALLPROC(NL(Set_ind),(ALBATRN_mparams_ind),(ALBATRN_mparams_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Set_ind),(MJBATRN_expmparams_ind),(MJBATRN_expmparams_ind,(NL(Set_ind)).nonlocals));
 /* line 840: */
 /* line 841: */
A_CALLPROC(NL(Write_text),(AZMBTRN_hash_txt),(AZMBTRN_hash_txt,(NL(Write_text)).nonlocals));
} 
 /* line 842: */
A_CALLPROC(NL(Write_text),(WPMBTRN_ocb_txt),(WPMBTRN_ocb_txt,(NL(Write_text)).nonlocals));
 /* line 843: */
 /* line 844: */
RQNBTRN = Last;
for ( QQNBTRN_mpno = First;
QQNBTRN_mpno <= RQNBTRN;
QQNBTRN_mpno += 1 )
{ 
 /* line 845: */
 /* line 846: */
if ( (UBNBTRN_macparam_sort((*(&A_VINDEX(Params,QQNBTRN_mpno))))==Sort) )
{ 
 /* line 847: */
SQNBTRN = (*(&((&A_VINDEX(Params,QQNBTRN_mpno))->Param))) ;
switch ( SQNBTRN.mode )
{ 
case 1: /* STRUCT(MODE181)  */
TQNBTRN_at = (SQNBTRN.data.mode1);
 /* line 848: */
A_CALLPROC(NL(GLNBTRN_write_attr),(TQNBTRN_at.Tag, MDBATRN_blank_ind, Env, Msg),(TQNBTRN_at.Tag, MDBATRN_blank_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
break;
case 2: /* STRUCT(MODE190)  */
UQNBTRN_ft = (SQNBTRN.data.mode2);
 /* line 849: */
A_CALLPROC(NL(ULNBTRN_write_formula),(UQNBTRN_ft.Tag, Env, Msg),(UQNBTRN_ft.Tag, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
break;
case 3: /* STRUCT(MODE206)  */
VQNBTRN_tt = (SQNBTRN.data.mode3);
 /* line 850: */
A_CALLPROC(NL(SONBTRN_write_type),(VQNBTRN_tt.Tag, Env, Msg),(VQNBTRN_tt.Tag, Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
break;
case 4: /* STRUCT(MODE228)  */
WQNBTRN_ct = (SQNBTRN.data.mode4);
 /* line 851: */
A_CALLPROC(Write_unit,(WQNBTRN_ct.Tag, Env, Msg),(WQNBTRN_ct.Tag, Env, Msg,(Write_unit).nonlocals));
break;
case 5: /* STRUCT(INT,REF MODE270,MODE181)  */
XQNBTRN_inst = (SQNBTRN.data.mode5);
 /* line 852: */
 /* line 853: */
 /* line 854: */
A_CALLPROC((*NL(CQNBTRN_write_instance)),(XQNBTRN_inst, A68_TRUE, A68_TRUE, Env, Write_unit, Msg),(XQNBTRN_inst, A68_TRUE, A68_TRUE, Env, Write_unit, Msg,((*NL(CQNBTRN_write_instance))).nonlocals));
break;
default: 
 /* line 855: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(ARNBTRN,ZQNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(ARNBTRN,ZQNBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
 /* line 856: */
 /* line 857: */
if ( (QQNBTRN_mpno!=Last) )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 858: */
 /* line 859: */
 /* line 860: */
 /* line 861: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
} 
}
 /* line 862: */
A_CALLPROC(NL(Write_text),(YPMBTRN_ccb_txt),(YPMBTRN_ccb_txt,(NL(Write_text)).nonlocals));
 /* line 863: */
BRNBTRN = Is_macro;
if ( ! BRNBTRN )
{BRNBTRN = In_macparam;
}
if ( !BRNBTRN )
{ 
A_CALLPROC(NL(Write_text),(AZMBTRN_hash_txt),(AZMBTRN_hash_txt,(NL(Write_text)).nonlocals));
} 
 /* line 864: */
 /* line 865: */
 /* line 866: */
A_CALLPROC(NL(Set_ind),(LIBATRN_endmparams_ind),(LIBATRN_endmparams_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_macparams);
return;
} 
#undef NL
 /* line 871: */
 /* line 872: */
 /* line 873: */

A_STATIC A68_VOID  JRNBTRN_anonymous(A68_268  Inst, A68_BOOL  Ismake, A68_BOOL  In_macparam, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((KRNBTRN_anonymous *)NonLocals)->x)
{ 
A68_312  LRNBTRN;  /* OPERATORS - simple index */
A68_INT  MRNBTRN;  /* YIELD */
A68_BOOL  NRNBTRN_is_macro;
A68_VC  ORNBTRN;  /* avoid structure result */
A68_270  PRNBTRN;  /* != */
A68_INT  QRNBTRN_mptop;
A68_429  RRNBTRN;  /* OPERATORS - mode -> union mode */
A68_270  SRNBTRN;  /* YIELD */
A68_INT  TRNBTRN_explicitsize;
A68_BOOL  URNBTRN;  /* optbool result */
 /* line 874: */
 /* line 875: */
{ 
LRNBTRN = (*(&((*(&(Env->Dec_env)))->Fns))) ;
MRNBTRN = Inst.Fnno ;
NRNBTRN_is_macro = (*(&((*(&A_VINDEX(LRNBTRN,MRNBTRN)))->Macro)));
 /* line 876: */
A_CALLPROC(NL(Set_ind),(CKBATRN_fnname_ind),(CKBATRN_fnname_ind,(NL(Set_ind)).nonlocals));
 /* line 877: */
HENBTRN_fnname( Inst.Fnno, Env, &ORNBTRN );
A_CALLPROC(NL(Write_text),(ORNBTRN),(ORNBTRN,(NL(Write_text)).nonlocals));
 /* line 878: */
 /* line 879: */
PRNBTRN = Inst.Macparams ;
if ( ! A_VSTRUCTCOMP(PRNBTRN,ABAATRN_nilmacparams) )
{ 
QRNBTRN_mptop = Inst.Macparams.upb;
 /* line 880: */
SRNBTRN = Inst.Macparams ;
TRNBTRN_explicitsize = QPNBTRN_explicit_size(A_UNITE(RRNBTRN,mode2,2,SRNBTRN));
 /* line 882: */
 /* line 883: */
A_CALLPROC(NL(MQNBTRN_write_macparams),(Inst.Macparams, NRNBTRN_is_macro, In_macparam, 1, TRNBTRN_explicitsize, AJAATRN_explicitmacpar, Env, Write_unit, Msg),(Inst.Macparams, NRNBTRN_is_macro, In_macparam, 1, TRNBTRN_explicitsize, AJAATRN_explicitmacpar, Env, Write_unit, Msg,(NL(MQNBTRN_write_macparams)).nonlocals));
 /* line 884: */
URNBTRN = Ismake;
if ( URNBTRN )
{URNBTRN = (QRNBTRN_mptop>TRNBTRN_explicitsize);
}
 /* line 885: */
if ( URNBTRN )
{ 
 /* line 886: */
 /* line 887: */
 /* line 888: */
 /* line 889: */
A_CALLPROC(NL(MQNBTRN_write_macparams),(Inst.Macparams, NRNBTRN_is_macro, In_macparam, (TRNBTRN_explicitsize+1), QRNBTRN_mptop, BJAATRN_implicitmacpar, Env, Write_unit, Msg),(Inst.Macparams, NRNBTRN_is_macro, In_macparam, (TRNBTRN_explicitsize+1), QRNBTRN_mptop, BJAATRN_implicitmacpar, Env, Write_unit, Msg,(NL(MQNBTRN_write_macparams)).nonlocals));
} 
} 
 /* line 890: */
 /* line 891: */
A_CALLPROC(NL(GLNBTRN_write_attr),(Inst.Attr, MKBATRN_instattr_ind, Env, Msg),(Inst.Attr, MKBATRN_instattr_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ZRNBTRN_write_replicator(A68_190  Repl, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((ASNBTRN_write_replicator *)NonLocals)->x)
{ 
A68_INT  BSNBTRN_intno;
A68_190  CSNBTRN;  /* united object - for case conformity */
A68_194 * DSNBTRN_fn;
A68_203 * ESNBTRN;  /* clause result */
A68_309  FSNBTRN;  /* OPERATORS - simple index */
A68_INT  GSNBTRN;  /* YIELD */
A68_46  JSNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_203 * KSNBTRN;  /* OPERATORS - skip to mode */
A68_203 * LSNBTRN_idec;
A68_204  MSNBTRN;  /* united object - for case conformity */
A68_205  NSNBTRN_r;
A68_205  OSNBTRN;  /* clause result */
A68_46  RSNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_205  SSNBTRN;  /* OPERATORS - skip to mode */
A68_205  TSNBTRN_range;
A_PROC_ENTRY(write_replicator);
 /* line 894: */
 /* line 895: */
{ 
 /* line 896: */
 /* line 897: */
 /* line 898: */
CSNBTRN = Repl ;
switch ( CSNBTRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
DSNBTRN_fn = (CSNBTRN.data.mode4);
 /* line 899: */
{ 
BSNBTRN_intno = (*(&(DSNBTRN_fn->Intno)));
 /* line 900: */
 /* line 901: */
 /* line 902: */
FSNBTRN = (*(&((*(&(Env->Dec_env)))->Ints))) ;
GSNBTRN = (*(&(DSNBTRN_fn->Intno))) ;
ESNBTRN = (*(&A_VINDEX(FSNBTRN,GSNBTRN)));
} 
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(JSNBTRN,ISNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(JSNBTRN,ISNBTRN,A68_VC ),(Msg).nonlocals));
 /* line 903: */
ESNBTRN = KSNBTRN;
break;
} 
LSNBTRN_idec = ESNBTRN;
 /* line 905: */
 /* line 906: */
 /* line 907: */
MSNBTRN = (*(&(LSNBTRN_idec->Value))) ;
switch ( MSNBTRN.mode )
{ 
case 11: /* STRUCT(MODE190,MODE190)  */
NSNBTRN_r = (MSNBTRN.data.mode11);
 /* line 908: */
OSNBTRN = NSNBTRN_r;
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(RSNBTRN,QSNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(RSNBTRN,QSNBTRN,A68_VC ),(Msg).nonlocals));
 /* line 909: */
OSNBTRN = SSNBTRN;
break;
} 
TSNBTRN_range = OSNBTRN;
 /* line 911: */
A_CALLPROC(NL(Set_ind),(RMBATRN_startrepl_ind),(RMBATRN_startrepl_ind,(NL(Set_ind)).nonlocals));
 /* line 912: */
A_CALLPROC(NL(Write_text),(ETMBTRN_int_txt),(ETMBTRN_int_txt,(NL(Write_text)).nonlocals));
 /* line 913: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&(LSNBTRN_idec->Intname))), (*(&(LSNBTRN_idec->Attr))), Env, Msg),((*(&(LSNBTRN_idec->Intname))), (*(&(LSNBTRN_idec->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 914: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 915: */
A_CALLPROC(NL(WNNBTRN_write_range),(TSNBTRN_range, Env, Msg),(TSNBTRN_range, Env, Msg,(NL(WNNBTRN_write_range)).nonlocals));
 /* line 916: */
 /* line 917: */
A_CALLPROC(NL(Set_ind),(RIBATRN_endrepl_ind),(RIBATRN_endrepl_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_replicator);
return;
} 
#undef NL
 /* line 920: */
 /* line 921: */
 /* line 922: */

A_STATIC A68_BOOL  ATNBTRN_write_keyword(A68_INT  Ind, A68_VC  Txt, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals)
#define NL(x) (((BTNBTRN_write_keyword *)NonLocals)->x)
{ 
A68_BOOL  CTNBTRN;  /* optbool result */
A68_BOOL  DTNBTRN;  /* clause result */
A_PROC_ENTRY(write_keyword);
 /* line 923: */
 /* line 924: */
{ 
CTNBTRN = NL(VINBTRN_no_comma_lists);
if ( ! CTNBTRN )
{CTNBTRN = ((*Keyword_ind)!=Ind);
}
 /* line 925: */
if ( CTNBTRN )
{ 
 /* line 926: */
if ( ((*Keyword_ind)!=0) )
{ 
A_CALLPROC(NL(Write_text),(Term),(Term,(NL(Write_text)).nonlocals));
 /* line 927: */
 /* line 928: */
if ( A_VC_EQ(Term,VQMBTRN_comma_txt) )
{ 
 /* line 929: */
 /* line 930: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 931: */
 /* line 932: */
A_CALLPROC(NL(Set_ind),(YIBATRN_endstep_ind),(YIBATRN_endstep_ind,(NL(Set_ind)).nonlocals));
} 
} 
 /* line 933: */
A_CALLPROC(NL(Set_ind),((*Keyword_ind) = Ind),((*Keyword_ind) = Ind,(NL(Set_ind)).nonlocals));
 /* line 934: */
A_CALLPROC(NL(Write_text),(Txt),(Txt,(NL(Write_text)).nonlocals));
 /* line 935: */
 /* line 936: */
 /* line 937: */
DTNBTRN = A68_TRUE;
} 
else
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 938: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 939: */
 /* line 940: */
 /* line 941: */
DTNBTRN = A68_FALSE;
} 
} 
A_PROC_EXIT(write_keyword);
return( DTNBTRN );
} 
#undef NL
 /* line 944: */
 /* line 945: */

A_STATIC A68_BOOL  ITNBTRN_write_listkeyword(A68_INT  Ind, A68_VC  Txt, A68_INT * Keyword_ind, void *NonLocals)
#define NL(x) (((JTNBTRN_write_listkeyword *)NonLocals)->x)
{ 
A68_BOOL  KTNBTRN;  /* optbool result */
A68_BOOL  LTNBTRN;  /* clause result */
A_PROC_ENTRY(write_listkeyword);
 /* line 946: */
 /* line 947: */
{ 
KTNBTRN = NL(VINBTRN_no_comma_lists);
if ( ! KTNBTRN )
{KTNBTRN = ((*Keyword_ind)!=Ind);
}
 /* line 948: */
if ( KTNBTRN )
{ 
 /* line 949: */
if ( ((*Keyword_ind)!=0) )
{ 
A_CALLPROC(NL(Set_ind),(NIBATRN_endnamelist_ind),(NIBATRN_endnamelist_ind,(NL(Set_ind)).nonlocals));
 /* line 950: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 951: */
 /* line 952: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 953: */
A_CALLPROC(NL(Set_ind),((*Keyword_ind) = Ind),((*Keyword_ind) = Ind,(NL(Set_ind)).nonlocals));
 /* line 954: */
A_CALLPROC(NL(Write_text),(Txt),(Txt,(NL(Write_text)).nonlocals));
 /* line 955: */
 /* line 956: */
 /* line 957: */
LTNBTRN = A68_TRUE;
} 
else
{ 
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 958: */
 /* line 959: */
 /* line 960: */
LTNBTRN = A68_FALSE;
} 
} 
A_PROC_EXIT(write_listkeyword);
return( LTNBTRN );
} 
#undef NL
 /* line 963: */
 /* line 964: */
 /* line 965: */
 /* line 966: */
 /* line 967: */

A_STATIC A68_VOID  TTNBTRN_write_attrdec(A68_187 * Ad, A68_INT  Attrno, A68_387 * Env, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals)
#define NL(x) (((UTNBTRN_write_attrdec *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_attrdec);
 /* line 968: */
 /* line 969: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(AGBATRN_adecls_ind, JQMBTRN_attr_txt, Term, Keyword_ind, Msg),(AGBATRN_adecls_ind, JQMBTRN_attr_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 970: */
A_CALLPROC(NL(Set_ind),(GGBATRN_attrdec_ind),(GGBATRN_attrdec_ind,(NL(Set_ind)).nonlocals));
 /* line 971: */
A_CALLPROC(NL(Write_text),((*(&(Ad->Attrname)))),((*(&(Ad->Attrname))),(NL(Write_text)).nonlocals));
 /* line 972: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 973: */
A_CALLPROC(NL(GLNBTRN_write_attr),((*(&(Ad->Value))), MDBATRN_blank_ind, Env, Msg),((*(&(Ad->Value))), MDBATRN_blank_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
 /* line 974: */
 /* line 975: */
A_CALLPROC(NL(Set_ind),(AIBATRN_enddec_ind),(AIBATRN_enddec_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_attrdec);
return;
} 
#undef NL
 /* line 978: */
 /* line 979: */
 /* line 980: */
 /* line 981: */
 /* line 982: */

A_STATIC A68_VOID  CUNBTRN_write_intdec(A68_203 * Id, A68_INT  Intno, A68_387 * Env, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals)
#define NL(x) (((DUNBTRN_write_intdec *)NonLocals)->x)
{ 
A68_204  EUNBTRN;  /* united object - for case conformity */
A68_190  FUNBTRN_f;
A68_205  GUNBTRN_r;
A68_46  JUNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_intdec);
 /* line 983: */
 /* line 984: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(GKBATRN_idecls_ind, ETMBTRN_int_txt, Term, Keyword_ind, Msg),(GKBATRN_idecls_ind, ETMBTRN_int_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 985: */
A_CALLPROC(NL(Set_ind),(NKBATRN_intdec_ind),(NKBATRN_intdec_ind,(NL(Set_ind)).nonlocals));
 /* line 986: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&(Id->Intname))), (*(&(Id->Attr))), Env, Msg),((*(&(Id->Intname))), (*(&(Id->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 987: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 988: */
 /* line 989: */
EUNBTRN = (*(&(Id->Value))) ;
switch ( EUNBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE190,MODE190)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE190,INT,MODE190)  */
case 6: /* REF STRUCT(INT,MODE190)  */
case 7: /* REF STRUCT(MODE190,MODE190,MODE190)  */
case 8: /* REF STRUCT(MODE190)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(FUNBTRN_f,EUNBTRN);
 /* line 990: */
A_CALLPROC(NL(ULNBTRN_write_formula),(FUNBTRN_f, Env, Msg),(FUNBTRN_f, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
break;
case 11: /* STRUCT(MODE190,MODE190)  */
GUNBTRN_r = (EUNBTRN.data.mode11);
 /* line 991: */
A_CALLPROC(NL(WNNBTRN_write_range),(GUNBTRN_r, Env, Msg),(GUNBTRN_r, Env, Msg,(NL(WNNBTRN_write_range)).nonlocals));
break;
default: 
 /* line 992: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(JUNBTRN,IUNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(JUNBTRN,IUNBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
 /* line 993: */
 /* line 994: */
A_CALLPROC(NL(Set_ind),(AIBATRN_enddec_ind),(AIBATRN_enddec_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_intdec);
return;
} 
#undef NL

A_STATIC A68_VOID  OUNBTRN_anonymous(A68_219  Body, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((PUNBTRN_anonymous *)NonLocals)->x)
{ 
A68_219  QUNBTRN;  /* united object - for case conformity */
A68_220  RUNBTRN_newn;
A68_217 * SUNBTRN_alt;
A68_INT  TUNBTRN_nalts;
A68_INT  UUNBTRN_altno;
A68_INT  VUNBTRN;  /* to part of loop */
A68_206  WUNBTRN;  /* united object - for case conformity */
A68_214 * XUNBTRN_tn;
A68_218 * YUNBTRN_newi;
A68_216 * ZUNBTRN_newch;
A68_VC  AVNBTRN_chars;
A68_INT  BVNBTRN_firstcharval;
A68_INT  CVNBTRN_lastcharval;
A68_CHAR  DVNBTRN_firstchar;
A68_CHAR  EVNBTRN_lastchar;
A68_BOOL  FVNBTRN_first;
A68_BOOL  GVNBTRN_incharrange;
A68_442  PVNBTRN_do_char;   /* proc value of non-global proc */
A68_CHAR * YVNBTRN_c;
A68_INT  ZVNBTRN;  /* forall loop counter */
A68_VC  AWNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR * BWNBTRN_c;
A68_INT  CWNBTRN;  /* forall loop counter */
A68_215 * DWNBTRN_tt;
A68_46  GWNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 997: */
 /* line 998: */
{ 
 /* line 999: */
QUNBTRN = Body ;
switch ( QUNBTRN.mode )
{ 
case 1: /* REF VECTOR [] MODE217 */
RUNBTRN_newn = (QUNBTRN.data.mode1);
 /* line 1000: */
{ 
 /* line 1001: */
TUNBTRN_nalts = RUNBTRN_newn.upb;
 /* line 1003: */
A_CALLPROC(NL(Set_ind),(DLBATRN_newalts_ind),(DLBATRN_newalts_ind,(NL(Set_ind)).nonlocals));
 /* line 1004: */
A_CALLPROC(NL(Write_text),(IUMBTRN_new_txt),(IUMBTRN_new_txt,(NL(Write_text)).nonlocals));
 /* line 1005: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1006: */
 /* line 1007: */
VUNBTRN = TUNBTRN_nalts;
for ( UUNBTRN_altno = 1;
UUNBTRN_altno <= VUNBTRN;
UUNBTRN_altno += 1 )
{ 
 /* line 1008: */
SUNBTRN_alt = (&A_VINDEX(RUNBTRN_newn,UUNBTRN_altno));
 /* line 1009: */
A_CALLPROC(NL(Write_text),((*(&(SUNBTRN_alt->Altname)))),((*(&(SUNBTRN_alt->Altname))),(NL(Write_text)).nonlocals));
 /* line 1010: */
 /* line 1011: */
WUNBTRN = (*(&(SUNBTRN_alt->Assoc))) ;
switch ( WUNBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
XUNBTRN_tn = (WUNBTRN.data.mode9);
 /* line 1012: */
 /* line 1013: */
/*SKIP*/;
break;
default: 
A_CALLPROC(NL(Write_text),(EQMBTRN_ampsand_txt),(EQMBTRN_ampsand_txt,(NL(Write_text)).nonlocals));
 /* line 1014: */
 /* line 1015: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(SUNBTRN_alt->Assoc))), Env, Msg),((*(&(SUNBTRN_alt->Assoc))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
break;
} 
 /* line 1016: */
 /* line 1017: */
if ( (UUNBTRN_altno!=TUNBTRN_nalts) )
{ 
A_CALLPROC(NL(Write_text),(RQMBTRN_stroke_txt),(RQMBTRN_stroke_txt,(NL(Write_text)).nonlocals));
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1021: */
 /* line 1022: */
 /* line 1023: */
A_CALLPROC(NL(Set_ind),(OHBATRN_endalts_ind),(OHBATRN_endalts_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1024: */
 /* line 1025: */
} 
break;
case 2: /* REF STRUCT(REF MODE26,MODE205)  */
YUNBTRN_newi = (QUNBTRN.data.mode2);
 /* line 1026: */
{ 
A_CALLPROC(NL(Set_ind),(FLBATRN_newint_ind),(FLBATRN_newint_ind,(NL(Set_ind)).nonlocals));
 /* line 1027: */
A_CALLPROC(NL(Write_text),(IUMBTRN_new_txt),(IUMBTRN_new_txt,(NL(Write_text)).nonlocals));
 /* line 1028: */
A_CALLPROC(NL(Write_text),((*(&(YUNBTRN_newi->Tagname)))),((*(&(YUNBTRN_newi->Tagname))),(NL(Write_text)).nonlocals));
 /* line 1029: */
A_CALLPROC(NL(Write_text),(FUMBTRN_slashbr_txt),(FUMBTRN_slashbr_txt,(NL(Write_text)).nonlocals));
 /* line 1030: */
A_CALLPROC(NL(WNNBTRN_write_range),((*(&(YUNBTRN_newi->Range))), Env, Msg),((*(&(YUNBTRN_newi->Range))), Env, Msg,(NL(WNNBTRN_write_range)).nonlocals));
 /* line 1031: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1032: */
 /* line 1033: */
 /* line 1034: */
A_CALLPROC(NL(Set_ind),(HIBATRN_endint_ind),(HIBATRN_endint_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
ZUNBTRN_newch = (QUNBTRN.data.mode4);
 /* line 1035: */
{ 
AVNBTRN_chars = (*(&(ZUNBTRN_newch->Chars)));
 /* line 1036: */
 /* line 1037: */
CVNBTRN_lastcharval = 256;
 /* line 1038: */
 /* line 1039: */
FVNBTRN_first = A68_TRUE;
GVNBTRN_incharrange = A68_FALSE;
 /* line 1041: */
 /* line 1046: */
A_CLOSURE( PVNBTRN_do_char, QVNBTRN_do_char, RVNBTRN_do_char );
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> EVNBTRN_lastchar = (&EVNBTRN_lastchar);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> FVNBTRN_first = (&FVNBTRN_first);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> CVNBTRN_lastcharval = (&CVNBTRN_lastcharval);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> GVNBTRN_incharrange = (&GVNBTRN_incharrange);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> DVNBTRN_firstchar = (&DVNBTRN_firstchar);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> BVNBTRN_firstcharval = (&BVNBTRN_firstcharval);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> Write_text = NL(Write_text);
(( RVNBTRN_do_char * ) ( PVNBTRN_do_char.nonlocals )) -> Set_ind = NL(Set_ind);
 /* line 1095: */
A_CALLPROC(NL(Set_ind),(ELBATRN_newchars_ind),(ELBATRN_newchars_ind,(NL(Set_ind)).nonlocals));
 /* line 1096: */
A_CALLPROC(NL(Write_text),(IUMBTRN_new_txt),(IUMBTRN_new_txt,(NL(Write_text)).nonlocals));
 /* line 1097: */
A_CALLPROC(NL(Write_text),((*(&(ZUNBTRN_newch->Tagname)))),((*(&(ZUNBTRN_newch->Tagname))),(NL(Write_text)).nonlocals));
 /* line 1098: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1099: */
 /* line 1100: */
if ( NL(XINBTRN_expand_char_decs) )
{ 
 /* line 1101: */
ZVNBTRN = AVNBTRN_chars.upb -1;
YVNBTRN_c = AVNBTRN_chars.data;
for (;ZVNBTRN-- >= 0;
(YVNBTRN_c++
) )
{
 /* line 1102: */
 /* line 1103: */
if ( !FVNBTRN_first )
{ 
A_CALLPROC(NL(Write_text),(RQMBTRN_stroke_txt),(RQMBTRN_stroke_txt,(NL(Write_text)).nonlocals));
 /* line 1104: */
 /* line 1105: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1106: */
FVNBTRN_first = A68_FALSE;
 /* line 1107: */
A_CALLPROC(NL(Set_ind),(WGBATRN_char_ind),(WGBATRN_char_ind,(NL(Set_ind)).nonlocals));
 /* line 1108: */
 /* line 1109: */
A_CALLPROC(NL(Write_text),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(AWNBTRN,(*YVNBTRN_c),A68_CHAR ))),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(AWNBTRN,(*YVNBTRN_c),A68_CHAR )),(NL(Write_text)).nonlocals));
}
 /* line 1110: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1111: */
 /* line 1112: */
 /* line 1113: */
A_CALLPROC(NL(Set_ind),(VHBATRN_endchars_ind),(VHBATRN_endchars_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
CWNBTRN = AVNBTRN_chars.upb -1;
BWNBTRN_c = AVNBTRN_chars.data;
for (;CWNBTRN-- >= 0;
(BWNBTRN_c++
) )
{
A_CALLPROC(PVNBTRN_do_char,((*BWNBTRN_c), A68_FALSE),((*BWNBTRN_c), A68_FALSE,(PVNBTRN_do_char).nonlocals));
}
 /* line 1114: */
 /* line 1115: */
 /* line 1116: */
 /* line 1117: */
A_CALLPROC(PVNBTRN_do_char,((A68_CHAR)0, A68_TRUE),((A68_CHAR)0, A68_TRUE,(PVNBTRN_do_char).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(MODE206)  */
DWNBTRN_tt = (QUNBTRN.data.mode3);
 /* line 1118: */
{ 
A_CALLPROC(NL(Set_ind),(ENBATRN_typealias_ind),(ENBATRN_typealias_ind,(NL(Set_ind)).nonlocals));
 /* line 1119: */
 /* line 1120: */
 /* line 1121: */
 /* line 1122: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(DWNBTRN_tt->Tag))), Env, Msg),((*(&(DWNBTRN_tt->Tag))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
} 
break;
default: 
 /* line 1123: */
 /* line 1124: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(GWNBTRN,FWNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(GWNBTRN,FWNBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
return;
} 
#undef NL
 /* line 1127: */
 /* line 1128: */
 /* line 1129: */
 /* line 1130: */
 /* line 1131: */

A_STATIC A68_VOID  OWNBTRN_write_typedec(A68_221 * Td, A68_INT  Typeno, A68_387 * Env, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals)
#define NL(x) (((PWNBTRN_write_typedec *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_typedec);
 /* line 1132: */
 /* line 1133: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(TMBATRN_tdecls_ind, WTMBTRN_type_txt, Term, Keyword_ind, Msg),(TMBATRN_tdecls_ind, WTMBTRN_type_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1134: */
A_CALLPROC(NL(Set_ind),(FNBATRN_typedec_ind),(FNBATRN_typedec_ind,(NL(Set_ind)).nonlocals));
 /* line 1135: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&(Td->Typename))), (*(&(Td->Attr))), Env, Msg),((*(&(Td->Typename))), (*(&(Td->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 1136: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 1137: */
A_CALLPROC((*NL(OONBTRN_write_typebody)),((*(&(Td->Body))), Env, Msg),((*(&(Td->Body))), Env, Msg,((*NL(OONBTRN_write_typebody))).nonlocals));
 /* line 1138: */
 /* line 1139: */
A_CALLPROC(NL(Set_ind),(AIBATRN_enddec_ind),(AIBATRN_enddec_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_typedec);
return;
} 
#undef NL
 /* line 1142: */
 /* line 1143: */
 /* line 1144: */
 /* line 1145: */
 /* line 1146: */
 /* line 1147: */

A_STATIC A68_VOID  YWNBTRN_write_constdec(A68_227 * Cd, A68_INT  Constno, A68_387 * Env, A68_431  Write_unit, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals)
#define NL(x) (((ZWNBTRN_write_constdec *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_constdec);
 /* line 1148: */
 /* line 1149: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(VGBATRN_cdecls_ind, VVMBTRN_const_txt, Term, Keyword_ind, Msg),(VGBATRN_cdecls_ind, VVMBTRN_const_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1150: */
A_CALLPROC(NL(Set_ind),(EHBATRN_constdec_ind),(EHBATRN_constdec_ind,(NL(Set_ind)).nonlocals));
 /* line 1151: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&(Cd->Constname))), (*(&(Cd->Attr))), Env, Msg),((*(&(Cd->Constname))), (*(&(Cd->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 1152: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 1153: */
A_CALLPROC(Write_unit,((*(&(Cd->Value))), Env, Msg),((*(&(Cd->Value))), Env, Msg,(Write_unit).nonlocals));
 /* line 1154: */
 /* line 1155: */
A_CALLPROC(NL(Set_ind),(AIBATRN_enddec_ind),(AIBATRN_enddec_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_constdec);
return;
} 
#undef NL
 /* line 1158: */
 /* line 1159: */

A_STATIC A68_VOID  EXNBTRN_write_terminals(A68_269 * Terminals, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((FXNBTRN_write_terminals *)NonLocals)->x)
{ 
A68_306  GXNBTRN_nametypes;
A68_269 * HXNBTRN_ts;
A68_INT  JXNBTRN;  /* YIELD */
A68_303  IXNBTRN_nametype;
A68_BOOL  KXNBTRN;  /* optbool result */
A68_181  LXNBTRN;  /* united object - for case conformity */
A68_BOOL  MXNBTRN;  /* clause result */
A68_BOOL  NXNBTRN_brackets;
A68_BOOL  OXNBTRN_first;
A68_BOOL  PXNBTRN_has_list;
A68_BOOL  QXNBTRN_has_name;
A68_206  SXNBTRN;  /* OPERATORS - mode -> union mode */
A68_206  RXNBTRN_last_type;
A68_INT  TXNBTRN;  /* YIELD */
A68_BOOL  UXNBTRN;  /* optbool result */
A68_181  VXNBTRN;  /* united object - for case conformity */
A_PROC_ENTRY(write_terminals);
 /* line 1160: */
 /* line 1161: */
{ 
GXNBTRN_nametypes = (*(&((*(&(Env->Fd)))->Nametypes)));
 /* line 1163: */
HXNBTRN_ts = Terminals;
 /* line 1164: */
JXNBTRN = (*(&(HXNBTRN_ts->Nameno))) ;
IXNBTRN_nametype = (*(&A_VINDEX(GXNBTRN_nametypes,JXNBTRN)));
 /* line 1165: */
 /* line 1166: */
KXNBTRN = NL(VINBTRN_no_comma_lists);
if ( ! KXNBTRN )
{KXNBTRN = ((*(&(HXNBTRN_ts->Rest)))!=NAAATRN_nilnames);
}
 /* line 1167: */
if ( ! KXNBTRN )
{KXNBTRN = ((*(&((&IXNBTRN_nametype)->Name))).upb>0);
}
 /* line 1168: */
if ( ! KXNBTRN )
{LXNBTRN = (*(&((&IXNBTRN_nametype)->Attr))) ;
switch ( LXNBTRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
MXNBTRN = A68_FALSE;
break;
default: 
MXNBTRN = A68_TRUE;
break;
} 
KXNBTRN = MXNBTRN;
}
NXNBTRN_brackets = KXNBTRN;
 /* line 1169: */
OXNBTRN_first = A68_TRUE;
PXNBTRN_has_list = A68_FALSE;
QXNBTRN_has_name = A68_FALSE;
 /* line 1170: */
RXNBTRN_last_type = A_UNITE(SXNBTRN,mode9,9,(&DIAATRN_tnull));
 /* line 1172: */
 /* line 1173: */
if ( NXNBTRN_brackets )
{ 
A_CALLPROC(NL(Set_ind),(UMBATRN_terms_ind),(UMBATRN_terms_ind,(NL(Set_ind)).nonlocals));
 /* line 1174: */
 /* line 1175: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
} 
 /* line 1176: */
for ( ;; )
{ 
 /* line 1177: */
 /* line 1178: */
if ( !((HXNBTRN_ts!=NAAATRN_nilnames)) ) break;
TXNBTRN = (*(&(HXNBTRN_ts->Nameno))) ;
IXNBTRN_nametype = (*(&A_VINDEX(GXNBTRN_nametypes,TXNBTRN)));
 /* line 1179: */
QXNBTRN_has_name = ((*(&((&IXNBTRN_nametype)->Name))).upb>0);
 /* line 1180: */
 /* line 1181: */
UXNBTRN = QXNBTRN_has_name;
if ( UXNBTRN )
{UXNBTRN = !NL(VINBTRN_no_comma_lists);
}
 /* line 1182: */
if ( UXNBTRN )
{UXNBTRN = NANBTRN_((*(&((&IXNBTRN_nametype)->Type))), RXNBTRN_last_type);
}
 /* line 1183: */
if ( UXNBTRN )
{ 
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1184: */
 /* line 1185: */
 /* line 1186: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&((&IXNBTRN_nametype)->Name))), (*(&((&IXNBTRN_nametype)->Attr))), Env, Msg),((*(&((&IXNBTRN_nametype)->Name))), (*(&((&IXNBTRN_nametype)->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
} 
else
{ 
 /* line 1187: */
if ( OXNBTRN_first )
{ 
 /* line 1188: */
 /* line 1189: */
OXNBTRN_first = A68_FALSE;
} 
else
{ 
 /* line 1190: */
if ( PXNBTRN_has_list )
{ 
PXNBTRN_has_list = A68_FALSE;
 /* line 1191: */
 /* line 1192: */
A_CALLPROC(NL(Set_ind),(NIBATRN_endnamelist_ind),(NIBATRN_endnamelist_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1193: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1194: */
 /* line 1195: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1196: */
A_CALLPROC(NL(SONBTRN_write_type),(RXNBTRN_last_type = (*(&((&IXNBTRN_nametype)->Type))), Env, Msg),(RXNBTRN_last_type = (*(&((&IXNBTRN_nametype)->Type))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 1197: */
 /* line 1198: */
if ( QXNBTRN_has_name )
{ 
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 1199: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
 /* line 1200: */
PXNBTRN_has_list = A68_TRUE;
 /* line 1201: */
 /* line 1202: */
 /* line 1203: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&((&IXNBTRN_nametype)->Name))), (*(&((&IXNBTRN_nametype)->Attr))), Env, Msg),((*(&((&IXNBTRN_nametype)->Name))), (*(&((&IXNBTRN_nametype)->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
} 
else
{ 
 /* line 1204: */
VXNBTRN = (*(&((&IXNBTRN_nametype)->Attr))) ;
switch ( VXNBTRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
 /* line 1205: */
 /* line 1206: */
/*SKIP*/;
break;
default: 
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 1207: */
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
A_CALLPROC(NL(GLNBTRN_write_attr),((*(&((&IXNBTRN_nametype)->Attr))), HLBATRN_nonameattr_ind, Env, Msg),((*(&((&IXNBTRN_nametype)->Attr))), HLBATRN_nonameattr_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
break;
} 
} 
} 
 /* line 1211: */
 /* line 1212: */
HXNBTRN_ts = (*(&(HXNBTRN_ts->Rest)));
}
 /* line 1213: */
if ( PXNBTRN_has_list )
{ 
A_CALLPROC(NL(Set_ind),(NIBATRN_endnamelist_ind),(NIBATRN_endnamelist_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1214: */
 /* line 1215: */
if ( NXNBTRN_brackets )
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1216: */
 /* line 1217: */
 /* line 1218: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_terminals);
return;
} 
#undef NL
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1228: */
 /* line 1229: */

A_STATIC A68_VOID  EYNBTRN_write_fndecspec(A68_304 * Fd, A68_INT  Fnno, A68_BOOL  In_macspec, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((FYNBTRN_write_fndecspec *)NonLocals)->x)
{ 
A68_305  GYNBTRN_macspecs;
A68_INT  HYNBTRN;  /* clause result */
A68_INT  IYNBTRN_macspecstop;
A_PROC_ENTRY(write_fndecspec);
 /* line 1230: */
 /* line 1231: */
{ 
GYNBTRN_macspecs = (*(&(Fd->Macspecs)));
 /* line 1232: */
if ( A_VSTRUCTCOMP(GYNBTRN_macspecs,FBAATRN_nilmacspecs) )
{ 
HYNBTRN = 0;
} 
else
{ 
HYNBTRN = GYNBTRN_macspecs.upb;
} 
IYNBTRN_macspecstop = HYNBTRN;
 /* line 1234: */
 /* line 1235: */
if ( (*(&(Fd->Macro))) )
{ 
 /* line 1236: */
A_CALLPROC(NL(Set_ind),(TKBATRN_macdec_ind),(TKBATRN_macdec_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 1237: */
if ( (IYNBTRN_macspecstop!=0) )
{ 
 /* line 1238: */
 /* line 1239: */
A_CALLPROC(NL(Set_ind),(LJBATRN_expmacdec_ind),(LJBATRN_expmacdec_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 1240: */
A_CALLPROC(NL(Set_ind),(AKBATRN_fndec_ind),(AKBATRN_fndec_ind,(NL(Set_ind)).nonlocals));
} 
} 
 /* line 1241: */
A_CALLPROC(NL(Set_ind),(CKBATRN_fnname_ind),(CKBATRN_fnname_ind,(NL(Set_ind)).nonlocals));
 /* line 1242: */
A_CALLPROC(NL(Write_text),((*(&(Fd->Fnname)))),((*(&(Fd->Fnname))),(NL(Write_text)).nonlocals));
 /* line 1243: */
A_CALLPROC((*NL(WXNBTRN_write_macspecs)),(GYNBTRN_macspecs, Fd, Env, Write_unit, In_macspec, IYNBTRN_macspecstop),(GYNBTRN_macspecs, Fd, Env, Write_unit, In_macspec, IYNBTRN_macspecstop,((*NL(WXNBTRN_write_macspecs))).nonlocals));
 /* line 1245: */
A_CALLPROC(NL(GLNBTRN_write_attr),((*(&(Fd->Attr))), BLBATRN_nameattr_ind, Env, Msg),((*(&(Fd->Attr))), BLBATRN_nameattr_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
 /* line 1246: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 1247: */
A_CALLPROC(NL(Set_ind),(DKBATRN_fnspec_ind),(DKBATRN_fnspec_ind,(NL(Set_ind)).nonlocals));
 /* line 1248: */
A_CALLPROC(NL(DXNBTRN_write_terminals),((*(&(Fd->Inputs))), Env, Msg),((*(&(Fd->Inputs))), Env, Msg,(NL(DXNBTRN_write_terminals)).nonlocals));
 /* line 1249: */
A_CALLPROC(NL(Set_ind),(ZMBATRN_to_ind),(ZMBATRN_to_ind,(NL(Set_ind)).nonlocals));
 /* line 1250: */
A_CALLPROC(NL(Write_text),(ZTMBTRN_to_txt),(ZTMBTRN_to_txt,(NL(Write_text)).nonlocals));
 /* line 1251: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1252: */
 /* line 1253: */
A_CALLPROC(NL(DXNBTRN_write_terminals),((*(&(Fd->Outputs))), Env, Msg),((*(&(Fd->Outputs))), Env, Msg,(NL(DXNBTRN_write_terminals)).nonlocals));
} 
A_PROC_EXIT(write_fndecspec);
return;
} 
#undef NL
 /* line 1257: */
 /* line 1258: */

A_STATIC A68_VOID  OYNBTRN_write_mpvalue(A68_289  Spec, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((PYNBTRN_write_mpvalue *)NonLocals)->x)
{ 
A68_289  QYNBTRN;  /* united object - for case conformity */
A68_182  RYNBTRN_an;
A68_308  SYNBTRN;  /* OPERATORS - simple index */
A68_INT  TYNBTRN;  /* YIELD */
A68_187 * UYNBTRN_adec;
A68_194  VYNBTRN_fn;
A68_309  WYNBTRN;  /* OPERATORS - simple index */
A68_INT  XYNBTRN;  /* YIELD */
A68_203 * YYNBTRN_idec;
A68_204  ZYNBTRN;  /* united object - for case conformity */
A68_190  AZNBTRN_f;
A68_205  BZNBTRN_r;
A68_46  EZNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  FZNBTRN_tn;
A68_310  GZNBTRN;  /* OPERATORS - simple index */
A68_INT  HZNBTRN;  /* YIELD */
A68_221 * IZNBTRN_tdec;
A68_219  JZNBTRN;  /* united object - for case conformity */
A68_215 * KZNBTRN_tt;
A68_46  NZNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_222  OZNBTRN_cn;
A68_311  PZNBTRN;  /* OPERATORS - simple index */
A68_INT  QZNBTRN;  /* YIELD */
A68_227 * RZNBTRN_cdec;
A68_259  SZNBTRN_fnn;
A68_312  TZNBTRN;  /* OPERATORS - simple index */
A68_INT  UZNBTRN;  /* YIELD */
A68_304 * VZNBTRN_fdec;
A68_300  WZNBTRN;  /* united object - for case conformity */
A68_273 * XZNBTRN_ut;
A68_228  YZNBTRN;  /* united object - for case conformity */
A68_245 * ZZNBTRN_um;
A68_46  CAOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  FAOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  IAOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_mpvalue);
 /* line 1259: */
 /* line 1260: */
QYNBTRN = Spec ;
switch ( QYNBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
RYNBTRN_an = (QYNBTRN.data.mode1);
 /* line 1261: */
{ 
SYNBTRN = (*(&((*(&(Env->Dec_env)))->Attrs))) ;
TYNBTRN = RYNBTRN_an.Attrno ;
UYNBTRN_adec = (*(&A_VINDEX(SYNBTRN,TYNBTRN)));
 /* line 1262: */
 /* line 1263: */
 /* line 1264: */
A_CALLPROC(NL(GLNBTRN_write_attr),((*(&(UYNBTRN_adec->Value))), MDBATRN_blank_ind, Env, Msg),((*(&(UYNBTRN_adec->Value))), MDBATRN_blank_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
} 
break;
case 2: /* STRUCT(INT)  */
VYNBTRN_fn = (QYNBTRN.data.mode2);
 /* line 1265: */
{ 
WYNBTRN = (*(&((*(&(Env->Dec_env)))->Ints))) ;
XYNBTRN = VYNBTRN_fn.Intno ;
YYNBTRN_idec = (*(&A_VINDEX(WYNBTRN,XYNBTRN)));
 /* line 1266: */
 /* line 1267: */
ZYNBTRN = (*(&(YYNBTRN_idec->Value))) ;
switch ( ZYNBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE190,MODE190)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE190,INT,MODE190)  */
case 6: /* REF STRUCT(INT,MODE190)  */
case 7: /* REF STRUCT(MODE190,MODE190,MODE190)  */
case 8: /* REF STRUCT(MODE190)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(AZNBTRN_f,ZYNBTRN);
 /* line 1268: */
A_CALLPROC(NL(ULNBTRN_write_formula),(AZNBTRN_f, Env, Msg),(AZNBTRN_f, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
break;
case 11: /* STRUCT(MODE190,MODE190)  */
BZNBTRN_r = (ZYNBTRN.data.mode11);
 /* line 1269: */
A_CALLPROC(NL(WNNBTRN_write_range),(BZNBTRN_r, Env, Msg),(BZNBTRN_r, Env, Msg,(NL(WNNBTRN_write_range)).nonlocals));
break;
default: 
 /* line 1270: */
 /* line 1271: */
 /* line 1272: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(EZNBTRN,DZNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(EZNBTRN,DZNBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
break;
case 3: /* STRUCT(INT)  */
FZNBTRN_tn = (QYNBTRN.data.mode3);
 /* line 1273: */
{ 
GZNBTRN = (*(&((*(&(Env->Dec_env)))->Types))) ;
HZNBTRN = FZNBTRN_tn.Typeno ;
IZNBTRN_tdec = (*(&A_VINDEX(GZNBTRN,HZNBTRN)));
 /* line 1274: */
if ( (IZNBTRN_tdec==WAAATRN_niltypedec) )
{ 
 /* line 1275: */
A_CALLPROC(NL(Write_text),(WTMBTRN_type_txt),(WTMBTRN_type_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
 /* line 1276: */
JZNBTRN = (*(&(IZNBTRN_tdec->Body))) ;
switch ( JZNBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE206)  */
KZNBTRN_tt = (JZNBTRN.data.mode3);
 /* line 1277: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(KZNBTRN_tt->Tag))), Env, Msg),((*(&(KZNBTRN_tt->Tag))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
break;
default: 
 /* line 1278: */
 /* line 1279: */
 /* line 1280: */
 /* line 1281: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(NZNBTRN,MZNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(NZNBTRN,MZNBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
OZNBTRN_cn = (QYNBTRN.data.mode4);
 /* line 1282: */
{ 
PZNBTRN = (*(&((*(&(Env->Dec_env)))->Consts))) ;
QZNBTRN = OZNBTRN_cn.Constno ;
RZNBTRN_cdec = (*(&A_VINDEX(PZNBTRN,QZNBTRN)));
 /* line 1283: */
 /* line 1284: */
 /* line 1285: */
A_CALLPROC(Write_unit,((*(&(RZNBTRN_cdec->Value))), Env, Msg),((*(&(RZNBTRN_cdec->Value))), Env, Msg,(Write_unit).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
SZNBTRN_fnn = (QYNBTRN.data.mode5);
 /* line 1286: */
{ 
TZNBTRN = (*(&((*(&(Env->Dec_env)))->Fns))) ;
UZNBTRN = SZNBTRN_fnn.Fnno ;
VZNBTRN_fdec = (*(&A_VINDEX(TZNBTRN,UZNBTRN)));
 /* line 1287: */
 /* line 1288: */
WZNBTRN = (*(&(VZNBTRN_fdec->Fnbody))) ;
switch ( WZNBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE228)  */
XZNBTRN_ut = (WZNBTRN.data.mode1);
 /* line 1289: */
 /* line 1290: */
YZNBTRN = (*(&(XZNBTRN_ut->Tag))) ;
switch ( YZNBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE268,MODE228)  */
ZZNBTRN_um = (YZNBTRN.data.mode23);
 /* line 1291: */
 /* line 1292: */
A_CALLPROC((*NL(CQNBTRN_write_instance)),((*(&(ZZNBTRN_um->Inst))), A68_TRUE, A68_TRUE, Env, Write_unit, Msg),((*(&(ZZNBTRN_um->Inst))), A68_TRUE, A68_TRUE, Env, Write_unit, Msg,((*NL(CQNBTRN_write_instance))).nonlocals));
break;
default: 
 /* line 1293: */
 /* line 1294: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(CAOBTRN,BAOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(CAOBTRN,BAOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
break;
default: 
 /* line 1295: */
 /* line 1296: */
 /* line 1297: */
 /* line 1298: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(FAOBTRN,EAOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(FAOBTRN,EAOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
break;
default: 
 /* line 1299: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(IAOBTRN,HAOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(IAOBTRN,HAOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
A_PROC_EXIT(write_mpvalue);
return;
} 
#undef NL
 /* line 1303: */
 /* line 1304: */

A_STATIC A68_VOID  OAOBTRN_write_specvalue(A68_289  Sp, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((PAOBTRN_write_specvalue *)NonLocals)->x)
{ 
A68_289  QAOBTRN;  /* united object - for case conformity */
A68_182  RAOBTRN_anm;
A68_VC  SAOBTRN;  /* avoid structure result */
A68_194  TAOBTRN_fnm;
A68_309  UAOBTRN;  /* OPERATORS - simple index */
A68_INT  VAOBTRN;  /* YIELD */
A68_203 * WAOBTRN_idec;
A68_VC  XAOBTRN;  /* avoid structure result */
A68_207  YAOBTRN_tnm;
A68_310  ZAOBTRN;  /* OPERATORS - simple index */
A68_INT  ABOBTRN;  /* YIELD */
A68_221 * BBOBTRN_tdec;
A68_VC  CBOBTRN;  /* avoid structure result */
A68_222  DBOBTRN_cn;
A68_311  EBOBTRN;  /* OPERATORS - simple index */
A68_INT  FBOBTRN;  /* YIELD */
A68_227 * GBOBTRN_cdec;
A68_VC  HBOBTRN;  /* avoid structure result */
A68_259  IBOBTRN_fn;
A68_307 * JBOBTRN_de;
A68_312  KBOBTRN;  /* OPERATORS - simple index */
A68_INT  LBOBTRN;  /* YIELD */
A68_304 * MBOBTRN_fd;
A68_387  NBOBTRN_locenv;
A_PROC_ENTRY(write_specvalue);
 /* line 1305: */
 /* line 1306: */
QAOBTRN = Sp ;
switch ( QAOBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
RAOBTRN_anm = (QAOBTRN.data.mode1);
 /* line 1307: */
 /* line 1308: */
FDNBTRN_attrname( RAOBTRN_anm.Attrno, Env, &SAOBTRN );
A_CALLPROC(NL(Write_text),(SAOBTRN),(SAOBTRN,(NL(Write_text)).nonlocals));
break;
case 2: /* STRUCT(INT)  */
TAOBTRN_fnm = (QAOBTRN.data.mode2);
 /* line 1309: */
{ 
UAOBTRN = (*(&((*(&(Env->Dec_env)))->Ints))) ;
VAOBTRN = TAOBTRN_fnm.Intno ;
WAOBTRN_idec = (*(&A_VINDEX(UAOBTRN,VAOBTRN)));
 /* line 1310: */
 /* line 1311: */
 /* line 1312: */
 /* line 1313: */
MDNBTRN_intname( TAOBTRN_fnm.Intno, Env, &XAOBTRN );
A_CALLPROC(NL(OLNBTRN_write_nameitem),(XAOBTRN, (*(&(WAOBTRN_idec->Attr))), Env, Msg),(XAOBTRN, (*(&(WAOBTRN_idec->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
} 
break;
case 3: /* STRUCT(INT)  */
YAOBTRN_tnm = (QAOBTRN.data.mode3);
 /* line 1314: */
{ 
ZAOBTRN = (*(&((*(&(Env->Dec_env)))->Types))) ;
ABOBTRN = YAOBTRN_tnm.Typeno ;
BBOBTRN_tdec = (*(&A_VINDEX(ZAOBTRN,ABOBTRN)));
 /* line 1315: */
 /* line 1316: */
TDNBTRN_typename( YAOBTRN_tnm.Typeno, Env, &CBOBTRN );
A_CALLPROC(NL(OLNBTRN_write_nameitem),(CBOBTRN, (*(&(BBOBTRN_tdec->Attr))), Env, Msg),(CBOBTRN, (*(&(BBOBTRN_tdec->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 1317: */
 /* line 1318: */
if ( RHNBTRN_has_typebody(BBOBTRN_tdec) )
{ 
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 1319: */
 /* line 1320: */
 /* line 1321: */
 /* line 1322: */
A_CALLPROC((*NL(OONBTRN_write_typebody)),((*(&(BBOBTRN_tdec->Body))), Env, Msg),((*(&(BBOBTRN_tdec->Body))), Env, Msg,((*NL(OONBTRN_write_typebody))).nonlocals));
} 
} 
break;
case 4: /* STRUCT(INT)  */
DBOBTRN_cn = (QAOBTRN.data.mode4);
 /* line 1323: */
{ 
EBOBTRN = (*(&((*(&(Env->Dec_env)))->Consts))) ;
FBOBTRN = DBOBTRN_cn.Constno ;
GBOBTRN_cdec = (*(&A_VINDEX(EBOBTRN,FBOBTRN)));
 /* line 1324: */
 /* line 1325: */
 /* line 1326: */
 /* line 1327: */
AENBTRN_constname( DBOBTRN_cn.Constno, Env, &HBOBTRN );
A_CALLPROC(NL(OLNBTRN_write_nameitem),(HBOBTRN, (*(&(GBOBTRN_cdec->Attr))), Env, Msg),(HBOBTRN, (*(&(GBOBTRN_cdec->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
IBOBTRN_fn = (QAOBTRN.data.mode5);
 /* line 1328: */
{ 
JBOBTRN_de = (*(&(Env->Dec_env)));
 /* line 1329: */
KBOBTRN = (*(&(JBOBTRN_de->Fns))) ;
LBOBTRN = IBOBTRN_fn.Fnno ;
MBOBTRN_fd = (*(&A_VINDEX(KBOBTRN,LBOBTRN)));
 /* line 1330: */
 /* line 1331: */
ADNBTRN_set_fnenv((&NBOBTRN_locenv), MBOBTRN_fd, (*(&(Env->Mplist))), JBOBTRN_de);
 /* line 1332: */
A_CALLPROC(NL(DYNBTRN_write_fndecspec),(MBOBTRN_fd, IBOBTRN_fn.Fnno, A68_TRUE, (&NBOBTRN_locenv), Write_unit, Msg),(MBOBTRN_fd, IBOBTRN_fn.Fnno, A68_TRUE, (&NBOBTRN_locenv), Write_unit, Msg,(NL(DYNBTRN_write_fndecspec)).nonlocals));
 /* line 1333: */
A_CALLPROC(NL(Set_ind),(DIBATRN_endfnspec_ind),(DIBATRN_endfnspec_ind,(NL(Set_ind)).nonlocals));
 /* line 1334: */
 /* line 1335: */
 /* line 1336: */
 /* line 1337: */
A_CALLPROC(NL(Set_ind),(AIBATRN_enddec_ind),(AIBATRN_enddec_ind,(NL(Set_ind)).nonlocals));
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(write_specvalue);
return;
} 
#undef NL
 /* line 1341: */
 /* line 1342: */
 /* line 1343: */
 /* line 1344: */

A_STATIC A68_VOID  VBOBTRN_anonymous(A68_305  Macspecs, A68_304 * Fd, A68_387 * Env, A68_431  Write_unit, A68_BOOL  In_macspec, A68_INT  Macspectop, void *NonLocals)
#define NL(x) (((WBOBTRN_anonymous *)NonLocals)->x)
{ 
A68_429  XBOBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  YBOBTRN_explicitsize;
A68_206  ACOBTRN;  /* OPERATORS - mode -> union mode */
A68_206  ZBOBTRN_lasttype;
A68_INT  BCOBTRN_keyword_ind;
A68_452  DCOBTRN_write_pspec;   /* proc value of non-global proc */
A68_INT  XCOBTRN_mpno;
A68_INT  YCOBTRN;  /* to part of loop */
A68_INT  ZCOBTRN_mpno;
A68_INT  ADOBTRN;  /* to part of loop */
A68_302  BDOBTRN_sp;
 /* line 1345: */
 /* line 1346: */
{ 
YBOBTRN_explicitsize = QPNBTRN_explicit_size(A_UNITE(XBOBTRN,mode1,1,Macspecs));
 /* line 1347: */
ZBOBTRN_lasttype = A_UNITE(ACOBTRN,mode9,9,(&DIAATRN_tnull));
 /* line 1348: */
BCOBTRN_keyword_ind = 0;
 /* line 1350: */
A_CLOSURE( DCOBTRN_write_pspec, ECOBTRN_write_pspec, FCOBTRN_write_pspec );
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> HTNBTRN_write_listkeyword = NL(HTNBTRN_write_listkeyword);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> BCOBTRN_keyword_ind = (&BCOBTRN_keyword_ind);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> Set_ind = NL(Set_ind);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> Env = Env;
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> VINBTRN_no_comma_lists = NL(VINBTRN_no_comma_lists);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> ZBOBTRN_lasttype = (&ZBOBTRN_lasttype);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> SONBTRN_write_type = NL(SONBTRN_write_type);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> Msg = NL(Msg);
(( FCOBTRN_write_pspec * ) ( DCOBTRN_write_pspec.nonlocals )) -> Write_text = NL(Write_text);
 /* line 1395: */
 /* line 1396: */
if ( (Macspectop>0) )
{ 
 /* line 1397: */
if ( !(*(&(Fd->Macro))) )
{ 
A_CALLPROC(NL(Set_ind),(MJBATRN_expmparams_ind),(MJBATRN_expmparams_ind,(NL(Set_ind)).nonlocals));
 /* line 1398: */
if ( !In_macspec )
{ 
A_CALLPROC(NL(Write_text),(AZMBTRN_hash_txt),(AZMBTRN_hash_txt,(NL(Write_text)).nonlocals));
} 
 /* line 1399: */
A_CALLPROC(NL(Write_text),(WPMBTRN_ocb_txt),(WPMBTRN_ocb_txt,(NL(Write_text)).nonlocals));
 /* line 1401: */
 /* line 1402: */
YCOBTRN = Macspectop;
for ( XCOBTRN_mpno = 1;
XCOBTRN_mpno <= YCOBTRN;
XCOBTRN_mpno += 1 )
{ 
 /* line 1403: */
A_CALLPROC(NL(NYNBTRN_write_mpvalue),((*(&((&A_VINDEX(Macspecs,XCOBTRN_mpno))->Spec))), Env, Write_unit, NL(Msg)),((*(&((&A_VINDEX(Macspecs,XCOBTRN_mpno))->Spec))), Env, Write_unit, NL(Msg),(NL(NYNBTRN_write_mpvalue)).nonlocals));
 /* line 1404: */
 /* line 1405: */
if ( (XCOBTRN_mpno==Macspectop) )
{ 
A_CALLPROC(NL(Write_text),(YPMBTRN_ccb_txt),(YPMBTRN_ccb_txt,(NL(Write_text)).nonlocals));
 /* line 1406: */
if ( !In_macspec )
{ 
 /* line 1407: */
 /* line 1408: */
A_CALLPROC(NL(Write_text),(AZMBTRN_hash_txt),(AZMBTRN_hash_txt,(NL(Write_text)).nonlocals));
} 
} 
else
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1409: */
 /* line 1410: */
 /* line 1411: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1412: */
 /* line 1414: */
A_CALLPROC(NL(Set_ind),(LIBATRN_endmparams_ind),(LIBATRN_endmparams_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 1415: */
if ( (YBOBTRN_explicitsize>0) )
{ 
A_CALLPROC(NL(Set_ind),(VKBATRN_macspec_ind),(VKBATRN_macspec_ind,(NL(Set_ind)).nonlocals));
 /* line 1416: */
A_CALLPROC(NL(Write_text),(WPMBTRN_ocb_txt),(WPMBTRN_ocb_txt,(NL(Write_text)).nonlocals));
 /* line 1418: */
 /* line 1419: */
ADOBTRN = YBOBTRN_explicitsize;
for ( ZCOBTRN_mpno = 1;
ZCOBTRN_mpno <= ADOBTRN;
ZCOBTRN_mpno += 1 )
{ 
 /* line 1420: */
BDOBTRN_sp = (*(&A_VINDEX(Macspecs,ZCOBTRN_mpno)));
 /* line 1421: */
 /* line 1422: */
if ( ((A68_INT )(A68_BITS )((A68_BITS )BDOBTRN_sp.Sort&0X1U)==AJAATRN_explicitmacpar) )
{ 
GHNBTRN_mpname(BDOBTRN_sp.Spec, Env);
 /* line 1423: */
A_CALLPROC(DCOBTRN_write_pspec,(BDOBTRN_sp.Spec),(BDOBTRN_sp.Spec,(DCOBTRN_write_pspec).nonlocals));
 /* line 1424: */
 /* line 1425: */
 /* line 1426: */
A_CALLPROC(NL(NAOBTRN_write_specvalue),(BDOBTRN_sp.Spec, Env, Write_unit, NL(Msg)),(BDOBTRN_sp.Spec, Env, Write_unit, NL(Msg),(NL(NAOBTRN_write_specvalue)).nonlocals));
} 
}
 /* line 1427: */
A_CALLPROC(NL(Set_ind),(NIBATRN_endnamelist_ind),(NIBATRN_endnamelist_ind,(NL(Set_ind)).nonlocals));
 /* line 1429: */
A_CALLPROC(NL(Write_text),(YPMBTRN_ccb_txt),(YPMBTRN_ccb_txt,(NL(Write_text)).nonlocals));
 /* line 1430: */
 /* line 1431: */
 /* line 1432: */
 /* line 1433: */
A_CALLPROC(NL(Set_ind),(JIBATRN_endmacspec_ind),(JIBATRN_endmacspec_ind,(NL(Set_ind)).nonlocals));
} 
} 
} 
} 
return;
} 
#undef NL
 /* line 1436: */
 /* line 1437: */
 /* line 1438: */

A_STATIC A68_VOID  HDOBTRN_write_fnbody(A68_300  Fnbody, A68_431  Write_unit, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((IDOBTRN_write_fnbody *)NonLocals)->x)
{ 
A68_300  JDOBTRN;  /* united object - for case conformity */
A68_273 * KDOBTRN_ut;
A68_290 * LDOBTRN_alien;
A68_270  MDOBTRN;  /* != */
A68_291 * NDOBTRN_ar;
A68_292 * ODOBTRN_rf;
A68_293 * PDOBTRN_im;
A68_294 * QDOBTRN_ad;
A68_BOOL  RDOBTRN;  /* optbool result */
A68_BOOL  SDOBTRN;  /* optbool result */
A68_295 * TDOBTRN_id;
A68_296 * UDOBTRN_rm;
A68_297 * VDOBTRN_sp;
A68_BOOL  WDOBTRN;  /* optbool result */
A68_298 * XDOBTRN_ts;
A68_BOOL  YDOBTRN;  /* optbool result */
A68_299 * ZDOBTRN_bc;
A68_46  CEOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_fnbody);
 /* line 1439: */
 /* line 1440: */
JDOBTRN = Fnbody ;
switch ( JDOBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE228)  */
KDOBTRN_ut = (JDOBTRN.data.mode1);
 /* line 1441: */
{ 
A_CALLPROC(NL(Set_ind),(PGBATRN_body_ind),(PGBATRN_body_ind,(NL(Set_ind)).nonlocals));
 /* line 1442: */
 /* line 1443: */
 /* line 1444: */
A_CALLPROC(Write_unit,((*(&(KDOBTRN_ut->Tag))), Env, Msg),((*(&(KDOBTRN_ut->Tag))), Env, Msg,(Write_unit).nonlocals));
} 
break;
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE270)  */
LDOBTRN_alien = (JDOBTRN.data.mode2);
 /* line 1445: */
{ 
 /* line 1446: */
if ( (*(&(LDOBTRN_alien->Biop))) )
{ 
A_CALLPROC(NL(Set_ind),(NGBATRN_biop_ind),(NGBATRN_biop_ind,(NL(Set_ind)).nonlocals));
 /* line 1447: */
 /* line 1448: */
 /* line 1449: */
A_CALLPROC(NL(Write_text),(OUMBTRN_biop_txt),(OUMBTRN_biop_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Set_ind),(CGBATRN_alien_ind),(CGBATRN_alien_ind,(NL(Set_ind)).nonlocals));
 /* line 1450: */
 /* line 1451: */
A_CALLPROC(NL(Write_text),(RUMBTRN_alien_txt),(RUMBTRN_alien_txt,(NL(Write_text)).nonlocals));
} 
 /* line 1452: */
A_CALLPROC(NL(Set_ind),(CKBATRN_fnname_ind),(CKBATRN_fnname_ind,(NL(Set_ind)).nonlocals));
 /* line 1453: */
A_CALLPROC(NL(Write_text),((*(&(LDOBTRN_alien->Name)))),((*(&(LDOBTRN_alien->Name))),(NL(Write_text)).nonlocals));
 /* line 1454: */
 /* line 1455: */
 /* line 1456: */
MDOBTRN = (*(&(LDOBTRN_alien->Macparams))) ;
if ( ! A_VSTRUCTCOMP(MDOBTRN,ABAATRN_nilmacparams) )
{ 
 /* line 1457: */
 /* line 1458: */
 /* line 1459: */
 /* line 1460: */
 /* line 1461: */
A_CALLPROC(NL(MQNBTRN_write_macparams),((*(&(LDOBTRN_alien->Macparams))), A68_TRUE, A68_FALSE, 1, (*(&(LDOBTRN_alien->Macparams))).upb, AJAATRN_explicitmacpar, Env, Write_unit, Msg),((*(&(LDOBTRN_alien->Macparams))), A68_TRUE, A68_FALSE, 1, (*(&(LDOBTRN_alien->Macparams))).upb, AJAATRN_explicitmacpar, Env, Write_unit, Msg,(NL(MQNBTRN_write_macparams)).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(MODE190)  */
NDOBTRN_ar = (JDOBTRN.data.mode3);
 /* line 1462: */
{ 
A_CALLPROC(NL(Set_ind),(DGBATRN_arith_ind),(DGBATRN_arith_ind,(NL(Set_ind)).nonlocals));
 /* line 1463: */
A_CALLPROC(NL(Write_text),(UUMBTRN_arith_txt),(UUMBTRN_arith_txt,(NL(Write_text)).nonlocals));
 /* line 1464: */
 /* line 1465: */
 /* line 1466: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(NDOBTRN_ar->Output))), Env, Msg),((*(&(NDOBTRN_ar->Output))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
} 
break;
case 4: /* REF STRUCT(INT)  */
ODOBTRN_rf = (JDOBTRN.data.mode4);
 /* line 1467: */
{ 
A_CALLPROC(NL(Set_ind),(QLBATRN_reform_ind),(QLBATRN_reform_ind,(NL(Set_ind)).nonlocals));
 /* line 1468: */
 /* line 1469: */
 /* line 1470: */
A_CALLPROC(NL(Write_text),(XUMBTRN_reform_txt),(XUMBTRN_reform_txt,(NL(Write_text)).nonlocals));
} 
break;
case 5: /* REF STRUCT(REF MODE26,INT,MODE144)  */
PDOBTRN_im = (JDOBTRN.data.mode5);
 /* line 1471: */
{ 
A_CALLPROC(NL(Set_ind),(JKBATRN_import_ind),(JKBATRN_import_ind,(NL(Set_ind)).nonlocals));
 /* line 1472: */
 /* line 1473: */
 /* line 1474: */
A_CALLPROC(NL(Write_text),(AVMBTRN_import_txt),(AVMBTRN_import_txt,(NL(Write_text)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT,MODE228,MODE190,MODE228,MODE190)  */
QDOBTRN_ad = (JDOBTRN.data.mode6);
 /* line 1475: */
{ 
A_CALLPROC(NL(Set_ind),(BGBATRN_adelay_ind),(BGBATRN_adelay_ind,(NL(Set_ind)).nonlocals));
 /* line 1476: */
A_CALLPROC(NL(Write_text),(DVMBTRN_delay_txt),(DVMBTRN_delay_txt,(NL(Write_text)).nonlocals));
 /* line 1477: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1478: */
A_CALLPROC(Write_unit,((*(&(QDOBTRN_ad->Init))), Env, Msg),((*(&(QDOBTRN_ad->Init))), Env, Msg,(Write_unit).nonlocals));
 /* line 1479: */
 /* line 1480: */
RDOBTRN = NL(ZINBTRN_expand_delays);
if ( ! RDOBTRN )
{RDOBTRN = ((*(&(QDOBTRN_ad->Sort)))==EKAATRN_constint2);
}
 /* line 1481: */
if ( ! RDOBTRN )
{RDOBTRN = ((*(&(QDOBTRN_ad->Sort)))==GKAATRN_const2int2);
}
 /* line 1482: */
if ( RDOBTRN )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1483: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1484: */
 /* line 1485: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(QDOBTRN_ad->Ambigtime))), Env, Msg),((*(&(QDOBTRN_ad->Ambigtime))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
} 
 /* line 1486: */
 /* line 1487: */
SDOBTRN = NL(ZINBTRN_expand_delays);
if ( ! SDOBTRN )
{SDOBTRN = ((*(&(QDOBTRN_ad->Sort)))==FKAATRN_const2int);
}
 /* line 1488: */
if ( ! SDOBTRN )
{SDOBTRN = ((*(&(QDOBTRN_ad->Sort)))==GKAATRN_const2int2);
}
 /* line 1489: */
if ( SDOBTRN )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1490: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1491: */
 /* line 1492: */
A_CALLPROC(Write_unit,((*(&(QDOBTRN_ad->Ambig))), Env, Msg),((*(&(QDOBTRN_ad->Ambig))), Env, Msg,(Write_unit).nonlocals));
} 
 /* line 1493: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1494: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1495: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(QDOBTRN_ad->Delaytime))), Env, Msg),((*(&(QDOBTRN_ad->Delaytime))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1496: */
 /* line 1497: */
 /* line 1498: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE228,MODE190)  */
TDOBTRN_id = (JDOBTRN.data.mode7);
 /* line 1499: */
{ 
A_CALLPROC(NL(Set_ind),(HKBATRN_idelay_ind),(HKBATRN_idelay_ind,(NL(Set_ind)).nonlocals));
 /* line 1500: */
A_CALLPROC(NL(Write_text),(GVMBTRN_idelay_txt),(GVMBTRN_idelay_txt,(NL(Write_text)).nonlocals));
 /* line 1501: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1502: */
A_CALLPROC(Write_unit,((*(&(TDOBTRN_id->Init))), Env, Msg),((*(&(TDOBTRN_id->Init))), Env, Msg,(Write_unit).nonlocals));
 /* line 1503: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1504: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1505: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(TDOBTRN_id->Delaytime))), Env, Msg),((*(&(TDOBTRN_id->Delaytime))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1506: */
 /* line 1507: */
 /* line 1508: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE228)  */
UDOBTRN_rm = (JDOBTRN.data.mode8);
 /* line 1509: */
{ 
A_CALLPROC(NL(Set_ind),(PLBATRN_ram_ind),(PLBATRN_ram_ind,(NL(Set_ind)).nonlocals));
 /* line 1510: */
A_CALLPROC(NL(Write_text),(JVMBTRN_ram_txt),(JVMBTRN_ram_txt,(NL(Write_text)).nonlocals));
 /* line 1511: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1512: */
A_CALLPROC(Write_unit,((*(&(UDOBTRN_rm->Init))), Env, Msg),((*(&(UDOBTRN_rm->Init))), Env, Msg,(Write_unit).nonlocals));
 /* line 1513: */
 /* line 1514: */
 /* line 1515: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT,MODE190,MODE228,MODE190)  */
VDOBTRN_sp = (JDOBTRN.data.mode9);
 /* line 1516: */
{ 
A_CALLPROC(NL(Set_ind),(SLBATRN_sample_ind),(SLBATRN_sample_ind,(NL(Set_ind)).nonlocals));
 /* line 1517: */
A_CALLPROC(NL(Write_text),(MVMBTRN_sample_txt),(MVMBTRN_sample_txt,(NL(Write_text)).nonlocals));
 /* line 1518: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1519: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(VDOBTRN_sp->Interval))), Env, Msg),((*(&(VDOBTRN_sp->Interval))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1520: */
WDOBTRN = NL(ZINBTRN_expand_delays);
if ( ! WDOBTRN )
{WDOBTRN = ((*(&(VDOBTRN_sp->Sort)))==JKAATRN_int2);
}
 /* line 1521: */
if ( WDOBTRN )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1522: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1523: */
A_CALLPROC(Write_unit,((*(&(VDOBTRN_sp->Init))), Env, Msg),((*(&(VDOBTRN_sp->Init))), Env, Msg,(Write_unit).nonlocals));
 /* line 1524: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1525: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1526: */
 /* line 1527: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(VDOBTRN_sp->Skew))), Env, Msg),((*(&(VDOBTRN_sp->Skew))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
} 
 /* line 1528: */
 /* line 1529: */
 /* line 1530: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
} 
break;
case 10: /* REF STRUCT(BOOL,INT,MODE268,MODE190,MODE228,MODE190)  */
XDOBTRN_ts = (JDOBTRN.data.mode10);
 /* line 1531: */
{ 
 /* line 1532: */
if ( (*(&(XDOBTRN_ts->Faster))) )
{ 
A_CALLPROC(NL(Set_ind),(OJBATRN_faster_ind),(OJBATRN_faster_ind,(NL(Set_ind)).nonlocals));
 /* line 1533: */
 /* line 1534: */
 /* line 1535: */
A_CALLPROC(NL(Write_text),(PVMBTRN_faster_txt),(PVMBTRN_faster_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Set_ind),(NMBATRN_slower_ind),(NMBATRN_slower_ind,(NL(Set_ind)).nonlocals));
 /* line 1536: */
 /* line 1537: */
A_CALLPROC(NL(Write_text),(SVMBTRN_slower_txt),(SVMBTRN_slower_txt,(NL(Write_text)).nonlocals));
} 
 /* line 1538: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 1539: */
A_CALLPROC((*NL(CQNBTRN_write_instance)),((*(&(XDOBTRN_ts->Inst))), A68_TRUE, A68_FALSE, Env, Write_unit, Msg),((*(&(XDOBTRN_ts->Inst))), A68_TRUE, A68_FALSE, Env, Write_unit, Msg,((*NL(CQNBTRN_write_instance))).nonlocals));
 /* line 1540: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1541: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1542: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(XDOBTRN_ts->Scale))), Env, Msg),((*(&(XDOBTRN_ts->Scale))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1543: */
YDOBTRN = NL(ZINBTRN_expand_delays);
if ( ! YDOBTRN )
{YDOBTRN = ((*(&(XDOBTRN_ts->Sort)))==JKAATRN_int2);
}
 /* line 1544: */
if ( YDOBTRN )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1545: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1546: */
A_CALLPROC(Write_unit,((*(&(XDOBTRN_ts->Init))), Env, Msg),((*(&(XDOBTRN_ts->Init))), Env, Msg,(Write_unit).nonlocals));
 /* line 1547: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1548: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1549: */
 /* line 1550: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(XDOBTRN_ts->Skew))), Env, Msg),((*(&(XDOBTRN_ts->Skew))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
} 
 /* line 1551: */
 /* line 1552: */
 /* line 1553: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
} 
break;
case 11: /* REF STRUCT(REF MODE180,BOOL,MODE300)  */
ZDOBTRN_bc = (JDOBTRN.data.mode11);
 /* line 1554: */
 /* line 1555: */
A_CALLPROC(NL(GDOBTRN_write_fnbody),((*(&(ZDOBTRN_bc->Fnbody))), Write_unit, Env, Msg),((*(&(ZDOBTRN_bc->Fnbody))), Write_unit, Env, Msg,(NL(GDOBTRN_write_fnbody)).nonlocals));
break;
case 12: /* REF STRUCT(INT)  */
 /* line 1556: */
{ 
A_CALLPROC(NL(Set_ind),(GLBATRN_nobody_ind),(GLBATRN_nobody_ind,(NL(Set_ind)).nonlocals));
 /* line 1557: */
 /* line 1558: */
 /* line 1559: */
 /* line 1560: */
A_CALLPROC(NL(Write_text),(LUMBTRN_nobody_txt),(LUMBTRN_nobody_txt,(NL(Write_text)).nonlocals));
} 
break;
default: 
 /* line 1561: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(CEOBTRN,BEOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(CEOBTRN,BEOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
A_PROC_EXIT(write_fnbody);
return;
} 
#undef NL
 /* line 1565: */
 /* line 1566: */
 /* line 1567: */
 /* line 1568: */
 /* line 1569: */
 /* line 1570: */

A_STATIC A68_VOID  LEOBTRN_write_fndec(A68_304 * Fd, A68_INT  Fnno, A68_387 * Env, A68_431  Write_unit, A68_VC  Term, A68_INT * Keyword_ind, A68_97  Msg, void *NonLocals)
#define NL(x) (((MEOBTRN_write_fndec *)NonLocals)->x)
{ 
A68_INT  NEOBTRN;  /* clause result */
A68_INT  OEOBTRN_kind;
A68_VC  PEOBTRN;  /* clause result */
A68_VC  QEOBTRN_ktxt;
A_PROC_ENTRY(write_fndec);
 /* line 1571: */
 /* line 1572: */
{ 
if ( (*(&(Fd->Macro))) )
{ 
NEOBTRN = ZKBATRN_mdecls_ind;
} 
else
{ 
NEOBTRN = RJBATRN_fdecls_ind;
} 
OEOBTRN_kind = NEOBTRN;
 /* line 1573: */
if ( (*(&(Fd->Macro))) )
{ 
PEOBTRN = SYMBTRN_mac_txt;
} 
else
{ 
PEOBTRN = VYMBTRN_fn_txt;
} 
QEOBTRN_ktxt = PEOBTRN;
 /* line 1575: */
A_CALLPROC(NL(ZSNBTRN_write_keyword),(OEOBTRN_kind, QEOBTRN_ktxt, Term, Keyword_ind, Msg),(OEOBTRN_kind, QEOBTRN_ktxt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1576: */
A_CALLPROC(NL(DYNBTRN_write_fndecspec),(Fd, Fnno, A68_FALSE, Env, Write_unit, Msg),(Fd, Fnno, A68_FALSE, Env, Write_unit, Msg,(NL(DYNBTRN_write_fndecspec)).nonlocals));
 /* line 1577: */
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 1578: */
A_CALLPROC(NL(Set_ind),(DIBATRN_endfnspec_ind),(DIBATRN_endfnspec_ind,(NL(Set_ind)).nonlocals));
 /* line 1579: */
A_CALLPROC(NL(GDOBTRN_write_fnbody),((*(&(Fd->Fnbody))), Write_unit, Env, Msg),((*(&(Fd->Fnbody))), Write_unit, Env, Msg,(NL(GDOBTRN_write_fnbody)).nonlocals));
 /* line 1580: */
A_CALLPROC(NL(Set_ind),(THBATRN_endbody_ind),(THBATRN_endbody_ind,(NL(Set_ind)).nonlocals));
 /* line 1582: */
 /* line 1583: */
A_CALLPROC(NL(Set_ind),(AIBATRN_enddec_ind),(AIBATRN_enddec_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_fndec);
return;
} 
#undef NL
 /* line 1586: */
 /* line 1587: */
 /* line 1588: */
 /* line 1589: */
 /* line 1590: */

A_STATIC A68_VOID  YEOBTRN_write_declaration(A68_289  Dd, A68_VC  Term, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((ZEOBTRN_write_declaration *)NonLocals)->x)
{ 
A68_289  AFOBTRN;  /* united object - for case conformity */
A68_182  BFOBTRN_ana;
A68_308  CFOBTRN;  /* OPERATORS - simple index */
A68_INT  DFOBTRN;  /* YIELD */
A68_187 * EFOBTRN_ad;
A68_194  FFOBTRN_fna;
A68_309  GFOBTRN;  /* OPERATORS - simple index */
A68_INT  HFOBTRN;  /* YIELD */
A68_203 * IFOBTRN_id;
A68_207  JFOBTRN_tna;
A68_310  KFOBTRN;  /* OPERATORS - simple index */
A68_INT  LFOBTRN;  /* YIELD */
A68_221 * MFOBTRN_td;
A68_222  NFOBTRN_cna;
A68_311  OFOBTRN;  /* OPERATORS - simple index */
A68_INT  PFOBTRN;  /* YIELD */
A68_227 * QFOBTRN_cd;
A68_259  RFOBTRN_fnna;
A68_307 * SFOBTRN_de;
A68_312  TFOBTRN;  /* OPERATORS - simple index */
A68_INT  UFOBTRN;  /* YIELD */
A68_304 * VFOBTRN_fd;
A68_387  WFOBTRN_locenv;
A68_46  ZFOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_declaration);
 /* line 1591: */
 /* line 1592: */
{ 
 /* line 1593: */
AFOBTRN = Dd ;
switch ( AFOBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
BFOBTRN_ana = (AFOBTRN.data.mode1);
 /* line 1594: */
{ 
CFOBTRN = (*(&((*(&(Env->Dec_env)))->Attrs))) ;
DFOBTRN = BFOBTRN_ana.Attrno ;
EFOBTRN_ad = (*(&A_VINDEX(CFOBTRN,DFOBTRN)));
 /* line 1596: */
 /* line 1597: */
 /* line 1598: */
A_CALLPROC(NL(STNBTRN_write_attrdec),(EFOBTRN_ad, BFOBTRN_ana.Attrno, Env, Term, Keyword_ind, Msg),(EFOBTRN_ad, BFOBTRN_ana.Attrno, Env, Term, Keyword_ind, Msg,(NL(STNBTRN_write_attrdec)).nonlocals));
} 
break;
case 2: /* STRUCT(INT)  */
FFOBTRN_fna = (AFOBTRN.data.mode2);
 /* line 1599: */
{ 
GFOBTRN = (*(&((*(&(Env->Dec_env)))->Ints))) ;
HFOBTRN = FFOBTRN_fna.Intno ;
IFOBTRN_id = (*(&A_VINDEX(GFOBTRN,HFOBTRN)));
 /* line 1601: */
 /* line 1602: */
 /* line 1603: */
A_CALLPROC(NL(BUNBTRN_write_intdec),(IFOBTRN_id, FFOBTRN_fna.Intno, Env, Term, Keyword_ind, Msg),(IFOBTRN_id, FFOBTRN_fna.Intno, Env, Term, Keyword_ind, Msg,(NL(BUNBTRN_write_intdec)).nonlocals));
} 
break;
case 3: /* STRUCT(INT)  */
JFOBTRN_tna = (AFOBTRN.data.mode3);
 /* line 1604: */
{ 
KFOBTRN = (*(&((*(&(Env->Dec_env)))->Types))) ;
LFOBTRN = JFOBTRN_tna.Typeno ;
MFOBTRN_td = (*(&A_VINDEX(KFOBTRN,LFOBTRN)));
 /* line 1606: */
 /* line 1607: */
 /* line 1608: */
A_CALLPROC(NL(NWNBTRN_write_typedec),(MFOBTRN_td, JFOBTRN_tna.Typeno, Env, Term, Keyword_ind, Msg),(MFOBTRN_td, JFOBTRN_tna.Typeno, Env, Term, Keyword_ind, Msg,(NL(NWNBTRN_write_typedec)).nonlocals));
} 
break;
case 4: /* STRUCT(INT)  */
NFOBTRN_cna = (AFOBTRN.data.mode4);
 /* line 1609: */
{ 
OFOBTRN = (*(&((*(&(Env->Dec_env)))->Consts))) ;
PFOBTRN = NFOBTRN_cna.Constno ;
QFOBTRN_cd = (*(&A_VINDEX(OFOBTRN,PFOBTRN)));
 /* line 1611: */
 /* line 1612: */
 /* line 1613: */
 /* line 1614: */
A_CALLPROC(NL(XWNBTRN_write_constdec),(QFOBTRN_cd, NFOBTRN_cna.Constno, Env, Write_unit, Term, Keyword_ind, Msg),(QFOBTRN_cd, NFOBTRN_cna.Constno, Env, Write_unit, Term, Keyword_ind, Msg,(NL(XWNBTRN_write_constdec)).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
RFOBTRN_fnna = (AFOBTRN.data.mode5);
 /* line 1615: */
{ 
SFOBTRN_de = (*(&(Env->Dec_env)));
 /* line 1616: */
TFOBTRN = (*(&(SFOBTRN_de->Fns))) ;
UFOBTRN = RFOBTRN_fnna.Fnno ;
VFOBTRN_fd = (*(&A_VINDEX(TFOBTRN,UFOBTRN)));
 /* line 1617: */
 /* line 1619: */
ADNBTRN_set_fnenv((&WFOBTRN_locenv), VFOBTRN_fd, (*(&(Env->Mplist))), SFOBTRN_de);
 /* line 1620: */
 /* line 1621: */
 /* line 1622: */
 /* line 1623: */
 /* line 1624: */
A_CALLPROC(NL(KEOBTRN_write_fndec),(VFOBTRN_fd, RFOBTRN_fnna.Fnno, (&WFOBTRN_locenv), Write_unit, Term, Keyword_ind, Msg),(VFOBTRN_fd, RFOBTRN_fnna.Fnno, (&WFOBTRN_locenv), Write_unit, Term, Keyword_ind, Msg,(NL(KEOBTRN_write_fndec)).nonlocals));
} 
break;
default: 
 /* line 1625: */
 /* line 1626: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(ZFOBTRN,YFOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(ZFOBTRN,YFOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
A_PROC_EXIT(write_declaration);
return;
} 
#undef NL
 /* line 1629: */
 /* line 1630: */
 /* line 1631: */

A_STATIC A68_VOID  FGOBTRN_write_printitem(A68_190  Cond, A68_274 * Pii, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((GGOBTRN_write_printitem *)NonLocals)->x)
{ 
A68_274 * HGOBTRN_pi;
A68_190  IGOBTRN;  /* united object - for case conformity */
A68_200 * JGOBTRN_fn;
A68_BOOL  KGOBTRN;  /* clause result */
A68_BOOL  LGOBTRN_isif;
A68_275  MGOBTRN;  /* united object - for case conformity */
A68_VC  NGOBTRN_text;
A68_201 * OGOBTRN_ft;
A68_46  RGOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_printitem);
 /* line 1632: */
 /* line 1633: */
{ 
HGOBTRN_pi = Pii;
 /* line 1634: */
IGOBTRN = Cond ;
switch ( IGOBTRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
JGOBTRN_fn = (IGOBTRN.data.mode10);
KGOBTRN = A68_FALSE;
break;
default: 
KGOBTRN = A68_TRUE;
break;
} 
LGOBTRN_isif = KGOBTRN;
 /* line 1636: */
 /* line 1637: */
if ( LGOBTRN_isif )
{ 
A_CALLPROC(NL(Set_ind),(NLBATRN_printif_ind),(NLBATRN_printif_ind,(NL(Set_ind)).nonlocals));
 /* line 1638: */
A_CALLPROC(NL(Write_text),(HTMBTRN_if_txt),(HTMBTRN_if_txt,(NL(Write_text)).nonlocals));
 /* line 1639: */
A_CALLPROC(NL(Set_ind),(DHBATRN_condition_ind),(DHBATRN_condition_ind,(NL(Set_ind)).nonlocals));
 /* line 1640: */
A_CALLPROC(NL(ULNBTRN_write_formula),(Cond, Env, Msg),(Cond, Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 1641: */
A_CALLPROC(NL(Set_ind),(WMBATRN_then_ind),(WMBATRN_then_ind,(NL(Set_ind)).nonlocals));
 /* line 1642: */
A_CALLPROC(NL(Write_text),(KTMBTRN_then_txt),(KTMBTRN_then_txt,(NL(Write_text)).nonlocals));
 /* line 1643: */
 /* line 1644: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 1645: */
for ( ;; )
{ 
 /* line 1646: */
 /* line 1647: */
if ( !((HGOBTRN_pi!=MAAATRN_nilprintitems)) ) break;
 /* line 1648: */
MGOBTRN = (*(&(HGOBTRN_pi->Item))) ;
switch ( MGOBTRN.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
NGOBTRN_text = (MGOBTRN.data.mode1);
 /* line 1649: */
{ 
A_CALLPROC(NL(Set_ind),(OLBATRN_printstring_ind),(OLBATRN_printstring_ind,(NL(Set_ind)).nonlocals));
 /* line 1650: */
 /* line 1651: */
 /* line 1652: */
A_CALLPROC(NL(DJNBTRN_write_string),(NGOBTRN_text, (*Env), Msg),(NGOBTRN_text, (*Env), Msg,(NL(DJNBTRN_write_string)).nonlocals));
} 
break;
case 2: /* REF STRUCT(MODE190)  */
OGOBTRN_ft = (MGOBTRN.data.mode2);
 /* line 1653: */
 /* line 1654: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(OGOBTRN_ft->Tag))), Env, Msg),((*(&(OGOBTRN_ft->Tag))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
break;
default: 
 /* line 1655: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(RGOBTRN,QGOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(RGOBTRN,QGOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
 /* line 1656: */
HGOBTRN_pi = (*(&(HGOBTRN_pi->Rest)));
 /* line 1657: */
if ( (HGOBTRN_pi!=MAAATRN_nilprintitems) )
{ 
 /* line 1658: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1659: */
 /* line 1660: */
if ( LGOBTRN_isif )
{ 
A_CALLPROC(NL(Set_ind),(TJBATRN_fi_ind),(TJBATRN_fi_ind,(NL(Set_ind)).nonlocals));
 /* line 1661: */
A_CALLPROC(NL(Write_text),(QTMBTRN_fi_txt),(QTMBTRN_fi_txt,(NL(Write_text)).nonlocals));
 /* line 1662: */
 /* line 1663: */
 /* line 1664: */
A_CALLPROC(NL(Set_ind),(FIBATRN_endif_ind),(FIBATRN_endif_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_printitem);
return;
} 
#undef NL
 /* line 1667: */
 /* line 1668: */
 /* line 1669: */
 /* line 1670: */

A_STATIC A68_VOID  YGOBTRN_write_print(A68_260 * Pr, A68_VC  Term, A68_INT * Keyword_ind, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((ZGOBTRN_write_print *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_print);
 /* line 1671: */
 /* line 1672: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(MLBATRN_print_ind, YVMBTRN_print_txt, Term, Keyword_ind, Msg),(MLBATRN_print_ind, YVMBTRN_print_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1673: */
 /* line 1674: */
A_CALLPROC(NL(EGOBTRN_write_printitem),((*(&(Pr->Cond))), (*(&(Pr->Print))), Env, Msg),((*(&(Pr->Cond))), (*(&(Pr->Print))), Env, Msg,(NL(EGOBTRN_write_printitem)).nonlocals));
} 
A_PROC_EXIT(write_print);
return;
} 
#undef NL
 /* line 1677: */
 /* line 1678: */
 /* line 1679: */
 /* line 1680: */

A_STATIC A68_VOID  GHOBTRN_write_fault(A68_261 * Ft, A68_VC  Term, A68_INT * Keyword_ind, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((HHOBTRN_write_fault *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_fault);
 /* line 1681: */
 /* line 1682: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(PJBATRN_fault_ind, BWMBTRN_fault_txt, Term, Keyword_ind, Msg),(PJBATRN_fault_ind, BWMBTRN_fault_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1683: */
 /* line 1684: */
A_CALLPROC(NL(EGOBTRN_write_printitem),((*(&(Ft->Cond))), (*(&(Ft->Fault))), Env, Msg),((*(&(Ft->Cond))), (*(&(Ft->Fault))), Env, Msg,(NL(EGOBTRN_write_printitem)).nonlocals));
} 
A_PROC_EXIT(write_fault);
return;
} 
#undef NL
 /* line 1687: */
 /* line 1688: */
 /* line 1689: */
 /* line 1690: */

A_STATIC A68_VOID  OHOBTRN_write_letnames(A68_269 * Letnames, A68_387 * Env, A68_INT  Ind, A68_INT  Strind, A68_97  Msg, void *NonLocals)
#define NL(x) (((PHOBTRN_write_letnames *)NonLocals)->x)
{ 
A68_269 * QHOBTRN_names;
A68_BOOL  RHOBTRN_noname;
A68_BOOL  SHOBTRN;  /* optbool result */
A68_BOOL  THOBTRN_str;
A68_306  UHOBTRN;  /* OPERATORS - simple index */
A68_INT  VHOBTRN;  /* YIELD */
A68_303  WHOBTRN_nametype;
A_PROC_ENTRY(write_letnames);
 /* line 1691: */
 /* line 1692: */
{ 
QHOBTRN_names = Letnames;
 /* line 1693: */
RHOBTRN_noname = (QHOBTRN_names==NAAATRN_nilnames);
 /* line 1694: */
SHOBTRN = !RHOBTRN_noname;
if ( SHOBTRN )
{SHOBTRN = ((*(&(QHOBTRN_names->Rest)))!=NAAATRN_nilnames);
}
THOBTRN_str = SHOBTRN;
 /* line 1696: */
 /* line 1697: */
if ( THOBTRN_str )
{ 
A_CALLPROC(NL(Set_ind),(Strind),(Strind,(NL(Set_ind)).nonlocals));
 /* line 1698: */
 /* line 1699: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
 /* line 1700: */
if ( RHOBTRN_noname )
{ 
A_CALLPROC(NL(Set_ind),(Ind),(Ind,(NL(Set_ind)).nonlocals));
 /* line 1701: */
 /* line 1702: */
 /* line 1703: */
A_CALLPROC(NL(Write_text),(AQMBTRN_vis_space_txt),(AQMBTRN_vis_space_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
 /* line 1704: */
A_CALLPROC(NL(Set_ind),(Ind),(Ind,(NL(Set_ind)).nonlocals));
} 
} 
 /* line 1705: */
for ( ;; )
{ 
 /* line 1706: */
 /* line 1707: */
if ( !((QHOBTRN_names!=NAAATRN_nilnames)) ) break;
UHOBTRN = (*(&((*(&(Env->Fd)))->Nametypes))) ;
VHOBTRN = (*(&(QHOBTRN_names->Nameno))) ;
WHOBTRN_nametype = (*(&A_VINDEX(UHOBTRN,VHOBTRN)));
 /* line 1708: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),(WHOBTRN_nametype.Name, WHOBTRN_nametype.Attr, Env, Msg),(WHOBTRN_nametype.Name, WHOBTRN_nametype.Attr, Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 1709: */
QHOBTRN_names = (*(&(QHOBTRN_names->Rest)));
 /* line 1710: */
 /* line 1711: */
if ( (QHOBTRN_names!=NAAATRN_nilnames) )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1712: */
 /* line 1713: */
 /* line 1714: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1715: */
 /* line 1716: */
if ( THOBTRN_str )
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 1717: */
 /* line 1718: */
 /* line 1719: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_letnames);
return;
} 
#undef NL
 /* line 1722: */
 /* line 1723: */
 /* line 1724: */
 /* line 1725: */
 /* line 1726: */
 /* line 1727: */

A_STATIC A68_VOID  HIOBTRN_write_let(A68_262 * Le, A68_VC  Term, A68_INT * Keyword_ind, A68_INT  Ind1, A68_INT  Ind2, A68_INT  Ind3, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((IIOBTRN_write_let *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_let);
 /* line 1728: */
 /* line 1729: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(Ind1, EWMBTRN_let_txt, Term, Keyword_ind, Msg),(Ind1, EWMBTRN_let_txt, Term, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1730: */
A_CALLPROC(NL(NHOBTRN_write_letnames),((*(&(Le->Letnames))), Env, Ind2, Ind3, Msg),((*(&(Le->Letnames))), Env, Ind2, Ind3, Msg,(NL(NHOBTRN_write_letnames)).nonlocals));
 /* line 1731: */
A_CALLPROC(NL(Write_text),(PQMBTRN_equals_txt),(PQMBTRN_equals_txt,(NL(Write_text)).nonlocals));
 /* line 1732: */
 /* line 1733: */
A_CALLPROC(Write_unit,((*(&(Le->Unit))), Env, Msg),((*(&(Le->Unit))), Env, Msg,(Write_unit).nonlocals));
} 
A_PROC_EXIT(write_let);
return;
} 
#undef NL
 /* line 1736: */
 /* line 1737: */
 /* line 1738: */
 /* line 1739: */

A_STATIC A68_VOID  PIOBTRN_write_make(A68_263 * Mk, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((QIOBTRN_write_make *)NonLocals)->x)
{ 
A68_269 * RIOBTRN_n;
A68_BOOL  SIOBTRN_put_inst;
A68_303  TIOBTRN_nametype;
A68_306  UIOBTRN;  /* OPERATORS - simple index */
A68_INT  VIOBTRN;  /* YIELD */
A68_BOOL  WIOBTRN;  /* optbool result */
A_PROC_ENTRY(write_make);
 /* line 1740: */
 /* line 1741: */
{ 
RIOBTRN_n = (*(&(Mk->Makenames)));
 /* line 1742: */
SIOBTRN_put_inst = A68_TRUE;
 /* line 1743: */
 /* line 1745: */
for ( ;; )
{ 
 /* line 1746: */
 /* line 1747: */
if ( !((RIOBTRN_n!=NAAATRN_nilnames)) ) break;
 /* line 1748: */
if ( SIOBTRN_put_inst )
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(WKBATRN_make_ind, HWMBTRN_make_txt, XQMBTRN_dot_txt, Keyword_ind, Msg),(WKBATRN_make_ind, HWMBTRN_make_txt, XQMBTRN_dot_txt, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1749: */
A_CALLPROC(NL(KONBTRN_write_indexes),((*(&(Mk->Sizes))), Env, Msg),((*(&(Mk->Sizes))), Env, Msg,(NL(KONBTRN_write_indexes)).nonlocals));
 /* line 1750: */
A_CALLPROC(NL(Set_ind),(XKBATRN_makeinst_ind),(XKBATRN_makeinst_ind,(NL(Set_ind)).nonlocals));
 /* line 1751: */
A_CALLPROC((*NL(CQNBTRN_write_instance)),((*(&(Mk->Inst))), A68_TRUE, A68_FALSE, Env, Write_unit, Msg),((*(&(Mk->Inst))), A68_TRUE, A68_FALSE, Env, Write_unit, Msg,((*NL(CQNBTRN_write_instance))).nonlocals));
 /* line 1752: */
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 1753: */
A_CALLPROC(NL(Set_ind),(CLBATRN_namelist_ind),(CLBATRN_namelist_ind,(NL(Set_ind)).nonlocals));
 /* line 1754: */
 /* line 1755: */
SIOBTRN_put_inst = NL(VINBTRN_no_comma_lists);
} 
 /* line 1756: */
UIOBTRN = (*(&((*(&(Env->Fd)))->Nametypes))) ;
VIOBTRN = (*(&(RIOBTRN_n->Nameno))) ;
TIOBTRN_nametype = (*(&A_VINDEX(UIOBTRN,VIOBTRN)));
 /* line 1757: */
A_CALLPROC(NL(OLNBTRN_write_nameitem),((*(&((&TIOBTRN_nametype)->Name))), (*(&((&TIOBTRN_nametype)->Attr))), Env, Msg),((*(&((&TIOBTRN_nametype)->Name))), (*(&((&TIOBTRN_nametype)->Attr))), Env, Msg,(NL(OLNBTRN_write_nameitem)).nonlocals));
 /* line 1758: */
RIOBTRN_n = (*(&(RIOBTRN_n->Rest)));
 /* line 1759: */
WIOBTRN = !NL(VINBTRN_no_comma_lists);
if ( WIOBTRN )
{WIOBTRN = (RIOBTRN_n!=NAAATRN_nilnames);
}
 /* line 1760: */
if ( WIOBTRN )
{ 
 /* line 1761: */
 /* line 1762: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1763: */
 /* line 1764: */
A_CALLPROC(NL(Set_ind),(NIBATRN_endnamelist_ind),(NIBATRN_endnamelist_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(write_make);
return;
} 
#undef NL
 /* line 1767: */
 /* line 1768: */
 /* line 1769: */

A_STATIC A68_VOID  CJOBTRN_do_write_join(A68_264 * J, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((DJOBTRN_do_write_join *)NonLocals)->x)
{ 
A_PROC_ENTRY(do_write_join);
 /* line 1770: */
 /* line 1771: */
{ 
A_CALLPROC(NL(Set_ind),(PMBATRN_startjoin_ind),(PMBATRN_startjoin_ind,(NL(Set_ind)).nonlocals));
 /* line 1772: */
A_CALLPROC(Write_unit,((*(&(J->From))), Env, Msg),((*(&(J->From))), Env, Msg,(Write_unit).nonlocals));
 /* line 1773: */
A_CALLPROC(NL(Set_ind),(ZMBATRN_to_ind),(ZMBATRN_to_ind,(NL(Set_ind)).nonlocals));
 /* line 1774: */
A_CALLPROC(NL(Write_text),(ZTMBTRN_to_txt),(ZTMBTRN_to_txt,(NL(Write_text)).nonlocals));
 /* line 1775: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 1776: */
A_CALLPROC(Write_unit,((*(&(J->To))), Env, Msg),((*(&(J->To))), Env, Msg,(Write_unit).nonlocals));
 /* line 1777: */
 /* line 1778: */
A_CALLPROC(NL(Set_ind),(VJBATRN_finishjoin_ind),(VJBATRN_finishjoin_ind,(NL(Set_ind)).nonlocals));
} 
A_PROC_EXIT(do_write_join);
return;
} 
#undef NL
 /* line 1781: */
 /* line 1782: */
 /* line 1783: */
 /* line 1784: */

A_STATIC A68_VOID  KJOBTRN_write_join(A68_264 * J, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((LJOBTRN_write_join *)NonLocals)->x)
{ 
A_PROC_ENTRY(write_join);
 /* line 1785: */
 /* line 1786: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(PKBATRN_join_ind, KWMBTRN_join_txt, XQMBTRN_dot_txt, Keyword_ind, Msg),(PKBATRN_join_ind, KWMBTRN_join_txt, XQMBTRN_dot_txt, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1787: */
 /* line 1788: */
A_CALLPROC(NL(BJOBTRN_do_write_join),(J, Env, Write_unit, Msg),(J, Env, Write_unit, Msg,(NL(BJOBTRN_do_write_join)).nonlocals));
} 
A_PROC_EXIT(write_join);
return;
} 
#undef NL
 /* line 1791: */
 /* line 1792: */
 /* line 1793: */
 /* line 1794: */

A_STATIC A68_VOID  SJOBTRN_write_repljoin(A68_265 * Re, A68_INT * Keyword_ind, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((TJOBTRN_write_repljoin *)NonLocals)->x)
{ 
A68_202 * UJOBTRN_repls;
A68_267 * VJOBTRN_j;
A_PROC_ENTRY(write_repljoin);
 /* line 1795: */
 /* line 1796: */
{ 
UJOBTRN_repls = (*(&(Re->Repls)));
 /* line 1797: */
VJOBTRN_j = (*(&(Re->Joins)));
 /* line 1799: */
A_CALLPROC(NL(ZSNBTRN_write_keyword),(EKBATRN_forjoin_ind, NWMBTRN_for_txt, XQMBTRN_dot_txt, Keyword_ind, Msg),(EKBATRN_forjoin_ind, NWMBTRN_for_txt, XQMBTRN_dot_txt, Keyword_ind, Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1800: */
for ( ;; )
{ 
 /* line 1801: */
 /* line 1802: */
if ( !((UJOBTRN_repls!=BBAATRN_nilformulas)) ) break;
A_CALLPROC(NL(YRNBTRN_write_replicator),((*(&(UJOBTRN_repls->Formula))), Env, Msg),((*(&(UJOBTRN_repls->Formula))), Env, Msg,(NL(YRNBTRN_write_replicator)).nonlocals));
 /* line 1803: */
UJOBTRN_repls = (*(&(UJOBTRN_repls->Rest)));
 /* line 1804: */
if ( (UJOBTRN_repls!=BBAATRN_nilformulas) )
{ 
 /* line 1805: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1806: */
A_CALLPROC(NL(Set_ind),((*Keyword_ind) = MIBATRN_endmult_ind),((*Keyword_ind) = MIBATRN_endmult_ind,(NL(Set_ind)).nonlocals));
 /* line 1807: */
A_CALLPROC(NL(Write_text),(KWMBTRN_join_txt),(KWMBTRN_join_txt,(NL(Write_text)).nonlocals));
 /* line 1809: */
for ( ;; )
{ 
 /* line 1810: */
 /* line 1811: */
if ( !((VJOBTRN_j!=RAAATRN_niljoins)) ) break;
A_CALLPROC(NL(BJOBTRN_do_write_join),((&(VJOBTRN_j->Join)), Env, Write_unit, Msg),((&(VJOBTRN_j->Join)), Env, Write_unit, Msg,(NL(BJOBTRN_do_write_join)).nonlocals));
 /* line 1812: */
VJOBTRN_j = (*(&(VJOBTRN_j->Rest)));
 /* line 1813: */
 /* line 1814: */
if ( (VJOBTRN_j!=RAAATRN_niljoins) )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 1815: */
 /* line 1816: */
 /* line 1817: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 1818: */
} 
A_PROC_EXIT(write_repljoin);
return;
} 
#undef NL
 /* line 1821: */
 /* line 1822: */
 /* line 1823: */

A_STATIC A68_VOID  BKOBTRN_write_series(A68_257 * Ss, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((CKOBTRN_write_series *)NonLocals)->x)
{ 
A68_257 * DKOBTRN_sel;
A68_INT  EKOBTRN_keyword_ind;
A68_258  FKOBTRN;  /* united object - for case conformity */
A68_289  GKOBTRN_dd;
A68_260 * HKOBTRN_pr;
A68_261 * IKOBTRN_fl;
A68_262 * JKOBTRN_le;
A68_263 * KKOBTRN_mk;
A68_264 * LKOBTRN_jo;
A68_265 * MKOBTRN_re;
A68_46  PKOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_series);
 /* line 1824: */
 /* line 1825: */
{ 
DKOBTRN_sel = Ss;
 /* line 1826: */
EKOBTRN_keyword_ind = 0;
 /* line 1828: */
for ( ;; )
{ 
 /* line 1829: */
 /* line 1830: */
if ( !((DKOBTRN_sel!=SAAATRN_nilseries)) ) break;
 /* line 1831: */
FKOBTRN = (*(&(DKOBTRN_sel->Step))) ;
switch ( FKOBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(GKOBTRN_dd,FKOBTRN);
 /* line 1832: */
 /* line 1833: */
A_CALLPROC(NL(XEOBTRN_write_declaration),(GKOBTRN_dd, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg),(GKOBTRN_dd, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg,(NL(XEOBTRN_write_declaration)).nonlocals));
break;
case 6: /* REF STRUCT(MODE190,REF MODE274)  */
HKOBTRN_pr = (FKOBTRN.data.mode6);
 /* line 1834: */
A_CALLPROC(NL(XGOBTRN_write_print),(HKOBTRN_pr, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), Env, Msg),(HKOBTRN_pr, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), Env, Msg,(NL(XGOBTRN_write_print)).nonlocals));
break;
case 7: /* REF STRUCT(MODE190,REF MODE274)  */
IKOBTRN_fl = (FKOBTRN.data.mode7);
 /* line 1835: */
A_CALLPROC(NL(FHOBTRN_write_fault),(IKOBTRN_fl, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), Env, Msg),(IKOBTRN_fl, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), Env, Msg,(NL(FHOBTRN_write_fault)).nonlocals));
break;
case 8: /* REF STRUCT(REF MODE269,MODE228)  */
JKOBTRN_le = (FKOBTRN.data.mode8);
 /* line 1836: */
 /* line 1837: */
 /* line 1838: */
A_CALLPROC(NL(GIOBTRN_write_let),(JKOBTRN_le, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), QKBATRN_let_ind, RKBATRN_letname_ind, SKBATRN_letstr_ind, Env, Write_unit, Msg),(JKOBTRN_le, XQMBTRN_dot_txt, (&EKOBTRN_keyword_ind), QKBATRN_let_ind, RKBATRN_letname_ind, SKBATRN_letstr_ind, Env, Write_unit, Msg,(NL(GIOBTRN_write_let)).nonlocals));
break;
case 9: /* REF STRUCT(REF MODE202,MODE268,REF MODE269)  */
KKOBTRN_mk = (FKOBTRN.data.mode9);
 /* line 1839: */
A_CALLPROC(NL(OIOBTRN_write_make),(KKOBTRN_mk, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg),(KKOBTRN_mk, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg,(NL(OIOBTRN_write_make)).nonlocals));
break;
case 10: /* REF STRUCT(MODE228,MODE228)  */
LKOBTRN_jo = (FKOBTRN.data.mode10);
 /* line 1840: */
A_CALLPROC(NL(JJOBTRN_write_join),(LKOBTRN_jo, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg),(LKOBTRN_jo, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg,(NL(JJOBTRN_write_join)).nonlocals));
break;
case 11: /* REF STRUCT(REF MODE202,REF MODE267)  */
MKOBTRN_re = (FKOBTRN.data.mode11);
 /* line 1841: */
 /* line 1842: */
 /* line 1843: */
A_CALLPROC(NL(RJOBTRN_write_repljoin),(MKOBTRN_re, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg),(MKOBTRN_re, (&EKOBTRN_keyword_ind), Env, Write_unit, Msg,(NL(RJOBTRN_write_repljoin)).nonlocals));
break;
default: 
 /* line 1844: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(PKOBTRN,OKOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(PKOBTRN,OKOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
 /* line 1845: */
 /* line 1846: */
DKOBTRN_sel = (*(&(DKOBTRN_sel->Rest)));
}
 /* line 1847: */
 /* line 1848: */
if ( (EKOBTRN_keyword_ind!=0) )
{ 
A_CALLPROC(NL(Write_text),(XQMBTRN_dot_txt),(XQMBTRN_dot_txt,(NL(Write_text)).nonlocals));
 /* line 1849: */
 /* line 1850: */
 /* line 1851: */
A_CALLPROC(NL(Set_ind),(YIBATRN_endstep_ind),(YIBATRN_endstep_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_series);
return;
} 
#undef NL
 /* line 1854: */
 /* line 1855: */
 /* line 1856: */

A_STATIC A68_VOID  VKOBTRN_write_sequence(A68_276 * Sqq, A68_387 * Env, A68_431  Write_unit, A68_97  Msg, void *NonLocals)
#define NL(x) (((WKOBTRN_write_sequence *)NonLocals)->x)
{ 
A68_470  ZKOBTRN_write_statement;   /* proc value of non-global proc */
A68_276 * VLOBTRN_sel;
A68_INT  WLOBTRN_keyword_ind;
A68_277  XLOBTRN;  /* united object - for case conformity */
A68_289  YLOBTRN_dd;
A68_260 * ZLOBTRN_pr;
A68_261 * AMOBTRN_fl;
A68_278 * BMOBTRN_le;
A68_279 * CMOBTRN_va;
A68_280 * DMOBTRN_pv;
A_PROC_ENTRY(write_sequence);
 /* line 1857: */
 /* line 1858: */
{ 
A_CLOSURE( ZKOBTRN_write_statement, ALOBTRN_write_statement, BLOBTRN_write_statement );
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> Set_ind = NL(Set_ind);
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> Write_unit = Write_unit;
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> Env = Env;
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> Msg = Msg;
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> Write_text = NL(Write_text);
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> ZINBTRN_expand_delays = NL(ZINBTRN_expand_delays);
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> ZKOBTRN_write_statement = ZKOBTRN_write_statement;
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> ULNBTRN_write_formula = NL(ULNBTRN_write_formula);
(( BLOBTRN_write_statement * ) ( ZKOBTRN_write_statement.nonlocals )) -> YRNBTRN_write_replicator = NL(YRNBTRN_write_replicator);
 /* line 1974: */
VLOBTRN_sel = Sqq;
 /* line 1975: */
WLOBTRN_keyword_ind = 0;
 /* line 1977: */
for ( ;; )
{ 
 /* line 1978: */
 /* line 1979: */
if ( !((VLOBTRN_sel!=QAAATRN_nilsequence)) ) break;
 /* line 1980: */
XLOBTRN = (*(&(VLOBTRN_sel->Step))) ;
switch ( XLOBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(YLOBTRN_dd,XLOBTRN);
 /* line 1981: */
 /* line 1982: */
A_CALLPROC(NL(XEOBTRN_write_declaration),(YLOBTRN_dd, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Env, Write_unit, Msg),(YLOBTRN_dd, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Env, Write_unit, Msg,(NL(XEOBTRN_write_declaration)).nonlocals));
break;
case 6: /* REF STRUCT(MODE190,REF MODE274)  */
ZLOBTRN_pr = (XLOBTRN.data.mode6);
 /* line 1983: */
A_CALLPROC(NL(XGOBTRN_write_print),(ZLOBTRN_pr, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Env, Msg),(ZLOBTRN_pr, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Env, Msg,(NL(XGOBTRN_write_print)).nonlocals));
break;
case 7: /* REF STRUCT(MODE190,REF MODE274)  */
AMOBTRN_fl = (XLOBTRN.data.mode7);
 /* line 1984: */
A_CALLPROC(NL(FHOBTRN_write_fault),(AMOBTRN_fl, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Env, Msg),(AMOBTRN_fl, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Env, Msg,(NL(FHOBTRN_write_fault)).nonlocals));
break;
case 8: /* REF STRUCT(MODE262)  */
BMOBTRN_le = (XLOBTRN.data.mode8);
 /* line 1985: */
 /* line 1986: */
 /* line 1987: */
A_CALLPROC(NL(GIOBTRN_write_let),((&(BMOBTRN_le->Seqlet)), ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), AMBATRN_seqlet_ind, BMBATRN_seqletname_ind, CMBATRN_seqletstr_ind, Env, Write_unit, Msg),((&(BMOBTRN_le->Seqlet)), ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), AMBATRN_seqlet_ind, BMBATRN_seqletname_ind, CMBATRN_seqletstr_ind, Env, Write_unit, Msg,(NL(GIOBTRN_write_let)).nonlocals));
break;
case 9: /* REF STRUCT(MODE262)  */
CMOBTRN_va = (XLOBTRN.data.mode9);
 /* line 1988: */
 /* line 1989: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(JMBATRN_seqvar_ind, FXMBTRN_var_txt, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Msg),(JMBATRN_seqvar_ind, FXMBTRN_var_txt, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1990: */
 /* line 1991: */
A_CALLPROC(NL(NHOBTRN_write_letnames),((*(&((&(CMOBTRN_va->Seqvar))->Letnames))), Env, KMBATRN_seqvarname_ind, LMBATRN_seqvarstr_ind, Msg),((*(&((&(CMOBTRN_va->Seqvar))->Letnames))), Env, KMBATRN_seqvarname_ind, LMBATRN_seqvarstr_ind, Msg,(NL(NHOBTRN_write_letnames)).nonlocals));
 /* line 1992: */
A_CALLPROC(NL(Set_ind),(MGBATRN_becomes_ind),(MGBATRN_becomes_ind,(NL(Set_ind)).nonlocals));
 /* line 1993: */
A_CALLPROC(NL(Write_text),(QWMBTRN_becomes_txt),(QWMBTRN_becomes_txt,(NL(Write_text)).nonlocals));
 /* line 1994: */
 /* line 1995: */
 /* line 1996: */
A_CALLPROC(Write_unit,((*(&((&(CMOBTRN_va->Seqvar))->Unit))), Env, Msg),((*(&((&(CMOBTRN_va->Seqvar))->Unit))), Env, Msg,(Write_unit).nonlocals));
} 
break;
case 10: /* REF STRUCT(REF MODE269,MODE228)  */
DMOBTRN_pv = (XLOBTRN.data.mode10);
 /* line 1997: */
 /* line 1998: */
{ 
A_CALLPROC(NL(ZSNBTRN_write_keyword),(DMBATRN_seqpvar_ind, IXMBTRN_pvar_txt, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Msg),(DMBATRN_seqpvar_ind, IXMBTRN_pvar_txt, ZQMBTRN_semi_txt, (&WLOBTRN_keyword_ind), Msg,(NL(ZSNBTRN_write_keyword)).nonlocals));
 /* line 1999: */
 /* line 2000: */
A_CALLPROC(NL(NHOBTRN_write_letnames),((*(&(DMOBTRN_pv->Pvarnames))), Env, EMBATRN_seqpvarname_ind, FMBATRN_seqpvarstr_ind, Msg),((*(&(DMOBTRN_pv->Pvarnames))), Env, EMBATRN_seqpvarname_ind, FMBATRN_seqpvarstr_ind, Msg,(NL(NHOBTRN_write_letnames)).nonlocals));
 /* line 2001: */
A_CALLPROC(NL(Set_ind),(MGBATRN_becomes_ind),(MGBATRN_becomes_ind,(NL(Set_ind)).nonlocals));
 /* line 2002: */
A_CALLPROC(NL(Write_text),(LXMBTRN_init_txt),(LXMBTRN_init_txt,(NL(Write_text)).nonlocals));
 /* line 2003: */
 /* line 2004: */
 /* line 2005: */
 /* line 2006: */
A_CALLPROC(Write_unit,((*(&(DMOBTRN_pv->Init))), Env, Msg),((*(&(DMOBTRN_pv->Init))), Env, Msg,(Write_unit).nonlocals));
} 
break;
default: 
 /* line 2007: */
if ( (WLOBTRN_keyword_ind!=0) )
{ 
A_CALLPROC(NL(Write_text),(ZQMBTRN_semi_txt),(ZQMBTRN_semi_txt,(NL(Write_text)).nonlocals));
 /* line 2008: */
 /* line 2009: */
A_CALLPROC(NL(Set_ind),(YIBATRN_endstep_ind),(YIBATRN_endstep_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 2010: */
A_CALLPROC(NL(Set_ind),(WLOBTRN_keyword_ind = IMBATRN_seqstat_ind),(WLOBTRN_keyword_ind = IMBATRN_seqstat_ind,(NL(Set_ind)).nonlocals));
 /* line 2011: */
 /* line 2012: */
A_CALLPROC(ZKOBTRN_write_statement,((*(&(VLOBTRN_sel->Step)))),((*(&(VLOBTRN_sel->Step))),(ZKOBTRN_write_statement).nonlocals));
break;
} 
 /* line 2013: */
 /* line 2014: */
VLOBTRN_sel = (*(&(VLOBTRN_sel->Rest)));
}
 /* line 2015: */
 /* line 2016: */
if ( (WLOBTRN_keyword_ind!=0) )
{ 
A_CALLPROC(NL(Write_text),(ZQMBTRN_semi_txt),(ZQMBTRN_semi_txt,(NL(Write_text)).nonlocals));
 /* line 2017: */
 /* line 2018: */
 /* line 2019: */
A_CALLPROC(NL(Set_ind),(YIBATRN_endstep_ind),(YIBATRN_endstep_ind,(NL(Set_ind)).nonlocals));
} 
} 
A_PROC_EXIT(write_sequence);
return;
} 
#undef NL

A_STATIC A68_VOID  IMOBTRN_write_unit(A68_228  U, A68_387 * Env, A68_97  Msg, void *NonLocals)
#define NL(x) (((JMOBTRN_write_unit *)NonLocals)->x)
{ 
A68_471  NMOBTRN_write_output;   /* proc value of non-global proc */
A68_228  RMOBTRN;  /* united object - for case conformity */
A68_222 * SMOBTRN_cnm;
A68_311  TMOBTRN;  /* OPERATORS - simple index */
A68_INT  UMOBTRN;  /* YIELD */
A68_227 * VMOBTRN_cdec;
A68_289  WMOBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XMOBTRN;  /* avoid structure result */
A68_211 * YMOBTRN_cty;
A68_223 * ZMOBTRN_cby;
A68_VC  ANOBTRN;  /* avoid structure result */
A68_VC  BNOBTRN_an;
A68_VC  CNOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_224 * DNOBTRN_cnt;
A68_VC  ENOBTRN;  /* avoid structure result */
A68_VC  FNOBTRN_tagname;
A68_225 * GNOBTRN_crg;
A68_VC  HNOBTRN;  /* avoid structure result */
A68_VC  INOBTRN_tagname;
A68_231 * JNOBTRN_ccr;
A68_VC  KNOBTRN;  /* avoid structure result */
A68_VC  LNOBTRN_tagname;
A68_VC  MNOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NNOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_229 * ONOBTRN_cqu;
A68_VC  PNOBTRN;  /* avoid structure result */
A68_VC  QNOBTRN_tagname;
A68_VC  RNOBTRN;  /* avoid structure result */
A68_232 * SNOBTRN_ualts;
A68_232 * TNOBTRN_el;
A68_226 * UNOBTRN_cqy;
A68_230 * VNOBTRN_cv;
A68_233 * WNOBTRN_unm;
A68_306  XNOBTRN;  /* OPERATORS - simple index */
A68_INT  YNOBTRN;  /* YIELD */
A68_VC  ZNOBTRN_uname;
A68_BOOL  AOOBTRN;  /* optbool result */
A68_235 * BOOBTRN_uas;
A68_VC  COOBTRN;  /* avoid structure result */
A68_VC  DOOBTRN_an;
A68_236 * EOOBTRN_uex;
A68_VC  FOOBTRN;  /* avoid structure result */
A68_VC  GOOBTRN_an;
A68_237 * HOOBTRN_uti;
A68_312  IOOBTRN;  /* OPERATORS - simple index */
A68_INT  JOOBTRN;  /* YIELD */
A68_304 * KOOBTRN_fd;
A68_306  LOOBTRN;  /* OPERATORS - simple index */
A68_INT  MOOBTRN;  /* YIELD */
A68_VC  NOOBTRN_name;
A68_238 * OOOBTRN_uin;
A68_239 * POOBTRN_utr;
A68_240 * QOOBTRN_udy;
A68_241 * ROOBTRN_ur;
A68_242 * SOOBTRN_row;
A68_243 * TOOBTRN_str;
A68_243 * UOOBTRN_el;
A68_244 * VOOBTRN_ucnc;
A68_245 * WOOBTRN_umin;
A68_246 * XOOBTRN_udin;
A68_247 * YOOBTRN_ucse;
A68_288 * ZOOBTRN_ch;
A68_BOOL  APOBTRN;  /* optbool result */
A68_BOOL  BPOBTRN;  /* optbool result */
A68_BOOL  CPOBTRN;  /* optbool result */
A68_BOOL  DPOBTRN;  /* optbool result */
A68_248 * EPOBTRN_if;
A68_249 * FPOBTRN_urp;
A68_250 * GPOBTRN_usq;
A68_251 * HPOBTRN_usr;
A68_252 * IPOBTRN_uat;
A68_255 * JPOBTRN_usr;
A68_253 * KPOBTRN_uch;
A68_254 * LPOBTRN_ubr;
A68_256 * MPOBTRN_unl;
A68_234 * NPOBTRN_ufn;
A68_46  QPOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_unit);
 /* line 2022: */
 /* line 2023: */
{ 
A_CLOSURE( NMOBTRN_write_output, OMOBTRN_write_output, PMOBTRN_write_output );
(( PMOBTRN_write_output * ) ( NMOBTRN_write_output.nonlocals )) -> Set_ind = NL(Set_ind);
(( PMOBTRN_write_output * ) ( NMOBTRN_write_output.nonlocals )) -> Write_text = NL(Write_text);
(( PMOBTRN_write_output * ) ( NMOBTRN_write_output.nonlocals )) -> HMOBTRN_write_unit = NL(HMOBTRN_write_unit);
(( PMOBTRN_write_output * ) ( NMOBTRN_write_output.nonlocals )) -> Env = Env;
(( PMOBTRN_write_output * ) ( NMOBTRN_write_output.nonlocals )) -> Msg = Msg;
 /* line 2038: */
 /* line 2039: */
RMOBTRN = U ;
switch ( RMOBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
SMOBTRN_cnm = (RMOBTRN.data.mode1);
 /* line 2040: */
{ 
TMOBTRN = (*(&((*(&(Env->Dec_env)))->Consts))) ;
UMOBTRN = (*(&(SMOBTRN_cnm->Constno))) ;
VMOBTRN_cdec = (*(&A_VINDEX(TMOBTRN,UMOBTRN)));
 /* line 2041: */
 /* line 2042: */
if ( ((*(&(VMOBTRN_cdec->Sort)))==QKAATRN_macpardec) )
{ 
GHNBTRN_mpname(A_UNITE(WMOBTRN,mode4,4,(*SMOBTRN_cnm)), Env);
 /* line 2043: */
 /* line 2044: */
 /* line 2045: */
A_CALLPROC(NL(Set_ind),(AHBATRN_cmpar_ind),(AHBATRN_cmpar_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 2046: */
A_CALLPROC(NL(Set_ind),(BHBATRN_cname_ind),(BHBATRN_cname_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 2047: */
 /* line 2048: */
 /* line 2049: */
AENBTRN_constname( (*(&(SMOBTRN_cnm->Constno))), Env, &XMOBTRN );
A_CALLPROC(NL(Write_text),(XMOBTRN),(XMOBTRN,(NL(Write_text)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE206)  */
YMOBTRN_cty = (RMOBTRN.data.mode7);
 /* line 2050: */
{ 
A_CALLPROC(NL(Set_ind),(JHBATRN_ctype_ind),(JHBATRN_ctype_ind,(NL(Set_ind)).nonlocals));
 /* line 2051: */
 /* line 2052: */
 /* line 2053: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(YMOBTRN_cty->Type))), Env, Msg),((*(&(YMOBTRN_cty->Type))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
ZMOBTRN_cby = (RMOBTRN.data.mode2);
 /* line 2054: */
{ 
QENBTRN_altname( (*(&(ZMOBTRN_cby->Typeno))), (*(&(ZMOBTRN_cby->Primno))), Env, Msg, &ANOBTRN );
BNOBTRN_an = ANOBTRN;
 /* line 2055: */
 /* line 2056: */
if ( FFNBTRN_is_ella_char((*(&(ZMOBTRN_cby->Typeno))), Env) )
{ 
A_CALLPROC(NL(Set_ind),(TGBATRN_cchar_ind),(TGBATRN_cchar_ind,(NL(Set_ind)).nonlocals));
 /* line 2057: */
A_CALLPROC(NL(Write_text),(BNOBTRN_an),(BNOBTRN_an,(NL(Write_text)).nonlocals));
 /* line 2058: */
 /* line 2059: */
 /* line 2060: */
A_CALLPROC(NL(Write_text),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(CNOBTRN,QFNBTRN_find_char((*(&(ZMOBTRN_cby->Typeno))), (*(&(ZMOBTRN_cby->Primno))), Env, Msg),A68_CHAR ))),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(CNOBTRN,QFNBTRN_find_char((*(&(ZMOBTRN_cby->Typeno))), (*(&(ZMOBTRN_cby->Primno))), Env, Msg),A68_CHAR )),(NL(Write_text)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Set_ind),(SGBATRN_cbasic_ind),(SGBATRN_cbasic_ind,(NL(Set_ind)).nonlocals));
 /* line 2061: */
 /* line 2062: */
 /* line 2063: */
 /* line 2064: */
A_CALLPROC(NL(Write_text),(BNOBTRN_an),(BNOBTRN_an,(NL(Write_text)).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(INT,MODE190)  */
DNOBTRN_cnt = (RMOBTRN.data.mode3);
 /* line 2065: */
{ 
QENBTRN_altname( (*(&(DNOBTRN_cnt->Typeno))), 1, Env, Msg, &ENOBTRN );
FNOBTRN_tagname = ENOBTRN;
 /* line 2067: */
A_CALLPROC(NL(Set_ind),(ZGBATRN_cint_ind),(ZGBATRN_cint_ind,(NL(Set_ind)).nonlocals));
 /* line 2068: */
A_CALLPROC(NL(Write_text),(FNOBTRN_tagname),(FNOBTRN_tagname,(NL(Write_text)).nonlocals));
 /* line 2069: */
A_CALLPROC(NL(Write_text),(CQMBTRN_slash_txt),(CQMBTRN_slash_txt,(NL(Write_text)).nonlocals));
 /* line 2070: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(DNOBTRN_cnt->Index))), Env, Msg),((*(&(DNOBTRN_cnt->Index))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 2071: */
 /* line 2072: */
 /* line 2073: */
A_CALLPROC(NL(Set_ind),(XHBATRN_endcint_ind),(XHBATRN_endcint_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 8: /* REF STRUCT(INT,MODE205)  */
GNOBTRN_crg = (RMOBTRN.data.mode8);
 /* line 2074: */
{ 
QENBTRN_altname( (*(&(GNOBTRN_crg->Typeno))), 1, Env, Msg, &HNOBTRN );
INOBTRN_tagname = HNOBTRN;
 /* line 2076: */
A_CALLPROC(NL(Set_ind),(IHBATRN_crange_ind),(IHBATRN_crange_ind,(NL(Set_ind)).nonlocals));
 /* line 2077: */
A_CALLPROC(NL(Write_text),(INOBTRN_tagname),(INOBTRN_tagname,(NL(Write_text)).nonlocals));
 /* line 2078: */
A_CALLPROC(NL(Write_text),(FUMBTRN_slashbr_txt),(FUMBTRN_slashbr_txt,(NL(Write_text)).nonlocals));
 /* line 2079: */
A_CALLPROC(NL(WNNBTRN_write_range),((*(&(GNOBTRN_crg->Range))), Env, Msg),((*(&(GNOBTRN_crg->Range))), Env, Msg,(NL(WNNBTRN_write_range)).nonlocals));
 /* line 2080: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 2081: */
 /* line 2082: */
 /* line 2083: */
A_CALLPROC(NL(Set_ind),(QIBATRN_endrange_ind),(QIBATRN_endrange_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
JNOBTRN_ccr = (RMOBTRN.data.mode9);
 /* line 2084: */
{ 
QENBTRN_altname( (*(&(JNOBTRN_ccr->Typeno))), 1, Env, Msg, &KNOBTRN );
LNOBTRN_tagname = KNOBTRN;
 /* line 2086: */
A_CALLPROC(NL(Set_ind),(UGBATRN_ccharrange_ind),(UGBATRN_ccharrange_ind,(NL(Set_ind)).nonlocals));
 /* line 2087: */
A_CALLPROC(NL(Write_text),(LNOBTRN_tagname),(LNOBTRN_tagname,(NL(Write_text)).nonlocals));
 /* line 2088: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 2089: */
 /* line 2090: */
A_CALLPROC(NL(Write_text),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(MNOBTRN,QFNBTRN_find_char((*(&(JNOBTRN_ccr->Typeno))), (*(&(JNOBTRN_ccr->Firstno))), Env, Msg),A68_CHAR ))),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(MNOBTRN,QFNBTRN_find_char((*(&(JNOBTRN_ccr->Typeno))), (*(&(JNOBTRN_ccr->Firstno))), Env, Msg),A68_CHAR )),(NL(Write_text)).nonlocals));
 /* line 2091: */
A_CALLPROC(NL(Set_ind),(LHBATRN_dotdot_ind),(LHBATRN_dotdot_ind,(NL(Set_ind)).nonlocals));
 /* line 2092: */
A_CALLPROC(NL(Write_text),(TTMBTRN_dotdot_txt),(TTMBTRN_dotdot_txt,(NL(Write_text)).nonlocals));
 /* line 2093: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2094: */
 /* line 2095: */
A_CALLPROC(NL(Write_text),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(NNOBTRN,QFNBTRN_find_char((*(&(JNOBTRN_ccr->Typeno))), (*(&(JNOBTRN_ccr->Lastno))), Env, Msg),A68_CHAR ))),(A_VC_PLUS(NQMBTRN_prime_txt,A_HVEC(NNOBTRN,QFNBTRN_find_char((*(&(JNOBTRN_ccr->Typeno))), (*(&(JNOBTRN_ccr->Lastno))), Env, Msg),A68_CHAR )),(NL(Write_text)).nonlocals));
 /* line 2096: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 2097: */
 /* line 2098: */
 /* line 2099: */
A_CALLPROC(NL(Set_ind),(QIBATRN_endrange_ind),(QIBATRN_endrange_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
ONOBTRN_cqu = (RMOBTRN.data.mode5);
 /* line 2100: */
{ 
QENBTRN_altname( (*(&(ONOBTRN_cqu->Typeno))), 1, Env, Msg, &PNOBTRN );
QNOBTRN_tagname = PNOBTRN;
 /* line 2102: */
A_CALLPROC(NL(Set_ind),(HHBATRN_cquote_ind),(HHBATRN_cquote_ind,(NL(Set_ind)).nonlocals));
 /* line 2103: */
A_CALLPROC(NL(Write_text),(QNOBTRN_tagname),(QNOBTRN_tagname,(NL(Write_text)).nonlocals));
 /* line 2104: */
 /* line 2105: */
GGNBTRN_make_string( (*(&(ONOBTRN_cqu->Typeno))), (*(&(ONOBTRN_cqu->String))), Env, Msg, &RNOBTRN );
A_CALLPROC(NL(DJNBTRN_write_string),(RNOBTRN, (*Env), Msg),(RNOBTRN, (*Env), Msg,(NL(DJNBTRN_write_string)).nonlocals));
 /* line 2106: */
 /* line 2107: */
 /* line 2108: */
A_CALLPROC(NL(Set_ind),(ZHBATRN_endcquote_ind),(ZHBATRN_endcquote_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 10: /* REF STRUCT(MODE228,REF MODE232)  */
SNOBTRN_ualts = (RMOBTRN.data.mode10);
 /* line 2109: */
{ 
TNOBTRN_el = SNOBTRN_ualts;
 /* line 2111: */
A_CALLPROC(NL(Set_ind),(HNBATRN_ualts_ind),(HNBATRN_ualts_ind,(NL(Set_ind)).nonlocals));
 /* line 2112: */
for ( ;; )
{ 
 /* line 2113: */
 /* line 2114: */
if ( !((TNOBTRN_el!=HAAATRN_nilualts)) ) break;
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(TNOBTRN_el->Alt))), Env, Msg),((*(&(TNOBTRN_el->Alt))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2115: */
TNOBTRN_el = (*(&(TNOBTRN_el->Rest)));
 /* line 2116: */
 /* line 2117: */
if ( (TNOBTRN_el!=HAAATRN_nilualts) )
{ 
A_CALLPROC(NL(Write_text),(RQMBTRN_stroke_txt),(RQMBTRN_stroke_txt,(NL(Write_text)).nonlocals));
 /* line 2118: */
 /* line 2119: */
 /* line 2120: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 2121: */
 /* line 2122: */
 /* line 2123: */
A_CALLPROC(NL(Set_ind),(OHBATRN_endalts_ind),(OHBATRN_endalts_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE206)  */
UNOBTRN_cqy = (RMOBTRN.data.mode4);
 /* line 2124: */
{ 
A_CALLPROC(NL(Set_ind),(GHBATRN_cquery_ind),(GHBATRN_cquery_ind,(NL(Set_ind)).nonlocals));
 /* line 2125: */
A_CALLPROC(NL(Write_text),(GQMBTRN_qmark_txt),(GQMBTRN_qmark_txt,(NL(Write_text)).nonlocals));
 /* line 2126: */
A_CALLPROC(NL(SONBTRN_write_type),((*(&(UNOBTRN_cqy->Querytype))), Env, Msg),((*(&(UNOBTRN_cqy->Querytype))), Env, Msg,(NL(SONBTRN_write_type)).nonlocals));
 /* line 2127: */
 /* line 2128: */
 /* line 2129: */
A_CALLPROC(NL(Set_ind),(YHBATRN_endcquery_ind),(YHBATRN_endcquery_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 6: /* REF STRUCT(INT)  */
VNOBTRN_cv = (RMOBTRN.data.mode6);
 /* line 2130: */
{ 
A_CALLPROC(NL(Set_ind),(KHBATRN_cvoid_ind),(KHBATRN_cvoid_ind,(NL(Set_ind)).nonlocals));
 /* line 2131: */
 /* line 2132: */
 /* line 2133: */
A_CALLPROC(NL(Write_text),(YYMBTRN_void_txt),(YYMBTRN_void_txt,(NL(Write_text)).nonlocals));
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
WNOBTRN_unm = (RMOBTRN.data.mode11);
 /* line 2134: */
{ 
XNOBTRN = (*(&((*(&(Env->Fd)))->Nametypes))) ;
YNOBTRN = (*(&(WNOBTRN_unm->Nameno))) ;
ZNOBTRN_uname = (*(&((&A_VINDEX(XNOBTRN,YNOBTRN))->Name)));
 /* line 2135: */
AOOBTRN = ((*(&(WNOBTRN_unm->Sort)))==MKAATRN_uiosource);
if ( ! AOOBTRN )
{ /* line 2136: */
AOOBTRN = ((*(&(WNOBTRN_unm->Sort)))==NKAATRN_uiosink);
}
 /* line 2137: */
if ( AOOBTRN )
{ 
A_CALLPROC(NL(Set_ind),(TNBATRN_uio_ind),(TNBATRN_uio_ind,(NL(Set_ind)).nonlocals));
 /* line 2138: */
 /* line 2139: */
 /* line 2140: */
A_CALLPROC(NL(Write_text),(UXMBTRN_io_txt),(UXMBTRN_io_txt,(NL(Write_text)).nonlocals));
} 
else
{ 
 /* line 2141: */
A_CALLPROC(NL(Set_ind),(VNBATRN_uname_ind),(VNBATRN_uname_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 2142: */
if ( (ZNOBTRN_uname.upb>0) )
{ 
 /* line 2143: */
 /* line 2144: */
A_CALLPROC(NL(Write_text),(ZNOBTRN_uname),(ZNOBTRN_uname,(NL(Write_text)).nonlocals));
} 
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE228)  */
BOOBTRN_uas = (RMOBTRN.data.mode13);
 /* line 2145: */
{ 
QENBTRN_altname( (*(&(BOOBTRN_uas->Typeno))), (*(&(BOOBTRN_uas->Altno))), Env, Msg, &COOBTRN );
DOOBTRN_an = COOBTRN;
 /* line 2147: */
A_CALLPROC(NL(Set_ind),(INBATRN_uassoc_ind),(INBATRN_uassoc_ind,(NL(Set_ind)).nonlocals));
 /* line 2148: */
A_CALLPROC(NL(Write_text),(DOOBTRN_an),(DOOBTRN_an,(NL(Write_text)).nonlocals));
 /* line 2149: */
A_CALLPROC(NL(Write_text),(EQMBTRN_ampsand_txt),(EQMBTRN_ampsand_txt,(NL(Write_text)).nonlocals));
 /* line 2150: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(BOOBTRN_uas->Assoc))), Env, Msg),((*(&(BOOBTRN_uas->Assoc))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2151: */
 /* line 2152: */
 /* line 2153: */
A_CALLPROC(NL(Set_ind),(CJBATRN_enduassoc_ind),(CJBATRN_enduassoc_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE228,INT,INT)  */
EOOBTRN_uex = (RMOBTRN.data.mode14);
 /* line 2154: */
{ 
QENBTRN_altname( (*(&(EOOBTRN_uex->Typeno))), (*(&(EOOBTRN_uex->Altno))), Env, Msg, &FOOBTRN );
GOOBTRN_an = FOOBTRN;
 /* line 2156: */
A_CALLPROC(NL(Set_ind),(PNBATRN_uextract_ind),(PNBATRN_uextract_ind,(NL(Set_ind)).nonlocals));
 /* line 2157: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(EOOBTRN_uex->Extract))), Env, Msg),((*(&(EOOBTRN_uex->Extract))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2158: */
A_CALLPROC(NL(Set_ind),(MMBATRN_slashslash_ind),(MMBATRN_slashslash_ind,(NL(Set_ind)).nonlocals));
 /* line 2159: */
A_CALLPROC(NL(Write_text),(XXMBTRN_twoslash_txt),(XXMBTRN_twoslash_txt,(NL(Write_text)).nonlocals));
 /* line 2160: */
A_CALLPROC(NL(Write_text),(GOOBTRN_an),(GOOBTRN_an,(NL(Write_text)).nonlocals));
 /* line 2161: */
 /* line 2162: */
 /* line 2163: */
A_CALLPROC(NL(Set_ind),(FJBATRN_enduextract_ind),(FJBATRN_enduextract_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 15: /* REF STRUCT(MODE228,INT,INT)  */
HOOBTRN_uti = (RMOBTRN.data.mode15);
 /* line 2164: */
{ 
A_CALLPROC(NL(Set_ind),(YNBATRN_uportname_ind),(YNBATRN_uportname_ind,(NL(Set_ind)).nonlocals));
 /* line 2165: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(HOOBTRN_uti->Unit))), Env, Msg),((*(&(HOOBTRN_uti->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2166: */
IOOBTRN = (*(&((*(&(Env->Dec_env)))->Fns))) ;
JOOBTRN = (*(&(HOOBTRN_uti->Fnno))) ;
KOOBTRN_fd = (*(&A_VINDEX(IOOBTRN,JOOBTRN)));
 /* line 2167: */
LOOBTRN = (*(&(KOOBTRN_fd->Nametypes))) ;
MOOBTRN = (*(&(HOOBTRN_uti->Nameno))) ;
NOOBTRN_name = (*(&((&A_VINDEX(LOOBTRN,MOOBTRN))->Name)));
 /* line 2168: */
A_CALLPROC(NL(Set_ind),(LGBATRN_backslash_ind),(LGBATRN_backslash_ind,(NL(Set_ind)).nonlocals));
 /* line 2169: */
A_CALLPROC(NL(Write_text),(CZMBTRN_backslash_txt),(CZMBTRN_backslash_txt,(NL(Write_text)).nonlocals));
 /* line 2170: */
A_CALLPROC(NL(Write_text),(NOOBTRN_name),(NOOBTRN_name,(NL(Write_text)).nonlocals));
 /* line 2171: */
 /* line 2172: */
 /* line 2173: */
A_CALLPROC(NL(Set_ind),(IJBATRN_enduportname_ind),(IJBATRN_enduportname_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 16: /* REF STRUCT(MODE228,MODE190)  */
OOOBTRN_uin = (RMOBTRN.data.mode16);
 /* line 2174: */
{ 
A_CALLPROC(NL(Set_ind),(SNBATRN_uindex_ind),(SNBATRN_uindex_ind,(NL(Set_ind)).nonlocals));
 /* line 2175: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(OOOBTRN_uin->Unit))), Env, Msg),((*(&(OOOBTRN_uin->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2176: */
A_CALLPROC(NL(CONBTRN_write_index),((*(&(OOOBTRN_uin->Index))), Env, Msg),((*(&(OOOBTRN_uin->Index))), Env, Msg,(NL(CONBTRN_write_index)).nonlocals));
 /* line 2177: */
 /* line 2178: */
 /* line 2179: */
A_CALLPROC(NL(Set_ind),(GIBATRN_endindex_ind),(GIBATRN_endindex_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE228,MODE205)  */
POOBTRN_utr = (RMOBTRN.data.mode17);
 /* line 2180: */
{ 
A_CALLPROC(NL(Set_ind),(GOBATRN_utrim_ind),(GOBATRN_utrim_ind,(NL(Set_ind)).nonlocals));
 /* line 2181: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(POOBTRN_utr->Unit))), Env, Msg),((*(&(POOBTRN_utr->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2182: */
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 2183: */
A_CALLPROC(NL(Set_ind),(QMBATRN_startrange_ind),(QMBATRN_startrange_ind,(NL(Set_ind)).nonlocals));
 /* line 2184: */
A_CALLPROC(NL(WNNBTRN_write_range),((*(&(POOBTRN_utr->Range))), Env, Msg),((*(&(POOBTRN_utr->Range))), Env, Msg,(NL(WNNBTRN_write_range)).nonlocals));
 /* line 2185: */
A_CALLPROC(NL(Set_ind),(QIBATRN_endrange_ind),(QIBATRN_endrange_ind,(NL(Set_ind)).nonlocals));
 /* line 2186: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
 /* line 2187: */
 /* line 2188: */
 /* line 2189: */
A_CALLPROC(NL(Set_ind),(GIBATRN_endindex_ind),(GIBATRN_endindex_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 18: /* REF STRUCT(MODE228,MODE228)  */
QOOBTRN_udy = (RMOBTRN.data.mode18);
 /* line 2190: */
{ 
A_CALLPROC(NL(Set_ind),(ONBATRN_udyindex_ind),(ONBATRN_udyindex_ind,(NL(Set_ind)).nonlocals));
 /* line 2191: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(QOOBTRN_udy->Unit))), Env, Msg),((*(&(QOOBTRN_udy->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2192: */
A_CALLPROC(NL(Write_text),(AYMBTRN_twoosb_txt),(AYMBTRN_twoosb_txt,(NL(Write_text)).nonlocals));
 /* line 2193: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2194: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(QOOBTRN_udy->Index))), Env, Msg),((*(&(QOOBTRN_udy->Index))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2195: */
A_CALLPROC(NL(Write_text),(DYMBTRN_twocsb_txt),(DYMBTRN_twocsb_txt,(NL(Write_text)).nonlocals));
 /* line 2196: */
 /* line 2197: */
 /* line 2198: */
A_CALLPROC(NL(Set_ind),(GIBATRN_endindex_ind),(GIBATRN_endindex_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 19: /* REF STRUCT(MODE228,MODE228,MODE228)  */
ROOBTRN_ur = (RMOBTRN.data.mode19);
 /* line 2199: */
{ 
A_CALLPROC(NL(Set_ind),(AOBATRN_ureplace_ind),(AOBATRN_ureplace_ind,(NL(Set_ind)).nonlocals));
 /* line 2200: */
A_CALLPROC(NL(Write_text),(GYMBTRN_replace_txt),(GYMBTRN_replace_txt,(NL(Write_text)).nonlocals));
 /* line 2201: */
A_CALLPROC(NL(Set_ind),(RLBATRN_replace_ind),(RLBATRN_replace_ind,(NL(Set_ind)).nonlocals));
 /* line 2202: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 2203: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(ROOBTRN_ur->Unit))), Env, Msg),((*(&(ROOBTRN_ur->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2204: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 2205: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2206: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(ROOBTRN_ur->Index))), Env, Msg),((*(&(ROOBTRN_ur->Index))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2207: */
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 2208: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2209: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(ROOBTRN_ur->From))), Env, Msg),((*(&(ROOBTRN_ur->From))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2210: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 2211: */
 /* line 2212: */
 /* line 2213: */
A_CALLPROC(NL(Set_ind),(SIBATRN_endreplace_ind),(SIBATRN_endreplace_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 20: /* REF STRUCT(MODE190,MODE228)  */
SOOBTRN_row = (RMOBTRN.data.mode20);
 /* line 2214: */
{ 
A_CALLPROC(NL(Set_ind),(BOBATRN_urow_ind),(BOBATRN_urow_ind,(NL(Set_ind)).nonlocals));
 /* line 2215: */
A_CALLPROC(NL(CONBTRN_write_index),((*(&(SOOBTRN_row->Size))), Env, Msg),((*(&(SOOBTRN_row->Size))), Env, Msg,(NL(CONBTRN_write_index)).nonlocals));
 /* line 2216: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2217: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(SOOBTRN_row->Elem))), Env, Msg),((*(&(SOOBTRN_row->Elem))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2218: */
 /* line 2219: */
 /* line 2220: */
A_CALLPROC(NL(Set_ind),(TIBATRN_endrow_ind),(TIBATRN_endrow_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 21: /* REF STRUCT(MODE228,REF MODE243)  */
TOOBTRN_str = (RMOBTRN.data.mode21);
 /* line 2221: */
{ 
UOOBTRN_el = TOOBTRN_str;
 /* line 2223: */
A_CALLPROC(NL(Set_ind),(EOBATRN_ustr_ind),(EOBATRN_ustr_ind,(NL(Set_ind)).nonlocals));
 /* line 2224: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 2225: */
for ( ;; )
{ 
 /* line 2226: */
 /* line 2227: */
if ( !((UOOBTRN_el!=IAAATRN_nilustr)) ) break;
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(UOOBTRN_el->Elem))), Env, Msg),((*(&(UOOBTRN_el->Elem))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2228: */
UOOBTRN_el = (*(&(UOOBTRN_el->Rest)));
 /* line 2229: */
 /* line 2230: */
if ( (UOOBTRN_el!=IAAATRN_nilustr) )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 2231: */
 /* line 2232: */
 /* line 2233: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 2234: */
 /* line 2235: */
 /* line 2236: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 2237: */
 /* line 2238: */
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE228,MODE228)  */
VOOBTRN_ucnc = (RMOBTRN.data.mode22);
 /* line 2239: */
{ 
A_CALLPROC(NL(Set_ind),(MNBATRN_uconc_ind),(MNBATRN_uconc_ind,(NL(Set_ind)).nonlocals));
 /* line 2240: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(VOOBTRN_ucnc->Left))), Env, Msg),((*(&(VOOBTRN_ucnc->Left))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2241: */
A_CALLPROC(NL(Set_ind),(CHBATRN_conc_ind),(CHBATRN_conc_ind,(NL(Set_ind)).nonlocals));
 /* line 2242: */
A_CALLPROC(NL(Write_text),(JYMBTRN_conc_txt),(JYMBTRN_conc_txt,(NL(Write_text)).nonlocals));
 /* line 2243: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2244: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(VOOBTRN_ucnc->Right))), Env, Msg),((*(&(VOOBTRN_ucnc->Right))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2245: */
 /* line 2246: */
 /* line 2247: */
A_CALLPROC(NL(Set_ind),(DJBATRN_enduconc_ind),(DJBATRN_enduconc_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 23: /* REF STRUCT(MODE268,MODE228)  */
WOOBTRN_umin = (RMOBTRN.data.mode23);
 /* line 2248: */
{ 
A_CALLPROC(NL(Set_ind),(UNBATRN_uminst_ind),(UNBATRN_uminst_ind,(NL(Set_ind)).nonlocals));
 /* line 2249: */
A_CALLPROC((*NL(CQNBTRN_write_instance)),((*(&(WOOBTRN_umin->Inst))), A68_FALSE, A68_FALSE, Env, NL(HMOBTRN_write_unit), Msg),((*(&(WOOBTRN_umin->Inst))), A68_FALSE, A68_FALSE, Env, NL(HMOBTRN_write_unit), Msg,((*NL(CQNBTRN_write_instance))).nonlocals));
 /* line 2250: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2251: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(WOOBTRN_umin->Right))), Env, Msg),((*(&(WOOBTRN_umin->Right))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2252: */
 /* line 2253: */
 /* line 2254: */
A_CALLPROC(NL(Set_ind),(HJBATRN_enduminst_ind),(HJBATRN_enduminst_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 24: /* REF STRUCT(MODE228,MODE268,MODE228)  */
XOOBTRN_udin = (RMOBTRN.data.mode24);
 /* line 2255: */
{ 
A_CALLPROC(NL(Set_ind),(NNBATRN_udinst_ind),(NNBATRN_udinst_ind,(NL(Set_ind)).nonlocals));
 /* line 2256: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(XOOBTRN_udin->Left))), Env, Msg),((*(&(XOOBTRN_udin->Left))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2257: */
A_CALLPROC(NL(Set_ind),(LKBATRN_inst_ind),(LKBATRN_inst_ind,(NL(Set_ind)).nonlocals));
 /* line 2258: */
A_CALLPROC((*NL(CQNBTRN_write_instance)),((*(&(XOOBTRN_udin->Inst))), A68_FALSE, A68_FALSE, Env, NL(HMOBTRN_write_unit), Msg),((*(&(XOOBTRN_udin->Inst))), A68_FALSE, A68_FALSE, Env, NL(HMOBTRN_write_unit), Msg,((*NL(CQNBTRN_write_instance))).nonlocals));
 /* line 2259: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2260: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(XOOBTRN_udin->Right))), Env, Msg),((*(&(XOOBTRN_udin->Right))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2261: */
 /* line 2262: */
 /* line 2263: */
A_CALLPROC(NL(Set_ind),(EJBATRN_endudinst_ind),(EJBATRN_endudinst_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 25: /* REF STRUCT(MODE228,REF MODE288)  */
YOOBTRN_ucse = (RMOBTRN.data.mode25);
 /* line 2264: */
{ 
ZOOBTRN_ch = (*(&(YOOBTRN_ucse->Choices)));
 /* line 2266: */
A_CALLPROC(NL(Set_ind),(LNBATRN_ucase_ind),(LNBATRN_ucase_ind,(NL(Set_ind)).nonlocals));
 /* line 2267: */
A_CALLPROC(NL(Write_text),(TWMBTRN_case_txt),(TWMBTRN_case_txt,(NL(Write_text)).nonlocals));
 /* line 2268: */
A_CALLPROC(NL(Set_ind),(YGBATRN_chooser_ind),(YGBATRN_chooser_ind,(NL(Set_ind)).nonlocals));
 /* line 2269: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(YOOBTRN_ucse->Input))), Env, Msg),((*(&(YOOBTRN_ucse->Input))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2270: */
A_CALLPROC(NL(Set_ind),(RGBATRN_caseof_ind),(RGBATRN_caseof_ind,(NL(Set_ind)).nonlocals));
 /* line 2271: */
A_CALLPROC(NL(Write_text),(WWMBTRN_of_txt),(WWMBTRN_of_txt,(NL(Write_text)).nonlocals));
 /* line 2272: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 2273: */
for ( ;; )
{ 
 /* line 2274: */
 /* line 2275: */
if ( !((ZOOBTRN_ch!=JAAATRN_niluchoices)) ) break;
 /* line 2276: */
if ( ((*(&(ZOOBTRN_ch->Sort)))==XIAATRN_elseofchoice) )
{ 
A_CALLPROC(NL(Set_ind),(NHBATRN_elseof_ind),(NHBATRN_elseof_ind,(NL(Set_ind)).nonlocals));
 /* line 2277: */
A_CALLPROC(NL(Write_text),(ZWMBTRN_elseof_txt),(ZWMBTRN_elseof_txt,(NL(Write_text)).nonlocals));
 /* line 2278: */
 /* line 2279: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
} 
else
{ 
 /* line 2280: */
APOBTRN = ((*(&(ZOOBTRN_ch->Sort)))==YIAATRN_elsechoice);
if ( ! APOBTRN )
{BPOBTRN = NL(ZINBTRN_expand_delays);
if ( BPOBTRN )
{BPOBTRN = ((*(&(ZOOBTRN_ch->Sort)))==ZIAATRN_noelsechoice);
}
APOBTRN = BPOBTRN;
}
 /* line 2281: */
if ( APOBTRN )
{ 
A_CALLPROC(NL(Set_ind),(QGBATRN_caseelse_ind),(QGBATRN_caseelse_ind,(NL(Set_ind)).nonlocals));
 /* line 2282: */
A_CALLPROC(NL(Write_text),(NTMBTRN_else_txt),(NTMBTRN_else_txt,(NL(Write_text)).nonlocals));
 /* line 2283: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 2284: */
 /* line 2285: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(ZOOBTRN_ch->Output))), Env, Msg),((*(&(ZOOBTRN_ch->Output))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
} 
} 
 /* line 2286: */
 /* line 2287: */
CPOBTRN = ((*(&(ZOOBTRN_ch->Sort)))==WIAATRN_normalchoice);
if ( ! CPOBTRN )
{CPOBTRN = ((*(&(ZOOBTRN_ch->Sort)))==XIAATRN_elseofchoice);
}
 /* line 2288: */
if ( CPOBTRN )
{ 
A_CALLPROC(NL(Set_ind),(XGBATRN_choice_ind),(XGBATRN_choice_ind,(NL(Set_ind)).nonlocals));
 /* line 2289: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(ZOOBTRN_ch->Test))), Env, Msg),((*(&(ZOOBTRN_ch->Test))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2290: */
A_CALLPROC(NL(Write_text),(TQMBTRN_colon_txt),(TQMBTRN_colon_txt,(NL(Write_text)).nonlocals));
 /* line 2291: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2292: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(ZOOBTRN_ch->Output))), Env, Msg),((*(&(ZOOBTRN_ch->Output))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2293: */
 /* line 2294: */
A_CALLPROC(NL(Set_ind),(WHBATRN_endchoice_ind),(WHBATRN_endchoice_ind,(NL(Set_ind)).nonlocals));
} 
 /* line 2295: */
ZOOBTRN_ch = (*(&(ZOOBTRN_ch->Rest)));
 /* line 2296: */
DPOBTRN = (ZOOBTRN_ch!=JAAATRN_niluchoices);
if ( DPOBTRN )
{DPOBTRN = ((*(&(ZOOBTRN_ch->Sort)))==WIAATRN_normalchoice);
}
 /* line 2297: */
if ( DPOBTRN )
{ 
A_CALLPROC(NL(Write_text),(VQMBTRN_comma_txt),(VQMBTRN_comma_txt,(NL(Write_text)).nonlocals));
 /* line 2298: */
 /* line 2299: */
 /* line 2300: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
} 
}
 /* line 2301: */
A_CALLPROC(NL(Set_ind),(KJBATRN_esac_ind),(KJBATRN_esac_ind,(NL(Set_ind)).nonlocals));
 /* line 2302: */
A_CALLPROC(NL(Write_text),(CXMBTRN_esac_txt),(CXMBTRN_esac_txt,(NL(Write_text)).nonlocals));
 /* line 2303: */
 /* line 2304: */
 /* line 2305: */
A_CALLPROC(NL(Set_ind),(UHBATRN_endcase_ind),(UHBATRN_endcase_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 26: /* REF STRUCT(MODE190,MODE228,MODE228)  */
EPOBTRN_if = (RMOBTRN.data.mode26);
 /* line 2306: */
{ 
A_CALLPROC(NL(Set_ind),(RNBATRN_uif_ind),(RNBATRN_uif_ind,(NL(Set_ind)).nonlocals));
 /* line 2307: */
A_CALLPROC(NL(Write_text),(HTMBTRN_if_txt),(HTMBTRN_if_txt,(NL(Write_text)).nonlocals));
 /* line 2308: */
A_CALLPROC(NL(Set_ind),(DHBATRN_condition_ind),(DHBATRN_condition_ind,(NL(Set_ind)).nonlocals));
 /* line 2309: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(EPOBTRN_if->Cond))), Env, Msg),((*(&(EPOBTRN_if->Cond))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 2310: */
A_CALLPROC(NL(Set_ind),(WMBATRN_then_ind),(WMBATRN_then_ind,(NL(Set_ind)).nonlocals));
 /* line 2311: */
A_CALLPROC(NL(Write_text),(KTMBTRN_then_txt),(KTMBTRN_then_txt,(NL(Write_text)).nonlocals));
 /* line 2312: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 2313: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(EPOBTRN_if->True))), Env, Msg),((*(&(EPOBTRN_if->True))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2314: */
A_CALLPROC(NL(Set_ind),(MHBATRN_else_ind),(MHBATRN_else_ind,(NL(Set_ind)).nonlocals));
 /* line 2315: */
A_CALLPROC(NL(Write_text),(NTMBTRN_else_txt),(NTMBTRN_else_txt,(NL(Write_text)).nonlocals));
 /* line 2316: */
A_CALLPROC(NL(Set_ind),(KLBATRN_option_ind),(KLBATRN_option_ind,(NL(Set_ind)).nonlocals));
 /* line 2317: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(EPOBTRN_if->False))), Env, Msg),((*(&(EPOBTRN_if->False))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2318: */
A_CALLPROC(NL(Set_ind),(TJBATRN_fi_ind),(TJBATRN_fi_ind,(NL(Set_ind)).nonlocals));
 /* line 2319: */
A_CALLPROC(NL(Write_text),(QTMBTRN_fi_txt),(QTMBTRN_fi_txt,(NL(Write_text)).nonlocals));
 /* line 2320: */
 /* line 2321: */
 /* line 2322: */
A_CALLPROC(NL(Set_ind),(FIBATRN_endif_ind),(FIBATRN_endif_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 27: /* REF STRUCT(MODE190,MODE228)  */
FPOBTRN_urp = (RMOBTRN.data.mode27);
 /* line 2323: */
{ 
A_CALLPROC(NL(Set_ind),(ZNBATRN_urepl_ind),(ZNBATRN_urepl_ind,(NL(Set_ind)).nonlocals));
 /* line 2324: */
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 2325: */
A_CALLPROC(NL(YRNBTRN_write_replicator),((*(&(FPOBTRN_urp->Repl))), Env, Msg),((*(&(FPOBTRN_urp->Repl))), Env, Msg,(NL(YRNBTRN_write_replicator)).nonlocals));
 /* line 2326: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
 /* line 2327: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2328: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(FPOBTRN_urp->Body))), Env, Msg),((*(&(FPOBTRN_urp->Body))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2329: */
 /* line 2330: */
 /* line 2331: */
A_CALLPROC(NL(Set_ind),(JJBATRN_endurepl_ind),(JJBATRN_endurepl_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 28: /* REF STRUCT(REF MODE276,MODE228)  */
GPOBTRN_usq = (RMOBTRN.data.mode28);
 /* line 2332: */
{ 
A_CALLPROC(NL(Set_ind),(COBATRN_usequence_ind),(COBATRN_usequence_ind,(NL(Set_ind)).nonlocals));
 /* line 2333: */
A_CALLPROC(NL(Write_text),(MYMBTRN_begin_txt),(MYMBTRN_begin_txt,(NL(Write_text)).nonlocals));
 /* line 2334: */
A_CALLPROC(NL(Write_text),(PYMBTRN_seq_txt),(PYMBTRN_seq_txt,(NL(Write_text)).nonlocals));
 /* line 2335: */
A_CALLPROC(NL(Set_ind),(OGBATRN_block_ind),(OGBATRN_block_ind,(NL(Set_ind)).nonlocals));
 /* line 2336: */
A_CALLPROC(NL(UKOBTRN_write_sequence),((*(&(GPOBTRN_usq->Body))), Env, NL(HMOBTRN_write_unit), Msg),((*(&(GPOBTRN_usq->Body))), Env, NL(HMOBTRN_write_unit), Msg,(NL(UKOBTRN_write_sequence)).nonlocals));
 /* line 2337: */
 /* line 2338: */
 /* line 2339: */
A_CALLPROC(NMOBTRN_write_output,((*(&(GPOBTRN_usq->Output))), WIBATRN_endsequence_ind),((*(&(GPOBTRN_usq->Output))), WIBATRN_endsequence_ind,(NMOBTRN_write_output).nonlocals));
} 
break;
case 29: /* REF STRUCT(REF MODE257,MODE228)  */
HPOBTRN_usr = (RMOBTRN.data.mode29);
 /* line 2340: */
{ 
A_CALLPROC(NL(Set_ind),(DOBATRN_useries_ind),(DOBATRN_useries_ind,(NL(Set_ind)).nonlocals));
 /* line 2341: */
A_CALLPROC(NL(Write_text),(MYMBTRN_begin_txt),(MYMBTRN_begin_txt,(NL(Write_text)).nonlocals));
 /* line 2342: */
A_CALLPROC(NL(Set_ind),(OGBATRN_block_ind),(OGBATRN_block_ind,(NL(Set_ind)).nonlocals));
 /* line 2343: */
A_CALLPROC(NL(AKOBTRN_write_series),((*(&(HPOBTRN_usr->Body))), Env, NL(HMOBTRN_write_unit), Msg),((*(&(HPOBTRN_usr->Body))), Env, NL(HMOBTRN_write_unit), Msg,(NL(AKOBTRN_write_series)).nonlocals));
 /* line 2344: */
 /* line 2345: */
 /* line 2346: */
A_CALLPROC(NMOBTRN_write_output,((*(&(HPOBTRN_usr->Output))), XIBATRN_endseries_ind),((*(&(HPOBTRN_usr->Output))), XIBATRN_endseries_ind,(NMOBTRN_write_output).nonlocals));
} 
break;
case 30: /* REF STRUCT(MODE228,MODE181)  */
IPOBTRN_uat = (RMOBTRN.data.mode30);
 /* line 2347: */
{ 
A_CALLPROC(NL(Set_ind),(JNBATRN_uattr_ind),(JNBATRN_uattr_ind,(NL(Set_ind)).nonlocals));
 /* line 2348: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(IPOBTRN_uat->Unit))), Env, Msg),((*(&(IPOBTRN_uat->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2349: */
A_CALLPROC(NL(GLNBTRN_write_attr),((*(&(IPOBTRN_uat->Attr))), WNBATRN_unitattr_ind, Env, Msg),((*(&(IPOBTRN_uat->Attr))), WNBATRN_unitattr_ind, Env, Msg,(NL(GLNBTRN_write_attr)).nonlocals));
 /* line 2350: */
 /* line 2351: */
 /* line 2352: */
A_CALLPROC(NL(Set_ind),(QHBATRN_endattr_ind),(QHBATRN_endattr_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 33: /* REF STRUCT(MODE190,MODE228)  */
JPOBTRN_usr = (RMOBTRN.data.mode33);
 /* line 2353: */
{ 
A_CALLPROC(NL(Set_ind),(FOBATRN_ustring_ind),(FOBATRN_ustring_ind,(NL(Set_ind)).nonlocals));
 /* line 2354: */
A_CALLPROC(NL(Write_text),(CUMBTRN_string_txt),(CUMBTRN_string_txt,(NL(Write_text)).nonlocals));
 /* line 2355: */
A_CALLPROC(NL(Write_text),(SPMBTRN_osb_txt),(SPMBTRN_osb_txt,(NL(Write_text)).nonlocals));
 /* line 2356: */
A_CALLPROC(NL(ULNBTRN_write_formula),((*(&(JPOBTRN_usr->Size))), Env, Msg),((*(&(JPOBTRN_usr->Size))), Env, Msg,(NL(ULNBTRN_write_formula)).nonlocals));
 /* line 2357: */
A_CALLPROC(NL(Write_text),(UPMBTRN_csb_txt),(UPMBTRN_csb_txt,(NL(Write_text)).nonlocals));
 /* line 2358: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2359: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(JPOBTRN_usr->Char))), Env, Msg),((*(&(JPOBTRN_usr->Char))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2360: */
 /* line 2361: */
 /* line 2362: */
A_CALLPROC(NL(Set_ind),(AJBATRN_endstring_ind),(AJBATRN_endstring_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 31: /* REF STRUCT(MODE228,MODE192)  */
KPOBTRN_uch = (RMOBTRN.data.mode31);
 /* line 2363: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(KPOBTRN_uch->Unit))), Env, Msg),((*(&(KPOBTRN_uch->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
break;
case 32: /* REF STRUCT(MODE228)  */
LPOBTRN_ubr = (RMOBTRN.data.mode32);
 /* line 2364: */
{ 
A_CALLPROC(NL(Set_ind),(KNBATRN_ubr_ind),(KNBATRN_ubr_ind,(NL(Set_ind)).nonlocals));
 /* line 2365: */
A_CALLPROC(NL(Write_text),(OPMBTRN_orb_txt),(OPMBTRN_orb_txt,(NL(Write_text)).nonlocals));
 /* line 2366: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(LPOBTRN_ubr->Unit))), Env, Msg),((*(&(LPOBTRN_ubr->Unit))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2367: */
A_CALLPROC(NL(Write_text),(QPMBTRN_crb_txt),(QPMBTRN_crb_txt,(NL(Write_text)).nonlocals));
 /* line 2368: */
 /* line 2369: */
 /* line 2370: */
A_CALLPROC(NL(Set_ind),(ZIBATRN_endstr_ind),(ZIBATRN_endstr_ind,(NL(Set_ind)).nonlocals));
} 
break;
case 34: /* REF STRUCT(INT)  */
MPOBTRN_unl = (RMOBTRN.data.mode34);
 /* line 2371: */
A_CALLPROC(NL(Set_ind),(XNBATRN_unull_ind),(XNBATRN_unull_ind,(NL(Set_ind)).nonlocals));
break;
case 12: /* REF STRUCT(MODE228,MODE228)  */
NPOBTRN_ufn = (RMOBTRN.data.mode12);
 /* line 2372: */
{ 
A_CALLPROC(NL(Set_ind),(QNBATRN_ufn_ind),(QNBATRN_ufn_ind,(NL(Set_ind)).nonlocals));
 /* line 2373: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(NPOBTRN_ufn->Sink))), Env, Msg),((*(&(NPOBTRN_ufn->Sink))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2374: */
A_CALLPROC(NL(Set_ind),(ZMBATRN_to_ind),(ZMBATRN_to_ind,(NL(Set_ind)).nonlocals));
 /* line 2375: */
A_CALLPROC(NL(Write_text),(ZTMBTRN_to_txt),(ZTMBTRN_to_txt,(NL(Write_text)).nonlocals));
 /* line 2376: */
A_CALLPROC(NL(Set_ind),(TLBATRN_sep_ind),(TLBATRN_sep_ind,(NL(Set_ind)).nonlocals));
 /* line 2377: */
A_CALLPROC(NL(HMOBTRN_write_unit),((*(&(NPOBTRN_ufn->Source))), Env, Msg),((*(&(NPOBTRN_ufn->Source))), Env, Msg,(NL(HMOBTRN_write_unit)).nonlocals));
 /* line 2378: */
 /* line 2379: */
 /* line 2380: */
 /* line 2381: */
A_CALLPROC(NL(Set_ind),(GJBATRN_endufn_ind),(GJBATRN_endufn_ind,(NL(Set_ind)).nonlocals));
} 
break;
default: 
 /* line 2382: */
 /* line 2383: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(QPOBTRN,PPOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(QPOBTRN,PPOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
} 
A_PROC_EXIT(write_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  GPMBTRN_generator(A68_BOOL  FPMBTRN_anonymous, A68_164  *ReturnedValue)
{ 
A68_164  HPMBTRN;  /* clause result */
A68_164  IPMBTRN;  /* OPERATORS - dynamic generator */
{ 
IPMBTRN.upb = 0 ;
( FPMBTRN_anonymous? A_VLOC(A68_VC ,IPMBTRN): A_VHEAP(A68_VC ,IPMBTRN) );
HPMBTRN = IPMBTRN;
} 
*ReturnedValue = (HPMBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  IZMBTRN_(A68_190  A, A68_190  B)
{ 
A68_190  JZMBTRN;  /* united object - for case conformity */
A68_191 * KZMBTRN_finta;
A68_190  LZMBTRN;  /* united object - for case conformity */
A68_191 * MZMBTRN_fintb;
A68_BOOL  NZMBTRN;  /* clause result */
A68_192 * OZMBTRN_fca;
A68_193 * PZMBTRN_fara;
A68_190  QZMBTRN;  /* united object - for case conformity */
A68_193 * RZMBTRN_farb;
A68_194 * SZMBTRN_fnaa;
A68_190  TZMBTRN;  /* united object - for case conformity */
A68_194 * UZMBTRN_fnab;
A68_195 * VZMBTRN_fdopa;
A68_190  WZMBTRN;  /* united object - for case conformity */
A68_195 * XZMBTRN_fdopb;
A68_BOOL  YZMBTRN;  /* optbool result */
A68_196 * ZZMBTRN_fmopa;
A68_190  AANBTRN;  /* united object - for case conformity */
A68_196 * BANBTRN_fmopb;
A68_BOOL  CANBTRN;  /* optbool result */
A68_197 * DANBTRN_fcnda;
A68_190  EANBTRN;  /* united object - for case conformity */
A68_197 * FANBTRN_fcndb;
A68_BOOL  GANBTRN;  /* optbool result */
A68_198 * HANBTRN_fbra;
A68_200 * IANBTRN_fnla;
A68_190  JANBTRN;  /* united object - for case conformity */
A68_200 * KANBTRN_fnlb;
A_PROC_ENTRY(=);
 /* line 186: */
 /* line 187: */
JZMBTRN = A ;
switch ( JZMBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
KZMBTRN_finta = (JZMBTRN.data.mode1);
 /* line 188: */
LZMBTRN = B ;
switch ( LZMBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
MZMBTRN_fintb = (LZMBTRN.data.mode1);
NZMBTRN = ((*(&(KZMBTRN_finta->Int)))==(*(&(MZMBTRN_fintb->Int))));
break;
default: 
 /* line 189: */
NZMBTRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(INT,MODE190,MODE190)  */
OZMBTRN_fca = (JZMBTRN.data.mode2);
 /* line 190: */
 /* line 191: */
NZMBTRN = IZMBTRN_(B, (*(&(OZMBTRN_fca->Test))));
break;
case 3: /* REF STRUCT(INT)  */
PZMBTRN_fara = (JZMBTRN.data.mode3);
 /* line 192: */
QZMBTRN = B ;
switch ( QZMBTRN.mode )
{ 
case 3: /* REF STRUCT(INT)  */
RZMBTRN_farb = (QZMBTRN.data.mode3);
 /* line 193: */
NZMBTRN = ((*(&(PZMBTRN_fara->Nameno)))==(*(&(RZMBTRN_farb->Nameno))));
break;
default: 
 /* line 194: */
 /* line 195: */
NZMBTRN = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(INT)  */
SZMBTRN_fnaa = (JZMBTRN.data.mode4);
 /* line 196: */
TZMBTRN = B ;
switch ( TZMBTRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
UZMBTRN_fnab = (TZMBTRN.data.mode4);
 /* line 197: */
NZMBTRN = ((*(&(SZMBTRN_fnaa->Intno)))==(*(&(UZMBTRN_fnab->Intno))));
break;
default: 
 /* line 198: */
 /* line 199: */
NZMBTRN = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(MODE190,INT,MODE190)  */
VZMBTRN_fdopa = (JZMBTRN.data.mode5);
 /* line 200: */
WZMBTRN = B ;
switch ( WZMBTRN.mode )
{ 
case 5: /* REF STRUCT(MODE190,INT,MODE190)  */
XZMBTRN_fdopb = (WZMBTRN.data.mode5);
 /* line 201: */
YZMBTRN = ((*(&(VZMBTRN_fdopa->Sort)))==(*(&(XZMBTRN_fdopb->Sort))));
if ( YZMBTRN )
{YZMBTRN = IZMBTRN_((*(&(VZMBTRN_fdopa->Left))), (*(&(XZMBTRN_fdopb->Left))));
}
 /* line 202: */
if ( YZMBTRN )
{ /* line 203: */
YZMBTRN = IZMBTRN_((*(&(VZMBTRN_fdopa->Right))), (*(&(XZMBTRN_fdopb->Right))));
}
NZMBTRN = YZMBTRN;
break;
default: 
 /* line 204: */
 /* line 205: */
NZMBTRN = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(INT,MODE190)  */
ZZMBTRN_fmopa = (JZMBTRN.data.mode6);
 /* line 206: */
AANBTRN = B ;
switch ( AANBTRN.mode )
{ 
case 6: /* REF STRUCT(INT,MODE190)  */
BANBTRN_fmopb = (AANBTRN.data.mode6);
 /* line 207: */
CANBTRN = ((*(&(ZZMBTRN_fmopa->Sort)))==(*(&(BANBTRN_fmopb->Sort))));
if ( CANBTRN )
{ /* line 208: */
CANBTRN = IZMBTRN_((*(&(ZZMBTRN_fmopa->Right))), (*(&(BANBTRN_fmopb->Right))));
}
NZMBTRN = CANBTRN;
break;
default: 
 /* line 209: */
 /* line 210: */
NZMBTRN = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(MODE190,MODE190,MODE190)  */
DANBTRN_fcnda = (JZMBTRN.data.mode7);
 /* line 211: */
EANBTRN = B ;
switch ( EANBTRN.mode )
{ 
case 7: /* REF STRUCT(MODE190,MODE190,MODE190)  */
FANBTRN_fcndb = (EANBTRN.data.mode7);
 /* line 212: */
GANBTRN = IZMBTRN_((*(&(DANBTRN_fcnda->Cond))), (*(&(FANBTRN_fcndb->Cond))));
if ( GANBTRN )
{GANBTRN = IZMBTRN_((*(&(DANBTRN_fcnda->True))), (*(&(FANBTRN_fcndb->True))));
}
 /* line 213: */
if ( GANBTRN )
{ /* line 214: */
GANBTRN = IZMBTRN_((*(&(DANBTRN_fcnda->False))), (*(&(FANBTRN_fcndb->False))));
}
NZMBTRN = GANBTRN;
break;
default: 
 /* line 215: */
 /* line 216: */
NZMBTRN = A68_FALSE;
break;
} 
break;
case 8: /* REF STRUCT(MODE190)  */
HANBTRN_fbra = (JZMBTRN.data.mode8);
 /* line 217: */
 /* line 218: */
NZMBTRN = IZMBTRN_(B, (*(&(HANBTRN_fbra->Formula))));
break;
case 10: /* REF STRUCT(INT)  */
IANBTRN_fnla = (JZMBTRN.data.mode10);
 /* line 219: */
JANBTRN = B ;
switch ( JANBTRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
KANBTRN_fnlb = (JANBTRN.data.mode10);
NZMBTRN = A68_TRUE;
break;
default: 
 /* line 220: */
 /* line 221: */
NZMBTRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 222: */
NZMBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( NZMBTRN );
} 
#undef NL

A_STATIC A68_BOOL  NANBTRN_(A68_206  A, A68_206  B)
{ 
A68_206  OANBTRN;  /* united object - for case conformity */
A68_207 * PANBTRN_tnma;
A68_206  QANBTRN;  /* united object - for case conformity */
A68_207 * RANBTRN_tnmb;
A68_BOOL  SANBTRN;  /* clause result */
A68_208 * TANBTRN_tra;
A68_206  UANBTRN;  /* united object - for case conformity */
A68_208 * VANBTRN_trb;
A68_BOOL  WANBTRN;  /* optbool result */
A68_209 * XANBTRN_tsa;
A68_206  YANBTRN;  /* united object - for case conformity */
A68_209 * ZANBTRN_tsb;
A68_BOOL  ABNBTRN;  /* optbool result */
A68_206  BBNBTRN;  /* OPERATORS - mode -> union mode */
A68_209 * CBNBTRN;  /* YIELD */
A68_206  DBNBTRN;  /* OPERATORS - mode -> union mode */
A68_209 * EBNBTRN;  /* YIELD */
A68_210 * FBNBTRN_tfa;
A68_206  GBNBTRN;  /* united object - for case conformity */
A68_210 * HBNBTRN_tfb;
A68_212 * IBNBTRN_tsra;
A68_206  JBNBTRN;  /* united object - for case conformity */
A68_212 * KBNBTRN_tsrb;
A68_BOOL  LBNBTRN;  /* optbool result */
A68_211 * MBNBTRN_tba;
A68_214 * NBNBTRN_tnla;
A68_206  OBNBTRN;  /* united object - for case conformity */
A68_214 * PBNBTRN_tnlb;
A68_213 * QBNBTRN_tav;
A68_206  RBNBTRN;  /* united object - for case conformity */
A68_213 * SBNBTRN_tbv;
A_PROC_ENTRY(=);
 /* line 225: */
 /* line 226: */
OANBTRN = A ;
switch ( OANBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
PANBTRN_tnma = (OANBTRN.data.mode1);
 /* line 227: */
QANBTRN = B ;
switch ( QANBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
RANBTRN_tnmb = (QANBTRN.data.mode1);
 /* line 228: */
SANBTRN = ((*(&(PANBTRN_tnma->Typeno)))==(*(&(RANBTRN_tnmb->Typeno))));
break;
default: 
 /* line 229: */
 /* line 230: */
SANBTRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(MODE190,MODE206)  */
TANBTRN_tra = (OANBTRN.data.mode2);
 /* line 231: */
UANBTRN = B ;
switch ( UANBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE190,MODE206)  */
VANBTRN_trb = (UANBTRN.data.mode2);
 /* line 232: */
WANBTRN = IZMBTRN_((*(&(TANBTRN_tra->Size))), (*(&(VANBTRN_trb->Size))));
if ( WANBTRN )
{ /* line 233: */
WANBTRN = NANBTRN_((*(&(TANBTRN_tra->Elem))), (*(&(VANBTRN_trb->Elem))));
}
SANBTRN = WANBTRN;
break;
default: 
 /* line 234: */
 /* line 235: */
SANBTRN = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(MODE206,REF MODE209)  */
XANBTRN_tsa = (OANBTRN.data.mode3);
 /* line 236: */
YANBTRN = B ;
switch ( YANBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE206,REF MODE209)  */
ZANBTRN_tsb = (YANBTRN.data.mode3);
 /* line 237: */
 /* line 238: */
if ( (XANBTRN_tsa==GAAATRN_niltstr) )
{ 
 /* line 239: */
SANBTRN = (ZANBTRN_tsb==GAAATRN_niltstr);
} 
else
{ 
 /* line 240: */
if ( (ZANBTRN_tsb==GAAATRN_niltstr) )
{ 
 /* line 241: */
 /* line 242: */
SANBTRN = A68_FALSE;
} 
else
{ 
 /* line 243: */
ABNBTRN = NANBTRN_((*(&(XANBTRN_tsa->Elem))), (*(&(ZANBTRN_tsb->Elem))));
if ( ABNBTRN )
{ /* line 244: */
CBNBTRN = (*(&(ZANBTRN_tsb->Rest))) ;
EBNBTRN = (*(&(XANBTRN_tsa->Rest))) ;
ABNBTRN = NANBTRN_(A_UNITE(DBNBTRN,mode3,3,EBNBTRN), A_UNITE(BBNBTRN,mode3,3,CBNBTRN));
}
 /* line 245: */
 /* line 246: */
SANBTRN = ABNBTRN;
} 
} 
break;
default: 
 /* line 247: */
 /* line 248: */
SANBTRN = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(MODE206,MODE206)  */
FBNBTRN_tfa = (OANBTRN.data.mode4);
 /* line 249: */
GBNBTRN = B ;
switch ( GBNBTRN.mode )
{ 
case 4: /* REF STRUCT(MODE206,MODE206)  */
HBNBTRN_tfb = (GBNBTRN.data.mode4);
 /* line 250: */
SANBTRN = NANBTRN_((*(&(FBNBTRN_tfa->From))), (*(&(HBNBTRN_tfb->From))));
break;
default: 
 /* line 251: */
 /* line 252: */
SANBTRN = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE190,MODE206)  */
IBNBTRN_tsra = (OANBTRN.data.mode6);
 /* line 253: */
JBNBTRN = B ;
switch ( JBNBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE190,MODE206)  */
KBNBTRN_tsrb = (JBNBTRN.data.mode6);
 /* line 254: */
LBNBTRN = IZMBTRN_((*(&(IBNBTRN_tsra->Size))), (*(&(KBNBTRN_tsrb->Size))));
if ( LBNBTRN )
{ /* line 255: */
LBNBTRN = NANBTRN_((*(&(IBNBTRN_tsra->Char))), (*(&(KBNBTRN_tsrb->Char))));
}
SANBTRN = LBNBTRN;
break;
default: 
 /* line 256: */
 /* line 257: */
SANBTRN = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(MODE206)  */
MBNBTRN_tba = (OANBTRN.data.mode5);
 /* line 258: */
 /* line 259: */
SANBTRN = NANBTRN_(B, (*(&(MBNBTRN_tba->Type))));
break;
case 9: /* REF STRUCT(INT)  */
NBNBTRN_tnla = (OANBTRN.data.mode9);
 /* line 260: */
OBNBTRN = B ;
switch ( OBNBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
PBNBTRN_tnlb = (OBNBTRN.data.mode9);
 /* line 261: */
SANBTRN = A68_TRUE;
break;
default: 
 /* line 262: */
 /* line 263: */
SANBTRN = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(INT)  */
QBNBTRN_tav = (OANBTRN.data.mode7);
 /* line 264: */
RBNBTRN = B ;
switch ( RBNBTRN.mode )
{ 
case 7: /* REF STRUCT(INT)  */
SBNBTRN_tbv = (RBNBTRN.data.mode7);
 /* line 265: */
SANBTRN = A68_TRUE;
break;
default: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
SANBTRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 269: */
SANBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( SANBTRN );
} 
#undef NL

A_STATIC A68_INT  UBNBTRN_macparam_sort(A68_271  Param)
{ 
A68_INT  VBNBTRN;  /* clause result */
A_PROC_ENTRY(macparam_sort);
VBNBTRN = (A68_INT )(A68_BITS )((A68_BITS )Param.Sort&0X1U);
A_PROC_EXIT(macparam_sort);
return( VBNBTRN );
} 
#undef NL

A_STATIC A68_386 * YBNBTRN_make_mplist(A68_305  Macspecs, A68_386 * Mp)
{ 
A68_386 * ZBNBTRN_mplist;
A68_302 * ACNBTRN_m;
A68_INT  BCNBTRN;  /* forall loop counter */
A68_386  CCNBTRN;  /* collateral clause result */
A68_386 * DCNBTRN;  /* YIELD */
A68_386 * ECNBTRN;  /* clause result */
A_PROC_ENTRY(make_mplist);
 /* line 275: */
 /* line 276: */
{ 
ZBNBTRN_mplist = Mp;
 /* line 277: */
 /* line 278: */
if ( ! A_VSTRUCTCOMP(Macspecs,FBAATRN_nilmacspecs) )
{ 
 /* line 279: */
BCNBTRN = Macspecs.upb -1;
ACNBTRN_m = Macspecs.data;
for (;BCNBTRN-- >= 0;
(ACNBTRN_m++
) )
{
CCNBTRN.Written = A68_FALSE;
CCNBTRN.Decl = (*(&(ACNBTRN_m->Spec)));
CCNBTRN.Rest = ZBNBTRN_mplist;
DCNBTRN = A_HEAP(A68_386 ) ;
(*DCNBTRN) = CCNBTRN ;
ZBNBTRN_mplist = DCNBTRN;
}
 /* line 280: */
} 
 /* line 281: */
 /* line 282: */
ECNBTRN = ZBNBTRN_mplist;
} 
A_PROC_EXIT(make_mplist);
return( ECNBTRN );
} 
#undef NL

A_STATIC A68_BOOL  HCNBTRN_equal_decl(A68_289  Da, A68_289  Db)
{ 
A68_289  ICNBTRN;  /* united object - for case conformity */
A68_194  JCNBTRN_fa;
A68_289  KCNBTRN;  /* united object - for case conformity */
A68_194  LCNBTRN_fb;
A68_BOOL  MCNBTRN;  /* clause result */
A68_207  NCNBTRN_ta;
A68_289  OCNBTRN;  /* united object - for case conformity */
A68_207  PCNBTRN_tb;
A68_222  QCNBTRN_ca;
A68_289  RCNBTRN;  /* united object - for case conformity */
A68_222  SCNBTRN_cb;
A68_259  TCNBTRN_fna;
A68_289  UCNBTRN;  /* united object - for case conformity */
A68_259  VCNBTRN_fnb;
A_PROC_ENTRY(equal_decl);
 /* line 285: */
 /* line 286: */
ICNBTRN = Da ;
switch ( ICNBTRN.mode )
{ 
case 2: /* STRUCT(INT)  */
JCNBTRN_fa = (ICNBTRN.data.mode2);
 /* line 287: */
KCNBTRN = Db ;
switch ( KCNBTRN.mode )
{ 
case 2: /* STRUCT(INT)  */
LCNBTRN_fb = (KCNBTRN.data.mode2);
MCNBTRN = (JCNBTRN_fa.Intno==LCNBTRN_fb.Intno);
break;
default: 
 /* line 288: */
MCNBTRN = A68_FALSE;
break;
} 
break;
case 3: /* STRUCT(INT)  */
NCNBTRN_ta = (ICNBTRN.data.mode3);
 /* line 289: */
OCNBTRN = Db ;
switch ( OCNBTRN.mode )
{ 
case 3: /* STRUCT(INT)  */
PCNBTRN_tb = (OCNBTRN.data.mode3);
MCNBTRN = (NCNBTRN_ta.Typeno==PCNBTRN_tb.Typeno);
break;
default: 
 /* line 290: */
MCNBTRN = A68_FALSE;
break;
} 
break;
case 4: /* STRUCT(INT)  */
QCNBTRN_ca = (ICNBTRN.data.mode4);
 /* line 291: */
RCNBTRN = Db ;
switch ( RCNBTRN.mode )
{ 
case 4: /* STRUCT(INT)  */
SCNBTRN_cb = (RCNBTRN.data.mode4);
MCNBTRN = (QCNBTRN_ca.Constno==SCNBTRN_cb.Constno);
break;
default: 
 /* line 292: */
MCNBTRN = A68_FALSE;
break;
} 
break;
case 5: /* STRUCT(INT)  */
TCNBTRN_fna = (ICNBTRN.data.mode5);
 /* line 293: */
UCNBTRN = Db ;
switch ( UCNBTRN.mode )
{ 
case 5: /* STRUCT(INT)  */
VCNBTRN_fnb = (UCNBTRN.data.mode5);
MCNBTRN = (TCNBTRN_fna.Fnno==VCNBTRN_fnb.Fnno);
break;
default: 
 /* line 294: */
MCNBTRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 295: */
MCNBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(equal_decl);
return( MCNBTRN );
} 
#undef NL
 /* line 298: */
 /* line 299: */
 /* line 300: */

A_STATIC A68_VOID  ADNBTRN_set_fnenv(A68_387 * Env, A68_304 * Fd, A68_386 * Outer_mplist, A68_307 * Dec_env)
{ 
A68_386 * BDNBTRN_mplist;
A68_387  CDNBTRN;  /* collateral clause result */
A_PROC_ENTRY(set_fnenv);
 /* line 301: */
 /* line 302: */
{ 
BDNBTRN_mplist = Outer_mplist;
 /* line 303: */
 /* line 304: */
if ( (*(&(Fd->Macro))) )
{ 
 /* line 305: */
BDNBTRN_mplist = YBNBTRN_make_mplist((*(&(Fd->Macspecs))), BDNBTRN_mplist);
} 
 /* line 307: */
CDNBTRN.Fd = Fd;
CDNBTRN.Mplist = BDNBTRN_mplist;
 /* line 308: */
CDNBTRN.Dec_env = Dec_env;
(*Env) = CDNBTRN;
} 
A_PROC_EXIT(set_fnenv);
return;
} 
#undef NL

A_STATIC A68_VOID  FDNBTRN_attrname(A68_INT  Attrno, A68_387 * Env, A68_VC  *ReturnedValue)
{ 
A68_307 * GDNBTRN_dec_env;
A68_308  HDNBTRN;  /* OPERATORS - simple index */
A68_VC  IDNBTRN_name;
A68_VC  JDNBTRN;  /* clause result */
A_PROC_ENTRY(attrname);
 /* line 311: */
 /* line 312: */
{ 
GDNBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 313: */
HDNBTRN = (*(&(GDNBTRN_dec_env->Attrs))) ;
IDNBTRN_name = (*(&((*(&A_VINDEX(HDNBTRN,Attrno)))->Attrname)));
 /* line 315: */
 /* line 316: */
JDNBTRN = IDNBTRN_name;
} 
A_PROC_EXIT(attrname);
*ReturnedValue = (JDNBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MDNBTRN_intname(A68_INT  Intno, A68_387 * Env, A68_VC  *ReturnedValue)
{ 
A68_307 * NDNBTRN_dec_env;
A68_309  ODNBTRN;  /* OPERATORS - simple index */
A68_VC  PDNBTRN_name;
A68_VC  QDNBTRN;  /* clause result */
A_PROC_ENTRY(intname);
 /* line 319: */
 /* line 320: */
{ 
NDNBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 321: */
ODNBTRN = (*(&(NDNBTRN_dec_env->Ints))) ;
PDNBTRN_name = (*(&((*(&A_VINDEX(ODNBTRN,Intno)))->Intname)));
 /* line 323: */
 /* line 324: */
QDNBTRN = PDNBTRN_name;
} 
A_PROC_EXIT(intname);
*ReturnedValue = (QDNBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TDNBTRN_typename(A68_INT  Typeno, A68_387 * Env, A68_VC  *ReturnedValue)
{ 
A68_307 * UDNBTRN_dec_env;
A68_310  VDNBTRN;  /* OPERATORS - simple index */
A68_VC  WDNBTRN_name;
A68_VC  XDNBTRN;  /* clause result */
A_PROC_ENTRY(typename);
 /* line 327: */
 /* line 328: */
{ 
UDNBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 329: */
VDNBTRN = (*(&(UDNBTRN_dec_env->Types))) ;
WDNBTRN_name = (*(&((*(&A_VINDEX(VDNBTRN,Typeno)))->Typename)));
 /* line 331: */
 /* line 332: */
XDNBTRN = WDNBTRN_name;
} 
A_PROC_EXIT(typename);
*ReturnedValue = (XDNBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AENBTRN_constname(A68_INT  Constno, A68_387 * Env, A68_VC  *ReturnedValue)
{ 
A68_307 * BENBTRN_dec_env;
A68_311  CENBTRN;  /* OPERATORS - simple index */
A68_VC  DENBTRN_name;
A68_VC  EENBTRN;  /* clause result */
A_PROC_ENTRY(constname);
 /* line 335: */
 /* line 336: */
{ 
BENBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 337: */
CENBTRN = (*(&(BENBTRN_dec_env->Consts))) ;
DENBTRN_name = (*(&((*(&A_VINDEX(CENBTRN,Constno)))->Constname)));
 /* line 339: */
 /* line 340: */
EENBTRN = DENBTRN_name;
} 
A_PROC_EXIT(constname);
*ReturnedValue = (EENBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HENBTRN_fnname(A68_INT  Fnno, A68_387 * Env, A68_VC  *ReturnedValue)
{ 
A68_307 * IENBTRN_dec_env;
A68_312  JENBTRN;  /* OPERATORS - simple index */
A68_VC  KENBTRN_name;
A68_VC  LENBTRN;  /* clause result */
A_PROC_ENTRY(fnname);
 /* line 343: */
 /* line 344: */
{ 
IENBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 345: */
JENBTRN = (*(&(IENBTRN_dec_env->Fns))) ;
KENBTRN_name = (*(&((*(&A_VINDEX(JENBTRN,Fnno)))->Fnname)));
 /* line 347: */
 /* line 348: */
LENBTRN = KENBTRN_name;
} 
A_PROC_EXIT(fnname);
*ReturnedValue = (LENBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QENBTRN_altname(A68_INT  Typeno, A68_INT  Nno, A68_387 * Env, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_307 * RENBTRN_dec_env;
A68_310  SENBTRN;  /* OPERATORS - simple index */
A68_221 * TENBTRN_td;
A68_219  UENBTRN;  /* united object - for case conformity */
A68_220  VENBTRN_alts;
A68_VC  WENBTRN;  /* clause result */
A68_216 * XENBTRN_nc;
A68_218 * YENBTRN_ni;
A68_46  BFNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CFNBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(altname);
 /* line 351: */
 /* line 352: */
{ 
RENBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 353: */
SENBTRN = (*(&(RENBTRN_dec_env->Types))) ;
TENBTRN_td = (*(&A_VINDEX(SENBTRN,Typeno)));
 /* line 355: */
 /* line 356: */
UENBTRN = (*(&(TENBTRN_td->Body))) ;
switch ( UENBTRN.mode )
{ 
case 1: /* REF VECTOR [] MODE217 */
VENBTRN_alts = (UENBTRN.data.mode1);
 /* line 357: */
WENBTRN = (*(&((&A_VINDEX(VENBTRN_alts,Nno))->Altname)));
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
XENBTRN_nc = (UENBTRN.data.mode4);
 /* line 358: */
WENBTRN = (*(&(XENBTRN_nc->Tagname)));
break;
case 2: /* REF STRUCT(REF MODE26,MODE205)  */
YENBTRN_ni = (UENBTRN.data.mode2);
 /* line 359: */
 /* line 360: */
WENBTRN = (*(&(YENBTRN_ni->Tagname)));
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(BFNBTRN,AFNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(BFNBTRN,AFNBTRN,A68_VC ),(Msg).nonlocals));
 /* line 361: */
 /* line 362: */
 /* line 363: */
WENBTRN = CFNBTRN;
break;
} 
} 
A_PROC_EXIT(altname);
*ReturnedValue = (WENBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  FFNBTRN_is_ella_char(A68_INT  Typeno, A68_387 * Env)
{ 
A68_307 * GFNBTRN_dec_env;
A68_310  HFNBTRN;  /* OPERATORS - simple index */
A68_221 * IFNBTRN_td;
A68_219  JFNBTRN;  /* united object - for case conformity */
A68_216 * KFNBTRN_nc;
A68_BOOL  LFNBTRN;  /* clause result */
A_PROC_ENTRY(is_ella_char);
 /* line 366: */
 /* line 367: */
{ 
GFNBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 368: */
HFNBTRN = (*(&(GFNBTRN_dec_env->Types))) ;
IFNBTRN_td = (*(&A_VINDEX(HFNBTRN,Typeno)));
 /* line 370: */
 /* line 371: */
JFNBTRN = (*(&(IFNBTRN_td->Body))) ;
switch ( JFNBTRN.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
KFNBTRN_nc = (JFNBTRN.data.mode4);
 /* line 372: */
LFNBTRN = A68_TRUE;
break;
default: 
 /* line 373: */
 /* line 374: */
LFNBTRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(is_ella_char);
return( LFNBTRN );
} 
#undef NL

A_STATIC A68_CHAR  QFNBTRN_find_char(A68_INT  Typeno, A68_INT  Primno, A68_387 * Env, A68_97  Msg)
{ 
A68_307 * RFNBTRN_dec_env;
A68_310  SFNBTRN;  /* OPERATORS - simple index */
A68_221 * TFNBTRN_td;
A68_219  UFNBTRN;  /* united object - for case conformity */
A68_216 * VFNBTRN_nc;
A68_CHAR  WFNBTRN;  /* clause result */
A68_VC  XFNBTRN;  /* OPERATORS - simple index */
A68_46  AGNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  BGNBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(find_char);
 /* line 377: */
 /* line 378: */
{ 
RFNBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 379: */
SFNBTRN = (*(&(RFNBTRN_dec_env->Types))) ;
TFNBTRN_td = (*(&A_VINDEX(SFNBTRN,Typeno)));
 /* line 381: */
 /* line 382: */
UFNBTRN = (*(&(TFNBTRN_td->Body))) ;
switch ( UFNBTRN.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
VFNBTRN_nc = (UFNBTRN.data.mode4);
 /* line 383: */
XFNBTRN = (*(&(VFNBTRN_nc->Chars))) ;
WFNBTRN = (*(&A_VINDEX(XFNBTRN,Primno)));
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(AGNBTRN,ZFNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(AGNBTRN,ZFNBTRN,A68_VC ),(Msg).nonlocals));
 /* line 384: */
 /* line 385: */
 /* line 386: */
WFNBTRN = BGNBTRN;
break;
} 
} 
A_PROC_EXIT(find_char);
return( WFNBTRN );
} 
#undef NL
 /* line 389: */

A_STATIC A68_VOID  GGNBTRN_make_string(A68_INT  Typeno, A68_32  Rvi, A68_387 * Env, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_307 * HGNBTRN_dec_env;
A68_310  IGNBTRN;  /* OPERATORS - simple index */
A68_221 * JGNBTRN_td;
A68_219  KGNBTRN;  /* united object - for case conformity */
A68_216 * LGNBTRN_nc;
A68_VC  MGNBTRN_chars;
A68_31  OGNBTRN_generator;   /* proc value of non-global proc */
A68_VC  UGNBTRN;  /* avoid structure result */
A68_VC  TGNBTRN_string;
A68_INT  VGNBTRN_i;
A68_INT  WGNBTRN;  /* to part of loop */
A68_INT  XGNBTRN;  /* YIELD */
A68_CHAR * YGNBTRN;  /* YIELD */
A68_VC  ZGNBTRN;  /* clause result */
A68_46  CHNBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DHNBTRN;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(make_string);
 /* line 390: */
 /* line 391: */
{ 
HGNBTRN_dec_env = (*(&(Env->Dec_env)));
 /* line 392: */
IGNBTRN = (*(&(HGNBTRN_dec_env->Types))) ;
JGNBTRN_td = (*(&A_VINDEX(IGNBTRN,Typeno)));
 /* line 394: */
 /* line 395: */
KGNBTRN = (*(&(JGNBTRN_td->Body))) ;
switch ( KGNBTRN.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
LGNBTRN_nc = (KGNBTRN.data.mode4);
 /* line 396: */
{ 
MGNBTRN_chars = (*(&(LGNBTRN_nc->Chars)));
 /* line 397: */
A_CLOSURE( OGNBTRN_generator, PGNBTRN_generator, QGNBTRN_generator );
(( QGNBTRN_generator * ) ( OGNBTRN_generator.nonlocals )) -> Rvi = Rvi;
A_CALLPROC(OGNBTRN_generator,(A68_FALSE, &UGNBTRN),(A68_FALSE, &UGNBTRN,(OGNBTRN_generator).nonlocals));
TGNBTRN_string = UGNBTRN;
 /* line 398: */
WGNBTRN = Rvi.upb;
for ( VGNBTRN_i = 1;
VGNBTRN_i <= WGNBTRN;
VGNBTRN_i += 1 )
{ 
XGNBTRN = (*(&A_VINDEX(Rvi,VGNBTRN_i))) ;
YGNBTRN = (&A_VINDEX(TGNBTRN_string,VGNBTRN_i)) ;
(*YGNBTRN) = (*(&A_VINDEX(MGNBTRN_chars,XGNBTRN)));
}
 /* line 399: */
 /* line 400: */
 /* line 401: */
ZGNBTRN = TGNBTRN_string;
} 
break;
default: 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(CHNBTRN,BHNBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(CHNBTRN,BHNBTRN,A68_VC ),(Msg).nonlocals));
 /* line 402: */
 /* line 403: */
 /* line 404: */
ZGNBTRN = A_VVAC(DHNBTRN);
break;
} 
} 
A_PROC_EXIT(make_string);
*ReturnedValue = (ZGNBTRN);
return;
} 
#undef NL
 /* line 408: */

A_STATIC A68_BOOL  GHNBTRN_mpname(A68_289  Decl, A68_387 * Env)
{ 
A68_386 * HHNBTRN_mplist;
A68_BOOL  IHNBTRN_found;
A68_BOOL  JHNBTRN_written;
A68_BOOL  KHNBTRN;  /* optbool result */
A68_BOOL * LHNBTRN;  /* YIELD */
A68_BOOL  MHNBTRN;  /* clause result */
A_PROC_ENTRY(mpname);
 /* line 409: */
 /* line 410: */
{ 
HHNBTRN_mplist = (*(&(Env->Mplist)));
 /* line 411: */
IHNBTRN_found = A68_FALSE;
 /* line 412: */
JHNBTRN_written = A68_FALSE;
 /* line 414: */
for ( ;; )
{ 
KHNBTRN = !IHNBTRN_found;
if ( KHNBTRN )
{ /* line 415: */
KHNBTRN = (HHNBTRN_mplist!=EPMBTRN_nilmplist);
}
if ( !(KHNBTRN) ) break;
 /* line 416: */
if ( HCNBTRN_equal_decl(Decl, (*(&(HHNBTRN_mplist->Decl)))) )
{ 
IHNBTRN_found = A68_TRUE;
 /* line 417: */
JHNBTRN_written = (*(&(HHNBTRN_mplist->Written)));
 /* line 418: */
if ( !JHNBTRN_written )
{ 
 /* line 419: */
LHNBTRN = (&(HHNBTRN_mplist->Written)) ;
(*LHNBTRN) = A68_TRUE;
} 
} 
 /* line 420: */
 /* line 421: */
HHNBTRN_mplist = (*(&(HHNBTRN_mplist->Rest)));
}
 /* line 423: */
 /* line 424: */
MHNBTRN = JHNBTRN_written;
} 
A_PROC_EXIT(mpname);
return( MHNBTRN );
} 
#undef NL

A_STATIC A68_BOOL  RHNBTRN_has_typebody(A68_221 * Tdec)
{ 
A68_219  SHNBTRN;  /* united object - for case conformity */
A68_215 * THNBTRN_tg;
A68_206  UHNBTRN;  /* united object - for case conformity */
A68_BOOL  VHNBTRN;  /* clause result */
A_PROC_ENTRY(has_typebody);
 /* line 429: */
 /* line 430: */
SHNBTRN = (*(&(Tdec->Body))) ;
switch ( SHNBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE206)  */
THNBTRN_tg = (SHNBTRN.data.mode3);
UHNBTRN = (*(&(THNBTRN_tg->Tag))) ;
switch ( UHNBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
VHNBTRN = A68_FALSE;
break;
default: 
 /* line 431: */
VHNBTRN = A68_TRUE;
break;
} 
break;
default: 
 /* line 432: */
VHNBTRN = A68_TRUE;
break;
} 
A_PROC_EXIT(has_typebody);
return( VHNBTRN );
} 
#undef NL

A68_VOID  WHNBTRN_write_no_comma_lists(A68_173  *ReturnedValue)
{ 
A68_173  XHNBTRN;  /* clause result */
A68_173  YHNBTRN;  /* avoid structure result */
A_PROC_ENTRY(write_no_comma_lists);
FCAAOST_makeoptions( 1, &YHNBTRN );
XHNBTRN = YHNBTRN;
A_PROC_EXIT(write_no_comma_lists);
*ReturnedValue = (XHNBTRN);
return;
} 
#undef NL

A68_VOID  ZHNBTRN_write_expand_char_decs(A68_173  *ReturnedValue)
{ 
A68_173  AINBTRN;  /* clause result */
A68_173  BINBTRN;  /* avoid structure result */
A_PROC_ENTRY(write_expand_char_decs);
FCAAOST_makeoptions( 2, &BINBTRN );
AINBTRN = BINBTRN;
A_PROC_EXIT(write_expand_char_decs);
*ReturnedValue = (AINBTRN);
return;
} 
#undef NL

A68_VOID  CINBTRN_write_expand_delays(A68_173  *ReturnedValue)
{ 
A68_173  DINBTRN;  /* clause result */
A68_173  EINBTRN;  /* avoid structure result */
A_PROC_ENTRY(write_expand_delays);
FCAAOST_makeoptions( 3, &EINBTRN );
DINBTRN = EINBTRN;
A_PROC_EXIT(write_expand_delays);
*ReturnedValue = (DINBTRN);
return;
} 
#undef NL
 /* line 445: */
 /* line 446: */
 /* line 447: */
 /* line 448: */

A68_VOID  TINBTRN_write_ella(A68_313  Dec, A68_36  Write_text, A68_114  Set_ind, A68_173  Options, A68_97  Msg)
{ 
A68_173  UINBTRN;  /* avoid structure result */
A68_BOOL  VINBTRN_no_comma_lists;
A68_173  WINBTRN;  /* avoid structure result */
A68_BOOL  XINBTRN_expand_char_decs;
A68_173  YINBTRN;  /* avoid structure result */
A68_BOOL  ZINBTRN_expand_delays;
A68_416  DJNBTRN_write_string;   /* proc value of non-global proc */
A68_417  HKNBTRN_write_strings;   /* proc value of non-global proc */
A68_418  OKNBTRN_write_basicattr;   /* proc value of non-global proc */
A68_419  GLNBTRN_write_attr;   /* proc value of non-global proc */
A68_420  OLNBTRN_write_nameitem;   /* proc value of non-global proc */
A68_421  ULNBTRN_write_formula;   /* proc value of non-global proc */
A68_424  WNNBTRN_write_range;   /* proc value of non-global proc */
A68_421  CONBTRN_write_index;   /* proc value of non-global proc */
A68_425  KONBTRN_write_indexes;   /* proc value of non-global proc */
A68_426  OONBTRN_write_typebody;
A68_427  SONBTRN_write_type;   /* proc value of non-global proc */
A68_432  CQNBTRN_write_instance;
A68_433  MQNBTRN_write_macparams;   /* proc value of non-global proc */
A68_432  IRNBTRN_anonymous;   /* proc value of non-global proc */
A68_421  YRNBTRN_write_replicator;   /* proc value of non-global proc */
A68_436  ZSNBTRN_write_keyword;   /* proc value of non-global proc */
A68_437  HTNBTRN_write_listkeyword;   /* proc value of non-global proc */
A68_438  STNBTRN_write_attrdec;   /* proc value of non-global proc */
A68_439  BUNBTRN_write_intdec;   /* proc value of non-global proc */
A68_426  NUNBTRN_anonymous;   /* proc value of non-global proc */
A68_444  NWNBTRN_write_typedec;   /* proc value of non-global proc */
A68_445  XWNBTRN_write_constdec;   /* proc value of non-global proc */
A68_446  DXNBTRN_write_terminals;   /* proc value of non-global proc */
A68_447  WXNBTRN_write_macspecs;
A68_448  DYNBTRN_write_fndecspec;   /* proc value of non-global proc */
A68_449  NYNBTRN_write_mpvalue;   /* proc value of non-global proc */
A68_449  NAOBTRN_write_specvalue;   /* proc value of non-global proc */
A68_447  UBOBTRN_anonymous;   /* proc value of non-global proc */
A68_454  GDOBTRN_write_fnbody;   /* proc value of non-global proc */
A68_455  KEOBTRN_write_fndec;   /* proc value of non-global proc */
A68_456  XEOBTRN_write_declaration;   /* proc value of non-global proc */
A68_458  EGOBTRN_write_printitem;   /* proc value of non-global proc */
A68_460  XGOBTRN_write_print;   /* proc value of non-global proc */
A68_461  FHOBTRN_write_fault;   /* proc value of non-global proc */
A68_462  NHOBTRN_write_letnames;   /* proc value of non-global proc */
A68_463  GIOBTRN_write_let;   /* proc value of non-global proc */
A68_464  OIOBTRN_write_make;   /* proc value of non-global proc */
A68_465  BJOBTRN_do_write_join;   /* proc value of non-global proc */
A68_466  JJOBTRN_write_join;   /* proc value of non-global proc */
A68_467  RJOBTRN_write_repljoin;   /* proc value of non-global proc */
A68_468  AKOBTRN_write_series;   /* proc value of non-global proc */
A68_469  UKOBTRN_write_sequence;   /* proc value of non-global proc */
A68_431  HMOBTRN_write_unit;   /* proc value of non-global proc */
A68_INT  RPOBTRN_keyword_ind;
A68_46  UPOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_387  VPOBTRN;  /* collateral clause result */
A68_BOOL  WPOBTRN;  /* clause result */
A68_387  XPOBTRN_env;
A68_307 ** YPOBTRN;  /* YIELD */
A68_304 * ZPOBTRN_fd;
A68_46  CQOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(write_ella);
 /* line 449: */
 /* line 450: */
{ 
WHNBTRN_write_no_comma_lists(  &UINBTRN );
VINBTRN_no_comma_lists = MBAAOST_includes(Options, UINBTRN);
 /* line 451: */
ZHNBTRN_write_expand_char_decs(  &WINBTRN );
XINBTRN_expand_char_decs = MBAAOST_includes(Options, WINBTRN);
 /* line 452: */
CINBTRN_write_expand_delays(  &YINBTRN );
ZINBTRN_expand_delays = MBAAOST_includes(Options, YINBTRN);
 /* line 454: */
A_CLOSURE( DJNBTRN_write_string, EJNBTRN_write_string, FJNBTRN_write_string );
(( FJNBTRN_write_string * ) ( DJNBTRN_write_string.nonlocals )) -> Write_text = Write_text;
 /* line 480: */
A_CLOSURE( HKNBTRN_write_strings, IKNBTRN_write_strings, JKNBTRN_write_strings );
(( JKNBTRN_write_strings * ) ( HKNBTRN_write_strings.nonlocals )) -> DJNBTRN_write_string = DJNBTRN_write_string;
(( JKNBTRN_write_strings * ) ( HKNBTRN_write_strings.nonlocals )) -> Set_ind = Set_ind;
 /* line 490: */
A_CLOSURE( OKNBTRN_write_basicattr, PKNBTRN_write_basicattr, QKNBTRN_write_basicattr );
(( QKNBTRN_write_basicattr * ) ( OKNBTRN_write_basicattr.nonlocals )) -> Set_ind = Set_ind;
(( QKNBTRN_write_basicattr * ) ( OKNBTRN_write_basicattr.nonlocals )) -> Write_text = Write_text;
(( QKNBTRN_write_basicattr * ) ( OKNBTRN_write_basicattr.nonlocals )) -> HKNBTRN_write_strings = HKNBTRN_write_strings;
(( QKNBTRN_write_basicattr * ) ( OKNBTRN_write_basicattr.nonlocals )) -> OKNBTRN_write_basicattr = OKNBTRN_write_basicattr;
 /* line 541: */
A_CLOSURE( GLNBTRN_write_attr, HLNBTRN_write_attr, ILNBTRN_write_attr );
(( ILNBTRN_write_attr * ) ( GLNBTRN_write_attr.nonlocals )) -> Write_text = Write_text;
(( ILNBTRN_write_attr * ) ( GLNBTRN_write_attr.nonlocals )) -> Set_ind = Set_ind;
(( ILNBTRN_write_attr * ) ( GLNBTRN_write_attr.nonlocals )) -> OKNBTRN_write_basicattr = OKNBTRN_write_basicattr;
 /* line 555: */
A_CLOSURE( OLNBTRN_write_nameitem, PLNBTRN_write_nameitem, QLNBTRN_write_nameitem );
(( QLNBTRN_write_nameitem * ) ( OLNBTRN_write_nameitem.nonlocals )) -> Write_text = Write_text;
(( QLNBTRN_write_nameitem * ) ( OLNBTRN_write_nameitem.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
 /* line 566: */
A_CLOSURE( ULNBTRN_write_formula, VLNBTRN_write_formula, WLNBTRN_write_formula );
(( WLNBTRN_write_formula * ) ( ULNBTRN_write_formula.nonlocals )) -> Set_ind = Set_ind;
(( WLNBTRN_write_formula * ) ( ULNBTRN_write_formula.nonlocals )) -> XINBTRN_expand_char_decs = XINBTRN_expand_char_decs;
(( WLNBTRN_write_formula * ) ( ULNBTRN_write_formula.nonlocals )) -> Write_text = Write_text;
(( WLNBTRN_write_formula * ) ( ULNBTRN_write_formula.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( WLNBTRN_write_formula * ) ( ULNBTRN_write_formula.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
 /* line 676: */
A_CLOSURE( WNNBTRN_write_range, XNNBTRN_write_range, YNNBTRN_write_range );
(( YNNBTRN_write_range * ) ( WNNBTRN_write_range.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( YNNBTRN_write_range * ) ( WNNBTRN_write_range.nonlocals )) -> Set_ind = Set_ind;
(( YNNBTRN_write_range * ) ( WNNBTRN_write_range.nonlocals )) -> Write_text = Write_text;
 /* line 685: */
A_CLOSURE( CONBTRN_write_index, DONBTRN_write_index, EONBTRN_write_index );
(( EONBTRN_write_index * ) ( CONBTRN_write_index.nonlocals )) -> Write_text = Write_text;
(( EONBTRN_write_index * ) ( CONBTRN_write_index.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
 /* line 696: */
A_CLOSURE( KONBTRN_write_indexes, LONBTRN_write_indexes, MONBTRN_write_indexes );
(( MONBTRN_write_indexes * ) ( KONBTRN_write_indexes.nonlocals )) -> Set_ind = Set_ind;
(( MONBTRN_write_indexes * ) ( KONBTRN_write_indexes.nonlocals )) -> CONBTRN_write_index = CONBTRN_write_index;
 /* line 712: */
 /* line 714: */
A_CLOSURE( SONBTRN_write_type, TONBTRN_write_type, UONBTRN_write_type );
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> Set_ind = Set_ind;
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> Write_text = Write_text;
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> OONBTRN_write_typebody = (&OONBTRN_write_typebody);
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> CONBTRN_write_index = CONBTRN_write_index;
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( UONBTRN_write_type * ) ( SONBTRN_write_type.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
 /* line 803: */
 /* line 804: */
 /* line 826: */
 /* line 827: */
 /* line 829: */
A_CLOSURE( MQNBTRN_write_macparams, NQNBTRN_write_macparams, OQNBTRN_write_macparams );
(( OQNBTRN_write_macparams * ) ( MQNBTRN_write_macparams.nonlocals )) -> Set_ind = Set_ind;
(( OQNBTRN_write_macparams * ) ( MQNBTRN_write_macparams.nonlocals )) -> Write_text = Write_text;
(( OQNBTRN_write_macparams * ) ( MQNBTRN_write_macparams.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
(( OQNBTRN_write_macparams * ) ( MQNBTRN_write_macparams.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( OQNBTRN_write_macparams * ) ( MQNBTRN_write_macparams.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( OQNBTRN_write_macparams * ) ( MQNBTRN_write_macparams.nonlocals )) -> CQNBTRN_write_instance = (&CQNBTRN_write_instance);
 /* line 869: */
 /* line 870: */
A_CLOSURE( IRNBTRN_anonymous, JRNBTRN_anonymous, KRNBTRN_anonymous );
(( KRNBTRN_anonymous * ) ( IRNBTRN_anonymous.nonlocals )) -> Set_ind = Set_ind;
(( KRNBTRN_anonymous * ) ( IRNBTRN_anonymous.nonlocals )) -> Write_text = Write_text;
(( KRNBTRN_anonymous * ) ( IRNBTRN_anonymous.nonlocals )) -> MQNBTRN_write_macparams = MQNBTRN_write_macparams;
(( KRNBTRN_anonymous * ) ( IRNBTRN_anonymous.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
CQNBTRN_write_instance = IRNBTRN_anonymous;
 /* line 893: */
A_CLOSURE( YRNBTRN_write_replicator, ZRNBTRN_write_replicator, ASNBTRN_write_replicator );
(( ASNBTRN_write_replicator * ) ( YRNBTRN_write_replicator.nonlocals )) -> Set_ind = Set_ind;
(( ASNBTRN_write_replicator * ) ( YRNBTRN_write_replicator.nonlocals )) -> Write_text = Write_text;
(( ASNBTRN_write_replicator * ) ( YRNBTRN_write_replicator.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( ASNBTRN_write_replicator * ) ( YRNBTRN_write_replicator.nonlocals )) -> WNNBTRN_write_range = WNNBTRN_write_range;
 /* line 919: */
A_CLOSURE( ZSNBTRN_write_keyword, ATNBTRN_write_keyword, BTNBTRN_write_keyword );
(( BTNBTRN_write_keyword * ) ( ZSNBTRN_write_keyword.nonlocals )) -> VINBTRN_no_comma_lists = VINBTRN_no_comma_lists;
(( BTNBTRN_write_keyword * ) ( ZSNBTRN_write_keyword.nonlocals )) -> Write_text = Write_text;
(( BTNBTRN_write_keyword * ) ( ZSNBTRN_write_keyword.nonlocals )) -> Set_ind = Set_ind;
 /* line 943: */
A_CLOSURE( HTNBTRN_write_listkeyword, ITNBTRN_write_listkeyword, JTNBTRN_write_listkeyword );
(( JTNBTRN_write_listkeyword * ) ( HTNBTRN_write_listkeyword.nonlocals )) -> VINBTRN_no_comma_lists = VINBTRN_no_comma_lists;
(( JTNBTRN_write_listkeyword * ) ( HTNBTRN_write_listkeyword.nonlocals )) -> Set_ind = Set_ind;
(( JTNBTRN_write_listkeyword * ) ( HTNBTRN_write_listkeyword.nonlocals )) -> Write_text = Write_text;
 /* line 962: */
A_CLOSURE( STNBTRN_write_attrdec, TTNBTRN_write_attrdec, UTNBTRN_write_attrdec );
(( UTNBTRN_write_attrdec * ) ( STNBTRN_write_attrdec.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( UTNBTRN_write_attrdec * ) ( STNBTRN_write_attrdec.nonlocals )) -> Set_ind = Set_ind;
(( UTNBTRN_write_attrdec * ) ( STNBTRN_write_attrdec.nonlocals )) -> Write_text = Write_text;
(( UTNBTRN_write_attrdec * ) ( STNBTRN_write_attrdec.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
 /* line 977: */
A_CLOSURE( BUNBTRN_write_intdec, CUNBTRN_write_intdec, DUNBTRN_write_intdec );
(( DUNBTRN_write_intdec * ) ( BUNBTRN_write_intdec.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( DUNBTRN_write_intdec * ) ( BUNBTRN_write_intdec.nonlocals )) -> Set_ind = Set_ind;
(( DUNBTRN_write_intdec * ) ( BUNBTRN_write_intdec.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( DUNBTRN_write_intdec * ) ( BUNBTRN_write_intdec.nonlocals )) -> Write_text = Write_text;
(( DUNBTRN_write_intdec * ) ( BUNBTRN_write_intdec.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( DUNBTRN_write_intdec * ) ( BUNBTRN_write_intdec.nonlocals )) -> WNNBTRN_write_range = WNNBTRN_write_range;
 /* line 996: */
A_CLOSURE( NUNBTRN_anonymous, OUNBTRN_anonymous, PUNBTRN_anonymous );
(( PUNBTRN_anonymous * ) ( NUNBTRN_anonymous.nonlocals )) -> Set_ind = Set_ind;
(( PUNBTRN_anonymous * ) ( NUNBTRN_anonymous.nonlocals )) -> Write_text = Write_text;
(( PUNBTRN_anonymous * ) ( NUNBTRN_anonymous.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( PUNBTRN_anonymous * ) ( NUNBTRN_anonymous.nonlocals )) -> WNNBTRN_write_range = WNNBTRN_write_range;
(( PUNBTRN_anonymous * ) ( NUNBTRN_anonymous.nonlocals )) -> XINBTRN_expand_char_decs = XINBTRN_expand_char_decs;
OONBTRN_write_typebody = NUNBTRN_anonymous;
 /* line 1126: */
A_CLOSURE( NWNBTRN_write_typedec, OWNBTRN_write_typedec, PWNBTRN_write_typedec );
(( PWNBTRN_write_typedec * ) ( NWNBTRN_write_typedec.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( PWNBTRN_write_typedec * ) ( NWNBTRN_write_typedec.nonlocals )) -> Set_ind = Set_ind;
(( PWNBTRN_write_typedec * ) ( NWNBTRN_write_typedec.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( PWNBTRN_write_typedec * ) ( NWNBTRN_write_typedec.nonlocals )) -> Write_text = Write_text;
(( PWNBTRN_write_typedec * ) ( NWNBTRN_write_typedec.nonlocals )) -> OONBTRN_write_typebody = (&OONBTRN_write_typebody);
 /* line 1141: */
A_CLOSURE( XWNBTRN_write_constdec, YWNBTRN_write_constdec, ZWNBTRN_write_constdec );
(( ZWNBTRN_write_constdec * ) ( XWNBTRN_write_constdec.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( ZWNBTRN_write_constdec * ) ( XWNBTRN_write_constdec.nonlocals )) -> Set_ind = Set_ind;
(( ZWNBTRN_write_constdec * ) ( XWNBTRN_write_constdec.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( ZWNBTRN_write_constdec * ) ( XWNBTRN_write_constdec.nonlocals )) -> Write_text = Write_text;
 /* line 1157: */
A_CLOSURE( DXNBTRN_write_terminals, EXNBTRN_write_terminals, FXNBTRN_write_terminals );
(( FXNBTRN_write_terminals * ) ( DXNBTRN_write_terminals.nonlocals )) -> VINBTRN_no_comma_lists = VINBTRN_no_comma_lists;
(( FXNBTRN_write_terminals * ) ( DXNBTRN_write_terminals.nonlocals )) -> Set_ind = Set_ind;
(( FXNBTRN_write_terminals * ) ( DXNBTRN_write_terminals.nonlocals )) -> Write_text = Write_text;
(( FXNBTRN_write_terminals * ) ( DXNBTRN_write_terminals.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( FXNBTRN_write_terminals * ) ( DXNBTRN_write_terminals.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( FXNBTRN_write_terminals * ) ( DXNBTRN_write_terminals.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
 /* line 1220: */
 /* line 1222: */
 /* line 1224: */
A_CLOSURE( DYNBTRN_write_fndecspec, EYNBTRN_write_fndecspec, FYNBTRN_write_fndecspec );
(( FYNBTRN_write_fndecspec * ) ( DYNBTRN_write_fndecspec.nonlocals )) -> Set_ind = Set_ind;
(( FYNBTRN_write_fndecspec * ) ( DYNBTRN_write_fndecspec.nonlocals )) -> Write_text = Write_text;
(( FYNBTRN_write_fndecspec * ) ( DYNBTRN_write_fndecspec.nonlocals )) -> WXNBTRN_write_macspecs = (&WXNBTRN_write_macspecs);
(( FYNBTRN_write_fndecspec * ) ( DYNBTRN_write_fndecspec.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
(( FYNBTRN_write_fndecspec * ) ( DYNBTRN_write_fndecspec.nonlocals )) -> DXNBTRN_write_terminals = DXNBTRN_write_terminals;
 /* line 1256: */
A_CLOSURE( NYNBTRN_write_mpvalue, OYNBTRN_write_mpvalue, PYNBTRN_write_mpvalue );
(( PYNBTRN_write_mpvalue * ) ( NYNBTRN_write_mpvalue.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
(( PYNBTRN_write_mpvalue * ) ( NYNBTRN_write_mpvalue.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( PYNBTRN_write_mpvalue * ) ( NYNBTRN_write_mpvalue.nonlocals )) -> WNNBTRN_write_range = WNNBTRN_write_range;
(( PYNBTRN_write_mpvalue * ) ( NYNBTRN_write_mpvalue.nonlocals )) -> Write_text = Write_text;
(( PYNBTRN_write_mpvalue * ) ( NYNBTRN_write_mpvalue.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( PYNBTRN_write_mpvalue * ) ( NYNBTRN_write_mpvalue.nonlocals )) -> CQNBTRN_write_instance = (&CQNBTRN_write_instance);
 /* line 1302: */
A_CLOSURE( NAOBTRN_write_specvalue, OAOBTRN_write_specvalue, PAOBTRN_write_specvalue );
(( PAOBTRN_write_specvalue * ) ( NAOBTRN_write_specvalue.nonlocals )) -> Write_text = Write_text;
(( PAOBTRN_write_specvalue * ) ( NAOBTRN_write_specvalue.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
(( PAOBTRN_write_specvalue * ) ( NAOBTRN_write_specvalue.nonlocals )) -> OONBTRN_write_typebody = (&OONBTRN_write_typebody);
(( PAOBTRN_write_specvalue * ) ( NAOBTRN_write_specvalue.nonlocals )) -> DYNBTRN_write_fndecspec = DYNBTRN_write_fndecspec;
(( PAOBTRN_write_specvalue * ) ( NAOBTRN_write_specvalue.nonlocals )) -> Set_ind = Set_ind;
 /* line 1339: */
 /* line 1340: */
A_CLOSURE( UBOBTRN_anonymous, VBOBTRN_anonymous, WBOBTRN_anonymous );
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> HTNBTRN_write_listkeyword = HTNBTRN_write_listkeyword;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> Set_ind = Set_ind;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> VINBTRN_no_comma_lists = VINBTRN_no_comma_lists;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> Msg = Msg;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> Write_text = Write_text;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> NYNBTRN_write_mpvalue = NYNBTRN_write_mpvalue;
(( WBOBTRN_anonymous * ) ( UBOBTRN_anonymous.nonlocals )) -> NAOBTRN_write_specvalue = NAOBTRN_write_specvalue;
WXNBTRN_write_macspecs = UBOBTRN_anonymous;
 /* line 1435: */
A_CLOSURE( GDOBTRN_write_fnbody, HDOBTRN_write_fnbody, IDOBTRN_write_fnbody );
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> Set_ind = Set_ind;
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> Write_text = Write_text;
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> MQNBTRN_write_macparams = MQNBTRN_write_macparams;
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> ZINBTRN_expand_delays = ZINBTRN_expand_delays;
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> CQNBTRN_write_instance = (&CQNBTRN_write_instance);
(( IDOBTRN_write_fnbody * ) ( GDOBTRN_write_fnbody.nonlocals )) -> GDOBTRN_write_fnbody = GDOBTRN_write_fnbody;
 /* line 1564: */
A_CLOSURE( KEOBTRN_write_fndec, LEOBTRN_write_fndec, MEOBTRN_write_fndec );
(( MEOBTRN_write_fndec * ) ( KEOBTRN_write_fndec.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( MEOBTRN_write_fndec * ) ( KEOBTRN_write_fndec.nonlocals )) -> DYNBTRN_write_fndecspec = DYNBTRN_write_fndecspec;
(( MEOBTRN_write_fndec * ) ( KEOBTRN_write_fndec.nonlocals )) -> Write_text = Write_text;
(( MEOBTRN_write_fndec * ) ( KEOBTRN_write_fndec.nonlocals )) -> Set_ind = Set_ind;
(( MEOBTRN_write_fndec * ) ( KEOBTRN_write_fndec.nonlocals )) -> GDOBTRN_write_fnbody = GDOBTRN_write_fnbody;
 /* line 1585: */
A_CLOSURE( XEOBTRN_write_declaration, YEOBTRN_write_declaration, ZEOBTRN_write_declaration );
(( ZEOBTRN_write_declaration * ) ( XEOBTRN_write_declaration.nonlocals )) -> STNBTRN_write_attrdec = STNBTRN_write_attrdec;
(( ZEOBTRN_write_declaration * ) ( XEOBTRN_write_declaration.nonlocals )) -> BUNBTRN_write_intdec = BUNBTRN_write_intdec;
(( ZEOBTRN_write_declaration * ) ( XEOBTRN_write_declaration.nonlocals )) -> NWNBTRN_write_typedec = NWNBTRN_write_typedec;
(( ZEOBTRN_write_declaration * ) ( XEOBTRN_write_declaration.nonlocals )) -> XWNBTRN_write_constdec = XWNBTRN_write_constdec;
(( ZEOBTRN_write_declaration * ) ( XEOBTRN_write_declaration.nonlocals )) -> KEOBTRN_write_fndec = KEOBTRN_write_fndec;
 /* line 1628: */
A_CLOSURE( EGOBTRN_write_printitem, FGOBTRN_write_printitem, GGOBTRN_write_printitem );
(( GGOBTRN_write_printitem * ) ( EGOBTRN_write_printitem.nonlocals )) -> Set_ind = Set_ind;
(( GGOBTRN_write_printitem * ) ( EGOBTRN_write_printitem.nonlocals )) -> Write_text = Write_text;
(( GGOBTRN_write_printitem * ) ( EGOBTRN_write_printitem.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( GGOBTRN_write_printitem * ) ( EGOBTRN_write_printitem.nonlocals )) -> DJNBTRN_write_string = DJNBTRN_write_string;
 /* line 1666: */
A_CLOSURE( XGOBTRN_write_print, YGOBTRN_write_print, ZGOBTRN_write_print );
(( ZGOBTRN_write_print * ) ( XGOBTRN_write_print.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( ZGOBTRN_write_print * ) ( XGOBTRN_write_print.nonlocals )) -> EGOBTRN_write_printitem = EGOBTRN_write_printitem;
 /* line 1676: */
A_CLOSURE( FHOBTRN_write_fault, GHOBTRN_write_fault, HHOBTRN_write_fault );
(( HHOBTRN_write_fault * ) ( FHOBTRN_write_fault.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( HHOBTRN_write_fault * ) ( FHOBTRN_write_fault.nonlocals )) -> EGOBTRN_write_printitem = EGOBTRN_write_printitem;
 /* line 1686: */
A_CLOSURE( NHOBTRN_write_letnames, OHOBTRN_write_letnames, PHOBTRN_write_letnames );
(( PHOBTRN_write_letnames * ) ( NHOBTRN_write_letnames.nonlocals )) -> Set_ind = Set_ind;
(( PHOBTRN_write_letnames * ) ( NHOBTRN_write_letnames.nonlocals )) -> Write_text = Write_text;
(( PHOBTRN_write_letnames * ) ( NHOBTRN_write_letnames.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
 /* line 1721: */
A_CLOSURE( GIOBTRN_write_let, HIOBTRN_write_let, IIOBTRN_write_let );
(( IIOBTRN_write_let * ) ( GIOBTRN_write_let.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( IIOBTRN_write_let * ) ( GIOBTRN_write_let.nonlocals )) -> NHOBTRN_write_letnames = NHOBTRN_write_letnames;
(( IIOBTRN_write_let * ) ( GIOBTRN_write_let.nonlocals )) -> Write_text = Write_text;
 /* line 1735: */
A_CLOSURE( OIOBTRN_write_make, PIOBTRN_write_make, QIOBTRN_write_make );
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> KONBTRN_write_indexes = KONBTRN_write_indexes;
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> Set_ind = Set_ind;
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> CQNBTRN_write_instance = (&CQNBTRN_write_instance);
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> Write_text = Write_text;
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> VINBTRN_no_comma_lists = VINBTRN_no_comma_lists;
(( QIOBTRN_write_make * ) ( OIOBTRN_write_make.nonlocals )) -> OLNBTRN_write_nameitem = OLNBTRN_write_nameitem;
 /* line 1766: */
A_CLOSURE( BJOBTRN_do_write_join, CJOBTRN_do_write_join, DJOBTRN_do_write_join );
(( DJOBTRN_do_write_join * ) ( BJOBTRN_do_write_join.nonlocals )) -> Set_ind = Set_ind;
(( DJOBTRN_do_write_join * ) ( BJOBTRN_do_write_join.nonlocals )) -> Write_text = Write_text;
 /* line 1780: */
A_CLOSURE( JJOBTRN_write_join, KJOBTRN_write_join, LJOBTRN_write_join );
(( LJOBTRN_write_join * ) ( JJOBTRN_write_join.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( LJOBTRN_write_join * ) ( JJOBTRN_write_join.nonlocals )) -> BJOBTRN_do_write_join = BJOBTRN_do_write_join;
 /* line 1790: */
A_CLOSURE( RJOBTRN_write_repljoin, SJOBTRN_write_repljoin, TJOBTRN_write_repljoin );
(( TJOBTRN_write_repljoin * ) ( RJOBTRN_write_repljoin.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( TJOBTRN_write_repljoin * ) ( RJOBTRN_write_repljoin.nonlocals )) -> YRNBTRN_write_replicator = YRNBTRN_write_replicator;
(( TJOBTRN_write_repljoin * ) ( RJOBTRN_write_repljoin.nonlocals )) -> Set_ind = Set_ind;
(( TJOBTRN_write_repljoin * ) ( RJOBTRN_write_repljoin.nonlocals )) -> Write_text = Write_text;
(( TJOBTRN_write_repljoin * ) ( RJOBTRN_write_repljoin.nonlocals )) -> BJOBTRN_do_write_join = BJOBTRN_do_write_join;
 /* line 1820: */
A_CLOSURE( AKOBTRN_write_series, BKOBTRN_write_series, CKOBTRN_write_series );
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> XEOBTRN_write_declaration = XEOBTRN_write_declaration;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> XGOBTRN_write_print = XGOBTRN_write_print;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> FHOBTRN_write_fault = FHOBTRN_write_fault;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> GIOBTRN_write_let = GIOBTRN_write_let;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> OIOBTRN_write_make = OIOBTRN_write_make;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> JJOBTRN_write_join = JJOBTRN_write_join;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> RJOBTRN_write_repljoin = RJOBTRN_write_repljoin;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> Write_text = Write_text;
(( CKOBTRN_write_series * ) ( AKOBTRN_write_series.nonlocals )) -> Set_ind = Set_ind;
 /* line 1853: */
A_CLOSURE( UKOBTRN_write_sequence, VKOBTRN_write_sequence, WKOBTRN_write_sequence );
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> Set_ind = Set_ind;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> Write_text = Write_text;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> ZINBTRN_expand_delays = ZINBTRN_expand_delays;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> YRNBTRN_write_replicator = YRNBTRN_write_replicator;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> XEOBTRN_write_declaration = XEOBTRN_write_declaration;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> XGOBTRN_write_print = XGOBTRN_write_print;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> FHOBTRN_write_fault = FHOBTRN_write_fault;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> GIOBTRN_write_let = GIOBTRN_write_let;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> ZSNBTRN_write_keyword = ZSNBTRN_write_keyword;
(( WKOBTRN_write_sequence * ) ( UKOBTRN_write_sequence.nonlocals )) -> NHOBTRN_write_letnames = NHOBTRN_write_letnames;
 /* line 2021: */
A_CLOSURE( HMOBTRN_write_unit, IMOBTRN_write_unit, JMOBTRN_write_unit );
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> Set_ind = Set_ind;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> Write_text = Write_text;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> HMOBTRN_write_unit = HMOBTRN_write_unit;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> SONBTRN_write_type = SONBTRN_write_type;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> ULNBTRN_write_formula = ULNBTRN_write_formula;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> WNNBTRN_write_range = WNNBTRN_write_range;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> DJNBTRN_write_string = DJNBTRN_write_string;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> CONBTRN_write_index = CONBTRN_write_index;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> CQNBTRN_write_instance = (&CQNBTRN_write_instance);
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> ZINBTRN_expand_delays = ZINBTRN_expand_delays;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> YRNBTRN_write_replicator = YRNBTRN_write_replicator;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> UKOBTRN_write_sequence = UKOBTRN_write_sequence;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> AKOBTRN_write_series = AKOBTRN_write_series;
(( JMOBTRN_write_unit * ) ( HMOBTRN_write_unit.nonlocals )) -> GLNBTRN_write_attr = GLNBTRN_write_attr;
 /* line 2385: */
RPOBTRN_keyword_ind = 0;
 /* line 2387: */
 /* line 2388: */
if ( (MPMBTRN_write_version_no!=WKAATRN_assembler_version_no) )
{ 
 /* line 2389: */
A_CALLPROC(Msg,(UHAAOSI_fatal, A_HVEC(UPOBTRN,TPOBTRN,A68_VC )),(UHAAOSI_fatal, A_HVEC(UPOBTRN,TPOBTRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 2390: */
VPOBTRN.Fd = YAAATRN_nilfndec;
VPOBTRN.Mplist = EPMBTRN_nilmplist;
VPOBTRN.Dec_env = (A68_307 *)A68_NIL;
LPMBTRN_nullrgenv = VPOBTRN;
 /* line 2391: */
 /* line 2392: */
switch ( Dec.Sort )
{ 
case 1: 
 /* line 2393: */
WPOBTRN = (APMATRN_get_outerattr(Dec)!=UAAATRN_nilattrdec);
break;
case 2: 
 /* line 2394: */
WPOBTRN = (HPMATRN_get_outerint(Dec)!=VAAATRN_nilintdec);
break;
case 3: 
 /* line 2395: */
WPOBTRN = (OPMATRN_get_outertype(Dec)!=WAAATRN_niltypedec);
break;
case 4: 
 /* line 2396: */
WPOBTRN = (VPMATRN_get_outerconst(Dec)!=XAAATRN_nilconstdec);
break;
case 5: 
 /* line 2397: */
 /* line 2398: */
WPOBTRN = (CQMATRN_get_outerfn(Dec)!=YAAATRN_nilfndec);
break;
default: 
 /* line 2399: */
 /* line 2400: */
WPOBTRN = A68_TRUE;
break;
} 
if ( WPOBTRN )
{ 
XPOBTRN_env = LPMBTRN_nullrgenv;
 /* line 2402: */
YPOBTRN = (&((&XPOBTRN_env)->Dec_env)) ;
(*YPOBTRN) = Dec.Environ;
 /* line 2403: */
 /* line 2405: */
switch ( Dec.Sort )
{ 
case 1: 
 /* line 2407: */
A_CALLPROC(STNBTRN_write_attrdec,(APMATRN_get_outerattr(Dec), 1, (&XPOBTRN_env), XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg),(APMATRN_get_outerattr(Dec), 1, (&XPOBTRN_env), XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg,(STNBTRN_write_attrdec).nonlocals));
break;
case 2: 
 /* line 2409: */
A_CALLPROC(BUNBTRN_write_intdec,(HPMATRN_get_outerint(Dec), 1, (&XPOBTRN_env), XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg),(HPMATRN_get_outerint(Dec), 1, (&XPOBTRN_env), XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg,(BUNBTRN_write_intdec).nonlocals));
break;
case 3: 
 /* line 2410: */
 /* line 2412: */
A_CALLPROC(NWNBTRN_write_typedec,(OPMATRN_get_outertype(Dec), 1, (&XPOBTRN_env), XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg),(OPMATRN_get_outertype(Dec), 1, (&XPOBTRN_env), XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg,(NWNBTRN_write_typedec).nonlocals));
break;
case 4: 
 /* line 2413: */
 /* line 2415: */
A_CALLPROC(XWNBTRN_write_constdec,(VPMATRN_get_outerconst(Dec), 1, (&XPOBTRN_env), HMOBTRN_write_unit, XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg),(VPMATRN_get_outerconst(Dec), 1, (&XPOBTRN_env), HMOBTRN_write_unit, XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg,(XWNBTRN_write_constdec).nonlocals));
break;
case 5: 
{ 
ZPOBTRN_fd = CQMATRN_get_outerfn(Dec);
 /* line 2417: */
ADNBTRN_set_fnenv((&XPOBTRN_env), ZPOBTRN_fd, EPMBTRN_nilmplist, Dec.Environ);
 /* line 2418: */
 /* line 2419: */
 /* line 2420: */
 /* line 2421: */
A_CALLPROC(KEOBTRN_write_fndec,(ZPOBTRN_fd, 1, (&XPOBTRN_env), HMOBTRN_write_unit, XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg),(ZPOBTRN_fd, 1, (&XPOBTRN_env), HMOBTRN_write_unit, XQMBTRN_dot_txt, (&RPOBTRN_keyword_ind), Msg,(KEOBTRN_write_fndec).nonlocals));
} 
break;
default: 
 /* line 2422: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(CQOBTRN,BQOBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(CQOBTRN,BQOBTRN,A68_VC ),(Msg).nonlocals));
break;
} 
 /* line 2423: */
A_CALLPROC(Write_text,(XQMBTRN_dot_txt),(XQMBTRN_dot_txt,(Write_text).nonlocals));
 /* line 2424: */
 /* line 2425: */
 /* line 2426: */
A_CALLPROC(Set_ind,(OIBATRN_endouterdec_ind),(OIBATRN_endouterdec_ind,(Set_ind).nonlocals));
} 
} 
A_PROC_EXIT(write_ella);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void ZOMBTRN(void)   /* initialise DECS write_ella */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/write_ella.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/syntax_inds.m","./mfiles/closureprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_164  KPMBTRN;  /* avoid structure result */
A68_VC  NPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZPMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YQMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ARMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CRMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ERMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GRMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RRMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TRMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZYMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BZMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_414  FINBTRN;  /* collateral clause result */
A68_46  MINBTRN;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
FDBATRN();   /* USE syntax_inds */
SKCATRN();   /* USE closureprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/write_ella.a68";
A_config.translation_time = "Tue Apr  4 10:09:28 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YOMBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:09:28 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS write_ella);
UEAALIB_a68config(LGAALIB_configinfo, DPMBTRN);
 /* line 79: */
 /* line 80: */
 /* line 82: */
 /* line 84: */
 /* line 86: */
GPMBTRN_generator( A68_TRUE, &KPMBTRN );
JPMBTRN_nullidvec = KPMBTRN;
 /* line 87: */
 /* line 88: */
 /* line 91: */
OPMBTRN_orb_txt = A_HVEC(NPMBTRN,'(',A68_CHAR );
 /* line 92: */
QPMBTRN_crb_txt = A_HVEC(PPMBTRN,')',A68_CHAR );
 /* line 93: */
SPMBTRN_osb_txt = A_HVEC(RPMBTRN,'[',A68_CHAR );
 /* line 94: */
UPMBTRN_csb_txt = A_HVEC(TPMBTRN,']',A68_CHAR );
 /* line 95: */
WPMBTRN_ocb_txt = A_HVEC(VPMBTRN,'{',A68_CHAR );
 /* line 96: */
YPMBTRN_ccb_txt = A_HVEC(XPMBTRN,'}',A68_CHAR );
 /* line 97: */
AQMBTRN_vis_space_txt = A_HVEC(ZPMBTRN,'_',A68_CHAR );
 /* line 98: */
CQMBTRN_slash_txt = A_HVEC(BQMBTRN,'/',A68_CHAR );
 /* line 99: */
EQMBTRN_ampsand_txt = A_HVEC(DQMBTRN,'&',A68_CHAR );
 /* line 100: */
GQMBTRN_qmark_txt = A_HVEC(FQMBTRN,'?',A68_CHAR );
 /* line 101: */
JQMBTRN_attr_txt = IQMBTRN;
 /* line 102: */
LQMBTRN_at_txt = A_HVEC(KQMBTRN,'@',A68_CHAR );
 /* line 103: */
NQMBTRN_prime_txt = A_HVEC(MQMBTRN,'\'',A68_CHAR );
 /* line 104: */
PQMBTRN_equals_txt = A_HVEC(OQMBTRN,'=',A68_CHAR );
 /* line 105: */
RQMBTRN_stroke_txt = A_HVEC(QQMBTRN,'|',A68_CHAR );
 /* line 106: */
TQMBTRN_colon_txt = A_HVEC(SQMBTRN,':',A68_CHAR );
 /* line 107: */
VQMBTRN_comma_txt = A_HVEC(UQMBTRN,',',A68_CHAR );
 /* line 108: */
XQMBTRN_dot_txt = A_HVEC(WQMBTRN,'.',A68_CHAR );
 /* line 109: */
ZQMBTRN_semi_txt = A_HVEC(YQMBTRN,';',A68_CHAR );
 /* line 110: */
BRMBTRN_plus_txt = A_HVEC(ARMBTRN,'+',A68_CHAR );
 /* line 111: */
DRMBTRN_minus_txt = A_HVEC(CRMBTRN,'-',A68_CHAR );
 /* line 112: */
FRMBTRN_star_txt = A_HVEC(ERMBTRN,'*',A68_CHAR );
 /* line 113: */
HRMBTRN_perc_txt = A_HVEC(GRMBTRN,'%',A68_CHAR );
 /* line 114: */
KRMBTRN_ne_txt = JRMBTRN;
 /* line 115: */
NRMBTRN_le_txt = MRMBTRN;
 /* line 116: */
QRMBTRN_ge_txt = PRMBTRN;
 /* line 117: */
SRMBTRN_lt_txt = A_HVEC(RRMBTRN,'<',A68_CHAR );
 /* line 118: */
URMBTRN_gt_txt = A_HVEC(TRMBTRN,'>',A68_CHAR );
 /* line 119: */
XRMBTRN_and_txt = WRMBTRN;
 /* line 120: */
ASMBTRN_or_txt = ZRMBTRN;
 /* line 121: */
DSMBTRN_sl_txt = CSMBTRN;
 /* line 122: */
GSMBTRN_sr_txt = FSMBTRN;
 /* line 123: */
JSMBTRN_iand_txt = ISMBTRN;
 /* line 124: */
MSMBTRN_ior_txt = LSMBTRN;
 /* line 125: */
PSMBTRN_mod_txt = OSMBTRN;
 /* line 126: */
SSMBTRN_not_txt = RSMBTRN;
 /* line 127: */
VSMBTRN_inot_txt = USMBTRN;
 /* line 128: */
YSMBTRN_sqrt_txt = XSMBTRN;
 /* line 129: */
BTMBTRN_abs_txt = ATMBTRN;
 /* line 130: */
ETMBTRN_int_txt = DTMBTRN;
 /* line 131: */
HTMBTRN_if_txt = GTMBTRN;
 /* line 132: */
KTMBTRN_then_txt = JTMBTRN;
 /* line 133: */
NTMBTRN_else_txt = MTMBTRN;
 /* line 134: */
QTMBTRN_fi_txt = PTMBTRN;
 /* line 135: */
TTMBTRN_dotdot_txt = STMBTRN;
 /* line 136: */
WTMBTRN_type_txt = VTMBTRN;
 /* line 137: */
ZTMBTRN_to_txt = YTMBTRN;
 /* line 138: */
CUMBTRN_string_txt = BUMBTRN;
 /* line 139: */
FUMBTRN_slashbr_txt = EUMBTRN;
 /* line 140: */
IUMBTRN_new_txt = HUMBTRN;
 /* line 141: */
LUMBTRN_nobody_txt = KUMBTRN;
 /* line 142: */
OUMBTRN_biop_txt = NUMBTRN;
 /* line 143: */
RUMBTRN_alien_txt = QUMBTRN;
 /* line 144: */
UUMBTRN_arith_txt = TUMBTRN;
 /* line 145: */
XUMBTRN_reform_txt = WUMBTRN;
 /* line 146: */
AVMBTRN_import_txt = ZUMBTRN;
 /* line 147: */
DVMBTRN_delay_txt = CVMBTRN;
 /* line 148: */
GVMBTRN_idelay_txt = FVMBTRN;
 /* line 149: */
JVMBTRN_ram_txt = IVMBTRN;
 /* line 150: */
MVMBTRN_sample_txt = LVMBTRN;
 /* line 151: */
PVMBTRN_faster_txt = OVMBTRN;
 /* line 152: */
SVMBTRN_slower_txt = RVMBTRN;
 /* line 153: */
VVMBTRN_const_txt = UVMBTRN;
 /* line 154: */
YVMBTRN_print_txt = XVMBTRN;
 /* line 155: */
BWMBTRN_fault_txt = AWMBTRN;
 /* line 156: */
EWMBTRN_let_txt = DWMBTRN;
 /* line 157: */
HWMBTRN_make_txt = GWMBTRN;
 /* line 158: */
KWMBTRN_join_txt = JWMBTRN;
 /* line 159: */
NWMBTRN_for_txt = MWMBTRN;
 /* line 160: */
QWMBTRN_becomes_txt = PWMBTRN;
 /* line 161: */
TWMBTRN_case_txt = SWMBTRN;
 /* line 162: */
WWMBTRN_of_txt = VWMBTRN;
 /* line 163: */
ZWMBTRN_elseof_txt = YWMBTRN;
 /* line 164: */
CXMBTRN_esac_txt = BXMBTRN;
 /* line 165: */
FXMBTRN_var_txt = EXMBTRN;
 /* line 166: */
IXMBTRN_pvar_txt = HXMBTRN;
 /* line 167: */
LXMBTRN_init_txt = KXMBTRN;
 /* line 168: */
OXMBTRN_output_txt = NXMBTRN;
 /* line 169: */
RXMBTRN_end_txt = QXMBTRN;
 /* line 170: */
UXMBTRN_io_txt = TXMBTRN;
 /* line 171: */
XXMBTRN_twoslash_txt = WXMBTRN;
 /* line 172: */
AYMBTRN_twoosb_txt = ZXMBTRN;
 /* line 173: */
DYMBTRN_twocsb_txt = CYMBTRN;
 /* line 174: */
GYMBTRN_replace_txt = FYMBTRN;
 /* line 175: */
JYMBTRN_conc_txt = IYMBTRN;
 /* line 176: */
MYMBTRN_begin_txt = LYMBTRN;
 /* line 177: */
PYMBTRN_seq_txt = OYMBTRN;
 /* line 178: */
SYMBTRN_mac_txt = RYMBTRN;
 /* line 179: */
VYMBTRN_fn_txt = UYMBTRN;
 /* line 180: */
YYMBTRN_void_txt = XYMBTRN;
 /* line 181: */
AZMBTRN_hash_txt = A_HVEC(ZYMBTRN,'#',A68_CHAR );
 /* line 182: */
CZMBTRN_backslash_txt = A_HVEC(BZMBTRN,'\\',A68_CHAR );
 /* line 183: */
FZMBTRN_qmark_name = EZMBTRN;
 /* line 185: */
 /* line 224: */
 /* line 271: */
 /* line 274: */
 /* line 284: */
 /* line 297: */
 /* line 310: */
 /* line 318: */
 /* line 326: */
 /* line 334: */
 /* line 342: */
 /* line 350: */
 /* line 365: */
 /* line 376: */
 /* line 388: */
 /* line 407: */
 /* line 426: */
PHNBTRN_badop = OHNBTRN;
 /* line 428: */
 /* line 435: */
 /* line 436: */
 /* line 437: */
 /* line 439: */
 /* line 440: */
 /* line 441: */
FINBTRN.data[0] = HINBTRN;
 /* line 442: */
FINBTRN.data[1] = JINBTRN;
FINBTRN.data[2] = LINBTRN;
NINBTRN_write_ella_options = A_HISVEC(MINBTRN,FINBTRN,3,A68_VC );
 /* line 444: */
 /* line 2428: */
 /* line 2429: */
 /* line 2432: */
/*SKIP*/;
A_PROC_EXIT(DECS write_ella);
} 
#undef NL
/* end of translation of ./a68files/write_ella.a68 */
