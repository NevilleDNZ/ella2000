
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
/* UNAME:WJWAELA */
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
struct A68t162 ;
struct A68t163 ;
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,struct A68t117 ,struct A68t156 ,struct A68t163 ,struct A68t164 ),(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,struct A68t117 ,struct A68t156 ,struct A68t163 ,struct A68t164 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160,BOOL,MODE161,MODE162,MODE117,MODE156,REF MODE163,MODE164) VOID */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,struct A68t198 *),(A68_VC ,struct A68t198 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE26) MODE198 */
struct A68t244 ;

A_PROCEDURE(struct A68t244 *,A68t161,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE198) REF MODE244 */
struct A68t166 ;
struct A68t167 ;

A_PROCEDURE(struct A68t166 *,A68t162,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE167) REF MODE166 */
A_ROW(struct A68t165 ,A68t163,1);
typedef struct A68t163  A68_163 ;    /* [] MODE165 */
struct A68t165{
A68_INT  Type;
A_PAD_INT(PAD_34)
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,struct A68t46 ),(A68_INT ,struct A68t46 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT,MODE46) VOID */
struct A68t166{
struct A68t167 * Fndec;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_36)
struct A68t166 * Rest;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE167,BOOL,REF MODE166)  */
struct A68t259{
A68_INT  Anull;
A_PAD_INT(PAD_37)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t182{
A68_INT  Flt;
A_PAD_INT(PAD_38)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t170 { A68_INT mode; union {
struct A68t254 * mode1;
struct A68t255 * mode2;
struct A68t256 * mode3;
struct A68t257 * mode4;
struct A68t258 * mode5;
struct A68t259  mode6;
struct A68t182  mode7;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,MODE259,MODE182)  */
struct A68t177{
A68_INT  Tnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Unset;
A_PAD_INT(PAD_40)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT)  */
struct A68t184{
A68_INT  Tvoid;
A_PAD_INT(PAD_41)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT)  */
struct A68t172 { A68_INT mode; union {
struct A68t173 * mode1;
struct A68t174 * mode2;
struct A68t175 * mode3;
struct A68t176 * mode4;
struct A68t177  mode5;
struct A68t178 * mode6;
struct A68t179 * mode7;
struct A68t180 * mode8;
struct A68t181 * mode9;
struct A68t182  mode10;
struct A68t183  mode11;
struct A68t184  mode12;
} data; };
typedef struct A68t172  A68_172 ;    /* UNION(REF MODE173,REF MODE174,REF MODE175,REF MODE176,MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,MODE182,MODE183,MODE184)  */
struct A68t167{
struct A68t168 * Fninfo;
A68_INT  Sort;
A_PAD_INT(PAD_42)
A68_INT  Fnno;
A_PAD_INT(PAD_43)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_44)
A68_VC  Id;
A68_INT  Mparamno;
A_PAD_INT(PAD_45)
struct A68t169 * Mp;
struct A68t169 ** Nextmp;
struct A68t170  Attr;
struct A68t171 * Inputs;
struct A68t171 * Outputs;
struct A68t172  Param;
struct A68t172  Ans;
A68_INT  Num_names;
A_PAD_INT(PAD_46)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
struct A68t168{
A68_INT  Scope;
A_PAD_INT(PAD_47)
A68_INT  Vnno;
A_PAD_INT(PAD_48)
A68_INT  Status;
A_PAD_INT(PAD_49)
A68_BOOL  Text;
A_PAD_BOOL(PAD_50)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_51)
A68_BOOL  Import;
A_PAD_BOOL(PAD_52)
A68_BOOL  Export;
A_PAD_BOOL(PAD_53)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,INT,BOOL,BOOL,BOOL,BOOL)  */
struct A68t260 { A68_INT mode; union {
struct A68t258 * mode1;
struct A68t189 * mode2;
struct A68t176 * mode3;
struct A68t236 * mode4;
struct A68t167 * mode5;
struct A68t182  mode6;
} data; };
typedef struct A68t260  A68_260 ;    /* UNION(REF MODE258,REF MODE189,REF MODE176,REF MODE236,REF MODE167,MODE182)  */
struct A68t169{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_INT  Mparamno;
A_PAD_INT(PAD_55)
struct A68t260  Value;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT,MODE260,REF MODE169)  */
struct A68t171{
struct A68t172  T;
struct A68t244 * Ids;
struct A68t171 * Rest;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE172,REF MODE244,REF MODE171)  */
struct A68t194{
A68_INT  P;
A_PAD_INT(PAD_56)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t197{
A68_INT  Inull;
A_PAD_INT(PAD_57)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t185 { A68_INT mode; union {
A68_INT  mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t182  mode4;
struct A68t188 * mode5;
struct A68t189 * mode6;
struct A68t190 * mode7;
struct A68t191 * mode8;
struct A68t192 * mode9;
struct A68t193 * mode10;
struct A68t194  mode11;
struct A68t195 * mode12;
struct A68t196 * mode13;
struct A68t197  mode14;
struct A68t183  mode15;
} data; };
typedef struct A68t185  A68_185 ;    /* UNION(INT,REF MODE186,REF MODE187,MODE182,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,MODE194,REF MODE195,REF MODE196,MODE197,MODE183)  */
struct A68t248{
struct A68t198 * Idinfo;
struct A68t185  Lwb;
struct A68t185  Upb;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE198,MODE185,MODE185)  */
struct A68t250{
struct A68t198 * Idinfo;
struct A68t54  Charcheck;
struct A68t251 * Charalts;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
struct A68t247 { A68_INT mode; union {
struct A68t248  mode1;
struct A68t249 * mode2;
struct A68t250  mode3;
} data; };
typedef struct A68t247  A68_247 ;    /* UNION(MODE248,REF MODE249,MODE250)  */
struct A68t173{
struct A68t198 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_58)
struct A68t247  U;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE198,INT,MODE247)  */
struct A68t174{
struct A68t198 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_59)
struct A68t172  T;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE198,INT,MODE172)  */
struct A68t175{
struct A68t172  T;
struct A68t175 * Rest;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE172,REF MODE175)  */
struct A68t176{
struct A68t245 * Tm;
struct A68t172  T;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE245,MODE172)  */
struct A68t178{
struct A68t172  From;
struct A68t172  To;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE172,MODE172)  */
struct A68t179{
struct A68t172  T;
struct A68t185  Size;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE172,MODE185)  */
struct A68t180{
struct A68t172  Tbracket;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE172)  */
struct A68t181{
struct A68t185  Size;
struct A68t172  Tstring;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE185,MODE172)  */
struct A68t186{
A68_VC  Text;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26)  */
struct A68t187{
A68_INT  Int;
A_PAD_INT(PAD_60)
A68_VC  Text;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t188{
struct A68t185  Integer;
struct A68t185  Standard;
A68_INT  Test;
A_PAD_INT(PAD_61)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE185,MODE185,INT)  */
struct A68t189{
struct A68t245 * Im;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE245)  */
struct A68t190{
A68_INT  Opno;
A_PAD_INT(PAD_62)
struct A68t185  L;
struct A68t185  R;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,MODE185,MODE185)  */
struct A68t191{
A68_INT  Opno;
A_PAD_INT(PAD_63)
struct A68t185  R;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,MODE185)  */
struct A68t192{
struct A68t185  Cond;
struct A68t185  T;
struct A68t185  F;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE185,MODE185,MODE185)  */
struct A68t193{
A68_INT  Varmultno;
A_PAD_INT(PAD_64)
struct A68t185  Lwb;
struct A68t185  Upb;
struct A68t185  Index;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,MODE185,MODE185,MODE185)  */
struct A68t195{
struct A68t198 * Idinfo;
A68_INT  Intno;
A_PAD_INT(PAD_65)
struct A68t185  I;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE198,INT,MODE185)  */
struct A68t196{
struct A68t185  Ibracket;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE185)  */
struct A68t200{
struct A68t185  I;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE185)  */
struct A68t201{
struct A68t172  T;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE172)  */
struct A68t237{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT)  */
struct A68t222 { A68_INT mode; union {
struct A68t223 * mode1;
struct A68t224 * mode2;
struct A68t225 * mode3;
struct A68t203 * mode4;
struct A68t226 * mode5;
struct A68t227 * mode6;
struct A68t228 * mode7;
struct A68t229 * mode8;
struct A68t230 * mode9;
struct A68t182  mode10;
struct A68t183  mode11;
struct A68t231 * mode12;
struct A68t232 * mode13;
struct A68t233 * mode14;
struct A68t234 * mode15;
struct A68t235 * mode16;
struct A68t236 * mode17;
struct A68t237  mode18;
struct A68t238 * mode19;
struct A68t239 * mode20;
struct A68t240 * mode21;
struct A68t241 * mode22;
struct A68t242 * mode23;
struct A68t243 * mode24;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE223,REF MODE224,REF MODE225,REF MODE203,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,MODE182,MODE183,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243)  */
struct A68t202{
struct A68t222  Ct;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE222)  */
struct A68t203{
struct A68t172  Type;
A68_INT  Index;
A_PAD_INT(PAD_67)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE172,INT)  */
struct A68t205{
struct A68t170  A;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE170)  */
struct A68t206{
struct A68t172  Type;
A68_INT  Decno;
A_PAD_INT(PAD_68)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE172,INT)  */
struct A68t207{
A68_INT  Rec;
A_PAD_INT(PAD_69)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
A68_INT  Notdec;
A_PAD_INT(PAD_70)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT)  */
struct A68t199 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t201  mode2;
struct A68t202  mode3;
struct A68t203  mode4;
struct A68t204 * mode5;
struct A68t205  mode6;
struct A68t206  mode7;
struct A68t182  mode8;
struct A68t207  mode9;
struct A68t208  mode10;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(MODE200,MODE201,MODE202,MODE203,REF MODE204,MODE205,MODE206,MODE182,MODE207,MODE208)  */
struct A68t198{
A68_INT  Scope;
A_PAD_INT(PAD_71)
A68_INT  Vnno;
A_PAD_INT(PAD_72)
A68_BOOL  Text;
A_PAD_BOOL(PAD_73)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_74)
A68_BOOL  Inscope;
A_PAD_BOOL(PAD_75)
A68_BOOL  Export;
A_PAD_BOOL(PAD_76)
A68_VC  Id;
struct A68t199  U;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT,BOOL,BOOL,BOOL,BOOL,REF MODE26,MODE199)  */
struct A68t210 { A68_INT mode; union {
struct A68t214 * mode1;
struct A68t215 * mode2;
struct A68t216 * mode3;
struct A68t217 * mode4;
struct A68t218 * mode5;
struct A68t219 * mode6;
struct A68t182  mode7;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,MODE182)  */
struct A68t211 { A68_INT mode; union {
struct A68t212 * mode1;
struct A68t213 * mode2;
struct A68t182  mode3;
} data; };
typedef struct A68t211  A68_211 ;    /* UNION(REF MODE212,REF MODE213,MODE182)  */
struct A68t204{
A68_INT  Decno;
A_PAD_INT(PAD_77)
A68_INT  Origin;
A_PAD_INT(PAD_78)
struct A68t209 * Makeint;
struct A68t172  Type;
struct A68t210  Jsource;
struct A68t210  Jsink;
struct A68t211  Input;
struct A68t211  Output;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
struct A68t209{
struct A68t185  I;
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE185,REF MODE209)  */
struct A68t212{
A68_VC  Id;
A68_INT  Fnno;
A_PAD_INT(PAD_79)
A68_INT  Nameno;
A_PAD_INT(PAD_80)
A68_INT  Index;
A_PAD_INT(PAD_81)
struct A68t172  Type;
A68_BOOL  Single;
A_PAD_BOOL(PAD_82)
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE26,INT,INT,INT,MODE172,BOOL,REF MODE212)  */
struct A68t213{
struct A68t211  Port;
struct A68t185  I;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE211,MODE185)  */
struct A68t214{
struct A68t210  Jst;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE210,REF MODE214)  */
struct A68t218{
A68_INT  J;
A_PAD_INT(PAD_83)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t215{
struct A68t218  Joined;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE218)  */
A_VECTOR(struct A68t210 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE210 */
struct A68t216{
struct A68t221  Jrow;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE221)  */
struct A68t217{
struct A68t210  Source;
struct A68t210  Sink;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE210,MODE210)  */
struct A68t220{
struct A68t185  Lwb;
struct A68t185  Upb;
A68_BOOL  Index;
A_PAD_BOOL(PAD_84)
struct A68t220 * Rest;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE185,MODE185,BOOL,REF MODE220)  */
struct A68t219{
struct A68t210  Jrep;
struct A68t220  Jvarstack;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE210,MODE220)  */
struct A68t223{
struct A68t198 * Idinfo;
A68_INT  Ctypeno;
A_PAD_INT(PAD_85)
struct A68t222  Ct;
struct A68t172  T;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(REF MODE198,INT,MODE222,MODE172)  */
struct A68t224{
struct A68t172  T;
struct A68t185  Lwb;
struct A68t185  Upb;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE172,MODE185,MODE185)  */
struct A68t225{
struct A68t172  T;
struct A68t185  Index;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE172,MODE185)  */
struct A68t226{
struct A68t203 * P;
struct A68t222  Ct;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE203,MODE222)  */
struct A68t227{
struct A68t222  Ct;
struct A68t185  Size;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE222,MODE185)  */
struct A68t228{
struct A68t222  Cst;
struct A68t228 * Rest;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE222,REF MODE228)  */
struct A68t229{
struct A68t222  Calt;
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE222,REF MODE229)  */
struct A68t230{
struct A68t172  Ct;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE172)  */
struct A68t231{
struct A68t222  Cbracket;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE222)  */
struct A68t232{
struct A68t172  Querytype;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE172)  */
struct A68t233{
struct A68t185  Size;
struct A68t222  Ct;
struct A68t246 * Strings;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE185,MODE222,REF MODE246)  */
struct A68t234{
struct A68t172  T;
A68_CHAR  Char;
A_PAD_CHAR(PAD_86)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE172,CHAR)  */
struct A68t235{
struct A68t172  T;
A68_CHAR  Lwb;
A_PAD_CHAR(PAD_87)
A68_CHAR  Upb;
A_PAD_CHAR(PAD_88)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE172,CHAR,CHAR)  */
struct A68t236{
struct A68t245 * Cm;
struct A68t172  T;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE245,MODE172)  */
struct A68t238{
struct A68t222  Ct;
struct A68t185  Index;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE222,MODE185)  */
struct A68t239{
struct A68t222  Ct;
struct A68t185  Lwb;
struct A68t185  Upb;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE222,MODE185,MODE185)  */
struct A68t240{
struct A68t185  Test;
struct A68t222  Then;
struct A68t222  Else;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE185,MODE222,MODE222)  */
struct A68t241{
struct A68t244 * Ids;
struct A68t222  Ct;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE244,MODE222)  */
struct A68t242{
A68_BOOL  String;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t222  Left;
struct A68t222  Right;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(BOOL,INT,MODE222,MODE222)  */
struct A68t243{
struct A68t222  Ct;
struct A68t170  Attr;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE222,MODE170)  */
struct A68t244{
struct A68t198 * Idinfo;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_91)
struct A68t170  Attr;
struct A68t244 * Rest;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(REF MODE198,BOOL,MODE170,REF MODE244)  */
struct A68t245{
A68_VC  Id;
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_INT  Fnno;
A_PAD_INT(PAD_93)
A68_INT  Index;
A_PAD_INT(PAD_94)
A68_INT  Xno;
A_PAD_INT(PAD_95)
struct A68t170  Attr;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE26,INT,INT,INT,INT,MODE170)  */
struct A68t246{
A68_VC  Id;
struct A68t246 * Rest;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(REF MODE26,REF MODE246)  */
struct A68t249{
struct A68t198 * Idinfo;
struct A68t172 * U;
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
struct A68t253{
A68_CHAR  Lwchar;
A_PAD_CHAR(PAD_96)
A68_CHAR  Upchar;
A_PAD_CHAR(PAD_97)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t252 { A68_INT mode; union {
A68_CHAR  mode1;
struct A68t253  mode2;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(CHAR,MODE253)  */
struct A68t251{
struct A68t252  Alts;
struct A68t251 * Rest;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE252,REF MODE251)  */
struct A68t254{
struct A68t198 * Idinfo;
A68_INT  Attrno;
A_PAD_INT(PAD_98)
struct A68t170  Attr;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(REF MODE198,INT,MODE170)  */
struct A68t255{
A68_VC  Classname;
struct A68t246 * Data;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE26,REF MODE246)  */
struct A68t256{
struct A68t170  Elem;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE170,REF MODE256)  */
struct A68t257{
struct A68t170  Abracket;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE170)  */
struct A68t258{
struct A68t245 * Am;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(REF MODE245)  */
struct A68t262 ;

A_PROCEDURE(A68_VOID ,A68t261,(A68_INT ,struct A68t262 ,A68_BOOL *,struct A68t164 ),(A68_INT ,struct A68t262 ,A68_BOOL *,struct A68t164 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT,MODE262,REF BOOL,MODE164) VOID */
A_VECTOR(struct A68t263 ,A68t262);
typedef struct A68t262  A68_262 ;    /* VECTOR [] MODE263 */
struct A68t263 { A68_INT mode; union {
struct A68t173 * mode1;
struct A68t174 * mode2;
struct A68t175 * mode3;
struct A68t176 * mode4;
struct A68t177  mode5;
struct A68t178 * mode6;
struct A68t179 * mode7;
struct A68t180 * mode8;
struct A68t181 * mode9;
struct A68t182  mode10;
struct A68t183  mode11;
struct A68t184  mode12;
A68_VC  mode13;
struct A68t167 * mode14;
struct A68t144  mode15;
A68_INT  mode16;
struct A68t186 * mode17;
struct A68t187 * mode18;
struct A68t188 * mode19;
struct A68t189 * mode20;
struct A68t190 * mode21;
struct A68t191 * mode22;
struct A68t192 * mode23;
struct A68t193 * mode24;
struct A68t194  mode25;
struct A68t195 * mode26;
struct A68t196 * mode27;
struct A68t197  mode28;
struct A68t223 * mode29;
struct A68t224 * mode30;
struct A68t225 * mode31;
struct A68t203 * mode32;
struct A68t226 * mode33;
struct A68t227 * mode34;
struct A68t228 * mode35;
struct A68t229 * mode36;
struct A68t230 * mode37;
struct A68t231 * mode38;
struct A68t232 * mode39;
struct A68t233 * mode40;
struct A68t234 * mode41;
struct A68t235 * mode42;
struct A68t236 * mode43;
struct A68t237  mode44;
struct A68t238 * mode45;
struct A68t239 * mode46;
struct A68t240 * mode47;
struct A68t241 * mode48;
struct A68t242 * mode49;
struct A68t243 * mode50;
} data; };
typedef struct A68t263  A68_263 ;    /* UNION(REF MODE173,REF MODE174,REF MODE175,REF MODE176,MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,MODE182,MODE183,MODE184,REF MODE26,REF MODE167,MODE144,INT,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,MODE194,REF MODE195,REF MODE196,MODE197,REF MODE223,REF MODE224,REF MODE225,REF MODE203,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243)  */
struct A68t265 ;
struct A68t266 ;
struct A68t267 ;

A_PROCEDURE(A68_BOOL ,A68t264,(struct A68t172 ,struct A68t172 ,struct A68t265 *,struct A68t266 ,struct A68t164 ,struct A68t267 ),(struct A68t172 ,struct A68t172 ,struct A68t265 *,struct A68t266 ,struct A68t164 ,struct A68t267 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE172,MODE172,REF MODE265,MODE266,MODE164,MODE267) BOOL */
struct A68t265{
struct A68t268 * Fncall;
A68_BOOL  Explicitparam;
A_PAD_BOOL(PAD_99)
struct A68t169 ** Nextmp;
struct A68t265 * Rest;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(REF MODE268,BOOL,REF REF MODE169,REF MODE265)  */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t185 ,A68_BOOL ,struct A68t185 *),(struct A68t185 ,A68_BOOL ,struct A68t185 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE185,BOOL) MODE185 */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t175 *,struct A68t172 *),(struct A68t175 *,struct A68t172 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE175) MODE172 */
struct A68t268{
struct A68t167 * F;
struct A68t269 * Pvals;
struct A68t269 ** Nextpvals;
struct A68t170  Attr;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(REF MODE167,REF MODE269,REF REF MODE269,MODE170)  */
struct A68t270 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t201  mode2;
struct A68t202  mode3;
struct A68t268  mode4;
struct A68t205  mode5;
struct A68t182  mode6;
} data; };
typedef struct A68t270  A68_270 ;    /* UNION(MODE200,MODE201,MODE202,MODE268,MODE205,MODE182)  */
struct A68t269{
struct A68t270  Val;
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(MODE270,REF MODE269)  */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t185 ,A68_BOOL ,struct A68t164 ,struct A68t185 *),(struct A68t185 ,A68_BOOL ,struct A68t164 ,struct A68t185 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE185,BOOL,MODE164) MODE185 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t163 *),(struct A68t163 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC REF MODE163 */
struct A68t274 ;

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t274 *),(struct A68t274 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC MODE274 */

A_PROCEDURE(A68_INT ,A68t274,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE26,BOOL) INT */
struct A68t275{
A68_INT  Macsort;
A_PAD_INT(PAD_100)
A68_INT  Vss;
A_PAD_INT(PAD_101)
A68_INT  Maxvss;
A_PAD_INT(PAD_102)
A68_INT  K;
A_PAD_INT(PAD_103)
A68_INT  Which;
A_PAD_INT(PAD_104)
A68_INT  Scope;
A_PAD_INT(PAD_105)
A68_VC  Lastop;
A68_VC  Lastcall;
A68_BOOL  Errorswitch;
A_PAD_BOOL(PAD_106)
A68_BOOL  Lhsjoin;
A_PAD_BOOL(PAD_107)
struct A68t276 * Joinstack;
struct A68t214 * Joinst;
struct A68t210 * Joinup;
struct A68t220 * Joinvarstack;
struct A68t277 * Joinmultstack;
struct A68t214 * Joinvarst;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT,INT,INT,INT,INT,INT,REF MODE26,REF MODE26,BOOL,BOOL,REF MODE276,REF MODE214,REF MODE210,REF MODE220,REF MODE277,REF MODE214)  */
struct A68t276{
struct A68t210  Joinup;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE210,REF MODE276)  */
struct A68t277{
struct A68t210  Joinup;
A68_BOOL  Source;
A_PAD_BOOL(PAD_108)
struct A68t277 * Rest;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE210,BOOL,REF MODE277)  */
struct A68t278{
struct A68t185  Integer;
struct A68t172  Type;
struct A68t172  Jointype;
struct A68t175 * Sts;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE185,MODE172,MODE172,REF MODE175)  */
struct A68t279{
struct A68t265 * Fncallstack;
struct A68t280 * Lastops;
struct A68t280 * Lastcalls;
struct A68t244 * Decids;
struct A68t175 * Mltype;
struct A68t175 ** Nextmltype;
struct A68t281 * Multlets;
struct A68t281 * Multiassign;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE265,REF MODE280,REF MODE280,REF MODE244,REF MODE175,REF REF MODE175,REF MODE281,REF MODE281)  */
struct A68t280{
A68_VC  Last;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE26,REF MODE280)  */
struct A68t281{
A68_INT  Num;
A_PAD_INT(PAD_109)
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT,REF MODE281)  */
struct A68t282{
struct A68t283 * Decnocheck;
struct A68t211  Portinfo;
struct A68t284 * Portstack;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(REF MODE283,MODE211,REF MODE284)  */
struct A68t283{
A68_INT  Decno;
A_PAD_INT(PAD_110)
struct A68t283 * Rest;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,REF MODE283)  */
struct A68t284{
struct A68t211  Port;
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE211,REF MODE284)  */
struct A68t285{
struct A68t167 * Fndec;
struct A68t275 * Cint;
struct A68t278 * Ctyp;
struct A68t279 * Csta;
struct A68t282 * Crem;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(REF MODE167,REF MODE275,REF MODE278,REF MODE279,REF MODE282)  */
struct A68t286{
struct A68t285 * Val;
struct A68t286 * Rest;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(REF MODE285,REF MODE286)  */
struct A68t287{
struct A68t167 * Dec;
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE167,REF MODE287)  */
A_VECTOR(struct A68t54 ,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] REF MODE54 */
struct A68t289{
struct A68t185  I;
struct A68t172  T;
struct A68t222  Ct;
struct A68t170  A;
A68_INT  W;
A_PAD_INT(PAD_111)
struct A68t289 * Rest;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE185,MODE172,MODE222,MODE170,INT,REF MODE289)  */
struct A68t290{
struct A68t172  Param;
struct A68t172  Output;
struct A68t229 * Tested;
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE172,MODE172,REF MODE229,REF MODE290)  */
struct A68t291{
struct A68t198  I;
struct A68t291 * Rest;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE198,REF MODE291)  */
struct A68t292{
A68_INT  I;
A_PAD_INT(PAD_112)
A68_VC  Name;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,REF MODE26,REF MODE292)  */
struct A68t293{
A68_INT  Scope;
A_PAD_INT(PAD_113)
struct A68t244 * Ids;
struct A68t166 * Fns;
struct A68t293 * Rest;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,REF MODE244,REF MODE166,REF MODE293)  */
struct A68t294{
A68_INT  State;
A_PAD_INT(PAD_114)
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,REF MODE294)  */
struct A68t295{
A68_INT  Param;
A_PAD_INT(PAD_115)
A68_INT  Ans;
A_PAD_INT(PAD_116)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT,INT)  */
struct A68t296{
A68_INT  L;
A_PAD_INT(PAD_117)
A68_INT  R;
A_PAD_INT(PAD_118)
A68_INT  Ans;
A_PAD_INT(PAD_119)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t172 ,A68t297);
typedef struct A68t297  A68_297 ;    /* VECTOR [] MODE172 */
A_VECTOR(struct A68t295 ,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] MODE295 */
A_VECTOR(struct A68t296 ,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] MODE296 */
A_VECTOR(struct A68t301 ,A68t300);
typedef struct A68t300  A68_300 ;    /* VECTOR [] MODE301 */
struct A68t301{
A68_VC  Id;
A68_INT  Tokno;
A_PAD_INT(PAD_120)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t185 ,struct A68t185 *),(struct A68t185 ,struct A68t185 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE185) MODE185 */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t172 ,struct A68t172 *),(struct A68t172 ,struct A68t172 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE172) MODE172 */

A_PROCEDURE(struct A68t196 *,A68t304,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE185) REF MODE196 */

A_PROCEDURE(struct A68t180 *,A68t305,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE172) REF MODE180 */

A_PROCEDURE(struct A68t231 *,A68t306,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE222) REF MODE231 */

A_PROCEDURE(struct A68t257 *,A68t307,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE170) REF MODE257 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t185 ,struct A68t200 *),(struct A68t185 ,struct A68t200 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE185) MODE200 */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t172 ,struct A68t201 *),(struct A68t172 ,struct A68t201 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE172) MODE201 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t170 ,struct A68t205 *),(struct A68t170 ,struct A68t205 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE170) MODE205 */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t222 ,struct A68t202 *),(struct A68t222 ,struct A68t202 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE222) MODE202 */

A_PROCEDURE(struct A68t258 *,A68t312,(struct A68t245 *),(struct A68t245 *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE245) REF MODE258 */

A_PROCEDURE(struct A68t189 *,A68t313,(struct A68t245 *),(struct A68t245 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE245) REF MODE189 */

A_PROCEDURE(struct A68t232 *,A68t314,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE172) REF MODE232 */

A_PROCEDURE(A68_BOOL ,A68t315,(struct A68t218 ,struct A68t218 ),(struct A68t218 ,struct A68t218 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE218,MODE218) BOOL */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t210 *,A68_INT ),(struct A68t210 *,A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(REF MODE210,INT) VOID */
struct A68t317{
struct A68t244 * Ids;
A68_INT  Macsort;
A_PAD_INT(PAD_121)
A68_INT  Xno;
A_PAD_INT(PAD_122)
A68_BOOL  New;
A_PAD_BOOL(PAD_123)
struct A68t317 * Rest;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(REF MODE244,INT,INT,BOOL,REF MODE317)  */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t172 ,A68_BOOL ,struct A68t172 *),(struct A68t172 ,A68_BOOL ,struct A68t172 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE172,BOOL) MODE172 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t171 *,struct A68t172 *),(struct A68t171 *,struct A68t172 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE171) MODE172 */

A_PROCEDURE(struct A68t193 *,A68t320,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE244) REF MODE193 */
struct A68t321 { A68_INT mode; union {
A68_INT  mode1;
struct A68t187 * mode2;
struct A68t186 * mode3;
} data; };
typedef struct A68t321  A68_321 ;    /* UNION(INT,REF MODE187,REF MODE186)  */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t323,(A68_VC ,A68_VC ,struct A68t144 ),(A68_VC ,A68_VC ,struct A68t144 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE26,REF MODE26,MODE144) VOID */

A_PROCEDURE(A68_BOOL ,A68t324,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE144) BOOL */

A_PROCEDURE(A68_BOOL ,A68t325,(A68_VC *,A68_INT *),(A68_VC *,A68_INT *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t326,(A68_INT ,A68_INT ,struct A68t46 ),(A68_INT ,A68_INT ,struct A68t46 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT,INT,MODE46) VOID */
struct A68t327{
A68_INT  T;
A_PAD_INT(PAD_124)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(INT)  */
struct A68t328{
A68_INT  C;
A_PAD_INT(PAD_125)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t322 ,struct A68t43 ,struct A68t43 ,struct A68t129 ,struct A68t43 ,A68_INT ,struct A68t117 ,struct A68t117 ,struct A68t156 ,struct A68t323 ,struct A68t324 ,struct A68t325 ,struct A68t326 ,struct A68t274 ,struct A68t163 ),(struct A68t322 ,struct A68t43 ,struct A68t43 ,struct A68t129 ,struct A68t43 ,A68_INT ,struct A68t117 ,struct A68t117 ,struct A68t156 ,struct A68t323 ,struct A68t324 ,struct A68t325 ,struct A68t326 ,struct A68t274 ,struct A68t163 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE322,MODE43,MODE43,MODE129,MODE43,INT,MODE117,MODE117,MODE156,MODE323,MODE324,MODE325,MODE326,MODE274,REF MODE163) VOID */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ),(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE160,BOOL,MODE161,MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t331,(A68_INT ,struct A68t262 ),(A68_INT ,struct A68t262 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(INT,MODE262) VOID */
struct A68t333 ;

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t333 ),(struct A68t333 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE333) VOID */
A_VECTOR(A68_SBITS ,A68t334);
typedef struct A68t334  A68_334 ;    /* VECTOR [] SHORT BITS */
struct A68t333{
A68_INT  Test_index;
A_PAD_INT(PAD_126)
struct A68t334  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t335 * Lex;
struct A68t32 * Sidstack;
struct A68t53  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_127)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(INT,MODE334,REF INT,REF INT,REF MODE335,REF REF MODE32,MODE53,INT)  */
struct A68t336 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t336  A68_336 ;    /* UNION(INT,VOID)  */
struct A68t335{
A68_INT  Type;
A_PAD_INT(PAD_128)
struct A68t336  Val;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(INT,MODE336)  */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE244) VOID */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t166 *),(struct A68t166 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE166) VOID */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t198 *,struct A68t199 ),(struct A68t198 *,struct A68t199 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE198,MODE199) VOID */

A_PROCEDURE(A68_BOOL ,A68t341,(struct A68t185 ,A68_BOOL ),(struct A68t185 ,A68_BOOL ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE185,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE172,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t222 ,struct A68t172 *),(struct A68t222 ,struct A68t172 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE222) MODE172 */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE222) VOID */

A_PROCEDURE(A68_BOOL ,A68t345,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE185) BOOL */

A_PROCEDURE(A68_INT ,A68t346,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE185) INT */
struct A68t347{
struct A68t327  Test;
struct A68t185  Integer;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE327,MODE185)  */

A_PROCEDURE(A68_BOOL ,A68t348,(struct A68t327 ,struct A68t327 ),(struct A68t327 ,struct A68t327 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE327,MODE327) BOOL */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t327 ,struct A68t327 ,struct A68t327 *),(struct A68t327 ,struct A68t327 ,struct A68t327 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE327,MODE327) MODE327 */

A_PROCEDURE(A68_BOOL ,A68t350,(struct A68t328 ,struct A68t185 *,struct A68t185 ,A68_INT ,struct A68t262 ),(struct A68t328 ,struct A68t185 *,struct A68t185 ,A68_INT ,struct A68t262 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE328,REF MODE185,MODE185,INT,MODE262) BOOL */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t172 ,struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_INT ,struct A68t327 *),(struct A68t172 ,struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_INT ,struct A68t327 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE172,MODE172,BOOL,BOOL,BOOL,INT) MODE327 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t172 ,struct A68t172 ,struct A68t327 *),(struct A68t172 ,struct A68t172 ,struct A68t327 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE172,MODE172) MODE327 */

A_PROCEDURE(A68_BOOL ,A68t353,(struct A68t172 ,struct A68t172 ),(struct A68t172 ,struct A68t172 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE172,MODE172) BOOL */

A_PROCEDURE(A68_BOOL ,A68t354,(struct A68t172 ,struct A68t172 ,A68_INT ,A68_BOOL ),(struct A68t172 ,struct A68t172 ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE172,MODE172,INT,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t355,(struct A68t172 ,struct A68t172 ,A68_BOOL ),(struct A68t172 ,struct A68t172 ,A68_BOOL ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE172,MODE172,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t222 ,struct A68t222 ,struct A68t327 *),(struct A68t222 ,struct A68t222 ,struct A68t327 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE222,MODE222) MODE327 */

A_PROCEDURE(A68_BOOL ,A68t357,(struct A68t198 *,struct A68t244 *),(struct A68t198 *,struct A68t244 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE198,REF MODE244) BOOL */

A_PROCEDURE(A68_INT ,A68t358,(struct A68t167 *,struct A68t167 *,A68_BOOL ),(struct A68t167 *,struct A68t167 *,A68_BOOL ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE167,REF MODE167,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t167 *,struct A68t166 *),(struct A68t167 *,struct A68t166 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE167,REF MODE166) VOID */

A_PROCEDURE(A68_BOOL ,A68t360,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE172) BOOL */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t172 ,struct A68t248 *),(struct A68t172 ,struct A68t248 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE172) MODE248 */

A_PROCEDURE(A68_BOOL ,A68t362,(struct A68t222 ,A68_INT ),(struct A68t222 ,A68_INT ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE222,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t363,(struct A68t172 ,A68_INT ),(struct A68t172 ,A68_INT ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE172,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t198 *,struct A68t293 **,struct A68t244 **),(struct A68t198 *,struct A68t293 **,struct A68t244 **,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE198,REF REF MODE293,REF REF MODE244) VOID */

A_PROCEDURE(A68_INT ,A68t365,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE172) INT */

A_PROCEDURE(struct A68t172 *,A68t366,(struct A68t172 ,A68_INT ),(struct A68t172 ,A68_INT ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE172,INT) REF MODE172 */

A_PROCEDURE(A68_BOOL ,A68t367,(struct A68t172 ,struct A68t293 *),(struct A68t172 ,struct A68t293 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE172,REF MODE293) BOOL */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t293 **,struct A68t244 **,struct A68t166 **),(struct A68t293 **,struct A68t244 **,struct A68t166 **,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF REF MODE293,REF REF MODE244,REF REF MODE166) VOID */

A_PROCEDURE(A68_BOOL ,A68t369,(A68_VC ,struct A68t293 *,struct A68t244 *),(A68_VC ,struct A68t293 *,struct A68t244 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE26,REF MODE293,REF MODE244) BOOL */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t268 ,A68_BOOL ),(struct A68t268 ,A68_BOOL ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE268,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t268 ,A68_INT ,struct A68t185 ,struct A68t185 *),(struct A68t268 ,A68_INT ,struct A68t185 ,struct A68t185 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE268,INT,MODE185) MODE185 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t268 ,A68_INT ,struct A68t172 ,struct A68t172 *),(struct A68t268 ,A68_INT ,struct A68t172 ,struct A68t172 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE268,INT,MODE172) MODE172 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t172 ,struct A68t185 ,struct A68t172 *),(struct A68t172 ,struct A68t185 ,struct A68t172 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE172,MODE185) MODE172 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t172 ,struct A68t172 ,A68_BOOL *,A68_INT *,struct A68t172 *),(struct A68t172 ,struct A68t172 ,A68_BOOL *,A68_INT *,struct A68t172 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE172,MODE172,REF BOOL,REF INT) MODE172 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t172 ,struct A68t185 ,struct A68t185 ,struct A68t185 *,struct A68t185 *,struct A68t172 *),(struct A68t172 ,struct A68t185 ,struct A68t185 ,struct A68t185 *,struct A68t185 *,struct A68t172 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE172,MODE185,MODE185,REF MODE185,REF MODE185) MODE172 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t172 ,struct A68t172 ,struct A68t185 ,struct A68t172 *),(struct A68t172 ,struct A68t172 ,struct A68t185 ,struct A68t172 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE172,MODE172,MODE185) MODE172 */

A_PROCEDURE(A68_VOID ,A68t377,(A68_INT ,struct A68t244 *,struct A68t166 *),(A68_INT ,struct A68t244 *,struct A68t166 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(INT,REF MODE244,REF MODE166) VOID */

A_PROCEDURE(A68_BOOL ,A68t378,(A68_INT ),(A68_INT ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t244 *,A68t379,(A68_VC ),(A68_VC ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE26) REF MODE244 */

A_PROCEDURE(struct A68t166 *,A68t380,(A68_VC ,struct A68t166 *),(A68_VC ,struct A68t166 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE26,REF MODE166) REF MODE166 */

A_PROCEDURE(A68_VOID ,A68t381,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE26,MODE199) VOID */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t171 *,A68_INT ,struct A68t167 *),(struct A68t171 *,A68_INT ,struct A68t167 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE171,INT,REF MODE167) VOID */

A_PROCEDURE(struct A68t244 *,A68t383,(A68_VC ,struct A68t293 *,A68_BOOL ),(A68_VC ,struct A68t293 *,A68_BOOL ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE26,REF MODE293,BOOL) REF MODE244 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t244 *,struct A68t293 *),(struct A68t244 *,struct A68t293 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE244,REF MODE293) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t166 *,struct A68t293 *),(struct A68t166 *,struct A68t293 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE166,REF MODE293) VOID */

A_PROCEDURE(struct A68t166 *,A68t386,(A68_VC ,struct A68t166 *,struct A68t293 *,A68_BOOL ),(A68_VC ,struct A68t166 *,struct A68t293 *,A68_BOOL ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE26,REF MODE166,REF MODE293,BOOL) REF MODE166 */

A_PROCEDURE(A68_BOOL ,A68t387,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t388,(A68_INT ,A68_INT ,struct A68t251 *),(A68_INT ,A68_INT ,struct A68t251 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(INT,INT,REF MODE251) BOOL */

A_PROCEDURE(struct A68t167 *,A68t389,(A68_VC ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ),(A68_VC ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE26,BOOL,INT,INT,INT) REF MODE167 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t171 *,struct A68t167 *),(struct A68t171 *,struct A68t167 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(REF MODE171,REF MODE167) VOID */

A_PROCEDURE(struct A68t171 *,A68t391,(struct A68t244 *,struct A68t172 ),(struct A68t244 *,struct A68t172 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(REF MODE244,MODE172) REF MODE171 */

A_PROCEDURE(A68_BOOL ,A68t392,(struct A68t169 *),(struct A68t169 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE169) BOOL */

A_PROCEDURE(struct A68t169 *,A68t393,(struct A68t169 *),(struct A68t169 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE169) REF MODE169 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t169 *,struct A68t287 *),(struct A68t169 *,struct A68t287 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE169,REF MODE287) VOID */
struct A68t396 ;

A_PROCEDURE(struct A68t396 ,A68t395,(struct A68t287 *),(struct A68t287 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE287) MODE396 */
A_ISTRUCT(A68_INT ,2,A68t396);
typedef struct A68t396  A68_396 ;    /* STRUCT 2 INT */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t172 ,A68_BOOL ,struct A68t210 *),(struct A68t172 ,A68_BOOL ,struct A68t210 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE172,BOOL) MODE210 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t210 *,A68_BOOL ,A68_BOOL ),(struct A68t210 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE210,BOOL,BOOL) VOID */

A_PROCEDURE(A68_BOOL ,A68t399,(struct A68t171 *),(struct A68t171 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE171) BOOL */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t214 *,struct A68t210 *),(struct A68t214 *,struct A68t210 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE214) MODE210 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t210 *,struct A68t185 ,struct A68t185 ,struct A68t210 *),(struct A68t210 *,struct A68t185 ,struct A68t185 ,struct A68t210 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE210,MODE185,MODE185) MODE210 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t172 ,A68_INT ,struct A68t172 *),(struct A68t172 ,A68_INT ,struct A68t172 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE172,INT) MODE172 */

A_PROCEDURE(A68_BOOL ,A68t403,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE210) BOOL */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t210 *,struct A68t218 ,A68_BOOL ),(struct A68t210 *,struct A68t218 ,A68_BOOL ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE210,MODE218,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t317 *,struct A68t210 ,struct A68t210 *),(struct A68t317 *,struct A68t210 ,struct A68t210 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE317,MODE210) MODE210 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t244 *,struct A68t317 *,struct A68t210 ,struct A68t210 *),(struct A68t244 *,struct A68t317 *,struct A68t210 ,struct A68t210 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE244,REF MODE317,MODE210) MODE210 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t210 *,A68_INT ,A68_INT ,struct A68t210 *),(struct A68t210 *,A68_INT ,A68_INT ,struct A68t210 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(REF MODE210,INT,INT) MODE210 */

A_PROCEDURE(A68_BOOL ,A68t408,(struct A68t172 ,struct A68t172 ,A68_INT ),(struct A68t172 ,struct A68t172 ,A68_INT ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE172,MODE172,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t171 *,A68_BOOL ,A68_BOOL ),(struct A68t171 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE171,BOOL,BOOL) VOID */

A_PROCEDURE(A68_INT ,A68t411,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE246) INT */

A_PROCEDURE(A68_VOID ,A68t412,(A68_INT ,struct A68t246 *,A68_VC *),(A68_INT ,struct A68t246 *,A68_VC *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(INT,REF MODE246) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE246) VOID */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t167 *,A68_BOOL ),(struct A68t167 *,A68_BOOL ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE167,BOOL) VOID */

A_PROCEDURE(struct A68t268 *,A68t415,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE167) REF MODE268 */

A_PROCEDURE(struct A68t212 *,A68t416,(struct A68t171 *,struct A68t268 ),(struct A68t171 *,struct A68t268 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE171,MODE268) REF MODE212 */

A_PROCEDURE(struct A68t212 *,A68t417,(struct A68t211 *,A68_VC ),(struct A68t211 *,A68_VC ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE211,REF MODE26) REF MODE212 */

A_PROCEDURE(A68_BOOL ,A68t418,(struct A68t172 ,struct A68t172 ,struct A68t265 *),(struct A68t172 ,struct A68t172 ,struct A68t265 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE172,MODE172,REF MODE265) BOOL */

A_PROCEDURE(A68_VOID ,A68t419,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t422 ,A68t421);
typedef struct A68t421  A68_421 ;    /* VECTOR [] MODE422 */
struct A68t422{
A68_INT  Number;
A_PAD_INT(PAD_129)
A68_BITS  Class;
A_PAD_BITS(PAD_130)
A68_VC  Text;
};
typedef struct A68t422  A68_422 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t420{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t421  Setup;
};
typedef struct A68t420  A68_420 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE421)  */

A_PROCEDURE(A68_VOID ,A68t423,(A68_BOOL ,struct A68t420 *),(A68_BOOL ,struct A68t420 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(BOOL) MODE420 */
A_VECTOR(A68_VC ,A68t424);
typedef struct A68t424  A68_424 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t46 ,struct A68t424 *),(struct A68t46 ,struct A68t424 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE46) MODE424 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t424 ,struct A68t46 *),(struct A68t424 ,struct A68t46 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE424) MODE46 */
struct A68t428 ;

A_PROCEDURE(A68_BOOL ,A68t427,(struct A68t428 ),(struct A68t428 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE428) BOOL */
struct A68t428 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t428  A68_428 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t429,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t430,(A68_INT ,struct A68t420 ,struct A68t98 *),(A68_INT ,struct A68t420 ,struct A68t98 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(INT,MODE420) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t431,(struct A68t98 ,struct A68t420 ),(struct A68t98 ,struct A68t420 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE98,MODE420) BOOL */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_VOID ,A68t433,(A68_BOOL ,struct A68t333 *),(A68_BOOL ,struct A68t333 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(BOOL) MODE333 */
struct A68t435 ;
struct A68t436 ;
struct A68t437 ;
struct A68t438 ;

A_PROCEDURE(A68_VOID ,A68t434,(A68_INT ,struct A68t334 ,struct A68t53 ,struct A68t129 ,struct A68t436 ,struct A68t332 ,struct A68t437 ,struct A68t438 ,struct A68t435 *),(A68_INT ,struct A68t334 ,struct A68t53 ,struct A68t129 ,struct A68t436 ,struct A68t332 ,struct A68t437 ,struct A68t438 ,struct A68t435 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(INT,MODE334,MODE53,MODE129,MODE436,MODE332,MODE437,MODE438) MODE435 */
struct A68t435 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t435  A68_435 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t335 *),(struct A68t335 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC MODE335 */

A_PROCEDURE(A68_VOID ,A68t437,(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(INT,INT,MODE336,INT) VOID */

A_PROCEDURE(A68_INT ,A68t438,(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(INT,INT,MODE336,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t439,(A68_INT ,struct A68t333 ),(A68_INT ,struct A68t333 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(INT,MODE333) BOOL */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t441,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t442);
typedef struct A68t442  A68_442 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE85) VOID */
A_ISTRUCT(A68_INT ,3,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 3 INT */
A_ISTRUCT(struct A68t263 ,2,A68t445);
typedef struct A68t445  A68_445 ;    /* STRUCT 2 MODE263 */
A_ISTRUCT(A68_CHAR ,7,A68t446);
typedef struct A68t446  A68_446 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(struct A68t263 ,5,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 5 MODE263 */
A_ISTRUCT(struct A68t263 ,6,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 6 MODE263 */
A_ISTRUCT(struct A68t263 ,3,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 3 MODE263 */
struct A68t450 { A68_INT mode; union {
struct A68t256 * mode1;
struct A68t257 * mode2;
} data; };
typedef struct A68t450  A68_450 ;    /* UNION(REF MODE256,REF MODE257)  */
A_ISTRUCT(A68_CHAR ,2,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t452,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(BOOL) MODE54 */
A_ISTRUCT(A68_INT ,5,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 5 INT */
A_ISTRUCT(A68_INT ,4,A68t454);
typedef struct A68t454  A68_454 ;    /* STRUCT 4 INT */
A_ISTRUCT(A68_CHAR ,9,A68t455);
typedef struct A68t455  A68_455 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_INT ,6,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 6 INT */
A_ISTRUCT(A68_CHAR ,11,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t458);
typedef struct A68t458  A68_458 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t459,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(BOOL) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t460);
typedef struct A68t460  A68_460 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t461,(A68_BOOL ,struct A68t221 *),(A68_BOOL ,struct A68t221 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(BOOL) MODE221 */
A_ISTRUCT(A68_CHAR ,6,A68t462);
typedef struct A68t462  A68_462 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 8 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from sidanalyser --- */
/* --- End of imports from sidanalyser --- */


/* --- Imports from messageproc --- */
extern A68_46  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from compileproc --- */
extern A68_VC  ZHPAELA_compsymb;
extern A68_VC  CIPAELA_ident;
extern A68_VC  JIPAELA_string;
extern A68_INT  LIPAELA_stringsize;
extern A68_246 * XIPAELA_nonames;
extern A68_246 * YIPAELA_namestack;
extern A68_BOOL  KJPAELA_nofltmess;
extern A68_CHAR  LJPAELA_charval;
extern A68_BOOL  MJPAELA_syntaxerror;
extern A68_321  UJPAELA_ivread;
#define XJPAELA_bold 6
#define YJPAELA_letter 3
#define ZJPAELA_digit 4
extern A68_INT  CKPAELA_t1;
extern A68_INT  DKPAELA_sfnno;
extern A68_INT  EKPAELA_ctypeno;
extern A68_INT  FKPAELA_cfnno;
extern A68_INT  GKPAELA_cintno;
extern A68_INT  HKPAELA_cctypeno;
extern A68_172  JKPAELA_fp1;
extern A68_172  KKPAELA_fp2;
extern A68_VC  LKPAELA_fp3;
extern A68_VC  MKPAELA_fp4;
extern A68_167  NKPAELA_fp7;
extern A68_167  OKPAELA_fp8;
extern A68_144  PKPAELA_fp9;
extern A68_185  QKPAELA_fp0;
extern A68_185  RKPAELA_fp5;
extern A68_185  SKPAELA_fp6;
extern A68_185  TKPAELA_fpcolon;
extern A68_222  UKPAELA_fpopen;
extern A68_222  VKPAELA_fpclose;
extern A68_BOOL  YKPAELA_exitcomp;
extern A68_244 * ZKPAELA_kids;
extern A68_166 * ALPAELA_kfns;
extern A68_167 * JLPAELA_fndec;
extern A68_167 * BLPAELA_fndec_flt;
extern A68_171 * KLPAELA_decs;
extern A68_INT  LLPAELA_vss;
extern A68_INT  MLPAELA_maxvss;
extern A68_244 * OLPAELA_ids;
extern A68_166 * PLPAELA_fns;
extern A68_BOOL  QLPAELA_inarith;
extern A68_172  RLPAELA_type;
extern A68_185  SLPAELA_integer;
extern A68_185  TLPAELA_integer1;
extern A68_198  VLPAELA_idinfo;
extern A68_INT  BMPAELA_which;
extern A68_209 * DMPAELA_makeint;
extern A68_VC  CMPAELA_lastop;
extern A68_175 * EMPAELA_sts;
extern A68_265 * GMPAELA_fncallstack;
extern A68_BOOL  HMPAELA_errorswitch;
extern A68_INT  KMPAELA_macsort;
extern A68_INT  JMPAELA_fndecsort;
extern A68_BOOL  IMPAELA_macro;
extern A68_VC  LMPAELA_id1;
extern A68_VC  MMPAELA_lastcall;
extern A68_229 * NMPAELA_calts;
extern A68_222  OMPAELA_ctype;
extern A68_228 * PMPAELA_cstr;
extern A68_294 * DNPAELA_currentstate;
extern A68_293 * ENPAELA_scopestack;
extern A68_280 * FNPAELA_lastops;
extern A68_280 * GNPAELA_lastcalls;
extern A68_CHAR  HNPAELA_charval1;
extern A68_251 * INPAELA_charalts;
extern A68_INT  JNPAELA_delaytype;
extern A68_INT  PNPAELA_scope;
extern A68_249 * TNPAELA_palts1;
extern A68_249 * UNPAELA_paltstack;
extern A68_205  VNPAELA_attrid;
extern A68_200  WNPAELA_intid;
extern A68_201  XNPAELA_typeid;
extern A68_202  YNPAELA_ctypeid;
extern A68_198 * AOPAELA_prangedec;
extern A68_292 * BOPAELA_sopstack;
extern A68_175 * COPAELA_typestack;
extern A68_209 * DOPAELA_integerstack;
extern A68_291 * EOPAELA_idinfostack;
extern A68_289 * FOPAELA_sucstack;
extern A68_317 * ZNPAELA_iddecs;
extern A68_290 * IOPAELA_casestack;
extern A68_144  JOPAELA_ctname;
extern A68_VC  KOPAELA_fna;
extern A68_VC  LOPAELA_fnb;
extern A68_244 * MOPAELA_decids;
extern A68_54  NOPAELA_charcheck;
extern A68_322  VOPAELA_outints;
extern A68_43  WOPAELA_outid;
extern A68_43  XOPAELA_outstring;
extern A68_INT  APPAELA_vnno;
extern A68_117  BPPAELA_nextkept;
extern A68_323  EPPAELA_nextimport;
extern A68_324  FPPAELA_setcontext;
extern A68_163  JPPAELA_charset;
extern A68_327  ASRAELA_true;
extern A68_327  BSRAELA_false;
extern A68_327  CSRAELA_unknown;
extern A68_328  BWRAELA_checkle;
extern A68_328  CWRAELA_checkge;
extern A68_INT  KNPAELA_sampletype;
extern A68_INT  LNPAELA_timetype;
#define MNPAELA_ints1 1
#define NNPAELA_ints2 2
extern A68_BOOL  RNPAELA_intervalok;
extern A68_BOOL  SNPAELA_tfaster;
extern A68_INT  ONPAELA_errormessage;
extern A68_268  WLPAELA_paramfncall;
extern A68_VOID  MQPAELA_syfault(A68_INT ,struct A68t46 );
extern A68_VOID  UQPAELA_fault(A68_INT ,struct A68t46 );
extern A68_VOID  XQPAELA_abort(A68_INT ,struct A68t46 );
extern A68_VOID  AYPAELA_read(void);
extern A68_VOID  PYPAELA_inkept(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 );
extern A68_VOID  SYPAELA_findkid(A68_VC ,A68_198 *);
extern A68_244 * BZPAELA_newkid(struct A68t198 );
extern A68_166 * IZPAELA_newkfn(struct A68t167 *);
extern A68_VOID  SZPAELA_faultp(A68_INT ,struct A68t262 );
extern A68_VOID  VZPAELA_namefaultp(A68_INT ,struct A68t262 );
extern A68_VOID  HBQAELA_syntaxerrmess(struct A68t333 );
extern A68_VOID  XBQAELA_fltmessage(struct A68t198 );
extern A68_VOID  OPQAELA_outexttypes(struct A68t244 *);
extern A68_VOID  JGQAELA_outextints(struct A68t244 *);
extern A68_VOID  IHQAELA_outextctypes(struct A68t244 *);
extern A68_VOID  UHQAELA_unscopeids(struct A68t244 *);
extern A68_VOID  PTQAELA_outextfns(struct A68t166 *);
extern A68_VOID  UIQAELA_setidunn(struct A68t198 *,struct A68t199 );
extern A68_BOOL  MJQAELA_loadint(struct A68t185 ,A68_BOOL );
extern A68_VOID  HLQAELA_loadtype(struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_343  FUQAELA_ctypetotype;
extern A68_VOID  HUQAELA_loadctype(struct A68t222 );
extern A68_VOID  CDRAELA_simplify(struct A68t185 ,A68_BOOL ,A68_185 *);
extern A68_VOID  YTQAELA_num_names_extfns(struct A68t166 *);
extern A68_BOOL  LERAELA_isintcheck(struct A68t185 );
extern A68_INT  HDRAELA_giveint(struct A68t185 );
extern A68_BOOL  LSRAELA_(struct A68t327 ,struct A68t327 );
extern A68_BOOL  PZRAELA_testintegers(struct A68t328 ,struct A68t185 *,struct A68t185 ,A68_INT ,struct A68t262 );
extern A68_VOID  JASAELA_checkequals(struct A68t172 ,struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_INT ,A68_327 *);
extern A68_VOID  NQSAELA_typetest(struct A68t172 ,struct A68t172 ,A68_327 *);
extern A68_BOOL  SQSAELA_equals(struct A68t172 ,struct A68t172 );
extern A68_BOOL  ZQSAELA_specequals(struct A68t172 ,struct A68t172 ,A68_INT ,A68_BOOL );
extern A68_BOOL  FRSAELA_checktypeeq(struct A68t172 ,struct A68t172 ,A68_BOOL );
extern A68_VOID  JSSAELA_checkdisjoint(struct A68t222 ,struct A68t222 ,A68_327 *);
extern A68_BOOL  GUSAELA_samespecid(struct A68t198 *,struct A68t244 *);
extern A68_INT  LWSAELA_samespecfns(struct A68t167 *,struct A68t167 *,A68_BOOL );
extern A68_VOID  TYSAELA_checkspecfns(struct A68t167 *,struct A68t166 *);
extern A68_BOOL  NZSAELA_isprimrange(struct A68t172 );
extern A68_VOID  VZSAELA_primrange(struct A68t172 ,A68_248 *);
extern A68_BOOL  GATAELA_isprimchar_t(struct A68t172 );
extern A68_BOOL  SATAELA_arithtype(struct A68t172 );
extern A68_BOOL  KBTAELA_containsfntype(struct A68t172 );
extern A68_BOOL  ZBTAELA_containssort(struct A68t222 ,A68_INT );
extern A68_BOOL  VDTAELA_thasvmno(struct A68t172 ,A68_INT );
extern A68_VOID  BJQAELA_insert_idinfo(struct A68t198 *,struct A68t293 **,struct A68t244 **);
extern A68_INT  WFTAELA_primtypeno(struct A68t172 );
extern A68_172 * FGTAELA_unn(struct A68t172 ,A68_INT );
extern A68_BOOL  MRUAELA_containslocaltype(struct A68t172 ,struct A68t293 *);
extern A68_VOID  KLVAELA_unscope(struct A68t293 **,struct A68t244 **,struct A68t166 **);
extern A68_BOOL  CFTAELA_id_outside_if(A68_VC ,struct A68t293 *,struct A68t244 *);
extern A68_370  RBRAELA_outmparams;
extern A68_VOID  UMTAELA_substtype(struct A68t268 ,A68_INT ,struct A68t172 ,A68_172 *);
extern A68_VOID  BDUAELA_conc_type(struct A68t172 ,struct A68t172 ,A68_BOOL *,A68_INT *,A68_172 *);
extern A68_VOID  ESTAELA_trimorindex(struct A68t172 ,struct A68t185 ,struct A68t185 ,struct A68t185 *,struct A68t185 *,A68_172 *);
extern A68_VOID  JCUAELA_cond_type(struct A68t172 ,struct A68t172 ,struct A68t185 ,A68_172 *);
extern A68_VOID  JKUAELA_reformcheck(struct A68t172 ,struct A68t172 ,A68_327 *);
extern A68_VOID  CLUAELA_setup_compilefn(void);
extern A68_VOID  PLUAELA_reset_compilefn(void);
extern A68_VOID  XLUAELA_default(A68_INT ,struct A68t244 *,struct A68t166 *);
extern A68_BOOL  KMUAELA_charunused(A68_INT );
extern A68_244 * HSUAELA_findid(A68_VC );
extern A68_166 * TSUAELA_findfn(A68_VC ,struct A68t166 *);
extern A68_VOID  BTUAELA_newid(A68_VC ,struct A68t199 );
extern A68_VOID  MTUAELA_newscope(A68_INT ,struct A68t244 *,struct A68t166 *);
extern A68_BOOL  GUUAELA_testequals(struct A68t172 ,struct A68t172 ,A68_BOOL );
extern A68_VOID  GXUAELA_makedecs(struct A68t171 *,A68_INT ,struct A68t167 *);
extern A68_244 * KQUAELA_id_in_scope(A68_VC ,struct A68t293 *,A68_BOOL );
extern A68_BOOL  EQUAELA_scope_start(A68_INT );
extern A68_VOID  RTUAELA_usedid(struct A68t244 *,struct A68t293 *);
extern A68_VOID  ZTUAELA_usedfn(struct A68t166 *,struct A68t293 *);
extern A68_166 * YQUAELA_fn_in_scope(A68_VC ,struct A68t166 *,struct A68t293 *,A68_BOOL );
extern A68_VOID  WOVAELA_pushvss(A68_INT );
extern A68_BOOL  PMUAELA_check_charrange(A68_INT ,A68_INT );
extern A68_BOOL  POUAELA_charsubrange(A68_INT ,A68_INT ,struct A68t251 *);
extern A68_172 * GOPAELA_rt;
extern A68_172  HOPAELA_t;
extern A68_INT  ULPAELA_k;
extern A68_328  DWRAELA_checkeq;
extern A68_167 * UPUAELA_defaultfndec(A68_VC ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT );
extern A68_175 * QOPAELA_mltype;
extern A68_175 ** ROPAELA_nextmltype;
extern A68_281 * SOPAELA_nilmultlets;
extern A68_281 * TOPAELA_multlets;
extern A68_281 * UOPAELA_multiassign;
extern A68_VOID  RLVAELA_makevardecs(struct A68t171 *,struct A68t167 *);
extern A68_171 * ZMVAELA_decs_setup(struct A68t244 *,struct A68t172 );
extern A68_BOOL  QPVAELA_anyexplicit(struct A68t169 *);
extern A68_169 * UPVAELA_nextexpl_par(struct A68t169 *);
extern A68_BOOL  QNPAELA_macroexpected;
extern A68_VOID  IPVAELA_add_mparam(struct A68t169 *,struct A68t287 *);
extern A68_396  YOVAELA_next_mparamno(struct A68t287 *);
extern A68_VOID  TUUAELA_join_setup(struct A68t172 ,A68_BOOL ,A68_210 *);
extern A68_VOID  HFVAELA_check_off(struct A68t210 *,A68_BOOL ,A68_BOOL );
extern A68_172  WMPAELA_jointype;
extern A68_214 * SMPAELA_joinst;
extern A68_276 * QMPAELA_joinstack;
extern A68_210  VMPAELA_joinup;
extern A68_BOOL  NDVAELA_check_if_output_joined(struct A68t171 *);
extern A68_VOID  MFVAELA_joinsttorow(struct A68t214 *,A68_210 *);
extern A68_VOID  UKVAELA_jointrim(struct A68t210 *,struct A68t185 ,struct A68t185 ,A68_210 *);
extern A68_BOOL  ANPAELA_lhsjoin;
extern A68_BOOL  ZMPAELA_ioid;
extern A68_BOOL  BNPAELA_nooutput;
extern A68_BOOL  CNPAELA_nonunitbody;
extern A68_VOID  AITAELA_setiotype(struct A68t172 ,A68_INT ,A68_172 *);
extern A68_220 * RMPAELA_joinvarstack;
extern A68_BOOL  HDTAELA_ihasvmno(struct A68t185 );
extern A68_283 * AMPAELA_decnocheck;
extern A68_BOOL  FAVAELA_has_join_check(struct A68t210 *);
extern A68_VOID  AEVAELA_mark_join(struct A68t210 *,struct A68t218 ,A68_BOOL );
extern A68_BOOL  WCVAELA_has_fntype(struct A68t210 *);
extern A68_VOID  UTVAELA_varmult_joinup(struct A68t317 *,struct A68t210 ,A68_210 *);
extern A68_277 * UMPAELA_joinmultstack;
extern A68_BOOL  NFTAELA_repl_local_make(A68_VC ,struct A68t293 *,struct A68t244 *);
extern A68_VOID  TUVAELA_replicate_joinup(struct A68t244 *,struct A68t317 *,struct A68t210 ,A68_210 *);
extern A68_BOOL  DHTAELA_isvoid(struct A68t172 );
extern A68_VOID  PIVAELA_gettrim(struct A68t210 *,A68_INT ,A68_INT ,A68_210 *);
extern A68_VOID  TWVAELA_rowtype(struct A68t172 ,A68_172 *);
extern A68_408  CASAELA_equiv_types;
extern A68_INT  NJPAELA_errorrecov;
extern A68_VOID  EWSAELA_specsflt(A68_INT );
extern A68_246 * ZIPAELA_paramnamestack;
extern A68_VOID  BUDAELA_ddecs_type(struct A68t171 *,A68_172 *);
extern A68_VOID  UBRAELA_outfncall(struct A68t268 ,A68_BOOL );
extern A68_INT  IKPAELA_cattrno;
extern A68_VOID  XQQAELA_outattrs(struct A68t170 );
extern A68_VC  EJPAELA_atid;
extern A68_170  FJPAELA_attr;
extern A68_256 * GJPAELA_attrstr;
extern A68_256 ** HJPAELA_nextattr;
extern A68_VOID  QGTAELA_addclassname(A68_VC );
extern A68_246 * CJPAELA_classnames;
extern A68_VOID  WGQAELA_outextattrs(struct A68t244 *);
extern A68_246 * BJPAELA_strings;
extern A68_246 ** DJPAELA_nextstring;
extern A68_287 * FMPAELA_fnstack;
extern A68_VOID  BSQAELA_outddecs(struct A68t171 *,A68_BOOL ,A68_BOOL );
extern A68_VOID  CRPAELA_nofault(A68_INT ,struct A68t46 );
extern A68_INT  CJRAELA_length(struct A68t246 *);
extern A68_VOID  IJRAELA_joinstrings(A68_INT ,struct A68t246 *,A68_VC *);
extern A68_VOID  OQQAELA_outstringlist(struct A68t246 *);
extern A68_VOID  QSQAELA_outfndec(struct A68t167 *,A68_BOOL );
extern A68_268 * ZPVAELA_fncall_flt(struct A68t167 *);
extern A68_211  XLPAELA_portinfo;
extern A68_212 * LVVAELA_port_setup(struct A68t171 *,struct A68t268 );
extern A68_284 * YLPAELA_portstack;
extern A68_212 * NWVAELA_get_port_info(struct A68t211 *,A68_VC );
extern A68_BOOL  XKUAELA_impl_macro(struct A68t172 ,struct A68t172 ,struct A68t265 *);
/* --- End of imports from compileproc --- */


/* --- Imports from compmodes --- */
extern A68_INT  EJCAELA_textstart;
#define DKCAELA_cnull 22
#define EKCAELA_calt 23
#define FKCAELA_vconc 24
#define GKCAELA_vprim 25
#define HKCAELA_vprimi 26
#define IKCAELA_vname 27
#define JKCAELA_vtrim 28
#define KKCAELA_vindex 29
#define LKCAELA_vcallm 30
#define MKCAELA_vcalld 31
#define NKCAELA_vunn 32
#define OKCAELA_vsharp 33
#define PKCAELA_vrow 34
#define QKCAELA_vcase 35
#define RKCAELA_vquery 36
#define SKCAELA_vcoll 37
#define TKCAELA_vif 38
#define VKCAELA_vvarmult 40
#define WKCAELA_vconst 41
#define XKCAELA_end 42
#define YKCAELA_fnstart 43
#define ZKCAELA_fnend 44
#define ALCAELA_bmake 45
#define BLCAELA_bjoin 46
#define CLCAELA_bfor 47
#define DLCAELA_typename 48
#define ELCAELA_biddec 49
#define HLCAELA_idelay 52
#define ILCAELA_adelay 53
#define JLCAELA_pt 54
#define KLCAELA_ptflt 55
#define LLCAELA_str 56
#define MLCAELA_dummy 58
#define NLCAELA_velseof 59
#define OLCAELA_velse 60
#define PLCAELA_vfi 61
#define QLCAELA_ram 62
#define YLCAELA_kilend 72
#define RLCAELA_vvarmultend 64
#define SLCAELA_ktype 65
#define TLCAELA_kint 66
#define ULCAELA_kfn 67
#define VLCAELA_kconst 68
#define XLCAELA_kend 70
#define ZLCAELA_reform 74
#define FMCAELA_vseq 80
#define GMCAELA_vpar 81
#define HMCAELA_vdynindex 82
#define OMCAELA_parend 89
#define PMCAELA_seqend 90
#define QMCAELA_seqnull 91
#define RMCAELA_seqvoid 92
#define SMCAELA_seqlet 93
#define TMCAELA_seqvar 94
#define UMCAELA_seqper 95
#define VMCAELA_seqassign 96
#define WMCAELA_seqcase 97
#define XMCAELA_seqif 98
#define YMCAELA_seqvarmult 99
#define ENCAELA_seqbecomes 105
#define FNCAELA_seqassignend 106
#define HNCAELA_seqelse 108
#define INCAELA_seqfi 109
#define JNCAELA_seqvarmultend 110
#define KNCAELA_vthen 111
#define LNCAELA_seqthen 112
#define GNCAELA_seqrow 107
#define HJCAELA_zero 0
#define WNCAELA_multjoin 123
#define UNCAELA_intname 121
#define PNCAELA_inull 116
#define ONCAELA_imported 115
#define NNCAELA_cquery 114
#define CMCAELA_vcelse 77
#define DMCAELA_vnormal 78
#define EMCAELA_vnoelse 79
#define IMCAELA_vbracket 83
#define MMCAELA_biop 87
#define EOCAELA_vstring 135
#define FOCAELA_vprimch 136
#define GOCAELA_vprimst 137
#define JOCAELA_constname 140
#define GPCAELA_diplus 1
#define HPCAELA_diminus 2
#define MPCAELA_constint 1
#define NPCAELA_constint2 2
#define WPCAELA_inseq 1
#define XPCAELA_inpar 2
#define YPCAELA_inconst 3
#define ZPCAELA_inother 4
#define OPCAELA_const2int 3
#define PPCAELA_const2int2 4
#define QPCAELA_idelayintcon 5
extern A68_INT  VPCAELA_stringindex;
extern A68_BOOL  AQCAELA_caseelseof;
#define NMCAELA_alien 88
#define ZMCAELA_sample 100
#define OOCAELA_faster 145
#define POCAELA_slower 146
#define TOCAELA_vreplace 150
extern A68_249 * BQCAELA_nilpalts;
extern A68_244 * CQCAELA_nilids;
extern A68_175 * DQCAELA_nilst;
extern A68_172 * EQCAELA_niltype;
extern A68_171 * FQCAELA_nildecs;
extern A68_169 ** GQCAELA_nilnextmp;
extern A68_169 * IQCAELA_nilmparams;
extern A68_229 * JQCAELA_nilcalts;
extern A68_251 * LQCAELA_nilcharalts;
extern A68_287 * TQCAELA_nilfnstack;
extern A68_208  CRCAELA_notdec;
extern A68_182  DRCAELA_flt;
extern A68_207  HRCAELA_rec;
extern A68_230  IRCAELA_cnullt;
extern A68_194  JRCAELA_ip;
extern A68_183  KRCAELA_unset;
#define DSCAELA_recovertok 10
#define ESCAELA_outputtok 26
#define FSCAELA_mactok 28
#define GSCAELA_typetok 30
#define HSCAELA_fntok 31
#define ISCAELA_lettok 32
#define KSCAELA_maketok 33
#define LSCAELA_jointok 38
#define MSCAELA_fortok 71
#define NSCAELA_importstok 66
#define OSCAELA_finishtok 41
#define PSCAELA_eoftok 72
#define QSCAELA_vartok 73
#define RSCAELA_seqtok 75
#define SSCAELA_semitok 77
#define CTCAELA_stoptok 20
#define PTCAELA_slashtok 11
extern A68_256 * MQCAELA_nilattrstr;
extern A68_246 * NQCAELA_nilstringlist;
extern A68_259  MRCAELA_attrnull;
#define WLCAELA_kattr 69
#define UOCAELA_attrname 151
#define OXCAELA_wattr 7
extern A68_293 * CUCAELA_nilscope;
extern A68_269 * BUCAELA_nilparamvals;
extern A68_265 * IUCAELA_nilfncallstack;
extern A68_297  TWCAELA_modes;
#define UWCAELA_exported 3
#define VWCAELA_noboth 2
#define IXCAELA_wbool 1
#define JXCAELA_winteger 2
#define KXCAELA_wtype 3
#define LXCAELA_wctype 4
#define MXCAELA_wflt 5
#define NXCAELA_wfn 6
extern A68_298  RXCAELA_mops;
extern A68_299  UXCAELA_dops;
extern A68_300  MFDAELA_toks;
#define WWCAELA_flt_par 0
#define XWCAELA_expl_par 1
#define YWCAELA_impl_par 2
#define ZWCAELA_impl_expl 3
#define AXCAELA_impl_impl 4
#define BXCAELA_fn_notdec 0
#define CXCAELA_fn_flt 1
#define DXCAELA_fn_rec 2
#define EXCAELA_fn_ok 3
#define FXCAELA_outerdec 1
#define GXCAELA_localdec 2
#define HXCAELA_macpardec 3
extern A68_196 * DKDAELA_makeibracket(struct A68t185 );
extern A68_180 * IKDAELA_maketbracket(struct A68t172 );
extern A68_231 * NKDAELA_makecbracket(struct A68t222 );
extern A68_257 * SKDAELA_makeabracket(struct A68t170 );
extern A68_VOID  XKDAELA_makeintid(struct A68t185 ,A68_200 *);
extern A68_VOID  CLDAELA_maketypeid(struct A68t172 ,A68_201 *);
extern A68_VOID  MLDAELA_makeattrid(struct A68t170 ,A68_205 *);
extern A68_VOID  HLDAELA_makectypeid(struct A68t222 ,A68_202 *);
extern A68_258 * RLDAELA_makeattrvar(struct A68t245 *);
extern A68_189 * WLDAELA_makeintvar(struct A68t245 *);
extern A68_177  AUCAELA_typenull;
#define KOCAELA_vnull 141
#define NOCAELA_vprimc 144
#define UTCAELA_begintok 39
#define YTCAELA_andtok 25
extern A68_184  NRCAELA_typevoid;
extern A68_237  ORCAELA_constvoid;
extern A68_INT  ZTCAELA_inputtok;
extern A68_276 * QQCAELA_niljoinstack;
extern A68_209 * GUCAELA_nilintegerstack;
extern A68_220 * SQCAELA_niljoinvarstack;
extern A68_277 * UQCAELA_niljoinmultstack;
extern A68_218  RRCAELA_jcheck;
extern A68_218  SRCAELA_jfault;
extern A68_218  TRCAELA_jvoid;
#define RPCAELA_vnamesource 1
#define SPCAELA_vnamesink 2
#define TPCAELA_vnameiosource 3
#define UPCAELA_vnameiosink 4
#define QOCAELA_bjoinend 147
#define SOCAELA_vvoid 149
extern A68_283 * HUCAELA_nildecnocheck;
extern A68_VOID  DSDAELA_uncheckedint(struct A68t185 ,A68_185 *);
#define UKCAELA_vtermindex 39
extern A68_212 * VQCAELA_nilportdata;
extern A68_VOID  VIDAELA_primtype(struct A68t172 ,A68_BOOL ,A68_172 *);
/* --- End of imports from compmodes --- */


/* --- Imports from charset --- */
/* --- End of imports from charset --- */


/* --- Imports from impmacro --- */
/* --- End of imports from impmacro --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  TTCAOST_nullid;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
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
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAELA(void);   /* sidanalyser */
extern void JFAAOSI(void);   /* messageproc */
extern void IHPAELA(void);   /* compileproc */
extern void UICAELA(void);   /* compmodes */
extern void GMAATRN(void);   /* charset */
extern void GGKAELA(void);   /* impmacro */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_442   AKWAELA = {"$Id: compileaction.a68,v 34.2 1995/03/29 13:03:20 ella Exp $"}; 
A_GISVEC(A68_VC ,BKWAELA,AKWAELA,60)
static A68_446   PTWAELA = {"integer"}; 
A_GISVEC(A68_VC ,RTWAELA,PTWAELA,7)
static A68_451   RAXAELA = {"IF"}; 
A_GISVEC(A68_VC ,SAXAELA,RAXAELA,2)
static A68_95   VBXAELA = {"CONC"}; 
A_GISVEC(A68_VC ,XBXAELA,VBXAELA,4)
#define KDXAELA_nilsop (A68_292 *)A68_NIL
static A68_455   DNXAELA = {"<intdec2>"}; 
A_GISVEC(A68_VC ,ENXAELA,DNXAELA,9)
static A68_457   EOXAELA = {"<constdec2>"}; 
A_GISVEC(A68_VC ,FOXAELA,EOXAELA,11)
static A68_458   EPXAELA = {"id1pr"}; 
A_GISVEC(A68_VC ,FPXAELA,EPXAELA,5)
static A68_446   GSXAELA = {"integer"}; 
A_GISVEC(A68_VC ,ISXAELA,GSXAELA,7)
static A68_460   SIYAELA = {"mcall3 - macpar"}; 
A_GISVEC(A68_VC ,TIYAELA,SIYAELA,15)
static A68_95   CUYAELA = {"CONC"}; 
A_GISVEC(A68_VC ,DUYAELA,CUYAELA,4)
static A68_95   IUYAELA = {"CONC"}; 
A_GISVEC(A68_VC ,KUYAELA,IUYAELA,4)
static A68_95   JYYAELA = {"CONC"}; 
A_GISVEC(A68_VC ,LYYAELA,JYYAELA,4)
static A68_451   VHZAELA = {":="}; 
A_GISVEC(A68_VC ,XHZAELA,VHZAELA,2)
static A68_458   QNZAELA = {"<del>"}; 
A_GISVEC(A68_VC ,RNZAELA,QNZAELA,5)
static A68_462   YPZAELA = {"<samp>"}; 
A_GISVEC(A68_VC ,ZPZAELA,YPZAELA,6)
static A68_463   XSZAELA = {"<tscale>"}; 
A_GISVEC(A68_VC ,YSZAELA,XSZAELA,8)
static A68_455   DIABELA = {"character"}; 
A_GISVEC(A68_VC ,FIABELA,DIABELA,9)
static A68_462   TKABELA = {"string"}; 
A_GISVEC(A68_VC ,VKABELA,TKABELA,6)
typedef struct   /* env of non-global proc */
{
int dummy;
} FUWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OUWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GWWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PWWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} EJXAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CKXAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SKXAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LQXAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UQXAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  NQYAELA_size;
A_PAD_INT(PAD_131)
} UQYAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * WUYAELA_size;
} MVYAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * WUYAELA_size;
} GWYAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * BXYAELA_size;
} FXYAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GYYAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FYZAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OYZAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JZZAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SAABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RBABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YCABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HDABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CEABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TFABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CGABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WGABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OHABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AIABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SIABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QJABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QKABELA_generator;

A68_VOID  CKWAELA_reader(A68_335  *ReturnedValue);

A68_VOID  LKWAELA_fail(A68_85  Line);

A68_VOID  NKWAELA_failure(A68_333  Error);

A68_VOID  ZKWAELA_recpr(void);

A68_VOID  ALWAELA_newidpr(void);

A_STATIC A68_VOID  HLWAELA_findidcall(A68_VC  Id);

A68_VOID  RMWAELA_ioidpr(void);

A68_VOID  SMWAELA_findidpr(void);

A68_VOID  TMWAELA_findidpr2(void);

A68_VOID  UMWAELA_attrdec1(void);

A68_VOID  ZMWAELA_attrdec2(void);

A68_VOID  NNWAELA_attr1(void);

A68_VOID  PNWAELA_newattid(void);

A68_VOID  QNWAELA_attrnamepr(void);

A68_VOID  UNWAELA_attrdata1(void);

A68_VOID  YNWAELA_attrdata2(void);

A68_VOID  COWAELA_attrstr1(void);

A68_VOID  DOWAELA_attrstr2(void);

A68_VOID  GOWAELA_attrstr3(void);

A68_VOID  LOWAELA_sattrpr(void);

A68_VOID  MOWAELA_sattrid(void);

A68_VOID  NOWAELA_attrcall(void);

A68_VOID  POWAELA_outattrlist(void);

A68_VOID  QOWAELA_stackname(void);

A68_VOID  TOWAELA_stackid(void);

A68_VOID  WOWAELA_classlist(void);

A68_VOID  APWAELA_startstrings(void);

A68_VOID  BPWAELA_stackstring(void);

A_STATIC A68_VOID  EPWAELA_generator(A68_BOOL  DPWAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  LPWAELA_checkbool(void);

A68_VOID  NPWAELA_checkinteger(void);

A68_VOID  QPWAELA_checktypepr(void);

A68_VOID  SPWAELA_checkctype(void);

A68_VOID  VPWAELA_checkcorttype(void);

A68_VOID  ZPWAELA_br1(void);

A68_VOID  AQWAELA_br2(void);

A68_VOID  DQWAELA_br3(void);

A68_VOID  GQWAELA_stackpalt(void);

A68_VOID  JQWAELA_br6(void);

A68_VOID  WQWAELA_br7(void);

A68_VOID  MRWAELA_br8(void);

A68_VOID  NRWAELA_sid(void);

A68_VOID  ISWAELA_typetoctype(void);

A68_VOID  MSWAELA_cquery2(void);

A68_VOID  RSWAELA_cattr(void);

A68_VOID  VSWAELA_sid1(void);

A68_VOID  ETWAELA_sid2(void);

A_STATIC A68_VOID  MTWAELA_generator(A68_BOOL  LTWAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  XTWAELA_sind(void);

A_STATIC A68_VOID  EUWAELA_generator(A68_BOOL  CUWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NUWAELA_generator(A68_BOOL  LUWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YVWAELA_srange(void);

A_STATIC A68_VOID  FWWAELA_generator(A68_BOOL  DWWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OWWAELA_generator(A68_BOOL  MWWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  HYWAELA_sunn(void);

A68_VOID  WYWAELA_stacksuc(void);

A68_VOID  ZYWAELA_sstr1(void);

A68_VOID  KZWAELA_sstr2(void);

A68_VOID  VZWAELA_sstr3(void);

A68_VOID  AAXAELA_srow(void);

A68_VOID  OAXAELA_scond(void);

A68_VOID  IBXAELA_sconc(void);

A_STATIC A68_VOID  SBXAELA_generator(A68_BOOL  RBXAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  ZBXAELA_sindex(void);

A68_VOID  JCXAELA_strim(void);

A68_VOID  BDXAELA_int1(void);

A68_VOID  DDXAELA_sop(void);

A68_VOID  GDXAELA_removeop(void);

A68_VOID  JDXAELA_removeop2(void);

A68_VOID  MDXAELA_checkop(void);

A68_VOID  DEXAELA_mop(void);

A68_VOID  VEXAELA_dop(void);

A68_VOID  VFXAELA_stacktype(void);

A68_VOID  YFXAELA_salts1(void);

A68_VOID  BGXAELA_salts2(void);

A68_VOID  KGXAELA_salts3(void);

A68_VOID  MGXAELA_str1(void);

A68_VOID  RGXAELA_str2(void);

A68_VOID  WGXAELA_stackinteger(void);

A68_VOID  ZGXAELA_intidpr(void);

A68_VOID  IHXAELA_checknoalts(void);

A68_VOID  LHXAELA_checknoquery(void);

A68_VOID  OHXAELA_checknotconstfntype(void);

A68_VOID  PHXAELA_checknofntype(void);

A68_VOID  RHXAELA_fntype(void);

A68_VOID  VHXAELA_rhsbracket(void);

A68_VOID  ZHXAELA_stackchar(void);

A68_VOID  AIXAELA_checkchar(void);

A_STATIC A68_VOID  CIXAELA_generator(A68_BOOL  BIXAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  MIXAELA_char1(void);

A68_VOID  PIXAELA_char2(void);

A68_VOID  VIXAELA_char3(void);

A_STATIC A68_VOID  DJXAELA_generator(A68_BOOL  BJXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  TJXAELA_char4(void);

A_STATIC A68_VOID  BKXAELA_generator(A68_BOOL  ZJXAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A68_VOID  LKXAELA_char5(void);

A_STATIC A68_VOID  RKXAELA_generator(A68_BOOL  PKXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  CLXAELA_idsattr(void);

A68_VOID  ELXAELA_setnew(void);

A68_VOID  GLXAELA_typedec1(void);

A68_VOID  MLXAELA_typedec2(void);

A68_VOID  HMXAELA_intdec1(void);

A68_VOID  MMXAELA_intdec2(void);

A68_VOID  KNXAELA_constdec1(void);

A68_VOID  PNXAELA_constdec2(void);

A68_VOID  LOXAELA_id1pr(void);

A68_VOID  CQXAELA_vquerypr(void);

A68_VOID  EQXAELA_id2(void);

A_STATIC A68_VOID  KQXAELA_generator(A68_BOOL  IQXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TQXAELA_generator(A68_BOOL  RQXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DSXAELA_generator(A68_BOOL  CSXAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  MSXAELA_id3(void);

A68_VOID  PSXAELA_id4(void);

A68_VOID  YSXAELA_sharp(void);

A68_VOID  LTXAELA_explmac(void);

A68_VOID  MTXAELA_implmac(void);

A68_VOID  OTXAELA_impliffn(void);

A68_VOID  RTXAELA_implexpl(void);

A68_VOID  STXAELA_implimpl(void);

A68_VOID  TTXAELA_dec1(void);

A68_VOID  UTXAELA_dec2(void);

A68_VOID  XTXAELA_dec3(void);

A68_VOID  CUXAELA_dec6(void);

A68_VOID  EUXAELA_unnamedinput(void);

A68_VOID  GUXAELA_inputpr(void);

A68_VOID  KUXAELA_outputpr(void);

A68_VOID  OUXAELA_voidtype(void);

A68_VOID  QUXAELA_voidctype(void);

A68_VOID  TUXAELA_voidpr(void);

A68_VOID  YUXAELA_letstart(void);

A68_VOID  BVXAELA_let1(void);

A68_VOID  GVXAELA_let2(void);

A68_VOID  LVXAELA_let3(void);

A68_VOID  NVXAELA_nullets(void);

A68_VOID  SVXAELA_macrop(void);

A68_VOID  TVXAELA_fndecp(void);

A68_VOID  VVXAELA_mfndecp(void);

A68_VOID  WVXAELA_callfn(void);

A68_VOID  XVXAELA_exitfn(void);

A68_VOID  EWXAELA_fn1(void);

A68_VOID  FWXAELA_fn2(void);

A68_VOID  FXXAELA_fn3(void);

A68_VOID  SXXAELA_fn5(void);

A68_VOID  UXXAELA_mparamint(void);

A68_VOID  YYXAELA_mparamtype1(void);

A_STATIC A68_VOID  CZXAELA_mparamtype(A68_BOOL  Withbody);

A68_VOID  JAYAELA_mparamtype3(void);

A68_VOID  KAYAELA_mparamtype4(void);

A68_VOID  LAYAELA_mparamconst1(void);

A68_VOID  OAYAELA_mparamconst2(void);

A68_VOID  OBYAELA_mparamattrpr(void);

A68_VOID  NCYAELA_mparamfn(void);

A68_VOID  WCYAELA_sfnpr(void);

A68_VOID  XCYAELA_macconst1(void);

A68_VOID  HDYAELA_checkmacnotfn(void);

A68_VOID  JDYAELA_sfn1(void);

A68_VOID  KDYAELA_sfn2(void);

A68_VOID  RDYAELA_findfnpr(void);

A68_VOID  DEYAELA_mcall1(void);

A68_VOID  EEYAELA_mcall2(void);

A68_VOID  TEYAELA_mcall6(void);

A68_VOID  GFYAELA_mcall3(void);

A68_VOID  OJYAELA_mcall4(void);

A68_VOID  EKYAELA_errorm1(void);

A68_VOID  FKYAELA_errorm2(void);

A68_VOID  GKYAELA_mcall5(void);

A68_VOID  OKYAELA_pullfncall(void);

A68_VOID  PKYAELA_checkcall(void);

A68_VOID  GLYAELA_removecall1(void);

A68_VOID  KLYAELA_removecall2(void);

A68_VOID  MLYAELA_callm(void);

A68_VOID  KMYAELA_calld(void);

A68_VOID  ONYAELA_portname(void);

A68_VOID  DOYAELA_index(void);

A68_VOID  ROYAELA_trim(void);

A68_VOID  OPYAELA_dynindex1(void);

A68_VOID  UPYAELA_dynindex2(void);

A68_VOID  MQYAELA_joinrep(void);

A_STATIC A68_VOID  TQYAELA_generator(A68_BOOL  RQYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A68_VOID  FRYAELA_vrowpr(void);

A68_VOID  RRYAELA_varmult1(void);

A68_VOID  XRYAELA_varmult2(void);

A68_VOID  ITYAELA_varmult3(void);

A68_VOID  UTYAELA_varmult4(void);

A68_VOID  YTYAELA_for(void);

A68_VOID  AUYAELA_checkconc(void);

A_STATIC A68_VOID  FUYAELA_generator(A68_BOOL  EUYAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  QUYAELA_conc(void);

A_STATIC A68_VOID  LVYAELA_generator(A68_BOOL  JVYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FWYAELA_generator(A68_BOOL  DWYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EXYAELA_generator(A68_BOOL  CXYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FYYAELA_generator(A68_BOOL  DYYAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  NYYAELA_coll(void);

A68_VOID  TYYAELA_bracket(void);

A68_VOID  HZYAELA_make1(void);

A68_VOID  OZYAELA_make2(void);

A68_VOID  HBZAELA_make3(void);

A68_VOID  JBZAELA_make4(void);

A68_VOID  KBZAELA_make5(void);

A68_VOID  SBZAELA_case1(void);

A68_VOID  SCZAELA_case2(void);

A68_VOID  YCZAELA_case3(void);

A68_VOID  IDZAELA_case7(void);

A68_VOID  LDZAELA_case4(void);

A68_VOID  ODZAELA_case6(void);

A68_VOID  TDZAELA_case5(void);

A68_VOID  VDZAELA_vcond1(void);

A68_VOID  BEZAELA_vcond2(void);

A68_VOID  FEZAELA_vcond3(void);

A68_VOID  IEZAELA_inconstp(void);

A68_VOID  LEZAELA_inotherp(void);

A68_VOID  OEZAELA_inparp(void);

A68_VOID  REZAELA_inseqp(void);

A68_VOID  UEZAELA_unstackstate(void);

A68_VOID  VEZAELA_beginp(void);

A68_VOID  ZEZAELA_endp(void);

A68_VOID  DFZAELA_checkoffjoinup(void);

A68_VOID  HFZAELA_checkoutputtype(void);

A68_VOID  LFZAELA_checkoutputscope(void);

A68_VOID  VFZAELA_seqvoidpr(void);

A68_VOID  XFZAELA_semicolonflt(void);

A68_VOID  YFZAELA_vardec1(void);

A68_VOID  CGZAELA_vardec2(void);

A68_VOID  GGZAELA_assign1(void);

A68_VOID  KGZAELA_assign2(void);

A68_VOID  IHZAELA_assign3(void);

A68_VOID  QHZAELA_assign4(void);

A_STATIC A68_VOID  SHZAELA_generator(A68_BOOL  RHZAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  GIZAELA_unstvoid(void);

A68_VOID  JIZAELA_outmultass(void);

A68_VOID  OIZAELA_multassend(void);

A68_VOID  RIZAELA_multtype(void);

A68_VOID  VIZAELA_nullassign(void);

A68_VOID  EJZAELA_seqnullpr(void);

A68_VOID  GJZAELA_seqcond1(void);

A68_VOID  JJZAELA_seqcond2(void);

A68_VOID  LJZAELA_seqcond3(void);

A68_VOID  NJZAELA_pt1(void);

A68_VOID  PJZAELA_pt2(void);

A68_VOID  RJZAELA_pt3(void);

A68_VOID  SJZAELA_pt4(void);

A68_VOID  VJZAELA_pt5(void);

A68_VOID  WJZAELA_pt6(void);

A68_VOID  YJZAELA_pt7(void);

A_STATIC A68_VOID  AKZAELA_aliensetup(void);

A68_VOID  KKZAELA_biopstart(void);

A68_VOID  MKZAELA_alienstart(void);

A68_VOID  OKZAELA_bioppr(void);

A68_VOID  PKZAELA_biopparampr(void);

A68_VOID  OLZAELA_constintpr(void);

A68_VOID  SLZAELA_const2int2pr(void);

A68_VOID  TLZAELA_constint2pr(void);

A68_VOID  ULZAELA_del(void);

A68_VOID  TNZAELA_idel(void);

A68_VOID  AOZAELA_sampintpr(void);

A68_VOID  FOZAELA_sampint2pr(void);

A68_VOID  CPZAELA_notypeset(void);

A68_VOID  JPZAELA_samp(void);

A68_VOID  BQZAELA_timeintpr(void);

A68_VOID  GQZAELA_timeint2pr(void);

A68_VOID  DRZAELA_fast(void);

A68_VOID  ERZAELA_slow(void);

A68_VOID  FRZAELA_notypeset2(void);

A68_VOID  NRZAELA_tscale(void);

A68_VOID  ATZAELA_rck(void);

A68_VOID  RVZAELA_arith1(void);

A68_VOID  SVZAELA_arith2(void);

A68_VOID  UVZAELA_reformpr(void);

A68_VOID  FWZAELA_mod2(void);

A68_VOID  IWZAELA_impctn(void);

A68_VOID  KWZAELA_impsetct(void);

A68_VOID  TWZAELA_impfn1(void);

A68_VOID  UWZAELA_impfn2(void);

A68_VOID  VWZAELA_impfn3(void);

A68_VOID  TXZAELA_importpr(void);

A68_VOID  WXZAELA_multjoinpr(void);

A68_VOID  YXZAELA_char(void);

A_STATIC A68_VOID  EYZAELA_generator(A68_BOOL  CYZAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NYZAELA_generator(A68_BOOL  LYZAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IZZAELA_generator(A68_BOOL  GZZAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JAABELA_stringpr(void);

A_STATIC A68_VOID  RAABELA_generator(A68_BOOL  PAABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QBABELA_generator(A68_BOOL  OBABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  QCABELA_stringrange(void);

A_STATIC A68_VOID  XCABELA_generator(A68_BOOL  VCABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GDABELA_generator(A68_BOOL  EDABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BEABELA_generator(A68_BOOL  ZDABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  VEABELA_stringrow(void);

A68_VOID  LFABELA_charid(void);

A_STATIC A68_VOID  SFABELA_generator(A68_BOOL  QFABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BGABELA_generator(A68_BOOL  ZFABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VGABELA_generator(A68_BOOL  TGABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NHABELA_generator(A68_BOOL  LHABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZHABELA_generator(A68_BOOL  XHABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JIABELA_stringid(void);

A_STATIC A68_VOID  RIABELA_generator(A68_BOOL  PIABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PJABELA_generator(A68_BOOL  NJABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PKABELA_generator(A68_BOOL  NKABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZKABELA_stringsec(void);

A68_INT  KLABELA_return(void);

A68_VOID  NLABELA_stackjoin(void);

A68_VOID  QLABELA_setsource(void);

A68_VOID  RLABELA_startindex2(void);

A68_VOID  TLABELA_endindex2(void);

A68_VOID  BMABELA_multstack1(void);

A68_VOID  FMABELA_multstack2(void);

A68_VOID  OMABELA_multjoinoff(void);

A68_VOID  XMABELA_multjoinmark(void);

A68_VOID  YMABELA_joinvar(void);

A68_VOID  FNABELA_rp1(void);

A68_VOID  ONABELA_rp2(void);

A68_VOID  KOABELA_rp3(void);

A_STATIC A68_VOID  EPWAELA_generator(A68_BOOL  DPWAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  FPWAELA;  /* clause result */
A68_VC  GPWAELA;  /* OPERATORS - dynamic generator */
{ 
GPWAELA.upb = LIPAELA_stringsize ;
( DPWAELA_anonymous? A_VLOC(A68_CHAR ,GPWAELA): A_VHEAP(A68_CHAR ,GPWAELA) );
FPWAELA = GPWAELA;
} 
*ReturnedValue = (FPWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MTWAELA_generator(A68_BOOL  LTWAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  NTWAELA;  /* clause result */
A68_VC  OTWAELA;  /* OPERATORS - dynamic generator */
{ 
OTWAELA.upb = 7 ;
( LTWAELA_anonymous? A_VLOC(A68_CHAR ,OTWAELA): A_VHEAP(A68_CHAR ,OTWAELA) );
NTWAELA = OTWAELA;
} 
*ReturnedValue = (NTWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EUWAELA_generator(A68_BOOL  CUWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FUWAELA_generator *)NonLocals)->x)
{ 
A68_VC  GUWAELA;  /* clause result */
A68_VC  HUWAELA;  /* OPERATORS - dynamic generator */
{ 
HUWAELA.upb = 1 ;
( CUWAELA_anonymous? A_VLOC(A68_CHAR ,HUWAELA): A_VHEAP(A68_CHAR ,HUWAELA) );
GUWAELA = HUWAELA;
} 
*ReturnedValue = (GUWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NUWAELA_generator(A68_BOOL  LUWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OUWAELA_generator *)NonLocals)->x)
{ 
A68_VC  PUWAELA;  /* clause result */
A68_VC  QUWAELA;  /* OPERATORS - dynamic generator */
{ 
QUWAELA.upb = 1 ;
( LUWAELA_anonymous? A_VLOC(A68_CHAR ,QUWAELA): A_VHEAP(A68_CHAR ,QUWAELA) );
PUWAELA = QUWAELA;
} 
*ReturnedValue = (PUWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FWWAELA_generator(A68_BOOL  DWWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GWWAELA_generator *)NonLocals)->x)
{ 
A68_VC  HWWAELA;  /* clause result */
A68_VC  IWWAELA;  /* OPERATORS - dynamic generator */
{ 
IWWAELA.upb = 1 ;
( DWWAELA_anonymous? A_VLOC(A68_CHAR ,IWWAELA): A_VHEAP(A68_CHAR ,IWWAELA) );
HWWAELA = IWWAELA;
} 
*ReturnedValue = (HWWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OWWAELA_generator(A68_BOOL  MWWAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWWAELA_generator *)NonLocals)->x)
{ 
A68_VC  QWWAELA;  /* clause result */
A68_VC  RWWAELA;  /* OPERATORS - dynamic generator */
{ 
RWWAELA.upb = 1 ;
( MWWAELA_anonymous? A_VLOC(A68_CHAR ,RWWAELA): A_VHEAP(A68_CHAR ,RWWAELA) );
QWWAELA = RWWAELA;
} 
*ReturnedValue = (QWWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SBXAELA_generator(A68_BOOL  RBXAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  TBXAELA;  /* clause result */
A68_VC  UBXAELA;  /* OPERATORS - dynamic generator */
{ 
UBXAELA.upb = 4 ;
( RBXAELA_anonymous? A_VLOC(A68_CHAR ,UBXAELA): A_VHEAP(A68_CHAR ,UBXAELA) );
TBXAELA = UBXAELA;
} 
*ReturnedValue = (TBXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CIXAELA_generator(A68_BOOL  BIXAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DIXAELA;  /* clause result */
A68_VC  EIXAELA;  /* OPERATORS - dynamic generator */
{ 
EIXAELA.upb = 2 ;
( BIXAELA_anonymous? A_VLOC(A68_CHAR ,EIXAELA): A_VHEAP(A68_CHAR ,EIXAELA) );
DIXAELA = EIXAELA;
} 
*ReturnedValue = (DIXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DJXAELA_generator(A68_BOOL  BJXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJXAELA_generator *)NonLocals)->x)
{ 
A68_VC  FJXAELA;  /* clause result */
A68_VC  GJXAELA;  /* OPERATORS - dynamic generator */
{ 
GJXAELA.upb = 2 ;
( BJXAELA_anonymous? A_VLOC(A68_CHAR ,GJXAELA): A_VHEAP(A68_CHAR ,GJXAELA) );
FJXAELA = GJXAELA;
} 
*ReturnedValue = (FJXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BKXAELA_generator(A68_BOOL  ZJXAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((CKXAELA_generator *)NonLocals)->x)
{ 
A68_54  DKXAELA;  /* clause result */
A68_54  EKXAELA;  /* OPERATORS - dynamic generator */
{ 
EKXAELA.upb = JPPAELA_charset.dim[0].upb ;
( ZJXAELA_anonymous? A_VLOC(A68_BOOL ,EKXAELA): A_VHEAP(A68_BOOL ,EKXAELA) );
DKXAELA = EKXAELA;
} 
*ReturnedValue = (DKXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RKXAELA_generator(A68_BOOL  PKXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SKXAELA_generator *)NonLocals)->x)
{ 
A68_VC  TKXAELA;  /* clause result */
A68_VC  UKXAELA;  /* OPERATORS - dynamic generator */
{ 
UKXAELA.upb = 2 ;
( PKXAELA_anonymous? A_VLOC(A68_CHAR ,UKXAELA): A_VHEAP(A68_CHAR ,UKXAELA) );
TKXAELA = UKXAELA;
} 
*ReturnedValue = (TKXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KQXAELA_generator(A68_BOOL  IQXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LQXAELA_generator *)NonLocals)->x)
{ 
A68_VC  MQXAELA;  /* clause result */
A68_VC  NQXAELA;  /* OPERATORS - dynamic generator */
{ 
NQXAELA.upb = 1 ;
( IQXAELA_anonymous? A_VLOC(A68_CHAR ,NQXAELA): A_VHEAP(A68_CHAR ,NQXAELA) );
MQXAELA = NQXAELA;
} 
*ReturnedValue = (MQXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TQXAELA_generator(A68_BOOL  RQXAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UQXAELA_generator *)NonLocals)->x)
{ 
A68_VC  VQXAELA;  /* clause result */
A68_VC  WQXAELA;  /* OPERATORS - dynamic generator */
{ 
WQXAELA.upb = 1 ;
( RQXAELA_anonymous? A_VLOC(A68_CHAR ,WQXAELA): A_VHEAP(A68_CHAR ,WQXAELA) );
VQXAELA = WQXAELA;
} 
*ReturnedValue = (VQXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DSXAELA_generator(A68_BOOL  CSXAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ESXAELA;  /* clause result */
A68_VC  FSXAELA;  /* OPERATORS - dynamic generator */
{ 
FSXAELA.upb = 7 ;
( CSXAELA_anonymous? A_VLOC(A68_CHAR ,FSXAELA): A_VHEAP(A68_CHAR ,FSXAELA) );
ESXAELA = FSXAELA;
} 
*ReturnedValue = (ESXAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TQYAELA_generator(A68_BOOL  RQYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((UQYAELA_generator *)NonLocals)->x)
{ 
A68_221  VQYAELA;  /* clause result */
A68_221  WQYAELA;  /* OPERATORS - dynamic generator */
{ 
WQYAELA.upb = NL(NQYAELA_size) ;
( RQYAELA_anonymous? A_VLOC(A68_210 ,WQYAELA): A_VHEAP(A68_210 ,WQYAELA) );
VQYAELA = WQYAELA;
} 
*ReturnedValue = (VQYAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FUYAELA_generator(A68_BOOL  EUYAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GUYAELA;  /* clause result */
A68_VC  HUYAELA;  /* OPERATORS - dynamic generator */
{ 
HUYAELA.upb = 4 ;
( EUYAELA_anonymous? A_VLOC(A68_CHAR ,HUYAELA): A_VHEAP(A68_CHAR ,HUYAELA) );
GUYAELA = HUYAELA;
} 
*ReturnedValue = (GUYAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LVYAELA_generator(A68_BOOL  JVYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((MVYAELA_generator *)NonLocals)->x)
{ 
A68_221  NVYAELA;  /* clause result */
A68_221  OVYAELA;  /* OPERATORS - dynamic generator */
{ 
OVYAELA.upb = (*NL(WUYAELA_size)) ;
( JVYAELA_anonymous? A_VLOC(A68_210 ,OVYAELA): A_VHEAP(A68_210 ,OVYAELA) );
NVYAELA = OVYAELA;
} 
*ReturnedValue = (NVYAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FWYAELA_generator(A68_BOOL  DWYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((GWYAELA_generator *)NonLocals)->x)
{ 
A68_221  HWYAELA;  /* clause result */
A68_221  IWYAELA;  /* OPERATORS - dynamic generator */
{ 
IWYAELA.upb = (*NL(WUYAELA_size)) ;
( DWYAELA_anonymous? A_VLOC(A68_210 ,IWYAELA): A_VHEAP(A68_210 ,IWYAELA) );
HWYAELA = IWYAELA;
} 
*ReturnedValue = (HWYAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EXYAELA_generator(A68_BOOL  CXYAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((FXYAELA_generator *)NonLocals)->x)
{ 
A68_221  GXYAELA;  /* clause result */
A68_221  HXYAELA;  /* OPERATORS - dynamic generator */
{ 
HXYAELA.upb = (*NL(BXYAELA_size)) ;
( CXYAELA_anonymous? A_VLOC(A68_210 ,HXYAELA): A_VHEAP(A68_210 ,HXYAELA) );
GXYAELA = HXYAELA;
} 
*ReturnedValue = (GXYAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FYYAELA_generator(A68_BOOL  DYYAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GYYAELA_generator *)NonLocals)->x)
{ 
A68_VC  HYYAELA;  /* clause result */
A68_VC  IYYAELA;  /* OPERATORS - dynamic generator */
{ 
IYYAELA.upb = 4 ;
( DYYAELA_anonymous? A_VLOC(A68_CHAR ,IYYAELA): A_VHEAP(A68_CHAR ,IYYAELA) );
HYYAELA = IYYAELA;
} 
*ReturnedValue = (HYYAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SHZAELA_generator(A68_BOOL  RHZAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  THZAELA;  /* clause result */
A68_VC  UHZAELA;  /* OPERATORS - dynamic generator */
{ 
UHZAELA.upb = 2 ;
( RHZAELA_anonymous? A_VLOC(A68_CHAR ,UHZAELA): A_VHEAP(A68_CHAR ,UHZAELA) );
THZAELA = UHZAELA;
} 
*ReturnedValue = (THZAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EYZAELA_generator(A68_BOOL  CYZAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FYZAELA_generator *)NonLocals)->x)
{ 
A68_VC  GYZAELA;  /* clause result */
A68_VC  HYZAELA;  /* OPERATORS - dynamic generator */
{ 
HYZAELA.upb = 1 ;
( CYZAELA_anonymous? A_VLOC(A68_CHAR ,HYZAELA): A_VHEAP(A68_CHAR ,HYZAELA) );
GYZAELA = HYZAELA;
} 
*ReturnedValue = (GYZAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NYZAELA_generator(A68_BOOL  LYZAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OYZAELA_generator *)NonLocals)->x)
{ 
A68_VC  PYZAELA;  /* clause result */
A68_VC  QYZAELA;  /* OPERATORS - dynamic generator */
{ 
QYZAELA.upb = 1 ;
( LYZAELA_anonymous? A_VLOC(A68_CHAR ,QYZAELA): A_VHEAP(A68_CHAR ,QYZAELA) );
PYZAELA = QYZAELA;
} 
*ReturnedValue = (PYZAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IZZAELA_generator(A68_BOOL  GZZAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JZZAELA_generator *)NonLocals)->x)
{ 
A68_VC  KZZAELA;  /* clause result */
A68_VC  LZZAELA;  /* OPERATORS - dynamic generator */
{ 
LZZAELA.upb = 2 ;
( GZZAELA_anonymous? A_VLOC(A68_CHAR ,LZZAELA): A_VHEAP(A68_CHAR ,LZZAELA) );
KZZAELA = LZZAELA;
} 
*ReturnedValue = (KZZAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RAABELA_generator(A68_BOOL  PAABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SAABELA_generator *)NonLocals)->x)
{ 
A68_VC  TAABELA;  /* clause result */
A68_VC  UAABELA;  /* OPERATORS - dynamic generator */
{ 
UAABELA.upb = 1 ;
( PAABELA_anonymous? A_VLOC(A68_CHAR ,UAABELA): A_VHEAP(A68_CHAR ,UAABELA) );
TAABELA = UAABELA;
} 
*ReturnedValue = (TAABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QBABELA_generator(A68_BOOL  OBABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RBABELA_generator *)NonLocals)->x)
{ 
A68_VC  SBABELA;  /* clause result */
A68_VC  TBABELA;  /* OPERATORS - dynamic generator */
{ 
TBABELA.upb = 2 ;
( OBABELA_anonymous? A_VLOC(A68_CHAR ,TBABELA): A_VHEAP(A68_CHAR ,TBABELA) );
SBABELA = TBABELA;
} 
*ReturnedValue = (SBABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XCABELA_generator(A68_BOOL  VCABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YCABELA_generator *)NonLocals)->x)
{ 
A68_VC  ZCABELA;  /* clause result */
A68_VC  ADABELA;  /* OPERATORS - dynamic generator */
{ 
ADABELA.upb = 1 ;
( VCABELA_anonymous? A_VLOC(A68_CHAR ,ADABELA): A_VHEAP(A68_CHAR ,ADABELA) );
ZCABELA = ADABELA;
} 
*ReturnedValue = (ZCABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GDABELA_generator(A68_BOOL  EDABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HDABELA_generator *)NonLocals)->x)
{ 
A68_VC  IDABELA;  /* clause result */
A68_VC  JDABELA;  /* OPERATORS - dynamic generator */
{ 
JDABELA.upb = 1 ;
( EDABELA_anonymous? A_VLOC(A68_CHAR ,JDABELA): A_VHEAP(A68_CHAR ,JDABELA) );
IDABELA = JDABELA;
} 
*ReturnedValue = (IDABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BEABELA_generator(A68_BOOL  ZDABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CEABELA_generator *)NonLocals)->x)
{ 
A68_VC  DEABELA;  /* clause result */
A68_VC  EEABELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 3416: */
EEABELA.upb = 6 ;
( ZDABELA_anonymous? A_VLOC(A68_CHAR ,EEABELA): A_VHEAP(A68_CHAR ,EEABELA) );
DEABELA = EEABELA;
} 
*ReturnedValue = (DEABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SFABELA_generator(A68_BOOL  QFABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TFABELA_generator *)NonLocals)->x)
{ 
A68_VC  UFABELA;  /* clause result */
A68_VC  VFABELA;  /* OPERATORS - dynamic generator */
{ 
VFABELA.upb = 1 ;
( QFABELA_anonymous? A_VLOC(A68_CHAR ,VFABELA): A_VHEAP(A68_CHAR ,VFABELA) );
UFABELA = VFABELA;
} 
*ReturnedValue = (UFABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BGABELA_generator(A68_BOOL  ZFABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CGABELA_generator *)NonLocals)->x)
{ 
A68_VC  DGABELA;  /* clause result */
A68_VC  EGABELA;  /* OPERATORS - dynamic generator */
{ 
EGABELA.upb = 1 ;
( ZFABELA_anonymous? A_VLOC(A68_CHAR ,EGABELA): A_VHEAP(A68_CHAR ,EGABELA) );
DGABELA = EGABELA;
} 
*ReturnedValue = (DGABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VGABELA_generator(A68_BOOL  TGABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WGABELA_generator *)NonLocals)->x)
{ 
A68_VC  XGABELA;  /* clause result */
A68_VC  YGABELA;  /* OPERATORS - dynamic generator */
{ 
YGABELA.upb = 2 ;
( TGABELA_anonymous? A_VLOC(A68_CHAR ,YGABELA): A_VHEAP(A68_CHAR ,YGABELA) );
XGABELA = YGABELA;
} 
*ReturnedValue = (XGABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NHABELA_generator(A68_BOOL  LHABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OHABELA_generator *)NonLocals)->x)
{ 
A68_VC  PHABELA;  /* clause result */
A68_VC  QHABELA;  /* OPERATORS - dynamic generator */
{ 
QHABELA.upb = 1 ;
( LHABELA_anonymous? A_VLOC(A68_CHAR ,QHABELA): A_VHEAP(A68_CHAR ,QHABELA) );
PHABELA = QHABELA;
} 
*ReturnedValue = (PHABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHABELA_generator(A68_BOOL  XHABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AIABELA_generator *)NonLocals)->x)
{ 
A68_VC  BIABELA;  /* clause result */
A68_VC  CIABELA;  /* OPERATORS - dynamic generator */
{ 
CIABELA.upb = 9 ;
( XHABELA_anonymous? A_VLOC(A68_CHAR ,CIABELA): A_VHEAP(A68_CHAR ,CIABELA) );
BIABELA = CIABELA;
} 
*ReturnedValue = (BIABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RIABELA_generator(A68_BOOL  PIABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SIABELA_generator *)NonLocals)->x)
{ 
A68_VC  TIABELA;  /* clause result */
A68_VC  UIABELA;  /* OPERATORS - dynamic generator */
{ 
UIABELA.upb = 1 ;
( PIABELA_anonymous? A_VLOC(A68_CHAR ,UIABELA): A_VHEAP(A68_CHAR ,UIABELA) );
TIABELA = UIABELA;
} 
*ReturnedValue = (TIABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PJABELA_generator(A68_BOOL  NJABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QJABELA_generator *)NonLocals)->x)
{ 
A68_VC  RJABELA;  /* clause result */
A68_VC  SJABELA;  /* OPERATORS - dynamic generator */
{ 
SJABELA.upb = 2 ;
( NJABELA_anonymous? A_VLOC(A68_CHAR ,SJABELA): A_VHEAP(A68_CHAR ,SJABELA) );
RJABELA = SJABELA;
} 
*ReturnedValue = (RJABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PKABELA_generator(A68_BOOL  NKABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QKABELA_generator *)NonLocals)->x)
{ 
A68_VC  RKABELA;  /* clause result */
A68_VC  SKABELA;  /* OPERATORS - dynamic generator */
{ 
SKABELA.upb = 6 ;
( NKABELA_anonymous? A_VLOC(A68_CHAR ,SKABELA): A_VHEAP(A68_CHAR ,SKABELA) );
RKABELA = SKABELA;
} 
*ReturnedValue = (RKABELA);
return;
} 
#undef NL

A68_VOID  CKWAELA_reader(A68_335  *ReturnedValue)
{ 
A68_335  DKWAELA;  /* collateral clause result */
A68_336  EKWAELA;  /* OPERATORS - mode -> union mode */
A68_335  FKWAELA;  /* clause result */
A68_335  GKWAELA;  /* collateral clause result */
A68_336  HKWAELA;  /* OPERATORS - mode -> union mode */
A68_335  IKWAELA;  /* collateral clause result */
A68_336  JKWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(reader);
 /* line 243: */
if ( (NJPAELA_errorrecov==0) )
{ 
AYPAELA_read();
DKWAELA.Type = CKPAELA_t1;
 /* line 244: */
DKWAELA.Val = A_EMPTY(EKWAELA,2);
FKWAELA = DKWAELA;
} 
else
{ 
 /* line 245: */
if ( (NJPAELA_errorrecov==1) )
{ 
NJPAELA_errorrecov = 2;
 /* line 246: */
GKWAELA.Type = DSCAELA_recovertok;
 /* line 247: */
GKWAELA.Val = A_EMPTY(HKWAELA,2);
FKWAELA = GKWAELA;
} 
else
{ 
NJPAELA_errorrecov = 0;
 /* line 248: */
IKWAELA.Type = CKPAELA_t1;
 /* line 249: */
IKWAELA.Val = A_EMPTY(JKWAELA,2);
FKWAELA = IKWAELA;
} 
} 
A_PROC_EXIT(reader);
*ReturnedValue = (FKWAELA);
return;
} 
#undef NL

A68_VOID  LKWAELA_fail(A68_85  Line)
{ 
A_PROC_ENTRY(fail);
GFBAOSL_put(KEAAOST_screen, Line);
A_PROC_EXIT(fail);
return;
} 
#undef NL

A68_VOID  NKWAELA_failure(A68_333  Error)
{ 
A68_BOOL  OKWAELA_stayinloop;
A68_BOOL  PKWAELA;  /* optbool result */
A68_BOOL  QKWAELA;  /* optbool result */
A68_BOOL  RKWAELA;  /* optbool result */
A68_BOOL  SKWAELA;  /* optbool result */
A68_BOOL  TKWAELA;  /* clause result */
A68_BOOL  UKWAELA;  /* optbool result */
A68_INT  VKWAELA;  /* clause result */
A68_INT  WKWAELA_state;
A68_294  XKWAELA;  /* collateral clause result */
A68_294 * YKWAELA;  /* YIELD */
A_PROC_ENTRY(failure);
 /* line 254: */
 /* line 255: */
{ 
MJPAELA_syntaxerror = A68_TRUE;
if ( (CKPAELA_t1!=DSCAELA_recovertok) )
{ 
HBQAELA_syntaxerrmess(Error);
} 
 /* line 256: */
KJPAELA_nofltmess = A68_TRUE;
 /* line 257: */
NJPAELA_errorrecov = 1;
 /* line 258: */
for ( ;; )
{ 
 /* line 259: */
OKWAELA_stayinloop = A68_TRUE;
 /* line 260: */
PKWAELA = (CKPAELA_t1==CTCAELA_stoptok);
if ( ! PKWAELA )
{ /* line 261: */
PKWAELA = (CKPAELA_t1==UTCAELA_begintok);
}
if ( PKWAELA )
{ 
AYPAELA_read();
 /* line 262: */
QKWAELA = (CKPAELA_t1!=FSCAELA_mactok);
if ( QKWAELA )
{QKWAELA = (CKPAELA_t1!=HSCAELA_fntok);
}
if ( QKWAELA )
{ /* line 263: */
QKWAELA = (CKPAELA_t1!=GSCAELA_typetok);
}
OKWAELA_stayinloop = QKWAELA;
} 
 /* line 264: */
RKWAELA = (CKPAELA_t1==OSCAELA_finishtok);
if ( ! RKWAELA )
{ /* line 265: */
RKWAELA = (CKPAELA_t1==PSCAELA_eoftok);
}
if ( RKWAELA )
{ 
XQPAELA_abort(0, VJAAOSI_nullmsg);
NJPAELA_errorrecov = 0;
 /* line 266: */
OKWAELA_stayinloop = A68_FALSE;
} 
 /* line 267: */
 /* line 268: */
if ( OKWAELA_stayinloop )
{ 
SKWAELA = (CKPAELA_t1!=ESCAELA_outputtok);
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=ISCAELA_lettok);
}
 /* line 269: */
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=KSCAELA_maketok);
}
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=LSCAELA_jointok);
}
 /* line 270: */
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=NSCAELA_importstok);
}
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=MSCAELA_fortok);
}
 /* line 271: */
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=SSCAELA_semitok);
}
if ( SKWAELA )
{SKWAELA = (CKPAELA_t1!=QSCAELA_vartok);
}
if ( SKWAELA )
{ /* line 272: */
SKWAELA = (CKPAELA_t1!=RSCAELA_seqtok);
}
OKWAELA_stayinloop = SKWAELA;
} 
 /* line 273: */
 /* line 274: */
TKWAELA = OKWAELA_stayinloop;
if ( !TKWAELA ) break;
AYPAELA_read();
}
 /* line 275: */
KJPAELA_nofltmess = A68_FALSE;
 /* line 276: */
 /* line 277: */
UKWAELA = (CKPAELA_t1==QSCAELA_vartok);
if ( ! UKWAELA )
{UKWAELA = (CKPAELA_t1==RSCAELA_seqtok);
}
if ( ! UKWAELA )
{ /* line 278: */
UKWAELA = (CKPAELA_t1==SSCAELA_semitok);
}
 /* line 279: */
if ( UKWAELA )
{ 
 /* line 280: */
VKWAELA = WPCAELA_inseq;
} 
else
{ 
VKWAELA = XPCAELA_inpar;
} 
WKWAELA_state = VKWAELA;
 /* line 281: */
XKWAELA.State = WKWAELA_state;
 /* line 282: */
XKWAELA.Rest = DNPAELA_currentstate;
YKWAELA = A_HEAP(A68_294 ) ;
(*YKWAELA) = XKWAELA ;
DNPAELA_currentstate = YKWAELA;
} 
A_PROC_EXIT(failure);
return;
} 
#undef NL

A68_VOID  ZKWAELA_recpr(void)
{ 
A_PROC_ENTRY(recpr);
{ 
CKPAELA_t1 = DSCAELA_recovertok;
NJPAELA_errorrecov = 2;
} 
A_PROC_EXIT(recpr);
return;
} 
#undef NL

A68_VOID  ALWAELA_newidpr(void)
{ 
A68_199  BLWAELA;  /* united object - for case conformity */
A68_199  CLWAELA;  /* OPERATORS - mode -> union mode */
A68_263  DLWAELA;  /* OPERATORS - mode -> union mode */
A68_262  ELWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_199  FLWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(newidpr);
{ 
 /* line 289: */
BLWAELA = (*(&((*(&(KQUAELA_id_in_scope(CIPAELA_ident, ENPAELA_scopestack, A68_FALSE)->Idinfo)))->U))) ;
switch ( BLWAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 290: */
BTUAELA_newid(CIPAELA_ident, A_UNITE(CLWAELA,mode9,9,HRCAELA_rec));
break;
case 8: /* STRUCT(INT)  */
 /* line 291: */
/*SKIP*/;
break;
default: 
{ 
LKPAELA_fp3 = CIPAELA_ident;
 /* line 292: */
SZPAELA_faultp(9, A_HVEC(ELWAELA,A_UNITE(DLWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 293: */
 /* line 294: */
 /* line 295: */
 /* line 296: */
BTUAELA_newid(CIPAELA_ident, A_UNITE(FLWAELA,mode8,8,DRCAELA_flt));
} 
break;
} 
} 
A_PROC_EXIT(newidpr);
return;
} 
#undef NL

A_STATIC A68_VOID  HLWAELA_findidcall(A68_VC  Id)
{ 
A68_INT  KLWAELA;  /* clause result */
A68_INT  LLWAELA_fnno;
A68_244 * MLWAELA_fid;
A68_263  NLWAELA;  /* OPERATORS - mode -> union mode */
A68_262  OLWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_199  PLWAELA;  /* united object - for case conformity */
A68_208  QLWAELA_nd;
A68_263  RLWAELA;  /* OPERATORS - mode -> union mode */
A68_262  SLWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207  TLWAELA_r;
A68_263  ULWAELA;  /* OPERATORS - mode -> union mode */
A68_262  VLWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_204 * WLWAELA_d;
A68_217  XLWAELA;  /* collateral clause result */
A68_217 * YLWAELA;  /* YIELD */
A68_210  ZLWAELA;  /* OPERATORS - mode -> union mode */
A68_211  AMWAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  BMWAELA;  /* optbool result */
A68_BOOL  CMWAELA;  /* optbool result */
A68_BOOL  DMWAELA;  /* clause result */
A68_263  EMWAELA;  /* OPERATORS - mode -> union mode */
A68_262  FMWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  GMWAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  HMWAELA;  /* optbool result */
A68_210  IMWAELA;  /* OPERATORS - mode -> union mode */
A68_263  JMWAELA;  /* OPERATORS - mode -> union mode */
A68_262  KMWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_206  LMWAELA_v;
A68_263  MMWAELA;  /* OPERATORS - mode -> union mode */
A68_262  NMWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_198  OMWAELA;  /* collateral clause result */
A68_199  PMWAELA;  /* OPERATORS - mode -> union mode */
A68_199  QMWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(findidcall);
 /* line 300: */
{ 
if ( (FKPAELA_cfnno==0) )
{ 
KLWAELA = 0;
} 
else
{ 
KLWAELA = (*(&(JLPAELA_fndec->Fnno)));
} 
LLWAELA_fnno = KLWAELA;
 /* line 301: */
MLWAELA_fid = HSUAELA_findid(Id);
 /* line 302: */
VLPAELA_idinfo = (*(*(&(MLWAELA_fid->Idinfo))));
 /* line 303: */
 /* line 304: */
if ( !(*(&((&VLPAELA_idinfo)->Inscope))) )
{ 
LKPAELA_fp3 = Id;
 /* line 305: */
SZPAELA_faultp(12, A_HVEC(OLWAELA,A_UNITE(NLWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 306: */
PLWAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( PLWAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
QLWAELA_nd = (PLWAELA.data.mode10);
{ 
LKPAELA_fp3 = Id;
 /* line 307: */
SZPAELA_faultp(10, A_HVEC(SLWAELA,A_UNITE(RLWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
break;
case 9: /* STRUCT(INT)  */
TLWAELA_r = (PLWAELA.data.mode9);
 /* line 308: */
{ 
LKPAELA_fp3 = Id;
 /* line 309: */
 /* line 310: */
 /* line 311: */
SZPAELA_faultp(11, A_HVEC(VLWAELA,A_UNITE(ULWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
break;
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
WLWAELA_d = (PLWAELA.data.mode5);
 /* line 312: */
 /* line 313: */
if ( ((*(&((&VLPAELA_idinfo)->Scope)))==LLWAELA_fnno) )
{ 
 /* line 314: */
if ( ZMPAELA_ioid )
{ 
XLWAELA.Source = (*(&(WLWAELA_d->Jsource)));
XLWAELA.Sink = (*(&(WLWAELA_d->Jsink)));
YLWAELA = A_HEAP(A68_217 ) ;
(*YLWAELA) = XLWAELA ;
VMPAELA_joinup = A_UNITE(ZLWAELA,mode4,4,YLWAELA);
 /* line 315: */
 /* line 316: */
 /* line 317: */
XLPAELA_portinfo = A_UNITE(AMWAELA,mode3,3,DRCAELA_flt);
} 
else
{ 
if ( ANPAELA_lhsjoin )
{ 
VMPAELA_joinup = (*(&(WLWAELA_d->Jsource)));
 /* line 318: */
 /* line 319: */
XLPAELA_portinfo = (*(&(WLWAELA_d->Input)));
} 
else
{ 
VMPAELA_joinup = (*(&(WLWAELA_d->Jsink)));
 /* line 320: */
 /* line 321: */
XLPAELA_portinfo = (*(&(WLWAELA_d->Output)));
} 
} 
 /* line 322: */
 /* line 324: */
BMWAELA = CFTAELA_id_outside_if((*(&((&VLPAELA_idinfo)->Id))), ENPAELA_scopestack, OLPAELA_ids);
if ( BMWAELA )
{if ( !ZMPAELA_ioid )
{ 
CMWAELA = !ANPAELA_lhsjoin;
if ( ! CMWAELA )
{CMWAELA = WCVAELA_has_fntype((&VMPAELA_joinup));
}
 /* line 325: */
DMWAELA = CMWAELA;
} 
else
{ 
 /* line 326: */
 /* line 327: */
DMWAELA = A68_TRUE;
} 
BMWAELA = DMWAELA;
}
if ( BMWAELA )
{ 
LKPAELA_fp3 = (*(&((&VLPAELA_idinfo)->Id)));
 /* line 328: */
 /* line 329: */
SZPAELA_faultp(62, A_HVEC(FMWAELA,A_UNITE(EMWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 330: */
AEVAELA_mark_join((&VMPAELA_joinup), SRCAELA_jfault, A68_FALSE);
 /* line 331: */
VMPAELA_joinup = A_UNITE(GMWAELA,mode7,7,DRCAELA_flt);
} 
else
{ 
 /* line 332: */
HMWAELA = ((*(&(WLWAELA_d->Origin)))==KSCAELA_maketok);
if ( ! HMWAELA )
{HMWAELA = ((*(&(WLWAELA_d->Origin)))==ISCAELA_lettok);
}
 /* line 333: */
if ( HMWAELA )
{ /* line 334: */
HMWAELA = NFTAELA_repl_local_make((*(&((&VLPAELA_idinfo)->Id))), ENPAELA_scopestack, OLPAELA_ids);
}
if ( HMWAELA )
{ 
AEVAELA_mark_join((&VMPAELA_joinup), RRCAELA_jcheck, A68_FALSE);
 /* line 335: */
VMPAELA_joinup = A_UNITE(IMWAELA,mode7,7,DRCAELA_flt);
} 
 /* line 336: */
 /* line 337: */
 /* line 338: */
 /* line 339: */
goto JLWAELA_ok;
} 
} 
else
{ 
LKPAELA_fp3 = Id;
 /* line 340: */
 /* line 341: */
SZPAELA_faultp(12, A_HVEC(KMWAELA,A_UNITE(JMWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
break;
case 7: /* STRUCT(MODE172,INT)  */
LMWAELA_v = (PLWAELA.data.mode7);
 /* line 342: */
if ( ((*(&((&VLPAELA_idinfo)->Scope)))==LLWAELA_fnno) )
{ 
 /* line 343: */
goto JLWAELA_ok;
} 
else
{ 
LKPAELA_fp3 = Id;
 /* line 344: */
 /* line 345: */
SZPAELA_faultp(12, A_HVEC(NMWAELA,A_UNITE(MMWAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
break;
default: 
 /* line 346: */
 /* line 347: */
goto JLWAELA_ok;
break;
} 
} 
 /* line 348: */
OMWAELA.Scope = LLWAELA_fnno;
OMWAELA.Vnno = 0;
OMWAELA.Text = A68_TRUE;
OMWAELA.Outofdate = A68_FALSE;
OMWAELA.Inscope = A68_TRUE;
OMWAELA.Export = A68_FALSE;
OMWAELA.Id = Id;
OMWAELA.U = A_UNITE(PMWAELA,mode8,8,DRCAELA_flt);
VLPAELA_idinfo = OMWAELA;
BTUAELA_newid(Id, A_UNITE(QMWAELA,mode8,8,DRCAELA_flt));
 /* line 349: */
JLWAELA_ok:
 /* line 351: */
RTUAELA_usedid(MLWAELA_fid, ENPAELA_scopestack);
} 
A_PROC_EXIT(findidcall);
return;
} 
#undef NL

A68_VOID  RMWAELA_ioidpr(void)
{ 
A_PROC_ENTRY(ioidpr);
ZMPAELA_ioid = A68_TRUE;
A_PROC_EXIT(ioidpr);
return;
} 
#undef NL

A68_VOID  SMWAELA_findidpr(void)
{ 
A_PROC_ENTRY(findidpr);
HLWAELA_findidcall(CIPAELA_ident);
A_PROC_EXIT(findidpr);
return;
} 
#undef NL

A68_VOID  TMWAELA_findidpr2(void)
{ 
A_PROC_ENTRY(findidpr2);
{ 
 /* line 360: */
if ( (ZIPAELA_paramnamestack!=XIPAELA_nonames) )
{ 
HLWAELA_findidcall((*(&(ZIPAELA_paramnamestack->Id))));
 /* line 361: */
 /* line 362: */
 /* line 363: */
ZIPAELA_paramnamestack = (*(&(ZIPAELA_paramnamestack->Rest)));
} 
} 
A_PROC_EXIT(findidpr2);
return;
} 
#undef NL

A68_VOID  UMWAELA_attrdec1(void)
{ 
A68_317  VMWAELA;  /* collateral clause result */
A68_317 * WMWAELA;  /* YIELD */
A68_32  XMWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  YMWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attrdec1);
{ 
VMWAELA.Ids = OLPAELA_ids;
VMWAELA.Macsort = XWCAELA_expl_par;
VMWAELA.Xno = IKPAELA_cattrno+=1;
VMWAELA.New = A68_FALSE;
VMWAELA.Rest = ZNPAELA_iddecs;
WMWAELA = A_HEAP(A68_317 ) ;
(*WMWAELA) = VMWAELA ;
ZNPAELA_iddecs = WMWAELA;
 /* line 368: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(XMWAELA,WLCAELA_kattr,A68_INT )),(A_HVEC(XMWAELA,WLCAELA_kattr,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(YMWAELA,UOCAELA_attrname,A68_INT )),(A_HVEC(YMWAELA,UOCAELA_attrname,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 369: */
A_CALLPROC(WOPAELA_outid,(CIPAELA_ident),(CIPAELA_ident,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(attrdec1);
return;
} 
#undef NL

A68_VOID  ZMWAELA_attrdec2(void)
{ 
A68_244 * ANWAELA_aids;
A68_254 * BNWAELA_attrdef;
A68_254  CNWAELA;  /* collateral clause result */
A68_170  DNWAELA;  /* OPERATORS - mode -> union mode */
A68_170 * ENWAELA;  /* YIELD */
A68_199  FNWAELA;  /* OPERATORS - mode -> union mode */
A68_170  GNWAELA;  /* OPERATORS - mode -> union mode */
A68_170 * HNWAELA;  /* YIELD */
A68_444  INWAELA;  /* collateral clause result */
A68_32  JNWAELA;  /* OPERATORS - istruct -> vector */
A68_396  KNWAELA;  /* collateral clause result */
A68_32  LNWAELA;  /* OPERATORS - istruct -> vector */
A68_32  MNWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attrdec2);
{ 
ANWAELA_aids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 373: */
BNWAELA_attrdef = (A_HEAP(A68_254 ));
CNWAELA.Idinfo = (*(&(ANWAELA_aids->Idinfo)));
CNWAELA.Attrno = (*(&(ZNPAELA_iddecs->Xno)));
CNWAELA.Attr = FJPAELA_attr;
(*BNWAELA_attrdef) = CNWAELA;
 /* line 374: */
ENWAELA = (&((&VNPAELA_attrid)->A)) ;
(*ENWAELA) = A_UNITE(DNWAELA,mode1,1,BNWAELA_attrdef);
 /* line 375: */
UIQAELA_setidunn((*(&(ANWAELA_aids->Idinfo))), A_UNITE(FNWAELA,mode6,6,VNPAELA_attrid));
 /* line 376: */
HNWAELA = (&((&VNPAELA_attrid)->A)) ;
(*HNWAELA) = A_UNITE(GNWAELA,mode7,7,DRCAELA_flt);
 /* line 377: */
 /* line 378: */
if ( (FKPAELA_cfnno==0) )
{ 
if ( GUSAELA_samespecid((*(&(ANWAELA_aids->Idinfo))), (*(&(ANWAELA_aids->Rest)))) )
{ 
OLPAELA_ids = (*(&(ANWAELA_aids->Rest)));
} 
 /* line 379: */
 /* line 380: */
ULPAELA_k = (*(&((*(&(KQUAELA_id_in_scope((*(&((*(&(ANWAELA_aids->Idinfo)))->Id))), CUCAELA_nilscope, A68_FALSE)->Idinfo)))->Vnno)));
 /* line 381: */
INWAELA.data[0] = MLCAELA_dummy;
INWAELA.data[1] = A_ABS(ULPAELA_k);
INWAELA.data[2] = IKPAELA_cattrno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(JNWAELA,INWAELA,3,A68_INT )),(A_HISVEC(JNWAELA,INWAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 382: */
 /* line 383: */
WGQAELA_outextattrs(OLPAELA_ids);
} 
else
{ 
KNWAELA.data[0] = MLCAELA_dummy;
KNWAELA.data[1] = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 384: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(LNWAELA,KNWAELA,2,A68_INT )),(A_HISVEC(LNWAELA,KNWAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 385: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 386: */
XQQAELA_outattrs(FJPAELA_attr);
 /* line 387: */
 /* line 388: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(MNWAELA,XLCAELA_kend,A68_INT )),(A_HVEC(MNWAELA,XLCAELA_kend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 389: */
 /* line 390: */
 /* line 391: */
UHQAELA_unscopeids(OLPAELA_ids);
} 
} 
A_PROC_EXIT(attrdec2);
return;
} 
#undef NL

A68_VOID  NNWAELA_attr1(void)
{ 
A68_170  ONWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attr1);
FJPAELA_attr = A_UNITE(ONWAELA,mode6,6,MRCAELA_attrnull);
A_PROC_EXIT(attr1);
return;
} 
#undef NL

A68_VOID  PNWAELA_newattid(void)
{ 
A_PROC_ENTRY(newattid);
EJPAELA_atid = CIPAELA_ident;
A_PROC_EXIT(newattid);
return;
} 
#undef NL

A68_VOID  QNWAELA_attrnamepr(void)
{ 
A68_199  RNWAELA;  /* united object - for case conformity */
A68_205  SNWAELA_ad;
A68_170  TNWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrnamepr);
{ 
HLWAELA_findidcall(EJPAELA_atid);
 /* line 399: */
 /* line 400: */
RNWAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( RNWAELA.mode )
{ 
case 6: /* STRUCT(MODE170)  */
SNWAELA_ad = (RNWAELA.data.mode6);
 /* line 401: */
FJPAELA_attr = SNWAELA_ad.A;
break;
default: 
FJPAELA_attr = A_UNITE(TNWAELA,mode7,7,DRCAELA_flt);
 /* line 402: */
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 403: */
 /* line 404: */
 /* line 405: */
UQPAELA_fault(229, VJAAOSI_nullmsg);
break;
} 
} 
A_PROC_EXIT(attrnamepr);
return;
} 
#undef NL

A68_VOID  UNWAELA_attrdata1(void)
{ 
A68_255  VNWAELA;  /* collateral clause result */
A68_255 * WNWAELA;  /* YIELD */
A68_170  XNWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrdata1);
VNWAELA.Classname = TTCAOST_nullid;
VNWAELA.Data = BJPAELA_strings;
WNWAELA = A_HEAP(A68_255 ) ;
(*WNWAELA) = VNWAELA ;
FJPAELA_attr = A_UNITE(XNWAELA,mode2,2,WNWAELA);
A_PROC_EXIT(attrdata1);
return;
} 
#undef NL

A68_VOID  YNWAELA_attrdata2(void)
{ 
A68_255  ZNWAELA;  /* collateral clause result */
A68_255 * AOWAELA;  /* YIELD */
A68_170  BOWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrdata2);
{ 
QGTAELA_addclassname(EJPAELA_atid);
 /* line 414: */
ZNWAELA.Classname = EJPAELA_atid;
 /* line 415: */
ZNWAELA.Data = BJPAELA_strings;
AOWAELA = A_HEAP(A68_255 ) ;
(*AOWAELA) = ZNWAELA ;
FJPAELA_attr = A_UNITE(BOWAELA,mode2,2,AOWAELA);
} 
A_PROC_EXIT(attrdata2);
return;
} 
#undef NL

A68_VOID  COWAELA_attrstr1(void)
{ 
A_PROC_ENTRY(attrstr1);
{ 
GJPAELA_attrstr = MQCAELA_nilattrstr;
HJPAELA_nextattr = (&GJPAELA_attrstr);
} 
A_PROC_EXIT(attrstr1);
return;
} 
#undef NL

A68_VOID  DOWAELA_attrstr2(void)
{ 
A68_256  EOWAELA;  /* collateral clause result */
A68_256 * FOWAELA;  /* YIELD */
A_PROC_ENTRY(attrstr2);
{ 
EOWAELA.Elem = FJPAELA_attr;
EOWAELA.Rest = MQCAELA_nilattrstr;
FOWAELA = A_HEAP(A68_256 ) ;
(*FOWAELA) = EOWAELA ;
(*HJPAELA_nextattr) = FOWAELA;
 /* line 422: */
 /* line 423: */
HJPAELA_nextattr = (&((*HJPAELA_nextattr)->Rest));
} 
A_PROC_EXIT(attrstr2);
return;
} 
#undef NL

A68_VOID  GOWAELA_attrstr3(void)
{ 
A68_170  HOWAELA;  /* clause result */
A68_170  IOWAELA;  /* OPERATORS - mode -> union mode */
A68_257 * JOWAELA;  /* YIELD */
A68_170  KOWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attrstr3);
 /* line 427: */
 /* line 428: */
if ( ((*(&(GJPAELA_attrstr->Rest)))==MQCAELA_nilattrstr) )
{ 
 /* line 429: */
JOWAELA = SKDAELA_makeabracket((*(&(GJPAELA_attrstr->Elem)))) ;
HOWAELA = A_UNITE(IOWAELA,mode4,4,JOWAELA);
} 
else
{ 
 /* line 430: */
HOWAELA = A_UNITE(KOWAELA,mode3,3,GJPAELA_attrstr);
} 
FJPAELA_attr = HOWAELA;
A_PROC_EXIT(attrstr3);
return;
} 
#undef NL

A68_VOID  LOWAELA_sattrpr(void)
{ 
A_PROC_ENTRY(sattrpr);
BMPAELA_which = OXCAELA_wattr;
A_PROC_EXIT(sattrpr);
return;
} 
#undef NL

A68_VOID  MOWAELA_sattrid(void)
{ 
A_PROC_ENTRY(sattrid);
{ 
EJPAELA_atid = (*(&(ZIPAELA_paramnamestack->Id)));
 /* line 437: */
 /* line 438: */
ZIPAELA_paramnamestack = (*(&(ZIPAELA_paramnamestack->Rest)));
} 
A_PROC_EXIT(sattrid);
return;
} 
#undef NL

A68_VOID  NOWAELA_attrcall(void)
{ 
A68_170 * OOWAELA;  /* YIELD */
A_PROC_ENTRY(attrcall);
OOWAELA = (&((*(&(GMPAELA_fncallstack->Fncall)))->Attr)) ;
(*OOWAELA) = FJPAELA_attr;
A_PROC_EXIT(attrcall);
return;
} 
#undef NL

A68_VOID  POWAELA_outattrlist(void)
{ 
A_PROC_ENTRY(outattrlist);
XQQAELA_outattrs(FJPAELA_attr);
A_PROC_EXIT(outattrlist);
return;
} 
#undef NL

A68_VOID  QOWAELA_stackname(void)
{ 
A68_246  ROWAELA;  /* collateral clause result */
A68_246 * SOWAELA;  /* YIELD */
A_PROC_ENTRY(stackname);
ROWAELA.Id = ZHPAELA_compsymb;
ROWAELA.Rest = ZIPAELA_paramnamestack;
SOWAELA = A_HEAP(A68_246 ) ;
(*SOWAELA) = ROWAELA ;
ZIPAELA_paramnamestack = SOWAELA;
A_PROC_EXIT(stackname);
return;
} 
#undef NL

A68_VOID  TOWAELA_stackid(void)
{ 
A68_246  UOWAELA;  /* collateral clause result */
A68_246 * VOWAELA;  /* YIELD */
A_PROC_ENTRY(stackid);
UOWAELA.Id = CIPAELA_ident;
UOWAELA.Rest = ZIPAELA_paramnamestack;
VOWAELA = A_HEAP(A68_246 ) ;
(*VOWAELA) = UOWAELA ;
ZIPAELA_paramnamestack = VOWAELA;
A_PROC_EXIT(stackid);
return;
} 
#undef NL

A68_VOID  WOWAELA_classlist(void)
{ 
A68_246 * XOWAELA_list;
A68_BOOL  YOWAELA_first;
A68_46  ZOWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(classlist);
 /* line 453: */
if ( (CJPAELA_classnames!=NQCAELA_nilstringlist) )
{ 
XOWAELA_list = CJPAELA_classnames;
 /* line 454: */
YOWAELA_first = A68_TRUE;
 /* line 455: */
CRPAELA_nofault(245, VJAAOSI_nullmsg);
 /* line 456: */
CRPAELA_nofault(242, VJAAOSI_nullmsg);
 /* line 457: */
for ( ;; )
{ 
 /* line 458: */
if ( !((XOWAELA_list!=NQCAELA_nilstringlist)) ) break;
if ( YOWAELA_first )
{ 
YOWAELA_first = A68_FALSE;
} 
else
{ 
CRPAELA_nofault(243, VJAAOSI_nullmsg);
} 
 /* line 459: */
CRPAELA_nofault(244, A_HVEC(ZOWAELA,(*(&(XOWAELA_list->Id))),A68_VC ));
 /* line 460: */
 /* line 461: */
XOWAELA_list = (*(&(XOWAELA_list->Rest)));
}
 /* line 462: */
CRPAELA_nofault(245, VJAAOSI_nullmsg);
 /* line 463: */
 /* line 464: */
CRPAELA_nofault(245, VJAAOSI_nullmsg);
} 
A_PROC_EXIT(classlist);
return;
} 
#undef NL

A68_VOID  APWAELA_startstrings(void)
{ 
A_PROC_ENTRY(startstrings);
BJPAELA_strings = NQCAELA_nilstringlist ;
DJPAELA_nextstring = (&BJPAELA_strings);
A_PROC_EXIT(startstrings);
return;
} 
#undef NL

A68_VOID  BPWAELA_stackstring(void)
{ 
A68_246  CPWAELA;  /* collateral clause result */
A68_VC  HPWAELA;  /* avoid structure result */
A68_VC  IPWAELA;  /* OPERATORS - trim index */
A68_VC  JPWAELA;  /* OPERATORS - assign op */
A68_246 * KPWAELA;  /* YIELD */
A_PROC_ENTRY(stackstring);
{ 
 /* line 470: */
 /* line 471: */
EPWAELA_generator( A68_FALSE, &HPWAELA );
JPWAELA = A_VTRIM(IPWAELA,(JIPAELA_string),A_VTSCRIPT(&(IPWAELA.upb),(JIPAELA_string).upb,1,LIPAELA_stringsize)) ;
A_VASSIGN2(JPWAELA,HPWAELA,A68_CHAR ) ;
CPWAELA.Id = HPWAELA;
CPWAELA.Rest = NQCAELA_nilstringlist;
KPWAELA = A_HEAP(A68_246 ) ;
(*KPWAELA) = CPWAELA ;
(*DJPAELA_nextstring) = KPWAELA;
 /* line 472: */
 /* line 473: */
DJPAELA_nextstring = (&((*DJPAELA_nextstring)->Rest));
} 
A_PROC_EXIT(stackstring);
return;
} 
#undef NL

A68_VOID  LPWAELA_checkbool(void)
{ 
A68_185  MPWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checkbool);
 /* line 477: */
if ( (BMPAELA_which!=IXCAELA_wbool) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(13, VJAAOSI_nullmsg);
} 
 /* line 478: */
SLPAELA_integer = A_UNITE(MPWAELA,mode4,4,DRCAELA_flt);
 /* line 479: */
BMPAELA_which = IXCAELA_wbool;
} 
A_PROC_EXIT(checkbool);
return;
} 
#undef NL

A68_VOID  NPWAELA_checkinteger(void)
{ 
A68_185  OPWAELA;  /* OPERATORS - mode -> union mode */
A68_185  PPWAELA;  /* avoid structure result */
A_PROC_ENTRY(checkinteger);
 /* line 483: */
if ( (BMPAELA_which!=JXCAELA_winteger) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(14, VJAAOSI_nullmsg);
} 
 /* line 484: */
SLPAELA_integer = A_UNITE(OPWAELA,mode4,4,DRCAELA_flt);
 /* line 485: */
BMPAELA_which = JXCAELA_winteger;
} 
else
{ 
 /* line 486: */
CDRAELA_simplify( SLPAELA_integer, A68_FALSE, &PPWAELA );
SLPAELA_integer = PPWAELA;
} 
A_PROC_EXIT(checkinteger);
return;
} 
#undef NL

A68_VOID  QPWAELA_checktypepr(void)
{ 
A68_172  RPWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checktypepr);
 /* line 490: */
if ( (BMPAELA_which!=KXCAELA_wtype) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(15, VJAAOSI_nullmsg);
} 
 /* line 491: */
RLPAELA_type = A_UNITE(RPWAELA,mode10,10,DRCAELA_flt);
 /* line 492: */
BMPAELA_which = KXCAELA_wtype;
} 
A_PROC_EXIT(checktypepr);
return;
} 
#undef NL

A68_VOID  SPWAELA_checkctype(void)
{ 
A68_222  TPWAELA;  /* OPERATORS - mode -> union mode */
A68_172  UPWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checkctype);
 /* line 496: */
if ( (BMPAELA_which!=LXCAELA_wctype) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(16, VJAAOSI_nullmsg);
} 
 /* line 497: */
OMPAELA_ctype = A_UNITE(TPWAELA,mode10,10,DRCAELA_flt);
RLPAELA_type = A_UNITE(UPWAELA,mode10,10,DRCAELA_flt);
 /* line 498: */
BMPAELA_which = LXCAELA_wctype;
} 
A_PROC_EXIT(checkctype);
return;
} 
#undef NL

A68_VOID  VPWAELA_checkcorttype(void)
{ 
A68_BOOL  WPWAELA;  /* optbool result */
A68_222  XPWAELA;  /* OPERATORS - mode -> union mode */
A68_172  YPWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checkcorttype);
WPWAELA = (BMPAELA_which!=LXCAELA_wctype);
if ( WPWAELA )
{WPWAELA = (BMPAELA_which!=KXCAELA_wtype);
}
if ( WPWAELA )
{WPWAELA = (BMPAELA_which!=OXCAELA_wattr);
}
 /* line 502: */
if ( WPWAELA )
{WPWAELA = (BMPAELA_which!=MXCAELA_wflt);
}
 /* line 503: */
if ( WPWAELA )
{ 
UQPAELA_fault(17, VJAAOSI_nullmsg);
 /* line 504: */
OMPAELA_ctype = A_UNITE(XPWAELA,mode10,10,DRCAELA_flt);
RLPAELA_type = A_UNITE(YPWAELA,mode10,10,DRCAELA_flt);
 /* line 505: */
BMPAELA_which = MXCAELA_wflt;
} 
A_PROC_EXIT(checkcorttype);
return;
} 
#undef NL

A68_VOID  ZPWAELA_br1(void)
{ 
A_PROC_ENTRY(br1);
TNPAELA_palts1 = (A68_249 *)A68_NIL;
A_PROC_EXIT(br1);
return;
} 
#undef NL

A68_VOID  AQWAELA_br2(void)
{ 
A68_249  BQWAELA;  /* collateral clause result */
A68_249 * CQWAELA;  /* YIELD */
A_PROC_ENTRY(br2);
{ 
BQWAELA.Idinfo = (*(&(UNPAELA_paltstack->Idinfo)));
BQWAELA.U = (*(&(UNPAELA_paltstack->U)));
BQWAELA.Rest = TNPAELA_palts1;
CQWAELA = A_HEAP(A68_249 ) ;
(*CQWAELA) = BQWAELA ;
TNPAELA_palts1 = CQWAELA;
 /* line 513: */
 /* line 514: */
UNPAELA_paltstack = (*(&(UNPAELA_paltstack->Rest)));
} 
A_PROC_EXIT(br2);
return;
} 
#undef NL

A68_VOID  DQWAELA_br3(void)
{ 
A68_172 * EQWAELA;  /* YIELD */
A68_172 ** FQWAELA;  /* YIELD */
A_PROC_ENTRY(br3);
EQWAELA = A_HEAP(A68_172 ) ;
(*EQWAELA) = RLPAELA_type ;
FQWAELA = (&(UNPAELA_paltstack->U)) ;
(*FQWAELA) = EQWAELA;
A_PROC_EXIT(br3);
return;
} 
#undef NL

A68_VOID  GQWAELA_stackpalt(void)
{ 
A68_249  HQWAELA;  /* collateral clause result */
A68_249 * IQWAELA;  /* YIELD */
A_PROC_ENTRY(stackpalt);
HQWAELA.Idinfo = (*(&(OLPAELA_ids->Idinfo)));
HQWAELA.U = (A68_172 *)A68_NIL;
HQWAELA.Rest = UNPAELA_paltstack;
IQWAELA = A_HEAP(A68_249 ) ;
(*IQWAELA) = HQWAELA ;
UNPAELA_paltstack = IQWAELA;
A_PROC_EXIT(stackpalt);
return;
} 
#undef NL

A68_VOID  JQWAELA_br6(void)
{ 
A68_173  KQWAELA;  /* collateral clause result */
A68_247  LQWAELA;  /* OPERATORS - mode -> union mode */
A68_173 * MQWAELA;  /* YIELD */
A68_172  NQWAELA;  /* OPERATORS - mode -> union mode */
A68_244 * OQWAELA_tids;
A68_INT  PQWAELA_i;
A68_203  QQWAELA;  /* collateral clause result */
A68_199  RQWAELA;  /* OPERATORS - mode -> union mode */
A68_199  SQWAELA;  /* united object - for case conformity */
A68_182  TQWAELA_f1;
A68_199  UQWAELA;  /* OPERATORS - mode -> union mode */
A68_199 * VQWAELA;  /* YIELD */
A_PROC_ENTRY(br6);
{ 
KQWAELA.Idinfo = (*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)));
KQWAELA.Typeno = (*(&(ZNPAELA_iddecs->Xno)));
KQWAELA.U = A_UNITE(LQWAELA,mode2,2,TNPAELA_palts1);
MQWAELA = A_HEAP(A68_173 ) ;
(*MQWAELA) = KQWAELA ;
RLPAELA_type = A_UNITE(NQWAELA,mode1,1,MQWAELA);
 /* line 524: */
OQWAELA_tids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 525: */
for ( PQWAELA_i = 1;;
PQWAELA_i += 1 ) 
{ 
 /* line 526: */
if ( !((TNPAELA_palts1!=BQCAELA_nilpalts)) ) break;
QQWAELA.Type = RLPAELA_type;
QQWAELA.Index = PQWAELA_i;
UIQAELA_setidunn((*(&(TNPAELA_palts1->Idinfo))), A_UNITE(RQWAELA,mode4,4,QQWAELA));
 /* line 527: */
if ( (FKPAELA_cfnno==0) )
{ 
GUSAELA_samespecid((*(&(TNPAELA_palts1->Idinfo))), (*(&(OQWAELA_tids->Rest))));
} 
 /* line 528: */
SQWAELA = (*(&((*(&(TNPAELA_palts1->Idinfo)))->U))) ;
switch ( SQWAELA.mode )
{ 
case 8: /* STRUCT(INT)  */
TQWAELA_f1 = (SQWAELA.data.mode8);
VQWAELA = (&((*(&(OQWAELA_tids->Idinfo)))->U)) ;
(*VQWAELA) = A_UNITE(UQWAELA,mode8,8,DRCAELA_flt);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 529: */
 /* line 530: */
TNPAELA_palts1 = (*(&(TNPAELA_palts1->Rest)));
}
 /* line 531: */
 /* line 532: */
BMPAELA_which = KXCAELA_wtype;
} 
A_PROC_EXIT(br6);
return;
} 
#undef NL

A68_VOID  WQWAELA_br7(void)
{ 
A68_445  XQWAELA;  /* collateral clause result */
A68_263  YQWAELA;  /* OPERATORS - unite union */
A68_263  ZQWAELA;  /* OPERATORS - unite union */
A68_262  ARWAELA;  /* OPERATORS - istruct -> vector */
A68_173  BRWAELA;  /* collateral clause result */
A68_248  CRWAELA;  /* collateral clause result */
A68_247  DRWAELA;  /* OPERATORS - mode -> union mode */
A68_173 * ERWAELA;  /* YIELD */
A68_172  FRWAELA;  /* OPERATORS - mode -> union mode */
A68_203  GRWAELA;  /* collateral clause result */
A68_199  HRWAELA;  /* OPERATORS - mode -> union mode */
A68_199  IRWAELA;  /* united object - for case conformity */
A68_182  JRWAELA_f1;
A68_199  KRWAELA;  /* OPERATORS - mode -> union mode */
A68_199 * LRWAELA;  /* YIELD */
A_PROC_ENTRY(br7);
{ 
TLPAELA_integer1 = (*(&(DOPAELA_integerstack->I)));
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 536: */
RKPAELA_fp5 = TLPAELA_integer1;
SKPAELA_fp6 = SLPAELA_integer;
 /* line 537: */
 /* line 539: */
XQWAELA.data[0] = A_UTABUNITE(YQWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
XQWAELA.data[1] = A_UTABUNITE(ZQWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), TLPAELA_integer1, 111, A_HISVEC(ARWAELA,XQWAELA,2,A68_263 ));
 /* line 540: */
BRWAELA.Idinfo = (*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)));
 /* line 541: */
BRWAELA.Typeno = (*(&(ZNPAELA_iddecs->Xno)));
CRWAELA.Idinfo = AOPAELA_prangedec;
CRWAELA.Lwb = TLPAELA_integer1;
CRWAELA.Upb = SLPAELA_integer;
BRWAELA.U = A_UNITE(DRWAELA,mode1,1,CRWAELA);
ERWAELA = A_HEAP(A68_173 ) ;
(*ERWAELA) = BRWAELA ;
RLPAELA_type = A_UNITE(FRWAELA,mode1,1,ERWAELA);
 /* line 542: */
GRWAELA.Type = RLPAELA_type;
GRWAELA.Index = 0;
UIQAELA_setidunn(AOPAELA_prangedec, A_UNITE(HRWAELA,mode4,4,GRWAELA));
 /* line 543: */
if ( (FKPAELA_cfnno==0) )
{ 
GUSAELA_samespecid(AOPAELA_prangedec, (*(&((*(&(ZNPAELA_iddecs->Ids)))->Rest))));
} 
 /* line 544: */
IRWAELA = (*(&(AOPAELA_prangedec->U))) ;
switch ( IRWAELA.mode )
{ 
case 8: /* STRUCT(INT)  */
JRWAELA_f1 = (IRWAELA.data.mode8);
LRWAELA = (&((*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)))->U)) ;
(*LRWAELA) = A_UNITE(KRWAELA,mode8,8,DRCAELA_flt);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 545: */
 /* line 546: */
BMPAELA_which = KXCAELA_wtype;
} 
A_PROC_EXIT(br7);
return;
} 
#undef NL

A68_VOID  MRWAELA_br8(void)
{ 
A_PROC_ENTRY(br8);
AOPAELA_prangedec = (*(&(OLPAELA_ids->Idinfo)));
A_PROC_EXIT(br8);
return;
} 
#undef NL

A68_VOID  NRWAELA_sid(void)
{ 
A68_199  RRWAELA;  /* united object - for case conformity */
A68_201  SRWAELA_ti;
A68_172 * TRWAELA;  /* YIELD */
A68_230 * URWAELA;  /* YIELD */
A68_222  VRWAELA;  /* OPERATORS - mode -> union mode */
A68_200  WRWAELA_ii;
A68_203  XRWAELA_pi;
A68_203 * YRWAELA;  /* YIELD */
A68_222  ZRWAELA;  /* OPERATORS - mode -> union mode */
A68_202  ASWAELA_ci;
A68_172  BSWAELA;  /* avoid structure result */
A68_205  CSWAELA_ad;
A68_204 * DSWAELA_d;
A68_172  ESWAELA;  /* avoid structure result */
A68_INT * FSWAELA;  /* YIELD */
A68_185  GSWAELA;  /* OPERATORS - mode -> union mode */
A68_182  HSWAELA_f;
A_PROC_ENTRY(sid);
{ 
 /* line 553: */
RRWAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( RRWAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
SRWAELA_ti = (RRWAELA.data.mode2);
 /* line 554: */
{ 
RLPAELA_type = SRWAELA_ti.T;
 /* line 555: */
 /* line 556: */
if ( ((*(&(DNPAELA_currentstate->State)))==YPCAELA_inconst) )
{ 
TRWAELA = (&((&IRCAELA_cnullt)->Ct)) ;
(*TRWAELA) = RLPAELA_type;
URWAELA = A_HEAP(A68_230 ) ;
(*URWAELA) = IRCAELA_cnullt ;
OMPAELA_ctype = A_UNITE(VRWAELA,mode9,9,URWAELA);
 /* line 557: */
BMPAELA_which = LXCAELA_wctype;
} 
else
{ 
 /* line 558: */
 /* line 559: */
 /* line 560: */
BMPAELA_which = KXCAELA_wtype;
} 
} 
break;
case 1: /* STRUCT(MODE185)  */
WRWAELA_ii = (RRWAELA.data.mode1);
{ 
SLPAELA_integer = WRWAELA_ii.I;
 /* line 561: */
BMPAELA_which = JXCAELA_winteger;
} 
break;
case 4: /* STRUCT(MODE172,INT)  */
XRWAELA_pi = (RRWAELA.data.mode4);
{ 
RLPAELA_type = XRWAELA_pi.Type;
YRWAELA = A_HEAP(A68_203 ) ;
(*YRWAELA) = XRWAELA_pi ;
OMPAELA_ctype = A_UNITE(ZRWAELA,mode4,4,YRWAELA);
 /* line 562: */
BMPAELA_which = LXCAELA_wctype;
} 
break;
case 3: /* STRUCT(MODE222)  */
ASWAELA_ci = (RRWAELA.data.mode3);
{ 
A_CALLPROC(FUQAELA_ctypetotype,(ASWAELA_ci.Ct, &BSWAELA),(ASWAELA_ci.Ct, &BSWAELA,(FUQAELA_ctypetotype).nonlocals));
RLPAELA_type = BSWAELA;
 /* line 563: */
OMPAELA_ctype = ASWAELA_ci.Ct;
 /* line 564: */
 /* line 565: */
BMPAELA_which = LXCAELA_wctype;
} 
break;
case 6: /* STRUCT(MODE170)  */
CSWAELA_ad = (RRWAELA.data.mode6);
{ 
FJPAELA_attr = CSWAELA_ad.A;
 /* line 566: */
BMPAELA_which = OXCAELA_wattr;
} 
break;
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
DSWAELA_d = (RRWAELA.data.mode5);
 /* line 567: */
 /* line 568: */
if ( QLPAELA_inarith )
{ 
 /* line 569: */
VIDAELA_primtype( (*(&(DSWAELA_d->Type))), A68_TRUE, &ESWAELA );
if ( !NZSAELA_isprimrange(ESWAELA) )
{ 
 /* line 570: */
UQPAELA_fault(18, VJAAOSI_nullmsg);
} 
 /* line 571: */
FSWAELA = (&((&JRCAELA_ip)->P)) ;
(*FSWAELA) = (*(&(DSWAELA_d->Decno)));
SLPAELA_integer = A_UNITE(GSWAELA,mode11,11,JRCAELA_ip);
 /* line 572: */
BMPAELA_which = JXCAELA_winteger;
} 
else
{ 
 /* line 573: */
 /* line 574: */
goto QRWAELA_flt;
} 
break;
case 8: /* STRUCT(INT)  */
HSWAELA_f = (RRWAELA.data.mode8);
 /* line 575: */
BMPAELA_which = MXCAELA_wflt;
break;
default: 
 /* line 576: */
goto QRWAELA_flt;
break;
} 
 /* line 577: */
 /* line 578: */
 /* line 579: */
/*SKIP*/;
goto ORWAELA;
QRWAELA_flt:
BMPAELA_which = MXCAELA_wflt;
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 580: */
 /* line 582: */
 /* line 584: */
UQPAELA_fault(125, VJAAOSI_nullmsg);
ORWAELA: ;
} 
A_PROC_EXIT(sid);
return;
} 
#undef NL

A68_VOID  ISWAELA_typetoctype(void)
{ 
A68_172 * JSWAELA;  /* YIELD */
A68_230 * KSWAELA;  /* YIELD */
A68_222  LSWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(typetoctype);
{ 
 /* line 588: */
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
JSWAELA = (&((&IRCAELA_cnullt)->Ct)) ;
(*JSWAELA) = RLPAELA_type;
KSWAELA = A_HEAP(A68_230 ) ;
(*KSWAELA) = IRCAELA_cnullt ;
OMPAELA_ctype = A_UNITE(LSWAELA,mode9,9,KSWAELA);
 /* line 589: */
 /* line 590: */
BMPAELA_which = LXCAELA_wctype;
} 
} 
A_PROC_EXIT(typetoctype);
return;
} 
#undef NL

A68_VOID  MSWAELA_cquery2(void)
{ 
A68_232  NSWAELA_cquery;
A68_172 * OSWAELA;  /* YIELD */
A68_232 * PSWAELA;  /* YIELD */
A68_222  QSWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cquery2);
{ 
 /* line 594: */
OSWAELA = (&((&NSWAELA_cquery)->Querytype)) ;
(*OSWAELA) = RLPAELA_type;
 /* line 595: */
PSWAELA = A_HEAP(A68_232 ) ;
(*PSWAELA) = NSWAELA_cquery ;
OMPAELA_ctype = A_UNITE(QSWAELA,mode13,13,PSWAELA);
 /* line 596: */
 /* line 597: */
BMPAELA_which = LXCAELA_wctype;
} 
A_PROC_EXIT(cquery2);
return;
} 
#undef NL

A68_VOID  RSWAELA_cattr(void)
{ 
A68_243  SSWAELA;  /* collateral clause result */
A68_243 * TSWAELA;  /* YIELD */
A68_222  USWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cattr);
SSWAELA.Ct = OMPAELA_ctype;
SSWAELA.Attr = FJPAELA_attr;
TSWAELA = A_HEAP(A68_243 ) ;
(*TSWAELA) = SSWAELA ;
OMPAELA_ctype = A_UNITE(USWAELA,mode24,24,TSWAELA);
A_PROC_EXIT(cattr);
return;
} 
#undef NL

A68_VOID  VSWAELA_sid1(void)
{ 
A68_199  WSWAELA;  /* united object - for case conformity */
A68_203  XSWAELA_p;
A68_172  YSWAELA;  /* OPERATORS - mode -> union mode */
A68_222  ZSWAELA;  /* OPERATORS - mode -> union mode */
A68_172  ATWAELA;  /* OPERATORS - mode -> union mode */
A68_222  BTWAELA;  /* OPERATORS - mode -> union mode */
A68_172  CTWAELA;  /* OPERATORS - mode -> union mode */
A68_222  DTWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sid1);
 /* line 604: */
WSWAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( WSWAELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
XSWAELA_p = (WSWAELA.data.mode4);
 /* line 605: */
 /* line 606: */
if ( (XSWAELA_p.Index==0) )
{ 
UQPAELA_fault(20, VJAAOSI_nullmsg);
 /* line 607: */
RLPAELA_type = A_UNITE(YSWAELA,mode10,10,DRCAELA_flt);
 /* line 608: */
OMPAELA_ctype = A_UNITE(ZSWAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 609: */
if ( (XSWAELA_p.Index==VPCAELA_stringindex) )
{ 
UQPAELA_fault(148, VJAAOSI_nullmsg);
 /* line 610: */
RLPAELA_type = A_UNITE(ATWAELA,mode10,10,DRCAELA_flt);
 /* line 611: */
OMPAELA_ctype = A_UNITE(BTWAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 612: */
if ( (FGTAELA_unn(XSWAELA_p.Type, XSWAELA_p.Index)!=EQCAELA_niltype) )
{ 
UQPAELA_fault(21, VJAAOSI_nullmsg);
 /* line 613: */
RLPAELA_type = A_UNITE(CTWAELA,mode10,10,DRCAELA_flt);
 /* line 614: */
 /* line 615: */
 /* line 616: */
OMPAELA_ctype = A_UNITE(DTWAELA,mode10,10,DRCAELA_flt);
} 
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(sid1);
return;
} 
#undef NL

A68_VOID  ETWAELA_sid2(void)
{ 
A68_222  JTWAELA;  /* united object - for case conformity */
A68_230 * KTWAELA_cn;
A68_VC  QTWAELA;  /* avoid structure result */
A68_VC  STWAELA;  /* OPERATORS - assign op */
A68_263  TTWAELA;  /* OPERATORS - mode -> union mode */
A68_262  UTWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  VTWAELA;  /* OPERATORS - mode -> union mode */
A68_222  WTWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sid2);
{ 
 /* line 620: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
 /* line 621: */
JTWAELA = OMPAELA_ctype ;
switch ( JTWAELA.mode )
{ 
case 9: /* REF STRUCT(MODE172)  */
KTWAELA_cn = (JTWAELA.data.mode9);
 /* line 622: */
/*SKIP*/;
break;
default: 
 /* line 623: */
 /* line 624: */
goto GTWAELA_ok;
break;
} 
} 
else
{ 
if ( (BMPAELA_which==MXCAELA_wflt) )
{ 
 /* line 625: */
goto ITWAELA_nok;
} 
} 
 /* line 626: */
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 627: */
 /* line 628: */
if ( (CKPAELA_t1==PTCAELA_slashtok) )
{ 
{ 
MTWAELA_generator( A68_FALSE, &QTWAELA );
STWAELA = RTWAELA ;
A_VASSIGN2(STWAELA,QTWAELA,A68_CHAR ) ;
MKPAELA_fp4 = QTWAELA;
 /* line 629: */
 /* line 630: */
SZPAELA_faultp(126, A_HVEC(UTWAELA,A_UNITE(TTWAELA,mode13,13,MKPAELA_fp4),A68_263 ));
} 
} 
else
{ 
 /* line 631: */
if ( (CKPAELA_t1==YTCAELA_andtok) )
{ 
 /* line 632: */
 /* line 633: */
UQPAELA_fault(127, VJAAOSI_nullmsg);
} 
} 
 /* line 634: */
ITWAELA_nok:
BMPAELA_which = LXCAELA_wctype;
RLPAELA_type = A_UNITE(VTWAELA,mode10,10,DRCAELA_flt);
OMPAELA_ctype = A_UNITE(WTWAELA,mode10,10,DRCAELA_flt);
 /* line 635: */
GTWAELA_ok:
 /* line 636: */
/*SKIP*/;
} 
A_PROC_EXIT(sid2);
return;
} 
#undef NL

A68_VOID  XTWAELA_sind(void)
{ 
A68_222  YTWAELA;  /* united object - for case conformity */
A68_203 * ZTWAELA_p;
A68_172  AUWAELA;  /* OPERATORS - mode -> union mode */
A68_222  BUWAELA;  /* OPERATORS - mode -> union mode */
A68_31  DUWAELA_generator;   /* proc value of non-global proc */
A68_VC  IUWAELA;  /* avoid structure result */
A68_VC  JUWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KUWAELA;  /* OPERATORS - assign op */
A68_31  MUWAELA_generator;   /* proc value of non-global proc */
A68_VC  RUWAELA;  /* avoid structure result */
A68_VC  SUWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TUWAELA;  /* OPERATORS - assign op */
A68_445  UUWAELA;  /* collateral clause result */
A68_263  VUWAELA;  /* OPERATORS - mode -> union mode */
A68_263  WUWAELA;  /* OPERATORS - mode -> union mode */
A68_262  XUWAELA;  /* OPERATORS - istruct -> vector */
A68_172  YUWAELA;  /* OPERATORS - mode -> union mode */
A68_222  ZUWAELA;  /* OPERATORS - mode -> union mode */
A68_172  AVWAELA;  /* united object - for case conformity */
A68_173 * BVWAELA_pst;
A68_247  CVWAELA;  /* united object - for case conformity */
A68_248  DVWAELA_r;
A68_447  EVWAELA;  /* collateral clause result */
A68_263  FVWAELA;  /* OPERATORS - mode -> union mode */
A68_263  GVWAELA;  /* OPERATORS - unite union */
A68_263  HVWAELA;  /* OPERATORS - mode -> union mode */
A68_263  IVWAELA;  /* OPERATORS - unite union */
A68_263  JVWAELA;  /* OPERATORS - unite union */
A68_262  KVWAELA;  /* OPERATORS - istruct -> vector */
A68_447  LVWAELA;  /* collateral clause result */
A68_263  MVWAELA;  /* OPERATORS - mode -> union mode */
A68_263  NVWAELA;  /* OPERATORS - unite union */
A68_263  OVWAELA;  /* OPERATORS - mode -> union mode */
A68_263  PVWAELA;  /* OPERATORS - unite union */
A68_263  QVWAELA;  /* OPERATORS - unite union */
A68_262  RVWAELA;  /* OPERATORS - istruct -> vector */
A68_225  SVWAELA;  /* collateral clause result */
A68_225 * TVWAELA;  /* YIELD */
A68_222  UVWAELA;  /* OPERATORS - mode -> union mode */
A68_222  VVWAELA;  /* united object - for case conformity */
A68_182  WVWAELA_flt;
A68_INT  XVWAELA;  /* clause result */
A_PROC_ENTRY(sind);
{ 
RLPAELA_type = (*(&(FOPAELA_sucstack->T)));
 /* line 640: */
 /* line 641: */
YTWAELA = (*(&(FOPAELA_sucstack->Ct))) ;
switch ( YTWAELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
ZTWAELA_p = (YTWAELA.data.mode4);
 /* line 642: */
if ( ((*(&(ZTWAELA_p->Index)))>0) )
{ 
{ 
UQPAELA_fault(22, VJAAOSI_nullmsg);
 /* line 643: */
RLPAELA_type = A_UNITE(AUWAELA,mode10,10,DRCAELA_flt);
 /* line 644: */
OMPAELA_ctype = A_UNITE(BUWAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 645: */
if ( ((*(&(ZTWAELA_p->Index)))==VPCAELA_stringindex) )
{ 
{ 
A_CLOSURE( DUWAELA_generator, EUWAELA_generator, FUWAELA_generator );
A_CALLPROC(DUWAELA_generator,(A68_FALSE, &IUWAELA),(A68_FALSE, &IUWAELA,(DUWAELA_generator).nonlocals));
KUWAELA = A_HVEC(JUWAELA,'/',A68_CHAR ) ;
A_VASSIGN2(KUWAELA,IUWAELA,A68_CHAR ) ;
LKPAELA_fp3 = IUWAELA;
 /* line 646: */
A_CLOSURE( MUWAELA_generator, NUWAELA_generator, OUWAELA_generator );
A_CALLPROC(MUWAELA_generator,(A68_FALSE, &RUWAELA),(A68_FALSE, &RUWAELA,(MUWAELA_generator).nonlocals));
TUWAELA = A_HVEC(SUWAELA,'\'',A68_CHAR ) ;
A_VASSIGN2(TUWAELA,RUWAELA,A68_CHAR ) ;
MKPAELA_fp4 = RUWAELA;
 /* line 647: */
UUWAELA.data[0] = A_UNITE(VUWAELA,mode13,13,LKPAELA_fp3);
UUWAELA.data[1] = A_UNITE(WUWAELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(XUWAELA,UUWAELA,2,A68_263 ));
 /* line 648: */
RLPAELA_type = A_UNITE(YUWAELA,mode10,10,DRCAELA_flt);
 /* line 649: */
 /* line 650: */
OMPAELA_ctype = A_UNITE(ZUWAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 651: */
AVWAELA = (*(&(ZTWAELA_p->Type))) ;
switch ( AVWAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
BVWAELA_pst = (AVWAELA.data.mode1);
 /* line 652: */
 /* line 653: */
CVWAELA = (*(&(BVWAELA_pst->U))) ;
switch ( CVWAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
DVWAELA_r = (CVWAELA.data.mode1);
 /* line 654: */
{ 
LKPAELA_fp3 = (*(&(DVWAELA_r.Idinfo->Id)));
 /* line 655: */
QKPAELA_fp0 = SLPAELA_integer;
RKPAELA_fp5 = DVWAELA_r.Lwb;
SKPAELA_fp6 = DVWAELA_r.Upb;
 /* line 656: */
 /* line 658: */
EVWAELA.data[0] = A_UNITE(FVWAELA,mode13,13,LKPAELA_fp3);
EVWAELA.data[1] = A_UTABUNITE(GVWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
EVWAELA.data[2] = A_UNITE(HVWAELA,mode13,13,LKPAELA_fp3);
EVWAELA.data[3] = A_UTABUNITE(IVWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
EVWAELA.data[4] = A_UTABUNITE(JVWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), DVWAELA_r.Lwb, 112, A_HISVEC(KVWAELA,EVWAELA,5,A68_263 ));
 /* line 659: */
 /* line 661: */
LVWAELA.data[0] = A_UNITE(MVWAELA,mode13,13,LKPAELA_fp3);
LVWAELA.data[1] = A_UTABUNITE(NVWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
LVWAELA.data[2] = A_UNITE(OVWAELA,mode13,13,LKPAELA_fp3);
LVWAELA.data[3] = A_UTABUNITE(PVWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
LVWAELA.data[4] = A_UTABUNITE(QVWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
 /* line 662: */
 /* line 663: */
 /* line 664: */
PZRAELA_testintegers(BWRAELA_checkle, (&SLPAELA_integer), DVWAELA_r.Upb, 112, A_HISVEC(RVWAELA,LVWAELA,5,A68_263 ));
} 
break;
default: 
 /* line 665: */
 /* line 666: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 667: */
SVWAELA.T = (*(&(ZTWAELA_p->Type)));
 /* line 668: */
SVWAELA.Index = SLPAELA_integer;
 /* line 669: */
 /* line 670: */
TVWAELA = A_HEAP(A68_225 ) ;
(*TVWAELA) = SVWAELA ;
OMPAELA_ctype = A_UNITE(UVWAELA,mode3,3,TVWAELA);
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 671: */
VVWAELA = OMPAELA_ctype ;
switch ( VVWAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
WVWAELA_flt = (VVWAELA.data.mode10);
XVWAELA = MXCAELA_wflt;
break;
default: 
XVWAELA = LXCAELA_wctype;
break;
} 
BMPAELA_which = XVWAELA;
 /* line 672: */
 /* line 673: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(sind);
return;
} 
#undef NL

A68_VOID  YVWAELA_srange(void)
{ 
A68_222  ZVWAELA;  /* united object - for case conformity */
A68_203 * AWWAELA_p;
A68_172  BWWAELA;  /* OPERATORS - mode -> union mode */
A68_222  CWWAELA;  /* OPERATORS - mode -> union mode */
A68_31  EWWAELA_generator;   /* proc value of non-global proc */
A68_VC  JWWAELA;  /* avoid structure result */
A68_VC  KWWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LWWAELA;  /* OPERATORS - assign op */
A68_31  NWWAELA_generator;   /* proc value of non-global proc */
A68_VC  SWWAELA;  /* avoid structure result */
A68_VC  TWWAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UWWAELA;  /* OPERATORS - assign op */
A68_445  VWWAELA;  /* collateral clause result */
A68_263  WWWAELA;  /* OPERATORS - mode -> union mode */
A68_263  XWWAELA;  /* OPERATORS - mode -> union mode */
A68_262  YWWAELA;  /* OPERATORS - istruct -> vector */
A68_172  ZWWAELA;  /* OPERATORS - mode -> union mode */
A68_222  AXWAELA;  /* OPERATORS - mode -> union mode */
A68_172  BXWAELA;  /* united object - for case conformity */
A68_173 * CXWAELA_ps;
A68_247  DXWAELA;  /* united object - for case conformity */
A68_248  EXWAELA_r;
A68_448  FXWAELA;  /* collateral clause result */
A68_263  GXWAELA;  /* OPERATORS - mode -> union mode */
A68_263  HXWAELA;  /* OPERATORS - unite union */
A68_263  IXWAELA;  /* OPERATORS - unite union */
A68_263  JXWAELA;  /* OPERATORS - mode -> union mode */
A68_263  KXWAELA;  /* OPERATORS - unite union */
A68_263  LXWAELA;  /* OPERATORS - unite union */
A68_262  MXWAELA;  /* OPERATORS - istruct -> vector */
A68_448  NXWAELA;  /* collateral clause result */
A68_263  OXWAELA;  /* OPERATORS - mode -> union mode */
A68_263  PXWAELA;  /* OPERATORS - unite union */
A68_263  QXWAELA;  /* OPERATORS - unite union */
A68_263  RXWAELA;  /* OPERATORS - mode -> union mode */
A68_263  SXWAELA;  /* OPERATORS - unite union */
A68_263  TXWAELA;  /* OPERATORS - unite union */
A68_262  UXWAELA;  /* OPERATORS - istruct -> vector */
A68_449  VXWAELA;  /* collateral clause result */
A68_263  WXWAELA;  /* OPERATORS - mode -> union mode */
A68_263  XXWAELA;  /* OPERATORS - unite union */
A68_263  YXWAELA;  /* OPERATORS - unite union */
A68_262  ZXWAELA;  /* OPERATORS - istruct -> vector */
A68_185  AYWAELA;  /* avoid structure result */
A68_224  BYWAELA;  /* collateral clause result */
A68_224 * CYWAELA;  /* YIELD */
A68_222  DYWAELA;  /* OPERATORS - mode -> union mode */
A68_222  EYWAELA;  /* united object - for case conformity */
A68_182  FYWAELA_flt;
A68_INT  GYWAELA;  /* clause result */
A_PROC_ENTRY(srange);
{ 
RLPAELA_type = (*(&(FOPAELA_sucstack->T)));
 /* line 677: */
 /* line 678: */
ZVWAELA = (*(&(FOPAELA_sucstack->Ct))) ;
switch ( ZVWAELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
AWWAELA_p = (ZVWAELA.data.mode4);
 /* line 679: */
 /* line 680: */
if ( ((*(&(AWWAELA_p->Index)))>0) )
{ 
UQPAELA_fault(22, VJAAOSI_nullmsg);
 /* line 681: */
RLPAELA_type = A_UNITE(BWWAELA,mode10,10,DRCAELA_flt);
 /* line 682: */
OMPAELA_ctype = A_UNITE(CWWAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 683: */
if ( ((*(&(AWWAELA_p->Index)))==VPCAELA_stringindex) )
{ 
A_CLOSURE( EWWAELA_generator, FWWAELA_generator, GWWAELA_generator );
A_CALLPROC(EWWAELA_generator,(A68_FALSE, &JWWAELA),(A68_FALSE, &JWWAELA,(EWWAELA_generator).nonlocals));
LWWAELA = A_HVEC(KWWAELA,'/',A68_CHAR ) ;
A_VASSIGN2(LWWAELA,JWWAELA,A68_CHAR ) ;
LKPAELA_fp3 = JWWAELA;
 /* line 684: */
A_CLOSURE( NWWAELA_generator, OWWAELA_generator, PWWAELA_generator );
A_CALLPROC(NWWAELA_generator,(A68_FALSE, &SWWAELA),(A68_FALSE, &SWWAELA,(NWWAELA_generator).nonlocals));
UWWAELA = A_HVEC(TWWAELA,'\'',A68_CHAR ) ;
A_VASSIGN2(UWWAELA,SWWAELA,A68_CHAR ) ;
MKPAELA_fp4 = SWWAELA;
 /* line 685: */
VWWAELA.data[0] = A_UNITE(WWWAELA,mode13,13,LKPAELA_fp3);
VWWAELA.data[1] = A_UNITE(XWWAELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(YWWAELA,VWWAELA,2,A68_263 ));
 /* line 686: */
RLPAELA_type = A_UNITE(ZWWAELA,mode10,10,DRCAELA_flt);
 /* line 687: */
 /* line 688: */
OMPAELA_ctype = A_UNITE(AXWAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 689: */
BXWAELA = (*(&(AWWAELA_p->Type))) ;
switch ( BXWAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
CXWAELA_ps = (BXWAELA.data.mode1);
 /* line 690: */
 /* line 691: */
DXWAELA = (*(&(CXWAELA_ps->U))) ;
switch ( DXWAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
EXWAELA_r = (DXWAELA.data.mode1);
 /* line 692: */
{ 
LKPAELA_fp3 = (*(&(EXWAELA_r.Idinfo->Id)));
 /* line 693: */
QKPAELA_fp0 = (*(&(DOPAELA_integerstack->I)));
TKPAELA_fpcolon = SLPAELA_integer;
 /* line 694: */
RKPAELA_fp5 = EXWAELA_r.Lwb;
SKPAELA_fp6 = EXWAELA_r.Upb;
 /* line 695: */
 /* line 697: */
FXWAELA.data[0] = A_UNITE(GXWAELA,mode13,13,LKPAELA_fp3);
FXWAELA.data[1] = A_UTABUNITE(HXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
FXWAELA.data[2] = A_UTABUNITE(IXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",TKPAELA_fpcolon);
FXWAELA.data[3] = A_UNITE(JXWAELA,mode13,13,LKPAELA_fp3);
FXWAELA.data[4] = A_UTABUNITE(KXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
FXWAELA.data[5] = A_UTABUNITE(LXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(CWRAELA_checkge, (&(DOPAELA_integerstack->I)), EXWAELA_r.Lwb, 113, A_HISVEC(MXWAELA,FXWAELA,6,A68_263 ));
 /* line 698: */
 /* line 700: */
NXWAELA.data[0] = A_UNITE(OXWAELA,mode13,13,LKPAELA_fp3);
NXWAELA.data[1] = A_UTABUNITE(PXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
NXWAELA.data[2] = A_UTABUNITE(QXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",TKPAELA_fpcolon);
NXWAELA.data[3] = A_UNITE(RXWAELA,mode13,13,LKPAELA_fp3);
NXWAELA.data[4] = A_UTABUNITE(SXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
NXWAELA.data[5] = A_UTABUNITE(TXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(BWRAELA_checkle, (&SLPAELA_integer), EXWAELA_r.Upb, 113, A_HISVEC(UXWAELA,NXWAELA,6,A68_263 ));
 /* line 701: */
 /* line 703: */
VXWAELA.data[0] = A_UNITE(WXWAELA,mode13,13,LKPAELA_fp3);
VXWAELA.data[1] = A_UTABUNITE(XXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
VXWAELA.data[2] = A_UTABUNITE(YXWAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",TKPAELA_fpcolon);
 /* line 704: */
 /* line 705: */
 /* line 706: */
DSDAELA_uncheckedint( SLPAELA_integer, &AYWAELA );
PZRAELA_testintegers(BWRAELA_checkle, (&(DOPAELA_integerstack->I)), AYWAELA, 114, A_HISVEC(ZXWAELA,VXWAELA,3,A68_263 ));
} 
break;
default: 
 /* line 707: */
 /* line 708: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 709: */
BYWAELA.T = (*(&(AWWAELA_p->Type)));
BYWAELA.Lwb = (*(&(DOPAELA_integerstack->I)));
 /* line 710: */
BYWAELA.Upb = SLPAELA_integer;
 /* line 711: */
 /* line 712: */
CYWAELA = A_HEAP(A68_224 ) ;
(*CYWAELA) = BYWAELA ;
OMPAELA_ctype = A_UNITE(DYWAELA,mode2,2,CYWAELA);
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 713: */
EYWAELA = OMPAELA_ctype ;
switch ( EYWAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
FYWAELA_flt = (EYWAELA.data.mode10);
GYWAELA = MXCAELA_wflt;
break;
default: 
GYWAELA = LXCAELA_wctype;
break;
} 
BMPAELA_which = GYWAELA;
 /* line 714: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
 /* line 715: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
} 
A_PROC_EXIT(srange);
return;
} 
#undef NL

A68_VOID  HYWAELA_sunn(void)
{ 
A68_222  IYWAELA;  /* united object - for case conformity */
A68_203 * JYWAELA_p;
A68_172  KYWAELA;  /* OPERATORS - mode -> union mode */
A68_222  LYWAELA;  /* OPERATORS - mode -> union mode */
A68_226  MYWAELA;  /* collateral clause result */
A68_222  NYWAELA;  /* clause result */
A68_226 * OYWAELA;  /* YIELD */
A68_222  PYWAELA;  /* OPERATORS - mode -> union mode */
A68_222  QYWAELA;  /* OPERATORS - mode -> union mode */
A68_172  RYWAELA;  /* OPERATORS - mode -> union mode */
A68_222  SYWAELA;  /* OPERATORS - mode -> union mode */
A68_222  TYWAELA;  /* united object - for case conformity */
A68_182  UYWAELA_flt;
A68_INT  VYWAELA;  /* clause result */
A_PROC_ENTRY(sunn);
{ 
 /* line 719: */
IYWAELA = (*(&(FOPAELA_sucstack->Ct))) ;
switch ( IYWAELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
JYWAELA_p = (IYWAELA.data.mode4);
 /* line 720: */
 /* line 721: */
if ( ((GOPAELA_rt = FGTAELA_unn((*(&(JYWAELA_p->Type))), (*(&(JYWAELA_p->Index)))))==EQCAELA_niltype) )
{ 
UQPAELA_fault(23, VJAAOSI_nullmsg);
 /* line 722: */
RLPAELA_type = A_UNITE(KYWAELA,mode10,10,DRCAELA_flt);
 /* line 723: */
 /* line 724: */
OMPAELA_ctype = A_UNITE(LYWAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
if ( GUUAELA_testequals(RLPAELA_type, (*GOPAELA_rt), A68_FALSE) )
{ 
MYWAELA.P = JYWAELA_p;
MYWAELA.Ct = OMPAELA_ctype;
OYWAELA = A_HEAP(A68_226 ) ;
(*OYWAELA) = MYWAELA ;
NYWAELA = A_UNITE(PYWAELA,mode5,5,OYWAELA);
} 
else
{ 
NYWAELA = A_UNITE(QYWAELA,mode10,10,DRCAELA_flt);
} 
OMPAELA_ctype = NYWAELA;
 /* line 725: */
 /* line 726: */
 /* line 727: */
RLPAELA_type = (*(&(FOPAELA_sucstack->T)));
} 
break;
default: 
RLPAELA_type = A_UNITE(RYWAELA,mode10,10,DRCAELA_flt);
 /* line 728: */
OMPAELA_ctype = A_UNITE(SYWAELA,mode10,10,DRCAELA_flt);
break;
} 
 /* line 729: */
TYWAELA = OMPAELA_ctype ;
switch ( TYWAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
UYWAELA_flt = (TYWAELA.data.mode10);
VYWAELA = MXCAELA_wflt;
break;
default: 
VYWAELA = LXCAELA_wctype;
break;
} 
BMPAELA_which = VYWAELA;
 /* line 730: */
 /* line 731: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(sunn);
return;
} 
#undef NL

A68_VOID  WYWAELA_stacksuc(void)
{ 
A68_289  XYWAELA;  /* collateral clause result */
A68_289 * YYWAELA;  /* YIELD */
A_PROC_ENTRY(stacksuc);
XYWAELA.I = SLPAELA_integer;
XYWAELA.T = RLPAELA_type;
XYWAELA.Ct = OMPAELA_ctype;
XYWAELA.A = FJPAELA_attr;
XYWAELA.W = BMPAELA_which;
XYWAELA.Rest = FOPAELA_sucstack;
YYWAELA = A_HEAP(A68_289 ) ;
(*YYWAELA) = XYWAELA ;
FOPAELA_sucstack = YYWAELA;
A_PROC_EXIT(stacksuc);
return;
} 
#undef NL

A68_VOID  ZYWAELA_sstr1(void)
{ 
A68_175  AZWAELA;  /* collateral clause result */
A68_175 * BZWAELA;  /* YIELD */
A68_175  CZWAELA;  /* collateral clause result */
A68_175 * DZWAELA;  /* YIELD */
A68_228  EZWAELA;  /* collateral clause result */
A68_228 * FZWAELA;  /* YIELD */
A68_170  GZWAELA;  /* united object - for case conformity */
A68_170  HZWAELA;  /* OPERATORS - mode -> union mode */
A68_256  IZWAELA;  /* collateral clause result */
A68_256 * JZWAELA;  /* YIELD */
A_PROC_ENTRY(sstr1);
 /* line 738: */
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
AZWAELA.T = RLPAELA_type;
 /* line 739: */
AZWAELA.Rest = (A68_175 *)A68_NIL;
BZWAELA = A_HEAP(A68_175 ) ;
(*BZWAELA) = AZWAELA ;
EMPAELA_sts = BZWAELA;
} 
else
{ 
 /* line 740: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
CZWAELA.T = RLPAELA_type;
CZWAELA.Rest = (A68_175 *)A68_NIL;
DZWAELA = A_HEAP(A68_175 ) ;
(*DZWAELA) = CZWAELA ;
EMPAELA_sts = DZWAELA;
 /* line 741: */
EZWAELA.Cst = OMPAELA_ctype;
 /* line 742: */
EZWAELA.Rest = (A68_228 *)A68_NIL;
FZWAELA = A_HEAP(A68_228 ) ;
(*FZWAELA) = EZWAELA ;
PMPAELA_cstr = FZWAELA;
} 
else
{ 
 /* line 743: */
if ( (BMPAELA_which==OXCAELA_wattr) )
{ 
 /* line 744: */
GZWAELA = FJPAELA_attr ;
switch ( GZWAELA.mode )
{ 
case 3: /* REF STRUCT(MODE170,REF MODE256)  */
case 4: /* REF STRUCT(MODE170)  */
 /* line 745: */
{ 
FJPAELA_attr = A_UNITE(HZWAELA,mode7,7,DRCAELA_flt);
 /* line 746: */
 /* line 747: */
UQPAELA_fault(239, VJAAOSI_nullmsg);
 /* line 748: */
 /* line 749: */
 /* line 750: */
BMPAELA_which = MXCAELA_wflt;
} 
break;
default: 
IZWAELA.Elem = FJPAELA_attr;
 /* line 751: */
IZWAELA.Rest = MQCAELA_nilattrstr;
 /* line 752: */
JZWAELA = A_HEAP(A68_256 ) ;
(*JZWAELA) = IZWAELA ;
GJPAELA_attrstr = JZWAELA;
break;
} 
} 
} 
} 
A_PROC_EXIT(sstr1);
return;
} 
#undef NL

A68_VOID  KZWAELA_sstr2(void)
{ 
A68_BOOL  LZWAELA;  /* optbool result */
A68_175  MZWAELA;  /* collateral clause result */
A68_175 * NZWAELA;  /* YIELD */
A68_175  OZWAELA;  /* collateral clause result */
A68_175 * PZWAELA;  /* YIELD */
A68_228  QZWAELA;  /* collateral clause result */
A68_228 * RZWAELA;  /* YIELD */
A68_256  SZWAELA;  /* collateral clause result */
A68_256 * TZWAELA;  /* YIELD */
A68_BOOL  UZWAELA;  /* optbool result */
A_PROC_ENTRY(sstr2);
{ 
LZWAELA = (BMPAELA_which!=MXCAELA_wflt);
if ( LZWAELA )
{LZWAELA = (BMPAELA_which==(*(&(FOPAELA_sucstack->W))));
}
 /* line 756: */
if ( LZWAELA )
{ 
 /* line 757: */
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
MZWAELA.T = (*(&(FOPAELA_sucstack->T)));
 /* line 758: */
MZWAELA.Rest = EMPAELA_sts;
NZWAELA = A_HEAP(A68_175 ) ;
(*NZWAELA) = MZWAELA ;
EMPAELA_sts = NZWAELA;
} 
else
{ 
 /* line 759: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
OZWAELA.T = (*(&(FOPAELA_sucstack->T)));
OZWAELA.Rest = EMPAELA_sts;
PZWAELA = A_HEAP(A68_175 ) ;
(*PZWAELA) = OZWAELA ;
EMPAELA_sts = PZWAELA;
 /* line 760: */
QZWAELA.Cst = (*(&(FOPAELA_sucstack->Ct)));
 /* line 761: */
QZWAELA.Rest = PMPAELA_cstr;
RZWAELA = A_HEAP(A68_228 ) ;
(*RZWAELA) = QZWAELA ;
PMPAELA_cstr = RZWAELA;
} 
else
{ 
 /* line 762: */
if ( (BMPAELA_which==OXCAELA_wattr) )
{ 
SZWAELA.Elem = (*(&(FOPAELA_sucstack->A)));
 /* line 763: */
SZWAELA.Rest = GJPAELA_attrstr;
 /* line 764: */
TZWAELA = A_HEAP(A68_256 ) ;
(*TZWAELA) = SZWAELA ;
GJPAELA_attrstr = TZWAELA;
} 
} 
} 
} 
else
{ 
UZWAELA = (BMPAELA_which!=MXCAELA_wflt);
if ( UZWAELA )
{UZWAELA = ((*(&(FOPAELA_sucstack->W)))!=MXCAELA_wflt);
}
 /* line 765: */
if ( UZWAELA )
{ 
UQPAELA_fault(24, VJAAOSI_nullmsg);
 /* line 766: */
BMPAELA_which = MXCAELA_wflt;
} 
else
{ 
 /* line 767: */
BMPAELA_which = MXCAELA_wflt;
} 
} 
 /* line 768: */
 /* line 769: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(sstr2);
return;
} 
#undef NL

A68_VOID  VZWAELA_sstr3(void)
{ 
A68_172  WZWAELA;  /* OPERATORS - mode -> union mode */
A68_172  XZWAELA;  /* OPERATORS - mode -> union mode */
A68_222  YZWAELA;  /* OPERATORS - mode -> union mode */
A68_170  ZZWAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sstr3);
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
 /* line 773: */
RLPAELA_type = A_UNITE(WZWAELA,mode3,3,EMPAELA_sts);
} 
else
{ 
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
RLPAELA_type = A_UNITE(XZWAELA,mode3,3,EMPAELA_sts);
 /* line 774: */
OMPAELA_ctype = A_UNITE(YZWAELA,mode7,7,PMPAELA_cstr);
} 
else
{ 
if ( (BMPAELA_which==OXCAELA_wattr) )
{ 
 /* line 775: */
FJPAELA_attr = A_UNITE(ZZWAELA,mode3,3,GJPAELA_attrstr);
} 
} 
} 
A_PROC_EXIT(sstr3);
return;
} 
#undef NL

A68_VOID  AAXAELA_srow(void)
{ 
A68_263  BAXAELA;  /* OPERATORS - unite union */
A68_262  CAXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  DAXAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EAXAELA;  /* YIELD */
A68_179  FAXAELA;  /* collateral clause result */
A68_179 * GAXAELA;  /* YIELD */
A68_172  HAXAELA;  /* OPERATORS - mode -> union mode */
A68_179  IAXAELA;  /* collateral clause result */
A68_179 * JAXAELA;  /* YIELD */
A68_172  KAXAELA;  /* OPERATORS - mode -> union mode */
A68_227  LAXAELA;  /* collateral clause result */
A68_227 * MAXAELA;  /* YIELD */
A68_222  NAXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(srow);
{ 
RKPAELA_fp5 = (*(&(DOPAELA_integerstack->I)));
 /* line 779: */
 /* line 780: */
EAXAELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&(DOPAELA_integerstack->I)), A_UNITE(DAXAELA,mode1,1,EAXAELA), 67, A_HVEC(CAXAELA,A_UTABUNITE(BAXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 781: */
 /* line 782: */
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
FAXAELA.T = RLPAELA_type;
 /* line 783: */
FAXAELA.Size = (*(&(DOPAELA_integerstack->I)));
GAXAELA = A_HEAP(A68_179 ) ;
(*GAXAELA) = FAXAELA ;
RLPAELA_type = A_UNITE(HAXAELA,mode7,7,GAXAELA);
} 
else
{ 
 /* line 784: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
IAXAELA.T = RLPAELA_type;
IAXAELA.Size = (*(&(DOPAELA_integerstack->I)));
JAXAELA = A_HEAP(A68_179 ) ;
(*JAXAELA) = IAXAELA ;
RLPAELA_type = A_UNITE(KAXAELA,mode7,7,JAXAELA);
 /* line 785: */
LAXAELA.Ct = OMPAELA_ctype;
 /* line 786: */
LAXAELA.Size = (*(&(DOPAELA_integerstack->I)));
MAXAELA = A_HEAP(A68_227 ) ;
(*MAXAELA) = LAXAELA ;
OMPAELA_ctype = A_UNITE(NAXAELA,mode6,6,MAXAELA);
} 
} 
 /* line 787: */
 /* line 788: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
} 
A_PROC_EXIT(srow);
return;
} 
#undef NL

A68_VOID  OAXAELA_scond(void)
{ 
A68_BOOL  PAXAELA;  /* optbool result */
A68_INT  QAXAELA;  /* YIELD */
A68_VC  TAXAELA;  /* avoid structure result */
A68_449  UAXAELA;  /* collateral clause result */
A68_263  VAXAELA;  /* OPERATORS - mode -> union mode */
A68_263  WAXAELA;  /* OPERATORS - unite union */
A68_263  XAXAELA;  /* OPERATORS - unite union */
A68_262  YAXAELA;  /* OPERATORS - istruct -> vector */
A68_192  ZAXAELA;  /* collateral clause result */
A68_192 * ABXAELA;  /* YIELD */
A68_185  BBXAELA;  /* OPERATORS - mode -> union mode */
A68_172  CBXAELA;  /* avoid structure result */
A68_172  DBXAELA;  /* united object - for case conformity */
A68_222  EBXAELA;  /* OPERATORS - mode -> union mode */
A68_240  FBXAELA;  /* collateral clause result */
A68_240 * GBXAELA;  /* YIELD */
A68_222  HBXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(scond);
{ 
PAXAELA = (BMPAELA_which!=MXCAELA_wflt);
if ( PAXAELA )
{PAXAELA = HMPAELA_errorswitch;
}
if ( PAXAELA )
{PAXAELA = ((*(&(FOPAELA_sucstack->W)))!=MXCAELA_wflt);
}
 /* line 793: */
if ( PAXAELA )
{ /* line 794: */
PAXAELA = ((*(&(FOPAELA_sucstack->W)))!=BMPAELA_which);
}
if ( PAXAELA )
{ 
QAXAELA = (*(&(FOPAELA_sucstack->W))) ;
JKPAELA_fp1 = A_VINDEX(TWCAELA_modes,QAXAELA);
KKPAELA_fp2 = A_VINDEX(TWCAELA_modes,BMPAELA_which);
RSCAOST_makeid( SAXAELA, &TAXAELA );
LKPAELA_fp3 = TAXAELA;
 /* line 795: */
 /* line 796: */
UAXAELA.data[0] = A_UNITE(VAXAELA,mode13,13,LKPAELA_fp3);
UAXAELA.data[1] = A_UUNITE(WAXAELA,0,JKPAELA_fp1);
UAXAELA.data[2] = A_UUNITE(XAXAELA,0,KKPAELA_fp2);
SZPAELA_faultp(30, A_HISVEC(YAXAELA,UAXAELA,3,A68_263 ));
 /* line 797: */
 /* line 798: */
BMPAELA_which = MXCAELA_wflt;
} 
 /* line 799: */
 /* line 800: */
if ( (BMPAELA_which==JXCAELA_winteger) )
{ 
 /* line 801: */
ZAXAELA.Cond = (*(&((*(&(FOPAELA_sucstack->Rest)))->I)));
ZAXAELA.T = (*(&(FOPAELA_sucstack->I)));
 /* line 802: */
ZAXAELA.F = SLPAELA_integer;
ABXAELA = A_HEAP(A68_192 ) ;
(*ABXAELA) = ZAXAELA ;
SLPAELA_integer = A_UNITE(BBXAELA,mode9,9,ABXAELA);
} 
else
{ 
 /* line 803: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
JCUAELA_cond_type( (*(&(FOPAELA_sucstack->T))), RLPAELA_type, SLPAELA_integer, &CBXAELA );
RLPAELA_type = CBXAELA;
 /* line 804: */
 /* line 805: */
DBXAELA = RLPAELA_type ;
switch ( DBXAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
{ 
BMPAELA_which = MXCAELA_wflt;
 /* line 806: */
OMPAELA_ctype = A_UNITE(EBXAELA,mode10,10,DRCAELA_flt);
} 
break;
default: 
 /* line 807: */
FBXAELA.Test = (*(&((*(&(FOPAELA_sucstack->Rest)))->I)));
FBXAELA.Then = (*(&(FOPAELA_sucstack->Ct)));
 /* line 808: */
FBXAELA.Else = OMPAELA_ctype;
 /* line 809: */
GBXAELA = A_HEAP(A68_240 ) ;
(*GBXAELA) = FBXAELA ;
OMPAELA_ctype = A_UNITE(HBXAELA,mode21,21,GBXAELA);
break;
} 
} 
} 
 /* line 810: */
 /* line 811: */
FOPAELA_sucstack = (*(&((*(&(FOPAELA_sucstack->Rest)))->Rest)));
} 
A_PROC_EXIT(scond);
return;
} 
#undef NL

A68_VOID  IBXAELA_sconc(void)
{ 
A68_INT  JBXAELA_sort;
A68_BOOL  KBXAELA_isstring;
A68_172  LBXAELA;  /* avoid structure result */
A68_172  MBXAELA;  /* united object - for case conformity */
A68_222  NBXAELA;  /* OPERATORS - mode -> union mode */
A68_242  OBXAELA;  /* collateral clause result */
A68_242 * PBXAELA;  /* YIELD */
A68_222  QBXAELA;  /* OPERATORS - mode -> union mode */
A68_VC  WBXAELA;  /* avoid structure result */
A68_VC  YBXAELA;  /* OPERATORS - assign op */
A_PROC_ENTRY(sconc);
{ 
 /* line 815: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
JBXAELA_sort = (-1);
KBXAELA_isstring = A68_FALSE;
 /* line 816: */
BDUAELA_conc_type( (*(&(FOPAELA_sucstack->T))), RLPAELA_type, (&KBXAELA_isstring), (&JBXAELA_sort), &LBXAELA );
RLPAELA_type = LBXAELA;
 /* line 817: */
 /* line 818: */
MBXAELA = RLPAELA_type ;
switch ( MBXAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
{ 
BMPAELA_which = MXCAELA_wflt;
 /* line 819: */
OMPAELA_ctype = A_UNITE(NBXAELA,mode10,10,DRCAELA_flt);
} 
break;
default: 
OBXAELA.String = KBXAELA_isstring;
OBXAELA.Sort = JBXAELA_sort;
OBXAELA.Left = (*(&(FOPAELA_sucstack->Ct)));
 /* line 820: */
OBXAELA.Right = OMPAELA_ctype;
 /* line 821: */
PBXAELA = A_HEAP(A68_242 ) ;
(*PBXAELA) = OBXAELA ;
OMPAELA_ctype = A_UNITE(QBXAELA,mode23,23,PBXAELA);
break;
} 
} 
 /* line 822: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
 /* line 823: */
 /* line 824: */
SBXAELA_generator( A68_FALSE, &WBXAELA );
YBXAELA = XBXAELA ;
A_VASSIGN2(YBXAELA,WBXAELA,A68_CHAR ) ;
MMPAELA_lastcall = WBXAELA;
} 
A_PROC_EXIT(sconc);
return;
} 
#undef NL

A68_VOID  ZBXAELA_sindex(void)
{ 
A68_185  ACXAELA;  /* OPERATORS - mode -> union mode */
A68_INT  BCXAELA;  /* YIELD */
A68_172  CCXAELA;  /* avoid structure result */
A68_172  DCXAELA;  /* united object - for case conformity */
A68_182  ECXAELA_f;
A68_222  FCXAELA;  /* OPERATORS - mode -> union mode */
A68_238  GCXAELA;  /* collateral clause result */
A68_238 * HCXAELA;  /* YIELD */
A68_222  ICXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sindex);
{ 
BCXAELA = 0 ;
ESTAELA_trimorindex( (*(&(FOPAELA_sucstack->T))), A_UNITE(ACXAELA,mode1,1,BCXAELA), SLPAELA_integer, (&SLPAELA_integer), (&SLPAELA_integer), &CCXAELA );
RLPAELA_type = CCXAELA;
 /* line 828: */
 /* line 829: */
DCXAELA = RLPAELA_type ;
switch ( DCXAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
ECXAELA_f = (DCXAELA.data.mode10);
{ 
BMPAELA_which = MXCAELA_wflt;
 /* line 830: */
OMPAELA_ctype = A_UNITE(FCXAELA,mode10,10,DRCAELA_flt);
} 
break;
default: 
{ 
BMPAELA_which = LXCAELA_wctype;
 /* line 831: */
GCXAELA.Ct = (*(&(FOPAELA_sucstack->Ct)));
 /* line 832: */
GCXAELA.Index = SLPAELA_integer;
 /* line 833: */
HCXAELA = A_HEAP(A68_238 ) ;
(*HCXAELA) = GCXAELA ;
OMPAELA_ctype = A_UNITE(ICXAELA,mode19,19,HCXAELA);
} 
break;
} 
 /* line 834: */
 /* line 835: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(sindex);
return;
} 
#undef NL

A68_VOID  JCXAELA_strim(void)
{ 
A68_190  KCXAELA;  /* collateral clause result */
A68_190  LCXAELA;  /* collateral clause result */
A68_190 * MCXAELA;  /* YIELD */
A68_185  NCXAELA;  /* OPERATORS - mode -> union mode */
A68_185  OCXAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PCXAELA;  /* YIELD */
A68_190 * RCXAELA;  /* YIELD */
A68_185  SCXAELA;  /* OPERATORS - mode -> union mode */
A68_185  TCXAELA;  /* avoid structure result */
A68_185  QCXAELA_size;
A68_172  UCXAELA;  /* avoid structure result */
A68_172  VCXAELA;  /* united object - for case conformity */
A68_182  WCXAELA_f;
A68_222  XCXAELA;  /* OPERATORS - mode -> union mode */
A68_239  YCXAELA;  /* collateral clause result */
A68_239 * ZCXAELA;  /* YIELD */
A68_222  ADXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(strim);
{ 
TLPAELA_integer1 = (*(&(DOPAELA_integerstack->I)));
 /* line 839: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 840: */
 /* line 841: */
KCXAELA.Opno = GPCAELA_diplus;
LCXAELA.Opno = HPCAELA_diminus;
LCXAELA.L = SLPAELA_integer;
LCXAELA.R = TLPAELA_integer1;
MCXAELA = A_HEAP(A68_190 ) ;
(*MCXAELA) = LCXAELA ;
KCXAELA.L = A_UNITE(NCXAELA,mode7,7,MCXAELA);
PCXAELA = 1 ;
KCXAELA.R = A_UNITE(OCXAELA,mode1,1,PCXAELA);
RCXAELA = A_HEAP(A68_190 ) ;
(*RCXAELA) = KCXAELA ;
CDRAELA_simplify( A_UNITE(SCXAELA,mode7,7,RCXAELA), A68_TRUE, &TCXAELA );
QCXAELA_size = TCXAELA;
 /* line 842: */
ESTAELA_trimorindex( (*(&(FOPAELA_sucstack->T))), QCXAELA_size, TLPAELA_integer1, (&TLPAELA_integer1), (&SLPAELA_integer), &UCXAELA );
RLPAELA_type = UCXAELA;
 /* line 843: */
 /* line 844: */
VCXAELA = RLPAELA_type ;
switch ( VCXAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
WCXAELA_f = (VCXAELA.data.mode10);
{ 
BMPAELA_which = MXCAELA_wflt;
 /* line 845: */
OMPAELA_ctype = A_UNITE(XCXAELA,mode10,10,DRCAELA_flt);
} 
break;
default: 
{ 
BMPAELA_which = LXCAELA_wctype;
 /* line 846: */
YCXAELA.Ct = (*(&(FOPAELA_sucstack->Ct)));
YCXAELA.Lwb = TLPAELA_integer1;
 /* line 847: */
YCXAELA.Upb = SLPAELA_integer;
 /* line 848: */
ZCXAELA = A_HEAP(A68_239 ) ;
(*ZCXAELA) = YCXAELA ;
OMPAELA_ctype = A_UNITE(ADXAELA,mode20,20,ZCXAELA);
} 
break;
} 
 /* line 849: */
 /* line 850: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(strim);
return;
} 
#undef NL

A68_VOID  BDXAELA_int1(void)
{ 
A68_185  CDXAELA;  /* OPERATORS - unite union */
A_PROC_ENTRY(int1);
{ 
SLPAELA_integer = A_UTABUNITE(CDXAELA,"\000\001\003\002",UJPAELA_ivread);
BMPAELA_which = JXCAELA_winteger;
} 
A_PROC_EXIT(int1);
return;
} 
#undef NL

A68_VOID  DDXAELA_sop(void)
{ 
A68_292  EDXAELA;  /* collateral clause result */
A68_292 * FDXAELA;  /* YIELD */
A_PROC_ENTRY(sop);
EDXAELA.I = DKPAELA_sfnno;
EDXAELA.Name = ZHPAELA_compsymb;
EDXAELA.Rest = BOPAELA_sopstack;
FDXAELA = A_HEAP(A68_292 ) ;
(*FDXAELA) = EDXAELA ;
BOPAELA_sopstack = FDXAELA;
A_PROC_EXIT(sop);
return;
} 
#undef NL

A68_VOID  GDXAELA_removeop(void)
{ 
A68_280  HDXAELA;  /* collateral clause result */
A68_280 * IDXAELA;  /* YIELD */
A_PROC_ENTRY(removeop);
{ 
HDXAELA.Last = CMPAELA_lastop;
HDXAELA.Rest = FNPAELA_lastops;
IDXAELA = A_HEAP(A68_280 ) ;
(*IDXAELA) = HDXAELA ;
FNPAELA_lastops = IDXAELA;
 /* line 860: */
CMPAELA_lastop = TTCAOST_nullid;
 /* line 861: */
HMPAELA_errorswitch = A68_TRUE;
} 
A_PROC_EXIT(removeop);
return;
} 
#undef NL

A68_VOID  JDXAELA_removeop2(void)
{ 
A68_BOOL  LDXAELA;  /* optbool result */
A_PROC_ENTRY(removeop2);
{ 
 /* line 865: */
 /* line 866: */
LDXAELA = (BOPAELA_sopstack!=KDXAELA_nilsop);
if ( LDXAELA )
{ /* line 867: */
LDXAELA = ((*(&(FNPAELA_lastops->Last))).upb>0);
}
if ( LDXAELA )
{ 
 /* line 868: */
CMPAELA_lastop = (*(&(BOPAELA_sopstack->Name)));
} 
else
{ 
 /* line 869: */
CMPAELA_lastop = TTCAOST_nullid;
} 
 /* line 870: */
FNPAELA_lastops = (*(&(FNPAELA_lastops->Rest)));
 /* line 871: */
 /* line 872: */
HMPAELA_errorswitch = A68_TRUE;
} 
A_PROC_EXIT(removeop2);
return;
} 
#undef NL

A68_VOID  MDXAELA_checkop(void)
{ 
A68_VC  NDXAELA_newop;
A68_BOOL  ODXAELA;  /* optbool result */
A68_VC  PDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  QDXAELA;  /* optbool result */
A68_VC  RDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  VDXAELA;  /* optbool result */
A68_VC  WDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YDXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_445  ZDXAELA;  /* collateral clause result */
A68_263  AEXAELA;  /* OPERATORS - mode -> union mode */
A68_263  BEXAELA;  /* OPERATORS - mode -> union mode */
A68_262  CEXAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(checkop);
{ 
NDXAELA_newop = (*(&(BOPAELA_sopstack->Name)));
 /* line 876: */
ODXAELA = A_VC_NE(CMPAELA_lastop,TTCAOST_nullid);
if ( ODXAELA )
{ODXAELA = A_VC_NE(CMPAELA_lastop,NDXAELA_newop);
}
 /* line 877: */
if ( ODXAELA )
{QDXAELA = A_VC_NE(NDXAELA_newop,A_HVEC(PDXAELA,'+',A68_CHAR ));
if ( QDXAELA )
{QDXAELA = A_VC_NE(NDXAELA_newop,A_HVEC(RDXAELA,'-',A68_CHAR ));
}
if ( QDXAELA )
{QDXAELA = A_VC_NE(NDXAELA_newop,A_HVEC(SDXAELA,'*',A68_CHAR ));
}
if ( QDXAELA )
{QDXAELA = A_VC_NE(NDXAELA_newop,A_HVEC(TDXAELA,'%',A68_CHAR ));
}
 /* line 878: */
if ( ! QDXAELA )
{VDXAELA = A_VC_NE(CMPAELA_lastop,A_HVEC(UDXAELA,'+',A68_CHAR ));
if ( VDXAELA )
{VDXAELA = A_VC_NE(CMPAELA_lastop,A_HVEC(WDXAELA,'-',A68_CHAR ));
}
if ( VDXAELA )
{VDXAELA = A_VC_NE(CMPAELA_lastop,A_HVEC(XDXAELA,'*',A68_CHAR ));
}
if ( VDXAELA )
{VDXAELA = A_VC_NE(CMPAELA_lastop,A_HVEC(YDXAELA,'%',A68_CHAR ));
}
QDXAELA = VDXAELA;
}
 /* line 879: */
ODXAELA = QDXAELA;
}
if ( ODXAELA )
{ 
LKPAELA_fp3 = CMPAELA_lastop;
MKPAELA_fp4 = (*(&(BOPAELA_sopstack->Name)));
 /* line 880: */
 /* line 881: */
ZDXAELA.data[0] = A_UNITE(AEXAELA,mode13,13,LKPAELA_fp3);
ZDXAELA.data[1] = A_UNITE(BEXAELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(117, A_HISVEC(CEXAELA,ZDXAELA,2,A68_263 ));
 /* line 882: */
 /* line 883: */
HMPAELA_errorswitch = A68_FALSE;
} 
 /* line 884: */
 /* line 885: */
CMPAELA_lastop = (*(&(BOPAELA_sopstack->Name)));
} 
A_PROC_EXIT(checkop);
return;
} 
#undef NL

A68_VOID  DEXAELA_mop(void)
{ 
A68_295  EEXAELA_m;
A68_INT  FEXAELA_i;
A68_INT  GEXAELA;  /* clause result */
A68_263  HEXAELA;  /* OPERATORS - mode -> union mode */
A68_262  IEXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  JEXAELA;  /* OPERATORS - mode -> union mode */
A68_262  KEXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LEXAELA;  /* YIELD */
A68_449  MEXAELA;  /* collateral clause result */
A68_263  NEXAELA;  /* OPERATORS - mode -> union mode */
A68_263  OEXAELA;  /* OPERATORS - unite union */
A68_263  PEXAELA;  /* OPERATORS - unite union */
A68_262  QEXAELA;  /* OPERATORS - istruct -> vector */
A68_191  REXAELA;  /* collateral clause result */
A68_191 * SEXAELA;  /* YIELD */
A68_185  TEXAELA;  /* OPERATORS - mode -> union mode */
A68_185  UEXAELA;  /* avoid structure result */
A_PROC_ENTRY(mop);
{ 
FEXAELA_i = (*(&(BOPAELA_sopstack->I)));
 /* line 889: */
if ( (FEXAELA_i>=600) )
{ 
GEXAELA = (FEXAELA_i-600);
} 
else
{ 
if ( (FEXAELA_i>500) )
{ 
GEXAELA = (-1);
} 
else
{ 
GEXAELA = ((FEXAELA_i-400)+VWCAELA_noboth);
} 
} 
FEXAELA_i = GEXAELA;
 /* line 890: */
 /* line 891: */
if ( (FEXAELA_i==(-1)) )
{ 
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
SZPAELA_faultp(26, A_HVEC(IEXAELA,A_UNITE(HEXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 892: */
 /* line 893: */
BMPAELA_which = MXCAELA_wflt;
} 
else
{ 
 /* line 894: */
if ( (FEXAELA_i==0) )
{ 
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
SZPAELA_faultp(27, A_HVEC(KEXAELA,A_UNITE(JEXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 895: */
 /* line 896: */
 /* line 897: */
BMPAELA_which = MXCAELA_wflt;
} 
else
{ 
EEXAELA_m = A_VINDEX(RXCAELA_mops,FEXAELA_i);
 /* line 898: */
 /* line 899: */
if ( ((*(&((&EEXAELA_m)->Param)))!=BMPAELA_which) )
{ 
 /* line 900: */
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
LEXAELA = (*(&((&EEXAELA_m)->Param))) ;
JKPAELA_fp1 = A_VINDEX(TWCAELA_modes,LEXAELA);
KKPAELA_fp2 = A_VINDEX(TWCAELA_modes,BMPAELA_which);
 /* line 901: */
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
 /* line 902: */
 /* line 903: */
MEXAELA.data[0] = A_UNITE(NEXAELA,mode13,13,LKPAELA_fp3);
MEXAELA.data[1] = A_UUNITE(OEXAELA,0,JKPAELA_fp1);
MEXAELA.data[2] = A_UUNITE(PEXAELA,0,KKPAELA_fp2);
SZPAELA_faultp(28, A_HISVEC(QEXAELA,MEXAELA,3,A68_263 ));
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
BMPAELA_which = MXCAELA_wflt;
} 
} 
else
{ 
BMPAELA_which = (*(&((&EEXAELA_m)->Ans)));
 /* line 908: */
REXAELA.Opno = FEXAELA_i;
REXAELA.R = SLPAELA_integer;
 /* line 909: */
 /* line 910: */
SEXAELA = A_HEAP(A68_191 ) ;
(*SEXAELA) = REXAELA ;
CDRAELA_simplify( A_UNITE(TEXAELA,mode8,8,SEXAELA), A68_FALSE, &UEXAELA );
SLPAELA_integer = UEXAELA;
} 
} 
} 
 /* line 911: */
 /* line 912: */
BOPAELA_sopstack = (*(&(BOPAELA_sopstack->Rest)));
} 
A_PROC_EXIT(mop);
return;
} 
#undef NL

A68_VOID  VEXAELA_dop(void)
{ 
A68_296  WEXAELA_d;
A68_INT  XEXAELA_i;
A68_INT  YEXAELA;  /* clause result */
A68_263  ZEXAELA;  /* OPERATORS - mode -> union mode */
A68_262  AFXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  BFXAELA;  /* OPERATORS - mode -> union mode */
A68_262  CFXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  DFXAELA;  /* optbool result */
A68_INT  EFXAELA;  /* YIELD */
A68_449  FFXAELA;  /* collateral clause result */
A68_263  GFXAELA;  /* OPERATORS - mode -> union mode */
A68_263  HFXAELA;  /* OPERATORS - unite union */
A68_263  IFXAELA;  /* OPERATORS - unite union */
A68_262  JFXAELA;  /* OPERATORS - istruct -> vector */
A68_INT  KFXAELA;  /* YIELD */
A68_INT  LFXAELA;  /* YIELD */
A68_449  MFXAELA;  /* collateral clause result */
A68_263  NFXAELA;  /* OPERATORS - mode -> union mode */
A68_263  OFXAELA;  /* OPERATORS - unite union */
A68_263  PFXAELA;  /* OPERATORS - unite union */
A68_262  QFXAELA;  /* OPERATORS - istruct -> vector */
A68_190  RFXAELA;  /* collateral clause result */
A68_190 * SFXAELA;  /* YIELD */
A68_185  TFXAELA;  /* OPERATORS - mode -> union mode */
A68_185  UFXAELA;  /* avoid structure result */
A_PROC_ENTRY(dop);
{ 
XEXAELA_i = (*(&(BOPAELA_sopstack->I)));
 /* line 916: */
if ( (XEXAELA_i>=600) )
{ 
YEXAELA = (XEXAELA_i-600);
} 
else
{ 
if ( (XEXAELA_i>500) )
{ 
YEXAELA = ((XEXAELA_i-500)+VWCAELA_noboth);
} 
else
{ 
YEXAELA = (-1);
} 
} 
XEXAELA_i = YEXAELA;
 /* line 917: */
 /* line 918: */
if ( (XEXAELA_i==(-1)) )
{ 
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
SZPAELA_faultp(29, A_HVEC(AFXAELA,A_UNITE(ZEXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 919: */
 /* line 920: */
BMPAELA_which = MXCAELA_wflt;
} 
else
{ 
 /* line 921: */
if ( (XEXAELA_i==0) )
{ 
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
SZPAELA_faultp(27, A_HVEC(CFXAELA,A_UNITE(BFXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 922: */
 /* line 923: */
 /* line 924: */
BMPAELA_which = MXCAELA_wflt;
} 
else
{ 
WEXAELA_d = A_VINDEX(UXCAELA_dops,XEXAELA_i);
 /* line 925: */
 /* line 926: */
if ( ((*(&((&WEXAELA_d)->R)))!=BMPAELA_which) )
{ 
 /* line 927: */
DFXAELA = (BMPAELA_which!=MXCAELA_wflt);
if ( DFXAELA )
{DFXAELA = HMPAELA_errorswitch;
}
if ( DFXAELA )
{ 
EFXAELA = (*(&((&WEXAELA_d)->R))) ;
JKPAELA_fp1 = A_VINDEX(TWCAELA_modes,EFXAELA);
KKPAELA_fp2 = A_VINDEX(TWCAELA_modes,BMPAELA_which);
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
 /* line 928: */
 /* line 929: */
FFXAELA.data[0] = A_UNITE(GFXAELA,mode13,13,LKPAELA_fp3);
FFXAELA.data[1] = A_UUNITE(HFXAELA,0,JKPAELA_fp1);
FFXAELA.data[2] = A_UUNITE(IFXAELA,0,KKPAELA_fp2);
SZPAELA_faultp(30, A_HISVEC(JFXAELA,FFXAELA,3,A68_263 ));
 /* line 930: */
 /* line 931: */
 /* line 932: */
BMPAELA_which = MXCAELA_wflt;
} 
} 
else
{ 
 /* line 933: */
if ( ((*(&((&WEXAELA_d)->L)))!=(*(&(FOPAELA_sucstack->W)))) )
{ 
 /* line 934: */
if ( ((*(&(FOPAELA_sucstack->W)))!=MXCAELA_wflt) )
{ 
KFXAELA = (*(&((&WEXAELA_d)->L))) ;
JKPAELA_fp1 = A_VINDEX(TWCAELA_modes,KFXAELA);
LFXAELA = (*(&(FOPAELA_sucstack->W))) ;
KKPAELA_fp2 = A_VINDEX(TWCAELA_modes,LFXAELA);
 /* line 935: */
LKPAELA_fp3 = (*(&(BOPAELA_sopstack->Name)));
 /* line 936: */
 /* line 937: */
MFXAELA.data[0] = A_UNITE(NFXAELA,mode13,13,LKPAELA_fp3);
MFXAELA.data[1] = A_UUNITE(OFXAELA,0,JKPAELA_fp1);
MFXAELA.data[2] = A_UUNITE(PFXAELA,0,KKPAELA_fp2);
 /* line 938: */
SZPAELA_faultp(31, A_HISVEC(QFXAELA,MFXAELA,3,A68_263 ));
} 
 /* line 939: */
 /* line 940: */
 /* line 941: */
BMPAELA_which = MXCAELA_wflt;
} 
else
{ 
BMPAELA_which = (*(&((&WEXAELA_d)->Ans)));
 /* line 942: */
RFXAELA.Opno = XEXAELA_i;
RFXAELA.L = (*(&(FOPAELA_sucstack->I)));
RFXAELA.R = SLPAELA_integer;
 /* line 943: */
 /* line 944: */
SFXAELA = A_HEAP(A68_190 ) ;
(*SFXAELA) = RFXAELA ;
CDRAELA_simplify( A_UNITE(TFXAELA,mode7,7,SFXAELA), A68_FALSE, &UFXAELA );
SLPAELA_integer = UFXAELA;
} 
} 
} 
} 
 /* line 945: */
BOPAELA_sopstack = (*(&(BOPAELA_sopstack->Rest)));
 /* line 946: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(dop);
return;
} 
#undef NL

A68_VOID  VFXAELA_stacktype(void)
{ 
A68_175  WFXAELA;  /* collateral clause result */
A68_175 * XFXAELA;  /* YIELD */
A_PROC_ENTRY(stacktype);
WFXAELA.T = RLPAELA_type;
WFXAELA.Rest = COPAELA_typestack;
XFXAELA = A_HEAP(A68_175 ) ;
(*XFXAELA) = WFXAELA ;
COPAELA_typestack = XFXAELA;
A_PROC_EXIT(stacktype);
return;
} 
#undef NL

A68_VOID  YFXAELA_salts1(void)
{ 
A68_229  ZFXAELA;  /* collateral clause result */
A68_229 * AGXAELA;  /* YIELD */
A_PROC_ENTRY(salts1);
ZFXAELA.Calt = OMPAELA_ctype;
ZFXAELA.Rest = (A68_229 *)A68_NIL;
AGXAELA = A_HEAP(A68_229 ) ;
(*AGXAELA) = ZFXAELA ;
NMPAELA_calts = AGXAELA;
A_PROC_EXIT(salts1);
return;
} 
#undef NL

A68_VOID  BGXAELA_salts2(void)
{ 
A68_445  CGXAELA;  /* collateral clause result */
A68_263  DGXAELA;  /* OPERATORS - unite union */
A68_263  EGXAELA;  /* OPERATORS - unite union */
A68_262  FGXAELA;  /* OPERATORS - istruct -> vector */
A68_172  GGXAELA;  /* OPERATORS - mode -> union mode */
A68_222  HGXAELA;  /* OPERATORS - mode -> union mode */
A68_229  IGXAELA;  /* collateral clause result */
A68_229 * JGXAELA;  /* YIELD */
A_PROC_ENTRY(salts2);
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 956: */
 /* line 957: */
if ( !ZQSAELA_specequals(RLPAELA_type, (*(&(FOPAELA_sucstack->T))), 0, A68_FALSE) )
{ 
JKPAELA_fp1 = RLPAELA_type;
KKPAELA_fp2 = (*(&(FOPAELA_sucstack->T)));
LKPAELA_fp3 = CIPAELA_ident;
 /* line 958: */
CGXAELA.data[0] = A_UUNITE(DGXAELA,0,JKPAELA_fp1);
 /* line 959: */
CGXAELA.data[1] = A_UUNITE(EGXAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(32, A_HISVEC(FGXAELA,CGXAELA,2,A68_263 ));
 /* line 960: */
RLPAELA_type = A_UNITE(GGXAELA,mode10,10,DRCAELA_flt);
 /* line 961: */
OMPAELA_ctype = A_UNITE(HGXAELA,mode10,10,DRCAELA_flt);
} 
 /* line 962: */
OMPAELA_ctype = (*(&(FOPAELA_sucstack->Ct)));
 /* line 963: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
 /* line 964: */
IGXAELA.Calt = OMPAELA_ctype;
 /* line 965: */
IGXAELA.Rest = NMPAELA_calts;
JGXAELA = A_HEAP(A68_229 ) ;
(*JGXAELA) = IGXAELA ;
NMPAELA_calts = JGXAELA;
} 
A_PROC_EXIT(salts2);
return;
} 
#undef NL

A68_VOID  KGXAELA_salts3(void)
{ 
A68_222  LGXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(salts3);
{ 
OMPAELA_ctype = A_UNITE(LGXAELA,mode8,8,NMPAELA_calts);
BMPAELA_which = LXCAELA_wctype;
} 
A_PROC_EXIT(salts3);
return;
} 
#undef NL

A68_VOID  MGXAELA_str1(void)
{ 
A68_175  NGXAELA;  /* collateral clause result */
A68_175 * OGXAELA;  /* YIELD */
A68_214  PGXAELA;  /* collateral clause result */
A68_214 * QGXAELA;  /* YIELD */
A_PROC_ENTRY(str1);
{ 
NGXAELA.T = RLPAELA_type;
NGXAELA.Rest = (A68_175 *)A68_NIL;
OGXAELA = A_HEAP(A68_175 ) ;
(*OGXAELA) = NGXAELA ;
EMPAELA_sts = OGXAELA;
ULPAELA_k = 1;
 /* line 972: */
PGXAELA.Jst = VMPAELA_joinup;
 /* line 973: */
PGXAELA.Rest = (A68_214 *)A68_NIL;
QGXAELA = A_HEAP(A68_214 ) ;
(*QGXAELA) = PGXAELA ;
SMPAELA_joinst = QGXAELA;
} 
A_PROC_EXIT(str1);
return;
} 
#undef NL

A68_VOID  RGXAELA_str2(void)
{ 
A68_175  SGXAELA;  /* collateral clause result */
A68_175 * TGXAELA;  /* YIELD */
A68_214  UGXAELA;  /* collateral clause result */
A68_214 * VGXAELA;  /* YIELD */
A_PROC_ENTRY(str2);
{ 
SGXAELA.T = (*(&(COPAELA_typestack->T)));
SGXAELA.Rest = EMPAELA_sts;
TGXAELA = A_HEAP(A68_175 ) ;
(*TGXAELA) = SGXAELA ;
EMPAELA_sts = TGXAELA;
ULPAELA_k+=1;
 /* line 977: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
 /* line 978: */
 /* line 979: */
if ( (QMPAELA_joinstack!=QQCAELA_niljoinstack) )
{ 
UGXAELA.Jst = (*(&(QMPAELA_joinstack->Joinup)));
UGXAELA.Rest = SMPAELA_joinst;
VGXAELA = A_HEAP(A68_214 ) ;
(*VGXAELA) = UGXAELA ;
SMPAELA_joinst = VGXAELA;
 /* line 980: */
 /* line 981: */
QMPAELA_joinstack = (*(&(QMPAELA_joinstack->Rest)));
} 
} 
A_PROC_EXIT(str2);
return;
} 
#undef NL

A68_VOID  WGXAELA_stackinteger(void)
{ 
A68_209  XGXAELA;  /* collateral clause result */
A68_209 * YGXAELA;  /* YIELD */
A_PROC_ENTRY(stackinteger);
XGXAELA.I = SLPAELA_integer;
XGXAELA.Rest = DOPAELA_integerstack;
YGXAELA = A_HEAP(A68_209 ) ;
(*YGXAELA) = XGXAELA ;
DOPAELA_integerstack = YGXAELA;
A_PROC_EXIT(stackinteger);
return;
} 
#undef NL

A68_VOID  ZGXAELA_intidpr(void)
{ 
A68_199  AHXAELA;  /* united object - for case conformity */
A68_200  BHXAELA_i;
A68_185  CHXAELA;  /* clause result */
A68_182  DHXAELA_f;
A68_185  EHXAELA;  /* OPERATORS - mode -> union mode */
A68_263  FHXAELA;  /* OPERATORS - mode -> union mode */
A68_262  GHXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  HHXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(intidpr);
 /* line 987: */
 /* line 988: */
AHXAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( AHXAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
BHXAELA_i = (AHXAELA.data.mode1);
 /* line 989: */
CHXAELA = BHXAELA_i.I;
break;
case 8: /* STRUCT(INT)  */
DHXAELA_f = (AHXAELA.data.mode8);
 /* line 990: */
CHXAELA = A_UNITE(EHXAELA,mode4,4,DRCAELA_flt);
break;
default: 
LKPAELA_fp3 = CIPAELA_ident;
SZPAELA_faultp(33, A_HVEC(GHXAELA,A_UNITE(FHXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 991: */
CHXAELA = A_UNITE(HHXAELA,mode4,4,DRCAELA_flt);
break;
} 
SLPAELA_integer = CHXAELA;
A_PROC_EXIT(intidpr);
return;
} 
#undef NL

A68_VOID  IHXAELA_checknoalts(void)
{ 
A68_172  JHXAELA;  /* OPERATORS - mode -> union mode */
A68_222  KHXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checknoalts);
 /* line 995: */
if ( ZBTAELA_containssort(OMPAELA_ctype, EKCAELA_calt) )
{ 
 /* line 996: */
UQPAELA_fault(138, VJAAOSI_nullmsg);
 /* line 997: */
RLPAELA_type = A_UNITE(JHXAELA,mode10,10,DRCAELA_flt);
 /* line 998: */
OMPAELA_ctype = A_UNITE(KHXAELA,mode10,10,DRCAELA_flt);
} 
A_PROC_EXIT(checknoalts);
return;
} 
#undef NL

A68_VOID  LHXAELA_checknoquery(void)
{ 
A68_172  MHXAELA;  /* OPERATORS - mode -> union mode */
A68_222  NHXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checknoquery);
 /* line 1002: */
if ( ZBTAELA_containssort(OMPAELA_ctype, NNCAELA_cquery) )
{ 
UQPAELA_fault(156, VJAAOSI_nullmsg);
 /* line 1003: */
RLPAELA_type = A_UNITE(MHXAELA,mode10,10,DRCAELA_flt);
 /* line 1004: */
OMPAELA_ctype = A_UNITE(NHXAELA,mode10,10,DRCAELA_flt);
} 
A_PROC_EXIT(checknoquery);
return;
} 
#undef NL

A68_VOID  OHXAELA_checknotconstfntype(void)
{ 
A_PROC_ENTRY(checknotconstfntype);
{ 
 /* line 1008: */
if ( ((*(&(DNPAELA_currentstate->State)))==YPCAELA_inconst) )
{ 
UQPAELA_fault(34, VJAAOSI_nullmsg);
CKPAELA_t1 = DSCAELA_recovertok;
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
MJPAELA_syntaxerror = A68_TRUE;
} 
} 
A_PROC_EXIT(checknotconstfntype);
return;
} 
#undef NL

A68_VOID  PHXAELA_checknofntype(void)
{ 
A68_172  QHXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checknofntype);
 /* line 1015: */
if ( KBTAELA_containsfntype(RLPAELA_type) )
{ 
UQPAELA_fault(25, VJAAOSI_nullmsg);
 /* line 1016: */
RLPAELA_type = A_UNITE(QHXAELA,mode10,10,DRCAELA_flt);
} 
A_PROC_EXIT(checknofntype);
return;
} 
#undef NL

A68_VOID  RHXAELA_fntype(void)
{ 
A68_178  SHXAELA;  /* collateral clause result */
A68_178 * THXAELA;  /* YIELD */
A68_172  UHXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fntype);
{ 
SHXAELA.From = (*(&(COPAELA_typestack->T)));
SHXAELA.To = RLPAELA_type;
THXAELA = A_HEAP(A68_178 ) ;
(*THXAELA) = SHXAELA ;
RLPAELA_type = A_UNITE(UHXAELA,mode6,6,THXAELA);
 /* line 1020: */
 /* line 1021: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
} 
A_PROC_EXIT(fntype);
return;
} 
#undef NL

A68_VOID  VHXAELA_rhsbracket(void)
{ 
A68_172  WHXAELA;  /* OPERATORS - mode -> union mode */
A68_180 * XHXAELA;  /* YIELD */
A68_172  YHXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(rhsbracket);
 /* line 1025: */
if ( ((*(&(EMPAELA_sts->Rest)))==DQCAELA_nilst) )
{ 
 /* line 1026: */
XHXAELA = IKDAELA_maketbracket((*(&(EMPAELA_sts->T)))) ;
RLPAELA_type = A_UNITE(WHXAELA,mode8,8,XHXAELA);
} 
else
{ 
 /* line 1027: */
RLPAELA_type = A_UNITE(YHXAELA,mode3,3,EMPAELA_sts);
} 
A_PROC_EXIT(rhsbracket);
return;
} 
#undef NL

A68_VOID  ZHXAELA_stackchar(void)
{ 
A_PROC_ENTRY(stackchar);
HNPAELA_charval1 = LJPAELA_charval;
A_PROC_EXIT(stackchar);
return;
} 
#undef NL

A68_VOID  AIXAELA_checkchar(void)
{ 
A68_VC  FIXAELA;  /* avoid structure result */
A68_INT  GIXAELA;  /* YIELD */
A68_CHAR * HIXAELA;  /* YIELD */
A68_INT  IIXAELA;  /* YIELD */
A68_CHAR * JIXAELA;  /* YIELD */
A68_263  KIXAELA;  /* OPERATORS - mode -> union mode */
A68_262  LIXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(checkchar);
 /* line 1032: */
if ( !KMUAELA_charunused((A68_INT)(unsigned char)LJPAELA_charval) )
{ 
CIXAELA_generator( A68_FALSE, &FIXAELA );
LKPAELA_fp3 = FIXAELA;
 /* line 1033: */
GIXAELA = 1 ;
HIXAELA = (&A_VINDEX(LKPAELA_fp3,GIXAELA)) ;
(*HIXAELA) = '\'';
IIXAELA = 2 ;
JIXAELA = (&A_VINDEX(LKPAELA_fp3,IIXAELA)) ;
(*JIXAELA) = LJPAELA_charval;
 /* line 1034: */
 /* line 1035: */
SZPAELA_faultp(142, A_HVEC(LIXAELA,A_UNITE(KIXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
A_PROC_EXIT(checkchar);
return;
} 
#undef NL

A68_VOID  MIXAELA_char1(void)
{ 
A68_BOOL * NIXAELA_i;
A68_INT  OIXAELA;  /* forall loop counter */
A_PROC_ENTRY(char1);
{ 
OIXAELA = NOPAELA_charcheck.upb -1;
NIXAELA_i = NOPAELA_charcheck.data;
for (;OIXAELA-- >= 0;
(NIXAELA_i++
) )
{
(*NIXAELA_i) = A68_FALSE;
}
 /* line 1038: */
 /* line 1039: */
INPAELA_charalts = LQCAELA_nilcharalts;
} 
A_PROC_EXIT(char1);
return;
} 
#undef NL

A68_VOID  PIXAELA_char2(void)
{ 
A68_251  QIXAELA;  /* collateral clause result */
A68_CHAR * RIXAELA;  /* YIELD */
A68_252  SIXAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  TIXAELA;  /* YIELD */
A68_251 * UIXAELA;  /* YIELD */
A_PROC_ENTRY(char2);
 /* line 1042: */
RIXAELA = A_HEAP(A68_CHAR ) ;
TIXAELA = (*RIXAELA) = LJPAELA_charval ;
QIXAELA.Alts = A_UNITE(SIXAELA,mode1,1,TIXAELA);
QIXAELA.Rest = INPAELA_charalts;
UIXAELA = A_HEAP(A68_251 ) ;
(*UIXAELA) = QIXAELA ;
INPAELA_charalts = UIXAELA;
A_PROC_EXIT(char2);
return;
} 
#undef NL

A68_VOID  VIXAELA_char3(void)
{ 
A68_BOOL  WIXAELA_test;
A68_INT  XIXAELA_start;
A68_INT  YIXAELA_finish;
A68_INT  ZIXAELA_charsetindex;
A68_INT  AJXAELA;  /* to part of loop */
A68_31  CJXAELA_generator;   /* proc value of non-global proc */
A68_451  HJXAELA;  /* collateral clause result */
A68_VC  IJXAELA;  /* avoid structure result */
A68_VC  JJXAELA;  /* OPERATORS - istruct -> vector */
A68_VC  KJXAELA;  /* OPERATORS - assign op */
A68_263  LJXAELA;  /* OPERATORS - mode -> union mode */
A68_262  MJXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_251  NJXAELA;  /* collateral clause result */
A68_253  OJXAELA;  /* collateral clause result */
A68_253 * PJXAELA;  /* YIELD */
A68_252  QJXAELA;  /* OPERATORS - mode -> union mode */
A68_253  RJXAELA;  /* YIELD */
A68_251 * SJXAELA;  /* YIELD */
A_PROC_ENTRY(char3);
{ 
WIXAELA_test = A68_TRUE;
 /* line 1046: */
XIXAELA_start = (A68_INT)(unsigned char)HNPAELA_charval1;
 /* line 1047: */
YIXAELA_finish = (A68_INT)(unsigned char)LJPAELA_charval;
 /* line 1048: */
 /* line 1049: */
if ( PMUAELA_check_charrange(XIXAELA_start, YIXAELA_finish) )
{ 
 /* line 1050: */
AJXAELA = YIXAELA_finish;
for ( ZIXAELA_charsetindex = XIXAELA_start;
ZIXAELA_charsetindex <= AJXAELA;
ZIXAELA_charsetindex += 1 )
{ 
 /* line 1051: */
if ( !KMUAELA_charunused(ZIXAELA_charsetindex) )
{ 
A_CLOSURE( CJXAELA_generator, DJXAELA_generator, EJXAELA_generator );
HJXAELA.data[0] = '\'';
HJXAELA.data[1] = (A68_CHAR)ZIXAELA_charsetindex;
A_CALLPROC(CJXAELA_generator,(A68_FALSE, &IJXAELA),(A68_FALSE, &IJXAELA,(CJXAELA_generator).nonlocals));
KJXAELA = A_HISVEC(JJXAELA,HJXAELA,2,A68_CHAR ) ;
A_VASSIGN2(KJXAELA,IJXAELA,A68_CHAR ) ;
LKPAELA_fp3 = IJXAELA;
 /* line 1052: */
 /* line 1053: */
 /* line 1054: */
SZPAELA_faultp(142, A_HVEC(MJXAELA,A_UNITE(LJXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
}
 /* line 1055: */
} 
 /* line 1056: */
 /* line 1057: */
OJXAELA.Lwchar = HNPAELA_charval1;
OJXAELA.Upchar = LJPAELA_charval;
PJXAELA = A_HEAP(A68_253 ) ;
RJXAELA = (*PJXAELA) = OJXAELA ;
NJXAELA.Alts = A_UNITE(QJXAELA,mode2,2,RJXAELA);
 /* line 1058: */
NJXAELA.Rest = INPAELA_charalts;
SJXAELA = A_HEAP(A68_251 ) ;
(*SJXAELA) = NJXAELA ;
INPAELA_charalts = SJXAELA;
} 
A_PROC_EXIT(char3);
return;
} 
#undef NL

A68_VOID  TJXAELA_char4(void)
{ 
A68_251 * UJXAELA_calts;
A68_251  VJXAELA;  /* collateral clause result */
A68_251 * WJXAELA;  /* YIELD */
A68_173  XJXAELA;  /* collateral clause result */
A68_250  YJXAELA;  /* collateral clause result */
A68_452  AKXAELA_generator;   /* proc value of non-global proc */
A68_54  FKXAELA;  /* avoid structure result */
A68_247  GKXAELA;  /* OPERATORS - mode -> union mode */
A68_173 * HKXAELA;  /* YIELD */
A68_172  IKXAELA;  /* OPERATORS - mode -> union mode */
A68_203  JKXAELA;  /* collateral clause result */
A68_199  KKXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(char4);
{ 
UJXAELA_calts = LQCAELA_nilcharalts;
 /* line 1061: */
for ( ;; )
{ 
 /* line 1062: */
if ( !((INPAELA_charalts!=LQCAELA_nilcharalts)) ) break;
VJXAELA.Alts = (*(&(INPAELA_charalts->Alts)));
VJXAELA.Rest = UJXAELA_calts;
WJXAELA = A_HEAP(A68_251 ) ;
(*WJXAELA) = VJXAELA ;
UJXAELA_calts = WJXAELA;
 /* line 1063: */
 /* line 1064: */
INPAELA_charalts = (*(&(INPAELA_charalts->Rest)));
}
 /* line 1065: */
 /* line 1066: */
XJXAELA.Idinfo = (*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)));
 /* line 1067: */
XJXAELA.Typeno = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 1068: */
YJXAELA.Idinfo = AOPAELA_prangedec;
A_CLOSURE( AKXAELA_generator, BKXAELA_generator, CKXAELA_generator );
 /* line 1069: */
A_CALLPROC(AKXAELA_generator,(A68_FALSE, &FKXAELA),(A68_FALSE, &FKXAELA,(AKXAELA_generator).nonlocals));
A_VASSIGN2(NOPAELA_charcheck,FKXAELA,A68_BOOL ) ;
YJXAELA.Charcheck = FKXAELA;
YJXAELA.Charalts = UJXAELA_calts;
XJXAELA.U = A_UNITE(GKXAELA,mode3,3,YJXAELA);
HKXAELA = A_HEAP(A68_173 ) ;
(*HKXAELA) = XJXAELA ;
RLPAELA_type = A_UNITE(IKXAELA,mode1,1,HKXAELA);
 /* line 1070: */
JKXAELA.Type = RLPAELA_type;
JKXAELA.Index = VPCAELA_stringindex;
UIQAELA_setidunn(AOPAELA_prangedec, A_UNITE(KKXAELA,mode4,4,JKXAELA));
 /* line 1071: */
if ( (FKPAELA_cfnno==0) )
{ 
GUSAELA_samespecid(AOPAELA_prangedec, (*(&((*(&(ZNPAELA_iddecs->Ids)))->Rest))));
} 
 /* line 1072: */
 /* line 1073: */
BMPAELA_which = KXCAELA_wtype;
} 
A_PROC_EXIT(char4);
return;
} 
#undef NL

A68_VOID  LKXAELA_char5(void)
{ 
A68_INT  NKXAELA;  /* YIELD */
A68_165  MKXAELA_c1;
A68_BOOL  OKXAELA;  /* optbool result */
A68_31  QKXAELA_generator;   /* proc value of non-global proc */
A68_VC  VKXAELA;  /* avoid structure result */
A68_INT  WKXAELA;  /* YIELD */
A68_CHAR * XKXAELA;  /* YIELD */
A68_INT  YKXAELA;  /* YIELD */
A68_CHAR * ZKXAELA;  /* YIELD */
A68_263  ALXAELA;  /* OPERATORS - mode -> union mode */
A68_262  BLXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(char5);
{ 
NKXAELA = (A68_INT)(unsigned char)LJPAELA_charval ;
MKXAELA_c1 = (*(&A_R1INDEX(JPPAELA_charset,NKXAELA)));
 /* line 1076: */
OKXAELA = ((*(&((&MKXAELA_c1)->Type)))!=XJPAELA_bold);
if ( OKXAELA )
{ /* line 1077: */
OKXAELA = ((*(&((&MKXAELA_c1)->Type)))!=YJPAELA_letter);
}
if ( OKXAELA )
{ /* line 1078: */
OKXAELA = ((*(&((&MKXAELA_c1)->Type)))!=ZJPAELA_digit);
}
if ( OKXAELA )
{ 
A_CLOSURE( QKXAELA_generator, RKXAELA_generator, SKXAELA_generator );
A_CALLPROC(QKXAELA_generator,(A68_FALSE, &VKXAELA),(A68_FALSE, &VKXAELA,(QKXAELA_generator).nonlocals));
LKPAELA_fp3 = VKXAELA;
 /* line 1079: */
WKXAELA = 1 ;
XKXAELA = (&A_VINDEX(LKPAELA_fp3,WKXAELA)) ;
(*XKXAELA) = '\'';
YKXAELA = 2 ;
ZKXAELA = (&A_VINDEX(LKPAELA_fp3,YKXAELA)) ;
(*ZKXAELA) = LJPAELA_charval;
 /* line 1080: */
 /* line 1081: */
 /* line 1082: */
 /* line 1083: */
SZPAELA_faultp(144, A_HVEC(BLXAELA,A_UNITE(ALXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
} 
A_PROC_EXIT(char5);
return;
} 
#undef NL

A68_VOID  CLXAELA_idsattr(void)
{ 
A68_170 * DLXAELA;  /* YIELD */
A_PROC_ENTRY(idsattr);
DLXAELA = (&((*(&(ZNPAELA_iddecs->Ids)))->Attr)) ;
(*DLXAELA) = FJPAELA_attr;
A_PROC_EXIT(idsattr);
return;
} 
#undef NL

A68_VOID  ELXAELA_setnew(void)
{ 
A68_BOOL * FLXAELA;  /* YIELD */
A_PROC_ENTRY(setnew);
FLXAELA = (&(ZNPAELA_iddecs->New)) ;
(*FLXAELA) = A68_TRUE;
A_PROC_EXIT(setnew);
return;
} 
#undef NL

A68_VOID  GLXAELA_typedec1(void)
{ 
A68_317  HLXAELA;  /* collateral clause result */
A68_317 * ILXAELA;  /* YIELD */
A68_32  JLXAELA;  /* clause result */
A68_32  KLXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  LLXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(typedec1);
{ 
HLXAELA.Ids = OLPAELA_ids;
HLXAELA.Macsort = XWCAELA_expl_par;
HLXAELA.Xno = EKPAELA_ctypeno+=1;
HLXAELA.New = A68_FALSE;
HLXAELA.Rest = ZNPAELA_iddecs;
ILXAELA = A_HEAP(A68_317 ) ;
(*ILXAELA) = HLXAELA ;
ZNPAELA_iddecs = ILXAELA;
 /* line 1091: */
if ( (FKPAELA_cfnno==0) )
{ 
JLXAELA = A_HVEC(KLXAELA,SLCAELA_ktype,A68_INT );
} 
else
{ 
JLXAELA = A_HVEC(LLXAELA,DLCAELA_typename,A68_INT );
} 
A_CALLPROC(VOPAELA_outints,(JLXAELA),(JLXAELA,(VOPAELA_outints).nonlocals));
 /* line 1092: */
A_CALLPROC(WOPAELA_outid,(CIPAELA_ident),(CIPAELA_ident,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(typedec1);
return;
} 
#undef NL

A68_VOID  MLXAELA_typedec2(void)
{ 
A68_244 * NLXAELA_tids;
A68_174  OLXAELA;  /* collateral clause result */
A68_174 * PLXAELA;  /* YIELD */
A68_172  QLXAELA;  /* OPERATORS - mode -> union mode */
A68_172 * RLXAELA;  /* YIELD */
A68_199  SLXAELA;  /* united object - for case conformity */
A68_182  TLXAELA_f;
A68_199  ULXAELA;  /* OPERATORS - mode -> union mode */
A68_172  VLXAELA;  /* OPERATORS - mode -> union mode */
A68_172 * WLXAELA;  /* YIELD */
A68_453  XLXAELA;  /* collateral clause result */
A68_32  YLXAELA;  /* OPERATORS - istruct -> vector */
A68_396  ZLXAELA;  /* collateral clause result */
A68_32  AMXAELA;  /* OPERATORS - istruct -> vector */
A68_32  BMXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  CMXAELA;  /* united object - for case conformity */
A68_173 * DMXAELA_p;
A68_INT * EMXAELA;  /* YIELD */
A68_174 * FMXAELA_n;
A68_INT * GMXAELA;  /* YIELD */
A_PROC_ENTRY(typedec2);
{ 
NLXAELA_tids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 1096: */
 /* line 1097: */
if ( !(*(&(ZNPAELA_iddecs->New))) )
{ 
OLXAELA.Idinfo = (*(&(NLXAELA_tids->Idinfo)));
OLXAELA.Typeno = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 1098: */
OLXAELA.T = RLPAELA_type;
PLXAELA = A_HEAP(A68_174 ) ;
(*PLXAELA) = OLXAELA ;
RLPAELA_type = A_UNITE(QLXAELA,mode2,2,PLXAELA);
} 
 /* line 1099: */
RLXAELA = (&((&XNPAELA_typeid)->T)) ;
(*RLXAELA) = RLPAELA_type;
 /* line 1100: */
SLXAELA = (*(&((*(&(NLXAELA_tids->Idinfo)))->U))) ;
switch ( SLXAELA.mode )
{ 
case 8: /* STRUCT(INT)  */
TLXAELA_f = (SLXAELA.data.mode8);
/*SKIP*/;
break;
default: 
UIQAELA_setidunn((*(&(NLXAELA_tids->Idinfo))), A_UNITE(ULXAELA,mode2,2,XNPAELA_typeid));
break;
} 
 /* line 1101: */
WLXAELA = (&((&XNPAELA_typeid)->T)) ;
(*WLXAELA) = A_UNITE(VLXAELA,mode10,10,DRCAELA_flt);
 /* line 1102: */
 /* line 1103: */
if ( (FKPAELA_cfnno==0) )
{ 
 /* line 1104: */
if ( GUSAELA_samespecid((*(&(NLXAELA_tids->Idinfo))), (*(&(NLXAELA_tids->Rest)))) )
{ 
 /* line 1105: */
OLPAELA_ids = (*(&(NLXAELA_tids->Rest)));
} 
 /* line 1106: */
ULPAELA_k = (*(&((*(&(KQUAELA_id_in_scope((*(&((*(&(NLXAELA_tids->Idinfo)))->Id))), CUCAELA_nilscope, A68_FALSE)->Idinfo)))->Vnno)));
 /* line 1107: */
XLXAELA.data[0] = MLCAELA_dummy;
XLXAELA.data[1] = A_ABS(ULPAELA_k);
XLXAELA.data[2] = IKPAELA_cattrno;
XLXAELA.data[3] = GKPAELA_cintno;
XLXAELA.data[4] = EKPAELA_ctypeno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(YLXAELA,XLXAELA,5,A68_INT )),(A_HISVEC(YLXAELA,XLXAELA,5,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1108: */
WGQAELA_outextattrs(OLPAELA_ids);
JGQAELA_outextints(OLPAELA_ids);
 /* line 1109: */
OPQAELA_outexttypes(OLPAELA_ids);
} 
else
{ 
ZLXAELA.data[0] = MLCAELA_dummy;
ZLXAELA.data[1] = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 1110: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(AMXAELA,ZLXAELA,2,A68_INT )),(A_HISVEC(AMXAELA,ZLXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1111: */
XQQAELA_outattrs((*(&((*(&(ZNPAELA_iddecs->Ids)))->Attr))));
 /* line 1112: */
HLQAELA_loadtype(RLPAELA_type, A68_TRUE, A68_TRUE, A68_FALSE);
 /* line 1113: */
KMPAELA_macsort = (*(&(ZNPAELA_iddecs->Macsort)));
 /* line 1114: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 1115: */
 /* line 1116: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(BMXAELA,XLCAELA_kend,A68_INT )),(A_HVEC(BMXAELA,XLCAELA_kend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1117: */
CMXAELA = RLPAELA_type ;
switch ( CMXAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
DMXAELA_p = (CMXAELA.data.mode1);
 /* line 1118: */
EMXAELA = (&(DMXAELA_p->Typeno)) ;
(*EMXAELA) = (-1);
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
FMXAELA_n = (CMXAELA.data.mode2);
GMXAELA = (&(FMXAELA_n->Typeno)) ;
(*GMXAELA) = (-1);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1119: */
 /* line 1120: */
 /* line 1121: */
UHQAELA_unscopeids(OLPAELA_ids);
} 
} 
A_PROC_EXIT(typedec2);
return;
} 
#undef NL

A68_VOID  HMXAELA_intdec1(void)
{ 
A68_317  IMXAELA;  /* collateral clause result */
A68_317 * JMXAELA;  /* YIELD */
A68_32  KMXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  LMXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(intdec1);
{ 
IMXAELA.Ids = OLPAELA_ids;
IMXAELA.Macsort = XWCAELA_expl_par;
IMXAELA.Xno = GKPAELA_cintno+=1;
IMXAELA.New = A68_FALSE;
IMXAELA.Rest = ZNPAELA_iddecs;
JMXAELA = A_HEAP(A68_317 ) ;
(*JMXAELA) = IMXAELA ;
ZNPAELA_iddecs = JMXAELA;
 /* line 1126: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(KMXAELA,TLCAELA_kint,A68_INT )),(A_HVEC(KMXAELA,TLCAELA_kint,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(LMXAELA,UNCAELA_intname,A68_INT )),(A_HVEC(LMXAELA,UNCAELA_intname,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1127: */
A_CALLPROC(WOPAELA_outid,(CIPAELA_ident),(CIPAELA_ident,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(intdec1);
return;
} 
#undef NL

A68_VOID  MMXAELA_intdec2(void)
{ 
A68_244 * NMXAELA_iids;
A68_195  OMXAELA;  /* collateral clause result */
A68_195 * PMXAELA;  /* YIELD */
A68_185  QMXAELA;  /* OPERATORS - mode -> union mode */
A68_185 * RMXAELA;  /* YIELD */
A68_199  SMXAELA;  /* OPERATORS - mode -> union mode */
A68_185  TMXAELA;  /* OPERATORS - mode -> union mode */
A68_185 * UMXAELA;  /* YIELD */
A68_454  VMXAELA;  /* collateral clause result */
A68_32  WMXAELA;  /* OPERATORS - istruct -> vector */
A68_396  XMXAELA;  /* collateral clause result */
A68_32  YMXAELA;  /* OPERATORS - istruct -> vector */
A68_185  ZMXAELA;  /* united object - for case conformity */
A68_195 * ANXAELA_idf;
A68_185  BNXAELA;  /* avoid structure result */
A68_185 * CNXAELA;  /* YIELD */
A68_46  FNXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  GNXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  HNXAELA;  /* united object - for case conformity */
A68_195 * INXAELA_idef;
A68_INT * JNXAELA;  /* YIELD */
A_PROC_ENTRY(intdec2);
{ 
NMXAELA_iids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 1131: */
OMXAELA.Idinfo = (*(&(NMXAELA_iids->Idinfo)));
OMXAELA.Intno = (*(&(ZNPAELA_iddecs->Xno)));
OMXAELA.I = SLPAELA_integer;
PMXAELA = A_HEAP(A68_195 ) ;
(*PMXAELA) = OMXAELA ;
SLPAELA_integer = A_UNITE(QMXAELA,mode12,12,PMXAELA);
 /* line 1132: */
RMXAELA = (&((&WNPAELA_intid)->I)) ;
(*RMXAELA) = SLPAELA_integer;
UIQAELA_setidunn((*(&(NMXAELA_iids->Idinfo))), A_UNITE(SMXAELA,mode1,1,WNPAELA_intid));
UMXAELA = (&((&WNPAELA_intid)->I)) ;
(*UMXAELA) = A_UNITE(TMXAELA,mode4,4,DRCAELA_flt);
 /* line 1133: */
 /* line 1134: */
if ( (FKPAELA_cfnno==0) )
{ 
if ( GUSAELA_samespecid((*(&(NMXAELA_iids->Idinfo))), (*(&(NMXAELA_iids->Rest)))) )
{ 
OLPAELA_ids = (*(&(NMXAELA_iids->Rest)));
} 
 /* line 1135: */
ULPAELA_k = (*(&((*(&(KQUAELA_id_in_scope((*(&((*(&(NMXAELA_iids->Idinfo)))->Id))), CUCAELA_nilscope, A68_FALSE)->Idinfo)))->Vnno)));
 /* line 1136: */
VMXAELA.data[0] = MLCAELA_dummy;
VMXAELA.data[1] = A_ABS(ULPAELA_k);
VMXAELA.data[2] = IKPAELA_cattrno;
VMXAELA.data[3] = GKPAELA_cintno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(WMXAELA,VMXAELA,4,A68_INT )),(A_HISVEC(WMXAELA,VMXAELA,4,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1137: */
WGQAELA_outextattrs(OLPAELA_ids);
 /* line 1138: */
JGQAELA_outextints(OLPAELA_ids);
} 
else
{ 
XMXAELA.data[0] = MLCAELA_dummy;
XMXAELA.data[1] = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 1139: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(YMXAELA,XMXAELA,2,A68_INT )),(A_HISVEC(YMXAELA,XMXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1140: */
XQQAELA_outattrs((*(&(NMXAELA_iids->Attr))));
 /* line 1141: */
 /* line 1142: */
ZMXAELA = SLPAELA_integer ;
switch ( ZMXAELA.mode )
{ 
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
ANXAELA_idf = (ZMXAELA.data.mode12);
 /* line 1143: */
if ( MJQAELA_loadint((*(&(ANXAELA_idf->I))), A68_FALSE) )
{ 
 /* line 1144: */
 /* line 1145: */
DSDAELA_uncheckedint( (*(&(ANXAELA_idf->I))), &BNXAELA );
CNXAELA = (&(ANXAELA_idf->I)) ;
(*CNXAELA) = BNXAELA;
} 
break;
default: 
 /* line 1146: */
UQPAELA_fault(0, A_HVEC(FNXAELA,ENXAELA,A68_VC ));
break;
} 
 /* line 1147: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 1148: */
 /* line 1149: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(GNXAELA,XLCAELA_kend,A68_INT )),(A_HVEC(GNXAELA,XLCAELA_kend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1150: */
HNXAELA = SLPAELA_integer ;
switch ( HNXAELA.mode )
{ 
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
INXAELA_idef = (HNXAELA.data.mode12);
JNXAELA = (&(INXAELA_idef->Intno)) ;
(*JNXAELA) = (-1);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
UHQAELA_unscopeids(OLPAELA_ids);
} 
} 
A_PROC_EXIT(intdec2);
return;
} 
#undef NL

A68_VOID  KNXAELA_constdec1(void)
{ 
A68_317  LNXAELA;  /* collateral clause result */
A68_317 * MNXAELA;  /* YIELD */
A68_32  NNXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  ONXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(constdec1);
{ 
LNXAELA.Ids = OLPAELA_ids;
LNXAELA.Macsort = XWCAELA_expl_par;
LNXAELA.Xno = HKPAELA_cctypeno+=1;
LNXAELA.New = A68_FALSE;
LNXAELA.Rest = ZNPAELA_iddecs;
MNXAELA = A_HEAP(A68_317 ) ;
(*MNXAELA) = LNXAELA ;
ZNPAELA_iddecs = MNXAELA;
 /* line 1157: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(NNXAELA,VLCAELA_kconst,A68_INT )),(A_HVEC(NNXAELA,VLCAELA_kconst,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(ONXAELA,JOCAELA_constname,A68_INT )),(A_HVEC(ONXAELA,JOCAELA_constname,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1158: */
 /* line 1159: */
A_CALLPROC(WOPAELA_outid,(CIPAELA_ident),(CIPAELA_ident,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(constdec1);
return;
} 
#undef NL

A68_VOID  PNXAELA_constdec2(void)
{ 
A68_244 * QNXAELA_cids;
A68_223  RNXAELA;  /* collateral clause result */
A68_223 * SNXAELA;  /* YIELD */
A68_222  TNXAELA;  /* OPERATORS - mode -> union mode */
A68_222 * UNXAELA;  /* YIELD */
A68_199  VNXAELA;  /* OPERATORS - mode -> union mode */
A68_222  WNXAELA;  /* OPERATORS - mode -> union mode */
A68_222 * XNXAELA;  /* YIELD */
A68_456  YNXAELA;  /* collateral clause result */
A68_32  ZNXAELA;  /* OPERATORS - istruct -> vector */
A68_396  AOXAELA;  /* collateral clause result */
A68_32  BOXAELA;  /* OPERATORS - istruct -> vector */
A68_222  COXAELA;  /* united object - for case conformity */
A68_223 * DOXAELA_cn;
A68_46  GOXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  HOXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_222  IOXAELA;  /* united object - for case conformity */
A68_223 * JOXAELA_cn;
A68_INT * KOXAELA;  /* YIELD */
A_PROC_ENTRY(constdec2);
{ 
QNXAELA_cids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 1163: */
RNXAELA.Idinfo = (*(&(QNXAELA_cids->Idinfo)));
RNXAELA.Ctypeno = (*(&(ZNPAELA_iddecs->Xno)));
RNXAELA.Ct = OMPAELA_ctype;
RNXAELA.T = RLPAELA_type;
SNXAELA = A_HEAP(A68_223 ) ;
(*SNXAELA) = RNXAELA ;
OMPAELA_ctype = A_UNITE(TNXAELA,mode1,1,SNXAELA);
 /* line 1164: */
UNXAELA = (&((&YNPAELA_ctypeid)->Ct)) ;
(*UNXAELA) = OMPAELA_ctype;
UIQAELA_setidunn((*(&(QNXAELA_cids->Idinfo))), A_UNITE(VNXAELA,mode3,3,YNPAELA_ctypeid));
 /* line 1165: */
XNXAELA = (&((&YNPAELA_ctypeid)->Ct)) ;
(*XNXAELA) = A_UNITE(WNXAELA,mode10,10,DRCAELA_flt);
 /* line 1166: */
 /* line 1167: */
if ( (FKPAELA_cfnno==0) )
{ 
 /* line 1168: */
if ( GUSAELA_samespecid((*(&(QNXAELA_cids->Idinfo))), (*(&(QNXAELA_cids->Rest)))) )
{ 
 /* line 1169: */
OLPAELA_ids = (*(&(QNXAELA_cids->Rest)));
} 
 /* line 1170: */
ULPAELA_k = (*(&((*(&(KQUAELA_id_in_scope((*(&((*(&(QNXAELA_cids->Idinfo)))->Id))), CUCAELA_nilscope, A68_FALSE)->Idinfo)))->Vnno)));
 /* line 1171: */
YNXAELA.data[0] = MLCAELA_dummy;
YNXAELA.data[1] = A_ABS(ULPAELA_k);
YNXAELA.data[2] = IKPAELA_cattrno;
YNXAELA.data[3] = GKPAELA_cintno;
YNXAELA.data[4] = EKPAELA_ctypeno;
YNXAELA.data[5] = HKPAELA_cctypeno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(ZNXAELA,YNXAELA,6,A68_INT )),(A_HISVEC(ZNXAELA,YNXAELA,6,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1172: */
WGQAELA_outextattrs(OLPAELA_ids);
JGQAELA_outextints(OLPAELA_ids);
OPQAELA_outexttypes(OLPAELA_ids);
 /* line 1173: */
IHQAELA_outextctypes(OLPAELA_ids);
} 
else
{ 
AOXAELA.data[0] = MLCAELA_dummy;
AOXAELA.data[1] = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 1174: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(BOXAELA,AOXAELA,2,A68_INT )),(A_HISVEC(BOXAELA,AOXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1175: */
XQQAELA_outattrs((*(&((*(&(ZNPAELA_iddecs->Ids)))->Attr))));
 /* line 1176: */
 /* line 1177: */
COXAELA = OMPAELA_ctype ;
switch ( COXAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
DOXAELA_cn = (COXAELA.data.mode1);
 /* line 1178: */
HUQAELA_loadctype((*(&(DOXAELA_cn->Ct))));
break;
default: 
 /* line 1179: */
UQPAELA_fault(0, A_HVEC(GOXAELA,FOXAELA,A68_VC ));
break;
} 
 /* line 1180: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 1181: */
 /* line 1182: */
if ( (FKPAELA_cfnno==0) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HOXAELA,XLCAELA_kend,A68_INT )),(A_HVEC(HOXAELA,XLCAELA_kend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1183: */
IOXAELA = OMPAELA_ctype ;
switch ( IOXAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
JOXAELA_cn = (IOXAELA.data.mode1);
KOXAELA = (&(JOXAELA_cn->Ctypeno)) ;
(*KOXAELA) = (-1);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1184: */
 /* line 1185: */
 /* line 1186: */
UHQAELA_unscopeids(OLPAELA_ids);
} 
} 
A_PROC_EXIT(constdec2);
return;
} 
#undef NL

A68_VOID  LOXAELA_id1pr(void)
{ 
A68_199  MOXAELA;  /* united object - for case conformity */
A68_203  NOXAELA_p;
A68_172  OOXAELA;  /* OPERATORS - mode -> union mode */
A68_172  POXAELA;  /* OPERATORS - mode -> union mode */
A68_172  QOXAELA;  /* OPERATORS - mode -> union mode */
A68_444  ROXAELA;  /* collateral clause result */
A68_32  SOXAELA;  /* OPERATORS - istruct -> vector */
A68_202  TOXAELA_c;
A68_222  UOXAELA;  /* united object - for case conformity */
A68_223 * VOXAELA_cn;
A68_172  WOXAELA;  /* OPERATORS - mode -> union mode */
A68_222  XOXAELA;  /* OPERATORS - mode -> union mode */
A68_172  YOXAELA;  /* avoid structure result */
A68_396  ZOXAELA;  /* collateral clause result */
A68_32  APXAELA;  /* OPERATORS - istruct -> vector */
A68_236 * BPXAELA_cv;
A68_396  CPXAELA;  /* collateral clause result */
A68_32  DPXAELA;  /* OPERATORS - istruct -> vector */
A68_204 * GPXAELA_d;
A68_BOOL  HPXAELA_is_outputtok;
A68_BOOL  IPXAELA;  /* optbool result */
A68_BOOL  JPXAELA;  /* optbool result */
A68_172  KPXAELA;  /* clause result */
A68_172  LPXAELA;  /* avoid structure result */
A68_46  MPXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  NPXAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  OPXAELA;  /* optbool result */
A68_BOOL  PPXAELA;  /* optbool result */
A68_172  QPXAELA;  /* avoid structure result */
A68_172  RPXAELA;  /* avoid structure result */
A68_INT  SPXAELA;  /* clause result */
A68_INT  TPXAELA_vnametype;
A68_444  UPXAELA;  /* collateral clause result */
A68_32  VPXAELA;  /* OPERATORS - istruct -> vector */
A68_206  WPXAELA_v;
A68_444  XPXAELA;  /* collateral clause result */
A68_32  YPXAELA;  /* OPERATORS - istruct -> vector */
A68_182  ZPXAELA_f;
A68_172  AQXAELA;  /* OPERATORS - mode -> union mode */
A68_172  BQXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(id1pr);
{ 
 /* line 1190: */
MOXAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( MOXAELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
NOXAELA_p = (MOXAELA.data.mode4);
 /* line 1191: */
{ 
RLPAELA_type = NOXAELA_p.Type;
 /* line 1192: */
if ( (NOXAELA_p.Index==0) )
{ 
{ 
UQPAELA_fault(20, VJAAOSI_nullmsg);
 /* line 1193: */
 /* line 1194: */
RLPAELA_type = A_UNITE(OOXAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 1195: */
if ( (NOXAELA_p.Index==VPCAELA_stringindex) )
{ 
{ 
UQPAELA_fault(148, VJAAOSI_nullmsg);
 /* line 1196: */
RLPAELA_type = A_UNITE(POXAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 1197: */
if ( (FGTAELA_unn(RLPAELA_type, NOXAELA_p.Index)!=EQCAELA_niltype) )
{ 
{ 
UQPAELA_fault(21, VJAAOSI_nullmsg);
 /* line 1198: */
 /* line 1199: */
RLPAELA_type = A_UNITE(QOXAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
ROXAELA.data[0] = GKCAELA_vprim;
ROXAELA.data[1] = WFTAELA_primtypeno(RLPAELA_type);
ROXAELA.data[2] = NOXAELA_p.Index;
 /* line 1200: */
 /* line 1201: */
 /* line 1202: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(SOXAELA,ROXAELA,3,A68_INT )),(A_HISVEC(SOXAELA,ROXAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
} 
} 
} 
} 
break;
case 3: /* STRUCT(MODE222)  */
TOXAELA_c = (MOXAELA.data.mode3);
 /* line 1203: */
{ 
 /* line 1204: */
UOXAELA = TOXAELA_c.Ct ;
switch ( UOXAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
VOXAELA_cn = (UOXAELA.data.mode1);
 /* line 1205: */
 /* line 1206: */
if ( ZBTAELA_containssort((*(&(VOXAELA_cn->Ct))), EKCAELA_calt) )
{ 
 /* line 1207: */
UQPAELA_fault(138, VJAAOSI_nullmsg);
 /* line 1208: */
 /* line 1209: */
RLPAELA_type = A_UNITE(WOXAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
A_CALLPROC(FUQAELA_ctypetotype,(A_UNITE(XOXAELA,mode1,1,VOXAELA_cn), &YOXAELA),(A_UNITE(XOXAELA,mode1,1,VOXAELA_cn), &YOXAELA,(FUQAELA_ctypetotype).nonlocals));
RLPAELA_type = YOXAELA;
 /* line 1210: */
ZOXAELA.data[0] = WKCAELA_vconst;
ZOXAELA.data[1] = (*(&(VOXAELA_cn->Ctypeno)));
 /* line 1211: */
 /* line 1212: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(APXAELA,ZOXAELA,2,A68_INT )),(A_HISVEC(APXAELA,ZOXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
BPXAELA_cv = (UOXAELA.data.mode17);
{ 
RLPAELA_type = (*(&(BPXAELA_cv->T)));
 /* line 1213: */
CPXAELA.data[0] = NOCAELA_vprimc;
CPXAELA.data[1] = (*(&((*(&(BPXAELA_cv->Cm)))->Xno)));
 /* line 1214: */
 /* line 1215: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(DPXAELA,CPXAELA,2,A68_INT )),(A_HISVEC(DPXAELA,CPXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
default: 
 /* line 1216: */
 /* line 1217: */
 /* line 1218: */
NKDAOST_sysfault(FPXAELA);
break;
} 
} 
break;
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
GPXAELA_d = (MOXAELA.data.mode5);
 /* line 1219: */
{ 
HPXAELA_is_outputtok = ((*(&(GPXAELA_d->Origin)))==ESCAELA_outputtok);
 /* line 1220: */
 /* line 1221: */
if ( ZMPAELA_ioid )
{ 
IPXAELA = HPXAELA_is_outputtok;
if ( IPXAELA )
{IPXAELA = !ANPAELA_lhsjoin;
}
 /* line 1222: */
if ( ! IPXAELA )
{JPXAELA = !HPXAELA_is_outputtok;
if ( JPXAELA )
{JPXAELA = ANPAELA_lhsjoin;
}
 /* line 1223: */
IPXAELA = JPXAELA;
}
if ( IPXAELA )
{ 
 /* line 1224: */
AITAELA_setiotype( (*(&(GPXAELA_d->Type))), TPCAELA_vnameiosource, &LPXAELA );
KPXAELA = LPXAELA;
} 
else
{ 
LKPAELA_fp3 = (*(&((&VLPAELA_idinfo)->Id)));
 /* line 1225: */
UQPAELA_fault(248, A_HVEC(MPXAELA,LKPAELA_fp3,A68_VC ));
 /* line 1226: */
 /* line 1227: */
 /* line 1228: */
KPXAELA = A_UNITE(NPXAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
OPXAELA = HPXAELA_is_outputtok;
if ( OPXAELA )
{OPXAELA = !ANPAELA_lhsjoin;
}
 /* line 1229: */
if ( ! OPXAELA )
{PPXAELA = !HPXAELA_is_outputtok;
if ( PPXAELA )
{PPXAELA = ANPAELA_lhsjoin;
}
 /* line 1230: */
OPXAELA = PPXAELA;
}
if ( OPXAELA )
{ 
 /* line 1231: */
AITAELA_setiotype( (*(&(GPXAELA_d->Type))), RPCAELA_vnamesource, &QPXAELA );
KPXAELA = QPXAELA;
} 
else
{ 
 /* line 1232: */
 /* line 1233: */
AITAELA_setiotype( (*(&(GPXAELA_d->Type))), SPCAELA_vnamesink, &RPXAELA );
KPXAELA = RPXAELA;
} 
} 
RLPAELA_type = KPXAELA;
 /* line 1234: */
 /* line 1235: */
 /* line 1236: */
if ( ZMPAELA_ioid )
{ 
if ( ANPAELA_lhsjoin )
{ 
SPXAELA = TPCAELA_vnameiosource;
} 
else
{ 
 /* line 1237: */
SPXAELA = UPCAELA_vnameiosink;
} 
} 
else
{ 
if ( ANPAELA_lhsjoin )
{ 
SPXAELA = RPCAELA_vnamesource;
} 
else
{ 
 /* line 1238: */
SPXAELA = SPCAELA_vnamesink;
} 
} 
TPXAELA_vnametype = SPXAELA;
 /* line 1239: */
UPXAELA.data[0] = IKCAELA_vname;
UPXAELA.data[1] = TPXAELA_vnametype;
UPXAELA.data[2] = (*(&(GPXAELA_d->Decno)));
 /* line 1240: */
 /* line 1241: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(VPXAELA,UPXAELA,3,A68_INT )),(A_HISVEC(VPXAELA,UPXAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 7: /* STRUCT(MODE172,INT)  */
WPXAELA_v = (MOXAELA.data.mode7);
 /* line 1242: */
{ 
RLPAELA_type = WPXAELA_v.Type;
XPXAELA.data[0] = IKCAELA_vname;
XPXAELA.data[1] = RPCAELA_vnamesource;
XPXAELA.data[2] = WPXAELA_v.Decno;
 /* line 1243: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(YPXAELA,XPXAELA,3,A68_INT )),(A_HISVEC(YPXAELA,XPXAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 8: /* STRUCT(INT)  */
ZPXAELA_f = (MOXAELA.data.mode8);
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
RLPAELA_type = A_UNITE(AQXAELA,mode10,10,DRCAELA_flt);
break;
default: 
RLPAELA_type = A_UNITE(BQXAELA,mode10,10,DRCAELA_flt);
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 1247: */
 /* line 1248: */
 /* line 1249: */
UQPAELA_fault(128, VJAAOSI_nullmsg);
break;
} 
 /* line 1250: */
ZMPAELA_ioid = A68_FALSE;
 /* line 1251: */
 /* line 1252: */
WOVAELA_pushvss(1);
} 
A_PROC_EXIT(id1pr);
return;
} 
#undef NL

A68_VOID  CQXAELA_vquerypr(void)
{ 
A68_32  DQXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vquerypr);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(DQXAELA,RKCAELA_vquery,A68_INT )),(A_HVEC(DQXAELA,RKCAELA_vquery,A68_INT ),(VOPAELA_outints).nonlocals));
HLQAELA_loadtype(RLPAELA_type, A68_FALSE, A68_FALSE, A68_FALSE);
WOVAELA_pushvss(1);
} 
A_PROC_EXIT(vquerypr);
return;
} 
#undef NL

A68_VOID  EQXAELA_id2(void)
{ 
A68_199  FQXAELA;  /* united object - for case conformity */
A68_203  GQXAELA_p;
A68_172  HQXAELA;  /* OPERATORS - mode -> union mode */
A68_31  JQXAELA_generator;   /* proc value of non-global proc */
A68_VC  OQXAELA;  /* avoid structure result */
A68_VC  PQXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QQXAELA;  /* OPERATORS - assign op */
A68_31  SQXAELA_generator;   /* proc value of non-global proc */
A68_VC  XQXAELA;  /* avoid structure result */
A68_VC  YQXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZQXAELA;  /* OPERATORS - assign op */
A68_445  ARXAELA;  /* collateral clause result */
A68_263  BRXAELA;  /* OPERATORS - mode -> union mode */
A68_263  CRXAELA;  /* OPERATORS - mode -> union mode */
A68_262  DRXAELA;  /* OPERATORS - istruct -> vector */
A68_172  ERXAELA;  /* OPERATORS - mode -> union mode */
A68_172  FRXAELA;  /* united object - for case conformity */
A68_173 * GRXAELA_ps;
A68_247  HRXAELA;  /* united object - for case conformity */
A68_248  IRXAELA_r;
A68_447  JRXAELA;  /* collateral clause result */
A68_263  KRXAELA;  /* OPERATORS - mode -> union mode */
A68_263  LRXAELA;  /* OPERATORS - unite union */
A68_263  MRXAELA;  /* OPERATORS - mode -> union mode */
A68_263  NRXAELA;  /* OPERATORS - unite union */
A68_263  ORXAELA;  /* OPERATORS - unite union */
A68_262  PRXAELA;  /* OPERATORS - istruct -> vector */
A68_447  QRXAELA;  /* collateral clause result */
A68_263  RRXAELA;  /* OPERATORS - mode -> union mode */
A68_263  SRXAELA;  /* OPERATORS - unite union */
A68_263  TRXAELA;  /* OPERATORS - mode -> union mode */
A68_263  URXAELA;  /* OPERATORS - unite union */
A68_263  VRXAELA;  /* OPERATORS - unite union */
A68_262  WRXAELA;  /* OPERATORS - istruct -> vector */
A68_396  XRXAELA;  /* collateral clause result */
A68_32  YRXAELA;  /* OPERATORS - istruct -> vector */
A68_182  ZRXAELA_f;
A68_172  ASXAELA;  /* OPERATORS - mode -> union mode */
A68_172  BSXAELA;  /* OPERATORS - mode -> union mode */
A68_VC  HSXAELA;  /* avoid structure result */
A68_VC  JSXAELA;  /* OPERATORS - assign op */
A68_263  KSXAELA;  /* OPERATORS - mode -> union mode */
A68_262  LSXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(id2);
{ 
VLPAELA_idinfo = (*(&(EOPAELA_idinfostack->I)));
EOPAELA_idinfostack = (*(&(EOPAELA_idinfostack->Rest)));
 /* line 1260: */
 /* line 1261: */
FQXAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( FQXAELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
GQXAELA_p = (FQXAELA.data.mode4);
 /* line 1262: */
{ 
RLPAELA_type = GQXAELA_p.Type;
 /* line 1263: */
 /* line 1264: */
if ( (GQXAELA_p.Index>0) )
{ 
{ 
UQPAELA_fault(22, VJAAOSI_nullmsg);
 /* line 1265: */
RLPAELA_type = A_UNITE(HQXAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 1266: */
if ( (GQXAELA_p.Index==VPCAELA_stringindex) )
{ 
{ 
A_CLOSURE( JQXAELA_generator, KQXAELA_generator, LQXAELA_generator );
A_CALLPROC(JQXAELA_generator,(A68_FALSE, &OQXAELA),(A68_FALSE, &OQXAELA,(JQXAELA_generator).nonlocals));
QQXAELA = A_HVEC(PQXAELA,'/',A68_CHAR ) ;
A_VASSIGN2(QQXAELA,OQXAELA,A68_CHAR ) ;
LKPAELA_fp3 = OQXAELA;
 /* line 1267: */
A_CLOSURE( SQXAELA_generator, TQXAELA_generator, UQXAELA_generator );
A_CALLPROC(SQXAELA_generator,(A68_FALSE, &XQXAELA),(A68_FALSE, &XQXAELA,(SQXAELA_generator).nonlocals));
ZQXAELA = A_HVEC(YQXAELA,'\'',A68_CHAR ) ;
A_VASSIGN2(ZQXAELA,XQXAELA,A68_CHAR ) ;
MKPAELA_fp4 = XQXAELA;
 /* line 1268: */
ARXAELA.data[0] = A_UNITE(BRXAELA,mode13,13,LKPAELA_fp3);
ARXAELA.data[1] = A_UNITE(CRXAELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(DRXAELA,ARXAELA,2,A68_263 ));
 /* line 1269: */
 /* line 1270: */
RLPAELA_type = A_UNITE(ERXAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 1271: */
FRXAELA = RLPAELA_type ;
switch ( FRXAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
GRXAELA_ps = (FRXAELA.data.mode1);
 /* line 1272: */
 /* line 1273: */
HRXAELA = (*(&(GRXAELA_ps->U))) ;
switch ( HRXAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
IRXAELA_r = (HRXAELA.data.mode1);
 /* line 1274: */
{ 
LKPAELA_fp3 = (*(&(IRXAELA_r.Idinfo->Id)));
 /* line 1275: */
QKPAELA_fp0 = SLPAELA_integer;
RKPAELA_fp5 = IRXAELA_r.Lwb;
SKPAELA_fp6 = IRXAELA_r.Upb;
 /* line 1276: */
 /* line 1278: */
JRXAELA.data[0] = A_UNITE(KRXAELA,mode13,13,LKPAELA_fp3);
JRXAELA.data[1] = A_UTABUNITE(LRXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
JRXAELA.data[2] = A_UNITE(MRXAELA,mode13,13,LKPAELA_fp3);
JRXAELA.data[3] = A_UTABUNITE(NRXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
JRXAELA.data[4] = A_UTABUNITE(ORXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), IRXAELA_r.Lwb, 112, A_HISVEC(PRXAELA,JRXAELA,5,A68_263 ));
 /* line 1279: */
 /* line 1281: */
QRXAELA.data[0] = A_UNITE(RRXAELA,mode13,13,LKPAELA_fp3);
QRXAELA.data[1] = A_UTABUNITE(SRXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
QRXAELA.data[2] = A_UNITE(TRXAELA,mode13,13,LKPAELA_fp3);
QRXAELA.data[3] = A_UTABUNITE(URXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
QRXAELA.data[4] = A_UTABUNITE(VRXAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
 /* line 1282: */
 /* line 1283: */
 /* line 1284: */
PZRAELA_testintegers(BWRAELA_checkle, (&SLPAELA_integer), IRXAELA_r.Upb, 112, A_HISVEC(WRXAELA,QRXAELA,5,A68_263 ));
} 
break;
default: 
 /* line 1285: */
 /* line 1286: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1287: */
XRXAELA.data[0] = HKCAELA_vprimi;
XRXAELA.data[1] = WFTAELA_primtypeno(RLPAELA_type);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(YRXAELA,XRXAELA,2,A68_INT )),(A_HISVEC(YRXAELA,XRXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1288: */
 /* line 1289: */
 /* line 1290: */
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
} 
} 
} 
break;
case 8: /* STRUCT(INT)  */
ZRXAELA_f = (FQXAELA.data.mode8);
 /* line 1291: */
 /* line 1292: */
 /* line 1293: */
RLPAELA_type = A_UNITE(ASXAELA,mode10,10,DRCAELA_flt);
break;
default: 
RLPAELA_type = A_UNITE(BSXAELA,mode10,10,DRCAELA_flt);
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 1294: */
DSXAELA_generator( A68_FALSE, &HSXAELA );
JSXAELA = ISXAELA ;
A_VASSIGN2(JSXAELA,HSXAELA,A68_CHAR ) ;
MKPAELA_fp4 = HSXAELA;
 /* line 1295: */
 /* line 1296: */
SZPAELA_faultp(126, A_HVEC(LSXAELA,A_UNITE(KSXAELA,mode13,13,MKPAELA_fp4),A68_263 ));
break;
} 
 /* line 1297: */
 /* line 1298: */
WOVAELA_pushvss(1);
} 
A_PROC_EXIT(id2);
return;
} 
#undef NL

A68_VOID  MSXAELA_id3(void)
{ 
A68_291  NSXAELA;  /* collateral clause result */
A68_291 * OSXAELA;  /* YIELD */
A_PROC_ENTRY(id3);
NSXAELA.I = VLPAELA_idinfo;
NSXAELA.Rest = EOPAELA_idinfostack;
OSXAELA = A_HEAP(A68_291 ) ;
(*OSXAELA) = NSXAELA ;
EOPAELA_idinfostack = OSXAELA;
A_PROC_EXIT(id3);
return;
} 
#undef NL

A68_VOID  PSXAELA_id4(void)
{ 
A68_199  QSXAELA;  /* united object - for case conformity */
A68_203  RSXAELA_p;
A68_172  SSXAELA;  /* OPERATORS - mode -> union mode */
A68_444  TSXAELA;  /* collateral clause result */
A68_32  USXAELA;  /* OPERATORS - istruct -> vector */
A68_182  VSXAELA_f;
A68_172  WSXAELA;  /* OPERATORS - mode -> union mode */
A68_172  XSXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(id4);
{ 
VLPAELA_idinfo = (*(&(EOPAELA_idinfostack->I)));
EOPAELA_idinfostack = (*(&(EOPAELA_idinfostack->Rest)));
 /* line 1305: */
 /* line 1306: */
QSXAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( QSXAELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
RSXAELA_p = (QSXAELA.data.mode4);
 /* line 1307: */
 /* line 1308: */
if ( ((GOPAELA_rt = FGTAELA_unn(RSXAELA_p.Type, RSXAELA_p.Index))==EQCAELA_niltype) )
{ 
UQPAELA_fault(23, VJAAOSI_nullmsg);
 /* line 1309: */
 /* line 1310: */
RLPAELA_type = A_UNITE(SSXAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
TSXAELA.data[0] = NKCAELA_vunn;
TSXAELA.data[1] = WFTAELA_primtypeno(RSXAELA_p.Type);
TSXAELA.data[2] = RSXAELA_p.Index;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(USXAELA,TSXAELA,3,A68_INT )),(A_HISVEC(USXAELA,TSXAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1311: */
GUUAELA_testequals(RLPAELA_type, (*GOPAELA_rt), A68_TRUE);
 /* line 1312: */
 /* line 1313: */
RLPAELA_type = RSXAELA_p.Type;
} 
break;
case 8: /* STRUCT(INT)  */
VSXAELA_f = (QSXAELA.data.mode8);
 /* line 1314: */
 /* line 1315: */
 /* line 1316: */
RLPAELA_type = A_UNITE(WSXAELA,mode10,10,DRCAELA_flt);
break;
default: 
RLPAELA_type = A_UNITE(XSXAELA,mode10,10,DRCAELA_flt);
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 1317: */
 /* line 1318: */
 /* line 1319: */
UQPAELA_fault(127, VJAAOSI_nullmsg);
break;
} 
} 
A_PROC_EXIT(id4);
return;
} 
#undef NL

A68_VOID  YSXAELA_sharp(void)
{ 
A68_199  ZSXAELA;  /* united object - for case conformity */
A68_203  ATXAELA_p;
A68_172  BTXAELA;  /* united object - for case conformity */
A68_182  CTXAELA_f;
A68_263  DTXAELA;  /* OPERATORS - mode -> union mode */
A68_262  ETXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  FTXAELA;  /* OPERATORS - mode -> union mode */
A68_444  GTXAELA;  /* collateral clause result */
A68_32  HTXAELA;  /* OPERATORS - istruct -> vector */
A68_182  ITXAELA_f;
A68_172  JTXAELA;  /* OPERATORS - mode -> union mode */
A68_172  KTXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sharp);
 /* line 1323: */
ZSXAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( ZSXAELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
ATXAELA_p = (ZSXAELA.data.mode4);
 /* line 1324: */
{ 
GUUAELA_testequals(RLPAELA_type, ATXAELA_p.Type, A68_FALSE);
 /* line 1325: */
BTXAELA = RLPAELA_type ;
switch ( BTXAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
CTXAELA_f = (BTXAELA.data.mode10);
 /* line 1326: */
 /* line 1327: */
/*SKIP*/;
break;
default: 
 /* line 1328: */
if ( ((GOPAELA_rt = FGTAELA_unn(ATXAELA_p.Type, ATXAELA_p.Index))==EQCAELA_niltype) )
{ 
LKPAELA_fp3 = CIPAELA_ident;
SZPAELA_faultp(46, A_HVEC(ETXAELA,A_UNITE(DTXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 1329: */
 /* line 1330: */
 /* line 1331: */
RLPAELA_type = A_UNITE(FTXAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
GTXAELA.data[0] = OKCAELA_vsharp;
GTXAELA.data[1] = WFTAELA_primtypeno(RLPAELA_type);
GTXAELA.data[2] = ATXAELA_p.Index;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(HTXAELA,GTXAELA,3,A68_INT )),(A_HISVEC(HTXAELA,GTXAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1332: */
 /* line 1333: */
 /* line 1334: */
 /* line 1335: */
RLPAELA_type = (*GOPAELA_rt);
} 
break;
} 
} 
break;
case 8: /* STRUCT(INT)  */
ITXAELA_f = (ZSXAELA.data.mode8);
 /* line 1336: */
 /* line 1337: */
RLPAELA_type = A_UNITE(JTXAELA,mode10,10,DRCAELA_flt);
break;
default: 
RLPAELA_type = A_UNITE(KTXAELA,mode10,10,DRCAELA_flt);
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 1338: */
 /* line 1339: */
UQPAELA_fault(129, VJAAOSI_nullmsg);
break;
} 
A_PROC_EXIT(sharp);
return;
} 
#undef NL

A68_VOID  LTXAELA_explmac(void)
{ 
A_PROC_ENTRY(explmac);
KMPAELA_macsort = XWCAELA_expl_par;
A_PROC_EXIT(explmac);
return;
} 
#undef NL

A68_VOID  MTXAELA_implmac(void)
{ 
A68_INT  NTXAELA;  /* clause result */
A_PROC_ENTRY(implmac);
 /* line 1345: */
 /* line 1346: */
if ( (*(&(JLPAELA_fndec->Macro))) )
{ 
NTXAELA = YWCAELA_impl_par;
} 
else
{ 
 /* line 1347: */
 /* line 1348: */
if ( ((*(&(JLPAELA_fndec->Sort)))==HXCAELA_macpardec) )
{ 
 /* line 1349: */
NTXAELA = ZWCAELA_impl_expl;
} 
else
{ 
NTXAELA = WWCAELA_flt_par;
} 
} 
KMPAELA_macsort = NTXAELA;
A_PROC_EXIT(implmac);
return;
} 
#undef NL

A68_VOID  OTXAELA_impliffn(void)
{ 
A68_BOOL  PTXAELA;  /* optbool result */
A68_INT  QTXAELA;  /* clause result */
A_PROC_ENTRY(impliffn);
 /* line 1353: */
PTXAELA = ((*(&(JLPAELA_fndec->Sort)))==HXCAELA_macpardec);
if ( PTXAELA )
{PTXAELA = !(*(&(JLPAELA_fndec->Macro)));
}
 /* line 1354: */
if ( PTXAELA )
{ 
 /* line 1355: */
QTXAELA = ZWCAELA_impl_expl;
} 
else
{ 
QTXAELA = WWCAELA_flt_par;
} 
KMPAELA_macsort = QTXAELA;
A_PROC_EXIT(impliffn);
return;
} 
#undef NL

A68_VOID  RTXAELA_implexpl(void)
{ 
A_PROC_ENTRY(implexpl);
if ( (KMPAELA_macsort!=WWCAELA_flt_par) )
{ 
KMPAELA_macsort = ZWCAELA_impl_expl;
} 
A_PROC_EXIT(implexpl);
return;
} 
#undef NL

A68_VOID  STXAELA_implimpl(void)
{ 
A_PROC_ENTRY(implimpl);
if ( (KMPAELA_macsort!=WWCAELA_flt_par) )
{ 
KMPAELA_macsort = AXCAELA_impl_impl;
} 
A_PROC_EXIT(implimpl);
return;
} 
#undef NL

A68_VOID  TTXAELA_dec1(void)
{ 
A_PROC_ENTRY(dec1);
KLPAELA_decs = (A68_171 *)A68_NIL;
A_PROC_EXIT(dec1);
return;
} 
#undef NL

A68_VOID  UTXAELA_dec2(void)
{ 
A68_171  VTXAELA;  /* collateral clause result */
A68_171 * WTXAELA;  /* YIELD */
A_PROC_ENTRY(dec2);
VTXAELA.T = RLPAELA_type;
VTXAELA.Ids = (A68_244 *)A68_NIL;
VTXAELA.Rest = KLPAELA_decs;
WTXAELA = A_HEAP(A68_171 ) ;
(*WTXAELA) = VTXAELA ;
KLPAELA_decs = WTXAELA;
A_PROC_EXIT(dec2);
return;
} 
#undef NL

A68_VOID  XTXAELA_dec3(void)
{ 
A68_244  YTXAELA;  /* collateral clause result */
A68_170  ZTXAELA;  /* OPERATORS - mode -> union mode */
A68_244 * AUXAELA;  /* YIELD */
A68_244 ** BUXAELA;  /* YIELD */
A_PROC_ENTRY(dec3);
YTXAELA.Idinfo = (*(&(OLPAELA_ids->Idinfo)));
YTXAELA.Declaration = A68_TRUE;
YTXAELA.Attr = A_UNITE(ZTXAELA,mode6,6,MRCAELA_attrnull);
YTXAELA.Rest = (*(&(KLPAELA_decs->Ids)));
AUXAELA = A_HEAP(A68_244 ) ;
(*AUXAELA) = YTXAELA ;
BUXAELA = (&(KLPAELA_decs->Ids)) ;
(*BUXAELA) = AUXAELA;
A_PROC_EXIT(dec3);
return;
} 
#undef NL

A68_VOID  CUXAELA_dec6(void)
{ 
A68_170 * DUXAELA;  /* YIELD */
A_PROC_ENTRY(dec6);
DUXAELA = (&((*(&(KLPAELA_decs->Ids)))->Attr)) ;
(*DUXAELA) = FJPAELA_attr;
A_PROC_EXIT(dec6);
return;
} 
#undef NL

A68_VOID  EUXAELA_unnamedinput(void)
{ 
A68_199  FUXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(unnamedinput);
BTUAELA_newid(TTCAOST_nullid, A_UNITE(FUXAELA,mode9,9,HRCAELA_rec));
A_PROC_EXIT(unnamedinput);
return;
} 
#undef NL

A68_VOID  GUXAELA_inputpr(void)
{ 
A68_171 ** HUXAELA;  /* YIELD */
A68_172  IUXAELA;  /* avoid structure result */
A68_172 * JUXAELA;  /* YIELD */
A_PROC_ENTRY(inputpr);
{ 
GXUAELA_makedecs(KLPAELA_decs, ZTCAELA_inputtok, JLPAELA_fndec);
 /* line 1378: */
HUXAELA = (&(JLPAELA_fndec->Inputs)) ;
(*HUXAELA) = KLPAELA_decs;
 /* line 1379: */
 /* line 1380: */
BUDAELA_ddecs_type( KLPAELA_decs, &IUXAELA );
JUXAELA = (&(JLPAELA_fndec->Param)) ;
(*JUXAELA) = IUXAELA;
} 
A_PROC_EXIT(inputpr);
return;
} 
#undef NL

A68_VOID  KUXAELA_outputpr(void)
{ 
A68_171 ** LUXAELA;  /* YIELD */
A68_172  MUXAELA;  /* avoid structure result */
A68_172 * NUXAELA;  /* YIELD */
A_PROC_ENTRY(outputpr);
{ 
GXUAELA_makedecs(KLPAELA_decs, ESCAELA_outputtok, JLPAELA_fndec);
 /* line 1384: */
LUXAELA = (&(JLPAELA_fndec->Outputs)) ;
(*LUXAELA) = KLPAELA_decs;
 /* line 1385: */
 /* line 1386: */
BUDAELA_ddecs_type( KLPAELA_decs, &MUXAELA );
NUXAELA = (&(JLPAELA_fndec->Ans)) ;
(*NUXAELA) = MUXAELA;
} 
A_PROC_EXIT(outputpr);
return;
} 
#undef NL

A68_VOID  OUXAELA_voidtype(void)
{ 
A68_172  PUXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(voidtype);
{ 
RLPAELA_type = A_UNITE(PUXAELA,mode12,12,NRCAELA_typevoid);
BMPAELA_which = KXCAELA_wtype;
} 
A_PROC_EXIT(voidtype);
return;
} 
#undef NL

A68_VOID  QUXAELA_voidctype(void)
{ 
A68_172  RUXAELA;  /* OPERATORS - mode -> union mode */
A68_222  SUXAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(voidctype);
{ 
RLPAELA_type = A_UNITE(RUXAELA,mode12,12,NRCAELA_typevoid);
 /* line 1393: */
 /* line 1394: */
if ( ((*(&(DNPAELA_currentstate->State)))==YPCAELA_inconst) )
{ 
OMPAELA_ctype = A_UNITE(SUXAELA,mode18,18,ORCAELA_constvoid);
 /* line 1395: */
BMPAELA_which = LXCAELA_wctype;
} 
else
{ 
 /* line 1396: */
 /* line 1397: */
BMPAELA_which = KXCAELA_wtype;
} 
} 
A_PROC_EXIT(voidctype);
return;
} 
#undef NL

A68_VOID  TUXAELA_voidpr(void)
{ 
A68_172  UUXAELA;  /* OPERATORS - mode -> union mode */
A68_218 * VUXAELA;  /* YIELD */
A68_210  WUXAELA;  /* OPERATORS - mode -> union mode */
A68_32  XUXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(voidpr);
{ 
RLPAELA_type = A_UNITE(UUXAELA,mode12,12,NRCAELA_typevoid);
 /* line 1400: */
VUXAELA = A_HEAP(A68_218 ) ;
(*VUXAELA) = TRCAELA_jvoid ;
VMPAELA_joinup = A_UNITE(WUXAELA,mode5,5,VUXAELA);
 /* line 1401: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(XUXAELA,SOCAELA_vvoid,A68_INT )),(A_HVEC(XUXAELA,SOCAELA_vvoid,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1402: */
 /* line 1403: */
WOVAELA_pushvss(1);
} 
A_PROC_EXIT(voidpr);
return;
} 
#undef NL

A68_VOID  YUXAELA_letstart(void)
{ 
A68_281  ZUXAELA;  /* collateral clause result */
A68_281 * AVXAELA;  /* YIELD */
A_PROC_ENTRY(letstart);
ZUXAELA.Num = 0;
ZUXAELA.Rest = TOPAELA_multlets;
AVXAELA = A_HEAP(A68_281 ) ;
(*AVXAELA) = ZUXAELA ;
TOPAELA_multlets = AVXAELA;
A_PROC_EXIT(letstart);
return;
} 
#undef NL

A68_VOID  BVXAELA_let1(void)
{ 
A68_INT * CVXAELA;  /* YIELD */
A68_244  DVXAELA;  /* collateral clause result */
A68_170  EVXAELA;  /* OPERATORS - mode -> union mode */
A68_244 * FVXAELA;  /* YIELD */
A_PROC_ENTRY(let1);
{ 
CVXAELA = (&(TOPAELA_multlets->Num)) ;
(*CVXAELA) = ((*(&(TOPAELA_multlets->Num)))+1);
 /* line 1411: */
DVXAELA.Idinfo = (*(&(OLPAELA_ids->Idinfo)));
DVXAELA.Declaration = A68_TRUE;
DVXAELA.Attr = A_UNITE(EVXAELA,mode6,6,MRCAELA_attrnull);
 /* line 1412: */
DVXAELA.Rest = MOPAELA_decids;
FVXAELA = A_HEAP(A68_244 ) ;
(*FVXAELA) = DVXAELA ;
MOPAELA_decids = FVXAELA;
} 
A_PROC_EXIT(let1);
return;
} 
#undef NL

A68_VOID  GVXAELA_let2(void)
{ 
A68_32  HVXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  IVXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JVXAELA;  /* to part of loop */
A68_INT  KVXAELA;  /* loop control */
A_PROC_ENTRY(let2);
{ 
KLPAELA_decs = ZMVAELA_decs_setup(MOPAELA_decids, RLPAELA_type);
 /* line 1416: */
GXUAELA_makedecs(KLPAELA_decs, ISCAELA_lettok, JLPAELA_fndec);
 /* line 1417: */
if ( ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HVXAELA,SMCAELA_seqlet,A68_INT )),(A_HVEC(HVXAELA,SMCAELA_seqlet,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(IVXAELA,ELCAELA_biddec,A68_INT )),(A_HVEC(IVXAELA,ELCAELA_biddec,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1418: */
BSQAELA_outddecs(KLPAELA_decs, A68_TRUE, A68_FALSE);
 /* line 1419: */
LLPAELA_vss-=1;
 /* line 1420: */
JVXAELA = (*(&(TOPAELA_multlets->Num)));
for ( KVXAELA = 1;
KVXAELA <= JVXAELA;
KVXAELA += 1 )
{ 
MOPAELA_decids = (*(&(MOPAELA_decids->Rest)));
}
 /* line 1421: */
 /* line 1422: */
TOPAELA_multlets = (*(&(TOPAELA_multlets->Rest)));
} 
A_PROC_EXIT(let2);
return;
} 
#undef NL

A68_VOID  LVXAELA_let3(void)
{ 
A68_170 * MVXAELA;  /* YIELD */
A_PROC_ENTRY(let3);
MVXAELA = (&(MOPAELA_decids->Attr)) ;
(*MVXAELA) = FJPAELA_attr;
A_PROC_EXIT(let3);
return;
} 
#undef NL

A68_VOID  NVXAELA_nullets(void)
{ 
A68_BOOL  OVXAELA_allnull;
A68_244 * PVXAELA_decids2;
A68_BOOL  QVXAELA;  /* optbool result */
A68_INT * RVXAELA;  /* YIELD */
A_PROC_ENTRY(nullets);
{ 
OVXAELA_allnull = A68_TRUE;
 /* line 1429: */
PVXAELA_decids2 = MOPAELA_decids;
 /* line 1430: */
for ( ;; )
{ 
 /* line 1431: */
if ( !((PVXAELA_decids2!=CQCAELA_nilids)) ) break;
QVXAELA = OVXAELA_allnull;
if ( QVXAELA )
{ /* line 1432: */
QVXAELA = ((*(&((*(&(PVXAELA_decids2->Idinfo)))->Id))).upb>0);
}
if ( QVXAELA )
{ 
 /* line 1433: */
OVXAELA_allnull = A68_FALSE;
} 
 /* line 1434: */
 /* line 1435: */
PVXAELA_decids2 = (*(&(PVXAELA_decids2->Rest)));
}
 /* line 1436: */
 /* line 1437: */
if ( OVXAELA_allnull )
{ 
UQPAELA_fault(160, VJAAOSI_nullmsg);
 /* line 1438: */
 /* line 1439: */
 /* line 1440: */
RVXAELA = (&(TOPAELA_multlets->Num)) ;
(*RVXAELA) = 0;
} 
} 
A_PROC_EXIT(nullets);
return;
} 
#undef NL

A68_VOID  SVXAELA_macrop(void)
{ 
A_PROC_ENTRY(macrop);
IMPAELA_macro = A68_TRUE;
A_PROC_EXIT(macrop);
return;
} 
#undef NL

A68_VOID  TVXAELA_fndecp(void)
{ 
A68_INT  UVXAELA;  /* clause result */
A_PROC_ENTRY(fndecp);
{ 
if ( (FKPAELA_cfnno==0) )
{ 
UVXAELA = FXCAELA_outerdec;
} 
else
{ 
UVXAELA = GXCAELA_localdec;
} 
JMPAELA_fndecsort = UVXAELA;
 /* line 1448: */
 /* line 1449: */
IMPAELA_macro = A68_FALSE;
} 
A_PROC_EXIT(fndecp);
return;
} 
#undef NL

A68_VOID  VVXAELA_mfndecp(void)
{ 
A_PROC_ENTRY(mfndecp);
{ 
JMPAELA_fndecsort = HXCAELA_macpardec;
 /* line 1453: */
 /* line 1454: */
IMPAELA_macro = A68_FALSE;
} 
A_PROC_EXIT(mfndecp);
return;
} 
#undef NL

A68_VOID  WVXAELA_callfn(void)
{ 
A_PROC_ENTRY(callfn);
{ 
CLUAELA_setup_compilefn();
 /* line 1459: */
 /* line 1460: */
XLUAELA_default(FKPAELA_cfnno, OLPAELA_ids, PLPAELA_fns);
} 
A_PROC_EXIT(callfn);
return;
} 
#undef NL

A68_VOID  XVXAELA_exitfn(void)
{ 
A68_167 * YVXAELA_fnans;
A68_BOOL  ZVXAELA;  /* optbool result */
A68_166  AWXAELA;  /* collateral clause result */
A68_166 * BWXAELA;  /* YIELD */
A68_INT * CWXAELA;  /* YIELD */
A68_INT * DWXAELA;  /* YIELD */
A_PROC_ENTRY(exitfn);
{ 
YVXAELA_fnans = JLPAELA_fndec;
 /* line 1464: */
FMPAELA_fnstack = (*(&(FMPAELA_fnstack->Rest)));
 /* line 1465: */
PLUAELA_reset_compilefn();
 /* line 1466: */
ZVXAELA = ((*(&(YVXAELA_fnans->Sort)))!=FXCAELA_outerdec);
if ( ! ZVXAELA )
{ /* line 1467: */
ZVXAELA = ((*(&((*(&(YVXAELA_fnans->Fninfo)))->Vnno)))==APPAELA_vnno);
}
if ( ZVXAELA )
{ 
AWXAELA.Fndec = YVXAELA_fnans;
AWXAELA.Declaration = A68_TRUE;
 /* line 1468: */
AWXAELA.Rest = PLPAELA_fns;
BWXAELA = A_HEAP(A68_166 ) ;
(*BWXAELA) = AWXAELA ;
PLPAELA_fns = BWXAELA;
} 
 /* line 1469: */
 /* line 1470: */
if ( ((*(&(YVXAELA_fnans->Fnno)))==1) )
{ 
FKPAELA_cfnno = 0;
CWXAELA = (&(YVXAELA_fnans->Fnno)) ;
(*CWXAELA) = (-1);
 /* line 1471: */
 /* line 1472: */
 /* line 1473: */
DWXAELA = (&((*(&(YVXAELA_fnans->Fninfo)))->Scope)) ;
(*DWXAELA) = (-1);
} 
} 
A_PROC_EXIT(exitfn);
return;
} 
#undef NL

A68_VOID  EWXAELA_fn1(void)
{ 
A_PROC_ENTRY(fn1);
{ 
 /* line 1478: */
if ( ((*(&(JLPAELA_fndec->Sort)))==HXCAELA_macpardec) )
{ 
 /* line 1479: */
CNPAELA_nonunitbody = A68_TRUE;
} 
else
{ 
WOVAELA_pushvss(1);
 /* line 1480: */
 /* line 1481: */
QSQAELA_outfndec(JLPAELA_fndec, A68_TRUE);
} 
} 
A_PROC_EXIT(fn1);
return;
} 
#undef NL

A68_VOID  FWXAELA_fn2(void)
{ 
A68_168 * GWXAELA_fi;
A68_BOOL  HWXAELA;  /* optbool result */
A68_171 * IWXAELA_outdecs;
A68_244 * JWXAELA_idsout;
A68_199  KWXAELA;  /* united object - for case conformity */
A68_204 * LWXAELA_ds;
A68_244 * MWXAELA_ids2;
A68_199  NWXAELA;  /* united object - for case conformity */
A68_204 * OWXAELA_dids;
A68_BOOL  PWXAELA;  /* optbool result */
A68_283  QWXAELA;  /* collateral clause result */
A68_283 * RWXAELA;  /* YIELD */
A68_396  SWXAELA;  /* collateral clause result */
A68_32  TWXAELA;  /* OPERATORS - istruct -> vector */
A68_454  UWXAELA;  /* collateral clause result */
A68_32  VWXAELA;  /* OPERATORS - istruct -> vector */
A68_INT * WWXAELA;  /* YIELD */
A68_32  XWXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_396  YWXAELA;  /* collateral clause result */
A68_32  ZWXAELA;  /* OPERATORS - istruct -> vector */
A68_453  AXXAELA;  /* collateral clause result */
A68_32  BXXAELA;  /* OPERATORS - istruct -> vector */
A68_444  CXXAELA;  /* collateral clause result */
A68_32  DXXAELA;  /* OPERATORS - istruct -> vector */
A68_32  EXXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fn2);
{ 
GWXAELA_fi = (*(&(JLPAELA_fndec->Fninfo)));
 /* line 1485: */
HWXAELA = MJPAELA_syntaxerror;
if ( ! HWXAELA )
{HWXAELA = CNPAELA_nonunitbody;
}
if ( ! HWXAELA )
{HWXAELA = BNPAELA_nooutput;
}
 /* line 1487: */
if ( !HWXAELA )
{ 
IWXAELA_outdecs = (*(&(JLPAELA_fndec->Outputs)));
 /* line 1488: */
for ( ;; )
{ 
 /* line 1489: */
if ( !((IWXAELA_outdecs!=FQCAELA_nildecs)) ) break;
JWXAELA_idsout = (*(&(IWXAELA_outdecs->Ids)));
 /* line 1490: */
for ( ;; )
{ 
 /* line 1491: */
if ( !((JWXAELA_idsout!=CQCAELA_nilids)) ) break;
 /* line 1492: */
KWXAELA = (*(&((*(&(JWXAELA_idsout->Idinfo)))->U))) ;
switch ( KWXAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
LWXAELA_ds = (KWXAELA.data.mode5);
{ 
HFVAELA_check_off((&(LWXAELA_ds->Jsource)), A68_TRUE, A68_TRUE);
 /* line 1493: */
 /* line 1494: */
 /* line 1495: */
 /* line 1496: */
HFVAELA_check_off((&(LWXAELA_ds->Jsink)), A68_FALSE, A68_TRUE);
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1497: */
 /* line 1498: */
JWXAELA_idsout = (*(&(JWXAELA_idsout->Rest)));
}
 /* line 1499: */
 /* line 1500: */
IWXAELA_outdecs = (*(&(IWXAELA_outdecs->Rest)));
}
 /* line 1501: */
 /* line 1502: */
GUUAELA_testequals(RLPAELA_type, (*(&(JLPAELA_fndec->Ans))), A68_TRUE);
} 
 /* line 1504: */
 /* line 1505: */
if ( ((*(&(JLPAELA_fndec->Sort)))!=HXCAELA_macpardec) )
{ 
MWXAELA_ids2 = OLPAELA_ids;
 /* line 1506: */
for ( ;; )
{ 
 /* line 1507: */
if ( !(((*(&(ENPAELA_scopestack->Ids)))!=MWXAELA_ids2)) ) break;
 /* line 1508: */
if ( (*(&(MWXAELA_ids2->Declaration))) )
{ 
 /* line 1509: */
NWXAELA = (*(&((*(&(MWXAELA_ids2->Idinfo)))->U))) ;
switch ( NWXAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
OWXAELA_dids = (NWXAELA.data.mode5);
 /* line 1510: */
 /* line 1511: */
PWXAELA = FAVAELA_has_join_check((&(OWXAELA_dids->Jsource)));
if ( ! PWXAELA )
{ /* line 1512: */
PWXAELA = FAVAELA_has_join_check((&(OWXAELA_dids->Jsink)));
}
if ( PWXAELA )
{ 
 /* line 1513: */
QWXAELA.Decno = (*(&(OWXAELA_dids->Decno)));
 /* line 1514: */
QWXAELA.Rest = AMPAELA_decnocheck;
 /* line 1515: */
 /* line 1516: */
RWXAELA = A_HEAP(A68_283 ) ;
(*RWXAELA) = QWXAELA ;
AMPAELA_decnocheck = RWXAELA;
} 
break;
default: 
 /* line 1517: */
/*SKIP*/;
break;
} 
} 
 /* line 1518: */
 /* line 1519: */
MWXAELA_ids2 = (*(&(MWXAELA_ids2->Rest)));
}
 /* line 1520: */
for ( ;; )
{ 
 /* line 1521: */
if ( !((AMPAELA_decnocheck!=HUCAELA_nildecnocheck)) ) break;
SWXAELA.data[0] = MLCAELA_dummy;
SWXAELA.data[1] = (*(&(AMPAELA_decnocheck->Decno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(TWXAELA,SWXAELA,2,A68_INT )),(A_HISVEC(TWXAELA,SWXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1522: */
 /* line 1523: */
AMPAELA_decnocheck = (*(&(AMPAELA_decnocheck->Rest)));
}
 /* line 1524: */
UWXAELA.data[0] = ZKCAELA_fnend;
UWXAELA.data[1] = (*(&(JLPAELA_fndec->Fnno)));
UWXAELA.data[2] = (*(&(JLPAELA_fndec->Num_names)));
UWXAELA.data[3] = MLPAELA_maxvss;
 /* line 1525: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(VWXAELA,UWXAELA,4,A68_INT )),(A_HISVEC(VWXAELA,UWXAELA,4,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1526: */
KLVAELA_unscope((&ENPAELA_scopestack), (&OLPAELA_ids), (&PLPAELA_fns));
 /* line 1527: */
WWXAELA = (&((*(&(JLPAELA_fndec->Fninfo)))->Status)) ;
(*WWXAELA) = EXCAELA_fn_ok;
 /* line 1528: */
 /* line 1529: */
if ( (PNPAELA_scope==0) )
{ 
YTQAELA_num_names_extfns(PLPAELA_fns);
 /* line 1530: */
TYSAELA_checkspecfns(JLPAELA_fndec, PLPAELA_fns);
 /* line 1531: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(XWXAELA,YLCAELA_kilend,A68_INT )),(A_HVEC(XWXAELA,YLCAELA_kilend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1532: */
YWXAELA.data[0] = ULCAELA_kfn;
YWXAELA.data[1] = FKPAELA_cfnno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(ZWXAELA,YWXAELA,2,A68_INT )),(A_HISVEC(ZWXAELA,YWXAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1533: */
AXXAELA.data[0] = MLCAELA_dummy;
AXXAELA.data[1] = IKPAELA_cattrno;
AXXAELA.data[2] = GKPAELA_cintno;
AXXAELA.data[3] = EKPAELA_ctypeno;
AXXAELA.data[4] = HKPAELA_cctypeno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(BXXAELA,AXXAELA,5,A68_INT )),(A_HISVEC(BXXAELA,AXXAELA,5,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1534: */
WGQAELA_outextattrs(OLPAELA_ids);
JGQAELA_outextints(OLPAELA_ids);
 /* line 1535: */
OPQAELA_outexttypes(OLPAELA_ids);
IHQAELA_outextctypes(OLPAELA_ids);
PTQAELA_outextfns(PLPAELA_fns);
 /* line 1536: */
QSQAELA_outfndec(JLPAELA_fndec, A68_FALSE);
 /* line 1537: */
CXXAELA.data[0] = MLCAELA_dummy;
CXXAELA.data[1] = (*(&(GWXAELA_fi->Vnno)));
CXXAELA.data[2] = ((*(&(GWXAELA_fi->Import))));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(DXXAELA,CXXAELA,3,A68_INT )),(A_HISVEC(DXXAELA,CXXAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1538: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(EXXAELA,XLCAELA_kend,A68_INT )),(A_HVEC(EXXAELA,XLCAELA_kend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1539: */
 /* line 1540: */
 /* line 1541: */
UHQAELA_unscopeids(OLPAELA_ids);
} 
} 
A_PROC_EXIT(fn2);
return;
} 
#undef NL

A68_VOID  FXXAELA_fn3(void)
{ 
A68_167 * GXXAELA_f;
A68_BOOL  HXXAELA;  /* optbool result */
A68_BOOL  IXXAELA;  /* optbool result */
A68_263  JXXAELA;  /* OPERATORS - mode -> union mode */
A68_262  KXXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LXXAELA;  /* clause result */
A68_INT  MXXAELA_status;
A68_167 * NXXAELA_newfd;
A68_166  OXXAELA;  /* collateral clause result */
A68_166 * PXXAELA;  /* YIELD */
A68_287  QXXAELA;  /* collateral clause result */
A68_287 * RXXAELA;  /* YIELD */
A_PROC_ENTRY(fn3);
{ 
GXXAELA_f = (*(&(YQUAELA_fn_in_scope(ZHPAELA_compsymb, PLPAELA_fns, CUCAELA_nilscope, A68_FALSE)->Fndec)));
 /* line 1545: */
HXXAELA = ((*(&((*(&(GXXAELA_f->Fninfo)))->Scope)))==PNPAELA_scope);
if ( ! HXXAELA )
{IXXAELA = (PNPAELA_scope==0);
if ( IXXAELA )
{IXXAELA = (*(&((*(&(GXXAELA_f->Fninfo)))->Text)));
}
HXXAELA = IXXAELA;
}
 /* line 1546: */
if ( HXXAELA )
{ /* line 1547: */
HXXAELA = ((*(&((*(&(GXXAELA_f->Fninfo)))->Status)))==EXCAELA_fn_ok);
}
if ( HXXAELA )
{ 
LKPAELA_fp3 = ZHPAELA_compsymb;
 /* line 1548: */
SZPAELA_faultp(48, A_HVEC(KXXAELA,A_UNITE(JXXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
 /* line 1549: */
MTUAELA_newscope(YKCAELA_fnstart, OLPAELA_ids, PLPAELA_fns);
 /* line 1550: */
FKPAELA_cfnno+=1;
 /* line 1551: */
if ( IMPAELA_macro )
{ 
LXXAELA = EXCAELA_fn_ok;
} 
else
{ 
LXXAELA = DXCAELA_fn_rec;
} 
MXXAELA_status = LXXAELA;
 /* line 1552: */
NXXAELA_newfd = UPUAELA_defaultfndec(ZHPAELA_compsymb, IMPAELA_macro, MXXAELA_status, FKPAELA_cfnno, JMPAELA_fndecsort);
 /* line 1553: */
OXXAELA.Fndec = NXXAELA_newfd;
OXXAELA.Declaration = A68_TRUE;
OXXAELA.Rest = PLPAELA_fns;
PXXAELA = A_HEAP(A68_166 ) ;
(*PXXAELA) = OXXAELA ;
PLPAELA_fns = PXXAELA;
 /* line 1554: */
QXXAELA.Dec = (*(&(PLPAELA_fns->Fndec)));
QXXAELA.Rest = FMPAELA_fnstack;
RXXAELA = A_HEAP(A68_287 ) ;
(*RXXAELA) = QXXAELA ;
FMPAELA_fnstack = RXXAELA;
 /* line 1555: */
 /* line 1556: */
JLPAELA_fndec = (*(&(FMPAELA_fnstack->Dec)));
} 
A_PROC_EXIT(fn3);
return;
} 
#undef NL

A68_VOID  SXXAELA_fn5(void)
{ 
A68_170 * TXXAELA;  /* YIELD */
A_PROC_ENTRY(fn5);
TXXAELA = (&(JLPAELA_fndec->Attr)) ;
(*TXXAELA) = FJPAELA_attr;
A_PROC_EXIT(fn5);
return;
} 
#undef NL

A68_VOID  UXXAELA_mparamint(void)
{ 
A68_VC  VXXAELA_id;
A68_396  WXXAELA_fnno_mpno;
A68_245 * XXXAELA_macinfo;
A68_245  YXXAELA;  /* collateral clause result */
A68_32  ZXXAELA;  /* OPERATORS - istruct -> vector */
A68_32  AYXAELA;  /* OPERATORS - simple index */
A68_INT  BYXAELA;  /* YIELD */
A68_32  CYXAELA;  /* OPERATORS - istruct -> vector */
A68_32  DYXAELA;  /* OPERATORS - simple index */
A68_INT  EYXAELA;  /* YIELD */
A68_189 * FYXAELA_ivar;
A68_169 * GYXAELA_mps;
A68_169  HYXAELA;  /* collateral clause result */
A68_32  IYXAELA;  /* OPERATORS - istruct -> vector */
A68_32  JYXAELA;  /* OPERATORS - simple index */
A68_INT  KYXAELA;  /* YIELD */
A68_260  LYXAELA;  /* OPERATORS - mode -> union mode */
A68_185  MYXAELA;  /* OPERATORS - mode -> union mode */
A68_185 * NYXAELA;  /* YIELD */
A68_185  OYXAELA;  /* OPERATORS - mode -> union mode */
A68_185 * PYXAELA;  /* YIELD */
A68_199  QYXAELA;  /* united object - for case conformity */
A68_199  RYXAELA;  /* OPERATORS - mode -> union mode */
A68_263  SYXAELA;  /* OPERATORS - mode -> union mode */
A68_262  TYXAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_199  UYXAELA;  /* OPERATORS - mode -> union mode */
A68_199  VYXAELA;  /* OPERATORS - mode -> union mode */
A68_185  WYXAELA;  /* OPERATORS - mode -> union mode */
A68_185 * XYXAELA;  /* YIELD */
A_PROC_ENTRY(mparamint);
{ 
VXXAELA_id = (*(&((*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)))->Id)));
 /* line 1564: */
 /* line 1565: */
if ( ((*(&(ZNPAELA_iddecs->Macsort)))!=WWCAELA_flt_par) )
{ 
WXXAELA_fnno_mpno = YOVAELA_next_mparamno(FMPAELA_fnstack);
 /* line 1566: */
 /* line 1567: */
XXXAELA_macinfo = (A_HEAP(A68_245 ));
YXXAELA.Id = VXXAELA_id;
YXXAELA.Sort = (*(&(ZNPAELA_iddecs->Macsort)));
AYXAELA = A_HISVEC(ZXXAELA,WXXAELA_fnno_mpno,2,A68_INT ) ;
BYXAELA = 1 ;
YXXAELA.Fnno = A_VINDEX(AYXAELA,BYXAELA);
 /* line 1568: */
DYXAELA = A_HISVEC(CYXAELA,WXXAELA_fnno_mpno,2,A68_INT ) ;
EYXAELA = 2 ;
YXXAELA.Index = A_VINDEX(DYXAELA,EYXAELA);
YXXAELA.Xno = (*(&(ZNPAELA_iddecs->Xno)));
YXXAELA.Attr = (*(&((*(&(ZNPAELA_iddecs->Ids)))->Attr)));
(*XXXAELA_macinfo) = YXXAELA;
 /* line 1569: */
FYXAELA_ivar = WLDAELA_makeintvar(XXXAELA_macinfo);
 /* line 1570: */
GYXAELA_mps = (A_HEAP(A68_169 ));
HYXAELA.Sort = (*(&(ZNPAELA_iddecs->Macsort)));
JYXAELA = A_HISVEC(IYXAELA,WXXAELA_fnno_mpno,2,A68_INT ) ;
KYXAELA = 2 ;
HYXAELA.Mparamno = A_VINDEX(JYXAELA,KYXAELA);
HYXAELA.Value = A_UNITE(LYXAELA,mode2,2,FYXAELA_ivar);
HYXAELA.Rest = IQCAELA_nilmparams;
(*GYXAELA_mps) = HYXAELA;
 /* line 1571: */
IPVAELA_add_mparam(GYXAELA_mps, FMPAELA_fnstack);
 /* line 1572: */
 /* line 1573: */
NYXAELA = (&((&WNPAELA_intid)->I)) ;
(*NYXAELA) = A_UNITE(MYXAELA,mode6,6,FYXAELA_ivar);
} 
else
{ 
 /* line 1574: */
PYXAELA = (&((&WNPAELA_intid)->I)) ;
(*PYXAELA) = A_UNITE(OYXAELA,mode4,4,DRCAELA_flt);
} 
 /* line 1575: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 1578: */
KLVAELA_unscope((&ENPAELA_scopestack), (&OLPAELA_ids), (&PLPAELA_fns));
 /* line 1579: */
 /* line 1580: */
QYXAELA = (*(&((*(&(KQUAELA_id_in_scope(VXXAELA_id, ENPAELA_scopestack, A68_FALSE)->Idinfo)))->U))) ;
switch ( QYXAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 1581: */
BTUAELA_newid(VXXAELA_id, A_UNITE(RYXAELA,mode9,9,HRCAELA_rec));
break;
case 8: /* STRUCT(INT)  */
 /* line 1582: */
/*SKIP*/;
break;
default: 
{ 
LKPAELA_fp3 = VXXAELA_id;
 /* line 1583: */
SZPAELA_faultp(9, A_HVEC(TYXAELA,A_UNITE(SYXAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 1584: */
 /* line 1585: */
 /* line 1586: */
BTUAELA_newid(VXXAELA_id, A_UNITE(UYXAELA,mode8,8,DRCAELA_flt));
} 
break;
} 
 /* line 1587: */
UIQAELA_setidunn((*(&(OLPAELA_ids->Idinfo))), A_UNITE(VYXAELA,mode1,1,WNPAELA_intid));
 /* line 1588: */
 /* line 1589: */
if ( !(*(&(JLPAELA_fndec->Macro))) )
{ 
 /* line 1590: */
BJQAELA_insert_idinfo((*(&(OLPAELA_ids->Idinfo))), (&ENPAELA_scopestack), (&OLPAELA_ids));
} 
 /* line 1591: */
SLPAELA_integer = (*(&((&WNPAELA_intid)->I)));
 /* line 1592: */
BMPAELA_which = JXCAELA_winteger;
 /* line 1593: */
 /* line 1594: */
XYXAELA = (&((&WNPAELA_intid)->I)) ;
(*XYXAELA) = A_UNITE(WYXAELA,mode4,4,DRCAELA_flt);
} 
A_PROC_EXIT(mparamint);
return;
} 
#undef NL

A68_VOID  YYXAELA_mparamtype1(void)
{ 
A68_317  ZYXAELA;  /* collateral clause result */
A68_317 * AZXAELA;  /* YIELD */
A_PROC_ENTRY(mparamtype1);
ZYXAELA.Ids = OLPAELA_ids;
ZYXAELA.Macsort = KMPAELA_macsort;
ZYXAELA.Xno = EKPAELA_ctypeno+=1;
ZYXAELA.New = A68_FALSE;
ZYXAELA.Rest = ZNPAELA_iddecs;
AZXAELA = A_HEAP(A68_317 ) ;
(*AZXAELA) = ZYXAELA ;
ZNPAELA_iddecs = AZXAELA;
A_PROC_EXIT(mparamtype1);
return;
} 
#undef NL

A_STATIC A68_VOID  CZXAELA_mparamtype(A68_BOOL  Withbody)
{ 
A68_244 * DZXAELA_tids;
A68_174  EZXAELA;  /* collateral clause result */
A68_174 * FZXAELA;  /* YIELD */
A68_172  GZXAELA;  /* OPERATORS - mode -> union mode */
A68_172  HZXAELA;  /* OPERATORS - mode -> union mode */
A68_VC  IZXAELA_tyname;
A68_396  JZXAELA_fnno_mpno;
A68_245 * KZXAELA_macinfo;
A68_245  LZXAELA;  /* collateral clause result */
A68_32  MZXAELA;  /* OPERATORS - istruct -> vector */
A68_32  NZXAELA;  /* OPERATORS - simple index */
A68_INT  OZXAELA;  /* YIELD */
A68_32  PZXAELA;  /* OPERATORS - istruct -> vector */
A68_32  QZXAELA;  /* OPERATORS - simple index */
A68_INT  RZXAELA;  /* YIELD */
A68_176 * SZXAELA_tvar;
A68_176  TZXAELA;  /* collateral clause result */
A68_169 * UZXAELA_mps;
A68_169  VZXAELA;  /* collateral clause result */
A68_32  WZXAELA;  /* OPERATORS - istruct -> vector */
A68_32  XZXAELA;  /* OPERATORS - simple index */
A68_INT  YZXAELA;  /* YIELD */
A68_260  ZZXAELA;  /* OPERATORS - mode -> union mode */
A68_172  AAYAELA;  /* OPERATORS - mode -> union mode */
A68_172 * BAYAELA;  /* YIELD */
A68_172  CAYAELA;  /* OPERATORS - mode -> union mode */
A68_172 * DAYAELA;  /* YIELD */
A68_199  EAYAELA;  /* united object - for case conformity */
A68_182  FAYAELA_f;
A68_199  GAYAELA;  /* OPERATORS - mode -> union mode */
A68_172  HAYAELA;  /* OPERATORS - mode -> union mode */
A68_172 * IAYAELA;  /* YIELD */
A_PROC_ENTRY(mparamtype);
 /* line 1600: */
{ 
DZXAELA_tids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 1601: */
 /* line 1602: */
if ( Withbody )
{ 
 /* line 1603: */
if ( !(*(&(ZNPAELA_iddecs->New))) )
{ 
EZXAELA.Idinfo = (*(&(DZXAELA_tids->Idinfo)));
EZXAELA.Typeno = (*(&(ZNPAELA_iddecs->Xno)));
 /* line 1604: */
EZXAELA.T = RLPAELA_type;
 /* line 1605: */
FZXAELA = A_HEAP(A68_174 ) ;
(*FZXAELA) = EZXAELA ;
RLPAELA_type = A_UNITE(GZXAELA,mode2,2,FZXAELA);
} 
} 
else
{ 
 /* line 1606: */
RLPAELA_type = A_UNITE(HZXAELA,mode5,5,AUCAELA_typenull);
} 
 /* line 1607: */
IZXAELA_tyname = (*(&((*(&(DZXAELA_tids->Idinfo)))->Id)));
 /* line 1608: */
KMPAELA_macsort = (*(&(ZNPAELA_iddecs->Macsort)));
 /* line 1609: */
 /* line 1610: */
if ( (KMPAELA_macsort!=WWCAELA_flt_par) )
{ 
JZXAELA_fnno_mpno = YOVAELA_next_mparamno(FMPAELA_fnstack);
 /* line 1611: */
KZXAELA_macinfo = (A_HEAP(A68_245 ));
LZXAELA.Id = IZXAELA_tyname;
LZXAELA.Sort = (*(&(ZNPAELA_iddecs->Macsort)));
 /* line 1612: */
NZXAELA = A_HISVEC(MZXAELA,JZXAELA_fnno_mpno,2,A68_INT ) ;
OZXAELA = 1 ;
LZXAELA.Fnno = A_VINDEX(NZXAELA,OZXAELA);
QZXAELA = A_HISVEC(PZXAELA,JZXAELA_fnno_mpno,2,A68_INT ) ;
RZXAELA = 2 ;
LZXAELA.Index = A_VINDEX(QZXAELA,RZXAELA);
LZXAELA.Xno = (*(&(ZNPAELA_iddecs->Xno)));
LZXAELA.Attr = (*(&(DZXAELA_tids->Attr)));
(*KZXAELA_macinfo) = LZXAELA;
 /* line 1613: */
SZXAELA_tvar = (A_HEAP(A68_176 ));
TZXAELA.Tm = KZXAELA_macinfo;
TZXAELA.T = RLPAELA_type;
(*SZXAELA_tvar) = TZXAELA;
 /* line 1614: */
UZXAELA_mps = (A_HEAP(A68_169 ));
VZXAELA.Sort = KMPAELA_macsort;
XZXAELA = A_HISVEC(WZXAELA,JZXAELA_fnno_mpno,2,A68_INT ) ;
YZXAELA = 2 ;
VZXAELA.Mparamno = A_VINDEX(XZXAELA,YZXAELA);
VZXAELA.Value = A_UNITE(ZZXAELA,mode3,3,SZXAELA_tvar);
VZXAELA.Rest = IQCAELA_nilmparams;
(*UZXAELA_mps) = VZXAELA;
 /* line 1615: */
IPVAELA_add_mparam(UZXAELA_mps, FMPAELA_fnstack);
 /* line 1616: */
 /* line 1617: */
BAYAELA = (&((&XNPAELA_typeid)->T)) ;
(*BAYAELA) = A_UNITE(AAYAELA,mode4,4,SZXAELA_tvar);
} 
else
{ 
 /* line 1618: */
DAYAELA = (&((&XNPAELA_typeid)->T)) ;
(*DAYAELA) = A_UNITE(CAYAELA,mode10,10,DRCAELA_flt);
} 
 /* line 1619: */
EAYAELA = (*(&((*(&(DZXAELA_tids->Idinfo)))->U))) ;
switch ( EAYAELA.mode )
{ 
case 8: /* STRUCT(INT)  */
FAYAELA_f = (EAYAELA.data.mode8);
/*SKIP*/;
break;
default: 
UIQAELA_setidunn((*(&(DZXAELA_tids->Idinfo))), A_UNITE(GAYAELA,mode2,2,XNPAELA_typeid));
break;
} 
 /* line 1620: */
BMPAELA_which = KXCAELA_wtype;
 /* line 1621: */
RLPAELA_type = (*(&((&XNPAELA_typeid)->T)));
 /* line 1622: */
 /* line 1623: */
if ( !(*(&(JLPAELA_fndec->Macro))) )
{ 
 /* line 1624: */
BJQAELA_insert_idinfo((*(&(DZXAELA_tids->Idinfo))), (&ENPAELA_scopestack), (&OLPAELA_ids));
} 
 /* line 1625: */
IAYAELA = (&((&XNPAELA_typeid)->T)) ;
(*IAYAELA) = A_UNITE(HAYAELA,mode10,10,DRCAELA_flt);
 /* line 1626: */
 /* line 1627: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
} 
A_PROC_EXIT(mparamtype);
return;
} 
#undef NL

A68_VOID  JAYAELA_mparamtype3(void)
{ 
A_PROC_ENTRY(mparamtype3);
CZXAELA_mparamtype(A68_TRUE);
A_PROC_EXIT(mparamtype3);
return;
} 
#undef NL

A68_VOID  KAYAELA_mparamtype4(void)
{ 
A_PROC_ENTRY(mparamtype4);
CZXAELA_mparamtype(A68_FALSE);
A_PROC_EXIT(mparamtype4);
return;
} 
#undef NL

A68_VOID  LAYAELA_mparamconst1(void)
{ 
A68_317  MAYAELA;  /* collateral clause result */
A68_317 * NAYAELA;  /* YIELD */
A_PROC_ENTRY(mparamconst1);
MAYAELA.Ids = OLPAELA_ids;
MAYAELA.Macsort = KMPAELA_macsort;
MAYAELA.Xno = HKPAELA_cctypeno+=1;
MAYAELA.New = A68_FALSE;
MAYAELA.Rest = ZNPAELA_iddecs;
NAYAELA = A_HEAP(A68_317 ) ;
(*NAYAELA) = MAYAELA ;
ZNPAELA_iddecs = NAYAELA;
A_PROC_EXIT(mparamconst1);
return;
} 
#undef NL

A68_VOID  OAYAELA_mparamconst2(void)
{ 
A68_244 * PAYAELA_cids;
A68_396  QAYAELA_fnno_mpno;
A68_245 * RAYAELA_macinfo;
A68_245  SAYAELA;  /* collateral clause result */
A68_32  TAYAELA;  /* OPERATORS - istruct -> vector */
A68_32  UAYAELA;  /* OPERATORS - simple index */
A68_INT  VAYAELA;  /* YIELD */
A68_32  WAYAELA;  /* OPERATORS - istruct -> vector */
A68_32  XAYAELA;  /* OPERATORS - simple index */
A68_INT  YAYAELA;  /* YIELD */
A68_236 * ZAYAELA_cvar;
A68_236  ABYAELA;  /* collateral clause result */
A68_169 * BBYAELA_mps;
A68_169  CBYAELA;  /* collateral clause result */
A68_32  DBYAELA;  /* OPERATORS - istruct -> vector */
A68_32  EBYAELA;  /* OPERATORS - simple index */
A68_INT  FBYAELA;  /* YIELD */
A68_260  GBYAELA;  /* OPERATORS - mode -> union mode */
A68_222  HBYAELA;  /* OPERATORS - mode -> union mode */
A68_222 * IBYAELA;  /* YIELD */
A68_222  JBYAELA;  /* OPERATORS - mode -> union mode */
A68_222 * KBYAELA;  /* YIELD */
A68_199  LBYAELA;  /* OPERATORS - mode -> union mode */
A68_222  MBYAELA;  /* OPERATORS - mode -> union mode */
A68_222 * NBYAELA;  /* YIELD */
A_PROC_ENTRY(mparamconst2);
{ 
PAYAELA_cids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 1638: */
 /* line 1639: */
if ( ((*(&(ZNPAELA_iddecs->Macsort)))!=WWCAELA_flt_par) )
{ 
QAYAELA_fnno_mpno = YOVAELA_next_mparamno(FMPAELA_fnstack);
 /* line 1640: */
RAYAELA_macinfo = (A_HEAP(A68_245 ));
 /* line 1641: */
SAYAELA.Id = (*(&((*(&(PAYAELA_cids->Idinfo)))->Id)));
SAYAELA.Sort = (*(&(ZNPAELA_iddecs->Macsort)));
 /* line 1642: */
UAYAELA = A_HISVEC(TAYAELA,QAYAELA_fnno_mpno,2,A68_INT ) ;
VAYAELA = 1 ;
SAYAELA.Fnno = A_VINDEX(UAYAELA,VAYAELA);
XAYAELA = A_HISVEC(WAYAELA,QAYAELA_fnno_mpno,2,A68_INT ) ;
YAYAELA = 2 ;
SAYAELA.Index = A_VINDEX(XAYAELA,YAYAELA);
SAYAELA.Xno = (*(&(ZNPAELA_iddecs->Xno)));
SAYAELA.Attr = (*(&(PAYAELA_cids->Attr)));
(*RAYAELA_macinfo) = SAYAELA;
 /* line 1643: */
ZAYAELA_cvar = (A_HEAP(A68_236 ));
ABYAELA.Cm = RAYAELA_macinfo;
ABYAELA.T = RLPAELA_type;
(*ZAYAELA_cvar) = ABYAELA;
 /* line 1644: */
BBYAELA_mps = (A_HEAP(A68_169 ));
CBYAELA.Sort = (*(&(ZNPAELA_iddecs->Macsort)));
EBYAELA = A_HISVEC(DBYAELA,QAYAELA_fnno_mpno,2,A68_INT ) ;
FBYAELA = 2 ;
CBYAELA.Mparamno = A_VINDEX(EBYAELA,FBYAELA);
CBYAELA.Value = A_UNITE(GBYAELA,mode4,4,ZAYAELA_cvar);
CBYAELA.Rest = IQCAELA_nilmparams;
(*BBYAELA_mps) = CBYAELA;
 /* line 1645: */
IPVAELA_add_mparam(BBYAELA_mps, FMPAELA_fnstack);
 /* line 1646: */
 /* line 1647: */
IBYAELA = (&((&YNPAELA_ctypeid)->Ct)) ;
(*IBYAELA) = A_UNITE(HBYAELA,mode17,17,ZAYAELA_cvar);
} 
else
{ 
 /* line 1648: */
KBYAELA = (&((&YNPAELA_ctypeid)->Ct)) ;
(*KBYAELA) = A_UNITE(JBYAELA,mode10,10,DRCAELA_flt);
} 
 /* line 1649: */
UIQAELA_setidunn((*(&(PAYAELA_cids->Idinfo))), A_UNITE(LBYAELA,mode3,3,YNPAELA_ctypeid));
 /* line 1650: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 1651: */
BMPAELA_which = LXCAELA_wctype;
 /* line 1652: */
 /* line 1653: */
NBYAELA = (&((&YNPAELA_ctypeid)->Ct)) ;
(*NBYAELA) = A_UNITE(MBYAELA,mode10,10,DRCAELA_flt);
} 
A_PROC_EXIT(mparamconst2);
return;
} 
#undef NL

A68_VOID  OBYAELA_mparamattrpr(void)
{ 
A68_396  PBYAELA_fnno_mpno;
A68_245 * QBYAELA_macinfo;
A68_245  RBYAELA;  /* collateral clause result */
A68_32  SBYAELA;  /* OPERATORS - istruct -> vector */
A68_32  TBYAELA;  /* OPERATORS - simple index */
A68_INT  UBYAELA;  /* YIELD */
A68_32  VBYAELA;  /* OPERATORS - istruct -> vector */
A68_32  WBYAELA;  /* OPERATORS - simple index */
A68_INT  XBYAELA;  /* YIELD */
A68_170  YBYAELA;  /* OPERATORS - mode -> union mode */
A68_258 * ZBYAELA_avar;
A68_169 * ACYAELA_mps;
A68_169  BCYAELA;  /* collateral clause result */
A68_32  CCYAELA;  /* OPERATORS - istruct -> vector */
A68_32  DCYAELA;  /* OPERATORS - simple index */
A68_INT  ECYAELA;  /* YIELD */
A68_260  FCYAELA;  /* OPERATORS - mode -> union mode */
A68_170  GCYAELA;  /* OPERATORS - mode -> union mode */
A68_170 * HCYAELA;  /* YIELD */
A68_170  ICYAELA;  /* OPERATORS - mode -> union mode */
A68_170 * JCYAELA;  /* YIELD */
A68_199  KCYAELA;  /* OPERATORS - mode -> union mode */
A68_170  LCYAELA;  /* OPERATORS - mode -> union mode */
A68_170 * MCYAELA;  /* YIELD */
A_PROC_ENTRY(mparamattrpr);
{ 
 /* line 1657: */
if ( (KMPAELA_macsort!=WWCAELA_flt_par) )
{ 
PBYAELA_fnno_mpno = YOVAELA_next_mparamno(FMPAELA_fnstack);
 /* line 1658: */
QBYAELA_macinfo = (A_HEAP(A68_245 ));
RBYAELA.Id = (*(&((*(&(OLPAELA_ids->Idinfo)))->Id)));
RBYAELA.Sort = KMPAELA_macsort;
 /* line 1659: */
TBYAELA = A_HISVEC(SBYAELA,PBYAELA_fnno_mpno,2,A68_INT ) ;
UBYAELA = 1 ;
RBYAELA.Fnno = A_VINDEX(TBYAELA,UBYAELA);
WBYAELA = A_HISVEC(VBYAELA,PBYAELA_fnno_mpno,2,A68_INT ) ;
XBYAELA = 2 ;
RBYAELA.Index = A_VINDEX(WBYAELA,XBYAELA);
RBYAELA.Xno = IKPAELA_cattrno+=1;
RBYAELA.Attr = A_UNITE(YBYAELA,mode6,6,MRCAELA_attrnull);
(*QBYAELA_macinfo) = RBYAELA;
 /* line 1660: */
ZBYAELA_avar = RLDAELA_makeattrvar(QBYAELA_macinfo);
 /* line 1661: */
ACYAELA_mps = (A_HEAP(A68_169 ));
BCYAELA.Sort = KMPAELA_macsort;
DCYAELA = A_HISVEC(CCYAELA,PBYAELA_fnno_mpno,2,A68_INT ) ;
ECYAELA = 2 ;
BCYAELA.Mparamno = A_VINDEX(DCYAELA,ECYAELA);
BCYAELA.Value = A_UNITE(FCYAELA,mode1,1,ZBYAELA_avar);
BCYAELA.Rest = IQCAELA_nilmparams;
(*ACYAELA_mps) = BCYAELA;
 /* line 1662: */
IPVAELA_add_mparam(ACYAELA_mps, FMPAELA_fnstack);
 /* line 1663: */
 /* line 1664: */
HCYAELA = (&((&VNPAELA_attrid)->A)) ;
(*HCYAELA) = A_UNITE(GCYAELA,mode5,5,ZBYAELA_avar);
} 
else
{ 
 /* line 1665: */
JCYAELA = (&((&VNPAELA_attrid)->A)) ;
(*JCYAELA) = A_UNITE(ICYAELA,mode7,7,DRCAELA_flt);
} 
 /* line 1666: */
UIQAELA_setidunn((*(&(OLPAELA_ids->Idinfo))), A_UNITE(KCYAELA,mode6,6,VNPAELA_attrid));
 /* line 1667: */
MCYAELA = (&((&VNPAELA_attrid)->A)) ;
(*MCYAELA) = A_UNITE(LCYAELA,mode7,7,DRCAELA_flt);
 /* line 1668: */
 /* line 1669: */
BMPAELA_which = OXCAELA_wattr;
} 
A_PROC_EXIT(mparamattrpr);
return;
} 
#undef NL

A68_VOID  NCYAELA_mparamfn(void)
{ 
A68_396  OCYAELA_fnno_mpno;
A68_169 * PCYAELA_mps;
A68_169  QCYAELA;  /* collateral clause result */
A68_32  RCYAELA;  /* OPERATORS - istruct -> vector */
A68_32  SCYAELA;  /* OPERATORS - simple index */
A68_INT  TCYAELA;  /* YIELD */
A68_260  UCYAELA;  /* OPERATORS - mode -> union mode */
A68_167 * VCYAELA;  /* YIELD */
A_PROC_ENTRY(mparamfn);
{ 
 /* line 1674: */
if ( (KMPAELA_macsort!=WWCAELA_flt_par) )
{ 
OCYAELA_fnno_mpno = YOVAELA_next_mparamno(FMPAELA_fnstack);
 /* line 1675: */
PCYAELA_mps = (A_HEAP(A68_169 ));
QCYAELA.Sort = KMPAELA_macsort;
SCYAELA = A_HISVEC(RCYAELA,OCYAELA_fnno_mpno,2,A68_INT ) ;
TCYAELA = 2 ;
QCYAELA.Mparamno = A_VINDEX(SCYAELA,TCYAELA);
VCYAELA = (*(&(PLPAELA_fns->Fndec))) ;
QCYAELA.Value = A_UNITE(UCYAELA,mode5,5,VCYAELA);
QCYAELA.Rest = IQCAELA_nilmparams;
(*PCYAELA_mps) = QCYAELA;
 /* line 1676: */
 /* line 1677: */
IPVAELA_add_mparam(PCYAELA_mps, FMPAELA_fnstack);
} 
 /* line 1678: */
 /* line 1679: */
BMPAELA_which = NXCAELA_wfn;
} 
A_PROC_EXIT(mparamfn);
return;
} 
#undef NL

A68_VOID  WCYAELA_sfnpr(void)
{ 
A_PROC_ENTRY(sfnpr);
{ 
WLPAELA_paramfncall = (*(*(&(GMPAELA_fncallstack->Fncall))));
 /* line 1686: */
 /* line 1687: */
BMPAELA_which = NXCAELA_wfn;
} 
A_PROC_EXIT(sfnpr);
return;
} 
#undef NL

A68_VOID  XCYAELA_macconst1(void)
{ 
A68_BOOL  YCYAELA;  /* optbool result */
A68_169 * ZCYAELA_mp;
A68_BOOL  ADYAELA;  /* optbool result */
A68_260  BDYAELA;  /* united object - for case conformity */
A68_BOOL  CDYAELA;  /* clause result */
A68_BOOL  DDYAELA;  /* clause result */
A68_BOOL  EDYAELA_cc;
A68_294  FDYAELA;  /* collateral clause result */
A68_294 * GDYAELA;  /* YIELD */
A_PROC_ENTRY(macconst1);
{ 
 /* line 1693: */
YCYAELA = ((*(&(GMPAELA_fncallstack->Nextmp)))!=GQCAELA_nilnextmp);
if ( YCYAELA )
{ /* line 1694: */
YCYAELA = ((*(*(&(GMPAELA_fncallstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( YCYAELA )
{ 
ZCYAELA_mp = UPVAELA_nextexpl_par((*(*(&(GMPAELA_fncallstack->Nextmp)))));
 /* line 1695: */
 /* line 1696: */
ADYAELA = (ZCYAELA_mp!=IQCAELA_nilmparams);
if ( ADYAELA )
{BDYAELA = (*(&(ZCYAELA_mp->Value))) ;
switch ( BDYAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
CDYAELA = A68_TRUE;
break;
default: 
 /* line 1698: */
CDYAELA = A68_FALSE;
break;
} 
ADYAELA = CDYAELA;
}
DDYAELA = ADYAELA;
} 
else
{ 
 /* line 1699: */
DDYAELA = A68_FALSE;
} 
EDYAELA_cc = DDYAELA;
 /* line 1700: */
 /* line 1701: */
if ( EDYAELA_cc )
{ 
FDYAELA.State = YPCAELA_inconst;
} 
else
{ 
FDYAELA.State = ZPCAELA_inother;
} 
 /* line 1702: */
FDYAELA.Rest = DNPAELA_currentstate;
GDYAELA = A_HEAP(A68_294 ) ;
(*GDYAELA) = FDYAELA ;
DNPAELA_currentstate = GDYAELA;
} 
A_PROC_EXIT(macconst1);
return;
} 
#undef NL

A68_VOID  HDYAELA_checkmacnotfn(void)
{ 
A68_BOOL  IDYAELA;  /* optbool result */
A_PROC_ENTRY(checkmacnotfn);
IDYAELA = (KMPAELA_macsort==XWCAELA_expl_par);
if ( ! IDYAELA )
{ /* line 1706: */
IDYAELA = (KMPAELA_macsort==WWCAELA_flt_par);
}
if ( IDYAELA )
{ 
 /* line 1707: */
UQPAELA_fault(153, VJAAOSI_nullmsg);
 /* line 1708: */
 /* line 1709: */
MJPAELA_syntaxerror = A68_TRUE;
} 
A_PROC_EXIT(checkmacnotfn);
return;
} 
#undef NL

A68_VOID  JDYAELA_sfn1(void)
{ 
A_PROC_ENTRY(sfn1);
{ 
ONPAELA_errormessage = 3;
 /* line 1713: */
LMPAELA_id1 = (*(&(BOPAELA_sopstack->Name)));
 /* line 1714: */
 /* line 1715: */
BOPAELA_sopstack = (*(&(BOPAELA_sopstack->Rest)));
} 
A_PROC_EXIT(sfn1);
return;
} 
#undef NL

A68_VOID  KDYAELA_sfn2(void)
{ 
A68_BOOL  LDYAELA;  /* optbool result */
A68_169 * MDYAELA_mp;
A68_BOOL  NDYAELA;  /* optbool result */
A68_260  ODYAELA;  /* united object - for case conformity */
A68_167 * PDYAELA_fd;
A68_BOOL  QDYAELA;  /* clause result */
A_PROC_ENTRY(sfn2);
{ 
 /* line 1719: */
LDYAELA = ((*(&(GMPAELA_fncallstack->Nextmp)))!=GQCAELA_nilnextmp);
if ( LDYAELA )
{ /* line 1720: */
LDYAELA = ((*(*(&(GMPAELA_fncallstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( LDYAELA )
{ 
MDYAELA_mp = UPVAELA_nextexpl_par((*(*(&(GMPAELA_fncallstack->Nextmp)))));
 /* line 1721: */
 /* line 1722: */
 /* line 1723: */
NDYAELA = (MDYAELA_mp!=IQCAELA_nilmparams);
if ( NDYAELA )
{ODYAELA = (*(&(MDYAELA_mp->Value))) ;
switch ( ODYAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
PDYAELA_fd = (ODYAELA.data.mode5);
QDYAELA = (*(&(PDYAELA_fd->Macro)));
break;
default: 
 /* line 1724: */
QDYAELA = A68_FALSE;
break;
} 
NDYAELA = QDYAELA;
}
 /* line 1725: */
QNPAELA_macroexpected = NDYAELA;
} 
} 
A_PROC_EXIT(sfn2);
return;
} 
#undef NL

A68_VOID  RDYAELA_findfnpr(void)
{ 
A68_166 * UDYAELA_fs;
A68_168 * VDYAELA_fi;
A68_263  WDYAELA;  /* OPERATORS - mode -> union mode */
A68_262  XDYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  YDYAELA;  /* OPERATORS - mode -> union mode */
A68_262  ZDYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * AEYAELA;  /* YIELD */
A68_166  BEYAELA;  /* collateral clause result */
A68_166 * CEYAELA;  /* YIELD */
A_PROC_ENTRY(findfnpr);
{ 
UDYAELA_fs = TSUAELA_findfn(LMPAELA_id1, PLPAELA_fns);
 /* line 1729: */
JLPAELA_fndec = (*(&(UDYAELA_fs->Fndec)));
 /* line 1730: */
VDYAELA_fi = (*(&(JLPAELA_fndec->Fninfo)));
 /* line 1731: */
 /* line 1732: */
if ( ((*(&(VDYAELA_fi->Status)))==BXCAELA_fn_notdec) )
{ 
LKPAELA_fp3 = LMPAELA_id1;
 /* line 1733: */
SZPAELA_faultp(10, A_HVEC(XDYAELA,A_UNITE(WDYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 1734: */
if ( ((*(&(VDYAELA_fi->Status)))==DXCAELA_fn_rec) )
{ 
LKPAELA_fp3 = LMPAELA_id1;
 /* line 1735: */
 /* line 1736: */
SZPAELA_faultp(11, A_HVEC(ZDYAELA,A_UNITE(YDYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 1737: */
goto TDYAELA_ok;
} 
} 
 /* line 1738: */
AEYAELA = (&(VDYAELA_fi->Status)) ;
(*AEYAELA) = CXCAELA_fn_flt;
 /* line 1739: */
BEYAELA.Fndec = JLPAELA_fndec;
BEYAELA.Declaration = A68_TRUE;
BEYAELA.Rest = PLPAELA_fns;
CEYAELA = A_HEAP(A68_166 ) ;
(*CEYAELA) = BEYAELA ;
PLPAELA_fns = CEYAELA;
 /* line 1740: */
TDYAELA_ok:
 /* line 1741: */
ZTUAELA_usedfn(UDYAELA_fs, ENPAELA_scopestack);
} 
A_PROC_EXIT(findfnpr);
return;
} 
#undef NL

A68_VOID  DEYAELA_mcall1(void)
{ 
A_PROC_ENTRY(mcall1);
{ 
LMPAELA_id1 = ZHPAELA_compsymb;
 /* line 1745: */
 /* line 1746: */
QNPAELA_macroexpected = A68_FALSE;
} 
A_PROC_EXIT(mcall1);
return;
} 
#undef NL

A68_VOID  EEYAELA_mcall2(void)
{ 
A68_168 * FEYAELA_fi;
A68_268 * GEYAELA_fncall;
A68_268  HEYAELA;  /* collateral clause result */
A68_170  IEYAELA;  /* OPERATORS - mode -> union mode */
A68_269 *** JEYAELA;  /* YIELD */
A68_BOOL  KEYAELA;  /* optbool result */
A68_263  LEYAELA;  /* OPERATORS - mode -> union mode */
A68_262  MEYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_265  NEYAELA;  /* collateral clause result */
A68_BOOL  OEYAELA_explicitparam;
A68_265 * PEYAELA;  /* YIELD */
A68_169 ** QEYAELA;  /* clause result */
A68_169 *** REYAELA;  /* YIELD */
A68_167 * SEYAELA;  /* clause result */
A_PROC_ENTRY(mcall2);
{ 
FEYAELA_fi = (*(&(JLPAELA_fndec->Fninfo)));
 /* line 1750: */
GEYAELA_fncall = (A_HEAP(A68_268 ));
HEYAELA.F = JLPAELA_fndec;
HEYAELA.Pvals = BUCAELA_nilparamvals;
HEYAELA.Nextpvals = (A68_269 **)A68_NIL;
HEYAELA.Attr = A_UNITE(IEYAELA,mode6,6,MRCAELA_attrnull);
(*GEYAELA_fncall) = HEYAELA;
 /* line 1751: */
JEYAELA = (&(GEYAELA_fncall->Nextpvals)) ;
(*JEYAELA) = (&(GEYAELA_fncall->Pvals));
 /* line 1752: */
 /* line 1753: */
 /* line 1754: */
if ( ((*(&(FEYAELA_fi->Status)))!=CXCAELA_fn_flt) )
{ 
 /* line 1756: */
KEYAELA = ((*(&(JLPAELA_fndec->Mp)))==IQCAELA_nilmparams);
if ( ! KEYAELA )
{KEYAELA = QNPAELA_macroexpected;
}
if ( KEYAELA )
{ 
LKPAELA_fp3 = LMPAELA_id1;
 /* line 1757: */
SZPAELA_faultp(187, A_HVEC(MEYAELA,A_UNITE(LEYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 1758: */
NEYAELA.Fncall = ZPVAELA_fncall_flt(JLPAELA_fndec);
NEYAELA.Explicitparam = A68_FALSE;
NEYAELA.Nextmp = (A68_169 **)A68_NIL;
 /* line 1759: */
NEYAELA.Rest = GMPAELA_fncallstack;
} 
else
{ 
OEYAELA_explicitparam = QPVAELA_anyexplicit((*(&(JLPAELA_fndec->Mp))));
 /* line 1760: */
NEYAELA.Fncall = GEYAELA_fncall;
NEYAELA.Explicitparam = OEYAELA_explicitparam;
NEYAELA.Nextmp = (A68_169 **)A68_NIL;
 /* line 1761: */
 /* line 1762: */
NEYAELA.Rest = GMPAELA_fncallstack;
} 
} 
else
{ 
NEYAELA.Fncall = ZPVAELA_fncall_flt(JLPAELA_fndec);
NEYAELA.Explicitparam = A68_FALSE;
NEYAELA.Nextmp = (A68_169 **)A68_NIL;
 /* line 1763: */
NEYAELA.Rest = GMPAELA_fncallstack;
} 
PEYAELA = A_HEAP(A68_265 ) ;
(*PEYAELA) = NEYAELA ;
GMPAELA_fncallstack = PEYAELA;
 /* line 1764: */
 /* line 1765: */
 /* line 1766: */
 /* line 1767: */
if ( ((*(&(JLPAELA_fndec->Mp)))==IQCAELA_nilmparams) )
{ 
QEYAELA = GQCAELA_nilnextmp;
} 
else
{ 
 /* line 1768: */
QEYAELA = (&(JLPAELA_fndec->Mp));
} 
REYAELA = (&(GMPAELA_fncallstack->Nextmp)) ;
(*REYAELA) = QEYAELA;
 /* line 1769: */
if ( (FMPAELA_fnstack!=TQCAELA_nilfnstack) )
{ 
SEYAELA = (*(&(FMPAELA_fnstack->Dec)));
} 
else
{ 
 /* line 1770: */
SEYAELA = BLPAELA_fndec_flt;
} 
JLPAELA_fndec = SEYAELA;
} 
A_PROC_EXIT(mcall2);
return;
} 
#undef NL

A68_VOID  TEYAELA_mcall6(void)
{ 
A68_268 * UEYAELA_fncall;
A68_268  VEYAELA;  /* collateral clause result */
A68_170  WEYAELA;  /* OPERATORS - mode -> union mode */
A68_269 *** XEYAELA;  /* YIELD */
A68_BOOL  YEYAELA;  /* optbool result */
A68_263  ZEYAELA;  /* OPERATORS - mode -> union mode */
A68_262  AFYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_265  BFYAELA;  /* collateral clause result */
A68_265 * CFYAELA;  /* YIELD */
A68_169 ** DFYAELA;  /* clause result */
A68_169 *** EFYAELA;  /* YIELD */
A68_167 * FFYAELA;  /* clause result */
A_PROC_ENTRY(mcall6);
{ 
UEYAELA_fncall = (A_HEAP(A68_268 ));
VEYAELA.F = JLPAELA_fndec;
VEYAELA.Pvals = BUCAELA_nilparamvals;
VEYAELA.Nextpvals = (A68_269 **)A68_NIL;
VEYAELA.Attr = A_UNITE(WEYAELA,mode6,6,MRCAELA_attrnull);
(*UEYAELA_fncall) = VEYAELA;
 /* line 1774: */
XEYAELA = (&(UEYAELA_fncall->Nextpvals)) ;
(*XEYAELA) = (&(UEYAELA_fncall->Pvals));
 /* line 1775: */
 /* line 1776: */
 /* line 1777: */
YEYAELA = ((*(&((*(&(JLPAELA_fndec->Fninfo)))->Status)))!=CXCAELA_fn_flt);
if ( YEYAELA )
{YEYAELA = !QNPAELA_macroexpected;
}
if ( YEYAELA )
{ /* line 1778: */
YEYAELA = ((*(&(JLPAELA_fndec->Mp)))!=IQCAELA_nilmparams);
}
if ( YEYAELA )
{ /* line 1779: */
YEYAELA = QPVAELA_anyexplicit((*(&(JLPAELA_fndec->Mp))));
}
if ( YEYAELA )
{ 
LKPAELA_fp3 = LMPAELA_id1;
 /* line 1780: */
SZPAELA_faultp(49, A_HVEC(AFYAELA,A_UNITE(ZEYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 1781: */
BFYAELA.Fncall = ZPVAELA_fncall_flt(JLPAELA_fndec);
BFYAELA.Explicitparam = A68_FALSE;
BFYAELA.Nextmp = (A68_169 **)A68_NIL;
 /* line 1782: */
BFYAELA.Rest = GMPAELA_fncallstack;
} 
else
{ 
BFYAELA.Fncall = UEYAELA_fncall;
BFYAELA.Explicitparam = A68_FALSE;
BFYAELA.Nextmp = (A68_169 **)A68_NIL;
 /* line 1783: */
BFYAELA.Rest = GMPAELA_fncallstack;
} 
CFYAELA = A_HEAP(A68_265 ) ;
(*CFYAELA) = BFYAELA ;
GMPAELA_fncallstack = CFYAELA;
 /* line 1784: */
 /* line 1785: */
 /* line 1786: */
 /* line 1787: */
if ( ((*(&(JLPAELA_fndec->Mp)))==IQCAELA_nilmparams) )
{ 
DFYAELA = GQCAELA_nilnextmp;
} 
else
{ 
 /* line 1788: */
DFYAELA = (&(JLPAELA_fndec->Mp));
} 
EFYAELA = (&(GMPAELA_fncallstack->Nextmp)) ;
(*EFYAELA) = DFYAELA;
 /* line 1789: */
if ( (FMPAELA_fnstack!=TQCAELA_nilfnstack) )
{ 
FFYAELA = (*(&(FMPAELA_fnstack->Dec)));
} 
else
{ 
 /* line 1790: */
FFYAELA = BLPAELA_fndec_flt;
} 
JLPAELA_fndec = FFYAELA;
} 
A_PROC_EXIT(mcall6);
return;
} 
#undef NL

A68_VOID  GFYAELA_mcall3(void)
{ 
A68_169 ** HFYAELA_nextmp;
A68_268 * IFYAELA_fncall;
A68_167 * JFYAELA_fd;
A68_169 ** KFYAELA_mp1;
A68_BOOL  LFYAELA_has_implicit;
A68_BOOL  MFYAELA;  /* optbool result */
A68_263  NFYAELA;  /* OPERATORS - mode -> union mode */
A68_262  OFYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  PFYAELA;  /* optbool result */
A68_BOOL  QFYAELA;  /* optbool result */
A68_BOOL  RFYAELA;  /* optbool result */
A68_270  SFYAELA;  /* clause result */
A68_270  TFYAELA;  /* OPERATORS - mode -> union mode */
A68_260  UFYAELA;  /* united object - for case conformity */
A68_170  VFYAELA;  /* OPERATORS - mode -> union mode */
A68_170  WFYAELA;  /* united object - for case conformity */
A68_255 * XFYAELA_ad;
A68_170  YFYAELA;  /* OPERATORS - mode -> union mode */
A68_205  ZFYAELA;  /* avoid structure result */
A68_270  AGYAELA;  /* OPERATORS - mode -> union mode */
A68_185  BGYAELA;  /* OPERATORS - mode -> union mode */
A68_200  CGYAELA;  /* avoid structure result */
A68_270  DGYAELA;  /* OPERATORS - mode -> union mode */
A68_176 * EGYAELA_tve;
A68_172  FGYAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  GGYAELA;  /* optbool result */
A68_172  HGYAELA;  /* united object - for case conformity */
A68_BOOL  IGYAELA;  /* clause result */
A68_172  JGYAELA;  /* OPERATORS - mode -> union mode */
A68_172  LGYAELA;  /* OPERATORS - mode -> union mode */
A68_172  MGYAELA;  /* avoid structure result */
A68_172  KGYAELA_ty1;
A68_172  NGYAELA;  /* avoid structure result */
A68_172  OGYAELA_ty2;
A68_BOOL  PGYAELA_t_ok;
A68_172  QGYAELA;  /* united object - for case conformity */
A68_172  RGYAELA;  /* avoid structure result */
A68_BOOL  SGYAELA;  /* optbool result */
A68_445  TGYAELA;  /* collateral clause result */
A68_263  UGYAELA;  /* OPERATORS - unite union */
A68_263  VGYAELA;  /* OPERATORS - unite union */
A68_262  WGYAELA;  /* OPERATORS - istruct -> vector */
A68_172  XGYAELA;  /* OPERATORS - mode -> union mode */
A68_201  YGYAELA;  /* avoid structure result */
A68_270  ZGYAELA;  /* OPERATORS - mode -> union mode */
A68_236 * AHYAELA_ct;
A68_172  BHYAELA;  /* OPERATORS - mode -> union mode */
A68_222  CHYAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  DHYAELA_c_ok;
A68_172  FHYAELA;  /* avoid structure result */
A68_172  EHYAELA_cty1;
A68_172  GHYAELA;  /* avoid structure result */
A68_172  HHYAELA_cty2;
A68_172  IHYAELA;  /* avoid structure result */
A68_BOOL  JHYAELA;  /* optbool result */
A68_445  KHYAELA;  /* collateral clause result */
A68_263  LHYAELA;  /* OPERATORS - unite union */
A68_263  MHYAELA;  /* OPERATORS - unite union */
A68_262  NHYAELA;  /* OPERATORS - istruct -> vector */
A68_172  OHYAELA;  /* OPERATORS - mode -> union mode */
A68_222  PHYAELA;  /* OPERATORS - mode -> union mode */
A68_202  QHYAELA;  /* avoid structure result */
A68_270  RHYAELA;  /* OPERATORS - mode -> union mode */
A68_167 * SHYAELA_fpar;
A68_167 * THYAELA_fval;
A68_BOOL  UHYAELA_f_ok;
A68_178  VHYAELA;  /* collateral clause result */
A68_178 * WHYAELA;  /* YIELD */
A68_172  XHYAELA;  /* OPERATORS - mode -> union mode */
A68_172  YHYAELA;  /* avoid structure result */
A68_172  ZHYAELA_valspec;
A68_178  AIYAELA;  /* collateral clause result */
A68_178 * CIYAELA;  /* YIELD */
A68_172  DIYAELA;  /* OPERATORS - mode -> union mode */
A68_172  EIYAELA;  /* avoid structure result */
A68_172  BIYAELA_parspec;
A68_172  FIYAELA;  /* avoid structure result */
A68_BOOL  GIYAELA;  /* optbool result */
A68_327  HIYAELA;  /* avoid structure result */
A68_449  IIYAELA;  /* collateral clause result */
A68_263  JIYAELA;  /* OPERATORS - mode -> union mode */
A68_263  KIYAELA;  /* OPERATORS - unite union */
A68_263  LIYAELA;  /* OPERATORS - unite union */
A68_262  MIYAELA;  /* OPERATORS - istruct -> vector */
A68_167 * NIYAELA_fd2;
A68_172  OIYAELA;  /* united object - for case conformity */
A68_178 * PIYAELA_ft;
A68_172 * QIYAELA;  /* YIELD */
A68_172 * RIYAELA;  /* YIELD */
A68_INT  UIYAELA_message;
A68_BOOL  VIYAELA;  /* optbool result */
A68_449  WIYAELA;  /* collateral clause result */
A68_263  XIYAELA;  /* OPERATORS - mode -> union mode */
A68_263  YIYAELA;  /* OPERATORS - unite union */
A68_263  ZIYAELA;  /* OPERATORS - unite union */
A68_262  AJYAELA;  /* OPERATORS - istruct -> vector */
A68_449  BJYAELA;  /* collateral clause result */
A68_263  CJYAELA;  /* OPERATORS - mode -> union mode */
A68_263  DJYAELA;  /* OPERATORS - mode -> union mode */
A68_263  EJYAELA;  /* OPERATORS - mode -> union mode */
A68_262  FJYAELA;  /* OPERATORS - istruct -> vector */
A68_270  GJYAELA;  /* OPERATORS - mode -> union mode */
A68_270  HJYAELA;  /* OPERATORS - mode -> union mode */
A68_270  IJYAELA_pval;
A68_269  JJYAELA;  /* collateral clause result */
A68_269 * KJYAELA;  /* YIELD */
A68_269 ** LJYAELA;  /* YIELD */
A68_269 *** MJYAELA;  /* YIELD */
A68_169 *** NJYAELA;  /* YIELD */
A_PROC_ENTRY(mcall3);
{ 
HFYAELA_nextmp = (*(&(GMPAELA_fncallstack->Nextmp)));
 /* line 1794: */
IFYAELA_fncall = (*(&(GMPAELA_fncallstack->Fncall)));
 /* line 1795: */
JFYAELA_fd = (*(&(IFYAELA_fncall->F)));
 /* line 1797: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 1798: */
KFYAELA_mp1 = HFYAELA_nextmp;
 /* line 1799: */
LFYAELA_has_implicit = A68_FALSE;
 /* line 1801: */
 /* line 1802: */
 /* line 1803: */
if ( ((*(&((*(&(JFYAELA_fd->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
MFYAELA = (HFYAELA_nextmp==GQCAELA_nilnextmp);
if ( ! MFYAELA )
{ /* line 1804: */
MFYAELA = ((*HFYAELA_nextmp)==IQCAELA_nilmparams);
}
if ( MFYAELA )
{ 
LKPAELA_fp3 = (*(&(JFYAELA_fd->Id)));
 /* line 1805: */
SZPAELA_faultp(50, A_HVEC(OFYAELA,A_UNITE(NFYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 1806: */
 /* line 1808: */
(*IFYAELA_fncall) = (*ZPVAELA_fncall_flt(JFYAELA_fd));
} 
else
{ 
PFYAELA = ((*(&((*HFYAELA_nextmp)->Sort)))==ZWCAELA_impl_expl);
if ( ! PFYAELA )
{ /* line 1810: */
PFYAELA = ((*(&((*HFYAELA_nextmp)->Sort)))==AXCAELA_impl_impl);
}
if ( PFYAELA )
{ 
LFYAELA_has_implicit = A68_TRUE;
 /* line 1811: */
for ( ;; )
{ 
QFYAELA = ((*KFYAELA_mp1)!=IQCAELA_nilmparams);
if ( QFYAELA )
{ /* line 1812: */
QFYAELA = ((*(&((*KFYAELA_mp1)->Sort)))!=XWCAELA_expl_par);
}
if ( !(QFYAELA) ) break;
KFYAELA_mp1 = (&((*KFYAELA_mp1)->Rest));
}
 /* line 1814: */
} 
else
{ 
 /* line 1815: */
RFYAELA = ((*(&((*HFYAELA_nextmp)->Sort)))!=XWCAELA_expl_par);
if ( RFYAELA )
{RFYAELA = (*(&(GMPAELA_fncallstack->Explicitparam)));
}
if ( RFYAELA )
{ 
 /* line 1816: */
UQPAELA_fault(228, VJAAOSI_nullmsg);
 /* line 1817: */
 /* line 1818: */
 /* line 1819: */
(*IFYAELA_fncall) = (*ZPVAELA_fncall_flt(JFYAELA_fd));
} 
} 
} 
} 
 /* line 1820: */
 /* line 1821: */
 /* line 1823: */
if ( ((*(&((*(&((*(&(IFYAELA_fncall->F)))->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
 /* line 1824: */
 /* line 1825: */
if ( ((*KFYAELA_mp1)==IQCAELA_nilmparams) )
{ 
 /* line 1826: */
SFYAELA = A_UNITE(TFYAELA,mode6,6,DRCAELA_flt);
} 
else
{ 
 /* line 1827: */
UFYAELA = (*(&((*KFYAELA_mp1)->Value))) ;
switch ( UFYAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE245)  */
 /* line 1828: */
{ 
 /* line 1829: */
if ( (BMPAELA_which!=OXCAELA_wattr) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(240, VJAAOSI_nullmsg);
} 
 /* line 1830: */
 /* line 1831: */
FJPAELA_attr = A_UNITE(VFYAELA,mode7,7,DRCAELA_flt);
} 
else
{ 
 /* line 1832: */
WFYAELA = FJPAELA_attr ;
switch ( WFYAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,REF MODE246)  */
XFYAELA_ad = (WFYAELA.data.mode2);
 /* line 1833: */
 /* line 1834: */
if ( A_VC_NE((*(&(XFYAELA_ad->Classname))),TTCAOST_nullid) )
{ 
UQPAELA_fault(241, VJAAOSI_nullmsg);
 /* line 1835: */
 /* line 1836: */
 /* line 1837: */
 /* line 1838: */
FJPAELA_attr = A_UNITE(YFYAELA,mode7,7,DRCAELA_flt);
} 
break;
default: 
 /* line 1839: */
/*SKIP*/;
break;
} 
} 
 /* line 1840: */
 /* line 1841: */
 /* line 1842: */
MLDAELA_makeattrid( FJPAELA_attr, &ZFYAELA );
SFYAELA = A_UNITE(AGYAELA,mode5,5,ZFYAELA);
} 
break;
case 2: /* REF STRUCT(REF MODE245)  */
 /* line 1843: */
{ 
 /* line 1844: */
if ( (BMPAELA_which!=JXCAELA_winteger) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(51, VJAAOSI_nullmsg);
} 
 /* line 1845: */
 /* line 1846: */
SLPAELA_integer = A_UNITE(BGYAELA,mode4,4,DRCAELA_flt);
} 
 /* line 1847: */
 /* line 1848: */
 /* line 1850: */
XKDAELA_makeintid( SLPAELA_integer, &CGYAELA );
SFYAELA = A_UNITE(DGYAELA,mode1,1,CGYAELA);
} 
break;
case 3: /* REF STRUCT(REF MODE245,MODE172)  */
EGYAELA_tve = (UFYAELA.data.mode3);
 /* line 1851: */
{ 
 /* line 1852: */
if ( (BMPAELA_which!=KXCAELA_wtype) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(15, VJAAOSI_nullmsg);
} 
 /* line 1853: */
 /* line 1854: */
RLPAELA_type = A_UNITE(FGYAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
GGYAELA = (BMPAELA_which==KXCAELA_wtype);
if ( GGYAELA )
{ /* line 1855: */
GGYAELA = KBTAELA_containsfntype(RLPAELA_type);
}
 /* line 1856: */
if ( GGYAELA )
{HGYAELA = (*(&(EGYAELA_tve->T))) ;
switch ( HGYAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
IGYAELA = A68_TRUE;
break;
default: 
 /* line 1857: */
IGYAELA = A68_FALSE;
break;
} 
GGYAELA = IGYAELA;
}
if ( GGYAELA )
{ 
UQPAELA_fault(52, VJAAOSI_nullmsg);
 /* line 1858: */
 /* line 1859: */
RLPAELA_type = A_UNITE(JGYAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
VIDAELA_primtype( A_UNITE(LGYAELA,mode4,4,EGYAELA_tve), A68_FALSE, &MGYAELA );
KGYAELA_ty1 = MGYAELA;
 /* line 1860: */
VIDAELA_primtype( RLPAELA_type, A68_FALSE, &NGYAELA );
OGYAELA_ty2 = NGYAELA;
 /* line 1861: */
PGYAELA_t_ok = A68_TRUE;
 /* line 1862: */
 /* line 1863: */
if ( LFYAELA_has_implicit )
{ 
 /* line 1864: */
PGYAELA_t_ok = XKUAELA_impl_macro(KGYAELA_ty1, OGYAELA_ty2, GMPAELA_fncallstack);
} 
 /* line 1865: */
 /* line 1866: */
QGYAELA = (*(&(EGYAELA_tve->T))) ;
switch ( QGYAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
 /* line 1867: */
/*SKIP*/;
break;
default: 
UMTAELA_substtype( (*IFYAELA_fncall), (*(&(JFYAELA_fd->Fnno))), KGYAELA_ty1, &RGYAELA );
KGYAELA_ty1 = RGYAELA;
 /* line 1868: */
SGYAELA = !PGYAELA_t_ok;
if ( ! SGYAELA )
{ /* line 1869: */
SGYAELA = !A_CALLPROC(CASAELA_equiv_types,(KGYAELA_ty1, OGYAELA_ty2, 0),(KGYAELA_ty1, OGYAELA_ty2, 0,(CASAELA_equiv_types).nonlocals));
}
if ( SGYAELA )
{ 
 /* line 1870: */
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
JKPAELA_fp1 = OGYAELA_ty2;
KKPAELA_fp2 = KGYAELA_ty1;
 /* line 1871: */
TGYAELA.data[0] = A_UUNITE(UGYAELA,0,JKPAELA_fp1);
 /* line 1872: */
TGYAELA.data[1] = A_UUNITE(VGYAELA,0,KKPAELA_fp2);
 /* line 1873: */
VZPAELA_namefaultp(222, A_HISVEC(WGYAELA,TGYAELA,2,A68_263 ));
} 
 /* line 1874: */
 /* line 1875: */
 /* line 1876: */
 /* line 1877: */
RLPAELA_type = A_UNITE(XGYAELA,mode10,10,DRCAELA_flt);
} 
break;
} 
} 
} 
 /* line 1878: */
 /* line 1879: */
 /* line 1881: */
CLDAELA_maketypeid( RLPAELA_type, &YGYAELA );
SFYAELA = A_UNITE(ZGYAELA,mode2,2,YGYAELA);
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
AHYAELA_ct = (UFYAELA.data.mode4);
 /* line 1882: */
{ 
 /* line 1883: */
if ( (BMPAELA_which!=LXCAELA_wctype) )
{ 
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
UQPAELA_fault(16, VJAAOSI_nullmsg);
} 
 /* line 1884: */
RLPAELA_type = A_UNITE(BHYAELA,mode10,10,DRCAELA_flt);
 /* line 1885: */
OMPAELA_ctype = A_UNITE(CHYAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
DHYAELA_c_ok = A68_TRUE;
 /* line 1886: */
VIDAELA_primtype( (*(&(AHYAELA_ct->T))), A68_FALSE, &FHYAELA );
EHYAELA_cty1 = FHYAELA;
 /* line 1887: */
VIDAELA_primtype( RLPAELA_type, A68_FALSE, &GHYAELA );
HHYAELA_cty2 = GHYAELA;
 /* line 1888: */
 /* line 1889: */
if ( LFYAELA_has_implicit )
{ 
 /* line 1890: */
DHYAELA_c_ok = XKUAELA_impl_macro(EHYAELA_cty1, HHYAELA_cty2, GMPAELA_fncallstack);
} 
 /* line 1891: */
UMTAELA_substtype( (*IFYAELA_fncall), (*(&(JFYAELA_fd->Fnno))), EHYAELA_cty1, &IHYAELA );
EHYAELA_cty1 = IHYAELA;
 /* line 1892: */
JHYAELA = !DHYAELA_c_ok;
if ( ! JHYAELA )
{ /* line 1893: */
JHYAELA = !SQSAELA_equals(EHYAELA_cty1, RLPAELA_type);
}
if ( JHYAELA )
{ 
 /* line 1894: */
if ( (BMPAELA_which!=MXCAELA_wflt) )
{ 
JKPAELA_fp1 = EHYAELA_cty1;
KKPAELA_fp2 = RLPAELA_type;
 /* line 1895: */
 /* line 1896: */
KHYAELA.data[0] = A_UUNITE(LHYAELA,0,JKPAELA_fp1);
KHYAELA.data[1] = A_UUNITE(MHYAELA,0,KKPAELA_fp2);
 /* line 1897: */
VZPAELA_namefaultp(3, A_HISVEC(NHYAELA,KHYAELA,2,A68_263 ));
} 
 /* line 1898: */
RLPAELA_type = A_UNITE(OHYAELA,mode10,10,DRCAELA_flt);
 /* line 1899: */
 /* line 1900: */
OMPAELA_ctype = A_UNITE(PHYAELA,mode10,10,DRCAELA_flt);
} 
} 
 /* line 1901: */
 /* line 1902: */
 /* line 1904: */
HLDAELA_makectypeid( OMPAELA_ctype, &QHYAELA );
SFYAELA = A_UNITE(RHYAELA,mode3,3,QHYAELA);
} 
break;
case 5: /* REF STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
SHYAELA_fpar = (UFYAELA.data.mode5);
 /* line 1905: */
{ 
 /* line 1906: */
 /* line 1907: */
if ( ((*(&((*(&(SHYAELA_fpar->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
 /* line 1908: */
if ( (BMPAELA_which!=NXCAELA_wfn) )
{ 
 /* line 1909: */
if ( (*(&(SHYAELA_fpar->Macro))) )
{ 
 /* line 1910: */
UQPAELA_fault(188, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 1911: */
UQPAELA_fault(186, VJAAOSI_nullmsg);
} 
 /* line 1912: */
 /* line 1913: */
WLPAELA_paramfncall = (*ZPVAELA_fncall_flt(SHYAELA_fpar));
} 
else
{ 
THYAELA_fval = (*(&((&WLPAELA_paramfncall)->F)));
 /* line 1914: */
 /* line 1915: */
if ( ((*(&((*(&(THYAELA_fval->Fninfo)))->Status)))==CXCAELA_fn_flt) )
{ 
 /* line 1916: */
 /* line 1917: */
WLPAELA_paramfncall = (*ZPVAELA_fncall_flt(SHYAELA_fpar));
} 
else
{ 
UHYAELA_f_ok = A68_TRUE;
 /* line 1918: */
 /* line 1919: */
VHYAELA.From = (*(&(THYAELA_fval->Param)));
VHYAELA.To = (*(&(THYAELA_fval->Ans)));
WHYAELA = A_HEAP(A68_178 ) ;
(*WHYAELA) = VHYAELA ;
VIDAELA_primtype( A_UNITE(XHYAELA,mode6,6,WHYAELA), A68_FALSE, &YHYAELA );
ZHYAELA_valspec = YHYAELA;
 /* line 1920: */
 /* line 1921: */
AIYAELA.From = (*(&(SHYAELA_fpar->Param)));
AIYAELA.To = (*(&(SHYAELA_fpar->Ans)));
CIYAELA = A_HEAP(A68_178 ) ;
(*CIYAELA) = AIYAELA ;
VIDAELA_primtype( A_UNITE(DIYAELA,mode6,6,CIYAELA), A68_FALSE, &EIYAELA );
BIYAELA_parspec = EIYAELA;
 /* line 1922: */
 /* line 1923: */
if ( LFYAELA_has_implicit )
{ 
 /* line 1924: */
UHYAELA_f_ok = XKUAELA_impl_macro(BIYAELA_parspec, ZHYAELA_valspec, GMPAELA_fncallstack);
} 
 /* line 1925: */
UMTAELA_substtype( (*IFYAELA_fncall), ((*(&(SHYAELA_fpar->Fnno)))-1), BIYAELA_parspec, &FIYAELA );
BIYAELA_parspec = FIYAELA;
 /* line 1926: */
 /* line 1927: */
if ( !(*(&(SHYAELA_fpar->Macro))) )
{ 
 /* line 1928: */
GIYAELA = !UHYAELA_f_ok;
if ( ! GIYAELA )
{ /* line 1929: */
NQSAELA_typetest( ZHYAELA_valspec, BIYAELA_parspec, &HIYAELA );
GIYAELA = LSRAELA_(HIYAELA, BSRAELA_false);
}
if ( GIYAELA )
{ 
JKPAELA_fp1 = ZHYAELA_valspec;
KKPAELA_fp2 = BIYAELA_parspec;
 /* line 1930: */
LKPAELA_fp3 = (*(&(THYAELA_fval->Id)));
 /* line 1931: */
IIYAELA.data[0] = A_UNITE(JIYAELA,mode13,13,LKPAELA_fp3);
IIYAELA.data[1] = A_UUNITE(KIYAELA,0,JKPAELA_fp1);
 /* line 1932: */
IIYAELA.data[2] = A_UUNITE(LIYAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(185, A_HISVEC(MIYAELA,IIYAELA,3,A68_263 ));
 /* line 1933: */
 /* line 1934: */
 /* line 1935: */
WLPAELA_paramfncall = (*ZPVAELA_fncall_flt(SHYAELA_fpar));
} 
} 
else
{ 
NIYAELA_fd2 = (A_HEAP(A68_167 ));
(*NIYAELA_fd2) = (*SHYAELA_fpar);
 /* line 1936: */
 /* line 1937: */
OIYAELA = BIYAELA_parspec ;
switch ( OIYAELA.mode )
{ 
case 6: /* REF STRUCT(MODE172,MODE172)  */
PIYAELA_ft = (OIYAELA.data.mode6);
{ 
QIYAELA = (&(NIYAELA_fd2->Param)) ;
(*QIYAELA) = (*(&(PIYAELA_ft->From)));
 /* line 1938: */
 /* line 1939: */
 /* line 1940: */
RIYAELA = (&(NIYAELA_fd2->Ans)) ;
(*RIYAELA) = (*(&(PIYAELA_ft->To)));
} 
break;
default: 
 /* line 1941: */
NKDAOST_sysfault(TIYAELA);
break;
} 
 /* line 1942: */
UIYAELA_message = LWSAELA_samespecfns(THYAELA_fval, NIYAELA_fd2, A68_FALSE);
 /* line 1943: */
LKPAELA_fp3 = (*(&(THYAELA_fval->Id)));
 /* line 1944: */
VIYAELA = (UIYAELA_message==3);
if ( ! VIYAELA )
{ /* line 1945: */
VIYAELA = (UIYAELA_message==4);
}
if ( VIYAELA )
{ 
JKPAELA_fp1 = ZHYAELA_valspec;
KKPAELA_fp2 = BIYAELA_parspec;
 /* line 1946: */
WIYAELA.data[0] = A_UNITE(XIYAELA,mode13,13,LKPAELA_fp3);
WIYAELA.data[1] = A_UUNITE(YIYAELA,0,JKPAELA_fp1);
WIYAELA.data[2] = A_UUNITE(ZIYAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(185, A_HISVEC(AJYAELA,WIYAELA,3,A68_263 ));
 /* line 1948: */
 /* line 1949: */
WLPAELA_paramfncall = (*ZPVAELA_fncall_flt(SHYAELA_fpar));
} 
else
{ 
 /* line 1950: */
if ( (UIYAELA_message!=0) )
{ 
NKPAELA_fp7 = (*THYAELA_fval);
OKPAELA_fp8 = (*NIYAELA_fd2);
 /* line 1951: */
BJYAELA.data[0] = A_UNITE(CJYAELA,mode13,13,LKPAELA_fp3);
BJYAELA.data[1] = A_UNITE(DJYAELA,mode14,14,(&NKPAELA_fp7));
 /* line 1952: */
BJYAELA.data[2] = A_UNITE(EJYAELA,mode14,14,(&OKPAELA_fp8));
VZPAELA_namefaultp(189, A_HISVEC(FJYAELA,BJYAELA,3,A68_263 ));
 /* line 1953: */
EWSAELA_specsflt(UIYAELA_message);
 /* line 1954: */
 /* line 1955: */
 /* line 1956: */
 /* line 1957: */
 /* line 1958: */
 /* line 1959: */
WLPAELA_paramfncall = (*ZPVAELA_fncall_flt(SHYAELA_fpar));
} 
} 
} 
} 
} 
} 
 /* line 1960: */
 /* line 1961: */
 /* line 1962: */
 /* line 1963: */
SFYAELA = A_UNITE(GJYAELA,mode4,4,WLPAELA_paramfncall);
} 
break;
default: 
 /* line 1964: */
SFYAELA = A_UNITE(HJYAELA,mode6,6,DRCAELA_flt);
break;
} 
} 
IJYAELA_pval = SFYAELA;
 /* line 1966: */
 /* line 1967: */
JJYAELA.Val = IJYAELA_pval;
JJYAELA.Rest = (A68_269 *)A68_NIL;
KJYAELA = A_HEAP(A68_269 ) ;
(*KJYAELA) = JJYAELA ;
LJYAELA = (*(&(IFYAELA_fncall->Nextpvals))) ;
(*LJYAELA) = KJYAELA;
 /* line 1968: */
MJYAELA = (&(IFYAELA_fncall->Nextpvals)) ;
(*MJYAELA) = (&((*(*(&(IFYAELA_fncall->Nextpvals))))->Rest));
 /* line 1969: */
 /* line 1970: */
 /* line 1971: */
NJYAELA = (&(GMPAELA_fncallstack->Nextmp)) ;
(*NJYAELA) = (&((*(*(&(GMPAELA_fncallstack->Nextmp))))->Rest));
} 
} 
A_PROC_EXIT(mcall3);
return;
} 
#undef NL

A68_VOID  OJYAELA_mcall4(void)
{ 
A68_268 * PJYAELA_fncall;
A68_167 * QJYAELA_fd;
A68_BOOL  RJYAELA;  /* optbool result */
A68_BOOL  SJYAELA_moreexplicit;
A68_BOOL  TJYAELA;  /* optbool result */
A68_BOOL  UJYAELA;  /* optbool result */
A68_263  VJYAELA;  /* OPERATORS - mode -> union mode */
A68_262  WJYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL * XJYAELA;  /* YIELD */
A68_167 * YJYAELA_d;
A68_172  ZJYAELA;  /* avoid structure result */
A68_172 * AKYAELA;  /* YIELD */
A68_172  BKYAELA;  /* avoid structure result */
A68_172 * CKYAELA;  /* YIELD */
A68_167 ** DKYAELA;  /* YIELD */
A_PROC_ENTRY(mcall4);
{ 
PJYAELA_fncall = (*(&(GMPAELA_fncallstack->Fncall)));
 /* line 1975: */
QJYAELA_fd = (*(&(PJYAELA_fncall->F)));
 /* line 1976: */
 /* line 1977: */
 /* line 1978: */
if ( ((*(&((*(&(QJYAELA_fd->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
 /* line 1979: */
RJYAELA = ((*(&(GMPAELA_fncallstack->Nextmp)))!=GQCAELA_nilnextmp);
if ( RJYAELA )
{ /* line 1980: */
RJYAELA = ((*(*(&(GMPAELA_fncallstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( RJYAELA )
{ 
SJYAELA_moreexplicit = QPVAELA_anyexplicit((*(*(&(GMPAELA_fncallstack->Nextmp)))));
 /* line 1981: */
 /* line 1982: */
TJYAELA = !(*(&(GMPAELA_fncallstack->Explicitparam)));
if ( ! TJYAELA )
{UJYAELA = (*(&(GMPAELA_fncallstack->Explicitparam)));
if ( UJYAELA )
{UJYAELA = SJYAELA_moreexplicit;
}
 /* line 1983: */
TJYAELA = UJYAELA;
}
 /* line 1984: */
if ( TJYAELA )
{ 
LKPAELA_fp3 = (*(&(QJYAELA_fd->Id)));
 /* line 1985: */
 /* line 1986: */
SZPAELA_faultp(53, A_HVEC(WJYAELA,A_UNITE(VJYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 1987: */
 /* line 1988: */
 /* line 1989: */
XJYAELA = (&(GMPAELA_fncallstack->Explicitparam)) ;
(*XJYAELA) = SJYAELA_moreexplicit;
} 
} 
else
{ 
YJYAELA_d = (A_HEAP(A68_167 ));
(*YJYAELA_d) = (*QJYAELA_fd);
 /* line 1990: */
UMTAELA_substtype( (*PJYAELA_fncall), (*(&(QJYAELA_fd->Fnno))), (*(&(QJYAELA_fd->Param))), &ZJYAELA );
AKYAELA = (&(YJYAELA_d->Param)) ;
(*AKYAELA) = ZJYAELA;
 /* line 1991: */
UMTAELA_substtype( (*PJYAELA_fncall), (*(&(QJYAELA_fd->Fnno))), (*(&(QJYAELA_fd->Ans))), &BKYAELA );
CKYAELA = (&(YJYAELA_d->Ans)) ;
(*CKYAELA) = BKYAELA;
 /* line 1992: */
 /* line 1993: */
 /* line 1994: */
 /* line 1995: */
DKYAELA = (&(PJYAELA_fncall->F)) ;
(*DKYAELA) = YJYAELA_d;
} 
} 
} 
A_PROC_EXIT(mcall4);
return;
} 
#undef NL

A68_VOID  EKYAELA_errorm1(void)
{ 
A_PROC_ENTRY(errorm1);
ONPAELA_errormessage = 1;
A_PROC_EXIT(errorm1);
return;
} 
#undef NL

A68_VOID  FKYAELA_errorm2(void)
{ 
A_PROC_ENTRY(errorm2);
ONPAELA_errormessage = 2;
A_PROC_EXIT(errorm2);
return;
} 
#undef NL

A68_VOID  GKYAELA_mcall5(void)
{ 
A68_BOOL  HKYAELA;  /* optbool result */
A68_263  IKYAELA;  /* OPERATORS - mode -> union mode */
A68_262  JKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  KKYAELA;  /* OPERATORS - mode -> union mode */
A68_262  LKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  MKYAELA;  /* OPERATORS - mode -> union mode */
A68_262  NKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(mcall5);
{ 
 /* line 2003: */
HKYAELA = ((*(&((*(&((*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)))->Fninfo)))->Status)))!=CXCAELA_fn_flt);
if ( HKYAELA )
{ /* line 2004: */
HKYAELA = ((*(&(GMPAELA_fncallstack->Nextmp)))!=GQCAELA_nilnextmp);
}
if ( HKYAELA )
{ /* line 2005: */
HKYAELA = ((*(*(&(GMPAELA_fncallstack->Nextmp))))!=IQCAELA_nilmparams);
}
 /* line 2006: */
if ( HKYAELA )
{HKYAELA = !QNPAELA_macroexpected;
}
if ( HKYAELA )
{ 
LKPAELA_fp3 = (*(&((*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)))->Id)));
 /* line 2007: */
 /* line 2008: */
switch ( ONPAELA_errormessage )
{ 
case 1: 
 /* line 2009: */
 /* line 2010: */
SZPAELA_faultp(154, A_HVEC(JKYAELA,A_UNITE(IKYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
case 2: 
 /* line 2011: */
 /* line 2012: */
SZPAELA_faultp(168, A_HVEC(LKYAELA,A_UNITE(KKYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
case 3: 
 /* line 2013: */
 /* line 2014: */
 /* line 2015: */
SZPAELA_faultp(184, A_HVEC(NKYAELA,A_UNITE(MKYAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
default: 
 /* line 2016: */
 /* line 2017: */
/*SKIP*/;
break;
} 
} 
} 
A_PROC_EXIT(mcall5);
return;
} 
#undef NL

A68_VOID  OKYAELA_pullfncall(void)
{ 
A_PROC_ENTRY(pullfncall);
GMPAELA_fncallstack = (*(&(GMPAELA_fncallstack->Rest)));
A_PROC_EXIT(pullfncall);
return;
} 
#undef NL

A68_VOID  PKYAELA_checkcall(void)
{ 
A68_VC  QKYAELA_newcall;
A68_BOOL  RKYAELA;  /* optbool result */
A68_VC  SKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  TKYAELA;  /* optbool result */
A68_VC  UKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  YKYAELA;  /* optbool result */
A68_VC  ZKYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ALYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BLYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_445  CLYAELA;  /* collateral clause result */
A68_263  DLYAELA;  /* OPERATORS - mode -> union mode */
A68_263  ELYAELA;  /* OPERATORS - mode -> union mode */
A68_262  FLYAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(checkcall);
{ 
QKYAELA_newcall = (*(&((*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)))->Id)));
 /* line 2024: */
RKYAELA = A_VC_NE(MMPAELA_lastcall,TTCAOST_nullid);
if ( RKYAELA )
{RKYAELA = A_VC_NE(MMPAELA_lastcall,QKYAELA_newcall);
}
 /* line 2025: */
if ( RKYAELA )
{TKYAELA = A_VC_NE(QKYAELA_newcall,A_HVEC(SKYAELA,'+',A68_CHAR ));
if ( TKYAELA )
{TKYAELA = A_VC_NE(QKYAELA_newcall,A_HVEC(UKYAELA,'-',A68_CHAR ));
}
if ( TKYAELA )
{TKYAELA = A_VC_NE(QKYAELA_newcall,A_HVEC(VKYAELA,'*',A68_CHAR ));
}
if ( TKYAELA )
{TKYAELA = A_VC_NE(QKYAELA_newcall,A_HVEC(WKYAELA,'%',A68_CHAR ));
}
 /* line 2026: */
if ( ! TKYAELA )
{YKYAELA = A_VC_NE(MMPAELA_lastcall,A_HVEC(XKYAELA,'+',A68_CHAR ));
if ( YKYAELA )
{YKYAELA = A_VC_NE(MMPAELA_lastcall,A_HVEC(ZKYAELA,'-',A68_CHAR ));
}
if ( YKYAELA )
{YKYAELA = A_VC_NE(MMPAELA_lastcall,A_HVEC(ALYAELA,'*',A68_CHAR ));
}
if ( YKYAELA )
{YKYAELA = A_VC_NE(MMPAELA_lastcall,A_HVEC(BLYAELA,'%',A68_CHAR ));
}
TKYAELA = YKYAELA;
}
 /* line 2027: */
RKYAELA = TKYAELA;
}
if ( RKYAELA )
{ 
LKPAELA_fp3 = MMPAELA_lastcall;
MKPAELA_fp4 = QKYAELA_newcall;
 /* line 2028: */
 /* line 2029: */
CLYAELA.data[0] = A_UNITE(DLYAELA,mode13,13,LKPAELA_fp3);
CLYAELA.data[1] = A_UNITE(ELYAELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(117, A_HISVEC(FLYAELA,CLYAELA,2,A68_263 ));
 /* line 2030: */
 /* line 2031: */
HMPAELA_errorswitch = A68_FALSE;
} 
 /* line 2032: */
 /* line 2033: */
MMPAELA_lastcall = QKYAELA_newcall;
} 
A_PROC_EXIT(checkcall);
return;
} 
#undef NL

A68_VOID  GLYAELA_removecall1(void)
{ 
A68_280  HLYAELA;  /* collateral clause result */
A68_280 * ILYAELA;  /* YIELD */
A68_210  JLYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(removecall1);
{ 
HLYAELA.Last = MMPAELA_lastcall;
HLYAELA.Rest = GNPAELA_lastcalls;
ILYAELA = A_HEAP(A68_280 ) ;
(*ILYAELA) = HLYAELA ;
GNPAELA_lastcalls = ILYAELA;
 /* line 2037: */
MMPAELA_lastcall = TTCAOST_nullid;
HMPAELA_errorswitch = A68_TRUE;
 /* line 2038: */
 /* line 2039: */
VMPAELA_joinup = A_UNITE(JLYAELA,mode7,7,DRCAELA_flt);
} 
A_PROC_EXIT(removecall1);
return;
} 
#undef NL

A68_VOID  KLYAELA_removecall2(void)
{ 
A68_BOOL  LLYAELA;  /* optbool result */
A_PROC_ENTRY(removecall2);
{ 
 /* line 2043: */
LLYAELA = (GMPAELA_fncallstack!=IUCAELA_nilfncallstack);
if ( LLYAELA )
{ /* line 2044: */
LLYAELA = ((*(&(GNPAELA_lastcalls->Last))).upb>0);
}
if ( LLYAELA )
{ 
 /* line 2045: */
MMPAELA_lastcall = (*(&((*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)))->Id)));
} 
else
{ 
 /* line 2046: */
MMPAELA_lastcall = TTCAOST_nullid;
} 
 /* line 2047: */
GNPAELA_lastcalls = (*(&(GNPAELA_lastcalls->Rest)));
 /* line 2048: */
 /* line 2049: */
HMPAELA_errorswitch = A68_TRUE;
} 
A_PROC_EXIT(removecall2);
return;
} 
#undef NL

A68_VOID  MLYAELA_callm(void)
{ 
A68_268 * NLYAELA_fncall;
A68_167 * OLYAELA_fd;
A68_BOOL  PLYAELA_matchspec;
A68_BOOL  QLYAELA;  /* optbool result */
A68_172  RLYAELA;  /* avoid structure result */
A68_172  SLYAELA;  /* avoid structure result */
A68_167 * TLYAELA_d;
A68_172  ULYAELA;  /* avoid structure result */
A68_172 * VLYAELA;  /* YIELD */
A68_172  WLYAELA;  /* avoid structure result */
A68_172 * XLYAELA;  /* YIELD */
A68_167 ** YLYAELA;  /* YIELD */
A68_169 *** ZLYAELA;  /* YIELD */
A68_BOOL  AMYAELA;  /* optbool result */
A68_449  BMYAELA;  /* collateral clause result */
A68_263  CMYAELA;  /* OPERATORS - mode -> union mode */
A68_263  DMYAELA;  /* OPERATORS - unite union */
A68_263  EMYAELA;  /* OPERATORS - unite union */
A68_262  FMYAELA;  /* OPERATORS - istruct -> vector */
A68_32  GMYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  HMYAELA;  /* avoid structure result */
A68_172  IMYAELA;  /* OPERATORS - mode -> union mode */
A68_210  JMYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(callm);
{ 
NLYAELA_fncall = (*(&(GMPAELA_fncallstack->Fncall)));
 /* line 2053: */
OLYAELA_fd = (*(&(NLYAELA_fncall->F)));
 /* line 2054: */
PLYAELA_matchspec = A68_TRUE;
 /* line 2055: */
 /* line 2056: */
 /* line 2057: */
if ( ((*(&((*(&(OLYAELA_fd->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2058: */
QLYAELA = (*(&(OLYAELA_fd->Macro)));
if ( QLYAELA )
{ /* line 2059: */
QLYAELA = ((*(&(GMPAELA_fncallstack->Nextmp)))!=GQCAELA_nilnextmp);
}
if ( QLYAELA )
{ /* line 2060: */
QLYAELA = ((*(*(&(GMPAELA_fncallstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( QLYAELA )
{ 
 /* line 2061: */
VIDAELA_primtype( RLPAELA_type, A68_FALSE, &RLYAELA );
VIDAELA_primtype( (*(&(OLYAELA_fd->Param))), A68_FALSE, &SLYAELA );
PLYAELA_matchspec = XKUAELA_impl_macro(SLYAELA, RLYAELA, GMPAELA_fncallstack);
 /* line 2062: */
 /* line 2063: */
if ( PLYAELA_matchspec )
{ 
TLYAELA_d = (A_HEAP(A68_167 ));
(*TLYAELA_d) = (*OLYAELA_fd);
 /* line 2064: */
UMTAELA_substtype( (*NLYAELA_fncall), (*(&(OLYAELA_fd->Fnno))), (*(&(OLYAELA_fd->Param))), &ULYAELA );
VLYAELA = (&(TLYAELA_d->Param)) ;
(*VLYAELA) = ULYAELA;
 /* line 2065: */
UMTAELA_substtype( (*NLYAELA_fncall), (*(&(OLYAELA_fd->Fnno))), (*(&(OLYAELA_fd->Ans))), &WLYAELA );
XLYAELA = (&(TLYAELA_d->Ans)) ;
(*XLYAELA) = WLYAELA;
 /* line 2066: */
YLYAELA = (&(NLYAELA_fncall->F)) ;
(*YLYAELA) = TLYAELA_d;
 /* line 2067: */
OLYAELA_fd = (*(&(NLYAELA_fncall->F)));
 /* line 2068: */
 /* line 2069: */
 /* line 2070: */
ZLYAELA = (&(GMPAELA_fncallstack->Nextmp)) ;
(*ZLYAELA) = GQCAELA_nilnextmp;
} 
} 
 /* line 2071: */
AMYAELA = !PLYAELA_matchspec;
if ( ! AMYAELA )
{ /* line 2072: */
AMYAELA = !FRSAELA_checktypeeq(RLPAELA_type, (*(&(OLYAELA_fd->Param))), A68_TRUE);
}
if ( AMYAELA )
{ 
JKPAELA_fp1 = (*(&(OLYAELA_fd->Param)));
KKPAELA_fp2 = RLPAELA_type;
LKPAELA_fp3 = (*(&(OLYAELA_fd->Id)));
 /* line 2073: */
BMYAELA.data[0] = A_UNITE(CMYAELA,mode13,13,LKPAELA_fp3);
BMYAELA.data[1] = A_UUNITE(DMYAELA,0,JKPAELA_fp1);
BMYAELA.data[2] = A_UUNITE(EMYAELA,0,KKPAELA_fp2);
 /* line 2074: */
VZPAELA_namefaultp(54, A_HISVEC(FMYAELA,BMYAELA,3,A68_263 ));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(GMYAELA,LKCAELA_vcallm,A68_INT )),(A_HVEC(GMYAELA,LKCAELA_vcallm,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2075: */
 /* line 2076: */
UBRAELA_outfncall((*NLYAELA_fncall), A68_FALSE);
} 
 /* line 2077: */
RLPAELA_type = (*(&(OLYAELA_fd->Ans)));
 /* line 2078: */
 /* line 2079: */
TUUAELA_join_setup( RLPAELA_type, A68_TRUE, &HMYAELA );
VMPAELA_joinup = HMYAELA;
} 
else
{ 
RLPAELA_type = A_UNITE(IMYAELA,mode10,10,DRCAELA_flt);
AEVAELA_mark_join((&VMPAELA_joinup), SRCAELA_jfault, A68_TRUE);
 /* line 2080: */
 /* line 2081: */
VMPAELA_joinup = A_UNITE(JMYAELA,mode7,7,DRCAELA_flt);
} 
} 
A_PROC_EXIT(callm);
return;
} 
#undef NL

A68_VOID  KMYAELA_calld(void)
{ 
A68_175  LMYAELA;  /* collateral clause result */
A68_175  MMYAELA;  /* collateral clause result */
A68_175 * NMYAELA;  /* YIELD */
A68_175 * OMYAELA;  /* YIELD */
A68_172  PMYAELA;  /* OPERATORS - mode -> union mode */
A68_268 * QMYAELA_fncall;
A68_167 * RMYAELA_fd;
A68_BOOL  SMYAELA_matchspec;
A68_BOOL  TMYAELA;  /* optbool result */
A68_172  UMYAELA;  /* avoid structure result */
A68_172  VMYAELA;  /* avoid structure result */
A68_167 * WMYAELA_d;
A68_172  XMYAELA;  /* avoid structure result */
A68_172 * YMYAELA;  /* YIELD */
A68_172  ZMYAELA;  /* avoid structure result */
A68_172 * ANYAELA;  /* YIELD */
A68_167 ** BNYAELA;  /* YIELD */
A68_169 *** CNYAELA;  /* YIELD */
A68_BOOL  DNYAELA;  /* optbool result */
A68_BOOL  ENYAELA;  /* optbool result */
A68_449  FNYAELA;  /* collateral clause result */
A68_263  GNYAELA;  /* OPERATORS - mode -> union mode */
A68_263  HNYAELA;  /* OPERATORS - unite union */
A68_263  INYAELA;  /* OPERATORS - unite union */
A68_262  JNYAELA;  /* OPERATORS - istruct -> vector */
A68_32  KNYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  LNYAELA;  /* avoid structure result */
A68_172  MNYAELA;  /* OPERATORS - mode -> union mode */
A68_210  NNYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(calld);
{ 
LMYAELA.T = (*(&(COPAELA_typestack->T)));
MMYAELA.T = RLPAELA_type;
MMYAELA.Rest = (A68_175 *)A68_NIL;
NMYAELA = A_HEAP(A68_175 ) ;
(*NMYAELA) = MMYAELA ;
LMYAELA.Rest = NMYAELA;
OMYAELA = A_HEAP(A68_175 ) ;
(*OMYAELA) = LMYAELA ;
RLPAELA_type = A_UNITE(PMYAELA,mode3,3,OMYAELA);
 /* line 2085: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
 /* line 2086: */
MMPAELA_lastcall = (*(&((*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)))->Id)));
 /* line 2087: */
QMYAELA_fncall = (*(&(GMPAELA_fncallstack->Fncall)));
 /* line 2088: */
RMYAELA_fd = (*(&(QMYAELA_fncall->F)));
 /* line 2089: */
SMYAELA_matchspec = A68_TRUE;
 /* line 2090: */
 /* line 2091: */
 /* line 2092: */
if ( ((*(&((*(&(RMYAELA_fd->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2093: */
TMYAELA = (*(&(RMYAELA_fd->Macro)));
if ( TMYAELA )
{ /* line 2094: */
TMYAELA = ((*(&(GMPAELA_fncallstack->Nextmp)))!=GQCAELA_nilnextmp);
}
if ( TMYAELA )
{ /* line 2095: */
TMYAELA = ((*(*(&(GMPAELA_fncallstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( TMYAELA )
{ 
 /* line 2096: */
VIDAELA_primtype( RLPAELA_type, A68_FALSE, &UMYAELA );
VIDAELA_primtype( (*(&(RMYAELA_fd->Param))), A68_FALSE, &VMYAELA );
SMYAELA_matchspec = XKUAELA_impl_macro(VMYAELA, UMYAELA, GMPAELA_fncallstack);
 /* line 2097: */
 /* line 2098: */
if ( SMYAELA_matchspec )
{ 
WMYAELA_d = (A_HEAP(A68_167 ));
(*WMYAELA_d) = (*RMYAELA_fd);
 /* line 2099: */
UMTAELA_substtype( (*QMYAELA_fncall), (*(&(RMYAELA_fd->Fnno))), (*(&(RMYAELA_fd->Param))), &XMYAELA );
YMYAELA = (&(WMYAELA_d->Param)) ;
(*YMYAELA) = XMYAELA;
 /* line 2100: */
UMTAELA_substtype( (*QMYAELA_fncall), (*(&(RMYAELA_fd->Fnno))), (*(&(RMYAELA_fd->Ans))), &ZMYAELA );
ANYAELA = (&(WMYAELA_d->Ans)) ;
(*ANYAELA) = ZMYAELA;
 /* line 2101: */
BNYAELA = (&(QMYAELA_fncall->F)) ;
(*BNYAELA) = WMYAELA_d;
 /* line 2102: */
RMYAELA_fd = (*(&(QMYAELA_fncall->F)));
 /* line 2103: */
 /* line 2104: */
 /* line 2105: */
CNYAELA = (&(GMPAELA_fncallstack->Nextmp)) ;
(*CNYAELA) = GQCAELA_nilnextmp;
} 
} 
 /* line 2106: */
DNYAELA = !SMYAELA_matchspec;
if ( ! DNYAELA )
{ /* line 2107: */
 /* line 2108: */
ENYAELA = !FRSAELA_checktypeeq(RLPAELA_type, (*(&(RMYAELA_fd->Param))), A68_TRUE);
if ( ENYAELA )
{ENYAELA = HMPAELA_errorswitch;
}
DNYAELA = ENYAELA;
}
if ( DNYAELA )
{ 
JKPAELA_fp1 = (*(&(RMYAELA_fd->Param)));
KKPAELA_fp2 = RLPAELA_type;
LKPAELA_fp3 = (*(&(RMYAELA_fd->Id)));
 /* line 2109: */
FNYAELA.data[0] = A_UNITE(GNYAELA,mode13,13,LKPAELA_fp3);
FNYAELA.data[1] = A_UUNITE(HNYAELA,0,JKPAELA_fp1);
FNYAELA.data[2] = A_UUNITE(INYAELA,0,KKPAELA_fp2);
 /* line 2110: */
VZPAELA_namefaultp(54, A_HISVEC(JNYAELA,FNYAELA,3,A68_263 ));
} 
else
{ 
LLPAELA_vss-=1;
 /* line 2111: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(KNYAELA,MKCAELA_vcalld,A68_INT )),(A_HVEC(KNYAELA,MKCAELA_vcalld,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2112: */
 /* line 2113: */
UBRAELA_outfncall((*QMYAELA_fncall), A68_FALSE);
} 
 /* line 2114: */
RLPAELA_type = (*(&(RMYAELA_fd->Ans)));
 /* line 2115: */
 /* line 2116: */
TUUAELA_join_setup( RLPAELA_type, A68_TRUE, &LNYAELA );
VMPAELA_joinup = LNYAELA;
} 
else
{ 
RLPAELA_type = A_UNITE(MNYAELA,mode10,10,DRCAELA_flt);
AEVAELA_mark_join((&VMPAELA_joinup), SRCAELA_jfault, A68_TRUE);
 /* line 2117: */
 /* line 2118: */
VMPAELA_joinup = A_UNITE(NNYAELA,mode7,7,DRCAELA_flt);
} 
} 
A_PROC_EXIT(calld);
return;
} 
#undef NL

A68_VOID  ONYAELA_portname(void)
{ 
A68_212 * PNYAELA_pinfo;
A68_220  QNYAELA;  /* collateral clause result */
A68_185  RNYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  SNYAELA;  /* YIELD */
A68_185  TNYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  UNYAELA;  /* YIELD */
A68_220 * VNYAELA;  /* YIELD */
A68_210  WNYAELA;  /* avoid structure result */
A68_444  XNYAELA;  /* collateral clause result */
A68_32  YNYAELA;  /* OPERATORS - istruct -> vector */
A68_211  ZNYAELA;  /* OPERATORS - mode -> union mode */
A68_172  AOYAELA;  /* OPERATORS - mode -> union mode */
A68_210  BOYAELA;  /* OPERATORS - mode -> union mode */
A68_211  COYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(portname);
{ 
PNYAELA_pinfo = NWVAELA_get_port_info((&XLPAELA_portinfo), CIPAELA_ident);
 /* line 2122: */
 /* line 2123: */
if ( (PNYAELA_pinfo!=VQCAELA_nilportdata) )
{ 
 /* line 2124: */
if ( !(*(&(PNYAELA_pinfo->Single))) )
{ 
 /* line 2125: */
if ( (RMPAELA_joinvarstack!=SQCAELA_niljoinvarstack) )
{ 
 /* line 2126: */
SNYAELA = (*(&(PNYAELA_pinfo->Index))) ;
QNYAELA.Lwb = A_UNITE(RNYAELA,mode1,1,SNYAELA);
UNYAELA = (*(&(PNYAELA_pinfo->Index))) ;
QNYAELA.Upb = A_UNITE(TNYAELA,mode1,1,UNYAELA);
QNYAELA.Index = A68_TRUE;
 /* line 2127: */
QNYAELA.Rest = RMPAELA_joinvarstack;
VNYAELA = A_HEAP(A68_220 ) ;
(*VNYAELA) = QNYAELA ;
RMPAELA_joinvarstack = VNYAELA;
} 
else
{ 
 /* line 2128: */
 /* line 2129: */
PIVAELA_gettrim( (&VMPAELA_joinup), (*(&(PNYAELA_pinfo->Index))), (*(&(PNYAELA_pinfo->Index))), &WNYAELA );
VMPAELA_joinup = WNYAELA;
} 
} 
 /* line 2130: */
XNYAELA.data[0] = UKCAELA_vtermindex;
XNYAELA.data[1] = (*(&(PNYAELA_pinfo->Fnno)));
XNYAELA.data[2] = (*(&(PNYAELA_pinfo->Nameno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(YNYAELA,XNYAELA,3,A68_INT )),(A_HISVEC(YNYAELA,XNYAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2131: */
RLPAELA_type = (*(&(PNYAELA_pinfo->Type)));
 /* line 2132: */
 /* line 2133: */
XLPAELA_portinfo = A_UNITE(ZNYAELA,mode3,3,DRCAELA_flt);
} 
else
{ 
RLPAELA_type = A_UNITE(AOYAELA,mode10,10,DRCAELA_flt);
AEVAELA_mark_join((&VMPAELA_joinup), SRCAELA_jfault, A68_TRUE);
VMPAELA_joinup = A_UNITE(BOYAELA,mode7,7,DRCAELA_flt);
 /* line 2134: */
 /* line 2135: */
 /* line 2136: */
XLPAELA_portinfo = A_UNITE(COYAELA,mode3,3,DRCAELA_flt);
} 
} 
A_PROC_EXIT(portname);
return;
} 
#undef NL

A68_VOID  DOYAELA_index(void)
{ 
A68_185  EOYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  FOYAELA;  /* YIELD */
A68_172  GOYAELA;  /* avoid structure result */
A68_32  HOYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_211  IOYAELA;  /* united object - for case conformity */
A68_213 * JOYAELA_pmm;
A68_211  KOYAELA;  /* clause result */
A68_211  LOYAELA;  /* OPERATORS - mode -> union mode */
A68_185  MOYAELA;  /* avoid structure result */
A68_BOOL  NOYAELA;  /* optbool result */
A68_220  OOYAELA;  /* collateral clause result */
A68_220 * POYAELA;  /* YIELD */
A68_210  QOYAELA;  /* avoid structure result */
A_PROC_ENTRY(index);
{ 
HOPAELA_t = RLPAELA_type;
 /* line 2141: */
FOYAELA = 0 ;
ESTAELA_trimorindex( HOPAELA_t, A_UNITE(EOYAELA,mode1,1,FOYAELA), SLPAELA_integer, (&SLPAELA_integer), (&SLPAELA_integer), &GOYAELA );
RLPAELA_type = GOYAELA;
 /* line 2142: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(HOYAELA,KKCAELA_vindex,A68_INT )),(A_HVEC(HOYAELA,KKCAELA_vindex,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2143: */
 /* line 2144: */
IOYAELA = XLPAELA_portinfo ;
switch ( IOYAELA.mode )
{ 
case 2: /* REF STRUCT(MODE211,MODE185)  */
JOYAELA_pmm = (IOYAELA.data.mode2);
 /* line 2145: */
 /* line 2146: */
KOYAELA = (*(&(JOYAELA_pmm->Port)));
break;
default: 
KOYAELA = A_UNITE(LOYAELA,mode3,3,DRCAELA_flt);
break;
} 
XLPAELA_portinfo = KOYAELA;
 /* line 2147: */
if ( MJQAELA_loadint(SLPAELA_integer, A68_FALSE) )
{ 
DSDAELA_uncheckedint( SLPAELA_integer, &MOYAELA );
SLPAELA_integer = MOYAELA;
} 
 /* line 2148: */
NOYAELA = (RMPAELA_joinvarstack!=SQCAELA_niljoinvarstack);
if ( ! NOYAELA )
{ /* line 2149: */
NOYAELA = HDTAELA_ihasvmno(SLPAELA_integer);
}
if ( NOYAELA )
{ 
 /* line 2150: */
OOYAELA.Lwb = SLPAELA_integer;
OOYAELA.Upb = SLPAELA_integer;
OOYAELA.Index = A68_TRUE;
 /* line 2151: */
OOYAELA.Rest = RMPAELA_joinvarstack;
POYAELA = A_HEAP(A68_220 ) ;
(*POYAELA) = OOYAELA ;
RMPAELA_joinvarstack = POYAELA;
} 
else
{ 
 /* line 2152: */
 /* line 2153: */
UKVAELA_jointrim( (&VMPAELA_joinup), SLPAELA_integer, SLPAELA_integer, &QOYAELA );
VMPAELA_joinup = QOYAELA;
} 
} 
A_PROC_EXIT(index);
return;
} 
#undef NL

A68_VOID  ROYAELA_trim(void)
{ 
A68_185  SOYAELA_size;
A68_190  TOYAELA;  /* collateral clause result */
A68_190  UOYAELA;  /* collateral clause result */
A68_190 * VOYAELA;  /* YIELD */
A68_185  WOYAELA;  /* OPERATORS - mode -> union mode */
A68_185  XOYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  YOYAELA;  /* YIELD */
A68_190 * ZOYAELA;  /* YIELD */
A68_185  APYAELA;  /* OPERATORS - mode -> union mode */
A68_185  BPYAELA;  /* avoid structure result */
A68_172  CPYAELA;  /* avoid structure result */
A68_32  DPYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_211  EPYAELA;  /* united object - for case conformity */
A68_212 * FPYAELA_pd;
A68_211  GPYAELA;  /* clause result */
A68_211  HPYAELA;  /* OPERATORS - mode -> union mode */
A68_185  IPYAELA;  /* avoid structure result */
A68_185  JPYAELA;  /* avoid structure result */
A68_BOOL  KPYAELA;  /* optbool result */
A68_220  LPYAELA;  /* collateral clause result */
A68_220 * MPYAELA;  /* YIELD */
A68_210  NPYAELA;  /* avoid structure result */
A_PROC_ENTRY(trim);
{ 
HOPAELA_t = RLPAELA_type;
 /* line 2157: */
TLPAELA_integer1 = (*(&(DOPAELA_integerstack->I)));
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 2158: */
 /* line 2159: */
TOYAELA.Opno = GPCAELA_diplus;
UOYAELA.Opno = HPCAELA_diminus;
UOYAELA.L = SLPAELA_integer;
UOYAELA.R = TLPAELA_integer1;
VOYAELA = A_HEAP(A68_190 ) ;
(*VOYAELA) = UOYAELA ;
TOYAELA.L = A_UNITE(WOYAELA,mode7,7,VOYAELA);
YOYAELA = 1 ;
TOYAELA.R = A_UNITE(XOYAELA,mode1,1,YOYAELA);
ZOYAELA = A_HEAP(A68_190 ) ;
(*ZOYAELA) = TOYAELA ;
CDRAELA_simplify( A_UNITE(APYAELA,mode7,7,ZOYAELA), A68_TRUE, &BPYAELA );
SOYAELA_size = BPYAELA;
 /* line 2160: */
ESTAELA_trimorindex( HOPAELA_t, SOYAELA_size, TLPAELA_integer1, (&TLPAELA_integer1), (&SLPAELA_integer), &CPYAELA );
RLPAELA_type = CPYAELA;
 /* line 2161: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(DPYAELA,JKCAELA_vtrim,A68_INT )),(A_HVEC(DPYAELA,JKCAELA_vtrim,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2162: */
 /* line 2163: */
EPYAELA = XLPAELA_portinfo ;
switch ( EPYAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,INT,INT,INT,MODE172,BOOL,REF MODE212)  */
FPYAELA_pd = (EPYAELA.data.mode1);
 /* line 2164: */
 /* line 2165: */
GPYAELA = A_UNITE(HPYAELA,mode3,3,DRCAELA_flt);
break;
default: 
GPYAELA = XLPAELA_portinfo;
break;
} 
XLPAELA_portinfo = GPYAELA;
 /* line 2166: */
if ( MJQAELA_loadint(TLPAELA_integer1, A68_FALSE) )
{ 
DSDAELA_uncheckedint( TLPAELA_integer1, &IPYAELA );
TLPAELA_integer1 = IPYAELA;
} 
 /* line 2167: */
if ( MJQAELA_loadint(SLPAELA_integer, A68_FALSE) )
{ 
DSDAELA_uncheckedint( SLPAELA_integer, &JPYAELA );
SLPAELA_integer = JPYAELA;
} 
 /* line 2168: */
KPYAELA = (RMPAELA_joinvarstack!=SQCAELA_niljoinvarstack);
if ( ! KPYAELA )
{ /* line 2169: */
KPYAELA = HDTAELA_ihasvmno(SLPAELA_integer);
}
if ( ! KPYAELA )
{ /* line 2170: */
KPYAELA = HDTAELA_ihasvmno(TLPAELA_integer1);
}
if ( KPYAELA )
{ 
 /* line 2171: */
LPYAELA.Lwb = TLPAELA_integer1;
LPYAELA.Upb = SLPAELA_integer;
LPYAELA.Index = A68_FALSE;
 /* line 2172: */
LPYAELA.Rest = RMPAELA_joinvarstack;
MPYAELA = A_HEAP(A68_220 ) ;
(*MPYAELA) = LPYAELA ;
RMPAELA_joinvarstack = MPYAELA;
} 
else
{ 
 /* line 2173: */
 /* line 2174: */
UKVAELA_jointrim( (&VMPAELA_joinup), TLPAELA_integer1, SLPAELA_integer, &NPYAELA );
VMPAELA_joinup = NPYAELA;
} 
} 
A_PROC_EXIT(trim);
return;
} 
#undef NL

A68_VOID  OPYAELA_dynindex1(void)
{ 
A68_175  PPYAELA;  /* collateral clause result */
A68_175 * QPYAELA;  /* YIELD */
A68_32  RPYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_284  SPYAELA;  /* collateral clause result */
A68_284 * TPYAELA;  /* YIELD */
A_PROC_ENTRY(dynindex1);
{ 
PPYAELA.T = RLPAELA_type;
PPYAELA.Rest = COPAELA_typestack;
QPYAELA = A_HEAP(A68_175 ) ;
(*QPYAELA) = PPYAELA ;
COPAELA_typestack = QPYAELA;
 /* line 2178: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(RPYAELA,HMCAELA_vdynindex,A68_INT )),(A_HVEC(RPYAELA,HMCAELA_vdynindex,A68_INT ),(VOPAELA_outints).nonlocals));
LLPAELA_vss-=1;
 /* line 2179: */
SPYAELA.Port = XLPAELA_portinfo;
 /* line 2180: */
SPYAELA.Rest = YLPAELA_portstack;
TPYAELA = A_HEAP(A68_284 ) ;
(*TPYAELA) = SPYAELA ;
YLPAELA_portstack = TPYAELA;
} 
A_PROC_EXIT(dynindex1);
return;
} 
#undef NL

A68_VOID  UPYAELA_dynindex2(void)
{ 
A68_248  VPYAELA;  /* collateral clause result */
A68_185  WPYAELA;  /* OPERATORS - mode -> union mode */
A68_185  XPYAELA;  /* OPERATORS - mode -> union mode */
A68_248  YPYAELA_pr;
A68_172  ZPYAELA;  /* avoid structure result */
A68_248  AQYAELA;  /* avoid structure result */
A68_185  BQYAELA;  /* OPERATORS - mode -> union mode */
A68_185  CQYAELA;  /* OPERATORS - mode -> union mode */
A68_185  DQYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EQYAELA;  /* YIELD */
A68_172  FQYAELA;  /* avoid structure result */
A68_32  GQYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  HQYAELA;  /* OPERATORS - mode -> union mode */
A68_211  IQYAELA;  /* united object - for case conformity */
A68_213 * JQYAELA_pmm;
A68_211  KQYAELA;  /* clause result */
A68_211  LQYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(dynindex2);
{ 
VPYAELA.Idinfo = (A68_198 *)A68_NIL;
VPYAELA.Lwb = A_UNITE(WPYAELA,mode4,4,DRCAELA_flt);
VPYAELA.Upb = A_UNITE(XPYAELA,mode4,4,DRCAELA_flt);
YPYAELA_pr = VPYAELA;
 /* line 2185: */
HOPAELA_t = (*(&(COPAELA_typestack->T)));
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
 /* line 2186: */
VIDAELA_primtype( RLPAELA_type, A68_TRUE, &ZPYAELA );
RLPAELA_type = ZPYAELA;
 /* line 2187: */
 /* line 2188: */
if ( !NZSAELA_isprimrange(RLPAELA_type) )
{ 
 /* line 2189: */
UQPAELA_fault(56, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 2190: */
VZSAELA_primrange( RLPAELA_type, &AQYAELA );
YPYAELA_pr = AQYAELA;
} 
 /* line 2191: */
SLPAELA_integer = A_UNITE(BQYAELA,mode4,4,DRCAELA_flt);
 /* line 2192: */
EQYAELA = 0 ;
ESTAELA_trimorindex( HOPAELA_t, A_UNITE(DQYAELA,mode1,1,EQYAELA), A_UNITE(CQYAELA,mode4,4,DRCAELA_flt), (&((&YPYAELA_pr)->Lwb)), (&((&YPYAELA_pr)->Upb)), &FQYAELA );
RLPAELA_type = FQYAELA;
 /* line 2193: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(GQYAELA,XKCAELA_end,A68_INT )),(A_HVEC(GQYAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2194: */
if ( LERAELA_isintcheck((*(&((&YPYAELA_pr)->Lwb)))) )
{ 
MJQAELA_loadint((*(&((&YPYAELA_pr)->Lwb))), A68_FALSE);
} 
 /* line 2195: */
if ( LERAELA_isintcheck((*(&((&YPYAELA_pr)->Upb)))) )
{ 
MJQAELA_loadint((*(&((&YPYAELA_pr)->Upb))), A68_FALSE);
} 
 /* line 2196: */
VMPAELA_joinup = A_UNITE(HQYAELA,mode7,7,DRCAELA_flt);
 /* line 2197: */
 /* line 2198: */
IQYAELA = (*(&(YLPAELA_portstack->Port))) ;
switch ( IQYAELA.mode )
{ 
case 2: /* REF STRUCT(MODE211,MODE185)  */
JQYAELA_pmm = (IQYAELA.data.mode2);
 /* line 2199: */
 /* line 2200: */
KQYAELA = (*(&(JQYAELA_pmm->Port)));
break;
default: 
KQYAELA = A_UNITE(LQYAELA,mode3,3,DRCAELA_flt);
break;
} 
XLPAELA_portinfo = KQYAELA;
 /* line 2201: */
 /* line 2202: */
YLPAELA_portstack = (*(&(YLPAELA_portstack->Rest)));
} 
A_PROC_EXIT(dynindex2);
return;
} 
#undef NL

A68_VOID  MQYAELA_joinrep(void)
{ 
A68_INT  NQYAELA_size;
A68_218 * OQYAELA;  /* YIELD */
A68_210  PQYAELA;  /* OPERATORS - mode -> union mode */
A68_216 * QQYAELA_jrr;
A68_461  SQYAELA_generator;   /* proc value of non-global proc */
A68_221  XQYAELA;  /* avoid structure result */
A68_221 * YQYAELA;  /* YIELD */
A68_INT  ZQYAELA_step;
A68_INT  ARYAELA;  /* to part of loop */
A68_221  BRYAELA;  /* OPERATORS - simple index */
A68_210 * CRYAELA;  /* YIELD */
A68_210 * DRYAELA;  /* YIELD */
A68_210  ERYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(joinrep);
{ 
NQYAELA_size = HDRAELA_giveint((*(&(DOPAELA_integerstack->I))));
 /* line 2207: */
 /* line 2208: */
if ( (NQYAELA_size<0) )
{ 
AEVAELA_mark_join((&VMPAELA_joinup), RRCAELA_jcheck, ANPAELA_lhsjoin);
 /* line 2209: */
 /* line 2210: */
OQYAELA = A_HEAP(A68_218 ) ;
(*OQYAELA) = RRCAELA_jcheck ;
VMPAELA_joinup = A_UNITE(PQYAELA,mode5,5,OQYAELA);
} 
else
{ 
QQYAELA_jrr = (A_HEAP(A68_216 ));
 /* line 2211: */
A_CLOSURE( SQYAELA_generator, TQYAELA_generator, UQYAELA_generator );
(( UQYAELA_generator * ) ( SQYAELA_generator.nonlocals )) -> NQYAELA_size = NQYAELA_size;
A_CALLPROC(SQYAELA_generator,(A68_FALSE, &XQYAELA),(A68_FALSE, &XQYAELA,(SQYAELA_generator).nonlocals));
YQYAELA = (&(QQYAELA_jrr->Jrow)) ;
(*YQYAELA) = XQYAELA;
 /* line 2212: */
 /* line 2213: */
ARYAELA = NQYAELA_size;
for ( ZQYAELA_step = 1;
ZQYAELA_step <= ARYAELA;
ZQYAELA_step += 1 )
{ 
 /* line 2214: */
 /* line 2215: */
BRYAELA = (*(&(QQYAELA_jrr->Jrow))) ;
CRYAELA = A_HEAP(A68_210 ) ;
DRYAELA = (&A_VINDEX(BRYAELA,ZQYAELA_step)) ;
(*DRYAELA) = (*CRYAELA) = VMPAELA_joinup;
}
 /* line 2216: */
 /* line 2217: */
 /* line 2218: */
VMPAELA_joinup = A_UNITE(ERYAELA,mode3,3,QQYAELA_jrr);
} 
} 
A_PROC_EXIT(joinrep);
return;
} 
#undef NL

A68_VOID  FRYAELA_vrowpr(void)
{ 
A68_263  GRYAELA;  /* OPERATORS - unite union */
A68_262  HRYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  IRYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  JRYAELA;  /* YIELD */
A68_BOOL  KRYAELA_insequence;
A68_32  LRYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  MRYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  NRYAELA;  /* avoid structure result */
A68_179  ORYAELA;  /* collateral clause result */
A68_179 * PRYAELA;  /* YIELD */
A68_172  QRYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(vrowpr);
{ 
SLPAELA_integer = (*(&(DOPAELA_integerstack->I)));
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 2222: */
RKPAELA_fp5 = SLPAELA_integer;
 /* line 2223: */
 /* line 2224: */
JRYAELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(IRYAELA,mode1,1,JRYAELA), 67, A_HVEC(HRYAELA,A_UTABUNITE(GRYAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 2225: */
KRYAELA_insequence = ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq);
 /* line 2226: */
if ( KRYAELA_insequence )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(LRYAELA,GNCAELA_seqrow,A68_INT )),(A_HVEC(LRYAELA,GNCAELA_seqrow,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(MRYAELA,PKCAELA_vrow,A68_INT )),(A_HVEC(MRYAELA,PKCAELA_vrow,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 2227: */
if ( MJQAELA_loadint(SLPAELA_integer, A68_FALSE) )
{ 
DSDAELA_uncheckedint( SLPAELA_integer, &NRYAELA );
SLPAELA_integer = NRYAELA;
} 
 /* line 2228: */
if ( !KRYAELA_insequence )
{ 
ORYAELA.T = RLPAELA_type;
ORYAELA.Size = SLPAELA_integer;
 /* line 2229: */
PRYAELA = A_HEAP(A68_179 ) ;
(*PRYAELA) = ORYAELA ;
RLPAELA_type = A_UNITE(QRYAELA,mode7,7,PRYAELA);
} 
} 
A_PROC_EXIT(vrowpr);
return;
} 
#undef NL

A68_VOID  RRYAELA_varmult1(void)
{ 
A68_INT  SRYAELA;  /* clause result */
A68_INT  TRYAELA_tok;
A68_199  URYAELA;  /* OPERATORS - mode -> union mode */
A68_317  VRYAELA;  /* collateral clause result */
A68_317 * WRYAELA;  /* YIELD */
A_PROC_ENTRY(varmult1);
{ 
if ( ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq) )
{ 
SRYAELA = YMCAELA_seqvarmult;
} 
else
{ 
SRYAELA = VKCAELA_vvarmult;
} 
TRYAELA_tok = SRYAELA;
 /* line 2233: */
MTUAELA_newscope(TRYAELA_tok, OLPAELA_ids, PLPAELA_fns);
 /* line 2234: */
BTUAELA_newid(CIPAELA_ident, A_UNITE(URYAELA,mode9,9,HRCAELA_rec));
 /* line 2235: */
VRYAELA.Ids = OLPAELA_ids;
VRYAELA.Macsort = KMPAELA_macsort;
VRYAELA.Xno = GKPAELA_cintno+=1;
VRYAELA.New = A68_FALSE;
 /* line 2236: */
VRYAELA.Rest = ZNPAELA_iddecs;
WRYAELA = A_HEAP(A68_317 ) ;
(*WRYAELA) = VRYAELA ;
ZNPAELA_iddecs = WRYAELA;
} 
A_PROC_EXIT(varmult1);
return;
} 
#undef NL

A68_VOID  XRYAELA_varmult2(void)
{ 
A68_449  YRYAELA;  /* collateral clause result */
A68_263  ZRYAELA;  /* OPERATORS - mode -> union mode */
A68_263  ASYAELA;  /* OPERATORS - unite union */
A68_263  BSYAELA;  /* OPERATORS - unite union */
A68_262  CSYAELA;  /* OPERATORS - istruct -> vector */
A68_185  DSYAELA_lwb;
A68_185  ESYAELA_upb;
A68_185  FSYAELA_uncheck_lwb;
A68_185  GSYAELA_uncheck_upb;
A68_INT  HSYAELA_state;
A68_185  ISYAELA;  /* avoid structure result */
A68_185  JSYAELA;  /* avoid structure result */
A68_INT  KSYAELA;  /* clause result */
A68_INT  LSYAELA_tok;
A68_396  MSYAELA;  /* collateral clause result */
A68_32  NSYAELA;  /* OPERATORS - istruct -> vector */
A68_185  OSYAELA;  /* avoid structure result */
A68_185  PSYAELA;  /* avoid structure result */
A68_190  QSYAELA;  /* collateral clause result */
A68_190 * RSYAELA;  /* YIELD */
A68_185  SSYAELA;  /* OPERATORS - mode -> union mode */
A68_190  TSYAELA;  /* collateral clause result */
A68_185  USYAELA;  /* OPERATORS - mode -> union mode */
A68_INT  VSYAELA;  /* YIELD */
A68_190 * WSYAELA;  /* YIELD */
A68_185  XSYAELA;  /* OPERATORS - mode -> union mode */
A68_185  YSYAELA;  /* avoid structure result */
A68_185 * ZSYAELA;  /* YIELD */
A68_193  ATYAELA;  /* collateral clause result */
A68_185  BTYAELA;  /* OPERATORS - mode -> union mode */
A68_193 * CTYAELA;  /* YIELD */
A68_185  DTYAELA;  /* OPERATORS - mode -> union mode */
A68_185 * ETYAELA;  /* YIELD */
A68_199  FTYAELA;  /* OPERATORS - mode -> union mode */
A68_185  GTYAELA;  /* OPERATORS - mode -> union mode */
A68_185 * HTYAELA;  /* YIELD */
A_PROC_ENTRY(varmult2);
{ 
LKPAELA_fp3 = (*(&((*(&(OLPAELA_ids->Idinfo)))->Id)));
RKPAELA_fp5 = (*(&(DOPAELA_integerstack->I)));
 /* line 2241: */
SKPAELA_fp6 = SLPAELA_integer;
 /* line 2242: */
 /* line 2244: */
YRYAELA.data[0] = A_UNITE(ZRYAELA,mode13,13,LKPAELA_fp3);
YRYAELA.data[1] = A_UTABUNITE(ASYAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
YRYAELA.data[2] = A_UTABUNITE(BSYAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(BWRAELA_checkle, (&(DOPAELA_integerstack->I)), SLPAELA_integer, 110, A_HISVEC(CSYAELA,YRYAELA,3,A68_263 ));
 /* line 2245: */
DSYAELA_lwb = (*(&(DOPAELA_integerstack->I)));
 /* line 2246: */
ESYAELA_upb = SLPAELA_integer;
 /* line 2248: */
 /* line 2249: */
HSYAELA_state = (*(&(DNPAELA_currentstate->State)));
 /* line 2250: */
 /* line 2251: */
if ( (HSYAELA_state==YPCAELA_inconst) )
{ 
DSDAELA_uncheckedint( DSYAELA_lwb, &ISYAELA );
FSYAELA_uncheck_lwb = ISYAELA;
 /* line 2252: */
 /* line 2253: */
DSDAELA_uncheckedint( ESYAELA_upb, &JSYAELA );
GSYAELA_uncheck_upb = JSYAELA;
} 
else
{ 
if ( (HSYAELA_state==WPCAELA_inseq) )
{ 
KSYAELA = YMCAELA_seqvarmult;
} 
else
{ 
KSYAELA = VKCAELA_vvarmult;
} 
LSYAELA_tok = KSYAELA;
 /* line 2254: */
MSYAELA.data[0] = LSYAELA_tok;
MSYAELA.data[1] = (*(&(ZNPAELA_iddecs->Xno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(NSYAELA,MSYAELA,2,A68_INT )),(A_HISVEC(NSYAELA,MSYAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2255: */
A_CALLPROC(WOPAELA_outid,((*(&((*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)))->Id)))),((*(&((*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 2256: */
XQQAELA_outattrs((*(&((*(&(ZNPAELA_iddecs->Ids)))->Attr))));
 /* line 2257: */
if ( MJQAELA_loadint(DSYAELA_lwb, A68_FALSE) )
{ 
DSDAELA_uncheckedint( DSYAELA_lwb, &OSYAELA );
DSYAELA_lwb = OSYAELA;
} 
 /* line 2258: */
if ( MJQAELA_loadint(ESYAELA_upb, A68_FALSE) )
{ 
DSDAELA_uncheckedint( ESYAELA_upb, &PSYAELA );
ESYAELA_upb = PSYAELA;
} 
 /* line 2259: */
FSYAELA_uncheck_lwb = DSYAELA_lwb;
 /* line 2260: */
 /* line 2261: */
GSYAELA_uncheck_upb = ESYAELA_upb;
} 
 /* line 2263: */
QSYAELA.Opno = HPCAELA_diminus;
QSYAELA.L = GSYAELA_uncheck_upb;
QSYAELA.R = FSYAELA_uncheck_lwb;
RSYAELA = A_HEAP(A68_190 ) ;
(*RSYAELA) = QSYAELA ;
SLPAELA_integer = A_UNITE(SSYAELA,mode7,7,RSYAELA);
 /* line 2264: */
TSYAELA.Opno = GPCAELA_diplus;
TSYAELA.L = SLPAELA_integer;
VSYAELA = 1 ;
TSYAELA.R = A_UNITE(USYAELA,mode1,1,VSYAELA);
WSYAELA = A_HEAP(A68_190 ) ;
(*WSYAELA) = TSYAELA ;
CDRAELA_simplify( A_UNITE(XSYAELA,mode7,7,WSYAELA), A68_FALSE, &YSYAELA );
ZSYAELA = (&(DOPAELA_integerstack->I)) ;
(*ZSYAELA) = YSYAELA;
 /* line 2266: */
ATYAELA.Varmultno = (*(&(ZNPAELA_iddecs->Xno)));
ATYAELA.Lwb = DSYAELA_lwb;
ATYAELA.Upb = ESYAELA_upb;
ATYAELA.Index = A_UNITE(BTYAELA,mode4,4,DRCAELA_flt);
CTYAELA = A_HEAP(A68_193 ) ;
(*CTYAELA) = ATYAELA ;
ETYAELA = (&((&WNPAELA_intid)->I)) ;
(*ETYAELA) = A_UNITE(DTYAELA,mode10,10,CTYAELA);
 /* line 2267: */
UIQAELA_setidunn((*(&((*(&(ZNPAELA_iddecs->Ids)))->Idinfo))), A_UNITE(FTYAELA,mode1,1,WNPAELA_intid));
 /* line 2268: */
HTYAELA = (&((&WNPAELA_intid)->I)) ;
(*HTYAELA) = A_UNITE(GTYAELA,mode4,4,DRCAELA_flt);
} 
A_PROC_EXIT(varmult2);
return;
} 
#undef NL

A68_VOID  ITYAELA_varmult3(void)
{ 
A68_172  JTYAELA;  /* united object - for case conformity */
A68_182  KTYAELA_f;
A68_172  LTYAELA;  /* clause result */
A68_172  MTYAELA;  /* OPERATORS - mode -> union mode */
A68_210  NTYAELA;  /* avoid structure result */
A68_241  OTYAELA;  /* collateral clause result */
A68_241 * PTYAELA;  /* YIELD */
A68_222  QTYAELA;  /* OPERATORS - mode -> union mode */
A68_179  RTYAELA;  /* collateral clause result */
A68_179 * STYAELA;  /* YIELD */
A68_172  TTYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(varmult3);
JTYAELA = RLPAELA_type ;
switch ( JTYAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
KTYAELA_f = (JTYAELA.data.mode10);
 /* line 2272: */
/*SKIP*/;
break;
default: 
 /* line 2273: */
if ( VDTAELA_thasvmno(RLPAELA_type, (*(&(ZNPAELA_iddecs->Xno)))) )
{ 
UQPAELA_fault(95, VJAAOSI_nullmsg);
 /* line 2275: */
 /* line 2276: */
 /* line 2277: */
LTYAELA = A_UNITE(MTYAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 2278: */
if ( !((*(&(DNPAELA_currentstate->State)))==YPCAELA_inconst) )
{ 
 /* line 2279: */
UTVAELA_varmult_joinup( ZNPAELA_iddecs, VMPAELA_joinup, &NTYAELA );
VMPAELA_joinup = NTYAELA;
} 
else
{ 
OTYAELA.Ids = (*(&(ZNPAELA_iddecs->Ids)));
 /* line 2280: */
OTYAELA.Ct = OMPAELA_ctype;
PTYAELA = A_HEAP(A68_241 ) ;
(*PTYAELA) = OTYAELA ;
OMPAELA_ctype = A_UNITE(QTYAELA,mode22,22,PTYAELA);
} 
 /* line 2281: */
RTYAELA.T = RLPAELA_type;
 /* line 2282: */
RTYAELA.Size = (*(&(DOPAELA_integerstack->I)));
 /* line 2283: */
STYAELA = A_HEAP(A68_179 ) ;
(*STYAELA) = RTYAELA ;
LTYAELA = A_UNITE(TTYAELA,mode7,7,STYAELA);
} 
RLPAELA_type = LTYAELA;
break;
} 
A_PROC_EXIT(varmult3);
return;
} 
#undef NL

A68_VOID  UTYAELA_varmult4(void)
{ 
A68_INT  VTYAELA_state;
A68_32  WTYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  XTYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(varmult4);
{ 
KLVAELA_unscope((&ENPAELA_scopestack), (&OLPAELA_ids), (&PLPAELA_fns));
 /* line 2287: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 2288: */
ZNPAELA_iddecs = (*(&(ZNPAELA_iddecs->Rest)));
 /* line 2289: */
VTYAELA_state = (*(&(DNPAELA_currentstate->State)));
 /* line 2290: */
if ( (VTYAELA_state==WPCAELA_inseq) )
{ 
 /* line 2291: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(WTYAELA,JNCAELA_seqvarmultend,A68_INT )),(A_HVEC(WTYAELA,JNCAELA_seqvarmultend,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
if ( (VTYAELA_state==XPCAELA_inpar) )
{ 
 /* line 2292: */
 /* line 2293: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(XTYAELA,RLCAELA_vvarmultend,A68_INT )),(A_HVEC(XTYAELA,RLCAELA_vvarmultend,A68_INT ),(VOPAELA_outints).nonlocals));
} 
} 
} 
A_PROC_EXIT(varmult4);
return;
} 
#undef NL

A68_VOID  YTYAELA_for(void)
{ 
A68_32  ZTYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(for);
A_CALLPROC(VOPAELA_outints,(A_HVEC(ZTYAELA,CLCAELA_bfor,A68_INT )),(A_HVEC(ZTYAELA,CLCAELA_bfor,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(for);
return;
} 
#undef NL

A68_VOID  AUYAELA_checkconc(void)
{ 
A68_BOOL  BUYAELA;  /* optbool result */
A68_VC  JUYAELA;  /* avoid structure result */
A68_VC  LUYAELA;  /* OPERATORS - assign op */
A68_445  MUYAELA;  /* collateral clause result */
A68_263  NUYAELA;  /* OPERATORS - mode -> union mode */
A68_263  OUYAELA;  /* OPERATORS - mode -> union mode */
A68_262  PUYAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(checkconc);
BUYAELA = A_VC_NE(MMPAELA_lastcall,TTCAOST_nullid);
if ( BUYAELA )
{ /* line 2301: */
BUYAELA = A_VC_NE(MMPAELA_lastcall,DUYAELA);
}
if ( BUYAELA )
{ 
LKPAELA_fp3 = MMPAELA_lastcall;
FUYAELA_generator( A68_FALSE, &JUYAELA );
LUYAELA = KUYAELA ;
A_VASSIGN2(LUYAELA,JUYAELA,A68_CHAR ) ;
MKPAELA_fp4 = JUYAELA;
 /* line 2302: */
 /* line 2303: */
MUYAELA.data[0] = A_UNITE(NUYAELA,mode13,13,LKPAELA_fp3);
MUYAELA.data[1] = A_UNITE(OUYAELA,mode13,13,MKPAELA_fp4);
 /* line 2304: */
SZPAELA_faultp(117, A_HISVEC(PUYAELA,MUYAELA,2,A68_263 ));
} 
A_PROC_EXIT(checkconc);
return;
} 
#undef NL

A68_VOID  QUYAELA_conc(void)
{ 
A68_INT  RUYAELA_sort;
A68_BOOL  SUYAELA_stringbool;
A68_172  TUYAELA;  /* avoid structure result */
A68_210  UUYAELA_j1;
A68_210  VUYAELA_j2;
A68_INT  WUYAELA_size;
A68_216 * XUYAELA_jr;
A68_210  YUYAELA;  /* united object - for case conformity */
A68_214 * ZUYAELA_jst;
A68_210  AVYAELA;  /* avoid structure result */
A68_210  BVYAELA;  /* united object - for case conformity */
A68_214 * CVYAELA_jst;
A68_210  DVYAELA;  /* avoid structure result */
A68_172  EVYAELA;  /* united object - for case conformity */
A68_210  FVYAELA;  /* clause result */
A68_210  GVYAELA;  /* OPERATORS - mode -> union mode */
A68_210  HVYAELA;  /* united object - for case conformity */
A68_216 * IVYAELA_jr1;
A68_461  KVYAELA_generator;   /* proc value of non-global proc */
A68_221  QVYAELA;  /* avoid structure result */
A68_221  PVYAELA_jj;
A68_INT  RVYAELA_i;
A68_INT  SVYAELA;  /* to part of loop */
A68_221  TVYAELA;  /* OPERATORS - simple index */
A68_210 * UVYAELA;  /* YIELD */
A68_210 * VVYAELA;  /* YIELD */
A68_210 * WVYAELA;  /* YIELD */
A68_210 * XVYAELA;  /* YIELD */
A68_221 * YVYAELA;  /* YIELD */
A68_210  ZVYAELA;  /* OPERATORS - mode -> union mode */
A68_210  AWYAELA;  /* OPERATORS - mode -> union mode */
A68_210  BWYAELA;  /* united object - for case conformity */
A68_216 * CWYAELA_jr2;
A68_461  EWYAELA_generator;   /* proc value of non-global proc */
A68_221  KWYAELA;  /* avoid structure result */
A68_221  JWYAELA_jj;
A68_INT  LWYAELA_i;
A68_INT  MWYAELA;  /* to part of loop */
A68_221  NWYAELA;  /* OPERATORS - simple index */
A68_INT  OWYAELA;  /* YIELD */
A68_210 * PWYAELA;  /* YIELD */
A68_210 * QWYAELA;  /* YIELD */
A68_INT  RWYAELA;  /* YIELD */
A68_210 * SWYAELA;  /* YIELD */
A68_210 * TWYAELA;  /* YIELD */
A68_221 * UWYAELA;  /* YIELD */
A68_210  VWYAELA;  /* OPERATORS - mode -> union mode */
A68_210  WWYAELA;  /* OPERATORS - mode -> union mode */
A68_210  XWYAELA;  /* united object - for case conformity */
A68_216 * YWYAELA_jr1;
A68_210  ZWYAELA;  /* united object - for case conformity */
A68_216 * AXYAELA_jr2;
A68_INT  BXYAELA_size;
A68_461  DXYAELA_generator;   /* proc value of non-global proc */
A68_221  JXYAELA;  /* avoid structure result */
A68_221  IXYAELA_jj;
A68_INT  KXYAELA_i;
A68_INT  LXYAELA;  /* to part of loop */
A68_221  MXYAELA;  /* OPERATORS - simple index */
A68_210 * NXYAELA;  /* YIELD */
A68_210 * OXYAELA;  /* YIELD */
A68_INT  PXYAELA_i;
A68_INT  QXYAELA;  /* to part of loop */
A68_INT  RXYAELA;  /* YIELD */
A68_221  SXYAELA;  /* OPERATORS - simple index */
A68_210 * TXYAELA;  /* YIELD */
A68_210 * UXYAELA;  /* YIELD */
A68_221 * VXYAELA;  /* YIELD */
A68_210  WXYAELA;  /* OPERATORS - mode -> union mode */
A68_210  XXYAELA;  /* OPERATORS - mode -> union mode */
A68_210  YXYAELA;  /* OPERATORS - mode -> union mode */
A68_210  ZXYAELA;  /* OPERATORS - mode -> union mode */
A68_210  AYYAELA;  /* united object - for case conformity */
A68_444  BYYAELA;  /* collateral clause result */
A68_32  CYYAELA;  /* OPERATORS - istruct -> vector */
A68_31  EYYAELA_generator;   /* proc value of non-global proc */
A68_VC  KYYAELA;  /* avoid structure result */
A68_VC  MYYAELA;  /* OPERATORS - assign op */
A_PROC_ENTRY(conc);
{ 
RUYAELA_sort = (-1);
SUYAELA_stringbool = A68_FALSE;
 /* line 2308: */
BDUAELA_conc_type( (*(&(COPAELA_typestack->T))), RLPAELA_type, (&SUYAELA_stringbool), (&RUYAELA_sort), &TUYAELA );
RLPAELA_type = TUYAELA;
 /* line 2310: */
UUYAELA_j1 = (*(&(QMPAELA_joinstack->Joinup)));
VUYAELA_j2 = VMPAELA_joinup;
 /* line 2311: */
QMPAELA_joinstack = (*(&(QMPAELA_joinstack->Rest)));
 /* line 2312: */
XUYAELA_jr = (A_HEAP(A68_216 ));
 /* line 2313: */
YUYAELA = UUYAELA_j1 ;
switch ( YUYAELA.mode )
{ 
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
ZUYAELA_jst = (YUYAELA.data.mode1);
MFVAELA_joinsttorow( ZUYAELA_jst, &AVYAELA );
UUYAELA_j1 = AVYAELA;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 2314: */
BVYAELA = VUYAELA_j2 ;
switch ( BVYAELA.mode )
{ 
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
CVYAELA_jst = (BVYAELA.data.mode1);
MFVAELA_joinsttorow( CVYAELA_jst, &DVYAELA );
VUYAELA_j2 = DVYAELA;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 2315: */
 /* line 2316: */
 /* line 2317: */
EVYAELA = RLPAELA_type ;
switch ( EVYAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 2318: */
FVYAELA = A_UNITE(GVYAELA,mode7,7,DRCAELA_flt);
break;
default: 
 /* line 2319: */
if ( (RUYAELA_sort==1) )
{ 
 /* line 2320: */
HVYAELA = UUYAELA_j1 ;
switch ( HVYAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE221)  */
IVYAELA_jr1 = (HVYAELA.data.mode3);
 /* line 2321: */
{ 
WUYAELA_size = (1+(*(&(IVYAELA_jr1->Jrow))).upb);
 /* line 2322: */
A_CLOSURE( KVYAELA_generator, LVYAELA_generator, MVYAELA_generator );
(( MVYAELA_generator * ) ( KVYAELA_generator.nonlocals )) -> WUYAELA_size = (&WUYAELA_size);
A_CALLPROC(KVYAELA_generator,(A68_FALSE, &QVYAELA),(A68_FALSE, &QVYAELA,(KVYAELA_generator).nonlocals));
PVYAELA_jj = QVYAELA;
 /* line 2323: */
 /* line 2324: */
SVYAELA = (WUYAELA_size-1);
for ( RVYAELA_i = 1;
RVYAELA_i <= SVYAELA;
RVYAELA_i += 1 )
{ 
TVYAELA = (*(&(IVYAELA_jr1->Jrow))) ;
UVYAELA = A_HEAP(A68_210 ) ;
VVYAELA = (&A_VINDEX(PVYAELA_jj,RVYAELA_i)) ;
(*VVYAELA) = (*UVYAELA) = (*(&A_VINDEX(TVYAELA,RVYAELA_i)));
}
 /* line 2325: */
WVYAELA = A_HEAP(A68_210 ) ;
XVYAELA = (&A_VINDEX(PVYAELA_jj,WUYAELA_size)) ;
(*XVYAELA) = (*WVYAELA) = VUYAELA_j2;
 /* line 2326: */
YVYAELA = (&(XUYAELA_jr->Jrow)) ;
(*YVYAELA) = PVYAELA_jj;
 /* line 2327: */
 /* line 2328: */
 /* line 2329: */
 /* line 2330: */
FVYAELA = A_UNITE(ZVYAELA,mode3,3,XUYAELA_jr);
} 
break;
default: 
 /* line 2331: */
FVYAELA = A_UNITE(AWYAELA,mode7,7,DRCAELA_flt);
break;
} 
} 
else
{ 
 /* line 2332: */
if ( (RUYAELA_sort==2) )
{ 
 /* line 2333: */
BWYAELA = VUYAELA_j2 ;
switch ( BWYAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE221)  */
CWYAELA_jr2 = (BWYAELA.data.mode3);
 /* line 2334: */
{ 
WUYAELA_size = (1+(*(&(CWYAELA_jr2->Jrow))).upb);
 /* line 2335: */
A_CLOSURE( EWYAELA_generator, FWYAELA_generator, GWYAELA_generator );
(( GWYAELA_generator * ) ( EWYAELA_generator.nonlocals )) -> WUYAELA_size = (&WUYAELA_size);
A_CALLPROC(EWYAELA_generator,(A68_FALSE, &KWYAELA),(A68_FALSE, &KWYAELA,(EWYAELA_generator).nonlocals));
JWYAELA_jj = KWYAELA;
 /* line 2336: */
 /* line 2337: */
MWYAELA = WUYAELA_size;
for ( LWYAELA_i = 2;
LWYAELA_i <= MWYAELA;
LWYAELA_i += 1 )
{ 
NWYAELA = (*(&(CWYAELA_jr2->Jrow))) ;
OWYAELA = (LWYAELA_i-1) ;
PWYAELA = A_HEAP(A68_210 ) ;
QWYAELA = (&A_VINDEX(JWYAELA_jj,LWYAELA_i)) ;
(*QWYAELA) = (*PWYAELA) = (*(&A_VINDEX(NWYAELA,OWYAELA)));
}
 /* line 2338: */
RWYAELA = 1 ;
SWYAELA = A_HEAP(A68_210 ) ;
TWYAELA = (&A_VINDEX(JWYAELA_jj,RWYAELA)) ;
(*TWYAELA) = (*SWYAELA) = UUYAELA_j1;
 /* line 2339: */
UWYAELA = (&(XUYAELA_jr->Jrow)) ;
(*UWYAELA) = JWYAELA_jj;
 /* line 2340: */
 /* line 2341: */
 /* line 2342: */
 /* line 2343: */
FVYAELA = A_UNITE(VWYAELA,mode3,3,XUYAELA_jr);
} 
break;
default: 
 /* line 2344: */
FVYAELA = A_UNITE(WWYAELA,mode7,7,DRCAELA_flt);
break;
} 
} 
else
{ 
 /* line 2345: */
if ( (RUYAELA_sort==3) )
{ 
 /* line 2346: */
XWYAELA = UUYAELA_j1 ;
switch ( XWYAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE221)  */
YWYAELA_jr1 = (XWYAELA.data.mode3);
 /* line 2347: */
 /* line 2348: */
ZWYAELA = VUYAELA_j2 ;
switch ( ZWYAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE221)  */
AXYAELA_jr2 = (ZWYAELA.data.mode3);
 /* line 2349: */
{ 
BXYAELA_size = ((*(&(YWYAELA_jr1->Jrow))).upb+(*(&(AXYAELA_jr2->Jrow))).upb);
 /* line 2350: */
A_CLOSURE( DXYAELA_generator, EXYAELA_generator, FXYAELA_generator );
(( FXYAELA_generator * ) ( DXYAELA_generator.nonlocals )) -> BXYAELA_size = (&BXYAELA_size);
A_CALLPROC(DXYAELA_generator,(A68_FALSE, &JXYAELA),(A68_FALSE, &JXYAELA,(DXYAELA_generator).nonlocals));
IXYAELA_jj = JXYAELA;
 /* line 2351: */
 /* line 2352: */
LXYAELA = (*(&(YWYAELA_jr1->Jrow))).upb;
for ( KXYAELA_i = 1;
KXYAELA_i <= LXYAELA;
KXYAELA_i += 1 )
{ 
MXYAELA = (*(&(YWYAELA_jr1->Jrow))) ;
NXYAELA = A_HEAP(A68_210 ) ;
OXYAELA = (&A_VINDEX(IXYAELA_jj,KXYAELA_i)) ;
(*OXYAELA) = (*NXYAELA) = (*(&A_VINDEX(MXYAELA,KXYAELA_i)));
}
 /* line 2353: */
 /* line 2354: */
QXYAELA = (*(&(AXYAELA_jr2->Jrow))).upb;
for ( PXYAELA_i = 1;
PXYAELA_i <= QXYAELA;
PXYAELA_i += 1 )
{ 
 /* line 2355: */
RXYAELA = (PXYAELA_i+(*(&(YWYAELA_jr1->Jrow))).upb) ;
SXYAELA = (*(&(AXYAELA_jr2->Jrow))) ;
TXYAELA = A_HEAP(A68_210 ) ;
UXYAELA = (&A_VINDEX(IXYAELA_jj,RXYAELA)) ;
(*UXYAELA) = (*TXYAELA) = (*(&A_VINDEX(SXYAELA,PXYAELA_i)));
}
 /* line 2356: */
VXYAELA = (&(XUYAELA_jr->Jrow)) ;
(*VXYAELA) = IXYAELA_jj;
 /* line 2357: */
 /* line 2358: */
 /* line 2359: */
 /* line 2360: */
FVYAELA = A_UNITE(WXYAELA,mode3,3,XUYAELA_jr);
} 
break;
default: 
 /* line 2361: */
 /* line 2362: */
FVYAELA = A_UNITE(XXYAELA,mode7,7,DRCAELA_flt);
break;
} 
break;
default: 
 /* line 2363: */
 /* line 2364: */
FVYAELA = A_UNITE(YXYAELA,mode7,7,DRCAELA_flt);
break;
} 
} 
else
{ 
 /* line 2365: */
FVYAELA = A_UNITE(ZXYAELA,mode7,7,DRCAELA_flt);
} 
} 
} 
break;
} 
VMPAELA_joinup = FVYAELA;
 /* line 2366: */
 /* line 2367: */
AYYAELA = VMPAELA_joinup ;
switch ( AYYAELA.mode )
{ 
case 7: /* STRUCT(INT)  */
{ 
AEVAELA_mark_join((&UUYAELA_j1), SRCAELA_jfault, A68_FALSE);
 /* line 2368: */
 /* line 2369: */
AEVAELA_mark_join((&VUYAELA_j2), SRCAELA_jfault, A68_FALSE);
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 2371: */
BYYAELA.data[0] = FKCAELA_vconc;
BYYAELA.data[1] = (SUYAELA_stringbool);
BYYAELA.data[2] = RUYAELA_sort;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(CYYAELA,BYYAELA,3,A68_INT )),(A_HISVEC(CYYAELA,BYYAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2372: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
LLPAELA_vss-=1;
 /* line 2373: */
A_CLOSURE( EYYAELA_generator, FYYAELA_generator, GYYAELA_generator );
 /* line 2374: */
A_CALLPROC(EYYAELA_generator,(A68_FALSE, &KYYAELA),(A68_FALSE, &KYYAELA,(EYYAELA_generator).nonlocals));
MYYAELA = LYYAELA ;
A_VASSIGN2(MYYAELA,KYYAELA,A68_CHAR ) ;
MMPAELA_lastcall = KYYAELA;
} 
A_PROC_EXIT(conc);
return;
} 
#undef NL

A68_VOID  NYYAELA_coll(void)
{ 
A68_32  OYYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  PYYAELA;  /* OPERATORS - mode -> union mode */
A68_396  QYYAELA;  /* collateral clause result */
A68_32  RYYAELA;  /* OPERATORS - istruct -> vector */
A68_210  SYYAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(coll);
 /* line 2379: */
if ( ((*(&(EMPAELA_sts->Rest)))==DQCAELA_nilst) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(OYYAELA,IMCAELA_vbracket,A68_INT )),(A_HVEC(OYYAELA,IMCAELA_vbracket,A68_INT ),(VOPAELA_outints).nonlocals));
RLPAELA_type = (*(&(EMPAELA_sts->T)));
 /* line 2380: */
 /* line 2381: */
VMPAELA_joinup = (*(&(SMPAELA_joinst->Jst)));
} 
else
{ 
RLPAELA_type = A_UNITE(PYYAELA,mode3,3,EMPAELA_sts);
 /* line 2382: */
QYYAELA.data[0] = SKCAELA_vcoll;
QYYAELA.data[1] = ULPAELA_k;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(RYYAELA,QYYAELA,2,A68_INT )),(A_HISVEC(RYYAELA,QYYAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
LLPAELA_vss-=(ULPAELA_k-1);
 /* line 2383: */
 /* line 2384: */
VMPAELA_joinup = A_UNITE(SYYAELA,mode1,1,SMPAELA_joinst);
} 
A_PROC_EXIT(coll);
return;
} 
#undef NL

A68_VOID  TYYAELA_bracket(void)
{ 
A68_BOOL  UYYAELA;  /* optbool result */
A68_185  VYYAELA;  /* OPERATORS - mode -> union mode */
A68_196 * WYYAELA;  /* YIELD */
A68_172  XYYAELA;  /* OPERATORS - mode -> union mode */
A68_180 * YYYAELA;  /* YIELD */
A68_172  ZYYAELA;  /* OPERATORS - mode -> union mode */
A68_180 * AZYAELA;  /* YIELD */
A68_222  BZYAELA;  /* OPERATORS - mode -> union mode */
A68_231 * CZYAELA;  /* YIELD */
A68_170  DZYAELA;  /* united object - for case conformity */
A68_170  EZYAELA;  /* OPERATORS - mode -> union mode */
A68_170  FZYAELA;  /* OPERATORS - mode -> union mode */
A68_257 * GZYAELA;  /* YIELD */
A_PROC_ENTRY(bracket);
UYYAELA = (BMPAELA_which==JXCAELA_winteger);
if ( ! UYYAELA )
{ /* line 2388: */
UYYAELA = (BMPAELA_which==IXCAELA_wbool);
}
if ( UYYAELA )
{ 
 /* line 2389: */
WYYAELA = DKDAELA_makeibracket(SLPAELA_integer) ;
SLPAELA_integer = A_UNITE(VYYAELA,mode13,13,WYYAELA);
} 
else
{ 
 /* line 2390: */
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
 /* line 2391: */
YYYAELA = IKDAELA_maketbracket(RLPAELA_type) ;
RLPAELA_type = A_UNITE(XYYAELA,mode8,8,YYYAELA);
} 
else
{ 
 /* line 2392: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
AZYAELA = IKDAELA_maketbracket(RLPAELA_type) ;
RLPAELA_type = A_UNITE(ZYYAELA,mode8,8,AZYAELA);
 /* line 2393: */
 /* line 2394: */
CZYAELA = NKDAELA_makecbracket(OMPAELA_ctype) ;
OMPAELA_ctype = A_UNITE(BZYAELA,mode12,12,CZYAELA);
} 
else
{ 
 /* line 2395: */
if ( (BMPAELA_which==OXCAELA_wattr) )
{ 
 /* line 2396: */
DZYAELA = FJPAELA_attr ;
switch ( DZYAELA.mode )
{ 
case 3: /* REF STRUCT(MODE170,REF MODE256)  */
case 4: /* REF STRUCT(MODE170)  */
 /* line 2397: */
{ 
 /* line 2398: */
UQPAELA_fault(239, VJAAOSI_nullmsg);
 /* line 2399: */
FJPAELA_attr = A_UNITE(EZYAELA,mode7,7,DRCAELA_flt);
 /* line 2400: */
 /* line 2401: */
BMPAELA_which = MXCAELA_wflt;
} 
break;
default: 
 /* line 2402: */
 /* line 2403: */
 /* line 2404: */
GZYAELA = SKDAELA_makeabracket(FJPAELA_attr) ;
FJPAELA_attr = A_UNITE(FZYAELA,mode4,4,GZYAELA);
break;
} 
} 
else
{ 
/*SKIP*/;
} 
} 
} 
} 
A_PROC_EXIT(bracket);
return;
} 
#undef NL

A68_VOID  HZYAELA_make1(void)
{ 
A68_32  IZYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_209 * JZYAELA_mint;
A68_185  KZYAELA;  /* avoid structure result */
A68_185 * LZYAELA;  /* YIELD */
A68_32  MZYAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_167 * NZYAELA_f;
A_PROC_ENTRY(make1);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(IZYAELA,ALCAELA_bmake,A68_INT )),(A_HVEC(IZYAELA,ALCAELA_bmake,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2408: */
JZYAELA_mint = DMPAELA_makeint;
 /* line 2409: */
for ( ;; )
{ 
 /* line 2410: */
if ( !((JZYAELA_mint!=GUCAELA_nilintegerstack)) ) break;
if ( MJQAELA_loadint((*(&(JZYAELA_mint->I))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(JZYAELA_mint->I))), &KZYAELA );
LZYAELA = (&(JZYAELA_mint->I)) ;
(*LZYAELA) = KZYAELA;
} 
 /* line 2411: */
 /* line 2412: */
JZYAELA_mint = (*(&(JZYAELA_mint->Rest)));
}
 /* line 2413: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(MZYAELA,HJCAELA_zero,A68_INT )),(A_HVEC(MZYAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2414: */
NZYAELA_f = (*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)));
 /* line 2415: */
HLQAELA_loadtype((*(&(NZYAELA_f->Param))), A68_FALSE, A68_FALSE, A68_FALSE);
 /* line 2416: */
HLQAELA_loadtype((*(&(NZYAELA_f->Ans))), A68_FALSE, A68_FALSE, A68_FALSE);
 /* line 2417: */
 /* line 2418: */
UBRAELA_outfncall((*(*(&(GMPAELA_fncallstack->Fncall)))), A68_FALSE);
} 
A_PROC_EXIT(make1);
return;
} 
#undef NL

A68_VOID  OZYAELA_make2(void)
{ 
A68_268  PZYAELA_fncall;
A68_167 * QZYAELA_fd;
A68_209 * RZYAELA_mint;
A68_178  SZYAELA;  /* collateral clause result */
A68_178 * UZYAELA;  /* YIELD */
A68_172  VZYAELA;  /* OPERATORS - mode -> union mode */
A68_172  TZYAELA_t1;
A68_172  WZYAELA_jinput;
A68_172  XZYAELA_joutput;
A68_211  ZZYAELA;  /* OPERATORS - mode -> union mode */
A68_212 * AAZAELA;  /* YIELD */
A68_211  YZYAELA_pinput;
A68_211  CAZAELA;  /* OPERATORS - mode -> union mode */
A68_212 * DAZAELA;  /* YIELD */
A68_211  BAZAELA_poutput;
A68_179  EAZAELA;  /* collateral clause result */
A68_179 * FAZAELA;  /* YIELD */
A68_172  GAZAELA;  /* OPERATORS - mode -> union mode */
A68_213  HAZAELA;  /* collateral clause result */
A68_213 * IAZAELA;  /* YIELD */
A68_211  JAZAELA;  /* OPERATORS - mode -> union mode */
A68_213  KAZAELA;  /* collateral clause result */
A68_213 * LAZAELA;  /* YIELD */
A68_211  MAZAELA;  /* OPERATORS - mode -> union mode */
A68_179  NAZAELA;  /* collateral clause result */
A68_179 * OAZAELA;  /* YIELD */
A68_172  PAZAELA;  /* OPERATORS - mode -> union mode */
A68_179  QAZAELA;  /* collateral clause result */
A68_179 * RAZAELA;  /* YIELD */
A68_172  SAZAELA;  /* OPERATORS - mode -> union mode */
A68_204  TAZAELA;  /* collateral clause result */
A68_INT * UAZAELA;  /* YIELD */
A68_210  VAZAELA;  /* avoid structure result */
A68_210  WAZAELA;  /* avoid structure result */
A68_204 * XAZAELA;  /* YIELD */
A68_199  YAZAELA;  /* OPERATORS - mode -> union mode */
A68_396  ZAZAELA;  /* collateral clause result */
A68_32  ABZAELA;  /* OPERATORS - istruct -> vector */
A68_171  BBZAELA;  /* collateral clause result */
A68_172  CBZAELA;  /* OPERATORS - mode -> union mode */
A68_244  DBZAELA;  /* collateral clause result */
A68_170  EBZAELA;  /* OPERATORS - mode -> union mode */
A68_244 * FBZAELA;  /* YIELD */
A68_171 * GBZAELA;  /* YIELD */
A_PROC_ENTRY(make2);
{ 
PZYAELA_fncall = (*(*(&(GMPAELA_fncallstack->Fncall))));
 /* line 2423: */
QZYAELA_fd = PZYAELA_fncall.F;
 /* line 2424: */
RZYAELA_mint = DMPAELA_makeint;
 /* line 2425: */
SZYAELA.From = (*(&(QZYAELA_fd->Param)));
SZYAELA.To = (*(&(QZYAELA_fd->Ans)));
UZYAELA = A_HEAP(A68_178 ) ;
(*UZYAELA) = SZYAELA ;
TZYAELA_t1 = A_UNITE(VZYAELA,mode6,6,UZYAELA);
 /* line 2426: */
 /* line 2427: */
 /* line 2428: */
if ( ((*(&((*(&(QZYAELA_fd->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
WZYAELA_jinput = (*(&(QZYAELA_fd->Ans)));
 /* line 2429: */
XZYAELA_joutput = (*(&(QZYAELA_fd->Param)));
 /* line 2430: */
AAZAELA = LVVAELA_port_setup((*(&(QZYAELA_fd->Outputs))), PZYAELA_fncall) ;
YZYAELA_pinput = A_UNITE(ZZYAELA,mode1,1,AAZAELA);
 /* line 2431: */
DAZAELA = LVVAELA_port_setup((*(&(QZYAELA_fd->Inputs))), PZYAELA_fncall) ;
BAZAELA_poutput = A_UNITE(CAZAELA,mode1,1,DAZAELA);
 /* line 2432: */
for ( ;; )
{ 
 /* line 2433: */
if ( !((RZYAELA_mint!=GUCAELA_nilintegerstack)) ) break;
EAZAELA.T = TZYAELA_t1;
EAZAELA.Size = (*(&(RZYAELA_mint->I)));
FAZAELA = A_HEAP(A68_179 ) ;
(*FAZAELA) = EAZAELA ;
TZYAELA_t1 = A_UNITE(GAZAELA,mode7,7,FAZAELA);
 /* line 2434: */
HAZAELA.Port = YZYAELA_pinput;
HAZAELA.I = (*(&(RZYAELA_mint->I)));
IAZAELA = A_HEAP(A68_213 ) ;
(*IAZAELA) = HAZAELA ;
YZYAELA_pinput = A_UNITE(JAZAELA,mode2,2,IAZAELA);
 /* line 2435: */
KAZAELA.Port = BAZAELA_poutput;
KAZAELA.I = (*(&(RZYAELA_mint->I)));
LAZAELA = A_HEAP(A68_213 ) ;
(*LAZAELA) = KAZAELA ;
BAZAELA_poutput = A_UNITE(MAZAELA,mode2,2,LAZAELA);
 /* line 2436: */
NAZAELA.T = WZYAELA_jinput;
NAZAELA.Size = (*(&(RZYAELA_mint->I)));
OAZAELA = A_HEAP(A68_179 ) ;
(*OAZAELA) = NAZAELA ;
WZYAELA_jinput = A_UNITE(PAZAELA,mode7,7,OAZAELA);
 /* line 2437: */
QAZAELA.T = XZYAELA_joutput;
QAZAELA.Size = (*(&(RZYAELA_mint->I)));
RAZAELA = A_HEAP(A68_179 ) ;
(*RAZAELA) = QAZAELA ;
XZYAELA_joutput = A_UNITE(SAZAELA,mode7,7,RAZAELA);
 /* line 2438: */
 /* line 2439: */
RZYAELA_mint = (*(&(RZYAELA_mint->Rest)));
}
 /* line 2440: */
 /* line 2441: */
UAZAELA = (&(JLPAELA_fndec->Num_names)) ;
TAZAELA.Decno = (*UAZAELA)+=1;
TAZAELA.Origin = KSCAELA_maketok;
 /* line 2442: */
TAZAELA.Makeint = DMPAELA_makeint;
TAZAELA.Type = TZYAELA_t1;
 /* line 2443: */
TUUAELA_join_setup( WZYAELA_jinput, A68_TRUE, &VAZAELA );
TAZAELA.Jsource = VAZAELA;
TUUAELA_join_setup( XZYAELA_joutput, A68_FALSE, &WAZAELA );
TAZAELA.Jsink = WAZAELA;
TAZAELA.Input = YZYAELA_pinput;
 /* line 2444: */
TAZAELA.Output = BAZAELA_poutput;
XAZAELA = A_HEAP(A68_204 ) ;
(*XAZAELA) = TAZAELA ;
UIQAELA_setidunn((*(&(OLPAELA_ids->Idinfo))), A_UNITE(YAZAELA,mode5,5,XAZAELA));
 /* line 2445: */
ZAZAELA.data[0] = MLCAELA_dummy;
ZAZAELA.data[1] = (*(&(JLPAELA_fndec->Num_names)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(ABZAELA,ZAZAELA,2,A68_INT )),(A_HISVEC(ABZAELA,ZAZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2446: */
 /* line 2447: */
A_CALLPROC(WOPAELA_outid,((*(&((*(&(OLPAELA_ids->Idinfo)))->Id)))),((*(&((*(&(OLPAELA_ids->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
} 
else
{ 
 /* line 2448: */
BBZAELA.T = A_UNITE(CBZAELA,mode10,10,DRCAELA_flt);
DBZAELA.Idinfo = (*(&(OLPAELA_ids->Idinfo)));
DBZAELA.Declaration = A68_TRUE;
DBZAELA.Attr = A_UNITE(EBZAELA,mode6,6,MRCAELA_attrnull);
DBZAELA.Rest = CQCAELA_nilids;
 /* line 2449: */
FBZAELA = A_HEAP(A68_244 ) ;
(*FBZAELA) = DBZAELA ;
BBZAELA.Ids = FBZAELA;
BBZAELA.Rest = FQCAELA_nildecs;
 /* line 2450: */
 /* line 2451: */
GBZAELA = A_HEAP(A68_171 ) ;
(*GBZAELA) = BBZAELA ;
GXUAELA_makedecs(GBZAELA, KSCAELA_maketok, JLPAELA_fndec);
} 
} 
A_PROC_EXIT(make2);
return;
} 
#undef NL

A68_VOID  HBZAELA_make3(void)
{ 
A68_32  IBZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(make3);
A_CALLPROC(VOPAELA_outints,(A_HVEC(IBZAELA,HJCAELA_zero,A68_INT )),(A_HVEC(IBZAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(make3);
return;
} 
#undef NL

A68_VOID  JBZAELA_make4(void)
{ 
A_PROC_ENTRY(make4);
DMPAELA_makeint = GUCAELA_nilintegerstack;
A_PROC_EXIT(make4);
return;
} 
#undef NL

A68_VOID  KBZAELA_make5(void)
{ 
A68_209  LBZAELA;  /* collateral clause result */
A68_263  MBZAELA;  /* OPERATORS - unite union */
A68_262  NBZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  OBZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PBZAELA;  /* YIELD */
A68_185  QBZAELA;  /* OPERATORS - mode -> union mode */
A68_209 * RBZAELA;  /* YIELD */
A_PROC_ENTRY(make5);
{ 
RKPAELA_fp5 = SLPAELA_integer;
 /* line 2461: */
 /* line 2462: */
 /* line 2463: */
 /* line 2464: */
 /* line 2465: */
PBZAELA = 1 ;
if ( PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(OBZAELA,mode1,1,PBZAELA), 67, A_HVEC(NBZAELA,A_UTABUNITE(MBZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 )) )
{ 
 /* line 2466: */
LBZAELA.I = SLPAELA_integer;
} 
else
{ 
LBZAELA.I = A_UNITE(QBZAELA,mode4,4,DRCAELA_flt);
} 
 /* line 2467: */
LBZAELA.Rest = DMPAELA_makeint;
RBZAELA = A_HEAP(A68_209 ) ;
(*RBZAELA) = LBZAELA ;
DMPAELA_makeint = RBZAELA;
} 
A_PROC_EXIT(make5);
return;
} 
#undef NL

A68_VOID  SBZAELA_case1(void)
{ 
A68_229 * TBZAELA_test;
A68_327  UBZAELA_result;
A68_BOOL  VBZAELA_macrocheck;
A68_32  WBZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_229  XBZAELA;  /* collateral clause result */
A68_229 * YBZAELA;  /* YIELD */
A68_229 ** ZBZAELA;  /* YIELD */
A68_327  ACZAELA;  /* avoid structure result */
A68_445  BCZAELA;  /* collateral clause result */
A68_263  CCZAELA;  /* OPERATORS - unite union */
A68_263  DCZAELA;  /* OPERATORS - unite union */
A68_262  ECZAELA;  /* OPERATORS - istruct -> vector */
A68_172  FCZAELA;  /* OPERATORS - mode -> union mode */
A68_222  GCZAELA;  /* OPERATORS - mode -> union mode */
A68_222 * HCZAELA;  /* YIELD */
A68_172  ICZAELA;  /* united object - for case conformity */
A68_182  JCZAELA_f;
A68_BOOL  KCZAELA;  /* clause result */
A68_327  LCZAELA;  /* avoid structure result */
A68_445  MCZAELA;  /* collateral clause result */
A68_263  NCZAELA;  /* OPERATORS - unite union */
A68_263  OCZAELA;  /* OPERATORS - unite union */
A68_262  PCZAELA;  /* OPERATORS - istruct -> vector */
A68_396  QCZAELA;  /* collateral clause result */
A68_32  RCZAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(case1);
{ 
 /* line 2472: */
VBZAELA_macrocheck = A68_FALSE;
 /* line 2473: */
if ( !AQCAELA_caseelseof )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(WBZAELA,DMCAELA_vnormal,A68_INT )),(A_HVEC(WBZAELA,DMCAELA_vnormal,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 2474: */
AQCAELA_caseelseof = A68_FALSE;
 /* line 2475: */
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 2476: */
XBZAELA.Calt = OMPAELA_ctype;
XBZAELA.Rest = (*(&(IOPAELA_casestack->Tested)));
YBZAELA = A_HEAP(A68_229 ) ;
(*YBZAELA) = XBZAELA ;
ZBZAELA = (&(IOPAELA_casestack->Tested)) ;
(*ZBZAELA) = YBZAELA;
 /* line 2477: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2478: */
NQSAELA_typetest( RLPAELA_type, (*(&(IOPAELA_casestack->Param))), &ACZAELA );
UBZAELA_result = ACZAELA;
 /* line 2479: */
 /* line 2480: */
if ( LSRAELA_(UBZAELA_result, BSRAELA_false) )
{ 
JKPAELA_fp1 = RLPAELA_type;
KKPAELA_fp2 = (*(&(IOPAELA_casestack->Param)));
 /* line 2481: */
BCZAELA.data[0] = A_UUNITE(CCZAELA,0,KKPAELA_fp2);
BCZAELA.data[1] = A_UUNITE(DCZAELA,0,JKPAELA_fp1);
VZPAELA_namefaultp(68, A_HISVEC(ECZAELA,BCZAELA,2,A68_263 ));
 /* line 2482: */
RLPAELA_type = A_UNITE(FCZAELA,mode10,10,DRCAELA_flt);
 /* line 2483: */
 /* line 2484: */
HCZAELA = (&((*(&(IOPAELA_casestack->Tested)))->Calt)) ;
(*HCZAELA) = A_UNITE(GCZAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
ICZAELA = (*(&(IOPAELA_casestack->Param))) ;
switch ( ICZAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
JCZAELA_f = (ICZAELA.data.mode10);
KCZAELA = A68_FALSE;
break;
default: 
 /* line 2485: */
KCZAELA = A68_TRUE;
break;
} 
if ( KCZAELA )
{ 
VBZAELA_macrocheck = LSRAELA_(UBZAELA_result, CSRAELA_unknown);
 /* line 2486: */
TBZAELA_test = (*(&(IOPAELA_casestack->Tested)));
 /* line 2487: */
for ( ;; )
{ 
 /* line 2488: */
if ( !(((*(&(TBZAELA_test->Rest)))!=JQCAELA_nilcalts)) ) break;
JSSAELA_checkdisjoint( OMPAELA_ctype, (*(&((*(&(TBZAELA_test->Rest)))->Calt))), &LCZAELA );
UBZAELA_result = LCZAELA;
 /* line 2489: */
 /* line 2490: */
if ( LSRAELA_(UBZAELA_result, BSRAELA_false) )
{ 
UKPAELA_fpopen = OMPAELA_ctype;
VKPAELA_fpclose = (*(&((*(&(TBZAELA_test->Rest)))->Calt)));
 /* line 2491: */
 /* line 2492: */
MCZAELA.data[0] = A_UTABUNITE(NCZAELA,"\000\035\036\037 !\"#$%\012\013&'()*+,-./012",UKPAELA_fpopen);
MCZAELA.data[1] = A_UTABUNITE(OCZAELA,"\000\035\036\037 !\"#$%\012\013&'()*+,-./012",VKPAELA_fpclose);
 /* line 2493: */
SZPAELA_faultp(118, A_HISVEC(PCZAELA,MCZAELA,2,A68_263 ));
} 
else
{ 
 /* line 2494: */
if ( LSRAELA_(UBZAELA_result, CSRAELA_unknown) )
{ 
 /* line 2495: */
VBZAELA_macrocheck = A68_TRUE;
} 
} 
 /* line 2496: */
 /* line 2497: */
TBZAELA_test = (*(&(TBZAELA_test->Rest)));
}
 /* line 2498: */
} 
} 
 /* line 2499: */
QCZAELA.data[0] = MLCAELA_dummy;
QCZAELA.data[1] = (VBZAELA_macrocheck);
 /* line 2500: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(RCZAELA,QCZAELA,2,A68_INT )),(A_HISVEC(RCZAELA,QCZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(case1);
return;
} 
#undef NL

A68_VOID  SCZAELA_case2(void)
{ 
A68_290  TCZAELA;  /* collateral clause result */
A68_172  UCZAELA;  /* OPERATORS - mode -> union mode */
A68_290 * VCZAELA;  /* YIELD */
A68_32  WCZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  XCZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(case2);
{ 
TCZAELA.Param = RLPAELA_type;
TCZAELA.Output = A_UNITE(UCZAELA,mode11,11,KRCAELA_unset);
TCZAELA.Tested = (A68_229 *)A68_NIL;
TCZAELA.Rest = IOPAELA_casestack;
VCZAELA = A_HEAP(A68_290 ) ;
(*VCZAELA) = TCZAELA ;
IOPAELA_casestack = VCZAELA;
 /* line 2504: */
if ( ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq) )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(WCZAELA,WMCAELA_seqcase,A68_INT )),(A_HVEC(WCZAELA,WMCAELA_seqcase,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
 /* line 2505: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(XCZAELA,QKCAELA_vcase,A68_INT )),(A_HVEC(XCZAELA,QKCAELA_vcase,A68_INT ),(VOPAELA_outints).nonlocals));
} 
} 
A_PROC_EXIT(case2);
return;
} 
#undef NL

A68_VOID  YCZAELA_case3(void)
{ 
A68_172  ZCZAELA;  /* united object - for case conformity */
A68_183  ADZAELA_u;
A68_172 * BDZAELA;  /* YIELD */
A68_445  CDZAELA;  /* collateral clause result */
A68_263  DDZAELA;  /* OPERATORS - unite union */
A68_263  EDZAELA;  /* OPERATORS - unite union */
A68_262  FDZAELA;  /* OPERATORS - istruct -> vector */
A68_172  GDZAELA;  /* OPERATORS - mode -> union mode */
A68_172 * HDZAELA;  /* YIELD */
A_PROC_ENTRY(case3);
{ 
 /* line 2509: */
if ( ((*(&(DNPAELA_currentstate->State)))==XPCAELA_inpar) )
{ 
 /* line 2510: */
ZCZAELA = (*(&(IOPAELA_casestack->Output))) ;
switch ( ZCZAELA.mode )
{ 
case 11: /* STRUCT(INT)  */
ADZAELA_u = (ZCZAELA.data.mode11);
 /* line 2511: */
 /* line 2512: */
BDZAELA = (&(IOPAELA_casestack->Output)) ;
(*BDZAELA) = RLPAELA_type;
break;
default: 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2513: */
 /* line 2514: */
if ( !FRSAELA_checktypeeq(RLPAELA_type, (*(&(IOPAELA_casestack->Output))), A68_TRUE) )
{ 
JKPAELA_fp1 = (*(&(IOPAELA_casestack->Output)));
KKPAELA_fp2 = RLPAELA_type;
 /* line 2516: */
CDZAELA.data[0] = A_UUNITE(DDZAELA,0,JKPAELA_fp1);
CDZAELA.data[1] = A_UUNITE(EDZAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(69, A_HISVEC(FDZAELA,CDZAELA,2,A68_263 ));
 /* line 2517: */
 /* line 2518: */
 /* line 2519: */
HDZAELA = (&(IOPAELA_casestack->Output)) ;
(*HDZAELA) = A_UNITE(GDZAELA,mode10,10,DRCAELA_flt);
} 
break;
} 
 /* line 2520: */
 /* line 2521: */
 /* line 2522: */
LLPAELA_vss-=1;
} 
} 
A_PROC_EXIT(case3);
return;
} 
#undef NL

A68_VOID  IDZAELA_case7(void)
{ 
A68_32  JDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_229 ** KDZAELA;  /* YIELD */
A_PROC_ENTRY(case7);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(JDZAELA,NLCAELA_velseof,A68_INT )),(A_HVEC(JDZAELA,NLCAELA_velseof,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2526: */
AQCAELA_caseelseof = A68_TRUE;
 /* line 2527: */
 /* line 2528: */
KDZAELA = (&(IOPAELA_casestack->Tested)) ;
(*KDZAELA) = JQCAELA_nilcalts;
} 
A_PROC_EXIT(case7);
return;
} 
#undef NL

A68_VOID  LDZAELA_case4(void)
{ 
A68_32  MDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  NDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(case4);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(MDZAELA,CMCAELA_vcelse,A68_INT )),(A_HVEC(MDZAELA,CMCAELA_vcelse,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2532: */
 /* line 2533: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(NDZAELA,DKCAELA_cnull,A68_INT )),(A_HVEC(NDZAELA,DKCAELA_cnull,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(case4);
return;
} 
#undef NL

A68_VOID  ODZAELA_case6(void)
{ 
A68_32  PDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  QDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  RDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  SDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(case6);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(PDZAELA,EMCAELA_vnoelse,A68_INT )),(A_HVEC(PDZAELA,EMCAELA_vnoelse,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2537: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(QDZAELA,DKCAELA_cnull,A68_INT )),(A_HVEC(QDZAELA,DKCAELA_cnull,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2538: */
 /* line 2539: */
if ( ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq) )
{ 
 /* line 2540: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(RDZAELA,QMCAELA_seqnull,A68_INT )),(A_HVEC(RDZAELA,QMCAELA_seqnull,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(SDZAELA,RKCAELA_vquery,A68_INT )),(A_HVEC(SDZAELA,RKCAELA_vquery,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2541: */
HLQAELA_loadtype((*(&(IOPAELA_casestack->Output))), A68_FALSE, A68_FALSE, A68_FALSE);
 /* line 2542: */
 /* line 2543: */
 /* line 2544: */
WOVAELA_pushvss(1);
} 
} 
A_PROC_EXIT(case6);
return;
} 
#undef NL

A68_VOID  TDZAELA_case5(void)
{ 
A68_32  UDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(case5);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(UDZAELA,XKCAELA_end,A68_INT )),(A_HVEC(UDZAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2548: */
RLPAELA_type = (*(&(IOPAELA_casestack->Output)));
 /* line 2549: */
IOPAELA_casestack = (*(&(IOPAELA_casestack->Rest)));
} 
A_PROC_EXIT(case5);
return;
} 
#undef NL

A68_VOID  VDZAELA_vcond1(void)
{ 
A68_32  WDZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  XDZAELA;  /* avoid structure result */
A68_209  YDZAELA;  /* collateral clause result */
A68_209 * ZDZAELA;  /* YIELD */
A68_32  AEZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcond1);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(WDZAELA,TKCAELA_vif,A68_INT )),(A_HVEC(WDZAELA,TKCAELA_vif,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2553: */
MTUAELA_newscope(TKCAELA_vif, OLPAELA_ids, PLPAELA_fns);
 /* line 2554: */
if ( MJQAELA_loadint(SLPAELA_integer, A68_FALSE) )
{ 
DSDAELA_uncheckedint( SLPAELA_integer, &XDZAELA );
SLPAELA_integer = XDZAELA;
} 
 /* line 2555: */
YDZAELA.I = SLPAELA_integer;
YDZAELA.Rest = DOPAELA_integerstack;
ZDZAELA = A_HEAP(A68_209 ) ;
(*ZDZAELA) = YDZAELA ;
DOPAELA_integerstack = ZDZAELA;
 /* line 2556: */
 /* line 2557: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(AEZAELA,KNCAELA_vthen,A68_INT )),(A_HVEC(AEZAELA,KNCAELA_vthen,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(vcond1);
return;
} 
#undef NL

A68_VOID  BEZAELA_vcond2(void)
{ 
A68_175  CEZAELA;  /* collateral clause result */
A68_175 * DEZAELA;  /* YIELD */
A68_32  EEZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcond2);
{ 
CEZAELA.T = RLPAELA_type;
CEZAELA.Rest = COPAELA_typestack;
DEZAELA = A_HEAP(A68_175 ) ;
(*DEZAELA) = CEZAELA ;
COPAELA_typestack = DEZAELA;
A_CALLPROC(VOPAELA_outints,(A_HVEC(EEZAELA,OLCAELA_velse,A68_INT )),(A_HVEC(EEZAELA,OLCAELA_velse,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(vcond2);
return;
} 
#undef NL

A68_VOID  FEZAELA_vcond3(void)
{ 
A68_172  GEZAELA;  /* avoid structure result */
A68_32  HEZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcond3);
{ 
JCUAELA_cond_type( (*(&(COPAELA_typestack->T))), RLPAELA_type, (*(&(DOPAELA_integerstack->I))), &GEZAELA );
RLPAELA_type = GEZAELA;
 /* line 2564: */
ENPAELA_scopestack = (*(&(ENPAELA_scopestack->Rest)));
 /* line 2565: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 2566: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
LLPAELA_vss-=1;
 /* line 2567: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(HEZAELA,PLCAELA_vfi,A68_INT )),(A_HVEC(HEZAELA,PLCAELA_vfi,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(vcond3);
return;
} 
#undef NL

A68_VOID  IEZAELA_inconstp(void)
{ 
A68_294  JEZAELA;  /* collateral clause result */
A68_294 * KEZAELA;  /* YIELD */
A_PROC_ENTRY(inconstp);
JEZAELA.State = YPCAELA_inconst;
JEZAELA.Rest = DNPAELA_currentstate;
KEZAELA = A_HEAP(A68_294 ) ;
(*KEZAELA) = JEZAELA ;
DNPAELA_currentstate = KEZAELA;
A_PROC_EXIT(inconstp);
return;
} 
#undef NL

A68_VOID  LEZAELA_inotherp(void)
{ 
A68_294  MEZAELA;  /* collateral clause result */
A68_294 * NEZAELA;  /* YIELD */
A_PROC_ENTRY(inotherp);
MEZAELA.State = ZPCAELA_inother;
MEZAELA.Rest = DNPAELA_currentstate;
NEZAELA = A_HEAP(A68_294 ) ;
(*NEZAELA) = MEZAELA ;
DNPAELA_currentstate = NEZAELA;
A_PROC_EXIT(inotherp);
return;
} 
#undef NL

A68_VOID  OEZAELA_inparp(void)
{ 
A68_294  PEZAELA;  /* collateral clause result */
A68_294 * QEZAELA;  /* YIELD */
A_PROC_ENTRY(inparp);
PEZAELA.State = XPCAELA_inpar;
PEZAELA.Rest = DNPAELA_currentstate;
QEZAELA = A_HEAP(A68_294 ) ;
(*QEZAELA) = PEZAELA ;
DNPAELA_currentstate = QEZAELA;
A_PROC_EXIT(inparp);
return;
} 
#undef NL

A68_VOID  REZAELA_inseqp(void)
{ 
A68_294  SEZAELA;  /* collateral clause result */
A68_294 * TEZAELA;  /* YIELD */
A_PROC_ENTRY(inseqp);
SEZAELA.State = WPCAELA_inseq;
SEZAELA.Rest = DNPAELA_currentstate;
TEZAELA = A_HEAP(A68_294 ) ;
(*TEZAELA) = SEZAELA ;
DNPAELA_currentstate = TEZAELA;
A_PROC_EXIT(inseqp);
return;
} 
#undef NL

A68_VOID  UEZAELA_unstackstate(void)
{ 
A_PROC_ENTRY(unstackstate);
DNPAELA_currentstate = (*(&(DNPAELA_currentstate->Rest)));
A_PROC_EXIT(unstackstate);
return;
} 
#undef NL

A68_VOID  VEZAELA_beginp(void)
{ 
A68_INT  WEZAELA;  /* clause result */
A68_INT  XEZAELA_tok;
A68_32  YEZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(beginp);
{ 
if ( ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq) )
{ 
WEZAELA = FMCAELA_vseq;
} 
else
{ 
WEZAELA = GMCAELA_vpar;
} 
XEZAELA_tok = WEZAELA;
 /* line 2588: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(YEZAELA,XEZAELA_tok,A68_INT )),(A_HVEC(YEZAELA,XEZAELA_tok,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2589: */
 /* line 2590: */
MTUAELA_newscope(XEZAELA_tok, OLPAELA_ids, PLPAELA_fns);
} 
A_PROC_EXIT(beginp);
return;
} 
#undef NL

A68_VOID  ZEZAELA_endp(void)
{ 
A68_INT  AFZAELA;  /* clause result */
A68_INT  BFZAELA_tok;
A68_32  CFZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(endp);
{ 
if ( ((*(&(DNPAELA_currentstate->State)))==WPCAELA_inseq) )
{ 
AFZAELA = PMCAELA_seqend;
} 
else
{ 
AFZAELA = OMCAELA_parend;
} 
BFZAELA_tok = AFZAELA;
 /* line 2594: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(CFZAELA,BFZAELA_tok,A68_INT )),(A_HVEC(CFZAELA,BFZAELA_tok,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2595: */
 /* line 2596: */
KLVAELA_unscope((&ENPAELA_scopestack), (&OLPAELA_ids), (&PLPAELA_fns));
} 
A_PROC_EXIT(endp);
return;
} 
#undef NL

A68_VOID  DFZAELA_checkoffjoinup(void)
{ 
A68_BOOL  EFZAELA;  /* optbool result */
A68_210  FFZAELA;  /* avoid structure result */
A68_210  GFZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(checkoffjoinup);
{ 
 /* line 2601: */
EFZAELA = !MJPAELA_syntaxerror;
if ( EFZAELA )
{EFZAELA = (ENPAELA_scopestack!=CUCAELA_nilscope);
}
if ( EFZAELA )
{ /* line 2602: */
EFZAELA = ((*(&(ENPAELA_scopestack->Rest)))!=CUCAELA_nilscope);
}
if ( EFZAELA )
{ /* line 2603: */
EFZAELA = ((*(&((*(&(ENPAELA_scopestack->Rest)))->Scope)))!=YKCAELA_fnstart);
}
if ( EFZAELA )
{ 
 /* line 2605: */
TUVAELA_replicate_joinup( OLPAELA_ids, ZNPAELA_iddecs, VMPAELA_joinup, &FFZAELA );
VMPAELA_joinup = FFZAELA;
} 
 /* line 2606: */
HFVAELA_check_off((&VMPAELA_joinup), A68_TRUE, A68_FALSE);
 /* line 2607: */
 /* line 2608: */
VMPAELA_joinup = A_UNITE(GFZAELA,mode7,7,DRCAELA_flt);
} 
A_PROC_EXIT(checkoffjoinup);
return;
} 
#undef NL

A68_VOID  HFZAELA_checkoutputtype(void)
{ 
A68_BOOL  IFZAELA;  /* optbool result */
A68_263  JFZAELA;  /* OPERATORS - unite union */
A68_262  KFZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(checkoutputtype);
{ 
 /* line 2613: */
IFZAELA = !MJPAELA_syntaxerror;
if ( IFZAELA )
{IFZAELA = (ENPAELA_scopestack!=CUCAELA_nilscope);
}
if ( IFZAELA )
{ /* line 2614: */
IFZAELA = ((*(&(ENPAELA_scopestack->Rest)))!=CUCAELA_nilscope);
}
if ( IFZAELA )
{ /* line 2615: */
IFZAELA = ((*(&((*(&(ENPAELA_scopestack->Rest)))->Scope)))==YKCAELA_fnstart);
}
if ( IFZAELA )
{ /* line 2616: */
IFZAELA = NDVAELA_check_if_output_joined((*(&(JLPAELA_fndec->Outputs))));
}
if ( IFZAELA )
{ 
 /* line 2617: */
UQPAELA_fault(174, VJAAOSI_nullmsg);
} 
 /* line 2618: */
 /* line 2619: */
if ( MRUAELA_containslocaltype(RLPAELA_type, ENPAELA_scopestack) )
{ 
JKPAELA_fp1 = RLPAELA_type;
 /* line 2621: */
 /* line 2622: */
SZPAELA_faultp(79, A_HVEC(KFZAELA,A_UUNITE(JFZAELA,0,JKPAELA_fp1),A68_263 ));
} 
} 
A_PROC_EXIT(checkoutputtype);
return;
} 
#undef NL

A68_VOID  LFZAELA_checkoutputscope(void)
{ 
A68_BOOL  MFZAELA;  /* optbool result */
A68_172  NFZAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  OFZAELA_named_outputs;
A68_171 * PFZAELA_outdecs;
A68_BOOL  QFZAELA;  /* optbool result */
A68_244 * RFZAELA_idsout;
A68_BOOL  SFZAELA;  /* optbool result */
A68_BOOL  TFZAELA;  /* optbool result */
A68_32  UFZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(checkoutputscope);
 /* line 2626: */
MFZAELA = !MJPAELA_syntaxerror;
if ( MFZAELA )
{MFZAELA = (ENPAELA_scopestack!=CUCAELA_nilscope);
}
if ( MFZAELA )
{MFZAELA = ((*(&(ENPAELA_scopestack->Rest)))!=CUCAELA_nilscope);
}
 /* line 2627: */
if ( MFZAELA )
{ /* line 2628: */
MFZAELA = ((*(&((*(&(ENPAELA_scopestack->Rest)))->Scope)))!=YKCAELA_fnstart);
}
if ( MFZAELA )
{ 
UQPAELA_fault(175, VJAAOSI_nullmsg);
 /* line 2630: */
RLPAELA_type = A_UNITE(NFZAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
OFZAELA_named_outputs = A68_TRUE;
 /* line 2631: */
PFZAELA_outdecs = (*(&(JLPAELA_fndec->Outputs)));
 /* line 2632: */
for ( ;; )
{ 
 /* line 2633: */
QFZAELA = (PFZAELA_outdecs!=FQCAELA_nildecs);
if ( QFZAELA )
{QFZAELA = OFZAELA_named_outputs;
}
if ( !(QFZAELA) ) break;
RFZAELA_idsout = (*(&(PFZAELA_outdecs->Ids)));
 /* line 2634: */
for ( ;; )
{ 
 /* line 2635: */
SFZAELA = (RFZAELA_idsout!=CQCAELA_nilids);
if ( SFZAELA )
{SFZAELA = OFZAELA_named_outputs;
}
if ( !(SFZAELA) ) break;
 /* line 2636: */
if ( ((*(&((*(&(RFZAELA_idsout->Idinfo)))->Id))).upb==0) )
{ 
 /* line 2637: */
OFZAELA_named_outputs = A68_FALSE;
} 
 /* line 2638: */
 /* line 2639: */
RFZAELA_idsout = (*(&(RFZAELA_idsout->Rest)));
}
 /* line 2640: */
 /* line 2641: */
PFZAELA_outdecs = (*(&(PFZAELA_outdecs->Rest)));
}
 /* line 2642: */
TFZAELA = !OFZAELA_named_outputs;
if ( TFZAELA )
{ /* line 2643: */
TFZAELA = !DHTAELA_isvoid((*(&(JLPAELA_fndec->Ans))));
}
if ( TFZAELA )
{ 
 /* line 2644: */
UQPAELA_fault(175, VJAAOSI_nullmsg);
} 
 /* line 2645: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(UFZAELA,KOCAELA_vnull,A68_INT )),(A_HVEC(UFZAELA,KOCAELA_vnull,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2646: */
 /* line 2647: */
BNPAELA_nooutput = A68_TRUE;
} 
A_PROC_EXIT(checkoutputscope);
return;
} 
#undef NL

A68_VOID  VFZAELA_seqvoidpr(void)
{ 
A68_32  WFZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqvoidpr);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(WFZAELA,RMCAELA_seqvoid,A68_INT )),(A_HVEC(WFZAELA,RMCAELA_seqvoid,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2652: */
 /* line 2653: */
MTUAELA_newscope(RMCAELA_seqvoid, OLPAELA_ids, PLPAELA_fns);
} 
A_PROC_EXIT(seqvoidpr);
return;
} 
#undef NL

A68_VOID  XFZAELA_semicolonflt(void)
{ 
A_PROC_ENTRY(semicolonflt);
MQPAELA_syfault(98, VJAAOSI_nullmsg);
A_PROC_EXIT(semicolonflt);
return;
} 
#undef NL

A68_VOID  YFZAELA_vardec1(void)
{ 
A68_32  ZFZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AGZAELA;  /* to part of loop */
A68_INT  BGZAELA;  /* loop control */
A_PROC_ENTRY(vardec1);
{ 
KLPAELA_decs = ZMVAELA_decs_setup(MOPAELA_decids, RLPAELA_type);
 /* line 2660: */
RLVAELA_makevardecs(KLPAELA_decs, JLPAELA_fndec);
 /* line 2661: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(ZFZAELA,TMCAELA_seqvar,A68_INT )),(A_HVEC(ZFZAELA,TMCAELA_seqvar,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2662: */
BSQAELA_outddecs(KLPAELA_decs, A68_TRUE, A68_FALSE);
 /* line 2663: */
LLPAELA_vss-=1;
 /* line 2664: */
AGZAELA = (*(&(TOPAELA_multlets->Num)));
for ( BGZAELA = 1;
BGZAELA <= AGZAELA;
BGZAELA += 1 )
{ 
MOPAELA_decids = (*(&(MOPAELA_decids->Rest)));
}
 /* line 2665: */
 /* line 2666: */
TOPAELA_multlets = (*(&(TOPAELA_multlets->Rest)));
} 
A_PROC_EXIT(vardec1);
return;
} 
#undef NL

A68_VOID  CGZAELA_vardec2(void)
{ 
A68_32  DGZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EGZAELA;  /* to part of loop */
A68_INT  FGZAELA;  /* loop control */
A_PROC_ENTRY(vardec2);
{ 
KLPAELA_decs = ZMVAELA_decs_setup(MOPAELA_decids, RLPAELA_type);
 /* line 2670: */
RLVAELA_makevardecs(KLPAELA_decs, JLPAELA_fndec);
 /* line 2671: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(DGZAELA,UMCAELA_seqper,A68_INT )),(A_HVEC(DGZAELA,UMCAELA_seqper,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2672: */
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 2673: */
HLQAELA_loadtype(RLPAELA_type, A68_FALSE, A68_FALSE, A68_FALSE);
 /* line 2674: */
BSQAELA_outddecs(KLPAELA_decs, A68_TRUE, A68_FALSE);
 /* line 2675: */
EGZAELA = (*(&(TOPAELA_multlets->Num)));
for ( FGZAELA = 1;
FGZAELA <= EGZAELA;
FGZAELA += 1 )
{ 
MOPAELA_decids = (*(&(MOPAELA_decids->Rest)));
}
 /* line 2676: */
 /* line 2677: */
TOPAELA_multlets = (*(&(TOPAELA_multlets->Rest)));
} 
A_PROC_EXIT(vardec2);
return;
} 
#undef NL

A68_VOID  GGZAELA_assign1(void)
{ 
A68_32  HGZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_281  IGZAELA;  /* collateral clause result */
A68_281 * JGZAELA;  /* YIELD */
A_PROC_ENTRY(assign1);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HGZAELA,VMCAELA_seqassign,A68_INT )),(A_HVEC(HGZAELA,VMCAELA_seqassign,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2681: */
IGZAELA.Num = 1;
 /* line 2682: */
IGZAELA.Rest = UOPAELA_multiassign;
JGZAELA = A_HEAP(A68_281 ) ;
(*JGZAELA) = IGZAELA ;
UOPAELA_multiassign = JGZAELA;
} 
A_PROC_EXIT(assign1);
return;
} 
#undef NL

A68_VOID  KGZAELA_assign2(void)
{ 
A68_199  LGZAELA;  /* united object - for case conformity */
A68_206  MGZAELA_vi;
A68_293 * NGZAELA_s;
A68_BOOL  OGZAELA;  /* optbool result */
A68_244 * PGZAELA_fid;
A68_199  QGZAELA;  /* united object - for case conformity */
A68_BOOL  RGZAELA;  /* clause result */
A68_263  SGZAELA;  /* OPERATORS - mode -> union mode */
A68_262  TGZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_444  UGZAELA;  /* collateral clause result */
A68_32  VGZAELA;  /* OPERATORS - istruct -> vector */
A68_182  WGZAELA_flt;
A68_172  XGZAELA;  /* OPERATORS - mode -> union mode */
A68_172  YGZAELA;  /* OPERATORS - mode -> union mode */
A68_244 * ZGZAELA_idscheck;
A68_INT  AHZAELA;  /* to part of loop */
A68_INT  BHZAELA;  /* loop control */
A68_263  CHZAELA;  /* OPERATORS - mode -> union mode */
A68_262  DHZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_244  EHZAELA;  /* collateral clause result */
A68_198 * FHZAELA;  /* YIELD */
A68_170  GHZAELA;  /* OPERATORS - mode -> union mode */
A68_244 * HHZAELA;  /* YIELD */
A_PROC_ENTRY(assign2);
{ 
 /* line 2686: */
LGZAELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( LGZAELA.mode )
{ 
case 7: /* STRUCT(MODE172,INT)  */
MGZAELA_vi = (LGZAELA.data.mode7);
{ 
NGZAELA_s = ENPAELA_scopestack;
 /* line 2687: */
for ( ;; )
{ 
OGZAELA = !EQUAELA_scope_start((*(&(NGZAELA_s->Scope))));
if ( ! OGZAELA )
{ /* line 2688: */
OGZAELA = ((*(&(NGZAELA_s->Scope)))==YMCAELA_seqvarmult);
}
if ( !(OGZAELA) ) break;
NGZAELA_s = (*(&(NGZAELA_s->Rest)));
}
 /* line 2689: */
PGZAELA_fid = KQUAELA_id_in_scope((*(&((&VLPAELA_idinfo)->Id))), NGZAELA_s, A68_TRUE);
 /* line 2690: */
QGZAELA = (*(&((*(&(PGZAELA_fid->Idinfo)))->U))) ;
switch ( QGZAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
RGZAELA = A68_TRUE;
break;
default: 
 /* line 2691: */
RGZAELA = A68_FALSE;
break;
} 
if ( RGZAELA )
{ 
LKPAELA_fp3 = (*(&((&VLPAELA_idinfo)->Id)));
 /* line 2692: */
 /* line 2693: */
SZPAELA_faultp(47, A_HVEC(TGZAELA,A_UNITE(SGZAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
UGZAELA.data[0] = IKCAELA_vname;
UGZAELA.data[1] = RPCAELA_vnamesource;
UGZAELA.data[2] = MGZAELA_vi.Decno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(VGZAELA,UGZAELA,3,A68_INT )),(A_HISVEC(VGZAELA,UGZAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2694: */
 /* line 2695: */
WOVAELA_pushvss(1);
} 
 /* line 2696: */
 /* line 2697: */
 /* line 2698: */
RLPAELA_type = MGZAELA_vi.Type;
} 
break;
case 8: /* STRUCT(INT)  */
WGZAELA_flt = (LGZAELA.data.mode8);
 /* line 2699: */
RLPAELA_type = A_UNITE(XGZAELA,mode10,10,WGZAELA_flt);
break;
default: 
{ 
RLPAELA_type = A_UNITE(YGZAELA,mode10,10,DRCAELA_flt);
 /* line 2700: */
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 2701: */
 /* line 2702: */
UQPAELA_fault(115, VJAAOSI_nullmsg);
} 
break;
} 
 /* line 2703: */
ZGZAELA_idscheck = MOPAELA_decids;
 /* line 2704: */
 /* line 2705: */
AHZAELA = ((*(&(UOPAELA_multiassign->Num)))-1);
for ( BHZAELA = 1;
BHZAELA <= AHZAELA;
BHZAELA += 1 )
{ 
 /* line 2706: */
if ( A_VC_EQ((*(&((&VLPAELA_idinfo)->Id))),(*(&((*(&(ZGZAELA_idscheck->Idinfo)))->Id)))) )
{ 
LKPAELA_fp3 = (*(&((&VLPAELA_idinfo)->Id)));
 /* line 2707: */
 /* line 2708: */
 /* line 2709: */
SZPAELA_faultp(159, A_HVEC(DHZAELA,A_UNITE(CHZAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
 /* line 2710: */
 /* line 2711: */
ZGZAELA_idscheck = (*(&(ZGZAELA_idscheck->Rest)));
}
 /* line 2712: */
FHZAELA = A_HEAP(A68_198 ) ;
(*FHZAELA) = VLPAELA_idinfo ;
EHZAELA.Idinfo = FHZAELA;
EHZAELA.Declaration = A68_FALSE;
EHZAELA.Attr = A_UNITE(GHZAELA,mode6,6,MRCAELA_attrnull);
 /* line 2713: */
EHZAELA.Rest = MOPAELA_decids;
HHZAELA = A_HEAP(A68_244 ) ;
(*HHZAELA) = EHZAELA ;
MOPAELA_decids = HHZAELA;
} 
A_PROC_EXIT(assign2);
return;
} 
#undef NL

A68_VOID  IHZAELA_assign3(void)
{ 
A68_175  JHZAELA;  /* collateral clause result */
A68_175 * KHZAELA;  /* YIELD */
A68_BOOL  LHZAELA_allnull;
A68_INT  MHZAELA;  /* to part of loop */
A68_INT  NHZAELA;  /* loop control */
A68_BOOL  OHZAELA;  /* optbool result */
A68_32  PHZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(assign3);
{ 
JHZAELA.T = RLPAELA_type;
JHZAELA.Rest = COPAELA_typestack;
KHZAELA = A_HEAP(A68_175 ) ;
(*KHZAELA) = JHZAELA ;
COPAELA_typestack = KHZAELA;
 /* line 2717: */
LHZAELA_allnull = A68_TRUE;
 /* line 2718: */
 /* line 2719: */
MHZAELA = (*(&(UOPAELA_multiassign->Num)));
for ( NHZAELA = 1;
NHZAELA <= MHZAELA;
NHZAELA += 1 )
{ 
OHZAELA = LHZAELA_allnull;
if ( OHZAELA )
{OHZAELA = ((*(&((*(&(MOPAELA_decids->Idinfo)))->Id))).upb==0);
}
LHZAELA_allnull = OHZAELA;
 /* line 2720: */
 /* line 2721: */
MOPAELA_decids = (*(&(MOPAELA_decids->Rest)));
}
 /* line 2722: */
 /* line 2723: */
if ( LHZAELA_allnull )
{ 
 /* line 2724: */
UQPAELA_fault(160, VJAAOSI_nullmsg);
} 
 /* line 2725: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(PHZAELA,ENCAELA_seqbecomes,A68_INT )),(A_HVEC(PHZAELA,ENCAELA_seqbecomes,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2726: */
LLPAELA_vss-=1;
} 
A_PROC_EXIT(assign3);
return;
} 
#undef NL

A68_VOID  QHZAELA_assign4(void)
{ 
A68_VC  WHZAELA;  /* avoid structure result */
A68_VC  YHZAELA;  /* OPERATORS - assign op */
A68_449  ZHZAELA;  /* collateral clause result */
A68_263  AIZAELA;  /* OPERATORS - unite union */
A68_263  BIZAELA;  /* OPERATORS - mode -> union mode */
A68_263  CIZAELA;  /* OPERATORS - unite union */
A68_262  DIZAELA;  /* OPERATORS - istruct -> vector */
A68_327  EIZAELA;  /* avoid structure result */
A68_32  FIZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(assign4);
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2730: */
 /* line 2731: */
if ( !SQSAELA_equals((*(&(COPAELA_typestack->T))), RLPAELA_type) )
{ 
JKPAELA_fp1 = (*(&(COPAELA_typestack->T)));
KKPAELA_fp2 = RLPAELA_type;
 /* line 2732: */
SHZAELA_generator( A68_FALSE, &WHZAELA );
YHZAELA = XHZAELA ;
A_VASSIGN2(YHZAELA,WHZAELA,A68_CHAR ) ;
LKPAELA_fp3 = WHZAELA;
 /* line 2733: */
ZHZAELA.data[0] = A_UUNITE(AIZAELA,0,JKPAELA_fp1);
ZHZAELA.data[1] = A_UNITE(BIZAELA,mode13,13,LKPAELA_fp3);
ZHZAELA.data[2] = A_UUNITE(CIZAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(93, A_HISVEC(DIZAELA,ZHZAELA,3,A68_263 ));
} 
 /* line 2734: */
JASAELA_checkequals( (*(&(COPAELA_typestack->T))), RLPAELA_type, A68_TRUE, A68_FALSE, A68_FALSE, 0, &EIZAELA );
EIZAELA;
 /* line 2735: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
 /* line 2736: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(FIZAELA,FNCAELA_seqassignend,A68_INT )),(A_HVEC(FIZAELA,FNCAELA_seqassignend,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2737: */
LLPAELA_vss-=1;
} 
A_PROC_EXIT(assign4);
return;
} 
#undef NL

A68_VOID  GIZAELA_unstvoid(void)
{ 
A68_175  HIZAELA;  /* collateral clause result */
A68_175 * IIZAELA;  /* YIELD */
A_PROC_ENTRY(unstvoid);
{ 
ENPAELA_scopestack = (*(&(ENPAELA_scopestack->Rest)));
 /* line 2741: */
QOPAELA_mltype = DQCAELA_nilst;
 /* line 2742: */
ROPAELA_nextmltype = (&QOPAELA_mltype);
 /* line 2743: */
HIZAELA.T = RLPAELA_type;
HIZAELA.Rest = DQCAELA_nilst;
IIZAELA = A_HEAP(A68_175 ) ;
(*IIZAELA) = HIZAELA ;
(*ROPAELA_nextmltype) = IIZAELA;
 /* line 2744: */
 /* line 2745: */
ROPAELA_nextmltype = (&((*ROPAELA_nextmltype)->Rest));
} 
A_PROC_EXIT(unstvoid);
return;
} 
#undef NL

A68_VOID  JIZAELA_outmultass(void)
{ 
A68_396  KIZAELA;  /* collateral clause result */
A68_32  LIZAELA;  /* OPERATORS - istruct -> vector */
A68_175 * MIZAELA;  /* YIELD */
A68_172  NIZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(outmultass);
{ 
KIZAELA.data[0] = SKCAELA_vcoll;
KIZAELA.data[1] = (*(&(UOPAELA_multiassign->Num)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(LIZAELA,KIZAELA,2,A68_INT )),(A_HISVEC(LIZAELA,KIZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2749: */
 /* line 2750: */
MIZAELA = A_HEAP(A68_175 ) ;
(*MIZAELA) = (*QOPAELA_mltype) ;
RLPAELA_type = A_UNITE(NIZAELA,mode3,3,MIZAELA);
} 
A_PROC_EXIT(outmultass);
return;
} 
#undef NL

A68_VOID  OIZAELA_multassend(void)
{ 
A68_BOOL  PIZAELA;  /* optbool result */
A68_32  QIZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(multassend);
{ 
PIZAELA = (UOPAELA_multiassign!=SOPAELA_nilmultlets);
if ( PIZAELA )
{ /* line 2754: */
PIZAELA = ((*(&(UOPAELA_multiassign->Num)))>1);
}
if ( PIZAELA )
{ 
 /* line 2755: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(QIZAELA,PMCAELA_seqend,A68_INT )),(A_HVEC(QIZAELA,PMCAELA_seqend,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 2756: */
 /* line 2757: */
UOPAELA_multiassign = (*(&(UOPAELA_multiassign->Rest)));
} 
A_PROC_EXIT(multassend);
return;
} 
#undef NL

A68_VOID  RIZAELA_multtype(void)
{ 
A68_175  SIZAELA;  /* collateral clause result */
A68_175 * TIZAELA;  /* YIELD */
A68_INT * UIZAELA;  /* YIELD */
A_PROC_ENTRY(multtype);
{ 
SIZAELA.T = RLPAELA_type;
SIZAELA.Rest = DQCAELA_nilst;
TIZAELA = A_HEAP(A68_175 ) ;
(*TIZAELA) = SIZAELA ;
(*ROPAELA_nextmltype) = TIZAELA;
 /* line 2761: */
ROPAELA_nextmltype = (&((*ROPAELA_nextmltype)->Rest));
 /* line 2762: */
 /* line 2763: */
UIZAELA = (&(UOPAELA_multiassign->Num)) ;
(*UIZAELA)+=1;
} 
A_PROC_EXIT(multtype);
return;
} 
#undef NL

A68_VOID  VIZAELA_nullassign(void)
{ 
A68_32  WIZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_244  XIZAELA;  /* collateral clause result */
A68_198  YIZAELA;  /* collateral clause result */
A68_199  ZIZAELA;  /* OPERATORS - mode -> union mode */
A68_198 * AJZAELA;  /* YIELD */
A68_170  BJZAELA;  /* OPERATORS - mode -> union mode */
A68_244 * CJZAELA;  /* YIELD */
A68_172  DJZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(nullassign);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(WIZAELA,KOCAELA_vnull,A68_INT )),(A_HVEC(WIZAELA,KOCAELA_vnull,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2767: */
WOVAELA_pushvss(1);
 /* line 2768: */
 /* line 2769: */
YIZAELA.Scope = (-1);
YIZAELA.Vnno = 0;
YIZAELA.Text = A68_TRUE;
YIZAELA.Outofdate = A68_FALSE;
YIZAELA.Inscope = A68_TRUE;
YIZAELA.Export = A68_FALSE;
YIZAELA.Id = TTCAOST_nullid;
YIZAELA.U = A_UNITE(ZIZAELA,mode10,10,CRCAELA_notdec);
 /* line 2770: */
AJZAELA = A_HEAP(A68_198 ) ;
(*AJZAELA) = YIZAELA ;
XIZAELA.Idinfo = AJZAELA;
XIZAELA.Declaration = A68_FALSE;
XIZAELA.Attr = A_UNITE(BJZAELA,mode6,6,MRCAELA_attrnull);
XIZAELA.Rest = MOPAELA_decids;
CJZAELA = A_HEAP(A68_244 ) ;
(*CJZAELA) = XIZAELA ;
MOPAELA_decids = CJZAELA;
 /* line 2771: */
 /* line 2772: */
RLPAELA_type = A_UNITE(DJZAELA,mode10,10,DRCAELA_flt);
} 
A_PROC_EXIT(nullassign);
return;
} 
#undef NL

A68_VOID  EJZAELA_seqnullpr(void)
{ 
A68_32  FJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqnullpr);
A_CALLPROC(VOPAELA_outints,(A_HVEC(FJZAELA,QMCAELA_seqnull,A68_INT )),(A_HVEC(FJZAELA,QMCAELA_seqnull,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(seqnullpr);
return;
} 
#undef NL

A68_VOID  GJZAELA_seqcond1(void)
{ 
A68_32  HJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  IJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqcond1);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HJZAELA,XMCAELA_seqif,A68_INT )),(A_HVEC(HJZAELA,XMCAELA_seqif,A68_INT ),(VOPAELA_outints).nonlocals));
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
A_CALLPROC(VOPAELA_outints,(A_HVEC(IJZAELA,LNCAELA_seqthen,A68_INT )),(A_HVEC(IJZAELA,LNCAELA_seqthen,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2779: */
 /* line 2780: */
MTUAELA_newscope(XMCAELA_seqif, OLPAELA_ids, PLPAELA_fns);
} 
A_PROC_EXIT(seqcond1);
return;
} 
#undef NL

A68_VOID  JJZAELA_seqcond2(void)
{ 
A68_32  KJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqcond2);
A_CALLPROC(VOPAELA_outints,(A_HVEC(KJZAELA,HNCAELA_seqelse,A68_INT )),(A_HVEC(KJZAELA,HNCAELA_seqelse,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(seqcond2);
return;
} 
#undef NL

A68_VOID  LJZAELA_seqcond3(void)
{ 
A68_32  MJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqcond3);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(MJZAELA,INCAELA_seqfi,A68_INT )),(A_HVEC(MJZAELA,INCAELA_seqfi,A68_INT ),(VOPAELA_outints).nonlocals));
ENPAELA_scopestack = (*(&(ENPAELA_scopestack->Rest)));
} 
A_PROC_EXIT(seqcond3);
return;
} 
#undef NL

A68_VOID  NJZAELA_pt1(void)
{ 
A68_32  OJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt1);
A_CALLPROC(VOPAELA_outints,(A_HVEC(OJZAELA,JLCAELA_pt,A68_INT )),(A_HVEC(OJZAELA,JLCAELA_pt,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(pt1);
return;
} 
#undef NL

A68_VOID  PJZAELA_pt2(void)
{ 
A68_32  QJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt2);
A_CALLPROC(VOPAELA_outints,(A_HVEC(QJZAELA,KLCAELA_ptflt,A68_INT )),(A_HVEC(QJZAELA,KLCAELA_ptflt,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(pt2);
return;
} 
#undef NL

A68_VOID  RJZAELA_pt3(void)
{ 
A_PROC_ENTRY(pt3);
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
A_PROC_EXIT(pt3);
return;
} 
#undef NL

A68_VOID  SJZAELA_pt4(void)
{ 
A68_32  TJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UJZAELA;  /* OPERATORS - trim index */
A_PROC_ENTRY(pt4);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(TJZAELA,LLCAELA_str,A68_INT )),(A_HVEC(TJZAELA,LLCAELA_str,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2800: */
 /* line 2801: */
A_CALLPROC(XOPAELA_outstring,(A_VTRIM(UJZAELA,(JIPAELA_string),A_VTSCRIPT(&(UJZAELA.upb),(JIPAELA_string).upb,1,LIPAELA_stringsize))),(A_VTRIM(UJZAELA,(JIPAELA_string),A_VTSCRIPT(&(UJZAELA.upb),(JIPAELA_string).upb,1,LIPAELA_stringsize)),(XOPAELA_outstring).nonlocals));
} 
A_PROC_EXIT(pt4);
return;
} 
#undef NL

A68_VOID  VJZAELA_pt5(void)
{ 
A_PROC_ENTRY(pt5);
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
A_PROC_EXIT(pt5);
return;
} 
#undef NL

A68_VOID  WJZAELA_pt6(void)
{ 
A68_32  XJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt6);
A_CALLPROC(VOPAELA_outints,(A_HVEC(XJZAELA,XKCAELA_end,A68_INT )),(A_HVEC(XJZAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(pt6);
return;
} 
#undef NL

A68_VOID  YJZAELA_pt7(void)
{ 
A68_32  ZJZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt7);
A_CALLPROC(VOPAELA_outints,(A_HVEC(ZJZAELA,PNCAELA_inull,A68_INT )),(A_HVEC(ZJZAELA,PNCAELA_inull,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(pt7);
return;
} 
#undef NL

A_STATIC A68_VOID  AKZAELA_aliensetup(void)
{ 
A68_167 * BKZAELA_alienfd;
A68_287  CKZAELA;  /* collateral clause result */
A68_287 * DKZAELA;  /* YIELD */
A68_268 * EKZAELA_fncall;
A68_268  FKZAELA;  /* collateral clause result */
A68_170  GKZAELA;  /* OPERATORS - mode -> union mode */
A68_269 *** HKZAELA;  /* YIELD */
A68_265  IKZAELA;  /* collateral clause result */
A68_265 * JKZAELA;  /* YIELD */
A_PROC_ENTRY(aliensetup);
{ 
A_CALLPROC(WOPAELA_outid,(ZHPAELA_compsymb),(ZHPAELA_compsymb,(WOPAELA_outid).nonlocals));
 /* line 2814: */
BKZAELA_alienfd = UPUAELA_defaultfndec(ZHPAELA_compsymb, A68_TRUE, EXCAELA_fn_ok, (-1), GXCAELA_localdec);
 /* line 2815: */
CKZAELA.Dec = BKZAELA_alienfd;
CKZAELA.Rest = FMPAELA_fnstack;
DKZAELA = A_HEAP(A68_287 ) ;
(*DKZAELA) = CKZAELA ;
FMPAELA_fnstack = DKZAELA;
 /* line 2816: */
JLPAELA_fndec = (*(&(FMPAELA_fnstack->Dec)));
 /* line 2817: */
EKZAELA_fncall = (A_HEAP(A68_268 ));
FKZAELA.F = JLPAELA_fndec;
FKZAELA.Pvals = BUCAELA_nilparamvals;
FKZAELA.Nextpvals = (A68_269 **)A68_NIL;
FKZAELA.Attr = A_UNITE(GKZAELA,mode6,6,MRCAELA_attrnull);
(*EKZAELA_fncall) = FKZAELA;
 /* line 2818: */
HKZAELA = (&(EKZAELA_fncall->Nextpvals)) ;
(*HKZAELA) = (&(EKZAELA_fncall->Pvals));
 /* line 2819: */
IKZAELA.Fncall = EKZAELA_fncall;
IKZAELA.Explicitparam = A68_TRUE;
IKZAELA.Nextmp = (A68_169 **)A68_NIL;
 /* line 2820: */
IKZAELA.Rest = GMPAELA_fncallstack;
JKZAELA = A_HEAP(A68_265 ) ;
(*JKZAELA) = IKZAELA ;
GMPAELA_fncallstack = JKZAELA;
} 
A_PROC_EXIT(aliensetup);
return;
} 
#undef NL

A68_VOID  KKZAELA_biopstart(void)
{ 
A68_32  LKZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(biopstart);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(LKZAELA,MMCAELA_biop,A68_INT )),(A_HVEC(LKZAELA,MMCAELA_biop,A68_INT ),(VOPAELA_outints).nonlocals));
AKZAELA_aliensetup();
} 
A_PROC_EXIT(biopstart);
return;
} 
#undef NL

A68_VOID  MKZAELA_alienstart(void)
{ 
A68_32  NKZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(alienstart);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(NKZAELA,NMCAELA_alien,A68_INT )),(A_HVEC(NKZAELA,NMCAELA_alien,A68_INT ),(VOPAELA_outints).nonlocals));
AKZAELA_aliensetup();
} 
A_PROC_EXIT(alienstart);
return;
} 
#undef NL

A68_VOID  OKZAELA_bioppr(void)
{ 
A_PROC_ENTRY(bioppr);
{ 
A_CALLPROC(RBRAELA_outmparams,((*(*(&(GMPAELA_fncallstack->Fncall)))), A68_FALSE),((*(*(&(GMPAELA_fncallstack->Fncall)))), A68_FALSE,(RBRAELA_outmparams).nonlocals));
 /* line 2830: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 2831: */
FMPAELA_fnstack = (*(&(FMPAELA_fnstack->Rest)));
 /* line 2832: */
JLPAELA_fndec = (*(&(FMPAELA_fnstack->Dec)));
 /* line 2833: */
 /* line 2834: */
RLPAELA_type = (*(&(JLPAELA_fndec->Ans)));
} 
A_PROC_EXIT(bioppr);
return;
} 
#undef NL

A68_VOID  PKZAELA_biopparampr(void)
{ 
A68_270  QKZAELA;  /* clause result */
A68_205  RKZAELA;  /* avoid structure result */
A68_270  SKZAELA;  /* OPERATORS - mode -> union mode */
A68_200  TKZAELA;  /* avoid structure result */
A68_270  UKZAELA;  /* OPERATORS - mode -> union mode */
A68_201  VKZAELA;  /* avoid structure result */
A68_270  WKZAELA;  /* OPERATORS - mode -> union mode */
A68_202  XKZAELA;  /* avoid structure result */
A68_270  YKZAELA;  /* OPERATORS - mode -> union mode */
A68_270  ZKZAELA;  /* OPERATORS - mode -> union mode */
A68_270  ALZAELA;  /* OPERATORS - mode -> union mode */
A68_270  BLZAELA_pval;
A68_268 * CLZAELA_fncall;
A68_396  DLZAELA_fnno_mpno;
A68_169  ELZAELA;  /* collateral clause result */
A68_32  FLZAELA;  /* OPERATORS - istruct -> vector */
A68_32  GLZAELA;  /* OPERATORS - simple index */
A68_INT  HLZAELA;  /* YIELD */
A68_260  ILZAELA;  /* OPERATORS - mode -> union mode */
A68_169 * JLZAELA;  /* YIELD */
A68_269  KLZAELA;  /* collateral clause result */
A68_269 * LLZAELA;  /* YIELD */
A68_269 ** MLZAELA;  /* YIELD */
A68_269 *** NLZAELA;  /* YIELD */
A_PROC_ENTRY(biopparampr);
{ 
 /* line 2839: */
if ( (BMPAELA_which==OXCAELA_wattr) )
{ 
MLDAELA_makeattrid( FJPAELA_attr, &RKZAELA );
QKZAELA = A_UNITE(SKZAELA,mode5,5,RKZAELA);
} 
else
{ 
 /* line 2840: */
if ( (BMPAELA_which==JXCAELA_winteger) )
{ 
XKDAELA_makeintid( SLPAELA_integer, &TKZAELA );
QKZAELA = A_UNITE(UKZAELA,mode1,1,TKZAELA);
} 
else
{ 
 /* line 2841: */
if ( (BMPAELA_which==KXCAELA_wtype) )
{ 
CLDAELA_maketypeid( RLPAELA_type, &VKZAELA );
QKZAELA = A_UNITE(WKZAELA,mode2,2,VKZAELA);
} 
else
{ 
 /* line 2842: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
HLDAELA_makectypeid( OMPAELA_ctype, &XKZAELA );
QKZAELA = A_UNITE(YKZAELA,mode3,3,XKZAELA);
} 
else
{ 
 /* line 2843: */
if ( (BMPAELA_which==NXCAELA_wfn) )
{ 
 /* line 2844: */
QKZAELA = A_UNITE(ZKZAELA,mode4,4,WLPAELA_paramfncall);
} 
else
{ 
QKZAELA = A_UNITE(ALZAELA,mode6,6,DRCAELA_flt);
} 
} 
} 
} 
} 
BLZAELA_pval = QKZAELA;
 /* line 2845: */
CLZAELA_fncall = (*(&(GMPAELA_fncallstack->Fncall)));
 /* line 2846: */
DLZAELA_fnno_mpno = YOVAELA_next_mparamno(FMPAELA_fnstack);
 /* line 2847: */
ELZAELA.Sort = XWCAELA_expl_par;
GLZAELA = A_HISVEC(FLZAELA,DLZAELA_fnno_mpno,2,A68_INT ) ;
HLZAELA = 2 ;
ELZAELA.Mparamno = A_VINDEX(GLZAELA,HLZAELA);
ELZAELA.Value = A_UNITE(ILZAELA,mode6,6,DRCAELA_flt);
ELZAELA.Rest = IQCAELA_nilmparams;
 /* line 2848: */
JLZAELA = A_HEAP(A68_169 ) ;
(*JLZAELA) = ELZAELA ;
IPVAELA_add_mparam(JLZAELA, FMPAELA_fnstack);
 /* line 2849: */
KLZAELA.Val = BLZAELA_pval;
KLZAELA.Rest = (A68_269 *)A68_NIL;
LLZAELA = A_HEAP(A68_269 ) ;
(*LLZAELA) = KLZAELA ;
MLZAELA = (*(&(CLZAELA_fncall->Nextpvals))) ;
(*MLZAELA) = LLZAELA;
 /* line 2850: */
 /* line 2851: */
NLZAELA = (&(CLZAELA_fncall->Nextpvals)) ;
(*NLZAELA) = (&((*(*(&(CLZAELA_fncall->Nextpvals))))->Rest));
} 
A_PROC_EXIT(biopparampr);
return;
} 
#undef NL

A68_VOID  OLZAELA_constintpr(void)
{ 
A68_222  PLZAELA;  /* OPERATORS - mode -> union mode */
A68_172  QLZAELA;  /* OPERATORS - mode -> union mode */
A68_185  RLZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(constintpr);
{ 
JNPAELA_delaytype = MPCAELA_constint;
OMPAELA_ctype = A_UNITE(PLZAELA,mode11,11,KRCAELA_unset);
RLPAELA_type = A_UNITE(QLZAELA,mode11,11,KRCAELA_unset);
SLPAELA_integer = A_UNITE(RLZAELA,mode15,15,KRCAELA_unset);
} 
A_PROC_EXIT(constintpr);
return;
} 
#undef NL

A68_VOID  SLZAELA_const2int2pr(void)
{ 
A_PROC_ENTRY(const2int2pr);
JNPAELA_delaytype = PPCAELA_const2int2;
A_PROC_EXIT(const2int2pr);
return;
} 
#undef NL

A68_VOID  TLZAELA_constint2pr(void)
{ 
A_PROC_ENTRY(constint2pr);
JNPAELA_delaytype = NPCAELA_constint2;
A_PROC_EXIT(constint2pr);
return;
} 
#undef NL

A68_VOID  ULZAELA_del(void)
{ 
A68_222  VLZAELA_ctype1;
A68_172  WLZAELA_ans;
A68_327  XLZAELA_test1;
A68_327  YLZAELA_test2;
A68_327  ZLZAELA_test3;
A68_327  AMZAELA;  /* avoid structure result */
A68_327  BMZAELA;  /* avoid structure result */
A68_445  CMZAELA;  /* collateral clause result */
A68_263  DMZAELA;  /* OPERATORS - unite union */
A68_263  EMZAELA;  /* OPERATORS - unite union */
A68_262  FMZAELA;  /* OPERATORS - istruct -> vector */
A68_222  GMZAELA;  /* united object - for case conformity */
A68_BOOL  HMZAELA;  /* clause result */
A68_327  IMZAELA;  /* avoid structure result */
A68_445  JMZAELA;  /* collateral clause result */
A68_263  KMZAELA;  /* OPERATORS - unite union */
A68_263  LMZAELA;  /* OPERATORS - unite union */
A68_262  MMZAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  NMZAELA;  /* optbool result */
A68_185  OMZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PMZAELA;  /* YIELD */
A68_185  QMZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RMZAELA;  /* YIELD */
A68_263  SMZAELA;  /* OPERATORS - unite union */
A68_262  TMZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  UMZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  VMZAELA;  /* YIELD */
A68_263  WMZAELA;  /* OPERATORS - unite union */
A68_262  XMZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  YMZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  ZMZAELA;  /* YIELD */
A68_445  ANZAELA;  /* collateral clause result */
A68_263  BNZAELA;  /* OPERATORS - unite union */
A68_263  CNZAELA;  /* OPERATORS - unite union */
A68_262  DNZAELA;  /* OPERATORS - istruct -> vector */
A68_185  ENZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  FNZAELA;  /* YIELD */
A68_263  GNZAELA;  /* OPERATORS - unite union */
A68_262  HNZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  INZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  JNZAELA;  /* YIELD */
A68_32  KNZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_396  LNZAELA;  /* collateral clause result */
A68_32  MNZAELA;  /* OPERATORS - istruct -> vector */
A68_396  NNZAELA;  /* collateral clause result */
A68_BOOL  ONZAELA;  /* optbool result */
A68_32  PNZAELA;  /* OPERATORS - istruct -> vector */
A68_46  SNZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(del);
{ 
TLPAELA_integer1 = (*(&(DOPAELA_integerstack->I)));
 /* line 2862: */
VLZAELA_ctype1 = (*(&(FOPAELA_sucstack->Ct)));
 /* line 2863: */
WLZAELA_ans = (*(&(JLPAELA_fndec->Ans)));
 /* line 2864: */
YLZAELA_test2 = ASRAELA_true;
ZLZAELA_test3 = ASRAELA_true;
 /* line 2865: */
NQSAELA_typetest( (*(&(JLPAELA_fndec->Param))), WLZAELA_ans, &AMZAELA );
XLZAELA_test1 = AMZAELA;
 /* line 2866: */
 /* line 2867: */
if ( LSRAELA_(XLZAELA_test1, BSRAELA_false) )
{ 
 /* line 2868: */
 /* line 2869: */
UQPAELA_fault(71, VJAAOSI_nullmsg);
} 
else
{ 
NQSAELA_typetest( (*(&(FOPAELA_sucstack->T))), WLZAELA_ans, &BMZAELA );
YLZAELA_test2 = BMZAELA;
 /* line 2870: */
 /* line 2871: */
if ( LSRAELA_(YLZAELA_test2, BSRAELA_false) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2872: */
JKPAELA_fp1 = WLZAELA_ans;
KKPAELA_fp2 = (*(&(FOPAELA_sucstack->T)));
 /* line 2873: */
 /* line 2874: */
CMZAELA.data[0] = A_UUNITE(DMZAELA,0,JKPAELA_fp1);
CMZAELA.data[1] = A_UUNITE(EMZAELA,0,KKPAELA_fp2);
 /* line 2875: */
VZPAELA_namefaultp(72, A_HISVEC(FMZAELA,CMZAELA,2,A68_263 ));
} 
 /* line 2876: */
GMZAELA = OMPAELA_ctype ;
switch ( GMZAELA.mode )
{ 
case 11: /* STRUCT(INT)  */
HMZAELA = A68_FALSE;
break;
default: 
 /* line 2877: */
HMZAELA = A68_TRUE;
break;
} 
if ( HMZAELA )
{ 
NQSAELA_typetest( RLPAELA_type, WLZAELA_ans, &IMZAELA );
ZLZAELA_test3 = IMZAELA;
 /* line 2878: */
 /* line 2879: */
if ( LSRAELA_(ZLZAELA_test3, BSRAELA_false) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2880: */
JKPAELA_fp1 = WLZAELA_ans;
KKPAELA_fp2 = RLPAELA_type;
 /* line 2881: */
 /* line 2882: */
JMZAELA.data[0] = A_UUNITE(KMZAELA,0,JKPAELA_fp1);
JMZAELA.data[1] = A_UUNITE(LMZAELA,0,KKPAELA_fp2);
 /* line 2883: */
 /* line 2884: */
 /* line 2885: */
VZPAELA_namefaultp(106, A_HISVEC(MMZAELA,JMZAELA,2,A68_263 ));
} 
} 
} 
 /* line 2886: */
NMZAELA = (JNPAELA_delaytype==NPCAELA_constint2);
if ( ! NMZAELA )
{ /* line 2887: */
NMZAELA = (JNPAELA_delaytype==PPCAELA_const2int2);
}
if ( NMZAELA )
{ 
PMZAELA = HDRAELA_giveint(TLPAELA_integer1) ;
RKPAELA_fp5 = A_UNITE(OMZAELA,mode1,1,PMZAELA);
RMZAELA = HDRAELA_giveint(SLPAELA_integer) ;
SKPAELA_fp6 = A_UNITE(QMZAELA,mode1,1,RMZAELA);
 /* line 2888: */
 /* line 2889: */
VMZAELA = 0 ;
PZRAELA_testintegers(CWRAELA_checkge, (&TLPAELA_integer1), A_UNITE(UMZAELA,mode1,1,VMZAELA), 73, A_HVEC(TMZAELA,A_UTABUNITE(SMZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 2890: */
 /* line 2891: */
ZMZAELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(YMZAELA,mode1,1,ZMZAELA), 76, A_HVEC(XMZAELA,A_UTABUNITE(WMZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6),A68_263 ));
 /* line 2892: */
ANZAELA.data[0] = A_UTABUNITE(BNZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
 /* line 2893: */
ANZAELA.data[1] = A_UTABUNITE(CNZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 2894: */
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), TLPAELA_integer1, 74, A_HISVEC(DNZAELA,ANZAELA,2,A68_263 ));
} 
else
{ 
FNZAELA = HDRAELA_giveint(SLPAELA_integer) ;
RKPAELA_fp5 = A_UNITE(ENZAELA,mode1,1,FNZAELA);
 /* line 2895: */
 /* line 2896: */
 /* line 2897: */
JNZAELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(INZAELA,mode1,1,JNZAELA), 76, A_HVEC(HNZAELA,A_UTABUNITE(GNZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
} 
 /* line 2899: */
 /* line 2900: */
if ( (JNPAELA_delaytype==QPCAELA_idelayintcon) )
{ 
 /* line 2901: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(KNZAELA,HLCAELA_idelay,A68_INT )),(A_HVEC(KNZAELA,HLCAELA_idelay,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
LNZAELA.data[0] = ILCAELA_adelay;
LNZAELA.data[1] = JNPAELA_delaytype;
 /* line 2902: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(MNZAELA,LNZAELA,2,A68_INT )),(A_HISVEC(MNZAELA,LNZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 2904: */
 /* line 2905: */
NNZAELA.data[0] = MLCAELA_dummy;
ONZAELA = LSRAELA_(XLZAELA_test1, CSRAELA_unknown);
if ( ! ONZAELA )
{ONZAELA = LSRAELA_(YLZAELA_test2, CSRAELA_unknown);
}
if ( ! ONZAELA )
{ONZAELA = LSRAELA_(ZLZAELA_test3, CSRAELA_unknown);
}
NNZAELA.data[1] = (ONZAELA);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(PNZAELA,NNZAELA,2,A68_INT )),(A_HISVEC(PNZAELA,NNZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2906: */
 /* line 2907: */
if ( (JNPAELA_delaytype==QPCAELA_idelayintcon) )
{ 
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
 /* line 2908: */
HUQAELA_loadctype(VLZAELA_ctype1);
} 
else
{ 
 /* line 2909: */
if ( (JNPAELA_delaytype==PPCAELA_const2int2) )
{ 
HUQAELA_loadctype(VLZAELA_ctype1);
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
 /* line 2910: */
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 2911: */
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
} 
else
{ 
 /* line 2912: */
if ( (JNPAELA_delaytype==NPCAELA_constint2) )
{ 
HUQAELA_loadctype(VLZAELA_ctype1);
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
 /* line 2913: */
HUQAELA_loadctype(VLZAELA_ctype1);
 /* line 2914: */
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
} 
else
{ 
 /* line 2915: */
if ( (JNPAELA_delaytype==MPCAELA_constint) )
{ 
HUQAELA_loadctype(VLZAELA_ctype1);
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
 /* line 2916: */
HUQAELA_loadctype(VLZAELA_ctype1);
 /* line 2917: */
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
} 
else
{ 
 /* line 2918: */
if ( (JNPAELA_delaytype==OPCAELA_const2int) )
{ 
HUQAELA_loadctype(VLZAELA_ctype1);
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
 /* line 2919: */
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 2920: */
MJQAELA_loadint(TLPAELA_integer1, A68_FALSE);
} 
else
{ 
 /* line 2921: */
UQPAELA_fault(0, A_HVEC(SNZAELA,RNZAELA,A68_VC ));
} 
} 
} 
} 
} 
 /* line 2922: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 2923: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
 /* line 2924: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 2925: */
 /* line 2926: */
RLPAELA_type = WLZAELA_ans;
} 
A_PROC_EXIT(del);
return;
} 
#undef NL

A68_VOID  TNZAELA_idel(void)
{ 
A68_185  UNZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  VNZAELA;  /* YIELD */
A68_263  WNZAELA;  /* OPERATORS - unite union */
A68_262  XNZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  YNZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  ZNZAELA;  /* YIELD */
A_PROC_ENTRY(idel);
{ 
VNZAELA = HDRAELA_giveint((*(&(DOPAELA_integerstack->I)))) ;
RKPAELA_fp5 = A_UNITE(UNZAELA,mode1,1,VNZAELA);
 /* line 2930: */
 /* line 2931: */
ZNZAELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&(DOPAELA_integerstack->I)), A_UNITE(YNZAELA,mode1,1,ZNZAELA), 75, A_HVEC(XNZAELA,A_UTABUNITE(WNZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 2932: */
 /* line 2933: */
JNPAELA_delaytype = QPCAELA_idelayintcon;
} 
A_PROC_EXIT(idel);
return;
} 
#undef NL

A68_VOID  AOZAELA_sampintpr(void)
{ 
A68_263  BOZAELA;  /* OPERATORS - unite union */
A68_262  COZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  DOZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EOZAELA;  /* YIELD */
A_PROC_ENTRY(sampintpr);
{ 
KNPAELA_sampletype = MNPAELA_ints1;
 /* line 2938: */
RKPAELA_fp5 = SLPAELA_integer;
 /* line 2939: */
 /* line 2940: */
 /* line 2941: */
EOZAELA = 1 ;
RNPAELA_intervalok = PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(DOZAELA,mode1,1,EOZAELA), 162, A_HVEC(COZAELA,A_UTABUNITE(BOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
} 
A_PROC_EXIT(sampintpr);
return;
} 
#undef NL

A68_VOID  FOZAELA_sampint2pr(void)
{ 
A68_185  GOZAELA;  /* avoid structure result */
A68_185  HOZAELA_s;
A68_190  IOZAELA;  /* collateral clause result */
A68_185  JOZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  KOZAELA;  /* YIELD */
A68_449  LOZAELA;  /* collateral clause result */
A68_263  MOZAELA;  /* OPERATORS - unite union */
A68_263  NOZAELA;  /* OPERATORS - unite union */
A68_263  OOZAELA;  /* OPERATORS - unite union */
A68_262  POZAELA;  /* OPERATORS - istruct -> vector */
A68_190 * QOZAELA;  /* YIELD */
A68_185  ROZAELA;  /* OPERATORS - mode -> union mode */
A68_190  SOZAELA;  /* collateral clause result */
A68_185  TOZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  UOZAELA;  /* YIELD */
A68_449  VOZAELA;  /* collateral clause result */
A68_263  WOZAELA;  /* OPERATORS - unite union */
A68_263  XOZAELA;  /* OPERATORS - unite union */
A68_263  YOZAELA;  /* OPERATORS - unite union */
A68_262  ZOZAELA;  /* OPERATORS - istruct -> vector */
A68_190 * APZAELA;  /* YIELD */
A68_185  BPZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sampint2pr);
{ 
KNPAELA_sampletype = NNPAELA_ints2;
 /* line 2945: */
RKPAELA_fp5 = (*(&(DOPAELA_integerstack->I)));
 /* line 2946: */
SKPAELA_fp6 = SLPAELA_integer;
 /* line 2947: */
DSDAELA_uncheckedint( (*(&(DOPAELA_integerstack->I))), &GOZAELA );
HOZAELA_s = GOZAELA;
 /* line 2948: */
 /* line 2949: */
if ( RNPAELA_intervalok )
{ 
IOZAELA.Opno = HPCAELA_diminus;
KOZAELA = 1 ;
IOZAELA.L = A_UNITE(JOZAELA,mode1,1,KOZAELA);
IOZAELA.R = HOZAELA_s;
 /* line 2950: */
LOZAELA.data[0] = A_UTABUNITE(MOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
LOZAELA.data[1] = A_UTABUNITE(NOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 2951: */
LOZAELA.data[2] = A_UTABUNITE(OOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
QOZAELA = A_HEAP(A68_190 ) ;
(*QOZAELA) = IOZAELA ;
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(ROZAELA,mode7,7,QOZAELA), 163, A_HISVEC(POZAELA,LOZAELA,3,A68_263 ));
 /* line 2952: */
SOZAELA.Opno = HPCAELA_diminus;
SOZAELA.L = HOZAELA_s;
UOZAELA = 1 ;
SOZAELA.R = A_UNITE(TOZAELA,mode1,1,UOZAELA);
 /* line 2953: */
VOZAELA.data[0] = A_UTABUNITE(WOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
VOZAELA.data[1] = A_UTABUNITE(XOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 2954: */
VOZAELA.data[2] = A_UTABUNITE(YOZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 2955: */
 /* line 2956: */
APZAELA = A_HEAP(A68_190 ) ;
(*APZAELA) = SOZAELA ;
PZRAELA_testintegers(BWRAELA_checkle, (&SLPAELA_integer), A_UNITE(BPZAELA,mode7,7,APZAELA), 163, A_HISVEC(ZOZAELA,VOZAELA,3,A68_263 ));
} 
} 
A_PROC_EXIT(sampint2pr);
return;
} 
#undef NL

A68_VOID  CPZAELA_notypeset(void)
{ 
A68_185  DPZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EPZAELA;  /* YIELD */
A68_232  FPZAELA_cquery;
A68_172 * GPZAELA;  /* YIELD */
A68_232 * HPZAELA;  /* YIELD */
A68_222  IPZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(notypeset);
{ 
EPZAELA = 0 ;
SLPAELA_integer = A_UNITE(DPZAELA,mode1,1,EPZAELA);
 /* line 2960: */
 /* line 2961: */
RLPAELA_type = (*(&(JLPAELA_fndec->Param)));
 /* line 2962: */
GPZAELA = (&((&FPZAELA_cquery)->Querytype)) ;
(*GPZAELA) = RLPAELA_type;
 /* line 2963: */
 /* line 2964: */
HPZAELA = A_HEAP(A68_232 ) ;
(*HPZAELA) = FPZAELA_cquery ;
OMPAELA_ctype = A_UNITE(IPZAELA,mode13,13,HPZAELA);
} 
A_PROC_EXIT(notypeset);
return;
} 
#undef NL

A68_VOID  JPZAELA_samp(void)
{ 
A68_396  KPZAELA;  /* collateral clause result */
A68_32  LPZAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  MPZAELA;  /* optbool result */
A68_327  NPZAELA_test1;
A68_327  OPZAELA_test2;
A68_327  PPZAELA;  /* avoid structure result */
A68_327  QPZAELA;  /* avoid structure result */
A68_445  RPZAELA;  /* collateral clause result */
A68_263  SPZAELA;  /* OPERATORS - unite union */
A68_263  TPZAELA;  /* OPERATORS - unite union */
A68_262  UPZAELA;  /* OPERATORS - istruct -> vector */
A68_396  VPZAELA;  /* collateral clause result */
A68_BOOL  WPZAELA;  /* optbool result */
A68_32  XPZAELA;  /* OPERATORS - istruct -> vector */
A68_46  AQZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(samp);
{ 
KPZAELA.data[0] = ZMCAELA_sample;
KPZAELA.data[1] = KNPAELA_sampletype;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(LPZAELA,KPZAELA,2,A68_INT )),(A_HISVEC(LPZAELA,KPZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2968: */
MPZAELA = DHTAELA_isvoid((*(&(JLPAELA_fndec->Param))));
if ( ! MPZAELA )
{ /* line 2969: */
MPZAELA = DHTAELA_isvoid((*(&(JLPAELA_fndec->Ans))));
}
if ( MPZAELA )
{ 
 /* line 2970: */
 /* line 2971: */
UQPAELA_fault(191, VJAAOSI_nullmsg);
} 
else
{ 
OPZAELA_test2 = ASRAELA_true;
 /* line 2972: */
NQSAELA_typetest( (*(&(JLPAELA_fndec->Param))), (*(&(JLPAELA_fndec->Ans))), &PPZAELA );
NPZAELA_test1 = PPZAELA;
 /* line 2973: */
 /* line 2974: */
if ( LSRAELA_(NPZAELA_test1, BSRAELA_false) )
{ 
 /* line 2975: */
 /* line 2976: */
UQPAELA_fault(164, VJAAOSI_nullmsg);
} 
else
{ 
NQSAELA_typetest( RLPAELA_type, (*(&(JLPAELA_fndec->Ans))), &QPZAELA );
OPZAELA_test2 = QPZAELA;
 /* line 2977: */
 /* line 2978: */
if ( LSRAELA_(OPZAELA_test2, BSRAELA_false) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 2979: */
JKPAELA_fp1 = (*(&(JLPAELA_fndec->Ans)));
KKPAELA_fp2 = RLPAELA_type;
 /* line 2980: */
RPZAELA.data[0] = A_UUNITE(SPZAELA,0,JKPAELA_fp1);
 /* line 2981: */
RPZAELA.data[1] = A_UUNITE(TPZAELA,0,KKPAELA_fp2);
 /* line 2982: */
 /* line 2983: */
VZPAELA_namefaultp(165, A_HISVEC(UPZAELA,RPZAELA,2,A68_263 ));
} 
} 
 /* line 2984: */
VPZAELA.data[0] = MLCAELA_dummy;
WPZAELA = LSRAELA_(NPZAELA_test1, CSRAELA_unknown);
if ( ! WPZAELA )
{WPZAELA = LSRAELA_(OPZAELA_test2, CSRAELA_unknown);
}
VPZAELA.data[1] = (WPZAELA);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(XPZAELA,VPZAELA,2,A68_INT )),(A_HISVEC(XPZAELA,VPZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 2985: */
 /* line 2986: */
if ( (KNPAELA_sampletype>0) )
{ 
MJQAELA_loadint((*(&(DOPAELA_integerstack->I))), A68_FALSE);
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 2987: */
 /* line 2988: */
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
} 
else
{ 
 /* line 2989: */
 /* line 2990: */
UQPAELA_fault(0, A_HVEC(AQZAELA,ZPZAELA,A68_VC ));
} 
} 
 /* line 2991: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 2992: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 2993: */
 /* line 2994: */
RLPAELA_type = (*(&(JLPAELA_fndec->Ans)));
} 
A_PROC_EXIT(samp);
return;
} 
#undef NL

A68_VOID  BQZAELA_timeintpr(void)
{ 
A68_263  CQZAELA;  /* OPERATORS - unite union */
A68_262  DQZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  EQZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  FQZAELA;  /* YIELD */
A_PROC_ENTRY(timeintpr);
{ 
LNPAELA_timetype = MNPAELA_ints1;
 /* line 2998: */
RKPAELA_fp5 = SLPAELA_integer;
 /* line 2999: */
 /* line 3000: */
 /* line 3001: */
FQZAELA = 1 ;
RNPAELA_intervalok = PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(EQZAELA,mode1,1,FQZAELA), 166, A_HVEC(DQZAELA,A_UTABUNITE(CQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
} 
A_PROC_EXIT(timeintpr);
return;
} 
#undef NL

A68_VOID  GQZAELA_timeint2pr(void)
{ 
A68_185  HQZAELA;  /* avoid structure result */
A68_185  IQZAELA_s;
A68_190  JQZAELA;  /* collateral clause result */
A68_185  KQZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  LQZAELA;  /* YIELD */
A68_449  MQZAELA;  /* collateral clause result */
A68_263  NQZAELA;  /* OPERATORS - unite union */
A68_263  OQZAELA;  /* OPERATORS - unite union */
A68_263  PQZAELA;  /* OPERATORS - unite union */
A68_262  QQZAELA;  /* OPERATORS - istruct -> vector */
A68_190 * RQZAELA;  /* YIELD */
A68_185  SQZAELA;  /* OPERATORS - mode -> union mode */
A68_190  TQZAELA;  /* collateral clause result */
A68_185  UQZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  VQZAELA;  /* YIELD */
A68_449  WQZAELA;  /* collateral clause result */
A68_263  XQZAELA;  /* OPERATORS - unite union */
A68_263  YQZAELA;  /* OPERATORS - unite union */
A68_263  ZQZAELA;  /* OPERATORS - unite union */
A68_262  ARZAELA;  /* OPERATORS - istruct -> vector */
A68_190 * BRZAELA;  /* YIELD */
A68_185  CRZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(timeint2pr);
{ 
LNPAELA_timetype = NNPAELA_ints2;
 /* line 3005: */
RKPAELA_fp5 = (*(&(DOPAELA_integerstack->I)));
 /* line 3006: */
SKPAELA_fp6 = SLPAELA_integer;
 /* line 3007: */
DSDAELA_uncheckedint( (*(&(DOPAELA_integerstack->I))), &HQZAELA );
IQZAELA_s = HQZAELA;
 /* line 3008: */
 /* line 3009: */
if ( RNPAELA_intervalok )
{ 
JQZAELA.Opno = HPCAELA_diminus;
LQZAELA = 1 ;
JQZAELA.L = A_UNITE(KQZAELA,mode1,1,LQZAELA);
JQZAELA.R = IQZAELA_s;
 /* line 3010: */
MQZAELA.data[0] = A_UTABUNITE(NQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
MQZAELA.data[1] = A_UTABUNITE(OQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 3011: */
MQZAELA.data[2] = A_UTABUNITE(PQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
RQZAELA = A_HEAP(A68_190 ) ;
(*RQZAELA) = JQZAELA ;
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(SQZAELA,mode7,7,RQZAELA), 167, A_HISVEC(QQZAELA,MQZAELA,3,A68_263 ));
 /* line 3012: */
TQZAELA.Opno = HPCAELA_diminus;
TQZAELA.L = IQZAELA_s;
VQZAELA = 1 ;
TQZAELA.R = A_UNITE(UQZAELA,mode1,1,VQZAELA);
 /* line 3013: */
WQZAELA.data[0] = A_UTABUNITE(XQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
WQZAELA.data[1] = A_UTABUNITE(YQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 3014: */
WQZAELA.data[2] = A_UTABUNITE(ZQZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
 /* line 3015: */
 /* line 3016: */
BRZAELA = A_HEAP(A68_190 ) ;
(*BRZAELA) = TQZAELA ;
PZRAELA_testintegers(BWRAELA_checkle, (&SLPAELA_integer), A_UNITE(CRZAELA,mode7,7,BRZAELA), 167, A_HISVEC(ARZAELA,WQZAELA,3,A68_263 ));
} 
} 
A_PROC_EXIT(timeint2pr);
return;
} 
#undef NL

A68_VOID  DRZAELA_fast(void)
{ 
A_PROC_ENTRY(fast);
SNPAELA_tfaster = A68_TRUE;
A_PROC_EXIT(fast);
return;
} 
#undef NL

A68_VOID  ERZAELA_slow(void)
{ 
A_PROC_ENTRY(slow);
SNPAELA_tfaster = A68_FALSE;
A_PROC_EXIT(slow);
return;
} 
#undef NL

A68_VOID  FRZAELA_notypeset2(void)
{ 
A68_185  GRZAELA;  /* OPERATORS - mode -> union mode */
A68_INT  HRZAELA;  /* YIELD */
A68_232  IRZAELA_cquery;
A68_172  JRZAELA;  /* clause result */
A68_172 * KRZAELA;  /* YIELD */
A68_232 * LRZAELA;  /* YIELD */
A68_222  MRZAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(notypeset2);
{ 
HRZAELA = 0 ;
SLPAELA_integer = A_UNITE(GRZAELA,mode1,1,HRZAELA);
 /* line 3024: */
 /* line 3025: */
if ( SNPAELA_tfaster )
{ 
JRZAELA = (*(&(JLPAELA_fndec->Ans)));
} 
else
{ 
JRZAELA = (*(&(JLPAELA_fndec->Param)));
} 
RLPAELA_type = JRZAELA;
 /* line 3026: */
KRZAELA = (&((&IRZAELA_cquery)->Querytype)) ;
(*KRZAELA) = RLPAELA_type;
 /* line 3027: */
 /* line 3028: */
LRZAELA = A_HEAP(A68_232 ) ;
(*LRZAELA) = IRZAELA_cquery ;
OMPAELA_ctype = A_UNITE(MRZAELA,mode13,13,LRZAELA);
} 
A_PROC_EXIT(notypeset2);
return;
} 
#undef NL

A68_VOID  NRZAELA_tscale(void)
{ 
A68_32  ORZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  PRZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_167 * QRZAELA_spec;
A68_167 * RRZAELA_body;
A68_BOOL  SRZAELA;  /* optbool result */
A68_178 * TRZAELA_spectype;
A68_178  URZAELA;  /* collateral clause result */
A68_178 * VRZAELA_bodytype;
A68_178  WRZAELA;  /* collateral clause result */
A68_BOOL  XRZAELA;  /* optbool result */
A68_BOOL  YRZAELA;  /* optbool result */
A68_327  ZRZAELA_test1;
A68_327  ASZAELA_test2;
A68_172  BSZAELA;  /* OPERATORS - mode -> union mode */
A68_172  CSZAELA;  /* OPERATORS - mode -> union mode */
A68_327  DSZAELA;  /* avoid structure result */
A68_172  ESZAELA;  /* OPERATORS - mode -> union mode */
A68_172  FSZAELA;  /* OPERATORS - mode -> union mode */
A68_449  GSZAELA;  /* collateral clause result */
A68_263  HSZAELA;  /* OPERATORS - mode -> union mode */
A68_263  ISZAELA;  /* OPERATORS - unite union */
A68_263  JSZAELA;  /* OPERATORS - unite union */
A68_262  KSZAELA;  /* OPERATORS - istruct -> vector */
A68_172  LSZAELA;  /* clause result */
A68_172  MSZAELA_inittype;
A68_327  NSZAELA;  /* avoid structure result */
A68_445  OSZAELA;  /* collateral clause result */
A68_263  PSZAELA;  /* OPERATORS - unite union */
A68_263  QSZAELA;  /* OPERATORS - unite union */
A68_262  RSZAELA;  /* OPERATORS - istruct -> vector */
A68_396  SSZAELA;  /* collateral clause result */
A68_BOOL  TSZAELA;  /* optbool result */
A68_32  USZAELA;  /* OPERATORS - istruct -> vector */
A68_396  VSZAELA;  /* collateral clause result */
A68_32  WSZAELA;  /* OPERATORS - istruct -> vector */
A68_46  ZSZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tscale);
{ 
if ( SNPAELA_tfaster )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(ORZAELA,OOCAELA_faster,A68_INT )),(A_HVEC(ORZAELA,OOCAELA_faster,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(PRZAELA,POCAELA_slower,A68_INT )),(A_HVEC(PRZAELA,POCAELA_slower,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 3032: */
UBRAELA_outfncall((*(*(&(GMPAELA_fncallstack->Fncall)))), A68_FALSE);
 /* line 3033: */
QRZAELA_spec = JLPAELA_fndec;
 /* line 3034: */
RRZAELA_body = (*(&((*(&(GMPAELA_fncallstack->Fncall)))->F)));
 /* line 3035: */
 /* line 3036: */
SRZAELA = ((*(&((*(&(QRZAELA_spec->Fninfo)))->Status)))!=CXCAELA_fn_flt);
if ( SRZAELA )
{ /* line 3037: */
SRZAELA = ((*(&((*(&(RRZAELA_body->Fninfo)))->Status)))!=CXCAELA_fn_flt);
}
 /* line 3038: */
if ( SRZAELA )
{ 
TRZAELA_spectype = (A_HEAP(A68_178 ));
URZAELA.From = (*(&(QRZAELA_spec->Param)));
URZAELA.To = (*(&(QRZAELA_spec->Ans)));
(*TRZAELA_spectype) = URZAELA;
 /* line 3039: */
VRZAELA_bodytype = (A_HEAP(A68_178 ));
WRZAELA.From = (*(&(RRZAELA_body->Param)));
WRZAELA.To = (*(&(RRZAELA_body->Ans)));
(*VRZAELA_bodytype) = WRZAELA;
 /* line 3040: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 3041: */
XRZAELA = SNPAELA_tfaster;
if ( XRZAELA )
{ /* line 3042: */
XRZAELA = DHTAELA_isvoid((*(&(QRZAELA_spec->Ans))));
}
if ( XRZAELA )
{ 
 /* line 3043: */
UQPAELA_fault(192, VJAAOSI_nullmsg);
} 
else
{ 
YRZAELA = !SNPAELA_tfaster;
if ( YRZAELA )
{ /* line 3044: */
YRZAELA = DHTAELA_isvoid((*(&(QRZAELA_spec->Param))));
}
if ( YRZAELA )
{ 
 /* line 3045: */
UQPAELA_fault(193, VJAAOSI_nullmsg);
} 
else
{ 
ASZAELA_test2 = ASRAELA_true;
 /* line 3046: */
NQSAELA_typetest( A_UNITE(CSZAELA,mode6,6,VRZAELA_bodytype), A_UNITE(BSZAELA,mode6,6,TRZAELA_spectype), &DSZAELA );
ZRZAELA_test1 = DSZAELA;
 /* line 3047: */
 /* line 3048: */
if ( LSRAELA_(ZRZAELA_test1, BSRAELA_false) )
{ 
JKPAELA_fp1 = A_UNITE(ESZAELA,mode6,6,TRZAELA_spectype);
KKPAELA_fp2 = A_UNITE(FSZAELA,mode6,6,VRZAELA_bodytype);
LKPAELA_fp3 = (*(&(QRZAELA_spec->Id)));
 /* line 3049: */
GSZAELA.data[0] = A_UNITE(HSZAELA,mode13,13,LKPAELA_fp3);
GSZAELA.data[1] = A_UUNITE(ISZAELA,0,JKPAELA_fp1);
 /* line 3050: */
GSZAELA.data[2] = A_UUNITE(JSZAELA,0,KKPAELA_fp2);
 /* line 3051: */
 /* line 3052: */
VZPAELA_namefaultp(169, A_HISVEC(KSZAELA,GSZAELA,3,A68_263 ));
} 
else
{ 
if ( SNPAELA_tfaster )
{ 
LSZAELA = (*(&(QRZAELA_spec->Ans)));
} 
else
{ 
LSZAELA = (*(&(QRZAELA_spec->Param)));
} 
MSZAELA_inittype = LSZAELA;
 /* line 3053: */
NQSAELA_typetest( RLPAELA_type, MSZAELA_inittype, &NSZAELA );
ASZAELA_test2 = NSZAELA;
 /* line 3054: */
 /* line 3055: */
if ( LSRAELA_(ASZAELA_test2, BSRAELA_false) )
{ 
JKPAELA_fp1 = MSZAELA_inittype;
KKPAELA_fp2 = RLPAELA_type;
 /* line 3056: */
OSZAELA.data[0] = A_UUNITE(PSZAELA,0,JKPAELA_fp1);
 /* line 3057: */
OSZAELA.data[1] = A_UUNITE(QSZAELA,0,KKPAELA_fp2);
 /* line 3058: */
 /* line 3059: */
VZPAELA_namefaultp(170, A_HISVEC(RSZAELA,OSZAELA,2,A68_263 ));
} 
} 
 /* line 3060: */
SSZAELA.data[0] = MLCAELA_dummy;
TSZAELA = LSRAELA_(ZRZAELA_test1, CSRAELA_unknown);
if ( ! TSZAELA )
{TSZAELA = LSRAELA_(ASZAELA_test2, CSRAELA_unknown);
}
SSZAELA.data[1] = (TSZAELA);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(USZAELA,SSZAELA,2,A68_INT )),(A_HISVEC(USZAELA,SSZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3061: */
 /* line 3062: */
if ( (LNPAELA_timetype>0) )
{ 
VSZAELA.data[0] = MLCAELA_dummy;
VSZAELA.data[1] = LNPAELA_timetype;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(WSZAELA,VSZAELA,2,A68_INT )),(A_HISVEC(WSZAELA,VSZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3063: */
MJQAELA_loadint((*(&(DOPAELA_integerstack->I))), A68_FALSE);
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 3064: */
 /* line 3065: */
MJQAELA_loadint(SLPAELA_integer, A68_FALSE);
} 
else
{ 
 /* line 3066: */
 /* line 3067: */
UQPAELA_fault(0, A_HVEC(ZSZAELA,YSZAELA,A68_VC ));
} 
} 
} 
 /* line 3068: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
 /* line 3069: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 3070: */
 /* line 3071: */
 /* line 3072: */
RLPAELA_type = (*(&(QRZAELA_spec->Ans)));
} 
} 
A_PROC_EXIT(tscale);
return;
} 
#undef NL

A68_VOID  ATZAELA_rck(void)
{ 
A68_327  BTZAELA_test1;
A68_327  CTZAELA_test2;
A68_172  DTZAELA_ans;
A68_172  ETZAELA;  /* united object - for case conformity */
A68_175 * FTZAELA_st;
A68_185  HTZAELA;  /* OPERATORS - mode -> union mode */
A68_185  GTZAELA_lower;
A68_185  JTZAELA;  /* OPERATORS - mode -> union mode */
A68_185  ITZAELA_upper;
A68_VC  KTZAELA_id;
A68_175 * LTZAELA_therest;
A68_172  MTZAELA;  /* united object - for case conformity */
A68_182  NTZAELA_flt;
A68_327  OTZAELA;  /* avoid structure result */
A68_327  PTZAELA;  /* avoid structure result */
A68_445  QTZAELA;  /* collateral clause result */
A68_263  RTZAELA;  /* OPERATORS - unite union */
A68_263  STZAELA;  /* OPERATORS - unite union */
A68_262  TTZAELA;  /* OPERATORS - istruct -> vector */
A68_172  UTZAELA;  /* avoid structure result */
A68_172  VTZAELA;  /* united object - for case conformity */
A68_173 * WTZAELA_rp;
A68_247  XTZAELA;  /* united object - for case conformity */
A68_248  YTZAELA_pra;
A68_185  ZTZAELA;  /* avoid structure result */
A68_185  AUZAELA;  /* avoid structure result */
A68_172  BUZAELA;  /* avoid structure result */
A68_172  CUZAELA;  /* united object - for case conformity */
A68_173 * DUZAELA_rp;
A68_247  EUZAELA;  /* united object - for case conformity */
A68_248  FUZAELA_pra;
A68_448  GUZAELA;  /* collateral clause result */
A68_263  HUZAELA;  /* OPERATORS - mode -> union mode */
A68_263  IUZAELA;  /* OPERATORS - unite union */
A68_263  JUZAELA;  /* OPERATORS - unite union */
A68_263  KUZAELA;  /* OPERATORS - mode -> union mode */
A68_263  LUZAELA;  /* OPERATORS - unite union */
A68_263  MUZAELA;  /* OPERATORS - unite union */
A68_262  NUZAELA;  /* OPERATORS - istruct -> vector */
A68_448  OUZAELA;  /* collateral clause result */
A68_263  PUZAELA;  /* OPERATORS - mode -> union mode */
A68_263  QUZAELA;  /* OPERATORS - unite union */
A68_263  RUZAELA;  /* OPERATORS - unite union */
A68_263  SUZAELA;  /* OPERATORS - mode -> union mode */
A68_263  TUZAELA;  /* OPERATORS - unite union */
A68_263  UUZAELA;  /* OPERATORS - unite union */
A68_262  VUZAELA;  /* OPERATORS - istruct -> vector */
A68_INT  WUZAELA_altnum;
A68_172  XUZAELA;  /* avoid structure result */
A68_172  YUZAELA;  /* united object - for case conformity */
A68_182  ZUZAELA_flt;
A68_173 * AVZAELA_rp;
A68_247  BVZAELA;  /* united object - for case conformity */
A68_249 * CVZAELA_rpal;
A68_249 * DVZAELA_pa;
A68_BOOL  EVZAELA;  /* optbool result */
A68_250  FVZAELA_ps;
A68_251 * GVZAELA_chalts;
A68_BOOL  HVZAELA;  /* optbool result */
A68_252  IVZAELA;  /* united object - for case conformity */
A68_CHAR  JVZAELA_ch;
A68_253  KVZAELA_cr;
A68_INT  LVZAELA;  /* YIELD */
A68_INT  MVZAELA;  /* YIELD */
A68_32  NVZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_396  OVZAELA;  /* collateral clause result */
A68_BOOL  PVZAELA;  /* optbool result */
A68_32  QVZAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(rck);
{ 
BTZAELA_test1 = CSRAELA_unknown;
CTZAELA_test2 = CSRAELA_unknown;
 /* line 3076: */
DTZAELA_ans = (*(&(JLPAELA_fndec->Ans)));
 /* line 3077: */
 /* line 3078: */
ETZAELA = (*(&(JLPAELA_fndec->Param))) ;
switch ( ETZAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
FTZAELA_st = (ETZAELA.data.mode3);
 /* line 3079: */
{ 
GTZAELA_lower = A_UNITE(HTZAELA,mode4,4,DRCAELA_flt);
ITZAELA_upper = A_UNITE(JTZAELA,mode4,4,DRCAELA_flt);
 /* line 3080: */
KTZAELA_id = TTCAOST_nullid;
 /* line 3081: */
LTZAELA_therest = (*(&(FTZAELA_st->Rest)));
 /* line 3082: */
 /* line 3083: */
MTZAELA = (*(&(FTZAELA_st->T))) ;
switch ( MTZAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
NTZAELA_flt = (MTZAELA.data.mode10);
 /* line 3084: */
 /* line 3085: */
/*SKIP*/;
break;
default: 
{ 
NQSAELA_typetest( (*(&(FTZAELA_st->T))), DTZAELA_ans, &OTZAELA );
BTZAELA_test1 = OTZAELA;
 /* line 3086: */
 /* line 3087: */
if ( LSRAELA_(BTZAELA_test1, BSRAELA_false) )
{ 
 /* line 3089: */
UQPAELA_fault(77, VJAAOSI_nullmsg);
} 
else
{ 
NQSAELA_typetest( RLPAELA_type, DTZAELA_ans, &PTZAELA );
CTZAELA_test2 = PTZAELA;
 /* line 3090: */
 /* line 3091: */
if ( LSRAELA_(CTZAELA_test2, BSRAELA_false) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 3092: */
JKPAELA_fp1 = DTZAELA_ans;
KKPAELA_fp2 = RLPAELA_type;
 /* line 3093: */
QTZAELA.data[0] = A_UUNITE(RTZAELA,0,JKPAELA_fp1);
QTZAELA.data[1] = A_UUNITE(STZAELA,0,KKPAELA_fp2);
 /* line 3095: */
 /* line 3096: */
 /* line 3097: */
 /* line 3098: */
VZPAELA_namefaultp(78, A_HISVEC(TTZAELA,QTZAELA,2,A68_263 ));
} 
} 
} 
break;
} 
 /* line 3099: */
 /* line 3100: */
VIDAELA_primtype( (*(&(LTZAELA_therest->T))), A68_TRUE, &UTZAELA );
VTZAELA = UTZAELA ;
switch ( VTZAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 3101: */
/*SKIP*/;
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
WTZAELA_rp = (VTZAELA.data.mode1);
 /* line 3102: */
 /* line 3103: */
XTZAELA = (*(&(WTZAELA_rp->U))) ;
switch ( XTZAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
YTZAELA_pra = (XTZAELA.data.mode1);
 /* line 3104: */
{ 
KTZAELA_id = (*(&(YTZAELA_pra.Idinfo->Id)));
 /* line 3105: */
CDRAELA_simplify( YTZAELA_pra.Lwb, A68_TRUE, &ZTZAELA );
GTZAELA_lower = ZTZAELA;
 /* line 3106: */
 /* line 3107: */
 /* line 3108: */
CDRAELA_simplify( YTZAELA_pra.Upb, A68_TRUE, &AUZAELA );
ITZAELA_upper = AUZAELA;
} 
break;
default: 
 /* line 3110: */
 /* line 3111: */
UQPAELA_fault(80, VJAAOSI_nullmsg);
break;
} 
break;
default: 
 /* line 3113: */
UQPAELA_fault(80, VJAAOSI_nullmsg);
break;
} 
 /* line 3114: */
LTZAELA_therest = (*(&(LTZAELA_therest->Rest)));
 /* line 3115: */
 /* line 3116: */
if ( (LTZAELA_therest==DQCAELA_nilst) )
{ 
 /* line 3117: */
 /* line 3118: */
UQPAELA_fault(81, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 3119: */
VIDAELA_primtype( (*(&(LTZAELA_therest->T))), A68_TRUE, &BUZAELA );
CUZAELA = BUZAELA ;
switch ( CUZAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 3120: */
/*SKIP*/;
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
DUZAELA_rp = (CUZAELA.data.mode1);
 /* line 3121: */
 /* line 3122: */
EUZAELA = (*(&(DUZAELA_rp->U))) ;
switch ( EUZAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
FUZAELA_pra = (EUZAELA.data.mode1);
 /* line 3123: */
{ 
QKPAELA_fp0 = FUZAELA_pra.Lwb;
TKPAELA_fpcolon = GTZAELA_lower;
 /* line 3124: */
RKPAELA_fp5 = FUZAELA_pra.Upb;
SKPAELA_fp6 = ITZAELA_upper;
 /* line 3125: */
LKPAELA_fp3 = KTZAELA_id;
MKPAELA_fp4 = (*(&(FUZAELA_pra.Idinfo->Id)));
 /* line 3126: */
 /* line 3127: */
GUZAELA.data[0] = A_UNITE(HUZAELA,mode13,13,MKPAELA_fp4);
GUZAELA.data[1] = A_UTABUNITE(IUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
GUZAELA.data[2] = A_UTABUNITE(JUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
GUZAELA.data[3] = A_UNITE(KUZAELA,mode13,13,LKPAELA_fp3);
GUZAELA.data[4] = A_UTABUNITE(LUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",TKPAELA_fpcolon);
GUZAELA.data[5] = A_UTABUNITE(MUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
PZRAELA_testintegers(DWRAELA_checkeq, (&GTZAELA_lower), FUZAELA_pra.Lwb, 107, A_HISVEC(NUZAELA,GUZAELA,6,A68_263 ));
 /* line 3129: */
 /* line 3130: */
OUZAELA.data[0] = A_UNITE(PUZAELA,mode13,13,MKPAELA_fp4);
OUZAELA.data[1] = A_UTABUNITE(QUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
OUZAELA.data[2] = A_UTABUNITE(RUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
OUZAELA.data[3] = A_UNITE(SUZAELA,mode13,13,LKPAELA_fp3);
OUZAELA.data[4] = A_UTABUNITE(TUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",TKPAELA_fpcolon);
OUZAELA.data[5] = A_UTABUNITE(UUZAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
 /* line 3132: */
 /* line 3133: */
PZRAELA_testintegers(DWRAELA_checkeq, (&ITZAELA_upper), FUZAELA_pra.Upb, 107, A_HISVEC(VUZAELA,OUZAELA,6,A68_263 ));
} 
break;
default: 
 /* line 3135: */
 /* line 3136: */
UQPAELA_fault(108, VJAAOSI_nullmsg);
break;
} 
break;
default: 
 /* line 3138: */
UQPAELA_fault(108, VJAAOSI_nullmsg);
break;
} 
 /* line 3139: */
LTZAELA_therest = (*(&(LTZAELA_therest->Rest)));
 /* line 3140: */
 /* line 3141: */
if ( (LTZAELA_therest==DQCAELA_nilst) )
{ 
 /* line 3142: */
 /* line 3143: */
UQPAELA_fault(81, VJAAOSI_nullmsg);
} 
else
{ 
WUZAELA_altnum = 0;
 /* line 3144: */
 /* line 3145: */
VIDAELA_primtype( (*(&(LTZAELA_therest->T))), A68_TRUE, &XUZAELA );
YUZAELA = XUZAELA ;
switch ( YUZAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
ZUZAELA_flt = (YUZAELA.data.mode10);
 /* line 3146: */
/*SKIP*/;
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
AVZAELA_rp = (YUZAELA.data.mode1);
 /* line 3147: */
 /* line 3148: */
BVZAELA = (*(&(AVZAELA_rp->U))) ;
switch ( BVZAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
CVZAELA_rpal = (BVZAELA.data.mode2);
 /* line 3149: */
{ 
DVZAELA_pa = CVZAELA_rpal;
 /* line 3150: */
for ( ;; )
{ 
EVZAELA = (WUZAELA_altnum<3);
if ( EVZAELA )
{ /* line 3151: */
EVZAELA = (DVZAELA_pa!=BQCAELA_nilpalts);
}
if ( !(EVZAELA) ) break;
 /* line 3152: */
if ( ((*(&(DVZAELA_pa->U)))!=EQCAELA_niltype) )
{ 
UQPAELA_fault(83, VJAAOSI_nullmsg);
 /* line 3154: */
WUZAELA_altnum = 0;
 /* line 3155: */
 /* line 3156: */
DVZAELA_pa = BQCAELA_nilpalts;
} 
else
{ 
WUZAELA_altnum+=1;
 /* line 3157: */
 /* line 3158: */
 /* line 3159: */
DVZAELA_pa = (*(&(DVZAELA_pa->Rest)));
} 
}
 /* line 3160: */
 /* line 3161: */
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
FVZAELA_ps = (BVZAELA.data.mode3);
 /* line 3162: */
{ 
GVZAELA_chalts = FVZAELA_ps.Charalts;
 /* line 3163: */
for ( ;; )
{ 
HVZAELA = (WUZAELA_altnum<3);
if ( HVZAELA )
{ /* line 3164: */
HVZAELA = (GVZAELA_chalts!=LQCAELA_nilcharalts);
}
if ( !(HVZAELA) ) break;
 /* line 3165: */
IVZAELA = (*(&(GVZAELA_chalts->Alts))) ;
switch ( IVZAELA.mode )
{ 
case 1: /* CHAR */
JVZAELA_ch = (IVZAELA.data.mode1);
 /* line 3166: */
WUZAELA_altnum+=1;
break;
case 2: /* STRUCT(CHAR,CHAR)  */
KVZAELA_cr = (IVZAELA.data.mode2);
 /* line 3167: */
 /* line 3168: */
 /* line 3169: */
 /* line 3170: */
LVZAELA = (A68_INT)(unsigned char)KVZAELA_cr.Upchar ;
MVZAELA = (A68_INT)(unsigned char)KVZAELA_cr.Lwchar ;
WUZAELA_altnum = (((WUZAELA_altnum+1)+(*(&((&A_R1INDEX(JPPAELA_charset,LVZAELA))->Value))))-(*(&((&A_R1INDEX(JPPAELA_charset,MVZAELA))->Value))));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3171: */
 /* line 3172: */
GVZAELA_chalts = (*(&(GVZAELA_chalts->Rest)));
}
 /* line 3173: */
 /* line 3174: */
} 
break;
default: 
 /* line 3176: */
 /* line 3177: */
UQPAELA_fault(86, VJAAOSI_nullmsg);
break;
} 
break;
default: 
 /* line 3179: */
UQPAELA_fault(86, VJAAOSI_nullmsg);
break;
} 
 /* line 3180: */
 /* line 3181: */
if ( (WUZAELA_altnum==1) )
{ 
 /* line 3183: */
UQPAELA_fault(84, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 3184: */
if ( (WUZAELA_altnum>2) )
{ 
 /* line 3186: */
UQPAELA_fault(85, VJAAOSI_nullmsg);
} 
} 
 /* line 3187: */
 /* line 3188: */
if ( ((*(&(LTZAELA_therest->Rest)))!=DQCAELA_nilst) )
{ 
 /* line 3189: */
 /* line 3190: */
 /* line 3191: */
 /* line 3192: */
 /* line 3193: */
UQPAELA_fault(87, VJAAOSI_nullmsg);
} 
} 
} 
} 
break;
default: 
 /* line 3194: */
UQPAELA_fault(88, VJAAOSI_nullmsg);
break;
} 
 /* line 3195: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(NVZAELA,QLCAELA_ram,A68_INT )),(A_HVEC(NVZAELA,QLCAELA_ram,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3196: */
OVZAELA.data[0] = MLCAELA_dummy;
PVZAELA = LSRAELA_(BTZAELA_test1, CSRAELA_unknown);
if ( ! PVZAELA )
{PVZAELA = LSRAELA_(CTZAELA_test2, CSRAELA_unknown);
}
OVZAELA.data[1] = (PVZAELA);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(QVZAELA,OVZAELA,2,A68_INT )),(A_HISVEC(QVZAELA,OVZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3197: */
HUQAELA_loadctype(OMPAELA_ctype);
 /* line 3198: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 3199: */
 /* line 3200: */
RLPAELA_type = DTZAELA_ans;
} 
A_PROC_EXIT(rck);
return;
} 
#undef NL

A68_VOID  RVZAELA_arith1(void)
{ 
A_PROC_ENTRY(arith1);
{ 
 /* line 3204: */
if ( !SATAELA_arithtype((*(&(JLPAELA_fndec->Ans)))) )
{ 
 /* line 3208: */
UQPAELA_fault(139, VJAAOSI_nullmsg);
} 
 /* line 3209: */
 /* line 3210: */
QLPAELA_inarith = A68_TRUE;
} 
A_PROC_EXIT(arith1);
return;
} 
#undef NL

A68_VOID  SVZAELA_arith2(void)
{ 
A68_185  TVZAELA;  /* avoid structure result */
A_PROC_ENTRY(arith2);
{ 
QLPAELA_inarith = A68_FALSE;
 /* line 3214: */
if ( MJQAELA_loadint(SLPAELA_integer, A68_FALSE) )
{ 
DSDAELA_uncheckedint( SLPAELA_integer, &TVZAELA );
SLPAELA_integer = TVZAELA;
} 
 /* line 3215: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 3216: */
 /* line 3217: */
RLPAELA_type = (*(&(JLPAELA_fndec->Ans)));
} 
A_PROC_EXIT(arith2);
return;
} 
#undef NL

A68_VOID  UVZAELA_reformpr(void)
{ 
A68_172  VVZAELA_ans;
A68_327  XVZAELA;  /* avoid structure result */
A68_327  WVZAELA_result;
A68_445  YVZAELA;  /* collateral clause result */
A68_263  ZVZAELA;  /* OPERATORS - unite union */
A68_263  AWZAELA;  /* OPERATORS - unite union */
A68_262  BWZAELA;  /* OPERATORS - istruct -> vector */
A68_172  CWZAELA;  /* OPERATORS - mode -> union mode */
A68_396  DWZAELA;  /* collateral clause result */
A68_32  EWZAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(reformpr);
{ 
VVZAELA_ans = (*(&(JLPAELA_fndec->Ans)));
 /* line 3221: */
JKUAELA_reformcheck( (*(&(JLPAELA_fndec->Param))), VVZAELA_ans, &XVZAELA );
WVZAELA_result = XVZAELA;
 /* line 3222: */
 /* line 3223: */
if ( LSRAELA_(WVZAELA_result, BSRAELA_false) )
{ 
JKPAELA_fp1 = (*(&(JLPAELA_fndec->Param)));
KKPAELA_fp2 = VVZAELA_ans;
 /* line 3224: */
YVZAELA.data[0] = A_UUNITE(ZVZAELA,0,JKPAELA_fp1);
YVZAELA.data[1] = A_UUNITE(AWZAELA,0,KKPAELA_fp2);
SZPAELA_faultp(116, A_HISVEC(BWZAELA,YVZAELA,2,A68_263 ));
 /* line 3225: */
 /* line 3226: */
RLPAELA_type = A_UNITE(CWZAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
DWZAELA.data[0] = ZLCAELA_reform;
DWZAELA.data[1] = (LSRAELA_(WVZAELA_result, CSRAELA_unknown));
 /* line 3227: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EWZAELA,DWZAELA,2,A68_INT )),(A_HISVEC(EWZAELA,DWZAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 3228: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 3229: */
 /* line 3230: */
RLPAELA_type = VVZAELA_ans;
} 
A_PROC_EXIT(reformpr);
return;
} 
#undef NL

A68_VOID  FWZAELA_mod2(void)
{ 
A68_294  GWZAELA;  /* collateral clause result */
A68_294 * HWZAELA;  /* YIELD */
A_PROC_ENTRY(mod2);
{ 
GWZAELA.State = ZPCAELA_inother;
GWZAELA.Rest = (A68_294 *)A68_NIL;
HWZAELA = A_HEAP(A68_294 ) ;
(*HWZAELA) = GWZAELA ;
DNPAELA_currentstate = HWZAELA;
 /* line 3234: */
ENPAELA_scopestack = CUCAELA_nilscope;
 /* line 3235: */
 /* line 3236: */
MTUAELA_newscope(EJCAELA_textstart, OLPAELA_ids, PLPAELA_fns);
} 
A_PROC_EXIT(mod2);
return;
} 
#undef NL

A68_VOID  IWZAELA_impctn(void)
{ 
A68_VC * JWZAELA;  /* YIELD */
A_PROC_ENTRY(impctn);
{ 
JWZAELA = (&((&JOPAELA_ctname)->Context)) ;
(*JWZAELA) = CIPAELA_ident;
CIPAELA_ident = TTCAOST_nullid;
} 
A_PROC_EXIT(impctn);
return;
} 
#undef NL

A68_VOID  KWZAELA_impsetct(void)
{ 
A68_VC * LWZAELA;  /* YIELD */
A68_INT  MWZAELA_j;
A68_160  NWZAELA;  /* procedure value */
A68_161  OWZAELA;  /* procedure value */
A68_162  PWZAELA;  /* procedure value */
A68_263  QWZAELA;  /* OPERATORS - mode -> union mode */
A68_262  RWZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * SWZAELA;  /* YIELD */
A_PROC_ENTRY(impsetct);
{ 
LWZAELA = (&((&JOPAELA_ctname)->Import)) ;
(*LWZAELA) = CIPAELA_ident;
ZKPAELA_kids = (A68_244 *)A68_NIL;
ALPAELA_kfns = (A68_166 *)A68_NIL;
 /* line 3243: */
 /* line 3244: */
 /* line 3245: */
if ( A_CALLPROC(FPPAELA_setcontext,(JOPAELA_ctname),(JOPAELA_ctname,(FPPAELA_setcontext).nonlocals)) )
{ 
for ( ;; )
{ 
 /* line 3246: */
if ( !(((MWZAELA_j = A_CALLPROC(BPPAELA_nextkept,(),((BPPAELA_nextkept).nonlocals)))!=0)) ) break;
 /* line 3247: */
NWZAELA.fn.fn_global = SYPAELA_findkid;
NWZAELA.nonlocals = A68_NIL;
OWZAELA.fn.fn_global = BZPAELA_newkid;
OWZAELA.nonlocals = A68_NIL;
PWZAELA.fn.fn_global = IZPAELA_newkfn;
PWZAELA.nonlocals = A68_NIL;
PYPAELA_inkept(NWZAELA, (MWZAELA_j==UWCAELA_exported), OWZAELA, PWZAELA);
}
 /* line 3249: */
 /* line 3250: */
} 
else
{ 
PKPAELA_fp9 = JOPAELA_ctname;
SZPAELA_faultp(102, A_HVEC(RWZAELA,A_UNITE(QWZAELA,mode15,15,PKPAELA_fp9),A68_263 ));
 /* line 3251: */
 /* line 3252: */
 /* line 3253: */
SWZAELA = (&((&JOPAELA_ctname)->Context)) ;
(*SWZAELA) = TTCAOST_nullid;
} 
} 
A_PROC_EXIT(impsetct);
return;
} 
#undef NL

A68_VOID  TWZAELA_impfn1(void)
{ 
A_PROC_ENTRY(impfn1);
KOPAELA_fna = LOPAELA_fnb = ZHPAELA_compsymb;
A_PROC_EXIT(impfn1);
return;
} 
#undef NL

A68_VOID  UWZAELA_impfn2(void)
{ 
A_PROC_ENTRY(impfn2);
KOPAELA_fna = ZHPAELA_compsymb;
A_PROC_EXIT(impfn2);
return;
} 
#undef NL

A68_VOID  VWZAELA_impfn3(void)
{ 
A68_167 * WWZAELA_fd1;
A68_167 * XWZAELA_fd2;
A68_168 * YWZAELA_f1;
A68_168 * ZWZAELA_f2;
A68_263  AXZAELA;  /* OPERATORS - mode -> union mode */
A68_262  BXZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * CXZAELA;  /* YIELD */
A68_BOOL  DXZAELA;  /* optbool result */
A68_263  EXZAELA;  /* OPERATORS - mode -> union mode */
A68_262  FXZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * GXZAELA;  /* YIELD */
A68_445  HXZAELA;  /* collateral clause result */
A68_263  IXZAELA;  /* OPERATORS - mode -> union mode */
A68_263  JXZAELA;  /* OPERATORS - mode -> union mode */
A68_262  KXZAELA;  /* OPERATORS - istruct -> vector */
A68_263  LXZAELA;  /* OPERATORS - mode -> union mode */
A68_262  MXZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  NXZAELA_message;
A68_449  OXZAELA;  /* collateral clause result */
A68_263  PXZAELA;  /* OPERATORS - mode -> union mode */
A68_263  QXZAELA;  /* OPERATORS - mode -> union mode */
A68_263  RXZAELA;  /* OPERATORS - mode -> union mode */
A68_262  SXZAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(impfn3);
{ 
WWZAELA_fd1 = (*(&(YQUAELA_fn_in_scope(KOPAELA_fna, PLPAELA_fns, CUCAELA_nilscope, A68_TRUE)->Fndec)));
 /* line 3263: */
XWZAELA_fd2 = (*(&(YQUAELA_fn_in_scope(LOPAELA_fnb, ALPAELA_kfns, CUCAELA_nilscope, A68_TRUE)->Fndec)));
 /* line 3264: */
YWZAELA_f1 = (*(&(WWZAELA_fd1->Fninfo)));
 /* line 3265: */
ZWZAELA_f2 = (*(&(XWZAELA_fd2->Fninfo)));
 /* line 3266: */
 /* line 3267: */
if ( ((*(&(YWZAELA_f1->Status)))==BXCAELA_fn_notdec) )
{ 
LKPAELA_fp3 = KOPAELA_fna;
 /* line 3268: */
SZPAELA_faultp(103, A_HVEC(BXZAELA,A_UNITE(AXZAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 3269: */
 /* line 3270: */
CXZAELA = (&(YWZAELA_f1->Status)) ;
(*CXZAELA) = CXCAELA_fn_flt;
} 
else
{ 
 /* line 3271: */
DXZAELA = ((*(&(YWZAELA_f1->Status)))==EXCAELA_fn_ok);
if ( DXZAELA )
{DXZAELA = !(*(&(YWZAELA_f1->Import)));
}
if ( DXZAELA )
{ 
LKPAELA_fp3 = KOPAELA_fna;
SZPAELA_faultp(99, A_HVEC(FXZAELA,A_UNITE(EXZAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 3272: */
 /* line 3273: */
GXZAELA = (&(YWZAELA_f1->Status)) ;
(*GXZAELA) = CXCAELA_fn_flt;
} 
} 
 /* line 3274: */
 /* line 3275: */
if ( ((*(&(ZWZAELA_f2->Status)))==BXCAELA_fn_notdec) )
{ 
 /* line 3276: */
if ( A_VC_NE((*(&((&JOPAELA_ctname)->Context))),TTCAOST_nullid) )
{ 
LKPAELA_fp3 = LOPAELA_fnb;
PKPAELA_fp9 = JOPAELA_ctname;
 /* line 3277: */
HXZAELA.data[0] = A_UNITE(IXZAELA,mode13,13,LKPAELA_fp3);
HXZAELA.data[1] = A_UNITE(JXZAELA,mode15,15,PKPAELA_fp9);
 /* line 3278: */
 /* line 3279: */
SZPAELA_faultp(97, A_HISVEC(KXZAELA,HXZAELA,2,A68_263 ));
} 
} 
else
{ 
 /* line 3280: */
if ( ((*(&(ZWZAELA_f2->Status)))==EXCAELA_fn_ok) )
{ 
 /* line 3281: */
if ( !(*(&(ZWZAELA_f2->Export))) )
{ 
LKPAELA_fp3 = LOPAELA_fnb;
 /* line 3282: */
SZPAELA_faultp(100, A_HVEC(MXZAELA,A_UNITE(LXZAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 3283: */
if ( ((*(&(YWZAELA_f1->Status)))==EXCAELA_fn_ok) )
{ 
YIPAELA_namestack = XIPAELA_nonames;
 /* line 3284: */
NXZAELA_message = LWSAELA_samespecfns(WWZAELA_fd1, XWZAELA_fd2, A68_FALSE);
 /* line 3285: */
 /* line 3286: */
if ( (NXZAELA_message==0) )
{ 
 /* line 3287: */
A_CALLPROC(EPPAELA_nextimport,(KOPAELA_fna, LOPAELA_fnb, JOPAELA_ctname),(KOPAELA_fna, LOPAELA_fnb, JOPAELA_ctname,(EPPAELA_nextimport).nonlocals));
} 
else
{ 
LKPAELA_fp3 = KOPAELA_fna;
NKPAELA_fp7 = (*WWZAELA_fd1);
OKPAELA_fp8 = (*XWZAELA_fd2);
 /* line 3288: */
 /* line 3289: */
OXZAELA.data[0] = A_UNITE(PXZAELA,mode13,13,LKPAELA_fp3);
OXZAELA.data[1] = A_UNITE(QXZAELA,mode14,14,(&NKPAELA_fp7));
OXZAELA.data[2] = A_UNITE(RXZAELA,mode14,14,(&OKPAELA_fp8));
VZPAELA_namefaultp(101, A_HISVEC(SXZAELA,OXZAELA,3,A68_263 ));
 /* line 3290: */
 /* line 3291: */
 /* line 3292: */
 /* line 3293: */
 /* line 3294: */
EWSAELA_specsflt(NXZAELA_message);
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(impfn3);
return;
} 
#undef NL

A68_VOID  TXZAELA_importpr(void)
{ 
A68_32  UXZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL * VXZAELA;  /* YIELD */
A_PROC_ENTRY(importpr);
{ 
 /* line 3298: */
if ( (PNPAELA_scope!=0) )
{ 
 /* line 3299: */
 /* line 3300: */
UQPAELA_fault(104, VJAAOSI_nullmsg);
} 
 /* line 3301: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(UXZAELA,ONCAELA_imported,A68_INT )),(A_HVEC(UXZAELA,ONCAELA_imported,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3302: */
VXZAELA = (&((*(&(JLPAELA_fndec->Fninfo)))->Import)) ;
(*VXZAELA) = A68_TRUE;
 /* line 3303: */
CNPAELA_nonunitbody = A68_TRUE;
 /* line 3304: */
 /* line 3305: */
RLPAELA_type = (*(&(JLPAELA_fndec->Ans)));
} 
A_PROC_EXIT(importpr);
return;
} 
#undef NL

A68_VOID  WXZAELA_multjoinpr(void)
{ 
A68_32  XXZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(multjoinpr);
A_CALLPROC(VOPAELA_outints,(A_HVEC(XXZAELA,WNCAELA_multjoin,A68_INT )),(A_HVEC(XXZAELA,WNCAELA_multjoin,A68_INT ),(VOPAELA_outints).nonlocals));
A_PROC_EXIT(multjoinpr);
return;
} 
#undef NL

A68_VOID  YXZAELA_char(void)
{ 
A68_222  ZXZAELA;  /* united object - for case conformity */
A68_203 * AYZAELA_p;
A68_222  BYZAELA;  /* OPERATORS - mode -> union mode */
A68_31  DYZAELA_generator;   /* proc value of non-global proc */
A68_VC  IYZAELA;  /* avoid structure result */
A68_VC  JYZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KYZAELA;  /* OPERATORS - assign op */
A68_31  MYZAELA_generator;   /* proc value of non-global proc */
A68_VC  RYZAELA;  /* avoid structure result */
A68_VC  SYZAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TYZAELA;  /* OPERATORS - assign op */
A68_445  UYZAELA;  /* collateral clause result */
A68_263  VYZAELA;  /* OPERATORS - mode -> union mode */
A68_263  WYZAELA;  /* OPERATORS - mode -> union mode */
A68_262  XYZAELA;  /* OPERATORS - istruct -> vector */
A68_172  YYZAELA;  /* OPERATORS - mode -> union mode */
A68_222  ZYZAELA;  /* OPERATORS - mode -> union mode */
A68_172  AZZAELA;  /* united object - for case conformity */
A68_173 * BZZAELA_ps;
A68_247  CZZAELA;  /* united object - for case conformity */
A68_250  DZZAELA_pst;
A68_54  EZZAELA;  /* OPERATORS - simple index */
A68_INT  FZZAELA;  /* YIELD */
A68_31  HZZAELA_generator;   /* proc value of non-global proc */
A68_VC  MZZAELA;  /* avoid structure result */
A68_INT  NZZAELA;  /* YIELD */
A68_CHAR * OZZAELA;  /* YIELD */
A68_INT  PZZAELA;  /* YIELD */
A68_CHAR * QZZAELA;  /* YIELD */
A68_445  RZZAELA;  /* collateral clause result */
A68_263  SZZAELA;  /* OPERATORS - mode -> union mode */
A68_263  TZZAELA;  /* OPERATORS - unite union */
A68_262  UZZAELA;  /* OPERATORS - istruct -> vector */
A68_172  VZZAELA;  /* OPERATORS - mode -> union mode */
A68_222  WZZAELA;  /* OPERATORS - mode -> union mode */
A68_234  XZZAELA;  /* collateral clause result */
A68_234 * YZZAELA;  /* YIELD */
A68_222  ZZZAELA;  /* OPERATORS - mode -> union mode */
A68_234  AAABELA;  /* collateral clause result */
A68_234 * BAABELA;  /* YIELD */
A68_222  CAABELA;  /* OPERATORS - mode -> union mode */
A68_234  DAABELA;  /* collateral clause result */
A68_234 * EAABELA;  /* YIELD */
A68_222  FAABELA;  /* OPERATORS - mode -> union mode */
A68_222  GAABELA;  /* united object - for case conformity */
A68_182  HAABELA_flt;
A68_INT  IAABELA;  /* clause result */
A_PROC_ENTRY(char);
{ 
RLPAELA_type = (*(&(FOPAELA_sucstack->T)));
 /* line 3312: */
 /* line 3313: */
ZXZAELA = (*(&(FOPAELA_sucstack->Ct))) ;
switch ( ZXZAELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
AYZAELA_p = (ZXZAELA.data.mode4);
 /* line 3314: */
 /* line 3315: */
if ( ((*(&(AYZAELA_p->Index)))>0) )
{ 
UQPAELA_fault(145, VJAAOSI_nullmsg);
 /* line 3316: */
OMPAELA_ctype = A_UNITE(BYZAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3317: */
if ( ((*(&(AYZAELA_p->Index)))==0) )
{ 
A_CLOSURE( DYZAELA_generator, EYZAELA_generator, FYZAELA_generator );
A_CALLPROC(DYZAELA_generator,(A68_FALSE, &IYZAELA),(A68_FALSE, &IYZAELA,(DYZAELA_generator).nonlocals));
KYZAELA = A_HVEC(JYZAELA,'\'',A68_CHAR ) ;
A_VASSIGN2(KYZAELA,IYZAELA,A68_CHAR ) ;
LKPAELA_fp3 = IYZAELA;
 /* line 3318: */
A_CLOSURE( MYZAELA_generator, NYZAELA_generator, OYZAELA_generator );
A_CALLPROC(MYZAELA_generator,(A68_FALSE, &RYZAELA),(A68_FALSE, &RYZAELA,(MYZAELA_generator).nonlocals));
TYZAELA = A_HVEC(SYZAELA,'/',A68_CHAR ) ;
A_VASSIGN2(TYZAELA,RYZAELA,A68_CHAR ) ;
MKPAELA_fp4 = RYZAELA;
 /* line 3319: */
UYZAELA.data[0] = A_UNITE(VYZAELA,mode13,13,LKPAELA_fp3);
UYZAELA.data[1] = A_UNITE(WYZAELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(XYZAELA,UYZAELA,2,A68_263 ));
 /* line 3320: */
RLPAELA_type = A_UNITE(YYZAELA,mode10,10,DRCAELA_flt);
 /* line 3321: */
 /* line 3322: */
OMPAELA_ctype = A_UNITE(ZYZAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3323: */
AZZAELA = (*(&(AYZAELA_p->Type))) ;
switch ( AZZAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
BZZAELA_ps = (AZZAELA.data.mode1);
 /* line 3324: */
 /* line 3325: */
CZZAELA = (*(&(BZZAELA_ps->U))) ;
switch ( CZZAELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
DZZAELA_pst = (CZZAELA.data.mode3);
 /* line 3326: */
EZZAELA = DZZAELA_pst.Charcheck ;
FZZAELA = (A68_INT)(unsigned char)LJPAELA_charval ;
if ( !(*(&A_VINDEX(EZZAELA,FZZAELA))) )
{ 
JKPAELA_fp1 = (*(&(AYZAELA_p->Type)));
 /* line 3327: */
A_CLOSURE( HZZAELA_generator, IZZAELA_generator, JZZAELA_generator );
A_CALLPROC(HZZAELA_generator,(A68_FALSE, &MZZAELA),(A68_FALSE, &MZZAELA,(HZZAELA_generator).nonlocals));
LKPAELA_fp3 = MZZAELA;
 /* line 3328: */
NZZAELA = 1 ;
OZZAELA = (&A_VINDEX(LKPAELA_fp3,NZZAELA)) ;
(*OZZAELA) = '\'';
PZZAELA = 2 ;
QZZAELA = (&A_VINDEX(LKPAELA_fp3,PZZAELA)) ;
(*QZZAELA) = LJPAELA_charval;
 /* line 3329: */
 /* line 3330: */
RZZAELA.data[0] = A_UNITE(SZZAELA,mode13,13,LKPAELA_fp3);
RZZAELA.data[1] = A_UUNITE(TZZAELA,0,JKPAELA_fp1);
VZPAELA_namefaultp(147, A_HISVEC(UZZAELA,RZZAELA,2,A68_263 ));
 /* line 3331: */
RLPAELA_type = A_UNITE(VZZAELA,mode10,10,DRCAELA_flt);
 /* line 3332: */
OMPAELA_ctype = A_UNITE(WZZAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3333: */
XZZAELA.T = (*(&(AYZAELA_p->Type)));
 /* line 3334: */
XZZAELA.Char = LJPAELA_charval;
 /* line 3335: */
YZZAELA = A_HEAP(A68_234 ) ;
(*YZZAELA) = XZZAELA ;
OMPAELA_ctype = A_UNITE(ZZZAELA,mode15,15,YZZAELA);
} 
break;
default: 
AAABELA.T = (*(&(AYZAELA_p->Type)));
 /* line 3336: */
AAABELA.Char = LJPAELA_charval;
 /* line 3337: */
BAABELA = A_HEAP(A68_234 ) ;
(*BAABELA) = AAABELA ;
OMPAELA_ctype = A_UNITE(CAABELA,mode15,15,BAABELA);
break;
} 
break;
default: 
DAABELA.T = (*(&(AYZAELA_p->Type)));
 /* line 3338: */
DAABELA.Char = LJPAELA_charval;
 /* line 3339: */
 /* line 3340: */
 /* line 3341: */
EAABELA = A_HEAP(A68_234 ) ;
(*EAABELA) = DAABELA ;
OMPAELA_ctype = A_UNITE(FAABELA,mode15,15,EAABELA);
break;
} 
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3342: */
GAABELA = OMPAELA_ctype ;
switch ( GAABELA.mode )
{ 
case 10: /* STRUCT(INT)  */
HAABELA_flt = (GAABELA.data.mode10);
IAABELA = MXCAELA_wflt;
break;
default: 
IAABELA = LXCAELA_wctype;
break;
} 
BMPAELA_which = IAABELA;
 /* line 3343: */
 /* line 3344: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(char);
return;
} 
#undef NL

A68_VOID  JAABELA_stringpr(void)
{ 
A68_BOOL  KAABELA_stringfail;
A68_222  LAABELA;  /* united object - for case conformity */
A68_203 * MAABELA_p;
A68_222  NAABELA;  /* OPERATORS - mode -> union mode */
A68_INT  OAABELA;  /* YIELD */
A68_31  QAABELA_generator;   /* proc value of non-global proc */
A68_VC  VAABELA;  /* avoid structure result */
A68_VC  WAABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XAABELA;  /* OPERATORS - assign op */
A68_445  YAABELA;  /* collateral clause result */
A68_263  ZAABELA;  /* OPERATORS - mode -> union mode */
A68_263  ABABELA;  /* OPERATORS - mode -> union mode */
A68_262  BBABELA;  /* OPERATORS - istruct -> vector */
A68_172  CBABELA;  /* OPERATORS - mode -> union mode */
A68_222  DBABELA;  /* OPERATORS - mode -> union mode */
A68_172  EBABELA;  /* united object - for case conformity */
A68_173 * FBABELA_ps;
A68_247  GBABELA;  /* united object - for case conformity */
A68_250  HBABELA_pst;
A68_VC  JBABELA;  /* avoid structure result */
A68_VC  IBABELA_string;
A68_CHAR * KBABELA_i;
A68_INT  LBABELA;  /* forall loop counter */
A68_54  MBABELA;  /* OPERATORS - simple index */
A68_INT  NBABELA;  /* YIELD */
A68_31  PBABELA_generator;   /* proc value of non-global proc */
A68_VC  UBABELA;  /* avoid structure result */
A68_INT  VBABELA;  /* YIELD */
A68_CHAR * WBABELA;  /* YIELD */
A68_INT  XBABELA;  /* YIELD */
A68_CHAR * YBABELA;  /* YIELD */
A68_445  ZBABELA;  /* collateral clause result */
A68_263  ACABELA;  /* OPERATORS - mode -> union mode */
A68_263  BCABELA;  /* OPERATORS - unite union */
A68_262  CCABELA;  /* OPERATORS - istruct -> vector */
A68_172  DCABELA;  /* OPERATORS - mode -> union mode */
A68_222  ECABELA;  /* OPERATORS - mode -> union mode */
A68_185  FCABELA;  /* OPERATORS - mode -> union mode */
A68_INT  GCABELA;  /* YIELD */
A68_181  HCABELA;  /* collateral clause result */
A68_181 * ICABELA;  /* YIELD */
A68_172  JCABELA;  /* OPERATORS - mode -> union mode */
A68_233  KCABELA;  /* collateral clause result */
A68_233 * LCABELA;  /* YIELD */
A68_222  MCABELA;  /* OPERATORS - mode -> union mode */
A68_222  NCABELA;  /* united object - for case conformity */
A68_182  OCABELA_flt;
A68_INT  PCABELA;  /* clause result */
A_PROC_ENTRY(stringpr);
{ 
KAABELA_stringfail = A68_FALSE;
 /* line 3348: */
RLPAELA_type = (*(&(FOPAELA_sucstack->T)));
 /* line 3349: */
 /* line 3350: */
LAABELA = (*(&(FOPAELA_sucstack->Ct))) ;
switch ( LAABELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
MAABELA_p = (LAABELA.data.mode4);
 /* line 3351: */
 /* line 3352: */
if ( ((*(&(MAABELA_p->Index)))>0) )
{ 
UQPAELA_fault(146, VJAAOSI_nullmsg);
 /* line 3353: */
OMPAELA_ctype = A_UNITE(NAABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3354: */
if ( ((*(&(MAABELA_p->Index)))==0) )
{ 
OAABELA = 17 ;
LKPAELA_fp3 = A_VINDEX(MFDAELA_toks,OAABELA).Id;
 /* line 3355: */
A_CLOSURE( QAABELA_generator, RAABELA_generator, SAABELA_generator );
A_CALLPROC(QAABELA_generator,(A68_FALSE, &VAABELA),(A68_FALSE, &VAABELA,(QAABELA_generator).nonlocals));
XAABELA = A_HVEC(WAABELA,'/',A68_CHAR ) ;
A_VASSIGN2(XAABELA,VAABELA,A68_CHAR ) ;
MKPAELA_fp4 = VAABELA;
 /* line 3356: */
YAABELA.data[0] = A_UNITE(ZAABELA,mode13,13,LKPAELA_fp3);
YAABELA.data[1] = A_UNITE(ABABELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(BBABELA,YAABELA,2,A68_263 ));
 /* line 3357: */
RLPAELA_type = A_UNITE(CBABELA,mode10,10,DRCAELA_flt);
 /* line 3358: */
 /* line 3359: */
OMPAELA_ctype = A_UNITE(DBABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3360: */
EBABELA = (*(&(MAABELA_p->Type))) ;
switch ( EBABELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
FBABELA_ps = (EBABELA.data.mode1);
 /* line 3361: */
 /* line 3362: */
GBABELA = (*(&(FBABELA_ps->U))) ;
switch ( GBABELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
HBABELA_pst = (GBABELA.data.mode3);
 /* line 3363: */
{ 
IJRAELA_joinstrings( 0, BJPAELA_strings, &JBABELA );
IBABELA_string = JBABELA;
 /* line 3364: */
 /* line 3365: */
LBABELA = IBABELA_string.upb -1;
KBABELA_i = IBABELA_string.data;
for (;LBABELA-- >= 0;
(KBABELA_i++
) )
{
 /* line 3366: */
MBABELA = HBABELA_pst.Charcheck ;
NBABELA = (A68_INT)(unsigned char)(*KBABELA_i) ;
if ( !(*(&A_VINDEX(MBABELA,NBABELA))) )
{ 
JKPAELA_fp1 = (*(&(MAABELA_p->Type)));
 /* line 3367: */
A_CLOSURE( PBABELA_generator, QBABELA_generator, RBABELA_generator );
A_CALLPROC(PBABELA_generator,(A68_FALSE, &UBABELA),(A68_FALSE, &UBABELA,(PBABELA_generator).nonlocals));
LKPAELA_fp3 = UBABELA;
 /* line 3368: */
VBABELA = 1 ;
WBABELA = (&A_VINDEX(LKPAELA_fp3,VBABELA)) ;
(*WBABELA) = '\'';
XBABELA = 2 ;
YBABELA = (&A_VINDEX(LKPAELA_fp3,XBABELA)) ;
(*YBABELA) = (*KBABELA_i);
 /* line 3369: */
 /* line 3370: */
ZBABELA.data[0] = A_UNITE(ACABELA,mode13,13,LKPAELA_fp3);
ZBABELA.data[1] = A_UUNITE(BCABELA,0,JKPAELA_fp1);
VZPAELA_namefaultp(147, A_HISVEC(CCABELA,ZBABELA,2,A68_263 ));
 /* line 3371: */
 /* line 3372: */
 /* line 3373: */
KAABELA_stringfail = A68_TRUE;
} 
}
 /* line 3374: */
 /* line 3375: */
 /* line 3376: */
} 
break;
default: 
 /* line 3377: */
 /* line 3378: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3379: */
 /* line 3380: */
if ( KAABELA_stringfail )
{ 
RLPAELA_type = A_UNITE(DCABELA,mode10,10,DRCAELA_flt);
 /* line 3381: */
OMPAELA_ctype = A_UNITE(ECABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
GCABELA = CJRAELA_length(BJPAELA_strings) ;
TLPAELA_integer1 = A_UNITE(FCABELA,mode1,1,GCABELA);
 /* line 3382: */
HCABELA.Size = TLPAELA_integer1;
HCABELA.Tstring = RLPAELA_type;
ICABELA = A_HEAP(A68_181 ) ;
(*ICABELA) = HCABELA ;
RLPAELA_type = A_UNITE(JCABELA,mode9,9,ICABELA);
 /* line 3383: */
 /* line 3384: */
KCABELA.Size = TLPAELA_integer1;
KCABELA.Ct = (*(&(FOPAELA_sucstack->Ct)));
 /* line 3385: */
KCABELA.Strings = BJPAELA_strings;
 /* line 3386: */
 /* line 3387: */
 /* line 3388: */
LCABELA = A_HEAP(A68_233 ) ;
(*LCABELA) = KCABELA ;
OMPAELA_ctype = A_UNITE(MCABELA,mode14,14,LCABELA);
} 
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3389: */
NCABELA = OMPAELA_ctype ;
switch ( NCABELA.mode )
{ 
case 10: /* STRUCT(INT)  */
OCABELA_flt = (NCABELA.data.mode10);
PCABELA = MXCAELA_wflt;
break;
default: 
PCABELA = LXCAELA_wctype;
break;
} 
BMPAELA_which = PCABELA;
 /* line 3390: */
 /* line 3391: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(stringpr);
return;
} 
#undef NL

A68_VOID  QCABELA_stringrange(void)
{ 
A68_BOOL  RCABELA_stringfail;
A68_222  SCABELA;  /* united object - for case conformity */
A68_203 * TCABELA_p;
A68_222  UCABELA;  /* OPERATORS - mode -> union mode */
A68_31  WCABELA_generator;   /* proc value of non-global proc */
A68_VC  BDABELA;  /* avoid structure result */
A68_VC  CDABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DDABELA;  /* OPERATORS - assign op */
A68_31  FDABELA_generator;   /* proc value of non-global proc */
A68_VC  KDABELA;  /* avoid structure result */
A68_VC  LDABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MDABELA;  /* OPERATORS - assign op */
A68_445  NDABELA;  /* collateral clause result */
A68_263  ODABELA;  /* OPERATORS - mode -> union mode */
A68_263  PDABELA;  /* OPERATORS - mode -> union mode */
A68_262  QDABELA;  /* OPERATORS - istruct -> vector */
A68_172  RDABELA;  /* OPERATORS - mode -> union mode */
A68_222  SDABELA;  /* OPERATORS - mode -> union mode */
A68_172  TDABELA;  /* united object - for case conformity */
A68_173 * UDABELA_ps;
A68_247  VDABELA;  /* united object - for case conformity */
A68_250  WDABELA_pst;
A68_INT  XDABELA_start;
A68_INT  YDABELA_finish;
A68_31  AEABELA_generator;   /* proc value of non-global proc */
A68_462  FEABELA;  /* collateral clause result */
A68_VC  GEABELA;  /* avoid structure result */
A68_VC  HEABELA;  /* OPERATORS - istruct -> vector */
A68_VC  IEABELA;  /* OPERATORS - assign op */
A68_445  JEABELA;  /* collateral clause result */
A68_263  KEABELA;  /* OPERATORS - mode -> union mode */
A68_263  LEABELA;  /* OPERATORS - mode -> union mode */
A68_262  MEABELA;  /* OPERATORS - istruct -> vector */
A68_172  NEABELA;  /* OPERATORS - mode -> union mode */
A68_222  OEABELA;  /* OPERATORS - mode -> union mode */
A68_235  PEABELA;  /* collateral clause result */
A68_235 * QEABELA;  /* YIELD */
A68_222  REABELA;  /* OPERATORS - mode -> union mode */
A68_222  SEABELA;  /* united object - for case conformity */
A68_182  TEABELA_flt;
A68_INT  UEABELA;  /* clause result */
A_PROC_ENTRY(stringrange);
{ 
RCABELA_stringfail = A68_FALSE;
 /* line 3395: */
RLPAELA_type = (*(&(FOPAELA_sucstack->T)));
 /* line 3396: */
 /* line 3397: */
SCABELA = (*(&(FOPAELA_sucstack->Ct))) ;
switch ( SCABELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
TCABELA_p = (SCABELA.data.mode4);
 /* line 3398: */
 /* line 3399: */
if ( ((*(&(TCABELA_p->Index)))>0) )
{ 
UQPAELA_fault(145, VJAAOSI_nullmsg);
 /* line 3400: */
OMPAELA_ctype = A_UNITE(UCABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3401: */
if ( ((*(&(TCABELA_p->Index)))==0) )
{ 
A_CLOSURE( WCABELA_generator, XCABELA_generator, YCABELA_generator );
A_CALLPROC(WCABELA_generator,(A68_FALSE, &BDABELA),(A68_FALSE, &BDABELA,(WCABELA_generator).nonlocals));
DDABELA = A_HVEC(CDABELA,'\'',A68_CHAR ) ;
A_VASSIGN2(DDABELA,BDABELA,A68_CHAR ) ;
LKPAELA_fp3 = BDABELA;
 /* line 3402: */
A_CLOSURE( FDABELA_generator, GDABELA_generator, HDABELA_generator );
A_CALLPROC(FDABELA_generator,(A68_FALSE, &KDABELA),(A68_FALSE, &KDABELA,(FDABELA_generator).nonlocals));
MDABELA = A_HVEC(LDABELA,'/',A68_CHAR ) ;
A_VASSIGN2(MDABELA,KDABELA,A68_CHAR ) ;
MKPAELA_fp4 = KDABELA;
 /* line 3403: */
NDABELA.data[0] = A_UNITE(ODABELA,mode13,13,LKPAELA_fp3);
NDABELA.data[1] = A_UNITE(PDABELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(QDABELA,NDABELA,2,A68_263 ));
 /* line 3404: */
RLPAELA_type = A_UNITE(RDABELA,mode10,10,DRCAELA_flt);
 /* line 3405: */
 /* line 3406: */
OMPAELA_ctype = A_UNITE(SDABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3407: */
TDABELA = (*(&(TCABELA_p->Type))) ;
switch ( TDABELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
UDABELA_ps = (TDABELA.data.mode1);
 /* line 3408: */
 /* line 3409: */
VDABELA = (*(&(UDABELA_ps->U))) ;
switch ( VDABELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
WDABELA_pst = (VDABELA.data.mode3);
 /* line 3410: */
{ 
XDABELA_start = (A68_INT)(unsigned char)HNPAELA_charval1;
 /* line 3411: */
YDABELA_finish = (A68_INT)(unsigned char)LJPAELA_charval;
 /* line 3412: */
 /* line 3413: */
if ( !PMUAELA_check_charrange(XDABELA_start, YDABELA_finish) )
{ 
 /* line 3414: */
RCABELA_stringfail = A68_TRUE;
} 
else
{ 
 /* line 3415: */
if ( !POUAELA_charsubrange(XDABELA_start, YDABELA_finish, WDABELA_pst.Charalts) )
{ 
A_CLOSURE( AEABELA_generator, BEABELA_generator, CEABELA_generator );
FEABELA.data[0] = '\'';
FEABELA.data[1] = HNPAELA_charval1;
FEABELA.data[2] = '.';
FEABELA.data[3] = '.';
FEABELA.data[4] = '\'';
FEABELA.data[5] = LJPAELA_charval;
A_CALLPROC(AEABELA_generator,(A68_FALSE, &GEABELA),(A68_FALSE, &GEABELA,(AEABELA_generator).nonlocals));
IEABELA = A_HISVEC(HEABELA,FEABELA,6,A68_CHAR ) ;
A_VASSIGN2(IEABELA,GEABELA,A68_CHAR ) ;
LKPAELA_fp3 = GEABELA;
 /* line 3417: */
MKPAELA_fp4 = (*(&(WDABELA_pst.Idinfo->Id)));
 /* line 3418: */
JEABELA.data[0] = A_UNITE(KEABELA,mode13,13,LKPAELA_fp3);
 /* line 3419: */
JEABELA.data[1] = A_UNITE(LEABELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(157, A_HISVEC(MEABELA,JEABELA,2,A68_263 ));
 /* line 3420: */
 /* line 3421: */
 /* line 3422: */
 /* line 3423: */
 /* line 3424: */
RCABELA_stringfail = A68_TRUE;
} 
} 
} 
break;
default: 
 /* line 3425: */
 /* line 3426: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3427: */
 /* line 3428: */
if ( RCABELA_stringfail )
{ 
RLPAELA_type = A_UNITE(NEABELA,mode10,10,DRCAELA_flt);
 /* line 3429: */
OMPAELA_ctype = A_UNITE(OEABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
PEABELA.T = (*(&(TCABELA_p->Type)));
PEABELA.Lwb = HNPAELA_charval1;
 /* line 3430: */
PEABELA.Upb = LJPAELA_charval;
 /* line 3431: */
 /* line 3432: */
 /* line 3433: */
QEABELA = A_HEAP(A68_235 ) ;
(*QEABELA) = PEABELA ;
OMPAELA_ctype = A_UNITE(REABELA,mode16,16,QEABELA);
} 
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3434: */
SEABELA = OMPAELA_ctype ;
switch ( SEABELA.mode )
{ 
case 10: /* STRUCT(INT)  */
TEABELA_flt = (SEABELA.data.mode10);
UEABELA = MXCAELA_wflt;
break;
default: 
UEABELA = LXCAELA_wctype;
break;
} 
BMPAELA_which = UEABELA;
 /* line 3435: */
 /* line 3436: */
FOPAELA_sucstack = (*(&(FOPAELA_sucstack->Rest)));
} 
A_PROC_EXIT(stringrange);
return;
} 
#undef NL

A68_VOID  VEABELA_stringrow(void)
{ 
A68_263  WEABELA;  /* OPERATORS - unite union */
A68_262  XEABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  YEABELA;  /* OPERATORS - mode -> union mode */
A68_INT  ZEABELA;  /* YIELD */
A68_BOOL  AFABELA;  /* optbool result */
A68_172  BFABELA;  /* OPERATORS - mode -> union mode */
A68_181  CFABELA;  /* collateral clause result */
A68_181 * DFABELA;  /* YIELD */
A68_172  EFABELA;  /* OPERATORS - mode -> union mode */
A68_172  FFABELA;  /* OPERATORS - mode -> union mode */
A68_172  GFABELA;  /* united object - for case conformity */
A68_222  HFABELA;  /* OPERATORS - mode -> union mode */
A68_233  IFABELA;  /* collateral clause result */
A68_233 * JFABELA;  /* YIELD */
A68_222  KFABELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(stringrow);
{ 
RKPAELA_fp5 = (*(&(DOPAELA_integerstack->I)));
 /* line 3441: */
 /* line 3442: */
ZEABELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&(DOPAELA_integerstack->I)), A_UNITE(YEABELA,mode1,1,ZEABELA), 67, A_HVEC(XEABELA,A_UTABUNITE(WEABELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 3443: */
AFABELA = (BMPAELA_which==KXCAELA_wtype);
if ( ! AFABELA )
{AFABELA = (BMPAELA_which==LXCAELA_wctype);
}
 /* line 3444: */
if ( AFABELA )
{ 
 /* line 3445: */
if ( KBTAELA_containsfntype(RLPAELA_type) )
{ 
UQPAELA_fault(25, VJAAOSI_nullmsg);
 /* line 3446: */
 /* line 3447: */
RLPAELA_type = A_UNITE(BFABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3448: */
if ( GATAELA_isprimchar_t(RLPAELA_type) )
{ 
CFABELA.Size = (*(&(DOPAELA_integerstack->I)));
 /* line 3449: */
CFABELA.Tstring = RLPAELA_type;
DFABELA = A_HEAP(A68_181 ) ;
(*DFABELA) = CFABELA ;
RLPAELA_type = A_UNITE(EFABELA,mode9,9,DFABELA);
} 
else
{ 
 /* line 3450: */
UQPAELA_fault(149, VJAAOSI_nullmsg);
 /* line 3451: */
 /* line 3452: */
 /* line 3453: */
 /* line 3454: */
RLPAELA_type = A_UNITE(FFABELA,mode10,10,DRCAELA_flt);
} 
} 
} 
 /* line 3455: */
 /* line 3456: */
if ( (BMPAELA_which==LXCAELA_wctype) )
{ 
 /* line 3457: */
GFABELA = RLPAELA_type ;
switch ( GFABELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 3458: */
OMPAELA_ctype = A_UNITE(HFABELA,mode10,10,DRCAELA_flt);
break;
default: 
IFABELA.Size = (*(&(DOPAELA_integerstack->I)));
IFABELA.Ct = OMPAELA_ctype;
 /* line 3459: */
IFABELA.Strings = NQCAELA_nilstringlist;
 /* line 3460: */
JFABELA = A_HEAP(A68_233 ) ;
(*JFABELA) = IFABELA ;
OMPAELA_ctype = A_UNITE(KFABELA,mode14,14,JFABELA);
break;
} 
} 
 /* line 3461: */
 /* line 3462: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
} 
A_PROC_EXIT(stringrow);
return;
} 
#undef NL

A68_VOID  LFABELA_charid(void)
{ 
A68_BOOL  MFABELA_charfail;
A68_199  NFABELA;  /* united object - for case conformity */
A68_203  OFABELA_p;
A68_172  PFABELA;  /* OPERATORS - mode -> union mode */
A68_31  RFABELA_generator;   /* proc value of non-global proc */
A68_VC  WFABELA;  /* avoid structure result */
A68_VC  XFABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YFABELA;  /* OPERATORS - assign op */
A68_31  AGABELA_generator;   /* proc value of non-global proc */
A68_VC  FGABELA;  /* avoid structure result */
A68_VC  GGABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HGABELA;  /* OPERATORS - assign op */
A68_445  IGABELA;  /* collateral clause result */
A68_263  JGABELA;  /* OPERATORS - mode -> union mode */
A68_263  KGABELA;  /* OPERATORS - mode -> union mode */
A68_262  LGABELA;  /* OPERATORS - istruct -> vector */
A68_172  MGABELA;  /* OPERATORS - mode -> union mode */
A68_172  NGABELA;  /* united object - for case conformity */
A68_173 * OGABELA_ps;
A68_247  PGABELA;  /* united object - for case conformity */
A68_250  QGABELA_p;
A68_54  RGABELA;  /* OPERATORS - simple index */
A68_INT  SGABELA;  /* YIELD */
A68_31  UGABELA_generator;   /* proc value of non-global proc */
A68_VC  ZGABELA;  /* avoid structure result */
A68_INT  AHABELA;  /* YIELD */
A68_CHAR * BHABELA;  /* YIELD */
A68_INT  CHABELA;  /* YIELD */
A68_CHAR * DHABELA;  /* YIELD */
A68_445  EHABELA;  /* collateral clause result */
A68_263  FHABELA;  /* OPERATORS - mode -> union mode */
A68_263  GHABELA;  /* OPERATORS - unite union */
A68_262  HHABELA;  /* OPERATORS - istruct -> vector */
A68_172  IHABELA;  /* OPERATORS - mode -> union mode */
A68_396  JHABELA;  /* collateral clause result */
A68_32  KHABELA;  /* OPERATORS - istruct -> vector */
A68_31  MHABELA_generator;   /* proc value of non-global proc */
A68_VC  RHABELA;  /* avoid structure result */
A68_VC  SHABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  THABELA;  /* OPERATORS - assign op */
A68_182  UHABELA_f;
A68_172  VHABELA;  /* OPERATORS - mode -> union mode */
A68_172  WHABELA;  /* OPERATORS - mode -> union mode */
A68_31  YHABELA_generator;   /* proc value of non-global proc */
A68_VC  EIABELA;  /* avoid structure result */
A68_VC  GIABELA;  /* OPERATORS - assign op */
A68_263  HIABELA;  /* OPERATORS - mode -> union mode */
A68_262  IIABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(charid);
{ 
VLPAELA_idinfo = (*(&(EOPAELA_idinfostack->I)));
EOPAELA_idinfostack = (*(&(EOPAELA_idinfostack->Rest)));
 /* line 3466: */
MFABELA_charfail = A68_FALSE;
 /* line 3467: */
 /* line 3468: */
NFABELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( NFABELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
OFABELA_p = (NFABELA.data.mode4);
 /* line 3469: */
{ 
RLPAELA_type = OFABELA_p.Type;
 /* line 3470: */
 /* line 3471: */
if ( (OFABELA_p.Index>0) )
{ 
UQPAELA_fault(145, VJAAOSI_nullmsg);
 /* line 3472: */
RLPAELA_type = A_UNITE(PFABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3473: */
if ( (OFABELA_p.Index==0) )
{ 
A_CLOSURE( RFABELA_generator, SFABELA_generator, TFABELA_generator );
A_CALLPROC(RFABELA_generator,(A68_FALSE, &WFABELA),(A68_FALSE, &WFABELA,(RFABELA_generator).nonlocals));
YFABELA = A_HVEC(XFABELA,'\'',A68_CHAR ) ;
A_VASSIGN2(YFABELA,WFABELA,A68_CHAR ) ;
LKPAELA_fp3 = WFABELA;
A_CLOSURE( AGABELA_generator, BGABELA_generator, CGABELA_generator );
A_CALLPROC(AGABELA_generator,(A68_FALSE, &FGABELA),(A68_FALSE, &FGABELA,(AGABELA_generator).nonlocals));
HGABELA = A_HVEC(GGABELA,'/',A68_CHAR ) ;
A_VASSIGN2(HGABELA,FGABELA,A68_CHAR ) ;
MKPAELA_fp4 = FGABELA;
 /* line 3474: */
IGABELA.data[0] = A_UNITE(JGABELA,mode13,13,LKPAELA_fp3);
IGABELA.data[1] = A_UNITE(KGABELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(LGABELA,IGABELA,2,A68_263 ));
 /* line 3475: */
 /* line 3476: */
 /* line 3477: */
RLPAELA_type = A_UNITE(MGABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3478: */
NGABELA = RLPAELA_type ;
switch ( NGABELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
OGABELA_ps = (NGABELA.data.mode1);
 /* line 3479: */
 /* line 3480: */
PGABELA = (*(&(OGABELA_ps->U))) ;
switch ( PGABELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
QGABELA_p = (PGABELA.data.mode3);
 /* line 3481: */
RGABELA = QGABELA_p.Charcheck ;
SGABELA = (A68_INT)(unsigned char)LJPAELA_charval ;
if ( !(*(&A_VINDEX(RGABELA,SGABELA))) )
{ 
JKPAELA_fp1 = RLPAELA_type;
 /* line 3482: */
A_CLOSURE( UGABELA_generator, VGABELA_generator, WGABELA_generator );
A_CALLPROC(UGABELA_generator,(A68_FALSE, &ZGABELA),(A68_FALSE, &ZGABELA,(UGABELA_generator).nonlocals));
LKPAELA_fp3 = ZGABELA;
 /* line 3483: */
AHABELA = 1 ;
BHABELA = (&A_VINDEX(LKPAELA_fp3,AHABELA)) ;
(*BHABELA) = '\'';
CHABELA = 2 ;
DHABELA = (&A_VINDEX(LKPAELA_fp3,CHABELA)) ;
(*DHABELA) = LJPAELA_charval;
 /* line 3484: */
MFABELA_charfail = A68_TRUE;
 /* line 3485: */
 /* line 3486: */
EHABELA.data[0] = A_UNITE(FHABELA,mode13,13,LKPAELA_fp3);
EHABELA.data[1] = A_UUNITE(GHABELA,0,JKPAELA_fp1);
 /* line 3487: */
 /* line 3488: */
 /* line 3489: */
VZPAELA_namefaultp(147, A_HISVEC(HHABELA,EHABELA,2,A68_263 ));
} 
break;
default: 
 /* line 3490: */
 /* line 3491: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3492: */
 /* line 3493: */
if ( MFABELA_charfail )
{ 
 /* line 3494: */
RLPAELA_type = A_UNITE(IHABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
JHABELA.data[0] = FOCAELA_vprimch;
JHABELA.data[1] = WFTAELA_primtypeno(RLPAELA_type);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(KHABELA,JHABELA,2,A68_INT )),(A_HISVEC(KHABELA,JHABELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3495: */
A_CLOSURE( MHABELA_generator, NHABELA_generator, OHABELA_generator );
 /* line 3496: */
 /* line 3497: */
 /* line 3498: */
 /* line 3499: */
A_CALLPROC(MHABELA_generator,(A68_FALSE, &RHABELA),(A68_FALSE, &RHABELA,(MHABELA_generator).nonlocals));
THABELA = A_HVEC(SHABELA,LJPAELA_charval,A68_CHAR ) ;
A_VASSIGN2(THABELA,RHABELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(RHABELA),(RHABELA,(WOPAELA_outid).nonlocals));
} 
} 
} 
} 
break;
case 8: /* STRUCT(INT)  */
UHABELA_f = (NFABELA.data.mode8);
 /* line 3500: */
 /* line 3501: */
 /* line 3502: */
RLPAELA_type = A_UNITE(VHABELA,mode10,10,DRCAELA_flt);
break;
default: 
RLPAELA_type = A_UNITE(WHABELA,mode10,10,DRCAELA_flt);
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 3503: */
A_CLOSURE( YHABELA_generator, ZHABELA_generator, AIABELA_generator );
A_CALLPROC(YHABELA_generator,(A68_FALSE, &EIABELA),(A68_FALSE, &EIABELA,(YHABELA_generator).nonlocals));
GIABELA = FIABELA ;
A_VASSIGN2(GIABELA,EIABELA,A68_CHAR ) ;
MKPAELA_fp4 = EIABELA;
 /* line 3504: */
 /* line 3505: */
SZPAELA_faultp(126, A_HVEC(IIABELA,A_UNITE(HIABELA,mode13,13,MKPAELA_fp4),A68_263 ));
break;
} 
 /* line 3506: */
 /* line 3507: */
WOVAELA_pushvss(1);
} 
A_PROC_EXIT(charid);
return;
} 
#undef NL

A68_VOID  JIABELA_stringid(void)
{ 
A68_BOOL  KIABELA_stringfail;
A68_199  LIABELA;  /* united object - for case conformity */
A68_203  MIABELA_p;
A68_172  NIABELA;  /* OPERATORS - mode -> union mode */
A68_INT  OIABELA;  /* YIELD */
A68_31  QIABELA_generator;   /* proc value of non-global proc */
A68_VC  VIABELA;  /* avoid structure result */
A68_VC  WIABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XIABELA;  /* OPERATORS - assign op */
A68_445  YIABELA;  /* collateral clause result */
A68_263  ZIABELA;  /* OPERATORS - mode -> union mode */
A68_263  AJABELA;  /* OPERATORS - mode -> union mode */
A68_262  BJABELA;  /* OPERATORS - istruct -> vector */
A68_172  CJABELA;  /* OPERATORS - mode -> union mode */
A68_172  DJABELA;  /* united object - for case conformity */
A68_173 * EJABELA_ps;
A68_247  FJABELA;  /* united object - for case conformity */
A68_250  GJABELA_p;
A68_VC  IJABELA;  /* avoid structure result */
A68_VC  HJABELA_string;
A68_CHAR * JJABELA_i;
A68_INT  KJABELA;  /* forall loop counter */
A68_54  LJABELA;  /* OPERATORS - simple index */
A68_INT  MJABELA;  /* YIELD */
A68_31  OJABELA_generator;   /* proc value of non-global proc */
A68_VC  TJABELA;  /* avoid structure result */
A68_INT  UJABELA;  /* YIELD */
A68_CHAR * VJABELA;  /* YIELD */
A68_INT  WJABELA;  /* YIELD */
A68_CHAR * XJABELA;  /* YIELD */
A68_445  YJABELA;  /* collateral clause result */
A68_263  ZJABELA;  /* OPERATORS - mode -> union mode */
A68_263  AKABELA;  /* OPERATORS - unite union */
A68_262  BKABELA;  /* OPERATORS - istruct -> vector */
A68_172  CKABELA;  /* OPERATORS - mode -> union mode */
A68_396  DKABELA;  /* collateral clause result */
A68_32  EKABELA;  /* OPERATORS - istruct -> vector */
A68_181  FKABELA;  /* collateral clause result */
A68_185  GKABELA;  /* OPERATORS - mode -> union mode */
A68_INT  HKABELA;  /* YIELD */
A68_181 * IKABELA;  /* YIELD */
A68_172  JKABELA;  /* OPERATORS - mode -> union mode */
A68_182  KKABELA_f;
A68_172  LKABELA;  /* OPERATORS - mode -> union mode */
A68_172  MKABELA;  /* OPERATORS - mode -> union mode */
A68_31  OKABELA_generator;   /* proc value of non-global proc */
A68_VC  UKABELA;  /* avoid structure result */
A68_VC  WKABELA;  /* OPERATORS - assign op */
A68_263  XKABELA;  /* OPERATORS - mode -> union mode */
A68_262  YKABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(stringid);
{ 
VLPAELA_idinfo = (*(&(EOPAELA_idinfostack->I)));
EOPAELA_idinfostack = (*(&(EOPAELA_idinfostack->Rest)));
 /* line 3511: */
KIABELA_stringfail = A68_FALSE;
 /* line 3512: */
 /* line 3513: */
LIABELA = (*(&((&VLPAELA_idinfo)->U))) ;
switch ( LIABELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
MIABELA_p = (LIABELA.data.mode4);
 /* line 3514: */
{ 
RLPAELA_type = MIABELA_p.Type;
 /* line 3515: */
 /* line 3516: */
if ( (MIABELA_p.Index>0) )
{ 
UQPAELA_fault(146, VJAAOSI_nullmsg);
 /* line 3517: */
RLPAELA_type = A_UNITE(NIABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3518: */
if ( (MIABELA_p.Index==0) )
{ 
OIABELA = 17 ;
LKPAELA_fp3 = A_VINDEX(MFDAELA_toks,OIABELA).Id;
 /* line 3519: */
A_CLOSURE( QIABELA_generator, RIABELA_generator, SIABELA_generator );
A_CALLPROC(QIABELA_generator,(A68_FALSE, &VIABELA),(A68_FALSE, &VIABELA,(QIABELA_generator).nonlocals));
XIABELA = A_HVEC(WIABELA,'/',A68_CHAR ) ;
A_VASSIGN2(XIABELA,VIABELA,A68_CHAR ) ;
MKPAELA_fp4 = VIABELA;
 /* line 3520: */
YIABELA.data[0] = A_UNITE(ZIABELA,mode13,13,LKPAELA_fp3);
YIABELA.data[1] = A_UNITE(AJABELA,mode13,13,MKPAELA_fp4);
SZPAELA_faultp(2, A_HISVEC(BJABELA,YIABELA,2,A68_263 ));
 /* line 3521: */
 /* line 3522: */
 /* line 3523: */
RLPAELA_type = A_UNITE(CJABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3524: */
DJABELA = RLPAELA_type ;
switch ( DJABELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
EJABELA_ps = (DJABELA.data.mode1);
 /* line 3525: */
 /* line 3526: */
FJABELA = (*(&(EJABELA_ps->U))) ;
switch ( FJABELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
GJABELA_p = (FJABELA.data.mode3);
 /* line 3527: */
{ 
IJRAELA_joinstrings( 0, BJPAELA_strings, &IJABELA );
HJABELA_string = IJABELA;
 /* line 3528: */
 /* line 3529: */
KJABELA = HJABELA_string.upb -1;
JJABELA_i = HJABELA_string.data;
for (;KJABELA-- >= 0;
(JJABELA_i++
) )
{
 /* line 3530: */
LJABELA = GJABELA_p.Charcheck ;
MJABELA = (A68_INT)(unsigned char)(*JJABELA_i) ;
if ( !(*(&A_VINDEX(LJABELA,MJABELA))) )
{ 
JKPAELA_fp1 = RLPAELA_type;
 /* line 3531: */
A_CLOSURE( OJABELA_generator, PJABELA_generator, QJABELA_generator );
A_CALLPROC(OJABELA_generator,(A68_FALSE, &TJABELA),(A68_FALSE, &TJABELA,(OJABELA_generator).nonlocals));
LKPAELA_fp3 = TJABELA;
 /* line 3532: */
UJABELA = 1 ;
VJABELA = (&A_VINDEX(LKPAELA_fp3,UJABELA)) ;
(*VJABELA) = '\'';
WJABELA = 2 ;
XJABELA = (&A_VINDEX(LKPAELA_fp3,WJABELA)) ;
(*XJABELA) = (*JJABELA_i);
 /* line 3533: */
KIABELA_stringfail = A68_TRUE;
 /* line 3534: */
 /* line 3535: */
YJABELA.data[0] = A_UNITE(ZJABELA,mode13,13,LKPAELA_fp3);
YJABELA.data[1] = A_UUNITE(AKABELA,0,JKPAELA_fp1);
 /* line 3536: */
 /* line 3537: */
VZPAELA_namefaultp(147, A_HISVEC(BKABELA,YJABELA,2,A68_263 ));
} 
}
 /* line 3538: */
 /* line 3539: */
} 
break;
default: 
 /* line 3540: */
 /* line 3541: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3542: */
 /* line 3543: */
if ( KIABELA_stringfail )
{ 
 /* line 3544: */
RLPAELA_type = A_UNITE(CKABELA,mode10,10,DRCAELA_flt);
} 
else
{ 
DKABELA.data[0] = GOCAELA_vprimst;
DKABELA.data[1] = WFTAELA_primtypeno(RLPAELA_type);
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EKABELA,DKABELA,2,A68_INT )),(A_HISVEC(EKABELA,DKABELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3545: */
OQQAELA_outstringlist(BJPAELA_strings);
 /* line 3546: */
HKABELA = CJRAELA_length(BJPAELA_strings) ;
FKABELA.Size = A_UNITE(GKABELA,mode1,1,HKABELA);
 /* line 3547: */
FKABELA.Tstring = RLPAELA_type;
 /* line 3548: */
 /* line 3549: */
 /* line 3550: */
IKABELA = A_HEAP(A68_181 ) ;
(*IKABELA) = FKABELA ;
RLPAELA_type = A_UNITE(JKABELA,mode9,9,IKABELA);
} 
} 
} 
} 
break;
case 8: /* STRUCT(INT)  */
KKABELA_f = (LIABELA.data.mode8);
 /* line 3551: */
 /* line 3552: */
 /* line 3553: */
RLPAELA_type = A_UNITE(LKABELA,mode10,10,DRCAELA_flt);
break;
default: 
RLPAELA_type = A_UNITE(MKABELA,mode10,10,DRCAELA_flt);
XBQAELA_fltmessage(VLPAELA_idinfo);
 /* line 3554: */
A_CLOSURE( OKABELA_generator, PKABELA_generator, QKABELA_generator );
A_CALLPROC(OKABELA_generator,(A68_FALSE, &UKABELA),(A68_FALSE, &UKABELA,(OKABELA_generator).nonlocals));
WKABELA = VKABELA ;
A_VASSIGN2(WKABELA,UKABELA,A68_CHAR ) ;
MKPAELA_fp4 = UKABELA;
 /* line 3555: */
 /* line 3556: */
SZPAELA_faultp(126, A_HVEC(YKABELA,A_UNITE(XKABELA,mode13,13,MKPAELA_fp4),A68_263 ));
break;
} 
 /* line 3557: */
 /* line 3558: */
WOVAELA_pushvss(1);
} 
A_PROC_EXIT(stringid);
return;
} 
#undef NL

A68_VOID  ZKABELA_stringsec(void)
{ 
A68_263  ALABELA;  /* OPERATORS - unite union */
A68_262  BLABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  CLABELA;  /* OPERATORS - mode -> union mode */
A68_INT  DLABELA;  /* YIELD */
A68_32  ELABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  FLABELA;  /* avoid structure result */
A68_181  GLABELA;  /* collateral clause result */
A68_181 * HLABELA;  /* YIELD */
A68_172  ILABELA;  /* OPERATORS - mode -> union mode */
A68_172  JLABELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(stringsec);
{ 
SLPAELA_integer = (*(&(DOPAELA_integerstack->I)));
 /* line 3561: */
RKPAELA_fp5 = SLPAELA_integer;
 /* line 3562: */
 /* line 3563: */
DLABELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, (&SLPAELA_integer), A_UNITE(CLABELA,mode1,1,DLABELA), 67, A_HVEC(BLABELA,A_UTABUNITE(ALABELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 3564: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(ELABELA,EOCAELA_vstring,A68_INT )),(A_HVEC(ELABELA,EOCAELA_vstring,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 3565: */
 /* line 3566: */
if ( MJQAELA_loadint(SLPAELA_integer, A68_FALSE) )
{ 
DSDAELA_uncheckedint( SLPAELA_integer, &FLABELA );
SLPAELA_integer = FLABELA;
} 
 /* line 3567: */
 /* line 3568: */
if ( GATAELA_isprimchar_t(RLPAELA_type) )
{ 
GLABELA.Size = SLPAELA_integer;
 /* line 3569: */
GLABELA.Tstring = RLPAELA_type;
HLABELA = A_HEAP(A68_181 ) ;
(*HLABELA) = GLABELA ;
RLPAELA_type = A_UNITE(ILABELA,mode9,9,HLABELA);
} 
else
{ 
 /* line 3570: */
UQPAELA_fault(149, VJAAOSI_nullmsg);
 /* line 3571: */
 /* line 3572: */
RLPAELA_type = A_UNITE(JLABELA,mode10,10,DRCAELA_flt);
} 
 /* line 3573: */
 /* line 3574: */
DOPAELA_integerstack = (*(&(DOPAELA_integerstack->Rest)));
} 
A_PROC_EXIT(stringsec);
return;
} 
#undef NL

A68_INT  KLABELA_return(void)
{ 
A68_INT  LLABELA;  /* clause result */
A68_INT * MLABELA;  /* YIELD */
A_PROC_ENTRY(return);
{ 
YKPAELA_exitcomp = A68_TRUE;
MLABELA = A_HEAP(A68_INT ) ;
LLABELA = (*MLABELA) = (YKPAELA_exitcomp);
} 
A_PROC_EXIT(return);
return( LLABELA );
} 
#undef NL

A68_VOID  NLABELA_stackjoin(void)
{ 
A68_276  OLABELA;  /* collateral clause result */
A68_276 * PLABELA;  /* YIELD */
A_PROC_ENTRY(stackjoin);
OLABELA.Joinup = VMPAELA_joinup;
OLABELA.Rest = QMPAELA_joinstack;
PLABELA = A_HEAP(A68_276 ) ;
(*PLABELA) = OLABELA ;
QMPAELA_joinstack = PLABELA;
A_PROC_EXIT(stackjoin);
return;
} 
#undef NL

A68_VOID  QLABELA_setsource(void)
{ 
A_PROC_ENTRY(setsource);
ANPAELA_lhsjoin = A68_TRUE;
A_PROC_EXIT(setsource);
return;
} 
#undef NL

A68_VOID  RLABELA_startindex2(void)
{ 
A68_32  SLABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(startindex2);
{ 
ANPAELA_lhsjoin = A68_FALSE;
 /* line 3588: */
WMPAELA_jointype = RLPAELA_type;
 /* line 3589: */
 /* line 3590: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(SLABELA,BLCAELA_bjoin,A68_INT )),(A_HVEC(SLABELA,BLCAELA_bjoin,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(startindex2);
return;
} 
#undef NL

A68_VOID  TLABELA_endindex2(void)
{ 
A68_210  ULABELA;  /* avoid structure result */
A68_210  VLABELA;  /* OPERATORS - mode -> union mode */
A68_445  WLABELA;  /* collateral clause result */
A68_263  XLABELA;  /* OPERATORS - unite union */
A68_263  YLABELA;  /* OPERATORS - unite union */
A68_262  ZLABELA;  /* OPERATORS - istruct -> vector */
A68_32  AMABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(endindex2);
{ 
 /* line 3595: */
if ( !MJPAELA_syntaxerror )
{ 
TUVAELA_replicate_joinup( OLPAELA_ids, ZNPAELA_iddecs, VMPAELA_joinup, &ULABELA );
VMPAELA_joinup = ULABELA;
 /* line 3596: */
 /* line 3597: */
HFVAELA_check_off((&VMPAELA_joinup), A68_FALSE, A68_FALSE);
} 
 /* line 3598: */
VMPAELA_joinup = A_UNITE(VLABELA,mode7,7,DRCAELA_flt);
 /* line 3599: */
 /* line 3600: */
if ( !FRSAELA_checktypeeq(WMPAELA_jointype, RLPAELA_type, A68_TRUE) )
{ 
JKPAELA_fp1 = WMPAELA_jointype;
KKPAELA_fp2 = RLPAELA_type;
 /* line 3601: */
WLABELA.data[0] = A_UUNITE(XLABELA,0,JKPAELA_fp1);
WLABELA.data[1] = A_UUNITE(YLABELA,0,KKPAELA_fp2);
 /* line 3602: */
VZPAELA_namefaultp(66, A_HISVEC(ZLABELA,WLABELA,2,A68_263 ));
} 
 /* line 3603: */
ANPAELA_lhsjoin = A68_TRUE;
 /* line 3604: */
 /* line 3605: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(AMABELA,QOCAELA_bjoinend,A68_INT )),(A_HVEC(AMABELA,QOCAELA_bjoinend,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(endindex2);
return;
} 
#undef NL

A68_VOID  BMABELA_multstack1(void)
{ 
A68_277  CMABELA;  /* collateral clause result */
A68_277 * DMABELA;  /* YIELD */
A68_210  EMABELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(multstack1);
{ 
CMABELA.Joinup = VMPAELA_joinup;
CMABELA.Source = A68_TRUE;
CMABELA.Rest = UMPAELA_joinmultstack;
DMABELA = A_HEAP(A68_277 ) ;
(*DMABELA) = CMABELA ;
UMPAELA_joinmultstack = DMABELA;
 /* line 3609: */
WMPAELA_jointype = RLPAELA_type;
 /* line 3610: */
 /* line 3611: */
VMPAELA_joinup = A_UNITE(EMABELA,mode7,7,DRCAELA_flt);
} 
A_PROC_EXIT(multstack1);
return;
} 
#undef NL

A68_VOID  FMABELA_multstack2(void)
{ 
A68_277  GMABELA;  /* collateral clause result */
A68_277 * HMABELA;  /* YIELD */
A68_210  IMABELA;  /* OPERATORS - mode -> union mode */
A68_445  JMABELA;  /* collateral clause result */
A68_263  KMABELA;  /* OPERATORS - unite union */
A68_263  LMABELA;  /* OPERATORS - unite union */
A68_262  MMABELA;  /* OPERATORS - istruct -> vector */
A68_32  NMABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(multstack2);
{ 
GMABELA.Joinup = VMPAELA_joinup;
GMABELA.Source = A68_FALSE;
GMABELA.Rest = UMPAELA_joinmultstack;
HMABELA = A_HEAP(A68_277 ) ;
(*HMABELA) = GMABELA ;
UMPAELA_joinmultstack = HMABELA;
 /* line 3615: */
VMPAELA_joinup = A_UNITE(IMABELA,mode7,7,DRCAELA_flt);
 /* line 3616: */
 /* line 3617: */
if ( !FRSAELA_checktypeeq(WMPAELA_jointype, RLPAELA_type, A68_TRUE) )
{ 
JKPAELA_fp1 = WMPAELA_jointype;
KKPAELA_fp2 = RLPAELA_type;
 /* line 3618: */
JMABELA.data[0] = A_UUNITE(KMABELA,0,JKPAELA_fp1);
JMABELA.data[1] = A_UUNITE(LMABELA,0,KKPAELA_fp2);
 /* line 3619: */
VZPAELA_namefaultp(66, A_HISVEC(MMABELA,JMABELA,2,A68_263 ));
} 
 /* line 3620: */
ANPAELA_lhsjoin = A68_TRUE;
 /* line 3621: */
 /* line 3622: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(NMABELA,QOCAELA_bjoinend,A68_INT )),(A_HVEC(NMABELA,QOCAELA_bjoinend,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(multstack2);
return;
} 
#undef NL

A68_VOID  OMABELA_multjoinoff(void)
{ 
A68_INT  PMABELA_isize;
A68_277 * QMABELA_jmstack;
A68_210  RMABELA;  /* clause result */
A68_210  SMABELA;  /* avoid structure result */
A68_210  TMABELA;  /* avoid structure result */
A68_277  UMABELA;  /* collateral clause result */
A68_277 * VMABELA;  /* YIELD */
A68_210  WMABELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(multjoinoff);
{ 
PMABELA_isize = HDRAELA_giveint((*(&(DOPAELA_integerstack->I))));
 /* line 3626: */
QMABELA_jmstack = UMPAELA_joinmultstack;
 /* line 3627: */
UMPAELA_joinmultstack = UQCAELA_niljoinmultstack;
 /* line 3628: */
for ( ;; )
{ 
 /* line 3629: */
if ( !((QMABELA_jmstack!=UQCAELA_niljoinmultstack)) ) break;
 /* line 3630: */
 /* line 3631: */
if ( (PMABELA_isize>0) )
{ 
 /* line 3632: */
UTVAELA_varmult_joinup( ZNPAELA_iddecs, (*(&(QMABELA_jmstack->Joinup))), &SMABELA );
RMABELA = SMABELA;
} 
else
{ 
 /* line 3633: */
PIVAELA_gettrim( (&(QMABELA_jmstack->Joinup)), PMABELA_isize, PMABELA_isize, &TMABELA );
RMABELA = TMABELA;
} 
VMPAELA_joinup = RMABELA;
 /* line 3634: */
 /* line 3635: */
UMABELA.Joinup = VMPAELA_joinup;
UMABELA.Source = (*(&(QMABELA_jmstack->Source)));
UMABELA.Rest = UMPAELA_joinmultstack;
VMABELA = A_HEAP(A68_277 ) ;
(*VMABELA) = UMABELA ;
UMPAELA_joinmultstack = VMABELA;
 /* line 3636: */
VMPAELA_joinup = A_UNITE(WMABELA,mode7,7,DRCAELA_flt);
 /* line 3637: */
 /* line 3638: */
QMABELA_jmstack = (*(&(QMABELA_jmstack->Rest)));
}
 /* line 3639: */
} 
A_PROC_EXIT(multjoinoff);
return;
} 
#undef NL

A68_VOID  XMABELA_multjoinmark(void)
{ 
A_PROC_ENTRY(multjoinmark);
for ( ;; )
{ 
 /* line 3643: */
if ( !((UMPAELA_joinmultstack!=UQCAELA_niljoinmultstack)) ) break;
HFVAELA_check_off((&(UMPAELA_joinmultstack->Joinup)), (*(&(UMPAELA_joinmultstack->Source))), A68_FALSE);
 /* line 3644: */
 /* line 3645: */
UMPAELA_joinmultstack = (*(&(UMPAELA_joinmultstack->Rest)));
}
A_PROC_EXIT(multjoinmark);
return;
} 
#undef NL

A68_VOID  YMABELA_joinvar(void)
{ 
A68_220 * ZMABELA_jstack;
A68_220  ANABELA;  /* collateral clause result */
A68_220 * BNABELA;  /* YIELD */
A68_219  CNABELA;  /* collateral clause result */
A68_219 * DNABELA;  /* YIELD */
A68_210  ENABELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(joinvar);
 /* line 3651: */
if ( (RMPAELA_joinvarstack!=SQCAELA_niljoinvarstack) )
{ 
ZMABELA_jstack = SQCAELA_niljoinvarstack;
 /* line 3652: */
for ( ;; )
{ 
 /* line 3653: */
if ( !((RMPAELA_joinvarstack!=SQCAELA_niljoinvarstack)) ) break;
 /* line 3654: */
ANABELA.Lwb = (*(&(RMPAELA_joinvarstack->Lwb)));
 /* line 3655: */
ANABELA.Upb = (*(&(RMPAELA_joinvarstack->Upb)));
ANABELA.Index = (*(&(RMPAELA_joinvarstack->Index)));
ANABELA.Rest = ZMABELA_jstack;
BNABELA = A_HEAP(A68_220 ) ;
(*BNABELA) = ANABELA ;
ZMABELA_jstack = BNABELA;
 /* line 3656: */
 /* line 3657: */
RMPAELA_joinvarstack = (*(&(RMPAELA_joinvarstack->Rest)));
}
 /* line 3658: */
CNABELA.Jrep = VMPAELA_joinup;
 /* line 3659: */
CNABELA.Jvarstack = (*ZMABELA_jstack);
DNABELA = A_HEAP(A68_219 ) ;
(*DNABELA) = CNABELA ;
VMPAELA_joinup = A_UNITE(ENABELA,mode6,6,DNABELA);
} 
A_PROC_EXIT(joinvar);
return;
} 
#undef NL

A68_VOID  FNABELA_rp1(void)
{ 
A68_172  GNABELA_t;
A68_172  HNABELA;  /* avoid structure result */
A68_172  INABELA;  /* united object - for case conformity */
A68_179 * JNABELA_trow;
A68_172  KNABELA;  /* OPERATORS - mode -> union mode */
A68_172  LNABELA;  /* OPERATORS - mode -> union mode */
A68_175  MNABELA;  /* collateral clause result */
A68_175 * NNABELA;  /* YIELD */
A_PROC_ENTRY(rp1);
{ 
GNABELA_t = RLPAELA_type;
 /* line 3663: */
 /* line 3664: */
TWVAELA_rowtype( GNABELA_t, &HNABELA );
INABELA = HNABELA ;
switch ( INABELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
JNABELA_trow = (INABELA.data.mode7);
 /* line 3665: */
 /* line 3666: */
if ( KBTAELA_containsfntype((*(&(JNABELA_trow->T)))) )
{ 
 /* line 3667: */
UQPAELA_fault(249, VJAAOSI_nullmsg);
 /* line 3668: */
 /* line 3669: */
 /* line 3670: */
GNABELA_t = A_UNITE(KNABELA,mode10,10,DRCAELA_flt);
} 
break;
default: 
UQPAELA_fault(223, VJAAOSI_nullmsg);
 /* line 3671: */
 /* line 3672: */
GNABELA_t = A_UNITE(LNABELA,mode10,10,DRCAELA_flt);
break;
} 
 /* line 3673: */
MNABELA.T = GNABELA_t;
 /* line 3674: */
MNABELA.Rest = COPAELA_typestack;
NNABELA = A_HEAP(A68_175 ) ;
(*NNABELA) = MNABELA ;
COPAELA_typestack = NNABELA;
} 
A_PROC_EXIT(rp1);
return;
} 
#undef NL

A68_VOID  ONABELA_rp2(void)
{ 
A68_172  PNABELA;  /* avoid structure result */
A68_172  QNABELA_t;
A68_248  RNABELA;  /* avoid structure result */
A68_248  SNABELA_pr;
A68_185  TNABELA;  /* avoid structure result */
A68_185 * UNABELA;  /* YIELD */
A68_185 * VNABELA_lwb;
A68_185  WNABELA;  /* avoid structure result */
A68_185 * XNABELA;  /* YIELD */
A68_185 * YNABELA_upb;
A68_172  ZNABELA;  /* avoid structure result */
A68_172  AOABELA;  /* united object - for case conformity */
A68_179 * BOABELA_trow;
A68_263  COABELA;  /* OPERATORS - mode -> union mode */
A68_INT  DOABELA;  /* YIELD */
A68_262  EOABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  FOABELA;  /* OPERATORS - mode -> union mode */
A68_INT  GOABELA;  /* YIELD */
A68_185  HOABELA;  /* avoid structure result */
A68_263  IOABELA;  /* OPERATORS - unite union */
A68_262  JOABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(rp2);
{ 
VIDAELA_primtype( RLPAELA_type, A68_TRUE, &PNABELA );
QNABELA_t = PNABELA;
 /* line 3678: */
 /* line 3679: */
if ( !NZSAELA_isprimrange(QNABELA_t) )
{ 
 /* line 3680: */
 /* line 3681: */
UQPAELA_fault(224, VJAAOSI_nullmsg);
} 
else
{ 
VZSAELA_primrange( QNABELA_t, &RNABELA );
SNABELA_pr = RNABELA;
 /* line 3682: */
DSDAELA_uncheckedint( SNABELA_pr.Lwb, &TNABELA );
UNABELA = A_HEAP(A68_185 ) ;
(*UNABELA) = TNABELA ;
VNABELA_lwb = UNABELA;
 /* line 3683: */
DSDAELA_uncheckedint( SNABELA_pr.Upb, &WNABELA );
XNABELA = A_HEAP(A68_185 ) ;
(*XNABELA) = WNABELA ;
YNABELA_upb = XNABELA;
 /* line 3684: */
 /* line 3685: */
TWVAELA_rowtype( (*(&(COPAELA_typestack->T))), &ZNABELA );
AOABELA = ZNABELA ;
switch ( AOABELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
BOABELA_trow = (AOABELA.data.mode7);
 /* line 3686: */
{ 
 /* line 3687: */
DOABELA = 1 ;
GOABELA = 1 ;
PZRAELA_testintegers(CWRAELA_checkge, VNABELA_lwb, A_UNITE(FOABELA,mode1,1,GOABELA), 226, A_HVEC(EOABELA,A_UNITE(COABELA,mode16,16,DOABELA),A68_263 ));
 /* line 3688: */
DSDAELA_uncheckedint( (*(&(BOABELA_trow->Size))), &HOABELA );
RKPAELA_fp5 = HOABELA;
 /* line 3689: */
 /* line 3690: */
PZRAELA_testintegers(BWRAELA_checkle, YNABELA_upb, RKPAELA_fp5, 227, A_HVEC(JOABELA,A_UTABUNITE(IOABELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
 /* line 3691: */
if ( LERAELA_isintcheck((*VNABELA_lwb)) )
{ 
MJQAELA_loadint((*VNABELA_lwb), A68_FALSE);
} 
 /* line 3692: */
if ( LERAELA_isintcheck((*YNABELA_upb)) )
{ 
 /* line 3693: */
 /* line 3694: */
MJQAELA_loadint((*YNABELA_upb), A68_FALSE);
} 
} 
break;
default: 
 /* line 3695: */
 /* line 3696: */
/*SKIP*/;
break;
} 
} 
} 
A_PROC_EXIT(rp2);
return;
} 
#undef NL

A68_VOID  KOABELA_rp3(void)
{ 
A68_172  LOABELA;  /* avoid structure result */
A68_172  MOABELA;  /* united object - for case conformity */
A68_179 * NOABELA_trow;
A68_172  OOABELA;  /* OPERATORS - mode -> union mode */
A68_327  POABELA;  /* avoid structure result */
A68_32  QOABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  ROABELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(rp3);
{ 
 /* line 3700: */
TWVAELA_rowtype( (*(&(COPAELA_typestack->T))), &LOABELA );
MOABELA = LOABELA ;
switch ( MOABELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
NOABELA_trow = (MOABELA.data.mode7);
 /* line 3701: */
if ( !SQSAELA_equals(RLPAELA_type, (*(&(NOABELA_trow->T)))) )
{ 
RLPAELA_type = A_UNITE(OOABELA,mode10,10,DRCAELA_flt);
 /* line 3702: */
 /* line 3704: */
 /* line 3705: */
UQPAELA_fault(225, VJAAOSI_nullmsg);
} 
else
{ 
JASAELA_checkequals( RLPAELA_type, (*(&(NOABELA_trow->T))), A68_TRUE, A68_FALSE, A68_FALSE, 0, &POABELA );
POABELA;
 /* line 3706: */
RLPAELA_type = (*(&(COPAELA_typestack->T)));
 /* line 3707: */
 /* line 3708: */
 /* line 3709: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(QOABELA,TOCAELA_vreplace,A68_INT )),(A_HVEC(QOABELA,TOCAELA_vreplace,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
default: 
 /* line 3710: */
RLPAELA_type = A_UNITE(ROABELA,mode10,10,DRCAELA_flt);
break;
} 
 /* line 3711: */
 /* line 3712: */
 /* line 3714: */
COPAELA_typestack = (*(&(COPAELA_typestack->Rest)));
} 
A_PROC_EXIT(rp3);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void XJWAELA(void)   /* initialise DECS compileaction */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/compileaction.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/sidanalyser.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","./mfiles/compileproc.m","./mfiles/compmodes.m","/u/model/ella/transform/assoc/mfiles/charset.m","./mfiles/impmacro.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAELA();   /* USE sidanalyser */
JFAAOSI();   /* USE messageproc */
IHPAELA();   /* USE compileproc */
UICAELA();   /* USE compmodes */
GMAATRN();   /* USE charset */
GGKAELA();   /* USE impmacro */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/compileaction.a68";
A_config.translation_time = "Tue Apr  4 10:37:51 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "WJWAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:37:51 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compileaction);
UEAALIB_a68config(LGAALIB_configinfo, BKWAELA);
 /* line 241: */
 /* line 242: */
 /* line 251: */
 /* line 253: */
 /* line 284: */
 /* line 285: */
 /* line 287: */
 /* line 288: */
 /* line 299: */
 /* line 354: */
 /* line 356: */
 /* line 358: */
 /* line 359: */
 /* line 366: */
 /* line 367: */
 /* line 371: */
 /* line 372: */
 /* line 393: */
 /* line 395: */
 /* line 397: */
 /* line 398: */
 /* line 409: */
 /* line 410: */
 /* line 412: */
 /* line 413: */
 /* line 417: */
 /* line 418: */
 /* line 420: */
 /* line 421: */
 /* line 425: */
 /* line 426: */
 /* line 432: */
 /* line 433: */
 /* line 435: */
 /* line 436: */
 /* line 440: */
 /* line 441: */
 /* line 443: */
 /* line 445: */
 /* line 446: */
 /* line 448: */
 /* line 449: */
 /* line 451: */
 /* line 452: */
 /* line 466: */
 /* line 468: */
 /* line 469: */
 /* line 475: */
 /* line 476: */
 /* line 481: */
 /* line 482: */
 /* line 488: */
 /* line 489: */
 /* line 494: */
 /* line 495: */
 /* line 500: */
 /* line 501: */
 /* line 508: */
 /* line 509: */
 /* line 511: */
 /* line 512: */
 /* line 516: */
 /* line 517: */
 /* line 519: */
 /* line 520: */
 /* line 522: */
 /* line 523: */
 /* line 534: */
 /* line 535: */
 /* line 548: */
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 586: */
 /* line 587: */
 /* line 592: */
 /* line 593: */
 /* line 599: */
 /* line 600: */
 /* line 602: */
 /* line 603: */
 /* line 618: */
 /* line 619: */
 /* line 638: */
 /* line 639: */
 /* line 675: */
 /* line 676: */
 /* line 717: */
 /* line 718: */
 /* line 733: */
 /* line 734: */
 /* line 736: */
 /* line 737: */
 /* line 754: */
 /* line 755: */
 /* line 771: */
 /* line 772: */
 /* line 777: */
 /* line 778: */
 /* line 791: */
 /* line 792: */
 /* line 813: */
 /* line 814: */
 /* line 826: */
 /* line 827: */
 /* line 837: */
 /* line 838: */
 /* line 852: */
 /* line 853: */
 /* line 855: */
 /* line 856: */
 /* line 858: */
 /* line 859: */
 /* line 863: */
 /* line 864: */
 /* line 874: */
 /* line 875: */
 /* line 887: */
 /* line 888: */
 /* line 914: */
 /* line 915: */
 /* line 948: */
 /* line 949: */
 /* line 951: */
 /* line 952: */
 /* line 954: */
 /* line 955: */
 /* line 967: */
 /* line 968: */
 /* line 970: */
 /* line 971: */
 /* line 975: */
 /* line 976: */
 /* line 982: */
 /* line 983: */
 /* line 985: */
 /* line 986: */
 /* line 993: */
 /* line 994: */
 /* line 1000: */
 /* line 1001: */
 /* line 1006: */
 /* line 1007: */
 /* line 1013: */
 /* line 1014: */
 /* line 1018: */
 /* line 1019: */
 /* line 1023: */
 /* line 1024: */
 /* line 1029: */
 /* line 1031: */
 /* line 1037: */
 /* line 1041: */
 /* line 1044: */
 /* line 1045: */
 /* line 1060: */
 /* line 1075: */
 /* line 1085: */
 /* line 1087: */
 /* line 1089: */
 /* line 1090: */
 /* line 1094: */
 /* line 1095: */
 /* line 1124: */
 /* line 1125: */
 /* line 1129: */
 /* line 1130: */
 /* line 1155: */
 /* line 1156: */
 /* line 1161: */
 /* line 1162: */
 /* line 1188: */
 /* line 1189: */
 /* line 1255: */
 /* line 1256: */
 /* line 1258: */
 /* line 1259: */
 /* line 1300: */
 /* line 1301: */
 /* line 1303: */
 /* line 1304: */
 /* line 1321: */
 /* line 1322: */
 /* line 1341: */
 /* line 1343: */
 /* line 1344: */
 /* line 1351: */
 /* line 1352: */
 /* line 1357: */
 /* line 1358: */
 /* line 1360: */
 /* line 1361: */
 /* line 1363: */
 /* line 1365: */
 /* line 1366: */
 /* line 1368: */
 /* line 1369: */
 /* line 1371: */
 /* line 1372: */
 /* line 1374: */
 /* line 1376: */
 /* line 1377: */
 /* line 1382: */
 /* line 1383: */
 /* line 1388: */
 /* line 1389: */
 /* line 1391: */
 /* line 1392: */
 /* line 1399: */
 /* line 1406: */
 /* line 1407: */
 /* line 1409: */
 /* line 1410: */
 /* line 1414: */
 /* line 1415: */
 /* line 1424: */
 /* line 1425: */
 /* line 1427: */
 /* line 1428: */
 /* line 1443: */
 /* line 1446: */
 /* line 1447: */
 /* line 1451: */
 /* line 1452: */
 /* line 1457: */
 /* line 1458: */
 /* line 1462: */
 /* line 1463: */
 /* line 1476: */
 /* line 1477: */
 /* line 1483: */
 /* line 1484: */
 /* line 1543: */
 /* line 1544: */
 /* line 1559: */
 /* line 1560: */
 /* line 1562: */
 /* line 1563: */
 /* line 1596: */
 /* line 1597: */
 /* line 1599: */
 /* line 1629: */
 /* line 1631: */
 /* line 1633: */
 /* line 1634: */
 /* line 1636: */
 /* line 1637: */
 /* line 1655: */
 /* line 1656: */
 /* line 1672: */
 /* line 1673: */
 /* line 1684: */
 /* line 1685: */
 /* line 1690: */
 /* line 1691: */
 /* line 1692: */
 /* line 1704: */
 /* line 1705: */
 /* line 1711: */
 /* line 1712: */
 /* line 1717: */
 /* line 1718: */
 /* line 1727: */
 /* line 1728: */
 /* line 1743: */
 /* line 1744: */
 /* line 1748: */
 /* line 1749: */
 /* line 1772: */
 /* line 1773: */
 /* line 1792: */
 /* line 1793: */
 /* line 1973: */
 /* line 1974: */
 /* line 1997: */
 /* line 1999: */
 /* line 2001: */
 /* line 2002: */
 /* line 2019: */
 /* line 2020: */
 /* line 2022: */
 /* line 2023: */
 /* line 2035: */
 /* line 2036: */
 /* line 2041: */
 /* line 2042: */
 /* line 2051: */
 /* line 2052: */
 /* line 2083: */
 /* line 2084: */
 /* line 2120: */
 /* line 2121: */
 /* line 2139: */
 /* line 2140: */
 /* line 2155: */
 /* line 2156: */
 /* line 2176: */
 /* line 2177: */
 /* line 2183: */
 /* line 2184: */
 /* line 2205: */
 /* line 2206: */
 /* line 2220: */
 /* line 2221: */
 /* line 2231: */
 /* line 2232: */
 /* line 2239: */
 /* line 2240: */
 /* line 2270: */
 /* line 2271: */
 /* line 2285: */
 /* line 2286: */
 /* line 2296: */
 /* line 2297: */
 /* line 2299: */
 /* line 2300: */
 /* line 2306: */
 /* line 2307: */
 /* line 2377: */
 /* line 2378: */
 /* line 2386: */
 /* line 2387: */
 /* line 2406: */
 /* line 2407: */
 /* line 2421: */
 /* line 2422: */
 /* line 2453: */
 /* line 2454: */
 /* line 2456: */
 /* line 2457: */
 /* line 2459: */
 /* line 2460: */
 /* line 2470: */
 /* line 2471: */
 /* line 2502: */
 /* line 2503: */
 /* line 2507: */
 /* line 2508: */
 /* line 2524: */
 /* line 2525: */
 /* line 2530: */
 /* line 2531: */
 /* line 2535: */
 /* line 2536: */
 /* line 2546: */
 /* line 2547: */
 /* line 2551: */
 /* line 2552: */
 /* line 2559: */
 /* line 2560: */
 /* line 2562: */
 /* line 2563: */
 /* line 2570: */
 /* line 2571: */
 /* line 2573: */
 /* line 2574: */
 /* line 2576: */
 /* line 2577: */
 /* line 2579: */
 /* line 2580: */
 /* line 2582: */
 /* line 2583: */
 /* line 2586: */
 /* line 2587: */
 /* line 2592: */
 /* line 2593: */
 /* line 2599: */
 /* line 2600: */
 /* line 2611: */
 /* line 2612: */
 /* line 2624: */
 /* line 2625: */
 /* line 2650: */
 /* line 2651: */
 /* line 2655: */
 /* line 2656: */
 /* line 2658: */
 /* line 2659: */
 /* line 2668: */
 /* line 2669: */
 /* line 2679: */
 /* line 2680: */
 /* line 2684: */
 /* line 2685: */
 /* line 2715: */
 /* line 2716: */
 /* line 2728: */
 /* line 2729: */
 /* line 2739: */
 /* line 2740: */
 /* line 2747: */
 /* line 2748: */
 /* line 2752: */
 /* line 2753: */
 /* line 2759: */
 /* line 2760: */
 /* line 2765: */
 /* line 2766: */
 /* line 2774: */
 /* line 2775: */
 /* line 2777: */
 /* line 2778: */
 /* line 2782: */
 /* line 2783: */
 /* line 2785: */
 /* line 2786: */
 /* line 2789: */
 /* line 2790: */
 /* line 2792: */
 /* line 2793: */
 /* line 2795: */
 /* line 2796: */
 /* line 2798: */
 /* line 2799: */
 /* line 2803: */
 /* line 2804: */
 /* line 2806: */
 /* line 2807: */
 /* line 2809: */
 /* line 2810: */
 /* line 2812: */
 /* line 2813: */
 /* line 2822: */
 /* line 2823: */
 /* line 2825: */
 /* line 2826: */
 /* line 2828: */
 /* line 2829: */
 /* line 2836: */
 /* line 2837: */
 /* line 2838: */
 /* line 2853: */
 /* line 2854: */
 /* line 2856: */
 /* line 2858: */
 /* line 2860: */
 /* line 2861: */
 /* line 2928: */
 /* line 2929: */
 /* line 2936: */
 /* line 2937: */
 /* line 2943: */
 /* line 2944: */
 /* line 2958: */
 /* line 2959: */
 /* line 2966: */
 /* line 2967: */
 /* line 2996: */
 /* line 2997: */
 /* line 3003: */
 /* line 3004: */
 /* line 3018: */
 /* line 3020: */
 /* line 3022: */
 /* line 3023: */
 /* line 3030: */
 /* line 3031: */
 /* line 3074: */
 /* line 3075: */
 /* line 3202: */
 /* line 3203: */
 /* line 3212: */
 /* line 3213: */
 /* line 3219: */
 /* line 3220: */
 /* line 3232: */
 /* line 3233: */
 /* line 3238: */
 /* line 3239: */
 /* line 3241: */
 /* line 3242: */
 /* line 3255: */
 /* line 3256: */
 /* line 3258: */
 /* line 3259: */
 /* line 3261: */
 /* line 3262: */
 /* line 3296: */
 /* line 3297: */
 /* line 3307: */
 /* line 3308: */
 /* line 3310: */
 /* line 3311: */
 /* line 3346: */
 /* line 3347: */
 /* line 3393: */
 /* line 3394: */
 /* line 3438: */
 /* line 3439: */
 /* line 3440: */
 /* line 3464: */
 /* line 3465: */
 /* line 3509: */
 /* line 3510: */
 /* line 3560: */
 /* line 3576: */
 /* line 3577: */
 /* line 3581: */
 /* line 3582: */
 /* line 3584: */
 /* line 3586: */
 /* line 3587: */
 /* line 3593: */
 /* line 3594: */
 /* line 3607: */
 /* line 3608: */
 /* line 3613: */
 /* line 3614: */
 /* line 3624: */
 /* line 3625: */
 /* line 3641: */
 /* line 3642: */
 /* line 3649: */
 /* line 3650: */
 /* line 3661: */
 /* line 3662: */
 /* line 3676: */
 /* line 3677: */
 /* line 3698: */
 /* line 3699: */
 /* line 3771: */
A_PROC_EXIT(DECS compileaction);
} 
#undef NL
/* end of translation of ./a68files/compileaction.a68 */
