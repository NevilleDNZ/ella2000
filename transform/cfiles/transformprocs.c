
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
/* UNAME:HHJATRN */
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
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t159{
A68_VC  Id;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t160{
A68_INT  Int;
A_PAD_INT(PAD_36)
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE160)  */
struct A68t161 { A68_INT mode; union {
struct A68t162 * mode1;
struct A68t163 * mode2;
struct A68t164 * mode3;
struct A68t165 * mode4;
struct A68t166 * mode5;
} data; };
typedef struct A68t161  A68_161 ;    /* UNION(REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166)  */
struct A68t162{
A68_INT  Attrno;
A_PAD_INT(PAD_37)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163{
A68_VC  Classname;
struct A68t159 * Strings;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t164{
struct A68t161  Elem;
struct A68t164 * Rest;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE161,REF MODE164)  */
struct A68t165{
struct A68t161  Attr;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE161)  */
struct A68t166{
A68_INT  Attrnull;
A_PAD_INT(PAD_38)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT)  */
struct A68t167{
A68_INT  Sort;
A_PAD_INT(PAD_39)
A68_VC  Attrname;
struct A68t161  Value;
struct A68t168 * Usage;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,REF MODE26,MODE161,REF MODE168)  */
struct A68t168{
A68_INT  Contextno;
A_PAD_INT(PAD_40)
A68_INT  Closureno;
A_PAD_INT(PAD_41)
A68_INT  Libv_spec;
A_PAD_INT(PAD_42)
A68_INT  Libv_body;
A_PAD_INT(PAD_43)
A68_BOOL  Import;
A_PAD_BOOL(PAD_44)
A68_BOOL  Export;
A_PAD_BOOL(PAD_45)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t169{
struct A68t161  Tag;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE161)  */
struct A68t170 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180)  */
struct A68t171{
A68_INT  Int;
A_PAD_INT(PAD_46)
A68_VC  Text;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t172{
A68_INT  Sort;
A_PAD_INT(PAD_47)
struct A68t170  Test;
struct A68t170  Standard;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,MODE170,MODE170)  */
struct A68t173{
A68_INT  Nameno;
A_PAD_INT(PAD_48)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT)  */
struct A68t174{
A68_INT  Intno;
A_PAD_INT(PAD_49)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT)  */
struct A68t175{
struct A68t170  Left;
A68_INT  Sort;
A_PAD_INT(PAD_50)
struct A68t170  Right;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE170,INT,MODE170)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t170  Right;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,MODE170)  */
struct A68t177{
struct A68t170  Cond;
struct A68t170  True;
struct A68t170  False;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE170,MODE170,MODE170)  */
struct A68t178{
struct A68t170  Formula;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE170)  */
struct A68t179{
A68_INT  Macparno;
A_PAD_INT(PAD_52)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_INT  Fnull;
A_PAD_INT(PAD_53)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
struct A68t170  Tag;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE170)  */
struct A68t182{
struct A68t170  Formula;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE170,REF MODE182)  */
struct A68t185{
struct A68t170  Lwb;
struct A68t170  Upb;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE170,MODE170)  */
struct A68t184 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
struct A68t185  mode11;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,MODE185)  */
struct A68t183{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_VC  Intname;
struct A68t161  Attr;
struct A68t184  Value;
struct A68t168 * Usage;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE184,REF MODE168)  */
struct A68t186 { A68_INT mode; union {
struct A68t187 * mode1;
struct A68t188 * mode2;
struct A68t189 * mode3;
struct A68t190 * mode4;
struct A68t191 * mode5;
struct A68t192 * mode6;
struct A68t193 * mode7;
struct A68t179 * mode8;
struct A68t194 * mode9;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE179,REF MODE194)  */
struct A68t187{
A68_INT  Typeno;
A_PAD_INT(PAD_55)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t188{
struct A68t170  Size;
struct A68t186  Elem;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE170,MODE186)  */
struct A68t189{
struct A68t186  Elem;
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE186,REF MODE189)  */
struct A68t190{
struct A68t186  From;
struct A68t186  To;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE186,MODE186)  */
struct A68t191{
struct A68t186  Type;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE186)  */
struct A68t192{
struct A68t170  Size;
struct A68t186  Char;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE170,MODE186)  */
struct A68t193{
A68_INT  Tvoid;
A_PAD_INT(PAD_56)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Tnull;
A_PAD_INT(PAD_57)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t186  Tag;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE186)  */
struct A68t196{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t197{
A68_VC  Altname;
struct A68t186  Assoc;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,MODE186)  */
struct A68t198{
A68_VC  Tagname;
struct A68t185  Range;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE185)  */
A_VECTOR(struct A68t197 ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] MODE197 */
struct A68t199 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t198 * mode2;
struct A68t195 * mode3;
struct A68t196 * mode4;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(REF MODE200,REF MODE198,REF MODE195,REF MODE196)  */
struct A68t201{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_VC  Typename;
struct A68t161  Attr;
struct A68t199  Body;
struct A68t168 * Usage;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE199,REF MODE168)  */
struct A68t202{
A68_INT  Constno;
A_PAD_INT(PAD_59)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT)  */
struct A68t203{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Primno;
A_PAD_INT(PAD_61)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT)  */
struct A68t204{
A68_INT  Typeno;
A_PAD_INT(PAD_62)
struct A68t170  Index;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,MODE170)  */
struct A68t205{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t185  Range;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,MODE185)  */
struct A68t206{
struct A68t186  Querytype;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE186)  */
struct A68t208 { A68_INT mode; union {
struct A68t202 * mode1;
struct A68t203 * mode2;
struct A68t204 * mode3;
struct A68t206 * mode4;
struct A68t209 * mode5;
struct A68t210 * mode6;
struct A68t191 * mode7;
struct A68t205 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
struct A68t213 * mode11;
struct A68t214 * mode12;
struct A68t215 * mode13;
struct A68t216 * mode14;
struct A68t217 * mode15;
struct A68t218 * mode16;
struct A68t219 * mode17;
struct A68t220 * mode18;
struct A68t221 * mode19;
struct A68t222 * mode20;
struct A68t223 * mode21;
struct A68t224 * mode22;
struct A68t225 * mode23;
struct A68t226 * mode24;
struct A68t227 * mode25;
struct A68t228 * mode26;
struct A68t229 * mode27;
struct A68t230 * mode28;
struct A68t231 * mode29;
struct A68t232 * mode30;
struct A68t233 * mode31;
struct A68t234 * mode32;
struct A68t235 * mode33;
struct A68t236 * mode34;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE202,REF MODE203,REF MODE204,REF MODE206,REF MODE209,REF MODE210,REF MODE191,REF MODE205,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Constname;
struct A68t161  Attr;
struct A68t208  Value;
struct A68t168 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE208,REF MODE168)  */
struct A68t209{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
struct A68t32  String;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t210{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_67)
A68_INT  Firstno;
A_PAD_INT(PAD_68)
A68_INT  Lastno;
A_PAD_INT(PAD_69)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,INT,INT)  */
struct A68t212{
struct A68t208  Alt;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE208,REF MODE212)  */
struct A68t213{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_INT  Nameno;
A_PAD_INT(PAD_71)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT)  */
struct A68t214{
struct A68t208  Sink;
struct A68t208  Source;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t215{
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
struct A68t208  Assoc;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,INT,MODE208)  */
struct A68t216{
struct A68t208  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_74)
A68_INT  Altno;
A_PAD_INT(PAD_75)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t217{
struct A68t208  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_76)
A68_INT  Nameno;
A_PAD_INT(PAD_77)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t218{
struct A68t208  Unit;
struct A68t170  Index;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE208,MODE170)  */
struct A68t219{
struct A68t208  Unit;
struct A68t185  Range;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE208,MODE185)  */
struct A68t220{
struct A68t208  Unit;
struct A68t208  Index;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t221{
struct A68t208  Unit;
struct A68t208  Index;
struct A68t208  From;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE208,MODE208,MODE208)  */
struct A68t222{
struct A68t170  Size;
struct A68t208  Elem;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t223{
struct A68t208  Elem;
struct A68t223 * Rest;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE208,REF MODE223)  */
struct A68t224{
A68_BOOL  String;
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t208  Left;
struct A68t208  Right;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(BOOL,INT,MODE208,MODE208)  */
A_VECTOR(struct A68t251 ,A68t250);
typedef struct A68t250  A68_250 ;    /* VECTOR [] MODE251 */
struct A68t253{
struct A68t208  Tag;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE208)  */
struct A68t248{
A68_INT  Fnno;
A_PAD_INT(PAD_80)
struct A68t250  Macparams;
struct A68t161  Attr;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,REF MODE250,MODE161)  */
struct A68t252 { A68_INT mode; union {
struct A68t169  mode1;
struct A68t181  mode2;
struct A68t195  mode3;
struct A68t253  mode4;
struct A68t248  mode5;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(MODE169,MODE181,MODE195,MODE253,MODE248)  */
struct A68t251{
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t252  Param;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT,MODE252)  */
struct A68t225{
struct A68t248  Inst;
struct A68t208  Right;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE248,MODE208)  */
struct A68t226{
struct A68t208  Left;
struct A68t248  Inst;
struct A68t208  Right;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE208,MODE248,MODE208)  */
struct A68t227{
struct A68t208  Input;
struct A68t268 * Choices;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE208,REF MODE268)  */
struct A68t228{
struct A68t170  Cond;
struct A68t208  True;
struct A68t208  False;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE170,MODE208,MODE208)  */
struct A68t229{
struct A68t170  Repl;
struct A68t208  Body;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t230{
struct A68t256 * Body;
struct A68t208  Output;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE256,MODE208)  */
struct A68t231{
struct A68t237 * Body;
struct A68t208  Output;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE237,MODE208)  */
struct A68t232{
struct A68t208  Unit;
struct A68t161  Attr;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE208,MODE161)  */
struct A68t233{
struct A68t208  Unit;
struct A68t172  Check;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE208,MODE172)  */
struct A68t234{
struct A68t208  Unit;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE208)  */
struct A68t235{
struct A68t170  Size;
struct A68t208  Char;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t236{
A68_INT  Unull;
A_PAD_INT(PAD_82)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT)  */
struct A68t239{
A68_INT  Fnno;
A_PAD_INT(PAD_83)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT)  */
struct A68t238 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
struct A68t240 * mode6;
struct A68t241 * mode7;
struct A68t242 * mode8;
struct A68t243 * mode9;
struct A68t244 * mode10;
struct A68t245 * mode11;
struct A68t246 * mode12;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246)  */
struct A68t237{
struct A68t238  Step;
struct A68t237 * Rest;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE238,REF MODE237)  */
struct A68t240{
struct A68t170  Cond;
struct A68t254 * Print;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE170,REF MODE254)  */
struct A68t241{
struct A68t170  Cond;
struct A68t254 * Fault;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE170,REF MODE254)  */
struct A68t242{
struct A68t249 * Letnames;
struct A68t208  Unit;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE249,MODE208)  */
struct A68t243{
struct A68t182 * Sizes;
struct A68t248  Inst;
struct A68t249 * Makenames;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE182,MODE248,REF MODE249)  */
struct A68t244{
struct A68t208  From;
struct A68t208  To;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t245{
struct A68t182 * Repls;
struct A68t247 * Joins;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE182,REF MODE247)  */
struct A68t246{
A68_INT  Stepnull;
A_PAD_INT(PAD_84)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
struct A68t244  Join;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE244,REF MODE247)  */
struct A68t249{
A68_INT  Nameno;
A_PAD_INT(PAD_85)
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,REF MODE249)  */
struct A68t255 { A68_INT mode; union {
A68_VC  mode1;
struct A68t181 * mode2;
} data; };
typedef struct A68t255  A68_255 ;    /* UNION(REF MODE26,REF MODE181)  */
struct A68t254{
struct A68t255  Item;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE255,REF MODE254)  */
struct A68t257 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
struct A68t240 * mode6;
struct A68t241 * mode7;
struct A68t258 * mode8;
struct A68t259 * mode9;
struct A68t260 * mode10;
struct A68t261 * mode11;
struct A68t262 * mode12;
struct A68t263 * mode13;
struct A68t264 * mode14;
struct A68t265 * mode15;
struct A68t256 * mode16;
struct A68t266 * mode17;
} data; };
typedef struct A68t257  A68_257 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239,REF MODE240,REF MODE241,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE256,REF MODE266)  */
struct A68t256{
struct A68t257  Step;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE257,REF MODE256)  */
struct A68t258{
struct A68t242  Seqlet;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE242)  */
struct A68t259{
struct A68t242  Seqvar;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE242)  */
struct A68t260{
struct A68t249 * Pvarnames;
struct A68t208  Init;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE249,MODE208)  */
struct A68t261{
struct A68t208  To;
struct A68t208  From;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t262{
struct A68t208  Input;
struct A68t267 * Choices;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE208,REF MODE267)  */
struct A68t263{
struct A68t170  Cond;
struct A68t257  True;
struct A68t257  False;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE170,MODE257,MODE257)  */
struct A68t264{
struct A68t170  Repl;
struct A68t257  Body;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t265{
A68_INT  Seqnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT)  */
struct A68t266{
struct A68t170  Size;
struct A68t257  Elem;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t267{
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t208  Test;
struct A68t257  Output;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(BOOL,INT,MODE208,MODE257,REF MODE267)  */
struct A68t268{
A68_BOOL  Check;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t208  Test;
struct A68t208  Output;
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(BOOL,INT,MODE208,MODE208,REF MODE268)  */
struct A68t269 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239)  */
struct A68t270{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_91)
A68_VC  Name;
struct A68t250  Macparams;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(BOOL,REF MODE26,REF MODE250)  */
struct A68t271{
struct A68t170  Output;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE170)  */
struct A68t272{
A68_INT  Reform;
A_PAD_INT(PAD_92)
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT)  */
struct A68t273{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_93)
struct A68t158  Ctname;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE26,INT,MODE158)  */
struct A68t274{
A68_INT  Sort;
A_PAD_INT(PAD_94)
struct A68t208  Init;
struct A68t170  Ambigtime;
struct A68t208  Ambig;
struct A68t170  Delaytime;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(INT,MODE208,MODE170,MODE208,MODE170)  */
struct A68t275{
struct A68t208  Init;
struct A68t170  Delaytime;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE208,MODE170)  */
struct A68t276{
struct A68t208  Init;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE208)  */
struct A68t277{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t170  Interval;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,MODE170,MODE208,MODE170)  */
struct A68t278{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t248  Inst;
struct A68t170  Scale;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(BOOL,INT,MODE248,MODE170,MODE208,MODE170)  */
struct A68t280 { A68_INT mode; union {
struct A68t253 * mode1;
struct A68t270 * mode2;
struct A68t271 * mode3;
struct A68t272 * mode4;
struct A68t273 * mode5;
struct A68t274 * mode6;
struct A68t275 * mode7;
struct A68t276 * mode8;
struct A68t277 * mode9;
struct A68t278 * mode10;
struct A68t279 * mode11;
struct A68t281 * mode12;
} data; };
typedef struct A68t280  A68_280 ;    /* UNION(REF MODE253,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE281)  */
struct A68t279{
struct A68t160 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_98)
struct A68t280  Fnbody;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE160,BOOL,MODE280)  */
struct A68t281{
A68_INT  Bodynull;
A_PAD_INT(PAD_99)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT)  */
struct A68t282{
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t269  Spec;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,MODE269)  */
struct A68t283{
A68_VC  Name;
struct A68t186  Type;
struct A68t161  Attr;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE26,MODE186,MODE161)  */
A_VECTOR(struct A68t282 ,A68t285);
typedef struct A68t285  A68_285 ;    /* VECTOR [] MODE282 */
A_VECTOR(struct A68t283 ,A68t286);
typedef struct A68t286  A68_286 ;    /* VECTOR [] MODE283 */
struct A68t284{
A68_INT  Sort;
A_PAD_INT(PAD_101)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_102)
A68_VC  Fnname;
struct A68t285  Macspecs;
struct A68t161  Attr;
struct A68t249 * Inputs;
struct A68t249 * Outputs;
struct A68t286  Nametypes;
struct A68t280  Fnbody;
struct A68t168 * Usage;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE285,MODE161,REF MODE249,REF MODE249,REF MODE286,MODE280,REF MODE168)  */
A_VECTOR(struct A68t167 *,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] REF MODE167 */
A_VECTOR(struct A68t183 *,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] REF MODE183 */
A_VECTOR(struct A68t201 *,A68t290);
typedef struct A68t290  A68_290 ;    /* VECTOR [] REF MODE201 */
A_VECTOR(struct A68t207 *,A68t291);
typedef struct A68t291  A68_291 ;    /* VECTOR [] REF MODE207 */
A_VECTOR(struct A68t284 *,A68t292);
typedef struct A68t292  A68_292 ;    /* VECTOR [] REF MODE284 */
struct A68t287{
struct A68t288  Attrs;
struct A68t289  Ints;
struct A68t290  Types;
struct A68t291  Consts;
struct A68t292  Fns;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292)  */
struct A68t293{
A68_INT  Closureno;
A_PAD_INT(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t287 * Environ;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,INT,REF MODE287)  */
struct A68t294{
struct A68t293  Outer;
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE293,REF MODE294)  */
A_VECTOR(struct A68t294 ,A68t296);
typedef struct A68t296  A68_296 ;    /* VECTOR [] MODE294 */
struct A68t295{
struct A68t296  Outers;
struct A68t295 * Rest;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE296,REF MODE295)  */
struct A68t297{
A68_INT  Max_closureno;
A_PAD_INT(PAD_105)
struct A68t294 * Outers;
struct A68t294 * Freelist;
struct A68t295 * Outerslist;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,REF MODE294,REF MODE294,REF MODE295)  */
A_VECTOR(struct A68t294 *,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] REF MODE294 */

A_PROCEDURE(struct A68t173 *,A68t299,(A68_INT ),(A68_INT ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(INT) REF MODE173 */

A_PROCEDURE(struct A68t174 *,A68t300,(A68_INT ),(A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT) REF MODE174 */

A_PROCEDURE(struct A68t178 *,A68t301,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE170) REF MODE178 */

A_PROCEDURE(struct A68t181 *,A68t302,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE170) REF MODE181 */

A_PROCEDURE(struct A68t187 *,A68t303,(A68_INT ),(A68_INT ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT) REF MODE187 */

A_PROCEDURE(struct A68t191 *,A68t304,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE186) REF MODE191 */

A_PROCEDURE(struct A68t195 *,A68t305,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE186) REF MODE195 */

A_PROCEDURE(struct A68t202 *,A68t306,(A68_INT ),(A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(INT) REF MODE202 */

A_PROCEDURE(struct A68t206 *,A68t307,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE186) REF MODE206 */

A_PROCEDURE(struct A68t258 *,A68t308,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE242) REF MODE258 */

A_PROCEDURE(struct A68t259 *,A68t309,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE242) REF MODE259 */

A_PROCEDURE(struct A68t234 *,A68t310,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE208) REF MODE234 */

A_PROCEDURE(struct A68t253 *,A68t311,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE208) REF MODE253 */

A_PROCEDURE(struct A68t239 *,A68t312,(A68_INT ),(A68_INT ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(INT) REF MODE239 */

A_PROCEDURE(struct A68t271 *,A68t313,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE170) REF MODE271 */

A_PROCEDURE(struct A68t276 *,A68t314,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE208) REF MODE276 */

A_PROCEDURE(struct A68t179 *,A68t315,(A68_INT ),(A68_INT ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t162 *,A68t316,(A68_INT ),(A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) REF MODE162 */

A_PROCEDURE(struct A68t169 *,A68t317,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE161) REF MODE169 */

A_PROCEDURE(struct A68t165 *,A68t318,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE161) REF MODE165 */
A_VECTOR(struct A68t159 *,A68t319);
typedef struct A68t319  A68_319 ;    /* VECTOR [] REF MODE159 */

A_PROCEDURE(A68_INT ,A68t320,(struct A68t297 *),(struct A68t297 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE297) INT */

A_PROCEDURE(struct A68t294 *,A68t321,(A68_INT ,struct A68t297 *,struct A68t97 ),(A68_INT ,struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(INT,REF MODE297,MODE97) REF MODE294 */

A_PROCEDURE(struct A68t294 *,A68t322,(struct A68t297 *),(struct A68t297 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE297) REF MODE294 */

A_PROCEDURE(struct A68t294 **,A68t323,(struct A68t293 ,struct A68t294 **,struct A68t297 *,struct A68t97 ),(struct A68t293 ,struct A68t294 **,struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE293,REF REF MODE294,REF MODE297,MODE97) REF REF MODE294 */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t294 **,struct A68t297 *,struct A68t97 ),(struct A68t294 **,struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF REF MODE294,REF MODE297,MODE97) VOID */

A_PROCEDURE(struct A68t297 *,A68t325,(void),(void *));
typedef struct A68t325  A68_325 ;    /* PROC REF MODE297 */

A_PROCEDURE(A68_INT ,A68t326,(struct A68t297 *,struct A68t97 ),(struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE297,MODE97) INT */

A_PROCEDURE(struct A68t297 *,A68t327,(struct A68t297 *,struct A68t97 ),(struct A68t297 *,struct A68t97 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE297,MODE97) REF MODE297 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t329,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 61 CHAR */
struct A68t332{
struct A68t164 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(REF MODE164,BOOL)  */
struct A68t416 ;

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t164 *,struct A68t416 *,struct A68t332 *),(struct A68t164 *,struct A68t416 *,struct A68t332 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE164,REF MODE416) MODE332 */
struct A68t334{
struct A68t161  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t334  A68_334 ;    /* STRUCT(MODE161,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t161 ,struct A68t416 *,struct A68t334 *),(struct A68t161 ,struct A68t416 *,struct A68t334 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE161,REF MODE416) MODE334 */
struct A68t336{
struct A68t167 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t336  A68_336 ;    /* STRUCT(REF MODE167,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t167 *,struct A68t416 *,struct A68t336 *),(struct A68t167 *,struct A68t416 *,struct A68t336 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(REF MODE167,REF MODE416) MODE336 */
struct A68t338{
struct A68t170  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE170,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t170 ,struct A68t416 *,struct A68t338 *),(struct A68t170 ,struct A68t416 *,struct A68t338 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE170,REF MODE416) MODE338 */
struct A68t340{
struct A68t182 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE182,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t182 *,struct A68t416 *,struct A68t340 *),(struct A68t182 *,struct A68t416 *,struct A68t340 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE182,REF MODE416) MODE340 */
struct A68t342{
struct A68t183 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE183,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t183 *,struct A68t416 *,struct A68t342 *),(struct A68t183 *,struct A68t416 *,struct A68t342 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE183,REF MODE416) MODE342 */
struct A68t344{
struct A68t185  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t344  A68_344 ;    /* STRUCT(MODE185,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t185 ,struct A68t416 *,struct A68t344 *),(struct A68t185 ,struct A68t416 *,struct A68t344 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE185,REF MODE416) MODE344 */
struct A68t346{
struct A68t184  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t346  A68_346 ;    /* STRUCT(MODE184,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t184 ,struct A68t416 *,struct A68t346 *),(struct A68t184 ,struct A68t416 *,struct A68t346 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE184,REF MODE416) MODE346 */
struct A68t348{
struct A68t189 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t348  A68_348 ;    /* STRUCT(REF MODE189,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t189 *,struct A68t416 *,struct A68t348 *),(struct A68t189 *,struct A68t416 *,struct A68t348 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE189,REF MODE416) MODE348 */
struct A68t350{
struct A68t186  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(MODE186,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t186 ,struct A68t416 *,struct A68t350 *),(struct A68t186 ,struct A68t416 *,struct A68t350 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE186,REF MODE416) MODE350 */
struct A68t352{
struct A68t197  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t352  A68_352 ;    /* STRUCT(MODE197,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t197 ,struct A68t416 *,struct A68t352 *),(struct A68t197 ,struct A68t416 *,struct A68t352 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE197,REF MODE416) MODE352 */
struct A68t354{
struct A68t200  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(REF MODE200,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t200 ,struct A68t416 *,struct A68t354 *),(struct A68t200 ,struct A68t416 *,struct A68t354 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE200,REF MODE416) MODE354 */
struct A68t356{
struct A68t199  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t356  A68_356 ;    /* STRUCT(MODE199,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t199 ,struct A68t416 *,struct A68t356 *),(struct A68t199 ,struct A68t416 *,struct A68t356 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE199,REF MODE416) MODE356 */
struct A68t358{
struct A68t201 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t358  A68_358 ;    /* STRUCT(REF MODE201,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t201 *,struct A68t416 *,struct A68t358 *),(struct A68t201 *,struct A68t416 *,struct A68t358 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE201,REF MODE416) MODE358 */
struct A68t360{
struct A68t207 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t360  A68_360 ;    /* STRUCT(REF MODE207,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t207 *,struct A68t416 *,struct A68t360 *),(struct A68t207 *,struct A68t416 *,struct A68t360 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE207,REF MODE416) MODE360 */
struct A68t362{
struct A68t212 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(REF MODE212,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t212 *,struct A68t416 *,struct A68t362 *),(struct A68t212 *,struct A68t416 *,struct A68t362 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE212,REF MODE416) MODE362 */
struct A68t364{
struct A68t223 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t364  A68_364 ;    /* STRUCT(REF MODE223,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t223 *,struct A68t416 *,struct A68t364 *),(struct A68t223 *,struct A68t416 *,struct A68t364 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE223,REF MODE416) MODE364 */
struct A68t366{
struct A68t268 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t366  A68_366 ;    /* STRUCT(REF MODE268,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t268 *,struct A68t416 *,struct A68t366 *),(struct A68t268 *,struct A68t416 *,struct A68t366 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE268,REF MODE416) MODE366 */
struct A68t368{
struct A68t208  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t368  A68_368 ;    /* STRUCT(MODE208,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t208 ,struct A68t416 *,struct A68t368 *),(struct A68t208 ,struct A68t416 *,struct A68t368 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE208,REF MODE416) MODE368 */
struct A68t370{
struct A68t252  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t370  A68_370 ;    /* STRUCT(MODE252,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t252 ,struct A68t416 *,struct A68t370 *),(struct A68t252 ,struct A68t416 *,struct A68t370 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE252,REF MODE416) MODE370 */
struct A68t372{
struct A68t250  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(REF MODE250,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t250 ,struct A68t416 *,struct A68t372 *),(struct A68t250 ,struct A68t416 *,struct A68t372 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE250,REF MODE416) MODE372 */
struct A68t374{
struct A68t248  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(MODE248,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t248 ,struct A68t416 *,struct A68t374 *),(struct A68t248 ,struct A68t416 *,struct A68t374 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE248,REF MODE416) MODE374 */
struct A68t376{
struct A68t269  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(MODE269,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t269 ,struct A68t416 *,struct A68t376 *),(struct A68t269 ,struct A68t416 *,struct A68t376 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE269,REF MODE416) MODE376 */
struct A68t378{
struct A68t254 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE254,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t254 *,struct A68t416 *,struct A68t378 *),(struct A68t254 *,struct A68t416 *,struct A68t378 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE254,REF MODE416) MODE378 */
struct A68t380{
struct A68t240 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE240,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t240 *,struct A68t416 *,struct A68t380 *),(struct A68t240 *,struct A68t416 *,struct A68t380 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE240,REF MODE416) MODE380 */
struct A68t382{
struct A68t241 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(REF MODE241,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t241 *,struct A68t416 *,struct A68t382 *),(struct A68t241 *,struct A68t416 *,struct A68t382 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE241,REF MODE416) MODE382 */
struct A68t384{
struct A68t249 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(REF MODE249,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t249 *,struct A68t416 *,struct A68t384 *),(struct A68t249 *,struct A68t416 *,struct A68t384 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE249,REF MODE416) MODE384 */
struct A68t386{
struct A68t242 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(REF MODE242,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t242 *,struct A68t416 *,struct A68t386 *),(struct A68t242 *,struct A68t416 *,struct A68t386 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE242,REF MODE416) MODE386 */
struct A68t388{
struct A68t267 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE267,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t267 *,struct A68t416 *,struct A68t388 *),(struct A68t267 *,struct A68t416 *,struct A68t388 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE267,REF MODE416) MODE388 */
struct A68t390{
struct A68t257  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(MODE257,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t257 ,struct A68t416 *,struct A68t390 *),(struct A68t257 ,struct A68t416 *,struct A68t390 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE257,REF MODE416) MODE390 */
struct A68t392{
struct A68t256 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE256,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t256 *,struct A68t416 *,struct A68t392 *),(struct A68t256 *,struct A68t416 *,struct A68t392 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE256,REF MODE416) MODE392 */
struct A68t394{
struct A68t243 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(REF MODE243,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t243 *,struct A68t416 *,struct A68t394 *),(struct A68t243 *,struct A68t416 *,struct A68t394 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE243,REF MODE416) MODE394 */
struct A68t396{
struct A68t244 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE244,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t244 *,struct A68t416 *,struct A68t396 *),(struct A68t244 *,struct A68t416 *,struct A68t396 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE244,REF MODE416) MODE396 */
struct A68t398{
struct A68t247 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(REF MODE247,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t247 *,struct A68t416 *,struct A68t398 *),(struct A68t247 *,struct A68t416 *,struct A68t398 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE247,REF MODE416) MODE398 */
struct A68t400{
struct A68t238  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(MODE238,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t238 ,struct A68t416 *,struct A68t400 *),(struct A68t238 ,struct A68t416 *,struct A68t400 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE238,REF MODE416) MODE400 */
struct A68t402{
struct A68t237 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(REF MODE237,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t237 *,struct A68t416 *,struct A68t402 *),(struct A68t237 *,struct A68t416 *,struct A68t402 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE237,REF MODE416) MODE402 */
struct A68t404{
struct A68t280  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(MODE280,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t280 ,struct A68t416 *,struct A68t404 *),(struct A68t280 ,struct A68t416 *,struct A68t404 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE280,REF MODE416) MODE404 */
struct A68t406{
struct A68t282  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE282,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t282 ,struct A68t416 *,struct A68t406 *),(struct A68t282 ,struct A68t416 *,struct A68t406 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE282,REF MODE416) MODE406 */
struct A68t408{
struct A68t285  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(REF MODE285,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t285 ,struct A68t416 *,struct A68t408 *),(struct A68t285 ,struct A68t416 *,struct A68t408 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE285,REF MODE416) MODE408 */
struct A68t410{
struct A68t284 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t410  A68_410 ;    /* STRUCT(REF MODE284,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t284 *,struct A68t416 *,struct A68t410 *),(struct A68t284 *,struct A68t416 *,struct A68t410 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE284,REF MODE416) MODE410 */
struct A68t412{
struct A68t293  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t412  A68_412 ;    /* STRUCT(MODE293,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t293 ,struct A68t416 *,struct A68t412 *),(struct A68t293 ,struct A68t416 *,struct A68t412 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE293,REF MODE416) MODE412 */
struct A68t414{
struct A68t297 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t414  A68_414 ;    /* STRUCT(REF MODE297,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t297 *,struct A68t416 *,struct A68t97 ,struct A68t414 *),(struct A68t297 *,struct A68t416 *,struct A68t97 ,struct A68t414 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE297,REF MODE416,MODE97) MODE414 */
struct A68t416{
struct A68t335  Attr;
struct A68t333  Attrstr;
struct A68t337  Attrdec;
struct A68t339  Formula;
struct A68t341  Formulas;
struct A68t343  Intdec;
struct A68t345  Range;
struct A68t347  Formularange;
struct A68t349  Tstr;
struct A68t351  Type;
struct A68t353  Alternative;
struct A68t355  Alternatives;
struct A68t357  Typebody;
struct A68t359  Typedec;
struct A68t361  Constdec;
struct A68t363  Ualts;
struct A68t365  Ustr;
struct A68t367  Uchoices;
struct A68t369  Unit;
struct A68t371  Mparam;
struct A68t373  Macparams;
struct A68t375  Instance;
struct A68t377  Declaration;
struct A68t379  Printitems;
struct A68t381  Print;
struct A68t383  Fault;
struct A68t385  Names;
struct A68t387  Let;
struct A68t389  Seqchoices;
struct A68t391  Seqstep;
struct A68t393  Sequence;
struct A68t395  Make;
struct A68t397  Join;
struct A68t399  Joins;
struct A68t401  Step;
struct A68t403  Series;
struct A68t405  Fnbody;
struct A68t407  Macspec;
struct A68t409  Macspecs;
struct A68t411  Fndec;
struct A68t413  Outer;
struct A68t415  Closure;
struct A68t416 * Rest;
};
typedef struct A68t416  A68_416 ;    /* STRUCT(MODE335,MODE333,MODE337,MODE339,MODE341,MODE343,MODE345,MODE347,MODE349,MODE351,MODE353,MODE355,MODE357,MODE359,MODE361,MODE363,MODE365,MODE367,MODE369,MODE371,MODE373,MODE375,MODE377,MODE379,MODE381,MODE383,MODE385,MODE387,MODE389,MODE391,MODE393,MODE395,MODE397,MODE399,MODE401,MODE403,MODE405,MODE407,MODE409,MODE411,MODE413,MODE415,REF MODE416)  */
struct A68t417 { A68_INT mode; union {
struct A68t335  mode1;
struct A68t333  mode2;
struct A68t337  mode3;
struct A68t339  mode4;
struct A68t341  mode5;
struct A68t343  mode6;
struct A68t345  mode7;
struct A68t347  mode8;
struct A68t349  mode9;
struct A68t351  mode10;
struct A68t353  mode11;
struct A68t355  mode12;
struct A68t357  mode13;
struct A68t359  mode14;
struct A68t361  mode15;
struct A68t363  mode16;
struct A68t365  mode17;
struct A68t367  mode18;
struct A68t369  mode19;
struct A68t371  mode20;
struct A68t373  mode21;
struct A68t375  mode22;
struct A68t377  mode23;
struct A68t379  mode24;
struct A68t381  mode25;
struct A68t383  mode26;
struct A68t385  mode27;
struct A68t387  mode28;
struct A68t389  mode29;
struct A68t391  mode30;
struct A68t393  mode31;
struct A68t395  mode32;
struct A68t397  mode33;
struct A68t399  mode34;
struct A68t401  mode35;
struct A68t403  mode36;
struct A68t405  mode37;
struct A68t407  mode38;
struct A68t409  mode39;
struct A68t411  mode40;
struct A68t413  mode41;
struct A68t415  mode42;
} data; };
typedef struct A68t417  A68_417 ;    /* UNION(MODE335,MODE333,MODE337,MODE339,MODE341,MODE343,MODE345,MODE347,MODE349,MODE351,MODE353,MODE355,MODE357,MODE359,MODE361,MODE363,MODE365,MODE367,MODE369,MODE371,MODE373,MODE375,MODE377,MODE379,MODE381,MODE383,MODE385,MODE387,MODE389,MODE391,MODE393,MODE395,MODE397,MODE399,MODE401,MODE403,MODE405,MODE407,MODE409,MODE411,MODE413,MODE415)  */
A_VECTOR(struct A68t417 ,A68t418);
typedef struct A68t418  A68_418 ;    /* VECTOR [] MODE417 */

A_PROCEDURE(struct A68t416 *,A68t419,(struct A68t416 *,struct A68t418 ),(struct A68t416 *,struct A68t418 ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE416,MODE418) REF MODE416 */
A_ISTRUCT(A68_CHAR ,14,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t416 *),(struct A68t416 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE416) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t422);
typedef struct A68t422  A68_422 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t424);
typedef struct A68t424  A68_424 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t425);
typedef struct A68t425  A68_425 ;    /* STRUCT 7 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t426);
typedef struct A68t426  A68_426 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t427,(A68_BOOL ,struct A68t200 *),(A68_BOOL ,struct A68t200 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(BOOL) MODE200 */

A_PROCEDURE(A68_VOID ,A68t428,(A68_BOOL ,struct A68t250 *),(A68_BOOL ,struct A68t250 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(BOOL) MODE250 */
struct A68t429{
struct A68t255  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t429  A68_429 ;    /* STRUCT(MODE255,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t430,(A68_BOOL ,struct A68t285 *),(A68_BOOL ,struct A68t285 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(BOOL) MODE285 */

A_PROCEDURE(A68_VOID ,A68t431,(A68_BOOL ,struct A68t286 *),(A68_BOOL ,struct A68t286 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(BOOL) MODE286 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_BOOL ,struct A68t288 *),(A68_BOOL ,struct A68t288 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(BOOL) MODE288 */

A_PROCEDURE(A68_VOID ,A68t433,(A68_BOOL ,struct A68t289 *),(A68_BOOL ,struct A68t289 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(BOOL) MODE289 */

A_PROCEDURE(A68_VOID ,A68t434,(A68_BOOL ,struct A68t290 *),(A68_BOOL ,struct A68t290 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(BOOL) MODE290 */

A_PROCEDURE(A68_VOID ,A68t435,(A68_BOOL ,struct A68t291 *),(A68_BOOL ,struct A68t291 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(BOOL) MODE291 */

A_PROCEDURE(A68_VOID ,A68t436,(A68_BOOL ,struct A68t292 *),(A68_BOOL ,struct A68t292 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(BOOL) MODE292 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from closureprocs --- */
extern A68_294 * ELCATRN_find_outers(A68_INT ,struct A68t297 *,struct A68t97 );
extern A68_297 * DPCATRN_copy_closure(struct A68t297 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_189 * GAAATRN_niltstr;
extern A68_212 * HAAATRN_nilualts;
extern A68_223 * IAAATRN_nilustr;
extern A68_268 * JAAATRN_niluchoices;
extern A68_254 * MAAATRN_nilprintitems;
extern A68_249 * NAAATRN_nilnames;
extern A68_267 * PAAATRN_nilseqchoices;
extern A68_256 * QAAATRN_nilsequence;
extern A68_247 * RAAATRN_niljoins;
extern A68_237 * SAAATRN_nilseries;
extern A68_167 * UAAATRN_nilattrdec;
extern A68_183 * VAAATRN_nilintdec;
extern A68_201 * WAAATRN_niltypedec;
extern A68_207 * XAAATRN_nilconstdec;
extern A68_284 * YAAATRN_nilfndec;
extern A68_250  ABAATRN_nilmacparams;
extern A68_182 * BBAATRN_nilformulas;
extern A68_164 * DBAATRN_nilattrstr;
extern A68_285  FBAATRN_nilmacspecs;
extern A68_294 * HBAATRN_nilouters;
extern A68_174 * OEAATRN_makefname(A68_INT );
extern A68_178 * YEAATRN_makefbracket(struct A68t170 );
extern A68_181 * DFAATRN_makeformulatag(struct A68t170 );
extern A68_187 * IFAATRN_maketname(A68_INT );
extern A68_191 * SFAATRN_maketbracket(struct A68t186 );
extern A68_195 * XFAATRN_maketypetag(struct A68t186 );
extern A68_202 * CGAATRN_makecname(A68_INT );
extern A68_191 * HGAATRN_makectype(struct A68t186 );
extern A68_206 * MGAATRN_makecquery(struct A68t186 );
extern A68_234 * RGAATRN_makeubracket(struct A68t208 );
extern A68_253 * WGAATRN_makeunittag(struct A68t208 );
extern A68_239 * LHAATRN_makefnname(A68_INT );
extern A68_271 * QHAATRN_makearith(struct A68t170 );
extern A68_276 * VHAATRN_makeram(struct A68t208 );
extern A68_162 * UDAATRN_makeattrname(A68_INT );
extern A68_169 * EEAATRN_makeattrtag(struct A68t161 );
extern A68_165 * ZDAATRN_makeattrbracket(struct A68t161 );
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_98  SHAAOSI_system;
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
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_330   LHJATRN = {"$Id: transformprocs.a68,v 34.2 1995/03/29 13:03:07 ella Exp $"}; 
A_GISVEC(A68_VC ,MHJATRN,LHJATRN,61)
A68_416 * NHJATRN_niltprocs;
static A68_416 * OHJATRN_freelist;
static A68_INT  PHJATRN_n_allocated;
static A68_INT  QHJATRN_n_reallocated;
static A68_420   HLJATRN = {"make_newtprocs"}; 
A_GISVEC(A68_VC ,ILJATRN,HLJATRN,14)
static A68_422   TLJATRN = {" transform procedures allocated, "}; 
A_GISVEC(A68_VC ,ULJATRN,TLJATRN,33)
static A68_423   YLJATRN = {" re-allocated and "}; 
A_GISVEC(A68_VC ,ZLJATRN,YLJATRN,18)
static A68_424   DMJATRN = {" freed"}; 
A_GISVEC(A68_VC ,EMJATRN,DMJATRN,6)
static A68_426   QSJATRN = {"formularange"}; 
A_GISVEC(A68_VC ,RSJATRN,QSJATRN,12)
static A68_424   LNKATRN = {"fcheck"}; 
A_GISVEC(A68_VC ,MNKATRN,LNKATRN,6)
A68_416 * AWLATRN_nulltprocs;
typedef struct   /* env of non-global proc */
{
A68_200 * YWJATRN_new;
} IXJATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_250 * HRKATRN_new;
} SRKATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_285 * BMLATRN_new;
} LMLATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_416 * Tprocs;
A68_286 * UMLATRN_nametypes;
A68_BOOL * VMLATRN_changed;
} ZMLATRN_update_nametypes;
typedef struct   /* env of non-global proc */
{
A68_114  XMLATRN_update_nametypes;
} UNLATRN_names;
typedef struct   /* env of non-global proc */
{
A68_288 * NPLATRN_attrs;
A68_BOOL * IPLATRN_ac;
A68_289 * OPLATRN_ints;
A68_BOOL * JPLATRN_ic;
A68_290 * PPLATRN_types;
A68_BOOL * KPLATRN_tc;
A68_291 * QPLATRN_consts;
A68_BOOL * LPLATRN_cc;
A68_292 * RPLATRN_fns;
A68_BOOL * MPLATRN_fc;
} WPLATRN_declaration;
typedef struct   /* env of non-global proc */
{
A68_286 * UMLATRN_nametypes;
} KNLATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_288 * NPLATRN_attrs;
} HQLATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_289 * OPLATRN_ints;
} WQLATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_290 * PPLATRN_types;
} LRLATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_291 * QPLATRN_consts;
} ASLATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_292 * RPLATRN_fns;
} PSLATRN_generator;

A68_416 * THJATRN_make_newtprocs(A68_416 * Old, A68_418  Procs);

A68_VOID  MLJATRN_discard_tprocs(A68_416 * Tprocs);

A68_VOID  OLJATRN_clear_tprocs(void);

A_STATIC A68_VOID  MMJATRN_attrstr(A68_164 * St, A68_416 * Tprocs, A68_332  *ReturnedValue);

A_STATIC A68_VOID  CNJATRN_attr(A68_161  Attr, A68_416 * Tprocs, A68_334  *ReturnedValue);

A_STATIC A68_VOID  XNJATRN_attrdec(A68_167 * Adec, A68_416 * Tprocs, A68_336  *ReturnedValue);

A_STATIC A68_VOID  JOJATRN_formula(A68_170  Form, A68_416 * Tprocs, A68_338  *ReturnedValue);

A_STATIC A68_VOID  WQJATRN_formulas(A68_182 * Fs, A68_416 * Tprocs, A68_340  *ReturnedValue);

A_STATIC A68_VOID  MRJATRN_range(A68_185  Rge, A68_416 * Tprocs, A68_344  *ReturnedValue);

A_STATIC A68_VOID  ZRJATRN_formularange(A68_184  Fr, A68_416 * Tprocs, A68_346  *ReturnedValue);

A_STATIC A68_VOID  WSJATRN_intdec(A68_183 * Idec, A68_416 * Tprocs, A68_342  *ReturnedValue);

A_STATIC A68_VOID  MTJATRN_tstr(A68_189 * St, A68_416 * Tprocs, A68_348  *ReturnedValue);

A_STATIC A68_VOID  CUJATRN_type(A68_186  Ty, A68_416 * Tprocs, A68_350  *ReturnedValue);

A_STATIC A68_VOID  OWJATRN_alternative(A68_197  Alt, A68_416 * Tprocs, A68_352  *ReturnedValue);

A_STATIC A68_VOID  XWJATRN_alternatives(A68_200  Alts, A68_416 * Tprocs, A68_354  *ReturnedValue);

A_STATIC A68_VOID  HXJATRN_generator(A68_BOOL  FXJATRN_anonymous, A68_200  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RXJATRN_typebody(A68_199  Tbody, A68_416 * Tprocs, A68_356  *ReturnedValue);

A_STATIC A68_VOID  WYJATRN_typedec(A68_201 * Tdec, A68_416 * Tprocs, A68_358  *ReturnedValue);

A_STATIC A68_VOID  MZJATRN_constdec(A68_207 * Cdec, A68_416 * Tprocs, A68_360  *ReturnedValue);

A_STATIC A68_VOID  CAKATRN_ualts(A68_212 * Ua, A68_416 * Tprocs, A68_362  *ReturnedValue);

A_STATIC A68_VOID  SAKATRN_ustr(A68_223 * St, A68_416 * Tprocs, A68_364  *ReturnedValue);

A_STATIC A68_VOID  IBKATRN_uchoices(A68_268 * U, A68_416 * Tprocs, A68_366  *ReturnedValue);

A_STATIC A68_VOID  BCKATRN_unit(A68_208  U, A68_416 * Tprocs, A68_368  *ReturnedValue);

A_STATIC A68_VOID  MPKATRN_mparam(A68_252  Mp, A68_416 * Tprocs, A68_370  *ReturnedValue);

A_STATIC A68_VOID  GRKATRN_macparams(A68_250  Mps, A68_416 * Tprocs, A68_372  *ReturnedValue);

A_STATIC A68_VOID  RRKATRN_generator(A68_BOOL  PRKATRN_anonymous, A68_250  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DSKATRN_instance(A68_248  Inst, A68_416 * Tprocs, A68_374  *ReturnedValue);

A_STATIC A68_VOID  QSKATRN_declaration(A68_269  Dec, A68_416 * Tprocs, A68_376  *ReturnedValue);

A_STATIC A68_VOID  VSKATRN_printitems(A68_254 * Pi, A68_416 * Tprocs, A68_378  *ReturnedValue);

A_STATIC A68_VOID  UTKATRN_print(A68_240 * P, A68_416 * Tprocs, A68_380  *ReturnedValue);

A_STATIC A68_VOID  JUKATRN_fault(A68_241 * F, A68_416 * Tprocs, A68_382  *ReturnedValue);

A_STATIC A68_VOID  YUKATRN_names(A68_249 * N, A68_416 * Tprocs, A68_384  *ReturnedValue);

A_STATIC A68_VOID  KVKATRN_let(A68_242 * L, A68_416 * Tprocs, A68_386  *ReturnedValue);

A_STATIC A68_VOID  ZVKATRN_seqchoices(A68_267 * Sc, A68_416 * Tprocs, A68_388  *ReturnedValue);

A_STATIC A68_VOID  SWKATRN_seqstep(A68_257  Ss, A68_416 * Tprocs, A68_390  *ReturnedValue);

A_STATIC A68_VOID  TBLATRN_sequence(A68_256 * Ss, A68_416 * Tprocs, A68_392  *ReturnedValue);

A_STATIC A68_VOID  JCLATRN_make(A68_243 * M, A68_416 * Tprocs, A68_394  *ReturnedValue);

A_STATIC A68_VOID  BDLATRN_join(A68_244 * J, A68_416 * Tprocs, A68_396  *ReturnedValue);

A_STATIC A68_VOID  QDLATRN_joins(A68_247 * Js, A68_416 * Tprocs, A68_398  *ReturnedValue);

A_STATIC A68_VOID  GELATRN_step(A68_238  Step, A68_416 * Tprocs, A68_400  *ReturnedValue);

A_STATIC A68_VOID  OGLATRN_series(A68_237 * Ser, A68_416 * Tprocs, A68_402  *ReturnedValue);

A_STATIC A68_VOID  EHLATRN_fnbody(A68_280  Body, A68_416 * Tprocs, A68_404  *ReturnedValue);

A_STATIC A68_VOID  PLLATRN_macspec(A68_282  Ms, A68_416 * Tprocs, A68_406  *ReturnedValue);

A_STATIC A68_VOID  YLLATRN_macspecs(A68_285  Mss, A68_416 * Tprocs, A68_408  *ReturnedValue);

A_STATIC A68_VOID  KMLATRN_generator(A68_BOOL  IMLATRN_anonymous, A68_285  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TMLATRN_fndec(A68_284 * Fdec, A68_416 * Tprocs, A68_410  *ReturnedValue);

A_STATIC A68_VOID  YMLATRN_update_nametypes(A68_INT  Nameno, void *NonLocals);

A_STATIC A68_VOID  JNLATRN_generator(A68_BOOL  HNLATRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TNLATRN_names(A68_249 * N, A68_416 * Tprocs, A68_384  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GPLATRN_outer(A68_293  Outer, A68_416 * Tprocs, A68_412  *ReturnedValue);

A_STATIC A68_VOID  VPLATRN_declaration(A68_269  Dec, A68_416 * Tprocs, A68_376  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GQLATRN_generator(A68_BOOL  EQLATRN_anonymous, A68_288  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VQLATRN_generator(A68_BOOL  TQLATRN_anonymous, A68_289  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KRLATRN_generator(A68_BOOL  IRLATRN_anonymous, A68_290  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZRLATRN_generator(A68_BOOL  XRLATRN_anonymous, A68_291  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OSLATRN_generator(A68_BOOL  MSLATRN_anonymous, A68_292  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XTLATRN_closure(A68_297 * Cl, A68_416 * Tprocs, A68_97  Msg, A68_414  *ReturnedValue);

A68_VOID  DWLATRN_null_attr(A68_161  A, A68_416 * Tprocs, A68_334  *ReturnedValue);

A68_VOID  IWLATRN_null_formula(A68_170  F, A68_416 * Tprocs, A68_338  *ReturnedValue);

A68_VOID  NWLATRN_null_type(A68_186  T, A68_416 * Tprocs, A68_350  *ReturnedValue);

A68_VOID  SWLATRN_null_unit(A68_208  U, A68_416 * Tprocs, A68_368  *ReturnedValue);

A_STATIC A68_VOID  JNLATRN_generator(A68_BOOL  HNLATRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((KNLATRN_generator *)NonLocals)->x)
{ 
A68_286  LNLATRN;  /* clause result */
A68_286  MNLATRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 1360: */
MNLATRN.upb = (*NL(UMLATRN_nametypes)).upb ;
( HNLATRN_anonymous? A_VLOC(A68_283 ,MNLATRN): A_VHEAP(A68_283 ,MNLATRN) );
LNLATRN = MNLATRN;
} 
*ReturnedValue = (LNLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GQLATRN_generator(A68_BOOL  EQLATRN_anonymous, A68_288  *ReturnedValue, void *NonLocals)
#define NL(x) (((HQLATRN_generator *)NonLocals)->x)
{ 
A68_288  IQLATRN;  /* clause result */
A68_288  JQLATRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 1430: */
JQLATRN.upb = (*NL(NPLATRN_attrs)).upb ;
( EQLATRN_anonymous? A_VLOC(A68_167 *,JQLATRN): A_VHEAP(A68_167 *,JQLATRN) );
IQLATRN = JQLATRN;
} 
*ReturnedValue = (IQLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VQLATRN_generator(A68_BOOL  TQLATRN_anonymous, A68_289  *ReturnedValue, void *NonLocals)
#define NL(x) (((WQLATRN_generator *)NonLocals)->x)
{ 
A68_289  XQLATRN;  /* clause result */
A68_289  YQLATRN;  /* OPERATORS - dynamic generator */
{ 
YQLATRN.upb = (*NL(OPLATRN_ints)).upb ;
( TQLATRN_anonymous? A_VLOC(A68_183 *,YQLATRN): A_VHEAP(A68_183 *,YQLATRN) );
XQLATRN = YQLATRN;
} 
*ReturnedValue = (XQLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KRLATRN_generator(A68_BOOL  IRLATRN_anonymous, A68_290  *ReturnedValue, void *NonLocals)
#define NL(x) (((LRLATRN_generator *)NonLocals)->x)
{ 
A68_290  MRLATRN;  /* clause result */
A68_290  NRLATRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 1461: */
NRLATRN.upb = (*NL(PPLATRN_types)).upb ;
( IRLATRN_anonymous? A_VLOC(A68_201 *,NRLATRN): A_VHEAP(A68_201 *,NRLATRN) );
MRLATRN = NRLATRN;
} 
*ReturnedValue = (MRLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRLATRN_generator(A68_BOOL  XRLATRN_anonymous, A68_291  *ReturnedValue, void *NonLocals)
#define NL(x) (((ASLATRN_generator *)NonLocals)->x)
{ 
A68_291  BSLATRN;  /* clause result */
A68_291  CSLATRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 1477: */
CSLATRN.upb = (*NL(QPLATRN_consts)).upb ;
( XRLATRN_anonymous? A_VLOC(A68_207 *,CSLATRN): A_VHEAP(A68_207 *,CSLATRN) );
BSLATRN = CSLATRN;
} 
*ReturnedValue = (BSLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OSLATRN_generator(A68_BOOL  MSLATRN_anonymous, A68_292  *ReturnedValue, void *NonLocals)
#define NL(x) (((PSLATRN_generator *)NonLocals)->x)
{ 
A68_292  QSLATRN;  /* clause result */
A68_292  RSLATRN;  /* OPERATORS - dynamic generator */
{ 
RSLATRN.upb = (*NL(RPLATRN_fns)).upb ;
( MSLATRN_anonymous? A_VLOC(A68_284 *,RSLATRN): A_VHEAP(A68_284 *,RSLATRN) );
QSLATRN = RSLATRN;
} 
*ReturnedValue = (QSLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HXJATRN_generator(A68_BOOL  FXJATRN_anonymous, A68_200  *ReturnedValue, void *NonLocals)
#define NL(x) (((IXJATRN_generator *)NonLocals)->x)
{ 
A68_200  JXJATRN;  /* clause result */
A68_200  KXJATRN;  /* OPERATORS - dynamic generator */
{ 
KXJATRN.upb = (*NL(YWJATRN_new)).upb ;
( FXJATRN_anonymous? A_VLOC(A68_197 ,KXJATRN): A_VHEAP(A68_197 ,KXJATRN) );
JXJATRN = KXJATRN;
} 
*ReturnedValue = (JXJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RRKATRN_generator(A68_BOOL  PRKATRN_anonymous, A68_250  *ReturnedValue, void *NonLocals)
#define NL(x) (((SRKATRN_generator *)NonLocals)->x)
{ 
A68_250  TRKATRN;  /* clause result */
A68_250  URKATRN;  /* OPERATORS - dynamic generator */
{ 
URKATRN.upb = (*NL(HRKATRN_new)).upb ;
( PRKATRN_anonymous? A_VLOC(A68_251 ,URKATRN): A_VHEAP(A68_251 ,URKATRN) );
TRKATRN = URKATRN;
} 
*ReturnedValue = (TRKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KMLATRN_generator(A68_BOOL  IMLATRN_anonymous, A68_285  *ReturnedValue, void *NonLocals)
#define NL(x) (((LMLATRN_generator *)NonLocals)->x)
{ 
A68_285  MMLATRN;  /* clause result */
A68_285  NMLATRN;  /* OPERATORS - dynamic generator */
{ 
NMLATRN.upb = (*NL(BMLATRN_new)).upb ;
( IMLATRN_anonymous? A_VLOC(A68_282 ,NMLATRN): A_VHEAP(A68_282 ,NMLATRN) );
MMLATRN = NMLATRN;
} 
*ReturnedValue = (MMLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YMLATRN_update_nametypes(A68_INT  Nameno, void *NonLocals)
#define NL(x) (((ZMLATRN_update_nametypes *)NonLocals)->x)
{ 
A68_335  ANLATRN;  /* CALL */
A68_334  BNLATRN;  /* avoid structure result */
A68_334  CNLATRN_ac;
A68_351  DNLATRN;  /* CALL */
A68_350  ENLATRN;  /* avoid structure result */
A68_350  FNLATRN_t;
A68_BOOL  GNLATRN;  /* optbool result */
A68_431  INLATRN_generator;   /* proc value of non-global proc */
A68_286  NNLATRN;  /* avoid structure result */
A68_161 * ONLATRN;  /* YIELD */
A68_186 * PNLATRN;  /* YIELD */
A_PROC_ENTRY(update_nametypes);
 /* line 1353: */
 /* line 1354: */
{ 
ANLATRN = (*(&(NL(Tprocs)->Attr))) ;
A_CALLPROC(ANLATRN,((*(&((&A_VINDEX((*NL(UMLATRN_nametypes)),Nameno))->Attr))), NL(Tprocs), &BNLATRN),((*(&((&A_VINDEX((*NL(UMLATRN_nametypes)),Nameno))->Attr))), NL(Tprocs), &BNLATRN,(ANLATRN).nonlocals));
CNLATRN_ac = BNLATRN;
 /* line 1355: */
DNLATRN = (*(&(NL(Tprocs)->Type))) ;
A_CALLPROC(DNLATRN,((*(&((&A_VINDEX((*NL(UMLATRN_nametypes)),Nameno))->Type))), NL(Tprocs), &ENLATRN),((*(&((&A_VINDEX((*NL(UMLATRN_nametypes)),Nameno))->Type))), NL(Tprocs), &ENLATRN,(DNLATRN).nonlocals));
FNLATRN_t = ENLATRN;
 /* line 1356: */
 /* line 1357: */
GNLATRN = FNLATRN_t.C;
if ( ! GNLATRN )
{GNLATRN = CNLATRN_ac.C;
}
if ( GNLATRN )
{ 
 /* line 1358: */
if ( !(*NL(VMLATRN_changed)) )
{ 
(*NL(VMLATRN_changed)) = A68_TRUE;
 /* line 1359: */
A_CLOSURE( INLATRN_generator, JNLATRN_generator, KNLATRN_generator );
(( KNLATRN_generator * ) ( INLATRN_generator.nonlocals )) -> UMLATRN_nametypes = NL(UMLATRN_nametypes);
 /* line 1361: */
A_CALLPROC(INLATRN_generator,(A68_FALSE, &NNLATRN),(A68_FALSE, &NNLATRN,(INLATRN_generator).nonlocals));
A_VASSIGN2((*NL(UMLATRN_nametypes)),NNLATRN,A68_283 ) ;
(*NL(UMLATRN_nametypes)) = NNLATRN;
} 
 /* line 1362: */
ONLATRN = (&((&A_VINDEX((*NL(UMLATRN_nametypes)),Nameno))->Attr)) ;
(*ONLATRN) = CNLATRN_ac.A;
 /* line 1363: */
 /* line 1364: */
 /* line 1365: */
PNLATRN = (&((&A_VINDEX((*NL(UMLATRN_nametypes)),Nameno))->Type)) ;
(*PNLATRN) = FNLATRN_t.T;
} 
} 
A_PROC_EXIT(update_nametypes);
return;
} 
#undef NL

A_STATIC A68_VOID  TNLATRN_names(A68_249 * N, A68_416 * Tprocs, A68_384  *ReturnedValue, void *NonLocals)
#define NL(x) (((UNLATRN_names *)NonLocals)->x)
{ 
A68_384  VNLATRN;  /* collateral clause result */
A68_384  WNLATRN;  /* clause result */
A68_385  XNLATRN;  /* CALL */
A68_384  YNLATRN;  /* avoid structure result */
A68_384  ZNLATRN_nc;
A68_384  AOLATRN;  /* collateral clause result */
A68_249  BOLATRN;  /* collateral clause result */
A68_249 * COLATRN;  /* YIELD */
A68_384  DOLATRN;  /* collateral clause result */
A_PROC_ENTRY(names);
 /* line 1368: */
 /* line 1369: */
if ( (N==NAAATRN_nilnames) )
{ 
VNLATRN.N = N;
 /* line 1370: */
VNLATRN.C = A68_FALSE;
WNLATRN = VNLATRN;
} 
else
{ 
A_CALLPROC(NL(XMLATRN_update_nametypes),((*(&(N->Nameno)))),((*(&(N->Nameno))),(NL(XMLATRN_update_nametypes)).nonlocals));
 /* line 1371: */
XNLATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(XNLATRN,((*(&(N->Rest))), Tprocs, &YNLATRN),((*(&(N->Rest))), Tprocs, &YNLATRN,(XNLATRN).nonlocals));
ZNLATRN_nc = YNLATRN;
 /* line 1372: */
 /* line 1373: */
if ( ZNLATRN_nc.C )
{ 
BOLATRN.Nameno = (*(&(N->Nameno)));
BOLATRN.Rest = ZNLATRN_nc.N;
COLATRN = A_HEAP(A68_249 ) ;
(*COLATRN) = BOLATRN ;
AOLATRN.N = COLATRN;
 /* line 1374: */
AOLATRN.C = A68_TRUE;
WNLATRN = AOLATRN;
} 
else
{ 
DOLATRN.N = N;
 /* line 1375: */
 /* line 1376: */
DOLATRN.C = A68_FALSE;
WNLATRN = DOLATRN;
} 
} 
A_PROC_EXIT(names);
*ReturnedValue = (WNLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VPLATRN_declaration(A68_269  Dec, A68_416 * Tprocs, A68_376  *ReturnedValue, void *NonLocals)
#define NL(x) (((WPLATRN_declaration *)NonLocals)->x)
{ 
A68_269  XPLATRN;  /* united object - for case conformity */
A68_162  YPLATRN_ano;
A68_INT  ZPLATRN;  /* YIELD */
A68_167 * AQLATRN_adec;
A68_337  BQLATRN;  /* CALL */
A68_336  CQLATRN;  /* avoid structure result */
A68_336  DQLATRN_adecc;
A68_432  FQLATRN_generator;   /* proc value of non-global proc */
A68_288  KQLATRN;  /* avoid structure result */
A68_INT  LQLATRN;  /* YIELD */
A68_167 ** MQLATRN;  /* YIELD */
A68_174  NQLATRN_ino;
A68_INT  OQLATRN;  /* YIELD */
A68_183 * PQLATRN_idec;
A68_343  QQLATRN;  /* CALL */
A68_342  RQLATRN;  /* avoid structure result */
A68_342  SQLATRN_idecc;
A68_433  UQLATRN_generator;   /* proc value of non-global proc */
A68_289  ZQLATRN;  /* avoid structure result */
A68_INT  ARLATRN;  /* YIELD */
A68_183 ** BRLATRN;  /* YIELD */
A68_187  CRLATRN_tno;
A68_INT  DRLATRN;  /* YIELD */
A68_201 * ERLATRN_tdec;
A68_359  FRLATRN;  /* CALL */
A68_358  GRLATRN;  /* avoid structure result */
A68_358  HRLATRN_tdecc;
A68_434  JRLATRN_generator;   /* proc value of non-global proc */
A68_290  ORLATRN;  /* avoid structure result */
A68_INT  PRLATRN;  /* YIELD */
A68_201 ** QRLATRN;  /* YIELD */
A68_202  RRLATRN_cno;
A68_INT  SRLATRN;  /* YIELD */
A68_207 * TRLATRN_cdec;
A68_361  URLATRN;  /* CALL */
A68_360  VRLATRN;  /* avoid structure result */
A68_360  WRLATRN_cdecc;
A68_435  YRLATRN_generator;   /* proc value of non-global proc */
A68_291  DSLATRN;  /* avoid structure result */
A68_INT  ESLATRN;  /* YIELD */
A68_207 ** FSLATRN;  /* YIELD */
A68_239  GSLATRN_fno;
A68_INT  HSLATRN;  /* YIELD */
A68_284 * ISLATRN_fdec;
A68_411  JSLATRN;  /* CALL */
A68_410  KSLATRN;  /* avoid structure result */
A68_410  LSLATRN_fdecc;
A68_436  NSLATRN_generator;   /* proc value of non-global proc */
A68_292  SSLATRN;  /* avoid structure result */
A68_INT  TSLATRN;  /* YIELD */
A68_284 ** USLATRN;  /* YIELD */
A68_376  VSLATRN;  /* collateral clause result */
A68_376  WSLATRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 1419: */
 /* line 1420: */
{ 
 /* line 1421: */
XPLATRN = Dec ;
switch ( XPLATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
YPLATRN_ano = (XPLATRN.data.mode1);
 /* line 1422: */
{ 
 /* line 1423: */
if ( (YPLATRN_ano.Attrno>0) )
{ 
ZPLATRN = YPLATRN_ano.Attrno ;
AQLATRN_adec = (*(&A_VINDEX((*NL(NPLATRN_attrs)),ZPLATRN)));
 /* line 1424: */
BQLATRN = (*(&(Tprocs->Attrdec))) ;
A_CALLPROC(BQLATRN,(AQLATRN_adec, Tprocs, &CQLATRN),(AQLATRN_adec, Tprocs, &CQLATRN,(BQLATRN).nonlocals));
DQLATRN_adecc = CQLATRN;
 /* line 1425: */
 /* line 1426: */
if ( DQLATRN_adecc.C )
{ 
 /* line 1427: */
if ( (*NL(IPLATRN_ac)) )
{ 
 /* line 1428: */
(*AQLATRN_adec) = (*DQLATRN_adecc.A);
} 
else
{ 
(*NL(IPLATRN_ac)) = A68_TRUE;
 /* line 1429: */
A_CLOSURE( FQLATRN_generator, GQLATRN_generator, HQLATRN_generator );
(( HQLATRN_generator * ) ( FQLATRN_generator.nonlocals )) -> NPLATRN_attrs = NL(NPLATRN_attrs);
A_CALLPROC(FQLATRN_generator,(A68_FALSE, &KQLATRN),(A68_FALSE, &KQLATRN,(FQLATRN_generator).nonlocals));
A_VASSIGN2((*NL(NPLATRN_attrs)),KQLATRN,A68_167 *) ;
(*NL(NPLATRN_attrs)) = KQLATRN;
 /* line 1431: */
 /* line 1432: */
 /* line 1433: */
 /* line 1434: */
 /* line 1435: */
 /* line 1437: */
LQLATRN = YPLATRN_ano.Attrno ;
MQLATRN = (&A_VINDEX((*NL(NPLATRN_attrs)),LQLATRN)) ;
(*MQLATRN) = DQLATRN_adecc.A;
} 
} 
} 
} 
break;
case 2: /* STRUCT(INT)  */
NQLATRN_ino = (XPLATRN.data.mode2);
 /* line 1438: */
{ 
 /* line 1439: */
if ( (NQLATRN_ino.Intno>0) )
{ 
OQLATRN = NQLATRN_ino.Intno ;
PQLATRN_idec = (*(&A_VINDEX((*NL(OPLATRN_ints)),OQLATRN)));
 /* line 1440: */
QQLATRN = (*(&(Tprocs->Intdec))) ;
A_CALLPROC(QQLATRN,(PQLATRN_idec, Tprocs, &RQLATRN),(PQLATRN_idec, Tprocs, &RQLATRN,(QQLATRN).nonlocals));
SQLATRN_idecc = RQLATRN;
 /* line 1441: */
 /* line 1442: */
if ( SQLATRN_idecc.C )
{ 
 /* line 1443: */
if ( (*NL(JPLATRN_ic)) )
{ 
 /* line 1444: */
(*PQLATRN_idec) = (*SQLATRN_idecc.I);
} 
else
{ 
(*NL(JPLATRN_ic)) = A68_TRUE;
 /* line 1445: */
A_CLOSURE( UQLATRN_generator, VQLATRN_generator, WQLATRN_generator );
(( WQLATRN_generator * ) ( UQLATRN_generator.nonlocals )) -> OPLATRN_ints = NL(OPLATRN_ints);
A_CALLPROC(UQLATRN_generator,(A68_FALSE, &ZQLATRN),(A68_FALSE, &ZQLATRN,(UQLATRN_generator).nonlocals));
A_VASSIGN2((*NL(OPLATRN_ints)),ZQLATRN,A68_183 *) ;
(*NL(OPLATRN_ints)) = ZQLATRN;
 /* line 1446: */
 /* line 1447: */
 /* line 1448: */
 /* line 1449: */
 /* line 1450: */
 /* line 1452: */
ARLATRN = NQLATRN_ino.Intno ;
BRLATRN = (&A_VINDEX((*NL(OPLATRN_ints)),ARLATRN)) ;
(*BRLATRN) = SQLATRN_idecc.I;
} 
} 
} 
} 
break;
case 3: /* STRUCT(INT)  */
CRLATRN_tno = (XPLATRN.data.mode3);
 /* line 1453: */
{ 
 /* line 1454: */
if ( (CRLATRN_tno.Typeno>0) )
{ 
DRLATRN = CRLATRN_tno.Typeno ;
ERLATRN_tdec = (*(&A_VINDEX((*NL(PPLATRN_types)),DRLATRN)));
 /* line 1455: */
FRLATRN = (*(&(Tprocs->Typedec))) ;
A_CALLPROC(FRLATRN,(ERLATRN_tdec, Tprocs, &GRLATRN),(ERLATRN_tdec, Tprocs, &GRLATRN,(FRLATRN).nonlocals));
HRLATRN_tdecc = GRLATRN;
 /* line 1456: */
 /* line 1457: */
if ( HRLATRN_tdecc.C )
{ 
 /* line 1458: */
if ( (*NL(KPLATRN_tc)) )
{ 
 /* line 1459: */
(*ERLATRN_tdec) = (*HRLATRN_tdecc.T);
} 
else
{ 
(*NL(KPLATRN_tc)) = A68_TRUE;
 /* line 1460: */
A_CLOSURE( JRLATRN_generator, KRLATRN_generator, LRLATRN_generator );
(( LRLATRN_generator * ) ( JRLATRN_generator.nonlocals )) -> PPLATRN_types = NL(PPLATRN_types);
A_CALLPROC(JRLATRN_generator,(A68_FALSE, &ORLATRN),(A68_FALSE, &ORLATRN,(JRLATRN_generator).nonlocals));
A_VASSIGN2((*NL(PPLATRN_types)),ORLATRN,A68_201 *) ;
(*NL(PPLATRN_types)) = ORLATRN;
 /* line 1462: */
 /* line 1463: */
 /* line 1464: */
 /* line 1465: */
 /* line 1466: */
 /* line 1468: */
PRLATRN = CRLATRN_tno.Typeno ;
QRLATRN = (&A_VINDEX((*NL(PPLATRN_types)),PRLATRN)) ;
(*QRLATRN) = HRLATRN_tdecc.T;
} 
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
RRLATRN_cno = (XPLATRN.data.mode4);
 /* line 1469: */
{ 
 /* line 1470: */
if ( (RRLATRN_cno.Constno>0) )
{ 
SRLATRN = RRLATRN_cno.Constno ;
TRLATRN_cdec = (*(&A_VINDEX((*NL(QPLATRN_consts)),SRLATRN)));
 /* line 1471: */
URLATRN = (*(&(Tprocs->Constdec))) ;
A_CALLPROC(URLATRN,(TRLATRN_cdec, Tprocs, &VRLATRN),(TRLATRN_cdec, Tprocs, &VRLATRN,(URLATRN).nonlocals));
WRLATRN_cdecc = VRLATRN;
 /* line 1472: */
 /* line 1473: */
if ( WRLATRN_cdecc.C )
{ 
 /* line 1474: */
if ( (*NL(LPLATRN_cc)) )
{ 
 /* line 1475: */
(*TRLATRN_cdec) = (*WRLATRN_cdecc.Co);
} 
else
{ 
(*NL(LPLATRN_cc)) = A68_TRUE;
 /* line 1476: */
A_CLOSURE( YRLATRN_generator, ZRLATRN_generator, ASLATRN_generator );
(( ASLATRN_generator * ) ( YRLATRN_generator.nonlocals )) -> QPLATRN_consts = NL(QPLATRN_consts);
A_CALLPROC(YRLATRN_generator,(A68_FALSE, &DSLATRN),(A68_FALSE, &DSLATRN,(YRLATRN_generator).nonlocals));
A_VASSIGN2((*NL(QPLATRN_consts)),DSLATRN,A68_207 *) ;
(*NL(QPLATRN_consts)) = DSLATRN;
 /* line 1478: */
 /* line 1479: */
 /* line 1480: */
 /* line 1481: */
 /* line 1482: */
 /* line 1484: */
ESLATRN = RRLATRN_cno.Constno ;
FSLATRN = (&A_VINDEX((*NL(QPLATRN_consts)),ESLATRN)) ;
(*FSLATRN) = WRLATRN_cdecc.Co;
} 
} 
} 
} 
break;
case 5: /* STRUCT(INT)  */
GSLATRN_fno = (XPLATRN.data.mode5);
 /* line 1485: */
{ 
 /* line 1486: */
if ( (GSLATRN_fno.Fnno>0) )
{ 
HSLATRN = GSLATRN_fno.Fnno ;
ISLATRN_fdec = (*(&A_VINDEX((*NL(RPLATRN_fns)),HSLATRN)));
 /* line 1487: */
JSLATRN = (*(&(Tprocs->Fndec))) ;
A_CALLPROC(JSLATRN,(ISLATRN_fdec, Tprocs, &KSLATRN),(ISLATRN_fdec, Tprocs, &KSLATRN,(JSLATRN).nonlocals));
LSLATRN_fdecc = KSLATRN;
 /* line 1488: */
 /* line 1489: */
if ( LSLATRN_fdecc.C )
{ 
 /* line 1490: */
if ( (*NL(MPLATRN_fc)) )
{ 
 /* line 1491: */
(*ISLATRN_fdec) = (*LSLATRN_fdecc.F);
} 
else
{ 
(*NL(MPLATRN_fc)) = A68_TRUE;
 /* line 1492: */
A_CLOSURE( NSLATRN_generator, OSLATRN_generator, PSLATRN_generator );
(( PSLATRN_generator * ) ( NSLATRN_generator.nonlocals )) -> RPLATRN_fns = NL(RPLATRN_fns);
A_CALLPROC(NSLATRN_generator,(A68_FALSE, &SSLATRN),(A68_FALSE, &SSLATRN,(NSLATRN_generator).nonlocals));
A_VASSIGN2((*NL(RPLATRN_fns)),SSLATRN,A68_284 *) ;
(*NL(RPLATRN_fns)) = SSLATRN;
 /* line 1493: */
 /* line 1494: */
 /* line 1495: */
 /* line 1496: */
 /* line 1497: */
 /* line 1498: */
TSLATRN = GSLATRN_fno.Fnno ;
USLATRN = (&A_VINDEX((*NL(RPLATRN_fns)),TSLATRN)) ;
(*USLATRN) = LSLATRN_fdecc.F;
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1499: */
VSLATRN.D = Dec;
 /* line 1500: */
VSLATRN.C = A68_FALSE;
WSLATRN = VSLATRN;
} 
A_PROC_EXIT(declaration);
*ReturnedValue = (WSLATRN);
return;
} 
#undef NL
 /* line 245: */

A68_416 * THJATRN_make_newtprocs(A68_416 * Old, A68_418  Procs)
{ 
A68_416 * UHJATRN;  /* clause result */
A68_416 * VHJATRN_free;
A68_416 * WHJATRN_new;
A68_417  XHJATRN_proc;
A68_417 * YHJATRN;  /* forall control - []x */
A68_INT  ZHJATRN;  /* forall loop counter */
A68_417  AIJATRN;  /* united object - for case conformity */
A68_335  BIJATRN_attr;
A68_335 * CIJATRN;  /* YIELD */
A68_333  DIJATRN_attrstr;
A68_333 * EIJATRN;  /* YIELD */
A68_337  FIJATRN_attrdec;
A68_337 * GIJATRN;  /* YIELD */
A68_339  HIJATRN_formula;
A68_339 * IIJATRN;  /* YIELD */
A68_341  JIJATRN_formulas;
A68_341 * KIJATRN;  /* YIELD */
A68_343  LIJATRN_intdec;
A68_343 * MIJATRN;  /* YIELD */
A68_345  NIJATRN_range;
A68_345 * OIJATRN;  /* YIELD */
A68_347  PIJATRN_frange;
A68_347 * QIJATRN;  /* YIELD */
A68_349  RIJATRN_tstr;
A68_349 * SIJATRN;  /* YIELD */
A68_351  TIJATRN_type;
A68_351 * UIJATRN;  /* YIELD */
A68_353  VIJATRN_alternative;
A68_353 * WIJATRN;  /* YIELD */
A68_355  XIJATRN_alternatives;
A68_355 * YIJATRN;  /* YIELD */
A68_357  ZIJATRN_typebody;
A68_357 * AJJATRN;  /* YIELD */
A68_359  BJJATRN_typedec;
A68_359 * CJJATRN;  /* YIELD */
A68_361  DJJATRN_constdec;
A68_361 * EJJATRN;  /* YIELD */
A68_363  FJJATRN_ualts;
A68_363 * GJJATRN;  /* YIELD */
A68_365  HJJATRN_ustr;
A68_365 * IJJATRN;  /* YIELD */
A68_367  JJJATRN_uchoices;
A68_367 * KJJATRN;  /* YIELD */
A68_369  LJJATRN_unit;
A68_369 * MJJATRN;  /* YIELD */
A68_371  NJJATRN_mparam;
A68_371 * OJJATRN;  /* YIELD */
A68_373  PJJATRN_macparams;
A68_373 * QJJATRN;  /* YIELD */
A68_375  RJJATRN_instance;
A68_375 * SJJATRN;  /* YIELD */
A68_377  TJJATRN_declaration;
A68_377 * UJJATRN;  /* YIELD */
A68_379  VJJATRN_printitems;
A68_379 * WJJATRN;  /* YIELD */
A68_381  XJJATRN_print;
A68_381 * YJJATRN;  /* YIELD */
A68_383  ZJJATRN_fault;
A68_383 * AKJATRN;  /* YIELD */
A68_385  BKJATRN_names;
A68_385 * CKJATRN;  /* YIELD */
A68_387  DKJATRN_let;
A68_387 * EKJATRN;  /* YIELD */
A68_389  FKJATRN_seqchoices;
A68_389 * GKJATRN;  /* YIELD */
A68_391  HKJATRN_seqstep;
A68_391 * IKJATRN;  /* YIELD */
A68_393  JKJATRN_sequence;
A68_393 * KKJATRN;  /* YIELD */
A68_395  LKJATRN_make;
A68_395 * MKJATRN;  /* YIELD */
A68_397  NKJATRN_join;
A68_397 * OKJATRN;  /* YIELD */
A68_399  PKJATRN_joins;
A68_399 * QKJATRN;  /* YIELD */
A68_401  RKJATRN_step;
A68_401 * SKJATRN;  /* YIELD */
A68_403  TKJATRN_series;
A68_403 * UKJATRN;  /* YIELD */
A68_405  VKJATRN_fnbody;
A68_405 * WKJATRN;  /* YIELD */
A68_407  XKJATRN_macspec;
A68_407 * YKJATRN;  /* YIELD */
A68_409  ZKJATRN_macspecs;
A68_409 * ALJATRN;  /* YIELD */
A68_411  BLJATRN_fndec;
A68_411 * CLJATRN;  /* YIELD */
A68_413  DLJATRN_outer;
A68_413 * ELJATRN;  /* YIELD */
A68_415  FLJATRN_closure;
A68_415 * GLJATRN;  /* YIELD */
A68_46  JLJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * KLJATRN;  /* clause result */
A_PROC_ENTRY(make_newtprocs);
 /* line 246: */
 /* line 247: */
{ 
 /* line 248: */
if ( (OHJATRN_freelist==NHJATRN_niltprocs) )
{ 
PHJATRN_n_allocated+=1;
 /* line 249: */
 /* line 250: */
UHJATRN = A_HEAP(A68_416 );
} 
else
{ 
VHJATRN_free = OHJATRN_freelist;
 /* line 251: */
QHJATRN_n_reallocated+=1;
 /* line 252: */
OHJATRN_freelist = (*(&(OHJATRN_freelist->Rest)));
 /* line 253: */
 /* line 254: */
UHJATRN = VHJATRN_free;
} 
WHJATRN_new = UHJATRN;
 /* line 255: */
(*WHJATRN_new) = (*Old);
 /* line 256: */
 /* line 257: */
ZHJATRN = Procs.upb -1;
YHJATRN = Procs.data;
for (;ZHJATRN-- >= 0;
(YHJATRN++
) )
{
XHJATRN_proc = *YHJATRN;
 /* line 258: */
AIJATRN = XHJATRN_proc ;
switch ( AIJATRN.mode )
{ 
case 1: /* PROC(MODE161,REF MODE416) MODE334 */
BIJATRN_attr = (AIJATRN.data.mode1);
 /* line 259: */
CIJATRN = (&(WHJATRN_new->Attr)) ;
(*CIJATRN) = BIJATRN_attr;
break;
case 2: /* PROC(REF MODE164,REF MODE416) MODE332 */
DIJATRN_attrstr = (AIJATRN.data.mode2);
 /* line 260: */
EIJATRN = (&(WHJATRN_new->Attrstr)) ;
(*EIJATRN) = DIJATRN_attrstr;
break;
case 3: /* PROC(REF MODE167,REF MODE416) MODE336 */
FIJATRN_attrdec = (AIJATRN.data.mode3);
 /* line 262: */
GIJATRN = (&(WHJATRN_new->Attrdec)) ;
(*GIJATRN) = FIJATRN_attrdec;
break;
case 4: /* PROC(MODE170,REF MODE416) MODE338 */
HIJATRN_formula = (AIJATRN.data.mode4);
 /* line 263: */
IIJATRN = (&(WHJATRN_new->Formula)) ;
(*IIJATRN) = HIJATRN_formula;
break;
case 5: /* PROC(REF MODE182,REF MODE416) MODE340 */
JIJATRN_formulas = (AIJATRN.data.mode5);
 /* line 264: */
KIJATRN = (&(WHJATRN_new->Formulas)) ;
(*KIJATRN) = JIJATRN_formulas;
break;
case 6: /* PROC(REF MODE183,REF MODE416) MODE342 */
LIJATRN_intdec = (AIJATRN.data.mode6);
 /* line 265: */
MIJATRN = (&(WHJATRN_new->Intdec)) ;
(*MIJATRN) = LIJATRN_intdec;
break;
case 7: /* PROC(MODE185,REF MODE416) MODE344 */
NIJATRN_range = (AIJATRN.data.mode7);
 /* line 266: */
OIJATRN = (&(WHJATRN_new->Range)) ;
(*OIJATRN) = NIJATRN_range;
break;
case 8: /* PROC(MODE184,REF MODE416) MODE346 */
PIJATRN_frange = (AIJATRN.data.mode8);
 /* line 268: */
QIJATRN = (&(WHJATRN_new->Formularange)) ;
(*QIJATRN) = PIJATRN_frange;
break;
case 9: /* PROC(REF MODE189,REF MODE416) MODE348 */
RIJATRN_tstr = (AIJATRN.data.mode9);
 /* line 269: */
SIJATRN = (&(WHJATRN_new->Tstr)) ;
(*SIJATRN) = RIJATRN_tstr;
break;
case 10: /* PROC(MODE186,REF MODE416) MODE350 */
TIJATRN_type = (AIJATRN.data.mode10);
 /* line 270: */
UIJATRN = (&(WHJATRN_new->Type)) ;
(*UIJATRN) = TIJATRN_type;
break;
case 11: /* PROC(MODE197,REF MODE416) MODE352 */
VIJATRN_alternative = (AIJATRN.data.mode11);
 /* line 271: */
WIJATRN = (&(WHJATRN_new->Alternative)) ;
(*WIJATRN) = VIJATRN_alternative;
break;
case 12: /* PROC(REF MODE200,REF MODE416) MODE354 */
XIJATRN_alternatives = (AIJATRN.data.mode12);
 /* line 272: */
YIJATRN = (&(WHJATRN_new->Alternatives)) ;
(*YIJATRN) = XIJATRN_alternatives;
break;
case 13: /* PROC(MODE199,REF MODE416) MODE356 */
ZIJATRN_typebody = (AIJATRN.data.mode13);
 /* line 273: */
AJJATRN = (&(WHJATRN_new->Typebody)) ;
(*AJJATRN) = ZIJATRN_typebody;
break;
case 14: /* PROC(REF MODE201,REF MODE416) MODE358 */
BJJATRN_typedec = (AIJATRN.data.mode14);
 /* line 275: */
CJJATRN = (&(WHJATRN_new->Typedec)) ;
(*CJJATRN) = BJJATRN_typedec;
break;
case 15: /* PROC(REF MODE207,REF MODE416) MODE360 */
DJJATRN_constdec = (AIJATRN.data.mode15);
 /* line 277: */
EJJATRN = (&(WHJATRN_new->Constdec)) ;
(*EJJATRN) = DJJATRN_constdec;
break;
case 16: /* PROC(REF MODE212,REF MODE416) MODE362 */
FJJATRN_ualts = (AIJATRN.data.mode16);
 /* line 278: */
GJJATRN = (&(WHJATRN_new->Ualts)) ;
(*GJJATRN) = FJJATRN_ualts;
break;
case 17: /* PROC(REF MODE223,REF MODE416) MODE364 */
HJJATRN_ustr = (AIJATRN.data.mode17);
 /* line 279: */
IJJATRN = (&(WHJATRN_new->Ustr)) ;
(*IJJATRN) = HJJATRN_ustr;
break;
case 18: /* PROC(REF MODE268,REF MODE416) MODE366 */
JJJATRN_uchoices = (AIJATRN.data.mode18);
 /* line 280: */
KJJATRN = (&(WHJATRN_new->Uchoices)) ;
(*KJJATRN) = JJJATRN_uchoices;
break;
case 19: /* PROC(MODE208,REF MODE416) MODE368 */
LJJATRN_unit = (AIJATRN.data.mode19);
 /* line 282: */
MJJATRN = (&(WHJATRN_new->Unit)) ;
(*MJJATRN) = LJJATRN_unit;
break;
case 20: /* PROC(MODE252,REF MODE416) MODE370 */
NJJATRN_mparam = (AIJATRN.data.mode20);
 /* line 283: */
OJJATRN = (&(WHJATRN_new->Mparam)) ;
(*OJJATRN) = NJJATRN_mparam;
break;
case 21: /* PROC(REF MODE250,REF MODE416) MODE372 */
PJJATRN_macparams = (AIJATRN.data.mode21);
 /* line 284: */
QJJATRN = (&(WHJATRN_new->Macparams)) ;
(*QJJATRN) = PJJATRN_macparams;
break;
case 22: /* PROC(MODE248,REF MODE416) MODE374 */
RJJATRN_instance = (AIJATRN.data.mode22);
 /* line 286: */
SJJATRN = (&(WHJATRN_new->Instance)) ;
(*SJJATRN) = RJJATRN_instance;
break;
case 23: /* PROC(MODE269,REF MODE416) MODE376 */
TJJATRN_declaration = (AIJATRN.data.mode23);
 /* line 288: */
UJJATRN = (&(WHJATRN_new->Declaration)) ;
(*UJJATRN) = TJJATRN_declaration;
break;
case 24: /* PROC(REF MODE254,REF MODE416) MODE378 */
VJJATRN_printitems = (AIJATRN.data.mode24);
 /* line 289: */
WJJATRN = (&(WHJATRN_new->Printitems)) ;
(*WJJATRN) = VJJATRN_printitems;
break;
case 25: /* PROC(REF MODE240,REF MODE416) MODE380 */
XJJATRN_print = (AIJATRN.data.mode25);
 /* line 290: */
YJJATRN = (&(WHJATRN_new->Print)) ;
(*YJJATRN) = XJJATRN_print;
break;
case 26: /* PROC(REF MODE241,REF MODE416) MODE382 */
ZJJATRN_fault = (AIJATRN.data.mode26);
 /* line 292: */
AKJATRN = (&(WHJATRN_new->Fault)) ;
(*AKJATRN) = ZJJATRN_fault;
break;
case 27: /* PROC(REF MODE249,REF MODE416) MODE384 */
BKJATRN_names = (AIJATRN.data.mode27);
 /* line 293: */
CKJATRN = (&(WHJATRN_new->Names)) ;
(*CKJATRN) = BKJATRN_names;
break;
case 28: /* PROC(REF MODE242,REF MODE416) MODE386 */
DKJATRN_let = (AIJATRN.data.mode28);
 /* line 294: */
EKJATRN = (&(WHJATRN_new->Let)) ;
(*EKJATRN) = DKJATRN_let;
break;
case 29: /* PROC(REF MODE267,REF MODE416) MODE388 */
FKJATRN_seqchoices = (AIJATRN.data.mode29);
 /* line 295: */
GKJATRN = (&(WHJATRN_new->Seqchoices)) ;
(*GKJATRN) = FKJATRN_seqchoices;
break;
case 30: /* PROC(MODE257,REF MODE416) MODE390 */
HKJATRN_seqstep = (AIJATRN.data.mode30);
 /* line 296: */
IKJATRN = (&(WHJATRN_new->Seqstep)) ;
(*IKJATRN) = HKJATRN_seqstep;
break;
case 31: /* PROC(REF MODE256,REF MODE416) MODE392 */
JKJATRN_sequence = (AIJATRN.data.mode31);
 /* line 298: */
KKJATRN = (&(WHJATRN_new->Sequence)) ;
(*KKJATRN) = JKJATRN_sequence;
break;
case 32: /* PROC(REF MODE243,REF MODE416) MODE394 */
LKJATRN_make = (AIJATRN.data.mode32);
 /* line 299: */
MKJATRN = (&(WHJATRN_new->Make)) ;
(*MKJATRN) = LKJATRN_make;
break;
case 33: /* PROC(REF MODE244,REF MODE416) MODE396 */
NKJATRN_join = (AIJATRN.data.mode33);
 /* line 300: */
OKJATRN = (&(WHJATRN_new->Join)) ;
(*OKJATRN) = NKJATRN_join;
break;
case 34: /* PROC(REF MODE247,REF MODE416) MODE398 */
PKJATRN_joins = (AIJATRN.data.mode34);
 /* line 301: */
QKJATRN = (&(WHJATRN_new->Joins)) ;
(*QKJATRN) = PKJATRN_joins;
break;
case 35: /* PROC(MODE238,REF MODE416) MODE400 */
RKJATRN_step = (AIJATRN.data.mode35);
 /* line 302: */
SKJATRN = (&(WHJATRN_new->Step)) ;
(*SKJATRN) = RKJATRN_step;
break;
case 36: /* PROC(REF MODE237,REF MODE416) MODE402 */
TKJATRN_series = (AIJATRN.data.mode36);
 /* line 304: */
UKJATRN = (&(WHJATRN_new->Series)) ;
(*UKJATRN) = TKJATRN_series;
break;
case 37: /* PROC(MODE280,REF MODE416) MODE404 */
VKJATRN_fnbody = (AIJATRN.data.mode37);
 /* line 305: */
WKJATRN = (&(WHJATRN_new->Fnbody)) ;
(*WKJATRN) = VKJATRN_fnbody;
break;
case 38: /* PROC(MODE282,REF MODE416) MODE406 */
XKJATRN_macspec = (AIJATRN.data.mode38);
 /* line 306: */
YKJATRN = (&(WHJATRN_new->Macspec)) ;
(*YKJATRN) = XKJATRN_macspec;
break;
case 39: /* PROC(REF MODE285,REF MODE416) MODE408 */
ZKJATRN_macspecs = (AIJATRN.data.mode39);
 /* line 307: */
ALJATRN = (&(WHJATRN_new->Macspecs)) ;
(*ALJATRN) = ZKJATRN_macspecs;
break;
case 40: /* PROC(REF MODE284,REF MODE416) MODE410 */
BLJATRN_fndec = (AIJATRN.data.mode40);
 /* line 309: */
CLJATRN = (&(WHJATRN_new->Fndec)) ;
(*CLJATRN) = BLJATRN_fndec;
break;
case 41: /* PROC(MODE293,REF MODE416) MODE412 */
DLJATRN_outer = (AIJATRN.data.mode41);
 /* line 311: */
ELJATRN = (&(WHJATRN_new->Outer)) ;
(*ELJATRN) = DLJATRN_outer;
break;
case 42: /* PROC(REF MODE297,REF MODE416,MODE97) MODE414 */
FLJATRN_closure = (AIJATRN.data.mode42);
 /* line 312: */
GLJATRN = (&(WHJATRN_new->Closure)) ;
(*GLJATRN) = FLJATRN_closure;
break;
default: 
 /* line 313: */
 /* line 314: */
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(JLJATRN,ILJATRN,A68_VC )),(SHAAOSI_system, A_HVEC(JLJATRN,ILJATRN,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
break;
} 
}
 /* line 315: */
 /* line 316: */
KLJATRN = WHJATRN_new;
} 
A_PROC_EXIT(make_newtprocs);
return( KLJATRN );
} 
#undef NL

A68_VOID  MLJATRN_discard_tprocs(A68_416 * Tprocs)
{ 
A68_416 ** NLJATRN;  /* YIELD */
A_PROC_ENTRY(discard_tprocs);
 /* line 320: */
 /* line 321: */
{ 
NLJATRN = (&(Tprocs->Rest)) ;
(*NLJATRN) = OHJATRN_freelist;
 /* line 322: */
 /* line 323: */
OHJATRN_freelist = Tprocs;
} 
A_PROC_EXIT(discard_tprocs);
return;
} 
#undef NL

A68_VOID  OLJATRN_clear_tprocs(void)
{ 
A68_416 * PLJATRN_ptr;
A68_INT  QLJATRN_count;
A68_425  RLJATRN;  /* collateral clause result */
A68_52  SLJATRN;  /* OPERATORS - mode -> union mode */
A68_52  VLJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  WLJATRN;  /* YIELD */
A68_52  XLJATRN;  /* OPERATORS - mode -> union mode */
A68_52  AMJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  BMJATRN;  /* YIELD */
A68_52  CMJATRN;  /* OPERATORS - mode -> union mode */
A68_52  FMJATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GMJATRN;  /* YIELD */
A68_52  HMJATRN;  /* OPERATORS - mode -> union mode */
A68_56  IMJATRN;  /* procedure value */
A68_85  JMJATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(clear_tprocs);
{ 
PLJATRN_ptr = OHJATRN_freelist;
 /* line 330: */
QLJATRN_count = 0;
 /* line 331: */
for ( ;; )
{ 
if ( !((PLJATRN_ptr!=NHJATRN_niltprocs)) ) break;
QLJATRN_count+=1;
PLJATRN_ptr = (*(&(PLJATRN_ptr->Rest)));
}
 /* line 332: */
RLJATRN.data[0] = A_UNITE(SLJATRN,mode1,1,PHJATRN_n_allocated);
 /* line 333: */
WLJATRN = ULJATRN ;
RLJATRN.data[1] = A_UNITE(VLJATRN,mode7,7,WLJATRN);
RLJATRN.data[2] = A_UNITE(XLJATRN,mode1,1,QHJATRN_n_reallocated);
BMJATRN = ZLJATRN ;
RLJATRN.data[3] = A_UNITE(AMJATRN,mode7,7,BMJATRN);
RLJATRN.data[4] = A_UNITE(CMJATRN,mode1,1,QLJATRN_count);
 /* line 334: */
GMJATRN = EMJATRN ;
RLJATRN.data[5] = A_UNITE(FMJATRN,mode7,7,GMJATRN);
IMJATRN.fn.fn_global = LRAAOSL_newline;
IMJATRN.nonlocals = A68_NIL;
RLJATRN.data[6] = A_UNITE(HMJATRN,mode12,12,IMJATRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(JMJATRN,RLJATRN,7,A68_52 ));
 /* line 335: */
 /* line 336: */
OHJATRN_freelist = NHJATRN_niltprocs;
} 
A_PROC_EXIT(clear_tprocs);
return;
} 
#undef NL

A_STATIC A68_VOID  MMJATRN_attrstr(A68_164 * St, A68_416 * Tprocs, A68_332  *ReturnedValue)
{ 
A68_332  NMJATRN;  /* collateral clause result */
A68_332  OMJATRN;  /* clause result */
A68_335  PMJATRN;  /* CALL */
A68_334  QMJATRN;  /* avoid structure result */
A68_334  RMJATRN_a;
A68_333  SMJATRN;  /* CALL */
A68_332  TMJATRN;  /* avoid structure result */
A68_332  UMJATRN_asc;
A68_BOOL  VMJATRN;  /* optbool result */
A68_332  WMJATRN;  /* collateral clause result */
A68_164  XMJATRN;  /* collateral clause result */
A68_164 * YMJATRN;  /* YIELD */
A68_332  ZMJATRN;  /* collateral clause result */
A_PROC_ENTRY(attrstr);
 /* line 346: */
 /* line 347: */
if ( (St==DBAATRN_nilattrstr) )
{ 
NMJATRN.A = St;
 /* line 348: */
NMJATRN.C = A68_FALSE;
OMJATRN = NMJATRN;
} 
else
{ 
PMJATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(PMJATRN,((*(&(St->Elem))), Tprocs, &QMJATRN),((*(&(St->Elem))), Tprocs, &QMJATRN,(PMJATRN).nonlocals));
RMJATRN_a = QMJATRN;
 /* line 349: */
SMJATRN = (*(&(Tprocs->Attrstr))) ;
A_CALLPROC(SMJATRN,((*(&(St->Rest))), Tprocs, &TMJATRN),((*(&(St->Rest))), Tprocs, &TMJATRN,(SMJATRN).nonlocals));
UMJATRN_asc = TMJATRN;
 /* line 350: */
 /* line 351: */
VMJATRN = RMJATRN_a.C;
if ( ! VMJATRN )
{VMJATRN = UMJATRN_asc.C;
}
if ( VMJATRN )
{ 
XMJATRN.Elem = RMJATRN_a.A;
XMJATRN.Rest = UMJATRN_asc.A;
YMJATRN = A_HEAP(A68_164 ) ;
(*YMJATRN) = XMJATRN ;
WMJATRN.A = YMJATRN;
 /* line 352: */
WMJATRN.C = A68_TRUE;
OMJATRN = WMJATRN;
} 
else
{ 
ZMJATRN.A = St;
 /* line 353: */
 /* line 354: */
ZMJATRN.C = A68_FALSE;
OMJATRN = ZMJATRN;
} 
} 
A_PROC_EXIT(attrstr);
*ReturnedValue = (OMJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CNJATRN_attr(A68_161  Attr, A68_416 * Tprocs, A68_334  *ReturnedValue)
{ 
A68_161  DNJATRN;  /* united object - for case conformity */
A68_164 * ENJATRN_as;
A68_333  FNJATRN;  /* CALL */
A68_332  GNJATRN;  /* avoid structure result */
A68_332  HNJATRN_ac;
A68_334  INJATRN;  /* collateral clause result */
A68_161  JNJATRN;  /* OPERATORS - mode -> union mode */
A68_164 * KNJATRN;  /* YIELD */
A68_334  LNJATRN;  /* clause result */
A68_165 * MNJATRN_ab;
A68_335  NNJATRN;  /* CALL */
A68_334  ONJATRN;  /* avoid structure result */
A68_334  PNJATRN_abc;
A68_334  QNJATRN;  /* collateral clause result */
A68_161  RNJATRN;  /* OPERATORS - mode -> union mode */
A68_165 * SNJATRN;  /* YIELD */
A68_334  TNJATRN;  /* collateral clause result */
A68_334  UNJATRN;  /* collateral clause result */
A_PROC_ENTRY(attr);
 /* line 357: */
 /* line 358: */
DNJATRN = Attr ;
switch ( DNJATRN.mode )
{ 
case 3: /* REF STRUCT(MODE161,REF MODE164)  */
ENJATRN_as = (DNJATRN.data.mode3);
 /* line 359: */
{ 
FNJATRN = (*(&(Tprocs->Attrstr))) ;
A_CALLPROC(FNJATRN,(ENJATRN_as, Tprocs, &GNJATRN),(ENJATRN_as, Tprocs, &GNJATRN,(FNJATRN).nonlocals));
HNJATRN_ac = GNJATRN;
 /* line 360: */
KNJATRN = HNJATRN_ac.A ;
INJATRN.A = A_UNITE(JNJATRN,mode3,3,KNJATRN);
 /* line 361: */
 /* line 362: */
INJATRN.C = HNJATRN_ac.C;
LNJATRN = INJATRN;
} 
break;
case 4: /* REF STRUCT(MODE161)  */
MNJATRN_ab = (DNJATRN.data.mode4);
 /* line 363: */
{ 
NNJATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(NNJATRN,((*(&(MNJATRN_ab->Attr))), Tprocs, &ONJATRN),((*(&(MNJATRN_ab->Attr))), Tprocs, &ONJATRN,(NNJATRN).nonlocals));
PNJATRN_abc = ONJATRN;
 /* line 364: */
 /* line 365: */
if ( PNJATRN_abc.C )
{ 
SNJATRN = ZDAATRN_makeattrbracket(PNJATRN_abc.A) ;
QNJATRN.A = A_UNITE(RNJATRN,mode4,4,SNJATRN);
 /* line 366: */
QNJATRN.C = A68_TRUE;
LNJATRN = QNJATRN;
} 
else
{ 
TNJATRN.A = Attr;
 /* line 367: */
 /* line 368: */
 /* line 369: */
TNJATRN.C = A68_FALSE;
LNJATRN = TNJATRN;
} 
} 
break;
default: 
UNJATRN.A = Attr;
 /* line 370: */
UNJATRN.C = A68_FALSE;
LNJATRN = UNJATRN;
break;
} 
A_PROC_EXIT(attr);
*ReturnedValue = (LNJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XNJATRN_attrdec(A68_167 * Adec, A68_416 * Tprocs, A68_336  *ReturnedValue)
{ 
A68_335  YNJATRN;  /* CALL */
A68_334  ZNJATRN;  /* avoid structure result */
A68_334  AOJATRN_ac;
A68_336  BOJATRN;  /* collateral clause result */
A68_167  COJATRN;  /* collateral clause result */
A68_167 * DOJATRN;  /* YIELD */
A68_336  EOJATRN;  /* clause result */
A68_336  FOJATRN;  /* collateral clause result */
A68_336  GOJATRN;  /* collateral clause result */
A_PROC_ENTRY(attrdec);
 /* line 373: */
 /* line 374: */
{ 
 /* line 375: */
if ( (Adec!=UAAATRN_nilattrdec) )
{ 
YNJATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(YNJATRN,((*(&(Adec->Value))), Tprocs, &ZNJATRN),((*(&(Adec->Value))), Tprocs, &ZNJATRN,(YNJATRN).nonlocals));
AOJATRN_ac = ZNJATRN;
 /* line 376: */
 /* line 377: */
if ( AOJATRN_ac.C )
{ 
COJATRN.Sort = (*(&(Adec->Sort)));
COJATRN.Attrname = (*(&(Adec->Attrname)));
 /* line 378: */
COJATRN.Value = AOJATRN_ac.A;
COJATRN.Usage = (*(&(Adec->Usage)));
DOJATRN = A_HEAP(A68_167 ) ;
(*DOJATRN) = COJATRN ;
BOJATRN.A = DOJATRN;
 /* line 379: */
BOJATRN.C = A68_TRUE;
EOJATRN = BOJATRN;
} 
else
{ 
FOJATRN.A = Adec;
 /* line 380: */
 /* line 381: */
FOJATRN.C = A68_FALSE;
EOJATRN = FOJATRN;
} 
} 
else
{ 
GOJATRN.A = Adec;
 /* line 382: */
 /* line 383: */
GOJATRN.C = A68_FALSE;
EOJATRN = GOJATRN;
} 
} 
A_PROC_EXIT(attrdec);
*ReturnedValue = (EOJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JOJATRN_formula(A68_170  Form, A68_416 * Tprocs, A68_338  *ReturnedValue)
{ 
A68_170  KOJATRN;  /* united object - for case conformity */
A68_172 * LOJATRN_fck;
A68_339  MOJATRN;  /* CALL */
A68_338  NOJATRN;  /* avoid structure result */
A68_338  OOJATRN_test;
A68_339  POJATRN;  /* CALL */
A68_338  QOJATRN;  /* avoid structure result */
A68_338  ROJATRN_standard;
A68_BOOL  SOJATRN;  /* optbool result */
A68_338  TOJATRN;  /* collateral clause result */
A68_172  UOJATRN;  /* collateral clause result */
A68_172 * VOJATRN;  /* YIELD */
A68_170  WOJATRN;  /* OPERATORS - mode -> union mode */
A68_338  XOJATRN;  /* clause result */
A68_338  YOJATRN;  /* collateral clause result */
A68_175 * ZOJATRN_fd;
A68_339  APJATRN;  /* CALL */
A68_338  BPJATRN;  /* avoid structure result */
A68_338  CPJATRN_l1;
A68_339  DPJATRN;  /* CALL */
A68_338  EPJATRN;  /* avoid structure result */
A68_338  FPJATRN_r1;
A68_BOOL  GPJATRN;  /* optbool result */
A68_338  HPJATRN;  /* collateral clause result */
A68_175  IPJATRN;  /* collateral clause result */
A68_175 * JPJATRN;  /* YIELD */
A68_170  KPJATRN;  /* OPERATORS - mode -> union mode */
A68_338  LPJATRN;  /* collateral clause result */
A68_176 * MPJATRN_fm;
A68_339  NPJATRN;  /* CALL */
A68_338  OPJATRN;  /* avoid structure result */
A68_338  PPJATRN_r;
A68_338  QPJATRN;  /* collateral clause result */
A68_176  RPJATRN;  /* collateral clause result */
A68_176 * SPJATRN;  /* YIELD */
A68_170  TPJATRN;  /* OPERATORS - mode -> union mode */
A68_338  UPJATRN;  /* collateral clause result */
A68_177 * VPJATRN_fc;
A68_339  WPJATRN;  /* CALL */
A68_338  XPJATRN;  /* avoid structure result */
A68_338  YPJATRN_cond;
A68_339  ZPJATRN;  /* CALL */
A68_338  AQJATRN;  /* avoid structure result */
A68_338  BQJATRN_true;
A68_339  CQJATRN;  /* CALL */
A68_338  DQJATRN;  /* avoid structure result */
A68_338  EQJATRN_false;
A68_BOOL  FQJATRN;  /* optbool result */
A68_338  GQJATRN;  /* collateral clause result */
A68_177  HQJATRN;  /* collateral clause result */
A68_177 * IQJATRN;  /* YIELD */
A68_170  JQJATRN;  /* OPERATORS - mode -> union mode */
A68_338  KQJATRN;  /* collateral clause result */
A68_178 * LQJATRN_fb;
A68_339  MQJATRN;  /* CALL */
A68_338  NQJATRN;  /* avoid structure result */
A68_338  OQJATRN_fc;
A68_338  PQJATRN;  /* collateral clause result */
A68_170  QQJATRN;  /* OPERATORS - mode -> union mode */
A68_178 * RQJATRN;  /* YIELD */
A68_338  SQJATRN;  /* collateral clause result */
A68_338  TQJATRN;  /* collateral clause result */
A_PROC_ENTRY(formula);
 /* line 387: */
 /* line 388: */
KOJATRN = Form ;
switch ( KOJATRN.mode )
{ 
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
LOJATRN_fck = (KOJATRN.data.mode2);
 /* line 389: */
{ 
MOJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(MOJATRN,((*(&(LOJATRN_fck->Test))), Tprocs, &NOJATRN),((*(&(LOJATRN_fck->Test))), Tprocs, &NOJATRN,(MOJATRN).nonlocals));
OOJATRN_test = NOJATRN;
 /* line 390: */
POJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(POJATRN,((*(&(LOJATRN_fck->Standard))), Tprocs, &QOJATRN),((*(&(LOJATRN_fck->Standard))), Tprocs, &QOJATRN,(POJATRN).nonlocals));
ROJATRN_standard = QOJATRN;
 /* line 391: */
 /* line 392: */
SOJATRN = OOJATRN_test.C;
if ( ! SOJATRN )
{SOJATRN = ROJATRN_standard.C;
}
if ( SOJATRN )
{ 
UOJATRN.Sort = (*(&(LOJATRN_fck->Sort)));
UOJATRN.Test = OOJATRN_test.F;
UOJATRN.Standard = ROJATRN_standard.F;
VOJATRN = A_HEAP(A68_172 ) ;
(*VOJATRN) = UOJATRN ;
TOJATRN.F = A_UNITE(WOJATRN,mode2,2,VOJATRN);
 /* line 393: */
TOJATRN.C = A68_TRUE;
XOJATRN = TOJATRN;
} 
else
{ 
YOJATRN.F = Form;
 /* line 394: */
 /* line 395: */
 /* line 396: */
YOJATRN.C = A68_FALSE;
XOJATRN = YOJATRN;
} 
} 
break;
case 5: /* REF STRUCT(MODE170,INT,MODE170)  */
ZOJATRN_fd = (KOJATRN.data.mode5);
 /* line 397: */
{ 
APJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(APJATRN,((*(&(ZOJATRN_fd->Left))), Tprocs, &BPJATRN),((*(&(ZOJATRN_fd->Left))), Tprocs, &BPJATRN,(APJATRN).nonlocals));
CPJATRN_l1 = BPJATRN;
 /* line 398: */
DPJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(DPJATRN,((*(&(ZOJATRN_fd->Right))), Tprocs, &EPJATRN),((*(&(ZOJATRN_fd->Right))), Tprocs, &EPJATRN,(DPJATRN).nonlocals));
FPJATRN_r1 = EPJATRN;
 /* line 399: */
 /* line 400: */
GPJATRN = CPJATRN_l1.C;
if ( ! GPJATRN )
{GPJATRN = FPJATRN_r1.C;
}
if ( GPJATRN )
{ 
IPJATRN.Left = CPJATRN_l1.F;
IPJATRN.Sort = (*(&(ZOJATRN_fd->Sort)));
IPJATRN.Right = FPJATRN_r1.F;
JPJATRN = A_HEAP(A68_175 ) ;
(*JPJATRN) = IPJATRN ;
HPJATRN.F = A_UNITE(KPJATRN,mode5,5,JPJATRN);
 /* line 401: */
HPJATRN.C = A68_TRUE;
XOJATRN = HPJATRN;
} 
else
{ 
LPJATRN.F = Form;
 /* line 402: */
 /* line 403: */
 /* line 404: */
LPJATRN.C = A68_FALSE;
XOJATRN = LPJATRN;
} 
} 
break;
case 6: /* REF STRUCT(INT,MODE170)  */
MPJATRN_fm = (KOJATRN.data.mode6);
 /* line 405: */
{ 
NPJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(NPJATRN,((*(&(MPJATRN_fm->Right))), Tprocs, &OPJATRN),((*(&(MPJATRN_fm->Right))), Tprocs, &OPJATRN,(NPJATRN).nonlocals));
PPJATRN_r = OPJATRN;
 /* line 406: */
 /* line 407: */
if ( PPJATRN_r.C )
{ 
RPJATRN.Sort = (*(&(MPJATRN_fm->Sort)));
RPJATRN.Right = PPJATRN_r.F;
SPJATRN = A_HEAP(A68_176 ) ;
(*SPJATRN) = RPJATRN ;
QPJATRN.F = A_UNITE(TPJATRN,mode6,6,SPJATRN);
 /* line 408: */
QPJATRN.C = A68_TRUE;
XOJATRN = QPJATRN;
} 
else
{ 
UPJATRN.F = Form;
 /* line 409: */
 /* line 410: */
 /* line 411: */
UPJATRN.C = A68_FALSE;
XOJATRN = UPJATRN;
} 
} 
break;
case 7: /* REF STRUCT(MODE170,MODE170,MODE170)  */
VPJATRN_fc = (KOJATRN.data.mode7);
 /* line 412: */
{ 
WPJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(WPJATRN,((*(&(VPJATRN_fc->Cond))), Tprocs, &XPJATRN),((*(&(VPJATRN_fc->Cond))), Tprocs, &XPJATRN,(WPJATRN).nonlocals));
YPJATRN_cond = XPJATRN;
 /* line 413: */
ZPJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(ZPJATRN,((*(&(VPJATRN_fc->True))), Tprocs, &AQJATRN),((*(&(VPJATRN_fc->True))), Tprocs, &AQJATRN,(ZPJATRN).nonlocals));
BQJATRN_true = AQJATRN;
 /* line 414: */
CQJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(CQJATRN,((*(&(VPJATRN_fc->False))), Tprocs, &DQJATRN),((*(&(VPJATRN_fc->False))), Tprocs, &DQJATRN,(CQJATRN).nonlocals));
EQJATRN_false = DQJATRN;
 /* line 415: */
FQJATRN = YPJATRN_cond.C;
if ( ! FQJATRN )
{FQJATRN = BQJATRN_true.C;
}
 /* line 416: */
if ( ! FQJATRN )
{FQJATRN = EQJATRN_false.C;
}
if ( FQJATRN )
{ 
HQJATRN.Cond = YPJATRN_cond.F;
HQJATRN.True = BQJATRN_true.F;
HQJATRN.False = EQJATRN_false.F;
IQJATRN = A_HEAP(A68_177 ) ;
(*IQJATRN) = HQJATRN ;
GQJATRN.F = A_UNITE(JQJATRN,mode7,7,IQJATRN);
 /* line 417: */
GQJATRN.C = A68_TRUE;
XOJATRN = GQJATRN;
} 
else
{ 
KQJATRN.F = Form;
 /* line 418: */
 /* line 419: */
 /* line 420: */
KQJATRN.C = A68_FALSE;
XOJATRN = KQJATRN;
} 
} 
break;
case 8: /* REF STRUCT(MODE170)  */
LQJATRN_fb = (KOJATRN.data.mode8);
 /* line 421: */
{ 
MQJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(MQJATRN,((*(&(LQJATRN_fb->Formula))), Tprocs, &NQJATRN),((*(&(LQJATRN_fb->Formula))), Tprocs, &NQJATRN,(MQJATRN).nonlocals));
OQJATRN_fc = NQJATRN;
 /* line 422: */
 /* line 423: */
if ( OQJATRN_fc.C )
{ 
RQJATRN = YEAATRN_makefbracket(OQJATRN_fc.F) ;
PQJATRN.F = A_UNITE(QQJATRN,mode8,8,RQJATRN);
 /* line 424: */
PQJATRN.C = A68_TRUE;
XOJATRN = PQJATRN;
} 
else
{ 
SQJATRN.F = Form;
 /* line 425: */
 /* line 426: */
 /* line 427: */
SQJATRN.C = A68_FALSE;
XOJATRN = SQJATRN;
} 
} 
break;
default: 
TQJATRN.F = Form;
 /* line 428: */
TQJATRN.C = A68_FALSE;
XOJATRN = TQJATRN;
break;
} 
A_PROC_EXIT(formula);
*ReturnedValue = (XOJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WQJATRN_formulas(A68_182 * Fs, A68_416 * Tprocs, A68_340  *ReturnedValue)
{ 
A68_340  XQJATRN;  /* collateral clause result */
A68_340  YQJATRN;  /* clause result */
A68_339  ZQJATRN;  /* CALL */
A68_338  ARJATRN;  /* avoid structure result */
A68_338  BRJATRN_fc;
A68_341  CRJATRN;  /* CALL */
A68_340  DRJATRN;  /* avoid structure result */
A68_340  ERJATRN_rest;
A68_BOOL  FRJATRN;  /* optbool result */
A68_340  GRJATRN;  /* collateral clause result */
A68_182  HRJATRN;  /* collateral clause result */
A68_182 * IRJATRN;  /* YIELD */
A68_340  JRJATRN;  /* collateral clause result */
A_PROC_ENTRY(formulas);
 /* line 431: */
 /* line 432: */
if ( (Fs==BBAATRN_nilformulas) )
{ 
XQJATRN.F = Fs;
 /* line 433: */
XQJATRN.C = A68_FALSE;
YQJATRN = XQJATRN;
} 
else
{ 
ZQJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(ZQJATRN,((*(&(Fs->Formula))), Tprocs, &ARJATRN),((*(&(Fs->Formula))), Tprocs, &ARJATRN,(ZQJATRN).nonlocals));
BRJATRN_fc = ARJATRN;
 /* line 434: */
CRJATRN = (*(&(Tprocs->Formulas))) ;
A_CALLPROC(CRJATRN,((*(&(Fs->Rest))), Tprocs, &DRJATRN),((*(&(Fs->Rest))), Tprocs, &DRJATRN,(CRJATRN).nonlocals));
ERJATRN_rest = DRJATRN;
 /* line 435: */
 /* line 436: */
FRJATRN = BRJATRN_fc.C;
if ( ! FRJATRN )
{FRJATRN = ERJATRN_rest.C;
}
if ( FRJATRN )
{ 
HRJATRN.Formula = BRJATRN_fc.F;
HRJATRN.Rest = ERJATRN_rest.F;
IRJATRN = A_HEAP(A68_182 ) ;
(*IRJATRN) = HRJATRN ;
GRJATRN.F = IRJATRN;
 /* line 437: */
GRJATRN.C = A68_TRUE;
YQJATRN = GRJATRN;
} 
else
{ 
JRJATRN.F = Fs;
 /* line 438: */
 /* line 439: */
JRJATRN.C = A68_FALSE;
YQJATRN = JRJATRN;
} 
} 
A_PROC_EXIT(formulas);
*ReturnedValue = (YQJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MRJATRN_range(A68_185  Rge, A68_416 * Tprocs, A68_344  *ReturnedValue)
{ 
A68_339  NRJATRN;  /* CALL */
A68_338  ORJATRN;  /* avoid structure result */
A68_338  PRJATRN_lwb;
A68_339  QRJATRN;  /* CALL */
A68_338  RRJATRN;  /* avoid structure result */
A68_338  SRJATRN_upb;
A68_BOOL  TRJATRN;  /* optbool result */
A68_344  URJATRN;  /* collateral clause result */
A68_344  VRJATRN;  /* clause result */
A68_344  WRJATRN;  /* collateral clause result */
A_PROC_ENTRY(range);
 /* line 443: */
 /* line 444: */
{ 
NRJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(NRJATRN,(Rge.Lwb, Tprocs, &ORJATRN),(Rge.Lwb, Tprocs, &ORJATRN,(NRJATRN).nonlocals));
PRJATRN_lwb = ORJATRN;
 /* line 445: */
QRJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(QRJATRN,(Rge.Upb, Tprocs, &RRJATRN),(Rge.Upb, Tprocs, &RRJATRN,(QRJATRN).nonlocals));
SRJATRN_upb = RRJATRN;
 /* line 446: */
 /* line 447: */
TRJATRN = PRJATRN_lwb.C;
if ( ! TRJATRN )
{TRJATRN = SRJATRN_upb.C;
}
if ( TRJATRN )
{ 
URJATRN.R.Lwb = PRJATRN_lwb.F;
URJATRN.R.Upb = SRJATRN_upb.F;
 /* line 448: */
URJATRN.C = A68_TRUE;
VRJATRN = URJATRN;
} 
else
{ 
WRJATRN.R = Rge;
 /* line 449: */
 /* line 450: */
WRJATRN.C = A68_FALSE;
VRJATRN = WRJATRN;
} 
} 
A_PROC_EXIT(range);
*ReturnedValue = (VRJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRJATRN_formularange(A68_184  Fr, A68_416 * Tprocs, A68_346  *ReturnedValue)
{ 
A68_184  ASJATRN;  /* united object - for case conformity */
A68_185  BSJATRN_rg;
A68_345  CSJATRN;  /* CALL */
A68_344  DSJATRN;  /* avoid structure result */
A68_344  ESJATRN_rc;
A68_346  FSJATRN;  /* collateral clause result */
A68_184  GSJATRN;  /* OPERATORS - mode -> union mode */
A68_185  HSJATRN;  /* YIELD */
A68_346  ISJATRN;  /* clause result */
A68_170  JSJATRN_f;
A68_339  KSJATRN;  /* CALL */
A68_338  LSJATRN;  /* avoid structure result */
A68_338  MSJATRN_fc;
A68_346  NSJATRN;  /* collateral clause result */
A68_184  OSJATRN;  /* OPERATORS - unite union */
A68_170  PSJATRN;  /* YIELD */
A68_46  SSJATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_346  TSJATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(formularange);
 /* line 454: */
 /* line 455: */
ASJATRN = Fr ;
switch ( ASJATRN.mode )
{ 
case 11: /* STRUCT(MODE170,MODE170)  */
BSJATRN_rg = (ASJATRN.data.mode11);
{ 
CSJATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(CSJATRN,(BSJATRN_rg, Tprocs, &DSJATRN),(BSJATRN_rg, Tprocs, &DSJATRN,(CSJATRN).nonlocals));
ESJATRN_rc = DSJATRN;
 /* line 456: */
HSJATRN = ESJATRN_rc.R ;
FSJATRN.F = A_UNITE(GSJATRN,mode11,11,HSJATRN);
 /* line 457: */
 /* line 458: */
FSJATRN.C = ESJATRN_rc.C;
ISJATRN = FSJATRN;
} 
break;
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE170,INT,MODE170)  */
case 6: /* REF STRUCT(INT,MODE170)  */
case 7: /* REF STRUCT(MODE170,MODE170,MODE170)  */
case 8: /* REF STRUCT(MODE170)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(JSJATRN_f,ASJATRN);
{ 
KSJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KSJATRN,(JSJATRN_f, Tprocs, &LSJATRN),(JSJATRN_f, Tprocs, &LSJATRN,(KSJATRN).nonlocals));
MSJATRN_fc = LSJATRN;
 /* line 459: */
PSJATRN = MSJATRN_fc.F ;
NSJATRN.F = A_UUNITE(OSJATRN,0,PSJATRN);
 /* line 460: */
 /* line 461: */
NSJATRN.C = MSJATRN_fc.C;
ISJATRN = NSJATRN;
} 
break;
default: 
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(SSJATRN,RSJATRN,A68_VC )),(SHAAOSI_system, A_HVEC(SSJATRN,RSJATRN,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 462: */
ISJATRN = TSJATRN;
break;
} 
A_PROC_EXIT(formularange);
*ReturnedValue = (ISJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WSJATRN_intdec(A68_183 * Idec, A68_416 * Tprocs, A68_342  *ReturnedValue)
{ 
A68_347  XSJATRN;  /* CALL */
A68_346  YSJATRN;  /* avoid structure result */
A68_346  ZSJATRN_frc;
A68_335  ATJATRN;  /* CALL */
A68_334  BTJATRN;  /* avoid structure result */
A68_334  CTJATRN_ac;
A68_BOOL  DTJATRN;  /* optbool result */
A68_342  ETJATRN;  /* collateral clause result */
A68_183  FTJATRN;  /* collateral clause result */
A68_183 * GTJATRN;  /* YIELD */
A68_342  HTJATRN;  /* clause result */
A68_342  ITJATRN;  /* collateral clause result */
A68_342  JTJATRN;  /* collateral clause result */
A_PROC_ENTRY(intdec);
 /* line 466: */
 /* line 467: */
{ 
 /* line 468: */
if ( (Idec!=VAAATRN_nilintdec) )
{ 
XSJATRN = (*(&(Tprocs->Formularange))) ;
A_CALLPROC(XSJATRN,((*(&(Idec->Value))), Tprocs, &YSJATRN),((*(&(Idec->Value))), Tprocs, &YSJATRN,(XSJATRN).nonlocals));
ZSJATRN_frc = YSJATRN;
 /* line 469: */
ATJATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(ATJATRN,((*(&(Idec->Attr))), Tprocs, &BTJATRN),((*(&(Idec->Attr))), Tprocs, &BTJATRN,(ATJATRN).nonlocals));
CTJATRN_ac = BTJATRN;
 /* line 470: */
 /* line 471: */
DTJATRN = ZSJATRN_frc.C;
if ( ! DTJATRN )
{DTJATRN = CTJATRN_ac.C;
}
if ( DTJATRN )
{ 
FTJATRN.Sort = (*(&(Idec->Sort)));
FTJATRN.Intname = (*(&(Idec->Intname)));
 /* line 472: */
FTJATRN.Attr = CTJATRN_ac.A;
FTJATRN.Value = ZSJATRN_frc.F;
FTJATRN.Usage = (*(&(Idec->Usage)));
GTJATRN = A_HEAP(A68_183 ) ;
(*GTJATRN) = FTJATRN ;
ETJATRN.I = GTJATRN;
 /* line 473: */
ETJATRN.C = A68_TRUE;
HTJATRN = ETJATRN;
} 
else
{ 
ITJATRN.I = Idec;
 /* line 474: */
 /* line 475: */
ITJATRN.C = A68_FALSE;
HTJATRN = ITJATRN;
} 
} 
else
{ 
JTJATRN.I = Idec;
 /* line 476: */
 /* line 477: */
JTJATRN.C = A68_FALSE;
HTJATRN = JTJATRN;
} 
} 
A_PROC_EXIT(intdec);
*ReturnedValue = (HTJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MTJATRN_tstr(A68_189 * St, A68_416 * Tprocs, A68_348  *ReturnedValue)
{ 
A68_348  NTJATRN;  /* collateral clause result */
A68_348  OTJATRN;  /* clause result */
A68_351  PTJATRN;  /* CALL */
A68_350  QTJATRN;  /* avoid structure result */
A68_350  RTJATRN_t;
A68_349  STJATRN;  /* CALL */
A68_348  TTJATRN;  /* avoid structure result */
A68_348  UTJATRN_tsc;
A68_BOOL  VTJATRN;  /* optbool result */
A68_348  WTJATRN;  /* collateral clause result */
A68_189  XTJATRN;  /* collateral clause result */
A68_189 * YTJATRN;  /* YIELD */
A68_348  ZTJATRN;  /* collateral clause result */
A_PROC_ENTRY(tstr);
 /* line 482: */
 /* line 483: */
if ( (St==GAAATRN_niltstr) )
{ 
NTJATRN.T = St;
 /* line 484: */
NTJATRN.C = A68_FALSE;
OTJATRN = NTJATRN;
} 
else
{ 
PTJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(PTJATRN,((*(&(St->Elem))), Tprocs, &QTJATRN),((*(&(St->Elem))), Tprocs, &QTJATRN,(PTJATRN).nonlocals));
RTJATRN_t = QTJATRN;
 /* line 485: */
STJATRN = (*(&(Tprocs->Tstr))) ;
A_CALLPROC(STJATRN,((*(&(St->Rest))), Tprocs, &TTJATRN),((*(&(St->Rest))), Tprocs, &TTJATRN,(STJATRN).nonlocals));
UTJATRN_tsc = TTJATRN;
 /* line 486: */
 /* line 487: */
VTJATRN = RTJATRN_t.C;
if ( ! VTJATRN )
{VTJATRN = UTJATRN_tsc.C;
}
if ( VTJATRN )
{ 
XTJATRN.Elem = RTJATRN_t.T;
XTJATRN.Rest = UTJATRN_tsc.T;
YTJATRN = A_HEAP(A68_189 ) ;
(*YTJATRN) = XTJATRN ;
WTJATRN.T = YTJATRN;
 /* line 488: */
WTJATRN.C = A68_TRUE;
OTJATRN = WTJATRN;
} 
else
{ 
ZTJATRN.T = St;
 /* line 489: */
 /* line 490: */
ZTJATRN.C = A68_FALSE;
OTJATRN = ZTJATRN;
} 
} 
A_PROC_EXIT(tstr);
*ReturnedValue = (OTJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CUJATRN_type(A68_186  Ty, A68_416 * Tprocs, A68_350  *ReturnedValue)
{ 
A68_186  DUJATRN;  /* united object - for case conformity */
A68_188 * EUJATRN_tr;
A68_339  FUJATRN;  /* CALL */
A68_338  GUJATRN;  /* avoid structure result */
A68_338  HUJATRN_size;
A68_351  IUJATRN;  /* CALL */
A68_350  JUJATRN;  /* avoid structure result */
A68_350  KUJATRN_elem;
A68_BOOL  LUJATRN;  /* optbool result */
A68_350  MUJATRN;  /* collateral clause result */
A68_188  NUJATRN;  /* collateral clause result */
A68_188 * OUJATRN;  /* YIELD */
A68_186  PUJATRN;  /* OPERATORS - mode -> union mode */
A68_350  QUJATRN;  /* clause result */
A68_350  RUJATRN;  /* collateral clause result */
A68_186  SUJATRN;  /* OPERATORS - mode -> union mode */
A68_189 * TUJATRN_ts;
A68_349  UUJATRN;  /* CALL */
A68_348  VUJATRN;  /* avoid structure result */
A68_348  WUJATRN_tc;
A68_350  XUJATRN;  /* collateral clause result */
A68_186  YUJATRN;  /* OPERATORS - mode -> union mode */
A68_189 * ZUJATRN;  /* YIELD */
A68_190 * AVJATRN_tf;
A68_351  BVJATRN;  /* CALL */
A68_350  CVJATRN;  /* avoid structure result */
A68_350  DVJATRN_from;
A68_351  EVJATRN;  /* CALL */
A68_350  FVJATRN;  /* avoid structure result */
A68_350  GVJATRN_to;
A68_BOOL  HVJATRN;  /* optbool result */
A68_350  IVJATRN;  /* collateral clause result */
A68_190  JVJATRN;  /* collateral clause result */
A68_190 * KVJATRN;  /* YIELD */
A68_186  LVJATRN;  /* OPERATORS - mode -> union mode */
A68_350  MVJATRN;  /* collateral clause result */
A68_186  NVJATRN;  /* OPERATORS - mode -> union mode */
A68_191 * OVJATRN_tb;
A68_351  PVJATRN;  /* CALL */
A68_350  QVJATRN;  /* avoid structure result */
A68_350  RVJATRN_tbc;
A68_350  SVJATRN;  /* collateral clause result */
A68_186  TVJATRN;  /* OPERATORS - mode -> union mode */
A68_191 * UVJATRN;  /* YIELD */
A68_350  VVJATRN;  /* collateral clause result */
A68_186  WVJATRN;  /* OPERATORS - mode -> union mode */
A68_192 * XVJATRN_tg;
A68_339  YVJATRN;  /* CALL */
A68_338  ZVJATRN;  /* avoid structure result */
A68_338  AWJATRN_size;
A68_351  BWJATRN;  /* CALL */
A68_350  CWJATRN;  /* avoid structure result */
A68_350  DWJATRN_char;
A68_BOOL  EWJATRN;  /* optbool result */
A68_350  FWJATRN;  /* collateral clause result */
A68_192  GWJATRN;  /* collateral clause result */
A68_192 * HWJATRN;  /* YIELD */
A68_186  IWJATRN;  /* OPERATORS - mode -> union mode */
A68_350  JWJATRN;  /* collateral clause result */
A68_186  KWJATRN;  /* OPERATORS - mode -> union mode */
A68_350  LWJATRN;  /* collateral clause result */
A_PROC_ENTRY(type);
 /* line 494: */
 /* line 495: */
DUJATRN = Ty ;
switch ( DUJATRN.mode )
{ 
case 2: /* REF STRUCT(MODE170,MODE186)  */
EUJATRN_tr = (DUJATRN.data.mode2);
 /* line 496: */
{ 
FUJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(FUJATRN,((*(&(EUJATRN_tr->Size))), Tprocs, &GUJATRN),((*(&(EUJATRN_tr->Size))), Tprocs, &GUJATRN,(FUJATRN).nonlocals));
HUJATRN_size = GUJATRN;
 /* line 497: */
IUJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(IUJATRN,((*(&(EUJATRN_tr->Elem))), Tprocs, &JUJATRN),((*(&(EUJATRN_tr->Elem))), Tprocs, &JUJATRN,(IUJATRN).nonlocals));
KUJATRN_elem = JUJATRN;
 /* line 498: */
 /* line 499: */
LUJATRN = HUJATRN_size.C;
if ( ! LUJATRN )
{LUJATRN = KUJATRN_elem.C;
}
if ( LUJATRN )
{ 
NUJATRN.Size = HUJATRN_size.F;
NUJATRN.Elem = KUJATRN_elem.T;
OUJATRN = A_HEAP(A68_188 ) ;
(*OUJATRN) = NUJATRN ;
MUJATRN.T = A_UNITE(PUJATRN,mode2,2,OUJATRN);
 /* line 500: */
MUJATRN.C = A68_TRUE;
QUJATRN = MUJATRN;
} 
else
{ 
RUJATRN.T = A_UNITE(SUJATRN,mode2,2,EUJATRN_tr);
 /* line 501: */
 /* line 502: */
 /* line 503: */
RUJATRN.C = A68_FALSE;
QUJATRN = RUJATRN;
} 
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
TUJATRN_ts = (DUJATRN.data.mode3);
 /* line 504: */
{ 
UUJATRN = (*(&(Tprocs->Tstr))) ;
A_CALLPROC(UUJATRN,(TUJATRN_ts, Tprocs, &VUJATRN),(TUJATRN_ts, Tprocs, &VUJATRN,(UUJATRN).nonlocals));
WUJATRN_tc = VUJATRN;
 /* line 505: */
ZUJATRN = WUJATRN_tc.T ;
XUJATRN.T = A_UNITE(YUJATRN,mode3,3,ZUJATRN);
 /* line 506: */
 /* line 507: */
XUJATRN.C = WUJATRN_tc.C;
QUJATRN = XUJATRN;
} 
break;
case 4: /* REF STRUCT(MODE186,MODE186)  */
AVJATRN_tf = (DUJATRN.data.mode4);
 /* line 508: */
{ 
BVJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(BVJATRN,((*(&(AVJATRN_tf->From))), Tprocs, &CVJATRN),((*(&(AVJATRN_tf->From))), Tprocs, &CVJATRN,(BVJATRN).nonlocals));
DVJATRN_from = CVJATRN;
 /* line 509: */
EVJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(EVJATRN,((*(&(AVJATRN_tf->To))), Tprocs, &FVJATRN),((*(&(AVJATRN_tf->To))), Tprocs, &FVJATRN,(EVJATRN).nonlocals));
GVJATRN_to = FVJATRN;
 /* line 510: */
 /* line 511: */
HVJATRN = DVJATRN_from.C;
if ( ! HVJATRN )
{HVJATRN = GVJATRN_to.C;
}
if ( HVJATRN )
{ 
JVJATRN.From = DVJATRN_from.T;
JVJATRN.To = GVJATRN_to.T;
KVJATRN = A_HEAP(A68_190 ) ;
(*KVJATRN) = JVJATRN ;
IVJATRN.T = A_UNITE(LVJATRN,mode4,4,KVJATRN);
 /* line 512: */
IVJATRN.C = A68_TRUE;
QUJATRN = IVJATRN;
} 
else
{ 
MVJATRN.T = A_UNITE(NVJATRN,mode4,4,AVJATRN_tf);
 /* line 513: */
 /* line 514: */
 /* line 515: */
MVJATRN.C = A68_FALSE;
QUJATRN = MVJATRN;
} 
} 
break;
case 5: /* REF STRUCT(MODE186)  */
OVJATRN_tb = (DUJATRN.data.mode5);
 /* line 516: */
{ 
PVJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(PVJATRN,((*(&(OVJATRN_tb->Type))), Tprocs, &QVJATRN),((*(&(OVJATRN_tb->Type))), Tprocs, &QVJATRN,(PVJATRN).nonlocals));
RVJATRN_tbc = QVJATRN;
 /* line 517: */
 /* line 518: */
if ( RVJATRN_tbc.C )
{ 
UVJATRN = SFAATRN_maketbracket(RVJATRN_tbc.T) ;
SVJATRN.T = A_UNITE(TVJATRN,mode5,5,UVJATRN);
 /* line 519: */
SVJATRN.C = A68_TRUE;
QUJATRN = SVJATRN;
} 
else
{ 
VVJATRN.T = A_UNITE(WVJATRN,mode5,5,OVJATRN_tb);
 /* line 520: */
 /* line 521: */
 /* line 522: */
VVJATRN.C = A68_FALSE;
QUJATRN = VVJATRN;
} 
} 
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
XVJATRN_tg = (DUJATRN.data.mode6);
 /* line 523: */
{ 
YVJATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(YVJATRN,((*(&(XVJATRN_tg->Size))), Tprocs, &ZVJATRN),((*(&(XVJATRN_tg->Size))), Tprocs, &ZVJATRN,(YVJATRN).nonlocals));
AWJATRN_size = ZVJATRN;
 /* line 524: */
BWJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(BWJATRN,((*(&(XVJATRN_tg->Char))), Tprocs, &CWJATRN),((*(&(XVJATRN_tg->Char))), Tprocs, &CWJATRN,(BWJATRN).nonlocals));
DWJATRN_char = CWJATRN;
 /* line 525: */
 /* line 526: */
EWJATRN = AWJATRN_size.C;
if ( ! EWJATRN )
{EWJATRN = DWJATRN_char.C;
}
if ( EWJATRN )
{ 
GWJATRN.Size = AWJATRN_size.F;
GWJATRN.Char = DWJATRN_char.T;
HWJATRN = A_HEAP(A68_192 ) ;
(*HWJATRN) = GWJATRN ;
FWJATRN.T = A_UNITE(IWJATRN,mode6,6,HWJATRN);
 /* line 527: */
FWJATRN.C = A68_TRUE;
QUJATRN = FWJATRN;
} 
else
{ 
JWJATRN.T = A_UNITE(KWJATRN,mode6,6,XVJATRN_tg);
 /* line 528: */
 /* line 529: */
 /* line 530: */
JWJATRN.C = A68_FALSE;
QUJATRN = JWJATRN;
} 
} 
break;
default: 
LWJATRN.T = Ty;
 /* line 531: */
LWJATRN.C = A68_FALSE;
QUJATRN = LWJATRN;
break;
} 
A_PROC_EXIT(type);
*ReturnedValue = (QUJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OWJATRN_alternative(A68_197  Alt, A68_416 * Tprocs, A68_352  *ReturnedValue)
{ 
A68_351  PWJATRN;  /* CALL */
A68_350  QWJATRN;  /* avoid structure result */
A68_350  RWJATRN_assoc;
A68_352  SWJATRN;  /* collateral clause result */
A68_352  TWJATRN;  /* clause result */
A68_352  UWJATRN;  /* collateral clause result */
A_PROC_ENTRY(alternative);
 /* line 535: */
 /* line 536: */
{ 
PWJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(PWJATRN,(Alt.Assoc, Tprocs, &QWJATRN),(Alt.Assoc, Tprocs, &QWJATRN,(PWJATRN).nonlocals));
RWJATRN_assoc = QWJATRN;
 /* line 537: */
 /* line 538: */
if ( RWJATRN_assoc.C )
{ 
SWJATRN.A.Altname = Alt.Altname;
SWJATRN.A.Assoc = RWJATRN_assoc.T;
 /* line 539: */
SWJATRN.C = A68_TRUE;
TWJATRN = SWJATRN;
} 
else
{ 
UWJATRN.A = Alt;
 /* line 540: */
 /* line 541: */
UWJATRN.C = A68_FALSE;
TWJATRN = UWJATRN;
} 
} 
A_PROC_EXIT(alternative);
*ReturnedValue = (TWJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XWJATRN_alternatives(A68_200  Alts, A68_416 * Tprocs, A68_354  *ReturnedValue)
{ 
A68_200  YWJATRN_new;
A68_BOOL  ZWJATRN_changed;
A68_INT  AXJATRN_i;
A68_INT  BXJATRN;  /* to part of loop */
A68_353  CXJATRN;  /* CALL */
A68_352  DXJATRN;  /* avoid structure result */
A68_352  EXJATRN_a;
A68_427  GXJATRN_generator;   /* proc value of non-global proc */
A68_200  LXJATRN;  /* avoid structure result */
A68_197 * MXJATRN;  /* YIELD */
A68_354  NXJATRN;  /* collateral clause result */
A68_354  OXJATRN;  /* clause result */
A_PROC_ENTRY(alternatives);
 /* line 546: */
 /* line 547: */
{ 
YWJATRN_new = Alts;
 /* line 548: */
ZWJATRN_changed = A68_FALSE;
 /* line 549: */
 /* line 550: */
BXJATRN = YWJATRN_new.upb;
for ( AXJATRN_i = 1;
AXJATRN_i <= BXJATRN;
AXJATRN_i += 1 )
{ 
CXJATRN = (*(&(Tprocs->Alternative))) ;
A_CALLPROC(CXJATRN,((*(&A_VINDEX(YWJATRN_new,AXJATRN_i))), Tprocs, &DXJATRN),((*(&A_VINDEX(YWJATRN_new,AXJATRN_i))), Tprocs, &DXJATRN,(CXJATRN).nonlocals));
EXJATRN_a = DXJATRN;
 /* line 551: */
 /* line 552: */
if ( EXJATRN_a.C )
{ 
 /* line 553: */
if ( !ZWJATRN_changed )
{ 
ZWJATRN_changed = A68_TRUE;
 /* line 554: */
A_CLOSURE( GXJATRN_generator, HXJATRN_generator, IXJATRN_generator );
(( IXJATRN_generator * ) ( GXJATRN_generator.nonlocals )) -> YWJATRN_new = (&YWJATRN_new);
 /* line 555: */
A_CALLPROC(GXJATRN_generator,(A68_FALSE, &LXJATRN),(A68_FALSE, &LXJATRN,(GXJATRN_generator).nonlocals));
A_VASSIGN2(YWJATRN_new,LXJATRN,A68_197 ) ;
YWJATRN_new = LXJATRN;
} 
 /* line 556: */
 /* line 557: */
 /* line 558: */
MXJATRN = (&A_VINDEX(YWJATRN_new,AXJATRN_i)) ;
(*MXJATRN) = EXJATRN_a.A;
} 
}
 /* line 559: */
NXJATRN.A = YWJATRN_new;
 /* line 560: */
NXJATRN.C = ZWJATRN_changed;
OXJATRN = NXJATRN;
} 
A_PROC_EXIT(alternatives);
*ReturnedValue = (OXJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RXJATRN_typebody(A68_199  Tbody, A68_416 * Tprocs, A68_356  *ReturnedValue)
{ 
A68_199  SXJATRN;  /* united object - for case conformity */
A68_200  TXJATRN_nn;
A68_355  UXJATRN;  /* CALL */
A68_354  VXJATRN;  /* avoid structure result */
A68_354  WXJATRN_alts;
A68_356  XXJATRN;  /* collateral clause result */
A68_199  YXJATRN;  /* OPERATORS - mode -> union mode */
A68_200  ZXJATRN;  /* YIELD */
A68_356  AYJATRN;  /* clause result */
A68_198 * BYJATRN_ni;
A68_345  CYJATRN;  /* CALL */
A68_344  DYJATRN;  /* avoid structure result */
A68_344  EYJATRN_r;
A68_356  FYJATRN;  /* collateral clause result */
A68_198  GYJATRN;  /* collateral clause result */
A68_198 * HYJATRN;  /* YIELD */
A68_199  IYJATRN;  /* OPERATORS - mode -> union mode */
A68_356  JYJATRN;  /* collateral clause result */
A68_196 * KYJATRN_nc;
A68_356  LYJATRN;  /* collateral clause result */
A68_195 * MYJATRN_tg;
A68_351  NYJATRN;  /* CALL */
A68_350  OYJATRN;  /* avoid structure result */
A68_350  PYJATRN_tt;
A68_356  QYJATRN;  /* collateral clause result */
A68_199  RYJATRN;  /* OPERATORS - mode -> union mode */
A68_195 * SYJATRN;  /* YIELD */
A68_356  TYJATRN;  /* collateral clause result */
A_PROC_ENTRY(typebody);
 /* line 564: */
 /* line 565: */
SXJATRN = Tbody ;
switch ( SXJATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE197 */
TXJATRN_nn = (SXJATRN.data.mode1);
 /* line 566: */
{ 
UXJATRN = (*(&(Tprocs->Alternatives))) ;
A_CALLPROC(UXJATRN,(TXJATRN_nn, Tprocs, &VXJATRN),(TXJATRN_nn, Tprocs, &VXJATRN,(UXJATRN).nonlocals));
WXJATRN_alts = VXJATRN;
 /* line 567: */
ZXJATRN = WXJATRN_alts.A ;
XXJATRN.T = A_UNITE(YXJATRN,mode1,1,ZXJATRN);
 /* line 568: */
 /* line 569: */
XXJATRN.C = WXJATRN_alts.C;
AYJATRN = XXJATRN;
} 
break;
case 2: /* REF STRUCT(REF MODE26,MODE185)  */
BYJATRN_ni = (SXJATRN.data.mode2);
 /* line 570: */
{ 
CYJATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(CYJATRN,((*(&(BYJATRN_ni->Range))), Tprocs, &DYJATRN),((*(&(BYJATRN_ni->Range))), Tprocs, &DYJATRN,(CYJATRN).nonlocals));
EYJATRN_r = DYJATRN;
 /* line 571: */
 /* line 572: */
if ( EYJATRN_r.C )
{ 
GYJATRN.Tagname = (*(&(BYJATRN_ni->Tagname)));
GYJATRN.Range = EYJATRN_r.R;
HYJATRN = A_HEAP(A68_198 ) ;
(*HYJATRN) = GYJATRN ;
FYJATRN.T = A_UNITE(IYJATRN,mode2,2,HYJATRN);
 /* line 573: */
FYJATRN.C = A68_TRUE;
AYJATRN = FYJATRN;
} 
else
{ 
JYJATRN.T = Tbody;
 /* line 574: */
 /* line 575: */
 /* line 576: */
JYJATRN.C = A68_FALSE;
AYJATRN = JYJATRN;
} 
} 
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
KYJATRN_nc = (SXJATRN.data.mode4);
 /* line 577: */
{ 
LYJATRN.T = Tbody;
 /* line 578: */
 /* line 579: */
LYJATRN.C = A68_FALSE;
AYJATRN = LYJATRN;
} 
break;
case 3: /* REF STRUCT(MODE186)  */
MYJATRN_tg = (SXJATRN.data.mode3);
 /* line 580: */
{ 
NYJATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(NYJATRN,((*(&(MYJATRN_tg->Tag))), Tprocs, &OYJATRN),((*(&(MYJATRN_tg->Tag))), Tprocs, &OYJATRN,(NYJATRN).nonlocals));
PYJATRN_tt = OYJATRN;
 /* line 581: */
 /* line 582: */
if ( PYJATRN_tt.C )
{ 
SYJATRN = XFAATRN_maketypetag(PYJATRN_tt.T) ;
QYJATRN.T = A_UNITE(RYJATRN,mode3,3,SYJATRN);
 /* line 583: */
QYJATRN.C = A68_TRUE;
AYJATRN = QYJATRN;
} 
else
{ 
TYJATRN.T = Tbody;
 /* line 584: */
 /* line 585: */
 /* line 586: */
TYJATRN.C = A68_FALSE;
AYJATRN = TYJATRN;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(typebody);
*ReturnedValue = (AYJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WYJATRN_typedec(A68_201 * Tdec, A68_416 * Tprocs, A68_358  *ReturnedValue)
{ 
A68_357  XYJATRN;  /* CALL */
A68_356  YYJATRN;  /* avoid structure result */
A68_356  ZYJATRN_tc;
A68_335  AZJATRN;  /* CALL */
A68_334  BZJATRN;  /* avoid structure result */
A68_334  CZJATRN_ac;
A68_BOOL  DZJATRN;  /* optbool result */
A68_358  EZJATRN;  /* collateral clause result */
A68_201  FZJATRN;  /* collateral clause result */
A68_201 * GZJATRN;  /* YIELD */
A68_358  HZJATRN;  /* clause result */
A68_358  IZJATRN;  /* collateral clause result */
A68_358  JZJATRN;  /* collateral clause result */
A_PROC_ENTRY(typedec);
 /* line 590: */
 /* line 591: */
{ 
 /* line 592: */
if ( (Tdec!=WAAATRN_niltypedec) )
{ 
XYJATRN = (*(&(Tprocs->Typebody))) ;
A_CALLPROC(XYJATRN,((*(&(Tdec->Body))), Tprocs, &YYJATRN),((*(&(Tdec->Body))), Tprocs, &YYJATRN,(XYJATRN).nonlocals));
ZYJATRN_tc = YYJATRN;
 /* line 593: */
AZJATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(AZJATRN,((*(&(Tdec->Attr))), Tprocs, &BZJATRN),((*(&(Tdec->Attr))), Tprocs, &BZJATRN,(AZJATRN).nonlocals));
CZJATRN_ac = BZJATRN;
 /* line 594: */
 /* line 595: */
DZJATRN = ZYJATRN_tc.C;
if ( ! DZJATRN )
{DZJATRN = CZJATRN_ac.C;
}
if ( DZJATRN )
{ 
FZJATRN.Sort = (*(&(Tdec->Sort)));
FZJATRN.Typename = (*(&(Tdec->Typename)));
 /* line 596: */
FZJATRN.Attr = CZJATRN_ac.A;
FZJATRN.Body = ZYJATRN_tc.T;
FZJATRN.Usage = (*(&(Tdec->Usage)));
 /* line 597: */
GZJATRN = A_HEAP(A68_201 ) ;
(*GZJATRN) = FZJATRN ;
EZJATRN.T = GZJATRN;
 /* line 598: */
EZJATRN.C = A68_TRUE;
HZJATRN = EZJATRN;
} 
else
{ 
IZJATRN.T = Tdec;
 /* line 599: */
 /* line 600: */
IZJATRN.C = A68_FALSE;
HZJATRN = IZJATRN;
} 
} 
else
{ 
JZJATRN.T = Tdec;
 /* line 601: */
 /* line 602: */
JZJATRN.C = A68_FALSE;
HZJATRN = JZJATRN;
} 
} 
A_PROC_EXIT(typedec);
*ReturnedValue = (HZJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MZJATRN_constdec(A68_207 * Cdec, A68_416 * Tprocs, A68_360  *ReturnedValue)
{ 
A68_369  NZJATRN;  /* CALL */
A68_368  OZJATRN;  /* avoid structure result */
A68_368  PZJATRN_const;
A68_335  QZJATRN;  /* CALL */
A68_334  RZJATRN;  /* avoid structure result */
A68_334  SZJATRN_ac;
A68_BOOL  TZJATRN;  /* optbool result */
A68_360  UZJATRN;  /* collateral clause result */
A68_207  VZJATRN;  /* collateral clause result */
A68_207 * WZJATRN;  /* YIELD */
A68_360  XZJATRN;  /* clause result */
A68_360  YZJATRN;  /* collateral clause result */
A68_360  ZZJATRN;  /* collateral clause result */
A_PROC_ENTRY(constdec);
 /* line 607: */
 /* line 608: */
{ 
 /* line 609: */
if ( (Cdec!=XAAATRN_nilconstdec) )
{ 
NZJATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NZJATRN,((*(&(Cdec->Value))), Tprocs, &OZJATRN),((*(&(Cdec->Value))), Tprocs, &OZJATRN,(NZJATRN).nonlocals));
PZJATRN_const = OZJATRN;
 /* line 610: */
QZJATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(QZJATRN,((*(&(Cdec->Attr))), Tprocs, &RZJATRN),((*(&(Cdec->Attr))), Tprocs, &RZJATRN,(QZJATRN).nonlocals));
SZJATRN_ac = RZJATRN;
 /* line 611: */
 /* line 612: */
TZJATRN = PZJATRN_const.C;
if ( ! TZJATRN )
{TZJATRN = SZJATRN_ac.C;
}
if ( TZJATRN )
{ 
VZJATRN.Sort = (*(&(Cdec->Sort)));
VZJATRN.Constname = (*(&(Cdec->Constname)));
 /* line 613: */
VZJATRN.Attr = SZJATRN_ac.A;
VZJATRN.Value = PZJATRN_const.U;
VZJATRN.Usage = (*(&(Cdec->Usage)));
 /* line 614: */
WZJATRN = A_HEAP(A68_207 ) ;
(*WZJATRN) = VZJATRN ;
UZJATRN.Co = WZJATRN;
 /* line 615: */
UZJATRN.C = A68_TRUE;
XZJATRN = UZJATRN;
} 
else
{ 
YZJATRN.Co = Cdec;
 /* line 616: */
 /* line 617: */
YZJATRN.C = A68_FALSE;
XZJATRN = YZJATRN;
} 
} 
else
{ 
ZZJATRN.Co = Cdec;
 /* line 618: */
 /* line 619: */
ZZJATRN.C = A68_FALSE;
XZJATRN = ZZJATRN;
} 
} 
A_PROC_EXIT(constdec);
*ReturnedValue = (XZJATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CAKATRN_ualts(A68_212 * Ua, A68_416 * Tprocs, A68_362  *ReturnedValue)
{ 
A68_362  DAKATRN;  /* collateral clause result */
A68_362  EAKATRN;  /* clause result */
A68_369  FAKATRN;  /* CALL */
A68_368  GAKATRN;  /* avoid structure result */
A68_368  HAKATRN_ut;
A68_363  IAKATRN;  /* CALL */
A68_362  JAKATRN;  /* avoid structure result */
A68_362  KAKATRN_uac;
A68_BOOL  LAKATRN;  /* optbool result */
A68_362  MAKATRN;  /* collateral clause result */
A68_212  NAKATRN;  /* collateral clause result */
A68_212 * OAKATRN;  /* YIELD */
A68_362  PAKATRN;  /* collateral clause result */
A_PROC_ENTRY(ualts);
 /* line 625: */
 /* line 626: */
if ( (Ua==HAAATRN_nilualts) )
{ 
DAKATRN.Ua = Ua;
 /* line 627: */
DAKATRN.C = A68_FALSE;
EAKATRN = DAKATRN;
} 
else
{ 
FAKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(FAKATRN,((*(&(Ua->Alt))), Tprocs, &GAKATRN),((*(&(Ua->Alt))), Tprocs, &GAKATRN,(FAKATRN).nonlocals));
HAKATRN_ut = GAKATRN;
 /* line 628: */
IAKATRN = (*(&(Tprocs->Ualts))) ;
A_CALLPROC(IAKATRN,((*(&(Ua->Rest))), Tprocs, &JAKATRN),((*(&(Ua->Rest))), Tprocs, &JAKATRN,(IAKATRN).nonlocals));
KAKATRN_uac = JAKATRN;
 /* line 629: */
 /* line 630: */
LAKATRN = HAKATRN_ut.C;
if ( ! LAKATRN )
{LAKATRN = KAKATRN_uac.C;
}
if ( LAKATRN )
{ 
NAKATRN.Alt = HAKATRN_ut.U;
NAKATRN.Rest = KAKATRN_uac.Ua;
OAKATRN = A_HEAP(A68_212 ) ;
(*OAKATRN) = NAKATRN ;
MAKATRN.Ua = OAKATRN;
 /* line 631: */
MAKATRN.C = A68_TRUE;
EAKATRN = MAKATRN;
} 
else
{ 
PAKATRN.Ua = Ua;
 /* line 632: */
 /* line 633: */
PAKATRN.C = A68_FALSE;
EAKATRN = PAKATRN;
} 
} 
A_PROC_EXIT(ualts);
*ReturnedValue = (EAKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SAKATRN_ustr(A68_223 * St, A68_416 * Tprocs, A68_364  *ReturnedValue)
{ 
A68_364  TAKATRN;  /* collateral clause result */
A68_364  UAKATRN;  /* clause result */
A68_369  VAKATRN;  /* CALL */
A68_368  WAKATRN;  /* avoid structure result */
A68_368  XAKATRN_u;
A68_365  YAKATRN;  /* CALL */
A68_364  ZAKATRN;  /* avoid structure result */
A68_364  ABKATRN_usc;
A68_BOOL  BBKATRN;  /* optbool result */
A68_364  CBKATRN;  /* collateral clause result */
A68_223  DBKATRN;  /* collateral clause result */
A68_223 * EBKATRN;  /* YIELD */
A68_364  FBKATRN;  /* collateral clause result */
A_PROC_ENTRY(ustr);
 /* line 637: */
 /* line 638: */
if ( (St==IAAATRN_nilustr) )
{ 
TAKATRN.U = St;
 /* line 639: */
TAKATRN.C = A68_FALSE;
UAKATRN = TAKATRN;
} 
else
{ 
VAKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(VAKATRN,((*(&(St->Elem))), Tprocs, &WAKATRN),((*(&(St->Elem))), Tprocs, &WAKATRN,(VAKATRN).nonlocals));
XAKATRN_u = WAKATRN;
 /* line 640: */
YAKATRN = (*(&(Tprocs->Ustr))) ;
A_CALLPROC(YAKATRN,((*(&(St->Rest))), Tprocs, &ZAKATRN),((*(&(St->Rest))), Tprocs, &ZAKATRN,(YAKATRN).nonlocals));
ABKATRN_usc = ZAKATRN;
 /* line 641: */
 /* line 642: */
BBKATRN = XAKATRN_u.C;
if ( ! BBKATRN )
{BBKATRN = ABKATRN_usc.C;
}
if ( BBKATRN )
{ 
DBKATRN.Elem = XAKATRN_u.U;
DBKATRN.Rest = ABKATRN_usc.U;
EBKATRN = A_HEAP(A68_223 ) ;
(*EBKATRN) = DBKATRN ;
CBKATRN.U = EBKATRN;
 /* line 643: */
CBKATRN.C = A68_TRUE;
UAKATRN = CBKATRN;
} 
else
{ 
FBKATRN.U = St;
 /* line 644: */
 /* line 645: */
FBKATRN.C = A68_FALSE;
UAKATRN = FBKATRN;
} 
} 
A_PROC_EXIT(ustr);
*ReturnedValue = (UAKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IBKATRN_uchoices(A68_268 * U, A68_416 * Tprocs, A68_366  *ReturnedValue)
{ 
A68_366  JBKATRN;  /* collateral clause result */
A68_366  KBKATRN;  /* clause result */
A68_369  LBKATRN;  /* CALL */
A68_368  MBKATRN;  /* avoid structure result */
A68_368  NBKATRN_test;
A68_369  OBKATRN;  /* CALL */
A68_368  PBKATRN;  /* avoid structure result */
A68_368  QBKATRN_ans;
A68_367  RBKATRN;  /* CALL */
A68_366  SBKATRN;  /* avoid structure result */
A68_366  TBKATRN_rest;
A68_BOOL  UBKATRN;  /* optbool result */
A68_366  VBKATRN;  /* collateral clause result */
A68_268  WBKATRN;  /* collateral clause result */
A68_268 * XBKATRN;  /* YIELD */
A68_366  YBKATRN;  /* collateral clause result */
A_PROC_ENTRY(uchoices);
 /* line 648: */
 /* line 649: */
if ( (U==JAAATRN_niluchoices) )
{ 
JBKATRN.U = U;
 /* line 650: */
JBKATRN.C = A68_FALSE;
KBKATRN = JBKATRN;
} 
else
{ 
LBKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LBKATRN,((*(&(U->Test))), Tprocs, &MBKATRN),((*(&(U->Test))), Tprocs, &MBKATRN,(LBKATRN).nonlocals));
NBKATRN_test = MBKATRN;
 /* line 651: */
OBKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OBKATRN,((*(&(U->Output))), Tprocs, &PBKATRN),((*(&(U->Output))), Tprocs, &PBKATRN,(OBKATRN).nonlocals));
QBKATRN_ans = PBKATRN;
 /* line 652: */
RBKATRN = (*(&(Tprocs->Uchoices))) ;
A_CALLPROC(RBKATRN,((*(&(U->Rest))), Tprocs, &SBKATRN),((*(&(U->Rest))), Tprocs, &SBKATRN,(RBKATRN).nonlocals));
TBKATRN_rest = SBKATRN;
 /* line 653: */
UBKATRN = TBKATRN_rest.C;
if ( ! UBKATRN )
{UBKATRN = NBKATRN_test.C;
}
 /* line 654: */
if ( ! UBKATRN )
{UBKATRN = QBKATRN_ans.C;
}
if ( UBKATRN )
{ 
WBKATRN.Check = (*(&(U->Check)));
WBKATRN.Sort = (*(&(U->Sort)));
WBKATRN.Test = NBKATRN_test.U;
 /* line 655: */
WBKATRN.Output = QBKATRN_ans.U;
WBKATRN.Rest = TBKATRN_rest.U;
XBKATRN = A_HEAP(A68_268 ) ;
(*XBKATRN) = WBKATRN ;
VBKATRN.U = XBKATRN;
 /* line 656: */
VBKATRN.C = A68_TRUE;
KBKATRN = VBKATRN;
} 
else
{ 
YBKATRN.U = U;
 /* line 657: */
 /* line 658: */
YBKATRN.C = A68_FALSE;
KBKATRN = YBKATRN;
} 
} 
A_PROC_EXIT(uchoices);
*ReturnedValue = (KBKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BCKATRN_unit(A68_208  U, A68_416 * Tprocs, A68_368  *ReturnedValue)
{ 
A68_208  CCKATRN;  /* united object - for case conformity */
A68_202 * DCKATRN_cn;
A68_368  ECKATRN;  /* collateral clause result */
A68_208  FCKATRN;  /* OPERATORS - mode -> union mode */
A68_368  GCKATRN;  /* clause result */
A68_203 * HCKATRN_cp;
A68_368  ICKATRN;  /* collateral clause result */
A68_208  JCKATRN;  /* OPERATORS - mode -> union mode */
A68_204 * KCKATRN_ci;
A68_339  LCKATRN;  /* CALL */
A68_338  MCKATRN;  /* avoid structure result */
A68_338  NCKATRN_index;
A68_368  OCKATRN;  /* collateral clause result */
A68_204  PCKATRN;  /* collateral clause result */
A68_204 * QCKATRN;  /* YIELD */
A68_208  RCKATRN;  /* OPERATORS - mode -> union mode */
A68_368  SCKATRN;  /* collateral clause result */
A68_208  TCKATRN;  /* OPERATORS - mode -> union mode */
A68_206 * UCKATRN_cq;
A68_351  VCKATRN;  /* CALL */
A68_350  WCKATRN;  /* avoid structure result */
A68_350  XCKATRN_tcq;
A68_368  YCKATRN;  /* collateral clause result */
A68_208  ZCKATRN;  /* OPERATORS - mode -> union mode */
A68_206 * ADKATRN;  /* YIELD */
A68_368  BDKATRN;  /* collateral clause result */
A68_208  CDKATRN;  /* OPERATORS - mode -> union mode */
A68_205 * DDKATRN_cr;
A68_345  EDKATRN;  /* CALL */
A68_344  FDKATRN;  /* avoid structure result */
A68_344  GDKATRN_rc;
A68_368  HDKATRN;  /* collateral clause result */
A68_205  IDKATRN;  /* collateral clause result */
A68_205 * JDKATRN;  /* YIELD */
A68_208  KDKATRN;  /* OPERATORS - mode -> union mode */
A68_368  LDKATRN;  /* collateral clause result */
A68_208  MDKATRN;  /* OPERATORS - mode -> union mode */
A68_191 * NDKATRN_ct;
A68_351  ODKATRN;  /* CALL */
A68_350  PDKATRN;  /* avoid structure result */
A68_350  QDKATRN_tc;
A68_368  RDKATRN;  /* collateral clause result */
A68_208  SDKATRN;  /* OPERATORS - mode -> union mode */
A68_191 * TDKATRN;  /* YIELD */
A68_368  UDKATRN;  /* collateral clause result */
A68_208  VDKATRN;  /* OPERATORS - mode -> union mode */
A68_211 * WDKATRN_crg;
A68_368  XDKATRN;  /* collateral clause result */
A68_208  YDKATRN;  /* OPERATORS - mode -> union mode */
A68_212 * ZDKATRN_ual;
A68_363  AEKATRN;  /* CALL */
A68_362  BEKATRN;  /* avoid structure result */
A68_362  CEKATRN_ualtc;
A68_368  DEKATRN;  /* collateral clause result */
A68_208  EEKATRN;  /* OPERATORS - mode -> union mode */
A68_212 * FEKATRN;  /* YIELD */
A68_215 * GEKATRN_ua;
A68_369  HEKATRN;  /* CALL */
A68_368  IEKATRN;  /* avoid structure result */
A68_368  JEKATRN_uc;
A68_368  KEKATRN;  /* collateral clause result */
A68_215  LEKATRN;  /* collateral clause result */
A68_215 * MEKATRN;  /* YIELD */
A68_208  NEKATRN;  /* OPERATORS - mode -> union mode */
A68_368  OEKATRN;  /* collateral clause result */
A68_216 * PEKATRN_ue;
A68_369  QEKATRN;  /* CALL */
A68_368  REKATRN;  /* avoid structure result */
A68_368  SEKATRN_uc;
A68_368  TEKATRN;  /* collateral clause result */
A68_216  UEKATRN;  /* collateral clause result */
A68_216 * VEKATRN;  /* YIELD */
A68_208  WEKATRN;  /* OPERATORS - mode -> union mode */
A68_368  XEKATRN;  /* collateral clause result */
A68_217 * YEKATRN_ut;
A68_369  ZEKATRN;  /* CALL */
A68_368  AFKATRN;  /* avoid structure result */
A68_368  BFKATRN_uc;
A68_368  CFKATRN;  /* collateral clause result */
A68_217  DFKATRN;  /* collateral clause result */
A68_217 * EFKATRN;  /* YIELD */
A68_208  FFKATRN;  /* OPERATORS - mode -> union mode */
A68_368  GFKATRN;  /* collateral clause result */
A68_218 * HFKATRN_ui;
A68_369  IFKATRN;  /* CALL */
A68_368  JFKATRN;  /* avoid structure result */
A68_368  KFKATRN_uc;
A68_339  LFKATRN;  /* CALL */
A68_338  MFKATRN;  /* avoid structure result */
A68_338  NFKATRN_index;
A68_BOOL  OFKATRN;  /* optbool result */
A68_368  PFKATRN;  /* collateral clause result */
A68_218  QFKATRN;  /* collateral clause result */
A68_218 * RFKATRN;  /* YIELD */
A68_208  SFKATRN;  /* OPERATORS - mode -> union mode */
A68_368  TFKATRN;  /* collateral clause result */
A68_219 * UFKATRN_ut;
A68_369  VFKATRN;  /* CALL */
A68_368  WFKATRN;  /* avoid structure result */
A68_368  XFKATRN_uc;
A68_345  YFKATRN;  /* CALL */
A68_344  ZFKATRN;  /* avoid structure result */
A68_344  AGKATRN_rc;
A68_BOOL  BGKATRN;  /* optbool result */
A68_368  CGKATRN;  /* collateral clause result */
A68_219  DGKATRN;  /* collateral clause result */
A68_219 * EGKATRN;  /* YIELD */
A68_208  FGKATRN;  /* OPERATORS - mode -> union mode */
A68_368  GGKATRN;  /* collateral clause result */
A68_220 * HGKATRN_udy;
A68_369  IGKATRN;  /* CALL */
A68_368  JGKATRN;  /* avoid structure result */
A68_368  KGKATRN_uc;
A68_369  LGKATRN;  /* CALL */
A68_368  MGKATRN;  /* avoid structure result */
A68_368  NGKATRN_index;
A68_BOOL  OGKATRN;  /* optbool result */
A68_368  PGKATRN;  /* collateral clause result */
A68_220  QGKATRN;  /* collateral clause result */
A68_220 * RGKATRN;  /* YIELD */
A68_208  SGKATRN;  /* OPERATORS - mode -> union mode */
A68_368  TGKATRN;  /* collateral clause result */
A68_221 * UGKATRN_uda;
A68_369  VGKATRN;  /* CALL */
A68_368  WGKATRN;  /* avoid structure result */
A68_368  XGKATRN_uc;
A68_369  YGKATRN;  /* CALL */
A68_368  ZGKATRN;  /* avoid structure result */
A68_368  AHKATRN_index;
A68_369  BHKATRN;  /* CALL */
A68_368  CHKATRN;  /* avoid structure result */
A68_368  DHKATRN_from;
A68_BOOL  EHKATRN;  /* optbool result */
A68_368  FHKATRN;  /* collateral clause result */
A68_221  GHKATRN;  /* collateral clause result */
A68_221 * HHKATRN;  /* YIELD */
A68_208  IHKATRN;  /* OPERATORS - mode -> union mode */
A68_368  JHKATRN;  /* collateral clause result */
A68_208  KHKATRN;  /* OPERATORS - mode -> union mode */
A68_222 * LHKATRN_ur;
A68_339  MHKATRN;  /* CALL */
A68_338  NHKATRN;  /* avoid structure result */
A68_338  OHKATRN_size;
A68_369  PHKATRN;  /* CALL */
A68_368  QHKATRN;  /* avoid structure result */
A68_368  RHKATRN_uc;
A68_BOOL  SHKATRN;  /* optbool result */
A68_368  THKATRN;  /* collateral clause result */
A68_222  UHKATRN;  /* collateral clause result */
A68_222 * VHKATRN;  /* YIELD */
A68_208  WHKATRN;  /* OPERATORS - mode -> union mode */
A68_368  XHKATRN;  /* collateral clause result */
A68_223 * YHKATRN_us;
A68_365  ZHKATRN;  /* CALL */
A68_364  AIKATRN;  /* avoid structure result */
A68_364  BIKATRN_uc;
A68_368  CIKATRN;  /* collateral clause result */
A68_208  DIKATRN;  /* OPERATORS - mode -> union mode */
A68_223 * EIKATRN;  /* YIELD */
A68_224 * FIKATRN_ucon;
A68_369  GIKATRN;  /* CALL */
A68_368  HIKATRN;  /* avoid structure result */
A68_368  IIKATRN_luc;
A68_369  JIKATRN;  /* CALL */
A68_368  KIKATRN;  /* avoid structure result */
A68_368  LIKATRN_ruc;
A68_BOOL  MIKATRN;  /* optbool result */
A68_368  NIKATRN;  /* collateral clause result */
A68_224  OIKATRN;  /* collateral clause result */
A68_224 * PIKATRN;  /* YIELD */
A68_208  QIKATRN;  /* OPERATORS - mode -> union mode */
A68_368  RIKATRN;  /* collateral clause result */
A68_225 * SIKATRN_um;
A68_375  TIKATRN;  /* CALL */
A68_374  UIKATRN;  /* avoid structure result */
A68_374  VIKATRN_ic;
A68_369  WIKATRN;  /* CALL */
A68_368  XIKATRN;  /* avoid structure result */
A68_368  YIKATRN_uc;
A68_BOOL  ZIKATRN;  /* optbool result */
A68_368  AJKATRN;  /* collateral clause result */
A68_225  BJKATRN;  /* collateral clause result */
A68_225 * CJKATRN;  /* YIELD */
A68_208  DJKATRN;  /* OPERATORS - mode -> union mode */
A68_368  EJKATRN;  /* collateral clause result */
A68_226 * FJKATRN_ud;
A68_369  GJKATRN;  /* CALL */
A68_368  HJKATRN;  /* avoid structure result */
A68_368  IJKATRN_luc;
A68_375  JJKATRN;  /* CALL */
A68_374  KJKATRN;  /* avoid structure result */
A68_374  LJKATRN_ic;
A68_369  MJKATRN;  /* CALL */
A68_368  NJKATRN;  /* avoid structure result */
A68_368  OJKATRN_ruc;
A68_BOOL  PJKATRN;  /* optbool result */
A68_368  QJKATRN;  /* collateral clause result */
A68_226  RJKATRN;  /* collateral clause result */
A68_226 * SJKATRN;  /* YIELD */
A68_208  TJKATRN;  /* OPERATORS - mode -> union mode */
A68_368  UJKATRN;  /* collateral clause result */
A68_227 * VJKATRN_uca;
A68_369  WJKATRN;  /* CALL */
A68_368  XJKATRN;  /* avoid structure result */
A68_368  YJKATRN_uc;
A68_367  ZJKATRN;  /* CALL */
A68_366  AKKATRN;  /* avoid structure result */
A68_366  BKKATRN_ucc;
A68_BOOL  CKKATRN;  /* optbool result */
A68_368  DKKATRN;  /* collateral clause result */
A68_227  EKKATRN;  /* collateral clause result */
A68_227 * FKKATRN;  /* YIELD */
A68_208  GKKATRN;  /* OPERATORS - mode -> union mode */
A68_368  HKKATRN;  /* collateral clause result */
A68_228 * IKKATRN_ucond;
A68_339  JKKATRN;  /* CALL */
A68_338  KKKATRN;  /* avoid structure result */
A68_338  LKKATRN_cond;
A68_369  MKKATRN;  /* CALL */
A68_368  NKKATRN;  /* avoid structure result */
A68_368  OKKATRN_true;
A68_369  PKKATRN;  /* CALL */
A68_368  QKKATRN;  /* avoid structure result */
A68_368  RKKATRN_false;
A68_BOOL  SKKATRN;  /* optbool result */
A68_368  TKKATRN;  /* collateral clause result */
A68_228  UKKATRN;  /* collateral clause result */
A68_228 * VKKATRN;  /* YIELD */
A68_208  WKKATRN;  /* OPERATORS - mode -> union mode */
A68_368  XKKATRN;  /* collateral clause result */
A68_229 * YKKATRN_url;
A68_339  ZKKATRN;  /* CALL */
A68_338  ALKATRN;  /* avoid structure result */
A68_338  BLKATRN_replc;
A68_369  CLKATRN;  /* CALL */
A68_368  DLKATRN;  /* avoid structure result */
A68_368  ELKATRN_body;
A68_BOOL  FLKATRN;  /* optbool result */
A68_368  GLKATRN;  /* collateral clause result */
A68_229  HLKATRN;  /* collateral clause result */
A68_229 * ILKATRN;  /* YIELD */
A68_208  JLKATRN;  /* OPERATORS - mode -> union mode */
A68_368  KLKATRN;  /* collateral clause result */
A68_230 * LLKATRN_useq;
A68_393  MLKATRN;  /* CALL */
A68_392  NLKATRN;  /* avoid structure result */
A68_392  OLKATRN_seqc;
A68_369  PLKATRN;  /* CALL */
A68_368  QLKATRN;  /* avoid structure result */
A68_368  RLKATRN_output;
A68_BOOL  SLKATRN;  /* optbool result */
A68_368  TLKATRN;  /* collateral clause result */
A68_230  ULKATRN;  /* collateral clause result */
A68_230 * VLKATRN;  /* YIELD */
A68_208  WLKATRN;  /* OPERATORS - mode -> union mode */
A68_368  XLKATRN;  /* collateral clause result */
A68_231 * YLKATRN_user;
A68_403  ZLKATRN;  /* CALL */
A68_402  AMKATRN;  /* avoid structure result */
A68_402  BMKATRN_sec;
A68_369  CMKATRN;  /* CALL */
A68_368  DMKATRN;  /* avoid structure result */
A68_368  EMKATRN_output;
A68_BOOL  FMKATRN;  /* optbool result */
A68_368  GMKATRN;  /* collateral clause result */
A68_231  HMKATRN;  /* collateral clause result */
A68_231 * IMKATRN;  /* YIELD */
A68_208  JMKATRN;  /* OPERATORS - mode -> union mode */
A68_368  KMKATRN;  /* collateral clause result */
A68_232 * LMKATRN_uat;
A68_369  MMKATRN;  /* CALL */
A68_368  NMKATRN;  /* avoid structure result */
A68_368  OMKATRN_uc;
A68_335  PMKATRN;  /* CALL */
A68_334  QMKATRN;  /* avoid structure result */
A68_334  RMKATRN_ac;
A68_BOOL  SMKATRN;  /* optbool result */
A68_368  TMKATRN;  /* collateral clause result */
A68_232  UMKATRN;  /* collateral clause result */
A68_232 * VMKATRN;  /* YIELD */
A68_208  WMKATRN;  /* OPERATORS - mode -> union mode */
A68_368  XMKATRN;  /* collateral clause result */
A68_233 * YMKATRN_uck;
A68_369  ZMKATRN;  /* CALL */
A68_368  ANKATRN;  /* avoid structure result */
A68_368  BNKATRN_uc;
A68_339  CNKATRN;  /* CALL */
A68_172 * DNKATRN;  /* YIELD */
A68_170  ENKATRN;  /* OPERATORS - mode -> union mode */
A68_338  FNKATRN;  /* avoid structure result */
A68_338  GNKATRN_fc;
A68_BOOL  HNKATRN;  /* optbool result */
A68_170  INKATRN;  /* united object - for case conformity */
A68_172 * JNKATRN_fck;
A68_172 * KNKATRN;  /* clause result */
A68_46  NNKATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172 * ONKATRN;  /* OPERATORS - skip to mode */
A68_172 * PNKATRN_chk;
A68_368  QNKATRN;  /* collateral clause result */
A68_233  RNKATRN;  /* collateral clause result */
A68_233 * SNKATRN;  /* YIELD */
A68_208  TNKATRN;  /* OPERATORS - mode -> union mode */
A68_368  UNKATRN;  /* collateral clause result */
A68_234 * VNKATRN_ub;
A68_369  WNKATRN;  /* CALL */
A68_368  XNKATRN;  /* avoid structure result */
A68_368  YNKATRN_uc;
A68_368  ZNKATRN;  /* collateral clause result */
A68_208  AOKATRN;  /* OPERATORS - mode -> union mode */
A68_234 * BOKATRN;  /* YIELD */
A68_368  COKATRN;  /* collateral clause result */
A68_209 * DOKATRN_cqt;
A68_368  EOKATRN;  /* collateral clause result */
A68_208  FOKATRN;  /* OPERATORS - mode -> union mode */
A68_210 * GOKATRN_cv;
A68_368  HOKATRN;  /* collateral clause result */
A68_208  IOKATRN;  /* OPERATORS - mode -> union mode */
A68_235 * JOKATRN_ug;
A68_339  KOKATRN;  /* CALL */
A68_338  LOKATRN;  /* avoid structure result */
A68_338  MOKATRN_size;
A68_369  NOKATRN;  /* CALL */
A68_368  OOKATRN;  /* avoid structure result */
A68_368  POKATRN_uc;
A68_BOOL  QOKATRN;  /* optbool result */
A68_368  ROKATRN;  /* collateral clause result */
A68_235  SOKATRN;  /* collateral clause result */
A68_235 * TOKATRN;  /* YIELD */
A68_208  UOKATRN;  /* OPERATORS - mode -> union mode */
A68_368  VOKATRN;  /* collateral clause result */
A68_214 * WOKATRN_uf;
A68_369  XOKATRN;  /* CALL */
A68_368  YOKATRN;  /* avoid structure result */
A68_368  ZOKATRN_skc;
A68_369  APKATRN;  /* CALL */
A68_368  BPKATRN;  /* avoid structure result */
A68_368  CPKATRN_src;
A68_BOOL  DPKATRN;  /* optbool result */
A68_368  EPKATRN;  /* collateral clause result */
A68_214  FPKATRN;  /* collateral clause result */
A68_214 * GPKATRN;  /* YIELD */
A68_208  HPKATRN;  /* OPERATORS - mode -> union mode */
A68_368  IPKATRN;  /* collateral clause result */
A68_368  JPKATRN;  /* collateral clause result */
A_PROC_ENTRY(unit);
 /* line 662: */
 /* line 663: */
CCKATRN = U ;
switch ( CCKATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
DCKATRN_cn = (CCKATRN.data.mode1);
 /* line 664: */
{ 
ECKATRN.U = A_UNITE(FCKATRN,mode1,1,DCKATRN_cn);
 /* line 665: */
ECKATRN.C = A68_FALSE;
GCKATRN = ECKATRN;
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
HCKATRN_cp = (CCKATRN.data.mode2);
 /* line 666: */
{ 
ICKATRN.U = A_UNITE(JCKATRN,mode2,2,HCKATRN_cp);
 /* line 667: */
ICKATRN.C = A68_FALSE;
GCKATRN = ICKATRN;
} 
break;
case 3: /* REF STRUCT(INT,MODE170)  */
KCKATRN_ci = (CCKATRN.data.mode3);
 /* line 668: */
{ 
LCKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(LCKATRN,((*(&(KCKATRN_ci->Index))), Tprocs, &MCKATRN),((*(&(KCKATRN_ci->Index))), Tprocs, &MCKATRN,(LCKATRN).nonlocals));
NCKATRN_index = MCKATRN;
 /* line 669: */
 /* line 670: */
if ( NCKATRN_index.C )
{ 
PCKATRN.Typeno = (*(&(KCKATRN_ci->Typeno)));
PCKATRN.Index = NCKATRN_index.F;
QCKATRN = A_HEAP(A68_204 ) ;
(*QCKATRN) = PCKATRN ;
OCKATRN.U = A_UNITE(RCKATRN,mode3,3,QCKATRN);
 /* line 671: */
OCKATRN.C = A68_TRUE;
GCKATRN = OCKATRN;
} 
else
{ 
SCKATRN.U = A_UNITE(TCKATRN,mode3,3,KCKATRN_ci);
 /* line 672: */
 /* line 673: */
 /* line 674: */
SCKATRN.C = A68_FALSE;
GCKATRN = SCKATRN;
} 
} 
break;
case 4: /* REF STRUCT(MODE186)  */
UCKATRN_cq = (CCKATRN.data.mode4);
 /* line 675: */
{ 
VCKATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(VCKATRN,((*(&(UCKATRN_cq->Querytype))), Tprocs, &WCKATRN),((*(&(UCKATRN_cq->Querytype))), Tprocs, &WCKATRN,(VCKATRN).nonlocals));
XCKATRN_tcq = WCKATRN;
 /* line 676: */
 /* line 677: */
if ( XCKATRN_tcq.C )
{ 
ADKATRN = MGAATRN_makecquery(XCKATRN_tcq.T) ;
YCKATRN.U = A_UNITE(ZCKATRN,mode4,4,ADKATRN);
 /* line 678: */
YCKATRN.C = A68_TRUE;
GCKATRN = YCKATRN;
} 
else
{ 
BDKATRN.U = A_UNITE(CDKATRN,mode4,4,UCKATRN_cq);
 /* line 679: */
 /* line 680: */
 /* line 681: */
BDKATRN.C = A68_FALSE;
GCKATRN = BDKATRN;
} 
} 
break;
case 8: /* REF STRUCT(INT,MODE185)  */
DDKATRN_cr = (CCKATRN.data.mode8);
 /* line 682: */
{ 
EDKATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(EDKATRN,((*(&(DDKATRN_cr->Range))), Tprocs, &FDKATRN),((*(&(DDKATRN_cr->Range))), Tprocs, &FDKATRN,(EDKATRN).nonlocals));
GDKATRN_rc = FDKATRN;
 /* line 683: */
 /* line 684: */
if ( GDKATRN_rc.C )
{ 
IDKATRN.Typeno = (*(&(DDKATRN_cr->Typeno)));
IDKATRN.Range = GDKATRN_rc.R;
JDKATRN = A_HEAP(A68_205 ) ;
(*JDKATRN) = IDKATRN ;
HDKATRN.U = A_UNITE(KDKATRN,mode8,8,JDKATRN);
 /* line 685: */
HDKATRN.C = A68_TRUE;
GCKATRN = HDKATRN;
} 
else
{ 
LDKATRN.U = A_UNITE(MDKATRN,mode8,8,DDKATRN_cr);
 /* line 686: */
 /* line 687: */
 /* line 688: */
LDKATRN.C = A68_FALSE;
GCKATRN = LDKATRN;
} 
} 
break;
case 7: /* REF STRUCT(MODE186)  */
NDKATRN_ct = (CCKATRN.data.mode7);
 /* line 689: */
{ 
ODKATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(ODKATRN,((*(&(NDKATRN_ct->Type))), Tprocs, &PDKATRN),((*(&(NDKATRN_ct->Type))), Tprocs, &PDKATRN,(ODKATRN).nonlocals));
QDKATRN_tc = PDKATRN;
 /* line 690: */
 /* line 691: */
if ( QDKATRN_tc.C )
{ 
TDKATRN = HGAATRN_makectype(QDKATRN_tc.T) ;
RDKATRN.U = A_UNITE(SDKATRN,mode7,7,TDKATRN);
 /* line 692: */
RDKATRN.C = A68_TRUE;
GCKATRN = RDKATRN;
} 
else
{ 
UDKATRN.U = A_UNITE(VDKATRN,mode7,7,NDKATRN_ct);
 /* line 693: */
 /* line 694: */
 /* line 695: */
UDKATRN.C = A68_FALSE;
GCKATRN = UDKATRN;
} 
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
WDKATRN_crg = (CCKATRN.data.mode9);
 /* line 696: */
{ 
XDKATRN.U = A_UNITE(YDKATRN,mode9,9,WDKATRN_crg);
 /* line 697: */
 /* line 698: */
XDKATRN.C = A68_FALSE;
GCKATRN = XDKATRN;
} 
break;
case 10: /* REF STRUCT(MODE208,REF MODE212)  */
ZDKATRN_ual = (CCKATRN.data.mode10);
 /* line 699: */
{ 
AEKATRN = (*(&(Tprocs->Ualts))) ;
A_CALLPROC(AEKATRN,(ZDKATRN_ual, Tprocs, &BEKATRN),(ZDKATRN_ual, Tprocs, &BEKATRN,(AEKATRN).nonlocals));
CEKATRN_ualtc = BEKATRN;
 /* line 700: */
FEKATRN = CEKATRN_ualtc.Ua ;
DEKATRN.U = A_UNITE(EEKATRN,mode10,10,FEKATRN);
 /* line 701: */
 /* line 702: */
DEKATRN.C = CEKATRN_ualtc.C;
GCKATRN = DEKATRN;
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
GEKATRN_ua = (CCKATRN.data.mode13);
 /* line 703: */
{ 
HEKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HEKATRN,((*(&(GEKATRN_ua->Assoc))), Tprocs, &IEKATRN),((*(&(GEKATRN_ua->Assoc))), Tprocs, &IEKATRN,(HEKATRN).nonlocals));
JEKATRN_uc = IEKATRN;
 /* line 704: */
 /* line 705: */
if ( JEKATRN_uc.C )
{ 
LEKATRN.Typeno = (*(&(GEKATRN_ua->Typeno)));
LEKATRN.Altno = (*(&(GEKATRN_ua->Altno)));
LEKATRN.Assoc = JEKATRN_uc.U;
MEKATRN = A_HEAP(A68_215 ) ;
(*MEKATRN) = LEKATRN ;
KEKATRN.U = A_UNITE(NEKATRN,mode13,13,MEKATRN);
 /* line 706: */
KEKATRN.C = A68_TRUE;
GCKATRN = KEKATRN;
} 
else
{ 
OEKATRN.U = U;
 /* line 707: */
 /* line 708: */
 /* line 709: */
OEKATRN.C = A68_FALSE;
GCKATRN = OEKATRN;
} 
} 
break;
case 14: /* REF STRUCT(MODE208,INT,INT)  */
PEKATRN_ue = (CCKATRN.data.mode14);
 /* line 710: */
{ 
QEKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QEKATRN,((*(&(PEKATRN_ue->Extract))), Tprocs, &REKATRN),((*(&(PEKATRN_ue->Extract))), Tprocs, &REKATRN,(QEKATRN).nonlocals));
SEKATRN_uc = REKATRN;
 /* line 711: */
 /* line 712: */
if ( SEKATRN_uc.C )
{ 
UEKATRN.Extract = SEKATRN_uc.U;
UEKATRN.Typeno = (*(&(PEKATRN_ue->Typeno)));
UEKATRN.Altno = (*(&(PEKATRN_ue->Altno)));
VEKATRN = A_HEAP(A68_216 ) ;
(*VEKATRN) = UEKATRN ;
TEKATRN.U = A_UNITE(WEKATRN,mode14,14,VEKATRN);
 /* line 713: */
TEKATRN.C = A68_TRUE;
GCKATRN = TEKATRN;
} 
else
{ 
XEKATRN.U = U;
 /* line 714: */
 /* line 715: */
 /* line 716: */
XEKATRN.C = A68_FALSE;
GCKATRN = XEKATRN;
} 
} 
break;
case 15: /* REF STRUCT(MODE208,INT,INT)  */
YEKATRN_ut = (CCKATRN.data.mode15);
 /* line 717: */
{ 
ZEKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(ZEKATRN,((*(&(YEKATRN_ut->Unit))), Tprocs, &AFKATRN),((*(&(YEKATRN_ut->Unit))), Tprocs, &AFKATRN,(ZEKATRN).nonlocals));
BFKATRN_uc = AFKATRN;
 /* line 718: */
 /* line 719: */
if ( BFKATRN_uc.C )
{ 
DFKATRN.Unit = BFKATRN_uc.U;
DFKATRN.Fnno = (*(&(YEKATRN_ut->Fnno)));
DFKATRN.Nameno = (*(&(YEKATRN_ut->Nameno)));
EFKATRN = A_HEAP(A68_217 ) ;
(*EFKATRN) = DFKATRN ;
CFKATRN.U = A_UNITE(FFKATRN,mode15,15,EFKATRN);
 /* line 720: */
CFKATRN.C = A68_TRUE;
GCKATRN = CFKATRN;
} 
else
{ 
GFKATRN.U = U;
 /* line 721: */
 /* line 722: */
 /* line 723: */
GFKATRN.C = A68_FALSE;
GCKATRN = GFKATRN;
} 
} 
break;
case 16: /* REF STRUCT(MODE208,MODE170)  */
HFKATRN_ui = (CCKATRN.data.mode16);
 /* line 724: */
{ 
IFKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(IFKATRN,((*(&(HFKATRN_ui->Unit))), Tprocs, &JFKATRN),((*(&(HFKATRN_ui->Unit))), Tprocs, &JFKATRN,(IFKATRN).nonlocals));
KFKATRN_uc = JFKATRN;
 /* line 725: */
LFKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(LFKATRN,((*(&(HFKATRN_ui->Index))), Tprocs, &MFKATRN),((*(&(HFKATRN_ui->Index))), Tprocs, &MFKATRN,(LFKATRN).nonlocals));
NFKATRN_index = MFKATRN;
 /* line 726: */
 /* line 727: */
OFKATRN = KFKATRN_uc.C;
if ( ! OFKATRN )
{OFKATRN = NFKATRN_index.C;
}
if ( OFKATRN )
{ 
QFKATRN.Unit = KFKATRN_uc.U;
QFKATRN.Index = NFKATRN_index.F;
RFKATRN = A_HEAP(A68_218 ) ;
(*RFKATRN) = QFKATRN ;
PFKATRN.U = A_UNITE(SFKATRN,mode16,16,RFKATRN);
 /* line 728: */
PFKATRN.C = A68_TRUE;
GCKATRN = PFKATRN;
} 
else
{ 
TFKATRN.U = U;
 /* line 729: */
 /* line 730: */
 /* line 731: */
TFKATRN.C = A68_FALSE;
GCKATRN = TFKATRN;
} 
} 
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
UFKATRN_ut = (CCKATRN.data.mode17);
 /* line 732: */
{ 
VFKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(VFKATRN,((*(&(UFKATRN_ut->Unit))), Tprocs, &WFKATRN),((*(&(UFKATRN_ut->Unit))), Tprocs, &WFKATRN,(VFKATRN).nonlocals));
XFKATRN_uc = WFKATRN;
 /* line 733: */
YFKATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(YFKATRN,((*(&(UFKATRN_ut->Range))), Tprocs, &ZFKATRN),((*(&(UFKATRN_ut->Range))), Tprocs, &ZFKATRN,(YFKATRN).nonlocals));
AGKATRN_rc = ZFKATRN;
 /* line 734: */
 /* line 735: */
BGKATRN = XFKATRN_uc.C;
if ( ! BGKATRN )
{BGKATRN = AGKATRN_rc.C;
}
if ( BGKATRN )
{ 
DGKATRN.Unit = XFKATRN_uc.U;
DGKATRN.Range = AGKATRN_rc.R;
EGKATRN = A_HEAP(A68_219 ) ;
(*EGKATRN) = DGKATRN ;
CGKATRN.U = A_UNITE(FGKATRN,mode17,17,EGKATRN);
 /* line 736: */
CGKATRN.C = A68_TRUE;
GCKATRN = CGKATRN;
} 
else
{ 
GGKATRN.U = U;
 /* line 737: */
 /* line 738: */
 /* line 739: */
GGKATRN.C = A68_FALSE;
GCKATRN = GGKATRN;
} 
} 
break;
case 18: /* REF STRUCT(MODE208,MODE208)  */
HGKATRN_udy = (CCKATRN.data.mode18);
 /* line 740: */
{ 
IGKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(IGKATRN,((*(&(HGKATRN_udy->Unit))), Tprocs, &JGKATRN),((*(&(HGKATRN_udy->Unit))), Tprocs, &JGKATRN,(IGKATRN).nonlocals));
KGKATRN_uc = JGKATRN;
 /* line 741: */
LGKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LGKATRN,((*(&(HGKATRN_udy->Index))), Tprocs, &MGKATRN),((*(&(HGKATRN_udy->Index))), Tprocs, &MGKATRN,(LGKATRN).nonlocals));
NGKATRN_index = MGKATRN;
 /* line 742: */
 /* line 743: */
OGKATRN = KGKATRN_uc.C;
if ( ! OGKATRN )
{OGKATRN = NGKATRN_index.C;
}
if ( OGKATRN )
{ 
QGKATRN.Unit = KGKATRN_uc.U;
QGKATRN.Index = NGKATRN_index.U;
RGKATRN = A_HEAP(A68_220 ) ;
(*RGKATRN) = QGKATRN ;
PGKATRN.U = A_UNITE(SGKATRN,mode18,18,RGKATRN);
 /* line 744: */
PGKATRN.C = A68_TRUE;
GCKATRN = PGKATRN;
} 
else
{ 
TGKATRN.U = U;
 /* line 745: */
 /* line 746: */
 /* line 747: */
TGKATRN.C = A68_FALSE;
GCKATRN = TGKATRN;
} 
} 
break;
case 19: /* REF STRUCT(MODE208,MODE208,MODE208)  */
UGKATRN_uda = (CCKATRN.data.mode19);
 /* line 748: */
{ 
VGKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(VGKATRN,((*(&(UGKATRN_uda->Unit))), Tprocs, &WGKATRN),((*(&(UGKATRN_uda->Unit))), Tprocs, &WGKATRN,(VGKATRN).nonlocals));
XGKATRN_uc = WGKATRN;
 /* line 749: */
YGKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(YGKATRN,((*(&(UGKATRN_uda->Index))), Tprocs, &ZGKATRN),((*(&(UGKATRN_uda->Index))), Tprocs, &ZGKATRN,(YGKATRN).nonlocals));
AHKATRN_index = ZGKATRN;
 /* line 750: */
BHKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(BHKATRN,((*(&(UGKATRN_uda->From))), Tprocs, &CHKATRN),((*(&(UGKATRN_uda->From))), Tprocs, &CHKATRN,(BHKATRN).nonlocals));
DHKATRN_from = CHKATRN;
 /* line 751: */
EHKATRN = XGKATRN_uc.C;
if ( ! EHKATRN )
{EHKATRN = AHKATRN_index.C;
}
 /* line 752: */
if ( ! EHKATRN )
{EHKATRN = DHKATRN_from.C;
}
if ( EHKATRN )
{ 
GHKATRN.Unit = XGKATRN_uc.U;
GHKATRN.Index = AHKATRN_index.U;
GHKATRN.From = DHKATRN_from.U;
HHKATRN = A_HEAP(A68_221 ) ;
(*HHKATRN) = GHKATRN ;
FHKATRN.U = A_UNITE(IHKATRN,mode19,19,HHKATRN);
 /* line 753: */
FHKATRN.C = A68_TRUE;
GCKATRN = FHKATRN;
} 
else
{ 
JHKATRN.U = A_UNITE(KHKATRN,mode19,19,UGKATRN_uda);
 /* line 754: */
 /* line 755: */
 /* line 756: */
JHKATRN.C = A68_FALSE;
GCKATRN = JHKATRN;
} 
} 
break;
case 20: /* REF STRUCT(MODE170,MODE208)  */
LHKATRN_ur = (CCKATRN.data.mode20);
 /* line 757: */
{ 
MHKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(MHKATRN,((*(&(LHKATRN_ur->Size))), Tprocs, &NHKATRN),((*(&(LHKATRN_ur->Size))), Tprocs, &NHKATRN,(MHKATRN).nonlocals));
OHKATRN_size = NHKATRN;
 /* line 758: */
PHKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(PHKATRN,((*(&(LHKATRN_ur->Elem))), Tprocs, &QHKATRN),((*(&(LHKATRN_ur->Elem))), Tprocs, &QHKATRN,(PHKATRN).nonlocals));
RHKATRN_uc = QHKATRN;
 /* line 759: */
 /* line 760: */
SHKATRN = OHKATRN_size.C;
if ( ! SHKATRN )
{SHKATRN = RHKATRN_uc.C;
}
if ( SHKATRN )
{ 
UHKATRN.Size = OHKATRN_size.F;
UHKATRN.Elem = RHKATRN_uc.U;
VHKATRN = A_HEAP(A68_222 ) ;
(*VHKATRN) = UHKATRN ;
THKATRN.U = A_UNITE(WHKATRN,mode20,20,VHKATRN);
 /* line 761: */
THKATRN.C = A68_TRUE;
GCKATRN = THKATRN;
} 
else
{ 
XHKATRN.U = U;
 /* line 762: */
 /* line 763: */
 /* line 764: */
XHKATRN.C = A68_FALSE;
GCKATRN = XHKATRN;
} 
} 
break;
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
YHKATRN_us = (CCKATRN.data.mode21);
 /* line 765: */
{ 
ZHKATRN = (*(&(Tprocs->Ustr))) ;
A_CALLPROC(ZHKATRN,(YHKATRN_us, Tprocs, &AIKATRN),(YHKATRN_us, Tprocs, &AIKATRN,(ZHKATRN).nonlocals));
BIKATRN_uc = AIKATRN;
 /* line 766: */
EIKATRN = BIKATRN_uc.U ;
CIKATRN.U = A_UNITE(DIKATRN,mode21,21,EIKATRN);
 /* line 767: */
 /* line 768: */
CIKATRN.C = BIKATRN_uc.C;
GCKATRN = CIKATRN;
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE208,MODE208)  */
FIKATRN_ucon = (CCKATRN.data.mode22);
 /* line 769: */
{ 
GIKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(GIKATRN,((*(&(FIKATRN_ucon->Left))), Tprocs, &HIKATRN),((*(&(FIKATRN_ucon->Left))), Tprocs, &HIKATRN,(GIKATRN).nonlocals));
IIKATRN_luc = HIKATRN;
 /* line 770: */
JIKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(JIKATRN,((*(&(FIKATRN_ucon->Right))), Tprocs, &KIKATRN),((*(&(FIKATRN_ucon->Right))), Tprocs, &KIKATRN,(JIKATRN).nonlocals));
LIKATRN_ruc = KIKATRN;
 /* line 771: */
 /* line 772: */
MIKATRN = IIKATRN_luc.C;
if ( ! MIKATRN )
{MIKATRN = LIKATRN_ruc.C;
}
if ( MIKATRN )
{ 
 /* line 773: */
OIKATRN.String = (*(&(FIKATRN_ucon->String)));
OIKATRN.Sort = (*(&(FIKATRN_ucon->Sort)));
OIKATRN.Left = IIKATRN_luc.U;
OIKATRN.Right = LIKATRN_ruc.U;
PIKATRN = A_HEAP(A68_224 ) ;
(*PIKATRN) = OIKATRN ;
NIKATRN.U = A_UNITE(QIKATRN,mode22,22,PIKATRN);
 /* line 774: */
NIKATRN.C = A68_TRUE;
GCKATRN = NIKATRN;
} 
else
{ 
RIKATRN.U = U;
 /* line 775: */
 /* line 776: */
 /* line 777: */
RIKATRN.C = A68_FALSE;
GCKATRN = RIKATRN;
} 
} 
break;
case 23: /* REF STRUCT(MODE248,MODE208)  */
SIKATRN_um = (CCKATRN.data.mode23);
 /* line 778: */
{ 
TIKATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(TIKATRN,((*(&(SIKATRN_um->Inst))), Tprocs, &UIKATRN),((*(&(SIKATRN_um->Inst))), Tprocs, &UIKATRN,(TIKATRN).nonlocals));
VIKATRN_ic = UIKATRN;
 /* line 779: */
WIKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(WIKATRN,((*(&(SIKATRN_um->Right))), Tprocs, &XIKATRN),((*(&(SIKATRN_um->Right))), Tprocs, &XIKATRN,(WIKATRN).nonlocals));
YIKATRN_uc = XIKATRN;
 /* line 780: */
 /* line 781: */
ZIKATRN = YIKATRN_uc.C;
if ( ! ZIKATRN )
{ZIKATRN = VIKATRN_ic.C;
}
if ( ZIKATRN )
{ 
BJKATRN.Inst = VIKATRN_ic.I;
BJKATRN.Right = YIKATRN_uc.U;
CJKATRN = A_HEAP(A68_225 ) ;
(*CJKATRN) = BJKATRN ;
AJKATRN.U = A_UNITE(DJKATRN,mode23,23,CJKATRN);
 /* line 782: */
AJKATRN.C = A68_TRUE;
GCKATRN = AJKATRN;
} 
else
{ 
EJKATRN.U = U;
 /* line 783: */
 /* line 784: */
 /* line 785: */
EJKATRN.C = A68_FALSE;
GCKATRN = EJKATRN;
} 
} 
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
FJKATRN_ud = (CCKATRN.data.mode24);
 /* line 786: */
{ 
GJKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(GJKATRN,((*(&(FJKATRN_ud->Left))), Tprocs, &HJKATRN),((*(&(FJKATRN_ud->Left))), Tprocs, &HJKATRN,(GJKATRN).nonlocals));
IJKATRN_luc = HJKATRN;
 /* line 787: */
JJKATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(JJKATRN,((*(&(FJKATRN_ud->Inst))), Tprocs, &KJKATRN),((*(&(FJKATRN_ud->Inst))), Tprocs, &KJKATRN,(JJKATRN).nonlocals));
LJKATRN_ic = KJKATRN;
 /* line 788: */
MJKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(MJKATRN,((*(&(FJKATRN_ud->Right))), Tprocs, &NJKATRN),((*(&(FJKATRN_ud->Right))), Tprocs, &NJKATRN,(MJKATRN).nonlocals));
OJKATRN_ruc = NJKATRN;
 /* line 789: */
PJKATRN = IJKATRN_luc.C;
if ( ! PJKATRN )
{PJKATRN = OJKATRN_ruc.C;
}
 /* line 790: */
if ( ! PJKATRN )
{PJKATRN = LJKATRN_ic.C;
}
if ( PJKATRN )
{ 
RJKATRN.Left = IJKATRN_luc.U;
RJKATRN.Inst = LJKATRN_ic.I;
RJKATRN.Right = OJKATRN_ruc.U;
SJKATRN = A_HEAP(A68_226 ) ;
(*SJKATRN) = RJKATRN ;
QJKATRN.U = A_UNITE(TJKATRN,mode24,24,SJKATRN);
 /* line 791: */
QJKATRN.C = A68_TRUE;
GCKATRN = QJKATRN;
} 
else
{ 
UJKATRN.U = U;
 /* line 792: */
 /* line 793: */
 /* line 794: */
UJKATRN.C = A68_FALSE;
GCKATRN = UJKATRN;
} 
} 
break;
case 25: /* REF STRUCT(MODE208,REF MODE268)  */
VJKATRN_uca = (CCKATRN.data.mode25);
 /* line 795: */
{ 
WJKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(WJKATRN,((*(&(VJKATRN_uca->Input))), Tprocs, &XJKATRN),((*(&(VJKATRN_uca->Input))), Tprocs, &XJKATRN,(WJKATRN).nonlocals));
YJKATRN_uc = XJKATRN;
 /* line 796: */
ZJKATRN = (*(&(Tprocs->Uchoices))) ;
A_CALLPROC(ZJKATRN,((*(&(VJKATRN_uca->Choices))), Tprocs, &AKKATRN),((*(&(VJKATRN_uca->Choices))), Tprocs, &AKKATRN,(ZJKATRN).nonlocals));
BKKATRN_ucc = AKKATRN;
 /* line 797: */
 /* line 798: */
CKKATRN = YJKATRN_uc.C;
if ( ! CKKATRN )
{CKKATRN = BKKATRN_ucc.C;
}
if ( CKKATRN )
{ 
EKKATRN.Input = YJKATRN_uc.U;
EKKATRN.Choices = BKKATRN_ucc.U;
FKKATRN = A_HEAP(A68_227 ) ;
(*FKKATRN) = EKKATRN ;
DKKATRN.U = A_UNITE(GKKATRN,mode25,25,FKKATRN);
 /* line 799: */
DKKATRN.C = A68_TRUE;
GCKATRN = DKKATRN;
} 
else
{ 
HKKATRN.U = U;
 /* line 800: */
 /* line 801: */
 /* line 802: */
HKKATRN.C = A68_FALSE;
GCKATRN = HKKATRN;
} 
} 
break;
case 26: /* REF STRUCT(MODE170,MODE208,MODE208)  */
IKKATRN_ucond = (CCKATRN.data.mode26);
 /* line 803: */
{ 
JKKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(JKKATRN,((*(&(IKKATRN_ucond->Cond))), Tprocs, &KKKATRN),((*(&(IKKATRN_ucond->Cond))), Tprocs, &KKKATRN,(JKKATRN).nonlocals));
LKKATRN_cond = KKKATRN;
 /* line 804: */
MKKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(MKKATRN,((*(&(IKKATRN_ucond->True))), Tprocs, &NKKATRN),((*(&(IKKATRN_ucond->True))), Tprocs, &NKKATRN,(MKKATRN).nonlocals));
OKKATRN_true = NKKATRN;
 /* line 805: */
PKKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(PKKATRN,((*(&(IKKATRN_ucond->False))), Tprocs, &QKKATRN),((*(&(IKKATRN_ucond->False))), Tprocs, &QKKATRN,(PKKATRN).nonlocals));
RKKATRN_false = QKKATRN;
 /* line 806: */
SKKATRN = LKKATRN_cond.C;
if ( ! SKKATRN )
{SKKATRN = OKKATRN_true.C;
}
 /* line 807: */
if ( ! SKKATRN )
{SKKATRN = RKKATRN_false.C;
}
if ( SKKATRN )
{ 
UKKATRN.Cond = LKKATRN_cond.F;
UKKATRN.True = OKKATRN_true.U;
UKKATRN.False = RKKATRN_false.U;
VKKATRN = A_HEAP(A68_228 ) ;
(*VKKATRN) = UKKATRN ;
TKKATRN.U = A_UNITE(WKKATRN,mode26,26,VKKATRN);
 /* line 808: */
TKKATRN.C = A68_TRUE;
GCKATRN = TKKATRN;
} 
else
{ 
XKKATRN.U = U;
 /* line 809: */
 /* line 810: */
 /* line 811: */
XKKATRN.C = A68_FALSE;
GCKATRN = XKKATRN;
} 
} 
break;
case 27: /* REF STRUCT(MODE170,MODE208)  */
YKKATRN_url = (CCKATRN.data.mode27);
 /* line 812: */
{ 
ZKKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(ZKKATRN,((*(&(YKKATRN_url->Repl))), Tprocs, &ALKATRN),((*(&(YKKATRN_url->Repl))), Tprocs, &ALKATRN,(ZKKATRN).nonlocals));
BLKATRN_replc = ALKATRN;
 /* line 813: */
CLKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(CLKATRN,((*(&(YKKATRN_url->Body))), Tprocs, &DLKATRN),((*(&(YKKATRN_url->Body))), Tprocs, &DLKATRN,(CLKATRN).nonlocals));
ELKATRN_body = DLKATRN;
 /* line 814: */
 /* line 815: */
FLKATRN = BLKATRN_replc.C;
if ( ! FLKATRN )
{FLKATRN = ELKATRN_body.C;
}
if ( FLKATRN )
{ 
HLKATRN.Repl = BLKATRN_replc.F;
HLKATRN.Body = ELKATRN_body.U;
ILKATRN = A_HEAP(A68_229 ) ;
(*ILKATRN) = HLKATRN ;
GLKATRN.U = A_UNITE(JLKATRN,mode27,27,ILKATRN);
 /* line 816: */
GLKATRN.C = A68_TRUE;
GCKATRN = GLKATRN;
} 
else
{ 
KLKATRN.U = U;
 /* line 817: */
 /* line 818: */
 /* line 819: */
KLKATRN.C = A68_FALSE;
GCKATRN = KLKATRN;
} 
} 
break;
case 28: /* REF STRUCT(REF MODE256,MODE208)  */
LLKATRN_useq = (CCKATRN.data.mode28);
 /* line 820: */
{ 
MLKATRN = (*(&(Tprocs->Sequence))) ;
A_CALLPROC(MLKATRN,((*(&(LLKATRN_useq->Body))), Tprocs, &NLKATRN),((*(&(LLKATRN_useq->Body))), Tprocs, &NLKATRN,(MLKATRN).nonlocals));
OLKATRN_seqc = NLKATRN;
 /* line 821: */
PLKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(PLKATRN,((*(&(LLKATRN_useq->Output))), Tprocs, &QLKATRN),((*(&(LLKATRN_useq->Output))), Tprocs, &QLKATRN,(PLKATRN).nonlocals));
RLKATRN_output = QLKATRN;
 /* line 822: */
 /* line 823: */
SLKATRN = OLKATRN_seqc.C;
if ( ! SLKATRN )
{SLKATRN = RLKATRN_output.C;
}
if ( SLKATRN )
{ 
ULKATRN.Body = OLKATRN_seqc.S;
ULKATRN.Output = RLKATRN_output.U;
VLKATRN = A_HEAP(A68_230 ) ;
(*VLKATRN) = ULKATRN ;
TLKATRN.U = A_UNITE(WLKATRN,mode28,28,VLKATRN);
 /* line 824: */
TLKATRN.C = A68_TRUE;
GCKATRN = TLKATRN;
} 
else
{ 
XLKATRN.U = U;
 /* line 825: */
 /* line 826: */
 /* line 827: */
XLKATRN.C = A68_FALSE;
GCKATRN = XLKATRN;
} 
} 
break;
case 29: /* REF STRUCT(REF MODE237,MODE208)  */
YLKATRN_user = (CCKATRN.data.mode29);
 /* line 828: */
{ 
ZLKATRN = (*(&(Tprocs->Series))) ;
A_CALLPROC(ZLKATRN,((*(&(YLKATRN_user->Body))), Tprocs, &AMKATRN),((*(&(YLKATRN_user->Body))), Tprocs, &AMKATRN,(ZLKATRN).nonlocals));
BMKATRN_sec = AMKATRN;
 /* line 829: */
CMKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(CMKATRN,((*(&(YLKATRN_user->Output))), Tprocs, &DMKATRN),((*(&(YLKATRN_user->Output))), Tprocs, &DMKATRN,(CMKATRN).nonlocals));
EMKATRN_output = DMKATRN;
 /* line 830: */
 /* line 831: */
FMKATRN = BMKATRN_sec.C;
if ( ! FMKATRN )
{FMKATRN = EMKATRN_output.C;
}
if ( FMKATRN )
{ 
HMKATRN.Body = BMKATRN_sec.S;
HMKATRN.Output = EMKATRN_output.U;
IMKATRN = A_HEAP(A68_231 ) ;
(*IMKATRN) = HMKATRN ;
GMKATRN.U = A_UNITE(JMKATRN,mode29,29,IMKATRN);
 /* line 832: */
GMKATRN.C = A68_TRUE;
GCKATRN = GMKATRN;
} 
else
{ 
KMKATRN.U = U;
 /* line 833: */
 /* line 834: */
 /* line 835: */
KMKATRN.C = A68_FALSE;
GCKATRN = KMKATRN;
} 
} 
break;
case 30: /* REF STRUCT(MODE208,MODE161)  */
LMKATRN_uat = (CCKATRN.data.mode30);
 /* line 836: */
{ 
MMKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(MMKATRN,((*(&(LMKATRN_uat->Unit))), Tprocs, &NMKATRN),((*(&(LMKATRN_uat->Unit))), Tprocs, &NMKATRN,(MMKATRN).nonlocals));
OMKATRN_uc = NMKATRN;
 /* line 837: */
PMKATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(PMKATRN,((*(&(LMKATRN_uat->Attr))), Tprocs, &QMKATRN),((*(&(LMKATRN_uat->Attr))), Tprocs, &QMKATRN,(PMKATRN).nonlocals));
RMKATRN_ac = QMKATRN;
 /* line 838: */
 /* line 839: */
SMKATRN = OMKATRN_uc.C;
if ( ! SMKATRN )
{SMKATRN = RMKATRN_ac.C;
}
if ( SMKATRN )
{ 
UMKATRN.Unit = OMKATRN_uc.U;
UMKATRN.Attr = RMKATRN_ac.A;
VMKATRN = A_HEAP(A68_232 ) ;
(*VMKATRN) = UMKATRN ;
TMKATRN.U = A_UNITE(WMKATRN,mode30,30,VMKATRN);
 /* line 840: */
TMKATRN.C = A68_TRUE;
GCKATRN = TMKATRN;
} 
else
{ 
XMKATRN.U = U;
 /* line 841: */
 /* line 842: */
 /* line 843: */
XMKATRN.C = A68_FALSE;
GCKATRN = XMKATRN;
} 
} 
break;
case 31: /* REF STRUCT(MODE208,MODE172)  */
YMKATRN_uck = (CCKATRN.data.mode31);
 /* line 844: */
{ 
ZMKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(ZMKATRN,((*(&(YMKATRN_uck->Unit))), Tprocs, &ANKATRN),((*(&(YMKATRN_uck->Unit))), Tprocs, &ANKATRN,(ZMKATRN).nonlocals));
BNKATRN_uc = ANKATRN;
 /* line 845: */
 /* line 846: */
CNKATRN = (*(&(Tprocs->Formula))) ;
DNKATRN = A_HEAP(A68_172 ) ;
(*DNKATRN) = (*(&(YMKATRN_uck->Check))) ;
A_CALLPROC(CNKATRN,(A_UNITE(ENKATRN,mode2,2,DNKATRN), Tprocs, &FNKATRN),(A_UNITE(ENKATRN,mode2,2,DNKATRN), Tprocs, &FNKATRN,(CNKATRN).nonlocals));
GNKATRN_fc = FNKATRN;
 /* line 847: */
 /* line 848: */
HNKATRN = BNKATRN_uc.C;
if ( ! HNKATRN )
{HNKATRN = GNKATRN_fc.C;
}
if ( HNKATRN )
{ 
INKATRN = GNKATRN_fc.F ;
switch ( INKATRN.mode )
{ 
case 2: /* REF STRUCT(INT,MODE170,MODE170)  */
JNKATRN_fck = (INKATRN.data.mode2);
 /* line 849: */
KNKATRN = JNKATRN_fck;
break;
default: 
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(NNKATRN,MNKATRN,A68_VC )),(SHAAOSI_system, A_HVEC(NNKATRN,MNKATRN,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 850: */
KNKATRN = ONKATRN;
break;
} 
PNKATRN_chk = KNKATRN;
 /* line 851: */
RNKATRN.Unit = BNKATRN_uc.U;
RNKATRN.Check = (*PNKATRN_chk);
SNKATRN = A_HEAP(A68_233 ) ;
(*SNKATRN) = RNKATRN ;
QNKATRN.U = A_UNITE(TNKATRN,mode31,31,SNKATRN);
 /* line 852: */
QNKATRN.C = A68_TRUE;
GCKATRN = QNKATRN;
} 
else
{ 
UNKATRN.U = U;
 /* line 853: */
 /* line 854: */
 /* line 855: */
UNKATRN.C = A68_FALSE;
GCKATRN = UNKATRN;
} 
} 
break;
case 32: /* REF STRUCT(MODE208)  */
VNKATRN_ub = (CCKATRN.data.mode32);
 /* line 856: */
{ 
WNKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(WNKATRN,((*(&(VNKATRN_ub->Unit))), Tprocs, &XNKATRN),((*(&(VNKATRN_ub->Unit))), Tprocs, &XNKATRN,(WNKATRN).nonlocals));
YNKATRN_uc = XNKATRN;
 /* line 857: */
 /* line 858: */
if ( YNKATRN_uc.C )
{ 
BOKATRN = RGAATRN_makeubracket(YNKATRN_uc.U) ;
ZNKATRN.U = A_UNITE(AOKATRN,mode32,32,BOKATRN);
 /* line 859: */
ZNKATRN.C = A68_TRUE;
GCKATRN = ZNKATRN;
} 
else
{ 
COKATRN.U = U;
 /* line 860: */
 /* line 861: */
 /* line 862: */
COKATRN.C = A68_FALSE;
GCKATRN = COKATRN;
} 
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
DOKATRN_cqt = (CCKATRN.data.mode5);
 /* line 863: */
{ 
EOKATRN.U = A_UNITE(FOKATRN,mode5,5,DOKATRN_cqt);
 /* line 864: */
EOKATRN.C = A68_FALSE;
GCKATRN = EOKATRN;
} 
break;
case 6: /* REF STRUCT(INT)  */
GOKATRN_cv = (CCKATRN.data.mode6);
 /* line 865: */
{ 
HOKATRN.U = A_UNITE(IOKATRN,mode6,6,GOKATRN_cv);
 /* line 866: */
HOKATRN.C = A68_FALSE;
GCKATRN = HOKATRN;
} 
break;
case 33: /* REF STRUCT(MODE170,MODE208)  */
JOKATRN_ug = (CCKATRN.data.mode33);
 /* line 867: */
{ 
KOKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KOKATRN,((*(&(JOKATRN_ug->Size))), Tprocs, &LOKATRN),((*(&(JOKATRN_ug->Size))), Tprocs, &LOKATRN,(KOKATRN).nonlocals));
MOKATRN_size = LOKATRN;
 /* line 868: */
NOKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NOKATRN,((*(&(JOKATRN_ug->Char))), Tprocs, &OOKATRN),((*(&(JOKATRN_ug->Char))), Tprocs, &OOKATRN,(NOKATRN).nonlocals));
POKATRN_uc = OOKATRN;
 /* line 869: */
 /* line 870: */
QOKATRN = MOKATRN_size.C;
if ( ! QOKATRN )
{QOKATRN = POKATRN_uc.C;
}
if ( QOKATRN )
{ 
SOKATRN.Size = MOKATRN_size.F;
SOKATRN.Char = POKATRN_uc.U;
TOKATRN = A_HEAP(A68_235 ) ;
(*TOKATRN) = SOKATRN ;
ROKATRN.U = A_UNITE(UOKATRN,mode33,33,TOKATRN);
 /* line 871: */
ROKATRN.C = A68_TRUE;
GCKATRN = ROKATRN;
} 
else
{ 
VOKATRN.U = U;
 /* line 872: */
 /* line 873: */
 /* line 874: */
VOKATRN.C = A68_FALSE;
GCKATRN = VOKATRN;
} 
} 
break;
case 12: /* REF STRUCT(MODE208,MODE208)  */
WOKATRN_uf = (CCKATRN.data.mode12);
 /* line 875: */
{ 
XOKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(XOKATRN,((*(&(WOKATRN_uf->Sink))), Tprocs, &YOKATRN),((*(&(WOKATRN_uf->Sink))), Tprocs, &YOKATRN,(XOKATRN).nonlocals));
ZOKATRN_skc = YOKATRN;
 /* line 876: */
APKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(APKATRN,((*(&(WOKATRN_uf->Source))), Tprocs, &BPKATRN),((*(&(WOKATRN_uf->Source))), Tprocs, &BPKATRN,(APKATRN).nonlocals));
CPKATRN_src = BPKATRN;
 /* line 877: */
 /* line 878: */
DPKATRN = ZOKATRN_skc.C;
if ( ! DPKATRN )
{DPKATRN = CPKATRN_src.C;
}
if ( DPKATRN )
{ 
FPKATRN.Sink = ZOKATRN_skc.U;
FPKATRN.Source = CPKATRN_src.U;
GPKATRN = A_HEAP(A68_214 ) ;
(*GPKATRN) = FPKATRN ;
EPKATRN.U = A_UNITE(HPKATRN,mode12,12,GPKATRN);
 /* line 879: */
EPKATRN.C = A68_TRUE;
GCKATRN = EPKATRN;
} 
else
{ 
IPKATRN.U = U;
 /* line 880: */
 /* line 881: */
 /* line 882: */
IPKATRN.C = A68_FALSE;
GCKATRN = IPKATRN;
} 
} 
break;
default: 
JPKATRN.U = U;
 /* line 883: */
JPKATRN.C = A68_FALSE;
GCKATRN = JPKATRN;
break;
} 
A_PROC_EXIT(unit);
*ReturnedValue = (GCKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MPKATRN_mparam(A68_252  Mp, A68_416 * Tprocs, A68_370  *ReturnedValue)
{ 
A68_252  NPKATRN;  /* united object - for case conformity */
A68_169  OPKATRN_atag;
A68_335  PPKATRN;  /* CALL */
A68_334  QPKATRN;  /* avoid structure result */
A68_334  RPKATRN_ac;
A68_370  SPKATRN;  /* collateral clause result */
A68_252  TPKATRN;  /* OPERATORS - mode -> union mode */
A68_169  UPKATRN;  /* YIELD */
A68_370  VPKATRN;  /* clause result */
A68_370  WPKATRN;  /* collateral clause result */
A68_181  XPKATRN_ftag;
A68_339  YPKATRN;  /* CALL */
A68_338  ZPKATRN;  /* avoid structure result */
A68_338  AQKATRN_fc;
A68_370  BQKATRN;  /* collateral clause result */
A68_252  CQKATRN;  /* OPERATORS - mode -> union mode */
A68_181  DQKATRN;  /* YIELD */
A68_370  EQKATRN;  /* collateral clause result */
A68_195  FQKATRN_ttag;
A68_351  GQKATRN;  /* CALL */
A68_350  HQKATRN;  /* avoid structure result */
A68_350  IQKATRN_tc;
A68_370  JQKATRN;  /* collateral clause result */
A68_252  KQKATRN;  /* OPERATORS - mode -> union mode */
A68_195  LQKATRN;  /* YIELD */
A68_370  MQKATRN;  /* collateral clause result */
A68_253  NQKATRN_ctag;
A68_369  OQKATRN;  /* CALL */
A68_368  PQKATRN;  /* avoid structure result */
A68_368  QQKATRN_cc;
A68_370  RQKATRN;  /* collateral clause result */
A68_252  SQKATRN;  /* OPERATORS - mode -> union mode */
A68_253  TQKATRN;  /* YIELD */
A68_370  UQKATRN;  /* collateral clause result */
A68_248  VQKATRN_inst;
A68_375  WQKATRN;  /* CALL */
A68_374  XQKATRN;  /* avoid structure result */
A68_374  YQKATRN_ic;
A68_370  ZQKATRN;  /* collateral clause result */
A68_252  ARKATRN;  /* OPERATORS - mode -> union mode */
A68_248  BRKATRN;  /* YIELD */
A68_370  CRKATRN;  /* collateral clause result */
A68_370  DRKATRN;  /* collateral clause result */
A_PROC_ENTRY(mparam);
 /* line 889: */
 /* line 890: */
NPKATRN = Mp ;
switch ( NPKATRN.mode )
{ 
case 1: /* STRUCT(MODE161)  */
OPKATRN_atag = (NPKATRN.data.mode1);
 /* line 891: */
{ 
PPKATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(PPKATRN,(OPKATRN_atag.Tag, Tprocs, &QPKATRN),(OPKATRN_atag.Tag, Tprocs, &QPKATRN,(PPKATRN).nonlocals));
RPKATRN_ac = QPKATRN;
 /* line 892: */
 /* line 893: */
if ( RPKATRN_ac.C )
{ 
UPKATRN = (*EEAATRN_makeattrtag(RPKATRN_ac.A)) ;
SPKATRN.M = A_UNITE(TPKATRN,mode1,1,UPKATRN);
 /* line 894: */
SPKATRN.C = A68_TRUE;
VPKATRN = SPKATRN;
} 
else
{ 
WPKATRN.M = Mp;
 /* line 895: */
 /* line 896: */
 /* line 897: */
WPKATRN.C = A68_FALSE;
VPKATRN = WPKATRN;
} 
} 
break;
case 2: /* STRUCT(MODE170)  */
XPKATRN_ftag = (NPKATRN.data.mode2);
 /* line 898: */
{ 
YPKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(YPKATRN,(XPKATRN_ftag.Tag, Tprocs, &ZPKATRN),(XPKATRN_ftag.Tag, Tprocs, &ZPKATRN,(YPKATRN).nonlocals));
AQKATRN_fc = ZPKATRN;
 /* line 899: */
 /* line 900: */
if ( AQKATRN_fc.C )
{ 
DQKATRN = (*DFAATRN_makeformulatag(AQKATRN_fc.F)) ;
BQKATRN.M = A_UNITE(CQKATRN,mode2,2,DQKATRN);
 /* line 901: */
BQKATRN.C = A68_TRUE;
VPKATRN = BQKATRN;
} 
else
{ 
EQKATRN.M = Mp;
 /* line 902: */
 /* line 903: */
 /* line 904: */
EQKATRN.C = A68_FALSE;
VPKATRN = EQKATRN;
} 
} 
break;
case 3: /* STRUCT(MODE186)  */
FQKATRN_ttag = (NPKATRN.data.mode3);
 /* line 905: */
{ 
GQKATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(GQKATRN,(FQKATRN_ttag.Tag, Tprocs, &HQKATRN),(FQKATRN_ttag.Tag, Tprocs, &HQKATRN,(GQKATRN).nonlocals));
IQKATRN_tc = HQKATRN;
 /* line 906: */
 /* line 907: */
if ( IQKATRN_tc.C )
{ 
LQKATRN = (*XFAATRN_maketypetag(IQKATRN_tc.T)) ;
JQKATRN.M = A_UNITE(KQKATRN,mode3,3,LQKATRN);
 /* line 908: */
JQKATRN.C = A68_TRUE;
VPKATRN = JQKATRN;
} 
else
{ 
MQKATRN.M = Mp;
 /* line 909: */
 /* line 910: */
 /* line 911: */
MQKATRN.C = A68_FALSE;
VPKATRN = MQKATRN;
} 
} 
break;
case 4: /* STRUCT(MODE208)  */
NQKATRN_ctag = (NPKATRN.data.mode4);
 /* line 912: */
{ 
OQKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OQKATRN,(NQKATRN_ctag.Tag, Tprocs, &PQKATRN),(NQKATRN_ctag.Tag, Tprocs, &PQKATRN,(OQKATRN).nonlocals));
QQKATRN_cc = PQKATRN;
 /* line 913: */
 /* line 914: */
if ( QQKATRN_cc.C )
{ 
TQKATRN = (*WGAATRN_makeunittag(QQKATRN_cc.U)) ;
RQKATRN.M = A_UNITE(SQKATRN,mode4,4,TQKATRN);
 /* line 915: */
RQKATRN.C = A68_TRUE;
VPKATRN = RQKATRN;
} 
else
{ 
UQKATRN.M = Mp;
 /* line 916: */
 /* line 917: */
 /* line 918: */
UQKATRN.C = A68_FALSE;
VPKATRN = UQKATRN;
} 
} 
break;
case 5: /* STRUCT(INT,REF MODE250,MODE161)  */
VQKATRN_inst = (NPKATRN.data.mode5);
 /* line 919: */
{ 
WQKATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(WQKATRN,(VQKATRN_inst, Tprocs, &XQKATRN),(VQKATRN_inst, Tprocs, &XQKATRN,(WQKATRN).nonlocals));
YQKATRN_ic = XQKATRN;
 /* line 920: */
 /* line 921: */
if ( YQKATRN_ic.C )
{ 
BRKATRN = YQKATRN_ic.I ;
ZQKATRN.M = A_UNITE(ARKATRN,mode5,5,BRKATRN);
 /* line 922: */
ZQKATRN.C = A68_TRUE;
VPKATRN = ZQKATRN;
} 
else
{ 
CRKATRN.M = Mp;
 /* line 923: */
 /* line 924: */
 /* line 925: */
CRKATRN.C = A68_FALSE;
VPKATRN = CRKATRN;
} 
} 
break;
default: 
DRKATRN.M = Mp;
 /* line 926: */
DRKATRN.C = A68_FALSE;
VPKATRN = DRKATRN;
break;
} 
A_PROC_EXIT(mparam);
*ReturnedValue = (VPKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GRKATRN_macparams(A68_250  Mps, A68_416 * Tprocs, A68_372  *ReturnedValue)
{ 
A68_250  HRKATRN_new;
A68_BOOL  IRKATRN_changed;
A68_INT  JRKATRN_i;
A68_INT  KRKATRN;  /* to part of loop */
A68_251 * LRKATRN_old;
A68_371  MRKATRN;  /* CALL */
A68_370  NRKATRN;  /* avoid structure result */
A68_370  ORKATRN_mp;
A68_428  QRKATRN_generator;   /* proc value of non-global proc */
A68_250  VRKATRN;  /* avoid structure result */
A68_251  WRKATRN;  /* collateral clause result */
A68_251 * XRKATRN;  /* YIELD */
A68_372  YRKATRN;  /* collateral clause result */
A68_372  ZRKATRN;  /* clause result */
A68_372  ASKATRN;  /* collateral clause result */
A_PROC_ENTRY(macparams);
 /* line 930: */
 /* line 931: */
{ 
 /* line 932: */
if ( ! A_VSTRUCTCOMP(Mps,ABAATRN_nilmacparams) )
{ 
HRKATRN_new = Mps;
 /* line 933: */
IRKATRN_changed = A68_FALSE;
 /* line 934: */
 /* line 935: */
KRKATRN = HRKATRN_new.upb;
for ( JRKATRN_i = 1;
JRKATRN_i <= KRKATRN;
JRKATRN_i += 1 )
{ 
LRKATRN_old = (&A_VINDEX(HRKATRN_new,JRKATRN_i));
 /* line 936: */
MRKATRN = (*(&(Tprocs->Mparam))) ;
A_CALLPROC(MRKATRN,((*(&(LRKATRN_old->Param))), Tprocs, &NRKATRN),((*(&(LRKATRN_old->Param))), Tprocs, &NRKATRN,(MRKATRN).nonlocals));
ORKATRN_mp = NRKATRN;
 /* line 937: */
 /* line 938: */
if ( ORKATRN_mp.C )
{ 
 /* line 939: */
if ( !IRKATRN_changed )
{ 
IRKATRN_changed = A68_TRUE;
 /* line 940: */
A_CLOSURE( QRKATRN_generator, RRKATRN_generator, SRKATRN_generator );
(( SRKATRN_generator * ) ( QRKATRN_generator.nonlocals )) -> HRKATRN_new = (&HRKATRN_new);
 /* line 941: */
A_CALLPROC(QRKATRN_generator,(A68_FALSE, &VRKATRN),(A68_FALSE, &VRKATRN,(QRKATRN_generator).nonlocals));
A_VASSIGN2(HRKATRN_new,VRKATRN,A68_251 ) ;
HRKATRN_new = VRKATRN;
} 
 /* line 942: */
WRKATRN.Sort = (*(&(LRKATRN_old->Sort)));
 /* line 943: */
WRKATRN.Param = ORKATRN_mp.M;
 /* line 944: */
XRKATRN = (&A_VINDEX(HRKATRN_new,JRKATRN_i)) ;
(*XRKATRN) = WRKATRN;
} 
}
 /* line 945: */
YRKATRN.M = HRKATRN_new;
 /* line 946: */
YRKATRN.C = IRKATRN_changed;
ZRKATRN = YRKATRN;
} 
else
{ 
ASKATRN.M = Mps;
 /* line 947: */
 /* line 948: */
ASKATRN.C = A68_FALSE;
ZRKATRN = ASKATRN;
} 
} 
A_PROC_EXIT(macparams);
*ReturnedValue = (ZRKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DSKATRN_instance(A68_248  Inst, A68_416 * Tprocs, A68_374  *ReturnedValue)
{ 
A68_373  ESKATRN;  /* CALL */
A68_372  FSKATRN;  /* avoid structure result */
A68_372  GSKATRN_mps;
A68_335  HSKATRN;  /* CALL */
A68_334  ISKATRN;  /* avoid structure result */
A68_334  JSKATRN_ac;
A68_BOOL  KSKATRN;  /* optbool result */
A68_374  LSKATRN;  /* collateral clause result */
A68_374  MSKATRN;  /* clause result */
A68_374  NSKATRN;  /* collateral clause result */
A_PROC_ENTRY(instance);
 /* line 952: */
 /* line 953: */
{ 
ESKATRN = (*(&(Tprocs->Macparams))) ;
A_CALLPROC(ESKATRN,(Inst.Macparams, Tprocs, &FSKATRN),(Inst.Macparams, Tprocs, &FSKATRN,(ESKATRN).nonlocals));
GSKATRN_mps = FSKATRN;
 /* line 954: */
HSKATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(HSKATRN,(Inst.Attr, Tprocs, &ISKATRN),(Inst.Attr, Tprocs, &ISKATRN,(HSKATRN).nonlocals));
JSKATRN_ac = ISKATRN;
 /* line 955: */
 /* line 956: */
KSKATRN = GSKATRN_mps.C;
if ( ! KSKATRN )
{KSKATRN = JSKATRN_ac.C;
}
if ( KSKATRN )
{ 
LSKATRN.I.Fnno = Inst.Fnno;
LSKATRN.I.Macparams = GSKATRN_mps.M;
LSKATRN.I.Attr = JSKATRN_ac.A;
 /* line 957: */
LSKATRN.C = A68_TRUE;
MSKATRN = LSKATRN;
} 
else
{ 
NSKATRN.I = Inst;
 /* line 958: */
 /* line 959: */
NSKATRN.C = A68_FALSE;
MSKATRN = NSKATRN;
} 
} 
A_PROC_EXIT(instance);
*ReturnedValue = (MSKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QSKATRN_declaration(A68_269  Dec, A68_416 * Tprocs, A68_376  *ReturnedValue)
{ 
A68_376  RSKATRN;  /* collateral clause result */
A68_376  SSKATRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 963: */
RSKATRN.D = Dec;
RSKATRN.C = A68_FALSE;
SSKATRN = RSKATRN;
A_PROC_EXIT(declaration);
*ReturnedValue = (SSKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VSKATRN_printitems(A68_254 * Pi, A68_416 * Tprocs, A68_378  *ReturnedValue)
{ 
A68_378  WSKATRN;  /* collateral clause result */
A68_378  XSKATRN;  /* clause result */
A68_255  YSKATRN;  /* united object - for case conformity */
A68_VC  ZSKATRN_id;
A68_429  ATKATRN;  /* collateral clause result */
A68_255  BTKATRN;  /* OPERATORS - mode -> union mode */
A68_181 * CTKATRN_ft;
A68_339  DTKATRN;  /* CALL */
A68_338  ETKATRN;  /* avoid structure result */
A68_338  FTKATRN_ftc;
A68_255  GTKATRN;  /* OPERATORS - mode -> union mode */
A68_181 * HTKATRN;  /* YIELD */
A68_255  ITKATRN;  /* OPERATORS - mode -> union mode */
A68_429  JTKATRN_itemc;
A68_379  KTKATRN;  /* CALL */
A68_378  LTKATRN;  /* avoid structure result */
A68_378  MTKATRN_rest;
A68_BOOL  NTKATRN;  /* optbool result */
A68_378  OTKATRN;  /* collateral clause result */
A68_254  PTKATRN;  /* collateral clause result */
A68_254 * QTKATRN;  /* YIELD */
A68_378  RTKATRN;  /* collateral clause result */
A_PROC_ENTRY(printitems);
 /* line 967: */
 /* line 968: */
{ 
 /* line 969: */
if ( (Pi==MAAATRN_nilprintitems) )
{ 
WSKATRN.P = Pi;
 /* line 970: */
 /* line 971: */
WSKATRN.C = A68_FALSE;
XSKATRN = WSKATRN;
} 
else
{ 
 /* line 972: */
YSKATRN = (*(&(Pi->Item))) ;
switch ( YSKATRN.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
ZSKATRN_id = (YSKATRN.data.mode1);
 /* line 973: */
ATKATRN.I = A_UNITE(BTKATRN,mode1,1,ZSKATRN_id);
 /* line 974: */
ATKATRN.C = A68_FALSE;
break;
case 2: /* REF STRUCT(MODE170)  */
CTKATRN_ft = (YSKATRN.data.mode2);
 /* line 975: */
{ 
DTKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(DTKATRN,((*(&(CTKATRN_ft->Tag))), Tprocs, &ETKATRN),((*(&(CTKATRN_ft->Tag))), Tprocs, &ETKATRN,(DTKATRN).nonlocals));
FTKATRN_ftc = ETKATRN;
 /* line 976: */
 /* line 977: */
if ( FTKATRN_ftc.C )
{ 
HTKATRN = DFAATRN_makeformulatag(FTKATRN_ftc.F) ;
ATKATRN.I = A_UNITE(GTKATRN,mode2,2,HTKATRN);
 /* line 978: */
ATKATRN.C = A68_TRUE;
} 
else
{ 
ATKATRN.I = A_UNITE(ITKATRN,mode2,2,CTKATRN_ft);
 /* line 979: */
 /* line 980: */
 /* line 981: */
ATKATRN.C = A68_FALSE;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
JTKATRN_itemc = ATKATRN;
 /* line 982: */
KTKATRN = (*(&(Tprocs->Printitems))) ;
A_CALLPROC(KTKATRN,((*(&(Pi->Rest))), Tprocs, &LTKATRN),((*(&(Pi->Rest))), Tprocs, &LTKATRN,(KTKATRN).nonlocals));
MTKATRN_rest = LTKATRN;
 /* line 983: */
 /* line 984: */
NTKATRN = MTKATRN_rest.C;
if ( ! NTKATRN )
{NTKATRN = JTKATRN_itemc.C;
}
if ( NTKATRN )
{ 
PTKATRN.Item = JTKATRN_itemc.I;
PTKATRN.Rest = MTKATRN_rest.P;
QTKATRN = A_HEAP(A68_254 ) ;
(*QTKATRN) = PTKATRN ;
OTKATRN.P = QTKATRN;
 /* line 985: */
OTKATRN.C = A68_TRUE;
XSKATRN = OTKATRN;
} 
else
{ 
RTKATRN.P = Pi;
 /* line 986: */
 /* line 987: */
 /* line 988: */
RTKATRN.C = A68_FALSE;
XSKATRN = RTKATRN;
} 
} 
} 
A_PROC_EXIT(printitems);
*ReturnedValue = (XSKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UTKATRN_print(A68_240 * P, A68_416 * Tprocs, A68_380  *ReturnedValue)
{ 
A68_339  VTKATRN;  /* CALL */
A68_338  WTKATRN;  /* avoid structure result */
A68_338  XTKATRN_cond;
A68_379  YTKATRN;  /* CALL */
A68_378  ZTKATRN;  /* avoid structure result */
A68_378  AUKATRN_print;
A68_BOOL  BUKATRN;  /* optbool result */
A68_380  CUKATRN;  /* collateral clause result */
A68_240  DUKATRN;  /* collateral clause result */
A68_240 * EUKATRN;  /* YIELD */
A68_380  FUKATRN;  /* clause result */
A68_380  GUKATRN;  /* collateral clause result */
A_PROC_ENTRY(print);
 /* line 992: */
 /* line 993: */
{ 
VTKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(VTKATRN,((*(&(P->Cond))), Tprocs, &WTKATRN),((*(&(P->Cond))), Tprocs, &WTKATRN,(VTKATRN).nonlocals));
XTKATRN_cond = WTKATRN;
 /* line 994: */
YTKATRN = (*(&(Tprocs->Printitems))) ;
A_CALLPROC(YTKATRN,((*(&(P->Print))), Tprocs, &ZTKATRN),((*(&(P->Print))), Tprocs, &ZTKATRN,(YTKATRN).nonlocals));
AUKATRN_print = ZTKATRN;
 /* line 995: */
 /* line 996: */
BUKATRN = XTKATRN_cond.C;
if ( ! BUKATRN )
{BUKATRN = AUKATRN_print.C;
}
if ( BUKATRN )
{ 
DUKATRN.Cond = XTKATRN_cond.F;
DUKATRN.Print = AUKATRN_print.P;
EUKATRN = A_HEAP(A68_240 ) ;
(*EUKATRN) = DUKATRN ;
CUKATRN.P = EUKATRN;
 /* line 997: */
CUKATRN.C = A68_TRUE;
FUKATRN = CUKATRN;
} 
else
{ 
GUKATRN.P = P;
 /* line 998: */
 /* line 999: */
GUKATRN.C = A68_FALSE;
FUKATRN = GUKATRN;
} 
} 
A_PROC_EXIT(print);
*ReturnedValue = (FUKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JUKATRN_fault(A68_241 * F, A68_416 * Tprocs, A68_382  *ReturnedValue)
{ 
A68_339  KUKATRN;  /* CALL */
A68_338  LUKATRN;  /* avoid structure result */
A68_338  MUKATRN_cond;
A68_379  NUKATRN;  /* CALL */
A68_378  OUKATRN;  /* avoid structure result */
A68_378  PUKATRN_fault;
A68_BOOL  QUKATRN;  /* optbool result */
A68_382  RUKATRN;  /* collateral clause result */
A68_241  SUKATRN;  /* collateral clause result */
A68_241 * TUKATRN;  /* YIELD */
A68_382  UUKATRN;  /* clause result */
A68_382  VUKATRN;  /* collateral clause result */
A_PROC_ENTRY(fault);
 /* line 1003: */
 /* line 1004: */
{ 
KUKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KUKATRN,((*(&(F->Cond))), Tprocs, &LUKATRN),((*(&(F->Cond))), Tprocs, &LUKATRN,(KUKATRN).nonlocals));
MUKATRN_cond = LUKATRN;
 /* line 1005: */
NUKATRN = (*(&(Tprocs->Printitems))) ;
A_CALLPROC(NUKATRN,((*(&(F->Fault))), Tprocs, &OUKATRN),((*(&(F->Fault))), Tprocs, &OUKATRN,(NUKATRN).nonlocals));
PUKATRN_fault = OUKATRN;
 /* line 1006: */
 /* line 1007: */
QUKATRN = MUKATRN_cond.C;
if ( ! QUKATRN )
{QUKATRN = PUKATRN_fault.C;
}
if ( QUKATRN )
{ 
SUKATRN.Cond = MUKATRN_cond.F;
SUKATRN.Fault = PUKATRN_fault.P;
TUKATRN = A_HEAP(A68_241 ) ;
(*TUKATRN) = SUKATRN ;
RUKATRN.F = TUKATRN;
 /* line 1008: */
RUKATRN.C = A68_TRUE;
UUKATRN = RUKATRN;
} 
else
{ 
VUKATRN.F = F;
 /* line 1009: */
 /* line 1010: */
VUKATRN.C = A68_FALSE;
UUKATRN = VUKATRN;
} 
} 
A_PROC_EXIT(fault);
*ReturnedValue = (UUKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YUKATRN_names(A68_249 * N, A68_416 * Tprocs, A68_384  *ReturnedValue)
{ 
A68_384  ZUKATRN;  /* collateral clause result */
A68_384  AVKATRN;  /* clause result */
A68_385  BVKATRN;  /* CALL */
A68_384  CVKATRN;  /* avoid structure result */
A68_384  DVKATRN_nc;
A68_384  EVKATRN;  /* collateral clause result */
A68_249  FVKATRN;  /* collateral clause result */
A68_249 * GVKATRN;  /* YIELD */
A68_384  HVKATRN;  /* collateral clause result */
A_PROC_ENTRY(names);
 /* line 1017: */
 /* line 1018: */
if ( (N==NAAATRN_nilnames) )
{ 
ZUKATRN.N = N;
 /* line 1019: */
ZUKATRN.C = A68_FALSE;
AVKATRN = ZUKATRN;
} 
else
{ 
BVKATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(BVKATRN,((*(&(N->Rest))), Tprocs, &CVKATRN),((*(&(N->Rest))), Tprocs, &CVKATRN,(BVKATRN).nonlocals));
DVKATRN_nc = CVKATRN;
 /* line 1020: */
 /* line 1021: */
if ( DVKATRN_nc.C )
{ 
FVKATRN.Nameno = (*(&(N->Nameno)));
FVKATRN.Rest = DVKATRN_nc.N;
GVKATRN = A_HEAP(A68_249 ) ;
(*GVKATRN) = FVKATRN ;
EVKATRN.N = GVKATRN;
 /* line 1022: */
EVKATRN.C = A68_TRUE;
AVKATRN = EVKATRN;
} 
else
{ 
HVKATRN.N = N;
 /* line 1023: */
 /* line 1024: */
HVKATRN.C = A68_FALSE;
AVKATRN = HVKATRN;
} 
} 
A_PROC_EXIT(names);
*ReturnedValue = (AVKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KVKATRN_let(A68_242 * L, A68_416 * Tprocs, A68_386  *ReturnedValue)
{ 
A68_385  LVKATRN;  /* CALL */
A68_384  MVKATRN;  /* avoid structure result */
A68_384  NVKATRN_n;
A68_369  OVKATRN;  /* CALL */
A68_368  PVKATRN;  /* avoid structure result */
A68_368  QVKATRN_uc;
A68_BOOL  RVKATRN;  /* optbool result */
A68_386  SVKATRN;  /* collateral clause result */
A68_242  TVKATRN;  /* collateral clause result */
A68_242 * UVKATRN;  /* YIELD */
A68_386  VVKATRN;  /* clause result */
A68_386  WVKATRN;  /* collateral clause result */
A_PROC_ENTRY(let);
 /* line 1027: */
 /* line 1028: */
{ 
LVKATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(LVKATRN,((*(&(L->Letnames))), Tprocs, &MVKATRN),((*(&(L->Letnames))), Tprocs, &MVKATRN,(LVKATRN).nonlocals));
NVKATRN_n = MVKATRN;
 /* line 1029: */
OVKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OVKATRN,((*(&(L->Unit))), Tprocs, &PVKATRN),((*(&(L->Unit))), Tprocs, &PVKATRN,(OVKATRN).nonlocals));
QVKATRN_uc = PVKATRN;
 /* line 1030: */
 /* line 1031: */
RVKATRN = NVKATRN_n.C;
if ( ! RVKATRN )
{RVKATRN = QVKATRN_uc.C;
}
if ( RVKATRN )
{ 
TVKATRN.Letnames = NVKATRN_n.N;
TVKATRN.Unit = QVKATRN_uc.U;
UVKATRN = A_HEAP(A68_242 ) ;
(*UVKATRN) = TVKATRN ;
SVKATRN.L = UVKATRN;
 /* line 1032: */
SVKATRN.C = A68_TRUE;
VVKATRN = SVKATRN;
} 
else
{ 
WVKATRN.L = L;
 /* line 1033: */
 /* line 1034: */
WVKATRN.C = A68_FALSE;
VVKATRN = WVKATRN;
} 
} 
A_PROC_EXIT(let);
*ReturnedValue = (VVKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVKATRN_seqchoices(A68_267 * Sc, A68_416 * Tprocs, A68_388  *ReturnedValue)
{ 
A68_388  AWKATRN;  /* collateral clause result */
A68_388  BWKATRN;  /* clause result */
A68_369  CWKATRN;  /* CALL */
A68_368  DWKATRN;  /* avoid structure result */
A68_368  EWKATRN_test;
A68_391  FWKATRN;  /* CALL */
A68_390  GWKATRN;  /* avoid structure result */
A68_390  HWKATRN_out;
A68_389  IWKATRN;  /* CALL */
A68_388  JWKATRN;  /* avoid structure result */
A68_388  KWKATRN_rest;
A68_BOOL  LWKATRN;  /* optbool result */
A68_388  MWKATRN;  /* collateral clause result */
A68_267  NWKATRN;  /* collateral clause result */
A68_267 * OWKATRN;  /* YIELD */
A68_388  PWKATRN;  /* collateral clause result */
A_PROC_ENTRY(seqchoices);
 /* line 1038: */
 /* line 1039: */
if ( (Sc==PAAATRN_nilseqchoices) )
{ 
AWKATRN.S = Sc;
 /* line 1040: */
AWKATRN.C = A68_FALSE;
BWKATRN = AWKATRN;
} 
else
{ 
CWKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(CWKATRN,((*(&(Sc->Test))), Tprocs, &DWKATRN),((*(&(Sc->Test))), Tprocs, &DWKATRN,(CWKATRN).nonlocals));
EWKATRN_test = DWKATRN;
 /* line 1041: */
FWKATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(FWKATRN,((*(&(Sc->Output))), Tprocs, &GWKATRN),((*(&(Sc->Output))), Tprocs, &GWKATRN,(FWKATRN).nonlocals));
HWKATRN_out = GWKATRN;
 /* line 1042: */
IWKATRN = (*(&(Tprocs->Seqchoices))) ;
A_CALLPROC(IWKATRN,((*(&(Sc->Rest))), Tprocs, &JWKATRN),((*(&(Sc->Rest))), Tprocs, &JWKATRN,(IWKATRN).nonlocals));
KWKATRN_rest = JWKATRN;
 /* line 1043: */
LWKATRN = EWKATRN_test.C;
if ( ! LWKATRN )
{LWKATRN = HWKATRN_out.C;
}
 /* line 1044: */
if ( ! LWKATRN )
{LWKATRN = KWKATRN_rest.C;
}
if ( LWKATRN )
{ 
NWKATRN.Check = (*(&(Sc->Check)));
NWKATRN.Sort = (*(&(Sc->Sort)));
 /* line 1045: */
NWKATRN.Test = EWKATRN_test.U;
NWKATRN.Output = HWKATRN_out.S;
NWKATRN.Rest = KWKATRN_rest.S;
OWKATRN = A_HEAP(A68_267 ) ;
(*OWKATRN) = NWKATRN ;
MWKATRN.S = OWKATRN;
 /* line 1046: */
MWKATRN.C = A68_TRUE;
BWKATRN = MWKATRN;
} 
else
{ 
PWKATRN.S = Sc;
 /* line 1047: */
 /* line 1048: */
PWKATRN.C = A68_FALSE;
BWKATRN = PWKATRN;
} 
} 
A_PROC_EXIT(seqchoices);
*ReturnedValue = (BWKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SWKATRN_seqstep(A68_257  Ss, A68_416 * Tprocs, A68_390  *ReturnedValue)
{ 
A68_257  TWKATRN;  /* united object - for case conformity */
A68_269  UWKATRN_dec;
A68_377  VWKATRN;  /* CALL */
A68_376  WWKATRN;  /* avoid structure result */
A68_376  XWKATRN_d;
A68_390  YWKATRN;  /* collateral clause result */
A68_257  ZWKATRN;  /* OPERATORS - unite union */
A68_269  AXKATRN;  /* YIELD */
A68_390  BXKATRN;  /* clause result */
A68_240 * CXKATRN_pt;
A68_381  DXKATRN;  /* CALL */
A68_380  EXKATRN;  /* avoid structure result */
A68_380  FXKATRN_p;
A68_390  GXKATRN;  /* collateral clause result */
A68_257  HXKATRN;  /* OPERATORS - mode -> union mode */
A68_240 * IXKATRN;  /* YIELD */
A68_241 * JXKATRN_ft;
A68_383  KXKATRN;  /* CALL */
A68_382  LXKATRN;  /* avoid structure result */
A68_382  MXKATRN_f;
A68_390  NXKATRN;  /* collateral clause result */
A68_257  OXKATRN;  /* OPERATORS - mode -> union mode */
A68_241 * PXKATRN;  /* YIELD */
A68_258 * QXKATRN_sl;
A68_387  RXKATRN;  /* CALL */
A68_386  SXKATRN;  /* avoid structure result */
A68_386  TXKATRN_lc;
A68_390  UXKATRN;  /* collateral clause result */
A68_258 * VXKATRN_s;
A68_242 * WXKATRN;  /* YIELD */
A68_257  XXKATRN;  /* OPERATORS - mode -> union mode */
A68_259 * YXKATRN_sv;
A68_387  ZXKATRN;  /* CALL */
A68_386  AYKATRN;  /* avoid structure result */
A68_386  BYKATRN_lc;
A68_390  CYKATRN;  /* collateral clause result */
A68_259 * DYKATRN_s;
A68_242 * EYKATRN;  /* YIELD */
A68_257  FYKATRN;  /* OPERATORS - mode -> union mode */
A68_260 * GYKATRN_sp;
A68_385  HYKATRN;  /* CALL */
A68_384  IYKATRN;  /* avoid structure result */
A68_384  JYKATRN_n;
A68_369  KYKATRN;  /* CALL */
A68_368  LYKATRN;  /* avoid structure result */
A68_368  MYKATRN_c;
A68_BOOL  NYKATRN;  /* optbool result */
A68_390  OYKATRN;  /* collateral clause result */
A68_260  PYKATRN;  /* collateral clause result */
A68_260 * QYKATRN;  /* YIELD */
A68_257  RYKATRN;  /* OPERATORS - mode -> union mode */
A68_390  SYKATRN;  /* collateral clause result */
A68_261 * TYKATRN_sa;
A68_369  UYKATRN;  /* CALL */
A68_368  VYKATRN;  /* avoid structure result */
A68_368  WYKATRN_to;
A68_369  XYKATRN;  /* CALL */
A68_368  YYKATRN;  /* avoid structure result */
A68_368  ZYKATRN_from;
A68_BOOL  AZKATRN;  /* optbool result */
A68_390  BZKATRN;  /* collateral clause result */
A68_261  CZKATRN;  /* collateral clause result */
A68_261 * DZKATRN;  /* YIELD */
A68_257  EZKATRN;  /* OPERATORS - mode -> union mode */
A68_390  FZKATRN;  /* collateral clause result */
A68_262 * GZKATRN_sc;
A68_369  HZKATRN;  /* CALL */
A68_368  IZKATRN;  /* avoid structure result */
A68_368  JZKATRN_input;
A68_389  KZKATRN;  /* CALL */
A68_388  LZKATRN;  /* avoid structure result */
A68_388  MZKATRN_choices;
A68_BOOL  NZKATRN;  /* optbool result */
A68_390  OZKATRN;  /* collateral clause result */
A68_262  PZKATRN;  /* collateral clause result */
A68_262 * QZKATRN;  /* YIELD */
A68_257  RZKATRN;  /* OPERATORS - mode -> union mode */
A68_390  SZKATRN;  /* collateral clause result */
A68_263 * TZKATRN_scond;
A68_339  UZKATRN;  /* CALL */
A68_338  VZKATRN;  /* avoid structure result */
A68_338  WZKATRN_cond;
A68_391  XZKATRN;  /* CALL */
A68_390  YZKATRN;  /* avoid structure result */
A68_390  ZZKATRN_true;
A68_391  AALATRN;  /* CALL */
A68_390  BALATRN;  /* avoid structure result */
A68_390  CALATRN_false;
A68_BOOL  DALATRN;  /* optbool result */
A68_390  EALATRN;  /* collateral clause result */
A68_263  FALATRN;  /* collateral clause result */
A68_263 * GALATRN;  /* YIELD */
A68_257  HALATRN;  /* OPERATORS - mode -> union mode */
A68_390  IALATRN;  /* collateral clause result */
A68_264 * JALATRN_sr;
A68_339  KALATRN;  /* CALL */
A68_338  LALATRN;  /* avoid structure result */
A68_338  MALATRN_replc;
A68_391  NALATRN;  /* CALL */
A68_390  OALATRN;  /* avoid structure result */
A68_390  PALATRN_body;
A68_BOOL  QALATRN;  /* optbool result */
A68_390  RALATRN;  /* collateral clause result */
A68_264  SALATRN;  /* collateral clause result */
A68_264 * TALATRN;  /* YIELD */
A68_257  UALATRN;  /* OPERATORS - mode -> union mode */
A68_390  VALATRN;  /* collateral clause result */
A68_266 * WALATRN_srow;
A68_339  XALATRN;  /* CALL */
A68_338  YALATRN;  /* avoid structure result */
A68_338  ZALATRN_size;
A68_391  ABLATRN;  /* CALL */
A68_390  BBLATRN;  /* avoid structure result */
A68_390  CBLATRN_elem;
A68_BOOL  DBLATRN;  /* optbool result */
A68_390  EBLATRN;  /* collateral clause result */
A68_266  FBLATRN;  /* collateral clause result */
A68_266 * GBLATRN;  /* YIELD */
A68_257  HBLATRN;  /* OPERATORS - mode -> union mode */
A68_390  IBLATRN;  /* collateral clause result */
A68_256 * JBLATRN_seq;
A68_393  KBLATRN;  /* CALL */
A68_392  LBLATRN;  /* avoid structure result */
A68_392  MBLATRN_s;
A68_390  NBLATRN;  /* collateral clause result */
A68_257  OBLATRN;  /* OPERATORS - mode -> union mode */
A68_256 * PBLATRN;  /* YIELD */
A68_390  QBLATRN;  /* collateral clause result */
A_PROC_ENTRY(seqstep);
 /* line 1052: */
 /* line 1053: */
TWKATRN = Ss ;
switch ( TWKATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(UWKATRN_dec,TWKATRN);
 /* line 1054: */
{ 
VWKATRN = (*(&(Tprocs->Declaration))) ;
A_CALLPROC(VWKATRN,(UWKATRN_dec, Tprocs, &WWKATRN),(UWKATRN_dec, Tprocs, &WWKATRN,(VWKATRN).nonlocals));
XWKATRN_d = WWKATRN;
 /* line 1055: */
AXKATRN = XWKATRN_d.D ;
YWKATRN.S = A_UUNITE(ZWKATRN,0,AXKATRN);
 /* line 1056: */
 /* line 1057: */
YWKATRN.C = XWKATRN_d.C;
BXKATRN = YWKATRN;
} 
break;
case 6: /* REF STRUCT(MODE170,REF MODE254)  */
CXKATRN_pt = (TWKATRN.data.mode6);
 /* line 1058: */
{ 
DXKATRN = (*(&(Tprocs->Print))) ;
A_CALLPROC(DXKATRN,(CXKATRN_pt, Tprocs, &EXKATRN),(CXKATRN_pt, Tprocs, &EXKATRN,(DXKATRN).nonlocals));
FXKATRN_p = EXKATRN;
 /* line 1059: */
IXKATRN = FXKATRN_p.P ;
GXKATRN.S = A_UNITE(HXKATRN,mode6,6,IXKATRN);
 /* line 1060: */
 /* line 1061: */
GXKATRN.C = FXKATRN_p.C;
BXKATRN = GXKATRN;
} 
break;
case 7: /* REF STRUCT(MODE170,REF MODE254)  */
JXKATRN_ft = (TWKATRN.data.mode7);
 /* line 1062: */
{ 
KXKATRN = (*(&(Tprocs->Fault))) ;
A_CALLPROC(KXKATRN,(JXKATRN_ft, Tprocs, &LXKATRN),(JXKATRN_ft, Tprocs, &LXKATRN,(KXKATRN).nonlocals));
MXKATRN_f = LXKATRN;
 /* line 1063: */
PXKATRN = MXKATRN_f.F ;
NXKATRN.S = A_UNITE(OXKATRN,mode7,7,PXKATRN);
 /* line 1064: */
 /* line 1065: */
NXKATRN.C = MXKATRN_f.C;
BXKATRN = NXKATRN;
} 
break;
case 8: /* REF STRUCT(MODE242)  */
QXKATRN_sl = (TWKATRN.data.mode8);
 /* line 1066: */
{ 
RXKATRN = (*(&(Tprocs->Let))) ;
A_CALLPROC(RXKATRN,((&(QXKATRN_sl->Seqlet)), Tprocs, &SXKATRN),((&(QXKATRN_sl->Seqlet)), Tprocs, &SXKATRN,(RXKATRN).nonlocals));
TXKATRN_lc = SXKATRN;
 /* line 1067: */
{ 
VXKATRN_s = (A_HEAP(A68_258 ));
WXKATRN = (&(VXKATRN_s->Seqlet)) ;
(*WXKATRN) = (*TXKATRN_lc.L);
UXKATRN.S = A_UNITE(XXKATRN,mode8,8,VXKATRN_s);
} 
 /* line 1068: */
 /* line 1069: */
UXKATRN.C = TXKATRN_lc.C;
BXKATRN = UXKATRN;
} 
break;
case 9: /* REF STRUCT(MODE242)  */
YXKATRN_sv = (TWKATRN.data.mode9);
 /* line 1070: */
{ 
ZXKATRN = (*(&(Tprocs->Let))) ;
A_CALLPROC(ZXKATRN,((&(YXKATRN_sv->Seqvar)), Tprocs, &AYKATRN),((&(YXKATRN_sv->Seqvar)), Tprocs, &AYKATRN,(ZXKATRN).nonlocals));
BYKATRN_lc = AYKATRN;
 /* line 1071: */
{ 
DYKATRN_s = (A_HEAP(A68_259 ));
EYKATRN = (&(DYKATRN_s->Seqvar)) ;
(*EYKATRN) = (*BYKATRN_lc.L);
CYKATRN.S = A_UNITE(FYKATRN,mode9,9,DYKATRN_s);
} 
 /* line 1072: */
 /* line 1073: */
CYKATRN.C = BYKATRN_lc.C;
BXKATRN = CYKATRN;
} 
break;
case 10: /* REF STRUCT(REF MODE249,MODE208)  */
GYKATRN_sp = (TWKATRN.data.mode10);
 /* line 1074: */
{ 
HYKATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(HYKATRN,((*(&(GYKATRN_sp->Pvarnames))), Tprocs, &IYKATRN),((*(&(GYKATRN_sp->Pvarnames))), Tprocs, &IYKATRN,(HYKATRN).nonlocals));
JYKATRN_n = IYKATRN;
 /* line 1075: */
KYKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(KYKATRN,((*(&(GYKATRN_sp->Init))), Tprocs, &LYKATRN),((*(&(GYKATRN_sp->Init))), Tprocs, &LYKATRN,(KYKATRN).nonlocals));
MYKATRN_c = LYKATRN;
 /* line 1076: */
 /* line 1077: */
NYKATRN = JYKATRN_n.C;
if ( ! NYKATRN )
{NYKATRN = MYKATRN_c.C;
}
if ( NYKATRN )
{ 
PYKATRN.Pvarnames = JYKATRN_n.N;
PYKATRN.Init = MYKATRN_c.U;
QYKATRN = A_HEAP(A68_260 ) ;
(*QYKATRN) = PYKATRN ;
OYKATRN.S = A_UNITE(RYKATRN,mode10,10,QYKATRN);
 /* line 1078: */
OYKATRN.C = A68_TRUE;
BXKATRN = OYKATRN;
} 
else
{ 
SYKATRN.S = Ss;
 /* line 1079: */
 /* line 1080: */
 /* line 1081: */
SYKATRN.C = A68_FALSE;
BXKATRN = SYKATRN;
} 
} 
break;
case 11: /* REF STRUCT(MODE208,MODE208)  */
TYKATRN_sa = (TWKATRN.data.mode11);
 /* line 1082: */
{ 
UYKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(UYKATRN,((*(&(TYKATRN_sa->To))), Tprocs, &VYKATRN),((*(&(TYKATRN_sa->To))), Tprocs, &VYKATRN,(UYKATRN).nonlocals));
WYKATRN_to = VYKATRN;
 /* line 1083: */
XYKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(XYKATRN,((*(&(TYKATRN_sa->From))), Tprocs, &YYKATRN),((*(&(TYKATRN_sa->From))), Tprocs, &YYKATRN,(XYKATRN).nonlocals));
ZYKATRN_from = YYKATRN;
 /* line 1084: */
 /* line 1085: */
AZKATRN = WYKATRN_to.C;
if ( ! AZKATRN )
{AZKATRN = ZYKATRN_from.C;
}
if ( AZKATRN )
{ 
CZKATRN.To = WYKATRN_to.U;
CZKATRN.From = ZYKATRN_from.U;
DZKATRN = A_HEAP(A68_261 ) ;
(*DZKATRN) = CZKATRN ;
BZKATRN.S = A_UNITE(EZKATRN,mode11,11,DZKATRN);
 /* line 1086: */
BZKATRN.C = A68_TRUE;
BXKATRN = BZKATRN;
} 
else
{ 
FZKATRN.S = Ss;
 /* line 1087: */
 /* line 1088: */
 /* line 1089: */
FZKATRN.C = A68_FALSE;
BXKATRN = FZKATRN;
} 
} 
break;
case 12: /* REF STRUCT(MODE208,REF MODE267)  */
GZKATRN_sc = (TWKATRN.data.mode12);
 /* line 1090: */
{ 
HZKATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HZKATRN,((*(&(GZKATRN_sc->Input))), Tprocs, &IZKATRN),((*(&(GZKATRN_sc->Input))), Tprocs, &IZKATRN,(HZKATRN).nonlocals));
JZKATRN_input = IZKATRN;
 /* line 1091: */
KZKATRN = (*(&(Tprocs->Seqchoices))) ;
A_CALLPROC(KZKATRN,((*(&(GZKATRN_sc->Choices))), Tprocs, &LZKATRN),((*(&(GZKATRN_sc->Choices))), Tprocs, &LZKATRN,(KZKATRN).nonlocals));
MZKATRN_choices = LZKATRN;
 /* line 1092: */
 /* line 1093: */
NZKATRN = JZKATRN_input.C;
if ( ! NZKATRN )
{NZKATRN = MZKATRN_choices.C;
}
if ( NZKATRN )
{ 
PZKATRN.Input = JZKATRN_input.U;
PZKATRN.Choices = MZKATRN_choices.S;
QZKATRN = A_HEAP(A68_262 ) ;
(*QZKATRN) = PZKATRN ;
OZKATRN.S = A_UNITE(RZKATRN,mode12,12,QZKATRN);
 /* line 1094: */
OZKATRN.C = A68_TRUE;
BXKATRN = OZKATRN;
} 
else
{ 
SZKATRN.S = Ss;
 /* line 1095: */
 /* line 1096: */
 /* line 1097: */
SZKATRN.C = A68_FALSE;
BXKATRN = SZKATRN;
} 
} 
break;
case 13: /* REF STRUCT(MODE170,MODE257,MODE257)  */
TZKATRN_scond = (TWKATRN.data.mode13);
 /* line 1098: */
{ 
UZKATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(UZKATRN,((*(&(TZKATRN_scond->Cond))), Tprocs, &VZKATRN),((*(&(TZKATRN_scond->Cond))), Tprocs, &VZKATRN,(UZKATRN).nonlocals));
WZKATRN_cond = VZKATRN;
 /* line 1099: */
XZKATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(XZKATRN,((*(&(TZKATRN_scond->True))), Tprocs, &YZKATRN),((*(&(TZKATRN_scond->True))), Tprocs, &YZKATRN,(XZKATRN).nonlocals));
ZZKATRN_true = YZKATRN;
 /* line 1100: */
AALATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(AALATRN,((*(&(TZKATRN_scond->False))), Tprocs, &BALATRN),((*(&(TZKATRN_scond->False))), Tprocs, &BALATRN,(AALATRN).nonlocals));
CALATRN_false = BALATRN;
 /* line 1101: */
DALATRN = WZKATRN_cond.C;
if ( ! DALATRN )
{DALATRN = ZZKATRN_true.C;
}
 /* line 1102: */
if ( ! DALATRN )
{DALATRN = CALATRN_false.C;
}
if ( DALATRN )
{ 
FALATRN.Cond = WZKATRN_cond.F;
FALATRN.True = ZZKATRN_true.S;
FALATRN.False = CALATRN_false.S;
GALATRN = A_HEAP(A68_263 ) ;
(*GALATRN) = FALATRN ;
EALATRN.S = A_UNITE(HALATRN,mode13,13,GALATRN);
 /* line 1103: */
EALATRN.C = A68_TRUE;
BXKATRN = EALATRN;
} 
else
{ 
IALATRN.S = Ss;
 /* line 1104: */
 /* line 1105: */
 /* line 1106: */
IALATRN.C = A68_FALSE;
BXKATRN = IALATRN;
} 
} 
break;
case 14: /* REF STRUCT(MODE170,MODE257)  */
JALATRN_sr = (TWKATRN.data.mode14);
 /* line 1107: */
{ 
KALATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KALATRN,((*(&(JALATRN_sr->Repl))), Tprocs, &LALATRN),((*(&(JALATRN_sr->Repl))), Tprocs, &LALATRN,(KALATRN).nonlocals));
MALATRN_replc = LALATRN;
 /* line 1108: */
NALATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(NALATRN,((*(&(JALATRN_sr->Body))), Tprocs, &OALATRN),((*(&(JALATRN_sr->Body))), Tprocs, &OALATRN,(NALATRN).nonlocals));
PALATRN_body = OALATRN;
 /* line 1109: */
 /* line 1110: */
QALATRN = MALATRN_replc.C;
if ( ! QALATRN )
{QALATRN = PALATRN_body.C;
}
if ( QALATRN )
{ 
SALATRN.Repl = MALATRN_replc.F;
SALATRN.Body = PALATRN_body.S;
TALATRN = A_HEAP(A68_264 ) ;
(*TALATRN) = SALATRN ;
RALATRN.S = A_UNITE(UALATRN,mode14,14,TALATRN);
 /* line 1111: */
RALATRN.C = A68_TRUE;
BXKATRN = RALATRN;
} 
else
{ 
VALATRN.S = Ss;
 /* line 1112: */
 /* line 1113: */
 /* line 1114: */
VALATRN.C = A68_FALSE;
BXKATRN = VALATRN;
} 
} 
break;
case 17: /* REF STRUCT(MODE170,MODE257)  */
WALATRN_srow = (TWKATRN.data.mode17);
 /* line 1115: */
{ 
XALATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(XALATRN,((*(&(WALATRN_srow->Size))), Tprocs, &YALATRN),((*(&(WALATRN_srow->Size))), Tprocs, &YALATRN,(XALATRN).nonlocals));
ZALATRN_size = YALATRN;
 /* line 1116: */
ABLATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(ABLATRN,((*(&(WALATRN_srow->Elem))), Tprocs, &BBLATRN),((*(&(WALATRN_srow->Elem))), Tprocs, &BBLATRN,(ABLATRN).nonlocals));
CBLATRN_elem = BBLATRN;
 /* line 1117: */
 /* line 1118: */
DBLATRN = ZALATRN_size.C;
if ( ! DBLATRN )
{DBLATRN = CBLATRN_elem.C;
}
if ( DBLATRN )
{ 
FBLATRN.Size = ZALATRN_size.F;
FBLATRN.Elem = CBLATRN_elem.S;
GBLATRN = A_HEAP(A68_266 ) ;
(*GBLATRN) = FBLATRN ;
EBLATRN.S = A_UNITE(HBLATRN,mode17,17,GBLATRN);
 /* line 1119: */
EBLATRN.C = A68_TRUE;
BXKATRN = EBLATRN;
} 
else
{ 
IBLATRN.S = Ss;
 /* line 1120: */
 /* line 1121: */
 /* line 1122: */
IBLATRN.C = A68_FALSE;
BXKATRN = IBLATRN;
} 
} 
break;
case 16: /* REF STRUCT(MODE257,REF MODE256)  */
JBLATRN_seq = (TWKATRN.data.mode16);
 /* line 1123: */
{ 
KBLATRN = (*(&(Tprocs->Sequence))) ;
A_CALLPROC(KBLATRN,(JBLATRN_seq, Tprocs, &LBLATRN),(JBLATRN_seq, Tprocs, &LBLATRN,(KBLATRN).nonlocals));
MBLATRN_s = LBLATRN;
 /* line 1124: */
PBLATRN = MBLATRN_s.S ;
NBLATRN.S = A_UNITE(OBLATRN,mode16,16,PBLATRN);
 /* line 1125: */
 /* line 1126: */
NBLATRN.C = MBLATRN_s.C;
BXKATRN = NBLATRN;
} 
break;
default: 
QBLATRN.S = Ss;
 /* line 1127: */
QBLATRN.C = A68_FALSE;
BXKATRN = QBLATRN;
break;
} 
A_PROC_EXIT(seqstep);
*ReturnedValue = (BXKATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TBLATRN_sequence(A68_256 * Ss, A68_416 * Tprocs, A68_392  *ReturnedValue)
{ 
A68_392  UBLATRN;  /* collateral clause result */
A68_392  VBLATRN;  /* clause result */
A68_391  WBLATRN;  /* CALL */
A68_390  XBLATRN;  /* avoid structure result */
A68_390  YBLATRN_s;
A68_393  ZBLATRN;  /* CALL */
A68_392  ACLATRN;  /* avoid structure result */
A68_392  BCLATRN_seq;
A68_BOOL  CCLATRN;  /* optbool result */
A68_392  DCLATRN;  /* collateral clause result */
A68_256  ECLATRN;  /* collateral clause result */
A68_256 * FCLATRN;  /* YIELD */
A68_392  GCLATRN;  /* collateral clause result */
A_PROC_ENTRY(sequence);
 /* line 1131: */
 /* line 1132: */
if ( (Ss==QAAATRN_nilsequence) )
{ 
UBLATRN.S = Ss;
 /* line 1133: */
UBLATRN.C = A68_FALSE;
VBLATRN = UBLATRN;
} 
else
{ 
WBLATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(WBLATRN,((*(&(Ss->Step))), Tprocs, &XBLATRN),((*(&(Ss->Step))), Tprocs, &XBLATRN,(WBLATRN).nonlocals));
YBLATRN_s = XBLATRN;
 /* line 1134: */
ZBLATRN = (*(&(Tprocs->Sequence))) ;
A_CALLPROC(ZBLATRN,((*(&(Ss->Rest))), Tprocs, &ACLATRN),((*(&(Ss->Rest))), Tprocs, &ACLATRN,(ZBLATRN).nonlocals));
BCLATRN_seq = ACLATRN;
 /* line 1135: */
 /* line 1136: */
CCLATRN = BCLATRN_seq.C;
if ( ! CCLATRN )
{CCLATRN = YBLATRN_s.C;
}
if ( CCLATRN )
{ 
ECLATRN.Step = YBLATRN_s.S;
ECLATRN.Rest = BCLATRN_seq.S;
FCLATRN = A_HEAP(A68_256 ) ;
(*FCLATRN) = ECLATRN ;
DCLATRN.S = FCLATRN;
 /* line 1137: */
DCLATRN.C = A68_TRUE;
VBLATRN = DCLATRN;
} 
else
{ 
GCLATRN.S = Ss;
 /* line 1138: */
 /* line 1139: */
GCLATRN.C = A68_FALSE;
VBLATRN = GCLATRN;
} 
} 
A_PROC_EXIT(sequence);
*ReturnedValue = (VBLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JCLATRN_make(A68_243 * M, A68_416 * Tprocs, A68_394  *ReturnedValue)
{ 
A68_341  KCLATRN;  /* CALL */
A68_340  LCLATRN;  /* avoid structure result */
A68_340  MCLATRN_fc;
A68_375  NCLATRN;  /* CALL */
A68_374  OCLATRN;  /* avoid structure result */
A68_374  PCLATRN_ic;
A68_385  QCLATRN;  /* CALL */
A68_384  RCLATRN;  /* avoid structure result */
A68_384  SCLATRN_nc;
A68_BOOL  TCLATRN;  /* optbool result */
A68_394  UCLATRN;  /* collateral clause result */
A68_243  VCLATRN;  /* collateral clause result */
A68_243 * WCLATRN;  /* YIELD */
A68_394  XCLATRN;  /* clause result */
A68_394  YCLATRN;  /* collateral clause result */
A_PROC_ENTRY(make);
 /* line 1146: */
 /* line 1147: */
{ 
KCLATRN = (*(&(Tprocs->Formulas))) ;
A_CALLPROC(KCLATRN,((*(&(M->Sizes))), Tprocs, &LCLATRN),((*(&(M->Sizes))), Tprocs, &LCLATRN,(KCLATRN).nonlocals));
MCLATRN_fc = LCLATRN;
 /* line 1148: */
NCLATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(NCLATRN,((*(&(M->Inst))), Tprocs, &OCLATRN),((*(&(M->Inst))), Tprocs, &OCLATRN,(NCLATRN).nonlocals));
PCLATRN_ic = OCLATRN;
 /* line 1149: */
QCLATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(QCLATRN,((*(&(M->Makenames))), Tprocs, &RCLATRN),((*(&(M->Makenames))), Tprocs, &RCLATRN,(QCLATRN).nonlocals));
SCLATRN_nc = RCLATRN;
 /* line 1150: */
TCLATRN = MCLATRN_fc.C;
if ( ! TCLATRN )
{TCLATRN = PCLATRN_ic.C;
}
 /* line 1151: */
if ( ! TCLATRN )
{TCLATRN = SCLATRN_nc.C;
}
if ( TCLATRN )
{ 
VCLATRN.Sizes = MCLATRN_fc.F;
VCLATRN.Inst = PCLATRN_ic.I;
VCLATRN.Makenames = SCLATRN_nc.N;
WCLATRN = A_HEAP(A68_243 ) ;
(*WCLATRN) = VCLATRN ;
UCLATRN.M = WCLATRN;
 /* line 1152: */
UCLATRN.C = A68_TRUE;
XCLATRN = UCLATRN;
} 
else
{ 
YCLATRN.M = M;
 /* line 1153: */
 /* line 1154: */
YCLATRN.C = A68_FALSE;
XCLATRN = YCLATRN;
} 
} 
A_PROC_EXIT(make);
*ReturnedValue = (XCLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BDLATRN_join(A68_244 * J, A68_416 * Tprocs, A68_396  *ReturnedValue)
{ 
A68_369  CDLATRN;  /* CALL */
A68_368  DDLATRN;  /* avoid structure result */
A68_368  EDLATRN_ufc;
A68_369  FDLATRN;  /* CALL */
A68_368  GDLATRN;  /* avoid structure result */
A68_368  HDLATRN_utc;
A68_BOOL  IDLATRN;  /* optbool result */
A68_396  JDLATRN;  /* collateral clause result */
A68_244  KDLATRN;  /* collateral clause result */
A68_244 * LDLATRN;  /* YIELD */
A68_396  MDLATRN;  /* clause result */
A68_396  NDLATRN;  /* collateral clause result */
A_PROC_ENTRY(join);
 /* line 1158: */
 /* line 1159: */
{ 
CDLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(CDLATRN,((*(&(J->From))), Tprocs, &DDLATRN),((*(&(J->From))), Tprocs, &DDLATRN,(CDLATRN).nonlocals));
EDLATRN_ufc = DDLATRN;
 /* line 1160: */
FDLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(FDLATRN,((*(&(J->To))), Tprocs, &GDLATRN),((*(&(J->To))), Tprocs, &GDLATRN,(FDLATRN).nonlocals));
HDLATRN_utc = GDLATRN;
 /* line 1161: */
 /* line 1162: */
IDLATRN = EDLATRN_ufc.C;
if ( ! IDLATRN )
{IDLATRN = HDLATRN_utc.C;
}
if ( IDLATRN )
{ 
KDLATRN.From = EDLATRN_ufc.U;
KDLATRN.To = HDLATRN_utc.U;
LDLATRN = A_HEAP(A68_244 ) ;
(*LDLATRN) = KDLATRN ;
JDLATRN.J = LDLATRN;
 /* line 1163: */
JDLATRN.C = A68_TRUE;
MDLATRN = JDLATRN;
} 
else
{ 
NDLATRN.J = J;
 /* line 1164: */
 /* line 1165: */
NDLATRN.C = A68_FALSE;
MDLATRN = NDLATRN;
} 
} 
A_PROC_EXIT(join);
*ReturnedValue = (MDLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QDLATRN_joins(A68_247 * Js, A68_416 * Tprocs, A68_398  *ReturnedValue)
{ 
A68_398  RDLATRN;  /* collateral clause result */
A68_398  SDLATRN;  /* clause result */
A68_397  TDLATRN;  /* CALL */
A68_396  UDLATRN;  /* avoid structure result */
A68_396  VDLATRN_j;
A68_399  WDLATRN;  /* CALL */
A68_398  XDLATRN;  /* avoid structure result */
A68_398  YDLATRN_rest;
A68_BOOL  ZDLATRN;  /* optbool result */
A68_398  AELATRN;  /* collateral clause result */
A68_247  BELATRN;  /* collateral clause result */
A68_247 * CELATRN;  /* YIELD */
A68_398  DELATRN;  /* collateral clause result */
A_PROC_ENTRY(joins);
 /* line 1169: */
 /* line 1170: */
if ( (Js==RAAATRN_niljoins) )
{ 
RDLATRN.J = Js;
 /* line 1171: */
RDLATRN.C = A68_FALSE;
SDLATRN = RDLATRN;
} 
else
{ 
TDLATRN = (*(&(Tprocs->Join))) ;
A_CALLPROC(TDLATRN,((&(Js->Join)), Tprocs, &UDLATRN),((&(Js->Join)), Tprocs, &UDLATRN,(TDLATRN).nonlocals));
VDLATRN_j = UDLATRN;
 /* line 1172: */
WDLATRN = (*(&(Tprocs->Joins))) ;
A_CALLPROC(WDLATRN,((*(&(Js->Rest))), Tprocs, &XDLATRN),((*(&(Js->Rest))), Tprocs, &XDLATRN,(WDLATRN).nonlocals));
YDLATRN_rest = XDLATRN;
 /* line 1173: */
 /* line 1174: */
ZDLATRN = VDLATRN_j.C;
if ( ! ZDLATRN )
{ZDLATRN = YDLATRN_rest.C;
}
if ( ZDLATRN )
{ 
BELATRN.Join = (*VDLATRN_j.J);
BELATRN.Rest = YDLATRN_rest.J;
CELATRN = A_HEAP(A68_247 ) ;
(*CELATRN) = BELATRN ;
AELATRN.J = CELATRN;
 /* line 1175: */
AELATRN.C = A68_TRUE;
SDLATRN = AELATRN;
} 
else
{ 
DELATRN.J = Js;
 /* line 1176: */
 /* line 1177: */
DELATRN.C = A68_FALSE;
SDLATRN = DELATRN;
} 
} 
A_PROC_EXIT(joins);
*ReturnedValue = (SDLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GELATRN_step(A68_238  Step, A68_416 * Tprocs, A68_400  *ReturnedValue)
{ 
A68_238  HELATRN;  /* united object - for case conformity */
A68_269  IELATRN_dec;
A68_377  JELATRN;  /* CALL */
A68_376  KELATRN;  /* avoid structure result */
A68_376  LELATRN_d;
A68_400  MELATRN;  /* collateral clause result */
A68_238  NELATRN;  /* OPERATORS - unite union */
A68_269  OELATRN;  /* YIELD */
A68_400  PELATRN;  /* clause result */
A68_240 * QELATRN_pt;
A68_381  RELATRN;  /* CALL */
A68_380  SELATRN;  /* avoid structure result */
A68_380  TELATRN_p;
A68_400  UELATRN;  /* collateral clause result */
A68_238  VELATRN;  /* OPERATORS - mode -> union mode */
A68_240 * WELATRN;  /* YIELD */
A68_241 * XELATRN_ft;
A68_383  YELATRN;  /* CALL */
A68_382  ZELATRN;  /* avoid structure result */
A68_382  AFLATRN_f;
A68_400  BFLATRN;  /* collateral clause result */
A68_238  CFLATRN;  /* OPERATORS - mode -> union mode */
A68_241 * DFLATRN;  /* YIELD */
A68_242 * EFLATRN_lt;
A68_387  FFLATRN;  /* CALL */
A68_386  GFLATRN;  /* avoid structure result */
A68_386  HFLATRN_l;
A68_400  IFLATRN;  /* collateral clause result */
A68_238  JFLATRN;  /* OPERATORS - mode -> union mode */
A68_242 * KFLATRN;  /* YIELD */
A68_243 * LFLATRN_mk;
A68_395  MFLATRN;  /* CALL */
A68_394  NFLATRN;  /* avoid structure result */
A68_394  OFLATRN_m;
A68_400  PFLATRN;  /* collateral clause result */
A68_238  QFLATRN;  /* OPERATORS - mode -> union mode */
A68_243 * RFLATRN;  /* YIELD */
A68_244 * SFLATRN_join;
A68_397  TFLATRN;  /* CALL */
A68_396  UFLATRN;  /* avoid structure result */
A68_396  VFLATRN_j;
A68_400  WFLATRN;  /* collateral clause result */
A68_238  XFLATRN;  /* OPERATORS - mode -> union mode */
A68_244 * YFLATRN;  /* YIELD */
A68_245 * ZFLATRN_rj;
A68_341  AGLATRN;  /* CALL */
A68_340  BGLATRN;  /* avoid structure result */
A68_340  CGLATRN_rsc;
A68_399  DGLATRN;  /* CALL */
A68_398  EGLATRN;  /* avoid structure result */
A68_398  FGLATRN_jsc;
A68_BOOL  GGLATRN;  /* optbool result */
A68_400  HGLATRN;  /* collateral clause result */
A68_245  IGLATRN;  /* collateral clause result */
A68_245 * JGLATRN;  /* YIELD */
A68_238  KGLATRN;  /* OPERATORS - mode -> union mode */
A68_400  LGLATRN;  /* collateral clause result */
A_PROC_ENTRY(step);
 /* line 1181: */
 /* line 1182: */
HELATRN = Step ;
switch ( HELATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(IELATRN_dec,HELATRN);
 /* line 1183: */
{ 
JELATRN = (*(&(Tprocs->Declaration))) ;
A_CALLPROC(JELATRN,(IELATRN_dec, Tprocs, &KELATRN),(IELATRN_dec, Tprocs, &KELATRN,(JELATRN).nonlocals));
LELATRN_d = KELATRN;
 /* line 1184: */
OELATRN = LELATRN_d.D ;
MELATRN.S = A_UUNITE(NELATRN,0,OELATRN);
 /* line 1185: */
 /* line 1186: */
MELATRN.C = LELATRN_d.C;
PELATRN = MELATRN;
} 
break;
case 6: /* REF STRUCT(MODE170,REF MODE254)  */
QELATRN_pt = (HELATRN.data.mode6);
 /* line 1187: */
{ 
RELATRN = (*(&(Tprocs->Print))) ;
A_CALLPROC(RELATRN,(QELATRN_pt, Tprocs, &SELATRN),(QELATRN_pt, Tprocs, &SELATRN,(RELATRN).nonlocals));
TELATRN_p = SELATRN;
 /* line 1188: */
WELATRN = TELATRN_p.P ;
UELATRN.S = A_UNITE(VELATRN,mode6,6,WELATRN);
 /* line 1189: */
 /* line 1190: */
UELATRN.C = TELATRN_p.C;
PELATRN = UELATRN;
} 
break;
case 7: /* REF STRUCT(MODE170,REF MODE254)  */
XELATRN_ft = (HELATRN.data.mode7);
 /* line 1191: */
{ 
YELATRN = (*(&(Tprocs->Fault))) ;
A_CALLPROC(YELATRN,(XELATRN_ft, Tprocs, &ZELATRN),(XELATRN_ft, Tprocs, &ZELATRN,(YELATRN).nonlocals));
AFLATRN_f = ZELATRN;
 /* line 1192: */
DFLATRN = AFLATRN_f.F ;
BFLATRN.S = A_UNITE(CFLATRN,mode7,7,DFLATRN);
 /* line 1193: */
 /* line 1194: */
BFLATRN.C = AFLATRN_f.C;
PELATRN = BFLATRN;
} 
break;
case 8: /* REF STRUCT(REF MODE249,MODE208)  */
EFLATRN_lt = (HELATRN.data.mode8);
 /* line 1195: */
{ 
FFLATRN = (*(&(Tprocs->Let))) ;
A_CALLPROC(FFLATRN,(EFLATRN_lt, Tprocs, &GFLATRN),(EFLATRN_lt, Tprocs, &GFLATRN,(FFLATRN).nonlocals));
HFLATRN_l = GFLATRN;
 /* line 1196: */
KFLATRN = HFLATRN_l.L ;
IFLATRN.S = A_UNITE(JFLATRN,mode8,8,KFLATRN);
 /* line 1197: */
 /* line 1198: */
IFLATRN.C = HFLATRN_l.C;
PELATRN = IFLATRN;
} 
break;
case 9: /* REF STRUCT(REF MODE182,MODE248,REF MODE249)  */
LFLATRN_mk = (HELATRN.data.mode9);
 /* line 1199: */
{ 
MFLATRN = (*(&(Tprocs->Make))) ;
A_CALLPROC(MFLATRN,(LFLATRN_mk, Tprocs, &NFLATRN),(LFLATRN_mk, Tprocs, &NFLATRN,(MFLATRN).nonlocals));
OFLATRN_m = NFLATRN;
 /* line 1200: */
RFLATRN = OFLATRN_m.M ;
PFLATRN.S = A_UNITE(QFLATRN,mode9,9,RFLATRN);
 /* line 1201: */
 /* line 1202: */
PFLATRN.C = OFLATRN_m.C;
PELATRN = PFLATRN;
} 
break;
case 10: /* REF STRUCT(MODE208,MODE208)  */
SFLATRN_join = (HELATRN.data.mode10);
 /* line 1203: */
{ 
TFLATRN = (*(&(Tprocs->Join))) ;
A_CALLPROC(TFLATRN,(SFLATRN_join, Tprocs, &UFLATRN),(SFLATRN_join, Tprocs, &UFLATRN,(TFLATRN).nonlocals));
VFLATRN_j = UFLATRN;
 /* line 1204: */
YFLATRN = VFLATRN_j.J ;
WFLATRN.S = A_UNITE(XFLATRN,mode10,10,YFLATRN);
 /* line 1205: */
 /* line 1206: */
WFLATRN.C = VFLATRN_j.C;
PELATRN = WFLATRN;
} 
break;
case 11: /* REF STRUCT(REF MODE182,REF MODE247)  */
ZFLATRN_rj = (HELATRN.data.mode11);
 /* line 1207: */
{ 
AGLATRN = (*(&(Tprocs->Formulas))) ;
A_CALLPROC(AGLATRN,((*(&(ZFLATRN_rj->Repls))), Tprocs, &BGLATRN),((*(&(ZFLATRN_rj->Repls))), Tprocs, &BGLATRN,(AGLATRN).nonlocals));
CGLATRN_rsc = BGLATRN;
 /* line 1208: */
DGLATRN = (*(&(Tprocs->Joins))) ;
A_CALLPROC(DGLATRN,((*(&(ZFLATRN_rj->Joins))), Tprocs, &EGLATRN),((*(&(ZFLATRN_rj->Joins))), Tprocs, &EGLATRN,(DGLATRN).nonlocals));
FGLATRN_jsc = EGLATRN;
 /* line 1209: */
 /* line 1210: */
GGLATRN = CGLATRN_rsc.C;
if ( ! GGLATRN )
{GGLATRN = FGLATRN_jsc.C;
}
if ( GGLATRN )
{ 
IGLATRN.Repls = CGLATRN_rsc.F;
IGLATRN.Joins = FGLATRN_jsc.J;
JGLATRN = A_HEAP(A68_245 ) ;
(*JGLATRN) = IGLATRN ;
HGLATRN.S = A_UNITE(KGLATRN,mode11,11,JGLATRN);
 /* line 1211: */
HGLATRN.C = A68_TRUE;
PELATRN = HGLATRN;
} 
else
{ 
LGLATRN.S = Step;
 /* line 1212: */
 /* line 1213: */
 /* line 1214: */
LGLATRN.C = A68_FALSE;
PELATRN = LGLATRN;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(step);
*ReturnedValue = (PELATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OGLATRN_series(A68_237 * Ser, A68_416 * Tprocs, A68_402  *ReturnedValue)
{ 
A68_402  PGLATRN;  /* collateral clause result */
A68_402  QGLATRN;  /* clause result */
A68_401  RGLATRN;  /* CALL */
A68_400  SGLATRN;  /* avoid structure result */
A68_400  TGLATRN_sc;
A68_403  UGLATRN;  /* CALL */
A68_402  VGLATRN;  /* avoid structure result */
A68_402  WGLATRN_rest;
A68_BOOL  XGLATRN;  /* optbool result */
A68_402  YGLATRN;  /* collateral clause result */
A68_237  ZGLATRN;  /* collateral clause result */
A68_237 * AHLATRN;  /* YIELD */
A68_402  BHLATRN;  /* collateral clause result */
A_PROC_ENTRY(series);
 /* line 1218: */
 /* line 1219: */
{ 
 /* line 1220: */
if ( (Ser==SAAATRN_nilseries) )
{ 
PGLATRN.S = Ser;
 /* line 1221: */
PGLATRN.C = A68_FALSE;
QGLATRN = PGLATRN;
} 
else
{ 
RGLATRN = (*(&(Tprocs->Step))) ;
A_CALLPROC(RGLATRN,((*(&(Ser->Step))), Tprocs, &SGLATRN),((*(&(Ser->Step))), Tprocs, &SGLATRN,(RGLATRN).nonlocals));
TGLATRN_sc = SGLATRN;
 /* line 1222: */
UGLATRN = (*(&(Tprocs->Series))) ;
A_CALLPROC(UGLATRN,((*(&(Ser->Rest))), Tprocs, &VGLATRN),((*(&(Ser->Rest))), Tprocs, &VGLATRN,(UGLATRN).nonlocals));
WGLATRN_rest = VGLATRN;
 /* line 1223: */
 /* line 1224: */
XGLATRN = WGLATRN_rest.C;
if ( ! XGLATRN )
{XGLATRN = TGLATRN_sc.C;
}
if ( XGLATRN )
{ 
ZGLATRN.Step = TGLATRN_sc.S;
ZGLATRN.Rest = WGLATRN_rest.S;
AHLATRN = A_HEAP(A68_237 ) ;
(*AHLATRN) = ZGLATRN ;
YGLATRN.S = AHLATRN;
 /* line 1225: */
YGLATRN.C = A68_TRUE;
QGLATRN = YGLATRN;
} 
else
{ 
BHLATRN.S = Ser;
 /* line 1226: */
 /* line 1227: */
 /* line 1228: */
BHLATRN.C = A68_FALSE;
QGLATRN = BHLATRN;
} 
} 
} 
A_PROC_EXIT(series);
*ReturnedValue = (QGLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EHLATRN_fnbody(A68_280  Body, A68_416 * Tprocs, A68_404  *ReturnedValue)
{ 
A68_280  FHLATRN;  /* united object - for case conformity */
A68_253 * GHLATRN_ut;
A68_369  HHLATRN;  /* CALL */
A68_368  IHLATRN;  /* avoid structure result */
A68_368  JHLATRN_uc;
A68_404  KHLATRN;  /* collateral clause result */
A68_280  LHLATRN;  /* OPERATORS - mode -> union mode */
A68_253 * MHLATRN;  /* YIELD */
A68_404  NHLATRN;  /* clause result */
A68_404  OHLATRN;  /* collateral clause result */
A68_270 * PHLATRN_al;
A68_373  QHLATRN;  /* CALL */
A68_372  RHLATRN;  /* avoid structure result */
A68_372  SHLATRN_params;
A68_404  THLATRN;  /* collateral clause result */
A68_270  UHLATRN;  /* collateral clause result */
A68_270 * VHLATRN;  /* YIELD */
A68_280  WHLATRN;  /* OPERATORS - mode -> union mode */
A68_404  XHLATRN;  /* collateral clause result */
A68_271 * YHLATRN_ar;
A68_339  ZHLATRN;  /* CALL */
A68_338  AILATRN;  /* avoid structure result */
A68_338  BILATRN_fc;
A68_404  CILATRN;  /* collateral clause result */
A68_280  DILATRN;  /* OPERATORS - mode -> union mode */
A68_271 * EILATRN;  /* YIELD */
A68_404  FILATRN;  /* collateral clause result */
A68_274 * GILATRN_ad;
A68_369  HILATRN;  /* CALL */
A68_368  IILATRN;  /* avoid structure result */
A68_368  JILATRN_init;
A68_339  KILATRN;  /* CALL */
A68_338  LILATRN;  /* avoid structure result */
A68_338  MILATRN_ac;
A68_369  NILATRN;  /* CALL */
A68_368  OILATRN;  /* avoid structure result */
A68_368  PILATRN_ambig;
A68_339  QILATRN;  /* CALL */
A68_338  RILATRN;  /* avoid structure result */
A68_338  SILATRN_dc;
A68_BOOL  TILATRN;  /* optbool result */
A68_404  UILATRN;  /* collateral clause result */
A68_274  VILATRN;  /* collateral clause result */
A68_274 * WILATRN;  /* YIELD */
A68_280  XILATRN;  /* OPERATORS - mode -> union mode */
A68_404  YILATRN;  /* collateral clause result */
A68_275 * ZILATRN_id;
A68_369  AJLATRN;  /* CALL */
A68_368  BJLATRN;  /* avoid structure result */
A68_368  CJLATRN_init;
A68_339  DJLATRN;  /* CALL */
A68_338  EJLATRN;  /* avoid structure result */
A68_338  FJLATRN_fc;
A68_BOOL  GJLATRN;  /* optbool result */
A68_404  HJLATRN;  /* collateral clause result */
A68_275  IJLATRN;  /* collateral clause result */
A68_275 * JJLATRN;  /* YIELD */
A68_280  KJLATRN;  /* OPERATORS - mode -> union mode */
A68_404  LJLATRN;  /* collateral clause result */
A68_276 * MJLATRN_rm;
A68_369  NJLATRN;  /* CALL */
A68_368  OJLATRN;  /* avoid structure result */
A68_368  PJLATRN_init;
A68_404  QJLATRN;  /* collateral clause result */
A68_280  RJLATRN;  /* OPERATORS - mode -> union mode */
A68_276 * SJLATRN;  /* YIELD */
A68_404  TJLATRN;  /* collateral clause result */
A68_277 * UJLATRN_sp;
A68_339  VJLATRN;  /* CALL */
A68_338  WJLATRN;  /* avoid structure result */
A68_338  XJLATRN_ic;
A68_369  YJLATRN;  /* CALL */
A68_368  ZJLATRN;  /* avoid structure result */
A68_368  AKLATRN_init;
A68_339  BKLATRN;  /* CALL */
A68_338  CKLATRN;  /* avoid structure result */
A68_338  DKLATRN_sc;
A68_BOOL  EKLATRN;  /* optbool result */
A68_404  FKLATRN;  /* collateral clause result */
A68_277  GKLATRN;  /* collateral clause result */
A68_277 * HKLATRN;  /* YIELD */
A68_280  IKLATRN;  /* OPERATORS - mode -> union mode */
A68_404  JKLATRN;  /* collateral clause result */
A68_278 * KKLATRN_ts;
A68_375  LKLATRN;  /* CALL */
A68_374  MKLATRN;  /* avoid structure result */
A68_374  NKLATRN_inst;
A68_339  OKLATRN;  /* CALL */
A68_338  PKLATRN;  /* avoid structure result */
A68_338  QKLATRN_sc;
A68_369  RKLATRN;  /* CALL */
A68_368  SKLATRN;  /* avoid structure result */
A68_368  TKLATRN_init;
A68_339  UKLATRN;  /* CALL */
A68_338  VKLATRN;  /* avoid structure result */
A68_338  WKLATRN_skc;
A68_BOOL  XKLATRN;  /* optbool result */
A68_404  YKLATRN;  /* collateral clause result */
A68_278  ZKLATRN;  /* collateral clause result */
A68_278 * ALLATRN;  /* YIELD */
A68_280  BLLATRN;  /* OPERATORS - mode -> union mode */
A68_404  CLLATRN;  /* collateral clause result */
A68_279 * DLLATRN_bc;
A68_405  ELLATRN;  /* CALL */
A68_404  FLLATRN;  /* avoid structure result */
A68_404  GLLATRN_fc;
A68_404  HLLATRN;  /* collateral clause result */
A68_279  ILLATRN;  /* collateral clause result */
A68_279 * JLLATRN;  /* YIELD */
A68_280  KLLATRN;  /* OPERATORS - mode -> union mode */
A68_404  LLLATRN;  /* collateral clause result */
A68_404  MLLATRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody);
 /* line 1234: */
 /* line 1235: */
FHLATRN = Body ;
switch ( FHLATRN.mode )
{ 
case 1: /* REF STRUCT(MODE208)  */
GHLATRN_ut = (FHLATRN.data.mode1);
 /* line 1236: */
{ 
HHLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HHLATRN,((*(&(GHLATRN_ut->Tag))), Tprocs, &IHLATRN),((*(&(GHLATRN_ut->Tag))), Tprocs, &IHLATRN,(HHLATRN).nonlocals));
JHLATRN_uc = IHLATRN;
 /* line 1237: */
 /* line 1238: */
if ( JHLATRN_uc.C )
{ 
MHLATRN = WGAATRN_makeunittag(JHLATRN_uc.U) ;
KHLATRN.F = A_UNITE(LHLATRN,mode1,1,MHLATRN);
 /* line 1239: */
KHLATRN.C = A68_TRUE;
NHLATRN = KHLATRN;
} 
else
{ 
OHLATRN.F = Body;
 /* line 1240: */
 /* line 1241: */
 /* line 1242: */
OHLATRN.C = A68_FALSE;
NHLATRN = OHLATRN;
} 
} 
break;
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE250)  */
PHLATRN_al = (FHLATRN.data.mode2);
 /* line 1243: */
 /* line 1244: */
{ 
QHLATRN = (*(&(Tprocs->Macparams))) ;
A_CALLPROC(QHLATRN,((*(&(PHLATRN_al->Macparams))), Tprocs, &RHLATRN),((*(&(PHLATRN_al->Macparams))), Tprocs, &RHLATRN,(QHLATRN).nonlocals));
SHLATRN_params = RHLATRN;
 /* line 1245: */
 /* line 1246: */
if ( SHLATRN_params.C )
{ 
UHLATRN.Biop = (*(&(PHLATRN_al->Biop)));
UHLATRN.Name = (*(&(PHLATRN_al->Name)));
UHLATRN.Macparams = SHLATRN_params.M;
VHLATRN = A_HEAP(A68_270 ) ;
(*VHLATRN) = UHLATRN ;
THLATRN.F = A_UNITE(WHLATRN,mode2,2,VHLATRN);
 /* line 1247: */
THLATRN.C = A68_TRUE;
NHLATRN = THLATRN;
} 
else
{ 
XHLATRN.F = Body;
 /* line 1248: */
 /* line 1249: */
 /* line 1250: */
XHLATRN.C = A68_FALSE;
NHLATRN = XHLATRN;
} 
} 
break;
case 3: /* REF STRUCT(MODE170)  */
YHLATRN_ar = (FHLATRN.data.mode3);
 /* line 1251: */
{ 
ZHLATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(ZHLATRN,((*(&(YHLATRN_ar->Output))), Tprocs, &AILATRN),((*(&(YHLATRN_ar->Output))), Tprocs, &AILATRN,(ZHLATRN).nonlocals));
BILATRN_fc = AILATRN;
 /* line 1252: */
 /* line 1253: */
if ( BILATRN_fc.C )
{ 
EILATRN = QHAATRN_makearith(BILATRN_fc.F) ;
CILATRN.F = A_UNITE(DILATRN,mode3,3,EILATRN);
 /* line 1254: */
CILATRN.C = A68_TRUE;
NHLATRN = CILATRN;
} 
else
{ 
FILATRN.F = Body;
 /* line 1255: */
 /* line 1256: */
 /* line 1257: */
FILATRN.C = A68_FALSE;
NHLATRN = FILATRN;
} 
} 
break;
case 6: /* REF STRUCT(INT,MODE208,MODE170,MODE208,MODE170)  */
GILATRN_ad = (FHLATRN.data.mode6);
 /* line 1258: */
{ 
HILATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HILATRN,((*(&(GILATRN_ad->Init))), Tprocs, &IILATRN),((*(&(GILATRN_ad->Init))), Tprocs, &IILATRN,(HILATRN).nonlocals));
JILATRN_init = IILATRN;
 /* line 1259: */
KILATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KILATRN,((*(&(GILATRN_ad->Ambigtime))), Tprocs, &LILATRN),((*(&(GILATRN_ad->Ambigtime))), Tprocs, &LILATRN,(KILATRN).nonlocals));
MILATRN_ac = LILATRN;
 /* line 1260: */
NILATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NILATRN,((*(&(GILATRN_ad->Ambig))), Tprocs, &OILATRN),((*(&(GILATRN_ad->Ambig))), Tprocs, &OILATRN,(NILATRN).nonlocals));
PILATRN_ambig = OILATRN;
 /* line 1261: */
QILATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(QILATRN,((*(&(GILATRN_ad->Delaytime))), Tprocs, &RILATRN),((*(&(GILATRN_ad->Delaytime))), Tprocs, &RILATRN,(QILATRN).nonlocals));
SILATRN_dc = RILATRN;
 /* line 1262: */
TILATRN = MILATRN_ac.C;
if ( ! TILATRN )
{TILATRN = JILATRN_init.C;
}
if ( ! TILATRN )
{TILATRN = SILATRN_dc.C;
}
 /* line 1263: */
if ( ! TILATRN )
{TILATRN = PILATRN_ambig.C;
}
if ( TILATRN )
{ 
VILATRN.Sort = (*(&(GILATRN_ad->Sort)));
 /* line 1264: */
VILATRN.Init = JILATRN_init.U;
VILATRN.Ambigtime = MILATRN_ac.F;
VILATRN.Ambig = PILATRN_ambig.U;
VILATRN.Delaytime = SILATRN_dc.F;
WILATRN = A_HEAP(A68_274 ) ;
(*WILATRN) = VILATRN ;
UILATRN.F = A_UNITE(XILATRN,mode6,6,WILATRN);
 /* line 1265: */
UILATRN.C = A68_TRUE;
NHLATRN = UILATRN;
} 
else
{ 
YILATRN.F = Body;
 /* line 1266: */
 /* line 1267: */
 /* line 1268: */
YILATRN.C = A68_FALSE;
NHLATRN = YILATRN;
} 
} 
break;
case 7: /* REF STRUCT(MODE208,MODE170)  */
ZILATRN_id = (FHLATRN.data.mode7);
 /* line 1269: */
{ 
AJLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(AJLATRN,((*(&(ZILATRN_id->Init))), Tprocs, &BJLATRN),((*(&(ZILATRN_id->Init))), Tprocs, &BJLATRN,(AJLATRN).nonlocals));
CJLATRN_init = BJLATRN;
 /* line 1270: */
DJLATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(DJLATRN,((*(&(ZILATRN_id->Delaytime))), Tprocs, &EJLATRN),((*(&(ZILATRN_id->Delaytime))), Tprocs, &EJLATRN,(DJLATRN).nonlocals));
FJLATRN_fc = EJLATRN;
 /* line 1271: */
 /* line 1272: */
GJLATRN = FJLATRN_fc.C;
if ( ! GJLATRN )
{GJLATRN = CJLATRN_init.C;
}
if ( GJLATRN )
{ 
IJLATRN.Init = CJLATRN_init.U;
IJLATRN.Delaytime = FJLATRN_fc.F;
JJLATRN = A_HEAP(A68_275 ) ;
(*JJLATRN) = IJLATRN ;
HJLATRN.F = A_UNITE(KJLATRN,mode7,7,JJLATRN);
 /* line 1273: */
HJLATRN.C = A68_TRUE;
NHLATRN = HJLATRN;
} 
else
{ 
LJLATRN.F = Body;
 /* line 1274: */
 /* line 1275: */
 /* line 1276: */
LJLATRN.C = A68_FALSE;
NHLATRN = LJLATRN;
} 
} 
break;
case 8: /* REF STRUCT(MODE208)  */
MJLATRN_rm = (FHLATRN.data.mode8);
 /* line 1277: */
{ 
NJLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NJLATRN,((*(&(MJLATRN_rm->Init))), Tprocs, &OJLATRN),((*(&(MJLATRN_rm->Init))), Tprocs, &OJLATRN,(NJLATRN).nonlocals));
PJLATRN_init = OJLATRN;
 /* line 1278: */
 /* line 1279: */
if ( PJLATRN_init.C )
{ 
SJLATRN = VHAATRN_makeram(PJLATRN_init.U) ;
QJLATRN.F = A_UNITE(RJLATRN,mode8,8,SJLATRN);
 /* line 1280: */
QJLATRN.C = A68_TRUE;
NHLATRN = QJLATRN;
} 
else
{ 
TJLATRN.F = Body;
 /* line 1281: */
 /* line 1282: */
 /* line 1283: */
TJLATRN.C = A68_FALSE;
NHLATRN = TJLATRN;
} 
} 
break;
case 9: /* REF STRUCT(INT,MODE170,MODE208,MODE170)  */
UJLATRN_sp = (FHLATRN.data.mode9);
 /* line 1284: */
{ 
VJLATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(VJLATRN,((*(&(UJLATRN_sp->Interval))), Tprocs, &WJLATRN),((*(&(UJLATRN_sp->Interval))), Tprocs, &WJLATRN,(VJLATRN).nonlocals));
XJLATRN_ic = WJLATRN;
 /* line 1285: */
YJLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(YJLATRN,((*(&(UJLATRN_sp->Init))), Tprocs, &ZJLATRN),((*(&(UJLATRN_sp->Init))), Tprocs, &ZJLATRN,(YJLATRN).nonlocals));
AKLATRN_init = ZJLATRN;
 /* line 1286: */
BKLATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(BKLATRN,((*(&(UJLATRN_sp->Skew))), Tprocs, &CKLATRN),((*(&(UJLATRN_sp->Skew))), Tprocs, &CKLATRN,(BKLATRN).nonlocals));
DKLATRN_sc = CKLATRN;
 /* line 1287: */
EKLATRN = AKLATRN_init.C;
if ( ! EKLATRN )
{EKLATRN = XJLATRN_ic.C;
}
 /* line 1288: */
if ( ! EKLATRN )
{EKLATRN = DKLATRN_sc.C;
}
if ( EKLATRN )
{ 
GKLATRN.Sort = (*(&(UJLATRN_sp->Sort)));
GKLATRN.Interval = XJLATRN_ic.F;
GKLATRN.Init = AKLATRN_init.U;
GKLATRN.Skew = DKLATRN_sc.F;
 /* line 1289: */
HKLATRN = A_HEAP(A68_277 ) ;
(*HKLATRN) = GKLATRN ;
FKLATRN.F = A_UNITE(IKLATRN,mode9,9,HKLATRN);
 /* line 1290: */
FKLATRN.C = A68_TRUE;
NHLATRN = FKLATRN;
} 
else
{ 
JKLATRN.F = Body;
 /* line 1291: */
 /* line 1292: */
 /* line 1293: */
JKLATRN.C = A68_FALSE;
NHLATRN = JKLATRN;
} 
} 
break;
case 10: /* REF STRUCT(BOOL,INT,MODE248,MODE170,MODE208,MODE170)  */
KKLATRN_ts = (FHLATRN.data.mode10);
 /* line 1294: */
{ 
LKLATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(LKLATRN,((*(&(KKLATRN_ts->Inst))), Tprocs, &MKLATRN),((*(&(KKLATRN_ts->Inst))), Tprocs, &MKLATRN,(LKLATRN).nonlocals));
NKLATRN_inst = MKLATRN;
 /* line 1295: */
OKLATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(OKLATRN,((*(&(KKLATRN_ts->Scale))), Tprocs, &PKLATRN),((*(&(KKLATRN_ts->Scale))), Tprocs, &PKLATRN,(OKLATRN).nonlocals));
QKLATRN_sc = PKLATRN;
 /* line 1296: */
RKLATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(RKLATRN,((*(&(KKLATRN_ts->Init))), Tprocs, &SKLATRN),((*(&(KKLATRN_ts->Init))), Tprocs, &SKLATRN,(RKLATRN).nonlocals));
TKLATRN_init = SKLATRN;
 /* line 1297: */
UKLATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(UKLATRN,((*(&(KKLATRN_ts->Skew))), Tprocs, &VKLATRN),((*(&(KKLATRN_ts->Skew))), Tprocs, &VKLATRN,(UKLATRN).nonlocals));
WKLATRN_skc = VKLATRN;
 /* line 1298: */
XKLATRN = NKLATRN_inst.C;
if ( ! XKLATRN )
{XKLATRN = QKLATRN_sc.C;
}
if ( ! XKLATRN )
{XKLATRN = WKLATRN_skc.C;
}
 /* line 1299: */
if ( ! XKLATRN )
{XKLATRN = TKLATRN_init.C;
}
if ( XKLATRN )
{ 
ZKLATRN.Faster = (*(&(KKLATRN_ts->Faster)));
ZKLATRN.Sort = (*(&(KKLATRN_ts->Sort)));
 /* line 1300: */
ZKLATRN.Inst = NKLATRN_inst.I;
ZKLATRN.Scale = QKLATRN_sc.F;
ZKLATRN.Init = TKLATRN_init.U;
ZKLATRN.Skew = WKLATRN_skc.F;
ALLATRN = A_HEAP(A68_278 ) ;
(*ALLATRN) = ZKLATRN ;
YKLATRN.F = A_UNITE(BLLATRN,mode10,10,ALLATRN);
 /* line 1301: */
YKLATRN.C = A68_TRUE;
NHLATRN = YKLATRN;
} 
else
{ 
CLLATRN.F = Body;
 /* line 1302: */
 /* line 1303: */
 /* line 1304: */
CLLATRN.C = A68_FALSE;
NHLATRN = CLLATRN;
} 
} 
break;
case 11: /* REF STRUCT(REF MODE160,BOOL,MODE280)  */
DLLATRN_bc = (FHLATRN.data.mode11);
 /* line 1305: */
{ 
ELLATRN = (*(&(Tprocs->Fnbody))) ;
A_CALLPROC(ELLATRN,((*(&(DLLATRN_bc->Fnbody))), Tprocs, &FLLATRN),((*(&(DLLATRN_bc->Fnbody))), Tprocs, &FLLATRN,(ELLATRN).nonlocals));
GLLATRN_fc = FLLATRN;
 /* line 1306: */
 /* line 1307: */
if ( GLLATRN_fc.C )
{ 
ILLATRN.Joincheck = (*(&(DLLATRN_bc->Joincheck)));
ILLATRN.Check = (*(&(DLLATRN_bc->Check)));
ILLATRN.Fnbody = GLLATRN_fc.F;
JLLATRN = A_HEAP(A68_279 ) ;
(*JLLATRN) = ILLATRN ;
HLLATRN.F = A_UNITE(KLLATRN,mode11,11,JLLATRN);
 /* line 1308: */
HLLATRN.C = A68_TRUE;
NHLATRN = HLLATRN;
} 
else
{ 
LLLATRN.F = Body;
 /* line 1309: */
 /* line 1310: */
 /* line 1311: */
LLLATRN.C = A68_FALSE;
NHLATRN = LLLATRN;
} 
} 
break;
default: 
MLLATRN.F = Body;
 /* line 1312: */
MLLATRN.C = A68_FALSE;
NHLATRN = MLLATRN;
break;
} 
A_PROC_EXIT(fnbody);
*ReturnedValue = (NHLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PLLATRN_macspec(A68_282  Ms, A68_416 * Tprocs, A68_406  *ReturnedValue)
{ 
A68_377  QLLATRN;  /* CALL */
A68_376  RLLATRN;  /* avoid structure result */
A68_376  SLLATRN_dc;
A68_406  TLLATRN;  /* collateral clause result */
A68_406  ULLATRN;  /* clause result */
A68_406  VLLATRN;  /* collateral clause result */
A_PROC_ENTRY(macspec);
 /* line 1316: */
 /* line 1317: */
{ 
QLLATRN = (*(&(Tprocs->Declaration))) ;
A_CALLPROC(QLLATRN,(Ms.Spec, Tprocs, &RLLATRN),(Ms.Spec, Tprocs, &RLLATRN,(QLLATRN).nonlocals));
SLLATRN_dc = RLLATRN;
 /* line 1318: */
 /* line 1319: */
if ( SLLATRN_dc.C )
{ 
TLLATRN.M.Sort = Ms.Sort;
TLLATRN.M.Spec = SLLATRN_dc.D;
 /* line 1320: */
TLLATRN.C = A68_TRUE;
ULLATRN = TLLATRN;
} 
else
{ 
VLLATRN.M = Ms;
 /* line 1321: */
 /* line 1322: */
VLLATRN.C = A68_FALSE;
ULLATRN = VLLATRN;
} 
} 
A_PROC_EXIT(macspec);
*ReturnedValue = (ULLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YLLATRN_macspecs(A68_285  Mss, A68_416 * Tprocs, A68_408  *ReturnedValue)
{ 
A68_408  ZLLATRN;  /* collateral clause result */
A68_408  AMLATRN;  /* clause result */
A68_285  BMLATRN_new;
A68_BOOL  CMLATRN_changed;
A68_INT  DMLATRN_i;
A68_INT  EMLATRN;  /* to part of loop */
A68_407  FMLATRN;  /* CALL */
A68_406  GMLATRN;  /* avoid structure result */
A68_406  HMLATRN_m;
A68_430  JMLATRN_generator;   /* proc value of non-global proc */
A68_285  OMLATRN;  /* avoid structure result */
A68_282 * PMLATRN;  /* YIELD */
A68_408  QMLATRN;  /* collateral clause result */
A_PROC_ENTRY(macspecs);
 /* line 1326: */
 /* line 1327: */
{ 
 /* line 1328: */
if ( A_VSTRUCTCOMP(Mss,FBAATRN_nilmacspecs) )
{ 
ZLLATRN.M = Mss;
 /* line 1329: */
ZLLATRN.C = A68_FALSE;
AMLATRN = ZLLATRN;
} 
else
{ 
BMLATRN_new = Mss;
 /* line 1330: */
CMLATRN_changed = A68_FALSE;
 /* line 1331: */
 /* line 1332: */
EMLATRN = BMLATRN_new.upb;
for ( DMLATRN_i = 1;
DMLATRN_i <= EMLATRN;
DMLATRN_i += 1 )
{ 
FMLATRN = (*(&(Tprocs->Macspec))) ;
A_CALLPROC(FMLATRN,((*(&A_VINDEX(BMLATRN_new,DMLATRN_i))), Tprocs, &GMLATRN),((*(&A_VINDEX(BMLATRN_new,DMLATRN_i))), Tprocs, &GMLATRN,(FMLATRN).nonlocals));
HMLATRN_m = GMLATRN;
 /* line 1333: */
 /* line 1334: */
if ( HMLATRN_m.C )
{ 
 /* line 1335: */
if ( !CMLATRN_changed )
{ 
CMLATRN_changed = A68_TRUE;
 /* line 1336: */
A_CLOSURE( JMLATRN_generator, KMLATRN_generator, LMLATRN_generator );
(( LMLATRN_generator * ) ( JMLATRN_generator.nonlocals )) -> BMLATRN_new = (&BMLATRN_new);
 /* line 1337: */
A_CALLPROC(JMLATRN_generator,(A68_FALSE, &OMLATRN),(A68_FALSE, &OMLATRN,(JMLATRN_generator).nonlocals));
A_VASSIGN2(BMLATRN_new,OMLATRN,A68_282 ) ;
BMLATRN_new = OMLATRN;
} 
 /* line 1338: */
 /* line 1339: */
 /* line 1340: */
PMLATRN = (&A_VINDEX(BMLATRN_new,DMLATRN_i)) ;
(*PMLATRN) = HMLATRN_m.M;
} 
}
 /* line 1341: */
QMLATRN.M = BMLATRN_new;
 /* line 1342: */
 /* line 1343: */
QMLATRN.C = CMLATRN_changed;
AMLATRN = QMLATRN;
} 
} 
A_PROC_EXIT(macspecs);
*ReturnedValue = (AMLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TMLATRN_fndec(A68_284 * Fdec, A68_416 * Tprocs, A68_410  *ReturnedValue)
{ 
A68_286  UMLATRN_nametypes;
A68_BOOL  VMLATRN_changed;
A68_114  XMLATRN_update_nametypes;   /* proc value of non-global proc */
A68_385  SNLATRN_names;   /* proc value of non-global proc */
A68_417  EOLATRN;  /* OPERATORS - mode -> union mode */
A68_385  FOLATRN;  /* YIELD */
A68_418  GOLATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * HOLATRN_newprocs;
A68_409  IOLATRN;  /* CALL */
A68_408  JOLATRN;  /* avoid structure result */
A68_408  KOLATRN_mc;
A68_335  LOLATRN;  /* CALL */
A68_334  MOLATRN;  /* avoid structure result */
A68_334  NOLATRN_ac;
A68_385  OOLATRN;  /* CALL */
A68_384  POLATRN;  /* avoid structure result */
A68_384  QOLATRN_ic;
A68_385  ROLATRN;  /* CALL */
A68_384  SOLATRN;  /* avoid structure result */
A68_384  TOLATRN_oc;
A68_405  UOLATRN;  /* CALL */
A68_404  VOLATRN;  /* avoid structure result */
A68_404  WOLATRN_fc;
A68_BOOL  XOLATRN;  /* optbool result */
A68_410  YOLATRN;  /* collateral clause result */
A68_284  ZOLATRN;  /* collateral clause result */
A68_284 * APLATRN;  /* YIELD */
A68_410  BPLATRN;  /* clause result */
A68_410  CPLATRN;  /* collateral clause result */
A68_410  DPLATRN;  /* collateral clause result */
A_PROC_ENTRY(fndec);
 /* line 1347: */
 /* line 1348: */
{ 
 /* line 1349: */
if ( (Fdec!=YAAATRN_nilfndec) )
{ 
UMLATRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 1350: */
VMLATRN_changed = A68_FALSE;
 /* line 1352: */
A_CLOSURE( XMLATRN_update_nametypes, YMLATRN_update_nametypes, ZMLATRN_update_nametypes );
(( ZMLATRN_update_nametypes * ) ( XMLATRN_update_nametypes.nonlocals )) -> Tprocs = Tprocs;
(( ZMLATRN_update_nametypes * ) ( XMLATRN_update_nametypes.nonlocals )) -> UMLATRN_nametypes = (&UMLATRN_nametypes);
(( ZMLATRN_update_nametypes * ) ( XMLATRN_update_nametypes.nonlocals )) -> VMLATRN_changed = (&VMLATRN_changed);
 /* line 1367: */
A_CLOSURE( SNLATRN_names, TNLATRN_names, UNLATRN_names );
(( UNLATRN_names * ) ( SNLATRN_names.nonlocals )) -> XMLATRN_update_nametypes = XMLATRN_update_nametypes;
 /* line 1379: */
FOLATRN = SNLATRN_names ;
HOLATRN_newprocs = THJATRN_make_newtprocs(Tprocs, A_HVEC(GOLATRN,A_UNITE(EOLATRN,mode27,27,FOLATRN),A68_417 ));
 /* line 1381: */
IOLATRN = (*(&(Tprocs->Macspecs))) ;
A_CALLPROC(IOLATRN,((*(&(Fdec->Macspecs))), HOLATRN_newprocs, &JOLATRN),((*(&(Fdec->Macspecs))), HOLATRN_newprocs, &JOLATRN,(IOLATRN).nonlocals));
KOLATRN_mc = JOLATRN;
 /* line 1382: */
LOLATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(LOLATRN,((*(&(Fdec->Attr))), HOLATRN_newprocs, &MOLATRN),((*(&(Fdec->Attr))), HOLATRN_newprocs, &MOLATRN,(LOLATRN).nonlocals));
NOLATRN_ac = MOLATRN;
 /* line 1383: */
 /* line 1384: */
OOLATRN = (*(&(HOLATRN_newprocs->Names))) ;
A_CALLPROC(OOLATRN,((*(&(Fdec->Inputs))), HOLATRN_newprocs, &POLATRN),((*(&(Fdec->Inputs))), HOLATRN_newprocs, &POLATRN,(OOLATRN).nonlocals));
QOLATRN_ic = POLATRN;
 /* line 1385: */
ROLATRN = (*(&(HOLATRN_newprocs->Names))) ;
A_CALLPROC(ROLATRN,((*(&(Fdec->Outputs))), HOLATRN_newprocs, &SOLATRN),((*(&(Fdec->Outputs))), HOLATRN_newprocs, &SOLATRN,(ROLATRN).nonlocals));
TOLATRN_oc = SOLATRN;
 /* line 1387: */
UOLATRN = (*(&(Tprocs->Fnbody))) ;
A_CALLPROC(UOLATRN,((*(&(Fdec->Fnbody))), HOLATRN_newprocs, &VOLATRN),((*(&(Fdec->Fnbody))), HOLATRN_newprocs, &VOLATRN,(UOLATRN).nonlocals));
WOLATRN_fc = VOLATRN;
 /* line 1389: */
XOLATRN = VMLATRN_changed;
if ( ! XOLATRN )
{XOLATRN = KOLATRN_mc.C;
}
if ( ! XOLATRN )
{XOLATRN = QOLATRN_ic.C;
}
if ( ! XOLATRN )
{XOLATRN = TOLATRN_oc.C;
}
 /* line 1390: */
if ( ! XOLATRN )
{XOLATRN = NOLATRN_ac.C;
}
 /* line 1391: */
if ( ! XOLATRN )
{XOLATRN = WOLATRN_fc.C;
}
if ( XOLATRN )
{ 
ZOLATRN.Sort = (*(&(Fdec->Sort)));
ZOLATRN.Macro = (*(&(Fdec->Macro)));
 /* line 1392: */
ZOLATRN.Fnname = (*(&(Fdec->Fnname)));
ZOLATRN.Macspecs = KOLATRN_mc.M;
ZOLATRN.Attr = NOLATRN_ac.A;
ZOLATRN.Inputs = QOLATRN_ic.N;
ZOLATRN.Outputs = TOLATRN_oc.N;
 /* line 1393: */
ZOLATRN.Nametypes = UMLATRN_nametypes;
ZOLATRN.Fnbody = WOLATRN_fc.F;
ZOLATRN.Usage = (*(&(Fdec->Usage)));
 /* line 1394: */
APLATRN = A_HEAP(A68_284 ) ;
(*APLATRN) = ZOLATRN ;
YOLATRN.F = APLATRN;
 /* line 1395: */
YOLATRN.C = A68_TRUE;
BPLATRN = YOLATRN;
} 
else
{ 
CPLATRN.F = Fdec;
 /* line 1396: */
 /* line 1397: */
CPLATRN.C = A68_FALSE;
BPLATRN = CPLATRN;
} 
} 
else
{ 
DPLATRN.F = Fdec;
 /* line 1398: */
 /* line 1399: */
DPLATRN.C = A68_FALSE;
BPLATRN = DPLATRN;
} 
} 
A_PROC_EXIT(fndec);
*ReturnedValue = (BPLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GPLATRN_outer(A68_293  Outer, A68_416 * Tprocs, A68_412  *ReturnedValue)
{ 
A68_287 * HPLATRN_env;
A68_BOOL  IPLATRN_ac;
A68_BOOL  JPLATRN_ic;
A68_BOOL  KPLATRN_tc;
A68_BOOL  LPLATRN_cc;
A68_BOOL  MPLATRN_fc;
A68_288 * NPLATRN_attrs;
A68_289 * OPLATRN_ints;
A68_290 * PPLATRN_types;
A68_291 * QPLATRN_consts;
A68_292 * RPLATRN_fns;
A68_377  UPLATRN_declaration;   /* proc value of non-global proc */
A68_417  XSLATRN;  /* OPERATORS - mode -> union mode */
A68_377  YSLATRN;  /* YIELD */
A68_418  ZSLATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * ATLATRN_newtprocs;
A68_269  BTLATRN;  /* clause result */
A68_269  CTLATRN;  /* OPERATORS - mode -> union mode */
A68_162  DTLATRN;  /* YIELD */
A68_269  ETLATRN;  /* OPERATORS - mode -> union mode */
A68_174  FTLATRN;  /* YIELD */
A68_269  GTLATRN;  /* OPERATORS - mode -> union mode */
A68_187  HTLATRN;  /* YIELD */
A68_269  ITLATRN;  /* OPERATORS - mode -> union mode */
A68_202  JTLATRN;  /* YIELD */
A68_269  KTLATRN;  /* OPERATORS - mode -> union mode */
A68_239  LTLATRN;  /* YIELD */
A68_269  MTLATRN;  /* OPERATORS - skip to mode */
A68_269  NTLATRN_od;
A68_377  OTLATRN;  /* CALL */
A68_376  PTLATRN;  /* avoid structure result */
A68_BOOL  QTLATRN;  /* optbool result */
A68_412  RTLATRN;  /* collateral clause result */
A68_412  STLATRN;  /* clause result */
A68_412  TTLATRN;  /* collateral clause result */
A_PROC_ENTRY(outer);
 /* line 1406: */
 /* line 1408: */
{ 
HPLATRN_env = (A_HEAP(A68_287 ));
(*HPLATRN_env) = (*Outer.Environ);
 /* line 1409: */
IPLATRN_ac = A68_FALSE;
JPLATRN_ic = A68_FALSE;
KPLATRN_tc = A68_FALSE;
LPLATRN_cc = A68_FALSE;
MPLATRN_fc = A68_FALSE;
 /* line 1411: */
NPLATRN_attrs = (&(HPLATRN_env->Attrs));
 /* line 1412: */
OPLATRN_ints = (&(HPLATRN_env->Ints));
 /* line 1413: */
PPLATRN_types = (&(HPLATRN_env->Types));
 /* line 1414: */
QPLATRN_consts = (&(HPLATRN_env->Consts));
 /* line 1415: */
RPLATRN_fns = (&(HPLATRN_env->Fns));
 /* line 1418: */
A_CLOSURE( UPLATRN_declaration, VPLATRN_declaration, WPLATRN_declaration );
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> NPLATRN_attrs = NPLATRN_attrs;
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> IPLATRN_ac = (&IPLATRN_ac);
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> OPLATRN_ints = OPLATRN_ints;
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> JPLATRN_ic = (&JPLATRN_ic);
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> PPLATRN_types = PPLATRN_types;
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> KPLATRN_tc = (&KPLATRN_tc);
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> QPLATRN_consts = QPLATRN_consts;
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> LPLATRN_cc = (&LPLATRN_cc);
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> RPLATRN_fns = RPLATRN_fns;
(( WPLATRN_declaration * ) ( UPLATRN_declaration.nonlocals )) -> MPLATRN_fc = (&MPLATRN_fc);
 /* line 1505: */
YSLATRN = UPLATRN_declaration ;
ATLATRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HVEC(ZSLATRN,A_UNITE(XSLATRN,mode23,23,YSLATRN),A68_417 ));
 /* line 1507: */
 /* line 1508: */
 /* line 1509: */
switch ( Outer.Sort )
{ 
case 1: 
 /* line 1510: */
DTLATRN = (*UDAATRN_makeattrname(1)) ;
BTLATRN = A_UNITE(CTLATRN,mode1,1,DTLATRN);
break;
case 2: 
 /* line 1511: */
FTLATRN = (*OEAATRN_makefname(1)) ;
BTLATRN = A_UNITE(ETLATRN,mode2,2,FTLATRN);
break;
case 3: 
 /* line 1512: */
HTLATRN = (*IFAATRN_maketname(1)) ;
BTLATRN = A_UNITE(GTLATRN,mode3,3,HTLATRN);
break;
case 4: 
 /* line 1513: */
JTLATRN = (*CGAATRN_makecname(1)) ;
BTLATRN = A_UNITE(ITLATRN,mode4,4,JTLATRN);
break;
case 5: 
 /* line 1514: */
 /* line 1515: */
LTLATRN = (*LHAATRN_makefnname(1)) ;
BTLATRN = A_UNITE(KTLATRN,mode5,5,LTLATRN);
break;
default: 
BTLATRN = MTLATRN;
break;
} 
NTLATRN_od = BTLATRN;
 /* line 1516: */
OTLATRN = (*(&(ATLATRN_newtprocs->Declaration))) ;
A_CALLPROC(OTLATRN,(NTLATRN_od, ATLATRN_newtprocs, &PTLATRN),(NTLATRN_od, ATLATRN_newtprocs, &PTLATRN,(OTLATRN).nonlocals));
PTLATRN;
 /* line 1518: */
QTLATRN = IPLATRN_ac;
if ( ! QTLATRN )
{QTLATRN = JPLATRN_ic;
}
if ( ! QTLATRN )
{QTLATRN = KPLATRN_tc;
}
if ( ! QTLATRN )
{QTLATRN = LPLATRN_cc;
}
 /* line 1519: */
if ( ! QTLATRN )
{QTLATRN = MPLATRN_fc;
}
if ( QTLATRN )
{ 
RTLATRN.O.Closureno = Outer.Closureno;
RTLATRN.O.Sort = Outer.Sort;
RTLATRN.O.Environ = HPLATRN_env;
 /* line 1520: */
RTLATRN.C = A68_TRUE;
STLATRN = RTLATRN;
} 
else
{ 
TTLATRN.O = Outer;
 /* line 1521: */
 /* line 1522: */
TTLATRN.C = A68_FALSE;
STLATRN = TTLATRN;
} 
} 
A_PROC_EXIT(outer);
*ReturnedValue = (STLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XTLATRN_closure(A68_297 * Cl, A68_416 * Tprocs, A68_97  Msg, A68_414  *ReturnedValue)
{ 
A68_414  YTLATRN;  /* collateral clause result */
A68_414  ZTLATRN;  /* clause result */
A68_297 * AULATRN_new;
A68_BOOL  BULATRN_changed;
A68_294 * CULATRN_ptr;
A68_413  DULATRN;  /* CALL */
A68_412  EULATRN;  /* avoid structure result */
A68_412  FULATRN_oc;
A68_293 * GULATRN;  /* YIELD */
A68_414  HULATRN;  /* collateral clause result */
A_PROC_ENTRY(closure);
 /* line 1526: */
 /* line 1527: */
if ( ((*(&(Cl->Outers)))==HBAATRN_nilouters) )
{ 
YTLATRN.Cl = Cl;
 /* line 1528: */
 /* line 1529: */
YTLATRN.C = A68_FALSE;
ZTLATRN = YTLATRN;
} 
else
{ 
AULATRN_new = Cl;
 /* line 1530: */
BULATRN_changed = A68_FALSE;
 /* line 1531: */
CULATRN_ptr = (*(&(AULATRN_new->Outers)));
 /* line 1532: */
for ( ;; )
{ 
 /* line 1533: */
if ( !((CULATRN_ptr!=HBAATRN_nilouters)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 1534: */
DULATRN = (*(&(Tprocs->Outer))) ;
A_CALLPROC(DULATRN,((*(&(CULATRN_ptr->Outer))), Tprocs, &EULATRN),((*(&(CULATRN_ptr->Outer))), Tprocs, &EULATRN,(DULATRN).nonlocals));
FULATRN_oc = EULATRN;
 /* line 1535: */
 /* line 1536: */
if ( FULATRN_oc.C )
{ 
 /* line 1537: */
if ( !BULATRN_changed )
{ 
BULATRN_changed = A68_TRUE;
 /* line 1538: */
AULATRN_new = DPCATRN_copy_closure(AULATRN_new, Msg);
 /* line 1539: */
 /* line 1540: */
CULATRN_ptr = ELCATRN_find_outers((*(&((&(CULATRN_ptr->Outer))->Closureno))), AULATRN_new, Msg);
} 
 /* line 1541: */
 /* line 1542: */
GULATRN = (&(CULATRN_ptr->Outer)) ;
(*GULATRN) = FULATRN_oc.O;
} 
 /* line 1543: */
 /* line 1544: */
CULATRN_ptr = (*(&(CULATRN_ptr->Rest)));
}
 /* line 1545: */
HULATRN.Cl = AULATRN_new;
 /* line 1546: */
HULATRN.C = BULATRN_changed;
ZTLATRN = HULATRN;
} 
A_PROC_EXIT(closure);
*ReturnedValue = (ZTLATRN);
return;
} 
#undef NL

A68_VOID  DWLATRN_null_attr(A68_161  A, A68_416 * Tprocs, A68_334  *ReturnedValue)
{ 
A68_334  EWLATRN;  /* collateral clause result */
A68_334  FWLATRN;  /* clause result */
A_PROC_ENTRY(null_attr);
EWLATRN.A = A;
EWLATRN.C = A68_FALSE;
FWLATRN = EWLATRN;
A_PROC_EXIT(null_attr);
*ReturnedValue = (FWLATRN);
return;
} 
#undef NL

A68_VOID  IWLATRN_null_formula(A68_170  F, A68_416 * Tprocs, A68_338  *ReturnedValue)
{ 
A68_338  JWLATRN;  /* collateral clause result */
A68_338  KWLATRN;  /* clause result */
A_PROC_ENTRY(null_formula);
 /* line 1583: */
JWLATRN.F = F;
JWLATRN.C = A68_FALSE;
KWLATRN = JWLATRN;
A_PROC_EXIT(null_formula);
*ReturnedValue = (KWLATRN);
return;
} 
#undef NL

A68_VOID  NWLATRN_null_type(A68_186  T, A68_416 * Tprocs, A68_350  *ReturnedValue)
{ 
A68_350  OWLATRN;  /* collateral clause result */
A68_350  PWLATRN;  /* clause result */
A_PROC_ENTRY(null_type);
OWLATRN.T = T;
OWLATRN.C = A68_FALSE;
PWLATRN = OWLATRN;
A_PROC_EXIT(null_type);
*ReturnedValue = (PWLATRN);
return;
} 
#undef NL

A68_VOID  SWLATRN_null_unit(A68_208  U, A68_416 * Tprocs, A68_368  *ReturnedValue)
{ 
A68_368  TWLATRN;  /* collateral clause result */
A68_368  UWLATRN;  /* clause result */
A_PROC_ENTRY(null_unit);
TWLATRN.U = U;
 /* line 1592: */
TWLATRN.C = A68_FALSE;
UWLATRN = TWLATRN;
A_PROC_EXIT(null_unit);
*ReturnedValue = (UWLATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void IHJATRN(void)   /* initialise DECS transformprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/transformprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_416  IULATRN;  /* collateral clause result */
A68_335  JULATRN;  /* procedure value */
A68_333  KULATRN;  /* procedure value */
A68_337  LULATRN;  /* procedure value */
A68_339  MULATRN;  /* procedure value */
A68_341  NULATRN;  /* procedure value */
A68_343  OULATRN;  /* procedure value */
A68_345  PULATRN;  /* procedure value */
A68_347  QULATRN;  /* procedure value */
A68_349  RULATRN;  /* procedure value */
A68_351  SULATRN;  /* procedure value */
A68_353  TULATRN;  /* procedure value */
A68_355  UULATRN;  /* procedure value */
A68_357  VULATRN;  /* procedure value */
A68_359  WULATRN;  /* procedure value */
A68_361  XULATRN;  /* procedure value */
A68_363  YULATRN;  /* procedure value */
A68_365  ZULATRN;  /* procedure value */
A68_367  AVLATRN;  /* procedure value */
A68_369  BVLATRN;  /* procedure value */
A68_371  CVLATRN;  /* procedure value */
A68_373  DVLATRN;  /* procedure value */
A68_375  EVLATRN;  /* procedure value */
A68_377  FVLATRN;  /* procedure value */
A68_379  GVLATRN;  /* procedure value */
A68_381  HVLATRN;  /* procedure value */
A68_383  IVLATRN;  /* procedure value */
A68_385  JVLATRN;  /* procedure value */
A68_387  KVLATRN;  /* procedure value */
A68_389  LVLATRN;  /* procedure value */
A68_391  MVLATRN;  /* procedure value */
A68_393  NVLATRN;  /* procedure value */
A68_395  OVLATRN;  /* procedure value */
A68_397  PVLATRN;  /* procedure value */
A68_399  QVLATRN;  /* procedure value */
A68_401  RVLATRN;  /* procedure value */
A68_403  SVLATRN;  /* procedure value */
A68_405  TVLATRN;  /* procedure value */
A68_407  UVLATRN;  /* procedure value */
A68_409  VVLATRN;  /* procedure value */
A68_411  WVLATRN;  /* procedure value */
A68_413  XVLATRN;  /* procedure value */
A68_415  YVLATRN;  /* procedure value */
A68_416 * ZVLATRN;  /* YIELD */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/transformprocs.a68";
A_config.translation_time = "Tue Apr  4 09:59:57 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "HHJATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:59:57 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS transformprocs);
UEAALIB_a68config(LGAALIB_configinfo, MHJATRN);
 /* line 83: */
 /* line 219: */
 /* line 223: */
NHJATRN_niltprocs = (A68_416 *)A68_NIL;
 /* line 224: */
OHJATRN_freelist = NHJATRN_niltprocs;
 /* line 225: */
PHJATRN_n_allocated = 0;
QHJATRN_n_reallocated = 0;
 /* line 230: */
 /* line 319: */
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 345: */
 /* line 356: */
 /* line 372: */
 /* line 386: */
 /* line 430: */
 /* line 442: */
 /* line 453: */
 /* line 465: */
 /* line 481: */
 /* line 493: */
 /* line 534: */
 /* line 544: */
 /* line 563: */
 /* line 589: */
 /* line 606: */
 /* line 624: */
 /* line 636: */
 /* line 647: */
 /* line 661: */
 /* line 888: */
 /* line 929: */
 /* line 951: */
 /* line 962: */
 /* line 966: */
 /* line 991: */
 /* line 1002: */
 /* line 1016: */
 /* line 1026: */
 /* line 1037: */
 /* line 1051: */
 /* line 1130: */
 /* line 1145: */
 /* line 1157: */
 /* line 1168: */
 /* line 1180: */
 /* line 1217: */
 /* line 1233: */
 /* line 1315: */
 /* line 1325: */
 /* line 1346: */
 /* line 1405: */
 /* line 1525: */
 /* line 1560: */
 /* line 1561: */
JULATRN.fn.fn_global = CNJATRN_attr;
JULATRN.nonlocals = A68_NIL;
IULATRN.Attr = JULATRN;
KULATRN.fn.fn_global = MMJATRN_attrstr;
KULATRN.nonlocals = A68_NIL;
IULATRN.Attrstr = KULATRN;
 /* line 1562: */
LULATRN.fn.fn_global = XNJATRN_attrdec;
LULATRN.nonlocals = A68_NIL;
IULATRN.Attrdec = LULATRN;
MULATRN.fn.fn_global = JOJATRN_formula;
MULATRN.nonlocals = A68_NIL;
IULATRN.Formula = MULATRN;
NULATRN.fn.fn_global = WQJATRN_formulas;
NULATRN.nonlocals = A68_NIL;
IULATRN.Formulas = NULATRN;
OULATRN.fn.fn_global = WSJATRN_intdec;
OULATRN.nonlocals = A68_NIL;
IULATRN.Intdec = OULATRN;
PULATRN.fn.fn_global = MRJATRN_range;
PULATRN.nonlocals = A68_NIL;
IULATRN.Range = PULATRN;
 /* line 1563: */
QULATRN.fn.fn_global = ZRJATRN_formularange;
QULATRN.nonlocals = A68_NIL;
IULATRN.Formularange = QULATRN;
RULATRN.fn.fn_global = MTJATRN_tstr;
RULATRN.nonlocals = A68_NIL;
IULATRN.Tstr = RULATRN;
SULATRN.fn.fn_global = CUJATRN_type;
SULATRN.nonlocals = A68_NIL;
IULATRN.Type = SULATRN;
TULATRN.fn.fn_global = OWJATRN_alternative;
TULATRN.nonlocals = A68_NIL;
IULATRN.Alternative = TULATRN;
 /* line 1564: */
UULATRN.fn.fn_global = XWJATRN_alternatives;
UULATRN.nonlocals = A68_NIL;
IULATRN.Alternatives = UULATRN;
VULATRN.fn.fn_global = RXJATRN_typebody;
VULATRN.nonlocals = A68_NIL;
IULATRN.Typebody = VULATRN;
 /* line 1565: */
WULATRN.fn.fn_global = WYJATRN_typedec;
WULATRN.nonlocals = A68_NIL;
IULATRN.Typedec = WULATRN;
 /* line 1566: */
XULATRN.fn.fn_global = MZJATRN_constdec;
XULATRN.nonlocals = A68_NIL;
IULATRN.Constdec = XULATRN;
YULATRN.fn.fn_global = CAKATRN_ualts;
YULATRN.nonlocals = A68_NIL;
IULATRN.Ualts = YULATRN;
ZULATRN.fn.fn_global = SAKATRN_ustr;
ZULATRN.nonlocals = A68_NIL;
IULATRN.Ustr = ZULATRN;
AVLATRN.fn.fn_global = IBKATRN_uchoices;
AVLATRN.nonlocals = A68_NIL;
IULATRN.Uchoices = AVLATRN;
BVLATRN.fn.fn_global = BCKATRN_unit;
BVLATRN.nonlocals = A68_NIL;
IULATRN.Unit = BVLATRN;
CVLATRN.fn.fn_global = MPKATRN_mparam;
CVLATRN.nonlocals = A68_NIL;
IULATRN.Mparam = CVLATRN;
DVLATRN.fn.fn_global = GRKATRN_macparams;
DVLATRN.nonlocals = A68_NIL;
IULATRN.Macparams = DVLATRN;
 /* line 1567: */
EVLATRN.fn.fn_global = DSKATRN_instance;
EVLATRN.nonlocals = A68_NIL;
IULATRN.Instance = EVLATRN;
 /* line 1568: */
FVLATRN.fn.fn_global = QSKATRN_declaration;
FVLATRN.nonlocals = A68_NIL;
IULATRN.Declaration = FVLATRN;
GVLATRN.fn.fn_global = VSKATRN_printitems;
GVLATRN.nonlocals = A68_NIL;
IULATRN.Printitems = GVLATRN;
HVLATRN.fn.fn_global = UTKATRN_print;
HVLATRN.nonlocals = A68_NIL;
IULATRN.Print = HVLATRN;
 /* line 1569: */
IVLATRN.fn.fn_global = JUKATRN_fault;
IVLATRN.nonlocals = A68_NIL;
IULATRN.Fault = IVLATRN;
JVLATRN.fn.fn_global = YUKATRN_names;
JVLATRN.nonlocals = A68_NIL;
IULATRN.Names = JVLATRN;
KVLATRN.fn.fn_global = KVKATRN_let;
KVLATRN.nonlocals = A68_NIL;
IULATRN.Let = KVLATRN;
LVLATRN.fn.fn_global = ZVKATRN_seqchoices;
LVLATRN.nonlocals = A68_NIL;
IULATRN.Seqchoices = LVLATRN;
MVLATRN.fn.fn_global = SWKATRN_seqstep;
MVLATRN.nonlocals = A68_NIL;
IULATRN.Seqstep = MVLATRN;
 /* line 1570: */
NVLATRN.fn.fn_global = TBLATRN_sequence;
NVLATRN.nonlocals = A68_NIL;
IULATRN.Sequence = NVLATRN;
OVLATRN.fn.fn_global = JCLATRN_make;
OVLATRN.nonlocals = A68_NIL;
IULATRN.Make = OVLATRN;
PVLATRN.fn.fn_global = BDLATRN_join;
PVLATRN.nonlocals = A68_NIL;
IULATRN.Join = PVLATRN;
QVLATRN.fn.fn_global = QDLATRN_joins;
QVLATRN.nonlocals = A68_NIL;
IULATRN.Joins = QVLATRN;
RVLATRN.fn.fn_global = GELATRN_step;
RVLATRN.nonlocals = A68_NIL;
IULATRN.Step = RVLATRN;
 /* line 1571: */
SVLATRN.fn.fn_global = OGLATRN_series;
SVLATRN.nonlocals = A68_NIL;
IULATRN.Series = SVLATRN;
TVLATRN.fn.fn_global = EHLATRN_fnbody;
TVLATRN.nonlocals = A68_NIL;
IULATRN.Fnbody = TVLATRN;
UVLATRN.fn.fn_global = PLLATRN_macspec;
UVLATRN.nonlocals = A68_NIL;
IULATRN.Macspec = UVLATRN;
VVLATRN.fn.fn_global = YLLATRN_macspecs;
VVLATRN.nonlocals = A68_NIL;
IULATRN.Macspecs = VVLATRN;
 /* line 1572: */
WVLATRN.fn.fn_global = TMLATRN_fndec;
WVLATRN.nonlocals = A68_NIL;
IULATRN.Fndec = WVLATRN;
XVLATRN.fn.fn_global = GPLATRN_outer;
XVLATRN.nonlocals = A68_NIL;
IULATRN.Outer = XVLATRN;
 /* line 1573: */
YVLATRN.fn.fn_global = XTLATRN_closure;
YVLATRN.nonlocals = A68_NIL;
IULATRN.Closure = YVLATRN;
IULATRN.Rest = NHJATRN_niltprocs;
ZVLATRN = A_HEAP(A68_416 ) ;
(*ZVLATRN) = IULATRN ;
AWLATRN_nulltprocs = ZVLATRN;
 /* line 1580: */
 /* line 1582: */
 /* line 1585: */
 /* line 1587: */
 /* line 1609: */
A_PROC_EXIT(DECS transformprocs);
} 
#undef NL
/* end of translation of ./a68files/transformprocs.a68 */
