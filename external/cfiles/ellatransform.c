
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
/* UNAME:XXAAEXT */
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

A_PROCEDURE(A68_VOID ,A68t144,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t147 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE147 */
struct A68t147{
A68_INT  Number;
A_PAD_INT(PAD_34)
A68_BITS  Class;
A_PAD_BITS(PAD_35)
A68_VC  Text;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t145{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t146  Setup;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE146)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BOOL ,struct A68t145 *),(A68_BOOL ,struct A68t145 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BOOL) MODE145 */
A_VECTOR(A68_VC ,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t46 ,struct A68t149 *),(struct A68t46 ,struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE46) MODE149 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t149 ,struct A68t46 *),(struct A68t149 ,struct A68t46 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE149) MODE46 */
struct A68t153 ;

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153) BOOL */
struct A68t153 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t153  A68_153 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,struct A68t145 ,struct A68t98 *),(A68_INT ,struct A68t145 ,struct A68t98 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT,MODE145) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t98 ,struct A68t145 ),(struct A68t98 ,struct A68t145 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE98,MODE145) BOOL */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE98,MODE46) MODE101 */
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
struct A68t165{
A68_VC  Id;
struct A68t165 * Rest;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,REF MODE165)  */
struct A68t166{
A68_INT  Int;
A_PAD_INT(PAD_37)
struct A68t166 * Rest;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,REF MODE166)  */
struct A68t167 { A68_INT mode; union {
struct A68t168 * mode1;
struct A68t169 * mode2;
struct A68t170 * mode3;
struct A68t171 * mode4;
struct A68t172 * mode5;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE168,REF MODE169,REF MODE170,REF MODE171,REF MODE172)  */
struct A68t168{
A68_INT  Attrno;
A_PAD_INT(PAD_38)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT)  */
struct A68t169{
A68_VC  Classname;
struct A68t165 * Strings;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE26,REF MODE165)  */
struct A68t170{
struct A68t167  Elem;
struct A68t170 * Rest;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(MODE167,REF MODE170)  */
struct A68t171{
struct A68t167  Attr;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE167)  */
struct A68t172{
A68_INT  Attrnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT)  */
struct A68t173{
A68_INT  Sort;
A_PAD_INT(PAD_40)
A68_VC  Attrname;
struct A68t167  Value;
struct A68t174 * Usage;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT,REF MODE26,MODE167,REF MODE174)  */
struct A68t174{
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
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t175{
struct A68t167  Tag;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE167)  */
struct A68t176 { A68_INT mode; union {
struct A68t177 * mode1;
struct A68t178 * mode2;
struct A68t179 * mode3;
struct A68t180 * mode4;
struct A68t181 * mode5;
struct A68t182 * mode6;
struct A68t183 * mode7;
struct A68t184 * mode8;
struct A68t185 * mode9;
struct A68t186 * mode10;
} data; };
typedef struct A68t176  A68_176 ;    /* UNION(REF MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186)  */
struct A68t177{
A68_INT  Int;
A_PAD_INT(PAD_47)
A68_VC  Text;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t178{
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t176  Test;
struct A68t176  Standard;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,MODE176,MODE176)  */
struct A68t179{
A68_INT  Nameno;
A_PAD_INT(PAD_49)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_INT  Intno;
A_PAD_INT(PAD_50)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
struct A68t176  Left;
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t176  Right;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE176,INT,MODE176)  */
struct A68t182{
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t176  Right;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,MODE176)  */
struct A68t183{
struct A68t176  Cond;
struct A68t176  True;
struct A68t176  False;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE176,MODE176,MODE176)  */
struct A68t184{
struct A68t176  Formula;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE176)  */
struct A68t185{
A68_INT  Macparno;
A_PAD_INT(PAD_53)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT)  */
struct A68t186{
A68_INT  Fnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
struct A68t176  Tag;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE176)  */
struct A68t188{
struct A68t176  Formula;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE176,REF MODE188)  */
struct A68t191{
struct A68t176  Lwb;
struct A68t176  Upb;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE176,MODE176)  */
struct A68t190 { A68_INT mode; union {
struct A68t177 * mode1;
struct A68t178 * mode2;
struct A68t179 * mode3;
struct A68t180 * mode4;
struct A68t181 * mode5;
struct A68t182 * mode6;
struct A68t183 * mode7;
struct A68t184 * mode8;
struct A68t185 * mode9;
struct A68t186 * mode10;
struct A68t191  mode11;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(REF MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,MODE191)  */
struct A68t189{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Intname;
struct A68t167  Attr;
struct A68t190  Value;
struct A68t174 * Usage;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,REF MODE26,MODE167,MODE190,REF MODE174)  */
struct A68t192 { A68_INT mode; union {
struct A68t193 * mode1;
struct A68t194 * mode2;
struct A68t195 * mode3;
struct A68t196 * mode4;
struct A68t197 * mode5;
struct A68t198 * mode6;
struct A68t199 * mode7;
struct A68t185 * mode8;
struct A68t200 * mode9;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE185,REF MODE200)  */
struct A68t193{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
struct A68t176  Size;
struct A68t192  Elem;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE176,MODE192)  */
struct A68t195{
struct A68t192  Elem;
struct A68t195 * Rest;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE192,REF MODE195)  */
struct A68t196{
struct A68t192  From;
struct A68t192  To;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE192,MODE192)  */
struct A68t197{
struct A68t192  Type;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE192)  */
struct A68t198{
struct A68t176  Size;
struct A68t192  Char;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE176,MODE192)  */
struct A68t199{
A68_INT  Tvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t200{
A68_INT  Tnull;
A_PAD_INT(PAD_58)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t201{
struct A68t192  Tag;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE192)  */
struct A68t202{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t203{
A68_VC  Altname;
struct A68t192  Assoc;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(REF MODE26,MODE192)  */
struct A68t204{
A68_VC  Tagname;
struct A68t191  Range;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE26,MODE191)  */
A_VECTOR(struct A68t203 ,A68t206);
typedef struct A68t206  A68_206 ;    /* VECTOR [] MODE203 */
struct A68t205 { A68_INT mode; union {
struct A68t206  mode1;
struct A68t204 * mode2;
struct A68t201 * mode3;
struct A68t202 * mode4;
} data; };
typedef struct A68t205  A68_205 ;    /* UNION(REF MODE206,REF MODE204,REF MODE201,REF MODE202)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_59)
A68_VC  Typename;
struct A68t167  Attr;
struct A68t205  Body;
struct A68t174 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE167,MODE205,REF MODE174)  */
struct A68t208{
A68_INT  Constno;
A_PAD_INT(PAD_60)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT)  */
struct A68t209{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
A68_INT  Primno;
A_PAD_INT(PAD_62)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,INT)  */
struct A68t210{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t176  Index;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,MODE176)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_64)
struct A68t191  Range;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,MODE191)  */
struct A68t212{
struct A68t192  Querytype;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE192)  */
struct A68t214 { A68_INT mode; union {
struct A68t208 * mode1;
struct A68t209 * mode2;
struct A68t210 * mode3;
struct A68t212 * mode4;
struct A68t215 * mode5;
struct A68t216 * mode6;
struct A68t197 * mode7;
struct A68t211 * mode8;
struct A68t217 * mode9;
struct A68t218 * mode10;
struct A68t219 * mode11;
struct A68t220 * mode12;
struct A68t221 * mode13;
struct A68t222 * mode14;
struct A68t223 * mode15;
struct A68t224 * mode16;
struct A68t225 * mode17;
struct A68t226 * mode18;
struct A68t227 * mode19;
struct A68t228 * mode20;
struct A68t229 * mode21;
struct A68t230 * mode22;
struct A68t231 * mode23;
struct A68t232 * mode24;
struct A68t233 * mode25;
struct A68t234 * mode26;
struct A68t235 * mode27;
struct A68t236 * mode28;
struct A68t237 * mode29;
struct A68t238 * mode30;
struct A68t239 * mode31;
struct A68t240 * mode32;
struct A68t241 * mode33;
struct A68t242 * mode34;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(REF MODE208,REF MODE209,REF MODE210,REF MODE212,REF MODE215,REF MODE216,REF MODE197,REF MODE211,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242)  */
struct A68t213{
A68_INT  Sort;
A_PAD_INT(PAD_65)
A68_VC  Constname;
struct A68t167  Attr;
struct A68t214  Value;
struct A68t174 * Usage;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,REF MODE26,MODE167,MODE214,REF MODE174)  */
struct A68t215{
A68_INT  Typeno;
A_PAD_INT(PAD_66)
struct A68t32  String;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t216{
A68_INT  Cvoid;
A_PAD_INT(PAD_67)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT)  */
struct A68t217{
A68_INT  Typeno;
A_PAD_INT(PAD_68)
A68_INT  Firstno;
A_PAD_INT(PAD_69)
A68_INT  Lastno;
A_PAD_INT(PAD_70)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,INT,INT)  */
struct A68t218{
struct A68t214  Alt;
struct A68t218 * Rest;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE214,REF MODE218)  */
struct A68t219{
A68_INT  Sort;
A_PAD_INT(PAD_71)
A68_INT  Nameno;
A_PAD_INT(PAD_72)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,INT)  */
struct A68t220{
struct A68t214  Sink;
struct A68t214  Source;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE214,MODE214)  */
struct A68t221{
A68_INT  Typeno;
A_PAD_INT(PAD_73)
A68_INT  Altno;
A_PAD_INT(PAD_74)
struct A68t214  Assoc;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,INT,MODE214)  */
struct A68t222{
struct A68t214  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_75)
A68_INT  Altno;
A_PAD_INT(PAD_76)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE214,INT,INT)  */
struct A68t223{
struct A68t214  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_77)
A68_INT  Nameno;
A_PAD_INT(PAD_78)
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE214,INT,INT)  */
struct A68t224{
struct A68t214  Unit;
struct A68t176  Index;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE214,MODE176)  */
struct A68t225{
struct A68t214  Unit;
struct A68t191  Range;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE214,MODE191)  */
struct A68t226{
struct A68t214  Unit;
struct A68t214  Index;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE214,MODE214)  */
struct A68t227{
struct A68t214  Unit;
struct A68t214  Index;
struct A68t214  From;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE214,MODE214,MODE214)  */
struct A68t228{
struct A68t176  Size;
struct A68t214  Elem;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE176,MODE214)  */
struct A68t229{
struct A68t214  Elem;
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE214,REF MODE229)  */
struct A68t230{
A68_BOOL  String;
A_PAD_BOOL(PAD_79)
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t214  Left;
struct A68t214  Right;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(BOOL,INT,MODE214,MODE214)  */
A_VECTOR(struct A68t257 ,A68t256);
typedef struct A68t256  A68_256 ;    /* VECTOR [] MODE257 */
struct A68t259{
struct A68t214  Tag;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE214)  */
struct A68t254{
A68_INT  Fnno;
A_PAD_INT(PAD_81)
struct A68t256  Macparams;
struct A68t167  Attr;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT,REF MODE256,MODE167)  */
struct A68t258 { A68_INT mode; union {
struct A68t175  mode1;
struct A68t187  mode2;
struct A68t201  mode3;
struct A68t259  mode4;
struct A68t254  mode5;
} data; };
typedef struct A68t258  A68_258 ;    /* UNION(MODE175,MODE187,MODE201,MODE259,MODE254)  */
struct A68t257{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t258  Param;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(INT,MODE258)  */
struct A68t231{
struct A68t254  Inst;
struct A68t214  Right;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE254,MODE214)  */
struct A68t232{
struct A68t214  Left;
struct A68t254  Inst;
struct A68t214  Right;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE214,MODE254,MODE214)  */
struct A68t233{
struct A68t214  Input;
struct A68t274 * Choices;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE214,REF MODE274)  */
struct A68t234{
struct A68t176  Cond;
struct A68t214  True;
struct A68t214  False;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE176,MODE214,MODE214)  */
struct A68t235{
struct A68t176  Repl;
struct A68t214  Body;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE176,MODE214)  */
struct A68t236{
struct A68t262 * Body;
struct A68t214  Output;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE262,MODE214)  */
struct A68t237{
struct A68t243 * Body;
struct A68t214  Output;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE243,MODE214)  */
struct A68t238{
struct A68t214  Unit;
struct A68t167  Attr;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE214,MODE167)  */
struct A68t239{
struct A68t214  Unit;
struct A68t178  Check;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE214,MODE178)  */
struct A68t240{
struct A68t214  Unit;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE214)  */
struct A68t241{
struct A68t176  Size;
struct A68t214  Char;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE176,MODE214)  */
struct A68t242{
A68_INT  Unull;
A_PAD_INT(PAD_83)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT)  */
struct A68t245{
A68_INT  Fnno;
A_PAD_INT(PAD_84)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT)  */
struct A68t244 { A68_INT mode; union {
struct A68t168  mode1;
struct A68t180  mode2;
struct A68t193  mode3;
struct A68t208  mode4;
struct A68t245  mode5;
struct A68t246 * mode6;
struct A68t247 * mode7;
struct A68t248 * mode8;
struct A68t249 * mode9;
struct A68t250 * mode10;
struct A68t251 * mode11;
struct A68t252 * mode12;
} data; };
typedef struct A68t244  A68_244 ;    /* UNION(MODE168,MODE180,MODE193,MODE208,MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252)  */
struct A68t243{
struct A68t244  Step;
struct A68t243 * Rest;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE244,REF MODE243)  */
struct A68t246{
struct A68t176  Cond;
struct A68t260 * Print;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE176,REF MODE260)  */
struct A68t247{
struct A68t176  Cond;
struct A68t260 * Fault;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE176,REF MODE260)  */
struct A68t248{
struct A68t255 * Letnames;
struct A68t214  Unit;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE255,MODE214)  */
struct A68t249{
struct A68t188 * Sizes;
struct A68t254  Inst;
struct A68t255 * Makenames;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF MODE188,MODE254,REF MODE255)  */
struct A68t250{
struct A68t214  From;
struct A68t214  To;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE214,MODE214)  */
struct A68t251{
struct A68t188 * Repls;
struct A68t253 * Joins;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE188,REF MODE253)  */
struct A68t252{
A68_INT  Stepnull;
A_PAD_INT(PAD_85)
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT)  */
struct A68t253{
struct A68t250  Join;
struct A68t253 * Rest;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE250,REF MODE253)  */
struct A68t255{
A68_INT  Nameno;
A_PAD_INT(PAD_86)
struct A68t255 * Rest;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(INT,REF MODE255)  */
struct A68t261 { A68_INT mode; union {
A68_VC  mode1;
struct A68t187 * mode2;
} data; };
typedef struct A68t261  A68_261 ;    /* UNION(REF MODE26,REF MODE187)  */
struct A68t260{
struct A68t261  Item;
struct A68t260 * Rest;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE261,REF MODE260)  */
struct A68t263 { A68_INT mode; union {
struct A68t168  mode1;
struct A68t180  mode2;
struct A68t193  mode3;
struct A68t208  mode4;
struct A68t245  mode5;
struct A68t246 * mode6;
struct A68t247 * mode7;
struct A68t264 * mode8;
struct A68t265 * mode9;
struct A68t266 * mode10;
struct A68t267 * mode11;
struct A68t268 * mode12;
struct A68t269 * mode13;
struct A68t270 * mode14;
struct A68t271 * mode15;
struct A68t262 * mode16;
struct A68t272 * mode17;
} data; };
typedef struct A68t263  A68_263 ;    /* UNION(MODE168,MODE180,MODE193,MODE208,MODE245,REF MODE246,REF MODE247,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE262,REF MODE272)  */
struct A68t262{
struct A68t263  Step;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE263,REF MODE262)  */
struct A68t264{
struct A68t248  Seqlet;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE248)  */
struct A68t265{
struct A68t248  Seqvar;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE248)  */
struct A68t266{
struct A68t255 * Pvarnames;
struct A68t214  Init;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE255,MODE214)  */
struct A68t267{
struct A68t214  To;
struct A68t214  From;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE214,MODE214)  */
struct A68t268{
struct A68t214  Input;
struct A68t273 * Choices;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE214,REF MODE273)  */
struct A68t269{
struct A68t176  Cond;
struct A68t263  True;
struct A68t263  False;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(MODE176,MODE263,MODE263)  */
struct A68t270{
struct A68t176  Repl;
struct A68t263  Body;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE176,MODE263)  */
struct A68t271{
A68_INT  Seqnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT)  */
struct A68t272{
struct A68t176  Size;
struct A68t263  Elem;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE176,MODE263)  */
struct A68t273{
A68_BOOL  Check;
A_PAD_BOOL(PAD_88)
A68_INT  Sort;
A_PAD_INT(PAD_89)
struct A68t214  Test;
struct A68t263  Output;
struct A68t273 * Rest;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(BOOL,INT,MODE214,MODE263,REF MODE273)  */
struct A68t274{
A68_BOOL  Check;
A_PAD_BOOL(PAD_90)
A68_INT  Sort;
A_PAD_INT(PAD_91)
struct A68t214  Test;
struct A68t214  Output;
struct A68t274 * Rest;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(BOOL,INT,MODE214,MODE214,REF MODE274)  */
struct A68t275 { A68_INT mode; union {
struct A68t168  mode1;
struct A68t180  mode2;
struct A68t193  mode3;
struct A68t208  mode4;
struct A68t245  mode5;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(MODE168,MODE180,MODE193,MODE208,MODE245)  */
struct A68t276{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_92)
A68_VC  Name;
struct A68t256  Macparams;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(BOOL,REF MODE26,REF MODE256)  */
struct A68t277{
struct A68t176  Output;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE176)  */
struct A68t278{
A68_INT  Reform;
A_PAD_INT(PAD_93)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT)  */
struct A68t279{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_94)
struct A68t164  Ctname;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE26,INT,MODE164)  */
struct A68t280{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t214  Init;
struct A68t176  Ambigtime;
struct A68t214  Ambig;
struct A68t176  Delaytime;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,MODE214,MODE176,MODE214,MODE176)  */
struct A68t281{
struct A68t214  Init;
struct A68t176  Delaytime;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE214,MODE176)  */
struct A68t282{
struct A68t214  Init;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE214)  */
struct A68t283{
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t176  Interval;
struct A68t214  Init;
struct A68t176  Skew;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,MODE176,MODE214,MODE176)  */
struct A68t284{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_97)
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t254  Inst;
struct A68t176  Scale;
struct A68t214  Init;
struct A68t176  Skew;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(BOOL,INT,MODE254,MODE176,MODE214,MODE176)  */
struct A68t286 { A68_INT mode; union {
struct A68t259 * mode1;
struct A68t276 * mode2;
struct A68t277 * mode3;
struct A68t278 * mode4;
struct A68t279 * mode5;
struct A68t280 * mode6;
struct A68t281 * mode7;
struct A68t282 * mode8;
struct A68t283 * mode9;
struct A68t284 * mode10;
struct A68t285 * mode11;
struct A68t287 * mode12;
} data; };
typedef struct A68t286  A68_286 ;    /* UNION(REF MODE259,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE287)  */
struct A68t285{
struct A68t166 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_99)
struct A68t286  Fnbody;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(REF MODE166,BOOL,MODE286)  */
struct A68t287{
A68_INT  Bodynull;
A_PAD_INT(PAD_100)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT)  */
struct A68t288{
A68_INT  Sort;
A_PAD_INT(PAD_101)
struct A68t275  Spec;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,MODE275)  */
struct A68t289{
A68_VC  Name;
struct A68t192  Type;
struct A68t167  Attr;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE26,MODE192,MODE167)  */
A_VECTOR(struct A68t288 ,A68t291);
typedef struct A68t291  A68_291 ;    /* VECTOR [] MODE288 */
A_VECTOR(struct A68t289 ,A68t292);
typedef struct A68t292  A68_292 ;    /* VECTOR [] MODE289 */
struct A68t290{
A68_INT  Sort;
A_PAD_INT(PAD_102)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_103)
A68_VC  Fnname;
struct A68t291  Macspecs;
struct A68t167  Attr;
struct A68t255 * Inputs;
struct A68t255 * Outputs;
struct A68t292  Nametypes;
struct A68t286  Fnbody;
struct A68t174 * Usage;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE291,MODE167,REF MODE255,REF MODE255,REF MODE292,MODE286,REF MODE174)  */
A_VECTOR(struct A68t173 *,A68t294);
typedef struct A68t294  A68_294 ;    /* VECTOR [] REF MODE173 */
A_VECTOR(struct A68t189 *,A68t295);
typedef struct A68t295  A68_295 ;    /* VECTOR [] REF MODE189 */
A_VECTOR(struct A68t207 *,A68t296);
typedef struct A68t296  A68_296 ;    /* VECTOR [] REF MODE207 */
A_VECTOR(struct A68t213 *,A68t297);
typedef struct A68t297  A68_297 ;    /* VECTOR [] REF MODE213 */
A_VECTOR(struct A68t290 *,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] REF MODE290 */
struct A68t293{
struct A68t294  Attrs;
struct A68t295  Ints;
struct A68t296  Types;
struct A68t297  Consts;
struct A68t298  Fns;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298)  */
struct A68t299{
A68_INT  Closureno;
A_PAD_INT(PAD_104)
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t293 * Environ;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT,INT,REF MODE293)  */
struct A68t300{
struct A68t299  Outer;
struct A68t300 * Rest;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE299,REF MODE300)  */
A_VECTOR(struct A68t300 ,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] MODE300 */
struct A68t301{
struct A68t302  Outers;
struct A68t301 * Rest;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE302,REF MODE301)  */
struct A68t303{
A68_INT  Max_closureno;
A_PAD_INT(PAD_106)
struct A68t300 * Outers;
struct A68t300 * Freelist;
struct A68t301 * Outerslist;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT,REF MODE300,REF MODE300,REF MODE301)  */
A_VECTOR(struct A68t300 *,A68t304);
typedef struct A68t304  A68_304 ;    /* VECTOR [] REF MODE300 */

A_PROCEDURE(struct A68t179 *,A68t305,(A68_INT ),(A68_INT ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t180 *,A68t306,(A68_INT ),(A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(INT) REF MODE180 */

A_PROCEDURE(struct A68t184 *,A68t307,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE176) REF MODE184 */

A_PROCEDURE(struct A68t187 *,A68t308,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE176) REF MODE187 */

A_PROCEDURE(struct A68t193 *,A68t309,(A68_INT ),(A68_INT ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(INT) REF MODE193 */

A_PROCEDURE(struct A68t197 *,A68t310,(struct A68t192 ),(struct A68t192 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE192) REF MODE197 */

A_PROCEDURE(struct A68t201 *,A68t311,(struct A68t192 ),(struct A68t192 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE192) REF MODE201 */

A_PROCEDURE(struct A68t208 *,A68t312,(A68_INT ),(A68_INT ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(INT) REF MODE208 */

A_PROCEDURE(struct A68t212 *,A68t313,(struct A68t192 ),(struct A68t192 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE192) REF MODE212 */

A_PROCEDURE(struct A68t264 *,A68t314,(struct A68t248 ),(struct A68t248 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE248) REF MODE264 */

A_PROCEDURE(struct A68t265 *,A68t315,(struct A68t248 ),(struct A68t248 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE248) REF MODE265 */

A_PROCEDURE(struct A68t240 *,A68t316,(struct A68t214 ),(struct A68t214 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE214) REF MODE240 */

A_PROCEDURE(struct A68t259 *,A68t317,(struct A68t214 ),(struct A68t214 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE214) REF MODE259 */

A_PROCEDURE(struct A68t245 *,A68t318,(A68_INT ),(A68_INT ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(INT) REF MODE245 */

A_PROCEDURE(struct A68t277 *,A68t319,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE176) REF MODE277 */

A_PROCEDURE(struct A68t282 *,A68t320,(struct A68t214 ),(struct A68t214 ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE214) REF MODE282 */

A_PROCEDURE(struct A68t185 *,A68t321,(A68_INT ),(A68_INT ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(INT) REF MODE185 */

A_PROCEDURE(struct A68t168 *,A68t322,(A68_INT ),(A68_INT ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(INT) REF MODE168 */

A_PROCEDURE(struct A68t175 *,A68t323,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE167) REF MODE175 */

A_PROCEDURE(struct A68t171 *,A68t324,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE167) REF MODE171 */
A_VECTOR(struct A68t165 *,A68t325);
typedef struct A68t325  A68_325 ;    /* VECTOR [] REF MODE165 */
struct A68t326{
struct A68t167  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE167,BOOL)  */
struct A68t327{
struct A68t170 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE170,BOOL)  */
struct A68t328{
struct A68t173 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE173,BOOL)  */
struct A68t329{
struct A68t176  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE176,BOOL)  */
struct A68t330{
struct A68t188 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t330  A68_330 ;    /* STRUCT(REF MODE188,BOOL)  */
struct A68t331{
struct A68t189 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE189,BOOL)  */
struct A68t332{
struct A68t191  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE191,BOOL)  */
struct A68t333{
struct A68t190  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE190,BOOL)  */
struct A68t334{
struct A68t195 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE195,BOOL)  */
struct A68t335{
struct A68t192  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(MODE192,BOOL)  */
struct A68t336{
struct A68t203  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t336  A68_336 ;    /* STRUCT(MODE203,BOOL)  */
struct A68t337{
struct A68t206  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(REF MODE206,BOOL)  */
struct A68t338{
struct A68t205  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE205,BOOL)  */
struct A68t339{
struct A68t207 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE207,BOOL)  */
struct A68t340{
struct A68t213 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE213,BOOL)  */
struct A68t341{
struct A68t218 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t341  A68_341 ;    /* STRUCT(REF MODE218,BOOL)  */
struct A68t342{
struct A68t229 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE229,BOOL)  */
struct A68t343{
struct A68t274 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t343  A68_343 ;    /* STRUCT(REF MODE274,BOOL)  */
struct A68t344{
struct A68t214  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t344  A68_344 ;    /* STRUCT(MODE214,BOOL)  */
struct A68t345{
struct A68t258  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(MODE258,BOOL)  */
struct A68t346{
struct A68t256  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE256,BOOL)  */
struct A68t347{
struct A68t254  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE254,BOOL)  */
struct A68t348{
struct A68t275  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE275,BOOL)  */
struct A68t349{
struct A68t260 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t349  A68_349 ;    /* STRUCT(REF MODE260,BOOL)  */
struct A68t350{
struct A68t246 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(REF MODE246,BOOL)  */
struct A68t351{
struct A68t247 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t351  A68_351 ;    /* STRUCT(REF MODE247,BOOL)  */
struct A68t352{
struct A68t255 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t352  A68_352 ;    /* STRUCT(REF MODE255,BOOL)  */
struct A68t353{
struct A68t248 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t353  A68_353 ;    /* STRUCT(REF MODE248,BOOL)  */
struct A68t354{
struct A68t273 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(REF MODE273,BOOL)  */
struct A68t355{
struct A68t263  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE263,BOOL)  */
struct A68t356{
struct A68t262 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t356  A68_356 ;    /* STRUCT(REF MODE262,BOOL)  */
struct A68t357{
struct A68t249 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t357  A68_357 ;    /* STRUCT(REF MODE249,BOOL)  */
struct A68t358{
struct A68t250 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t358  A68_358 ;    /* STRUCT(REF MODE250,BOOL)  */
struct A68t359{
struct A68t253 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(REF MODE253,BOOL)  */
struct A68t360{
struct A68t244  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t360  A68_360 ;    /* STRUCT(MODE244,BOOL)  */
struct A68t361{
struct A68t243 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(REF MODE243,BOOL)  */
struct A68t362{
struct A68t286  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(MODE286,BOOL)  */
struct A68t363{
struct A68t288  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t363  A68_363 ;    /* STRUCT(MODE288,BOOL)  */
struct A68t364{
struct A68t291  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t364  A68_364 ;    /* STRUCT(REF MODE291,BOOL)  */
struct A68t365{
struct A68t290 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t365  A68_365 ;    /* STRUCT(REF MODE290,BOOL)  */
struct A68t366{
struct A68t299  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t366  A68_366 ;    /* STRUCT(MODE299,BOOL)  */
struct A68t367{
struct A68t303 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t367  A68_367 ;    /* STRUCT(REF MODE303,BOOL)  */
struct A68t368 ;

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t167 ,struct A68t368 *,struct A68t326 *),(struct A68t167 ,struct A68t368 *,struct A68t326 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE167,REF MODE368) MODE326 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t170 *,struct A68t368 *,struct A68t327 *),(struct A68t170 *,struct A68t368 *,struct A68t327 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(REF MODE170,REF MODE368) MODE327 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t173 *,struct A68t368 *,struct A68t328 *),(struct A68t173 *,struct A68t368 *,struct A68t328 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE173,REF MODE368) MODE328 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t176 ,struct A68t368 *,struct A68t329 *),(struct A68t176 ,struct A68t368 *,struct A68t329 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE176,REF MODE368) MODE329 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t188 *,struct A68t368 *,struct A68t330 *),(struct A68t188 *,struct A68t368 *,struct A68t330 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE188,REF MODE368) MODE330 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t189 *,struct A68t368 *,struct A68t331 *),(struct A68t189 *,struct A68t368 *,struct A68t331 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE189,REF MODE368) MODE331 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t191 ,struct A68t368 *,struct A68t332 *),(struct A68t191 ,struct A68t368 *,struct A68t332 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE191,REF MODE368) MODE332 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t190 ,struct A68t368 *,struct A68t333 *),(struct A68t190 ,struct A68t368 *,struct A68t333 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE190,REF MODE368) MODE333 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t195 *,struct A68t368 *,struct A68t334 *),(struct A68t195 *,struct A68t368 *,struct A68t334 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE195,REF MODE368) MODE334 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t192 ,struct A68t368 *,struct A68t335 *),(struct A68t192 ,struct A68t368 *,struct A68t335 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE192,REF MODE368) MODE335 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t203 ,struct A68t368 *,struct A68t336 *),(struct A68t203 ,struct A68t368 *,struct A68t336 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE203,REF MODE368) MODE336 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t206 ,struct A68t368 *,struct A68t337 *),(struct A68t206 ,struct A68t368 *,struct A68t337 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE206,REF MODE368) MODE337 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t205 ,struct A68t368 *,struct A68t338 *),(struct A68t205 ,struct A68t368 *,struct A68t338 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE205,REF MODE368) MODE338 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t207 *,struct A68t368 *,struct A68t339 *),(struct A68t207 *,struct A68t368 *,struct A68t339 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE207,REF MODE368) MODE339 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t213 *,struct A68t368 *,struct A68t340 *),(struct A68t213 *,struct A68t368 *,struct A68t340 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE213,REF MODE368) MODE340 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t218 *,struct A68t368 *,struct A68t341 *),(struct A68t218 *,struct A68t368 *,struct A68t341 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE218,REF MODE368) MODE341 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t229 *,struct A68t368 *,struct A68t342 *),(struct A68t229 *,struct A68t368 *,struct A68t342 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE229,REF MODE368) MODE342 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t274 *,struct A68t368 *,struct A68t343 *),(struct A68t274 *,struct A68t368 *,struct A68t343 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE274,REF MODE368) MODE343 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t214 ,struct A68t368 *,struct A68t344 *),(struct A68t214 ,struct A68t368 *,struct A68t344 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE214,REF MODE368) MODE344 */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t258 ,struct A68t368 *,struct A68t345 *),(struct A68t258 ,struct A68t368 *,struct A68t345 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE258,REF MODE368) MODE345 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t256 ,struct A68t368 *,struct A68t346 *),(struct A68t256 ,struct A68t368 *,struct A68t346 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE256,REF MODE368) MODE346 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t254 ,struct A68t368 *,struct A68t347 *),(struct A68t254 ,struct A68t368 *,struct A68t347 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE254,REF MODE368) MODE347 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t275 ,struct A68t368 *,struct A68t348 *),(struct A68t275 ,struct A68t368 *,struct A68t348 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE275,REF MODE368) MODE348 */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t260 *,struct A68t368 *,struct A68t349 *),(struct A68t260 *,struct A68t368 *,struct A68t349 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE260,REF MODE368) MODE349 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t246 *,struct A68t368 *,struct A68t350 *),(struct A68t246 *,struct A68t368 *,struct A68t350 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE246,REF MODE368) MODE350 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t247 *,struct A68t368 *,struct A68t351 *),(struct A68t247 *,struct A68t368 *,struct A68t351 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE247,REF MODE368) MODE351 */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t255 *,struct A68t368 *,struct A68t352 *),(struct A68t255 *,struct A68t368 *,struct A68t352 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE255,REF MODE368) MODE352 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t248 *,struct A68t368 *,struct A68t353 *),(struct A68t248 *,struct A68t368 *,struct A68t353 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE248,REF MODE368) MODE353 */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t273 *,struct A68t368 *,struct A68t354 *),(struct A68t273 *,struct A68t368 *,struct A68t354 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE273,REF MODE368) MODE354 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t263 ,struct A68t368 *,struct A68t355 *),(struct A68t263 ,struct A68t368 *,struct A68t355 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE263,REF MODE368) MODE355 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t262 *,struct A68t368 *,struct A68t356 *),(struct A68t262 *,struct A68t368 *,struct A68t356 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE262,REF MODE368) MODE356 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t249 *,struct A68t368 *,struct A68t357 *),(struct A68t249 *,struct A68t368 *,struct A68t357 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE249,REF MODE368) MODE357 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t250 *,struct A68t368 *,struct A68t358 *),(struct A68t250 *,struct A68t368 *,struct A68t358 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE250,REF MODE368) MODE358 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t253 *,struct A68t368 *,struct A68t359 *),(struct A68t253 *,struct A68t368 *,struct A68t359 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE253,REF MODE368) MODE359 */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t244 ,struct A68t368 *,struct A68t360 *),(struct A68t244 ,struct A68t368 *,struct A68t360 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE244,REF MODE368) MODE360 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t243 *,struct A68t368 *,struct A68t361 *),(struct A68t243 *,struct A68t368 *,struct A68t361 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE243,REF MODE368) MODE361 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t286 ,struct A68t368 *,struct A68t362 *),(struct A68t286 ,struct A68t368 *,struct A68t362 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE286,REF MODE368) MODE362 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t288 ,struct A68t368 *,struct A68t363 *),(struct A68t288 ,struct A68t368 *,struct A68t363 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE288,REF MODE368) MODE363 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t291 ,struct A68t368 *,struct A68t364 *),(struct A68t291 ,struct A68t368 *,struct A68t364 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(REF MODE291,REF MODE368) MODE364 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t290 *,struct A68t368 *,struct A68t365 *),(struct A68t290 *,struct A68t368 *,struct A68t365 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE290,REF MODE368) MODE365 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t299 ,struct A68t368 *,struct A68t366 *),(struct A68t299 ,struct A68t368 *,struct A68t366 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE299,REF MODE368) MODE366 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t303 *,struct A68t368 *,struct A68t97 ,struct A68t367 *),(struct A68t303 *,struct A68t368 *,struct A68t97 ,struct A68t367 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE303,REF MODE368,MODE97) MODE367 */
struct A68t368{
struct A68t369  Attr;
struct A68t370  Attrstr;
struct A68t371  Attrdec;
struct A68t372  Formula;
struct A68t373  Formulas;
struct A68t374  Intdec;
struct A68t375  Range;
struct A68t376  Formularange;
struct A68t377  Tstr;
struct A68t378  Type;
struct A68t379  Alternative;
struct A68t380  Alternatives;
struct A68t381  Typebody;
struct A68t382  Typedec;
struct A68t383  Constdec;
struct A68t384  Ualts;
struct A68t385  Ustr;
struct A68t386  Uchoices;
struct A68t387  Unit;
struct A68t388  Mparam;
struct A68t389  Macparams;
struct A68t390  Instance;
struct A68t391  Declaration;
struct A68t392  Printitems;
struct A68t393  Print;
struct A68t394  Fault;
struct A68t395  Names;
struct A68t396  Let;
struct A68t397  Seqchoices;
struct A68t398  Seqstep;
struct A68t399  Sequence;
struct A68t400  Make;
struct A68t401  Join;
struct A68t402  Joins;
struct A68t403  Step;
struct A68t404  Series;
struct A68t405  Fnbody;
struct A68t406  Macspec;
struct A68t407  Macspecs;
struct A68t408  Fndec;
struct A68t409  Outer;
struct A68t410  Closure;
struct A68t368 * Rest;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,MODE403,MODE404,MODE405,MODE406,MODE407,MODE408,MODE409,MODE410,REF MODE368)  */
struct A68t412 ;

A_PROCEDURE(struct A68t368 *,A68t411,(struct A68t368 *,struct A68t412 ),(struct A68t368 *,struct A68t412 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE368,MODE412) REF MODE368 */
A_VECTOR(struct A68t413 ,A68t412);
typedef struct A68t412  A68_412 ;    /* VECTOR [] MODE413 */
struct A68t413 { A68_INT mode; union {
struct A68t369  mode1;
struct A68t370  mode2;
struct A68t371  mode3;
struct A68t372  mode4;
struct A68t373  mode5;
struct A68t374  mode6;
struct A68t375  mode7;
struct A68t376  mode8;
struct A68t377  mode9;
struct A68t378  mode10;
struct A68t379  mode11;
struct A68t380  mode12;
struct A68t381  mode13;
struct A68t382  mode14;
struct A68t383  mode15;
struct A68t384  mode16;
struct A68t385  mode17;
struct A68t386  mode18;
struct A68t387  mode19;
struct A68t388  mode20;
struct A68t389  mode21;
struct A68t390  mode22;
struct A68t391  mode23;
struct A68t392  mode24;
struct A68t393  mode25;
struct A68t394  mode26;
struct A68t395  mode27;
struct A68t396  mode28;
struct A68t397  mode29;
struct A68t398  mode30;
struct A68t399  mode31;
struct A68t400  mode32;
struct A68t401  mode33;
struct A68t402  mode34;
struct A68t403  mode35;
struct A68t404  mode36;
struct A68t405  mode37;
struct A68t406  mode38;
struct A68t407  mode39;
struct A68t408  mode40;
struct A68t409  mode41;
struct A68t410  mode42;
} data; };
typedef struct A68t413  A68_413 ;    /* UNION(MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,MODE403,MODE404,MODE405,MODE406,MODE407,MODE408,MODE409,MODE410)  */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t368 *),(struct A68t368 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE368) VOID */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t303 *,struct A68t97 ,struct A68t367 *),(struct A68t303 *,struct A68t97 ,struct A68t367 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE303,MODE97) MODE367 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t303 *,struct A68t158 ,struct A68t97 ,struct A68t367 *),(struct A68t303 *,struct A68t158 ,struct A68t97 ,struct A68t367 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE303,MODE158,MODE97) MODE367 */
struct A68t416 { A68_INT mode; union {
struct A68t417  mode1;
struct A68t418  mode2;
} data; };
typedef struct A68t416  A68_416 ;    /* UNION(MODE417,MODE418)  */
struct A68t415{
A68_VC  Name;
struct A68t416  Transform;
struct A68t46  Options_descriptions;
};
typedef struct A68t415  A68_415 ;    /* STRUCT(MODE26,MODE416,MODE46)  */

A_PROCEDURE(A68_VOID ,A68t419,(A68_BOOL ,struct A68t415 *),(A68_BOOL ,struct A68t415 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(BOOL) MODE415 */
struct A68t421 ;

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t421 ),(struct A68t421 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE421) VOID */
A_VECTOR(struct A68t415 ,A68t421);
typedef struct A68t421  A68_421 ;    /* VECTOR [] MODE415 */

A_PROCEDURE(A68_VOID ,A68t422,(A68_VC *),(A68_VC *,void *));
typedef struct A68t422  A68_422 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t299 ,struct A68t303 *,struct A68t158 ,struct A68t97 ,struct A68t366 *),(struct A68t299 ,struct A68t303 *,struct A68t158 ,struct A68t97 ,struct A68t366 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE299,REF MODE303,MODE158,MODE97) MODE366 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t425,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t426);
typedef struct A68t426  A68_426 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t427);
typedef struct A68t427  A68_427 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t415 ,2,A68t429);
typedef struct A68t429  A68_429 ;    /* STRUCT 2 MODE415 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from revdinst --- */
extern A68_VOID  IXAAEXT_transform_revdinst(struct A68t303 *,struct A68t158 ,struct A68t97 ,A68_367 *);
/* --- End of imports from revdinst --- */


/* --- Imports from dinst --- */
extern A68_VOID  ZQGBTRN_transform_dinst(struct A68t303 *,struct A68t158 ,struct A68t97 ,A68_367 *);
/* --- End of imports from dinst --- */


/* --- Imports from external_transforms --- */
extern A68_46  NCAAEXT_no_options;
extern A68_VOID  RCAAEXT_do_transforms(struct A68t421 );
/* --- End of imports from external_transforms --- */


/* --- Imports from transformprocs --- */
/* --- End of imports from transformprocs --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


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
extern void EUAAEXT(void);   /* revdinst */
extern void ZNGBTRN(void);   /* dinst */
extern void BAAAEXT(void);   /* external_transforms */
extern void IHJATRN(void);   /* transformprocs */
extern void BAAATRN(void);   /* assmodes */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_426   AYAAEXT = {"$Id: ellatransform.a68,v 34.3 1995/03/29 13:05:09 ella Exp $"}; 
A_GISVEC(A68_VC ,BYAAEXT,AYAAEXT,60)
static A68_427   DYAAEXT = {"dinst"}; 
A_GISVEC(A68_VC ,EYAAEXT,DYAAEXT,5)
static A68_428   HYAAEXT = {"revdinst"}; 
A_GISVEC(A68_VC ,IYAAEXT,HYAAEXT,8)
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/ellatransform.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/revdinst.m","/u/model/ella/transform/assoc/mfiles/dinst.m","./mfiles/external_transforms.m","/u/model/ella/transform/assoc/mfiles/transformprocs.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_429  CYAAEXT;  /* collateral clause result */
A68_416  FYAAEXT;  /* OPERATORS - mode -> union mode */
A68_418  GYAAEXT;  /* procedure value */
A68_416  JYAAEXT;  /* OPERATORS - mode -> union mode */
A68_418  KYAAEXT;  /* procedure value */
A68_421  LYAAEXT;  /* OPERATORS - istruct -> vector */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
EUAAEXT();   /* USE revdinst */
ZNGBTRN();   /* USE dinst */
BAAAEXT();   /* USE external_transforms */
IHJATRN();   /* USE transformprocs */
BAAATRN();   /* USE assmodes */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/external/assoc/./a68files/ellatransform.a68";
A_config.translation_time = "Tue Apr  4 11:37:50 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XXAAEXT (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, BYAAEXT);
 /* line 100: */
CYAAEXT.data[0].Name = EYAAEXT;
GYAAEXT.fn.fn_global = ZQGBTRN_transform_dinst;
GYAAEXT.nonlocals = A68_NIL;
CYAAEXT.data[0].Transform = A_UNITE(FYAAEXT,mode2,2,GYAAEXT);
 /* line 101: */
CYAAEXT.data[0].Options_descriptions = NCAAEXT_no_options;
CYAAEXT.data[1].Name = IYAAEXT;
KYAAEXT.fn.fn_global = IXAAEXT_transform_revdinst;
KYAAEXT.nonlocals = A68_NIL;
CYAAEXT.data[1].Transform = A_UNITE(JYAAEXT,mode2,2,KYAAEXT);
 /* line 102: */
CYAAEXT.data[1].Options_descriptions = NCAAEXT_no_options;
 /* line 104: */
 /* line 105: */
RCAAEXT_do_transforms(A_HISVEC(LYAAEXT,CYAAEXT,2,A68_415 ));
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/ellatransform.a68 */
