
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
/* UNAME:MSHAAMM */
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
A_VECTOR(struct A68t160 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE160 */
struct A68t158{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t159  Elements;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(BITS,REF MODE159)  */
struct A68t160 { A68_INT mode; union {
A68_INT * mode1;
struct A68t158  mode2;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF INT,MODE158)  */
struct A68t161{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t161 ,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] MODE161 */
A_VECTOR(struct A68t163 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE163 */
struct A68t164{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t165  Params;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,REF MODE165)  */
struct A68t163 { A68_INT mode; union {
struct A68t164  mode1;
struct A68t161  mode2;
} data; };
typedef struct A68t163  A68_163 ;    /* UNION(MODE164,MODE161)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE97) REF MODE26 */
struct A68t166 { A68_INT mode; union {
struct A68t167  mode1;
A68_INT * mode2;
struct A68t158  mode3;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(MODE167,REF INT,MODE158)  */
struct A68t168{
A68_INT * Sort;
struct A68t166  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF INT,MODE166,REF MODE26,REF MODE26)  */
struct A68t169{
struct A68t168  Rule;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE168,REF MODE169)  */

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE158) BOOL */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t159 ,struct A68t158 *),(struct A68t159 ,struct A68t158 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE159) MODE158 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t160 ,struct A68t158 *),(struct A68t160 ,struct A68t158 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE160) MODE158 */
struct A68t174 ;

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t160 ,struct A68t174 ,A68_VC *),(struct A68t160 ,struct A68t174 ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE160,REF MODE174) REF MODE26 */
A_VECTOR(struct A68t168 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE168 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t34 *,struct A68t174 ),(struct A68t34 *,struct A68t174 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE34,REF MODE174) VOID */
struct A68t177 ;

A_PROCEDURE(struct A68t169 *,A68t176,(struct A68t169 *,struct A68t177 ),(struct A68t169 *,struct A68t177 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE169,MODE177) REF MODE169 */
A_VECTOR(struct A68t178 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE178 */
struct A68t178{
A68_INT * No;
struct A68t166  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF INT,MODE166,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t163 ,struct A68t162 *),(struct A68t163 ,struct A68t162 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE163) REF MODE162 */

A_PROCEDURE(A68_BOOL ,A68t180,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t182,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t184,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t183{
A68_VC  Rdbuffer;
struct A68t184  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t185 * Stack;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,MODE184,INT,INT,INT,REF MODE185)  */
struct A68t185{
A68_VC  Line;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */

A_PROCEDURE(struct A68t183 *,A68t186,(A68_VC ,struct A68t184 ),(A68_VC ,struct A68t184 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE26,MODE184) REF MODE183 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t183 ),(struct A68t183 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE183) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t149 *),(struct A68t149 *,void *));
typedef struct A68t188  A68_188 ;    /* PROC REF MODE149 */

A_PROCEDURE(A68_BOOL ,A68t189,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t174 ,struct A68t160 ,struct A68t97 ,struct A68t163 *),(struct A68t174 ,struct A68t160 ,struct A68t97 ,struct A68t163 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE174,MODE160,MODE97) MODE163 */

A_PROCEDURE(A68_CHAR ,A68t191,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t192,(A68_VC *),(A68_VC *,void *));
typedef struct A68t192  A68_192 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t193,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t161 ,A68_INT ,struct A68t97 ),(struct A68t161 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE161,INT,MODE97) VOID */
struct A68t195{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t195 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t195 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE195,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t197,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t198,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE161) BOOL */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t161 ,struct A68t97 ,A68_VC *),(struct A68t161 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE161,MODE97) REF MODE26 */
struct A68t200{
A68_INT  C;
A_PAD_INT(PAD_44)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t201{
A68_BITS  A;
A_PAD_BITS(PAD_45)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t203,(A68_VC ,struct A68t163 ,struct A68t97 ),(A68_VC ,struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE26,MODE163,MODE97) VOID */
struct A68t202{
A68_VC  Parameter;
struct A68t203  Proc;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE26,MODE203)  */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t163 ,struct A68t97 ),(struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE163,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE162,MODE97) VOID */
struct A68t204 { A68_INT mode; union {
struct A68t202  mode1;
struct A68t205  mode2;
struct A68t206  mode3;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE202,MODE205,MODE206)  */
struct A68t207 { A68_INT mode; union {
struct A68t208 * mode1;
struct A68t209 * mode2;
struct A68t210 * mode3;
} data; };
typedef struct A68t207  A68_207 ;    /* UNION(REF MODE208,REF MODE209,REF MODE210)  */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t208 *,struct A68t34 *),(struct A68t208 *,struct A68t34 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE208,REF MODE34) VOID */
struct A68t212 { A68_INT mode; union {
A68_VC  mode1;
struct A68t149  mode2;
struct A68t213  mode3;
} data; };
typedef struct A68t212  A68_212 ;    /* UNION(REF MODE26,REF MODE149,MODE213)  */
struct A68t208{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t160  Parameter;
struct A68t201  Access;
struct A68t200  Continuation;
struct A68t212  Help;
struct A68t204  Command;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(REF MODE26,REF MODE26,MODE160,MODE201,MODE200,MODE212,MODE204)  */
A_VECTOR(struct A68t207 ,A68t211);
typedef struct A68t211  A68_211 ;    /* VECTOR [] MODE207 */
struct A68t209{
struct A68t208 * Group;
struct A68t211  Commands;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(REF MODE208,REF MODE211)  */
struct A68t210{
struct A68t208 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t211  Locals;
struct A68t211  Globals;
struct A68t208 * Postlude;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE208,REF MODE26,REF REF MODE26,REF MODE211,REF MODE211,REF MODE208)  */
struct A68t214{
struct A68t210 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_46)
struct A68t149  Input_lines;
struct A68t214 * Caller;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(REF MODE210,INT,REF MODE149,REF MODE214)  */
struct A68t215 ;

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t215 *,struct A68t208 *,struct A68t163 ,struct A68t97 ,struct A68t200 *),(struct A68t215 *,struct A68t208 *,struct A68t163 ,struct A68t97 ,struct A68t200 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE215,REF MODE208,MODE163,MODE97) MODE200 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE149) VOID */
struct A68t219 ;

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t219 ),(struct A68t219 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE219) VOID */
struct A68t215{
struct A68t214 * Stack;
struct A68t174  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_47)
A68_BOOL  Private;
A_PAD_BOOL(PAD_48)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_49)
struct A68t216  Caller;
struct A68t217  Report_error;
struct A68t218  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE214,REF MODE174,BOOL,BOOL,BOOL,MODE216,MODE217,MODE218,MODE97)  */
struct A68t219 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t219  A68_219 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t200 ,struct A68t200 ),(struct A68t200 ,struct A68t200 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE200,MODE200) BOOL */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t211 ,struct A68t211 ,struct A68t211 *),(struct A68t211 ,struct A68t211 ,struct A68t211 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE211,MODE211) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t211 ,struct A68t207 ,struct A68t211 *),(struct A68t211 ,struct A68t207 ,struct A68t211 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE211,MODE207) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t211 *,struct A68t211 ,struct A68t211 *),(struct A68t211 *,struct A68t211 ,struct A68t211 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF REF MODE211,MODE211) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t211 *,struct A68t207 ,struct A68t211 *),(struct A68t211 *,struct A68t207 ,struct A68t211 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF REF MODE211,MODE207) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t211 ,struct A68t211 *),(struct A68t211 ,struct A68t211 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE211) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t207 ,struct A68t211 *),(struct A68t207 ,struct A68t211 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE207) REF MODE211 */

A_PROCEDURE(struct A68t209 *,A68t227,(A68_VC ,A68_VC ,struct A68t201 ,struct A68t211 ),(A68_VC ,A68_VC ,struct A68t201 ,struct A68t211 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE26,MODE26,MODE201,MODE211) REF MODE209 */

A_PROCEDURE(struct A68t210 *,A68t228,(struct A68t208 *,A68_VC ,A68_VC *,struct A68t211 ,struct A68t211 ,struct A68t204 ),(struct A68t208 *,A68_VC ,A68_VC *,struct A68t211 ,struct A68t211 ,struct A68t204 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE208,MODE26,REF REF MODE26,REF MODE211,REF MODE211,MODE204) REF MODE210 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t215 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t215 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE215,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t215 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t215 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE215,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t215 *,A68t231,(struct A68t217 ,struct A68t218 ,struct A68t97 ,struct A68t216 ,struct A68t169 *,struct A68t210 *,struct A68t163 ),(struct A68t217 ,struct A68t218 ,struct A68t97 ,struct A68t216 ,struct A68t169 *,struct A68t210 *,struct A68t163 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE217,MODE218,MODE97,MODE216,REF MODE169,REF MODE210,MODE163) REF MODE215 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t215 *,struct A68t200 *),(struct A68t215 *,struct A68t200 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE215) MODE200 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t234,(A68_VC ,A68_VC ,struct A68t181 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t181 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE26,MODE26,MODE181,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t235,(A68_VC ),(A68_VC ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t236,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t195 ,struct A68t97 ,A68_VC *),(struct A68t195 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE195,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t238,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t239,(struct A68t161 ,struct A68t97 ),(struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE161,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t161 ,A68_VC ,struct A68t97 ,struct A68t120 *),(struct A68t161 ,A68_VC ,struct A68t97 ,struct A68t120 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE161,MODE26,MODE97) MODE120 */
struct A68t242 ;

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t162 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t242 *),(struct A68t162 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t242 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE162,REF INT,REF MODE26,MODE97) MODE242 */
struct A68t242{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t161 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t161 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE161,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t244,(struct A68t161 ,struct A68t97 ,struct A68t46 ),(struct A68t161 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE161,MODE97,MODE46) INT */
struct A68t245{
A68_INT  Lwb;
A_PAD_INT(PAD_50)
A68_INT  Upb;
A_PAD_INT(PAD_51)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t161 ,struct A68t245 ,struct A68t97 ,struct A68t245 *),(struct A68t161 ,struct A68t245 ,struct A68t97 ,struct A68t245 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE161,MODE245,MODE97) MODE245 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t248,(struct A68t161 ,struct A68t97 ),(struct A68t161 ,struct A68t97 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE161,MODE97) CHAR */

A_PROCEDURE(struct A68t169 *,A68t249,(void),(void *));
typedef struct A68t249  A68_249 ;    /* PROC REF MODE169 */
struct A68t250{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_52)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_53)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_54)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_55)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_56)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_57)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_58)
A68_INT  Width;
A_PAD_INT(PAD_59)
A68_INT  Page_count;
A_PAD_INT(PAD_60)
A68_INT  Page_length;
A_PAD_INT(PAD_61)
A68_INT  Eof_count;
A_PAD_INT(PAD_62)
struct A68t183 * Standard_reader;
struct A68t251 * Infile;
struct A68t192  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE183,REF MODE251,MODE192,REF MODE92,REF MODE92)  */
struct A68t251{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_63)
A68_INT  Number;
A_PAD_INT(PAD_64)
A68_VC  Name;
struct A68t183 * Reader;
struct A68t251 * Previous;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE183,REF MODE251)  */

A_PROCEDURE(struct A68t250 *,A68t252,(void),(void *));
typedef struct A68t252  A68_252 ;    /* PROC REF MODE250 */

A_PROCEDURE(A68_VOID ,A68t253,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t254,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t255,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t192 ),(struct A68t192 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE192) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t211 ,struct A68t211 ),(struct A68t211 ,struct A68t211 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE211,REF MODE211) VOID */

A_PROCEDURE(A68_INT ,A68t258,(A68_VC ,A68_VC ,struct A68t211 ),(A68_VC ,A68_VC ,struct A68t211 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE26,MODE26,REF MODE211) INT */

A_PROCEDURE(struct A68t208 *,A68t259,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE208 */
struct A68t261 ;

A_PROCEDURE(A68_VOID ,A68t260,(A68_VC ,A68_VC ,struct A68t129 ,struct A68t261 ,struct A68t211 *),(A68_VC ,A68_VC ,struct A68t129 ,struct A68t261 ,struct A68t211 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE26,MODE26,MODE129,MODE261) REF MODE211 */

A_PROCEDURE(struct A68t215 **,A68t261,(void),(void *));
typedef struct A68t261  A68_261 ;    /* PROC REF REF MODE215 */
struct A68t264{
A68_CHAR  Mode;
A_PAD_CHAR(PAD_65)
A68_CHAR  Value;
A_PAD_CHAR(PAD_66)
};
typedef struct A68t264  A68_264 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t262{
struct A68t263 * Module;
struct A68t264  Star;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(REF MODE263,MODE264,REF MODE262)  */
A_VECTOR(struct A68t266 ,A68t265);
typedef struct A68t265  A68_265 ;    /* VECTOR [] MODE266 */
struct A68t266{
A68_VC  Name;
A68_VC  Value;
A68_VC  Initvalue;
struct A68t267 * Default;
A68_BOOL  Permanent;
A_PAD_BOOL(PAD_67)
A68_BITS  Marker;
A_PAD_BITS(PAD_68)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE267,BOOL,BITS)  */
struct A68t263{
A68_VC  Name;
A68_VC  Filename;
A68_BOOL  Decs;
A_PAD_BOOL(PAD_69)
A68_BOOL  Recursive;
A_PAD_BOOL(PAD_70)
A68_BOOL  Analysed;
A_PAD_BOOL(PAD_71)
A68_BITS  State;
A_PAD_BITS(PAD_72)
struct A68t265  Attributes;
A68_INT  Level;
A_PAD_INT(PAD_73)
A68_INT  Number;
A_PAD_INT(PAD_74)
A68_INT  Marker;
A_PAD_INT(PAD_75)
struct A68t262 * Uses;
struct A68t262 * Usedby;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE26,REF MODE26,BOOL,BOOL,BOOL,BITS,REF MODE265,INT,INT,INT,REF MODE262,REF MODE262)  */
struct A68t267{
A68_VC  Name;
A68_VC  Text;
A68_BITS  Tags;
A_PAD_BITS(PAD_76)
struct A68t267 * Last;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(REF MODE26,REF MODE26,BITS,REF MODE267,REF MODE267)  */

A_PROCEDURE(A68_BOOL ,A68t268,(struct A68t267 *),(struct A68t267 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE267) BOOL */
struct A68t270 ;

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t270 ,A68_VC *),(struct A68t270 ,A68_VC *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE270) REF MODE26 */
struct A68t270{
A68_VC  Operating_system;
A68_VC  Star_chars;
A68_VC  Edit_command;
A68_VC  Exe_dir;
A68_VC  Heap_size;
A68_BOOL  Case_sensitive;
A_PAD_BOOL(PAD_77)
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE26,BOOL)  */
A_VECTOR(struct A68t267 **,A68t271);
typedef struct A68t271  A68_271 ;    /* VECTOR [] REF REF MODE267 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t120 ,A68_VC *),(struct A68t120 ,A68_VC *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE120) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t273,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t274,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE26,MODE26) REF MODE26 */

A_PROCEDURE(struct A68t267 *,A68t275,(A68_VC ,A68_VC ,A68_BITS ),(A68_VC ,A68_VC ,A68_BITS ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE26,REF MODE26,BITS) REF MODE267 */

A_PROCEDURE(A68_INT ,A68t276,(A68_VC ),(A68_VC ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t267 *,A68t277,(A68_VC ,struct A68t268 ),(A68_VC ,struct A68t268 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE26,MODE268) REF MODE267 */

A_PROCEDURE(struct A68t267 *,A68t278,(A68_VC ),(A68_VC ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE26) REF MODE267 */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t267 *),(struct A68t267 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE267) VOID */

A_PROCEDURE(A68_BOOL ,A68t280,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE26,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t262 *,A68_INT ),(struct A68t262 *,A68_INT ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE262,INT) VOID */
struct A68t283 ;

A_PROCEDURE(struct A68t262 *,A68t282,(struct A68t262 *,struct A68t283 ),(struct A68t262 *,struct A68t283 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE262,MODE283) REF MODE262 */

A_PROCEDURE(A68_BOOL ,A68t283,(struct A68t263 *,struct A68t264 ),(struct A68t263 *,struct A68t264 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE263,MODE264) BOOL */

A_PROCEDURE(struct A68t262 *,A68t284,(struct A68t262 *,A68_VC ),(struct A68t262 *,A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE262,MODE26) REF MODE262 */

A_PROCEDURE(A68_BOOL ,A68t285,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE26,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t286,(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ),(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE26,MODE26,BITS,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t287,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t288,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE26,MODE97) BOOL */

A_PROCEDURE(struct A68t262 *,A68t289,(struct A68t262 *,A68_INT ),(struct A68t262 *,A68_INT ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE262,INT) REF MODE262 */

A_PROCEDURE(A68_BOOL ,A68t290,(struct A68t264 ,A68_VC ),(struct A68t264 ,A68_VC ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE264,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t263 *,A68_INT ,A68_VC *),(struct A68t263 *,A68_INT ,A68_VC *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE263,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t292,(struct A68t263 *,A68_INT ),(struct A68t263 *,A68_INT ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE263,INT) BOOL */
struct A68t294 ;

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t263 *,A68_INT ,struct A68t294 ),(struct A68t263 *,A68_INT ,struct A68t294 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE263,INT,MODE294) VOID */
struct A68t294 { A68_INT mode; union {
A68_VC  mode1;
A68_BOOL  mode2;
} data; };
typedef struct A68t294  A68_294 ;    /* UNION(REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t263 *,A68_INT ),(struct A68t263 *,A68_INT ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE263,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t262 *),(struct A68t262 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE262) VOID */

A_PROCEDURE(A68_BOOL ,A68t297,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE26,MODE26,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t298,(A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t97 ,struct A68t211 *),(struct A68t97 ,struct A68t211 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE97) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t300,(A68_VC ,A68_BOOL ,struct A68t97 ),(A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,89,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 89 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,53,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 2 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from mm_version --- */
extern A68_VC  OAAAAMM_mm_number;
/* --- End of imports from mm_version --- */


/* --- Imports from mm_actions --- */
extern A68_VOID  KYGAAMM_make_mm_commands(struct A68t97 ,A68_211 *);
extern A68_VOID  ZHFAAMM_obey_go_action(A68_VC ,A68_BOOL ,struct A68t97 );
/* --- End of imports from mm_actions --- */


/* --- Imports from mm_oscommands --- */
extern A68_VOID  BEDAAMM_close_oscommands(struct A68t97 );
extern A68_VOID  ICDAAMM_save_file(A68_VC ,struct A68t97 ,A68_VC *);
/* --- End of imports from mm_oscommands --- */


/* --- Imports from mm_basics --- */
extern A68_BOOL  UIAAAMM_ring_bell;
extern A68_BOOL  VIAAAMM_case_sensitive;
extern A68_INT  DDBAAMM_database_modified(void);
#define ZCBAAMM_save_none 0
#define BDBAAMM_save_modules 2
extern A68_BOOL  RIAAAMM_need_to_tidy;
extern A68_BOOL  SIAAAMM_diagnose;
extern A68_VC  ZJAAAMM_database_name;
extern A68_VC  XHAAAMM_mmd_type;
extern A68_VC  DIAAAMM_inp_type;
extern A68_VC  AKAAAMM_detach_name;
extern A68_VC  AIAAAMM_aux_type;
#define AJAAAMM_mmd_tag 0X002U
extern A68_VOID  UWAAAMM_set_lowercase(A68_VC );
#define EXAAAMM_default_no 2
#define FXAAAMM_no_default 3
extern A68_BOOL  JXAAAMM_query(A68_VC ,A68_INT ,struct A68t97 );
extern A68_BOOL  BUBAAMM_read_database(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 );
extern A68_VOID  HUBAAMM_create_database(A68_VC ,struct A68t97 );
extern A68_VOID  VACAAMM_save_database(A68_VC ,A68_VC ,A68_INT ,struct A68t97 );
/* --- End of imports from mm_basics --- */


/* --- Imports from globalcommands --- */
extern A68_VOID  OJHAOST_make_globalcommands(A68_VC ,A68_VC ,struct A68t129 ,struct A68t261 ,A68_211 *);
/* --- End of imports from globalcommands --- */


/* --- Imports from commandcaller --- */
extern A68_VOID  IYGAOST_report_error(struct A68t149 );
extern A68_VOID  YYGAOST_set_default_msg(struct A68t219 );
extern A68_VOID  HZGAOST_call_command(struct A68t215 *,struct A68t208 *,struct A68t163 ,struct A68t97 ,A68_200 *);
/* --- End of imports from commandcaller --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  CQGAOST_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  FXGAOST_initialise_ioprocs(struct A68t192 );
/* --- End of imports from ioprocs --- */


/* --- Imports from kernelreader --- */
extern A68_169 * UFGAOST_make_kernel_readers(void);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t163 ,struct A68t97 );
extern A68_201  XMDAOST_normalaccess;
extern A68_200  HODAOST_finish;
extern A68_200  LODAOST_quit;
extern A68_BOOL  SODAOST_(struct A68t200 ,struct A68t200 );
extern A68_210 * GTDAOST_make_compound(struct A68t208 *,A68_VC ,A68_VC *,struct A68t211 ,struct A68t211 ,struct A68t204 );
extern A68_215 * DPEAOST_initialise_commands(struct A68t217 ,struct A68t218 ,struct A68t97 ,struct A68t216 ,struct A68t169 *,struct A68t210 *,struct A68t163 );
extern A68_VOID  FSEAOST_interpret_commands(struct A68t215 *,A68_200 *);
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_160  SRAAOST_noparameters;
extern A68_163  ASAAOST_no_parameters;
/* --- End of imports from commandsyntax --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_VOID  ONAAOSI_translate_msg(struct A68t98 ,struct A68t46 ,A68_101 *);
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
extern A68_VOID  JQCAOSI_get_args(A68_46 *);
extern A68_BOOL  FIAAOST_interactive(void);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_136  TEAAOST_initialise_osinterface;
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
extern A68_BOOL  LJAAOST_filename_arg(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL );
extern A68_VOID  OMAAOST_parse_arguments(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 );
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAAMM(void);   /* mm_version */
extern void RHFAAMM(void);   /* mm_actions */
extern void AWCAAMM(void);   /* mm_oscommands */
extern void SAAAAMM(void);   /* mm_basics */
extern void DBHAOST(void);   /* globalcommands */
extern void AYGAOST(void);   /* commandcaller */
extern void TIGAOST(void);   /* ioprocs */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JFAAOSI(void);   /* messageproc */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_303   PSHAAMM = {"$Id: module_manage.a68,v 34.3 1995/03/29 13:02:37 ella Exp $"}; 
A_GISVEC(A68_VC ,QSHAAMM,PSHAAMM,60)
static A68_304   RSHAAMM = {"Module Manage"}; 
A_GISVEC(A68_VC ,SSHAAMM,RSHAAMM,13)
static A68_VC  TSHAAMM_prog_name;
static A68_305   USHAAMM = {"MM_SYSDIR"}; 
A_GISVEC(A68_VC ,VSHAAMM,USHAAMM,9)
static A68_VC  WSHAAMM_mm_sysdir;
static A68_306   YSHAAMM = {"31.10"}; 
A_GISVEC(A68_VC ,ZSHAAMM,YSHAAMM,5)
static A68_307   ATHAAMM = {"31:08:94"}; 
A_GISVEC(A68_VC ,BTHAAMM,ATHAAMM,8)
static A68_308   CTHAAMM = {""}; 
A_GISVEC(A68_VC ,DTHAAMM,CTHAAMM,0)
static A68_309   ETHAAMM = {"Please make a copy of your database files and any other relavent files and report details"}; 
A_GISVEC(A68_VC ,FTHAAMM,ETHAAMM,89)
static A68_215 * GTHAAMM_env;
static A68_CHAR  HTHAAMM_bell_char;
static A68_VC  MTHAAMM_mm_prompt;
static A68_310   OTHAAMM = {"Mm"}; 
A_GISVEC(A68_VC ,PTHAAMM,OTHAAMM,2)
static A68_VC  VTHAAMM_bell_prompt;
static A68_BOOL  JUHAAMM_have_database;
static A68_VC  KUHAAMM_param;
static A68_VC  LUHAAMM_node_name;
static A68_VC  MUHAAMM_in_fname;
static A68_310   SUHAAMM = {"-g"}; 
A_GISVEC(A68_VC ,TUHAAMM,SUHAAMM,2)
static A68_310   XUHAAMM = {"-i"}; 
A_GISVEC(A68_VC ,YUHAAMM,XUHAAMM,2)
static A68_306   ZUHAAMM = {"Input"}; 
A_GISVEC(A68_VC ,AVHAAMM,ZUHAAMM,5)
static A68_312   FVHAAMM = {"Unexpected option \""}; 
A_GISVEC(A68_VC ,GVHAAMM,FVHAAMM,19)
static A68_314   QVHAAMM = {" Extra argument \""}; 
A_GISVEC(A68_VC ,RVHAAMM,QVHAAMM,17)
static A68_200  EWHAAMM_result;
static A68_315   GWHAAMM = {"Give database file name ([-g node | -t filename]): "}; 
A_GISVEC(A68_VC ,HWHAAMM,GWHAAMM,51)
static A68_316   MWHAAMM = {"              Welcome to Module Manage version "}; 
A_GISVEC(A68_VC ,NWHAAMM,MWHAAMM,47)
static A68_VC  AXHAAMM_help_banner;
static A68_317   CXHAAMM = {"Module management program"}; 
A_GISVEC(A68_VC ,DXHAAMM,CXHAAMM,25)
static A68_307   GXHAAMM = {"MM_OUTER"}; 
A_GISVEC(A68_VC ,HXHAAMM,GXHAAMM,8)
static A68_210 * WXHAAMM_outer_command;
static A68_95   AYHAAMM = {"Read"}; 
A_GISVEC(A68_VC ,BYHAAMM,AYHAAMM,4)
static A68_318   DYHAAMM = {"No MM database named "}; 
A_GISVEC(A68_VC ,EYHAAMM,DYHAAMM,21)
static A68_319   IYHAAMM = {". Do you wish to create one"}; 
A_GISVEC(A68_VC ,JYHAAMM,IYHAAMM,27)
static A68_321   RYHAAMM = {"Database has been modified, do you realy wish to quit"}; 
A_GISVEC(A68_VC ,SYHAAMM,RYHAAMM,53)
static A68_INT  VYHAAMM_save_mode;
static A68_BOOL  WYHAAMM_save;
static A68_322   HZHAAMM = {"Tidyup :- "}; 
A_GISVEC(A68_VC ,IZHAAMM,HZHAAMM,10)
static A68_314   PZHAAMM = {"Continue to exit."}; 
A_GISVEC(A68_VC ,QZHAAMM,PZHAAMM,17)
A68_jmp_buf YYHAAMM_skip_tidy;
static A68_VC  ZZHAAMM_nn;
static A68_322   DAIAAMM = {"Save file "}; 
A_GISVEC(A68_VC ,EAIAAMM,DAIAAMM,10)
static A68_95   IAIAAMM = {" in "}; 
A_GISVEC(A68_VC ,JAIAAMM,IAIAAMM,4)
static A68_322   ABIAAMM = {"Save file "}; 
A_GISVEC(A68_VC ,BBIAAMM,ABIAAMM,10)
static A68_95   FBIAAMM = {" in "}; 
A_GISVEC(A68_VC ,GBIAAMM,FBIAAMM,4)

A_STATIC A68_VOID  JTHAAMM_generator(A68_BOOL  ITHAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  STHAAMM_generator(A68_BOOL  RTHAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EUHAAMM_get_prompt(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IUHAAMM_no_info(void);

A_STATIC A68_VOID  OUHAAMM_reset(void);

A_STATIC A68_BOOL  RUHAAMM_check_arg(A68_VC  Arg, A68_122  Next);

A_STATIC A68_BOOL  CWHAAMM_no_more(A68_BOOL  Ok);

A_STATIC A68_VOID  XWHAAMM_generator(A68_BOOL  WWHAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_215 ** MXHAAMM_anonymous(void);

A_STATIC A68_VOID  DZHAAMM_no_fail(A68_98  Msgno, A68_46  Params);

A_STATIC A68_VOID  JTHAAMM_generator(A68_BOOL  ITHAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KTHAAMM;  /* clause result */
A68_VC  LTHAAMM;  /* OPERATORS - dynamic generator */
{ 
LTHAAMM.upb = 2 ;
( ITHAAMM_anonymous? A_VLOC(A68_CHAR ,LTHAAMM): A_VHEAP(A68_CHAR ,LTHAAMM) );
KTHAAMM = LTHAAMM;
} 
*ReturnedValue = (KTHAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  STHAAMM_generator(A68_BOOL  RTHAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  TTHAAMM;  /* clause result */
A68_VC  UTHAAMM;  /* OPERATORS - dynamic generator */
{ 
UTHAAMM.upb = (MTHAAMM_mm_prompt.upb+3) ;
( RTHAAMM_anonymous? A_VLOC(A68_CHAR ,UTHAAMM): A_VHEAP(A68_CHAR ,UTHAAMM) );
TTHAAMM = UTHAAMM;
} 
*ReturnedValue = (TTHAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  EUHAAMM_get_prompt(A68_VC  *ReturnedValue)
{ 
A68_VC  FUHAAMM;  /* clause result */
A68_VC  GUHAAMM_prmpt;
A68_VC  HUHAAMM;  /* clause result */
A_PROC_ENTRY(get_prompt);
{ 
if ( UIAAAMM_ring_bell )
{ 
FUHAAMM = VTHAAMM_bell_prompt;
} 
else
{ 
FUHAAMM = MTHAAMM_mm_prompt;
} 
GUHAAMM_prmpt = FUHAAMM;
 /* line 70: */
UIAAAMM_ring_bell = A68_FALSE;
 /* line 71: */
 /* line 72: */
HUHAAMM = GUHAAMM_prmpt;
} 
A_PROC_EXIT(get_prompt);
*ReturnedValue = (HUHAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  IUHAAMM_no_info(void)
{ 
A_PROC_ENTRY(no_info);
/*SKIP*/;
A_PROC_EXIT(no_info);
return;
} 
#undef NL

A_STATIC A68_VOID  OUHAAMM_reset(void)
{ 
A_PROC_ENTRY(reset);
 /* line 85: */
MUHAAMM_in_fname = LUHAAMM_node_name = KUHAAMM_param = EOAAOSL_nullstr;
A_PROC_EXIT(reset);
return;
} 
#undef NL

A_STATIC A68_BOOL  RUHAAMM_check_arg(A68_VC  Arg, A68_122  Next)
{ 
A68_VC  UUHAAMM;  /* avoid structure result */
A68_VC  VUHAAMM;  /* avoid structure result */
A68_BOOL  WUHAAMM;  /* clause result */
A68_VC  BVHAAMM;  /* avoid structure result */
A68_BOOL  CVHAAMM;  /* optbool result */
A68_INT  DVHAAMM;  /* YIELD */
A68_313  EVHAAMM;  /* collateral clause result */
A68_52  HVHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IVHAAMM;  /* YIELD */
A68_52  JVHAAMM;  /* OPERATORS - mode -> union mode */
A68_52  KVHAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  LVHAAMM;  /* YIELD */
A68_52  MVHAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NVHAAMM;  /* procedure value */
A68_85  OVHAAMM;  /* OPERATORS - istruct -> vector */
A68_313  PVHAAMM;  /* collateral clause result */
A68_52  SVHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TVHAAMM;  /* YIELD */
A68_52  UVHAAMM;  /* OPERATORS - mode -> union mode */
A68_52  VVHAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  WVHAAMM;  /* YIELD */
A68_52  XVHAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YVHAAMM;  /* procedure value */
A68_85  ZVHAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  AWHAAMM;  /* avoid structure result */
A_PROC_ENTRY(check_arg);
 /* line 88: */
 /* line 89: */
if ( A_VC_EQ(Arg,TUHAAMM) )
{ 
A_CALLPROC(Next,( &UUHAAMM),( &UUHAAMM,(Next).nonlocals));
ZAAAOSI_makervc( UUHAAMM, &VUHAAMM );
LUHAAMM_node_name = VUHAAMM;
 /* line 90: */
 /* line 91: */
WUHAAMM = A68_TRUE;
} 
else
{ 
 /* line 92: */
if ( A_VC_EQ(Arg,YUHAAMM) )
{ 
 /* line 93: */
A_CALLPROC(Next,( &BVHAAMM),( &BVHAAMM,(Next).nonlocals));
WUHAAMM = LJAAOST_filename_arg(BVHAAMM, AVHAAMM, DIAAAMM_inp_type, (&MUHAAMM_in_fname), A68_TRUE);
} 
else
{ 
CVHAAMM = (Arg.upb>=1);
if ( CVHAAMM )
{DVHAAMM = 1 ;
CVHAAMM = (A_VINDEX(Arg,DVHAAMM)=='-');
}
 /* line 94: */
if ( CVHAAMM )
{ 
IVHAAMM = GVHAAMM ;
EVHAAMM.data[0] = A_UNITE(HVHAAMM,mode7,7,IVHAAMM);
EVHAAMM.data[1] = A_UNITE(JVHAAMM,mode7,7,Arg);
LVHAAMM = '\"' ;
EVHAAMM.data[2] = A_UNITE(KVHAAMM,mode6,6,LVHAAMM);
NVHAAMM.fn.fn_global = LRAAOSL_newline;
NVHAAMM.nonlocals = A68_NIL;
EVHAAMM.data[3] = A_UNITE(MVHAAMM,mode12,12,NVHAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OVHAAMM,EVHAAMM,4,A68_52 ));
 /* line 95: */
 /* line 96: */
WUHAAMM = A68_FALSE;
} 
else
{ 
 /* line 97: */
if ( (KUHAAMM_param.upb>0) )
{ 
TVHAAMM = RVHAAMM ;
PVHAAMM.data[0] = A_UNITE(SVHAAMM,mode7,7,TVHAAMM);
PVHAAMM.data[1] = A_UNITE(UVHAAMM,mode7,7,Arg);
WVHAAMM = '\"' ;
PVHAAMM.data[2] = A_UNITE(VVHAAMM,mode6,6,WVHAAMM);
YVHAAMM.fn.fn_global = LRAAOSL_newline;
YVHAAMM.nonlocals = A68_NIL;
PVHAAMM.data[3] = A_UNITE(XVHAAMM,mode12,12,YVHAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZVHAAMM,PVHAAMM,4,A68_52 ));
 /* line 98: */
 /* line 99: */
 /* line 100: */
WUHAAMM = A68_FALSE;
} 
else
{ 
ZAAAOSI_makervc( Arg, &AWHAAMM );
KUHAAMM_param = AWHAAMM;
 /* line 101: */
 /* line 102: */
WUHAAMM = A68_TRUE;
} 
} 
} 
} 
A_PROC_EXIT(check_arg);
return( WUHAAMM );
} 
#undef NL

A_STATIC A68_BOOL  CWHAAMM_no_more(A68_BOOL  Ok)
{ 
A68_BOOL  DWHAAMM;  /* clause result */
A_PROC_ENTRY(no_more);
DWHAAMM = Ok;
A_PROC_EXIT(no_more);
return( DWHAAMM );
} 
#undef NL

A_STATIC A68_VOID  XWHAAMM_generator(A68_BOOL  WWHAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YWHAAMM;  /* clause result */
A68_VC  ZWHAAMM;  /* OPERATORS - dynamic generator */
{ 
ZWHAAMM.upb = 25 ;
( WWHAAMM_anonymous? A_VLOC(A68_CHAR ,ZWHAAMM): A_VHEAP(A68_CHAR ,ZWHAAMM) );
YWHAAMM = ZWHAAMM;
} 
*ReturnedValue = (YWHAAMM);
return;
} 
#undef NL

A_STATIC A68_215 ** MXHAAMM_anonymous(void)
{ 
A68_215 ** NXHAAMM;  /* clause result */
NXHAAMM = (&GTHAAMM_env);
return( NXHAAMM );
} 
#undef NL

A_STATIC A68_VOID  DZHAAMM_no_fail(A68_98  Msgno, A68_46  Params)
{ 
A68_101  EZHAAMM;  /* avoid structure result */
A68_101  FZHAAMM_message;
A68_323  GZHAAMM;  /* collateral clause result */
A68_52  JZHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KZHAAMM;  /* YIELD */
A68_52  LZHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MZHAAMM;  /* YIELD */
A68_52  NZHAAMM;  /* OPERATORS - mode -> union mode */
A68_56  OZHAAMM;  /* procedure value */
A68_52  RZHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SZHAAMM;  /* YIELD */
A68_52  TZHAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UZHAAMM;  /* procedure value */
A68_85  VZHAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(no_fail);
 /* line 176: */
 /* line 177: */
{ 
ONAAOSI_translate_msg( Msgno, Params, &EZHAAMM );
FZHAAMM_message = EZHAAMM;
 /* line 179: */
KZHAAMM = IZHAAMM ;
GZHAAMM.data[0] = A_UNITE(JZHAAMM,mode7,7,KZHAAMM);
MZHAAMM = FZHAAMM_message.Text ;
GZHAAMM.data[1] = A_UNITE(LZHAAMM,mode7,7,MZHAAMM);
 /* line 180: */
OZHAAMM.fn.fn_global = LRAAOSL_newline;
OZHAAMM.nonlocals = A68_NIL;
GZHAAMM.data[2] = A_UNITE(NZHAAMM,mode12,12,OZHAAMM);
SZHAAMM = QZHAAMM ;
GZHAAMM.data[3] = A_UNITE(RZHAAMM,mode7,7,SZHAAMM);
UZHAAMM.fn.fn_global = LRAAOSL_newline;
UZHAAMM.nonlocals = A68_NIL;
GZHAAMM.data[4] = A_UNITE(TZHAAMM,mode12,12,UZHAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VZHAAMM,GZHAAMM,5,A68_52 ));
 /* line 181: */
 /* line 182: */
siglongjmp(YYHAAMM_skip_tidy.label,1);
} 
A_PROC_EXIT(no_fail);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 9: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/module_manage.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/mm_version.m","./mfiles/mm_actions.m","./mfiles/mm_oscommands.m","./mfiles/mm_basics.m","/u/model/ella/ostools/assoc/mfiles/globalcommands.m","/u/model/ella/ostools/assoc/mfiles/commandcaller.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_134  XSHAAMM;  /* collateral clause result */
A68_VC  NTHAAMM;  /* avoid structure result */
A68_VC  QTHAAMM;  /* OPERATORS - assign op */
A68_VC  WTHAAMM;  /* avoid structure result */
A68_311  XTHAAMM;  /* collateral clause result */
A68_VC  YTHAAMM;  /* OPERATORS - trim index */
A68_VC  ZTHAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  AUHAAMM;  /* YIELD */
A68_VC  BUHAAMM;  /* OPERATORS - assign op */
A68_VC  CUHAAMM;  /* OPERATORS - trim index */
A68_VC  DUHAAMM;  /* YIELD */
A68_192  NUHAAMM;  /* procedure value */
A68_46  FWHAAMM;  /* avoid structure result */
A68_129  IWHAAMM;  /* procedure value */
A68_140  JWHAAMM;  /* procedure value */
A68_141  KWHAAMM;  /* procedure value */
A68_313  LWHAAMM;  /* collateral clause result */
A68_52  OWHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PWHAAMM;  /* YIELD */
A68_52  QWHAAMM;  /* OPERATORS - mode -> union mode */
A68_52  RWHAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SWHAAMM;  /* procedure value */
A68_52  TWHAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UWHAAMM;  /* procedure value */
A68_85  VWHAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  BXHAAMM;  /* avoid structure result */
A68_VC  EXHAAMM;  /* OPERATORS - assign op */
A68_208  FXHAAMM;  /* collateral clause result */
A68_VC  IXHAAMM;  /* avoid structure result */
A68_212  JXHAAMM;  /* OPERATORS - mode -> union mode */
A68_204  KXHAAMM;  /* OPERATORS - mode -> union mode */
A68_205  LXHAAMM;  /* procedure value */
A68_204  OXHAAMM;  /* OPERATORS - mode -> union mode */
A68_205  PXHAAMM;  /* procedure value */
A68_129  QXHAAMM;  /* procedure value */
A68_261  RXHAAMM;  /* procedure value */
A68_211  SXHAAMM;  /* avoid structure result */
A68_211  TXHAAMM;  /* avoid structure result */
A68_VC * UXHAAMM;  /* YIELD */
A68_208 * VXHAAMM;  /* YIELD */
A68_217  XXHAAMM;  /* procedure value */
A68_218  YXHAAMM;  /* procedure value */
A68_216  ZXHAAMM;  /* procedure value */
A68_320  CYHAAMM;  /* collateral clause result */
A68_52  FYHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GYHAAMM;  /* YIELD */
A68_52  HYHAAMM;  /* OPERATORS - mode -> union mode */
A68_52  KYHAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LYHAAMM;  /* YIELD */
A68_BOOL  MYHAAMM;  /* clause result */
A68_85  NYHAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  OYHAAMM;  /* avoid structure result */
A68_200  PYHAAMM;  /* avoid structure result */
A68_BOOL  QYHAAMM;  /* optbool result */
A68_BOOL  TYHAAMM;  /* clause result */
A68_BOOL  UYHAAMM;  /* clause result */
A68_BOOL  XYHAAMM;  /* optbool result */
A68_324  WZHAAMM;  /* collateral clause result */
A68_52  XZHAAMM;  /* OPERATORS - mode -> union mode */
A68_52  YZHAAMM;  /* OPERATORS - mode -> union mode */
A68_85  AAIAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  BAIAAMM;  /* avoid structure result */
A68_323  CAIAAMM;  /* collateral clause result */
A68_52  FAIAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GAIAAMM;  /* YIELD */
A68_52  HAIAAMM;  /* OPERATORS - mode -> union mode */
A68_52  KAIAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LAIAAMM;  /* YIELD */
A68_97  MAIAAMM;  /* procedure value */
A68_VC  NAIAAMM;  /* avoid structure result */
A68_52  OAIAAMM;  /* OPERATORS - mode -> union mode */
A68_52  PAIAAMM;  /* OPERATORS - mode -> union mode */
A68_56  QAIAAMM;  /* procedure value */
A68_85  RAIAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  SAIAAMM;  /* optbool result */
A68_BOOL  TAIAAMM;  /* optbool result */
A68_324  UAIAAMM;  /* collateral clause result */
A68_52  VAIAAMM;  /* OPERATORS - mode -> union mode */
A68_52  WAIAAMM;  /* OPERATORS - mode -> union mode */
A68_85  XAIAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  YAIAAMM;  /* avoid structure result */
A68_323  ZAIAAMM;  /* collateral clause result */
A68_52  CBIAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DBIAAMM;  /* YIELD */
A68_52  EBIAAMM;  /* OPERATORS - mode -> union mode */
A68_52  HBIAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IBIAAMM;  /* YIELD */
A68_97  JBIAAMM;  /* procedure value */
A68_VC  KBIAAMM;  /* avoid structure result */
A68_52  LBIAAMM;  /* OPERATORS - mode -> union mode */
A68_52  MBIAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NBIAAMM;  /* procedure value */
A68_85  OBIAAMM;  /* OPERATORS - istruct -> vector */
if ( sigsetjmp( YYHAAMM_skip_tidy.label,1) ) goto ZYHAAMM_skip_tidy;
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
BAAAAMM();   /* USE mm_version */
RHFAAMM();   /* USE mm_actions */
AWCAAMM();   /* USE mm_oscommands */
SAAAAMM();   /* USE mm_basics */
DBHAOST();   /* USE globalcommands */
AYGAOST();   /* USE commandcaller */
TIGAOST();   /* USE ioprocs */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JFAAOSI();   /* USE messageproc */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/module_manage.a68";
A_config.translation_time = "Tue Apr  4 09:55:40 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MSHAAMM (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, QSHAAMM);
 /* line 50: */
TSHAAMM_prog_name = SSHAAMM;
WSHAAMM_mm_sysdir = VSHAAMM;
 /* line 52: */
 /* line 54: */
XSHAAMM.Name = TSHAAMM_prog_name;
XSHAAMM.Version = ZSHAAMM;
XSHAAMM.Date = BTHAAMM;
 /* line 56: */
XSHAAMM.Msg = DTHAAMM;
XSHAAMM.Sys_fault = FTHAAMM;
A_CALLPROC(TEAAOST_initialise_osinterface,(XSHAAMM, A68_TRUE),(XSHAAMM, A68_TRUE,(TEAAOST_initialise_osinterface).nonlocals));
 /* line 58: */
 /* line 59: */
HTHAAMM_bell_char = (A68_CHAR)7;
 /* line 60: */
JTHAAMM_generator( A68_TRUE, &NTHAAMM );
MTHAAMM_mm_prompt = NTHAAMM;
QTHAAMM = PTHAAMM ;
A_VASSIGN2(QTHAAMM,MTHAAMM_mm_prompt,A68_CHAR );
 /* line 61: */
STHAAMM_generator( A68_TRUE, &WTHAAMM );
VTHAAMM_bell_prompt = WTHAAMM;
 /* line 63: */
XTHAAMM.data[0] = HTHAAMM_bell_char;
XTHAAMM.data[1] = HTHAAMM_bell_char;
XTHAAMM.data[2] = HTHAAMM_bell_char;
AUHAAMM = A_VTRIM(YTHAAMM,(VTHAAMM_bell_prompt),A_VTSCRIPT(&(YTHAAMM.upb),(VTHAAMM_bell_prompt).upb,1,3)) ;
BUHAAMM = A_HISVEC(ZTHAAMM,XTHAAMM,3,A68_CHAR ) ;
A_VASSIGN2(BUHAAMM,AUHAAMM,A68_CHAR );
 /* line 64: */
DUHAAMM = A_VTRIM(CUHAAMM,(VTHAAMM_bell_prompt),A_VTSCRIPT(&(CUHAAMM.upb),(VTHAAMM_bell_prompt).upb,4,(VTHAAMM_bell_prompt).upb)) ;
A_VASSIGN2(MTHAAMM_mm_prompt,DUHAAMM,A68_CHAR );
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 74: */
 /* line 75: */
JUHAAMM_have_database = A68_TRUE;
 /* line 76: */
KUHAAMM_param = EOAAOSL_nullstr;
 /* line 77: */
LUHAAMM_node_name = EOAAOSL_nullstr;
 /* line 78: */
MUHAAMM_in_fname = EOAAOSL_nullstr;
 /* line 80: */
NUHAAMM.fn.fn_global = EUHAAMM_get_prompt;
NUHAAMM.nonlocals = A68_NIL;
FXGAOST_initialise_ioprocs(NUHAAMM);
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 87: */
 /* line 104: */
 /* line 105: */
EWHAAMM_result = LODAOST_quit;
 /* line 107: */
 /* line 108: */
JQCAOSI_get_args(  &FWHAAMM );
if ( (FWHAAMM.upb>1) )
{ 
 /* line 109: */
 /* line 110: */
IWHAAMM.fn.fn_global = OUHAAMM_reset;
IWHAAMM.nonlocals = A68_NIL;
JWHAAMM.fn.fn_global = RUHAAMM_check_arg;
JWHAAMM.nonlocals = A68_NIL;
KWHAAMM.fn.fn_global = CWHAAMM_no_more;
KWHAAMM.nonlocals = A68_NIL;
OMAAOST_parse_arguments(HWHAAMM, IWHAAMM, JWHAAMM, KWHAAMM);
} 
 /* line 114: */
if ( (MUHAAMM_in_fname.upb>0) )
{ 
CQGAOST_io_input(MUHAAMM_in_fname, ZLBAOSI_global_msg);
} 
 /* line 116: */
PWHAAMM = NWHAAMM ;
LWHAAMM.data[0] = A_UNITE(OWHAAMM,mode7,7,PWHAAMM);
 /* line 117: */
LWHAAMM.data[1] = A_UNITE(QWHAAMM,mode7,7,OAAAAMM_mm_number);
SWHAAMM.fn.fn_global = LRAAOSL_newline;
SWHAAMM.nonlocals = A68_NIL;
LWHAAMM.data[2] = A_UNITE(RWHAAMM,mode12,12,SWHAAMM);
UWHAAMM.fn.fn_global = LRAAOSL_newline;
UWHAAMM.nonlocals = A68_NIL;
LWHAAMM.data[3] = A_UNITE(TWHAAMM,mode12,12,UWHAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VWHAAMM,LWHAAMM,4,A68_52 ));
 /* line 119: */
XWHAAMM_generator( A68_TRUE, &BXHAAMM );
AXHAAMM_help_banner = BXHAAMM;
EXHAAMM = DXHAAMM ;
A_VASSIGN2(EXHAAMM,AXHAAMM_help_banner,A68_CHAR );
 /* line 120: */
 /* line 122: */
ZAAAOSI_makervc( HXHAAMM, &IXHAAMM );
FXHAAMM.Name = IXHAAMM;
FXHAAMM.Abreviation = EOAAOSL_nullstr;
 /* line 123: */
FXHAAMM.Parameter = SRAAOST_noparameters;
FXHAAMM.Access = XMDAOST_normalaccess;
 /* line 124: */
FXHAAMM.Continuation = HODAOST_finish;
FXHAAMM.Help = A_UNITE(JXHAAMM,mode1,1,AXHAAMM_help_banner);
LXHAAMM.fn.fn_global = MMDAOST_nullcommand;
LXHAAMM.nonlocals = A68_NIL;
FXHAAMM.Command = A_UNITE(KXHAAMM,mode2,2,LXHAAMM);
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 131: */
PXHAAMM.fn.fn_global = MMDAOST_nullcommand;
PXHAAMM.nonlocals = A68_NIL;
QXHAAMM.fn.fn_global = IUHAAMM_no_info;
QXHAAMM.nonlocals = A68_NIL;
RXHAAMM.fn.fn_global = MXHAAMM_anonymous;
RXHAAMM.nonlocals = A68_NIL;
OJHAOST_make_globalcommands( WSHAAMM_mm_sysdir, XHAAAMM_mmd_type, QXHAAMM, RXHAAMM, &SXHAAMM );
KYGAAMM_make_mm_commands( ZLBAOSI_global_msg, &TXHAAMM );
UXHAAMM = A_HEAP(A68_VC ) ;
(*UXHAAMM) = MTHAAMM_mm_prompt ;
VXHAAMM = A_HEAP(A68_208 ) ;
(*VXHAAMM) = FXHAAMM ;
WXHAAMM_outer_command = GTDAOST_make_compound(VXHAAMM, AXHAAMM_help_banner, UXHAAMM, TXHAAMM, SXHAAMM, A_UNITE(OXHAAMM,mode2,2,PXHAAMM));
 /* line 133: */
 /* line 134: */
 /* line 135: */
XXHAAMM.fn.fn_global = IYGAOST_report_error;
XXHAAMM.nonlocals = A68_NIL;
YXHAAMM.fn.fn_global = YYGAOST_set_default_msg;
YXHAAMM.nonlocals = A68_NIL;
ZXHAAMM.fn.fn_global = HZGAOST_call_command;
ZXHAAMM.nonlocals = A68_NIL;
GTHAAMM_env = DPEAOST_initialise_commands(XXHAAMM, YXHAAMM, ZLBAOSI_global_msg, ZXHAAMM, UFGAOST_make_kernel_readers(), WXHAAMM_outer_command, ASAAOST_no_parameters);
 /* line 137: */
if ( (KUHAAMM_param.upb>0) )
{ 
ZJAAAMM_database_name = KUHAAMM_param;
} 
 /* line 138: */
if ( !VIAAAMM_case_sensitive )
{ 
UWAAAMM_set_lowercase(ZJAAAMM_database_name);
} 
 /* line 139: */
 /* line 140: */
if ( !BUBAAMM_read_database(ZJAAAMM_database_name, BYHAAMM, AJAAAMM_mmd_tag, ZLBAOSI_global_msg) )
{ 
GYHAAMM = EYHAAMM ;
CYHAAMM.data[0] = A_UNITE(FYHAAMM,mode7,7,GYHAAMM);
 /* line 141: */
CYHAAMM.data[1] = A_UNITE(HYHAAMM,mode7,7,ZJAAAMM_database_name);
LYHAAMM = JYHAAMM ;
CYHAAMM.data[2] = A_UNITE(KYHAAMM,mode7,7,LYHAAMM);
 /* line 142: */
 /* line 143: */
UJBAOSL_oneline( A_HISVEC(NYHAAMM,CYHAAMM,3,A68_52 ), &OYHAAMM );
MYHAAMM = JXAAAMM_query(OYHAAMM, EXAAAMM_default_no, ZLBAOSI_global_msg);
if ( MYHAAMM )
{ 
 /* line 144: */
 /* line 145: */
HUBAAMM_create_database(ZJAAAMM_database_name, ZLBAOSI_global_msg);
} 
else
{ 
 /* line 146: */
 /* line 147: */
JUHAAMM_have_database = A68_FALSE;
} 
} 
 /* line 149: */
 /* line 151: */
if ( !JUHAAMM_have_database )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 152: */
if ( (LUHAAMM_node_name.upb>0) )
{ 
ZHFAAMM_obey_go_action(LUHAAMM_node_name, FIAAOST_interactive(), ZLBAOSI_global_msg);
 /* line 153: */
 /* line 154: */
EWHAAMM_result = HODAOST_finish;
} 
else
{ 
 /* line 155: */
if ( FIAAOST_interactive() )
{ 
for ( ;; )
{ 
 /* line 156: */
FSEAOST_interpret_commands( GTHAAMM_env, &PYHAAMM );
EWHAAMM_result = PYHAAMM;
 /* line 157: */
 /* line 158: */
QYHAAMM = SODAOST_(EWHAAMM_result, HODAOST_finish);
if ( ! QYHAAMM )
{QYHAAMM = SIAAAMM_diagnose;
}
 /* line 159: */
if ( ! QYHAAMM )
{QYHAAMM = (DDBAAMM_database_modified()==ZCBAAMM_save_none);
}
 /* line 160: */
if ( ! QYHAAMM )
{ /* line 161: */
 /* line 162: */
QYHAAMM = JXAAAMM_query(SYHAAMM, FXAAAMM_no_default, ZLBAOSI_global_msg);
}
 /* line 163: */
if ( QYHAAMM )
{ 
 /* line 164: */
 /* line 165: */
TYHAAMM = A68_FALSE;
} 
else
{ 
 /* line 166: */
 /* line 167: */
TYHAAMM = A68_TRUE;
} 
UYHAAMM = TYHAAMM;
if ( !UYHAAMM ) break;
/*SKIP*/;
}
 /* line 168: */
} 
} 
} 
 /* line 170: */
 /* line 171: */
if ( SODAOST_(EWHAAMM_result, HODAOST_finish) )
{ 
VYHAAMM_save_mode = DDBAAMM_database_modified();
 /* line 172: */
WYHAAMM_save = (VYHAAMM_save_mode!=ZCBAAMM_save_none);
 /* line 174: */
XYHAAMM = RIAAAMM_need_to_tidy;
if ( ! XYHAAMM )
{XYHAAMM = WYHAAMM_save;
}
 /* line 175: */
if ( XYHAAMM )
{ 
 /* line 184: */
WZHAAMM.data[0] = A_UNITE(XZHAAMM,mode7,7,ZJAAAMM_database_name);
WZHAAMM.data[1] = A_UNITE(YZHAAMM,mode7,7,XHAAAMM_mmd_type);
UJBAOSL_oneline( A_HISVEC(AAIAAMM,WZHAAMM,2,A68_52 ), &BAIAAMM );
ZZHAAMM_nn = BAIAAMM;
 /* line 186: */
GAIAAMM = EAIAAMM ;
CAIAAMM.data[0] = A_UNITE(FAIAAMM,mode7,7,GAIAAMM);
CAIAAMM.data[1] = A_UNITE(HAIAAMM,mode7,7,ZZHAAMM_nn);
LAIAAMM = JAIAAMM ;
CAIAAMM.data[2] = A_UNITE(KAIAAMM,mode7,7,LAIAAMM);
 /* line 187: */
MAIAAMM.fn.fn_global = DZHAAMM_no_fail;
MAIAAMM.nonlocals = A68_NIL;
ICDAAMM_save_file( ZZHAAMM_nn, MAIAAMM, &NAIAAMM );
CAIAAMM.data[3] = A_UNITE(OAIAAMM,mode7,7,NAIAAMM);
QAIAAMM.fn.fn_global = LRAAOSL_newline;
QAIAAMM.nonlocals = A68_NIL;
CAIAAMM.data[4] = A_UNITE(PAIAAMM,mode12,12,QAIAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RAIAAMM,CAIAAMM,5,A68_52 ));
 /* line 188: */
 /* line 189: */
SAIAAMM = (AKAAAMM_detach_name.upb>0);
if ( SAIAAMM )
{TAIAAMM = RIAAAMM_need_to_tidy;
if ( ! TAIAAMM )
{TAIAAMM = (VYHAAMM_save_mode>=BDBAAMM_save_modules);
}
SAIAAMM = TAIAAMM;
}
 /* line 190: */
if ( SAIAAMM )
{ 
UAIAAMM.data[0] = A_UNITE(VAIAAMM,mode7,7,AKAAAMM_detach_name);
UAIAAMM.data[1] = A_UNITE(WAIAAMM,mode7,7,AIAAAMM_aux_type);
UJBAOSL_oneline( A_HISVEC(XAIAAMM,UAIAAMM,2,A68_52 ), &YAIAAMM );
ZZHAAMM_nn = YAIAAMM;
 /* line 191: */
DBIAAMM = BBIAAMM ;
ZAIAAMM.data[0] = A_UNITE(CBIAAMM,mode7,7,DBIAAMM);
ZAIAAMM.data[1] = A_UNITE(EBIAAMM,mode7,7,ZZHAAMM_nn);
 /* line 192: */
IBIAAMM = GBIAAMM ;
ZAIAAMM.data[2] = A_UNITE(HBIAAMM,mode7,7,IBIAAMM);
 /* line 193: */
JBIAAMM.fn.fn_global = DZHAAMM_no_fail;
JBIAAMM.nonlocals = A68_NIL;
ICDAAMM_save_file( ZZHAAMM_nn, JBIAAMM, &KBIAAMM );
ZAIAAMM.data[3] = A_UNITE(LBIAAMM,mode7,7,KBIAAMM);
NBIAAMM.fn.fn_global = LRAAOSL_newline;
NBIAAMM.nonlocals = A68_NIL;
ZAIAAMM.data[4] = A_UNITE(MBIAAMM,mode12,12,NBIAAMM);
 /* line 194: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OBIAAMM,ZAIAAMM,5,A68_52 ));
} 
 /* line 196: */
ZYHAAMM_skip_tidy:
 /* line 198: */
 /* line 199: */
if ( WYHAAMM_save )
{ 
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
VACAAMM_save_database(ZJAAAMM_database_name, AKAAAMM_detach_name, VYHAAMM_save_mode, ZLBAOSI_global_msg);
} 
} 
} 
 /* line 205: */
BEDAAMM_close_oscommands(ZLBAOSI_global_msg);
 /* line 206: */
 /* line 207: */
 /* line 208: */
/*SKIP*/;
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/module_manage.a68 */
