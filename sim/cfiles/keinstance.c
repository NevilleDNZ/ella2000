
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
/* UNAME:LLXASIM */
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

A_PROCEDURE(A68_INT ,A68t159,(struct A68t160 ,struct A68t161 ),(struct A68t160 ,struct A68t161 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160,MODE161) INT */
struct A68t169{
A68_INT  Svoid;
A_PAD_INT(PAD_34)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT)  */
struct A68t170{
A68_INT  Snull;
A_PAD_INT(PAD_35)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT)  */
struct A68t160 { A68_INT mode; union {
struct A68t162 * mode1;
struct A68t163 * mode2;
struct A68t164 * mode3;
struct A68t165 * mode4;
struct A68t166 * mode5;
struct A68t167 * mode6;
struct A68t168 * mode7;
struct A68t169  mode8;
struct A68t170  mode9;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166,REF MODE167,REF MODE168,MODE169,MODE170)  */

A_PROCEDURE(A68_INT ,A68t161,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE160) INT */
struct A68t162{
A68_VC  Id;
struct A68t160  T;
struct A68t162 * Rest;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,MODE160,REF MODE162)  */
struct A68t163{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Upb;
A_PAD_INT(PAD_37)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t164{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t165{
A68_INT  No;
A_PAD_INT(PAD_38)
struct A68t160  Type;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,MODE160)  */
struct A68t166{
A68_INT  No;
A_PAD_INT(PAD_39)
struct A68t164  T;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,MODE164)  */
struct A68t167{
struct A68t160  From;
struct A68t160  To;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(MODE160,MODE160)  */
struct A68t168{
struct A68t160  T;
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE160,REF MODE168)  */

A_PROCEDURE(A68_VOID ,A68t171,(A68_INT ,struct A68t160 *),(A68_INT ,struct A68t160 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT) MODE160 */
struct A68t173 ;
struct A68t174 ;
struct A68t175 ;
struct A68t176 ;

A_PROCEDURE(A68_INT ,A68t172,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t173 ,struct A68t173 ,struct A68t174 *,struct A68t175 ,struct A68t176 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t173 ,struct A68t173 ,struct A68t174 *,struct A68t175 ,struct A68t176 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE26,INT,INT,INT,MODE173,MODE173,REF MODE174,MODE175,MODE176) INT */
A_VECTOR(struct A68t178 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE178 */
struct A68t178{
A68_INT  Instoffset;
A_PAD_INT(PAD_40)
A68_INT  Offset;
A_PAD_INT(PAD_41)
A68_INT  Size;
A_PAD_INT(PAD_42)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,INT)  */
struct A68t173{
struct A68t160  Type;
struct A68t177  Blocks;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE160,REF MODE177)  */
struct A68t174{
struct A68t173  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_43)
A68_INT  Ramsize;
A_PAD_INT(PAD_44)
A68_INT  Step;
A_PAD_INT(PAD_45)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE173,INT,INT,INT)  */
struct A68t175{
A68_INT  Size;
A_PAD_INT(PAD_46)
A68_INT  Offset;
A_PAD_INT(PAD_47)
A68_BITS  Sort;
A_PAD_BITS(PAD_48)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t176{
A68_INT  Workspace;
A_PAD_INT(PAD_49)
A68_INT  History;
A_PAD_INT(PAD_50)
A68_INT  Declid;
A_PAD_INT(PAD_51)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,INT,INT)  */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,A68_VC ,A68_VC ,struct A68t180 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t180 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE180) VOID */
struct A68t181{
A68_INT  Fn;
A_PAD_INT(PAD_52)
A68_INT  Instance;
A_PAD_INT(PAD_53)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,INT)  */
struct A68t180 { A68_INT mode; union {
struct A68t181  mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(MODE181,MODE173)  */

A_PROCEDURE(A68_VOID ,A68t182,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(A68_INT ,struct A68t175 ),(A68_INT ,struct A68t175 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(INT,MODE175) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,struct A68t177 ,struct A68t177 ),(A68_INT ,struct A68t177 ,struct A68t177 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,REF MODE177,REF MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t188,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t190 ;

A_PROCEDURE(A68_VOID ,A68t189,(A68_INT ,struct A68t190 *),(A68_INT ,struct A68t190 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(INT) MODE190 */
A_VECTOR(struct A68t192 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE192 */
struct A68t192{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_54)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t190{
struct A68t174 * Ram;
struct A68t173  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_55)
struct A68t191  Body;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE174,MODE173,INT,REF MODE191)  */

A_PROCEDURE(A68_VOID ,A68t193,(A68_INT ,struct A68t180 *),(A68_INT ,struct A68t180 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(INT) MODE180 */
struct A68t195 ;

A_PROCEDURE(A68_VOID ,A68t194,(A68_INT ,A68_INT ,struct A68t195 *),(A68_INT ,A68_INT ,struct A68t195 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,INT) MODE195 */
struct A68t195{
A68_INT  Lwb;
A_PAD_INT(PAD_56)
A68_INT  Upb;
A_PAD_INT(PAD_57)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,INT)  */
struct A68t197 ;

A_PROCEDURE(A68_VOID ,A68t196,(A68_INT ,A68_INT ,struct A68t197 *),(A68_INT ,A68_INT ,struct A68t197 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(INT,INT) REF MODE197 */
A_VECTOR(struct A68t198 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE198 */
struct A68t198{
A68_INT  Instoffset;
A_PAD_INT(PAD_58)
A68_INT  Ipno;
A_PAD_INT(PAD_59)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t199,(A68_INT ,struct A68t173 *),(A68_INT ,struct A68t173 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(INT) MODE173 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ,struct A68t175 *),(A68_INT ,struct A68t175 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) MODE175 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t176 *),(A68_INT ,struct A68t176 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) MODE176 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t190 ,struct A68t173 *),(struct A68t190 ,struct A68t173 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE190) MODE173 */
struct A68t204 ;

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t204 ),(struct A68t204 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE204) VOID */

A_PROCEDURE(A68_BOOL ,A68t204,(A68_VC ),(A68_VC ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE26) BOOL */
struct A68t206 ;

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t206 ,struct A68t36 ),(struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t207{
A68_INT  Predecessors;
A_PAD_INT(PAD_60)
A68_INT  Truepredecessors;
A_PAD_INT(PAD_61)
A68_INT  Loop;
A_PAD_INT(PAD_62)
struct A68t32  Successors;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,INT,INT,REF MODE32)  */
struct A68t209 ;
struct A68t210 ;

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t209 ,struct A68t114 ,struct A68t210 ),(struct A68t209 ,struct A68t114 ,struct A68t210 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE209,MODE114,MODE210) VOID */
A_VECTOR(struct A68t207 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE207 */

A_PROCEDURE(A68_INT ,A68t210,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE32) INT */

A_PROCEDURE(struct A68t168 *,A68t211,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE160) REF MODE168 */

A_PROCEDURE(struct A68t168 *,A68t212,(struct A68t160 ,A68_INT ,A68_INT ),(struct A68t160 ,A68_INT ,A68_INT ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE160,INT,INT) REF MODE168 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t173 ,A68_INT ,A68_INT ,struct A68t173 *),(struct A68t173 ,A68_INT ,A68_INT ,struct A68t173 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE173,INT,INT) MODE173 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t174 *,A68_INT ,A68_INT ,struct A68t173 *),(struct A68t174 *,A68_INT ,A68_INT ,struct A68t173 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE174,INT,INT) MODE173 */
struct A68t216 ;

A_PROCEDURE(A68_VC *,A68t215,(struct A68t216 ,struct A68t160 ),(struct A68t216 ,struct A68t160 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE216,MODE160) REF REF MODE26 */
struct A68t224{
A68_INT  Svvoid;
A_PAD_INT(PAD_63)
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT)  */
struct A68t225{
A68_INT  Svnull;
A_PAD_INT(PAD_64)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t216 { A68_INT mode; union {
struct A68t217 * mode1;
struct A68t218 * mode2;
struct A68t219 * mode3;
struct A68t220 * mode4;
struct A68t221 * mode5;
struct A68t222 * mode6;
struct A68t223 * mode7;
struct A68t224  mode8;
struct A68t225  mode9;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,MODE224,MODE225)  */
struct A68t217{
struct A68t160  Type;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE160)  */
struct A68t218{
struct A68t163 * Type;
A68_INT  Value;
A_PAD_INT(PAD_65)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE163,INT)  */
struct A68t219{
struct A68t164 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_66)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE164,CHAR)  */
struct A68t220{
struct A68t166 * Type;
A68_VC  Value;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE166,REF MODE26)  */
struct A68t221{
struct A68t162 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_67)
struct A68t216  Assoc;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE162,INT,MODE216)  */
struct A68t222{
struct A68t216  Head;
struct A68t222 * Tail;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE216,REF MODE222)  */
struct A68t223{
struct A68t216  From;
struct A68t216  To;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE216,MODE216)  */

A_PROCEDURE(A68_VOID ,A68t226,(A68_VC ,struct A68t160 ,struct A68t216 *),(A68_VC ,struct A68t160 ,struct A68t216 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE26,MODE160) MODE216 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE43,INT,MODE36) VOID */
struct A68t229 ;
struct A68t230 ;
struct A68t231 ;
struct A68t232 ;
struct A68t233 ;

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t229 ,A68_VC ,struct A68t230 ,struct A68t231 ,struct A68t32 ,A68_INT ,struct A68t232 *,struct A68t233 *,struct A68t174 **,struct A68t176 *,struct A68t36 ,struct A68t175 *),(struct A68t229 ,A68_VC ,struct A68t230 ,struct A68t231 ,struct A68t32 ,A68_INT ,struct A68t232 *,struct A68t233 *,struct A68t174 **,struct A68t176 *,struct A68t36 ,struct A68t175 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE229,REF MODE26,MODE230,MODE231,MODE32,INT,REF MODE232,REF MODE233,REF REF MODE174,REF MODE176,MODE36) MODE175 */
struct A68t229 { A68_INT mode; union {
struct A68t314 * mode1;
struct A68t357 * mode2;
struct A68t358 * mode3;
struct A68t359 * mode4;
struct A68t360 * mode5;
struct A68t361 * mode6;
struct A68t362 * mode7;
struct A68t363 * mode8;
struct A68t364 * mode9;
struct A68t365 * mode10;
struct A68t366 * mode11;
struct A68t367 * mode12;
} data; };
typedef struct A68t229  A68_229 ;    /* UNION(REF MODE314,REF MODE357,REF MODE358,REF MODE359,REF MODE360,REF MODE361,REF MODE362,REF MODE363,REF MODE364,REF MODE365,REF MODE366,REF MODE367)  */
A_VECTOR(struct A68t355 ,A68t352);
typedef struct A68t352  A68_352 ;    /* VECTOR [] MODE355 */
struct A68t294{
A68_INT  Attrno;
A_PAD_INT(PAD_68)
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT)  */
struct A68t285{
A68_INT  Intno;
A_PAD_INT(PAD_69)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT)  */
struct A68t295{
A68_INT  Typeno;
A_PAD_INT(PAD_70)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT)  */
struct A68t247{
A68_INT  Constno;
A_PAD_INT(PAD_71)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT)  */
struct A68t296{
A68_INT  Fnno;
A_PAD_INT(PAD_72)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT)  */
struct A68t356 { A68_INT mode; union {
struct A68t294  mode1;
struct A68t285  mode2;
struct A68t295  mode3;
struct A68t247  mode4;
struct A68t296  mode5;
} data; };
typedef struct A68t356  A68_356 ;    /* UNION(MODE294,MODE285,MODE295,MODE247,MODE296)  */
struct A68t355{
A68_INT  Sort;
A_PAD_INT(PAD_73)
struct A68t356  Spec;
};
typedef struct A68t355  A68_355 ;    /* STRUCT(INT,MODE356)  */
struct A68t244 { A68_INT mode; union {
struct A68t294 * mode1;
struct A68t338 * mode2;
struct A68t339 * mode3;
struct A68t340 * mode4;
struct A68t341 * mode5;
} data; };
typedef struct A68t244  A68_244 ;    /* UNION(REF MODE294,REF MODE338,REF MODE339,REF MODE340,REF MODE341)  */
A_VECTOR(struct A68t354 ,A68t353);
typedef struct A68t353  A68_353 ;    /* VECTOR [] MODE354 */
struct A68t315 { A68_INT mode; union {
struct A68t295 * mode1;
struct A68t316 * mode2;
struct A68t317 * mode3;
struct A68t318 * mode4;
struct A68t253 * mode5;
struct A68t319 * mode6;
struct A68t320 * mode7;
struct A68t290 * mode8;
struct A68t321 * mode9;
} data; };
typedef struct A68t315  A68_315 ;    /* UNION(REF MODE295,REF MODE316,REF MODE317,REF MODE318,REF MODE253,REF MODE319,REF MODE320,REF MODE290,REF MODE321)  */
struct A68t354{
A68_VC  Name;
struct A68t315  Type;
struct A68t244  Attr;
};
typedef struct A68t354  A68_354 ;    /* STRUCT(REF MODE26,MODE315,MODE244)  */
struct A68t230{
A68_INT  Sort;
A_PAD_INT(PAD_74)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_75)
A68_VC  Fnname;
struct A68t352  Macspecs;
struct A68t244  Attr;
struct A68t307 * Inputs;
struct A68t307 * Outputs;
struct A68t353  Nametypes;
struct A68t229  Fnbody;
struct A68t246 * Usage;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE352,MODE244,REF MODE307,REF MODE307,REF MODE353,MODE229,REF MODE246)  */
A_VECTOR(struct A68t173 ,A68t231);
typedef struct A68t231  A68_231 ;    /* VECTOR [] MODE173 */
A_VECTOR(struct A68t351 *,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] REF MODE351 */
A_VECTOR(struct A68t349 *,A68t239);
typedef struct A68t239  A68_239 ;    /* VECTOR [] REF MODE349 */
A_VECTOR(struct A68t343 *,A68t240);
typedef struct A68t240  A68_240 ;    /* VECTOR [] REF MODE343 */
A_VECTOR(struct A68t243 *,A68t241);
typedef struct A68t241  A68_241 ;    /* VECTOR [] REF MODE243 */
A_VECTOR(struct A68t230 *,A68t242);
typedef struct A68t242  A68_242 ;    /* VECTOR [] REF MODE230 */
struct A68t232{
struct A68t238  Attrs;
struct A68t239  Ints;
struct A68t240  Types;
struct A68t241  Consts;
struct A68t242  Fns;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242)  */
struct A68t233{
A68_INT  Max_closureno;
A_PAD_INT(PAD_76)
struct A68t234 * Outers;
struct A68t234 * Freelist;
struct A68t235 * Outerslist;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,REF MODE234,REF MODE234,REF MODE235)  */
struct A68t237{
A68_INT  Closureno;
A_PAD_INT(PAD_77)
A68_INT  Sort;
A_PAD_INT(PAD_78)
struct A68t232 * Environ;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT,INT,REF MODE232)  */
struct A68t234{
struct A68t237  Outer;
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE237,REF MODE234)  */
A_VECTOR(struct A68t234 ,A68t236);
typedef struct A68t236  A68_236 ;    /* VECTOR [] MODE234 */
struct A68t235{
struct A68t236  Outers;
struct A68t235 * Rest;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE236,REF MODE235)  */
struct A68t245 { A68_INT mode; union {
struct A68t247 * mode1;
struct A68t248 * mode2;
struct A68t249 * mode3;
struct A68t250 * mode4;
struct A68t251 * mode5;
struct A68t252 * mode6;
struct A68t253 * mode7;
struct A68t254 * mode8;
struct A68t255 * mode9;
struct A68t256 * mode10;
struct A68t257 * mode11;
struct A68t258 * mode12;
struct A68t259 * mode13;
struct A68t260 * mode14;
struct A68t261 * mode15;
struct A68t262 * mode16;
struct A68t263 * mode17;
struct A68t264 * mode18;
struct A68t265 * mode19;
struct A68t266 * mode20;
struct A68t267 * mode21;
struct A68t268 * mode22;
struct A68t269 * mode23;
struct A68t270 * mode24;
struct A68t271 * mode25;
struct A68t272 * mode26;
struct A68t273 * mode27;
struct A68t274 * mode28;
struct A68t275 * mode29;
struct A68t276 * mode30;
struct A68t277 * mode31;
struct A68t278 * mode32;
struct A68t279 * mode33;
struct A68t280 * mode34;
} data; };
typedef struct A68t245  A68_245 ;    /* UNION(REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE280)  */
struct A68t243{
A68_INT  Sort;
A_PAD_INT(PAD_79)
A68_VC  Constname;
struct A68t244  Attr;
struct A68t245  Value;
struct A68t246 * Usage;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,REF MODE26,MODE244,MODE245,REF MODE246)  */
struct A68t246{
A68_INT  Contextno;
A_PAD_INT(PAD_80)
A68_INT  Closureno;
A_PAD_INT(PAD_81)
A68_INT  Libv_spec;
A_PAD_INT(PAD_82)
A68_INT  Libv_body;
A_PAD_INT(PAD_83)
A68_BOOL  Import;
A_PAD_BOOL(PAD_84)
A68_BOOL  Export;
A_PAD_BOOL(PAD_85)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t248{
A68_INT  Typeno;
A_PAD_INT(PAD_86)
A68_INT  Primno;
A_PAD_INT(PAD_87)
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,INT)  */
struct A68t281 { A68_INT mode; union {
struct A68t282 * mode1;
struct A68t283 * mode2;
struct A68t284 * mode3;
struct A68t285 * mode4;
struct A68t286 * mode5;
struct A68t287 * mode6;
struct A68t288 * mode7;
struct A68t289 * mode8;
struct A68t290 * mode9;
struct A68t291 * mode10;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291)  */
struct A68t249{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
struct A68t281  Index;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,MODE281)  */
struct A68t250{
struct A68t315  Querytype;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE315)  */
struct A68t251{
A68_INT  Typeno;
A_PAD_INT(PAD_89)
struct A68t32  String;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t252{
A68_INT  Cvoid;
A_PAD_INT(PAD_90)
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT)  */
struct A68t253{
struct A68t315  Type;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE315)  */
struct A68t337{
struct A68t281  Lwb;
struct A68t281  Upb;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t254{
A68_INT  Typeno;
A_PAD_INT(PAD_91)
struct A68t337  Range;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT,MODE337)  */
struct A68t255{
A68_INT  Typeno;
A_PAD_INT(PAD_92)
A68_INT  Firstno;
A_PAD_INT(PAD_93)
A68_INT  Lastno;
A_PAD_INT(PAD_94)
};
typedef struct A68t255  A68_255 ;    /* STRUCT(INT,INT,INT)  */
struct A68t256{
struct A68t245  Alt;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE245,REF MODE256)  */
struct A68t257{
A68_INT  Sort;
A_PAD_INT(PAD_95)
A68_INT  Nameno;
A_PAD_INT(PAD_96)
};
typedef struct A68t257  A68_257 ;    /* STRUCT(INT,INT)  */
struct A68t258{
struct A68t245  Sink;
struct A68t245  Source;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE245,MODE245)  */
struct A68t259{
A68_INT  Typeno;
A_PAD_INT(PAD_97)
A68_INT  Altno;
A_PAD_INT(PAD_98)
struct A68t245  Assoc;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT,INT,MODE245)  */
struct A68t260{
struct A68t245  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_99)
A68_INT  Altno;
A_PAD_INT(PAD_100)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE245,INT,INT)  */
struct A68t261{
struct A68t245  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_101)
A68_INT  Nameno;
A_PAD_INT(PAD_102)
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE245,INT,INT)  */
struct A68t262{
struct A68t245  Unit;
struct A68t281  Index;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE245,MODE281)  */
struct A68t263{
struct A68t245  Unit;
struct A68t337  Range;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE245,MODE337)  */
struct A68t264{
struct A68t245  Unit;
struct A68t245  Index;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE245,MODE245)  */
struct A68t265{
struct A68t245  Unit;
struct A68t245  Index;
struct A68t245  From;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE245,MODE245,MODE245)  */
struct A68t266{
struct A68t281  Size;
struct A68t245  Elem;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE281,MODE245)  */
struct A68t267{
struct A68t245  Elem;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE245,REF MODE267)  */
struct A68t268{
A68_BOOL  String;
A_PAD_BOOL(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t245  Left;
struct A68t245  Right;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(BOOL,INT,MODE245,MODE245)  */
A_VECTOR(struct A68t309 ,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] MODE309 */
struct A68t311{
struct A68t244  Tag;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE244)  */
struct A68t312{
struct A68t281  Tag;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(MODE281)  */
struct A68t313{
struct A68t315  Tag;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE315)  */
struct A68t314{
struct A68t245  Tag;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE245)  */
struct A68t306{
A68_INT  Fnno;
A_PAD_INT(PAD_105)
struct A68t308  Macparams;
struct A68t244  Attr;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT,REF MODE308,MODE244)  */
struct A68t310 { A68_INT mode; union {
struct A68t311  mode1;
struct A68t312  mode2;
struct A68t313  mode3;
struct A68t314  mode4;
struct A68t306  mode5;
} data; };
typedef struct A68t310  A68_310 ;    /* UNION(MODE311,MODE312,MODE313,MODE314,MODE306)  */
struct A68t309{
A68_INT  Sort;
A_PAD_INT(PAD_106)
struct A68t310  Param;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(INT,MODE310)  */
struct A68t269{
struct A68t306  Inst;
struct A68t245  Right;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(MODE306,MODE245)  */
struct A68t270{
struct A68t245  Left;
struct A68t306  Inst;
struct A68t245  Right;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE245,MODE306,MODE245)  */
struct A68t271{
struct A68t245  Input;
struct A68t336 * Choices;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE245,REF MODE336)  */
struct A68t272{
struct A68t281  Cond;
struct A68t245  True;
struct A68t245  False;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE281,MODE245,MODE245)  */
struct A68t273{
struct A68t281  Repl;
struct A68t245  Body;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE281,MODE245)  */
struct A68t274{
struct A68t324 * Body;
struct A68t245  Output;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE324,MODE245)  */
struct A68t275{
struct A68t292 * Body;
struct A68t245  Output;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE292,MODE245)  */
struct A68t276{
struct A68t245  Unit;
struct A68t244  Attr;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE245,MODE244)  */
struct A68t283{
A68_INT  Sort;
A_PAD_INT(PAD_107)
struct A68t281  Test;
struct A68t281  Standard;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,MODE281,MODE281)  */
struct A68t277{
struct A68t245  Unit;
struct A68t283  Check;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE245,MODE283)  */
struct A68t278{
struct A68t245  Unit;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE245)  */
struct A68t279{
struct A68t281  Size;
struct A68t245  Char;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE281,MODE245)  */
struct A68t280{
A68_INT  Unull;
A_PAD_INT(PAD_108)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT)  */
struct A68t282{
A68_INT  Int;
A_PAD_INT(PAD_109)
A68_VC  Text;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t284{
A68_INT  Nameno;
A_PAD_INT(PAD_110)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT)  */
struct A68t286{
struct A68t281  Left;
A68_INT  Sort;
A_PAD_INT(PAD_111)
struct A68t281  Right;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE281,INT,MODE281)  */
struct A68t287{
A68_INT  Sort;
A_PAD_INT(PAD_112)
struct A68t281  Right;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT,MODE281)  */
struct A68t288{
struct A68t281  Cond;
struct A68t281  True;
struct A68t281  False;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE281,MODE281,MODE281)  */
struct A68t289{
struct A68t281  Formula;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE281)  */
struct A68t290{
A68_INT  Macparno;
A_PAD_INT(PAD_113)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT)  */
struct A68t291{
A68_INT  Fnull;
A_PAD_INT(PAD_114)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT)  */
struct A68t293 { A68_INT mode; union {
struct A68t294  mode1;
struct A68t285  mode2;
struct A68t295  mode3;
struct A68t247  mode4;
struct A68t296  mode5;
struct A68t297 * mode6;
struct A68t298 * mode7;
struct A68t299 * mode8;
struct A68t300 * mode9;
struct A68t301 * mode10;
struct A68t302 * mode11;
struct A68t303 * mode12;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(MODE294,MODE285,MODE295,MODE247,MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303)  */
struct A68t292{
struct A68t293  Step;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE293,REF MODE292)  */
struct A68t297{
struct A68t281  Cond;
struct A68t322 * Print;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE281,REF MODE322)  */
struct A68t298{
struct A68t281  Cond;
struct A68t322 * Fault;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE281,REF MODE322)  */
struct A68t299{
struct A68t307 * Letnames;
struct A68t245  Unit;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE307,MODE245)  */
struct A68t300{
struct A68t304 * Sizes;
struct A68t306  Inst;
struct A68t307 * Makenames;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE304,MODE306,REF MODE307)  */
struct A68t301{
struct A68t245  From;
struct A68t245  To;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE245,MODE245)  */
struct A68t302{
struct A68t304 * Repls;
struct A68t305 * Joins;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(REF MODE304,REF MODE305)  */
struct A68t303{
A68_INT  Stepnull;
A_PAD_INT(PAD_115)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT)  */
struct A68t304{
struct A68t281  Formula;
struct A68t304 * Rest;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(MODE281,REF MODE304)  */
struct A68t305{
struct A68t301  Join;
struct A68t305 * Rest;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE301,REF MODE305)  */
struct A68t307{
A68_INT  Nameno;
A_PAD_INT(PAD_116)
struct A68t307 * Rest;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT,REF MODE307)  */
struct A68t316{
struct A68t281  Size;
struct A68t315  Elem;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE281,MODE315)  */
struct A68t317{
struct A68t315  Elem;
struct A68t317 * Rest;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE315,REF MODE317)  */
struct A68t318{
struct A68t315  From;
struct A68t315  To;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE315,MODE315)  */
struct A68t319{
struct A68t281  Size;
struct A68t315  Char;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE281,MODE315)  */
struct A68t320{
A68_INT  Tvoid;
A_PAD_INT(PAD_117)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(INT)  */
struct A68t321{
A68_INT  Tnull;
A_PAD_INT(PAD_118)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT)  */
struct A68t323 { A68_INT mode; union {
A68_VC  mode1;
struct A68t312 * mode2;
} data; };
typedef struct A68t323  A68_323 ;    /* UNION(REF MODE26,REF MODE312)  */
struct A68t322{
struct A68t323  Item;
struct A68t322 * Rest;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE323,REF MODE322)  */
struct A68t325 { A68_INT mode; union {
struct A68t294  mode1;
struct A68t285  mode2;
struct A68t295  mode3;
struct A68t247  mode4;
struct A68t296  mode5;
struct A68t297 * mode6;
struct A68t298 * mode7;
struct A68t326 * mode8;
struct A68t327 * mode9;
struct A68t328 * mode10;
struct A68t329 * mode11;
struct A68t330 * mode12;
struct A68t331 * mode13;
struct A68t332 * mode14;
struct A68t333 * mode15;
struct A68t324 * mode16;
struct A68t334 * mode17;
} data; };
typedef struct A68t325  A68_325 ;    /* UNION(MODE294,MODE285,MODE295,MODE247,MODE296,REF MODE297,REF MODE298,REF MODE326,REF MODE327,REF MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE332,REF MODE333,REF MODE324,REF MODE334)  */
struct A68t324{
struct A68t325  Step;
struct A68t324 * Rest;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE325,REF MODE324)  */
struct A68t326{
struct A68t299  Seqlet;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE299)  */
struct A68t327{
struct A68t299  Seqvar;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(MODE299)  */
struct A68t328{
struct A68t307 * Pvarnames;
struct A68t245  Init;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE307,MODE245)  */
struct A68t329{
struct A68t245  To;
struct A68t245  From;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE245,MODE245)  */
struct A68t330{
struct A68t245  Input;
struct A68t335 * Choices;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE245,REF MODE335)  */
struct A68t331{
struct A68t281  Cond;
struct A68t325  True;
struct A68t325  False;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(MODE281,MODE325,MODE325)  */
struct A68t332{
struct A68t281  Repl;
struct A68t325  Body;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE281,MODE325)  */
struct A68t333{
A68_INT  Seqnull;
A_PAD_INT(PAD_119)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(INT)  */
struct A68t334{
struct A68t281  Size;
struct A68t325  Elem;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(MODE281,MODE325)  */
struct A68t335{
A68_BOOL  Check;
A_PAD_BOOL(PAD_120)
A68_INT  Sort;
A_PAD_INT(PAD_121)
struct A68t245  Test;
struct A68t325  Output;
struct A68t335 * Rest;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(BOOL,INT,MODE245,MODE325,REF MODE335)  */
struct A68t336{
A68_BOOL  Check;
A_PAD_BOOL(PAD_122)
A68_INT  Sort;
A_PAD_INT(PAD_123)
struct A68t245  Test;
struct A68t245  Output;
struct A68t336 * Rest;
};
typedef struct A68t336  A68_336 ;    /* STRUCT(BOOL,INT,MODE245,MODE245,REF MODE336)  */
struct A68t338{
A68_VC  Classname;
struct A68t342 * Strings;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(REF MODE26,REF MODE342)  */
struct A68t339{
struct A68t244  Elem;
struct A68t339 * Rest;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(MODE244,REF MODE339)  */
struct A68t340{
struct A68t244  Attr;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(MODE244)  */
struct A68t341{
A68_INT  Attrnull;
A_PAD_INT(PAD_124)
};
typedef struct A68t341  A68_341 ;    /* STRUCT(INT)  */
struct A68t342{
A68_VC  Id;
struct A68t342 * Rest;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE26,REF MODE342)  */
A_VECTOR(struct A68t348 ,A68t345);
typedef struct A68t345  A68_345 ;    /* VECTOR [] MODE348 */
struct A68t348{
A68_VC  Altname;
struct A68t315  Assoc;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(REF MODE26,MODE315)  */
struct A68t344 { A68_INT mode; union {
struct A68t345  mode1;
struct A68t346 * mode2;
struct A68t313 * mode3;
struct A68t347 * mode4;
} data; };
typedef struct A68t344  A68_344 ;    /* UNION(REF MODE345,REF MODE346,REF MODE313,REF MODE347)  */
struct A68t343{
A68_INT  Sort;
A_PAD_INT(PAD_125)
A68_VC  Typename;
struct A68t244  Attr;
struct A68t344  Body;
struct A68t246 * Usage;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(INT,REF MODE26,MODE244,MODE344,REF MODE246)  */
struct A68t346{
A68_VC  Tagname;
struct A68t337  Range;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE26,MODE337)  */
struct A68t347{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t350 { A68_INT mode; union {
struct A68t282 * mode1;
struct A68t283 * mode2;
struct A68t284 * mode3;
struct A68t285 * mode4;
struct A68t286 * mode5;
struct A68t287 * mode6;
struct A68t288 * mode7;
struct A68t289 * mode8;
struct A68t290 * mode9;
struct A68t291 * mode10;
struct A68t337  mode11;
} data; };
typedef struct A68t350  A68_350 ;    /* UNION(REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,MODE337)  */
struct A68t349{
A68_INT  Sort;
A_PAD_INT(PAD_126)
A68_VC  Intname;
struct A68t244  Attr;
struct A68t350  Value;
struct A68t246 * Usage;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(INT,REF MODE26,MODE244,MODE350,REF MODE246)  */
struct A68t351{
A68_INT  Sort;
A_PAD_INT(PAD_127)
A68_VC  Attrname;
struct A68t244  Value;
struct A68t246 * Usage;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(INT,REF MODE26,MODE244,REF MODE246)  */
struct A68t357{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_128)
A68_VC  Name;
struct A68t308  Macparams;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(BOOL,REF MODE26,REF MODE308)  */
struct A68t358{
struct A68t281  Output;
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE281)  */
struct A68t359{
A68_INT  Reform;
A_PAD_INT(PAD_129)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(INT)  */
struct A68t360{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_130)
struct A68t144  Ctname;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(REF MODE26,INT,MODE144)  */
struct A68t361{
A68_INT  Sort;
A_PAD_INT(PAD_131)
struct A68t245  Init;
struct A68t281  Ambigtime;
struct A68t245  Ambig;
struct A68t281  Delaytime;
};
typedef struct A68t361  A68_361 ;    /* STRUCT(INT,MODE245,MODE281,MODE245,MODE281)  */
struct A68t362{
struct A68t245  Init;
struct A68t281  Delaytime;
};
typedef struct A68t362  A68_362 ;    /* STRUCT(MODE245,MODE281)  */
struct A68t363{
struct A68t245  Init;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(MODE245)  */
struct A68t364{
A68_INT  Sort;
A_PAD_INT(PAD_132)
struct A68t281  Interval;
struct A68t245  Init;
struct A68t281  Skew;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(INT,MODE281,MODE245,MODE281)  */
struct A68t365{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_133)
A68_INT  Sort;
A_PAD_INT(PAD_134)
struct A68t306  Inst;
struct A68t281  Scale;
struct A68t245  Init;
struct A68t281  Skew;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(BOOL,INT,MODE306,MODE281,MODE245,MODE281)  */
struct A68t366{
struct A68t368 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_135)
struct A68t229  Fnbody;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(REF MODE368,BOOL,MODE229)  */
struct A68t367{
A68_INT  Bodynull;
A_PAD_INT(PAD_136)
};
typedef struct A68t367  A68_367 ;    /* STRUCT(INT)  */
struct A68t368{
A68_INT  Int;
A_PAD_INT(PAD_137)
struct A68t368 * Rest;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(INT,REF MODE368)  */

A_PROCEDURE(A68_VOID ,A68t369,(A68_INT ,A68_VC ,struct A68t175 *),(A68_INT ,A68_VC ,struct A68t175 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(INT,REF MODE26) MODE175 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t32 ,A68_VC ,struct A68t175 *),(struct A68t32 ,A68_VC ,struct A68t175 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE32,MODE26) MODE175 */

A_PROCEDURE(A68_CHAR ,A68t371,(struct A68t206 ,struct A68t36 ),(struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE206,MODE36) CHAR */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t206 ,A68_INT ,struct A68t36 ,A68_VC *),(struct A68t206 ,A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE206,INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t373,(struct A68t206 ,struct A68t36 ),(struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE206,MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t206 ,struct A68t36 ,A68_VC *),(struct A68t206 ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE206,MODE36) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t375,(struct A68t206 ,struct A68t36 ),(struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE206,MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t376,(A68_CHAR ,struct A68t206 ,struct A68t36 ),(A68_CHAR ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(CHAR,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(A68_VC ,struct A68t206 ,struct A68t36 ),(A68_VC ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE26,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t378,(A68_INT ,struct A68t206 ,struct A68t36 ),(A68_INT ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(INT,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t379,(A68_BOOL ,struct A68t206 ,struct A68t36 ),(A68_BOOL ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(BOOL,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t206 ,struct A68t36 ,struct A68t160 *),(struct A68t206 ,struct A68t36 ,struct A68t160 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE206,MODE36) MODE160 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t160 ,struct A68t206 ,struct A68t36 ),(struct A68t160 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE160,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t206 ,struct A68t36 ,struct A68t173 *),(struct A68t206 ,struct A68t36 ,struct A68t173 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE206,MODE36) MODE173 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t173 ,struct A68t206 ,struct A68t36 ),(struct A68t173 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE173,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t206 ,struct A68t36 ,struct A68t174 *),(struct A68t206 ,struct A68t36 ,struct A68t174 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE206,MODE36) MODE174 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t174 ,struct A68t206 ,struct A68t36 ),(struct A68t174 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE174,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t206 ,struct A68t36 ,struct A68t192 *),(struct A68t206 ,struct A68t36 ,struct A68t192 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE206,MODE36) MODE192 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t192 ,struct A68t206 ,struct A68t36 ),(struct A68t192 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE192,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t206 ,struct A68t36 ,struct A68t190 *),(struct A68t206 ,struct A68t36 ,struct A68t190 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE206,MODE36) MODE190 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t190 ,struct A68t206 ,struct A68t36 ),(struct A68t190 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE190,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t206 ,struct A68t36 ,struct A68t181 *),(struct A68t206 ,struct A68t36 ,struct A68t181 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE206,MODE36) MODE181 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t181 ,struct A68t206 ,struct A68t36 ),(struct A68t181 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE181,MODE206,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t206 ,struct A68t36 ,struct A68t180 *),(struct A68t206 ,struct A68t36 ,struct A68t180 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE206,MODE36) MODE180 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t180 ,struct A68t206 ,struct A68t36 ),(struct A68t180 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE180,MODE206,MODE36) VOID */
struct A68t395 ;

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t206 ,struct A68t36 ,struct A68t395 *),(struct A68t206 ,struct A68t36 ,struct A68t395 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE206,MODE36) MODE395 */
struct A68t397{
struct A68t173 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_138)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE173,INT)  */
struct A68t396 { A68_INT mode; union {
struct A68t181  mode1;
struct A68t397  mode2;
} data; };
typedef struct A68t396  A68_396 ;    /* UNION(MODE181,MODE397)  */
struct A68t395{
struct A68t396  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_139)
A68_INT  Base;
A_PAD_INT(PAD_140)
};
typedef struct A68t395  A68_395 ;    /* STRUCT(MODE396,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t395 ,struct A68t206 ,struct A68t36 ),(struct A68t395 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE395,MODE206,MODE36) VOID */
struct A68t399 { A68_INT mode; union {
struct A68t162 * mode1;
struct A68t163 * mode2;
struct A68t164 * mode3;
} data; };
typedef struct A68t399  A68_399 ;    /* UNION(REF MODE162,REF MODE163,REF MODE164)  */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t216 ,struct A68t160 *),(struct A68t216 ,struct A68t160 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE216) MODE160 */

A_PROCEDURE(A68_BOOL ,A68t401,(struct A68t160 ,struct A68t160 ),(struct A68t160 ,struct A68t160 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE160,MODE160) BOOL */

A_PROCEDURE(A68_BOOL ,A68t402,(struct A68t216 ,struct A68t216 ),(struct A68t216 ,struct A68t216 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE216,MODE216) BOOL */

A_PROCEDURE(A68_BOOL ,A68t403,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t404,(struct A68t181 ,struct A68t181 ),(struct A68t181 ,struct A68t181 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE181,MODE181) BOOL */

A_PROCEDURE(A68_BOOL ,A68t405,(struct A68t397 ,struct A68t397 ),(struct A68t397 ,struct A68t397 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE397,MODE397) BOOL */

A_PROCEDURE(A68_BOOL ,A68t406,(struct A68t396 ,struct A68t396 ),(struct A68t396 ,struct A68t396 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE396,MODE396) BOOL */

A_PROCEDURE(A68_BOOL ,A68t407,(struct A68t395 ,struct A68t395 ),(struct A68t395 ,struct A68t395 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE395,MODE395) BOOL */

A_PROCEDURE(struct A68t168 *,A68t408,(struct A68t168 *,struct A68t168 *),(struct A68t168 *,struct A68t168 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE168,REF MODE168) REF MODE168 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t177 ,struct A68t177 ,struct A68t177 *),(struct A68t177 ,struct A68t177 ,struct A68t177 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE177,REF MODE177) REF MODE177 */

A_PROCEDURE(A68_VOID ,A68t410,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t411,(A68_VC ),(A68_VC ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE26) INT */
struct A68t412{
A68_INT  Sort;
A_PAD_INT(PAD_141)
A68_INT  Size;
A_PAD_INT(PAD_142)
};
typedef struct A68t412  A68_412 ;    /* STRUCT(INT,INT)  */
struct A68t413{
struct A68t412  Head;
struct A68t413 * Tail;
};
typedef struct A68t413  A68_413 ;    /* STRUCT(MODE412,REF MODE413)  */
struct A68t415{
A68_INT  Lab;
A_PAD_INT(PAD_143)
A68_VC  Tag;
};
typedef struct A68t415  A68_415 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t414{
struct A68t415  Labelint;
struct A68t415  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_144)
A68_INT  Evalfn;
A_PAD_INT(PAD_145)
A68_INT  History;
A_PAD_INT(PAD_146)
A68_INT  Declid;
A_PAD_INT(PAD_147)
};
typedef struct A68t414  A68_414 ;    /* STRUCT(MODE415,MODE415,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t414 *,A68t416,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE414 */
struct A68t417 { A68_INT mode; union {
A68_INT  mode1;
struct A68t415  mode2;
} data; };
typedef struct A68t417  A68_417 ;    /* UNION(INT,MODE415,VOID)  */

A_PROCEDURE(A68_VOID ,A68t418,(A68_VC ,struct A68t415 *),(A68_VC ,struct A68t415 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE26) MODE415 */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t415 *),(struct A68t415 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC MODE415 */

A_PROCEDURE(A68_INT ,A68t420,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t421,(A68_VC ),(A68_VC ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t422,(A68_INT ,struct A68t417 ),(A68_INT ,struct A68t417 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(INT,MODE417) VOID */

A_PROCEDURE(A68_VOID ,A68t423,(A68_INT ,A68_INT ,struct A68t417 ),(A68_INT ,A68_INT ,struct A68t417 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(INT,INT,MODE417) VOID */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t415 ),(struct A68t415 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE415) VOID */

A_PROCEDURE(A68_VOID ,A68t425,(A68_INT ,struct A68t415 ),(A68_INT ,struct A68t415 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(INT,MODE415) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t417 ,struct A68t415 ),(struct A68t417 ,struct A68t415 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE417,MODE415) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t415 ,struct A68t413 *,struct A68t413 *),(struct A68t415 ,struct A68t413 *,struct A68t413 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE415,REF MODE413,REF MODE413) VOID */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t415 ,A68_INT ),(struct A68t415 ,A68_INT ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE415,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t429,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t430,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t431,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t432,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t434 ;

A_PROCEDURE(A68_VOID ,A68t433,(A68_INT ,struct A68t434 *),(A68_INT ,struct A68t434 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(INT) MODE434 */
struct A68t434{
A68_INT  Lasttime;
A_PAD_INT(PAD_148)
A68_INT  Interrupted;
A_PAD_INT(PAD_149)
};
typedef struct A68t434  A68_434 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t206 ,struct A68t206 ,struct A68t36 ),(struct A68t206 ,struct A68t206 ,struct A68t36 ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE206,MODE206,MODE36) VOID */
struct A68t437 ;

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t437 *),(struct A68t437 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC MODE437 */
struct A68t437{
A68_INT  Codesize;
A_PAD_INT(PAD_150)
A68_INT  Datasize;
A_PAD_INT(PAD_151)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_152)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_153)
};
typedef struct A68t437  A68_437 ;    /* STRUCT(INT,INT,INT,INT)  */
A_VECTOR(A68_VC ,A68t438);
typedef struct A68t438  A68_438 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t234 *,A68t439);
typedef struct A68t439  A68_439 ;    /* VECTOR [] REF MODE234 */

A_PROCEDURE(struct A68t284 *,A68t440,(A68_INT ),(A68_INT ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(INT) REF MODE284 */

A_PROCEDURE(struct A68t285 *,A68t441,(A68_INT ),(A68_INT ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(INT) REF MODE285 */

A_PROCEDURE(struct A68t289 *,A68t442,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE281) REF MODE289 */

A_PROCEDURE(struct A68t312 *,A68t443,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE281) REF MODE312 */

A_PROCEDURE(struct A68t295 *,A68t444,(A68_INT ),(A68_INT ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(INT) REF MODE295 */

A_PROCEDURE(struct A68t253 *,A68t445,(struct A68t315 ),(struct A68t315 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE315) REF MODE253 */

A_PROCEDURE(struct A68t313 *,A68t446,(struct A68t315 ),(struct A68t315 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE315) REF MODE313 */

A_PROCEDURE(struct A68t247 *,A68t447,(A68_INT ),(A68_INT ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(INT) REF MODE247 */

A_PROCEDURE(struct A68t250 *,A68t448,(struct A68t315 ),(struct A68t315 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE315) REF MODE250 */

A_PROCEDURE(struct A68t326 *,A68t449,(struct A68t299 ),(struct A68t299 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE299) REF MODE326 */

A_PROCEDURE(struct A68t327 *,A68t450,(struct A68t299 ),(struct A68t299 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE299) REF MODE327 */

A_PROCEDURE(struct A68t278 *,A68t451,(struct A68t245 ),(struct A68t245 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE245) REF MODE278 */

A_PROCEDURE(struct A68t314 *,A68t452,(struct A68t245 ),(struct A68t245 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE245) REF MODE314 */

A_PROCEDURE(struct A68t296 *,A68t453,(A68_INT ),(A68_INT ,void *));
typedef struct A68t453  A68_453 ;    /* PROC(INT) REF MODE296 */

A_PROCEDURE(struct A68t358 *,A68t454,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE281) REF MODE358 */

A_PROCEDURE(struct A68t363 *,A68t455,(struct A68t245 ),(struct A68t245 ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE245) REF MODE363 */

A_PROCEDURE(struct A68t290 *,A68t456,(A68_INT ),(A68_INT ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(INT) REF MODE290 */

A_PROCEDURE(struct A68t294 *,A68t457,(A68_INT ),(A68_INT ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(INT) REF MODE294 */

A_PROCEDURE(struct A68t311 *,A68t458,(struct A68t244 ),(struct A68t244 ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE244) REF MODE311 */

A_PROCEDURE(struct A68t340 *,A68t459,(struct A68t244 ),(struct A68t244 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(MODE244) REF MODE340 */
A_VECTOR(struct A68t342 *,A68t460);
typedef struct A68t460  A68_460 ;    /* VECTOR [] REF MODE342 */

A_PROCEDURE(struct A68t282 *,A68t461,(A68_INT ),(A68_INT ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(INT) REF MODE282 */

A_PROCEDURE(A68_INT ,A68t462,(struct A68t281 ,struct A68t97 ),(struct A68t281 ,struct A68t97 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE281,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t463,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t463  A68_463 ;    /* PROC(MODE281) INT */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t281 ,struct A68t281 *),(struct A68t281 ,struct A68t281 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE281) MODE281 */

A_PROCEDURE(struct A68t351 *,A68t465,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(MODE237) REF MODE351 */

A_PROCEDURE(struct A68t349 *,A68t466,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(MODE237) REF MODE349 */

A_PROCEDURE(struct A68t343 *,A68t467,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(MODE237) REF MODE343 */

A_PROCEDURE(struct A68t243 *,A68t468,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE237) REF MODE243 */

A_PROCEDURE(struct A68t230 *,A68t469,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(MODE237) REF MODE230 */

A_PROCEDURE(A68_INT ,A68t470,(struct A68t246 *,struct A68t238 ),(struct A68t246 *,struct A68t238 ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(REF MODE246,REF MODE238) INT */

A_PROCEDURE(A68_INT ,A68t471,(struct A68t246 *,struct A68t239 ),(struct A68t246 *,struct A68t239 ,void *));
typedef struct A68t471  A68_471 ;    /* PROC(REF MODE246,REF MODE239) INT */

A_PROCEDURE(A68_INT ,A68t472,(struct A68t246 *,struct A68t240 ),(struct A68t246 *,struct A68t240 ,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE246,REF MODE240) INT */

A_PROCEDURE(A68_INT ,A68t473,(struct A68t246 *,struct A68t241 ),(struct A68t246 *,struct A68t241 ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE246,REF MODE241) INT */

A_PROCEDURE(A68_INT ,A68t474,(struct A68t246 *,struct A68t242 ),(struct A68t246 *,struct A68t242 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE246,REF MODE242) INT */

A_PROCEDURE(struct A68t351 *,A68t475,(struct A68t294 ,struct A68t233 *,struct A68t232 *),(struct A68t294 ,struct A68t233 *,struct A68t232 *,void *));
typedef struct A68t475  A68_475 ;    /* PROC(MODE294,REF MODE233,REF MODE232) REF MODE351 */

A_PROCEDURE(struct A68t349 *,A68t476,(struct A68t285 ,struct A68t233 *,struct A68t232 *),(struct A68t285 ,struct A68t233 *,struct A68t232 *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE285,REF MODE233,REF MODE232) REF MODE349 */

A_PROCEDURE(struct A68t343 *,A68t477,(struct A68t295 ,struct A68t233 *,struct A68t232 *),(struct A68t295 ,struct A68t233 *,struct A68t232 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(MODE295,REF MODE233,REF MODE232) REF MODE343 */

A_PROCEDURE(struct A68t243 *,A68t478,(struct A68t247 ,struct A68t233 *,struct A68t232 *),(struct A68t247 ,struct A68t233 *,struct A68t232 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(MODE247,REF MODE233,REF MODE232) REF MODE243 */

A_PROCEDURE(struct A68t230 *,A68t479,(struct A68t296 ,struct A68t233 *,struct A68t232 *),(struct A68t296 ,struct A68t233 *,struct A68t232 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE296,REF MODE233,REF MODE232) REF MODE230 */

A_PROCEDURE(struct A68t318 *,A68t480,(struct A68t230 *),(struct A68t230 *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE230) REF MODE318 */

A_PROCEDURE(A68_VOID ,A68t481,(struct A68t317 *,struct A68t281 *),(struct A68t317 *,struct A68t281 *,void *));
typedef struct A68t481  A68_481 ;    /* PROC(REF MODE317) MODE281 */

A_PROCEDURE(A68_VOID ,A68t482,(struct A68t315 ,struct A68t232 *,struct A68t281 *),(struct A68t315 ,struct A68t232 *,struct A68t281 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(MODE315,REF MODE232) MODE281 */

A_PROCEDURE(struct A68t230 *,A68t483,(struct A68t230 *,struct A68t232 *,struct A68t232 *),(struct A68t230 *,struct A68t232 *,struct A68t232 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(REF MODE230,REF MODE232,REF MODE232) REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t307 *,struct A68t230 *,struct A68t315 *),(struct A68t307 *,struct A68t230 *,struct A68t315 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(REF MODE307,REF MODE230) MODE315 */

A_PROCEDURE(A68_INT ,A68t485,(struct A68t307 *),(struct A68t307 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(REF MODE307) INT */

A_PROCEDURE(A68_INT ,A68t486,(struct A68t307 *,A68_INT ),(struct A68t307 *,A68_INT ,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE307,INT) INT */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t245 ,struct A68t230 *,struct A68t232 *,struct A68t315 *),(struct A68t245 ,struct A68t230 *,struct A68t232 *,struct A68t315 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(MODE245,REF MODE230,REF MODE232) MODE315 */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t315 ,struct A68t232 *,struct A68t315 *),(struct A68t315 ,struct A68t232 *,struct A68t315 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(MODE315,REF MODE232) MODE315 */

A_PROCEDURE(A68_BOOL ,A68t489,(struct A68t315 ,struct A68t315 ,struct A68t232 *,struct A68t232 *,A68_BOOL ),(struct A68t315 ,struct A68t315 ,struct A68t232 *,struct A68t232 *,A68_BOOL ,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE315,MODE315,REF MODE232,REF MODE232,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t490,(struct A68t261 *,struct A68t232 *),(struct A68t261 *,struct A68t232 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(REF MODE261,REF MODE232) INT */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t315 ,struct A68t232 ,struct A68t233 *,struct A68t160 *),(struct A68t315 ,struct A68t232 ,struct A68t233 *,struct A68t160 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(MODE315,MODE232,REF MODE233) MODE160 */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t245 ,struct A68t232 ,struct A68t233 *,struct A68t216 *),(struct A68t245 ,struct A68t232 ,struct A68t233 *,struct A68t216 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(MODE245,MODE232,REF MODE233) MODE216 */
struct A68t494 ;

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t233 *,struct A68t97 ,struct A68t494 *),(struct A68t233 *,struct A68t97 ,struct A68t494 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(REF MODE233,MODE97) MODE494 */
struct A68t494{
struct A68t233 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_154)
};
typedef struct A68t494  A68_494 ;    /* STRUCT(REF MODE233,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t495  A68_495 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t496,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t496  A68_496 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t497);
typedef struct A68t497  A68_497 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VOID ,A68t498,(A68_BOOL ,struct A68t177 *),(A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(BOOL) MODE177 */
struct A68t499{
A68_INT  Inst;
A_PAD_INT(PAD_155)
A68_INT  Offset;
A_PAD_INT(PAD_156)
};
typedef struct A68t499  A68_499 ;    /* STRUCT(INT,INT)  */
A_VECTOR(struct A68t499 ,A68t501);
typedef struct A68t501  A68_501 ;    /* VECTOR [] MODE499 */
struct A68t500{
struct A68t501  Inputs;
A68_INT  Fnno;
A_PAD_INT(PAD_157)
A68_INT  Size;
A_PAD_INT(PAD_158)
A68_INT  Outputoffset;
A_PAD_INT(PAD_159)
A68_INT  Alienworkspaceoffset;
A_PAD_INT(PAD_160)
A68_BITS  Sort;
A_PAD_BITS(PAD_161)
A68_INT  Nextc;
A_PAD_INT(PAD_162)
A68_INT  Nexte;
A_PAD_INT(PAD_163)
};
typedef struct A68t500  A68_500 ;    /* STRUCT(REF MODE501,INT,INT,INT,INT,BITS,INT,INT)  */
A_VECTOR(struct A68t500 *,A68t502);
typedef struct A68t502  A68_502 ;    /* VECTOR [] REF MODE500 */
struct A68t503{
A68_INT  Fnno;
A_PAD_INT(PAD_164)
A68_INT  Offset;
A_PAD_INT(PAD_165)
};
typedef struct A68t503  A68_503 ;    /* STRUCT(INT,INT)  */
A_VECTOR(struct A68t503 ,A68t504);
typedef struct A68t504  A68_504 ;    /* VECTOR [] MODE503 */
struct A68t505{
A68_INT  Fnno;
A_PAD_INT(PAD_166)
A68_INT  Size;
A_PAD_INT(PAD_167)
A68_INT  Inputinstance;
A_PAD_INT(PAD_168)
A68_INT  Probeinstance;
A_PAD_INT(PAD_169)
A68_INT  Baseoffset;
A_PAD_INT(PAD_170)
struct A68t504  Instptrs;
};
typedef struct A68t505  A68_505 ;    /* STRUCT(INT,INT,INT,INT,INT,REF MODE504)  */
A_VECTOR(struct A68t505 ,A68t506);
typedef struct A68t506  A68_506 ;    /* VECTOR [] MODE505 */
struct A68t507{
A68_INT  Sink;
A_PAD_INT(PAD_171)
struct A68t507 * Tail;
};
typedef struct A68t507  A68_507 ;    /* STRUCT(INT,REF MODE507)  */
struct A68t508{
A68_BITS  Sort;
A_PAD_BITS(PAD_172)
A68_INT  Sourceinst;
A_PAD_INT(PAD_173)
struct A68t207  Fanout;
};
typedef struct A68t508  A68_508 ;    /* STRUCT(BITS,INT,MODE207)  */
A_VECTOR(struct A68t508 ,A68t509);
typedef struct A68t509  A68_509 ;    /* VECTOR [] MODE508 */
struct A68t510{
struct A68t502  Instances;
struct A68t209  Fanouts;
struct A68t509  Breaks;
A68_INT  Lastinstance;
A_PAD_INT(PAD_174)
A68_INT  Lastbreak;
A_PAD_INT(PAD_175)
A68_INT  Firstcombinatorial;
A_PAD_INT(PAD_176)
A68_INT  Lastcombinatorial;
A_PAD_INT(PAD_177)
A68_INT  Firsteventhandler;
A_PAD_INT(PAD_178)
};
typedef struct A68t510  A68_510 ;    /* STRUCT(REF MODE502,REF MODE209,REF MODE509,INT,INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t511,(A68_BOOL ,struct A68t502 *),(A68_BOOL ,struct A68t502 *,void *));
typedef struct A68t511  A68_511 ;    /* PROC(BOOL) MODE502 */

A_PROCEDURE(A68_VOID ,A68t512,(A68_BOOL ,struct A68t509 *),(A68_BOOL ,struct A68t509 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(BOOL) MODE509 */
A_VECTOR(struct A68t510 ,A68t513);
typedef struct A68t513  A68_513 ;    /* VECTOR [] MODE510 */
struct A68t514{
A68_INT  Fn;
A_PAD_INT(PAD_179)
A68_INT  Instance;
A_PAD_INT(PAD_180)
struct A68t501  Inputs;
};
typedef struct A68t514  A68_514 ;    /* STRUCT(INT,INT,REF MODE501)  */
A_VECTOR(struct A68t514 ,A68t515);
typedef struct A68t515  A68_515 ;    /* VECTOR [] MODE514 */

A_PROCEDURE(A68_VOID ,A68t516,(A68_BOOL ,struct A68t515 *),(A68_BOOL ,struct A68t515 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(BOOL) MODE515 */

A_PROCEDURE(A68_VOID ,A68t517,(A68_BOOL ,struct A68t438 *),(A68_BOOL ,struct A68t438 *,void *));
typedef struct A68t517  A68_517 ;    /* PROC(BOOL) MODE438 */

A_PROCEDURE(A68_VOID ,A68t518,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,A68_BOOL ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,A68_BOOL ,void *));
typedef struct A68t518  A68_518 ;    /* PROC(INT,INT,INT,INT,INT,BITS,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t519,(A68_BOOL ,struct A68t501 *),(A68_BOOL ,struct A68t501 *,void *));
typedef struct A68t519  A68_519 ;    /* PROC(BOOL) MODE501 */
A_ISTRUCT(A68_CHAR ,20,A68t520);
typedef struct A68t520  A68_520 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_VOID ,A68t521,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t521  A68_521 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_INT ,A68t522,(A68_BITS ,A68_INT ,struct A68t207 ),(A68_BITS ,A68_INT ,struct A68t207 ,void *));
typedef struct A68t522  A68_522 ;    /* PROC(BITS,INT,MODE207) INT */
A_VECTOR(struct A68t507 *,A68t523);
typedef struct A68t523  A68_523 ;    /* VECTOR [] REF MODE507 */

A_PROCEDURE(A68_VOID ,A68t524,(struct A68t523 ),(struct A68t523 ,void *));
typedef struct A68t524  A68_524 ;    /* PROC(REF MODE523) VOID */

A_PROCEDURE(A68_VOID ,A68t525,(A68_BOOL ,struct A68t523 *),(A68_BOOL ,struct A68t523 *,void *));
typedef struct A68t525  A68_525 ;    /* PROC(BOOL) MODE523 */

A_PROCEDURE(A68_VOID ,A68t526,(A68_BOOL ,struct A68t209 *),(A68_BOOL ,struct A68t209 *,void *));
typedef struct A68t526  A68_526 ;    /* PROC(BOOL) MODE209 */

A_PROCEDURE(A68_VOID ,A68t527,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t527  A68_527 ;    /* PROC(INT,INT,BOOL) VOID */

A_PROCEDURE(A68_INT ,A68t528,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t528  A68_528 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t529,(A68_BOOL ,struct A68t504 *),(A68_BOOL ,struct A68t504 *,void *));
typedef struct A68t529  A68_529 ;    /* PROC(BOOL) MODE504 */

A_PROCEDURE(A68_INT ,A68t530,(A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,struct A68t502 ,struct A68t209 ,struct A68t504 ,struct A68t36 ),(A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,struct A68t502 ,struct A68t209 ,struct A68t504 ,struct A68t36 ,void *));
typedef struct A68t530  A68_530 ;    /* PROC(BOOL,INT,INT,INT,REF MODE502,REF MODE209,REF MODE504,MODE36) INT */

A_PROCEDURE(A68_INT *,A68t531,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t531  A68_531 ;    /* PROC(REF CHAR) REF INT */
A_ISTRUCT(A68_CHAR ,10,A68t532);
typedef struct A68t532  A68_532 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t533);
typedef struct A68t533  A68_533 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t534);
typedef struct A68t534  A68_534 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t535);
typedef struct A68t535  A68_535 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_VOID ,A68t536,(A68_BITS ,A68_INT ),(A68_BITS ,A68_INT ,void *));
typedef struct A68t536  A68_536 ;    /* PROC(BITS,INT) VOID */
struct A68t537{
A68_INT  Makeno;
A_PAD_INT(PAD_181)
A68_INT  Inputinstance;
A_PAD_INT(PAD_182)
A68_INT  Probeinstance;
A_PAD_INT(PAD_183)
};
typedef struct A68t537  A68_537 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t538,(A68_INT ,struct A68t537 *),(A68_INT ,struct A68t537 *,void *));
typedef struct A68t538  A68_538 ;    /* PROC(INT) MODE537 */
A_ISTRUCT(A68_CHAR ,1,A68t539);
typedef struct A68t539  A68_539 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t540);
typedef struct A68t540  A68_540 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t541);
typedef struct A68t541  A68_541 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t542,(A68_INT ,struct A68t32 ,struct A68t36 ),(A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t542  A68_542 ;    /* PROC(INT,MODE32,MODE36) VOID */
A_ISTRUCT(A68_CHAR ,73,A68t543);
typedef struct A68t543  A68_543 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t544);
typedef struct A68t544  A68_544 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,39,A68t545);
typedef struct A68t545  A68_545 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t546);
typedef struct A68t546  A68_546 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t547,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t547  A68_547 ;    /* PROC(INT,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t548,(A68_BOOL ,struct A68t513 *),(A68_BOOL ,struct A68t513 *,void *));
typedef struct A68t548  A68_548 ;    /* PROC(BOOL) MODE513 */

A_PROCEDURE(A68_VOID ,A68t549,(A68_BOOL ,struct A68t506 *),(A68_BOOL ,struct A68t506 *,void *));
typedef struct A68t549  A68_549 ;    /* PROC(BOOL) MODE506 */

A_PROCEDURE(A68_INT ,A68t550,(struct A68t229 ,struct A68t230 *,struct A68t232 *,struct A68t233 *,A68_INT ,A68_INT ,A68_INT ,struct A68t36 ),(struct A68t229 ,struct A68t230 *,struct A68t232 *,struct A68t233 *,A68_INT ,A68_INT ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t550  A68_550 ;    /* PROC(MODE229,REF MODE230,REF MODE232,REF MODE233,INT,INT,INT,MODE36) INT */
struct A68t551{
A68_INT  Fn;
A_PAD_INT(PAD_184)
struct A68t32  Instances;
};
typedef struct A68t551  A68_551 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t553 { A68_INT mode; union {
struct A68t551  mode1;
struct A68t181  mode2;
} data; };
typedef struct A68t553  A68_553 ;    /* UNION(MODE551,MODE181)  */
struct A68t552{
struct A68t553  Box;
struct A68t173  Wire;
};
typedef struct A68t552  A68_552 ;    /* STRUCT(MODE553,MODE173)  */
struct A68t554 { A68_INT mode; union {
struct A68t181  mode1;
struct A68t551  mode2;
struct A68t173  mode3;
struct A68t552  mode4;
} data; };
typedef struct A68t554  A68_554 ;    /* UNION(MODE181,MODE551,MODE173,MODE552,VOID)  */

A_PROCEDURE(A68_VOID ,A68t555,(struct A68t177 ,struct A68t177 *),(struct A68t177 ,struct A68t177 *,void *));
typedef struct A68t555  A68_555 ;    /* PROC(REF MODE177) REF MODE177 */

A_PROCEDURE(A68_VOID ,A68t556,(struct A68t554 ,struct A68t173 *),(struct A68t554 ,struct A68t173 *,void *));
typedef struct A68t556  A68_556 ;    /* PROC(MODE554) MODE173 */

A_PROCEDURE(A68_VOID ,A68t557,(struct A68t177 ,A68_INT ,A68_INT ,struct A68t177 *),(struct A68t177 ,A68_INT ,A68_INT ,struct A68t177 *,void *));
typedef struct A68t557  A68_557 ;    /* PROC(REF MODE177,INT,INT) REF MODE177 */
A_ISTRUCT(A68_CHAR ,44,A68t558);
typedef struct A68t558  A68_558 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(A68_VOID ,A68t559,(struct A68t554 ,A68_INT ,A68_INT ,struct A68t554 *),(struct A68t554 ,A68_INT ,A68_INT ,struct A68t554 *,void *));
typedef struct A68t559  A68_559 ;    /* PROC(MODE554,INT,INT) MODE554 */

A_PROCEDURE(A68_VOID ,A68t560,(struct A68t160 ,A68_INT ,struct A68t160 *),(struct A68t160 ,A68_INT ,struct A68t160 *,void *));
typedef struct A68t560  A68_560 ;    /* PROC(MODE160,INT) MODE160 */

A_PROCEDURE(A68_VOID ,A68t561,(struct A68t173 ,A68_INT ,struct A68t173 *),(struct A68t173 ,A68_INT ,struct A68t173 *,void *));
typedef struct A68t561  A68_561 ;    /* PROC(MODE173,INT) MODE173 */

A_PROCEDURE(A68_VOID ,A68t562,(struct A68t554 ,A68_INT ,struct A68t554 *),(struct A68t554 ,A68_INT ,struct A68t554 *,void *));
typedef struct A68t562  A68_562 ;    /* PROC(MODE554,INT) MODE554 */
A_VECTOR(struct A68t554 ,A68t563);
typedef struct A68t563  A68_563 ;    /* VECTOR [] MODE554 */

A_PROCEDURE(A68_VOID ,A68t564,(struct A68t275 ,A68_INT ,struct A68t230 *,struct A68t232 *,struct A68t233 *,struct A68t563 ,struct A68t438 ,A68_INT *,A68_INT ,struct A68t36 ,struct A68t554 *),(struct A68t275 ,A68_INT ,struct A68t230 *,struct A68t232 *,struct A68t233 *,struct A68t563 ,struct A68t438 ,A68_INT *,A68_INT ,struct A68t36 ,struct A68t554 *,void *));
typedef struct A68t564  A68_564 ;    /* PROC(MODE275,INT,REF MODE230,REF MODE232,REF MODE233,REF MODE563,REF MODE438,REF INT,INT,MODE36) MODE554 */
A_VECTOR(struct A68t554 *,A68t565);
typedef struct A68t565  A68_565 ;    /* VECTOR [] REF MODE554 */

A_PROCEDURE(A68_VOID ,A68t566,(struct A68t565 *,struct A68t563 ,A68_INT ),(struct A68t565 *,struct A68t563 ,A68_INT ,void *));
typedef struct A68t566  A68_566 ;    /* PROC(REF REF MODE565,REF MODE563,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t567,(A68_BOOL ,struct A68t565 *),(A68_BOOL ,struct A68t565 *,void *));
typedef struct A68t567  A68_567 ;    /* PROC(BOOL) MODE565 */

A_PROCEDURE(A68_VOID ,A68t568,(struct A68t565 ,struct A68t563 ),(struct A68t565 ,struct A68t563 ,void *));
typedef struct A68t568  A68_568 ;    /* PROC(REF MODE565,REF MODE563) VOID */

A_PROCEDURE(A68_VOID ,A68t569,(A68_INT ,struct A68t300 ),(A68_INT ,struct A68t300 ,void *));
typedef struct A68t569  A68_569 ;    /* PROC(INT,MODE300) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t570);
typedef struct A68t570  A68_570 ;    /* STRUCT 40 CHAR */

A_PROCEDURE(A68_VOID ,A68t571,(struct A68t245 ,struct A68t554 *),(struct A68t245 ,struct A68t554 *,void *));
typedef struct A68t571  A68_571 ;    /* PROC(MODE245) MODE554 */
struct A68t572 { A68_INT mode; union {
struct A68t247 * mode1;
struct A68t248 * mode2;
struct A68t249 * mode3;
struct A68t250 * mode4;
struct A68t251 * mode5;
struct A68t252 * mode6;
} data; };
typedef struct A68t572  A68_572 ;    /* UNION(REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252)  */

A_PROCEDURE(A68_INT ,A68t573,(struct A68t245 ),(struct A68t245 ,void *));
typedef struct A68t573  A68_573 ;    /* PROC(MODE245) INT */
struct A68t574 { A68_INT mode; union {
struct A68t181  mode1;
struct A68t551  mode2;
} data; };
typedef struct A68t574  A68_574 ;    /* UNION(MODE181,MODE551)  */

A_PROCEDURE(A68_VOID ,A68t575,(struct A68t301 ,struct A68t574 ),(struct A68t301 ,struct A68t574 ,void *));
typedef struct A68t575  A68_575 ;    /* PROC(MODE301,MODE574) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t576);
typedef struct A68t576  A68_576 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t577);
typedef struct A68t577  A68_577 ;    /* STRUCT 45 CHAR */

A_PROCEDURE(A68_VOID ,A68t578,(struct A68t299 ),(struct A68t299 ,void *));
typedef struct A68t578  A68_578 ;    /* PROC(MODE299) VOID */

A_PROCEDURE(A68_VOID ,A68t579,(struct A68t296 ),(struct A68t296 ,void *));
typedef struct A68t579  A68_579 ;    /* PROC(MODE296) VOID */
struct A68t580 { A68_INT mode; union {
struct A68t294  mode1;
struct A68t285  mode2;
struct A68t247  mode3;
struct A68t295  mode4;
} data; };
typedef struct A68t580  A68_580 ;    /* UNION(MODE294,MODE285,MODE247,MODE295)  */

A_PROCEDURE(A68_VOID ,A68t581,(struct A68t160 ,struct A68t32 *),(struct A68t160 ,struct A68t32 *,void *));
typedef struct A68t581  A68_581 ;    /* PROC(MODE160) MODE32 */

A_PROCEDURE(A68_VOID ,A68t582,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t582  A68_582 ;    /* PROC(MODE32) MODE32 */
struct A68t583{
struct A68t173  Wire;
A68_VC  Name;
A68_INT  Sort;
A_PAD_INT(PAD_185)
};
typedef struct A68t583  A68_583 ;    /* STRUCT(MODE173,REF MODE26,INT)  */
A_VECTOR(struct A68t583 ,A68t584);
typedef struct A68t584  A68_584 ;    /* VECTOR [] MODE583 */

A_PROCEDURE(A68_VOID ,A68t585,(struct A68t307 *,struct A68t160 ,struct A68t230 *,struct A68t32 ,struct A68t584 *),(struct A68t307 *,struct A68t160 ,struct A68t230 *,struct A68t32 ,struct A68t584 *,void *));
typedef struct A68t585  A68_585 ;    /* PROC(REF MODE307,MODE160,REF MODE230,MODE32) MODE584 */
A_VECTOR(struct A68t160 ,A68t586);
typedef struct A68t586  A68_586 ;    /* VECTOR [] MODE160 */

A_PROCEDURE(A68_VOID ,A68t587,(A68_BOOL ,struct A68t586 *),(A68_BOOL ,struct A68t586 *,void *));
typedef struct A68t587  A68_587 ;    /* PROC(BOOL) MODE586 */

A_PROCEDURE(A68_VOID ,A68t588,(A68_BOOL ,struct A68t584 *),(A68_BOOL ,struct A68t584 *,void *));
typedef struct A68t588  A68_588 ;    /* PROC(BOOL) MODE584 */

A_PROCEDURE(A68_VOID ,A68t589,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t589  A68_589 ;    /* PROC(INT,REF INT) VOID */

A_PROCEDURE(A68_VC *,A68t590,(A68_INT ),(A68_INT ,void *));
typedef struct A68t590  A68_590 ;    /* PROC(INT) REF REF MODE26 */
A_ISTRUCT(A68_CHAR ,38,A68t591);
typedef struct A68t591  A68_591 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t592);
typedef struct A68t592  A68_592 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t593,(A68_INT ,struct A68t177 *),(A68_INT ,struct A68t177 *,void *));
typedef struct A68t593  A68_593 ;    /* PROC(INT,REF REF MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t594,(struct A68t160 ,A68_BOOL ,struct A68t160 *),(struct A68t160 ,A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t594  A68_594 ;    /* PROC(MODE160,BOOL) MODE160 */

A_PROCEDURE(A68_VOID ,A68t595,(struct A68t173 ,A68_BOOL ,struct A68t173 *),(struct A68t173 ,A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t595  A68_595 ;    /* PROC(MODE173,BOOL) MODE173 */

A_PROCEDURE(A68_VOID ,A68t596,(A68_BOOL ,struct A68t231 *),(A68_BOOL ,struct A68t231 *,void *));
typedef struct A68t596  A68_596 ;    /* PROC(BOOL) MODE231 */

A_PROCEDURE(A68_VOID ,A68t597,(A68_BOOL ,struct A68t563 *),(A68_BOOL ,struct A68t563 *,void *));
typedef struct A68t597  A68_597 ;    /* PROC(BOOL) MODE563 */

A_PROCEDURE(A68_INT ,A68t598,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t598  A68_598 ;    /* PROC(MODE32) INT */
A_ISTRUCT(A68_CHAR ,3,A68t599);
typedef struct A68t599  A68_599 ;    /* STRUCT 3 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from timescale --- */
#define HPABTRN_timescale 8
#define IPABTRN_sftimescale 10
/* --- End of imports from timescale --- */


/* --- Imports from kememory --- */
#define XSOASIM_minuseful 16
extern A68_VOID  IXOASIM_initialiseammemory(A68_INT ,A68_INT );
extern A68_INT  KXOASIM_allocateammemory(A68_INT );
/* --- End of imports from kememory --- */


/* --- Imports from keconv --- */
extern A68_VC  TTCAOST_nullid;
extern A68_267 * IAAATRN_nilustr;
extern A68_307 * NAAATRN_nilnames;
extern A68_292 * SAAATRN_nilseries;
extern A68_304 * BBAATRN_nilformulas;
extern A68_352  FBAATRN_nilmacspecs;
#define OKAATRN_outerdec 1
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_INT  XOMATRN_int(struct A68t281 );
extern A68_318 * MUNATRN_fndec_tfn(struct A68t230 *);
extern A68_INT  DTNATRN_names_size(struct A68t307 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t245 ,struct A68t230 *,struct A68t232 *,A68_315 *);
extern A68_VOID  SUBASIM_converttype(struct A68t315 ,struct A68t232 ,struct A68t233 *,A68_160 *);
extern A68_VOID  OXBASIM_convertconst(struct A68t245 ,struct A68t232 ,struct A68t233 *,A68_216 *);
/* --- End of imports from keconv --- */


/* --- Imports from keambasics --- */
extern A68_417  ONFASIM_indirect;
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_421  FENASIM_up;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  WWNASIM_amcallinst(struct A68t417 ,struct A68t415 );
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t415 );
extern A68_VOID  HBNASIM_cgsetupspace(A68_INT ,struct A68t36 ,A68_VC *);
extern A68_VOID  HCNASIM_cgpeek(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  OCNASIM_cgpokeint(A68_INT ,A68_INT );
/* --- End of imports from keambasics --- */


/* --- Imports from kebasics --- */
extern A68_168 * WSAASIM_nilsst;
extern A68_160  ZSAASIM_nullstype;
extern A68_174 * STAASIM_nilsram;
extern A68_VOID  WTAASIM_typeof(struct A68t216 ,A68_160 *);
extern A68_VOID  LABASIM_(struct A68t177 ,struct A68t177 ,A68_177 *);
extern A68_VOID  ZBBASIM_signedtoword(A68_INT ,A68_VC );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from kesave --- */
extern A68_INT  LGBASIM_readint(struct A68t206 ,struct A68t36 );
extern A68_VOID  PHBASIM_writeint(A68_INT ,struct A68t206 ,struct A68t36 );
/* --- End of imports from kesave --- */


/* --- Imports from keamgen --- */
extern A68_VOID  DKPASIM_translatestartcallsarray(struct A68t36 );
extern A68_VOID  QKPASIM_translatestartcallsloop(void);
extern A68_VOID  TKPASIM_translatestartcombinatorialloop(void);
extern A68_VOID  VKPASIM_translateendcombinatorialloop(void);
extern A68_VOID  YKPASIM_translatetimetest(void);
extern A68_VOID  EKPASIM_translatestartterminators(void);
extern A68_VOID  HKPASIM_translatestartsavers(void);
extern A68_VOID  JKPASIM_translatestartrestorers(void);
extern A68_VOID  LKPASIM_translatestartinitialisers(void);
extern A68_VOID  FLPASIM_translatetimeadvance(void);
extern A68_VOID  AMPASIM_translateendcallsarray(void);
extern A68_VOID  DMPASIM_translatestartprobeloopup(void);
extern A68_VOID  LMPASIM_translatestartcasearm(A68_INT );
extern A68_VOID  NMPASIM_translateendcasearm(void);
extern A68_VOID  OMPASIM_translateendprobeloopup(void);
extern A68_VOID  QMPASIM_translatestartprobeloopdown(void);
extern A68_VOID  WMPASIM_translateendprobeloopdown(void);
extern A68_VOID  YMPASIM_translatestartinitloopup(void);
extern A68_VOID  ENPASIM_translateendinitloopup(void);
extern A68_INT  TYOASIM_globalend;
extern A68_INT  XYOASIM_globalunitdelevent;
extern A68_VOID  DKXASIM_translateatomic(struct A68t229 ,A68_VC ,struct A68t230 ,struct A68t231 ,struct A68t32 ,A68_INT ,struct A68t232 *,struct A68t233 *,struct A68t174 **,struct A68t176 *,struct A68t36 ,A68_175 *);
extern A68_VOID  CWPASIM_translatedatasource(A68_INT ,A68_VC ,A68_175 *);
extern A68_VOID  JWPASIM_translateprobeid(struct A68t32 ,A68_VC ,A68_175 *);
/* --- End of imports from keamgen --- */


/* --- Imports from kesignals --- */
extern A68_INT  NZNASIM_machinewidth(struct A68t160 );
extern A68_INT  DCOASIM_rawsignalwidth(struct A68t160 );
extern A68_168 * ABOASIM_flattentype(struct A68t160 );
extern A68_VC * CLOASIM_machine(struct A68t216 ,struct A68t160 );
/* --- End of imports from kesignals --- */


/* --- Imports from kesort --- */
extern A68_VOID  IEBASIM_topsort(struct A68t209 ,struct A68t114 ,struct A68t210 );
/* --- End of imports from kesort --- */


/* --- Imports from kesymbols --- */
extern A68_INT  ZFCASIM_addtype(struct A68t160 ,struct A68t161 );
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define HHCASIM_compound 0X0U
#define IHCASIM_combinatorial 0X1U
#define JHCASIM_eventsetting 0X2U
#define KHCASIM_eventhandling 0X4U
#define LHCASIM_initialised 0X8U
#define NHCASIM_genericid 0X20U
extern A68_BITS  SHCASIM_combinatorialloopbreak;
extern A68_BITS  THCASIM_eventloopbreak;
extern A68_BITS  UHCASIM_unitdelay;
#define OHCASIM_aliensort 0X40U
#define PHCASIM_saved 0X80U
#define QHCASIM_restored 0X100U
#define RHCASIM_terminated 0X200U
extern A68_INT  FLCASIM_addfunction(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t173 ,struct A68t173 ,struct A68t174 *,struct A68t175 ,struct A68t176 );
extern A68_VOID  XMCASIM_addbinding(A68_INT ,A68_VC ,A68_VC ,struct A68t180 );
extern A68_VOID  WLCASIM_updatebinding(A68_INT ,A68_VC ,A68_VC ,struct A68t180 );
extern A68_INT  RNCASIM_nextinstance(A68_INT ,A68_INT );
extern A68_VOID  YNCASIM_addexpansion(A68_INT ,A68_INT );
extern A68_VOID  GOCASIM_addconstantno(A68_INT ,A68_INT );
extern A68_VOID  OOCASIM_addinputsizes(A68_INT ,struct A68t32 );
extern A68_VOID  VPCASIM_addinputalias(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT );
extern A68_VOID  GQCASIM_addshape(A68_INT ,struct A68t175 );
extern A68_VOID  LQCASIM_addoutputlocation(A68_INT ,struct A68t177 ,struct A68t177 );
extern A68_VOID  QQCASIM_addexampleinstance(A68_INT ,A68_INT );
extern A68_VOID  YQCASIM_addscaletime(A68_INT ,A68_INT );
extern A68_VOID  DRCASIM_uniqueid(A68_VC ,A68_INT ,A68_INT ,A68_VC *);
extern A68_INT  NRCASIM_lookupname(A68_VC ,A68_INT ,A68_INT );
extern A68_VOID  GSCASIM_rawlookupfunction(A68_INT ,A68_190 *);
extern A68_VOID  ZTCASIM_lookupuserid(A68_INT ,A68_VC *);
extern A68_VOID  GUCASIM_lookupexpansion(A68_INT ,A68_32 *);
extern A68_VOID  LUCASIM_lookupconstantnos(A68_INT ,A68_32 *);
extern A68_VOID  QUCASIM_lookupinputsizes(A68_INT ,A68_32 *);
extern A68_VOID  UUCASIM_lookupinputslice(A68_INT ,A68_INT ,A68_195 *);
extern A68_INT  WVCASIM_lookuptotalinputfanout(A68_INT );
extern A68_VOID  MWCASIM_lookupoutputs(A68_INT ,A68_173 *);
extern A68_VOID  DWCASIM_lookupshape(A68_INT ,A68_175 *);
extern A68_VOID  GWCASIM_lookupalienshape(A68_INT ,A68_176 *);
extern A68_VOID  FXCASIM_lookupuserparent(A68_INT ,A68_VC *);
extern A68_VOID  EZCASIM_rawinputs(struct A68t190 ,A68_173 *);
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
extern A68_VC  NTCAOST_nilid;
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
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void CPABTRN(void);   /* timescale */
extern void KSOASIM(void);   /* kememory */
extern void KUBASIM(void);   /* keconv */
extern void XDNASIM(void);   /* keambasics */
extern void JSAASIM(void);   /* kebasics */
extern void EFBASIM(void);   /* kesave */
extern void IIXASIM(void);   /* keamgen */
extern void NYNASIM(void);   /* kesignals */
extern void PCBASIM(void);   /* kesort */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_497   PLXASIM = {"$Id: keinstance.a68,v 34.2 1995/03/29 13:04:51 ella Exp $"}; 
A_GISVEC(A68_VC ,QLXASIM,PLXASIM,57)
static A68_177  VLXASIM_nullrvb;
static A68_502 * XLXASIM_instances;
static A68_INT * YLXASIM_lastinstance;
static A68_INT  ZLXASIM_alienworkspacesize;
A68_504 * AMXASIM_instanceptrs;
A68_506  BMXASIM_probeinstanceptrs;
static A68_504  CMXASIM_circuitinstanceptrs;
#define DMXASIM_nilfanoutlist (A68_507 *)A68_NIL
static A68_209 * EMXASIM_fanouts;
static A68_509 * FMXASIM_breaks;
static A68_INT * GMXASIM_lastbreak;
static A68_510  TMXASIM_emptyfnenv;
static A68_513  UMXASIM_probefnenv;
static A68_510  VMXASIM_circuitfnenv;
static A68_515  ANXASIM_makes;
static A68_INT  CNXASIM_lastmake;
static A68_438  HNXASIM_constants;
static A68_INT  JNXASIM_lastconstant;
static A68_INT  KNXASIM_maxinputsize;
static A68_INT  LNXASIM_maxinputfanout;
A68_INT  MNXASIM_cpinstanceno;
static A68_520   LQXASIM = {"find make: not found"}; 
A_GISVEC(A68_VC ,MQXASIM,LQXASIM,20)
static A68_532   DAYASIM = {"$Genericid"}; 
A_GISVEC(A68_VC ,EAYASIM,DAYASIM,10)
static A68_533   YCYASIM = {"Numeric Label"}; 
A_GISVEC(A68_VC ,ADYASIM,YCYASIM,13)
static A68_415  CDYASIM_instlab;
#define DDYASIM_combphase 0
static A68_INT  EDYASIM_settingphase;
static A68_INT  FDYASIM_handlingphase;
static A68_INT  GDYASIM_initialiserphase;
static A68_INT  HDYASIM_terminatorphase;
static A68_INT  IDYASIM_saverphase;
static A68_INT  JDYASIM_restorerphase;
static A68_INT  KDYASIM_noofphases;
static A68_534   NEYASIM = {"^$Genericid"}; 
A_GISVEC(A68_VC ,OEYASIM,NEYASIM,11)
static A68_535   SEYASIM = {"keinstance: loop break of wrong sort"}; 
A_GISVEC(A68_VC ,TEYASIM,SEYASIM,36)
static A68_534   BFYASIM = {"^$Genericid"}; 
A_GISVEC(A68_VC ,CFYASIM,BFYASIM,11)
static A68_535   GFYASIM = {"keinstance: loop break of wrong sort"}; 
A_GISVEC(A68_VC ,HFYASIM,GFYASIM,36)
static A68_539   TIYASIM = {""}; 
A_GISVEC(A68_VC ,WIYASIM,TIYASIM,0)
static A68_540   ZIYASIM = {"$PROBE_INPUT"}; 
A_GISVEC(A68_VC ,AJYASIM,ZIYASIM,12)
static A68_541   RJYASIM = {"$PROBE_ID"}; 
A_GISVEC(A68_VC ,SJYASIM,RJYASIM,9)
#define XLYASIM_maxloopreports 6
static A68_543   LMYASIM = {"There is an undelayed feedback loop involving instances of the functions:"}; 
A_GISVEC(A68_VC ,MMYASIM,LMYASIM,73)
static A68_545   TMYASIM = {".. and further undelayed feedback loops"}; 
A_GISVEC(A68_VC ,UMYASIM,TMYASIM,39)
static A68_95   JNYASIM = {"    "}; 
A_GISVEC(A68_VC ,KNYASIM,JNYASIM,4)
A68_550  EQYASIM_translatefunction;
static A68_558   KUYASIM = {"trim blocks: attempt to slice indirect block"}; 
A_GISVEC(A68_VC ,LUYASIM,KUYASIM,44)
static A68_570   UBZASIM = {"Multi- dimensional MAKEs not catered for"}; 
A_GISVEC(A68_VC ,VBZASIM,UBZASIM,40)
static A68_535   SGZASIM = {"kexpand - joins transform not called"}; 
A_GISVEC(A68_VC ,TGZASIM,SGZASIM,36)
static A68_576   LHZASIM = {"kexpand - no index present"}; 
A_GISVEC(A68_VC ,MHZASIM,LHZASIM,26)
#define PHZASIM_fsindex 1
static A68_577   EIZASIM = {"declare join: attempt to slice indirect block"}; 
A_GISVEC(A68_VC ,FIZASIM,EIZASIM,45)
#define VPZASIM_direct 0
#define WPZASIM_indirect 1
#define XPZASIM_loop 2
static A68_591   GQZASIM = {"There is a delayless loop in function "}; 
A_GISVEC(A68_VC ,HQZASIM,GQZASIM,38)
static A68_591   MQZASIM = {" involving instances of the functions:"}; 
A_GISVEC(A68_VC ,NQZASIM,MQZASIM,38)
static A68_545   FWZASIM = {"keinstance: MACSPEC contains replicator"}; 
A_GISVEC(A68_VC ,GWZASIM,FWZASIM,39)
static A68_558   JWZASIM = {"Keinstance: MACSPEC didn't have mode FORMULA"}; 
A_GISVEC(A68_VC ,KWZASIM,JWZASIM,44)
static A68_539   OWZASIM = {""}; 
A_GISVEC(A68_VC ,QWZASIM,OWZASIM,0)
static A68_539   GZZASIM = {""}; 
A_GISVEC(A68_VC ,JZZASIM,GZZASIM,0)
static A68_599   MZZASIM = {"$CP"}; 
A_GISVEC(A68_VC ,NZZASIM,MZZASIM,3)
typedef struct   /* env of non-global proc */
{
A68_INT  PNXASIM_newsize;
A_PAD_INT(PAD_186)
} TNXASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Noinputs;
A_PAD_INT(PAD_187)
} MOXASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VOXASIM_newsize;
A_PAD_INT(PAD_188)
} ZOXASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  KPXASIM_sizes;
} OPXASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  YQXASIM_newsize;
A_PAD_INT(PAD_189)
} CRXASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  QRXASIM_newsize;
A_PAD_INT(PAD_190)
} URXASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * KTXASIM_size;
} PTXASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YVXASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MAYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WAYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NBYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CCYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QKYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YKYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT ** JLYASIM_firsteventhandler;
} NLYASIM_insertevent;
typedef struct   /* env of non-global proc */
{
A68_INT ** VLYASIM_firstcombinatorial;
A68_INT ** WLYASIM_lastcombinatorial;
} CMYASIM_insertcombinatorial;
typedef struct   /* env of non-global proc */
{
A68_INT * YLYASIM_loopreports;
} HMYASIM_breakcombinatorialloop;
typedef struct   /* env of non-global proc */
{
A68_114  LLYASIM_insertevent;
A68_114  AMYASIM_insertcombinatorial;
A68_210  FMYASIM_breakcombinatorialloop;
A68_INT ** WLYASIM_lastcombinatorial;
} ZNYASIM_instantiateandsort;
typedef struct   /* env of non-global proc */
{
A68_32  Probefnnos;
} LOYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  Probefnnos;
} VOYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TPYASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AQYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_177  Blocks;
} KQYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_177  NRYASIM_blocks1;
} WRYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_177  FTYASIM_blocks1;
} OTYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_232 * Environ;
A68_INT  Parentfnno;
A_PAD_INT(PAD_191)
} UAZASIM_convertfnno;
typedef struct   /* env of non-global proc */
{
A68_230 * Declaration;
A68_INT  Parentfnno;
A_PAD_INT(PAD_192)
A68_563  Locals;
A68_438  Ids;
} CBZASIM_declaremake;
typedef struct   /* env of non-global proc */
{
A68_232 * Environ;
A68_233 * Closure;
A68_INT  Parentfnno;
A_PAD_INT(PAD_194)
A68_INT * Constantsend;
A68_563  Locals;
A68_571  ADZASIM_declareunit;
A68_230 * Declaration;
A68_438  Ids;
A68_INT  Diaglevel;
A_PAD_INT(PAD_195)
A68_36  Flt;
} CDZASIM_declareunit;
typedef struct   /* env of non-global proc */
{
A68_573  KGZASIM_join_nameno;
} MGZASIM_join_nameno;
typedef struct   /* env of non-global proc */
{
A68_571  ADZASIM_declareunit;
A68_INT  Parentfnno;
A_PAD_INT(PAD_196)
} YGZASIM_declarejoin;
typedef struct   /* env of non-global proc */
{
A68_571  ADZASIM_declareunit;
A68_230 * Declaration;
A68_563  Locals;
A68_INT  Parentfnno;
A_PAD_INT(PAD_197)
A68_438  Ids;
A68_565 * NZYASIM_localchanges;
} JIZASIM_declarelet;
typedef struct   /* env of non-global proc */
{
A68_232 * Environ;
A68_233 * Closure;
A68_INT  Diaglevel;
A_PAD_INT(PAD_198)
A68_INT  Parentfnno;
A_PAD_INT(PAD_199)
A68_36  Flt;
} KKZASIM_declarefunction;
typedef struct   /* env of non-global proc */
{
A68_INT * KLZASIM_numberinputs;
} PLZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  Indices;
} EMZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  SMZASIM_userinputs;
A_PAD_INT(PAD_200)
} WMZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  SMZASIM_userinputs;
A_PAD_INT(PAD_201)
} ONZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VNZASIM_width;
A_PAD_INT(PAD_202)
} ZNZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_584  WTZASIM_userinputs;
} UUZASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HVZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_230 * Declaration;
} VWZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_230 * Declaration;
} DXZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  RTZASIM_inputsizes;
} JYZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LBABSIM_upb;
} PBABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LBABSIM_upb;
} BCABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LBABSIM_upb;
} QCABSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} EOYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_563  L;
} YZYASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WBZASIM_msize;
A_PAD_INT(PAD_193)
} BCZASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RDZASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Size;
A_PAD_INT(PAD_203)
} APZASIM_generator;

A_STATIC A68_VOID  SLXASIM_generator(A68_BOOL  RLXASIM_anonymous, A68_177  *ReturnedValue);

A_STATIC A68_VOID  JMXASIM_generator(A68_BOOL  IMXASIM_anonymous, A68_502  *ReturnedValue);

A_STATIC A68_VOID  PMXASIM_generator(A68_BOOL  OMXASIM_anonymous, A68_509  *ReturnedValue);

A_STATIC A68_VOID  XMXASIM_generator(A68_BOOL  WMXASIM_anonymous, A68_515  *ReturnedValue);

A_STATIC A68_VOID  ENXASIM_generator(A68_BOOL  DNXASIM_anonymous, A68_438  *ReturnedValue);

A_STATIC A68_VOID  NNXASIM_extendinstances(void);

A_STATIC A68_VOID  SNXASIM_generator(A68_BOOL  QNXASIM_anonymous, A68_502  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HOXASIM_addinstance(A68_INT  Noinputs, A68_INT  Fnno, A68_INT  Size, A68_INT  Outputoffset, A68_INT  Alienworkspace, A68_BITS  Sort, A68_BOOL  Probe);

A_STATIC A68_VOID  LOXASIM_generator(A68_BOOL  JOXASIM_anonymous, A68_501  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TOXASIM_extendmakes(void);

A_STATIC A68_VOID  YOXASIM_generator(A68_BOOL  WOXASIM_anonymous, A68_515  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  IPXASIM_addmake(A68_INT  Fn, A68_INT  Instance);

A_STATIC A68_VOID  NPXASIM_generator(A68_BOOL  LPXASIM_anonymous, A68_501  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  CQXASIM_findmake(A68_INT  Parentfn, A68_INT  Instance);

A_STATIC A68_VOID  SQXASIM_addconnection(A68_INT  Srcinst, A68_INT  Srcoffset, A68_INT  Destmake, A68_INT  Destipno);

A_STATIC A68_VOID  WQXASIM_extendconstants(void);

A_STATIC A68_VOID  BRXASIM_generator(A68_BOOL  ZQXASIM_anonymous, A68_438  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  KRXASIM_addconstant(A68_VC  Constant);

A_STATIC A68_VOID  ORXASIM_extendbreaks(void);

A_STATIC A68_VOID  TRXASIM_generator(A68_BOOL  RRXASIM_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  ESXASIM_addbreak(A68_BITS  Sort, A68_INT  Sourceinst, A68_207  Oldfanout);

A_STATIC A68_VOID  KSXASIM_makefanoutlists(A68_523  Fanoutlists);

A_STATIC A68_VOID  YSXASIM_makefanoutarrays(void);

A_STATIC A68_VOID  DTXASIM_generator(A68_BOOL  CTXASIM_anonymous, A68_523  *ReturnedValue);

A_STATIC A68_VOID  OTXASIM_generator(A68_BOOL  MTXASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YTXASIM_makefanouts(void);

A_STATIC A68_VOID  BUXASIM_generator(A68_BOOL  AUXASIM_anonymous, A68_209  *ReturnedValue);

A_STATIC A68_VOID  KUXASIM_remakepredecessors(void);

A_STATIC A68_VOID  TUXASIM_makeinstance(A68_INT  Makeno, A68_INT  Parentinstance, A68_BOOL  Probe);

A_STATIC A68_INT  TVXASIM_constructinstanceptrs(A68_INT  Start, A68_BOOL  Isprobe);

A_STATIC A68_VOID  XVXASIM_generator(A68_BOOL  VVXASIM_anonymous, A68_504  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  RWXASIM_constructmemory(A68_BOOL  Isprobe, A68_INT  Totalsize, A68_INT  Size, A68_INT  Lastinstance, A68_502  Instances, A68_209  Fanouts, A68_504  Instanceptrs, A68_36  Flt);

A_STATIC A68_INT  BAYASIM_constructbreaks(A68_INT  Last);

A_STATIC A68_VOID  LAYASIM_generator(A68_BOOL  JAYASIM_anonymous, A68_502  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VAYASIM_generator(A68_BOOL  TAYASIM_anonymous, A68_209  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MBYASIM_generator(A68_BOOL  KBYASIM_anonymous, A68_501  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BCYASIM_generator(A68_BOOL  ZBYASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VCYASIM_generator(A68_BOOL  UCYASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LDYASIM_combinatorialcalls(void);

A_STATIC A68_VOID  BEYASIM_probecombinatorialcalls(void);

A_STATIC A68_VOID  JEYASIM_breakinitialisercalls(void);

A_STATIC A68_VOID  UEYASIM_probebreakinitialisercalls(void);

A_STATIC A68_VOID  IFYASIM_eventsettingcalls(void);

A_STATIC A68_VOID  RFYASIM_probeeventsettingcalls(void);

A_STATIC A68_VOID  AGYASIM_eventhandlingcalls(void);

A_STATIC A68_VOID  JGYASIM_probeeventhandlingcalls(void);

A_STATIC A68_VOID  RGYASIM_initialisercalls(void);

A_STATIC A68_VOID  AHYASIM_probeinitialisercalls(void);

A_STATIC A68_VOID  JHYASIM_terminatorcalls(void);

A_STATIC A68_VOID  SHYASIM_probephasecalls(A68_BITS  Phasesort, A68_INT  Phasenumber);

A_STATIC A68_VOID  BIYASIM_savercalls(void);

A_STATIC A68_VOID  IIYASIM_restorercalls(void);

A_STATIC A68_VOID  QIYASIM_translateprobetoplevel(A68_INT  Fnno, A68_537  *ReturnedValue);

A_STATIC A68_VOID  PKYASIM_generator(A68_BOOL  NKYASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XKYASIM_generator(A68_BOOL  VKYASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ILYASIM_constructcalls(A68_INT  Simmakeno, A68_32  Probefnnos, A68_36  Flt);

A_STATIC A68_VOID  MLYASIM_insertevent(A68_INT  Instanceno, void *NonLocals);

A_STATIC A68_INT  QLYASIM_breakeventloop(A68_32  Loop);

A_STATIC A68_VOID  BMYASIM_insertcombinatorial(A68_INT  Instanceno, void *NonLocals);

A_STATIC A68_INT  GMYASIM_breakcombinatorialloop(A68_32  Loop, void *NonLocals);

A_STATIC A68_VOID  YNYASIM_instantiateandsort(A68_INT  Topfnmakeno, A68_BOOL  Probe, void *NonLocals);

A_STATIC A68_VOID  DOYASIM_generator(A68_BOOL  BOYASIM_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KOYASIM_generator(A68_BOOL  IOYASIM_anonymous, A68_513  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UOYASIM_generator(A68_BOOL  SOYASIM_anonymous, A68_506  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SPYASIM_generator(A68_BOOL  QPYASIM_anonymous, A68_515  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZPYASIM_generator(A68_BOOL  XPYASIM_anonymous, A68_438  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GQYASIM_new(A68_177  Blocks, A68_177  *ReturnedValue);

A_STATIC A68_VOID  JQYASIM_generator(A68_BOOL  HQYASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RQYASIM_wire(A68_554  Local, A68_173  *ReturnedValue);

A_STATIC A68_VOID  VRYASIM_generator(A68_BOOL  TRYASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JSYASIM_mwire(A68_554  Local, A68_173  *ReturnedValue);

A_STATIC A68_VOID  NTYASIM_generator(A68_BOOL  LTYASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DUYASIM_trimblocks(A68_177  Original, A68_INT  Drop, A68_INT  Keep, A68_177  *ReturnedValue);

A_STATIC A68_VOID  VUYASIM_trimwire(A68_173  Wire, A68_INT  Lwb, A68_INT  Upb, A68_173  *ReturnedValue);

A_STATIC A68_VOID  DWYASIM_trimlocal(A68_554  Local, A68_INT  Lwb, A68_INT  Upb, A68_554  *ReturnedValue);

A_STATIC A68_VOID  BXYASIM_indextype(A68_160  Type, A68_INT  Ix, A68_160  *ReturnedValue);

A_STATIC A68_VOID  LXYASIM_indexwire(A68_173  Wire, A68_INT  Ix, A68_173  *ReturnedValue);

A_STATIC A68_VOID  HYYASIM_indexlocal(A68_554  Local, A68_INT  Ix, A68_554  *ReturnedValue);

A_STATIC A68_VOID  MZYASIM_declare(A68_275  Series, A68_INT  Parentfnno, A68_230 * Declaration, A68_232 * Environ, A68_233 * Closure, A68_563  Locals, A68_438  Ids, A68_INT * Constantsend, A68_INT  Diaglevel, A68_36  Flt, A68_554  *ReturnedValue);

A_STATIC A68_VOID  SZYASIM_recordlocal(A68_565 * C, A68_563  L, A68_INT  I);

A_STATIC A68_VOID  XZYASIM_generator(A68_BOOL  VZYASIM_anonymous, A68_565  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LAZASIM_refurnishlocals(A68_565  C, A68_563  L);

A_STATIC A68_INT  TAZASIM_convertfnno(A68_INT  Assfnno, void *NonLocals);

A_STATIC A68_VOID  BBZASIM_declaremake(A68_INT  Componentfnno, A68_300  Make, void *NonLocals);

A_STATIC A68_VOID  ACZASIM_generator(A68_BOOL  YBZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BDZASIM_declareunit(A68_245  Unit, A68_554  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QDZASIM_generator(A68_BOOL  ODZASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  LGZASIM_join_nameno(A68_245  Rhs, void *NonLocals);

A_STATIC A68_VOID  XGZASIM_declarejoin(A68_301  Join, A68_574  To, void *NonLocals);

A_STATIC A68_VOID  IIZASIM_declarelet(A68_299  Let, void *NonLocals);

A_STATIC A68_VOID  JKZASIM_declarefunction(A68_296  Fn, void *NonLocals);

A_STATIC A68_VOID  ILZASIM_flattenandaddtype(A68_160  Type, A68_32  *ReturnedValue);

A_STATIC A68_VOID  OLZASIM_generator(A68_BOOL  MLZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AMZASIM_lookuptypesizes(A68_32  Indices, A68_32  *ReturnedValue);

A_STATIC A68_VOID  DMZASIM_generator(A68_BOOL  BMZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RMZASIM_processinputs(A68_307 * Inputs, A68_160  Type, A68_230 * Fdec, A68_32  Primsizes, A68_584  *ReturnedValue);

A_STATIC A68_VOID  VMZASIM_generator(A68_BOOL  TMZASIM_anonymous, A68_586  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NNZASIM_generator(A68_BOOL  LNZASIM_anonymous, A68_584  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YNZASIM_generator(A68_BOOL  WNZASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TOZASIM_transferjoins(A68_INT  Fnno, A68_INT * Constantsend);

A_STATIC A68_VC * WOZASIM_querywords(A68_INT  Size);

A_STATIC A68_VOID  ZOZASIM_generator(A68_BOOL  XOZASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ORZASIM_transferlocation(A68_INT  Fnno, A68_177 * Location);

A_STATIC A68_INT  HSZASIM_upbtype(A68_160  Type);

A_STATIC A68_VOID  QSZASIM_stripoutputtype(A68_160  Type, A68_BOOL  Genoutput, A68_160  *ReturnedValue);

A_STATIC A68_VOID  VSZASIM_stripoutputwire(A68_173  Wire, A68_BOOL  Genoutput, A68_173  *ReturnedValue);

A_STATIC A68_INT  GTZASIM_anonymous(A68_229  Body, A68_230 * Declaration, A68_232 * Environ, A68_233 * Closure, A68_INT  Diaglevel, A68_INT  Outer, A68_INT  Version, A68_36  Flt);

A_STATIC A68_VOID  TUZASIM_generator(A68_BOOL  RUZASIM_anonymous, A68_231  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GVZASIM_generator(A68_BOOL  EVZASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UWZASIM_generator(A68_BOOL  SWZASIM_anonymous, A68_563  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CXZASIM_generator(A68_BOOL  AXZASIM_anonymous, A68_438  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IYZASIM_generator(A68_BOOL  GYZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_INT  DZZASIM_translatetoplevel(A68_32  Fnnos);

A68_VOID  HAABSIM_removeinstances(void);

A_STATIC A68_VOID  NAABSIM_generator(A68_BOOL  MAABSIM_anonymous, A68_515  *ReturnedValue);

A_STATIC A68_VOID  SAABSIM_generator(A68_BOOL  RAABSIM_anonymous, A68_438  *ReturnedValue);

A68_VOID  YAABSIM_saveinstanceptrs(A68_206  Ferry, A68_36  Flt);

A68_VOID  KBABSIM_restoreinstanceptrs(A68_206  Ferry, A68_36  Flt);

A_STATIC A68_VOID  OBABSIM_generator(A68_BOOL  MBABSIM_anonymous, A68_504  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ACABSIM_generator(A68_BOOL  YBABSIM_anonymous, A68_506  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PCABSIM_generator(A68_BOOL  NCABSIM_anonymous, A68_504  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DOYASIM_generator(A68_BOOL  BOYASIM_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((EOYASIM_generator *)NonLocals)->x)
{ 
A68_509  FOYASIM;  /* clause result */
A68_509  GOYASIM;  /* OPERATORS - dynamic generator */
{ 
GOYASIM.upb = 0 ;
( BOYASIM_anonymous? A_VLOC(A68_508 ,GOYASIM): A_VHEAP(A68_508 ,GOYASIM) );
FOYASIM = GOYASIM;
} 
*ReturnedValue = (FOYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XZYASIM_generator(A68_BOOL  VZYASIM_anonymous, A68_565  *ReturnedValue, void *NonLocals)
#define NL(x) (((YZYASIM_generator *)NonLocals)->x)
{ 
A68_565  ZZYASIM;  /* clause result */
A68_565  AAZASIM;  /* OPERATORS - dynamic generator */
{ 
AAZASIM.upb = NL(L).upb ;
( VZYASIM_anonymous? A_VLOC(A68_554 *,AAZASIM): A_VHEAP(A68_554 *,AAZASIM) );
ZZYASIM = AAZASIM;
} 
*ReturnedValue = (ZZYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ACZASIM_generator(A68_BOOL  YBZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BCZASIM_generator *)NonLocals)->x)
{ 
A68_32  CCZASIM;  /* clause result */
A68_32  DCZASIM;  /* OPERATORS - dynamic generator */
{ 
DCZASIM.upb = NL(WBZASIM_msize) ;
( YBZASIM_anonymous? A_VLOC(A68_INT ,DCZASIM): A_VHEAP(A68_INT ,DCZASIM) );
CCZASIM = DCZASIM;
} 
*ReturnedValue = (CCZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QDZASIM_generator(A68_BOOL  ODZASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDZASIM_generator *)NonLocals)->x)
{ 
A68_177  SDZASIM;  /* clause result */
A68_177  TDZASIM;  /* OPERATORS - dynamic generator */
{ 
TDZASIM.upb = 1 ;
( ODZASIM_anonymous? A_VLOC(A68_178 ,TDZASIM): A_VHEAP(A68_178 ,TDZASIM) );
SDZASIM = TDZASIM;
} 
*ReturnedValue = (SDZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOZASIM_generator(A68_BOOL  XOZASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((APZASIM_generator *)NonLocals)->x)
{ 
A68_VC  BPZASIM;  /* clause result */
A68_VC  CPZASIM;  /* OPERATORS - dynamic generator */
{ 
CPZASIM.upb = NL(Size) ;
( XOZASIM_anonymous? A_VLOC(A68_CHAR ,CPZASIM): A_VHEAP(A68_CHAR ,CPZASIM) );
BPZASIM = CPZASIM;
} 
*ReturnedValue = (BPZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SNXASIM_generator(A68_BOOL  QNXASIM_anonymous, A68_502  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNXASIM_generator *)NonLocals)->x)
{ 
A68_502  UNXASIM;  /* clause result */
A68_502  VNXASIM;  /* OPERATORS - dynamic generator */
{ 
VNXASIM.upb = NL(PNXASIM_newsize) ;
( QNXASIM_anonymous? A_VLOC(A68_500 *,VNXASIM): A_VHEAP(A68_500 *,VNXASIM) );
UNXASIM = VNXASIM;
} 
*ReturnedValue = (UNXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LOXASIM_generator(A68_BOOL  JOXASIM_anonymous, A68_501  *ReturnedValue, void *NonLocals)
#define NL(x) (((MOXASIM_generator *)NonLocals)->x)
{ 
A68_501  NOXASIM;  /* clause result */
A68_501  OOXASIM;  /* OPERATORS - dynamic generator */
{ 
OOXASIM.upb = NL(Noinputs) ;
( JOXASIM_anonymous? A_VLOC(A68_499 ,OOXASIM): A_VHEAP(A68_499 ,OOXASIM) );
NOXASIM = OOXASIM;
} 
*ReturnedValue = (NOXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YOXASIM_generator(A68_BOOL  WOXASIM_anonymous, A68_515  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZOXASIM_generator *)NonLocals)->x)
{ 
A68_515  APXASIM;  /* clause result */
A68_515  BPXASIM;  /* OPERATORS - dynamic generator */
{ 
BPXASIM.upb = NL(VOXASIM_newsize) ;
( WOXASIM_anonymous? A_VLOC(A68_514 ,BPXASIM): A_VHEAP(A68_514 ,BPXASIM) );
APXASIM = BPXASIM;
} 
*ReturnedValue = (APXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NPXASIM_generator(A68_BOOL  LPXASIM_anonymous, A68_501  *ReturnedValue, void *NonLocals)
#define NL(x) (((OPXASIM_generator *)NonLocals)->x)
{ 
A68_501  PPXASIM;  /* clause result */
A68_501  QPXASIM;  /* OPERATORS - dynamic generator */
{ 
QPXASIM.upb = NL(KPXASIM_sizes).upb ;
( LPXASIM_anonymous? A_VLOC(A68_499 ,QPXASIM): A_VHEAP(A68_499 ,QPXASIM) );
PPXASIM = QPXASIM;
} 
*ReturnedValue = (PPXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BRXASIM_generator(A68_BOOL  ZQXASIM_anonymous, A68_438  *ReturnedValue, void *NonLocals)
#define NL(x) (((CRXASIM_generator *)NonLocals)->x)
{ 
A68_438  DRXASIM;  /* clause result */
A68_438  ERXASIM;  /* OPERATORS - dynamic generator */
{ 
ERXASIM.upb = NL(YQXASIM_newsize) ;
( ZQXASIM_anonymous? A_VLOC(A68_VC ,ERXASIM): A_VHEAP(A68_VC ,ERXASIM) );
DRXASIM = ERXASIM;
} 
*ReturnedValue = (DRXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TRXASIM_generator(A68_BOOL  RRXASIM_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((URXASIM_generator *)NonLocals)->x)
{ 
A68_509  VRXASIM;  /* clause result */
A68_509  WRXASIM;  /* OPERATORS - dynamic generator */
{ 
WRXASIM.upb = NL(QRXASIM_newsize) ;
( RRXASIM_anonymous? A_VLOC(A68_508 ,WRXASIM): A_VHEAP(A68_508 ,WRXASIM) );
VRXASIM = WRXASIM;
} 
*ReturnedValue = (VRXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DTXASIM_generator(A68_BOOL  CTXASIM_anonymous, A68_523  *ReturnedValue)
{ 
A68_523  ETXASIM;  /* clause result */
A68_523  FTXASIM;  /* OPERATORS - dynamic generator */
{ 
FTXASIM.upb = (*YLXASIM_lastinstance) ;
( CTXASIM_anonymous? A_VLOC(A68_507 *,FTXASIM): A_VHEAP(A68_507 *,FTXASIM) );
ETXASIM = FTXASIM;
} 
*ReturnedValue = (ETXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OTXASIM_generator(A68_BOOL  MTXASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((PTXASIM_generator *)NonLocals)->x)
{ 
A68_32  QTXASIM;  /* clause result */
A68_32  RTXASIM;  /* OPERATORS - dynamic generator */
{ 
RTXASIM.upb = (*NL(KTXASIM_size)) ;
( MTXASIM_anonymous? A_VLOC(A68_INT ,RTXASIM): A_VHEAP(A68_INT ,RTXASIM) );
QTXASIM = RTXASIM;
} 
*ReturnedValue = (QTXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BUXASIM_generator(A68_BOOL  AUXASIM_anonymous, A68_209  *ReturnedValue)
{ 
A68_209  CUXASIM;  /* clause result */
A68_209  DUXASIM;  /* OPERATORS - dynamic generator */
{ 
DUXASIM.upb = (*YLXASIM_lastinstance) ;
( AUXASIM_anonymous? A_VLOC(A68_207 ,DUXASIM): A_VHEAP(A68_207 ,DUXASIM) );
CUXASIM = DUXASIM;
} 
*ReturnedValue = (CUXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XVXASIM_generator(A68_BOOL  VVXASIM_anonymous, A68_504  *ReturnedValue, void *NonLocals)
#define NL(x) (((YVXASIM_generator *)NonLocals)->x)
{ 
A68_504  ZVXASIM;  /* clause result */
A68_504  AWXASIM;  /* OPERATORS - dynamic generator */
{ 
AWXASIM.upb = (*YLXASIM_lastinstance) ;
( VVXASIM_anonymous? A_VLOC(A68_503 ,AWXASIM): A_VHEAP(A68_503 ,AWXASIM) );
ZVXASIM = AWXASIM;
} 
*ReturnedValue = (ZVXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LAYASIM_generator(A68_BOOL  JAYASIM_anonymous, A68_502  *ReturnedValue, void *NonLocals)
#define NL(x) (((MAYASIM_generator *)NonLocals)->x)
{ 
A68_502  NAYASIM;  /* clause result */
A68_502  OAYASIM;  /* OPERATORS - dynamic generator */
{ 
OAYASIM.upb = ((*YLXASIM_lastinstance)+(*GMXASIM_lastbreak)) ;
( JAYASIM_anonymous? A_VLOC(A68_500 *,OAYASIM): A_VHEAP(A68_500 *,OAYASIM) );
NAYASIM = OAYASIM;
} 
*ReturnedValue = (NAYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VAYASIM_generator(A68_BOOL  TAYASIM_anonymous, A68_209  *ReturnedValue, void *NonLocals)
#define NL(x) (((WAYASIM_generator *)NonLocals)->x)
{ 
A68_209  XAYASIM;  /* clause result */
A68_209  YAYASIM;  /* OPERATORS - dynamic generator */
{ 
YAYASIM.upb = ((*YLXASIM_lastinstance)+(*GMXASIM_lastbreak)) ;
( TAYASIM_anonymous? A_VLOC(A68_207 ,YAYASIM): A_VHEAP(A68_207 ,YAYASIM) );
XAYASIM = YAYASIM;
} 
*ReturnedValue = (XAYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MBYASIM_generator(A68_BOOL  KBYASIM_anonymous, A68_501  *ReturnedValue, void *NonLocals)
#define NL(x) (((NBYASIM_generator *)NonLocals)->x)
{ 
A68_501  OBYASIM;  /* clause result */
A68_501  PBYASIM;  /* OPERATORS - dynamic generator */
{ 
PBYASIM.upb = 1 ;
( KBYASIM_anonymous? A_VLOC(A68_499 ,PBYASIM): A_VHEAP(A68_499 ,PBYASIM) );
OBYASIM = PBYASIM;
} 
*ReturnedValue = (OBYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BCYASIM_generator(A68_BOOL  ZBYASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((CCYASIM_generator *)NonLocals)->x)
{ 
A68_32  DCYASIM;  /* clause result */
A68_32  ECYASIM;  /* OPERATORS - dynamic generator */
{ 
ECYASIM.upb = 1 ;
( ZBYASIM_anonymous? A_VLOC(A68_INT ,ECYASIM): A_VHEAP(A68_INT ,ECYASIM) );
DCYASIM = ECYASIM;
} 
*ReturnedValue = (DCYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PKYASIM_generator(A68_BOOL  NKYASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QKYASIM_generator *)NonLocals)->x)
{ 
A68_VC  RKYASIM;  /* clause result */
A68_VC  SKYASIM;  /* OPERATORS - dynamic generator */
{ 
SKYASIM.upb = DENASIM_ws ;
( NKYASIM_anonymous? A_VLOC(A68_CHAR ,SKYASIM): A_VHEAP(A68_CHAR ,SKYASIM) );
RKYASIM = SKYASIM;
} 
*ReturnedValue = (RKYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XKYASIM_generator(A68_BOOL  VKYASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YKYASIM_generator *)NonLocals)->x)
{ 
A68_VC  ZKYASIM;  /* clause result */
A68_VC  ALYASIM;  /* OPERATORS - dynamic generator */
{ 
ALYASIM.upb = DENASIM_ws ;
( VKYASIM_anonymous? A_VLOC(A68_CHAR ,ALYASIM): A_VHEAP(A68_CHAR ,ALYASIM) );
ZKYASIM = ALYASIM;
} 
*ReturnedValue = (ZKYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MLYASIM_insertevent(A68_INT  Instanceno, void *NonLocals)
#define NL(x) (((NLYASIM_insertevent *)NonLocals)->x)
{ 
A68_INT * OLYASIM;  /* YIELD */
A_PROC_ENTRY(insertevent);
 /* line 1379: */
 /* line 1381: */
if ( (Instanceno>(*YLXASIM_lastinstance)) )
{ 
 /* line 1382: */
/*SKIP*/;
} 
else
{ 
OLYASIM = (&((*(&A_VINDEX((*XLXASIM_instances),Instanceno)))->Nexte)) ;
(*OLYASIM) = (**NL(JLYASIM_firsteventhandler));
 /* line 1383: */
 /* line 1384: */
(**NL(JLYASIM_firsteventhandler)) = Instanceno;
} 
A_PROC_EXIT(insertevent);
return;
} 
#undef NL

A_STATIC A68_INT  QLYASIM_breakeventloop(A68_32  Loop)
{ 
A68_INT  RLYASIM;  /* clause result */
A68_INT  SLYASIM;  /* YIELD */
A68_INT  TLYASIM;  /* YIELD */
A68_INT  ULYASIM;  /* YIELD */
A_PROC_ENTRY(breakeventloop);
 /* line 1387: */
SLYASIM = 1 ;
TLYASIM = (*(&A_VINDEX(Loop,SLYASIM))) ;
ULYASIM = 1 ;
RLYASIM = ESXASIM_addbreak(THCASIM_eventloopbreak, (*(&A_VINDEX(Loop,ULYASIM))), (*(&A_VINDEX((*EMXASIM_fanouts),TLYASIM))));
A_PROC_EXIT(breakeventloop);
return( RLYASIM );
} 
#undef NL

A_STATIC A68_VOID  BMYASIM_insertcombinatorial(A68_INT  Instanceno, void *NonLocals)
#define NL(x) (((CMYASIM_insertcombinatorial *)NonLocals)->x)
{ 
A68_INT * DMYASIM;  /* YIELD */
A_PROC_ENTRY(insertcombinatorial);
 /* line 1397: */
 /* line 1399: */
if ( (Instanceno>(*YLXASIM_lastinstance)) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1400: */
if ( ((**NL(VLYASIM_firstcombinatorial))==0) )
{ 
(**NL(VLYASIM_firstcombinatorial)) = Instanceno;
 /* line 1401: */
 /* line 1402: */
 /* line 1403: */
(**NL(WLYASIM_lastcombinatorial)) = Instanceno;
} 
else
{ 
DMYASIM = (&((*(&A_VINDEX((*XLXASIM_instances),(**NL(WLYASIM_lastcombinatorial)))))->Nextc)) ;
(*DMYASIM) = Instanceno;
 /* line 1404: */
 /* line 1405: */
(**NL(WLYASIM_lastcombinatorial)) = Instanceno;
} 
} 
A_PROC_EXIT(insertcombinatorial);
return;
} 
#undef NL

A_STATIC A68_INT  GMYASIM_breakcombinatorialloop(A68_32  Loop, void *NonLocals)
#define NL(x) (((HMYASIM_breakcombinatorialloop *)NonLocals)->x)
{ 
A68_BOOL  IMYASIM_doprint;
A68_BOOL  JMYASIM_continued;
A68_544  KMYASIM;  /* collateral clause result */
A68_52  NMYASIM;  /* OPERATORS - mode -> union mode */
A68_VC  OMYASIM;  /* YIELD */
A68_52  PMYASIM;  /* OPERATORS - mode -> union mode */
A68_56  QMYASIM;  /* procedure value */
A68_85  RMYASIM;  /* OPERATORS - istruct -> vector */
A68_544  SMYASIM;  /* collateral clause result */
A68_52  VMYASIM;  /* OPERATORS - mode -> union mode */
A68_VC  WMYASIM;  /* YIELD */
A68_52  XMYASIM;  /* OPERATORS - mode -> union mode */
A68_56  YMYASIM;  /* procedure value */
A68_85  ZMYASIM;  /* OPERATORS - istruct -> vector */
A68_VC  ANYASIM_lastname;
A68_INT  BNYASIM_i;
A68_INT  CNYASIM;  /* to part of loop */
A68_INT  DNYASIM;  /* YIELD */
A68_VC  ENYASIM;  /* avoid structure result */
A68_VC  FNYASIM_fnname;
A68_BOOL  GNYASIM;  /* optbool result */
A68_INT  HNYASIM;  /* YIELD */
A68_546  INYASIM;  /* collateral clause result */
A68_52  LNYASIM;  /* OPERATORS - mode -> union mode */
A68_VC  MNYASIM;  /* YIELD */
A68_52  NNYASIM;  /* OPERATORS - mode -> union mode */
A68_52  ONYASIM;  /* OPERATORS - mode -> union mode */
A68_56  PNYASIM;  /* procedure value */
A68_85  QNYASIM;  /* OPERATORS - istruct -> vector */
A68_INT  RNYASIM;  /* clause result */
A68_INT  SNYASIM;  /* YIELD */
A68_INT  TNYASIM;  /* YIELD */
A68_INT  UNYASIM;  /* YIELD */
A_PROC_ENTRY(breakcombinatorialloop);
 /* line 1408: */
 /* line 1409: */
{ 
IMYASIM_doprint = ((*NL(YLYASIM_loopreports))<XLYASIM_maxloopreports);
 /* line 1410: */
JMYASIM_continued = ((*NL(YLYASIM_loopreports))==XLYASIM_maxloopreports);
 /* line 1411: */
 /* line 1412: */
if ( IMYASIM_doprint )
{ 
 /* line 1413: */
 /* line 1414: */
OMYASIM = MMYASIM ;
KMYASIM.data[0] = A_UNITE(NMYASIM,mode7,7,OMYASIM);
QMYASIM.fn.fn_global = LRAAOSL_newline;
QMYASIM.nonlocals = A68_NIL;
KMYASIM.data[1] = A_UNITE(PMYASIM,mode12,12,QMYASIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(RMYASIM,KMYASIM,2,A68_52 ));
 /* line 1415: */
 /* line 1416: */
(*NL(YLYASIM_loopreports))+=1;
} 
else
{ 
 /* line 1417: */
if ( JMYASIM_continued )
{ 
WMYASIM = UMYASIM ;
SMYASIM.data[0] = A_UNITE(VMYASIM,mode7,7,WMYASIM);
YMYASIM.fn.fn_global = LRAAOSL_newline;
YMYASIM.nonlocals = A68_NIL;
SMYASIM.data[1] = A_UNITE(XMYASIM,mode12,12,YMYASIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(ZMYASIM,SMYASIM,2,A68_52 ));
 /* line 1418: */
 /* line 1419: */
(*NL(YLYASIM_loopreports))+=1;
} 
} 
 /* line 1420: */
ANYASIM_lastname = TTCAOST_nullid;
 /* line 1421: */
CNYASIM = Loop.upb;
for ( BNYASIM_i = 1;
BNYASIM_i <= CNYASIM;
BNYASIM_i += 1 )
{ 
 /* line 1422: */
 /* line 1425: */
if ( ((*(&A_VINDEX(Loop,BNYASIM_i)))<=(*YLXASIM_lastinstance)) )
{ 
DNYASIM = (*(&A_VINDEX(Loop,BNYASIM_i))) ;
FXCASIM_lookupuserparent( (*(&((*(&A_VINDEX((*XLXASIM_instances),DNYASIM)))->Fnno))), &ENYASIM );
FNYASIM_fnname = ENYASIM;
 /* line 1426: */
 /* line 1427: */
GNYASIM = IMYASIM_doprint;
if ( GNYASIM )
{ /* line 1428: */
GNYASIM = A_VC_NE(FNYASIM_fnname,ANYASIM_lastname);
}
if ( GNYASIM )
{GNYASIM = A_VC_NE(FNYASIM_fnname,TTCAOST_nullid);
}
if ( GNYASIM )
{ /* line 1429: */
HNYASIM = 1 ;
GNYASIM = ((*(&A_VINDEX(FNYASIM_fnname,HNYASIM)))!='$');
}
 /* line 1430: */
if ( GNYASIM )
{ 
MNYASIM = KNYASIM ;
INYASIM.data[0] = A_UNITE(LNYASIM,mode7,7,MNYASIM);
INYASIM.data[1] = A_UNITE(NNYASIM,mode7,7,FNYASIM_fnname);
PNYASIM.fn.fn_global = LRAAOSL_newline;
PNYASIM.nonlocals = A68_NIL;
INYASIM.data[2] = A_UNITE(ONYASIM,mode12,12,PNYASIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(QNYASIM,INYASIM,3,A68_52 ));
 /* line 1431: */
 /* line 1432: */
 /* line 1433: */
 /* line 1434: */
ANYASIM_lastname = FNYASIM_fnname;
} 
} 
}
 /* line 1435: */
 /* line 1436: */
SNYASIM = 1 ;
TNYASIM = (*(&A_VINDEX(Loop,SNYASIM))) ;
UNYASIM = 1 ;
RNYASIM = ESXASIM_addbreak(SHCASIM_combinatorialloopbreak, (*(&A_VINDEX(Loop,UNYASIM))), (*(&A_VINDEX((*EMXASIM_fanouts),TNYASIM))));
} 
A_PROC_EXIT(breakcombinatorialloop);
return( RNYASIM );
} 
#undef NL

A_STATIC A68_VOID  YNYASIM_instantiateandsort(A68_INT  Topfnmakeno, A68_BOOL  Probe, void *NonLocals)
#define NL(x) (((ZNYASIM_instantiateandsort *)NonLocals)->x)
{ 
A68_210  AOYASIM;  /* procedure value */
A68_512  COYASIM_generator;   /* proc value of non-global proc */
A68_509  HOYASIM;  /* avoid structure result */
A_PROC_ENTRY(instantiateandsort);
 /* line 1439: */
 /* line 1441: */
{ 
TUXASIM_makeinstance(Topfnmakeno, 0, Probe);
 /* line 1442: */
YTXASIM_makefanouts();
 /* line 1445: */
AOYASIM.fn.fn_global = QLYASIM_breakeventloop;
AOYASIM.nonlocals = A68_NIL;
IEBASIM_topsort((*EMXASIM_fanouts), NL(LLYASIM_insertevent), AOYASIM);
 /* line 1448: */
BAYASIM_constructbreaks(0);
 /* line 1449: */
A_CLOSURE( COYASIM_generator, DOYASIM_generator, EOYASIM_generator );
A_CALLPROC(COYASIM_generator,(A68_FALSE, &HOYASIM),(A68_FALSE, &HOYASIM,(COYASIM_generator).nonlocals));
(*FMXASIM_breaks) = HOYASIM;
 /* line 1450: */
(*GMXASIM_lastbreak) = 0;
 /* line 1453: */
KUXASIM_remakepredecessors();
 /* line 1454: */
IEBASIM_topsort((*EMXASIM_fanouts), NL(AMYASIM_insertcombinatorial), NL(FMYASIM_breakcombinatorialloop));
 /* line 1457: */
 /* line 1458: */
BAYASIM_constructbreaks((**NL(WLYASIM_lastcombinatorial)));
} 
A_PROC_EXIT(instantiateandsort);
return;
} 
#undef NL

A_STATIC A68_VOID  KOYASIM_generator(A68_BOOL  IOYASIM_anonymous, A68_513  *ReturnedValue, void *NonLocals)
#define NL(x) (((LOYASIM_generator *)NonLocals)->x)
{ 
A68_513  MOYASIM;  /* clause result */
A68_513  NOYASIM;  /* OPERATORS - dynamic generator */
{ 
NOYASIM.upb = NL(Probefnnos).upb ;
( IOYASIM_anonymous? A_VLOC(A68_510 ,NOYASIM): A_VHEAP(A68_510 ,NOYASIM) );
MOYASIM = NOYASIM;
} 
*ReturnedValue = (MOYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UOYASIM_generator(A68_BOOL  SOYASIM_anonymous, A68_506  *ReturnedValue, void *NonLocals)
#define NL(x) (((VOYASIM_generator *)NonLocals)->x)
{ 
A68_506  WOYASIM;  /* clause result */
A68_506  XOYASIM;  /* OPERATORS - dynamic generator */
{ 
XOYASIM.upb = NL(Probefnnos).upb ;
( SOYASIM_anonymous? A_VLOC(A68_505 ,XOYASIM): A_VHEAP(A68_505 ,XOYASIM) );
WOYASIM = XOYASIM;
} 
*ReturnedValue = (WOYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SPYASIM_generator(A68_BOOL  QPYASIM_anonymous, A68_515  *ReturnedValue, void *NonLocals)
#define NL(x) (((TPYASIM_generator *)NonLocals)->x)
{ 
A68_515  UPYASIM;  /* clause result */
A68_515  VPYASIM;  /* OPERATORS - dynamic generator */
{ 
VPYASIM.upb = 0 ;
( QPYASIM_anonymous? A_VLOC(A68_514 ,VPYASIM): A_VHEAP(A68_514 ,VPYASIM) );
UPYASIM = VPYASIM;
} 
*ReturnedValue = (UPYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPYASIM_generator(A68_BOOL  XPYASIM_anonymous, A68_438  *ReturnedValue, void *NonLocals)
#define NL(x) (((AQYASIM_generator *)NonLocals)->x)
{ 
A68_438  BQYASIM;  /* clause result */
A68_438  CQYASIM;  /* OPERATORS - dynamic generator */
{ 
CQYASIM.upb = 0 ;
( XPYASIM_anonymous? A_VLOC(A68_VC ,CQYASIM): A_VHEAP(A68_VC ,CQYASIM) );
BQYASIM = CQYASIM;
} 
*ReturnedValue = (BQYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JQYASIM_generator(A68_BOOL  HQYASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((KQYASIM_generator *)NonLocals)->x)
{ 
A68_177  LQYASIM;  /* clause result */
A68_177  MQYASIM;  /* OPERATORS - dynamic generator */
{ 
MQYASIM.upb = NL(Blocks).upb ;
( HQYASIM_anonymous? A_VLOC(A68_178 ,MQYASIM): A_VHEAP(A68_178 ,MQYASIM) );
LQYASIM = MQYASIM;
} 
*ReturnedValue = (LQYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VRYASIM_generator(A68_BOOL  TRYASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((WRYASIM_generator *)NonLocals)->x)
{ 
A68_177  XRYASIM;  /* clause result */
A68_177  YRYASIM;  /* OPERATORS - dynamic generator */
{ 
YRYASIM.upb = NL(NRYASIM_blocks1).upb ;
( TRYASIM_anonymous? A_VLOC(A68_178 ,YRYASIM): A_VHEAP(A68_178 ,YRYASIM) );
XRYASIM = YRYASIM;
} 
*ReturnedValue = (XRYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NTYASIM_generator(A68_BOOL  LTYASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((OTYASIM_generator *)NonLocals)->x)
{ 
A68_177  PTYASIM;  /* clause result */
A68_177  QTYASIM;  /* OPERATORS - dynamic generator */
{ 
QTYASIM.upb = NL(FTYASIM_blocks1).upb ;
( LTYASIM_anonymous? A_VLOC(A68_178 ,QTYASIM): A_VHEAP(A68_178 ,QTYASIM) );
PTYASIM = QTYASIM;
} 
*ReturnedValue = (PTYASIM);
return;
} 
#undef NL
 /* line 1884: */

A_STATIC A68_VOID  SZYASIM_recordlocal(A68_565 * C, A68_563  L, A68_INT  I)
{ 
A68_565  TZYASIM;  /* OPERATORS - nil -> mode */
A68_565  UZYASIM;  /* == */
A68_567  WZYASIM_generator;   /* proc value of non-global proc */
A68_565  BAZASIM;  /* avoid structure result */
A68_INT  CAZASIM_n;
A68_INT  DAZASIM;  /* to part of loop */
A68_554 ** EAZASIM;  /* YIELD */
A68_554 * FAZASIM;  /* YIELD */
A68_554 ** GAZASIM;  /* YIELD */
A68_554 * HAZASIM;  /* YIELD */
A68_554 ** IAZASIM;  /* YIELD */
A_PROC_ENTRY(recordlocal);
 /* line 1886: */
 /* line 1887: */
{ 
 /* line 1889: */
UZYASIM = A_VVAC(TZYASIM) ;
if ( A_VSTRUCTCOMP((*C),UZYASIM) )
{ 
A_CLOSURE( WZYASIM_generator, XZYASIM_generator, YZYASIM_generator );
(( YZYASIM_generator * ) ( WZYASIM_generator.nonlocals )) -> L = L;
A_CALLPROC(WZYASIM_generator,(A68_FALSE, &BAZASIM),(A68_FALSE, &BAZASIM,(WZYASIM_generator).nonlocals));
(*C) = BAZASIM;
 /* line 1890: */
DAZASIM = L.upb;
for ( CAZASIM_n = 1;
CAZASIM_n <= DAZASIM;
CAZASIM_n += 1 )
{ 
EAZASIM = (&A_VINDEX((*C),CAZASIM_n)) ;
(*EAZASIM) = (A68_554 *)A68_NIL;
}
 /* line 1891: */
 /* line 1892: */
 /* line 1893: */
FAZASIM = A_HEAP(A68_554 ) ;
(*FAZASIM) = (*(&A_VINDEX(L,I))) ;
GAZASIM = (&A_VINDEX((*C),I)) ;
(*GAZASIM) = FAZASIM;
} 
else
{ 
 /* line 1895: */
if ( ((*(&A_VINDEX((*C),I)))==(A68_554 *)A68_NIL) )
{ 
 /* line 1896: */
 /* line 1897: */
 /* line 1898: */
HAZASIM = A_HEAP(A68_554 ) ;
(*HAZASIM) = (*(&A_VINDEX(L,I))) ;
IAZASIM = (&A_VINDEX((*C),I)) ;
(*IAZASIM) = HAZASIM;
} 
} 
} 
A_PROC_EXIT(recordlocal);
return;
} 
#undef NL

A_STATIC A68_VOID  LAZASIM_refurnishlocals(A68_565  C, A68_563  L)
{ 
A68_565  MAZASIM;  /* OPERATORS - nil -> mode */
A68_565  NAZASIM;  /* != */
A68_INT  OAZASIM_i;
A68_INT  PAZASIM;  /* to part of loop */
A68_554 * QAZASIM;  /* YIELD */
A_PROC_ENTRY(refurnishlocals);
 /* line 1904: */
 /* line 1905: */
{ 
 /* line 1906: */
NAZASIM = A_VVAC(MAZASIM) ;
if ( ! A_VSTRUCTCOMP(C,NAZASIM) )
{ 
PAZASIM = L.upb;
for ( OAZASIM_i = 1;
OAZASIM_i <= PAZASIM;
OAZASIM_i += 1 )
{ 
 /* line 1907: */
if ( ((*(&A_VINDEX(C,OAZASIM_i)))!=(A68_554 *)A68_NIL) )
{ 
QAZASIM = (&A_VINDEX(L,OAZASIM_i)) ;
(*QAZASIM) = (*(*(&A_VINDEX(C,OAZASIM_i))));
} 
}
 /* line 1908: */
 /* line 1909: */
} 
} 
A_PROC_EXIT(refurnishlocals);
return;
} 
#undef NL

A_STATIC A68_INT  TAZASIM_convertfnno(A68_INT  Assfnno, void *NonLocals)
#define NL(x) (((UAZASIM_convertfnno *)NonLocals)->x)
{ 
A68_242  VAZASIM;  /* OPERATORS - simple index */
A68_230 * WAZASIM_fn;
A68_INT  XAZASIM;  /* clause result */
A_PROC_ENTRY(convertfnno);
 /* line 1915: */
 /* line 1916: */
{ 
VAZASIM = (*(&(NL(Environ)->Fns))) ;
WAZASIM_fn = (*(&A_VINDEX(VAZASIM,Assfnno)));
 /* line 1917: */
 /* line 1918: */
if ( ((*(&(WAZASIM_fn->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 1919: */
XAZASIM = NRCASIM_lookupname((*(&(WAZASIM_fn->Fnname))), (*(&((*(&(WAZASIM_fn->Usage)))->Closureno))), (-1));
} 
else
{ 
 /* line 1920: */
 /* line 1921: */
XAZASIM = NRCASIM_lookupname((*(&(WAZASIM_fn->Fnname))), NL(Parentfnno), Assfnno);
} 
} 
A_PROC_EXIT(convertfnno);
return( XAZASIM );
} 
#undef NL

A_STATIC A68_VOID  BBZASIM_declaremake(A68_INT  Componentfnno, A68_300  Make, void *NonLocals)
#define NL(x) (((CBZASIM_declaremake *)NonLocals)->x)
{ 
A68_VC  DBZASIM;  /* avoid structure result */
A68_VC  EBZASIM_componentucname;
A68_307 * FBZASIM_lcnames;
A68_307 * GBZASIM_names;
A68_353  HBZASIM_nametypes;
A68_INT  IBZASIM_thisoffset;
A68_INT  JBZASIM_make;
A68_181  KBZASIM;  /* collateral clause result */
A68_181  LBZASIM_box;
A68_INT  MBZASIM;  /* YIELD */
A68_554  NBZASIM;  /* OPERATORS - mode -> union mode */
A68_554 * OBZASIM;  /* YIELD */
A68_INT  PBZASIM;  /* YIELD */
A68_VC  QBZASIM_name;
A68_INT  RBZASIM;  /* YIELD */
A68_VC * SBZASIM;  /* YIELD */
A68_180  TBZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WBZASIM_msize;
A68_551  XBZASIM;  /* collateral clause result */
A68_33  ZBZASIM_generator;   /* proc value of non-global proc */
A68_32  ECZASIM;  /* avoid structure result */
A68_551  FCZASIM_mbox;
A68_INT  GCZASIM_i;
A68_INT  HCZASIM;  /* to part of loop */
A68_INT  ICZASIM_thisoffset;
A68_INT  JCZASIM_make;
A68_32  KCZASIM;  /* OPERATORS - simple index */
A68_INT * LCZASIM;  /* YIELD */
A68_181  MCZASIM;  /* collateral clause result */
A68_181  NCZASIM_box;
A68_180  OCZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PCZASIM;  /* YIELD */
A68_554  QCZASIM;  /* OPERATORS - mode -> union mode */
A68_554 * RCZASIM;  /* YIELD */
A68_INT  SCZASIM;  /* YIELD */
A68_VC  TCZASIM_name;
A68_INT  UCZASIM;  /* YIELD */
A68_VC * VCZASIM;  /* YIELD */
A68_554  WCZASIM;  /* OPERATORS - mode -> union mode */
A68_173  XCZASIM;  /* avoid structure result */
A68_180  YCZASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(declaremake);
 /* line 1929: */
 /* line 1930: */
{ 
ZTCASIM_lookupuserid( Componentfnno, &DBZASIM );
EBZASIM_componentucname = DBZASIM;
 /* line 1931: */
FBZASIM_lcnames = Make.Makenames;
 /* line 1932: */
GBZASIM_names = FBZASIM_lcnames;
 /* line 1933: */
HBZASIM_nametypes = (*(&(NL(Declaration)->Nametypes)));
 /* line 1934: */
 /* line 1935: */
 /* line 1936: */
if ( (Make.Sizes==BBAATRN_nilformulas) )
{ 
for ( ;; )
{ 
 /* line 1937: */
if ( !((GBZASIM_names!=NAAATRN_nilnames)) ) break;
IBZASIM_thisoffset = RNCASIM_nextinstance(NL(Parentfnno), Componentfnno);
 /* line 1938: */
JBZASIM_make = IPXASIM_addmake(Componentfnno, IBZASIM_thisoffset);
 /* line 1939: */
YNCASIM_addexpansion(NL(Parentfnno), JBZASIM_make);
 /* line 1940: */
KBZASIM.Fn = Componentfnno;
KBZASIM.Instance = IBZASIM_thisoffset;
LBZASIM_box = KBZASIM;
 /* line 1941: */
MBZASIM = (*(&(GBZASIM_names->Nameno))) ;
OBZASIM = (&A_VINDEX(NL(Locals),MBZASIM)) ;
(*OBZASIM) = A_UNITE(NBZASIM,mode1,1,LBZASIM_box);
 /* line 1942: */
PBZASIM = (*(&(GBZASIM_names->Nameno))) ;
QBZASIM_name = (*(&((&A_VINDEX(HBZASIM_nametypes,PBZASIM))->Name)));
 /* line 1943: */
RBZASIM = (*(&(GBZASIM_names->Nameno))) ;
SBZASIM = (&A_VINDEX(NL(Ids),RBZASIM)) ;
(*SBZASIM) = QBZASIM_name;
 /* line 1944: */
XMCASIM_addbinding(NL(Parentfnno), EBZASIM_componentucname, QBZASIM_name, A_UNITE(TBZASIM,mode1,1,LBZASIM_box));
 /* line 1945: */
 /* line 1946: */
GBZASIM_names = (*(&(GBZASIM_names->Rest)));
}
 /* line 1947: */
 /* line 1948: */
} 
else
{ 
 /* line 1949: */
if ( ((*(&(Make.Sizes->Rest)))!=BBAATRN_nilformulas) )
{ 
 /* line 1950: */
NKDAOST_sysfault(VBZASIM);
} 
 /* line 1951: */
WBZASIM_msize = XOMATRN_int((*(&(Make.Sizes->Formula))));
 /* line 1952: */
for ( ;; )
{ 
 /* line 1954: */
if ( !((GBZASIM_names!=NAAATRN_nilnames)) ) break;
XBZASIM.Fn = Componentfnno;
A_CLOSURE( ZBZASIM_generator, ACZASIM_generator, BCZASIM_generator );
(( BCZASIM_generator * ) ( ZBZASIM_generator.nonlocals )) -> WBZASIM_msize = WBZASIM_msize;
A_CALLPROC(ZBZASIM_generator,(A68_FALSE, &ECZASIM),(A68_FALSE, &ECZASIM,(ZBZASIM_generator).nonlocals));
XBZASIM.Instances = ECZASIM;
FCZASIM_mbox = XBZASIM;
 /* line 1955: */
HCZASIM = WBZASIM_msize;
for ( GCZASIM_i = 1;
GCZASIM_i <= HCZASIM;
GCZASIM_i += 1 )
{ 
 /* line 1957: */
ICZASIM_thisoffset = RNCASIM_nextinstance(NL(Parentfnno), Componentfnno);
 /* line 1958: */
JCZASIM_make = IPXASIM_addmake(Componentfnno, ICZASIM_thisoffset);
 /* line 1959: */
YNCASIM_addexpansion(NL(Parentfnno), JCZASIM_make);
 /* line 1960: */
KCZASIM = FCZASIM_mbox.Instances ;
LCZASIM = (&A_VINDEX(KCZASIM,GCZASIM_i)) ;
(*LCZASIM) = ICZASIM_thisoffset;
 /* line 1961: */
MCZASIM.Fn = Componentfnno;
MCZASIM.Instance = ICZASIM_thisoffset;
NCZASIM_box = MCZASIM;
 /* line 1962: */
 /* line 1963: */
XMCASIM_addbinding(NL(Parentfnno), EBZASIM_componentucname, NTCAOST_nilid, A_UNITE(OCZASIM,mode1,1,NCZASIM_box));
}
 /* line 1964: */
PCZASIM = (*(&(GBZASIM_names->Nameno))) ;
RCZASIM = (&A_VINDEX(NL(Locals),PCZASIM)) ;
(*RCZASIM) = A_UNITE(QCZASIM,mode2,2,FCZASIM_mbox);
 /* line 1965: */
SCZASIM = (*(&(GBZASIM_names->Nameno))) ;
TCZASIM_name = (*(&((&A_VINDEX(HBZASIM_nametypes,SCZASIM))->Name)));
 /* line 1966: */
UCZASIM = (*(&(GBZASIM_names->Nameno))) ;
VCZASIM = (&A_VINDEX(NL(Ids),UCZASIM)) ;
(*VCZASIM) = TCZASIM_name;
 /* line 1967: */
JSYASIM_mwire( A_UNITE(WCZASIM,mode2,2,FCZASIM_mbox), &XCZASIM );
XMCASIM_addbinding(NL(Parentfnno), NTCAOST_nilid, TCZASIM_name, A_UNITE(YCZASIM,mode2,2,XCZASIM));
 /* line 1968: */
 /* line 1969: */
GBZASIM_names = (*(&(GBZASIM_names->Rest)));
}
 /* line 1970: */
 /* line 1971: */
} 
} 
A_PROC_EXIT(declaremake);
return;
} 
#undef NL

A_STATIC A68_VOID  BDZASIM_declareunit(A68_245  Unit, A68_554  *ReturnedValue, void *NonLocals)
#define NL(x) (((CDZASIM_declareunit *)NonLocals)->x)
{ 
A68_245  DDZASIM;  /* united object - for case conformity */
A68_572  EDZASIM_const;
A68_245  FDZASIM;  /* OPERATORS - unite union */
A68_216  GDZASIM;  /* avoid structure result */
A68_216  HDZASIM_svalue;
A68_160  IDZASIM;  /* avoid structure result */
A68_160  JDZASIM_stype;
A68_VC  KDZASIM_encoding;
A68_INT  LDZASIM_size;
A68_INT  MDZASIM_constantix;
A68_173  NDZASIM;  /* collateral clause result */
A68_498  PDZASIM_generator;   /* proc value of non-global proc */
A68_178  UDZASIM;  /* collateral clause result */
A68_177  VDZASIM;  /* avoid structure result */
A68_177  WDZASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_177  XDZASIM;  /* OPERATORS - assign op */
A68_173  YDZASIM_result;
A68_554  ZDZASIM;  /* clause result */
A68_554  AEZASIM;  /* OPERATORS - mode -> union mode */
A68_257 * BEZASIM_un;
A68_INT  CEZASIM;  /* YIELD */
A68_262 * DEZASIM_ui;
A68_554  EEZASIM;  /* avoid structure result */
A68_554  FEZASIM_input;
A68_INT  GEZASIM_ix;
A68_554  HEZASIM;  /* avoid structure result */
A68_263 * IEZASIM_ut;
A68_554  JEZASIM;  /* avoid structure result */
A68_554  KEZASIM_input;
A68_INT  LEZASIM_lwb;
A68_INT  MEZASIM_upb;
A68_554  NEZASIM;  /* avoid structure result */
A68_267 * OEZASIM_us;
A68_177  PEZASIM_blocks;
A68_267 * QEZASIM_scan;
A68_554  REZASIM;  /* avoid structure result */
A68_173  SEZASIM;  /* avoid structure result */
A68_173  TEZASIM_this;
A68_177  UEZASIM;  /* avoid structure result */
A68_177  VEZASIM;  /* avoid structure result */
A68_245  WEZASIM;  /* OPERATORS - mode -> union mode */
A68_315  XEZASIM;  /* avoid structure result */
A68_160  YEZASIM;  /* avoid structure result */
A68_160  ZEZASIM_stype;
A68_173  AFZASIM;  /* collateral clause result */
A68_554  BFZASIM;  /* OPERATORS - mode -> union mode */
A68_266 * CFZASIM_ur;
A68_177  DFZASIM_blocks;
A68_INT  EFZASIM;  /* to part of loop */
A68_INT  FFZASIM;  /* loop control */
A68_554  GFZASIM;  /* avoid structure result */
A68_173  HFZASIM;  /* avoid structure result */
A68_173  IFZASIM_this;
A68_177  JFZASIM;  /* avoid structure result */
A68_177  KFZASIM;  /* avoid structure result */
A68_245  LFZASIM;  /* OPERATORS - mode -> union mode */
A68_315  MFZASIM;  /* avoid structure result */
A68_160  NFZASIM;  /* avoid structure result */
A68_160  OFZASIM_stype;
A68_173  PFZASIM;  /* collateral clause result */
A68_554  QFZASIM;  /* OPERATORS - mode -> union mode */
A68_268 * RFZASIM_uc;
A68_554  SFZASIM;  /* avoid structure result */
A68_173  TFZASIM;  /* avoid structure result */
A68_173  UFZASIM_left;
A68_554  VFZASIM;  /* avoid structure result */
A68_173  WFZASIM;  /* avoid structure result */
A68_173  XFZASIM_right;
A68_245  YFZASIM;  /* OPERATORS - mode -> union mode */
A68_315  ZFZASIM;  /* avoid structure result */
A68_160  AGZASIM;  /* avoid structure result */
A68_160  BGZASIM_stype;
A68_173  CGZASIM;  /* collateral clause result */
A68_177  DGZASIM;  /* avoid structure result */
A68_177  EGZASIM;  /* avoid structure result */
A68_177  FGZASIM;  /* avoid structure result */
A68_554  GGZASIM;  /* OPERATORS - mode -> union mode */
A68_275 * HGZASIM_us;
A68_554  IGZASIM;  /* avoid structure result */
A_PROC_ENTRY(declareunit);
 /* line 1980: */
 /* line 1982: */
DDZASIM = Unit ;
switch ( DDZASIM.mode )
{ 
case 1: /* REF STRUCT(INT)  */
case 2: /* REF STRUCT(INT,INT)  */
case 3: /* REF STRUCT(INT,MODE281)  */
case 4: /* REF STRUCT(MODE315)  */
case 5: /* REF STRUCT(INT,REF MODE32)  */
case 6: /* REF STRUCT(INT)  */
A_UNCPY(EDZASIM_const,DDZASIM);
 /* line 1983: */
 /* line 1984: */
{ 
OXBASIM_convertconst( A_UUNITE(FDZASIM,0,EDZASIM_const), (*NL(Environ)), NL(Closure), &GDZASIM );
HDZASIM_svalue = GDZASIM;
 /* line 1985: */
WTAASIM_typeof( HDZASIM_svalue, &IDZASIM );
JDZASIM_stype = IDZASIM;
 /* line 1986: */
KDZASIM_encoding = (*CLOASIM_machine(HDZASIM_svalue, JDZASIM_stype));
 /* line 1987: */
LDZASIM_size = KDZASIM_encoding.upb;
 /* line 1988: */
MDZASIM_constantix = KRXASIM_addconstant(KDZASIM_encoding);
 /* line 1989: */
GOCASIM_addconstantno(NL(Parentfnno), MDZASIM_constantix);
 /* line 1991: */
 /* line 1992: */
 /* line 1993: */
NDZASIM.Type = JDZASIM_stype;
A_CLOSURE( PDZASIM_generator, QDZASIM_generator, RDZASIM_generator );
 /* line 1994: */
UDZASIM.Instoffset = 0;
UDZASIM.Offset = (*NL(Constantsend));
UDZASIM.Size = LDZASIM_size;
A_CALLPROC(PDZASIM_generator,(A68_FALSE, &VDZASIM),(A68_FALSE, &VDZASIM,(PDZASIM_generator).nonlocals));
XDZASIM = A_HVEC(WDZASIM,UDZASIM,A68_178 ) ;
A_VASSIGN2(XDZASIM,VDZASIM,A68_178 ) ;
NDZASIM.Blocks = VDZASIM;
YDZASIM_result = NDZASIM;
 /* line 1995: */
(*NL(Constantsend))+=LDZASIM_size;
 /* line 1996: */
 /* line 1997: */
 /* line 1998: */
ZDZASIM = A_UNITE(AEZASIM,mode3,3,YDZASIM_result);
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
BEZASIM_un = (DDZASIM.data.mode11);
 /* line 1999: */
CEZASIM = (*(&(BEZASIM_un->Nameno))) ;
ZDZASIM = (*(&A_VINDEX(NL(Locals),CEZASIM)));
break;
case 16: /* REF STRUCT(MODE245,MODE281)  */
DEZASIM_ui = (DDZASIM.data.mode16);
 /* line 2000: */
 /* line 2001: */
{ 
A_CALLPROC(NL(ADZASIM_declareunit),((*(&(DEZASIM_ui->Unit))), &EEZASIM),((*(&(DEZASIM_ui->Unit))), &EEZASIM,(NL(ADZASIM_declareunit)).nonlocals));
FEZASIM_input = EEZASIM;
 /* line 2002: */
GEZASIM_ix = XOMATRN_int((*(&(DEZASIM_ui->Index))));
 /* line 2003: */
 /* line 2004: */
 /* line 2005: */
HYYASIM_indexlocal( FEZASIM_input, GEZASIM_ix, &HEZASIM );
ZDZASIM = HEZASIM;
} 
break;
case 17: /* REF STRUCT(MODE245,MODE337)  */
IEZASIM_ut = (DDZASIM.data.mode17);
 /* line 2006: */
 /* line 2007: */
{ 
A_CALLPROC(NL(ADZASIM_declareunit),((*(&(IEZASIM_ut->Unit))), &JEZASIM),((*(&(IEZASIM_ut->Unit))), &JEZASIM,(NL(ADZASIM_declareunit)).nonlocals));
KEZASIM_input = JEZASIM;
 /* line 2008: */
LEZASIM_lwb = XOMATRN_int((*(&((&(IEZASIM_ut->Range))->Lwb))));
 /* line 2009: */
MEZASIM_upb = XOMATRN_int((*(&((&(IEZASIM_ut->Range))->Upb))));
 /* line 2010: */
 /* line 2011: */
 /* line 2012: */
DWYASIM_trimlocal( KEZASIM_input, LEZASIM_lwb, MEZASIM_upb, &NEZASIM );
ZDZASIM = NEZASIM;
} 
break;
case 21: /* REF STRUCT(MODE245,REF MODE267)  */
OEZASIM_us = (DDZASIM.data.mode21);
 /* line 2013: */
 /* line 2014: */
{ 
PEZASIM_blocks = VLXASIM_nullrvb;
 /* line 2015: */
QEZASIM_scan = OEZASIM_us;
 /* line 2016: */
for ( ;; )
{ 
 /* line 2017: */
if ( !((QEZASIM_scan!=IAAATRN_nilustr)) ) break;
A_CALLPROC(NL(ADZASIM_declareunit),((*(&(QEZASIM_scan->Elem))), &REZASIM),((*(&(QEZASIM_scan->Elem))), &REZASIM,(NL(ADZASIM_declareunit)).nonlocals));
RQYASIM_wire( REZASIM, &SEZASIM );
TEZASIM_this = SEZASIM;
 /* line 2018: */
GQYASIM_new( TEZASIM_this.Blocks, &UEZASIM );
LABASIM_( PEZASIM_blocks, UEZASIM, &VEZASIM );
PEZASIM_blocks = VEZASIM;
 /* line 2019: */
 /* line 2020: */
QEZASIM_scan = (*(&(QEZASIM_scan->Rest)));
}
 /* line 2021: */
 /* line 2022: */
VUNATRN_unit_type( A_UNITE(WEZASIM,mode21,21,OEZASIM_us), NL(Declaration), NL(Environ), &XEZASIM );
SUBASIM_converttype( XEZASIM, (*NL(Environ)), NL(Closure), &YEZASIM );
ZEZASIM_stype = YEZASIM;
 /* line 2023: */
AFZASIM.Type = ZEZASIM_stype;
 /* line 2024: */
AFZASIM.Blocks = PEZASIM_blocks;
 /* line 2025: */
ZDZASIM = A_UNITE(BFZASIM,mode3,3,AFZASIM);
} 
break;
case 20: /* REF STRUCT(MODE281,MODE245)  */
CFZASIM_ur = (DDZASIM.data.mode20);
 /* line 2026: */
 /* line 2027: */
{ 
DFZASIM_blocks = VLXASIM_nullrvb;
 /* line 2028: */
EFZASIM = XOMATRN_int((*(&(CFZASIM_ur->Size))));
for ( FFZASIM = 1;
FFZASIM <= EFZASIM;
FFZASIM += 1 )
{ 
 /* line 2029: */
A_CALLPROC(NL(ADZASIM_declareunit),((*(&(CFZASIM_ur->Elem))), &GFZASIM),((*(&(CFZASIM_ur->Elem))), &GFZASIM,(NL(ADZASIM_declareunit)).nonlocals));
RQYASIM_wire( GFZASIM, &HFZASIM );
IFZASIM_this = HFZASIM;
 /* line 2030: */
 /* line 2031: */
GQYASIM_new( IFZASIM_this.Blocks, &JFZASIM );
LABASIM_( DFZASIM_blocks, JFZASIM, &KFZASIM );
DFZASIM_blocks = KFZASIM;
}
 /* line 2032: */
 /* line 2033: */
VUNATRN_unit_type( A_UNITE(LFZASIM,mode20,20,CFZASIM_ur), NL(Declaration), NL(Environ), &MFZASIM );
SUBASIM_converttype( MFZASIM, (*NL(Environ)), NL(Closure), &NFZASIM );
OFZASIM_stype = NFZASIM;
 /* line 2034: */
PFZASIM.Type = OFZASIM_stype;
 /* line 2035: */
PFZASIM.Blocks = DFZASIM_blocks;
 /* line 2036: */
ZDZASIM = A_UNITE(QFZASIM,mode3,3,PFZASIM);
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE245,MODE245)  */
RFZASIM_uc = (DDZASIM.data.mode22);
 /* line 2037: */
 /* line 2038: */
{ 
A_CALLPROC(NL(ADZASIM_declareunit),((*(&(RFZASIM_uc->Left))), &SFZASIM),((*(&(RFZASIM_uc->Left))), &SFZASIM,(NL(ADZASIM_declareunit)).nonlocals));
RQYASIM_wire( SFZASIM, &TFZASIM );
UFZASIM_left = TFZASIM;
 /* line 2039: */
A_CALLPROC(NL(ADZASIM_declareunit),((*(&(RFZASIM_uc->Right))), &VFZASIM),((*(&(RFZASIM_uc->Right))), &VFZASIM,(NL(ADZASIM_declareunit)).nonlocals));
RQYASIM_wire( VFZASIM, &WFZASIM );
XFZASIM_right = WFZASIM;
 /* line 2040: */
 /* line 2041: */
 /* line 2042: */
 /* line 2043: */
VUNATRN_unit_type( A_UNITE(YFZASIM,mode22,22,RFZASIM_uc), NL(Declaration), NL(Environ), &ZFZASIM );
SUBASIM_converttype( ZFZASIM, (*NL(Environ)), NL(Closure), &AGZASIM );
BGZASIM_stype = AGZASIM;
 /* line 2044: */
CGZASIM.Type = BGZASIM_stype;
 /* line 2045: */
GQYASIM_new( XFZASIM_right.Blocks, &DGZASIM );
GQYASIM_new( UFZASIM_left.Blocks, &EGZASIM );
LABASIM_( EGZASIM, DGZASIM, &FGZASIM );
CGZASIM.Blocks = FGZASIM;
 /* line 2046: */
ZDZASIM = A_UNITE(GGZASIM,mode3,3,CGZASIM);
} 
break;
case 29: /* REF STRUCT(REF MODE292,MODE245)  */
HGZASIM_us = (DDZASIM.data.mode29);
 /* line 2055: */
 /* line 2056: */
 /* line 2057: */
 /* line 2058: */
MZYASIM_declare( (*HGZASIM_us), NL(Parentfnno), NL(Declaration), NL(Environ), NL(Closure), NL(Locals), NL(Ids), NL(Constantsend), NL(Diaglevel), NL(Flt), &IGZASIM );
ZDZASIM = IGZASIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(declareunit);
*ReturnedValue = (ZDZASIM);
return;
} 
#undef NL

A_STATIC A68_INT  LGZASIM_join_nameno(A68_245  Rhs, void *NonLocals)
#define NL(x) (((MGZASIM_join_nameno *)NonLocals)->x)
{ 
A68_245  NGZASIM;  /* united object - for case conformity */
A68_257 * OGZASIM_un;
A68_INT  PGZASIM;  /* clause result */
A68_262 * QGZASIM_ui;
A68_263 * RGZASIM_ut;
A_PROC_ENTRY(join_nameno);
 /* line 2069: */
 /* line 2070: */
NGZASIM = Rhs ;
switch ( NGZASIM.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
OGZASIM_un = (NGZASIM.data.mode11);
 /* line 2071: */
PGZASIM = (*(&(OGZASIM_un->Nameno)));
break;
case 16: /* REF STRUCT(MODE245,MODE281)  */
QGZASIM_ui = (NGZASIM.data.mode16);
 /* line 2072: */
PGZASIM = A_CALLPROC(NL(KGZASIM_join_nameno),((*(&(QGZASIM_ui->Unit)))),((*(&(QGZASIM_ui->Unit))),(NL(KGZASIM_join_nameno)).nonlocals));
break;
case 17: /* REF STRUCT(MODE245,MODE337)  */
RGZASIM_ut = (NGZASIM.data.mode17);
 /* line 2073: */
PGZASIM = A_CALLPROC(NL(KGZASIM_join_nameno),((*(&(RGZASIM_ut->Unit)))),((*(&(RGZASIM_ut->Unit))),(NL(KGZASIM_join_nameno)).nonlocals));
break;
default: 
NKDAOST_sysfault(TGZASIM);
 /* line 2074: */
PGZASIM = 0;
break;
} 
A_PROC_EXIT(join_nameno);
return( PGZASIM );
} 
#undef NL

A_STATIC A68_VOID  XGZASIM_declarejoin(A68_301  Join, A68_574  To, void *NonLocals)
#define NL(x) (((YGZASIM_declarejoin *)NonLocals)->x)
{ 
A68_245  ZGZASIM_from;
A68_554  AHZASIM;  /* avoid structure result */
A68_173  BHZASIM;  /* avoid structure result */
A68_173  CHZASIM_whence;
A68_INT  DHZASIM_fn;
A68_INT  EHZASIM_instance;
A68_574  FHZASIM;  /* united object - for case conformity */
A68_181  GHZASIM_bto;
A68_551  HHZASIM_mto;
A68_245  IHZASIM;  /* united object - for case conformity */
A68_262 * JHZASIM_ui;
A68_INT  KHZASIM;  /* clause result */
A68_INT  NHZASIM_mindex;
A68_32  OHZASIM;  /* OPERATORS - simple index */
A68_32  QHZASIM;  /* avoid structure result */
A68_32  RHZASIM_inputsizes;
A68_195  SHZASIM;  /* avoid structure result */
A68_195  THZASIM_slice;
A68_177  UHZASIM;  /* avoid structure result */
A68_177  VHZASIM_blocks;
A68_INT  WHZASIM_ix;
A68_INT  XHZASIM_make;
A68_INT  YHZASIM_i;
A68_INT  ZHZASIM;  /* to part of loop */
A68_178 * AIZASIM_next;
A68_INT  BIZASIM_size;
A68_INT * CIZASIM;  /* YIELD */
A68_INT * DIZASIM;  /* YIELD */
A_PROC_ENTRY(declarejoin);
 /* line 2077: */
 /* line 2078: */
{ 
ZGZASIM_from = Join.From;
 /* line 2079: */
A_CALLPROC(NL(ADZASIM_declareunit),(ZGZASIM_from, &AHZASIM),(ZGZASIM_from, &AHZASIM,(NL(ADZASIM_declareunit)).nonlocals));
RQYASIM_wire( AHZASIM, &BHZASIM );
CHZASIM_whence = BHZASIM;
 /* line 2080: */
 /* line 2081: */
 /* line 2082: */
FHZASIM = To ;
switch ( FHZASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
GHZASIM_bto = (FHZASIM.data.mode1);
 /* line 2083: */
 /* line 2084: */
{ 
DHZASIM_fn = GHZASIM_bto.Fn;
 /* line 2085: */
 /* line 2086: */
 /* line 2087: */
EHZASIM_instance = GHZASIM_bto.Instance;
} 
break;
case 2: /* STRUCT(INT,REF MODE32)  */
HHZASIM_mto = (FHZASIM.data.mode2);
 /* line 2088: */
 /* line 2089: */
{ 
DHZASIM_fn = HHZASIM_mto.Fn;
 /* line 2090: */
 /* line 2091: */
IHZASIM = Join.To ;
switch ( IHZASIM.mode )
{ 
case 16: /* REF STRUCT(MODE245,MODE281)  */
JHZASIM_ui = (IHZASIM.data.mode16);
 /* line 2092: */
KHZASIM = XOMATRN_int((*(&(JHZASIM_ui->Index))));
break;
default: 
NKDAOST_sysfault(MHZASIM);
 /* line 2093: */
KHZASIM = 0;
break;
} 
NHZASIM_mindex = KHZASIM;
 /* line 2094: */
 /* line 2095: */
 /* line 2096: */
OHZASIM = HHZASIM_mto.Instances ;
EHZASIM_instance = (*(&A_VINDEX(OHZASIM,NHZASIM_mindex)));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2097: */
 /* line 2101: */
QUCASIM_lookupinputsizes( DHZASIM_fn, &QHZASIM );
RHZASIM_inputsizes = QHZASIM;
 /* line 2102: */
UUCASIM_lookupinputslice( DHZASIM_fn, PHZASIM_fsindex, &SHZASIM );
THZASIM_slice = SHZASIM;
 /* line 2103: */
GQYASIM_new( CHZASIM_whence.Blocks, &UHZASIM );
VHZASIM_blocks = UHZASIM;
 /* line 2104: */
WHZASIM_ix = 1;
 /* line 2105: */
XHZASIM_make = CQXASIM_findmake(NL(Parentfnno), EHZASIM_instance);
 /* line 2106: */
ZHZASIM = THZASIM_slice.Upb;
for ( YHZASIM_i = THZASIM_slice.Lwb;
YHZASIM_i <= ZHZASIM;
YHZASIM_i += 1 )
{ 
 /* line 2107: */
AIZASIM_next = (&A_VINDEX(VHZASIM_blocks,WHZASIM_ix));
 /* line 2108: */
SQXASIM_addconnection((*(&(AIZASIM_next->Instoffset))), (*(&(AIZASIM_next->Offset))), XHZASIM_make, YHZASIM_i);
 /* line 2109: */
BIZASIM_size = (*(&A_VINDEX(RHZASIM_inputsizes,YHZASIM_i)));
 /* line 2110: */
 /* line 2111: */
if ( (BIZASIM_size<(*(&(AIZASIM_next->Size)))) )
{ 
CIZASIM = (&(AIZASIM_next->Size)) ;
(*CIZASIM)-=BIZASIM_size;
 /* line 2112: */
 /* line 2113: */
if ( ((*(&(AIZASIM_next->Offset)))>=0) )
{ 
 /* line 2114: */
 /* line 2115: */
DIZASIM = (&(AIZASIM_next->Offset)) ;
(*DIZASIM)+=BIZASIM_size;
} 
else
{ 
 /* line 2116: */
 /* line 2117: */
 /* line 2118: */
NKDAOST_sysfault(FIZASIM);
} 
} 
else
{ 
 /* line 2119: */
 /* line 2120: */
WHZASIM_ix+=1;
} 
}
 /* line 2121: */
} 
A_PROC_EXIT(declarejoin);
return;
} 
#undef NL

A_STATIC A68_VOID  IIZASIM_declarelet(A68_299  Let, void *NonLocals)
#define NL(x) (((JIZASIM_declarelet *)NonLocals)->x)
{ 
A68_554  KIZASIM;  /* avoid structure result */
A68_554  LIZASIM_node;
A68_307 * MIZASIM_scan;
A68_BOOL  NIZASIM_multiple;
A68_353  OIZASIM_nametypes;
A68_INT  PIZASIM_ix;
A68_554  QIZASIM;  /* clause result */
A68_554  RIZASIM;  /* avoid structure result */
A68_554  SIZASIM_noden;
A68_INT  TIZASIM;  /* YIELD */
A68_315  UIZASIM;  /* united object - for case conformity */
A68_173  VIZASIM;  /* avoid structure result */
A68_173  WIZASIM_wire;
A68_INT  XIZASIM;  /* YIELD */
A68_554  YIZASIM;  /* united object - for case conformity */
A68_INT  ZIZASIM;  /* YIELD */
A68_VC  AJZASIM_name;
A68_180  BJZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CJZASIM;  /* YIELD */
A68_VC * DJZASIM;  /* YIELD */
A68_INT  EJZASIM;  /* YIELD */
A68_554 * FJZASIM;  /* YIELD */
A68_180  GJZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HJZASIM;  /* YIELD */
A68_INT  IJZASIM;  /* YIELD */
A68_554 * JJZASIM;  /* YIELD */
A68_181  KJZASIM_box;
A68_180  LJZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  MJZASIM;  /* YIELD */
A68_552  NJZASIM;  /* collateral clause result */
A68_553  OJZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  PJZASIM;  /* YIELD */
A68_554  QJZASIM;  /* OPERATORS - mode -> union mode */
A68_554 * RJZASIM;  /* YIELD */
A68_551  SJZASIM_mbox;
A68_180  TJZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  UJZASIM;  /* YIELD */
A68_552  VJZASIM;  /* collateral clause result */
A68_553  WJZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  XJZASIM;  /* YIELD */
A68_554  YJZASIM;  /* OPERATORS - mode -> union mode */
A68_554 * ZJZASIM;  /* YIELD */
A68_552  AKZASIM_pbox;
A68_180  BKZASIM;  /* OPERATORS - mode -> union mode */
A68_INT  CKZASIM;  /* YIELD */
A68_552  DKZASIM;  /* collateral clause result */
A68_INT  EKZASIM;  /* YIELD */
A68_554  FKZASIM;  /* OPERATORS - mode -> union mode */
A68_554 * GKZASIM;  /* YIELD */
A_PROC_ENTRY(declarelet);
 /* line 2131: */
 /* line 2132: */
{ 
A_CALLPROC(NL(ADZASIM_declareunit),(Let.Unit, &KIZASIM),(Let.Unit, &KIZASIM,(NL(ADZASIM_declareunit)).nonlocals));
LIZASIM_node = KIZASIM;
 /* line 2133: */
MIZASIM_scan = Let.Letnames;
 /* line 2134: */
NIZASIM_multiple = ((*(&(MIZASIM_scan->Rest)))!=NAAATRN_nilnames);
 /* line 2135: */
OIZASIM_nametypes = (*(&(NL(Declaration)->Nametypes)));
 /* line 2136: */
PIZASIM_ix = 0;
 /* line 2137: */
for ( ;; )
{ 
 /* line 2139: */
if ( !((MIZASIM_scan!=NAAATRN_nilnames)) ) break;
if ( NIZASIM_multiple )
{ 
 /* line 2140: */
 /* line 2141: */
HYYASIM_indexlocal( LIZASIM_node, PIZASIM_ix+=1, &RIZASIM );
QIZASIM = RIZASIM;
} 
else
{ 
QIZASIM = LIZASIM_node;
} 
SIZASIM_noden = QIZASIM;
 /* line 2142: */
 /* line 2143: */
TIZASIM = (*(&(MIZASIM_scan->Nameno))) ;
UIZASIM = (*(&((&A_VINDEX(OIZASIM_nametypes,TIZASIM))->Type))) ;
switch ( UIZASIM.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 2144: */
 /* line 2145: */
/*SKIP*/;
break;
default: 
RQYASIM_wire( SIZASIM_noden, &VIZASIM );
WIZASIM_wire = VIZASIM;
 /* line 2146: */
 /* line 2147: */
XIZASIM = (*(&(MIZASIM_scan->Nameno))) ;
YIZASIM = (*(&A_VINDEX(NL(Locals),XIZASIM))) ;
switch ( YIZASIM.mode )
{ 
case 5: /* VOID */
 /* line 2148: */
{ 
ZIZASIM = (*(&(MIZASIM_scan->Nameno))) ;
AJZASIM_name = (*(&((&A_VINDEX(OIZASIM_nametypes,ZIZASIM))->Name)));
 /* line 2149: */
XMCASIM_addbinding(NL(Parentfnno), TTCAOST_nullid, AJZASIM_name, A_UNITE(BJZASIM,mode2,2,WIZASIM_wire));
 /* line 2150: */
CJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
DJZASIM = (&A_VINDEX(NL(Ids),CJZASIM)) ;
(*DJZASIM) = AJZASIM_name;
 /* line 2151: */
 /* line 2152: */
EJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
FJZASIM = (&A_VINDEX(NL(Locals),EJZASIM)) ;
(*FJZASIM) = SIZASIM_noden;
} 
break;
case 3: /* STRUCT(MODE160,REF MODE177)  */
 /* line 2153: */
{ 
HJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
WLCASIM_updatebinding(NL(Parentfnno), NTCAOST_nilid, (*(&A_VINDEX(NL(Ids),HJZASIM))), A_UNITE(GJZASIM,mode2,2,WIZASIM_wire));
 /* line 2154: */
SZYASIM_recordlocal(NL(NZYASIM_localchanges), NL(Locals), (*(&(MIZASIM_scan->Nameno))));
 /* line 2155: */
 /* line 2156: */
IJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
JJZASIM = (&A_VINDEX(NL(Locals),IJZASIM)) ;
(*JJZASIM) = SIZASIM_noden;
} 
break;
case 1: /* STRUCT(INT,INT)  */
KJZASIM_box = (YIZASIM.data.mode1);
 /* line 2157: */
{ 
MJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
WLCASIM_updatebinding(NL(Parentfnno), NTCAOST_nilid, (*(&A_VINDEX(NL(Ids),MJZASIM))), A_UNITE(LJZASIM,mode2,2,WIZASIM_wire));
 /* line 2158: */
SZYASIM_recordlocal(NL(NZYASIM_localchanges), NL(Locals), (*(&(MIZASIM_scan->Nameno))));
 /* line 2159: */
NJZASIM.Box = A_UNITE(OJZASIM,mode2,2,KJZASIM_box);
NJZASIM.Wire = WIZASIM_wire;
 /* line 2160: */
PJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
RJZASIM = (&A_VINDEX(NL(Locals),PJZASIM)) ;
(*RJZASIM) = A_UNITE(QJZASIM,mode4,4,NJZASIM);
} 
break;
case 2: /* STRUCT(INT,REF MODE32)  */
SJZASIM_mbox = (YIZASIM.data.mode2);
 /* line 2161: */
{ 
UJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
WLCASIM_updatebinding(NL(Parentfnno), NTCAOST_nilid, (*(&A_VINDEX(NL(Ids),UJZASIM))), A_UNITE(TJZASIM,mode2,2,WIZASIM_wire));
 /* line 2162: */
SZYASIM_recordlocal(NL(NZYASIM_localchanges), NL(Locals), (*(&(MIZASIM_scan->Nameno))));
 /* line 2163: */
VJZASIM.Box = A_UNITE(WJZASIM,mode1,1,SJZASIM_mbox);
VJZASIM.Wire = WIZASIM_wire;
 /* line 2164: */
XJZASIM = (*(&(MIZASIM_scan->Nameno))) ;
ZJZASIM = (&A_VINDEX(NL(Locals),XJZASIM)) ;
(*ZJZASIM) = A_UNITE(YJZASIM,mode4,4,VJZASIM);
} 
break;
case 4: /* STRUCT(MODE553,MODE173)  */
AKZASIM_pbox = (YIZASIM.data.mode4);
 /* line 2165: */
{ 
CKZASIM = (*(&(MIZASIM_scan->Nameno))) ;
WLCASIM_updatebinding(NL(Parentfnno), NTCAOST_nilid, (*(&A_VINDEX(NL(Ids),CKZASIM))), A_UNITE(BKZASIM,mode2,2,WIZASIM_wire));
 /* line 2166: */
SZYASIM_recordlocal(NL(NZYASIM_localchanges), NL(Locals), (*(&(MIZASIM_scan->Nameno))));
 /* line 2167: */
DKZASIM.Box = AKZASIM_pbox.Box;
DKZASIM.Wire = WIZASIM_wire;
 /* line 2168: */
 /* line 2169: */
EKZASIM = (*(&(MIZASIM_scan->Nameno))) ;
GKZASIM = (&A_VINDEX(NL(Locals),EKZASIM)) ;
(*GKZASIM) = A_UNITE(FKZASIM,mode4,4,DKZASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
} 
 /* line 2170: */
 /* line 2171: */
MIZASIM_scan = (*(&(MIZASIM_scan->Rest)));
}
 /* line 2172: */
} 
A_PROC_EXIT(declarelet);
return;
} 
#undef NL

A_STATIC A68_VOID  JKZASIM_declarefunction(A68_296  Fn, void *NonLocals)
#define NL(x) (((KKZASIM_declarefunction *)NonLocals)->x)
{ 
A68_242  LKZASIM;  /* OPERATORS - simple index */
A68_INT  MKZASIM;  /* YIELD */
A68_230 * NKZASIM_localdeclaration;
A_PROC_ENTRY(declarefunction);
 /* line 2178: */
{ 
LKZASIM = (*(&(NL(Environ)->Fns))) ;
MKZASIM = Fn.Fnno ;
NKZASIM_localdeclaration = (*(&A_VINDEX(LKZASIM,MKZASIM)));
 /* line 2180: */
 /* line 2181: */
 /* line 2182: */
 /* line 2183: */
 /* line 2184: */
 /* line 2185: */
 /* line 2186: */
 /* line 2187: */
 /* line 2188: */
A_CALLPROC(EQYASIM_translatefunction,((*(&(NKZASIM_localdeclaration->Fnbody))), NKZASIM_localdeclaration, NL(Environ), NL(Closure), NL(Diaglevel), NL(Parentfnno), Fn.Fnno, NL(Flt)),((*(&(NKZASIM_localdeclaration->Fnbody))), NKZASIM_localdeclaration, NL(Environ), NL(Closure), NL(Diaglevel), NL(Parentfnno), Fn.Fnno, NL(Flt),(EQYASIM_translatefunction).nonlocals));
} 
A_PROC_EXIT(declarefunction);
return;
} 
#undef NL

A_STATIC A68_VOID  OLZASIM_generator(A68_BOOL  MLZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((PLZASIM_generator *)NonLocals)->x)
{ 
A68_32  QLZASIM;  /* clause result */
A68_32  RLZASIM;  /* OPERATORS - dynamic generator */
{ 
RLZASIM.upb = (*NL(KLZASIM_numberinputs)) ;
( MLZASIM_anonymous? A_VLOC(A68_INT ,RLZASIM): A_VHEAP(A68_INT ,RLZASIM) );
QLZASIM = RLZASIM;
} 
*ReturnedValue = (QLZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DMZASIM_generator(A68_BOOL  BMZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((EMZASIM_generator *)NonLocals)->x)
{ 
A68_32  FMZASIM;  /* clause result */
A68_32  GMZASIM;  /* OPERATORS - dynamic generator */
{ 
GMZASIM.upb = NL(Indices).upb ;
( BMZASIM_anonymous? A_VLOC(A68_INT ,GMZASIM): A_VHEAP(A68_INT ,GMZASIM) );
FMZASIM = GMZASIM;
} 
*ReturnedValue = (FMZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VMZASIM_generator(A68_BOOL  TMZASIM_anonymous, A68_586  *ReturnedValue, void *NonLocals)
#define NL(x) (((WMZASIM_generator *)NonLocals)->x)
{ 
A68_586  XMZASIM;  /* clause result */
A68_586  YMZASIM;  /* OPERATORS - dynamic generator */
{ 
YMZASIM.upb = NL(SMZASIM_userinputs) ;
( TMZASIM_anonymous? A_VLOC(A68_160 ,YMZASIM): A_VHEAP(A68_160 ,YMZASIM) );
XMZASIM = YMZASIM;
} 
*ReturnedValue = (XMZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NNZASIM_generator(A68_BOOL  LNZASIM_anonymous, A68_584  *ReturnedValue, void *NonLocals)
#define NL(x) (((ONZASIM_generator *)NonLocals)->x)
{ 
A68_584  PNZASIM;  /* clause result */
A68_584  QNZASIM;  /* OPERATORS - dynamic generator */
{ 
QNZASIM.upb = NL(SMZASIM_userinputs) ;
( LNZASIM_anonymous? A_VLOC(A68_583 ,QNZASIM): A_VHEAP(A68_583 ,QNZASIM) );
PNZASIM = QNZASIM;
} 
*ReturnedValue = (PNZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YNZASIM_generator(A68_BOOL  WNZASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZNZASIM_generator *)NonLocals)->x)
{ 
A68_177  AOZASIM;  /* clause result */
A68_177  BOZASIM;  /* OPERATORS - dynamic generator */
{ 
BOZASIM.upb = NL(VNZASIM_width) ;
( WNZASIM_anonymous? A_VLOC(A68_178 ,BOZASIM): A_VHEAP(A68_178 ,BOZASIM) );
AOZASIM = BOZASIM;
} 
*ReturnedValue = (AOZASIM);
return;
} 
#undef NL

A_STATIC A68_VC * WOZASIM_querywords(A68_INT  Size)
{ 
A68_31  YOZASIM_generator;   /* proc value of non-global proc */
A68_VC  DPZASIM;  /* avoid structure result */
A68_VC  EPZASIM_q;
A68_CHAR * FPZASIM_c;
A68_INT  GPZASIM;  /* forall loop counter */
A68_VC * HPZASIM;  /* clause result */
A68_VC * IPZASIM;  /* YIELD */
A_PROC_ENTRY(querywords);
 /* line 2342: */
 /* line 2344: */
{ 
A_CLOSURE( YOZASIM_generator, ZOZASIM_generator, APZASIM_generator );
(( APZASIM_generator * ) ( YOZASIM_generator.nonlocals )) -> Size = Size;
A_CALLPROC(YOZASIM_generator,(A68_FALSE, &DPZASIM),(A68_FALSE, &DPZASIM,(YOZASIM_generator).nonlocals));
EPZASIM_q = DPZASIM;
 /* line 2345: */
GPZASIM = EPZASIM_q.upb -1;
FPZASIM_c = EPZASIM_q.data;
for (;GPZASIM-- >= 0;
(FPZASIM_c++
) )
{
(*FPZASIM_c) = (A68_CHAR)0;
}
 /* line 2346: */
 /* line 2347: */
IPZASIM = A_HEAP(A68_VC ) ;
(*IPZASIM) = EPZASIM_q ;
HPZASIM = IPZASIM;
} 
A_PROC_EXIT(querywords);
return( HPZASIM );
} 
#undef NL

A_STATIC A68_VOID  TUZASIM_generator(A68_BOOL  RUZASIM_anonymous, A68_231  *ReturnedValue, void *NonLocals)
#define NL(x) (((UUZASIM_generator *)NonLocals)->x)
{ 
A68_231  VUZASIM;  /* clause result */
A68_231  WUZASIM;  /* OPERATORS - dynamic generator */
{ 
WUZASIM.upb = NL(WTZASIM_userinputs).upb ;
( RUZASIM_anonymous? A_VLOC(A68_173 ,WUZASIM): A_VHEAP(A68_173 ,WUZASIM) );
VUZASIM = WUZASIM;
} 
*ReturnedValue = (VUZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GVZASIM_generator(A68_BOOL  EVZASIM_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((HVZASIM_generator *)NonLocals)->x)
{ 
A68_177  IVZASIM;  /* clause result */
A68_177  JVZASIM;  /* OPERATORS - dynamic generator */
{ 
JVZASIM.upb = 1 ;
( EVZASIM_anonymous? A_VLOC(A68_178 ,JVZASIM): A_VHEAP(A68_178 ,JVZASIM) );
IVZASIM = JVZASIM;
} 
*ReturnedValue = (IVZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UWZASIM_generator(A68_BOOL  SWZASIM_anonymous, A68_563  *ReturnedValue, void *NonLocals)
#define NL(x) (((VWZASIM_generator *)NonLocals)->x)
{ 
A68_563  WWZASIM;  /* clause result */
A68_563  XWZASIM;  /* OPERATORS - dynamic generator */
{ 
XWZASIM.upb = (*(&(NL(Declaration)->Nametypes))).upb ;
( SWZASIM_anonymous? A_VLOC(A68_554 ,XWZASIM): A_VHEAP(A68_554 ,XWZASIM) );
WWZASIM = XWZASIM;
} 
*ReturnedValue = (WWZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CXZASIM_generator(A68_BOOL  AXZASIM_anonymous, A68_438  *ReturnedValue, void *NonLocals)
#define NL(x) (((DXZASIM_generator *)NonLocals)->x)
{ 
A68_438  EXZASIM;  /* clause result */
A68_438  FXZASIM;  /* OPERATORS - dynamic generator */
{ 
FXZASIM.upb = (*(&(NL(Declaration)->Nametypes))).upb ;
( AXZASIM_anonymous? A_VLOC(A68_VC ,FXZASIM): A_VHEAP(A68_VC ,FXZASIM) );
EXZASIM = FXZASIM;
} 
*ReturnedValue = (EXZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  IYZASIM_generator(A68_BOOL  GYZASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((JYZASIM_generator *)NonLocals)->x)
{ 
A68_32  KYZASIM;  /* clause result */
A68_32  LYZASIM;  /* OPERATORS - dynamic generator */
{ 
LYZASIM.upb = NL(RTZASIM_inputsizes).upb ;
( GYZASIM_anonymous? A_VLOC(A68_INT ,LYZASIM): A_VHEAP(A68_INT ,LYZASIM) );
KYZASIM = LYZASIM;
} 
*ReturnedValue = (KYZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NAABSIM_generator(A68_BOOL  MAABSIM_anonymous, A68_515  *ReturnedValue)
{ 
A68_515  OAABSIM;  /* clause result */
A68_515  PAABSIM;  /* OPERATORS - dynamic generator */
{ 
PAABSIM.upb = 0 ;
( MAABSIM_anonymous? A_VLOC(A68_514 ,PAABSIM): A_VHEAP(A68_514 ,PAABSIM) );
OAABSIM = PAABSIM;
} 
*ReturnedValue = (OAABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SAABSIM_generator(A68_BOOL  RAABSIM_anonymous, A68_438  *ReturnedValue)
{ 
A68_438  TAABSIM;  /* clause result */
A68_438  UAABSIM;  /* OPERATORS - dynamic generator */
{ 
UAABSIM.upb = 0 ;
( RAABSIM_anonymous? A_VLOC(A68_VC ,UAABSIM): A_VHEAP(A68_VC ,UAABSIM) );
TAABSIM = UAABSIM;
} 
*ReturnedValue = (TAABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OBABSIM_generator(A68_BOOL  MBABSIM_anonymous, A68_504  *ReturnedValue, void *NonLocals)
#define NL(x) (((PBABSIM_generator *)NonLocals)->x)
{ 
A68_504  QBABSIM;  /* clause result */
A68_504  RBABSIM;  /* OPERATORS - dynamic generator */
{ 
RBABSIM.upb = (*NL(LBABSIM_upb)) ;
( MBABSIM_anonymous? A_VLOC(A68_503 ,RBABSIM): A_VHEAP(A68_503 ,RBABSIM) );
QBABSIM = RBABSIM;
} 
*ReturnedValue = (QBABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ACABSIM_generator(A68_BOOL  YBABSIM_anonymous, A68_506  *ReturnedValue, void *NonLocals)
#define NL(x) (((BCABSIM_generator *)NonLocals)->x)
{ 
A68_506  CCABSIM;  /* clause result */
A68_506  DCABSIM;  /* OPERATORS - dynamic generator */
{ 
DCABSIM.upb = (*NL(LBABSIM_upb)) ;
( YBABSIM_anonymous? A_VLOC(A68_505 ,DCABSIM): A_VHEAP(A68_505 ,DCABSIM) );
CCABSIM = DCABSIM;
} 
*ReturnedValue = (CCABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PCABSIM_generator(A68_BOOL  NCABSIM_anonymous, A68_504  *ReturnedValue, void *NonLocals)
#define NL(x) (((QCABSIM_generator *)NonLocals)->x)
{ 
A68_504  RCABSIM;  /* clause result */
A68_504  SCABSIM;  /* OPERATORS - dynamic generator */
{ 
SCABSIM.upb = (*NL(LBABSIM_upb)) ;
( NCABSIM_anonymous? A_VLOC(A68_503 ,SCABSIM): A_VHEAP(A68_503 ,SCABSIM) );
RCABSIM = SCABSIM;
} 
*ReturnedValue = (RCABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SLXASIM_generator(A68_BOOL  RLXASIM_anonymous, A68_177  *ReturnedValue)
{ 
A68_177  TLXASIM;  /* clause result */
A68_177  ULXASIM;  /* OPERATORS - dynamic generator */
{ 
ULXASIM.upb = 0 ;
( RLXASIM_anonymous? A_VLOC(A68_178 ,ULXASIM): A_VHEAP(A68_178 ,ULXASIM) );
TLXASIM = ULXASIM;
} 
*ReturnedValue = (TLXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JMXASIM_generator(A68_BOOL  IMXASIM_anonymous, A68_502  *ReturnedValue)
{ 
A68_502  KMXASIM;  /* clause result */
A68_502  LMXASIM;  /* OPERATORS - dynamic generator */
{ 
LMXASIM.upb = 0 ;
( IMXASIM_anonymous? A_VLOC(A68_500 *,LMXASIM): A_VHEAP(A68_500 *,LMXASIM) );
KMXASIM = LMXASIM;
} 
*ReturnedValue = (KMXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PMXASIM_generator(A68_BOOL  OMXASIM_anonymous, A68_509  *ReturnedValue)
{ 
A68_509  QMXASIM;  /* clause result */
A68_509  RMXASIM;  /* OPERATORS - dynamic generator */
{ 
RMXASIM.upb = 0 ;
( OMXASIM_anonymous? A_VLOC(A68_508 ,RMXASIM): A_VHEAP(A68_508 ,RMXASIM) );
QMXASIM = RMXASIM;
} 
*ReturnedValue = (QMXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XMXASIM_generator(A68_BOOL  WMXASIM_anonymous, A68_515  *ReturnedValue)
{ 
A68_515  YMXASIM;  /* clause result */
A68_515  ZMXASIM;  /* OPERATORS - dynamic generator */
{ 
ZMXASIM.upb = 0 ;
( WMXASIM_anonymous? A_VLOC(A68_514 ,ZMXASIM): A_VHEAP(A68_514 ,ZMXASIM) );
YMXASIM = ZMXASIM;
} 
*ReturnedValue = (YMXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ENXASIM_generator(A68_BOOL  DNXASIM_anonymous, A68_438  *ReturnedValue)
{ 
A68_438  FNXASIM;  /* clause result */
A68_438  GNXASIM;  /* OPERATORS - dynamic generator */
{ 
GNXASIM.upb = 0 ;
( DNXASIM_anonymous? A_VLOC(A68_VC ,GNXASIM): A_VHEAP(A68_VC ,GNXASIM) );
FNXASIM = GNXASIM;
} 
*ReturnedValue = (FNXASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NNXASIM_extendinstances(void)
{ 
A68_INT  ONXASIM_oldsize;
A68_INT  PNXASIM_newsize;
A68_511  RNXASIM_generator;   /* proc value of non-global proc */
A68_502  WNXASIM;  /* avoid structure result */
A68_502  XNXASIM_newinstances;
A68_502  YNXASIM;  /* OPERATORS - trim index */
A68_502  ZNXASIM;  /* YIELD */
A_PROC_ENTRY(extendinstances);
{ 
ONXASIM_oldsize = (*XLXASIM_instances).upb;
 /* line 300: */
PNXASIM_newsize = ((2*ONXASIM_oldsize)+1);
 /* line 302: */
A_CLOSURE( RNXASIM_generator, SNXASIM_generator, TNXASIM_generator );
(( TNXASIM_generator * ) ( RNXASIM_generator.nonlocals )) -> PNXASIM_newsize = PNXASIM_newsize;
A_CALLPROC(RNXASIM_generator,(A68_FALSE, &WNXASIM),(A68_FALSE, &WNXASIM,(RNXASIM_generator).nonlocals));
XNXASIM_newinstances = WNXASIM;
 /* line 303: */
ZNXASIM = A_VTRIM(YNXASIM,(XNXASIM_newinstances),A_VTSCRIPT(&(YNXASIM.upb),(XNXASIM_newinstances).upb,1,ONXASIM_oldsize)) ;
A_VASSIGN2((*XLXASIM_instances),ZNXASIM,A68_500 *);
 /* line 304: */
 /* line 305: */
(*XLXASIM_instances) = XNXASIM_newinstances;
} 
A_PROC_EXIT(extendinstances);
return;
} 
#undef NL
 /* line 314: */

A_STATIC A68_VOID  HOXASIM_addinstance(A68_INT  Noinputs, A68_INT  Fnno, A68_INT  Size, A68_INT  Outputoffset, A68_INT  Alienworkspace, A68_BITS  Sort, A68_BOOL  Probe)
{ 
A68_500  IOXASIM;  /* collateral clause result */
A68_519  KOXASIM_generator;   /* proc value of non-global proc */
A68_501  POXASIM;  /* avoid structure result */
A68_INT  QOXASIM;  /* YIELD */
A68_500 * ROXASIM;  /* YIELD */
A68_500 ** SOXASIM;  /* YIELD */
A_PROC_ENTRY(addinstance);
 /* line 315: */
 /* line 316: */
{ 
 /* line 318: */
if ( ((*YLXASIM_lastinstance)>=(*XLXASIM_instances).upb) )
{ 
NNXASIM_extendinstances();
} 
 /* line 320: */
 /* line 321: */
A_CLOSURE( KOXASIM_generator, LOXASIM_generator, MOXASIM_generator );
(( MOXASIM_generator * ) ( KOXASIM_generator.nonlocals )) -> Noinputs = Noinputs;
A_CALLPROC(KOXASIM_generator,(A68_FALSE, &POXASIM),(A68_FALSE, &POXASIM,(KOXASIM_generator).nonlocals));
IOXASIM.Inputs = POXASIM;
IOXASIM.Fnno = Fnno;
IOXASIM.Size = Size;
 /* line 322: */
IOXASIM.Outputoffset = Outputoffset;
IOXASIM.Alienworkspaceoffset = ZLXASIM_alienworkspacesize;
IOXASIM.Sort = Sort;
IOXASIM.Nextc = 0;
IOXASIM.Nexte = 0;
QOXASIM = (*YLXASIM_lastinstance)+=1 ;
ROXASIM = A_HEAP(A68_500 ) ;
(*ROXASIM) = IOXASIM ;
SOXASIM = (&A_VINDEX((*XLXASIM_instances),QOXASIM)) ;
(*SOXASIM) = ROXASIM;
 /* line 323: */
 /* line 324: */
if ( (A_LB_GE(Sort,OHCASIM_aliensort)&!Probe) )
{ 
 /* line 325: */
 /* line 326: */
ZLXASIM_alienworkspacesize+=Alienworkspace;
} 
} 
A_PROC_EXIT(addinstance);
return;
} 
#undef NL

A_STATIC A68_VOID  TOXASIM_extendmakes(void)
{ 
A68_INT  UOXASIM_oldsize;
A68_INT  VOXASIM_newsize;
A68_516  XOXASIM_generator;   /* proc value of non-global proc */
A68_515  CPXASIM;  /* avoid structure result */
A68_515  DPXASIM_newmakes;
A68_515  EPXASIM;  /* OPERATORS - trim index */
A68_515  FPXASIM;  /* YIELD */
A_PROC_ENTRY(extendmakes);
{ 
UOXASIM_oldsize = ANXASIM_makes.upb;
 /* line 333: */
VOXASIM_newsize = ((2*UOXASIM_oldsize)+1);
 /* line 335: */
A_CLOSURE( XOXASIM_generator, YOXASIM_generator, ZOXASIM_generator );
(( ZOXASIM_generator * ) ( XOXASIM_generator.nonlocals )) -> VOXASIM_newsize = VOXASIM_newsize;
A_CALLPROC(XOXASIM_generator,(A68_FALSE, &CPXASIM),(A68_FALSE, &CPXASIM,(XOXASIM_generator).nonlocals));
DPXASIM_newmakes = CPXASIM;
 /* line 336: */
FPXASIM = A_VTRIM(EPXASIM,(DPXASIM_newmakes),A_VTSCRIPT(&(EPXASIM.upb),(DPXASIM_newmakes).upb,1,UOXASIM_oldsize)) ;
A_VASSIGN2(ANXASIM_makes,FPXASIM,A68_514 );
 /* line 337: */
 /* line 338: */
ANXASIM_makes = DPXASIM_newmakes;
} 
A_PROC_EXIT(extendmakes);
return;
} 
#undef NL

A_STATIC A68_INT  IPXASIM_addmake(A68_INT  Fn, A68_INT  Instance)
{ 
A68_32  JPXASIM;  /* avoid structure result */
A68_32  KPXASIM_sizes;
A68_519  MPXASIM_generator;   /* proc value of non-global proc */
A68_501  RPXASIM;  /* avoid structure result */
A68_501  SPXASIM_inputs;
A68_499 * TPXASIM_input;
A68_INT  UPXASIM;  /* forall loop counter */
A68_499  VPXASIM;  /* collateral clause result */
A68_514  WPXASIM;  /* collateral clause result */
A68_INT  XPXASIM;  /* YIELD */
A68_514 * YPXASIM;  /* YIELD */
A68_INT  ZPXASIM;  /* clause result */
A_PROC_ENTRY(addmake);
 /* line 347: */
 /* line 348: */
{ 
 /* line 350: */
if ( (CNXASIM_lastmake>=ANXASIM_makes.upb) )
{ 
TOXASIM_extendmakes();
} 
 /* line 351: */
QUCASIM_lookupinputsizes( Fn, &JPXASIM );
KPXASIM_sizes = JPXASIM;
 /* line 353: */
A_CLOSURE( MPXASIM_generator, NPXASIM_generator, OPXASIM_generator );
(( OPXASIM_generator * ) ( MPXASIM_generator.nonlocals )) -> KPXASIM_sizes = KPXASIM_sizes;
A_CALLPROC(MPXASIM_generator,(A68_FALSE, &RPXASIM),(A68_FALSE, &RPXASIM,(MPXASIM_generator).nonlocals));
SPXASIM_inputs = RPXASIM;
 /* line 354: */
UPXASIM = SPXASIM_inputs.upb -1;
TPXASIM_input = SPXASIM_inputs.data;
for (;UPXASIM-- >= 0;
(TPXASIM_input++
) )
{
VPXASIM.Inst = (-1);
VPXASIM.Offset = (-1);
(*TPXASIM_input) = VPXASIM;
}
 /* line 355: */
WPXASIM.Fn = Fn;
WPXASIM.Instance = Instance;
WPXASIM.Inputs = SPXASIM_inputs;
XPXASIM = CNXASIM_lastmake+=1 ;
YPXASIM = (&A_VINDEX(ANXASIM_makes,XPXASIM)) ;
(*YPXASIM) = WPXASIM;
 /* line 356: */
 /* line 357: */
ZPXASIM = CNXASIM_lastmake;
} 
A_PROC_EXIT(addmake);
return( ZPXASIM );
} 
#undef NL

A_STATIC A68_INT  CQXASIM_findmake(A68_INT  Parentfn, A68_INT  Instance)
{ 
A68_32  DQXASIM;  /* avoid structure result */
A68_32  EQXASIM_expansion;
A68_INT  FQXASIM_lwb;
A68_INT  GQXASIM_upb;
A68_INT  HQXASIM_mid;
A68_INT  IQXASIM;  /* YIELD */
A68_INT  JQXASIM_midinstance;
A68_INT  KQXASIM_ans;
A68_INT  NQXASIM;  /* clause result */
A_PROC_ENTRY(findmake);
 /* line 364: */
 /* line 365: */
{ 
GUCASIM_lookupexpansion( Parentfn, &DQXASIM );
EQXASIM_expansion = DQXASIM;
 /* line 366: */
FQXASIM_lwb = 1;
 /* line 367: */
GQXASIM_upb = EQXASIM_expansion.upb;
 /* line 368: */
for ( ;; )
{ 
 /* line 369: */
if ( !((FQXASIM_lwb<GQXASIM_upb)) ) break;
HQXASIM_mid = ((FQXASIM_lwb+GQXASIM_upb)/2);
 /* line 370: */
IQXASIM = (*(&A_VINDEX(EQXASIM_expansion,HQXASIM_mid))) ;
JQXASIM_midinstance = (*(&((&A_VINDEX(ANXASIM_makes,IQXASIM))->Instance)));
 /* line 371: */
 /* line 372: */
if ( (Instance<JQXASIM_midinstance) )
{ 
 /* line 373: */
GQXASIM_upb = (HQXASIM_mid-1);
} 
else
{ 
 /* line 374: */
if ( (Instance>JQXASIM_midinstance) )
{ 
 /* line 375: */
 /* line 376: */
FQXASIM_lwb = (HQXASIM_mid+1);
} 
else
{ 
 /* line 377: */
 /* line 378: */
FQXASIM_lwb = GQXASIM_upb = HQXASIM_mid;
} 
} 
}
 /* line 379: */
KQXASIM_ans = (*(&A_VINDEX(EQXASIM_expansion,FQXASIM_lwb)));
 /* line 380: */
 /* line 381: */
if ( ((*(&((&A_VINDEX(ANXASIM_makes,KQXASIM_ans))->Instance)))!=Instance) )
{ 
 /* line 382: */
NKDAOST_sysfault(MQXASIM);
} 
 /* line 383: */
 /* line 384: */
NQXASIM = KQXASIM_ans;
} 
A_PROC_EXIT(findmake);
return( NQXASIM );
} 
#undef NL

A_STATIC A68_VOID  SQXASIM_addconnection(A68_INT  Srcinst, A68_INT  Srcoffset, A68_INT  Destmake, A68_INT  Destipno)
{ 
A68_499  TQXASIM;  /* collateral clause result */
A68_501  UQXASIM;  /* OPERATORS - simple index */
A68_499 * VQXASIM;  /* YIELD */
A_PROC_ENTRY(addconnection);
 /* line 392: */
TQXASIM.Inst = Srcinst;
TQXASIM.Offset = Srcoffset;
UQXASIM = (*(&((&A_VINDEX(ANXASIM_makes,Destmake))->Inputs))) ;
VQXASIM = (&A_VINDEX(UQXASIM,Destipno)) ;
(*VQXASIM) = TQXASIM;
A_PROC_EXIT(addconnection);
return;
} 
#undef NL

A_STATIC A68_VOID  WQXASIM_extendconstants(void)
{ 
A68_INT  XQXASIM_oldsize;
A68_INT  YQXASIM_newsize;
A68_517  ARXASIM_generator;   /* proc value of non-global proc */
A68_438  FRXASIM;  /* avoid structure result */
A68_438  GRXASIM_newconstants;
A68_438  HRXASIM;  /* OPERATORS - trim index */
A68_438  IRXASIM;  /* YIELD */
A_PROC_ENTRY(extendconstants);
{ 
XQXASIM_oldsize = HNXASIM_constants.upb;
 /* line 399: */
YQXASIM_newsize = ((2*XQXASIM_oldsize)+1);
 /* line 401: */
A_CLOSURE( ARXASIM_generator, BRXASIM_generator, CRXASIM_generator );
(( CRXASIM_generator * ) ( ARXASIM_generator.nonlocals )) -> YQXASIM_newsize = YQXASIM_newsize;
A_CALLPROC(ARXASIM_generator,(A68_FALSE, &FRXASIM),(A68_FALSE, &FRXASIM,(ARXASIM_generator).nonlocals));
GRXASIM_newconstants = FRXASIM;
 /* line 402: */
IRXASIM = A_VTRIM(HRXASIM,(GRXASIM_newconstants),A_VTSCRIPT(&(HRXASIM.upb),(GRXASIM_newconstants).upb,1,XQXASIM_oldsize)) ;
A_VASSIGN2(HNXASIM_constants,IRXASIM,A68_VC );
 /* line 403: */
 /* line 404: */
HNXASIM_constants = GRXASIM_newconstants;
} 
A_PROC_EXIT(extendconstants);
return;
} 
#undef NL

A_STATIC A68_INT  KRXASIM_addconstant(A68_VC  Constant)
{ 
A68_INT  LRXASIM;  /* YIELD */
A68_VC * MRXASIM;  /* YIELD */
A68_INT  NRXASIM;  /* clause result */
A_PROC_ENTRY(addconstant);
 /* line 411: */
 /* line 412: */
{ 
 /* line 414: */
if ( (JNXASIM_lastconstant>=HNXASIM_constants.upb) )
{ 
WQXASIM_extendconstants();
} 
 /* line 415: */
LRXASIM = JNXASIM_lastconstant+=1 ;
MRXASIM = (&A_VINDEX(HNXASIM_constants,LRXASIM)) ;
(*MRXASIM) = Constant;
 /* line 416: */
 /* line 417: */
NRXASIM = JNXASIM_lastconstant;
} 
A_PROC_EXIT(addconstant);
return( NRXASIM );
} 
#undef NL

A_STATIC A68_VOID  ORXASIM_extendbreaks(void)
{ 
A68_INT  PRXASIM_oldsize;
A68_INT  QRXASIM_newsize;
A68_512  SRXASIM_generator;   /* proc value of non-global proc */
A68_509  XRXASIM;  /* avoid structure result */
A68_509  YRXASIM_newbreaks;
A68_509  ZRXASIM;  /* OPERATORS - trim index */
A68_509  ASXASIM;  /* YIELD */
A_PROC_ENTRY(extendbreaks);
{ 
PRXASIM_oldsize = (*FMXASIM_breaks).upb;
 /* line 424: */
QRXASIM_newsize = ((2*PRXASIM_oldsize)+1);
 /* line 426: */
A_CLOSURE( SRXASIM_generator, TRXASIM_generator, URXASIM_generator );
(( URXASIM_generator * ) ( SRXASIM_generator.nonlocals )) -> QRXASIM_newsize = QRXASIM_newsize;
A_CALLPROC(SRXASIM_generator,(A68_FALSE, &XRXASIM),(A68_FALSE, &XRXASIM,(SRXASIM_generator).nonlocals));
YRXASIM_newbreaks = XRXASIM;
 /* line 427: */
ASXASIM = A_VTRIM(ZRXASIM,(YRXASIM_newbreaks),A_VTSCRIPT(&(ZRXASIM.upb),(YRXASIM_newbreaks).upb,1,PRXASIM_oldsize)) ;
A_VASSIGN2((*FMXASIM_breaks),ASXASIM,A68_508 );
 /* line 428: */
 /* line 429: */
(*FMXASIM_breaks) = YRXASIM_newbreaks;
} 
A_PROC_EXIT(extendbreaks);
return;
} 
#undef NL

A_STATIC A68_INT  ESXASIM_addbreak(A68_BITS  Sort, A68_INT  Sourceinst, A68_207  Oldfanout)
{ 
A68_508  FSXASIM;  /* collateral clause result */
A68_INT  GSXASIM;  /* YIELD */
A68_508 * HSXASIM;  /* YIELD */
A68_INT  ISXASIM;  /* clause result */
A_PROC_ENTRY(addbreak);
 /* line 437: */
 /* line 438: */
{ 
 /* line 440: */
if ( ((*GMXASIM_lastbreak)>=(*FMXASIM_breaks).upb) )
{ 
ORXASIM_extendbreaks();
} 
 /* line 441: */
FSXASIM.Sort = Sort;
FSXASIM.Sourceinst = Sourceinst;
FSXASIM.Fanout = Oldfanout;
GSXASIM = (*GMXASIM_lastbreak)+=1 ;
HSXASIM = (&A_VINDEX((*FMXASIM_breaks),GSXASIM)) ;
(*HSXASIM) = FSXASIM;
 /* line 442: */
 /* line 443: */
ISXASIM = ((*YLXASIM_lastinstance)+(*GMXASIM_lastbreak));
} 
A_PROC_EXIT(addbreak);
return( ISXASIM );
} 
#undef NL

A_STATIC A68_VOID  KSXASIM_makefanoutlists(A68_523  Fanoutlists)
{ 
A68_INT  LSXASIM_i;
A68_INT  MSXASIM;  /* to part of loop */
A68_507 ** NSXASIM;  /* YIELD */
A68_INT  OSXASIM_i;
A68_INT  PSXASIM;  /* to part of loop */
A68_INT  QSXASIM_j;
A68_INT  RSXASIM;  /* to part of loop */
A68_501  SSXASIM;  /* OPERATORS - simple index */
A68_INT  TSXASIM_feed;
A68_507 ** USXASIM_this;
A68_BOOL  VSXASIM;  /* optbool result */
A68_507  WSXASIM;  /* collateral clause result */
A68_507 * XSXASIM;  /* YIELD */
A_PROC_ENTRY(makefanoutlists);
 /* line 464: */
 /* line 465: */
{ 
MSXASIM = (*YLXASIM_lastinstance);
for ( LSXASIM_i = 1;
LSXASIM_i <= MSXASIM;
LSXASIM_i += 1 )
{ 
 /* line 466: */
 /* line 467: */
NSXASIM = (&A_VINDEX(Fanoutlists,LSXASIM_i)) ;
(*NSXASIM) = DMXASIM_nilfanoutlist;
}
 /* line 468: */
PSXASIM = (*XLXASIM_instances).upb;
for ( OSXASIM_i = 1;
OSXASIM_i <= PSXASIM;
OSXASIM_i += 1 )
{ 
 /* line 469: */
 /* line 470: */
if ( ((*(&((*(&A_VINDEX((*XLXASIM_instances),OSXASIM_i)))->Sort)))!=HHCASIM_compound) )
{ 
RSXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),OSXASIM_i)))->Inputs))).upb;
for ( QSXASIM_j = 1;
QSXASIM_j <= RSXASIM;
QSXASIM_j += 1 )
{ 
 /* line 471: */
SSXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),OSXASIM_i)))->Inputs))) ;
TSXASIM_feed = (*(&((&A_VINDEX(SSXASIM,QSXASIM_j))->Inst)));
 /* line 472: */
 /* line 473: */
if ( (TSXASIM_feed!=0) )
{ 
USXASIM_this = (&A_VINDEX(Fanoutlists,TSXASIM_feed));
 /* line 474: */
VSXASIM = ((*USXASIM_this)==DMXASIM_nilfanoutlist);
if ( ! VSXASIM )
{VSXASIM = ((*(&((*USXASIM_this)->Sink)))!=OSXASIM_i);
}
 /* line 477: */
if ( VSXASIM )
{ 
WSXASIM.Sink = OSXASIM_i;
 /* line 478: */
WSXASIM.Tail = (*USXASIM_this);
 /* line 479: */
 /* line 480: */
XSXASIM = A_HEAP(A68_507 ) ;
(*XSXASIM) = WSXASIM ;
(*USXASIM_this) = XSXASIM;
} 
} 
}
 /* line 481: */
 /* line 482: */
} 
}
 /* line 483: */
} 
A_PROC_EXIT(makefanoutlists);
return;
} 
#undef NL

A_STATIC A68_VOID  YSXASIM_makefanoutarrays(void)
{ 
A68_INT  ZSXASIM_i;
A68_INT  ATXASIM;  /* to part of loop */
A68_INT * BTXASIM;  /* YIELD */
A68_523  HTXASIM;  /* avoid structure result */
A68_523  GTXASIM_fanoutlists;
A68_INT  ITXASIM_i;
A68_INT  JTXASIM;  /* to part of loop */
A68_INT  KTXASIM_size;
A68_507 * LTXASIM_scan;
A68_33  NTXASIM_generator;   /* proc value of non-global proc */
A68_32  STXASIM;  /* avoid structure result */
A68_32 * TTXASIM;  /* YIELD */
A68_32  UTXASIM;  /* OPERATORS - simple index */
A68_INT * VTXASIM;  /* YIELD */
A68_INT  WTXASIM;  /* YIELD */
A68_INT * XTXASIM;  /* YIELD */
A_PROC_ENTRY(makefanoutarrays);
{ 
ATXASIM = (*EMXASIM_fanouts).upb;
for ( ZSXASIM_i = 1;
ZSXASIM_i <= ATXASIM;
ZSXASIM_i += 1 )
{ 
 /* line 498: */
 /* line 499: */
BTXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),ZSXASIM_i))->Truepredecessors)) ;
(*BTXASIM) = 0;
}
 /* line 500: */
DTXASIM_generator( A68_TRUE, &HTXASIM );
GTXASIM_fanoutlists = HTXASIM;
 /* line 501: */
KSXASIM_makefanoutlists(GTXASIM_fanoutlists);
 /* line 502: */
JTXASIM = GTXASIM_fanoutlists.upb;
for ( ITXASIM_i = 1;
ITXASIM_i <= JTXASIM;
ITXASIM_i += 1 )
{ 
 /* line 503: */
KTXASIM_size = 0;
 /* line 504: */
LTXASIM_scan = (*(&A_VINDEX(GTXASIM_fanoutlists,ITXASIM_i)));
 /* line 505: */
for ( ;; )
{ 
 /* line 506: */
if ( !((LTXASIM_scan!=DMXASIM_nilfanoutlist)) ) break;
KTXASIM_size+=1;
 /* line 507: */
 /* line 508: */
LTXASIM_scan = (*(&(LTXASIM_scan->Tail)));
}
 /* line 510: */
A_CLOSURE( NTXASIM_generator, OTXASIM_generator, PTXASIM_generator );
(( PTXASIM_generator * ) ( NTXASIM_generator.nonlocals )) -> KTXASIM_size = (&KTXASIM_size);
A_CALLPROC(NTXASIM_generator,(A68_FALSE, &STXASIM),(A68_FALSE, &STXASIM,(NTXASIM_generator).nonlocals));
TTXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),ITXASIM_i))->Successors)) ;
(*TTXASIM) = STXASIM;
 /* line 511: */
LTXASIM_scan = (*(&A_VINDEX(GTXASIM_fanoutlists,ITXASIM_i)));
 /* line 512: */
for ( ;; )
{ 
 /* line 513: */
if ( !((LTXASIM_scan!=DMXASIM_nilfanoutlist)) ) break;
UTXASIM = (*(&((&A_VINDEX((*EMXASIM_fanouts),ITXASIM_i))->Successors))) ;
VTXASIM = (&A_VINDEX(UTXASIM,KTXASIM_size)) ;
(*VTXASIM) = (*(&(LTXASIM_scan->Sink)));
 /* line 514: */
WTXASIM = (*(&(LTXASIM_scan->Sink))) ;
XTXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),WTXASIM))->Truepredecessors)) ;
(*XTXASIM)+=1;
 /* line 515: */
KTXASIM_size-=1;
 /* line 516: */
 /* line 517: */
LTXASIM_scan = (*(&(LTXASIM_scan->Tail)));
}
 /* line 518: */
}
 /* line 519: */
} 
A_PROC_EXIT(makefanoutarrays);
return;
} 
#undef NL

A_STATIC A68_VOID  YTXASIM_makefanouts(void)
{ 
A68_502  ZTXASIM;  /* OPERATORS - trim index */
A68_209  EUXASIM;  /* avoid structure result */
A68_INT  FUXASIM_i;
A68_INT  GUXASIM;  /* to part of loop */
A68_BITS  HUXASIM;  /* ADICOPS - >= */
A68_INT * IUXASIM;  /* YIELD */
A68_INT * JUXASIM;  /* YIELD */
A_PROC_ENTRY(makefanouts);
{ 
(*XLXASIM_instances) = A_VTRIM(ZTXASIM,((*XLXASIM_instances)),A_VTSCRIPT(&(ZTXASIM.upb),((*XLXASIM_instances)).upb,1,(*YLXASIM_lastinstance)));
 /* line 539: */
BUXASIM_generator( A68_FALSE, &EUXASIM );
(*EMXASIM_fanouts) = EUXASIM;
 /* line 540: */
YSXASIM_makefanoutarrays();
 /* line 541: */
GUXASIM = (*YLXASIM_lastinstance);
for ( FUXASIM_i = 1;
FUXASIM_i <= GUXASIM;
FUXASIM_i += 1 )
{ 
 /* line 542: */
 /* line 543: */
HUXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),FUXASIM_i)))->Sort))) ;
if ( !A_LB_GE(HUXASIM,KHCASIM_eventhandling) )
{ 
 /* line 544: */
 /* line 545: */
IUXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),FUXASIM_i))->Predecessors)) ;
(*IUXASIM) = 0;
} 
else
{ 
 /* line 546: */
 /* line 547: */
JUXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),FUXASIM_i))->Predecessors)) ;
(*JUXASIM) = (*(&((&A_VINDEX((*EMXASIM_fanouts),FUXASIM_i))->Truepredecessors)));
} 
}
 /* line 548: */
} 
A_PROC_EXIT(makefanouts);
return;
} 
#undef NL

A_STATIC A68_VOID  KUXASIM_remakepredecessors(void)
{ 
A68_INT  LUXASIM_i;
A68_INT  MUXASIM;  /* to part of loop */
A68_BITS  NUXASIM;  /* ADICOPS - >= */
A68_INT * OUXASIM;  /* YIELD */
A68_INT * PUXASIM;  /* YIELD */
A_PROC_ENTRY(remakepredecessors);
MUXASIM = (*YLXASIM_lastinstance);
for ( LUXASIM_i = 1;
LUXASIM_i <= MUXASIM;
LUXASIM_i += 1 )
{ 
 /* line 562: */
 /* line 563: */
NUXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),LUXASIM_i)))->Sort))) ;
if ( !A_LB_GE(NUXASIM,IHCASIM_combinatorial) )
{ 
 /* line 564: */
 /* line 565: */
OUXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),LUXASIM_i))->Predecessors)) ;
(*OUXASIM) = 0;
} 
else
{ 
 /* line 566: */
 /* line 567: */
PUXASIM = (&((&A_VINDEX((*EMXASIM_fanouts),LUXASIM_i))->Predecessors)) ;
(*PUXASIM) = (*(&((&A_VINDEX((*EMXASIM_fanouts),LUXASIM_i))->Truepredecessors)));
} 
}
A_PROC_EXIT(remakepredecessors);
return;
} 
#undef NL

A_STATIC A68_VOID  TUXASIM_makeinstance(A68_INT  Makeno, A68_INT  Parentinstance, A68_BOOL  Probe)
{ 
A68_514  UUXASIM_make;
A68_INT  VUXASIM_instanceno;
A68_INT  WUXASIM_fnno;
A68_501  XUXASIM_inputs;
A68_175  YUXASIM;  /* avoid structure result */
A68_175  ZUXASIM_shape;
A68_176  AVXASIM;  /* avoid structure result */
A68_176  BVXASIM_alienshape;
A68_INT  CVXASIM_i;
A68_INT  DVXASIM;  /* to part of loop */
A68_INT  EVXASIM_si;
A68_INT  FVXASIM_so;
A68_499  GVXASIM;  /* collateral clause result */
A68_501  HVXASIM;  /* OPERATORS - simple index */
A68_499 * IVXASIM;  /* YIELD */
A68_501  JVXASIM;  /* OPERATORS - simple index */
A68_501  KVXASIM;  /* OPERATORS - simple index */
A68_INT  LVXASIM;  /* YIELD */
A68_499 * MVXASIM;  /* YIELD */
A68_32  NVXASIM;  /* avoid structure result */
A68_32  OVXASIM_expansion;
A68_INT  PVXASIM_i;
A68_INT  QVXASIM;  /* to part of loop */
A_PROC_ENTRY(makeinstance);
 /* line 585: */
 /* line 586: */
{ 
UUXASIM_make = (*(&A_VINDEX(ANXASIM_makes,Makeno)));
 /* line 588: */
VUXASIM_instanceno = (UUXASIM_make.Instance+Parentinstance);
 /* line 589: */
WUXASIM_fnno = UUXASIM_make.Fn;
 /* line 590: */
XUXASIM_inputs = UUXASIM_make.Inputs;
 /* line 591: */
DWCASIM_lookupshape( WUXASIM_fnno, &YUXASIM );
ZUXASIM_shape = YUXASIM;
 /* line 592: */
 /* line 593: */
GWCASIM_lookupalienshape( WUXASIM_fnno, &AVXASIM );
BVXASIM_alienshape = AVXASIM;
 /* line 594: */
 /* line 595: */
HOXASIM_addinstance(XUXASIM_inputs.upb, WUXASIM_fnno, ZUXASIM_shape.Size, ZUXASIM_shape.Offset, BVXASIM_alienshape.Workspace, ZUXASIM_shape.Sort, Probe);
 /* line 596: */
 /* line 597: */
if ( !Probe )
{ 
 /* line 598: */
QQCASIM_addexampleinstance(WUXASIM_fnno, VUXASIM_instanceno);
} 
 /* line 600: */
DVXASIM = XUXASIM_inputs.upb;
for ( CVXASIM_i = 1;
CVXASIM_i <= DVXASIM;
CVXASIM_i += 1 )
{ 
 /* line 601: */
EVXASIM_si = ((*(&((&A_VINDEX(XUXASIM_inputs,CVXASIM_i))->Inst)))+Parentinstance);
 /* line 602: */
FVXASIM_so = (*(&((&A_VINDEX(XUXASIM_inputs,CVXASIM_i))->Offset)));
 /* line 603: */
 /* line 604: */
if ( (FVXASIM_so>=0) )
{ 
GVXASIM.Inst = EVXASIM_si;
 /* line 605: */
GVXASIM.Offset = FVXASIM_so;
 /* line 606: */
HVXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),VUXASIM_instanceno)))->Inputs))) ;
IVXASIM = (&A_VINDEX(HVXASIM,CVXASIM_i)) ;
(*IVXASIM) = GVXASIM;
} 
else
{ 
 /* line 607: */
 /* line 608: */
 /* line 609: */
JVXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),VUXASIM_instanceno)))->Inputs))) ;
KVXASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),EVXASIM_si)))->Inputs))) ;
LVXASIM = (((-FVXASIM_so)-GENASIM_sizeunit)/DENASIM_ws) ;
MVXASIM = (&A_VINDEX(JVXASIM,CVXASIM_i)) ;
(*MVXASIM) = (*(&A_VINDEX(KVXASIM,LVXASIM)));
} 
}
 /* line 611: */
GUCASIM_lookupexpansion( WUXASIM_fnno, &NVXASIM );
OVXASIM_expansion = NVXASIM;
 /* line 612: */
QVXASIM = OVXASIM_expansion.upb;
for ( PVXASIM_i = 1;
PVXASIM_i <= QVXASIM;
PVXASIM_i += 1 )
{ 
 /* line 613: */
 /* line 614: */
TUXASIM_makeinstance((*(&A_VINDEX(OVXASIM_expansion,PVXASIM_i))), VUXASIM_instanceno, Probe);
}
 /* line 615: */
} 
A_PROC_EXIT(makeinstance);
return;
} 
#undef NL

A_STATIC A68_INT  TVXASIM_constructinstanceptrs(A68_INT  Start, A68_BOOL  Isprobe)
{ 
A68_INT  UVXASIM_size;
A68_529  WVXASIM_generator;   /* proc value of non-global proc */
A68_504  BWXASIM;  /* avoid structure result */
A68_INT  CWXASIM_i;
A68_INT  DWXASIM;  /* to part of loop */
A68_500 * EWXASIM_instance;
A68_503  FWXASIM;  /* collateral clause result */
A68_503 * GWXASIM;  /* YIELD */
A68_INT  HWXASIM;  /* clause result */
A68_INT  IWXASIM;  /* clause result */
A_PROC_ENTRY(constructinstanceptrs);
 /* line 634: */
 /* line 636: */
{ 
UVXASIM_size = Start;
 /* line 638: */
 /* line 639: */
A_CLOSURE( WVXASIM_generator, XVXASIM_generator, YVXASIM_generator );
A_CALLPROC(WVXASIM_generator,(A68_FALSE, &BWXASIM),(A68_FALSE, &BWXASIM,(WVXASIM_generator).nonlocals));
(*AMXASIM_instanceptrs) = BWXASIM;
 /* line 640: */
DWXASIM = (*YLXASIM_lastinstance);
for ( CWXASIM_i = 1;
CWXASIM_i <= DWXASIM;
CWXASIM_i += 1 )
{ 
 /* line 641: */
EWXASIM_instance = (*(&A_VINDEX((*XLXASIM_instances),CWXASIM_i)));
 /* line 642: */
FWXASIM.Fnno = (*(&(EWXASIM_instance->Fnno)));
FWXASIM.Offset = UVXASIM_size;
GWXASIM = (&A_VINDEX((*AMXASIM_instanceptrs),CWXASIM_i)) ;
(*GWXASIM) = FWXASIM;
 /* line 643: */
 /* line 644: */
 /* line 646: */
if ( Isprobe )
{ 
 /* line 647: */
HWXASIM = DENASIM_ws;
} 
else
{ 
 /* line 648: */
if ( (CWXASIM_i==MNXASIM_cpinstanceno) )
{ 
 /* line 649: */
 /* line 650: */
HWXASIM = (DENASIM_ws*(2+LNXASIM_maxinputfanout));
} 
else
{ 
 /* line 651: */
 /* line 652: */
 /* line 653: */
HWXASIM = (DENASIM_ws*(2+(*(&((&A_VINDEX((*EMXASIM_fanouts),CWXASIM_i))->Successors))).upb));
} 
} 
UVXASIM_size+=(((*(&(EWXASIM_instance->Size)))+DENASIM_ws)+HWXASIM);
}
 /* line 654: */
 /* line 655: */
IWXASIM = UVXASIM_size;
} 
A_PROC_EXIT(constructinstanceptrs);
return( IWXASIM );
} 
#undef NL
 /* line 683: */
 /* line 684: */
 /* line 685: */
 /* line 686: */
 /* line 687: */

A_STATIC A68_INT  RWXASIM_constructmemory(A68_BOOL  Isprobe, A68_INT  Totalsize, A68_INT  Size, A68_INT  Lastinstance, A68_502  Instances, A68_209  Fanouts, A68_504  Instanceptrs, A68_36  Flt)
{ 
A68_INT  SWXASIM_circuitbase;
A68_VC  TWXASIM_memory;
A68_INT  UWXASIM_dynamic;
A68_VC  VWXASIM;  /* avoid structure result */
A68_VC  WWXASIM;  /* avoid structure result */
A68_INT  XWXASIM_j;
A68_INT  YWXASIM;  /* to part of loop */
A68_500 * ZWXASIM_thisinstance;
A68_INT  AXXASIM_address;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} BXXASIM; 
A68_INT * CXXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} DXXASIM; 
A68_INT * EXXASIM;  /* YIELD */
A68_INT  FXXASIM_k;
A68_INT  GXXASIM;  /* to part of loop */
A68_501  HXXASIM;  /* OPERATORS - simple index */
A68_499  IXXASIM_input;
A68_INT  JXXASIM;  /* YIELD */
A68_INT  KXXASIM_ipptr;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} LXXASIM; 
A68_INT * MXXASIM;  /* YIELD */
A68_BITS  NXXASIM;  /* ADICOPS - >= */
A68_176  OXXASIM;  /* avoid structure result */
A68_176  PXXASIM_alienshape;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} QXXASIM; 
A68_INT * RXXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} SXXASIM; 
A68_INT * TXXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} UXXASIM; 
A68_INT * VXXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} WXXASIM; 
A68_INT * XXXASIM;  /* YIELD */
A68_INT  YXXASIM_wo;
A68_VC  ZXXASIM;  /* avoid structure result */
A68_INT  AYXASIM;  /* clause result */
A68_INT  BYXASIM_workspaceoffset;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} CYXASIM; 
A68_INT * DYXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} EYXASIM; 
A68_INT * FYXASIM;  /* YIELD */
A68_32  GYXASIM;  /* avoid structure result */
A68_32  HYXASIM_constantnos;
A68_INT  IYXASIM_i;
A68_INT  JYXASIM;  /* to part of loop */
A68_INT  KYXASIM;  /* YIELD */
A68_VC  LYXASIM_constant;
A68_INT  MYXASIM_thissize;
A68_VC  NYXASIM;  /* OPERATORS - trim index */
A68_VC  OYXASIM;  /* YIELD */
A68_BITS  PYXASIM;  /* ADICOPS - >= */
A68_INT  QYXASIM_datasize;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} RYXASIM; 
A68_INT  SYXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} TYXASIM; 
A68_INT * UYXASIM;  /* YIELD */
A68_INT * VYXASIM;  /* YIELD */
A68_BOOL  WYXASIM;  /* optbool result */
A68_BOOL  XYXASIM;  /* optbool result */
A68_32  YYXASIM_successors;
A68_INT  ZYXASIM_fanoutlistsize;
A68_INT  AZXASIM_proberelocsizeaddress;
A68_INT  BZXASIM_fanoutlistaddress;
A68_VC  CZXASIM;  /* avoid structure result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} DZXASIM; 
A68_INT * EZXASIM;  /* YIELD */
A68_VC  FZXASIM;  /* clause result */
A68_VC  GZXASIM;  /* avoid structure result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} HZXASIM; 
A68_INT * IZXASIM;  /* YIELD */
A68_VC  JZXASIM_fanoutmemory;
A68_BOOL  KZXASIM_doneaunitdelfanout;
A68_INT  LZXASIM_fanoutsizeaddress;
A68_INT  MZXASIM_k;
A68_INT  NZXASIM;  /* to part of loop */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} OZXASIM; 
A68_INT  PZXASIM;  /* YIELD */
A68_INT * QZXASIM;  /* YIELD */
A68_BOOL  RZXASIM;  /* optbool result */
A68_INT  SZXASIM;  /* YIELD */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} TZXASIM; 
A68_INT * UZXASIM;  /* YIELD */
A68_INT  VZXASIM;  /* clause result */
A68_INT  WZXASIM_reallistsize;
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_INT *  destination;
} XZXASIM; 
A68_INT * YZXASIM;  /* YIELD */
A68_INT  ZZXASIM;  /* clause result */
A_PROC_ENTRY(constructmemory);
 /* line 688: */
 /* line 690: */
{ 
 /* line 691: */
 /* line 692: */
 /* line 702: */
if ( !Isprobe )
{ 
UWXASIM_dynamic = XSOASIM_minuseful;
 /* line 703: */
for ( ;; )
{ 
 /* line 704: */
if ( !((UWXASIM_dynamic<((Totalsize-Size)*2))) ) break;
UWXASIM_dynamic*=2;
}
 /* line 705: */
for ( ;; )
{ 
if ( !((UWXASIM_dynamic<(Totalsize/14))) ) break;
UWXASIM_dynamic*=2;
}
 /* line 707: */
SWXASIM_circuitbase = 0;
 /* line 708: */
HBNASIM_cgsetupspace( (Size+UWXASIM_dynamic), Flt, &VWXASIM );
TWXASIM_memory = VWXASIM;
 /* line 709: */
 /* line 710: */
 /* line 711: */
IXOASIM_initialiseammemory(Size, UWXASIM_dynamic);
} 
else
{ 
SWXASIM_circuitbase = KXOASIM_allocateammemory(Size);
 /* line 712: */
 /* line 713: */
HCNASIM_cgpeek( Size, SWXASIM_circuitbase, &WWXASIM );
TWXASIM_memory = WWXASIM;
} 
 /* line 721: */
 /* line 724: */
YWXASIM = Lastinstance;
for ( XWXASIM_j = 1;
XWXASIM_j <= YWXASIM;
XWXASIM_j += 1 )
{ 
 /* line 725: */
ZWXASIM_thisinstance = (*(&A_VINDEX(Instances,XWXASIM_j)));
 /* line 726: */
AXXASIM_address = (1+(*(&((&A_VINDEX(Instanceptrs,XWXASIM_j))->Offset))));
 /* line 728: */
 /* line 730: */
if ( Isprobe )
{ 
 /* line 731: */
BXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
CXXASIM = (BXXASIM.destination) ;
(*CXXASIM) = 1;
} 
 /* line 733: */
AXXASIM_address+=GENASIM_sizeunit;
 /* line 735: */
DXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
EXXASIM = (DXXASIM.destination) ;
(*EXXASIM) = (*(&(ZWXASIM_thisinstance->Inputs))).upb;
 /* line 736: */
AXXASIM_address+=DENASIM_ws;
 /* line 738: */
GXXASIM = (*(&(ZWXASIM_thisinstance->Inputs))).upb;
for ( FXXASIM_k = 1;
FXXASIM_k <= GXXASIM;
FXXASIM_k += 1 )
{ 
 /* line 739: */
HXXASIM = (*(&(ZWXASIM_thisinstance->Inputs))) ;
IXXASIM_input = (*(&A_VINDEX(HXXASIM,FXXASIM_k)));
 /* line 740: */
 /* line 741: */
 /* line 742: */
 /* line 743: */
JXXASIM = IXXASIM_input.Inst ;
KXXASIM_ipptr = (((*(&((&A_VINDEX(Instanceptrs,JXXASIM))->Offset)))+IXXASIM_input.Offset)+SWXASIM_circuitbase);
 /* line 744: */
LXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
MXXASIM = (LXXASIM.destination) ;
(*MXXASIM) = KXXASIM_ipptr;
 /* line 745: */
 /* line 746: */
AXXASIM_address+=DENASIM_ws;
}
 /* line 750: */
 /* line 751: */
 /* line 753: */
NXXASIM = (*(&(ZWXASIM_thisinstance->Sort))) ;
if ( A_LB_GE(NXXASIM,OHCASIM_aliensort) )
{ 
GWCASIM_lookupalienshape( (*(&(ZWXASIM_thisinstance->Fnno))), &OXXASIM );
PXXASIM_alienshape = OXXASIM;
 /* line 754: */
QXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
RXXASIM = (QXXASIM.destination) ;
(*RXXASIM) = PXXASIM_alienshape.Declid;
 /* line 755: */
AXXASIM_address+=DENASIM_ws;
 /* line 756: */
SXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
TXXASIM = (SXXASIM.destination) ;
(*TXXASIM) = (*(&(ZWXASIM_thisinstance->Fnno)));
 /* line 757: */
AXXASIM_address+=DENASIM_ws;
 /* line 758: */
UXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
VXXASIM = (UXXASIM.destination) ;
(*VXXASIM) = PXXASIM_alienshape.History;
 /* line 759: */
AXXASIM_address+=DENASIM_ws;
 /* line 760: */
AXXASIM_address+=0;
 /* line 764: */
WXXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
XXXASIM = (WXXASIM.destination) ;
(*XXXASIM) = PXXASIM_alienshape.Workspace;
 /* line 765: */
AXXASIM_address+=DENASIM_ws;
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
if ( (PXXASIM_alienshape.Workspace>0) )
{ 
 /* line 770: */
if ( Isprobe )
{ 
YXXASIM_wo = KXOASIM_allocateammemory(PXXASIM_alienshape.Workspace);
 /* line 772: */
HCNASIM_cgpeek( Size, SWXASIM_circuitbase, &ZXXASIM );
TWXASIM_memory = ZXXASIM;
 /* line 773: */
 /* line 774: */
 /* line 776: */
AYXASIM = YXXASIM_wo;
} 
else
{ 
 /* line 778: */
 /* line 779: */
 /* line 781: */
AYXASIM = ((Size-ZLXASIM_alienworkspacesize)+(*(&(ZWXASIM_thisinstance->Alienworkspaceoffset))));
} 
} 
else
{ 
AYXASIM = 0;
} 
BYXASIM_workspaceoffset = AYXASIM;
 /* line 782: */
CYXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
DYXASIM = (CYXASIM.destination) ;
(*DYXASIM) = BYXASIM_workspaceoffset;
 /* line 783: */
AXXASIM_address+=DENASIM_ws;
 /* line 785: */
EYXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
FYXASIM = (EYXASIM.destination) ;
(*FYXASIM) = 0;
 /* line 786: */
 /* line 787: */
AXXASIM_address+=DENASIM_ws;
} 
 /* line 791: */
 /* line 792: */
LUCASIM_lookupconstantnos( (*(&(ZWXASIM_thisinstance->Fnno))), &GYXASIM );
HYXASIM_constantnos = GYXASIM;
 /* line 793: */
JYXASIM = HYXASIM_constantnos.upb;
for ( IYXASIM_i = 1;
IYXASIM_i <= JYXASIM;
IYXASIM_i += 1 )
{ 
 /* line 794: */
KYXASIM = (*(&A_VINDEX(HYXASIM_constantnos,IYXASIM_i))) ;
LYXASIM_constant = (*(&A_VINDEX(HNXASIM_constants,KYXASIM)));
 /* line 795: */
MYXASIM_thissize = LYXASIM_constant.upb;
 /* line 796: */
OYXASIM = A_VTRIM(NYXASIM,(TWXASIM_memory),A_VTSCRIPT(&(NYXASIM.upb),(TWXASIM_memory).upb,AXXASIM_address,((AXXASIM_address+MYXASIM_thissize)-1))) ;
A_VASSIGN2(LYXASIM_constant,OYXASIM,A68_CHAR );
 /* line 797: */
 /* line 798: */
AXXASIM_address+=MYXASIM_thissize;
}
 /* line 800: */
 /* line 803: */
PYXASIM = (*(&(ZWXASIM_thisinstance->Sort))) ;
if ( A_LB_GE(PYXASIM,NHCASIM_genericid) )
{ 
 /* line 804: */
QYXASIM_datasize = ((*(&(ZWXASIM_thisinstance->Size)))-(*(&(ZWXASIM_thisinstance->Outputoffset))));
 /* line 805: */
 /* line 806: */
 /* line 807: */
RYXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
SYXASIM = (AXXASIM_address+DENASIM_ws) ;
TYXASIM.source = (&A_VINDEX(TWXASIM_memory,SYXASIM)) ;
UYXASIM = (TYXASIM.destination) ;
VYXASIM = (RYXASIM.destination) ;
(*VYXASIM) = (*UYXASIM) = QYXASIM_datasize;
} 
 /* line 812: */
 /* line 813: */
WYXASIM = ((*(&(ZWXASIM_thisinstance->Sort)))!=HHCASIM_compound);
if ( WYXASIM )
{XYXASIM = Isprobe;
if ( ! XYXASIM )
{XYXASIM = (XWXASIM_j!=MNXASIM_cpinstanceno);
}
 /* line 814: */
WYXASIM = XYXASIM;
}
 /* line 815: */
if ( WYXASIM )
{ 
YYXASIM_successors = (*(&((&A_VINDEX(Fanouts,XWXASIM_j))->Successors)));
 /* line 816: */
AXXASIM_address = ((1+(*(&((&A_VINDEX(Instanceptrs,XWXASIM_j))->Offset))))+(*(&(ZWXASIM_thisinstance->Size))));
 /* line 820: */
ZYXASIM_fanoutlistsize = (YYXASIM_successors.upb+1);
 /* line 821: */
 /* line 822: */
 /* line 823: */
 /* line 827: */
if ( Isprobe )
{ 
AZXASIM_proberelocsizeaddress = (((AXXASIM_address-1)+DENASIM_ws)+SWXASIM_circuitbase);
 /* line 829: */
BZXASIM_fanoutlistaddress = KXOASIM_allocateammemory(((ZYXASIM_fanoutlistsize+1)*DENASIM_ws));
 /* line 830: */
HCNASIM_cgpeek( Size, SWXASIM_circuitbase, &CZXASIM );
TWXASIM_memory = CZXASIM;
 /* line 831: */
DZXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
EZXASIM = (DZXASIM.destination) ;
(*EZXASIM) = BZXASIM_fanoutlistaddress;
 /* line 833: */
AXXASIM_address = 1;
 /* line 834: */
 /* line 835: */
 /* line 838: */
HCNASIM_cgpeek( ((ZYXASIM_fanoutlistsize+1)*DENASIM_ws), BZXASIM_fanoutlistaddress, &GZXASIM );
FZXASIM = GZXASIM;
} 
else
{ 
HZXASIM.source = (&A_VINDEX(TWXASIM_memory,AXXASIM_address)) ;
IZXASIM = (HZXASIM.destination) ;
(*IZXASIM) = ((AXXASIM_address-1)+DENASIM_ws);
 /* line 839: */
AXXASIM_address+=DENASIM_ws;
 /* line 840: */
 /* line 841: */
FZXASIM = TWXASIM_memory;
} 
JZXASIM_fanoutmemory = FZXASIM;
 /* line 843: */
KZXASIM_doneaunitdelfanout = A68_FALSE;
 /* line 844: */
LZXASIM_fanoutsizeaddress = AXXASIM_address;
 /* line 845: */
NZXASIM = YYXASIM_successors.upb;
for ( MZXASIM_k = 1;
MZXASIM_k <= NZXASIM;
MZXASIM_k += 1 )
{ 
 /* line 846: */
AXXASIM_address+=DENASIM_ws;
 /* line 847: */
 /* line 848: */
OZXASIM.source = (&A_VINDEX(JZXASIM_fanoutmemory,AXXASIM_address)) ;
PZXASIM = (*(&A_VINDEX(YYXASIM_successors,MZXASIM_k))) ;
QZXASIM = (OZXASIM.destination) ;
(*QZXASIM) = (SWXASIM_circuitbase+(*(&((&A_VINDEX(Instanceptrs,PZXASIM))->Offset))));
 /* line 850: */
 /* line 851: */
RZXASIM = !KZXASIM_doneaunitdelfanout;
if ( RZXASIM )
{ /* line 852: */
SZXASIM = (*(&A_VINDEX(YYXASIM_successors,MZXASIM_k))) ;
RZXASIM = ((*(&((*(&A_VINDEX(Instances,SZXASIM)))->Sort)))==UHCASIM_unitdelay);
}
 /* line 853: */
if ( RZXASIM )
{ 
KZXASIM_doneaunitdelfanout = A68_TRUE;
 /* line 854: */
AXXASIM_address+=DENASIM_ws;
 /* line 855: */
 /* line 856: */
 /* line 857: */
TZXASIM.source = (&A_VINDEX(JZXASIM_fanoutmemory,AXXASIM_address)) ;
UZXASIM = (TZXASIM.destination) ;
(*UZXASIM) = XYOASIM_globalunitdelevent;
} 
}
 /* line 858: */
 /* line 859: */
 /* line 861: */
if ( KZXASIM_doneaunitdelfanout )
{ 
 /* line 862: */
VZXASIM = ZYXASIM_fanoutlistsize;
} 
else
{ 
 /* line 863: */
VZXASIM = (ZYXASIM_fanoutlistsize-1);
} 
WZXASIM_reallistsize = VZXASIM;
 /* line 865: */
XZXASIM.source = (&A_VINDEX(JZXASIM_fanoutmemory,LZXASIM_fanoutsizeaddress)) ;
YZXASIM = (XZXASIM.destination) ;
(*YZXASIM) = WZXASIM_reallistsize;
 /* line 866: */
 /* line 867: */
if ( Isprobe )
{ 
 /* line 868: */
 /* line 869: */
 /* line 870: */
OCNASIM_cgpokeint(WZXASIM_reallistsize, AZXASIM_proberelocsizeaddress);
} 
} 
}
 /* line 871: */
 /* line 872: */
ZZXASIM = SWXASIM_circuitbase;
} 
A_PROC_EXIT(constructmemory);
return( ZZXASIM );
} 
#undef NL

A_STATIC A68_INT  BAYASIM_constructbreaks(A68_INT  Last)
{ 
A68_INT  CAYASIM_newlast;
A68_VC  FAYASIM;  /* avoid structure result */
A68_VC  GAYASIM_genericidcode;
A68_INT  HAYASIM_genericidfnno;
A68_INT  IAYASIM_genericoutputoffset;
A68_511  KAYASIM_generator;   /* proc value of non-global proc */
A68_502  PAYASIM;  /* avoid structure result */
A68_502  QAYASIM_newinstances;
A68_502  RAYASIM;  /* OPERATORS - trim index */
A68_502  SAYASIM;  /* YIELD */
A68_526  UAYASIM_generator;   /* proc value of non-global proc */
A68_209  ZAYASIM;  /* avoid structure result */
A68_209  ABYASIM_newfanouts;
A68_209  BBYASIM;  /* OPERATORS - trim index */
A68_209  CBYASIM;  /* YIELD */
A68_INT  DBYASIM_i;
A68_INT  EBYASIM;  /* to part of loop */
A68_INT  FBYASIM_source;
A68_INT  GBYASIM_dest;
A68_INT  HBYASIM_sourceoffset;
A68_INT  IBYASIM_sourcesize;
A68_500  JBYASIM;  /* collateral clause result */
A68_519  LBYASIM_generator;   /* proc value of non-global proc */
A68_499  QBYASIM;  /* collateral clause result */
A68_501  RBYASIM;  /* avoid structure result */
A68_501  SBYASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_501  TBYASIM;  /* OPERATORS - assign op */
A68_500 * UBYASIM;  /* YIELD */
A68_500 ** VBYASIM;  /* YIELD */
A68_207 * WBYASIM;  /* YIELD */
A68_INT * XBYASIM;  /* YIELD */
A68_INT * YBYASIM;  /* YIELD */
A68_33  ACYASIM_generator;   /* proc value of non-global proc */
A68_32  FCYASIM;  /* avoid structure result */
A68_32  GCYASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  HCYASIM;  /* OPERATORS - assign op */
A68_32 * ICYASIM;  /* YIELD */
A68_INT * JCYASIM_succ;
A68_32  KCYASIM;  /* forall yield */
A68_INT  LCYASIM;  /* forall loop counter */
A68_499 * MCYASIM_ip;
A68_501  NCYASIM;  /* forall yield */
A68_INT  OCYASIM;  /* forall loop counter */
A68_INT * PCYASIM;  /* YIELD */
A68_INT  QCYASIM_trimoffset;
A68_INT * RCYASIM;  /* YIELD */
A68_INT  SCYASIM;  /* clause result */
A_PROC_ENTRY(constructbreaks);
 /* line 900: */
 /* line 901: */
{ 
CAYASIM_newlast = Last;
 /* line 902: */
RSCAOST_makeid( EAYASIM, &FAYASIM );
GAYASIM_genericidcode = FAYASIM;
 /* line 903: */
HAYASIM_genericidfnno = NRCASIM_lookupname(GAYASIM_genericidcode, 0, (-1));
 /* line 904: */
IAYASIM_genericoutputoffset = (GENASIM_sizeunit+(4*DENASIM_ws));
 /* line 906: */
A_CLOSURE( KAYASIM_generator, LAYASIM_generator, MAYASIM_generator );
A_CALLPROC(KAYASIM_generator,(A68_FALSE, &PAYASIM),(A68_FALSE, &PAYASIM,(KAYASIM_generator).nonlocals));
QAYASIM_newinstances = PAYASIM;
 /* line 907: */
SAYASIM = A_VTRIM(RAYASIM,(QAYASIM_newinstances),A_VTSCRIPT(&(RAYASIM.upb),(QAYASIM_newinstances).upb,1,(*YLXASIM_lastinstance))) ;
A_VASSIGN2((*XLXASIM_instances),SAYASIM,A68_500 *);
 /* line 908: */
(*XLXASIM_instances) = QAYASIM_newinstances;
 /* line 909: */
A_CLOSURE( UAYASIM_generator, VAYASIM_generator, WAYASIM_generator );
A_CALLPROC(UAYASIM_generator,(A68_FALSE, &ZAYASIM),(A68_FALSE, &ZAYASIM,(UAYASIM_generator).nonlocals));
ABYASIM_newfanouts = ZAYASIM;
 /* line 910: */
CBYASIM = A_VTRIM(BBYASIM,(ABYASIM_newfanouts),A_VTSCRIPT(&(BBYASIM.upb),(ABYASIM_newfanouts).upb,1,(*YLXASIM_lastinstance))) ;
A_VASSIGN2((*EMXASIM_fanouts),CBYASIM,A68_207 );
 /* line 911: */
(*EMXASIM_fanouts) = ABYASIM_newfanouts;
 /* line 912: */
EBYASIM = (*GMXASIM_lastbreak);
for ( DBYASIM_i = 1;
DBYASIM_i <= EBYASIM;
DBYASIM_i += 1 )
{ 
 /* line 913: */
FBYASIM_source = (*(&((&A_VINDEX((*FMXASIM_breaks),DBYASIM_i))->Sourceinst)));
 /* line 914: */
GBYASIM_dest = ((*YLXASIM_lastinstance)+DBYASIM_i);
 /* line 915: */
HBYASIM_sourceoffset = (*(&((*(&A_VINDEX((*XLXASIM_instances),FBYASIM_source)))->Outputoffset)));
 /* line 916: */
IBYASIM_sourcesize = ((*(&((*(&A_VINDEX((*XLXASIM_instances),FBYASIM_source)))->Size)))-HBYASIM_sourceoffset);
 /* line 918: */
 /* line 919: */
A_CLOSURE( LBYASIM_generator, MBYASIM_generator, NBYASIM_generator );
QBYASIM.Inst = FBYASIM_source;
QBYASIM.Offset = HBYASIM_sourceoffset;
 /* line 920: */
A_CALLPROC(LBYASIM_generator,(A68_FALSE, &RBYASIM),(A68_FALSE, &RBYASIM,(LBYASIM_generator).nonlocals));
TBYASIM = A_HVEC(SBYASIM,QBYASIM,A68_499 ) ;
A_VASSIGN2(TBYASIM,RBYASIM,A68_499 ) ;
JBYASIM.Inputs = RBYASIM;
JBYASIM.Fnno = HAYASIM_genericidfnno;
 /* line 921: */
JBYASIM.Size = (IAYASIM_genericoutputoffset+IBYASIM_sourcesize);
JBYASIM.Outputoffset = IAYASIM_genericoutputoffset;
JBYASIM.Alienworkspaceoffset = 0;
 /* line 922: */
JBYASIM.Sort = (*(&((&A_VINDEX((*FMXASIM_breaks),DBYASIM_i))->Sort)));
JBYASIM.Nextc = 0;
JBYASIM.Nexte = 0;
UBYASIM = A_HEAP(A68_500 ) ;
(*UBYASIM) = JBYASIM ;
VBYASIM = (&A_VINDEX((*XLXASIM_instances),GBYASIM_dest)) ;
(*VBYASIM) = UBYASIM;
 /* line 923: */
WBYASIM = (&A_VINDEX((*EMXASIM_fanouts),GBYASIM_dest)) ;
(*WBYASIM) = (*(&((&A_VINDEX((*FMXASIM_breaks),DBYASIM_i))->Fanout)));
 /* line 924: */
 /* line 927: */
if ( ((*(&((&A_VINDEX((*FMXASIM_breaks),DBYASIM_i))->Sort)))==SHCASIM_combinatorialloopbreak) )
{ 
XBYASIM = (&((*(&A_VINDEX((*XLXASIM_instances),CAYASIM_newlast)))->Nextc)) ;
(*XBYASIM) = GBYASIM_dest;
 /* line 928: */
 /* line 929: */
CAYASIM_newlast = GBYASIM_dest;
} 
 /* line 930: */
YBYASIM = (&((&A_VINDEX((*EMXASIM_fanouts),GBYASIM_dest))->Truepredecessors)) ;
(*YBYASIM) = 1;
 /* line 932: */
A_CLOSURE( ACYASIM_generator, BCYASIM_generator, CCYASIM_generator );
A_CALLPROC(ACYASIM_generator,(A68_FALSE, &FCYASIM),(A68_FALSE, &FCYASIM,(ACYASIM_generator).nonlocals));
HCYASIM = A_HVEC(GCYASIM,GBYASIM_dest,A68_INT ) ;
A_VASSIGN2(HCYASIM,FCYASIM,A68_INT ) ;
ICYASIM = (&((&A_VINDEX((*EMXASIM_fanouts),FBYASIM_source))->Successors)) ;
(*ICYASIM) = FCYASIM;
 /* line 933: */
KCYASIM = (*(&((&A_VINDEX((*EMXASIM_fanouts),GBYASIM_dest))->Successors))) ;
LCYASIM = KCYASIM.upb -1;
JCYASIM_succ = KCYASIM.data;
for (;LCYASIM-- >= 0;
(JCYASIM_succ++
) )
{
 /* line 934: */
NCYASIM = (*(&((*(&A_VINDEX((*XLXASIM_instances),(*JCYASIM_succ))))->Inputs))) ;
OCYASIM = NCYASIM.upb -1;
MCYASIM_ip = NCYASIM.data;
for (;OCYASIM-- >= 0;
(MCYASIM_ip++
) )
{
 /* line 935: */
 /* line 936: */
if ( ((*(&(MCYASIM_ip->Inst)))==FBYASIM_source) )
{ 
PCYASIM = (&(MCYASIM_ip->Inst)) ;
(*PCYASIM) = GBYASIM_dest;
 /* line 937: */
QCYASIM_trimoffset = ((*(&(MCYASIM_ip->Offset)))-HBYASIM_sourceoffset);
 /* line 938: */
 /* line 939: */
 /* line 940: */
RCYASIM = (&(MCYASIM_ip->Offset)) ;
(*RCYASIM) = (IAYASIM_genericoutputoffset+QCYASIM_trimoffset);
} 
}
 /* line 941: */
}
 /* line 942: */
}
 /* line 943: */
(*YLXASIM_lastinstance)+=(*GMXASIM_lastbreak);
 /* line 944: */
 /* line 945: */
SCYASIM = CAYASIM_newlast;
} 
A_PROC_EXIT(constructbreaks);
return( SCYASIM );
} 
#undef NL

A_STATIC A68_VOID  VCYASIM_generator(A68_BOOL  UCYASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WCYASIM;  /* clause result */
A68_VC  XCYASIM;  /* OPERATORS - dynamic generator */
{ 
XCYASIM.upb = 13 ;
( UCYASIM_anonymous? A_VLOC(A68_CHAR ,XCYASIM): A_VHEAP(A68_CHAR ,XCYASIM) );
WCYASIM = XCYASIM;
} 
*ReturnedValue = (WCYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LDYASIM_combinatorialcalls(void)
{ 
A68_502  MDYASIM;  /* OPERATORS - simple index */
A68_INT * NDYASIM;  /* YIELD */
A68_502  ODYASIM;  /* OPERATORS - simple index */
A68_BITS  PDYASIM;  /* ADICOPS - >= */
A68_417  QDYASIM;  /* OPERATORS - mode -> union mode */
A68_INT  RDYASIM;  /* YIELD */
A68_INT  SDYASIM_instanceno;
A68_502  TDYASIM;  /* OPERATORS - simple index */
A68_BITS  UDYASIM;  /* ADICOPS - >= */
A68_BOOL  VDYASIM;  /* optbool result */
A68_502  WDYASIM;  /* OPERATORS - simple index */
A68_INT * XDYASIM;  /* YIELD */
A68_417  YDYASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZDYASIM;  /* YIELD */
A68_502  AEYASIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(combinatorialcalls);
{ 
 /* line 974: */
 /* line 975: */
MDYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
NDYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*NDYASIM) = ((((*(&((*(&A_VINDEX(MDYASIM,MNXASIM_cpinstanceno)))->Fnno)))-1)*KDYASIM_noofphases)+DDYASIM_combphase);
 /* line 976: */
 /* line 977: */
ODYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
PDYASIM = (*(&((*(&A_VINDEX(ODYASIM,MNXASIM_cpinstanceno)))->Sort))) ;
if ( A_LB_GE(PDYASIM,IHCASIM_combinatorial) )
{ 
 /* line 978: */
 /* line 979: */
RDYASIM = (*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,MNXASIM_cpinstanceno))->Offset))) ;
WWNASIM_amcallinst(A_UNITE(QDYASIM,mode1,1,RDYASIM), CDYASIM_instlab);
} 
 /* line 980: */
SDYASIM_instanceno = (*(&((&VMXASIM_circuitfnenv)->Firstcombinatorial)));
 /* line 981: */
for ( ;; )
{ 
 /* line 982: */
if ( !((SDYASIM_instanceno!=0)) ) break;
 /* line 983: */
TDYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
UDYASIM = (*(&((*(&A_VINDEX(TDYASIM,SDYASIM_instanceno)))->Sort))) ;
VDYASIM = A_LB_GE(UDYASIM,IHCASIM_combinatorial);
if ( VDYASIM )
{ /* line 984: */
VDYASIM = (SDYASIM_instanceno!=MNXASIM_cpinstanceno);
}
 /* line 985: */
if ( VDYASIM )
{ 
 /* line 986: */
 /* line 987: */
WDYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
XDYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*XDYASIM) = ((((*(&((*(&A_VINDEX(WDYASIM,SDYASIM_instanceno)))->Fnno)))-1)*KDYASIM_noofphases)+DDYASIM_combphase);
 /* line 988: */
 /* line 989: */
 /* line 990: */
ZDYASIM = (*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,SDYASIM_instanceno))->Offset))) ;
WWNASIM_amcallinst(A_UNITE(YDYASIM,mode1,1,ZDYASIM), CDYASIM_instlab);
} 
 /* line 991: */
 /* line 992: */
AEYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
SDYASIM_instanceno = (*(&((*(&A_VINDEX(AEYASIM,SDYASIM_instanceno)))->Nextc)));
}
 /* line 993: */
} 
A_PROC_EXIT(combinatorialcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  BEYASIM_probecombinatorialcalls(void)
{ 
A68_INT  CEYASIM_i;
A68_INT  DEYASIM;  /* to part of loop */
A68_504  EEYASIM_instanceptrs;
A68_502  FEYASIM_instances;
A68_INT  GEYASIM_instanceno;
A68_BITS  HEYASIM;  /* ADICOPS - >= */
A68_INT * IEYASIM;  /* YIELD */
A_PROC_ENTRY(probecombinatorialcalls);
{ 
DMPASIM_translatestartprobeloopup();
 /* line 999: */
DEYASIM = UMXASIM_probefnenv.upb;
for ( CEYASIM_i = 1;
CEYASIM_i <= DEYASIM;
CEYASIM_i += 1 )
{ 
 /* line 1001: */
EEYASIM_instanceptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,CEYASIM_i))->Instptrs)));
 /* line 1002: */
FEYASIM_instances = (*(&((&A_VINDEX(UMXASIM_probefnenv,CEYASIM_i))->Instances)));
 /* line 1004: */
LMPASIM_translatestartcasearm(CEYASIM_i);
 /* line 1005: */
GEYASIM_instanceno = (*(&((&A_VINDEX(UMXASIM_probefnenv,CEYASIM_i))->Firstcombinatorial)));
 /* line 1006: */
for ( ;; )
{ 
 /* line 1007: */
if ( !((GEYASIM_instanceno!=0)) ) break;
 /* line 1008: */
 /* line 1009: */
HEYASIM = (*(&((*(&A_VINDEX(FEYASIM_instances,GEYASIM_instanceno)))->Sort))) ;
if ( A_LB_GE(HEYASIM,IHCASIM_combinatorial) )
{ 
WUNASIM_amlocal(0);
 /* line 1010: */
QUNASIM_ampushint((*(&((&A_VINDEX(EEYASIM_instanceptrs,GEYASIM_instanceno))->Offset))));
 /* line 1011: */
SSNASIM_amadd();
 /* line 1012: */
 /* line 1013: */
 /* line 1014: */
IEYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*IEYASIM) = ((((*(&((*(&A_VINDEX(FEYASIM_instances,GEYASIM_instanceno)))->Fnno)))-1)*KDYASIM_noofphases)+DDYASIM_combphase);
 /* line 1015: */
 /* line 1016: */
WWNASIM_amcallinst(ONFASIM_indirect, CDYASIM_instlab);
} 
 /* line 1017: */
 /* line 1018: */
GEYASIM_instanceno = (*(&((*(&A_VINDEX(FEYASIM_instances,GEYASIM_instanceno)))->Nextc)));
}
 /* line 1019: */
 /* line 1020: */
NMPASIM_translateendcasearm();
}
 /* line 1021: */
 /* line 1022: */
OMPASIM_translateendprobeloopup();
} 
A_PROC_EXIT(probecombinatorialcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  JEYASIM_breakinitialisercalls(void)
{ 
A68_INT  KEYASIM_i;
A68_INT  LEYASIM;  /* to part of loop */
A68_502  MEYASIM;  /* OPERATORS - simple index */
A68_VC  PEYASIM;  /* avoid structure result */
A68_VC  QEYASIM_name;
A68_415  REYASIM;  /* collateral clause result */
A_PROC_ENTRY(breakinitialisercalls);
 /* line 1035: */
LEYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))).upb;
for ( KEYASIM_i = (((*(&((&VMXASIM_circuitfnenv)->Instances))).upb-(*(&((&VMXASIM_circuitfnenv)->Lastbreak))))+1);
KEYASIM_i <= LEYASIM;
KEYASIM_i += 1 )
{ 
 /* line 1036: */
 /* line 1037: */
 /* line 1038: */
MEYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
if ( ((*(&((*(&A_VINDEX(MEYASIM,KEYASIM_i)))->Sort)))==SHCASIM_combinatorialloopbreak) )
{ 
RSCAOST_makeid( OEYASIM, &PEYASIM );
QEYASIM_name = PEYASIM;
 /* line 1039: */
QUNASIM_ampushint((*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,KEYASIM_i))->Offset))));
 /* line 1040: */
REYASIM.Lab = 0;
REYASIM.Tag = QEYASIM_name;
 /* line 1041: */
 /* line 1042: */
BXNASIM_amcall(1, REYASIM);
} 
else
{ 
 /* line 1043: */
 /* line 1044: */
NKDAOST_sysfault(TEYASIM);
} 
}
A_PROC_EXIT(breakinitialisercalls);
return;
} 
#undef NL

A_STATIC A68_VOID  UEYASIM_probebreakinitialisercalls(void)
{ 
A68_INT  VEYASIM_j;
A68_INT  WEYASIM;  /* to part of loop */
A68_504  XEYASIM_instanceptrs;
A68_502  YEYASIM_instances;
A68_INT  ZEYASIM_i;
A68_INT  AFYASIM;  /* to part of loop */
A68_VC  DFYASIM;  /* avoid structure result */
A68_VC  EFYASIM_name;
A68_415  FFYASIM;  /* collateral clause result */
A_PROC_ENTRY(probebreakinitialisercalls);
{ 
DMPASIM_translatestartprobeloopup();
 /* line 1049: */
WEYASIM = UMXASIM_probefnenv.upb;
for ( VEYASIM_j = 1;
VEYASIM_j <= WEYASIM;
VEYASIM_j += 1 )
{ 
 /* line 1051: */
XEYASIM_instanceptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,VEYASIM_j))->Instptrs)));
 /* line 1052: */
YEYASIM_instances = (*(&((&A_VINDEX(UMXASIM_probefnenv,VEYASIM_j))->Instances)));
 /* line 1054: */
LMPASIM_translatestartcasearm(VEYASIM_j);
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
AFYASIM = YEYASIM_instances.upb;
for ( ZEYASIM_i = ((YEYASIM_instances.upb-(*(&((&A_VINDEX(UMXASIM_probefnenv,VEYASIM_j))->Lastbreak))))+1);
ZEYASIM_i <= AFYASIM;
ZEYASIM_i += 1 )
{ 
 /* line 1058: */
 /* line 1059: */
if ( ((*(&((*(&A_VINDEX(YEYASIM_instances,ZEYASIM_i)))->Sort)))==SHCASIM_combinatorialloopbreak) )
{ 
RSCAOST_makeid( CFYASIM, &DFYASIM );
EFYASIM_name = DFYASIM;
 /* line 1060: */
WUNASIM_amlocal(0);
 /* line 1061: */
QUNASIM_ampushint((*(&((&A_VINDEX(XEYASIM_instanceptrs,ZEYASIM_i))->Offset))));
 /* line 1062: */
SSNASIM_amadd();
 /* line 1063: */
FFYASIM.Lab = 0;
FFYASIM.Tag = EFYASIM_name;
 /* line 1064: */
 /* line 1065: */
BXNASIM_amcall(1, FFYASIM);
} 
else
{ 
 /* line 1066: */
 /* line 1067: */
NKDAOST_sysfault(HFYASIM);
} 
}
 /* line 1068: */
 /* line 1069: */
NMPASIM_translateendcasearm();
}
 /* line 1070: */
 /* line 1071: */
OMPASIM_translateendprobeloopup();
} 
A_PROC_EXIT(probebreakinitialisercalls);
return;
} 
#undef NL

A_STATIC A68_VOID  IFYASIM_eventsettingcalls(void)
{ 
A68_INT  JFYASIM_i;
A68_INT  KFYASIM;  /* to part of loop */
A68_502  LFYASIM;  /* OPERATORS - simple index */
A68_BITS  MFYASIM;  /* ADICOPS - >= */
A68_502  NFYASIM;  /* OPERATORS - simple index */
A68_INT * OFYASIM;  /* YIELD */
A68_417  PFYASIM;  /* OPERATORS - mode -> union mode */
A68_INT  QFYASIM;  /* YIELD */
A_PROC_ENTRY(eventsettingcalls);
KFYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))).upb;
for ( JFYASIM_i = 1;
JFYASIM_i <= KFYASIM;
JFYASIM_i += 1 )
{ 
 /* line 1078: */
 /* line 1079: */
LFYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
MFYASIM = (*(&((*(&A_VINDEX(LFYASIM,JFYASIM_i)))->Sort))) ;
if ( A_LB_GE(MFYASIM,JHCASIM_eventsetting) )
{ 
 /* line 1080: */
 /* line 1081: */
NFYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
OFYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*OFYASIM) = ((((*(&((*(&A_VINDEX(NFYASIM,JFYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+EDYASIM_settingphase);
 /* line 1082: */
 /* line 1083: */
 /* line 1084: */
 /* line 1085: */
QFYASIM = (*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,JFYASIM_i))->Offset))) ;
WWNASIM_amcallinst(A_UNITE(PFYASIM,mode1,1,QFYASIM), CDYASIM_instlab);
} 
}
A_PROC_EXIT(eventsettingcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  RFYASIM_probeeventsettingcalls(void)
{ 
A68_INT  SFYASIM_j;
A68_INT  TFYASIM;  /* to part of loop */
A68_504  UFYASIM_instanceptrs;
A68_502  VFYASIM_instances;
A68_INT  WFYASIM_i;
A68_INT  XFYASIM;  /* to part of loop */
A68_BITS  YFYASIM;  /* ADICOPS - >= */
A68_INT * ZFYASIM;  /* YIELD */
A_PROC_ENTRY(probeeventsettingcalls);
{ 
DMPASIM_translatestartprobeloopup();
 /* line 1090: */
TFYASIM = UMXASIM_probefnenv.upb;
for ( SFYASIM_j = 1;
SFYASIM_j <= TFYASIM;
SFYASIM_j += 1 )
{ 
 /* line 1092: */
UFYASIM_instanceptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,SFYASIM_j))->Instptrs)));
 /* line 1093: */
VFYASIM_instances = (*(&((&A_VINDEX(UMXASIM_probefnenv,SFYASIM_j))->Instances)));
 /* line 1095: */
LMPASIM_translatestartcasearm(SFYASIM_j);
 /* line 1097: */
XFYASIM = VFYASIM_instances.upb;
for ( WFYASIM_i = 1;
WFYASIM_i <= XFYASIM;
WFYASIM_i += 1 )
{ 
 /* line 1098: */
 /* line 1099: */
YFYASIM = (*(&((*(&A_VINDEX(VFYASIM_instances,WFYASIM_i)))->Sort))) ;
if ( A_LB_GE(YFYASIM,JHCASIM_eventsetting) )
{ 
WUNASIM_amlocal(0);
 /* line 1100: */
QUNASIM_ampushint((*(&((&A_VINDEX(UFYASIM_instanceptrs,WFYASIM_i))->Offset))));
 /* line 1101: */
SSNASIM_amadd();
 /* line 1102: */
 /* line 1103: */
ZFYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*ZFYASIM) = ((((*(&((*(&A_VINDEX(VFYASIM_instances,WFYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+EDYASIM_settingphase);
 /* line 1104: */
 /* line 1105: */
 /* line 1106: */
WWNASIM_amcallinst(ONFASIM_indirect, CDYASIM_instlab);
} 
}
 /* line 1107: */
 /* line 1108: */
NMPASIM_translateendcasearm();
}
 /* line 1109: */
 /* line 1111: */
OMPASIM_translateendprobeloopup();
} 
A_PROC_EXIT(probeeventsettingcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  AGYASIM_eventhandlingcalls(void)
{ 
A68_INT  BGYASIM_instanceno;
A68_502  CGYASIM;  /* OPERATORS - simple index */
A68_BITS  DGYASIM;  /* ADICOPS - >= */
A68_502  EGYASIM;  /* OPERATORS - simple index */
A68_INT * FGYASIM;  /* YIELD */
A68_417  GGYASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HGYASIM;  /* YIELD */
A68_502  IGYASIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(eventhandlingcalls);
{ 
BGYASIM_instanceno = (*(&((&VMXASIM_circuitfnenv)->Firsteventhandler)));
 /* line 1123: */
for ( ;; )
{ 
 /* line 1124: */
if ( !((BGYASIM_instanceno!=0)) ) break;
 /* line 1125: */
CGYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
DGYASIM = (*(&((*(&A_VINDEX(CGYASIM,BGYASIM_instanceno)))->Sort))) ;
if ( A_LB_GE(DGYASIM,KHCASIM_eventhandling) )
{ 
 /* line 1126: */
 /* line 1127: */
EGYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
FGYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*FGYASIM) = ((((*(&((*(&A_VINDEX(EGYASIM,BGYASIM_instanceno)))->Fnno)))-1)*KDYASIM_noofphases)+FDYASIM_handlingphase);
 /* line 1128: */
 /* line 1129: */
 /* line 1130: */
HGYASIM = (*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,BGYASIM_instanceno))->Offset))) ;
WWNASIM_amcallinst(A_UNITE(GGYASIM,mode1,1,HGYASIM), CDYASIM_instlab);
} 
 /* line 1131: */
 /* line 1132: */
IGYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
BGYASIM_instanceno = (*(&((*(&A_VINDEX(IGYASIM,BGYASIM_instanceno)))->Nexte)));
}
 /* line 1133: */
} 
A_PROC_EXIT(eventhandlingcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  JGYASIM_probeeventhandlingcalls(void)
{ 
A68_INT  KGYASIM_j;
A68_INT  LGYASIM;  /* to part of loop */
A68_504  MGYASIM_instanceptrs;
A68_502  NGYASIM_instances;
A68_INT  OGYASIM_instanceno;
A68_BITS  PGYASIM;  /* ADICOPS - >= */
A68_INT * QGYASIM;  /* YIELD */
A_PROC_ENTRY(probeeventhandlingcalls);
{ 
QMPASIM_translatestartprobeloopdown();
 /* line 1138: */
LGYASIM = UMXASIM_probefnenv.upb;
for ( KGYASIM_j = 1;
KGYASIM_j <= LGYASIM;
KGYASIM_j += 1 )
{ 
 /* line 1140: */
MGYASIM_instanceptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,KGYASIM_j))->Instptrs)));
 /* line 1141: */
NGYASIM_instances = (*(&((&A_VINDEX(UMXASIM_probefnenv,KGYASIM_j))->Instances)));
 /* line 1143: */
LMPASIM_translatestartcasearm(KGYASIM_j);
 /* line 1145: */
OGYASIM_instanceno = (*(&((&A_VINDEX(UMXASIM_probefnenv,KGYASIM_j))->Firsteventhandler)));
 /* line 1146: */
for ( ;; )
{ 
 /* line 1147: */
if ( !((OGYASIM_instanceno!=0)) ) break;
 /* line 1148: */
PGYASIM = (*(&((*(&A_VINDEX(NGYASIM_instances,OGYASIM_instanceno)))->Sort))) ;
if ( A_LB_GE(PGYASIM,KHCASIM_eventhandling) )
{ 
WUNASIM_amlocal(0);
 /* line 1149: */
QUNASIM_ampushint((*(&((&A_VINDEX(MGYASIM_instanceptrs,OGYASIM_instanceno))->Offset))));
 /* line 1150: */
SSNASIM_amadd();
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
QGYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*QGYASIM) = ((((*(&((*(&A_VINDEX(NGYASIM_instances,OGYASIM_instanceno)))->Fnno)))-1)*KDYASIM_noofphases)+FDYASIM_handlingphase);
 /* line 1154: */
 /* line 1155: */
WWNASIM_amcallinst(ONFASIM_indirect, CDYASIM_instlab);
} 
 /* line 1156: */
 /* line 1157: */
OGYASIM_instanceno = (*(&((*(&A_VINDEX(NGYASIM_instances,OGYASIM_instanceno)))->Nexte)));
}
 /* line 1158: */
 /* line 1159: */
NMPASIM_translateendcasearm();
}
 /* line 1160: */
 /* line 1162: */
WMPASIM_translateendprobeloopdown();
} 
A_PROC_EXIT(probeeventhandlingcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  RGYASIM_initialisercalls(void)
{ 
A68_INT  SGYASIM_i;
A68_INT  TGYASIM;  /* to part of loop */
A68_502  UGYASIM;  /* OPERATORS - simple index */
A68_BITS  VGYASIM;  /* ADICOPS - >= */
A68_502  WGYASIM;  /* OPERATORS - simple index */
A68_INT * XGYASIM;  /* YIELD */
A68_417  YGYASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZGYASIM;  /* YIELD */
A_PROC_ENTRY(initialisercalls);
TGYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))).upb;
for ( SGYASIM_i = 1;
SGYASIM_i <= TGYASIM;
SGYASIM_i += 1 )
{ 
 /* line 1170: */
 /* line 1171: */
UGYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
VGYASIM = (*(&((*(&A_VINDEX(UGYASIM,SGYASIM_i)))->Sort))) ;
if ( A_LB_GE(VGYASIM,LHCASIM_initialised) )
{ 
 /* line 1172: */
 /* line 1173: */
WGYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
XGYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*XGYASIM) = ((((*(&((*(&A_VINDEX(WGYASIM,SGYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+GDYASIM_initialiserphase);
 /* line 1174: */
 /* line 1175: */
 /* line 1176: */
 /* line 1177: */
ZGYASIM = (*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,SGYASIM_i))->Offset))) ;
WWNASIM_amcallinst(A_UNITE(YGYASIM,mode1,1,ZGYASIM), CDYASIM_instlab);
} 
}
A_PROC_EXIT(initialisercalls);
return;
} 
#undef NL

A_STATIC A68_VOID  AHYASIM_probeinitialisercalls(void)
{ 
A68_INT  BHYASIM_j;
A68_INT  CHYASIM;  /* to part of loop */
A68_504  DHYASIM_instanceptrs;
A68_502  EHYASIM_instances;
A68_INT  FHYASIM_i;
A68_INT  GHYASIM;  /* to part of loop */
A68_BITS  HHYASIM;  /* ADICOPS - >= */
A68_INT * IHYASIM;  /* YIELD */
A_PROC_ENTRY(probeinitialisercalls);
{ 
YMPASIM_translatestartinitloopup();
 /* line 1182: */
CHYASIM = UMXASIM_probefnenv.upb;
for ( BHYASIM_j = 1;
BHYASIM_j <= CHYASIM;
BHYASIM_j += 1 )
{ 
 /* line 1184: */
DHYASIM_instanceptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,BHYASIM_j))->Instptrs)));
 /* line 1185: */
EHYASIM_instances = (*(&((&A_VINDEX(UMXASIM_probefnenv,BHYASIM_j))->Instances)));
 /* line 1186: */
LMPASIM_translatestartcasearm(BHYASIM_j);
 /* line 1187: */
GHYASIM = EHYASIM_instances.upb;
for ( FHYASIM_i = 1;
FHYASIM_i <= GHYASIM;
FHYASIM_i += 1 )
{ 
 /* line 1188: */
 /* line 1189: */
HHYASIM = (*(&((*(&A_VINDEX(EHYASIM_instances,FHYASIM_i)))->Sort))) ;
if ( A_LB_GE(HHYASIM,LHCASIM_initialised) )
{ 
WUNASIM_amlocal(0);
 /* line 1190: */
QUNASIM_ampushint((*(&((&A_VINDEX(DHYASIM_instanceptrs,FHYASIM_i))->Offset))));
 /* line 1191: */
SSNASIM_amadd();
 /* line 1192: */
 /* line 1193: */
IHYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*IHYASIM) = ((((*(&((*(&A_VINDEX(EHYASIM_instances,FHYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+GDYASIM_initialiserphase);
 /* line 1194: */
 /* line 1195: */
 /* line 1196: */
WWNASIM_amcallinst(ONFASIM_indirect, CDYASIM_instlab);
} 
}
 /* line 1197: */
 /* line 1198: */
NMPASIM_translateendcasearm();
}
 /* line 1199: */
 /* line 1201: */
ENPASIM_translateendinitloopup();
} 
A_PROC_EXIT(probeinitialisercalls);
return;
} 
#undef NL

A_STATIC A68_VOID  JHYASIM_terminatorcalls(void)
{ 
A68_INT  KHYASIM_i;
A68_INT  LHYASIM;  /* to part of loop */
A68_502  MHYASIM;  /* OPERATORS - simple index */
A68_BITS  NHYASIM;  /* ADICOPS - >= */
A68_502  OHYASIM;  /* OPERATORS - simple index */
A68_INT * PHYASIM;  /* YIELD */
A_PROC_ENTRY(terminatorcalls);
LHYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))).upb;
for ( KHYASIM_i = 1;
KHYASIM_i <= LHYASIM;
KHYASIM_i += 1 )
{ 
 /* line 1205: */
 /* line 1206: */
MHYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
NHYASIM = (*(&((*(&A_VINDEX(MHYASIM,KHYASIM_i)))->Sort))) ;
if ( A_LB_GE(NHYASIM,RHCASIM_terminated) )
{ 
QUNASIM_ampushint((*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,KHYASIM_i))->Offset))));
 /* line 1207: */
 /* line 1208: */
OHYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
PHYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*PHYASIM) = ((((*(&((*(&A_VINDEX(OHYASIM,KHYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+HDYASIM_terminatorphase);
 /* line 1209: */
 /* line 1210: */
 /* line 1211: */
BXNASIM_amcall(1, CDYASIM_instlab);
} 
}
A_PROC_EXIT(terminatorcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  SHYASIM_probephasecalls(A68_BITS  Phasesort, A68_INT  Phasenumber)
{ 
A68_INT  THYASIM_j;
A68_INT  UHYASIM;  /* to part of loop */
A68_504  VHYASIM_instanceptrs;
A68_502  WHYASIM_instances;
A68_INT  XHYASIM_i;
A68_INT  YHYASIM;  /* to part of loop */
A68_BITS  ZHYASIM;  /* ADICOPS - >= */
A68_INT * AIYASIM;  /* YIELD */
A_PROC_ENTRY(probephasecalls);
 /* line 1214: */
 /* line 1215: */
{ 
DMPASIM_translatestartprobeloopup();
 /* line 1216: */
UHYASIM = UMXASIM_probefnenv.upb;
for ( THYASIM_j = 1;
THYASIM_j <= UHYASIM;
THYASIM_j += 1 )
{ 
 /* line 1218: */
VHYASIM_instanceptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,THYASIM_j))->Instptrs)));
 /* line 1219: */
WHYASIM_instances = (*(&((&A_VINDEX(UMXASIM_probefnenv,THYASIM_j))->Instances)));
 /* line 1220: */
LMPASIM_translatestartcasearm(THYASIM_j);
 /* line 1221: */
YHYASIM = WHYASIM_instances.upb;
for ( XHYASIM_i = 1;
XHYASIM_i <= YHYASIM;
XHYASIM_i += 1 )
{ 
 /* line 1222: */
 /* line 1223: */
ZHYASIM = (*(&((*(&A_VINDEX(WHYASIM_instances,XHYASIM_i)))->Sort))) ;
if ( A_LB_GE(ZHYASIM,Phasesort) )
{ 
WUNASIM_amlocal(0);
 /* line 1224: */
QUNASIM_ampushint((*(&((&A_VINDEX(VHYASIM_instanceptrs,XHYASIM_i))->Offset))));
 /* line 1225: */
SSNASIM_amadd();
 /* line 1226: */
 /* line 1227: */
AIYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*AIYASIM) = ((((*(&((*(&A_VINDEX(WHYASIM_instances,XHYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+Phasenumber);
 /* line 1228: */
 /* line 1229: */
 /* line 1230: */
BXNASIM_amcall(1, CDYASIM_instlab);
} 
}
 /* line 1231: */
 /* line 1232: */
NMPASIM_translateendcasearm();
}
 /* line 1233: */
 /* line 1235: */
OMPASIM_translateendprobeloopup();
} 
A_PROC_EXIT(probephasecalls);
return;
} 
#undef NL

A_STATIC A68_VOID  BIYASIM_savercalls(void)
{ 
A68_INT  CIYASIM_i;
A68_INT  DIYASIM;  /* to part of loop */
A68_502  EIYASIM;  /* OPERATORS - simple index */
A68_BITS  FIYASIM;  /* ADICOPS - >= */
A68_502  GIYASIM;  /* OPERATORS - simple index */
A68_INT * HIYASIM;  /* YIELD */
A_PROC_ENTRY(savercalls);
DIYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))).upb;
for ( CIYASIM_i = 1;
CIYASIM_i <= DIYASIM;
CIYASIM_i += 1 )
{ 
 /* line 1239: */
 /* line 1240: */
EIYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
FIYASIM = (*(&((*(&A_VINDEX(EIYASIM,CIYASIM_i)))->Sort))) ;
if ( A_LB_GE(FIYASIM,PHCASIM_saved) )
{ 
 /* line 1241: */
GIYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
HIYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*HIYASIM) = ((((*(&((*(&A_VINDEX(GIYASIM,CIYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+IDYASIM_saverphase);
 /* line 1242: */
QUNASIM_ampushint((*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,CIYASIM_i))->Offset))));
 /* line 1243: */
 /* line 1244: */
 /* line 1245: */
BXNASIM_amcall(1, CDYASIM_instlab);
} 
}
A_PROC_EXIT(savercalls);
return;
} 
#undef NL

A_STATIC A68_VOID  IIYASIM_restorercalls(void)
{ 
A68_INT  JIYASIM_i;
A68_INT  KIYASIM;  /* to part of loop */
A68_502  LIYASIM;  /* OPERATORS - simple index */
A68_BITS  MIYASIM;  /* ADICOPS - >= */
A68_502  NIYASIM;  /* OPERATORS - simple index */
A68_INT * OIYASIM;  /* YIELD */
A_PROC_ENTRY(restorercalls);
KIYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))).upb;
for ( JIYASIM_i = 1;
JIYASIM_i <= KIYASIM;
JIYASIM_i += 1 )
{ 
 /* line 1249: */
 /* line 1250: */
LIYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
MIYASIM = (*(&((*(&A_VINDEX(LIYASIM,JIYASIM_i)))->Sort))) ;
if ( A_LB_GE(MIYASIM,QHCASIM_restored) )
{ 
 /* line 1251: */
NIYASIM = (*(&((&VMXASIM_circuitfnenv)->Instances))) ;
OIYASIM = (&((&CDYASIM_instlab)->Lab)) ;
(*OIYASIM) = ((((*(&((*(&A_VINDEX(NIYASIM,JIYASIM_i)))->Fnno)))-1)*KDYASIM_noofphases)+JDYASIM_restorerphase);
 /* line 1252: */
QUNASIM_ampushint((*(&((&A_VINDEX(CMXASIM_circuitinstanceptrs,JIYASIM_i))->Offset))));
 /* line 1253: */
 /* line 1254: */
 /* line 1255: */
BXNASIM_amcall(1, CDYASIM_instlab);
} 
}
A_PROC_EXIT(restorercalls);
return;
} 
#undef NL

A_STATIC A68_VOID  QIYASIM_translateprobetoplevel(A68_INT  Fnno, A68_537  *ReturnedValue)
{ 
A68_173  RIYASIM;  /* collateral clause result */
A68_173  SIYASIM_nullwire;
A68_175  UIYASIM;  /* collateral clause result */
A68_176  VIYASIM;  /* OPERATORS - skip to mode */
A68_VC  XIYASIM;  /* avoid structure result */
A68_INT  YIYASIM_fn;
A68_VC  BJYASIM;  /* avoid structure result */
A68_VC  CJYASIM;  /* avoid structure result */
A68_VC  DJYASIM_piname;
A68_VC  EJYASIM;  /* avoid structure result */
A68_VC  FJYASIM_piuname;
A68_INT  GJYASIM_inputsize;
A68_32  IJYASIM;  /* avoid structure result */
A68_32  HJYASIM_inputsizes;
A68_INT  JJYASIM_i;
A68_INT  KJYASIM;  /* to part of loop */
A68_176  LJYASIM;  /* OPERATORS - skip to mode */
A68_175  MJYASIM;  /* avoid structure result */
A68_INT  NJYASIM_pi;
A68_INT  OJYASIM_probeinputsource;
A68_INT  PJYASIM_pimake;
A68_INT  QJYASIM_inputinstance;
A68_VC  TJYASIM;  /* avoid structure result */
A68_VC  UJYASIM;  /* avoid structure result */
A68_VC  VJYASIM_pidname;
A68_VC  WJYASIM;  /* avoid structure result */
A68_VC  XJYASIM_piduname;
A68_190  YJYASIM;  /* avoid structure result */
A68_173  ZJYASIM;  /* avoid structure result */
A68_173  AKYASIM_output;
A68_176  BKYASIM;  /* OPERATORS - skip to mode */
A68_175  CKYASIM;  /* avoid structure result */
A68_INT  DKYASIM_pid;
A68_INT  EKYASIM_probeidsource;
A68_INT  FKYASIM_pidmake;
A68_INT  GKYASIM_idinstance;
A68_INT  HKYASIM_inputinstoffset;
A68_INT  IKYASIM_probemake;
A68_INT  JKYASIM_inputwhence;
A68_INT  KKYASIM_idwhence;
A68_INT  LKYASIM_j;
A68_INT  MKYASIM;  /* to part of loop */
A68_31  OKYASIM_generator;   /* proc value of non-global proc */
A68_VC  TKYASIM;  /* avoid structure result */
A68_VC  UKYASIM_size;
A68_31  WKYASIM_generator;   /* proc value of non-global proc */
A68_VC  BLYASIM;  /* avoid structure result */
A68_VC  CLYASIM_size;
A68_537  DLYASIM;  /* collateral clause result */
A68_537  ELYASIM;  /* clause result */
A_PROC_ENTRY(translateprobetoplevel);
 /* line 1278: */
 /* line 1280: */
{ 
RIYASIM.Type = ZSAASIM_nullstype;
RIYASIM.Blocks = VLXASIM_nullrvb;
SIYASIM_nullwire = RIYASIM;
 /* line 1281: */
 /* line 1282: */
 /* line 1283: */
UIYASIM.Size = (DENASIM_ws+GENASIM_sizeunit);
UIYASIM.Offset = (DENASIM_ws+GENASIM_sizeunit);
UIYASIM.Sort = HHCASIM_compound;
 /* line 1284: */
RSCAOST_makeid( WIYASIM, &XIYASIM );
YIYASIM_fn = FLCASIM_addfunction(XIYASIM, 0, (-1), 0, SIYASIM_nullwire, SIYASIM_nullwire, STAASIM_nilsram, UIYASIM, VIYASIM);
 /* line 1285: */
FCAAOSI_intchars( Fnno, &BJYASIM );
RSCAOST_makeid( A_VC_PLUS(AJYASIM,BJYASIM), &CJYASIM );
DJYASIM_piname = CJYASIM;
 /* line 1286: */
DRCASIM_uniqueid( DJYASIM_piname, 0, (-1), &EJYASIM );
FJYASIM_piuname = EJYASIM;
 /* line 1287: */
GJYASIM_inputsize = 0;
 /* line 1288: */
QUCASIM_lookupinputsizes( Fnno, &IJYASIM );
HJYASIM_inputsizes = IJYASIM;
 /* line 1289: */
KJYASIM = HJYASIM_inputsizes.upb;
for ( JJYASIM_i = 1;
JJYASIM_i <= KJYASIM;
JJYASIM_i += 1 )
{ 
GJYASIM_inputsize+=(*(&A_VINDEX(HJYASIM_inputsizes,JJYASIM_i)));
}
 /* line 1290: */
 /* line 1291: */
 /* line 1292: */
 /* line 1293: */
CWPASIM_translatedatasource( GJYASIM_inputsize, FJYASIM_piuname, &MJYASIM );
NJYASIM_pi = FLCASIM_addfunction(DJYASIM_piname, 0, (-1), 0, SIYASIM_nullwire, SIYASIM_nullwire, STAASIM_nilsram, MJYASIM, LJYASIM);
 /* line 1294: */
OJYASIM_probeinputsource = RNCASIM_nextinstance(YIYASIM_fn, NJYASIM_pi);
 /* line 1295: */
PJYASIM_pimake = IPXASIM_addmake(NJYASIM_pi, OJYASIM_probeinputsource);
 /* line 1296: */
YNCASIM_addexpansion(YIYASIM_fn, PJYASIM_pimake);
 /* line 1297: */
QJYASIM_inputinstance = (OJYASIM_probeinputsource+1);
 /* line 1300: */
FCAAOSI_intchars( Fnno, &TJYASIM );
RSCAOST_makeid( A_VC_PLUS(SJYASIM,TJYASIM), &UJYASIM );
VJYASIM_pidname = UJYASIM;
 /* line 1301: */
DRCASIM_uniqueid( VJYASIM_pidname, 0, (-1), &WJYASIM );
XJYASIM_piduname = WJYASIM;
 /* line 1302: */
GSCASIM_rawlookupfunction( Fnno, &YJYASIM );
EZCASIM_rawinputs( YJYASIM, &ZJYASIM );
AKYASIM_output = ZJYASIM;
 /* line 1303: */
 /* line 1304: */
 /* line 1305: */
 /* line 1306: */
JWPASIM_translateprobeid( HJYASIM_inputsizes, XJYASIM_piduname, &CKYASIM );
DKYASIM_pid = FLCASIM_addfunction(VJYASIM_pidname, 0, (-1), HJYASIM_inputsizes.upb, AKYASIM_output, AKYASIM_output, STAASIM_nilsram, CKYASIM, BKYASIM);
 /* line 1307: */
OOCASIM_addinputsizes(DKYASIM_pid, HJYASIM_inputsizes);
 /* line 1308: */
EKYASIM_probeidsource = RNCASIM_nextinstance(YIYASIM_fn, DKYASIM_pid);
 /* line 1309: */
FKYASIM_pidmake = IPXASIM_addmake(DKYASIM_pid, EKYASIM_probeidsource);
 /* line 1310: */
YNCASIM_addexpansion(YIYASIM_fn, FKYASIM_pidmake);
 /* line 1311: */
GKYASIM_idinstance = (EKYASIM_probeidsource+1);
 /* line 1315: */
HKYASIM_inputinstoffset = RNCASIM_nextinstance(YIYASIM_fn, Fnno);
 /* line 1316: */
IKYASIM_probemake = IPXASIM_addmake(Fnno, HKYASIM_inputinstoffset);
 /* line 1317: */
YNCASIM_addexpansion(YIYASIM_fn, IKYASIM_probemake);
 /* line 1318: */
JKYASIM_inputwhence = (DENASIM_ws+GENASIM_sizeunit);
 /* line 1319: */
KKYASIM_idwhence = (((DENASIM_ws+GENASIM_sizeunit)+((HJYASIM_inputsizes.upb*2)*DENASIM_ws))+DENASIM_ws);
 /* line 1320: */
MKYASIM = HJYASIM_inputsizes.upb;
for ( LKYASIM_j = 1;
LKYASIM_j <= MKYASIM;
LKYASIM_j += 1 )
{ 
 /* line 1323: */
A_CLOSURE( OKYASIM_generator, PKYASIM_generator, QKYASIM_generator );
A_CALLPROC(OKYASIM_generator,(A68_FALSE, &TKYASIM),(A68_FALSE, &TKYASIM,(OKYASIM_generator).nonlocals));
UKYASIM_size = TKYASIM;
 /* line 1324: */
ZBBASIM_signedtoword((*(&A_VINDEX(HJYASIM_inputsizes,LKYASIM_j))), UKYASIM_size);
 /* line 1325: */
A_CALLPROC(FENASIM_up,(UKYASIM_size),(UKYASIM_size,(FENASIM_up).nonlocals));
 /* line 1326: */
GOCASIM_addconstantno(DKYASIM_pid, KRXASIM_addconstant(UKYASIM_size));
 /* line 1327: */
SQXASIM_addconnection(OJYASIM_probeinputsource, JKYASIM_inputwhence, FKYASIM_pidmake, LKYASIM_j);
 /* line 1328: */
SQXASIM_addconnection(EKYASIM_probeidsource, KKYASIM_idwhence, IKYASIM_probemake, LKYASIM_j);
 /* line 1329: */
JKYASIM_inputwhence+=(*(&A_VINDEX(HJYASIM_inputsizes,LKYASIM_j)));
 /* line 1330: */
 /* line 1331: */
KKYASIM_idwhence+=(*(&A_VINDEX(HJYASIM_inputsizes,LKYASIM_j)));
}
 /* line 1333: */
A_CLOSURE( WKYASIM_generator, XKYASIM_generator, YKYASIM_generator );
A_CALLPROC(WKYASIM_generator,(A68_FALSE, &BLYASIM),(A68_FALSE, &BLYASIM,(WKYASIM_generator).nonlocals));
CLYASIM_size = BLYASIM;
 /* line 1334: */
ZBBASIM_signedtoword(GJYASIM_inputsize, CLYASIM_size);
 /* line 1335: */
A_CALLPROC(FENASIM_up,(CLYASIM_size),(CLYASIM_size,(FENASIM_up).nonlocals));
 /* line 1336: */
GOCASIM_addconstantno(DKYASIM_pid, KRXASIM_addconstant(CLYASIM_size));
 /* line 1339: */
DLYASIM.Makeno = IPXASIM_addmake(YIYASIM_fn, 1);
DLYASIM.Inputinstance = QJYASIM_inputinstance;
 /* line 1340: */
DLYASIM.Probeinstance = (OJYASIM_probeinputsource+HKYASIM_inputinstoffset);
ELYASIM = DLYASIM;
} 
A_PROC_EXIT(translateprobetoplevel);
*ReturnedValue = (ELYASIM);
return;
} 
#undef NL
 /* line 1372: */
 /* line 1373: */

A68_VOID  ILYASIM_constructcalls(A68_INT  Simmakeno, A68_32  Probefnnos, A68_36  Flt)
{ 
A68_INT * JLYASIM_firsteventhandler;
A68_114  LLYASIM_insertevent;   /* proc value of non-global proc */
A68_INT * VLYASIM_firstcombinatorial;
A68_INT * WLYASIM_lastcombinatorial;
A68_INT  YLYASIM_loopreports;
A68_114  AMYASIM_insertcombinatorial;   /* proc value of non-global proc */
A68_210  FMYASIM_breakcombinatorialloop;   /* proc value of non-global proc */
A68_547  XNYASIM_instantiateandsort;   /* proc value of non-global proc */
A68_548  JOYASIM_generator;   /* proc value of non-global proc */
A68_513  OOYASIM;  /* avoid structure result */
A68_INT  POYASIM_i;
A68_INT  QOYASIM;  /* to part of loop */
A68_510 * ROYASIM;  /* YIELD */
A68_549  TOYASIM_generator;   /* proc value of non-global proc */
A68_506  YOYASIM;  /* avoid structure result */
A68_INT  ZOYASIM_size;
A68_INT  APYASIM_totalsize;
A68_INT  BPYASIM_i;
A68_INT  CPYASIM;  /* to part of loop */
A68_INT * DPYASIM;  /* YIELD */
A68_537  EPYASIM;  /* avoid structure result */
A68_537  FPYASIM_top;
A68_INT  GPYASIM_size;
A68_INT * HPYASIM;  /* YIELD */
A68_INT * IPYASIM;  /* YIELD */
A68_INT * JPYASIM;  /* YIELD */
A68_INT  KPYASIM_i;
A68_INT  LPYASIM;  /* to part of loop */
A68_INT * MPYASIM;  /* YIELD */
A68_INT  NPYASIM_i;
A68_INT  OPYASIM;  /* to part of loop */
A68_510 * PPYASIM;  /* YIELD */
A68_516  RPYASIM_generator;   /* proc value of non-global proc */
A68_515  WPYASIM;  /* avoid structure result */
A68_517  YPYASIM_generator;   /* proc value of non-global proc */
A68_438  DQYASIM;  /* avoid structure result */
A_PROC_ENTRY(constructcalls);
 /* line 1374: */
 /* line 1376: */
{ 
 /* line 1378: */
A_CLOSURE( LLYASIM_insertevent, MLYASIM_insertevent, NLYASIM_insertevent );
(( NLYASIM_insertevent * ) ( LLYASIM_insertevent.nonlocals )) -> JLYASIM_firsteventhandler = (&JLYASIM_firsteventhandler);
 /* line 1386: */
 /* line 1390: */
 /* line 1391: */
 /* line 1393: */
 /* line 1394: */
YLYASIM_loopreports = 0;
 /* line 1396: */
A_CLOSURE( AMYASIM_insertcombinatorial, BMYASIM_insertcombinatorial, CMYASIM_insertcombinatorial );
(( CMYASIM_insertcombinatorial * ) ( AMYASIM_insertcombinatorial.nonlocals )) -> VLYASIM_firstcombinatorial = (&VLYASIM_firstcombinatorial);
(( CMYASIM_insertcombinatorial * ) ( AMYASIM_insertcombinatorial.nonlocals )) -> WLYASIM_lastcombinatorial = (&WLYASIM_lastcombinatorial);
 /* line 1407: */
A_CLOSURE( FMYASIM_breakcombinatorialloop, GMYASIM_breakcombinatorialloop, HMYASIM_breakcombinatorialloop );
(( HMYASIM_breakcombinatorialloop * ) ( FMYASIM_breakcombinatorialloop.nonlocals )) -> YLYASIM_loopreports = (&YLYASIM_loopreports);
 /* line 1438: */
A_CLOSURE( XNYASIM_instantiateandsort, YNYASIM_instantiateandsort, ZNYASIM_instantiateandsort );
(( ZNYASIM_instantiateandsort * ) ( XNYASIM_instantiateandsort.nonlocals )) -> LLYASIM_insertevent = LLYASIM_insertevent;
(( ZNYASIM_instantiateandsort * ) ( XNYASIM_instantiateandsort.nonlocals )) -> AMYASIM_insertcombinatorial = AMYASIM_insertcombinatorial;
(( ZNYASIM_instantiateandsort * ) ( XNYASIM_instantiateandsort.nonlocals )) -> FMYASIM_breakcombinatorialloop = FMYASIM_breakcombinatorialloop;
(( ZNYASIM_instantiateandsort * ) ( XNYASIM_instantiateandsort.nonlocals )) -> WLYASIM_lastcombinatorial = (&WLYASIM_lastcombinatorial);
 /* line 1460: */
A_CLOSURE( JOYASIM_generator, KOYASIM_generator, LOYASIM_generator );
(( LOYASIM_generator * ) ( JOYASIM_generator.nonlocals )) -> Probefnnos = Probefnnos;
A_CALLPROC(JOYASIM_generator,(A68_FALSE, &OOYASIM),(A68_FALSE, &OOYASIM,(JOYASIM_generator).nonlocals));
UMXASIM_probefnenv = OOYASIM;
 /* line 1461: */
QOYASIM = Probefnnos.upb;
for ( POYASIM_i = 1;
POYASIM_i <= QOYASIM;
POYASIM_i += 1 )
{ 
ROYASIM = (&A_VINDEX(UMXASIM_probefnenv,POYASIM_i)) ;
(*ROYASIM) = TMXASIM_emptyfnenv;
}
 /* line 1462: */
VMXASIM_circuitfnenv = TMXASIM_emptyfnenv;
 /* line 1463: */
A_CLOSURE( TOYASIM_generator, UOYASIM_generator, VOYASIM_generator );
(( VOYASIM_generator * ) ( TOYASIM_generator.nonlocals )) -> Probefnnos = Probefnnos;
A_CALLPROC(TOYASIM_generator,(A68_FALSE, &YOYASIM),(A68_FALSE, &YOYASIM,(TOYASIM_generator).nonlocals));
BMXASIM_probeinstanceptrs = YOYASIM;
 /* line 1466: */
XLXASIM_instances = (&((&VMXASIM_circuitfnenv)->Instances));
 /* line 1467: */
FMXASIM_breaks = (&((&VMXASIM_circuitfnenv)->Breaks));
 /* line 1468: */
EMXASIM_fanouts = (&((&VMXASIM_circuitfnenv)->Fanouts));
 /* line 1469: */
YLXASIM_lastinstance = (&((&VMXASIM_circuitfnenv)->Lastinstance));
 /* line 1470: */
GMXASIM_lastbreak = (&((&VMXASIM_circuitfnenv)->Lastbreak));
 /* line 1471: */
VLYASIM_firstcombinatorial = (&((&VMXASIM_circuitfnenv)->Firstcombinatorial));
 /* line 1472: */
WLYASIM_lastcombinatorial = (&((&VMXASIM_circuitfnenv)->Lastcombinatorial));
 /* line 1473: */
JLYASIM_firsteventhandler = (&((&VMXASIM_circuitfnenv)->Firsteventhandler));
 /* line 1474: */
AMXASIM_instanceptrs = (&CMXASIM_circuitinstanceptrs);
 /* line 1477: */
A_CALLPROC(XNYASIM_instantiateandsort,(Simmakeno, A68_FALSE),(Simmakeno, A68_FALSE,(XNYASIM_instantiateandsort).nonlocals));
 /* line 1478: */
 /* line 1479: */
ZOYASIM_size = (TVXASIM_constructinstanceptrs(TYOASIM_globalend, A68_FALSE)+ZLXASIM_alienworkspacesize);
 /* line 1480: */
APYASIM_totalsize = ZOYASIM_size;
 /* line 1483: */
CPYASIM = Probefnnos.upb;
for ( BPYASIM_i = 1;
BPYASIM_i <= CPYASIM;
BPYASIM_i += 1 )
{ 
 /* line 1484: */
XLXASIM_instances = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Instances));
 /* line 1485: */
FMXASIM_breaks = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Breaks));
 /* line 1486: */
EMXASIM_fanouts = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Fanouts));
 /* line 1487: */
YLXASIM_lastinstance = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Lastinstance));
 /* line 1488: */
GMXASIM_lastbreak = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Lastbreak));
 /* line 1489: */
VLYASIM_firstcombinatorial = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Firstcombinatorial));
 /* line 1490: */
WLYASIM_lastcombinatorial = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Lastcombinatorial));
 /* line 1491: */
JLYASIM_firsteventhandler = (&((&A_VINDEX(UMXASIM_probefnenv,BPYASIM_i))->Firsteventhandler));
 /* line 1493: */
DPYASIM = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,BPYASIM_i))->Fnno)) ;
(*DPYASIM) = A_VINDEX(Probefnnos,BPYASIM_i);
 /* line 1494: */
AMXASIM_instanceptrs = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,BPYASIM_i))->Instptrs));
 /* line 1496: */
 /* line 1497: */
QIYASIM_translateprobetoplevel( A_VINDEX(Probefnnos,BPYASIM_i), &EPYASIM );
FPYASIM_top = EPYASIM;
 /* line 1499: */
A_CALLPROC(XNYASIM_instantiateandsort,(FPYASIM_top.Makeno, A68_TRUE),(FPYASIM_top.Makeno, A68_TRUE,(XNYASIM_instantiateandsort).nonlocals));
 /* line 1500: */
GPYASIM_size = TVXASIM_constructinstanceptrs(0, A68_TRUE);
 /* line 1502: */
HPYASIM = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,BPYASIM_i))->Inputinstance)) ;
(*HPYASIM) = FPYASIM_top.Inputinstance;
 /* line 1503: */
IPYASIM = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,BPYASIM_i))->Probeinstance)) ;
(*IPYASIM) = FPYASIM_top.Probeinstance;
 /* line 1504: */
JPYASIM = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,BPYASIM_i))->Size)) ;
(*JPYASIM) = GPYASIM_size;
 /* line 1505: */
 /* line 1506: */
APYASIM_totalsize+=GPYASIM_size;
}
 /* line 1509: */
DKPASIM_translatestartcallsarray(Flt);
 /* line 1510: */
AHYASIM_probeinitialisercalls();
 /* line 1511: */
EKPASIM_translatestartterminators();
 /* line 1512: */
JHYASIM_terminatorcalls();
 /* line 1513: */
SHYASIM_probephasecalls(RHCASIM_terminated, HDYASIM_terminatorphase);
 /* line 1514: */
HKPASIM_translatestartsavers();
 /* line 1515: */
BIYASIM_savercalls();
 /* line 1516: */
SHYASIM_probephasecalls(PHCASIM_saved, IDYASIM_saverphase);
 /* line 1517: */
JKPASIM_translatestartrestorers();
 /* line 1518: */
IIYASIM_restorercalls();
 /* line 1519: */
SHYASIM_probephasecalls(QHCASIM_restored, JDYASIM_restorerphase);
 /* line 1520: */
LKPASIM_translatestartinitialisers();
 /* line 1521: */
RGYASIM_initialisercalls();
 /* line 1522: */
QKPASIM_translatestartcallsloop();
 /* line 1523: */
JEYASIM_breakinitialisercalls();
 /* line 1524: */
UEYASIM_probebreakinitialisercalls();
 /* line 1525: */
TKPASIM_translatestartcombinatorialloop();
 /* line 1526: */
LDYASIM_combinatorialcalls();
 /* line 1527: */
VKPASIM_translateendcombinatorialloop();
 /* line 1528: */
TKPASIM_translatestartcombinatorialloop();
 /* line 1529: */
BEYASIM_probecombinatorialcalls();
 /* line 1530: */
VKPASIM_translateendcombinatorialloop();
 /* line 1531: */
YKPASIM_translatetimetest();
 /* line 1532: */
IFYASIM_eventsettingcalls();
 /* line 1533: */
RFYASIM_probeeventsettingcalls();
 /* line 1534: */
FLPASIM_translatetimeadvance();
 /* line 1535: */
JGYASIM_probeeventhandlingcalls();
 /* line 1536: */
AGYASIM_eventhandlingcalls();
 /* line 1537: */
AMPASIM_translateendcallsarray();
 /* line 1540: */
 /* line 1541: */
 /* line 1542: */
 /* line 1543: */
 /* line 1544: */
 /* line 1545: */
RWXASIM_constructmemory(A68_FALSE, APYASIM_totalsize, ZOYASIM_size, (*(&((&VMXASIM_circuitfnenv)->Lastinstance))), (*(&((&VMXASIM_circuitfnenv)->Instances))), (*(&((&VMXASIM_circuitfnenv)->Fanouts))), CMXASIM_circuitinstanceptrs, Flt);
 /* line 1548: */
LPYASIM = UMXASIM_probefnenv.upb;
for ( KPYASIM_i = 1;
KPYASIM_i <= LPYASIM;
KPYASIM_i += 1 )
{ 
 /* line 1549: */
 /* line 1550: */
 /* line 1551: */
 /* line 1552: */
 /* line 1553: */
 /* line 1554: */
 /* line 1555: */
 /* line 1556: */
 /* line 1557: */
MPYASIM = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,KPYASIM_i))->Baseoffset)) ;
(*MPYASIM) = RWXASIM_constructmemory(A68_TRUE, APYASIM_totalsize, (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,KPYASIM_i))->Size))), (*(&((&A_VINDEX(UMXASIM_probefnenv,KPYASIM_i))->Lastinstance))), (*(&((&A_VINDEX(UMXASIM_probefnenv,KPYASIM_i))->Instances))), (*(&((&A_VINDEX(UMXASIM_probefnenv,KPYASIM_i))->Fanouts))), (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,KPYASIM_i))->Instptrs))), Flt);
}
 /* line 1560: */
AMXASIM_instanceptrs = (&CMXASIM_circuitinstanceptrs);
 /* line 1561: */
VMXASIM_circuitfnenv = TMXASIM_emptyfnenv;
 /* line 1562: */
OPYASIM = UMXASIM_probefnenv.upb;
for ( NPYASIM_i = 1;
NPYASIM_i <= OPYASIM;
NPYASIM_i += 1 )
{ 
PPYASIM = (&A_VINDEX(UMXASIM_probefnenv,NPYASIM_i)) ;
(*PPYASIM) = TMXASIM_emptyfnenv;
}
 /* line 1563: */
A_CLOSURE( RPYASIM_generator, SPYASIM_generator, TPYASIM_generator );
A_CALLPROC(RPYASIM_generator,(A68_FALSE, &WPYASIM),(A68_FALSE, &WPYASIM,(RPYASIM_generator).nonlocals));
ANXASIM_makes = WPYASIM;
 /* line 1564: */
CNXASIM_lastmake = 0;
 /* line 1565: */
A_CLOSURE( YPYASIM_generator, ZPYASIM_generator, AQYASIM_generator );
A_CALLPROC(YPYASIM_generator,(A68_FALSE, &DQYASIM),(A68_FALSE, &DQYASIM,(YPYASIM_generator).nonlocals));
HNXASIM_constants = DQYASIM;
 /* line 1566: */
ZLXASIM_alienworkspacesize = 0;
 /* line 1567: */
 /* line 1568: */
JNXASIM_lastconstant = 0;
} 
A_PROC_EXIT(constructcalls);
return;
} 
#undef NL

A_STATIC A68_VOID  GQYASIM_new(A68_177  Blocks, A68_177  *ReturnedValue)
{ 
A68_498  IQYASIM_generator;   /* proc value of non-global proc */
A68_177  NQYASIM;  /* avoid structure result */
A68_177  OQYASIM_new;
A68_177  PQYASIM;  /* clause result */
A_PROC_ENTRY(new);
 /* line 1613: */
 /* line 1615: */
{ 
A_CLOSURE( IQYASIM_generator, JQYASIM_generator, KQYASIM_generator );
(( KQYASIM_generator * ) ( IQYASIM_generator.nonlocals )) -> Blocks = Blocks;
A_CALLPROC(IQYASIM_generator,(A68_FALSE, &NQYASIM),(A68_FALSE, &NQYASIM,(IQYASIM_generator).nonlocals));
OQYASIM_new = NQYASIM;
A_VASSIGN2(Blocks,OQYASIM_new,A68_178 );
 /* line 1616: */
PQYASIM = OQYASIM_new;
} 
A_PROC_EXIT(new);
*ReturnedValue = (PQYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RQYASIM_wire(A68_554  Local, A68_173  *ReturnedValue)
{ 
A68_554  SQYASIM;  /* united object - for case conformity */
A68_173  TQYASIM_wire;
A68_173  UQYASIM;  /* clause result */
A68_181  VQYASIM_box;
A68_173  WQYASIM;  /* avoid structure result */
A68_173  XQYASIM_outputs;
A68_160  YQYASIM_type;
A68_177  ZQYASIM;  /* avoid structure result */
A68_177  ARYASIM_blocks;
A68_INT  BRYASIM_instance;
A68_178 * CRYASIM_block;
A68_INT  DRYASIM;  /* forall loop counter */
A68_INT * ERYASIM;  /* YIELD */
A68_173  FRYASIM;  /* collateral clause result */
A68_551  GRYASIM_mbox;
A68_168 * HRYASIM_sst;
A68_168 ** IRYASIM_end;
A68_177  JRYASIM_blocks;
A68_173  KRYASIM;  /* avoid structure result */
A68_173  LRYASIM_outputs;
A68_160  MRYASIM_type1;
A68_177  NRYASIM_blocks1;
A68_32  ORYASIM_instances;
A68_INT  PRYASIM_i;
A68_INT  QRYASIM;  /* to part of loop */
A68_168  RRYASIM;  /* collateral clause result */
A68_168 * SRYASIM;  /* YIELD */
A68_498  URYASIM_generator;   /* proc value of non-global proc */
A68_177  ZRYASIM;  /* avoid structure result */
A68_177  ASYASIM_blocksn;
A68_178 * BSYASIM_block;
A68_INT  CSYASIM;  /* forall loop counter */
A68_INT * DSYASIM;  /* YIELD */
A68_177  ESYASIM;  /* avoid structure result */
A68_173  FSYASIM;  /* collateral clause result */
A68_160  GSYASIM;  /* OPERATORS - mode -> union mode */
A68_552  HSYASIM_pbox;
A_PROC_ENTRY(wire);
 /* line 1626: */
 /* line 1627: */
SQYASIM = Local ;
switch ( SQYASIM.mode )
{ 
case 3: /* STRUCT(MODE160,REF MODE177)  */
TQYASIM_wire = (SQYASIM.data.mode3);
 /* line 1628: */
UQYASIM = TQYASIM_wire;
break;
case 1: /* STRUCT(INT,INT)  */
VQYASIM_box = (SQYASIM.data.mode1);
 /* line 1629: */
 /* line 1630: */
{ 
MWCASIM_lookupoutputs( VQYASIM_box.Fn, &WQYASIM );
XQYASIM_outputs = WQYASIM;
 /* line 1631: */
YQYASIM_type = XQYASIM_outputs.Type;
 /* line 1632: */
GQYASIM_new( XQYASIM_outputs.Blocks, &ZQYASIM );
ARYASIM_blocks = ZQYASIM;
 /* line 1633: */
BRYASIM_instance = VQYASIM_box.Instance;
 /* line 1634: */
DRYASIM = ARYASIM_blocks.upb -1;
CRYASIM_block = ARYASIM_blocks.data;
for (;DRYASIM-- >= 0;
(CRYASIM_block++
) )
{
 /* line 1635: */
 /* line 1636: */
ERYASIM = (&(CRYASIM_block->Instoffset)) ;
(*ERYASIM)+=BRYASIM_instance;
}
 /* line 1637: */
FRYASIM.Type = YQYASIM_type;
 /* line 1638: */
 /* line 1639: */
FRYASIM.Blocks = ARYASIM_blocks;
UQYASIM = FRYASIM;
} 
break;
case 2: /* STRUCT(INT,REF MODE32)  */
GRYASIM_mbox = (SQYASIM.data.mode2);
 /* line 1640: */
 /* line 1641: */
{ 
HRYASIM_sst = WSAASIM_nilsst;
 /* line 1642: */
IRYASIM_end = (&HRYASIM_sst);
 /* line 1643: */
JRYASIM_blocks = VLXASIM_nullrvb;
 /* line 1644: */
MWCASIM_lookupoutputs( GRYASIM_mbox.Fn, &KRYASIM );
LRYASIM_outputs = KRYASIM;
 /* line 1645: */
MRYASIM_type1 = LRYASIM_outputs.Type;
 /* line 1646: */
NRYASIM_blocks1 = LRYASIM_outputs.Blocks;
 /* line 1647: */
ORYASIM_instances = GRYASIM_mbox.Instances;
 /* line 1648: */
QRYASIM = ORYASIM_instances.upb;
for ( PRYASIM_i = 1;
PRYASIM_i <= QRYASIM;
PRYASIM_i += 1 )
{ 
 /* line 1649: */
RRYASIM.T = MRYASIM_type1;
RRYASIM.Rest = WSAASIM_nilsst;
SRYASIM = A_HEAP(A68_168 ) ;
(*SRYASIM) = RRYASIM ;
(*IRYASIM_end) = SRYASIM;
 /* line 1651: */
IRYASIM_end = (&((*IRYASIM_end)->Rest));
 /* line 1652: */
A_CLOSURE( URYASIM_generator, VRYASIM_generator, WRYASIM_generator );
(( WRYASIM_generator * ) ( URYASIM_generator.nonlocals )) -> NRYASIM_blocks1 = NRYASIM_blocks1;
A_CALLPROC(URYASIM_generator,(A68_FALSE, &ZRYASIM),(A68_FALSE, &ZRYASIM,(URYASIM_generator).nonlocals));
ASYASIM_blocksn = ZRYASIM;
A_VASSIGN2(NRYASIM_blocks1,ASYASIM_blocksn,A68_178 );
 /* line 1653: */
CSYASIM = ASYASIM_blocksn.upb -1;
BSYASIM_block = ASYASIM_blocksn.data;
for (;CSYASIM-- >= 0;
(BSYASIM_block++
) )
{
 /* line 1654: */
 /* line 1655: */
DSYASIM = (&(BSYASIM_block->Instoffset)) ;
(*DSYASIM)+=(*(&A_VINDEX(ORYASIM_instances,PRYASIM_i)));
}
 /* line 1656: */
 /* line 1657: */
LABASIM_( JRYASIM_blocks, ASYASIM_blocksn, &ESYASIM );
JRYASIM_blocks = ESYASIM;
}
 /* line 1658: */
FSYASIM.Type = A_UNITE(GSYASIM,mode7,7,HRYASIM_sst);
 /* line 1659: */
 /* line 1660: */
FSYASIM.Blocks = JRYASIM_blocks;
UQYASIM = FSYASIM;
} 
break;
case 4: /* STRUCT(MODE553,MODE173)  */
HSYASIM_pbox = (SQYASIM.data.mode4);
 /* line 1661: */
UQYASIM = HSYASIM_pbox.Wire;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(wire);
*ReturnedValue = (UQYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JSYASIM_mwire(A68_554  Local, A68_173  *ReturnedValue)
{ 
A68_554  KSYASIM;  /* united object - for case conformity */
A68_173  LSYASIM_wire;
A68_173  MSYASIM;  /* clause result */
A68_181  NSYASIM_box;
A68_190  OSYASIM;  /* avoid structure result */
A68_173  PSYASIM_outputs;
A68_160  QSYASIM_type;
A68_177  RSYASIM;  /* avoid structure result */
A68_177  SSYASIM_blocks;
A68_INT  TSYASIM_instance;
A68_178 * USYASIM_block;
A68_INT  VSYASIM;  /* forall loop counter */
A68_INT * WSYASIM;  /* YIELD */
A68_173  XSYASIM;  /* collateral clause result */
A68_551  YSYASIM_mbox;
A68_168 * ZSYASIM_sst;
A68_168 ** ATYASIM_end;
A68_177  BTYASIM_blocks;
A68_190  CTYASIM;  /* avoid structure result */
A68_173  DTYASIM_outputs;
A68_160  ETYASIM_type1;
A68_177  FTYASIM_blocks1;
A68_32  GTYASIM_instances;
A68_INT  HTYASIM_i;
A68_INT  ITYASIM;  /* to part of loop */
A68_168  JTYASIM;  /* collateral clause result */
A68_168 * KTYASIM;  /* YIELD */
A68_498  MTYASIM_generator;   /* proc value of non-global proc */
A68_177  RTYASIM;  /* avoid structure result */
A68_177  STYASIM_blocksn;
A68_178 * TTYASIM_block;
A68_INT  UTYASIM;  /* forall loop counter */
A68_INT * VTYASIM;  /* YIELD */
A68_177  WTYASIM;  /* avoid structure result */
A68_173  XTYASIM;  /* collateral clause result */
A68_160  YTYASIM;  /* OPERATORS - mode -> union mode */
A68_552  ZTYASIM_pbox;
A_PROC_ENTRY(mwire);
 /* line 1665: */
 /* line 1666: */
KSYASIM = Local ;
switch ( KSYASIM.mode )
{ 
case 3: /* STRUCT(MODE160,REF MODE177)  */
LSYASIM_wire = (KSYASIM.data.mode3);
 /* line 1667: */
MSYASIM = LSYASIM_wire;
break;
case 1: /* STRUCT(INT,INT)  */
NSYASIM_box = (KSYASIM.data.mode1);
 /* line 1668: */
 /* line 1669: */
{ 
GSCASIM_rawlookupfunction( NSYASIM_box.Fn, &OSYASIM );
PSYASIM_outputs = OSYASIM.Outputs;
 /* line 1670: */
QSYASIM_type = PSYASIM_outputs.Type;
 /* line 1671: */
GQYASIM_new( PSYASIM_outputs.Blocks, &RSYASIM );
SSYASIM_blocks = RSYASIM;
 /* line 1672: */
TSYASIM_instance = NSYASIM_box.Instance;
 /* line 1673: */
VSYASIM = SSYASIM_blocks.upb -1;
USYASIM_block = SSYASIM_blocks.data;
for (;VSYASIM-- >= 0;
(USYASIM_block++
) )
{
 /* line 1674: */
 /* line 1675: */
WSYASIM = (&(USYASIM_block->Instoffset)) ;
(*WSYASIM)+=TSYASIM_instance;
}
 /* line 1676: */
XSYASIM.Type = QSYASIM_type;
 /* line 1677: */
 /* line 1678: */
XSYASIM.Blocks = SSYASIM_blocks;
MSYASIM = XSYASIM;
} 
break;
case 2: /* STRUCT(INT,REF MODE32)  */
YSYASIM_mbox = (KSYASIM.data.mode2);
 /* line 1679: */
 /* line 1680: */
{ 
ZSYASIM_sst = WSAASIM_nilsst;
 /* line 1681: */
ATYASIM_end = (&ZSYASIM_sst);
 /* line 1682: */
BTYASIM_blocks = VLXASIM_nullrvb;
 /* line 1683: */
GSCASIM_rawlookupfunction( YSYASIM_mbox.Fn, &CTYASIM );
DTYASIM_outputs = CTYASIM.Outputs;
 /* line 1684: */
ETYASIM_type1 = DTYASIM_outputs.Type;
 /* line 1685: */
FTYASIM_blocks1 = DTYASIM_outputs.Blocks;
 /* line 1686: */
GTYASIM_instances = YSYASIM_mbox.Instances;
 /* line 1687: */
ITYASIM = GTYASIM_instances.upb;
for ( HTYASIM_i = 1;
HTYASIM_i <= ITYASIM;
HTYASIM_i += 1 )
{ 
 /* line 1688: */
JTYASIM.T = ETYASIM_type1;
JTYASIM.Rest = WSAASIM_nilsst;
KTYASIM = A_HEAP(A68_168 ) ;
(*KTYASIM) = JTYASIM ;
(*ATYASIM_end) = KTYASIM;
 /* line 1690: */
ATYASIM_end = (&((*ATYASIM_end)->Rest));
 /* line 1691: */
A_CLOSURE( MTYASIM_generator, NTYASIM_generator, OTYASIM_generator );
(( OTYASIM_generator * ) ( MTYASIM_generator.nonlocals )) -> FTYASIM_blocks1 = FTYASIM_blocks1;
A_CALLPROC(MTYASIM_generator,(A68_FALSE, &RTYASIM),(A68_FALSE, &RTYASIM,(MTYASIM_generator).nonlocals));
STYASIM_blocksn = RTYASIM;
A_VASSIGN2(FTYASIM_blocks1,STYASIM_blocksn,A68_178 );
 /* line 1692: */
UTYASIM = STYASIM_blocksn.upb -1;
TTYASIM_block = STYASIM_blocksn.data;
for (;UTYASIM-- >= 0;
(TTYASIM_block++
) )
{
 /* line 1693: */
 /* line 1694: */
VTYASIM = (&(TTYASIM_block->Instoffset)) ;
(*VTYASIM)+=(*(&A_VINDEX(GTYASIM_instances,HTYASIM_i)));
}
 /* line 1695: */
 /* line 1696: */
LABASIM_( BTYASIM_blocks, STYASIM_blocksn, &WTYASIM );
BTYASIM_blocks = WTYASIM;
}
 /* line 1697: */
XTYASIM.Type = A_UNITE(YTYASIM,mode7,7,ZSYASIM_sst);
 /* line 1698: */
 /* line 1699: */
XTYASIM.Blocks = BTYASIM_blocks;
MSYASIM = XTYASIM;
} 
break;
case 4: /* STRUCT(MODE553,MODE173)  */
ZTYASIM_pbox = (KSYASIM.data.mode4);
 /* line 1700: */
MSYASIM = ZTYASIM_pbox.Wire;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(mwire);
*ReturnedValue = (MSYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DUYASIM_trimblocks(A68_177  Original, A68_INT  Drop, A68_INT  Keep, A68_177  *ReturnedValue)
{ 
A68_177  EUYASIM;  /* avoid structure result */
A68_177  FUYASIM_blocks;
A68_INT  GUYASIM_anslwb;
A68_INT  HUYASIM_todrop;
A68_INT * IUYASIM;  /* YIELD */
A68_BOOL  JUYASIM;  /* optbool result */
A68_INT * MUYASIM;  /* YIELD */
A68_INT  NUYASIM_ansupb;
A68_INT  OUYASIM_tokeep;
A68_INT * PUYASIM;  /* YIELD */
A68_177  QUYASIM;  /* clause result */
A68_177  RUYASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(trimblocks);
 /* line 1710: */
 /* line 1711: */
{ 
GQYASIM_new( Original, &EUYASIM );
FUYASIM_blocks = EUYASIM;
 /* line 1712: */
GUYASIM_anslwb = 1;
 /* line 1713: */
HUYASIM_todrop = Drop;
 /* line 1714: */
for ( ;; )
{ 
 /* line 1715: */
if ( !(((*(&((&A_VINDEX(FUYASIM_blocks,GUYASIM_anslwb))->Size)))<=HUYASIM_todrop)) ) break;
HUYASIM_todrop-=(*(&((&A_VINDEX(FUYASIM_blocks,GUYASIM_anslwb))->Size)));
 /* line 1716: */
 /* line 1717: */
GUYASIM_anslwb+=1;
}
 /* line 1718: */
IUYASIM = (&((&A_VINDEX(FUYASIM_blocks,GUYASIM_anslwb))->Size)) ;
(*IUYASIM)-=HUYASIM_todrop;
 /* line 1719: */
JUYASIM = (HUYASIM_todrop>0);
if ( JUYASIM )
{JUYASIM = ((*(&((&A_VINDEX(FUYASIM_blocks,GUYASIM_anslwb))->Offset)))<0);
}
 /* line 1720: */
if ( JUYASIM )
{ 
 /* line 1721: */
 /* line 1722: */
NKDAOST_sysfault(LUYASIM);
} 
else
{ 
 /* line 1723: */
MUYASIM = (&((&A_VINDEX(FUYASIM_blocks,GUYASIM_anslwb))->Offset)) ;
(*MUYASIM)+=HUYASIM_todrop;
} 
 /* line 1725: */
NUYASIM_ansupb = GUYASIM_anslwb;
 /* line 1726: */
OUYASIM_tokeep = Keep;
 /* line 1727: */
for ( ;; )
{ 
 /* line 1728: */
if ( !(((*(&((&A_VINDEX(FUYASIM_blocks,NUYASIM_ansupb))->Size)))<OUYASIM_tokeep)) ) break;
OUYASIM_tokeep-=(*(&((&A_VINDEX(FUYASIM_blocks,NUYASIM_ansupb))->Size)));
 /* line 1729: */
 /* line 1730: */
NUYASIM_ansupb+=1;
}
 /* line 1731: */
PUYASIM = (&((&A_VINDEX(FUYASIM_blocks,NUYASIM_ansupb))->Size)) ;
(*PUYASIM) = OUYASIM_tokeep;
 /* line 1733: */
 /* line 1734: */
QUYASIM = A_VTRIM(RUYASIM,(FUYASIM_blocks),A_VTSCRIPT(&(RUYASIM.upb),(FUYASIM_blocks).upb,GUYASIM_anslwb,NUYASIM_ansupb));
} 
A_PROC_EXIT(trimblocks);
*ReturnedValue = (QUYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VUYASIM_trimwire(A68_173  Wire, A68_INT  Lwb, A68_INT  Upb, A68_173  *ReturnedValue)
{ 
A68_160  WUYASIM;  /* united object - for case conformity */
A68_165 * XUYASIM_r;
A68_160  YUYASIM_stype;
A68_INT  ZUYASIM_size;
A68_INT  AVYASIM_keep;
A68_INT  BVYASIM_drop;
A68_177  CVYASIM;  /* avoid structure result */
A68_177  DVYASIM_blocks;
A68_165  EVYASIM;  /* collateral clause result */
A68_165 * FVYASIM;  /* YIELD */
A68_160  GVYASIM;  /* OPERATORS - mode -> union mode */
A68_160  HVYASIM_otype;
A68_173  IVYASIM;  /* collateral clause result */
A68_173  JVYASIM;  /* clause result */
A68_168 * KVYASIM_s;
A68_168 * LVYASIM_p;
A68_INT  MVYASIM_drop;
A68_INT  NVYASIM_i;
A68_INT  OVYASIM;  /* to part of loop */
A68_INT  PVYASIM_keep;
A68_168 * QVYASIM_otype;
A68_168 ** RVYASIM_end;
A68_INT  SVYASIM_i;
A68_INT  TVYASIM;  /* to part of loop */
A68_168  UVYASIM;  /* collateral clause result */
A68_168 * VVYASIM;  /* YIELD */
A68_177  WVYASIM;  /* avoid structure result */
A68_177  XVYASIM_blocks;
A68_173  YVYASIM;  /* collateral clause result */
A68_160  ZVYASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(trimwire);
 /* line 1739: */
 /* line 1740: */
WUYASIM = Wire.Type ;
switch ( WUYASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE160)  */
XUYASIM_r = (WUYASIM.data.mode4);
 /* line 1741: */
 /* line 1742: */
{ 
YUYASIM_stype = (*(&(XUYASIM_r->Type)));
 /* line 1743: */
ZUYASIM_size = NZNASIM_machinewidth(YUYASIM_stype);
 /* line 1744: */
AVYASIM_keep = (ZUYASIM_size*((Upb-Lwb)+1));
 /* line 1745: */
BVYASIM_drop = (ZUYASIM_size*(Lwb-1));
 /* line 1746: */
DUYASIM_trimblocks( Wire.Blocks, BVYASIM_drop, AVYASIM_keep, &CVYASIM );
DVYASIM_blocks = CVYASIM;
 /* line 1748: */
EVYASIM.No = ((Upb-Lwb)+1);
EVYASIM.Type = YUYASIM_stype;
FVYASIM = A_HEAP(A68_165 ) ;
(*FVYASIM) = EVYASIM ;
HVYASIM_otype = A_UNITE(GVYASIM,mode4,4,FVYASIM);
 /* line 1749: */
IVYASIM.Type = HVYASIM_otype;
 /* line 1750: */
 /* line 1751: */
IVYASIM.Blocks = DVYASIM_blocks;
JVYASIM = IVYASIM;
} 
break;
case 7: /* REF STRUCT(MODE160,REF MODE168)  */
KVYASIM_s = (WUYASIM.data.mode7);
 /* line 1752: */
 /* line 1753: */
{ 
LVYASIM_p = KVYASIM_s;
 /* line 1754: */
MVYASIM_drop = 0;
 /* line 1755: */
OVYASIM = (Lwb-1);
for ( NVYASIM_i = 1;
NVYASIM_i <= OVYASIM;
NVYASIM_i += 1 )
{ 
 /* line 1756: */
MVYASIM_drop+=NZNASIM_machinewidth((*(&(LVYASIM_p->T))));
 /* line 1757: */
 /* line 1758: */
LVYASIM_p = (*(&(LVYASIM_p->Rest)));
}
 /* line 1759: */
PVYASIM_keep = 0;
 /* line 1760: */
QVYASIM_otype = WSAASIM_nilsst;
 /* line 1761: */
RVYASIM_end = (&QVYASIM_otype);
 /* line 1762: */
TVYASIM = Upb;
for ( SVYASIM_i = Lwb;
SVYASIM_i <= TVYASIM;
SVYASIM_i += 1 )
{ 
 /* line 1764: */
UVYASIM.T = (*(&(LVYASIM_p->T)));
UVYASIM.Rest = WSAASIM_nilsst;
VVYASIM = A_HEAP(A68_168 ) ;
(*VVYASIM) = UVYASIM ;
(*RVYASIM_end) = VVYASIM;
 /* line 1765: */
PVYASIM_keep+=NZNASIM_machinewidth((*(&(LVYASIM_p->T))));
 /* line 1766: */
RVYASIM_end = (&((*RVYASIM_end)->Rest));
 /* line 1767: */
 /* line 1768: */
LVYASIM_p = (*(&(LVYASIM_p->Rest)));
}
 /* line 1769: */
DUYASIM_trimblocks( Wire.Blocks, MVYASIM_drop, PVYASIM_keep, &WVYASIM );
XVYASIM_blocks = WVYASIM;
 /* line 1770: */
YVYASIM.Type = A_UNITE(ZVYASIM,mode7,7,QVYASIM_otype);
 /* line 1771: */
 /* line 1772: */
YVYASIM.Blocks = XVYASIM_blocks;
JVYASIM = YVYASIM;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(trimwire);
*ReturnedValue = (JVYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DWYASIM_trimlocal(A68_554  Local, A68_INT  Lwb, A68_INT  Upb, A68_554  *ReturnedValue)
{ 
A68_554  EWYASIM;  /* united object - for case conformity */
A68_181  FWYASIM_box;
A68_554  GWYASIM;  /* clause result */
A68_554  HWYASIM;  /* OPERATORS - mode -> union mode */
A68_173  IWYASIM;  /* avoid structure result */
A68_173  JWYASIM;  /* avoid structure result */
A68_554  KWYASIM;  /* OPERATORS - mode -> union mode */
A68_551  LWYASIM_mbox;
A68_551  MWYASIM;  /* collateral clause result */
A68_32  NWYASIM;  /* OPERATORS - trim index */
A68_32  OWYASIM;  /* OPERATORS - trim index */
A68_554  PWYASIM;  /* OPERATORS - mode -> union mode */
A68_173  QWYASIM;  /* avoid structure result */
A68_173  RWYASIM;  /* avoid structure result */
A68_554  SWYASIM;  /* OPERATORS - mode -> union mode */
A68_173  TWYASIM_wire;
A68_173  UWYASIM;  /* avoid structure result */
A68_554  VWYASIM;  /* OPERATORS - mode -> union mode */
A68_552  WWYASIM_pbox;
A68_173  XWYASIM;  /* avoid structure result */
A68_554  YWYASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(trimlocal);
 /* line 1779: */
 /* line 1780: */
EWYASIM = Local ;
switch ( EWYASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
FWYASIM_box = (EWYASIM.data.mode1);
 /* line 1781: */
RQYASIM_wire( A_UNITE(HWYASIM,mode1,1,FWYASIM_box), &IWYASIM );
VUYASIM_trimwire( IWYASIM, Lwb, Upb, &JWYASIM );
GWYASIM = A_UNITE(KWYASIM,mode3,3,JWYASIM);
break;
case 2: /* STRUCT(INT,REF MODE32)  */
LWYASIM_mbox = (EWYASIM.data.mode2);
 /* line 1782: */
 /* line 1783: */
if ( (LWYASIM_mbox.Instances.upb>1) )
{ 
MWYASIM.Fn = LWYASIM_mbox.Fn;
 /* line 1784: */
NWYASIM = LWYASIM_mbox.Instances ;
MWYASIM.Instances = A_VTRIM(OWYASIM,(NWYASIM),A_VTSCRIPT(&(OWYASIM.upb),(NWYASIM).upb,Lwb,Upb));
 /* line 1785: */
GWYASIM = A_UNITE(PWYASIM,mode2,2,MWYASIM);
} 
else
{ 
 /* line 1786: */
 /* line 1787: */
RQYASIM_wire( Local, &QWYASIM );
VUYASIM_trimwire( QWYASIM, Lwb, Upb, &RWYASIM );
GWYASIM = A_UNITE(SWYASIM,mode3,3,RWYASIM);
} 
break;
case 3: /* STRUCT(MODE160,REF MODE177)  */
TWYASIM_wire = (EWYASIM.data.mode3);
 /* line 1788: */
VUYASIM_trimwire( TWYASIM_wire, Lwb, Upb, &UWYASIM );
GWYASIM = A_UNITE(VWYASIM,mode3,3,UWYASIM);
break;
case 4: /* STRUCT(MODE553,MODE173)  */
WWYASIM_pbox = (EWYASIM.data.mode4);
 /* line 1789: */
VUYASIM_trimwire( WWYASIM_pbox.Wire, Lwb, Upb, &XWYASIM );
GWYASIM = A_UNITE(YWYASIM,mode3,3,XWYASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(trimlocal);
*ReturnedValue = (GWYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BXYASIM_indextype(A68_160  Type, A68_INT  Ix, A68_160  *ReturnedValue)
{ 
A68_160  CXYASIM;  /* united object - for case conformity */
A68_165 * DXYASIM_r;
A68_160  EXYASIM;  /* clause result */
A68_168 * FXYASIM_s;
A68_168 * GXYASIM_p;
A68_INT  HXYASIM_i;
A68_INT  IXYASIM;  /* to part of loop */
A_PROC_ENTRY(indextype);
 /* line 1794: */
 /* line 1795: */
CXYASIM = Type ;
switch ( CXYASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE160)  */
DXYASIM_r = (CXYASIM.data.mode4);
 /* line 1796: */
EXYASIM = (*(&(DXYASIM_r->Type)));
break;
case 7: /* REF STRUCT(MODE160,REF MODE168)  */
FXYASIM_s = (CXYASIM.data.mode7);
 /* line 1797: */
 /* line 1798: */
{ 
GXYASIM_p = FXYASIM_s;
 /* line 1799: */
IXYASIM = (Ix-1);
for ( HXYASIM_i = 1;
HXYASIM_i <= IXYASIM;
HXYASIM_i += 1 )
{ 
GXYASIM_p = (*(&(GXYASIM_p->Rest)));
}
 /* line 1800: */
 /* line 1801: */
 /* line 1802: */
EXYASIM = (*(&(GXYASIM_p->T)));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(indextype);
*ReturnedValue = (EXYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LXYASIM_indexwire(A68_173  Wire, A68_INT  Ix, A68_173  *ReturnedValue)
{ 
A68_160  MXYASIM;  /* united object - for case conformity */
A68_165 * NXYASIM_r;
A68_160  OXYASIM_stype;
A68_INT  PXYASIM_size;
A68_INT  QXYASIM_drop;
A68_177  RXYASIM;  /* avoid structure result */
A68_177  SXYASIM_blocks;
A68_173  TXYASIM;  /* collateral clause result */
A68_173  UXYASIM;  /* clause result */
A68_168 * VXYASIM_s;
A68_168 * WXYASIM_p;
A68_INT  XXYASIM_drop;
A68_INT  YXYASIM_i;
A68_INT  ZXYASIM;  /* to part of loop */
A68_160  AYYASIM_stype;
A68_INT  BYYASIM_size;
A68_177  CYYASIM;  /* avoid structure result */
A68_177  DYYASIM_blocks;
A68_173  EYYASIM;  /* collateral clause result */
A_PROC_ENTRY(indexwire);
 /* line 1805: */
 /* line 1806: */
MXYASIM = Wire.Type ;
switch ( MXYASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE160)  */
NXYASIM_r = (MXYASIM.data.mode4);
 /* line 1807: */
 /* line 1808: */
{ 
OXYASIM_stype = (*(&(NXYASIM_r->Type)));
 /* line 1809: */
PXYASIM_size = NZNASIM_machinewidth(OXYASIM_stype);
 /* line 1810: */
QXYASIM_drop = (PXYASIM_size*(Ix-1));
 /* line 1811: */
DUYASIM_trimblocks( Wire.Blocks, QXYASIM_drop, PXYASIM_size, &RXYASIM );
SXYASIM_blocks = RXYASIM;
 /* line 1812: */
TXYASIM.Type = OXYASIM_stype;
 /* line 1813: */
 /* line 1814: */
TXYASIM.Blocks = SXYASIM_blocks;
UXYASIM = TXYASIM;
} 
break;
case 7: /* REF STRUCT(MODE160,REF MODE168)  */
VXYASIM_s = (MXYASIM.data.mode7);
 /* line 1815: */
 /* line 1816: */
{ 
WXYASIM_p = VXYASIM_s;
 /* line 1817: */
XXYASIM_drop = 0;
 /* line 1818: */
ZXYASIM = (Ix-1);
for ( YXYASIM_i = 1;
YXYASIM_i <= ZXYASIM;
YXYASIM_i += 1 )
{ 
 /* line 1819: */
XXYASIM_drop+=NZNASIM_machinewidth((*(&(WXYASIM_p->T))));
 /* line 1820: */
 /* line 1821: */
WXYASIM_p = (*(&(WXYASIM_p->Rest)));
}
 /* line 1822: */
AYYASIM_stype = (*(&(WXYASIM_p->T)));
 /* line 1823: */
BYYASIM_size = NZNASIM_machinewidth(AYYASIM_stype);
 /* line 1824: */
DUYASIM_trimblocks( Wire.Blocks, XXYASIM_drop, BYYASIM_size, &CYYASIM );
DYYASIM_blocks = CYYASIM;
 /* line 1825: */
EYYASIM.Type = AYYASIM_stype;
 /* line 1826: */
 /* line 1827: */
EYYASIM.Blocks = DYYASIM_blocks;
UXYASIM = EYYASIM;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(indexwire);
*ReturnedValue = (UXYASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HYYASIM_indexlocal(A68_554  Local, A68_INT  Ix, A68_554  *ReturnedValue)
{ 
A68_554  IYYASIM;  /* united object - for case conformity */
A68_181  JYYASIM_box;
A68_554  KYYASIM;  /* clause result */
A68_554  LYYASIM;  /* OPERATORS - mode -> union mode */
A68_173  MYYASIM;  /* avoid structure result */
A68_173  NYYASIM;  /* avoid structure result */
A68_554  OYYASIM;  /* OPERATORS - mode -> union mode */
A68_551  PYYASIM_mbox;
A68_181  QYYASIM;  /* collateral clause result */
A68_32  RYYASIM;  /* OPERATORS - simple index */
A68_554  SYYASIM;  /* OPERATORS - mode -> union mode */
A68_173  TYYASIM;  /* avoid structure result */
A68_173  UYYASIM;  /* avoid structure result */
A68_554  VYYASIM;  /* OPERATORS - mode -> union mode */
A68_173  WYYASIM_wire;
A68_173  XYYASIM;  /* avoid structure result */
A68_554  YYYASIM;  /* OPERATORS - mode -> union mode */
A68_552  ZYYASIM_pbox;
A68_173  AZYASIM;  /* avoid structure result */
A68_554  BZYASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(indexlocal);
 /* line 1830: */
 /* line 1831: */
IYYASIM = Local ;
switch ( IYYASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
JYYASIM_box = (IYYASIM.data.mode1);
 /* line 1832: */
RQYASIM_wire( A_UNITE(LYYASIM,mode1,1,JYYASIM_box), &MYYASIM );
LXYASIM_indexwire( MYYASIM, Ix, &NYYASIM );
KYYASIM = A_UNITE(OYYASIM,mode3,3,NYYASIM);
break;
case 2: /* STRUCT(INT,REF MODE32)  */
PYYASIM_mbox = (IYYASIM.data.mode2);
 /* line 1833: */
 /* line 1834: */
if ( (PYYASIM_mbox.Instances.upb>1) )
{ 
QYYASIM.Fn = PYYASIM_mbox.Fn;
 /* line 1835: */
RYYASIM = PYYASIM_mbox.Instances ;
QYYASIM.Instance = (*(&A_VINDEX(RYYASIM,Ix)));
 /* line 1836: */
KYYASIM = A_UNITE(SYYASIM,mode1,1,QYYASIM);
} 
else
{ 
 /* line 1837: */
 /* line 1838: */
RQYASIM_wire( Local, &TYYASIM );
LXYASIM_indexwire( TYYASIM, Ix, &UYYASIM );
KYYASIM = A_UNITE(VYYASIM,mode3,3,UYYASIM);
} 
break;
case 3: /* STRUCT(MODE160,REF MODE177)  */
WYYASIM_wire = (IYYASIM.data.mode3);
 /* line 1839: */
LXYASIM_indexwire( WYYASIM_wire, Ix, &XYYASIM );
KYYASIM = A_UNITE(YYYASIM,mode3,3,XYYASIM);
break;
case 4: /* STRUCT(MODE553,MODE173)  */
ZYYASIM_pbox = (IYYASIM.data.mode4);
 /* line 1840: */
LXYASIM_indexwire( ZYYASIM_pbox.Wire, Ix, &AZYASIM );
KYYASIM = A_UNITE(BZYASIM,mode3,3,AZYASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(indexlocal);
*ReturnedValue = (KYYASIM);
return;
} 
#undef NL
 /* line 1861: */
 /* line 1862: */
 /* line 1863: */
 /* line 1864: */

A_STATIC A68_VOID  MZYASIM_declare(A68_275  Series, A68_INT  Parentfnno, A68_230 * Declaration, A68_232 * Environ, A68_233 * Closure, A68_563  Locals, A68_438  Ids, A68_INT * Constantsend, A68_INT  Diaglevel, A68_36  Flt, A68_554  *ReturnedValue)
{ 
A68_565  OZYASIM;  /* OPERATORS - nil -> mode */
A68_565  NZYASIM_localchanges;
A68_154  SAZASIM_convertfnno;   /* proc value of non-global proc */
A68_569  ABZASIM_declaremake;   /* proc value of non-global proc */
A68_571  ADZASIM_declareunit;   /* proc value of non-global proc */
A68_573  KGZASIM_join_nameno;   /* proc value of non-global proc */
A68_575  WGZASIM_declarejoin;   /* proc value of non-global proc */
A68_578  HIZASIM_declarelet;   /* proc value of non-global proc */
A68_579  IKZASIM_declarefunction;   /* proc value of non-global proc */
A68_292 * OKZASIM_steps;
A68_293  PKZASIM_step;
A68_293  QKZASIM;  /* united object - for case conformity */
A68_296  RKZASIM_fn;
A68_299 * SKZASIM_let;
A68_300 * TKZASIM_make;
A68_301 * UKZASIM_join;
A68_INT  VKZASIM;  /* YIELD */
A68_554  WKZASIM;  /* united object - for case conformity */
A68_181  XKZASIM_b;
A68_574  YKZASIM;  /* OPERATORS - mode -> union mode */
A68_551  ZKZASIM_b;
A68_574  ALZASIM;  /* OPERATORS - mode -> union mode */
A68_552  BLZASIM_b;
A68_574  CLZASIM;  /* OPERATORS - unite union */
A68_553  DLZASIM;  /* YIELD */
A68_554  ELZASIM;  /* avoid structure result */
A68_554  FLZASIM_ans;
A68_554  GLZASIM;  /* clause result */
A_PROC_ENTRY(declare);
 /* line 1865: */
 /* line 1881: */
{ 
NZYASIM_localchanges = (A_VVAC(OZYASIM));
 /* line 1883: */
 /* line 1900: */
 /* line 1914: */
A_CLOSURE( SAZASIM_convertfnno, TAZASIM_convertfnno, UAZASIM_convertfnno );
(( UAZASIM_convertfnno * ) ( SAZASIM_convertfnno.nonlocals )) -> Environ = Environ;
(( UAZASIM_convertfnno * ) ( SAZASIM_convertfnno.nonlocals )) -> Parentfnno = Parentfnno;
 /* line 1928: */
A_CLOSURE( ABZASIM_declaremake, BBZASIM_declaremake, CBZASIM_declaremake );
(( CBZASIM_declaremake * ) ( ABZASIM_declaremake.nonlocals )) -> Declaration = Declaration;
(( CBZASIM_declaremake * ) ( ABZASIM_declaremake.nonlocals )) -> Parentfnno = Parentfnno;
(( CBZASIM_declaremake * ) ( ABZASIM_declaremake.nonlocals )) -> Locals = Locals;
(( CBZASIM_declaremake * ) ( ABZASIM_declaremake.nonlocals )) -> Ids = Ids;
 /* line 1979: */
A_CLOSURE( ADZASIM_declareunit, BDZASIM_declareunit, CDZASIM_declareunit );
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Environ = Environ;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Closure = Closure;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Parentfnno = Parentfnno;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Constantsend = Constantsend;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Locals = Locals;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> ADZASIM_declareunit = ADZASIM_declareunit;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Declaration = Declaration;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Ids = Ids;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Diaglevel = Diaglevel;
(( CDZASIM_declareunit * ) ( ADZASIM_declareunit.nonlocals )) -> Flt = Flt;
 /* line 2068: */
A_CLOSURE( KGZASIM_join_nameno, LGZASIM_join_nameno, MGZASIM_join_nameno );
(( MGZASIM_join_nameno * ) ( KGZASIM_join_nameno.nonlocals )) -> KGZASIM_join_nameno = KGZASIM_join_nameno;
 /* line 2076: */
A_CLOSURE( WGZASIM_declarejoin, XGZASIM_declarejoin, YGZASIM_declarejoin );
(( YGZASIM_declarejoin * ) ( WGZASIM_declarejoin.nonlocals )) -> ADZASIM_declareunit = ADZASIM_declareunit;
(( YGZASIM_declarejoin * ) ( WGZASIM_declarejoin.nonlocals )) -> Parentfnno = Parentfnno;
 /* line 2130: */
A_CLOSURE( HIZASIM_declarelet, IIZASIM_declarelet, JIZASIM_declarelet );
(( JIZASIM_declarelet * ) ( HIZASIM_declarelet.nonlocals )) -> ADZASIM_declareunit = ADZASIM_declareunit;
(( JIZASIM_declarelet * ) ( HIZASIM_declarelet.nonlocals )) -> Declaration = Declaration;
(( JIZASIM_declarelet * ) ( HIZASIM_declarelet.nonlocals )) -> Locals = Locals;
(( JIZASIM_declarelet * ) ( HIZASIM_declarelet.nonlocals )) -> Parentfnno = Parentfnno;
(( JIZASIM_declarelet * ) ( HIZASIM_declarelet.nonlocals )) -> Ids = Ids;
(( JIZASIM_declarelet * ) ( HIZASIM_declarelet.nonlocals )) -> NZYASIM_localchanges = (&NZYASIM_localchanges);
 /* line 2177: */
A_CLOSURE( IKZASIM_declarefunction, JKZASIM_declarefunction, KKZASIM_declarefunction );
(( KKZASIM_declarefunction * ) ( IKZASIM_declarefunction.nonlocals )) -> Environ = Environ;
(( KKZASIM_declarefunction * ) ( IKZASIM_declarefunction.nonlocals )) -> Closure = Closure;
(( KKZASIM_declarefunction * ) ( IKZASIM_declarefunction.nonlocals )) -> Diaglevel = Diaglevel;
(( KKZASIM_declarefunction * ) ( IKZASIM_declarefunction.nonlocals )) -> Parentfnno = Parentfnno;
(( KKZASIM_declarefunction * ) ( IKZASIM_declarefunction.nonlocals )) -> Flt = Flt;
 /* line 2191: */
OKZASIM_steps = Series.Body;
 /* line 2192: */
for ( ;; )
{ 
 /* line 2193: */
if ( !((OKZASIM_steps!=SAAATRN_nilseries)) ) break;
PKZASIM_step = (*(&(OKZASIM_steps->Step)));
 /* line 2194: */
 /* line 2195: */
QKZASIM = PKZASIM_step ;
switch ( QKZASIM.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
 /* line 2196: */
/*SKIP*/;
break;
case 5: /* STRUCT(INT)  */
RKZASIM_fn = (QKZASIM.data.mode5);
 /* line 2197: */
A_CALLPROC(IKZASIM_declarefunction,(RKZASIM_fn),(RKZASIM_fn,(IKZASIM_declarefunction).nonlocals));
break;
case 8: /* REF STRUCT(REF MODE307,MODE245)  */
SKZASIM_let = (QKZASIM.data.mode8);
 /* line 2198: */
A_CALLPROC(HIZASIM_declarelet,((*SKZASIM_let)),((*SKZASIM_let),(HIZASIM_declarelet).nonlocals));
break;
case 9: /* REF STRUCT(REF MODE304,MODE306,REF MODE307)  */
TKZASIM_make = (QKZASIM.data.mode9);
 /* line 2199: */
 /* line 2200: */
A_CALLPROC(ABZASIM_declaremake,(A_CALLPROC(SAZASIM_convertfnno,((*(&((&(TKZASIM_make->Inst))->Fnno)))),((*(&((&(TKZASIM_make->Inst))->Fnno))),(SAZASIM_convertfnno).nonlocals)), (*TKZASIM_make)),(A_CALLPROC(SAZASIM_convertfnno,((*(&((&(TKZASIM_make->Inst))->Fnno)))),((*(&((&(TKZASIM_make->Inst))->Fnno))),(SAZASIM_convertfnno).nonlocals)), (*TKZASIM_make),(ABZASIM_declaremake).nonlocals));
break;
case 10: /* REF STRUCT(MODE245,MODE245)  */
UKZASIM_join = (QKZASIM.data.mode10);
 /* line 2201: */
 /* line 2202: */
VKZASIM = A_CALLPROC(KGZASIM_join_nameno,((*(&(UKZASIM_join->To)))),((*(&(UKZASIM_join->To))),(KGZASIM_join_nameno).nonlocals)) ;
WKZASIM = (*(&A_VINDEX(Locals,VKZASIM))) ;
switch ( WKZASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
XKZASIM_b = (WKZASIM.data.mode1);
 /* line 2203: */
A_CALLPROC(WGZASIM_declarejoin,((*UKZASIM_join), A_UNITE(YKZASIM,mode1,1,XKZASIM_b)),((*UKZASIM_join), A_UNITE(YKZASIM,mode1,1,XKZASIM_b),(WGZASIM_declarejoin).nonlocals));
break;
case 2: /* STRUCT(INT,REF MODE32)  */
ZKZASIM_b = (WKZASIM.data.mode2);
 /* line 2204: */
A_CALLPROC(WGZASIM_declarejoin,((*UKZASIM_join), A_UNITE(ALZASIM,mode2,2,ZKZASIM_b)),((*UKZASIM_join), A_UNITE(ALZASIM,mode2,2,ZKZASIM_b),(WGZASIM_declarejoin).nonlocals));
break;
case 4: /* STRUCT(MODE553,MODE173)  */
BLZASIM_b = (WKZASIM.data.mode4);
 /* line 2205: */
 /* line 2206: */
DLZASIM = BLZASIM_b.Box ;
A_CALLPROC(WGZASIM_declarejoin,((*UKZASIM_join), A_UTABUNITE(CLZASIM,"\000\002\001",DLZASIM)),((*UKZASIM_join), A_UTABUNITE(CLZASIM,"\000\002\001",DLZASIM),(WGZASIM_declarejoin).nonlocals));
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
 /* line 2207: */
 /* line 2208: */
OKZASIM_steps = (*(&(OKZASIM_steps->Rest)));
}
 /* line 2210: */
A_CALLPROC(ADZASIM_declareunit,(Series.Output, &ELZASIM),(Series.Output, &ELZASIM,(ADZASIM_declareunit).nonlocals));
FLZASIM_ans = ELZASIM;
 /* line 2214: */
LAZASIM_refurnishlocals(NZYASIM_localchanges, Locals);
 /* line 2216: */
 /* line 2218: */
GLZASIM = FLZASIM_ans;
} 
A_PROC_EXIT(declare);
*ReturnedValue = (GLZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ILZASIM_flattenandaddtype(A68_160  Type, A68_32  *ReturnedValue)
{ 
A68_168 * JLZASIM_flattened;
A68_INT  KLZASIM_numberinputs;
A68_168 * LLZASIM_scan;
A68_33  NLZASIM_generator;   /* proc value of non-global proc */
A68_32  TLZASIM;  /* avoid structure result */
A68_32  SLZASIM_ans;
A68_INT  ULZASIM_i;
A68_INT  VLZASIM;  /* to part of loop */
A68_161  WLZASIM;  /* procedure value */
A68_INT * XLZASIM;  /* YIELD */
A68_32  YLZASIM;  /* clause result */
A_PROC_ENTRY(flattenandaddtype);
 /* line 2224: */
 /* line 2225: */
{ 
JLZASIM_flattened = ABOASIM_flattentype(Type);
 /* line 2226: */
KLZASIM_numberinputs = 0;
 /* line 2227: */
LLZASIM_scan = JLZASIM_flattened;
 /* line 2228: */
for ( ;; )
{ 
 /* line 2229: */
if ( !((LLZASIM_scan!=WSAASIM_nilsst)) ) break;
KLZASIM_numberinputs+=1;
 /* line 2230: */
 /* line 2231: */
LLZASIM_scan = (*(&(LLZASIM_scan->Rest)));
}
 /* line 2232: */
A_CLOSURE( NLZASIM_generator, OLZASIM_generator, PLZASIM_generator );
(( PLZASIM_generator * ) ( NLZASIM_generator.nonlocals )) -> KLZASIM_numberinputs = (&KLZASIM_numberinputs);
A_CALLPROC(NLZASIM_generator,(A68_TRUE, &TLZASIM),(A68_TRUE, &TLZASIM,(NLZASIM_generator).nonlocals));
SLZASIM_ans = TLZASIM;
 /* line 2233: */
LLZASIM_scan = JLZASIM_flattened;
 /* line 2234: */
VLZASIM = KLZASIM_numberinputs;
for ( ULZASIM_i = 1;
ULZASIM_i <= VLZASIM;
ULZASIM_i += 1 )
{ 
 /* line 2235: */
WLZASIM.fn.fn_global = NZNASIM_machinewidth;
WLZASIM.nonlocals = A68_NIL;
XLZASIM = (&A_VINDEX(SLZASIM_ans,ULZASIM_i)) ;
(*XLZASIM) = ZFCASIM_addtype((*(&(LLZASIM_scan->T))), WLZASIM);
 /* line 2236: */
 /* line 2237: */
LLZASIM_scan = (*(&(LLZASIM_scan->Rest)));
}
 /* line 2238: */
 /* line 2239: */
YLZASIM = SLZASIM_ans;
} 
A_PROC_EXIT(flattenandaddtype);
*ReturnedValue = (YLZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AMZASIM_lookuptypesizes(A68_32  Indices, A68_32  *ReturnedValue)
{ 
A68_33  CMZASIM_generator;   /* proc value of non-global proc */
A68_32  IMZASIM;  /* avoid structure result */
A68_32  HMZASIM_ans;
A68_INT  JMZASIM_i;
A68_INT  KMZASIM;  /* to part of loop */
A68_INT * LMZASIM;  /* YIELD */
A68_32  MMZASIM;  /* clause result */
A_PROC_ENTRY(lookuptypesizes);
 /* line 2243: */
 /* line 2244: */
{ 
A_CLOSURE( CMZASIM_generator, DMZASIM_generator, EMZASIM_generator );
(( EMZASIM_generator * ) ( CMZASIM_generator.nonlocals )) -> Indices = Indices;
A_CALLPROC(CMZASIM_generator,(A68_TRUE, &IMZASIM),(A68_TRUE, &IMZASIM,(CMZASIM_generator).nonlocals));
HMZASIM_ans = IMZASIM;
 /* line 2245: */
KMZASIM = HMZASIM_ans.upb;
for ( JMZASIM_i = 1;
JMZASIM_i <= KMZASIM;
JMZASIM_i += 1 )
{ 
LMZASIM = (&A_VINDEX(HMZASIM_ans,JMZASIM_i)) ;
(*LMZASIM) = YGCASIM_lookuptypesize(A_VINDEX(Indices,JMZASIM_i));
}
 /* line 2246: */
 /* line 2247: */
MMZASIM = HMZASIM_ans;
} 
A_PROC_EXIT(lookuptypesizes);
*ReturnedValue = (MMZASIM);
return;
} 
#undef NL
 /* line 2262: */

A_STATIC A68_VOID  RMZASIM_processinputs(A68_307 * Inputs, A68_160  Type, A68_230 * Fdec, A68_32  Primsizes, A68_584  *ReturnedValue)
{ 
A68_INT  SMZASIM_userinputs;
A68_587  UMZASIM_generator;   /* proc value of non-global proc */
A68_586  ANZASIM;  /* avoid structure result */
A68_586  ZMZASIM_usertypes;
A68_586  BNZASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_586  CNZASIM;  /* OPERATORS - assign op */
A68_160  DNZASIM;  /* united object - for case conformity */
A68_168 * ENZASIM_sst;
A68_168 * FNZASIM_scan;
A68_INT  GNZASIM_index;
A68_INT  HNZASIM;  /* YIELD */
A68_160 * INZASIM;  /* YIELD */
A68_307 * JNZASIM_terms;
A68_INT  KNZASIM_ipno;
A68_588  MNZASIM_generator;   /* proc value of non-global proc */
A68_584  SNZASIM;  /* avoid structure result */
A68_584  RNZASIM_ans;
A68_INT  TNZASIM_i;
A68_INT  UNZASIM;  /* to part of loop */
A68_INT  VNZASIM_width;
A68_498  XNZASIM_generator;   /* proc value of non-global proc */
A68_177  COZASIM;  /* avoid structure result */
A68_177  DOZASIM_blocks;
A68_INT  EOZASIM_j;
A68_INT  FOZASIM;  /* to part of loop */
A68_INT  GOZASIM_size;
A68_INT  HOZASIM_offset;
A68_178  IOZASIM;  /* collateral clause result */
A68_178 * JOZASIM;  /* YIELD */
A68_160  KOZASIM_type1;
A68_353  LOZASIM;  /* OPERATORS - simple index */
A68_INT  MOZASIM;  /* YIELD */
A68_VC  NOZASIM_name;
A68_583  OOZASIM;  /* collateral clause result */
A68_583 * POZASIM;  /* YIELD */
A68_584  QOZASIM;  /* clause result */
A_PROC_ENTRY(processinputs);
 /* line 2263: */
 /* line 2274: */
{ 
SMZASIM_userinputs = DTNATRN_names_size(Inputs);
 /* line 2275: */
A_CLOSURE( UMZASIM_generator, VMZASIM_generator, WMZASIM_generator );
(( WMZASIM_generator * ) ( UMZASIM_generator.nonlocals )) -> SMZASIM_userinputs = SMZASIM_userinputs;
A_CALLPROC(UMZASIM_generator,(A68_TRUE, &ANZASIM),(A68_TRUE, &ANZASIM,(UMZASIM_generator).nonlocals));
ZMZASIM_usertypes = ANZASIM;
 /* line 2276: */
 /* line 2277: */
if ( (SMZASIM_userinputs==1) )
{ 
 /* line 2278: */
 /* line 2279: */
CNZASIM = A_HVEC(BNZASIM,Type,A68_160 ) ;
A_VASSIGN2(CNZASIM,ZMZASIM_usertypes,A68_160 );
} 
else
{ 
 /* line 2280: */
DNZASIM = Type ;
switch ( DNZASIM.mode )
{ 
case 7: /* REF STRUCT(MODE160,REF MODE168)  */
ENZASIM_sst = (DNZASIM.data.mode7);
 /* line 2281: */
 /* line 2282: */
{ 
FNZASIM_scan = ENZASIM_sst;
 /* line 2283: */
GNZASIM_index = 0;
 /* line 2284: */
for ( ;; )
{ 
 /* line 2285: */
if ( !((FNZASIM_scan!=WSAASIM_nilsst)) ) break;
HNZASIM = GNZASIM_index+=1 ;
INZASIM = (&A_VINDEX(ZMZASIM_usertypes,HNZASIM)) ;
(*INZASIM) = (*(&(FNZASIM_scan->T)));
 /* line 2286: */
 /* line 2287: */
FNZASIM_scan = (*(&(FNZASIM_scan->Rest)));
}
 /* line 2288: */
 /* line 2289: */
 /* line 2290: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
 /* line 2292: */
JNZASIM_terms = Inputs;
 /* line 2293: */
KNZASIM_ipno = 1;
 /* line 2294: */
A_CLOSURE( MNZASIM_generator, NNZASIM_generator, ONZASIM_generator );
(( ONZASIM_generator * ) ( MNZASIM_generator.nonlocals )) -> SMZASIM_userinputs = SMZASIM_userinputs;
A_CALLPROC(MNZASIM_generator,(A68_TRUE, &SNZASIM),(A68_TRUE, &SNZASIM,(MNZASIM_generator).nonlocals));
RNZASIM_ans = SNZASIM;
 /* line 2295: */
UNZASIM = SMZASIM_userinputs;
for ( TNZASIM_i = 1;
TNZASIM_i <= UNZASIM;
TNZASIM_i += 1 )
{ 
 /* line 2296: */
VNZASIM_width = DCOASIM_rawsignalwidth((*(&A_VINDEX(ZMZASIM_usertypes,TNZASIM_i))));
 /* line 2298: */
A_CLOSURE( XNZASIM_generator, YNZASIM_generator, ZNZASIM_generator );
(( ZNZASIM_generator * ) ( XNZASIM_generator.nonlocals )) -> VNZASIM_width = VNZASIM_width;
A_CALLPROC(XNZASIM_generator,(A68_FALSE, &COZASIM),(A68_FALSE, &COZASIM,(XNZASIM_generator).nonlocals));
DOZASIM_blocks = COZASIM;
 /* line 2299: */
FOZASIM = VNZASIM_width;
for ( EOZASIM_j = 1;
EOZASIM_j <= FOZASIM;
EOZASIM_j += 1 )
{ 
 /* line 2300: */
GOZASIM_size = A_VINDEX(Primsizes,KNZASIM_ipno);
 /* line 2301: */
HOZASIM_offset = (-(GENASIM_sizeunit+(KNZASIM_ipno*DENASIM_ws)));
 /* line 2302: */
IOZASIM.Instoffset = 0;
IOZASIM.Offset = HOZASIM_offset;
IOZASIM.Size = GOZASIM_size;
JOZASIM = (&A_VINDEX(DOZASIM_blocks,EOZASIM_j)) ;
(*JOZASIM) = IOZASIM;
 /* line 2303: */
 /* line 2304: */
KNZASIM_ipno+=1;
}
 /* line 2305: */
KOZASIM_type1 = (*(&A_VINDEX(ZMZASIM_usertypes,TNZASIM_i)));
 /* line 2306: */
LOZASIM = (*(&(Fdec->Nametypes))) ;
MOZASIM = (*(&(JNZASIM_terms->Nameno))) ;
NOZASIM_name = (*(&((&A_VINDEX(LOZASIM,MOZASIM))->Name)));
 /* line 2307: */
OOZASIM.Wire.Type = KOZASIM_type1;
OOZASIM.Wire.Blocks = DOZASIM_blocks;
OOZASIM.Name = NOZASIM_name;
OOZASIM.Sort = 1;
POZASIM = (&A_VINDEX(RNZASIM_ans,TNZASIM_i)) ;
(*POZASIM) = OOZASIM;
 /* line 2308: */
 /* line 2309: */
JNZASIM_terms = (*(&(JNZASIM_terms->Rest)));
}
 /* line 2310: */
 /* line 2311: */
QOZASIM = RNZASIM_ans;
} 
A_PROC_EXIT(processinputs);
*ReturnedValue = (QOZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TOZASIM_transferjoins(A68_INT  Fnno, A68_INT * Constantsend)
{ 
A68_32  JPZASIM;  /* avoid structure result */
A68_32  KPZASIM_expansion;
A68_INT  LPZASIM_i;
A68_INT  MPZASIM;  /* to part of loop */
A68_INT  NPZASIM;  /* YIELD */
A68_514  OPZASIM_smake;
A68_501  PPZASIM_inputs;
A68_INT  QPZASIM_j;
A68_INT  RPZASIM;  /* to part of loop */
A68_499 * SPZASIM_input;
A68_INT * TPZASIM_inst;
A68_INT * UPZASIM_offset;
A68_INT  YPZASIM_flag;
A68_BOOL  ZPZASIM;  /* optbool result */
A68_INT  AQZASIM_make;
A68_INT  BQZASIM_ip;
A68_BOOL  CQZASIM;  /* optbool result */
A68_501  DQZASIM;  /* OPERATORS - simple index */
A68_499 * EQZASIM_onward;
A68_592  FQZASIM;  /* collateral clause result */
A68_52  IQZASIM;  /* OPERATORS - mode -> union mode */
A68_VC  JQZASIM;  /* YIELD */
A68_VC  KQZASIM;  /* avoid structure result */
A68_52  LQZASIM;  /* OPERATORS - mode -> union mode */
A68_52  OQZASIM;  /* OPERATORS - mode -> union mode */
A68_VC  PQZASIM;  /* YIELD */
A68_52  QQZASIM;  /* OPERATORS - mode -> union mode */
A68_56  RQZASIM;  /* procedure value */
A68_85  SQZASIM;  /* OPERATORS - istruct -> vector */
A68_32  TQZASIM;  /* avoid structure result */
A68_INT  UQZASIM_size;
A68_INT  VQZASIM_queryoffset;
A68_INT  WQZASIM_loopfn;
A68_544  XQZASIM;  /* collateral clause result */
A68_VC  YQZASIM;  /* avoid structure result */
A68_52  ZQZASIM;  /* OPERATORS - mode -> union mode */
A68_52  ARZASIM;  /* OPERATORS - mode -> union mode */
A68_56  BRZASIM;  /* procedure value */
A68_85  CRZASIM;  /* OPERATORS - istruct -> vector */
A68_INT  DRZASIM_ip;
A68_501  ERZASIM;  /* OPERATORS - simple index */
A68_499 * FRZASIM_onward;
A68_INT  GRZASIM_srcinst;
A68_INT  HRZASIM_srcoffset;
A68_BOOL  IRZASIM;  /* optbool result */
A68_INT  JRZASIM_ip;
A68_501  KRZASIM;  /* OPERATORS - simple index */
A68_499 * LRZASIM_onward;
A_PROC_ENTRY(transferjoins);
 /* line 2339: */
 /* line 2341: */
{ 
 /* line 2349: */
GUCASIM_lookupexpansion( Fnno, &JPZASIM );
KPZASIM_expansion = JPZASIM;
 /* line 2350: */
MPZASIM = KPZASIM_expansion.upb;
for ( LPZASIM_i = 1;
LPZASIM_i <= MPZASIM;
LPZASIM_i += 1 )
{ 
 /* line 2351: */
NPZASIM = (*(&A_VINDEX(KPZASIM_expansion,LPZASIM_i))) ;
OPZASIM_smake = (*(&A_VINDEX(ANXASIM_makes,NPZASIM)));
 /* line 2352: */
PPZASIM_inputs = OPZASIM_smake.Inputs;
 /* line 2353: */
RPZASIM = PPZASIM_inputs.upb;
for ( QPZASIM_j = 1;
QPZASIM_j <= RPZASIM;
QPZASIM_j += 1 )
{ 
 /* line 2356: */
SPZASIM_input = (&A_VINDEX(PPZASIM_inputs,QPZASIM_j));
 /* line 2357: */
TPZASIM_inst = (&(SPZASIM_input->Inst));
 /* line 2358: */
UPZASIM_offset = (&(SPZASIM_input->Offset));
 /* line 2359: */
 /* line 2360: */
YPZASIM_flag = VPZASIM_direct;
 /* line 2361: */
for ( ;; )
{ 
ZPZASIM = ((*TPZASIM_inst)!=0);
if ( ZPZASIM )
{ZPZASIM = ((*UPZASIM_offset)<0);
}
if ( ZPZASIM )
{ZPZASIM = (YPZASIM_flag!=XPZASIM_loop);
}
 /* line 2362: */
if ( !(ZPZASIM) ) break;
AQZASIM_make = CQXASIM_findmake(Fnno, (*TPZASIM_inst));
 /* line 2363: */
BQZASIM_ip = (((-(*UPZASIM_offset))-GENASIM_sizeunit)/DENASIM_ws);
 /* line 2364: */
CQZASIM = (AQZASIM_make==(*(&A_VINDEX(KPZASIM_expansion,LPZASIM_i))));
if ( CQZASIM )
{CQZASIM = (BQZASIM_ip==QPZASIM_j);
}
 /* line 2365: */
if ( CQZASIM )
{ 
 /* line 2366: */
 /* line 2367: */
YPZASIM_flag = XPZASIM_loop;
} 
else
{ 
 /* line 2368: */
YPZASIM_flag = WPZASIM_indirect;
} 
 /* line 2369: */
DQZASIM = (*(&((&A_VINDEX(ANXASIM_makes,AQZASIM_make))->Inputs))) ;
EQZASIM_onward = (&A_VINDEX(DQZASIM,BQZASIM_ip));
 /* line 2370: */
(*TPZASIM_inst) = AQZASIM_make;
 /* line 2371: */
TPZASIM_inst = (&(EQZASIM_onward->Inst));
 /* line 2372: */
 /* line 2373: */
UPZASIM_offset = (&(EQZASIM_onward->Offset));
}
 /* line 2376: */
 /* line 2377: */
if ( (YPZASIM_flag==XPZASIM_loop) )
{ 
 /* line 2378: */
 /* line 2379: */
JQZASIM = HQZASIM ;
FQZASIM.data[0] = A_UNITE(IQZASIM,mode7,7,JQZASIM);
 /* line 2380: */
ZTCASIM_lookupuserid( Fnno, &KQZASIM );
FQZASIM.data[1] = A_UNITE(LQZASIM,mode7,7,KQZASIM);
 /* line 2381: */
PQZASIM = NQZASIM ;
FQZASIM.data[2] = A_UNITE(OQZASIM,mode7,7,PQZASIM);
RQZASIM.fn.fn_global = LRAAOSL_newline;
RQZASIM.nonlocals = A68_NIL;
FQZASIM.data[3] = A_UNITE(QQZASIM,mode12,12,RQZASIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(SQZASIM,FQZASIM,4,A68_52 ));
 /* line 2384: */
QUCASIM_lookupinputsizes( OPZASIM_smake.Fn, &TQZASIM );
UQZASIM_size = (*(&A_VINDEX(TQZASIM,QPZASIM_j)));
 /* line 2385: */
GOCASIM_addconstantno(Fnno, KRXASIM_addconstant((*WOZASIM_querywords(UQZASIM_size))));
 /* line 2386: */
VQZASIM_queryoffset = (*Constantsend);
 /* line 2387: */
(*Constantsend)+=UQZASIM_size;
 /* line 2390: */
TPZASIM_inst = (&(SPZASIM_input->Inst));
 /* line 2391: */
UPZASIM_offset = (&(SPZASIM_input->Offset));
 /* line 2392: */
WQZASIM_loopfn = OPZASIM_smake.Fn;
 /* line 2393: */
for ( ;; )
{ 
 /* line 2395: */
if ( !(((*TPZASIM_inst)!=0)) ) break;
ZTCASIM_lookupuserid( WQZASIM_loopfn, &YQZASIM );
XQZASIM.data[0] = A_UNITE(ZQZASIM,mode7,7,YQZASIM);
BRZASIM.fn.fn_global = LRAAOSL_newline;
BRZASIM.nonlocals = A68_NIL;
XQZASIM.data[1] = A_UNITE(ARZASIM,mode12,12,BRZASIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(CRZASIM,XQZASIM,2,A68_52 ));
 /* line 2396: */
DRZASIM_ip = (((-(*UPZASIM_offset))-GENASIM_sizeunit)/DENASIM_ws);
 /* line 2397: */
ERZASIM = (*(&((&A_VINDEX(ANXASIM_makes,(*TPZASIM_inst)))->Inputs))) ;
FRZASIM_onward = (&A_VINDEX(ERZASIM,DRZASIM_ip));
 /* line 2398: */
WQZASIM_loopfn = (*(&((&A_VINDEX(ANXASIM_makes,(*TPZASIM_inst)))->Fn)));
 /* line 2399: */
(*TPZASIM_inst) = 0;
 /* line 2400: */
(*UPZASIM_offset) = VQZASIM_queryoffset;
 /* line 2401: */
TPZASIM_inst = (&(FRZASIM_onward->Inst));
 /* line 2402: */
 /* line 2403: */
UPZASIM_offset = (&(FRZASIM_onward->Offset));
}
 /* line 2405: */
} 
else
{ 
 /* line 2406: */
if ( (YPZASIM_flag==WPZASIM_indirect) )
{ 
GRZASIM_srcinst = (*TPZASIM_inst);
 /* line 2407: */
HRZASIM_srcoffset = (*UPZASIM_offset);
 /* line 2408: */
TPZASIM_inst = (&(SPZASIM_input->Inst));
 /* line 2409: */
UPZASIM_offset = (&(SPZASIM_input->Offset));
 /* line 2410: */
for ( ;; )
{ 
IRZASIM = ((*TPZASIM_inst)!=0);
if ( IRZASIM )
{IRZASIM = ((*UPZASIM_offset)<0);
}
 /* line 2411: */
if ( !(IRZASIM) ) break;
JRZASIM_ip = (((-(*UPZASIM_offset))-GENASIM_sizeunit)/DENASIM_ws);
 /* line 2412: */
KRZASIM = (*(&((&A_VINDEX(ANXASIM_makes,(*TPZASIM_inst)))->Inputs))) ;
LRZASIM_onward = (&A_VINDEX(KRZASIM,JRZASIM_ip));
 /* line 2413: */
(*TPZASIM_inst) = GRZASIM_srcinst;
 /* line 2414: */
(*UPZASIM_offset) = HRZASIM_srcoffset;
 /* line 2415: */
TPZASIM_inst = (&(LRZASIM_onward->Inst));
 /* line 2416: */
 /* line 2417: */
UPZASIM_offset = (&(LRZASIM_onward->Offset));
}
 /* line 2418: */
 /* line 2419: */
} 
} 
}
 /* line 2421: */
}
 /* line 2422: */
} 
A_PROC_EXIT(transferjoins);
return;
} 
#undef NL

A_STATIC A68_VOID  ORZASIM_transferlocation(A68_INT  Fnno, A68_177 * Location)
{ 
A68_INT  PRZASIM_i;
A68_INT  QRZASIM;  /* by part of loop */
A68_178 * RRZASIM_entry;
A68_INT  SRZASIM_instance;
A68_INT  TRZASIM_offset;
A68_BOOL  URZASIM;  /* optbool result */
A68_INT  VRZASIM_makeno;
A68_INT  WRZASIM_ipno;
A68_501  XRZASIM;  /* OPERATORS - simple index */
A68_499  YRZASIM_ip;
A68_INT * ZRZASIM;  /* YIELD */
A68_INT * ASZASIM;  /* YIELD */
A68_177  BSZASIM;  /* OPERATORS - trim index */
A68_177  CSZASIM;  /* OPERATORS - trim index */
A68_177  DSZASIM;  /* OPERATORS - trim index */
A68_177  ESZASIM;  /* avoid structure result */
A68_177  FSZASIM;  /* avoid structure result */
A_PROC_ENTRY(transferlocation);
 /* line 2440: */
QRZASIM = (-1);
for ( PRZASIM_i = (*Location).upb;
( QRZASIM > 0 && PRZASIM_i <= 1) ||
( QRZASIM < 0 && PRZASIM_i >= 1) ||
( QRZASIM == 0 ) ;
PRZASIM_i += QRZASIM )
{ 
 /* line 2441: */
RRZASIM_entry = (&A_VINDEX((*Location),PRZASIM_i));
 /* line 2442: */
SRZASIM_instance = (*(&(RRZASIM_entry->Instoffset)));
 /* line 2443: */
TRZASIM_offset = (*(&(RRZASIM_entry->Offset)));
 /* line 2444: */
URZASIM = (SRZASIM_instance!=0);
if ( URZASIM )
{URZASIM = (TRZASIM_offset<0);
}
 /* line 2445: */
if ( URZASIM )
{ 
VRZASIM_makeno = CQXASIM_findmake(Fnno, SRZASIM_instance);
 /* line 2446: */
WRZASIM_ipno = (((-TRZASIM_offset)-GENASIM_sizeunit)/DENASIM_ws);
 /* line 2447: */
XRZASIM = (*(&((&A_VINDEX(ANXASIM_makes,VRZASIM_makeno))->Inputs))) ;
YRZASIM_ip = (*(&A_VINDEX(XRZASIM,WRZASIM_ipno)));
 /* line 2448: */
ZRZASIM = (&(RRZASIM_entry->Instoffset)) ;
(*ZRZASIM) = YRZASIM_ip.Inst;
 /* line 2449: */
ASZASIM = (&(RRZASIM_entry->Offset)) ;
(*ASZASIM) = YRZASIM_ip.Offset;
 /* line 2450: */
 /* line 2451: */
 /* line 2452: */
LABASIM_( A_VTRIM(DSZASIM,((*Location)),A_VTSCRIPT(&(DSZASIM.upb),((*Location)).upb,1,(PRZASIM_i-1))), A_VTRIM(CSZASIM,((*Location)),A_VTSCRIPT(&(CSZASIM.upb),((*Location)).upb,PRZASIM_i,PRZASIM_i)), &ESZASIM );
LABASIM_( ESZASIM, A_VTRIM(BSZASIM,((*Location)),A_VTSCRIPT(&(BSZASIM.upb),((*Location)).upb,(PRZASIM_i+1),((*Location)).upb)), &FSZASIM );
(*Location) = FSZASIM;
} 
}
A_PROC_EXIT(transferlocation);
return;
} 
#undef NL

A_STATIC A68_INT  HSZASIM_upbtype(A68_160  Type)
{ 
A68_160  ISZASIM;  /* united object - for case conformity */
A68_165 * JSZASIM_r;
A68_INT  KSZASIM;  /* clause result */
A68_168 * LSZASIM_s;
A68_INT  MSZASIM_ans;
A68_168 * NSZASIM_p;
A_PROC_ENTRY(upbtype);
 /* line 2461: */
 /* line 2462: */
ISZASIM = Type ;
switch ( ISZASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE160)  */
JSZASIM_r = (ISZASIM.data.mode4);
 /* line 2463: */
KSZASIM = (*(&(JSZASIM_r->No)));
break;
case 7: /* REF STRUCT(MODE160,REF MODE168)  */
LSZASIM_s = (ISZASIM.data.mode7);
 /* line 2464: */
 /* line 2465: */
{ 
MSZASIM_ans = 0;
 /* line 2466: */
NSZASIM_p = LSZASIM_s;
 /* line 2467: */
for ( ;; )
{ 
if ( !((NSZASIM_p!=WSAASIM_nilsst)) ) break;
MSZASIM_ans+=1;
NSZASIM_p = (*(&(NSZASIM_p->Rest)));
}
 /* line 2468: */
 /* line 2469: */
 /* line 2470: */
KSZASIM = MSZASIM_ans;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(upbtype);
return( KSZASIM );
} 
#undef NL

A_STATIC A68_VOID  QSZASIM_stripoutputtype(A68_160  Type, A68_BOOL  Genoutput, A68_160  *ReturnedValue)
{ 
A68_160  RSZASIM;  /* clause result */
A68_160  SSZASIM;  /* avoid structure result */
A_PROC_ENTRY(stripoutputtype);
 /* line 2477: */
if ( Genoutput )
{ 
 /* line 2478: */
 /* line 2479: */
BXYASIM_indextype( Type, 1, &SSZASIM );
RSZASIM = SSZASIM;
} 
else
{ 
RSZASIM = Type;
} 
A_PROC_EXIT(stripoutputtype);
*ReturnedValue = (RSZASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VSZASIM_stripoutputwire(A68_173  Wire, A68_BOOL  Genoutput, A68_173  *ReturnedValue)
{ 
A68_173  WSZASIM;  /* clause result */
A68_173  XSZASIM;  /* avoid structure result */
A_PROC_ENTRY(stripoutputwire);
 /* line 2486: */
if ( Genoutput )
{ 
 /* line 2487: */
 /* line 2488: */
LXYASIM_indexwire( Wire, 1, &XSZASIM );
WSZASIM = XSZASIM;
} 
else
{ 
WSZASIM = Wire;
} 
A_PROC_EXIT(stripoutputwire);
*ReturnedValue = (WSZASIM);
return;
} 
#undef NL
 /* line 2499: */

A_STATIC A68_INT  GTZASIM_anonymous(A68_229  Body, A68_230 * Declaration, A68_232 * Environ, A68_233 * Closure, A68_INT  Diaglevel, A68_INT  Outer, A68_INT  Version, A68_36  Flt)
{ 
A68_315  HTZASIM;  /* OPERATORS - mode -> union mode */
A68_318 * ITZASIM;  /* YIELD */
A68_160  JTZASIM;  /* avoid structure result */
A68_160  KTZASIM;  /* united object - for case conformity */
A68_167 * LTZASIM_fn;
A68_167  MTZASIM;  /* clause result */
A68_167  NTZASIM_fntype;
A68_32  OTZASIM;  /* avoid structure result */
A68_32  PTZASIM_inputtypes;
A68_32  QTZASIM;  /* avoid structure result */
A68_32  RTZASIM_inputsizes;
A68_INT  STZASIM_totalinputsize;
A68_INT  TTZASIM_i;
A68_INT  UTZASIM;  /* to part of loop */
A68_584  VTZASIM;  /* avoid structure result */
A68_584  WTZASIM_userinputs;
A68_161  XTZASIM;  /* procedure value */
A68_INT  YTZASIM_outputtypeindex;
A68_BOOL  ZTZASIM_genoutput;
A68_229  AUZASIM;  /* united object - for case conformity */
A68_314 * BUZASIM_u;
A68_245  CUZASIM;  /* united object - for case conformity */
A68_BOOL  DUZASIM;  /* clause result */
A68_BOOL  EUZASIM_atomic;
A68_175  FUZASIM;  /* collateral clause result */
A68_175  GUZASIM_instanceshape;
A68_176  HUZASIM;  /* collateral clause result */
A68_176  IUZASIM_alienshape;
A68_174 * JUZASIM_ramdata;
A68_173  KUZASIM;  /* collateral clause result */
A68_173  LUZASIM_output;
A68_173  MUZASIM;  /* collateral clause result */
A68_160  NUZASIM;  /* avoid structure result */
A68_173  OUZASIM_moutput;
A68_VC  PUZASIM;  /* avoid structure result */
A68_VC  QUZASIM_fnname;
A68_596  SUZASIM_generator;   /* proc value of non-global proc */
A68_231  YUZASIM;  /* avoid structure result */
A68_231  XUZASIM_inputwires;
A68_INT  ZUZASIM_i;
A68_INT  AVZASIM;  /* to part of loop */
A68_173 * BVZASIM;  /* YIELD */
A68_175  CVZASIM;  /* avoid structure result */
A68_INT  DVZASIM_outputsize;
A68_498  FVZASIM_generator;   /* proc value of non-global proc */
A68_177  KVZASIM;  /* avoid structure result */
A68_177  LVZASIM_outputblock;
A68_178  MVZASIM;  /* collateral clause result */
A68_177  NVZASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_177  OVZASIM;  /* OPERATORS - assign op */
A68_173  PVZASIM;  /* collateral clause result */
A68_173  QVZASIM;  /* avoid structure result */
A68_INT  RVZASIM_fnno;
A68_BOOL  SVZASIM_found;
A68_352  TVZASIM;  /* != */
A68_355 * UVZASIM_macspec;
A68_352  VVZASIM;  /* forall yield */
A68_INT  WVZASIM;  /* forall loop counter */
A68_BOOL  XVZASIM;  /* optbool result */
A68_356  YVZASIM;  /* united object - for case conformity */
A68_285  ZVZASIM_fn;
A68_239  AWZASIM;  /* OPERATORS - simple index */
A68_INT  BWZASIM;  /* YIELD */
A68_350  CWZASIM;  /* united object - for case conformity */
A68_281  DWZASIM_ff;
A68_281  EWZASIM;  /* clause result */
A68_281  HWZASIM;  /* OPERATORS - skip to mode */
A68_281  IWZASIM_f;
A68_INT  LWZASIM_i;
A68_INT  MWZASIM;  /* to part of loop */
A68_173  NWZASIM_input;
A68_180  PWZASIM;  /* OPERATORS - mode -> union mode */
A68_VC  RWZASIM;  /* avoid structure result */
A68_597  TWZASIM_generator;   /* proc value of non-global proc */
A68_563  ZWZASIM;  /* avoid structure result */
A68_563  YWZASIM_localsymbols;
A68_517  BXZASIM_generator;   /* proc value of non-global proc */
A68_438  HXZASIM;  /* avoid structure result */
A68_438  GXZASIM_ids;
A68_INT  IXZASIM_i;
A68_INT  JXZASIM;  /* to part of loop */
A68_554  KXZASIM;  /* OPERATORS - mode -> union mode */
A68_173  LXZASIM;  /* YIELD */
A68_554 * MXZASIM;  /* YIELD */
A68_VC * NXZASIM;  /* YIELD */
A68_554  OXZASIM;  /* OPERATORS - mode -> union mode */
A68_554 * PXZASIM;  /* YIELD */
A68_VC * QXZASIM;  /* YIELD */
A68_229  RXZASIM;  /* united object - for case conformity */
A68_314 * SXZASIM_u;
A68_245  TXZASIM;  /* united object - for case conformity */
A68_275 * UXZASIM_us;
A68_275  VXZASIM;  /* clause result */
A68_275  WXZASIM_useries;
A68_INT  XXZASIM_localoffset;
A68_INT  YXZASIM_constantsend;
A68_554  ZXZASIM;  /* avoid structure result */
A68_554  AYZASIM_body;
A68_173  CYZASIM;  /* avoid structure result */
A68_173  BYZASIM_coutput;
A68_173  DYZASIM;  /* avoid structure result */
A68_173  EYZASIM_moutput;
A68_175  FYZASIM;  /* collateral clause result */
A68_33  HYZASIM_generator;   /* proc value of non-global proc */
A68_32  MYZASIM;  /* avoid structure result */
A68_32  NYZASIM;  /* avoid structure result */
A68_32  OYZASIM_expansion;
A68_INT  PYZASIM_i;
A68_INT  QYZASIM;  /* to part of loop */
A68_INT  RYZASIM;  /* YIELD */
A68_514  SYZASIM_component;
A68_501  TYZASIM_inputs;
A68_INT  UYZASIM_j;
A68_INT  VYZASIM;  /* to part of loop */
A68_499  WYZASIM_input;
A68_INT  XYZASIM_offset;
A68_INT  YYZASIM_ip;
A68_INT  ZYZASIM_fanout;
A68_INT  AZZASIM;  /* clause result */
 /* line 2500: */
 /* line 2507: */
{ 
 /* line 2508: */
ITZASIM = MUNATRN_fndec_tfn(Declaration) ;
SUBASIM_converttype( A_UNITE(HTZASIM,mode4,4,ITZASIM), (*Environ), Closure, &JTZASIM );
KTZASIM = JTZASIM ;
switch ( KTZASIM.mode )
{ 
case 6: /* REF STRUCT(MODE160,MODE160)  */
LTZASIM_fn = (KTZASIM.data.mode6);
 /* line 2509: */
MTZASIM = (*LTZASIM_fn);
break;
default: 
A_IMP_SKIP ;
break;
} 
NTZASIM_fntype = MTZASIM;
 /* line 2514: */
ILZASIM_flattenandaddtype( NTZASIM_fntype.From, &OTZASIM );
PTZASIM_inputtypes = OTZASIM;
 /* line 2519: */
AMZASIM_lookuptypesizes( PTZASIM_inputtypes, &QTZASIM );
RTZASIM_inputsizes = QTZASIM;
 /* line 2522: */
STZASIM_totalinputsize = 0;
 /* line 2523: */
UTZASIM = RTZASIM_inputsizes.upb;
for ( TTZASIM_i = 1;
TTZASIM_i <= UTZASIM;
TTZASIM_i += 1 )
{ 
 /* line 2524: */
 /* line 2525: */
STZASIM_totalinputsize+=A_VINDEX(RTZASIM_inputsizes,TTZASIM_i);
}
 /* line 2526: */
 /* line 2527: */
if ( (STZASIM_totalinputsize>KNXASIM_maxinputsize) )
{ 
 /* line 2528: */
KNXASIM_maxinputsize = STZASIM_totalinputsize;
} 
 /* line 2532: */
 /* line 2533: */
 /* line 2534: */
RMZASIM_processinputs( (*(&(Declaration->Inputs))), NTZASIM_fntype.From, Declaration, RTZASIM_inputsizes, &VTZASIM );
WTZASIM_userinputs = VTZASIM;
 /* line 2537: */
XTZASIM.fn.fn_global = NZNASIM_machinewidth;
XTZASIM.nonlocals = A68_NIL;
YTZASIM_outputtypeindex = ZFCASIM_addtype(NTZASIM_fntype.To, XTZASIM);
 /* line 2538: */
ZTZASIM_genoutput = A68_FALSE;
 /* line 2539: */
 /* line 2540: */
 /* line 2541: */
AUZASIM = Body ;
switch ( AUZASIM.mode )
{ 
case 1: /* REF STRUCT(MODE245)  */
BUZASIM_u = (AUZASIM.data.mode1);
CUZASIM = (*(&(BUZASIM_u->Tag))) ;
switch ( CUZASIM.mode )
{ 
case 29: /* REF STRUCT(REF MODE292,MODE245)  */
DUZASIM = A68_FALSE;
break;
default: 
 /* line 2542: */
DUZASIM = A68_TRUE;
break;
} 
break;
default: 
 /* line 2543: */
DUZASIM = A68_TRUE;
break;
} 
EUZASIM_atomic = DUZASIM;
 /* line 2546: */
FUZASIM.Size = 0;
FUZASIM.Offset = 0;
FUZASIM.Sort = HHCASIM_compound;
GUZASIM_instanceshape = FUZASIM;
 /* line 2547: */
HUZASIM.Workspace = 0;
HUZASIM.History = 0;
HUZASIM.Declid = 0;
IUZASIM_alienshape = HUZASIM;
 /* line 2549: */
JUZASIM_ramdata = STAASIM_nilsram;
 /* line 2550: */
KUZASIM.Type = NTZASIM_fntype.To;
KUZASIM.Blocks = VLXASIM_nullrvb;
LUZASIM_output = KUZASIM;
 /* line 2551: */
 /* line 2552: */
QSZASIM_stripoutputtype( NTZASIM_fntype.To, ZTZASIM_genoutput, &NUZASIM );
MUZASIM.Type = NUZASIM;
MUZASIM.Blocks = VLXASIM_nullrvb;
OUZASIM_moutput = MUZASIM;
 /* line 2554: */
 /* line 2555: */
if ( EUZASIM_atomic )
{ 
DRCASIM_uniqueid( (*(&(Declaration->Fnname))), Outer, Version, &PUZASIM );
QUZASIM_fnname = PUZASIM;
 /* line 2556: */
A_CLOSURE( SUZASIM_generator, TUZASIM_generator, UUZASIM_generator );
(( UUZASIM_generator * ) ( SUZASIM_generator.nonlocals )) -> WTZASIM_userinputs = WTZASIM_userinputs;
A_CALLPROC(SUZASIM_generator,(A68_TRUE, &YUZASIM),(A68_TRUE, &YUZASIM,(SUZASIM_generator).nonlocals));
XUZASIM_inputwires = YUZASIM;
 /* line 2557: */
AVZASIM = WTZASIM_userinputs.upb;
for ( ZUZASIM_i = 1;
ZUZASIM_i <= AVZASIM;
ZUZASIM_i += 1 )
{ 
 /* line 2558: */
 /* line 2559: */
BVZASIM = (&A_VINDEX(XUZASIM_inputwires,ZUZASIM_i)) ;
(*BVZASIM) = A_VINDEX(WTZASIM_userinputs,ZUZASIM_i).Wire;
}
 /* line 2562: */
 /* line 2563: */
 /* line 2564: */
 /* line 2565: */
 /* line 2566: */
DKXASIM_translateatomic( Body, QUZASIM_fnname, (*Declaration), XUZASIM_inputwires, PTZASIM_inputtypes, YTZASIM_outputtypeindex, Environ, Closure, (&JUZASIM_ramdata), (&IUZASIM_alienshape), Flt, &CVZASIM );
GUZASIM_instanceshape = CVZASIM;
 /* line 2569: */
DVZASIM_outputsize = YGCASIM_lookuptypesize(YTZASIM_outputtypeindex);
 /* line 2571: */
A_CLOSURE( FVZASIM_generator, GVZASIM_generator, HVZASIM_generator );
A_CALLPROC(FVZASIM_generator,(A68_FALSE, &KVZASIM),(A68_FALSE, &KVZASIM,(FVZASIM_generator).nonlocals));
LVZASIM_outputblock = KVZASIM;
 /* line 2572: */
MVZASIM.Instoffset = 0;
MVZASIM.Offset = (*(&((&GUZASIM_instanceshape)->Offset)));
MVZASIM.Size = DVZASIM_outputsize;
OVZASIM = A_HVEC(NVZASIM,MVZASIM,A68_178 ) ;
A_VASSIGN2(OVZASIM,LVZASIM_outputblock,A68_178 );
 /* line 2573: */
PVZASIM.Type = NTZASIM_fntype.To;
PVZASIM.Blocks = LVZASIM_outputblock;
LUZASIM_output = PVZASIM;
 /* line 2574: */
 /* line 2575: */
VSZASIM_stripoutputwire( LUZASIM_output, ZTZASIM_genoutput, &QVZASIM );
OUZASIM_moutput = QVZASIM;
} 
 /* line 2580: */
 /* line 2581: */
 /* line 2582: */
RVZASIM_fnno = FLCASIM_addfunction((*(&(Declaration->Fnname))), Outer, Version, WTZASIM_userinputs.upb, OUZASIM_moutput, LUZASIM_output, JUZASIM_ramdata, GUZASIM_instanceshape, IUZASIM_alienshape);
 /* line 2593: */
SVZASIM_found = A68_FALSE;
 /* line 2595: */
 /* line 2596: */
TVZASIM = (*(&(Declaration->Macspecs))) ;
if ( ! A_VSTRUCTCOMP(TVZASIM,FBAATRN_nilmacspecs) )
{ 
 /* line 2597: */
VVZASIM = (*(&(Declaration->Macspecs))) ;
WVZASIM = VVZASIM.upb -1;
UVZASIM_macspec = VVZASIM.data;
for (;WVZASIM-- >= 0;
(UVZASIM_macspec++
) )
{
 /* line 2598: */
if ( !(!SVZASIM_found) ) break;
XVZASIM = ((*(&(UVZASIM_macspec->Sort)))==HPABTRN_timescale);
if ( ! XVZASIM )
{ /* line 2599: */
XVZASIM = ((*(&(UVZASIM_macspec->Sort)))==IPABTRN_sftimescale);
}
 /* line 2600: */
if ( XVZASIM )
{ 
SVZASIM_found = A68_TRUE;
 /* line 2601: */
 /* line 2602: */
YVZASIM = (*(&(UVZASIM_macspec->Spec))) ;
switch ( YVZASIM.mode )
{ 
case 2: /* STRUCT(INT)  */
ZVZASIM_fn = (YVZASIM.data.mode2);
 /* line 2603: */
 /* line 2605: */
if ( ((*(&(UVZASIM_macspec->Sort)))==IPABTRN_sftimescale) )
{ 
 /* line 2606: */
AWZASIM = (*(&(Environ->Ints))) ;
BWZASIM = ZVZASIM_fn.Intno ;
CWZASIM = (*(&((*(&A_VINDEX(AWZASIM,BWZASIM)))->Value))) ;
switch ( CWZASIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE281,MODE281)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE281,INT,MODE281)  */
case 6: /* REF STRUCT(INT,MODE281)  */
case 7: /* REF STRUCT(MODE281,MODE281,MODE281)  */
case 8: /* REF STRUCT(MODE281)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(DWZASIM_ff,CWZASIM);
 /* line 2607: */
EWZASIM = DWZASIM_ff;
break;
default: 
A_CALLPROC(Flt,(GWZASIM),(GWZASIM,(Flt).nonlocals));
 /* line 2608: */
EWZASIM = HWZASIM;
break;
} 
IWZASIM_f = EWZASIM;
 /* line 2609: */
 /* line 2610: */
 /* line 2611: */
YQCASIM_addscaletime(RVZASIM_fnno, XOMATRN_int(IWZASIM_f));
} 
else
{ 
 /* line 2612: */
 /* line 2613: */
 /* line 2614: */
YQCASIM_addscaletime(RVZASIM_fnno, 0);
} 
break;
default: 
 /* line 2615: */
 /* line 2616: */
 /* line 2617: */
A_CALLPROC(Flt,(KWZASIM),(KWZASIM,(Flt).nonlocals));
break;
} 
} 
}
 /* line 2618: */
} 
 /* line 2623: */
MWZASIM = WTZASIM_userinputs.upb;
for ( LWZASIM_i = 1;
LWZASIM_i <= MWZASIM;
LWZASIM_i += 1 )
{ 
 /* line 2624: */
NWZASIM_input = A_VINDEX(WTZASIM_userinputs,LWZASIM_i).Wire;
 /* line 2625: */
 /* line 2626: */
RSCAOST_makeid( QWZASIM, &RWZASIM );
XMCASIM_addbinding(RVZASIM_fnno, RWZASIM, A_VINDEX(WTZASIM_userinputs,LWZASIM_i).Name, A_UNITE(PWZASIM,mode2,2,NWZASIM_input));
}
 /* line 2631: */
 /* line 2634: */
if ( !EUZASIM_atomic )
{ 
A_CLOSURE( TWZASIM_generator, UWZASIM_generator, VWZASIM_generator );
(( VWZASIM_generator * ) ( TWZASIM_generator.nonlocals )) -> Declaration = Declaration;
A_CALLPROC(TWZASIM_generator,(A68_TRUE, &ZWZASIM),(A68_TRUE, &ZWZASIM,(TWZASIM_generator).nonlocals));
YWZASIM_localsymbols = ZWZASIM;
 /* line 2635: */
A_CLOSURE( BXZASIM_generator, CXZASIM_generator, DXZASIM_generator );
(( DXZASIM_generator * ) ( BXZASIM_generator.nonlocals )) -> Declaration = Declaration;
A_CALLPROC(BXZASIM_generator,(A68_TRUE, &HXZASIM),(A68_TRUE, &HXZASIM,(BXZASIM_generator).nonlocals));
GXZASIM_ids = HXZASIM;
 /* line 2636: */
JXZASIM = YWZASIM_localsymbols.upb;
for ( IXZASIM_i = 1;
IXZASIM_i <= JXZASIM;
IXZASIM_i += 1 )
{ 
 /* line 2637: */
 /* line 2638: */
if ( (IXZASIM_i<=WTZASIM_userinputs.upb) )
{ 
LXZASIM = A_VINDEX(WTZASIM_userinputs,IXZASIM_i).Wire ;
MXZASIM = (&A_VINDEX(YWZASIM_localsymbols,IXZASIM_i)) ;
(*MXZASIM) = A_UNITE(KXZASIM,mode3,3,LXZASIM);
 /* line 2639: */
 /* line 2640: */
 /* line 2641: */
NXZASIM = (&A_VINDEX(GXZASIM_ids,IXZASIM_i)) ;
(*NXZASIM) = A_VINDEX(WTZASIM_userinputs,IXZASIM_i).Name;
} 
else
{ 
PXZASIM = (&A_VINDEX(YWZASIM_localsymbols,IXZASIM_i)) ;
(*PXZASIM) = A_EMPTY(OXZASIM,5);
 /* line 2642: */
 /* line 2643: */
 /* line 2645: */
QXZASIM = (&A_VINDEX(GXZASIM_ids,IXZASIM_i)) ;
(*QXZASIM) = NTCAOST_nilid;
} 
}
 /* line 2646: */
 /* line 2647: */
RXZASIM = Body ;
switch ( RXZASIM.mode )
{ 
case 1: /* REF STRUCT(MODE245)  */
SXZASIM_u = (RXZASIM.data.mode1);
 /* line 2648: */
TXZASIM = (*(&(SXZASIM_u->Tag))) ;
switch ( TXZASIM.mode )
{ 
case 29: /* REF STRUCT(REF MODE292,MODE245)  */
UXZASIM_us = (TXZASIM.data.mode29);
 /* line 2649: */
 /* line 2650: */
VXZASIM = (*UXZASIM_us);
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
WXZASIM_useries = VXZASIM;
 /* line 2651: */
XXZASIM_localoffset = ((DENASIM_ws*(PTZASIM_inputtypes.upb+1))+GENASIM_sizeunit);
 /* line 2652: */
YXZASIM_constantsend = XXZASIM_localoffset;
 /* line 2653: */
 /* line 2654: */
 /* line 2655: */
MZYASIM_declare( WXZASIM_useries, RVZASIM_fnno, Declaration, Environ, Closure, YWZASIM_localsymbols, GXZASIM_ids, (&YXZASIM_constantsend), Diaglevel, Flt, &ZXZASIM );
AYZASIM_body = ZXZASIM;
 /* line 2656: */
TOZASIM_transferjoins(RVZASIM_fnno, (&YXZASIM_constantsend));
 /* line 2657: */
RQYASIM_wire( AYZASIM_body, &CYZASIM );
BYZASIM_coutput = CYZASIM;
 /* line 2658: */
ORZASIM_transferlocation(RVZASIM_fnno, (&((&BYZASIM_coutput)->Blocks)));
 /* line 2659: */
VSZASIM_stripoutputwire( BYZASIM_coutput, ZTZASIM_genoutput, &DYZASIM );
EYZASIM_moutput = DYZASIM;
 /* line 2660: */
FYZASIM.Size = YXZASIM_constantsend;
FYZASIM.Offset = XXZASIM_localoffset;
FYZASIM.Sort = HHCASIM_compound;
GQCASIM_addshape(RVZASIM_fnno, FYZASIM);
 /* line 2661: */
 /* line 2664: */
LQCASIM_addoutputlocation(RVZASIM_fnno, EYZASIM_moutput.Blocks, (*(&((&BYZASIM_coutput)->Blocks))));
} 
 /* line 2670: */
A_CLOSURE( HYZASIM_generator, IYZASIM_generator, JYZASIM_generator );
(( JYZASIM_generator * ) ( HYZASIM_generator.nonlocals )) -> RTZASIM_inputsizes = RTZASIM_inputsizes;
A_CALLPROC(HYZASIM_generator,(A68_FALSE, &MYZASIM),(A68_FALSE, &MYZASIM,(HYZASIM_generator).nonlocals));
A_VASSIGN2(RTZASIM_inputsizes,MYZASIM,A68_INT ) ;
OOCASIM_addinputsizes(RVZASIM_fnno, MYZASIM);
 /* line 2671: */
GUCASIM_lookupexpansion( RVZASIM_fnno, &NYZASIM );
OYZASIM_expansion = NYZASIM;
 /* line 2672: */
QYZASIM = OYZASIM_expansion.upb;
for ( PYZASIM_i = 1;
PYZASIM_i <= QYZASIM;
PYZASIM_i += 1 )
{ 
 /* line 2673: */
RYZASIM = (*(&A_VINDEX(OYZASIM_expansion,PYZASIM_i))) ;
SYZASIM_component = (*(&A_VINDEX(ANXASIM_makes,RYZASIM)));
 /* line 2674: */
TYZASIM_inputs = SYZASIM_component.Inputs;
 /* line 2675: */
VYZASIM = TYZASIM_inputs.upb;
for ( UYZASIM_j = 1;
UYZASIM_j <= VYZASIM;
UYZASIM_j += 1 )
{ 
 /* line 2676: */
WYZASIM_input = (*(&A_VINDEX(TYZASIM_inputs,UYZASIM_j)));
 /* line 2677: */
XYZASIM_offset = WYZASIM_input.Offset;
 /* line 2678: */
 /* line 2679: */
if ( (XYZASIM_offset<0) )
{ 
YYZASIM_ip = (((-XYZASIM_offset)-GENASIM_sizeunit)/DENASIM_ws);
 /* line 2680: */
 /* line 2681: */
 /* line 2682: */
 /* line 2683: */
VPCASIM_addinputalias(RVZASIM_fnno, YYZASIM_ip, SYZASIM_component.Instance, UYZASIM_j, SYZASIM_component.Fn);
} 
}
 /* line 2684: */
}
 /* line 2685: */
ZYZASIM_fanout = WVCASIM_lookuptotalinputfanout(RVZASIM_fnno);
 /* line 2686: */
if ( (ZYZASIM_fanout>LNXASIM_maxinputfanout) )
{ 
LNXASIM_maxinputfanout = ZYZASIM_fanout;
} 
 /* line 2692: */
 /* line 2693: */
AZZASIM = RVZASIM_fnno;
} 
return( AZZASIM );
} 
#undef NL

A68_INT  DZZASIM_translatetoplevel(A68_32  Fnnos)
{ 
A68_173  EZZASIM;  /* collateral clause result */
A68_173  FZZASIM_nullwire;
A68_175  HZZASIM;  /* collateral clause result */
A68_176  IZZASIM;  /* OPERATORS - skip to mode */
A68_VC  KZZASIM;  /* avoid structure result */
A68_INT  LZZASIM_fn;
A68_VC  OZZASIM;  /* avoid structure result */
A68_VC  PZZASIM_cpname;
A68_VC  QZZASIM;  /* avoid structure result */
A68_VC  RZZASIM_cpuname;
A68_176  SZZASIM;  /* OPERATORS - skip to mode */
A68_175  TZZASIM;  /* avoid structure result */
A68_INT  UZZASIM_cp;
A68_INT  VZZASIM_circuitparamsource;
A68_INT  WZZASIM_cpmake;
A68_INT  XZZASIM_i;
A68_INT  YZZASIM;  /* to part of loop */
A68_INT  ZZZASIM_instoffset;
A68_INT  AAABSIM_make;
A68_32  CAABSIM;  /* avoid structure result */
A68_32  BAABSIM_inputsizes;
A68_INT  DAABSIM_whence;
A68_INT  EAABSIM_j;
A68_INT  FAABSIM;  /* to part of loop */
A68_INT  GAABSIM;  /* clause result */
A_PROC_ENTRY(translatetoplevel);
 /* line 2715: */
 /* line 2716: */
{ 
EZZASIM.Type = ZSAASIM_nullstype;
EZZASIM.Blocks = VLXASIM_nullrvb;
FZZASIM_nullwire = EZZASIM;
 /* line 2717: */
 /* line 2718: */
 /* line 2719: */
HZZASIM.Size = (DENASIM_ws+GENASIM_sizeunit);
HZZASIM.Offset = (DENASIM_ws+GENASIM_sizeunit);
HZZASIM.Sort = HHCASIM_compound;
 /* line 2720: */
RSCAOST_makeid( JZZASIM, &KZZASIM );
LZZASIM_fn = FLCASIM_addfunction(KZZASIM, 0, (-1), 0, FZZASIM_nullwire, FZZASIM_nullwire, STAASIM_nilsram, HZZASIM, IZZASIM);
 /* line 2721: */
RSCAOST_makeid( NZZASIM, &OZZASIM );
PZZASIM_cpname = OZZASIM;
 /* line 2722: */
DRCASIM_uniqueid( PZZASIM_cpname, 0, (-1), &QZZASIM );
RZZASIM_cpuname = QZZASIM;
 /* line 2723: */
 /* line 2724: */
 /* line 2725: */
 /* line 2726: */
CWPASIM_translatedatasource( KNXASIM_maxinputsize, RZZASIM_cpuname, &TZZASIM );
UZZASIM_cp = FLCASIM_addfunction(PZZASIM_cpname, 0, (-1), 0, FZZASIM_nullwire, FZZASIM_nullwire, STAASIM_nilsram, TZZASIM, SZZASIM);
 /* line 2727: */
VZZASIM_circuitparamsource = RNCASIM_nextinstance(LZZASIM_fn, UZZASIM_cp);
 /* line 2728: */
WZZASIM_cpmake = IPXASIM_addmake(UZZASIM_cp, VZZASIM_circuitparamsource);
 /* line 2729: */
YNCASIM_addexpansion(LZZASIM_fn, WZZASIM_cpmake);
 /* line 2730: */
MNXASIM_cpinstanceno = (VZZASIM_circuitparamsource+1);
 /* line 2731: */
YZZASIM = Fnnos.upb;
for ( XZZASIM_i = 1;
XZZASIM_i <= YZZASIM;
XZZASIM_i += 1 )
{ 
 /* line 2732: */
ZZZASIM_instoffset = RNCASIM_nextinstance(LZZASIM_fn, A_VINDEX(Fnnos,XZZASIM_i));
 /* line 2733: */
AAABSIM_make = IPXASIM_addmake(A_VINDEX(Fnnos,XZZASIM_i), ZZZASIM_instoffset);
 /* line 2734: */
YNCASIM_addexpansion(LZZASIM_fn, AAABSIM_make);
 /* line 2735: */
QUCASIM_lookupinputsizes( A_VINDEX(Fnnos,XZZASIM_i), &CAABSIM );
BAABSIM_inputsizes = CAABSIM;
 /* line 2736: */
DAABSIM_whence = (DENASIM_ws+GENASIM_sizeunit);
 /* line 2737: */
FAABSIM = BAABSIM_inputsizes.upb;
for ( EAABSIM_j = 1;
EAABSIM_j <= FAABSIM;
EAABSIM_j += 1 )
{ 
 /* line 2738: */
SQXASIM_addconnection(VZZASIM_circuitparamsource, DAABSIM_whence, AAABSIM_make, EAABSIM_j);
 /* line 2739: */
 /* line 2740: */
DAABSIM_whence+=(*(&A_VINDEX(BAABSIM_inputsizes,EAABSIM_j)));
}
 /* line 2741: */
}
 /* line 2742: */
 /* line 2743: */
GAABSIM = IPXASIM_addmake(LZZASIM_fn, 1);
} 
A_PROC_EXIT(translatetoplevel);
return( GAABSIM );
} 
#undef NL

A68_VOID  HAABSIM_removeinstances(void)
{ 
A68_506  IAABSIM;  /* OPERATORS - nil -> mode */
A68_INT  JAABSIM_i;
A68_INT  KAABSIM;  /* to part of loop */
A68_510 * LAABSIM;  /* YIELD */
A68_515  QAABSIM;  /* avoid structure result */
A68_438  VAABSIM;  /* avoid structure result */
A_PROC_ENTRY(removeinstances);
{ 
AMXASIM_instanceptrs = (A68_504 *)A68_NIL;
 /* line 2762: */
BMXASIM_probeinstanceptrs = A_VVAC(IAABSIM);
 /* line 2763: */
VMXASIM_circuitfnenv = TMXASIM_emptyfnenv;
 /* line 2764: */
KAABSIM = UMXASIM_probefnenv.upb;
for ( JAABSIM_i = 1;
JAABSIM_i <= KAABSIM;
JAABSIM_i += 1 )
{ 
LAABSIM = (&A_VINDEX(UMXASIM_probefnenv,JAABSIM_i)) ;
(*LAABSIM) = TMXASIM_emptyfnenv;
}
 /* line 2765: */
NAABSIM_generator( A68_FALSE, &QAABSIM );
ANXASIM_makes = QAABSIM;
 /* line 2766: */
CNXASIM_lastmake = 0;
 /* line 2767: */
SAABSIM_generator( A68_FALSE, &VAABSIM );
HNXASIM_constants = VAABSIM;
 /* line 2768: */
JNXASIM_lastconstant = 0;
 /* line 2769: */
 /* line 2770: */
KNXASIM_maxinputsize = 0;
} 
A_PROC_EXIT(removeinstances);
return;
} 
#undef NL

A68_VOID  YAABSIM_saveinstanceptrs(A68_206  Ferry, A68_36  Flt)
{ 
A68_INT  ZAABSIM_i;
A68_INT  ABABSIM;  /* to part of loop */
A68_INT  BBABSIM_i;
A68_INT  CBABSIM;  /* to part of loop */
A68_505 * DBABSIM_thisprobe;
A68_INT  EBABSIM_i;
A68_INT  FBABSIM;  /* to part of loop */
A68_504  GBABSIM;  /* OPERATORS - simple index */
A68_504  HBABSIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(saveinstanceptrs);
 /* line 2783: */
 /* line 2784: */
{ 
PHBASIM_writeint(MNXASIM_cpinstanceno, Ferry, Flt);
 /* line 2785: */
PHBASIM_writeint((*AMXASIM_instanceptrs).upb, Ferry, Flt);
 /* line 2786: */
ABABSIM = (*AMXASIM_instanceptrs).upb;
for ( ZAABSIM_i = 1;
ZAABSIM_i <= ABABSIM;
ZAABSIM_i += 1 )
{ 
 /* line 2787: */
PHBASIM_writeint((*(&((&A_VINDEX((*AMXASIM_instanceptrs),ZAABSIM_i))->Fnno))), Ferry, Flt);
 /* line 2788: */
 /* line 2789: */
PHBASIM_writeint((*(&((&A_VINDEX((*AMXASIM_instanceptrs),ZAABSIM_i))->Offset))), Ferry, Flt);
}
 /* line 2790: */
PHBASIM_writeint(BMXASIM_probeinstanceptrs.upb, Ferry, Flt);
 /* line 2791: */
CBABSIM = BMXASIM_probeinstanceptrs.upb;
for ( BBABSIM_i = 1;
BBABSIM_i <= CBABSIM;
BBABSIM_i += 1 )
{ 
 /* line 2792: */
DBABSIM_thisprobe = (&A_VINDEX(BMXASIM_probeinstanceptrs,BBABSIM_i));
 /* line 2793: */
PHBASIM_writeint((*(&(DBABSIM_thisprobe->Inputinstance))), Ferry, Flt);
 /* line 2794: */
PHBASIM_writeint((*(&(DBABSIM_thisprobe->Probeinstance))), Ferry, Flt);
 /* line 2795: */
PHBASIM_writeint((*(&(DBABSIM_thisprobe->Fnno))), Ferry, Flt);
 /* line 2796: */
PHBASIM_writeint((*(&(DBABSIM_thisprobe->Size))), Ferry, Flt);
 /* line 2797: */
PHBASIM_writeint((*(&(DBABSIM_thisprobe->Baseoffset))), Ferry, Flt);
 /* line 2798: */
PHBASIM_writeint((*(&(DBABSIM_thisprobe->Instptrs))).upb, Ferry, Flt);
 /* line 2799: */
FBABSIM = (*(&(DBABSIM_thisprobe->Instptrs))).upb;
for ( EBABSIM_i = 1;
EBABSIM_i <= FBABSIM;
EBABSIM_i += 1 )
{ 
 /* line 2800: */
GBABSIM = (*(&(DBABSIM_thisprobe->Instptrs))) ;
PHBASIM_writeint((*(&((&A_VINDEX(GBABSIM,EBABSIM_i))->Fnno))), Ferry, Flt);
 /* line 2801: */
 /* line 2802: */
HBABSIM = (*(&(DBABSIM_thisprobe->Instptrs))) ;
PHBASIM_writeint((*(&((&A_VINDEX(HBABSIM,EBABSIM_i))->Offset))), Ferry, Flt);
}
 /* line 2803: */
}
 /* line 2804: */
} 
A_PROC_EXIT(saveinstanceptrs);
return;
} 
#undef NL

A68_VOID  KBABSIM_restoreinstanceptrs(A68_206  Ferry, A68_36  Flt)
{ 
A68_INT  LBABSIM_upb;
A68_529  NBABSIM_generator;   /* proc value of non-global proc */
A68_504  SBABSIM;  /* avoid structure result */
A68_504  TBABSIM_ptrs;
A68_INT  UBABSIM_i;
A68_INT  VBABSIM;  /* to part of loop */
A68_INT * WBABSIM;  /* YIELD */
A68_INT * XBABSIM;  /* YIELD */
A68_549  ZBABSIM_generator;   /* proc value of non-global proc */
A68_506  ECABSIM;  /* avoid structure result */
A68_INT  FCABSIM_i;
A68_INT  GCABSIM;  /* to part of loop */
A68_505 * HCABSIM_thisprobe;
A68_INT * ICABSIM;  /* YIELD */
A68_INT * JCABSIM;  /* YIELD */
A68_INT * KCABSIM;  /* YIELD */
A68_INT * LCABSIM;  /* YIELD */
A68_INT * MCABSIM;  /* YIELD */
A68_529  OCABSIM_generator;   /* proc value of non-global proc */
A68_504  TCABSIM;  /* avoid structure result */
A68_504 * UCABSIM;  /* YIELD */
A68_INT  VCABSIM_i;
A68_INT  WCABSIM;  /* to part of loop */
A68_504  XCABSIM;  /* OPERATORS - simple index */
A68_INT * YCABSIM;  /* YIELD */
A68_504  ZCABSIM;  /* OPERATORS - simple index */
A68_INT * ADABSIM;  /* YIELD */
A_PROC_ENTRY(restoreinstanceptrs);
 /* line 2807: */
 /* line 2808: */
{ 
MNXASIM_cpinstanceno = LGBASIM_readint(Ferry, Flt);
 /* line 2809: */
LBABSIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 2810: */
A_CLOSURE( NBABSIM_generator, OBABSIM_generator, PBABSIM_generator );
(( PBABSIM_generator * ) ( NBABSIM_generator.nonlocals )) -> LBABSIM_upb = (&LBABSIM_upb);
A_CALLPROC(NBABSIM_generator,(A68_FALSE, &SBABSIM),(A68_FALSE, &SBABSIM,(NBABSIM_generator).nonlocals));
TBABSIM_ptrs = SBABSIM;
 /* line 2811: */
CMXASIM_circuitinstanceptrs = TBABSIM_ptrs;
 /* line 2812: */
AMXASIM_instanceptrs = (&CMXASIM_circuitinstanceptrs);
 /* line 2813: */
VBABSIM = LBABSIM_upb;
for ( UBABSIM_i = 1;
UBABSIM_i <= VBABSIM;
UBABSIM_i += 1 )
{ 
 /* line 2814: */
WBABSIM = (&((&A_VINDEX(TBABSIM_ptrs,UBABSIM_i))->Fnno)) ;
(*WBABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2815: */
 /* line 2816: */
XBABSIM = (&((&A_VINDEX(TBABSIM_ptrs,UBABSIM_i))->Offset)) ;
(*XBABSIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 2817: */
LBABSIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 2818: */
A_CLOSURE( ZBABSIM_generator, ACABSIM_generator, BCABSIM_generator );
(( BCABSIM_generator * ) ( ZBABSIM_generator.nonlocals )) -> LBABSIM_upb = (&LBABSIM_upb);
A_CALLPROC(ZBABSIM_generator,(A68_FALSE, &ECABSIM),(A68_FALSE, &ECABSIM,(ZBABSIM_generator).nonlocals));
BMXASIM_probeinstanceptrs = ECABSIM;
 /* line 2819: */
GCABSIM = BMXASIM_probeinstanceptrs.upb;
for ( FCABSIM_i = 1;
FCABSIM_i <= GCABSIM;
FCABSIM_i += 1 )
{ 
 /* line 2820: */
HCABSIM_thisprobe = (&A_VINDEX(BMXASIM_probeinstanceptrs,FCABSIM_i));
 /* line 2821: */
ICABSIM = (&(HCABSIM_thisprobe->Inputinstance)) ;
(*ICABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2822: */
JCABSIM = (&(HCABSIM_thisprobe->Probeinstance)) ;
(*JCABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2823: */
KCABSIM = (&(HCABSIM_thisprobe->Fnno)) ;
(*KCABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2824: */
LCABSIM = (&(HCABSIM_thisprobe->Size)) ;
(*LCABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2825: */
MCABSIM = (&(HCABSIM_thisprobe->Baseoffset)) ;
(*MCABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2826: */
LBABSIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 2827: */
A_CLOSURE( OCABSIM_generator, PCABSIM_generator, QCABSIM_generator );
(( QCABSIM_generator * ) ( OCABSIM_generator.nonlocals )) -> LBABSIM_upb = (&LBABSIM_upb);
A_CALLPROC(OCABSIM_generator,(A68_FALSE, &TCABSIM),(A68_FALSE, &TCABSIM,(OCABSIM_generator).nonlocals));
UCABSIM = (&(HCABSIM_thisprobe->Instptrs)) ;
(*UCABSIM) = TCABSIM;
 /* line 2828: */
WCABSIM = (*(&(HCABSIM_thisprobe->Instptrs))).upb;
for ( VCABSIM_i = 1;
VCABSIM_i <= WCABSIM;
VCABSIM_i += 1 )
{ 
 /* line 2829: */
XCABSIM = (*(&(HCABSIM_thisprobe->Instptrs))) ;
YCABSIM = (&((&A_VINDEX(XCABSIM,VCABSIM_i))->Fnno)) ;
(*YCABSIM) = LGBASIM_readint(Ferry, Flt);
 /* line 2830: */
 /* line 2831: */
ZCABSIM = (*(&(HCABSIM_thisprobe->Instptrs))) ;
ADABSIM = (&((&A_VINDEX(ZCABSIM,VCABSIM_i))->Offset)) ;
(*ADABSIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 2832: */
}
 /* line 2833: */
 /* line 2836: */
} 
A_PROC_EXIT(restoreinstanceptrs);
return;
} 
#undef NL
 /* line 2: */
 /* line 4: */
 /* line 7: */
void MLXASIM(void)   /* initialise DECS keinstance */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keinstance.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/transform/assoc/mfiles/timescale.m","./mfiles/kememory.m","./mfiles/keconv.m","./mfiles/keambasics.m","./mfiles/kebasics.m","./mfiles/kesave.m","./mfiles/keamgen.m","./mfiles/kesignals.m","./mfiles/kesort.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_177  WLXASIM;  /* avoid structure result */
A68_510  HMXASIM;  /* collateral clause result */
A68_502  MMXASIM;  /* avoid structure result */
A68_209  NMXASIM;  /* OPERATORS - nil -> mode */
A68_509  SMXASIM;  /* avoid structure result */
A68_515  BNXASIM;  /* avoid structure result */
A68_438  INXASIM;  /* avoid structure result */
A68_415  TCYASIM;  /* collateral clause result */
A68_VC  ZCYASIM;  /* avoid structure result */
A68_VC  BDYASIM;  /* OPERATORS - assign op */
A68_550  BZZASIM;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
CPABTRN();   /* USE timescale */
KSOASIM();   /* USE kememory */
KUBASIM();   /* USE keconv */
XDNASIM();   /* USE keambasics */
JSAASIM();   /* USE kebasics */
EFBASIM();   /* USE kesave */
IIXASIM();   /* USE keamgen */
NYNASIM();   /* USE kesignals */
PCBASIM();   /* USE kesort */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keinstance.a68";
A_config.translation_time = "Tue Apr  4 11:12:35 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LLXASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:12:35 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keinstance);
UEAALIB_a68config(LGAALIB_configinfo, QLXASIM);
 /* line 162: */
SLXASIM_generator( A68_TRUE, &WLXASIM );
VLXASIM_nullrvb = WLXASIM;
 /* line 179: */
 /* line 182: */
 /* line 184: */
 /* line 185: */
 /* line 192: */
ZLXASIM_alienworkspacesize = 0;
 /* line 198: */
 /* line 200: */
 /* line 207: */
 /* line 212: */
 /* line 213: */
 /* line 215: */
 /* line 222: */
 /* line 224: */
 /* line 225: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 242: */
 /* line 249: */
 /* line 251: */
 /* line 252: */
JMXASIM_generator( A68_FALSE, &MMXASIM );
HMXASIM.Instances = MMXASIM;
 /* line 253: */
HMXASIM.Fanouts = A_VVAC(NMXASIM);
 /* line 254: */
PMXASIM_generator( A68_FALSE, &SMXASIM );
HMXASIM.Breaks = SMXASIM;
HMXASIM.Lastinstance = 0;
HMXASIM.Lastbreak = 0;
HMXASIM.Firstcombinatorial = 0;
HMXASIM.Lastcombinatorial = 0;
HMXASIM.Firsteventhandler = 0;
TMXASIM_emptyfnenv = HMXASIM;
 /* line 256: */
 /* line 260: */
 /* line 268: */
 /* line 270: */
XMXASIM_generator( A68_FALSE, &BNXASIM );
ANXASIM_makes = BNXASIM;
 /* line 271: */
CNXASIM_lastmake = 0;
 /* line 277: */
ENXASIM_generator( A68_FALSE, &INXASIM );
HNXASIM_constants = INXASIM;
 /* line 278: */
JNXASIM_lastconstant = 0;
 /* line 284: */
KNXASIM_maxinputsize = 0;
 /* line 285: */
LNXASIM_maxinputfanout = 0;
 /* line 290: */
MNXASIM_cpinstanceno = 0;
 /* line 297: */
 /* line 298: */
 /* line 299: */
 /* line 313: */
 /* line 330: */
 /* line 331: */
 /* line 332: */
 /* line 346: */
 /* line 363: */
 /* line 391: */
 /* line 396: */
 /* line 397: */
 /* line 398: */
 /* line 410: */
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 436: */
 /* line 463: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 535: */
 /* line 536: */
 /* line 537: */
 /* line 560: */
 /* line 561: */
 /* line 584: */
 /* line 633: */
 /* line 681: */
 /* line 682: */
 /* line 899: */
 /* line 961: */
TCYASIM.Lab = 0;
VCYASIM_generator( A68_TRUE, &ZCYASIM );
BDYASIM = ADYASIM ;
A_VASSIGN2(BDYASIM,ZCYASIM,A68_CHAR ) ;
TCYASIM.Tag = ZCYASIM;
CDYASIM_instlab = TCYASIM;
 /* line 962: */
 /* line 963: */
EDYASIM_settingphase = (DDYASIM_combphase+1);
 /* line 964: */
FDYASIM_handlingphase = (EDYASIM_settingphase+1);
 /* line 965: */
GDYASIM_initialiserphase = (FDYASIM_handlingphase+1);
 /* line 966: */
HDYASIM_terminatorphase = (GDYASIM_initialiserphase+1);
 /* line 967: */
IDYASIM_saverphase = (HDYASIM_terminatorphase+1);
 /* line 968: */
JDYASIM_restorerphase = (IDYASIM_saverphase+1);
 /* line 969: */
KDYASIM_noofphases = (JDYASIM_restorerphase+1);
 /* line 971: */
 /* line 972: */
 /* line 973: */
 /* line 995: */
 /* line 996: */
 /* line 998: */
 /* line 1033: */
 /* line 1034: */
 /* line 1046: */
 /* line 1047: */
 /* line 1048: */
 /* line 1076: */
 /* line 1077: */
 /* line 1087: */
 /* line 1088: */
 /* line 1089: */
 /* line 1120: */
 /* line 1121: */
 /* line 1122: */
 /* line 1135: */
 /* line 1136: */
 /* line 1137: */
 /* line 1168: */
 /* line 1169: */
 /* line 1179: */
 /* line 1180: */
 /* line 1181: */
 /* line 1203: */
 /* line 1204: */
 /* line 1213: */
 /* line 1237: */
 /* line 1238: */
 /* line 1247: */
 /* line 1248: */
 /* line 1276: */
 /* line 1371: */
 /* line 1579: */
 /* line 1580: */
 /* line 1601: */
 /* line 1602: */
 /* line 1603: */
 /* line 1612: */
 /* line 1625: */
 /* line 1664: */
 /* line 1708: */
 /* line 1738: */
 /* line 1778: */
 /* line 1793: */
 /* line 1804: */
 /* line 1829: */
 /* line 1860: */
 /* line 2223: */
 /* line 2242: */
 /* line 2257: */
 /* line 2261: */
 /* line 2338: */
 /* line 2439: */
 /* line 2460: */
 /* line 2476: */
 /* line 2485: */
 /* line 2497: */
 /* line 2498: */
BZZASIM.fn.fn_global = GTZASIM_anonymous;
BZZASIM.nonlocals = A68_NIL;
EQYASIM_translatefunction = BZZASIM;
 /* line 2714: */
 /* line 2758: */
 /* line 2759: */
 /* line 2761: */
 /* line 2782: */
 /* line 2806: */
 /* line 2841: */
A_PROC_EXIT(DECS keinstance);
} 
#undef NL
/* end of translation of ./a68files/keinstance.a68 */
