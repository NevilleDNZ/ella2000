
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
/* UNAME:FGKAELA */
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
struct A68t159{
A68_INT  Type;
A_PAD_INT(PAD_34)
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT)  */
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t161 *),(struct A68t161 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC REF MODE161 */
A_ROW(struct A68t159 ,A68t161,1);
typedef struct A68t161  A68_161 ;    /* [] MODE159 */
struct A68t163 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t163 *),(struct A68t163 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC MODE163 */

A_PROCEDURE(A68_INT ,A68t163,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE26,BOOL) INT */
struct A68t164{
A68_INT  Macsort;
A_PAD_INT(PAD_36)
A68_INT  Vss;
A_PAD_INT(PAD_37)
A68_INT  Maxvss;
A_PAD_INT(PAD_38)
A68_INT  K;
A_PAD_INT(PAD_39)
A68_INT  Which;
A_PAD_INT(PAD_40)
A68_INT  Scope;
A_PAD_INT(PAD_41)
A68_VC  Lastop;
A68_VC  Lastcall;
A68_BOOL  Errorswitch;
A_PAD_BOOL(PAD_42)
A68_BOOL  Lhsjoin;
A_PAD_BOOL(PAD_43)
struct A68t165 * Joinstack;
struct A68t166 * Joinst;
struct A68t167 * Joinup;
struct A68t168 * Joinvarstack;
struct A68t169 * Joinmultstack;
struct A68t166 * Joinvarst;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,INT,INT,INT,INT,INT,REF MODE26,REF MODE26,BOOL,BOOL,REF MODE165,REF MODE166,REF MODE167,REF MODE168,REF MODE169,REF MODE166)  */
struct A68t173{
A68_INT  Flt;
A_PAD_INT(PAD_44)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT)  */
struct A68t167 { A68_INT mode; union {
struct A68t166 * mode1;
struct A68t250 * mode2;
struct A68t251 * mode3;
struct A68t252 * mode4;
struct A68t253 * mode5;
struct A68t254 * mode6;
struct A68t173  mode7;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE166,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,MODE173)  */
struct A68t165{
struct A68t167  Joinup;
struct A68t165 * Rest;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE167,REF MODE165)  */
struct A68t166{
struct A68t167  Jst;
struct A68t166 * Rest;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE167,REF MODE166)  */
struct A68t180{
A68_INT  P;
A_PAD_INT(PAD_45)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Inull;
A_PAD_INT(PAD_46)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT)  */
struct A68t184{
A68_INT  Unset;
A_PAD_INT(PAD_47)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT)  */
struct A68t170 { A68_INT mode; union {
A68_INT  mode1;
struct A68t171 * mode2;
struct A68t172 * mode3;
struct A68t173  mode4;
struct A68t174 * mode5;
struct A68t175 * mode6;
struct A68t176 * mode7;
struct A68t177 * mode8;
struct A68t178 * mode9;
struct A68t179 * mode10;
struct A68t180  mode11;
struct A68t181 * mode12;
struct A68t182 * mode13;
struct A68t183  mode14;
struct A68t184  mode15;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(INT,REF MODE171,REF MODE172,MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,MODE180,REF MODE181,REF MODE182,MODE183,MODE184)  */
struct A68t168{
struct A68t170  Lwb;
struct A68t170  Upb;
A68_BOOL  Index;
A_PAD_BOOL(PAD_48)
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE170,MODE170,BOOL,REF MODE168)  */
struct A68t169{
struct A68t167  Joinup;
A68_BOOL  Source;
A_PAD_BOOL(PAD_49)
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE167,BOOL,REF MODE169)  */
struct A68t171{
A68_VC  Text;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE26)  */
struct A68t172{
A68_INT  Int;
A_PAD_INT(PAD_50)
A68_VC  Text;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t174{
struct A68t170  Integer;
struct A68t170  Standard;
A68_INT  Test;
A_PAD_INT(PAD_51)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE170,MODE170,INT)  */
struct A68t175{
struct A68t207 * Im;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE207)  */
struct A68t176{
A68_INT  Opno;
A_PAD_INT(PAD_52)
struct A68t170  L;
struct A68t170  R;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,MODE170,MODE170)  */
struct A68t177{
A68_INT  Opno;
A_PAD_INT(PAD_53)
struct A68t170  R;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT,MODE170)  */
struct A68t178{
struct A68t170  Cond;
struct A68t170  T;
struct A68t170  F;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE170,MODE170,MODE170)  */
struct A68t179{
A68_INT  Varmultno;
A_PAD_INT(PAD_54)
struct A68t170  Lwb;
struct A68t170  Upb;
struct A68t170  Index;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,MODE170,MODE170,MODE170)  */
struct A68t181{
struct A68t185 * Idinfo;
A68_INT  Intno;
A_PAD_INT(PAD_55)
struct A68t170  I;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE185,INT,MODE170)  */
struct A68t182{
struct A68t170  Ibracket;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE170)  */
struct A68t187{
struct A68t170  I;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE170)  */
struct A68t201{
A68_INT  Tnull;
A_PAD_INT(PAD_56)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT)  */
struct A68t206{
A68_INT  Tvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT)  */
struct A68t196 { A68_INT mode; union {
struct A68t197 * mode1;
struct A68t198 * mode2;
struct A68t199 * mode3;
struct A68t200 * mode4;
struct A68t201  mode5;
struct A68t202 * mode6;
struct A68t203 * mode7;
struct A68t204 * mode8;
struct A68t205 * mode9;
struct A68t173  mode10;
struct A68t184  mode11;
struct A68t206  mode12;
} data; };
typedef struct A68t196  A68_196 ;    /* UNION(REF MODE197,REF MODE198,REF MODE199,REF MODE200,MODE201,REF MODE202,REF MODE203,REF MODE204,REF MODE205,MODE173,MODE184,MODE206)  */
struct A68t188{
struct A68t196  T;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE196)  */
struct A68t242{
A68_INT  Cvoid;
A_PAD_INT(PAD_58)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT)  */
struct A68t227 { A68_INT mode; union {
struct A68t228 * mode1;
struct A68t229 * mode2;
struct A68t230 * mode3;
struct A68t190 * mode4;
struct A68t231 * mode5;
struct A68t232 * mode6;
struct A68t233 * mode7;
struct A68t234 * mode8;
struct A68t235 * mode9;
struct A68t173  mode10;
struct A68t184  mode11;
struct A68t236 * mode12;
struct A68t237 * mode13;
struct A68t238 * mode14;
struct A68t239 * mode15;
struct A68t240 * mode16;
struct A68t241 * mode17;
struct A68t242  mode18;
struct A68t243 * mode19;
struct A68t244 * mode20;
struct A68t245 * mode21;
struct A68t246 * mode22;
struct A68t247 * mode23;
struct A68t248 * mode24;
} data; };
typedef struct A68t227  A68_227 ;    /* UNION(REF MODE228,REF MODE229,REF MODE230,REF MODE190,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,MODE173,MODE184,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248)  */
struct A68t189{
struct A68t227  Ct;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE227)  */
struct A68t190{
struct A68t196  Type;
A68_INT  Index;
A_PAD_INT(PAD_59)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE196,INT)  */
struct A68t214{
A68_INT  Anull;
A_PAD_INT(PAD_60)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t208 { A68_INT mode; union {
struct A68t209 * mode1;
struct A68t210 * mode2;
struct A68t211 * mode3;
struct A68t212 * mode4;
struct A68t213 * mode5;
struct A68t214  mode6;
struct A68t173  mode7;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,MODE214,MODE173)  */
struct A68t192{
struct A68t208  A;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE208)  */
struct A68t193{
struct A68t196  Type;
A68_INT  Decno;
A_PAD_INT(PAD_61)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE196,INT)  */
struct A68t194{
A68_INT  Rec;
A_PAD_INT(PAD_62)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
A68_INT  Notdec;
A_PAD_INT(PAD_63)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT)  */
struct A68t186 { A68_INT mode; union {
struct A68t187  mode1;
struct A68t188  mode2;
struct A68t189  mode3;
struct A68t190  mode4;
struct A68t191 * mode5;
struct A68t192  mode6;
struct A68t193  mode7;
struct A68t173  mode8;
struct A68t194  mode9;
struct A68t195  mode10;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(MODE187,MODE188,MODE189,MODE190,REF MODE191,MODE192,MODE193,MODE173,MODE194,MODE195)  */
struct A68t185{
A68_INT  Scope;
A_PAD_INT(PAD_64)
A68_INT  Vnno;
A_PAD_INT(PAD_65)
A68_BOOL  Text;
A_PAD_BOOL(PAD_66)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_67)
A68_BOOL  Inscope;
A_PAD_BOOL(PAD_68)
A68_BOOL  Export;
A_PAD_BOOL(PAD_69)
A68_VC  Id;
struct A68t186  U;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,BOOL,BOOL,BOOL,BOOL,REF MODE26,MODE186)  */
struct A68t224 { A68_INT mode; union {
struct A68t225 * mode1;
struct A68t226 * mode2;
struct A68t173  mode3;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE225,REF MODE226,MODE173)  */
struct A68t191{
A68_INT  Decno;
A_PAD_INT(PAD_70)
A68_INT  Origin;
A_PAD_INT(PAD_71)
struct A68t223 * Makeint;
struct A68t196  Type;
struct A68t167  Jsource;
struct A68t167  Jsink;
struct A68t224  Input;
struct A68t224  Output;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,REF MODE223,MODE196,MODE167,MODE167,MODE224,MODE224)  */
struct A68t217{
struct A68t185 * Idinfo;
struct A68t170  Lwb;
struct A68t170  Upb;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE185,MODE170,MODE170)  */
struct A68t219{
struct A68t185 * Idinfo;
struct A68t54  Charcheck;
struct A68t220 * Charalts;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE185,REF MODE54,REF MODE220)  */
struct A68t216 { A68_INT mode; union {
struct A68t217  mode1;
struct A68t218 * mode2;
struct A68t219  mode3;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(MODE217,REF MODE218,MODE219)  */
struct A68t197{
struct A68t185 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_72)
struct A68t216  U;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE185,INT,MODE216)  */
struct A68t198{
struct A68t185 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_73)
struct A68t196  T;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE185,INT,MODE196)  */
struct A68t199{
struct A68t196  T;
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE196,REF MODE199)  */
struct A68t200{
struct A68t207 * Tm;
struct A68t196  T;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE207,MODE196)  */
struct A68t202{
struct A68t196  From;
struct A68t196  To;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE196,MODE196)  */
struct A68t203{
struct A68t196  T;
struct A68t170  Size;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE196,MODE170)  */
struct A68t204{
struct A68t196  Tbracket;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE196)  */
struct A68t205{
struct A68t170  Size;
struct A68t196  Tstring;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE170,MODE196)  */
struct A68t207{
A68_VC  Id;
A68_INT  Sort;
A_PAD_INT(PAD_74)
A68_INT  Fnno;
A_PAD_INT(PAD_75)
A68_INT  Index;
A_PAD_INT(PAD_76)
A68_INT  Xno;
A_PAD_INT(PAD_77)
struct A68t208  Attr;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(REF MODE26,INT,INT,INT,INT,MODE208)  */
struct A68t209{
struct A68t185 * Idinfo;
A68_INT  Attrno;
A_PAD_INT(PAD_78)
struct A68t208  Attr;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(REF MODE185,INT,MODE208)  */
struct A68t210{
A68_VC  Classname;
struct A68t215 * Data;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE26,REF MODE215)  */
struct A68t211{
struct A68t208  Elem;
struct A68t211 * Rest;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE208,REF MODE211)  */
struct A68t212{
struct A68t208  Abracket;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE208)  */
struct A68t213{
struct A68t207 * Am;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE207)  */
struct A68t215{
A68_VC  Id;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE26,REF MODE215)  */
struct A68t218{
struct A68t185 * Idinfo;
struct A68t196 * U;
struct A68t218 * Rest;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE185,REF MODE196,REF MODE218)  */
struct A68t222{
A68_CHAR  Lwchar;
A_PAD_CHAR(PAD_79)
A68_CHAR  Upchar;
A_PAD_CHAR(PAD_80)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t221 { A68_INT mode; union {
A68_CHAR  mode1;
struct A68t222  mode2;
} data; };
typedef struct A68t221  A68_221 ;    /* UNION(CHAR,MODE222)  */
struct A68t220{
struct A68t221  Alts;
struct A68t220 * Rest;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE221,REF MODE220)  */
struct A68t223{
struct A68t170  I;
struct A68t223 * Rest;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE170,REF MODE223)  */
struct A68t225{
A68_VC  Id;
A68_INT  Fnno;
A_PAD_INT(PAD_81)
A68_INT  Nameno;
A_PAD_INT(PAD_82)
A68_INT  Index;
A_PAD_INT(PAD_83)
struct A68t196  Type;
A68_BOOL  Single;
A_PAD_BOOL(PAD_84)
struct A68t225 * Rest;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE26,INT,INT,INT,MODE196,BOOL,REF MODE225)  */
struct A68t226{
struct A68t224  Port;
struct A68t170  I;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE224,MODE170)  */
struct A68t228{
struct A68t185 * Idinfo;
A68_INT  Ctypeno;
A_PAD_INT(PAD_85)
struct A68t227  Ct;
struct A68t196  T;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE185,INT,MODE227,MODE196)  */
struct A68t229{
struct A68t196  T;
struct A68t170  Lwb;
struct A68t170  Upb;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE196,MODE170,MODE170)  */
struct A68t230{
struct A68t196  T;
struct A68t170  Index;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE196,MODE170)  */
struct A68t231{
struct A68t190 * P;
struct A68t227  Ct;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE190,MODE227)  */
struct A68t232{
struct A68t227  Ct;
struct A68t170  Size;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE227,MODE170)  */
struct A68t233{
struct A68t227  Cst;
struct A68t233 * Rest;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE227,REF MODE233)  */
struct A68t234{
struct A68t227  Calt;
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE227,REF MODE234)  */
struct A68t235{
struct A68t196  Ct;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE196)  */
struct A68t236{
struct A68t227  Cbracket;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE227)  */
struct A68t237{
struct A68t196  Querytype;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE196)  */
struct A68t238{
struct A68t170  Size;
struct A68t227  Ct;
struct A68t215 * Strings;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE170,MODE227,REF MODE215)  */
struct A68t239{
struct A68t196  T;
A68_CHAR  Char;
A_PAD_CHAR(PAD_86)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE196,CHAR)  */
struct A68t240{
struct A68t196  T;
A68_CHAR  Lwb;
A_PAD_CHAR(PAD_87)
A68_CHAR  Upb;
A_PAD_CHAR(PAD_88)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE196,CHAR,CHAR)  */
struct A68t241{
struct A68t207 * Cm;
struct A68t196  T;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE207,MODE196)  */
struct A68t243{
struct A68t227  Ct;
struct A68t170  Index;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE227,MODE170)  */
struct A68t244{
struct A68t227  Ct;
struct A68t170  Lwb;
struct A68t170  Upb;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE227,MODE170,MODE170)  */
struct A68t245{
struct A68t170  Test;
struct A68t227  Then;
struct A68t227  Else;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE170,MODE227,MODE227)  */
struct A68t246{
struct A68t249 * Ids;
struct A68t227  Ct;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(REF MODE249,MODE227)  */
struct A68t247{
A68_BOOL  String;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t227  Left;
struct A68t227  Right;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(BOOL,INT,MODE227,MODE227)  */
struct A68t248{
struct A68t227  Ct;
struct A68t208  Attr;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE227,MODE208)  */
struct A68t249{
struct A68t185 * Idinfo;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_91)
struct A68t208  Attr;
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF MODE185,BOOL,MODE208,REF MODE249)  */
struct A68t253{
A68_INT  J;
A_PAD_INT(PAD_92)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT)  */
struct A68t250{
struct A68t253  Joined;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE253)  */
A_VECTOR(struct A68t167 ,A68t255);
typedef struct A68t255  A68_255 ;    /* VECTOR [] MODE167 */
struct A68t251{
struct A68t255  Jrow;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE255)  */
struct A68t252{
struct A68t167  Source;
struct A68t167  Sink;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE167,MODE167)  */
struct A68t254{
struct A68t167  Jrep;
struct A68t168  Jvarstack;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE167,MODE168)  */
struct A68t256{
struct A68t170  Integer;
struct A68t196  Type;
struct A68t196  Jointype;
struct A68t199 * Sts;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE170,MODE196,MODE196,REF MODE199)  */
struct A68t257{
struct A68t258 * Fncallstack;
struct A68t259 * Lastops;
struct A68t259 * Lastcalls;
struct A68t249 * Decids;
struct A68t199 * Mltype;
struct A68t199 ** Nextmltype;
struct A68t260 * Multlets;
struct A68t260 * Multiassign;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(REF MODE258,REF MODE259,REF MODE259,REF MODE249,REF MODE199,REF REF MODE199,REF MODE260,REF MODE260)  */
struct A68t258{
struct A68t261 * Fncall;
A68_BOOL  Explicitparam;
A_PAD_BOOL(PAD_93)
struct A68t262 ** Nextmp;
struct A68t258 * Rest;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(REF MODE261,BOOL,REF REF MODE262,REF MODE258)  */
struct A68t259{
A68_VC  Last;
struct A68t259 * Rest;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(REF MODE26,REF MODE259)  */
struct A68t260{
A68_INT  Num;
A_PAD_INT(PAD_94)
struct A68t260 * Rest;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT,REF MODE260)  */
struct A68t261{
struct A68t264 * F;
struct A68t267 * Pvals;
struct A68t267 ** Nextpvals;
struct A68t208  Attr;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(REF MODE264,REF MODE267,REF REF MODE267,MODE208)  */
struct A68t263 { A68_INT mode; union {
struct A68t213 * mode1;
struct A68t175 * mode2;
struct A68t200 * mode3;
struct A68t241 * mode4;
struct A68t264 * mode5;
struct A68t173  mode6;
} data; };
typedef struct A68t263  A68_263 ;    /* UNION(REF MODE213,REF MODE175,REF MODE200,REF MODE241,REF MODE264,MODE173)  */
struct A68t262{
A68_INT  Sort;
A_PAD_INT(PAD_95)
A68_INT  Mparamno;
A_PAD_INT(PAD_96)
struct A68t263  Value;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(INT,INT,MODE263,REF MODE262)  */
struct A68t264{
struct A68t265 * Fninfo;
A68_INT  Sort;
A_PAD_INT(PAD_97)
A68_INT  Fnno;
A_PAD_INT(PAD_98)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_99)
A68_VC  Id;
A68_INT  Mparamno;
A_PAD_INT(PAD_100)
struct A68t262 * Mp;
struct A68t262 ** Nextmp;
struct A68t208  Attr;
struct A68t266 * Inputs;
struct A68t266 * Outputs;
struct A68t196  Param;
struct A68t196  Ans;
A68_INT  Num_names;
A_PAD_INT(PAD_101)
};
typedef struct A68t264  A68_264 ;    /* STRUCT(REF MODE265,INT,INT,BOOL,REF MODE26,INT,REF MODE262,REF REF MODE262,MODE208,REF MODE266,REF MODE266,MODE196,MODE196,INT)  */
struct A68t265{
A68_INT  Scope;
A_PAD_INT(PAD_102)
A68_INT  Vnno;
A_PAD_INT(PAD_103)
A68_INT  Status;
A_PAD_INT(PAD_104)
A68_BOOL  Text;
A_PAD_BOOL(PAD_105)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_106)
A68_BOOL  Import;
A_PAD_BOOL(PAD_107)
A68_BOOL  Export;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,INT,INT,BOOL,BOOL,BOOL,BOOL)  */
struct A68t266{
struct A68t196  T;
struct A68t249 * Ids;
struct A68t266 * Rest;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE196,REF MODE249,REF MODE266)  */
struct A68t268 { A68_INT mode; union {
struct A68t187  mode1;
struct A68t188  mode2;
struct A68t189  mode3;
struct A68t261  mode4;
struct A68t192  mode5;
struct A68t173  mode6;
} data; };
typedef struct A68t268  A68_268 ;    /* UNION(MODE187,MODE188,MODE189,MODE261,MODE192,MODE173)  */
struct A68t267{
struct A68t268  Val;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE268,REF MODE267)  */
struct A68t269{
struct A68t270 * Decnocheck;
struct A68t224  Portinfo;
struct A68t271 * Portstack;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE270,MODE224,REF MODE271)  */
struct A68t270{
A68_INT  Decno;
A_PAD_INT(PAD_109)
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT,REF MODE270)  */
struct A68t271{
struct A68t224  Port;
struct A68t271 * Rest;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE224,REF MODE271)  */
struct A68t272{
struct A68t264 * Fndec;
struct A68t164 * Cint;
struct A68t256 * Ctyp;
struct A68t257 * Csta;
struct A68t269 * Crem;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(REF MODE264,REF MODE164,REF MODE256,REF MODE257,REF MODE269)  */
struct A68t273{
struct A68t272 * Val;
struct A68t273 * Rest;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE272,REF MODE273)  */
struct A68t274{
struct A68t264 * Dec;
struct A68t274 * Rest;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE264,REF MODE274)  */
struct A68t275{
struct A68t264 * Fndec;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_110)
struct A68t275 * Rest;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE264,BOOL,REF MODE275)  */
A_VECTOR(struct A68t54 ,A68t276);
typedef struct A68t276  A68_276 ;    /* VECTOR [] REF MODE54 */
struct A68t277{
struct A68t170  I;
struct A68t196  T;
struct A68t227  Ct;
struct A68t208  A;
A68_INT  W;
A_PAD_INT(PAD_111)
struct A68t277 * Rest;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE170,MODE196,MODE227,MODE208,INT,REF MODE277)  */
struct A68t278{
struct A68t196  Param;
struct A68t196  Output;
struct A68t234 * Tested;
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE196,MODE196,REF MODE234,REF MODE278)  */
struct A68t279{
struct A68t185  I;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE185,REF MODE279)  */
struct A68t280{
A68_INT  I;
A_PAD_INT(PAD_112)
A68_VC  Name;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,REF MODE26,REF MODE280)  */
struct A68t281{
A68_INT  Scope;
A_PAD_INT(PAD_113)
struct A68t249 * Ids;
struct A68t275 * Fns;
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT,REF MODE249,REF MODE275,REF MODE281)  */
struct A68t282{
A68_INT  State;
A_PAD_INT(PAD_114)
struct A68t282 * Rest;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,REF MODE282)  */
struct A68t283{
A68_INT  Param;
A_PAD_INT(PAD_115)
A68_INT  Ans;
A_PAD_INT(PAD_116)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,INT)  */
struct A68t284{
A68_INT  L;
A_PAD_INT(PAD_117)
A68_INT  R;
A_PAD_INT(PAD_118)
A68_INT  Ans;
A_PAD_INT(PAD_119)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t196 ,A68t285);
typedef struct A68t285  A68_285 ;    /* VECTOR [] MODE196 */
A_VECTOR(struct A68t283 ,A68t286);
typedef struct A68t286  A68_286 ;    /* VECTOR [] MODE283 */
A_VECTOR(struct A68t284 ,A68t287);
typedef struct A68t287  A68_287 ;    /* VECTOR [] MODE284 */
A_VECTOR(struct A68t289 ,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] MODE289 */
struct A68t289{
A68_VC  Id;
A68_INT  Tokno;
A_PAD_INT(PAD_120)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t170 ,struct A68t170 *),(struct A68t170 ,struct A68t170 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE170) MODE170 */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t196 ,struct A68t196 *),(struct A68t196 ,struct A68t196 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE196) MODE196 */

A_PROCEDURE(struct A68t182 *,A68t292,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE170) REF MODE182 */

A_PROCEDURE(struct A68t204 *,A68t293,(struct A68t196 ),(struct A68t196 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE196) REF MODE204 */

A_PROCEDURE(struct A68t236 *,A68t294,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE227) REF MODE236 */

A_PROCEDURE(struct A68t212 *,A68t295,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE208) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t170 ,struct A68t187 *),(struct A68t170 ,struct A68t187 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE170) MODE187 */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t196 ,struct A68t188 *),(struct A68t196 ,struct A68t188 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE196) MODE188 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t208 ,struct A68t192 *),(struct A68t208 ,struct A68t192 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE208) MODE192 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t227 ,struct A68t189 *),(struct A68t227 ,struct A68t189 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE227) MODE189 */

A_PROCEDURE(struct A68t213 *,A68t300,(struct A68t207 *),(struct A68t207 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE207) REF MODE213 */

A_PROCEDURE(struct A68t175 *,A68t301,(struct A68t207 *),(struct A68t207 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE207) REF MODE175 */

A_PROCEDURE(struct A68t237 *,A68t302,(struct A68t196 ),(struct A68t196 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE196) REF MODE237 */

A_PROCEDURE(A68_BOOL ,A68t303,(struct A68t253 ,struct A68t253 ),(struct A68t253 ,struct A68t253 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE253,MODE253) BOOL */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t167 *,A68_INT ),(struct A68t167 *,A68_INT ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE167,INT) VOID */
struct A68t305 { A68_INT mode; union {
struct A68t197 * mode1;
struct A68t198 * mode2;
struct A68t199 * mode3;
struct A68t200 * mode4;
struct A68t201  mode5;
struct A68t202 * mode6;
struct A68t203 * mode7;
struct A68t204 * mode8;
struct A68t205 * mode9;
struct A68t173  mode10;
struct A68t184  mode11;
struct A68t206  mode12;
A68_VC  mode13;
struct A68t264 * mode14;
struct A68t144  mode15;
A68_INT  mode16;
struct A68t171 * mode17;
struct A68t172 * mode18;
struct A68t174 * mode19;
struct A68t175 * mode20;
struct A68t176 * mode21;
struct A68t177 * mode22;
struct A68t178 * mode23;
struct A68t179 * mode24;
struct A68t180  mode25;
struct A68t181 * mode26;
struct A68t182 * mode27;
struct A68t183  mode28;
struct A68t228 * mode29;
struct A68t229 * mode30;
struct A68t230 * mode31;
struct A68t190 * mode32;
struct A68t231 * mode33;
struct A68t232 * mode34;
struct A68t233 * mode35;
struct A68t234 * mode36;
struct A68t235 * mode37;
struct A68t236 * mode38;
struct A68t237 * mode39;
struct A68t238 * mode40;
struct A68t239 * mode41;
struct A68t240 * mode42;
struct A68t241 * mode43;
struct A68t242  mode44;
struct A68t243 * mode45;
struct A68t244 * mode46;
struct A68t245 * mode47;
struct A68t246 * mode48;
struct A68t247 * mode49;
struct A68t248 * mode50;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(REF MODE197,REF MODE198,REF MODE199,REF MODE200,MODE201,REF MODE202,REF MODE203,REF MODE204,REF MODE205,MODE173,MODE184,MODE206,REF MODE26,REF MODE264,MODE144,INT,REF MODE171,REF MODE172,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,MODE180,REF MODE181,REF MODE182,MODE183,REF MODE228,REF MODE229,REF MODE230,REF MODE190,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248)  */
struct A68t306{
struct A68t249 * Ids;
A68_INT  Macsort;
A_PAD_INT(PAD_121)
A68_INT  Xno;
A_PAD_INT(PAD_122)
A68_BOOL  New;
A_PAD_BOOL(PAD_123)
struct A68t306 * Rest;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(REF MODE249,INT,INT,BOOL,REF MODE306)  */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t196 ,A68_BOOL ,struct A68t196 *),(struct A68t196 ,A68_BOOL ,struct A68t196 *,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE196,BOOL) MODE196 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t266 *,struct A68t196 *),(struct A68t266 *,struct A68t196 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE266) MODE196 */

A_PROCEDURE(struct A68t179 *,A68t309,(struct A68t249 *),(struct A68t249 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(REF MODE249) REF MODE179 */
struct A68t310{
struct A68t311 * Database;
A68_VC  Description;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(REF MODE311,REF MODE26)  */
struct A68t311{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t312 * Df;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE312)  */
A_VECTOR(struct A68t313 ,A68t314);
typedef struct A68t314  A68_314 ;    /* VECTOR [] MODE313 */
struct A68t313{
A68_BITS  Code;
A_PAD_BITS(PAD_124)
A68_INT  First_block;
A_PAD_INT(PAD_125)
A68_INT  First_offset;
A_PAD_INT(PAD_126)
A68_INT  Data_elts;
A_PAD_INT(PAD_127)
A68_INT  Dp_elts;
A_PAD_INT(PAD_128)
A68_INT  Version;
A_PAD_INT(PAD_129)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_130)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t319 ,A68t318);
typedef struct A68t318  A68_318 ;    /* VECTOR [] MODE319 */
struct A68t320{
A68_INT  Block_num;
A_PAD_INT(PAD_131)
A68_INT  Offset;
A_PAD_INT(PAD_132)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(INT,INT)  */
struct A68t319{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_133)
struct A68t320  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_134)
A68_INT  Dp_elts;
A_PAD_INT(PAD_135)
A68_INT  Code;
A_PAD_INT(PAD_136)
A68_INT  Version;
A_PAD_INT(PAD_137)
A68_INT  Read_size;
A_PAD_INT(PAD_138)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(BOOL,MODE320,INT,INT,INT,INT,INT)  */
struct A68t312{
struct A68t313 * Root;
struct A68t313 * Indirs_dp;
struct A68t313 * Freelist_dp;
struct A68t313 * Pagetable_dp;
struct A68t313 * Append_dp;
struct A68t314  Free_block_dps;
struct A68t314  Pagetable_dps;
struct A68t92 ** File;
struct A68t92 ** Test_file;
struct A68t315 * Write_buffer;
A68_VC  Name;
A68_VC  Block_buffer;
A68_INT * Generation;
A68_INT * File_size;
A68_INT * Old_file_size;
A68_INT * Freelist_index;
A68_INT * Current_free;
A68_INT * First_free;
A68_INT * Last_free;
A68_INT * Cbufpos;
A68_INT * Freeblock_ptr;
A68_INT * Freelist_ext_ptr;
A68_INT * Initial_free_block_dps;
A68_INT * Size_of_free_space;
A68_INT * Unusable_bytes;
A68_INT * Appended_data;
A68_INT * Read_transfers;
A68_INT * Write_transfers;
struct A68t32  Freelist;
struct A68t32  Freelist_ext;
struct A68t32  Pagetable_ext;
struct A68t316 * Gc_ptrs;
struct A68t317 * Instore_vars;
struct A68t318  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE313,REF MODE313,REF MODE313,REF MODE313,REF MODE313,REF MODE314,REF MODE314,REF REF MODE92,REF REF MODE92,REF MODE315,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE316,REF MODE317,REF MODE318,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t315{
A68_VC  Buffer;
struct A68t321 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE26,REF MODE321,REF INT,REF INT,REF INT)  */
struct A68t316{
struct A68t320  Old;
struct A68t320  New;
struct A68t316 * Rest;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE320,MODE320,REF MODE316)  */
struct A68t317{
A68_INT  Indirection;
A_PAD_INT(PAD_139)
struct A68t317 * Rest;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT,REF MODE317)  */
struct A68t321{
A68_INT  Lwb;
A_PAD_INT(PAD_140)
A68_INT  Upb;
A_PAD_INT(PAD_141)
struct A68t321 * Rest;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT,INT,REF MODE321)  */

A_PROCEDURE(A68_BOOL ,A68t322,(struct A68t311 *,struct A68t313 ,struct A68t313 ),(struct A68t311 *,struct A68t313 ,struct A68t313 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE311,MODE313,MODE313) BOOL */

A_PROCEDURE(A68_INT ,A68t323,(struct A68t311 *,struct A68t313 ),(struct A68t311 *,struct A68t313 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE311,MODE313) INT */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t311 *,struct A68t313 *),(struct A68t311 *,struct A68t313 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE311) MODE313 */

A_PROCEDURE(struct A68t92 *,A68t325,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE26,INT,MODE97) REF MODE92 */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t92 *,A68_BOOL ,struct A68t311 *),(struct A68t92 *,A68_BOOL ,struct A68t311 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE92,BOOL) MODE311 */

A_PROCEDURE(A68_BOOL ,A68t327,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE311) BOOL */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t311 *,struct A68t313 ),(struct A68t311 *,struct A68t313 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE311,MODE313) VOID */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t311 *,struct A68t313 ,struct A68t97 ),(struct A68t311 *,struct A68t313 ,struct A68t97 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE311,MODE313,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t311 *,struct A68t97 ),(struct A68t311 *,struct A68t97 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE311,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t331,(struct A68t311 *,A68_INT ),(struct A68t311 *,A68_INT ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE311,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t311 *,A68_INT ,struct A68t97 ),(struct A68t311 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE311,INT,MODE97) VOID */

A_PROCEDURE(struct A68t92 *,A68t333,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE311) REF MODE92 */

A_PROCEDURE(A68_INT ,A68t334,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE311) INT */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE311) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t92 *,struct A68t92 *,struct A68t97 ),(struct A68t92 *,struct A68t92 *,struct A68t97 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE92,REF MODE92,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t338,(struct A68t310 *,struct A68t313 ),(struct A68t310 *,struct A68t313 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE310,MODE313) BOOL */
struct A68t339{
A68_VC  Rvc;
struct A68t339 * Rest;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE26,REF MODE339)  */
struct A68t340{
struct A68t310  Df;
struct A68t339  Head;
struct A68t339 * Current;
A68_INT  Index;
A_PAD_INT(PAD_142)
A68_INT  Type;
A_PAD_INT(PAD_143)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_144)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(MODE310,MODE339,REF MODE339,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t340 *,A68t341,(struct A68t310 *,struct A68t87 ,A68_INT ),(struct A68t310 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE310,MODE87,INT) REF MODE340 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t340 *),(struct A68t340 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE340) VOID */

A_PROCEDURE(struct A68t340 *,A68t343,(struct A68t310 *,struct A68t313 ),(struct A68t310 *,struct A68t313 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE310,MODE313) REF MODE340 */

A_PROCEDURE(A68_CHAR ,A68t344,(struct A68t340 *),(struct A68t340 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE340) CHAR */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t340 *,A68_VC ),(struct A68t340 *,A68_VC ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE340,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t346,(struct A68t340 *),(struct A68t340 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE340) BOOL */

A_PROCEDURE(A68_INT ,A68t347,(struct A68t340 *),(struct A68t340 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE340) INT */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t340 *,A68_VC *),(struct A68t340 *,A68_VC *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE340) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t310 *,struct A68t97 ),(struct A68t310 *,struct A68t97 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE310,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t310 *,A68_VC ,struct A68t97 ,struct A68t313 *),(struct A68t310 *,A68_VC ,struct A68t97 ,struct A68t313 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE310,MODE26,MODE97) MODE313 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t310 *,struct A68t314 ,struct A68t97 ,struct A68t313 *),(struct A68t310 *,struct A68t314 ,struct A68t97 ,struct A68t313 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE310,MODE314,MODE97) MODE313 */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t310 *,struct A68t313 ,struct A68t97 ),(struct A68t310 *,struct A68t313 ,struct A68t97 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE310,MODE313,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t310 *,A68_VC ,struct A68t313 ,struct A68t97 ),(struct A68t310 *,A68_VC ,struct A68t313 ,struct A68t97 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE310,REF MODE26,MODE313,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t310 *,struct A68t314 ,struct A68t313 ,struct A68t97 ),(struct A68t310 *,struct A68t314 ,struct A68t313 ,struct A68t97 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE310,REF MODE314,MODE313,MODE97) VOID */

A_PROCEDURE(struct A68t340 *,A68t355,(struct A68t310 *,struct A68t87 ),(struct A68t310 *,struct A68t87 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE310,MODE87) REF MODE340 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t340 *,struct A68t97 ),(struct A68t340 *,struct A68t97 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE340,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t340 *,struct A68t97 ,struct A68t313 *),(struct A68t340 *,struct A68t97 ,struct A68t313 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE340,MODE97) MODE313 */

A_PROCEDURE(A68_INT ,A68t358,(A68_CHAR ,struct A68t340 *,struct A68t97 ),(A68_CHAR ,struct A68t340 *,struct A68t97 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(CHAR,REF MODE340,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t359,(A68_VC ,struct A68t340 *,struct A68t97 ),(A68_VC ,struct A68t340 *,struct A68t97 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE26,REF MODE340,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t360,(A68_INT ,struct A68t340 *,struct A68t97 ),(A68_INT ,struct A68t340 *,struct A68t97 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(INT,REF MODE340,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t361,(A68_VC ,struct A68t340 *,struct A68t97 ),(A68_VC ,struct A68t340 *,struct A68t97 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE26,REF MODE340,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t362,(A68_BOOL ,struct A68t340 *,struct A68t97 ),(A68_BOOL ,struct A68t340 *,struct A68t97 ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(BOOL,REF MODE340,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t363,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t366 ,A68t365);
typedef struct A68t365  A68_365 ;    /* VECTOR [] MODE366 */
struct A68t366{
A68_INT  Number;
A_PAD_INT(PAD_145)
A68_BITS  Class;
A_PAD_BITS(PAD_146)
A68_VC  Text;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t364{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t365  Setup;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE365)  */

A_PROCEDURE(A68_VOID ,A68t367,(A68_BOOL ,struct A68t364 *),(A68_BOOL ,struct A68t364 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(BOOL) MODE364 */
A_VECTOR(A68_VC ,A68t368);
typedef struct A68t368  A68_368 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t46 ,struct A68t368 *),(struct A68t46 ,struct A68t368 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE46) MODE368 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t368 ,struct A68t46 *),(struct A68t368 ,struct A68t46 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE368) MODE46 */
struct A68t372 ;

A_PROCEDURE(A68_BOOL ,A68t371,(struct A68t372 ),(struct A68t372 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE372) BOOL */
struct A68t372 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t372  A68_372 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t373,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t374,(A68_INT ,struct A68t364 ,struct A68t98 *),(A68_INT ,struct A68t364 ,struct A68t98 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(INT,MODE364) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t375,(struct A68t98 ,struct A68t364 ),(struct A68t98 ,struct A68t364 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE98,MODE364) BOOL */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t378,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t380,(A68_VC ,struct A68t185 *),(A68_VC ,struct A68t185 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE26) MODE185 */

A_PROCEDURE(struct A68t249 *,A68t381,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE185) REF MODE249 */

A_PROCEDURE(struct A68t275 *,A68t382,(struct A68t264 *),(struct A68t264 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE264) REF MODE275 */

A_PROCEDURE(A68_VOID ,A68t383,(A68_INT ,struct A68t46 ),(A68_INT ,struct A68t46 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(INT,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t380 ,A68_BOOL ,struct A68t381 ,struct A68t382 ,struct A68t117 ,struct A68t156 ,struct A68t161 ,struct A68t383 ),(struct A68t380 ,A68_BOOL ,struct A68t381 ,struct A68t382 ,struct A68t117 ,struct A68t156 ,struct A68t161 ,struct A68t383 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE380,BOOL,MODE381,MODE382,MODE117,MODE156,REF MODE161,MODE383) VOID */
A_VECTOR(struct A68t170 ,A68t385);
typedef struct A68t385  A68_385 ;    /* VECTOR [] MODE170 */
A_VECTOR(struct A68t227 ,A68t386);
typedef struct A68t386  A68_386 ;    /* VECTOR [] MODE227 */
A_VECTOR(struct A68t208 ,A68t387);
typedef struct A68t387  A68_387 ;    /* VECTOR [] MODE208 */
A_ISTRUCT(A68_CHAR ,11,A68t388);
typedef struct A68t388  A68_388 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t389,(A68_BOOL *,struct A68t170 *),(A68_BOOL *,struct A68t170 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF BOOL) MODE170 */
A_ISTRUCT(A68_CHAR ,9,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(struct A68t215 *,A68t391,(void),(void *));
typedef struct A68t391  A68_391 ;    /* PROC REF MODE215 */

A_PROCEDURE(A68_INT ,A68t392,(struct A68t215 *),(struct A68t215 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE215) INT */

A_PROCEDURE(A68_VOID ,A68t393,(A68_BOOL *,struct A68t208 *),(A68_BOOL *,struct A68t208 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF BOOL) MODE208 */

A_PROCEDURE(struct A68t211 *,A68t394,(A68_BOOL *),(A68_BOOL *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF BOOL) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t395,(A68_BOOL *,struct A68t196 *),(A68_BOOL *,struct A68t196 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF BOOL) MODE196 */

A_PROCEDURE(struct A68t199 *,A68t396,(A68_BOOL *),(A68_BOOL *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF BOOL) REF MODE199 */

A_PROCEDURE(struct A68t218 *,A68t397,(A68_BOOL *,A68_INT ,A68_INT ,A68_INT ,struct A68t196 ),(A68_BOOL *,A68_INT ,A68_INT ,A68_INT ,struct A68t196 ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF BOOL,INT,INT,INT,MODE196) REF MODE218 */

A_PROCEDURE(A68_VOID ,A68t398,(A68_BOOL *,A68_INT ,A68_INT ,A68_VC ,struct A68t196 *),(A68_BOOL *,A68_INT ,A68_INT ,A68_VC ,struct A68t196 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF BOOL,INT,INT,REF MODE26) MODE196 */

A_PROCEDURE(A68_VOID ,A68t399,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(struct A68t266 *,A68t400,(A68_BOOL *,A68_INT ),(A68_BOOL *,A68_INT ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF BOOL,INT) REF MODE266 */

A_PROCEDURE(struct A68t262 *,A68t401,(A68_INT ,A68_BOOL *,A68_INT ),(A68_INT ,A68_BOOL *,A68_INT ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(INT,REF BOOL,INT) REF MODE262 */

A_PROCEDURE(struct A68t264 *,A68t402,(A68_BOOL *,A68_INT ,A68_BOOL ),(A68_BOOL *,A68_INT ,A68_BOOL ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF BOOL,INT,BOOL) REF MODE264 */

A_PROCEDURE(A68_VOID ,A68t403,(A68_BOOL *,struct A68t227 *),(A68_BOOL *,struct A68t227 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF BOOL) MODE227 */

A_PROCEDURE(struct A68t233 *,A68t404,(A68_BOOL *),(A68_BOOL *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF BOOL) REF MODE233 */

A_PROCEDURE(struct A68t234 *,A68t405,(A68_BOOL *),(A68_BOOL *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF BOOL) REF MODE234 */
A_ISTRUCT(A68_CHAR ,8,A68t406);
typedef struct A68t406  A68_406 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t407,(A68_BOOL ,struct A68t285 *),(A68_BOOL ,struct A68t285 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(BOOL) MODE285 */

A_PROCEDURE(A68_VOID ,A68t408,(A68_BOOL ,struct A68t385 *),(A68_BOOL ,struct A68t385 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(BOOL) MODE385 */

A_PROCEDURE(A68_VOID ,A68t409,(A68_BOOL ,struct A68t387 *),(A68_BOOL ,struct A68t387 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(BOOL) MODE387 */
A_ISTRUCT(A68_CHAR ,10,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t411,(A68_BOOL ,struct A68t386 *),(A68_BOOL ,struct A68t386 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(BOOL) MODE386 */
A_VECTOR(struct A68t305 ,A68t412);
typedef struct A68t412  A68_412 ;    /* VECTOR [] MODE305 */

A_PROCEDURE(A68_VOID ,A68t413,(A68_INT ,struct A68t412 ,A68_BOOL *,struct A68t383 ),(A68_INT ,struct A68t412 ,A68_BOOL *,struct A68t383 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(INT,MODE412,REF BOOL,MODE383) VOID */

A_PROCEDURE(A68_VOID ,A68t414,(A68_BOOL ,struct A68t368 *),(A68_BOOL ,struct A68t368 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(BOOL) MODE368 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t207 *),(struct A68t207 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE207) VOID */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE170) VOID */
A_ISTRUCT(A68_CHAR ,6,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t418);
typedef struct A68t418  A68_418 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t419);
typedef struct A68t419  A68_419 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t196 ),(struct A68t196 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE196) VOID */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t264 *),(struct A68t264 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE264) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t422);
typedef struct A68t422  A68_422 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE227) VOID */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t218 *,A68_INT ,A68_VC *),(struct A68t218 *,A68_INT ,A68_VC *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE218,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,31,A68t426);
typedef struct A68t426  A68_426 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t170 ,A68_BOOL ,struct A68t170 *),(struct A68t170 ,A68_BOOL ,struct A68t170 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE170,BOOL) MODE170 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t199 *,struct A68t196 *),(struct A68t199 *,struct A68t196 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE199) MODE196 */

A_PROCEDURE(A68_BOOL ,A68t429,(struct A68t196 ,struct A68t196 ,struct A68t258 *,struct A68t427 ,struct A68t383 ,struct A68t428 ),(struct A68t196 ,struct A68t196 ,struct A68t258 *,struct A68t427 ,struct A68t383 ,struct A68t428 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE196,MODE196,REF MODE258,MODE427,MODE383,MODE428) BOOL */

A_PROCEDURE(A68_BOOL ,A68t430,(struct A68t170 ,struct A68t170 ,struct A68t258 *),(struct A68t170 ,struct A68t170 ,struct A68t258 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE170,MODE170,REF MODE258) BOOL */

A_PROCEDURE(A68_BOOL ,A68t431,(struct A68t196 ,struct A68t196 ,struct A68t258 *),(struct A68t196 ,struct A68t196 ,struct A68t258 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE196,MODE196,REF MODE258) BOOL */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t170 ,A68_BOOL ,struct A68t383 ,struct A68t170 *),(struct A68t170 ,A68_BOOL ,struct A68t383 ,struct A68t170 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE170,BOOL,MODE383) MODE170 */
A_ISTRUCT(A68_CHAR ,13,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 13 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_46  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from databasebuffers --- */
/* --- End of imports from databasebuffers --- */


/* --- Imports from compmodes --- */
extern A68_VC  BJCAELA_omac;
extern A68_VC  DJCAELA_cmac;
#define QJCAELA_iconsttext 9
#define XKCAELA_end 42
#define YKCAELA_fnstart 43
#define DLCAELA_typename 48
#define FLCAELA_pidalts 50
#define GLCAELA_prange 51
#define HJCAELA_zero 0
#define VNCAELA_idef 122
#define UNCAELA_intname 121
#define NNCAELA_cquery 114
#define MNCAELA_c_type 113
#define JMCAELA_ibracket 84
#define KMCAELA_tbracket 85
#define LMCAELA_cbracket 86
#define XNCAELA_pstring 128
#define YNCAELA_pchar 129
#define AOCAELA_cstring 131
#define HOCAELA_tstring 138
#define IOCAELA_cnamed 139
#define JOCAELA_constname 140
extern A68_INT  VPCAELA_stringindex;
#define ANCAELA_cindex 101
#define AMCAELA_cconc 75
#define BMCAELA_cattr 76
extern A68_218 * BQCAELA_nilpalts;
extern A68_249 * CQCAELA_nilids;
extern A68_199 * DQCAELA_nilst;
extern A68_196 * EQCAELA_niltype;
extern A68_266 * FQCAELA_nildecs;
extern A68_262 ** GQCAELA_nilnextmp;
extern A68_262 * IQCAELA_nilmparams;
extern A68_234 * JQCAELA_nilcalts;
extern A68_233 * KQCAELA_nilcst;
extern A68_220 * LQCAELA_nilcharalts;
extern A68_195  CRCAELA_notdec;
extern A68_173  DRCAELA_flt;
extern A68_184  KRCAELA_unset;
#define ESCAELA_outputtok 26
extern A68_211 * MQCAELA_nilattrstr;
extern A68_215 * NQCAELA_nilstringlist;
extern A68_214  MRCAELA_attrnull;
#define UOCAELA_attrname 151
#define VOCAELA_attid 152
#define WOCAELA_attdata 153
#define XOCAELA_attbracket 154
#define YOCAELA_attstr 155
#define XWCAELA_expl_par 1
#define EXCAELA_fn_ok 3
extern A68_182 * DKDAELA_makeibracket(struct A68t170 );
extern A68_204 * IKDAELA_maketbracket(struct A68t196 );
extern A68_236 * NKDAELA_makecbracket(struct A68t227 );
extern A68_212 * SKDAELA_makeabracket(struct A68t208 );
extern A68_VOID  XKDAELA_makeintid(struct A68t170 ,A68_187 *);
extern A68_VOID  CLDAELA_maketypeid(struct A68t196 ,A68_188 *);
extern A68_213 * RLDAELA_makeattrvar(struct A68t207 *);
extern A68_175 * WLDAELA_makeintvar(struct A68t207 *);
extern A68_201  AUCAELA_typenull;
extern A68_206  NRCAELA_typevoid;
#define LOCAELA_cvoid 142
extern A68_242  ORCAELA_constvoid;
extern A68_INT  ZTCAELA_inputtok;
extern A68_253  PRCAELA_jtrue;
#define ROCAELA_tvoid 148
extern A68_VOID  DSDAELA_uncheckedint(struct A68t170 ,A68_170 *);
extern A68_VOID  VIDAELA_primtype(struct A68t196 ,A68_BOOL ,A68_196 *);
extern A68_VOID  BUDAELA_ddecs_type(struct A68t266 *,A68_196 *);
extern A68_179 * KTDAELA_get_intvarmult(struct A68t249 *);
/* --- End of imports from compmodes --- */


/* --- Imports from charset --- */
/* --- End of imports from charset --- */


/* --- Imports from basics --- */
extern A68_VC  TTCAOST_nullid;
extern A68_INT  AJDAOST_maxint;
extern A68_INT  IJDAOST_minint;
extern A68_INT  NJDAOST_addwithoverflowcheck(A68_INT ,A68_INT ,A68_BOOL *);
extern A68_INT  UJDAOST_subtractwithoverflowcheck(A68_INT ,A68_INT ,A68_BOOL *);
extern A68_INT  BKDAOST_multiplywithoverflowcheck(A68_INT ,A68_INT ,A68_BOOL *);
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
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
extern void NWIAELA(void);   /* databasebuffers */
extern void UICAELA(void);   /* compmodes */
extern void GMAATRN(void);   /* charset */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_379   JGKAELA = {"$Id: impmacro.a68,v 34.2 1995/03/29 13:03:26 ella Exp $"}; 
A_GISVEC(A68_VC ,KGKAELA,JGKAELA,55)
static A68_388   IIKAELA = {"skipinteger"}; 
A_GISVEC(A68_VC ,JIKAELA,IIKAELA,11)
static A68_390   IKKAELA = {"ininteger"}; 
A_GISVEC(A68_VC ,JKKAELA,IKKAELA,9)
static A68_390   ZWKAELA = {"inmparams"}; 
A_GISVEC(A68_VC ,AXKAELA,ZWKAELA,9)
static A68_406   ABLAELA = {"inctype1"}; 
A_GISVEC(A68_VC ,BBLAELA,ABLAELA,8)
static A68_406   UELAELA = {"inctype2"}; 
A_GISVEC(A68_VC ,VELAELA,UELAELA,8)
static A68_390   CGLAELA = {"inexttype"}; 
A_GISVEC(A68_VC ,DGLAELA,CGLAELA,9)
static A68_390   JHLAELA = {"inextints"}; 
A_GISVEC(A68_VC ,KHLAELA,JHLAELA,9)
static A68_410   QILAELA = {"inextattrs"}; 
A_GISVEC(A68_VC ,RILAELA,QILAELA,10)
static A68_388   XJLAELA = {"inextctypes"}; 
A_GISVEC(A68_VC ,YJLAELA,XJLAELA,11)
static A68_417   QOLAELA = {"maxint"}; 
A_GISVEC(A68_VC ,ROLAELA,QOLAELA,6)
static A68_418   ZOLAELA = {"/="}; 
A_GISVEC(A68_VC ,APLAELA,ZOLAELA,2)
static A68_418   BPLAELA = {"<="}; 
A_GISVEC(A68_VC ,CPLAELA,BPLAELA,2)
static A68_418   DPLAELA = {">="}; 
A_GISVEC(A68_VC ,EPLAELA,DPLAELA,2)
static A68_419   HPLAELA = {"AND"}; 
A_GISVEC(A68_VC ,IPLAELA,HPLAELA,3)
static A68_418   JPLAELA = {"OR"}; 
A_GISVEC(A68_VC ,KPLAELA,JPLAELA,2)
static A68_418   MPLAELA = {"SL"}; 
A_GISVEC(A68_VC ,NPLAELA,MPLAELA,2)
static A68_418   OPLAELA = {"SR"}; 
A_GISVEC(A68_VC ,PPLAELA,OPLAELA,2)
static A68_95   QPLAELA = {"IAND"}; 
A_GISVEC(A68_VC ,RPLAELA,QPLAELA,4)
static A68_419   SPLAELA = {"IOR"}; 
A_GISVEC(A68_VC ,TPLAELA,SPLAELA,3)
static A68_419   UPLAELA = {"MOD"}; 
A_GISVEC(A68_VC ,VPLAELA,UPLAELA,3)
static A68_419   AQLAELA = {"NOT"}; 
A_GISVEC(A68_VC ,BQLAELA,AQLAELA,3)
static A68_95   DQLAELA = {"INOT"}; 
A_GISVEC(A68_VC ,EQLAELA,DQLAELA,4)
static A68_95   FQLAELA = {"SQRT"}; 
A_GISVEC(A68_VC ,GQLAELA,FQLAELA,4)
static A68_419   HQLAELA = {"ABS"}; 
A_GISVEC(A68_VC ,IQLAELA,HQLAELA,3)
static A68_419   KQLAELA = {"IF "}; 
A_GISVEC(A68_VC ,LQLAELA,KQLAELA,3)
static A68_417   MQLAELA = {" THEN "}; 
A_GISVEC(A68_VC ,NQLAELA,MQLAELA,6)
static A68_417   OQLAELA = {" ELSE "}; 
A_GISVEC(A68_VC ,PQLAELA,OQLAELA,6)
static A68_95   QQLAELA = {" FI "}; 
A_GISVEC(A68_VC ,RQLAELA,QQLAELA,4)
static A68_418   KRLAELA = {"->"}; 
A_GISVEC(A68_VC ,LRLAELA,KRLAELA,2)
static A68_406   PRLAELA = {"STRING ["}; 
A_GISVEC(A68_VC ,QRLAELA,PRLAELA,8)
static A68_418   SRLAELA = {"()"}; 
A_GISVEC(A68_VC ,TRLAELA,SRLAELA,2)
static A68_95   ZRLAELA = {"MAC "}; 
A_GISVEC(A68_VC ,BSLAELA,ZRLAELA,4)
static A68_419   CSLAELA = {"FN "}; 
A_GISVEC(A68_VC ,DSLAELA,CSLAELA,3)
static A68_422   GSLAELA = {"ATTR "}; 
A_GISVEC(A68_VC ,HSLAELA,GSLAELA,5)
static A68_95   JSLAELA = {"INT "}; 
A_GISVEC(A68_VC ,KSLAELA,JSLAELA,4)
static A68_417   LSLAELA = {"<INT> "}; 
A_GISVEC(A68_VC ,MSLAELA,LSLAELA,6)
static A68_422   OSLAELA = {"TYPE "}; 
A_GISVEC(A68_VC ,PSLAELA,OSLAELA,5)
static A68_423   QSLAELA = {"<TYPE> "}; 
A_GISVEC(A68_VC ,RSLAELA,QSLAELA,7)
static A68_417   TSLAELA = {"CONST "}; 
A_GISVEC(A68_VC ,USLAELA,TSLAELA,6)
static A68_95   WSLAELA = {"MAC "}; 
A_GISVEC(A68_VC ,YSLAELA,WSLAELA,4)
static A68_419   ZSLAELA = {"FN "}; 
A_GISVEC(A68_VC ,ATLAELA,ZSLAELA,3)
static A68_418   ETLAELA = {"->"}; 
A_GISVEC(A68_VC ,FTLAELA,ETLAELA,2)
static A68_406   AULAELA = {"outctype"}; 
A_GISVEC(A68_VC ,BULAELA,AULAELA,8)
static A68_406   DULAELA = {"outctype"}; 
A_GISVEC(A68_VC ,EULAELA,DULAELA,8)
static A68_418   GULAELA = {"/("}; 
A_GISVEC(A68_VC ,HULAELA,GULAELA,2)
static A68_418   IULAELA = {".."}; 
A_GISVEC(A68_VC ,JULAELA,IULAELA,2)
static A68_406   PULAELA = {"outctype"}; 
A_GISVEC(A68_VC ,QULAELA,PULAELA,8)
static A68_406   SULAELA = {"outctype"}; 
A_GISVEC(A68_VC ,TULAELA,SULAELA,8)
static A68_406   CVLAELA = {"outctype"}; 
A_GISVEC(A68_VC ,DVLAELA,CVLAELA,8)
static A68_406   FVLAELA = {"outctype"}; 
A_GISVEC(A68_VC ,GVLAELA,FVLAELA,8)
static A68_406   WVLAELA = {"outctype"}; 
A_GISVEC(A68_VC ,XVLAELA,WVLAELA,8)
static A68_406   ZVLAELA = {"outctype"}; 
A_GISVEC(A68_VC ,AWLAELA,ZVLAELA,8)
static A68_418   NWLAELA = {"\" "}; 
A_GISVEC(A68_VC ,OWLAELA,NWLAELA,2)
static A68_406   PWLAELA = {"STRING ["}; 
A_GISVEC(A68_VC ,QWLAELA,PWLAELA,8)
static A68_418   RWLAELA = {"] "}; 
A_GISVEC(A68_VC ,SWLAELA,RWLAELA,2)
static A68_406   YWLAELA = {"outctype"}; 
A_GISVEC(A68_VC ,ZWLAELA,YWLAELA,8)
static A68_406   BXLAELA = {"outctype"}; 
A_GISVEC(A68_VC ,CXLAELA,BXLAELA,8)
static A68_418   EXLAELA = {"('"}; 
A_GISVEC(A68_VC ,FXLAELA,EXLAELA,2)
static A68_95   PXLAELA = {".. '"}; 
A_GISVEC(A68_VC ,QXLAELA,PXLAELA,4)
static A68_418   DYLAELA = {".."}; 
A_GISVEC(A68_VC ,EYLAELA,DYLAELA,2)
static A68_419   GYLAELA = {"IF "}; 
A_GISVEC(A68_VC ,HYLAELA,GYLAELA,3)
static A68_417   IYLAELA = {" THEN "}; 
A_GISVEC(A68_VC ,JYLAELA,IYLAELA,6)
static A68_417   KYLAELA = {" ELSE "}; 
A_GISVEC(A68_VC ,LYLAELA,KYLAELA,6)
static A68_419   MYLAELA = {" FI"}; 
A_GISVEC(A68_VC ,NYLAELA,MYLAELA,3)
static A68_417   PYLAELA = {" CONC "}; 
A_GISVEC(A68_VC ,QYLAELA,PYLAELA,6)
static A68_422   TYLAELA = {"[INT "}; 
A_GISVEC(A68_VC ,UYLAELA,TYLAELA,5)
static A68_419   VYLAELA = {" = "}; 
A_GISVEC(A68_VC ,WYLAELA,VYLAELA,3)
static A68_418   XYLAELA = {".."}; 
A_GISVEC(A68_VC ,YYLAELA,XYLAELA,2)
static A68_418   AZLAELA = {"()"}; 
A_GISVEC(A68_VC ,BZLAELA,AZLAELA,2)
static A68_426   HAMAELA = {"Syfaultp_ext : Unknown ERRPARAM"}; 
A_GISVEC(A68_VC ,IAMAELA,HAMAELA,31)
static A68_406   JIMAELA = {"simplify"}; 
A_GISVEC(A68_VC ,KIMAELA,JIMAELA,8)
static A68_406   RJMAELA = {"simplify"}; 
A_GISVEC(A68_VC ,SJMAELA,RJMAELA,8)
static A68_433   YKMAELA = {"expandinteger"}; 
A_GISVEC(A68_VC ,ZKMAELA,YKMAELA,13)
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  Inkeptint;
} UHKAELA_in;
typedef struct   /* env of non-global proc */
{
A68_156  Inkeptid;
} ZHKAELA_inid;
typedef struct   /* env of non-global proc */
{
A68_117  SHKAELA_in;
A68_129  CIKAELA_skipinteger;
A68_156  XHKAELA_inid;
A68_383  Fault;
} EIKAELA_skipinteger;
typedef struct   /* env of non-global proc */
{
A68_117  SHKAELA_in;
A68_54 * DHKAELA_oldints;
A68_385 * CHKAELA_ints;
A68_389  MIKAELA_ininteger;
A68_129  CIKAELA_skipinteger;
A68_156  XHKAELA_inid;
A68_383  Fault;
} OIKAELA_ininteger;
typedef struct   /* env of non-global proc */
{
A68_117  SHKAELA_in;
A68_156  XHKAELA_inid;
} OKKAELA_instrings;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_393  BLKAELA_inattrs;
A68_54 * HHKAELA_oldattrs;
A68_387 * GHKAELA_attrs;
A68_156  XHKAELA_inid;
A68_391  MKKAELA_instrings;
} DLKAELA_inattrs;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_395  GMKAELA_intype;
A68_54 * BHKAELA_old;
A68_285 * AHKAELA_types;
A68_389  MIKAELA_ininteger;
} IMKAELA_intype;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_395  GMKAELA_intype;
A68_BOOL  Export;
A_PAD_BOOL(PAD_147)
A68_156  XHKAELA_inid;
A68_381  Newextid;
A68_397  COKAELA_palts;
} EOKAELA_palts;
typedef struct   /* env of non-global proc */
{
A68_185 ** IHKAELA_idinfo;
A68_381  Newextid;
A68_BOOL  Export;
A_PAD_BOOL(PAD_148)
A68_117  SHKAELA_in;
A68_197 ** VGKAELA_primset;
A68_397  COKAELA_palts;
A68_185 ** JHKAELA_idinfo1;
A68_156  XHKAELA_inid;
A68_389  MIKAELA_ininteger;
A68_161  Charset;
A68_INT * RHKAELA_next;
A68_395  GMKAELA_intype;
} APKAELA_inprimtype;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_395  GMKAELA_intype;
A68_156  XHKAELA_inid;
} WSKAELA_inddecs;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_129  UTKAELA_skipattrs;
A68_156  XHKAELA_inid;
} WTKAELA_skipattrs;
typedef struct   /* env of non-global proc */
{
A68_156  XHKAELA_inid;
A68_117  SHKAELA_in;
A68_401 * HUKAELA_inmparams;
A68_129  UTKAELA_skipattrs;
A68_400  USKAELA_inddecs;
} NUKAELA_infndec;
typedef struct   /* env of non-global proc */
{
A68_117  SHKAELA_in;
A68_402  LUKAELA_infndec;
A68_156  XHKAELA_inid;
A68_387 * GHKAELA_attrs;
A68_54 * HHKAELA_oldattrs;
A68_385 * CHKAELA_ints;
A68_54 * DHKAELA_oldints;
A68_398  YOKAELA_inprimtype;
A68_285 * AHKAELA_types;
A68_54 * BHKAELA_old;
A68_395  GMKAELA_intype;
A68_386 * EHKAELA_ctypes;
A68_54 * FHKAELA_oldctypes;
A68_383  Fault;
} LVKAELA_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_129  HXKAELA_skiptype;
A68_156  XHKAELA_inid;
A68_129  CIKAELA_skipinteger;
} JXKAELA_skiptype;
typedef struct   /* env of non-global proc */
{
A68_117  SHKAELA_in;
A68_54 * BHKAELA_old;
A68_285 * AHKAELA_types;
A68_INT * RHKAELA_next;
A68_403  GYKAELA_inctype;
A68_389  MIKAELA_ininteger;
A68_383  Fault;
A68_156  XHKAELA_inid;
A68_391  MKKAELA_instrings;
A68_129  UTKAELA_skipattrs;
A68_385 * CHKAELA_ints;
A68_54 * FHKAELA_oldctypes;
A68_386 * EHKAELA_ctypes;
A68_395  GMKAELA_intype;
} IYKAELA_inctype;
typedef struct   /* env of non-global proc */
{
A68_285 * AHKAELA_types;
A68_54 * BHKAELA_old;
A68_156  XHKAELA_inid;
A68_117  SHKAELA_in;
A68_380  Findid;
A68_383  Fault;
A68_129  HXKAELA_skiptype;
} BFLAELA_inexttypes;
typedef struct   /* env of non-global proc */
{
A68_385 * CHKAELA_ints;
A68_54 * DHKAELA_oldints;
A68_156  XHKAELA_inid;
A68_117  SHKAELA_in;
A68_380  Findid;
A68_383  Fault;
} IGLAELA_inextints;
typedef struct   /* env of non-global proc */
{
A68_387 * GHKAELA_attrs;
A68_54 * HHKAELA_oldattrs;
A68_156  XHKAELA_inid;
A68_117  SHKAELA_in;
A68_380  Findid;
A68_383  Fault;
} PHLAELA_inextattrs;
typedef struct   /* env of non-global proc */
{
A68_386 * EHKAELA_ctypes;
A68_54 * FHKAELA_oldctypes;
A68_156  XHKAELA_inid;
A68_117  SHKAELA_in;
A68_380  Findid;
A68_383  Fault;
} WILAELA_inextctypes;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_129  HXKAELA_skiptype;
A68_156  XHKAELA_inid;
} CKLAELA_skipddecs;
typedef struct   /* env of non-global proc */
{
A68_117  SHKAELA_in;
A68_156  XHKAELA_inid;
A68_129  AKLAELA_skipddecs;
} IKLAELA_inextfns;
typedef struct   /* env of non-global proc */
{
A68_412  Params;
} RMLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * MMLAELA_mind;
A68_VC * LMLAELA_m;
} ZMLAELA_outchar;
typedef struct   /* env of non-global proc */
{
A68_150  XMLAELA_outchar;
} ONLAELA_outid;
typedef struct   /* env of non-global proc */
{
A68_150  XMLAELA_outchar;
} UNLAELA_outchars;
typedef struct   /* env of non-global proc */
{
A68_36  SNLAELA_outchars;
} AOLAELA_outint;
typedef struct   /* env of non-global proc */
{
A68_150  XMLAELA_outchar;
A68_43  MNLAELA_outid;
} FOLAELA_outmacid;
typedef struct   /* env of non-global proc */
{
A68_114  YNLAELA_outint;
A68_43  MNLAELA_outid;
A68_36  SNLAELA_outchars;
A68_416  JOLAELA_outinteger;
A68_150  XMLAELA_outchar;
A68_415  DOLAELA_outmacid;
} LOLAELA_outinteger;
typedef struct   /* env of non-global proc */
{
A68_43  MNLAELA_outid;
A68_150  XMLAELA_outchar;
A68_420  ARLAELA_outtype;
A68_36  SNLAELA_outchars;
A68_416  JOLAELA_outinteger;
A68_415  DOLAELA_outmacid;
} CRLAELA_outtype;
typedef struct   /* env of non-global proc */
{
A68_36  SNLAELA_outchars;
A68_415  DOLAELA_outmacid;
A68_150  XMLAELA_outchar;
A68_43  MNLAELA_outid;
A68_420  ARLAELA_outtype;
} XRLAELA_outfn;
typedef struct   /* env of non-global proc */
{
A68_43  MNLAELA_outid;
A68_383  Fault;
A68_36  SNLAELA_outchars;
A68_416  JOLAELA_outinteger;
A68_150  XMLAELA_outchar;
A68_424  HTLAELA_outctype;
A68_420  ARLAELA_outtype;
} JTLAELA_outctype;
typedef struct   /* env of non-global proc */
{
int dummy;
} HZLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_431  QBMAELA_implicit_macro_type;
A68_427  Simplify;
A68_428  Sttorow;
} SBMAELA_implicit_macro_type;
typedef struct   /* env of non-global proc */
{
A68_383  Fault;
A68_BOOL * NFMAELA_error;
A68_427  QFMAELA_simplify;
} SFMAELA_simplify;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_393  BLKAELA_inattrs;
A68_394  GLKAELA_ast;
} ILKAELA_ast;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_395  GMKAELA_intype;
A68_396  NMKAELA_tst;
} PMKAELA_tst;
typedef struct   /* env of non-global proc */
{
A68_161  Charset;
} EQKAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_161  Charset;
} DSKAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_129  UTKAELA_skipattrs;
} AUKAELA_skipast;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_129  HXKAELA_skiptype;
A68_129  NXKAELA_tst;
} PXKAELA_tst;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_129  HXKAELA_skiptype;
A68_156  XHKAELA_inid;
A68_129  QXKAELA_skippalts;
} SXKAELA_skippalts;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_156  XHKAELA_inid;
A68_129  UXKAELA_skipchars;
} WXKAELA_skipchars;
typedef struct   /* env of non-global proc */
{
A68_INT * LYKAELA_index;
A68_117  SHKAELA_in;
A68_54 * BHKAELA_old;
A68_285 * AHKAELA_types;
} TYKAELA_ptype;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_403  GYKAELA_inctype;
A68_404  XYKAELA_cst;
} ZYKAELA_cst;
typedef struct   /* env of non-global proc */
{
A68_INT * RHKAELA_next;
A68_117  SHKAELA_in;
A68_403  GYKAELA_inctype;
A68_405  GZKAELA_calts;
} IZKAELA_calts;
typedef struct   /* env of non-global proc */
{
A68_INT  Notypes;
A_PAD_INT(PAD_149)
} JFLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Notypes;
A_PAD_INT(PAD_150)
} QFLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noints;
A_PAD_INT(PAD_151)
} QGLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noints;
A_PAD_INT(PAD_152)
} XGLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noattrs;
A_PAD_INT(PAD_153)
} XHLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noattrs;
A_PAD_INT(PAD_154)
} EILAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noctypes;
A_PAD_INT(PAD_155)
} EJLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noctypes;
A_PAD_INT(PAD_156)
} LJLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * MMLAELA_mind;
} DNLAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FWLAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JXLAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UXLAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_171 * YIMAELA_m;
} EJMAELA_generator;

A68_VOID  TGKAELA_inkept_ext(A68_380  Findid, A68_BOOL  Export, A68_381  Newextid, A68_382  Newextfn, A68_117  Inkeptint, A68_156  Inkeptid, A68_161  Charset, A68_383  Fault);

A_STATIC A68_INT  THKAELA_in(void *NonLocals);

A_STATIC A68_VOID  YHKAELA_inid(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DIKAELA_skipinteger(void *NonLocals);

A_STATIC A68_VOID  NIKAELA_ininteger(A68_BOOL * Outofdate, A68_170  *ReturnedValue, void *NonLocals);

A_STATIC A68_215 * NKKAELA_instrings(void *NonLocals);

A_STATIC A68_INT  WKKAELA_length(A68_215 * Strings);

A_STATIC A68_VOID  CLKAELA_inattrs(A68_BOOL * Outofdate, A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_211 * HLKAELA_ast(A68_BOOL * Outofdate, void *NonLocals);

A_STATIC A68_VOID  HMKAELA_intype(A68_BOOL * Outofdate, A68_196  *ReturnedValue, void *NonLocals);

A_STATIC A68_199 * OMKAELA_tst(A68_BOOL * Outofdate, void *NonLocals);

A_STATIC A68_218 * DOKAELA_palts(A68_BOOL * Outofdate, A68_INT  Index, A68_INT  V, A68_INT  Scope, A68_196  Primset, void *NonLocals);

A_STATIC A68_VOID  ZOKAELA_inprimtype(A68_BOOL * Outofdate, A68_INT  Tno, A68_INT  V, A68_VC  Id, A68_196  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DQKAELA_generator(A68_BOOL  BQKAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CSKAELA_generator(A68_BOOL  ASKAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_266 * VSKAELA_inddecs(A68_BOOL * Outofdate, A68_INT  Wherefrom, void *NonLocals);

A_STATIC A68_VOID  VTKAELA_skipattrs(void *NonLocals);

A_STATIC A68_VOID  ZTKAELA_skipast(void *NonLocals);

A_STATIC A68_264 * MUKAELA_infndec(A68_BOOL * Outofdate, A68_INT  Fnno, A68_BOOL  Export, void *NonLocals);

A_STATIC A68_262 * KVKAELA_anonymous(A68_INT  Fnno, A68_BOOL * Outofdate, A68_INT  Num, void *NonLocals);

A_STATIC A68_VOID  IXKAELA_skiptype(void *NonLocals);

A_STATIC A68_VOID  OXKAELA_tst(void *NonLocals);

A_STATIC A68_VOID  RXKAELA_skippalts(void *NonLocals);

A_STATIC A68_VOID  VXKAELA_skipchars(void *NonLocals);

A_STATIC A68_VOID  HYKAELA_inctype(A68_BOOL * Outofdate, A68_227  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SYKAELA_ptype(A68_BOOL * Outofdate, A68_196  *ReturnedValue, void *NonLocals);

A_STATIC A68_233 * YYKAELA_cst(A68_BOOL * Outofdate, void *NonLocals);

A_STATIC A68_234 * HZKAELA_calts(A68_BOOL * Outofdate, void *NonLocals);

A_STATIC A68_VOID  AFLAELA_inexttypes(A68_INT  Notypes, void *NonLocals);

A_STATIC A68_VOID  IFLAELA_generator(A68_BOOL  GFLAELA_anonymous, A68_285  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PFLAELA_generator(A68_BOOL  NFLAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HGLAELA_inextints(A68_INT  Noints, void *NonLocals);

A_STATIC A68_VOID  PGLAELA_generator(A68_BOOL  NGLAELA_anonymous, A68_385  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WGLAELA_generator(A68_BOOL  UGLAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OHLAELA_inextattrs(A68_INT  Noattrs, void *NonLocals);

A_STATIC A68_VOID  WHLAELA_generator(A68_BOOL  UHLAELA_anonymous, A68_387  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DILAELA_generator(A68_BOOL  BILAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VILAELA_inextctypes(A68_INT  Noctypes, void *NonLocals);

A_STATIC A68_VOID  DJLAELA_generator(A68_BOOL  BJLAELA_anonymous, A68_386  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KJLAELA_generator(A68_BOOL  IJLAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BKLAELA_skipddecs(void *NonLocals);

A_STATIC A68_VOID  HKLAELA_inextfns(A68_INT  Num, void *NonLocals);

A68_VOID  KMLAELA_syfaultp_ext(A68_INT  No, A68_412  Params, A68_BOOL * Syntaxerror, A68_383  Fault);

A_STATIC A68_VOID  QMLAELA_generator(A68_BOOL  OMLAELA_anonymous, A68_368  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YMLAELA_outchar(A68_CHAR  C, void *NonLocals);

A_STATIC A68_VOID  CNLAELA_generator(A68_BOOL  ANLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NNLAELA_outid(A68_VC  Id, void *NonLocals);

A_STATIC A68_VOID  TNLAELA_outchars(A68_VC  C, void *NonLocals);

A_STATIC A68_VOID  ZNLAELA_outint(A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  EOLAELA_outmacid(A68_207 * Mi, void *NonLocals);

A_STATIC A68_VOID  KOLAELA_outinteger(A68_170  I, void *NonLocals);

A_STATIC A68_VOID  BRLAELA_outtype(A68_196  T, void *NonLocals);

A_STATIC A68_VOID  WRLAELA_outfn(A68_264 * Fd, void *NonLocals);

A_STATIC A68_VOID  ITLAELA_outctype(A68_227  Ct, void *NonLocals);

A_STATIC A68_VOID  OTLAELA_paltsid(A68_218 * Pa, A68_INT  Index, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EWLAELA_generator(A68_BOOL  CWLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IXLAELA_generator(A68_BOOL  GXLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TXLAELA_generator(A68_BOOL  RXLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GZLAELA_generator(A68_BOOL  EZLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  SAMAELA_implicit_macro(A68_196  A, A68_196  B, A68_258 * Fstack, A68_427  Simplify, A68_383  Fault, A68_428  Sttorow);

A_STATIC A68_BOOL  XAMAELA_implicit_macro_int(A68_170  A, A68_170  B, A68_258 * Fstack);

A_STATIC A68_BOOL  RBMAELA_implicit_macro_type(A68_196  A, A68_196  B, A68_258 * Fstack, void *NonLocals);

A68_VOID  MFMAELA_simplify_ext(A68_170  I, A68_BOOL  Simp, A68_383  Fault, A68_170  *ReturnedValue);

A_STATIC A68_VOID  RFMAELA_simplify(A68_170  I, A68_BOOL  Simp, A68_170  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DJMAELA_generator(A68_BOOL  BJMAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_211 * HLKAELA_ast(A68_BOOL * Outofdate, void *NonLocals)
#define NL(x) (((ILKAELA_ast *)NonLocals)->x)
{ 
A68_208  JLKAELA_a;
A68_211 * KLKAELA;  /* clause result */
A68_208  LLKAELA;  /* avoid structure result */
A68_211  MLKAELA;  /* collateral clause result */
A68_211 * NLKAELA;  /* YIELD */
A_PROC_ENTRY(ast);
 /* line 211: */
{ 
 /* line 212: */
 /* line 213: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==HJCAELA_zero) )
{ 
(*NL(RHKAELA_next)) = (-1);
 /* line 214: */
KLKAELA = MQCAELA_nilattrstr;
} 
else
{ 
A_CALLPROC(NL(BLKAELA_inattrs),(Outofdate, &LLKAELA),(Outofdate, &LLKAELA,(NL(BLKAELA_inattrs)).nonlocals));
JLKAELA_a = LLKAELA;
MLKAELA.Elem = JLKAELA_a;
 /* line 215: */
MLKAELA.Rest = A_CALLPROC(NL(GLKAELA_ast),(Outofdate),(Outofdate,(NL(GLKAELA_ast)).nonlocals));
 /* line 216: */
NLKAELA = A_HEAP(A68_211 ) ;
(*NLKAELA) = MLKAELA ;
KLKAELA = NLKAELA;
} 
} 
A_PROC_EXIT(ast);
return( KLKAELA );
} 
#undef NL

A_STATIC A68_199 * OMKAELA_tst(A68_BOOL * Outofdate, void *NonLocals)
#define NL(x) (((PMKAELA_tst *)NonLocals)->x)
{ 
A68_196  QMKAELA_t;
A68_199 * RMKAELA;  /* clause result */
A68_196  SMKAELA;  /* avoid structure result */
A68_199  TMKAELA;  /* collateral clause result */
A68_199 * UMKAELA;  /* YIELD */
A_PROC_ENTRY(tst);
 /* line 242: */
{ 
 /* line 243: */
 /* line 244: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
(*NL(RHKAELA_next)) = (-1);
 /* line 245: */
RMKAELA = (A68_199 *)A68_NIL;
} 
else
{ 
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &SMKAELA),(Outofdate, &SMKAELA,(NL(GMKAELA_intype)).nonlocals));
QMKAELA_t = SMKAELA;
TMKAELA.T = QMKAELA_t;
 /* line 246: */
TMKAELA.Rest = A_CALLPROC(NL(NMKAELA_tst),(Outofdate),(Outofdate,(NL(NMKAELA_tst)).nonlocals));
 /* line 247: */
UMKAELA = A_HEAP(A68_199 ) ;
(*UMKAELA) = TMKAELA ;
RMKAELA = UMKAELA;
} 
} 
A_PROC_EXIT(tst);
return( RMKAELA );
} 
#undef NL

A_STATIC A68_VOID  DQKAELA_generator(A68_BOOL  BQKAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((EQKAELA_generator *)NonLocals)->x)
{ 
A68_54  FQKAELA;  /* clause result */
A68_54  GQKAELA;  /* OPERATORS - dynamic generator */
{ 
GQKAELA.upb = NL(Charset).dim[0].upb ;
( BQKAELA_anonymous? A_VLOC(A68_BOOL ,GQKAELA): A_VHEAP(A68_BOOL ,GQKAELA) );
FQKAELA = GQKAELA;
} 
*ReturnedValue = (FQKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CSKAELA_generator(A68_BOOL  ASKAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((DSKAELA_generator *)NonLocals)->x)
{ 
A68_54  ESKAELA;  /* clause result */
A68_54  FSKAELA;  /* OPERATORS - dynamic generator */
{ 
FSKAELA.upb = NL(Charset).dim[0].upb ;
( ASKAELA_anonymous? A_VLOC(A68_BOOL ,FSKAELA): A_VHEAP(A68_BOOL ,FSKAELA) );
ESKAELA = FSKAELA;
} 
*ReturnedValue = (ESKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTKAELA_skipast(void *NonLocals)
#define NL(x) (((AUKAELA_skipast *)NonLocals)->x)
{ 
A_PROC_ENTRY(skipast);
{ 
for ( ;; )
{ 
if ( !((((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))!=HJCAELA_zero)) ) break;
A_CALLPROC(NL(UTKAELA_skipattrs),(),((NL(UTKAELA_skipattrs)).nonlocals));
}
 /* line 388: */
 /* line 389: */
(*NL(RHKAELA_next)) = (-1);
} 
A_PROC_EXIT(skipast);
return;
} 
#undef NL

A_STATIC A68_VOID  OXKAELA_tst(void *NonLocals)
#define NL(x) (((PXKAELA_tst *)NonLocals)->x)
{ 
A_PROC_ENTRY(tst);
 /* line 480: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
 /* line 481: */
(*NL(RHKAELA_next)) = (-1);
} 
else
{ 
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
 /* line 482: */
A_CALLPROC(NL(NXKAELA_tst),(),((NL(NXKAELA_tst)).nonlocals));
} 
A_PROC_EXIT(tst);
return;
} 
#undef NL

A_STATIC A68_VOID  RXKAELA_skippalts(void *NonLocals)
#define NL(x) (((SXKAELA_skippalts *)NonLocals)->x)
{ 
A68_VC  TXKAELA;  /* avoid structure result */
A_PROC_ENTRY(skippalts);
 /* line 486: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
 /* line 487: */
(*NL(RHKAELA_next)) = (-1);
} 
else
{ 
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
A_CALLPROC(NL(XHKAELA_inid),( &TXKAELA),( &TXKAELA,(NL(XHKAELA_inid)).nonlocals));
TXKAELA;
 /* line 488: */
A_CALLPROC(NL(QXKAELA_skippalts),(),((NL(QXKAELA_skippalts)).nonlocals));
} 
A_PROC_EXIT(skippalts);
return;
} 
#undef NL

A_STATIC A68_VOID  VXKAELA_skipchars(void *NonLocals)
#define NL(x) (((WXKAELA_skipchars *)NonLocals)->x)
{ 
A68_INT  XXKAELA_charsort;
A68_VC  YXKAELA;  /* avoid structure result */
A68_VC  ZXKAELA;  /* avoid structure result */
A68_VC  AYKAELA;  /* avoid structure result */
A_PROC_ENTRY(skipchars);
 /* line 492: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
 /* line 493: */
(*NL(RHKAELA_next)) = (-1);
} 
else
{ 
XXKAELA_charsort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 494: */
 /* line 495: */
switch ( (XXKAELA_charsort-128) )
{ 
case 1: 
 /* line 496: */
A_CALLPROC(NL(XHKAELA_inid),( &YXKAELA),( &YXKAELA,(NL(XHKAELA_inid)).nonlocals));
YXKAELA;
break;
case 2: 
{ 
A_CALLPROC(NL(XHKAELA_inid),( &ZXKAELA),( &ZXKAELA,(NL(XHKAELA_inid)).nonlocals));
ZXKAELA;
 /* line 497: */
 /* line 498: */
A_CALLPROC(NL(XHKAELA_inid),( &AYKAELA),( &AYKAELA,(NL(XHKAELA_inid)).nonlocals));
AYKAELA;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 499: */
 /* line 500: */
A_CALLPROC(NL(UXKAELA_skipchars),(),((NL(UXKAELA_skipchars)).nonlocals));
} 
A_PROC_EXIT(skipchars);
return;
} 
#undef NL

A_STATIC A68_VOID  SYKAELA_ptype(A68_BOOL * Outofdate, A68_196  *ReturnedValue, void *NonLocals)
#define NL(x) (((TYKAELA_ptype *)NonLocals)->x)
{ 
A68_BOOL  UYKAELA;  /* optbool result */
A68_196  VYKAELA;  /* clause result */
A_PROC_ENTRY(ptype);
 /* line 533: */
{ 
(*NL(LYKAELA_index)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 534: */
UYKAELA = (*Outofdate);
if ( ! UYKAELA )
{UYKAELA = (*(&A_VINDEX((*NL(BHKAELA_old)),(*NL(LYKAELA_index)))));
}
(*Outofdate) = UYKAELA;
 /* line 535: */
 /* line 536: */
VYKAELA = (*(&A_VINDEX((*NL(AHKAELA_types)),(*NL(LYKAELA_index)))));
} 
A_PROC_EXIT(ptype);
*ReturnedValue = (VYKAELA);
return;
} 
#undef NL

A_STATIC A68_233 * YYKAELA_cst(A68_BOOL * Outofdate, void *NonLocals)
#define NL(x) (((ZYKAELA_cst *)NonLocals)->x)
{ 
A68_227  AZKAELA_ct;
A68_233 * BZKAELA;  /* clause result */
A68_227  CZKAELA;  /* avoid structure result */
A68_233  DZKAELA;  /* collateral clause result */
A68_233 * EZKAELA;  /* YIELD */
A_PROC_ENTRY(cst);
 /* line 539: */
{ 
 /* line 540: */
 /* line 541: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
(*NL(RHKAELA_next)) = (-1);
 /* line 542: */
BZKAELA = KQCAELA_nilcst;
} 
else
{ 
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &CZKAELA),(Outofdate, &CZKAELA,(NL(GYKAELA_inctype)).nonlocals));
AZKAELA_ct = CZKAELA;
DZKAELA.Cst = AZKAELA_ct;
 /* line 543: */
DZKAELA.Rest = A_CALLPROC(NL(XYKAELA_cst),(Outofdate),(Outofdate,(NL(XYKAELA_cst)).nonlocals));
 /* line 544: */
EZKAELA = A_HEAP(A68_233 ) ;
(*EZKAELA) = DZKAELA ;
BZKAELA = EZKAELA;
} 
} 
A_PROC_EXIT(cst);
return( BZKAELA );
} 
#undef NL

A_STATIC A68_234 * HZKAELA_calts(A68_BOOL * Outofdate, void *NonLocals)
#define NL(x) (((IZKAELA_calts *)NonLocals)->x)
{ 
A68_227  JZKAELA_ct;
A68_234 * KZKAELA;  /* clause result */
A68_227  LZKAELA;  /* avoid structure result */
A68_234  MZKAELA;  /* collateral clause result */
A68_234 * NZKAELA;  /* YIELD */
A_PROC_ENTRY(calts);
 /* line 546: */
{ 
 /* line 547: */
 /* line 548: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
(*NL(RHKAELA_next)) = (-1);
 /* line 549: */
KZKAELA = JQCAELA_nilcalts;
} 
else
{ 
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &LZKAELA),(Outofdate, &LZKAELA,(NL(GYKAELA_inctype)).nonlocals));
JZKAELA_ct = LZKAELA;
MZKAELA.Calt = JZKAELA_ct;
 /* line 550: */
MZKAELA.Rest = A_CALLPROC(NL(GZKAELA_calts),(Outofdate),(Outofdate,(NL(GZKAELA_calts)).nonlocals));
 /* line 551: */
NZKAELA = A_HEAP(A68_234 ) ;
(*NZKAELA) = MZKAELA ;
KZKAELA = NZKAELA;
} 
} 
A_PROC_EXIT(calts);
return( KZKAELA );
} 
#undef NL

A_STATIC A68_VOID  IFLAELA_generator(A68_BOOL  GFLAELA_anonymous, A68_285  *ReturnedValue, void *NonLocals)
#define NL(x) (((JFLAELA_generator *)NonLocals)->x)
{ 
A68_285  KFLAELA;  /* clause result */
A68_285  LFLAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 636: */
LFLAELA.upb = NL(Notypes) ;
( GFLAELA_anonymous? A_VLOC(A68_196 ,LFLAELA): A_VHEAP(A68_196 ,LFLAELA) );
KFLAELA = LFLAELA;
} 
*ReturnedValue = (KFLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PFLAELA_generator(A68_BOOL  NFLAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((QFLAELA_generator *)NonLocals)->x)
{ 
A68_54  RFLAELA;  /* clause result */
A68_54  SFLAELA;  /* OPERATORS - dynamic generator */
{ 
SFLAELA.upb = NL(Notypes) ;
( NFLAELA_anonymous? A_VLOC(A68_BOOL ,SFLAELA): A_VHEAP(A68_BOOL ,SFLAELA) );
RFLAELA = SFLAELA;
} 
*ReturnedValue = (RFLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PGLAELA_generator(A68_BOOL  NGLAELA_anonymous, A68_385  *ReturnedValue, void *NonLocals)
#define NL(x) (((QGLAELA_generator *)NonLocals)->x)
{ 
A68_385  RGLAELA;  /* clause result */
A68_385  SGLAELA;  /* OPERATORS - dynamic generator */
{ 
SGLAELA.upb = NL(Noints) ;
( NGLAELA_anonymous? A_VLOC(A68_170 ,SGLAELA): A_VHEAP(A68_170 ,SGLAELA) );
RGLAELA = SGLAELA;
} 
*ReturnedValue = (RGLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WGLAELA_generator(A68_BOOL  UGLAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((XGLAELA_generator *)NonLocals)->x)
{ 
A68_54  YGLAELA;  /* clause result */
A68_54  ZGLAELA;  /* OPERATORS - dynamic generator */
{ 
ZGLAELA.upb = NL(Noints) ;
( UGLAELA_anonymous? A_VLOC(A68_BOOL ,ZGLAELA): A_VHEAP(A68_BOOL ,ZGLAELA) );
YGLAELA = ZGLAELA;
} 
*ReturnedValue = (YGLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WHLAELA_generator(A68_BOOL  UHLAELA_anonymous, A68_387  *ReturnedValue, void *NonLocals)
#define NL(x) (((XHLAELA_generator *)NonLocals)->x)
{ 
A68_387  YHLAELA;  /* clause result */
A68_387  ZHLAELA;  /* OPERATORS - dynamic generator */
{ 
ZHLAELA.upb = NL(Noattrs) ;
( UHLAELA_anonymous? A_VLOC(A68_208 ,ZHLAELA): A_VHEAP(A68_208 ,ZHLAELA) );
YHLAELA = ZHLAELA;
} 
*ReturnedValue = (YHLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DILAELA_generator(A68_BOOL  BILAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((EILAELA_generator *)NonLocals)->x)
{ 
A68_54  FILAELA;  /* clause result */
A68_54  GILAELA;  /* OPERATORS - dynamic generator */
{ 
GILAELA.upb = NL(Noattrs) ;
( BILAELA_anonymous? A_VLOC(A68_BOOL ,GILAELA): A_VHEAP(A68_BOOL ,GILAELA) );
FILAELA = GILAELA;
} 
*ReturnedValue = (FILAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DJLAELA_generator(A68_BOOL  BJLAELA_anonymous, A68_386  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJLAELA_generator *)NonLocals)->x)
{ 
A68_386  FJLAELA;  /* clause result */
A68_386  GJLAELA;  /* OPERATORS - dynamic generator */
{ 
GJLAELA.upb = NL(Noctypes) ;
( BJLAELA_anonymous? A_VLOC(A68_227 ,GJLAELA): A_VHEAP(A68_227 ,GJLAELA) );
FJLAELA = GJLAELA;
} 
*ReturnedValue = (FJLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KJLAELA_generator(A68_BOOL  IJLAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((LJLAELA_generator *)NonLocals)->x)
{ 
A68_54  MJLAELA;  /* clause result */
A68_54  NJLAELA;  /* OPERATORS - dynamic generator */
{ 
NJLAELA.upb = NL(Noctypes) ;
( IJLAELA_anonymous? A_VLOC(A68_BOOL ,NJLAELA): A_VHEAP(A68_BOOL ,NJLAELA) );
MJLAELA = NJLAELA;
} 
*ReturnedValue = (MJLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CNLAELA_generator(A68_BOOL  ANLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DNLAELA_generator *)NonLocals)->x)
{ 
A68_VC  ENLAELA;  /* clause result */
A68_VC  FNLAELA;  /* OPERATORS - dynamic generator */
{ 
FNLAELA.upb = ((*NL(MMLAELA_mind))+100) ;
( ANLAELA_anonymous? A_VLOC(A68_CHAR ,FNLAELA): A_VHEAP(A68_CHAR ,FNLAELA) );
ENLAELA = FNLAELA;
} 
*ReturnedValue = (ENLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OTLAELA_paltsid(A68_218 * Pa, A68_INT  Index, A68_VC  *ReturnedValue)
{ 
A68_218 * PTLAELA_palts;
A68_INT  QTLAELA_i;
A68_INT  RTLAELA;  /* to part of loop */
A68_VC  STLAELA;  /* clause result */
A_PROC_ENTRY(paltsid);
 /* line 928: */
{ 
PTLAELA_palts = Pa;
 /* line 929: */
RTLAELA = (Index-1);
for ( QTLAELA_i = 1;
QTLAELA_i <= RTLAELA;
QTLAELA_i += 1 )
{ 
PTLAELA_palts = (*(&(PTLAELA_palts->Rest)));
}
 /* line 930: */
 /* line 931: */
STLAELA = (*(&((*(&(PTLAELA_palts->Idinfo)))->Id)));
} 
A_PROC_EXIT(paltsid);
*ReturnedValue = (STLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EWLAELA_generator(A68_BOOL  CWLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FWLAELA_generator *)NonLocals)->x)
{ 
A68_VC  GWLAELA;  /* clause result */
A68_VC  HWLAELA;  /* OPERATORS - dynamic generator */
{ 
HWLAELA.upb = 1 ;
( CWLAELA_anonymous? A_VLOC(A68_CHAR ,HWLAELA): A_VHEAP(A68_CHAR ,HWLAELA) );
GWLAELA = HWLAELA;
} 
*ReturnedValue = (GWLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IXLAELA_generator(A68_BOOL  GXLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JXLAELA_generator *)NonLocals)->x)
{ 
A68_VC  KXLAELA;  /* clause result */
A68_VC  LXLAELA;  /* OPERATORS - dynamic generator */
{ 
LXLAELA.upb = 1 ;
( GXLAELA_anonymous? A_VLOC(A68_CHAR ,LXLAELA): A_VHEAP(A68_CHAR ,LXLAELA) );
KXLAELA = LXLAELA;
} 
*ReturnedValue = (KXLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TXLAELA_generator(A68_BOOL  RXLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UXLAELA_generator *)NonLocals)->x)
{ 
A68_VC  VXLAELA;  /* clause result */
A68_VC  WXLAELA;  /* OPERATORS - dynamic generator */
{ 
WXLAELA.upb = 1 ;
( RXLAELA_anonymous? A_VLOC(A68_CHAR ,WXLAELA): A_VHEAP(A68_CHAR ,WXLAELA) );
VXLAELA = WXLAELA;
} 
*ReturnedValue = (VXLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DJMAELA_generator(A68_BOOL  BJMAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJMAELA_generator *)NonLocals)->x)
{ 
A68_VC  FJMAELA;  /* clause result */
A68_VC  GJMAELA;  /* OPERATORS - dynamic generator */
{ 
GJMAELA.upb = ((*(&(NL(YIMAELA_m)->Text))).upb+1) ;
( BJMAELA_anonymous? A_VLOC(A68_CHAR ,GJMAELA): A_VHEAP(A68_CHAR ,GJMAELA) );
FJMAELA = GJMAELA;
} 
*ReturnedValue = (FJMAELA);
return;
} 
#undef NL

A_STATIC A68_INT  THKAELA_in(void *NonLocals)
#define NL(x) (((UHKAELA_in *)NonLocals)->x)
{ 
A68_INT  VHKAELA_i;
A68_INT  WHKAELA;  /* clause result */
A_PROC_ENTRY(in);
{ 
 /* line 115: */
if ( ((*NL(RHKAELA_next))!=(-1)) )
{ 
VHKAELA_i = (*NL(RHKAELA_next));
(*NL(RHKAELA_next)) = (-1);
 /* line 116: */
 /* line 117: */
WHKAELA = VHKAELA_i;
} 
else
{ 
 /* line 118: */
WHKAELA = A_CALLPROC(NL(Inkeptint),(),((NL(Inkeptint)).nonlocals));
} 
} 
A_PROC_EXIT(in);
return( WHKAELA );
} 
#undef NL

A_STATIC A68_VOID  YHKAELA_inid(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZHKAELA_inid *)NonLocals)->x)
{ 
A68_VC  AIKAELA;  /* clause result */
A68_VC  BIKAELA;  /* avoid structure result */
A_PROC_ENTRY(inid);
A_CALLPROC(NL(Inkeptid),( &BIKAELA),( &BIKAELA,(NL(Inkeptid)).nonlocals));
AIKAELA = BIKAELA;
A_PROC_EXIT(inid);
*ReturnedValue = (AIKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DIKAELA_skipinteger(void *NonLocals)
#define NL(x) (((EIKAELA_skipinteger *)NonLocals)->x)
{ 
A68_INT  FIKAELA_ii;
A68_INT  GIKAELA;  /* clause result */
A68_VC  HIKAELA;  /* avoid structure result */
A68_46  KIKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(skipinteger);
{ 
{ 
FIKAELA_ii = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 125: */
GIKAELA = FIKAELA_ii;
switch ( GIKAELA )
{ 
case 1: 
 /* line 126: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
break;
case 2: 
 /* line 127: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
break;
case 3: 
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 128: */
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
} 
break;
case 4: 
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 129: */
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
} 
break;
case 5: 
{ 
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 130: */
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
} 
break;
case 6: 
 /* line 131: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
break;
case 7: 
 /* line 132: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
break;
case 8: 
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 133: */
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
} 
break;
case 9: 
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 134: */
 /* line 135: */
A_CALLPROC(NL(XHKAELA_inid),( &HIKAELA),( &HIKAELA,(NL(XHKAELA_inid)).nonlocals));
HIKAELA;
} 
break;
default: 
 /* line 136: */
 /* line 137: */
if ( (FIKAELA_ii==VNCAELA_idef) )
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
} 
else
{ 
 /* line 138: */
 /* line 139: */
if ( (FIKAELA_ii==JMCAELA_ibracket) )
{ 
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
} 
else
{ 
 /* line 140: */
 /* line 141: */
A_CALLPROC(NL(Fault),(0, A_HVEC(KIKAELA,JIKAELA,A68_VC )),(0, A_HVEC(KIKAELA,JIKAELA,A68_VC ),(NL(Fault)).nonlocals));
} 
} 
break;
} 
} 
} 
A_PROC_EXIT(skipinteger);
return;
} 
#undef NL

A_STATIC A68_VOID  NIKAELA_ininteger(A68_BOOL * Outofdate, A68_170  *ReturnedValue, void *NonLocals)
#define NL(x) (((OIKAELA_ininteger *)NonLocals)->x)
{ 
A68_INT  PIKAELA_ii;
A68_INT  QIKAELA;  /* clause result */
A68_170  RIKAELA;  /* clause result */
A68_170  SIKAELA;  /* OPERATORS - mode -> union mode */
A68_INT  TIKAELA;  /* YIELD */
A68_INT  UIKAELA_index;
A68_BOOL  VIKAELA;  /* optbool result */
A68_INT  WIKAELA_opno;
A68_170  XIKAELA;  /* avoid structure result */
A68_170  YIKAELA_l;
A68_170  ZIKAELA;  /* avoid structure result */
A68_170  AJKAELA_r;
A68_176  BJKAELA;  /* collateral clause result */
A68_176 * CJKAELA;  /* YIELD */
A68_170  DJKAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EJKAELA_opno;
A68_170  FJKAELA;  /* avoid structure result */
A68_170  GJKAELA_r;
A68_177  HJKAELA;  /* collateral clause result */
A68_177 * IJKAELA;  /* YIELD */
A68_170  JJKAELA;  /* OPERATORS - mode -> union mode */
A68_170  KJKAELA;  /* avoid structure result */
A68_170  LJKAELA_cond;
A68_170  MJKAELA;  /* avoid structure result */
A68_170  NJKAELA_t;
A68_170  OJKAELA;  /* avoid structure result */
A68_170  PJKAELA_f;
A68_178  QJKAELA;  /* collateral clause result */
A68_178 * RJKAELA;  /* YIELD */
A68_170  SJKAELA;  /* OPERATORS - mode -> union mode */
A68_180  TJKAELA_ip;
A68_INT * UJKAELA;  /* YIELD */
A68_170  VJKAELA;  /* OPERATORS - mode -> union mode */
A68_INT  WJKAELA;  /* YIELD */
A68_170  XJKAELA;  /* avoid structure result */
A68_170  YJKAELA_ans;
A68_INT  ZJKAELA_index;
A68_BOOL  AKKAELA;  /* optbool result */
A68_170  BKKAELA;  /* avoid structure result */
A68_182 * CKKAELA;  /* YIELD */
A68_170  DKKAELA;  /* OPERATORS - mode -> union mode */
A68_172  EKKAELA;  /* collateral clause result */
A68_VC  FKKAELA;  /* avoid structure result */
A68_172 * GKKAELA;  /* YIELD */
A68_170  HKKAELA;  /* OPERATORS - mode -> union mode */
A68_46  KKKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  LKKAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ininteger);
 /* line 145: */
 /* line 146: */
{ 
{ 
 /* line 142: */
PIKAELA_ii = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 147: */
QIKAELA = PIKAELA_ii;
switch ( QIKAELA )
{ 
case 1: 
 /* line 148: */
TIKAELA = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)) ;
RIKAELA = A_UNITE(SIKAELA,mode1,1,TIKAELA);
break;
case 2: 
{ 
UIKAELA_index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 149: */
VIKAELA = (*Outofdate);
if ( ! VIKAELA )
{VIKAELA = (*(&A_VINDEX((*NL(DHKAELA_oldints)),UIKAELA_index)));
}
(*Outofdate) = VIKAELA;
 /* line 150: */
 /* line 151: */
 /* line 152: */
RIKAELA = (*(&A_VINDEX((*NL(CHKAELA_ints)),UIKAELA_index)));
} 
break;
case 3: 
{ 
WIKAELA_opno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 153: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &XIKAELA),(Outofdate, &XIKAELA,(NL(MIKAELA_ininteger)).nonlocals));
YIKAELA_l = XIKAELA;
 /* line 154: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &ZIKAELA),(Outofdate, &ZIKAELA,(NL(MIKAELA_ininteger)).nonlocals));
AJKAELA_r = ZIKAELA;
 /* line 155: */
BJKAELA.Opno = WIKAELA_opno;
BJKAELA.L = YIKAELA_l;
 /* line 156: */
BJKAELA.R = AJKAELA_r;
 /* line 157: */
CJKAELA = A_HEAP(A68_176 ) ;
(*CJKAELA) = BJKAELA ;
RIKAELA = A_UNITE(DJKAELA,mode7,7,CJKAELA);
} 
break;
case 4: 
{ 
EJKAELA_opno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 158: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &FJKAELA),(Outofdate, &FJKAELA,(NL(MIKAELA_ininteger)).nonlocals));
GJKAELA_r = FJKAELA;
 /* line 159: */
HJKAELA.Opno = EJKAELA_opno;
 /* line 160: */
HJKAELA.R = GJKAELA_r;
 /* line 161: */
IJKAELA = A_HEAP(A68_177 ) ;
(*IJKAELA) = HJKAELA ;
RIKAELA = A_UNITE(JJKAELA,mode8,8,IJKAELA);
} 
break;
case 5: 
{ 
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &KJKAELA),(Outofdate, &KJKAELA,(NL(MIKAELA_ininteger)).nonlocals));
LJKAELA_cond = KJKAELA;
 /* line 162: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &MJKAELA),(Outofdate, &MJKAELA,(NL(MIKAELA_ininteger)).nonlocals));
NJKAELA_t = MJKAELA;
 /* line 163: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &OJKAELA),(Outofdate, &OJKAELA,(NL(MIKAELA_ininteger)).nonlocals));
PJKAELA_f = OJKAELA;
 /* line 164: */
QJKAELA.Cond = LJKAELA_cond;
QJKAELA.T = NJKAELA_t;
 /* line 165: */
QJKAELA.F = PJKAELA_f;
 /* line 166: */
RJKAELA = A_HEAP(A68_178 ) ;
(*RJKAELA) = QJKAELA ;
RIKAELA = A_UNITE(SJKAELA,mode9,9,RJKAELA);
} 
break;
case 6: 
{ 
UJKAELA = (&((&TJKAELA_ip)->P)) ;
(*UJKAELA) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 167: */
RIKAELA = A_UNITE(VJKAELA,mode11,11,TJKAELA_ip);
} 
break;
case 7: 
 /* line 168: */
WJKAELA = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)) ;
RIKAELA = (*(&A_VINDEX((*NL(CHKAELA_ints)),WJKAELA)));
break;
case 8: 
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &XJKAELA),(Outofdate, &XJKAELA,(NL(MIKAELA_ininteger)).nonlocals));
YJKAELA_ans = XJKAELA;
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
RIKAELA = YJKAELA_ans;
} 
break;
default: 
 /* line 173: */
if ( (PIKAELA_ii==VNCAELA_idef) )
{ 
{ 
ZJKAELA_index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 174: */
AKKAELA = (*Outofdate);
if ( ! AKKAELA )
{AKKAELA = (*(&A_VINDEX((*NL(DHKAELA_oldints)),ZJKAELA_index)));
}
(*Outofdate) = AKKAELA;
 /* line 175: */
 /* line 176: */
 /* line 177: */
RIKAELA = (*(&A_VINDEX((*NL(CHKAELA_ints)),ZJKAELA_index)));
} 
} 
else
{ 
 /* line 178: */
if ( (PIKAELA_ii==JMCAELA_ibracket) )
{ 
 /* line 179: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &BKKAELA),(Outofdate, &BKKAELA,(NL(MIKAELA_ininteger)).nonlocals));
CKKAELA = A_HEAP(A68_182 ) ;
(*CKKAELA) = (*DKDAELA_makeibracket(BKKAELA)) ;
RIKAELA = A_UNITE(DKKAELA,mode13,13,CKKAELA);
} 
else
{ 
 /* line 180: */
if ( (PIKAELA_ii==QJCAELA_iconsttext) )
{ 
EKKAELA.Int = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 181: */
A_CALLPROC(NL(XHKAELA_inid),( &FKKAELA),( &FKKAELA,(NL(XHKAELA_inid)).nonlocals));
EKKAELA.Text = FKKAELA;
GKKAELA = A_HEAP(A68_172 ) ;
(*GKKAELA) = EKKAELA ;
RIKAELA = A_UNITE(HKKAELA,mode3,3,GKKAELA);
} 
else
{ 
A_CALLPROC(NL(Fault),(0, A_HVEC(KKKAELA,JKKAELA,A68_VC )),(0, A_HVEC(KKKAELA,JKKAELA,A68_VC ),(NL(Fault)).nonlocals));
 /* line 182: */
 /* line 183: */
RIKAELA = A_UNITE(LKKAELA,mode4,4,DRCAELA_flt);
} 
} 
} 
break;
} 
} 
} 
A_PROC_EXIT(ininteger);
*ReturnedValue = (RIKAELA);
return;
} 
#undef NL

A_STATIC A68_215 * NKKAELA_instrings(void *NonLocals)
#define NL(x) (((OKKAELA_instrings *)NonLocals)->x)
{ 
A68_215 * PKKAELA_strings;
A68_INT  QKKAELA_nostrings;
A68_215  RKKAELA;  /* collateral clause result */
A68_VC  SKKAELA;  /* avoid structure result */
A68_215 * TKKAELA;  /* YIELD */
A68_215 * UKKAELA;  /* clause result */
A_PROC_ENTRY(instrings);
{ 
PKKAELA_strings = NQCAELA_nilstringlist;
 /* line 189: */
QKKAELA_nostrings = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 190: */
for ( ;; )
{ 
 /* line 184: */
 /* line 191: */
if ( !((QKKAELA_nostrings>0)) ) break;
A_CALLPROC(NL(XHKAELA_inid),( &SKKAELA),( &SKKAELA,(NL(XHKAELA_inid)).nonlocals));
RKKAELA.Id = SKKAELA;
RKKAELA.Rest = PKKAELA_strings;
TKKAELA = A_HEAP(A68_215 ) ;
(*TKKAELA) = RKKAELA ;
PKKAELA_strings = TKKAELA;
 /* line 192: */
 /* line 193: */
QKKAELA_nostrings-=1;
}
 /* line 194: */
 /* line 195: */
UKKAELA = PKKAELA_strings;
} 
A_PROC_EXIT(instrings);
return( UKKAELA );
} 
#undef NL

A_STATIC A68_INT  WKKAELA_length(A68_215 * Strings)
{ 
A68_INT  XKKAELA_total;
A68_215 * YKKAELA_sl;
A68_INT  ZKKAELA;  /* clause result */
A_PROC_ENTRY(length);
 /* line 198: */
 /* line 199: */
{ 
XKKAELA_total = 0;
 /* line 200: */
YKKAELA_sl = Strings;
 /* line 201: */
for ( ;; )
{ 
 /* line 202: */
if ( !((YKKAELA_sl!=NQCAELA_nilstringlist)) ) break;
XKKAELA_total+=(*(&(YKKAELA_sl->Id))).upb;
 /* line 203: */
 /* line 204: */
YKKAELA_sl = (*(&(YKKAELA_sl->Rest)));
}
 /* line 205: */
 /* line 206: */
ZKKAELA = XKKAELA_total;
} 
A_PROC_EXIT(length);
return( ZKKAELA );
} 
#undef NL

A_STATIC A68_VOID  CLKAELA_inattrs(A68_BOOL * Outofdate, A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((DLKAELA_inattrs *)NonLocals)->x)
{ 
A68_394  GLKAELA_ast;   /* proc value of non-global proc */
A68_INT  OLKAELA_attsort;
A68_INT  PLKAELA_attrno;
A68_BOOL  QLKAELA;  /* optbool result */
A68_208  RLKAELA;  /* clause result */
A68_VC  SLKAELA;  /* avoid structure result */
A68_VC  TLKAELA_classname;
A68_215 * ULKAELA_strings;
A68_210  VLKAELA;  /* collateral clause result */
A68_210 * WLKAELA;  /* YIELD */
A68_208  XLKAELA;  /* OPERATORS - mode -> union mode */
A68_208  YLKAELA;  /* avoid structure result */
A68_208  ZLKAELA_val;
A68_208  AMKAELA;  /* OPERATORS - mode -> union mode */
A68_212 * BMKAELA;  /* YIELD */
A68_208  CMKAELA;  /* OPERATORS - mode -> union mode */
A68_211 * DMKAELA;  /* YIELD */
A68_208  EMKAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(inattrs);
 /* line 209: */
 /* line 210: */
{ 
A_CLOSURE( GLKAELA_ast, HLKAELA_ast, ILKAELA_ast );
(( ILKAELA_ast * ) ( GLKAELA_ast.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( ILKAELA_ast * ) ( GLKAELA_ast.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( ILKAELA_ast * ) ( GLKAELA_ast.nonlocals )) -> BLKAELA_inattrs = NL(BLKAELA_inattrs);
(( ILKAELA_ast * ) ( GLKAELA_ast.nonlocals )) -> GLKAELA_ast = GLKAELA_ast;
 /* line 218: */
OLKAELA_attsort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 219: */
 /* line 220: */
if ( (OLKAELA_attsort==VOCAELA_attid) )
{ 
PLKAELA_attrno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 221: */
QLKAELA = (*Outofdate);
if ( ! QLKAELA )
{QLKAELA = (*(&A_VINDEX((*NL(HHKAELA_oldattrs)),PLKAELA_attrno)));
}
(*Outofdate) = QLKAELA;
 /* line 222: */
 /* line 223: */
RLKAELA = (*(&A_VINDEX((*NL(GHKAELA_attrs)),PLKAELA_attrno)));
} 
else
{ 
 /* line 224: */
if ( (OLKAELA_attsort==WOCAELA_attdata) )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &SLKAELA),( &SLKAELA,(NL(XHKAELA_inid)).nonlocals));
TLKAELA_classname = SLKAELA;
 /* line 225: */
ULKAELA_strings = A_CALLPROC(NL(MKKAELA_instrings),(),((NL(MKKAELA_instrings)).nonlocals));
 /* line 226: */
VLKAELA.Classname = TLKAELA_classname;
 /* line 227: */
VLKAELA.Data = ULKAELA_strings;
WLKAELA = A_HEAP(A68_210 ) ;
(*WLKAELA) = VLKAELA ;
RLKAELA = A_UNITE(XLKAELA,mode2,2,WLKAELA);
} 
else
{ 
 /* line 228: */
if ( (OLKAELA_attsort==XOCAELA_attbracket) )
{ 
A_CALLPROC(NL(BLKAELA_inattrs),(Outofdate, &YLKAELA),(Outofdate, &YLKAELA,(NL(BLKAELA_inattrs)).nonlocals));
ZLKAELA_val = YLKAELA;
 /* line 229: */
 /* line 230: */
BMKAELA = SKDAELA_makeabracket(ZLKAELA_val) ;
RLKAELA = A_UNITE(AMKAELA,mode4,4,BMKAELA);
} 
else
{ 
 /* line 231: */
if ( (OLKAELA_attsort==YOCAELA_attstr) )
{ 
 /* line 232: */
 /* line 233: */
DMKAELA = A_CALLPROC(GLKAELA_ast,(Outofdate),(Outofdate,(GLKAELA_ast).nonlocals)) ;
RLKAELA = A_UNITE(CMKAELA,mode3,3,DMKAELA);
} 
else
{ 
 /* line 234: */
RLKAELA = A_UNITE(EMKAELA,mode6,6,MRCAELA_attrnull);
} 
} 
} 
} 
} 
A_PROC_EXIT(inattrs);
*ReturnedValue = (RLKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HMKAELA_intype(A68_BOOL * Outofdate, A68_196  *ReturnedValue, void *NonLocals)
#define NL(x) (((IMKAELA_intype *)NonLocals)->x)
{ 
A68_170  JMKAELA_i;
A68_196  KMKAELA_t;
A68_INT  LMKAELA_index;
A68_396  NMKAELA_tst;   /* proc value of non-global proc */
A68_INT  VMKAELA_ii;
A68_INT  WMKAELA;  /* clause result */
A68_196  XMKAELA;  /* clause result */
A68_196  YMKAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  ZMKAELA;  /* optbool result */
A68_170  ANKAELA;  /* avoid structure result */
A68_203  BNKAELA;  /* collateral clause result */
A68_196  CNKAELA;  /* avoid structure result */
A68_203 * DNKAELA;  /* YIELD */
A68_196  ENKAELA;  /* OPERATORS - mode -> union mode */
A68_196  FNKAELA;  /* OPERATORS - mode -> union mode */
A68_199 * GNKAELA;  /* YIELD */
A68_BOOL  HNKAELA;  /* optbool result */
A68_196  INKAELA;  /* avoid structure result */
A68_202  JNKAELA;  /* collateral clause result */
A68_196  KNKAELA;  /* avoid structure result */
A68_202 * LNKAELA;  /* YIELD */
A68_196  MNKAELA;  /* OPERATORS - mode -> union mode */
A68_196  NNKAELA;  /* avoid structure result */
A68_204 * ONKAELA;  /* YIELD */
A68_196  PNKAELA;  /* OPERATORS - mode -> union mode */
A68_170  QNKAELA;  /* avoid structure result */
A68_205  RNKAELA;  /* collateral clause result */
A68_196  SNKAELA;  /* avoid structure result */
A68_205 * TNKAELA;  /* YIELD */
A68_196  UNKAELA;  /* OPERATORS - mode -> union mode */
A68_196  VNKAELA;  /* OPERATORS - mode -> union mode */
A68_196  WNKAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(intype);
 /* line 240: */
{ 
 /* line 241: */
A_CLOSURE( NMKAELA_tst, OMKAELA_tst, PMKAELA_tst );
(( PMKAELA_tst * ) ( NMKAELA_tst.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( PMKAELA_tst * ) ( NMKAELA_tst.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( PMKAELA_tst * ) ( NMKAELA_tst.nonlocals )) -> GMKAELA_intype = NL(GMKAELA_intype);
(( PMKAELA_tst * ) ( NMKAELA_tst.nonlocals )) -> NMKAELA_tst = NMKAELA_tst;
 /* line 249: */
{ 
VMKAELA_ii = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 250: */
WMKAELA = (VMKAELA_ii-9);
switch ( WMKAELA )
{ 
case 1: 
 /* line 251: */
XMKAELA = A_UNITE(YMKAELA,mode5,5,AUCAELA_typenull);
break;
case 2: 
{ 
LMKAELA_index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 252: */
ZMKAELA = (*Outofdate);
if ( ! ZMKAELA )
{ZMKAELA = (*(&A_VINDEX((*NL(BHKAELA_old)),LMKAELA_index)));
}
(*Outofdate) = ZMKAELA;
 /* line 253: */
 /* line 254: */
 /* line 255: */
XMKAELA = (*(&A_VINDEX((*NL(AHKAELA_types)),LMKAELA_index)));
} 
break;
case 3: 
{ 
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &ANKAELA),(Outofdate, &ANKAELA,(NL(MIKAELA_ininteger)).nonlocals));
JMKAELA_i = ANKAELA;
 /* line 256: */
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &CNKAELA),(Outofdate, &CNKAELA,(NL(GMKAELA_intype)).nonlocals));
BNKAELA.T = CNKAELA;
 /* line 257: */
BNKAELA.Size = JMKAELA_i;
 /* line 258: */
DNKAELA = A_HEAP(A68_203 ) ;
(*DNKAELA) = BNKAELA ;
XMKAELA = A_UNITE(ENKAELA,mode7,7,DNKAELA);
} 
break;
case 4: 
 /* line 259: */
GNKAELA = A_CALLPROC(NMKAELA_tst,(Outofdate),(Outofdate,(NMKAELA_tst).nonlocals)) ;
XMKAELA = A_UNITE(FNKAELA,mode3,3,GNKAELA);
break;
case 5: 
{ 
LMKAELA_index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 260: */
HNKAELA = (*Outofdate);
if ( ! HNKAELA )
{HNKAELA = (*(&A_VINDEX((*NL(BHKAELA_old)),LMKAELA_index)));
}
(*Outofdate) = HNKAELA;
 /* line 261: */
 /* line 262: */
 /* line 263: */
XMKAELA = (*(&A_VINDEX((*NL(AHKAELA_types)),LMKAELA_index)));
} 
break;
case 6: 
{ 
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &INKAELA),(Outofdate, &INKAELA,(NL(GMKAELA_intype)).nonlocals));
KMKAELA_t = INKAELA;
 /* line 264: */
JNKAELA.From = KMKAELA_t;
 /* line 265: */
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &KNKAELA),(Outofdate, &KNKAELA,(NL(GMKAELA_intype)).nonlocals));
JNKAELA.To = KNKAELA;
 /* line 266: */
LNKAELA = A_HEAP(A68_202 ) ;
(*LNKAELA) = JNKAELA ;
XMKAELA = A_UNITE(MNKAELA,mode6,6,LNKAELA);
} 
break;
default: 
 /* line 267: */
if ( (VMKAELA_ii==KMCAELA_tbracket) )
{ 
 /* line 268: */
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &NNKAELA),(Outofdate, &NNKAELA,(NL(GMKAELA_intype)).nonlocals));
ONKAELA = A_HEAP(A68_204 ) ;
(*ONKAELA) = (*IKDAELA_maketbracket(NNKAELA)) ;
XMKAELA = A_UNITE(PNKAELA,mode8,8,ONKAELA);
} 
else
{ 
 /* line 269: */
if ( (VMKAELA_ii==HOCAELA_tstring) )
{ 
{ 
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &QNKAELA),(Outofdate, &QNKAELA,(NL(MIKAELA_ininteger)).nonlocals));
JMKAELA_i = QNKAELA;
 /* line 270: */
RNKAELA.Size = JMKAELA_i;
 /* line 271: */
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &SNKAELA),(Outofdate, &SNKAELA,(NL(GMKAELA_intype)).nonlocals));
RNKAELA.Tstring = SNKAELA;
 /* line 272: */
TNKAELA = A_HEAP(A68_205 ) ;
(*TNKAELA) = RNKAELA ;
XMKAELA = A_UNITE(UNKAELA,mode9,9,TNKAELA);
} 
} 
else
{ 
 /* line 273: */
 /* line 274: */
if ( (VMKAELA_ii==ROCAELA_tvoid) )
{ 
XMKAELA = A_UNITE(VNKAELA,mode12,12,NRCAELA_typevoid);
} 
else
{ 
(*NL(RHKAELA_next)) = VMKAELA_ii;
 /* line 275: */
 /* line 276: */
XMKAELA = WNKAELA;
} 
} 
} 
break;
} 
} 
} 
A_PROC_EXIT(intype);
*ReturnedValue = (XMKAELA);
return;
} 
#undef NL

A_STATIC A68_218 * DOKAELA_palts(A68_BOOL * Outofdate, A68_INT  Index, A68_INT  V, A68_INT  Scope, A68_196  Primset, void *NonLocals)
#define NL(x) (((EOKAELA_palts *)NonLocals)->x)
{ 
A68_196 * FOKAELA_rt;
A68_196  GOKAELA_t;
A68_185 * HOKAELA_idinfo;
A68_218 * IOKAELA;  /* clause result */
A68_196  JOKAELA;  /* avoid structure result */
A68_196  KOKAELA;  /* united object - for case conformity */
A68_196 * LOKAELA;  /* clause result */
A68_196 * MOKAELA;  /* YIELD */
A68_185  NOKAELA;  /* collateral clause result */
A68_VC  OOKAELA;  /* avoid structure result */
A68_190  POKAELA;  /* collateral clause result */
A68_186  QOKAELA;  /* OPERATORS - mode -> union mode */
A68_185 * ROKAELA;  /* YIELD */
A68_218  SOKAELA;  /* collateral clause result */
A68_218 * TOKAELA;  /* YIELD */
A_PROC_ENTRY(palts);
 /* line 282: */
{ 
 /* line 283: */
 /* line 277: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
(*NL(RHKAELA_next)) = (-1);
 /* line 284: */
IOKAELA = (A68_218 *)A68_NIL;
} 
else
{ 
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &JOKAELA),(Outofdate, &JOKAELA,(NL(GMKAELA_intype)).nonlocals));
GOKAELA_t = JOKAELA;
KOKAELA = GOKAELA_t ;
switch ( KOKAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
LOKAELA = (A68_196 *)A68_NIL;
break;
default: 
MOKAELA = A_HEAP(A68_196 ) ;
(*MOKAELA) = GOKAELA_t ;
LOKAELA = MOKAELA;
break;
} 
FOKAELA_rt = LOKAELA;
 /* line 285: */
NOKAELA.Scope = Scope;
NOKAELA.Vnno = V;
NOKAELA.Text = A68_FALSE;
NOKAELA.Outofdate = A68_FALSE;
NOKAELA.Inscope = A68_TRUE;
 /* line 286: */
NOKAELA.Export = NL(Export);
A_CALLPROC(NL(XHKAELA_inid),( &OOKAELA),( &OOKAELA,(NL(XHKAELA_inid)).nonlocals));
NOKAELA.Id = OOKAELA;
POKAELA.Type = Primset;
POKAELA.Index = Index;
NOKAELA.U = A_UNITE(QOKAELA,mode4,4,POKAELA);
ROKAELA = A_HEAP(A68_185 ) ;
(*ROKAELA) = NOKAELA ;
HOKAELA_idinfo = ROKAELA;
 /* line 287: */
if ( (Scope==(-1)) )
{ 
A_CALLPROC(NL(Newextid),((*HOKAELA_idinfo)),((*HOKAELA_idinfo),(NL(Newextid)).nonlocals));
} 
 /* line 288: */
SOKAELA.Idinfo = HOKAELA_idinfo;
 /* line 289: */
SOKAELA.U = FOKAELA_rt;
 /* line 290: */
SOKAELA.Rest = A_CALLPROC(NL(COKAELA_palts),(Outofdate, (Index+1), V, Scope, Primset),(Outofdate, (Index+1), V, Scope, Primset,(NL(COKAELA_palts)).nonlocals));
 /* line 291: */
TOKAELA = A_HEAP(A68_218 ) ;
(*TOKAELA) = SOKAELA ;
IOKAELA = TOKAELA;
} 
} 
A_PROC_EXIT(palts);
return( IOKAELA );
} 
#undef NL

A_STATIC A68_VOID  ZOKAELA_inprimtype(A68_BOOL * Outofdate, A68_INT  Tno, A68_INT  V, A68_VC  Id, A68_196  *ReturnedValue, void *NonLocals)
#define NL(x) (((APKAELA_inprimtype *)NonLocals)->x)
{ 
A68_185  BPKAELA;  /* collateral clause result */
A68_186  CPKAELA;  /* OPERATORS - mode -> union mode */
A68_INT  DPKAELA_ii;
A68_INT  EPKAELA;  /* clause result */
A68_197  FPKAELA;  /* collateral clause result */
A68_196  GPKAELA;  /* OPERATORS - mode -> union mode */
A68_216  HPKAELA;  /* OPERATORS - mode -> union mode */
A68_218 * IPKAELA;  /* YIELD */
A68_196  JPKAELA;  /* clause result */
A68_196  KPKAELA;  /* OPERATORS - mode -> union mode */
A68_185  LPKAELA;  /* collateral clause result */
A68_VC  MPKAELA;  /* avoid structure result */
A68_190  NPKAELA;  /* collateral clause result */
A68_196  OPKAELA;  /* OPERATORS - mode -> union mode */
A68_197 * PPKAELA;  /* YIELD */
A68_186  QPKAELA;  /* OPERATORS - mode -> union mode */
A68_170  RPKAELA;  /* avoid structure result */
A68_170  SPKAELA_lwb;
A68_170  TPKAELA;  /* avoid structure result */
A68_170  UPKAELA_upb;
A68_197  VPKAELA;  /* collateral clause result */
A68_217  WPKAELA;  /* collateral clause result */
A68_216  XPKAELA;  /* OPERATORS - mode -> union mode */
A68_196  YPKAELA;  /* OPERATORS - mode -> union mode */
A68_220 * ZPKAELA_chalts;
A68_220 ** AQKAELA_charalts;
A68_399  CQKAELA_generator;   /* proc value of non-global proc */
A68_54  IQKAELA;  /* avoid structure result */
A68_54  HQKAELA_charcheck;
A68_BOOL * JQKAELA_i;
A68_INT  KQKAELA;  /* forall loop counter */
A68_185  LQKAELA;  /* collateral clause result */
A68_VC  MQKAELA;  /* avoid structure result */
A68_190  NQKAELA;  /* collateral clause result */
A68_196  OQKAELA;  /* OPERATORS - mode -> union mode */
A68_197 * PQKAELA;  /* YIELD */
A68_186  QQKAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RQKAELA_numofalts;
A68_INT  SQKAELA_ij;
A68_BOOL  TQKAELA;  /* clause result */
A68_VC  VQKAELA;  /* avoid structure result */
A68_INT  WQKAELA;  /* YIELD */
A68_CHAR  UQKAELA_c;
A68_INT  XQKAELA;  /* YIELD */
A68_BOOL * YQKAELA;  /* YIELD */
A68_220  ZQKAELA;  /* collateral clause result */
A68_221  ARKAELA;  /* OPERATORS - mode -> union mode */
A68_220 * BRKAELA;  /* YIELD */
A68_VC  DRKAELA;  /* avoid structure result */
A68_INT  ERKAELA;  /* YIELD */
A68_CHAR  CRKAELA_c1;
A68_VC  GRKAELA;  /* avoid structure result */
A68_INT  HRKAELA;  /* YIELD */
A68_CHAR  FRKAELA_c2;
A68_INT  JRKAELA;  /* YIELD */
A68_159  IRKAELA_char1;
A68_INT  LRKAELA;  /* YIELD */
A68_159  KRKAELA_char2;
A68_INT  MRKAELA_chartype;
A68_INT  NRKAELA_i;
A68_INT  ORKAELA;  /* to part of loop */
A68_INT  PRKAELA_j;
A68_INT  QRKAELA;  /* to part of loop */
A68_BOOL  RRKAELA;  /* optbool result */
A68_BOOL * SRKAELA;  /* YIELD */
A68_220  TRKAELA;  /* collateral clause result */
A68_222  URKAELA;  /* collateral clause result */
A68_222 * VRKAELA;  /* YIELD */
A68_221  WRKAELA;  /* OPERATORS - mode -> union mode */
A68_222  XRKAELA;  /* YIELD */
A68_220 * YRKAELA;  /* YIELD */
A68_219  ZRKAELA;  /* collateral clause result */
A68_399  BSKAELA_generator;   /* proc value of non-global proc */
A68_54  GSKAELA;  /* avoid structure result */
A68_219  HSKAELA_pstring1;
A68_197  ISKAELA;  /* collateral clause result */
A68_216  JSKAELA;  /* OPERATORS - mode -> union mode */
A68_196  KSKAELA;  /* OPERATORS - mode -> union mode */
A68_196  LSKAELA;  /* avoid structure result */
A68_196  MSKAELA_ty;
A68_196  NSKAELA;  /* united object - for case conformity */
A68_196  OSKAELA;  /* OPERATORS - mode -> union mode */
A68_198  PSKAELA;  /* collateral clause result */
A68_198 * QSKAELA;  /* YIELD */
A68_196  RSKAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(inprimtype);
 /* line 295: */
 /* line 296: */
{ 
BPKAELA.Scope = (-1);
BPKAELA.Vnno = V;
BPKAELA.Text = A68_FALSE;
BPKAELA.Outofdate = A68_FALSE;
BPKAELA.Inscope = A68_TRUE;
BPKAELA.Export = NL(Export);
 /* line 297: */
BPKAELA.Id = Id;
BPKAELA.U = A_UNITE(CPKAELA,mode10,10,CRCAELA_notdec);
(*NL(IHKAELA_idinfo)) = (*(&(A_CALLPROC(NL(Newextid),(BPKAELA),(BPKAELA,(NL(Newextid)).nonlocals))->Idinfo)));
 /* line 298: */
{ 
DPKAELA_ii = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 300: */
EPKAELA = (DPKAELA_ii-49);
switch ( EPKAELA )
{ 
case 1: 
{ 
(*NL(VGKAELA_primset)) = A_HEAP(A68_197 );
 /* line 301: */
 /* line 302: */
FPKAELA.Idinfo = (*NL(IHKAELA_idinfo));
FPKAELA.Typeno = Tno;
 /* line 303: */
IPKAELA = A_CALLPROC(NL(COKAELA_palts),(Outofdate, 1, V, (-1), A_UNITE(GPKAELA,mode1,1,(*NL(VGKAELA_primset)))),(Outofdate, 1, V, (-1), A_UNITE(GPKAELA,mode1,1,(*NL(VGKAELA_primset))),(NL(COKAELA_palts)).nonlocals)) ;
FPKAELA.U = A_UNITE(HPKAELA,mode2,2,IPKAELA);
 /* line 305: */
(**NL(VGKAELA_primset)) = FPKAELA ;
JPKAELA = A_UNITE(KPKAELA,mode1,1,(*NL(VGKAELA_primset)));
} 
break;
case 2: 
{ 
LPKAELA.Scope = (-1);
LPKAELA.Vnno = V;
LPKAELA.Text = A68_FALSE;
LPKAELA.Outofdate = A68_FALSE;
LPKAELA.Inscope = A68_TRUE;
 /* line 306: */
LPKAELA.Export = NL(Export);
A_CALLPROC(NL(XHKAELA_inid),( &MPKAELA),( &MPKAELA,(NL(XHKAELA_inid)).nonlocals));
LPKAELA.Id = MPKAELA;
PPKAELA = (*NL(VGKAELA_primset)) = A_HEAP(A68_197 ) ;
NPKAELA.Type = A_UNITE(OPKAELA,mode1,1,PPKAELA);
NPKAELA.Index = 0;
LPKAELA.U = A_UNITE(QPKAELA,mode4,4,NPKAELA);
(*NL(JHKAELA_idinfo1)) = (*(&(A_CALLPROC(NL(Newextid),(LPKAELA),(LPKAELA,(NL(Newextid)).nonlocals))->Idinfo)));
 /* line 307: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &RPKAELA),(Outofdate, &RPKAELA,(NL(MIKAELA_ininteger)).nonlocals));
SPKAELA_lwb = RPKAELA;
 /* line 308: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &TPKAELA),(Outofdate, &TPKAELA,(NL(MIKAELA_ininteger)).nonlocals));
UPKAELA_upb = TPKAELA;
 /* line 309: */
VPKAELA.Idinfo = (*NL(IHKAELA_idinfo));
VPKAELA.Typeno = Tno;
WPKAELA.Idinfo = (*NL(JHKAELA_idinfo1));
WPKAELA.Lwb = SPKAELA_lwb;
WPKAELA.Upb = UPKAELA_upb;
 /* line 310: */
VPKAELA.U = A_UNITE(XPKAELA,mode1,1,WPKAELA);
 /* line 311: */
 /* line 312: */
(**NL(VGKAELA_primset)) = VPKAELA ;
JPKAELA = A_UNITE(YPKAELA,mode1,1,(*NL(VGKAELA_primset)));
} 
break;
default: 
 /* line 313: */
if ( (DPKAELA_ii==XNCAELA_pstring) )
{ 
{ 
ZPKAELA_chalts = LQCAELA_nilcharalts;
 /* line 314: */
AQKAELA_charalts = (&ZPKAELA_chalts);
 /* line 315: */
A_CLOSURE( CQKAELA_generator, DQKAELA_generator, EQKAELA_generator );
(( EQKAELA_generator * ) ( CQKAELA_generator.nonlocals )) -> Charset = NL(Charset);
A_CALLPROC(CQKAELA_generator,(A68_TRUE, &IQKAELA),(A68_TRUE, &IQKAELA,(CQKAELA_generator).nonlocals));
HQKAELA_charcheck = IQKAELA;
 /* line 316: */
KQKAELA = HQKAELA_charcheck.upb -1;
JQKAELA_i = HQKAELA_charcheck.data;
for (;KQKAELA-- >= 0;
(JQKAELA_i++
) )
{
(*JQKAELA_i) = A68_FALSE;
}
 /* line 317: */
LQKAELA.Scope = (-1);
LQKAELA.Vnno = V;
LQKAELA.Text = A68_FALSE;
LQKAELA.Outofdate = A68_FALSE;
LQKAELA.Inscope = A68_TRUE;
 /* line 318: */
LQKAELA.Export = NL(Export);
 /* line 319: */
A_CALLPROC(NL(XHKAELA_inid),( &MQKAELA),( &MQKAELA,(NL(XHKAELA_inid)).nonlocals));
LQKAELA.Id = MQKAELA;
PQKAELA = (*NL(VGKAELA_primset)) = A_HEAP(A68_197 ) ;
NQKAELA.Type = A_UNITE(OQKAELA,mode1,1,PQKAELA);
NQKAELA.Index = VPCAELA_stringindex;
LQKAELA.U = A_UNITE(QQKAELA,mode4,4,NQKAELA);
(*NL(JHKAELA_idinfo1)) = (*(&(A_CALLPROC(NL(Newextid),(LQKAELA),(LQKAELA,(NL(Newextid)).nonlocals))->Idinfo)));
 /* line 320: */
RQKAELA_numofalts = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 321: */
for ( ;; )
{ 
SQKAELA_ij = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 322: */
TQKAELA = (SQKAELA_ij!=XKCAELA_end);
if ( !TQKAELA ) break;
 /* line 323: */
if ( (SQKAELA_ij==YNCAELA_pchar) )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &VQKAELA),( &VQKAELA,(NL(XHKAELA_inid)).nonlocals));
WQKAELA = 1 ;
UQKAELA_c = (*(&A_VINDEX(VQKAELA,WQKAELA)));
 /* line 324: */
XQKAELA = (A68_INT)(unsigned char)UQKAELA_c ;
YQKAELA = (&A_VINDEX(HQKAELA_charcheck,XQKAELA)) ;
(*YQKAELA) = A68_TRUE;
 /* line 325: */
 /* line 326: */
ZQKAELA.Alts = A_UNITE(ARKAELA,mode1,1,UQKAELA_c);
ZQKAELA.Rest = LQCAELA_nilcharalts;
BRKAELA = A_HEAP(A68_220 ) ;
(*BRKAELA) = ZQKAELA ;
(*AQKAELA_charalts) = BRKAELA;
 /* line 327: */
 /* line 328: */
AQKAELA_charalts = (&((*AQKAELA_charalts)->Rest));
} 
else
{ 
A_CALLPROC(NL(XHKAELA_inid),( &DRKAELA),( &DRKAELA,(NL(XHKAELA_inid)).nonlocals));
ERKAELA = 1 ;
CRKAELA_c1 = (*(&A_VINDEX(DRKAELA,ERKAELA)));
A_CALLPROC(NL(XHKAELA_inid),( &GRKAELA),( &GRKAELA,(NL(XHKAELA_inid)).nonlocals));
HRKAELA = 1 ;
FRKAELA_c2 = (*(&A_VINDEX(GRKAELA,HRKAELA)));
 /* line 329: */
JRKAELA = (A68_INT)(unsigned char)CRKAELA_c1 ;
IRKAELA_char1 = (*(&A_R1INDEX(NL(Charset),JRKAELA)));
 /* line 330: */
LRKAELA = (A68_INT)(unsigned char)FRKAELA_c2 ;
KRKAELA_char2 = (*(&A_R1INDEX(NL(Charset),LRKAELA)));
 /* line 331: */
MRKAELA_chartype = (*(&((&IRKAELA_char1)->Type)));
 /* line 332: */
 /* line 333: */
ORKAELA = (*(&((&KRKAELA_char2)->Value)));
for ( NRKAELA_i = (*(&((&IRKAELA_char1)->Value)));
NRKAELA_i <= ORKAELA;
NRKAELA_i += 1 )
{ 
 /* line 334: */
QRKAELA = NL(Charset).dim[0].upb;
for ( PRKAELA_j = 1;
PRKAELA_j <= QRKAELA;
PRKAELA_j += 1 )
{ 
 /* line 335: */
RRKAELA = ((*(&((&A_R1INDEX(NL(Charset),PRKAELA_j))->Value)))==NRKAELA_i);
if ( RRKAELA )
{ /* line 336: */
RRKAELA = ((*(&((&A_R1INDEX(NL(Charset),PRKAELA_j))->Type)))==MRKAELA_chartype);
}
if ( RRKAELA )
{ 
 /* line 337: */
 /* line 338: */
SRKAELA = (&A_VINDEX(HQKAELA_charcheck,PRKAELA_j)) ;
(*SRKAELA) = A68_TRUE;
} 
}
 /* line 339: */
}
 /* line 340: */
 /* line 341: */
URKAELA.Lwchar = CRKAELA_c1;
URKAELA.Upchar = FRKAELA_c2;
VRKAELA = A_HEAP(A68_222 ) ;
XRKAELA = (*VRKAELA) = URKAELA ;
TRKAELA.Alts = A_UNITE(WRKAELA,mode2,2,XRKAELA);
TRKAELA.Rest = LQCAELA_nilcharalts;
YRKAELA = A_HEAP(A68_220 ) ;
(*YRKAELA) = TRKAELA ;
(*AQKAELA_charalts) = YRKAELA;
 /* line 342: */
 /* line 343: */
 /* line 344: */
AQKAELA_charalts = (&((*AQKAELA_charalts)->Rest));
} 
}
 /* line 345: */
 /* line 346: */
ZRKAELA.Idinfo = (*NL(JHKAELA_idinfo1));
A_CLOSURE( BSKAELA_generator, CSKAELA_generator, DSKAELA_generator );
(( DSKAELA_generator * ) ( BSKAELA_generator.nonlocals )) -> Charset = NL(Charset);
 /* line 347: */
A_CALLPROC(BSKAELA_generator,(A68_FALSE, &GSKAELA),(A68_FALSE, &GSKAELA,(BSKAELA_generator).nonlocals));
A_VASSIGN2(HQKAELA_charcheck,GSKAELA,A68_BOOL ) ;
ZRKAELA.Charcheck = GSKAELA;
ZRKAELA.Charalts = ZPKAELA_chalts;
HSKAELA_pstring1 = ZRKAELA;
 /* line 348: */
ISKAELA.Idinfo = (*NL(IHKAELA_idinfo));
ISKAELA.Typeno = Tno;
 /* line 349: */
ISKAELA.U = A_UNITE(JSKAELA,mode3,3,HSKAELA_pstring1);
 /* line 350: */
(**NL(VGKAELA_primset)) = ISKAELA ;
JPKAELA = A_UNITE(KSKAELA,mode1,1,(*NL(VGKAELA_primset)));
} 
} 
else
{ 
(*NL(RHKAELA_next)) = DPKAELA_ii;
 /* line 351: */
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &LSKAELA),(Outofdate, &LSKAELA,(NL(GMKAELA_intype)).nonlocals));
MSKAELA_ty = LSKAELA;
 /* line 352: */
 /* line 353: */
NSKAELA = MSKAELA_ty ;
switch ( NSKAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
 /* line 354: */
JPKAELA = A_UNITE(OSKAELA,mode5,5,AUCAELA_typenull);
break;
default: 
PSKAELA.Idinfo = (*NL(IHKAELA_idinfo));
PSKAELA.Typeno = Tno;
 /* line 355: */
PSKAELA.T = MSKAELA_ty;
 /* line 356: */
 /* line 357: */
QSKAELA = A_HEAP(A68_198 ) ;
(*QSKAELA) = PSKAELA ;
JPKAELA = A_UNITE(RSKAELA,mode2,2,QSKAELA);
break;
} 
} 
break;
} 
} 
} 
A_PROC_EXIT(inprimtype);
*ReturnedValue = (JPKAELA);
return;
} 
#undef NL

A_STATIC A68_266 * VSKAELA_inddecs(A68_BOOL * Outofdate, A68_INT  Wherefrom, void *NonLocals)
#define NL(x) (((WSKAELA_inddecs *)NonLocals)->x)
{ 
A68_INT  XSKAELA_nameno;
A68_266 * YSKAELA_decs;
A68_266 ** ZSKAELA_decsptr;
A68_196  ATKAELA;  /* avoid structure result */
A68_196  BTKAELA_type;
A68_249 * CTKAELA_ids;
A68_249 ** DTKAELA_idsptr;
A68_191 * ETKAELA_decids;
A68_191  FTKAELA;  /* collateral clause result */
A68_167  GTKAELA;  /* OPERATORS - mode -> union mode */
A68_167  HTKAELA;  /* OPERATORS - mode -> union mode */
A68_224  ITKAELA;  /* OPERATORS - mode -> union mode */
A68_224  JTKAELA;  /* OPERATORS - mode -> union mode */
A68_185 * KTKAELA_idinfo;
A68_185  LTKAELA;  /* collateral clause result */
A68_VC  MTKAELA;  /* avoid structure result */
A68_186  NTKAELA;  /* OPERATORS - mode -> union mode */
A68_249  OTKAELA;  /* collateral clause result */
A68_208  PTKAELA;  /* OPERATORS - mode -> union mode */
A68_249 * QTKAELA;  /* YIELD */
A68_266  RTKAELA;  /* collateral clause result */
A68_266 * STKAELA;  /* YIELD */
A68_266 * TTKAELA;  /* clause result */
A_PROC_ENTRY(inddecs);
 /* line 361: */
{ 
 /* line 362: */
YSKAELA_decs = FQCAELA_nildecs;
 /* line 363: */
ZSKAELA_decsptr = (&YSKAELA_decs);
 /* line 364: */
for ( ;; )
{ 
 /* line 358: */
 /* line 365: */
if ( !((((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))!=XKCAELA_end)) ) break;
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &ATKAELA),(Outofdate, &ATKAELA,(NL(GMKAELA_intype)).nonlocals));
BTKAELA_type = ATKAELA;
 /* line 366: */
CTKAELA_ids = CQCAELA_nilids;
 /* line 367: */
DTKAELA_idsptr = (&CTKAELA_ids);
 /* line 368: */
for ( ;; )
{ 
 /* line 369: */
if ( !(((XSKAELA_nameno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))!=HJCAELA_zero)) ) break;
(*NL(RHKAELA_next)) = (-1);
 /* line 370: */
ETKAELA_decids = (A_HEAP(A68_191 ));
 /* line 371: */
FTKAELA.Decno = XSKAELA_nameno;
FTKAELA.Origin = Wherefrom;
FTKAELA.Makeint = (A68_223 *)A68_NIL;
FTKAELA.Type = BTKAELA_type;
FTKAELA.Jsource = A_UNITE(GTKAELA,mode5,5,(&PRCAELA_jtrue));
FTKAELA.Jsink = A_UNITE(HTKAELA,mode5,5,(&PRCAELA_jtrue));
FTKAELA.Input = A_UNITE(ITKAELA,mode3,3,DRCAELA_flt);
FTKAELA.Output = A_UNITE(JTKAELA,mode3,3,DRCAELA_flt);
(*ETKAELA_decids) = FTKAELA;
 /* line 372: */
KTKAELA_idinfo = (A_HEAP(A68_185 ));
 /* line 373: */
LTKAELA.Scope = (-1);
LTKAELA.Vnno = 0;
LTKAELA.Text = A68_FALSE;
LTKAELA.Outofdate = A68_FALSE;
LTKAELA.Inscope = A68_TRUE;
LTKAELA.Export = A68_FALSE;
A_CALLPROC(NL(XHKAELA_inid),( &MTKAELA),( &MTKAELA,(NL(XHKAELA_inid)).nonlocals));
LTKAELA.Id = MTKAELA;
LTKAELA.U = A_UNITE(NTKAELA,mode5,5,ETKAELA_decids);
(*KTKAELA_idinfo) = LTKAELA;
 /* line 374: */
 /* line 375: */
OTKAELA.Idinfo = KTKAELA_idinfo;
OTKAELA.Declaration = A68_TRUE;
OTKAELA.Attr = A_UNITE(PTKAELA,mode6,6,MRCAELA_attrnull);
OTKAELA.Rest = CQCAELA_nilids;
QTKAELA = A_HEAP(A68_249 ) ;
(*QTKAELA) = OTKAELA ;
(*DTKAELA_idsptr) = QTKAELA;
 /* line 376: */
 /* line 377: */
DTKAELA_idsptr = (&((*DTKAELA_idsptr)->Rest));
}
 /* line 378: */
RTKAELA.T = BTKAELA_type;
RTKAELA.Ids = CTKAELA_ids;
RTKAELA.Rest = FQCAELA_nildecs;
STKAELA = A_HEAP(A68_266 ) ;
(*STKAELA) = RTKAELA ;
(*ZSKAELA_decsptr) = STKAELA;
 /* line 379: */
 /* line 380: */
ZSKAELA_decsptr = (&((*ZSKAELA_decsptr)->Rest));
}
 /* line 381: */
(*NL(RHKAELA_next)) = (-1);
 /* line 382: */
 /* line 383: */
TTKAELA = YSKAELA_decs;
} 
A_PROC_EXIT(inddecs);
return( TTKAELA );
} 
#undef NL

A_STATIC A68_VOID  VTKAELA_skipattrs(void *NonLocals)
#define NL(x) (((WTKAELA_skipattrs *)NonLocals)->x)
{ 
A68_129  YTKAELA_skipast;   /* proc value of non-global proc */
A68_INT  BUKAELA_attsort;
A68_VC  CUKAELA;  /* avoid structure result */
A68_INT  DUKAELA_nostrings;
A68_INT  EUKAELA;  /* to part of loop */
A68_INT  FUKAELA;  /* loop control */
A68_VC  GUKAELA;  /* avoid structure result */
A_PROC_ENTRY(skipattrs);
{ 
 /* line 387: */
A_CLOSURE( YTKAELA_skipast, ZTKAELA_skipast, AUKAELA_skipast );
(( AUKAELA_skipast * ) ( YTKAELA_skipast.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( AUKAELA_skipast * ) ( YTKAELA_skipast.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( AUKAELA_skipast * ) ( YTKAELA_skipast.nonlocals )) -> UTKAELA_skipattrs = NL(UTKAELA_skipattrs);
 /* line 390: */
BUKAELA_attsort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 391: */
 /* line 392: */
 /* line 393: */
if ( (BUKAELA_attsort==VOCAELA_attid) )
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
} 
else
{ 
 /* line 394: */
if ( (BUKAELA_attsort==WOCAELA_attdata) )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &CUKAELA),( &CUKAELA,(NL(XHKAELA_inid)).nonlocals));
CUKAELA;
 /* line 395: */
DUKAELA_nostrings = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 396: */
EUKAELA = DUKAELA_nostrings;
for ( FUKAELA = 1;
FUKAELA <= EUKAELA;
FUKAELA += 1 )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &GUKAELA),( &GUKAELA,(NL(XHKAELA_inid)).nonlocals));
GUKAELA;
}
 /* line 397: */
} 
else
{ 
 /* line 398: */
 /* line 399: */
if ( (BUKAELA_attsort==XOCAELA_attbracket) )
{ 
A_CALLPROC(NL(UTKAELA_skipattrs),(),((NL(UTKAELA_skipattrs)).nonlocals));
} 
else
{ 
 /* line 400: */
 /* line 401: */
if ( (BUKAELA_attsort==YOCAELA_attstr) )
{ 
 /* line 402: */
A_CALLPROC(YTKAELA_skipast,(),((YTKAELA_skipast).nonlocals));
} 
else
{ 
 /* line 403: */
/*SKIP*/;
} 
} 
} 
} 
} 
A_PROC_EXIT(skipattrs);
return;
} 
#undef NL

A_STATIC A68_264 * MUKAELA_infndec(A68_BOOL * Outofdate, A68_INT  Fnno, A68_BOOL  Export, void *NonLocals)
#define NL(x) (((NUKAELA_infndec *)NonLocals)->x)
{ 
A68_VC  OUKAELA;  /* avoid structure result */
A68_VC  PUKAELA_id;
A68_INT  QUKAELA_sort;
A68_BOOL  RUKAELA_macro;
A68_INT  SUKAELA_mparamno;
A68_262 * TUKAELA_mp;
A68_266 * UUKAELA_inputs;
A68_266 * VUKAELA_outputs;
A68_196  WUKAELA;  /* avoid structure result */
A68_196  XUKAELA_param;
A68_196  YUKAELA;  /* avoid structure result */
A68_196  ZUKAELA_ans;
A68_265 * AVKAELA_fi;
A68_265  BVKAELA;  /* collateral clause result */
A68_264  CVKAELA;  /* collateral clause result */
A68_208  DVKAELA;  /* OPERATORS - mode -> union mode */
A68_264 * EVKAELA;  /* clause result */
A68_264 * FVKAELA;  /* YIELD */
A_PROC_ENTRY(infndec);
 /* line 408: */
{ 
A_CALLPROC(NL(XHKAELA_inid),( &OUKAELA),( &OUKAELA,(NL(XHKAELA_inid)).nonlocals));
PUKAELA_id = OUKAELA;
 /* line 409: */
QUKAELA_sort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
RUKAELA_macro = (A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals))==1);
 /* line 410: */
SUKAELA_mparamno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 411: */
TUKAELA_mp = A_CALLPROC((*NL(HUKAELA_inmparams)),(Fnno, Outofdate, SUKAELA_mparamno),(Fnno, Outofdate, SUKAELA_mparamno,((*NL(HUKAELA_inmparams))).nonlocals));
 /* line 412: */
A_CALLPROC(NL(UTKAELA_skipattrs),(),((NL(UTKAELA_skipattrs)).nonlocals));
 /* line 413: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 414: */
UUKAELA_inputs = A_CALLPROC(NL(USKAELA_inddecs),(Outofdate, ZTCAELA_inputtok),(Outofdate, ZTCAELA_inputtok,(NL(USKAELA_inddecs)).nonlocals));
 /* line 415: */
VUKAELA_outputs = A_CALLPROC(NL(USKAELA_inddecs),(Outofdate, ESCAELA_outputtok),(Outofdate, ESCAELA_outputtok,(NL(USKAELA_inddecs)).nonlocals));
 /* line 416: */
BUDAELA_ddecs_type( UUKAELA_inputs, &WUKAELA );
XUKAELA_param = WUKAELA;
 /* line 417: */
BUDAELA_ddecs_type( VUKAELA_outputs, &YUKAELA );
ZUKAELA_ans = YUKAELA;
 /* line 418: */
 /* line 419: */
AVKAELA_fi = (A_HEAP(A68_265 ));
if ( (Fnno==1) )
{ 
BVKAELA.Scope = (-1);
} 
else
{ 
BVKAELA.Scope = Fnno;
} 
BVKAELA.Vnno = 0;
BVKAELA.Status = EXCAELA_fn_ok;
BVKAELA.Text = A68_FALSE;
BVKAELA.Outofdate = (*Outofdate);
BVKAELA.Import = A68_FALSE;
BVKAELA.Export = Export;
(*AVKAELA_fi) = BVKAELA;
 /* line 420: */
CVKAELA.Fninfo = AVKAELA_fi;
CVKAELA.Sort = QUKAELA_sort;
CVKAELA.Fnno = Fnno;
CVKAELA.Macro = RUKAELA_macro;
CVKAELA.Id = PUKAELA_id;
CVKAELA.Mparamno = SUKAELA_mparamno;
CVKAELA.Mp = TUKAELA_mp;
 /* line 421: */
CVKAELA.Nextmp = (A68_262 **)A68_NIL;
CVKAELA.Attr = A_UNITE(DVKAELA,mode6,6,MRCAELA_attrnull);
CVKAELA.Inputs = UUKAELA_inputs;
CVKAELA.Outputs = VUKAELA_outputs;
CVKAELA.Param = XUKAELA_param;
CVKAELA.Ans = ZUKAELA_ans;
 /* line 422: */
CVKAELA.Num_names = 0;
FVKAELA = A_HEAP(A68_264 ) ;
(*FVKAELA) = CVKAELA ;
EVKAELA = FVKAELA;
} 
A_PROC_EXIT(infndec);
return( EVKAELA );
} 
#undef NL

A_STATIC A68_262 * KVKAELA_anonymous(A68_INT  Fnno, A68_BOOL * Outofdate, A68_INT  Num, void *NonLocals)
#define NL(x) (((LVKAELA_anonymous *)NonLocals)->x)
{ 
A68_196  MVKAELA_type;
A68_262 * NVKAELA_ans;
A68_262 ** OVKAELA_nextptr;
A68_INT  PVKAELA_index;
A68_INT  QVKAELA;  /* to part of loop */
A68_INT  RVKAELA_sort;
A68_INT  SVKAELA_macsort;
A68_264 * TVKAELA_fdec;
A68_263  UVKAELA;  /* clause result */
A68_263  VVKAELA;  /* OPERATORS - mode -> union mode */
A68_VC  WVKAELA;  /* avoid structure result */
A68_INT  XVKAELA_declno;
A68_207 * YVKAELA_macinfo;
A68_207  ZVKAELA;  /* collateral clause result */
A68_208  AWKAELA;  /* OPERATORS - mode -> union mode */
A68_213 * BWKAELA_avar;
A68_208  CWKAELA;  /* OPERATORS - mode -> union mode */
A68_208 * DWKAELA;  /* YIELD */
A68_BOOL * EWKAELA;  /* YIELD */
A68_263  FWKAELA;  /* OPERATORS - mode -> union mode */
A68_175 * GWKAELA_ivar;
A68_170  HWKAELA;  /* OPERATORS - mode -> union mode */
A68_170 * IWKAELA;  /* YIELD */
A68_BOOL * JWKAELA;  /* YIELD */
A68_263  KWKAELA;  /* OPERATORS - mode -> union mode */
A68_196  LWKAELA;  /* avoid structure result */
A68_200 * MWKAELA_tvar;
A68_200  NWKAELA;  /* collateral clause result */
A68_196  OWKAELA;  /* OPERATORS - mode -> union mode */
A68_196 * PWKAELA;  /* YIELD */
A68_BOOL * QWKAELA;  /* YIELD */
A68_263  RWKAELA;  /* OPERATORS - mode -> union mode */
A68_196  SWKAELA;  /* avoid structure result */
A68_241 * TWKAELA_cvar;
A68_241  UWKAELA;  /* collateral clause result */
A68_227  VWKAELA;  /* OPERATORS - mode -> union mode */
A68_227 * WWKAELA;  /* YIELD */
A68_BOOL * XWKAELA;  /* YIELD */
A68_263  YWKAELA;  /* OPERATORS - mode -> union mode */
A68_46  BXKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  CXKAELA;  /* OPERATORS - skip to mode */
A68_263  DXKAELA_value;
A68_262  EXKAELA;  /* collateral clause result */
A68_262 * FXKAELA;  /* YIELD */
A68_262 * GXKAELA;  /* clause result */
 /* line 425: */
{ 
 /* line 426: */
NVKAELA_ans = IQCAELA_nilmparams;
 /* line 427: */
OVKAELA_nextptr = (&NVKAELA_ans);
 /* line 428: */
 /* line 429: */
QVKAELA = Num;
for ( PVKAELA_index = 1;
PVKAELA_index <= QVKAELA;
PVKAELA_index += 1 )
{ 
RVKAELA_sort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 430: */
SVKAELA_macsort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 431: */
 /* line 432: */
 /* line 433: */
if ( (SVKAELA_macsort==YKCAELA_fnstart) )
{ 
TVKAELA_fdec = A_CALLPROC(NL(LUKAELA_infndec),(Outofdate, A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)), A68_FALSE),(Outofdate, A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)), A68_FALSE,(NL(LUKAELA_infndec)).nonlocals));
 /* line 434: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 435: */
 /* line 436: */
UVKAELA = A_UNITE(VVKAELA,mode5,5,TVKAELA_fdec);
} 
else
{ 
A_CALLPROC(NL(XHKAELA_inid),( &WVKAELA),( &WVKAELA,(NL(XHKAELA_inid)).nonlocals));
WVKAELA;
 /* line 437: */
XVKAELA_declno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 438: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 439: */
 /* line 440: */
YVKAELA_macinfo = (A_HEAP(A68_207 ));
ZVKAELA.Id = TTCAOST_nullid;
ZVKAELA.Sort = RVKAELA_sort;
ZVKAELA.Fnno = Fnno;
ZVKAELA.Index = PVKAELA_index;
ZVKAELA.Xno = XVKAELA_declno;
ZVKAELA.Attr = A_UNITE(AWKAELA,mode6,6,MRCAELA_attrnull);
(*YVKAELA_macinfo) = ZVKAELA;
 /* line 441: */
 /* line 442: */
if ( (SVKAELA_macsort==UOCAELA_attrname) )
{ 
BWKAELA_avar = RLDAELA_makeattrvar(YVKAELA_macinfo);
 /* line 443: */
DWKAELA = (&A_VINDEX((*NL(GHKAELA_attrs)),XVKAELA_declno)) ;
(*DWKAELA) = A_UNITE(CWKAELA,mode5,5,BWKAELA_avar);
 /* line 444: */
EWKAELA = (&A_VINDEX((*NL(HHKAELA_oldattrs)),XVKAELA_declno)) ;
(*EWKAELA) = A68_FALSE;
 /* line 445: */
 /* line 446: */
UVKAELA = A_UNITE(FWKAELA,mode1,1,BWKAELA_avar);
} 
else
{ 
 /* line 447: */
if ( (SVKAELA_macsort==UNCAELA_intname) )
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 448: */
GWKAELA_ivar = WLDAELA_makeintvar(YVKAELA_macinfo);
 /* line 449: */
IWKAELA = (&A_VINDEX((*NL(CHKAELA_ints)),XVKAELA_declno)) ;
(*IWKAELA) = A_UNITE(HWKAELA,mode6,6,GWKAELA_ivar);
 /* line 450: */
JWKAELA = (&A_VINDEX((*NL(DHKAELA_oldints)),XVKAELA_declno)) ;
(*JWKAELA) = A68_FALSE;
 /* line 451: */
 /* line 452: */
UVKAELA = A_UNITE(KWKAELA,mode2,2,GWKAELA_ivar);
} 
else
{ 
 /* line 453: */
if ( (SVKAELA_macsort==DLCAELA_typename) )
{ 
A_CALLPROC(NL(YOKAELA_inprimtype),(Outofdate, XVKAELA_declno, 0, TTCAOST_nullid, &LWKAELA),(Outofdate, XVKAELA_declno, 0, TTCAOST_nullid, &LWKAELA,(NL(YOKAELA_inprimtype)).nonlocals));
MVKAELA_type = LWKAELA;
 /* line 454: */
MWKAELA_tvar = (A_HEAP(A68_200 ));
NWKAELA.Tm = YVKAELA_macinfo;
NWKAELA.T = MVKAELA_type;
(*MWKAELA_tvar) = NWKAELA;
 /* line 455: */
PWKAELA = (&A_VINDEX((*NL(AHKAELA_types)),XVKAELA_declno)) ;
(*PWKAELA) = A_UNITE(OWKAELA,mode4,4,MWKAELA_tvar);
 /* line 456: */
QWKAELA = (&A_VINDEX((*NL(BHKAELA_old)),XVKAELA_declno)) ;
(*QWKAELA) = A68_FALSE;
 /* line 457: */
 /* line 458: */
UVKAELA = A_UNITE(RWKAELA,mode3,3,MWKAELA_tvar);
} 
else
{ 
 /* line 459: */
if ( (SVKAELA_macsort==JOCAELA_constname) )
{ 
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 460: */
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &SWKAELA),(Outofdate, &SWKAELA,(NL(GMKAELA_intype)).nonlocals));
MVKAELA_type = SWKAELA;
 /* line 461: */
TWKAELA_cvar = (A_HEAP(A68_241 ));
UWKAELA.Cm = YVKAELA_macinfo;
UWKAELA.T = MVKAELA_type;
(*TWKAELA_cvar) = UWKAELA;
 /* line 462: */
WWKAELA = (&A_VINDEX((*NL(EHKAELA_ctypes)),XVKAELA_declno)) ;
(*WWKAELA) = A_UNITE(VWKAELA,mode17,17,TWKAELA_cvar);
 /* line 463: */
XWKAELA = (&A_VINDEX((*NL(FHKAELA_oldctypes)),XVKAELA_declno)) ;
(*XWKAELA) = A68_FALSE;
 /* line 464: */
 /* line 465: */
UVKAELA = A_UNITE(YWKAELA,mode4,4,TWKAELA_cvar);
} 
else
{ 
A_CALLPROC(NL(Fault),(0, A_HVEC(BXKAELA,AXKAELA,A68_VC )),(0, A_HVEC(BXKAELA,AXKAELA,A68_VC ),(NL(Fault)).nonlocals));
 /* line 466: */
 /* line 467: */
UVKAELA = CXKAELA;
} 
} 
} 
} 
} 
DXKAELA_value = UVKAELA;
 /* line 468: */
 /* line 469: */
EXKAELA.Sort = RVKAELA_sort;
EXKAELA.Mparamno = PVKAELA_index;
EXKAELA.Value = DXKAELA_value;
EXKAELA.Rest = (A68_262 *)A68_NIL;
FXKAELA = A_HEAP(A68_262 ) ;
(*FXKAELA) = EXKAELA ;
(*OVKAELA_nextptr) = FXKAELA;
 /* line 470: */
 /* line 471: */
OVKAELA_nextptr = (&((*OVKAELA_nextptr)->Rest));
}
 /* line 472: */
 /* line 473: */
GXKAELA = NVKAELA_ans;
} 
return( GXKAELA );
} 
#undef NL

A_STATIC A68_VOID  IXKAELA_skiptype(void *NonLocals)
#define NL(x) (((JXKAELA_skiptype *)NonLocals)->x)
{ 
A68_170  KXKAELA_i;
A68_196  LXKAELA_t;
A68_INT  MXKAELA_index;
A68_129  NXKAELA_tst;   /* proc value of non-global proc */
A68_129  QXKAELA_skippalts;   /* proc value of non-global proc */
A68_129  UXKAELA_skipchars;   /* proc value of non-global proc */
A68_INT  BYKAELA_ii;
A68_INT  CYKAELA;  /* clause result */
A68_VC  DYKAELA;  /* avoid structure result */
A68_VC  EYKAELA;  /* avoid structure result */
A_PROC_ENTRY(skiptype);
{ 
 /* line 478: */
 /* line 479: */
A_CLOSURE( NXKAELA_tst, OXKAELA_tst, PXKAELA_tst );
(( PXKAELA_tst * ) ( NXKAELA_tst.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( PXKAELA_tst * ) ( NXKAELA_tst.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( PXKAELA_tst * ) ( NXKAELA_tst.nonlocals )) -> HXKAELA_skiptype = NL(HXKAELA_skiptype);
(( PXKAELA_tst * ) ( NXKAELA_tst.nonlocals )) -> NXKAELA_tst = NXKAELA_tst;
 /* line 484: */
 /* line 485: */
A_CLOSURE( QXKAELA_skippalts, RXKAELA_skippalts, SXKAELA_skippalts );
(( SXKAELA_skippalts * ) ( QXKAELA_skippalts.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( SXKAELA_skippalts * ) ( QXKAELA_skippalts.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( SXKAELA_skippalts * ) ( QXKAELA_skippalts.nonlocals )) -> HXKAELA_skiptype = NL(HXKAELA_skiptype);
(( SXKAELA_skippalts * ) ( QXKAELA_skippalts.nonlocals )) -> XHKAELA_inid = NL(XHKAELA_inid);
(( SXKAELA_skippalts * ) ( QXKAELA_skippalts.nonlocals )) -> QXKAELA_skippalts = QXKAELA_skippalts;
 /* line 490: */
 /* line 491: */
A_CLOSURE( UXKAELA_skipchars, VXKAELA_skipchars, WXKAELA_skipchars );
(( WXKAELA_skipchars * ) ( UXKAELA_skipchars.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( WXKAELA_skipchars * ) ( UXKAELA_skipchars.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( WXKAELA_skipchars * ) ( UXKAELA_skipchars.nonlocals )) -> XHKAELA_inid = NL(XHKAELA_inid);
(( WXKAELA_skipchars * ) ( UXKAELA_skipchars.nonlocals )) -> UXKAELA_skipchars = UXKAELA_skipchars;
 /* line 503: */
{ 
BYKAELA_ii = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 504: */
CYKAELA = (BYKAELA_ii-9);
switch ( CYKAELA )
{ 
case 1: 
 /* line 505: */
/*SKIP*/;
break;
case 2: 
 /* line 506: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
break;
case 3: 
{ 
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 507: */
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
} 
break;
case 4: 
 /* line 508: */
A_CALLPROC(NXKAELA_tst,(),((NXKAELA_tst).nonlocals));
break;
case 5: 
 /* line 509: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
break;
case 6: 
{ 
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
 /* line 510: */
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
} 
break;
default: 
 /* line 511: */
 /* line 512: */
if ( (BYKAELA_ii==KMCAELA_tbracket) )
{ 
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
} 
else
{ 
 /* line 513: */
if ( (BYKAELA_ii==HOCAELA_tstring) )
{ 
{ 
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 514: */
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
} 
} 
else
{ 
 /* line 515: */
 /* line 516: */
if ( (BYKAELA_ii==ROCAELA_tvoid) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 517: */
 /* line 518: */
if ( (BYKAELA_ii==FLCAELA_pidalts) )
{ 
A_CALLPROC(QXKAELA_skippalts,(),((QXKAELA_skippalts).nonlocals));
} 
else
{ 
 /* line 519: */
if ( (BYKAELA_ii==GLCAELA_prange) )
{ 
{ 
A_CALLPROC(NL(XHKAELA_inid),( &DYKAELA),( &DYKAELA,(NL(XHKAELA_inid)).nonlocals));
DYKAELA;
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
 /* line 520: */
A_CALLPROC(NL(CIKAELA_skipinteger),(),((NL(CIKAELA_skipinteger)).nonlocals));
} 
} 
else
{ 
 /* line 521: */
if ( (BYKAELA_ii==XNCAELA_pstring) )
{ 
{ 
A_CALLPROC(NL(XHKAELA_inid),( &EYKAELA),( &EYKAELA,(NL(XHKAELA_inid)).nonlocals));
EYKAELA;
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 522: */
A_CALLPROC(UXKAELA_skipchars,(),((UXKAELA_skipchars).nonlocals));
} 
} 
else
{ 
(*NL(RHKAELA_next)) = BYKAELA_ii;
 /* line 523: */
 /* line 524: */
/*SKIP*/;
} 
} 
} 
} 
} 
} 
break;
} 
} 
} 
A_PROC_EXIT(skiptype);
return;
} 
#undef NL

A_STATIC A68_VOID  HYKAELA_inctype(A68_BOOL * Outofdate, A68_227  *ReturnedValue, void *NonLocals)
#define NL(x) (((IYKAELA_inctype *)NonLocals)->x)
{ 
A68_170  JYKAELA_i;
A68_170  KYKAELA_i2;
A68_INT  LYKAELA_index;
A68_VC  MYKAELA_id;
A68_196  NYKAELA_type;
A68_227  OYKAELA_ct;
A68_185 * PYKAELA_idinfo;
A68_395  RYKAELA_ptype;   /* proc value of non-global proc */
A68_404  XYKAELA_cst;   /* proc value of non-global proc */
A68_405  GZKAELA_calts;   /* proc value of non-global proc */
A68_INT  OZKAELA_ii;
A68_INT  PZKAELA;  /* clause result */
A68_196  QZKAELA;  /* avoid structure result */
A68_196  RZKAELA_pt;
A68_190  SZKAELA;  /* collateral clause result */
A68_227  TZKAELA;  /* clause result */
A68_190 * UZKAELA;  /* YIELD */
A68_227  VZKAELA;  /* OPERATORS - mode -> union mode */
A68_196  WZKAELA;  /* avoid structure result */
A68_196  XZKAELA_pt;
A68_230  YZKAELA;  /* collateral clause result */
A68_170  ZZKAELA;  /* avoid structure result */
A68_230 * AALAELA;  /* YIELD */
A68_227  BALAELA;  /* OPERATORS - mode -> union mode */
A68_196  CALAELA;  /* avoid structure result */
A68_196  DALAELA_pt;
A68_170  EALAELA;  /* avoid structure result */
A68_170  FALAELA_lwb;
A68_170  GALAELA;  /* avoid structure result */
A68_170  HALAELA_upb;
A68_229  IALAELA;  /* collateral clause result */
A68_229 * JALAELA;  /* YIELD */
A68_227  KALAELA;  /* OPERATORS - mode -> union mode */
A68_196  LALAELA;  /* avoid structure result */
A68_196  MALAELA_pt;
A68_190 * NALAELA_pi;
A68_190  OALAELA;  /* collateral clause result */
A68_231  PALAELA;  /* collateral clause result */
A68_227  QALAELA;  /* avoid structure result */
A68_231 * RALAELA;  /* YIELD */
A68_227  SALAELA;  /* OPERATORS - mode -> union mode */
A68_227  TALAELA;  /* OPERATORS - mode -> union mode */
A68_233 * UALAELA;  /* YIELD */
A68_170  VALAELA;  /* avoid structure result */
A68_232  WALAELA;  /* collateral clause result */
A68_227  XALAELA;  /* avoid structure result */
A68_232 * YALAELA;  /* YIELD */
A68_227  ZALAELA;  /* OPERATORS - mode -> union mode */
A68_46  CBLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_227  DBLAELA;  /* OPERATORS - skip to mode */
A68_227  EBLAELA;  /* OPERATORS - mode -> union mode */
A68_234 * FBLAELA;  /* YIELD */
A68_170  GBLAELA;  /* avoid structure result */
A68_238  HBLAELA;  /* collateral clause result */
A68_227  IBLAELA;  /* avoid structure result */
A68_238 * JBLAELA;  /* YIELD */
A68_227  KBLAELA;  /* OPERATORS - mode -> union mode */
A68_239  LBLAELA;  /* collateral clause result */
A68_196  MBLAELA;  /* avoid structure result */
A68_VC  NBLAELA;  /* avoid structure result */
A68_INT  OBLAELA;  /* YIELD */
A68_239 * PBLAELA;  /* YIELD */
A68_227  QBLAELA;  /* OPERATORS - mode -> union mode */
A68_190 * RBLAELA_pi;
A68_190  SBLAELA;  /* collateral clause result */
A68_196  TBLAELA;  /* avoid structure result */
A68_215 * UBLAELA_strings;
A68_238  VBLAELA;  /* collateral clause result */
A68_170  WBLAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XBLAELA;  /* YIELD */
A68_227  YBLAELA;  /* OPERATORS - mode -> union mode */
A68_238 * ZBLAELA;  /* YIELD */
A68_227  ACLAELA;  /* OPERATORS - mode -> union mode */
A68_196  BCLAELA;  /* avoid structure result */
A68_VC  CCLAELA;  /* avoid structure result */
A68_240  DCLAELA;  /* collateral clause result */
A68_INT  ECLAELA;  /* YIELD */
A68_VC  FCLAELA;  /* avoid structure result */
A68_INT  GCLAELA;  /* YIELD */
A68_240 * HCLAELA;  /* YIELD */
A68_227  ICLAELA;  /* OPERATORS - mode -> union mode */
A68_227  JCLAELA;  /* avoid structure result */
A68_170  KCLAELA;  /* avoid structure result */
A68_243  LCLAELA;  /* collateral clause result */
A68_243 * MCLAELA;  /* YIELD */
A68_227  NCLAELA;  /* OPERATORS - mode -> union mode */
A68_227  OCLAELA;  /* avoid structure result */
A68_170  PCLAELA;  /* avoid structure result */
A68_244  QCLAELA;  /* collateral clause result */
A68_170  RCLAELA;  /* avoid structure result */
A68_244 * SCLAELA;  /* YIELD */
A68_227  TCLAELA;  /* OPERATORS - mode -> union mode */
A68_VC  UCLAELA;  /* avoid structure result */
A68_170  VCLAELA;  /* avoid structure result */
A68_170  WCLAELA;  /* avoid structure result */
A68_179 * XCLAELA_iv;
A68_179  YCLAELA;  /* collateral clause result */
A68_170  ZCLAELA;  /* OPERATORS - mode -> union mode */
A68_187 * ADLAELA_itd;
A68_170  BDLAELA;  /* OPERATORS - mode -> union mode */
A68_170 * CDLAELA;  /* YIELD */
A68_185  DDLAELA;  /* collateral clause result */
A68_186  EDLAELA;  /* OPERATORS - mode -> union mode */
A68_185 * FDLAELA;  /* YIELD */
A68_170  GDLAELA;  /* OPERATORS - mode -> union mode */
A68_170 * HDLAELA;  /* YIELD */
A68_246  IDLAELA;  /* collateral clause result */
A68_249  JDLAELA;  /* collateral clause result */
A68_208  KDLAELA;  /* OPERATORS - mode -> union mode */
A68_249 * LDLAELA;  /* YIELD */
A68_227  MDLAELA;  /* avoid structure result */
A68_246 * NDLAELA;  /* YIELD */
A68_227  ODLAELA;  /* OPERATORS - mode -> union mode */
A68_170  PDLAELA;  /* avoid structure result */
A68_227  QDLAELA;  /* avoid structure result */
A68_245  RDLAELA;  /* collateral clause result */
A68_227  SDLAELA;  /* avoid structure result */
A68_245 * TDLAELA;  /* YIELD */
A68_227  UDLAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  VDLAELA;  /* optbool result */
A68_227  WDLAELA;  /* avoid structure result */
A68_227  XDLAELA;  /* OPERATORS - mode -> union mode */
A68_236 * YDLAELA;  /* YIELD */
A68_237 * ZDLAELA_cq;
A68_196  AELAELA;  /* avoid structure result */
A68_196 * BELAELA;  /* YIELD */
A68_227  CELAELA;  /* OPERATORS - mode -> union mode */
A68_235 * DELAELA_ct;
A68_196  EELAELA;  /* avoid structure result */
A68_196 * FELAELA;  /* YIELD */
A68_227  GELAELA;  /* OPERATORS - mode -> union mode */
A68_227  HELAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  IELAELA_string;
A68_INT  JELAELA_sort;
A68_227  KELAELA;  /* avoid structure result */
A68_247  LELAELA;  /* collateral clause result */
A68_227  MELAELA;  /* avoid structure result */
A68_247 * NELAELA;  /* YIELD */
A68_227  OELAELA;  /* OPERATORS - mode -> union mode */
A68_227  PELAELA;  /* avoid structure result */
A68_248  QELAELA;  /* collateral clause result */
A68_208  RELAELA;  /* OPERATORS - mode -> union mode */
A68_248 * SELAELA;  /* YIELD */
A68_227  TELAELA;  /* OPERATORS - mode -> union mode */
A68_46  WELAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_227  XELAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(inctype);
 /* line 529: */
{ 
 /* line 530: */
 /* line 532: */
 /* line 525: */
A_CLOSURE( RYKAELA_ptype, SYKAELA_ptype, TYKAELA_ptype );
(( TYKAELA_ptype * ) ( RYKAELA_ptype.nonlocals )) -> LYKAELA_index = (&LYKAELA_index);
(( TYKAELA_ptype * ) ( RYKAELA_ptype.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( TYKAELA_ptype * ) ( RYKAELA_ptype.nonlocals )) -> BHKAELA_old = NL(BHKAELA_old);
(( TYKAELA_ptype * ) ( RYKAELA_ptype.nonlocals )) -> AHKAELA_types = NL(AHKAELA_types);
 /* line 538: */
A_CLOSURE( XYKAELA_cst, YYKAELA_cst, ZYKAELA_cst );
(( ZYKAELA_cst * ) ( XYKAELA_cst.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( ZYKAELA_cst * ) ( XYKAELA_cst.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( ZYKAELA_cst * ) ( XYKAELA_cst.nonlocals )) -> GYKAELA_inctype = NL(GYKAELA_inctype);
(( ZYKAELA_cst * ) ( XYKAELA_cst.nonlocals )) -> XYKAELA_cst = XYKAELA_cst;
 /* line 545: */
A_CLOSURE( GZKAELA_calts, HZKAELA_calts, IZKAELA_calts );
(( IZKAELA_calts * ) ( GZKAELA_calts.nonlocals )) -> RHKAELA_next = NL(RHKAELA_next);
(( IZKAELA_calts * ) ( GZKAELA_calts.nonlocals )) -> SHKAELA_in = NL(SHKAELA_in);
(( IZKAELA_calts * ) ( GZKAELA_calts.nonlocals )) -> GYKAELA_inctype = NL(GYKAELA_inctype);
(( IZKAELA_calts * ) ( GZKAELA_calts.nonlocals )) -> GZKAELA_calts = GZKAELA_calts;
 /* line 552: */
{ 
OZKAELA_ii = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 553: */
PZKAELA = (OZKAELA_ii-15);
switch ( PZKAELA )
{ 
case 1: 
{ 
A_CALLPROC(RYKAELA_ptype,(Outofdate, &QZKAELA),(Outofdate, &QZKAELA,(RYKAELA_ptype).nonlocals));
RZKAELA_pt = QZKAELA;
 /* line 554: */
SZKAELA.Type = RZKAELA_pt;
 /* line 555: */
SZKAELA.Index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 556: */
UZKAELA = A_HEAP(A68_190 ) ;
(*UZKAELA) = SZKAELA ;
TZKAELA = A_UNITE(VZKAELA,mode4,4,UZKAELA);
} 
break;
case 2: 
{ 
A_CALLPROC(RYKAELA_ptype,(Outofdate, &WZKAELA),(Outofdate, &WZKAELA,(RYKAELA_ptype).nonlocals));
XZKAELA_pt = WZKAELA;
 /* line 557: */
YZKAELA.T = XZKAELA_pt;
 /* line 558: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &ZZKAELA),(Outofdate, &ZZKAELA,(NL(MIKAELA_ininteger)).nonlocals));
YZKAELA.Index = ZZKAELA;
 /* line 559: */
AALAELA = A_HEAP(A68_230 ) ;
(*AALAELA) = YZKAELA ;
TZKAELA = A_UNITE(BALAELA,mode3,3,AALAELA);
} 
break;
case 3: 
{ 
A_CALLPROC(RYKAELA_ptype,(Outofdate, &CALAELA),(Outofdate, &CALAELA,(RYKAELA_ptype).nonlocals));
DALAELA_pt = CALAELA;
 /* line 560: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &EALAELA),(Outofdate, &EALAELA,(NL(MIKAELA_ininteger)).nonlocals));
FALAELA_lwb = EALAELA;
 /* line 561: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &GALAELA),(Outofdate, &GALAELA,(NL(MIKAELA_ininteger)).nonlocals));
HALAELA_upb = GALAELA;
 /* line 562: */
IALAELA.T = DALAELA_pt;
IALAELA.Lwb = FALAELA_lwb;
 /* line 563: */
IALAELA.Upb = HALAELA_upb;
 /* line 564: */
JALAELA = A_HEAP(A68_229 ) ;
(*JALAELA) = IALAELA ;
TZKAELA = A_UNITE(KALAELA,mode2,2,JALAELA);
} 
break;
case 4: 
{ 
A_CALLPROC(RYKAELA_ptype,(Outofdate, &LALAELA),(Outofdate, &LALAELA,(RYKAELA_ptype).nonlocals));
MALAELA_pt = LALAELA;
 /* line 565: */
NALAELA_pi = (A_HEAP(A68_190 ));
OALAELA.Type = MALAELA_pt;
OALAELA.Index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
(*NALAELA_pi) = OALAELA;
 /* line 566: */
PALAELA.P = NALAELA_pi;
 /* line 567: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &QALAELA),(Outofdate, &QALAELA,(NL(GYKAELA_inctype)).nonlocals));
PALAELA.Ct = QALAELA;
 /* line 568: */
RALAELA = A_HEAP(A68_231 ) ;
(*RALAELA) = PALAELA ;
TZKAELA = A_UNITE(SALAELA,mode5,5,RALAELA);
} 
break;
case 5: 
 /* line 569: */
UALAELA = A_CALLPROC(XYKAELA_cst,(Outofdate),(Outofdate,(XYKAELA_cst).nonlocals)) ;
TZKAELA = A_UNITE(TALAELA,mode7,7,UALAELA);
break;
case 6: 
{ 
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &VALAELA),(Outofdate, &VALAELA,(NL(MIKAELA_ininteger)).nonlocals));
JYKAELA_i = VALAELA;
 /* line 570: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &XALAELA),(Outofdate, &XALAELA,(NL(GYKAELA_inctype)).nonlocals));
WALAELA.Ct = XALAELA;
 /* line 571: */
WALAELA.Size = JYKAELA_i;
 /* line 572: */
YALAELA = A_HEAP(A68_232 ) ;
(*YALAELA) = WALAELA ;
TZKAELA = A_UNITE(ZALAELA,mode6,6,YALAELA);
} 
break;
case 7: 
{ 
A_CALLPROC(NL(Fault),(0, A_HVEC(CBLAELA,BBLAELA,A68_VC )),(0, A_HVEC(CBLAELA,BBLAELA,A68_VC ),(NL(Fault)).nonlocals));
 /* line 573: */
TZKAELA = DBLAELA;
} 
break;
case 8: 
 /* line 574: */
FBLAELA = A_CALLPROC(GZKAELA_calts,(Outofdate),(Outofdate,(GZKAELA_calts).nonlocals)) ;
TZKAELA = A_UNITE(EBLAELA,mode8,8,FBLAELA);
break;
default: 
 /* line 575: */
switch ( ((OZKAELA_ii-AOCAELA_cstring)+1) )
{ 
case 1: 
{ 
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &GBLAELA),(Outofdate, &GBLAELA,(NL(MIKAELA_ininteger)).nonlocals));
JYKAELA_i = GBLAELA;
 /* line 576: */
HBLAELA.Size = JYKAELA_i;
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &IBLAELA),(Outofdate, &IBLAELA,(NL(GYKAELA_inctype)).nonlocals));
HBLAELA.Ct = IBLAELA;
 /* line 577: */
HBLAELA.Strings = NQCAELA_nilstringlist;
 /* line 578: */
JBLAELA = A_HEAP(A68_238 ) ;
(*JBLAELA) = HBLAELA ;
TZKAELA = A_UNITE(KBLAELA,mode14,14,JBLAELA);
} 
break;
case 2: 
A_CALLPROC(RYKAELA_ptype,(Outofdate, &MBLAELA),(Outofdate, &MBLAELA,(RYKAELA_ptype).nonlocals));
LBLAELA.T = MBLAELA;
A_CALLPROC(NL(XHKAELA_inid),( &NBLAELA),( &NBLAELA,(NL(XHKAELA_inid)).nonlocals));
OBLAELA = 1 ;
LBLAELA.Char = (*(&A_VINDEX(NBLAELA,OBLAELA)));
 /* line 579: */
PBLAELA = A_HEAP(A68_239 ) ;
(*PBLAELA) = LBLAELA ;
TZKAELA = A_UNITE(QBLAELA,mode15,15,PBLAELA);
break;
case 3: 
{ 
RBLAELA_pi = (A_HEAP(A68_190 ));
A_CALLPROC(RYKAELA_ptype,(Outofdate, &TBLAELA),(Outofdate, &TBLAELA,(RYKAELA_ptype).nonlocals));
SBLAELA.Type = TBLAELA;
SBLAELA.Index = (-1);
(*RBLAELA_pi) = SBLAELA;
 /* line 580: */
UBLAELA_strings = A_CALLPROC(NL(MKKAELA_instrings),(),((NL(MKKAELA_instrings)).nonlocals));
 /* line 581: */
XBLAELA = WKKAELA_length(UBLAELA_strings) ;
VBLAELA.Size = A_UNITE(WBLAELA,mode1,1,XBLAELA);
VBLAELA.Ct = A_UNITE(YBLAELA,mode4,4,RBLAELA_pi);
 /* line 582: */
VBLAELA.Strings = UBLAELA_strings;
 /* line 583: */
ZBLAELA = A_HEAP(A68_238 ) ;
(*ZBLAELA) = VBLAELA ;
TZKAELA = A_UNITE(ACLAELA,mode14,14,ZBLAELA);
} 
break;
case 4: 
{ 
A_CALLPROC(RYKAELA_ptype,(Outofdate, &BCLAELA),(Outofdate, &BCLAELA,(RYKAELA_ptype).nonlocals));
NYKAELA_type = BCLAELA;
A_CALLPROC(NL(XHKAELA_inid),( &CCLAELA),( &CCLAELA,(NL(XHKAELA_inid)).nonlocals));
MYKAELA_id = CCLAELA;
 /* line 584: */
DCLAELA.T = NYKAELA_type;
ECLAELA = 1 ;
DCLAELA.Lwb = (*(&A_VINDEX(MYKAELA_id,ECLAELA)));
 /* line 585: */
A_CALLPROC(NL(XHKAELA_inid),( &FCLAELA),( &FCLAELA,(NL(XHKAELA_inid)).nonlocals));
GCLAELA = 1 ;
DCLAELA.Upb = (*(&A_VINDEX(FCLAELA,GCLAELA)));
 /* line 586: */
HCLAELA = A_HEAP(A68_240 ) ;
(*HCLAELA) = DCLAELA ;
TZKAELA = A_UNITE(ICLAELA,mode16,16,HCLAELA);
} 
break;
default: 
 /* line 587: */
switch ( ((OZKAELA_ii-ANCAELA_cindex)+1) )
{ 
case 1: 
{ 
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &JCLAELA),(Outofdate, &JCLAELA,(NL(GYKAELA_inctype)).nonlocals));
OYKAELA_ct = JCLAELA;
 /* line 588: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &KCLAELA),(Outofdate, &KCLAELA,(NL(MIKAELA_ininteger)).nonlocals));
JYKAELA_i = KCLAELA;
 /* line 589: */
LCLAELA.Ct = OYKAELA_ct;
 /* line 590: */
LCLAELA.Index = JYKAELA_i;
 /* line 591: */
MCLAELA = A_HEAP(A68_243 ) ;
(*MCLAELA) = LCLAELA ;
TZKAELA = A_UNITE(NCLAELA,mode19,19,MCLAELA);
} 
break;
case 2: 
{ 
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &OCLAELA),(Outofdate, &OCLAELA,(NL(GYKAELA_inctype)).nonlocals));
OYKAELA_ct = OCLAELA;
 /* line 592: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &PCLAELA),(Outofdate, &PCLAELA,(NL(MIKAELA_ininteger)).nonlocals));
JYKAELA_i = PCLAELA;
 /* line 593: */
QCLAELA.Ct = OYKAELA_ct;
QCLAELA.Lwb = JYKAELA_i;
 /* line 594: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &RCLAELA),(Outofdate, &RCLAELA,(NL(MIKAELA_ininteger)).nonlocals));
QCLAELA.Upb = RCLAELA;
 /* line 595: */
SCLAELA = A_HEAP(A68_244 ) ;
(*SCLAELA) = QCLAELA ;
TZKAELA = A_UNITE(TCLAELA,mode20,20,SCLAELA);
} 
break;
case 3: 
{ 
LYKAELA_index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 596: */
A_CALLPROC(NL(XHKAELA_inid),( &UCLAELA),( &UCLAELA,(NL(XHKAELA_inid)).nonlocals));
MYKAELA_id = UCLAELA;
 /* line 597: */
A_CALLPROC(NL(UTKAELA_skipattrs),(),((NL(UTKAELA_skipattrs)).nonlocals));
 /* line 598: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &VCLAELA),(Outofdate, &VCLAELA,(NL(MIKAELA_ininteger)).nonlocals));
JYKAELA_i = VCLAELA;
 /* line 599: */
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &WCLAELA),(Outofdate, &WCLAELA,(NL(MIKAELA_ininteger)).nonlocals));
KYKAELA_i2 = WCLAELA;
 /* line 600: */
XCLAELA_iv = (A_HEAP(A68_179 ));
YCLAELA.Varmultno = LYKAELA_index;
YCLAELA.Lwb = JYKAELA_i;
YCLAELA.Upb = KYKAELA_i2;
YCLAELA.Index = A_UNITE(ZCLAELA,mode4,4,DRCAELA_flt);
(*XCLAELA_iv) = YCLAELA;
 /* line 601: */
ADLAELA_itd = (A_HEAP(A68_187 ));
 /* line 602: */
CDLAELA = (&(ADLAELA_itd->I)) ;
(*CDLAELA) = A_UNITE(BDLAELA,mode10,10,XCLAELA_iv);
 /* line 603: */
 /* line 604: */
DDLAELA.Scope = (-1);
DDLAELA.Vnno = (-1);
DDLAELA.Text = A68_FALSE;
DDLAELA.Outofdate = A68_FALSE;
DDLAELA.Inscope = A68_TRUE;
DDLAELA.Export = A68_FALSE;
DDLAELA.Id = MYKAELA_id;
DDLAELA.U = A_UNITE(EDLAELA,mode1,1,(*ADLAELA_itd));
FDLAELA = A_HEAP(A68_185 ) ;
(*FDLAELA) = DDLAELA ;
PYKAELA_idinfo = FDLAELA;
 /* line 605: */
HDLAELA = (&A_VINDEX((*NL(CHKAELA_ints)),LYKAELA_index)) ;
(*HDLAELA) = A_UNITE(GDLAELA,mode10,10,XCLAELA_iv);
 /* line 606: */
JDLAELA.Idinfo = PYKAELA_idinfo;
JDLAELA.Declaration = A68_TRUE;
JDLAELA.Attr = A_UNITE(KDLAELA,mode6,6,MRCAELA_attrnull);
JDLAELA.Rest = (A68_249 *)A68_NIL;
 /* line 607: */
LDLAELA = A_HEAP(A68_249 ) ;
(*LDLAELA) = JDLAELA ;
IDLAELA.Ids = LDLAELA;
 /* line 608: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &MDLAELA),(Outofdate, &MDLAELA,(NL(GYKAELA_inctype)).nonlocals));
IDLAELA.Ct = MDLAELA;
 /* line 609: */
NDLAELA = A_HEAP(A68_246 ) ;
(*NDLAELA) = IDLAELA ;
TZKAELA = A_UNITE(ODLAELA,mode22,22,NDLAELA);
} 
break;
case 4: 
{ 
A_CALLPROC(NL(MIKAELA_ininteger),(Outofdate, &PDLAELA),(Outofdate, &PDLAELA,(NL(MIKAELA_ininteger)).nonlocals));
JYKAELA_i = PDLAELA;
 /* line 610: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &QDLAELA),(Outofdate, &QDLAELA,(NL(GYKAELA_inctype)).nonlocals));
OYKAELA_ct = QDLAELA;
 /* line 611: */
RDLAELA.Test = JYKAELA_i;
RDLAELA.Then = OYKAELA_ct;
 /* line 612: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &SDLAELA),(Outofdate, &SDLAELA,(NL(GYKAELA_inctype)).nonlocals));
RDLAELA.Else = SDLAELA;
 /* line 613: */
TDLAELA = A_HEAP(A68_245 ) ;
(*TDLAELA) = RDLAELA ;
TZKAELA = A_UNITE(UDLAELA,mode21,21,TDLAELA);
} 
break;
default: 
 /* line 614: */
if ( (OZKAELA_ii==IOCAELA_cnamed) )
{ 
LYKAELA_index = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 615: */
VDLAELA = (*Outofdate);
if ( ! VDLAELA )
{VDLAELA = (*(&A_VINDEX((*NL(FHKAELA_oldctypes)),LYKAELA_index)));
}
(*Outofdate) = VDLAELA;
 /* line 616: */
 /* line 617: */
TZKAELA = (*(&A_VINDEX((*NL(EHKAELA_ctypes)),LYKAELA_index)));
} 
else
{ 
 /* line 618: */
if ( (OZKAELA_ii==LMCAELA_cbracket) )
{ 
 /* line 619: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &WDLAELA),(Outofdate, &WDLAELA,(NL(GYKAELA_inctype)).nonlocals));
YDLAELA = NKDAELA_makecbracket(WDLAELA) ;
TZKAELA = A_UNITE(XDLAELA,mode12,12,YDLAELA);
} 
else
{ 
 /* line 620: */
if ( (OZKAELA_ii==NNCAELA_cquery) )
{ 
ZDLAELA_cq = (A_HEAP(A68_237 ));
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &AELAELA),(Outofdate, &AELAELA,(NL(GMKAELA_intype)).nonlocals));
BELAELA = (&(ZDLAELA_cq->Querytype)) ;
(*BELAELA) = AELAELA;
 /* line 621: */
TZKAELA = A_UNITE(CELAELA,mode13,13,ZDLAELA_cq);
} 
else
{ 
 /* line 622: */
if ( (OZKAELA_ii==MNCAELA_c_type) )
{ 
DELAELA_ct = (A_HEAP(A68_235 ));
A_CALLPROC(NL(GMKAELA_intype),(Outofdate, &EELAELA),(Outofdate, &EELAELA,(NL(GMKAELA_intype)).nonlocals));
FELAELA = (&(DELAELA_ct->Ct)) ;
(*FELAELA) = EELAELA;
 /* line 623: */
TZKAELA = A_UNITE(GELAELA,mode9,9,DELAELA_ct);
} 
else
{ 
 /* line 624: */
 /* line 625: */
if ( (OZKAELA_ii==LOCAELA_cvoid) )
{ 
TZKAELA = A_UNITE(HELAELA,mode18,18,ORCAELA_constvoid);
} 
else
{ 
 /* line 626: */
if ( (OZKAELA_ii==AMCAELA_cconc) )
{ 
IELAELA_string = (A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals))==1);
JELAELA_sort = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 627: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &KELAELA),(Outofdate, &KELAELA,(NL(GYKAELA_inctype)).nonlocals));
OYKAELA_ct = KELAELA;
 /* line 628: */
LELAELA.String = IELAELA_string;
LELAELA.Sort = JELAELA_sort;
LELAELA.Left = OYKAELA_ct;
 /* line 629: */
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &MELAELA),(Outofdate, &MELAELA,(NL(GYKAELA_inctype)).nonlocals));
LELAELA.Right = MELAELA;
NELAELA = A_HEAP(A68_247 ) ;
(*NELAELA) = LELAELA ;
TZKAELA = A_UNITE(OELAELA,mode23,23,NELAELA);
} 
else
{ 
 /* line 630: */
if ( (OZKAELA_ii==BMCAELA_cattr) )
{ 
A_CALLPROC(NL(GYKAELA_inctype),(Outofdate, &PELAELA),(Outofdate, &PELAELA,(NL(GYKAELA_inctype)).nonlocals));
OYKAELA_ct = PELAELA;
 /* line 631: */
A_CALLPROC(NL(UTKAELA_skipattrs),(),((NL(UTKAELA_skipattrs)).nonlocals));
 /* line 632: */
QELAELA.Ct = OYKAELA_ct;
 /* line 633: */
QELAELA.Attr = A_UNITE(RELAELA,mode6,6,MRCAELA_attrnull);
SELAELA = A_HEAP(A68_248 ) ;
(*SELAELA) = QELAELA ;
TZKAELA = A_UNITE(TELAELA,mode24,24,SELAELA);
} 
else
{ 
A_CALLPROC(NL(Fault),(0, A_HVEC(WELAELA,VELAELA,A68_VC )),(0, A_HVEC(WELAELA,VELAELA,A68_VC ),(NL(Fault)).nonlocals));
 /* line 634: */
 /* line 635: */
TZKAELA = XELAELA;
} 
} 
} 
} 
} 
} 
} 
break;
} 
break;
} 
break;
} 
} 
} 
A_PROC_EXIT(inctype);
*ReturnedValue = (TZKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AFLAELA_inexttypes(A68_INT  Notypes, void *NonLocals)
#define NL(x) (((BFLAELA_inexttypes *)NonLocals)->x)
{ 
A68_INT  CFLAELA_typeno;
A68_INT  DFLAELA_vnno;
A68_VC  EFLAELA_id;
A68_185  FFLAELA_idinfo;
A68_407  HFLAELA_generator;   /* proc value of non-global proc */
A68_285  MFLAELA;  /* avoid structure result */
A68_399  OFLAELA_generator;   /* proc value of non-global proc */
A68_54  TFLAELA;  /* avoid structure result */
A68_VC  UFLAELA;  /* avoid structure result */
A68_BOOL  VFLAELA;  /* clause result */
A68_185  WFLAELA;  /* avoid structure result */
A68_186  XFLAELA;  /* united object - for case conformity */
A68_188  YFLAELA_t;
A68_196 * ZFLAELA;  /* YIELD */
A68_BOOL  AGLAELA;  /* optbool result */
A68_BOOL * BGLAELA;  /* YIELD */
A68_46  EGLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(inexttypes);
 /* line 641: */
{ 
 /* line 642: */
A_CLOSURE( HFLAELA_generator, IFLAELA_generator, JFLAELA_generator );
(( JFLAELA_generator * ) ( HFLAELA_generator.nonlocals )) -> Notypes = Notypes;
A_CALLPROC(HFLAELA_generator,(A68_FALSE, &MFLAELA),(A68_FALSE, &MFLAELA,(HFLAELA_generator).nonlocals));
(*NL(AHKAELA_types)) = MFLAELA;
 /* line 643: */
A_CLOSURE( OFLAELA_generator, PFLAELA_generator, QFLAELA_generator );
(( QFLAELA_generator * ) ( OFLAELA_generator.nonlocals )) -> Notypes = Notypes;
A_CALLPROC(OFLAELA_generator,(A68_FALSE, &TFLAELA),(A68_FALSE, &TFLAELA,(OFLAELA_generator).nonlocals));
(*NL(BHKAELA_old)) = TFLAELA;
 /* line 644: */
for ( ;; )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &UFLAELA),( &UFLAELA,(NL(XHKAELA_inid)).nonlocals));
EFLAELA_id = UFLAELA;
 /* line 645: */
VFLAELA = A_VC_NE(EFLAELA_id,TTCAOST_nullid);
if ( !VFLAELA ) break;
CFLAELA_typeno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
DFLAELA_vnno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 646: */
A_CALLPROC(NL(Findid),(EFLAELA_id, &WFLAELA),(EFLAELA_id, &WFLAELA,(NL(Findid)).nonlocals));
FFLAELA_idinfo = WFLAELA;
 /* line 647: */
 /* line 648: */
XFLAELA = (*(&((&FFLAELA_idinfo)->U))) ;
switch ( XFLAELA.mode )
{ 
case 2: /* STRUCT(MODE196)  */
YFLAELA_t = (XFLAELA.data.mode2);
{ 
ZFLAELA = (&A_VINDEX((*NL(AHKAELA_types)),CFLAELA_typeno)) ;
(*ZFLAELA) = YFLAELA_t.T;
 /* line 649: */
 /* line 650: */
AGLAELA = (*(&((&FFLAELA_idinfo)->Outofdate)));
if ( ! AGLAELA )
{ /* line 651: */
AGLAELA = ((*(&((&FFLAELA_idinfo)->Vnno)))!=DFLAELA_vnno);
}
 /* line 652: */
BGLAELA = (&A_VINDEX((*NL(BHKAELA_old)),CFLAELA_typeno)) ;
(*BGLAELA) = AGLAELA;
} 
break;
default: 
 /* line 653: */
A_CALLPROC(NL(Fault),(0, A_HVEC(EGLAELA,DGLAELA,A68_VC )),(0, A_HVEC(EGLAELA,DGLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
 /* line 654: */
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
 /* line 655: */
 /* line 656: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
}
 /* line 657: */
} 
A_PROC_EXIT(inexttypes);
return;
} 
#undef NL

A_STATIC A68_VOID  HGLAELA_inextints(A68_INT  Noints, void *NonLocals)
#define NL(x) (((IGLAELA_inextints *)NonLocals)->x)
{ 
A68_INT  JGLAELA_intno;
A68_INT  KGLAELA_vnno;
A68_VC  LGLAELA_id;
A68_185  MGLAELA_idinfo;
A68_408  OGLAELA_generator;   /* proc value of non-global proc */
A68_385  TGLAELA;  /* avoid structure result */
A68_399  VGLAELA_generator;   /* proc value of non-global proc */
A68_54  AHLAELA;  /* avoid structure result */
A68_VC  BHLAELA;  /* avoid structure result */
A68_BOOL  CHLAELA;  /* clause result */
A68_185  DHLAELA;  /* avoid structure result */
A68_186  EHLAELA;  /* united object - for case conformity */
A68_187  FHLAELA_i;
A68_170 * GHLAELA;  /* YIELD */
A68_BOOL  HHLAELA;  /* optbool result */
A68_BOOL * IHLAELA;  /* YIELD */
A68_46  LHLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(inextints);
 /* line 660: */
{ 
 /* line 661: */
A_CLOSURE( OGLAELA_generator, PGLAELA_generator, QGLAELA_generator );
(( QGLAELA_generator * ) ( OGLAELA_generator.nonlocals )) -> Noints = Noints;
A_CALLPROC(OGLAELA_generator,(A68_FALSE, &TGLAELA),(A68_FALSE, &TGLAELA,(OGLAELA_generator).nonlocals));
(*NL(CHKAELA_ints)) = TGLAELA;
 /* line 662: */
A_CLOSURE( VGLAELA_generator, WGLAELA_generator, XGLAELA_generator );
(( XGLAELA_generator * ) ( VGLAELA_generator.nonlocals )) -> Noints = Noints;
A_CALLPROC(VGLAELA_generator,(A68_FALSE, &AHLAELA),(A68_FALSE, &AHLAELA,(VGLAELA_generator).nonlocals));
(*NL(DHKAELA_oldints)) = AHLAELA;
 /* line 663: */
for ( ;; )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &BHLAELA),( &BHLAELA,(NL(XHKAELA_inid)).nonlocals));
LGLAELA_id = BHLAELA;
 /* line 664: */
CHLAELA = A_VC_NE(LGLAELA_id,TTCAOST_nullid);
if ( !CHLAELA ) break;
JGLAELA_intno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
KGLAELA_vnno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 665: */
A_CALLPROC(NL(Findid),(LGLAELA_id, &DHLAELA),(LGLAELA_id, &DHLAELA,(NL(Findid)).nonlocals));
MGLAELA_idinfo = DHLAELA;
 /* line 666: */
 /* line 667: */
EHLAELA = (*(&((&MGLAELA_idinfo)->U))) ;
switch ( EHLAELA.mode )
{ 
case 1: /* STRUCT(MODE170)  */
FHLAELA_i = (EHLAELA.data.mode1);
{ 
GHLAELA = (&A_VINDEX((*NL(CHKAELA_ints)),JGLAELA_intno)) ;
(*GHLAELA) = FHLAELA_i.I;
 /* line 668: */
 /* line 669: */
HHLAELA = (*(&((&MGLAELA_idinfo)->Outofdate)));
if ( ! HHLAELA )
{ /* line 670: */
HHLAELA = ((*(&((&MGLAELA_idinfo)->Vnno)))!=KGLAELA_vnno);
}
 /* line 671: */
IHLAELA = (&A_VINDEX((*NL(DHKAELA_oldints)),JGLAELA_intno)) ;
(*IHLAELA) = HHLAELA;
} 
break;
default: 
 /* line 672: */
 /* line 673: */
A_CALLPROC(NL(Fault),(0, A_HVEC(LHLAELA,KHLAELA,A68_VC )),(0, A_HVEC(LHLAELA,KHLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
}
 /* line 674: */
} 
A_PROC_EXIT(inextints);
return;
} 
#undef NL

A_STATIC A68_VOID  OHLAELA_inextattrs(A68_INT  Noattrs, void *NonLocals)
#define NL(x) (((PHLAELA_inextattrs *)NonLocals)->x)
{ 
A68_INT  QHLAELA_attrno;
A68_INT  RHLAELA_vnno;
A68_VC  SHLAELA_id;
A68_185  THLAELA_idinfo;
A68_409  VHLAELA_generator;   /* proc value of non-global proc */
A68_387  AILAELA;  /* avoid structure result */
A68_399  CILAELA_generator;   /* proc value of non-global proc */
A68_54  HILAELA;  /* avoid structure result */
A68_VC  IILAELA;  /* avoid structure result */
A68_BOOL  JILAELA;  /* clause result */
A68_185  KILAELA;  /* avoid structure result */
A68_186  LILAELA;  /* united object - for case conformity */
A68_192  MILAELA_ad;
A68_208 * NILAELA;  /* YIELD */
A68_BOOL  OILAELA;  /* optbool result */
A68_BOOL * PILAELA;  /* YIELD */
A68_46  SILAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(inextattrs);
 /* line 677: */
{ 
 /* line 678: */
A_CLOSURE( VHLAELA_generator, WHLAELA_generator, XHLAELA_generator );
(( XHLAELA_generator * ) ( VHLAELA_generator.nonlocals )) -> Noattrs = Noattrs;
A_CALLPROC(VHLAELA_generator,(A68_FALSE, &AILAELA),(A68_FALSE, &AILAELA,(VHLAELA_generator).nonlocals));
(*NL(GHKAELA_attrs)) = AILAELA;
 /* line 679: */
A_CLOSURE( CILAELA_generator, DILAELA_generator, EILAELA_generator );
(( EILAELA_generator * ) ( CILAELA_generator.nonlocals )) -> Noattrs = Noattrs;
A_CALLPROC(CILAELA_generator,(A68_FALSE, &HILAELA),(A68_FALSE, &HILAELA,(CILAELA_generator).nonlocals));
(*NL(HHKAELA_oldattrs)) = HILAELA;
 /* line 680: */
for ( ;; )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &IILAELA),( &IILAELA,(NL(XHKAELA_inid)).nonlocals));
SHLAELA_id = IILAELA;
 /* line 681: */
JILAELA = A_VC_NE(SHLAELA_id,TTCAOST_nullid);
if ( !JILAELA ) break;
QHLAELA_attrno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
RHLAELA_vnno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 682: */
A_CALLPROC(NL(Findid),(SHLAELA_id, &KILAELA),(SHLAELA_id, &KILAELA,(NL(Findid)).nonlocals));
THLAELA_idinfo = KILAELA;
 /* line 683: */
 /* line 684: */
LILAELA = (*(&((&THLAELA_idinfo)->U))) ;
switch ( LILAELA.mode )
{ 
case 6: /* STRUCT(MODE208)  */
MILAELA_ad = (LILAELA.data.mode6);
{ 
NILAELA = (&A_VINDEX((*NL(GHKAELA_attrs)),QHLAELA_attrno)) ;
(*NILAELA) = MILAELA_ad.A;
 /* line 685: */
 /* line 686: */
OILAELA = (*(&((&THLAELA_idinfo)->Outofdate)));
if ( ! OILAELA )
{ /* line 687: */
OILAELA = ((*(&((&THLAELA_idinfo)->Vnno)))!=RHLAELA_vnno);
}
 /* line 688: */
PILAELA = (&A_VINDEX((*NL(HHKAELA_oldattrs)),QHLAELA_attrno)) ;
(*PILAELA) = OILAELA;
} 
break;
default: 
 /* line 689: */
 /* line 690: */
A_CALLPROC(NL(Fault),(0, A_HVEC(SILAELA,RILAELA,A68_VC )),(0, A_HVEC(SILAELA,RILAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
}
 /* line 691: */
} 
A_PROC_EXIT(inextattrs);
return;
} 
#undef NL

A_STATIC A68_VOID  VILAELA_inextctypes(A68_INT  Noctypes, void *NonLocals)
#define NL(x) (((WILAELA_inextctypes *)NonLocals)->x)
{ 
A68_INT  XILAELA_ctypeno;
A68_INT  YILAELA_vnno;
A68_VC  ZILAELA_id;
A68_185  AJLAELA_idinfo;
A68_411  CJLAELA_generator;   /* proc value of non-global proc */
A68_386  HJLAELA;  /* avoid structure result */
A68_399  JJLAELA_generator;   /* proc value of non-global proc */
A68_54  OJLAELA;  /* avoid structure result */
A68_VC  PJLAELA;  /* avoid structure result */
A68_BOOL  QJLAELA;  /* clause result */
A68_185  RJLAELA;  /* avoid structure result */
A68_186  SJLAELA;  /* united object - for case conformity */
A68_189  TJLAELA_ci;
A68_227 * UJLAELA;  /* YIELD */
A68_BOOL  VJLAELA;  /* optbool result */
A68_BOOL * WJLAELA;  /* YIELD */
A68_46  ZJLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(inextctypes);
 /* line 694: */
{ 
 /* line 695: */
A_CLOSURE( CJLAELA_generator, DJLAELA_generator, EJLAELA_generator );
(( EJLAELA_generator * ) ( CJLAELA_generator.nonlocals )) -> Noctypes = Noctypes;
A_CALLPROC(CJLAELA_generator,(A68_FALSE, &HJLAELA),(A68_FALSE, &HJLAELA,(CJLAELA_generator).nonlocals));
(*NL(EHKAELA_ctypes)) = HJLAELA;
 /* line 696: */
A_CLOSURE( JJLAELA_generator, KJLAELA_generator, LJLAELA_generator );
(( LJLAELA_generator * ) ( JJLAELA_generator.nonlocals )) -> Noctypes = Noctypes;
A_CALLPROC(JJLAELA_generator,(A68_FALSE, &OJLAELA),(A68_FALSE, &OJLAELA,(JJLAELA_generator).nonlocals));
(*NL(FHKAELA_oldctypes)) = OJLAELA;
 /* line 697: */
for ( ;; )
{ 
A_CALLPROC(NL(XHKAELA_inid),( &PJLAELA),( &PJLAELA,(NL(XHKAELA_inid)).nonlocals));
ZILAELA_id = PJLAELA;
 /* line 698: */
QJLAELA = A_VC_NE(ZILAELA_id,TTCAOST_nullid);
if ( !QJLAELA ) break;
XILAELA_ctypeno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
YILAELA_vnno = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 699: */
A_CALLPROC(NL(Findid),(ZILAELA_id, &RJLAELA),(ZILAELA_id, &RJLAELA,(NL(Findid)).nonlocals));
AJLAELA_idinfo = RJLAELA;
 /* line 700: */
 /* line 701: */
SJLAELA = (*(&((&AJLAELA_idinfo)->U))) ;
switch ( SJLAELA.mode )
{ 
case 3: /* STRUCT(MODE227)  */
TJLAELA_ci = (SJLAELA.data.mode3);
{ 
UJLAELA = (&A_VINDEX((*NL(EHKAELA_ctypes)),XILAELA_ctypeno)) ;
(*UJLAELA) = TJLAELA_ci.Ct;
 /* line 702: */
 /* line 703: */
VJLAELA = (*(&((&AJLAELA_idinfo)->Outofdate)));
if ( ! VJLAELA )
{ /* line 704: */
VJLAELA = ((*(&((&AJLAELA_idinfo)->Vnno)))!=YILAELA_vnno);
}
 /* line 705: */
WJLAELA = (&A_VINDEX((*NL(FHKAELA_oldctypes)),XILAELA_ctypeno)) ;
(*WJLAELA) = VJLAELA;
} 
break;
default: 
 /* line 706: */
 /* line 707: */
A_CALLPROC(NL(Fault),(0, A_HVEC(ZJLAELA,YJLAELA,A68_VC )),(0, A_HVEC(ZJLAELA,YJLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
}
 /* line 708: */
} 
A_PROC_EXIT(inextctypes);
return;
} 
#undef NL

A_STATIC A68_VOID  BKLAELA_skipddecs(void *NonLocals)
#define NL(x) (((CKLAELA_skipddecs *)NonLocals)->x)
{ 
A68_BOOL  DKLAELA_continue;
A68_VC  EKLAELA;  /* avoid structure result */
A_PROC_ENTRY(skipddecs);
{ 
DKLAELA_continue = A68_TRUE;
 /* line 712: */
for ( ;; )
{ 
 /* line 713: */
if ( !(DKLAELA_continue) ) break;
 /* line 714: */
if ( (((*NL(RHKAELA_next)) = A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals)))==XKCAELA_end) )
{ 
(*NL(RHKAELA_next)) = (-1);
 /* line 715: */
 /* line 716: */
DKLAELA_continue = A68_FALSE;
} 
else
{ 
A_CALLPROC(NL(HXKAELA_skiptype),(),((NL(HXKAELA_skiptype)).nonlocals));
 /* line 717: */
for ( ;; )
{ 
if ( !((A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals))!=HJCAELA_zero)) ) break;
(*NL(RHKAELA_next)) = (-1);
A_CALLPROC(NL(XHKAELA_inid),( &EKLAELA),( &EKLAELA,(NL(XHKAELA_inid)).nonlocals));
EKLAELA;
}
 /* line 718: */
 /* line 719: */
} 
}
 /* line 720: */
} 
A_PROC_EXIT(skipddecs);
return;
} 
#undef NL

A_STATIC A68_VOID  HKLAELA_inextfns(A68_INT  Num, void *NonLocals)
#define NL(x) (((IKLAELA_inextfns *)NonLocals)->x)
{ 
A68_VC  JKLAELA;  /* avoid structure result */
A_PROC_ENTRY(inextfns);
 /* line 723: */
for ( ;; )
{ 
 /* line 724: */
if ( !((A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals))!=HJCAELA_zero)) ) break;
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(XHKAELA_inid),( &JKLAELA),( &JKLAELA,(NL(XHKAELA_inid)).nonlocals));
JKLAELA;
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 725: */
A_CALLPROC(NL(AKLAELA_skipddecs),(),((NL(AKLAELA_skipddecs)).nonlocals));
A_CALLPROC(NL(AKLAELA_skipddecs),(),((NL(AKLAELA_skipddecs)).nonlocals));
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
 /* line 726: */
A_CALLPROC(NL(SHKAELA_in),(),((NL(SHKAELA_in)).nonlocals));
}
 /* line 727: */
A_PROC_EXIT(inextfns);
return;
} 
#undef NL

A_STATIC A68_VOID  QMLAELA_generator(A68_BOOL  OMLAELA_anonymous, A68_368  *ReturnedValue, void *NonLocals)
#define NL(x) (((RMLAELA_generator *)NonLocals)->x)
{ 
A68_368  SMLAELA;  /* clause result */
A68_368  TMLAELA;  /* OPERATORS - dynamic generator */
{ 
TMLAELA.upb = NL(Params).upb ;
( OMLAELA_anonymous? A_VLOC(A68_VC ,TMLAELA): A_VHEAP(A68_VC ,TMLAELA) );
SMLAELA = TMLAELA;
} 
*ReturnedValue = (SMLAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YMLAELA_outchar(A68_CHAR  C, void *NonLocals)
#define NL(x) (((ZMLAELA_outchar *)NonLocals)->x)
{ 
A68_31  BNLAELA_generator;   /* proc value of non-global proc */
A68_VC  GNLAELA;  /* avoid structure result */
A68_VC  HNLAELA_temp;
A68_VC  INLAELA;  /* OPERATORS - trim index */
A68_VC  JNLAELA;  /* YIELD */
A68_CHAR * KNLAELA;  /* YIELD */
A_PROC_ENTRY(outchar);
 /* line 794: */
{ 
 /* line 795: */
if ( (((*NL(MMLAELA_mind))+1)>(*NL(LMLAELA_m)).upb) )
{ 
A_CLOSURE( BNLAELA_generator, CNLAELA_generator, DNLAELA_generator );
(( DNLAELA_generator * ) ( BNLAELA_generator.nonlocals )) -> MMLAELA_mind = NL(MMLAELA_mind);
A_CALLPROC(BNLAELA_generator,(A68_FALSE, &GNLAELA),(A68_FALSE, &GNLAELA,(BNLAELA_generator).nonlocals));
HNLAELA_temp = GNLAELA;
 /* line 796: */
JNLAELA = A_VTRIM(INLAELA,(HNLAELA_temp),A_VTSCRIPT(&(INLAELA.upb),(HNLAELA_temp).upb,1,(*NL(MMLAELA_mind)))) ;
A_VASSIGN2((*NL(LMLAELA_m)),JNLAELA,A68_CHAR );
 /* line 797: */
 /* line 798: */
(*NL(LMLAELA_m)) = HNLAELA_temp;
} 
 /* line 799: */
(*NL(MMLAELA_mind))+=1;
 /* line 800: */
 /* line 801: */
KNLAELA = (&A_VINDEX((*NL(LMLAELA_m)),(*NL(MMLAELA_mind)))) ;
(*KNLAELA) = C;
} 
A_PROC_EXIT(outchar);
return;
} 
#undef NL

A_STATIC A68_VOID  NNLAELA_outid(A68_VC  Id, void *NonLocals)
#define NL(x) (((ONLAELA_outid *)NonLocals)->x)
{ 
A68_INT  PNLAELA_i;
A68_INT  QNLAELA;  /* to part of loop */
A_PROC_ENTRY(outid);
 /* line 804: */
{ 
 /* line 805: */
if ( (Id.upb>0) )
{ 
QNLAELA = Id.upb;
for ( PNLAELA_i = 1;
PNLAELA_i <= QNLAELA;
PNLAELA_i += 1 )
{ 
A_CALLPROC(NL(XMLAELA_outchar),((*(&A_VINDEX(Id,PNLAELA_i)))),((*(&A_VINDEX(Id,PNLAELA_i))),(NL(XMLAELA_outchar)).nonlocals));
}
 /* line 806: */
} 
else
{ 
 /* line 807: */
 /* line 808: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
} 
} 
A_PROC_EXIT(outid);
return;
} 
#undef NL

A_STATIC A68_VOID  TNLAELA_outchars(A68_VC  C, void *NonLocals)
#define NL(x) (((UNLAELA_outchars *)NonLocals)->x)
{ 
A68_INT  VNLAELA_i;
A68_INT  WNLAELA;  /* to part of loop */
A_PROC_ENTRY(outchars);
 /* line 811: */
WNLAELA = C.upb;
for ( VNLAELA_i = 1;
VNLAELA_i <= WNLAELA;
VNLAELA_i += 1 )
{ 
A_CALLPROC(NL(XMLAELA_outchar),(A_VINDEX(C,VNLAELA_i)),(A_VINDEX(C,VNLAELA_i),(NL(XMLAELA_outchar)).nonlocals));
}
A_PROC_EXIT(outchars);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNLAELA_outint(A68_INT  I, void *NonLocals)
#define NL(x) (((AOLAELA_outint *)NonLocals)->x)
{ 
A68_VC  BOLAELA;  /* avoid structure result */
A_PROC_ENTRY(outint);
FCAAOSI_intchars( I, &BOLAELA );
A_CALLPROC(NL(SNLAELA_outchars),(BOLAELA),(BOLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_PROC_EXIT(outint);
return;
} 
#undef NL

A_STATIC A68_VOID  EOLAELA_outmacid(A68_207 * Mi, void *NonLocals)
#define NL(x) (((FOLAELA_outmacid *)NonLocals)->x)
{ 
A68_INT  GOLAELA;  /* to part of loop */
A68_INT  HOLAELA;  /* loop control */
A_PROC_ENTRY(outmacid);
 /* line 816: */
 /* line 817: */
if ( A_VC_EQ((*(&(Mi->Id))),TTCAOST_nullid) )
{ 
GOLAELA = (*(&(Mi->Index)));
for ( HOLAELA = 1;
HOLAELA <= GOLAELA;
HOLAELA += 1 )
{ 
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
}
 /* line 818: */
} 
else
{ 
 /* line 819: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(Mi->Id)))),((*(&(Mi->Id))),(NL(MNLAELA_outid)).nonlocals));
} 
A_PROC_EXIT(outmacid);
return;
} 
#undef NL

A_STATIC A68_VOID  KOLAELA_outinteger(A68_170  I, void *NonLocals)
#define NL(x) (((LOLAELA_outinteger *)NonLocals)->x)
{ 
A68_170  MOLAELA;  /* united object - for case conformity */
A68_INT  NOLAELA_j;
A68_172 * OOLAELA_it;
A68_171 * POLAELA_m;
A68_176 * SOLAELA_idop;
A68_VC  TOLAELA;  /* clause result */
A68_VC  UOLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VOLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WOLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XOLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YOLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FPLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GPLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LPLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_177 * WPLAELA_imop;
A68_VC  XPLAELA;  /* clause result */
A68_VC  YPLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZPLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CQLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_178 * JQLAELA_icon;
A68_174 * SQLAELA_ic;
A68_183  TQLAELA_in;
A68_180  UQLAELA_pa;
A68_175 * VQLAELA_ivar;
A68_181 * WQLAELA_idef;
A68_179 * XQLAELA_ivm;
A68_182 * YQLAELA_ib;
A_PROC_ENTRY(outinteger);
 /* line 822: */
{ 
 /* line 823: */
MOLAELA = I ;
switch ( MOLAELA.mode )
{ 
case 1: /* INT */
NOLAELA_j = (MOLAELA.data.mode1);
 /* line 824: */
A_CALLPROC(NL(YNLAELA_outint),(NOLAELA_j),(NOLAELA_j,(NL(YNLAELA_outint)).nonlocals));
break;
case 3: /* REF STRUCT(INT,REF MODE26)  */
OOLAELA_it = (MOLAELA.data.mode3);
 /* line 825: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(OOLAELA_it->Text)))),((*(&(OOLAELA_it->Text))),(NL(MNLAELA_outid)).nonlocals));
break;
case 2: /* REF STRUCT(REF MODE26)  */
POLAELA_m = (MOLAELA.data.mode2);
 /* line 826: */
A_CALLPROC(NL(SNLAELA_outchars),(ROLAELA),(ROLAELA,(NL(SNLAELA_outchars)).nonlocals));
break;
case 7: /* REF STRUCT(INT,MODE170,MODE170)  */
SOLAELA_idop = (MOLAELA.data.mode7);
{ 
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(SOLAELA_idop->L)))),((*(&(SOLAELA_idop->L))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 827: */
switch ( (*(&(SOLAELA_idop->Opno))) )
{ 
case 1: 
TOLAELA = A_HVEC(UOLAELA,'+',A68_CHAR );
break;
case 2: 
TOLAELA = A_HVEC(VOLAELA,'-',A68_CHAR );
break;
case 3: 
TOLAELA = A_HVEC(WOLAELA,'*',A68_CHAR );
break;
case 4: 
TOLAELA = A_HVEC(XOLAELA,'%',A68_CHAR );
break;
case 5: 
TOLAELA = A_HVEC(YOLAELA,'=',A68_CHAR );
break;
case 6: 
 /* line 828: */
TOLAELA = APLAELA;
break;
case 7: 
TOLAELA = CPLAELA;
break;
case 8: 
TOLAELA = EPLAELA;
break;
case 9: 
TOLAELA = A_HVEC(FPLAELA,'<',A68_CHAR );
break;
case 10: 
TOLAELA = A_HVEC(GPLAELA,'>',A68_CHAR );
break;
case 11: 
TOLAELA = IPLAELA;
break;
case 12: 
TOLAELA = KPLAELA;
break;
case 13: 
TOLAELA = A_HVEC(LPLAELA,' ',A68_CHAR );
break;
case 14: 
 /* line 829: */
TOLAELA = NPLAELA;
break;
case 15: 
TOLAELA = PPLAELA;
break;
case 16: 
TOLAELA = RPLAELA;
break;
case 17: 
TOLAELA = TPLAELA;
break;
case 18: 
TOLAELA = VPLAELA;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_CALLPROC(NL(SNLAELA_outchars),(TOLAELA),(TOLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 830: */
 /* line 831: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(SOLAELA_idop->R)))),((*(&(SOLAELA_idop->R))),(NL(JOLAELA_outinteger)).nonlocals));
} 
break;
case 8: /* REF STRUCT(INT,MODE170)  */
WPLAELA_imop = (MOLAELA.data.mode8);
{ 
switch ( (*(&(WPLAELA_imop->Opno))) )
{ 
case 1: 
XPLAELA = A_HVEC(YPLAELA,'+',A68_CHAR );
break;
case 2: 
XPLAELA = A_HVEC(ZPLAELA,'-',A68_CHAR );
break;
case 3: 
XPLAELA = BQLAELA;
break;
case 4: 
 /* line 832: */
XPLAELA = A_HVEC(CQLAELA,' ',A68_CHAR );
break;
case 5: 
XPLAELA = EQLAELA;
break;
case 6: 
XPLAELA = GQLAELA;
break;
case 7: 
XPLAELA = IQLAELA;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_CALLPROC(NL(SNLAELA_outchars),(XPLAELA),(XPLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 833: */
 /* line 834: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(WPLAELA_imop->R)))),((*(&(WPLAELA_imop->R))),(NL(JOLAELA_outinteger)).nonlocals));
} 
break;
case 9: /* REF STRUCT(MODE170,MODE170,MODE170)  */
JQLAELA_icon = (MOLAELA.data.mode9);
{ 
A_CALLPROC(NL(SNLAELA_outchars),(LQLAELA),(LQLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(JQLAELA_icon->Cond)))),((*(&(JQLAELA_icon->Cond))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 835: */
A_CALLPROC(NL(SNLAELA_outchars),(NQLAELA),(NQLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(JQLAELA_icon->T)))),((*(&(JQLAELA_icon->T))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 836: */
A_CALLPROC(NL(SNLAELA_outchars),(PQLAELA),(PQLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(JQLAELA_icon->F)))),((*(&(JQLAELA_icon->F))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 837: */
 /* line 838: */
A_CALLPROC(NL(SNLAELA_outchars),(RQLAELA),(RQLAELA,(NL(SNLAELA_outchars)).nonlocals));
} 
break;
case 5: /* REF STRUCT(MODE170,MODE170,INT)  */
SQLAELA_ic = (MOLAELA.data.mode5);
 /* line 839: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(SQLAELA_ic->Integer)))),((*(&(SQLAELA_ic->Integer))),(NL(JOLAELA_outinteger)).nonlocals));
break;
case 14: /* STRUCT(INT)  */
TQLAELA_in = (MOLAELA.data.mode14);
 /* line 840: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
break;
case 11: /* STRUCT(INT)  */
UQLAELA_pa = (MOLAELA.data.mode11);
 /* line 841: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
break;
case 6: /* REF STRUCT(REF MODE207)  */
VQLAELA_ivar = (MOLAELA.data.mode6);
 /* line 842: */
A_CALLPROC(NL(DOLAELA_outmacid),((*(&(VQLAELA_ivar->Im)))),((*(&(VQLAELA_ivar->Im))),(NL(DOLAELA_outmacid)).nonlocals));
break;
case 12: /* REF STRUCT(REF MODE185,INT,MODE170)  */
WQLAELA_idef = (MOLAELA.data.mode12);
 /* line 843: */
A_CALLPROC(NL(MNLAELA_outid),((*(&((*(&(WQLAELA_idef->Idinfo)))->Id)))),((*(&((*(&(WQLAELA_idef->Idinfo)))->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
case 10: /* REF STRUCT(INT,MODE170,MODE170,MODE170)  */
XQLAELA_ivm = (MOLAELA.data.mode10);
 /* line 844: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
break;
case 13: /* REF STRUCT(MODE170)  */
YQLAELA_ib = (MOLAELA.data.mode13);
{ 
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(YQLAELA_ib->Ibracket)))),((*(&(YQLAELA_ib->Ibracket))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 845: */
 /* line 846: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
default: 
 /* line 847: */
 /* line 848: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
break;
} 
} 
A_PROC_EXIT(outinteger);
return;
} 
#undef NL

A_STATIC A68_VOID  BRLAELA_outtype(A68_196  T, void *NonLocals)
#define NL(x) (((CRLAELA_outtype *)NonLocals)->x)
{ 
A68_199 * DRLAELA_st;
A68_218 * ERLAELA_pa;
A68_196  FRLAELA;  /* united object - for case conformity */
A68_197 * GRLAELA_p;
A68_198 * HRLAELA_n;
A68_199 * IRLAELA_s;
A68_202 * JRLAELA_f;
A68_203 * MRLAELA_r;
A68_204 * NRLAELA_tb;
A68_205 * ORLAELA_ts;
A68_200 * RRLAELA_tv;
A_PROC_ENTRY(outtype);
 /* line 851: */
 /* line 852: */
{ 
 /* line 853: */
 /* line 854: */
FRLAELA = T ;
switch ( FRLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
GRLAELA_p = (FRLAELA.data.mode1);
 /* line 855: */
 /* line 856: */
A_CALLPROC(NL(MNLAELA_outid),((*(&((*(&(GRLAELA_p->Idinfo)))->Id)))),((*(&((*(&(GRLAELA_p->Idinfo)))->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
case 2: /* REF STRUCT(REF MODE185,INT,MODE196)  */
HRLAELA_n = (FRLAELA.data.mode2);
 /* line 857: */
 /* line 858: */
A_CALLPROC(NL(MNLAELA_outid),((*(&((*(&(HRLAELA_n->Idinfo)))->Id)))),((*(&((*(&(HRLAELA_n->Idinfo)))->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
case 3: /* REF STRUCT(MODE196,REF MODE199)  */
IRLAELA_s = (FRLAELA.data.mode3);
 /* line 859: */
{ 
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
DRLAELA_st = IRLAELA_s;
A_CALLPROC(NL(ARLAELA_outtype),((*(&(IRLAELA_s->T)))),((*(&(IRLAELA_s->T))),(NL(ARLAELA_outtype)).nonlocals));
 /* line 860: */
for ( ;; )
{ 
 /* line 861: */
if ( !(((DRLAELA_st = (*(&(DRLAELA_st->Rest))))!=DQCAELA_nilst)) ) break;
A_CALLPROC(NL(XMLAELA_outchar),(','),(',',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(ARLAELA_outtype),((*(&(DRLAELA_st->T)))),((*(&(DRLAELA_st->T))),(NL(ARLAELA_outtype)).nonlocals));
}
 /* line 862: */
 /* line 863: */
 /* line 864: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE196,MODE196)  */
JRLAELA_f = (FRLAELA.data.mode6);
 /* line 865: */
{ 
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(ARLAELA_outtype),((*(&(JRLAELA_f->From)))),((*(&(JRLAELA_f->From))),(NL(ARLAELA_outtype)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),(LRLAELA),(LRLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 866: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(JRLAELA_f->To)))),((*(&(JRLAELA_f->To))),(NL(ARLAELA_outtype)).nonlocals));
 /* line 867: */
 /* line 868: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE196,MODE170)  */
MRLAELA_r = (FRLAELA.data.mode7);
 /* line 869: */
{ 
A_CALLPROC(NL(XMLAELA_outchar),('['),('[',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(MRLAELA_r->Size)))),((*(&(MRLAELA_r->Size))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(XMLAELA_outchar),(']'),(']',(NL(XMLAELA_outchar)).nonlocals));
 /* line 870: */
 /* line 871: */
 /* line 872: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(MRLAELA_r->T)))),((*(&(MRLAELA_r->T))),(NL(ARLAELA_outtype)).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE196)  */
NRLAELA_tb = (FRLAELA.data.mode8);
 /* line 873: */
{ 
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(ARLAELA_outtype),((*(&(NRLAELA_tb->Tbracket)))),((*(&(NRLAELA_tb->Tbracket))),(NL(ARLAELA_outtype)).nonlocals));
 /* line 874: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 9: /* REF STRUCT(MODE170,MODE196)  */
ORLAELA_ts = (FRLAELA.data.mode9);
 /* line 875: */
{ 
A_CALLPROC(NL(SNLAELA_outchars),(QRLAELA),(QRLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(ORLAELA_ts->Size)))),((*(&(ORLAELA_ts->Size))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(XMLAELA_outchar),(']'),(']',(NL(XMLAELA_outchar)).nonlocals));
 /* line 876: */
 /* line 877: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(ORLAELA_ts->Tstring)))),((*(&(ORLAELA_ts->Tstring))),(NL(ARLAELA_outtype)).nonlocals));
} 
break;
case 4: /* REF STRUCT(REF MODE207,MODE196)  */
RRLAELA_tv = (FRLAELA.data.mode4);
 /* line 878: */
 /* line 879: */
A_CALLPROC(NL(DOLAELA_outmacid),((*(&(RRLAELA_tv->Tm)))),((*(&(RRLAELA_tv->Tm))),(NL(DOLAELA_outmacid)).nonlocals));
break;
case 12: /* STRUCT(INT)  */
 /* line 880: */
 /* line 881: */
A_CALLPROC(NL(SNLAELA_outchars),(TRLAELA),(TRLAELA,(NL(SNLAELA_outchars)).nonlocals));
break;
default: 
 /* line 882: */
 /* line 883: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
break;
} 
} 
A_PROC_EXIT(outtype);
return;
} 
#undef NL

A_STATIC A68_VOID  WRLAELA_outfn(A68_264 * Fd, void *NonLocals)
#define NL(x) (((XRLAELA_outfn *)NonLocals)->x)
{ 
A68_262 * YRLAELA_m;
A68_VC  ASLAELA;  /* clause result */
A68_263  ESLAELA;  /* united object - for case conformity */
A68_213 * FSLAELA_av;
A68_175 * ISLAELA_iv;
A68_200 * NSLAELA_tv;
A68_241 * SSLAELA_cv;
A68_264 * VSLAELA_fdd;
A68_VC  XSLAELA;  /* clause result */
A68_INT  BTLAELA;  /* to part of loop */
A68_INT  CTLAELA;  /* loop control */
A68_BOOL  DTLAELA;  /* clause result */
A_PROC_ENTRY(outfn);
 /* line 886: */
{ 
 /* line 887: */
if ( (*(&(Fd->Macro))) )
{ 
ASLAELA = BSLAELA;
} 
else
{ 
ASLAELA = DSLAELA;
} 
A_CALLPROC(NL(SNLAELA_outchars),(ASLAELA),(ASLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 888: */
 /* line 889: */
if ( ((*(&(Fd->Mp)))!=IQCAELA_nilmparams) )
{ 
A_CALLPROC(NL(SNLAELA_outchars),(BJCAELA_omac),(BJCAELA_omac,(NL(SNLAELA_outchars)).nonlocals));
YRLAELA_m = (*(&(Fd->Mp)));
 /* line 890: */
for ( ;; )
{ 
 /* line 891: */
ESLAELA = (*(&(YRLAELA_m->Value))) ;
switch ( ESLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE207)  */
FSLAELA_av = (ESLAELA.data.mode1);
 /* line 892: */
{ 
A_CALLPROC(NL(SNLAELA_outchars),(HSLAELA),(HSLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 893: */
A_CALLPROC(NL(DOLAELA_outmacid),((*(&(FSLAELA_av->Am)))),((*(&(FSLAELA_av->Am))),(NL(DOLAELA_outmacid)).nonlocals));
} 
break;
case 2: /* REF STRUCT(REF MODE207)  */
ISLAELA_iv = (ESLAELA.data.mode2);
 /* line 894: */
{ 
 /* line 895: */
if ( ((*(&((*(&(ISLAELA_iv->Im)))->Sort)))==XWCAELA_expl_par) )
{ 
A_CALLPROC(NL(SNLAELA_outchars),(KSLAELA),(KSLAELA,(NL(SNLAELA_outchars)).nonlocals));
} 
else
{ 
 /* line 896: */
A_CALLPROC(NL(SNLAELA_outchars),(MSLAELA),(MSLAELA,(NL(SNLAELA_outchars)).nonlocals));
} 
 /* line 897: */
 /* line 898: */
 /* line 899: */
A_CALLPROC(NL(DOLAELA_outmacid),((*(&(ISLAELA_iv->Im)))),((*(&(ISLAELA_iv->Im))),(NL(DOLAELA_outmacid)).nonlocals));
} 
break;
case 3: /* REF STRUCT(REF MODE207,MODE196)  */
NSLAELA_tv = (ESLAELA.data.mode3);
 /* line 900: */
{ 
 /* line 901: */
if ( ((*(&((*(&(NSLAELA_tv->Tm)))->Sort)))==XWCAELA_expl_par) )
{ 
A_CALLPROC(NL(SNLAELA_outchars),(PSLAELA),(PSLAELA,(NL(SNLAELA_outchars)).nonlocals));
} 
else
{ 
 /* line 902: */
A_CALLPROC(NL(SNLAELA_outchars),(RSLAELA),(RSLAELA,(NL(SNLAELA_outchars)).nonlocals));
} 
 /* line 903: */
 /* line 904: */
 /* line 905: */
A_CALLPROC(NL(DOLAELA_outmacid),((*(&(NSLAELA_tv->Tm)))),((*(&(NSLAELA_tv->Tm))),(NL(DOLAELA_outmacid)).nonlocals));
} 
break;
case 4: /* REF STRUCT(REF MODE207,MODE196)  */
SSLAELA_cv = (ESLAELA.data.mode4);
 /* line 906: */
{ 
A_CALLPROC(NL(SNLAELA_outchars),(USLAELA),(USLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 907: */
A_CALLPROC(NL(DOLAELA_outmacid),((*(&(SSLAELA_cv->Cm)))),((*(&(SSLAELA_cv->Cm))),(NL(DOLAELA_outmacid)).nonlocals));
} 
break;
case 5: /* REF STRUCT(REF MODE265,INT,INT,BOOL,REF MODE26,INT,REF MODE262,REF REF MODE262,MODE208,REF MODE266,REF MODE266,MODE196,MODE196,INT)  */
VSLAELA_fdd = (ESLAELA.data.mode5);
 /* line 908: */
{ 
if ( (*(&(VSLAELA_fdd->Macro))) )
{ 
XSLAELA = YSLAELA;
} 
else
{ 
XSLAELA = ATLAELA;
} 
A_CALLPROC(NL(SNLAELA_outchars),(XSLAELA),(XSLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 909: */
 /* line 910: */
if ( A_VC_EQ((*(&(VSLAELA_fdd->Id))),TTCAOST_nullid) )
{ 
BTLAELA = (*(&(YRLAELA_m->Mparamno)));
for ( CTLAELA = 1;
CTLAELA <= BTLAELA;
CTLAELA += 1 )
{ 
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
}
 /* line 911: */
} 
else
{ 
 /* line 912: */
 /* line 913: */
 /* line 914: */
 /* line 915: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(VSLAELA_fdd->Id)))),((*(&(VSLAELA_fdd->Id))),(NL(MNLAELA_outid)).nonlocals));
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 916: */
 /* line 917: */
DTLAELA = ((YRLAELA_m = (*(&(YRLAELA_m->Rest))))!=IQCAELA_nilmparams);
if ( !DTLAELA ) break;
A_CALLPROC(NL(XMLAELA_outchar),(','),(',',(NL(XMLAELA_outchar)).nonlocals));
}
 /* line 918: */
 /* line 919: */
A_CALLPROC(NL(SNLAELA_outchars),(DJCAELA_cmac),(DJCAELA_cmac,(NL(SNLAELA_outchars)).nonlocals));
} 
 /* line 920: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(Fd->Param)))),((*(&(Fd->Param))),(NL(ARLAELA_outtype)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),(FTLAELA),(FTLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 921: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(Fd->Ans)))),((*(&(Fd->Ans))),(NL(ARLAELA_outtype)).nonlocals));
} 
A_PROC_EXIT(outfn);
return;
} 
#undef NL

A_STATIC A68_VOID  ITLAELA_outctype(A68_227  Ct, void *NonLocals)
#define NL(x) (((JTLAELA_outctype *)NonLocals)->x)
{ 
A68_233 * KTLAELA_cst;
A68_234 * LTLAELA_calt;
A68_227  TTLAELA;  /* united object - for case conformity */
A68_228 * UTLAELA_cn;
A68_229 * VTLAELA_cpr;
A68_196  WTLAELA;  /* united object - for case conformity */
A68_197 * XTLAELA_pr;
A68_216  YTLAELA;  /* united object - for case conformity */
A68_217  ZTLAELA_p;
A68_46  CULAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  FULAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_230 * KULAELA_cpi;
A68_196  LULAELA;  /* united object - for case conformity */
A68_197 * MULAELA_pr;
A68_216  NULAELA;  /* united object - for case conformity */
A68_217  OULAELA_p;
A68_46  RULAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  UULAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_190 * VULAELA_pr;
A68_196  WULAELA;  /* united object - for case conformity */
A68_197 * XULAELA_p;
A68_216  YULAELA;  /* united object - for case conformity */
A68_218 * ZULAELA_pa;
A68_VC  AVLAELA;  /* avoid structure result */
A68_219  BVLAELA_ps;
A68_46  EVLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  HVLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_231 * IVLAELA_cu;
A68_227  JVLAELA;  /* OPERATORS - mode -> union mode */
A68_190 * KVLAELA;  /* YIELD */
A68_232 * LVLAELA_cr;
A68_233 * MVLAELA_cs;
A68_234 * NVLAELA_ca;
A68_235 * OVLAELA_cn;
A68_237 * PVLAELA_cq;
A68_236 * QVLAELA_cb;
A68_239 * RVLAELA_cc;
A68_196  SVLAELA;  /* united object - for case conformity */
A68_197 * TVLAELA_pr;
A68_216  UVLAELA;  /* united object - for case conformity */
A68_219  VVLAELA_p;
A68_46  YVLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  BWLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  DWLAELA_generator;   /* proc value of non-global proc */
A68_VC  IWLAELA;  /* avoid structure result */
A68_VC  JWLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KWLAELA;  /* OPERATORS - assign op */
A68_238 * LWLAELA_cs;
A68_215 * MWLAELA_sl;
A68_240 * TWLAELA_cr;
A68_196  UWLAELA;  /* united object - for case conformity */
A68_197 * VWLAELA_pr;
A68_216  WWLAELA;  /* united object - for case conformity */
A68_219  XWLAELA_p;
A68_46  AXLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  DXLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  HXLAELA_generator;   /* proc value of non-global proc */
A68_VC  MXLAELA;  /* avoid structure result */
A68_VC  NXLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OXLAELA;  /* OPERATORS - assign op */
A68_31  SXLAELA_generator;   /* proc value of non-global proc */
A68_VC  XXLAELA;  /* avoid structure result */
A68_VC  YXLAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZXLAELA;  /* OPERATORS - assign op */
A68_241 * AYLAELA_cv;
A68_243 * BYLAELA_ci;
A68_244 * CYLAELA_ct;
A68_245 * FYLAELA_cc;
A68_247 * OYLAELA_cn;
A68_246 * RYLAELA_cp;
A68_179 * SYLAELA_repl;
A68_248 * ZYLAELA_ca;
A_PROC_ENTRY(outctype);
 /* line 924: */
 /* line 925: */
{ 
 /* line 927: */
 /* line 933: */
 /* line 934: */
TTLAELA = Ct ;
switch ( TTLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE227,MODE196)  */
UTLAELA_cn = (TTLAELA.data.mode1);
 /* line 935: */
A_CALLPROC(NL(MNLAELA_outid),((*(&((*(&(UTLAELA_cn->Idinfo)))->Id)))),((*(&((*(&(UTLAELA_cn->Idinfo)))->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
case 2: /* REF STRUCT(MODE196,MODE170,MODE170)  */
VTLAELA_cpr = (TTLAELA.data.mode2);
 /* line 936: */
{ 
 /* line 937: */
WTLAELA = (*(&(VTLAELA_cpr->T))) ;
switch ( WTLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
XTLAELA_pr = (WTLAELA.data.mode1);
{ 
 /* line 938: */
YTLAELA = (*(&(XTLAELA_pr->U))) ;
switch ( YTLAELA.mode )
{ 
case 1: /* STRUCT(REF MODE185,MODE170,MODE170)  */
ZTLAELA_p = (YTLAELA.data.mode1);
 /* line 939: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(ZTLAELA_p.Idinfo->Id)))),((*(&(ZTLAELA_p.Idinfo->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
default: 
 /* line 940: */
 /* line 941: */
A_CALLPROC(NL(Fault),(0, A_HVEC(CULAELA,BULAELA,A68_VC )),(0, A_HVEC(CULAELA,BULAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
} 
break;
default: 
 /* line 942: */
A_CALLPROC(NL(Fault),(0, A_HVEC(FULAELA,EULAELA,A68_VC )),(0, A_HVEC(FULAELA,EULAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
 /* line 943: */
A_CALLPROC(NL(SNLAELA_outchars),(HULAELA),(HULAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(VTLAELA_cpr->Lwb)))),((*(&(VTLAELA_cpr->Lwb))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),(JULAELA),(JULAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 944: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(VTLAELA_cpr->Upb)))),((*(&(VTLAELA_cpr->Upb))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 945: */
 /* line 946: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE196,MODE170)  */
KULAELA_cpi = (TTLAELA.data.mode3);
 /* line 947: */
{ 
 /* line 948: */
LULAELA = (*(&(KULAELA_cpi->T))) ;
switch ( LULAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
MULAELA_pr = (LULAELA.data.mode1);
{ 
 /* line 949: */
NULAELA = (*(&(MULAELA_pr->U))) ;
switch ( NULAELA.mode )
{ 
case 1: /* STRUCT(REF MODE185,MODE170,MODE170)  */
OULAELA_p = (NULAELA.data.mode1);
 /* line 950: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(OULAELA_p.Idinfo->Id)))),((*(&(OULAELA_p.Idinfo->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
default: 
 /* line 951: */
 /* line 952: */
A_CALLPROC(NL(Fault),(0, A_HVEC(RULAELA,QULAELA,A68_VC )),(0, A_HVEC(RULAELA,QULAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
} 
break;
default: 
 /* line 953: */
A_CALLPROC(NL(Fault),(0, A_HVEC(UULAELA,TULAELA,A68_VC )),(0, A_HVEC(UULAELA,TULAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
 /* line 954: */
A_CALLPROC(NL(XMLAELA_outchar),('/'),('/',(NL(XMLAELA_outchar)).nonlocals));
 /* line 955: */
 /* line 956: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(KULAELA_cpi->Index)))),((*(&(KULAELA_cpi->Index))),(NL(JOLAELA_outinteger)).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE196,INT)  */
VULAELA_pr = (TTLAELA.data.mode4);
 /* line 957: */
{ 
 /* line 958: */
WULAELA = (*(&(VULAELA_pr->Type))) ;
switch ( WULAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
XULAELA_p = (WULAELA.data.mode1);
{ 
 /* line 959: */
YULAELA = (*(&(XULAELA_p->U))) ;
switch ( YULAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE185,REF MODE196,REF MODE218)  */
ZULAELA_pa = (YULAELA.data.mode2);
 /* line 960: */
 /* line 961: */
OTLAELA_paltsid( ZULAELA_pa, (*(&(VULAELA_pr->Index))), &AVLAELA );
A_CALLPROC(NL(MNLAELA_outid),(AVLAELA),(AVLAELA,(NL(MNLAELA_outid)).nonlocals));
break;
case 3: /* STRUCT(REF MODE185,REF MODE54,REF MODE220)  */
BVLAELA_ps = (YULAELA.data.mode3);
 /* line 962: */
 /* line 963: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(BVLAELA_ps.Idinfo->Id)))),((*(&(BVLAELA_ps.Idinfo->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
default: 
 /* line 964: */
 /* line 965: */
A_CALLPROC(NL(Fault),(0, A_HVEC(EVLAELA,DVLAELA,A68_VC )),(0, A_HVEC(EVLAELA,DVLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
} 
break;
default: 
 /* line 966: */
 /* line 967: */
 /* line 968: */
A_CALLPROC(NL(Fault),(0, A_HVEC(HVLAELA,GVLAELA,A68_VC )),(0, A_HVEC(HVLAELA,GVLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
} 
break;
case 5: /* REF STRUCT(REF MODE190,MODE227)  */
IVLAELA_cu = (TTLAELA.data.mode5);
 /* line 969: */
{ 
KVLAELA = (*(&(IVLAELA_cu->P))) ;
A_CALLPROC(NL(HTLAELA_outctype),(A_UNITE(JVLAELA,mode4,4,KVLAELA)),(A_UNITE(JVLAELA,mode4,4,KVLAELA),(NL(HTLAELA_outctype)).nonlocals));
A_CALLPROC(NL(XMLAELA_outchar),('&'),('&',(NL(XMLAELA_outchar)).nonlocals));
 /* line 970: */
A_CALLPROC(NL(HTLAELA_outctype),((*(&(IVLAELA_cu->Ct)))),((*(&(IVLAELA_cu->Ct))),(NL(HTLAELA_outctype)).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE227,MODE170)  */
LVLAELA_cr = (TTLAELA.data.mode6);
 /* line 971: */
{ 
A_CALLPROC(NL(XMLAELA_outchar),('['),('[',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(LVLAELA_cr->Size)))),((*(&(LVLAELA_cr->Size))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(XMLAELA_outchar),(']'),(']',(NL(XMLAELA_outchar)).nonlocals));
 /* line 972: */
 /* line 973: */
 /* line 974: */
A_CALLPROC(NL(HTLAELA_outctype),((*(&(LVLAELA_cr->Ct)))),((*(&(LVLAELA_cr->Ct))),(NL(HTLAELA_outctype)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE227,REF MODE233)  */
MVLAELA_cs = (TTLAELA.data.mode7);
 /* line 975: */
{ 
KTLAELA_cst = MVLAELA_cs;
 /* line 976: */
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(KTLAELA_cst->Cst)))),((*(&(KTLAELA_cst->Cst))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 977: */
for ( ;; )
{ 
 /* line 978: */
if ( !(((KTLAELA_cst = (*(&(KTLAELA_cst->Rest))))!=KQCAELA_nilcst)) ) break;
A_CALLPROC(NL(XMLAELA_outchar),(','),(',',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(KTLAELA_cst->Cst)))),((*(&(KTLAELA_cst->Cst))),(NL(HTLAELA_outctype)).nonlocals));
}
 /* line 979: */
 /* line 980: */
 /* line 981: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE227,REF MODE234)  */
NVLAELA_ca = (TTLAELA.data.mode8);
 /* line 982: */
{ 
LTLAELA_calt = NVLAELA_ca;
 /* line 983: */
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(LTLAELA_calt->Calt)))),((*(&(LTLAELA_calt->Calt))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 984: */
for ( ;; )
{ 
 /* line 985: */
if ( !(((LTLAELA_calt = (*(&(LTLAELA_calt->Rest))))!=JQCAELA_nilcalts)) ) break;
A_CALLPROC(NL(XMLAELA_outchar),('|'),('|',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(LTLAELA_calt->Calt)))),((*(&(LTLAELA_calt->Calt))),(NL(HTLAELA_outctype)).nonlocals));
}
 /* line 986: */
 /* line 987: */
 /* line 988: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 9: /* REF STRUCT(MODE196)  */
OVLAELA_cn = (TTLAELA.data.mode9);
 /* line 989: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(OVLAELA_cn->Ct)))),((*(&(OVLAELA_cn->Ct))),(NL(ARLAELA_outtype)).nonlocals));
break;
case 13: /* REF STRUCT(MODE196)  */
PVLAELA_cq = (TTLAELA.data.mode13);
{ 
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
 /* line 990: */
A_CALLPROC(NL(ARLAELA_outtype),((*(&(PVLAELA_cq->Querytype)))),((*(&(PVLAELA_cq->Querytype))),(NL(ARLAELA_outtype)).nonlocals));
} 
break;
case 12: /* REF STRUCT(MODE227)  */
QVLAELA_cb = (TTLAELA.data.mode12);
 /* line 991: */
{ 
A_CALLPROC(NL(XMLAELA_outchar),('('),('(',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(QVLAELA_cb->Cbracket)))),((*(&(QVLAELA_cb->Cbracket))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 992: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 15: /* REF STRUCT(MODE196,CHAR)  */
RVLAELA_cc = (TTLAELA.data.mode15);
 /* line 993: */
{ 
 /* line 994: */
SVLAELA = (*(&(RVLAELA_cc->T))) ;
switch ( SVLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
TVLAELA_pr = (SVLAELA.data.mode1);
{ 
 /* line 995: */
UVLAELA = (*(&(TVLAELA_pr->U))) ;
switch ( UVLAELA.mode )
{ 
case 3: /* STRUCT(REF MODE185,REF MODE54,REF MODE220)  */
VVLAELA_p = (UVLAELA.data.mode3);
 /* line 996: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(VVLAELA_p.Idinfo->Id)))),((*(&(VVLAELA_p.Idinfo->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
default: 
 /* line 997: */
 /* line 998: */
A_CALLPROC(NL(Fault),(0, A_HVEC(YVLAELA,XVLAELA,A68_VC )),(0, A_HVEC(YVLAELA,XVLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
} 
break;
default: 
 /* line 999: */
A_CALLPROC(NL(Fault),(0, A_HVEC(BWLAELA,AWLAELA,A68_VC )),(0, A_HVEC(BWLAELA,AWLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
 /* line 1000: */
A_CALLPROC(NL(XMLAELA_outchar),('\''),('\'',(NL(XMLAELA_outchar)).nonlocals));
A_CLOSURE( DWLAELA_generator, EWLAELA_generator, FWLAELA_generator );
 /* line 1001: */
 /* line 1002: */
A_CALLPROC(DWLAELA_generator,(A68_FALSE, &IWLAELA),(A68_FALSE, &IWLAELA,(DWLAELA_generator).nonlocals));
KWLAELA = A_HVEC(JWLAELA,(*(&(RVLAELA_cc->Char))),A68_CHAR ) ;
A_VASSIGN2(KWLAELA,IWLAELA,A68_CHAR ) ;
A_CALLPROC(NL(MNLAELA_outid),(IWLAELA),(IWLAELA,(NL(MNLAELA_outid)).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE170,MODE227,REF MODE215)  */
LWLAELA_cs = (TTLAELA.data.mode14);
 /* line 1003: */
 /* line 1004: */
 /* line 1015: */
if ( ((*(&(LWLAELA_cs->Strings)))!=NQCAELA_nilstringlist) )
{ 
A_CALLPROC(NL(HTLAELA_outctype),((*(&(LWLAELA_cs->Ct)))),((*(&(LWLAELA_cs->Ct))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 1016: */
MWLAELA_sl = (*(&(LWLAELA_cs->Strings)));
 /* line 1017: */
for ( ;; )
{ 
 /* line 1018: */
if ( !((MWLAELA_sl!=NQCAELA_nilstringlist)) ) break;
A_CALLPROC(NL(XMLAELA_outchar),('\"'),('\"',(NL(XMLAELA_outchar)).nonlocals));
 /* line 1019: */
if ( ((*(&(MWLAELA_sl->Id))).upb>0) )
{ 
A_CALLPROC(NL(MNLAELA_outid),((*(&(MWLAELA_sl->Id)))),((*(&(MWLAELA_sl->Id))),(NL(MNLAELA_outid)).nonlocals));
} 
 /* line 1020: */
A_CALLPROC(NL(SNLAELA_outchars),(OWLAELA),(OWLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 1021: */
 /* line 1022: */
MWLAELA_sl = (*(&(MWLAELA_sl->Rest)));
}
 /* line 1023: */
 /* line 1024: */
} 
else
{ 
A_CALLPROC(NL(SNLAELA_outchars),(QWLAELA),(QWLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(LWLAELA_cs->Size)))),((*(&(LWLAELA_cs->Size))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 1025: */
A_CALLPROC(NL(SNLAELA_outchars),(SWLAELA),(SWLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 1038: */
 /* line 1039: */
A_CALLPROC(NL(HTLAELA_outctype),((*(&(LWLAELA_cs->Ct)))),((*(&(LWLAELA_cs->Ct))),(NL(HTLAELA_outctype)).nonlocals));
} 
break;
case 16: /* REF STRUCT(MODE196,CHAR,CHAR)  */
TWLAELA_cr = (TTLAELA.data.mode16);
 /* line 1040: */
{ 
 /* line 1041: */
UWLAELA = (*(&(TWLAELA_cr->T))) ;
switch ( UWLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
VWLAELA_pr = (UWLAELA.data.mode1);
{ 
 /* line 1042: */
WWLAELA = (*(&(VWLAELA_pr->U))) ;
switch ( WWLAELA.mode )
{ 
case 3: /* STRUCT(REF MODE185,REF MODE54,REF MODE220)  */
XWLAELA_p = (WWLAELA.data.mode3);
 /* line 1043: */
A_CALLPROC(NL(MNLAELA_outid),((*(&(XWLAELA_p.Idinfo->Id)))),((*(&(XWLAELA_p.Idinfo->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
default: 
 /* line 1044: */
 /* line 1045: */
A_CALLPROC(NL(Fault),(0, A_HVEC(AXLAELA,ZWLAELA,A68_VC )),(0, A_HVEC(AXLAELA,ZWLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
} 
break;
default: 
 /* line 1046: */
A_CALLPROC(NL(Fault),(0, A_HVEC(DXLAELA,CXLAELA,A68_VC )),(0, A_HVEC(DXLAELA,CXLAELA,A68_VC ),(NL(Fault)).nonlocals));
break;
} 
 /* line 1047: */
A_CALLPROC(NL(SNLAELA_outchars),(FXLAELA),(FXLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CLOSURE( HXLAELA_generator, IXLAELA_generator, JXLAELA_generator );
A_CALLPROC(HXLAELA_generator,(A68_FALSE, &MXLAELA),(A68_FALSE, &MXLAELA,(HXLAELA_generator).nonlocals));
OXLAELA = A_HVEC(NXLAELA,(*(&(TWLAELA_cr->Lwb))),A68_CHAR ) ;
A_VASSIGN2(OXLAELA,MXLAELA,A68_CHAR ) ;
A_CALLPROC(NL(MNLAELA_outid),(MXLAELA),(MXLAELA,(NL(MNLAELA_outid)).nonlocals));
 /* line 1048: */
A_CALLPROC(NL(SNLAELA_outchars),(QXLAELA),(QXLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CLOSURE( SXLAELA_generator, TXLAELA_generator, UXLAELA_generator );
A_CALLPROC(SXLAELA_generator,(A68_FALSE, &XXLAELA),(A68_FALSE, &XXLAELA,(SXLAELA_generator).nonlocals));
ZXLAELA = A_HVEC(YXLAELA,(*(&(TWLAELA_cr->Upb))),A68_CHAR ) ;
A_VASSIGN2(ZXLAELA,XXLAELA,A68_CHAR ) ;
A_CALLPROC(NL(MNLAELA_outid),(XXLAELA),(XXLAELA,(NL(MNLAELA_outid)).nonlocals));
 /* line 1049: */
 /* line 1050: */
 /* line 1051: */
A_CALLPROC(NL(XMLAELA_outchar),(')'),(')',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 17: /* REF STRUCT(REF MODE207,MODE196)  */
AYLAELA_cv = (TTLAELA.data.mode17);
 /* line 1052: */
A_CALLPROC(NL(MNLAELA_outid),((*(&((*(&(AYLAELA_cv->Cm)))->Id)))),((*(&((*(&(AYLAELA_cv->Cm)))->Id))),(NL(MNLAELA_outid)).nonlocals));
break;
case 19: /* REF STRUCT(MODE227,MODE170)  */
BYLAELA_ci = (TTLAELA.data.mode19);
 /* line 1053: */
{ 
A_CALLPROC(NL(HTLAELA_outctype),((*(&(BYLAELA_ci->Ct)))),((*(&(BYLAELA_ci->Ct))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 1054: */
A_CALLPROC(NL(XMLAELA_outchar),('['),('[',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(BYLAELA_ci->Index)))),((*(&(BYLAELA_ci->Index))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 1055: */
 /* line 1056: */
A_CALLPROC(NL(XMLAELA_outchar),(']'),(']',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 20: /* REF STRUCT(MODE227,MODE170,MODE170)  */
CYLAELA_ct = (TTLAELA.data.mode20);
 /* line 1057: */
{ 
A_CALLPROC(NL(HTLAELA_outctype),((*(&(CYLAELA_ct->Ct)))),((*(&(CYLAELA_ct->Ct))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 1058: */
A_CALLPROC(NL(XMLAELA_outchar),('['),('[',(NL(XMLAELA_outchar)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(CYLAELA_ct->Lwb)))),((*(&(CYLAELA_ct->Lwb))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),(EYLAELA),(EYLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 1059: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(CYLAELA_ct->Upb)))),((*(&(CYLAELA_ct->Upb))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 1060: */
 /* line 1061: */
A_CALLPROC(NL(XMLAELA_outchar),(']'),(']',(NL(XMLAELA_outchar)).nonlocals));
} 
break;
case 21: /* REF STRUCT(MODE170,MODE227,MODE227)  */
FYLAELA_cc = (TTLAELA.data.mode21);
 /* line 1062: */
{ 
A_CALLPROC(NL(SNLAELA_outchars),(HYLAELA),(HYLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(FYLAELA_cc->Test)))),((*(&(FYLAELA_cc->Test))),(NL(JOLAELA_outinteger)).nonlocals));
 /* line 1063: */
A_CALLPROC(NL(SNLAELA_outchars),(JYLAELA),(JYLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(FYLAELA_cc->Then)))),((*(&(FYLAELA_cc->Then))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 1064: */
A_CALLPROC(NL(SNLAELA_outchars),(LYLAELA),(LYLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(HTLAELA_outctype),((*(&(FYLAELA_cc->Else)))),((*(&(FYLAELA_cc->Else))),(NL(HTLAELA_outctype)).nonlocals));
 /* line 1065: */
 /* line 1066: */
 /* line 1067: */
A_CALLPROC(NL(SNLAELA_outchars),(NYLAELA),(NYLAELA,(NL(SNLAELA_outchars)).nonlocals));
} 
break;
case 23: /* REF STRUCT(BOOL,INT,MODE227,MODE227)  */
OYLAELA_cn = (TTLAELA.data.mode23);
 /* line 1068: */
{ 
A_CALLPROC(NL(HTLAELA_outctype),((*(&(OYLAELA_cn->Left)))),((*(&(OYLAELA_cn->Left))),(NL(HTLAELA_outctype)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),(QYLAELA),(QYLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 1069: */
 /* line 1070: */
 /* line 1071: */
A_CALLPROC(NL(HTLAELA_outctype),((*(&(OYLAELA_cn->Right)))),((*(&(OYLAELA_cn->Right))),(NL(HTLAELA_outctype)).nonlocals));
} 
break;
case 22: /* REF STRUCT(REF MODE249,MODE227)  */
RYLAELA_cp = (TTLAELA.data.mode22);
 /* line 1072: */
{ 
SYLAELA_repl = KTDAELA_get_intvarmult((*(&(RYLAELA_cp->Ids))));
 /* line 1073: */
A_CALLPROC(NL(SNLAELA_outchars),(UYLAELA),(UYLAELA,(NL(SNLAELA_outchars)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),((*(&((*(&((*(&(RYLAELA_cp->Ids)))->Idinfo)))->Id)))),((*(&((*(&((*(&(RYLAELA_cp->Ids)))->Idinfo)))->Id))),(NL(SNLAELA_outchars)).nonlocals));
 /* line 1074: */
A_CALLPROC(NL(SNLAELA_outchars),(WYLAELA),(WYLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 1075: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(SYLAELA_repl->Lwb)))),((*(&(SYLAELA_repl->Lwb))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(SNLAELA_outchars),(YYLAELA),(YYLAELA,(NL(SNLAELA_outchars)).nonlocals));
 /* line 1076: */
A_CALLPROC(NL(JOLAELA_outinteger),((*(&(SYLAELA_repl->Upb)))),((*(&(SYLAELA_repl->Upb))),(NL(JOLAELA_outinteger)).nonlocals));
A_CALLPROC(NL(XMLAELA_outchar),(']'),(']',(NL(XMLAELA_outchar)).nonlocals));
 /* line 1077: */
 /* line 1078: */
 /* line 1079: */
A_CALLPROC(NL(HTLAELA_outctype),((*(&(RYLAELA_cp->Ct)))),((*(&(RYLAELA_cp->Ct))),(NL(HTLAELA_outctype)).nonlocals));
} 
break;
case 24: /* REF STRUCT(MODE227,MODE208)  */
ZYLAELA_ca = (TTLAELA.data.mode24);
 /* line 1080: */
A_CALLPROC(NL(HTLAELA_outctype),((*(&(ZYLAELA_ca->Ct)))),((*(&(ZYLAELA_ca->Ct))),(NL(HTLAELA_outctype)).nonlocals));
break;
case 18: /* STRUCT(INT)  */
 /* line 1081: */
A_CALLPROC(NL(SNLAELA_outchars),(BZLAELA),(BZLAELA,(NL(SNLAELA_outchars)).nonlocals));
break;
default: 
 /* line 1082: */
 /* line 1083: */
A_CALLPROC(NL(XMLAELA_outchar),('?'),('?',(NL(XMLAELA_outchar)).nonlocals));
break;
} 
} 
A_PROC_EXIT(outctype);
return;
} 
#undef NL

A_STATIC A68_VOID  GZLAELA_generator(A68_BOOL  EZLAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HZLAELA_generator *)NonLocals)->x)
{ 
A68_VC  IZLAELA;  /* clause result */
A68_VC  JZLAELA;  /* OPERATORS - dynamic generator */
{ 
JZLAELA.upb = 100 ;
( EZLAELA_anonymous? A_VLOC(A68_CHAR ,JZLAELA): A_VHEAP(A68_CHAR ,JZLAELA) );
IZLAELA = JZLAELA;
} 
*ReturnedValue = (IZLAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  XAMAELA_implicit_macro_int(A68_170  A, A68_170  B, A68_258 * Fstack)
{ 
A68_170  YAMAELA;  /* united object - for case conformity */
A68_175 * ZAMAELA_ai;
A68_BOOL  ABMAELA;  /* optbool result */
A68_261 * BBMAELA_fc;
A68_262 *** CBMAELA;  /* YIELD */
A68_267  DBMAELA;  /* collateral clause result */
A68_187  EBMAELA;  /* avoid structure result */
A68_268  FBMAELA;  /* OPERATORS - mode -> union mode */
A68_267 * GBMAELA;  /* YIELD */
A68_267 ** HBMAELA;  /* YIELD */
A68_267 *** IBMAELA;  /* YIELD */
A68_BOOL  JBMAELA;  /* clause result */
A68_INT  KBMAELA_ai;
A68_170  LBMAELA;  /* united object - for case conformity */
A68_INT  MBMAELA_bi;
A_PROC_ENTRY(implicit_macro_int);
 /* line 1115: */
{ 
 /* line 1116: */
YAMAELA = A ;
switch ( YAMAELA.mode )
{ 
case 6: /* REF STRUCT(REF MODE207)  */
ZAMAELA_ai = (YAMAELA.data.mode6);
 /* line 1117: */
{ 
 /* line 1118: */
ABMAELA = ((*(&(Fstack->Nextmp)))!=GQCAELA_nilnextmp);
if ( ABMAELA )
{ /* line 1119: */
ABMAELA = ((*(*(&(Fstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( ABMAELA )
{ /* line 1120: */
ABMAELA = ((*(&((*(&(ZAMAELA_ai->Im)))->Index)))==(*(&((*(*(&(Fstack->Nextmp))))->Mparamno))));
}
if ( ABMAELA )
{ 
BBMAELA_fc = (*(&(Fstack->Fncall)));
 /* line 1121: */
CBMAELA = (&(Fstack->Nextmp)) ;
(*CBMAELA) = (&((*(*(&(Fstack->Nextmp))))->Rest));
 /* line 1122: */
 /* line 1123: */
XKDAELA_makeintid( B, &EBMAELA );
DBMAELA.Val = A_UNITE(FBMAELA,mode1,1,EBMAELA);
DBMAELA.Rest = (A68_267 *)A68_NIL;
GBMAELA = A_HEAP(A68_267 ) ;
(*GBMAELA) = DBMAELA ;
HBMAELA = (*(&(BBMAELA_fc->Nextpvals))) ;
(*HBMAELA) = GBMAELA;
 /* line 1124: */
 /* line 1125: */
IBMAELA = (&(BBMAELA_fc->Nextpvals)) ;
(*IBMAELA) = (&((*(*(&(BBMAELA_fc->Nextpvals))))->Rest));
} 
 /* line 1126: */
 /* line 1127: */
 /* line 1128: */
JBMAELA = A68_TRUE;
} 
break;
case 1: /* INT */
KBMAELA_ai = (YAMAELA.data.mode1);
 /* line 1129: */
LBMAELA = B ;
switch ( LBMAELA.mode )
{ 
case 1: /* INT */
MBMAELA_bi = (LBMAELA.data.mode1);
 /* line 1130: */
JBMAELA = (KBMAELA_ai==MBMAELA_bi);
break;
default: 
 /* line 1131: */
 /* line 1132: */
JBMAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 1133: */
 /* line 1134: */
JBMAELA = A68_TRUE;
break;
} 
} 
A_PROC_EXIT(implicit_macro_int);
return( JBMAELA );
} 
#undef NL

A_STATIC A68_BOOL  RBMAELA_implicit_macro_type(A68_196  A, A68_196  B, A68_258 * Fstack, void *NonLocals)
#define NL(x) (((SBMAELA_implicit_macro_type *)NonLocals)->x)
{ 
A68_196  TBMAELA;  /* united object - for case conformity */
A68_200 * UBMAELA_at1;
A68_196  VBMAELA;  /* united object - for case conformity */
A68_BOOL  WBMAELA;  /* clause result */
A68_196  XBMAELA;  /* avoid structure result */
A68_BOOL  YBMAELA_res;
A68_BOOL  ZBMAELA;  /* optbool result */
A68_261 * ACMAELA_fc;
A68_262 *** BCMAELA;  /* YIELD */
A68_267  CCMAELA;  /* collateral clause result */
A68_188  DCMAELA;  /* avoid structure result */
A68_268  ECMAELA;  /* OPERATORS - mode -> union mode */
A68_267 * FCMAELA;  /* YIELD */
A68_267 ** GCMAELA;  /* YIELD */
A68_267 *** HCMAELA;  /* YIELD */
A68_BOOL  ICMAELA;  /* clause result */
A68_197 * JCMAELA_ap;
A68_196  KCMAELA;  /* united object - for case conformity */
A68_197 * LCMAELA_bp;
A68_216  MCMAELA;  /* united object - for case conformity */
A68_217  NCMAELA_app;
A68_216  OCMAELA;  /* united object - for case conformity */
A68_217  PCMAELA_bpp;
A68_170  QCMAELA;  /* avoid structure result */
A68_170  RCMAELA;  /* avoid structure result */
A68_170  SCMAELA;  /* avoid structure result */
A68_170  TCMAELA;  /* avoid structure result */
A68_BOOL  UCMAELA;  /* optbool result */
A68_170  VCMAELA;  /* avoid structure result */
A68_170  WCMAELA;  /* avoid structure result */
A68_170  XCMAELA;  /* avoid structure result */
A68_170  YCMAELA;  /* avoid structure result */
A68_218 * ZCMAELA_apa;
A68_216  ADMAELA;  /* united object - for case conformity */
A68_218 * BDMAELA_bpa;
A68_218 * CDMAELA_first;
A68_218 * DDMAELA_second;
A68_BOOL  EDMAELA_check;
A68_BOOL  FDMAELA;  /* optbool result */
A68_196 * GDMAELA_f;
A68_196 * HDMAELA_s;
A68_BOOL  IDMAELA;  /* optbool result */
A68_BOOL  JDMAELA;  /* clause result */
A68_BOOL  KDMAELA;  /* optbool result */
A68_196  LDMAELA;  /* avoid structure result */
A68_196  MDMAELA;  /* avoid structure result */
A68_BOOL  NDMAELA;  /* optbool result */
A68_216  ODMAELA;  /* united object - for case conformity */
A68_203 * PDMAELA_ar;
A68_196  QDMAELA;  /* united object - for case conformity */
A68_203 * RDMAELA_br;
A68_170  SDMAELA;  /* avoid structure result */
A68_170  TDMAELA;  /* avoid structure result */
A68_170  UDMAELA;  /* avoid structure result */
A68_170  VDMAELA;  /* avoid structure result */
A68_BOOL  WDMAELA;  /* optbool result */
A68_199 * XDMAELA_bst;
A68_196  YDMAELA;  /* avoid structure result */
A68_196  ZDMAELA;  /* united object - for case conformity */
A68_203 * AEMAELA_trr;
A68_196  BEMAELA;  /* OPERATORS - mode -> union mode */
A68_196  CEMAELA;  /* OPERATORS - mode -> union mode */
A68_205 * DEMAELA_ats;
A68_196  EEMAELA;  /* united object - for case conformity */
A68_205 * FEMAELA_bts;
A68_170  GEMAELA;  /* avoid structure result */
A68_170  HEMAELA;  /* avoid structure result */
A68_170  IEMAELA;  /* avoid structure result */
A68_170  JEMAELA;  /* avoid structure result */
A68_BOOL  KEMAELA;  /* optbool result */
A68_199 * LEMAELA_as;
A68_196  MEMAELA;  /* united object - for case conformity */
A68_199 * NEMAELA_bs;
A68_199 * OEMAELA_ast;
A68_199 * PEMAELA_bst;
A68_BOOL  QEMAELA_equal;
A68_BOOL  REMAELA;  /* optbool result */
A68_BOOL  SEMAELA;  /* optbool result */
A68_203 * TEMAELA_br;
A68_196  UEMAELA;  /* avoid structure result */
A68_196  VEMAELA;  /* united object - for case conformity */
A68_203 * WEMAELA_trr;
A68_196  XEMAELA;  /* OPERATORS - mode -> union mode */
A68_196  YEMAELA;  /* OPERATORS - mode -> union mode */
A68_202 * ZEMAELA_af;
A68_196  AFMAELA;  /* united object - for case conformity */
A68_202 * BFMAELA_bf;
A68_BOOL  CFMAELA;  /* optbool result */
A_PROC_ENTRY(implicit_macro_type);
 /* line 1137: */
{ 
 /* line 1138: */
TBMAELA = A ;
switch ( TBMAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE207,MODE196)  */
UBMAELA_at1 = (TBMAELA.data.mode4);
 /* line 1139: */
{ 
 /* line 1140: */
VBMAELA = (*(&(UBMAELA_at1->T))) ;
switch ( VBMAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
 /* line 1141: */
WBMAELA = A68_TRUE;
break;
default: 
 /* line 1142: */
 /* line 1143: */
VIDAELA_primtype( (*(&(UBMAELA_at1->T))), A68_FALSE, &XBMAELA );
WBMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),(XBMAELA, B, Fstack),(XBMAELA, B, Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
break;
} 
YBMAELA_res = WBMAELA;
 /* line 1144: */
ZBMAELA = YBMAELA_res;
if ( ZBMAELA )
{ /* line 1145: */
ZBMAELA = ((*(&(Fstack->Nextmp)))!=GQCAELA_nilnextmp);
}
if ( ZBMAELA )
{ /* line 1146: */
ZBMAELA = ((*(*(&(Fstack->Nextmp))))!=IQCAELA_nilmparams);
}
if ( ZBMAELA )
{ /* line 1147: */
ZBMAELA = ((*(&((*(&(UBMAELA_at1->Tm)))->Index)))==(*(&((*(*(&(Fstack->Nextmp))))->Mparamno))));
}
if ( ZBMAELA )
{ /* line 1148: */
ZBMAELA = ((*(&((*(&(UBMAELA_at1->Tm)))->Sort)))!=XWCAELA_expl_par);
}
if ( ZBMAELA )
{ 
ACMAELA_fc = (*(&(Fstack->Fncall)));
 /* line 1149: */
BCMAELA = (&(Fstack->Nextmp)) ;
(*BCMAELA) = (&((*(*(&(Fstack->Nextmp))))->Rest));
 /* line 1150: */
 /* line 1151: */
CLDAELA_maketypeid( B, &DCMAELA );
CCMAELA.Val = A_UNITE(ECMAELA,mode2,2,DCMAELA);
CCMAELA.Rest = (A68_267 *)A68_NIL;
FCMAELA = A_HEAP(A68_267 ) ;
(*FCMAELA) = CCMAELA ;
GCMAELA = (*(&(ACMAELA_fc->Nextpvals))) ;
(*GCMAELA) = FCMAELA;
 /* line 1152: */
 /* line 1153: */
HCMAELA = (&(ACMAELA_fc->Nextpvals)) ;
(*HCMAELA) = (&((*(*(&(ACMAELA_fc->Nextpvals))))->Rest));
} 
 /* line 1154: */
 /* line 1155: */
 /* line 1156: */
ICMAELA = YBMAELA_res;
} 
break;
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
JCMAELA_ap = (TBMAELA.data.mode1);
 /* line 1157: */
 /* line 1158: */
KCMAELA = B ;
switch ( KCMAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
LCMAELA_bp = (KCMAELA.data.mode1);
 /* line 1159: */
 /* line 1160: */
MCMAELA = (*(&(JCMAELA_ap->U))) ;
switch ( MCMAELA.mode )
{ 
case 1: /* STRUCT(REF MODE185,MODE170,MODE170)  */
NCMAELA_app = (MCMAELA.data.mode1);
 /* line 1161: */
 /* line 1162: */
OCMAELA = (*(&(LCMAELA_bp->U))) ;
switch ( OCMAELA.mode )
{ 
case 1: /* STRUCT(REF MODE185,MODE170,MODE170)  */
PCMAELA_bpp = (OCMAELA.data.mode1);
 /* line 1163: */
 /* line 1164: */
 /* line 1165: */
 /* line 1166: */
 /* line 1167: */
A_CALLPROC(NL(Simplify),(PCMAELA_bpp.Lwb, A68_TRUE, &QCMAELA),(PCMAELA_bpp.Lwb, A68_TRUE, &QCMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( QCMAELA, &RCMAELA );
A_CALLPROC(NL(Simplify),(NCMAELA_app.Lwb, A68_TRUE, &SCMAELA),(NCMAELA_app.Lwb, A68_TRUE, &SCMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( SCMAELA, &TCMAELA );
UCMAELA = XAMAELA_implicit_macro_int(TCMAELA, RCMAELA, Fstack);
if ( UCMAELA )
{ /* line 1168: */
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
A_CALLPROC(NL(Simplify),(PCMAELA_bpp.Upb, A68_TRUE, &VCMAELA),(PCMAELA_bpp.Upb, A68_TRUE, &VCMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( VCMAELA, &WCMAELA );
A_CALLPROC(NL(Simplify),(NCMAELA_app.Upb, A68_TRUE, &XCMAELA),(NCMAELA_app.Upb, A68_TRUE, &XCMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( XCMAELA, &YCMAELA );
UCMAELA = XAMAELA_implicit_macro_int(YCMAELA, WCMAELA, Fstack);
}
 /* line 1172: */
ICMAELA = UCMAELA;
break;
default: 
 /* line 1173: */
 /* line 1174: */
ICMAELA = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE185,REF MODE196,REF MODE218)  */
ZCMAELA_apa = (MCMAELA.data.mode2);
 /* line 1175: */
 /* line 1176: */
ADMAELA = (*(&(LCMAELA_bp->U))) ;
switch ( ADMAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE185,REF MODE196,REF MODE218)  */
BDMAELA_bpa = (ADMAELA.data.mode2);
 /* line 1177: */
{ 
CDMAELA_first = ZCMAELA_apa;
DDMAELA_second = BDMAELA_bpa;
 /* line 1178: */
EDMAELA_check = A68_TRUE;
 /* line 1179: */
for ( ;; )
{ 
FDMAELA = EDMAELA_check;
if ( FDMAELA )
{ /* line 1180: */
FDMAELA = (CDMAELA_first!=BQCAELA_nilpalts);
}
if ( !(FDMAELA) ) break;
 /* line 1181: */
if ( (DDMAELA_second==BQCAELA_nilpalts) )
{ 
 /* line 1182: */
EDMAELA_check = A68_FALSE;
} 
else
{ 
GDMAELA_f = (*(&(CDMAELA_first->U)));
HDMAELA_s = (*(&(DDMAELA_second->U)));
 /* line 1183: */
 /* line 1184: */
IDMAELA = (GDMAELA_f==EQCAELA_niltype);
if ( IDMAELA )
{ /* line 1185: */
IDMAELA = (HDMAELA_s==EQCAELA_niltype);
}
if ( IDMAELA )
{ 
 /* line 1186: */
JDMAELA = A68_TRUE;
} 
else
{ 
KDMAELA = (GDMAELA_f!=EQCAELA_niltype);
if ( KDMAELA )
{KDMAELA = (HDMAELA_s!=EQCAELA_niltype);
}
 /* line 1187: */
if ( KDMAELA )
{ /* line 1188: */
 /* line 1189: */
VIDAELA_primtype( (*HDMAELA_s), A68_FALSE, &LDMAELA );
VIDAELA_primtype( (*GDMAELA_f), A68_FALSE, &MDMAELA );
KDMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),(MDMAELA, LDMAELA, Fstack),(MDMAELA, LDMAELA, Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
}
JDMAELA = KDMAELA;
} 
EDMAELA_check = JDMAELA;
 /* line 1190: */
CDMAELA_first = (*(&(CDMAELA_first->Rest)));
 /* line 1191: */
 /* line 1192: */
 /* line 1193: */
DDMAELA_second = (*(&(DDMAELA_second->Rest)));
} 
}
 /* line 1194: */
NDMAELA = EDMAELA_check;
if ( NDMAELA )
{ /* line 1195: */
NDMAELA = (DDMAELA_second==BQCAELA_nilpalts);
}
 /* line 1196: */
ICMAELA = NDMAELA;
} 
break;
default: 
 /* line 1197: */
 /* line 1198: */
ICMAELA = A68_FALSE;
break;
} 
break;
case 3: /* STRUCT(REF MODE185,REF MODE54,REF MODE220)  */
 /* line 1199: */
ODMAELA = (*(&(LCMAELA_bp->U))) ;
switch ( ODMAELA.mode )
{ 
case 3: /* STRUCT(REF MODE185,REF MODE54,REF MODE220)  */
ICMAELA = A68_TRUE;
break;
default: 
 /* line 1200: */
ICMAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 1201: */
 /* line 1202: */
ICMAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 1203: */
 /* line 1204: */
ICMAELA = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(MODE196,MODE170)  */
PDMAELA_ar = (TBMAELA.data.mode7);
 /* line 1205: */
 /* line 1206: */
QDMAELA = B ;
switch ( QDMAELA.mode )
{ 
case 7: /* REF STRUCT(MODE196,MODE170)  */
RDMAELA_br = (QDMAELA.data.mode7);
 /* line 1207: */
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
 /* line 1211: */
A_CALLPROC(NL(Simplify),((*(&(RDMAELA_br->Size))), A68_TRUE, &SDMAELA),((*(&(RDMAELA_br->Size))), A68_TRUE, &SDMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( SDMAELA, &TDMAELA );
A_CALLPROC(NL(Simplify),((*(&(PDMAELA_ar->Size))), A68_TRUE, &UDMAELA),((*(&(PDMAELA_ar->Size))), A68_TRUE, &UDMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( UDMAELA, &VDMAELA );
WDMAELA = XAMAELA_implicit_macro_int(VDMAELA, TDMAELA, Fstack);
if ( WDMAELA )
{ /* line 1212: */
WDMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),((*(&(PDMAELA_ar->T))), (*(&(RDMAELA_br->T))), Fstack),((*(&(PDMAELA_ar->T))), (*(&(RDMAELA_br->T))), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
}
 /* line 1213: */
ICMAELA = WDMAELA;
break;
case 3: /* REF STRUCT(MODE196,REF MODE199)  */
XDMAELA_bst = (QDMAELA.data.mode3);
 /* line 1214: */
 /* line 1215: */
if ( (XDMAELA_bst!=DQCAELA_nilst) )
{ 
 /* line 1216: */
A_CALLPROC(NL(Sttorow),(XDMAELA_bst, &YDMAELA),(XDMAELA_bst, &YDMAELA,(NL(Sttorow)).nonlocals));
ZDMAELA = YDMAELA ;
switch ( ZDMAELA.mode )
{ 
case 7: /* REF STRUCT(MODE196,MODE170)  */
AEMAELA_trr = (ZDMAELA.data.mode7);
 /* line 1217: */
ICMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),(A_UNITE(CEMAELA,mode7,7,PDMAELA_ar), A_UNITE(BEMAELA,mode7,7,AEMAELA_trr), Fstack),(A_UNITE(CEMAELA,mode7,7,PDMAELA_ar), A_UNITE(BEMAELA,mode7,7,AEMAELA_trr), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
break;
default: 
 /* line 1218: */
 /* line 1219: */
ICMAELA = A68_FALSE;
break;
} 
} 
else
{ 
 /* line 1220: */
 /* line 1221: */
ICMAELA = A68_FALSE;
} 
break;
default: 
 /* line 1222: */
 /* line 1223: */
ICMAELA = A68_FALSE;
break;
} 
break;
case 9: /* REF STRUCT(MODE170,MODE196)  */
DEMAELA_ats = (TBMAELA.data.mode9);
 /* line 1224: */
 /* line 1225: */
EEMAELA = B ;
switch ( EEMAELA.mode )
{ 
case 9: /* REF STRUCT(MODE170,MODE196)  */
FEMAELA_bts = (EEMAELA.data.mode9);
 /* line 1226: */
 /* line 1227: */
 /* line 1228: */
 /* line 1229: */
 /* line 1230: */
A_CALLPROC(NL(Simplify),((*(&(FEMAELA_bts->Size))), A68_TRUE, &GEMAELA),((*(&(FEMAELA_bts->Size))), A68_TRUE, &GEMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( GEMAELA, &HEMAELA );
A_CALLPROC(NL(Simplify),((*(&(DEMAELA_ats->Size))), A68_TRUE, &IEMAELA),((*(&(DEMAELA_ats->Size))), A68_TRUE, &IEMAELA,(NL(Simplify)).nonlocals));
DSDAELA_uncheckedint( IEMAELA, &JEMAELA );
KEMAELA = XAMAELA_implicit_macro_int(JEMAELA, HEMAELA, Fstack);
if ( KEMAELA )
{ /* line 1231: */
KEMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),((*(&(DEMAELA_ats->Tstring))), (*(&(FEMAELA_bts->Tstring))), Fstack),((*(&(DEMAELA_ats->Tstring))), (*(&(FEMAELA_bts->Tstring))), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
}
 /* line 1232: */
ICMAELA = KEMAELA;
break;
default: 
 /* line 1233: */
 /* line 1234: */
ICMAELA = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(MODE196,REF MODE199)  */
LEMAELA_as = (TBMAELA.data.mode3);
 /* line 1235: */
 /* line 1236: */
MEMAELA = B ;
switch ( MEMAELA.mode )
{ 
case 3: /* REF STRUCT(MODE196,REF MODE199)  */
NEMAELA_bs = (MEMAELA.data.mode3);
 /* line 1237: */
{ 
OEMAELA_ast = LEMAELA_as;
PEMAELA_bst = NEMAELA_bs;
 /* line 1238: */
QEMAELA_equal = A68_TRUE;
 /* line 1239: */
for ( ;; )
{ 
REMAELA = QEMAELA_equal;
if ( REMAELA )
{ /* line 1240: */
REMAELA = (OEMAELA_ast!=DQCAELA_nilst);
}
if ( !(REMAELA) ) break;
 /* line 1241: */
if ( (PEMAELA_bst!=DQCAELA_nilst) )
{ 
QEMAELA_equal = A_CALLPROC(NL(QBMAELA_implicit_macro_type),((*(&(OEMAELA_ast->T))), (*(&(PEMAELA_bst->T))), Fstack),((*(&(OEMAELA_ast->T))), (*(&(PEMAELA_bst->T))), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
 /* line 1242: */
OEMAELA_ast = (*(&(OEMAELA_ast->Rest)));
 /* line 1243: */
 /* line 1244: */
PEMAELA_bst = (*(&(PEMAELA_bst->Rest)));
} 
else
{ 
 /* line 1245: */
 /* line 1246: */
QEMAELA_equal = A68_FALSE;
} 
}
 /* line 1247: */
SEMAELA = QEMAELA_equal;
if ( SEMAELA )
{ /* line 1248: */
SEMAELA = (PEMAELA_bst==DQCAELA_nilst);
}
 /* line 1249: */
ICMAELA = SEMAELA;
} 
break;
case 7: /* REF STRUCT(MODE196,MODE170)  */
TEMAELA_br = (MEMAELA.data.mode7);
 /* line 1250: */
 /* line 1251: */
A_CALLPROC(NL(Sttorow),(LEMAELA_as, &UEMAELA),(LEMAELA_as, &UEMAELA,(NL(Sttorow)).nonlocals));
VEMAELA = UEMAELA ;
switch ( VEMAELA.mode )
{ 
case 7: /* REF STRUCT(MODE196,MODE170)  */
WEMAELA_trr = (VEMAELA.data.mode7);
 /* line 1252: */
ICMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),(A_UNITE(YEMAELA,mode7,7,WEMAELA_trr), A_UNITE(XEMAELA,mode7,7,TEMAELA_br), Fstack),(A_UNITE(YEMAELA,mode7,7,WEMAELA_trr), A_UNITE(XEMAELA,mode7,7,TEMAELA_br), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
break;
default: 
 /* line 1253: */
 /* line 1254: */
ICMAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 1255: */
 /* line 1256: */
ICMAELA = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE196,MODE196)  */
ZEMAELA_af = (TBMAELA.data.mode6);
 /* line 1257: */
 /* line 1258: */
AFMAELA = B ;
switch ( AFMAELA.mode )
{ 
case 6: /* REF STRUCT(MODE196,MODE196)  */
BFMAELA_bf = (AFMAELA.data.mode6);
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
CFMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),((*(&(ZEMAELA_af->From))), (*(&(BFMAELA_bf->From))), Fstack),((*(&(ZEMAELA_af->From))), (*(&(BFMAELA_bf->From))), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
if ( CFMAELA )
{ /* line 1262: */
CFMAELA = A_CALLPROC(NL(QBMAELA_implicit_macro_type),((*(&(ZEMAELA_af->To))), (*(&(BFMAELA_bf->To))), Fstack),((*(&(ZEMAELA_af->To))), (*(&(BFMAELA_bf->To))), Fstack,(NL(QBMAELA_implicit_macro_type)).nonlocals));
}
 /* line 1263: */
ICMAELA = CFMAELA;
break;
default: 
 /* line 1264: */
 /* line 1265: */
ICMAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 1266: */
 /* line 1267: */
ICMAELA = A68_TRUE;
break;
} 
} 
A_PROC_EXIT(implicit_macro_type);
return( ICMAELA );
} 
#undef NL

A_STATIC A68_VOID  RFMAELA_simplify(A68_170  I, A68_BOOL  Simp, A68_170  *ReturnedValue, void *NonLocals)
#define NL(x) (((SFMAELA_simplify *)NonLocals)->x)
{ 
A68_170  TFMAELA_ans;
A68_170  UFMAELA;  /* united object - for case conformity */
A68_172 * VFMAELA_it;
A68_170  WFMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XFMAELA;  /* YIELD */
A68_171 * YFMAELA_m;
A68_170  ZFMAELA;  /* OPERATORS - mode -> union mode */
A68_176 * AGMAELA_iop;
A68_170  BGMAELA_li;
A68_170  CGMAELA_ri;
A68_170  DGMAELA;  /* avoid structure result */
A68_170  EGMAELA;  /* avoid structure result */
A68_176  FGMAELA;  /* collateral clause result */
A68_176 * GGMAELA;  /* YIELD */
A68_170  HGMAELA;  /* OPERATORS - mode -> union mode */
A68_170  IGMAELA;  /* united object - for case conformity */
A68_INT  JGMAELA_l;
A68_170  KGMAELA;  /* united object - for case conformity */
A68_INT  LGMAELA_r;
A68_BOOL  MGMAELA_overflowed;
A68_170  NGMAELA;  /* clause result */
A68_170  OGMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PGMAELA;  /* YIELD */
A68_170  QGMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RGMAELA;  /* YIELD */
A68_170  SGMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  TGMAELA;  /* YIELD */
A68_170  UGMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  VGMAELA;  /* YIELD */
A68_170  WGMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XGMAELA;  /* YIELD */
A68_170  YGMAELA;  /* OPERATORS - mode -> union mode */
A68_170  ZGMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  AHMAELA;  /* YIELD */
A68_170  BHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  CHMAELA;  /* YIELD */
A68_170  DHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EHMAELA;  /* YIELD */
A68_170  FHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  GHMAELA;  /* YIELD */
A68_170  HHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  IHMAELA;  /* YIELD */
A68_170  JHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  KHMAELA;  /* YIELD */
A68_170  LHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  MHMAELA;  /* YIELD */
A68_170  NHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  OHMAELA;  /* YIELD */
A68_170  PHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  QHMAELA;  /* YIELD */
A68_170  RHMAELA;  /* OPERATORS - skip to mode */
A68_BITS  SHMAELA;  /* SHL */
A68_170  THMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  UHMAELA;  /* YIELD */
A68_BITS  VHMAELA;  /* SHR */
A68_170  WHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XHMAELA;  /* YIELD */
A68_170  YHMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  ZHMAELA;  /* YIELD */
A68_170  AIMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  BIMAELA;  /* YIELD */
A68_170  CIMAELA;  /* OPERATORS - mode -> union mode */
A68_170  DIMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EIMAELA;  /* YIELD */
A68_170  FIMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  GIMAELA;  /* ADICOPS - MOD */
A68_170  HIMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  IIMAELA;  /* YIELD */
A68_46  LIMAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  MIMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  NIMAELA;  /* YIELD */
A68_173  OIMAELA_f;
A68_170  PIMAELA;  /* OPERATORS - mode -> union mode */
A68_173  QIMAELA_f;
A68_170  RIMAELA;  /* OPERATORS - mode -> union mode */
A68_177 * SIMAELA_mop;
A68_BOOL  TIMAELA;  /* optbool result */
A68_170  UIMAELA;  /* united object - for case conformity */
A68_171 * VIMAELA_m;
A68_BOOL  WIMAELA;  /* clause result */
A68_170  XIMAELA;  /* united object - for case conformity */
A68_171 * YIMAELA_m;
A68_170  ZIMAELA;  /* clause result */
A68_170  AJMAELA;  /* OPERATORS - mode -> union mode */
A68_31  CJMAELA_generator;   /* proc value of non-global proc */
A68_VC  HJMAELA;  /* avoid structure result */
A68_VC  IJMAELA_text;
A68_INT  JJMAELA;  /* YIELD */
A68_CHAR * KJMAELA;  /* YIELD */
A68_VC  LJMAELA;  /* OPERATORS - trim index */
A68_VC  MJMAELA;  /* YIELD */
A68_VC  NJMAELA;  /* OPERATORS - assign op */
A68_172  OJMAELA;  /* collateral clause result */
A68_172 * PJMAELA;  /* YIELD */
A68_170  QJMAELA;  /* OPERATORS - mode -> union mode */
A68_170  TJMAELA;  /* OPERATORS - skip to mode */
A68_BOOL  UJMAELA_overflowed;
A68_BOOL  VJMAELA_sqrt_fail;
A68_170  XJMAELA;  /* avoid structure result */
A68_170  WJMAELA_ri;
A68_177  YJMAELA;  /* collateral clause result */
A68_177 * ZJMAELA;  /* YIELD */
A68_170  AKMAELA;  /* OPERATORS - mode -> union mode */
A68_170  BKMAELA;  /* united object - for case conformity */
A68_INT  CKMAELA_r;
A68_170  DKMAELA;  /* clause result */
A68_170  EKMAELA;  /* OPERATORS - mode -> union mode */
A68_170  FKMAELA;  /* OPERATORS - mode -> union mode */
A68_170  GKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  HKMAELA;  /* YIELD */
A68_170  IKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  JKMAELA;  /* YIELD */
A68_170  KKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  LKMAELA;  /* YIELD */
A68_170  MKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  NKMAELA;  /* YIELD */
double OKMAELA,PKMAELA;/*ADICOPS - ENTIER*/
A68_REAL  QKMAELA;  /* ADICOPS - ENTIER */
A68_170  RKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  SKMAELA;  /* YIELD */
A68_170  TKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  UKMAELA;  /* YIELD */
A68_170  VKMAELA;  /* OPERATORS - mode -> union mode */
A68_170  WKMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XKMAELA;  /* YIELD */
A68_46  ALMAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  BLMAELA;  /* OPERATORS - mode -> union mode */
A68_INT  CLMAELA;  /* YIELD */
A68_173  DLMAELA_f;
A68_170  ELMAELA;  /* OPERATORS - mode -> union mode */
A68_174 * FLMAELA_ic;
A68_174  GLMAELA;  /* collateral clause result */
A68_170  HLMAELA;  /* avoid structure result */
A68_170  ILMAELA;  /* avoid structure result */
A68_174 * JLMAELA;  /* YIELD */
A68_170  KLMAELA;  /* OPERATORS - mode -> union mode */
A68_178 * LLMAELA_ic;
A68_170  NLMAELA;  /* avoid structure result */
A68_170  MLMAELA_cond;
A68_170  OLMAELA;  /* united object - for case conformity */
A68_INT  PLMAELA_i1;
A68_170  QLMAELA;  /* clause result */
A68_170  RLMAELA;  /* avoid structure result */
A68_170  SLMAELA;  /* avoid structure result */
A68_173  TLMAELA_f;
A68_170  ULMAELA;  /* OPERATORS - mode -> union mode */
A68_179 * VLMAELA_ivar;
A68_170  WLMAELA;  /* avoid structure result */
A68_170  XLMAELA_index;
A68_170  YLMAELA;  /* united object - for case conformity */
A68_INT  ZLMAELA_iv1;
A68_170  AMMAELA;  /* clause result */
A68_170  BMMAELA;  /* OPERATORS - mode -> union mode */
A68_179 * CMMAELA;  /* YIELD */
A68_170  DMMAELA;  /* OPERATORS - mode -> union mode */
A68_181 * EMMAELA_idef;
A68_170  FMMAELA;  /* avoid structure result */
A68_182 * GMMAELA_ib;
A68_170  HMMAELA;  /* avoid structure result */
A68_173  IMMAELA_flt;
A68_BOOL  JMMAELA;  /* optbool result */
A68_170  KMMAELA;  /* clause result */
A_PROC_ENTRY(simplify);
 /* line 1283: */
{ 
TFMAELA_ans = I;
 /* line 1284: */
 /* line 1285: */
UFMAELA = I ;
switch ( UFMAELA.mode )
{ 
case 3: /* REF STRUCT(INT,REF MODE26)  */
VFMAELA_it = (UFMAELA.data.mode3);
 /* line 1286: */
XFMAELA = (*(&(VFMAELA_it->Int))) ;
TFMAELA_ans = A_UNITE(WFMAELA,mode1,1,XFMAELA);
break;
case 2: /* REF STRUCT(REF MODE26)  */
YFMAELA_m = (UFMAELA.data.mode2);
 /* line 1287: */
{ 
A_CALLPROC(NL(Fault),(201, VJAAOSI_nullmsg),(201, VJAAOSI_nullmsg,(NL(Fault)).nonlocals));
 /* line 1288: */
(*NL(NFMAELA_error)) = A68_TRUE;
 /* line 1289: */
 /* line 1290: */
 /* line 1291: */
TFMAELA_ans = A_UNITE(ZFMAELA,mode1,1,AJDAOST_maxint);
} 
break;
case 7: /* REF STRUCT(INT,MODE170,MODE170)  */
AGMAELA_iop = (UFMAELA.data.mode7);
 /* line 1292: */
{ 
 /* line 1293: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(AGMAELA_iop->L))), A68_TRUE, &DGMAELA),((*(&(AGMAELA_iop->L))), A68_TRUE, &DGMAELA,(NL(QFMAELA_simplify)).nonlocals));
BGMAELA_li = DGMAELA;
 /* line 1294: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(AGMAELA_iop->R))), A68_TRUE, &EGMAELA),((*(&(AGMAELA_iop->R))), A68_TRUE, &EGMAELA,(NL(QFMAELA_simplify)).nonlocals));
CGMAELA_ri = EGMAELA;
 /* line 1295: */
FGMAELA.Opno = (*(&(AGMAELA_iop->Opno)));
FGMAELA.L = BGMAELA_li;
FGMAELA.R = CGMAELA_ri;
GGMAELA = A_HEAP(A68_176 ) ;
(*GGMAELA) = FGMAELA ;
TFMAELA_ans = A_UNITE(HGMAELA,mode7,7,GGMAELA);
 /* line 1296: */
IGMAELA = BGMAELA_li ;
switch ( IGMAELA.mode )
{ 
case 1: /* INT */
JGMAELA_l = (IGMAELA.data.mode1);
 /* line 1297: */
KGMAELA = CGMAELA_ri ;
switch ( KGMAELA.mode )
{ 
case 1: /* INT */
LGMAELA_r = (KGMAELA.data.mode1);
 /* line 1298: */
{ 
MGMAELA_overflowed = A68_FALSE;
 /* line 1299: */
 /* line 1300: */
switch ( (*(&(AGMAELA_iop->Opno))) )
{ 
case 1: 
{ 
 /* line 1301: */
if ( (A_SIGN(JGMAELA_l)==A_SIGN(LGMAELA_r)) )
{ 
 /* line 1302: */
PGMAELA = NJDAOST_addwithoverflowcheck(JGMAELA_l, LGMAELA_r, (&MGMAELA_overflowed)) ;
NGMAELA = A_UNITE(OGMAELA,mode1,1,PGMAELA);
} 
else
{ 
 /* line 1303: */
 /* line 1304: */
 /* line 1305: */
RGMAELA = (JGMAELA_l+LGMAELA_r) ;
NGMAELA = A_UNITE(QGMAELA,mode1,1,RGMAELA);
} 
} 
break;
case 2: 
{ 
 /* line 1306: */
if ( ((A_SIGN(JGMAELA_l)+A_SIGN(LGMAELA_r))==0) )
{ 
 /* line 1307: */
TGMAELA = UJDAOST_subtractwithoverflowcheck(JGMAELA_l, LGMAELA_r, (&MGMAELA_overflowed)) ;
NGMAELA = A_UNITE(SGMAELA,mode1,1,TGMAELA);
} 
else
{ 
 /* line 1308: */
 /* line 1309: */
 /* line 1310: */
VGMAELA = (JGMAELA_l-LGMAELA_r) ;
NGMAELA = A_UNITE(UGMAELA,mode1,1,VGMAELA);
} 
} 
break;
case 3: 
 /* line 1311: */
 /* line 1312: */
 /* line 1313: */
XGMAELA = BKDAOST_multiplywithoverflowcheck(JGMAELA_l, LGMAELA_r, (&MGMAELA_overflowed)) ;
NGMAELA = A_UNITE(WGMAELA,mode1,1,XGMAELA);
break;
case 4: 
 /* line 1314: */
if ( (LGMAELA_r==0) )
{ 
MGMAELA_overflowed = A68_TRUE;
 /* line 1315: */
NGMAELA = A_UNITE(YGMAELA,mode1,1,AJDAOST_maxint);
} 
else
{ 
 /* line 1316: */
 /* line 1317: */
AHMAELA = (JGMAELA_l/LGMAELA_r) ;
NGMAELA = A_UNITE(ZGMAELA,mode1,1,AHMAELA);
} 
break;
case 5: 
CHMAELA = ((JGMAELA_l==LGMAELA_r)) ;
NGMAELA = A_UNITE(BHMAELA,mode1,1,CHMAELA);
break;
case 6: 
EHMAELA = ((JGMAELA_l!=LGMAELA_r)) ;
NGMAELA = A_UNITE(DHMAELA,mode1,1,EHMAELA);
break;
case 7: 
GHMAELA = ((JGMAELA_l<=LGMAELA_r)) ;
NGMAELA = A_UNITE(FHMAELA,mode1,1,GHMAELA);
break;
case 8: 
 /* line 1318: */
IHMAELA = ((JGMAELA_l>=LGMAELA_r)) ;
NGMAELA = A_UNITE(HHMAELA,mode1,1,IHMAELA);
break;
case 9: 
KHMAELA = ((JGMAELA_l<LGMAELA_r)) ;
NGMAELA = A_UNITE(JHMAELA,mode1,1,KHMAELA);
break;
case 10: 
MHMAELA = ((JGMAELA_l>LGMAELA_r)) ;
NGMAELA = A_UNITE(LHMAELA,mode1,1,MHMAELA);
break;
case 11: 
 /* line 1319: */
OHMAELA = (A68_INT )(A68_BITS )((A68_BITS )JGMAELA_l&(A68_BITS )LGMAELA_r) ;
NGMAELA = A_UNITE(NHMAELA,mode1,1,OHMAELA);
break;
case 12: 
QHMAELA = (A68_INT )(A68_BITS )((A68_BITS )JGMAELA_l|(A68_BITS )LGMAELA_r) ;
NGMAELA = A_UNITE(PHMAELA,mode1,1,QHMAELA);
break;
case 13: 
 /* line 1320: */
NGMAELA = RHMAELA;
break;
case 14: 
SHMAELA = (A68_BITS )JGMAELA_l ;
UHMAELA = (A68_INT )A_SHL(SHMAELA,LGMAELA_r) ;
NGMAELA = A_UNITE(THMAELA,mode1,1,UHMAELA);
break;
case 15: 
 /* line 1321: */
VHMAELA = (A68_BITS )JGMAELA_l ;
XHMAELA = (A68_INT )A_SHR(VHMAELA,LGMAELA_r) ;
NGMAELA = A_UNITE(WHMAELA,mode1,1,XHMAELA);
break;
case 16: 
ZHMAELA = (A68_INT )(A68_BITS )((A68_BITS )JGMAELA_l&(A68_BITS )LGMAELA_r) ;
NGMAELA = A_UNITE(YHMAELA,mode1,1,ZHMAELA);
break;
case 17: 
 /* line 1322: */
BIMAELA = (A68_INT )(A68_BITS )((A68_BITS )JGMAELA_l|(A68_BITS )LGMAELA_r) ;
NGMAELA = A_UNITE(AIMAELA,mode1,1,BIMAELA);
break;
case 18: 
 /* line 1323: */
if ( (LGMAELA_r==0) )
{ 
MGMAELA_overflowed = A68_TRUE;
 /* line 1324: */
NGMAELA = A_UNITE(CIMAELA,mode1,1,AJDAOST_maxint);
} 
else
{ 
 /* line 1325: */
if ( (LGMAELA_r==IJDAOST_minint) )
{ 
if ( (JGMAELA_l<0) )
{ 
EIMAELA = (-(IJDAOST_minint-JGMAELA_l)) ;
NGMAELA = A_UNITE(DIMAELA,mode1,1,EIMAELA);
} 
else
{ 
 /* line 1326: */
NGMAELA = A_UNITE(FIMAELA,mode1,1,JGMAELA_l);
} 
} 
else
{ 
 /* line 1328: */
 /* line 1329: */
IIMAELA = A_MOD(JGMAELA_l,LGMAELA_r,GIMAELA) ;
NGMAELA = A_UNITE(HIMAELA,mode1,1,IIMAELA);
} 
} 
break;
default: 
A_CALLPROC(NL(Fault),(0, A_HVEC(LIMAELA,KIMAELA,A68_VC )),(0, A_HVEC(LIMAELA,KIMAELA,A68_VC ),(NL(Fault)).nonlocals));
 /* line 1330: */
NIMAELA = 0 ;
NGMAELA = A_UNITE(MIMAELA,mode1,1,NIMAELA);
break;
} 
TFMAELA_ans = NGMAELA;
 /* line 1331: */
if ( MGMAELA_overflowed )
{ 
 /* line 1333: */
A_CALLPROC(NL(Fault),(109, VJAAOSI_nullmsg),(109, VJAAOSI_nullmsg,(NL(Fault)).nonlocals));
 /* line 1334: */
 /* line 1335: */
 /* line 1336: */
 /* line 1337: */
(*NL(NFMAELA_error)) = A68_TRUE;
} 
} 
break;
case 4: /* STRUCT(INT)  */
OIMAELA_f = (KGMAELA.data.mode4);
{ 
(*NL(NFMAELA_error)) = A68_TRUE;
 /* line 1338: */
 /* line 1339: */
TFMAELA_ans = A_UNITE(PIMAELA,mode4,4,DRCAELA_flt);
} 
break;
default: 
 /* line 1340: */
/*SKIP*/;
break;
} 
break;
case 4: /* STRUCT(INT)  */
QIMAELA_f = (IGMAELA.data.mode4);
{ 
(*NL(NFMAELA_error)) = A68_TRUE;
 /* line 1341: */
 /* line 1342: */
TFMAELA_ans = A_UNITE(RIMAELA,mode4,4,DRCAELA_flt);
} 
break;
default: 
 /* line 1343: */
 /* line 1344: */
/*SKIP*/;
break;
} 
} 
break;
case 8: /* REF STRUCT(INT,MODE170)  */
SIMAELA_mop = (UFMAELA.data.mode8);
 /* line 1345: */
{ 
TIMAELA = ((*(&(SIMAELA_mop->Opno)))==2);
if ( TIMAELA )
{UIMAELA = (*(&(SIMAELA_mop->R))) ;
switch ( UIMAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE26)  */
VIMAELA_m = (UIMAELA.data.mode2);
WIMAELA = A68_TRUE;
break;
default: 
 /* line 1346: */
WIMAELA = A68_FALSE;
break;
} 
TIMAELA = WIMAELA;
}
if ( TIMAELA )
{ 
(*NL(NFMAELA_error)) = A68_TRUE;
 /* line 1347: */
 /* line 1348: */
XIMAELA = (*(&(SIMAELA_mop->R))) ;
switch ( XIMAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE26)  */
YIMAELA_m = (XIMAELA.data.mode2);
 /* line 1349: */
 /* line 1350: */
 /* line 1351: */
if ( ((*(&(YIMAELA_m->Text))).upb==0) )
{ 
ZIMAELA = A_UNITE(AJMAELA,mode1,1,IJDAOST_minint);
} 
else
{ 
A_CLOSURE( CJMAELA_generator, DJMAELA_generator, EJMAELA_generator );
(( EJMAELA_generator * ) ( CJMAELA_generator.nonlocals )) -> YIMAELA_m = YIMAELA_m;
A_CALLPROC(CJMAELA_generator,(A68_FALSE, &HJMAELA),(A68_FALSE, &HJMAELA,(CJMAELA_generator).nonlocals));
IJMAELA_text = HJMAELA;
 /* line 1352: */
JJMAELA = 1 ;
KJMAELA = (&A_VINDEX(IJMAELA_text,JJMAELA)) ;
(*KJMAELA) = '-';
MJMAELA = A_VTRIM(LJMAELA,(IJMAELA_text),A_VTSCRIPT(&(LJMAELA.upb),(IJMAELA_text).upb,2,(IJMAELA_text).upb)) ;
NJMAELA = (*(&(YIMAELA_m->Text))) ;
A_VASSIGN2(NJMAELA,MJMAELA,A68_CHAR );
 /* line 1353: */
OJMAELA.Int = IJDAOST_minint;
 /* line 1354: */
OJMAELA.Text = IJMAELA_text;
 /* line 1355: */
PJMAELA = A_HEAP(A68_172 ) ;
(*PJMAELA) = OJMAELA ;
ZIMAELA = A_UNITE(QJMAELA,mode3,3,PJMAELA);
} 
break;
default: 
NKDAOST_sysfault(SJMAELA);
 /* line 1356: */
 /* line 1357: */
ZIMAELA = TJMAELA;
break;
} 
TFMAELA_ans = ZIMAELA;
} 
else
{ 
UJMAELA_overflowed = A68_FALSE;
VJMAELA_sqrt_fail = A68_FALSE;
 /* line 1358: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(SIMAELA_mop->R))), A68_TRUE, &XJMAELA),((*(&(SIMAELA_mop->R))), A68_TRUE, &XJMAELA,(NL(QFMAELA_simplify)).nonlocals));
WJMAELA_ri = XJMAELA;
 /* line 1359: */
YJMAELA.Opno = (*(&(SIMAELA_mop->Opno)));
YJMAELA.R = WJMAELA_ri;
ZJMAELA = A_HEAP(A68_177 ) ;
(*ZJMAELA) = YJMAELA ;
TFMAELA_ans = A_UNITE(AKMAELA,mode8,8,ZJMAELA);
 /* line 1360: */
BKMAELA = WJMAELA_ri ;
switch ( BKMAELA.mode )
{ 
case 1: /* INT */
CKMAELA_r = (BKMAELA.data.mode1);
 /* line 1361: */
 /* line 1362: */
switch ( (*(&(SIMAELA_mop->Opno))) )
{ 
case 1: 
 /* line 1363: */
DKMAELA = A_UNITE(EKMAELA,mode1,1,CKMAELA_r);
break;
case 2: 
if ( (CKMAELA_r==IJDAOST_minint) )
{ 
UJMAELA_overflowed = A68_TRUE;
 /* line 1364: */
 /* line 1365: */
DKMAELA = A_UNITE(FKMAELA,mode1,1,AJDAOST_maxint);
} 
else
{ 
 /* line 1366: */
HKMAELA = (-CKMAELA_r) ;
DKMAELA = A_UNITE(GKMAELA,mode1,1,HKMAELA);
} 
break;
case 3: 
JKMAELA = ((CKMAELA_r==0)) ;
DKMAELA = A_UNITE(IKMAELA,mode1,1,JKMAELA);
break;
case 4: 
LKMAELA = 0 ;
DKMAELA = A_UNITE(KKMAELA,mode1,1,LKMAELA);
break;
case 5: 
 /* line 1367: */
NKMAELA = (A68_INT )~(A68_BITS )CKMAELA_r ;
DKMAELA = A_UNITE(MKMAELA,mode1,1,NKMAELA);
break;
case 6: 
 /* line 1368: */
if ( (CKMAELA_r>=0) )
{ 
 /* line 1369: */
QKMAELA = GQAAOST_sqrt((A68_REAL )CKMAELA_r) ;
SKMAELA = A_ENTIER(OKMAELA,PKMAELA,QKMAELA,(A68_INT )) ;
DKMAELA = A_UNITE(RKMAELA,mode1,1,SKMAELA);
} 
else
{ 
VJMAELA_sqrt_fail = A68_TRUE;
 /* line 1370: */
 /* line 1371: */
UKMAELA = (-1) ;
DKMAELA = A_UNITE(TKMAELA,mode1,1,UKMAELA);
} 
break;
case 7: 
if ( (CKMAELA_r==IJDAOST_minint) )
{ 
UJMAELA_overflowed = A68_TRUE;
 /* line 1372: */
 /* line 1373: */
DKMAELA = A_UNITE(VKMAELA,mode1,1,AJDAOST_maxint);
} 
else
{ 
 /* line 1374: */
XKMAELA = A_ABS(CKMAELA_r) ;
DKMAELA = A_UNITE(WKMAELA,mode1,1,XKMAELA);
} 
break;
default: 
A_CALLPROC(NL(Fault),(0, A_HVEC(ALMAELA,ZKMAELA,A68_VC )),(0, A_HVEC(ALMAELA,ZKMAELA,A68_VC ),(NL(Fault)).nonlocals));
 /* line 1375: */
CLMAELA = 0 ;
DKMAELA = A_UNITE(BLMAELA,mode1,1,CLMAELA);
break;
} 
 /* line 1376: */
TFMAELA_ans = DKMAELA;
break;
case 4: /* STRUCT(INT)  */
DLMAELA_f = (BKMAELA.data.mode4);
{ 
(*NL(NFMAELA_error)) = A68_TRUE;
 /* line 1377: */
 /* line 1378: */
TFMAELA_ans = A_UNITE(ELMAELA,mode4,4,DRCAELA_flt);
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1379: */
if ( UJMAELA_overflowed )
{ 
 /* line 1381: */
A_CALLPROC(NL(Fault),(109, VJAAOSI_nullmsg),(109, VJAAOSI_nullmsg,(NL(Fault)).nonlocals));
 /* line 1382: */
 /* line 1383: */
(*NL(NFMAELA_error)) = A68_TRUE;
} 
 /* line 1384: */
if ( VJMAELA_sqrt_fail )
{ 
 /* line 1386: */
A_CALLPROC(NL(Fault),(137, VJAAOSI_nullmsg),(137, VJAAOSI_nullmsg,(NL(Fault)).nonlocals));
 /* line 1387: */
 /* line 1388: */
 /* line 1389: */
 /* line 1390: */
 /* line 1391: */
(*NL(NFMAELA_error)) = A68_TRUE;
} 
} 
} 
break;
case 5: /* REF STRUCT(MODE170,MODE170,INT)  */
FLMAELA_ic = (UFMAELA.data.mode5);
 /* line 1392: */
 /* line 1393: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(FLMAELA_ic->Integer))), Simp, &HLMAELA),((*(&(FLMAELA_ic->Integer))), Simp, &HLMAELA,(NL(QFMAELA_simplify)).nonlocals));
GLMAELA.Integer = HLMAELA;
 /* line 1394: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(FLMAELA_ic->Standard))), Simp, &ILMAELA),((*(&(FLMAELA_ic->Standard))), Simp, &ILMAELA,(NL(QFMAELA_simplify)).nonlocals));
GLMAELA.Standard = ILMAELA;
 /* line 1395: */
GLMAELA.Test = (*(&(FLMAELA_ic->Test)));
 /* line 1396: */
JLMAELA = A_HEAP(A68_174 ) ;
(*JLMAELA) = GLMAELA ;
TFMAELA_ans = A_UNITE(KLMAELA,mode5,5,JLMAELA);
break;
case 9: /* REF STRUCT(MODE170,MODE170,MODE170)  */
LLMAELA_ic = (UFMAELA.data.mode9);
 /* line 1397: */
{ 
A_CALLPROC(NL(QFMAELA_simplify),((*(&(LLMAELA_ic->Cond))), Simp, &NLMAELA),((*(&(LLMAELA_ic->Cond))), Simp, &NLMAELA,(NL(QFMAELA_simplify)).nonlocals));
MLMAELA_cond = NLMAELA;
 /* line 1398: */
 /* line 1399: */
OLMAELA = MLMAELA_cond ;
switch ( OLMAELA.mode )
{ 
case 1: /* INT */
PLMAELA_i1 = (OLMAELA.data.mode1);
if ( (PLMAELA_i1!=0) )
{ 
 /* line 1400: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(LLMAELA_ic->T))), Simp, &RLMAELA),((*(&(LLMAELA_ic->T))), Simp, &RLMAELA,(NL(QFMAELA_simplify)).nonlocals));
QLMAELA = RLMAELA;
} 
else
{ 
A_CALLPROC(NL(QFMAELA_simplify),((*(&(LLMAELA_ic->F))), Simp, &SLMAELA),((*(&(LLMAELA_ic->F))), Simp, &SLMAELA,(NL(QFMAELA_simplify)).nonlocals));
QLMAELA = SLMAELA;
} 
 /* line 1401: */
TFMAELA_ans = QLMAELA;
break;
case 4: /* STRUCT(INT)  */
TLMAELA_f = (OLMAELA.data.mode4);
{ 
(*NL(NFMAELA_error)) = A68_TRUE;
 /* line 1402: */
 /* line 1403: */
TFMAELA_ans = A_UNITE(ULMAELA,mode4,4,DRCAELA_flt);
} 
break;
default: 
 /* line 1404: */
 /* line 1405: */
/*SKIP*/;
break;
} 
} 
break;
case 10: /* REF STRUCT(INT,MODE170,MODE170,MODE170)  */
VLMAELA_ivar = (UFMAELA.data.mode10);
 /* line 1406: */
{ 
A_CALLPROC(NL(QFMAELA_simplify),((*(&(VLMAELA_ivar->Index))), Simp, &WLMAELA),((*(&(VLMAELA_ivar->Index))), Simp, &WLMAELA,(NL(QFMAELA_simplify)).nonlocals));
XLMAELA_index = WLMAELA;
 /* line 1407: */
 /* line 1408: */
YLMAELA = XLMAELA_index ;
switch ( YLMAELA.mode )
{ 
case 1: /* INT */
ZLMAELA_iv1 = (YLMAELA.data.mode1);
 /* line 1409: */
AMMAELA = A_UNITE(BMMAELA,mode1,1,ZLMAELA_iv1);
break;
default: 
 /* line 1410: */
 /* line 1411: */
CMMAELA = A_HEAP(A68_179 ) ;
(*CMMAELA) = (*VLMAELA_ivar) ;
AMMAELA = A_UNITE(DMMAELA,mode10,10,CMMAELA);
break;
} 
 /* line 1412: */
TFMAELA_ans = AMMAELA;
} 
break;
case 12: /* REF STRUCT(REF MODE185,INT,MODE170)  */
EMMAELA_idef = (UFMAELA.data.mode12);
 /* line 1413: */
 /* line 1414: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(EMMAELA_idef->I))), Simp, &FMMAELA),((*(&(EMMAELA_idef->I))), Simp, &FMMAELA,(NL(QFMAELA_simplify)).nonlocals));
TFMAELA_ans = FMMAELA;
break;
case 13: /* REF STRUCT(MODE170)  */
GMMAELA_ib = (UFMAELA.data.mode13);
 /* line 1415: */
A_CALLPROC(NL(QFMAELA_simplify),((*(&(GMMAELA_ib->Ibracket))), Simp, &HMMAELA),((*(&(GMMAELA_ib->Ibracket))), Simp, &HMMAELA,(NL(QFMAELA_simplify)).nonlocals));
TFMAELA_ans = HMMAELA;
break;
case 4: /* STRUCT(INT)  */
IMMAELA_flt = (UFMAELA.data.mode4);
 /* line 1416: */
 /* line 1417: */
(*NL(NFMAELA_error)) = A68_TRUE;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1419: */
 /* line 1420: */
JMMAELA = (*NL(NFMAELA_error));
if ( ! JMMAELA )
{JMMAELA = Simp;
}
 /* line 1421: */
if ( JMMAELA )
{ 
 /* line 1422: */
KMMAELA = TFMAELA_ans;
} 
else
{ 
 /* line 1423: */
KMMAELA = I;
} 
} 
A_PROC_EXIT(simplify);
*ReturnedValue = (KMMAELA);
return;
} 
#undef NL
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */

A68_VOID  TGKAELA_inkept_ext(A68_380  Findid, A68_BOOL  Export, A68_381  Newextid, A68_382  Newextfn, A68_117  Inkeptint, A68_156  Inkeptid, A68_161  Charset, A68_383  Fault)
{ 
A68_VC  UGKAELA_id;
A68_197 * VGKAELA_primset;
A68_192  WGKAELA_attrid;
A68_188  XGKAELA_typeid;
A68_187  YGKAELA_intid;
A68_189  ZGKAELA_ctypeid;
A68_285  AHKAELA_types;
A68_54  BHKAELA_old;
A68_385  CHKAELA_ints;
A68_54  DHKAELA_oldints;
A68_386  EHKAELA_ctypes;
A68_54  FHKAELA_oldctypes;
A68_387  GHKAELA_attrs;
A68_54  HHKAELA_oldattrs;
A68_185 * IHKAELA_idinfo;
A68_185 * JHKAELA_idinfo1;
A68_INT  KHKAELA_notypes;
A68_INT  LHKAELA_noints;
A68_INT  MHKAELA_noctypes;
A68_INT  NHKAELA_noattrs;
A68_INT  OHKAELA_nofns;
A68_INT  PHKAELA_v;
A68_BOOL  QHKAELA_outofdate;
A68_INT  RHKAELA_next;
A68_117  SHKAELA_in;   /* proc value of non-global proc */
A68_156  XHKAELA_inid;   /* proc value of non-global proc */
A68_129  CIKAELA_skipinteger;   /* proc value of non-global proc */
A68_389  MIKAELA_ininteger;   /* proc value of non-global proc */
A68_391  MKKAELA_instrings;   /* proc value of non-global proc */
A68_393  BLKAELA_inattrs;   /* proc value of non-global proc */
A68_395  GMKAELA_intype;   /* proc value of non-global proc */
A68_397  COKAELA_palts;   /* proc value of non-global proc */
A68_398  YOKAELA_inprimtype;   /* proc value of non-global proc */
A68_400  USKAELA_inddecs;   /* proc value of non-global proc */
A68_129  UTKAELA_skipattrs;   /* proc value of non-global proc */
A68_401  HUKAELA_inmparams;
A68_402  LUKAELA_infndec;   /* proc value of non-global proc */
A68_401  JVKAELA_anonymous;   /* proc value of non-global proc */
A68_129  HXKAELA_skiptype;   /* proc value of non-global proc */
A68_403  GYKAELA_inctype;   /* proc value of non-global proc */
A68_114  ZELAELA_inexttypes;   /* proc value of non-global proc */
A68_114  GGLAELA_inextints;   /* proc value of non-global proc */
A68_114  NHLAELA_inextattrs;   /* proc value of non-global proc */
A68_114  UILAELA_inextctypes;   /* proc value of non-global proc */
A68_129  AKLAELA_skipddecs;   /* proc value of non-global proc */
A68_114  GKLAELA_inextfns;   /* proc value of non-global proc */
A68_VC  KKLAELA;  /* avoid structure result */
A68_196  LKLAELA;  /* avoid structure result */
A68_196 * MKLAELA;  /* YIELD */
A68_186  NKLAELA;  /* OPERATORS - mode -> union mode */
A68_186 * OKLAELA;  /* YIELD */
A68_BOOL * PKLAELA;  /* YIELD */
A68_VC  QKLAELA;  /* avoid structure result */
A68_185  RKLAELA;  /* collateral clause result */
A68_186  SKLAELA;  /* OPERATORS - mode -> union mode */
A68_170  UKLAELA;  /* avoid structure result */
A68_170  TKLAELA_int1;
A68_181  VKLAELA;  /* collateral clause result */
A68_181 * WKLAELA;  /* YIELD */
A68_170  XKLAELA;  /* OPERATORS - mode -> union mode */
A68_170 * YKLAELA;  /* YIELD */
A68_186  ZKLAELA;  /* OPERATORS - mode -> union mode */
A68_186 * ALLAELA;  /* YIELD */
A68_BOOL * BLLAELA;  /* YIELD */
A68_INT  CLLAELA;  /* to part of loop */
A68_INT  DLLAELA;  /* loop control */
A68_264 * ELLAELA_fdec;
A68_INT * FLLAELA;  /* YIELD */
A68_BOOL * GLLAELA;  /* YIELD */
A68_VC  HLLAELA;  /* avoid structure result */
A68_185  ILLAELA;  /* collateral clause result */
A68_186  JLLAELA;  /* OPERATORS - mode -> union mode */
A68_227  KLLAELA;  /* avoid structure result */
A68_227  LLLAELA_ctype1;
A68_228  MLLAELA;  /* collateral clause result */
A68_196  NLLAELA;  /* OPERATORS - mode -> union mode */
A68_228 * OLLAELA;  /* YIELD */
A68_227  PLLAELA;  /* OPERATORS - mode -> union mode */
A68_227 * QLLAELA;  /* YIELD */
A68_186  RLLAELA;  /* OPERATORS - mode -> union mode */
A68_186 * SLLAELA;  /* YIELD */
A68_BOOL * TLLAELA;  /* YIELD */
A68_VC  ULLAELA;  /* avoid structure result */
A68_185  VLLAELA;  /* collateral clause result */
A68_186  WLLAELA;  /* OPERATORS - mode -> union mode */
A68_208  XLLAELA;  /* avoid structure result */
A68_208  YLLAELA_attr;
A68_209  ZLLAELA;  /* collateral clause result */
A68_209 * AMLAELA;  /* YIELD */
A68_208  BMLAELA;  /* OPERATORS - mode -> union mode */
A68_208 * CMLAELA;  /* YIELD */
A68_186  DMLAELA;  /* OPERATORS - mode -> union mode */
A68_186 * EMLAELA;  /* YIELD */
A68_BOOL * FMLAELA;  /* YIELD */
A_PROC_ENTRY(inkept_ext);
 /* line 101: */
{ 
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 110: */
QHKAELA_outofdate = A68_FALSE;
 /* line 111: */
RHKAELA_next = (-1);
 /* line 113: */
 /* line 114: */
A_CLOSURE( SHKAELA_in, THKAELA_in, UHKAELA_in );
(( UHKAELA_in * ) ( SHKAELA_in.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( UHKAELA_in * ) ( SHKAELA_in.nonlocals )) -> Inkeptint = Inkeptint;
 /* line 120: */
A_CLOSURE( XHKAELA_inid, YHKAELA_inid, ZHKAELA_inid );
(( ZHKAELA_inid * ) ( XHKAELA_inid.nonlocals )) -> Inkeptid = Inkeptid;
 /* line 122: */
 /* line 123: */
 /* line 124: */
A_CLOSURE( CIKAELA_skipinteger, DIKAELA_skipinteger, EIKAELA_skipinteger );
(( EIKAELA_skipinteger * ) ( CIKAELA_skipinteger.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( EIKAELA_skipinteger * ) ( CIKAELA_skipinteger.nonlocals )) -> CIKAELA_skipinteger = CIKAELA_skipinteger;
(( EIKAELA_skipinteger * ) ( CIKAELA_skipinteger.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( EIKAELA_skipinteger * ) ( CIKAELA_skipinteger.nonlocals )) -> Fault = Fault;
 /* line 144: */
A_CLOSURE( MIKAELA_ininteger, NIKAELA_ininteger, OIKAELA_ininteger );
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> DHKAELA_oldints = (&DHKAELA_oldints);
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> CHKAELA_ints = (&CHKAELA_ints);
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> MIKAELA_ininteger = MIKAELA_ininteger;
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> CIKAELA_skipinteger = CIKAELA_skipinteger;
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( OIKAELA_ininteger * ) ( MIKAELA_ininteger.nonlocals )) -> Fault = Fault;
 /* line 186: */
 /* line 187: */
 /* line 188: */
A_CLOSURE( MKKAELA_instrings, NKKAELA_instrings, OKKAELA_instrings );
(( OKKAELA_instrings * ) ( MKKAELA_instrings.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( OKKAELA_instrings * ) ( MKKAELA_instrings.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
 /* line 197: */
 /* line 208: */
A_CLOSURE( BLKAELA_inattrs, CLKAELA_inattrs, DLKAELA_inattrs );
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> BLKAELA_inattrs = BLKAELA_inattrs;
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> HHKAELA_oldattrs = (&HHKAELA_oldattrs);
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> GHKAELA_attrs = (&GHKAELA_attrs);
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( DLKAELA_inattrs * ) ( BLKAELA_inattrs.nonlocals )) -> MKKAELA_instrings = MKKAELA_instrings;
 /* line 239: */
A_CLOSURE( GMKAELA_intype, HMKAELA_intype, IMKAELA_intype );
(( IMKAELA_intype * ) ( GMKAELA_intype.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( IMKAELA_intype * ) ( GMKAELA_intype.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( IMKAELA_intype * ) ( GMKAELA_intype.nonlocals )) -> GMKAELA_intype = GMKAELA_intype;
(( IMKAELA_intype * ) ( GMKAELA_intype.nonlocals )) -> BHKAELA_old = (&BHKAELA_old);
(( IMKAELA_intype * ) ( GMKAELA_intype.nonlocals )) -> AHKAELA_types = (&AHKAELA_types);
(( IMKAELA_intype * ) ( GMKAELA_intype.nonlocals )) -> MIKAELA_ininteger = MIKAELA_ininteger;
 /* line 280: */
A_CLOSURE( COKAELA_palts, DOKAELA_palts, EOKAELA_palts );
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> GMKAELA_intype = GMKAELA_intype;
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> Export = Export;
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> Newextid = Newextid;
(( EOKAELA_palts * ) ( COKAELA_palts.nonlocals )) -> COKAELA_palts = COKAELA_palts;
 /* line 294: */
A_CLOSURE( YOKAELA_inprimtype, ZOKAELA_inprimtype, APKAELA_inprimtype );
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> IHKAELA_idinfo = (&IHKAELA_idinfo);
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> Newextid = Newextid;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> Export = Export;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> VGKAELA_primset = (&VGKAELA_primset);
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> COKAELA_palts = COKAELA_palts;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> JHKAELA_idinfo1 = (&JHKAELA_idinfo1);
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> MIKAELA_ininteger = MIKAELA_ininteger;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> Charset = Charset;
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( APKAELA_inprimtype * ) ( YOKAELA_inprimtype.nonlocals )) -> GMKAELA_intype = GMKAELA_intype;
 /* line 360: */
A_CLOSURE( USKAELA_inddecs, VSKAELA_inddecs, WSKAELA_inddecs );
(( WSKAELA_inddecs * ) ( USKAELA_inddecs.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( WSKAELA_inddecs * ) ( USKAELA_inddecs.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( WSKAELA_inddecs * ) ( USKAELA_inddecs.nonlocals )) -> GMKAELA_intype = GMKAELA_intype;
(( WSKAELA_inddecs * ) ( USKAELA_inddecs.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
 /* line 385: */
 /* line 386: */
A_CLOSURE( UTKAELA_skipattrs, VTKAELA_skipattrs, WTKAELA_skipattrs );
(( WTKAELA_skipattrs * ) ( UTKAELA_skipattrs.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( WTKAELA_skipattrs * ) ( UTKAELA_skipattrs.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( WTKAELA_skipattrs * ) ( UTKAELA_skipattrs.nonlocals )) -> UTKAELA_skipattrs = UTKAELA_skipattrs;
(( WTKAELA_skipattrs * ) ( UTKAELA_skipattrs.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
 /* line 405: */
 /* line 407: */
A_CLOSURE( LUKAELA_infndec, MUKAELA_infndec, NUKAELA_infndec );
(( NUKAELA_infndec * ) ( LUKAELA_infndec.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( NUKAELA_infndec * ) ( LUKAELA_infndec.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( NUKAELA_infndec * ) ( LUKAELA_infndec.nonlocals )) -> HUKAELA_inmparams = (&HUKAELA_inmparams);
(( NUKAELA_infndec * ) ( LUKAELA_infndec.nonlocals )) -> UTKAELA_skipattrs = UTKAELA_skipattrs;
(( NUKAELA_infndec * ) ( LUKAELA_infndec.nonlocals )) -> USKAELA_inddecs = USKAELA_inddecs;
 /* line 424: */
A_CLOSURE( JVKAELA_anonymous, KVKAELA_anonymous, LVKAELA_anonymous );
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> LUKAELA_infndec = LUKAELA_infndec;
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> GHKAELA_attrs = (&GHKAELA_attrs);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> HHKAELA_oldattrs = (&HHKAELA_oldattrs);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> CHKAELA_ints = (&CHKAELA_ints);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> DHKAELA_oldints = (&DHKAELA_oldints);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> YOKAELA_inprimtype = YOKAELA_inprimtype;
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> AHKAELA_types = (&AHKAELA_types);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> BHKAELA_old = (&BHKAELA_old);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> GMKAELA_intype = GMKAELA_intype;
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> EHKAELA_ctypes = (&EHKAELA_ctypes);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> FHKAELA_oldctypes = (&FHKAELA_oldctypes);
(( LVKAELA_anonymous * ) ( JVKAELA_anonymous.nonlocals )) -> Fault = Fault;
HUKAELA_inmparams = JVKAELA_anonymous;
 /* line 476: */
 /* line 477: */
A_CLOSURE( HXKAELA_skiptype, IXKAELA_skiptype, JXKAELA_skiptype );
(( JXKAELA_skiptype * ) ( HXKAELA_skiptype.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( JXKAELA_skiptype * ) ( HXKAELA_skiptype.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( JXKAELA_skiptype * ) ( HXKAELA_skiptype.nonlocals )) -> HXKAELA_skiptype = HXKAELA_skiptype;
(( JXKAELA_skiptype * ) ( HXKAELA_skiptype.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( JXKAELA_skiptype * ) ( HXKAELA_skiptype.nonlocals )) -> CIKAELA_skipinteger = CIKAELA_skipinteger;
 /* line 528: */
A_CLOSURE( GYKAELA_inctype, HYKAELA_inctype, IYKAELA_inctype );
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> BHKAELA_old = (&BHKAELA_old);
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> AHKAELA_types = (&AHKAELA_types);
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> GYKAELA_inctype = GYKAELA_inctype;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> MIKAELA_ininteger = MIKAELA_ininteger;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> Fault = Fault;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> MKKAELA_instrings = MKKAELA_instrings;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> UTKAELA_skipattrs = UTKAELA_skipattrs;
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> CHKAELA_ints = (&CHKAELA_ints);
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> FHKAELA_oldctypes = (&FHKAELA_oldctypes);
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> EHKAELA_ctypes = (&EHKAELA_ctypes);
(( IYKAELA_inctype * ) ( GYKAELA_inctype.nonlocals )) -> GMKAELA_intype = GMKAELA_intype;
 /* line 640: */
A_CLOSURE( ZELAELA_inexttypes, AFLAELA_inexttypes, BFLAELA_inexttypes );
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> AHKAELA_types = (&AHKAELA_types);
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> BHKAELA_old = (&BHKAELA_old);
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> Findid = Findid;
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> Fault = Fault;
(( BFLAELA_inexttypes * ) ( ZELAELA_inexttypes.nonlocals )) -> HXKAELA_skiptype = HXKAELA_skiptype;
 /* line 659: */
A_CLOSURE( GGLAELA_inextints, HGLAELA_inextints, IGLAELA_inextints );
(( IGLAELA_inextints * ) ( GGLAELA_inextints.nonlocals )) -> CHKAELA_ints = (&CHKAELA_ints);
(( IGLAELA_inextints * ) ( GGLAELA_inextints.nonlocals )) -> DHKAELA_oldints = (&DHKAELA_oldints);
(( IGLAELA_inextints * ) ( GGLAELA_inextints.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( IGLAELA_inextints * ) ( GGLAELA_inextints.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( IGLAELA_inextints * ) ( GGLAELA_inextints.nonlocals )) -> Findid = Findid;
(( IGLAELA_inextints * ) ( GGLAELA_inextints.nonlocals )) -> Fault = Fault;
 /* line 676: */
A_CLOSURE( NHLAELA_inextattrs, OHLAELA_inextattrs, PHLAELA_inextattrs );
(( PHLAELA_inextattrs * ) ( NHLAELA_inextattrs.nonlocals )) -> GHKAELA_attrs = (&GHKAELA_attrs);
(( PHLAELA_inextattrs * ) ( NHLAELA_inextattrs.nonlocals )) -> HHKAELA_oldattrs = (&HHKAELA_oldattrs);
(( PHLAELA_inextattrs * ) ( NHLAELA_inextattrs.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( PHLAELA_inextattrs * ) ( NHLAELA_inextattrs.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( PHLAELA_inextattrs * ) ( NHLAELA_inextattrs.nonlocals )) -> Findid = Findid;
(( PHLAELA_inextattrs * ) ( NHLAELA_inextattrs.nonlocals )) -> Fault = Fault;
 /* line 693: */
A_CLOSURE( UILAELA_inextctypes, VILAELA_inextctypes, WILAELA_inextctypes );
(( WILAELA_inextctypes * ) ( UILAELA_inextctypes.nonlocals )) -> EHKAELA_ctypes = (&EHKAELA_ctypes);
(( WILAELA_inextctypes * ) ( UILAELA_inextctypes.nonlocals )) -> FHKAELA_oldctypes = (&FHKAELA_oldctypes);
(( WILAELA_inextctypes * ) ( UILAELA_inextctypes.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( WILAELA_inextctypes * ) ( UILAELA_inextctypes.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( WILAELA_inextctypes * ) ( UILAELA_inextctypes.nonlocals )) -> Findid = Findid;
(( WILAELA_inextctypes * ) ( UILAELA_inextctypes.nonlocals )) -> Fault = Fault;
 /* line 710: */
 /* line 711: */
A_CLOSURE( AKLAELA_skipddecs, BKLAELA_skipddecs, CKLAELA_skipddecs );
(( CKLAELA_skipddecs * ) ( AKLAELA_skipddecs.nonlocals )) -> RHKAELA_next = (&RHKAELA_next);
(( CKLAELA_skipddecs * ) ( AKLAELA_skipddecs.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( CKLAELA_skipddecs * ) ( AKLAELA_skipddecs.nonlocals )) -> HXKAELA_skiptype = HXKAELA_skiptype;
(( CKLAELA_skipddecs * ) ( AKLAELA_skipddecs.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
 /* line 722: */
A_CLOSURE( GKLAELA_inextfns, HKLAELA_inextfns, IKLAELA_inextfns );
(( IKLAELA_inextfns * ) ( GKLAELA_inextfns.nonlocals )) -> SHKAELA_in = SHKAELA_in;
(( IKLAELA_inextfns * ) ( GKLAELA_inextfns.nonlocals )) -> XHKAELA_inid = XHKAELA_inid;
(( IKLAELA_inextfns * ) ( GKLAELA_inextfns.nonlocals )) -> AKLAELA_skipddecs = AKLAELA_skipddecs;
 /* line 729: */
 /* line 731: */
switch ( (A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals))-64) )
{ 
case 1: 
{ 
A_CALLPROC(XHKAELA_inid,( &KKLAELA),( &KKLAELA,(XHKAELA_inid).nonlocals));
UGKAELA_id = KKLAELA;
PHKAELA_v = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 732: */
NHKAELA_noattrs = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
LHKAELA_noints = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
KHKAELA_notypes = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 733: */
A_CALLPROC(NHLAELA_inextattrs,(NHKAELA_noattrs),(NHKAELA_noattrs,(NHLAELA_inextattrs).nonlocals));
A_CALLPROC(GGLAELA_inextints,(LHKAELA_noints),(LHKAELA_noints,(GGLAELA_inextints).nonlocals));
A_CALLPROC(ZELAELA_inexttypes,(KHKAELA_notypes),(KHKAELA_notypes,(ZELAELA_inexttypes).nonlocals));
 /* line 734: */
A_CALLPROC(UTKAELA_skipattrs,(),((UTKAELA_skipattrs).nonlocals));
 /* line 735: */
A_CALLPROC(YOKAELA_inprimtype,((&QHKAELA_outofdate), (-1), PHKAELA_v, UGKAELA_id, &LKLAELA),((&QHKAELA_outofdate), (-1), PHKAELA_v, UGKAELA_id, &LKLAELA,(YOKAELA_inprimtype).nonlocals));
MKLAELA = (&((&XGKAELA_typeid)->T)) ;
(*MKLAELA) = LKLAELA;
 /* line 736: */
OKLAELA = (&(IHKAELA_idinfo->U)) ;
(*OKLAELA) = A_UNITE(NKLAELA,mode2,2,XGKAELA_typeid);
 /* line 737: */
 /* line 739: */
PKLAELA = (&(IHKAELA_idinfo->Outofdate)) ;
(*PKLAELA) = QHKAELA_outofdate;
} 
break;
case 2: 
{ 
A_CALLPROC(XHKAELA_inid,( &QKLAELA),( &QKLAELA,(XHKAELA_inid).nonlocals));
UGKAELA_id = QKLAELA;
PHKAELA_v = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
NHKAELA_noattrs = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
LHKAELA_noints = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 740: */
A_CALLPROC(NHLAELA_inextattrs,(NHKAELA_noattrs),(NHKAELA_noattrs,(NHLAELA_inextattrs).nonlocals));
A_CALLPROC(GGLAELA_inextints,(LHKAELA_noints),(LHKAELA_noints,(GGLAELA_inextints).nonlocals));
 /* line 741: */
RKLAELA.Scope = (-1);
RKLAELA.Vnno = PHKAELA_v;
RKLAELA.Text = A68_FALSE;
RKLAELA.Outofdate = A68_FALSE;
RKLAELA.Inscope = A68_TRUE;
RKLAELA.Export = Export;
RKLAELA.Id = UGKAELA_id;
RKLAELA.U = A_UNITE(SKLAELA,mode10,10,CRCAELA_notdec);
IHKAELA_idinfo = (*(&(A_CALLPROC(Newextid,(RKLAELA),(RKLAELA,(Newextid).nonlocals))->Idinfo)));
 /* line 742: */
A_CALLPROC(UTKAELA_skipattrs,(),((UTKAELA_skipattrs).nonlocals));
 /* line 743: */
A_CALLPROC(MIKAELA_ininteger,((&QHKAELA_outofdate), &UKLAELA),((&QHKAELA_outofdate), &UKLAELA,(MIKAELA_ininteger).nonlocals));
TKLAELA_int1 = UKLAELA;
 /* line 744: */
VKLAELA.Idinfo = IHKAELA_idinfo;
VKLAELA.Intno = (-1);
VKLAELA.I = TKLAELA_int1;
WKLAELA = A_HEAP(A68_181 ) ;
(*WKLAELA) = VKLAELA ;
YKLAELA = (&((&YGKAELA_intid)->I)) ;
(*YKLAELA) = A_UNITE(XKLAELA,mode12,12,WKLAELA);
 /* line 745: */
ALLAELA = (&(IHKAELA_idinfo->U)) ;
(*ALLAELA) = A_UNITE(ZKLAELA,mode1,1,YGKAELA_intid);
 /* line 746: */
 /* line 747: */
 /* line 749: */
BLLAELA = (&(IHKAELA_idinfo->Outofdate)) ;
(*BLLAELA) = QHKAELA_outofdate;
} 
break;
case 3: 
{ 
OHKAELA_nofns = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 750: */
CLLAELA = (OHKAELA_nofns*3);
for ( DLLAELA = 1;
DLLAELA <= CLLAELA;
DLLAELA += 1 )
{ 
A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
}
 /* line 751: */
A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 752: */
NHKAELA_noattrs = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
LHKAELA_noints = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
KHKAELA_notypes = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
MHKAELA_noctypes = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 753: */
A_CALLPROC(NHLAELA_inextattrs,(NHKAELA_noattrs),(NHKAELA_noattrs,(NHLAELA_inextattrs).nonlocals));
A_CALLPROC(GGLAELA_inextints,(LHKAELA_noints),(LHKAELA_noints,(GGLAELA_inextints).nonlocals));
A_CALLPROC(ZELAELA_inexttypes,(KHKAELA_notypes),(KHKAELA_notypes,(ZELAELA_inexttypes).nonlocals));
 /* line 754: */
A_CALLPROC(UILAELA_inextctypes,(MHKAELA_noctypes),(MHKAELA_noctypes,(UILAELA_inextctypes).nonlocals));
A_CALLPROC(GKLAELA_inextfns,(OHKAELA_nofns),(OHKAELA_nofns,(GKLAELA_inextfns).nonlocals));
 /* line 755: */
ELLAELA_fdec = A_CALLPROC(LUKAELA_infndec,((&QHKAELA_outofdate), 1, Export),((&QHKAELA_outofdate), 1, Export,(LUKAELA_infndec).nonlocals));
 /* line 756: */
FLLAELA = (&((*(&(ELLAELA_fdec->Fninfo)))->Vnno)) ;
(*FLLAELA) = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 757: */
GLLAELA = (&((*(&(ELLAELA_fdec->Fninfo)))->Import)) ;
(*GLLAELA) = (A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals))==1);
 /* line 758: */
 /* line 759: */
 /* line 761: */
A_CALLPROC(Newextfn,(ELLAELA_fdec),(ELLAELA_fdec,(Newextfn).nonlocals));
} 
break;
case 4: 
{ 
A_CALLPROC(XHKAELA_inid,( &HLLAELA),( &HLLAELA,(XHKAELA_inid).nonlocals));
UGKAELA_id = HLLAELA;
PHKAELA_v = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 762: */
NHKAELA_noattrs = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
LHKAELA_noints = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
KHKAELA_notypes = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
MHKAELA_noctypes = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
 /* line 763: */
A_CALLPROC(NHLAELA_inextattrs,(NHKAELA_noattrs),(NHKAELA_noattrs,(NHLAELA_inextattrs).nonlocals));
A_CALLPROC(GGLAELA_inextints,(LHKAELA_noints),(LHKAELA_noints,(GGLAELA_inextints).nonlocals));
A_CALLPROC(ZELAELA_inexttypes,(KHKAELA_notypes),(KHKAELA_notypes,(ZELAELA_inexttypes).nonlocals));
 /* line 764: */
A_CALLPROC(UILAELA_inextctypes,(MHKAELA_noctypes),(MHKAELA_noctypes,(UILAELA_inextctypes).nonlocals));
 /* line 765: */
A_CALLPROC(UTKAELA_skipattrs,(),((UTKAELA_skipattrs).nonlocals));
 /* line 766: */
ILLAELA.Scope = (-1);
ILLAELA.Vnno = PHKAELA_v;
ILLAELA.Text = A68_FALSE;
ILLAELA.Outofdate = A68_FALSE;
ILLAELA.Inscope = A68_TRUE;
ILLAELA.Export = Export;
ILLAELA.Id = UGKAELA_id;
ILLAELA.U = A_UNITE(JLLAELA,mode10,10,CRCAELA_notdec);
IHKAELA_idinfo = (*(&(A_CALLPROC(Newextid,(ILLAELA),(ILLAELA,(Newextid).nonlocals))->Idinfo)));
 /* line 767: */
A_CALLPROC(GYKAELA_inctype,((&QHKAELA_outofdate), &KLLAELA),((&QHKAELA_outofdate), &KLLAELA,(GYKAELA_inctype).nonlocals));
LLLAELA_ctype1 = KLLAELA;
 /* line 768: */
MLLAELA.Idinfo = IHKAELA_idinfo;
MLLAELA.Ctypeno = (-1);
MLLAELA.Ct = LLLAELA_ctype1;
MLLAELA.T = A_UNITE(NLLAELA,mode11,11,KRCAELA_unset);
OLLAELA = A_HEAP(A68_228 ) ;
(*OLLAELA) = MLLAELA ;
QLLAELA = (&((&ZGKAELA_ctypeid)->Ct)) ;
(*QLLAELA) = A_UNITE(PLLAELA,mode1,1,OLLAELA);
 /* line 769: */
SLLAELA = (&(IHKAELA_idinfo->U)) ;
(*SLLAELA) = A_UNITE(RLLAELA,mode3,3,ZGKAELA_ctypeid);
 /* line 770: */
 /* line 771: */
 /* line 773: */
TLLAELA = (&(IHKAELA_idinfo->Outofdate)) ;
(*TLLAELA) = QHKAELA_outofdate;
} 
break;
case 5: 
{ 
A_CALLPROC(XHKAELA_inid,( &ULLAELA),( &ULLAELA,(XHKAELA_inid).nonlocals));
UGKAELA_id = ULLAELA;
PHKAELA_v = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
NHKAELA_noattrs = A_CALLPROC(SHKAELA_in,(),((SHKAELA_in).nonlocals));
A_CALLPROC(NHLAELA_inextattrs,(NHKAELA_noattrs),(NHKAELA_noattrs,(NHLAELA_inextattrs).nonlocals));
 /* line 774: */
VLLAELA.Scope = (-1);
VLLAELA.Vnno = PHKAELA_v;
VLLAELA.Text = A68_FALSE;
VLLAELA.Outofdate = A68_FALSE;
VLLAELA.Inscope = A68_TRUE;
VLLAELA.Export = Export;
VLLAELA.Id = UGKAELA_id;
VLLAELA.U = A_UNITE(WLLAELA,mode10,10,CRCAELA_notdec);
IHKAELA_idinfo = (*(&(A_CALLPROC(Newextid,(VLLAELA),(VLLAELA,(Newextid).nonlocals))->Idinfo)));
 /* line 775: */
A_CALLPROC(BLKAELA_inattrs,((&QHKAELA_outofdate), &XLLAELA),((&QHKAELA_outofdate), &XLLAELA,(BLKAELA_inattrs).nonlocals));
YLLAELA_attr = XLLAELA;
 /* line 776: */
ZLLAELA.Idinfo = IHKAELA_idinfo;
ZLLAELA.Attrno = (-1);
ZLLAELA.Attr = YLLAELA_attr;
AMLAELA = A_HEAP(A68_209 ) ;
(*AMLAELA) = ZLLAELA ;
CMLAELA = (&((&WGKAELA_attrid)->A)) ;
(*CMLAELA) = A_UNITE(BMLAELA,mode1,1,AMLAELA);
 /* line 777: */
EMLAELA = (&(IHKAELA_idinfo->U)) ;
(*EMLAELA) = A_UNITE(DMLAELA,mode6,6,WGKAELA_attrid);
 /* line 778: */
 /* line 779: */
 /* line 780: */
 /* line 781: */
FMLAELA = (&(IHKAELA_idinfo->Outofdate)) ;
(*FMLAELA) = QHKAELA_outofdate;
} 
break;
default: 
 /* line 782: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(inkept_ext);
return;
} 
#undef NL
 /* line 787: */

A68_VOID  KMLAELA_syfaultp_ext(A68_INT  No, A68_412  Params, A68_BOOL * Syntaxerror, A68_383  Fault)
{ 
A68_VC  LMLAELA_m;
A68_INT  MMLAELA_mind;
A68_CHAR  NMLAELA_c;
A68_414  PMLAELA_generator;   /* proc value of non-global proc */
A68_368  UMLAELA;  /* avoid structure result */
A68_368  VMLAELA_paramstrings;
A68_150  XMLAELA_outchar;   /* proc value of non-global proc */
A68_43  MNLAELA_outid;   /* proc value of non-global proc */
A68_36  SNLAELA_outchars;   /* proc value of non-global proc */
A68_114  YNLAELA_outint;   /* proc value of non-global proc */
A68_415  DOLAELA_outmacid;   /* proc value of non-global proc */
A68_416  JOLAELA_outinteger;   /* proc value of non-global proc */
A68_420  ARLAELA_outtype;   /* proc value of non-global proc */
A68_421  VRLAELA_outfn;   /* proc value of non-global proc */
A68_424  HTLAELA_outctype;   /* proc value of non-global proc */
A68_INT  CZLAELA_i;
A68_INT  DZLAELA;  /* to part of loop */
A68_31  FZLAELA_generator;   /* proc value of non-global proc */
A68_VC  KZLAELA;  /* avoid structure result */
A68_305  LZLAELA_p;
A68_305  MZLAELA;  /* united object - for case conformity */
A68_196  NZLAELA_ty;
A68_VC  OZLAELA;  /* OPERATORS - trim index */
A68_VC * PZLAELA;  /* YIELD */
A68_VC  QZLAELA_id;
A68_VC  RZLAELA;  /* OPERATORS - trim index */
A68_VC * SZLAELA;  /* YIELD */
A68_264 * TZLAELA_fd;
A68_VC  UZLAELA;  /* OPERATORS - trim index */
A68_VC * VZLAELA;  /* YIELD */
A68_144  WZLAELA_cn;
A68_VC  XZLAELA;  /* OPERATORS - trim index */
A68_VC * YZLAELA;  /* YIELD */
A68_305  ZZLAELA;  /* united object - for case conformity */
A68_170  AAMAELA_in;
A68_VC  BAMAELA;  /* OPERATORS - trim index */
A68_VC * CAMAELA;  /* YIELD */
A68_305  DAMAELA;  /* united object - for case conformity */
A68_227  EAMAELA_ct;
A68_VC  FAMAELA;  /* OPERATORS - trim index */
A68_VC * GAMAELA;  /* YIELD */
A68_46  JAMAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  KAMAELA_se;
union {  /* BIOP 99 */
A68_368   source;
A68_46   destination;
} LAMAELA; 
A_PROC_ENTRY(syfaultp_ext);
 /* line 789: */
 /* line 790: */
{ 
MMLAELA_mind = 0;
 /* line 791: */
A_CLOSURE( PMLAELA_generator, QMLAELA_generator, RMLAELA_generator );
(( RMLAELA_generator * ) ( PMLAELA_generator.nonlocals )) -> Params = Params;
A_CALLPROC(PMLAELA_generator,(A68_FALSE, &UMLAELA),(A68_FALSE, &UMLAELA,(PMLAELA_generator).nonlocals));
VMLAELA_paramstrings = UMLAELA;
 /* line 793: */
A_CLOSURE( XMLAELA_outchar, YMLAELA_outchar, ZMLAELA_outchar );
(( ZMLAELA_outchar * ) ( XMLAELA_outchar.nonlocals )) -> MMLAELA_mind = (&MMLAELA_mind);
(( ZMLAELA_outchar * ) ( XMLAELA_outchar.nonlocals )) -> LMLAELA_m = (&LMLAELA_m);
 /* line 803: */
A_CLOSURE( MNLAELA_outid, NNLAELA_outid, ONLAELA_outid );
(( ONLAELA_outid * ) ( MNLAELA_outid.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
 /* line 810: */
A_CLOSURE( SNLAELA_outchars, TNLAELA_outchars, UNLAELA_outchars );
(( UNLAELA_outchars * ) ( SNLAELA_outchars.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
 /* line 813: */
A_CLOSURE( YNLAELA_outint, ZNLAELA_outint, AOLAELA_outint );
(( AOLAELA_outint * ) ( YNLAELA_outint.nonlocals )) -> SNLAELA_outchars = SNLAELA_outchars;
 /* line 815: */
A_CLOSURE( DOLAELA_outmacid, EOLAELA_outmacid, FOLAELA_outmacid );
(( FOLAELA_outmacid * ) ( DOLAELA_outmacid.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
(( FOLAELA_outmacid * ) ( DOLAELA_outmacid.nonlocals )) -> MNLAELA_outid = MNLAELA_outid;
 /* line 821: */
A_CLOSURE( JOLAELA_outinteger, KOLAELA_outinteger, LOLAELA_outinteger );
(( LOLAELA_outinteger * ) ( JOLAELA_outinteger.nonlocals )) -> YNLAELA_outint = YNLAELA_outint;
(( LOLAELA_outinteger * ) ( JOLAELA_outinteger.nonlocals )) -> MNLAELA_outid = MNLAELA_outid;
(( LOLAELA_outinteger * ) ( JOLAELA_outinteger.nonlocals )) -> SNLAELA_outchars = SNLAELA_outchars;
(( LOLAELA_outinteger * ) ( JOLAELA_outinteger.nonlocals )) -> JOLAELA_outinteger = JOLAELA_outinteger;
(( LOLAELA_outinteger * ) ( JOLAELA_outinteger.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
(( LOLAELA_outinteger * ) ( JOLAELA_outinteger.nonlocals )) -> DOLAELA_outmacid = DOLAELA_outmacid;
 /* line 850: */
A_CLOSURE( ARLAELA_outtype, BRLAELA_outtype, CRLAELA_outtype );
(( CRLAELA_outtype * ) ( ARLAELA_outtype.nonlocals )) -> MNLAELA_outid = MNLAELA_outid;
(( CRLAELA_outtype * ) ( ARLAELA_outtype.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
(( CRLAELA_outtype * ) ( ARLAELA_outtype.nonlocals )) -> ARLAELA_outtype = ARLAELA_outtype;
(( CRLAELA_outtype * ) ( ARLAELA_outtype.nonlocals )) -> SNLAELA_outchars = SNLAELA_outchars;
(( CRLAELA_outtype * ) ( ARLAELA_outtype.nonlocals )) -> JOLAELA_outinteger = JOLAELA_outinteger;
(( CRLAELA_outtype * ) ( ARLAELA_outtype.nonlocals )) -> DOLAELA_outmacid = DOLAELA_outmacid;
 /* line 885: */
A_CLOSURE( VRLAELA_outfn, WRLAELA_outfn, XRLAELA_outfn );
(( XRLAELA_outfn * ) ( VRLAELA_outfn.nonlocals )) -> SNLAELA_outchars = SNLAELA_outchars;
(( XRLAELA_outfn * ) ( VRLAELA_outfn.nonlocals )) -> DOLAELA_outmacid = DOLAELA_outmacid;
(( XRLAELA_outfn * ) ( VRLAELA_outfn.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
(( XRLAELA_outfn * ) ( VRLAELA_outfn.nonlocals )) -> MNLAELA_outid = MNLAELA_outid;
(( XRLAELA_outfn * ) ( VRLAELA_outfn.nonlocals )) -> ARLAELA_outtype = ARLAELA_outtype;
 /* line 923: */
A_CLOSURE( HTLAELA_outctype, ITLAELA_outctype, JTLAELA_outctype );
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> MNLAELA_outid = MNLAELA_outid;
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> Fault = Fault;
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> SNLAELA_outchars = SNLAELA_outchars;
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> JOLAELA_outinteger = JOLAELA_outinteger;
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> XMLAELA_outchar = XMLAELA_outchar;
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> HTLAELA_outctype = HTLAELA_outctype;
(( JTLAELA_outctype * ) ( HTLAELA_outctype.nonlocals )) -> ARLAELA_outtype = ARLAELA_outtype;
 /* line 1085: */
 /* line 1086: */
DZLAELA = VMLAELA_paramstrings.upb;
for ( CZLAELA_i = 1;
CZLAELA_i <= DZLAELA;
CZLAELA_i += 1 )
{ 
MMLAELA_mind = 0;
 /* line 1087: */
A_CLOSURE( FZLAELA_generator, GZLAELA_generator, HZLAELA_generator );
A_CALLPROC(FZLAELA_generator,(A68_FALSE, &KZLAELA),(A68_FALSE, &KZLAELA,(FZLAELA_generator).nonlocals));
LMLAELA_m = KZLAELA;
 /* line 1088: */
LZLAELA_p = A_VINDEX(Params,CZLAELA_i);
 /* line 1089: */
 /* line 1090: */
MZLAELA = LZLAELA_p ;
switch ( MZLAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE185,INT,MODE216)  */
case 2: /* REF STRUCT(REF MODE185,INT,MODE196)  */
case 3: /* REF STRUCT(MODE196,REF MODE199)  */
case 4: /* REF STRUCT(REF MODE207,MODE196)  */
case 5: /* STRUCT(INT)  */
case 6: /* REF STRUCT(MODE196,MODE196)  */
case 7: /* REF STRUCT(MODE196,MODE170)  */
case 8: /* REF STRUCT(MODE196)  */
case 9: /* REF STRUCT(MODE170,MODE196)  */
case 10: /* STRUCT(INT)  */
case 11: /* STRUCT(INT)  */
case 12: /* STRUCT(INT)  */
A_UNCPY(NZLAELA_ty,MZLAELA);
{ 
A_CALLPROC(ARLAELA_outtype,(NZLAELA_ty),(NZLAELA_ty,(ARLAELA_outtype).nonlocals));
 /* line 1091: */
PZLAELA = (&A_VINDEX(VMLAELA_paramstrings,CZLAELA_i)) ;
(*PZLAELA) = A_VTRIM(OZLAELA,(LMLAELA_m),A_VTSCRIPT(&(OZLAELA.upb),(LMLAELA_m).upb,1,MMLAELA_mind));
} 
break;
case 13: /* REF VECTOR [] CHAR */
QZLAELA_id = (MZLAELA.data.mode13);
{ 
A_CALLPROC(MNLAELA_outid,(QZLAELA_id),(QZLAELA_id,(MNLAELA_outid).nonlocals));
 /* line 1092: */
SZLAELA = (&A_VINDEX(VMLAELA_paramstrings,CZLAELA_i)) ;
(*SZLAELA) = A_VTRIM(RZLAELA,(LMLAELA_m),A_VTSCRIPT(&(RZLAELA.upb),(LMLAELA_m).upb,1,MMLAELA_mind));
} 
break;
case 14: /* REF STRUCT(REF MODE265,INT,INT,BOOL,REF MODE26,INT,REF MODE262,REF REF MODE262,MODE208,REF MODE266,REF MODE266,MODE196,MODE196,INT)  */
TZLAELA_fd = (MZLAELA.data.mode14);
{ 
A_CALLPROC(VRLAELA_outfn,(TZLAELA_fd),(TZLAELA_fd,(VRLAELA_outfn).nonlocals));
 /* line 1093: */
VZLAELA = (&A_VINDEX(VMLAELA_paramstrings,CZLAELA_i)) ;
(*VZLAELA) = A_VTRIM(UZLAELA,(LMLAELA_m),A_VTSCRIPT(&(UZLAELA.upb),(LMLAELA_m).upb,1,MMLAELA_mind));
} 
break;
case 15: /* STRUCT(REF MODE26,REF MODE26)  */
WZLAELA_cn = (MZLAELA.data.mode15);
{ 
A_CALLPROC(MNLAELA_outid,(WZLAELA_cn.Context),(WZLAELA_cn.Context,(MNLAELA_outid).nonlocals));
 /* line 1094: */
if ( A_VC_NE(WZLAELA_cn.Import,TTCAOST_nullid) )
{ 
A_CALLPROC(XMLAELA_outchar,('/'),('/',(XMLAELA_outchar).nonlocals));
 /* line 1095: */
A_CALLPROC(MNLAELA_outid,(WZLAELA_cn.Import),(WZLAELA_cn.Import,(MNLAELA_outid).nonlocals));
} 
 /* line 1096: */
 /* line 1097: */
YZLAELA = (&A_VINDEX(VMLAELA_paramstrings,CZLAELA_i)) ;
(*YZLAELA) = A_VTRIM(XZLAELA,(LMLAELA_m),A_VTSCRIPT(&(XZLAELA.upb),(LMLAELA_m).upb,1,MMLAELA_mind));
} 
break;
default: 
 /* line 1098: */
ZZLAELA = LZLAELA_p ;
switch ( ZZLAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
case 11: /* STRUCT(INT)  */
case 16: /* INT */
case 17: /* REF STRUCT(REF MODE26)  */
case 18: /* REF STRUCT(INT,REF MODE26)  */
case 19: /* REF STRUCT(MODE170,MODE170,INT)  */
case 20: /* REF STRUCT(REF MODE207)  */
case 21: /* REF STRUCT(INT,MODE170,MODE170)  */
case 22: /* REF STRUCT(INT,MODE170)  */
case 23: /* REF STRUCT(MODE170,MODE170,MODE170)  */
case 24: /* REF STRUCT(INT,MODE170,MODE170,MODE170)  */
case 25: /* STRUCT(INT)  */
case 26: /* REF STRUCT(REF MODE185,INT,MODE170)  */
case 27: /* REF STRUCT(MODE170)  */
case 28: /* STRUCT(INT)  */
A_UNCPY(AAMAELA_in,ZZLAELA);
AAMAELA_in.mode = "\000\0\0\0\0\0\0\0\0\0\004\017\0\0\0\0\001\002\003\005\006\007\010\011\012\013\014\015\016\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\000"[ZZLAELA.mode];
{ 
A_CALLPROC(JOLAELA_outinteger,(AAMAELA_in),(AAMAELA_in,(JOLAELA_outinteger).nonlocals));
 /* line 1099: */
CAMAELA = (&A_VINDEX(VMLAELA_paramstrings,CZLAELA_i)) ;
(*CAMAELA) = A_VTRIM(BAMAELA,(LMLAELA_m),A_VTSCRIPT(&(BAMAELA.upb),(LMLAELA_m).upb,1,MMLAELA_mind));
} 
break;
default: 
 /* line 1100: */
DAMAELA = LZLAELA_p ;
switch ( DAMAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
case 11: /* STRUCT(INT)  */
case 29: /* REF STRUCT(REF MODE185,INT,MODE227,MODE196)  */
case 30: /* REF STRUCT(MODE196,MODE170,MODE170)  */
case 31: /* REF STRUCT(MODE196,MODE170)  */
case 32: /* REF STRUCT(MODE196,INT)  */
case 33: /* REF STRUCT(REF MODE190,MODE227)  */
case 34: /* REF STRUCT(MODE227,MODE170)  */
case 35: /* REF STRUCT(MODE227,REF MODE233)  */
case 36: /* REF STRUCT(MODE227,REF MODE234)  */
case 37: /* REF STRUCT(MODE196)  */
case 38: /* REF STRUCT(MODE227)  */
case 39: /* REF STRUCT(MODE196)  */
case 40: /* REF STRUCT(MODE170,MODE227,REF MODE215)  */
case 41: /* REF STRUCT(MODE196,CHAR)  */
case 42: /* REF STRUCT(MODE196,CHAR,CHAR)  */
case 43: /* REF STRUCT(REF MODE207,MODE196)  */
case 44: /* STRUCT(INT)  */
case 45: /* REF STRUCT(MODE227,MODE170)  */
case 46: /* REF STRUCT(MODE227,MODE170,MODE170)  */
case 47: /* REF STRUCT(MODE170,MODE227,MODE227)  */
case 48: /* REF STRUCT(REF MODE249,MODE227)  */
case 49: /* REF STRUCT(BOOL,INT,MODE227,MODE227)  */
case 50: /* REF STRUCT(MODE227,MODE208)  */
A_UNCPY(EAMAELA_ct,DAMAELA);
EAMAELA_ct.mode = "\000\0\0\0\0\0\0\0\0\0\012\013\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\001\002\003\004\005\006\007\010\011\014\015\016\017\020\021\022\023\024\025\026\027\030"[DAMAELA.mode];
{ 
A_CALLPROC(HTLAELA_outctype,(EAMAELA_ct),(EAMAELA_ct,(HTLAELA_outctype).nonlocals));
 /* line 1101: */
GAMAELA = (&A_VINDEX(VMLAELA_paramstrings,CZLAELA_i)) ;
(*GAMAELA) = A_VTRIM(FAMAELA,(LMLAELA_m),A_VTSCRIPT(&(FAMAELA.upb),(LMLAELA_m).upb,1,MMLAELA_mind));
} 
break;
default: 
 /* line 1102: */
 /* line 1103: */
A_CALLPROC(Fault,(0, A_HVEC(JAMAELA,IAMAELA,A68_VC )),(0, A_HVEC(JAMAELA,IAMAELA,A68_VC ),(Fault).nonlocals));
break;
} 
break;
} 
break;
} 
}
 /* line 1104: */
KAMAELA_se = (*Syntaxerror);
(*Syntaxerror) = A68_FALSE;
 /* line 1105: */
LAMAELA.source = VMLAELA_paramstrings ;
A_CALLPROC(Fault,(No, (LAMAELA.destination)),(No, (LAMAELA.destination),(Fault).nonlocals));
 /* line 1106: */
(*Syntaxerror) = KAMAELA_se;
} 
A_PROC_EXIT(syfaultp_ext);
return;
} 
#undef NL
 /* line 1110: */
 /* line 1111: */
 /* line 1112: */

A68_BOOL  SAMAELA_implicit_macro(A68_196  A, A68_196  B, A68_258 * Fstack, A68_427  Simplify, A68_383  Fault, A68_428  Sttorow)
{ 
A68_431  QBMAELA_implicit_macro_type;   /* proc value of non-global proc */
A68_196  DFMAELA;  /* united object - for case conformity */
A68_173  EFMAELA_f;
A68_BOOL  FFMAELA;  /* clause result */
A68_196  GFMAELA;  /* united object - for case conformity */
A68_173  HFMAELA_f;
A68_BOOL  IFMAELA;  /* clause result */
A_PROC_ENTRY(implicit_macro);
 /* line 1113: */
 /* line 1114: */
{ 
 /* line 1136: */
A_CLOSURE( QBMAELA_implicit_macro_type, RBMAELA_implicit_macro_type, SBMAELA_implicit_macro_type );
(( SBMAELA_implicit_macro_type * ) ( QBMAELA_implicit_macro_type.nonlocals )) -> QBMAELA_implicit_macro_type = QBMAELA_implicit_macro_type;
(( SBMAELA_implicit_macro_type * ) ( QBMAELA_implicit_macro_type.nonlocals )) -> Simplify = Simplify;
(( SBMAELA_implicit_macro_type * ) ( QBMAELA_implicit_macro_type.nonlocals )) -> Sttorow = Sttorow;
 /* line 1269: */
DFMAELA = A ;
switch ( DFMAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
EFMAELA_f = (DFMAELA.data.mode10);
FFMAELA = A68_TRUE;
break;
default: 
GFMAELA = B ;
switch ( GFMAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
HFMAELA_f = (GFMAELA.data.mode10);
FFMAELA = A68_TRUE;
break;
default: 
 /* line 1270: */
FFMAELA = A68_FALSE;
break;
} 
break;
} 
if ( FFMAELA )
{ 
 /* line 1271: */
IFMAELA = A68_TRUE;
} 
else
{ 
 /* line 1272: */
if ( A_CALLPROC(QBMAELA_implicit_macro_type,(A, B, Fstack),(A, B, Fstack,(QBMAELA_implicit_macro_type).nonlocals)) )
{ 
 /* line 1273: */
IFMAELA = A68_TRUE;
} 
else
{ 
A_CALLPROC(Fault,(152, VJAAOSI_nullmsg),(152, VJAAOSI_nullmsg,(Fault).nonlocals));
 /* line 1274: */
 /* line 1275: */
 /* line 1276: */
IFMAELA = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(implicit_macro);
return( IFMAELA );
} 
#undef NL

A68_VOID  MFMAELA_simplify_ext(A68_170  I, A68_BOOL  Simp, A68_383  Fault, A68_170  *ReturnedValue)
{ 
A68_BOOL  NFMAELA_error;
A68_427  QFMAELA_simplify;   /* proc value of non-global proc */
A68_170  LMMAELA;  /* clause result */
A68_170  MMMAELA;  /* avoid structure result */
A_PROC_ENTRY(simplify_ext);
 /* line 1280: */
{ 
NFMAELA_error = A68_FALSE;
 /* line 1282: */
A_CLOSURE( QFMAELA_simplify, RFMAELA_simplify, SFMAELA_simplify );
(( SFMAELA_simplify * ) ( QFMAELA_simplify.nonlocals )) -> Fault = Fault;
(( SFMAELA_simplify * ) ( QFMAELA_simplify.nonlocals )) -> NFMAELA_error = (&NFMAELA_error);
(( SFMAELA_simplify * ) ( QFMAELA_simplify.nonlocals )) -> QFMAELA_simplify = QFMAELA_simplify;
 /* line 1425: */
 /* line 1426: */
 /* line 1428: */
A_CALLPROC(QFMAELA_simplify,(I, Simp, &MMMAELA),(I, Simp, &MMMAELA,(QFMAELA_simplify).nonlocals));
LMMAELA = MMMAELA;
} 
A_PROC_EXIT(simplify_ext);
*ReturnedValue = (LMMAELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void GGKAELA(void)   /* initialise DECS impmacro */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/impmacro.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","./mfiles/databasebuffers.m","./mfiles/compmodes.m","/u/model/ella/transform/assoc/mfiles/charset.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
NWIAELA();   /* USE databasebuffers */
UICAELA();   /* USE compmodes */
GMAATRN();   /* USE charset */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/impmacro.a68";
A_config.translation_time = "Tue Apr  4 10:34:24 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "FGKAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:34:24 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS impmacro);
UEAALIB_a68config(LGAALIB_configinfo, KGKAELA);
 /* line 92: */
 /* line 786: */
 /* line 1109: */
 /* line 1278: */
 /* line 1430: */
A_PROC_EXIT(DECS impmacro);
} 
#undef NL
/* end of translation of ./a68files/impmacro.a68 */
